#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

#ifdef __cplusplus
extern "C" {
#endif
/* RETRO_LANGUAGE_AR */

#define PCFX_CDIMAGECACHE_LABEL_AR NULL
#define PCFX_CDIMAGECACHE_INFO_0_AR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_AR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_AR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_AR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_AR NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_AR NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_AR NULL
#define PCFX_RESAMP_QUALITY_LABEL_AR NULL
#define PCFX_RESAMP_QUALITY_INFO_0_AR NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_AR NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_AR NULL
#define PCFX_NOSPRITELIMIT_LABEL_AR NULL
#define PCFX_NOSPRITELIMIT_INFO_0_AR NULL
#define PCFX_INITIAL_SCANLINE_LABEL_AR NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_4_AR NULL
#define PCFX_LAST_SCANLINE_LABEL_AR NULL
#define PCFX_LAST_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_235_AR NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_AR NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_AR NULL
#define OPTION_VAL_1_00_AR NULL
#define OPTION_VAL_1_25_AR NULL
#define OPTION_VAL_1_50_AR NULL
#define OPTION_VAL_1_75_AR NULL
#define OPTION_VAL_2_00_AR NULL
#define OPTION_VAL_2_25_AR NULL
#define OPTION_VAL_2_50_AR NULL
#define OPTION_VAL_2_75_AR NULL
#define OPTION_VAL_3_00_AR NULL
#define OPTION_VAL_3_25_AR NULL
#define OPTION_VAL_3_50_AR NULL
#define OPTION_VAL_3_75_AR NULL
#define OPTION_VAL_4_00_AR NULL
#define OPTION_VAL_4_25_AR NULL
#define OPTION_VAL_4_50_AR NULL
#define OPTION_VAL_4_75_AR NULL
#define OPTION_VAL_5_00_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_AR,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_AR,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_AR,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_AR,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_AR,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_AR,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_AR,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_AR,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_AR,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_AR,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_AR,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_AR,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_AR },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_AR,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_AR,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_AR },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_AR,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_AR,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_AR },
         { "1.25",   OPTION_VAL_1_25_AR },
         { "1.50",   OPTION_VAL_1_50_AR },
         { "1.75",   OPTION_VAL_1_75_AR },
         { "2.00",   OPTION_VAL_2_00_AR },
         { "2.25",   OPTION_VAL_2_25_AR },
         { "2.50",   OPTION_VAL_2_50_AR },
         { "2.75",   OPTION_VAL_2_75_AR },
         { "3.00",   OPTION_VAL_3_00_AR },
         { "3.25",   OPTION_VAL_3_25_AR },
         { "3.50",   OPTION_VAL_3_50_AR },
         { "3.75",   OPTION_VAL_3_75_AR },
         { "4.00",   OPTION_VAL_4_00_AR },
         { "4.25",   OPTION_VAL_4_25_AR },
         { "4.50",   OPTION_VAL_4_50_AR },
         { "4.75",   OPTION_VAL_4_75_AR },
         { "5.00",   OPTION_VAL_5_00_AR },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define PCFX_CDIMAGECACHE_LABEL_AST NULL
#define PCFX_CDIMAGECACHE_INFO_0_AST NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_AST NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_AST NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_AST NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_AST NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_AST NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_AST NULL
#define PCFX_RESAMP_QUALITY_LABEL_AST NULL
#define PCFX_RESAMP_QUALITY_INFO_0_AST NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_AST NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_AST NULL
#define PCFX_NOSPRITELIMIT_LABEL_AST NULL
#define PCFX_NOSPRITELIMIT_INFO_0_AST NULL
#define PCFX_INITIAL_SCANLINE_LABEL_AST NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_4_AST NULL
#define PCFX_LAST_SCANLINE_LABEL_AST NULL
#define PCFX_LAST_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_235_AST NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_AST NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_AST NULL
#define OPTION_VAL_1_00_AST NULL
#define OPTION_VAL_1_25_AST NULL
#define OPTION_VAL_1_50_AST NULL
#define OPTION_VAL_1_75_AST NULL
#define OPTION_VAL_2_00_AST NULL
#define OPTION_VAL_2_25_AST NULL
#define OPTION_VAL_2_50_AST NULL
#define OPTION_VAL_2_75_AST NULL
#define OPTION_VAL_3_00_AST NULL
#define OPTION_VAL_3_25_AST NULL
#define OPTION_VAL_3_50_AST NULL
#define OPTION_VAL_3_75_AST NULL
#define OPTION_VAL_4_00_AST NULL
#define OPTION_VAL_4_25_AST NULL
#define OPTION_VAL_4_50_AST NULL
#define OPTION_VAL_4_75_AST NULL
#define OPTION_VAL_5_00_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_AST,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_AST,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_AST,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_AST,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_AST,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_AST,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_AST,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_AST,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_AST,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_AST,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_AST,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_AST,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_AST },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_AST,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_AST,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_AST },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_AST,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_AST,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_AST },
         { "1.25",   OPTION_VAL_1_25_AST },
         { "1.50",   OPTION_VAL_1_50_AST },
         { "1.75",   OPTION_VAL_1_75_AST },
         { "2.00",   OPTION_VAL_2_00_AST },
         { "2.25",   OPTION_VAL_2_25_AST },
         { "2.50",   OPTION_VAL_2_50_AST },
         { "2.75",   OPTION_VAL_2_75_AST },
         { "3.00",   OPTION_VAL_3_00_AST },
         { "3.25",   OPTION_VAL_3_25_AST },
         { "3.50",   OPTION_VAL_3_50_AST },
         { "3.75",   OPTION_VAL_3_75_AST },
         { "4.00",   OPTION_VAL_4_00_AST },
         { "4.25",   OPTION_VAL_4_25_AST },
         { "4.50",   OPTION_VAL_4_50_AST },
         { "4.75",   OPTION_VAL_4_75_AST },
         { "5.00",   OPTION_VAL_5_00_AST },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_CA */

#define PCFX_CDIMAGECACHE_LABEL_CA NULL
#define PCFX_CDIMAGECACHE_INFO_0_CA NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CA NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CA NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CA NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CA NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_CA NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_CA NULL
#define PCFX_RESAMP_QUALITY_LABEL_CA NULL
#define PCFX_RESAMP_QUALITY_INFO_0_CA NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_CA NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_CA NULL
#define PCFX_NOSPRITELIMIT_LABEL_CA NULL
#define PCFX_NOSPRITELIMIT_INFO_0_CA NULL
#define PCFX_INITIAL_SCANLINE_LABEL_CA NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_4_CA NULL
#define PCFX_LAST_SCANLINE_LABEL_CA NULL
#define PCFX_LAST_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_235_CA NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_CA NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_CA NULL
#define OPTION_VAL_1_00_CA NULL
#define OPTION_VAL_1_25_CA NULL
#define OPTION_VAL_1_50_CA NULL
#define OPTION_VAL_1_75_CA NULL
#define OPTION_VAL_2_00_CA NULL
#define OPTION_VAL_2_25_CA NULL
#define OPTION_VAL_2_50_CA NULL
#define OPTION_VAL_2_75_CA NULL
#define OPTION_VAL_3_00_CA NULL
#define OPTION_VAL_3_25_CA NULL
#define OPTION_VAL_3_50_CA NULL
#define OPTION_VAL_3_75_CA NULL
#define OPTION_VAL_4_00_CA NULL
#define OPTION_VAL_4_25_CA NULL
#define OPTION_VAL_4_50_CA NULL
#define OPTION_VAL_4_75_CA NULL
#define OPTION_VAL_5_00_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_CA,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CA,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CA,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CA,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CA,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_CA,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_CA,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_CA,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_CA,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_CA,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_CA,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_CA,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_CA },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_CA,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_CA,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_CA },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_CA,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_CA,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_CA },
         { "1.25",   OPTION_VAL_1_25_CA },
         { "1.50",   OPTION_VAL_1_50_CA },
         { "1.75",   OPTION_VAL_1_75_CA },
         { "2.00",   OPTION_VAL_2_00_CA },
         { "2.25",   OPTION_VAL_2_25_CA },
         { "2.50",   OPTION_VAL_2_50_CA },
         { "2.75",   OPTION_VAL_2_75_CA },
         { "3.00",   OPTION_VAL_3_00_CA },
         { "3.25",   OPTION_VAL_3_25_CA },
         { "3.50",   OPTION_VAL_3_50_CA },
         { "3.75",   OPTION_VAL_3_75_CA },
         { "4.00",   OPTION_VAL_4_00_CA },
         { "4.25",   OPTION_VAL_4_25_CA },
         { "4.50",   OPTION_VAL_4_50_CA },
         { "4.75",   OPTION_VAL_4_75_CA },
         { "5.00",   OPTION_VAL_5_00_CA },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define PCFX_CDIMAGECACHE_LABEL_CHS NULL
#define PCFX_CDIMAGECACHE_INFO_0_CHS NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CHS NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CHS NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CHS NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CHS NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_CHS NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_CHS NULL
#define PCFX_RESAMP_QUALITY_LABEL_CHS NULL
#define PCFX_RESAMP_QUALITY_INFO_0_CHS NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_CHS NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_CHS NULL
#define PCFX_NOSPRITELIMIT_LABEL_CHS NULL
#define PCFX_NOSPRITELIMIT_INFO_0_CHS NULL
#define PCFX_INITIAL_SCANLINE_LABEL_CHS NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_4_CHS NULL
#define PCFX_LAST_SCANLINE_LABEL_CHS NULL
#define PCFX_LAST_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_235_CHS NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_CHS NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_CHS NULL
#define OPTION_VAL_1_00_CHS NULL
#define OPTION_VAL_1_25_CHS NULL
#define OPTION_VAL_1_50_CHS NULL
#define OPTION_VAL_1_75_CHS NULL
#define OPTION_VAL_2_00_CHS NULL
#define OPTION_VAL_2_25_CHS NULL
#define OPTION_VAL_2_50_CHS NULL
#define OPTION_VAL_2_75_CHS NULL
#define OPTION_VAL_3_00_CHS NULL
#define OPTION_VAL_3_25_CHS NULL
#define OPTION_VAL_3_50_CHS NULL
#define OPTION_VAL_3_75_CHS NULL
#define OPTION_VAL_4_00_CHS NULL
#define OPTION_VAL_4_25_CHS NULL
#define OPTION_VAL_4_50_CHS NULL
#define OPTION_VAL_4_75_CHS NULL
#define OPTION_VAL_5_00_CHS NULL

struct retro_core_option_v2_category option_cats_chs[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_CHS,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CHS,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CHS,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_CHS,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_CHS,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_CHS,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_CHS,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_CHS,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_CHS },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_CHS,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_CHS },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_CHS,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_CHS },
         { "1.25",   OPTION_VAL_1_25_CHS },
         { "1.50",   OPTION_VAL_1_50_CHS },
         { "1.75",   OPTION_VAL_1_75_CHS },
         { "2.00",   OPTION_VAL_2_00_CHS },
         { "2.25",   OPTION_VAL_2_25_CHS },
         { "2.50",   OPTION_VAL_2_50_CHS },
         { "2.75",   OPTION_VAL_2_75_CHS },
         { "3.00",   OPTION_VAL_3_00_CHS },
         { "3.25",   OPTION_VAL_3_25_CHS },
         { "3.50",   OPTION_VAL_3_50_CHS },
         { "3.75",   OPTION_VAL_3_75_CHS },
         { "4.00",   OPTION_VAL_4_00_CHS },
         { "4.25",   OPTION_VAL_4_25_CHS },
         { "4.50",   OPTION_VAL_4_50_CHS },
         { "4.75",   OPTION_VAL_4_75_CHS },
         { "5.00",   OPTION_VAL_5_00_CHS },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define PCFX_CDIMAGECACHE_LABEL_CHT NULL
#define PCFX_CDIMAGECACHE_INFO_0_CHT NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CHT NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CHT NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CHT NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CHT NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_CHT NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_CHT NULL
#define PCFX_RESAMP_QUALITY_LABEL_CHT NULL
#define PCFX_RESAMP_QUALITY_INFO_0_CHT NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_CHT NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_CHT NULL
#define PCFX_NOSPRITELIMIT_LABEL_CHT NULL
#define PCFX_NOSPRITELIMIT_INFO_0_CHT NULL
#define PCFX_INITIAL_SCANLINE_LABEL_CHT NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_CHT NULL
#define OPTION_VAL_4_CHT NULL
#define PCFX_LAST_SCANLINE_LABEL_CHT NULL
#define PCFX_LAST_SCANLINE_INFO_0_CHT NULL
#define OPTION_VAL_235_CHT NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_CHT NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_CHT NULL
#define OPTION_VAL_1_00_CHT NULL
#define OPTION_VAL_1_25_CHT NULL
#define OPTION_VAL_1_50_CHT NULL
#define OPTION_VAL_1_75_CHT NULL
#define OPTION_VAL_2_00_CHT NULL
#define OPTION_VAL_2_25_CHT NULL
#define OPTION_VAL_2_50_CHT NULL
#define OPTION_VAL_2_75_CHT NULL
#define OPTION_VAL_3_00_CHT NULL
#define OPTION_VAL_3_25_CHT NULL
#define OPTION_VAL_3_50_CHT NULL
#define OPTION_VAL_3_75_CHT NULL
#define OPTION_VAL_4_00_CHT NULL
#define OPTION_VAL_4_25_CHT NULL
#define OPTION_VAL_4_50_CHT NULL
#define OPTION_VAL_4_75_CHT NULL
#define OPTION_VAL_5_00_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_CHT,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CHT,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CHT,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_CHT,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_CHT,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_CHT,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_CHT,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_CHT,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_CHT },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_CHT,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_CHT },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_CHT,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_CHT },
         { "1.25",   OPTION_VAL_1_25_CHT },
         { "1.50",   OPTION_VAL_1_50_CHT },
         { "1.75",   OPTION_VAL_1_75_CHT },
         { "2.00",   OPTION_VAL_2_00_CHT },
         { "2.25",   OPTION_VAL_2_25_CHT },
         { "2.50",   OPTION_VAL_2_50_CHT },
         { "2.75",   OPTION_VAL_2_75_CHT },
         { "3.00",   OPTION_VAL_3_00_CHT },
         { "3.25",   OPTION_VAL_3_25_CHT },
         { "3.50",   OPTION_VAL_3_50_CHT },
         { "3.75",   OPTION_VAL_3_75_CHT },
         { "4.00",   OPTION_VAL_4_00_CHT },
         { "4.25",   OPTION_VAL_4_25_CHT },
         { "4.50",   OPTION_VAL_4_50_CHT },
         { "4.75",   OPTION_VAL_4_75_CHT },
         { "5.00",   OPTION_VAL_5_00_CHT },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define PCFX_CDIMAGECACHE_LABEL_CS NULL
