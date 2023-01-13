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
#define OPTION_VAL_4_AST "4 (Por defeutu)"
#define PCFX_LAST_SCANLINE_LABEL_AST NULL
#define PCFX_LAST_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_235_AST "235 (Por defeutu)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_AST "Sensibilidá del mur"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_AST NULL
#define OPTION_VAL_1_00_AST "1,00"
#define OPTION_VAL_1_25_AST "1,25"
#define OPTION_VAL_1_50_AST "1,50"
#define OPTION_VAL_1_75_AST "1,75"
#define OPTION_VAL_2_00_AST "2,00"
#define OPTION_VAL_2_25_AST "2,25"
#define OPTION_VAL_2_50_AST "2,50"
#define OPTION_VAL_2_75_AST "2,75"
#define OPTION_VAL_3_00_AST "3,00"
#define OPTION_VAL_3_25_AST "3,25"
#define OPTION_VAL_3_50_AST "3,50"
#define OPTION_VAL_3_75_AST "3,75"
#define OPTION_VAL_4_00_AST "4,00"
#define OPTION_VAL_4_25_AST "4,25"
#define OPTION_VAL_4_50_AST "4,50"
#define OPTION_VAL_4_75_AST "4,75"
#define OPTION_VAL_5_00_AST "5,00"

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
#define OPTION_VAL_1_00_CA "1,00"
#define OPTION_VAL_1_25_CA "1,25"
#define OPTION_VAL_1_50_CA "1,50"
#define OPTION_VAL_1_75_CA "1,75"
#define OPTION_VAL_2_00_CA "2,00"
#define OPTION_VAL_2_25_CA "2,25"
#define OPTION_VAL_2_50_CA "2,50"
#define OPTION_VAL_2_75_CA "2,75"
#define OPTION_VAL_3_00_CA "3,00"
#define OPTION_VAL_3_25_CA "3,25"
#define OPTION_VAL_3_50_CA "3,50"
#define OPTION_VAL_3_75_CA "3,75"
#define OPTION_VAL_4_00_CA "4,00"
#define OPTION_VAL_4_25_CA "4,25"
#define OPTION_VAL_4_50_CA "4,50"
#define OPTION_VAL_4_75_CA "4,75"
#define OPTION_VAL_5_00_CA "5,00"

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
#define OPTION_VAL_4_CHS "4 (默认)"
#define PCFX_LAST_SCANLINE_LABEL_CHS NULL
#define PCFX_LAST_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_235_CHS "235 (默认)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_CHS "鼠标灵敏度"
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

#define PCFX_CDIMAGECACHE_LABEL_CHT "映像檔快取 (需要重新啟動)"
#define PCFX_CDIMAGECACHE_INFO_0_CHT "執行時將光碟映像檔，完整載入到記憶體中。拖延開啟時間，縮短讀取時間。"
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CHT "高像素時脈寬度 (需要重新啟動)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CHT "7.16 MHz 像素時脈模式的模擬寬度。值越低速度越快，但會導致像素失真。"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CHT "抑制聲道重置雜音 (需要重新啟動)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CHT "破解抑制由強制聲道重置引起的音訊雜音。"
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_CHT "模擬錯誤編碼 (需要重新啟動)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_CHT "破解模擬部分遊戲音頻訊號 ADPCM 錯誤編碼。"
#define PCFX_RESAMP_QUALITY_LABEL_CHT "音質 (需要重新啟動)"
#define PCFX_RESAMP_QUALITY_INFO_0_CHT "較高的值可提供更好的訊噪比，並保持較高頻率(亮度)，但增加計算資源且可能導致延遲(可忽略不計)。"
#define PCFX_RAINBOW_CHROMAIP_LABEL_CHT "色度通道雙線性插值 (需要重新啟動)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_CHT "RAINBOW YUV 輸出的色度通道上使用雙線性插值。可能導致部分遊戲圖形故障。"
#define PCFX_NOSPRITELIMIT_LABEL_CHT "沒有素材限制 (需要重新啟動)"
#define PCFX_NOSPRITELIMIT_INFO_0_CHT "刪除每條掃描線16張素材的硬體限制。警告: 可能導致遊戲圖形故障。"
#define PCFX_INITIAL_SCANLINE_LABEL_CHT "初始掃描線"
#define PCFX_INITIAL_SCANLINE_INFO_0_CHT "設定最初渲染的掃描線。過高的值將裁剪影像頂部。"
#define OPTION_VAL_4_CHT "4 (預設)"
#define PCFX_LAST_SCANLINE_LABEL_CHT "最後掃描線"
#define PCFX_LAST_SCANLINE_INFO_0_CHT "設定最後渲染的掃描線。過低的值將裁剪影像底部。"
#define OPTION_VAL_235_CHT "235 (預設)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_CHT "滑鼠靈敏度"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_CHT "設定滑鼠靈敏度。較高的值游標移動速度越快。"
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

#define PCFX_CDIMAGECACHE_LABEL_CS "Vyrovnávací Paměť Obrazu CD (Nutný Restart)"
#define PCFX_CDIMAGECACHE_INFO_0_CS "Načíst kompletní obraz do paměti při spuštění. Může potenciálně zkrátit dobu načítání za cenu prodloužení doby spouštění."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_CS "Vysoká Šířka Taktu (Nutný Restart)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_CS "Emulovaná šířka pro režim bodových hodin 7,16 MHz. Nižší hodnoty jsou rychlejší, ale způsobují určitý stupeň zkreslení pixelů."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_CS "Potlačení Kliknutí pro Resetování Kanálu (Nutný Restart)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_CS "Hack pro potlačení cvakání zvuku způsobeného vynuceným resetováním kanálu."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_CS "Emulovat Chybný Kodek (Nutný Restart)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_CS "Hack, který emuluje chybný kodér ADPCM používaný pro ADPCM v některých hrách."
#define PCFX_RESAMP_QUALITY_LABEL_CS "Kvalita Zvuku (Nutný Restart)"
#define PCFX_RESAMP_QUALITY_INFO_0_CS "Vyšší hodnoty odpovídají lepšímu odstupu signálu od šumu a lepšímu zachování vyšších frekvencí (\"jasu\") za cenu zvýšené výpočetní náročnosti a zanedbatelného zvýšení latence."
#define PCFX_RAINBOW_CHROMAIP_LABEL_CS "Bilineární Interpolace Chromatického Kanálu (Nutný Restart)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_CS "Povolení bilineární interpolace v chromatickém kanálu výstupu RAINBOW YUV. V některých hrách může způsobovat grafické závady."
#define PCFX_NOSPRITELIMIT_LABEL_CS "Žádný Limit Spritu (Nutný Restart)"
#define PCFX_NOSPRITELIMIT_INFO_0_CS "Odstranění hardwarového limitu 16 bodů na řádek. UPOZORNĚNÍ: V některých hrách může způsobovat grafické závady."
#define PCFX_INITIAL_SCANLINE_LABEL_CS "Počáteční Skenovací Linie"
#define PCFX_INITIAL_SCANLINE_INFO_0_CS "První vykreslená skenovací linie. Vyšší hodnoty oříznou horní část obrázku."
#define OPTION_VAL_4_CS "4 (Výchozí)"
#define PCFX_LAST_SCANLINE_LABEL_CS "Poslední Skenovací Linie"
#define PCFX_LAST_SCANLINE_INFO_0_CS "Poslední vykreslená skenovací linie. Nižší hodnoty oříznou spodní část obrázku."
#define OPTION_VAL_235_CS "235 (Výchozí)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_CS "Citlivost Myší"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_CS "Konfigurace citlivosti typu zařízení 'PCFX Myš'. Při vyšších hodnotách se kurzor myši bude pohybovat rychleji."
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
#define OPTION_VAL_5_00_CS "2.50"

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

