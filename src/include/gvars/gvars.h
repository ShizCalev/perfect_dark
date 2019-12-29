#ifndef _IN_GVARS_H
#define _IN_GVARS_H
#include <ultra64.h>
#include "types.h"

struct g_vars {
	// Known remaining member names based on debug strings:
	//g_Vars.PaksNeedsReInit
	//g_Vars.FourMeg2Player
	//g_Vars.playersperm[0]
	//g_Vars.playersperm[1]
	//g_Vars.PropState.propznum
	//g_Vars.PropState
	//g_Vars.antiradaron
	//g_Vars.antibodynum
	//g_Vars.antiheadnum
	//g_Vars.coopfriendlyfire
	//g_Vars.coopradaron

	/*000000*/ u32 unk000000;
	/*000004*/ u32 unk000004;
	/*000008*/ s32 tickcount;
	/*00000c*/ u32 unk00000c;
	/*000010*/ u32 unk000010;
	/*000014*/ u32 unk000014;
	/*000018*/ u32 unk000018;
	/*00001c*/ u32 unk00001c;
	/*000020*/ u32 unk000020;
	/*000024*/ u32 unk000024;
	/*000028*/ u32 unk000028;
	/*00002c*/ u32 unk00002c;
	/*000030*/ u32 unk000030;
	/*000034*/ u32 unk000034;
	/*000038*/ u32 unk000038;
	/*00003c*/ u32 unk00003c;
	/*000040*/ u32 unk000040;
	/*000044*/ u32 unk000044;
	/*000048*/ u32 unk000048;
	/*00004c*/ f32 countdowntimerstep; // probably a generic lastframems field
	/*000050*/ u32 unk000050;
	/*000054*/ u32 unk000054;
	/*000058*/ u32 unk000058;
	/*00005c*/ u32 unk00005c;
	/*000060*/ u32 unk000060;
	/*000064*/ struct player *players[4];
	/*000074*/ struct gvars74 unk000074[4];
	/*000274*/ u32 unk000274[4];
	/*000284*/ struct player *currentplayer;
	/*000288*/ struct gvars74 *unk000288;
	/*00028c*/ u32 currentplayernum; // 0-3 - controller numbers I think
	/*000290*/ u32 currentplayerindex; // 0-3 - but 2 or 3 probably only used in combat simulator
	/*000294*/ s32 bondplayernum;
	/*000298*/ s32 coopplayernum;
	/*00029c*/ s32 antiplayernum;
	/*0002a0*/ struct player *bond; // Joanna
	/*0002a4*/ struct player *coop; // Co-op buddy when controlled by human
	/*0002a8*/ struct player *anti; // Counter-op
	/*0002ac*/ u32 unk0002ac; // 7 if currentplayer has finished auto walking
	/*0002b0*/ s32 killcount;
	/*0002b4*/ u8 unk0002b4;
	/*0002b5*/ u8 unk0002b5;
	/*0002b6*/ u8 unk0002b6;
	/*0002b7*/ u8 knockoutcount;
	/*0002b8*/ u32 unk0002b8;
	/*0002bc*/ s32 roomcount;
	/*0002c0*/ u32 unk0002c0;
	/*0002c4*/ u32 unk0002c4;
	/*0002c8*/ u32 unk0002c8;
	/*0002cc*/ u32 unk0002cc;
	/*0002d0*/ u32 unk0002d0;
	/*0002d4*/ u32 unk0002d4;
	/*0002d8*/ u32 unk0002d8;
	/*0002dc*/ u32 unk0002dc;
	/*0002e0*/ u32 unk0002e0;
	/*0002e4*/ u32 unk0002e4;
	/*0002e8*/ u32 unk0002e8;
	/*0002ec*/ u32 unk0002ec;
	/*0002f0*/ u32 unk0002f0;
	/*0002f4*/ u32 unk0002f4;
	/*0002f8*/ u32 unk0002f8;
	/*0002fc*/ u32 unk0002fc;
	/*000300*/ u32 unk000300;
	/*000304*/ u32 unk000304;
	/*000308*/ u32 unk000308;
	/*00030c*/ u32 unk00030c;
	/*000310*/ u32 unk000310;
	/*000314*/ u32 unk000314;
	/*000318*/ u32 unk000318;
	/*00031c*/ u32 unk00031c;
	/*000320*/ u32 unk000320;
	/*000324*/ u32 unk000324;
	/*000328*/ u32 unk000328;
	/*00032c*/ u32 unk00032c;
	/*000330*/ u32 unk000330;
	/*000334*/ u32 unk000334;
	/*000338*/ struct prop *props;
	/*00033c*/ u32 unk00033c;
	/*000340*/ u32 unk000340;
	/*000344*/ u32 unk000344;
	/*000348*/ u32 unk000348;
	/*00034c*/ u32 unk00034c;
	/*000350*/ u32 unk000350;
	/*000354*/ u32 unk000354;
	/*000358*/ u32 unk000358;
	/*00035c*/ u32 unk00035c;
	/*000360*/ u32 unk000360;
	/*000364*/ u32 unk000364;
	/*000368*/ u32 unk000368;
	/*00036c*/ u32 unk00036c;
	/*000370*/ u32 unk000370;
	/*000374*/ u32 unk000374;
	/*000378*/ u32 unk000378;
	/*00037c*/ u32 unk00037c;
	/*000380*/ u32 unk000380;
	/*000384*/ u32 unk000384;
	/*000388*/ u32 unk000388;
	/*00038c*/ u32 unk00038c;
	/*000390*/ u32 unk000390;
	/*000394*/ u32 unk000394;
	/*000398*/ u32 unk000398;
	/*00039c*/ u32 unk00039c;
	/*0003a0*/ u32 unk0003a0;
	/*0003a4*/ u32 unk0003a4;
	/*0003a8*/ u32 unk0003a8;
	/*0003ac*/ u32 unk0003ac;
	/*0003b0*/ u32 unk0003b0;
	/*0003b4*/ u32 unk0003b4;
	/*0003b8*/ u32 unk0003b8;
	/*0003bc*/ u32 unk0003bc;
	/*0003c0*/ u32 unk0003c0;
	/*0003c4*/ u32 unk0003c4;
	/*0003c8*/ u32 unk0003c8;
	/*0003cc*/ u32 unk0003cc;
	/*0003d0*/ u32 unk0003d0;
	/*0003d4*/ u32 unk0003d4;
	/*0003d8*/ u32 unk0003d8;
	/*0003dc*/ u32 unk0003dc;
	/*0003e0*/ u32 unk0003e0;
	/*0003e4*/ u32 unk0003e4;
	/*0003e8*/ u32 unk0003e8;
	/*0003ec*/ u32 unk0003ec;
	/*0003f0*/ u32 unk0003f0;
	/*0003f4*/ u32 unk0003f4;
	/*0003f8*/ u32 unk0003f8;
	/*0003fc*/ u32 unk0003fc;
	/*000400*/ u32 unk000400;
	/*000404*/ u32 unk000404;
	/*000408*/ u32 unk000408;
	/*00040c*/ u32 unk00040c;
	/*000410*/ u32 unk000410;
	/*000414*/ u32 unk000414;
	/*000418*/ u32 unk000418;
	/*00041c*/ u32 unk00041c;
	/*000420*/ u32 unk000420;
	/*000424*/ struct chrdata *chrdata;
	/*000428*/ struct standardobj *objdata;
	/*00042c*/ struct standardobj *aicdata;
	/*000430*/ struct heliobj *hovdata;
	/*000434*/ u8 *ailist;
	/*000438*/ u32 aioffset;
	/*00043c*/ u32 unk00043c;
	/*000440*/ u32 unk000440;
	/*000444*/ u32 unk000444;
	/*000448*/ u32 unk000448;
	/*00044c*/ u32 unk00044c;
	/*000450*/ u32 unk000450;
	/*000454*/ u32 unk000454;
	/*000458*/ u32 unk000458;
	/*00045c*/ u32 unk00045c;
	/*000460*/ u32 unk000460;
	/*000464*/ u32 unk000464;
	/*000468*/ u32 unk000468;
	/*00046c*/ u32 unk00046c;
	/*000470*/ u32 unk000470;
	/*000474*/ u32 unk000474;
	/*000478*/ u32 unk000478;
	/*00047c*/ u32 unk00047c;
	/*000480*/ u32 unk000480;
	/*000484*/ u32 unk000484;
	/*000488*/ u32 unk000488;
	/*00048c*/ u32 unk00048c;
	/*000490*/ u32 unk000490;
	/*000494*/ u32 unk000494;
	/*000498*/ u32 unk000498;
	/*00049c*/ u32 unk00049c;
	/*0004a0*/ u32 unk0004a0;
	/*0004a4*/ u32 unk0004a4;
	/*0004a8*/ u32 unk0004a8;
	/*0004ac*/ u32 unk0004ac;
	/*0004b0*/ u32 unk0004b0;
	/*0004b4*/ s32 stagenum;
	/*0004b8*/ u32 unk0004b8;
	/*0004bc*/ u32 unk0004bc;
	/*0004c0*/ u32 unk0004c0;
	/*0004c4*/ u32 unk0004c4;
	/*0004c8*/ u32 unk0004c8;
	/*0004cc*/ s32 in_cutscene;
	/*0004d0*/ u8 unk0004d0;
	/*0004d1*/ u8 unk0004d1;
	/*0004d2*/ u8 unk0004d2;
	/*0004d3*/ s8 unk0004d3;
	/*0004d4*/ u8 unk0004d4;
	/*0004d5*/ u8 unk0004d5;
	/*0004d6*/ s8 unk0004d6;
	/*0004d8*/ u32 unk0004d8;
	/*0004dc*/ u32 unk0004dc;
	/*0004e0*/ u8 unk0004e0;
	/*0004e1*/ u8 unk0004e1;
	/*0004e2*/ u8 unk0004e2;
	/*0004e3*/ u8 langFilterActive;
	/*0004e4*/ u32 unk0004e4;
	/*0004e8*/ u32 unk0004e8;
	/*0004ec*/ u32 unk0004ec;
	/*0004f0*/ u32 unk0004f0;
	/*0004f4*/ u32 unk0004f4;
	/*0004f8*/ u32 unk0004f8;
	/*0004fc*/ u32 unk0004fc;
	/*0004e0*/ u32 unk000500;
	/*000504*/ u32 unk000504;
	/*000508*/ u32 unk000508;
	/*00050c*/ u32 unk00050c;
	/*000510*/ u32 unk000510;
	/*000514*/ u32 unk000514;
	/*000518*/ u32 unk000518;
	/*00051c*/ u32 unk00051c;
	/*000520*/ u32 unk000520;
	/*000524*/ u32 unk000524;
	/*000528*/ u32 unk000528;
	/*00052c*/ u32 unk00052c;
	/*000530*/ u32 unk000530;
	/*000534*/ u32 unk000534;
	/*000538*/ u32 unk000538;
	/*00053c*/ u32 unk00053c;
	/*000540*/ u32 unk000540;
	/*000544*/ u32 unk000544;
	/*000548*/ u32 unk000548;
	/*00054c*/ u32 unk00054c;
	/*000550*/ u32 unk000550;
	/*000554*/ u32 unk000554;
	/*000558*/ u32 unk000558;
	/*00055c*/ u32 unk00055c;
	/*000560*/ u32 unk000560;
	/*000564*/ u32 unk000564;
	/*000568*/ u32 unk000568;
	/*00056c*/ u32 unk00056c;
	/*000570*/ u32 unk000570;
	/*000574*/ u32 unk000574;
	/*000578*/ u32 unk000578;
	/*00057c*/ u32 unk00057c;
	/*000580*/ u32 unk000580;
	/*000584*/ u32 unk000584;
	/*000588*/ u32 unk000588;
	/*00058c*/ u32 unk00058c;
	/*000590*/ u32 unk000590;
	/*000594*/ u32 unk000594;
	/*000598*/ u32 unk000598;
	/*00059c*/ u32 unk00059c;
	/*0005a0*/ u32 unk0005a0;
	/*0005a4*/ u32 unk0005a4;
	/*0005a8*/ u32 unk0005a8;
	/*0005ac*/ u32 unk0005ac;
	/*0005b0*/ u32 unk0005b0;
	/*0005b4*/ u32 unk0005b4;
	/*0005b8*/ u32 unk0005b8;
	/*0005bc*/ u32 unk0005bc;
	/*0005c0*/ u32 unk0005c0;
	/*0005c4*/ u32 unk0005c4;
	/*0005c8*/ u32 unk0005c8;
	/*0005cc*/ u32 unk0005cc;
	/*0005d0*/ u32 unk0005d0;
	/*0005d4*/ u32 unk0005d4;
	/*0005d8*/ u32 unk0005d8;
	/*0005dc*/ u32 unk0005dc;
	/*0005e0*/ u32 unk0005e0;
	/*0005e4*/ u32 unk0005e4;
	/*0005e8*/ u32 unk0005e8;
	/*0005ec*/ u32 unk0005ec;
	/*0005f0*/ u32 unk0005f0;
	/*0005f4*/ u32 unk0005f4;
	/*0005f8*/ u32 unk0005f8;
	/*0005fc*/ u32 unk0005fc;
	/*000600*/ u32 unk000600;
	/*000604*/ u32 unk000604;
	/*000608*/ u32 unk000608;
	/*00060c*/ u32 unk00060c;
	/*000610*/ u32 unk000610;
	/*000614*/ u32 unk000614;
	/*000618*/ u32 unk000618;
	/*00061c*/ u32 unk00061c;
	/*000620*/ u32 unk000620;
	/*000624*/ u32 unk000624;
	/*000628*/ u32 unk000628;
	/*00062c*/ u32 unk00062c;
	/*000630*/ u32 unk000630;
	/*000634*/ u32 unk000634;
	/*000638*/ u32 unk000638;
	/*00063c*/ u32 unk00063c;
	/*000640*/ u32 unk000640;
	/*000644*/ u32 unk000644;
	/*000648*/ u32 unk000648;
	/*00064c*/ u32 unk00064c;
	/*000650*/ u32 unk000650;
	/*000654*/ u32 unk000654;
	/*000658*/ u32 unk000658;
	/*00065c*/ u32 unk00065c;
	/*000660*/ u32 unk000660;
	/*000664*/ u32 unk000664;
	/*000668*/ u32 unk000668;
	/*00066c*/ u32 unk00066c;
	/*000670*/ u32 unk000670;
	/*000674*/ u32 unk000674;
	/*000678*/ u32 unk000678;
	/*00067c*/ u32 unk00067c;
	/*000680*/ u32 unk000680;
	/*000684*/ u32 unk000684;
	/*000688*/ u32 unk000688;
	/*00068c*/ u32 unk00068c;
	/*000690*/ u32 unk000690;
	/*000694*/ u32 unk000694;
	/*000698*/ u32 unk000698;
	/*00069c*/ u32 unk00069c;
	/*0006a0*/ u32 unk0006a0;
	/*0006a4*/ u32 unk0006a4;
	/*0006a8*/ u32 unk0006a8;
	/*0006ac*/ u32 unk0006ac;
	/*0006b0*/ u32 unk0006b0;
	/*0006b4*/ u32 unk0006b4;
	/*0006b8*/ u32 unk0006b8;
	/*0006bc*/ u32 unk0006bc;
	/*0006c0*/ u32 unk0006c0;
	/*0006c4*/ u32 unk0006c4;
	/*0006c8*/ u32 unk0006c8;
	/*0006cc*/ u32 unk0006cc;
	/*0006d0*/ u32 unk0006d0;
	/*0006d4*/ u32 unk0006d4;
	/*0006d8*/ u32 unk0006d8;
	/*0006dc*/ u32 unk0006dc;
	/*0006e0*/ u32 unk0006e0;
	/*0006e4*/ u32 unk0006e4;
	/*0006e8*/ u32 unk0006e8;
	/*0006ec*/ u32 unk0006ec;
	/*0006f0*/ u32 unk0006f0;
	/*0006f4*/ u32 unk0006f4;
	/*0006f8*/ u32 unk0006f8;
	/*0006fc*/ u32 unk0006fc;
	/*000700*/ u32 unk000700;
	/*000704*/ u32 unk000704;
};

