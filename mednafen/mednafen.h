#ifndef _MEDNAFEN_H
#define _MEDNAFEN_H

#include "mednafen-types.h"
#include <stdlib.h>
#include <string.h>

#include "math_ops.h"
#include "git.h"

#include "settings.h"

#ifdef _MSC_VER
#include <compat/msvc.h>
#endif

#ifdef _WIN32
#define strcasecmp _stricmp
#endif

extern MDFNGI EmulatedPCFX;

void MDFN_PrintError(const char *format, ...);
void MDFN_DispMessage(const char *format, ...);

void MDFN_LoadGameCheats(void *override);
void MDFN_FlushGameCheats(int nosave);

#endif