#define PCFX_CDIMAGECACHE_LABEL_DE "CD-Abbild-Cache (Neustart erforderlich)"
#define PCFX_CDIMAGECACHE_INFO_0_DE "Das komplette Abbild beim Start in den Arbeitsspeicher laden. Kann die Ladezeiten auf Kosten einer längeren Startzeit verkürzen."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_DE "Dotclock-Breite (Neustart erforderlich)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_DE "Emulierte Breite für den 7,16 MHz dot-clock-Modus. Niedrigere Werte sind schneller, verursachen aber eine gewisse Verzerrung der Pixel."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_DE "Klicks beim Zurücksetzen des Kanals unterdrücken (Neustart erforderlich)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_DE "Hack zur Unterdrückung von Audioklicks, die durch erzwungene Kanalresets verursacht werden."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_DE "Fehlerhaften Codec emulieren (Neustart erforderlich)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_DE "Hack, der einen fehlerhaften ADPCM-Encoder emuliert, der als ADPCM in einigen Spiele verwendet wird."
#define PCFX_RESAMP_QUALITY_LABEL_DE "Klangqualität (Neustart erforderlich)"
#define PCFX_RESAMP_QUALITY_INFO_0_DE "Höhere Werte entsprechen einem besseren Signal-Rausch-Verhältnis und einer besseren Erhaltung höherer Frequenzen ('Helligkeit'), auf Kosten einer erhöhten Rechenkomplexität und einer vernachlässigbaren Latenzsteigerung."
#define PCFX_RAINBOW_CHROMAIP_LABEL_DE "Bilineare Interpolation des Chromakanals (Neustart erforderlich)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_DE "Bilineare Interpolation auf dem Chromakanal der RAINBOW-YUV-Ausgabe aktivieren. Kann bei einigen Spielen grafische Glitches verursachen."
#define PCFX_NOSPRITELIMIT_LABEL_DE "Keine Sprite-Begrenzung (Neustart erforderlich)"
#define PCFX_NOSPRITELIMIT_INFO_0_DE "Die Hardware-Beschränkung von 16 Sprites pro Scanline entfernen. WARNUNG: Kann bei einigen Spielen zu Grafikfehlern führen."
#define PCFX_INITIAL_SCANLINE_LABEL_DE "Erste Scanline"
#define PCFX_INITIAL_SCANLINE_INFO_0_DE "Erste gerenderte Scanline. Höhere Werte schneiden den oberen Teil des Bildes ab."
#define OPTION_VAL_4_DE "4 (Standard)"
#define PCFX_LAST_SCANLINE_LABEL_DE "Letzte Scanline"
#define PCFX_LAST_SCANLINE_INFO_0_DE "Letzte gerenderte Scanline. Niedrigere Werte schneiden den unteren Teil des Bildes ab."
#define OPTION_VAL_235_DE "235 (Standard)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_DE "Mausempfindlichkeit"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_DE "Die Empfindlichkeit des Gerätetyps „PCFX-Maus“ einstellen. Je höher der Wert, desto schneller bewegt sich der Mauszeiger."
#define OPTION_VAL_1_00_DE "1,00"
#define OPTION_VAL_1_25_DE "1,25"
#define OPTION_VAL_1_50_DE "1,50"
#define OPTION_VAL_1_75_DE "1,75"
#define OPTION_VAL_2_00_DE "2,00"
#define OPTION_VAL_2_25_DE "2,25"
#define OPTION_VAL_2_50_DE "2,50"
#define OPTION_VAL_2_75_DE "2,75"
#define OPTION_VAL_3_00_DE "3,00"
#define OPTION_VAL_3_25_DE "3,25"
#define OPTION_VAL_3_50_DE "3,50"
#define OPTION_VAL_3_75_DE "3,75"
#define OPTION_VAL_4_00_DE "4,00"
#define OPTION_VAL_4_25_DE "4,25"
#define OPTION_VAL_4_50_DE "4,50"
#define OPTION_VAL_4_75_DE "4,75"
#define OPTION_VAL_5_00_DE "5,00"

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
#define OPTION_VAL_4_EL "4 (Προεπιλογή)"
#define PCFX_LAST_SCANLINE_LABEL_EL NULL
#define PCFX_LAST_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_235_EL "235 (Προεπιλογή)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_EL "Ευαισθησία Ποντικιού"
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

/* RETRO_LANGUAGE_EN */

#define PCFX_CDIMAGECACHE_LABEL_EN NULL
#define PCFX_CDIMAGECACHE_INFO_0_EN "Load the complete image into memory at start-up. Can potentially decrease loading times at the cost of an increased start-up time."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_EN "High Dot-clock Width (Restart Required)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_EN NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_EN NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_EN NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_EN NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_EN NULL
#define PCFX_RESAMP_QUALITY_LABEL_EN NULL
#define PCFX_RESAMP_QUALITY_INFO_0_EN NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_EN NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_EN NULL
#define PCFX_NOSPRITELIMIT_LABEL_EN NULL
#define PCFX_NOSPRITELIMIT_INFO_0_EN "Remove 16-sprites-per-scan-line hardware limit. WARNING: May cause graphics glitching on some games."
#define PCFX_INITIAL_SCANLINE_LABEL_EN "Initial Scan-line"
#define PCFX_INITIAL_SCANLINE_INFO_0_EN "First rendered scan-line. Higher values will crop the top of the image."
#define OPTION_VAL_4_EN NULL
#define PCFX_LAST_SCANLINE_LABEL_EN "Last Scan-line"
#define PCFX_LAST_SCANLINE_INFO_0_EN "Last rendered scan-line. Lower values will crop the bottom of the image."
#define OPTION_VAL_235_EN NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_EN NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_EN NULL
#define OPTION_VAL_1_00_EN NULL
#define OPTION_VAL_1_25_EN NULL
#define OPTION_VAL_1_50_EN NULL
#define OPTION_VAL_1_75_EN NULL
#define OPTION_VAL_2_00_EN NULL
#define OPTION_VAL_2_25_EN NULL
#define OPTION_VAL_2_50_EN NULL
#define OPTION_VAL_2_75_EN NULL
#define OPTION_VAL_3_00_EN NULL
#define OPTION_VAL_3_25_EN NULL
#define OPTION_VAL_3_50_EN NULL
#define OPTION_VAL_3_75_EN NULL
#define OPTION_VAL_4_00_EN NULL
#define OPTION_VAL_4_25_EN NULL
#define OPTION_VAL_4_50_EN NULL
#define OPTION_VAL_4_75_EN NULL
#define OPTION_VAL_5_00_EN NULL

