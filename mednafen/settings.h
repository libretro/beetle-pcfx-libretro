#ifndef MDFN_SETTINGS_H
#define MDFN_SETTINGS_H

#include <string>

extern int setting_initial_scanline;
extern int setting_last_scanline;
extern int setting_high_dotclock_width;
extern int setting_nospritelimit;
extern int setting_resamp_quality;
extern int setting_suppress_channel_reset_clicks;
extern int setting_emulate_buggy_codec;
extern int setting_rainbow_chromaip;

bool MDFN_LoadSettings(const char *path, const char *section = NULL, bool override = false);
bool MDFN_MergeSettings(const void*);
bool MDFN_MergeSettings(const std::vector<void> &);
bool MDFN_SaveSettings(const char *path);

void MDFN_KillSettings(void);	// Free any resources acquired.

// This should assert() or something if the setting isn't found, since it would
// be a totally tubular error!
uint64 MDFN_GetSettingUI(const char *name);
int64 MDFN_GetSettingI(const char *name);
double MDFN_GetSettingF(const char *name);
bool MDFN_GetSettingB(const char *name);
std::string MDFN_GetSettingS(const char *name);
#endif
