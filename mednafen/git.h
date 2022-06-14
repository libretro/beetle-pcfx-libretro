#ifndef _GIT_H
#define _GIT_H

#include <string.h>
#include <libretro.h>

#include "file.h"
#include "state.h"
#include "video/surface.h"

typedef enum
{
 IDIT_BUTTON,		// 1-bit
 IDIT_BUTTON_CAN_RAPID, // 1-bit
 IDIT_BUTTON_BYTE, // 8-bits, Button as a byte instead of a bit.
 IDIT_X_AXIS,	   // (mouse) 32-bits, signed, fixed-point: 1.15.16 - in-screen/window range: [0.0, nominal_width)
 IDIT_Y_AXIS,	   // (mouse) 32-bits, signed, fixed-point: 1.15.16 - in-screen/window range: [0.0, nominal_height)
 IDIT_X_AXIS_REL,  // (mouse) 32-bits, signed
 IDIT_Y_AXIS_REL,  // (mouse) 32-bits, signed
 IDIT_BYTE_SPECIAL,
 IDIT_BUTTON_ANALOG, // 32-bits, 0 - 32767
 IDIT_RUMBLE,	// 32-bits, lower 8 bits are weak rumble(0-255), next 8 bits are strong rumble(0-255), 0=no rumble, 255=max rumble.  Somewhat subjective, too...
		// May extend to 16-bit each in the future.
		// It's also rather a special case of game module->driver code communication.
} InputDeviceInputType;

typedef struct
{
	const char *SettingName;	// No spaces, shouldbe all a-z0-9 and _. Definitely no ~!
	const char *Name;
	/*const InputDeviceInputVB VirtButton;*/
        const int ConfigOrder;          // Configuration order during in-game config process, -1 for no config.
	const InputDeviceInputType Type;
	const char *ExcludeName;	// SettingName of a button that can't be pressed at the same time as this button
					// due to physical limitations.

	const char *RotateName[3];	// 90, 180, 270
	//const char *Rotate180Name;
	//const char *Rotate270Name;
} InputDeviceInputInfoStruct;

typedef struct
{
 const char *ShortName;
 const char *FullName;
 const char *Description;

 //struct InputPortInfoStruct *PortExpanderDeviceInfo;
 const void *PortExpanderDeviceInfo;	// DON'T USE, IT'S NOT IMPLEMENTED PROPERLY CURRENTLY.
 int NumInputs; // Usually just the number of buttons....OR if PortExpanderDeviceInfo is non-NULL, it's the number of input
		// ports this port expander device provides.
 const InputDeviceInputInfoStruct *IDII;
} InputDeviceInfoStruct;

typedef struct
{
 const char *ShortName;
 const char *FullName;
 int NumTypes; // Number of unique input devices available for this input port
 InputDeviceInfoStruct *DeviceInfo;
 const char *DefaultDevice;	// Default device for this port.
} InputPortInfoStruct;

typedef struct
{
 int InputPorts;
 const InputPortInfoStruct *Types;
} InputInfoStruct;

struct MemoryPatch;

struct CheatFormatStruct
{
 const char *FullName;		//"Game Genie", "GameShark", "Pro Action Catplay", etc.
 const char *Description;	// Whatever?
};

struct CheatFormatInfoStruct
{
 unsigned NumFormats;

 CheatFormatStruct *Formats;
};

// Miscellaneous system/simple commands(power, reset, dip switch toggles, coin insert, etc.)
// (for DoSimpleCommand() )
enum
{
 MDFN_MSC_RESET = 0x01,
 MDFN_MSC_POWER = 0x02,

 MDFN_MSC_INSERT_COIN = 0x07,