struct retro_core_option_v2_category option_cats_en[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_en[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_EN,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_EN,
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
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_EN,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_EN,
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
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_EN,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_EN,
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
      PCFX_EMULATE_BUGGY_CODEC_LABEL_EN,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_EN,
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
      PCFX_RESAMP_QUALITY_LABEL_EN,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_EN,
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
      PCFX_RAINBOW_CHROMAIP_LABEL_EN,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_EN,
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
      PCFX_NOSPRITELIMIT_LABEL_EN,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_EN,
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
      PCFX_INITIAL_SCANLINE_LABEL_EN,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_EN,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_EN },
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
      PCFX_LAST_SCANLINE_LABEL_EN,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_EN,
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
         { "235",   OPTION_VAL_235_EN },
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
      PCFX_MOUSE_SENSITIVITY_LABEL_EN,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_EN,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_EN },
         { "1.25",   OPTION_VAL_1_25_EN },
         { "1.50",   OPTION_VAL_1_50_EN },
         { "1.75",   OPTION_VAL_1_75_EN },
         { "2.00",   OPTION_VAL_2_00_EN },
         { "2.25",   OPTION_VAL_2_25_EN },
         { "2.50",   OPTION_VAL_2_50_EN },
         { "2.75",   OPTION_VAL_2_75_EN },
         { "3.00",   OPTION_VAL_3_00_EN },
         { "3.25",   OPTION_VAL_3_25_EN },
         { "3.50",   OPTION_VAL_3_50_EN },
         { "3.75",   OPTION_VAL_3_75_EN },
         { "4.00",   OPTION_VAL_4_00_EN },
         { "4.25",   OPTION_VAL_4_25_EN },
         { "4.50",   OPTION_VAL_4_50_EN },
         { "4.75",   OPTION_VAL_4_75_EN },
         { "5.00",   OPTION_VAL_5_00_EN },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_en = {
   option_cats_en,
   option_defs_en
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

#define PCFX_CDIMAGECACHE_LABEL_ES "Cachear imagen de CD (es necesario reiniciar)"
#define PCFX_CDIMAGECACHE_INFO_0_ES "Carga la imagen de CD entera en la memoria al arrancar. Podría reducir los tiempos de carga a costa de aumentar el tiempo de arranque."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_ES "Ancho al acelerar la frecuencia de vídeo (es necesario reiniciar)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_ES "Indica el ancho emulado para el modo de frecuencia de vídeo a 7,16 MHz. Un valor inferior es más rápido, pero producirá cierta distorsión en los píxeles."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_ES "Suprimir chasquidos al reiniciar los canales (es necesario reiniciar)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_ES "Un arreglo que elimina los chasquidos de audio provocados al reiniciar canales forzosamente."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_ES "Emular códec defectuoso (es necesario reiniciar)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_ES "Un arreglo que emula un codificador de ADPCM defectuoso que utilizan algunos juegos."
#define PCFX_RESAMP_QUALITY_LABEL_ES "Calidad del sonido (es necesario reiniciar)"
#define PCFX_RESAMP_QUALITY_INFO_0_ES "Un valor alto producirá una mejor relación señal/ruido y preservará mejor las frecuencias agudas («más claridad») a costa de provocar una mayor complejidad computacional y aumentar muy levemente la latencia."
#define PCFX_RAINBOW_CHROMAIP_LABEL_ES "Interpolación bilineal de los canales de croma (es necesario reiniciar)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_ES "Activa la interpolación bilineal en el canal de croma de la salida de vídeo YUV RAINBOW. Puede provocar defectos gráficos en algunos juegos."
#define PCFX_NOSPRITELIMIT_LABEL_ES "Desactivar límite de sprites (es necesario reiniciar)"
#define PCFX_NOSPRITELIMIT_INFO_0_ES "Elimina el límite de 16 sprites por línea de barrido que tenía el hardware original. ADVERTENCIA: puede provocar fallos gráficos en algunos juegos."
#define PCFX_INITIAL_SCANLINE_LABEL_ES "Línea de barrido inicial"
#define PCFX_INITIAL_SCANLINE_INFO_0_ES "Indica la primera línea de barrido que se renderizará. Un valor muy alto recortará la parte superior de la imagen."
#define OPTION_VAL_4_ES "4 (por defecto)"
#define PCFX_LAST_SCANLINE_LABEL_ES "Línea de barrido final"
#define PCFX_LAST_SCANLINE_INFO_0_ES "Indica la última línea de barrido que se renderizará. Un valor muy bajo recortará la parte inferior de la imagen."
#define OPTION_VAL_235_ES "235 (por defecto)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_ES "Sensibilidad del ratón"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_ES "Configura la sensibilidad del dispositivo «PCFX Mouse». Un valor elevado hará que el cursor del ratón se mueva más rápido."
#define OPTION_VAL_1_00_ES "1,00"
#define OPTION_VAL_1_25_ES "1,25"
#define OPTION_VAL_1_50_ES "1,50"
#define OPTION_VAL_1_75_ES "1,75"
#define OPTION_VAL_2_00_ES "2,00"
#define OPTION_VAL_2_25_ES "2,25"
#define OPTION_VAL_2_50_ES "2,50"
#define OPTION_VAL_2_75_ES "2,75"
#define OPTION_VAL_3_00_ES "3,00"
#define OPTION_VAL_3_25_ES "3,25"
#define OPTION_VAL_3_50_ES "3,50"
#define OPTION_VAL_3_75_ES "3,75"
#define OPTION_VAL_4_00_ES "4,00"
#define OPTION_VAL_4_25_ES "4,25"
#define OPTION_VAL_4_50_ES "4,50"
#define OPTION_VAL_4_75_ES "4,75"
#define OPTION_VAL_5_00_ES "5,00"

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

#define PCFX_CDIMAGECACHE_LABEL_FI "CD-levykuvan välimuisti (Uudelleenkäynnistys vaaditaan)"
#define PCFX_CDIMAGECACHE_INFO_0_FI "Lataa koko levykuva muistiin käynnistyksen yhteydessä. Voi mahdollisesti lyhentää latausaikoja kasvavan käynnistysajan kustannuksella."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_FI NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_FI NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_FI NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_FI NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_FI NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_FI NULL
#define PCFX_RESAMP_QUALITY_LABEL_FI "Äänen laatu (uudelleenkäynnistys vaaditaan)"
#define PCFX_RESAMP_QUALITY_INFO_0_FI NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_FI NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_FI NULL
#define PCFX_NOSPRITELIMIT_LABEL_FI NULL
#define PCFX_NOSPRITELIMIT_INFO_0_FI "Poista laitteiston 16-spriten-per-juova raja. VAROITUS: Saattaa aiheuttaa grafiikkaa virheitä joissakin peleissä."
#define PCFX_INITIAL_SCANLINE_LABEL_FI "Ensimmäinen juova"
#define PCFX_INITIAL_SCANLINE_INFO_0_FI "Ensimmäinen renderöity juova. Suuremmat arvot rajaavat kuvan yläreunan."
#define OPTION_VAL_4_FI "4 (Oletus)"
#define PCFX_LAST_SCANLINE_LABEL_FI "Viimeinen juova"
#define PCFX_LAST_SCANLINE_INFO_0_FI "Viimeinen renderöity juova. pienemmät arvot rajaavat kuvan alareunan."
#define OPTION_VAL_235_FI "235 (Oletus)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_FI "Hiiren herkkyys"
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

#define PCFX_CDIMAGECACHE_LABEL_FR "Mise en cache des images CD (Redémarrage requis)"
#define PCFX_CDIMAGECACHE_INFO_0_FR "Charger l'image disque complète dans la mémoire au démarrage. Peut potentiellement diminuer le temps de chargement au prix d'une augmentation du temps de démarrage."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_FR "Grande largeur d'horloge pour les pixels (Redémarrage requis)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_FR "Largeur émulée du mode d'horloge d'affichage des pixels à 7,16 MHz. Des valeurs plus basses sont plus rapides, mais provoqueront un certain degré de distorsion des pixels."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_FR "Supprimer les clics de réinitialisation du canal (Redémarrage requis)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_FR "Hack pour supprimer les clics audio causés par les réinitialisations forcées des canaux."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_FR "Émuler le Codec buggé (Redémaragge requis)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_FR "Hack qui émule un encodeur ADPCM buggé utilisé pour l'ADPCM de certains jeux."
#define PCFX_RESAMP_QUALITY_LABEL_FR "Qualité du son (Redémarrage requis)"
#define PCFX_RESAMP_QUALITY_INFO_0_FR "Des valeurs plus élevées correspondent à un meilleur rapport de signal/bruit et à une meilleure préservation des fréquences plus élevées ('luminosité'), au prix d'une complexité de calcul accrue et d'une augmentation négligeable de la latence."
#define PCFX_RAINBOW_CHROMAIP_LABEL_FR "Interpolation bilinéaire du canal chromatique (Redémarrage requis)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_FR "Activer l'interpolation bilinéaire sur le canal chromatique de la sortie RAINBOW YUV. Peut causer des bugs graphiques avec certains jeux."
#define PCFX_NOSPRITELIMIT_LABEL_FR "Aucune limite de sprites (Redémarrage requis)"
#define PCFX_NOSPRITELIMIT_INFO_0_FR "Supprimer la limite matérielle de 16 sprites par ligne de balayage. ATTENTION : peut causer des problèmes graphiques sur certains jeux."
#define PCFX_INITIAL_SCANLINE_LABEL_FR "Ligne de balayage initiale"
#define PCFX_INITIAL_SCANLINE_INFO_0_FR "Première ligne de balayage rendue. Des valeurs plus élevées recadreront le haut de l'image."
#define OPTION_VAL_4_FR "4 (par défaut)"
#define PCFX_LAST_SCANLINE_LABEL_FR "Dernière ligne de balayage"
#define PCFX_LAST_SCANLINE_INFO_0_FR "Dernière ligne de balayage rendue. Des valeurs moins élevées recadreront le bas de l'image."
#define OPTION_VAL_235_FR "235 (par défaut)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_FR "Sensibilité de la souris"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_FR "Configurer la sensibilité du type de périphérique 'Souris PCFX' (PCFX Mouse). Des valeurs plus élevées rendront le curseur de la souris plus rapide."
#define OPTION_VAL_1_00_FR "1,00"
#define OPTION_VAL_1_25_FR "1,25"
#define OPTION_VAL_1_50_FR "1,50"
#define OPTION_VAL_1_75_FR "1,75"
#define OPTION_VAL_2_00_FR "2,00"
#define OPTION_VAL_2_25_FR "2,25"
#define OPTION_VAL_2_50_FR "2,50"
#define OPTION_VAL_2_75_FR "2,75"
#define OPTION_VAL_3_00_FR "3,00"
#define OPTION_VAL_3_25_FR "3,25"
#define OPTION_VAL_3_50_FR "3,50"
#define OPTION_VAL_3_75_FR "3,75"
#define OPTION_VAL_4_00_FR "4,00"
#define OPTION_VAL_4_25_FR "4,25"
#define OPTION_VAL_4_50_FR "4,50"
#define OPTION_VAL_4_75_FR "4,75"
#define OPTION_VAL_5_00_FR "5,00"

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

/* RETRO_LANGUAGE_HR */

#define PCFX_CDIMAGECACHE_LABEL_HR NULL
#define PCFX_CDIMAGECACHE_INFO_0_HR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_HR NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_HR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_HR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_HR NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_HR NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_HR NULL
#define PCFX_RESAMP_QUALITY_LABEL_HR NULL
#define PCFX_RESAMP_QUALITY_INFO_0_HR NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_HR NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_HR NULL
#define PCFX_NOSPRITELIMIT_LABEL_HR NULL
#define PCFX_NOSPRITELIMIT_INFO_0_HR NULL
#define PCFX_INITIAL_SCANLINE_LABEL_HR NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_HR NULL
#define OPTION_VAL_4_HR NULL
#define PCFX_LAST_SCANLINE_LABEL_HR NULL
#define PCFX_LAST_SCANLINE_INFO_0_HR NULL
#define OPTION_VAL_235_HR NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_HR NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_HR NULL
#define OPTION_VAL_1_00_HR NULL
#define OPTION_VAL_1_25_HR NULL
#define OPTION_VAL_1_50_HR NULL
#define OPTION_VAL_1_75_HR NULL
#define OPTION_VAL_2_00_HR NULL
#define OPTION_VAL_2_25_HR NULL
#define OPTION_VAL_2_50_HR NULL
#define OPTION_VAL_2_75_HR NULL
#define OPTION_VAL_3_00_HR NULL
#define OPTION_VAL_3_25_HR NULL
#define OPTION_VAL_3_50_HR NULL
#define OPTION_VAL_3_75_HR NULL
#define OPTION_VAL_4_00_HR NULL
#define OPTION_VAL_4_25_HR NULL
#define OPTION_VAL_4_50_HR NULL
#define OPTION_VAL_4_75_HR NULL
#define OPTION_VAL_5_00_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hr[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_HR,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_HR,
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
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_HR,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_HR,
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
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_HR,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_HR,
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
      PCFX_EMULATE_BUGGY_CODEC_LABEL_HR,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_HR,
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
      PCFX_RESAMP_QUALITY_LABEL_HR,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_HR,
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
      PCFX_RAINBOW_CHROMAIP_LABEL_HR,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_HR,
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
      PCFX_NOSPRITELIMIT_LABEL_HR,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_HR,
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
      PCFX_INITIAL_SCANLINE_LABEL_HR,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_HR,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_HR },
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
      PCFX_LAST_SCANLINE_LABEL_HR,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_HR,
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
         { "235",   OPTION_VAL_235_HR },
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
      PCFX_MOUSE_SENSITIVITY_LABEL_HR,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_HR,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_HR },
         { "1.25",   OPTION_VAL_1_25_HR },
         { "1.50",   OPTION_VAL_1_50_HR },
         { "1.75",   OPTION_VAL_1_75_HR },
         { "2.00",   OPTION_VAL_2_00_HR },
         { "2.25",   OPTION_VAL_2_25_HR },
         { "2.50",   OPTION_VAL_2_50_HR },
         { "2.75",   OPTION_VAL_2_75_HR },
         { "3.00",   OPTION_VAL_3_00_HR },
         { "3.25",   OPTION_VAL_3_25_HR },
         { "3.50",   OPTION_VAL_3_50_HR },
         { "3.75",   OPTION_VAL_3_75_HR },
         { "4.00",   OPTION_VAL_4_00_HR },
         { "4.25",   OPTION_VAL_4_25_HR },
         { "4.50",   OPTION_VAL_4_50_HR },
         { "4.75",   OPTION_VAL_4_75_HR },
         { "5.00",   OPTION_VAL_5_00_HR },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hr = {
   option_cats_hr,
   option_defs_hr
};