#define PCFX_CDIMAGECACHE_INFO_0_CS NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CS NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CS NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CS NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CS NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_CS NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_CS NULL
#define PCFX_RESAMP_QUALITY_LABEL_CS NULL
#define PCFX_RESAMP_QUALITY_INFO_0_CS NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_CS NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_CS NULL
#define PCFX_NOSPRITELIMIT_LABEL_CS NULL
#define PCFX_NOSPRITELIMIT_INFO_0_CS NULL
#define PCFX_INITIAL_SCANLINE_LABEL_CS NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_CS NULL
#define OPTION_VAL_4_CS NULL
#define PCFX_LAST_SCANLINE_LABEL_CS NULL
#define PCFX_LAST_SCANLINE_INFO_0_CS NULL
#define OPTION_VAL_235_CS NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_CS NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_CS NULL
#define OPTION_VAL_1_00_CS NULL
#define OPTION_VAL_1_25_CS NULL
#define OPTION_VAL_1_50_CS NULL
#define OPTION_VAL_1_75_CS NULL
#define OPTION_VAL_2_00_CS NULL
#define OPTION_VAL_2_25_CS NULL
#define OPTION_VAL_2_50_CS NULL
#define OPTION_VAL_2_75_CS NULL
#define OPTION_VAL_3_00_CS NULL
#define OPTION_VAL_3_25_CS NULL
#define OPTION_VAL_3_50_CS NULL
#define OPTION_VAL_3_75_CS NULL
#define OPTION_VAL_4_00_CS NULL
#define OPTION_VAL_4_25_CS NULL
#define OPTION_VAL_4_50_CS NULL
#define OPTION_VAL_4_75_CS NULL
#define OPTION_VAL_5_00_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_CS,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CS,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CS,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CS,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CS,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_CS,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_CS,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_CS,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_CS,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_CS,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_CS,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_CS,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_CS },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_CS,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_CS,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_CS },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_CS,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_CS,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_CS },
         { "1.25",   OPTION_VAL_1_25_CS },
         { "1.50",   OPTION_VAL_1_50_CS },
         { "1.75",   OPTION_VAL_1_75_CS },
         { "2.00",   OPTION_VAL_2_00_CS },
         { "2.25",   OPTION_VAL_2_25_CS },
         { "2.50",   OPTION_VAL_2_50_CS },
         { "2.75",   OPTION_VAL_2_75_CS },
         { "3.00",   OPTION_VAL_3_00_CS },
         { "3.25",   OPTION_VAL_3_25_CS },
         { "3.50",   OPTION_VAL_3_50_CS },
         { "3.75",   OPTION_VAL_3_75_CS },
         { "4.00",   OPTION_VAL_4_00_CS },
         { "4.25",   OPTION_VAL_4_25_CS },
         { "4.50",   OPTION_VAL_4_50_CS },
         { "4.75",   OPTION_VAL_4_75_CS },
         { "5.00",   OPTION_VAL_5_00_CS },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define PCFX_CDIMAGECACHE_LABEL_CY NULL
#define PCFX_CDIMAGECACHE_INFO_0_CY NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CY NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CY NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CY NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CY NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_CY NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_CY NULL
#define PCFX_RESAMP_QUALITY_LABEL_CY NULL
#define PCFX_RESAMP_QUALITY_INFO_0_CY NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_CY NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_CY NULL
#define PCFX_NOSPRITELIMIT_LABEL_CY NULL
#define PCFX_NOSPRITELIMIT_INFO_0_CY NULL
#define PCFX_INITIAL_SCANLINE_LABEL_CY NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_4_CY NULL
#define PCFX_LAST_SCANLINE_LABEL_CY NULL
#define PCFX_LAST_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_235_CY NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_CY NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_CY NULL
#define OPTION_VAL_1_00_CY NULL
#define OPTION_VAL_1_25_CY NULL
#define OPTION_VAL_1_50_CY NULL
#define OPTION_VAL_1_75_CY NULL
#define OPTION_VAL_2_00_CY NULL
#define OPTION_VAL_2_25_CY NULL
#define OPTION_VAL_2_50_CY NULL
#define OPTION_VAL_2_75_CY NULL
#define OPTION_VAL_3_00_CY NULL
#define OPTION_VAL_3_25_CY NULL
#define OPTION_VAL_3_50_CY NULL
#define OPTION_VAL_3_75_CY NULL
#define OPTION_VAL_4_00_CY NULL
#define OPTION_VAL_4_25_CY NULL
#define OPTION_VAL_4_50_CY NULL
#define OPTION_VAL_4_75_CY NULL
#define OPTION_VAL_5_00_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_CY,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CY,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CY,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CY,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CY,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_CY,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_CY,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_CY,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_CY,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_CY,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_CY,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_CY,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_CY },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_CY,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_CY,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_CY },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_CY,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_CY,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_CY },
         { "1.25",   OPTION_VAL_1_25_CY },
         { "1.50",   OPTION_VAL_1_50_CY },
         { "1.75",   OPTION_VAL_1_75_CY },
         { "2.00",   OPTION_VAL_2_00_CY },
         { "2.25",   OPTION_VAL_2_25_CY },
         { "2.50",   OPTION_VAL_2_50_CY },
         { "2.75",   OPTION_VAL_2_75_CY },
         { "3.00",   OPTION_VAL_3_00_CY },
         { "3.25",   OPTION_VAL_3_25_CY },
         { "3.50",   OPTION_VAL_3_50_CY },
         { "3.75",   OPTION_VAL_3_75_CY },
         { "4.00",   OPTION_VAL_4_00_CY },
         { "4.25",   OPTION_VAL_4_25_CY },
         { "4.50",   OPTION_VAL_4_50_CY },
         { "4.75",   OPTION_VAL_4_75_CY },
         { "5.00",   OPTION_VAL_5_00_CY },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define PCFX_CDIMAGECACHE_LABEL_DA NULL
#define PCFX_CDIMAGECACHE_INFO_0_DA NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_DA NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_DA NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_DA NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_DA NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_DA NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_DA NULL
#define PCFX_RESAMP_QUALITY_LABEL_DA NULL
#define PCFX_RESAMP_QUALITY_INFO_0_DA NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_DA NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_DA NULL
#define PCFX_NOSPRITELIMIT_LABEL_DA NULL
#define PCFX_NOSPRITELIMIT_INFO_0_DA NULL
#define PCFX_INITIAL_SCANLINE_LABEL_DA NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_4_DA NULL
#define PCFX_LAST_SCANLINE_LABEL_DA NULL
#define PCFX_LAST_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_235_DA NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_DA NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_DA NULL
#define OPTION_VAL_1_00_DA NULL
#define OPTION_VAL_1_25_DA NULL
#define OPTION_VAL_1_50_DA NULL
#define OPTION_VAL_1_75_DA NULL
#define OPTION_VAL_2_00_DA NULL
#define OPTION_VAL_2_25_DA NULL
#define OPTION_VAL_2_50_DA NULL
#define OPTION_VAL_2_75_DA NULL
#define OPTION_VAL_3_00_DA NULL
#define OPTION_VAL_3_25_DA NULL
#define OPTION_VAL_3_50_DA NULL
#define OPTION_VAL_3_75_DA NULL
#define OPTION_VAL_4_00_DA NULL
#define OPTION_VAL_4_25_DA NULL
#define OPTION_VAL_4_50_DA NULL
#define OPTION_VAL_4_75_DA NULL
#define OPTION_VAL_5_00_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_DA,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_DA,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_DA,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_DA,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_DA,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_DA,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_DA,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_DA,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_DA,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_DA,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_DA,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_DA,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_DA },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_DA,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_DA,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_DA },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_DA,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_DA,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_DA },
         { "1.25",   OPTION_VAL_1_25_DA },
         { "1.50",   OPTION_VAL_1_50_DA },
         { "1.75",   OPTION_VAL_1_75_DA },
         { "2.00",   OPTION_VAL_2_00_DA },
         { "2.25",   OPTION_VAL_2_25_DA },
         { "2.50",   OPTION_VAL_2_50_DA },
         { "2.75",   OPTION_VAL_2_75_DA },
         { "3.00",   OPTION_VAL_3_00_DA },
         { "3.25",   OPTION_VAL_3_25_DA },
         { "3.50",   OPTION_VAL_3_50_DA },
         { "3.75",   OPTION_VAL_3_75_DA },
         { "4.00",   OPTION_VAL_4_00_DA },
         { "4.25",   OPTION_VAL_4_25_DA },
         { "4.50",   OPTION_VAL_4_50_DA },
         { "4.75",   OPTION_VAL_4_75_DA },
         { "5.00",   OPTION_VAL_5_00_DA },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define PCFX_CDIMAGECACHE_LABEL_DE NULL
#define PCFX_CDIMAGECACHE_INFO_0_DE NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_DE NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_DE NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_DE NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_DE NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_DE NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_DE NULL
#define PCFX_RESAMP_QUALITY_LABEL_DE NULL
#define PCFX_RESAMP_QUALITY_INFO_0_DE NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_DE NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_DE NULL
#define PCFX_NOSPRITELIMIT_LABEL_DE NULL
#define PCFX_NOSPRITELIMIT_INFO_0_DE NULL
#define PCFX_INITIAL_SCANLINE_LABEL_DE NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_DE NULL
#define OPTION_VAL_4_DE NULL
#define PCFX_LAST_SCANLINE_LABEL_DE NULL
#define PCFX_LAST_SCANLINE_INFO_0_DE NULL
#define OPTION_VAL_235_DE NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_DE NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_DE NULL
#define OPTION_VAL_1_00_DE NULL
#define OPTION_VAL_1_25_DE NULL
#define OPTION_VAL_1_50_DE NULL
#define OPTION_VAL_1_75_DE NULL
#define OPTION_VAL_2_00_DE NULL
#define OPTION_VAL_2_25_DE NULL
#define OPTION_VAL_2_50_DE NULL
#define OPTION_VAL_2_75_DE NULL
#define OPTION_VAL_3_00_DE NULL
#define OPTION_VAL_3_25_DE NULL
#define OPTION_VAL_3_50_DE NULL
#define OPTION_VAL_3_75_DE NULL
#define OPTION_VAL_4_00_DE NULL
#define OPTION_VAL_4_25_DE NULL
#define OPTION_VAL_4_50_DE NULL
#define OPTION_VAL_4_75_DE NULL
#define OPTION_VAL_5_00_DE NULL

struct retro_core_option_v2_category option_cats_de[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_DE,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_DE,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_DE,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_DE,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_DE,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_DE,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_DE,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_DE,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_DE,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_DE,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_DE,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_DE,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_DE },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_DE,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_DE,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_DE },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_DE,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_DE,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_DE },
         { "1.25",   OPTION_VAL_1_25_DE },
         { "1.50",   OPTION_VAL_1_50_DE },
         { "1.75",   OPTION_VAL_1_75_DE },
         { "2.00",   OPTION_VAL_2_00_DE },
         { "2.25",   OPTION_VAL_2_25_DE },
         { "2.50",   OPTION_VAL_2_50_DE },
         { "2.75",   OPTION_VAL_2_75_DE },
         { "3.00",   OPTION_VAL_3_00_DE },
         { "3.25",   OPTION_VAL_3_25_DE },
         { "3.50",   OPTION_VAL_3_50_DE },
         { "3.75",   OPTION_VAL_3_75_DE },
         { "4.00",   OPTION_VAL_4_00_DE },
         { "4.25",   OPTION_VAL_4_25_DE },
         { "4.50",   OPTION_VAL_4_50_DE },
         { "4.75",   OPTION_VAL_4_75_DE },
         { "5.00",   OPTION_VAL_5_00_DE },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define PCFX_CDIMAGECACHE_LABEL_EL NULL
#define PCFX_CDIMAGECACHE_INFO_0_EL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_EL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_EL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_EL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_EL NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_EL NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_EL NULL
#define PCFX_RESAMP_QUALITY_LABEL_EL NULL
#define PCFX_RESAMP_QUALITY_INFO_0_EL NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_EL NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_EL NULL
#define PCFX_NOSPRITELIMIT_LABEL_EL NULL
#define PCFX_NOSPRITELIMIT_INFO_0_EL NULL
#define PCFX_INITIAL_SCANLINE_LABEL_EL NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_4_EL NULL
#define PCFX_LAST_SCANLINE_LABEL_EL NULL
#define PCFX_LAST_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_235_EL NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_EL NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_EL NULL
#define OPTION_VAL_1_00_EL NULL
#define OPTION_VAL_1_25_EL NULL
#define OPTION_VAL_1_50_EL NULL
#define OPTION_VAL_1_75_EL NULL
#define OPTION_VAL_2_00_EL NULL
#define OPTION_VAL_2_25_EL NULL
#define OPTION_VAL_2_50_EL NULL
#define OPTION_VAL_2_75_EL NULL
#define OPTION_VAL_3_00_EL NULL
#define OPTION_VAL_3_25_EL NULL
#define OPTION_VAL_3_50_EL NULL
#define OPTION_VAL_3_75_EL NULL
#define OPTION_VAL_4_00_EL NULL
#define OPTION_VAL_4_25_EL NULL
#define OPTION_VAL_4_50_EL NULL
#define OPTION_VAL_4_75_EL NULL
#define OPTION_VAL_5_00_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_EL,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_EL,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_EL,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_EL,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_EL,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_EL,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_EL,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_EL,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_EL,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_EL,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_EL,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_EL,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_EL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_EL,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_EL,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_EL },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_EL,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_EL,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_EL },
         { "1.25",   OPTION_VAL_1_25_EL },
         { "1.50",   OPTION_VAL_1_50_EL },
         { "1.75",   OPTION_VAL_1_75_EL },
         { "2.00",   OPTION_VAL_2_00_EL },
         { "2.25",   OPTION_VAL_2_25_EL },
         { "2.50",   OPTION_VAL_2_50_EL },
         { "2.75",   OPTION_VAL_2_75_EL },
         { "3.00",   OPTION_VAL_3_00_EL },
         { "3.25",   OPTION_VAL_3_25_EL },
         { "3.50",   OPTION_VAL_3_50_EL },
         { "3.75",   OPTION_VAL_3_75_EL },
         { "4.00",   OPTION_VAL_4_00_EL },
         { "4.25",   OPTION_VAL_4_25_EL },
         { "4.50",   OPTION_VAL_4_50_EL },
         { "4.75",   OPTION_VAL_4_75_EL },
         { "5.00",   OPTION_VAL_5_00_EL },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EO */

