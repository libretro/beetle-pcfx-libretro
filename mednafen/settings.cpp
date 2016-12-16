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

#include "mednafen.h"
#include <errno.h>
#include <string.h>
#include <string>
#include "settings.h"

bool MDFN_SaveSettings(const char *path)
{
   return(1);
}

uint64 MDFN_GetSettingUI(const char *name)
{
   if (!strcmp("pcfx.cdspeed", name))
      return 2;
   if (!strcmp("pcfx.slend", name))
      return 239;
   if (!strcmp("pcfx.slstart", name))
      return 0;
   if (!strcmp("pcfx.high_dotclock_width", name))
      return 1024; /* TODO - make configurable */
   if (!strcmp("pcfx.resamp_quality", name))
      return 3; /* TODO - make configurable */

   fprintf(stderr, "unhandled setting UI: %s\n", name);
   return 0;
}

int64 MDFN_GetSettingI(const char *name)
{
   if (!strcmp("pcfx.cpu_emulation", name))
      return 2;
   fprintf(stderr, "unhandled setting I: %s\n", name);
   return 0;
}

double MDFN_GetSettingF(const char *name)
{
   if (!strcmp("pcfx.resamp_rate_error", name))
      return 0.0000009;
   if (!strcmp("pcfx.mouse_sensitivity", name))
      return  	1.25; /* TODO - make configurable */

   fprintf(stderr, "unhandled setting F: %s\n", name);
   return 0;
}

bool MDFN_GetSettingB(const char *name)
{
   if (!strcmp("cheats", name))
      return 0;
   /* LIBRETRO */
   if (!strcmp("libretro.cd_load_into_ram", name))
      return 0;
   if (!strcmp("pcfx.disable_softreset", name))
      return 0; /* TODO - make configurable */
   if (!strcmp("pcfx.disable_softreset", name))
      return 0; /* TODO - make configurable */
   if (!strcmp("pcfx.input.port1.multitap", name))
      return 0; /* TODO - make configurable */
   if (!strcmp("pcfx.input.port2.multitap", name))
      return 0; /* TODO - make configurable */
   if (!strcmp("pcfx.nospritelimit", name))
      return 0; /* TODO - make configurable */
   if (!strcmp("pcfx.adpcm.suppress_channel_reset_clicks", name))
      return 1; /* TODO - make configurable */
   if (!strcmp("pcfx.disable_bram", name))
      return 0; /* TODO - make configurable */
   if (!strcmp("pcfx.adpcm.emulate_buggy_codec", name))
      return 0; /* TODO - make configurable */
   if (!strcmp("pcfx.rainbow.chromaip", name))
      return 0; /* TODO - make configurable */
   /* CDROM */
   if (!strcmp("cdrom.lec_eval", name))
      return 1;
   /* FILESYS */
   if (!strcmp("filesys.untrusted_fip_check", name))
      return 0;
   if (!strcmp("filesys.disablesavegz", name))
      return 1;
   fprintf(stderr, "unhandled setting B: %s\n", name);
   return 0;
}

extern std::string retro_base_directory;
extern std::string retro_base_name;

std::string MDFN_GetSettingS(const char *name)
{
   if (!strcmp("pcfx.bios", name))
      return std::string("pcfx.bios");
   if (!strcmp("pcfx.fxscsi", name))
      return std::string("pcfx.fxscsi");
   /* FILESYS */
   if (!strcmp("filesys.path_firmware", name))
      return retro_base_directory;
   if (!strcmp("filesys.path_palette", name))
      return retro_base_directory;
   if (!strcmp("filesys.path_sav", name))
      return retro_base_directory;
   if (!strcmp("filesys.path_state", name))
      return retro_base_directory;
   if (!strcmp("filesys.path_cheat", name))
      return retro_base_directory;
   if (!strcmp("filesys.fname_state", name))
      return retro_base_name + std::string(".sav");
   if (!strcmp("filesys.fname_sav", name))
      return retro_base_name + std::string(".bsv");
   fprintf(stderr, "unhandled setting S: %s\n", name);
   return 0;
}

bool MDFNI_SetSetting(const char *name, const char *value, bool NetplayOverride)
{
   return false;
}

bool MDFNI_SetSettingB(const char *name, bool value)
{
   return false;
}

bool MDFNI_SetSettingUI(const char *name, uint64 value)
{
   return false;
}

void MDFNI_DumpSettingsDef(const char *path)
{
}