/* RETRO_LANGUAGE_HU */

#define PCFX_CDIMAGECACHE_LABEL_HU "Gyorsítótár a CD képfájlhoz (újraindítás szükséges)"
#define PCFX_CDIMAGECACHE_INFO_0_HU "Indításkor beolvassa a teljes képfájlt a memóriába. Csökkentheti a töltési időket a lassabb indulásért cserébe."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_HU "Nagy szélességű pixelórajel (újraindítás szükséges)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_HU "A 7.16 MHz-es pixelórajel mód emulált szélessége. Az alacsonyabb értékek gyorsabbak, de némi pixeltorzulást eredményeznek."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_HU "A csatorna reset kattanások elnyomása (újraindítás szükséges)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_HU "A kényszerített csatornaújraindítások által kiváltott hallható kattanások elnyomása."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_HU "Hibás codec emulálása (újraindítás szükséges)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_HU "Hibás ADPCM kódoló emulálása, amelyet néhány játék használ."
#define PCFX_RESAMP_QUALITY_LABEL_HU "Hangminőség (újraindítás szükséges)"
#define PCFX_RESAMP_QUALITY_INFO_0_HU "A nagyobb értékek jobb jel-zaj arányt és a magas frekvenciák (\"fényesség\") jobb megőrzését jelentik, nagyobb számításigény és a késleltetés elhanyagolható növekedése árán."
#define PCFX_RAINBOW_CHROMAIP_LABEL_HU "Színcsatorna kettős lineáris interpolációja (újraindítás szükséges)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_HU "A RAINBOW YUV kimenet színcsatornájának kettős lináris interpolációja. Néhány játéknál grafikai hibákat okozhat."
#define PCFX_NOSPRITELIMIT_LABEL_HU "Nincs sprite limit (újraindítás szükséges)"
#define PCFX_NOSPRITELIMIT_INFO_0_HU "Megszünteti a hardver soronként legfeljebb 16 sprite-os korlátozását. Figyelem: grafikus hibákat okozhat néhány játéknál."
#define PCFX_INITIAL_SCANLINE_LABEL_HU "Kezdő scanline"
#define PCFX_INITIAL_SCANLINE_INFO_0_HU "Az első megjelenített scanline. Nagyobb értékek többet vágnak a kép tetejéből."
#define OPTION_VAL_4_HU "4 (alapértelmezett)"
#define PCFX_LAST_SCANLINE_LABEL_HU "Utolsó scanline"
#define PCFX_LAST_SCANLINE_INFO_0_HU "Az utolsó megjelenített scanline. Nagyobb értékek többet vágnak a kép aljából."
#define OPTION_VAL_235_HU "235 (alapértelmezett)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_HU "Egér érzékenysége"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_HU "A \"PCFX Egér\" eszköztípus érzékenysége. Nagyobb értékek esetén az egérkurzor gyorsabban mozog."
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

