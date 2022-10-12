//
// Temple (MP)
//

#include "stagesetup.h"

extern s32 intro[];
extern u32 props[];
extern struct path paths[];
extern struct ailist ailists[];

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
	weapon(0x0100, 0x0000, PAD_JUN_0093, OBJFLAG_00000001, 0, 0, 240)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_009D, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_009E, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_0094, OBJFLAG_00000001, 0, 0, 241)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_009F, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A0, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_0095, OBJFLAG_00000001, 0, 0, 242)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A1, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A2, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_0096, OBJFLAG_00000001, 0, 0, 243)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A3, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A4, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_0097, OBJFLAG_00000001, 0, 0, 244)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A5, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A6, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_0098, OBJFLAG_00000001, 0, 0, 245)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A7, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A8, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_0099, OBJFLAG_00000001, 0, 0, 246)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00AA, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00A9, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_009A, OBJFLAG_00000001, 0, 0, 247)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00AB, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00AC, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_009B, OBJFLAG_00000001, 0, 0, 248)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00AD, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00AE, OBJFLAG_00000001, 0, 0, 1000)
	weapon(0x0100, 0x0000, PAD_JUN_009C, OBJFLAG_00000001, 0, 0, 249)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00AF, OBJFLAG_00000001, 0, 0, 1000)
	ammocratemulti(0x0100, MODEL_MULTI_AMMO_CRATE, PAD_JUN_00B0, OBJFLAG_00000001, 0, 0, 1000)
	door(0x0100, MODEL_TDOOR, PAD_JUN_008D, OBJFLAG_DEACTIVATED, OBJFLAG2_80000000, 0, 1000, 0x0000f333, 0x0000551e, 0x00002aaa, 0x00002aaa, 0x000000da, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00001000)
	door(0x0100, MODEL_TDOOR, PAD_JUN_008E, OBJFLAG_DEACTIVATED, OBJFLAG2_80000000, 0, 1000, 0x0000f333, 0x0000551e, 0x00002aaa, 0x00002aaa, 0x000000da, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00001000)
	door(0x0100, MODEL_TDOOR, PAD_JUN_008F, OBJFLAG_DEACTIVATED, OBJFLAG2_80000000, 0, 1000, 0x0000f333, 0x0000551e, 0x00002aaa, 0x00002aaa, 0x000000da, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00001000)
	door(0x0100, MODEL_TDOOR, PAD_JUN_0090, OBJFLAG_DEACTIVATED, OBJFLAG2_80000000, 0, 1000, 0x0000f333, 0x0000551e, 0x00002aaa, 0x00002aaa, 0x000000da, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00001000)
	door(0x0100, MODEL_TDOOR, PAD_JUN_0091, OBJFLAG_DEACTIVATED, OBJFLAG2_80000000, 0, 1000, 0x0000f333, 0x0000551e, 0x00002aaa, 0x00002aaa, 0x000000da, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00001000)
	door(0x0100, MODEL_TDOOR, PAD_JUN_0092, OBJFLAG_DEACTIVATED, OBJFLAG2_80000000, 0, 1000, 0x0000f333, 0x0000551e, 0x00002aaa, 0x00002aaa, 0x000000da, DOORFLAG_0004, DOORTYPE_VERTICAL, 0x00000000, 0x000005dc, 0x00000000, 0x00000000, 0x00001000)
	endprops
};

s32 intro[] = {
	spawn(PAD_JUN_001C)
	spawn(PAD_JUN_001D)
	spawn(PAD_JUN_001E)
	spawn(PAD_JUN_001F)
	spawn(PAD_JUN_0020)
	spawn(PAD_JUN_0021)
	spawn(PAD_JUN_0022)
	spawn(PAD_JUN_0023)
	spawn(PAD_JUN_0024)
	spawn(PAD_JUN_0025)
	spawn(PAD_JUN_0026)
	spawn(PAD_JUN_0027)
	case(0, 0x0006)
	case_respawn(0, 0x0000)
	case_respawn(0, 0x0001)
	case_respawn(0, 0x0002)
	case_respawn(0, 0x0003)
	case_respawn(0, 0x0004)
	case_respawn(0, 0x0005)
	case(1, 0x000d)
	case_respawn(1, 0x0007)
	case_respawn(1, 0x0008)
	case_respawn(1, 0x0009)
	case_respawn(1, 0x000a)
	case_respawn(1, 0x000b)
	case_respawn(1, 0x000c)
	case(2, 0x0014)
	case_respawn(2, 0x000e)
	case_respawn(2, 0x000f)
	case_respawn(2, 0x0010)
	case_respawn(2, 0x0011)
	case_respawn(2, 0x0012)
	case_respawn(2, 0x0013)
	case(3, 0x0015)
	case_respawn(3, 0x0016)
	case_respawn(3, 0x0017)
	case_respawn(3, 0x0018)
	case_respawn(3, 0x0019)
	case_respawn(3, 0x001a)
	case_respawn(3, 0x001b)
	hill(0x0072)
	hill(0x005a)
	hill(0x0080)
	hill(0x007a)
	outfit(OUTFIT_DEFAULT)
	endintro
};

s32 path00[] = {
	-1,
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

u8 unregistered_func1[] = {
	endlist
};

u8 func1000_1898[] = {
	mp_init_simulants
	rebuild_teams
	rebuild_squadrons
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ func1000_1898, 0x1000 },
	{ NULL, 0 },
};




