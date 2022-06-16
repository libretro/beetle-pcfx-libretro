#include <stdarg.h>
#include <errno.h>
#include <string.h>
#include <math.h>

#ifdef _MSC_VER
#include <compat/msvc.h>
#endif

#include <string/stdstring.h>
#include <retro_timers.h>
#include <streams/file_stream.h>

#include "mednafen/error.h"
#include "mednafen/mempatcher.h"
#include "mednafen/git.h"
#include "mednafen/general.h"
#include "mednafen/settings.h"
#include "mednafen/md5.h"
#ifdef NEED_DEINTERLACER
#include "mednafen/video/Deinterlacer.h"
#endif
#include "libretro.h"
#include <rthreads/rthreads.h>

#include "mednafen/pcfx/pcfx.h"
#include "mednafen/pcfx/soundbox.h"
#include "mednafen/pcfx/input.h"
#include "mednafen/pcfx/king.h"
#include "mednafen/pcfx/timer.h"
#include "mednafen/pcfx/interrupt.h"
#include "mednafen/pcfx/rainbow.h"
#include "mednafen/pcfx/huc6273.h"
#include "mednafen/cdrom/scsicd.h"
#include "mednafen/mempatcher.h"
#include "mednafen/cdrom/cdromif.h"
#include "mednafen/md5.h"
#include "mednafen/clamp.h"
#include "mednafen/state_helpers.h"

#include "libretro_core_options.h"

struct retro_perf_callback perf_cb;
retro_get_cpu_features_t perf_get_cpu_features_cb = NULL;
retro_log_printf_t log_cb;
static retro_video_refresh_t video_cb;
static retro_audio_sample_t audio_cb;
static retro_audio_sample_batch_t audio_batch_cb;
static retro_environment_t environ_cb;
static retro_input_poll_t input_poll_cb;
static retro_input_state_t input_state_cb;

static MDFN_PixelFormat last_pixel_format;

static MDFN_Surface surf;

static bool failed_init;


static std::string retro_base_directory;
static std::string retro_save_directory;

static bool cd_eject_state;

static bool libretro_supports_bitmasks = false;
static bool libretro_supports_option_categories = false;

typedef struct
{
   unsigned initial_index;
   std::string initial_path;
   std::vector<std::string> image_paths;
   std::vector<std::string> image_labels;
} disk_control_ext_info_t;

static disk_control_ext_info_t disk_control_ext_info;

MDFNGI EmulatedPCFX =
{
   288,  // Nominal width
   240,  // Nominal height
};

void MDFN_DispMessage(const char *format, ...)
{
   struct retro_message msg;
   va_list ap;
   char *str        = new char[4096];
   const char *strc = NULL;

   va_start(ap,format);

   vsnprintf(str, 4096, format,ap);
   va_end(ap);
   strc = str;

   msg.frames = 180;
   msg.msg = strc;

   environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
}

/* Forward declarations */
void MDFN_LoadGameCheats(void);
void MDFN_FlushGameCheats(void);

/* Mednafen - Multi-system Emulator
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* FIXME:  soundbox, vce, vdc, rainbow, and king store wait states should be 4, not 2, but V810 has write buffers which can mask wait state penalties.
  This is a hack to somewhat address the issue, but to really fix it, we need to handle write buffer emulation in the V810 emulation core itself.
*/

static std::vector<CDIF*> *cdifs = NULL;
static bool CD_TrayOpen;
static int CD_SelectedDisc;	// -1 for no disc

V810 PCFX_V810;

static uint8 *BIOSROM   = NULL;	// 1MB
static uint8 *RAM       = NULL;	// 2MB

static uint32 RAM_LPA;		// Last page access

static const int RAM_PageSize = 2048;
static const int RAM_PageNOTMask = ~(RAM_PageSize - 1);

static uint16 Last_VDC_AR[2];

static bool WantHuC6273 = FALSE;

//static
VDC *fx_vdc_chips[2];

static uint16 BackupControl;
static uint8 SaveRAM[2 * 0x8000]; // BackupRAM + ExBackupRAM
static uint8* BackupRAM = (uint8*)(SaveRAM + (0x8000 * 0));
static uint8* ExBackupRAM = (uint8*)(SaveRAM + (0x8000 * 1));
static uint8 ExBusReset; // I/O Register at 0x0700

static bool BRAMDisabled;// Cached at game load, don't remove this caching behavior or save game loss may result(if we ever get a GUI).

// Checks to see if this main-RAM-area access
// is in the same DRAM page as the last access.
#define RAMLPCHECK \
{ \
   if ((A & RAM_PageNOTMask) != RAM_LPA) \
   { \
      timestamp += 3; \
      RAM_LPA = A & RAM_PageNOTMask; \
   } \
}

static v810_timestamp_t next_pad_ts, next_timer_ts, next_adpcm_ts, next_king_ts;

static void PCFX_FixNonEvents(void)
{
   if (next_pad_ts & 0x40000000)
      next_pad_ts = PCFX_EVENT_NONONO;

   if (next_timer_ts & 0x40000000)
      next_timer_ts = PCFX_EVENT_NONONO;

   if (next_adpcm_ts & 0x40000000)
      next_adpcm_ts = PCFX_EVENT_NONONO;

   if (next_king_ts & 0x40000000)
      next_king_ts = PCFX_EVENT_NONONO;
}

static void PCFX_Event_Reset(void)
{
   next_pad_ts   = PCFX_EVENT_NONONO;
   next_timer_ts = PCFX_EVENT_NONONO;
   next_adpcm_ts = PCFX_EVENT_NONONO;
   next_king_ts  = PCFX_EVENT_NONONO;
}

static INLINE uint32 CalcNextTS(void)
{
   v810_timestamp_t next_timestamp = next_king_ts;

   if (next_timestamp > next_pad_ts)
      next_timestamp  = next_pad_ts;

   if (next_timestamp > next_timer_ts)
      next_timestamp = next_timer_ts;

   if (next_timestamp > next_adpcm_ts)
      next_timestamp = next_adpcm_ts;

   return next_timestamp;
}

static void RebaseTS(const v810_timestamp_t timestamp, const v810_timestamp_t new_base_timestamp)
{
   assert(next_pad_ts > timestamp);
   assert(next_timer_ts > timestamp);
   assert(next_adpcm_ts > timestamp);
   assert(next_king_ts > timestamp);

   next_pad_ts   -= (timestamp - new_base_timestamp);
   next_timer_ts -= (timestamp - new_base_timestamp);
   next_adpcm_ts -= (timestamp - new_base_timestamp);
   next_king_ts  -= (timestamp - new_base_timestamp);
}