#define PCFX_CDIMAGECACHE_LABEL_IT "Cache Immagine CD (Riavvio Richiesto)"
#define PCFX_CDIMAGECACHE_INFO_0_IT "Carica l'immagine completa in memoria all'avvio. Può potenzialmente diminuire i tempi di caricamento al costo di un aumento del tempo di avvio."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_IT "Alta Larghezza Dotclock (RiavvioRichiesto)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_IT "Larghezza emulata per la modalità dot-clock 7.16 MHz. Valori inferiori sono più veloci, ma causeranno un certo grado di distorsione dei pixel."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_IT "Sopprimi I Clic Di Ripristino Dei Canali (Riavvio Richiesto)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_IT "Hack per sopprimere clic audio causati da riavvio del canale forzato."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_IT "Emula Codec Buggato (Riavvio Richiesto)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_IT "Hack che emula un codificatore ADPCM buggy utilizzato per l'ADPCM di alcuni giochi."
#define PCFX_RESAMP_QUALITY_LABEL_IT "Qualità Del Suono (Riavvio Richiesto)"
#define PCFX_RESAMP_QUALITY_INFO_0_IT "Valori più elevati corrispondono a un migliore rapporto segnale-rumore e una migliore conservazione delle frequenze più elevate ('luminosità'), a costo di una maggiore complessità computazionale e di un aumento trascurabile della latenza."
#define PCFX_RAINBOW_CHROMAIP_LABEL_IT "Interpolazione Bilineare Canale Croma (Riavvio Richiesto)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_IT "Abilita l'interpolazione bilineare sul canale cromatico dell'uscita RAINBOW YUV. Può causare problemi grafici con alcuni giochi."
#define PCFX_NOSPRITELIMIT_LABEL_IT "Nessun Limite Di Sprite (Riavvio Richiesto)"
#define PCFX_NOSPRITELIMIT_INFO_0_IT "Rimuovere 16-sprites-per-scanline limite hardware. ATTENZIONE: Può causare problemi grafici su alcuni giochi."
#define PCFX_INITIAL_SCANLINE_LABEL_IT "Scanline Iniziale"
#define PCFX_INITIAL_SCANLINE_INFO_0_IT "Prima scanline renderizzata. Valori più alti ritaglieranno la parte superiore dell'immagine."
#define OPTION_VAL_4_IT "4 (Predefinito)"
#define PCFX_LAST_SCANLINE_LABEL_IT "Ultima Scanline"
#define PCFX_LAST_SCANLINE_INFO_0_IT "Ultima scanline renderizzata. I valori più bassi ritaglieranno la parte inferiore dell'immagine."
#define OPTION_VAL_235_IT "235 (Predefinito)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_IT "Sensibilità Mouse"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_IT "Configura la sensibilità del tipo di dispositivo 'PCFX Mouse'. Valori più alti renderanno il cursore del mouse più veloce."
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
#define OPTION_VAL_4_JA "4 (デフォルト)"
#define PCFX_LAST_SCANLINE_LABEL_JA NULL
#define PCFX_LAST_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_235_JA "235 (デフォルト)"
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

#define PCFX_CDIMAGECACHE_LABEL_KO "CD 이미지 캐시 (재시작 필요)"
#define PCFX_CDIMAGECACHE_INFO_0_KO "시작할 때 전체 이미지를 메모리에 불러옵니다. 시작 시간이 늘어나는 대신 로딩 시간을 잠재적으로 줄일 수 있습니다."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_KO "하이 도트클럭 폭 (재시작 필요)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_KO "7.16MHz 도트-클록 모드의 에뮬레이트된 폭입니다. 값이 낮을수록 빨라지지만 약간의 픽셀 왜곡이 발생할 수 있습니다."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_KO "채널 재설정 클릭 감소 (재시작 필요)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_KO "강제 채널 재설정으로 인한 오디오 클릭을 억제하는 핵입니다."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_KO "버기 코덱 에뮬레이션 (재시작 필요)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_KO "일부 게임의 ADPCM에 사용되는 버그가 있는 ADPCM 인코더를 에뮬레이트하는 핵입니다."
#define PCFX_RESAMP_QUALITY_LABEL_KO "사운드 품질 (재시작 필요)"
#define PCFX_RESAMP_QUALITY_INFO_0_KO "값이 높을수록 더 나은 신호 대비 잡음과 높은 주파수의 더 나은 보존이 가능하지만 계산의 복잡해지고 대기 시간이 증가합니다."
#define PCFX_RAINBOW_CHROMAIP_LABEL_KO "크로마 채널 이중선형보간 (재시작 필요)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_KO "RAINBOW YUV 출력의 크로마 채널에서 이중선형보간을 활성화합니다. 일부 게임에서 그래픽 결함이 발생할 수 있습니다."
#define PCFX_NOSPRITELIMIT_LABEL_KO "스프라이트 제한 해제 (재시작 필요)"
#define PCFX_NOSPRITELIMIT_INFO_0_KO "스캔라인 당 16개의 스프라이트 하드웨어 제한을 제거합니다. 경고: 일부 게임에서 그래픽 결함이 발생할 수 있습니다."
#define PCFX_INITIAL_SCANLINE_LABEL_KO "최초 스캔라인"
#define PCFX_INITIAL_SCANLINE_INFO_0_KO "첫 번째 렌더링 되는 스캔라인입니다. 값이 높으면 이미지 상단이 잘립니다."
#define OPTION_VAL_4_KO "4 (기본)"
#define PCFX_LAST_SCANLINE_LABEL_KO "마지막 스캔라인"
#define PCFX_LAST_SCANLINE_INFO_0_KO "마지막으로 렌더링 되는 스캔라인입니다. 값이 높으면 이미지 하단이 잘립니다."
#define OPTION_VAL_235_KO "235 (기본)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_KO "마우스 감도"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_KO "'PCFX 마우스' 장치의 감도를 구성합니다. 값이 높을수록 마우스 커서가 더 빠르게 움직입니다."
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

