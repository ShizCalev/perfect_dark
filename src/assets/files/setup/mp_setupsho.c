//
// Skedar Ruins
//

#include "stagesetup.h"

s32 intro[];
u32 props[];
struct path paths[];
struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	ailists,
	NULL,
};

u32 props[] = {
	endprops
};

s32 intro[] = {
	endintro
};

struct ailist ailists[] = {
	{ NULL, 0 },
};

struct path paths[] = {
	{ NULL, 0, 0 },
};