void PCFX_SetEvent(const int type, const v810_timestamp_t next_timestamp)
{
   if (type == PCFX_EVENT_PAD)
      next_pad_ts = next_timestamp;
   else if (type == PCFX_EVENT_TIMER)
      next_timer_ts = next_timestamp;
   else if (type == PCFX_EVENT_ADPCM)
      next_adpcm_ts = next_timestamp;
   else if (type == PCFX_EVENT_KING)
      next_king_ts = next_timestamp;

   if (next_timestamp < PCFX_V810.GetEventNT())
      PCFX_V810.SetEventNT(next_timestamp);
}

static int32 MDFN_FASTCALL pcfx_event_handler(const v810_timestamp_t timestamp)
{
   if (timestamp >= next_king_ts)
      next_king_ts = KING_Update(timestamp);

   if (timestamp >= next_pad_ts)
      next_pad_ts = FXINPUT_Update(timestamp);

   if (timestamp >= next_timer_ts)
      next_timer_ts = FXTIMER_Update(timestamp);

   if (timestamp >= next_adpcm_ts)
      next_adpcm_ts = SoundBox_ADPCMUpdate(timestamp);

   return CalcNextTS();
}

// Called externally from debug.cpp
static void ForceEventUpdates(const uint32 timestamp)
{
   next_king_ts = KING_Update(timestamp);
   next_pad_ts = FXINPUT_Update(timestamp);
   next_timer_ts = FXTIMER_Update(timestamp);
   next_adpcm_ts = SoundBox_ADPCMUpdate(timestamp);

   PCFX_V810.SetEventNT(CalcNextTS());
}

#include "mednafen/pcfx/io-handler.inc"
#include "mednafen/pcfx/mem-handler.inc"

typedef struct
{
   int8 tracknum;
   int8 format;
   uint32 lba;
} CDGameEntryTrack;

typedef struct
{
   const char *name;
   const char *name_original;     // Original non-Romanized text.
   const uint32 flags;            // Emulation flags.
   const unsigned int discs;      // Number of discs for this game.
   CDGameEntryTrack tracks[2][100]; // 99 tracks and 1 leadout track
} CDGameEntry;

#define CDGE_FORMAT_AUDIO        0
#define CDGE_FORMAT_DATA         1

#define CDGE_FLAG_ACCURATE_V810  0x01
#define CDGE_FLAG_FXGA           0x02

static uint32 EmuFlags;

static void Emulate(EmulateSpecStruct *espec)
{
   FXINPUT_Frame();

   MDFNMP_ApplyPeriodicCheats();

   if (espec->VideoFormatChanged)
      KING_SetPixelFormat(espec->surface->format);

   KING_StartFrame(fx_vdc_chips, espec);

   v810_timestamp_t v810_timestamp;
   v810_timestamp = PCFX_V810.Run(pcfx_event_handler);

   PCFX_FixNonEvents();

   // Call before resetting v810_timestamp
   ForceEventUpdates(v810_timestamp);

   //
   // Call KING_EndFrame() before SoundBox_Flush(), otherwise CD-DA audio distortion will occur due to sound data being updated
   // after it was needed instead of before.
   //
   KING_EndFrame(v810_timestamp);

   // new_base_ts is guaranteed to be <= v810_timestamp
   v810_timestamp_t new_base_ts;
   espec->SoundBufSize = SoundBox_Flush(v810_timestamp, &new_base_ts, espec->SoundBuf, espec->SoundBufMaxSize);

   KING_ResetTS(new_base_ts);
   FXTIMER_ResetTS(new_base_ts);
   FXINPUT_ResetTS(new_base_ts);
   SoundBox_ResetTS(new_base_ts);

   // Call this AFTER all the EndFrame/Flush/ResetTS stuff
   RebaseTS(v810_timestamp, new_base_ts);

   PCFX_V810.ResetTS(new_base_ts);
}

static void PCFX_Reset(void)
{
   const uint32 timestamp = PCFX_V810.v810_timestamp;

   // Make sure all devices are synched to current timestamp before calling their Reset()/Power()(though devices should already do this sort of thing on their
   // own, but it's not implemented for all of them yet, and even if it was all implemented this is also INSURANCE).
   ForceEventUpdates(timestamp);

   PCFX_Event_Reset();

   RAM_LPA = 0;

   ExBusReset = 0;
   BackupControl = 0;

   Last_VDC_AR[0] = 0;
   Last_VDC_AR[1] = 0;

   memset(RAM, 0x00, 2048 * 1024);

   for (int i = 0; i < 2; i++)
   {
      int32 dummy_ne MDFN_NOWARN_UNUSED;
      dummy_ne = fx_vdc_chips[i]->Reset();
   }

   KING_Reset(timestamp);	// SCSICD_Power() is called from KING_Reset()
   SoundBox_Reset(timestamp);
   RAINBOW_Reset();

   if (WantHuC6273)
      HuC6273_Reset();

   PCFXIRQ_Reset();
   FXTIMER_Reset();
   PCFX_V810.Reset();

   // Force device updates so we can get new next event timestamp values.
   ForceEventUpdates(timestamp);
}

static void PCFX_Power(void)
{
   PCFX_Reset();
}

static void VDCA_IRQHook(bool asserted)
{
   PCFXIRQ_Assert(PCFXIRQ_SOURCE_VDCA, asserted);
}

static void VDCB_IRQHook(bool asserted)
{
   PCFXIRQ_Assert(PCFXIRQ_SOURCE_VDCB, asserted);
}

#ifdef _WIN32
   char slash = '\\';
#else
   char slash = '/';
#endif

