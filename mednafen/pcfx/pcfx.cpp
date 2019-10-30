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

#include "mednafen/pcfx/pcfx.h"
#include "mednafen/pcfx/soundbox.h"
#include "mednafen/pcfx/input.h"
#include "mednafen/pcfx/king.h"
#include "mednafen/pcfx/timer.h"
#include "mednafen/pcfx/interrupt.h"
#include "mednafen/pcfx/debug.h"
#include "mednafen/pcfx/rainbow.h"
#include "mednafen/pcfx/huc6273.h"
#include "mednafen/pcfx/fxscsi.h"
#include "mednafen/cdrom/scsicd.h"
#include "mednafen/mempatcher.h"
#include "mednafen/cdrom/cdromif.h"
#include "mednafen/md5.h"
#include "mednafen/clamp.h"

/* FIXME:  soundbox, vce, vdc, rainbow, and king store wait states should be 4, not 2, but V810 has write buffers which can mask wait state penalties.
  This is a hack to somewhat address the issue, but to really fix it, we need to handle write buffer emulation in the V810 emulation core itself.
*/

static std::vector<CDIF*> *cdifs = NULL;
static bool CD_TrayOpen;
static int CD_SelectedDisc;	// -1 for no disc

V810 PCFX_V810;

static uint8 *BIOSROM = NULL; 	// 1MB
uint8 *RAM = NULL; 	// 2MB
static uint8 *FXSCSIROM = NULL;	// 512KiB

static uint32 RAM_LPA;		// Last page access

static const int RAM_PageSize = 2048;
static const int RAM_PageNOTMask = ~(RAM_PageSize - 1);

static uint16 Last_VDC_AR[2];

static bool WantHuC6273 = FALSE;

//static 
VDC *fx_vdc_chips[2];

static uint16 BackupControl;
uint8 SaveRAM[2 * 0x8000]; // BackupRAM + ExBackupRAM
static uint8* BackupRAM = (uint8*)(SaveRAM + (0x8000 * 0));
static uint8* ExBackupRAM = (uint8*)(SaveRAM + (0x8000 * 1));
static uint8 ExBusReset; // I/O Register at 0x0700

static bool BRAMDisabled;	// Cached at game load, don't remove this caching behavior or save game loss may result(if we ever get a GUI).

// Checks to see if this main-RAM-area access
// is in the same DRAM page as the last access.
#define RAMLPCHECK	\
{					\
  if((A & RAM_PageNOTMask) != RAM_LPA)	\
  {					\
   timestamp += 3;			\
   RAM_LPA = A & RAM_PageNOTMask;	\
  }					\
}

static v810_timestamp_t next_pad_ts, next_timer_ts, next_adpcm_ts, next_king_ts;

void PCFX_FixNonEvents(void)
{
 if(next_pad_ts & 0x40000000)
  next_pad_ts = PCFX_EVENT_NONONO;

 if(next_timer_ts & 0x40000000)
  next_timer_ts = PCFX_EVENT_NONONO;

 if(next_adpcm_ts & 0x40000000)
  next_adpcm_ts = PCFX_EVENT_NONONO;

 if(next_king_ts & 0x40000000)
  next_king_ts = PCFX_EVENT_NONONO;
}

void PCFX_Event_Reset(void)
{
 next_pad_ts = PCFX_EVENT_NONONO;
 next_timer_ts = PCFX_EVENT_NONONO;
 next_adpcm_ts = PCFX_EVENT_NONONO;
 next_king_ts = PCFX_EVENT_NONONO;
}

static INLINE uint32 CalcNextTS(void)
{
 v810_timestamp_t next_timestamp = next_king_ts;

 if(next_timestamp > next_pad_ts)
  next_timestamp  = next_pad_ts;

 if(next_timestamp > next_timer_ts)
  next_timestamp = next_timer_ts;

 if(next_timestamp > next_adpcm_ts)
  next_timestamp = next_adpcm_ts;

 return(next_timestamp);
}

