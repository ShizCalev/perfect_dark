#ifndef _IN_LIB_RMON_H
#define _IN_LIB_RMON_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

void rmonproc();
void rmon0002fa30(u32 *arg0, s32 arg1);
void rmon0002fa38(s32 arg0);
bool rmonIsDisabled(void);
void rmonPrint(const char *format, ...);

#endif
