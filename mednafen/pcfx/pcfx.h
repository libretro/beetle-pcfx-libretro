#ifndef __PCFX_PCFX_H
#define __PCFX_PCFX_H

#include "../state.h"
#include "../general.h"
#include "v810/v810_cpu.h"
#include "../hw_video/huc6270/vdc.h"

#define PCFX_MASTER_CLOCK	21477272.72

static INLINE void MDFN_FastU32MemsetM8(uint32_t *array, uint32_t value_32, unsigned int u32len)
{
   uint32_t *ai;

   for(ai = array; ai < array + u32len; ai += 2)
   {
      ai[0] = value_32;
      ai[1] = value_32;
   }
}

extern V810 PCFX_V810;

uint8 MDFN_FASTCALL mem_peekbyte(const v810_timestamp_t timestamp, const uint32 A);
uint16 MDFN_FASTCALL mem_peekhword(const v810_timestamp_t timestamp, const uint32 A);

extern VDC *fx_vdc_chips[2];

#define REGSETHW(_reg, _data, _msh) { _reg &= 0xFFFF << (_msh ? 0 : 16); _reg |= _data << (_msh ? 16 : 0); }
#define REGGETHW(_reg, _msh) ((_reg >> (_msh ? 16 : 0)) & 0xFFFF)

enum
{
 PCFX_EVENT_PAD = 0,
 PCFX_EVENT_TIMER,
 PCFX_EVENT_KING,
 PCFX_EVENT_ADPCM
};

#define PCFX_EVENT_NONONO       0x7fffffff

void PCFX_SetEvent(const int type, const v810_timestamp_t next_timestamp);

#endif