#define PCFX_CDIMAGECACHE_LABEL_EO NULL
#define PCFX_CDIMAGECACHE_INFO_0_EO NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_EO NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_EO NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_EO NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_EO NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_EO NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_EO NULL
#define PCFX_RESAMP_QUALITY_LABEL_EO NULL
#define PCFX_RESAMP_QUALITY_INFO_0_EO NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_EO NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_EO NULL
#define PCFX_NOSPRITELIMIT_LABEL_EO NULL
#define PCFX_NOSPRITELIMIT_INFO_0_EO NULL
#define PCFX_INITIAL_SCANLINE_LABEL_EO NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_4_EO NULL
#define PCFX_LAST_SCANLINE_LABEL_EO NULL
#define PCFX_LAST_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_235_EO NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_EO NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_EO NULL
#define OPTION_VAL_1_00_EO NULL
#define OPTION_VAL_1_25_EO NULL
#define OPTION_VAL_1_50_EO NULL
#define OPTION_VAL_1_75_EO NULL
#define OPTION_VAL_2_00_EO NULL
#define OPTION_VAL_2_25_EO NULL
#define OPTION_VAL_2_50_EO NULL
#define OPTION_VAL_2_75_EO NULL
#define OPTION_VAL_3_00_EO NULL
#define OPTION_VAL_3_25_EO NULL
#define OPTION_VAL_3_50_EO NULL
#define OPTION_VAL_3_75_EO NULL
#define OPTION_VAL_4_00_EO NULL
#define OPTION_VAL_4_25_EO NULL
#define OPTION_VAL_4_50_EO NULL
#define OPTION_VAL_4_75_EO NULL
#define OPTION_VAL_5_00_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_EO,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_EO,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_EO,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_EO,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_EO,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_EO,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_EO,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_EO,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_EO,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_EO,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_EO,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_EO,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_EO },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_EO,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_EO,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_EO },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_EO,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_EO,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_EO },
         { "1.25",   OPTION_VAL_1_25_EO },
         { "1.50",   OPTION_VAL_1_50_EO },
         { "1.75",   OPTION_VAL_1_75_EO },
         { "2.00",   OPTION_VAL_2_00_EO },
         { "2.25",   OPTION_VAL_2_25_EO },
         { "2.50",   OPTION_VAL_2_50_EO },
         { "2.75",   OPTION_VAL_2_75_EO },
         { "3.00",   OPTION_VAL_3_00_EO },
         { "3.25",   OPTION_VAL_3_25_EO },
         { "3.50",   OPTION_VAL_3_50_EO },
         { "3.75",   OPTION_VAL_3_75_EO },
         { "4.00",   OPTION_VAL_4_00_EO },
         { "4.25",   OPTION_VAL_4_25_EO },
         { "4.50",   OPTION_VAL_4_50_EO },
         { "4.75",   OPTION_VAL_4_75_EO },
         { "5.00",   OPTION_VAL_5_00_EO },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define PCFX_CDIMAGECACHE_LABEL_ES NULL
#define PCFX_CDIMAGECACHE_INFO_0_ES NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_ES NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_ES NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_ES NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_ES NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_ES NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_ES NULL
#define PCFX_RESAMP_QUALITY_LABEL_ES NULL
#define PCFX_RESAMP_QUALITY_INFO_0_ES NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_ES NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_ES NULL
#define PCFX_NOSPRITELIMIT_LABEL_ES NULL
#define PCFX_NOSPRITELIMIT_INFO_0_ES NULL
#define PCFX_INITIAL_SCANLINE_LABEL_ES NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_ES NULL
#define OPTION_VAL_4_ES NULL
#define PCFX_LAST_SCANLINE_LABEL_ES NULL
#define PCFX_LAST_SCANLINE_INFO_0_ES NULL
#define OPTION_VAL_235_ES NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_ES NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_ES NULL
#define OPTION_VAL_1_00_ES NULL
#define OPTION_VAL_1_25_ES NULL
#define OPTION_VAL_1_50_ES NULL
#define OPTION_VAL_1_75_ES NULL
#define OPTION_VAL_2_00_ES NULL
#define OPTION_VAL_2_25_ES NULL
#define OPTION_VAL_2_50_ES NULL
#define OPTION_VAL_2_75_ES NULL
#define OPTION_VAL_3_00_ES NULL
#define OPTION_VAL_3_25_ES NULL
#define OPTION_VAL_3_50_ES NULL
#define OPTION_VAL_3_75_ES NULL
#define OPTION_VAL_4_00_ES NULL
#define OPTION_VAL_4_25_ES NULL
#define OPTION_VAL_4_50_ES NULL
#define OPTION_VAL_4_75_ES NULL
#define OPTION_VAL_5_00_ES NULL

struct retro_core_option_v2_category option_cats_es[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_ES,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_ES,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_ES,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_ES,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_ES,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_ES,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_ES,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_ES,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_ES,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_ES,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_ES,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_ES,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_ES },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_ES,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_ES,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_ES },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_ES,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_ES,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_ES },
         { "1.25",   OPTION_VAL_1_25_ES },
         { "1.50",   OPTION_VAL_1_50_ES },
         { "1.75",   OPTION_VAL_1_75_ES },
         { "2.00",   OPTION_VAL_2_00_ES },
         { "2.25",   OPTION_VAL_2_25_ES },
         { "2.50",   OPTION_VAL_2_50_ES },
         { "2.75",   OPTION_VAL_2_75_ES },
         { "3.00",   OPTION_VAL_3_00_ES },
         { "3.25",   OPTION_VAL_3_25_ES },
         { "3.50",   OPTION_VAL_3_50_ES },
         { "3.75",   OPTION_VAL_3_75_ES },
         { "4.00",   OPTION_VAL_4_00_ES },
         { "4.25",   OPTION_VAL_4_25_ES },
         { "4.50",   OPTION_VAL_4_50_ES },
         { "4.75",   OPTION_VAL_4_75_ES },
         { "5.00",   OPTION_VAL_5_00_ES },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define PCFX_CDIMAGECACHE_LABEL_FA NULL
#define PCFX_CDIMAGECACHE_INFO_0_FA NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_FA NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_FA NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_FA NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_FA NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_FA NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_FA NULL
#define PCFX_RESAMP_QUALITY_LABEL_FA NULL
#define PCFX_RESAMP_QUALITY_INFO_0_FA NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_FA NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_FA NULL
#define PCFX_NOSPRITELIMIT_LABEL_FA NULL
#define PCFX_NOSPRITELIMIT_INFO_0_FA NULL
#define PCFX_INITIAL_SCANLINE_LABEL_FA NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_4_FA NULL
#define PCFX_LAST_SCANLINE_LABEL_FA NULL
#define PCFX_LAST_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_235_FA NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_FA NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_FA NULL
#define OPTION_VAL_1_00_FA NULL
#define OPTION_VAL_1_25_FA NULL
#define OPTION_VAL_1_50_FA NULL
#define OPTION_VAL_1_75_FA NULL
#define OPTION_VAL_2_00_FA NULL
#define OPTION_VAL_2_25_FA NULL
#define OPTION_VAL_2_50_FA NULL
#define OPTION_VAL_2_75_FA NULL
#define OPTION_VAL_3_00_FA NULL
#define OPTION_VAL_3_25_FA NULL
#define OPTION_VAL_3_50_FA NULL
#define OPTION_VAL_3_75_FA NULL
#define OPTION_VAL_4_00_FA NULL
#define OPTION_VAL_4_25_FA NULL
#define OPTION_VAL_4_50_FA NULL
#define OPTION_VAL_4_75_FA NULL
#define OPTION_VAL_5_00_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_FA,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_FA,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_FA,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_FA,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_FA,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_FA,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_FA,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_FA,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_FA,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_FA,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_FA,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_FA,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_FA },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_FA,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_FA,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_FA },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_FA,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_FA,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_FA },
         { "1.25",   OPTION_VAL_1_25_FA },
         { "1.50",   OPTION_VAL_1_50_FA },
         { "1.75",   OPTION_VAL_1_75_FA },
         { "2.00",   OPTION_VAL_2_00_FA },
         { "2.25",   OPTION_VAL_2_25_FA },
         { "2.50",   OPTION_VAL_2_50_FA },
         { "2.75",   OPTION_VAL_2_75_FA },
         { "3.00",   OPTION_VAL_3_00_FA },
         { "3.25",   OPTION_VAL_3_25_FA },
         { "3.50",   OPTION_VAL_3_50_FA },
         { "3.75",   OPTION_VAL_3_75_FA },
         { "4.00",   OPTION_VAL_4_00_FA },
         { "4.25",   OPTION_VAL_4_25_FA },
         { "4.50",   OPTION_VAL_4_50_FA },
         { "4.75",   OPTION_VAL_4_75_FA },
         { "5.00",   OPTION_VAL_5_00_FA },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define PCFX_CDIMAGECACHE_LABEL_FI NULL
#define PCFX_CDIMAGECACHE_INFO_0_FI NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_FI NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_FI NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_FI NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_FI NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_FI NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_FI NULL
#define PCFX_RESAMP_QUALITY_LABEL_FI NULL
#define PCFX_RESAMP_QUALITY_INFO_0_FI NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_FI NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_FI NULL
#define PCFX_NOSPRITELIMIT_LABEL_FI NULL
#define PCFX_NOSPRITELIMIT_INFO_0_FI NULL
#define PCFX_INITIAL_SCANLINE_LABEL_FI NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_FI NULL
#define OPTION_VAL_4_FI NULL
#define PCFX_LAST_SCANLINE_LABEL_FI NULL
#define PCFX_LAST_SCANLINE_INFO_0_FI NULL
#define OPTION_VAL_235_FI NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_FI NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_FI NULL
#define OPTION_VAL_1_00_FI NULL
#define OPTION_VAL_1_25_FI NULL
#define OPTION_VAL_1_50_FI NULL
#define OPTION_VAL_1_75_FI NULL
#define OPTION_VAL_2_00_FI NULL
#define OPTION_VAL_2_25_FI NULL
#define OPTION_VAL_2_50_FI NULL
#define OPTION_VAL_2_75_FI NULL
#define OPTION_VAL_3_00_FI NULL
#define OPTION_VAL_3_25_FI NULL
#define OPTION_VAL_3_50_FI NULL
#define OPTION_VAL_3_75_FI NULL
#define OPTION_VAL_4_00_FI NULL
#define OPTION_VAL_4_25_FI NULL
#define OPTION_VAL_4_50_FI NULL
#define OPTION_VAL_4_75_FI NULL
#define OPTION_VAL_5_00_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_FI,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_FI,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_FI,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_FI,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_FI,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_FI,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_FI,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_FI,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_FI,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_FI,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_FI,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_FI,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_FI },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_FI,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_FI,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_FI },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_FI,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_FI,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_FI },
         { "1.25",   OPTION_VAL_1_25_FI },
         { "1.50",   OPTION_VAL_1_50_FI },
         { "1.75",   OPTION_VAL_1_75_FI },
         { "2.00",   OPTION_VAL_2_00_FI },
         { "2.25",   OPTION_VAL_2_25_FI },
         { "2.50",   OPTION_VAL_2_50_FI },
         { "2.75",   OPTION_VAL_2_75_FI },
         { "3.00",   OPTION_VAL_3_00_FI },
         { "3.25",   OPTION_VAL_3_25_FI },
         { "3.50",   OPTION_VAL_3_50_FI },
         { "3.75",   OPTION_VAL_3_75_FI },
         { "4.00",   OPTION_VAL_4_00_FI },
         { "4.25",   OPTION_VAL_4_25_FI },
         { "4.50",   OPTION_VAL_4_50_FI },
         { "4.75",   OPTION_VAL_4_75_FI },
         { "5.00",   OPTION_VAL_5_00_FI },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define PCFX_CDIMAGECACHE_LABEL_FR NULL
#define PCFX_CDIMAGECACHE_INFO_0_FR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_FR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_FR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_FR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_FR NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_FR NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_FR NULL
#define PCFX_RESAMP_QUALITY_LABEL_FR NULL
#define PCFX_RESAMP_QUALITY_INFO_0_FR NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_FR NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_FR NULL
#define PCFX_NOSPRITELIMIT_LABEL_FR NULL
#define PCFX_NOSPRITELIMIT_INFO_0_FR NULL
#define PCFX_INITIAL_SCANLINE_LABEL_FR NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_FR NULL
#define OPTION_VAL_4_FR NULL
#define PCFX_LAST_SCANLINE_LABEL_FR NULL
#define PCFX_LAST_SCANLINE_INFO_0_FR NULL
#define OPTION_VAL_235_FR NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_FR NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_FR NULL
#define OPTION_VAL_1_00_FR NULL
#define OPTION_VAL_1_25_FR NULL
#define OPTION_VAL_1_50_FR NULL
#define OPTION_VAL_1_75_FR NULL
#define OPTION_VAL_2_00_FR NULL
#define OPTION_VAL_2_25_FR NULL
#define OPTION_VAL_2_50_FR NULL
#define OPTION_VAL_2_75_FR NULL
#define OPTION_VAL_3_00_FR NULL
#define OPTION_VAL_3_25_FR NULL
#define OPTION_VAL_3_50_FR NULL
#define OPTION_VAL_3_75_FR NULL
#define OPTION_VAL_4_00_FR NULL
#define OPTION_VAL_4_25_FR NULL
#define OPTION_VAL_4_50_FR NULL
#define OPTION_VAL_4_75_FR NULL
#define OPTION_VAL_5_00_FR NULL