static bool LoadCommon(std::vector<CDIF *> *CDInterfaces)
{
   V810_Emu_Mode cpu_mode  = _V810_EMU_MODE_COUNT;
   std::string biospath    = retro_base_directory + slash + MDFN_GetSettingS("pcfx.bios");
   MDFNFILE *BIOSFile      = file_open(biospath.c_str());

   if (!BIOSFile)
      return false;

   cpu_mode = (V810_Emu_Mode)MDFN_GetSettingI("pcfx.cpu_emulation");
   if (cpu_mode == _V810_EMU_MODE_COUNT)
      cpu_mode = (EmuFlags & CDGE_FLAG_ACCURATE_V810) ? V810_EMU_MODE_ACCURATE : V810_EMU_MODE_FAST;

   PCFX_V810.Init(cpu_mode, false);

   uint32 RAM_Map_Addresses[1]     = { 0x00000000 };
   uint32 BIOSROM_Map_Addresses[1] = { 0xFFF00000 };

   RAM = PCFX_V810.SetFastMap(RAM_Map_Addresses, 0x00200000, 1, "RAM");

   if (!RAM)
      return false;

   BIOSROM = PCFX_V810.SetFastMap(BIOSROM_Map_Addresses, 0x00100000, 1, "BIOS ROM");
   if (!BIOSROM)
      return false;

   if (BIOSFile->size != 1024 * 1024)
      return false;

   memcpy(BIOSROM, BIOSFile->data, 1024 * 1024);

   file_close(BIOSFile);
   BIOSFile = NULL;

   for (int i = 0; i < 2; i++)
   {
      fx_vdc_chips[i] = new VDC(MDFN_GetSettingB("pcfx.nospritelimit"), 65536);
      fx_vdc_chips[i]->SetWSHook(NULL);
      fx_vdc_chips[i]->SetIRQHook(i ? VDCB_IRQHook : VDCA_IRQHook);
   }

   SoundBox_Init(MDFN_GetSettingB("pcfx.adpcm.emulate_buggy_codec"), MDFN_GetSettingB("pcfx.adpcm.suppress_channel_reset_clicks"));
   RAINBOW_Init(MDFN_GetSettingB("pcfx.rainbow.chromaip"));
   FXINPUT_Init();
   FXTIMER_Init();

   if (WantHuC6273)
      HuC6273_Init();

   if (!KING_Init())
   {
      free(BIOSROM);
      free(RAM);
      BIOSROM = NULL;
      RAM     = NULL;
      return false;
   }

   CD_TrayOpen = false;
   CD_SelectedDisc = 0;

   /* Attempt to set initial disk index */
   if ((disk_control_ext_info.initial_index > 0) &&
         (disk_control_ext_info.initial_index < (*CDInterfaces).size()))
      if (disk_control_ext_info.initial_index <
            disk_control_ext_info.image_paths.size())
         if (string_is_equal(
               disk_control_ext_info.image_paths[disk_control_ext_info.initial_index].c_str(),
               disk_control_ext_info.initial_path.c_str()))
            CD_SelectedDisc = (int)disk_control_ext_info.initial_index;

   SCSICD_SetDisc(true, NULL, true);
   SCSICD_SetDisc(false, (*CDInterfaces)[CD_SelectedDisc], true);

   EmulatedPCFX.nominal_height = MDFN_GetSettingUI("pcfx.slend") - MDFN_GetSettingUI("pcfx.slstart") + 1;

   MDFNMP_Init(1024 * 1024, ((uint64)1 << 32) / (1024 * 1024));
   MDFNMP_AddRAM(2048 * 1024, 0x00000000, RAM);

   if (!(BRAMDisabled = MDFN_GetSettingB("pcfx.disable_bram")))
   {
      // Initialize Save RAM
      memset(SaveRAM, 0, sizeof(SaveRAM));

      static const uint8 BRInit00[] = { 0x24, 0x8A, 0xDF, 0x50, 0x43, 0x46, 0x58, 0x53, 0x72, 0x61, 0x6D, 0x80,
         0x00, 0x01, 0x01, 0x00, 0x01, 0x40, 0x00, 0x00, 0x01, 0xF9, 0x03, 0x00,
         0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
      };
      static const uint8 BRInit80[] = { 0xF9, 0xFF, 0xFF };

      memcpy(BackupRAM + 0x00, BRInit00, sizeof(BRInit00));
      memcpy(BackupRAM + 0x80, BRInit80, sizeof(BRInit80));

      static const uint8 ExBRInit00[] = { 0x24, 0x8A, 0xDF, 0x50, 0x43, 0x46, 0x58, 0x43, 0x61, 0x72, 0x64, 0x80,
         0x00, 0x01, 0x01, 0x00, 0x01, 0x40, 0x00, 0x00, 0x01, 0xF9, 0x03, 0x00,
         0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
      };
      static const uint8 ExBRInit80[] = { 0xF9, 0xFF, 0xFF };

      memcpy(ExBackupRAM + 0x00, ExBRInit00, sizeof(ExBRInit00));
      memcpy(ExBackupRAM + 0x80, ExBRInit80, sizeof(ExBRInit80));
   }

   // Default to 16-bit bus.
   for (int i = 0; i < 256; i++)
   {
      PCFX_V810.SetMemReadBus32(i, FALSE);
      PCFX_V810.SetMemWriteBus32(i, FALSE);
   }

   // 16MiB RAM area.
   PCFX_V810.SetMemReadBus32(0, TRUE);
   PCFX_V810.SetMemWriteBus32(0, TRUE);

   // Bitstring read range
   for (int i = 0xA0; i <= 0xAF; i++)
   {
      PCFX_V810.SetMemReadBus32(i, FALSE);       // Reads to the read range are 16-bit, and
      PCFX_V810.SetMemWriteBus32(i, TRUE);       // writes are 32-bit.
   }

   // Bitstring write range
   for (int i = 0xB0; i <= 0xBF; i++)
   {
      PCFX_V810.SetMemReadBus32(i, TRUE);	// Reads to the write range are 32-bit,
      PCFX_V810.SetMemWriteBus32(i, FALSE);	// but writes are 16-bit!
   }

   // BIOS area
   for (int i = 0xF0; i <= 0xFF; i++)
   {
      PCFX_V810.SetMemReadBus32(i, FALSE);
      PCFX_V810.SetMemWriteBus32(i, FALSE);
   }

   PCFX_V810.SetMemReadHandlers(mem_rbyte, mem_rhword, mem_rword);
   PCFX_V810.SetMemWriteHandlers(mem_wbyte, mem_whword, mem_wword);

   PCFX_V810.SetIOReadHandlers(port_rbyte, port_rhword, NULL);
   PCFX_V810.SetIOWriteHandlers(port_wbyte, port_whword, NULL);

   return true;
}