/* RETRO_LANGUAGE_NO */

#define PCFX_CDIMAGECACHE_LABEL_NO NULL
#define PCFX_CDIMAGECACHE_INFO_0_NO NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_NO NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_NO NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_NO NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_NO NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_NO NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_NO NULL
#define PCFX_RESAMP_QUALITY_LABEL_NO NULL
#define PCFX_RESAMP_QUALITY_INFO_0_NO NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_NO NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_NO NULL
#define PCFX_NOSPRITELIMIT_LABEL_NO NULL
#define PCFX_NOSPRITELIMIT_INFO_0_NO NULL
#define PCFX_INITIAL_SCANLINE_LABEL_NO NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_NO NULL
#define OPTION_VAL_4_NO NULL
#define PCFX_LAST_SCANLINE_LABEL_NO NULL
#define PCFX_LAST_SCANLINE_INFO_0_NO NULL
#define OPTION_VAL_235_NO NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_NO NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_NO NULL
#define OPTION_VAL_1_00_NO NULL
#define OPTION_VAL_1_25_NO NULL
#define OPTION_VAL_1_50_NO NULL
#define OPTION_VAL_1_75_NO NULL
#define OPTION_VAL_2_00_NO NULL
#define OPTION_VAL_2_25_NO NULL
#define OPTION_VAL_2_50_NO NULL
#define OPTION_VAL_2_75_NO NULL
#define OPTION_VAL_3_00_NO NULL
#define OPTION_VAL_3_25_NO NULL
#define OPTION_VAL_3_50_NO NULL
#define OPTION_VAL_3_75_NO NULL
#define OPTION_VAL_4_00_NO NULL
#define OPTION_VAL_4_25_NO NULL
#define OPTION_VAL_4_50_NO NULL
#define OPTION_VAL_4_75_NO NULL
#define OPTION_VAL_5_00_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_NO,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_NO,
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
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_NO,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_NO,
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
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_NO,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_NO,
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
      PCFX_EMULATE_BUGGY_CODEC_LABEL_NO,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_NO,
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
      PCFX_RESAMP_QUALITY_LABEL_NO,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_NO,
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
      PCFX_RAINBOW_CHROMAIP_LABEL_NO,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_NO,
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
      PCFX_NOSPRITELIMIT_LABEL_NO,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_NO,
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
      PCFX_INITIAL_SCANLINE_LABEL_NO,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_NO,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_NO },
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
      PCFX_LAST_SCANLINE_LABEL_NO,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_NO,
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
         { "235",   OPTION_VAL_235_NO },
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
      PCFX_MOUSE_SENSITIVITY_LABEL_NO,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_NO,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_NO },
         { "1.25",   OPTION_VAL_1_25_NO },
         { "1.50",   OPTION_VAL_1_50_NO },
         { "1.75",   OPTION_VAL_1_75_NO },
         { "2.00",   OPTION_VAL_2_00_NO },
         { "2.25",   OPTION_VAL_2_25_NO },
         { "2.50",   OPTION_VAL_2_50_NO },
         { "2.75",   OPTION_VAL_2_75_NO },
         { "3.00",   OPTION_VAL_3_00_NO },
         { "3.25",   OPTION_VAL_3_25_NO },
         { "3.50",   OPTION_VAL_3_50_NO },
         { "3.75",   OPTION_VAL_3_75_NO },
         { "4.00",   OPTION_VAL_4_00_NO },
         { "4.25",   OPTION_VAL_4_25_NO },
         { "4.50",   OPTION_VAL_4_50_NO },
         { "4.75",   OPTION_VAL_4_75_NO },
         { "5.00",   OPTION_VAL_5_00_NO },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
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
#define OPTION_VAL_4_PL "4 (domyślnie)"
#define PCFX_LAST_SCANLINE_LABEL_PL NULL
#define PCFX_LAST_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_235_PL "235 (domyślnie)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_PL "Czułość myszy"
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

#define PCFX_CDIMAGECACHE_LABEL_PT_BR "Cache de imagens do CD (requer reinício)"
#define PCFX_CDIMAGECACHE_INFO_0_PT_BR "Carrega a imagem completa na memória na inicialização. Eventualmente, pode diminuir o tempo de carregamento ao custo de um tempo de inicialização maior."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_PT_BR "Frequência de píxel horizontal veloz (requer reinicio)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_PT_BR NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_PT_BR "Remover cliques de redefinições de canal (requer reinício)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_PT_BR "Hack para remover cliques de áudio causados por redefinições de canal forçadas."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_PT_BR "Emular Codec defeituoso (requer reinício)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_PT_BR "Hack que emula um codificador de ADPCM defeituoso usado por alguns jogos."
#define PCFX_RESAMP_QUALITY_LABEL_PT_BR "Qualidade do áudio (requer reinício)"
#define PCFX_RESAMP_QUALITY_INFO_0_PT_BR NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_PT_BR "Interpolação bilinear de canal cromático (requer reinício)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_PT_BR "Habilita interpolação bilinear no canal crómatico da saída RAINBOW YUV. Pode causar falhas gráficas em alguns jogos."
#define PCFX_NOSPRITELIMIT_LABEL_PT_BR "Sem limite de sprite (requer reinício)"
#define PCFX_NOSPRITELIMIT_INFO_0_PT_BR "Remove o limite de hardware de 16 sprites por linha de verificação. ATENÇÃO: pode causar falhas gráficas em alguns jogos."
#define PCFX_INITIAL_SCANLINE_LABEL_PT_BR "Linha de verificação inicial"
#define PCFX_INITIAL_SCANLINE_INFO_0_PT_BR "Primeira linha de verificação renderizada. Valores maiores cortarão a parte superior da imagem."
#define OPTION_VAL_4_PT_BR "4 (padrão)"
#define PCFX_LAST_SCANLINE_LABEL_PT_BR "Linha de verificação final"
#define PCFX_LAST_SCANLINE_INFO_0_PT_BR "Última linha de verificação renderizada. Valores menores cortarão a parte inferior da imagem."
#define OPTION_VAL_235_PT_BR "235 (padrão)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_PT_BR "Sensibilidade do mouse"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_PT_BR "Configura a sensibilidade do dispositivo \"PCFX Mouse\". Valores maiores tornarão a movimentação do cursor do mouse mais rápida."
#define OPTION_VAL_1_00_PT_BR "1,00"
#define OPTION_VAL_1_25_PT_BR "1,25"
#define OPTION_VAL_1_50_PT_BR "1,50"
#define OPTION_VAL_1_75_PT_BR "1,75"
#define OPTION_VAL_2_00_PT_BR "2,00"
#define OPTION_VAL_2_25_PT_BR "2,25"
#define OPTION_VAL_2_50_PT_BR "2,50"
#define OPTION_VAL_2_75_PT_BR "2,75"
#define OPTION_VAL_3_00_PT_BR "3,00"
#define OPTION_VAL_3_25_PT_BR "3,25"
#define OPTION_VAL_3_50_PT_BR "3,50"
#define OPTION_VAL_3_75_PT_BR "3,75"
#define OPTION_VAL_4_00_PT_BR "4,00"
#define OPTION_VAL_4_25_PT_BR "4,25"
#define OPTION_VAL_4_50_PT_BR "4,50"
#define OPTION_VAL_4_75_PT_BR "4,75"
#define OPTION_VAL_5_00_PT_BR "5,00"

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

#define PCFX_CDIMAGECACHE_LABEL_PT_PT "Cache da Imagem do CD (Reinicialização necessária)"
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
#define OPTION_VAL_4_PT_PT "4 (Padrão)"
#define PCFX_LAST_SCANLINE_LABEL_PT_PT NULL
#define PCFX_LAST_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_235_PT_PT "235 (Padrão)"
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

/* RETRO_LANGUAGE_RU */

#define PCFX_CDIMAGECACHE_LABEL_RU "Кэшировать образ CD (требуется перезапуск)"
#define PCFX_CDIMAGECACHE_INFO_0_RU "При запуске загружать полный образ диска в память. Может снижать время загрузок, но увеличивает время запуска."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_RU "Ширина высокой частоты пикселизации (перезапуск)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_RU "Эмулируемая ширина в режиме частоты пикселизации 7.16 МГц. Более низкие значения быстрее, но могут вызывать искажение пикселей."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_RU "Подавлять щелчки при сбросах канала (требуется перезапуск)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_RU "Хак, подавляющий щелчки, вызванные принудительными сбросами канала."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_RU "Эмулировать ошибки кодека (требуется перезапуск)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_RU "Хак, эмулирующий ошибки ADPCM-кодировщика, используемого для ADPCM в некоторых играх."
#define PCFX_RESAMP_QUALITY_LABEL_RU "Качество звука (требуется перезапуск)"
#define PCFX_RESAMP_QUALITY_INFO_0_RU "Более высокие значения улучшают соотношение сигнал-шум и передачу высоких частот (\"яркости\"), но повышают сложность вычислений и незначительно увеличивают задержку."
#define PCFX_RAINBOW_CHROMAIP_LABEL_RU "Билинейная интерполяция цветности (требуется перезапуск)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_RU "Включает билинейную интерполяцию для канала цветности на выходе RAINBOW YUV. В некоторых играх может вызывать графические баги."
#define PCFX_NOSPRITELIMIT_LABEL_RU "Без ограничения спрайтов (требуется перезапуск)"
#define PCFX_NOSPRITELIMIT_INFO_0_RU "Снимает аппаратное ограничение в 16 спрайтов на линии развёртки. ВНИМАНИЕ: в некоторых играх может вызывать графические баги."
#define PCFX_INITIAL_SCANLINE_LABEL_RU "Первая строка развёртки"
#define PCFX_INITIAL_SCANLINE_INFO_0_RU "Начальная отображаемая строка развёртки. Более высокие значения обрезают верхнюю часть изображения."
#define OPTION_VAL_4_RU "4 (по умолчанию)"
#define PCFX_LAST_SCANLINE_LABEL_RU "Последняя строка развёртки"
#define PCFX_LAST_SCANLINE_INFO_0_RU "Последняя отображаемая строка развёртки. Более высокие значения обрезают нижнюю часть изображения."
#define OPTION_VAL_235_RU "235 (по умолчанию)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_RU "Чувствительность мыши"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_RU "Настройка чувствительности устройства типа 'PCFX Mouse'. Более высокие значения повышают скорость перемещения курсора мыши."
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
#define OPTION_VAL_4_SK "4 (predvolené)"
#define PCFX_LAST_SCANLINE_LABEL_SK NULL
#define PCFX_LAST_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_235_SK "235 (predvolené)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_SK "Citlivosť myši"
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

#define PCFX_CDIMAGECACHE_LABEL_TR "CD Kalıbı Önbelleği (Yeniden Başlatılmalı)"
#define PCFX_CDIMAGECACHE_INFO_0_TR "Başlangıç sırasında bütün kalıbı hafızaya yükler. Başlangıç sürecini uzatmak pahasına oyundaki yüklenme sürelerini kısaltabilir."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_TR "Yüksek Nokta Saat Genişliği (Yeniden Başlatılmalı)"
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_TR "7.16 MHz nokta saati kipi için taklit edilmiş genişlik. Daha düşük değerler daha hızlıdır, ancak bir dereceye kadar piksel bozulmasına neden olur."
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_TR "Kanal Sıfırlama Tıklamalarını Bastır (Yeniden Başlatılmalı)"
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_TR "Zorla kanal sıfırlamalarının neden olduğu ses tıklamalarını bastırmak için geliştirme."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_TR "Buggy Çözücü Taklidi (Yeniden Başlatılmalı)"
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_TR "Bazı oyunlarda ADPCM için kullanılan 'buggy ADPCM' kodlayıcısını taklit eden gelişitirici."
#define PCFX_RESAMP_QUALITY_LABEL_TR "Ses Kalitesi (Yeniden Başlatılmalı)"
#define PCFX_RESAMP_QUALITY_INFO_0_TR "Daha yüksek değerler, artan hesaplama karmaşıklığı ve gecikmede tölere edilebilir artış pahasına daha iyi gürültü sinyali ve daha yüksek frekansların (parlaklık) daha iyi korunmasına karşılık gelir."
#define PCFX_RAINBOW_CHROMAIP_LABEL_TR "Chroma Kanalı Doğrusal Ara Değer (Yeniden Başlatılmalı)"
#define PCFX_RAINBOW_CHROMAIP_INFO_0_TR "RAINBOW YUV çıktısının renk kanalında çift doğrusal ara değeri etkinleştirin. Bazı oyunlarda grafik hatalarına neden olabilir."
#define PCFX_NOSPRITELIMIT_LABEL_TR "Hareket Sınırını Kaldır (Yeniden Başlatılmalı)"
#define PCFX_NOSPRITELIMIT_INFO_0_TR "Tarama çizgisi başına 16 hareket donanım sınırını kaldırır. UYARI: Bazı oyunlarda bozulmlara sebep olabilir."
#define PCFX_INITIAL_SCANLINE_LABEL_TR "İlk Tarama Çizgisi"
#define PCFX_INITIAL_SCANLINE_INFO_0_TR "İlk işlenen tarama çizgisi. Yükseltilen değerler görüntünün üstünü kırpacaktır."
#define OPTION_VAL_4_TR "4 (Varsayılan)"
#define PCFX_LAST_SCANLINE_LABEL_TR "Son Tarama Çizgisi"
#define PCFX_LAST_SCANLINE_INFO_0_TR "Son işlenen tarama çizgisi. Düşürülen değerler görüntünün alt kısmını kırpacaktır."
#define OPTION_VAL_235_TR "235 (Varsayılan)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_TR "Fare Hassasiyeti"
#define PCFX_MOUSE_SENSITIVITY_INFO_0_TR "'PCFX Fare'  cihaz türünün hassasiyetini yapılandırın. Daha yüksek değerler, fare imlecinin daha hızlı hareket etmesini sağlar."
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

#define PCFX_CDIMAGECACHE_LABEL_UK "Кеш образу CD (потрібен перезапуск)"
#define PCFX_CDIMAGECACHE_INFO_0_UK "Завантажувати повне зображення в пам'ять під час запуску. Може зменшувати час завантаження за рахунок збільшення часу запуску."
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_UK NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_UK NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_UK NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_UK "Хак для придушення звукових клацань, спричинених примусовим скиданням каналів."
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_UK NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_UK NULL
#define PCFX_RESAMP_QUALITY_LABEL_UK "Якість звуку (потрібен перезапуск)"
#define PCFX_RESAMP_QUALITY_INFO_0_UK NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_UK NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_UK NULL
#define PCFX_NOSPRITELIMIT_LABEL_UK NULL
#define PCFX_NOSPRITELIMIT_INFO_0_UK NULL
#define PCFX_INITIAL_SCANLINE_LABEL_UK NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_4_UK "4 (за замовчуванням)"
#define PCFX_LAST_SCANLINE_LABEL_UK NULL
#define PCFX_LAST_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_235_UK "235 (за замовчуванням)"
#define PCFX_MOUSE_SENSITIVITY_LABEL_UK "Чутливість миші"
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

/* RETRO_LANGUAGE_VAL */

#define PCFX_CDIMAGECACHE_LABEL_VAL NULL
#define PCFX_CDIMAGECACHE_INFO_0_VAL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_VAL NULL
#define PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_VAL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_VAL NULL
#define PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_VAL NULL
#define PCFX_EMULATE_BUGGY_CODEC_LABEL_VAL NULL
#define PCFX_EMULATE_BUGGY_CODEC_INFO_0_VAL NULL
#define PCFX_RESAMP_QUALITY_LABEL_VAL NULL
#define PCFX_RESAMP_QUALITY_INFO_0_VAL NULL
#define PCFX_RAINBOW_CHROMAIP_LABEL_VAL NULL
#define PCFX_RAINBOW_CHROMAIP_INFO_0_VAL NULL
#define PCFX_NOSPRITELIMIT_LABEL_VAL NULL
#define PCFX_NOSPRITELIMIT_INFO_0_VAL NULL
#define PCFX_INITIAL_SCANLINE_LABEL_VAL NULL
#define PCFX_INITIAL_SCANLINE_INFO_0_VAL NULL
#define OPTION_VAL_4_VAL NULL
#define PCFX_LAST_SCANLINE_LABEL_VAL NULL
#define PCFX_LAST_SCANLINE_INFO_0_VAL NULL
#define OPTION_VAL_235_VAL NULL
#define PCFX_MOUSE_SENSITIVITY_LABEL_VAL NULL
#define PCFX_MOUSE_SENSITIVITY_INFO_0_VAL NULL
#define OPTION_VAL_1_00_VAL "1,00"
#define OPTION_VAL_1_25_VAL "1,25"
#define OPTION_VAL_1_50_VAL "1,50"
#define OPTION_VAL_1_75_VAL "1,75"
#define OPTION_VAL_2_00_VAL "2,00"
#define OPTION_VAL_2_25_VAL "2,25"
#define OPTION_VAL_2_50_VAL "2,50"
#define OPTION_VAL_2_75_VAL "2,75"
#define OPTION_VAL_3_00_VAL "3,00"
#define OPTION_VAL_3_25_VAL "3,25"
#define OPTION_VAL_3_50_VAL "3,50"
#define OPTION_VAL_3_75_VAL "3,75"
#define OPTION_VAL_4_00_VAL "4,00"
#define OPTION_VAL_4_25_VAL "4,25"
#define OPTION_VAL_4_50_VAL "4,50"
#define OPTION_VAL_4_75_VAL "4,75"
#define OPTION_VAL_5_00_VAL "5,00"

struct retro_core_option_v2_category option_cats_val[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
   {
      "pcfx_cdimagecache",
      PCFX_CDIMAGECACHE_LABEL_VAL,
      NULL,
      PCFX_CDIMAGECACHE_INFO_0_VAL,
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
      PCFX_HIGH_DOTCLOCK_WIDTH_LABEL_VAL,
      NULL,
      PCFX_HIGH_DOTCLOCK_WIDTH_INFO_0_VAL,
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
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_LABEL_VAL,
      NULL,
      PCFX_SUPPRESS_CHANNEL_RESET_CLICKS_INFO_0_VAL,
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
      PCFX_EMULATE_BUGGY_CODEC_LABEL_VAL,
      NULL,
      PCFX_EMULATE_BUGGY_CODEC_INFO_0_VAL,
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
      PCFX_RESAMP_QUALITY_LABEL_VAL,
      NULL,
      PCFX_RESAMP_QUALITY_INFO_0_VAL,
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
      PCFX_RAINBOW_CHROMAIP_LABEL_VAL,
      NULL,
      PCFX_RAINBOW_CHROMAIP_INFO_0_VAL,
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
      PCFX_NOSPRITELIMIT_LABEL_VAL,
      NULL,
      PCFX_NOSPRITELIMIT_INFO_0_VAL,
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
      PCFX_INITIAL_SCANLINE_LABEL_VAL,
      NULL,
      PCFX_INITIAL_SCANLINE_INFO_0_VAL,
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  OPTION_VAL_4_VAL },
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
      PCFX_LAST_SCANLINE_LABEL_VAL,
      NULL,
      PCFX_LAST_SCANLINE_INFO_0_VAL,
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
         { "235",   OPTION_VAL_235_VAL },
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
      PCFX_MOUSE_SENSITIVITY_LABEL_VAL,
      NULL,
      PCFX_MOUSE_SENSITIVITY_INFO_0_VAL,
      NULL,
      NULL,
      {
         { "1.00",   OPTION_VAL_1_00_VAL },
         { "1.25",   OPTION_VAL_1_25_VAL },
         { "1.50",   OPTION_VAL_1_50_VAL },
         { "1.75",   OPTION_VAL_1_75_VAL },
         { "2.00",   OPTION_VAL_2_00_VAL },
         { "2.25",   OPTION_VAL_2_25_VAL },
         { "2.50",   OPTION_VAL_2_50_VAL },
         { "2.75",   OPTION_VAL_2_75_VAL },
         { "3.00",   OPTION_VAL_3_00_VAL },
         { "3.25",   OPTION_VAL_3_25_VAL },
         { "3.50",   OPTION_VAL_3_50_VAL },
         { "3.75",   OPTION_VAL_3_75_VAL },
         { "4.00",   OPTION_VAL_4_00_VAL },
         { "4.25",   OPTION_VAL_4_25_VAL },
         { "4.50",   OPTION_VAL_4_50_VAL },
         { "4.75",   OPTION_VAL_4_75_VAL },
         { "5.00",   OPTION_VAL_5_00_VAL },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
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
#define OPTION_VAL_4_VN "4 (Mặc định)"
#define PCFX_LAST_SCANLINE_LABEL_VN NULL
#define PCFX_LAST_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_235_VN "235 (Mặc định)"
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