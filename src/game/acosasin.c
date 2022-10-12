#include <ultra64.h>
#include "constants.h"
#include "game/acosasin.h"
#include "bss.h"
#include "data.h"
#include "types.h"

u16 var8006ae90[] = {
	0x8000, 0x7eba, 0x7d74, 0x7c2d, 0x7ae7, 0x79a0, 0x7859, 0x7711,
	0x75c9, 0x7480, 0x7337, 0x71ec, 0x70a1, 0x6f55, 0x6e07, 0x6cb8,
	0x6b68, 0x6a17, 0x68c4, 0x6770, 0x661a, 0x64c1, 0x6367, 0x620b,
	0x60ad, 0x5f4c, 0x5de9, 0x5c83, 0x5b1a, 0x59ae, 0x583e, 0x56cb,
	0x5555, 0x53db, 0x525c, 0x50d9, 0x4f51, 0x4dc5, 0x4c32, 0x4a9a,
	0x48fc, 0x4757, 0x45ab, 0x43f7, 0x423a, 0x4075, 0x3ea5, 0x3ccb,
	0x3ae5, 0x38f1, 0x36ef, 0x34dc, 0x32b7, 0x307d, 0x2e2b, 0x2bbd,
	0x292e, 0x2678, 0x2391, 0x206c, 0x1cf6, 0x0000, 0x1cf6, 0x1cbb,
	0x1c80, 0x1c45, 0x1c08, 0x1bcc, 0x1b8f, 0x1b51, 0x1b13, 0x1ad4,
	0x1a95, 0x1a55, 0x1a14, 0x19d3, 0x1992, 0x194f, 0x190c, 0x18c9,
	0x1884, 0x183f, 0x17f9, 0x17b3, 0x176b, 0x1723, 0x16da, 0x1690,
	0x1645, 0x15f9, 0x15ac, 0x155e, 0x150f, 0x14be, 0x146d, 0x141a,
	0x13c6, 0x1370, 0x1319, 0x12c1, 0x1267, 0x120b, 0x11ad, 0x114e,
	0x10ec, 0x1088, 0x1022, 0x0fb9, 0x0f4d, 0x0ede, 0x0e6c, 0x0df7,
	0x0d7d, 0x0d00, 0x0c7d, 0x0bf4, 0x0b66, 0x0ad0, 0x0a31, 0x0989,
	0x08d3, 0x080e, 0x0734, 0x063d, 0x0518, 0x039a, 0x039a, 0x031e,
	0x028c, 0x01cd, 0x0000,
};

s32 func0f096890(s32 arg0)
{
	u16 *array;
	s32 shiftamount;
	s32 mask;
	s32 index;
	s32 value;
	s32 nextvalue;

	if (arg0 >= 32736) {
		mask = 0x07;
		shiftamount = 3;
		array = &var8006ae90[126];
		arg0 -= 32736;
	} else if (arg0 >= 30720) {
		mask = 0x1f;
		shiftamount = 5;
		array = &var8006ae90[62];
		arg0 -= 30720;
	} else {
		mask = 0x1ff;
		shiftamount = 9;
		array = &var8006ae90[0];
	}

	index = arg0 >> shiftamount;
	value = array[index];
	nextvalue = array[index + 1];

	return value - (((value - nextvalue) * (arg0 & mask)) >> shiftamount);
}

u16 acos(s16 arg0)
{
	s32 value = arg0 >= 0 ? arg0 : -arg0;

	value = func0f096890(value);

	if (arg0 < 0) {
		value = 0xffff - value;
	}

	return value;
}

s16 asin(s16 arg0)
{
	s32 value = arg0 >= 0 ? arg0 : -arg0;

	value = func0f096890(value);

	if (arg0 >= 0) {
		value = 0x7fff - value;
	} else {
		value -= 0x8000;
	}

	return value;
}
