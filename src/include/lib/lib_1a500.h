#ifndef _IN_LIB_LIB_1A500_H
#define _IN_LIB_LIB_1A500_H
#include <ultra64.h>
#include "types.h"

u32 func0001a500(void);
u32 func0001a50c(void);
void func0001a518(void *callback);
u32 func0001a524(void);
u32 func0001a5cc(void);
u32 func0001a60c(void);
u32 func0001a634(void);
u32 func0001a740(void);
u32 func0001a784(void);
u32 func0001a7cc(void);
u32 func0001a85c(void);
struct modelnode *modelGetPart(struct model08 *arg0, s32 partnum);
struct modelthing *func0001a9bc(void *modelfiledata, s32 arg1);
u32 func0001a9e8(void);
void *modelGetNodeData(struct model *model, struct modelnode *node);
void modelNodeGetPosition(struct model *model, struct modelnode *node, struct coord *coord);
void func0001abc4(struct model *model, struct modelnode *node, struct coord *coord);
void func0001ad0c(struct model *model, struct coord *coord);
void func0001ad34(struct model *model, struct coord *coord);
u32 func0001ad5c(void);
f32 func0001ae44(struct model *model);
void func0001ae90(struct model *model, f32 arg1);
void modelSetUnk14(struct model *model, f32 arg1);
void modelSetAnimScale(struct model *model, f32 scale);
f32 func0001af80(struct model *model);
u32 func0001af98(void);
f32 func0001afe8(f32 arg0, f32 distance, f32 arg2);
u32 func0001b07c(void);
void func0001b0e8(struct model *model, struct modelnode *node);
void func0001b3bc(struct model *model);
u32 func0001b400(void);
u32 func0001b80c(void);
u32 func0001bc14(void);
u32 func0001bfa8(void);
u32 func0001c5b4(void);
u32 func0001c664(void);
u32 func0001c784(void);
u32 func0001c7d0(void);
u32 func0001c81c(void);
u32 func0001c868(void);
u32 func0001c924(void);
u32 func0001c950(void);
void func0001cb0c(struct model *model, struct modelnode *node);
u32 func0001cc20(void);
u32 func0001cd18(void);
u32 func0001ce64(void);
void func0001cebc(struct objticksp476 *arg0, struct model *model);
u32 modelGetAnimNum(struct model *model);
bool modelIsFlipped(struct model *model);
f32 modelGetCurAnimFrame(struct model *model);
f32 modelGetAnimEndFrame(struct model *model);
s32 modelGetNumAnimFrames(struct model *model);
f32 modelGetAnimSpeed(struct model *model);
f32 modelGetAbsAnimSpeed(struct model *model);
u32 func0001d320(void);
u32 func0001d4fc(void);
u32 func0001d62c(void);
bool modelIsAnimMerging(struct model *model);
void func0001dbfc(struct model *model, s32 arg1, u32 arg2, f32 arg3, f32 arg4, f32 arg5);
void modelSetAnimation(struct model *model, s16 animnum, s32 flip, f32 fstartframe, f32 arg4, f32 arg5);
u32 func0001dd90(void);
void modelSetAnimLooping(struct model *model, f32 loopframe, f32 loopmerge);
void modelSetAnimEndFrame(struct model *model, f32 endframe);
u32 func0001de98(void);
void modelSetAnimSpeed(struct model *model, f32 speed, f32 startframe);
void modelSetAnimSpeedAuto(struct model *model, f32 arg1, f32 startframe);
void modelSetAnimPlaySpeed(struct model *model, f32 speed, f32 frame);
void modelSetAnim70(struct model *model, void *callback);
u32 func0001e018(void);
u32 func0001e14c(void);
u32 func0001e29c(void);
u32 func0001e2a8(void);
u32 func0001e2b4(void);
void func0001ee18(struct model *model, s32 lvupdate240, bool arg2);
u32 func0001f314(void);
u32 func0001f7e0(void);
u32 func0001f890(void);
u32 func00020248(void);
u32 func00020bdc(void);
u32 func00020c90(void);
u32 func00020d1c(void);
u32 func00020f30(void);
u32 func0002124c(void);
u32 func000216cc(void);
u32 func0002170c(void);
u32 func00021ef4(void);
u32 func000220fc(void);
u32 func000225d4(void);
u32 func000227a4(void);
void func00022a24(void *arg0, u32 arg1, void *arg2);
u32 func00022b68(void);
void func00022d24(void *data);
u32 func00022d50(void);
u32 func00022fa4(void);
void animInitialise(struct anim *anim);
u32 func00023108(void);
u32 func0002319c(void);
u32 func00023314(void);

#endif