static void RebaseTS(const v810_timestamp_t timestamp, const v810_timestamp_t new_base_timestamp)
{
 assert(next_pad_ts > timestamp);
 assert(next_timer_ts > timestamp);
 assert(next_adpcm_ts > timestamp);
 assert(next_king_ts > timestamp);

 next_pad_ts -= (timestamp - new_base_timestamp);
 next_timer_ts -= (timestamp - new_base_timestamp);
 next_adpcm_ts -= (timestamp - new_base_timestamp);
 next_king_ts -= (timestamp - new_base_timestamp);

 //printf("RTS: %d %d %d %d\n", next_pad_ts, next_timer_ts, next_adpcm_ts, next_king_ts);
}


void PCFX_SetEvent(const int type, const v810_timestamp_t next_timestamp)
{
 //assert(next_timestamp > PCFX_V810.v810_timestamp);

 if(type == PCFX_EVENT_PAD)
  next_pad_ts = next_timestamp;
 else if(type == PCFX_EVENT_TIMER)
  next_timer_ts = next_timestamp;
 else if(type == PCFX_EVENT_ADPCM)
  next_adpcm_ts = next_timestamp;
 else if(type == PCFX_EVENT_KING)
  next_king_ts = next_timestamp;

 if(next_timestamp < PCFX_V810.GetEventNT())
  PCFX_V810.SetEventNT(next_timestamp);
}

int32 MDFN_FASTCALL pcfx_event_handler(const v810_timestamp_t timestamp)
{
     if(timestamp >= next_king_ts)
      next_king_ts = KING_Update(timestamp);

     if(timestamp >= next_pad_ts)
      next_pad_ts = FXINPUT_Update(timestamp);

     if(timestamp >= next_timer_ts)
      next_timer_ts = FXTIMER_Update(timestamp);

     if(timestamp >= next_adpcm_ts)
      next_adpcm_ts = SoundBox_ADPCMUpdate(timestamp);

#if 1
     assert(next_king_ts > timestamp);
     assert(next_pad_ts > timestamp);
     assert(next_timer_ts > timestamp);
     assert(next_adpcm_ts > timestamp);
#endif
     return(CalcNextTS());
}