 // n of DISKn translates to is emulation module specific.
 MDFN_MSC_INSERT_DISK0 = 0x20,
 MDFN_MSC_INSERT_DISK1,
 MDFN_MSC_INSERT_DISK2,
 MDFN_MSC_INSERT_DISK3,
 MDFN_MSC_INSERT_DISK4,
 MDFN_MSC_INSERT_DISK5,
 MDFN_MSC_INSERT_DISK6,
 MDFN_MSC_INSERT_DISK7,
 MDFN_MSC_INSERT_DISK8,
 MDFN_MSC_INSERT_DISK9,
 MDFN_MSC_INSERT_DISK10,
 MDFN_MSC_INSERT_DISK11,
 MDFN_MSC_INSERT_DISK12,
 MDFN_MSC_INSERT_DISK13,
 MDFN_MSC_INSERT_DISK14,
 MDFN_MSC_INSERT_DISK15,

 MDFN_MSC_INSERT_DISK	= 0x30,
 MDFN_MSC_EJECT_DISK 	= 0x31,

 // This command should select the next disk or disk side in the set and use MDFN_DispMessage() to show which disk is selected.
 // (If it's only allowed while a disk is ejected, or not, is emulation module specific.
 MDFN_MSC_SELECT_DISK	= 0x32,

 MDFN_MSC__LAST = 0x3F	// WARNING: Increasing(or having the enum'd value of a command greater than this :b) this will necessitate a change to the netplay protocol.
};

typedef struct
{
	// Pitch(32-bit) must be equal to width and >= the "fb_width" specified in the MDFNGI struct for the emulated system.
	// Height must be >= to the "fb_height" specified in the MDFNGI struct for the emulated system.
	// The framebuffer pointed to by surface->pixels is written to by the system emulation code.
	MDFN_Surface *surface;

	// Will be set to TRUE if the video pixel format has changed since the last call to Emulate(), FALSE otherwise.
	// Will be set to TRUE on the first call to the Emulate() function/method
	bool VideoFormatChanged;

	// Set by the system emulation code every frame, to denote the horizontal and vertical offsets of the image, and the size
	// of the image.  If the emulated system sets the elements of LineWidths, then the horizontal offset(x) and width(w) of this structure
	// are ignored while drawing the image.
	MDFN_Rect DisplayRect;

	// Pointer to an array of MDFN_Rect, number of elements = fb_height, set by the driver code.  Individual MDFN_Rect structs written
	// to by system emulation code.  If the emulated system doesn't support multiple screen widths per frame, or if you handle
	// such a situation by outputting at a constant width-per-frame that is the least-common-multiple of the screen widths, then
	// you can ignore this.  If you do wish to use this, you must set all elements every frame.
	int32 *LineWidths;

	// Set(optionally) by emulation code.  If InterlaceOn is true, then assume field height is 1/2 DisplayRect.h, and
	// only every other line in surface (with the start line defined by InterlacedField) has valid data
	// (it's up to internal Mednafen code to deinterlace it).
	bool InterlaceOn;
	bool InterlaceField;

	// Skip rendering this frame if true.  Set by the driver code.
	int skip;

	// Pointer to sound buffer, set by the driver code, that the emulation code should render sound to.
	// Guaranteed to be at least 500ms in length, but emulation code really shouldn't exceed 40ms or so.  Additionally, if emulation code
	// generates >= 100ms, 
	// DEPRECATED: Emulation code may set this pointer to a sound buffer internal to the emulation module.
	int16 *SoundBuf;

	// Maximum size of the sound buffer, in frames.  Set by the driver code.
	int32 SoundBufMaxSize;

	// Number of frames currently in internal sound buffer.  Set by the system emulation code, to be read by the driver code.
	int32 SoundBufSize;
} EmulateSpecStruct;

class CDIF;

typedef struct
{
 int lcm_width;
 int lcm_height;

 void *dummy_separator;	//

 int nominal_width;
 int nominal_height;

 int fb_width;		// Width of the framebuffer(not necessarily width of the image).  MDFN_Surface width should be >= this.
 int fb_height;		// Height of the framebuffer passed to the Emulate() function(not necessarily height of the image)
 double mouse_sensitivity;
} MDFNGI;

#ifdef __cplusplus
extern "C" {
#endif
int StateAction(StateMem *sm, int load, int data_only);
#ifdef __cplusplus
}
#endif

extern retro_log_printf_t log_cb;

#endif
