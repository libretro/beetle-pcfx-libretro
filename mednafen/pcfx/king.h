#ifndef __PCFX_KING_H
#define __PCFX_KING_H

void KING_StartFrame(VDC **, EmulateSpecStruct *espec);	//MDFN_Surface *surface, MDFN_Rect *DisplayRect, MDFN_Rect *LineWidths, int skip);
void KING_SetPixelFormat(const MDFN_PixelFormat &format); //int rshift, int gshift, int bshift);
uint16 FXVCE_Read16(uint32 A);
void FXVCE_Write16(uint32 A, uint16 V);

uint8 KING_Read8(const v810_timestamp_t timestamp, uint32 A);
uint16 KING_Read16(const v810_timestamp_t timestamp, uint32 A);

void KING_Write8(const v810_timestamp_t timestamp, uint32 A, uint8 V);
void KING_Write16(const v810_timestamp_t timestamp, uint32 A, uint16 V);
bool KING_Init(void);
void KING_Close(void);
void KING_Reset(const v810_timestamp_t timestamp);

uint16 KING_GetADPCMHalfWord(int ch);

uint8 KING_MemPeek(uint32 A);

uint8 KING_RB_Fetch();

void KING_SetLayerEnableMask(uint64 mask);

int KING_StateAction(StateMem *sm, int load, int data_only);

void KING_SetGraphicsDecode(MDFN_Surface *surface, int line, int which, int xscroll, int yscroll, int pbn);

void KING_NotifyOfBPE(bool read, bool write);

void KING_SetLogFunc(void (*logfunc)(const char *, const char *, ...));

void KING_EndFrame(v810_timestamp_t timestamp);
void KING_ResetTS(v810_timestamp_t ts_base);

v810_timestamp_t MDFN_FASTCALL KING_Update(const v810_timestamp_t timestamp);
#endif
