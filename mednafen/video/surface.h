#ifndef __MDFN_SURFACE_H
#define __MDFN_SURFACE_H

#include "../mednafen-types.h"

// Core only supports 32bpp format

#if defined(WANT_32BPP)
#define RED_SHIFT 16
#define GREEN_SHIFT 8
#define BLUE_SHIFT 0
#define ALPHA_SHIFT 24
#define MAKECOLOR(r, g, b, a) ((r << RED_SHIFT) | (g << GREEN_SHIFT) | (b << BLUE_SHIFT) | (a << ALPHA_SHIFT))
#elif defined(WANT_16BPP) && defined(FRONTEND_SUPPORTS_RGB565)
#define RED_EXPAND 3
#define GREEN_EXPAND 2
#define BLUE_EXPAND 3
#define RED_SHIFT 11
#define GREEN_SHIFT 5
#define BLUE_SHIFT 0
#define MAKECOLOR(r, g, b, a) (((r >> RED_EXPAND) << RED_SHIFT) | ((g >> GREEN_EXPAND) << GREEN_SHIFT) | ((b >> BLUE_EXPAND) << BLUE_SHIFT))
#endif

typedef struct
{
 int32 x, y, w, h;
} MDFN_Rect;

enum
{
 MDFN_COLORSPACE_RGB = 0
};

struct MDFN_PixelFormat
{
 unsigned int bpp;
 unsigned int colorspace;

 uint8 Rshift;  // Bit position of the lowest bit of the red component
 uint8 Gshift;  // [...] green component
 uint8 Bshift;  // [...] blue component
 uint8 Ashift;  // [...] alpha component.
}; // MDFN_PixelFormat;

struct MDFN_Surface //typedef struct
{
   uint32 *pixels;
   uint16 *pixels16;

   // w, h, and pitch32 should always be > 0
   int32 w;
   int32 h;

   union
   {
      int32 pitch32; // In pixels, not in bytes.
      int32 pitchinpix;	// New name, new code should use this.
   };

   struct MDFN_PixelFormat format;
};

#endif