static void DoMD5CDVoodoo(std::vector<CDIF *> *CDInterfaces)
{
   static CDGameEntry GameList[] =
   {
#include "mednafen/pcfx/gamedb.inc"
   };
   const CDGameEntry *found_entry = NULL;
   TOC toc;

   for (unsigned if_disc = 0; if_disc < CDInterfaces->size(); if_disc++)
   {
      (*CDInterfaces)[if_disc]->ReadTOC(&toc);

      if (toc.first_track == 1)
      {
         for (unsigned int g = 0; g < sizeof(GameList) / sizeof(CDGameEntry); g++)
         {
            const CDGameEntry *entry = &GameList[g];

            assert(entry->discs == 1 || entry->discs == 2);

            for (unsigned int disc = 0; disc < entry->discs; disc++)
            {
               const CDGameEntryTrack *et = entry->tracks[disc];
               bool GameFound = TRUE;

               while(et->tracknum != -1 && GameFound)
               {
                  assert(et->tracknum > 0 && et->tracknum < 100);

                  if (toc.tracks[et->tracknum].lba != et->lba)
                     GameFound = FALSE;

                  if ( ((et->format == CDGE_FORMAT_DATA) ? 0x4 : 0x0) != (toc.tracks[et->tracknum].control & 0x4))
                     GameFound = FALSE;

                  et++;
               }

               if (et->tracknum == -1)
               {
                  if ((et - 1)->tracknum != toc.last_track)
                     GameFound = FALSE;

                  if (et->lba != toc.tracks[100].lba)
                     GameFound = FALSE;
               }

               if (GameFound)
               {
                  found_entry = entry;
                  goto FoundIt;
               }
            } // End disc count loop
         }
      }

FoundIt: ;

      if (found_entry)
      {
         EmuFlags = found_entry->flags;

         if (found_entry->discs > 1)
         {
            const char *hash_prefix = "Mednafen PC-FX Multi-Game Set";
            md5_context md5_gameset;

            mednafen_md5_starts(&md5_gameset);

            mednafen_md5_update(&md5_gameset, (uint8_t*)hash_prefix, strlen(hash_prefix));

            for (unsigned int disc = 0; disc < found_entry->discs; disc++)
            {
               const CDGameEntryTrack *et = found_entry->tracks[disc];

               while(et->tracknum)
               {
                  mednafen_md5_update_u32_as_lsb(&md5_gameset, et->tracknum);
                  mednafen_md5_update_u32_as_lsb(&md5_gameset, (uint32)et->format);
                  mednafen_md5_update_u32_as_lsb(&md5_gameset, et->lba);

                  if (et->tracknum == -1)
                     break;
                  et++;
               }
            }
         }
         break;
      }
   } // end: for (unsigned if_disc = 0; if_disc < CDInterfaces->size(); if_disc++)
}

static int LoadCD(std::vector<CDIF *> *CDInterfaces)
{
   EmuFlags = 0;
   cdifs    = CDInterfaces;

   DoMD5CDVoodoo(CDInterfaces);

   if (!LoadCommon(CDInterfaces))
      return 0;

   PCFX_Power();

   return 1;
}

static void PCFX_CDInsertEject(void)
{
   CD_TrayOpen = !CD_TrayOpen;

   if (CD_TrayOpen)
      MDFN_DispMessage("Virtual CD Drive Tray Open");
   else
      MDFN_DispMessage("Virtual CD Drive Tray Closed");

   SCSICD_SetDisc(CD_TrayOpen, (CD_SelectedDisc >= 0 && !CD_TrayOpen) ? (*cdifs)[CD_SelectedDisc] : NULL);
}

static void PCFX_CDEject(void)
{
   if (!CD_TrayOpen)
      PCFX_CDInsertEject();
}

static void PCFX_CDSelect(void)
{
   if (cdifs && CD_TrayOpen)
   {
      CD_SelectedDisc = (CD_SelectedDisc + 1) % (cdifs->size() + 1);

      if ((unsigned)CD_SelectedDisc == cdifs->size())
         CD_SelectedDisc = -1;

      if (CD_SelectedDisc == -1)
         MDFN_DispMessage("Disc absence selected.");
      else
         MDFN_DispMessage("Disc %d of %d selected.", CD_SelectedDisc + 1, (int)cdifs->size());
   }
}

static void CloseGame(void)
{
   unsigned i;

   for (i = 0; i < 2; i++)
   {
      if (fx_vdc_chips[i])
      {
         delete fx_vdc_chips[i];
         fx_vdc_chips[i] = NULL;
      }
   }

   RAINBOW_Close();
   KING_Close();
   SoundBox_Kill();
   PCFX_V810.Kill();

   // The allocated memory RAM and BIOSROM is free'd in V810_Kill()
   RAM     = NULL;
   BIOSROM = NULL;
}

static void DoSimpleCommand(int cmd)
{
   switch(cmd)
   {
      case MDFN_MSC_INSERT_DISK: PCFX_CDInsertEject(); break;
      case MDFN_MSC_SELECT_DISK: PCFX_CDSelect(); break;
      case MDFN_MSC_EJECT_DISK: PCFX_CDEject(); break;
      case MDFN_MSC_RESET: PCFX_Reset(); break;
      case MDFN_MSC_POWER: PCFX_Power(); break;
   }
}

extern "C" int StateAction(StateMem *sm, int load, int data_only)
{
   const v810_timestamp_t timestamp = PCFX_V810.v810_timestamp;

   SFORMAT StateRegs[] =
   {
      SFARRAY(RAM, 0x200000),
      SFARRAY16(Last_VDC_AR, 2),
      SFVAR(RAM_LPA),
      SFVAR(BackupControl),
      SFVAR(ExBusReset),
      SFARRAY(BackupRAM, BRAMDisabled ? 0 : 0x8000), //SFPTR8
      SFARRAY(ExBackupRAM, BRAMDisabled ? 0 : 0x8000), //SFPTR8

      // SFVAR(CD_TrayOpen),
      // SFVAR(CD_SelectedDisc),

      SFEND
   };

   int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "MAIN", false);

   for (int i = 0; i < 2; i++)
      ret &= fx_vdc_chips[i]->StateAction(sm, load, data_only, i ? "VDC1" : "VDC0");

   ret &= FXINPUT_StateAction(sm, load, data_only);
   ret &= PCFXIRQ_StateAction(sm, load, data_only);
   ret &= KING_StateAction(sm, load, data_only);
   ret &= PCFX_V810.StateAction(sm, load, data_only);
   ret &= FXTIMER_StateAction(sm, load, data_only);
   ret &= SoundBox_StateAction(sm, load, data_only);
   ret &= SCSICD_StateAction(sm, load, data_only, "CDRM");
   ret &= RAINBOW_StateAction(sm, load, data_only);

   if (load)
   {
      //
      // Rather than bothering to store next event timestamp deltas in save states, we'll just recalculate next event times on save state load as a side effect
      // of this call.
      //
      ForceEventUpdates(timestamp);

      if (cdifs)
      {
         // Sanity check.
         if (CD_SelectedDisc >= (int)cdifs->size())
            CD_SelectedDisc = (int)cdifs->size() - 1;

         SCSICD_SetDisc(CD_TrayOpen, (CD_SelectedDisc >= 0 && !CD_TrayOpen) ? (*cdifs)[CD_SelectedDisc] : NULL, true);
      }
   }

   return(ret);
}

#ifdef NEED_DEINTERLACER
static bool PrevInterlaced;
static Deinterlacer deint;
#endif