struct retro_core_option_v2_category option_cats_fr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_FR,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_FR,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_FR,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_FR,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_FR,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_FR,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_FR,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_FR,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_FR,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_FR,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_FR,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_FR,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_FR },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_FR,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_FR,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_FR },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_FR,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_FR,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_FR },
         { "1.25",   OPTION_VAL_1_25_FR },
         { "1.50",   OPTION_VAL_1_50_FR },
         { "1.75",   OPTION_VAL_1_75_FR },
         { "2.00",   OPTION_VAL_2_00_FR },
         { "2.25",   OPTION_VAL_2_25_FR },
         { "2.50",   OPTION_VAL_2_50_FR },
         { "2.75",   OPTION_VAL_2_75_FR },
         { "3.00",   OPTION_VAL_3_00_FR },
         { "3.25",   OPTION_VAL_3_25_FR },
         { "3.50",   OPTION_VAL_3_50_FR },
         { "3.75",   OPTION_VAL_3_75_FR },
         { "4.00",   OPTION_VAL_4_00_FR },
         { "4.25",   OPTION_VAL_4_25_FR },
         { "4.50",   OPTION_VAL_4_50_FR },
         { "4.75",   OPTION_VAL_4_75_FR },
         { "5.00",   OPTION_VAL_5_00_FR },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define PCFX_CDIMAGECACHE_LABEL_GL NULL
#define PCFX_CDIMAGECACHE_INFO_0_GL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_GL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_GL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_GL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_GL NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_GL NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_GL NULL
#define PCFX_RESAMP_QUALITY_LABEL_GL NULL
#define PCFX_RESAMP_QUALITY_INFO_0_GL NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_GL NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_GL NULL
#define PCFX_NOSPRITELIMIT_LABEL_GL NULL
#define PCFX_NOSPRITELIMIT_INFO_0_GL NULL
#define PCFX_INITIAL_SCANLINE_LABEL_GL NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_4_GL NULL
#define PCFX_LAST_SCANLINE_LABEL_GL NULL
#define PCFX_LAST_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_235_GL NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_GL NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_GL NULL
#define OPTION_VAL_1_00_GL NULL
#define OPTION_VAL_1_25_GL NULL
#define OPTION_VAL_1_50_GL NULL
#define OPTION_VAL_1_75_GL NULL
#define OPTION_VAL_2_00_GL NULL
#define OPTION_VAL_2_25_GL NULL
#define OPTION_VAL_2_50_GL NULL
#define OPTION_VAL_2_75_GL NULL
#define OPTION_VAL_3_00_GL NULL
#define OPTION_VAL_3_25_GL NULL
#define OPTION_VAL_3_50_GL NULL
#define OPTION_VAL_3_75_GL NULL
#define OPTION_VAL_4_00_GL NULL
#define OPTION_VAL_4_25_GL NULL
#define OPTION_VAL_4_50_GL NULL
#define OPTION_VAL_4_75_GL NULL
#define OPTION_VAL_5_00_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_GL,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_GL,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_GL,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_GL,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_GL,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_GL,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_GL,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_GL,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_GL,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_GL,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_GL,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_GL,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_GL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_GL,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_GL,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_GL },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_GL,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_GL,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_GL },
         { "1.25",   OPTION_VAL_1_25_GL },
         { "1.50",   OPTION_VAL_1_50_GL },
         { "1.75",   OPTION_VAL_1_75_GL },
         { "2.00",   OPTION_VAL_2_00_GL },
         { "2.25",   OPTION_VAL_2_25_GL },
         { "2.50",   OPTION_VAL_2_50_GL },
         { "2.75",   OPTION_VAL_2_75_GL },
         { "3.00",   OPTION_VAL_3_00_GL },
         { "3.25",   OPTION_VAL_3_25_GL },
         { "3.50",   OPTION_VAL_3_50_GL },
         { "3.75",   OPTION_VAL_3_75_GL },
         { "4.00",   OPTION_VAL_4_00_GL },
         { "4.25",   OPTION_VAL_4_25_GL },
         { "4.50",   OPTION_VAL_4_50_GL },
         { "4.75",   OPTION_VAL_4_75_GL },
         { "5.00",   OPTION_VAL_5_00_GL },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define PCFX_CDIMAGECACHE_LABEL_HE NULL
#define PCFX_CDIMAGECACHE_INFO_0_HE NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_HE NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_HE NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_HE NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_HE NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_HE NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_HE NULL
#define PCFX_RESAMP_QUALITY_LABEL_HE NULL
#define PCFX_RESAMP_QUALITY_INFO_0_HE NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_HE NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_HE NULL
#define PCFX_NOSPRITELIMIT_LABEL_HE NULL
#define PCFX_NOSPRITELIMIT_INFO_0_HE NULL
#define PCFX_INITIAL_SCANLINE_LABEL_HE NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_4_HE NULL
#define PCFX_LAST_SCANLINE_LABEL_HE NULL
#define PCFX_LAST_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_235_HE NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_HE NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_HE NULL
#define OPTION_VAL_1_00_HE NULL
#define OPTION_VAL_1_25_HE NULL
#define OPTION_VAL_1_50_HE NULL
#define OPTION_VAL_1_75_HE NULL
#define OPTION_VAL_2_00_HE NULL
#define OPTION_VAL_2_25_HE NULL
#define OPTION_VAL_2_50_HE NULL
#define OPTION_VAL_2_75_HE NULL
#define OPTION_VAL_3_00_HE NULL
#define OPTION_VAL_3_25_HE NULL
#define OPTION_VAL_3_50_HE NULL
#define OPTION_VAL_3_75_HE NULL
#define OPTION_VAL_4_00_HE NULL
#define OPTION_VAL_4_25_HE NULL
#define OPTION_VAL_4_50_HE NULL
#define OPTION_VAL_4_75_HE NULL
#define OPTION_VAL_5_00_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_HE,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_HE,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_HE,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_HE,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_HE,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_HE,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_HE,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_HE,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_HE,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_HE,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_HE,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_HE,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_HE },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_HE,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_HE,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_HE },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_HE,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_HE,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_HE },
         { "1.25",   OPTION_VAL_1_25_HE },
         { "1.50",   OPTION_VAL_1_50_HE },
         { "1.75",   OPTION_VAL_1_75_HE },
         { "2.00",   OPTION_VAL_2_00_HE },
         { "2.25",   OPTION_VAL_2_25_HE },
         { "2.50",   OPTION_VAL_2_50_HE },
         { "2.75",   OPTION_VAL_2_75_HE },
         { "3.00",   OPTION_VAL_3_00_HE },
         { "3.25",   OPTION_VAL_3_25_HE },
         { "3.50",   OPTION_VAL_3_50_HE },
         { "3.75",   OPTION_VAL_3_75_HE },
         { "4.00",   OPTION_VAL_4_00_HE },
         { "4.25",   OPTION_VAL_4_25_HE },
         { "4.50",   OPTION_VAL_4_50_HE },
         { "4.75",   OPTION_VAL_4_75_HE },
         { "5.00",   OPTION_VAL_5_00_HE },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HU */

#define PCFX_CDIMAGECACHE_LABEL_HU NULL
#define PCFX_CDIMAGECACHE_INFO_0_HU NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_HU NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_HU NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_HU NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_HU NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_HU NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_HU NULL
#define PCFX_RESAMP_QUALITY_LABEL_HU NULL
#define PCFX_RESAMP_QUALITY_INFO_0_HU NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_HU NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_HU NULL
#define PCFX_NOSPRITELIMIT_LABEL_HU NULL
#define PCFX_NOSPRITELIMIT_INFO_0_HU NULL
#define PCFX_INITIAL_SCANLINE_LABEL_HU NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_HU NULL
#define OPTION_VAL_4_HU NULL
#define PCFX_LAST_SCANLINE_LABEL_HU NULL
#define PCFX_LAST_SCANLINE_INFO_0_HU NULL
#define OPTION_VAL_235_HU NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_HU NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_HU NULL
#define OPTION_VAL_1_00_HU NULL
#define OPTION_VAL_1_25_HU NULL
#define OPTION_VAL_1_50_HU NULL
#define OPTION_VAL_1_75_HU NULL
#define OPTION_VAL_2_00_HU NULL
#define OPTION_VAL_2_25_HU NULL
#define OPTION_VAL_2_50_HU NULL
#define OPTION_VAL_2_75_HU NULL
#define OPTION_VAL_3_00_HU NULL
#define OPTION_VAL_3_25_HU NULL
#define OPTION_VAL_3_50_HU NULL
#define OPTION_VAL_3_75_HU NULL
#define OPTION_VAL_4_00_HU NULL
#define OPTION_VAL_4_25_HU NULL
#define OPTION_VAL_4_50_HU NULL
#define OPTION_VAL_4_75_HU NULL
#define OPTION_VAL_5_00_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_HU,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_HU,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_HU,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_HU,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_HU,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_HU,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_HU,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_HU,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_HU,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_HU,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_HU,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_HU,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_HU },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_HU,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_HU,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_HU },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_HU,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_HU,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_HU },
         { "1.25",   OPTION_VAL_1_25_HU },
         { "1.50",   OPTION_VAL_1_50_HU },
         { "1.75",   OPTION_VAL_1_75_HU },
         { "2.00",   OPTION_VAL_2_00_HU },
         { "2.25",   OPTION_VAL_2_25_HU },
         { "2.50",   OPTION_VAL_2_50_HU },
         { "2.75",   OPTION_VAL_2_75_HU },
         { "3.00",   OPTION_VAL_3_00_HU },
         { "3.25",   OPTION_VAL_3_25_HU },
         { "3.50",   OPTION_VAL_3_50_HU },
         { "3.75",   OPTION_VAL_3_75_HU },
         { "4.00",   OPTION_VAL_4_00_HU },
         { "4.25",   OPTION_VAL_4_25_HU },
         { "4.50",   OPTION_VAL_4_50_HU },
         { "4.75",   OPTION_VAL_4_75_HU },
         { "5.00",   OPTION_VAL_5_00_HU },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define PCFX_CDIMAGECACHE_LABEL_ID NULL
#define PCFX_CDIMAGECACHE_INFO_0_ID NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_ID NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_ID NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_ID NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_ID NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_ID NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_ID NULL
#define PCFX_RESAMP_QUALITY_LABEL_ID NULL
#define PCFX_RESAMP_QUALITY_INFO_0_ID NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_ID NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_ID NULL
#define PCFX_NOSPRITELIMIT_LABEL_ID NULL
#define PCFX_NOSPRITELIMIT_INFO_0_ID NULL
#define PCFX_INITIAL_SCANLINE_LABEL_ID NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_4_ID NULL
#define PCFX_LAST_SCANLINE_LABEL_ID NULL
#define PCFX_LAST_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_235_ID NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_ID NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_ID NULL
#define OPTION_VAL_1_00_ID NULL
#define OPTION_VAL_1_25_ID NULL
#define OPTION_VAL_1_50_ID NULL
#define OPTION_VAL_1_75_ID NULL
#define OPTION_VAL_2_00_ID NULL
#define OPTION_VAL_2_25_ID NULL
#define OPTION_VAL_2_50_ID NULL
#define OPTION_VAL_2_75_ID NULL
#define OPTION_VAL_3_00_ID NULL
#define OPTION_VAL_3_25_ID NULL
#define OPTION_VAL_3_50_ID NULL
#define OPTION_VAL_3_75_ID NULL
#define OPTION_VAL_4_00_ID NULL
#define OPTION_VAL_4_25_ID NULL
#define OPTION_VAL_4_50_ID NULL
#define OPTION_VAL_4_75_ID NULL
#define OPTION_VAL_5_00_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_ID,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_ID,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_ID,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_ID,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_ID,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_ID,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_ID,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_ID,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_ID,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_ID,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_ID,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_ID,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_ID },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_ID,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_ID,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_ID },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_ID,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_ID,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_ID },
         { "1.25",   OPTION_VAL_1_25_ID },
         { "1.50",   OPTION_VAL_1_50_ID },
         { "1.75",   OPTION_VAL_1_75_ID },
         { "2.00",   OPTION_VAL_2_00_ID },
         { "2.25",   OPTION_VAL_2_25_ID },
         { "2.50",   OPTION_VAL_2_50_ID },
         { "2.75",   OPTION_VAL_2_75_ID },
         { "3.00",   OPTION_VAL_3_00_ID },
         { "3.25",   OPTION_VAL_3_25_ID },
         { "3.50",   OPTION_VAL_3_50_ID },
         { "3.75",   OPTION_VAL_3_75_ID },
         { "4.00",   OPTION_VAL_4_00_ID },
         { "4.25",   OPTION_VAL_4_25_ID },
         { "4.50",   OPTION_VAL_4_50_ID },
         { "4.75",   OPTION_VAL_4_75_ID },
         { "5.00",   OPTION_VAL_5_00_ID },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define PCFX_CDIMAGECACHE_LABEL_IT NULL