// Called externally from debug.cpp
void ForceEventUpdates(const uint32 timestamp)
{
 next_king_ts = KING_Update(timestamp);
 next_pad_ts = FXINPUT_Update(timestamp);
 next_timer_ts = FXTIMER_Update(timestamp);
 next_adpcm_ts = SoundBox_ADPCMUpdate(timestamp);

 //printf("Meow: %d\n", CalcNextTS());
 PCFX_V810.SetEventNT(CalcNextTS());

 //printf("FEU: %d %d %d %d\n", next_pad_ts, next_timer_ts, next_adpcm_ts, next_king_ts);
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

#define CDGE_FORMAT_AUDIO		0
#define CDGE_FORMAT_DATA		1

#define CDGE_FLAG_ACCURATE_V810         0x01
#define CDGE_FLAG_FXGA			0x02

static uint32 EmuFlags;

static CDGameEntry GameList[] =
{
 #include "mednafen/pcfx/gamedb.inc"
};


void Emulate(EmulateSpecStruct *espec)
{
 //printf("%d\n", PCFX_V810.v810_timestamp);

 FXINPUT_Frame();

 MDFNMP_ApplyPeriodicCheats();

 if(espec->VideoFormatChanged)
  KING_SetPixelFormat(espec->surface->format); //.Rshift, espec->surface->format.Gshift, espec->surface->format.Bshift);

 if(espec->SoundFormatChanged)
  SoundBox_SetSoundRate(espec->SoundRate);


 KING_StartFrame(fx_vdc_chips, espec);	//espec->surface, &espec->DisplayRect, espec->LineWidths, espec->skip);

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

 //
 // new_base_ts is guaranteed to be <= v810_timestamp
 //
 v810_timestamp_t new_base_ts;
 espec->SoundBufSize = SoundBox_Flush(v810_timestamp, &new_base_ts, espec->SoundBuf, espec->SoundBufMaxSize);

 KING_ResetTS(new_base_ts);
 FXTIMER_ResetTS(new_base_ts);
 FXINPUT_ResetTS(new_base_ts);
 SoundBox_ResetTS(new_base_ts);

 // Call this AFTER all the EndFrame/Flush/ResetTS stuff
 RebaseTS(v810_timestamp, new_base_ts);

 espec->MasterCycles = v810_timestamp - new_base_ts;

 PCFX_V810.ResetTS(new_base_ts);
}

static void PCFX_Reset(void)
{
 const uint32 timestamp = PCFX_V810.v810_timestamp;

 //printf("Reset: %d\n", timestamp);

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

 for(int i = 0; i < 2; i++)
 {
  int32 dummy_ne MDFN_NOWARN_UNUSED;

  dummy_ne = fx_vdc_chips[i]->Reset();
 }

 KING_Reset(timestamp);	// SCSICD_Power() is called from KING_Reset()
 SoundBox_Reset(timestamp);
 RAINBOW_Reset();

 if(WantHuC6273)
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

static void SetRegGroups(void);

static bool LoadCommon(std::vector<CDIF *> *CDInterfaces)
{
   V810_Emu_Mode cpu_mode;
   std::string biospath    = MDFN_MakeFName(MDFNMKF_FIRMWARE, 0, MDFN_GetSettingS("pcfx.bios").c_str());
   std::string fxscsi_path = MDFN_GetSettingS("pcfx.fxscsi");	// For developers only, so don't make it convenient.
   MDFNFILE *BIOSFile      = file_open(biospath.c_str());

   if(!BIOSFile)
      return(0);

   cpu_mode = (V810_Emu_Mode)MDFN_GetSettingI("pcfx.cpu_emulation");
   if(cpu_mode == _V810_EMU_MODE_COUNT)
   {
      cpu_mode = (EmuFlags & CDGE_FLAG_ACCURATE_V810) ? V810_EMU_MODE_ACCURATE : V810_EMU_MODE_FAST;
   }

   if(EmuFlags & CDGE_FLAG_FXGA)
   {
      //WantHuC6273 = TRUE;
   }

   MDFN_printf(_("V810 Emulation Mode: %s\n"), (cpu_mode == V810_EMU_MODE_ACCURATE) ? _("Accurate") : _("Fast"));
   PCFX_V810.Init(cpu_mode, false);

   uint32 RAM_Map_Addresses[1] = { 0x00000000 };
   uint32 BIOSROM_Map_Addresses[1] = { 0xFFF00000 };

   RAM = PCFX_V810.SetFastMap(RAM_Map_Addresses, 0x00200000, 1, "RAM");

   // todo: cleanup on error
   if(!RAM)
      return(0);

   BIOSROM = PCFX_V810.SetFastMap(BIOSROM_Map_Addresses, 0x00100000, 1, "BIOS ROM");
   if(!BIOSROM)
      return(0);

   if(GET_FSIZE_PTR(BIOSFile) != 1024 * 1024)
   {
      MDFN_PrintError(_("BIOS ROM file is incorrect size.\n"));
      return(0);
   }

   memcpy(BIOSROM, GET_FDATA_PTR(BIOSFile), 1024 * 1024);

   file_close(BIOSFile);
   BIOSFile = NULL;

#if 0
   if(fxscsi_path != "0" && fxscsi_path != "" && fxscsi_path != "none")
   {
      MDFNFILE *FXSCSIFile;

      FXSCSIFile = file_open(fxscsi_path);

      if(!FXSCSIFile)
         return(0);

      if(GET_FSIZE_PTR(FXSCSIFile) != 1024 * 512)
      {
         MDFN_PrintError(_("BIOS ROM file is incorrect size.\n"));
         return(0);
      }

      uint32 FXSCSI_Map_Addresses[1] = { 0x80780000 };

      if(!(FXSCSIROM = PCFX_V810.SetFastMap(FXSCSI_Map_Addresses, 0x0080000, 1, _("FX-SCSI ROM"))))
      {
         return(0);
      }

      memcpy(FXSCSIROM, GET_FDATA_PTR(FXSCSIFile), 1024 * 512);

      file_close(FXSCSIFile);
      FXSCSIFile = NULL;
   }
#endif

   for(int i = 0; i < 2; i++)
   {
      fx_vdc_chips[i] = new VDC(MDFN_GetSettingB("pcfx.nospritelimit"), 65536);
      fx_vdc_chips[i]->SetWSHook(NULL);
      fx_vdc_chips[i]->SetIRQHook(i ? VDCB_IRQHook : VDCA_IRQHook);

      //fx_vdc_chips[0] = FXVDC_Init(PCFXIRQ_SOURCE_VDCA, MDFN_GetSettingB("pcfx.nospritelimit"));
      //fx_vdc_chips[1] = FXVDC_Init(PCFXIRQ_SOURCE_VDCB, MDFN_GetSettingB("pcfx.nospritelimit"));
   }

   SoundBox_Init(MDFN_GetSettingB("pcfx.adpcm.emulate_buggy_codec"), MDFN_GetSettingB("pcfx.adpcm.suppress_channel_reset_clicks"));
   RAINBOW_Init(MDFN_GetSettingB("pcfx.rainbow.chromaip"));
   FXINPUT_Init();
   FXTIMER_Init();

   if(WantHuC6273)
      HuC6273_Init();

   if(!KING_Init())
   {
      free(BIOSROM);
      free(RAM);
      BIOSROM = NULL;
      RAM = NULL;
      return(0);
   }

   CD_TrayOpen = false;
   CD_SelectedDisc = 0;

   SCSICD_SetDisc(true, NULL, true);
   SCSICD_SetDisc(false, (*CDInterfaces)[0], true);




   MDFNGameInfo->fps = (uint32)((double)7159090.90909090 / 455 / 263 * 65536 * 256);

   MDFNGameInfo->nominal_height = MDFN_GetSettingUI("pcfx.slend") - MDFN_GetSettingUI("pcfx.slstart") + 1;

   // Emulation raw framebuffer image should always be of 256 width when the pcfx.high_dotclock_width setting is set to "256",
   // but it could be either 256 or 341 when the setting is set to "341", so stay with 1024 in that case so we won't have
   // a messed up aspect ratio in our recorded QuickTime movies.
   MDFNGameInfo->lcm_width = (MDFN_GetSettingUI("pcfx.high_dotclock_width") == 256) ? 256 : 1024;
   MDFNGameInfo->lcm_height = MDFNGameInfo->nominal_height;

   MDFNMP_Init(1024 * 1024, ((uint64)1 << 32) / (1024 * 1024));
   MDFNMP_AddRAM(2048 * 1024, 0x00000000, RAM);


   BRAMDisabled = MDFN_GetSettingB("pcfx.disable_bram");

   if(BRAMDisabled)
      MDFN_printf(_("Warning: BRAM is disabled per pcfx.disable_bram setting.  This is simulating a malfunction.\n"));

   if(!BRAMDisabled)
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
   for(int i = 0; i < 256; i++)
   {
      PCFX_V810.SetMemReadBus32(i, FALSE);
      PCFX_V810.SetMemWriteBus32(i, FALSE);
   }

   // 16MiB RAM area.
   PCFX_V810.SetMemReadBus32(0, TRUE);
   PCFX_V810.SetMemWriteBus32(0, TRUE);

   // Bitstring read range
   for(int i = 0xA0; i <= 0xAF; i++)
   {
      PCFX_V810.SetMemReadBus32(i, FALSE);       // Reads to the read range are 16-bit, and
      PCFX_V810.SetMemWriteBus32(i, TRUE);       // writes are 32-bit.
   }

   // Bitstring write range
   for(int i = 0xB0; i <= 0xBF; i++)
   {
      PCFX_V810.SetMemReadBus32(i, TRUE);	// Reads to the write range are 32-bit,
      PCFX_V810.SetMemWriteBus32(i, FALSE);	// but writes are 16-bit!
   }

   // BIOS area
   for(int i = 0xF0; i <= 0xFF; i++)
   {
      PCFX_V810.SetMemReadBus32(i, FALSE);
      PCFX_V810.SetMemWriteBus32(i, FALSE);
   }

   PCFX_V810.SetMemReadHandlers(mem_rbyte, mem_rhword, mem_rword);
   PCFX_V810.SetMemWriteHandlers(mem_wbyte, mem_whword, mem_wword);

   PCFX_V810.SetIOReadHandlers(port_rbyte, port_rhword, NULL);
   PCFX_V810.SetIOWriteHandlers(port_wbyte, port_whword, NULL);



   return(1);
}

static void DoMD5CDVoodoo(std::vector<CDIF *> *CDInterfaces)
{
 const CDGameEntry *found_entry = NULL;
 TOC toc;

#if 0
 puts("{");
 puts(" ,");
 puts(" ,");
 puts(" 0,");
 puts(" 1,");
 puts(" {");
 puts("  {");

 for(int i = CDIF_GetFirstTrack(); i <= CDIF_GetLastTrack(); i++)
 {
    CDIF_Track_Format tf;

    CDIF_GetTrackFormat(i, tf);

    printf("   { %d, %s, %d },\n", i, (tf == CDIF_FORMAT_AUDIO) ? "CDIF_FORMAT_AUDIO" : "CDIF_FORMAT_MODE1", CDIF_GetTrackStartPositionLBA(i));
 }
 printf("   { -1, (CDIF_Track_Format)-1, %d },\n", CDIF_GetSectorCountLBA());
 puts("  }");
 puts(" }");
 puts("},");
 //exit(1);
#endif

 for(unsigned if_disc = 0; if_disc < CDInterfaces->size(); if_disc++)
 {
  (*CDInterfaces)[if_disc]->ReadTOC(&toc);

  if(toc.first_track == 1)
  {
   for(unsigned int g = 0; g < sizeof(GameList) / sizeof(CDGameEntry); g++)
   {
    const CDGameEntry *entry = &GameList[g];

    assert(entry->discs == 1 || entry->discs == 2);

    for(unsigned int disc = 0; disc < entry->discs; disc++)
    {
     const CDGameEntryTrack *et = entry->tracks[disc];
     bool GameFound = TRUE;

     while(et->tracknum != -1 && GameFound)
     {
      assert(et->tracknum > 0 && et->tracknum < 100);

      if(toc.tracks[et->tracknum].lba != et->lba)
       GameFound = FALSE;

      if( ((et->format == CDGE_FORMAT_DATA) ? 0x4 : 0x0) != (toc.tracks[et->tracknum].control & 0x4))
       GameFound = FALSE;

      et++;
     }

     if(et->tracknum == -1)
     {
      if((et - 1)->tracknum != toc.last_track)
       GameFound = FALSE;
 
      if(et->lba != toc.tracks[100].lba)
       GameFound = FALSE;
     }

     if(GameFound)
     {
      found_entry = entry;
      goto FoundIt;
     }
    } // End disc count loop
   }
  }

  FoundIt: ;

  if(found_entry)
  {
   EmuFlags = found_entry->flags;

   if(found_entry->discs > 1)
   {
    const char *hash_prefix = "Mednafen PC-FX Multi-Game Set";
    md5_context md5_gameset;

    mednafen_md5_starts(&md5_gameset);

    mednafen_md5_update(&md5_gameset, (uint8_t*)hash_prefix, strlen(hash_prefix));

    for(unsigned int disc = 0; disc < found_entry->discs; disc++)
    {
     const CDGameEntryTrack *et = found_entry->tracks[disc];

     while(et->tracknum)
     {
      mednafen_md5_update_u32_as_lsb(&md5_gameset, et->tracknum);
      mednafen_md5_update_u32_as_lsb(&md5_gameset, (uint32)et->format);
      mednafen_md5_update_u32_as_lsb(&md5_gameset, et->lba);

      if(et->tracknum == -1)
       break;
      et++;
     }
    }
    mednafen_md5_finish(&md5_gameset, MDFNGameInfo->GameSetMD5);
    MDFNGameInfo->GameSetMD5Valid = TRUE;
   }
   break;
  }
 } // end: for(unsigned if_disc = 0; if_disc < CDInterfaces->size(); if_disc++)

 MDFN_printf(_("CD Layout MD5:   0x%s\n"), mednafen_md5_asciistr(MDFNGameInfo->MD5));

 if(MDFNGameInfo->GameSetMD5Valid)
  MDFN_printf(_("GameSet MD5:     0x%s\n"), mednafen_md5_asciistr(MDFNGameInfo->GameSetMD5));
}

// PC-FX BIOS will look at all data tracks(not just the first one), in contrast to the PCE CD BIOS, which only looks
// at the first data track.
static bool TestMagicCD(std::vector<CDIF *> *CDInterfaces)
{
 TOC toc;
 uint8 sector_buffer[2048];
 CDIF *cdiface = (*CDInterfaces)[0];

 memset(sector_buffer, 0, sizeof(sector_buffer));

 cdiface->ReadTOC(&toc);

 for(int32 track = toc.first_track; track <= toc.last_track; track++)
 {
  if(toc.tracks[track].control & 0x4)
  {
   cdiface->ReadSector(sector_buffer, toc.tracks[track].lba, 1);
   if(!strncmp("PC-FX:Hu_CD-ROM", (char*)sector_buffer, strlen("PC-FX:Hu_CD-ROM")))
   {
    return(TRUE);
   }

   if(!strncmp((char *)sector_buffer + 64, "PPPPHHHHOOOOTTTTOOOO____CCCCDDDD", 32))
    return(true);
  }
 }
 return(FALSE);
}

int LoadCD(std::vector<CDIF *> *CDInterfaces)
{
 EmuFlags = 0;

 cdifs = CDInterfaces;

 DoMD5CDVoodoo(CDInterfaces);

 if(!LoadCommon(CDInterfaces))
  return(0);

 MDFN_printf(_("Emulated CD-ROM drive speed: %ux\n"), (unsigned int)MDFN_GetSettingUI("pcfx.cdspeed"));

 MDFNGameInfo->GameType = GMT_CDROM;

 PCFX_Power();

 return(1);
}

static void PCFX_CDInsertEject(void)
{
 CD_TrayOpen = !CD_TrayOpen;

 for(unsigned disc = 0; disc < cdifs->size(); disc++)
 {
#if 0
  if(!(*cdifs)[disc]->Eject(CD_TrayOpen))
  {
   MDFN_DispMessage(_("Eject error."));
   CD_TrayOpen = !CD_TrayOpen;
  }
#endif
 }

 if(CD_TrayOpen)
  MDFN_DispMessage(_("Virtual CD Drive Tray Open"));
 else
  MDFN_DispMessage(_("Virtual CD Drive Tray Closed"));

 SCSICD_SetDisc(CD_TrayOpen, (CD_SelectedDisc >= 0 && !CD_TrayOpen) ? (*cdifs)[CD_SelectedDisc] : NULL);
}

static void PCFX_CDEject(void)
{
 if(!CD_TrayOpen)
  PCFX_CDInsertEject();
}

static void PCFX_CDSelect(void)
{
 if(cdifs && CD_TrayOpen)
 {
  CD_SelectedDisc = (CD_SelectedDisc + 1) % (cdifs->size() + 1);

  if((unsigned)CD_SelectedDisc == cdifs->size())
   CD_SelectedDisc = -1;

  if(CD_SelectedDisc == -1)
   MDFN_DispMessage(_("Disc absence selected."));
  else
   MDFN_DispMessage(_("Disc %d of %d selected."), CD_SelectedDisc + 1, (int)cdifs->size());
 }
}

void CloseGame(void)
{
   unsigned i;

   for(i = 0; i < 2; i++)
   {
      if(fx_vdc_chips[i])
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
   RAM = NULL;
   BIOSROM = NULL;
}

void DoSimpleCommand(int cmd)
{
 switch(cmd)
 {
   case MDFN_MSC_INSERT_DISK:
		PCFX_CDInsertEject();
                break;

   case MDFN_MSC_SELECT_DISK:
		PCFX_CDSelect();
                break;

   case MDFN_MSC_EJECT_DISK:
		PCFX_CDEject();
                break;

  case MDFN_MSC_RESET: PCFX_Reset(); break;
  case MDFN_MSC_POWER: PCFX_Power(); break;
 }
}

int StateAction(StateMem *sm, int load, int data_only)
{
   const v810_timestamp_t timestamp = PCFX_V810.v810_timestamp;

   SFORMAT StateRegs[] =
   {
      SFARRAY(RAM, 0x200000),
      SFARRAY16(Last_VDC_AR, 2),
      SFVAR(BackupControl),
      SFVAR(ExBusReset),
      SFARRAY(BackupRAM, BRAMDisabled ? 0 : 0x8000),
      SFARRAY(ExBackupRAM, BRAMDisabled ? 0 : 0x8000),

      SFVAR(CD_TrayOpen),
      SFVAR(CD_SelectedDisc),

      SFEND
   };

   int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "MAIN", false);

   for(int i = 0; i < 2; i++)
      ret &= fx_vdc_chips[i]->StateAction(sm, load, data_only, i ? "VDC1" : "VDC0");

   ret &= FXINPUT_StateAction(sm, load, data_only);
   ret &= PCFXIRQ_StateAction(sm, load, data_only);
   ret &= KING_StateAction(sm, load, data_only);
   ret &= PCFX_V810.StateAction(sm, load, data_only);
   ret &= FXTIMER_StateAction(sm, load, data_only);
   ret &= SoundBox_StateAction(sm, load, data_only);
   ret &= SCSICD_StateAction(sm, load, data_only, "CDRM");
   ret &= RAINBOW_StateAction(sm, load, data_only);

   if(load)
   {
      //
      // Rather than bothering to store next event timestamp deltas in save states, we'll just recalculate next event times on save state load as a side effect
      // of this call.
      //
      ForceEventUpdates(timestamp);

      if(cdifs)
      {
         // Sanity check.
         if(CD_SelectedDisc >= (int)cdifs->size())
            CD_SelectedDisc = (int)cdifs->size() - 1;

         SCSICD_SetDisc(CD_TrayOpen, (CD_SelectedDisc >= 0 && !CD_TrayOpen) ? (*cdifs)[CD_SelectedDisc] : NULL, true);
      }
   }

   //printf("0x%08x, %d %d %d %d\n", load, next_pad_ts, next_timer_ts, next_adpcm_ts, next_king_ts);

   return(ret);
}

static const MDFNSetting_EnumList V810Mode_List[] =
{
 { "fast", (int)V810_EMU_MODE_FAST, "Fast Mode", "Fast mode trades timing accuracy, cache emulation, and executing from hardware registers and RAM not intended for code use for performance."},
 { "accurate", (int)V810_EMU_MODE_ACCURATE, "Accurate Mode", "Increased timing accuracy, though not perfect, along with cache emulation, at the cost of decreased performance.  Additionally, even the pipeline isn't correctly and fully emulated in this mode." },
 { "auto", (int)_V810_EMU_MODE_COUNT, "Auto Mode", "Selects \"fast\" or \"accurate\" automatically based on an internal database.  If the CD image is not recognized, defaults to \"fast\"." },
 { NULL, 0 },
};


static const MDFNSetting_EnumList HDCWidthList[] =
{
 { "256", 256,	"256 pixels", "This value will cause heavy pixel distortion." },
 { "341", 341,	"341 pixels", "This value will cause moderate pixel distortion." },
 { "1024", 1024, "1024 pixels", "This value will cause no pixel distortion as long as interpolation is enabled on the video output device and the resolution is sufficiently high, but it will use a lot of CPU time." },
 { NULL, 0 },
};

static MDFNSetting PCFXSettings[] =
{
  { "pcfx.input.port1.multitap", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "Enable multitap on PC-FX port 1.", "EXPERIMENTAL emulation of the unreleased multitap.  Enables ports 3 4 5.", MDFNST_BOOL, "0", NULL, NULL },
  { "pcfx.input.port2.multitap", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "Enable multitap on PC-FX port 2.", "EXPERIMENTAL emulation of the unreleased multitap.  Enables ports 6 7 8.", MDFNST_BOOL, "0", NULL, NULL },


  { "pcfx.mouse_sensitivity", MDFNSF_NOFLAGS, "Mouse sensitivity.", NULL, MDFNST_FLOAT, "1.25", NULL, NULL },
  { "pcfx.disable_softreset", MDFNSF_NOFLAGS, "When RUN+SEL are pressed simultaneously, disable both buttons temporarily.", NULL, MDFNST_BOOL, "0", NULL, NULL, NULL, FXINPUT_SettingChanged },

  { "pcfx.cpu_emulation", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "CPU emulation mode.", NULL, MDFNST_ENUM, "auto", NULL, NULL, NULL, NULL, V810Mode_List },
  { "pcfx.bios", MDFNSF_EMU_STATE, "Path to the ROM BIOS", NULL, MDFNST_STRING, "pcfx.rom" },
  { "pcfx.fxscsi", MDFNSF_EMU_STATE, "Path to the FX-SCSI ROM", "Intended for developers only.", MDFNST_STRING, "0" },
  { "pcfx.disable_bram", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "Disable internal and external BRAM.", "It is intended for viewing games' error screens that may be different from simple BRAM full and uninitialized BRAM error screens, though it can cause the game to crash outright.", MDFNST_BOOL, "0" },
  { "pcfx.cdspeed", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "Emulated CD-ROM speed.", "Setting the value higher than 2, the default, will decrease loading times in most games by some degree.", MDFNST_UINT, "2", "2", "10" },

  { "pcfx.nospritelimit", MDFNSF_NOFLAGS, "Remove 16-sprites-per-scanline hardware limit.", NULL, MDFNST_BOOL, "0" },
  { "pcfx.high_dotclock_width", MDFNSF_NOFLAGS, "Emulated width for 7.16MHz dot-clock mode.", "Lower values are faster, but will cause some degree of pixel distortion.", MDFNST_ENUM, "1024", NULL, NULL, NULL, NULL, HDCWidthList },

  { "pcfx.slstart", MDFNSF_NOFLAGS, "First rendered scanline.", NULL, MDFNST_UINT, "4", "0", "239" },
  { "pcfx.slend", MDFNSF_NOFLAGS, "Last rendered scanline.", NULL, MDFNST_UINT, "235", "0", "239" },

  { "pcfx.rainbow.chromaip", MDFNSF_NOFLAGS, "Enable bilinear interpolation on the chroma channel of RAINBOW YUV output.", "This is an enhancement-related setting.  Enabling it may cause graphical glitches with some games.", MDFNST_BOOL, "0" },

  { "pcfx.adpcm.suppress_channel_reset_clicks", MDFNSF_NOFLAGS, "Hack to suppress clicks caused by forced channel resets.", NULL, MDFNST_BOOL, "1" },

  // Hack that emulates the codec a buggy ADPCM encoder used for some games' ADPCM.  Not enabled by default because it makes some games(with 
  //correctly-encoded  ADPCM?) sound worse
  { "pcfx.adpcm.emulate_buggy_codec", MDFNSF_NOFLAGS, "Hack that emulates the codec a buggy ADPCM encoder used for some games' ADPCM.", NULL, MDFNST_BOOL, "0" },

  { "pcfx.resamp_quality", MDFNSF_NOFLAGS, "Sound quality.", "Higher values correspond to better SNR and better preservation of higher frequencies(\"brightness\"), at the cost of increased computational complexity and a negligible increase in latency.", MDFNST_INT, "3", "0", "5" },
  { "pcfx.resamp_rate_error", MDFNSF_NOFLAGS, "Output rate tolerance.", "Lower values correspond to better matching of the output rate of the resampler to the actual desired output rate, at the expense of increased RAM usage and poorer CPU cache utilization.", MDFNST_FLOAT, "0.0000009", "0.0000001", "0.0000350" },

  { NULL }
};

static const FileExtensionSpecStruct KnownExtensions[] =
{
 //{ ".ex", "PC-FX HuEXE" },
 { NULL, NULL }
};

MDFNGI EmulatedPCFX =
{
 PCFXSettings,
 MDFN_MASTERCLOCK_FIXED(PCFX_MASTER_CLOCK),
 0,
 TRUE,  // Multires possible?

 0,   // lcm_width
 0,   // lcm_height
 NULL,  // Dummy

 288,	// Nominal width
 240,	// Nominal height

 1024,	// Framebuffer width
 512,	// Framebuffer height

 2,     // Number of output sound channels
};