#define MEDNAFEN_CORE_NAME_MODULE "pcfx"
#define MEDNAFEN_CORE_NAME "Beetle PC-FX"
#define MEDNAFEN_CORE_VERSION "v0.9.36.5"
#define MEDNAFEN_CORE_EXTENSIONS "cue|ccd|toc|chd"
#define MEDNAFEN_CORE_TIMING_FPS 59.94
#define MEDNAFEN_CORE_GEOMETRY_BASE_W (EmulatedPCFX.nominal_width)
#define MEDNAFEN_CORE_GEOMETRY_BASE_H (EmulatedPCFX.nominal_height)
#define MEDNAFEN_CORE_GEOMETRY_MAX_W 1024
#define MEDNAFEN_CORE_GEOMETRY_MAX_H 480
#define MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO (4.0 / 3.0)
#define FB_WIDTH 1024
#define FB_HEIGHT 480

#define FB_MAX_HEIGHT FB_HEIGHT

static bool cdimagecache = false;

static std::vector<CDIF *> CDInterfaces;	// FIXME: Cleanup on error out.
// TODO: LoadCommon()

static void extract_basename(char *buf, const char *path, size_t size)
{
   const char *base = strrchr(path, '/');
   if (!base)
      base = strrchr(path, '\\');
   if (!base)
      base = path;

   if (*base == '\\' || *base == '/')
      base++;

   strncpy(buf, base, size - strlen(buf) - 1);
   buf[size - 1] = '\0';

   char *ext = strrchr(buf, '.');
   if (ext)
      *ext = '\0';
}

static void extract_directory(char *buf, const char *path, size_t size)
{
   strncpy(buf, path, size - 1);
   buf[size - 1] = '\0';

   char *base = strrchr(buf, '/');
   if (!base)
      base = strrchr(buf, '\\');

   if (base)
      *base = '\0';
   else
      buf[0] = '\0';
}

//
// Disk Interface
//

static bool disk_set_eject_state( bool ejected )
{
   if ( ejected == cd_eject_state )
      return false;

   cd_eject_state = ejected;
   DoSimpleCommand(ejected ? MDFN_MSC_EJECT_DISK : MDFN_MSC_INSERT_DISK);
   return true;
}

static bool disk_get_eject_state(void)
{
   return cd_eject_state;
}

static bool disk_set_image_index(unsigned index)
{
   // only listen if the tray is open
   if (cd_eject_state)
   {
      CD_SelectedDisc = index;
      if (CD_SelectedDisc > CDInterfaces.size())
         CD_SelectedDisc = CDInterfaces.size();

      // Very hacky. CDSelect command will want to increment first.
      CD_SelectedDisc--;

      DoSimpleCommand(MDFN_MSC_SELECT_DISK);
      return true;
   }

   return false;
}

static unsigned disk_get_num_images(void)
{
   return CDInterfaces.size();
}

static unsigned disk_get_image_index(void)
{
   return CD_SelectedDisc;
}

static bool disk_replace_image_index(unsigned index, const struct retro_game_info *info)
{
   return false;
}

static bool disk_add_image_index(void)
{
   return true;
}

static bool disk_set_initial_image(unsigned index, const char *path)
{
   if (string_is_empty(path))
      return false;

   disk_control_ext_info.initial_index = index;
   disk_control_ext_info.initial_path  = path;

   return true;
}

static bool disk_get_image_path(unsigned index, char *path, size_t len)
{
   if (len < 1)
      return false;

   if ((index < disk_get_num_images()) &&
       (index < disk_control_ext_info.image_paths.size()))
   {
      if (!string_is_empty(disk_control_ext_info.image_paths[index].c_str()))
      {
         strlcpy(path, disk_control_ext_info.image_paths[index].c_str(), len);
         return true;
      }
   }

   return false;
}

static bool disk_get_image_label(unsigned index, char *label, size_t len)
{
   if (len < 1)
      return false;

   if ((index < disk_get_num_images()) &&
       (index < disk_control_ext_info.image_labels.size()))
   {
      if (!string_is_empty(disk_control_ext_info.image_labels[index].c_str()))
      {
         strlcpy(label, disk_control_ext_info.image_labels[index].c_str(), len);
         return true;
      }
   }

   return false;
}

static struct retro_disk_control_callback disk_interface =
{
   disk_set_eject_state,
   disk_get_eject_state,
   disk_get_image_index,
   disk_set_image_index,
   disk_get_num_images,
   disk_replace_image_index,
   disk_add_image_index,
};

static struct retro_disk_control_ext_callback disk_interface_ext =
{
   disk_set_eject_state,
   disk_get_eject_state,
   disk_get_image_index,
   disk_set_image_index,
   disk_get_num_images,
   disk_replace_image_index,
   disk_add_image_index,
   disk_set_initial_image,
   disk_get_image_path,
   disk_get_image_label,
};

static void disc_clear(void)
{
   disk_control_ext_info.initial_index = 0;
   disk_control_ext_info.initial_path.clear();
   disk_control_ext_info.image_paths.clear();
   disk_control_ext_info.image_labels.clear();
}

static void disc_init(void)
{
   unsigned dci_version = 0;

   cd_eject_state  = false;

   if (environ_cb(RETRO_ENVIRONMENT_GET_DISK_CONTROL_INTERFACE_VERSION, &dci_version) && (dci_version >= 1))
      environ_cb(RETRO_ENVIRONMENT_SET_DISK_CONTROL_EXT_INTERFACE, &disk_interface_ext);
   else
      environ_cb(RETRO_ENVIRONMENT_SET_DISK_CONTROL_INTERFACE, &disk_interface);

   disc_clear();
}

static void check_system_specs(void)
{
   unsigned level = 15;
   environ_cb(RETRO_ENVIRONMENT_SET_PERFORMANCE_LEVEL, &level);
}

void retro_init(void)
{
   struct retro_log_callback log;
   const char *dir = NULL;
   if (environ_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log))
      log_cb = log.log;
   else
      log_cb = NULL;

   disc_init(); // Initialize disc control interface

   CDUtility_Init();

   if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &dir) && dir)
   {
      retro_base_directory = dir;
      // Make sure that we don't have any lingering slashes, etc, as they break Windows.
      size_t last = retro_base_directory.find_last_not_of("/\\");
      if (last != std::string::npos)
         last++;

      retro_base_directory = retro_base_directory.substr(0, last);
   }
   else
   {
      /* TODO: Add proper fallback */
      if (log_cb)
         log_cb(RETRO_LOG_WARN, "System directory is not defined. Fallback on using same dir as ROM for system directory later ...\n");
      failed_init = true;
   }

   if (environ_cb(RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY, &dir) && dir)
   {
     // If save directory is defined use it, otherwise use system directory
      retro_save_directory = *dir ? dir : retro_base_directory;
      // Make sure that we don't have any lingering slashes, etc, as they break Windows.
      size_t last = retro_save_directory.find_last_not_of("/\\");
      if (last != std::string::npos)
         last++;

      retro_save_directory = retro_save_directory.substr(0, last);
   }
   else
   {
      /* TODO: Add proper fallback */
      if (log_cb)
         log_cb(RETRO_LOG_WARN, "Save directory is not defined. Fallback on using SYSTEM directory ...\n");
     retro_save_directory = retro_base_directory;
   }

   if (environ_cb(RETRO_ENVIRONMENT_GET_PERF_INTERFACE, &perf_cb))
      perf_get_cpu_features_cb = perf_cb.get_cpu_features;
   else
      perf_get_cpu_features_cb = NULL;

   setting_initial_scanline = 0;
   setting_last_scanline = 239;

   check_system_specs();

   if (environ_cb(RETRO_ENVIRONMENT_GET_INPUT_BITMASKS, NULL))
      libretro_supports_bitmasks = true;
}

void retro_reset(void)
{
   DoSimpleCommand(MDFN_MSC_RESET);
}

bool retro_load_game_special(unsigned, const struct retro_game_info *, size_t)
{
   return false;
}

static float mouse_sensitivity = 1.25f;

static void check_variables(bool loaded)
{
   struct retro_variable var = {0};

   if (!loaded)
   {
      var.key      = "pcfx_cdimagecache";
      cdimagecache = false;

      if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
         if (strcmp(var.value, "enabled") == 0)
            cdimagecache = true;
   }

   var.key = "pcfx_high_dotclock_width";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_high_dotclock_width = atoi(var.value);
   }

   var.key = "pcfx_nospritelimit";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_nospritelimit = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_nospritelimit = 1;
   }

   var.key = "pcfx_initial_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_initial_scanline = atoi(var.value);
   }

   var.key = "pcfx_last_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_last_scanline = atoi(var.value);
   }

   var.key = "pcfx_resamp_quality";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_resamp_quality = atoi(var.value);
   }

   var.key = "pcfx_suppress_channel_reset_clicks";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_suppress_channel_reset_clicks = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_suppress_channel_reset_clicks = 1;
   }

   var.key = "pcfx_emulate_buggy_codec";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_emulate_buggy_codec = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_emulate_buggy_codec = 1;
   }

   var.key = "pcfx_rainbow_chromaip";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_rainbow_chromaip = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_rainbow_chromaip = 1;
   }

   var.key = "pcfx_mouse_sensitivity";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      mouse_sensitivity = atof(var.value);
   }

}

#define MAX_PLAYERS 2
#define MAX_BUTTONS 15
static uint32 input_type[MAX_PLAYERS] = {0};
static uint16 input_buf[MAX_PLAYERS] = {0};
static int16  mousedata[MAX_PLAYERS][3] = {{0}, {0}};

static void ReadM3U(std::vector<std::string> &file_list, std::string path, unsigned depth = 0)
{
   char linebuf[2048];
   std::string dir_path;
   std::vector<std::string> ret;
   RFILE *fp = filestream_open(path.c_str(), RETRO_VFS_FILE_ACCESS_READ,
         RETRO_VFS_FILE_ACCESS_HINT_NONE);

   if (fp == NULL)
      return;

   MDFN_GetFilePathComponents(path, &dir_path);

   while(filestream_gets(fp, linebuf, sizeof(linebuf)) != NULL)
   {
      std::string efp;

      if (linebuf[0] == '#')
         continue;
      string_trim_whitespace_right(linebuf);
      if (linebuf[0] == 0)
         continue;

      efp = MDFN_EvalFIP(dir_path, std::string(linebuf));

      if (efp.size() >= 4 && efp.substr(efp.size() - 4) == ".m3u")
      {
         if (efp == path)
         {
            MDFN_Error(0, "M3U at \"%s\" references self.", efp.c_str());
            goto end;
         }

         if (depth == 99)
         {
            MDFN_Error(0, "M3U load recursion too deep!");
            goto end;
         }

         ReadM3U(file_list, efp, depth++);
      }
      else
         file_list.push_back(efp);
   }

end:
   filestream_close(fp);
}

void MDFND_DispMessage(unsigned char *str)
{
   if (log_cb)
      log_cb(RETRO_LOG_INFO, "%s\n", str);
}

static bool MDFNI_LoadCD(const char *devicename)
{
   if (devicename && strlen(devicename) > 4 && !strcasecmp(devicename + strlen(devicename) - 4, ".m3u"))
   {
      ReadM3U(disk_control_ext_info.image_paths, devicename);

      for (unsigned i = 0; i < disk_control_ext_info.image_paths.size(); i++)
      {
         char image_label[4096];

         image_label[0] = '\0';

         CDIF *cdif   = CDIF_Open(disk_control_ext_info.image_paths[i].c_str(), cdimagecache);
         CDInterfaces.push_back(cdif);

         extract_basename(
            image_label, disk_control_ext_info.image_paths[i].c_str(),
            sizeof(image_label));
         disk_control_ext_info.image_labels.push_back(image_label);
      }
   }
   else
   {
      char image_label[4096];
      image_label[0] = '\0';
      CDIF *cdif   = CDIF_Open(devicename, cdimagecache);
      CDInterfaces.push_back(cdif);

      disk_control_ext_info.image_paths.push_back(devicename);
      extract_basename(image_label, devicename, sizeof(image_label));
      disk_control_ext_info.image_labels.push_back(image_label);
   }

   if (!(LoadCD(&CDInterfaces)))
   {
      for (unsigned i = 0; i < CDInterfaces.size(); i++)
         delete CDInterfaces[i];
      CDInterfaces.clear();

      disc_clear();

      return false;
   }

   MDFN_LoadGameCheats();
   MDFNMP_InstallReadPatches();

   return true;
}

bool retro_load_game(const struct retro_game_info *info)
{
   bool ret = false;

   if (!info || failed_init)
      return false;

   struct retro_input_descriptor desc[] = {
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "II" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "I" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "III" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "IV" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "V" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "VI" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2,    "MODE 1 (Switch)" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2,    "MODE 2 (Switch)" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,    "Select" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Run" },

      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "II" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "I" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "III" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "IV" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "V" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "VI" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2,    "MODE 1 (Switch)" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2,    "MODE 2 (Switch)" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,    "Select" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Run" },

      { 0 },
   };

   environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, desc);

#ifdef WANT_32BPP
   enum retro_pixel_format fmt = RETRO_PIXEL_FORMAT_XRGB8888;
   if (!environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &fmt))
   {
      if (log_cb)
         log_cb(RETRO_LOG_ERROR, "Pixel format XRGB8888 not supported by platform, cannot use %s.\n", MEDNAFEN_CORE_NAME);
      return false;
   }