#define PCFX_CDIMAGECACHE_INFO_0_IT NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_IT NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_IT NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_IT NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_IT NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_IT NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_IT NULL
#define PCFX_RESAMP_QUALITY_LABEL_IT NULL
#define PCFX_RESAMP_QUALITY_INFO_0_IT NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_IT NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_IT NULL
#define PCFX_NOSPRITELIMIT_LABEL_IT NULL
#define PCFX_NOSPRITELIMIT_INFO_0_IT NULL
#define PCFX_INITIAL_SCANLINE_LABEL_IT NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_IT NULL
#define OPTION_VAL_4_IT NULL
#define PCFX_LAST_SCANLINE_LABEL_IT NULL
#define PCFX_LAST_SCANLINE_INFO_0_IT NULL
#define OPTION_VAL_235_IT NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_IT NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_IT NULL
#define OPTION_VAL_1_00_IT NULL
#define OPTION_VAL_1_25_IT NULL
#define OPTION_VAL_1_50_IT NULL
#define OPTION_VAL_1_75_IT NULL
#define OPTION_VAL_2_00_IT NULL
#define OPTION_VAL_2_25_IT NULL
#define OPTION_VAL_2_50_IT NULL
#define OPTION_VAL_2_75_IT NULL
#define OPTION_VAL_3_00_IT NULL
#define OPTION_VAL_3_25_IT NULL
#define OPTION_VAL_3_50_IT NULL
#define OPTION_VAL_3_75_IT NULL
#define OPTION_VAL_4_00_IT NULL
#define OPTION_VAL_4_25_IT NULL
#define OPTION_VAL_4_50_IT NULL
#define OPTION_VAL_4_75_IT NULL
#define OPTION_VAL_5_00_IT NULL

struct retro_core_option_v2_category option_cats_it[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_IT,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_IT,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_IT,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_IT,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_IT,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_IT,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_IT,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_IT,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_IT,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_IT,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_IT,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_IT,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_IT },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_IT,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_IT,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_IT },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_IT,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_IT,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_IT },
         { "1.25",   OPTION_VAL_1_25_IT },
         { "1.50",   OPTION_VAL_1_50_IT },
         { "1.75",   OPTION_VAL_1_75_IT },
         { "2.00",   OPTION_VAL_2_00_IT },
         { "2.25",   OPTION_VAL_2_25_IT },
         { "2.50",   OPTION_VAL_2_50_IT },
         { "2.75",   OPTION_VAL_2_75_IT },
         { "3.00",   OPTION_VAL_3_00_IT },
         { "3.25",   OPTION_VAL_3_25_IT },
         { "3.50",   OPTION_VAL_3_50_IT },
         { "3.75",   OPTION_VAL_3_75_IT },
         { "4.00",   OPTION_VAL_4_00_IT },
         { "4.25",   OPTION_VAL_4_25_IT },
         { "4.50",   OPTION_VAL_4_50_IT },
         { "4.75",   OPTION_VAL_4_75_IT },
         { "5.00",   OPTION_VAL_5_00_IT },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define PCFX_CDIMAGECACHE_LABEL_JA NULL
#define PCFX_CDIMAGECACHE_INFO_0_JA NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_JA NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_JA NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_JA NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_JA NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_JA NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_JA NULL
#define PCFX_RESAMP_QUALITY_LABEL_JA NULL
#define PCFX_RESAMP_QUALITY_INFO_0_JA NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_JA NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_JA NULL
#define PCFX_NOSPRITELIMIT_LABEL_JA NULL
#define PCFX_NOSPRITELIMIT_INFO_0_JA NULL
#define PCFX_INITIAL_SCANLINE_LABEL_JA NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_4_JA NULL
#define PCFX_LAST_SCANLINE_LABEL_JA NULL
#define PCFX_LAST_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_235_JA NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_JA NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_JA NULL
#define OPTION_VAL_1_00_JA NULL
#define OPTION_VAL_1_25_JA NULL
#define OPTION_VAL_1_50_JA NULL
#define OPTION_VAL_1_75_JA NULL
#define OPTION_VAL_2_00_JA NULL
#define OPTION_VAL_2_25_JA NULL
#define OPTION_VAL_2_50_JA NULL
#define OPTION_VAL_2_75_JA NULL
#define OPTION_VAL_3_00_JA NULL
#define OPTION_VAL_3_25_JA NULL
#define OPTION_VAL_3_50_JA NULL
#define OPTION_VAL_3_75_JA NULL
#define OPTION_VAL_4_00_JA NULL
#define OPTION_VAL_4_25_JA NULL
#define OPTION_VAL_4_50_JA NULL
#define OPTION_VAL_4_75_JA NULL
#define OPTION_VAL_5_00_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_JA,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_JA,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_JA,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_JA,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_JA,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_JA,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_JA,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_JA,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_JA,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_JA,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_JA,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_JA,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_JA },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_JA,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_JA,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_JA },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_JA,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_JA,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_JA },
         { "1.25",   OPTION_VAL_1_25_JA },
         { "1.50",   OPTION_VAL_1_50_JA },
         { "1.75",   OPTION_VAL_1_75_JA },
         { "2.00",   OPTION_VAL_2_00_JA },
         { "2.25",   OPTION_VAL_2_25_JA },
         { "2.50",   OPTION_VAL_2_50_JA },
         { "2.75",   OPTION_VAL_2_75_JA },
         { "3.00",   OPTION_VAL_3_00_JA },
         { "3.25",   OPTION_VAL_3_25_JA },
         { "3.50",   OPTION_VAL_3_50_JA },
         { "3.75",   OPTION_VAL_3_75_JA },
         { "4.00",   OPTION_VAL_4_00_JA },
         { "4.25",   OPTION_VAL_4_25_JA },
         { "4.50",   OPTION_VAL_4_50_JA },
         { "4.75",   OPTION_VAL_4_75_JA },
         { "5.00",   OPTION_VAL_5_00_JA },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define PCFX_CDIMAGECACHE_LABEL_KO NULL
#define PCFX_CDIMAGECACHE_INFO_0_KO NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_KO NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_KO NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_KO NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_KO NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_KO NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_KO NULL
#define PCFX_RESAMP_QUALITY_LABEL_KO NULL
#define PCFX_RESAMP_QUALITY_INFO_0_KO NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_KO NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_KO NULL
#define PCFX_NOSPRITELIMIT_LABEL_KO NULL
#define PCFX_NOSPRITELIMIT_INFO_0_KO NULL
#define PCFX_INITIAL_SCANLINE_LABEL_KO NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_KO NULL
#define OPTION_VAL_4_KO NULL
#define PCFX_LAST_SCANLINE_LABEL_KO NULL
#define PCFX_LAST_SCANLINE_INFO_0_KO NULL
#define OPTION_VAL_235_KO NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_KO NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_KO NULL
#define OPTION_VAL_1_00_KO NULL
#define OPTION_VAL_1_25_KO NULL
#define OPTION_VAL_1_50_KO NULL
#define OPTION_VAL_1_75_KO NULL
#define OPTION_VAL_2_00_KO NULL
#define OPTION_VAL_2_25_KO NULL
#define OPTION_VAL_2_50_KO NULL
#define OPTION_VAL_2_75_KO NULL
#define OPTION_VAL_3_00_KO NULL
#define OPTION_VAL_3_25_KO NULL
#define OPTION_VAL_3_50_KO NULL
#define OPTION_VAL_3_75_KO NULL
#define OPTION_VAL_4_00_KO NULL
#define OPTION_VAL_4_25_KO NULL
#define OPTION_VAL_4_50_KO NULL
#define OPTION_VAL_4_75_KO NULL
#define OPTION_VAL_5_00_KO NULL

struct retro_core_option_v2_category option_cats_ko[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_KO,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_KO,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_KO,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_KO,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_KO,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_KO,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_KO,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_KO,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_KO,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_KO,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_KO,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_KO,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_KO },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_KO,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_KO,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_KO },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_KO,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_KO,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_KO },
         { "1.25",   OPTION_VAL_1_25_KO },
         { "1.50",   OPTION_VAL_1_50_KO },
         { "1.75",   OPTION_VAL_1_75_KO },
         { "2.00",   OPTION_VAL_2_00_KO },
         { "2.25",   OPTION_VAL_2_25_KO },
         { "2.50",   OPTION_VAL_2_50_KO },
         { "2.75",   OPTION_VAL_2_75_KO },
         { "3.00",   OPTION_VAL_3_00_KO },
         { "3.25",   OPTION_VAL_3_25_KO },
         { "3.50",   OPTION_VAL_3_50_KO },
         { "3.75",   OPTION_VAL_3_75_KO },
         { "4.00",   OPTION_VAL_4_00_KO },
         { "4.25",   OPTION_VAL_4_25_KO },
         { "4.50",   OPTION_VAL_4_50_KO },
         { "4.75",   OPTION_VAL_4_75_KO },
         { "5.00",   OPTION_VAL_5_00_KO },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_MT */

#define PCFX_CDIMAGECACHE_LABEL_MT NULL
#define PCFX_CDIMAGECACHE_INFO_0_MT NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_MT NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_MT NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_MT NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_MT NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_MT NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_MT NULL
#define PCFX_RESAMP_QUALITY_LABEL_MT NULL
#define PCFX_RESAMP_QUALITY_INFO_0_MT NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_MT NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_MT NULL
#define PCFX_NOSPRITELIMIT_LABEL_MT NULL
#define PCFX_NOSPRITELIMIT_INFO_0_MT NULL
#define PCFX_INITIAL_SCANLINE_LABEL_MT NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_MT NULL
#define OPTION_VAL_4_MT NULL
#define PCFX_LAST_SCANLINE_LABEL_MT NULL
#define PCFX_LAST_SCANLINE_INFO_0_MT NULL
#define OPTION_VAL_235_MT NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_MT NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_MT NULL
#define OPTION_VAL_1_00_MT NULL
#define OPTION_VAL_1_25_MT NULL
#define OPTION_VAL_1_50_MT NULL
#define OPTION_VAL_1_75_MT NULL
#define OPTION_VAL_2_00_MT NULL
#define OPTION_VAL_2_25_MT NULL
#define OPTION_VAL_2_50_MT NULL
#define OPTION_VAL_2_75_MT NULL
#define OPTION_VAL_3_00_MT NULL
#define OPTION_VAL_3_25_MT NULL
#define OPTION_VAL_3_50_MT NULL
#define OPTION_VAL_3_75_MT NULL
#define OPTION_VAL_4_00_MT NULL
#define OPTION_VAL_4_25_MT NULL
#define OPTION_VAL_4_50_MT NULL
#define OPTION_VAL_4_75_MT NULL
#define OPTION_VAL_5_00_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_MT,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_MT,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_MT,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_MT,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_MT,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_MT,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_MT,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_MT,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_MT,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_MT,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_MT,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_MT,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_MT },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_MT,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_MT,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_MT },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_MT,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_MT,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_MT },
         { "1.25",   OPTION_VAL_1_25_MT },
         { "1.50",   OPTION_VAL_1_50_MT },
         { "1.75",   OPTION_VAL_1_75_MT },
         { "2.00",   OPTION_VAL_2_00_MT },
         { "2.25",   OPTION_VAL_2_25_MT },
         { "2.50",   OPTION_VAL_2_50_MT },
         { "2.75",   OPTION_VAL_2_75_MT },
         { "3.00",   OPTION_VAL_3_00_MT },
         { "3.25",   OPTION_VAL_3_25_MT },
         { "3.50",   OPTION_VAL_3_50_MT },
         { "3.75",   OPTION_VAL_3_75_MT },
         { "4.00",   OPTION_VAL_4_00_MT },
         { "4.25",   OPTION_VAL_4_25_MT },
         { "4.50",   OPTION_VAL_4_50_MT },
         { "4.75",   OPTION_VAL_4_75_MT },
         { "5.00",   OPTION_VAL_5_00_MT },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
};

/* RETRO_LANGUAGE_NL */

#define PCFX_CDIMAGECACHE_LABEL_NL NULL
#define PCFX_CDIMAGECACHE_INFO_0_NL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_NL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_NL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_NL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_NL NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_NL NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_NL NULL
#define PCFX_RESAMP_QUALITY_LABEL_NL NULL
#define PCFX_RESAMP_QUALITY_INFO_0_NL NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_NL NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_NL NULL
#define PCFX_NOSPRITELIMIT_LABEL_NL NULL
#define PCFX_NOSPRITELIMIT_INFO_0_NL NULL
#define PCFX_INITIAL_SCANLINE_LABEL_NL NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_4_NL NULL
#define PCFX_LAST_SCANLINE_LABEL_NL NULL
#define PCFX_LAST_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_235_NL NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_NL NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_NL NULL
#define OPTION_VAL_1_00_NL NULL
#define OPTION_VAL_1_25_NL NULL
#define OPTION_VAL_1_50_NL NULL
#define OPTION_VAL_1_75_NL NULL
#define OPTION_VAL_2_00_NL NULL
#define OPTION_VAL_2_25_NL NULL
#define OPTION_VAL_2_50_NL NULL
#define OPTION_VAL_2_75_NL NULL
#define OPTION_VAL_3_00_NL NULL
#define OPTION_VAL_3_25_NL NULL
#define OPTION_VAL_3_50_NL NULL
#define OPTION_VAL_3_75_NL NULL
#define OPTION_VAL_4_00_NL NULL
#define OPTION_VAL_4_25_NL NULL
#define OPTION_VAL_4_50_NL NULL
#define OPTION_VAL_4_75_NL NULL
#define OPTION_VAL_5_00_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_NL,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_NL,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_NL,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_NL,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_NL,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_NL,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_NL,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_NL,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_NL,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_NL,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_NL,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_NL,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_NL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_NL,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_NL,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_NL },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_NL,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_NL,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_NL },
         { "1.25",   OPTION_VAL_1_25_NL },
         { "1.50",   OPTION_VAL_1_50_NL },
         { "1.75",   OPTION_VAL_1_75_NL },
         { "2.00",   OPTION_VAL_2_00_NL },
         { "2.25",   OPTION_VAL_2_25_NL },
         { "2.50",   OPTION_VAL_2_50_NL },
         { "2.75",   OPTION_VAL_2_75_NL },
         { "3.00",   OPTION_VAL_3_00_NL },
         { "3.25",   OPTION_VAL_3_25_NL },
         { "3.50",   OPTION_VAL_3_50_NL },
         { "3.75",   OPTION_VAL_3_75_NL },
         { "4.00",   OPTION_VAL_4_00_NL },
         { "4.25",   OPTION_VAL_4_25_NL },
         { "4.50",   OPTION_VAL_4_50_NL },
         { "4.75",   OPTION_VAL_4_75_NL },
         { "5.00",   OPTION_VAL_5_00_NL },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_OC */