extern u32 var8008ae20;
extern struct g_vars g_Vars;

extern s32 g_NumTags;
extern struct tag **g_TagPtrs;

extern u32 var8008de24;
extern u32 var8008de38;
extern struct bootbufferthing var8008de48[3];
extern s32 var8008fa6c;
extern s32 var8008fa70;
extern s32 var8008fa74;
extern u8 var80090af0;
extern u32 var80090af4;
extern u32 var80090af8;
extern u32 var80090afc;
extern u32 var8009cac0;
extern u32 var8009cac4;
extern u32 var8009de20;
extern u32 var8009de24;

extern u32 var8008ae2c;
extern u32 var8008ae30;
extern u32 var8008ae38;
extern u32 var8008be38;
extern u32 var8008d238;
extern u32 var8008d270;
extern u32 var8008d4a0;
extern u32 var8008d6d0;
extern u32 var8008d900;
extern u32 var8008db30;
extern u32 var8008db48;
extern u32 var8008dbd0;
extern u32 var8008dca8;
extern u32 var8008dcb4;
extern u32 var8008dcc0;
extern u32 var8008dd60;
extern u32 var8008dd64;
extern u32 var8008dd68;
extern u32 var8008ddb8;
extern u32 var8008de0c;
extern u32 var8008de18;
extern u32 var8008fa68;
extern u32 var8008fa80;
extern u32 var8008faa8;
extern u32 var8008fac0;
extern u32 var8008fdf0;
extern u32 var8008fe00;
extern u32 var80090004;
extern u32 var80090008;
extern u32 var8009000c;
extern u32 var80090010;
extern u32 var80090018;
extern u32 var8009003c;
extern u32 var80090068;
extern u32 var80090230;
extern u32 var80090248;
extern u32 var80090260;
extern u32 var80090278;
extern u32 var800902a0;
extern u32 var80090318;
extern u32 var80090390;
extern u32 var800907c0;
extern u32 var800907d8;
extern u32 var800907f0;
extern u32 var80090a20;
extern u32 var80090a70;
extern u32 var80090ab0;
extern u32 var80090ad0;
extern u32 var80090ae8;
extern u32 var80090b10;
extern u32 var80090b14;
extern u32 var80090ff8;
extern u32 var800914d8;
extern u32 var80091558;
extern u32 var80091568;
extern u32 var80091580;
extern u32 var80091588;
extern u32 var80091590;
extern u32 var800915c8;
extern u32 var800915d0;
extern u32 var800915d4;
extern u32 var800915e0;
extern u32 var80091810;
extern u32 var80091828;
extern u32 var80091848;
extern u32 var80091860;
extern u32 var80091880;
extern u32 var800918d0;
extern u32 var800918e0;
extern u32 var800918e8;
extern u32 var800918ec;
extern u32 var80091900;
extern u32 var80091910;
extern u32 var80091924;
extern u32 var80091f50;
extern u32 var800926d0;
extern u32 var800926e8;
extern u32 var80092828;
extern u32 var80092830;
extern u32 var80092870;
extern u32 var80092874;
extern u32 var80092880;
extern u32 var80092eb0;
extern u32 var80094ab0;
extern u32 var80094ac8;
extern u32 var80094ae0;
extern u32 var80094ae8;
extern u32 var80094de8;
extern u32 var80094e08;
extern u32 var80094e88;
extern u32 var80094ea0;
extern u32 var80094ea4;
extern u32 var80094ea8;
extern u32 var80094eb0;
extern u32 var80094ed8;
extern u32 var800951f0;
extern u32 var80095200;
extern u32 var80095208;
extern u32 var8009520c;
extern u32 var80095210;
extern u32 var80099024;
extern u32 var800992e4;
extern u32 var80099300;
extern u32 var800993b8;
extern u32 var8009946c;
extern u32 var80099470;
extern u32 var80099474;
extern u32 var80099478;
extern u32 var80099484;
extern u32 var8009985c;
extern u32 var80099880;
extern u32 var800998f8;
extern u32 var80099900;
extern u32 var80099a00;
extern u32 var80099a20;
extern u32 var80099a40;
extern u32 var80099a60;
extern u32 var80099c64;
extern u32 var80099e68;
extern u32 var80099e78;
extern u32 var80099e90;
extern u32 var80099eb8;
extern u32 var80099ec0;
extern u32 var80099ed8;
extern u32 var80099ee0;
extern u32 var80099ef8;
extern u32 var80099f00;
extern u32 var80099f18;
extern u32 var80099f20;
extern u32 var80099f38;
extern u32 var8009a874;
extern u32 var8009a878;
extern u32 var8009a87c;
extern u32 var8009a880;
extern u32 var8009a888;
extern u32 var8009a88c;
extern u32 var8009a890;
extern u32 var8009a894;
extern u32 var8009a898;
extern u32 var8009a8a0;
extern u32 var8009a8a4;
extern u32 var8009a8a8;
extern u32 var8009a8b8;
extern u32 var8009a8c8;
extern u32 var8009a8e0;
extern u32 var8009a8f8;
extern u32 var8009a908;
extern u32 var8009a918;
extern u32 var8009ad70;
extern u32 var8009b878;
extern u32 var8009c390;
extern u32 var8009c400;
extern u32 var8009c650;
extern u32 var8009c6e0;
extern u32 var8009c780;
extern u32 var8009c788;
extern u32 var8009c78c;
extern u32 var8009c7a0;
extern u32 var8009c7a8;
extern u32 var8009c7c0;
extern u32 var8009c7c8;
extern u32 var8009c7e0;
extern u32 var8009c81c;
extern u32 var8009c820;
extern u32 var8009c828;
extern u32 var8009c848;
extern u32 var8009c860;
extern u32 var8009c870;
extern u32 var8009c970;
extern u32 var8009ca80;
extern u32 var8009ca84;
extern u32 var8009cad0;
extern u32 var8009cadc;
extern u32 var8009cae0;
extern u32 var8009cb08;
extern u32 var8009cbf8;
extern u32 var8009cc00;
extern u32 var8009cc30;
extern u32 var8009cc40;
extern u32 var8009cc44;
extern u32 var8009cc48;
extern u32 var8009cc4c;
extern u32 var8009cc50;
extern u32 var8009cc54;
extern u32 var8009cc58;
extern u32 var8009cc90;
extern u32 var8009cca8;
extern u32 var8009ccb0;
extern u32 var8009ccb8;
extern u32 var8009ccc0;
extern u32 var8009cd10;
extern u32 var8009cd14;
extern u32 var8009cd18;
extern u32 var8009cd20;
extern u32 var8009cd28;
extern u32 var8009cd48;
extern s32 var8009cd70[5];
extern u8 var8009cd98;
extern u32 var8009cda0;
extern u32 var8009cda4;
extern u32 var8009cdac;
extern u32 var8009cdb0;
extern u32 var8009cdc0;
extern u32 var8009ce38;
extern u32 var8009ce40;
extern u32 var8009ce44;
extern u32 var8009ce48;
extern u32 var8009ce4c;
extern u32 var8009ce50;
extern u32 var8009ce54;
extern u32 var8009ce58;
extern u32 var8009ce5c;
extern u32 var8009ce60;
extern u32 var8009ce64;
extern u32 var8009ce68;
extern u32 var8009ce6c;
extern u32 var8009ce78;
extern u32 var8009ce88;
extern u32 var8009ce98;
extern u32 var8009cf10;
extern u32 var8009cf88;
extern struct stagesetup g_StageSetup;
extern u32 var8009d050;
extern u32 var8009d060;
extern u32 var8009d088;
extern u32 var8009d0b0;
extern u32 var8009d0b4;
extern u32 var8009d0b8;
extern u32 var8009d0bc;
extern u32 var8009d0c0;
extern u32 var8009d0d0;
extern u32 var8009d0d8;
extern u32 var8009d0e0;
extern u32 var8009d0f0;
extern u32 var8009d144;
extern struct fireslot g_Fireslots[];
extern u32 var8009d510;
extern u32 var8009da60;
extern u32 var8009dbe0;
extern u32 var8009dd00;
extern u32 var8009dd04;
extern u32 var8009dd10;
extern u32 var8009dd20;
extern u32 var8009dd30;
extern u32 var8009dd40;
extern u32 var8009dd50;
extern u32 var8009dd60;
extern u32 var8009dd6c;
extern u32 var8009dd70;
extern u32 var8009dd78;
extern u32 var8009ddc8;
extern u32 var8009ddcc;
extern u32 var8009ddd0;
extern u32 var8009ddd8;
extern u32 var8009dddc;
extern u32 var8009dde0;
extern u32 var8009dde4;
extern u32 var8009ddec;
extern u32 var8009ddf0;
extern u32 var8009de10;
extern u32 var8009de14;
extern u32 var8009de18;
extern u32 var8009de1c;
extern u32 var8009de28;
extern u32 var8009de30;
extern u32 var8009de38;
extern u32 var8009de78;
extern u32 var8009de98;
extern u32 var8009de9c;
extern u32 var8009dea0;
extern u32 var8009deb0;
extern char g_CheatMarqueeString[];
extern u32 var8009dfbc;
extern u32 var8009dfc0;
extern u32 var8009dfc8;
extern u32 var8009dfd4;
extern u8 var8009dfe8[];
extern u32 var8009e000;
extern struct menustackitem g_MenuStack[];
extern u32 var8009f6b0;
extern u32 var8009f800;
extern u32 var8009ffe0;
extern u32 var8009fffc;
extern u32 var800a0004;
extern u32 var800a0008;
extern u32 var800a000c;
extern u32 var800a0010;
extern u32 var800a0014;
extern u32 var800a0024;
extern u32 var800a0028;
extern u32 var800a0040;
extern u32 var800a0048;
extern u32 var800a0068;
extern u32 var800a007c;
extern u32 var800a008c;
extern u32 var800a010c;
extern u32 var800a044c;
extern u32 var800a045c;
extern u32 var800a0478;
extern u32 var800a0520;
extern u32 var800a0610;
extern u32 var800a0638;
extern u32 var800a07a4;
extern u32 var800a0814;
extern u32 var800a0884;
extern u32 var800a0b50;
extern u32 var800a0ddc;
extern u32 var800a0fb8;
extern u32 var800a1390;
extern u32 var800a1660;
extern u32 var800a1794;
extern u32 var800a19c0;
extern u32 var800a19c4;
extern u32 var800a19dc;
extern u32 var800a1bb0;
extern u32 var800a2038;
extern u32 var800a203c;
extern u32 var800a2040;
extern u32 var800a2044;
extern u32 var800a2048;
extern u32 var800a20d0;
extern u32 var800a21b0;
extern u32 var800a21b4;
extern u32 var800a21b8;
extern u32 var800a21c0;
extern u32 g_CheatsActiveBank0;
extern u32 g_CheatsActiveBank1;
extern u32 g_CheatsEnabledBank0;
extern u32 g_CheatsEnabledBank1;
extern u32 var800a21e0;
extern u32 var800a21e8;
extern u32 var800a21f0;
extern struct savefile_solo g_SoloSaveFile;
extern u32 var800a22c0;
extern u32 var800a22d0;
extern u32 var800a2330;
extern u32 var800a2344;
extern u32 var800a2350;
extern u32 var800a2354;
extern u32 var800a2360;
extern u32 var800a2364;
extern u32 var800a2368;
extern u32 var800a236c;
extern u32 var800a2370;
extern u32 var800a2380;
extern u32 var800a2eb0;
extern u32 var800a3180;
extern u32 var800a33a4;
extern u32 var800a33a8;
extern u32 var800a33e8;
extern u32 var800a3410;
extern u32 var800a3420;
extern u32 var800a3430;
extern u32 var800a3434;
extern u32 var800a3440;
extern u32 var800a3444;
extern u32 var800a3448;
extern u32 var800a3488;
extern u32 var800a34d0;