#elif WANT_16BPP
   enum retro_pixel_format fmt = RETRO_PIXEL_FORMAT_RGB565;
   if (!environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &fmt))
   {
      if (log_cb)
         log_cb(RETRO_LOG_ERROR, "Pixel format RGB565 not supported by platform, cannot use %s.\n", MEDNAFEN_CORE_NAME);
      return false;
   }
#endif

   check_variables(false);

   if ((strlen(info->path) > 4) && (
         (!strcasecmp(info->path + strlen(info->path) - 4, ".cue")) ||
         (!strcasecmp(info->path + strlen(info->path) - 4, ".ccd")) ||
         (!strcasecmp(info->path + strlen(info->path) - 4, ".chd")) ||
         (!strcasecmp(info->path + strlen(info->path) - 4, ".toc")) ||
         (!strcasecmp(info->path + strlen(info->path) - 4, ".m3u"))))
      ret = MDFNI_LoadCD(info->path);

   if (!ret)
      return false;

   struct MDFN_PixelFormat pix_fmt;
   bpp_t *pixbuf;

#ifdef WANT_32BPP
   pix_fmt.bpp        = 32;
#elif WANT_16BPP
   pix_fmt.bpp        = 16;
#endif
   pix_fmt.colorspace = MDFN_COLORSPACE_RGB;
   // placeholders since we use MAKECOLOR macro
   pix_fmt.Rshift     = 16;
   pix_fmt.Gshift     = 8;
   pix_fmt.Bshift     = 0;
   pix_fmt.Ashift     = 24;

   last_pixel_format.bpp        = 0;
   last_pixel_format.colorspace = 0;
   last_pixel_format.Rshift     = 0;
   last_pixel_format.Gshift     = 0;
   last_pixel_format.Bshift     = 0;
   last_pixel_format.Ashift     = 0;

   surf.format                  = pix_fmt;

   if (!(pixbuf = (bpp_t*)calloc(1, FB_WIDTH * FB_HEIGHT * (pix_fmt.bpp >> 3))))
      return false;

   surf.pixels                  = (bpp_t *)pixbuf;

   surf.w                       = FB_WIDTH;
   surf.h                       = FB_HEIGHT;
   surf.pitchinpix              = FB_WIDTH;

#ifdef NEED_DEINTERLACER
   PrevInterlaced = false;
   deint.ClearState();
#endif

   for (unsigned i = 0; i < MAX_PLAYERS; i++)
      FXINPUT_SetInput(i, "gamepad", &input_buf[i]);

   SoundBox_SetSoundRate(44100.0);

   return true;
}

void retro_unload_game(void)
{
   MDFN_FlushGameCheats();

   CloseGame();

   MDFNMP_Kill();

   for (unsigned i = 0; i < CDInterfaces.size(); i++)
      delete CDInterfaces[i];
   CDInterfaces.clear();

   disc_clear();
}

static void update_input(void)
{
   input_buf[0] = input_buf[1] = 0;
   static unsigned map[] = {
      RETRO_DEVICE_ID_JOYPAD_A,
      RETRO_DEVICE_ID_JOYPAD_B,
      RETRO_DEVICE_ID_JOYPAD_X,
      RETRO_DEVICE_ID_JOYPAD_Y,
      RETRO_DEVICE_ID_JOYPAD_L,
      RETRO_DEVICE_ID_JOYPAD_R,
      RETRO_DEVICE_ID_JOYPAD_SELECT,
      RETRO_DEVICE_ID_JOYPAD_START,
      RETRO_DEVICE_ID_JOYPAD_UP,
      RETRO_DEVICE_ID_JOYPAD_RIGHT,
      RETRO_DEVICE_ID_JOYPAD_DOWN,
      RETRO_DEVICE_ID_JOYPAD_LEFT,
      RETRO_DEVICE_ID_JOYPAD_L2,
      0,
      RETRO_DEVICE_ID_JOYPAD_R2,
   };

   for (unsigned j = 0; j < MAX_PLAYERS; j++)
   {
      switch (input_type[j])
      {
         case RETRO_DEVICE_JOYPAD:
            if (libretro_supports_bitmasks)
            {
               int16_t ret = input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_MASK);
               for (unsigned i = 0; i < MAX_BUTTONS; i++)
                  input_buf[j] |= (map[i] != -1u) &&
                     (ret & (1 << map[i])) ? (1 << i) : 0;
            }
            else
            {
               for (unsigned i = 0; i < MAX_BUTTONS; i++)
                  input_buf[j] |= (map[i] != -1u) &&
                     (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, i)) ? (1 << i) : 0;
            }
#ifdef MSB_FIRST
            union {
               uint8_t b[2];
               uint16_t s;
            } u;
            u.s = input_buf[j];
            input_buf[j] = u.b[0] | u.b[1] << 8;
#endif
            break;
         case RETRO_DEVICE_MOUSE:
            mousedata[j][2] = 0;

            int16 _x = input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_X);
            int16 _y = input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_Y);

            mousedata[j][0] = (int16)roundf(_x * mouse_sensitivity);
            mousedata[j][1] = (int16)roundf(_y * mouse_sensitivity);

            if (input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_LEFT))
               mousedata[j][2] |= (1 << 0);
            if (input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_RIGHT))
               mousedata[j][2] |= (1 << 1);
            break;
      }
   }
}

void update_geometry(unsigned width, unsigned height)
{
   struct retro_system_av_info system_av_info;
   system_av_info.geometry.base_width   = width;
   system_av_info.geometry.base_height  = height;
   system_av_info.geometry.max_width    = MEDNAFEN_CORE_GEOMETRY_MAX_W;
   system_av_info.geometry.max_height   = MEDNAFEN_CORE_GEOMETRY_MAX_H;
   system_av_info.geometry.aspect_ratio = MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO;
   environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &system_av_info);
}

void retro_run(void)
{
   input_poll_cb();

   update_input();

   static int16_t sound_buf[0x10000];
   static int32 rects[FB_MAX_HEIGHT];
   static unsigned width, height;
   bool resolution_changed = false;
   rects[0] = ~0;

   EmulateSpecStruct spec  = {0};
   spec.surface            = &surf;
   spec.SoundBuf           = sound_buf;
   spec.LineWidths         = rects;
   spec.SoundBufMaxSize    = sizeof(sound_buf) / 2;
   spec.SoundBufSize       = 0;
   spec.VideoFormatChanged = false;

   if (memcmp(&last_pixel_format, &spec.surface->format, sizeof(MDFN_PixelFormat)))
   {
      spec.VideoFormatChanged = TRUE;
      last_pixel_format       = spec.surface->format;
   }

   Emulate(&spec);

#ifdef NEED_DEINTERLACER
   if (spec.InterlaceOn)
   {
      if (!PrevInterlaced)
         deint.ClearState();

      deint.Process(spec.surface, spec.DisplayRect, spec.LineWidths, spec.InterlaceField);

      PrevInterlaced = true;

      spec.InterlaceOn = false;
      spec.InterlaceField = 0;
   }
   else
      PrevInterlaced = false;
#endif

   if (width  != spec.DisplayRect.w || height != spec.DisplayRect.h)
      resolution_changed = true;

   width  = spec.DisplayRect.w;
   height = spec.DisplayRect.h;

   size_t pitch = FB_WIDTH * (spec.surface->format.bpp >> 3);
   video_cb(spec.surface->pixels + spec.surface->pitchinpix * spec.DisplayRect.y, width, height, pitch);

   bool updated = false;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
   {
      check_variables(true);
      update_geometry(width, height);
   }

   if (resolution_changed)
      update_geometry(width, height);

   audio_batch_cb(spec.SoundBuf, spec.SoundBufSize);
}