#define PCFX_CDIMAGECACHE_LABEL_OC NULL
#define PCFX_CDIMAGECACHE_INFO_0_OC NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_OC NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_OC NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_OC NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_OC NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_OC NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_OC NULL
#define PCFX_RESAMP_QUALITY_LABEL_OC NULL
#define PCFX_RESAMP_QUALITY_INFO_0_OC NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_OC NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_OC NULL
#define PCFX_NOSPRITELIMIT_LABEL_OC NULL
#define PCFX_NOSPRITELIMIT_INFO_0_OC NULL
#define PCFX_INITIAL_SCANLINE_LABEL_OC NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_OC NULL
#define OPTION_VAL_4_OC NULL
#define PCFX_LAST_SCANLINE_LABEL_OC NULL
#define PCFX_LAST_SCANLINE_INFO_0_OC NULL
#define OPTION_VAL_235_OC NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_OC NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_OC NULL
#define OPTION_VAL_1_00_OC NULL
#define OPTION_VAL_1_25_OC NULL
#define OPTION_VAL_1_50_OC NULL
#define OPTION_VAL_1_75_OC NULL
#define OPTION_VAL_2_00_OC NULL
#define OPTION_VAL_2_25_OC NULL
#define OPTION_VAL_2_50_OC NULL
#define OPTION_VAL_2_75_OC NULL
#define OPTION_VAL_3_00_OC NULL
#define OPTION_VAL_3_25_OC NULL
#define OPTION_VAL_3_50_OC NULL
#define OPTION_VAL_3_75_OC NULL
#define OPTION_VAL_4_00_OC NULL
#define OPTION_VAL_4_25_OC NULL
#define OPTION_VAL_4_50_OC NULL
#define OPTION_VAL_4_75_OC NULL
#define OPTION_VAL_5_00_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_OC,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_OC,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_OC,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_OC,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_OC,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_OC,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_OC,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_OC,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_OC,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_OC,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_OC,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_OC,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_OC },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_OC,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_OC,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_OC },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_OC,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_OC,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_OC },
         { "1.25",   OPTION_VAL_1_25_OC },
         { "1.50",   OPTION_VAL_1_50_OC },
         { "1.75",   OPTION_VAL_1_75_OC },
         { "2.00",   OPTION_VAL_2_00_OC },
         { "2.25",   OPTION_VAL_2_25_OC },
         { "2.50",   OPTION_VAL_2_50_OC },
         { "2.75",   OPTION_VAL_2_75_OC },
         { "3.00",   OPTION_VAL_3_00_OC },
         { "3.25",   OPTION_VAL_3_25_OC },
         { "3.50",   OPTION_VAL_3_50_OC },
         { "3.75",   OPTION_VAL_3_75_OC },
         { "4.00",   OPTION_VAL_4_00_OC },
         { "4.25",   OPTION_VAL_4_25_OC },
         { "4.50",   OPTION_VAL_4_50_OC },
         { "4.75",   OPTION_VAL_4_75_OC },
         { "5.00",   OPTION_VAL_5_00_OC },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
};

/* RETRO_LANGUAGE_PL */

#define PCFX_CDIMAGECACHE_LABEL_PL NULL
#define PCFX_CDIMAGECACHE_INFO_0_PL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_PL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_PL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_PL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_PL NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_PL NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_PL NULL
#define PCFX_RESAMP_QUALITY_LABEL_PL NULL
#define PCFX_RESAMP_QUALITY_INFO_0_PL NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_PL NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_PL NULL
#define PCFX_NOSPRITELIMIT_LABEL_PL NULL
#define PCFX_NOSPRITELIMIT_INFO_0_PL NULL
#define PCFX_INITIAL_SCANLINE_LABEL_PL NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_4_PL NULL
#define PCFX_LAST_SCANLINE_LABEL_PL NULL
#define PCFX_LAST_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_235_PL NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_PL NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_PL NULL
#define OPTION_VAL_1_00_PL NULL
#define OPTION_VAL_1_25_PL NULL
#define OPTION_VAL_1_50_PL NULL
#define OPTION_VAL_1_75_PL NULL
#define OPTION_VAL_2_00_PL NULL
#define OPTION_VAL_2_25_PL NULL
#define OPTION_VAL_2_50_PL NULL
#define OPTION_VAL_2_75_PL NULL
#define OPTION_VAL_3_00_PL NULL
#define OPTION_VAL_3_25_PL NULL
#define OPTION_VAL_3_50_PL NULL
#define OPTION_VAL_3_75_PL NULL
#define OPTION_VAL_4_00_PL NULL
#define OPTION_VAL_4_25_PL NULL
#define OPTION_VAL_4_50_PL NULL
#define OPTION_VAL_4_75_PL NULL
#define OPTION_VAL_5_00_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_PL,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_PL,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_PL,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_PL,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_PL,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_PL,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_PL,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_PL,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_PL,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_PL,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_PL,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_PL,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_PL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_PL,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_PL,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_PL },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_PL,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_PL,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_PL },
         { "1.25",   OPTION_VAL_1_25_PL },
         { "1.50",   OPTION_VAL_1_50_PL },
         { "1.75",   OPTION_VAL_1_75_PL },
         { "2.00",   OPTION_VAL_2_00_PL },
         { "2.25",   OPTION_VAL_2_25_PL },
         { "2.50",   OPTION_VAL_2_50_PL },
         { "2.75",   OPTION_VAL_2_75_PL },
         { "3.00",   OPTION_VAL_3_00_PL },
         { "3.25",   OPTION_VAL_3_25_PL },
         { "3.50",   OPTION_VAL_3_50_PL },
         { "3.75",   OPTION_VAL_3_75_PL },
         { "4.00",   OPTION_VAL_4_00_PL },
         { "4.25",   OPTION_VAL_4_25_PL },
         { "4.50",   OPTION_VAL_4_50_PL },
         { "4.75",   OPTION_VAL_4_75_PL },
         { "5.00",   OPTION_VAL_5_00_PL },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define PCFX_CDIMAGECACHE_LABEL_PT_BR NULL
#define PCFX_CDIMAGECACHE_INFO_0_PT_BR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_PT_BR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_PT_BR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_PT_BR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_PT_BR NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_PT_BR NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_PT_BR NULL
#define PCFX_RESAMP_QUALITY_LABEL_PT_BR NULL
#define PCFX_RESAMP_QUALITY_INFO_0_PT_BR NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_PT_BR NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_PT_BR NULL
#define PCFX_NOSPRITELIMIT_LABEL_PT_BR NULL
#define PCFX_NOSPRITELIMIT_INFO_0_PT_BR NULL
#define PCFX_INITIAL_SCANLINE_LABEL_PT_BR NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_PT_BR NULL
#define OPTION_VAL_4_PT_BR NULL
#define PCFX_LAST_SCANLINE_LABEL_PT_BR NULL
#define PCFX_LAST_SCANLINE_INFO_0_PT_BR NULL
#define OPTION_VAL_235_PT_BR NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_PT_BR NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_PT_BR NULL
#define OPTION_VAL_1_00_PT_BR NULL
#define OPTION_VAL_1_25_PT_BR NULL
#define OPTION_VAL_1_50_PT_BR NULL
#define OPTION_VAL_1_75_PT_BR NULL
#define OPTION_VAL_2_00_PT_BR NULL
#define OPTION_VAL_2_25_PT_BR NULL
#define OPTION_VAL_2_50_PT_BR NULL
#define OPTION_VAL_2_75_PT_BR NULL
#define OPTION_VAL_3_00_PT_BR NULL
#define OPTION_VAL_3_25_PT_BR NULL
#define OPTION_VAL_3_50_PT_BR NULL
#define OPTION_VAL_3_75_PT_BR NULL
#define OPTION_VAL_4_00_PT_BR NULL
#define OPTION_VAL_4_25_PT_BR NULL
#define OPTION_VAL_4_50_PT_BR NULL
#define OPTION_VAL_4_75_PT_BR NULL
#define OPTION_VAL_5_00_PT_BR NULL

struct retro_core_option_v2_category option_cats_pt_br[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_PT_BR,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_PT_BR,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_PT_BR,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_PT_BR,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_PT_BR,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_PT_BR,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_PT_BR,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_PT_BR,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_PT_BR },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_PT_BR,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_PT_BR },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_PT_BR,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_PT_BR },
         { "1.25",   OPTION_VAL_1_25_PT_BR },
         { "1.50",   OPTION_VAL_1_50_PT_BR },
         { "1.75",   OPTION_VAL_1_75_PT_BR },
         { "2.00",   OPTION_VAL_2_00_PT_BR },
         { "2.25",   OPTION_VAL_2_25_PT_BR },
         { "2.50",   OPTION_VAL_2_50_PT_BR },
         { "2.75",   OPTION_VAL_2_75_PT_BR },
         { "3.00",   OPTION_VAL_3_00_PT_BR },
         { "3.25",   OPTION_VAL_3_25_PT_BR },
         { "3.50",   OPTION_VAL_3_50_PT_BR },
         { "3.75",   OPTION_VAL_3_75_PT_BR },
         { "4.00",   OPTION_VAL_4_00_PT_BR },
         { "4.25",   OPTION_VAL_4_25_PT_BR },
         { "4.50",   OPTION_VAL_4_50_PT_BR },
         { "4.75",   OPTION_VAL_4_75_PT_BR },
         { "5.00",   OPTION_VAL_5_00_PT_BR },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define PCFX_CDIMAGECACHE_LABEL_PT_PT NULL
#define PCFX_CDIMAGECACHE_INFO_0_PT_PT NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_PT_PT NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_PT_PT NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_PT_PT NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_PT_PT NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_PT_PT NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_PT_PT NULL
#define PCFX_RESAMP_QUALITY_LABEL_PT_PT NULL
#define PCFX_RESAMP_QUALITY_INFO_0_PT_PT NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_PT_PT NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_PT_PT NULL
#define PCFX_NOSPRITELIMIT_LABEL_PT_PT NULL
#define PCFX_NOSPRITELIMIT_INFO_0_PT_PT NULL
#define PCFX_INITIAL_SCANLINE_LABEL_PT_PT NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_4_PT_PT NULL
#define PCFX_LAST_SCANLINE_LABEL_PT_PT NULL
#define PCFX_LAST_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_235_PT_PT NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_PT_PT NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_PT_PT NULL
#define OPTION_VAL_1_00_PT_PT NULL
#define OPTION_VAL_1_25_PT_PT NULL
#define OPTION_VAL_1_50_PT_PT NULL
#define OPTION_VAL_1_75_PT_PT NULL
#define OPTION_VAL_2_00_PT_PT NULL
#define OPTION_VAL_2_25_PT_PT NULL
#define OPTION_VAL_2_50_PT_PT NULL
#define OPTION_VAL_2_75_PT_PT NULL
#define OPTION_VAL_3_00_PT_PT NULL
#define OPTION_VAL_3_25_PT_PT NULL
#define OPTION_VAL_3_50_PT_PT NULL
#define OPTION_VAL_3_75_PT_PT NULL
#define OPTION_VAL_4_00_PT_PT NULL
#define OPTION_VAL_4_25_PT_PT NULL
#define OPTION_VAL_4_50_PT_PT NULL
#define OPTION_VAL_4_75_PT_PT NULL
#define OPTION_VAL_5_00_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_PT_PT,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_PT_PT,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_PT_PT,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_PT_PT,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_PT_PT,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_PT_PT,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_PT_PT,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_PT_PT,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_PT_PT },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_PT_PT,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_PT_PT },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_PT_PT,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_PT_PT },
         { "1.25",   OPTION_VAL_1_25_PT_PT },
         { "1.50",   OPTION_VAL_1_50_PT_PT },
         { "1.75",   OPTION_VAL_1_75_PT_PT },
         { "2.00",   OPTION_VAL_2_00_PT_PT },
         { "2.25",   OPTION_VAL_2_25_PT_PT },
         { "2.50",   OPTION_VAL_2_50_PT_PT },
         { "2.75",   OPTION_VAL_2_75_PT_PT },
         { "3.00",   OPTION_VAL_3_00_PT_PT },
         { "3.25",   OPTION_VAL_3_25_PT_PT },
         { "3.50",   OPTION_VAL_3_50_PT_PT },
         { "3.75",   OPTION_VAL_3_75_PT_PT },
         { "4.00",   OPTION_VAL_4_00_PT_PT },
         { "4.25",   OPTION_VAL_4_25_PT_PT },
         { "4.50",   OPTION_VAL_4_50_PT_PT },
         { "4.75",   OPTION_VAL_4_75_PT_PT },
         { "5.00",   OPTION_VAL_5_00_PT_PT },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RO */

#define PCFX_CDIMAGECACHE_LABEL_RO NULL
#define PCFX_CDIMAGECACHE_INFO_0_RO NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_RO NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_RO NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_RO NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_RO NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_RO NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_RO NULL
#define PCFX_RESAMP_QUALITY_LABEL_RO NULL
#define PCFX_RESAMP_QUALITY_INFO_0_RO NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_RO NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_RO NULL
#define PCFX_NOSPRITELIMIT_LABEL_RO NULL
#define PCFX_NOSPRITELIMIT_INFO_0_RO NULL
#define PCFX_INITIAL_SCANLINE_LABEL_RO NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_RO NULL
#define OPTION_VAL_4_RO NULL
#define PCFX_LAST_SCANLINE_LABEL_RO NULL
#define PCFX_LAST_SCANLINE_INFO_0_RO NULL
#define OPTION_VAL_235_RO NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_RO NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_RO NULL
#define OPTION_VAL_1_00_RO NULL
#define OPTION_VAL_1_25_RO NULL
#define OPTION_VAL_1_50_RO NULL
#define OPTION_VAL_1_75_RO NULL
#define OPTION_VAL_2_00_RO NULL
#define OPTION_VAL_2_25_RO NULL
#define OPTION_VAL_2_50_RO NULL
#define OPTION_VAL_2_75_RO NULL
#define OPTION_VAL_3_00_RO NULL
#define OPTION_VAL_3_25_RO NULL
#define OPTION_VAL_3_50_RO NULL
#define OPTION_VAL_3_75_RO NULL
#define OPTION_VAL_4_00_RO NULL
#define OPTION_VAL_4_25_RO NULL
#define OPTION_VAL_4_50_RO NULL
#define OPTION_VAL_4_75_RO NULL
#define OPTION_VAL_5_00_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_RO,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_RO,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_RO,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_RO,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_RO,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_RO,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_RO,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_RO,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_RO,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_RO,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_RO,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_RO,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_RO },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_RO,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_RO,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_RO },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_RO,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_RO,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_RO },
         { "1.25",   OPTION_VAL_1_25_RO },
         { "1.50",   OPTION_VAL_1_50_RO },
         { "1.75",   OPTION_VAL_1_75_RO },
         { "2.00",   OPTION_VAL_2_00_RO },
         { "2.25",   OPTION_VAL_2_25_RO },
         { "2.50",   OPTION_VAL_2_50_RO },
         { "2.75",   OPTION_VAL_2_75_RO },
         { "3.00",   OPTION_VAL_3_00_RO },
         { "3.25",   OPTION_VAL_3_25_RO },
         { "3.50",   OPTION_VAL_3_50_RO },
         { "3.75",   OPTION_VAL_3_75_RO },
         { "4.00",   OPTION_VAL_4_00_RO },
         { "4.25",   OPTION_VAL_4_25_RO },
         { "4.50",   OPTION_VAL_4_50_RO },
         { "4.75",   OPTION_VAL_4_75_RO },
         { "5.00",   OPTION_VAL_5_00_RO },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define PCFX_CDIMAGECACHE_LABEL_RU NULL