extern u32 var800a3fc0; // likely a count of 800a3fc8
extern struct gvars800a3fc8 var800a3fc8[];

extern u32 var800a4130;
extern u32 var800a4154;
extern u32 var800a4158;
extern u32 var800a415c;
extern u32 var800a4164;
extern u32 var800a416c;
extern u32 var800a4170;
extern u32 var800a4184;
extern u32 var800a418c;
extern u32 var800a4190;
extern u32 var800a4194;
extern u32 var800a41a0;
extern u32 var800a41b0;
extern u32 var800a41b4;
extern u32 var800a41b8;
extern u32 var800a41c0;
extern u32 var800a41d8;
extern u32 var800a45a0;
extern u32 var800a45a8;
extern u32 var800a45c0;
extern u32 var800a45c4;
extern u32 var800a45d0;
extern u32 var800a4634;
extern u32 var800a4640;
extern u32 var800a491c;
extern u32 var800a4920;
extern u32 var800a4924;
extern struct room *g_RoomPtrs;
extern u32 var800a492c;
extern u32 var800a4930;
extern u32 var800a4bec;
extern u32 var800a4bf0;
extern u32 var800a4bf8;
extern u32 var800a4cc0;
extern u32 var800a4cc4;
extern u32 var800a4cc8;
extern u32 var800a4ccc;
extern u32 var800a4cd0;
extern u32 var800a4cd4;
extern u32 var800a4cd8;
extern u32 var800a4ce0;
extern u32 var800a4ce4;
extern u32 var800a4ce8;
extern u32 var800a4cec;
extern u32 var800a4cf0;
extern u32 var800a4cf8;
extern u32 var800a4d00;
extern u32 var800a6470;
extern u32 var800a647c;
extern u32 var800a6538;
extern u32 var800a65b8;
extern u32 var800a65c0;
extern u32 var800a65c8;
extern u32 var800a65f0;
extern u32 var800a6600;
extern u32 var800a6618;
extern u32 var800a661c;
extern u32 var800a6620;
extern u32 var800a6630;
extern u32 var800a6660;
extern u32 var800a6668;
extern u32 var800a666c;
extern u32 var800a6680;
extern u32 var800aa580;
extern u32 var800aa590;
extern u32 var800aa59c;
extern u32 var800aa5a0;
extern u32 var800aa5b0;
extern u32 var800aa5c0;
extern u32 var800aa5cc;
extern u32 var800aa5d8;
extern u32 var800aaa38;
extern u32 var800aaa68;
extern u32 var800aaa78;
extern u32 var800aaa88;
extern u32 var800aaa98;
extern char *g_TextBanks[];
extern u32 var800aabb4;
extern u32 var800aabb8;
extern u32 var800aabc0;
extern u32 var800aabc8;
extern u32 var800aabd8;
extern u32 var800ab538;
extern u32 var800ab53c;
extern u32 var800ab540;
extern u32 var800ab544;
extern u32 var800ab548;
extern u32 var800ab550;
extern u32 var800ab554;
extern u32 var800ab558;
extern u32 var800ab55c;
extern u32 var800ab560;
extern u32 var800ab570;
extern u32 var800ab574;
extern u32 var800ab578;
extern u32 var800ab57c;
extern u32 var800ab5a0;
extern u32 var800ab5a8;
extern u32 var800ab5b0;
extern u32 var800ab5b8;
extern u32 var800ab718;
extern u32 var800ab7b8;
extern u32 var800ab7c0;
extern u32 var800ab7c4;
extern u32 var800ab7c8;
extern u32 var800abac8;
extern u32 var800abdc8;
extern u32 var800ac0e8;
extern u32 var800ac0f8;
extern u32 var800ac108;
extern u32 var800ac110;
extern u32 var800ac118;
extern u32 var800ac11c;
extern u32 var800ac120;
extern u32 var800ac128;
extern u32 var800ac134;
extern u32 var800ac140;
extern u32 var800ac150;
extern u32 var800ac188;
extern u32 var800ac258;
extern u32 var800ac2c0;
extern u32 var800ac328;
extern u32 var800ac390;
extern u32 var800ac3f8;
extern u32 var800ac460;
extern u32 var800ac4cc;
extern u32 var800ac4d0;
extern u32 var800ac500;
extern u32 var800ac530;
extern u32 var800ac538;
extern u32 var800ac798;
extern u32 var800ac7b8;
extern u32 var800ac858;
extern u32 var800aca38;
extern u32 var800acad8;
extern u32 var800acb78;
extern u32 var800acb88;
extern u32 var800acb94;
extern u32 var800acba8;
extern u32 var800acbb0;
extern u32 var800acc10;
extern u32 var800acc20;
extern u32 var800acc28;
extern u32 var800acc70;
extern u32 var800acc74;
extern u32 var800acc80;
extern u32 var800acca0;
extern u32 var800accc8;
extern u32 var800acd20;
extern u32 var800ad158;
extern u32 var800ad1a0;
extern u32 var800ad1b0;
extern u32 var800ad1c0;

#endif