void retro_get_system_info(struct retro_system_info *info)
{
   memset(info, 0, sizeof(*info));
   info->library_name     = MEDNAFEN_CORE_NAME;
#ifndef GIT_VERSION
#define GIT_VERSION ""
#endif
   info->library_version  = MEDNAFEN_CORE_VERSION GIT_VERSION;
   info->need_fullpath    = true;
   info->valid_extensions = MEDNAFEN_CORE_EXTENSIONS;
   info->block_extract    = false;
}

void retro_get_system_av_info(struct retro_system_av_info *info)
{
   memset(info, 0, sizeof(*info));
   info->timing.fps            = MEDNAFEN_CORE_TIMING_FPS;
   info->timing.sample_rate    = 44100;
   info->geometry.base_width   = MEDNAFEN_CORE_GEOMETRY_BASE_W;
   info->geometry.base_height  = MEDNAFEN_CORE_GEOMETRY_BASE_H;
   info->geometry.max_width    = MEDNAFEN_CORE_GEOMETRY_MAX_W;
   info->geometry.max_height   = MEDNAFEN_CORE_GEOMETRY_MAX_H;
   info->geometry.aspect_ratio = MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO;
}

void retro_deinit(void)
{
   if(surf.pixels)
      free(surf.pixels);

   surf.pixels            = NULL;
   surf.w                 = 0;
   surf.h                 = 0;
   surf.pitchinpix        = 0;
   surf.format.bpp        = 0;
   surf.format.colorspace = 0;
   surf.format.Rshift     = 0;
   surf.format.Gshift     = 0;
   surf.format.Bshift     = 0;
   surf.format.Ashift     = 0;
}

unsigned retro_get_region(void)
{
   return RETRO_REGION_NTSC;
}

unsigned retro_api_version(void)
{
   return RETRO_API_VERSION;
}

void retro_set_controller_port_device(unsigned in_port, unsigned device)
{
   if (in_port < MAX_PLAYERS)
   {
      switch(device)
      {
         case RETRO_DEVICE_JOYPAD:
            input_type[in_port] = RETRO_DEVICE_JOYPAD;
            FXINPUT_SetInput(in_port, "gamepad", &input_buf[in_port]);
            log_cb(RETRO_LOG_DEBUG," Port %d: gamepad\n", in_port +1);
            break;
         case RETRO_DEVICE_MOUSE:
            input_type[in_port] = RETRO_DEVICE_MOUSE;
            FXINPUT_SetInput(in_port, "mouse", &mousedata[in_port]);
            log_cb(RETRO_LOG_DEBUG," Port %d: mouse\n", in_port +1);
            break;
      }
   }
}

void retro_set_environment(retro_environment_t cb)
{
   struct retro_vfs_interface_info vfs_iface_info;
   environ_cb = cb;

   static const struct retro_controller_description pads[] = {
      { "PCFX Joypad", RETRO_DEVICE_JOYPAD },
      { "PCFX Mouse", RETRO_DEVICE_MOUSE },
      { NULL, 0 },
   };

   static const struct retro_controller_info ports[] = {
      { pads, 3 },
      { pads, 3 },
      { 0 },
   };

   libretro_supports_option_categories = false;
   libretro_set_core_options(environ_cb,
      &libretro_supports_option_categories);
   environ_cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void*)ports);

   vfs_iface_info.required_interface_version = 1;
   vfs_iface_info.iface                      = NULL;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VFS_INTERFACE, &vfs_iface_info))
      filestream_vfs_init(&vfs_iface_info);
}

void retro_set_audio_sample(retro_audio_sample_t cb)
{
   audio_cb = cb;
}

void retro_set_audio_sample_batch(retro_audio_sample_batch_t cb)
{
   audio_batch_cb = cb;
}

void retro_set_input_poll(retro_input_poll_t cb)
{
   input_poll_cb = cb;
}

void retro_set_input_state(retro_input_state_t cb)
{
   input_state_cb = cb;
}

void retro_set_video_refresh(retro_video_refresh_t cb)
{
   video_cb = cb;
}

size_t retro_serialize_size(void)
{
   StateMem st;

   st.data           = NULL;
   st.loc            = 0;
   st.len            = 0;
   st.malloced       = 0;
   st.initial_malloc = 0;

   if (!MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL))
      return 0;

   free(st.data);
   return st.len;
}

bool retro_serialize(void *data, size_t size)
{
   StateMem st;
   bool ret          = false;
   uint8_t *_dat     = (uint8_t*)malloc(size);

   if (!_dat)
      return false;

   st.data           = _dat;
   st.loc            = 0;
   st.len            = 0;
   st.malloced       = size;
   st.initial_malloc = 0;

   ret = MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL);

   memcpy(data,st.data,size);
   free(st.data);
   return ret;
}

bool retro_unserialize(const void *data, size_t size)
{
   StateMem st;

   st.data           = (uint8_t*)data;
   st.loc            = 0;
   st.len            = size;
   st.malloced       = 0;
   st.initial_malloc = 0;

   return MDFNSS_LoadSM(&st, 0, 0);
}

void *retro_get_memory_data(unsigned type)
{
   switch (type)
   {
      case RETRO_MEMORY_SAVE_RAM:
         return (uint8_t*)SaveRAM;
      case RETRO_MEMORY_SYSTEM_RAM:
         return RAM;
      default:
         break;
   }

   return NULL;
}

size_t retro_get_memory_size(unsigned type)
{
   switch (type)
   {
      case RETRO_MEMORY_SAVE_RAM:
         return sizeof(SaveRAM);
      case RETRO_MEMORY_SYSTEM_RAM:
         return (2048 * 1024);
      default:
         break;
   }

   return 0;
}

void retro_cheat_reset(void) {}

void retro_cheat_set(unsigned, bool, const char *) {}