#define PCFX_CDIMAGECACHE_INFO_0_RU NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_RU NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_RU NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_RU NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_RU NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_RU NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_RU NULL
#define PCFX_RESAMP_QUALITY_LABEL_RU NULL
#define PCFX_RESAMP_QUALITY_INFO_0_RU NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_RU NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_RU NULL
#define PCFX_NOSPRITELIMIT_LABEL_RU NULL
#define PCFX_NOSPRITELIMIT_INFO_0_RU NULL
#define PCFX_INITIAL_SCANLINE_LABEL_RU NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_RU NULL
#define OPTION_VAL_4_RU NULL
#define PCFX_LAST_SCANLINE_LABEL_RU NULL
#define PCFX_LAST_SCANLINE_INFO_0_RU NULL
#define OPTION_VAL_235_RU NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_RU NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_RU NULL
#define OPTION_VAL_1_00_RU NULL
#define OPTION_VAL_1_25_RU NULL
#define OPTION_VAL_1_50_RU NULL
#define OPTION_VAL_1_75_RU NULL
#define OPTION_VAL_2_00_RU NULL
#define OPTION_VAL_2_25_RU NULL
#define OPTION_VAL_2_50_RU NULL
#define OPTION_VAL_2_75_RU NULL
#define OPTION_VAL_3_00_RU NULL
#define OPTION_VAL_3_25_RU NULL
#define OPTION_VAL_3_50_RU NULL
#define OPTION_VAL_3_75_RU NULL
#define OPTION_VAL_4_00_RU NULL
#define OPTION_VAL_4_25_RU NULL
#define OPTION_VAL_4_50_RU NULL
#define OPTION_VAL_4_75_RU NULL
#define OPTION_VAL_5_00_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_RU,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_RU,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_RU,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_RU,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_RU,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_RU,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_RU,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_RU,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_RU,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_RU,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_RU,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_RU,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_RU },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_RU,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_RU,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_RU },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_RU,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_RU,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_RU },
         { "1.25",   OPTION_VAL_1_25_RU },
         { "1.50",   OPTION_VAL_1_50_RU },
         { "1.75",   OPTION_VAL_1_75_RU },
         { "2.00",   OPTION_VAL_2_00_RU },
         { "2.25",   OPTION_VAL_2_25_RU },
         { "2.50",   OPTION_VAL_2_50_RU },
         { "2.75",   OPTION_VAL_2_75_RU },
         { "3.00",   OPTION_VAL_3_00_RU },
         { "3.25",   OPTION_VAL_3_25_RU },
         { "3.50",   OPTION_VAL_3_50_RU },
         { "3.75",   OPTION_VAL_3_75_RU },
         { "4.00",   OPTION_VAL_4_00_RU },
         { "4.25",   OPTION_VAL_4_25_RU },
         { "4.50",   OPTION_VAL_4_50_RU },
         { "4.75",   OPTION_VAL_4_75_RU },
         { "5.00",   OPTION_VAL_5_00_RU },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SI */

#define PCFX_CDIMAGECACHE_LABEL_SI NULL
#define PCFX_CDIMAGECACHE_INFO_0_SI NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_SI NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_SI NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_SI NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_SI NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_SI NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_SI NULL
#define PCFX_RESAMP_QUALITY_LABEL_SI NULL
#define PCFX_RESAMP_QUALITY_INFO_0_SI NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_SI NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_SI NULL
#define PCFX_NOSPRITELIMIT_LABEL_SI NULL
#define PCFX_NOSPRITELIMIT_INFO_0_SI NULL
#define PCFX_INITIAL_SCANLINE_LABEL_SI NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_SI NULL
#define OPTION_VAL_4_SI NULL
#define PCFX_LAST_SCANLINE_LABEL_SI NULL
#define PCFX_LAST_SCANLINE_INFO_0_SI NULL
#define OPTION_VAL_235_SI NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_SI NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_SI NULL
#define OPTION_VAL_1_00_SI NULL
#define OPTION_VAL_1_25_SI NULL
#define OPTION_VAL_1_50_SI NULL
#define OPTION_VAL_1_75_SI NULL
#define OPTION_VAL_2_00_SI NULL
#define OPTION_VAL_2_25_SI NULL
#define OPTION_VAL_2_50_SI NULL
#define OPTION_VAL_2_75_SI NULL
#define OPTION_VAL_3_00_SI NULL
#define OPTION_VAL_3_25_SI NULL
#define OPTION_VAL_3_50_SI NULL
#define OPTION_VAL_3_75_SI NULL
#define OPTION_VAL_4_00_SI NULL
#define OPTION_VAL_4_25_SI NULL
#define OPTION_VAL_4_50_SI NULL
#define OPTION_VAL_4_75_SI NULL
#define OPTION_VAL_5_00_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_SI,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_SI,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_SI,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_SI,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_SI,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_SI,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_SI,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_SI,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_SI,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_SI,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_SI,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_SI,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_SI },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_SI,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_SI,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_SI },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_SI,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_SI,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_SI },
         { "1.25",   OPTION_VAL_1_25_SI },
         { "1.50",   OPTION_VAL_1_50_SI },
         { "1.75",   OPTION_VAL_1_75_SI },
         { "2.00",   OPTION_VAL_2_00_SI },
         { "2.25",   OPTION_VAL_2_25_SI },
         { "2.50",   OPTION_VAL_2_50_SI },
         { "2.75",   OPTION_VAL_2_75_SI },
         { "3.00",   OPTION_VAL_3_00_SI },
         { "3.25",   OPTION_VAL_3_25_SI },
         { "3.50",   OPTION_VAL_3_50_SI },
         { "3.75",   OPTION_VAL_3_75_SI },
         { "4.00",   OPTION_VAL_4_00_SI },
         { "4.25",   OPTION_VAL_4_25_SI },
         { "4.50",   OPTION_VAL_4_50_SI },
         { "4.75",   OPTION_VAL_4_75_SI },
         { "5.00",   OPTION_VAL_5_00_SI },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define PCFX_CDIMAGECACHE_LABEL_SK NULL
#define PCFX_CDIMAGECACHE_INFO_0_SK NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_SK NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_SK NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_SK NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_SK NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_SK NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_SK NULL
#define PCFX_RESAMP_QUALITY_LABEL_SK NULL
#define PCFX_RESAMP_QUALITY_INFO_0_SK NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_SK NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_SK NULL
#define PCFX_NOSPRITELIMIT_LABEL_SK NULL
#define PCFX_NOSPRITELIMIT_INFO_0_SK NULL
#define PCFX_INITIAL_SCANLINE_LABEL_SK NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_4_SK NULL
#define PCFX_LAST_SCANLINE_LABEL_SK NULL
#define PCFX_LAST_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_235_SK NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_SK NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_SK NULL
#define OPTION_VAL_1_00_SK NULL
#define OPTION_VAL_1_25_SK NULL
#define OPTION_VAL_1_50_SK NULL
#define OPTION_VAL_1_75_SK NULL
#define OPTION_VAL_2_00_SK NULL
#define OPTION_VAL_2_25_SK NULL
#define OPTION_VAL_2_50_SK NULL
#define OPTION_VAL_2_75_SK NULL
#define OPTION_VAL_3_00_SK NULL
#define OPTION_VAL_3_25_SK NULL
#define OPTION_VAL_3_50_SK NULL
#define OPTION_VAL_3_75_SK NULL
#define OPTION_VAL_4_00_SK NULL
#define OPTION_VAL_4_25_SK NULL
#define OPTION_VAL_4_50_SK NULL
#define OPTION_VAL_4_75_SK NULL
#define OPTION_VAL_5_00_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_SK,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_SK,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_SK,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_SK,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_SK,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_SK,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_SK,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_SK,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_SK,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_SK,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_SK,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_SK,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_SK },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_SK,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_SK,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_SK },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_SK,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_SK,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_SK },
         { "1.25",   OPTION_VAL_1_25_SK },
         { "1.50",   OPTION_VAL_1_50_SK },
         { "1.75",   OPTION_VAL_1_75_SK },
         { "2.00",   OPTION_VAL_2_00_SK },
         { "2.25",   OPTION_VAL_2_25_SK },
         { "2.50",   OPTION_VAL_2_50_SK },
         { "2.75",   OPTION_VAL_2_75_SK },
         { "3.00",   OPTION_VAL_3_00_SK },
         { "3.25",   OPTION_VAL_3_25_SK },
         { "3.50",   OPTION_VAL_3_50_SK },
         { "3.75",   OPTION_VAL_3_75_SK },
         { "4.00",   OPTION_VAL_4_00_SK },
         { "4.25",   OPTION_VAL_4_25_SK },
         { "4.50",   OPTION_VAL_4_50_SK },
         { "4.75",   OPTION_VAL_4_75_SK },
         { "5.00",   OPTION_VAL_5_00_SK },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define PCFX_CDIMAGECACHE_LABEL_SR NULL
#define PCFX_CDIMAGECACHE_INFO_0_SR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_SR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_SR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_SR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_SR NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_SR NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_SR NULL
#define PCFX_RESAMP_QUALITY_LABEL_SR NULL
#define PCFX_RESAMP_QUALITY_INFO_0_SR NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_SR NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_SR NULL
#define PCFX_NOSPRITELIMIT_LABEL_SR NULL
#define PCFX_NOSPRITELIMIT_INFO_0_SR NULL
#define PCFX_INITIAL_SCANLINE_LABEL_SR NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_4_SR NULL
#define PCFX_LAST_SCANLINE_LABEL_SR NULL
#define PCFX_LAST_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_235_SR NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_SR NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_SR NULL
#define OPTION_VAL_1_00_SR NULL
#define OPTION_VAL_1_25_SR NULL
#define OPTION_VAL_1_50_SR NULL
#define OPTION_VAL_1_75_SR NULL
#define OPTION_VAL_2_00_SR NULL
#define OPTION_VAL_2_25_SR NULL
#define OPTION_VAL_2_50_SR NULL
#define OPTION_VAL_2_75_SR NULL
#define OPTION_VAL_3_00_SR NULL
#define OPTION_VAL_3_25_SR NULL
#define OPTION_VAL_3_50_SR NULL
#define OPTION_VAL_3_75_SR NULL
#define OPTION_VAL_4_00_SR NULL
#define OPTION_VAL_4_25_SR NULL
#define OPTION_VAL_4_50_SR NULL
#define OPTION_VAL_4_75_SR NULL
#define OPTION_VAL_5_00_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_SR,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_SR,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_SR,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_SR,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_SR,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_SR,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_SR,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_SR,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_SR,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_SR,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_SR,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_SR,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_SR },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_SR,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_SR,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_SR },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_SR,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_SR,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_SR },
         { "1.25",   OPTION_VAL_1_25_SR },
         { "1.50",   OPTION_VAL_1_50_SR },
         { "1.75",   OPTION_VAL_1_75_SR },
         { "2.00",   OPTION_VAL_2_00_SR },
         { "2.25",   OPTION_VAL_2_25_SR },
         { "2.50",   OPTION_VAL_2_50_SR },
         { "2.75",   OPTION_VAL_2_75_SR },
         { "3.00",   OPTION_VAL_3_00_SR },
         { "3.25",   OPTION_VAL_3_25_SR },
         { "3.50",   OPTION_VAL_3_50_SR },
         { "3.75",   OPTION_VAL_3_75_SR },
         { "4.00",   OPTION_VAL_4_00_SR },
         { "4.25",   OPTION_VAL_4_25_SR },
         { "4.50",   OPTION_VAL_4_50_SR },
         { "4.75",   OPTION_VAL_4_75_SR },
         { "5.00",   OPTION_VAL_5_00_SR },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define PCFX_CDIMAGECACHE_LABEL_SV NULL
#define PCFX_CDIMAGECACHE_INFO_0_SV NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_SV NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_SV NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_SV NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_SV NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_SV NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_SV NULL
#define PCFX_RESAMP_QUALITY_LABEL_SV NULL
#define PCFX_RESAMP_QUALITY_INFO_0_SV NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_SV NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_SV NULL
#define PCFX_NOSPRITELIMIT_LABEL_SV NULL
#define PCFX_NOSPRITELIMIT_INFO_0_SV NULL
#define PCFX_INITIAL_SCANLINE_LABEL_SV NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_SV NULL
#define OPTION_VAL_4_SV NULL
#define PCFX_LAST_SCANLINE_LABEL_SV NULL
#define PCFX_LAST_SCANLINE_INFO_0_SV NULL
#define OPTION_VAL_235_SV NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_SV NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_SV NULL
#define OPTION_VAL_1_00_SV NULL
#define OPTION_VAL_1_25_SV NULL
#define OPTION_VAL_1_50_SV NULL
#define OPTION_VAL_1_75_SV NULL
#define OPTION_VAL_2_00_SV NULL
#define OPTION_VAL_2_25_SV NULL
#define OPTION_VAL_2_50_SV NULL
#define OPTION_VAL_2_75_SV NULL
#define OPTION_VAL_3_00_SV NULL
#define OPTION_VAL_3_25_SV NULL
#define OPTION_VAL_3_50_SV NULL
#define OPTION_VAL_3_75_SV NULL
#define OPTION_VAL_4_00_SV NULL
#define OPTION_VAL_4_25_SV NULL
#define OPTION_VAL_4_50_SV NULL
#define OPTION_VAL_4_75_SV NULL
#define OPTION_VAL_5_00_SV NULL

