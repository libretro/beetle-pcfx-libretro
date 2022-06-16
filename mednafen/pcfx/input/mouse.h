#ifndef __PCFX_INPUT_MOUSE_H
#define __PCFX_INPUT_MOUSE_H

#include "../../git.h"

extern const InputDeviceInputInfoStruct PCFX_MouseIDII[4];

PCFX_Input_Device *PCFXINPUT_MakeMouse(int which);

#endif
