#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifndef HAVE_NO_LANGEXTRA
#include "libretro_core_options_intl.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

#define MAX_CORE_OPTIONS 32


struct retro_core_option_v2_category option_cats_us[] = {
   { NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_us[] = {
   {
      "pcfx_cdimagecache",
      "CD Image Cache (Restart Required)",
      NULL,
      "Load the complete image into memory at startup. Can potentially decrease loading times at the cost of an increased startup time.",
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
      "High Dotclock Width (Restart Required)",
      NULL,
      "Emulated width for 7.16 MHz dot-clock mode. Lower values are faster, but will cause some degree of pixel distortion.",
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
      "Suppress Channel Reset Clicks (Restart Required)",
      NULL,
      "Hack to suppress audio clicks caused by forced channel resets.",
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
      "Emulate Buggy Codec (Restart Required)",
      NULL,
      "Hack that emulates a buggy ADPCM encoder used for some games' ADPCM.",
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
      "Sound Quality (Restart Required)",
      NULL,
      "Higher values correspond to a better signal-to-noise ratio and better preservation of higher frequencies ('brightness'), at the cost of increased computational complexity and a negligible increase in latency.",
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
      "Chroma Channel Bilinear Interpolation  (Restart Required)",
      NULL,
      "Enable bilinear interpolation on the chroma channel of RAINBOW YUV output. May cause graphical glitches with some games.",
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
      "No Sprite Limit (Restart Required)",
      NULL,
      "Remove 16-sprites-per-scanline hardware limit. WARNING: May cause graphics glitching on some games.",
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
      "Initial Scanline",
      NULL,
      "First rendered scanline. Higher values will crop the top of the image.",
      NULL,
      NULL,
      {
         { "0", NULL },
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
         { "4",  "4 (Default)" },
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
      "Last Scanline",
      NULL,
      "Last rendered scanline. Lower values will crop the bottom of the image.",
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
         { "235",   "235 (Default)" },
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
      "Mouse Sensitivity",
      NULL,
      "Configure the sensitivity of the 'PCFX Mouse' device type. Higher values will make the mouse cursor move faster.",
      NULL,
      NULL,
      {
         { "1.00",   NULL },
         { "1.25",   NULL },
         { "1.50",   NULL },
         { "1.75",   NULL },
         { "2.00",   NULL },
         { "2.25",   NULL },
         { "2.50",   NULL },
         { "2.75",   NULL },
         { "3.00",   NULL },
         { "3.25",   NULL },
         { "3.50",   NULL },
         { "3.75",   NULL },
         { "4.00",   NULL },
         { "4.25",   NULL },
         { "4.50",   NULL },
         { "4.75",   NULL },
         { "5.00",   NULL },
         { NULL, NULL},
      },
      "1.25",
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};

struct retro_core_options_v2 options_us = {
   option_cats_us,
   option_defs_us
};

/*
 ********************************
 * Language Mapping
 ********************************
*/

#ifndef HAVE_NO_LANGEXTRA
struct retro_core_options_v2 *options_intl[RETRO_LANGUAGE_LAST] = {
   &options_us, /* RETRO_LANGUAGE_ENGLISH */
   &options_ja,      /* RETRO_LANGUAGE_JAPANESE */
   &options_fr,      /* RETRO_LANGUAGE_FRENCH */
   &options_es,      /* RETRO_LANGUAGE_SPANISH */
   &options_de,      /* RETRO_LANGUAGE_GERMAN */
   &options_it,      /* RETRO_LANGUAGE_ITALIAN */
   &options_nl,      /* RETRO_LANGUAGE_DUTCH */
   &options_pt_br,   /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   &options_pt_pt,   /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   &options_ru,      /* RETRO_LANGUAGE_RUSSIAN */
   &options_ko,      /* RETRO_LANGUAGE_KOREAN */
   &options_cht,     /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   &options_chs,     /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   &options_eo,      /* RETRO_LANGUAGE_ESPERANTO */
   &options_pl,      /* RETRO_LANGUAGE_POLISH */
   &options_vn,      /* RETRO_LANGUAGE_VIETNAMESE */
   &options_ar,      /* RETRO_LANGUAGE_ARABIC */
   &options_el,      /* RETRO_LANGUAGE_GREEK */
   &options_tr,      /* RETRO_LANGUAGE_TURKISH */
   &options_sk,      /* RETRO_LANGUAGE_SLOVAK */
   &options_fa,      /* RETRO_LANGUAGE_PERSIAN */
   &options_he,      /* RETRO_LANGUAGE_HEBREW */
   &options_ast,     /* RETRO_LANGUAGE_ASTURIAN */
   &options_fi,      /* RETRO_LANGUAGE_FINNISH */
   &options_id,      /* RETRO_LANGUAGE_INDONESIAN */
   &options_sv,      /* RETRO_LANGUAGE_SWEDISH */
   &options_uk,      /* RETRO_LANGUAGE_UKRAINIAN */
};
#endif

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should only be called inside retro_set_environment().
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb,
      bool *categories_supported)
{
   unsigned version  = 0;
#ifndef HAVE_NO_LANGEXTRA
   unsigned language = 0;
#endif

   if (!environ_cb || !categories_supported)
      return;

   *categories_supported = false;

   if (!environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version))
      version = 0;

   if (version >= 2)
   {
#ifndef HAVE_NO_LANGEXTRA
      struct retro_core_options_v2_intl core_options_intl;

      core_options_intl.us    = &options_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = options_intl[language];

      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2_INTL,
            &core_options_intl);
#else
      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2,
            &options_us);
#endif
   }
   else
   {
      size_t i, j;
      size_t option_index              = 0;
      size_t num_options               = 0;
      struct retro_core_option_definition
            *option_v1_defs_us         = NULL;
#ifndef HAVE_NO_LANGEXTRA
      size_t num_options_intl          = 0;
      struct retro_core_option_v2_definition
            *option_defs_intl          = NULL;
      struct retro_core_option_definition
            *option_v1_defs_intl       = NULL;
      struct retro_core_options_intl
            core_options_v1_intl;
#endif
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine total number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      if (version >= 1)
      {
         /* Allocate US array */
         option_v1_defs_us = (struct retro_core_option_definition *)
               calloc(num_options + 1, sizeof(struct retro_core_option_definition));

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            struct retro_core_option_v2_definition *option_def_us = &option_defs_us[i];
            struct retro_core_option_value *option_values         = option_def_us->values;
            struct retro_core_option_definition *option_v1_def_us = &option_v1_defs_us[i];
            struct retro_core_option_value *option_v1_values      = option_v1_def_us->values;

            option_v1_def_us->key           = option_def_us->key;
            option_v1_def_us->desc          = option_def_us->desc;
            option_v1_def_us->info          = option_def_us->info;
            option_v1_def_us->default_value = option_def_us->default_value;

            /* Values must be copied individually... */
            while (option_values->value)
            {
               option_v1_values->value = option_values->value;
               option_v1_values->label = option_values->label;

               option_values++;
               option_v1_values++;
            }
         }

#ifndef HAVE_NO_LANGEXTRA
         if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
             (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH) &&
             options_intl[language])
            option_defs_intl = options_intl[language]->definitions;

         if (option_defs_intl)
         {
            /* Determine number of intl options */
            while (true)
            {
               if (option_defs_intl[num_options_intl].key)
                  num_options_intl++;
               else
                  break;
            }

            /* Allocate intl array */
            option_v1_defs_intl = (struct retro_core_option_definition *)
                  calloc(num_options_intl + 1, sizeof(struct retro_core_option_definition));

            /* Copy parameters from option_defs_intl array */
            for (i = 0; i < num_options_intl; i++)
            {
               struct retro_core_option_v2_definition *option_def_intl = &option_defs_intl[i];
               struct retro_core_option_value *option_values           = option_def_intl->values;
               struct retro_core_option_definition *option_v1_def_intl = &option_v1_defs_intl[i];
               struct retro_core_option_value *option_v1_values        = option_v1_def_intl->values;

               option_v1_def_intl->key           = option_def_intl->key;
               option_v1_def_intl->desc          = option_def_intl->desc;
               option_v1_def_intl->info          = option_def_intl->info;
               option_v1_def_intl->default_value = option_def_intl->default_value;

               /* Values must be copied individually... */
               while (option_values->value)
               {
                  option_v1_values->value = option_values->value;
                  option_v1_values->label = option_values->label;

                  option_values++;
                  option_v1_values++;
               }
            }
         }

         core_options_v1_intl.us    = option_v1_defs_us;
         core_options_v1_intl.local = option_v1_defs_intl;

         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_v1_intl);
#else
         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS, option_v1_defs_us);
#endif
      }
      else
      {
         /* Allocate arrays */
         variables  = (struct retro_variable *)calloc(num_options + 1,
               sizeof(struct retro_variable));
         values_buf = (char **)calloc(num_options, sizeof(char *));

         if (!variables || !values_buf)
            goto error;

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            const char *key                        = option_defs_us[i].key;
            const char *desc                       = option_defs_us[i].desc;
            const char *default_value              = option_defs_us[i].default_value;
            struct retro_core_option_value *values = option_defs_us[i].values;
            size_t buf_len                         = 3;
            size_t default_index                   = 0;

            values_buf[i] = NULL;

            if (desc)
            {
               size_t num_values = 0;

               /* Determine number of values */
               while (true)
               {
                  if (values[num_values].value)
                  {
                     /* Check if this is the default value */
                     if (default_value)
                        if (strcmp(values[num_values].value, default_value) == 0)
                           default_index = num_values;

                     buf_len += strlen(values[num_values].value);
                     num_values++;
                  }
                  else
                     break;
               }

               /* Build values string */
               if (num_values > 0)
               {
                  buf_len += num_values - 1;
                  buf_len += strlen(desc);

                  values_buf[i] = (char *)calloc(buf_len, sizeof(char));
                  if (!values_buf[i])
                     goto error;

                  strcpy(values_buf[i], desc);
                  strcat(values_buf[i], "; ");

                  /* Default value goes first */
                  strcat(values_buf[i], values[default_index].value);

                  /* Add remaining values */
                  for (j = 0; j < num_values; j++)
                  {
                     if (j != default_index)
                     {
                        strcat(values_buf[i], "|");
                        strcat(values_buf[i], values[j].value);
                     }
                  }
               }
            }

            variables[option_index].key   = key;
            variables[option_index].value = values_buf[i];
            option_index++;
         }

         /* Set variables */
         environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);
      }

error:
      /* Clean up */

      if (option_v1_defs_us)
      {
         free(option_v1_defs_us);
         option_v1_defs_us = NULL;
      }

#ifndef HAVE_NO_LANGEXTRA
      if (option_v1_defs_intl)
      {
         free(option_v1_defs_intl);
         option_v1_defs_intl = NULL;
      }
#endif

      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