struct retro_core_option_v2_category option_cats_sv[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_SV,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_SV,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_SV,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_SV,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_SV,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_SV,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_SV,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_SV,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_SV,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_SV,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_SV,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_SV,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_SV },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_SV,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_SV,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_SV },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_SV,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_SV,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_SV },
         { "1.25",   OPTION_VAL_1_25_SV },
         { "1.50",   OPTION_VAL_1_50_SV },
         { "1.75",   OPTION_VAL_1_75_SV },
         { "2.00",   OPTION_VAL_2_00_SV },
         { "2.25",   OPTION_VAL_2_25_SV },
         { "2.50",   OPTION_VAL_2_50_SV },
         { "2.75",   OPTION_VAL_2_75_SV },
         { "3.00",   OPTION_VAL_3_00_SV },
         { "3.25",   OPTION_VAL_3_25_SV },
         { "3.50",   OPTION_VAL_3_50_SV },
         { "3.75",   OPTION_VAL_3_75_SV },
         { "4.00",   OPTION_VAL_4_00_SV },
         { "4.25",   OPTION_VAL_4_25_SV },
         { "4.50",   OPTION_VAL_4_50_SV },
         { "4.75",   OPTION_VAL_4_75_SV },
         { "5.00",   OPTION_VAL_5_00_SV },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define PCFX_CDIMAGECACHE_LABEL_TR NULL
#define PCFX_CDIMAGECACHE_INFO_0_TR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_TR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_TR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_TR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_TR NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_TR NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_TR NULL
#define PCFX_RESAMP_QUALITY_LABEL_TR NULL
#define PCFX_RESAMP_QUALITY_INFO_0_TR NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_TR NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_TR NULL
#define PCFX_NOSPRITELIMIT_LABEL_TR NULL
#define PCFX_NOSPRITELIMIT_INFO_0_TR NULL
#define PCFX_INITIAL_SCANLINE_LABEL_TR NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_TR NULL
#define OPTION_VAL_4_TR NULL
#define PCFX_LAST_SCANLINE_LABEL_TR NULL
#define PCFX_LAST_SCANLINE_INFO_0_TR NULL
#define OPTION_VAL_235_TR NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_TR NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_TR NULL
#define OPTION_VAL_1_00_TR NULL
#define OPTION_VAL_1_25_TR NULL
#define OPTION_VAL_1_50_TR NULL
#define OPTION_VAL_1_75_TR NULL
#define OPTION_VAL_2_00_TR NULL
#define OPTION_VAL_2_25_TR NULL
#define OPTION_VAL_2_50_TR NULL
#define OPTION_VAL_2_75_TR NULL
#define OPTION_VAL_3_00_TR NULL
#define OPTION_VAL_3_25_TR NULL
#define OPTION_VAL_3_50_TR NULL
#define OPTION_VAL_3_75_TR NULL
#define OPTION_VAL_4_00_TR NULL
#define OPTION_VAL_4_25_TR NULL
#define OPTION_VAL_4_50_TR NULL
#define OPTION_VAL_4_75_TR NULL
#define OPTION_VAL_5_00_TR NULL

struct retro_core_option_v2_category option_cats_tr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_TR,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_TR,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_TR,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_TR,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_TR,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_TR,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_TR,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_TR,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_TR,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_TR,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_TR,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_TR,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_TR },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_TR,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_TR,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_TR },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_TR,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_TR,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_TR },
         { "1.25",   OPTION_VAL_1_25_TR },
         { "1.50",   OPTION_VAL_1_50_TR },
         { "1.75",   OPTION_VAL_1_75_TR },
         { "2.00",   OPTION_VAL_2_00_TR },
         { "2.25",   OPTION_VAL_2_25_TR },
         { "2.50",   OPTION_VAL_2_50_TR },
         { "2.75",   OPTION_VAL_2_75_TR },
         { "3.00",   OPTION_VAL_3_00_TR },
         { "3.25",   OPTION_VAL_3_25_TR },
         { "3.50",   OPTION_VAL_3_50_TR },
         { "3.75",   OPTION_VAL_3_75_TR },
         { "4.00",   OPTION_VAL_4_00_TR },
         { "4.25",   OPTION_VAL_4_25_TR },
         { "4.50",   OPTION_VAL_4_50_TR },
         { "4.75",   OPTION_VAL_4_75_TR },
         { "5.00",   OPTION_VAL_5_00_TR },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define PCFX_CDIMAGECACHE_LABEL_UK NULL
#define PCFX_CDIMAGECACHE_INFO_0_UK NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_UK NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_UK NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_UK NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_UK NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_UK NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_UK NULL
#define PCFX_RESAMP_QUALITY_LABEL_UK NULL
#define PCFX_RESAMP_QUALITY_INFO_0_UK NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_UK NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_UK NULL
#define PCFX_NOSPRITELIMIT_LABEL_UK NULL
#define PCFX_NOSPRITELIMIT_INFO_0_UK NULL
#define PCFX_INITIAL_SCANLINE_LABEL_UK NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_4_UK NULL
#define PCFX_LAST_SCANLINE_LABEL_UK NULL
#define PCFX_LAST_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_235_UK NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_UK NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_UK NULL
#define OPTION_VAL_1_00_UK NULL
#define OPTION_VAL_1_25_UK NULL
#define OPTION_VAL_1_50_UK NULL
#define OPTION_VAL_1_75_UK NULL
#define OPTION_VAL_2_00_UK NULL
#define OPTION_VAL_2_25_UK NULL
#define OPTION_VAL_2_50_UK NULL
#define OPTION_VAL_2_75_UK NULL
#define OPTION_VAL_3_00_UK NULL
#define OPTION_VAL_3_25_UK NULL
#define OPTION_VAL_3_50_UK NULL
#define OPTION_VAL_3_75_UK NULL
#define OPTION_VAL_4_00_UK NULL
#define OPTION_VAL_4_25_UK NULL
#define OPTION_VAL_4_50_UK NULL
#define OPTION_VAL_4_75_UK NULL
#define OPTION_VAL_5_00_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_UK,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_UK,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_UK,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_UK,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_UK,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_UK,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_UK,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_UK,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_UK,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_UK,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_UK,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_UK,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_UK },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_UK,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_UK,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_UK },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_UK,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_UK,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_UK },
         { "1.25",   OPTION_VAL_1_25_UK },
         { "1.50",   OPTION_VAL_1_50_UK },
         { "1.75",   OPTION_VAL_1_75_UK },
         { "2.00",   OPTION_VAL_2_00_UK },
         { "2.25",   OPTION_VAL_2_25_UK },
         { "2.50",   OPTION_VAL_2_50_UK },
         { "2.75",   OPTION_VAL_2_75_UK },
         { "3.00",   OPTION_VAL_3_00_UK },
         { "3.25",   OPTION_VAL_3_25_UK },
         { "3.50",   OPTION_VAL_3_50_UK },
         { "3.75",   OPTION_VAL_3_75_UK },
         { "4.00",   OPTION_VAL_4_00_UK },
         { "4.25",   OPTION_VAL_4_25_UK },
         { "4.50",   OPTION_VAL_4_50_UK },
         { "4.75",   OPTION_VAL_4_75_UK },
         { "5.00",   OPTION_VAL_5_00_UK },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VN */

#define PCFX_CDIMAGECACHE_LABEL_VN NULL
#define PCFX_CDIMAGECACHE_INFO_0_VN NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_VN NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_VN NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_VN NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_VN NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_VN NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_VN NULL
#define PCFX_RESAMP_QUALITY_LABEL_VN NULL
#define PCFX_RESAMP_QUALITY_INFO_0_VN NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_VN NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_VN NULL
#define PCFX_NOSPRITELIMIT_LABEL_VN NULL
#define PCFX_NOSPRITELIMIT_INFO_0_VN NULL
#define PCFX_INITIAL_SCANLINE_LABEL_VN NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_4_VN NULL
#define PCFX_LAST_SCANLINE_LABEL_VN NULL
#define PCFX_LAST_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_235_VN NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_VN NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_VN NULL
#define OPTION_VAL_1_00_VN NULL
#define OPTION_VAL_1_25_VN NULL
#define OPTION_VAL_1_50_VN NULL
#define OPTION_VAL_1_75_VN NULL
#define OPTION_VAL_2_00_VN NULL
#define OPTION_VAL_2_25_VN NULL
#define OPTION_VAL_2_50_VN NULL
#define OPTION_VAL_2_75_VN NULL
#define OPTION_VAL_3_00_VN NULL
#define OPTION_VAL_3_25_VN NULL
#define OPTION_VAL_3_50_VN NULL
#define OPTION_VAL_3_75_VN NULL
#define OPTION_VAL_4_00_VN NULL
#define OPTION_VAL_4_25_VN NULL
#define OPTION_VAL_4_50_VN NULL
#define OPTION_VAL_4_75_VN NULL
#define OPTION_VAL_5_00_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_VN,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pcfx_high_dotclock_width",
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_VN,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_VN,
      NULL,
      NULL,
      {
         { "256",  NULL },
         { "341",  NULL },
         { "1024",  NULL },
         { NULL, NULL},
      },
      "1024",
   },
   {
      "pcfx_suppress_channel_reset_clicks",
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_VN,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_VN,
      NULL,
      NULL,
      {
         { "enabled", NULL },
         { "disabled",     NULL },
         { NULL, NULL},
      },
      "enabled",
   },
   {
      "pcfx_emulate_buggy_codec",
      PCFX_EMULATE_BUGGY_CODEC_LABEL_VN,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_resamp_quality",
      PCFX_RESAMP_QUALITY_LABEL_VN,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_VN,
      NULL,
      NULL,
      {
         { "0",  NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  NULL },
         { "5",  NULL },
         { NULL, NULL },
      },
      "3",
   },
   {
      "pcfx_rainbow_chromaip",
      PCFX_RAINBOW_CHROMAIP_LABEL_VN,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled",      NULL },
         { "enabled",      NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_nospritelimit",
      PCFX_NOSPRITELIMIT_LABEL_VN,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled",              NULL },
         { "enabled",             NULL },
         { NULL, NULL},
      },
      "disabled",
   },
   {
      "pcfx_initial_scanline",
      PCFX_INITIAL_SCANLINE_LABEL_VN,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_VN,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_VN },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10",  NULL },
         { "11",  NULL },
         { "12",  NULL },
         { "13",  NULL },
         { "14",  NULL },
         { "15",  NULL },
         { "16",  NULL },
         { "17",  NULL },
         { "18",  NULL },
         { "19",  NULL },
         { "20",  NULL },
         { "21",  NULL },
         { "22",  NULL },
         { "23",  NULL },
         { "24",  NULL },
         { "25",  NULL },
         { "26",  NULL },
         { "27",  NULL },
         { "28",  NULL },
         { "29",  NULL },
         { "30",  NULL },
         { "31",  NULL },
         { "32",  NULL },
         { "33",  NULL },
         { "34",  NULL },
         { "35",  NULL },
         { "36",  NULL },
         { "37",  NULL },
         { "38",  NULL },
         { "39",  NULL },
         { "40",  NULL },
         { NULL, NULL},
      },
      "4",
   },
   {
      "pcfx_last_scanline",
      PCFX_LAST_SCANLINE_LABEL_VN,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_VN,
      NULL,
      NULL,
      {
         { "208",   NULL },
         { "209",   NULL },
         { "210",   NULL },
         { "211",   NULL },
         { "212",   NULL },
         { "213",   NULL },
         { "214",   NULL },
         { "215",   NULL },
         { "216",   NULL },
         { "217",   NULL },
         { "218",   NULL },
         { "219",   NULL },
         { "220",   NULL },
         { "221",   NULL },
         { "222",   NULL },
         { "223",   NULL },
         { "224",   NULL },
         { "225",   NULL },
         { "226",   NULL },
         { "227",   NULL },
         { "228",   NULL },
         { "229",   NULL },
         { "230",   NULL },
         { "231",   NULL },
         { "232",   NULL },
         { "233",   NULL },
         { "234",   NULL },
         { "235",   OPTION_VAL_235_VN },
         { "236",   NULL },
         { "237",   NULL },
         { "238",   NULL },
         { "239",   NULL },
         { NULL, NULL},
      },
      "235",
   },
   {
      "pcfx_mouse_sensitivity",
      PCFX_MOUSE_SENSITIVITY_LABEL_VN,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_VN,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_VN },
         { "1.25",   OPTION_VAL_1_25_VN },
         { "1.50",   OPTION_VAL_1_50_VN },
         { "1.75",   OPTION_VAL_1_75_VN },
         { "2.00",   OPTION_VAL_2_00_VN },
         { "2.25",   OPTION_VAL_2_25_VN },
         { "2.50",   OPTION_VAL_2_50_VN },
         { "2.75",   OPTION_VAL_2_75_VN },
         { "3.00",   OPTION_VAL_3_00_VN },
         { "3.25",   OPTION_VAL_3_25_VN },
         { "3.50",   OPTION_VAL_3_50_VN },
         { "3.75",   OPTION_VAL_3_75_VN },
         { "4.00",   OPTION_VAL_4_00_VN },
         { "4.25",   OPTION_VAL_4_25_VN },
         { "4.50",   OPTION_VAL_4_50_VN },
         { "4.75",   OPTION_VAL_4_75_VN },
         { "5.00",   OPTION_VAL_5_00_VN },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif
