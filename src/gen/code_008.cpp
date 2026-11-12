#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800BD0AC
void f_800BD0AC(Ctx* __restrict c) {
  trace_call(0x800BD0ACu);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD0AC
  c->r[0]=c->lr; // 800BD0B0
  W32(c->r[1]+0x00000174u,c->r[0]); // 800BD0B4
  c->r[11]=c->r[1]+0x00000170u; // 800BD0B8
  c->lr=0x800BD0C0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD0BC
  c->r[31]=c->r[3]|c->r[3]; // 800BD0C0
  c->r[3]=c->r[5]|c->r[5]; // 800BD0C4
  c->r[28]=c->r[6]|c->r[6]; // 800BD0C8
  c->lr=0x800BD0D0u; f_80068A78(c); // 800BD0CC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD0D0
  c->r[30]=c->r[3]|c->r[3]; // 800BD0D4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BD0D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BD0DC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BD0E0
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[0]);} // 800BD0E4
  c->r[29]=R32(c->r[1]+0x0000015Cu); // 800BD0E8
  c->ctr=c->r[12]; // 800BD0EC
  if (true) { c->lr=0x800BD0F4u; dispatch(c,c->ctr); } // 800BD0F0
  cmps(c,0,(int32_t)c->r[3],0); // 800BD0F4
  if (crb(c,2)) { goto L_800BD154; } // 800BD0F8
  c->r[12]=R32(c->r[30]+0x00000010u); // 800BD0FC
  c->r[3]=c->r[30]|c->r[30]; // 800BD100
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BD104
  c->ctr=c->r[12]; // 800BD108
  if (true) { c->lr=0x800BD110u; dispatch(c,c->ctr); } // 800BD10C
  c->r[4]=c->r[3]|c->r[3]; // 800BD110
  c->r[3]=c->r[1]+0x00000088u; // 800BD114
  c->r[12]=R32(c->r[4]+0x00000000u); // 800BD118
  c->r[5]=c->r[28]+0x00000040u; // 800BD11C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BD120
  c->ctr=c->r[12]; // 800BD124
  if (true) { c->lr=0x800BD12Cu; dispatch(c,c->ctr); } // 800BD128
  c->r[0]=0u+0x00000006u; // 800BD12C
  c->r[5]=c->r[1]+0x00000120u; // 800BD130
  c->r[4]=c->r[1]+0x00000084u; // 800BD134
  c->ctr=c->r[0]; // 800BD138
L_800BD13C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD13C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD140
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD144
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD148
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD13C; } // 800BD14C
  goto L_800BD15C; // 800BD150
L_800BD154:;
  c->r[3]=c->r[1]+0x00000124u; // 800BD154
  c->lr=0x800BD15Cu; f_80264680(c); // 800BD158
L_800BD15C:;
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD15C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BD160
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[0]);} // 800BD164
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 800BD168
  cmps(c,0,(int32_t)c->r[0],1000); // 800BD16C
  if (!crb(c,2)) { goto L_800BD26C; } // 800BD170
  c->r[4]=0u+0x803E0000u; // 800BD174
  c->r[5]=c->r[29]|c->r[29]; // 800BD178
  c->r[4]=c->r[4]+0xFFFFA848u; // 800BD17C
  c->r[6]=c->r[30]+0x000004ACu; // 800BD180
  c->r[3]=c->r[4]+0x00000007u; // 800BD184
  c->r[4]=c->r[4]+0x0000000Cu; // 800BD188
  c->lr=0x800BD190u; f_801F08AC(c); // 800BD18C
  cmps(c,0,(int32_t)c->r[3],0); // 800BD190
  c->r[29]=c->r[3]|c->r[3]; // 800BD194
  if (crb(c,2)) { goto L_800BD3D8; } // 800BD198
  c->r[3]=c->r[1]+0x000000F4u; // 800BD19C
  c->lr=0x800BD1A4u; f_80264680(c); // 800BD1A0
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800BD1A4
  c->r[3]=c->r[29]+0x000008D0u; // 800BD1A8
  c->r[4]=c->r[1]+0x000000F4u; // 800BD1AC
  c->r[12]=R32(c->r[12]+0x00000028u); // 800BD1B0
  c->ctr=c->r[12]; // 800BD1B4
  if (true) { c->lr=0x800BD1BCu; dispatch(c,c->ctr); } // 800BD1B8
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD1BC
  c->r[3]=c->r[29]|c->r[29]; // 800BD1C0
  {uint32_t ea=c->r[2]+0xFFFF8EA4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD1C4
  c->f[3]=c->f[1]; // 800BD1C8
  c->lr=0x800BD1D0u; f_80250DA0(c); // 800BD1CC
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD1D0
  c->r[3]=c->r[1]+0x00000060u; // 800BD1D4
  {uint32_t ea=c->r[28]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD1D8
  {uint32_t ea=c->r[28]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BD1DC
  c->lr=0x800BD1E4u; f_800521A0(c); // 800BD1E0
  c->r[3]=c->r[1]+0x0000006Cu; // 800BD1E4
  c->r[4]=c->r[1]+0x00000060u; // 800BD1E8
  c->lr=0x800BD1F0u; f_8003F468(c); // 800BD1EC
  c->r[4]=c->r[1]+0x0000006Cu; // 800BD1F0
  c->r[3]=c->r[1]+0x00000124u; // 800BD1F4
  c->r[5]=c->r[4]|c->r[4]; // 800BD1F8
  c->lr=0x800BD200u; f_802652E8(c); // 800BD1FC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD200
  c->r[3]=c->r[1]+0x00000078u; // 800BD204
  {uint32_t ea=c->r[2]+0xFFFF8EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD208
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD20C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800BD210
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BD214
  c->f[2]=c->f[1]; // 800BD218
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800BD21C
  c->lr=0x800BD224u; f_80065358(c); // 800BD220
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD224
  c->r[3]=c->r[29]|c->r[29]; // 800BD228
  c->r[4]=c->r[1]+0x0000006Cu; // 800BD22C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 800BD230
  c->r[12]=R32(c->r[29]+0x00000010u); // 800BD234
  c->r[12]=R32(c->r[12]+0x00000334u); // 800BD238
  c->ctr=c->r[12]; // 800BD23C
  if (true) { c->lr=0x800BD244u; dispatch(c,c->ctr); } // 800BD240
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD244
  c->r[3]=c->r[1]+0x0000003Cu; // 800BD248
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD24C
  c->f[3]=c->f[1]; // 800BD250
  c->lr=0x800BD258u; f_800521A0(c); // 800BD254
  c->r[5]=c->r[3]|c->r[3]; // 800BD258
  c->r[3]=c->r[29]|c->r[29]; // 800BD25C
  c->r[4]=c->r[1]+0x0000006Cu; // 800BD260
  c->lr=0x800BD268u; f_80250E18(c); // 800BD264
  goto L_800BD3D8; // 800BD268
L_800BD26C:;
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 800BD26C
  c->r[4]=c->r[29]|c->r[29]; // 800BD270
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BD274
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BD278
  c->ctr=c->r[12]; // 800BD27C
  if (true) { c->lr=0x800BD284u; dispatch(c,c->ctr); } // 800BD280
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD284
  c->r[29]=c->r[3]|c->r[3]; // 800BD288
  {uint32_t ea=c->r[28]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD28C
  c->r[3]=c->r[1]+0x00000054u; // 800BD290
  {uint32_t ea=c->r[28]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BD294
  c->lr=0x800BD29Cu; f_800521A0(c); // 800BD298
  c->r[3]=c->r[1]+0x0000006Cu; // 800BD29C
  c->r[4]=c->r[1]+0x00000054u; // 800BD2A0
  c->lr=0x800BD2A8u; f_8003F468(c); // 800BD2A4
  c->r[4]=c->r[1]+0x0000006Cu; // 800BD2A8
  c->r[3]=c->r[1]+0x00000124u; // 800BD2AC
  c->r[5]=c->r[4]|c->r[4]; // 800BD2B0
  c->lr=0x800BD2B8u; f_802652E8(c); // 800BD2B4
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD2B8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BD2BC
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[0]);} // 800BD2C0
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 800BD2C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800BD2C8
  cmps(c,0,(int32_t)c->r[0],1); // 800BD2CC
  if (crb(c,2)) { goto L_800BD308; } // 800BD2D0
  if (!crb(c,0)) { goto L_800BD380; } // 800BD2D4
  cmps(c,0,(int32_t)c->r[0],0); // 800BD2D8
  if (!crb(c,0)) { goto L_800BD2E4; } // 800BD2DC
  goto L_800BD380; // 800BD2E0
L_800BD2E4:;
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD2E4
  c->r[3]=c->r[1]+0x00000030u; // 800BD2E8
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD2EC
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BD2F0
  c->lr=0x800BD2F8u; f_800521A0(c); // 800BD2F4
  c->r[3]=c->r[1]+0x00000078u; // 800BD2F8
  c->r[4]=c->r[1]+0x00000030u; // 800BD2FC
  c->lr=0x800BD304u; f_8003F468(c); // 800BD300
  goto L_800BD380; // 800BD304
L_800BD308:;
  c->lr=0x800BD30Cu; f_80061A4C(c); // 800BD308
  c->r[4]=c->r[3]|c->r[3]; // 800BD30C
  c->r[3]=c->r[1]+0x00000048u; // 800BD310
  c->r[4]=c->r[4]+0x0000035Cu; // 800BD314
  c->lr=0x800BD31Cu; f_8003F484(c); // 800BD318
  c->r[3]=c->r[1]+0x00000024u; // 800BD31C
  c->r[4]=c->r[1]+0x00000048u; // 800BD320
  c->r[5]=c->r[1]+0x0000006Cu; // 800BD324
  c->lr=0x800BD32Cu; f_80064C74(c); // 800BD328
  c->r[3]=c->r[1]+0x00000078u; // 800BD32C
  c->r[4]=c->r[1]+0x00000024u; // 800BD330
  c->lr=0x800BD338u; f_8003F468(c); // 800BD334
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD338
  c->r[3]=c->r[1]+0x00000078u; // 800BD33C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800BD340
  c->lr=0x800BD348u; f_80065368(c); // 800BD344
  cmps(c,0,(int32_t)c->r[3],0); // 800BD348
  if (crb(c,2)) { goto L_800BD374; } // 800BD34C
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD350
  c->r[3]=c->r[1]+0x00000018u; // 800BD354
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BD358
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BD35C
  c->lr=0x800BD364u; f_800521A0(c); // 800BD360
  c->r[3]=c->r[1]+0x00000078u; // 800BD364
  c->r[4]=c->r[1]+0x00000018u; // 800BD368
  c->lr=0x800BD370u; f_8003F468(c); // 800BD36C
  goto L_800BD380; // 800BD370
L_800BD374:;
  c->r[3]=c->r[1]+0x00000078u; // 800BD374
  c->r[4]=c->r[3]|c->r[3]; // 800BD378
  c->lr=0x800BD380u; f_80265750(c); // 800BD37C
L_800BD380:;
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD380
  c->r[3]=c->r[29]|c->r[29]; // 800BD384
  c->r[4]=c->r[1]+0x0000006Cu; // 800BD388
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 800BD38C
  c->r[12]=R32(c->r[29]+0x00000010u); // 800BD390
  c->r[12]=R32(c->r[12]+0x00000334u); // 800BD394
  c->ctr=c->r[12]; // 800BD398
  if (true) { c->lr=0x800BD3A0u; dispatch(c,c->ctr); } // 800BD39C
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD3A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BD3A4
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[0]);} // 800BD3A8
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 800BD3AC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800BD3B0
  if (crb(c,2)) { goto L_800BD3D8; } // 800BD3B4
  c->r[3]=c->r[1]+0x00000008u; // 800BD3B8
  c->lr=0x800BD3C0u; f_800BD428(c); // 800BD3BC
  c->r[12]=R32(c->r[29]+0x00000010u); // 800BD3C0
  c->r[3]=c->r[29]|c->r[29]; // 800BD3C4
  c->r[4]=c->r[1]+0x00000008u; // 800BD3C8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BD3CC
  c->ctr=c->r[12]; // 800BD3D0
  if (true) { c->lr=0x800BD3D8u; dispatch(c,c->ctr); } // 800BD3D4
L_800BD3D8:;
  c->r[3]=0u+0x00000000u; // 800BD3D8
  c->r[0]=0u+0x00000007u; // 800BD3DC
  W32(c->r[1]+0x000000B8u,c->r[3]); // 800BD3E0
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BD3E4
  c->r[4]=c->r[1]+0x000000B4u; // 800BD3E8
  c->ctr=c->r[0]; // 800BD3EC
L_800BD3F0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD3F0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD3F4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD3F8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD3FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD3F0; } // 800BD400
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD404
  c->r[11]=c->r[1]+0x00000170u; // 800BD408
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BD40C
  c->lr=0x800BD414u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD410
  c->r[0]=R32(c->r[1]+0x00000174u); // 800BD414
  c->lr=c->r[0]; // 800BD418
  c->r[1]=c->r[1]+0x00000170u; // 800BD41C
  return; // 800BD420
}

// fn_800BD424
void f_800BD424(Ctx* __restrict c) {
  trace_call(0x800BD424u);
  return; // 800BD424
}

// fn_800BD428
void f_800BD428(Ctx* __restrict c) {
  trace_call(0x800BD428u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD428
  c->r[0]=c->lr; // 800BD42C
  c->r[5]=0u+0x803F0000u; // 800BD430
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD434
  c->r[5]=c->r[5]+0x00001B28u; // 800BD438
  c->r[4]=c->r[1]+0x00000010u; // 800BD43C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BD440
  c->r[31]=0u+0x00000000u; // 800BD444
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BD448
  c->r[30]=c->r[3]|c->r[3]; // 800BD44C
  W32(c->r[1]+0x00000010u,c->r[31]); // 800BD450
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BD454
  W32(c->r[3]+0x00000000u,c->r[5]); // 800BD458
  c->r[3]=c->r[3]+0x00000004u; // 800BD45C
  W32(c->r[1]+0x00000008u,c->r[31]); // 800BD460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD464
  c->lr=0x800BD46Cu; f_80064C98(c); // 800BD468
  c->r[3]=0u+0x803F0000u; // 800BD46C
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800BD470
  c->r[3]=c->r[3]+0x00007A78u; // 800BD474
  W32(c->r[30]+0x00000000u,c->r[3]); // 800BD478
  c->r[3]=c->r[30]|c->r[30]; // 800BD47C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BD480
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BD484
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD488
  c->lr=c->r[0]; // 800BD48C
  c->r[1]=c->r[1]+0x00000020u; // 800BD490
  return; // 800BD494
}

// dtor_800BD498
void f_800BD498(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD498
  c->r[0]=c->lr; // 800BD49C
  cmps(c,0,(int32_t)c->r[3],0); // 800BD4A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD4A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD4A8
  c->r[31]=c->r[3]|c->r[3]; // 800BD4AC
  if (crb(c,2)) { goto L_800BD4C0; } // 800BD4B0
  cmps(c,0,(int32_t)c->r[4],0); // 800BD4B4
  if (!crb(c,1)) { goto L_800BD4C0; } // 800BD4B8
  c->lr=0x800BD4C0u; f_802896EC(c); // 800BD4BC
L_800BD4C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800BD4C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD4C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD4C8
  c->lr=c->r[0]; // 800BD4CC
  c->r[1]=c->r[1]+0x00000010u; // 800BD4D0
  return; // 800BD4D4
}

// fn_800BD4D8
void f_800BD4D8(Ctx* __restrict c) {
  trace_call(0x800BD4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD4D8
  c->r[0]=c->lr; // 800BD4DC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BD4E0
  c->r[11]=c->r[1]+0x00000060u; // 800BD4E4
  c->lr=0x800BD4ECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD4E8
  c->r[29]=c->r[3]|c->r[3]; // 800BD4EC
  c->r[3]=c->r[5]|c->r[5]; // 800BD4F0
  c->r[30]=c->r[6]|c->r[6]; // 800BD4F4
  c->lr=0x800BD4FCu; f_80068A78(c); // 800BD4F8
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD4FC
  c->r[31]=c->r[3]|c->r[3]; // 800BD500
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD504
  fcmp(c,0,c->f[0],c->f[1]); // 800BD508
  if (!crb(c,1)) { goto L_800BD574; } // 800BD50C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD510
  fcmp(c,0,c->f[0],c->f[1]); // 800BD514
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BD518
  if (!crb(c,2)) { goto L_800BD574; } // 800BD51C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BD520
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BD524
  c->ctr=c->r[12]; // 800BD528
  if (true) { c->lr=0x800BD530u; dispatch(c,c->ctr); } // 800BD52C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BD530
  c->r[5]=0u+0xE0000000u; // 800BD534
  c->r[3]=c->r[1]+0x00000008u; // 800BD538
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800BD53C
  c->r[4]=c->r[5]+0x00000002u; // 800BD540
  c->lr=0x800BD548u; f_8003EDD0(c); // 800BD544
  cmps(c,0,(int32_t)c->r[3],0); // 800BD548
  if (crb(c,2)) { goto L_800BD564; } // 800BD54C
  c->r[3]=0u+0x805C0000u; // 800BD550
  c->r[4]=R32(c->r[31]+0x00000898u); // 800BD554
  c->r[3]=c->r[3]+0x00005B94u; // 800BD558
  c->lr=0x800BD560u; f_80213958(c); // 800BD55C
  goto L_800BD574; // 800BD560
L_800BD564:;
  c->r[3]=0u+0x805C0000u; // 800BD564
  c->r[4]=R32(c->r[31]+0x00000898u); // 800BD568
  c->r[3]=c->r[3]+0x00005B94u; // 800BD56C
  c->lr=0x800BD574u; f_80213880(c); // 800BD570
L_800BD574:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD574
  c->r[3]=0u+0x00000000u; // 800BD578
  c->r[0]=0u+0x00000007u; // 800BD57C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BD580
  {uint32_t ea=c->r[31]+0x000003A4u; WF32(ea,c->f[0]);} // 800BD584
  c->r[4]=c->r[1]+0x0000000Cu; // 800BD588
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD58C
  {uint32_t ea=c->r[31]+0x000003A8u; WF32(ea,c->f[0]);} // 800BD590
  W32(c->r[1]+0x00000010u,c->r[3]); // 800BD594
  c->ctr=c->r[0]; // 800BD598
L_800BD59C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD59C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD5A0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD5A4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD5A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD59C; } // 800BD5AC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD5B0
  c->r[11]=c->r[1]+0x00000060u; // 800BD5B4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BD5B8
  c->lr=0x800BD5C0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD5BC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BD5C0
  c->lr=c->r[0]; // 800BD5C4
  c->r[1]=c->r[1]+0x00000060u; // 800BD5C8
  return; // 800BD5CC
}

// fn_800BD5D0
void f_800BD5D0(Ctx* __restrict c) {
  trace_call(0x800BD5D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD5D0
  c->r[0]=c->lr; // 800BD5D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BD5D8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800BD5DC
  W32(c->r[1]+0x00000058u,c->r[30]); // 800BD5E0
  c->r[30]=c->r[3]|c->r[3]; // 800BD5E4
  c->r[3]=c->r[5]|c->r[5]; // 800BD5E8
  c->lr=0x800BD5F0u; f_80068A78(c); // 800BD5EC
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD5F0
  c->r[31]=c->r[3]|c->r[3]; // 800BD5F4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD5F8
  fcmp(c,0,c->f[1],c->f[0]); // 800BD5FC
  if (!crb(c,1)) { goto L_800BD660; } // 800BD600
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BD604
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BD608
  c->ctr=c->r[12]; // 800BD60C
  if (true) { c->lr=0x800BD614u; dispatch(c,c->ctr); } // 800BD610
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BD614
  c->r[5]=0u+0xE0000000u; // 800BD618
  c->r[3]=c->r[1]+0x00000008u; // 800BD61C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800BD620
  c->r[4]=c->r[5]+0x00000002u; // 800BD624
  c->lr=0x800BD62Cu; f_8003EDD0(c); // 800BD628
  cmps(c,0,(int32_t)c->r[3],0); // 800BD62C
  if (crb(c,2)) { goto L_800BD648; } // 800BD630
  c->r[3]=0u+0x805C0000u; // 800BD634
  c->r[4]=R32(c->r[31]+0x00000898u); // 800BD638
  c->r[3]=c->r[3]+0x00005B94u; // 800BD63C
  c->lr=0x800BD644u; f_80213958(c); // 800BD640
  goto L_800BD658; // 800BD644
L_800BD648:;
  c->r[3]=0u+0x805C0000u; // 800BD648
  c->r[4]=R32(c->r[31]+0x00000898u); // 800BD64C
  c->r[3]=c->r[3]+0x00005B94u; // 800BD650
  c->lr=0x800BD658u; f_80213880(c); // 800BD654
L_800BD658:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD658
  {uint32_t ea=c->r[31]+0x000003A4u; WF32(ea,c->f[0]);} // 800BD65C
L_800BD660:;
  c->r[3]=0u+0x00000000u; // 800BD660
  c->r[0]=0u+0x00000007u; // 800BD664
  W32(c->r[1]+0x00000010u,c->r[3]); // 800BD668
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800BD66C
  c->r[4]=c->r[1]+0x0000000Cu; // 800BD670
  c->ctr=c->r[0]; // 800BD674
L_800BD678:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD678
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD67C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD680
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD684
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD678; } // 800BD688
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD68C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BD690
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800BD694
  c->r[30]=R32(c->r[1]+0x00000058u); // 800BD698
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BD69C
  c->lr=c->r[0]; // 800BD6A0
  c->r[1]=c->r[1]+0x00000060u; // 800BD6A4
  return; // 800BD6A8
}

// fn_800BD6AC
void f_800BD6AC(Ctx* __restrict c) {
  trace_call(0x800BD6ACu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD6AC
  c->r[0]=c->lr; // 800BD6B0
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BD6B4
  c->r[11]=c->r[1]+0x00000070u; // 800BD6B8
  c->lr=0x800BD6C0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD6BC
  c->r[31]=c->r[5]|c->r[5]; // 800BD6C0
  c->r[29]=c->r[3]|c->r[3]; // 800BD6C4
  c->r[30]=c->r[6]|c->r[6]; // 800BD6C8
  c->r[3]=c->r[31]|c->r[31]; // 800BD6CC
  c->lr=0x800BD6D4u; f_80068A78(c); // 800BD6D0
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BD6D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BD6D8
  c->ctr=c->r[12]; // 800BD6DC
  if (true) { c->lr=0x800BD6E4u; dispatch(c,c->ctr); } // 800BD6E0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800BD6E4
  c->r[4]=0u+0xC8000000u; // 800BD6E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BD6EC
  c->r[3]=c->r[1]+0x00000008u; // 800BD6F0
  c->lr=0x800BD6F8u; f_8003EDD0(c); // 800BD6F4
  cmps(c,0,(int32_t)c->r[3],0); // 800BD6F8
  if (crb(c,2)) { goto L_800BD724; } // 800BD6FC
  c->r[3]=c->r[31]|c->r[31]; // 800BD700
  c->lr=0x800BD708u; f_80068A78(c); // 800BD704
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD708
  c->r[5]=0u+0xFFFFFFFFu; // 800BD70C
  c->r[3]=R32(c->r[3]+0x00000028u); // 800BD710
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BD714
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800BD718
  c->r[4]=R32(c->r[1]+0x00000054u); // 800BD71C
  c->lr=0x800BD724u; f_800BD770(c); // 800BD720
L_800BD724:;
  c->r[3]=0u+0x00000000u; // 800BD724
  c->r[0]=0u+0x00000007u; // 800BD728
  W32(c->r[1]+0x00000010u,c->r[3]); // 800BD72C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BD730
  c->r[4]=c->r[1]+0x0000000Cu; // 800BD734
  c->ctr=c->r[0]; // 800BD738
L_800BD73C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD73C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD740
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD744
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD748
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD73C; } // 800BD74C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD750
  c->r[11]=c->r[1]+0x00000070u; // 800BD754
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BD758
  c->lr=0x800BD760u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD75C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800BD760
  c->lr=c->r[0]; // 800BD764
  c->r[1]=c->r[1]+0x00000070u; // 800BD768
  return; // 800BD76C
}

// fn_800BD770
void f_800BD770(Ctx* __restrict c) {
  trace_call(0x800BD770u);
  c->r[0]=0u+0x00000007u; // 800BD770
  c->r[7]=c->r[3]|c->r[3]; // 800BD774
  c->r[8]=0u+0x00000000u; // 800BD778
  c->ctr=c->r[0]; // 800BD77C
L_800BD780:;
  c->r[0]=R32(c->r[7]+0x00000034u); // 800BD780
  cmps(c,0,(int32_t)c->r[0],0); // 800BD784
  if (!crb(c,0)) { goto L_800BD7A0; } // 800BD788
  c->r[0]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800BD78C
  c->r[3]=c->r[3]+c->r[0]; // 800BD790
  W32(c->r[3]+0x00000034u,c->r[4]); // 800BD794
  W32(c->r[3]+0x00000038u,c->r[5]); // 800BD798
  return; // 800BD79C
L_800BD7A0:;
  c->r[0]=R32(c->r[7]+0x00000034u); // 800BD7A0
  c->r[6]=0u+0x00000000u; // 800BD7A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800BD7A8
  if (!crb(c,2)) { goto L_800BD7C0; } // 800BD7AC
  c->r[0]=R32(c->r[7]+0x00000038u); // 800BD7B0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800BD7B4
  if (!crb(c,2)) { goto L_800BD7C0; } // 800BD7B8
  c->r[6]=0u+0x00000001u; // 800BD7BC
L_800BD7C0:;
  cmps(c,0,(int32_t)c->r[6],0); // 800BD7C0
  if (!crb(c,2)) return; // 800BD7C4
  c->r[7]=c->r[7]+0x00000008u; // 800BD7C8
  c->r[8]=c->r[8]+0x00000001u; // 800BD7CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD780; } // 800BD7D0
  return; // 800BD7D4
}

// fn_800BD7D8
void f_800BD7D8(Ctx* __restrict c) {
  trace_call(0x800BD7D8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD7D8
  c->r[0]=c->lr; // 800BD7DC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BD7E0
  c->r[11]=c->r[1]+0x00000070u; // 800BD7E4
  c->lr=0x800BD7ECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD7E8
  c->r[31]=c->r[5]|c->r[5]; // 800BD7EC
  c->r[29]=c->r[3]|c->r[3]; // 800BD7F0
  c->r[30]=c->r[6]|c->r[6]; // 800BD7F4
  c->r[3]=c->r[31]|c->r[31]; // 800BD7F8
  c->lr=0x800BD800u; f_80068A78(c); // 800BD7FC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BD800
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BD804
  c->ctr=c->r[12]; // 800BD808
  if (true) { c->lr=0x800BD810u; dispatch(c,c->ctr); } // 800BD80C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800BD810
  c->r[4]=0u+0xC8000000u; // 800BD814
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BD818
  c->r[3]=c->r[1]+0x00000008u; // 800BD81C
  c->lr=0x800BD824u; f_8003EDD0(c); // 800BD820
  cmps(c,0,(int32_t)c->r[3],0); // 800BD824
  if (crb(c,2)) { goto L_800BD85C; } // 800BD828
  c->r[3]=c->r[31]|c->r[31]; // 800BD82C
  c->lr=0x800BD834u; f_80068A78(c); // 800BD830
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD834
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD838
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BD83C
  c->r[3]=R32(c->r[3]+0x00000028u); // 800BD840
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BD844
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 800BD848
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800BD84C
  c->r[5]=R32(c->r[1]+0x00000054u); // 800BD850
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 800BD854
  c->lr=0x800BD85Cu; f_800BD770(c); // 800BD858
L_800BD85C:;
  c->r[3]=0u+0x00000000u; // 800BD85C
  c->r[0]=0u+0x00000007u; // 800BD860
  W32(c->r[1]+0x00000010u,c->r[3]); // 800BD864
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BD868
  c->r[4]=c->r[1]+0x0000000Cu; // 800BD86C
  c->ctr=c->r[0]; // 800BD870
L_800BD874:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD874
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD878
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD87C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD880
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD874; } // 800BD884
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD888
  c->r[11]=c->r[1]+0x00000070u; // 800BD88C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BD890
  c->lr=0x800BD898u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD894
  c->r[0]=R32(c->r[1]+0x00000074u); // 800BD898
  c->lr=c->r[0]; // 800BD89C
  c->r[1]=c->r[1]+0x00000070u; // 800BD8A0
  return; // 800BD8A4
}

// fn_800BD8A8
void f_800BD8A8(Ctx* __restrict c) {
  trace_call(0x800BD8A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD8A8
  c->r[0]=c->lr; // 800BD8AC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BD8B0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BD8B4
  c->r[31]=c->r[6]|c->r[6]; // 800BD8B8
  W32(c->r[1]+0x00000048u,c->r[30]); // 800BD8BC
  c->r[30]=c->r[3]|c->r[3]; // 800BD8C0
  c->r[3]=c->r[5]|c->r[5]; // 800BD8C4
  c->lr=0x800BD8CCu; f_80068A78(c); // 800BD8C8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BD8CC
  c->r[6]=0u+0x00000000u; // 800BD8D0
  c->r[0]=0u+0x00000007u; // 800BD8D4
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800BD8D8
  {uint32_t ea=c->r[3]+0x00000C50u; WF32(ea,c->f[0]);} // 800BD8DC
  c->r[4]=c->r[1]+0x00000004u; // 800BD8E0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BD8E4
  c->ctr=c->r[0]; // 800BD8E8
L_800BD8EC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD8EC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD8F0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD8F4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD8F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD8EC; } // 800BD8FC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD900
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BD904
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BD908
  c->r[30]=R32(c->r[1]+0x00000048u); // 800BD90C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BD910
  c->lr=c->r[0]; // 800BD914
  c->r[1]=c->r[1]+0x00000050u; // 800BD918
  return; // 800BD91C
}

// fn_800BD920
void f_800BD920(Ctx* __restrict c) {
  trace_call(0x800BD920u);
  {uint32_t ea=c->r[1]+0xFFFFE250u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD920
  c->r[0]=c->lr; // 800BD924
  W32(c->r[1]+0x00001DB4u,c->r[0]); // 800BD928
  c->r[0]=0u+0x00001DA8u; // 800BD92C
  {uint32_t ea=c->r[1]+0x00001DA0u; WF64(ea,c->f[31]);} // 800BD930
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800BD934
  c->r[11]=c->r[1]+0x00001DA0u; // 800BD938
  c->lr=0x800BD940u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD93C
  c->r[25]=c->r[3]|c->r[3]; // 800BD940
  c->r[28]=c->r[5]|c->r[5]; // 800BD944
  c->r[3]=c->r[1]+0x000000D8u; // 800BD948
  c->r[4]=0u+0x00000000u; // 800BD94C
  c->lr=0x800BD954u; f_800BDBB4(c); // 800BD950
  c->r[30]=0u+0x803F0000u; // 800BD954
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800BD958
  c->r[30]=c->r[30]+0x00001AC0u; // 800BD95C
  c->r[27]=0u+0x00000000u; // 800BD960
  c->r[26]=0u+0x00000000u; // 800BD964
  c->r[31]=0u+0x00000000u; // 800BD968
  c->r[29]=c->r[13]+0xFFFF94B8u; // 800BD96C
L_800BD970:;
  c->r[3]=R32(c->r[29]+c->r[31]); // 800BD970
  cmps(c,0,(int32_t)c->r[3],0); // 800BD974
  if (crb(c,2)) { goto L_800BDA48; } // 800BD978
  c->lr=0x800BD980u; f_80067C50(c); // 800BD97C
  cmps(c,0,(int32_t)c->r[3],1); // 800BD980
  if (!crb(c,2)) { goto L_800BDA48; } // 800BD984
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800BD988
  c->r[4]=c->r[26]|c->r[26]; // 800BD98C
  c->r[5]=c->r[1]+0x00000054u; // 800BD990
  c->r[6]=c->r[1]+0x00000048u; // 800BD994
  c->r[27]=0u+0x00000001u; // 800BD998
  c->lr=0x800BD9A0u; f_800F3FE8(c); // 800BD99C
  cmps(c,0,(int32_t)c->r[3],0); // 800BD9A0
  if (crb(c,2)) { goto L_800BDA48; } // 800BD9A4
  {uint32_t ea=c->r[2]+0xFFFF8EACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BD9A8
  c->r[3]=c->r[1]+0x00000018u; // 800BD9AC
  c->r[4]=c->r[1]+0x00000048u; // 800BD9B0
  c->lr=0x800BD9B8u; f_80064C58(c); // 800BD9B4
  c->r[3]=c->r[1]+0x0000009Cu; // 800BD9B8
  c->lr=0x800BD9C0u; f_80063ACC(c); // 800BD9BC
  W32(c->r[1]+0x000000BCu,c->r[30]); // 800BD9C0
  c->r[3]=c->r[1]+0x000000C0u; // 800BD9C4
  c->r[4]=c->r[1]+0x00000054u; // 800BD9C8
  c->lr=0x800BD9D0u; f_8003F484(c); // 800BD9CC
  c->r[3]=c->r[1]+0x000000CCu; // 800BD9D0
  c->r[4]=c->r[1]+0x00000018u; // 800BD9D4
  c->lr=0x800BD9DCu; f_8003F484(c); // 800BD9D8
  c->r[3]=c->r[1]+0x00000F48u; // 800BD9DC
  c->lr=0x800BD9E4u; f_8003F3AC(c); // 800BD9E0
  c->r[3]=c->r[28]|c->r[28]; // 800BD9E4
  c->lr=0x800BD9ECu; f_80068A78(c); // 800BD9E8
  c->r[3]=R32(c->r[3]+0x00000028u); // 800BD9EC
  c->r[4]=c->r[1]+0x00000F48u; // 800BD9F0
  c->r[5]=c->r[1]+0x0000009Cu; // 800BD9F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BD9F8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800BD9FC
  c->ctr=c->r[12]; // 800BDA00
  if (true) { c->lr=0x800BDA08u; dispatch(c,c->ctr); } // 800BDA04
  {uint32_t ea=c->r[1]+0x00000F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDA08
  fcmp(c,0,c->f[0],c->f[31]); // 800BDA0C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BDA10
  c->r[0]=c->cr; // 800BDA14
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BDA18
  if (crb(c,2)) { goto L_800BDA3C; } // 800BDA1C
  c->r[3]=c->r[1]+0x000000D8u; // 800BDA20
  c->r[4]=0u+0x00000001u; // 800BDA24
  c->lr=0x800BDA2Cu; f_800BDBB4(c); // 800BDA28
  c->r[3]=c->r[1]+0x00000F80u; // 800BDA2C
  c->r[4]=0u+0xFFFFFFFFu; // 800BDA30
  c->lr=0x800BDA38u; f_80046394(c); // 800BDA34
  goto L_800BDA58; // 800BDA38
L_800BDA3C:;
  c->r[3]=c->r[1]+0x00000F80u; // 800BDA3C
  c->r[4]=0u+0xFFFFFFFFu; // 800BDA40
  c->lr=0x800BDA48u; f_80046394(c); // 800BDA44
L_800BDA48:;
  c->r[26]=c->r[26]+0x00000001u; // 800BDA48
  c->r[31]=c->r[31]+0x00000004u; // 800BDA4C
  cmps(c,0,(int32_t)c->r[26],2); // 800BDA50
  if (crb(c,0)) { IRQCHK(c); goto L_800BD970; } // 800BDA54
L_800BDA58:;
  cmps(c,0,(int32_t)c->r[27],0); // 800BDA58
  if (!crb(c,2)) { goto L_800BDB64; } // 800BDA5C
  c->r[31]=0u+0x805E0000u; // 800BDA60
  c->r[4]=0u+0x00000000u; // 800BDA64
  c->r[3]=c->r[31]+0xFFFFDFB0u; // 800BDA68
  c->lr=0x800BDA70u; f_8025007C(c); // 800BDA6C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDA70
  c->r[3]=c->r[31]+0xFFFFDFB0u; // 800BDA74
  c->r[4]=0u+0x00000000u; // 800BDA78
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BDA7C
  c->lr=0x800BDA84u; f_8025007C(c); // 800BDA80
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDA84
  c->r[5]=c->r[1]+0x0000003Cu; // 800BDA88
  {uint32_t ea=c->r[2]+0xFFFF8EB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDA8C
  c->r[6]=c->r[1]+0x00000030u; // 800BDA90
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800BDA94
  c->r[3]=c->r[13]+0xFFFF9380u; // 800BDA98
  c->r[4]=0u+0xFFFFFFFFu; // 800BDA9C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800BDAA0
  c->lr=0x800BDAA8u; f_80028BC0(c); // 800BDAA4
  c->r[3]=0u+0x80440000u; // 800BDAA8
  c->r[3]=c->r[3]+0xFFFFA720u; // 800BDAAC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800BDAB0
  c->lr=0x800BDAB8u; f_80381A54(c); // 800BDAB4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BDAB8
  c->r[3]=c->r[1]+0x00000008u; // 800BDABC
  c->r[4]=c->r[1]+0x00000024u; // 800BDAC0
  c->lr=0x800BDAC8u; f_8037CE54(c); // 800BDAC4
  c->r[3]=c->r[1]+0x0000000Cu; // 800BDAC8
  c->r[4]=c->r[1]+0x00000030u; // 800BDACC
  c->r[5]=c->r[1]+0x00000024u; // 800BDAD0
  c->lr=0x800BDAD8u; f_80064C74(c); // 800BDAD4
  c->r[3]=c->r[1]+0x00000060u; // 800BDAD8
  c->lr=0x800BDAE0u; f_80063ACC(c); // 800BDADC
  c->r[5]=0u+0x803F0000u; // 800BDAE0
  c->r[3]=c->r[1]+0x00000084u; // 800BDAE4
  c->r[5]=c->r[5]+0x00001AC0u; // 800BDAE8
  c->r[4]=c->r[1]+0x00000024u; // 800BDAEC
  W32(c->r[1]+0x00000080u,c->r[5]); // 800BDAF0
  c->lr=0x800BDAF8u; f_8003F484(c); // 800BDAF4
  c->r[3]=c->r[1]+0x00000090u; // 800BDAF8
  c->r[4]=c->r[1]+0x0000000Cu; // 800BDAFC
  c->lr=0x800BDB04u; f_8003F484(c); // 800BDB00
  c->r[3]=c->r[1]+0x00000114u; // 800BDB04
  c->lr=0x800BDB0Cu; f_8003F3AC(c); // 800BDB08
  c->r[3]=c->r[28]|c->r[28]; // 800BDB0C
  c->lr=0x800BDB14u; f_80068A78(c); // 800BDB10
  c->r[3]=R32(c->r[3]+0x00000028u); // 800BDB14
  c->r[4]=c->r[1]+0x00000114u; // 800BDB18
  c->r[5]=c->r[1]+0x00000060u; // 800BDB1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BDB20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800BDB24
  c->ctr=c->r[12]; // 800BDB28
  if (true) { c->lr=0x800BDB30u; dispatch(c,c->ctr); } // 800BDB2C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDB30
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDB34
  fcmp(c,0,c->f[1],c->f[0]); // 800BDB38
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BDB3C
  c->r[0]=c->cr; // 800BDB40
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BDB44
  if (crb(c,2)) { goto L_800BDB58; } // 800BDB48
  c->r[3]=c->r[1]+0x000000D8u; // 800BDB4C
  c->r[4]=0u+0x00000001u; // 800BDB50
  c->lr=0x800BDB58u; f_800BDBB4(c); // 800BDB54
L_800BDB58:;
  c->r[3]=c->r[1]+0x0000014Cu; // 800BDB58
  c->r[4]=0u+0xFFFFFFFFu; // 800BDB5C
  c->lr=0x800BDB64u; f_80046394(c); // 800BDB60
L_800BDB64:;
  c->r[0]=0u+0x00000007u; // 800BDB64
  c->r[5]=c->r[25]+0xFFFFFFFCu; // 800BDB68
  c->r[4]=c->r[1]+0x000000D4u; // 800BDB6C
  c->ctr=c->r[0]; // 800BDB70
L_800BDB74:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BDB74
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BDB78
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BDB7C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BDB80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDB74; } // 800BDB84
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BDB88
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BDB8C
  c->r[0]=0u+0x00001DA8u; // 800BDB90
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800BDB94
  {uint32_t ea=c->r[1]+0x00001DA0u; c->f[31]=RF64(ea);} // 800BDB98
  c->r[11]=c->r[1]+0x00001DA0u; // 800BDB9C
  c->lr=0x800BDBA4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BDBA0
  c->r[0]=R32(c->r[1]+0x00001DB4u); // 800BDBA4
  c->lr=c->r[0]; // 800BDBA8
  c->r[1]=c->r[1]+0x00001DB0u; // 800BDBAC
  return; // 800BDBB0
}

// fn_800BDBB4
void f_800BDBB4(Ctx* __restrict c) {
  trace_call(0x800BDBB4u);
  c->r[0]=0u+0x00000001u; // 800BDBB4
  cmps(c,0,(int32_t)c->r[4],1); // 800BDBB8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BDBBC
  if (!crb(c,2)) { goto L_800BDBD0; } // 800BDBC0
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDBC4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800BDBC8
  return; // 800BDBCC
L_800BDBD0:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDBD0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800BDBD4
  return; // 800BDBD8
}

// fn_800BDBDC
void f_800BDBDC(Ctx* __restrict c) {
  trace_call(0x800BDBDCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDBDC
  c->r[0]=c->lr; // 800BDBE0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800BDBE4
  c->r[11]=c->r[1]+0x000000A0u; // 800BDBE8
  c->lr=0x800BDBF0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BDBEC
  c->r[28]=c->r[3]|c->r[3]; // 800BDBF0
  c->r[3]=c->r[5]|c->r[5]; // 800BDBF4
  c->r[29]=c->r[6]|c->r[6]; // 800BDBF8
  c->lr=0x800BDC00u; f_80068A78(c); // 800BDBFC
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDC00
  c->r[31]=0u+0x00000001u; // 800BDC04
  W32(c->r[1]+0x00000050u,c->r[31]); // 800BDC08
  c->r[30]=c->r[3]|c->r[3]; // 800BDC0C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800BDC10
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BDC14
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BDC18
  c->ctr=c->r[12]; // 800BDC1C
  if (true) { c->lr=0x800BDC24u; dispatch(c,c->ctr); } // 800BDC20
  cmps(c,0,(int32_t)c->r[3],0); // 800BDC24
  if (crb(c,2)) { goto L_800BDC8C; } // 800BDC28
  c->r[12]=R32(c->r[30]+0x00000010u); // 800BDC2C
  c->r[3]=c->r[30]|c->r[30]; // 800BDC30
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BDC34
  c->ctr=c->r[12]; // 800BDC38
  if (true) { c->lr=0x800BDC40u; dispatch(c,c->ctr); } // 800BDC3C
  c->r[4]=c->r[3]|c->r[3]; // 800BDC40
  c->r[3]=c->r[1]+0x00000020u; // 800BDC44
  c->r[12]=R32(c->r[4]+0x00000000u); // 800BDC48
  c->r[5]=c->r[29]+0x00000004u; // 800BDC4C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BDC50
  c->ctr=c->r[12]; // 800BDC54
  if (true) { c->lr=0x800BDC5Cu; dispatch(c,c->ctr); } // 800BDC58
  c->r[3]=c->r[1]+0x00000014u; // 800BDC5C
  c->r[4]=c->r[1]+0x00000020u; // 800BDC60
  c->lr=0x800BDC68u; f_80032FD8(c); // 800BDC64
  c->lr=0x800BDC6Cu; f_80061A4C(c); // 800BDC68
  c->r[5]=c->r[1]+0x00000014u; // 800BDC6C
  c->r[6]=c->r[1]+0x00000008u; // 800BDC70
  c->r[3]=c->r[13]+0xFFFF9380u; // 800BDC74
  c->r[4]=0u+0xFFFFFFFFu; // 800BDC78
  c->lr=0x800BDC80u; f_80028E1C(c); // 800BDC7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDC80
  W32(c->r[1]+0x00000050u,c->r[31]); // 800BDC84
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800BDC88
L_800BDC8C:;
  c->r[0]=0u+0x00000007u; // 800BDC8C
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BDC90
  c->r[4]=c->r[1]+0x0000004Cu; // 800BDC94
  c->ctr=c->r[0]; // 800BDC98
L_800BDC9C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BDC9C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BDCA0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BDCA4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BDCA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDC9C; } // 800BDCAC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BDCB0
  c->r[11]=c->r[1]+0x000000A0u; // 800BDCB4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BDCB8
  c->lr=0x800BDCC0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BDCBC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800BDCC0
  c->lr=c->r[0]; // 800BDCC4
  c->r[1]=c->r[1]+0x000000A0u; // 800BDCC8
  return; // 800BDCCC
}

// fn_800BDCD0
void f_800BDCD0(Ctx* __restrict c) {
  trace_call(0x800BDCD0u);
  c->r[0]=0u+0x00000001u; // 800BDCD0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800BDCD4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BDCD8
  return; // 800BDCDC
}

// fn_800BDCE0
void f_800BDCE0(Ctx* __restrict c) {
  trace_call(0x800BDCE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDCE0
  c->r[0]=c->lr; // 800BDCE4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800BDCE8
  c->r[11]=c->r[1]+0x000000A0u; // 800BDCEC
  c->lr=0x800BDCF4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BDCF0
  c->r[28]=c->r[3]|c->r[3]; // 800BDCF4
  c->r[3]=c->r[5]|c->r[5]; // 800BDCF8
  c->r[29]=c->r[6]|c->r[6]; // 800BDCFC
  c->lr=0x800BDD04u; f_80068A78(c); // 800BDD00
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDD04
  c->r[31]=0u+0x00000001u; // 800BDD08
  W32(c->r[1]+0x00000050u,c->r[31]); // 800BDD0C
  c->r[30]=c->r[3]|c->r[3]; // 800BDD10
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800BDD14
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BDD18
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BDD1C
  c->ctr=c->r[12]; // 800BDD20
  if (true) { c->lr=0x800BDD28u; dispatch(c,c->ctr); } // 800BDD24
  cmps(c,0,(int32_t)c->r[3],0); // 800BDD28
  if (crb(c,2)) { goto L_800BDD90; } // 800BDD2C
  c->r[12]=R32(c->r[30]+0x00000010u); // 800BDD30
  c->r[3]=c->r[30]|c->r[30]; // 800BDD34
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BDD38
  c->ctr=c->r[12]; // 800BDD3C
  if (true) { c->lr=0x800BDD44u; dispatch(c,c->ctr); } // 800BDD40
  c->r[4]=c->r[3]|c->r[3]; // 800BDD44
  c->r[3]=c->r[1]+0x00000020u; // 800BDD48
  c->r[12]=R32(c->r[4]+0x00000000u); // 800BDD4C
  c->r[5]=c->r[29]+0x00000004u; // 800BDD50
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BDD54
  c->ctr=c->r[12]; // 800BDD58
  if (true) { c->lr=0x800BDD60u; dispatch(c,c->ctr); } // 800BDD5C
  c->r[3]=c->r[1]+0x00000014u; // 800BDD60
  c->r[4]=c->r[1]+0x00000020u; // 800BDD64
  c->lr=0x800BDD6Cu; f_80032FD8(c); // 800BDD68
  c->lr=0x800BDD70u; f_80061A4C(c); // 800BDD6C
  c->r[5]=c->r[1]+0x00000014u; // 800BDD70
  c->r[6]=c->r[1]+0x00000008u; // 800BDD74
  c->r[3]=c->r[13]+0xFFFF9380u; // 800BDD78
  c->r[4]=0u+0xFFFFFFFFu; // 800BDD7C
  c->lr=0x800BDD84u; f_80028E1C(c); // 800BDD80
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDD84
  W32(c->r[1]+0x00000050u,c->r[31]); // 800BDD88
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800BDD8C
L_800BDD90:;
  c->r[0]=0u+0x00000007u; // 800BDD90
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BDD94
  c->r[4]=c->r[1]+0x0000004Cu; // 800BDD98
  c->ctr=c->r[0]; // 800BDD9C
L_800BDDA0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BDDA0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BDDA4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BDDA8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BDDAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDDA0; } // 800BDDB0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BDDB4
  c->r[11]=c->r[1]+0x000000A0u; // 800BDDB8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BDDBC
  c->lr=0x800BDDC4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BDDC0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800BDDC4
  c->lr=c->r[0]; // 800BDDC8
  c->r[1]=c->r[1]+0x000000A0u; // 800BDDCC
  return; // 800BDDD0
}

// fn_800BDDD4
void f_800BDDD4(Ctx* __restrict c) {
  trace_call(0x800BDDD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDDD4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDDD8
  {uint32_t ea=c->r[6]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDDDC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BDDE0
  c->r[0]=R32(c->r[13]+0xFFFF8180u); // 800BDDE4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BDDE8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[1]);} // 800BDDEC
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800BDDF0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800BDDF4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800BDDF8
  c->r[5]=R32(c->r[1]+0x00000054u); // 800BDDFC
  if (!crb(c,2)) { goto L_800BDE14; } // 800BDE00
  c->r[4]=c->r[4]+0x00000001u; // 800BDE04
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[5]); // 800BDE08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800BDE0C
  c->r[4]=c->r[4]-c->r[0]; // 800BDE10
L_800BDE14:;
  c->r[6]=0u+0x00000000u; // 800BDE14
  c->r[0]=0u+0x00000007u; // 800BDE18
  W32(c->r[13]+0xFFFF8180u,c->r[4]); // 800BDE1C
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 800BDE20
  c->r[4]=c->r[1]+0x00000004u; // 800BDE24
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BDE28
  c->ctr=c->r[0]; // 800BDE2C
L_800BDE30:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BDE30
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BDE34
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BDE38
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BDE3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDE30; } // 800BDE40
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BDE44
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BDE48
  c->r[1]=c->r[1]+0x00000060u; // 800BDE4C
  return; // 800BDE50
}

// fn_800BDE54
void f_800BDE54(Ctx* __restrict c) {
  trace_call(0x800BDE54u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDE54
  c->r[0]=c->lr; // 800BDE58
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BDE5C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BDE60
  c->r[31]=c->r[3]|c->r[3]; // 800BDE64
  c->r[3]=c->r[1]+0x00000008u; // 800BDE68
  c->r[4]=R32(c->r[13]+0xFFFF8180u); // 800BDE6C
  c->lr=0x800BDE74u; f_800BDBB4(c); // 800BDE70
  c->r[0]=0u+0x00000007u; // 800BDE74
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BDE78
  c->r[4]=c->r[1]+0x00000004u; // 800BDE7C
  c->ctr=c->r[0]; // 800BDE80
L_800BDE84:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BDE84
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BDE88
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BDE8C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BDE90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDE84; } // 800BDE94
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BDE98
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BDE9C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BDEA0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BDEA4
  c->lr=c->r[0]; // 800BDEA8
  c->r[1]=c->r[1]+0x00000050u; // 800BDEAC
  return; // 800BDEB0
}

// fn_800BDEB4
void f_800BDEB4(Ctx* __restrict c) {
  trace_call(0x800BDEB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDEB4
  c->r[0]=c->lr; // 800BDEB8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BDEBC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800BDEC0
  c->r[31]=c->r[3]|c->r[3]; // 800BDEC4
  c->lr=0x800BDECCu; f_80291D94(c); // 800BDEC8
  c->r[3]=c->r[3]^0x80000000u; // 800BDECC
  c->r[0]=0u+0x43300000u; // 800BDED0
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800BDED4
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[3]=RF64(ea);} // 800BDED8
  W32(c->r[1]+0x00000048u,c->r[0]); // 800BDEDC
  {uint32_t ea=c->r[2]+0xFFFF8EB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BDEE0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 800BDEE4
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDEE8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800BDEEC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800BDEF0
  fcmp(c,0,c->f[1],c->f[0]); // 800BDEF4
  if (!crb(c,1)) { goto L_800BDF00; } // 800BDEF8
  c->f[1]=c->f[0]; // 800BDEFC
L_800BDF00:;
  c->r[3]=0u+0x00000001u; // 800BDF00
  c->r[0]=0u+0x00000007u; // 800BDF04
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BDF08
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BDF0C
  c->r[4]=c->r[1]+0x00000004u; // 800BDF10
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800BDF14
  c->ctr=c->r[0]; // 800BDF18
L_800BDF1C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BDF1C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BDF20
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BDF24
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BDF28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDF1C; } // 800BDF2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BDF30
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BDF34
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800BDF38
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BDF3C
  c->lr=c->r[0]; // 800BDF40
  c->r[1]=c->r[1]+0x00000060u; // 800BDF44
  return; // 800BDF48
}

// fn_800BDF4C
void f_800BDF4C(Ctx* __restrict c) {
  trace_call(0x800BDF4Cu);
  {uint32_t ea=c->r[2]+0xFFFF8EC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BDF4C
  {uint32_t ea=c->r[2]+0xFFFF8EC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDF50
  goto L_800BDF5C; // 800BDF54
L_800BDF58:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BDF58
L_800BDF5C:;
  fcmp(c,0,c->f[1],c->f[0]); // 800BDF5C
  if (crb(c,1)) { IRQCHK(c); goto L_800BDF58; } // 800BDF60
  {uint32_t ea=c->r[2]+0xFFFF8EC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BDF64
  {uint32_t ea=c->r[2]+0xFFFF8EC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDF68
  goto L_800BDF74; // 800BDF6C
L_800BDF70:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800BDF70
L_800BDF74:;
  fcmp(c,0,c->f[1],c->f[0]); // 800BDF74
  if (crb(c,0)) { IRQCHK(c); goto L_800BDF70; } // 800BDF78
  return; // 800BDF7C
}

// fn_800BDF80
void f_800BDF80(Ctx* __restrict c) {
  trace_call(0x800BDF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDF80
  c->r[0]=c->lr; // 800BDF84
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BDF88
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800BDF8C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800BDF90
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800BDF94
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800BDF98
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 800BDF9C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 800BDFA0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDFA4
  c->f[29]=c->f[1]; // 800BDFA8
  c->f[30]=c->f[2]; // 800BDFAC
  c->f[31]=c->f[3]; // 800BDFB0
  fcmp(c,0,c->f[1],c->f[0]); // 800BDFB4
  if (crb(c,1)) { goto L_800BDFC4; } // 800BDFB8
  fcmp(c,0,c->f[3],c->f[0]); // 800BDFBC
  if (!crb(c,0)) { goto L_800BDFE4; } // 800BDFC0
L_800BDFC4:;
  fcmp(c,0,c->f[1],c->f[2]); // 800BDFC4
  if (!crb(c,0)) { goto L_800BDFDC; } // 800BDFC8
  fcmp(c,0,c->f[2],c->f[3]); // 800BDFCC
  if (!crb(c,0)) { goto L_800BDFDC; } // 800BDFD0
  c->r[3]=0u+0x00000001u; // 800BDFD4
  goto L_800BE034; // 800BDFD8
L_800BDFDC:;
  c->r[3]=0u+0x00000000u; // 800BDFDC
  goto L_800BE034; // 800BDFE0
L_800BDFE4:;
  {uint32_t ea=c->r[2]+0xFFFF8EC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDFE4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[3]); // 800BDFE8
  c->lr=0x800BDFF0u; f_800BDF4C(c); // 800BDFEC
  fcmp(c,0,c->f[1],c->f[29]); // 800BDFF0
  if (!crb(c,0)) { goto L_800BE018; } // 800BDFF4
  fcmp(c,0,c->f[29],c->f[30]); // 800BDFF8
  if (!crb(c,0)) { goto L_800BE010; } // 800BDFFC
  fcmp(c,0,c->f[30],c->f[31]); // 800BE000
  if (!crb(c,0)) { goto L_800BE010; } // 800BE004
  c->r[3]=0u+0x00000001u; // 800BE008
  goto L_800BE034; // 800BE00C
L_800BE010:;
  c->r[3]=0u+0x00000000u; // 800BE010
  goto L_800BE034; // 800BE014
L_800BE018:;
  fcmp(c,0,c->f[29],c->f[30]); // 800BE018
  if (crb(c,1)) { goto L_800BE028; } // 800BE01C
  fcmp(c,0,c->f[30],c->f[31]); // 800BE020
  if (!crb(c,1)) { goto L_800BE030; } // 800BE024
L_800BE028:;
  c->r[3]=0u+0x00000001u; // 800BE028
  goto L_800BE034; // 800BE02C
L_800BE030:;
  c->r[3]=0u+0x00000000u; // 800BE030
L_800BE034:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800BE034
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800BE038
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800BE03C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800BE040
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 800BE044
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BE048
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 800BE04C
  c->lr=c->r[0]; // 800BE050
  c->r[1]=c->r[1]+0x00000040u; // 800BE054
  return; // 800BE058
}

// fn_800BE05C
void f_800BE05C(Ctx* __restrict c) {
  trace_call(0x800BE05Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE05C
  c->r[0]=c->lr; // 800BE060
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BE064
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800BE068
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800BE06C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800BE070
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800BE074
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BE078
  c->r[31]=c->r[6]|c->r[6]; // 800BE07C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800BE080
  c->r[30]=c->r[3]|c->r[3]; // 800BE084
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE088
  c->lr=0x800BE090u; f_800BDF4C(c); // 800BE08C
  c->f[31]=c->f[1]; // 800BE090
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE094
  c->lr=0x800BE09Cu; f_800BDF4C(c); // 800BE098
  c->f[30]=c->f[1]; // 800BE09C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE0A0
  c->lr=0x800BE0A8u; f_800BDF4C(c); // 800BE0A4
  fcmp(c,0,c->f[1],c->f[31]); // 800BE0A8
  c->f[3]=c->f[1]; // 800BE0AC
  if (!crb(c,1)) { goto L_800BE0D0; } // 800BE0B0
  c->f[1]=c->f[31]; // 800BE0B4
  c->f[2]=c->f[30]; // 800BE0B8
  c->lr=0x800BE0C0u; f_800BDF80(c); // 800BE0BC
  c->r[4]=c->r[3]|c->r[3]; // 800BE0C0
  c->r[3]=c->r[1]+0x00000008u; // 800BE0C4
  c->lr=0x800BE0CCu; f_800BDBB4(c); // 800BE0C8
  goto L_800BE0E8; // 800BE0CC
L_800BE0D0:;
  c->f[2]=c->f[30]; // 800BE0D0
  c->f[3]=c->f[31]; // 800BE0D4
  c->lr=0x800BE0DCu; f_800BDF80(c); // 800BE0D8
  c->r[4]=c->r[3]|c->r[3]; // 800BE0DC
  c->r[3]=c->r[1]+0x00000008u; // 800BE0E0
  c->lr=0x800BE0E8u; f_800BDBB4(c); // 800BE0E4
L_800BE0E8:;
  c->r[0]=0u+0x00000007u; // 800BE0E8
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800BE0EC
  c->r[4]=c->r[1]+0x00000004u; // 800BE0F0
  c->ctr=c->r[0]; // 800BE0F4
L_800BE0F8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE0F8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE0FC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE100
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE104
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE0F8; } // 800BE108
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE10C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE110
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800BE114
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800BE118
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800BE11C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800BE120
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BE124
  c->r[30]=R32(c->r[1]+0x00000048u); // 800BE128
  c->r[0]=R32(c->r[1]+0x00000074u); // 800BE12C
  c->lr=c->r[0]; // 800BE130
  c->r[1]=c->r[1]+0x00000070u; // 800BE134
  return; // 800BE138
}

// fn_800BE13C
void f_800BE13C(Ctx* __restrict c) {
  trace_call(0x800BE13Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE13C
  c->r[0]=c->lr; // 800BE140
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BE144
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BE148
  c->r[31]=c->r[3]|c->r[3]; // 800BE14C
  c->r[3]=c->r[5]|c->r[5]; // 800BE150
  c->lr=0x800BE158u; f_80068A78(c); // 800BE154
  {uint32_t ea=c->r[3]+0x000003A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE158
  c->r[3]=0u+0x00000001u; // 800BE15C
  c->r[0]=0u+0x00000007u; // 800BE160
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BE164
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BE168
  c->r[4]=c->r[1]+0x00000004u; // 800BE16C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BE170
  c->ctr=c->r[0]; // 800BE174
L_800BE178:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE178
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE17C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE180
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE184
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE178; } // 800BE188
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE18C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE190
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BE194
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BE198
  c->lr=c->r[0]; // 800BE19C
  c->r[1]=c->r[1]+0x00000050u; // 800BE1A0
  return; // 800BE1A4
}

// fn_800BE1A8
void f_800BE1A8(Ctx* __restrict c) {
  trace_call(0x800BE1A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE1A8
  c->r[4]=0u+0x00000001u; // 800BE1AC
  c->r[0]=0u+0x00000007u; // 800BE1B0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE1B4
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 800BE1B8
  W32(c->r[1]+0x00000008u,c->r[4]); // 800BE1BC
  c->r[4]=c->r[1]+0x00000004u; // 800BE1C0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BE1C4
  c->ctr=c->r[0]; // 800BE1C8
L_800BE1CC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE1CC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE1D0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE1D4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE1D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE1CC; } // 800BE1DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE1E0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE1E4
  c->r[1]=c->r[1]+0x00000050u; // 800BE1E8
  return; // 800BE1EC
}

// fn_800BE1F0
void f_800BE1F0(Ctx* __restrict c) {
  trace_call(0x800BE1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE1F0
  c->r[0]=c->lr; // 800BE1F4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BE1F8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800BE1FC
  c->r[31]=c->r[3]|c->r[3]; // 800BE200
  c->r[3]=c->r[5]|c->r[5]; // 800BE204
  c->lr=0x800BE20Cu; f_80068A78(c); // 800BE208
  c->r[0]=0u+0x00000001u; // 800BE20C
  c->r[6]=0u+0x43300000u; // 800BE210
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BE214
  c->r[0]=0u+0x00000007u; // 800BE218
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800BE21C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BE220
  c->r[3]=R32(c->r[3]+0x0000088Cu); // 800BE224
  c->r[4]=c->r[1]+0x00000004u; // 800BE228
  W32(c->r[1]+0x00000048u,c->r[6]); // 800BE22C
  c->r[3]=c->r[3]^0x80000000u; // 800BE230
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800BE234
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800BE238
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BE23C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800BE240
  c->ctr=c->r[0]; // 800BE244
L_800BE248:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE248
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE24C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE250
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE254
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE248; } // 800BE258
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE25C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE260
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800BE264
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BE268
  c->lr=c->r[0]; // 800BE26C
  c->r[1]=c->r[1]+0x00000060u; // 800BE270
  return; // 800BE274
}

// fn_800BE278
void f_800BE278(Ctx* __restrict c) {
  trace_call(0x800BE278u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE278
  c->r[0]=c->lr; // 800BE27C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BE280
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800BE284
  c->r[31]=c->r[6]|c->r[6]; // 800BE288
  W32(c->r[1]+0x00000058u,c->r[30]); // 800BE28C
  c->r[30]=c->r[3]|c->r[3]; // 800BE290
  c->r[3]=c->r[5]|c->r[5]; // 800BE294
  c->lr=0x800BE29Cu; f_80068A78(c); // 800BE298
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE29C
  c->r[6]=0u+0x00000000u; // 800BE2A0
  c->r[0]=0u+0x00000007u; // 800BE2A4
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800BE2A8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BE2AC
  c->r[4]=c->r[1]+0x00000004u; // 800BE2B0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800BE2B4
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800BE2B8
  W32(c->r[3]+0x0000088Cu,c->r[7]); // 800BE2BC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BE2C0
  c->ctr=c->r[0]; // 800BE2C4
L_800BE2C8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE2C8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE2CC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE2D0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE2D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE2C8; } // 800BE2D8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE2DC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE2E0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800BE2E4
  c->r[30]=R32(c->r[1]+0x00000058u); // 800BE2E8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BE2EC
  c->lr=c->r[0]; // 800BE2F0
  c->r[1]=c->r[1]+0x00000060u; // 800BE2F4
  return; // 800BE2F8
}

// fn_800BE2FC
void f_800BE2FC(Ctx* __restrict c) {
  trace_call(0x800BE2FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE2FC
  c->r[0]=c->lr; // 800BE300
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BE304
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BE308
  c->r[30]=c->r[3]|c->r[3]; // 800BE30C
  c->r[3]=c->r[5]|c->r[5]; // 800BE310
  c->lr=0x800BE318u; f_80068A78(c); // 800BE314
  c->r[31]=c->r[3]|c->r[3]; // 800BE318
  c->lr=0x800BE320u; f_80127CC0(c); // 800BE31C
  c->r[10]=R32(c->r[3]+0x00000000u); // 800BE320
  c->r[4]=0u+0x00030000u; // 800BE324
  c->r[8]=c->r[4]+0x00000D40u; // 800BE328
  c->r[6]=0u+0x00000000u; // 800BE32C
  c->r[9]=c->r[10]+0x00000001u; // 800BE330
  c->r[0]=0u+0x00000007u; // 800BE334
  c->r[7]=divw((int32_t)c->r[9],(int32_t)c->r[8]); // 800BE338
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800BE33C
  c->r[4]=c->r[1]+0x00000004u; // 800BE340
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[8]); // 800BE344
  c->r[7]=c->r[9]-c->r[7]; // 800BE348
  W32(c->r[3]+0x00000000u,c->r[7]); // 800BE34C
  W32(c->r[31]+0x000008A0u,c->r[10]); // 800BE350
  W32(c->r[1]+0x00000008u,c->r[6]); // 800BE354
  c->ctr=c->r[0]; // 800BE358
L_800BE35C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE35C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE360
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE364
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE368
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE35C; } // 800BE36C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE370
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE374
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BE378
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BE37C
  c->lr=c->r[0]; // 800BE380
  c->r[1]=c->r[1]+0x00000050u; // 800BE384
  return; // 800BE388
}

// fn_800BE38C
void f_800BE38C(Ctx* __restrict c) {
  trace_call(0x800BE38Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE38C
  c->r[0]=c->lr; // 800BE390
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BE394
  c->r[11]=c->r[1]+0x00000060u; // 800BE398
  c->lr=0x800BE3A0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BE39C
  c->r[29]=c->r[3]|c->r[3]; // 800BE3A0
  c->r[3]=c->r[5]|c->r[5]; // 800BE3A4
  c->r[30]=c->r[6]|c->r[6]; // 800BE3A8
  c->lr=0x800BE3B0u; f_80068A78(c); // 800BE3AC
  c->r[31]=c->r[3]|c->r[3]; // 800BE3B0
  c->lr=0x800BE3B8u; f_80232150(c); // 800BE3B4
  {uint32_t ea=c->r[31]+0x00000398u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE3B8
  c->r[4]=c->r[30]+0x00000004u; // 800BE3BC
  c->lr=0x800BE3C4u; f_80232230(c); // 800BE3C0
  c->r[3]=0u+0x00000001u; // 800BE3C4
  c->r[0]=0u+0x00000007u; // 800BE3C8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BE3CC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BE3D0
  c->r[4]=c->r[1]+0x00000004u; // 800BE3D4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800BE3D8
  c->ctr=c->r[0]; // 800BE3DC
L_800BE3E0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE3E0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE3E4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE3E8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE3EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE3E0; } // 800BE3F0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE3F4
  c->r[11]=c->r[1]+0x00000060u; // 800BE3F8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE3FC
  c->lr=0x800BE404u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BE400
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BE404
  c->lr=c->r[0]; // 800BE408
  c->r[1]=c->r[1]+0x00000060u; // 800BE40C
  return; // 800BE410
}

// fn_800BE414
void f_800BE414(Ctx* __restrict c) {
  trace_call(0x800BE414u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE414
  c->r[0]=c->lr; // 800BE418
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BE41C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800BE420
  c->r[31]=c->r[3]|c->r[3]; // 800BE424
  c->r[4]=R32(c->r[5]+0x00000000u); // 800BE428
  c->r[0]=R32(c->r[5]+0x00000004u); // 800BE42C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800BE430
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BE434
  c->lr=0x800BE43Cu; f_80128B5C(c); // 800BE438
  c->r[4]=c->r[1]+0x00000008u; // 800BE43C
  c->lr=0x800BE444u; f_8012BDE8(c); // 800BE440
  c->r[0]=c->r[3]^0x80000000u; // 800BE444
  c->r[3]=0u+0x43300000u; // 800BE448
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BE44C
  c->r[6]=0u+0x00000001u; // 800BE450
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800BE454
  c->r[0]=0u+0x00000007u; // 800BE458
  W32(c->r[1]+0x00000050u,c->r[3]); // 800BE45C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BE460
  c->r[4]=c->r[1]+0x0000000Cu; // 800BE464
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800BE468
  W32(c->r[1]+0x00000010u,c->r[6]); // 800BE46C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BE470
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800BE474
  c->ctr=c->r[0]; // 800BE478
L_800BE47C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE47C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE480
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE484
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE488
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE47C; } // 800BE48C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE490
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE494
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800BE498
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BE49C
  c->lr=c->r[0]; // 800BE4A0
  c->r[1]=c->r[1]+0x00000060u; // 800BE4A4
  return; // 800BE4A8
}

// fn_800BE4AC
void f_800BE4AC(Ctx* __restrict c) {
  trace_call(0x800BE4ACu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE4AC
  c->r[0]=c->lr; // 800BE4B0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800BE4B4
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800BE4B8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800BE4BC
  c->r[11]=c->r[1]+0x000000B0u; // 800BE4C0
  c->lr=0x800BE4C8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BE4C4
  c->r[30]=c->r[5]|c->r[5]; // 800BE4C8
  c->r[28]=c->r[3]|c->r[3]; // 800BE4CC
  c->r[29]=c->r[6]|c->r[6]; // 800BE4D0
  c->r[3]=c->r[30]|c->r[30]; // 800BE4D4
  c->lr=0x800BE4DCu; f_80068A78(c); // 800BE4D8
  c->r[4]=R32(c->r[30]+0x00000000u); // 800BE4DC
  c->r[31]=c->r[3]|c->r[3]; // 800BE4E0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800BE4E4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800BE4E8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BE4EC
  c->lr=0x800BE4F4u; f_80128B5C(c); // 800BE4F0
  c->r[4]=c->r[3]|c->r[3]; // 800BE4F4
  c->r[3]=c->r[1]+0x0000001Cu; // 800BE4F8
  c->r[5]=c->r[1]+0x00000008u; // 800BE4FC
  c->lr=0x800BE504u; f_80129C6C(c); // 800BE500
  c->r[12]=R32(c->r[31]+0x00000010u); // 800BE504
  c->r[3]=c->r[31]|c->r[31]; // 800BE508
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE50C
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BE510
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[0]); // 800BE514
  c->ctr=c->r[12]; // 800BE518
  if (true) { c->lr=0x800BE520u; dispatch(c,c->ctr); } // 800BE51C
  c->r[4]=c->r[3]|c->r[3]; // 800BE520
  c->r[3]=c->r[1]+0x00000028u; // 800BE524
  c->r[12]=R32(c->r[4]+0x00000000u); // 800BE528
  c->r[12]=R32(c->r[12]+0x00000040u); // 800BE52C
  c->ctr=c->r[12]; // 800BE530
  if (true) { c->lr=0x800BE538u; dispatch(c,c->ctr); } // 800BE534
  c->r[3]=c->r[1]+0x00000010u; // 800BE538
  c->r[4]=c->r[1]+0x00000028u; // 800BE53C
  c->lr=0x800BE544u; f_80032FD8(c); // 800BE540
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE544
  c->r[3]=c->r[1]+0x00000010u; // 800BE548
  c->r[4]=c->r[1]+0x0000001Cu; // 800BE54C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800BE550
  c->lr=0x800BE558u; f_80265924(c); // 800BE554
  fcmp(c,0,c->f[1],c->f[31]); // 800BE558
  if (!crb(c,0)) { goto L_800BE570; } // 800BE55C
  c->r[3]=c->r[1]+0x00000058u; // 800BE560
  c->r[4]=0u+0x00000001u; // 800BE564
  c->lr=0x800BE56Cu; f_800BDBB4(c); // 800BE568
  goto L_800BE57C; // 800BE56C
L_800BE570:;
  c->r[3]=c->r[1]+0x00000058u; // 800BE570
  c->r[4]=0u+0x00000000u; // 800BE574
  c->lr=0x800BE57Cu; f_800BDBB4(c); // 800BE578
L_800BE57C:;
  c->r[0]=0u+0x00000007u; // 800BE57C
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BE580
  c->r[4]=c->r[1]+0x00000054u; // 800BE584
  c->ctr=c->r[0]; // 800BE588
L_800BE58C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE58C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE590
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE594
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE598
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE58C; } // 800BE59C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE5A0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE5A4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800BE5A8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800BE5AC
  c->r[11]=c->r[1]+0x000000B0u; // 800BE5B0
  c->lr=0x800BE5B8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BE5B4
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800BE5B8
  c->lr=c->r[0]; // 800BE5BC
  c->r[1]=c->r[1]+0x000000C0u; // 800BE5C0
  return; // 800BE5C4
}

// fn_800BE5C8
void f_800BE5C8(Ctx* __restrict c) {
  trace_call(0x800BE5C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE5C8
  c->r[0]=c->lr; // 800BE5CC
  c->r[4]=0u+0x00000000u; // 800BE5D0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BE5D4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800BE5D8
  c->r[31]=c->r[3]|c->r[3]; // 800BE5DC
  c->r[3]=c->r[1]+0x00000018u; // 800BE5E0
  c->lr=0x800BE5E8u; f_800BDBB4(c); // 800BE5E4
  c->lr=0x800BE5ECu; f_8010492C(c); // 800BE5E8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800BE5EC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BE5F0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800BE5F4
  c->r[3]=c->r[1]+0x00000010u; // 800BE5F8
  W32(c->r[1]+0x00000014u,c->r[4]); // 800BE5FC
  c->lr=0x800BE604u; f_8003F1D4(c); // 800BE600
  cmps(c,0,(int32_t)c->r[3],0); // 800BE604
  if (crb(c,2)) { goto L_800BE618; } // 800BE608
  c->r[3]=c->r[1]+0x00000018u; // 800BE60C
  c->r[4]=0u+0x00000001u; // 800BE610
  c->lr=0x800BE618u; f_800BDBB4(c); // 800BE614
L_800BE618:;
  c->r[0]=0u+0x00000007u; // 800BE618
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BE61C
  c->r[4]=c->r[1]+0x00000014u; // 800BE620
  c->ctr=c->r[0]; // 800BE624
L_800BE628:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE628
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE62C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE630
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE634
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE628; } // 800BE638
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE63C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE640
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800BE644
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BE648
  c->lr=c->r[0]; // 800BE64C
  c->r[1]=c->r[1]+0x00000060u; // 800BE650
  return; // 800BE654
}

// fn_800BE658
void f_800BE658(Ctx* __restrict c) {
  trace_call(0x800BE658u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE658
  c->r[0]=c->lr; // 800BE65C
  c->r[4]=0u+0x00000000u; // 800BE660
  W32(c->r[1]+0x00000084u,c->r[0]); // 800BE664
  {uint32_t ea=c->r[1]+0x00000070u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BE668
  c->r[28]=c->r[3]|c->r[3]; // 800BE66C
  c->r[29]=c->r[5]|c->r[5]; // 800BE670
  c->r[3]=c->r[1]+0x00000028u; // 800BE674
  c->lr=0x800BE67Cu; f_800BDBB4(c); // 800BE678
  c->lr=0x800BE680u; f_8010492C(c); // 800BE67C
  c->r[5]=R32(c->r[29]+0x00000000u); // 800BE680
  c->r[30]=0u+0x00000001u; // 800BE684
  c->r[0]=R32(c->r[29]+0x00000004u); // 800BE688
  c->r[31]=0u+0x00000000u; // 800BE68C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800BE690
  W32(c->r[1]+0x00000018u,c->r[3]); // 800BE694
  W32(c->r[1]+0x00000020u,c->r[3]); // 800BE698
  W32(c->r[1]+0x00000010u,c->r[3]); // 800BE69C
  c->r[3]=c->r[1]+0x00000010u; // 800BE6A0
  W32(c->r[1]+0x00000024u,c->r[4]); // 800BE6A4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800BE6A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BE6AC
  W32(c->r[1]+0x00000014u,c->r[4]); // 800BE6B0
  c->lr=0x800BE6B8u; f_8003F1D4(c); // 800BE6B4
  c->r[0]=cntlz(c->r[3]); // 800BE6B8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800BE6BC
  if (crb(c,2)) { goto L_800BE6DC; } // 800BE6C0
  c->r[3]=c->r[1]+0x00000008u; // 800BE6C4
  c->lr=0x800BE6CCu; f_8003F1D4(c); // 800BE6C8
  c->r[0]=cntlz(c->r[3]); // 800BE6CC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800BE6D0
  if (crb(c,2)) { goto L_800BE6DC; } // 800BE6D4
  c->r[31]=0u+0x00000001u; // 800BE6D8
L_800BE6DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BE6DC
  if (!crb(c,2)) { goto L_800BE744; } // 800BE6E0
  c->r[3]=c->r[1]+0x00000010u; // 800BE6E4
  c->r[29]=0u+0x00000000u; // 800BE6E8
  c->r[31]=0u+0x00000000u; // 800BE6EC
  c->lr=0x800BE6F4u; f_8003F1D4(c); // 800BE6F0
  cmps(c,0,(int32_t)c->r[3],0); // 800BE6F4
  if (crb(c,2)) { goto L_800BE710; } // 800BE6F8
  c->r[3]=c->r[1]+0x00000008u; // 800BE6FC
  c->lr=0x800BE704u; f_8003F1D4(c); // 800BE700
  cmps(c,0,(int32_t)c->r[3],0); // 800BE704
  if (crb(c,2)) { goto L_800BE710; } // 800BE708
  c->r[31]=0u+0x00000001u; // 800BE70C
L_800BE710:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BE710
  if (crb(c,2)) { goto L_800BE738; } // 800BE714
  c->r[3]=c->r[1]+0x00000008u; // 800BE718
  c->lr=0x800BE720u; f_80068A78(c); // 800BE71C
  c->r[31]=c->r[3]|c->r[3]; // 800BE720
  c->r[3]=c->r[1]+0x00000010u; // 800BE724
  c->lr=0x800BE72Cu; f_80068A78(c); // 800BE728
  cmpu(c,0,c->r[3],c->r[31]); // 800BE72C
  if (!crb(c,2)) { goto L_800BE738; } // 800BE730
  c->r[29]=0u+0x00000001u; // 800BE734
L_800BE738:;
  cmps(c,0,(int32_t)c->r[29],0); // 800BE738
  if (!crb(c,2)) { goto L_800BE744; } // 800BE73C
  c->r[30]=0u+0x00000000u; // 800BE740
L_800BE744:;
  cmps(c,0,(int32_t)c->r[30],0); // 800BE744
  if (crb(c,2)) { goto L_800BE758; } // 800BE748
  c->r[3]=c->r[1]+0x00000028u; // 800BE74C
  c->r[4]=0u+0x00000001u; // 800BE750
  c->lr=0x800BE758u; f_800BDBB4(c); // 800BE754
L_800BE758:;
  c->r[0]=0u+0x00000007u; // 800BE758
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BE75C
  c->r[4]=c->r[1]+0x00000024u; // 800BE760
  c->ctr=c->r[0]; // 800BE764
L_800BE768:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE768
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE76C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE770
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE774
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE768; } // 800BE778
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE77C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE780
  {uint32_t ea=c->r[1]+0x00000070u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BE784
  c->r[0]=R32(c->r[1]+0x00000084u); // 800BE788
  c->lr=c->r[0]; // 800BE78C
  c->r[1]=c->r[1]+0x00000080u; // 800BE790
  return; // 800BE794
}

// fn_800BE798
void f_800BE798(Ctx* __restrict c) {
  trace_call(0x800BE798u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE798
  c->r[0]=c->lr; // 800BE79C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BE7A0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800BE7A4
  c->r[31]=c->r[5]|c->r[5]; // 800BE7A8
  W32(c->r[1]+0x00000058u,c->r[30]); // 800BE7AC
  c->r[30]=c->r[3]|c->r[3]; // 800BE7B0
  c->r[3]=c->r[31]|c->r[31]; // 800BE7B4
  c->lr=0x800BE7BCu; f_80068A78(c); // 800BE7B8
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BE7BC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BE7C0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BE7C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BE7C8
  c->lr=0x800BE7D0u; f_80128B5C(c); // 800BE7CC
  {uint32_t ea=c->r[2]+0xFFFF8ECCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE7D0
  c->r[4]=c->r[1]+0x00000008u; // 800BE7D4
  c->lr=0x800BE7DCu; f_8012A160(c); // 800BE7D8
  cmps(c,0,(int32_t)c->r[3],0); // 800BE7DC
  if (crb(c,2)) { goto L_800BE7F4; } // 800BE7E0
  c->r[3]=c->r[1]+0x00000010u; // 800BE7E4
  c->r[4]=0u+0x00000001u; // 800BE7E8
  c->lr=0x800BE7F0u; f_800BDBB4(c); // 800BE7EC
  goto L_800BE800; // 800BE7F0
L_800BE7F4:;
  c->r[3]=c->r[1]+0x00000010u; // 800BE7F4
  c->r[4]=0u+0x00000000u; // 800BE7F8
  c->lr=0x800BE800u; f_800BDBB4(c); // 800BE7FC
L_800BE800:;
  c->r[0]=0u+0x00000007u; // 800BE800
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800BE804
  c->r[4]=c->r[1]+0x0000000Cu; // 800BE808
  c->ctr=c->r[0]; // 800BE80C
L_800BE810:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE810
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE814
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE818
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE81C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE810; } // 800BE820
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE824
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE828
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800BE82C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800BE830
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BE834
  c->lr=c->r[0]; // 800BE838
  c->r[1]=c->r[1]+0x00000060u; // 800BE83C
  return; // 800BE840
}

// fn_800BE844
void f_800BE844(Ctx* __restrict c) {
  trace_call(0x800BE844u);
  {uint32_t ea=c->r[1]+0xFFFFF140u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE844
  c->r[0]=c->lr; // 800BE848
  W32(c->r[1]+0x00000EC4u,c->r[0]); // 800BE84C
  c->r[11]=c->r[1]+0x00000EC0u; // 800BE850
  c->lr=0x800BE858u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BE854
  c->r[29]=c->r[3]|c->r[3]; // 800BE858
  c->r[3]=c->r[5]|c->r[5]; // 800BE85C
  c->r[30]=c->r[6]|c->r[6]; // 800BE860
  c->lr=0x800BE868u; f_80068A78(c); // 800BE864
  c->r[31]=c->r[3]|c->r[3]; // 800BE868
  c->r[3]=c->r[1]+0x00000080u; // 800BE86C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800BE870
  c->r[4]=c->r[31]+0x000008D0u; // 800BE874
  c->r[12]=R32(c->r[12]+0x00000040u); // 800BE878
  c->ctr=c->r[12]; // 800BE87C
  if (true) { c->lr=0x800BE884u; dispatch(c,c->ctr); } // 800BE880
  c->r[3]=c->r[1]+0x000000B0u; // 800BE884
  c->lr=0x800BE88Cu; f_800462E8(c); // 800BE888
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE88C
  c->r[3]=c->r[1]+0x00000038u; // 800BE890
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE894
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BE898
  c->lr=0x800BE8A0u; f_800521A0(c); // 800BE89C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE8A0
  c->r[3]=c->r[1]+0x00000008u; // 800BE8A4
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE8A8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BE8AC
  c->lr=0x800BE8B4u; f_800521A0(c); // 800BE8B0
  {uint32_t ea=c->r[2]+0xFFFF8ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE8B4
  c->r[3]=c->r[1]+0x00000014u; // 800BE8B8
  c->r[4]=c->r[1]+0x00000008u; // 800BE8BC
  c->lr=0x800BE8C4u; f_80064C58(c); // 800BE8C0
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BE8C4
  c->r[3]=c->r[1]+0x00000020u; // 800BE8C8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BE8CC
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BE8D0
  c->lr=0x800BE8D8u; f_800521A0(c); // 800BE8D4
  c->r[3]=c->r[1]+0x0000002Cu; // 800BE8D8
  c->r[4]=c->r[1]+0x00000020u; // 800BE8DC
  c->r[5]=c->r[1]+0x00000014u; // 800BE8E0
  c->lr=0x800BE8E8u; f_80064C34(c); // 800BE8E4
  c->r[3]=0u+0x80450000u; // 800BE8E8
  c->r[4]=c->r[1]+0x000000B0u; // 800BE8EC
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800BE8F0
  c->r[5]=c->r[1]+0x00000038u; // 800BE8F4
  c->r[6]=c->r[1]+0x0000002Cu; // 800BE8F8
  c->r[7]=0u+0x00000000u; // 800BE8FC
  c->lr=0x800BE904u; f_80044D14(c); // 800BE900
  cmps(c,0,(int32_t)c->r[3],0); // 800BE904
  if (crb(c,2)) { goto L_800BE918; } // 800BE908
  c->r[3]=c->r[1]+0x00000080u; // 800BE90C
  c->r[4]=c->r[1]+0x000000B8u; // 800BE910
  c->lr=0x800BE918u; f_80032FF4(c); // 800BE914
L_800BE918:;
  c->r[4]=c->r[31]|c->r[31]; // 800BE918
  c->r[3]=c->r[31]+0x00002058u; // 800BE91C
  c->r[5]=c->r[30]+0x00000004u; // 800BE920
  c->r[6]=c->r[1]+0x00000080u; // 800BE924
  c->lr=0x800BE92Cu; f_8006F510(c); // 800BE928
  c->r[3]=0u+0x00000000u; // 800BE92C
  c->r[0]=0u+0x00000007u; // 800BE930
  W32(c->r[1]+0x00000044u,c->r[3]); // 800BE934
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BE938
  c->r[4]=c->r[1]+0x00000040u; // 800BE93C
  c->ctr=c->r[0]; // 800BE940
L_800BE944:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE944
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE948
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE94C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BE950
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE944; } // 800BE954
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BE958
  c->r[3]=c->r[1]+0x000000B0u; // 800BE95C
  c->r[4]=0u+0xFFFFFFFFu; // 800BE960
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BE964
  c->lr=0x800BE96Cu; f_80046394(c); // 800BE968
  c->r[11]=c->r[1]+0x00000EC0u; // 800BE96C
  c->lr=0x800BE974u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BE970
  c->r[0]=R32(c->r[1]+0x00000EC4u); // 800BE974
  c->lr=c->r[0]; // 800BE978
  c->r[1]=c->r[1]+0x00000EC0u; // 800BE97C
  return; // 800BE980
}

// fn_800BE984
void f_800BE984(Ctx* __restrict c) {
  trace_call(0x800BE984u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE984
  c->r[0]=c->lr; // 800BE988
  W32(c->r[1]+0x00000094u,c->r[0]); // 800BE98C
  {uint32_t ea=c->r[1]+0x00000084u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BE990
  c->r[29]=c->r[3]|c->r[3]; // 800BE994
  c->r[3]=c->r[5]|c->r[5]; // 800BE998
  c->r[30]=c->r[6]|c->r[6]; // 800BE99C
  c->lr=0x800BE9A4u; f_80068A78(c); // 800BE9A0
  c->r[31]=c->r[3]|c->r[3]; // 800BE9A4
  c->r[3]=c->r[1]+0x00000044u; // 800BE9A8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800BE9AC
  c->r[4]=c->r[31]+0x000008D0u; // 800BE9B0
  c->r[5]=c->r[30]+0x00000004u; // 800BE9B4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BE9B8
  c->ctr=c->r[12]; // 800BE9BC
  if (true) { c->lr=0x800BE9C4u; dispatch(c,c->ctr); } // 800BE9C0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800BE9C4
  c->r[3]=c->r[31]+0x000008D0u; // 800BE9C8
  c->r[4]=c->r[1]+0x00000044u; // 800BE9CC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800BE9D0
  c->ctr=c->r[12]; // 800BE9D4
  if (true) { c->lr=0x800BE9DCu; dispatch(c,c->ctr); } // 800BE9D8
  c->r[3]=0u+0x00000000u; // 800BE9DC
  c->r[0]=0u+0x00000007u; // 800BE9E0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BE9E4
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BE9E8
  c->r[4]=c->r[1]+0x00000004u; // 800BE9EC
  c->ctr=c->r[0]; // 800BE9F0
L_800BE9F4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BE9F4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BE9F8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BE9FC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BEA00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE9F4; } // 800BEA04
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BEA08
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BEA0C
  {uint32_t ea=c->r[1]+0x00000084u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BEA10
  c->r[0]=R32(c->r[1]+0x00000094u); // 800BEA14
  c->lr=c->r[0]; // 800BEA18
  c->r[1]=c->r[1]+0x00000090u; // 800BEA1C
  return; // 800BEA20
}

// fn_800BEA24
void f_800BEA24(Ctx* __restrict c) {
  trace_call(0x800BEA24u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEA24
  c->r[0]=c->lr; // 800BEA28
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800BEA2C
  c->r[11]=c->r[1]+0x000000F0u; // 800BEA30
  c->lr=0x800BEA38u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BEA34
  c->r[29]=c->r[3]|c->r[3]; // 800BEA38
  c->r[3]=c->r[5]|c->r[5]; // 800BEA3C
  c->r[30]=c->r[6]|c->r[6]; // 800BEA40
  c->lr=0x800BEA48u; f_80068A78(c); // 800BEA44
  c->r[31]=c->r[3]|c->r[3]; // 800BEA48
  c->r[3]=c->r[1]+0x000000A4u; // 800BEA4C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800BEA50
  c->r[4]=c->r[31]+0x000008D0u; // 800BEA54
  c->r[12]=R32(c->r[12]+0x00000040u); // 800BEA58
  c->ctr=c->r[12]; // 800BEA5C
  if (true) { c->lr=0x800BEA64u; dispatch(c,c->ctr); } // 800BEA60
  c->r[3]=c->r[1]+0x00000074u; // 800BEA64
  c->lr=0x800BEA6Cu; f_80264680(c); // 800BEA68
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEA6C
  c->r[3]=c->r[1]+0x00000074u; // 800BEA70
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEA74
  {uint32_t ea=c->r[2]+0xFFFF8ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEA78
  c->f[3]=c->f[1]; // 800BEA7C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800BEA80
  c->lr=0x800BEA88u; f_803949B8(c); // 800BEA84
  c->r[3]=c->r[1]+0x000000A4u; // 800BEA88
  c->r[4]=c->r[1]+0x00000074u; // 800BEA8C
  c->r[5]=c->r[1]+0x00000008u; // 800BEA90
  c->lr=0x800BEA98u; f_802646E0(c); // 800BEA94
  c->r[0]=0u+0x00000006u; // 800BEA98
  c->r[5]=c->r[1]+0x000000A0u; // 800BEA9C
  c->r[4]=c->r[1]+0x00000004u; // 800BEAA0
  c->ctr=c->r[0]; // 800BEAA4
L_800BEAA8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BEAA8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BEAAC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BEAB0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BEAB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BEAA8; } // 800BEAB8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800BEABC
  c->r[3]=c->r[31]+0x000008D0u; // 800BEAC0
  c->r[4]=c->r[1]+0x000000A4u; // 800BEAC4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800BEAC8
  c->ctr=c->r[12]; // 800BEACC
  if (true) { c->lr=0x800BEAD4u; dispatch(c,c->ctr); } // 800BEAD0
  c->r[3]=0u+0x00000000u; // 800BEAD4
  c->r[0]=0u+0x00000007u; // 800BEAD8
  W32(c->r[1]+0x00000038u,c->r[3]); // 800BEADC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BEAE0
  c->r[4]=c->r[1]+0x00000034u; // 800BEAE4
  c->ctr=c->r[0]; // 800BEAE8
L_800BEAEC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BEAEC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BEAF0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BEAF4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BEAF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BEAEC; } // 800BEAFC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BEB00
  c->r[11]=c->r[1]+0x000000F0u; // 800BEB04
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BEB08
  c->lr=0x800BEB10u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BEB0C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800BEB10
  c->lr=c->r[0]; // 800BEB14
  c->r[1]=c->r[1]+0x000000F0u; // 800BEB18
  return; // 800BEB1C
}

// fn_800BEB20
void f_800BEB20(Ctx* __restrict c) {
  trace_call(0x800BEB20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEB20
  c->r[0]=c->lr; // 800BEB24
  {uint32_t ea=c->r[2]+0xFFFF8ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEB28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BEB2C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800BEB30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BEB34
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800BEB38
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800BEB3C
  c->r[31]=c->r[3]|c->r[3]; // 800BEB40
  c->lr=0x800BEB48u; f_803949B8(c); // 800BEB44
  c->r[3]=c->r[31]|c->r[31]; // 800BEB48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BEB4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BEB50
  c->lr=c->r[0]; // 800BEB54
  c->r[1]=c->r[1]+0x00000010u; // 800BEB58
  return; // 800BEB5C
}

// fn_800BEB60
void f_800BEB60(Ctx* __restrict c) {
  trace_call(0x800BEB60u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEB60
  c->r[0]=c->lr; // 800BEB64
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEB68
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BEB6C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BEB70
  c->r[31]=c->r[3]|c->r[3]; // 800BEB74
  {uint32_t ea=c->r[13]+0xFFFF83F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEB78
  fcmp(c,0,c->f[1],c->f[0]); // 800BEB7C
  if (!crb(c,1)) { goto L_800BEBD0; } // 800BEB80
  c->lr=0x800BEB88u; f_80128960(c); // 800BEB84
  c->lr=0x800BEB8Cu; f_80127F60(c); // 800BEB88
  cmps(c,0,(int32_t)c->r[3],0); // 800BEB8C
  if (crb(c,2)) { goto L_800BEBD0; } // 800BEB90
  c->r[3]=c->r[1]+0x00000008u; // 800BEB94
  c->r[4]=0u+0x00000001u; // 800BEB98
  c->lr=0x800BEBA0u; f_800BDBB4(c); // 800BEB9C
  c->r[0]=0u+0x00000007u; // 800BEBA0
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BEBA4
  c->r[4]=c->r[1]+0x00000004u; // 800BEBA8
  c->ctr=c->r[0]; // 800BEBAC
L_800BEBB0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BEBB0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BEBB4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BEBB8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BEBBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BEBB0; } // 800BEBC0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BEBC4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BEBC8
  goto L_800BEC08; // 800BEBCC
L_800BEBD0:;
  c->r[3]=c->r[1]+0x00000008u; // 800BEBD0
  c->r[4]=0u+0x00000000u; // 800BEBD4
  c->lr=0x800BEBDCu; f_800BDBB4(c); // 800BEBD8
  c->r[0]=0u+0x00000007u; // 800BEBDC
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BEBE0
  c->r[4]=c->r[1]+0x00000004u; // 800BEBE4
  c->ctr=c->r[0]; // 800BEBE8
L_800BEBEC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BEBEC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BEBF0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BEBF4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BEBF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BEBEC; } // 800BEBFC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BEC00
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BEC04
L_800BEC08:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BEC08
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BEC0C
  c->lr=c->r[0]; // 800BEC10
  c->r[1]=c->r[1]+0x00000050u; // 800BEC14
  return; // 800BEC18
}

// fn_800BEC1C
void f_800BEC1C(Ctx* __restrict c) {
  trace_call(0x800BEC1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEC1C
  c->r[0]=c->lr; // 800BEC20
  W32(c->r[1]+0x000001F4u,c->r[0]); // 800BEC24
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[31]);} // 800BEC28
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,31,ea,0,0);} // 800BEC2C
  c->r[11]=c->r[1]+0x000001E0u; // 800BEC30
  c->lr=0x800BEC38u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BEC34
  c->r[29]=c->r[1]+0x00000054u; // 800BEC38
  c->r[25]=c->r[3]|c->r[3]; // 800BEC3C
  c->r[26]=c->r[5]|c->r[5]; // 800BEC40
  c->r[3]=c->r[29]|c->r[29]; // 800BEC44
  c->lr=0x800BEC4Cu; f_8003D9F4(c); // 800BEC48
  c->r[3]=0u+0x80400000u; // 800BEC4C
  c->r[28]=0u+0x00000000u; // 800BEC50
  c->r[3]=c->r[3]+0xFFFF90D0u; // 800BEC54
  c->r[31]=c->r[29]+0x00000168u; // 800BEC58
  W32(c->r[1]+0x00000068u,c->r[28]); // 800BEC5C
  c->r[27]=c->r[1]+0x0000007Cu; // 800BEC60
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800BEC64
  c->r[30]=0u+0xFFFFFFFFu; // 800BEC68
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 800BEC6C
  c->r[29]=0u+0x00000001u; // 800BEC70
  W32(c->r[1]+0x0000006Cu,c->r[28]); // 800BEC74
  W32(c->r[1]+0x00000074u,c->r[28]); // 800BEC78
  W32(c->r[1]+0x00000078u,c->r[28]); // 800BEC7C
L_800BEC80:;
  W32(c->r[27]+0x00000004u,c->r[28]); // 800BEC80
  c->r[3]=c->r[27]+0x00000004u; // 800BEC84
  c->r[4]=c->r[1]+0x00000008u; // 800BEC88
  W32(c->r[27]+0x00000008u,c->r[28]); // 800BEC8C
  W8(c->r[27]+0x00000000u,c->r[29]); // 800BEC90
  W32(c->r[1]+0x00000008u,c->r[28]); // 800BEC94
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 800BEC98
  c->lr=0x800BECA0u; f_80063D44(c); // 800BEC9C
  W32(c->r[27]+0x0000000Cu,c->r[30]); // 800BECA0
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[31]);} // 800BECA4
  c->r[27]=c->r[27]+0x00000014u; // 800BECA8
  cmpu(c,0,c->r[27],c->r[31]); // 800BECAC
  if (crb(c,0)) { IRQCHK(c); goto L_800BEC80; } // 800BECB0
  c->r[3]=R32(c->r[26]+0x00000000u); // 800BECB4
  c->r[0]=R32(c->r[26]+0x00000004u); // 800BECB8
  W32(c->r[1]+0x00000010u,c->r[3]); // 800BECBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BECC0
  c->lr=0x800BECC8u; f_80128960(c); // 800BECC4
  c->r[31]=c->r[3]|c->r[3]; // 800BECC8
  c->r[3]=c->r[3]+0x00000020u; // 800BECCC
  c->lr=0x800BECD4u; f_8003F1D4(c); // 800BECD0
  cmps(c,0,(int32_t)c->r[3],0); // 800BECD4
  if (!crb(c,2)) { goto L_800BECE8; } // 800BECD8
  c->r[3]=c->r[31]+0x00000020u; // 800BECDC
  c->r[4]=c->r[1]+0x00000010u; // 800BECE0
  c->lr=0x800BECE8u; f_80063D44(c); // 800BECE4
L_800BECE8:;
  c->r[3]=c->r[1]+0x00000054u; // 800BECE8
  c->r[4]=0u+0x00000000u; // 800BECEC
  c->lr=0x800BECF4u; f_8003EC20(c); // 800BECF0
  c->r[3]=0u+0x00000000u; // 800BECF4
  c->r[0]=0u+0x00000007u; // 800BECF8
  W32(c->r[1]+0x00000018u,c->r[3]); // 800BECFC
  c->r[5]=c->r[25]+0xFFFFFFFCu; // 800BED00
  c->r[4]=c->r[1]+0x00000014u; // 800BED04
  c->ctr=c->r[0]; // 800BED08
L_800BED0C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BED0C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BED10
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BED14
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BED18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BED0C; } // 800BED1C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BED20
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BED24
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,31,ea,0,0);} // 800BED28
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[31]=RF64(ea);} // 800BED2C
  c->r[11]=c->r[1]+0x000001E0u; // 800BED30
  c->lr=0x800BED38u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BED34
  c->r[0]=R32(c->r[1]+0x000001F4u); // 800BED38
  c->lr=c->r[0]; // 800BED3C
  c->r[1]=c->r[1]+0x000001F0u; // 800BED40
  return; // 800BED44
}

// fn_800BED48
void f_800BED48(Ctx* __restrict c) {
  trace_call(0x800BED48u);
  {uint32_t ea=c->r[1]+0xFFFFF050u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BED48
  c->r[0]=c->lr; // 800BED4C
  W32(c->r[1]+0x00000FB4u,c->r[0]); // 800BED50
  c->r[11]=c->r[1]+0x00000FB0u; // 800BED54
  c->lr=0x800BED5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BED58
  c->r[28]=c->r[5]|c->r[5]; // 800BED5C
  c->r[31]=c->r[3]|c->r[3]; // 800BED60
  c->r[27]=c->r[6]|c->r[6]; // 800BED64
  c->r[3]=c->r[28]|c->r[28]; // 800BED68
  c->lr=0x800BED70u; f_80068A78(c); // 800BED6C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BED70
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BED74
  c->ctr=c->r[12]; // 800BED78
  if (true) { c->lr=0x800BED80u; dispatch(c,c->ctr); } // 800BED7C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800BED80
  c->r[4]=0u+0xC8000000u; // 800BED84
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BED88
  c->r[3]=c->r[1]+0x00000008u; // 800BED8C
  c->lr=0x800BED94u; f_8003EDD0(c); // 800BED90
  cmps(c,0,(int32_t)c->r[3],0); // 800BED94
  if (crb(c,2)) { goto L_800BF07C; } // 800BED98
  c->r[3]=c->r[28]|c->r[28]; // 800BED9C
  c->lr=0x800BEDA4u; f_80068A78(c); // 800BEDA0
  c->r[28]=c->r[3]|c->r[3]; // 800BEDA4
  c->r[3]=c->r[1]+0x000000D0u; // 800BEDA8
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800BEDAC
  c->r[4]=c->r[28]+0x000008D0u; // 800BEDB0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800BEDB4
  c->ctr=c->r[12]; // 800BEDB8
  if (true) { c->lr=0x800BEDC0u; dispatch(c,c->ctr); } // 800BEDBC
  c->r[0]=0u+0x00000006u; // 800BEDC0
  c->r[5]=c->r[1]+0x00000168u; // 800BEDC4
  c->r[4]=c->r[1]+0x000000CCu; // 800BEDC8
  c->ctr=c->r[0]; // 800BEDCC
L_800BEDD0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BEDD0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BEDD4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BEDD8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BEDDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BEDD0; } // 800BEDE0
  c->r[3]=c->r[1]+0x0000019Cu; // 800BEDE4
  c->lr=0x800BEDECu; f_800462E8(c); // 800BEDE8
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEDEC
  c->r[3]=c->r[1]+0x000000ACu; // 800BEDF0
  {uint32_t ea=c->r[1]+0x00000188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEDF4
  {uint32_t ea=c->r[1]+0x00000198u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEDF8
  c->lr=0x800BEE00u; f_800521A0(c); // 800BEDFC
  c->r[3]=0u+0x80450000u; // 800BEE00
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE04
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800BEE08
  c->r[4]=c->r[1]+0x0000019Cu; // 800BEE0C
  c->r[5]=c->r[1]+0x000000ACu; // 800BEE10
  c->r[6]=0u+0x00000000u; // 800BEE14
  c->lr=0x800BEE1Cu; f_80044E70(c); // 800BEE18
  cmps(c,0,(int32_t)c->r[3],0); // 800BEE1C
  if (crb(c,2)) { goto L_800BF070; } // 800BEE20
  {uint32_t ea=c->r[1]+0x00000174u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE24
  c->r[3]=c->r[1]+0x000000C4u; // 800BEE28
  {uint32_t ea=c->r[1]+0x00000184u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEE2C
  {uint32_t ea=c->r[1]+0x00000194u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEE30
  c->lr=0x800BEE38u; f_800521A0(c); // 800BEE34
  c->r[3]=c->r[1]+0x000000B8u; // 800BEE38
  c->r[4]=c->r[1]+0x000001B0u; // 800BEE3C
  c->lr=0x800BEE44u; f_8003F484(c); // 800BEE40
  c->r[3]=c->r[1]+0x000000B8u; // 800BEE44
  c->lr=0x800BEE4Cu; f_80065368(c); // 800BEE48
  cmps(c,0,(int32_t)c->r[3],0); // 800BEE4C
  if (crb(c,2)) { goto L_800BEE68; } // 800BEE50
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE54
  c->r[3]=c->r[1]+0x000000B8u; // 800BEE58
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEE5C
  c->f[3]=c->f[1]; // 800BEE60
  c->lr=0x800BEE68u; f_80065358(c); // 800BEE64
L_800BEE68:;
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE68
  c->r[3]=c->r[1]+0x000000A0u; // 800BEE6C
  {uint32_t ea=c->r[1]+0x00000188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEE70
  {uint32_t ea=c->r[1]+0x00000198u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEE74
  c->lr=0x800BEE7Cu; f_800521A0(c); // 800BEE78
  {uint32_t ea=c->r[2]+0xFFFF8ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE7C
  c->r[3]=c->r[1]+0x0000007Cu; // 800BEE80
  c->r[4]=c->r[1]+0x000000B8u; // 800BEE84
  c->lr=0x800BEE8Cu; f_80064C58(c); // 800BEE88
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEE8C
  c->r[3]=c->r[1]+0x00000088u; // 800BEE90
  {uint32_t ea=c->r[1]+0x00000188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEE94
  {uint32_t ea=c->r[1]+0x00000198u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEE98
  c->lr=0x800BEEA0u; f_800521A0(c); // 800BEE9C
  c->r[3]=c->r[1]+0x00000094u; // 800BEEA0
  c->r[4]=c->r[1]+0x00000088u; // 800BEEA4
  c->r[5]=c->r[1]+0x0000007Cu; // 800BEEA8
  c->lr=0x800BEEB0u; f_80064C74(c); // 800BEEAC
  c->r[29]=0u+0x80450000u; // 800BEEB0
  c->r[4]=c->r[1]+0x0000019Cu; // 800BEEB4
  c->r[3]=c->r[29]+0xFFFFC69Cu; // 800BEEB8
  c->r[5]=c->r[1]+0x000000A0u; // 800BEEBC
  c->r[6]=c->r[1]+0x00000094u; // 800BEEC0
  c->r[7]=0u+0x00000000u; // 800BEEC4
  c->lr=0x800BEECCu; f_80044D14(c); // 800BEEC8
  cmps(c,0,(int32_t)c->r[3],0); // 800BEECC
  if (!crb(c,2)) { goto L_800BEF3C; } // 800BEED0
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEED4
  c->r[3]=c->r[1]+0x00000070u; // 800BEED8
  {uint32_t ea=c->r[1]+0x00000188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEEDC
  {uint32_t ea=c->r[1]+0x00000198u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEEE0
  c->lr=0x800BEEE8u; f_800521A0(c); // 800BEEE4
  {uint32_t ea=c->r[2]+0xFFFF8ED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEEE8
  c->r[3]=c->r[1]+0x0000004Cu; // 800BEEEC
  c->r[4]=c->r[1]+0x000000B8u; // 800BEEF0
  c->lr=0x800BEEF8u; f_80064C58(c); // 800BEEF4
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEEF8
  c->r[3]=c->r[1]+0x00000058u; // 800BEEFC
  {uint32_t ea=c->r[1]+0x00000188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEF00
  {uint32_t ea=c->r[1]+0x00000198u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEF04
  c->lr=0x800BEF0Cu; f_800521A0(c); // 800BEF08
  c->r[3]=c->r[1]+0x00000064u; // 800BEF0C
  c->r[4]=c->r[1]+0x00000058u; // 800BEF10
  c->r[5]=c->r[1]+0x0000004Cu; // 800BEF14
  c->lr=0x800BEF1Cu; f_80064C34(c); // 800BEF18
  c->r[3]=c->r[29]+0xFFFFC69Cu; // 800BEF1C
  c->r[4]=c->r[1]+0x0000019Cu; // 800BEF20
  c->r[5]=c->r[1]+0x00000070u; // 800BEF24
  c->r[6]=c->r[1]+0x00000064u; // 800BEF28
  c->r[7]=0u+0x00000000u; // 800BEF2C
  c->lr=0x800BEF34u; f_80044D14(c); // 800BEF30
  cmps(c,0,(int32_t)c->r[3],0); // 800BEF34
  if (crb(c,2)) { goto L_800BEF48; } // 800BEF38
L_800BEF3C:;
  c->r[3]=c->r[1]+0x0000016Cu; // 800BEF3C
  c->r[4]=c->r[1]+0x000001A4u; // 800BEF40
  c->lr=0x800BEF48u; f_80032FF4(c); // 800BEF44
L_800BEF48:;
  c->r[3]=c->r[1]+0x000000B8u; // 800BEF48
  c->r[4]=c->r[1]+0x000000C4u; // 800BEF4C
  c->r[5]=c->r[1]+0x00000040u; // 800BEF50
  c->lr=0x800BEF58u; f_80265810(c); // 800BEF54
  c->r[3]=c->r[1]+0x00000040u; // 800BEF58
  c->lr=0x800BEF60u; f_80065368(c); // 800BEF5C
  cmps(c,0,(int32_t)c->r[3],0); // 800BEF60
  if (crb(c,2)) { goto L_800BF00C; } // 800BEF64
  c->r[0]=R8(c->r[13]+0xFFFF9510u); // 800BEF68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BEF6C
  if (!crb(c,2)) { goto L_800BEFC0; } // 800BEF70
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEF74
  c->r[29]=0u+0x80470000u; // 800BEF78
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEF7C
  c->r[3]=c->r[29]+0x00001D1Cu; // 800BEF80
  c->f[2]=c->f[1]; // 800BEF84
  c->lr=0x800BEF8Cu; f_800521A0(c); // 800BEF88
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEF8C
  c->r[29]=c->r[29]+0x00001D1Cu; // 800BEF90
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEF94
  c->r[3]=c->r[29]+0x0000000Cu; // 800BEF98
  c->f[3]=c->f[1]; // 800BEF9C
  c->lr=0x800BEFA4u; f_800521A0(c); // 800BEFA0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BEFA4
  c->r[3]=c->r[29]+0x00000018u; // 800BEFA8
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BEFAC
  c->f[3]=c->f[2]; // 800BEFB0
  c->lr=0x800BEFB8u; f_800521A0(c); // 800BEFB4
  c->r[0]=0u+0x00000001u; // 800BEFB8
  W8(c->r[13]+0xFFFF9510u,c->r[0]); // 800BEFBC
L_800BEFC0:;
  c->r[29]=0u+0x80470000u; // 800BEFC0
  c->r[27]=0u+0x00000000u; // 800BEFC4
  c->r[29]=c->r[29]+0x00001D1Cu; // 800BEFC8
  c->r[30]=0u+0x00000000u; // 800BEFCC
L_800BEFD0:;
  c->r[3]=c->r[1]+0x000000C4u; // 800BEFD0
  c->r[4]=c->r[29]+c->r[30]; // 800BEFD4
  c->lr=0x800BEFDCu; f_8003F468(c); // 800BEFD8
  c->r[3]=c->r[1]+0x000000B8u; // 800BEFDC
  c->r[4]=c->r[1]+0x000000C4u; // 800BEFE0
  c->r[5]=c->r[1]+0x00000034u; // 800BEFE4
  c->lr=0x800BEFECu; f_80265810(c); // 800BEFE8
  c->r[3]=c->r[1]+0x00000034u; // 800BEFEC
  c->lr=0x800BEFF4u; f_80065368(c); // 800BEFF0
  cmps(c,0,(int32_t)c->r[3],0); // 800BEFF4
  if (crb(c,2)) { goto L_800BF00C; } // 800BEFF8
  c->r[27]=c->r[27]+0x00000001u; // 800BEFFC
  c->r[30]=c->r[30]+0x0000000Cu; // 800BF000
  cmps(c,0,(int32_t)c->r[27],3); // 800BF004
  if (crb(c,0)) { IRQCHK(c); goto L_800BEFD0; } // 800BF008
L_800BF00C:;
  c->r[3]=c->r[1]+0x0000001Cu; // 800BF00C
  c->r[4]=c->r[1]+0x000000C4u; // 800BF010
  c->lr=0x800BF018u; f_8003F484(c); // 800BF014
  c->r[30]=c->r[3]|c->r[3]; // 800BF018
  c->r[3]=c->r[1]+0x00000028u; // 800BF01C
  c->r[4]=c->r[1]+0x000000B8u; // 800BF020
  c->lr=0x800BF028u; f_8003F484(c); // 800BF024
  c->r[4]=c->r[3]|c->r[3]; // 800BF028
  c->r[5]=c->r[30]|c->r[30]; // 800BF02C
  c->r[3]=c->r[1]+0x0000013Cu; // 800BF030
  c->lr=0x800BF038u; f_80074BF0(c); // 800BF034
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF038
  c->r[3]=c->r[1]+0x00000010u; // 800BF03C
  {uint32_t ea=c->r[1]+0x00000188u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF040
  {uint32_t ea=c->r[1]+0x00000198u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF044
  c->lr=0x800BF04Cu; f_800521A0(c); // 800BF048
  c->r[3]=c->r[1]+0x0000013Cu; // 800BF04C
  c->r[4]=c->r[1]+0x00000010u; // 800BF050
  c->lr=0x800BF058u; f_80032FF4(c); // 800BF054
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800BF058
  c->r[3]=c->r[28]+0x000008D0u; // 800BF05C
  c->r[4]=c->r[1]+0x0000013Cu; // 800BF060
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800BF064
  c->ctr=c->r[12]; // 800BF068
  if (true) { c->lr=0x800BF070u; dispatch(c,c->ctr); } // 800BF06C
L_800BF070:;
  c->r[3]=c->r[1]+0x0000019Cu; // 800BF070
  c->r[4]=0u+0xFFFFFFFFu; // 800BF074
  c->lr=0x800BF07Cu; f_80046394(c); // 800BF078
L_800BF07C:;
  c->r[3]=0u+0x00000000u; // 800BF07C
  c->r[0]=0u+0x00000007u; // 800BF080
  W32(c->r[1]+0x00000100u,c->r[3]); // 800BF084
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BF088
  c->r[4]=c->r[1]+0x000000FCu; // 800BF08C
  c->ctr=c->r[0]; // 800BF090
L_800BF094:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF094
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF098
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF09C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF0A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF094; } // 800BF0A4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF0A8
  c->r[11]=c->r[1]+0x00000FB0u; // 800BF0AC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF0B0
  c->lr=0x800BF0B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF0B4
  c->r[0]=R32(c->r[1]+0x00000FB4u); // 800BF0B8
  c->lr=c->r[0]; // 800BF0BC
  c->r[1]=c->r[1]+0x00000FB0u; // 800BF0C0
  return; // 800BF0C4
}

// fn_800BF0C8
void f_800BF0C8(Ctx* __restrict c) {
  trace_call(0x800BF0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF0C8
  c->r[0]=c->lr; // 800BF0CC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800BF0D0
  {uint32_t ea=c->r[1]+0x000000D4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF0D4
  c->r[29]=c->r[3]|c->r[3]; // 800BF0D8
  c->r[3]=c->r[5]|c->r[5]; // 800BF0DC
  c->r[30]=c->r[6]|c->r[6]; // 800BF0E0
  c->lr=0x800BF0E8u; f_80068A78(c); // 800BF0E4
  c->r[31]=c->r[3]|c->r[3]; // 800BF0E8
  c->r[3]=c->r[1]+0x00000054u; // 800BF0EC
  c->r[4]=R32(c->r[31]+0x00000888u); // 800BF0F0
  c->lr=0x800BF0F8u; f_801328F8(c); // 800BF0F4
  c->r[3]=c->r[1]+0x00000054u; // 800BF0F8
  c->r[4]=c->r[30]+0x00000004u; // 800BF0FC
  c->r[5]=c->r[1]+0x00000014u; // 800BF100
  c->r[6]=0u+0x00000000u; // 800BF104
  c->lr=0x800BF10Cu; f_801329F0(c); // 800BF108
  c->r[4]=R32(c->r[1]+0x00000014u); // 800BF10C
  c->r[3]=c->r[1]+0x00000010u; // 800BF110
  c->lr=0x800BF118u; f_8006C13C(c); // 800BF114
  c->r[3]=c->r[1]+0x00000010u; // 800BF118
  c->lr=0x800BF120u; f_80364F00(c); // 800BF11C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800BF120
  c->r[3]=c->r[1]+0x00000010u; // 800BF124
  c->r[4]=c->r[1]+0x00000008u; // 800BF128
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BF12C
  c->lr=0x800BF134u; f_80364CCC(c); // 800BF130
  c->r[0]=R32(c->r[1]+0x00000010u); // 800BF134
  c->r[3]=c->r[31]|c->r[31]; // 800BF138
  c->r[4]=c->r[1]+0x0000000Cu; // 800BF13C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BF140
  c->lr=0x800BF148u; f_800FF254(c); // 800BF144
  c->r[3]=0u+0x00000000u; // 800BF148
  c->r[0]=0u+0x00000007u; // 800BF14C
  W32(c->r[1]+0x00000018u,c->r[3]); // 800BF150
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BF154
  c->r[4]=c->r[1]+0x00000014u; // 800BF158
  c->ctr=c->r[0]; // 800BF15C
L_800BF160:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF160
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF164
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF168
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF16C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF160; } // 800BF170
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF174
  c->r[3]=c->r[1]+0x00000054u; // 800BF178
  c->r[4]=0u+0xFFFFFFFFu; // 800BF17C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF180
  c->lr=0x800BF188u; f_80132958(c); // 800BF184
  {uint32_t ea=c->r[1]+0x000000D4u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF188
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800BF18C
  c->lr=c->r[0]; // 800BF190
  c->r[1]=c->r[1]+0x000000E0u; // 800BF194
  return; // 800BF198
}

// fn_800BF19C
void f_800BF19C(Ctx* __restrict c) {
  trace_call(0x800BF19Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF19C
  c->r[0]=c->lr; // 800BF1A0
  W32(c->r[1]+0x00000104u,c->r[0]); // 800BF1A4
  c->r[11]=c->r[1]+0x00000100u; // 800BF1A8
  c->lr=0x800BF1B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF1AC
  c->r[31]=c->r[3]|c->r[3]; // 800BF1B0
  c->r[3]=c->r[5]|c->r[5]; // 800BF1B4
  c->r[28]=c->r[6]|c->r[6]; // 800BF1B8
  c->lr=0x800BF1C0u; f_80068A78(c); // 800BF1BC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF1C0
  c->r[27]=c->r[3]|c->r[3]; // 800BF1C4
  c->r[3]=c->r[28]+0x0000003Cu; // 800BF1C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF1CC
  {uint32_t ea=c->r[1]+0x000000D8u; WF64(ea,c->f[0]);} // 800BF1D0
  c->r[28]=R32(c->r[1]+0x000000DCu); // 800BF1D4
  c->lr=0x800BF1DCu; f_800797C0(c); // 800BF1D8
  cmps(c,0,(int32_t)c->r[28],0); // 800BF1DC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800BF1E0
  c->r[30]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800BF1E4
  if (crb(c,0)) { goto L_800BF2D4; } // 800BF1E8
  c->r[12]=R32(c->r[27]+0x00000010u); // 800BF1EC
  c->r[3]=c->r[27]|c->r[27]; // 800BF1F0
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BF1F4
  c->ctr=c->r[12]; // 800BF1F8
  if (true) { c->lr=0x800BF200u; dispatch(c,c->ctr); } // 800BF1FC
  cmps(c,0,(int32_t)c->r[28],0); // 800BF200
  c->r[27]=R32(c->r[3]+0x00000008u); // 800BF204
  if (crb(c,0)) { goto L_800BF3B4; } // 800BF208
  c->r[29]=0u+0x00000000u; // 800BF20C
  goto L_800BF2B8; // 800BF210
L_800BF214:;
  c->r[4]=c->r[27]|c->r[27]; // 800BF214
  c->r[5]=c->r[29]|c->r[29]; // 800BF218
  c->r[3]=c->r[1]+0x00000064u; // 800BF21C
  c->lr=0x800BF224u; f_80385274(c); // 800BF220
  c->r[3]=c->r[1]+0x00000064u; // 800BF224
  c->r[4]=0u+0x00000000u; // 800BF228
  c->lr=0x800BF230u; f_803851E4(c); // 800BF22C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800BF230
  c->r[4]=c->r[29]|c->r[29]; // 800BF234
  c->r[3]=c->r[1]+0x00000028u; // 800BF238
  c->r[0]=R32(c->r[27]+0x000000E8u); // 800BF23C
  W32(c->r[1]+0x00000028u,c->r[0]); // 800BF240
  c->lr=0x800BF248u; f_803661F8(c); // 800BF244
  W32(c->r[1]+0x00000024u,c->r[3]); // 800BF248
  c->r[3]=c->r[1]+0x00000024u; // 800BF24C
  c->lr=0x800BF254u; f_800BF458(c); // 800BF250
  W32(c->r[1]+0x00000020u,c->r[3]); // 800BF254
  c->r[3]=c->r[1]+0x00000020u; // 800BF258
  c->lr=0x800BF260u; f_800BF400(c); // 800BF25C
  c->r[4]=c->r[3]|c->r[3]; // 800BF260
  c->r[3]=c->r[13]+0xFFFF9600u; // 800BF264
  c->lr=0x800BF26Cu; f_80116C34(c); // 800BF268
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 800BF26C
  if (!crb(c,2)) { goto L_800BF2B4; } // 800BF270
  cmpu(c,0,c->r[30],0x00000001u); // 800BF274
  c->r[0]=0u+0x00000000u; // 800BF278
  if (!crb(c,2)) { goto L_800BF298; } // 800BF27C
  {uint32_t ea=c->r[2]+0xFFFF8EE0u; c->f[1]=RF64(ea);} // 800BF280
  c->lr=0x800BF288u; f_8029BF0C(c); // 800BF284
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800BF288
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF28C
  {uint32_t ea=c->r[1]+0x000000D8u; WF64(ea,c->f[0]);} // 800BF290
  c->r[0]=R32(c->r[1]+0x000000DCu); // 800BF294
L_800BF298:;
  c->r[3]=c->r[1]+0x0000001Cu; // 800BF298
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800BF29C
  c->r[4]=0u+0x00000001u; // 800BF2A0
  c->lr=0x800BF2A8u; f_80367820(c); // 800BF2A4
  c->r[3]=c->r[1]+0x0000001Cu; // 800BF2A8
  c->r[4]=0u+0x00000000u; // 800BF2AC
  c->lr=0x800BF2B4u; f_80366F6C(c); // 800BF2B0
L_800BF2B4:;
  c->r[29]=c->r[29]+0x00000001u; // 800BF2B4
L_800BF2B8:;
  c->r[0]=R32(c->r[27]+0x000000E8u); // 800BF2B8
  c->r[3]=c->r[1]+0x0000002Cu; // 800BF2BC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800BF2C0
  c->lr=0x800BF2C8u; f_8036624C(c); // 800BF2C4
  cmpu(c,0,c->r[29],c->r[3]); // 800BF2C8
  if (crb(c,0)) { IRQCHK(c); goto L_800BF214; } // 800BF2CC
  goto L_800BF3B4; // 800BF2D0
L_800BF2D4:;
  c->r[12]=R32(c->r[27]+0x00000010u); // 800BF2D4
  c->r[3]=c->r[27]|c->r[27]; // 800BF2D8
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BF2DC
  c->ctr=c->r[12]; // 800BF2E0
  if (true) { c->lr=0x800BF2E8u; dispatch(c,c->ctr); } // 800BF2E4
  c->r[27]=R32(c->r[3]+0x00000008u); // 800BF2E8
  c->r[29]=0u+0x00000000u; // 800BF2EC
  goto L_800BF39C; // 800BF2F0
L_800BF2F4:;
  c->r[4]=c->r[27]|c->r[27]; // 800BF2F4
  c->r[5]=c->r[29]|c->r[29]; // 800BF2F8
  c->r[3]=c->r[1]+0x00000030u; // 800BF2FC
  c->lr=0x800BF304u; f_80385274(c); // 800BF300
  c->r[3]=c->r[1]+0x00000030u; // 800BF304
  c->r[4]=0u+0x00000000u; // 800BF308
  c->lr=0x800BF310u; f_803851E4(c); // 800BF30C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BF310
  c->r[4]=c->r[29]|c->r[29]; // 800BF314
  c->r[3]=c->r[1]+0x00000014u; // 800BF318
  c->r[0]=R32(c->r[27]+0x000000E8u); // 800BF31C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF320
  c->lr=0x800BF328u; f_803661F8(c); // 800BF324
  W32(c->r[1]+0x00000010u,c->r[3]); // 800BF328
  c->r[3]=c->r[1]+0x00000010u; // 800BF32C
  c->lr=0x800BF334u; f_800BF458(c); // 800BF330
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BF334
  c->r[3]=c->r[1]+0x0000000Cu; // 800BF338
  c->lr=0x800BF340u; f_800BF400(c); // 800BF33C
  c->r[4]=c->r[3]|c->r[3]; // 800BF340
  c->r[3]=c->r[13]+0xFFFF9600u; // 800BF344
  c->lr=0x800BF34Cu; f_80116BF4(c); // 800BF348
  cmps(c,0,(int32_t)c->r[3],0); // 800BF34C
  if (!crb(c,0)) { goto L_800BF378; } // 800BF350
  cmpu(c,0,c->r[30],0x00000001u); // 800BF354
  if (!crb(c,2)) { goto L_800BF378; } // 800BF358
  {uint32_t ea=c->r[2]+0xFFFF8EE0u; c->f[1]=RF64(ea);} // 800BF35C
  c->lr=0x800BF364u; f_8029BF0C(c); // 800BF360
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800BF364
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF368
  {uint32_t ea=c->r[1]+0x000000D8u; WF64(ea,c->f[0]);} // 800BF36C
  c->r[0]=R32(c->r[1]+0x000000DCu); // 800BF370
  goto L_800BF37C; // 800BF374
L_800BF378:;
  c->r[0]=0u+0x00000000u; // 800BF378
L_800BF37C:;
  c->r[3]=c->r[1]+0x00000008u; // 800BF37C
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800BF380
  c->r[4]=0u+0x00000001u; // 800BF384
  c->lr=0x800BF38Cu; f_80367820(c); // 800BF388
  c->r[3]=c->r[1]+0x00000008u; // 800BF38C
  c->r[4]=0u+0x00000000u; // 800BF390
  c->lr=0x800BF398u; f_80366F6C(c); // 800BF394
  c->r[29]=c->r[29]+0x00000001u; // 800BF398
L_800BF39C:;
  c->r[0]=R32(c->r[27]+0x000000E8u); // 800BF39C
  c->r[3]=c->r[1]+0x00000018u; // 800BF3A0
  W32(c->r[1]+0x00000018u,c->r[0]); // 800BF3A4
  c->lr=0x800BF3ACu; f_8036624C(c); // 800BF3A8
  cmpu(c,0,c->r[29],c->r[3]); // 800BF3AC
  if (crb(c,0)) { IRQCHK(c); goto L_800BF2F4; } // 800BF3B0
L_800BF3B4:;
  c->r[3]=0u+0x00000000u; // 800BF3B4
  c->r[0]=0u+0x00000007u; // 800BF3B8
  W32(c->r[1]+0x00000098u,c->r[3]); // 800BF3BC
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BF3C0
  c->r[4]=c->r[1]+0x00000094u; // 800BF3C4
  c->ctr=c->r[0]; // 800BF3C8
L_800BF3CC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF3CC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF3D0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF3D4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF3D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF3CC; } // 800BF3DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF3E0
  c->r[11]=c->r[1]+0x00000100u; // 800BF3E4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF3E8
  c->lr=0x800BF3F0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF3EC
  c->r[0]=R32(c->r[1]+0x00000104u); // 800BF3F0
  c->lr=c->r[0]; // 800BF3F4
  c->r[1]=c->r[1]+0x00000100u; // 800BF3F8
  return; // 800BF3FC
}

// fn_800BF400
void f_800BF400(Ctx* __restrict c) {
  trace_call(0x800BF400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF400
  c->r[0]=c->lr; // 800BF404
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF408
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BF40C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF410
  c->r[31]=c->r[3]|c->r[3]; // 800BF414
  cmps(c,0,(int32_t)c->r[0],0); // 800BF418
  if (!crb(c,2)) { goto L_800BF43C; } // 800BF41C
  c->r[3]=0u+0x803F0000u; // 800BF420
  c->r[5]=0u+0x803F0000u; // 800BF424
  c->r[3]=c->r[3]+0x00001998u; // 800BF428
  c->r[4]=0u+0x0000008Fu; // 800BF42C
  c->r[5]=c->r[5]+0x00001970u; // 800BF430
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BF434
  c->lr=0x800BF43Cu; f_803444BC(c); // 800BF438
L_800BF43C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BF43C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF440
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF444
  c->r[3]=c->r[3]+0x00000004u; // 800BF448
  c->lr=c->r[0]; // 800BF44C
  c->r[1]=c->r[1]+0x00000010u; // 800BF450
  return; // 800BF454
}

// fn_800BF458
void f_800BF458(Ctx* __restrict c) {
  trace_call(0x800BF458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF458
  c->r[0]=c->lr; // 800BF45C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF460
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BF464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF468
  c->r[31]=c->r[3]|c->r[3]; // 800BF46C
  cmps(c,0,(int32_t)c->r[0],0); // 800BF470
  if (!crb(c,2)) { goto L_800BF49C; } // 800BF474
  c->r[3]=0u+0x803F0000u; // 800BF478
  c->r[5]=0u+0x803F0000u; // 800BF47C
  c->r[3]=c->r[3]+0x000015E0u; // 800BF480
  c->r[4]=0u+0x00000239u; // 800BF484
  c->r[5]=c->r[5]+0x000015C0u; // 800BF488
  c->r[6]=c->r[13]+0xFFFF8038u; // 800BF48C
  c->r[7]=c->r[13]+0xFFFF817Cu; // 800BF490
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BF494
  c->lr=0x800BF49Cu; f_803444BC(c); // 800BF498
L_800BF49C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800BF49C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BF4A0
  cmps(c,0,(int32_t)c->r[0],0); // 800BF4A4
  if (crb(c,2)) { goto L_800BF4B8; } // 800BF4A8
  c->r[3]=c->r[3]+c->r[0]; // 800BF4AC
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800BF4B0
  goto L_800BF4BC; // 800BF4B4
L_800BF4B8:;
  c->r[3]=0u+0x00000000u; // 800BF4B8
L_800BF4BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF4BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF4C0
  c->lr=c->r[0]; // 800BF4C4
  c->r[1]=c->r[1]+0x00000010u; // 800BF4C8
  return; // 800BF4CC
}

// fn_800BF4D0
void f_800BF4D0(Ctx* __restrict c) {
  trace_call(0x800BF4D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF4D0
  c->r[0]=c->lr; // 800BF4D4
  c->r[4]=c->r[6]+0x00000004u; // 800BF4D8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BF4DC
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF4E0
  c->r[29]=c->r[5]|c->r[5]; // 800BF4E4
  c->r[31]=0u+0x80490000u; // 800BF4E8
  c->r[28]=c->r[3]|c->r[3]; // 800BF4EC
  c->r[30]=c->r[6]|c->r[6]; // 800BF4F0
  c->r[5]=0u+0x00000000u; // 800BF4F4
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800BF4F8
  c->lr=0x800BF500u; f_8010453C(c); // 800BF4FC
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800BF500
  c->lr=0x800BF508u; f_80102CC4(c); // 800BF504
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800BF508
  c->r[4]=c->r[30]+0x00000004u; // 800BF50C
  c->lr=0x800BF514u; f_80103094(c); // 800BF510
  c->r[4]=c->r[3]|c->r[3]; // 800BF514
  c->r[3]=c->r[1]+0x00000008u; // 800BF518
  c->r[4]=R32(c->r[4]+0x00000010u); // 800BF51C
  c->lr=0x800BF524u; f_8006C13C(c); // 800BF520
  c->r[3]=c->r[29]|c->r[29]; // 800BF524
  c->lr=0x800BF52Cu; f_80068A78(c); // 800BF528
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BF52C
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BF530
  c->ctr=c->r[12]; // 800BF534
  if (true) { c->lr=0x800BF53Cu; dispatch(c,c->ctr); } // 800BF538
  c->r[4]=c->r[1]+0x00000008u; // 800BF53C
  c->lr=0x800BF544u; f_8002AD54(c); // 800BF540
  c->r[3]=0u+0x00000000u; // 800BF544
  c->r[0]=0u+0x00000007u; // 800BF548
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BF54C
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BF550
  c->r[4]=c->r[1]+0x00000008u; // 800BF554
  c->ctr=c->r[0]; // 800BF558
L_800BF55C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF55C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF560
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF564
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF568
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF55C; } // 800BF56C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF570
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF574
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF578
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BF57C
  c->lr=c->r[0]; // 800BF580
  c->r[1]=c->r[1]+0x00000060u; // 800BF584
  return; // 800BF588
}

// fn_800BF58C
void f_800BF58C(Ctx* __restrict c) {
  trace_call(0x800BF58Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF58C
  c->r[0]=c->lr; // 800BF590
  c->r[4]=c->r[6]+0x00000004u; // 800BF594
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BF598
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BF59C
  c->r[30]=c->r[5]|c->r[5]; // 800BF5A0
  c->r[31]=0u+0x80490000u; // 800BF5A4
  c->r[28]=c->r[3]|c->r[3]; // 800BF5A8
  c->r[29]=c->r[6]|c->r[6]; // 800BF5AC
  c->r[5]=0u+0x00000000u; // 800BF5B0
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800BF5B4
  c->lr=0x800BF5BCu; f_8010453C(c); // 800BF5B8
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800BF5BC
  c->lr=0x800BF5C4u; f_80102CC4(c); // 800BF5C0
  c->r[3]=c->r[30]|c->r[30]; // 800BF5C4
  c->lr=0x800BF5CCu; f_80068A78(c); // 800BF5C8
  c->r[30]=c->r[3]|c->r[3]; // 800BF5CC
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800BF5D0
  c->r[4]=c->r[29]+0x00000004u; // 800BF5D4
  c->lr=0x800BF5DCu; f_80103094(c); // 800BF5D8
  c->r[12]=R32(c->r[30]+0x00000010u); // 800BF5DC
  c->r[4]=c->r[3]|c->r[3]; // 800BF5E0
  c->r[3]=c->r[30]|c->r[30]; // 800BF5E4
  c->r[5]=0u+0x00000000u; // 800BF5E8
  c->r[12]=R32(c->r[12]+0x00000320u); // 800BF5EC
  c->r[4]=R32(c->r[4]+0x00000010u); // 800BF5F0
  c->ctr=c->r[12]; // 800BF5F4
  if (true) { c->lr=0x800BF5FCu; dispatch(c,c->ctr); } // 800BF5F8
  c->r[3]=0u+0x00000000u; // 800BF5FC
  c->r[0]=0u+0x00000007u; // 800BF600
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BF604
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BF608
  c->r[4]=c->r[1]+0x00000004u; // 800BF60C
  c->ctr=c->r[0]; // 800BF610
L_800BF614:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF614
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF618
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF61C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF620
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF614; } // 800BF624
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF628
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF62C
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BF630
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BF634
  c->lr=c->r[0]; // 800BF638
  c->r[1]=c->r[1]+0x00000060u; // 800BF63C
  return; // 800BF640
}

// fn_800BF644
void f_800BF644(Ctx* __restrict c) {
  trace_call(0x800BF644u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF644
  c->r[0]=c->lr; // 800BF648
  c->r[4]=0u+0x804A0000u; // 800BF64C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BF650
  c->r[4]=c->r[4]+0x0000197Cu; // 800BF654
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BF658
  c->r[31]=c->r[3]|c->r[3]; // 800BF65C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF660
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BF664
  {uint32_t ea=c->r[6]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF668
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 800BF66C
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF670
  c->lr=0x800BF678u; f_800ECFC8(c); // 800BF674
  c->r[3]=0u+0x00000000u; // 800BF678
  c->r[0]=0u+0x00000007u; // 800BF67C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BF680
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BF684
  c->r[4]=c->r[1]+0x00000004u; // 800BF688
  c->ctr=c->r[0]; // 800BF68C
L_800BF690:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF690
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF694
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF698
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF69C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF690; } // 800BF6A0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF6A4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF6A8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BF6AC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BF6B0
  c->lr=c->r[0]; // 800BF6B4
  c->r[1]=c->r[1]+0x00000050u; // 800BF6B8
  return; // 800BF6BC
}

// fn_800BF6C0
void f_800BF6C0(Ctx* __restrict c) {
  trace_call(0x800BF6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF6C0
  c->r[0]=c->lr; // 800BF6C4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BF6C8
  c->r[11]=c->r[1]+0x000000B0u; // 800BF6CC
  c->lr=0x800BF6D4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF6D0
  c->r[29]=c->r[3]|c->r[3]; // 800BF6D4
  c->r[3]=c->r[5]|c->r[5]; // 800BF6D8
  c->r[30]=c->r[6]|c->r[6]; // 800BF6DC
  c->lr=0x800BF6E4u; f_80068A78(c); // 800BF6E0
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF6E4
  c->r[31]=c->r[3]|c->r[3]; // 800BF6E8
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF6EC
  c->r[3]=c->r[1]+0x00000014u; // 800BF6F0
  {uint32_t ea=c->r[30]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF6F4
  c->lr=0x800BF6FCu; f_800521A0(c); // 800BF6F8
  c->r[3]=c->r[1]+0x0000005Cu; // 800BF6FC
  c->lr=0x800BF704u; f_80264680(c); // 800BF700
  {uint32_t ea=c->r[30]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF704
  c->r[3]=c->r[1]+0x00000008u; // 800BF708
  {uint32_t ea=c->r[30]+0x000001A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF70C
  {uint32_t ea=c->r[30]+0x000001E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF710
  c->lr=0x800BF718u; f_800521A0(c); // 800BF714
  c->r[4]=c->r[3]|c->r[3]; // 800BF718
  c->r[3]=c->r[1]+0x0000005Cu; // 800BF71C
  c->lr=0x800BF724u; f_80032FF4(c); // 800BF720
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF724
  c->r[3]=c->r[31]|c->r[31]; // 800BF728
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF72C
  c->r[4]=c->r[30]+0x00000040u; // 800BF730
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF734
  c->r[5]=c->r[1]+0x0000005Cu; // 800BF738
  c->r[6]=c->r[1]+0x00000014u; // 800BF73C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[0]);} // 800BF740
  c->r[7]=R32(c->r[1]+0x00000094u); // 800BF744
  c->lr=0x800BF74Cu; f_800FE634(c); // 800BF748
  c->r[3]=0u+0x00000000u; // 800BF74C
  c->r[0]=0u+0x00000007u; // 800BF750
  W32(c->r[1]+0x00000020u,c->r[3]); // 800BF754
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BF758
  c->r[4]=c->r[1]+0x0000001Cu; // 800BF75C
  c->ctr=c->r[0]; // 800BF760
L_800BF764:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF764
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF768
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF76C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF770
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF764; } // 800BF774
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF778
  c->r[11]=c->r[1]+0x000000B0u; // 800BF77C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF780
  c->lr=0x800BF788u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF784
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800BF788
  c->lr=c->r[0]; // 800BF78C
  c->r[1]=c->r[1]+0x000000B0u; // 800BF790
  return; // 800BF794
}

// fn_800BF798
void f_800BF798(Ctx* __restrict c) {
  trace_call(0x800BF798u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF798
  c->r[0]=c->lr; // 800BF79C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800BF7A0
  c->r[11]=c->r[1]+0x000000A0u; // 800BF7A4
  c->lr=0x800BF7ACu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF7A8
  c->r[29]=c->r[3]|c->r[3]; // 800BF7AC
  c->r[3]=c->r[5]|c->r[5]; // 800BF7B0
  c->r[30]=c->r[6]|c->r[6]; // 800BF7B4
  c->lr=0x800BF7BCu; f_80068A78(c); // 800BF7B8
  c->r[31]=c->r[3]|c->r[3]; // 800BF7BC
  c->r[3]=c->r[1]+0x00000050u; // 800BF7C0
  c->lr=0x800BF7C8u; f_80264680(c); // 800BF7C4
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF7C8
  c->r[3]=c->r[1]+0x00000008u; // 800BF7CC
  {uint32_t ea=c->r[30]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF7D0
  {uint32_t ea=c->r[30]+0x0000016Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF7D4
  c->lr=0x800BF7DCu; f_800521A0(c); // 800BF7D8
  c->r[4]=c->r[3]|c->r[3]; // 800BF7DC
  c->r[3]=c->r[1]+0x00000050u; // 800BF7E0
  c->lr=0x800BF7E8u; f_80032FF4(c); // 800BF7E4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF7E8
  c->r[3]=c->r[31]|c->r[31]; // 800BF7EC
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF7F0
  c->r[4]=c->r[30]+0x00000040u; // 800BF7F4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF7F8
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF7FC
  c->r[5]=c->r[1]+0x00000050u; // 800BF800
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800BF804
  c->r[6]=R32(c->r[1]+0x00000084u); // 800BF808
  c->lr=0x800BF810u; f_800FE664(c); // 800BF80C
  c->r[3]=0u+0x00000000u; // 800BF810
  c->r[0]=0u+0x00000007u; // 800BF814
  W32(c->r[1]+0x00000014u,c->r[3]); // 800BF818
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BF81C
  c->r[4]=c->r[1]+0x00000010u; // 800BF820
  c->ctr=c->r[0]; // 800BF824
L_800BF828:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF828
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF82C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF830
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF834
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF828; } // 800BF838
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF83C
  c->r[11]=c->r[1]+0x000000A0u; // 800BF840
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF844
  c->lr=0x800BF84Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF848
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800BF84C
  c->lr=c->r[0]; // 800BF850
  c->r[1]=c->r[1]+0x000000A0u; // 800BF854
  return; // 800BF858
}

// fn_800BF85C
void f_800BF85C(Ctx* __restrict c) {
  trace_call(0x800BF85Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF85C
  c->r[0]=c->lr; // 800BF860
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BF864
  c->r[11]=c->r[1]+0x000000B0u; // 800BF868
  c->lr=0x800BF870u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF86C
  c->r[29]=c->r[3]|c->r[3]; // 800BF870
  c->r[3]=c->r[5]|c->r[5]; // 800BF874
  c->r[30]=c->r[6]|c->r[6]; // 800BF878
  c->lr=0x800BF880u; f_80068A78(c); // 800BF87C
  c->r[31]=c->r[3]|c->r[3]; // 800BF880
  c->r[3]=c->r[1]+0x0000005Cu; // 800BF884
  c->lr=0x800BF88Cu; f_80264680(c); // 800BF888
  {uint32_t ea=c->r[30]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF88C
  c->r[3]=c->r[1]+0x00000014u; // 800BF890
  {uint32_t ea=c->r[30]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF894
  {uint32_t ea=c->r[30]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF898
  c->lr=0x800BF8A0u; f_800521A0(c); // 800BF89C
  {uint32_t ea=c->r[30]+0x000001E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF8A0
  c->r[3]=c->r[1]+0x00000008u; // 800BF8A4
  {uint32_t ea=c->r[30]+0x00000220u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF8A8
  {uint32_t ea=c->r[30]+0x0000025Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF8AC
  c->lr=0x800BF8B4u; f_800521A0(c); // 800BF8B0
  c->r[3]=c->r[1]+0x00000008u; // 800BF8B4
  c->r[4]=c->r[3]|c->r[3]; // 800BF8B8
  c->lr=0x800BF8C0u; f_80265750(c); // 800BF8BC
  c->r[3]=c->r[1]+0x0000005Cu; // 800BF8C0
  c->r[4]=c->r[1]+0x00000008u; // 800BF8C4
  c->lr=0x800BF8CCu; f_8007513C(c); // 800BF8C8
  c->r[3]=c->r[1]+0x0000005Cu; // 800BF8CC
  c->r[4]=c->r[1]+0x00000014u; // 800BF8D0
  c->lr=0x800BF8D8u; f_80032FF4(c); // 800BF8D4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF8D8
  c->r[3]=c->r[31]|c->r[31]; // 800BF8DC
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF8E0
  c->r[4]=c->r[30]+0x00000040u; // 800BF8E4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF8E8
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF8EC
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF8F0
  c->r[5]=c->r[1]+0x0000005Cu; // 800BF8F4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[0]);} // 800BF8F8
  c->r[6]=R32(c->r[1]+0x00000094u); // 800BF8FC
  c->lr=0x800BF904u; f_800FE698(c); // 800BF900
  c->r[3]=0u+0x00000000u; // 800BF904
  c->r[0]=0u+0x00000007u; // 800BF908
  W32(c->r[1]+0x00000020u,c->r[3]); // 800BF90C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BF910
  c->r[4]=c->r[1]+0x0000001Cu; // 800BF914
  c->ctr=c->r[0]; // 800BF918
L_800BF91C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BF91C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BF920
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BF924
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BF928
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BF91C; } // 800BF92C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BF930
  c->r[11]=c->r[1]+0x000000B0u; // 800BF934
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BF938
  c->lr=0x800BF940u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF93C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800BF940
  c->lr=c->r[0]; // 800BF944
  c->r[1]=c->r[1]+0x000000B0u; // 800BF948
  return; // 800BF94C
}

// fn_800BF950
void f_800BF950(Ctx* __restrict c) {
  trace_call(0x800BF950u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF950
  c->r[0]=c->lr; // 800BF954
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800BF958
  c->r[11]=c->r[1]+0x000000B0u; // 800BF95C
  c->lr=0x800BF964u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF960
  c->r[28]=c->r[3]|c->r[3]; // 800BF964
  c->r[3]=c->r[5]|c->r[5]; // 800BF968
  c->r[29]=c->r[6]|c->r[6]; // 800BF96C
  c->lr=0x800BF974u; f_80068A78(c); // 800BF970
  c->r[4]=0u+0x803F0000u; // 800BF974
  c->r[31]=c->r[3]|c->r[3]; // 800BF978
  c->r[4]=c->r[4]+0x00007624u; // 800BF97C
  c->r[3]=c->r[1]+0x00000060u; // 800BF980
  W32(c->r[1]+0x00000050u,c->r[4]); // 800BF984
  c->lr=0x800BF98Cu; f_800BFA58(c); // 800BF988
  {uint32_t ea=c->r[2]+0xFFFF8EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF98C
  c->r[4]=0u+0x80400000u; // 800BF990
  c->r[4]=c->r[4]+0xFFFF823Cu; // 800BF994
  c->r[3]=c->r[1]+0x00000054u; // 800BF998
  W32(c->r[1]+0x00000050u,c->r[4]); // 800BF99C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800BF9A0
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF9A4
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 800BF9A8
  {uint32_t ea=c->r[29]+0x000001A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF9AC
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BF9B0
  {uint32_t ea=c->r[29]+0x000001E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF9B4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800BF9B8
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF9BC
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF9C0
  {uint32_t ea=c->r[29]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF9C4
  c->lr=0x800BF9CCu; f_80065358(c); // 800BF9C8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF9CC
  c->r[3]=c->r[1]+0x00000008u; // 800BF9D0
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF9D4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF9D8
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF9DC
  {uint32_t ea=c->r[29]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF9E0
  {uint32_t ea=c->r[1]+0x00000098u; WF64(ea,c->f[0]);} // 800BF9E4
  c->r[30]=R32(c->r[1]+0x0000009Cu); // 800BF9E8
  c->lr=0x800BF9F0u; f_800521A0(c); // 800BF9EC
  c->r[7]=c->r[3]|c->r[3]; // 800BF9F0
  c->r[3]=c->r[31]|c->r[31]; // 800BF9F4
  c->r[8]=c->r[30]|c->r[30]; // 800BF9F8
  c->r[4]=c->r[1]+0x00000050u; // 800BF9FC
  c->r[5]=c->r[29]+0x00000040u; // 800BFA00
  c->r[6]=c->r[29]+0x0000007Cu; // 800BFA04
  c->lr=0x800BFA0Cu; f_800FE6D0(c); // 800BFA08
  c->r[3]=0u+0x00000000u; // 800BFA0C
  c->r[0]=0u+0x00000007u; // 800BFA10
  W32(c->r[1]+0x00000014u,c->r[3]); // 800BFA14
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BFA18
  c->r[4]=c->r[1]+0x00000010u; // 800BFA1C
  c->ctr=c->r[0]; // 800BFA20
L_800BFA24:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BFA24
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BFA28
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BFA2C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BFA30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFA24; } // 800BFA34
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BFA38
  c->r[11]=c->r[1]+0x000000B0u; // 800BFA3C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BFA40
  c->lr=0x800BFA48u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFA44
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800BFA48
  c->lr=c->r[0]; // 800BFA4C
  c->r[1]=c->r[1]+0x000000B0u; // 800BFA50
  return; // 800BFA54
}

// fn_800BFA58
void f_800BFA58(Ctx* __restrict c) {
  trace_call(0x800BFA58u);
  {uint32_t ea=c->r[2]+0xFFFF8EECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFA58
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BFA5C
  {uint32_t ea=c->r[2]+0xFFFF8EE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFA60
  {uint32_t ea=c->r[2]+0xFFFF8EF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFA64
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 800BFA68
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 800BFA6C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 800BFA70
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 800BFA74
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 800BFA78
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 800BFA7C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800BFA80
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BFA84
  return; // 800BFA88
}

// fn_800BFA8C
void f_800BFA8C(Ctx* __restrict c) {
  trace_call(0x800BFA8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFA8C
  c->r[0]=c->lr; // 800BFA90
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800BFA94
  c->r[11]=c->r[1]+0x000000F0u; // 800BFA98
  c->lr=0x800BFAA0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFA9C
  c->r[28]=c->r[3]|c->r[3]; // 800BFAA0
  c->r[3]=c->r[5]|c->r[5]; // 800BFAA4
  c->r[29]=c->r[6]|c->r[6]; // 800BFAA8
  c->lr=0x800BFAB0u; f_80068A78(c); // 800BFAAC
  c->r[4]=0u+0x803F0000u; // 800BFAB0
  c->r[30]=c->r[3]|c->r[3]; // 800BFAB4
  c->r[4]=c->r[4]+0x00007624u; // 800BFAB8
  c->r[3]=c->r[1]+0x00000090u; // 800BFABC
  W32(c->r[1]+0x00000080u,c->r[4]); // 800BFAC0
  c->lr=0x800BFAC8u; f_800BFA58(c); // 800BFAC4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFAC8
  c->r[3]=c->r[1]+0x000000C0u; // 800BFACC
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFAD0
  c->f[3]=c->f[2]; // 800BFAD4
  c->lr=0x800BFADCu; f_800521A0(c); // 800BFAD8
  c->r[4]=0u+0x80400000u; // 800BFADC
  c->r[3]=c->r[1]+0x000000C0u; // 800BFAE0
  c->r[4]=c->r[4]+0xFFFF822Cu; // 800BFAE4
  W32(c->r[1]+0x00000080u,c->r[4]); // 800BFAE8
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFAEC
  {uint32_t ea=c->r[29]+0x000001A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFAF0
  {uint32_t ea=c->r[29]+0x000001E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BFAF4
  c->lr=0x800BFAFCu; f_80065358(c); // 800BFAF8
  c->r[12]=R32(c->r[30]+0x00000010u); // 800BFAFC
  c->r[3]=c->r[30]|c->r[30]; // 800BFB00
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BFB04
  c->ctr=c->r[12]; // 800BFB08
  if (true) { c->lr=0x800BFB10u; dispatch(c,c->ctr); } // 800BFB0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BFB10
  c->r[5]=0u+0x803E0000u; // 800BFB14
  c->r[5]=c->r[5]+0xFFFFA848u; // 800BFB18
  c->r[4]=c->r[3]|c->r[3]; // 800BFB1C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BFB20
  c->r[3]=c->r[1]+0x00000014u; // 800BFB24
  c->r[5]=c->r[5]+0x00000011u; // 800BFB28
  c->ctr=c->r[12]; // 800BFB2C
  if (true) { c->lr=0x800BFB34u; dispatch(c,c->ctr); } // 800BFB30
  c->r[3]=c->r[1]+0x000000C0u; // 800BFB34
  c->r[4]=c->r[1]+0x00000014u; // 800BFB38
  c->r[5]=c->r[3]|c->r[3]; // 800BFB3C
  c->lr=0x800BFB44u; f_80394B04(c); // 800BFB40
  {uint32_t ea=c->r[29]+0x00000220u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB44
  c->r[3]=c->r[1]+0x00000084u; // 800BFB48
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800BFB4C
  {uint32_t ea=c->r[29]+0x0000025Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB50
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800BFB54
  {uint32_t ea=c->r[29]+0x00000298u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB58
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 800BFB5C
  {uint32_t ea=c->r[29]+0x000002D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB60
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 800BFB64
  {uint32_t ea=c->r[29]+0x00000310u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB68
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 800BFB6C
  {uint32_t ea=c->r[29]+0x0000034Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB70
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 800BFB74
  {uint32_t ea=c->r[29]+0x00000388u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB78
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 800BFB7C
  {uint32_t ea=c->r[29]+0x000003C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB80
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 800BFB84
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFB88
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFB8C
  {uint32_t ea=c->r[29]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BFB90
  c->lr=0x800BFB98u; f_80065358(c); // 800BFB94
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFB98
  c->r[3]=c->r[1]+0x00000008u; // 800BFB9C
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFBA0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BFBA4
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFBA8
  {uint32_t ea=c->r[29]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BFBAC
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[0]);} // 800BFBB0
  c->r[31]=R32(c->r[1]+0x000000D4u); // 800BFBB4
  c->lr=0x800BFBBCu; f_800521A0(c); // 800BFBB8
  c->r[7]=c->r[3]|c->r[3]; // 800BFBBC
  c->r[3]=c->r[30]|c->r[30]; // 800BFBC0
  c->r[8]=c->r[31]|c->r[31]; // 800BFBC4
  c->r[4]=c->r[1]+0x00000080u; // 800BFBC8
  c->r[5]=c->r[29]+0x00000040u; // 800BFBCC
  c->r[6]=c->r[29]+0x0000007Cu; // 800BFBD0
  c->lr=0x800BFBD8u; f_800FE6D0(c); // 800BFBD4
  c->r[3]=0u+0x00000000u; // 800BFBD8
  c->r[0]=0u+0x00000007u; // 800BFBDC
  W32(c->r[1]+0x00000044u,c->r[3]); // 800BFBE0
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BFBE4
  c->r[4]=c->r[1]+0x00000040u; // 800BFBE8
  c->ctr=c->r[0]; // 800BFBEC
L_800BFBF0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BFBF0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BFBF4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BFBF8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BFBFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFBF0; } // 800BFC00
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BFC04
  c->r[11]=c->r[1]+0x000000F0u; // 800BFC08
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BFC0C
  c->lr=0x800BFC14u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFC10
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800BFC14
  c->lr=c->r[0]; // 800BFC18
  c->r[1]=c->r[1]+0x000000F0u; // 800BFC1C
  return; // 800BFC20
}

// fn_800BFC24
void f_800BFC24(Ctx* __restrict c) {
  trace_call(0x800BFC24u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFC24
  c->r[0]=c->lr; // 800BFC28
  W32(c->r[1]+0x00000124u,c->r[0]); // 800BFC2C
  c->r[11]=c->r[1]+0x00000120u; // 800BFC30
  c->lr=0x800BFC38u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFC34
  c->r[28]=c->r[3]|c->r[3]; // 800BFC38
  c->r[3]=c->r[5]|c->r[5]; // 800BFC3C
  c->r[29]=c->r[6]|c->r[6]; // 800BFC40
  c->lr=0x800BFC48u; f_80068A78(c); // 800BFC44
  c->r[4]=0u+0x803F0000u; // 800BFC48
  c->r[30]=c->r[3]|c->r[3]; // 800BFC4C
  c->r[4]=c->r[4]+0x00007624u; // 800BFC50
  c->r[3]=c->r[1]+0x000000C0u; // 800BFC54
  W32(c->r[1]+0x000000B0u,c->r[4]); // 800BFC58
  c->lr=0x800BFC60u; f_800BFA58(c); // 800BFC5C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFC60
  c->r[3]=c->r[1]+0x000000F0u; // 800BFC64
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFC68
  c->f[3]=c->f[2]; // 800BFC6C
  c->lr=0x800BFC74u; f_800521A0(c); // 800BFC70
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFC74
  c->r[3]=c->r[1]+0x000000FCu; // 800BFC78
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFC7C
  c->f[3]=c->f[1]; // 800BFC80
  c->lr=0x800BFC88u; f_800521A0(c); // 800BFC84
  c->r[4]=0u+0x80400000u; // 800BFC88
  c->r[3]=c->r[1]+0x000000F0u; // 800BFC8C
  c->r[4]=c->r[4]+0xFFFF821Cu; // 800BFC90
  W32(c->r[1]+0x000000B0u,c->r[4]); // 800BFC94
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFC98
  {uint32_t ea=c->r[29]+0x000001A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFC9C
  {uint32_t ea=c->r[29]+0x000001E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BFCA0
  c->lr=0x800BFCA8u; f_80065358(c); // 800BFCA4
  c->r[12]=R32(c->r[30]+0x00000010u); // 800BFCA8
  c->r[3]=c->r[30]|c->r[30]; // 800BFCAC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BFCB0
  c->ctr=c->r[12]; // 800BFCB4
  if (true) { c->lr=0x800BFCBCu; dispatch(c,c->ctr); } // 800BFCB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BFCBC
  c->r[31]=0u+0x803E0000u; // 800BFCC0
  c->r[31]=c->r[31]+0xFFFFA848u; // 800BFCC4
  c->r[4]=c->r[3]|c->r[3]; // 800BFCC8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BFCCC
  c->r[3]=c->r[1]+0x00000044u; // 800BFCD0
  c->r[5]=c->r[31]+0x00000011u; // 800BFCD4
  c->ctr=c->r[12]; // 800BFCD8
  if (true) { c->lr=0x800BFCE0u; dispatch(c,c->ctr); } // 800BFCDC
  c->r[3]=c->r[1]+0x000000F0u; // 800BFCE0
  c->r[4]=c->r[1]+0x00000044u; // 800BFCE4
  c->r[5]=c->r[3]|c->r[3]; // 800BFCE8
  c->lr=0x800BFCF0u; f_80394B04(c); // 800BFCEC
  {uint32_t ea=c->r[29]+0x00000220u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFCF0
  c->r[3]=c->r[1]+0x000000FCu; // 800BFCF4
  {uint32_t ea=c->r[29]+0x0000025Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFCF8
  {uint32_t ea=c->r[29]+0x00000298u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BFCFC
  c->lr=0x800BFD04u; f_80065358(c); // 800BFD00
  c->r[12]=R32(c->r[30]+0x00000010u); // 800BFD04
  c->r[3]=c->r[30]|c->r[30]; // 800BFD08
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BFD0C
  c->ctr=c->r[12]; // 800BFD10
  if (true) { c->lr=0x800BFD18u; dispatch(c,c->ctr); } // 800BFD14
  c->r[4]=c->r[3]|c->r[3]; // 800BFD18
  c->r[3]=c->r[1]+0x00000014u; // 800BFD1C
  c->r[12]=R32(c->r[4]+0x00000000u); // 800BFD20
  c->r[5]=c->r[31]+0x00000011u; // 800BFD24
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BFD28
  c->ctr=c->r[12]; // 800BFD2C
  if (true) { c->lr=0x800BFD34u; dispatch(c,c->ctr); } // 800BFD30
  c->r[3]=c->r[1]+0x000000FCu; // 800BFD34
  c->r[4]=c->r[1]+0x00000014u; // 800BFD38
  c->r[5]=c->r[3]|c->r[3]; // 800BFD3C
  c->lr=0x800BFD44u; f_80394B04(c); // 800BFD40
  {uint32_t ea=c->r[29]+0x000002D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD44
  c->r[3]=c->r[1]+0x000000B4u; // 800BFD48
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 800BFD4C
  {uint32_t ea=c->r[29]+0x00000310u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD50
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 800BFD54
  {uint32_t ea=c->r[29]+0x0000034Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD58
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 800BFD5C
  {uint32_t ea=c->r[29]+0x00000388u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD60
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 800BFD64
  {uint32_t ea=c->r[29]+0x000003C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD68
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 800BFD6C
  {uint32_t ea=c->r[29]+0x00000400u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD70
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 800BFD74
  {uint32_t ea=c->r[29]+0x0000043Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD78
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 800BFD7C
  {uint32_t ea=c->r[29]+0x00000478u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD80
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 800BFD84
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFD88
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFD8C
  {uint32_t ea=c->r[29]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BFD90
  c->lr=0x800BFD98u; f_80065358(c); // 800BFD94
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFD98
  c->r[3]=c->r[1]+0x00000008u; // 800BFD9C
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFDA0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BFDA4
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFDA8
  {uint32_t ea=c->r[29]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BFDAC
  {uint32_t ea=c->r[1]+0x00000108u; WF64(ea,c->f[0]);} // 800BFDB0
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 800BFDB4
  c->lr=0x800BFDBCu; f_800521A0(c); // 800BFDB8
  c->r[7]=c->r[3]|c->r[3]; // 800BFDBC
  c->r[3]=c->r[30]|c->r[30]; // 800BFDC0
  c->r[8]=c->r[31]|c->r[31]; // 800BFDC4
  c->r[4]=c->r[1]+0x000000B0u; // 800BFDC8
  c->r[5]=c->r[29]+0x00000040u; // 800BFDCC
  c->r[6]=c->r[29]+0x0000007Cu; // 800BFDD0
  c->lr=0x800BFDD8u; f_800FE6D0(c); // 800BFDD4
  c->r[3]=0u+0x00000000u; // 800BFDD8
  c->r[0]=0u+0x00000007u; // 800BFDDC
  W32(c->r[1]+0x00000074u,c->r[3]); // 800BFDE0
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800BFDE4
  c->r[4]=c->r[1]+0x00000070u; // 800BFDE8
  c->ctr=c->r[0]; // 800BFDEC
L_800BFDF0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BFDF0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BFDF4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BFDF8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BFDFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFDF0; } // 800BFE00
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BFE04
  c->r[11]=c->r[1]+0x00000120u; // 800BFE08
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BFE0C
  c->lr=0x800BFE14u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFE10
  c->r[0]=R32(c->r[1]+0x00000124u); // 800BFE14
  c->lr=c->r[0]; // 800BFE18
  c->r[1]=c->r[1]+0x00000120u; // 800BFE1C
  return; // 800BFE20
}

// fn_800BFE24
void f_800BFE24(Ctx* __restrict c) {
  trace_call(0x800BFE24u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFE24
  c->r[0]=c->lr; // 800BFE28
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BFE2C
  c->r[11]=c->r[1]+0x00000060u; // 800BFE30
  c->lr=0x800BFE38u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BFE34
  c->r[29]=c->r[3]|c->r[3]; // 800BFE38
  c->r[3]=c->r[5]|c->r[5]; // 800BFE3C
  c->r[30]=c->r[6]|c->r[6]; // 800BFE40
  c->lr=0x800BFE48u; f_80068A78(c); // 800BFE44
  c->r[31]=c->r[3]|c->r[3]; // 800BFE48
  c->r[3]=c->r[30]|c->r[30]; // 800BFE4C
  c->lr=0x800BFE54u; f_800ACC48(c); // 800BFE50
  cmps(c,0,(int32_t)c->r[3],0); // 800BFE54
  if (crb(c,2)) { goto L_800BFE6C; } // 800BFE58
  c->r[3]=c->r[31]|c->r[31]; // 800BFE5C
  c->r[4]=c->r[30]+0x00000004u; // 800BFE60
  c->lr=0x800BFE68u; f_800FEAF8(c); // 800BFE64
  goto L_800BFE94; // 800BFE68
L_800BFE6C:;
  c->r[3]=c->r[30]|c->r[30]; // 800BFE6C
  c->lr=0x800BFE74u; f_800B5850(c); // 800BFE70
  cmps(c,0,(int32_t)c->r[3],0); // 800BFE74
  if (crb(c,2)) { goto L_800BFE94; } // 800BFE78
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFE7C
  c->r[3]=c->r[31]|c->r[31]; // 800BFE80
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BFE84
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800BFE88
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800BFE8C
  c->lr=0x800BFE94u; f_800FEB6C(c); // 800BFE90
L_800BFE94:;
  c->r[3]=0u+0x00000000u; // 800BFE94
  c->r[0]=0u+0x00000007u; // 800BFE98
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BFE9C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BFEA0
  c->r[4]=c->r[1]+0x00000004u; // 800BFEA4
  c->ctr=c->r[0]; // 800BFEA8
L_800BFEAC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BFEAC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BFEB0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BFEB4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BFEB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFEAC; } // 800BFEBC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BFEC0
  c->r[11]=c->r[1]+0x00000060u; // 800BFEC4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BFEC8
  c->lr=0x800BFED0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BFECC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BFED0
  c->lr=c->r[0]; // 800BFED4
  c->r[1]=c->r[1]+0x00000060u; // 800BFED8
  return; // 800BFEDC
}

// fn_800BFEE0
void f_800BFEE0(Ctx* __restrict c) {
  trace_call(0x800BFEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFEE0
  c->r[0]=c->lr; // 800BFEE4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BFEE8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800BFEEC
  c->r[31]=c->r[3]|c->r[3]; // 800BFEF0
  c->r[3]=c->r[5]|c->r[5]; // 800BFEF4
  c->lr=0x800BFEFCu; f_80068A78(c); // 800BFEF8
  c->r[3]=c->r[3]+0x00000CA4u; // 800BFEFC
  c->lr=0x800BFF04u; f_800FC568(c); // 800BFF00
  c->r[3]=0u+0x00000000u; // 800BFF04
  c->r[0]=0u+0x00000007u; // 800BFF08
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BFF0C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BFF10
  c->r[4]=c->r[1]+0x00000004u; // 800BFF14
  c->ctr=c->r[0]; // 800BFF18
L_800BFF1C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BFF1C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BFF20
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BFF24
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BFF28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFF1C; } // 800BFF2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BFF30
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BFF34
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800BFF38
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BFF3C
  c->lr=c->r[0]; // 800BFF40
  c->r[1]=c->r[1]+0x00000050u; // 800BFF44
  return; // 800BFF48
}

// fn_800BFF4C
void f_800BFF4C(Ctx* __restrict c) {
  trace_call(0x800BFF4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFF4C
  c->r[0]=c->lr; // 800BFF50
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BFF54
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800BFF58
  c->r[31]=c->r[6]|c->r[6]; // 800BFF5C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800BFF60
  c->r[30]=c->r[3]|c->r[3]; // 800BFF64
  c->r[3]=c->r[5]|c->r[5]; // 800BFF68
  c->lr=0x800BFF70u; f_80068A78(c); // 800BFF6C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BFF70
  c->r[4]=0u+0x803E0000u; // 800BFF74
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BFF78
  c->r[4]=c->r[4]+0xFFFF9B20u; // 800BFF7C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BFF80
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BFF84
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 800BFF88
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800BFF8C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BFF90
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800BFF94
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BFF98
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800BFF9C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 800BFFA0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BFFA4
  c->r[12]=R32(c->r[12]+0x00000028u); // 800BFFA8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 800BFFAC
  c->r[6]=R32(c->r[1]+0x0000004Cu); // 800BFFB0
  c->r[5]=R32(c->r[1]+0x00000054u); // 800BFFB4
  c->r[4]=R32(c->r[4]+c->r[0]); // 800BFFB8
  c->ctr=c->r[12]; // 800BFFBC
  if (true) { c->lr=0x800BFFC4u; dispatch(c,c->ctr); } // 800BFFC0
  c->r[3]=0u+0x00000000u; // 800BFFC4
  c->r[0]=0u+0x00000007u; // 800BFFC8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BFFCC
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800BFFD0
  c->r[4]=c->r[1]+0x00000004u; // 800BFFD4
  c->ctr=c->r[0]; // 800BFFD8
L_800BFFDC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BFFDC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BFFE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BFFE4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BFFE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BFFDC; } // 800BFFEC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BFFF0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BFFF4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800BFFF8
  c->r[30]=R32(c->r[1]+0x00000068u); // 800BFFFC
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C0000
  c->lr=c->r[0]; // 800C0004
  c->r[1]=c->r[1]+0x00000070u; // 800C0008
  return; // 800C000C
}

// fn_800C0010
void f_800C0010(Ctx* __restrict c) {
  trace_call(0x800C0010u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0010
  c->r[0]=c->lr; // 800C0014
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C0018
  c->r[11]=c->r[1]+0x000000A0u; // 800C001C
  c->lr=0x800C0024u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0020
  c->r[31]=c->r[5]|c->r[5]; // 800C0024
  c->r[28]=c->r[3]|c->r[3]; // 800C0028
  c->r[29]=c->r[6]|c->r[6]; // 800C002C
  c->r[3]=c->r[31]|c->r[31]; // 800C0030
  c->lr=0x800C0038u; f_80068A78(c); // 800C0034
  c->r[30]=c->r[3]|c->r[3]; // 800C0038
  c->r[3]=c->r[29]|c->r[29]; // 800C003C
  c->lr=0x800C0044u; f_800ACC48(c); // 800C0040
  cmps(c,0,(int32_t)c->r[3],0); // 800C0044
  if (crb(c,2)) { goto L_800C0094; } // 800C0048
  c->r[12]=R32(c->r[30]+0x00000010u); // 800C004C
  c->r[3]=c->r[30]|c->r[30]; // 800C0050
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C0054
  c->ctr=c->r[12]; // 800C0058
  if (true) { c->lr=0x800C0060u; dispatch(c,c->ctr); } // 800C005C
  c->r[4]=c->r[29]+0x00000004u; // 800C0060
  c->lr=0x800C0068u; f_8002C058(c); // 800C0064
  c->r[4]=c->r[3]|c->r[3]; // 800C0068
  c->r[3]=c->r[1]+0x0000002Cu; // 800C006C
  c->lr=0x800C0074u; f_800C0124(c); // 800C0070
  c->r[5]=R32(c->r[31]+0x00000000u); // 800C0074
  c->r[3]=c->r[1]+0x00000010u; // 800C0078
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C007C
  c->r[4]=c->r[1]+0x0000002Cu; // 800C0080
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C0084
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0088
  c->lr=0x800C0090u; f_800C01A4(c); // 800C008C
  goto L_800C00D8; // 800C0090
L_800C0094:;
  c->r[3]=c->r[29]|c->r[29]; // 800C0094
  c->lr=0x800C009Cu; f_800B5850(c); // 800C0098
  cmps(c,0,(int32_t)c->r[3],0); // 800C009C
  if (crb(c,2)) { goto L_800C00D8; } // 800C00A0
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C00A4
  c->r[3]=c->r[1]+0x00000018u; // 800C00A8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C00AC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800C00B0
  c->r[4]=R32(c->r[1]+0x00000084u); // 800C00B4
  c->lr=0x800C00BCu; f_800C0124(c); // 800C00B8
  c->r[5]=R32(c->r[31]+0x00000000u); // 800C00BC
  c->r[3]=c->r[1]+0x00000008u; // 800C00C0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C00C4
  c->r[4]=c->r[1]+0x00000018u; // 800C00C8
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C00CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C00D0
  c->lr=0x800C00D8u; f_800C01A4(c); // 800C00D4
L_800C00D8:;
  c->r[3]=0u+0x00000000u; // 800C00D8
  c->r[0]=0u+0x00000007u; // 800C00DC
  W32(c->r[1]+0x00000040u,c->r[3]); // 800C00E0
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C00E4
  c->r[4]=c->r[1]+0x0000003Cu; // 800C00E8
  c->ctr=c->r[0]; // 800C00EC
L_800C00F0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C00F0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C00F4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C00F8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C00FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C00F0; } // 800C0100
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0104
  c->r[11]=c->r[1]+0x000000A0u; // 800C0108
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C010C
  c->lr=0x800C0114u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0110
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C0114
  c->lr=c->r[0]; // 800C0118
  c->r[1]=c->r[1]+0x000000A0u; // 800C011C
  return; // 800C0120
}

// fn_800C0124
void f_800C0124(Ctx* __restrict c) {
  trace_call(0x800C0124u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0124
  c->r[0]=c->lr; // 800C0128
  c->r[5]=0u+0x803F0000u; // 800C012C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C0130
  c->r[5]=c->r[5]+0x00001B28u; // 800C0134
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C0138
  c->r[31]=0u+0x00000000u; // 800C013C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C0140
  c->r[30]=c->r[4]|c->r[4]; // 800C0144
  c->r[4]=c->r[1]+0x00000010u; // 800C0148
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C014C
  c->r[29]=c->r[3]|c->r[3]; // 800C0150
  W32(c->r[1]+0x00000010u,c->r[31]); // 800C0154
  W32(c->r[1]+0x00000014u,c->r[31]); // 800C0158
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C015C
  c->r[3]=c->r[3]+0x00000004u; // 800C0160
  W32(c->r[1]+0x00000008u,c->r[31]); // 800C0164
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0168
  c->lr=0x800C0170u; f_80064C98(c); // 800C016C
  c->r[3]=0u+0x803F0000u; // 800C0170
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 800C0174
  c->r[3]=c->r[3]+0x000079C4u; // 800C0178
  W32(c->r[29]+0x00000000u,c->r[3]); // 800C017C
  c->r[3]=c->r[29]|c->r[29]; // 800C0180
  W32(c->r[29]+0x00000010u,c->r[30]); // 800C0184
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C0188
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C018C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C0190
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C0194
  c->lr=c->r[0]; // 800C0198
  c->r[1]=c->r[1]+0x00000030u; // 800C019C
  return; // 800C01A0
}

// fn_800C01A4
void f_800C01A4(Ctx* __restrict c) {
  trace_call(0x800C01A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C01A4
  c->r[0]=c->lr; // 800C01A8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C01AC
  {uint32_t ea=c->r[1]+0x0000004Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C01B0
  c->r[31]=c->r[1]|c->r[1]; // 800C01B4
  c->r[27]=c->r[3]|c->r[3]; // 800C01B8
  c->r[28]=c->r[4]|c->r[4]; // 800C01BC
  c->lr=0x800C01C4u; f_8003F1D4(c); // 800C01C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C01C4
  if (crb(c,2)) { goto L_800C026C; } // 800C01C8
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800C01CC
  c->lr=0x800C01D4u; f_802A6EE4(c); // 800C01D0
  cmps(c,0,(int32_t)c->r[3],0); // 800C01D4
  c->r[29]=c->r[3]|c->r[3]; // 800C01D8
  if (crb(c,2)) { goto L_800C026C; } // 800C01DC
  if (crb(c,2)) { goto L_800C022C; } // 800C01E0
  c->r[30]=0u+0x00000000u; // 800C01E4
  c->r[5]=0u+0x803F0000u; // 800C01E8
  W32(c->r[31]+0x00000008u,c->r[30]); // 800C01EC
  c->r[5]=c->r[5]+0x00001B28u; // 800C01F0
  c->r[4]=c->r[31]+0x00000008u; // 800C01F4
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 800C01F8
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C01FC
  c->r[3]=c->r[3]+0x00000004u; // 800C0200
  W32(c->r[31]+0x00000044u,c->r[1]); // 800C0204
  W32(c->r[31]+0x00000010u,c->r[30]); // 800C0208
  W32(c->r[31]+0x00000014u,c->r[30]); // 800C020C
  c->lr=0x800C0214u; f_80064C98(c); // 800C0210
  c->r[3]=0u+0x803F0000u; // 800C0214
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800C0218
  c->r[3]=c->r[3]+0x000079C4u; // 800C021C
  c->r[0]=0u+0xFFFFFFFFu; // 800C0220
  W32(c->r[29]+0x00000000u,c->r[3]); // 800C0224
  W32(c->r[29]+0x00000010u,c->r[0]); // 800C0228
L_800C022C:;
  c->r[3]=c->r[29]|c->r[29]; // 800C022C
  c->r[4]=c->r[28]|c->r[28]; // 800C0230
  c->lr=0x800C0238u; f_80064DD8(c); // 800C0234
  c->r[0]=R32(c->r[28]+0x00000010u); // 800C0238
  c->r[30]=addc(c,c->r[29],0x00000014u,0); cr0(c,c->r[30]); // 800C023C
  W32(c->r[29]+0x00000010u,c->r[0]); // 800C0240
  if (crb(c,2)) { goto L_800C0258; } // 800C0244
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 800C0248
  c->r[3]=c->r[30]|c->r[30]; // 800C024C
  c->r[4]=c->r[29]|c->r[29]; // 800C0250
  c->lr=0x800C0258u; f_80064CE8(c); // 800C0254
L_800C0258:;
  c->r[3]=c->r[27]|c->r[27]; // 800C0258
  c->lr=0x800C0260u; f_80068A78(c); // 800C025C
  c->r[4]=c->r[30]|c->r[30]; // 800C0260
  c->r[3]=c->r[3]+0x00000030u; // 800C0264
  c->lr=0x800C026Cu; f_8003FD14(c); // 800C0268
L_800C026C:;
  c->r[10]=c->r[31]|c->r[31]; // 800C026C
  {uint32_t ea=c->r[10]+0x0000004Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C0270
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C0274
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C0278
  c->r[1]=c->r[10]|c->r[10]; // 800C027C
  c->lr=c->r[0]; // 800C0280
  return; // 800C0284
}

// dtor_800C0288
void f_800C0288(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0288
  c->r[0]=c->lr; // 800C028C
  cmps(c,0,(int32_t)c->r[3],0); // 800C0290
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C0294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C0298
  c->r[31]=c->r[3]|c->r[3]; // 800C029C
  if (crb(c,2)) { goto L_800C02B0; } // 800C02A0
  cmps(c,0,(int32_t)c->r[4],0); // 800C02A4
  if (!crb(c,1)) { goto L_800C02B0; } // 800C02A8
  c->lr=0x800C02B0u; f_802896EC(c); // 800C02AC
L_800C02B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C02B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C02B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C02B8
  c->lr=c->r[0]; // 800C02BC
  c->r[1]=c->r[1]+0x00000010u; // 800C02C0
  return; // 800C02C4
}

// fn_800C02C8
void f_800C02C8(Ctx* __restrict c) {
  trace_call(0x800C02C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C02C8
  c->r[0]=c->lr; // 800C02CC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C02D0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C02D4
  c->r[31]=c->r[5]|c->r[5]; // 800C02D8
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C02DC
  c->r[30]=c->r[3]|c->r[3]; // 800C02E0
  c->r[3]=c->r[31]|c->r[31]; // 800C02E4
  c->lr=0x800C02ECu; f_80068A78(c); // 800C02E8
  c->r[3]=c->r[1]+0x00000008u; // 800C02EC
  c->r[4]=0u+0xFFFFFFFFu; // 800C02F0
  c->lr=0x800C02F8u; f_800BDBB4(c); // 800C02F4
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C02F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C02FC
  if (crb(c,2)) { goto L_800C034C; } // 800C0300
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C0304
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C0308
  c->ctr=c->r[12]; // 800C030C
  if (true) { c->lr=0x800C0314u; dispatch(c,c->ctr); } // 800C0310
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C0314
  if (crb(c,2)) { goto L_800C034C; } // 800C0318
  c->r[4]=R32(c->r[31]+0x00000008u); // 800C031C
  c->r[0]=0u+0x43300000u; // 800C0320
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C0324
  c->r[3]=0u+0x00000001u; // 800C0328
  c->r[0]=R32(c->r[4]+0x00000014u); // 800C032C
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C0330
  c->r[0]=c->r[0]^0x80000000u; // 800C0334
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C0338
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C033C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C0340
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C0344
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C0348
L_800C034C:;
  c->r[0]=0u+0x00000007u; // 800C034C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C0350
  c->r[4]=c->r[1]+0x00000004u; // 800C0354
  c->ctr=c->r[0]; // 800C0358
L_800C035C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C035C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0360
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0364
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0368
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C035C; } // 800C036C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0370
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0374
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C0378
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C037C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C0380
  c->lr=c->r[0]; // 800C0384
  c->r[1]=c->r[1]+0x00000060u; // 800C0388
  return; // 800C038C
}

// fn_800C0390
void f_800C0390(Ctx* __restrict c) {
  trace_call(0x800C0390u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0390
  c->r[0]=c->lr; // 800C0394
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C0398
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C039C
  c->r[31]=c->r[5]|c->r[5]; // 800C03A0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C03A4
  c->r[30]=c->r[3]|c->r[3]; // 800C03A8
  c->r[3]=c->r[31]|c->r[31]; // 800C03AC
  c->lr=0x800C03B4u; f_80068A78(c); // 800C03B0
  c->r[3]=c->r[1]+0x00000008u; // 800C03B4
  c->r[4]=0u+0xFFFFFFFFu; // 800C03B8
  c->lr=0x800C03C0u; f_800BDBB4(c); // 800C03BC
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C03C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C03C4
  if (crb(c,2)) { goto L_800C0428; } // 800C03C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C03CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C03D0
  c->ctr=c->r[12]; // 800C03D4
  if (true) { c->lr=0x800C03DCu; dispatch(c,c->ctr); } // 800C03D8
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C03DC
  if (crb(c,2)) { goto L_800C0428; } // 800C03E0
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C03E4
  c->r[0]=R8(c->r[3]+0x00000034u); // 800C03E8
  cmps(c,0,(int32_t)c->r[0],0); // 800C03EC
  if (crb(c,0)) { goto L_800C03FC; } // 800C03F0
  cmps(c,0,(int32_t)c->r[0],29); // 800C03F4
  if (crb(c,0)) { goto L_800C0400; } // 800C03F8
L_800C03FC:;
  c->r[0]=0u+0x00000000u; // 800C03FC
L_800C0400:;
  c->r[3]=c->r[0]^0x80000000u; // 800C0400
  c->r[0]=0u+0x43300000u; // 800C0404
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800C0408
  c->r[3]=0u+0x00000001u; // 800C040C
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C0410
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C0414
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C0418
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C041C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C0420
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C0424
L_800C0428:;
  c->r[0]=0u+0x00000007u; // 800C0428
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C042C
  c->r[4]=c->r[1]+0x00000004u; // 800C0430
  c->ctr=c->r[0]; // 800C0434
L_800C0438:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0438
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C043C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0440
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0444
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0438; } // 800C0448
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C044C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0450
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C0454
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C0458
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C045C
  c->lr=c->r[0]; // 800C0460
  c->r[1]=c->r[1]+0x00000060u; // 800C0464
  return; // 800C0468
}

// fn_800C046C
void f_800C046C(Ctx* __restrict c) {
  trace_call(0x800C046Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C046C
  c->r[0]=c->lr; // 800C0470
  c->r[4]=0u+0x00000003u; // 800C0474
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C0478
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C047C
  c->r[31]=c->r[5]|c->r[5]; // 800C0480
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C0484
  c->r[30]=c->r[3]|c->r[3]; // 800C0488
  c->r[3]=c->r[1]+0x00000014u; // 800C048C
  c->lr=0x800C0494u; f_800BDBB4(c); // 800C0490
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C0494
  cmps(c,0,(int32_t)c->r[3],0); // 800C0498
  if (crb(c,2)) { goto L_800C04FC; } // 800C049C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C04A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C04A4
  c->ctr=c->r[12]; // 800C04A8
  if (true) { c->lr=0x800C04B0u; dispatch(c,c->ctr); } // 800C04AC
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C04B0
  if (crb(c,2)) { goto L_800C04FC; } // 800C04B4
  c->r[4]=R32(c->r[31]+0x00000008u); // 800C04B8
  c->r[3]=c->r[1]+0x00000008u; // 800C04BC
  c->r[4]=c->r[4]+0x00000024u; // 800C04C0
  c->lr=0x800C04C8u; f_8003F468(c); // 800C04C4
  c->r[3]=c->r[1]+0x00000008u; // 800C04C8
  c->lr=0x800C04D0u; f_8018122C(c); // 800C04CC
  c->r[3]=c->r[3]^0x80000000u; // 800C04D0
  c->r[0]=0u+0x43300000u; // 800C04D4
  W32(c->r[1]+0x00000054u,c->r[3]); // 800C04D8
  c->r[3]=0u+0x00000001u; // 800C04DC
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C04E0
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C04E4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800C04E8
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C04EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C04F0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800C04F4
  goto L_800C0554; // 800C04F8
L_800C04FC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C04FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C0500
  if (crb(c,2)) { goto L_800C0554; } // 800C0504
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C0508
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C050C
  c->ctr=c->r[12]; // 800C0510
  if (true) { c->lr=0x800C0518u; dispatch(c,c->ctr); } // 800C0514
  cmps(c,0,(int32_t)c->r[3],5); // 800C0518
  if (!crb(c,2)) { goto L_800C0554; } // 800C051C
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C0520
  c->r[3]=c->r[3]+0x00000040u; // 800C0524
  c->lr=0x800C052Cu; f_8018122C(c); // 800C0528
  c->r[3]=c->r[3]^0x80000000u; // 800C052C
  c->r[0]=0u+0x43300000u; // 800C0530
  W32(c->r[1]+0x00000054u,c->r[3]); // 800C0534
  c->r[3]=0u+0x00000001u; // 800C0538
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C053C
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C0540
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800C0544
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C0548
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C054C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800C0550
L_800C0554:;
  c->r[0]=0u+0x00000007u; // 800C0554
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C0558
  c->r[4]=c->r[1]+0x00000010u; // 800C055C
  c->ctr=c->r[0]; // 800C0560
L_800C0564:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0564
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0568
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C056C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0570
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0564; } // 800C0574
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0578
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C057C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C0580
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C0584
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C0588
  c->lr=c->r[0]; // 800C058C
  c->r[1]=c->r[1]+0x00000060u; // 800C0590
  return; // 800C0594
}

// fn_800C0598
void f_800C0598(Ctx* __restrict c) {
  trace_call(0x800C0598u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0598
  c->r[0]=c->lr; // 800C059C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C05A0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C05A4
  c->r[31]=c->r[6]|c->r[6]; // 800C05A8
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C05AC
  c->r[30]=c->r[3]|c->r[3]; // 800C05B0
  c->r[3]=c->r[5]|c->r[5]; // 800C05B4
  c->lr=0x800C05BCu; f_80068A78(c); // 800C05B8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C05BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C05C0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C05C4
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800C05C8
  c->lr=0x800C05D0u; f_800FE6F8(c); // 800C05CC
  c->r[3]=0u+0x00000000u; // 800C05D0
  c->r[0]=0u+0x00000007u; // 800C05D4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C05D8
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C05DC
  c->r[4]=c->r[1]+0x00000004u; // 800C05E0
  c->ctr=c->r[0]; // 800C05E4
L_800C05E8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C05E8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C05EC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C05F0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C05F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C05E8; } // 800C05F8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C05FC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0600
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C0604
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C0608
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C060C
  c->lr=c->r[0]; // 800C0610
  c->r[1]=c->r[1]+0x00000060u; // 800C0614
  return; // 800C0618
}

// fn_800C061C
void f_800C061C(Ctx* __restrict c) {
  trace_call(0x800C061Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C061C
  c->r[0]=c->lr; // 800C0620
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800C0624
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800C0628
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800C062C
  c->r[11]=c->r[1]+0x000000A0u; // 800C0630
  c->lr=0x800C0638u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0634
  c->r[29]=c->r[3]|c->r[3]; // 800C0638
  c->r[3]=c->r[5]|c->r[5]; // 800C063C
  c->r[30]=c->r[6]|c->r[6]; // 800C0640
  c->lr=0x800C0648u; f_80068A78(c); // 800C0644
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0648
  c->r[31]=c->r[3]|c->r[3]; // 800C064C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0650
  c->r[3]=c->r[1]+0x00000014u; // 800C0654
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0658
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C065C
  c->lr=0x800C0664u; f_800521A0(c); // 800C0660
  {uint32_t ea=c->r[2]+0xFFFF8EF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0664
  c->r[3]=c->r[1]+0x0000005Cu; // 800C0668
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C066C
  {uint32_t ea=c->r[30]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0670
  {uint32_t ea=c->r[30]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0674
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800C0678
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800C067C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 800C0680
  c->lr=0x800C0688u; f_800BEB20(c); // 800C0684
  {uint32_t ea=c->r[30]+0x000001A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0688
  c->r[3]=c->r[1]+0x00000008u; // 800C068C
  {uint32_t ea=c->r[30]+0x000001E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0690
  {uint32_t ea=c->r[30]+0x00000220u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0694
  c->lr=0x800C069Cu; f_800521A0(c); // 800C0698
  c->r[4]=c->r[3]|c->r[3]; // 800C069C
  c->r[3]=c->r[1]+0x0000005Cu; // 800C06A0
  c->lr=0x800C06A8u; f_80032FF4(c); // 800C06A4
  c->f[1]=c->f[31]; // 800C06A8
  c->r[3]=c->r[31]|c->r[31]; // 800C06AC
  c->r[4]=c->r[1]+0x0000005Cu; // 800C06B0
  c->r[5]=c->r[1]+0x00000014u; // 800C06B4
  c->lr=0x800C06BCu; f_800FE708(c); // 800C06B8
  c->r[3]=0u+0x00000000u; // 800C06BC
  c->r[0]=0u+0x00000007u; // 800C06C0
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C06C4
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C06C8
  c->r[4]=c->r[1]+0x0000001Cu; // 800C06CC
  c->ctr=c->r[0]; // 800C06D0
L_800C06D4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C06D4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C06D8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C06DC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C06E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C06D4; } // 800C06E4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C06E8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C06EC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800C06F0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800C06F4
  c->r[11]=c->r[1]+0x000000A0u; // 800C06F8
  c->lr=0x800C0700u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C06FC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800C0700
  c->lr=c->r[0]; // 800C0704
  c->r[1]=c->r[1]+0x000000B0u; // 800C0708
  return; // 800C070C
}

// fn_800C0710
void f_800C0710(Ctx* __restrict c) {
  trace_call(0x800C0710u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0710
  c->r[0]=c->lr; // 800C0714
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800C0718
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800C071C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800C0720
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800C0724
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800C0728
  c->r[11]=c->r[1]+0x00000090u; // 800C072C
  c->lr=0x800C0734u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0730
  c->r[29]=c->r[3]|c->r[3]; // 800C0734
  c->r[3]=c->r[5]|c->r[5]; // 800C0738
  c->r[30]=c->r[6]|c->r[6]; // 800C073C
  c->lr=0x800C0744u; f_80068A78(c); // 800C0740
  {uint32_t ea=c->r[2]+0xFFFF8EF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0744
  c->r[31]=c->r[3]|c->r[3]; // 800C0748
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C074C
  c->r[3]=c->r[1]+0x00000050u; // 800C0750
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0754
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0758
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800C075C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800C0760
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0764
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 800C0768
  {uint32_t ea=c->r[30]+0x00000040u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C076C
  c->lr=0x800C0774u; f_800BEB20(c); // 800C0770
  {uint32_t ea=c->r[30]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0774
  c->r[3]=c->r[1]+0x00000008u; // 800C0778
  {uint32_t ea=c->r[30]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C077C
  {uint32_t ea=c->r[30]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0780
  c->lr=0x800C0788u; f_800521A0(c); // 800C0784
  c->r[4]=c->r[3]|c->r[3]; // 800C0788
  c->r[3]=c->r[1]+0x00000050u; // 800C078C
  c->lr=0x800C0794u; f_80032FF4(c); // 800C0790
  c->f[1]=c->f[30]; // 800C0794
  c->r[3]=c->r[31]|c->r[31]; // 800C0798
  c->f[2]=c->f[31]; // 800C079C
  c->r[4]=c->r[1]+0x00000050u; // 800C07A0
  c->lr=0x800C07A8u; f_800FE85C(c); // 800C07A4
  c->r[3]=0u+0x00000000u; // 800C07A8
  c->r[0]=0u+0x00000007u; // 800C07AC
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C07B0
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C07B4
  c->r[4]=c->r[1]+0x00000010u; // 800C07B8
  c->ctr=c->r[0]; // 800C07BC
L_800C07C0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C07C0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C07C4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C07C8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C07CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C07C0; } // 800C07D0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C07D4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C07D8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800C07DC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800C07E0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800C07E4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800C07E8
  c->r[11]=c->r[1]+0x00000090u; // 800C07EC
  c->lr=0x800C07F4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C07F0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800C07F4
  c->lr=c->r[0]; // 800C07F8
  c->r[1]=c->r[1]+0x000000B0u; // 800C07FC
  return; // 800C0800
}

// fn_800C0804
void f_800C0804(Ctx* __restrict c) {
  trace_call(0x800C0804u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0804
  c->r[0]=c->lr; // 800C0808
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800C080C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800C0810
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800C0814
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800C0818
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800C081C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 800C0820
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 800C0824
  c->r[11]=c->r[1]+0x00000090u; // 800C0828
  c->lr=0x800C0830u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C082C
  c->r[29]=c->r[3]|c->r[3]; // 800C0830
  c->r[3]=c->r[5]|c->r[5]; // 800C0834
  c->r[30]=c->r[6]|c->r[6]; // 800C0838
  c->lr=0x800C0840u; f_80068A78(c); // 800C083C
  {uint32_t ea=c->r[2]+0xFFFF8EF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0840
  c->r[31]=c->r[3]|c->r[3]; // 800C0844
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0848
  c->r[3]=c->r[1]+0x00000050u; // 800C084C
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0850
  {uint32_t ea=c->r[30]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0854
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800C0858
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800C085C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0860
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 800C0864
  {uint32_t ea=c->r[30]+0x00000040u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C0868
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800C086C
  c->lr=0x800C0874u; f_800BEB20(c); // 800C0870
  {uint32_t ea=c->r[30]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0874
  c->r[3]=c->r[1]+0x00000008u; // 800C0878
  {uint32_t ea=c->r[30]+0x000001A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C087C
  {uint32_t ea=c->r[30]+0x000001E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0880
  c->lr=0x800C0888u; f_800521A0(c); // 800C0884
  c->r[4]=c->r[3]|c->r[3]; // 800C0888
  c->r[3]=c->r[1]+0x00000050u; // 800C088C
  c->lr=0x800C0894u; f_80032FF4(c); // 800C0890
  c->f[1]=c->f[30]; // 800C0894
  c->r[3]=c->r[31]|c->r[31]; // 800C0898
  c->f[2]=c->f[29]; // 800C089C
  c->r[4]=c->r[1]+0x00000050u; // 800C08A0
  c->f[3]=c->f[31]; // 800C08A4
  c->lr=0x800C08ACu; f_800FE99C(c); // 800C08A8
  c->r[3]=0u+0x00000000u; // 800C08AC
  c->r[0]=0u+0x00000007u; // 800C08B0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C08B4
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C08B8
  c->r[4]=c->r[1]+0x00000010u; // 800C08BC
  c->ctr=c->r[0]; // 800C08C0
L_800C08C4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C08C4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C08C8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C08CC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C08D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C08C4; } // 800C08D4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C08D8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C08DC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800C08E0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800C08E4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800C08E8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800C08EC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 800C08F0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 800C08F4
  c->r[11]=c->r[1]+0x00000090u; // 800C08F8
  c->lr=0x800C0900u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C08FC
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800C0900
  c->lr=c->r[0]; // 800C0904
  c->r[1]=c->r[1]+0x000000C0u; // 800C0908
  return; // 800C090C
}

// fn_800C0910
void f_800C0910(Ctx* __restrict c) {
  trace_call(0x800C0910u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0910
  c->r[0]=c->lr; // 800C0914
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C0918
  c->r[11]=c->r[1]+0x00000090u; // 800C091C
  c->lr=0x800C0924u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0920
  c->r[29]=c->r[3]|c->r[3]; // 800C0924
  c->r[3]=c->r[5]|c->r[5]; // 800C0928
  c->r[30]=c->r[6]|c->r[6]; // 800C092C
  c->lr=0x800C0934u; f_80068A78(c); // 800C0930
  c->r[31]=c->r[3]|c->r[3]; // 800C0934
  c->r[3]=c->r[1]+0x00000050u; // 800C0938
  c->lr=0x800C0940u; f_80264680(c); // 800C093C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0940
  c->r[3]=c->r[1]+0x00000008u; // 800C0944
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0948
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C094C
  c->lr=0x800C0954u; f_800521A0(c); // 800C0950
  c->r[4]=c->r[3]|c->r[3]; // 800C0954
  c->r[3]=c->r[1]+0x00000050u; // 800C0958
  c->lr=0x800C0960u; f_80032FF4(c); // 800C095C
  c->r[3]=c->r[31]|c->r[31]; // 800C0960
  c->r[4]=c->r[30]+0x00000004u; // 800C0964
  c->r[5]=c->r[1]+0x00000050u; // 800C0968
  c->lr=0x800C0970u; f_800FEAE0(c); // 800C096C
  c->r[3]=0u+0x00000000u; // 800C0970
  c->r[0]=0u+0x00000007u; // 800C0974
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C0978
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C097C
  c->r[4]=c->r[1]+0x00000010u; // 800C0980
  c->ctr=c->r[0]; // 800C0984
L_800C0988:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0988
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C098C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0990
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0994
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0988; } // 800C0998
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C099C
  c->r[11]=c->r[1]+0x00000090u; // 800C09A0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C09A4
  c->lr=0x800C09ACu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C09A8
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C09AC
  c->lr=c->r[0]; // 800C09B0
  c->r[1]=c->r[1]+0x00000090u; // 800C09B4
  return; // 800C09B8
}

// fn_800C09BC
void f_800C09BC(Ctx* __restrict c) {
  trace_call(0x800C09BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C09BC
  c->r[0]=c->lr; // 800C09C0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C09C4
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C09C8
  c->r[28]=c->r[3]|c->r[3]; // 800C09CC
  c->r[3]=c->r[5]|c->r[5]; // 800C09D0
  c->r[29]=c->r[6]|c->r[6]; // 800C09D4
  c->lr=0x800C09DCu; f_80068A78(c); // 800C09D8
  c->r[31]=0u+0x80490000u; // 800C09DC
  c->r[30]=c->r[3]|c->r[3]; // 800C09E0
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C09E4
  c->r[4]=c->r[29]+0x00000004u; // 800C09E8
  c->r[5]=0u+0x00000000u; // 800C09EC
  c->lr=0x800C09F4u; f_8010453C(c); // 800C09F0
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C09F4
  c->lr=0x800C09FCu; f_80102CC4(c); // 800C09F8
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C09FC
  c->r[4]=c->r[29]+0x00000004u; // 800C0A00
  c->lr=0x800C0A08u; f_80103094(c); // 800C0A04
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C0A08
  c->r[4]=c->r[29]+0x00000004u; // 800C0A0C
  c->lr=0x800C0A14u; f_80103094(c); // 800C0A10
  c->r[4]=c->r[3]|c->r[3]; // 800C0A14
  c->r[3]=c->r[30]|c->r[30]; // 800C0A18
  c->r[4]=R32(c->r[4]+0x00000010u); // 800C0A1C
  c->lr=0x800C0A24u; f_800CECD0(c); // 800C0A20
  c->r[3]=0u+0x00000000u; // 800C0A24
  c->r[0]=0u+0x00000007u; // 800C0A28
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C0A2C
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C0A30
  c->r[4]=c->r[1]+0x00000004u; // 800C0A34
  c->ctr=c->r[0]; // 800C0A38
L_800C0A3C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0A3C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0A40
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0A44
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0A48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0A3C; } // 800C0A4C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0A50
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0A54
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C0A58
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C0A5C
  c->lr=c->r[0]; // 800C0A60
  c->r[1]=c->r[1]+0x00000060u; // 800C0A64
  return; // 800C0A68
}

// fn_800C0A6C
void f_800C0A6C(Ctx* __restrict c) {
  trace_call(0x800C0A6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0A6C
  c->r[0]=c->lr; // 800C0A70
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C0A74
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C0A78
  c->r[31]=c->r[3]|c->r[3]; // 800C0A7C
  c->r[3]=c->r[1]+0x00000008u; // 800C0A80
  c->r[4]=R8(c->r[13]+0xFFFF95E4u); // 800C0A84
  c->lr=0x800C0A8Cu; f_800BDBB4(c); // 800C0A88
  c->r[0]=0u+0x00000007u; // 800C0A8C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C0A90
  c->r[4]=c->r[1]+0x00000004u; // 800C0A94
  c->ctr=c->r[0]; // 800C0A98
L_800C0A9C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0A9C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0AA0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0AA4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0AA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0A9C; } // 800C0AAC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0AB0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0AB4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C0AB8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C0ABC
  c->lr=c->r[0]; // 800C0AC0
  c->r[1]=c->r[1]+0x00000050u; // 800C0AC4
  return; // 800C0AC8
}

// fn_800C0ACC
void f_800C0ACC(Ctx* __restrict c) {
  trace_call(0x800C0ACCu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0ACC
  c->r[0]=c->lr; // 800C0AD0
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800C0AD4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800C0AD8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800C0ADC
  c->r[11]=c->r[1]+0x000000A0u; // 800C0AE0
  c->lr=0x800C0AE8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0AE4
  c->r[28]=c->r[3]|c->r[3]; // 800C0AE8
  c->r[3]=c->r[5]|c->r[5]; // 800C0AEC
  c->r[29]=c->r[6]|c->r[6]; // 800C0AF0
  c->lr=0x800C0AF8u; f_80068A78(c); // 800C0AF4
  c->r[0]=R8(c->r[13]+0xFFFF95E4u); // 800C0AF8
  c->r[30]=c->r[3]|c->r[3]; // 800C0AFC
  cmps(c,0,(int32_t)c->r[0],0); // 800C0B00
  if (crb(c,2)) { goto L_800C0BD0; } // 800C0B04
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0B08
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0B0C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C0B10
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800C0B14
  c->r[31]=R32(c->r[1]+0x00000084u); // 800C0B18
  c->lr=0x800C0B20u; f_800F39F4(c); // 800C0B1C
  c->r[4]=c->r[31]|c->r[31]; // 800C0B20
  c->lr=0x800C0B28u; f_80172380(c); // 800C0B24
  cmps(c,0,(int32_t)c->r[3],0); // 800C0B28
  if (!crb(c,2)) { goto L_800C0BD0; } // 800C0B2C
  {uint32_t ea=c->r[29]+0x000001A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0B30
  c->r[3]=c->r[30]|c->r[30]; // 800C0B34
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0B38
  {uint32_t ea=c->r[29]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0B3C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C0B40
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0B44
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C0B48
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800C0B4C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800C0B50
  c->r[30]=R32(c->r[1]+0x00000084u); // 800C0B54
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 800C0B58
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 800C0B5C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C0B60
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C0B64
  c->ctr=c->r[12]; // 800C0B68
  if (true) { c->lr=0x800C0B70u; dispatch(c,c->ctr); } // 800C0B6C
  c->r[4]=c->r[3]|c->r[3]; // 800C0B70
  c->r[3]=c->r[1]+0x00000014u; // 800C0B74
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C0B78
  c->r[5]=c->r[29]+0x000001E4u; // 800C0B7C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C0B80
  c->ctr=c->r[12]; // 800C0B84
  if (true) { c->lr=0x800C0B8Cu; dispatch(c,c->ctr); } // 800C0B88
  c->r[4]=c->r[1]+0x00000008u; // 800C0B8C
  c->r[3]=c->r[1]+0x00000014u; // 800C0B90
  c->r[5]=c->r[4]|c->r[4]; // 800C0B94
  c->lr=0x800C0B9Cu; f_802652E8(c); // 800C0B98
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0B9C
  c->lr=0x800C0BA4u; f_800F39F4(c); // 800C0BA0
  c->f[4]=c->f[31]; // 800C0BA4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0BA8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0BAC
  c->r[4]=c->r[31]|c->r[31]; // 800C0BB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0BB4
  c->r[5]=c->r[30]|c->r[30]; // 800C0BB8
  c->lr=0x800C0BC0u; f_8017204C(c); // 800C0BBC
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0BC0
  c->lr=0x800C0BC8u; f_800F39F4(c); // 800C0BC4
  c->r[4]=c->r[31]|c->r[31]; // 800C0BC8
  c->lr=0x800C0BD0u; f_801722E4(c); // 800C0BCC
L_800C0BD0:;
  c->r[3]=0u+0x00000000u; // 800C0BD0
  c->r[0]=0u+0x00000007u; // 800C0BD4
  W32(c->r[1]+0x00000044u,c->r[3]); // 800C0BD8
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C0BDC
  c->r[4]=c->r[1]+0x00000040u; // 800C0BE0
  c->ctr=c->r[0]; // 800C0BE4
L_800C0BE8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0BE8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0BEC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0BF0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0BF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0BE8; } // 800C0BF8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0BFC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0C00
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800C0C04
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800C0C08
  c->r[11]=c->r[1]+0x000000A0u; // 800C0C0C
  c->lr=0x800C0C14u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0C10
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800C0C14
  c->lr=c->r[0]; // 800C0C18
  c->r[1]=c->r[1]+0x000000B0u; // 800C0C1C
  return; // 800C0C20
}

// fn_800C0C24
void f_800C0C24(Ctx* __restrict c) {
  trace_call(0x800C0C24u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0C24
  c->r[0]=c->lr; // 800C0C28
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C0C2C
  c->r[11]=c->r[1]+0x000000A0u; // 800C0C30
  c->lr=0x800C0C38u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0C34
  c->r[28]=c->r[3]|c->r[3]; // 800C0C38
  c->r[3]=c->r[5]|c->r[5]; // 800C0C3C
  c->r[29]=c->r[6]|c->r[6]; // 800C0C40
  c->lr=0x800C0C48u; f_80068A78(c); // 800C0C44
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0C48
  c->r[30]=c->r[3]|c->r[3]; // 800C0C4C
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0C50
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C0C54
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800C0C58
  c->r[31]=R32(c->r[1]+0x00000084u); // 800C0C5C
  c->lr=0x800C0C64u; f_800F39F4(c); // 800C0C60
  c->r[4]=c->r[31]|c->r[31]; // 800C0C64
  c->lr=0x800C0C6Cu; f_80172380(c); // 800C0C68
  cmpu(c,0,c->r[3],0x00000001u); // 800C0C6C
  if (!crb(c,2)) { goto L_800C0CE8; } // 800C0C70
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0C74
  c->r[3]=c->r[30]|c->r[30]; // 800C0C78
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0C7C
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0C80
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800C0C84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C0C88
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 800C0C8C
  c->r[12]=R32(c->r[30]+0x00000010u); // 800C0C90
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C0C94
  c->ctr=c->r[12]; // 800C0C98
  if (true) { c->lr=0x800C0CA0u; dispatch(c,c->ctr); } // 800C0C9C
  c->r[4]=c->r[3]|c->r[3]; // 800C0CA0
  c->r[3]=c->r[1]+0x00000014u; // 800C0CA4
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C0CA8
  c->r[5]=c->r[29]+0x00000004u; // 800C0CAC
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C0CB0
  c->ctr=c->r[12]; // 800C0CB4
  if (true) { c->lr=0x800C0CBCu; dispatch(c,c->ctr); } // 800C0CB8
  c->r[4]=c->r[1]+0x00000008u; // 800C0CBC
  c->r[3]=c->r[1]+0x00000014u; // 800C0CC0
  c->r[5]=c->r[4]|c->r[4]; // 800C0CC4
  c->lr=0x800C0CCCu; f_802652E8(c); // 800C0CC8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0CCC
  c->lr=0x800C0CD4u; f_800F39F4(c); // 800C0CD0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0CD4
  c->r[4]=c->r[31]|c->r[31]; // 800C0CD8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0CDC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0CE0
  c->lr=0x800C0CE8u; f_80172158(c); // 800C0CE4
L_800C0CE8:;
  c->r[3]=0u+0x00000000u; // 800C0CE8
  c->r[0]=0u+0x00000007u; // 800C0CEC
  W32(c->r[1]+0x00000044u,c->r[3]); // 800C0CF0
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C0CF4
  c->r[4]=c->r[1]+0x00000040u; // 800C0CF8
  c->ctr=c->r[0]; // 800C0CFC
L_800C0D00:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0D00
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0D04
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0D08
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0D0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0D00; } // 800C0D10
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0D14
  c->r[11]=c->r[1]+0x000000A0u; // 800C0D18
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0D1C
  c->lr=0x800C0D24u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0D20
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C0D24
  c->lr=c->r[0]; // 800C0D28
  c->r[1]=c->r[1]+0x000000A0u; // 800C0D2C
  return; // 800C0D30
}

// fn_800C0D34
void f_800C0D34(Ctx* __restrict c) {
  trace_call(0x800C0D34u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0D34
  c->r[0]=c->lr; // 800C0D38
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C0D3C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C0D40
  c->r[31]=c->r[6]|c->r[6]; // 800C0D44
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C0D48
  c->r[30]=c->r[3]|c->r[3]; // 800C0D4C
  c->r[3]=c->r[5]|c->r[5]; // 800C0D50
  c->lr=0x800C0D58u; f_80068A78(c); // 800C0D54
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0D58
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0D5C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C0D60
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C0D64
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C0D68
  c->lr=0x800C0D70u; f_800F39F4(c); // 800C0D6C
  c->r[4]=c->r[31]|c->r[31]; // 800C0D70
  c->lr=0x800C0D78u; f_80172380(c); // 800C0D74
  cmpu(c,0,c->r[3],0x00000001u); // 800C0D78
  if (!crb(c,2)) { goto L_800C0D90; } // 800C0D7C
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0D80
  c->lr=0x800C0D88u; f_800F39F4(c); // 800C0D84
  c->r[4]=c->r[31]|c->r[31]; // 800C0D88
  c->lr=0x800C0D90u; f_8017229C(c); // 800C0D8C
L_800C0D90:;
  c->r[3]=0u+0x00000000u; // 800C0D90
  c->r[0]=0u+0x00000007u; // 800C0D94
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C0D98
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C0D9C
  c->r[4]=c->r[1]+0x00000004u; // 800C0DA0
  c->ctr=c->r[0]; // 800C0DA4
L_800C0DA8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0DA8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0DAC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0DB0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0DB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0DA8; } // 800C0DB8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0DBC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0DC0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C0DC4
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C0DC8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C0DCC
  c->lr=c->r[0]; // 800C0DD0
  c->r[1]=c->r[1]+0x00000060u; // 800C0DD4
  return; // 800C0DD8
}

// fn_800C0DDC
void f_800C0DDC(Ctx* __restrict c) {
  trace_call(0x800C0DDCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0DDC
  c->r[0]=c->lr; // 800C0DE0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C0DE4
  c->r[11]=c->r[1]+0x00000080u; // 800C0DE8
  c->lr=0x800C0DF0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0DEC
  c->r[28]=c->r[3]|c->r[3]; // 800C0DF0
  c->r[3]=c->r[5]|c->r[5]; // 800C0DF4
  c->r[29]=c->r[6]|c->r[6]; // 800C0DF8
  c->lr=0x800C0E00u; f_80068A78(c); // 800C0DFC
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0E00
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0E04
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C0E08
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800C0E0C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C0E10
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C0E14
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0E18
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C0E1C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800C0E20
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800C0E24
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C0E28
  {uint32_t ea=c->r[29]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0E2C
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0E30
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800C0E34
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C0E38
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[1]);} // 800C0E3C
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800C0E40
  c->r[31]=R32(c->r[1]+0x00000064u); // 800C0E44
  c->r[30]=R32(c->r[1]+0x0000006Cu); // 800C0E48
  c->lr=0x800C0E50u; f_800F39EC(c); // 800C0E4C
  c->r[4]=0u+0x803E0000u; // 800C0E50
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0E54
  c->r[4]=c->r[4]+0xFFFFAA30u; // 800C0E58
  {uint32_t ea=c->r[29]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0E5C
  c->r[6]=c->r[30]|c->r[30]; // 800C0E60
  c->r[7]=c->r[31]|c->r[31]; // 800C0E64
  c->r[4]=c->r[4]+0x00000008u; // 800C0E68
  c->r[5]=c->r[1]+0x00000008u; // 800C0E6C
  c->lr=0x800C0E74u; f_800DAD9C(c); // 800C0E70
  c->r[3]=0u+0x00000000u; // 800C0E74
  c->r[0]=0u+0x00000007u; // 800C0E78
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C0E7C
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C0E80
  c->r[4]=c->r[1]+0x0000000Cu; // 800C0E84
  c->ctr=c->r[0]; // 800C0E88
L_800C0E8C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0E8C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0E90
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0E94
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0E98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0E8C; } // 800C0E9C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0EA0
  c->r[11]=c->r[1]+0x00000080u; // 800C0EA4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0EA8
  c->lr=0x800C0EB0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0EAC
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C0EB0
  c->lr=c->r[0]; // 800C0EB4
  c->r[1]=c->r[1]+0x00000080u; // 800C0EB8
  return; // 800C0EBC
}

// fn_800C0EC0
void f_800C0EC0(Ctx* __restrict c) {
  trace_call(0x800C0EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0EC0
  c->r[0]=c->lr; // 800C0EC4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C0EC8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C0ECC
  c->r[31]=c->r[3]|c->r[3]; // 800C0ED0
  c->r[3]=c->r[5]|c->r[5]; // 800C0ED4
  c->lr=0x800C0EDCu; f_80068A78(c); // 800C0ED8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0EDC
  c->lr=0x800C0EE4u; f_800F39EC(c); // 800C0EE0
  c->lr=0x800C0EE8u; f_800DB6D4(c); // 800C0EE4
  c->r[0]=c->r[3]^0x80000000u; // 800C0EE8
  c->r[3]=0u+0x43300000u; // 800C0EEC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C0EF0
  c->r[6]=0u+0x00000001u; // 800C0EF4
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C0EF8
  c->r[0]=0u+0x00000007u; // 800C0EFC
  W32(c->r[1]+0x00000048u,c->r[3]); // 800C0F00
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C0F04
  c->r[4]=c->r[1]+0x00000004u; // 800C0F08
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C0F0C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C0F10
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C0F14
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C0F18
  c->ctr=c->r[0]; // 800C0F1C
L_800C0F20:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0F20
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0F24
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0F28
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0F2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0F20; } // 800C0F30
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0F34
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0F38
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C0F3C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C0F40
  c->lr=c->r[0]; // 800C0F44
  c->r[1]=c->r[1]+0x00000060u; // 800C0F48
  return; // 800C0F4C
}

// fn_800C0F50
void f_800C0F50(Ctx* __restrict c) {
  trace_call(0x800C0F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0F50
  c->r[0]=c->lr; // 800C0F54
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C0F58
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C0F5C
  c->r[31]=c->r[3]|c->r[3]; // 800C0F60
  c->r[3]=c->r[5]|c->r[5]; // 800C0F64
  c->lr=0x800C0F6Cu; f_80068A78(c); // 800C0F68
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C0F6C
  c->lr=0x800C0F74u; f_800F39EC(c); // 800C0F70
  c->lr=0x800C0F78u; f_800DB274(c); // 800C0F74
  c->r[3]=0u+0x00000000u; // 800C0F78
  c->r[0]=0u+0x00000007u; // 800C0F7C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C0F80
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C0F84
  c->r[4]=c->r[1]+0x00000004u; // 800C0F88
  c->ctr=c->r[0]; // 800C0F8C
L_800C0F90:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C0F90
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C0F94
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C0F98
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C0F9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C0F90; } // 800C0FA0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C0FA4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C0FA8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C0FAC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C0FB0
  c->lr=c->r[0]; // 800C0FB4
  c->r[1]=c->r[1]+0x00000050u; // 800C0FB8
  return; // 800C0FBC
}

// fn_800C0FC0
void f_800C0FC0(Ctx* __restrict c) {
  trace_call(0x800C0FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0FC0
  c->r[0]=c->lr; // 800C0FC4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C0FC8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C0FCC
  c->r[31]=c->r[6]|c->r[6]; // 800C0FD0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C0FD4
  c->r[30]=c->r[3]|c->r[3]; // 800C0FD8
  c->r[3]=c->r[5]|c->r[5]; // 800C0FDC
  c->lr=0x800C0FE4u; f_80068A78(c); // 800C0FE0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0FE4
  c->r[3]=c->r[31]+0x00000004u; // 800C0FE8
  c->lr=0x800C0FF0u; f_801138D4(c); // 800C0FEC
  c->r[3]=0u+0x00000000u; // 800C0FF0
  c->r[0]=0u+0x00000007u; // 800C0FF4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C0FF8
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C0FFC
  c->r[4]=c->r[1]+0x00000004u; // 800C1000
  c->ctr=c->r[0]; // 800C1004
L_800C1008:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1008
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C100C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1010
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1014
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1008; } // 800C1018
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C101C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1020
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C1024
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C1028
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C102C
  c->lr=c->r[0]; // 800C1030
  c->r[1]=c->r[1]+0x00000050u; // 800C1034
  return; // 800C1038
}

// fn_800C103C
void f_800C103C(Ctx* __restrict c) {
  trace_call(0x800C103Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C103C
  c->r[0]=c->lr; // 800C1040
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1044
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C1048
  c->r[31]=c->r[3]|c->r[3]; // 800C104C
  c->r[3]=c->r[5]|c->r[5]; // 800C1050
  c->lr=0x800C1058u; f_80068A78(c); // 800C1054
  c->lr=0x800C105Cu; f_80113948(c); // 800C1058
  c->r[3]=0u+0x00000000u; // 800C105C
  c->r[0]=0u+0x00000007u; // 800C1060
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C1064
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C1068
  c->r[4]=c->r[1]+0x00000004u; // 800C106C
  c->ctr=c->r[0]; // 800C1070
L_800C1074:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1074
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1078
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C107C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1080
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1074; } // 800C1084
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1088
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C108C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C1090
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C1094
  c->lr=c->r[0]; // 800C1098
  c->r[1]=c->r[1]+0x00000050u; // 800C109C
  return; // 800C10A0
}

// fn_800C10A4
void f_800C10A4(Ctx* __restrict c) {
  trace_call(0x800C10A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C10A4
  c->r[0]=c->lr; // 800C10A8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C10AC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C10B0
  c->r[31]=c->r[3]|c->r[3]; // 800C10B4
  c->r[3]=c->r[5]|c->r[5]; // 800C10B8
  c->lr=0x800C10C0u; f_80068A78(c); // 800C10BC
  c->lr=0x800C10C4u; f_8011397C(c); // 800C10C0
  c->r[3]=0u+0x00000000u; // 800C10C4
  c->r[0]=0u+0x00000007u; // 800C10C8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C10CC
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C10D0
  c->r[4]=c->r[1]+0x00000004u; // 800C10D4
  c->ctr=c->r[0]; // 800C10D8
L_800C10DC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C10DC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C10E0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C10E4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C10E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C10DC; } // 800C10EC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C10F0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C10F4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C10F8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C10FC
  c->lr=c->r[0]; // 800C1100
  c->r[1]=c->r[1]+0x00000050u; // 800C1104
  return; // 800C1108
}

// fn_800C110C
void f_800C110C(Ctx* __restrict c) {
  trace_call(0x800C110Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C110C
  c->r[0]=c->lr; // 800C1110
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C1114
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800C1118
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800C111C
  c->r[11]=c->r[1]+0x00000060u; // 800C1120
  c->lr=0x800C1128u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1124
  c->r[29]=c->r[3]|c->r[3]; // 800C1128
  c->r[3]=c->r[5]|c->r[5]; // 800C112C
  c->lr=0x800C1134u; f_80068A78(c); // 800C1130
  c->r[30]=0u+0x00000001u; // 800C1134
  c->lr=0x800C113Cu; f_80061A4C(c); // 800C1138
  c->r[31]=c->r[3]+0x000000ECu; // 800C113C
  c->r[3]=c->r[31]|c->r[31]; // 800C1140
  c->lr=0x800C1148u; f_8012CF94(c); // 800C1144
  c->f[31]=c->f[1]; // 800C1148
  c->r[3]=c->r[31]|c->r[31]; // 800C114C
  c->lr=0x800C1154u; f_8012CF9C(c); // 800C1150
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1154
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C1158
  fcmp(c,0,c->f[31],c->f[0]); // 800C115C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C1160
  if (!crb(c,2)) { goto L_800C116C; } // 800C1164
  c->r[30]=0u+0x00000000u; // 800C1168
L_800C116C:;
  c->r[4]=c->r[30]|c->r[30]; // 800C116C
  c->r[3]=c->r[1]+0x00000008u; // 800C1170
  c->lr=0x800C1178u; f_800BDBB4(c); // 800C1174
  c->r[0]=0u+0x00000007u; // 800C1178
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C117C
  c->r[4]=c->r[1]+0x00000004u; // 800C1180
  c->ctr=c->r[0]; // 800C1184
L_800C1188:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1188
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C118C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1190
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1194
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1188; } // 800C1198
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C119C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C11A0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800C11A4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800C11A8
  c->r[11]=c->r[1]+0x00000060u; // 800C11AC
  c->lr=0x800C11B4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C11B0
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C11B4
  c->lr=c->r[0]; // 800C11B8
  c->r[1]=c->r[1]+0x00000070u; // 800C11BC
  return; // 800C11C0
}

// fn_800C11C4
void f_800C11C4(Ctx* __restrict c) {
  trace_call(0x800C11C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C11C4
  c->r[0]=c->lr; // 800C11C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C11CC
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C11D0
  c->r[29]=c->r[3]|c->r[3]; // 800C11D4
  c->lr=0x800C11DCu; f_80061A4C(c); // 800C11D8
  c->r[31]=c->r[3]+0x000000ECu; // 800C11DC
  c->r[30]=0u+0x00000000u; // 800C11E0
  c->r[3]=c->r[31]|c->r[31]; // 800C11E4
  c->lr=0x800C11ECu; f_8012CF88(c); // 800C11E8
  cmps(c,0,(int32_t)c->r[3],1); // 800C11EC
  if (!crb(c,2)) { goto L_800C1208; } // 800C11F0
  c->r[3]=c->r[31]|c->r[31]; // 800C11F4
  c->lr=0x800C11FCu; f_8012D21C(c); // 800C11F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C11FC
  if (!crb(c,2)) { goto L_800C1208; } // 800C1200
  c->r[30]=0u+0x00000001u; // 800C1204
L_800C1208:;
  c->lr=0x800C120Cu; f_80061A4C(c); // 800C1208
  c->lr=0x800C1210u; f_80062ABC(c); // 800C120C
  cmps(c,0,(int32_t)c->r[3],5); // 800C1210
  if (!crb(c,2)) { goto L_800C122C; } // 800C1214
  c->lr=0x800C121Cu; f_80061A4C(c); // 800C1218
  c->lr=0x800C1220u; f_8006399C(c); // 800C121C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1220
  if (crb(c,2)) { goto L_800C122C; } // 800C1224
  c->r[30]=0u+0x00000001u; // 800C1228
L_800C122C:;
  c->r[4]=c->r[30]|c->r[30]; // 800C122C
  c->r[3]=c->r[1]+0x00000008u; // 800C1230
  c->lr=0x800C1238u; f_800BDBB4(c); // 800C1234
  c->r[0]=0u+0x00000007u; // 800C1238
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C123C
  c->r[4]=c->r[1]+0x00000004u; // 800C1240
  c->ctr=c->r[0]; // 800C1244
L_800C1248:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1248
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C124C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1250
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1254
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1248; } // 800C1258
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C125C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1260
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C1264
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C1268
  c->lr=c->r[0]; // 800C126C
  c->r[1]=c->r[1]+0x00000060u; // 800C1270
  return; // 800C1274
}

// fn_800C1278
void f_800C1278(Ctx* __restrict c) {
  trace_call(0x800C1278u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1278
  c->r[0]=c->lr; // 800C127C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1280
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C1284
  c->r[31]=c->r[3]|c->r[3]; // 800C1288
  c->r[3]=c->r[5]|c->r[5]; // 800C128C
  c->lr=0x800C1294u; f_80068A78(c); // 800C1290
  c->r[4]=c->r[3]|c->r[3]; // 800C1294
  c->r[3]=c->r[1]+0x00000008u; // 800C1298
  c->r[4]=R32(c->r[4]+0x000004A8u); // 800C129C
  c->lr=0x800C12A4u; f_800C12E4(c); // 800C12A0
  c->r[0]=0u+0x00000007u; // 800C12A4
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C12A8
  c->r[4]=c->r[1]+0x00000004u; // 800C12AC
  c->ctr=c->r[0]; // 800C12B0
L_800C12B4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C12B4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C12B8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C12BC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C12C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C12B4; } // 800C12C4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C12C8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C12CC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C12D0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C12D4
  c->lr=c->r[0]; // 800C12D8
  c->r[1]=c->r[1]+0x00000050u; // 800C12DC
  return; // 800C12E0
}

// fn_800C12E4
void f_800C12E4(Ctx* __restrict c) {
  trace_call(0x800C12E4u);
  c->r[5]=0u+0x00000002u; // 800C12E4
  c->r[0]=0u+0x00000038u; // 800C12E8
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C12EC
  c->r[6]=0u+0x00000000u; // 800C12F0
  c->ctr=c->r[0]; // 800C12F4
L_800C12F8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C12F8
  c->r[5]=c->r[3]+c->r[6]; // 800C12FC
  c->r[6]=c->r[6]+0x00000001u; // 800C1300
  c->r[4]=c->r[4]+0x00000001u; // 800C1304
  W8(c->r[5]+0x00000004u,c->r[0]); // 800C1308
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C12F8; } // 800C130C
  return; // 800C1310
}

// fn_800C1314
void f_800C1314(Ctx* __restrict c) {
  trace_call(0x800C1314u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1314
  c->r[0]=c->lr; // 800C1318
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C131C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C1320
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C1324
  c->r[30]=c->r[3]|c->r[3]; // 800C1328
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C132C
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800C1330
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C1334
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C1338
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C133C
  c->lr=0x800C1344u; f_800F39E4(c); // 800C1340
  c->r[4]=c->r[31]|c->r[31]; // 800C1344
  c->lr=0x800C134Cu; f_801D5AF0(c); // 800C1348
  c->r[4]=c->r[3]|c->r[3]; // 800C134C
  c->r[3]=c->r[1]+0x00000008u; // 800C1350
  c->lr=0x800C1358u; f_800C12E4(c); // 800C1354
  c->r[0]=0u+0x00000007u; // 800C1358
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C135C
  c->r[4]=c->r[1]+0x00000004u; // 800C1360
  c->ctr=c->r[0]; // 800C1364
L_800C1368:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1368
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C136C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1370
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1374
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1368; } // 800C1378
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C137C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1380
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C1384
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C1388
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C138C
  c->lr=c->r[0]; // 800C1390
  c->r[1]=c->r[1]+0x00000060u; // 800C1394
  return; // 800C1398
}

// fn_800C139C
void f_800C139C(Ctx* __restrict c) {
  trace_call(0x800C139Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C139C
  c->r[0]=c->lr; // 800C13A0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C13A4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C13A8
  c->r[31]=c->r[3]|c->r[3]; // 800C13AC
  c->r[3]=c->r[5]|c->r[5]; // 800C13B0
  c->lr=0x800C13B8u; f_80068A78(c); // 800C13B4
  c->lr=0x800C13BCu; f_80061A4C(c); // 800C13B8
  c->r[3]=c->r[3]+0x000000ECu; // 800C13BC
  c->lr=0x800C13C4u; f_8012CF94(c); // 800C13C0
  c->r[3]=0u+0x00000001u; // 800C13C4
  c->r[0]=0u+0x00000007u; // 800C13C8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C13CC
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C13D0
  c->r[4]=c->r[1]+0x00000004u; // 800C13D4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C13D8
  c->ctr=c->r[0]; // 800C13DC
L_800C13E0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C13E0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C13E4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C13E8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C13EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C13E0; } // 800C13F0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C13F4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C13F8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C13FC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C1400
  c->lr=c->r[0]; // 800C1404
  c->r[1]=c->r[1]+0x00000050u; // 800C1408
  return; // 800C140C
}

// fn_800C1410
void f_800C1410(Ctx* __restrict c) {
  trace_call(0x800C1410u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1410
  c->r[0]=c->lr; // 800C1414
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1418
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C141C
  c->r[31]=c->r[6]|c->r[6]; // 800C1420
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C1424
  c->r[30]=c->r[3]|c->r[3]; // 800C1428
  c->r[3]=c->r[5]|c->r[5]; // 800C142C
  c->lr=0x800C1434u; f_80068A78(c); // 800C1430
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1434
  c->lr=0x800C143Cu; f_801139BC(c); // 800C1438
  c->r[3]=0u+0x00000000u; // 800C143C
  c->r[0]=0u+0x00000007u; // 800C1440
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C1444
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C1448
  c->r[4]=c->r[1]+0x00000004u; // 800C144C
  c->ctr=c->r[0]; // 800C1450
L_800C1454:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1454
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1458
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C145C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1460
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1454; } // 800C1464
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1468
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C146C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C1470
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C1474
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C1478
  c->lr=c->r[0]; // 800C147C
  c->r[1]=c->r[1]+0x00000050u; // 800C1480
  return; // 800C1484
}

// fn_800C1488
void f_800C1488(Ctx* __restrict c) {
  trace_call(0x800C1488u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1488
  c->r[0]=c->lr; // 800C148C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C1490
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C1494
  c->r[31]=c->r[6]|c->r[6]; // 800C1498
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C149C
  c->r[30]=c->r[3]|c->r[3]; // 800C14A0
  c->r[3]=c->r[5]|c->r[5]; // 800C14A4
  c->lr=0x800C14ACu; f_80068A78(c); // 800C14A8
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C14AC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C14B0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C14B4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C14B8
  cmps(c,0,(int32_t)c->r[0],0); // 800C14BC
  if (!crb(c,0)) { goto L_800C14C8; } // 800C14C0
  c->r[0]=R32(c->r[3]+0x000004C0u); // 800C14C4
L_800C14C8:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C14C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C14CC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800C14D0
  c->r[4]=R32(c->r[1]+0x00000054u); // 800C14D4
  cmps(c,0,(int32_t)c->r[4],0); // 800C14D8
  if (!crb(c,2)) { goto L_800C14E4; } // 800C14DC
  c->r[4]=0u+0x00000001u; // 800C14E0
L_800C14E4:;
  c->r[3]=0u+0x43300000u; // 800C14E4
  c->r[4]=c->r[4]^0x80000000u; // 800C14E8
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800C14EC
  c->r[0]=c->r[0]^0x80000000u; // 800C14F0
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[2]=RF64(ea);} // 800C14F4
  W32(c->r[1]+0x00000058u,c->r[3]); // 800C14F8
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C14FC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 800C1500
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C1504
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800C1508
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C150C
  W32(c->r[1]+0x00000060u,c->r[3]); // 800C1510
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[5]=c->ps1[5]=RF32(ea);} // 800C1514
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 800C1518
  {uint32_t ea=c->r[31]+0x00000130u; c->f[6]=c->ps1[6]=RF32(ea);} // 800C151C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 800C1520
  {uint32_t ea=c->r[31]+0x0000016Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 800C1524
  {uint32_t ea=c->r[31]+0x000001A8u; c->f[8]=c->ps1[8]=RF32(ea);} // 800C1528
  c->lr=0x800C1530u; f_80113A10(c); // 800C152C
  c->r[3]=0u+0x00000000u; // 800C1530
  c->r[0]=0u+0x00000007u; // 800C1534
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C1538
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C153C
  c->r[4]=c->r[1]+0x00000004u; // 800C1540
  c->ctr=c->r[0]; // 800C1544
L_800C1548:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1548
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C154C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1550
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1554
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1548; } // 800C1558
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C155C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1560
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C1564
  c->r[30]=R32(c->r[1]+0x00000068u); // 800C1568
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C156C
  c->lr=c->r[0]; // 800C1570
  c->r[1]=c->r[1]+0x00000070u; // 800C1574
  return; // 800C1578
}

// fn_800C157C
void f_800C157C(Ctx* __restrict c) {
  trace_call(0x800C157Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C157C
  c->r[0]=c->lr; // 800C1580
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1584
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C1588
  c->r[31]=c->r[6]|c->r[6]; // 800C158C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C1590
  c->r[30]=c->r[3]|c->r[3]; // 800C1594
  c->r[3]=c->r[5]|c->r[5]; // 800C1598
  c->lr=0x800C15A0u; f_80068A78(c); // 800C159C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C15A0
  c->lr=0x800C15A8u; f_80113B14(c); // 800C15A4
  c->r[3]=0u+0x00000000u; // 800C15A8
  c->r[0]=0u+0x00000007u; // 800C15AC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C15B0
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C15B4
  c->r[4]=c->r[1]+0x00000004u; // 800C15B8
  c->ctr=c->r[0]; // 800C15BC
L_800C15C0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C15C0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C15C4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C15C8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C15CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C15C0; } // 800C15D0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C15D4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C15D8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C15DC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C15E0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C15E4
  c->lr=c->r[0]; // 800C15E8
  c->r[1]=c->r[1]+0x00000050u; // 800C15EC
  return; // 800C15F0
}

// fn_800C15F4
void f_800C15F4(Ctx* __restrict c) {
  trace_call(0x800C15F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C15F4
  c->r[0]=c->lr; // 800C15F8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C15FC
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C1600
  c->r[28]=c->r[3]|c->r[3]; // 800C1604
  c->r[3]=c->r[5]|c->r[5]; // 800C1608
  c->r[29]=c->r[6]|c->r[6]; // 800C160C
  c->lr=0x800C1614u; f_80068A78(c); // 800C1610
  c->r[31]=0u+0x80490000u; // 800C1614
  c->r[30]=c->r[3]|c->r[3]; // 800C1618
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C161C
  c->r[4]=c->r[29]+0x00000004u; // 800C1620
  c->r[5]=0u+0x00000000u; // 800C1624
  c->lr=0x800C162Cu; f_8010453C(c); // 800C1628
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C162C
  c->lr=0x800C1634u; f_80102CC4(c); // 800C1630
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C1634
  c->r[4]=c->r[29]+0x00000004u; // 800C1638
  c->lr=0x800C1640u; f_80103094(c); // 800C163C
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C1640
  c->r[4]=c->r[29]+0x00000004u; // 800C1644
  c->lr=0x800C164Cu; f_80103094(c); // 800C1648
  c->r[4]=c->r[3]|c->r[3]; // 800C164C
  c->r[3]=c->r[30]|c->r[30]; // 800C1650
  c->r[4]=R32(c->r[4]+0x00000010u); // 800C1654
  c->lr=0x800C165Cu; f_800CECD0(c); // 800C1658
  c->r[3]=0u+0x00000000u; // 800C165C
  c->r[0]=0u+0x00000007u; // 800C1660
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C1664
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C1668
  c->r[4]=c->r[1]+0x00000004u; // 800C166C
  c->ctr=c->r[0]; // 800C1670
L_800C1674:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1674
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1678
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C167C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1680
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1674; } // 800C1684
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1688
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C168C
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C1690
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C1694
  c->lr=c->r[0]; // 800C1698
  c->r[1]=c->r[1]+0x00000060u; // 800C169C
  return; // 800C16A0
}

// fn_800C16A4
void f_800C16A4(Ctx* __restrict c) {
  trace_call(0x800C16A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C16A4
  c->r[0]=c->lr; // 800C16A8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800C16AC
  {uint32_t ea=c->r[1]+0x000000C4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C16B0
  c->r[29]=c->r[3]|c->r[3]; // 800C16B4
  c->r[3]=c->r[5]|c->r[5]; // 800C16B8
  c->r[30]=c->r[6]|c->r[6]; // 800C16BC
  c->lr=0x800C16C4u; f_80068A78(c); // 800C16C0
  c->r[31]=c->r[3]|c->r[3]; // 800C16C4
  c->r[3]=c->r[1]+0x00000048u; // 800C16C8
  c->r[4]=R32(c->r[31]+0x00000888u); // 800C16CC
  c->lr=0x800C16D4u; f_801328F8(c); // 800C16D0
  c->r[3]=c->r[1]+0x00000048u; // 800C16D4
  c->r[4]=c->r[30]+0x00000004u; // 800C16D8
  c->r[5]=c->r[1]+0x00000008u; // 800C16DC
  c->r[6]=0u+0x00000000u; // 800C16E0
  c->lr=0x800C16E8u; f_801329F0(c); // 800C16E4
  c->r[4]=R32(c->r[1]+0x00000008u); // 800C16E8
  c->r[3]=c->r[31]|c->r[31]; // 800C16EC
  c->lr=0x800C16F4u; f_800AD6B4(c); // 800C16F0
  c->r[3]=0u+0x00000000u; // 800C16F4
  c->r[0]=0u+0x00000007u; // 800C16F8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C16FC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C1700
  c->r[4]=c->r[1]+0x00000008u; // 800C1704
  c->ctr=c->r[0]; // 800C1708
L_800C170C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C170C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1710
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1714
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1718
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C170C; } // 800C171C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1720
  c->r[3]=c->r[1]+0x00000048u; // 800C1724
  c->r[4]=0u+0xFFFFFFFFu; // 800C1728
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C172C
  c->lr=0x800C1734u; f_80132958(c); // 800C1730
  {uint32_t ea=c->r[1]+0x000000C4u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C1734
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800C1738
  c->lr=c->r[0]; // 800C173C
  c->r[1]=c->r[1]+0x000000D0u; // 800C1740
  return; // 800C1744
}

// fn_800C1748
void f_800C1748(Ctx* __restrict c) {
  trace_call(0x800C1748u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1748
  c->r[0]=c->lr; // 800C174C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C1750
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C1754
  c->r[31]=c->r[6]|c->r[6]; // 800C1758
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C175C
  c->r[30]=c->r[3]|c->r[3]; // 800C1760
  c->r[3]=c->r[5]|c->r[5]; // 800C1764
  c->lr=0x800C176Cu; f_80068A78(c); // 800C1768
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C176C
  c->r[6]=0u+0x00000000u; // 800C1770
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1774
  c->r[0]=0u+0x00000007u; // 800C1778
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800C177C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C1780
  c->r[4]=c->r[1]+0x00000004u; // 800C1784
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[1]);} // 800C1788
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800C178C
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800C1790
  c->r[3]=c->r[3]+c->r[7]; // 800C1794
  {uint32_t ea=c->r[3]+0x0000086Cu; WF32(ea,c->f[0]);} // 800C1798
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C179C
  c->ctr=c->r[0]; // 800C17A0
L_800C17A4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C17A4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C17A8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C17AC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C17B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C17A4; } // 800C17B4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C17B8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C17BC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C17C0
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C17C4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C17C8
  c->lr=c->r[0]; // 800C17CC
  c->r[1]=c->r[1]+0x00000060u; // 800C17D0
  return; // 800C17D4
}

// fn_800C17D8
void f_800C17D8(Ctx* __restrict c) {
  trace_call(0x800C17D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C17D8
  c->r[0]=c->lr; // 800C17DC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C17E0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C17E4
  c->r[31]=c->r[6]|c->r[6]; // 800C17E8
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C17EC
  c->r[30]=c->r[3]|c->r[3]; // 800C17F0
  c->r[3]=c->r[5]|c->r[5]; // 800C17F4
  c->lr=0x800C17FCu; f_80068A78(c); // 800C17F8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C17FC
  c->r[6]=0u+0x00000001u; // 800C1800
  c->r[0]=0u+0x00000007u; // 800C1804
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C1808
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C180C
  c->r[4]=c->r[1]+0x00000004u; // 800C1810
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C1814
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800C1818
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800C181C
  c->r[3]=c->r[3]+c->r[7]; // 800C1820
  {uint32_t ea=c->r[3]+0x0000086Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1824
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C1828
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C182C
  c->ctr=c->r[0]; // 800C1830
L_800C1834:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1834
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1838
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C183C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1840
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1834; } // 800C1844
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1848
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C184C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C1850
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C1854
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C1858
  c->lr=c->r[0]; // 800C185C
  c->r[1]=c->r[1]+0x00000060u; // 800C1860
  return; // 800C1864
}

// fn_800C1868
void f_800C1868(Ctx* __restrict c) {
  trace_call(0x800C1868u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1868
  c->r[0]=c->lr; // 800C186C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C1870
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C1874
  c->r[31]=c->r[6]|c->r[6]; // 800C1878
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C187C
  c->r[30]=c->r[3]|c->r[3]; // 800C1880
  c->r[3]=c->r[5]|c->r[5]; // 800C1884
  c->lr=0x800C188Cu; f_80068A78(c); // 800C1888
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C188C
  c->r[6]=0u+0x00000000u; // 800C1890
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1894
  c->r[0]=0u+0x00000007u; // 800C1898
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800C189C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C18A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C18A4
  c->r[4]=c->r[1]+0x00000004u; // 800C18A8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[1]);} // 800C18AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800C18B0
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800C18B4
  c->r[8]=R32(c->r[1]+0x00000054u); // 800C18B8
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800C18BC
  c->r[3]=c->r[3]+c->r[7]; // 800C18C0
  W32(c->r[3]+0x0000084Cu,c->r[8]); // 800C18C4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C18C8
  c->ctr=c->r[0]; // 800C18CC
L_800C18D0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C18D0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C18D4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C18D8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C18DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C18D0; } // 800C18E0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C18E4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C18E8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C18EC
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C18F0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C18F4
  c->lr=c->r[0]; // 800C18F8
  c->r[1]=c->r[1]+0x00000060u; // 800C18FC
  return; // 800C1900
}

// fn_800C1904
void f_800C1904(Ctx* __restrict c) {
  trace_call(0x800C1904u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1904
  c->r[0]=c->lr; // 800C1908
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C190C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C1910
  c->r[31]=c->r[6]|c->r[6]; // 800C1914
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C1918
  c->r[30]=c->r[3]|c->r[3]; // 800C191C
  c->r[3]=c->r[5]|c->r[5]; // 800C1920
  c->lr=0x800C1928u; f_80068A78(c); // 800C1924
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1928
  c->r[0]=0u+0x00000001u; // 800C192C
  c->r[4]=0u+0x43300000u; // 800C1930
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C1934
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C1938
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C193C
  c->r[0]=0u+0x00000007u; // 800C1940
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C1944
  W32(c->r[1]+0x00000050u,c->r[4]); // 800C1948
  c->r[4]=c->r[1]+0x00000004u; // 800C194C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C1950
  c->r[6]=R32(c->r[1]+0x0000004Cu); // 800C1954
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800C1958
  c->r[3]=c->r[3]+c->r[6]; // 800C195C
  c->r[3]=R32(c->r[3]+0x0000084Cu); // 800C1960
  c->r[3]=c->r[3]^0x80000000u; // 800C1964
  W32(c->r[1]+0x00000054u,c->r[3]); // 800C1968
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800C196C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C1970
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C1974
  c->ctr=c->r[0]; // 800C1978
L_800C197C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C197C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1980
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1984
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1988
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C197C; } // 800C198C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1990
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1994
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C1998
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C199C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C19A0
  c->lr=c->r[0]; // 800C19A4
  c->r[1]=c->r[1]+0x00000060u; // 800C19A8
  return; // 800C19AC
}

// fn_800C19B0
void f_800C19B0(Ctx* __restrict c) {
  trace_call(0x800C19B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C19B0
  c->r[0]=c->lr; // 800C19B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C19B8
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C19BC
  c->r[30]=c->r[3]|c->r[3]; // 800C19C0
  c->r[3]=c->r[5]|c->r[5]; // 800C19C4
  c->lr=0x800C19CCu; f_80068A78(c); // 800C19C8
  c->r[31]=c->r[3]|c->r[3]; // 800C19CC
  c->r[4]=0u+0x00000012u; // 800C19D0
  c->lr=0x800C19D8u; f_800760EC(c); // 800C19D4
  cmps(c,0,(int32_t)c->r[3],0); // 800C19D8
  if (crb(c,2)) { goto L_800C19F4; } // 800C19DC
  c->r[4]=R32(c->r[31]+0x00000050u); // 800C19E0
  c->r[3]=c->r[1]+0x00000008u; // 800C19E4
  c->r[4]=R32(c->r[4]+0x00000034u); // 800C19E8
  c->lr=0x800C19F0u; f_800C12E4(c); // 800C19EC
  goto L_800C1A08; // 800C19F0
L_800C19F4:;
  c->r[4]=0u+0x803E0000u; // 800C19F4
  c->r[3]=c->r[1]+0x00000008u; // 800C19F8
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C19FC
  c->r[4]=c->r[4]+0x00000006u; // 800C1A00
  c->lr=0x800C1A08u; f_800C12E4(c); // 800C1A04
L_800C1A08:;
  c->r[0]=0u+0x00000007u; // 800C1A08
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C1A0C
  c->r[4]=c->r[1]+0x00000004u; // 800C1A10
  c->ctr=c->r[0]; // 800C1A14
L_800C1A18:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1A18
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1A1C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1A20
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1A24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1A18; } // 800C1A28
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1A2C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1A30
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C1A34
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C1A38
  c->lr=c->r[0]; // 800C1A3C
  c->r[1]=c->r[1]+0x00000050u; // 800C1A40
  return; // 800C1A44
}

// fn_800C1A48
void f_800C1A48(Ctx* __restrict c) {
  trace_call(0x800C1A48u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1A48
  c->r[0]=c->lr; // 800C1A4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1A50
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C1A54
  c->r[31]=c->r[3]|c->r[3]; // 800C1A58
  c->r[3]=c->r[5]|c->r[5]; // 800C1A5C
  c->lr=0x800C1A64u; f_80068A78(c); // 800C1A60
  {uint32_t ea=c->r[3]+0x00000870u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1A64
  c->r[3]=0u+0x00000001u; // 800C1A68
  c->r[0]=0u+0x00000007u; // 800C1A6C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C1A70
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C1A74
  c->r[4]=c->r[1]+0x00000004u; // 800C1A78
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C1A7C
  c->ctr=c->r[0]; // 800C1A80
L_800C1A84:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1A84
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1A88
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1A8C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1A90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1A84; } // 800C1A94
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1A98
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1A9C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C1AA0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C1AA4
  c->lr=c->r[0]; // 800C1AA8
  c->r[1]=c->r[1]+0x00000050u; // 800C1AAC
  return; // 800C1AB0
}

// fn_800C1AB4
void f_800C1AB4(Ctx* __restrict c) {
  trace_call(0x800C1AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1AB4
  c->r[0]=c->lr; // 800C1AB8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C1ABC
  c->r[11]=c->r[1]+0x000000A0u; // 800C1AC0
  c->lr=0x800C1AC8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1AC4
  c->r[29]=c->r[3]|c->r[3]; // 800C1AC8
  c->r[3]=c->r[5]|c->r[5]; // 800C1ACC
  c->r[30]=c->r[6]|c->r[6]; // 800C1AD0
  c->lr=0x800C1AD8u; f_80068A78(c); // 800C1AD4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C1AD8
  c->r[31]=c->r[3]|c->r[3]; // 800C1ADC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C1AE0
  c->ctr=c->r[12]; // 800C1AE4
  if (true) { c->lr=0x800C1AECu; dispatch(c,c->ctr); } // 800C1AE8
  c->r[4]=c->r[3]|c->r[3]; // 800C1AEC
  c->r[3]=c->r[1]+0x00000020u; // 800C1AF0
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C1AF4
  c->r[5]=c->r[30]+0x00000004u; // 800C1AF8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C1AFC
  c->ctr=c->r[12]; // 800C1B00
  if (true) { c->lr=0x800C1B08u; dispatch(c,c->ctr); } // 800C1B04
  c->r[3]=c->r[1]+0x00000014u; // 800C1B08
  c->r[4]=c->r[1]+0x00000020u; // 800C1B0C
  c->lr=0x800C1B14u; f_80032FD8(c); // 800C1B10
  c->r[0]=R8(c->r[30]+0x00000040u); // 800C1B14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C1B18
  if (crb(c,2)) { goto L_800C1B54; } // 800C1B1C
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1B20
  c->r[3]=c->r[31]+0x00000800u; // 800C1B24
  c->r[6]=R32(c->r[1]+0x00000014u); // 800C1B28
  c->r[4]=c->r[30]+0x00000040u; // 800C1B2C
  c->r[7]=R32(c->r[1]+0x00000018u); // 800C1B30
  c->f[2]=c->f[1]; // 800C1B34
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800C1B38
  c->r[5]=c->r[1]+0x00000008u; // 800C1B3C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C1B40
  c->r[6]=0u+0x00000001u; // 800C1B44
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800C1B48
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C1B4C
  c->lr=0x800C1B54u; f_800C1BA0(c); // 800C1B50
L_800C1B54:;
  c->r[3]=0u+0x00000000u; // 800C1B54
  c->r[0]=0u+0x00000007u; // 800C1B58
  W32(c->r[1]+0x00000050u,c->r[3]); // 800C1B5C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C1B60
  c->r[4]=c->r[1]+0x0000004Cu; // 800C1B64
  c->ctr=c->r[0]; // 800C1B68
L_800C1B6C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1B6C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1B70
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1B74
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1B78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1B6C; } // 800C1B7C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1B80
  c->r[11]=c->r[1]+0x000000A0u; // 800C1B84
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1B88
  c->lr=0x800C1B90u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1B8C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C1B90
  c->lr=c->r[0]; // 800C1B94
  c->r[1]=c->r[1]+0x000000A0u; // 800C1B98
  return; // 800C1B9C
}

// fn_800C1BA0
void f_800C1BA0(Ctx* __restrict c) {
  trace_call(0x800C1BA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1BA0
  c->r[0]=c->lr; // 800C1BA4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C1BA8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800C1BAC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800C1BB0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800C1BB4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800C1BB8
  c->r[11]=c->r[1]+0x00000030u; // 800C1BBC
  c->lr=0x800C1BC4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1BC0
  c->f[30]=c->f[1]; // 800C1BC4
  cmpu(c,0,c->r[6],0x00000001u); // 800C1BC8
  c->f[31]=c->f[2]; // 800C1BCC
  c->r[28]=c->r[3]|c->r[3]; // 800C1BD0
  c->r[29]=c->r[4]|c->r[4]; // 800C1BD4
  c->r[30]=c->r[5]|c->r[5]; // 800C1BD8
  if (!crb(c,2)) { goto L_800C1C28; } // 800C1BDC
  c->r[3]=R32(c->r[5]+0x00000000u); // 800C1BE0
  c->f[1]=c->f[31]; // 800C1BE4
  c->r[6]=R32(c->r[5]+0x00000004u); // 800C1BE8
  c->f[2]=c->f[30]; // 800C1BEC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C1BF0
  c->r[31]=0u+0x80460000u; // 800C1BF4
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C1BF8
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 800C1BFC
  c->r[5]=c->r[1]+0x00000014u; // 800C1C00
  W32(c->r[1]+0x00000018u,c->r[6]); // 800C1C04
  c->r[6]=0u+0xFFFFFFFFu; // 800C1C08
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C1C0C
  c->lr=0x800C1C14u; f_8004AD54(c); // 800C1C10
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1C14
  c->r[4]=c->r[3]|c->r[3]; // 800C1C18
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 800C1C1C
  c->lr=0x800C1C24u; f_8004B4F8(c); // 800C1C20
  goto L_800C1CD0; // 800C1C24
L_800C1C28:;
  c->lr=0x800C1C2Cu; f_800C1CF8(c); // 800C1C28
  cmps(c,0,(int32_t)c->r[3],-1); // 800C1C2C
  c->r[31]=c->r[3]|c->r[3]; // 800C1C30
  if (crb(c,2)) { goto L_800C1CD0; } // 800C1C34
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 800C1C38
  if (crb(c,2)) { goto L_800C1C5C; } // 800C1C3C
  c->r[0]=rotl(c->r[31],0)&0xFFFFFEFFu; // 800C1C40
  c->r[3]=0u+0x80460000u; // 800C1C44
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C1C48
  c->r[5]=0u+0x00000000u; // 800C1C4C
  c->r[4]=R32(c->r[28]+c->r[0]); // 800C1C50
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 800C1C54
  c->lr=0x800C1C5Cu; f_8004AF30(c); // 800C1C58
L_800C1C5C:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C1C5C
  c->r[0]=rotl(c->r[31],0)&0xFFFFFEFFu; // 800C1C60
  c->r[3]=R32(c->r[30]+0x00000004u); // 800C1C64
  c->f[1]=c->f[31]; // 800C1C68
  c->r[6]=R32(c->r[30]+0x00000008u); // 800C1C6C
  c->f[2]=c->f[30]; // 800C1C70
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C1C74
  c->r[30]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C1C78
  c->r[31]=0u+0x80460000u; // 800C1C7C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C1C80
  c->r[4]=c->r[29]|c->r[29]; // 800C1C84
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 800C1C88
  c->r[5]=c->r[1]+0x00000008u; // 800C1C8C
  W32(c->r[1]+0x00000010u,c->r[6]); // 800C1C90
  c->r[6]=R32(c->r[28]+c->r[30]); // 800C1C94
  c->lr=0x800C1C9Cu; f_8004AD54(c); // 800C1C98
  cmps(c,0,(int32_t)c->r[3],0); // 800C1C9C
  W32(c->r[28]+c->r[30],c->r[3]); // 800C1CA0
  if (!crb(c,2)) { goto L_800C1CB4; } // 800C1CA4
  c->r[0]=0u+0xFFFFFFFFu; // 800C1CA8
  W32(c->r[28]+c->r[30],c->r[0]); // 800C1CAC
  goto L_800C1CD0; // 800C1CB0
L_800C1CB4:;
  c->r[3]=c->r[28]+c->r[30]; // 800C1CB4
  c->r[0]=0u+0x00000000u; // 800C1CB8
  W8(c->r[3]+0x00000004u,c->r[0]); // 800C1CBC
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 800C1CC0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1CC4
  c->r[4]=R32(c->r[28]+c->r[30]); // 800C1CC8
  c->lr=0x800C1CD0u; f_8004B4F8(c); // 800C1CCC
L_800C1CD0:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800C1CD0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800C1CD4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 800C1CD8
  c->r[11]=c->r[1]+0x00000030u; // 800C1CDC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800C1CE0
  c->lr=0x800C1CE8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1CE4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C1CE8
  c->lr=c->r[0]; // 800C1CEC
  c->r[1]=c->r[1]+0x00000050u; // 800C1CF0
  return; // 800C1CF4
}

// fn_800C1CF8
void f_800C1CF8(Ctx* __restrict c) {
  trace_call(0x800C1CF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1CF8
  c->r[0]=c->lr; // 800C1CFC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C1D00
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C1D04
  c->r[28]=0u+0x80460000u; // 800C1D08
  c->r[23]=c->r[3]|c->r[3]; // 800C1D0C
  c->r[3]=c->r[28]+0xFFFFD4F0u; // 800C1D10
  c->r[3]=c->r[3]+0x00001574u; // 800C1D14
  c->lr=0x800C1D1Cu; f_803A6794(c); // 800C1D18
  c->r[25]=0u+0x00000000u; // 800C1D1C
  c->r[27]=c->r[3]|c->r[3]; // 800C1D20
  c->r[29]=c->r[25]|c->r[25]; // 800C1D24
  c->r[24]=0u+0xFFFFFFFFu; // 800C1D28
  c->r[31]=0u+0x00000000u; // 800C1D2C
  c->r[30]=0u+0xFFFFFFFFu; // 800C1D30
L_800C1D34:;
  c->r[4]=R32(c->r[23]+c->r[31]); // 800C1D34
  c->r[26]=c->r[23]+c->r[31]; // 800C1D38
  cmps(c,0,(int32_t)c->r[4],-1); // 800C1D3C
  if (crb(c,2)) { goto L_800C1D7C; } // 800C1D40
  c->r[3]=c->r[28]+0xFFFFD4F0u; // 800C1D44
  c->lr=0x800C1D4Cu; f_8004B650(c); // 800C1D48
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 800C1D4C
  if (!crb(c,2)) { goto L_800C1D5C; } // 800C1D50
  c->r[24]=c->r[25]+0x00000100u; // 800C1D54
  goto L_800C1D98; // 800C1D58
L_800C1D5C:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800C1D5C
  if (!crb(c,2)) { goto L_800C1D88; } // 800C1D60
  cmps(c,0,(int32_t)c->r[24],-1); // 800C1D64
  if (!crb(c,2)) { goto L_800C1D88; } // 800C1D68
  W8(c->r[26]+0x00000004u,c->r[29]); // 800C1D6C
  c->r[24]=c->r[25]|c->r[25]; // 800C1D70
  W32(c->r[26]+0x00000000u,c->r[30]); // 800C1D74
  goto L_800C1D88; // 800C1D78
L_800C1D7C:;
  cmps(c,0,(int32_t)c->r[24],-1); // 800C1D7C
  if (!crb(c,2)) { goto L_800C1D88; } // 800C1D80
  c->r[24]=c->r[25]|c->r[25]; // 800C1D84
L_800C1D88:;
  c->r[25]=c->r[25]+0x00000001u; // 800C1D88
  c->r[31]=c->r[31]+0x00000008u; // 800C1D8C
  cmps(c,0,(int32_t)c->r[25],4); // 800C1D90
  if (crb(c,0)) { IRQCHK(c); goto L_800C1D34; } // 800C1D94
L_800C1D98:;
  c->r[3]=c->r[24]|c->r[24]; // 800C1D98
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C1D9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C1DA0
  c->lr=c->r[0]; // 800C1DA4
  c->r[1]=c->r[1]+0x00000030u; // 800C1DA8
  return; // 800C1DAC
}

// fn_800C1DB0
void f_800C1DB0(Ctx* __restrict c) {
  trace_call(0x800C1DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1DB0
  c->r[0]=c->lr; // 800C1DB4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C1DB8
  c->r[11]=c->r[1]+0x00000070u; // 800C1DBC
  c->lr=0x800C1DC4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1DC0
  c->r[26]=c->r[3]|c->r[3]; // 800C1DC4
  c->r[3]=c->r[5]|c->r[5]; // 800C1DC8
  c->r[27]=c->r[6]|c->r[6]; // 800C1DCC
  c->lr=0x800C1DD4u; f_80068A78(c); // 800C1DD0
  c->r[29]=c->r[3]|c->r[3]; // 800C1DD4
  c->r[3]=c->r[3]+0x00000800u; // 800C1DD8
  c->r[4]=c->r[27]+0x00000004u; // 800C1DDC
  c->lr=0x800C1DE4u; f_800C1CF8(c); // 800C1DE0
  cmps(c,0,(int32_t)c->r[3],-1); // 800C1DE4
  if (crb(c,2)) { goto L_800C1E64; } // 800C1DE8
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 800C1DEC
  if (!crb(c,2)) { goto L_800C1E64; } // 800C1DF0
  c->r[4]=R32(c->r[29]+0x00000820u); // 800C1DF4
  c->r[28]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800C1DF8
  c->r[0]=R32(c->r[29]+0x00000824u); // 800C1DFC
  c->r[31]=0u+0x80460000u; // 800C1E00
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1E04
  c->r[30]=c->r[29]+c->r[28]; // 800C1E08
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C1E0C
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 800C1E10
  c->f[2]=c->f[1]; // 800C1E14
  c->r[4]=c->r[27]+0x00000004u; // 800C1E18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C1E1C
  c->r[5]=c->r[1]+0x00000008u; // 800C1E20
  c->r[0]=R32(c->r[29]+0x00000828u); // 800C1E24
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C1E28
  c->r[6]=R32(c->r[30]+0x00000800u); // 800C1E2C
  c->lr=0x800C1E34u; f_8004AD54(c); // 800C1E30
  cmps(c,0,(int32_t)c->r[3],0); // 800C1E34
  W32(c->r[30]+0x00000800u,c->r[3]); // 800C1E38
  if (!crb(c,2)) { goto L_800C1E4C; } // 800C1E3C
  c->r[0]=0u+0xFFFFFFFFu; // 800C1E40
  W32(c->r[30]+0x00000800u,c->r[0]); // 800C1E44
  goto L_800C1E64; // 800C1E48
L_800C1E4C:;
  c->r[0]=0u+0x00000001u; // 800C1E4C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1E50
  W8(c->r[30]+0x00000804u,c->r[0]); // 800C1E54
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 800C1E58
  c->r[4]=R32(c->r[30]+0x00000800u); // 800C1E5C
  c->lr=0x800C1E64u; f_8004B4F8(c); // 800C1E60
L_800C1E64:;
  c->r[3]=0u+0x00000000u; // 800C1E64
  c->r[0]=0u+0x00000007u; // 800C1E68
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C1E6C
  c->r[5]=c->r[26]+0xFFFFFFFCu; // 800C1E70
  c->r[4]=c->r[1]+0x00000010u; // 800C1E74
  c->ctr=c->r[0]; // 800C1E78
L_800C1E7C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1E7C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1E80
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1E84
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1E88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1E7C; } // 800C1E8C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C1E90
  c->r[11]=c->r[1]+0x00000070u; // 800C1E94
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C1E98
  c->lr=0x800C1EA0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C1E9C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C1EA0
  c->lr=c->r[0]; // 800C1EA4
  c->r[1]=c->r[1]+0x00000070u; // 800C1EA8
  return; // 800C1EAC
}

// fn_800C1EB0
void f_800C1EB0(Ctx* __restrict c) {
  trace_call(0x800C1EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1EB0
  c->r[0]=c->lr; // 800C1EB4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C1EB8
  c->r[11]=c->r[1]+0x000000A0u; // 800C1EBC
  c->lr=0x800C1EC4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C1EC0
  c->r[0]=c->r[6]+0x00000004u; // 800C1EC4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1EC8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C1ECC
  c->r[30]=c->r[3]|c->r[3]; // 800C1ED0
  {uint32_t ea=c->r[6]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C1ED4
  fcmp(c,0,c->f[1],c->f[0]); // 800C1ED8
  if (crb(c,2)) { goto L_800C1EEC; } // 800C1EDC
  c->r[0]=0u+0x00000001u; // 800C1EE0
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C1EE4
  goto L_800C1EF4; // 800C1EE8
L_800C1EEC:;
  c->r[0]=0u+0x00000000u; // 800C1EEC
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C1EF0
L_800C1EF4:;
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1EF4
  c->r[0]=0u+0x00000003u; // 800C1EF8
  c->r[4]=0u+0x00000000u; // 800C1EFC
  c->r[3]=0u+0x000001E0u; // 800C1F00
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800C1F04
  {uint32_t ea=c->r[6]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F08
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800C1F0C
  {uint32_t ea=c->r[6]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F10
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800C1F14
  {uint32_t ea=c->r[6]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F18
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800C1F1C
  {uint32_t ea=c->r[6]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F20
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800C1F24
  {uint32_t ea=c->r[6]+0x000001A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F28
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800C1F2C
  c->ctr=c->r[0]; // 800C1F30
L_800C1F34:;
  c->r[7]=c->r[6]+c->r[3]; // 800C1F34
  c->r[8]=c->r[1]+0x0000004Cu; // 800C1F38
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F3C
  c->r[8]=c->r[8]+c->r[4]; // 800C1F40
  c->r[3]=c->r[3]+0x00000078u; // 800C1F44
  c->r[4]=c->r[4]+0x00000008u; // 800C1F48
  {uint32_t ea=c->r[8]+0x00000020u; WF32(ea,c->f[0]);} // 800C1F4C
  {uint32_t ea=c->r[7]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1F50
  {uint32_t ea=c->r[8]+0x00000024u; WF32(ea,c->f[0]);} // 800C1F54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1F34; } // 800C1F58
  c->r[3]=c->r[5]|c->r[5]; // 800C1F5C
  c->lr=0x800C1F64u; f_80068A78(c); // 800C1F60
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C1F64
  c->r[31]=c->r[3]|c->r[3]; // 800C1F68
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C1F6C
  c->ctr=c->r[12]; // 800C1F70
  if (true) { c->lr=0x800C1F78u; dispatch(c,c->ctr); } // 800C1F74
  c->r[0]=R32(c->r[31]+0x00000ED8u); // 800C1F78
  c->r[4]=c->r[1]+0x00000060u; // 800C1F7C
  c->r[28]=R32(c->r[3]+0x00000008u); // 800C1F80
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 800C1F84
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C1F88
  c->r[29]=c->r[31]+c->r[3]; // 800C1F8C
  W32(c->r[29]+0x00000CA8u,c->r[0]); // 800C1F90
  c->r[3]=c->r[29]+0x00000CBCu; // 800C1F94
  c->r[0]=R32(c->r[1]+0x00000050u); // 800C1F98
  W32(c->r[29]+0x00000CACu,c->r[0]); // 800C1F9C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1FA0
  {uint32_t ea=c->r[29]+0x00000CB0u; WF32(ea,c->f[0]);} // 800C1FA4
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1FA8
  {uint32_t ea=c->r[29]+0x00000CB4u; WF32(ea,c->f[0]);} // 800C1FAC
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C1FB0
  {uint32_t ea=c->r[29]+0x00000CB8u; WF32(ea,c->f[0]);} // 800C1FB4
  c->lr=0x800C1FBCu; f_8003F468(c); // 800C1FB8
  c->r[0]=0u+0x00000003u; // 800C1FBC
  c->r[5]=c->r[29]+0x00000CC4u; // 800C1FC0
  c->r[4]=c->r[1]+0x00000068u; // 800C1FC4
  c->ctr=c->r[0]; // 800C1FC8
L_800C1FCC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C1FCC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C1FD0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C1FD4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C1FD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C1FCC; } // 800C1FDC
  c->r[0]=R32(c->r[28]+0x000000E8u); // 800C1FE0
  c->r[3]=c->r[1]+0x0000000Cu; // 800C1FE4
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800C1FE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C1FEC
  c->lr=0x800C1FF4u; f_80365B94(c); // 800C1FF0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C1FF4
  c->r[3]=c->r[1]+0x00000008u; // 800C1FF8
  c->lr=0x800C2000u; f_800772D8(c); // 800C1FFC
  c->r[4]=R32(c->r[31]+0x00000ED8u); // 800C2000
  c->r[6]=0u+0x00000000u; // 800C2004
  c->r[0]=0u+0x00000007u; // 800C2008
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C200C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)56); // 800C2010
  c->r[4]=c->r[1]+0x0000000Cu; // 800C2014
  c->r[7]=c->r[31]+c->r[7]; // 800C2018
  W32(c->r[7]+0x00000CA8u,c->r[3]); // 800C201C
  c->r[3]=R32(c->r[31]+0x00000ED8u); // 800C2020
  c->r[3]=c->r[3]+0x00000001u; // 800C2024
  W32(c->r[31]+0x00000ED8u,c->r[3]); // 800C2028
  W32(c->r[1]+0x00000010u,c->r[6]); // 800C202C
  c->ctr=c->r[0]; // 800C2030
L_800C2034:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2034
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2038
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C203C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2040
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2034; } // 800C2044
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2048
  c->r[11]=c->r[1]+0x000000A0u; // 800C204C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2050
  c->lr=0x800C2058u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2054
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C2058
  c->lr=c->r[0]; // 800C205C
  c->r[1]=c->r[1]+0x000000A0u; // 800C2060
  return; // 800C2064
}

// fn_800C2068
void f_800C2068(Ctx* __restrict c) {
  trace_call(0x800C2068u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2068
  c->r[0]=c->lr; // 800C206C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C2070
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2074
  c->r[29]=c->r[3]|c->r[3]; // 800C2078
  c->r[3]=c->r[5]|c->r[5]; // 800C207C
  c->r[30]=c->r[6]|c->r[6]; // 800C2080
  c->lr=0x800C2088u; f_80068A78(c); // 800C2084
  c->r[31]=c->r[3]|c->r[3]; // 800C2088
  c->r[3]=c->r[3]+0x000008D0u; // 800C208C
  c->lr=0x800C2094u; f_80030FBC(c); // 800C2090
  cmps(c,0,(int32_t)c->r[3],0); // 800C2094
  if (crb(c,2)) { goto L_800C20CC; } // 800C2098
  c->r[3]=c->r[30]|c->r[30]; // 800C209C
  c->lr=0x800C20A4u; f_800797C0(c); // 800C20A0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C20A4
  c->r[3]=c->r[31]+0x000008D0u; // 800C20A8
  c->r[0]=cntlz(c->r[0]); // 800C20AC
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C20B0
  c->lr=0x800C20B8u; f_80030FBC(c); // 800C20B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C20B8
  c->r[4]=c->r[31]|c->r[31]; // 800C20BC
  c->r[12]=R32(c->r[12]+0x00000054u); // 800C20C0
  c->ctr=c->r[12]; // 800C20C4
  if (true) { c->lr=0x800C20CCu; dispatch(c,c->ctr); } // 800C20C8
L_800C20CC:;
  c->r[3]=0u+0x00000000u; // 800C20CC
  c->r[0]=0u+0x00000007u; // 800C20D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C20D4
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C20D8
  c->r[4]=c->r[1]+0x00000004u; // 800C20DC
  c->ctr=c->r[0]; // 800C20E0
L_800C20E4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C20E4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C20E8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C20EC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C20F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C20E4; } // 800C20F4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C20F8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C20FC
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2100
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C2104
  c->lr=c->r[0]; // 800C2108
  c->r[1]=c->r[1]+0x00000060u; // 800C210C
  return; // 800C2110
}

// fn_800C2114
void f_800C2114(Ctx* __restrict c) {
  trace_call(0x800C2114u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2114
  c->r[0]=c->lr; // 800C2118
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C211C
  c->r[11]=c->r[1]+0x00000060u; // 800C2120
  c->lr=0x800C2128u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2124
  c->r[29]=c->r[3]|c->r[3]; // 800C2128
  c->r[3]=c->r[5]|c->r[5]; // 800C212C
  c->r[30]=c->r[6]|c->r[6]; // 800C2130
  c->lr=0x800C2138u; f_80068A78(c); // 800C2134
  c->r[31]=c->r[3]|c->r[3]; // 800C2138
  c->r[3]=c->r[3]+0x000008D0u; // 800C213C
  c->lr=0x800C2144u; f_80030FC4(c); // 800C2140
  cmps(c,0,(int32_t)c->r[3],0); // 800C2144
  if (crb(c,2)) { goto L_800C21D0; } // 800C2148
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C214C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C2150
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C2154
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C2158
  cmps(c,0,(int32_t)c->r[0],7); // 800C215C
  if (crb(c,2)) { goto L_800C21A4; } // 800C2160
  if (!crb(c,0)) { goto L_800C21D0; } // 800C2164
  cmps(c,0,(int32_t)c->r[0],6); // 800C2168
  if (!crb(c,0)) { goto L_800C2174; } // 800C216C
  goto L_800C21D0; // 800C2170
L_800C2174:;
  c->r[3]=c->r[30]+0x0000003Cu; // 800C2174
  c->lr=0x800C217Cu; f_800797C0(c); // 800C2178
  cmps(c,0,(int32_t)c->r[3],0); // 800C217C
  if (crb(c,2)) { goto L_800C21D0; } // 800C2180
  c->r[3]=c->r[31]+0x000008D0u; // 800C2184
  c->lr=0x800C218Cu; f_80030FC4(c); // 800C2188
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C218C
  c->r[4]=0u+0x00000004u; // 800C2190
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C2194
  c->ctr=c->r[12]; // 800C2198
  if (true) { c->lr=0x800C21A0u; dispatch(c,c->ctr); } // 800C219C
  goto L_800C21D0; // 800C21A0
L_800C21A4:;
  c->r[3]=c->r[30]+0x0000003Cu; // 800C21A4
  c->lr=0x800C21ACu; f_800797C0(c); // 800C21A8
  cmps(c,0,(int32_t)c->r[3],0); // 800C21AC
  if (crb(c,2)) { goto L_800C21D0; } // 800C21B0
  c->r[3]=c->r[31]+0x000008D0u; // 800C21B4
  c->lr=0x800C21BCu; f_80030FC4(c); // 800C21B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C21BC
  c->r[4]=0u+0x00000003u; // 800C21C0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C21C4
  c->ctr=c->r[12]; // 800C21C8
  if (true) { c->lr=0x800C21D0u; dispatch(c,c->ctr); } // 800C21CC
L_800C21D0:;
  c->r[3]=0u+0x00000000u; // 800C21D0
  c->r[0]=0u+0x00000007u; // 800C21D4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C21D8
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C21DC
  c->r[4]=c->r[1]+0x00000004u; // 800C21E0
  c->ctr=c->r[0]; // 800C21E4
L_800C21E8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C21E8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C21EC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C21F0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C21F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C21E8; } // 800C21F8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C21FC
  c->r[11]=c->r[1]+0x00000060u; // 800C2200
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2204
  c->lr=0x800C220Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2208
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C220C
  c->lr=c->r[0]; // 800C2210
  c->r[1]=c->r[1]+0x00000060u; // 800C2214
  return; // 800C2218
}

// fn_800C221C
void f_800C221C(Ctx* __restrict c) {
  trace_call(0x800C221Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C221C
  c->r[0]=c->lr; // 800C2220
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C2224
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2228
  c->r[29]=c->r[3]|c->r[3]; // 800C222C
  c->r[3]=c->r[5]|c->r[5]; // 800C2230
  c->r[30]=c->r[6]|c->r[6]; // 800C2234
  c->lr=0x800C223Cu; f_80068A78(c); // 800C2238
  c->r[31]=c->r[3]|c->r[3]; // 800C223C
  c->r[3]=c->r[3]+0x000008D0u; // 800C2240
  c->lr=0x800C2248u; f_80030FBC(c); // 800C2244
  cmps(c,0,(int32_t)c->r[3],0); // 800C2248
  if (crb(c,2)) { goto L_800C2294; } // 800C224C
  c->r[3]=c->r[30]|c->r[30]; // 800C2250
  c->lr=0x800C2258u; f_800797C0(c); // 800C2254
  cmps(c,0,(int32_t)c->r[3],1); // 800C2258
  if (!crb(c,2)) { goto L_800C227C; } // 800C225C
  c->r[3]=c->r[31]+0x000008D0u; // 800C2260
  c->lr=0x800C2268u; f_80030FBC(c); // 800C2264
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2268
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C226C
  c->ctr=c->r[12]; // 800C2270
  if (true) { c->lr=0x800C2278u; dispatch(c,c->ctr); } // 800C2274
  goto L_800C2294; // 800C2278
L_800C227C:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C227C
  c->lr=0x800C2284u; f_80030FBC(c); // 800C2280
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2284
  c->r[12]=R32(c->r[12]+0x00000018u); // 800C2288
  c->ctr=c->r[12]; // 800C228C
  if (true) { c->lr=0x800C2294u; dispatch(c,c->ctr); } // 800C2290
L_800C2294:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C2294
  c->lr=0x800C229Cu; f_80030FC4(c); // 800C2298
  cmps(c,0,(int32_t)c->r[3],0); // 800C229C
  if (crb(c,2)) { goto L_800C22E8; } // 800C22A0
  c->r[3]=c->r[30]|c->r[30]; // 800C22A4
  c->lr=0x800C22ACu; f_800797C0(c); // 800C22A8
  cmps(c,0,(int32_t)c->r[3],1); // 800C22AC
  if (!crb(c,2)) { goto L_800C22D0; } // 800C22B0
  c->r[3]=c->r[31]+0x000008D0u; // 800C22B4
  c->lr=0x800C22BCu; f_80030FC4(c); // 800C22B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C22BC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800C22C0
  c->ctr=c->r[12]; // 800C22C4
  if (true) { c->lr=0x800C22CCu; dispatch(c,c->ctr); } // 800C22C8
  goto L_800C22E8; // 800C22CC
L_800C22D0:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C22D0
  c->lr=0x800C22D8u; f_80030FC4(c); // 800C22D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C22D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800C22DC
  c->ctr=c->r[12]; // 800C22E0
  if (true) { c->lr=0x800C22E8u; dispatch(c,c->ctr); } // 800C22E4
L_800C22E8:;
  c->r[3]=0u+0x00000000u; // 800C22E8
  c->r[0]=0u+0x00000007u; // 800C22EC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C22F0
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C22F4
  c->r[4]=c->r[1]+0x00000004u; // 800C22F8
  c->ctr=c->r[0]; // 800C22FC
L_800C2300:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2300
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2304
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2308
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C230C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2300; } // 800C2310
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2314
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2318
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C231C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C2320
  c->lr=c->r[0]; // 800C2324
  c->r[1]=c->r[1]+0x00000060u; // 800C2328
  return; // 800C232C
}

// fn_800C2330
void f_800C2330(Ctx* __restrict c) {
  trace_call(0x800C2330u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2330
  c->r[0]=c->lr; // 800C2334
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C2338
  c->r[11]=c->r[1]+0x00000060u; // 800C233C
  c->lr=0x800C2344u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2340
  c->r[29]=c->r[3]|c->r[3]; // 800C2344
  c->r[3]=c->r[5]|c->r[5]; // 800C2348
  c->r[30]=c->r[6]|c->r[6]; // 800C234C
  c->lr=0x800C2354u; f_80068A78(c); // 800C2350
  c->r[31]=c->r[3]|c->r[3]; // 800C2354
  c->r[3]=c->r[30]|c->r[30]; // 800C2358
  c->lr=0x800C2360u; f_800ACC48(c); // 800C235C
  cmps(c,0,(int32_t)c->r[3],0); // 800C2360
  if (crb(c,2)) { goto L_800C2584; } // 800C2364
  c->r[0]=R8(c->r[30]+0x00000004u); // 800C2368
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C236C
  cmps(c,0,(int32_t)c->r[0],99); // 800C2370
  if (crb(c,2)) { goto L_800C2440; } // 800C2374
  if (!crb(c,0)) { goto L_800C2388; } // 800C2378
  cmps(c,0,(int32_t)c->r[0],67); // 800C237C
  if (crb(c,2)) { goto L_800C24E8; } // 800C2380
  goto L_800C2584; // 800C2384
L_800C2388:;
  cmps(c,0,(int32_t)c->r[0],104); // 800C2388
  if (crb(c,2)) { goto L_800C2394; } // 800C238C
  goto L_800C2584; // 800C2390
L_800C2394:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C2394
  c->lr=0x800C239Cu; f_80030FBC(c); // 800C2398
  cmps(c,0,(int32_t)c->r[3],0); // 800C239C
  if (crb(c,2)) { goto L_800C23E8; } // 800C23A0
  c->r[3]=c->r[30]+0x0000003Cu; // 800C23A4
  c->lr=0x800C23ACu; f_800797C0(c); // 800C23A8
  cmps(c,0,(int32_t)c->r[3],1); // 800C23AC
  if (!crb(c,2)) { goto L_800C23D0; } // 800C23B0
  c->r[3]=c->r[31]+0x000008D0u; // 800C23B4
  c->lr=0x800C23BCu; f_80030FBC(c); // 800C23B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C23BC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C23C0
  c->ctr=c->r[12]; // 800C23C4
  if (true) { c->lr=0x800C23CCu; dispatch(c,c->ctr); } // 800C23C8
  goto L_800C23E8; // 800C23CC
L_800C23D0:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C23D0
  c->lr=0x800C23D8u; f_80030FBC(c); // 800C23D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C23D8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800C23DC
  c->ctr=c->r[12]; // 800C23E0
  if (true) { c->lr=0x800C23E8u; dispatch(c,c->ctr); } // 800C23E4
L_800C23E8:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C23E8
  c->lr=0x800C23F0u; f_80030FC4(c); // 800C23EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C23F0
  if (crb(c,2)) { goto L_800C2584; } // 800C23F4
  c->r[3]=c->r[30]+0x0000003Cu; // 800C23F8
  c->lr=0x800C2400u; f_800797C0(c); // 800C23FC
  cmps(c,0,(int32_t)c->r[3],1); // 800C2400
  if (!crb(c,2)) { goto L_800C2424; } // 800C2404
  c->r[3]=c->r[31]+0x000008D0u; // 800C2408
  c->lr=0x800C2410u; f_80030FC4(c); // 800C240C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2410
  c->r[12]=R32(c->r[12]+0x00000018u); // 800C2414
  c->ctr=c->r[12]; // 800C2418
  if (true) { c->lr=0x800C2420u; dispatch(c,c->ctr); } // 800C241C
  goto L_800C2584; // 800C2420
L_800C2424:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C2424
  c->lr=0x800C242Cu; f_80030FC4(c); // 800C2428
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C242C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800C2430
  c->ctr=c->r[12]; // 800C2434
  if (true) { c->lr=0x800C243Cu; dispatch(c,c->ctr); } // 800C2438
  goto L_800C2584; // 800C243C
L_800C2440:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C2440
  c->lr=0x800C2448u; f_80030FBC(c); // 800C2444
  cmps(c,0,(int32_t)c->r[3],0); // 800C2448
  if (crb(c,2)) { goto L_800C2494; } // 800C244C
  c->r[3]=c->r[30]+0x0000003Cu; // 800C2450
  c->lr=0x800C2458u; f_800797C0(c); // 800C2454
  cmps(c,0,(int32_t)c->r[3],1); // 800C2458
  if (!crb(c,2)) { goto L_800C247C; } // 800C245C
  c->r[3]=c->r[31]+0x000008D0u; // 800C2460
  c->lr=0x800C2468u; f_80030FBC(c); // 800C2464
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2468
  c->r[12]=R32(c->r[12]+0x00000020u); // 800C246C
  c->ctr=c->r[12]; // 800C2470
  if (true) { c->lr=0x800C2478u; dispatch(c,c->ctr); } // 800C2474
  goto L_800C2494; // 800C2478
L_800C247C:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C247C
  c->lr=0x800C2484u; f_80030FBC(c); // 800C2480
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2484
  c->r[12]=R32(c->r[12]+0x00000018u); // 800C2488
  c->ctr=c->r[12]; // 800C248C
  if (true) { c->lr=0x800C2494u; dispatch(c,c->ctr); } // 800C2490
L_800C2494:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C2494
  c->lr=0x800C249Cu; f_80030FC4(c); // 800C2498
  cmps(c,0,(int32_t)c->r[3],0); // 800C249C
  if (crb(c,2)) { goto L_800C24E8; } // 800C24A0
  c->r[3]=c->r[30]+0x0000003Cu; // 800C24A4
  c->lr=0x800C24ACu; f_800797C0(c); // 800C24A8
  cmps(c,0,(int32_t)c->r[3],1); // 800C24AC
  if (!crb(c,2)) { goto L_800C24D0; } // 800C24B0
  c->r[3]=c->r[31]+0x000008D0u; // 800C24B4
  c->lr=0x800C24BCu; f_80030FC4(c); // 800C24B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C24BC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C24C0
  c->ctr=c->r[12]; // 800C24C4
  if (true) { c->lr=0x800C24CCu; dispatch(c,c->ctr); } // 800C24C8
  goto L_800C24E8; // 800C24CC
L_800C24D0:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C24D0
  c->lr=0x800C24D8u; f_80030FC4(c); // 800C24D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C24D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800C24DC
  c->ctr=c->r[12]; // 800C24E0
  if (true) { c->lr=0x800C24E8u; dispatch(c,c->ctr); } // 800C24E4
L_800C24E8:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C24E8
  c->lr=0x800C24F0u; f_80030FBC(c); // 800C24EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C24F0
  if (crb(c,2)) { goto L_800C257C; } // 800C24F4
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C24F8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C24FC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C2500
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C2504
  cmps(c,0,(int32_t)c->r[0],1); // 800C2508
  if (crb(c,2)) { goto L_800C2548; } // 800C250C
  if (!crb(c,0)) { goto L_800C2520; } // 800C2510
  cmps(c,0,(int32_t)c->r[0],0); // 800C2514
  if (!crb(c,0)) { goto L_800C252C; } // 800C2518
  goto L_800C257C; // 800C251C
L_800C2520:;
  cmps(c,0,(int32_t)c->r[0],3); // 800C2520
  if (!crb(c,0)) { goto L_800C257C; } // 800C2524
  goto L_800C2564; // 800C2528
L_800C252C:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C252C
  c->lr=0x800C2534u; f_80030FBC(c); // 800C2530
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2534
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C2538
  c->ctr=c->r[12]; // 800C253C
  if (true) { c->lr=0x800C2544u; dispatch(c,c->ctr); } // 800C2540
  goto L_800C257C; // 800C2544
L_800C2548:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C2548
  c->lr=0x800C2550u; f_80030FBC(c); // 800C254C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2550
  c->r[12]=R32(c->r[12]+0x00000024u); // 800C2554
  c->ctr=c->r[12]; // 800C2558
  if (true) { c->lr=0x800C2560u; dispatch(c,c->ctr); } // 800C255C
  goto L_800C257C; // 800C2560
L_800C2564:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C2564
  c->lr=0x800C256Cu; f_80030FBC(c); // 800C2568
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C256C
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C2570
  c->ctr=c->r[12]; // 800C2574
  if (true) { c->lr=0x800C257Cu; dispatch(c,c->ctr); } // 800C2578
L_800C257C:;
  c->r[3]=c->r[31]+0x000008D0u; // 800C257C
  c->lr=0x800C2584u; f_80030FC4(c); // 800C2580
L_800C2584:;
  c->r[3]=0u+0x00000000u; // 800C2584
  c->r[0]=0u+0x00000007u; // 800C2588
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C258C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C2590
  c->r[4]=c->r[1]+0x00000004u; // 800C2594
  c->ctr=c->r[0]; // 800C2598
L_800C259C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C259C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C25A0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C25A4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C25A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C259C; } // 800C25AC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C25B0
  c->r[11]=c->r[1]+0x00000060u; // 800C25B4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C25B8
  c->lr=0x800C25C0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C25BC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C25C0
  c->lr=c->r[0]; // 800C25C4
  c->r[1]=c->r[1]+0x00000060u; // 800C25C8
  return; // 800C25CC
}

// fn_800C25D0
void f_800C25D0(Ctx* __restrict c) {
  trace_call(0x800C25D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C25D0
  c->r[0]=c->lr; // 800C25D4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C25D8
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C25DC
  c->r[29]=c->r[3]|c->r[3]; // 800C25E0
  c->r[3]=c->r[5]|c->r[5]; // 800C25E4
  c->r[30]=c->r[6]|c->r[6]; // 800C25E8
  c->lr=0x800C25F0u; f_80068A78(c); // 800C25EC
  c->r[31]=c->r[3]|c->r[3]; // 800C25F0
  c->r[3]=c->r[30]|c->r[30]; // 800C25F4
  c->lr=0x800C25FCu; f_800797C0(c); // 800C25F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C25FC
  c->r[3]=c->r[31]+0x00000394u; // 800C2600
  c->r[0]=cntlz(c->r[0]); // 800C2604
  c->r[4]=0u+0x00000003u; // 800C2608
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C260C
  c->lr=0x800C2614u; f_800B16D0(c); // 800C2610
  c->r[3]=0u+0x00000000u; // 800C2614
  c->r[0]=0u+0x00000007u; // 800C2618
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C261C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C2620
  c->r[4]=c->r[1]+0x00000004u; // 800C2624
  c->ctr=c->r[0]; // 800C2628
L_800C262C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C262C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2630
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2634
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2638
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C262C; } // 800C263C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2640
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2644
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2648
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C264C
  c->lr=c->r[0]; // 800C2650
  c->r[1]=c->r[1]+0x00000060u; // 800C2654
  return; // 800C2658
}

// fn_800C265C
void f_800C265C(Ctx* __restrict c) {
  trace_call(0x800C265Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C265C
  c->r[0]=c->lr; // 800C2660
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C2664
  c->r[11]=c->r[1]+0x00000060u; // 800C2668
  c->lr=0x800C2670u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C266C
  c->r[29]=c->r[3]|c->r[3]; // 800C2670
  c->r[3]=c->r[5]|c->r[5]; // 800C2674
  c->r[30]=c->r[6]|c->r[6]; // 800C2678
  c->lr=0x800C2680u; f_80068A78(c); // 800C267C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2680
  c->r[31]=c->r[3]|c->r[3]; // 800C2684
  c->r[3]=c->r[30]+0x0000003Cu; // 800C2688
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C268C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C2690
  c->r[30]=R32(c->r[1]+0x0000004Cu); // 800C2694
  c->lr=0x800C269Cu; f_800797C0(c); // 800C2698
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C269C
  c->r[4]=c->r[30]|c->r[30]; // 800C26A0
  c->r[0]=cntlz(c->r[0]); // 800C26A4
  c->r[3]=c->r[31]+0x00000394u; // 800C26A8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C26AC
  c->lr=0x800C26B4u; f_800B16D0(c); // 800C26B0
  c->r[3]=0u+0x00000000u; // 800C26B4
  c->r[0]=0u+0x00000007u; // 800C26B8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C26BC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C26C0
  c->r[4]=c->r[1]+0x00000004u; // 800C26C4
  c->ctr=c->r[0]; // 800C26C8
L_800C26CC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C26CC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C26D0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C26D4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C26D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C26CC; } // 800C26DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C26E0
  c->r[11]=c->r[1]+0x00000060u; // 800C26E4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C26E8
  c->lr=0x800C26F0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C26EC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C26F0
  c->lr=c->r[0]; // 800C26F4
  c->r[1]=c->r[1]+0x00000060u; // 800C26F8
  return; // 800C26FC
}

// fn_800C2700
void f_800C2700(Ctx* __restrict c) {
  trace_call(0x800C2700u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2700
  c->r[0]=c->lr; // 800C2704
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C2708
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C270C
  c->r[31]=c->r[6]|c->r[6]; // 800C2710
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C2714
  c->r[30]=c->r[3]|c->r[3]; // 800C2718
  c->r[3]=c->r[5]|c->r[5]; // 800C271C
  c->lr=0x800C2724u; f_80068A78(c); // 800C2720
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2724
  c->r[3]=c->r[3]+0x00000394u; // 800C2728
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C272C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C2730
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800C2734
  c->lr=0x800C273Cu; f_80076DD4(c); // 800C2738
  c->r[4]=c->r[3]|c->r[3]; // 800C273C
  c->r[3]=c->r[1]+0x00000008u; // 800C2740
  c->lr=0x800C2748u; f_800BDBB4(c); // 800C2744
  c->r[0]=0u+0x00000007u; // 800C2748
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C274C
  c->r[4]=c->r[1]+0x00000004u; // 800C2750
  c->ctr=c->r[0]; // 800C2754
L_800C2758:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2758
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C275C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2760
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2764
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2758; } // 800C2768
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C276C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2770
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C2774
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C2778
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C277C
  c->lr=c->r[0]; // 800C2780
  c->r[1]=c->r[1]+0x00000060u; // 800C2784
  return; // 800C2788
}

// fn_800C278C
void f_800C278C(Ctx* __restrict c) {
  trace_call(0x800C278Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C278C
  c->r[4]=0u+0x00000000u; // 800C2790
  c->r[0]=0u+0x00000007u; // 800C2794
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 800C2798
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C279C
  c->r[4]=c->r[1]+0x00000004u; // 800C27A0
  c->ctr=c->r[0]; // 800C27A4
L_800C27A8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C27A8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C27AC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C27B0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C27B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C27A8; } // 800C27B8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C27BC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C27C0
  c->r[1]=c->r[1]+0x00000050u; // 800C27C4
  return; // 800C27C8
}

// fn_800C27CC
void f_800C27CC(Ctx* __restrict c) {
  trace_call(0x800C27CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C27CC
  c->r[0]=c->lr; // 800C27D0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C27D4
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C27D8
  c->r[31]=c->r[5]|c->r[5]; // 800C27DC
  c->r[30]=c->r[3]|c->r[3]; // 800C27E0
  c->r[3]=c->r[31]|c->r[31]; // 800C27E4
  c->lr=0x800C27ECu; f_80068A78(c); // 800C27E8
  c->r[3]=c->r[1]+0x00000008u; // 800C27EC
  c->r[4]=0u+0x00000000u; // 800C27F0
  c->lr=0x800C27F8u; f_800BDBB4(c); // 800C27F4
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C27F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C27FC
  if (crb(c,2)) { goto L_800C2844; } // 800C2800
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2804
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C2808
  c->ctr=c->r[12]; // 800C280C
  if (true) { c->lr=0x800C2814u; dispatch(c,c->ctr); } // 800C2810
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C2814
  if (crb(c,2)) { goto L_800C2844; } // 800C2818
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C281C
  c->r[0]=R8(c->r[3]+0x00000034u); // 800C2820
  cmps(c,0,(int32_t)c->r[0],1); // 800C2824
  if (crb(c,2)) { goto L_800C2838; } // 800C2828
  c->r[0]=R8(c->r[3]+0x00000036u); // 800C282C
  cmps(c,0,(int32_t)c->r[0],1); // 800C2830
  if (!crb(c,2)) { goto L_800C2844; } // 800C2834
L_800C2838:;
  c->r[3]=c->r[1]+0x00000008u; // 800C2838
  c->r[4]=0u+0x00000001u; // 800C283C
  c->lr=0x800C2844u; f_800BDBB4(c); // 800C2840
L_800C2844:;
  c->r[0]=0u+0x00000007u; // 800C2844
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C2848
  c->r[4]=c->r[1]+0x00000004u; // 800C284C
  c->ctr=c->r[0]; // 800C2850
L_800C2854:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2854
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2858
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C285C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2860
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2854; } // 800C2864
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2868
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C286C
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C2870
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C2874
  c->lr=c->r[0]; // 800C2878
  c->r[1]=c->r[1]+0x00000050u; // 800C287C
  return; // 800C2880
}

// fn_800C2884
void f_800C2884(Ctx* __restrict c) {
  trace_call(0x800C2884u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2884
  c->r[0]=c->lr; // 800C2888
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C288C
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C2890
  c->r[30]=c->r[3]|c->r[3]; // 800C2894
  c->r[3]=c->r[5]|c->r[5]; // 800C2898
  c->r[31]=c->r[6]|c->r[6]; // 800C289C
  c->lr=0x800C28A4u; f_80068A78(c); // 800C28A0
  c->r[3]=c->r[1]+0x00000008u; // 800C28A4
  c->r[4]=0u+0x00000000u; // 800C28A8
  c->lr=0x800C28B0u; f_800BDBB4(c); // 800C28AC
  c->r[0]=R8(c->r[31]+0x00000004u); // 800C28B0
  cmps(c,0,(int32_t)c->r[0],104); // 800C28B4
  if (crb(c,2)) { goto L_800C28C0; } // 800C28B8
  goto L_800C28CC; // 800C28BC
L_800C28C0:;
  c->r[4]=R32(c->r[13]+0xFFFF8184u); // 800C28C0
  c->r[3]=c->r[1]+0x00000008u; // 800C28C4
  c->lr=0x800C28CCu; f_800BDBB4(c); // 800C28C8
L_800C28CC:;
  c->r[0]=0u+0x00000007u; // 800C28CC
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C28D0
  c->r[4]=c->r[1]+0x00000004u; // 800C28D4
  c->ctr=c->r[0]; // 800C28D8
L_800C28DC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C28DC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C28E0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C28E4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C28E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C28DC; } // 800C28EC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C28F0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C28F4
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C28F8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C28FC
  c->lr=c->r[0]; // 800C2900
  c->r[1]=c->r[1]+0x00000050u; // 800C2904
  return; // 800C2908
}

// fn_800C290C
void f_800C290C(Ctx* __restrict c) {
  trace_call(0x800C290Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C290C
  c->r[0]=c->lr; // 800C2910
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C2914
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C2918
  c->r[31]=c->r[3]|c->r[3]; // 800C291C
  c->r[3]=c->r[5]|c->r[5]; // 800C2920
  c->lr=0x800C2928u; f_80068A78(c); // 800C2924
  c->r[0]=0u+0x00000001u; // 800C2928
  c->r[6]=0u+0x43300000u; // 800C292C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C2930
  c->r[0]=0u+0x00000007u; // 800C2934
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C2938
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C293C
  c->r[3]=R32(c->r[3]+0x000004C0u); // 800C2940
  c->r[4]=c->r[1]+0x00000004u; // 800C2944
  W32(c->r[1]+0x00000048u,c->r[6]); // 800C2948
  c->r[3]=c->r[3]^0x80000000u; // 800C294C
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800C2950
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C2954
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C2958
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C295C
  c->ctr=c->r[0]; // 800C2960
L_800C2964:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2964
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2968
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C296C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2970
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2964; } // 800C2974
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2978
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C297C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C2980
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C2984
  c->lr=c->r[0]; // 800C2988
  c->r[1]=c->r[1]+0x00000060u; // 800C298C
  return; // 800C2990
}

// fn_800C2994
void f_800C2994(Ctx* __restrict c) {
  trace_call(0x800C2994u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2994
  c->r[0]=c->lr; // 800C2998
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C299C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C29A0
  c->r[31]=c->r[5]|c->r[5]; // 800C29A4
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C29A8
  c->r[30]=c->r[3]|c->r[3]; // 800C29AC
  c->r[3]=c->r[31]|c->r[31]; // 800C29B0
  c->lr=0x800C29B8u; f_80068A78(c); // 800C29B4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C29B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C29BC
  c->ctr=c->r[12]; // 800C29C0
  if (true) { c->lr=0x800C29C8u; dispatch(c,c->ctr); } // 800C29C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C29C8
  c->r[5]=0u+0xC8000000u; // 800C29CC
  c->r[3]=c->r[1]+0x00000008u; // 800C29D0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C29D4
  c->r[4]=c->r[5]+0x00000001u; // 800C29D8
  c->lr=0x800C29E0u; f_8003EDD0(c); // 800C29DC
  cmps(c,0,(int32_t)c->r[3],0); // 800C29E0
  if (crb(c,2)) { goto L_800C2A20; } // 800C29E4
  c->r[3]=c->r[31]|c->r[31]; // 800C29E8
  c->lr=0x800C29F0u; f_80068A78(c); // 800C29EC
  c->r[4]=0u+0x00000001u; // 800C29F0
  c->r[0]=0u+0x43300000u; // 800C29F4
  W32(c->r[1]+0x00000010u,c->r[4]); // 800C29F8
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C29FC
  c->r[3]=R32(c->r[3]+0x00001F44u); // 800C2A00
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C2A04
  c->r[0]=c->r[3]^0x80000000u; // 800C2A08
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C2A0C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800C2A10
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C2A14
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800C2A18
  goto L_800C2A30; // 800C2A1C
L_800C2A20:;
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2A20
  c->r[0]=0u+0x00000001u; // 800C2A24
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C2A28
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800C2A2C
L_800C2A30:;
  c->r[0]=0u+0x00000007u; // 800C2A30
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C2A34
  c->r[4]=c->r[1]+0x0000000Cu; // 800C2A38
  c->ctr=c->r[0]; // 800C2A3C
L_800C2A40:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2A40
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2A44
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2A48
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2A4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2A40; } // 800C2A50
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2A54
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2A58
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C2A5C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C2A60
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C2A64
  c->lr=c->r[0]; // 800C2A68
  c->r[1]=c->r[1]+0x00000060u; // 800C2A6C
  return; // 800C2A70
}

// fn_800C2A74
void f_800C2A74(Ctx* __restrict c) {
  trace_call(0x800C2A74u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2A74
  c->r[0]=c->lr; // 800C2A78
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C2A7C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C2A80
  c->r[31]=c->r[6]|c->r[6]; // 800C2A84
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C2A88
  c->r[30]=c->r[3]|c->r[3]; // 800C2A8C
  c->r[3]=c->r[5]|c->r[5]; // 800C2A90
  c->lr=0x800C2A98u; f_80068A78(c); // 800C2A94
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800C2A98
  cmps(c,0,(int32_t)c->r[3],0); // 800C2A9C
  if (crb(c,2)) { goto L_800C2AB8; } // 800C2AA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2AA4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2AA8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800C2AAC
  c->ctr=c->r[12]; // 800C2AB0
  if (true) { c->lr=0x800C2AB8u; dispatch(c,c->ctr); } // 800C2AB4
L_800C2AB8:;
  c->r[3]=0u+0x00000000u; // 800C2AB8
  c->r[0]=0u+0x00000007u; // 800C2ABC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C2AC0
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C2AC4
  c->r[4]=c->r[1]+0x00000004u; // 800C2AC8
  c->ctr=c->r[0]; // 800C2ACC
L_800C2AD0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2AD0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2AD4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2AD8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2ADC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2AD0; } // 800C2AE0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2AE4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2AE8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C2AEC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C2AF0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C2AF4
  c->lr=c->r[0]; // 800C2AF8
  c->r[1]=c->r[1]+0x00000050u; // 800C2AFC
  return; // 800C2B00
}

// fn_800C2B04
void f_800C2B04(Ctx* __restrict c) {
  trace_call(0x800C2B04u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2B04
  c->r[0]=c->lr; // 800C2B08
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C2B0C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C2B10
  c->r[31]=c->r[6]|c->r[6]; // 800C2B14
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C2B18
  c->r[30]=c->r[3]|c->r[3]; // 800C2B1C
  c->r[3]=c->r[5]|c->r[5]; // 800C2B20
  c->lr=0x800C2B28u; f_80068A78(c); // 800C2B24
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800C2B28
  cmps(c,0,(int32_t)c->r[3],0); // 800C2B2C
  if (crb(c,2)) { goto L_800C2B3C; } // 800C2B30
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2B34
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C2B38
L_800C2B3C:;
  c->r[3]=0u+0x00000000u; // 800C2B3C
  c->r[0]=0u+0x00000007u; // 800C2B40
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C2B44
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C2B48
  c->r[4]=c->r[1]+0x00000004u; // 800C2B4C
  c->ctr=c->r[0]; // 800C2B50
L_800C2B54:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2B54
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2B58
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2B5C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2B60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2B54; } // 800C2B64
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2B68
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2B6C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C2B70
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C2B74
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C2B78
  c->lr=c->r[0]; // 800C2B7C
  c->r[1]=c->r[1]+0x00000050u; // 800C2B80
  return; // 800C2B84
}

// fn_800C2B88
void f_800C2B88(Ctx* __restrict c) {
  trace_call(0x800C2B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2B88
  c->r[0]=c->lr; // 800C2B8C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C2B90
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C2B94
  c->r[31]=c->r[3]|c->r[3]; // 800C2B98
  c->r[3]=c->r[5]|c->r[5]; // 800C2B9C
  c->lr=0x800C2BA4u; f_80068A78(c); // 800C2BA0
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800C2BA4
  cmps(c,0,(int32_t)c->r[3],0); // 800C2BA8
  if (crb(c,2)) { goto L_800C2BC4; } // 800C2BAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C2BB0
  c->r[4]=0u+0x00000000u; // 800C2BB4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C2BB8
  c->ctr=c->r[12]; // 800C2BBC
  if (true) { c->lr=0x800C2BC4u; dispatch(c,c->ctr); } // 800C2BC0
L_800C2BC4:;
  c->r[3]=0u+0x00000000u; // 800C2BC4
  c->r[0]=0u+0x00000007u; // 800C2BC8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C2BCC
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C2BD0
  c->r[4]=c->r[1]+0x00000004u; // 800C2BD4
  c->ctr=c->r[0]; // 800C2BD8
L_800C2BDC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2BDC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2BE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2BE4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2BE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2BDC; } // 800C2BEC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2BF0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2BF4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C2BF8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C2BFC
  c->lr=c->r[0]; // 800C2C00
  c->r[1]=c->r[1]+0x00000050u; // 800C2C04
  return; // 800C2C08
}

// fn_800C2C0C
void f_800C2C0C(Ctx* __restrict c) {
  trace_call(0x800C2C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2C0C
  c->r[0]=c->lr; // 800C2C10
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C2C14
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C2C18
  c->r[31]=c->r[3]|c->r[3]; // 800C2C1C
  c->r[3]=c->r[5]|c->r[5]; // 800C2C20
  c->lr=0x800C2C28u; f_80068A78(c); // 800C2C24
  c->r[4]=0u+0x00000000u; // 800C2C28
  c->r[5]=0u+0x00000001u; // 800C2C2C
  c->lr=0x800C2C34u; f_80076080(c); // 800C2C30
  c->r[3]=0u+0x00000000u; // 800C2C34
  c->r[0]=0u+0x00000007u; // 800C2C38
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C2C3C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C2C40
  c->r[4]=c->r[1]+0x00000004u; // 800C2C44
  c->ctr=c->r[0]; // 800C2C48
L_800C2C4C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2C4C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2C50
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2C54
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2C58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2C4C; } // 800C2C5C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2C60
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2C64
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C2C68
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C2C6C
  c->lr=c->r[0]; // 800C2C70
  c->r[1]=c->r[1]+0x00000050u; // 800C2C74
  return; // 800C2C78
}

// fn_800C2C7C
void f_800C2C7C(Ctx* __restrict c) {
  trace_call(0x800C2C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2C7C
  c->r[0]=c->lr; // 800C2C80
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C2C84
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C2C88
  c->r[31]=c->r[3]|c->r[3]; // 800C2C8C
  c->r[3]=c->r[5]|c->r[5]; // 800C2C90
  c->lr=0x800C2C98u; f_80068A78(c); // 800C2C94
  c->r[3]=0u+0x00000000u; // 800C2C98
  c->r[0]=0u+0x00000007u; // 800C2C9C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C2CA0
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C2CA4
  c->r[4]=c->r[1]+0x00000004u; // 800C2CA8
  c->ctr=c->r[0]; // 800C2CAC
L_800C2CB0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2CB0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2CB4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2CB8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2CBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2CB0; } // 800C2CC0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2CC4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2CC8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C2CCC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C2CD0
  c->lr=c->r[0]; // 800C2CD4
  c->r[1]=c->r[1]+0x00000050u; // 800C2CD8
  return; // 800C2CDC
}

// fn_800C2CE0
void f_800C2CE0(Ctx* __restrict c) {
  trace_call(0x800C2CE0u);
  {uint32_t ea=c->r[1]+0xFFFFF0C0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2CE0
  c->r[0]=c->lr; // 800C2CE4
  W32(c->r[1]+0x00000F44u,c->r[0]); // 800C2CE8
  c->r[11]=c->r[1]+0x00000F40u; // 800C2CEC
  c->lr=0x800C2CF4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2CF0
  c->r[30]=c->r[5]|c->r[5]; // 800C2CF4
  c->r[29]=c->r[3]|c->r[3]; // 800C2CF8
  c->r[31]=c->r[6]|c->r[6]; // 800C2CFC
  c->r[3]=c->r[30]|c->r[30]; // 800C2D00
  c->lr=0x800C2D08u; f_80068A78(c); // 800C2D04
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C2D08
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C2D0C
  c->ctr=c->r[12]; // 800C2D10
  if (true) { c->lr=0x800C2D18u; dispatch(c,c->ctr); } // 800C2D14
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C2D18
  c->r[4]=0u+0xC8000000u; // 800C2D1C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C2D20
  c->r[3]=c->r[1]+0x00000010u; // 800C2D24
  c->lr=0x800C2D2Cu; f_8003EDD0(c); // 800C2D28
  cmps(c,0,(int32_t)c->r[3],0); // 800C2D2C
  if (crb(c,2)) { goto L_800C2EDC; } // 800C2D30
  c->r[3]=c->r[30]|c->r[30]; // 800C2D34
  c->lr=0x800C2D3Cu; f_80068A78(c); // 800C2D38
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2D3C
  c->r[30]=c->r[3]|c->r[3]; // 800C2D40
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2D44
  c->r[3]=c->r[1]+0x00000090u; // 800C2D48
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2D4C
  c->lr=0x800C2D54u; f_800521A0(c); // 800C2D50
  c->r[3]=c->r[1]+0x00000138u; // 800C2D54
  c->lr=0x800C2D5Cu; f_800462E8(c); // 800C2D58
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800C2D5C
  c->r[4]=c->r[30]+0x000008D0u; // 800C2D60
  c->r[3]=c->r[1]+0x00000108u; // 800C2D64
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C2D68
  c->ctr=c->r[12]; // 800C2D6C
  if (true) { c->lr=0x800C2D74u; dispatch(c,c->ctr); } // 800C2D70
  {uint32_t ea=c->r[1]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2D74
  c->r[3]=c->r[1]+0x0000006Cu; // 800C2D78
  {uint32_t ea=c->r[1]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2D7C
  {uint32_t ea=c->r[1]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2D80
  c->lr=0x800C2D88u; f_800521A0(c); // 800C2D84
  {uint32_t ea=c->r[2]+0xFFFF8EACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2D88
  c->r[3]=c->r[1]+0x00000048u; // 800C2D8C
  c->r[4]=c->r[1]+0x00000090u; // 800C2D90
  c->lr=0x800C2D98u; f_80064C58(c); // 800C2D94
  {uint32_t ea=c->r[1]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2D98
  c->r[3]=c->r[1]+0x00000054u; // 800C2D9C
  {uint32_t ea=c->r[1]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2DA0
  {uint32_t ea=c->r[1]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2DA4
  c->lr=0x800C2DACu; f_800521A0(c); // 800C2DA8
  c->r[3]=c->r[1]+0x00000060u; // 800C2DAC
  c->r[4]=c->r[1]+0x00000054u; // 800C2DB0
  c->r[5]=c->r[1]+0x00000048u; // 800C2DB4
  c->lr=0x800C2DBCu; f_80064C34(c); // 800C2DB8
  c->r[3]=0u+0x80450000u; // 800C2DBC
  c->r[4]=c->r[1]+0x00000138u; // 800C2DC0
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800C2DC4
  c->r[5]=c->r[1]+0x0000006Cu; // 800C2DC8
  c->r[6]=c->r[1]+0x00000060u; // 800C2DCC
  c->r[7]=0u+0x00000000u; // 800C2DD0
  c->lr=0x800C2DD8u; f_80044D14(c); // 800C2DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C2DD8
  if (crb(c,2)) { goto L_800C2ECC; } // 800C2DDC
  c->r[3]=c->r[1]+0x00000084u; // 800C2DE0
  c->r[4]=c->r[1]+0x0000014Cu; // 800C2DE4
  c->lr=0x800C2DECu; f_8003F468(c); // 800C2DE8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C2DEC
  c->r[3]=c->r[1]+0x00000078u; // 800C2DF0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C2DF4
  {uint32_t ea=c->r[1]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C2DF8
  c->lr=0x800C2E00u; f_800521A0(c); // 800C2DFC
  c->r[3]=c->r[1]+0x00000084u; // 800C2E00
  c->lr=0x800C2E08u; f_80065368(c); // 800C2E04
  cmps(c,0,(int32_t)c->r[3],0); // 800C2E08
  if (!crb(c,2)) { goto L_800C2ECC; } // 800C2E0C
  c->r[3]=c->r[1]+0x00000084u; // 800C2E10
  c->r[4]=c->r[1]+0x00000078u; // 800C2E14
  c->lr=0x800C2E1Cu; f_800653BC(c); // 800C2E18
  {uint32_t ea=c->r[2]+0xFFFF8EF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2E1C
  fcmp(c,0,c->f[1],c->f[0]); // 800C2E20
  if (!crb(c,0)) { goto L_800C2ECC; } // 800C2E24
  c->r[3]=c->r[1]+0x00000084u; // 800C2E28
  c->r[4]=c->r[1]+0x00000078u; // 800C2E2C
  c->lr=0x800C2E34u; f_800653BC(c); // 800C2E30
  {uint32_t ea=c->r[2]+0xFFFF8EFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2E34
  fcmp(c,0,c->f[1],c->f[0]); // 800C2E38
  if (!crb(c,1)) { goto L_800C2ECC; } // 800C2E3C
  c->r[3]=c->r[1]+0x00000030u; // 800C2E40
  c->r[4]=c->r[1]+0x00000078u; // 800C2E44
  c->lr=0x800C2E4Cu; f_8003F484(c); // 800C2E48
  c->r[3]=c->r[1]+0x0000003Cu; // 800C2E4C
  c->r[4]=c->r[1]+0x00000084u; // 800C2E50
  c->lr=0x800C2E58u; f_8003F484(c); // 800C2E54
  c->r[3]=c->r[1]+0x00000024u; // 800C2E58
  c->r[4]=c->r[1]+0x00000030u; // 800C2E5C
  c->lr=0x800C2E64u; f_8003F484(c); // 800C2E60
  c->r[31]=c->r[3]|c->r[3]; // 800C2E64
  c->r[3]=c->r[1]+0x00000018u; // 800C2E68
  c->r[4]=c->r[1]+0x0000003Cu; // 800C2E6C
  c->lr=0x800C2E74u; f_8003F484(c); // 800C2E70
  c->r[4]=c->r[3]|c->r[3]; // 800C2E74
  c->r[5]=c->r[31]|c->r[31]; // 800C2E78
  c->r[3]=c->r[1]+0x0000009Cu; // 800C2E7C
  c->lr=0x800C2E84u; f_80074BF0(c); // 800C2E80
  c->r[0]=0u+0x00000006u; // 800C2E84
  c->r[5]=c->r[1]+0x00000104u; // 800C2E88
  c->r[4]=c->r[1]+0x00000098u; // 800C2E8C
  c->ctr=c->r[0]; // 800C2E90
L_800C2E94:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2E94
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2E98
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2E9C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2EA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2E94; } // 800C2EA4
  c->r[3]=c->r[1]+0x00000108u; // 800C2EA8
  c->r[4]=c->r[1]+0x00000140u; // 800C2EAC
  c->lr=0x800C2EB4u; f_80032FF4(c); // 800C2EB0
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800C2EB4
  c->r[3]=c->r[30]+0x000008D0u; // 800C2EB8
  c->r[4]=c->r[1]+0x00000108u; // 800C2EBC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800C2EC0
  c->ctr=c->r[12]; // 800C2EC4
  if (true) { c->lr=0x800C2ECCu; dispatch(c,c->ctr); } // 800C2EC8
L_800C2ECC:;
  c->r[3]=c->r[1]+0x00000138u; // 800C2ECC
  c->r[4]=0u+0xFFFFFFFFu; // 800C2ED0
  c->lr=0x800C2ED8u; f_80046394(c); // 800C2ED4
  goto L_800C2F18; // 800C2ED8
L_800C2EDC:;
  c->r[3]=c->r[30]|c->r[30]; // 800C2EDC
  c->lr=0x800C2EE4u; f_80068A78(c); // 800C2EE0
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C2EE4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C2EE8
  c->ctr=c->r[12]; // 800C2EEC
  if (true) { c->lr=0x800C2EF4u; dispatch(c,c->ctr); } // 800C2EF0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C2EF4
  c->r[4]=0u+0xC0000000u; // 800C2EF8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C2EFC
  c->r[3]=c->r[1]+0x00000008u; // 800C2F00
  c->lr=0x800C2F08u; f_8003EDD0(c); // 800C2F04
  cmps(c,0,(int32_t)c->r[3],0); // 800C2F08
  if (crb(c,2)) { goto L_800C2F18; } // 800C2F0C
  c->r[3]=c->r[30]|c->r[30]; // 800C2F10
  c->lr=0x800C2F18u; f_80068A78(c); // 800C2F14
L_800C2F18:;
  c->r[3]=0u+0x00000000u; // 800C2F18
  c->r[0]=0u+0x00000007u; // 800C2F1C
  W32(c->r[1]+0x000000CCu,c->r[3]); // 800C2F20
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C2F24
  c->r[4]=c->r[1]+0x000000C8u; // 800C2F28
  c->ctr=c->r[0]; // 800C2F2C
L_800C2F30:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C2F30
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C2F34
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C2F38
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C2F3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2F30; } // 800C2F40
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C2F44
  c->r[11]=c->r[1]+0x00000F40u; // 800C2F48
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C2F4C
  c->lr=0x800C2F54u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C2F50
  c->r[0]=R32(c->r[1]+0x00000F44u); // 800C2F54
  c->lr=c->r[0]; // 800C2F58
  c->r[1]=c->r[1]+0x00000F40u; // 800C2F5C
  return; // 800C2F60
}

// fn_800C2F64
void f_800C2F64(Ctx* __restrict c) {
  trace_call(0x800C2F64u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2F64
  c->r[0]=c->lr; // 800C2F68
  W32(c->r[1]+0x00000104u,c->r[0]); // 800C2F6C
  c->r[11]=c->r[1]+0x00000100u; // 800C2F70
  c->lr=0x800C2F78u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2F74
  c->r[31]=c->r[5]|c->r[5]; // 800C2F78
  c->r[29]=c->r[3]|c->r[3]; // 800C2F7C
  c->r[30]=c->r[6]|c->r[6]; // 800C2F80
  c->r[3]=c->r[31]|c->r[31]; // 800C2F84
  c->lr=0x800C2F8Cu; f_80068A78(c); // 800C2F88
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C2F8C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C2F90
  c->ctr=c->r[12]; // 800C2F94
  if (true) { c->lr=0x800C2F9Cu; dispatch(c,c->ctr); } // 800C2F98
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C2F9C
  c->r[4]=0u+0xC8000000u; // 800C2FA0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C2FA4
  c->r[3]=c->r[1]+0x00000010u; // 800C2FA8
  c->lr=0x800C2FB0u; f_8003EDD0(c); // 800C2FAC
  cmps(c,0,(int32_t)c->r[3],0); // 800C2FB0
  if (crb(c,2)) { goto L_800C30D8; } // 800C2FB4
  c->r[3]=c->r[31]|c->r[31]; // 800C2FB8
  c->lr=0x800C2FC0u; f_80068A78(c); // 800C2FBC
  c->r[31]=c->r[3]|c->r[3]; // 800C2FC0
  c->r[3]=c->r[1]+0x000000B4u; // 800C2FC4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800C2FC8
  c->r[4]=c->r[31]+0x000008D0u; // 800C2FCC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C2FD0
  c->ctr=c->r[12]; // 800C2FD4
  if (true) { c->lr=0x800C2FDCu; dispatch(c,c->ctr); } // 800C2FD8
  c->r[3]=c->r[1]+0x00000084u; // 800C2FDC
  c->lr=0x800C2FE4u; f_80264680(c); // 800C2FE0
  c->r[0]=R8(c->r[30]+0x00000004u); // 800C2FE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C2FE8
  cmps(c,0,(int32_t)c->r[0],120); // 800C2FEC
  if (crb(c,2)) { goto L_800C302C; } // 800C2FF0
  if (!crb(c,0)) { goto L_800C301C; } // 800C2FF4
  cmps(c,0,(int32_t)c->r[0],89); // 800C2FF8
  if (crb(c,2)) { goto L_800C304C; } // 800C2FFC
  if (!crb(c,0)) { goto L_800C3010; } // 800C3000
  cmps(c,0,(int32_t)c->r[0],88); // 800C3004
  if (!crb(c,0)) { goto L_800C302C; } // 800C3008
  goto L_800C3088; // 800C300C
L_800C3010:;
  cmps(c,0,(int32_t)c->r[0],91); // 800C3010
  if (!crb(c,0)) { goto L_800C3088; } // 800C3014
  goto L_800C306C; // 800C3018
L_800C301C:;
  cmps(c,0,(int32_t)c->r[0],122); // 800C301C
  if (crb(c,2)) { goto L_800C306C; } // 800C3020
  if (!crb(c,0)) { goto L_800C3088; } // 800C3024
  goto L_800C304C; // 800C3028
L_800C302C:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C302C
  c->r[3]=c->r[1]+0x00000084u; // 800C3030
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3034
  {uint32_t ea=c->r[2]+0xFFFF8ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3038
  c->f[3]=c->f[2]; // 800C303C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800C3040
  c->lr=0x800C3048u; f_803949B8(c); // 800C3044
  goto L_800C3088; // 800C3048
L_800C304C:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C304C
  c->r[3]=c->r[1]+0x00000084u; // 800C3050
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3054
  {uint32_t ea=c->r[2]+0xFFFF8ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3058
  c->f[3]=c->f[1]; // 800C305C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800C3060
  c->lr=0x800C3068u; f_803949B8(c); // 800C3064
  goto L_800C3088; // 800C3068
L_800C306C:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C306C
  c->r[3]=c->r[1]+0x00000084u; // 800C3070
  {uint32_t ea=c->r[30]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C3074
  {uint32_t ea=c->r[2]+0xFFFF8ED4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3078
  c->f[2]=c->f[1]; // 800C307C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800C3080
  c->lr=0x800C3088u; f_803949B8(c); // 800C3084
L_800C3088:;
  c->r[3]=c->r[1]+0x000000B4u; // 800C3088
  c->r[4]=c->r[1]+0x00000084u; // 800C308C
  c->r[5]=c->r[1]+0x00000018u; // 800C3090
  c->lr=0x800C3098u; f_802646E0(c); // 800C3094
  c->r[0]=0u+0x00000006u; // 800C3098
  c->r[5]=c->r[1]+0x000000B0u; // 800C309C
  c->r[4]=c->r[1]+0x00000014u; // 800C30A0
  c->ctr=c->r[0]; // 800C30A4
L_800C30A8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C30A8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C30AC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C30B0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C30B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C30A8; } // 800C30B8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800C30BC
  c->r[3]=c->r[31]+0x000008D0u; // 800C30C0
  c->r[4]=c->r[1]+0x000000B4u; // 800C30C4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800C30C8
  c->ctr=c->r[12]; // 800C30CC
  if (true) { c->lr=0x800C30D4u; dispatch(c,c->ctr); } // 800C30D0
  goto L_800C3114; // 800C30D4
L_800C30D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C30D8
  c->lr=0x800C30E0u; f_80068A78(c); // 800C30DC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C30E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C30E4
  c->ctr=c->r[12]; // 800C30E8
  if (true) { c->lr=0x800C30F0u; dispatch(c,c->ctr); } // 800C30EC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C30F0
  c->r[4]=0u+0xC0000000u; // 800C30F4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C30F8
  c->r[3]=c->r[1]+0x00000008u; // 800C30FC
  c->lr=0x800C3104u; f_8003EDD0(c); // 800C3100
  cmps(c,0,(int32_t)c->r[3],0); // 800C3104
  if (crb(c,2)) { goto L_800C3114; } // 800C3108
  c->r[3]=c->r[31]|c->r[31]; // 800C310C
  c->lr=0x800C3114u; f_80068A78(c); // 800C3110
L_800C3114:;
  c->r[3]=0u+0x00000000u; // 800C3114
  c->r[0]=0u+0x00000007u; // 800C3118
  W32(c->r[1]+0x00000048u,c->r[3]); // 800C311C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C3120
  c->r[4]=c->r[1]+0x00000044u; // 800C3124
  c->ctr=c->r[0]; // 800C3128
L_800C312C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C312C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C3130
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C3134
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C3138
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C312C; } // 800C313C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C3140
  c->r[11]=c->r[1]+0x00000100u; // 800C3144
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C3148
  c->lr=0x800C3150u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C314C
  c->r[0]=R32(c->r[1]+0x00000104u); // 800C3150
  c->lr=c->r[0]; // 800C3154
  c->r[1]=c->r[1]+0x00000100u; // 800C3158
  return; // 800C315C
}

// fn_800C3160
void f_800C3160(Ctx* __restrict c) {
  trace_call(0x800C3160u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3160
  c->r[0]=c->lr; // 800C3164
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C3168
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C316C
  c->r[29]=c->r[3]|c->r[3]; // 800C3170
  c->r[3]=c->r[5]|c->r[5]; // 800C3174
  c->r[30]=c->r[6]|c->r[6]; // 800C3178
  c->lr=0x800C3180u; f_80068A78(c); // 800C317C
  c->r[31]=R32(c->r[3]+0x00000028u); // 800C3180
  c->r[3]=c->r[30]|c->r[30]; // 800C3184
  c->lr=0x800C318Cu; f_800797C0(c); // 800C3188
  c->r[12]=R32(c->r[31]+0x00000000u); // 800C318C
  c->r[4]=c->r[3]|c->r[3]; // 800C3190
  c->r[3]=c->r[31]|c->r[31]; // 800C3194
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3198
  c->ctr=c->r[12]; // 800C319C
  if (true) { c->lr=0x800C31A4u; dispatch(c,c->ctr); } // 800C31A0
  c->r[3]=0u+0x00000000u; // 800C31A4
  c->r[0]=0u+0x00000007u; // 800C31A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C31AC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C31B0
  c->r[4]=c->r[1]+0x00000004u; // 800C31B4
  c->ctr=c->r[0]; // 800C31B8
L_800C31BC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C31BC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C31C0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C31C4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C31C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C31BC; } // 800C31CC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C31D0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C31D4
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C31D8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C31DC
  c->lr=c->r[0]; // 800C31E0
  c->r[1]=c->r[1]+0x00000060u; // 800C31E4
  return; // 800C31E8
}

// fn_800C31EC
void f_800C31EC(Ctx* __restrict c) {
  trace_call(0x800C31ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C31EC
  c->r[0]=c->lr; // 800C31F0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C31F4
  c->r[11]=c->r[1]+0x00000060u; // 800C31F8
  c->lr=0x800C3200u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C31FC
  c->r[29]=c->r[3]|c->r[3]; // 800C3200
  c->r[3]=c->r[5]|c->r[5]; // 800C3204
  c->r[30]=c->r[6]|c->r[6]; // 800C3208
  c->lr=0x800C3210u; f_80068A78(c); // 800C320C
  c->r[31]=c->r[3]|c->r[3]; // 800C3210
  c->r[3]=c->r[3]+0x000007ECu; // 800C3214
  c->r[4]=c->r[30]+0x00000004u; // 800C3218
  c->lr=0x800C3220u; f_800CE92C(c); // 800C321C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3220
  if (crb(c,2)) { goto L_800C3234; } // 800C3224
  W32(c->r[31]+0x000007F8u,c->r[3]); // 800C3228
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C322C
  {uint32_t ea=c->r[31]+0x000007FCu; WF32(ea,c->f[0]);} // 800C3230
L_800C3234:;
  c->r[3]=0u+0x00000000u; // 800C3234
  c->r[0]=0u+0x00000007u; // 800C3238
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C323C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C3240
  c->r[4]=c->r[1]+0x00000004u; // 800C3244
  c->ctr=c->r[0]; // 800C3248
L_800C324C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C324C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C3250
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C3254
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C3258
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C324C; } // 800C325C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C3260
  c->r[11]=c->r[1]+0x00000060u; // 800C3264
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C3268
  c->lr=0x800C3270u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C326C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C3270
  c->lr=c->r[0]; // 800C3274
  c->r[1]=c->r[1]+0x00000060u; // 800C3278
  return; // 800C327C
}

// fn_800C3280
void f_800C3280(Ctx* __restrict c) {
  trace_call(0x800C3280u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3280
  c->r[0]=c->lr; // 800C3284
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C3288
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C328C
  c->r[31]=c->r[3]|c->r[3]; // 800C3290
  c->r[3]=c->r[5]|c->r[5]; // 800C3294
  c->lr=0x800C329Cu; f_80068A78(c); // 800C3298
  c->r[3]=c->r[3]+0x000007ECu; // 800C329C
  c->lr=0x800C32A4u; f_800C32F0(c); // 800C32A0
  c->r[4]=c->r[3]|c->r[3]; // 800C32A4
  c->r[3]=c->r[1]+0x00000008u; // 800C32A8
  c->lr=0x800C32B0u; f_800C12E4(c); // 800C32AC
  c->r[0]=0u+0x00000007u; // 800C32B0
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C32B4
  c->r[4]=c->r[1]+0x00000004u; // 800C32B8
  c->ctr=c->r[0]; // 800C32BC
L_800C32C0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C32C0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C32C4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C32C8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C32CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C32C0; } // 800C32D0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C32D4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C32D8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C32DC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C32E0
  c->lr=c->r[0]; // 800C32E4
  c->r[1]=c->r[1]+0x00000050u; // 800C32E8
  return; // 800C32EC
}

// fn_800C32F0
void f_800C32F0(Ctx* __restrict c) {
  trace_call(0x800C32F0u);
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800C32F0
  cmps(c,0,(int32_t)c->r[4],0); // 800C32F4
  if (crb(c,2)) { goto L_800C330C; } // 800C32F8
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C32FC
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 800C3300
  c->r[3]=c->r[3]+c->r[0]; // 800C3304
  return; // 800C3308
L_800C330C:;
  c->r[3]=0u+0x803F0000u; // 800C330C
  c->r[3]=c->r[3]+0x00007AA8u; // 800C3310
  return; // 800C3314
}

// fn_800C3318
void f_800C3318(Ctx* __restrict c) {
  trace_call(0x800C3318u);
  {uint32_t ea=c->r[1]+0xFFFFEF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3318
  c->r[0]=c->lr; // 800C331C
  W32(c->r[1]+0x000010A4u,c->r[0]); // 800C3320
  {uint32_t ea=c->r[1]+0x0000108Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C3324
  c->r[29]=c->r[5]|c->r[5]; // 800C3328
  c->r[31]=c->r[3]|c->r[3]; // 800C332C
  c->r[3]=c->r[29]|c->r[29]; // 800C3330
  c->lr=0x800C3338u; f_80068A78(c); // 800C3334
  c->r[28]=c->r[3]|c->r[3]; // 800C3338
  c->r[4]=0u+0x0000000Bu; // 800C333C
  c->r[3]=c->r[3]+0x00000394u; // 800C3340
  c->lr=0x800C3348u; f_80076DD4(c); // 800C3344
  cmps(c,0,(int32_t)c->r[3],0); // 800C3348
  if (crb(c,2)) { goto L_800C3388; } // 800C334C
  c->r[3]=0u+0x00000000u; // 800C3350
  c->r[0]=0u+0x00000007u; // 800C3354
  W32(c->r[1]+0x000000ACu,c->r[3]); // 800C3358
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C335C
  c->r[4]=c->r[1]+0x000000A8u; // 800C3360
  c->ctr=c->r[0]; // 800C3364
L_800C3368:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C3368
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C336C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C3370
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C3374
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C3368; } // 800C3378
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C337C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C3380
  goto L_800C3500; // 800C3384
L_800C3388:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C3388
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C338C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C3390
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C3394
  c->lr=0x800C339Cu; f_80128B5C(c); // 800C3398
  c->r[4]=c->r[1]+0x00000010u; // 800C339C
  c->lr=0x800C33A4u; f_8012BB18(c); // 800C33A0
  cmps(c,0,(int32_t)c->r[3],0); // 800C33A4
  if (!crb(c,2)) { goto L_800C33E4; } // 800C33A8
  c->r[3]=0u+0x00000000u; // 800C33AC
  c->r[0]=0u+0x00000007u; // 800C33B0
  W32(c->r[1]+0x00000070u,c->r[3]); // 800C33B4
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C33B8
  c->r[4]=c->r[1]+0x0000006Cu; // 800C33BC
  c->ctr=c->r[0]; // 800C33C0
L_800C33C4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C33C4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C33C8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C33CC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C33D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C33C4; } // 800C33D4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C33D8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C33DC
  goto L_800C3500; // 800C33E0
L_800C33E4:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 800C33E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C33E8
  if (crb(c,2)) { goto L_800C34CC; } // 800C33EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C33F0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C33F4
  c->ctr=c->r[12]; // 800C33F8
  if (true) { c->lr=0x800C3400u; dispatch(c,c->ctr); } // 800C33FC
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C3400
  if (crb(c,2)) { goto L_800C34CC; } // 800C3404
  c->r[27]=R32(c->r[29]+0x00000008u); // 800C3408
  c->r[3]=R32(c->r[27]+0x00000168u); // 800C340C
  c->r[30]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 800C3410
  if (!crb(c,0)) { goto L_800C341C; } // 800C3414
  c->r[30]=0u+0x00000000u; // 800C3418
L_800C341C:;
  c->r[4]=c->r[28]|c->r[28]; // 800C341C
  c->r[3]=c->r[1]+0x00000018u; // 800C3420
  c->lr=0x800C3428u; f_800C6FB0(c); // 800C3424
  c->r[4]=0u+0x64610000u; // 800C3428
  c->r[3]=c->r[1]+0x00000018u; // 800C342C
  c->r[4]=c->r[4]+0x00006374u; // 800C3430
  c->r[5]=0u+0x00000000u; // 800C3434
  c->lr=0x800C343Cu; f_800C6ACC(c); // 800C3438
  cmps(c,0,(int32_t)c->r[3],0); // 800C343C
  if (crb(c,2)) { goto L_800C344C; } // 800C3440
  c->r[3]=c->r[3]+0x00000008u; // 800C3444
  goto L_800C3450; // 800C3448
L_800C344C:;
  c->r[3]=0u+0x00000000u; // 800C344C
L_800C3450:;
  c->ctr=c->r[30]; // 800C3450
  cmps(c,0,(int32_t)c->r[30],0); // 800C3454
  if (!crb(c,1)) { goto L_800C346C; } // 800C3458
L_800C345C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C345C
  c->r[3]=c->r[3]+c->r[0]; // 800C3460
  c->r[3]=c->r[3]+0x00000008u; // 800C3464
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C345C; } // 800C3468
L_800C346C:;
  c->r[4]=c->r[28]|c->r[28]; // 800C346C
  c->r[5]=c->r[27]|c->r[27]; // 800C3470
  c->lr=0x800C3478u; f_800C6DCC(c); // 800C3474
  cmps(c,0,(int32_t)c->r[3],0); // 800C3478
  c->r[30]=c->r[3]|c->r[3]; // 800C347C
  if (crb(c,2)) { goto L_800C34CC; } // 800C3480
  c->r[6]=R32(c->r[29]+0x00000000u); // 800C3484
  c->r[5]=c->r[27]|c->r[27]; // 800C3488
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C348C
  c->r[3]=c->r[1]+0x00000024u; // 800C3490
  c->r[4]=c->r[1]+0x00000008u; // 800C3494
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C3498
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C349C
  c->lr=0x800C34A4u; f_800ABC54(c); // 800C34A0
  c->r[4]=0u+0x803E0000u; // 800C34A4
  c->r[3]=c->r[1]+0x000000E8u; // 800C34A8
  c->r[4]=c->r[4]+0xFFFF9D38u; // 800C34AC
  c->lr=0x800C34B4u; f_800ABCC0(c); // 800C34B0
  c->r[5]=R32(c->r[28]+0x000007F4u); // 800C34B4
  c->r[3]=c->r[1]+0x000000E8u; // 800C34B8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800C34BC
  c->r[4]=c->r[1]+0x00000024u; // 800C34C0
  c->r[5]=c->r[5]+c->r[0]; // 800C34C4
  c->lr=0x800C34CCu; f_80077408(c); // 800C34C8
L_800C34CC:;
  c->r[3]=0u+0x00000000u; // 800C34CC
  c->r[0]=0u+0x00000007u; // 800C34D0
  W32(c->r[1]+0x00000034u,c->r[3]); // 800C34D4
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C34D8
  c->r[4]=c->r[1]+0x00000030u; // 800C34DC
  c->ctr=c->r[0]; // 800C34E0
L_800C34E4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C34E4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C34E8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C34EC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C34F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C34E4; } // 800C34F4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C34F8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C34FC
L_800C3500:;
  {uint32_t ea=c->r[1]+0x0000108Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C3500
  c->r[0]=R32(c->r[1]+0x000010A4u); // 800C3504
  c->lr=c->r[0]; // 800C3508
  c->r[1]=c->r[1]+0x000010A0u; // 800C350C
  return; // 800C3510
}

// fn_800C3514
void f_800C3514(Ctx* __restrict c) {
  trace_call(0x800C3514u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3514
  c->r[0]=c->lr; // 800C3518
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C351C
  {uint32_t ea=c->r[1]+0x0000007Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C3520
  c->r[30]=c->r[3]|c->r[3]; // 800C3524
  c->r[31]=c->r[1]|c->r[1]; // 800C3528
  c->r[3]=c->r[5]|c->r[5]; // 800C352C
  c->r[27]=c->r[6]|c->r[6]; // 800C3530
  c->lr=0x800C3538u; f_80068A78(c); // 800C3534
  c->r[0]=R32(c->r[3]+0x00000054u); // 800C3538
  c->r[28]=c->r[3]|c->r[3]; // 800C353C
  cmps(c,0,(int32_t)c->r[0],0); // 800C3540
  if (crb(c,2)) { goto L_800C35AC; } // 800C3544
  c->r[3]=c->r[0]|c->r[0]; // 800C3548
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C354C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C3550
  c->ctr=c->r[12]; // 800C3554
  if (true) { c->lr=0x800C355Cu; dispatch(c,c->ctr); } // 800C3558
  c->lr=0x800C3560u; f_8007A658(c); // 800C355C
  c->r[29]=c->r[3]|c->r[3]; // 800C3560
  c->r[3]=0u+0x00000002u; // 800C3564
  c->lr=0x800C356Cu; f_8007A658(c); // 800C3568
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 800C356C
  if (!crb(c,1)) { goto L_800C35A4; } // 800C3570
  c->r[29]=addc(c,c->r[28],0x00000280u,0); cr0(c,c->r[29]); // 800C3574
  if (crb(c,2)) { goto L_800C359C; } // 800C3578
  W32(c->r[31]+0x00000034u,c->r[1]); // 800C357C
  c->r[3]=c->r[29]|c->r[29]; // 800C3580
  c->lr=0x800C3588u; f_8007614C(c); // 800C3584
  goto L_800C359C; // 800C3588
  c->r[3]=0u+0x00000000u; // 800C358C
  c->r[4]=0u+0x00000000u; // 800C3590
  c->r[5]=0u+0x00000000u; // 800C3594
  c->lr=0x800C359Cu; f_8028BC3C(c); // 800C3598
L_800C359C:;
  W32(c->r[28]+0x00000058u,c->r[29]); // 800C359C
  goto L_800C35F8; // 800C35A0
L_800C35A4:;
  c->r[0]=0u+0x00000000u; // 800C35A4
  W32(c->r[28]+0x00000054u,c->r[0]); // 800C35A8
L_800C35AC:;
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 800C35AC
  c->r[0]=c->r[3]+0x00000001u; // 800C35B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C35B4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800C35B8
  c->r[0]=c->r[0]^c->r[3]; // 800C35BC
  c->r[0]=c->r[0]-c->r[3]; // 800C35C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800C35C4
  c->r[0]=c->r[28]+c->r[0]; // 800C35C8
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 800C35CC
  if (crb(c,2)) { goto L_800C35F4; } // 800C35D0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 800C35D4
  c->r[3]=c->r[29]|c->r[29]; // 800C35D8
  c->lr=0x800C35E0u; f_8007614C(c); // 800C35DC
  goto L_800C35F4; // 800C35E0
  c->r[3]=0u+0x00000000u; // 800C35E4
  c->r[4]=0u+0x00000000u; // 800C35E8
  c->r[5]=0u+0x00000000u; // 800C35EC
  c->lr=0x800C35F4u; f_8028BC3C(c); // 800C35F0
L_800C35F4:;
  W32(c->r[28]+0x00000054u,c->r[29]); // 800C35F4
L_800C35F8:;
  c->r[3]=c->r[28]+0x000008D0u; // 800C35F8
  c->lr=0x800C3600u; f_80030FBC(c); // 800C35FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C3600
  if (crb(c,2)) { goto L_800C3624; } // 800C3604
  c->r[3]=c->r[28]+0x000008D0u; // 800C3608
  c->lr=0x800C3610u; f_80030FBC(c); // 800C360C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C3610
  c->r[4]=0u+0x00000000u; // 800C3614
  c->r[12]=R32(c->r[12]+0x00000054u); // 800C3618
  c->ctr=c->r[12]; // 800C361C
  if (true) { c->lr=0x800C3624u; dispatch(c,c->ctr); } // 800C3620
L_800C3624:;
  c->r[3]=c->r[28]+0x000008ECu; // 800C3624
  c->r[4]=c->r[27]+0x00000004u; // 800C3628
  c->lr=0x800C3630u; f_80075440(c); // 800C362C
  W32(c->r[29]+0x00000014u,c->r[3]); // 800C3630
  c->r[3]=0u+0x00000000u; // 800C3634
  c->r[0]=0u+0x00000007u; // 800C3638
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C363C
  W32(c->r[31]+0x00000038u,c->r[3]); // 800C3640
  c->r[4]=c->r[31]+0x00000034u; // 800C3644
  c->ctr=c->r[0]; // 800C3648
L_800C364C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C364C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C3650
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C3654
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C3658
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C364C; } // 800C365C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C3660
  c->r[10]=c->r[31]|c->r[31]; // 800C3664
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C3668
  {uint32_t ea=c->r[10]+0x0000007Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C366C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C3670
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C3674
  c->r[1]=c->r[10]|c->r[10]; // 800C3678
  c->lr=c->r[0]; // 800C367C
  return; // 800C3680
}

// fn_800C3684
void f_800C3684(Ctx* __restrict c) {
  trace_call(0x800C3684u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3684
  c->r[0]=c->lr; // 800C3688
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C368C
  {uint32_t ea=c->r[1]+0x0000007Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C3690
  c->r[29]=c->r[3]|c->r[3]; // 800C3694
  c->r[31]=c->r[1]|c->r[1]; // 800C3698
  c->r[3]=c->r[5]|c->r[5]; // 800C369C
  c->r[30]=c->r[6]|c->r[6]; // 800C36A0
  c->lr=0x800C36A8u; f_80068A78(c); // 800C36A4
  c->r[0]=R32(c->r[3]+0x00000054u); // 800C36A8
  c->r[27]=c->r[3]|c->r[3]; // 800C36AC
  cmps(c,0,(int32_t)c->r[0],0); // 800C36B0
  if (crb(c,2)) { goto L_800C3708; } // 800C36B4
  c->r[3]=c->r[0]|c->r[0]; // 800C36B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C36BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C36C0
  c->ctr=c->r[12]; // 800C36C4
  if (true) { c->lr=0x800C36CCu; dispatch(c,c->ctr); } // 800C36C8
  c->lr=0x800C36D0u; f_8007A658(c); // 800C36CC
  c->r[28]=c->r[3]|c->r[3]; // 800C36D0
  c->r[3]=0u+0x00000006u; // 800C36D4
  c->lr=0x800C36DCu; f_8007A658(c); // 800C36D8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 800C36DC
  if (!crb(c,1)) { goto L_800C3700; } // 800C36E0
  c->r[28]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[28]); // 800C36E4
  if (crb(c,2)) { goto L_800C36F8; } // 800C36E8
  W32(c->r[31]+0x00000034u,c->r[1]); // 800C36EC
  c->r[3]=c->r[28]|c->r[28]; // 800C36F0
  c->lr=0x800C36F8u; f_800AC5F0(c); // 800C36F4
L_800C36F8:;
  W32(c->r[27]+0x00000058u,c->r[28]); // 800C36F8
  goto L_800C3740; // 800C36FC
L_800C3700:;
  c->r[0]=0u+0x00000000u; // 800C3700
  W32(c->r[27]+0x00000054u,c->r[0]); // 800C3704
L_800C3708:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800C3708
  c->r[0]=c->r[3]+0x00000001u; // 800C370C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C3710
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800C3714
  c->r[0]=c->r[0]^c->r[3]; // 800C3718
  c->r[0]=c->r[0]-c->r[3]; // 800C371C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800C3720
  c->r[0]=c->r[27]+c->r[0]; // 800C3724
  c->r[28]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[28]); // 800C3728
  if (crb(c,2)) { goto L_800C373C; } // 800C372C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 800C3730
  c->r[3]=c->r[28]|c->r[28]; // 800C3734
  c->lr=0x800C373Cu; f_800AC5F0(c); // 800C3738
L_800C373C:;
  W32(c->r[27]+0x00000054u,c->r[28]); // 800C373C
L_800C3740:;
  c->r[3]=c->r[27]+0x000008ECu; // 800C3740
  c->r[4]=c->r[30]+0x00000004u; // 800C3744
  c->lr=0x800C374Cu; f_80075440(c); // 800C3748
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 800C374C
  c->r[3]=c->r[30]+0x0000003Cu; // 800C3750
  c->lr=0x800C3758u; f_800797C0(c); // 800C3754
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800C3758
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800C375C
  c->r[3]=c->r[30]+0x00000078u; // 800C3760
  W8(c->r[28]+0x00000020u,c->r[0]); // 800C3764
  c->lr=0x800C376Cu; f_800797C0(c); // 800C3768
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800C376C
  c->r[6]=0u+0x00000000u; // 800C3770
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800C3774
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C3778
  W8(c->r[28]+0x00000021u,c->r[3]); // 800C377C
  c->r[0]=0u+0x00000007u; // 800C3780
  c->r[4]=c->r[31]+0x00000034u; // 800C3784
  W32(c->r[31]+0x00000038u,c->r[6]); // 800C3788
  c->ctr=c->r[0]; // 800C378C
L_800C3790:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C3790
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C3794
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C3798
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C379C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C3790; } // 800C37A0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C37A4
  c->r[10]=c->r[31]|c->r[31]; // 800C37A8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C37AC
  {uint32_t ea=c->r[10]+0x0000007Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C37B0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C37B4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C37B8
  c->r[1]=c->r[10]|c->r[10]; // 800C37BC
  c->lr=c->r[0]; // 800C37C0
  return; // 800C37C4
}

// fn_800C37C8
void f_800C37C8(Ctx* __restrict c) {
  trace_call(0x800C37C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C37C8
  c->r[0]=c->lr; // 800C37CC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800C37D0
  c->r[11]=c->r[1]+0x000000B0u; // 800C37D4
  c->lr=0x800C37DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C37D8
  c->r[31]=c->r[3]|c->r[3]; // 800C37DC
  c->r[3]=c->r[5]|c->r[5]; // 800C37E0
  c->r[26]=c->r[6]|c->r[6]; // 800C37E4
  c->lr=0x800C37ECu; f_80068A78(c); // 800C37E8
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C37EC
  c->r[28]=c->r[3]|c->r[3]; // 800C37F0
  c->r[27]=0u+0x00000000u; // 800C37F4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C37F8
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[0]);} // 800C37FC
  c->r[4]=R32(c->r[1]+0x0000008Cu); // 800C3800
  c->lr=0x800C3808u; f_800B5928(c); // 800C3804
  cmps(c,0,(int32_t)c->r[3],0); // 800C3808
  if (crb(c,2)) { goto L_800C3818; } // 800C380C
  c->r[27]=R32(c->r[28]+0x00000054u); // 800C3810
  goto L_800C383C; // 800C3814
L_800C3818:;
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3818
  c->r[3]=c->r[28]|c->r[28]; // 800C381C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3820
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[0]);} // 800C3824
  c->r[4]=R32(c->r[1]+0x0000008Cu); // 800C3828
  c->lr=0x800C3830u; f_800760EC(c); // 800C382C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3830
  if (crb(c,2)) { goto L_800C383C; } // 800C3834
  c->r[27]=R32(c->r[28]+0x00000050u); // 800C3838
L_800C383C:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C383C
  if (crb(c,2)) { goto L_800C3AD8; } // 800C3840
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3844
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3848
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[0]);} // 800C384C
  c->r[3]=R32(c->r[1]+0x0000008Cu); // 800C3850
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800C3854
  cmpu(c,0,c->r[0],0x00000017u); // 800C3858
  if (crb(c,1)) { goto L_800C3B4C; } // 800C385C
  c->r[3]=0u+0x803F0000u; // 800C3860
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C3864
  c->r[3]=c->r[3]+0x00006898u; // 800C3868
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C386C
  c->ctr=c->r[3]; // 800C3870
  if (true) { switch (c->ctr) { case 0x800C3878u: goto L_800C3878; case 0x800C3884u: goto L_800C3884; case 0x800C3890u: goto L_800C3890; case 0x800C38F0u: goto L_800C38F0; case 0x800C3950u: goto L_800C3950; case 0x800C3AACu: goto L_800C3AAC; case 0x800C3ACCu: goto L_800C3ACC; case 0x800C3B4Cu: goto L_800C3B4C; default: break; } dispatch(c,c->ctr); return; } // 800C3874
L_800C3878:;
  {uint32_t ea=c->r[26]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3878
  {uint32_t ea=c->r[27]+0x00000044u; WF32(ea,c->f[0]);} // 800C387C
  goto L_800C3B4C; // 800C3880
L_800C3884:;
  {uint32_t ea=c->r[26]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3884
  {uint32_t ea=c->r[27]+0x00000034u; WF32(ea,c->f[0]);} // 800C3888
  goto L_800C3B4C; // 800C388C
L_800C3890:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 800C3890
  c->r[3]=c->r[28]|c->r[28]; // 800C3894
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3898
  c->ctr=c->r[12]; // 800C389C
  if (true) { c->lr=0x800C38A4u; dispatch(c,c->ctr); } // 800C38A0
  W32(c->r[1]+0x00000038u,c->r[3]); // 800C38A4
  c->r[5]=0u+0xC8000000u; // 800C38A8
  c->r[3]=c->r[1]+0x00000038u; // 800C38AC
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800C38B0
  c->r[4]=c->r[5]+0x00000001u; // 800C38B4
  c->lr=0x800C38BCu; f_8003EDD0(c); // 800C38B8
  cmps(c,0,(int32_t)c->r[3],0); // 800C38BC
  if (crb(c,2)) { goto L_800C3B4C; } // 800C38C0
  c->r[3]=c->r[28]+0x000008ECu; // 800C38C4
  c->r[4]=c->r[26]+0x00000040u; // 800C38C8
  c->lr=0x800C38D0u; f_80075440(c); // 800C38CC
  W32(c->r[27]+0x00000040u,c->r[3]); // 800C38D0
  {uint32_t ea=c->r[26]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C38D4
  {uint32_t ea=c->r[27]+0x00000030u; WF32(ea,c->f[0]);} // 800C38D8
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C38DC
  {uint32_t ea=c->r[28]+0x00001F78u; WF32(ea,c->f[0]);} // 800C38E0
  {uint32_t ea=c->r[26]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C38E4
  {uint32_t ea=c->r[28]+0x00001F80u; WF32(ea,c->f[0]);} // 800C38E8
  goto L_800C3B4C; // 800C38EC
L_800C38F0:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 800C38F0
  c->r[3]=c->r[28]|c->r[28]; // 800C38F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C38F8
  c->ctr=c->r[12]; // 800C38FC
  if (true) { c->lr=0x800C3904u; dispatch(c,c->ctr); } // 800C3900
  W32(c->r[1]+0x00000030u,c->r[3]); // 800C3904
  c->r[5]=0u+0xC8000000u; // 800C3908
  c->r[3]=c->r[1]+0x00000030u; // 800C390C
  W32(c->r[1]+0x00000034u,c->r[4]); // 800C3910
  c->r[4]=c->r[5]+0x00000001u; // 800C3914
  c->lr=0x800C391Cu; f_8003EDD0(c); // 800C3918
  cmps(c,0,(int32_t)c->r[3],0); // 800C391C
  if (crb(c,2)) { goto L_800C3B4C; } // 800C3920
  c->r[3]=c->r[28]+0x000008ECu; // 800C3924
  c->r[4]=c->r[26]+0x00000040u; // 800C3928
  c->lr=0x800C3930u; f_80075440(c); // 800C392C
  W32(c->r[27]+0x00000040u,c->r[3]); // 800C3930
  {uint32_t ea=c->r[26]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3934
  {uint32_t ea=c->r[27]+0x00000030u; WF32(ea,c->f[0]);} // 800C3938
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C393C
  {uint32_t ea=c->r[28]+0x00001F78u; WF32(ea,c->f[0]);} // 800C3940
  {uint32_t ea=c->r[26]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3944
  {uint32_t ea=c->r[28]+0x00001F80u; WF32(ea,c->f[0]);} // 800C3948
  goto L_800C3B4C; // 800C394C
L_800C3950:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 800C3950
  c->r[3]=c->r[28]|c->r[28]; // 800C3954
  c->r[29]=0u+0x00000001u; // 800C3958
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C395C
  c->ctr=c->r[12]; // 800C3960
  if (true) { c->lr=0x800C3968u; dispatch(c,c->ctr); } // 800C3964
  W32(c->r[1]+0x00000028u,c->r[3]); // 800C3968
  c->r[30]=0u+0xC8000000u; // 800C396C
  c->r[3]=c->r[1]+0x00000028u; // 800C3970
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800C3974
  c->r[4]=c->r[30]+0x00000001u; // 800C3978
  c->lr=0x800C3980u; f_8003EDD0(c); // 800C397C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3980
  if (!crb(c,2)) { goto L_800C39BC; } // 800C3984
  c->r[12]=R32(c->r[28]+0x00000010u); // 800C3988
  c->r[3]=c->r[28]|c->r[28]; // 800C398C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3990
  c->ctr=c->r[12]; // 800C3994
  if (true) { c->lr=0x800C399Cu; dispatch(c,c->ctr); } // 800C3998
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C399C
  c->r[4]=c->r[30]+0x00000028u; // 800C39A0
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C39A4
  c->r[3]=c->r[1]+0x00000020u; // 800C39A8
  c->lr=0x800C39B0u; f_8003EDD0(c); // 800C39AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C39B0
  if (!crb(c,2)) { goto L_800C39BC; } // 800C39B4
  c->r[29]=0u+0x00000000u; // 800C39B8
L_800C39BC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C39BC
  if (crb(c,2)) { goto L_800C39F0; } // 800C39C0
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C39C4
  c->r[3]=c->r[1]+0x00000040u; // 800C39C8
  {uint32_t ea=c->r[26]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C39CC
  {uint32_t ea=c->r[26]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C39D0
  c->lr=0x800C39D8u; f_800521A0(c); // 800C39D4
  {uint32_t ea=c->r[26]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C39D8
  c->r[5]=c->r[3]|c->r[3]; // 800C39DC
  c->r[3]=c->r[28]+0x00002028u; // 800C39E0
  c->r[4]=c->r[26]+0x00000040u; // 800C39E4
  c->lr=0x800C39ECu; f_8006F48C(c); // 800C39E8
  goto L_800C3B4C; // 800C39EC
L_800C39F0:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 800C39F0
  c->r[3]=c->r[28]|c->r[28]; // 800C39F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C39F8
  c->ctr=c->r[12]; // 800C39FC
  if (true) { c->lr=0x800C3A04u; dispatch(c,c->ctr); } // 800C3A00
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C3A04
  c->r[30]=0u+0xC8000000u; // 800C3A08
  c->r[3]=c->r[1]+0x00000018u; // 800C3A0C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800C3A10
  c->r[4]=c->r[30]+0x00000006u; // 800C3A14
  c->lr=0x800C3A1Cu; f_8003EDD0(c); // 800C3A18
  cmps(c,0,(int32_t)c->r[3],0); // 800C3A1C
  if (crb(c,2)) { goto L_800C3A30; } // 800C3A20
  {uint32_t ea=c->r[26]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3A24
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[0]);} // 800C3A28
  goto L_800C3B4C; // 800C3A2C
L_800C3A30:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 800C3A30
  c->r[3]=c->r[28]|c->r[28]; // 800C3A34
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3A38
  c->ctr=c->r[12]; // 800C3A3C
  if (true) { c->lr=0x800C3A44u; dispatch(c,c->ctr); } // 800C3A40
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C3A44
  c->r[5]=0u+0xD0000000u; // 800C3A48
  c->r[3]=c->r[1]+0x00000010u; // 800C3A4C
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C3A50
  c->r[4]=c->r[5]+0x00000022u; // 800C3A54
  c->lr=0x800C3A5Cu; f_8003EDD0(c); // 800C3A58
  cmps(c,0,(int32_t)c->r[3],0); // 800C3A5C
  if (crb(c,2)) { goto L_800C3A70; } // 800C3A60
  {uint32_t ea=c->r[26]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3A64
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[0]);} // 800C3A68
  goto L_800C3B4C; // 800C3A6C
L_800C3A70:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 800C3A70
  c->r[3]=c->r[28]|c->r[28]; // 800C3A74
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3A78
  c->ctr=c->r[12]; // 800C3A7C
  if (true) { c->lr=0x800C3A84u; dispatch(c,c->ctr); } // 800C3A80
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C3A84
  c->r[4]=c->r[30]+0x00000023u; // 800C3A88
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C3A8C
  c->r[3]=c->r[1]+0x00000008u; // 800C3A90
  c->lr=0x800C3A98u; f_8003EDD0(c); // 800C3A94
  cmps(c,0,(int32_t)c->r[3],0); // 800C3A98
  if (crb(c,2)) { goto L_800C3B4C; } // 800C3A9C
  {uint32_t ea=c->r[26]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3AA0
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[0]);} // 800C3AA4
  goto L_800C3B4C; // 800C3AA8
L_800C3AAC:;
  {uint32_t ea=c->r[26]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3AAC
  c->r[3]=c->r[27]+0x00000028u; // 800C3AB0
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[0]);} // 800C3AB4
  {uint32_t ea=c->r[26]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C3AB8
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C3ABC
  {uint32_t ea=c->r[26]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C3AC0
  c->lr=0x800C3AC8u; f_80065358(c); // 800C3AC4
  goto L_800C3B4C; // 800C3AC8
L_800C3ACC:;
  {uint32_t ea=c->r[26]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3ACC
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[0]);} // 800C3AD0
  goto L_800C3B4C; // 800C3AD4
L_800C3AD8:;
  c->r[3]=R32(c->r[28]+0x00000054u); // 800C3AD8
  cmps(c,0,(int32_t)c->r[3],0); // 800C3ADC
  if (crb(c,2)) { goto L_800C3AFC; } // 800C3AE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C3AE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C3AE8
  c->ctr=c->r[12]; // 800C3AEC
  if (true) { c->lr=0x800C3AF4u; dispatch(c,c->ctr); } // 800C3AF0
  c->r[30]=c->r[3]|c->r[3]; // 800C3AF4
  goto L_800C3B00; // 800C3AF8
L_800C3AFC:;
  c->r[30]=0u+0xFFFFFFFFu; // 800C3AFC
L_800C3B00:;
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3B00
  c->r[3]=R32(c->r[28]+0x00000050u); // 800C3B04
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3B08
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C3B0C
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[0]);} // 800C3B10
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C3B14
  c->r[29]=R32(c->r[1]+0x0000008Cu); // 800C3B18
  c->ctr=c->r[12]; // 800C3B1C
  if (true) { c->lr=0x800C3B24u; dispatch(c,c->ctr); } // 800C3B20
  c->r[4]=0u+0x803E0000u; // 800C3B24
  c->r[7]=c->r[3]|c->r[3]; // 800C3B28
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C3B2C
  c->r[6]=c->r[29]|c->r[29]; // 800C3B30
  c->r[3]=c->r[4]+0x00000017u; // 800C3B34
  c->r[8]=c->r[30]|c->r[30]; // 800C3B38
  c->r[5]=0u+0x00000A6Au; // 800C3B3C
  c->r[4]=c->r[4]+0x00000043u; // 800C3B40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3B44
  c->lr=0x800C3B4Cu; f_801CCA38(c); // 800C3B48
L_800C3B4C:;
  c->r[3]=0u+0x00000000u; // 800C3B4C
  c->r[0]=0u+0x00000007u; // 800C3B50
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800C3B54
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C3B58
  c->r[4]=c->r[1]+0x00000048u; // 800C3B5C
  c->ctr=c->r[0]; // 800C3B60
L_800C3B64:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C3B64
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C3B68
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C3B6C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C3B70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C3B64; } // 800C3B74
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C3B78
  c->r[11]=c->r[1]+0x000000B0u; // 800C3B7C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C3B80
  c->lr=0x800C3B88u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C3B84
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800C3B88
  c->lr=c->r[0]; // 800C3B8C
  c->r[1]=c->r[1]+0x000000B0u; // 800C3B90
  return; // 800C3B94
}

// fn_800C3B98
void f_800C3B98(Ctx* __restrict c) {
  trace_call(0x800C3B98u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3B98
  c->r[0]=c->lr; // 800C3B9C
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C3BA0
  c->r[11]=c->r[1]+0x00000080u; // 800C3BA4
  c->lr=0x800C3BACu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C3BA8
  c->r[26]=c->r[3]|c->r[3]; // 800C3BAC
  c->r[3]=c->r[5]|c->r[5]; // 800C3BB0
  c->r[27]=c->r[6]|c->r[6]; // 800C3BB4
  c->lr=0x800C3BBCu; f_80068A78(c); // 800C3BB8
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3BBC
  c->r[29]=c->r[3]|c->r[3]; // 800C3BC0
  c->r[28]=0u+0x00000000u; // 800C3BC4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3BC8
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800C3BCC
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 800C3BD0
  c->lr=0x800C3BD8u; f_800B5928(c); // 800C3BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800C3BD8
  if (crb(c,2)) { goto L_800C3BE8; } // 800C3BDC
  c->r[28]=R32(c->r[29]+0x00000054u); // 800C3BE0
  goto L_800C3C0C; // 800C3BE4
L_800C3BE8:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3BE8
  c->r[3]=c->r[29]|c->r[29]; // 800C3BEC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3BF0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800C3BF4
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 800C3BF8
  c->lr=0x800C3C00u; f_800760EC(c); // 800C3BFC
  cmps(c,0,(int32_t)c->r[3],0); // 800C3C00
  if (crb(c,2)) { goto L_800C3C0C; } // 800C3C04
  c->r[28]=R32(c->r[29]+0x00000050u); // 800C3C08
L_800C3C0C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800C3C0C
  if (crb(c,2)) { goto L_800C3D04; } // 800C3C10
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3C14
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3C18
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800C3C1C
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800C3C20
  cmps(c,0,(int32_t)c->r[0],14); // 800C3C24
  if (crb(c,2)) { goto L_800C3CFC; } // 800C3C28
  if (!crb(c,0)) { goto L_800C3C3C; } // 800C3C2C
  cmps(c,0,(int32_t)c->r[0],8); // 800C3C30
  if (crb(c,2)) { goto L_800C3C7C; } // 800C3C34
  goto L_800C3D04; // 800C3C38
L_800C3C3C:;
  cmps(c,0,(int32_t)c->r[0],16); // 800C3C3C
  if (crb(c,2)) { goto L_800C3C48; } // 800C3C40
  goto L_800C3D04; // 800C3C44
L_800C3C48:;
  c->r[3]=c->r[27]+0x0000003Cu; // 800C3C48
  c->lr=0x800C3C50u; f_800797C0(c); // 800C3C4C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C3C50
  c->r[3]=c->r[27]+0x00000078u; // 800C3C54
  c->r[0]=cntlz(c->r[0]); // 800C3C58
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C3C5C
  W8(c->r[28]+0x00000010u,c->r[0]); // 800C3C60
  c->lr=0x800C3C68u; f_800797C0(c); // 800C3C64
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C3C68
  c->r[0]=cntlz(c->r[0]); // 800C3C6C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C3C70
  W8(c->r[28]+0x00000011u,c->r[0]); // 800C3C74
  goto L_800C3D04; // 800C3C78
L_800C3C7C:;
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C3C7C
  c->r[3]=c->r[29]|c->r[29]; // 800C3C80
  c->r[30]=0u+0x00000001u; // 800C3C84
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3C88
  c->ctr=c->r[12]; // 800C3C8C
  if (true) { c->lr=0x800C3C94u; dispatch(c,c->ctr); } // 800C3C90
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C3C94
  c->r[31]=0u+0xC8000000u; // 800C3C98
  c->r[3]=c->r[1]+0x00000010u; // 800C3C9C
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C3CA0
  c->r[4]=c->r[31]+0x00000001u; // 800C3CA4
  c->lr=0x800C3CACu; f_8003EDD0(c); // 800C3CA8
  cmps(c,0,(int32_t)c->r[3],0); // 800C3CAC
  if (!crb(c,2)) { goto L_800C3CE8; } // 800C3CB0
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C3CB4
  c->r[3]=c->r[29]|c->r[29]; // 800C3CB8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3CBC
  c->ctr=c->r[12]; // 800C3CC0
  if (true) { c->lr=0x800C3CC8u; dispatch(c,c->ctr); } // 800C3CC4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C3CC8
  c->r[4]=c->r[31]+0x00000028u; // 800C3CCC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C3CD0
  c->r[3]=c->r[1]+0x00000008u; // 800C3CD4
  c->lr=0x800C3CDCu; f_8003EDD0(c); // 800C3CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800C3CDC
  if (!crb(c,2)) { goto L_800C3CE8; } // 800C3CE0
  c->r[30]=0u+0x00000000u; // 800C3CE4
L_800C3CE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C3CE8
  if (crb(c,2)) { goto L_800C3D04; } // 800C3CEC
  {uint32_t ea=c->r[27]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3CF0
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[0]);} // 800C3CF4
  goto L_800C3D04; // 800C3CF8
L_800C3CFC:;
  {uint32_t ea=c->r[27]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3CFC
  {uint32_t ea=c->r[28]+0x00000044u; WF32(ea,c->f[0]);} // 800C3D00
L_800C3D04:;
  c->r[3]=0u+0x00000000u; // 800C3D04
  c->r[0]=0u+0x00000007u; // 800C3D08
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C3D0C
  c->r[5]=c->r[26]+0xFFFFFFFCu; // 800C3D10
  c->r[4]=c->r[1]+0x00000014u; // 800C3D14
  c->ctr=c->r[0]; // 800C3D18
L_800C3D1C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C3D1C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C3D20
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C3D24
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C3D28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C3D1C; } // 800C3D2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C3D30
  c->r[11]=c->r[1]+0x00000080u; // 800C3D34
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C3D38
  c->lr=0x800C3D40u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C3D3C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C3D40
  c->lr=c->r[0]; // 800C3D44
  c->r[1]=c->r[1]+0x00000080u; // 800C3D48
  return; // 800C3D4C
}

// fn_800C3D50
void f_800C3D50(Ctx* __restrict c) {
  trace_call(0x800C3D50u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3D50
  c->r[0]=c->lr; // 800C3D54
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C3D58
  c->r[11]=c->r[1]+0x00000080u; // 800C3D5C
  c->lr=0x800C3D64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C3D60
  c->r[27]=c->r[3]|c->r[3]; // 800C3D64
  c->r[3]=c->r[5]|c->r[5]; // 800C3D68
  c->r[28]=c->r[6]|c->r[6]; // 800C3D6C
  c->lr=0x800C3D74u; f_80068A78(c); // 800C3D70
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3D74
  c->r[29]=c->r[3]|c->r[3]; // 800C3D78
  c->r[30]=0u+0x00000000u; // 800C3D7C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3D80
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800C3D84
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 800C3D88
  c->lr=0x800C3D90u; f_800B5928(c); // 800C3D8C
  cmps(c,0,(int32_t)c->r[3],0); // 800C3D90
  if (crb(c,2)) { goto L_800C3DA0; } // 800C3D94
  c->r[30]=R32(c->r[29]+0x00000054u); // 800C3D98
  goto L_800C3DC4; // 800C3D9C
L_800C3DA0:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3DA0
  c->r[3]=c->r[29]|c->r[29]; // 800C3DA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3DA8
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800C3DAC
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 800C3DB0
  c->lr=0x800C3DB8u; f_800760EC(c); // 800C3DB4
  cmps(c,0,(int32_t)c->r[3],0); // 800C3DB8
  if (crb(c,2)) { goto L_800C3DC4; } // 800C3DBC
  c->r[30]=R32(c->r[29]+0x00000050u); // 800C3DC0
L_800C3DC4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C3DC4
  if (crb(c,2)) { goto L_800C3E70; } // 800C3DC8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3DCC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3DD0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800C3DD4
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800C3DD8
  cmps(c,0,(int32_t)c->r[0],8); // 800C3DDC
  if (crb(c,2)) { goto L_800C3DE8; } // 800C3DE0
  goto L_800C3EE4; // 800C3DE4
L_800C3DE8:;
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C3DE8
  c->r[3]=c->r[29]|c->r[29]; // 800C3DEC
  c->r[30]=0u+0x00000001u; // 800C3DF0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3DF4
  c->ctr=c->r[12]; // 800C3DF8
  if (true) { c->lr=0x800C3E00u; dispatch(c,c->ctr); } // 800C3DFC
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C3E00
  c->r[31]=0u+0xC8000000u; // 800C3E04
  c->r[3]=c->r[1]+0x00000010u; // 800C3E08
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C3E0C
  c->r[4]=c->r[31]+0x00000001u; // 800C3E10
  c->lr=0x800C3E18u; f_8003EDD0(c); // 800C3E14
  cmps(c,0,(int32_t)c->r[3],0); // 800C3E18
  if (!crb(c,2)) { goto L_800C3E54; } // 800C3E1C
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C3E20
  c->r[3]=c->r[29]|c->r[29]; // 800C3E24
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C3E28
  c->ctr=c->r[12]; // 800C3E2C
  if (true) { c->lr=0x800C3E34u; dispatch(c,c->ctr); } // 800C3E30
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C3E34
  c->r[4]=c->r[31]+0x00000028u; // 800C3E38
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C3E3C
  c->r[3]=c->r[1]+0x00000008u; // 800C3E40
  c->lr=0x800C3E48u; f_8003EDD0(c); // 800C3E44
  cmps(c,0,(int32_t)c->r[3],0); // 800C3E48
  if (!crb(c,2)) { goto L_800C3E54; } // 800C3E4C
  c->r[30]=0u+0x00000000u; // 800C3E50
L_800C3E54:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C3E54
  if (crb(c,2)) { goto L_800C3EE4; } // 800C3E58
  {uint32_t ea=c->r[28]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E5C
  {uint32_t ea=c->r[29]+0x0000203Cu; WF32(ea,c->f[0]);} // 800C3E60
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E64
  {uint32_t ea=c->r[29]+0x00002044u; WF32(ea,c->f[0]);} // 800C3E68
  goto L_800C3EE4; // 800C3E6C
L_800C3E70:;
  c->r[3]=R32(c->r[29]+0x00000054u); // 800C3E70
  cmps(c,0,(int32_t)c->r[3],0); // 800C3E74
  if (crb(c,2)) { goto L_800C3E94; } // 800C3E78
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C3E7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C3E80
  c->ctr=c->r[12]; // 800C3E84
  if (true) { c->lr=0x800C3E8Cu; dispatch(c,c->ctr); } // 800C3E88
  c->r[31]=c->r[3]|c->r[3]; // 800C3E8C
  goto L_800C3E98; // 800C3E90
L_800C3E94:;
  c->r[31]=0u+0xFFFFFFFFu; // 800C3E94
L_800C3E98:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C3E98
  c->r[3]=R32(c->r[29]+0x00000050u); // 800C3E9C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C3EA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C3EA4
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 800C3EA8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C3EAC
  c->r[30]=R32(c->r[1]+0x0000005Cu); // 800C3EB0
  c->ctr=c->r[12]; // 800C3EB4
  if (true) { c->lr=0x800C3EBCu; dispatch(c,c->ctr); } // 800C3EB8
  c->r[4]=0u+0x803E0000u; // 800C3EBC
  c->r[7]=c->r[3]|c->r[3]; // 800C3EC0
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C3EC4
  c->r[6]=c->r[30]|c->r[30]; // 800C3EC8
  c->r[3]=c->r[4]+0x00000017u; // 800C3ECC
  c->r[8]=c->r[31]|c->r[31]; // 800C3ED0
  c->r[5]=0u+0x00000AD4u; // 800C3ED4
  c->r[4]=c->r[4]+0x00000043u; // 800C3ED8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3EDC
  c->lr=0x800C3EE4u; f_801CCA38(c); // 800C3EE0
L_800C3EE4:;
  c->r[3]=0u+0x00000000u; // 800C3EE4
  c->r[0]=0u+0x00000007u; // 800C3EE8
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C3EEC
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800C3EF0
  c->r[4]=c->r[1]+0x00000014u; // 800C3EF4
  c->ctr=c->r[0]; // 800C3EF8
L_800C3EFC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C3EFC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C3F00
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C3F04
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C3F08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C3EFC; } // 800C3F0C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C3F10
  c->r[11]=c->r[1]+0x00000080u; // 800C3F14
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C3F18
  c->lr=0x800C3F20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C3F1C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C3F20
  c->lr=c->r[0]; // 800C3F24
  c->r[1]=c->r[1]+0x00000080u; // 800C3F28
  return; // 800C3F2C
}

// fn_800C3F30
void f_800C3F30(Ctx* __restrict c) {
  trace_call(0x800C3F30u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3F30
  c->r[0]=c->lr; // 800C3F34
  W32(c->r[1]+0x00000104u,c->r[0]); // 800C3F38
  c->r[11]=c->r[1]+0x00000100u; // 800C3F3C
  c->lr=0x800C3F44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C3F40
  c->r[31]=c->r[1]|c->r[1]; // 800C3F44
  c->r[29]=c->r[5]|c->r[5]; // 800C3F48
  c->r[27]=c->r[3]|c->r[3]; // 800C3F4C
  c->r[28]=c->r[6]|c->r[6]; // 800C3F50
  c->r[3]=c->r[29]|c->r[29]; // 800C3F54
  c->lr=0x800C3F5Cu; f_80068A78(c); // 800C3F58
  c->r[0]=R32(c->r[3]+0x00000054u); // 800C3F5C
  c->r[30]=c->r[3]|c->r[3]; // 800C3F60
  cmps(c,0,(int32_t)c->r[0],0); // 800C3F64
  if (crb(c,2)) { goto L_800C3FBC; } // 800C3F68
  c->r[3]=c->r[0]|c->r[0]; // 800C3F6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C3F70
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C3F74
  c->ctr=c->r[12]; // 800C3F78
  if (true) { c->lr=0x800C3F80u; dispatch(c,c->ctr); } // 800C3F7C
  c->lr=0x800C3F84u; f_8007A658(c); // 800C3F80
  c->r[26]=c->r[3]|c->r[3]; // 800C3F84
  c->r[3]=0u+0x0000000Eu; // 800C3F88
  c->lr=0x800C3F90u; f_8007A658(c); // 800C3F8C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800C3F90
  if (!crb(c,1)) { goto L_800C3FB4; } // 800C3F94
  c->r[26]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[26]); // 800C3F98
  if (crb(c,2)) { goto L_800C3FAC; } // 800C3F9C
  W32(c->r[31]+0x00000074u,c->r[1]); // 800C3FA0
  c->r[3]=c->r[26]|c->r[26]; // 800C3FA4
  c->lr=0x800C3FACu; f_800B5570(c); // 800C3FA8
L_800C3FAC:;
  W32(c->r[30]+0x00000058u,c->r[26]); // 800C3FAC
  goto L_800C3FF4; // 800C3FB0
L_800C3FB4:;
  c->r[0]=0u+0x00000000u; // 800C3FB4
  W32(c->r[30]+0x00000054u,c->r[0]); // 800C3FB8
L_800C3FBC:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 800C3FBC
  c->r[0]=c->r[3]+0x00000001u; // 800C3FC0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C3FC4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800C3FC8
  c->r[0]=c->r[0]^c->r[3]; // 800C3FCC
  c->r[0]=c->r[0]-c->r[3]; // 800C3FD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800C3FD4
  c->r[0]=c->r[30]+c->r[0]; // 800C3FD8
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800C3FDC
  if (crb(c,2)) { goto L_800C3FF0; } // 800C3FE0
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 800C3FE4
  c->r[3]=c->r[26]|c->r[26]; // 800C3FE8
  c->lr=0x800C3FF0u; f_800B5570(c); // 800C3FEC
L_800C3FF0:;
  W32(c->r[30]+0x00000054u,c->r[26]); // 800C3FF0
L_800C3FF4:;
  c->r[3]=c->r[30]+0x000008ECu; // 800C3FF4
  c->r[4]=c->r[28]+0x00000004u; // 800C3FF8
  c->lr=0x800C4000u; f_80075440(c); // 800C3FFC
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4000
  W32(c->r[26]+0x00000034u,c->r[3]); // 800C4004
  c->r[3]=c->r[31]+0x0000003Cu; // 800C4008
  c->f[2]=c->f[1]; // 800C400C
  c->f[3]=c->f[1]; // 800C4010
  c->lr=0x800C4018u; f_800521A0(c); // 800C4014
  c->r[3]=R32(c->r[29]+0x00000008u); // 800C4018
  cmps(c,0,(int32_t)c->r[3],0); // 800C401C
  if (crb(c,2)) { goto L_800C40D8; } // 800C4020
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4024
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C4028
  c->ctr=c->r[12]; // 800C402C
  if (true) { c->lr=0x800C4034u; dispatch(c,c->ctr); } // 800C4030
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C4034
  if (crb(c,2)) { goto L_800C40D8; } // 800C4038
  c->r[29]=R32(c->r[29]+0x00000008u); // 800C403C
  c->r[12]=R32(c->r[29]+0x00000000u); // 800C4040
  c->r[3]=c->r[29]|c->r[29]; // 800C4044
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C4048
  c->ctr=c->r[12]; // 800C404C
  if (true) { c->lr=0x800C4054u; dispatch(c,c->ctr); } // 800C4050
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C4054
  if (crb(c,2)) { goto L_800C40D8; } // 800C4058
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800C405C
  c->r[4]=c->r[30]+0x000008D0u; // 800C4060
  c->r[3]=c->r[31]+0x00000078u; // 800C4064
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C4068
  c->ctr=c->r[12]; // 800C406C
  if (true) { c->lr=0x800C4074u; dispatch(c,c->ctr); } // 800C4070
  c->r[3]=c->r[31]+0x00000030u; // 800C4074
  c->r[4]=c->r[31]+0x00000078u; // 800C4078
  c->lr=0x800C4080u; f_80032FD8(c); // 800C407C
  c->r[3]=c->r[31]+0x00000024u; // 800C4080
  c->r[4]=c->r[31]+0x00000030u; // 800C4084
  c->r[5]=c->r[29]+0x00000158u; // 800C4088
  c->lr=0x800C4090u; f_80064C74(c); // 800C408C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4090
  c->r[3]=c->r[31]+0x0000003Cu; // 800C4094
  c->r[4]=c->r[31]+0x00000024u; // 800C4098
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800C409C
  c->lr=0x800C40A4u; f_8003F468(c); // 800C40A0
  c->r[3]=c->r[31]+0x0000003Cu; // 800C40A4
  c->lr=0x800C40ACu; f_80065368(c); // 800C40A8
  cmps(c,0,(int32_t)c->r[3],0); // 800C40AC
  if (crb(c,2)) { goto L_800C40CC; } // 800C40B0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C40B4
  c->r[3]=c->r[31]+0x0000003Cu; // 800C40B8
  c->f[2]=c->f[1]; // 800C40BC
  c->f[3]=c->f[1]; // 800C40C0
  c->lr=0x800C40C8u; f_80065358(c); // 800C40C4
  goto L_800C40D8; // 800C40C8
L_800C40CC:;
  c->r[3]=c->r[31]+0x0000003Cu; // 800C40CC
  c->r[4]=c->r[3]|c->r[3]; // 800C40D0
  c->lr=0x800C40D8u; f_80265750(c); // 800C40D4
L_800C40D8:;
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C40D8
  c->r[3]=c->r[31]+0x00000018u; // 800C40DC
  c->r[4]=c->r[31]+0x0000003Cu; // 800C40E0
  c->lr=0x800C40E8u; f_80064C58(c); // 800C40E4
  c->r[3]=c->r[26]+0x00000048u; // 800C40E8
  c->r[4]=c->r[31]+0x00000018u; // 800C40EC
  c->lr=0x800C40F4u; f_8003F468(c); // 800C40F0
  c->r[0]=0u+0x00000003u; // 800C40F4
  c->r[3]=c->r[31]+0x00000008u; // 800C40F8
  W32(c->r[30]+0x0000105Cu,c->r[0]); // 800C40FC
  c->r[4]=c->r[28]+0x0000007Cu; // 800C4100
  c->r[5]=R32(c->r[30]+0x000008D8u); // 800C4104
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800C4108
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C410C
  c->lr=0x800C4114u; f_80365B94(c); // 800C4110
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800C4114
  c->r[3]=c->r[31]+0x00000010u; // 800C4118
  c->r[4]=c->r[28]+0x00000040u; // 800C411C
  c->r[5]=R32(c->r[30]+0x000008D8u); // 800C4120
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800C4124
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C4128
  c->lr=0x800C4130u; f_80365B94(c); // 800C412C
  W32(c->r[31]+0x00000014u,c->r[3]); // 800C4130
  c->r[3]=c->r[31]+0x0000000Cu; // 800C4134
  c->lr=0x800C413Cu; f_800772D8(c); // 800C4138
  c->r[28]=c->r[3]|c->r[3]; // 800C413C
  c->r[3]=c->r[31]+0x00000014u; // 800C4140
  c->lr=0x800C4148u; f_800772D8(c); // 800C4144
  c->r[4]=c->r[3]|c->r[3]; // 800C4148
  c->r[5]=c->r[28]|c->r[28]; // 800C414C
  c->r[3]=c->r[30]+0x00001054u; // 800C4150
  c->r[6]=0u+0x00000000u; // 800C4154
  c->lr=0x800C415Cu; f_80181524(c); // 800C4158
  c->r[3]=0u+0x00000000u; // 800C415C
  c->r[0]=0u+0x00000007u; // 800C4160
  W32(c->r[31]+0x000000A8u,c->r[3]); // 800C4164
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800C4168
  c->r[4]=c->r[31]+0x000000A4u; // 800C416C
  c->ctr=c->r[0]; // 800C4170
L_800C4174:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4174
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4178
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C417C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4180
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4174; } // 800C4184
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4188
  c->r[10]=c->r[31]|c->r[31]; // 800C418C
  c->r[11]=c->r[10]+0x00000100u; // 800C4190
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4194
  c->lr=0x800C419Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4198
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C419C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C41A0
  c->r[1]=c->r[10]|c->r[10]; // 800C41A4
  c->lr=c->r[0]; // 800C41A8
  return; // 800C41AC
}

// fn_800C41B0
void f_800C41B0(Ctx* __restrict c) {
  trace_call(0x800C41B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C41B0
  c->r[0]=c->lr; // 800C41B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C41B8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C41BC
  c->r[31]=c->r[3]|c->r[3]; // 800C41C0
  c->r[3]=c->r[5]|c->r[5]; // 800C41C4
  c->lr=0x800C41CCu; f_80068A78(c); // 800C41C8
  c->r[4]=c->r[3]|c->r[3]; // 800C41CC
  c->r[3]=c->r[1]+0x00000008u; // 800C41D0
  c->r[6]=R32(c->r[4]+0x000008CCu); // 800C41D4
  c->r[4]=R32(c->r[4]+0x000008C4u); // 800C41D8
  c->r[5]=sraw(c,c->r[6],31); // 800C41DC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800C41E0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800C41E4
  c->r[0]=addc(c,~c->r[0],c->r[6],1); // 800C41E8
  c->r[4]=addc(c,c->r[5],c->r[4],c->xer_ca); // 800C41EC
  c->lr=0x800C41F4u; f_800BDBB4(c); // 800C41F0
  c->r[0]=0u+0x00000007u; // 800C41F4
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C41F8
  c->r[4]=c->r[1]+0x00000004u; // 800C41FC
  c->ctr=c->r[0]; // 800C4200
L_800C4204:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4204
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4208
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C420C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4210
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4204; } // 800C4214
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4218
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C421C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C4220
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C4224
  c->lr=c->r[0]; // 800C4228
  c->r[1]=c->r[1]+0x00000050u; // 800C422C
  return; // 800C4230
}

// fn_800C4234
void f_800C4234(Ctx* __restrict c) {
  trace_call(0x800C4234u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4234
  c->r[0]=c->lr; // 800C4238
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C423C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C4240
  c->r[31]=c->r[3]|c->r[3]; // 800C4244
  c->r[3]=c->r[5]|c->r[5]; // 800C4248
  c->lr=0x800C4250u; f_80068A78(c); // 800C424C
  c->r[4]=R32(c->r[3]+0x000008C4u); // 800C4250
  c->r[6]=0u+0x00000000u; // 800C4254
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4258
  c->r[0]=0u+0x00000007u; // 800C425C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800C4260
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C4264
  W32(c->r[3]+0x000008CCu,c->r[4]); // 800C4268
  c->r[4]=c->r[1]+0x00000004u; // 800C426C
  {uint32_t ea=c->r[3]+0x000008C8u; WF32(ea,c->f[0]);} // 800C4270
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C4274
  c->ctr=c->r[0]; // 800C4278
L_800C427C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C427C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4280
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4284
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4288
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C427C; } // 800C428C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4290
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4294
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C4298
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C429C
  c->lr=c->r[0]; // 800C42A0
  c->r[1]=c->r[1]+0x00000050u; // 800C42A4
  return; // 800C42A8
}

// fn_800C42AC
void f_800C42AC(Ctx* __restrict c) {
  trace_call(0x800C42ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C42AC
  c->r[0]=c->lr; // 800C42B0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C42B4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C42B8
  c->r[31]=c->r[6]|c->r[6]; // 800C42BC
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C42C0
  c->r[30]=c->r[3]|c->r[3]; // 800C42C4
  c->r[3]=c->r[5]|c->r[5]; // 800C42C8
  c->lr=0x800C42D0u; f_80068A78(c); // 800C42CC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C42D0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C42D4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C42D8
  c->r[5]=R32(c->r[1]+0x0000004Cu); // 800C42DC
  cmps(c,0,(int32_t)c->r[5],0); // 800C42E0
  if (!crb(c,0)) { goto L_800C42FC; } // 800C42E4
  c->r[4]=R32(c->r[3]+0x000008C4u); // 800C42E8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800C42EC
  c->r[0]=c->r[0]-c->r[5]; // 800C42F0
  W32(c->r[3]+0x000008CCu,c->r[0]); // 800C42F4
  goto L_800C4300; // 800C42F8
L_800C42FC:;
  W32(c->r[3]+0x000008CCu,c->r[5]); // 800C42FC
L_800C4300:;
  c->r[4]=R32(c->r[3]+0x000008C4u); // 800C4300
  c->r[0]=R32(c->r[3]+0x000008CCu); // 800C4304
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800C4308
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800C430C
  if (!crb(c,1)) { goto L_800C4318; } // 800C4310
  W32(c->r[3]+0x000008CCu,c->r[4]); // 800C4314
L_800C4318:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4318
  c->r[6]=0u+0x00000000u; // 800C431C
  c->r[0]=0u+0x00000007u; // 800C4320
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C4324
  {uint32_t ea=c->r[3]+0x000008C8u; WF32(ea,c->f[0]);} // 800C4328
  c->r[4]=c->r[1]+0x00000004u; // 800C432C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C4330
  c->ctr=c->r[0]; // 800C4334
L_800C4338:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4338
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C433C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4340
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4344
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4338; } // 800C4348
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C434C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4350
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C4354
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C4358
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C435C
  c->lr=c->r[0]; // 800C4360
  c->r[1]=c->r[1]+0x00000060u; // 800C4364
  return; // 800C4368
}

// fn_800C436C
void f_800C436C(Ctx* __restrict c) {
  trace_call(0x800C436Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C436C
  c->r[0]=c->lr; // 800C4370
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C4374
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C4378
  c->r[31]=c->r[3]|c->r[3]; // 800C437C
  c->r[3]=c->r[5]|c->r[5]; // 800C4380
  c->lr=0x800C4388u; f_80068A78(c); // 800C4384
  c->r[0]=0u+0x00000001u; // 800C4388
  c->r[6]=0u+0x43300000u; // 800C438C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C4390
  c->r[0]=0u+0x00000007u; // 800C4394
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C4398
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C439C
  c->r[3]=R32(c->r[3]+0x000008C4u); // 800C43A0
  c->r[4]=c->r[1]+0x00000004u; // 800C43A4
  W32(c->r[1]+0x00000048u,c->r[6]); // 800C43A8
  c->r[3]=c->r[3]^0x80000000u; // 800C43AC
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800C43B0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C43B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C43B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C43BC
  c->ctr=c->r[0]; // 800C43C0
L_800C43C4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C43C4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C43C8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C43CC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C43D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C43C4; } // 800C43D4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C43D8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C43DC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C43E0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C43E4
  c->lr=c->r[0]; // 800C43E8
  c->r[1]=c->r[1]+0x00000060u; // 800C43EC
  return; // 800C43F0
}

// fn_800C43F4
void f_800C43F4(Ctx* __restrict c) {
  trace_call(0x800C43F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C43F4
  c->r[0]=c->lr; // 800C43F8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C43FC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C4400
  c->r[31]=c->r[3]|c->r[3]; // 800C4404
  c->r[3]=c->r[5]|c->r[5]; // 800C4408
  c->lr=0x800C4410u; f_80068A78(c); // 800C440C
  c->r[0]=0u+0x00000001u; // 800C4410
  c->r[6]=0u+0x43300000u; // 800C4414
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C4418
  c->r[0]=0u+0x00000007u; // 800C441C
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C4420
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C4424
  c->r[3]=R32(c->r[3]+0x000008CCu); // 800C4428
  c->r[4]=c->r[1]+0x00000004u; // 800C442C
  W32(c->r[1]+0x00000048u,c->r[6]); // 800C4430
  c->r[3]=c->r[3]^0x80000000u; // 800C4434
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800C4438
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C443C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C4440
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C4444
  c->ctr=c->r[0]; // 800C4448
L_800C444C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C444C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4450
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4454
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4458
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C444C; } // 800C445C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4460
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4464
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C4468
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C446C
  c->lr=c->r[0]; // 800C4470
  c->r[1]=c->r[1]+0x00000060u; // 800C4474
  return; // 800C4478
}

// fn_800C447C
void f_800C447C(Ctx* __restrict c) {
  trace_call(0x800C447Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C447C
  c->r[0]=c->lr; // 800C4480
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800C4484
  c->r[11]=c->r[1]+0x000000C0u; // 800C4488
  c->lr=0x800C4490u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C448C
  c->r[0]=0u+0x43300000u; // 800C4490
  c->r[29]=c->r[3]|c->r[3]; // 800C4494
  W32(c->r[1]+0x00000080u,c->r[0]); // 800C4498
  c->r[3]=c->r[5]|c->r[5]; // 800C449C
  c->r[25]=c->r[6]|c->r[6]; // 800C44A0
  W32(c->r[1]+0x00000088u,c->r[0]); // 800C44A4
  c->lr=0x800C44ACu; f_80068A78(c); // 800C44A8
  c->r[31]=R32(c->r[3]+0x000008C4u); // 800C44AC
  c->r[28]=c->r[3]|c->r[3]; // 800C44B0
  c->r[30]=R32(c->r[3]+0x000008CCu); // 800C44B4
  c->r[27]=0u+0x00000000u; // 800C44B8
  c->r[26]=0u+0x00000000u; // 800C44BC
  goto L_800C44E4; // 800C44C0
L_800C44C4:;
  c->r[4]=c->r[26]|c->r[26]; // 800C44C4
  c->r[3]=c->r[28]+0x000008A4u; // 800C44C8
  c->lr=0x800C44D0u; f_800772A8(c); // 800C44CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C44D0
  cmps(c,0,(int32_t)c->r[0],1); // 800C44D4
  if (!crb(c,2)) { goto L_800C44E0; } // 800C44D8
  c->r[27]=c->r[27]+0x00000001u; // 800C44DC
L_800C44E0:;
  c->r[26]=c->r[26]+0x00000001u; // 800C44E0
L_800C44E4:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[31]); // 800C44E4
  if (crb(c,0)) { IRQCHK(c); goto L_800C44C4; } // 800C44E8
  cmps(c,0,(int32_t)c->r[27],0); // 800C44EC
  if (!crb(c,2)) { goto L_800C4548; } // 800C44F0
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800C44F4
  c->r[3]=0u+0x00000001u; // 800C44F8
  c->r[0]=c->r[0]^0x80000000u; // 800C44FC
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C4500
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C4504
  c->r[0]=0u+0x00000007u; // 800C4508
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C450C
  c->r[4]=c->r[1]+0x00000040u; // 800C4510
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 800C4514
  W32(c->r[1]+0x00000044u,c->r[3]); // 800C4518
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C451C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800C4520
  c->ctr=c->r[0]; // 800C4524
L_800C4528:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4528
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C452C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4530
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4534
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4528; } // 800C4538
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C453C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4540
  goto L_800C4630; // 800C4544
L_800C4548:;
  c->r[3]=c->r[30]+c->r[31]; // 800C4548
  c->r[0]=c->r[27]^0x80000000u; // 800C454C
  c->r[3]=c->r[3]+0x00000001u; // 800C4550
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 800C4554
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 800C4558
  c->r[4]=c->r[30]^0x80000000u; // 800C455C
  W32(c->r[1]+0x00000084u,c->r[4]); // 800C4560
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[3]=RF64(ea);} // 800C4564
  c->r[4]=0u+0x00000001u; // 800C4568
  {uint32_t ea=c->r[1]+0x00000088u; c->f[2]=RF64(ea);} // 800C456C
  {uint32_t ea=c->r[25]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4570
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C4574
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 800C4578
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 800C457C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C4580
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800C4584
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800C4588
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C458C
  c->r[26]=c->r[3]-c->r[0]; // 800C4590
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800C4594
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[0]);} // 800C4598
  c->r[27]=R32(c->r[1]+0x00000094u); // 800C459C
  goto L_800C45FC; // 800C45A0
L_800C45A4:;
  c->r[4]=c->r[26]|c->r[26]; // 800C45A4
  c->r[3]=c->r[28]+0x000008A4u; // 800C45A8
  c->lr=0x800C45B0u; f_800772A8(c); // 800C45AC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C45B0
  cmps(c,0,(int32_t)c->r[0],0); // 800C45B4
  if (crb(c,2)) { goto L_800C45E8; } // 800C45B8
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 800C45BC
  if (crb(c,1)) { goto L_800C45E8; } // 800C45C0
  c->r[0]=c->r[26]^0x80000000u; // 800C45C4
  c->r[3]=0u+0x00000001u; // 800C45C8
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 800C45CC
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C45D0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 800C45D4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C45D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C45DC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C45E0
  goto L_800C4604; // 800C45E4
L_800C45E8:;
  c->r[3]=c->r[26]+c->r[31]; // 800C45E8
  c->r[3]=c->r[3]+0x00000001u; // 800C45EC
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 800C45F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 800C45F4
  c->r[26]=c->r[3]-c->r[0]; // 800C45F8
L_800C45FC:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[30]); // 800C45FC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C45A4; } // 800C4600
L_800C4604:;
  c->r[0]=0u+0x00000007u; // 800C4604
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C4608
  c->r[4]=c->r[1]+0x00000004u; // 800C460C
  c->ctr=c->r[0]; // 800C4610
L_800C4614:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4614
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4618
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C461C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4620
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4614; } // 800C4624
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4628
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C462C
L_800C4630:;
  c->r[11]=c->r[1]+0x000000C0u; // 800C4630
  c->lr=0x800C4638u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4634
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800C4638
  c->lr=c->r[0]; // 800C463C
  c->r[1]=c->r[1]+0x000000C0u; // 800C4640
  return; // 800C4644
}

// fn_800C4648
void f_800C4648(Ctx* __restrict c) {
  trace_call(0x800C4648u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4648
  c->r[0]=c->lr; // 800C464C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800C4650
  c->r[11]=c->r[1]+0x000000D0u; // 800C4654
  c->lr=0x800C465Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4658
  c->r[31]=c->r[3]|c->r[3]; // 800C465C
  c->r[3]=c->r[5]|c->r[5]; // 800C4660
  c->r[25]=c->r[6]|c->r[6]; // 800C4664
  c->lr=0x800C466Cu; f_80068A78(c); // 800C4668
  c->r[27]=R32(c->r[3]+0x000008C4u); // 800C466C
  c->r[30]=c->r[3]|c->r[3]; // 800C4670
  c->r[29]=0u+0xFFFFFFFFu; // 800C4674
  c->r[28]=0u+0x00000000u; // 800C4678
  c->r[26]=0u+0x00000000u; // 800C467C
  goto L_800C46B0; // 800C4680
L_800C4684:;
  c->r[4]=c->r[26]|c->r[26]; // 800C4684
  c->r[3]=c->r[30]+0x000008A4u; // 800C4688
  c->lr=0x800C4690u; f_800772A8(c); // 800C468C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C4690
  cmps(c,0,(int32_t)c->r[0],1); // 800C4694
  if (!crb(c,2)) { goto L_800C46AC; } // 800C4698
  cmps(c,0,(int32_t)c->r[29],0); // 800C469C
  if (!crb(c,0)) { goto L_800C46A8; } // 800C46A0
  c->r[29]=c->r[26]|c->r[26]; // 800C46A4
L_800C46A8:;
  c->r[28]=c->r[28]+0x00000001u; // 800C46A8
L_800C46AC:;
  c->r[26]=c->r[26]+0x00000001u; // 800C46AC
L_800C46B0:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 800C46B0
  if (crb(c,0)) { IRQCHK(c); goto L_800C4684; } // 800C46B4
  cmpu(c,0,c->r[28],0x00000001u); // 800C46B8
  if (crb(c,1)) { goto L_800C4700; } // 800C46BC
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C46C0
  c->r[3]=0u+0x00000001u; // 800C46C4
  c->r[0]=0u+0x00000007u; // 800C46C8
  W32(c->r[1]+0x00000068u,c->r[3]); // 800C46CC
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C46D0
  c->r[4]=c->r[1]+0x00000064u; // 800C46D4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C46D8
  c->ctr=c->r[0]; // 800C46DC
L_800C46E0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C46E0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C46E4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C46E8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C46EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C46E0; } // 800C46F0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C46F4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C46F8
  goto L_800C484C; // 800C46FC
L_800C4700:;
  c->r[0]=R32(c->r[30]+0x000008CCu); // 800C4700
  cmps(c,0,(int32_t)c->r[0],0); // 800C4704
  if (!crb(c,2)) { goto L_800C4754; } // 800C4708
  cmps(c,0,(int32_t)c->r[29],0); // 800C470C
  if (crb(c,2)) { goto L_800C4754; } // 800C4710
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4714
  c->r[3]=0u+0x00000001u; // 800C4718
  c->r[0]=0u+0x00000007u; // 800C471C
  W32(c->r[1]+0x00000068u,c->r[3]); // 800C4720
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C4724
  c->r[4]=c->r[1]+0x00000064u; // 800C4728
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C472C
  c->ctr=c->r[0]; // 800C4730
L_800C4734:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4734
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4738
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C473C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4740
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4734; } // 800C4744
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4748
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C474C
  goto L_800C484C; // 800C4750
L_800C4754:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 800C4754
  c->r[3]=c->r[30]|c->r[30]; // 800C4758
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C475C
  c->ctr=c->r[12]; // 800C4760
  if (true) { c->lr=0x800C4768u; dispatch(c,c->ctr); } // 800C4764
  c->r[4]=c->r[3]|c->r[3]; // 800C4768
  c->r[3]=c->r[1]+0x00000038u; // 800C476C
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C4770
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C4774
  c->ctr=c->r[12]; // 800C4778
  if (true) { c->lr=0x800C4780u; dispatch(c,c->ctr); } // 800C477C
  c->r[3]=c->r[1]+0x00000038u; // 800C4780
  c->r[4]=c->r[1]+0x00000008u; // 800C4784
  c->lr=0x800C478Cu; f_80264994(c); // 800C4788
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C478C
  c->r[5]=R32(c->r[30]+0x000008CCu); // 800C4790
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C4794
  c->r[0]=R32(c->r[30]+0x000008C4u); // 800C4798
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 800C479C
  c->r[4]=R32(c->r[1]+0x000000ACu); // 800C47A0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 800C47A4
  if (!crb(c,1)) { goto L_800C47E8; } // 800C47A8
  c->r[0]=c->r[0]-c->r[4]; // 800C47AC
  c->r[3]=c->r[4]-c->r[5]; // 800C47B0
  c->r[0]=c->r[5]+c->r[0]; // 800C47B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C47B8
  if (!crb(c,1)) { goto L_800C47D4; } // 800C47BC
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C47C0
  c->r[0]=0u+0x00000001u; // 800C47C4
  W32(c->r[1]+0x00000068u,c->r[0]); // 800C47C8
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C47CC
  goto L_800C4820; // 800C47D0
L_800C47D4:;
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C47D4
  c->r[0]=0u+0x00000001u; // 800C47D8
  W32(c->r[1]+0x00000068u,c->r[0]); // 800C47DC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C47E0
  goto L_800C4820; // 800C47E4
L_800C47E8:;
  c->r[0]=c->r[0]-c->r[5]; // 800C47E8
  c->r[3]=c->r[5]-c->r[4]; // 800C47EC
  c->r[0]=c->r[4]+c->r[0]; // 800C47F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C47F4
  if (!crb(c,1)) { goto L_800C4810; } // 800C47F8
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C47FC
  c->r[0]=0u+0x00000001u; // 800C4800
  W32(c->r[1]+0x00000068u,c->r[0]); // 800C4804
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C4808
  goto L_800C4820; // 800C480C
L_800C4810:;
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4810
  c->r[0]=0u+0x00000001u; // 800C4814
  W32(c->r[1]+0x00000068u,c->r[0]); // 800C4818
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C481C
L_800C4820:;
  c->r[0]=0u+0x00000007u; // 800C4820
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C4824
  c->r[4]=c->r[1]+0x00000064u; // 800C4828
  c->ctr=c->r[0]; // 800C482C
L_800C4830:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4830
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4834
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4838
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C483C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4830; } // 800C4840
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4844
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4848
L_800C484C:;
  c->r[11]=c->r[1]+0x000000D0u; // 800C484C
  c->lr=0x800C4854u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4850
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800C4854
  c->lr=c->r[0]; // 800C4858
  c->r[1]=c->r[1]+0x000000D0u; // 800C485C
  return; // 800C4860
}

// fn_800C4864
void f_800C4864(Ctx* __restrict c) {
  trace_call(0x800C4864u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4864
  c->r[0]=c->lr; // 800C4868
  W32(c->r[1]+0x00000114u,c->r[0]); // 800C486C
  c->r[11]=c->r[1]+0x00000110u; // 800C4870
  c->lr=0x800C4878u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4874
  c->r[29]=c->r[3]|c->r[3]; // 800C4878
  c->r[3]=c->r[5]|c->r[5]; // 800C487C
  c->r[30]=c->r[6]|c->r[6]; // 800C4880
  c->lr=0x800C4888u; f_80068A78(c); // 800C4884
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C4888
  c->r[31]=c->r[3]|c->r[3]; // 800C488C
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C4890
  c->ctr=c->r[12]; // 800C4894
  if (true) { c->lr=0x800C489Cu; dispatch(c,c->ctr); } // 800C4898
  c->r[4]=c->r[3]|c->r[3]; // 800C489C
  c->r[3]=c->r[1]+0x00000080u; // 800C48A0
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C48A4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C48A8
  c->ctr=c->r[12]; // 800C48AC
  if (true) { c->lr=0x800C48B4u; dispatch(c,c->ctr); } // 800C48B0
  c->r[3]=c->r[1]+0x00000080u; // 800C48B4
  c->r[4]=c->r[1]+0x00000050u; // 800C48B8
  c->lr=0x800C48C0u; f_80264994(c); // 800C48BC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C48C0
  c->r[3]=c->r[1]+0x00000020u; // 800C48C4
  c->r[6]=R32(c->r[31]+0x000008C4u); // 800C48C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C48CC
  c->r[0]=R32(c->r[31]+0x000008CCu); // 800C48D0
  c->r[4]=R32(c->r[31]+0x000008A4u); // 800C48D4
  c->r[0]=c->r[6]+c->r[0]; // 800C48D8
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[0]);} // 800C48DC
  c->r[5]=R32(c->r[1]+0x000000F4u); // 800C48E0
  c->r[5]=c->r[5]+c->r[0]; // 800C48E4
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 800C48E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800C48EC
  c->r[0]=c->r[5]-c->r[0]; // 800C48F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800C48F4
  c->r[4]=c->r[4]+c->r[0]; // 800C48F8
  c->lr=0x800C4900u; f_800B7AEC(c); // 800C48FC
  c->r[3]=c->r[1]+0x00000014u; // 800C4900
  c->r[4]=c->r[1]+0x00000020u; // 800C4904
  c->lr=0x800C490Cu; f_80032FD8(c); // 800C4908
  c->r[3]=c->r[1]+0x00000050u; // 800C490C
  c->r[4]=c->r[1]+0x00000014u; // 800C4910
  c->r[5]=c->r[1]+0x00000008u; // 800C4914
  c->lr=0x800C491Cu; f_802652E8(c); // 800C4918
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C491C
  c->r[3]=0u+0x00000001u; // 800C4920
  c->r[0]=0u+0x00000007u; // 800C4924
  W32(c->r[1]+0x000000B0u,c->r[3]); // 800C4928
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C492C
  c->r[4]=c->r[1]+0x000000ACu; // 800C4930
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 800C4934
  c->ctr=c->r[0]; // 800C4938
L_800C493C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C493C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4940
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4944
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4948
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C493C; } // 800C494C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4950
  c->r[11]=c->r[1]+0x00000110u; // 800C4954
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4958
  c->lr=0x800C4960u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C495C
  c->r[0]=R32(c->r[1]+0x00000114u); // 800C4960
  c->lr=c->r[0]; // 800C4964
  c->r[1]=c->r[1]+0x00000110u; // 800C4968
  return; // 800C496C
}

// fn_800C4970
void f_800C4970(Ctx* __restrict c) {
  trace_call(0x800C4970u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4970
  c->r[0]=c->lr; // 800C4974
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C4978
  c->r[11]=c->r[1]+0x00000060u; // 800C497C
  c->lr=0x800C4984u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4980
  c->r[30]=c->r[5]|c->r[5]; // 800C4984
  c->r[29]=c->r[3]|c->r[3]; // 800C4988
  c->r[3]=c->r[30]|c->r[30]; // 800C498C
  c->lr=0x800C4994u; f_80068A78(c); // 800C4990
  c->r[31]=c->r[3]|c->r[3]; // 800C4994
  c->r[3]=c->r[30]|c->r[30]; // 800C4998
  c->lr=0x800C49A0u; f_80068A78(c); // 800C499C
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C49A0
  c->r[3]=0u+0x00000001u; // 800C49A4
  {uint32_t ea=c->r[31]+0x000003A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C49A8
  c->r[0]=0u+0x00000007u; // 800C49AC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C49B0
  c->r[4]=c->r[1]+0x00000004u; // 800C49B4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800C49B8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C49BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C49C0
  c->ctr=c->r[0]; // 800C49C4
L_800C49C8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C49C8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C49CC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C49D0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C49D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C49C8; } // 800C49D8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C49DC
  c->r[11]=c->r[1]+0x00000060u; // 800C49E0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C49E4
  c->lr=0x800C49ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C49E8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C49EC
  c->lr=c->r[0]; // 800C49F0
  c->r[1]=c->r[1]+0x00000060u; // 800C49F4
  return; // 800C49F8
}

// fn_800C49FC
void f_800C49FC(Ctx* __restrict c) {
  trace_call(0x800C49FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C49FC
  c->r[0]=c->lr; // 800C4A00
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C4A04
  c->r[11]=c->r[1]+0x00000060u; // 800C4A08
  c->lr=0x800C4A10u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4A0C
  c->r[30]=c->r[5]|c->r[5]; // 800C4A10
  c->r[28]=c->r[3]|c->r[3]; // 800C4A14
  c->r[29]=c->r[6]|c->r[6]; // 800C4A18
  c->r[3]=c->r[30]|c->r[30]; // 800C4A1C
  c->lr=0x800C4A24u; f_80068A78(c); // 800C4A20
  c->r[31]=c->r[3]|c->r[3]; // 800C4A24
  c->r[3]=c->r[30]|c->r[30]; // 800C4A28
  c->lr=0x800C4A30u; f_80068A78(c); // 800C4A2C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4A30
  c->r[6]=0u+0x00000000u; // 800C4A34
  {uint32_t ea=c->r[31]+0x000003A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4A38
  c->r[0]=0u+0x00000007u; // 800C4A3C
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C4A40
  c->r[4]=c->r[1]+0x00000004u; // 800C4A44
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C4A48
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[0]);} // 800C4A4C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C4A50
  c->ctr=c->r[0]; // 800C4A54
L_800C4A58:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4A58
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4A5C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4A60
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4A64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4A58; } // 800C4A68
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4A6C
  c->r[11]=c->r[1]+0x00000060u; // 800C4A70
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4A74
  c->lr=0x800C4A7Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4A78
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C4A7C
  c->lr=c->r[0]; // 800C4A80
  c->r[1]=c->r[1]+0x00000060u; // 800C4A84
  return; // 800C4A88
}

// fn_800C4A8C
void f_800C4A8C(Ctx* __restrict c) {
  trace_call(0x800C4A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4A8C
  c->r[0]=c->lr; // 800C4A90
  c->r[4]=0u+0x00000001u; // 800C4A94
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C4A98
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C4A9C
  c->r[31]=c->r[3]|c->r[3]; // 800C4AA0
  c->r[3]=c->r[1]+0x00000008u; // 800C4AA4
  c->lr=0x800C4AACu; f_800BDBB4(c); // 800C4AA8
  c->r[0]=0u+0x00000007u; // 800C4AAC
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C4AB0
  c->r[4]=c->r[1]+0x00000004u; // 800C4AB4
  c->ctr=c->r[0]; // 800C4AB8
L_800C4ABC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4ABC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4AC0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4AC4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4AC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4ABC; } // 800C4ACC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4AD0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4AD4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C4AD8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C4ADC
  c->lr=c->r[0]; // 800C4AE0
  c->r[1]=c->r[1]+0x00000050u; // 800C4AE4
  return; // 800C4AE8
}

// fn_800C4AEC
void f_800C4AEC(Ctx* __restrict c) {
  trace_call(0x800C4AECu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4AEC
  c->r[0]=c->lr; // 800C4AF0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C4AF4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C4AF8
  c->r[31]=c->r[6]|c->r[6]; // 800C4AFC
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C4B00
  c->r[30]=c->r[3]|c->r[3]; // 800C4B04
  c->r[3]=c->r[5]|c->r[5]; // 800C4B08
  c->lr=0x800C4B10u; f_80068A78(c); // 800C4B0C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4B10
  c->r[6]=0u+0x00000000u; // 800C4B14
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4B18
  c->r[0]=0u+0x00000007u; // 800C4B1C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C4B20
  {uint32_t ea=c->r[3]+0x000003A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4B24
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C4B28
  c->r[4]=c->r[1]+0x00000004u; // 800C4B2C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800C4B30
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 800C4B34
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800C4B38
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 800C4B3C
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800C4B40
  c->r[7]=c->r[3]+c->r[7]; // 800C4B44
  c->r[8]=R32(c->r[1]+0x00000054u); // 800C4B48
  {uint32_t ea=c->r[7]+0x00000420u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4B4C
  c->r[7]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800C4B50
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800C4B54
  c->r[3]=c->r[3]+c->r[7]; // 800C4B58
  {uint32_t ea=c->r[3]+0x000003ACu; WF32(ea,c->f[0]);} // 800C4B5C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C4B60
  c->ctr=c->r[0]; // 800C4B64
L_800C4B68:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4B68
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4B6C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4B70
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4B74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4B68; } // 800C4B78
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4B7C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4B80
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C4B84
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C4B88
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C4B8C
  c->lr=c->r[0]; // 800C4B90
  c->r[1]=c->r[1]+0x00000060u; // 800C4B94
  return; // 800C4B98
}

// fn_800C4B9C
void f_800C4B9C(Ctx* __restrict c) {
  trace_call(0x800C4B9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4B9C
  c->r[0]=c->lr; // 800C4BA0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C4BA4
  c->r[11]=c->r[1]+0x00000060u; // 800C4BA8
  c->lr=0x800C4BB0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4BAC
  c->r[30]=c->r[5]|c->r[5]; // 800C4BB0
  c->r[29]=c->r[3]|c->r[3]; // 800C4BB4
  c->r[3]=c->r[30]|c->r[30]; // 800C4BB8
  c->lr=0x800C4BC0u; f_80068A78(c); // 800C4BBC
  c->r[31]=c->r[3]|c->r[3]; // 800C4BC0
  c->r[3]=c->r[30]|c->r[30]; // 800C4BC4
  c->lr=0x800C4BCCu; f_80068A78(c); // 800C4BC8
  {uint32_t ea=c->r[3]+0x0000087Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4BCC
  c->r[3]=0u+0x00000001u; // 800C4BD0
  {uint32_t ea=c->r[31]+0x000003A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4BD4
  c->r[0]=0u+0x00000007u; // 800C4BD8
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C4BDC
  c->r[4]=c->r[1]+0x00000004u; // 800C4BE0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800C4BE4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C4BE8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C4BEC
  c->ctr=c->r[0]; // 800C4BF0
L_800C4BF4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4BF4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4BF8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4BFC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4C00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4BF4; } // 800C4C04
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4C08
  c->r[11]=c->r[1]+0x00000060u; // 800C4C0C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4C10
  c->lr=0x800C4C18u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4C14
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C4C18
  c->lr=c->r[0]; // 800C4C1C
  c->r[1]=c->r[1]+0x00000060u; // 800C4C20
  return; // 800C4C24
}

// fn_800C4C28
void f_800C4C28(Ctx* __restrict c) {
  trace_call(0x800C4C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4C28
  c->r[0]=c->lr; // 800C4C2C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C4C30
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C4C34
  c->r[30]=c->r[3]|c->r[3]; // 800C4C38
  c->r[3]=c->r[5]|c->r[5]; // 800C4C3C
  c->lr=0x800C4C44u; f_80068A78(c); // 800C4C40
  c->r[31]=c->r[3]|c->r[3]; // 800C4C44
  c->r[4]=0u+0x00000007u; // 800C4C48
  c->lr=0x800C4C50u; f_800760EC(c); // 800C4C4C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4C50
  if (crb(c,2)) { goto L_800C4C6C; } // 800C4C54
  c->r[4]=R32(c->r[31]+0x00000050u); // 800C4C58
  c->r[3]=c->r[1]+0x00000008u; // 800C4C5C
  c->r[4]=c->r[4]+0x00000010u; // 800C4C60
  c->lr=0x800C4C68u; f_800C12E4(c); // 800C4C64
  goto L_800C4C84; // 800C4C68
L_800C4C6C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 800C4C6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C4C70
  c->lr=0x800C4C78u; f_800C4CC4(c); // 800C4C74
  c->r[4]=c->r[3]|c->r[3]; // 800C4C78
  c->r[3]=c->r[1]+0x00000008u; // 800C4C7C
  c->lr=0x800C4C84u; f_800C12E4(c); // 800C4C80
L_800C4C84:;
  c->r[0]=0u+0x00000007u; // 800C4C84
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C4C88
  c->r[4]=c->r[1]+0x00000004u; // 800C4C8C
  c->ctr=c->r[0]; // 800C4C90
L_800C4C94:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4C94
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4C98
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4C9C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4CA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4C94; } // 800C4CA4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4CA8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4CAC
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C4CB0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C4CB4
  c->lr=c->r[0]; // 800C4CB8
  c->r[1]=c->r[1]+0x00000050u; // 800C4CBC
  return; // 800C4CC0
}

// fn_800C4CC4
void f_800C4CC4(Ctx* __restrict c) {
  trace_call(0x800C4CC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4CC4
  c->r[0]=c->lr; // 800C4CC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4CCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4CD0
  c->r[31]=c->r[3]|c->r[3]; // 800C4CD4
  c->lr=0x800C4CDCu; f_80075428(c); // 800C4CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800C4CDC
  if (crb(c,2)) { goto L_800C4D00; } // 800C4CE0
  c->r[3]=c->r[31]|c->r[31]; // 800C4CE4
  c->lr=0x800C4CECu; f_80075428(c); // 800C4CE8
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800C4CEC
  c->r[3]=c->r[1]+0x00000008u; // 800C4CF0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C4CF4
  c->lr=0x800C4CFCu; f_8007BCA0(c); // 800C4CF8
  goto L_800C4D04; // 800C4CFC
L_800C4D00:;
  c->r[3]=c->r[13]+0xFFFF8034u; // 800C4D00
L_800C4D04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4D04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4D08
  c->lr=c->r[0]; // 800C4D0C
  c->r[1]=c->r[1]+0x00000020u; // 800C4D10
  return; // 800C4D14
}

// fn_800C4D18
void f_800C4D18(Ctx* __restrict c) {
  trace_call(0x800C4D18u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4D18
  c->r[0]=c->lr; // 800C4D1C
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C4D20
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 800C4D24
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 800C4D28
  c->r[11]=c->r[1]+0x00000070u; // 800C4D2C
  c->lr=0x800C4D34u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4D30
  c->r[31]=c->r[5]|c->r[5]; // 800C4D34
  c->r[28]=c->r[3]|c->r[3]; // 800C4D38
  c->r[29]=c->r[6]|c->r[6]; // 800C4D3C
  c->r[30]=0u+0xFFFFFFFFu; // 800C4D40
  c->r[3]=c->r[31]|c->r[31]; // 800C4D44
  c->lr=0x800C4D4Cu; f_80068A78(c); // 800C4D48
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C4D4C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C4D50
  c->ctr=c->r[12]; // 800C4D54
  if (true) { c->lr=0x800C4D5Cu; dispatch(c,c->ctr); } // 800C4D58
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C4D5C
  c->r[4]=0u+0xC8000000u; // 800C4D60
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C4D64
  c->r[3]=c->r[1]+0x00000008u; // 800C4D68
  c->lr=0x800C4D70u; f_8003EDD0(c); // 800C4D6C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4D70
  if (crb(c,2)) { goto L_800C4DF8; } // 800C4D74
  c->r[3]=c->r[31]|c->r[31]; // 800C4D78
  c->lr=0x800C4D80u; f_80068A78(c); // 800C4D7C
  c->r[0]=R8(c->r[29]+0x00000004u); // 800C4D80
  c->r[4]=0u+0x00000000u; // 800C4D84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C4D88
  cmps(c,0,(int32_t)c->r[0],109); // 800C4D8C
  if (!crb(c,2)) { goto L_800C4D9C; } // 800C4D90
  c->r[4]=0u+0x00000000u; // 800C4D94
  goto L_800C4DB8; // 800C4D98
L_800C4D9C:;
  cmps(c,0,(int32_t)c->r[0],112); // 800C4D9C
  if (!crb(c,2)) { goto L_800C4DAC; } // 800C4DA0
  c->r[4]=0u+0x00000001u; // 800C4DA4
  goto L_800C4DB8; // 800C4DA8
L_800C4DAC:;
  cmps(c,0,(int32_t)c->r[0],97); // 800C4DAC
  if (!crb(c,2)) { goto L_800C4DB8; } // 800C4DB0
  c->r[4]=0u+0x00000002u; // 800C4DB4
L_800C4DB8:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 800C4DB8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800C4DBC
  c->r[31]=R32(c->r[3]+c->r[0]); // 800C4DC0
  c->r[30]=R32(c->r[31]+0x00000018u); // 800C4DC4
  cmps(c,0,(int32_t)c->r[30],0); // 800C4DC8
  if (crb(c,0)) { goto L_800C4DF8; } // 800C4DCC
  c->r[3]=c->r[31]|c->r[31]; // 800C4DD0
  c->lr=0x800C4DD8u; f_800752CC(c); // 800C4DD4
  c->f[31]=c->f[1]; // 800C4DD8
  c->r[3]=c->r[31]|c->r[31]; // 800C4DDC
  c->lr=0x800C4DE4u; f_801652C0(c); // 800C4DE0
  {uint32_t ea=c->r[2]+0xFFFF8F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C4DE4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C4DE8
  fcmp(c,0,c->f[0],c->f[31]); // 800C4DEC
  if (!crb(c,0)) { goto L_800C4DF8; } // 800C4DF0
  c->r[30]=0u+0xFFFFFFFFu; // 800C4DF4
L_800C4DF8:;
  c->r[0]=c->r[30]^0x80000000u; // 800C4DF8
  c->r[3]=0u+0x43300000u; // 800C4DFC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C4E00
  c->r[6]=0u+0x00000001u; // 800C4E04
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C4E08
  c->r[0]=0u+0x00000007u; // 800C4E0C
  W32(c->r[1]+0x00000050u,c->r[3]); // 800C4E10
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C4E14
  c->r[4]=c->r[1]+0x0000000Cu; // 800C4E18
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800C4E1C
  W32(c->r[1]+0x00000010u,c->r[6]); // 800C4E20
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C4E24
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800C4E28
  c->ctr=c->r[0]; // 800C4E2C
L_800C4E30:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4E30
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4E34
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4E38
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4E3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4E30; } // 800C4E40
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4E44
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4E48
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 800C4E4C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 800C4E50
  c->r[11]=c->r[1]+0x00000070u; // 800C4E54
  c->lr=0x800C4E5Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4E58
  c->r[0]=R32(c->r[1]+0x00000084u); // 800C4E5C
  c->lr=c->r[0]; // 800C4E60
  c->r[1]=c->r[1]+0x00000080u; // 800C4E64
  return; // 800C4E68
}

// fn_800C4E6C
void f_800C4E6C(Ctx* __restrict c) {
  trace_call(0x800C4E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4E6C
  c->r[0]=c->lr; // 800C4E70
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C4E74
  c->r[11]=c->r[1]+0x00000060u; // 800C4E78
  c->lr=0x800C4E80u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C4E7C
  c->r[31]=c->r[5]|c->r[5]; // 800C4E80
  c->r[29]=c->r[3]|c->r[3]; // 800C4E84
  c->r[30]=c->r[6]|c->r[6]; // 800C4E88
  c->r[3]=c->r[31]|c->r[31]; // 800C4E8C
  c->lr=0x800C4E94u; f_80068A78(c); // 800C4E90
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C4E94
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C4E98
  c->ctr=c->r[12]; // 800C4E9C
  if (true) { c->lr=0x800C4EA4u; dispatch(c,c->ctr); } // 800C4EA0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C4EA4
  c->r[5]=0u+0xE0000000u; // 800C4EA8
  c->r[3]=c->r[1]+0x00000008u; // 800C4EAC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C4EB0
  c->r[4]=c->r[5]+0x00000002u; // 800C4EB4
  c->lr=0x800C4EBCu; f_8003EDD0(c); // 800C4EB8
  cmps(c,0,(int32_t)c->r[3],0); // 800C4EBC
  if (crb(c,2)) { goto L_800C4F14; } // 800C4EC0
  c->r[3]=c->r[31]|c->r[31]; // 800C4EC4
  c->lr=0x800C4ECCu; f_80068A78(c); // 800C4EC8
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C4ECC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C4ED0
  c->ctr=c->r[12]; // 800C4ED4
  if (true) { c->lr=0x800C4EDCu; dispatch(c,c->ctr); } // 800C4ED8
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C4EDC
  c->r[4]=0u+0x00000000u; // 800C4EE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4EE4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C4EE8
  c->ctr=c->r[12]; // 800C4EEC
  if (true) { c->lr=0x800C4EF4u; dispatch(c,c->ctr); } // 800C4EF0
  cmps(c,0,(int32_t)c->r[3],0); // 800C4EF4
  if (crb(c,2)) { goto L_800C4F28; } // 800C4EF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C4EFC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4F00
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C4F04
  c->ctr=c->r[12]; // 800C4F08
  if (true) { c->lr=0x800C4F10u; dispatch(c,c->ctr); } // 800C4F0C
  goto L_800C4F28; // 800C4F10
L_800C4F14:;
  c->r[3]=c->r[31]|c->r[31]; // 800C4F14
  c->lr=0x800C4F1Cu; f_80068A78(c); // 800C4F18
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C4F1C
  c->r[3]=c->r[3]+0x000008ECu; // 800C4F20
  c->lr=0x800C4F28u; f_80075394(c); // 800C4F24
L_800C4F28:;
  c->r[3]=0u+0x00000000u; // 800C4F28
  c->r[0]=0u+0x00000007u; // 800C4F2C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C4F30
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C4F34
  c->r[4]=c->r[1]+0x0000000Cu; // 800C4F38
  c->ctr=c->r[0]; // 800C4F3C
L_800C4F40:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4F40
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4F44
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4F48
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4F4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4F40; } // 800C4F50
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4F54
  c->r[11]=c->r[1]+0x00000060u; // 800C4F58
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4F5C
  c->lr=0x800C4F64u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C4F60
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C4F64
  c->lr=c->r[0]; // 800C4F68
  c->r[1]=c->r[1]+0x00000060u; // 800C4F6C
  return; // 800C4F70
}

// fn_800C4F74
void f_800C4F74(Ctx* __restrict c) {
  trace_call(0x800C4F74u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4F74
  c->r[0]=c->lr; // 800C4F78
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C4F7C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C4F80
  c->r[31]=c->r[3]|c->r[3]; // 800C4F84
  c->r[3]=c->r[5]|c->r[5]; // 800C4F88
  c->lr=0x800C4F90u; f_80068A78(c); // 800C4F8C
  c->r[3]=R32(c->r[3]+0x00000974u); // 800C4F90
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C4F94
  c->lr=0x800C4F9Cu; f_80165E24(c); // 800C4F98
  c->r[3]=0u+0x00000001u; // 800C4F9C
  c->r[0]=0u+0x00000007u; // 800C4FA0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C4FA4
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C4FA8
  c->r[4]=c->r[1]+0x00000004u; // 800C4FAC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C4FB0
  c->ctr=c->r[0]; // 800C4FB4
L_800C4FB8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C4FB8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C4FBC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C4FC0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C4FC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4FB8; } // 800C4FC8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4FCC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4FD0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C4FD4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C4FD8
  c->lr=c->r[0]; // 800C4FDC
  c->r[1]=c->r[1]+0x00000050u; // 800C4FE0
  return; // 800C4FE4
}

// fn_800C4FE8
void f_800C4FE8(Ctx* __restrict c) {
  trace_call(0x800C4FE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4FE8
  c->r[0]=c->lr; // 800C4FEC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C4FF0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C4FF4
  c->r[31]=c->r[3]|c->r[3]; // 800C4FF8
  c->r[3]=c->r[5]|c->r[5]; // 800C4FFC
  c->lr=0x800C5004u; f_80068A78(c); // 800C5000
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5004
  c->r[12]=R32(c->r[12]+0x00000304u); // 800C5008
  c->ctr=c->r[12]; // 800C500C
  if (true) { c->lr=0x800C5014u; dispatch(c,c->ctr); } // 800C5010
  c->r[3]=0u+0x00000001u; // 800C5014
  c->r[0]=0u+0x00000007u; // 800C5018
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C501C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C5020
  c->r[4]=c->r[1]+0x00000004u; // 800C5024
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C5028
  c->ctr=c->r[0]; // 800C502C
L_800C5030:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5030
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5034
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5038
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C503C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5030; } // 800C5040
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5044
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5048
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C504C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C5050
  c->lr=c->r[0]; // 800C5054
  c->r[1]=c->r[1]+0x00000050u; // 800C5058
  return; // 800C505C
}

// fn_800C5060
void f_800C5060(Ctx* __restrict c) {
  trace_call(0x800C5060u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5060
  c->r[0]=c->lr; // 800C5064
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C5068
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C506C
  c->r[31]=c->r[5]|c->r[5]; // 800C5070
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C5074
  c->r[30]=c->r[3]|c->r[3]; // 800C5078
  c->r[3]=c->r[31]|c->r[31]; // 800C507C
  c->lr=0x800C5084u; f_80068A78(c); // 800C5080
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5084
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C5088
  c->ctr=c->r[12]; // 800C508C
  if (true) { c->lr=0x800C5094u; dispatch(c,c->ctr); } // 800C5090
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C5094
  c->r[5]=0u+0xE0000000u; // 800C5098
  c->r[3]=c->r[1]+0x00000008u; // 800C509C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C50A0
  c->r[4]=c->r[5]+0x00000002u; // 800C50A4
  c->lr=0x800C50ACu; f_8003EDD0(c); // 800C50A8
  cmps(c,0,(int32_t)c->r[3],0); // 800C50AC
  if (crb(c,2)) { goto L_800C5120; } // 800C50B0
  c->r[3]=c->r[31]|c->r[31]; // 800C50B4
  c->lr=0x800C50BCu; f_80068A78(c); // 800C50B8
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C50BC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C50C0
  c->ctr=c->r[12]; // 800C50C4
  if (true) { c->lr=0x800C50CCu; dispatch(c,c->ctr); } // 800C50C8
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C50CC
  c->r[4]=0u+0x00000000u; // 800C50D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C50D4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C50D8
  c->ctr=c->r[12]; // 800C50DC
  if (true) { c->lr=0x800C50E4u; dispatch(c,c->ctr); } // 800C50E0
  cmps(c,0,(int32_t)c->r[3],0); // 800C50E4
  if (crb(c,2)) { goto L_800C510C; } // 800C50E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C50EC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800C50F0
  c->ctr=c->r[12]; // 800C50F4
  if (true) { c->lr=0x800C50FCu; dispatch(c,c->ctr); } // 800C50F8
  c->r[0]=0u+0x00000001u; // 800C50FC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800C5100
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C5104
  goto L_800C5164; // 800C5108
L_800C510C:;
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C510C
  c->r[0]=0u+0x00000001u; // 800C5110
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C5114
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800C5118
  goto L_800C5164; // 800C511C
L_800C5120:;
  c->r[3]=c->r[31]|c->r[31]; // 800C5120
  c->lr=0x800C5128u; f_80068A78(c); // 800C5124
  c->r[5]=R32(c->r[3]+0x00000974u); // 800C5128
  c->r[4]=R32(c->r[3]+0x00000C90u); // 800C512C
  c->r[3]=R32(c->r[5]+0x00000000u); // 800C5130
  c->r[0]=R32(c->r[3]+0x00000018u); // 800C5134
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C5138
  if (!crb(c,2)) { goto L_800C5154; } // 800C513C
  c->lr=0x800C5144u; f_800752CC(c); // 800C5140
  c->r[0]=0u+0x00000001u; // 800C5144
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800C5148
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C514C
  goto L_800C5164; // 800C5150
L_800C5154:;
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5154
  c->r[0]=0u+0x00000001u; // 800C5158
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C515C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800C5160
L_800C5164:;
  c->r[0]=0u+0x00000007u; // 800C5164
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C5168
  c->r[4]=c->r[1]+0x0000000Cu; // 800C516C
  c->ctr=c->r[0]; // 800C5170
L_800C5174:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5174
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5178
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C517C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5180
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5174; } // 800C5184
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5188
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C518C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C5190
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C5194
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C5198
  c->lr=c->r[0]; // 800C519C
  c->r[1]=c->r[1]+0x00000060u; // 800C51A0
  return; // 800C51A4
}

// fn_800C51A8
void f_800C51A8(Ctx* __restrict c) {
  trace_call(0x800C51A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C51A8
  c->r[0]=c->lr; // 800C51AC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C51B0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C51B4
  c->r[31]=c->r[6]|c->r[6]; // 800C51B8
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C51BC
  c->r[30]=c->r[3]|c->r[3]; // 800C51C0
  c->r[3]=c->r[5]|c->r[5]; // 800C51C4
  c->lr=0x800C51CCu; f_80068A78(c); // 800C51C8
  c->r[3]=R32(c->r[3]+0x00000974u); // 800C51CC
  c->r[4]=0u+0x00000000u; // 800C51D0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C51D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C51D8
  c->lr=0x800C51E0u; f_80165194(c); // 800C51DC
  c->r[3]=0u+0x00000000u; // 800C51E0
  c->r[0]=0u+0x00000007u; // 800C51E4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C51E8
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C51EC
  c->r[4]=c->r[1]+0x00000004u; // 800C51F0
  c->ctr=c->r[0]; // 800C51F4
L_800C51F8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C51F8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C51FC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5200
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5204
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C51F8; } // 800C5208
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C520C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5210
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C5214
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C5218
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C521C
  c->lr=c->r[0]; // 800C5220
  c->r[1]=c->r[1]+0x00000050u; // 800C5224
  return; // 800C5228
}

// fn_800C522C
void f_800C522C(Ctx* __restrict c) {
  trace_call(0x800C522Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C522C
  c->r[0]=c->lr; // 800C5230
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C5234
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C5238
  c->r[31]=c->r[5]|c->r[5]; // 800C523C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C5240
  c->r[30]=c->r[3]|c->r[3]; // 800C5244
  c->r[3]=c->r[31]|c->r[31]; // 800C5248
  c->lr=0x800C5250u; f_80068A78(c); // 800C524C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5250
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C5254
  c->ctr=c->r[12]; // 800C5258
  if (true) { c->lr=0x800C5260u; dispatch(c,c->ctr); } // 800C525C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800C5260
  c->r[4]=0u+0xC8000000u; // 800C5264
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C5268
  c->r[3]=c->r[1]+0x00000018u; // 800C526C
  c->lr=0x800C5274u; f_8003EDD0(c); // 800C5270
  cmps(c,0,(int32_t)c->r[3],0); // 800C5274
  if (crb(c,2)) { goto L_800C52A0; } // 800C5278
  c->r[3]=c->r[31]|c->r[31]; // 800C527C
  c->lr=0x800C5284u; f_80068A78(c); // 800C5280
  c->r[3]=R32(c->r[3]+0x00000974u); // 800C5284
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C5288
  c->lr=0x800C5290u; f_801652C0(c); // 800C528C
  c->r[0]=0u+0x00000001u; // 800C5290
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800C5294
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C5298
  goto L_800C53B0; // 800C529C
L_800C52A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800C52A0
  c->lr=0x800C52A8u; f_80068A78(c); // 800C52A4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C52A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C52AC
  c->ctr=c->r[12]; // 800C52B0
  if (true) { c->lr=0x800C52B8u; dispatch(c,c->ctr); } // 800C52B4
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C52B8
  c->r[5]=0u+0xE0000000u; // 800C52BC
  c->r[3]=c->r[1]+0x00000010u; // 800C52C0
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C52C4
  c->r[4]=c->r[5]+0x00000002u; // 800C52C8
  c->lr=0x800C52D0u; f_8003EDD0(c); // 800C52CC
  cmps(c,0,(int32_t)c->r[3],0); // 800C52D0
  if (crb(c,2)) { goto L_800C53B0; } // 800C52D4
  {uint32_t ea=c->r[2]+0xFFFF8F04u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C52D8
  c->r[0]=0u+0x00000001u; // 800C52DC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C52E0
  c->r[3]=c->r[31]|c->r[31]; // 800C52E4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800C52E8
  c->lr=0x800C52F0u; f_80068A78(c); // 800C52EC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C52F0
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C52F4
  c->ctr=c->r[12]; // 800C52F8
  if (true) { c->lr=0x800C5300u; dispatch(c,c->ctr); } // 800C52FC
  c->r[31]=c->r[3]|c->r[3]; // 800C5300
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C5304
  c->r[4]=0u+0x00000000u; // 800C5308
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C530C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C5310
  c->ctr=c->r[12]; // 800C5314
  if (true) { c->lr=0x800C531Cu; dispatch(c,c->ctr); } // 800C5318
  cmps(c,0,(int32_t)c->r[3],0); // 800C531C
  if (crb(c,2)) { goto L_800C53B0; } // 800C5320
  c->r[4]=R32(c->r[31]+0x00000008u); // 800C5324
  c->r[3]=c->r[1]+0x0000000Cu; // 800C5328
  c->r[0]=R32(c->r[4]+0x000000E8u); // 800C532C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C5330
  c->lr=0x800C5338u; f_80365B10(c); // 800C5334
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C5338
  c->r[3]=c->r[1]+0x00000008u; // 800C533C
  c->r[4]=0u+0x00000000u; // 800C5340
  c->lr=0x800C5348u; f_80363E5C(c); // 800C5344
  cmps(c,0,(int32_t)c->r[3],0); // 800C5348
  c->r[31]=c->r[3]|c->r[3]; // 800C534C
  if (!crb(c,2)) { goto L_800C537C; } // 800C5350
  c->r[3]=0u+0x803F0000u; // 800C5354
  c->r[5]=0u+0x803F0000u; // 800C5358
  c->r[6]=0u+0x803F0000u; // 800C535C
  c->r[4]=0u+0x00000026u; // 800C5360
  c->r[3]=c->r[3]+0x0000195Cu; // 800C5364
  c->r[5]=c->r[5]+0x00001940u; // 800C5368
  c->r[6]=c->r[6]+0x00001934u; // 800C536C
  c->r[7]=c->r[13]+0xFFFF8170u; // 800C5370
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C5374
  c->lr=0x800C537Cu; f_803444BC(c); // 800C5378
L_800C537C:;
  c->r[4]=R16(c->r[31]+0x0000001Cu); // 800C537C
  c->r[3]=0u+0x43300000u; // 800C5380
  W32(c->r[1]+0x00000060u,c->r[3]); // 800C5384
  c->r[0]=0u+0x00000001u; // 800C5388
  c->r[3]=c->r[4]^0x80000000u; // 800C538C
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[2]=RF64(ea);} // 800C5390
  W32(c->r[1]+0x00000064u,c->r[3]); // 800C5394
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5398
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=RF64(ea);} // 800C539C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C53A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C53A4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800C53A8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800C53AC
L_800C53B0:;
  c->r[0]=0u+0x00000007u; // 800C53B0
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C53B4
  c->r[4]=c->r[1]+0x0000001Cu; // 800C53B8
  c->ctr=c->r[0]; // 800C53BC
L_800C53C0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C53C0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C53C4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C53C8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C53CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C53C0; } // 800C53D0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C53D4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C53D8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C53DC
  c->r[30]=R32(c->r[1]+0x00000068u); // 800C53E0
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C53E4
  c->lr=c->r[0]; // 800C53E8
  c->r[1]=c->r[1]+0x00000070u; // 800C53EC
  return; // 800C53F0
}

// fn_800C53F4
void f_800C53F4(Ctx* __restrict c) {
  trace_call(0x800C53F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C53F4
  c->r[0]=c->lr; // 800C53F8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C53FC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C5400
  c->r[31]=c->r[3]|c->r[3]; // 800C5404
  c->r[3]=c->r[5]|c->r[5]; // 800C5408
  c->lr=0x800C5410u; f_80068A78(c); // 800C540C
  c->r[3]=c->r[3]+0x00001060u; // 800C5410
  c->lr=0x800C5418u; f_80181260(c); // 800C5414
  c->r[4]=c->r[3]|c->r[3]; // 800C5418
  c->r[3]=c->r[1]+0x00000008u; // 800C541C
  c->lr=0x800C5424u; f_800BDBB4(c); // 800C5420
  c->r[0]=0u+0x00000007u; // 800C5424
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C5428
  c->r[4]=c->r[1]+0x00000004u; // 800C542C
  c->ctr=c->r[0]; // 800C5430
L_800C5434:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5434
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5438
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C543C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5440
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5434; } // 800C5444
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5448
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C544C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C5450
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C5454
  c->lr=c->r[0]; // 800C5458
  c->r[1]=c->r[1]+0x00000050u; // 800C545C
  return; // 800C5460
}

// fn_800C5464
void f_800C5464(Ctx* __restrict c) {
  trace_call(0x800C5464u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5464
  c->r[0]=c->lr; // 800C5468
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C546C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800C5470
  c->r[31]=c->r[3]|c->r[3]; // 800C5474
  c->r[3]=c->r[5]|c->r[5]; // 800C5478
  c->lr=0x800C5480u; f_80068A78(c); // 800C547C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5480
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C5484
  c->ctr=c->r[12]; // 800C5488
  if (true) { c->lr=0x800C5490u; dispatch(c,c->ctr); } // 800C548C
  c->r[4]=c->r[3]|c->r[3]; // 800C5490
  c->r[3]=c->r[1]+0x00000014u; // 800C5494
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C5498
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C549C
  c->ctr=c->r[12]; // 800C54A0
  if (true) { c->lr=0x800C54A8u; dispatch(c,c->ctr); } // 800C54A4
  c->r[3]=c->r[1]+0x00000008u; // 800C54A8
  c->r[4]=c->r[1]+0x00000014u; // 800C54AC
  c->lr=0x800C54B4u; f_800C5524(c); // 800C54B0
  c->r[3]=c->r[1]+0x00000008u; // 800C54B4
  c->lr=0x800C54BCu; f_8018122C(c); // 800C54B8
  c->r[0]=c->r[3]^0x80000000u; // 800C54BC
  c->r[3]=0u+0x43300000u; // 800C54C0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C54C4
  c->r[6]=0u+0x00000001u; // 800C54C8
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C54CC
  c->r[0]=0u+0x00000007u; // 800C54D0
  W32(c->r[1]+0x00000080u,c->r[3]); // 800C54D4
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C54D8
  c->r[4]=c->r[1]+0x00000040u; // 800C54DC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 800C54E0
  W32(c->r[1]+0x00000044u,c->r[6]); // 800C54E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C54E8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800C54EC
  c->ctr=c->r[0]; // 800C54F0
L_800C54F4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C54F4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C54F8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C54FC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5500
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C54F4; } // 800C5504
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5508
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C550C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800C5510
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C5514
  c->lr=c->r[0]; // 800C5518
  c->r[1]=c->r[1]+0x00000090u; // 800C551C
  return; // 800C5520
}

// fn_800C5524
void f_800C5524(Ctx* __restrict c) {
  trace_call(0x800C5524u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5524
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5528
  {uint32_t ea=c->r[4]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C552C
  f_800521A0(c); return; // 800C5530
}

// fn_800C5534
void f_800C5534(Ctx* __restrict c) {
  trace_call(0x800C5534u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5534
  c->r[0]=c->lr; // 800C5538
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C553C
  c->r[11]=c->r[1]+0x00000060u; // 800C5540
  c->lr=0x800C5548u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C5544
  c->r[28]=c->r[3]|c->r[3]; // 800C5548
  c->r[3]=c->r[5]|c->r[5]; // 800C554C
  c->r[29]=c->r[6]|c->r[6]; // 800C5550
  c->lr=0x800C5558u; f_80068A78(c); // 800C5554
  c->r[31]=c->r[3]|c->r[3]; // 800C5558
  c->r[4]=c->r[29]+0x00000004u; // 800C555C
  c->r[30]=0u+0x00000000u; // 800C5560
  c->lr=0x800C5568u; f_800C5614(c); // 800C5564
  cmps(c,0,(int32_t)c->r[3],0); // 800C5568
  if (!crb(c,2)) { goto L_800C55A4; } // 800C556C
  c->r[5]=R32(c->r[31]+0x00000974u); // 800C5570
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C5574
  c->r[4]=R32(c->r[31]+0x00000C90u); // 800C5578
  c->r[3]=R32(c->r[5]+c->r[0]); // 800C557C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800C5580
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C5584
  if (!crb(c,2)) { goto L_800C55C4; } // 800C5588
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C558C
  c->lr=0x800C5594u; f_800C57C4(c); // 800C5590
  cmps(c,0,(int32_t)c->r[3],0); // 800C5594
  if (crb(c,2)) { goto L_800C55C4; } // 800C5598
  c->r[30]=0u+0x00000001u; // 800C559C
  goto L_800C55C4; // 800C55A0
L_800C55A4:;
  c->r[4]=R32(c->r[31]+0x00000974u); // 800C55A4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C55A8
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C55AC
  c->r[3]=R32(c->r[4]+c->r[0]); // 800C55B0
  c->lr=0x800C55B8u; f_800C57C4(c); // 800C55B4
  cmps(c,0,(int32_t)c->r[3],0); // 800C55B8
  if (crb(c,2)) { goto L_800C55C4; } // 800C55BC
  c->r[30]=0u+0x00000001u; // 800C55C0
L_800C55C4:;
  c->r[4]=c->r[30]|c->r[30]; // 800C55C4
  c->r[3]=c->r[1]+0x00000008u; // 800C55C8
  c->lr=0x800C55D0u; f_800BDBB4(c); // 800C55CC
  c->r[0]=0u+0x00000007u; // 800C55D0
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C55D4
  c->r[4]=c->r[1]+0x00000004u; // 800C55D8
  c->ctr=c->r[0]; // 800C55DC
L_800C55E0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C55E0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C55E4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C55E8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C55EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C55E0; } // 800C55F0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C55F4
  c->r[11]=c->r[1]+0x00000060u; // 800C55F8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C55FC
  c->lr=0x800C5604u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C5600
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C5604
  c->lr=c->r[0]; // 800C5608
  c->r[1]=c->r[1]+0x00000060u; // 800C560C
  return; // 800C5610
}

// fn_800C5614
void f_800C5614(Ctx* __restrict c) {
  trace_call(0x800C5614u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5614
  c->r[0]=c->lr; // 800C5618
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C561C
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C5620
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C5624
  c->r[31]=c->r[4]|c->r[4]; // 800C5628
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C562C
  cmps(c,0,(int32_t)c->r[0],109); // 800C5630
  if (!crb(c,2)) { goto L_800C5640; } // 800C5634
  c->r[3]=0u+0x00000000u; // 800C5638
  goto L_800C57B0; // 800C563C
L_800C5640:;
  cmps(c,0,(int32_t)c->r[0],112); // 800C5640
  if (!crb(c,2)) { goto L_800C5740; } // 800C5644
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5648
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C564C
  c->ctr=c->r[12]; // 800C5650
  if (true) { c->lr=0x800C5658u; dispatch(c,c->ctr); } // 800C5654
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C5658
  c->r[5]=0u+0xC8000000u; // 800C565C
  c->r[3]=c->r[1]+0x00000010u; // 800C5660
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C5664
  c->r[4]=c->r[5]+0x00000028u; // 800C5668
  c->lr=0x800C5670u; f_8003EDD0(c); // 800C566C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5670
  if (crb(c,2)) { goto L_800C5738; } // 800C5674
  c->r[3]=R8(c->r[31]+0x00000001u); // 800C5678
  c->r[0]=R8(c->r[31]+0x00000002u); // 800C567C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C5680
  c->r[3]=rotl(c->r[3],8)&0x00FFFF00u; // 800C5684
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C5688
  c->r[0]=c->r[3]+c->r[0]; // 800C568C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800C5690
  cmps(c,0,(int32_t)c->r[0],12342); // 800C5694
  if (crb(c,2)) { goto L_800C5710; } // 800C5698
  if (!crb(c,0)) { goto L_800C56C8; } // 800C569C
  cmps(c,0,(int32_t)c->r[0],12339); // 800C56A0
  if (crb(c,2)) { goto L_800C56F8; } // 800C56A4
  if (!crb(c,0)) { goto L_800C56BC; } // 800C56A8
  cmps(c,0,(int32_t)c->r[0],12337); // 800C56AC
  if (crb(c,2)) { goto L_800C56E8; } // 800C56B0
  if (!crb(c,0)) { goto L_800C56F0; } // 800C56B4
  goto L_800C56E8; // 800C56B8
L_800C56BC:;
  cmps(c,0,(int32_t)c->r[0],12341); // 800C56BC
  if (!crb(c,0)) { goto L_800C5708; } // 800C56C0
  goto L_800C5700; // 800C56C4
L_800C56C8:;
  cmps(c,0,(int32_t)c->r[0],12345); // 800C56C8
  if (crb(c,2)) { goto L_800C5728; } // 800C56CC
  if (!crb(c,0)) { goto L_800C56E0; } // 800C56D0
  cmps(c,0,(int32_t)c->r[0],12344); // 800C56D4
  if (!crb(c,0)) { goto L_800C5720; } // 800C56D8
  goto L_800C5718; // 800C56DC
L_800C56E0:;
  cmps(c,0,(int32_t)c->r[0],12592); // 800C56E0
  if (crb(c,2)) { goto L_800C5730; } // 800C56E4
L_800C56E8:;
  c->r[3]=0u+0x00000001u; // 800C56E8
  goto L_800C57B0; // 800C56EC
L_800C56F0:;
  c->r[3]=0u+0x00000004u; // 800C56F0
  goto L_800C57B0; // 800C56F4
L_800C56F8:;
  c->r[3]=0u+0x00000005u; // 800C56F8
  goto L_800C57B0; // 800C56FC
L_800C5700:;
  c->r[3]=0u+0x00000006u; // 800C5700
  goto L_800C57B0; // 800C5704
L_800C5708:;
  c->r[3]=0u+0x00000007u; // 800C5708
  goto L_800C57B0; // 800C570C
L_800C5710:;
  c->r[3]=0u+0x00000008u; // 800C5710
  goto L_800C57B0; // 800C5714
L_800C5718:;
  c->r[3]=0u+0x00000009u; // 800C5718
  goto L_800C57B0; // 800C571C
L_800C5720:;
  c->r[3]=0u+0x0000000Au; // 800C5720
  goto L_800C57B0; // 800C5724
L_800C5728:;
  c->r[3]=0u+0x0000000Bu; // 800C5728
  goto L_800C57B0; // 800C572C
L_800C5730:;
  c->r[3]=0u+0x0000000Cu; // 800C5730
  goto L_800C57B0; // 800C5734
L_800C5738:;
  c->r[3]=0u+0x00000001u; // 800C5738
  goto L_800C57B0; // 800C573C
L_800C5740:;
  cmps(c,0,(int32_t)c->r[0],97); // 800C5740
  if (!crb(c,2)) { goto L_800C57B0; } // 800C5744
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5748
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C574C
  c->ctr=c->r[12]; // 800C5750
  if (true) { c->lr=0x800C5758u; dispatch(c,c->ctr); } // 800C5754
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C5758
  c->r[5]=0u+0xC8000000u; // 800C575C
  c->r[3]=c->r[1]+0x00000008u; // 800C5760
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C5764
  c->r[4]=c->r[5]+0x00000028u; // 800C5768
  c->lr=0x800C5770u; f_8003EDD0(c); // 800C576C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5770
  if (crb(c,2)) { goto L_800C57AC; } // 800C5774
  c->r[3]=R8(c->r[31]+0x00000001u); // 800C5778
  c->r[0]=R8(c->r[31]+0x00000002u); // 800C577C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C5780
  c->r[3]=rotl(c->r[3],8)&0x00FFFF00u; // 800C5784
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C5788
  c->r[0]=c->r[3]+c->r[0]; // 800C578C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800C5790
  cmps(c,0,(int32_t)c->r[0],12338); // 800C5794
  if (crb(c,2)) { goto L_800C57A4; } // 800C5798
  c->r[3]=0u+0x00000002u; // 800C579C
  goto L_800C57B0; // 800C57A0
L_800C57A4:;
  c->r[3]=0u+0x00000003u; // 800C57A4
  goto L_800C57B0; // 800C57A8
L_800C57AC:;
  c->r[3]=0u+0x00000002u; // 800C57AC
L_800C57B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C57B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C57B4
  c->lr=c->r[0]; // 800C57B8
  c->r[1]=c->r[1]+0x00000020u; // 800C57BC
  return; // 800C57C0
}

// fn_800C57C4
void f_800C57C4(Ctx* __restrict c) {
  trace_call(0x800C57C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C57C4
  c->r[0]=c->lr; // 800C57C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C57CC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800C57D0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800C57D4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800C57D8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800C57DC
  c->f[30]=c->f[1]; // 800C57E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C57E4
  c->r[31]=c->r[3]|c->r[3]; // 800C57E8
  c->lr=0x800C57F0u; f_800752CC(c); // 800C57EC
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C57F0
  fcmp(c,0,c->f[31],c->f[1]); // 800C57F4
  if (!crb(c,2)) { goto L_800C5800; } // 800C57F8
  {uint32_t ea=c->r[31]+0x00000020u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C57FC
L_800C5800:;
  c->r[3]=c->r[31]|c->r[31]; // 800C5800
  c->lr=0x800C5808u; f_800752CC(c); // 800C5804
  fcmp(c,0,c->f[31],c->f[1]); // 800C5808
  if (!crb(c,1)) { goto L_800C5814; } // 800C580C
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C5810
L_800C5814:;
  fcmp(c,0,c->f[30],c->f[31]); // 800C5814
  c->r[3]=0u+0x00000000u; // 800C5818
  if (!crb(c,1)) { goto L_800C5830; } // 800C581C
  fcmp(c,0,c->f[30],c->f[1]); // 800C5820
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C5824
  if (!crb(c,2)) { goto L_800C5830; } // 800C5828
  c->r[3]=0u+0x00000001u; // 800C582C
L_800C5830:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800C5830
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800C5834
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800C5838
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800C583C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C5840
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C5844
  c->lr=c->r[0]; // 800C5848
  c->r[1]=c->r[1]+0x00000030u; // 800C584C
  return; // 800C5850
}

// fn_800C5854
void f_800C5854(Ctx* __restrict c) {
  trace_call(0x800C5854u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5854
  c->r[0]=c->lr; // 800C5858
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C585C
  c->r[11]=c->r[1]+0x00000060u; // 800C5860
  c->lr=0x800C5868u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C5864
  c->r[31]=c->r[5]|c->r[5]; // 800C5868
  c->r[28]=c->r[3]|c->r[3]; // 800C586C
  c->r[29]=c->r[6]|c->r[6]; // 800C5870
  c->r[30]=0u+0x00000000u; // 800C5874
  c->r[3]=c->r[31]|c->r[31]; // 800C5878
  c->lr=0x800C5880u; f_80068A78(c); // 800C587C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5880
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C5884
  c->ctr=c->r[12]; // 800C5888
  if (true) { c->lr=0x800C5890u; dispatch(c,c->ctr); } // 800C588C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C5890
  c->r[4]=0u+0xC8000000u; // 800C5894
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C5898
  c->r[3]=c->r[1]+0x00000008u; // 800C589C
  c->lr=0x800C58A4u; f_8003EDD0(c); // 800C58A0
  cmps(c,0,(int32_t)c->r[3],0); // 800C58A4
  if (crb(c,2)) { goto L_800C591C; } // 800C58A8
  c->r[3]=c->r[31]|c->r[31]; // 800C58AC
  c->lr=0x800C58B4u; f_80068A78(c); // 800C58B0
  c->r[31]=c->r[3]|c->r[3]; // 800C58B4
  c->r[4]=c->r[29]+0x00000004u; // 800C58B8
  c->lr=0x800C58C0u; f_800C5614(c); // 800C58BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C58C0
  if (!crb(c,2)) { goto L_800C58FC; } // 800C58C4
  c->r[5]=R32(c->r[31]+0x00000974u); // 800C58C8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C58CC
  c->r[4]=R32(c->r[31]+0x00000C90u); // 800C58D0
  c->r[3]=R32(c->r[5]+c->r[0]); // 800C58D4
  c->r[0]=R32(c->r[3]+0x00000018u); // 800C58D8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C58DC
  if (!crb(c,2)) { goto L_800C591C; } // 800C58E0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C58E4
  c->lr=0x800C58ECu; f_8016498C(c); // 800C58E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C58EC
  if (crb(c,2)) { goto L_800C591C; } // 800C58F0
  c->r[30]=0u+0x00000001u; // 800C58F4
  goto L_800C591C; // 800C58F8
L_800C58FC:;
  c->r[4]=R32(c->r[31]+0x00000974u); // 800C58FC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C5900
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5904
  c->r[3]=R32(c->r[4]+c->r[0]); // 800C5908
  c->lr=0x800C5910u; f_8016498C(c); // 800C590C
  cmps(c,0,(int32_t)c->r[3],0); // 800C5910
  if (crb(c,2)) { goto L_800C591C; } // 800C5914
  c->r[30]=0u+0x00000001u; // 800C5918
L_800C591C:;
  c->r[4]=c->r[30]|c->r[30]; // 800C591C
  c->r[3]=c->r[1]+0x00000010u; // 800C5920
  c->lr=0x800C5928u; f_800BDBB4(c); // 800C5924
  c->r[0]=0u+0x00000007u; // 800C5928
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C592C
  c->r[4]=c->r[1]+0x0000000Cu; // 800C5930
  c->ctr=c->r[0]; // 800C5934
L_800C5938:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5938
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C593C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5940
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5944
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5938; } // 800C5948
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C594C
  c->r[11]=c->r[1]+0x00000060u; // 800C5950
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5954
  c->lr=0x800C595Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C5958
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C595C
  c->lr=c->r[0]; // 800C5960
  c->r[1]=c->r[1]+0x00000060u; // 800C5964
  return; // 800C5968
}

// fn_800C596C
void f_800C596C(Ctx* __restrict c) {
  trace_call(0x800C596Cu);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C596C
  c->r[0]=c->lr; // 800C5970
  W32(c->r[1]+0x00000224u,c->r[0]); // 800C5974
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[31]);} // 800C5978
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,31,ea,0,0);} // 800C597C
  c->r[11]=c->r[1]+0x00000210u; // 800C5980
  c->lr=0x800C5988u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C5984
  c->r[30]=c->r[5]|c->r[5]; // 800C5988
  c->r[31]=c->r[3]|c->r[3]; // 800C598C
  c->r[29]=c->r[6]|c->r[6]; // 800C5990
  c->r[3]=c->r[30]|c->r[30]; // 800C5994
  c->lr=0x800C599Cu; f_80068A78(c); // 800C5998
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C599C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C59A0
  c->ctr=c->r[12]; // 800C59A4
  if (true) { c->lr=0x800C59ACu; dispatch(c,c->ctr); } // 800C59A8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C59AC
  c->r[4]=0u+0xC8000000u; // 800C59B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C59B4
  c->r[3]=c->r[1]+0x00000008u; // 800C59B8
  c->lr=0x800C59C0u; f_8003EDD0(c); // 800C59BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C59C0
  if (crb(c,2)) { goto L_800C5B84; } // 800C59C4
  c->r[3]=c->r[30]|c->r[30]; // 800C59C8
  c->lr=0x800C59D0u; f_80068A78(c); // 800C59CC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C59D0
  c->r[30]=c->r[3]|c->r[3]; // 800C59D4
  {uint32_t ea=c->r[29]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C59D8
  c->r[3]=c->r[1]+0x00000060u; // 800C59DC
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C59E0
  c->lr=0x800C59E8u; f_800521A0(c); // 800C59E4
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C59E8
  c->r[3]=c->r[1]+0x00000054u; // 800C59EC
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C59F0
  {uint32_t ea=c->r[29]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C59F4
  c->lr=0x800C59FCu; f_800521A0(c); // 800C59F8
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800C59FC
  c->r[4]=c->r[30]+0x000008D0u; // 800C5A00
  c->r[3]=c->r[1]+0x000001C8u; // 800C5A04
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C5A08
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C5A0C
  c->ctr=c->r[12]; // 800C5A10
  if (true) { c->lr=0x800C5A18u; dispatch(c,c->ctr); } // 800C5A14
  c->r[0]=0u+0x00000006u; // 800C5A18
  c->r[5]=c->r[1]+0x00000194u; // 800C5A1C
  c->r[4]=c->r[30]+0x00000940u; // 800C5A20
  c->ctr=c->r[0]; // 800C5A24
L_800C5A28:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5A28
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5A2C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5A30
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5A34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5A28; } // 800C5A38
  c->r[3]=c->r[1]+0x000001C8u; // 800C5A3C
  c->r[4]=c->r[1]+0x00000198u; // 800C5A40
  c->r[5]=c->r[1]+0x00000168u; // 800C5A44
  c->lr=0x800C5A4Cu; f_802646E0(c); // 800C5A48
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5A4C
  c->r[3]=c->r[1]+0x00000048u; // 800C5A50
  c->f[2]=c->f[1]; // 800C5A54
  c->f[3]=c->f[1]; // 800C5A58
  c->lr=0x800C5A60u; f_800521A0(c); // 800C5A5C
  c->r[4]=c->r[3]|c->r[3]; // 800C5A60
  c->r[3]=c->r[1]+0x00000138u; // 800C5A64
  c->r[5]=c->r[1]+0x00000060u; // 800C5A68
  c->r[6]=c->r[1]+0x00000054u; // 800C5A6C
  c->lr=0x800C5A74u; f_8007520C(c); // 800C5A70
  c->r[3]=c->r[1]+0x00000010u; // 800C5A74
  c->r[4]=c->r[1]+0x00000168u; // 800C5A78
  c->lr=0x800C5A80u; f_80265A3C(c); // 800C5A7C
  c->r[3]=c->r[1]+0x00000020u; // 800C5A80
  c->r[4]=c->r[1]+0x00000138u; // 800C5A84
  c->lr=0x800C5A8Cu; f_80265A3C(c); // 800C5A88
  c->f[1]=c->f[31]; // 800C5A8C
  c->r[3]=c->r[1]+0x00000010u; // 800C5A90
  c->r[5]=c->r[3]|c->r[3]; // 800C5A94
  c->r[4]=c->r[1]+0x00000020u; // 800C5A98
  c->lr=0x800C5AA0u; f_80265C6C(c); // 800C5A9C
  {uint32_t ea=c->r[1]+0x00000174u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5AA0
  c->r[3]=c->r[1]+0x00000030u; // 800C5AA4
  {uint32_t ea=c->r[1]+0x00000184u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5AA8
  {uint32_t ea=c->r[1]+0x00000194u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C5AAC
  c->lr=0x800C5AB4u; f_800521A0(c); // 800C5AB0
  {uint32_t ea=c->r[1]+0x00000144u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5AB4
  c->r[3]=c->r[1]+0x0000003Cu; // 800C5AB8
  {uint32_t ea=c->r[1]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5ABC
  {uint32_t ea=c->r[1]+0x00000164u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C5AC0
  c->lr=0x800C5AC8u; f_800521A0(c); // 800C5AC4
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5AC8
  c->r[3]=c->r[1]+0x00000030u; // 800C5ACC
  c->r[4]=c->r[3]|c->r[3]; // 800C5AD0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 800C5AD4
  c->lr=0x800C5ADCu; f_80064C58(c); // 800C5AD8
  c->f[1]=c->f[31]; // 800C5ADC
  c->r[3]=c->r[1]+0x0000003Cu; // 800C5AE0
  c->r[4]=c->r[3]|c->r[3]; // 800C5AE4
  c->lr=0x800C5AECu; f_80064C58(c); // 800C5AE8
  c->r[3]=c->r[1]+0x00000030u; // 800C5AEC
  c->r[5]=c->r[1]+0x0000003Cu; // 800C5AF0
  c->r[4]=c->r[3]|c->r[3]; // 800C5AF4
  c->lr=0x800C5AFCu; f_80064C34(c); // 800C5AF8
  c->r[3]=c->r[1]+0x0000006Cu; // 800C5AFC
  c->r[4]=c->r[1]+0x00000010u; // 800C5B00
  c->lr=0x800C5B08u; f_80264EAC(c); // 800C5B04
  c->r[0]=0u+0x00000006u; // 800C5B08
  c->r[5]=c->r[1]+0x00000164u; // 800C5B0C
  c->r[4]=c->r[1]+0x00000068u; // 800C5B10
  c->ctr=c->r[0]; // 800C5B14
L_800C5B18:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5B18
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5B1C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5B20
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5B24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5B18; } // 800C5B28
  c->r[3]=c->r[1]+0x00000168u; // 800C5B2C
  c->r[4]=c->r[1]+0x00000030u; // 800C5B30
  c->lr=0x800C5B38u; f_80032FF4(c); // 800C5B34
  c->r[3]=c->r[1]+0x000001C8u; // 800C5B38
  c->r[4]=c->r[1]+0x0000009Cu; // 800C5B3C
  c->lr=0x800C5B44u; f_80264994(c); // 800C5B40
  c->r[3]=c->r[1]+0x0000009Cu; // 800C5B44
  c->r[4]=c->r[1]+0x00000168u; // 800C5B48
  c->r[5]=c->r[1]+0x000000CCu; // 800C5B4C
  c->lr=0x800C5B54u; f_802646E0(c); // 800C5B50
  c->r[0]=0u+0x00000006u; // 800C5B54
  c->r[5]=c->r[1]+0x00000194u; // 800C5B58
  c->r[4]=c->r[1]+0x000000C8u; // 800C5B5C
  c->ctr=c->r[0]; // 800C5B60
L_800C5B64:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5B64
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5B68
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5B6C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5B70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5B64; } // 800C5B74
  c->r[3]=c->r[30]+0x000008ECu; // 800C5B78
  c->r[4]=c->r[1]+0x00000198u; // 800C5B7C
  c->lr=0x800C5B84u; f_8016A37C(c); // 800C5B80
L_800C5B84:;
  c->r[3]=0u+0x00000000u; // 800C5B84
  c->r[0]=0u+0x00000007u; // 800C5B88
  W32(c->r[1]+0x000000FCu,c->r[3]); // 800C5B8C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C5B90
  c->r[4]=c->r[1]+0x000000F8u; // 800C5B94
  c->ctr=c->r[0]; // 800C5B98
L_800C5B9C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5B9C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5BA0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5BA4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5BA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5B9C; } // 800C5BAC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5BB0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5BB4
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,31,ea,0,0);} // 800C5BB8
  {uint32_t ea=c->r[1]+0x00000210u; c->f[31]=RF64(ea);} // 800C5BBC
  c->r[11]=c->r[1]+0x00000210u; // 800C5BC0
  c->lr=0x800C5BC8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C5BC4
  c->r[0]=R32(c->r[1]+0x00000224u); // 800C5BC8
  c->lr=c->r[0]; // 800C5BCC
  c->r[1]=c->r[1]+0x00000220u; // 800C5BD0
  return; // 800C5BD4
}

// fn_800C5BD8
void f_800C5BD8(Ctx* __restrict c) {
  trace_call(0x800C5BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5BD8
  c->r[0]=c->lr; // 800C5BDC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800C5BE0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800C5BE4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800C5BE8
  c->r[11]=c->r[1]+0x000000A0u; // 800C5BEC
  c->lr=0x800C5BF4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C5BF0
  c->r[31]=c->r[3]|c->r[3]; // 800C5BF4
  c->r[3]=c->r[5]|c->r[5]; // 800C5BF8
  c->r[29]=c->r[6]|c->r[6]; // 800C5BFC
  c->lr=0x800C5C04u; f_80068A78(c); // 800C5C00
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5C04
  c->r[30]=c->r[3]|c->r[3]; // 800C5C08
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C5C0C
  c->ctr=c->r[12]; // 800C5C10
  if (true) { c->lr=0x800C5C18u; dispatch(c,c->ctr); } // 800C5C14
  c->r[4]=c->r[3]|c->r[3]; // 800C5C18
  c->r[3]=c->r[1]+0x00000020u; // 800C5C1C
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C5C20
  c->r[5]=c->r[29]+0x00000004u; // 800C5C24
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C5C28
  c->ctr=c->r[12]; // 800C5C2C
  if (true) { c->lr=0x800C5C34u; dispatch(c,c->ctr); } // 800C5C30
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5C34
  c->r[3]=c->r[1]+0x00000014u; // 800C5C38
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5C3C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C5C40
  c->lr=0x800C5C48u; f_800521A0(c); // 800C5C44
  c->lr=0x800C5C4Cu; f_80128B5C(c); // 800C5C48
  c->r[4]=c->r[3]|c->r[3]; // 800C5C4C
  c->r[3]=c->r[1]+0x00000008u; // 800C5C50
  c->r[4]=c->r[4]+0x00000020u; // 800C5C54
  c->lr=0x800C5C5Cu; f_8003F484(c); // 800C5C58
  c->r[3]=c->r[1]+0x00000020u; // 800C5C5C
  {uint32_t ea=c->r[29]+0x00000040u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C5C60
  c->r[4]=c->r[3]|c->r[3]; // 800C5C64
  c->lr=0x800C5C6Cu; f_80264994(c); // 800C5C68
  c->r[4]=c->r[1]+0x00000008u; // 800C5C6C
  c->r[3]=c->r[1]+0x00000020u; // 800C5C70
  c->r[5]=c->r[4]|c->r[4]; // 800C5C74
  c->lr=0x800C5C7Cu; f_802652E8(c); // 800C5C78
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5C7C
  c->r[29]=0u+0x00000001u; // 800C5C80
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5C84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C5C88
  c->r[5]=R32(c->r[30]+0x000004A8u); // 800C5C8C
  c->r[4]=R8(c->r[5]+0x00000002u); // 800C5C90
  c->r[0]=R8(c->r[5]+0x00000001u); // 800C5C94
  c->r[3]=R8(c->r[5]+0x00000000u); // 800C5C98
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800C5C9C
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 800C5CA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C5CA4
  c->r[4]=rotl(c->r[3],24)&0xFF000000u; // 800C5CA8
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800C5CAC
  c->r[0]=c->r[5]+c->r[4]; // 800C5CB0
  c->r[3]=c->r[3]+c->r[0]; // 800C5CB4
  c->r[0]=c->r[3]+0xBAB40000u; // 800C5CB8
  cmpu(c,0,c->r[0],0x00004B00u); // 800C5CBC
  if (crb(c,2)) { goto L_800C5D24; } // 800C5CC0
  c->r[0]=c->r[3]+0xBAB50000u; // 800C5CC4
  cmpu(c,0,c->r[0],0x00004D00u); // 800C5CC8
  if (crb(c,2)) { goto L_800C5D24; } // 800C5CCC
  {uint32_t ea=c->r[2]+0xFFFF8EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5CD0
  fcmp(c,0,c->f[1],c->f[0]); // 800C5CD4
  if (crb(c,1)) { goto L_800C5CE8; } // 800C5CD8
  {uint32_t ea=c->r[2]+0xFFFF8F08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5CDC
  fcmp(c,0,c->f[1],c->f[0]); // 800C5CE0
  if (!crb(c,0)) { goto L_800C5D24; } // 800C5CE4
L_800C5CE8:;
  c->r[3]=c->r[1]+0x00000050u; // 800C5CE8
  c->r[4]=0u+0x00000000u; // 800C5CEC
  c->lr=0x800C5CF4u; f_800BDBB4(c); // 800C5CF0
  c->r[0]=0u+0x00000007u; // 800C5CF4
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C5CF8
  c->r[4]=c->r[1]+0x0000004Cu; // 800C5CFC
  c->ctr=c->r[0]; // 800C5D00
L_800C5D04:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5D04
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5D08
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5D0C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5D10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5D04; } // 800C5D14
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5D18
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5D1C
  goto L_800C5D74; // 800C5D20
L_800C5D24:;
  c->r[3]=c->r[1]+0x00000008u; // 800C5D24
  c->lr=0x800C5D2Cu; f_800653A4(c); // 800C5D28
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800C5D2C
  fcmp(c,0,c->f[0],c->f[1]); // 800C5D30
  if (!crb(c,0)) { goto L_800C5D3C; } // 800C5D34
  c->r[29]=0u+0x00000000u; // 800C5D38
L_800C5D3C:;
  c->r[4]=c->r[29]|c->r[29]; // 800C5D3C
  c->r[3]=c->r[1]+0x00000050u; // 800C5D40
  c->lr=0x800C5D48u; f_800BDBB4(c); // 800C5D44
  c->r[0]=0u+0x00000007u; // 800C5D48
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C5D4C
  c->r[4]=c->r[1]+0x0000004Cu; // 800C5D50
  c->ctr=c->r[0]; // 800C5D54
L_800C5D58:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5D58
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5D5C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5D60
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5D64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5D58; } // 800C5D68
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5D6C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5D70
L_800C5D74:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800C5D74
  c->r[11]=c->r[1]+0x000000A0u; // 800C5D78
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800C5D7C
  c->lr=0x800C5D84u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C5D80
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800C5D84
  c->lr=c->r[0]; // 800C5D88
  c->r[1]=c->r[1]+0x000000B0u; // 800C5D8C
  return; // 800C5D90
}

// fn_800C5D94
void f_800C5D94(Ctx* __restrict c) {
  trace_call(0x800C5D94u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5D94
  c->r[0]=c->lr; // 800C5D98
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C5D9C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800C5DA0
  c->r[31]=c->r[6]|c->r[6]; // 800C5DA4
  W32(c->r[1]+0x00000098u,c->r[30]); // 800C5DA8
  c->r[30]=c->r[3]|c->r[3]; // 800C5DAC
  c->r[3]=c->r[5]|c->r[5]; // 800C5DB0
  c->lr=0x800C5DB8u; f_80068A78(c); // 800C5DB4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5DB8
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C5DBC
  c->ctr=c->r[12]; // 800C5DC0
  if (true) { c->lr=0x800C5DC8u; dispatch(c,c->ctr); } // 800C5DC4
  c->r[4]=c->r[3]|c->r[3]; // 800C5DC8
  c->r[3]=c->r[1]+0x00000020u; // 800C5DCC
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C5DD0
  c->r[5]=c->r[31]+0x00000004u; // 800C5DD4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C5DD8
  c->ctr=c->r[12]; // 800C5DDC
  if (true) { c->lr=0x800C5DE4u; dispatch(c,c->ctr); } // 800C5DE0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5DE4
  c->r[3]=c->r[1]+0x00000014u; // 800C5DE8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5DEC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C5DF0
  c->lr=0x800C5DF8u; f_800521A0(c); // 800C5DF4
  c->lr=0x800C5DFCu; f_80128B5C(c); // 800C5DF8
  c->r[4]=c->r[3]|c->r[3]; // 800C5DFC
  c->r[3]=c->r[1]+0x00000008u; // 800C5E00
  c->r[4]=c->r[4]+0x00000020u; // 800C5E04
  c->lr=0x800C5E0Cu; f_8003F484(c); // 800C5E08
  c->r[3]=c->r[1]+0x00000020u; // 800C5E0C
  c->r[4]=c->r[3]|c->r[3]; // 800C5E10
  c->lr=0x800C5E18u; f_80264994(c); // 800C5E14
  c->r[4]=c->r[1]+0x00000008u; // 800C5E18
  c->r[3]=c->r[1]+0x00000020u; // 800C5E1C
  c->r[5]=c->r[4]|c->r[4]; // 800C5E20
  c->lr=0x800C5E28u; f_802652E8(c); // 800C5E24
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5E28
  c->r[3]=c->r[1]+0x00000008u; // 800C5E2C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C5E30
  c->lr=0x800C5E38u; f_800653A4(c); // 800C5E34
  c->r[3]=0u+0x00000001u; // 800C5E38
  c->r[0]=0u+0x00000007u; // 800C5E3C
  W32(c->r[1]+0x00000050u,c->r[3]); // 800C5E40
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C5E44
  c->r[4]=c->r[1]+0x0000004Cu; // 800C5E48
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800C5E4C
  c->ctr=c->r[0]; // 800C5E50
L_800C5E54:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5E54
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5E58
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5E5C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5E60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5E54; } // 800C5E64
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5E68
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5E6C
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800C5E70
  c->r[30]=R32(c->r[1]+0x00000098u); // 800C5E74
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C5E78
  c->lr=c->r[0]; // 800C5E7C
  c->r[1]=c->r[1]+0x000000A0u; // 800C5E80
  return; // 800C5E84
}

// fn_800C5E88
void f_800C5E88(Ctx* __restrict c) {
  trace_call(0x800C5E88u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5E88
  c->r[0]=c->lr; // 800C5E8C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C5E90
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800C5E94
  c->r[31]=c->r[3]|c->r[3]; // 800C5E98
  c->r[3]=c->r[5]|c->r[5]; // 800C5E9C
  c->lr=0x800C5EA4u; f_80068A78(c); // 800C5EA0
  c->r[4]=c->r[3]|c->r[3]; // 800C5EA4
  {uint32_t ea=c->r[4]+0x000008D0u; c->r[12]=R32(ea); c->r[4]=ea;} // 800C5EA8
  c->r[3]=c->r[1]+0x00000020u; // 800C5EAC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C5EB0
  c->ctr=c->r[12]; // 800C5EB4
  if (true) { c->lr=0x800C5EBCu; dispatch(c,c->ctr); } // 800C5EB8
  c->r[3]=c->r[1]+0x00000014u; // 800C5EBC
  c->r[4]=c->r[1]+0x00000020u; // 800C5EC0
  c->lr=0x800C5EC8u; f_80032FD8(c); // 800C5EC4
  c->lr=0x800C5ECCu; f_80128B5C(c); // 800C5EC8
  c->r[4]=c->r[3]|c->r[3]; // 800C5ECC
  c->r[3]=c->r[1]+0x00000008u; // 800C5ED0
  c->r[4]=c->r[4]+0x00000020u; // 800C5ED4
  c->lr=0x800C5EDCu; f_8003F484(c); // 800C5ED8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C5EDC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C5EE0
  {uint32_t ea=c->r[2]+0xFFFF8F08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5EE4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800C5EE8
  fcmp(c,0,c->f[1],c->f[0]); // 800C5EEC
  if (!crb(c,1)) { goto L_800C5F10; } // 800C5EF0
  {uint32_t ea=c->r[2]+0xFFFF8EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C5EF4
  fcmp(c,0,c->f[1],c->f[0]); // 800C5EF8
  if (!crb(c,0)) { goto L_800C5F10; } // 800C5EFC
  c->r[3]=c->r[1]+0x00000050u; // 800C5F00
  c->r[4]=0u+0x00000001u; // 800C5F04
  c->lr=0x800C5F0Cu; f_800BDBB4(c); // 800C5F08
  goto L_800C5F1C; // 800C5F0C
L_800C5F10:;
  c->r[3]=c->r[1]+0x00000050u; // 800C5F10
  c->r[4]=0u+0x00000000u; // 800C5F14
  c->lr=0x800C5F1Cu; f_800BDBB4(c); // 800C5F18
L_800C5F1C:;
  c->r[0]=0u+0x00000007u; // 800C5F1C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C5F20
  c->r[4]=c->r[1]+0x0000004Cu; // 800C5F24
  c->ctr=c->r[0]; // 800C5F28
L_800C5F2C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C5F2C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C5F30
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C5F34
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C5F38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5F2C; } // 800C5F3C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C5F40
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C5F44
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800C5F48
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C5F4C
  c->lr=c->r[0]; // 800C5F50
  c->r[1]=c->r[1]+0x000000A0u; // 800C5F54
  return; // 800C5F58
}

// fn_800C5F5C
void f_800C5F5C(Ctx* __restrict c) {
  trace_call(0x800C5F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5F5C
  c->r[0]=c->lr; // 800C5F60
  W32(c->r[1]+0x00000164u,c->r[0]); // 800C5F64
  c->r[11]=c->r[1]+0x00000160u; // 800C5F68
  c->lr=0x800C5F70u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C5F6C
  c->r[31]=c->r[1]|c->r[1]; // 800C5F70
  c->r[28]=c->r[5]|c->r[5]; // 800C5F74
  c->r[29]=c->r[3]|c->r[3]; // 800C5F78
  c->r[27]=c->r[6]|c->r[6]; // 800C5F7C
  c->r[3]=c->r[28]|c->r[28]; // 800C5F80
  c->lr=0x800C5F88u; f_80068A78(c); // 800C5F84
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C5F88
  c->r[30]=c->r[3]|c->r[3]; // 800C5F8C
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C5F90
  c->ctr=c->r[12]; // 800C5F94
  if (true) { c->lr=0x800C5F9Cu; dispatch(c,c->ctr); } // 800C5F98
  c->r[4]=c->r[3]|c->r[3]; // 800C5F9C
  c->r[3]=c->r[31]+0x0000009Cu; // 800C5FA0
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C5FA4
  c->r[5]=c->r[27]+0x00000004u; // 800C5FA8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C5FAC
  c->ctr=c->r[12]; // 800C5FB0
  if (true) { c->lr=0x800C5FB8u; dispatch(c,c->ctr); } // 800C5FB4
  c->r[3]=c->r[31]+0x00000048u; // 800C5FB8
  c->r[4]=c->r[31]+0x0000009Cu; // 800C5FBC
  c->lr=0x800C5FC4u; f_80032FD8(c); // 800C5FC0
  c->r[12]=R32(c->r[30]+0x00000010u); // 800C5FC4
  c->r[3]=c->r[30]|c->r[30]; // 800C5FC8
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C5FCC
  c->ctr=c->r[12]; // 800C5FD0
  if (true) { c->lr=0x800C5FD8u; dispatch(c,c->ctr); } // 800C5FD4
  c->r[4]=c->r[3]|c->r[3]; // 800C5FD8
  c->r[3]=c->r[31]+0x0000006Cu; // 800C5FDC
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C5FE0
  c->r[5]=c->r[27]+0x00000040u; // 800C5FE4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C5FE8
  c->ctr=c->r[12]; // 800C5FEC
  if (true) { c->lr=0x800C5FF4u; dispatch(c,c->ctr); } // 800C5FF0
  c->r[3]=c->r[31]+0x0000003Cu; // 800C5FF4
  c->r[4]=c->r[31]+0x0000006Cu; // 800C5FF8
  c->lr=0x800C6000u; f_80032FD8(c); // 800C5FFC
  c->r[3]=c->r[31]+0x00000030u; // 800C6000
  c->r[4]=c->r[31]+0x0000003Cu; // 800C6004
  c->r[5]=c->r[31]+0x00000048u; // 800C6008
  c->r[30]=0u+0x00000000u; // 800C600C
  c->lr=0x800C6014u; f_80064C74(c); // 800C6010
  c->r[3]=c->r[31]+0x00000108u; // 800C6014
  c->lr=0x800C601Cu; f_80063ACC(c); // 800C6018
  c->r[5]=0u+0x803F0000u; // 800C601C
  c->r[3]=c->r[31]+0x0000012Cu; // 800C6020
  c->r[5]=c->r[5]+0x00001AC0u; // 800C6024
  c->r[4]=c->r[31]+0x00000048u; // 800C6028
  W32(c->r[31]+0x00000128u,c->r[5]); // 800C602C
  c->lr=0x800C6034u; f_8003F484(c); // 800C6030
  c->r[3]=c->r[31]+0x00000138u; // 800C6034
  c->r[4]=c->r[31]+0x00000030u; // 800C6038
  c->lr=0x800C6040u; f_8003F484(c); // 800C603C
  c->r[4]=c->r[28]|c->r[28]; // 800C6040
  c->r[3]=c->r[31]+0x00000114u; // 800C6044
  c->lr=0x800C604Cu; f_80063D44(c); // 800C6048
  c->r[0]=R8(c->r[13]+0xFFFF9511u); // 800C604C
  c->r[3]=0u+0xE0000000u; // 800C6050
  c->r[3]=c->r[3]+0x00000002u; // 800C6054
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C6058
  W32(c->r[31]+0x00000110u,c->r[3]); // 800C605C
  if (!crb(c,2)) { goto L_800C6090; } // 800C6060
  c->r[28]=0u+0x80470000u; // 800C6064
  c->r[3]=c->r[28]+0x00001D4Cu; // 800C6068
  c->lr=0x800C6070u; f_8003F3AC(c); // 800C606C
  c->r[4]=0u+0x80040000u; // 800C6070
  c->r[5]=0u+0x80470000u; // 800C6074
  c->r[3]=c->r[28]+0x00001D4Cu; // 800C6078
  c->r[4]=c->r[4]+0xFFFFF3FCu; // 800C607C
  c->r[5]=c->r[5]+0x00001D40u; // 800C6080
  c->lr=0x800C6088u; f_802895A4(c); // 800C6084
  c->r[0]=0u+0x00000001u; // 800C6088
  W8(c->r[13]+0xFFFF9511u,c->r[0]); // 800C608C
L_800C6090:;
  c->r[0]=0u+0x80470000u; // 800C6090
  c->r[28]=addc(c,c->r[0],0x00001D4Cu,0); cr0(c,c->r[28]); // 800C6094
  if (crb(c,2)) { goto L_800C60BC; } // 800C6098
  W32(c->r[31]+0x00000068u,c->r[1]); // 800C609C
  c->r[3]=c->r[28]|c->r[28]; // 800C60A0
  c->lr=0x800C60A8u; f_8003F3AC(c); // 800C60A4
  goto L_800C60BC; // 800C60A8
  c->r[3]=0u+0x00000000u; // 800C60AC
  c->r[4]=0u+0x00000000u; // 800C60B0
  c->r[5]=0u+0x00000000u; // 800C60B4
  c->lr=0x800C60BCu; f_8028BC3C(c); // 800C60B8
L_800C60BC:;
  c->lr=0x800C60C0u; f_8003DA30(c); // 800C60BC
  c->lr=0x800C60C4u; f_8003ED58(c); // 800C60C0
  W32(c->r[31]+0x00000028u,c->r[3]); // 800C60C4
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 800C60C8
  c->lr=0x800C60D0u; f_8003DA30(c); // 800C60CC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800C60D0
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800C60D4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800C60D8
  W32(c->r[31]+0x00000020u,c->r[0]); // 800C60DC
  c->lr=0x800C60E4u; f_8003DA30(c); // 800C60E0
  c->r[7]=c->r[28]|c->r[28]; // 800C60E4
  c->r[4]=c->r[31]+0x00000108u; // 800C60E8
  c->r[5]=c->r[31]+0x00000020u; // 800C60EC
  c->r[6]=c->r[31]+0x0000001Cu; // 800C60F0
  c->lr=0x800C60F8u; f_8003E534(c); // 800C60F4
  W32(c->r[31]+0x00000024u,c->r[3]); // 800C60F8
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 800C60FC
  goto L_800C6160; // 800C6100
L_800C6104:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 800C6104
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6108
  {uint32_t ea=c->r[3]+0x0000039Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C610C
  fcmp(c,0,c->f[1],c->f[0]); // 800C6110
  if (!crb(c,1)) { goto L_800C6120; } // 800C6114
  c->r[30]=0u+0x00000001u; // 800C6118
  goto L_800C6188; // 800C611C
L_800C6120:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800C6120
  c->r[4]=0u+0x00000000u; // 800C6124
  c->lr=0x800C612Cu; f_8003ED68(c); // 800C6128
  c->lr=0x800C6130u; f_8003DA30(c); // 800C612C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800C6130
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800C6134
  W32(c->r[31]+0x00000010u,c->r[3]); // 800C6138
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C613C
  c->lr=0x800C6144u; f_8003DA30(c); // 800C6140
  c->r[7]=c->r[28]|c->r[28]; // 800C6144
  c->r[4]=c->r[31]+0x00000108u; // 800C6148
  c->r[5]=c->r[31]+0x00000014u; // 800C614C
  c->r[6]=c->r[31]+0x00000010u; // 800C6150
  c->lr=0x800C6158u; f_8003E534(c); // 800C6154
  W32(c->r[31]+0x00000018u,c->r[3]); // 800C6158
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 800C615C
L_800C6160:;
  c->lr=0x800C6164u; f_8003DA30(c); // 800C6160
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800C6164
  c->r[3]=c->r[31]+0x0000000Cu; // 800C6168
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800C616C
  c->r[4]=c->r[31]+0x00000008u; // 800C6170
  W32(c->r[31]+0x00000008u,c->r[5]); // 800C6174
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800C6178
  c->lr=0x800C6180u; f_8003ED7C(c); // 800C617C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6180
  if (!crb(c,2)) { IRQCHK(c); goto L_800C6104; } // 800C6184
L_800C6188:;
  c->r[4]=c->r[30]|c->r[30]; // 800C6188
  c->r[3]=c->r[31]+0x000000CCu; // 800C618C
  c->lr=0x800C6194u; f_800BDBB4(c); // 800C6190
  c->r[0]=0u+0x00000007u; // 800C6194
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C6198
  c->r[4]=c->r[31]+0x000000C8u; // 800C619C
  c->ctr=c->r[0]; // 800C61A0
L_800C61A4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C61A4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C61A8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C61AC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C61B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C61A4; } // 800C61B4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C61B8
  c->r[10]=c->r[31]|c->r[31]; // 800C61BC
  c->r[11]=c->r[10]+0x00000160u; // 800C61C0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C61C4
  c->lr=0x800C61CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C61C8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C61CC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C61D0
  c->r[1]=c->r[10]|c->r[10]; // 800C61D4
  c->lr=c->r[0]; // 800C61D8
  return; // 800C61DC
}

// fn_800C61E0
void f_800C61E0(Ctx* __restrict c) {
  trace_call(0x800C61E0u);
  {uint32_t ea=c->r[1]+0xFFFFD4B0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C61E0
  c->r[0]=c->lr; // 800C61E4
  W32(c->r[1]+0x00002B54u,c->r[0]); // 800C61E8
  c->r[0]=0u+0x00002B48u; // 800C61EC
  {uint32_t ea=c->r[1]+0x00002B40u; WF64(ea,c->f[31]);} // 800C61F0
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800C61F4
  c->r[11]=c->r[1]+0x00002B40u; // 800C61F8
  c->lr=0x800C6200u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C61FC
  c->r[27]=c->r[5]|c->r[5]; // 800C6200
  c->r[30]=c->r[3]|c->r[3]; // 800C6204
  c->r[28]=c->r[6]|c->r[6]; // 800C6208
  c->r[3]=c->r[27]|c->r[27]; // 800C620C
  c->lr=0x800C6214u; f_80068A78(c); // 800C6210
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C6214
  c->r[4]=0u+0x69630000u; // 800C6218
  c->r[31]=c->r[3]|c->r[3]; // 800C621C
  c->r[12]=R32(c->r[12]+0x00000354u); // 800C6220
  c->r[4]=c->r[4]+0x00007279u; // 800C6224
  c->ctr=c->r[12]; // 800C6228
  if (true) { c->lr=0x800C6230u; dispatch(c,c->ctr); } // 800C622C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6230
  if (crb(c,2)) { goto L_800C6290; } // 800C6234
  c->r[0]=R8(c->r[3]+0x00000008u); // 800C6238
  cmps(c,0,(int32_t)c->r[0],0); // 800C623C
  if (!crb(c,2)) { goto L_800C6254; } // 800C6240
  c->r[3]=c->r[1]+0x000000C8u; // 800C6244
  c->r[4]=0u+0x00000000u; // 800C6248
  c->lr=0x800C6250u; f_800BDBB4(c); // 800C624C
  goto L_800C6260; // 800C6250
L_800C6254:;
  c->r[3]=c->r[1]+0x000000C8u; // 800C6254
  c->r[4]=0u+0x00000001u; // 800C6258
  c->lr=0x800C6260u; f_800BDBB4(c); // 800C625C
L_800C6260:;
  c->r[0]=0u+0x00000007u; // 800C6260
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C6264
  c->r[4]=c->r[1]+0x000000C4u; // 800C6268
  c->ctr=c->r[0]; // 800C626C
L_800C6270:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C6270
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C6274
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C6278
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C627C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6270; } // 800C6280
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C6284
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C6288
  goto L_800C6538; // 800C628C
L_800C6290:;
  c->r[3]=c->r[27]|c->r[27]; // 800C6290
  c->lr=0x800C6298u; f_80068A78(c); // 800C6294
  c->r[4]=c->r[3]|c->r[3]; // 800C6298
  {uint32_t ea=c->r[4]+0x000008D0u; c->r[12]=R32(ea); c->r[4]=ea;} // 800C629C
  c->r[3]=c->r[1]+0x0000005Cu; // 800C62A0
  c->r[5]=c->r[28]+0x00000004u; // 800C62A4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C62A8
  c->ctr=c->r[12]; // 800C62AC
  if (true) { c->lr=0x800C62B4u; dispatch(c,c->ctr); } // 800C62B0
  c->r[3]=c->r[1]+0x00000050u; // 800C62B4
  c->r[4]=c->r[1]+0x0000005Cu; // 800C62B8
  c->lr=0x800C62C0u; f_80032FD8(c); // 800C62BC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C62C0
  {uint32_t ea=c->r[28]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C62C4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800C62C8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800C62CC
  c->lr=0x800C62D4u; f_80128B5C(c); // 800C62D0
  c->r[4]=c->r[3]|c->r[3]; // 800C62D4
  c->r[3]=c->r[1]+0x00000038u; // 800C62D8
  c->r[4]=c->r[4]+0x00000020u; // 800C62DC
  c->lr=0x800C62E4u; f_8003F484(c); // 800C62E0
  c->r[3]=c->r[1]+0x00000044u; // 800C62E4
  c->r[4]=c->r[1]+0x00000038u; // 800C62E8
  c->lr=0x800C62F0u; f_8003F468(c); // 800C62EC
  c->r[3]=c->r[1]+0x00001D30u; // 800C62F0
  c->lr=0x800C62F8u; f_800462E8(c); // 800C62F4
  c->r[3]=c->r[1]+0x00000F38u; // 800C62F8
  c->lr=0x800C6300u; f_800462E8(c); // 800C62FC
  c->r[28]=0u+0x80450000u; // 800C6300
  c->r[4]=c->r[1]+0x00000F38u; // 800C6304
  c->r[3]=c->r[28]+0xFFFFC69Cu; // 800C6308
  c->r[5]=c->r[1]+0x00000050u; // 800C630C
  c->r[6]=c->r[1]+0x00000044u; // 800C6310
  c->r[7]=0u+0x00000000u; // 800C6314
  c->lr=0x800C631Cu; f_80044D14(c); // 800C6318
  c->r[29]=c->r[3]|c->r[3]; // 800C631C
  c->r[3]=c->r[28]+0xFFFFC69Cu; // 800C6320
  c->r[4]=c->r[1]+0x00001D30u; // 800C6324
  c->r[5]=c->r[1]+0x00000044u; // 800C6328
  c->r[6]=c->r[1]+0x00000050u; // 800C632C
  c->r[7]=0u+0x00000000u; // 800C6330
  c->lr=0x800C6338u; f_80044D14(c); // 800C6334
  c->r[28]=c->r[3]|c->r[29]; cr0(c,c->r[28]); // 800C6338
  if (!crb(c,2)) { goto L_800C649C; } // 800C633C
  c->r[3]=R32(c->r[27]+0x00000000u); // 800C6340
  c->r[0]=R32(c->r[27]+0x00000004u); // 800C6344
  W32(c->r[1]+0x00000024u,c->r[3]); // 800C6348
  W32(c->r[1]+0x00000028u,c->r[0]); // 800C634C
  c->lr=0x800C6354u; f_80128B5C(c); // 800C6350
  c->r[4]=c->r[1]+0x00000024u; // 800C6354
  c->lr=0x800C635Cu; f_8012BDE8(c); // 800C6358
  cmpu(c,0,c->r[3],0x00000001u); // 800C635C
  if (crb(c,1)) { goto L_800C636C; } // 800C6360
  c->r[28]=0u+0x00000000u; // 800C6364
  goto L_800C649C; // 800C6368
L_800C636C:;
  c->r[3]=c->r[1]+0x0000002Cu; // 800C636C
  c->r[4]=c->r[1]+0x00000044u; // 800C6370
  c->r[5]=c->r[1]+0x00000050u; // 800C6374
  c->lr=0x800C637Cu; f_80064C74(c); // 800C6378
  c->r[3]=c->r[1]+0x0000008Cu; // 800C637C
  c->lr=0x800C6384u; f_80063ACC(c); // 800C6380
  c->r[5]=0u+0x803F0000u; // 800C6384
  c->r[3]=c->r[1]+0x000000B0u; // 800C6388
  c->r[5]=c->r[5]+0x00001AC0u; // 800C638C
  c->r[4]=c->r[1]+0x00000050u; // 800C6390
  W32(c->r[1]+0x000000ACu,c->r[5]); // 800C6394
  c->lr=0x800C639Cu; f_8003F484(c); // 800C6398
  c->r[3]=c->r[1]+0x000000BCu; // 800C639C
  c->r[4]=c->r[1]+0x0000002Cu; // 800C63A0
  c->lr=0x800C63A8u; f_8003F484(c); // 800C63A4
  c->r[4]=c->r[27]|c->r[27]; // 800C63A8
  c->r[3]=c->r[1]+0x00000098u; // 800C63AC
  c->lr=0x800C63B4u; f_80063D44(c); // 800C63B0
  c->r[3]=0u+0xE0000000u; // 800C63B4
  c->r[4]=0u+0x00000001u; // 800C63B8
  c->r[0]=c->r[3]+0x00000002u; // 800C63BC
  W8(c->r[1]+0x00000090u,c->r[4]); // 800C63C0
  c->r[3]=c->r[1]+0x00000104u; // 800C63C4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C63C8
  c->lr=0x800C63D0u; f_8003F3AC(c); // 800C63CC
  c->lr=0x800C63D4u; f_8003DA30(c); // 800C63D0
  c->lr=0x800C63D8u; f_8003ED58(c); // 800C63D4
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C63D8
  c->lr=0x800C63E0u; f_8003DA30(c); // 800C63DC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800C63E0
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C63E4
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C63E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C63EC
  c->lr=0x800C63F4u; f_8003DA30(c); // 800C63F0
  c->r[4]=c->r[1]+0x0000008Cu; // 800C63F4
  c->r[5]=c->r[1]+0x0000001Cu; // 800C63F8
  c->r[6]=c->r[1]+0x00000018u; // 800C63FC
  c->r[7]=c->r[1]+0x00000104u; // 800C6400
  c->lr=0x800C6408u; f_8003E534(c); // 800C6404
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C6408
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C640C
  goto L_800C6468; // 800C6410
L_800C6414:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 800C6414
  {uint32_t ea=c->r[3]+0x0000039Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6418
  fcmp(c,0,c->f[0],c->f[31]); // 800C641C
  if (!crb(c,1)) { goto L_800C642C; } // 800C6420
  c->r[28]=0u+0x00000001u; // 800C6424
  goto L_800C6490; // 800C6428
L_800C642C:;
  c->r[3]=c->r[1]+0x00000020u; // 800C642C
  c->r[4]=0u+0x00000000u; // 800C6430
  c->lr=0x800C6438u; f_8003ED68(c); // 800C6434
  c->lr=0x800C643Cu; f_8003DA30(c); // 800C6438
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800C643C
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C6440
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C6444
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6448
  c->lr=0x800C6450u; f_8003DA30(c); // 800C644C
  c->r[4]=c->r[1]+0x0000008Cu; // 800C6450
  c->r[5]=c->r[1]+0x00000014u; // 800C6454
  c->r[6]=c->r[1]+0x00000010u; // 800C6458
  c->r[7]=c->r[1]+0x00000104u; // 800C645C
  c->lr=0x800C6464u; f_8003E534(c); // 800C6460
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C6464
L_800C6468:;
  c->lr=0x800C646Cu; f_8003DA30(c); // 800C6468
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800C646C
  c->r[3]=c->r[1]+0x0000000Cu; // 800C6470
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C6474
  c->r[4]=c->r[1]+0x00000008u; // 800C6478
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C647C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C6480
  c->lr=0x800C6488u; f_8003ED7C(c); // 800C6484
  cmps(c,0,(int32_t)c->r[3],0); // 800C6488
  if (!crb(c,2)) { IRQCHK(c); goto L_800C6414; } // 800C648C
L_800C6490:;
  c->r[3]=c->r[1]+0x0000013Cu; // 800C6490
  c->r[4]=0u+0xFFFFFFFFu; // 800C6494
  c->lr=0x800C649Cu; f_80046394(c); // 800C6498
L_800C649C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800C649C
  if (crb(c,2)) { goto L_800C64B4; } // 800C64A0
  c->r[3]=c->r[1]+0x000000C8u; // 800C64A4
  c->r[4]=0u+0x00000000u; // 800C64A8
  c->lr=0x800C64B0u; f_800BDBB4(c); // 800C64AC
  goto L_800C64C0; // 800C64B0
L_800C64B4:;
  c->r[3]=c->r[1]+0x000000C8u; // 800C64B4
  c->r[4]=0u+0x00000001u; // 800C64B8
  c->lr=0x800C64C0u; f_800BDBB4(c); // 800C64BC
L_800C64C0:;
  c->r[3]=c->r[1]+0x000000C8u; // 800C64C0
  c->lr=0x800C64C8u; f_800797C0(c); // 800C64C4
  c->r[12]=R32(c->r[31]+0x00000010u); // 800C64C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C64CC
  c->r[0]=cntlz(c->r[0]); // 800C64D0
  c->r[4]=0u+0x69630000u; // 800C64D4
  c->r[12]=R32(c->r[12]+0x00000358u); // 800C64D8
  c->r[3]=c->r[31]|c->r[31]; // 800C64DC
  c->r[6]=0u+0x00000000u; // 800C64E0
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C64E4
  c->r[4]=c->r[4]+0x00007279u; // 800C64E8
  c->ctr=c->r[12]; // 800C64EC
  if (true) { c->lr=0x800C64F4u; dispatch(c,c->ctr); } // 800C64F0
  c->r[0]=0u+0x00000007u; // 800C64F4
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C64F8
  c->r[4]=c->r[1]+0x000000C4u; // 800C64FC
  c->ctr=c->r[0]; // 800C6500
L_800C6504:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C6504
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C6508
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C650C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C6510
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6504; } // 800C6514
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C6518
  c->r[3]=c->r[1]+0x00000F38u; // 800C651C
  c->r[4]=0u+0xFFFFFFFFu; // 800C6520
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C6524
  c->lr=0x800C652Cu; f_80046394(c); // 800C6528
  c->r[3]=c->r[1]+0x00001D30u; // 800C652C
  c->r[4]=0u+0xFFFFFFFFu; // 800C6530
  c->lr=0x800C6538u; f_80046394(c); // 800C6534
L_800C6538:;
  c->r[0]=0u+0x00002B48u; // 800C6538
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800C653C
  c->r[11]=c->r[1]+0x00002B40u; // 800C6540
  {uint32_t ea=c->r[1]+0x00002B40u; c->f[31]=RF64(ea);} // 800C6544
  c->lr=0x800C654Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6548
  c->r[0]=R32(c->r[1]+0x00002B54u); // 800C654C
  c->lr=c->r[0]; // 800C6550
  c->r[1]=c->r[1]+0x00002B50u; // 800C6554
  return; // 800C6558
}

// fn_800C655C
void f_800C655C(Ctx* __restrict c) {
  trace_call(0x800C655Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C655C
  c->r[0]=c->lr; // 800C6560
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C6564
  c->r[11]=c->r[1]+0x00000060u; // 800C6568
  c->lr=0x800C6570u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C656C
  c->r[31]=0u+0x80490000u; // 800C6570
  c->r[28]=c->r[3]|c->r[3]; // 800C6574
  c->r[29]=c->r[5]|c->r[5]; // 800C6578
  c->r[30]=c->r[6]|c->r[6]; // 800C657C
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C6580
  c->r[4]=c->r[6]+0x00000004u; // 800C6584
  c->r[5]=0u+0x00000000u; // 800C6588
  c->lr=0x800C6590u; f_8010453C(c); // 800C658C
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C6590
  c->lr=0x800C6598u; f_80102CC4(c); // 800C6594
  c->r[3]=c->r[31]+0xFFFFFCD0u; // 800C6598
  c->r[4]=c->r[30]+0x00000004u; // 800C659C
  c->lr=0x800C65A4u; f_80103094(c); // 800C65A0
  c->r[4]=c->r[3]|c->r[3]; // 800C65A4
  c->r[3]=c->r[1]+0x00000008u; // 800C65A8
  c->r[4]=R32(c->r[4]+0x00000010u); // 800C65AC
  c->lr=0x800C65B4u; f_8006C13C(c); // 800C65B0
  c->r[3]=c->r[29]|c->r[29]; // 800C65B4
  c->lr=0x800C65BCu; f_80068A78(c); // 800C65B8
  c->r[31]=c->r[3]|c->r[3]; // 800C65BC
  c->r[3]=c->r[30]+0x000000B4u; // 800C65C0
  c->lr=0x800C65C8u; f_800797C0(c); // 800C65C4
  c->r[4]=0u+0x804D0000u; // 800C65C8
  c->r[7]=c->r[3]|c->r[3]; // 800C65CC
  c->r[4]=c->r[4]+0x00003280u; // 800C65D0
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C65D4
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C65D8
  c->r[3]=c->r[31]+0x000008D0u; // 800C65DC
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C65E0
  c->r[4]=c->r[4]+0x00000044u; // 800C65E4
  c->r[5]=c->r[1]+0x00000008u; // 800C65E8
  c->r[6]=c->r[30]+0x00000040u; // 800C65EC
  c->r[8]=0u+0x00000000u; // 800C65F0
  c->r[9]=0u+0x00000000u; // 800C65F4
  c->lr=0x800C65FCu; f_8002D7D4(c); // 800C65F8
  c->r[3]=0u+0x00000000u; // 800C65FC
  c->r[0]=0u+0x00000007u; // 800C6600
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C6604
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C6608
  c->r[4]=c->r[1]+0x00000008u; // 800C660C
  c->ctr=c->r[0]; // 800C6610
L_800C6614:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C6614
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C6618
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C661C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C6620
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6614; } // 800C6624
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C6628
  c->r[11]=c->r[1]+0x00000060u; // 800C662C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C6630
  c->lr=0x800C6638u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6634
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C6638
  c->lr=c->r[0]; // 800C663C
  c->r[1]=c->r[1]+0x00000060u; // 800C6640
  return; // 800C6644
}

// fn_800C6648
void f_800C6648(Ctx* __restrict c) {
  trace_call(0x800C6648u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6648
  c->r[0]=c->lr; // 800C664C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C6650
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C6654
  c->r[31]=c->r[6]|c->r[6]; // 800C6658
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C665C
  c->r[30]=c->r[3]|c->r[3]; // 800C6660
  c->r[3]=c->r[5]|c->r[5]; // 800C6664
  c->lr=0x800C666Cu; f_80068A78(c); // 800C6668
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C666C
  c->r[3]=c->r[3]+0x000008ECu; // 800C6670
  c->lr=0x800C6678u; f_80167F64(c); // 800C6674
  c->r[3]=0u+0x00000000u; // 800C6678
  c->r[0]=0u+0x00000007u; // 800C667C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C6680
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C6684
  c->r[4]=c->r[1]+0x00000004u; // 800C6688
  c->ctr=c->r[0]; // 800C668C
L_800C6690:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C6690
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C6694
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C6698
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C669C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6690; } // 800C66A0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C66A4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C66A8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C66AC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800C66B0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C66B4
  c->lr=c->r[0]; // 800C66B8
  c->r[1]=c->r[1]+0x00000050u; // 800C66BC
  return; // 800C66C0
}

// fn_800C66C4
void f_800C66C4(Ctx* __restrict c) {
  trace_call(0x800C66C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C66C4
  c->r[0]=c->lr; // 800C66C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C66CC
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C66D0
  c->r[29]=c->r[3]|c->r[3]; // 800C66D4
  c->r[3]=c->r[5]|c->r[5]; // 800C66D8
  c->r[31]=c->r[6]|c->r[6]; // 800C66DC
  c->lr=0x800C66E4u; f_80068A78(c); // 800C66E0
  c->r[30]=c->r[3]|c->r[3]; // 800C66E4
  c->r[4]=c->r[31]+0x00000004u; // 800C66E8
  c->lr=0x800C66F0u; f_800C5614(c); // 800C66EC
  c->r[31]=c->r[3]|c->r[3]; // 800C66F0
  c->r[3]=c->r[30]|c->r[30]; // 800C66F4
  c->r[4]=0u+0x00000007u; // 800C66F8
  c->lr=0x800C6700u; f_800760EC(c); // 800C66FC
  cmps(c,0,(int32_t)c->r[3],0); // 800C6700
  if (crb(c,2)) { goto L_800C671C; } // 800C6704
  c->r[4]=R32(c->r[30]+0x00000050u); // 800C6708
  c->r[3]=c->r[1]+0x00000008u; // 800C670C
  c->r[4]=c->r[4]+0x00000010u; // 800C6710
  c->lr=0x800C6718u; f_800C12E4(c); // 800C6714
  goto L_800C6738; // 800C6718
L_800C671C:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 800C671C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800C6720
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C6724
  c->lr=0x800C672Cu; f_800C4CC4(c); // 800C6728
  c->r[4]=c->r[3]|c->r[3]; // 800C672C
  c->r[3]=c->r[1]+0x00000008u; // 800C6730
  c->lr=0x800C6738u; f_800C12E4(c); // 800C6734
L_800C6738:;
  c->r[0]=0u+0x00000007u; // 800C6738
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C673C
  c->r[4]=c->r[1]+0x00000004u; // 800C6740
  c->ctr=c->r[0]; // 800C6744
L_800C6748:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C6748
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C674C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C6750
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C6754
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6748; } // 800C6758
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C675C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C6760
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C6764
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C6768
  c->lr=c->r[0]; // 800C676C
  c->r[1]=c->r[1]+0x00000060u; // 800C6770
  return; // 800C6774
}

// fn_800C6778
void f_800C6778(Ctx* __restrict c) {
  trace_call(0x800C6778u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6778
  c->r[0]=c->lr; // 800C677C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C6780
  c->r[11]=c->r[1]+0x00000060u; // 800C6784
  c->lr=0x800C678Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6788
  c->r[29]=c->r[3]|c->r[3]; // 800C678C
  c->r[3]=c->r[5]|c->r[5]; // 800C6790
  c->r[30]=c->r[6]|c->r[6]; // 800C6794
  c->lr=0x800C679Cu; f_80068A78(c); // 800C6798
  c->r[31]=c->r[3]|c->r[3]; // 800C679C
  c->r[4]=c->r[30]+0x00000004u; // 800C67A0
  c->lr=0x800C67A8u; f_800C5614(c); // 800C67A4
  c->r[4]=R32(c->r[31]+0x00000974u); // 800C67A8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C67AC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C67B0
  c->r[3]=R32(c->r[4]+c->r[0]); // 800C67B4
  c->lr=0x800C67BCu; f_8016543C(c); // 800C67B8
  c->r[3]=0u+0x00000000u; // 800C67BC
  c->r[0]=0u+0x00000007u; // 800C67C0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C67C4
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C67C8
  c->r[4]=c->r[1]+0x00000004u; // 800C67CC
  c->ctr=c->r[0]; // 800C67D0
L_800C67D4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C67D4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C67D8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C67DC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C67E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C67D4; } // 800C67E4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C67E8
  c->r[11]=c->r[1]+0x00000060u; // 800C67EC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C67F0
  c->lr=0x800C67F8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C67F4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C67F8
  c->lr=c->r[0]; // 800C67FC
  c->r[1]=c->r[1]+0x00000060u; // 800C6800
  return; // 800C6804
}

// fn_800C6808
void f_800C6808(Ctx* __restrict c) {
  trace_call(0x800C6808u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6808
  c->r[0]=c->lr; // 800C680C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800C6810
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800C6814
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800C6818
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800C681C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800C6820
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 800C6824
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 800C6828
  c->r[11]=c->r[1]+0x00000090u; // 800C682C
  c->lr=0x800C6834u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6830
  c->r[31]=c->r[5]|c->r[5]; // 800C6834
  c->r[25]=c->r[3]|c->r[3]; // 800C6838
  c->r[26]=c->r[6]|c->r[6]; // 800C683C
  c->r[3]=c->r[31]|c->r[31]; // 800C6840
  c->lr=0x800C6848u; f_80068A78(c); // 800C6844
  c->r[30]=c->r[3]|c->r[3]; // 800C6848
  c->r[4]=c->r[26]+0x00000004u; // 800C684C
  c->r[29]=0u+0x00000000u; // 800C6850
L_800C6854:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C6854
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C6858
  cmps(c,0,(int32_t)c->r[0],76); // 800C685C
  if (!crb(c,2)) { goto L_800C6870; } // 800C6860
  c->r[29]=c->r[29]|0x00000001u; // 800C6864
  c->r[4]=c->r[4]+0x00000001u; // 800C6868
  IRQCHK(c); goto L_800C6854; // 800C686C
L_800C6870:;
  cmps(c,0,(int32_t)c->r[0],78); // 800C6870
  if (!crb(c,2)) { goto L_800C6884; } // 800C6874
  c->r[29]=c->r[29]|0x00000004u; // 800C6878
  c->r[4]=c->r[4]+0x00000001u; // 800C687C
  IRQCHK(c); goto L_800C6854; // 800C6880
L_800C6884:;
  c->r[3]=c->r[30]|c->r[30]; // 800C6884
  c->lr=0x800C688Cu; f_800C5614(c); // 800C6888
  {uint32_t ea=c->r[26]+0x0000007Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C688C
  c->r[28]=c->r[3]|c->r[3]; // 800C6890
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800C6894
  c->r[3]=c->r[26]+0x0000012Cu; // 800C6898
  {uint32_t ea=c->r[26]+0x000000F4u; c->f[29]=c->ps1[29]=RF32(ea);} // 800C689C
  c->r[27]=0u+0xFFFFFFFFu; // 800C68A0
  c->lr=0x800C68A8u; f_800ACC48(c); // 800C68A4
  cmps(c,0,(int32_t)c->r[3],0); // 800C68A8
  if (crb(c,2)) { goto L_800C68F8; } // 800C68AC
  c->r[12]=R32(c->r[30]+0x00000010u); // 800C68B0
  c->r[3]=c->r[30]|c->r[30]; // 800C68B4
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C68B8
  c->ctr=c->r[12]; // 800C68BC
  if (true) { c->lr=0x800C68C4u; dispatch(c,c->ctr); } // 800C68C0
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C68C4
  c->r[3]=c->r[1]+0x0000000Cu; // 800C68C8
  c->r[4]=c->r[26]+0x00000130u; // 800C68CC
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800C68D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C68D4
  c->lr=0x800C68DCu; f_80365B94(c); // 800C68D8
  cmps(c,0,(int32_t)c->r[3],0); // 800C68DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C68E0
  if (crb(c,2)) { goto L_800C6908; } // 800C68E4
  c->r[3]=c->r[1]+0x00000008u; // 800C68E8
  c->lr=0x800C68F0u; f_800772D8(c); // 800C68EC
  c->r[27]=c->r[3]|c->r[3]; // 800C68F0
  goto L_800C6908; // 800C68F4
L_800C68F8:;
  {uint32_t ea=c->r[26]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C68F8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C68FC
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800C6900
  c->r[27]=R32(c->r[1]+0x0000006Cu); // 800C6904
L_800C6908:;
  c->r[3]=c->r[31]|c->r[31]; // 800C6908
  c->r[30]=0u+0x00000000u; // 800C690C
  c->lr=0x800C6914u; f_80068A78(c); // 800C6910
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C6914
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C6918
  c->ctr=c->r[12]; // 800C691C
  if (true) { c->lr=0x800C6924u; dispatch(c,c->ctr); } // 800C6920
  W32(c->r[1]+0x00000024u,c->r[4]); // 800C6924
  c->r[4]=0u+0xC8000000u; // 800C6928
  W32(c->r[1]+0x00000020u,c->r[3]); // 800C692C
  c->r[3]=c->r[1]+0x00000020u; // 800C6930
  c->lr=0x800C6938u; f_8003EDD0(c); // 800C6934
  cmps(c,0,(int32_t)c->r[3],0); // 800C6938
  if (crb(c,2)) { goto L_800C6950; } // 800C693C
  c->r[3]=c->r[31]|c->r[31]; // 800C6940
  c->lr=0x800C6948u; f_80068A78(c); // 800C6944
  c->r[30]=c->r[3]+0x000008D0u; // 800C6948
  goto L_800C6990; // 800C694C
L_800C6950:;
  c->r[3]=c->r[31]|c->r[31]; // 800C6950
  c->lr=0x800C6958u; f_80068A78(c); // 800C6954
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C6958
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C695C
  c->ctr=c->r[12]; // 800C6960
  if (true) { c->lr=0x800C6968u; dispatch(c,c->ctr); } // 800C6964
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800C6968
  c->r[4]=0u+0xD0000000u; // 800C696C
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C6970
  c->r[3]=c->r[1]+0x00000018u; // 800C6974
  c->lr=0x800C697Cu; f_8003EDD0(c); // 800C6978
  cmps(c,0,(int32_t)c->r[3],0); // 800C697C
  if (crb(c,2)) { goto L_800C6990; } // 800C6980
  c->r[3]=c->r[31]|c->r[31]; // 800C6984
  c->lr=0x800C698Cu; f_80068A78(c); // 800C6988
  c->r[30]=c->r[3]+0x00000A44u; // 800C698C
L_800C6990:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C6990
  if (crb(c,2)) { goto L_800C6A14; } // 800C6994
  c->r[3]=c->r[26]+0x0000003Cu; // 800C6998
  c->lr=0x800C69A0u; f_800ACC48(c); // 800C699C
  cmps(c,0,(int32_t)c->r[3],0); // 800C69A0
  if (crb(c,2)) { goto L_800C69E4; } // 800C69A4
  c->r[3]=c->r[30]+0x0000001Cu; // 800C69A8
  c->r[4]=c->r[26]+0x00000040u; // 800C69AC
  c->lr=0x800C69B4u; f_80075440(c); // 800C69B0
  cmps(c,0,(int32_t)c->r[3],0); // 800C69B4
  c->r[4]=c->r[3]|c->r[3]; // 800C69B8
  if (crb(c,0)) { goto L_800C6A14; } // 800C69BC
  c->f[1]=c->f[31]; // 800C69C0
  c->r[3]=c->r[30]|c->r[30]; // 800C69C4
  c->f[2]=c->f[30]; // 800C69C8
  c->r[5]=c->r[28]|c->r[28]; // 800C69CC
  c->f[3]=c->f[29]; // 800C69D0
  c->r[6]=c->r[27]|c->r[27]; // 800C69D4
  c->r[7]=c->r[29]|c->r[29]; // 800C69D8
  c->lr=0x800C69E0u; f_8002D7B8(c); // 800C69DC
  goto L_800C6A14; // 800C69E0
L_800C69E4:;
  {uint32_t ea=c->r[26]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C69E4
  c->f[1]=c->f[31]; // 800C69E8
  c->f[2]=c->f[30]; // 800C69EC
  c->r[3]=c->r[30]|c->r[30]; // 800C69F0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C69F4
  c->r[5]=c->r[28]|c->r[28]; // 800C69F8
  c->f[3]=c->f[29]; // 800C69FC
  c->r[6]=c->r[27]|c->r[27]; // 800C6A00
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[0]);} // 800C6A04
  c->r[7]=c->r[29]|c->r[29]; // 800C6A08
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 800C6A0C
  c->lr=0x800C6A14u; f_8002D7B8(c); // 800C6A10
L_800C6A14:;
  c->r[3]=c->r[31]|c->r[31]; // 800C6A14
  c->lr=0x800C6A1Cu; f_80068A78(c); // 800C6A18
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C6A1C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C6A20
  c->ctr=c->r[12]; // 800C6A24
  if (true) { c->lr=0x800C6A2Cu; dispatch(c,c->ctr); } // 800C6A28
  W32(c->r[1]+0x00000014u,c->r[4]); // 800C6A2C
  c->r[4]=0u+0xC8000000u; // 800C6A30
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C6A34
  c->r[3]=c->r[1]+0x00000010u; // 800C6A38
  c->lr=0x800C6A40u; f_8003EDD0(c); // 800C6A3C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6A40
  if (crb(c,2)) { goto L_800C6A68; } // 800C6A44
  c->r[3]=c->r[31]|c->r[31]; // 800C6A48
  c->lr=0x800C6A50u; f_80068A78(c); // 800C6A4C
  cmps(c,0,(int32_t)c->r[28],0); // 800C6A50
  c->r[4]=c->r[3]|c->r[3]; // 800C6A54
  if (!crb(c,2)) { goto L_800C6A68; } // 800C6A58
  c->r[3]=c->r[3]+0x00000C88u; // 800C6A5C
  c->r[4]=c->r[4]+0x000008ECu; // 800C6A60
  c->lr=0x800C6A68u; f_800BB0B4(c); // 800C6A64
L_800C6A68:;
  c->r[3]=0u+0x00000000u; // 800C6A68
  c->r[0]=0u+0x00000007u; // 800C6A6C
  W32(c->r[1]+0x00000028u,c->r[3]); // 800C6A70
  c->r[5]=c->r[25]+0xFFFFFFFCu; // 800C6A74
  c->r[4]=c->r[1]+0x00000024u; // 800C6A78
  c->ctr=c->r[0]; // 800C6A7C
L_800C6A80:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C6A80
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C6A84
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C6A88
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C6A8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6A80; } // 800C6A90
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C6A94
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C6A98
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800C6A9C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800C6AA0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800C6AA4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800C6AA8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 800C6AAC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 800C6AB0
  c->r[11]=c->r[1]+0x00000090u; // 800C6AB4
  c->lr=0x800C6ABCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6AB8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800C6ABC
  c->lr=c->r[0]; // 800C6AC0
  c->r[1]=c->r[1]+0x000000C0u; // 800C6AC4
  return; // 800C6AC8
}

// fn_800C6ACC
void f_800C6ACC(Ctx* __restrict c) {
  trace_call(0x800C6ACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6ACC
  c->r[0]=c->lr; // 800C6AD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C6AD4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6AD8
  c->r[28]=c->r[3]|c->r[3]; // 800C6ADC
  c->r[31]=R32(c->r[3]+0x00000004u); // 800C6AE0
  c->r[29]=c->r[4]|c->r[4]; // 800C6AE4
  c->r[30]=c->r[5]|c->r[5]; // 800C6AE8
  goto L_800C6B1C; // 800C6AEC
L_800C6AF0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C6AF0
  cmpu(c,0,c->r[0],c->r[29]); // 800C6AF4
  if (!crb(c,2)) { goto L_800C6B10; } // 800C6AF8
  cmps(c,0,(int32_t)c->r[30],0); // 800C6AFC
  if (crb(c,1)) { goto L_800C6B0C; } // 800C6B00
  c->r[3]=c->r[31]|c->r[31]; // 800C6B04
  goto L_800C6B34; // 800C6B08
L_800C6B0C:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800C6B0C
L_800C6B10:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C6B10
  c->r[3]=c->r[31]+c->r[0]; // 800C6B14
  c->r[31]=c->r[3]+0x00000008u; // 800C6B18
L_800C6B1C:;
  c->r[3]=c->r[28]|c->r[28]; // 800C6B1C
  c->r[4]=c->r[31]|c->r[31]; // 800C6B20
  c->lr=0x800C6B28u; f_800C6B48(c); // 800C6B24
  cmps(c,0,(int32_t)c->r[3],0); // 800C6B28
  if (!crb(c,2)) { IRQCHK(c); goto L_800C6AF0; } // 800C6B2C
  c->r[3]=0u+0x00000000u; // 800C6B30
L_800C6B34:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C6B34
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C6B38
  c->lr=c->r[0]; // 800C6B3C
  c->r[1]=c->r[1]+0x00000020u; // 800C6B40
  return; // 800C6B44
}

// fn_800C6B48
void f_800C6B48(Ctx* __restrict c) {
  trace_call(0x800C6B48u);
  c->r[6]=R32(c->r[3]+0x00000004u); // 800C6B48
  c->r[5]=0u+0x00000000u; // 800C6B4C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C6B50
  c->r[0]=c->r[6]+c->r[0]; // 800C6B54
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800C6B58
  if (!crb(c,1)) { goto L_800C6B6C; } // 800C6B5C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 800C6B60
  if (crb(c,1)) { goto L_800C6B6C; } // 800C6B64
  c->r[5]=0u+0x00000001u; // 800C6B68
L_800C6B6C:;
  c->r[3]=c->r[5]|c->r[5]; // 800C6B6C
  return; // 800C6B70
}

// fn_800C6B74
void f_800C6B74(Ctx* __restrict c) {
  trace_call(0x800C6B74u);
  c->r[0]=0u+0x00000002u; // 800C6B74
  {uint32_t ea=c->r[2]+0xFFFF8E9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6B78
  c->r[4]=0u+0x00000000u; // 800C6B7C
  c->r[5]=0u+0x00000000u; // 800C6B80
  c->ctr=c->r[0]; // 800C6B84
L_800C6B88:;
  c->r[6]=c->r[3]+c->r[4]; // 800C6B88
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6B8C
  fcmp(c,0,c->f[1],c->f[0]); // 800C6B90
  if (!crb(c,2)) { goto L_800C6BB4; } // 800C6B94
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6B98
  fcmp(c,0,c->f[1],c->f[0]); // 800C6B9C
  if (!crb(c,2)) { goto L_800C6BB4; } // 800C6BA0
  c->r[6]=c->r[3]+c->r[5]; // 800C6BA4
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6BA8
  fcmp(c,0,c->f[1],c->f[0]); // 800C6BAC
  if (crb(c,2)) { goto L_800C6BBC; } // 800C6BB0
L_800C6BB4:;
  c->r[3]=0u+0x00000001u; // 800C6BB4
  return; // 800C6BB8
L_800C6BBC:;
  c->r[4]=c->r[4]+0x00000008u; // 800C6BBC
  c->r[5]=c->r[5]+0x00000004u; // 800C6BC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6B88; } // 800C6BC4
  c->r[3]=R32(c->r[3]+0x00000020u); // 800C6BC8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800C6BCC
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800C6BD0
  return; // 800C6BD4
}

// fn_800C6BD8
void f_800C6BD8(Ctx* __restrict c) {
  trace_call(0x800C6BD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6BD8
  c->r[0]=c->lr; // 800C6BDC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C6BE0
  c->r[11]=c->r[1]+0x00000040u; // 800C6BE4
  c->lr=0x800C6BECu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6BE8
  c->r[31]=c->r[3]|c->r[3]; // 800C6BEC
  c->r[29]=c->r[4]|c->r[4]; // 800C6BF0
  c->r[30]=c->r[5]|c->r[5]; // 800C6BF4
  c->r[3]=c->r[1]+0x00000008u; // 800C6BF8
  c->r[4]=c->r[5]+0x00000018u; // 800C6BFC
  c->lr=0x800C6C04u; f_8003F484(c); // 800C6C00
  c->r[3]=c->r[1]+0x00000008u; // 800C6C04
  c->r[5]=c->r[30]+0x00000158u; // 800C6C08
  c->r[4]=c->r[3]|c->r[3]; // 800C6C0C
  c->lr=0x800C6C14u; f_80064C74(c); // 800C6C10
  c->r[3]=c->r[1]+0x00000008u; // 800C6C14
  c->lr=0x800C6C1Cu; f_802657AC(c); // 800C6C18
  {uint32_t ea=c->r[29]+0x000003A4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C6C1C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6C20
  fcmp(c,0,c->f[4],c->f[0]); // 800C6C24
  if (!crb(c,0)) { goto L_800C6C30; } // 800C6C28
  c->f[4]=c->f[0]; // 800C6C2C
L_800C6C30:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 800C6C30
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C6C34
  if (crb(c,2)) { goto L_800C6C88; } // 800C6C38
  c->r[0]=R8(c->r[30]+0x00000034u); // 800C6C3C
  c->r[4]=0u+0x00000000u; // 800C6C40
  cmps(c,0,(int32_t)c->r[0],0); // 800C6C44
  if (crb(c,0)) { goto L_800C6C54; } // 800C6C48
  cmps(c,0,(int32_t)c->r[0],29); // 800C6C4C
  if (crb(c,0)) { goto L_800C6C58; } // 800C6C50
L_800C6C54:;
  c->r[0]=0u+0x00000000u; // 800C6C54
L_800C6C58:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C6C58
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6C5C
  c->r[3]=c->r[29]+c->r[0]; // 800C6C60
  {uint32_t ea=c->r[3]+0x000003ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6C64
  fcmp(c,0,c->f[2],c->f[0]); // 800C6C68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C6C6C
  if (!crb(c,2)) { goto L_800C6C78; } // 800C6C70
  c->r[4]=0u+0x00000001u; // 800C6C74
L_800C6C78:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C6C78
  if (!crb(c,2)) { goto L_800C6C88; } // 800C6C7C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6C80
  goto L_800C6DB4; // 800C6C84
L_800C6C88:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6C88
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6C8C
  fcmp(c,0,c->f[3],c->f[2]); // 800C6C90
  if (!crb(c,1)) { goto L_800C6CB4; } // 800C6C94
  {uint32_t ea=c->r[29]+0x000003A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6C98
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800C6C9C
  fcmp(c,0,c->f[0],c->f[4]); // 800C6CA0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C6CA4
  if (!crb(c,2)) { goto L_800C6CB4; } // 800C6CA8
  c->f[1]=c->f[2]; // 800C6CAC
  goto L_800C6DB4; // 800C6CB0
L_800C6CB4:;
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6CB4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6CB8
  fcmp(c,0,c->f[3],c->f[2]); // 800C6CBC
  if (!crb(c,0)) { goto L_800C6CE0; } // 800C6CC0
  {uint32_t ea=c->r[29]+0x000003A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6CC4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800C6CC8
  fcmp(c,0,c->f[0],c->f[4]); // 800C6CCC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800C6CD0
  if (!crb(c,2)) { goto L_800C6CE0; } // 800C6CD4
  c->f[1]=c->f[2]; // 800C6CD8
  goto L_800C6DB4; // 800C6CDC
L_800C6CE0:;
  c->r[5]=0u+0x803E0000u; // 800C6CE0
  {uint32_t ea=c->r[5]+0xFFFF9B3Cu; c->r[8]=R32(ea); c->r[5]=ea;} // 800C6CE4
  c->r[0]=0u+0x00000002u; // 800C6CE8
  c->r[4]=c->r[1]+0x00000014u; // 800C6CEC
  c->r[7]=R32(c->r[5]+0x00000004u); // 800C6CF0
  c->r[3]=0u+0x00000000u; // 800C6CF4
  c->r[6]=R32(c->r[5]+0x00000008u); // 800C6CF8
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800C6CFC
  W32(c->r[1]+0x00000014u,c->r[8]); // 800C6D00
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6D04
  W32(c->r[1]+0x00000018u,c->r[7]); // 800C6D08
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800C6D0C
  W32(c->r[1]+0x00000020u,c->r[5]); // 800C6D10
  c->ctr=c->r[0]; // 800C6D14
L_800C6D18:;
  c->r[0]=R32(c->r[4]+c->r[3]); // 800C6D18
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C6D1C
  c->r[5]=c->r[31]+c->r[0]; // 800C6D20
  {uint32_t ea=c->r[5]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6D24
  fcmp(c,0,c->f[3],c->f[2]); // 800C6D28
  if (!crb(c,0)) { goto L_800C6D54; } // 800C6D2C
  c->r[4]=c->r[1]+0x00000018u; // 800C6D30
  c->r[0]=R32(c->r[4]+c->r[3]); // 800C6D34
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C6D38
  c->r[3]=c->r[31]+c->r[0]; // 800C6D3C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6D40
  fcmp(c,0,c->f[1],c->f[2]); // 800C6D44
  if (!crb(c,0)) { goto L_800C6DB4; } // 800C6D48
  c->f[1]=c->f[2]; // 800C6D4C
  goto L_800C6DB4; // 800C6D50
L_800C6D54:;
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6D54
  fcmp(c,0,c->f[0],c->f[2]); // 800C6D58
  if (!crb(c,0)) { goto L_800C6D68; } // 800C6D5C
  c->f[1]=c->f[3]; // 800C6D60
  goto L_800C6DB4; // 800C6D64
L_800C6D68:;
  c->r[3]=c->r[3]+0x00000008u; // 800C6D68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6D18; } // 800C6D6C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6D70
  fcmp(c,0,c->f[3],c->f[1]); // 800C6D74
  if (!crb(c,0)) { goto L_800C6D84; } // 800C6D78
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6D7C
  goto L_800C6DB4; // 800C6D80
L_800C6D84:;
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6D84
  fcmp(c,0,c->f[0],c->f[1]); // 800C6D88
  if (!crb(c,1)) { goto L_800C6D98; } // 800C6D8C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6D90
  goto L_800C6DB4; // 800C6D94
L_800C6D98:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800C6D98
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C6D9C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800C6DA0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C6DA4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800C6DA8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800C6DAC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[0],c->f[3])); // 800C6DB0
L_800C6DB4:;
  c->r[11]=c->r[1]+0x00000040u; // 800C6DB4
  c->lr=0x800C6DBCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6DB8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C6DBC
  c->lr=c->r[0]; // 800C6DC0
  c->r[1]=c->r[1]+0x00000040u; // 800C6DC4
  return; // 800C6DC8
}

// fn_800C6DCC
void f_800C6DCC(Ctx* __restrict c) {
  trace_call(0x800C6DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6DCC
  c->r[0]=c->lr; // 800C6DD0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C6DD4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800C6DD8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800C6DDC
  c->r[11]=c->r[1]+0x00000050u; // 800C6DE0
  c->lr=0x800C6DE8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6DE4
  c->r[31]=R8(c->r[5]+0x00000034u); // 800C6DE8
  c->r[27]=c->r[3]|c->r[3]; // 800C6DEC
  c->r[29]=c->r[4]|c->r[4]; // 800C6DF0
  c->r[30]=c->r[5]|c->r[5]; // 800C6DF4
  cmps(c,0,(int32_t)c->r[31],0); // 800C6DF8
  if (crb(c,0)) { goto L_800C6E08; } // 800C6DFC
  cmps(c,0,(int32_t)c->r[31],29); // 800C6E00
  if (crb(c,0)) { goto L_800C6E0C; } // 800C6E04
L_800C6E08:;
  c->r[31]=0u+0x00000000u; // 800C6E08
L_800C6E0C:;
  c->r[3]=c->r[1]+0x00000008u; // 800C6E0C
  c->r[4]=c->r[5]+0x00000158u; // 800C6E10
  c->lr=0x800C6E18u; f_8003F484(c); // 800C6E14
  c->r[3]=c->r[1]+0x00000008u; // 800C6E18
  c->r[5]=c->r[30]+0x00000018u; // 800C6E1C
  c->r[4]=c->r[3]|c->r[3]; // 800C6E20
  c->lr=0x800C6E28u; f_80064C74(c); // 800C6E24
  c->r[3]=c->r[1]+0x00000008u; // 800C6E28
  c->lr=0x800C6E30u; f_802657AC(c); // 800C6E2C
  c->lr=0x800C6E34u; f_80291D94(c); // 800C6E30
  c->r[0]=c->r[3]^0x80000000u; // 800C6E34
  c->r[4]=0u+0x43300000u; // 800C6E38
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C6E3C
  c->r[0]=0u+0x00000000u; // 800C6E40
  c->r[7]=c->r[27]+0x00000008u; // 800C6E44
  c->r[3]=0u+0x64610000u; // 800C6E48
  W32(c->r[1]+0x00000028u,c->r[4]); // 800C6E4C
  c->r[4]=0u+0x72650000u; // 800C6E50
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[2]=RF64(ea);} // 800C6E54
  c->r[8]=c->r[7]+0x00000008u; // 800C6E58
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 800C6E5C
  c->r[6]=c->r[4]+0x00006664u; // 800C6E60
  {uint32_t ea=c->r[2]+0xFFFF8EB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C6E64
  c->r[5]=c->r[3]+0x00007461u; // 800C6E68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800C6E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6E70
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C6E74
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800C6E78
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C6E7C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C6E80
  goto L_800C6ED4; // 800C6E84
L_800C6E88:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 800C6E88
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 800C6E8C
  if (crb(c,2)) { goto L_800C6EAC; } // 800C6E90
  if (!crb(c,0)) { goto L_800C6EC8; } // 800C6E94
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800C6E98
  if (crb(c,2)) { goto L_800C6EA4; } // 800C6E9C
  goto L_800C6EC8; // 800C6EA0
L_800C6EA4:;
  W32(c->r[1]+0x00000014u,c->r[8]); // 800C6EA4
  goto L_800C6EC8; // 800C6EA8
L_800C6EAC:;
  c->r[0]=c->r[8]+0x00000008u; // 800C6EAC
  W32(c->r[1]+0x00000018u,c->r[8]); // 800C6EB0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C6EB4
  c->r[0]=R32(c->r[8]+0x00000004u); // 800C6EB8
  c->r[0]=sraw(c,c->r[0],2); // 800C6EBC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800C6EC0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800C6EC4
L_800C6EC8:;
  c->r[0]=R32(c->r[8]+0x00000004u); // 800C6EC8
  c->r[3]=c->r[8]+c->r[0]; // 800C6ECC
  c->r[8]=c->r[3]+0x00000008u; // 800C6ED0
L_800C6ED4:;
  c->r[3]=R32(c->r[7]+0x00000004u); // 800C6ED4
  c->r[4]=c->r[8]-c->r[7]; // 800C6ED8
  c->r[0]=c->r[3]+0x00000008u; // 800C6EDC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C6EE0
  if (crb(c,0)) { IRQCHK(c); goto L_800C6E88; } // 800C6EE4
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C6EE8
  cmps(c,0,(int32_t)c->r[0],0); // 800C6EEC
  if (!crb(c,2)) { goto L_800C6EFC; } // 800C6EF0
  c->r[3]=0u+0x00000000u; // 800C6EF4
  goto L_800C6F74; // 800C6EF8
L_800C6EFC:;
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)5); // 800C6EFC
  c->r[27]=0u+0x00000000u; // 800C6F00
L_800C6F04:;
  c->r[3]=c->r[1]+0x00000014u; // 800C6F04
  c->r[4]=c->r[27]+c->r[28]; // 800C6F08
  c->lr=0x800C6F10u; f_800C6F94(c); // 800C6F0C
  c->lr=0x800C6F14u; f_800C6B74(c); // 800C6F10
  cmps(c,0,(int32_t)c->r[3],0); // 800C6F14
  if (!crb(c,2)) { goto L_800C6F2C; } // 800C6F18
  c->r[27]=c->r[27]+0x00000001u; // 800C6F1C
  cmps(c,0,(int32_t)c->r[27],5); // 800C6F20
  if (crb(c,0)) { IRQCHK(c); goto L_800C6F04; } // 800C6F24
  c->r[31]=0u+0x00000000u; // 800C6F28
L_800C6F2C:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)5); // 800C6F2C
  c->r[27]=0u+0x00000000u; // 800C6F30
L_800C6F34:;
  c->r[3]=c->r[1]+0x00000014u; // 800C6F34
  c->r[4]=c->r[27]+c->r[31]; // 800C6F38
  c->lr=0x800C6F40u; f_800C6F94(c); // 800C6F3C
  c->r[28]=c->r[3]|c->r[3]; // 800C6F40
  c->r[4]=c->r[29]|c->r[29]; // 800C6F44
  c->r[5]=c->r[30]|c->r[30]; // 800C6F48
  c->lr=0x800C6F50u; f_800C6BD8(c); // 800C6F4C
  fcmp(c,0,c->f[1],c->f[31]); // 800C6F50
  if (!crb(c,1)) { goto L_800C6F60; } // 800C6F54
  c->r[3]=c->r[28]|c->r[28]; // 800C6F58
  goto L_800C6F74; // 800C6F5C
L_800C6F60:;
  c->r[27]=c->r[27]+0x00000001u; // 800C6F60
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[1]); // 800C6F64
  cmps(c,0,(int32_t)c->r[27],5); // 800C6F68
  if (crb(c,0)) { IRQCHK(c); goto L_800C6F34; } // 800C6F6C
  c->r[3]=0u+0x00000000u; // 800C6F70
L_800C6F74:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800C6F74
  c->r[11]=c->r[1]+0x00000050u; // 800C6F78
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800C6F7C
  c->lr=0x800C6F84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C6F80
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C6F84
  c->lr=c->r[0]; // 800C6F88
  c->r[1]=c->r[1]+0x00000060u; // 800C6F8C
  return; // 800C6F90
}

// fn_800C6F94
void f_800C6F94(Ctx* __restrict c) {
  trace_call(0x800C6F94u);
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C6F94
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800C6F98
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C6F9C
  c->r[3]=R32(c->r[5]+c->r[4]); // 800C6FA0
  c->r[3]=c->r[0]+c->r[3]; // 800C6FA4
  c->r[3]=c->r[3]+0x00000008u; // 800C6FA8
  return; // 800C6FAC
}

// fn_800C6FB0
void f_800C6FB0(Ctx* __restrict c) {
  trace_call(0x800C6FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6FB0
  c->r[0]=c->lr; // 800C6FB4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C6FB8
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6FBC
  c->r[30]=c->r[3]|c->r[3]; // 800C6FC0
  c->r[31]=c->r[4]|c->r[4]; // 800C6FC4
  c->lr=0x800C6FCCu; f_800C703C(c); // 800C6FC8
  c->r[5]=0u+0x61720000u; // 800C6FCC
  c->r[3]=c->r[30]|c->r[30]; // 800C6FD0
  c->r[4]=c->r[31]+0x000007ECu; // 800C6FD4
  c->r[5]=c->r[5]+0x00007279u; // 800C6FD8
  c->lr=0x800C6FE0u; f_800C7050(c); // 800C6FDC
  cmps(c,0,(int32_t)c->r[3],0); // 800C6FE0
  if (!crb(c,2)) { goto L_800C7028; } // 800C6FE4
  c->r[4]=R32(c->r[31]+0x00000888u); // 800C6FE8
  c->r[3]=c->r[1]+0x0000000Cu; // 800C6FEC
  c->lr=0x800C6FF4u; f_801328F8(c); // 800C6FF0
  c->r[4]=0u+0x803E0000u; // 800C6FF4
  c->r[3]=c->r[1]+0x0000000Cu; // 800C6FF8
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C6FFC
  c->r[5]=c->r[1]+0x00000008u; // 800C7000
  c->r[4]=c->r[4]+0x00000059u; // 800C7004
  c->r[6]=0u+0x00000000u; // 800C7008
  c->lr=0x800C7010u; f_801329F8(c); // 800C700C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800C7010
  c->r[3]=c->r[30]|c->r[30]; // 800C7014
  c->lr=0x800C701Cu; f_800C70F0(c); // 800C7018
  c->r[3]=c->r[1]+0x0000000Cu; // 800C701C
  c->r[4]=0u+0xFFFFFFFFu; // 800C7020
  c->lr=0x800C7028u; f_80132958(c); // 800C7024
L_800C7028:;
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7028
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C702C
  c->lr=c->r[0]; // 800C7030
  c->r[1]=c->r[1]+0x00000090u; // 800C7034
  return; // 800C7038
}

// fn_800C703C
void f_800C703C(Ctx* __restrict c) {
  trace_call(0x800C703Cu);
  c->r[0]=0u+0x00000000u; // 800C703C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C7040
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C7044
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C7048
  return; // 800C704C
}

// fn_800C7050
void f_800C7050(Ctx* __restrict c) {
  trace_call(0x800C7050u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7050
  c->r[0]=c->lr; // 800C7054
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C7058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C705C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C7060
  c->r[30]=c->r[5]|c->r[5]; // 800C7064
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C7068
  c->r[29]=c->r[4]|c->r[4]; // 800C706C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C7070
  c->r[28]=c->r[3]|c->r[3]; // 800C7074
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C7078
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C707C
  c->r[31]=R32(c->r[4]+0x00000004u); // 800C7080
  goto L_800C70B8; // 800C7084
L_800C7088:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C7088
  cmpu(c,0,c->r[0],c->r[30]); // 800C708C
  if (!crb(c,2)) { goto L_800C70AC; } // 800C7090
  c->r[0]=c->r[31]+0x00000008u; // 800C7094
  c->r[3]=0u+0x00000001u; // 800C7098
  W32(c->r[28]+0x00000004u,c->r[0]); // 800C709C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C70A0
  W32(c->r[28]+0x00000000u,c->r[0]); // 800C70A4
  goto L_800C70D0; // 800C70A8
L_800C70AC:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C70AC
  c->r[3]=c->r[31]+c->r[0]; // 800C70B0
  c->r[31]=c->r[3]+0x00000008u; // 800C70B4
L_800C70B8:;
  c->r[3]=c->r[29]|c->r[29]; // 800C70B8
  c->r[4]=c->r[31]|c->r[31]; // 800C70BC
  c->lr=0x800C70C4u; f_800C6B48(c); // 800C70C0
  cmps(c,0,(int32_t)c->r[3],0); // 800C70C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7088; } // 800C70C8
  c->r[3]=0u+0x00000000u; // 800C70CC
L_800C70D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C70D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C70D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C70D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C70DC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C70E0
  c->lr=c->r[0]; // 800C70E4
  c->r[1]=c->r[1]+0x00000020u; // 800C70E8
  return; // 800C70EC
}

// fn_800C70F0
void f_800C70F0(Ctx* __restrict c) {
  trace_call(0x800C70F0u);
  c->r[6]=0u+0x756E0000u; // 800C70F0
  c->r[5]=0u+0x73740000u; // 800C70F4
  c->r[9]=c->r[4]+0x00000008u; // 800C70F8
  c->r[8]=c->r[6]+0x00006964u; // 800C70FC
  c->r[7]=c->r[5]+0x00007264u; // 800C7100
  goto L_800C714C; // 800C7104
L_800C7108:;
  c->r[0]=R32(c->r[9]+0x00000000u); // 800C7108
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[8]); // 800C710C
  if (crb(c,2)) { goto L_800C7124; } // 800C7110
  if (!crb(c,0)) { goto L_800C7140; } // 800C7114
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 800C7118
  if (crb(c,2)) { goto L_800C7138; } // 800C711C
  goto L_800C7140; // 800C7120
L_800C7124:;
  c->r[0]=c->r[9]+0x00000008u; // 800C7124
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C7128
  c->r[0]=R32(c->r[9]+0x00000004u); // 800C712C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800C7130
  goto L_800C7140; // 800C7134
L_800C7138:;
  c->r[0]=c->r[9]+0x00000008u; // 800C7138
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C713C
L_800C7140:;
  c->r[0]=R32(c->r[9]+0x00000004u); // 800C7140
  c->r[5]=c->r[9]+c->r[0]; // 800C7144
  c->r[9]=c->r[5]+0x00000008u; // 800C7148
L_800C714C:;
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C714C
  c->r[6]=c->r[9]-c->r[4]; // 800C7150
  c->r[0]=c->r[5]+0x00000008u; // 800C7154
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800C7158
  if (crb(c,0)) { IRQCHK(c); goto L_800C7108; } // 800C715C
  return; // 800C7160
}

// fn_800C7164
void f_800C7164(Ctx* __restrict c) {
  trace_call(0x800C7164u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7164
  c->r[0]=c->lr; // 800C7168
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C716C
  c->r[0]=c->r[3]|c->r[3]; // 800C7170
  c->r[3]=c->r[1]+0x00000008u; // 800C7174
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C7178
  c->r[30]=c->r[4]|c->r[4]; // 800C717C
  c->r[31]=c->r[5]|c->r[5]; // 800C7180
  c->r[4]=c->r[0]|c->r[0]; // 800C7184
  c->lr=0x800C718Cu; f_800C6FB0(c); // 800C7188
  c->r[4]=c->r[30]|c->r[30]; // 800C718C
  c->r[5]=c->r[31]|c->r[31]; // 800C7190
  c->r[3]=c->r[1]+0x00000008u; // 800C7194
  c->lr=0x800C719Cu; f_800C6ACC(c); // 800C7198
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C719C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C71A0
  c->lr=c->r[0]; // 800C71A4
  c->r[1]=c->r[1]+0x00000020u; // 800C71A8
  return; // 800C71AC
}

// fn_800C71B0
void f_800C71B0(Ctx* __restrict c) {
  trace_call(0x800C71B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C71B0
  c->r[0]=c->lr; // 800C71B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C71B8
  c->r[11]=c->r[1]+0x00000070u; // 800C71BC
  c->lr=0x800C71C4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C71C0
  c->r[29]=c->r[5]|c->r[5]; // 800C71C4
  c->r[30]=c->r[3]|c->r[3]; // 800C71C8
  c->r[3]=c->r[29]|c->r[29]; // 800C71CC
  c->lr=0x800C71D4u; f_80068A78(c); // 800C71D0
  c->r[4]=0u+0x803E0000u; // 800C71D4
  c->r[31]=c->r[3]|c->r[3]; // 800C71D8
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C71DC
  c->r[3]=c->r[1]+0x00000014u; // 800C71E0
  c->r[4]=c->r[4]+0x00000063u; // 800C71E4
  c->lr=0x800C71ECu; f_800C12E4(c); // 800C71E8
  c->r[3]=c->r[29]|c->r[29]; // 800C71EC
  c->lr=0x800C71F4u; f_80068A78(c); // 800C71F0
  c->r[29]=c->r[3]|c->r[3]; // 800C71F4
  c->lr=0x800C71FCu; f_80291D94(c); // 800C71F8
  c->r[3]=c->r[3]^0x80000000u; // 800C71FC
  c->r[0]=0u+0x43300000u; // 800C7200
  W32(c->r[1]+0x00000054u,c->r[3]); // 800C7204
  c->r[4]=c->r[29]|c->r[29]; // 800C7208
  c->r[3]=c->r[1]+0x00000008u; // 800C720C
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C7210
  c->lr=0x800C7218u; f_800C6FB0(c); // 800C7214
  c->r[4]=0u+0x61740000u; // 800C7218
  c->r[3]=c->r[1]+0x00000008u; // 800C721C
  c->r[4]=c->r[4]+0x0000616Bu; // 800C7220
  c->r[5]=0u+0x00000000u; // 800C7224
  c->lr=0x800C722Cu; f_800C6ACC(c); // 800C7228
  cmps(c,0,(int32_t)c->r[3],0); // 800C722C
  if (crb(c,2)) { goto L_800C729C; } // 800C7230
  c->r[5]=R32(c->r[3]+0x00000004u); // 800C7234
  c->r[0]=0u+0x0000000Cu; // 800C7238
  c->r[4]=R32(c->r[13]+0xFFFF9514u); // 800C723C
  c->r[6]=c->r[3]+0x00000008u; // 800C7240
  c->r[5]=divwu(c->r[5],c->r[0]); // 800C7244
  c->r[0]=c->r[4]+0x00000001u; // 800C7248
  W32(c->r[13]+0xFFFF9514u,c->r[0]); // 800C724C
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[5]); // 800C7250
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800C7254
  c->r[3]=c->r[4]-c->r[0]; // 800C7258
  goto L_800C7270; // 800C725C
L_800C7260:;
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[5]); // 800C7260
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800C7264
  c->r[3]=c->r[3]-c->r[0]; // 800C7268
  goto L_800C7278; // 800C726C
L_800C7270:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C7270
  if (crb(c,1)) { IRQCHK(c); goto L_800C7260; } // 800C7274
L_800C7278:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 800C7278
  if (crb(c,0)) { goto L_800C7284; } // 800C727C
  c->r[3]=0u+0x00000000u; // 800C7280
L_800C7284:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800C7284
  c->r[4]=R32(c->r[1]+0x00000010u); // 800C7288
  c->r[3]=c->r[6]+c->r[0]; // 800C728C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C7290
  c->r[4]=c->r[4]+c->r[0]; // 800C7294
  goto L_800C72A0; // 800C7298
L_800C729C:;
  c->r[4]=0u+0x00000000u; // 800C729C
L_800C72A0:;
  c->r[0]=0u+0xFFFFFFFFu; // 800C72A0
  cmps(c,0,(int32_t)c->r[4],0); // 800C72A4
  W32(c->r[31]+0x0000088Cu,c->r[0]); // 800C72A8
  if (crb(c,2)) { goto L_800C72B8; } // 800C72AC
  c->r[3]=c->r[1]+0x00000014u; // 800C72B0
  c->lr=0x800C72B8u; f_800C12E4(c); // 800C72B4
L_800C72B8:;
  c->r[0]=0u+0x00000007u; // 800C72B8
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C72BC
  c->r[4]=c->r[1]+0x00000010u; // 800C72C0
  c->ctr=c->r[0]; // 800C72C4
L_800C72C8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C72C8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C72CC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C72D0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C72D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C72C8; } // 800C72D8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C72DC
  c->r[11]=c->r[1]+0x00000070u; // 800C72E0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C72E4
  c->lr=0x800C72ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C72E8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C72EC
  c->lr=c->r[0]; // 800C72F0
  c->r[1]=c->r[1]+0x00000070u; // 800C72F4
  return; // 800C72F8
}

// fn_800C72FC
void f_800C72FC(Ctx* __restrict c) {
  trace_call(0x800C72FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C72FC
  c->r[0]=c->lr; // 800C7300
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C7304
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C7308
  c->r[31]=c->r[6]|c->r[6]; // 800C730C
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C7310
  c->r[30]=c->r[3]|c->r[3]; // 800C7314
  c->r[3]=c->r[5]|c->r[5]; // 800C7318
  c->lr=0x800C7320u; f_80068A78(c); // 800C731C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7320
  c->r[6]=0u+0x00000000u; // 800C7324
  c->r[0]=0u+0x00000007u; // 800C7328
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C732C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C7330
  c->r[4]=c->r[1]+0x00000004u; // 800C7334
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C7338
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800C733C
  W32(c->r[3]+0x00001050u,c->r[7]); // 800C7340
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C7344
  c->ctr=c->r[0]; // 800C7348
L_800C734C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C734C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7350
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7354
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7358
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C734C; } // 800C735C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7360
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7364
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C7368
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C736C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C7370
  c->lr=c->r[0]; // 800C7374
  c->r[1]=c->r[1]+0x00000060u; // 800C7378
  return; // 800C737C
}

// fn_800C7380
void f_800C7380(Ctx* __restrict c) {
  trace_call(0x800C7380u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7380
  c->r[0]=c->lr; // 800C7384
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C7388
  c->r[11]=c->r[1]+0x00000060u; // 800C738C
  c->lr=0x800C7394u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C7390
  c->r[28]=c->r[3]|c->r[3]; // 800C7394
  c->r[3]=c->r[5]|c->r[5]; // 800C7398
  c->r[29]=c->r[6]|c->r[6]; // 800C739C
  c->lr=0x800C73A4u; f_80068A78(c); // 800C73A0
  c->r[31]=c->r[3]|c->r[3]; // 800C73A4
  c->r[4]=0u+0x00000005u; // 800C73A8
  c->lr=0x800C73B0u; f_800760EC(c); // 800C73AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C73B0
  if (crb(c,2)) { goto L_800C7468; } // 800C73B4
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C73B8
  c->r[30]=R32(c->r[31]+0x00000050u); // 800C73BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C73C0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C73C4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C73C8
  cmps(c,0,(int32_t)c->r[0],1); // 800C73CC
  if (crb(c,2)) { goto L_800C7428; } // 800C73D0
  if (!crb(c,0)) { goto L_800C7468; } // 800C73D4
  cmps(c,0,(int32_t)c->r[0],0); // 800C73D8
  if (!crb(c,0)) { goto L_800C73E4; } // 800C73DC
  goto L_800C7468; // 800C73E0
L_800C73E4:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 800C73E4
  c->r[4]=R32(c->r[30]+0x00000020u); // 800C73E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C73EC
  c->r[0]=R32(c->r[3]+0x00000018u); // 800C73F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C73F4
  if (crb(c,2)) { goto L_800C7468; } // 800C73F8
  c->r[3]=c->r[29]+0x0000003Cu; // 800C73FC
  c->lr=0x800C7404u; f_800797C0(c); // 800C7400
  c->r[5]=R32(c->r[30]+0x00000020u); // 800C7404
  c->r[6]=c->r[3]|c->r[3]; // 800C7408
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C740C
  c->r[3]=c->r[31]+0x00000C88u; // 800C7410
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7414
  c->r[4]=c->r[31]+0x000008ECu; // 800C7418
  c->r[7]=0u+0x00000000u; // 800C741C
  c->lr=0x800C7424u; f_800BB0C8(c); // 800C7420
  goto L_800C7468; // 800C7424
L_800C7428:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 800C7428
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 800C742C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C7430
  c->r[0]=R32(c->r[3]+0x00000018u); // 800C7434
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C7438
  if (crb(c,2)) { goto L_800C7468; } // 800C743C
  c->r[3]=c->r[29]+0x0000003Cu; // 800C7440
  c->lr=0x800C7448u; f_800797C0(c); // 800C7444
  c->r[5]=R32(c->r[30]+0x0000001Cu); // 800C7448
  c->r[6]=c->r[3]|c->r[3]; // 800C744C
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7450
  c->r[3]=c->r[31]+0x00000C88u; // 800C7454
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C7458
  c->r[4]=c->r[31]+0x000008ECu; // 800C745C
  c->r[7]=0u+0x00000000u; // 800C7460
  c->lr=0x800C7468u; f_800BB0C8(c); // 800C7464
L_800C7468:;
  c->r[3]=0u+0x00000000u; // 800C7468
  c->r[0]=0u+0x00000007u; // 800C746C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C7470
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800C7474
  c->r[4]=c->r[1]+0x00000004u; // 800C7478
  c->ctr=c->r[0]; // 800C747C
L_800C7480:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7480
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7484
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7488
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C748C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7480; } // 800C7490
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7494
  c->r[11]=c->r[1]+0x00000060u; // 800C7498
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C749C
  c->lr=0x800C74A4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C74A0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C74A4
  c->lr=c->r[0]; // 800C74A8
  c->r[1]=c->r[1]+0x00000060u; // 800C74AC
  return; // 800C74B0
}

// fn_800C74B4
void f_800C74B4(Ctx* __restrict c) {
  trace_call(0x800C74B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C74B4
  c->r[0]=c->lr; // 800C74B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C74BC
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C74C0
  c->r[30]=c->r[3]|c->r[3]; // 800C74C4
  c->r[3]=c->r[5]|c->r[5]; // 800C74C8
  c->lr=0x800C74D0u; f_80068A78(c); // 800C74CC
  c->r[31]=c->r[3]|c->r[3]; // 800C74D0
  c->r[3]=c->r[1]+0x00000008u; // 800C74D4
  c->r[4]=0u+0x00000000u; // 800C74D8
  c->lr=0x800C74E0u; f_800BDBB4(c); // 800C74DC
  c->r[3]=c->r[31]|c->r[31]; // 800C74E0
  c->r[4]=0u+0x00000005u; // 800C74E4
  c->lr=0x800C74ECu; f_800760EC(c); // 800C74E8
  cmps(c,0,(int32_t)c->r[3],0); // 800C74EC
  if (crb(c,2)) { goto L_800C751C; } // 800C74F0
  c->r[3]=R32(c->r[31]+0x00000974u); // 800C74F4
  c->r[4]=R32(c->r[31]+0x00000050u); // 800C74F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C74FC
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 800C7500
  c->r[0]=R32(c->r[3]+0x00000018u); // 800C7504
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C7508
  if (!crb(c,2)) { goto L_800C751C; } // 800C750C
  c->r[3]=c->r[1]+0x00000008u; // 800C7510
  c->r[4]=0u+0x00000001u; // 800C7514
  c->lr=0x800C751Cu; f_800BDBB4(c); // 800C7518
L_800C751C:;
  c->r[0]=0u+0x00000007u; // 800C751C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C7520
  c->r[4]=c->r[1]+0x00000004u; // 800C7524
  c->ctr=c->r[0]; // 800C7528
L_800C752C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C752C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7530
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7534
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7538
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C752C; } // 800C753C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7540
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7544
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7548
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C754C
  c->lr=c->r[0]; // 800C7550
  c->r[1]=c->r[1]+0x00000050u; // 800C7554
  return; // 800C7558
}

// fn_800C755C
void f_800C755C(Ctx* __restrict c) {
  trace_call(0x800C755Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C755C
  c->r[4]=0u+0x00000000u; // 800C7560
  c->r[0]=0u+0x00000007u; // 800C7564
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 800C7568
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C756C
  c->r[4]=c->r[1]+0x00000004u; // 800C7570
  c->ctr=c->r[0]; // 800C7574
L_800C7578:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7578
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C757C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7580
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7584
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7578; } // 800C7588
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C758C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7590
  c->r[1]=c->r[1]+0x00000050u; // 800C7594
  return; // 800C7598
}

// fn_800C759C
void f_800C759C(Ctx* __restrict c) {
  trace_call(0x800C759Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C759C
  c->r[0]=c->lr; // 800C75A0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C75A4
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C75A8
  c->r[31]=c->r[5]|c->r[5]; // 800C75AC
  c->r[30]=c->r[3]|c->r[3]; // 800C75B0
  c->r[3]=c->r[31]|c->r[31]; // 800C75B4
  c->lr=0x800C75BCu; f_80068A78(c); // 800C75B8
  c->r[4]=0u+0x803E0000u; // 800C75BC
  c->r[3]=c->r[1]+0x00000008u; // 800C75C0
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C75C4
  c->r[4]=c->r[4]+0x00000063u; // 800C75C8
  c->lr=0x800C75D0u; f_800C12E4(c); // 800C75CC
  c->r[4]=0u+0x77610000u; // 800C75D0
  c->r[3]=c->r[31]|c->r[31]; // 800C75D4
  c->r[4]=c->r[4]+0x00006C6Bu; // 800C75D8
  c->r[5]=0u+0x00000000u; // 800C75DC
  c->r[6]=0u+0xFFFFFFFFu; // 800C75E0
  c->lr=0x800C75E8u; f_800C763C(c); // 800C75E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C75E8
  if (crb(c,2)) { goto L_800C75FC; } // 800C75EC
  c->r[4]=c->r[3]|c->r[3]; // 800C75F0
  c->r[3]=c->r[1]+0x00000008u; // 800C75F4
  c->lr=0x800C75FCu; f_800C12E4(c); // 800C75F8
L_800C75FC:;
  c->r[0]=0u+0x00000007u; // 800C75FC
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C7600
  c->r[4]=c->r[1]+0x00000004u; // 800C7604
  c->ctr=c->r[0]; // 800C7608
L_800C760C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C760C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7610
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7614
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7618
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C760C; } // 800C761C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7620
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7624
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7628
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C762C
  c->lr=c->r[0]; // 800C7630
  c->r[1]=c->r[1]+0x00000050u; // 800C7634
  return; // 800C7638
}

// fn_800C763C
void f_800C763C(Ctx* __restrict c) {
  trace_call(0x800C763Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C763C
  c->r[0]=c->lr; // 800C7640
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C7644
  c->r[11]=c->r[1]+0x00000040u; // 800C7648
  c->lr=0x800C7650u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C764C
  c->r[30]=c->r[3]|c->r[3]; // 800C7650
  c->r[27]=c->r[4]|c->r[4]; // 800C7654
  c->r[31]=c->r[5]|c->r[5]; // 800C7658
  c->r[28]=c->r[6]|c->r[6]; // 800C765C
  c->lr=0x800C7664u; f_80068A78(c); // 800C7660
  c->r[29]=c->r[3]|c->r[3]; // 800C7664
  c->lr=0x800C766Cu; f_80291D94(c); // 800C7668
  c->r[3]=c->r[3]^0x80000000u; // 800C766C
  c->r[0]=0u+0x43300000u; // 800C7670
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800C7674
  c->r[4]=c->r[29]|c->r[29]; // 800C7678
  c->r[3]=c->r[1]+0x00000008u; // 800C767C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C7680
  c->lr=0x800C7688u; f_800C6FB0(c); // 800C7684
  c->r[4]=c->r[27]|c->r[27]; // 800C7688
  c->r[3]=c->r[1]+0x00000008u; // 800C768C
  c->r[5]=0u+0x00000000u; // 800C7690
  c->lr=0x800C7698u; f_800C6ACC(c); // 800C7694
  cmps(c,0,(int32_t)c->r[3],0); // 800C7698
  if (crb(c,2)) { goto L_800C7778; } // 800C769C
  cmps(c,1,(int32_t)c->r[28],0); // 800C76A0
  c->r[7]=c->r[3]+0x00000008u; // 800C76A4
  if (crb(c,4)) { goto L_800C7710; } // 800C76A8
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 800C76AC
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C76B0
  c->r[4]=c->r[4]+0x00000008u; // 800C76B4
  c->r[0]=c->r[7]+c->r[0]; // 800C76B8
  c->r[0]=c->r[0]-c->r[3]; // 800C76BC
  c->r[0]=c->r[4]^c->r[0]; // 800C76C0
  c->r[3]=sraw(c,c->r[0],1); // 800C76C4
  c->r[0]=c->r[0]&c->r[4]; // 800C76C8
  c->r[0]=c->r[3]-c->r[0]; // 800C76CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800C76D0
  if (!crb(c,2)) { goto L_800C76F4; } // 800C76D4
  if (!crb(c,5)) { goto L_800C76E4; } // 800C76D8
  c->r[28]=0u+0x00000000u; // 800C76DC
  goto L_800C76F4; // 800C76E0
L_800C76E4:;
  c->r[3]=0u+0x803E0000u; // 800C76E4
  c->r[3]=c->r[3]+0xFFFFA848u; // 800C76E8
  c->r[3]=c->r[3]+0x0000006Du; // 800C76EC
  goto L_800C777C; // 800C76F0
L_800C76F4:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 800C76F4
  c->r[4]=c->r[30]|c->r[30]; // 800C76F8
  c->r[6]=c->r[31]|c->r[31]; // 800C76FC
  c->r[5]=c->r[1]+0x00000008u; // 800C7700
  c->r[3]=c->r[7]+c->r[0]; // 800C7704
  c->lr=0x800C770Cu; f_800C7794(c); // 800C7708
  goto L_800C777C; // 800C770C
L_800C7710:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C7710
  c->r[0]=0u+0x00000014u; // 800C7714
  c->r[3]=R32(c->r[13]+0xFFFF9514u); // 800C7718
  c->r[4]=divwu(c->r[4],c->r[0]); // 800C771C
  c->r[0]=c->r[3]+0x00000001u; // 800C7720
  W32(c->r[13]+0xFFFF9514u,c->r[0]); // 800C7724
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800C7728
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800C772C
  c->r[3]=c->r[3]-c->r[0]; // 800C7730
  goto L_800C7748; // 800C7734
L_800C7738:;
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800C7738
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800C773C
  c->r[3]=c->r[3]-c->r[0]; // 800C7740
  goto L_800C7750; // 800C7744
L_800C7748:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C7748
  if (crb(c,1)) { IRQCHK(c); goto L_800C7738; } // 800C774C
L_800C7750:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800C7750
  if (crb(c,0)) { goto L_800C775C; } // 800C7754
  c->r[3]=0u+0x00000000u; // 800C7758
L_800C775C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800C775C
  c->r[4]=c->r[30]|c->r[30]; // 800C7760
  c->r[6]=c->r[31]|c->r[31]; // 800C7764
  c->r[5]=c->r[1]+0x00000008u; // 800C7768
  c->r[3]=c->r[7]+c->r[0]; // 800C776C
  c->lr=0x800C7774u; f_800C7794(c); // 800C7770
  goto L_800C777C; // 800C7774
L_800C7778:;
  c->r[3]=0u+0x00000000u; // 800C7778
L_800C777C:;
  c->r[11]=c->r[1]+0x00000040u; // 800C777C
  c->lr=0x800C7784u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C7780
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C7784
  c->lr=c->r[0]; // 800C7788
  c->r[1]=c->r[1]+0x00000040u; // 800C778C
  return; // 800C7790
}

// fn_800C7794
void f_800C7794(Ctx* __restrict c) {
  trace_call(0x800C7794u);
  cmps(c,0,(int32_t)c->r[6],1); // 800C7794
  if (crb(c,2)) { goto L_800C77C8; } // 800C7798
  if (!crb(c,0)) { goto L_800C77AC; } // 800C779C
  cmps(c,0,(int32_t)c->r[6],0); // 800C77A0
  if (!crb(c,0)) { goto L_800C77B8; } // 800C77A4
  goto L_800C77E8; // 800C77A8
L_800C77AC:;
  cmps(c,0,(int32_t)c->r[6],3); // 800C77AC
  if (!crb(c,0)) { goto L_800C77E8; } // 800C77B0
  goto L_800C77D8; // 800C77B4
L_800C77B8:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 800C77B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C77BC
  c->r[3]=c->r[4]+c->r[0]; // 800C77C0
  return; // 800C77C4
L_800C77C8:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 800C77C8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C77CC
  c->r[3]=c->r[4]+c->r[0]; // 800C77D0
  return; // 800C77D4
L_800C77D8:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 800C77D8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C77DC
  c->r[3]=c->r[4]+c->r[0]; // 800C77E0
  return; // 800C77E4
L_800C77E8:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 800C77E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C77EC
  c->r[3]=c->r[4]+c->r[0]; // 800C77F0
  return; // 800C77F4
}

// fn_800C77F8
void f_800C77F8(Ctx* __restrict c) {
  trace_call(0x800C77F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C77F8
  c->r[0]=c->lr; // 800C77FC
  c->r[6]=R32(c->r[3]+0x00000000u); // 800C7800
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C7804
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C7808
  c->r[3]=c->r[1]+0x00000010u; // 800C780C
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C7810
  c->r[30]=c->r[4]|c->r[4]; // 800C7814
  c->r[31]=c->r[5]|c->r[5]; // 800C7818
  c->r[4]=c->r[1]+0x00000008u; // 800C781C
  c->r[5]=0u+0x00000000u; // 800C7820
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C7824
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C7828
  c->lr=0x800C7830u; f_800ABC54(c); // 800C782C
  c->r[4]=0u+0x77610000u; // 800C7830
  c->r[5]=c->r[31]|c->r[31]; // 800C7834
  c->r[6]=c->r[30]|c->r[30]; // 800C7838
  c->r[3]=c->r[1]+0x00000010u; // 800C783C
  c->r[4]=c->r[4]+0x00006C6Bu; // 800C7840
  c->lr=0x800C7848u; f_800C763C(c); // 800C7844
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7848
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C784C
  c->lr=c->r[0]; // 800C7850
  c->r[1]=c->r[1]+0x00000030u; // 800C7854
  return; // 800C7858
}

// fn_800C785C
void f_800C785C(Ctx* __restrict c) {
  trace_call(0x800C785Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C785C
  c->r[0]=c->lr; // 800C7860
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7864
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7868
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C786C
  fcmp(c,0,c->f[1],c->f[0]); // 800C7870
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C7874
  c->r[31]=c->r[3]|c->r[3]; // 800C7878
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C787C
  c->r[0]=c->cr; // 800C7880
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 800C7884
  cmpu(c,0,c->r[0],0x00000001u); // 800C7888
  if (!crb(c,2)) { goto L_800C78F4; } // 800C788C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C7890
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C7894
  c->ctr=c->r[12]; // 800C7898
  if (true) { c->lr=0x800C78A0u; dispatch(c,c->ctr); } // 800C789C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C78A0
  c->r[4]=0u+0xC8000000u; // 800C78A4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C78A8
  c->r[3]=c->r[1]+0x00000008u; // 800C78AC
  c->lr=0x800C78B4u; f_8003EDD0(c); // 800C78B0
  cmps(c,0,(int32_t)c->r[3],0); // 800C78B4
  if (crb(c,2)) { goto L_800C78EC; } // 800C78B8
  c->r[12]=R32(c->r[31]+0x00000010u); // 800C78BC
  c->r[3]=c->r[31]|c->r[31]; // 800C78C0
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C78C4
  c->ctr=c->r[12]; // 800C78C8
  if (true) { c->lr=0x800C78D0u; dispatch(c,c->ctr); } // 800C78CC
  c->r[3]=R32(c->r[3]+0x000000A4u); // 800C78D0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C78D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C78D8
  c->lr=0x800C78E0u; f_8016498C(c); // 800C78DC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800C78E0
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800C78E4
  goto L_800C78F8; // 800C78E8
L_800C78EC:;
  c->r[3]=0u+0x00000001u; // 800C78EC
  goto L_800C78F8; // 800C78F0
L_800C78F4:;
  c->r[3]=0u+0x00000000u; // 800C78F4
L_800C78F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C78F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C78FC
  c->lr=c->r[0]; // 800C7900
  c->r[1]=c->r[1]+0x00000020u; // 800C7904
  return; // 800C7908
}

// fn_800C790C
void f_800C790C(Ctx* __restrict c) {
  trace_call(0x800C790Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C790C
  c->r[0]=c->lr; // 800C7910
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C7914
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800C7918
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800C791C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C7920
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C7924
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C7928
  c->ctr=c->r[12]; // 800C792C
  if (true) { c->lr=0x800C7934u; dispatch(c,c->ctr); } // 800C7930
  cmps(c,0,(int32_t)c->r[3],0); // 800C7934
  c->r[31]=c->r[3]|c->r[3]; // 800C7938
  if (crb(c,2)) { goto L_800C79A4; } // 800C793C
  c->r[3]=0u+0x804D0000u; // 800C7940
  c->r[0]=0u+0x43300000u; // 800C7944
  c->r[3]=c->r[3]+0x00003318u; // 800C7948
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C794C
  c->r[0]=R32(c->r[3]+0x00000028u); // 800C7950
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C7954
  c->r[0]=c->r[0]^0x80000000u; // 800C7958
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C795C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C7960
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800C7964
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C7968
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[0]); // 800C796C
  c->lr=0x800C7974u; f_8026F3A8(c); // 800C7970
  cmpu(c,0,c->r[3],0x00000001u); // 800C7974
  if (!crb(c,2)) { goto L_800C7988; } // 800C7978
  {uint32_t ea=c->r[2]+0xFFFF8F10u; c->f[0]=RF64(ea);} // 800C797C
  c->f[31]=c->f[31]*c->f[0]; // 800C7980
  c->f[31]=c->ps1[31]=S(c->f[31]); // 800C7984
L_800C7988:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 800C7988
  c->r[3]=c->r[31]|c->r[31]; // 800C798C
  c->r[12]=R32(c->r[12]+0x00000048u); // 800C7990
  c->ctr=c->r[12]; // 800C7994
  if (true) { c->lr=0x800C799Cu; dispatch(c,c->ctr); } // 800C7998
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 800C799C
  goto L_800C79A8; // 800C79A0
L_800C79A4:;
  c->lr=0x800C79A8u; f_801AF03C(c); // 800C79A4
L_800C79A8:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800C79A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C79AC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800C79B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C79B4
  c->lr=c->r[0]; // 800C79B8
  c->r[1]=c->r[1]+0x00000030u; // 800C79BC
  return; // 800C79C0
}

// fn_800C79C4
void f_800C79C4(Ctx* __restrict c) {
  trace_call(0x800C79C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C79C4
  c->r[0]=c->lr; // 800C79C8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C79CC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800C79D0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800C79D4
  c->r[11]=c->r[1]+0x00000080u; // 800C79D8
  c->lr=0x800C79E0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C79DC
  c->r[30]=c->r[5]|c->r[5]; // 800C79E0
  c->r[29]=c->r[3]|c->r[3]; // 800C79E4
  c->r[3]=c->r[30]|c->r[30]; // 800C79E8
  c->lr=0x800C79F0u; f_80068A78(c); // 800C79EC
  c->r[4]=0u+0x803E0000u; // 800C79F0
  c->r[3]=c->r[1]+0x00000014u; // 800C79F4
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C79F8
  c->r[4]=c->r[4]+0x00000063u; // 800C79FC
  c->lr=0x800C7A04u; f_800C12E4(c); // 800C7A00
  c->r[3]=c->r[30]|c->r[30]; // 800C7A04
  c->lr=0x800C7A0Cu; f_80068A78(c); // 800C7A08
  c->r[25]=c->r[3]|c->r[3]; // 800C7A0C
  c->lr=0x800C7A14u; f_80291D94(c); // 800C7A10
  c->r[3]=c->r[3]^0x80000000u; // 800C7A14
  c->r[0]=0u+0x43300000u; // 800C7A18
  W32(c->r[1]+0x00000054u,c->r[3]); // 800C7A1C
  c->r[4]=c->r[25]|c->r[25]; // 800C7A20
  c->r[3]=c->r[1]+0x00000008u; // 800C7A24
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C7A28
  c->lr=0x800C7A30u; f_800C6FB0(c); // 800C7A2C
  c->r[4]=0u+0x64650000u; // 800C7A30
  c->r[3]=c->r[1]+0x00000008u; // 800C7A34
  c->r[4]=c->r[4]+0x00006164u; // 800C7A38
  c->r[5]=0u+0x00000000u; // 800C7A3C
  c->lr=0x800C7A44u; f_800C6ACC(c); // 800C7A40
  cmps(c,0,(int32_t)c->r[3],0); // 800C7A44
  if (crb(c,2)) { goto L_800C7AE8; } // 800C7A48
  c->r[5]=R32(c->r[3]+0x00000004u); // 800C7A4C
  c->r[0]=0u+0x00000018u; // 800C7A50
  c->r[4]=R32(c->r[13]+0xFFFF9514u); // 800C7A54
  c->r[31]=c->r[3]+0x00000008u; // 800C7A58
  c->r[25]=divwu(c->r[5],c->r[0]); // 800C7A5C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C7A60
  c->r[0]=c->r[4]+0x00000001u; // 800C7A64
  W32(c->r[13]+0xFFFF9514u,c->r[0]); // 800C7A68
  c->r[27]=0u+0x00000000u; // 800C7A6C
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[25]); // 800C7A70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[25]); // 800C7A74
  c->r[26]=c->r[4]-c->r[0]; // 800C7A78
  goto L_800C7ABC; // 800C7A7C
L_800C7A80:;
  c->r[4]=c->r[26]+c->r[27]; // 800C7A80
  c->r[3]=c->r[30]|c->r[30]; // 800C7A84
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[25]); // 800C7A88
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[25]); // 800C7A8C
  c->r[28]=c->r[4]-c->r[0]; // 800C7A90
  c->lr=0x800C7A98u; f_80068A78(c); // 800C7A94
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 800C7A98
  c->r[3]=c->r[31]+c->r[0]; // 800C7A9C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7AA0
  fcmp(c,0,c->f[0],c->f[31]); // 800C7AA4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800C7AA8
  if (!crb(c,2)) { goto L_800C7AB8; } // 800C7AAC
  c->r[26]=c->r[28]|c->r[28]; // 800C7AB0
  goto L_800C7AC4; // 800C7AB4
L_800C7AB8:;
  c->r[27]=c->r[27]+0x00000001u; // 800C7AB8
L_800C7ABC:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[25]); // 800C7ABC
  if (crb(c,0)) { IRQCHK(c); goto L_800C7A80; } // 800C7AC0
L_800C7AC4:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[25]); // 800C7AC4
  if (crb(c,0)) { goto L_800C7AD0; } // 800C7AC8
  c->r[26]=0u+0x00000000u; // 800C7ACC
L_800C7AD0:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)24); // 800C7AD0
  c->r[4]=R32(c->r[1]+0x00000010u); // 800C7AD4
  c->r[3]=c->r[31]+c->r[0]; // 800C7AD8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C7ADC
  c->r[4]=c->r[4]+c->r[0]; // 800C7AE0
  goto L_800C7AEC; // 800C7AE4
L_800C7AE8:;
  c->r[4]=0u+0x00000000u; // 800C7AE8
L_800C7AEC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C7AEC
  if (crb(c,2)) { goto L_800C7AFC; } // 800C7AF0
  c->r[3]=c->r[1]+0x00000014u; // 800C7AF4
  c->lr=0x800C7AFCu; f_800C12E4(c); // 800C7AF8
L_800C7AFC:;
  c->r[0]=0u+0x00000007u; // 800C7AFC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C7B00
  c->r[4]=c->r[1]+0x00000010u; // 800C7B04
  c->ctr=c->r[0]; // 800C7B08
L_800C7B0C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7B0C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7B10
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7B14
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7B18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7B0C; } // 800C7B1C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7B20
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7B24
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800C7B28
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800C7B2C
  c->r[11]=c->r[1]+0x00000080u; // 800C7B30
  c->lr=0x800C7B38u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C7B34
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C7B38
  c->lr=c->r[0]; // 800C7B3C
  c->r[1]=c->r[1]+0x00000090u; // 800C7B40
  return; // 800C7B44
}

// fn_800C7B48
void f_800C7B48(Ctx* __restrict c) {
  trace_call(0x800C7B48u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7B48
  c->r[0]=c->lr; // 800C7B4C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C7B50
  c->r[11]=c->r[1]+0x00000060u; // 800C7B54
  c->lr=0x800C7B5Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C7B58
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7B5C
  c->r[31]=c->r[13]+0xFFFF94B8u; // 800C7B60
  c->r[29]=c->r[3]|c->r[3]; // 800C7B64
  c->r[30]=c->r[6]|c->r[6]; // 800C7B68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C7B6C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C7B70
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C7B74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C7B78
  c->r[0]=R32(c->r[31]+c->r[0]); // 800C7B7C
  cmps(c,0,(int32_t)c->r[0],0); // 800C7B80
  if (crb(c,2)) { goto L_800C7BDC; } // 800C7B84
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C7B88
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C7B8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C7B90
  c->r[3]=R32(c->r[31]+c->r[0]); // 800C7B94
  c->lr=0x800C7B9Cu; f_80067C50(c); // 800C7B98
  cmps(c,0,(int32_t)c->r[3],1); // 800C7B9C
  if (!crb(c,2)) { goto L_800C7BDC; } // 800C7BA0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7BA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C7BA8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C7BAC
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C7BB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C7BB4
  c->r[3]=R32(c->r[31]+c->r[0]); // 800C7BB8
  c->lr=0x800C7BC0u; f_80067C84(c); // 800C7BBC
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7BC0
  fcmp(c,0,c->f[1],c->f[0]); // 800C7BC4
  if (!crb(c,1)) { goto L_800C7BDC; } // 800C7BC8
  c->r[3]=c->r[1]+0x00000008u; // 800C7BCC
  c->r[4]=0u+0x00000001u; // 800C7BD0
  c->lr=0x800C7BD8u; f_800BDBB4(c); // 800C7BD4
  goto L_800C7BE8; // 800C7BD8
L_800C7BDC:;
  c->r[3]=c->r[1]+0x00000008u; // 800C7BDC
  c->r[4]=0u+0x00000000u; // 800C7BE0
  c->lr=0x800C7BE8u; f_800BDBB4(c); // 800C7BE4
L_800C7BE8:;
  c->r[0]=0u+0x00000007u; // 800C7BE8
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C7BEC
  c->r[4]=c->r[1]+0x00000004u; // 800C7BF0
  c->ctr=c->r[0]; // 800C7BF4
L_800C7BF8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7BF8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7BFC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7C00
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7C04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7BF8; } // 800C7C08
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7C0C
  c->r[11]=c->r[1]+0x00000060u; // 800C7C10
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7C14
  c->lr=0x800C7C1Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C7C18
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C7C1C
  c->lr=c->r[0]; // 800C7C20
  c->r[1]=c->r[1]+0x00000060u; // 800C7C24
  return; // 800C7C28
}

// fn_800C7C2C
void f_800C7C2C(Ctx* __restrict c) {
  trace_call(0x800C7C2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7C2C
  c->r[0]=c->lr; // 800C7C30
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C7C34
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C7C38
  c->r[31]=c->r[3]|c->r[3]; // 800C7C3C
  c->lr=0x800C7C44u; f_800F65B8(c); // 800C7C40
  c->r[4]=c->r[3]|c->r[3]; // 800C7C44
  c->r[3]=c->r[1]+0x00000008u; // 800C7C48
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C7C4C
  c->r[0]=cntlz(c->r[0]); // 800C7C50
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C7C54
  c->lr=0x800C7C5Cu; f_800BDBB4(c); // 800C7C58
  c->r[0]=0u+0x00000007u; // 800C7C5C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C7C60
  c->r[4]=c->r[1]+0x00000004u; // 800C7C64
  c->ctr=c->r[0]; // 800C7C68
L_800C7C6C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7C6C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7C70
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7C74
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7C78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7C6C; } // 800C7C7C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7C80
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7C84
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C7C88
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C7C8C
  c->lr=c->r[0]; // 800C7C90
  c->r[1]=c->r[1]+0x00000050u; // 800C7C94
  return; // 800C7C98
}

// fn_800C7C9C
void f_800C7C9C(Ctx* __restrict c) {
  trace_call(0x800C7C9Cu);
  c->r[3]=0u+0x00000001u; // 800C7C9C
  return; // 800C7CA0
}

// fn_800C7CA4
void f_800C7CA4(Ctx* __restrict c) {
  trace_call(0x800C7CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7CA4
  c->r[0]=c->lr; // 800C7CA8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C7CAC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800C7CB0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800C7CB4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800C7CB8
  c->r[31]=c->r[6]|c->r[6]; // 800C7CBC
  W32(c->r[1]+0x00000088u,c->r[30]); // 800C7CC0
  c->r[30]=c->r[3]|c->r[3]; // 800C7CC4
  c->r[3]=c->r[5]|c->r[5]; // 800C7CC8
  c->lr=0x800C7CD0u; f_80068A78(c); // 800C7CCC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C7CD0
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C7CD4
  c->ctr=c->r[12]; // 800C7CD8
  if (true) { c->lr=0x800C7CE0u; dispatch(c,c->ctr); } // 800C7CDC
  c->r[4]=c->r[3]|c->r[3]; // 800C7CE0
  c->r[3]=c->r[1]+0x00000014u; // 800C7CE4
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C7CE8
  c->r[5]=c->r[31]+0x00000004u; // 800C7CEC
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C7CF0
  c->ctr=c->r[12]; // 800C7CF4
  if (true) { c->lr=0x800C7CFCu; dispatch(c,c->ctr); } // 800C7CF8
  c->r[3]=c->r[1]+0x00000008u; // 800C7CFC
  c->r[4]=c->r[1]+0x00000014u; // 800C7D00
  c->lr=0x800C7D08u; f_80032FD8(c); // 800C7D04
  {uint32_t ea=c->r[31]+0x00000040u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C7D08
  c->lr=0x800C7D10u; f_80128B5C(c); // 800C7D0C
  c->f[1]=c->f[31]; // 800C7D10
  c->r[4]=c->r[1]+0x00000008u; // 800C7D14
  c->r[5]=0u+0x00000000u; // 800C7D18
  c->lr=0x800C7D20u; f_8012A874(c); // 800C7D1C
  cmps(c,0,(int32_t)c->r[3],0); // 800C7D20
  if (crb(c,2)) { goto L_800C7D38; } // 800C7D24
  c->r[3]=c->r[1]+0x00000044u; // 800C7D28
  c->r[4]=0u+0x00000001u; // 800C7D2C
  c->lr=0x800C7D34u; f_800BDBB4(c); // 800C7D30
  goto L_800C7D44; // 800C7D34
L_800C7D38:;
  c->r[3]=c->r[1]+0x00000044u; // 800C7D38
  c->r[4]=0u+0x00000000u; // 800C7D3C
  c->lr=0x800C7D44u; f_800BDBB4(c); // 800C7D40
L_800C7D44:;
  c->r[0]=0u+0x00000007u; // 800C7D44
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C7D48
  c->r[4]=c->r[1]+0x00000040u; // 800C7D4C
  c->ctr=c->r[0]; // 800C7D50
L_800C7D54:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7D54
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7D58
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7D5C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7D60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7D54; } // 800C7D64
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7D68
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7D6C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800C7D70
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800C7D74
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800C7D78
  c->r[30]=R32(c->r[1]+0x00000088u); // 800C7D7C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C7D80
  c->lr=c->r[0]; // 800C7D84
  c->r[1]=c->r[1]+0x000000A0u; // 800C7D88
  return; // 800C7D8C
}

// fn_800C7D90
void f_800C7D90(Ctx* __restrict c) {
  trace_call(0x800C7D90u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7D90
  c->r[0]=c->lr; // 800C7D94
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C7D98
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800C7D9C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800C7DA0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800C7DA4
  c->r[31]=c->r[6]|c->r[6]; // 800C7DA8
  W32(c->r[1]+0x00000088u,c->r[30]); // 800C7DAC
  c->r[30]=c->r[3]|c->r[3]; // 800C7DB0
  c->r[3]=c->r[5]|c->r[5]; // 800C7DB4
  c->lr=0x800C7DBCu; f_80068A78(c); // 800C7DB8
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C7DBC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C7DC0
  c->ctr=c->r[12]; // 800C7DC4
  if (true) { c->lr=0x800C7DCCu; dispatch(c,c->ctr); } // 800C7DC8
  c->r[4]=c->r[3]|c->r[3]; // 800C7DCC
  c->r[3]=c->r[1]+0x00000014u; // 800C7DD0
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C7DD4
  c->r[5]=c->r[31]+0x00000004u; // 800C7DD8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C7DDC
  c->ctr=c->r[12]; // 800C7DE0
  if (true) { c->lr=0x800C7DE8u; dispatch(c,c->ctr); } // 800C7DE4
  c->r[3]=c->r[1]+0x00000008u; // 800C7DE8
  c->r[4]=c->r[1]+0x00000014u; // 800C7DEC
  c->lr=0x800C7DF4u; f_80032FD8(c); // 800C7DF0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C7DF4
  c->lr=0x800C7DFCu; f_80128B5C(c); // 800C7DF8
  c->f[1]=c->f[31]; // 800C7DFC
  c->r[4]=c->r[1]+0x00000008u; // 800C7E00
  c->r[5]=0u+0x00000000u; // 800C7E04
  c->lr=0x800C7E0Cu; f_8012A874(c); // 800C7E08
  cmps(c,0,(int32_t)c->r[3],0); // 800C7E0C
  if (crb(c,2)) { goto L_800C7E24; } // 800C7E10
  c->r[3]=c->r[1]+0x00000044u; // 800C7E14
  c->r[4]=0u+0x00000000u; // 800C7E18
  c->lr=0x800C7E20u; f_800BDBB4(c); // 800C7E1C
  goto L_800C7E30; // 800C7E20
L_800C7E24:;
  c->r[3]=c->r[1]+0x00000044u; // 800C7E24
  c->r[4]=0u+0x00000001u; // 800C7E28
  c->lr=0x800C7E30u; f_800BDBB4(c); // 800C7E2C
L_800C7E30:;
  c->r[0]=0u+0x00000007u; // 800C7E30
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C7E34
  c->r[4]=c->r[1]+0x00000040u; // 800C7E38
  c->ctr=c->r[0]; // 800C7E3C
L_800C7E40:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7E40
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7E44
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7E48
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7E4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7E40; } // 800C7E50
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7E54
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7E58
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800C7E5C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800C7E60
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800C7E64
  c->r[30]=R32(c->r[1]+0x00000088u); // 800C7E68
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C7E6C
  c->lr=c->r[0]; // 800C7E70
  c->r[1]=c->r[1]+0x000000A0u; // 800C7E74
  return; // 800C7E78
}

// fn_800C7E7C
void f_800C7E7C(Ctx* __restrict c) {
  trace_call(0x800C7E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7E7C
  c->r[0]=c->lr; // 800C7E80
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C7E84
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C7E88
  c->r[30]=c->r[5]|c->r[5]; // 800C7E8C
  c->r[29]=c->r[3]|c->r[3]; // 800C7E90
  c->r[3]=c->r[30]|c->r[30]; // 800C7E94
  c->lr=0x800C7E9Cu; f_80068A78(c); // 800C7E98
  c->r[4]=R32(c->r[30]+0x00000000u); // 800C7E9C
  c->r[31]=c->r[3]|c->r[3]; // 800C7EA0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800C7EA4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C7EA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C7EAC
  c->lr=0x800C7EB4u; f_80128960(c); // 800C7EB0
  c->r[4]=c->r[1]+0x00000008u; // 800C7EB4
  c->lr=0x800C7EBCu; f_80127EA0(c); // 800C7EB8
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 800C7EBC
  c->r[30]=c->r[3]|c->r[3]; // 800C7EC0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800C7EC4
  cmps(c,0,(int32_t)c->r[0],0); // 800C7EC8
  if (crb(c,1)) { goto L_800C7EDC; } // 800C7ECC
  c->lr=0x800C7ED4u; f_80073B60(c); // 800C7ED0
  cmps(c,0,(int32_t)c->r[3],0); // 800C7ED4
  if (crb(c,2)) { goto L_800C7EE0; } // 800C7ED8
L_800C7EDC:;
  c->r[30]=0u+0x00000000u; // 800C7EDC
L_800C7EE0:;
  c->r[4]=c->r[30]|c->r[30]; // 800C7EE0
  c->r[3]=c->r[1]+0x00000010u; // 800C7EE4
  c->lr=0x800C7EECu; f_800BDBB4(c); // 800C7EE8
  c->r[0]=0u+0x00000007u; // 800C7EEC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C7EF0
  c->r[4]=c->r[1]+0x0000000Cu; // 800C7EF4
  c->ctr=c->r[0]; // 800C7EF8
L_800C7EFC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7EFC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7F00
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7F04
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7F08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7EFC; } // 800C7F0C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7F10
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7F14
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7F18
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C7F1C
  c->lr=c->r[0]; // 800C7F20
  c->r[1]=c->r[1]+0x00000060u; // 800C7F24
  return; // 800C7F28
}

// fn_800C7F2C
void f_800C7F2C(Ctx* __restrict c) {
  trace_call(0x800C7F2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7F2C
  c->r[0]=c->lr; // 800C7F30
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C7F34
  c->r[11]=c->r[1]+0x00000070u; // 800C7F38
  c->lr=0x800C7F40u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C7F3C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C7F40
  c->r[29]=c->r[3]|c->r[3]; // 800C7F44
  c->r[3]=R32(c->r[5]+0x00000000u); // 800C7F48
  c->r[30]=c->r[6]|c->r[6]; // 800C7F4C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C7F50
  c->r[0]=R32(c->r[5]+0x00000004u); // 800C7F54
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C7F58
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800C7F5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C7F60
  c->r[31]=R32(c->r[1]+0x00000054u); // 800C7F64
  c->lr=0x800C7F6Cu; f_80128960(c); // 800C7F68
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C7F6C
  c->r[5]=c->r[31]|c->r[31]; // 800C7F70
  c->r[4]=c->r[1]+0x00000008u; // 800C7F74
  c->lr=0x800C7F7Cu; f_80128878(c); // 800C7F78
  c->r[3]=0u+0x00000000u; // 800C7F7C
  c->r[0]=0u+0x00000007u; // 800C7F80
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C7F84
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C7F88
  c->r[4]=c->r[1]+0x0000000Cu; // 800C7F8C
  c->ctr=c->r[0]; // 800C7F90
L_800C7F94:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C7F94
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C7F98
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C7F9C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C7FA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7F94; } // 800C7FA4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C7FA8
  c->r[11]=c->r[1]+0x00000070u; // 800C7FAC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7FB0
  c->lr=0x800C7FB8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C7FB4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C7FB8
  c->lr=c->r[0]; // 800C7FBC
  c->r[1]=c->r[1]+0x00000070u; // 800C7FC0
  return; // 800C7FC4
}

// fn_800C7FC8
void f_800C7FC8(Ctx* __restrict c) {
  trace_call(0x800C7FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7FC8
  c->r[0]=c->lr; // 800C7FCC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C7FD0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C7FD4
  c->r[31]=c->r[3]|c->r[3]; // 800C7FD8
  c->r[4]=R32(c->r[5]+0x00000000u); // 800C7FDC
  c->r[0]=R32(c->r[5]+0x00000004u); // 800C7FE0
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C7FE4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C7FE8
  c->lr=0x800C7FF0u; f_80128960(c); // 800C7FEC
  c->r[4]=c->r[1]+0x00000008u; // 800C7FF0
  c->lr=0x800C7FF8u; f_801280F8(c); // 800C7FF4
  c->r[3]=0u+0x00000000u; // 800C7FF8
  c->r[0]=0u+0x00000007u; // 800C7FFC
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C8000
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C8004
  c->r[4]=c->r[1]+0x0000000Cu; // 800C8008
  c->ctr=c->r[0]; // 800C800C
L_800C8010:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8010
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8014
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8018
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C801C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8010; } // 800C8020
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8024
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8028
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C802C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C8030
  c->lr=c->r[0]; // 800C8034
  c->r[1]=c->r[1]+0x00000060u; // 800C8038
  return; // 800C803C
}

// fn_800C8040
void f_800C8040(Ctx* __restrict c) {
  trace_call(0x800C8040u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8040
  c->r[0]=c->lr; // 800C8044
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C8048
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C804C
  c->r[31]=c->r[3]|c->r[3]; // 800C8050
  c->lr=0x800C8058u; f_80128960(c); // 800C8054
  c->lr=0x800C805Cu; f_801281D8(c); // 800C8058
  c->r[0]=c->r[3]^0x80000000u; // 800C805C
  c->r[3]=0u+0x43300000u; // 800C8060
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C8064
  c->r[6]=0u+0x00000001u; // 800C8068
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C806C
  c->r[0]=0u+0x00000007u; // 800C8070
  W32(c->r[1]+0x00000048u,c->r[3]); // 800C8074
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C8078
  c->r[4]=c->r[1]+0x00000004u; // 800C807C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C8080
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C8084
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C8088
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C808C
  c->ctr=c->r[0]; // 800C8090
L_800C8094:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8094
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8098
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C809C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C80A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8094; } // 800C80A4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C80A8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C80AC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C80B0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C80B4
  c->lr=c->r[0]; // 800C80B8
  c->r[1]=c->r[1]+0x00000060u; // 800C80BC
  return; // 800C80C0
}

// fn_800C80C4
void f_800C80C4(Ctx* __restrict c) {
  trace_call(0x800C80C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C80C4
  c->r[0]=c->lr; // 800C80C8
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800C80CC
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800C80D0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800C80D4
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800C80D8
  c->r[31]=c->r[6]|c->r[6]; // 800C80DC
  W32(c->r[1]+0x000000C8u,c->r[30]); // 800C80E0
  c->r[30]=c->r[3]|c->r[3]; // 800C80E4
  c->r[3]=c->r[5]|c->r[5]; // 800C80E8
  c->lr=0x800C80F0u; f_80068A78(c); // 800C80EC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C80F0
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C80F4
  c->ctr=c->r[12]; // 800C80F8
  if (true) { c->lr=0x800C8100u; dispatch(c,c->ctr); } // 800C80FC
  c->r[4]=c->r[3]|c->r[3]; // 800C8100
  c->r[3]=c->r[1]+0x0000005Cu; // 800C8104
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C8108
  c->r[5]=c->r[31]+0x00000004u; // 800C810C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C8110
  c->ctr=c->r[12]; // 800C8114
  if (true) { c->lr=0x800C811Cu; dispatch(c,c->ctr); } // 800C8118
  c->lr=0x800C8120u; f_80128B5C(c); // 800C811C
  c->r[4]=c->r[3]|c->r[3]; // 800C8120
  c->r[3]=c->r[1]+0x00000050u; // 800C8124
  c->r[4]=c->r[4]+0x00000020u; // 800C8128
  c->lr=0x800C8130u; f_8003F484(c); // 800C812C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8130
  c->r[3]=c->r[1]+0x00000020u; // 800C8134
  {uint32_t ea=c->r[1]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8138
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C813C
  c->lr=0x800C8144u; f_800521A0(c); // 800C8140
  c->r[3]=c->r[1]+0x00000044u; // 800C8144
  c->r[4]=c->r[1]+0x00000050u; // 800C8148
  c->r[5]=c->r[1]+0x00000020u; // 800C814C
  c->lr=0x800C8154u; f_80064C74(c); // 800C8150
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8154
  c->r[3]=c->r[1]+0x00000038u; // 800C8158
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C815C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C8160
  c->lr=0x800C8168u; f_800521A0(c); // 800C8164
  c->r[3]=c->r[1]+0x00000038u; // 800C8168
  c->lr=0x800C8170u; f_800653A4(c); // 800C816C
  c->f[31]=c->f[1]; // 800C8170
  c->r[3]=c->r[1]+0x00000038u; // 800C8174
  c->r[4]=c->r[1]+0x00000044u; // 800C8178
  c->lr=0x800C8180u; f_800653BC(c); // 800C817C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 800C8180
  c->r[3]=c->r[1]+0x00000008u; // 800C8184
  c->r[4]=c->r[1]+0x00000038u; // 800C8188
  c->lr=0x800C8190u; f_80064C58(c); // 800C818C
  c->r[3]=c->r[1]+0x00000014u; // 800C8190
  c->r[4]=c->r[1]+0x00000044u; // 800C8194
  c->r[5]=c->r[1]+0x00000008u; // 800C8198
  c->lr=0x800C81A0u; f_80064C74(c); // 800C819C
  c->r[3]=c->r[1]+0x00000044u; // 800C81A0
  c->r[4]=c->r[1]+0x00000014u; // 800C81A4
  c->lr=0x800C81ACu; f_8003F468(c); // 800C81A8
  c->r[3]=c->r[1]+0x00000044u; // 800C81AC
  c->lr=0x800C81B4u; f_80065368(c); // 800C81B0
  cmps(c,0,(int32_t)c->r[3],0); // 800C81B4
  if (crb(c,2)) { goto L_800C81D4; } // 800C81B8
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C81BC
  c->r[3]=c->r[1]+0x00000044u; // 800C81C0
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C81C4
  c->f[2]=c->f[1]; // 800C81C8
  c->lr=0x800C81D0u; f_80065358(c); // 800C81CC
  goto L_800C81E0; // 800C81D0
L_800C81D4:;
  c->r[3]=c->r[1]+0x00000044u; // 800C81D4
  c->r[4]=c->r[3]|c->r[3]; // 800C81D8
  c->lr=0x800C81E0u; f_80265750(c); // 800C81DC
L_800C81E0:;
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C81E0
  c->r[3]=c->r[1]+0x0000002Cu; // 800C81E4
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C81E8
  {uint32_t ea=c->r[1]+0x00000084u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C81EC
  c->lr=0x800C81F4u; f_800521A0(c); // 800C81F0
  c->r[3]=c->r[1]+0x0000002Cu; // 800C81F4
  c->r[4]=c->r[1]+0x00000044u; // 800C81F8
  c->lr=0x800C8200u; f_800653BC(c); // 800C81FC
  c->r[3]=0u+0x00000001u; // 800C8200
  c->r[0]=0u+0x00000007u; // 800C8204
  W32(c->r[1]+0x0000008Cu,c->r[3]); // 800C8208
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C820C
  c->r[4]=c->r[1]+0x00000088u; // 800C8210
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 800C8214
  c->ctr=c->r[0]; // 800C8218
L_800C821C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C821C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8220
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8224
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8228
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C821C; } // 800C822C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8230
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8234
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800C8238
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800C823C
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800C8240
  c->r[30]=R32(c->r[1]+0x000000C8u); // 800C8244
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800C8248
  c->lr=c->r[0]; // 800C824C
  c->r[1]=c->r[1]+0x000000E0u; // 800C8250
  return; // 800C8254
}

// fn_800C8258
void f_800C8258(Ctx* __restrict c) {
  trace_call(0x800C8258u);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8258
  c->r[0]=c->lr; // 800C825C
  W32(c->r[1]+0x00000214u,c->r[0]); // 800C8260
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 800C8264
  c->r[31]=c->r[6]|c->r[6]; // 800C8268
  W32(c->r[1]+0x00000208u,c->r[30]); // 800C826C
  c->r[30]=c->r[3]|c->r[3]; // 800C8270
  c->r[3]=c->r[5]|c->r[5]; // 800C8274
  c->lr=0x800C827Cu; f_80068A78(c); // 800C8278
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C827C
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C8280
  c->ctr=c->r[12]; // 800C8284
  if (true) { c->lr=0x800C828Cu; dispatch(c,c->ctr); } // 800C8288
  c->r[4]=c->r[3]|c->r[3]; // 800C828C
  c->r[3]=c->r[1]+0x00000194u; // 800C8290
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C8294
  c->r[5]=c->r[31]+0x00000004u; // 800C8298
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C829C
  c->ctr=c->r[12]; // 800C82A0
  if (true) { c->lr=0x800C82A8u; dispatch(c,c->ctr); } // 800C82A4
  c->lr=0x800C82ACu; f_80128B5C(c); // 800C82A8
  c->r[31]=c->r[3]|c->r[3]; // 800C82AC
  c->r[3]=c->r[1]+0x000000BCu; // 800C82B0
  c->r[4]=c->r[31]+0x00000020u; // 800C82B4
  c->lr=0x800C82BCu; f_8003F484(c); // 800C82B8
  c->r[3]=c->r[1]+0x000000ECu; // 800C82BC
  c->r[4]=c->r[31]+0x0000002Cu; // 800C82C0
  c->lr=0x800C82C8u; f_8003F484(c); // 800C82C4
  c->r[3]=c->r[1]+0x000000ECu; // 800C82C8
  c->lr=0x800C82D0u; f_80065368(c); // 800C82CC
  cmps(c,0,(int32_t)c->r[3],0); // 800C82D0
  if (crb(c,2)) { goto L_800C82F0; } // 800C82D4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C82D8
  c->r[3]=c->r[1]+0x000000C8u; // 800C82DC
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C82E0
  c->f[2]=c->f[1]; // 800C82E4
  c->lr=0x800C82ECu; f_800521A0(c); // 800C82E8
  goto L_800C8308; // 800C82EC
L_800C82F0:;
  c->r[3]=c->r[1]+0x000000ECu; // 800C82F0
  c->r[4]=c->r[3]|c->r[3]; // 800C82F4
  c->lr=0x800C82FCu; f_80265750(c); // 800C82F8
  c->r[3]=c->r[1]+0x000000C8u; // 800C82FC
  c->r[4]=c->r[1]+0x000000ECu; // 800C8300
  c->lr=0x800C8308u; f_8003F484(c); // 800C8304
L_800C8308:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8308
  c->r[3]=c->r[1]+0x000000E0u; // 800C830C
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8310
  c->f[3]=c->f[1]; // 800C8314
  c->lr=0x800C831Cu; f_800521A0(c); // 800C8318
  c->r[3]=c->r[1]+0x000000C8u; // 800C831C
  c->r[4]=c->r[1]+0x000000E0u; // 800C8320
  c->r[5]=c->r[1]+0x000000D4u; // 800C8324
  c->lr=0x800C832Cu; f_80265810(c); // 800C8328
  c->r[3]=c->r[1]+0x000000D4u; // 800C832C
  c->lr=0x800C8334u; f_80065368(c); // 800C8330
  cmps(c,0,(int32_t)c->r[3],0); // 800C8334
  if (crb(c,2)) { goto L_800C8348; } // 800C8338
  c->r[3]=c->r[1]+0x00000164u; // 800C833C
  c->lr=0x800C8344u; f_80264680(c); // 800C8340
  goto L_800C8354; // 800C8344
L_800C8348:;
  c->r[3]=c->r[1]+0x00000164u; // 800C8348
  c->r[4]=c->r[1]+0x000000C8u; // 800C834C
  c->lr=0x800C8354u; f_8007513C(c); // 800C8350
L_800C8354:;
  c->r[3]=c->r[1]+0x00000164u; // 800C8354
  c->r[4]=c->r[1]+0x000000BCu; // 800C8358
  c->lr=0x800C8360u; f_80032FF4(c); // 800C835C
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8360
  c->r[3]=c->r[1]+0x000000F8u; // 800C8364
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8368
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C836C
  c->lr=0x800C8374u; f_800521A0(c); // 800C8370
  {uint32_t ea=c->r[1]+0x00000170u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8374
  c->r[3]=c->r[1]+0x00000020u; // 800C8378
  {uint32_t ea=c->r[1]+0x00000180u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C837C
  {uint32_t ea=c->r[1]+0x00000190u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C8380
  c->lr=0x800C8388u; f_800521A0(c); // 800C8384
  c->r[3]=c->r[1]+0x000000F8u; // 800C8388
  c->r[5]=c->r[1]+0x00000020u; // 800C838C
  c->r[4]=c->r[3]|c->r[3]; // 800C8390
  c->lr=0x800C8398u; f_80064C74(c); // 800C8394
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8398
  c->r[0]=0u+0x00000006u; // 800C839C
  c->r[5]=c->r[1]+0x00000100u; // 800C83A0
  c->r[4]=c->r[1]+0x00000160u; // 800C83A4
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 800C83A8
  c->ctr=c->r[0]; // 800C83AC
L_800C83B0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C83B0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C83B4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C83B8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C83BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C83B0; } // 800C83C0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C83C4
  c->r[3]=c->r[1]+0x0000002Cu; // 800C83C8
  c->f[2]=c->f[1]; // 800C83CC
  c->f[3]=c->f[1]; // 800C83D0
  c->lr=0x800C83D8u; f_800521A0(c); // 800C83D4
  c->r[4]=c->r[3]|c->r[3]; // 800C83D8
  c->r[3]=c->r[1]+0x00000104u; // 800C83DC
  c->lr=0x800C83E4u; f_80032FF4(c); // 800C83E0
  c->r[3]=c->r[1]+0x00000104u; // 800C83E4
  c->r[4]=c->r[3]|c->r[3]; // 800C83E8
  c->lr=0x800C83F0u; f_80264994(c); // 800C83EC
  c->r[3]=c->r[1]+0x00000008u; // 800C83F0
  c->r[4]=c->r[1]+0x000000F8u; // 800C83F4
  c->lr=0x800C83FCu; f_8003F484(c); // 800C83F8
  c->r[4]=c->r[1]+0x00000008u; // 800C83FC
  c->r[3]=c->r[1]+0x00000104u; // 800C8400
  c->r[5]=c->r[4]|c->r[4]; // 800C8404
  c->lr=0x800C840Cu; f_802652E8(c); // 800C8408
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C840C
  c->r[3]=c->r[1]+0x00000008u; // 800C8410
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8414
  c->lr=0x800C841Cu; f_80065368(c); // 800C8418
  cmps(c,0,(int32_t)c->r[3],0); // 800C841C
  if (crb(c,2)) { goto L_800C842C; } // 800C8420
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8424
  goto L_800C85B4; // 800C8428
L_800C842C:;
  c->r[3]=c->r[1]+0x00000008u; // 800C842C
  c->r[4]=c->r[3]|c->r[3]; // 800C8430
  c->lr=0x800C8438u; f_80265750(c); // 800C8434
  c->r[3]=c->r[1]+0x00000134u; // 800C8438
  c->lr=0x800C8440u; f_80264680(c); // 800C843C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8440
  c->r[3]=c->r[1]+0x000000B0u; // 800C8444
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8448
  c->f[3]=c->f[1]; // 800C844C
  c->lr=0x800C8454u; f_800521A0(c); // 800C8450
  {uint32_t ea=c->r[1]+0x00000140u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8454
  c->r[3]=c->r[1]+0x00000038u; // 800C8458
  {uint32_t ea=c->r[1]+0x00000150u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C845C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C8460
  c->lr=0x800C8468u; f_800521A0(c); // 800C8464
  c->r[3]=c->r[1]+0x00000044u; // 800C8468
  c->r[4]=c->r[1]+0x00000008u; // 800C846C
  c->lr=0x800C8474u; f_8003F484(c); // 800C8470
  c->r[3]=c->r[1]+0x00000050u; // 800C8474
  c->r[4]=c->r[1]+0x00000038u; // 800C8478
  c->r[5]=c->r[1]+0x00000008u; // 800C847C
  c->lr=0x800C8484u; f_80064C74(c); // 800C8480
  c->r[3]=c->r[1]+0x00000050u; // 800C8484
  c->lr=0x800C848Cu; f_80065368(c); // 800C8488
  cmps(c,0,(int32_t)c->r[3],0); // 800C848C
  if (crb(c,2)) { goto L_800C84D4; } // 800C8490
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8494
  c->r[3]=c->r[1]+0x00000068u; // 800C8498
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C849C
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C84A0
  c->lr=0x800C84A8u; f_800521A0(c); // 800C84A4
  c->r[3]=c->r[1]+0x00000044u; // 800C84A8
  c->r[5]=c->r[1]+0x00000068u; // 800C84AC
  c->r[4]=c->r[3]|c->r[3]; // 800C84B0
  c->lr=0x800C84B8u; f_80064C34(c); // 800C84B4
  c->r[3]=c->r[1]+0x00000074u; // 800C84B8
  c->r[4]=c->r[1]+0x00000038u; // 800C84BC
  c->r[5]=c->r[1]+0x00000044u; // 800C84C0
  c->lr=0x800C84C8u; f_80064C74(c); // 800C84C4
  c->r[3]=c->r[1]+0x00000050u; // 800C84C8
  c->r[4]=c->r[1]+0x00000074u; // 800C84CC
  c->lr=0x800C84D4u; f_8003F468(c); // 800C84D0
L_800C84D4:;
  c->r[3]=c->r[1]+0x0000005Cu; // 800C84D4
  c->r[4]=c->r[1]+0x000000B0u; // 800C84D8
  c->lr=0x800C84E0u; f_8003F484(c); // 800C84DC
  c->r[3]=c->r[1]+0x0000005Cu; // 800C84E0
  c->lr=0x800C84E8u; f_80065368(c); // 800C84E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C84E8
  if (crb(c,2)) { goto L_800C8510; } // 800C84EC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C84F0
  c->r[3]=c->r[1]+0x00000080u; // 800C84F4
  {uint32_t ea=c->r[1]+0x00000148u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C84F8
  {uint32_t ea=c->r[1]+0x00000158u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C84FC
  c->lr=0x800C8504u; f_800521A0(c); // 800C8500
  c->r[3]=c->r[1]+0x0000005Cu; // 800C8504
  c->r[4]=c->r[1]+0x00000080u; // 800C8508
  c->lr=0x800C8510u; f_8003F468(c); // 800C850C
L_800C8510:;
  c->r[3]=c->r[1]+0x00000050u; // 800C8510
  c->r[4]=c->r[1]+0x0000005Cu; // 800C8514
  c->r[5]=c->r[1]+0x0000008Cu; // 800C8518
  c->lr=0x800C8520u; f_80265810(c); // 800C851C
  c->r[3]=c->r[1]+0x0000008Cu; // 800C8520
  c->lr=0x800C8528u; f_80065368(c); // 800C8524
  cmps(c,0,(int32_t)c->r[3],0); // 800C8528
  if (crb(c,2)) { goto L_800C8590; } // 800C852C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8530
  c->r[3]=c->r[1]+0x000000A4u; // 800C8534
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C8538
  c->f[3]=c->f[1]; // 800C853C
  c->lr=0x800C8544u; f_800521A0(c); // 800C8540
  c->r[3]=c->r[1]+0x00000050u; // 800C8544
  c->r[4]=c->r[1]+0x000000A4u; // 800C8548
  c->r[5]=c->r[1]+0x00000098u; // 800C854C
  c->lr=0x800C8554u; f_80265810(c); // 800C8550
  c->r[3]=c->r[1]+0x00000098u; // 800C8554
  c->lr=0x800C855Cu; f_80065368(c); // 800C8558
  cmps(c,0,(int32_t)c->r[3],0); // 800C855C
  if (!crb(c,2)) { goto L_800C857C; } // 800C8560
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8564
  c->r[3]=c->r[1]+0x0000005Cu; // 800C8568
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C856C
  c->f[3]=c->f[1]; // 800C8570
  c->lr=0x800C8578u; f_80065358(c); // 800C8574
  goto L_800C8590; // 800C8578
L_800C857C:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C857C
  c->r[3]=c->r[1]+0x0000005Cu; // 800C8580
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8584
  c->f[3]=c->f[2]; // 800C8588
  c->lr=0x800C8590u; f_80065358(c); // 800C858C
L_800C8590:;
  c->r[3]=c->r[1]+0x00000134u; // 800C8590
  c->r[4]=c->r[1]+0x00000038u; // 800C8594
  c->r[5]=c->r[1]+0x0000005Cu; // 800C8598
  c->r[6]=c->r[1]+0x00000044u; // 800C859C
  c->lr=0x800C85A4u; f_80264F50(c); // 800C85A0
  c->r[3]=c->r[1]+0x00000014u; // 800C85A4
  c->r[4]=c->r[1]+0x00000134u; // 800C85A8
  c->lr=0x800C85B0u; f_80029EC4(c); // 800C85AC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C85B0
L_800C85B4:;
  c->r[3]=0u+0x00000001u; // 800C85B4
  c->r[0]=0u+0x00000007u; // 800C85B8
  W32(c->r[1]+0x000001C4u,c->r[3]); // 800C85BC
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C85C0
  c->r[4]=c->r[1]+0x000001C0u; // 800C85C4
  {uint32_t ea=c->r[1]+0x000001C8u; WF32(ea,c->f[0]);} // 800C85C8
  c->ctr=c->r[0]; // 800C85CC
L_800C85D0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C85D0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C85D4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C85D8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C85DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C85D0; } // 800C85E0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C85E4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C85E8
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 800C85EC
  c->r[30]=R32(c->r[1]+0x00000208u); // 800C85F0
  c->r[0]=R32(c->r[1]+0x00000214u); // 800C85F4
  c->lr=c->r[0]; // 800C85F8
  c->r[1]=c->r[1]+0x00000210u; // 800C85FC
  return; // 800C8600
}

// fn_800C8604
void f_800C8604(Ctx* __restrict c) {
  trace_call(0x800C8604u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8604
  c->r[0]=c->lr; // 800C8608
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C860C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800C8610
  c->r[31]=c->r[6]|c->r[6]; // 800C8614
  W32(c->r[1]+0x00000098u,c->r[30]); // 800C8618
  c->r[30]=c->r[3]|c->r[3]; // 800C861C
  c->r[3]=c->r[5]|c->r[5]; // 800C8620
  c->lr=0x800C8628u; f_80068A78(c); // 800C8624
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C8628
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C862C
  c->ctr=c->r[12]; // 800C8630
  if (true) { c->lr=0x800C8638u; dispatch(c,c->ctr); } // 800C8634
  c->r[4]=c->r[3]|c->r[3]; // 800C8638
  c->r[3]=c->r[1]+0x00000020u; // 800C863C
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C8640
  c->r[5]=c->r[31]+0x00000004u; // 800C8644
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C8648
  c->ctr=c->r[12]; // 800C864C
  if (true) { c->lr=0x800C8654u; dispatch(c,c->ctr); } // 800C8650
  c->lr=0x800C8658u; f_80128B5C(c); // 800C8654
  c->r[4]=c->r[3]|c->r[3]; // 800C8658
  c->r[3]=c->r[1]+0x00000014u; // 800C865C
  c->r[4]=c->r[4]+0x00000020u; // 800C8660
  c->lr=0x800C8668u; f_8003F484(c); // 800C8664
  c->r[3]=c->r[1]+0x00000020u; // 800C8668
  c->r[4]=c->r[3]|c->r[3]; // 800C866C
  c->lr=0x800C8674u; f_80264994(c); // 800C8670
  c->r[3]=c->r[1]+0x00000020u; // 800C8674
  c->r[4]=c->r[1]+0x00000014u; // 800C8678
  c->r[5]=c->r[1]+0x00000008u; // 800C867C
  c->lr=0x800C8684u; f_802652E8(c); // 800C8680
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8684
  c->r[3]=c->r[1]+0x00000008u; // 800C8688
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C868C
  c->lr=0x800C8694u; f_80065368(c); // 800C8690
  cmps(c,0,(int32_t)c->r[3],0); // 800C8694
  if (crb(c,2)) { goto L_800C86AC; } // 800C8698
  c->r[3]=c->r[1]+0x00000050u; // 800C869C
  c->r[4]=0u+0x00000000u; // 800C86A0
  c->lr=0x800C86A8u; f_800BDBB4(c); // 800C86A4
  goto L_800C86D8; // 800C86A8
L_800C86AC:;
  c->r[3]=c->r[1]+0x00000008u; // 800C86AC
  c->r[4]=c->r[3]|c->r[3]; // 800C86B0
  c->lr=0x800C86B8u; f_80265750(c); // 800C86B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C86B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C86BC
  c->lr=0x800C86C4u; f_80394548(c); // 800C86C0
  {uint32_t ea=c->r[2]+0xFFFF8F18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C86C4
  c->r[0]=0u+0x00000001u; // 800C86C8
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C86CC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800C86D0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800C86D4
L_800C86D8:;
  c->r[0]=0u+0x00000007u; // 800C86D8
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C86DC
  c->r[4]=c->r[1]+0x0000004Cu; // 800C86E0
  c->ctr=c->r[0]; // 800C86E4
L_800C86E8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C86E8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C86EC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C86F0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C86F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C86E8; } // 800C86F8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C86FC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8700
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800C8704
  c->r[30]=R32(c->r[1]+0x00000098u); // 800C8708
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C870C
  c->lr=c->r[0]; // 800C8710
  c->r[1]=c->r[1]+0x000000A0u; // 800C8714
  return; // 800C8718
}

// fn_800C871C
void f_800C871C(Ctx* __restrict c) {
  trace_call(0x800C871Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C871C
  c->r[0]=c->lr; // 800C8720
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C8724
  c->r[11]=c->r[1]+0x00000060u; // 800C8728
  c->lr=0x800C8730u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C872C
  c->r[31]=c->r[5]|c->r[5]; // 800C8730
  c->r[29]=c->r[3]|c->r[3]; // 800C8734
  c->r[30]=c->r[6]|c->r[6]; // 800C8738
  c->r[3]=c->r[31]|c->r[31]; // 800C873C
  c->lr=0x800C8744u; f_80068A78(c); // 800C8740
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C8744
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C8748
  c->ctr=c->r[12]; // 800C874C
  if (true) { c->lr=0x800C8754u; dispatch(c,c->ctr); } // 800C8750
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8754
  c->r[5]=0u+0xC8000000u; // 800C8758
  c->r[3]=c->r[1]+0x00000008u; // 800C875C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C8760
  c->r[4]=c->r[5]+0x00000001u; // 800C8764
  c->lr=0x800C876Cu; f_8003EDD0(c); // 800C8768
  cmps(c,0,(int32_t)c->r[3],0); // 800C876C
  if (crb(c,2)) { goto L_800C87A4; } // 800C8770
  c->r[3]=c->r[31]|c->r[31]; // 800C8774
  c->lr=0x800C877Cu; f_80068A78(c); // 800C8778
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C877C
  c->r[31]=c->r[3]|c->r[3]; // 800C8780
  {uint32_t ea=c->r[3]+0x00002020u; WF32(ea,c->f[0]);} // 800C8784
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C8788
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C878C
  c->ctr=c->r[12]; // 800C8790
  if (true) { c->lr=0x800C8798u; dispatch(c,c->ctr); } // 800C8794
  c->r[4]=c->r[30]+0x00000040u; // 800C8798
  c->lr=0x800C87A0u; f_8002C058(c); // 800C879C
  W32(c->r[31]+0x00002024u,c->r[3]); // 800C87A0
L_800C87A4:;
  c->r[3]=0u+0x00000000u; // 800C87A4
  c->r[0]=0u+0x00000007u; // 800C87A8
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C87AC
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C87B0
  c->r[4]=c->r[1]+0x0000000Cu; // 800C87B4
  c->ctr=c->r[0]; // 800C87B8
L_800C87BC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C87BC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C87C0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C87C4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C87C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C87BC; } // 800C87CC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C87D0
  c->r[11]=c->r[1]+0x00000060u; // 800C87D4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C87D8
  c->lr=0x800C87E0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C87DC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C87E0
  c->lr=c->r[0]; // 800C87E4
  c->r[1]=c->r[1]+0x00000060u; // 800C87E8
  return; // 800C87EC
}

// fn_800C87F0
void f_800C87F0(Ctx* __restrict c) {
  trace_call(0x800C87F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C87F0
  c->r[0]=c->lr; // 800C87F4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800C87F8
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 800C87FC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 800C8800
  c->r[11]=c->r[1]+0x000000C0u; // 800C8804
  c->lr=0x800C880Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C8808
  c->r[31]=c->r[5]|c->r[5]; // 800C880C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800C8810
  c->r[29]=c->r[3]|c->r[3]; // 800C8814
  c->r[3]=c->r[31]|c->r[31]; // 800C8818
  c->lr=0x800C8820u; f_80068A78(c); // 800C881C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C8820
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C8824
  c->ctr=c->r[12]; // 800C8828
  if (true) { c->lr=0x800C8830u; dispatch(c,c->ctr); } // 800C882C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8830
  c->r[5]=0u+0xC8000000u; // 800C8834
  c->r[3]=c->r[1]+0x00000008u; // 800C8838
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C883C
  c->r[4]=c->r[5]+0x00000001u; // 800C8840
  c->lr=0x800C8848u; f_8003EDD0(c); // 800C8844
  cmps(c,0,(int32_t)c->r[3],0); // 800C8848
  if (crb(c,2)) { goto L_800C8944; } // 800C884C
  c->r[3]=c->r[31]|c->r[31]; // 800C8850
  c->lr=0x800C8858u; f_80068A78(c); // 800C8854
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C8858
  c->r[30]=c->r[3]|c->r[3]; // 800C885C
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C8860
  c->ctr=c->r[12]; // 800C8864
  if (true) { c->lr=0x800C886Cu; dispatch(c,c->ctr); } // 800C8868
  c->r[4]=c->r[3]|c->r[3]; // 800C886C
  c->r[3]=c->r[1]+0x00000040u; // 800C8870
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C8874
  c->r[12]=R32(c->r[12]+0x00000040u); // 800C8878
  c->ctr=c->r[12]; // 800C887C
  if (true) { c->lr=0x800C8884u; dispatch(c,c->ctr); } // 800C8880
  c->r[3]=c->r[1]+0x00000028u; // 800C8884
  c->r[4]=c->r[1]+0x00000040u; // 800C8888
  c->lr=0x800C8890u; f_80032FD8(c); // 800C888C
  c->r[3]=c->r[1]+0x00000034u; // 800C8890
  c->r[4]=c->r[30]+0x00001F2Cu; // 800C8894
  c->r[5]=c->r[1]+0x00000028u; // 800C8898
  c->lr=0x800C88A0u; f_80064C74(c); // 800C889C
  c->r[3]=c->r[1]+0x00000034u; // 800C88A0
  c->lr=0x800C88A8u; f_80065368(c); // 800C88A4
  cmps(c,0,(int32_t)c->r[3],0); // 800C88A8
  if (!crb(c,2)) { goto L_800C8944; } // 800C88AC
  c->r[3]=c->r[1]+0x00000034u; // 800C88B0
  c->r[4]=c->r[3]|c->r[3]; // 800C88B4
  c->lr=0x800C88BCu; f_80265750(c); // 800C88B8
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C88BC
  cmps(c,0,(int32_t)c->r[3],0); // 800C88C0
  if (crb(c,2)) { goto L_800C8944; } // 800C88C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C88C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C88CC
  c->ctr=c->r[12]; // 800C88D0
  if (true) { c->lr=0x800C88D8u; dispatch(c,c->ctr); } // 800C88D4
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C88D8
  if (crb(c,2)) { goto L_800C8944; } // 800C88DC
  c->r[5]=R32(c->r[31]+0x00000008u); // 800C88E0
  c->r[3]=c->r[1]+0x00000010u; // 800C88E4
  c->r[4]=c->r[5]+0x00000018u; // 800C88E8
  c->r[5]=c->r[5]+0x00000158u; // 800C88EC
  c->lr=0x800C88F4u; f_80064C74(c); // 800C88F0
  c->r[3]=c->r[1]+0x0000001Cu; // 800C88F4
  c->r[4]=c->r[1]+0x00000010u; // 800C88F8
  c->lr=0x800C8900u; f_8003F468(c); // 800C88FC
  c->r[3]=c->r[1]+0x0000001Cu; // 800C8900
  c->lr=0x800C8908u; f_80065368(c); // 800C8904
  cmps(c,0,(int32_t)c->r[3],0); // 800C8908
  if (!crb(c,2)) { goto L_800C8920; } // 800C890C
  c->r[3]=c->r[1]+0x0000001Cu; // 800C8910
  c->r[4]=c->r[3]|c->r[3]; // 800C8914
  c->lr=0x800C891Cu; f_80265750(c); // 800C8918
  goto L_800C8934; // 800C891C
L_800C8920:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C8920
  c->r[3]=c->r[1]+0x0000001Cu; // 800C8924
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C8928
  c->f[2]=c->f[1]; // 800C892C
  c->lr=0x800C8934u; f_80065358(c); // 800C8930
L_800C8934:;
  c->r[3]=c->r[1]+0x0000001Cu; // 800C8934
  c->r[4]=c->r[1]+0x00000034u; // 800C8938
  c->lr=0x800C8940u; f_800653BC(c); // 800C893C
  c->f[31]=c->f[1]; // 800C8940
L_800C8944:;
  c->r[3]=0u+0x00000001u; // 800C8944
  c->r[0]=0u+0x00000007u; // 800C8948
  W32(c->r[1]+0x00000070u,c->r[3]); // 800C894C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C8950
  c->r[4]=c->r[1]+0x0000006Cu; // 800C8954
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[31]);} // 800C8958
  c->ctr=c->r[0]; // 800C895C
L_800C8960:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8960
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8964
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8968
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C896C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8960; } // 800C8970
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8974
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8978
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 800C897C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 800C8980
  c->r[11]=c->r[1]+0x000000C0u; // 800C8984
  c->lr=0x800C898Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C8988
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800C898C
  c->lr=c->r[0]; // 800C8990
  c->r[1]=c->r[1]+0x000000D0u; // 800C8994
  return; // 800C8998
}

// fn_800C899C
void f_800C899C(Ctx* __restrict c) {
  trace_call(0x800C899Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C899C
  c->r[0]=c->lr; // 800C89A0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C89A4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800C89A8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800C89AC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C89B0
  c->r[31]=c->r[3]|c->r[3]; // 800C89B4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800C89B8
  c->lr=0x800C89C0u; f_80128960(c); // 800C89BC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 800C89C0
  c->r[3]=0u+0x00000000u; // 800C89C4
  c->r[0]=0u+0x00000007u; // 800C89C8
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C89CC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C89D0
  c->r[4]=c->r[1]+0x00000004u; // 800C89D4
  c->ctr=c->r[0]; // 800C89D8
L_800C89DC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C89DC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C89E0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C89E4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C89E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C89DC; } // 800C89EC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C89F0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C89F4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800C89F8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800C89FC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C8A00
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C8A04
  c->lr=c->r[0]; // 800C8A08
  c->r[1]=c->r[1]+0x00000060u; // 800C8A0C
  return; // 800C8A10
}

// fn_800C8A14
void f_800C8A14(Ctx* __restrict c) {
  trace_call(0x800C8A14u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8A14
  c->r[0]=c->lr; // 800C8A18
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C8A1C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C8A20
  c->r[31]=c->r[3]|c->r[3]; // 800C8A24
  c->r[3]=c->r[5]|c->r[5]; // 800C8A28
  c->lr=0x800C8A30u; f_80068A78(c); // 800C8A2C
  c->r[4]=R32(c->r[3]+0x00000050u); // 800C8A30
  c->r[3]=0u+0x00000001u; // 800C8A34
  c->r[0]=0u+0x00000007u; // 800C8A38
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C8A3C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8A40
  c->r[4]=c->r[1]+0x00000004u; // 800C8A44
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8A48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8A4C
  c->ctr=c->r[0]; // 800C8A50
L_800C8A54:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8A54
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8A58
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8A5C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8A60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8A54; } // 800C8A64
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8A68
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8A6C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C8A70
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C8A74
  c->lr=c->r[0]; // 800C8A78
  c->r[1]=c->r[1]+0x00000050u; // 800C8A7C
  return; // 800C8A80
}

// fn_800C8A84
void f_800C8A84(Ctx* __restrict c) {
  trace_call(0x800C8A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8A84
  c->r[0]=c->lr; // 800C8A88
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C8A8C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C8A90
  c->r[31]=c->r[3]|c->r[3]; // 800C8A94
  c->r[3]=c->r[5]|c->r[5]; // 800C8A98
  c->lr=0x800C8AA0u; f_80068A78(c); // 800C8A9C
  c->r[4]=R32(c->r[3]+0x00000050u); // 800C8AA0
  c->r[3]=0u+0x00000001u; // 800C8AA4
  c->r[0]=0u+0x00000007u; // 800C8AA8
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C8AAC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8AB0
  c->r[4]=c->r[1]+0x00000004u; // 800C8AB4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8AB8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8ABC
  c->ctr=c->r[0]; // 800C8AC0
L_800C8AC4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8AC4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8AC8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8ACC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8AD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8AC4; } // 800C8AD4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8AD8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8ADC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C8AE0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C8AE4
  c->lr=c->r[0]; // 800C8AE8
  c->r[1]=c->r[1]+0x00000050u; // 800C8AEC
  return; // 800C8AF0
}

// fn_800C8AF4
void f_800C8AF4(Ctx* __restrict c) {
  trace_call(0x800C8AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8AF4
  c->r[0]=c->lr; // 800C8AF8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C8AFC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C8B00
  c->r[31]=c->r[3]|c->r[3]; // 800C8B04
  c->r[3]=c->r[5]|c->r[5]; // 800C8B08
  c->lr=0x800C8B10u; f_80068A78(c); // 800C8B0C
  c->r[3]=R32(c->r[3]+0x00000050u); // 800C8B10
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C8B14
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C8B18
  c->ctr=c->r[12]; // 800C8B1C
  if (true) { c->lr=0x800C8B24u; dispatch(c,c->ctr); } // 800C8B20
  c->r[0]=c->r[3]^0x80000000u; // 800C8B24
  c->r[3]=0u+0x43300000u; // 800C8B28
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C8B2C
  c->r[6]=0u+0x00000001u; // 800C8B30
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C8B34
  c->r[0]=0u+0x00000007u; // 800C8B38
  W32(c->r[1]+0x00000048u,c->r[3]); // 800C8B3C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C8B40
  c->r[4]=c->r[1]+0x00000004u; // 800C8B44
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C8B48
  W32(c->r[1]+0x00000008u,c->r[6]); // 800C8B4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C8B50
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8B54
  c->ctr=c->r[0]; // 800C8B58
L_800C8B5C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8B5C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8B60
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8B64
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8B68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8B5C; } // 800C8B6C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8B70
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8B74
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C8B78
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C8B7C
  c->lr=c->r[0]; // 800C8B80
  c->r[1]=c->r[1]+0x00000060u; // 800C8B84
  return; // 800C8B88
}

// fn_800C8B8C
void f_800C8B8C(Ctx* __restrict c) {
  trace_call(0x800C8B8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8B8C
  c->r[0]=c->lr; // 800C8B90
  c->r[4]=0u+0xFFFFFFFFu; // 800C8B94
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C8B98
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C8B9C
  c->r[31]=c->r[5]|c->r[5]; // 800C8BA0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C8BA4
  c->r[30]=c->r[3]|c->r[3]; // 800C8BA8
  c->r[3]=c->r[1]+0x00000008u; // 800C8BAC
  c->lr=0x800C8BB4u; f_800BDBB4(c); // 800C8BB0
  c->r[3]=c->r[31]|c->r[31]; // 800C8BB4
  c->lr=0x800C8BBCu; f_80068A78(c); // 800C8BB8
  c->r[0]=R32(c->r[3]+0x00000054u); // 800C8BBC
  cmps(c,0,(int32_t)c->r[0],0); // 800C8BC0
  if (crb(c,2)) { goto L_800C8C0C; } // 800C8BC4
  c->r[3]=c->r[31]|c->r[31]; // 800C8BC8
  c->lr=0x800C8BD0u; f_80068A78(c); // 800C8BCC
  c->r[3]=R32(c->r[3]+0x00000054u); // 800C8BD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C8BD4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800C8BD8
  c->ctr=c->r[12]; // 800C8BDC
  if (true) { c->lr=0x800C8BE4u; dispatch(c,c->ctr); } // 800C8BE0
  c->r[3]=c->r[3]^0x80000000u; // 800C8BE4
  c->r[0]=0u+0x43300000u; // 800C8BE8
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800C8BEC
  c->r[3]=0u+0x00000001u; // 800C8BF0
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C8BF4
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C8BF8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C8BFC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8C00
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C8C04
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8C08
L_800C8C0C:;
  c->r[0]=0u+0x00000007u; // 800C8C0C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C8C10
  c->r[4]=c->r[1]+0x00000004u; // 800C8C14
  c->ctr=c->r[0]; // 800C8C18
L_800C8C1C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8C1C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8C20
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8C24
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8C28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8C1C; } // 800C8C2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8C30
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8C34
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C8C38
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C8C3C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C8C40
  c->lr=c->r[0]; // 800C8C44
  c->r[1]=c->r[1]+0x00000060u; // 800C8C48
  return; // 800C8C4C
}

// fn_800C8C50
void f_800C8C50(Ctx* __restrict c) {
  trace_call(0x800C8C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8C50
  c->r[0]=c->lr; // 800C8C54
  c->r[4]=0u+0xFFFFFFFFu; // 800C8C58
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C8C5C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C8C60
  c->r[31]=c->r[5]|c->r[5]; // 800C8C64
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C8C68
  c->r[30]=c->r[3]|c->r[3]; // 800C8C6C
  c->r[3]=c->r[1]+0x00000008u; // 800C8C70
  c->lr=0x800C8C78u; f_800BDBB4(c); // 800C8C74
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C8C78
  cmps(c,0,(int32_t)c->r[3],0); // 800C8C7C
  if (crb(c,2)) { goto L_800C8CCC; } // 800C8C80
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C8C84
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C8C88
  c->ctr=c->r[12]; // 800C8C8C
  if (true) { c->lr=0x800C8C94u; dispatch(c,c->ctr); } // 800C8C90
  cmps(c,0,(int32_t)c->r[3],15); // 800C8C94
  if (!crb(c,2)) { goto L_800C8CCC; } // 800C8C98
  c->r[4]=R32(c->r[31]+0x00000008u); // 800C8C9C
  c->r[0]=0u+0x43300000u; // 800C8CA0
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C8CA4
  c->r[3]=0u+0x00000001u; // 800C8CA8
  c->r[0]=R32(c->r[4]+0x00000010u); // 800C8CAC
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C8CB0
  c->r[0]=c->r[0]^0x80000000u; // 800C8CB4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8CB8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C8CBC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C8CC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C8CC4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8CC8
L_800C8CCC:;
  c->r[0]=0u+0x00000007u; // 800C8CCC
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C8CD0
  c->r[4]=c->r[1]+0x00000004u; // 800C8CD4
  c->ctr=c->r[0]; // 800C8CD8
L_800C8CDC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8CDC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8CE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8CE4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8CE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8CDC; } // 800C8CEC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8CF0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8CF4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C8CF8
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C8CFC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C8D00
  c->lr=c->r[0]; // 800C8D04
  c->r[1]=c->r[1]+0x00000060u; // 800C8D08
  return; // 800C8D0C
}

// fn_800C8D10
void f_800C8D10(Ctx* __restrict c) {
  trace_call(0x800C8D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8D10
  c->r[0]=c->lr; // 800C8D14
  c->r[4]=0u+0xFFFFFFFFu; // 800C8D18
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C8D1C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C8D20
  c->r[31]=c->r[5]|c->r[5]; // 800C8D24
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C8D28
  c->r[30]=c->r[3]|c->r[3]; // 800C8D2C
  c->r[3]=c->r[1]+0x00000008u; // 800C8D30
  c->lr=0x800C8D38u; f_800BDBB4(c); // 800C8D34
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C8D38
  cmps(c,0,(int32_t)c->r[3],0); // 800C8D3C
  if (crb(c,2)) { goto L_800C8D8C; } // 800C8D40
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C8D44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C8D48
  c->ctr=c->r[12]; // 800C8D4C
  if (true) { c->lr=0x800C8D54u; dispatch(c,c->ctr); } // 800C8D50
  cmps(c,0,(int32_t)c->r[3],25); // 800C8D54
  if (!crb(c,2)) { goto L_800C8D8C; } // 800C8D58
  c->r[4]=R32(c->r[31]+0x00000008u); // 800C8D5C
  c->r[0]=0u+0x43300000u; // 800C8D60
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C8D64
  c->r[3]=0u+0x00000001u; // 800C8D68
  c->r[0]=R32(c->r[4]+0x00000010u); // 800C8D6C
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C8D70
  c->r[0]=c->r[0]^0x80000000u; // 800C8D74
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8D78
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C8D7C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C8D80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C8D84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8D88
L_800C8D8C:;
  c->r[0]=0u+0x00000007u; // 800C8D8C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C8D90
  c->r[4]=c->r[1]+0x00000004u; // 800C8D94
  c->ctr=c->r[0]; // 800C8D98
L_800C8D9C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8D9C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8DA0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8DA4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8DA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8D9C; } // 800C8DAC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8DB0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8DB4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C8DB8
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C8DBC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C8DC0
  c->lr=c->r[0]; // 800C8DC4
  c->r[1]=c->r[1]+0x00000060u; // 800C8DC8
  return; // 800C8DCC
}

// fn_800C8DD0
void f_800C8DD0(Ctx* __restrict c) {
  trace_call(0x800C8DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8DD0
  c->r[0]=c->lr; // 800C8DD4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C8DD8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C8DDC
  c->r[31]=c->r[3]|c->r[3]; // 800C8DE0
  c->r[3]=c->r[5]|c->r[5]; // 800C8DE4
  c->lr=0x800C8DECu; f_80068A78(c); // 800C8DE8
  {uint32_t ea=c->r[3]+0x000007FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8DEC
  c->r[3]=0u+0x00000001u; // 800C8DF0
  c->r[0]=0u+0x00000007u; // 800C8DF4
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C8DF8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8DFC
  c->r[4]=c->r[1]+0x00000004u; // 800C8E00
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8E04
  c->ctr=c->r[0]; // 800C8E08
L_800C8E0C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8E0C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8E10
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8E14
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8E18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8E0C; } // 800C8E1C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8E20
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8E24
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C8E28
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C8E2C
  c->lr=c->r[0]; // 800C8E30
  c->r[1]=c->r[1]+0x00000050u; // 800C8E34
  return; // 800C8E38
}

// fn_800C8E3C
void f_800C8E3C(Ctx* __restrict c) {
  trace_call(0x800C8E3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8E3C
  c->r[0]=c->lr; // 800C8E40
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C8E44
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C8E48
  c->r[31]=c->r[3]|c->r[3]; // 800C8E4C
  c->r[3]=c->r[5]|c->r[5]; // 800C8E50
  c->lr=0x800C8E58u; f_80068A78(c); // 800C8E54
  {uint32_t ea=c->r[3]+0x00000880u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8E58
  c->r[3]=0u+0x00000001u; // 800C8E5C
  c->r[0]=0u+0x00000007u; // 800C8E60
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C8E64
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8E68
  c->r[4]=c->r[1]+0x00000004u; // 800C8E6C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8E70
  c->ctr=c->r[0]; // 800C8E74
L_800C8E78:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8E78
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8E7C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8E80
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8E84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8E78; } // 800C8E88
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8E8C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8E90
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C8E94
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C8E98
  c->lr=c->r[0]; // 800C8E9C
  c->r[1]=c->r[1]+0x00000050u; // 800C8EA0
  return; // 800C8EA4
}

// fn_800C8EA8
void f_800C8EA8(Ctx* __restrict c) {
  trace_call(0x800C8EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8EA8
  c->r[0]=c->lr; // 800C8EAC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C8EB0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C8EB4
  c->r[31]=c->r[3]|c->r[3]; // 800C8EB8
  c->r[3]=c->r[5]|c->r[5]; // 800C8EBC
  c->lr=0x800C8EC4u; f_80068A78(c); // 800C8EC0
  {uint32_t ea=c->r[3]+0x00000884u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C8EC4
  c->r[3]=0u+0x00000001u; // 800C8EC8
  c->r[0]=0u+0x00000007u; // 800C8ECC
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C8ED0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C8ED4
  c->r[4]=c->r[1]+0x00000004u; // 800C8ED8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C8EDC
  c->ctr=c->r[0]; // 800C8EE0
L_800C8EE4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C8EE4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C8EE8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C8EEC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C8EF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8EE4; } // 800C8EF4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C8EF8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C8EFC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C8F00
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C8F04
  c->lr=c->r[0]; // 800C8F08
  c->r[1]=c->r[1]+0x00000050u; // 800C8F0C
  return; // 800C8F10
}

// fn_800C8F14
void f_800C8F14(Ctx* __restrict c) {
  trace_call(0x800C8F14u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8F14
  c->r[0]=c->lr; // 800C8F18
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C8F1C
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C8F20
  c->r[28]=c->r[5]|c->r[5]; // 800C8F24
  c->r[27]=c->r[3]|c->r[3]; // 800C8F28
  c->r[30]=c->r[6]|c->r[6]; // 800C8F2C
  c->r[3]=c->r[28]|c->r[28]; // 800C8F30
  c->lr=0x800C8F38u; f_80068A78(c); // 800C8F34
  c->r[29]=c->r[3]|c->r[3]; // 800C8F38
  c->r[3]=c->r[1]+0x00000014u; // 800C8F3C
  c->r[4]=0u+0x00000000u; // 800C8F40
  c->lr=0x800C8F48u; f_800BDBB4(c); // 800C8F44
  c->r[3]=R32(c->r[28]+0x00000008u); // 800C8F48
  cmps(c,0,(int32_t)c->r[3],0); // 800C8F4C
  if (crb(c,2)) { goto L_800C907C; } // 800C8F50
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C8F54
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C8F58
  c->ctr=c->r[12]; // 800C8F5C
  if (true) { c->lr=0x800C8F64u; dispatch(c,c->ctr); } // 800C8F60
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C8F64
  if (crb(c,2)) { goto L_800C907C; } // 800C8F68
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C8F6C
  c->r[3]=c->r[29]|c->r[29]; // 800C8F70
  c->r[28]=R32(c->r[28]+0x00000008u); // 800C8F74
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C8F78
  c->ctr=c->r[12]; // 800C8F7C
  if (true) { c->lr=0x800C8F84u; dispatch(c,c->ctr); } // 800C8F80
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C8F84
  c->r[4]=0u+0x803E0000u; // 800C8F88
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C8F8C
  c->r[3]=c->r[1]+0x00000010u; // 800C8F90
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800C8F94
  c->r[4]=c->r[4]+0x00000011u; // 800C8F98
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C8F9C
  c->lr=0x800C8FA4u; f_80365B94(c); // 800C8FA0
  c->r[4]=R32(c->r[28]+0x00000014u); // 800C8FA4
  c->r[28]=c->r[3]|c->r[3]; // 800C8FA8
  cmps(c,0,(int32_t)c->r[4],0); // 800C8FAC
  if (!crb(c,1)) { goto L_800C8FC0; } // 800C8FB0
  c->r[3]=c->r[1]+0x00000010u; // 800C8FB4
  c->lr=0x800C8FBCu; f_80365C7C(c); // 800C8FB8
  c->r[28]=c->r[3]|c->r[3]; // 800C8FBC
L_800C8FC0:;
  c->r[3]=c->r[1]+0x00000010u; // 800C8FC0
  c->r[4]=c->r[30]+0x00000004u; // 800C8FC4
  c->lr=0x800C8FCCu; f_80365B94(c); // 800C8FC8
  c->r[29]=c->r[3]|c->r[3]; // 800C8FCC
  c->r[30]=0u+0x803F0000u; // 800C8FD0
  c->r[31]=0u+0x803F0000u; // 800C8FD4
  goto L_800C9074; // 800C8FD8
L_800C8FDC:;
  cmpu(c,0,c->r[28],c->r[29]); // 800C8FDC
  if (!crb(c,2)) { goto L_800C9020; } // 800C8FE0
  c->r[3]=c->r[1]+0x00000014u; // 800C8FE4
  c->r[4]=0u+0x00000001u; // 800C8FE8
  c->lr=0x800C8FF0u; f_800BDBB4(c); // 800C8FEC
  c->r[0]=0u+0x00000007u; // 800C8FF0
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800C8FF4
  c->r[4]=c->r[1]+0x00000010u; // 800C8FF8
  c->ctr=c->r[0]; // 800C8FFC
L_800C9000:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9000
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9004
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9008
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C900C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9000; } // 800C9010
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9014
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9018
  goto L_800C90A8; // 800C901C
L_800C9020:;
  cmps(c,0,(int32_t)c->r[28],0); // 800C9020
  if (!crb(c,2)) { goto L_800C9044; } // 800C9024
  c->r[3]=c->r[30]+0x00001880u; // 800C9028
  c->r[5]=c->r[31]+0x00001864u; // 800C902C
  c->r[4]=0u+0x00000029u; // 800C9030
  c->r[6]=c->r[13]+0xFFFF8048u; // 800C9034
  c->r[7]=c->r[13]+0xFFFF8174u; // 800C9038
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C903C
  c->lr=0x800C9044u; f_803444BC(c); // 800C9040
L_800C9044:;
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 800C9044
  cmps(c,0,(int32_t)c->r[0],0); // 800C9048
  if (crb(c,2)) { goto L_800C9064; } // 800C904C
  c->r[3]=c->r[1]+0x0000000Cu; // 800C9050
  c->r[4]=c->r[28]+c->r[0]; // 800C9054
  c->lr=0x800C905Cu; f_80077340(c); // 800C9058
  c->r[28]=R32(c->r[3]+0x00000000u); // 800C905C
  goto L_800C9074; // 800C9060
L_800C9064:;
  c->r[3]=c->r[1]+0x00000008u; // 800C9064
  c->r[4]=0u+0x00000000u; // 800C9068
  c->lr=0x800C9070u; f_80077340(c); // 800C906C
  c->r[28]=R32(c->r[3]+0x00000000u); // 800C9070
L_800C9074:;
  cmps(c,0,(int32_t)c->r[28],0); // 800C9074
  if (!crb(c,2)) { IRQCHK(c); goto L_800C8FDC; } // 800C9078
L_800C907C:;
  c->r[0]=0u+0x00000007u; // 800C907C
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800C9080
  c->r[4]=c->r[1]+0x00000010u; // 800C9084
  c->ctr=c->r[0]; // 800C9088
L_800C908C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C908C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9090
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9094
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C908C; } // 800C909C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C90A0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C90A4
L_800C90A8:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C90A8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C90AC
  c->lr=c->r[0]; // 800C90B0
  c->r[1]=c->r[1]+0x00000070u; // 800C90B4
  return; // 800C90B8
}

// fn_800C90BC
void f_800C90BC(Ctx* __restrict c) {
  trace_call(0x800C90BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C90BC
  c->r[0]=c->lr; // 800C90C0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800C90C4
  c->r[11]=c->r[1]+0x000000A0u; // 800C90C8
  c->lr=0x800C90D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C90CC
  c->r[30]=c->r[5]|c->r[5]; // 800C90D0
  c->r[27]=c->r[3]|c->r[3]; // 800C90D4
  c->r[28]=c->r[6]|c->r[6]; // 800C90D8
  c->r[3]=c->r[30]|c->r[30]; // 800C90DC
  c->lr=0x800C90E4u; f_80068A78(c); // 800C90E0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C90E4
  c->r[31]=0u+0x00000001u; // 800C90E8
  W32(c->r[1]+0x00000048u,c->r[31]); // 800C90EC
  c->r[29]=c->r[3]|c->r[3]; // 800C90F0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C90F4
  c->r[3]=R32(c->r[30]+0x00000008u); // 800C90F8
  cmps(c,0,(int32_t)c->r[3],0); // 800C90FC
  if (crb(c,2)) { goto L_800C91FC; } // 800C9100
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C9104
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C9108
  c->ctr=c->r[12]; // 800C910C
  if (true) { c->lr=0x800C9114u; dispatch(c,c->ctr); } // 800C9110
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800C9114
  if (crb(c,2)) { goto L_800C91FC; } // 800C9118
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C911C
  c->r[3]=c->r[29]|c->r[29]; // 800C9120
  c->r[30]=R32(c->r[30]+0x00000008u); // 800C9124
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C9128
  c->ctr=c->r[12]; // 800C912C
  if (true) { c->lr=0x800C9134u; dispatch(c,c->ctr); } // 800C9130
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C9134
  c->r[3]=c->r[1]+0x00000008u; // 800C9138
  c->r[4]=c->r[28]+0x00000004u; // 800C913C
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800C9140
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C9144
  c->lr=0x800C914Cu; f_80365B94(c); // 800C9148
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C914C
  c->r[3]=c->r[29]|c->r[29]; // 800C9150
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C9154
  c->ctr=c->r[12]; // 800C9158
  if (true) { c->lr=0x800C9160u; dispatch(c,c->ctr); } // 800C915C
  c->r[4]=c->r[3]|c->r[3]; // 800C9160
  c->r[3]=c->r[1]+0x00000018u; // 800C9164
  c->r[12]=R32(c->r[4]+0x00000000u); // 800C9168
  c->r[5]=c->r[28]+0x00000004u; // 800C916C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C9170
  c->ctr=c->r[12]; // 800C9174
  if (true) { c->lr=0x800C917Cu; dispatch(c,c->ctr); } // 800C9178
  c->r[3]=c->r[1]+0x0000000Cu; // 800C917C
  c->r[4]=c->r[30]+0x00000018u; // 800C9180
  c->lr=0x800C9188u; f_8003F484(c); // 800C9184
  c->r[3]=c->r[1]+0x00000018u; // 800C9188
  c->r[4]=c->r[3]|c->r[3]; // 800C918C
  c->lr=0x800C9194u; f_80264994(c); // 800C9190
  c->r[4]=c->r[1]+0x0000000Cu; // 800C9194
  c->r[3]=c->r[1]+0x00000018u; // 800C9198
  c->r[5]=c->r[4]|c->r[4]; // 800C919C
  c->lr=0x800C91A4u; f_802652E8(c); // 800C91A0
  c->r[0]=R8(c->r[28]+0x00000040u); // 800C91A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C91A8
  cmps(c,0,(int32_t)c->r[0],121); // 800C91AC
  if (crb(c,2)) { goto L_800C91E0; } // 800C91B0
  if (!crb(c,0)) { goto L_800C91C4; } // 800C91B4
  cmps(c,0,(int32_t)c->r[0],120); // 800C91B8
  if (!crb(c,0)) { goto L_800C91D0; } // 800C91BC
  goto L_800C91FC; // 800C91C0
L_800C91C4:;
  cmps(c,0,(int32_t)c->r[0],123); // 800C91C4
  if (!crb(c,0)) { goto L_800C91FC; } // 800C91C8
  goto L_800C91F0; // 800C91CC
L_800C91D0:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C91D0
  W32(c->r[1]+0x00000048u,c->r[31]); // 800C91D4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C91D8
  goto L_800C91FC; // 800C91DC
L_800C91E0:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C91E0
  W32(c->r[1]+0x00000048u,c->r[31]); // 800C91E4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C91E8
  goto L_800C91FC; // 800C91EC
L_800C91F0:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C91F0
  W32(c->r[1]+0x00000048u,c->r[31]); // 800C91F4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C91F8
L_800C91FC:;
  c->r[0]=0u+0x00000007u; // 800C91FC
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800C9200
  c->r[4]=c->r[1]+0x00000044u; // 800C9204
  c->ctr=c->r[0]; // 800C9208
L_800C920C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C920C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9210
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9214
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9218
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C920C; } // 800C921C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9220
  c->r[11]=c->r[1]+0x000000A0u; // 800C9224
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9228
  c->lr=0x800C9230u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C922C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800C9230
  c->lr=c->r[0]; // 800C9234
  c->r[1]=c->r[1]+0x000000A0u; // 800C9238
  return; // 800C923C
}

// fn_800C9240
void f_800C9240(Ctx* __restrict c) {
  trace_call(0x800C9240u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9240
  c->r[0]=c->lr; // 800C9244
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C9248
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C924C
  c->r[31]=c->r[3]|c->r[3]; // 800C9250
  c->r[3]=c->r[5]|c->r[5]; // 800C9254
  c->r[28]=c->r[6]|c->r[6]; // 800C9258
  c->lr=0x800C9260u; f_80068A78(c); // 800C925C
  c->r[5]=R8(c->r[28]+0x00000006u); // 800C9260
  c->r[29]=c->r[3]|c->r[3]; // 800C9264
  c->r[0]=R8(c->r[28]+0x00000005u); // 800C9268
  c->r[30]=0u+0x00000000u; // 800C926C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800C9270
  c->r[4]=R8(c->r[28]+0x00000004u); // 800C9274
  c->r[6]=rotl(c->r[5],8)&0xFFFFFF00u; // 800C9278
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C927C
  c->r[5]=rotl(c->r[4],24)&0xFF000000u; // 800C9280
  c->r[4]=rotl(c->r[0],16)&0xFFFF0000u; // 800C9284
  c->r[0]=c->r[6]+c->r[5]; // 800C9288
  c->r[4]=c->r[4]+c->r[0]; // 800C928C
  c->r[0]=c->r[4]+0x9E940000u; // 800C9290
  cmpu(c,0,c->r[0],0x00006C00u); // 800C9294
  if (!crb(c,2)) { goto L_800C92CC; } // 800C9298
  c->r[3]=c->r[28]+0x0000003Cu; // 800C929C
  c->lr=0x800C92A4u; f_800797C0(c); // 800C92A0
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C92A4
  c->r[30]=c->r[3]|c->r[3]; // 800C92A8
  c->r[3]=c->r[29]|c->r[29]; // 800C92AC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C92B0
  c->ctr=c->r[12]; // 800C92B4
  if (true) { c->lr=0x800C92BCu; dispatch(c,c->ctr); } // 800C92B8
  c->r[4]=c->r[30]|c->r[30]; // 800C92BC
  c->lr=0x800C92C4u; f_8002B91C(c); // 800C92C0
  c->r[30]=0u+0x00000001u; // 800C92C4
  goto L_800C931C; // 800C92C8
L_800C92CC:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C92CC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C92D0
  c->ctr=c->r[12]; // 800C92D4
  if (true) { c->lr=0x800C92DCu; dispatch(c,c->ctr); } // 800C92D8
  c->r[4]=c->r[28]+0x00000004u; // 800C92DC
  c->lr=0x800C92E4u; f_8002C058(c); // 800C92E0
  cmps(c,0,(int32_t)c->r[3],0); // 800C92E4
  if (crb(c,0)) { goto L_800C931C; } // 800C92E8
  c->r[3]=c->r[28]+0x0000003Cu; // 800C92EC
  c->lr=0x800C92F4u; f_800797C0(c); // 800C92F0
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C92F4
  c->r[30]=c->r[3]|c->r[3]; // 800C92F8
  c->r[3]=c->r[29]|c->r[29]; // 800C92FC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C9300
  c->ctr=c->r[12]; // 800C9304
  if (true) { c->lr=0x800C930Cu; dispatch(c,c->ctr); } // 800C9308
  c->r[5]=c->r[30]|c->r[30]; // 800C930C
  c->r[4]=c->r[28]+0x00000004u; // 800C9310
  c->lr=0x800C9318u; f_8002B880(c); // 800C9314
  c->r[30]=0u+0x00000001u; // 800C9318
L_800C931C:;
  c->r[4]=c->r[30]|c->r[30]; // 800C931C
  c->r[3]=c->r[1]+0x00000008u; // 800C9320
  c->lr=0x800C9328u; f_800BDBB4(c); // 800C9324
  c->r[0]=0u+0x00000007u; // 800C9328
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C932C
  c->r[4]=c->r[1]+0x00000004u; // 800C9330
  c->ctr=c->r[0]; // 800C9334
L_800C9338:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9338
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C933C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9340
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9344
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9338; } // 800C9348
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C934C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9350
  {uint32_t ea=c->r[1]+0x00000050u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9354
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C9358
  c->lr=c->r[0]; // 800C935C
  c->r[1]=c->r[1]+0x00000060u; // 800C9360
  return; // 800C9364
}

// fn_800C9368
void f_800C9368(Ctx* __restrict c) {
  trace_call(0x800C9368u);
  {uint32_t ea=c->r[1]+0xFFFFF120u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9368
  c->r[0]=c->lr; // 800C936C
  W32(c->r[1]+0x00000EE4u,c->r[0]); // 800C9370
  c->r[11]=c->r[1]+0x00000EE0u; // 800C9374
  c->lr=0x800C937Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C9378
  c->r[30]=c->r[5]|c->r[5]; // 800C937C
  c->r[31]=c->r[3]|c->r[3]; // 800C9380
  c->r[28]=c->r[6]|c->r[6]; // 800C9384
  c->r[3]=c->r[30]|c->r[30]; // 800C9388
  c->lr=0x800C9390u; f_80068A78(c); // 800C938C
  c->r[4]=R32(c->r[3]+0x00000C48u); // 800C9390
  c->r[29]=c->r[3]|c->r[3]; // 800C9394
  cmps(c,0,(int32_t)c->r[4],0); // 800C9398
  if (crb(c,0)) { goto L_800C93AC; } // 800C939C
  c->r[3]=c->r[3]+0x000008A4u; // 800C93A0
  c->lr=0x800C93A8u; f_80064778(c); // 800C93A4
  goto L_800C93B8; // 800C93A8
L_800C93AC:;
  c->r[4]=0u+0x00000000u; // 800C93AC
  c->r[5]=0u+0x00000000u; // 800C93B0
  c->lr=0x800C93B8u; f_80076080(c); // 800C93B4
L_800C93B8:;
  c->r[3]=R32(c->r[29]+0x00000B30u); // 800C93B8
  cmps(c,1,(int32_t)c->r[3],0); // 800C93BC
  if (crb(c,6)) { goto L_800C95B4; } // 800C93C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C93C4
  cmps(c,0,(int32_t)c->r[0],0); // 800C93C8
  if (!crb(c,2)) { goto L_800C95B4; } // 800C93CC
  if (crb(c,6)) { goto L_800C961C; } // 800C93D0
  c->r[12]=R32(c->r[29]+0x00000B28u); // 800C93D4
  c->r[4]=0u+0x80440000u; // 800C93D8
  c->r[4]=c->r[4]+0xFFFFA720u; // 800C93DC
  c->r[3]=c->r[29]+0x00000B28u; // 800C93E0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800C93E4
  c->r[4]=R32(c->r[4]+0x00000004u); // 800C93E8
  c->ctr=c->r[12]; // 800C93EC
  if (true) { c->lr=0x800C93F4u; dispatch(c,c->ctr); } // 800C93F0
  c->r[5]=R32(c->r[29]+0x000009C8u); // 800C93F4
  c->r[3]=c->r[1]+0x0000000Cu; // 800C93F8
  c->r[4]=c->r[28]+0x00000004u; // 800C93FC
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800C9400
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800C9404
  c->lr=0x800C940Cu; f_80365B94(c); // 800C9408
  cmps(c,0,(int32_t)c->r[3],0); // 800C940C
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C9410
  if (crb(c,2)) { goto L_800C955C; } // 800C9414
  c->r[3]=c->r[1]+0x00000014u; // 800C9418
  c->lr=0x800C9420u; f_800772D8(c); // 800C941C
  c->r[12]=R32(c->r[29]+0x000009C0u); // 800C9420
  c->r[5]=c->r[3]|c->r[3]; // 800C9424
  c->r[4]=c->r[29]+0x000009C0u; // 800C9428
  c->r[3]=c->r[1]+0x000000A8u; // 800C942C
  c->r[12]=R32(c->r[12]+0x00000034u); // 800C9430
  c->ctr=c->r[12]; // 800C9434
  if (true) { c->lr=0x800C943Cu; dispatch(c,c->ctr); } // 800C9438
  c->r[3]=c->r[28]+0x0000003Cu; // 800C943C
  c->lr=0x800C9444u; f_800797C0(c); // 800C9440
  cmps(c,0,(int32_t)c->r[3],0); // 800C9444
  if (crb(c,2)) { goto L_800C9528; } // 800C9448
  c->r[3]=c->r[1]+0x000000D8u; // 800C944C
  c->lr=0x800C9454u; f_800462E8(c); // 800C9450
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C9454
  c->r[3]=c->r[1]+0x00000030u; // 800C9458
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C945C
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C9460
  c->lr=0x800C9468u; f_800521A0(c); // 800C9464
  c->r[3]=c->r[1]+0x000000A8u; // 800C9468
  c->lr=0x800C9470u; f_80264680(c); // 800C946C
  c->r[3]=R32(c->r[30]+0x00000008u); // 800C9470
  c->r[28]=0u+0x00000001u; // 800C9474
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C9478
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C947C
  c->ctr=c->r[12]; // 800C9480
  if (true) { c->lr=0x800C9488u; dispatch(c,c->ctr); } // 800C9484
  cmps(c,0,(int32_t)c->r[3],5); // 800C9488
  if (!crb(c,2)) { goto L_800C94B0; } // 800C948C
  c->r[3]=R32(c->r[30]+0x00000008u); // 800C9490
  c->r[0]=R32(c->r[3]+0x00000010u); // 800C9494
  cmps(c,0,(int32_t)c->r[0],-1); // 800C9498
  if (!crb(c,2)) { goto L_800C94B0; } // 800C949C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800C94A0
  cmps(c,0,(int32_t)c->r[0],-1); // 800C94A4
  if (!crb(c,2)) { goto L_800C94B0; } // 800C94A8
  c->r[28]=0u+0x00000000u; // 800C94AC
L_800C94B0:;
  cmpu(c,0,c->r[28],0x00000001u); // 800C94B0
  if (!crb(c,2)) { goto L_800C9510; } // 800C94B4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C94B8
  c->r[3]=c->r[1]+0x00000018u; // 800C94BC
  {uint32_t ea=c->r[2]+0xFFFF8F1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800C94C0
  c->f[3]=c->f[1]; // 800C94C4
  c->lr=0x800C94CCu; f_800521A0(c); // 800C94C8
  c->r[3]=c->r[1]+0x00000024u; // 800C94CC
  c->r[4]=c->r[1]+0x00000030u; // 800C94D0
  c->r[5]=c->r[1]+0x00000018u; // 800C94D4
  c->lr=0x800C94DCu; f_80064C34(c); // 800C94D8
  c->r[3]=0u+0x80450000u; // 800C94DC
  c->r[4]=c->r[1]+0x000000D8u; // 800C94E0
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800C94E4
  c->r[5]=c->r[1]+0x00000030u; // 800C94E8
  c->r[6]=c->r[1]+0x00000024u; // 800C94EC
  c->r[7]=0u+0x00000000u; // 800C94F0
  c->lr=0x800C94F8u; f_80044D14(c); // 800C94F4
  cmps(c,0,(int32_t)c->r[3],0); // 800C94F8
  if (crb(c,2)) { goto L_800C9510; } // 800C94FC
  c->r[3]=c->r[1]+0x000000A8u; // 800C9500
  c->r[4]=c->r[1]+0x000000E0u; // 800C9504
  c->lr=0x800C950Cu; f_80032FF4(c); // 800C9508
  goto L_800C951C; // 800C950C
L_800C9510:;
  c->r[3]=c->r[1]+0x000000A8u; // 800C9510
  c->r[4]=c->r[1]+0x00000030u; // 800C9514
  c->lr=0x800C951Cu; f_80032FF4(c); // 800C9518
L_800C951C:;
  c->r[3]=c->r[1]+0x000000D8u; // 800C951C
  c->r[4]=0u+0xFFFFFFFFu; // 800C9520
  c->lr=0x800C9528u; f_80046394(c); // 800C9524
L_800C9528:;
  c->r[12]=R32(c->r[29]+0x00000B28u); // 800C9528
  c->r[3]=c->r[29]+0x00000B28u; // 800C952C
  c->r[4]=c->r[1]+0x000000A8u; // 800C9530
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C9534
  c->ctr=c->r[12]; // 800C9538
  if (true) { c->lr=0x800C9540u; dispatch(c,c->ctr); } // 800C953C
  c->r[3]=c->r[1]+0x00000014u; // 800C9540
  c->lr=0x800C9548u; f_800772D8(c); // 800C9544
  c->r[4]=c->r[3]|c->r[3]; // 800C9548
  c->r[3]=c->r[29]+0x000009C0u; // 800C954C
  c->r[5]=0u+0x00000000u; // 800C9550
  c->lr=0x800C9558u; f_8002B3C8(c); // 800C9554
  goto L_800C961C; // 800C9558
L_800C955C:;
  c->r[12]=R32(c->r[29]+0x000009C0u); // 800C955C
  c->r[5]=0u+0x803E0000u; // 800C9560
  c->r[5]=c->r[5]+0xFFFFA848u; // 800C9564
  c->r[4]=c->r[29]+0x000009C0u; // 800C9568
  c->r[12]=R32(c->r[12]+0x00000038u); // 800C956C
  c->r[3]=c->r[1]+0x00000078u; // 800C9570
  c->r[5]=c->r[5]+0x00000011u; // 800C9574
  c->ctr=c->r[12]; // 800C9578
  if (true) { c->lr=0x800C9580u; dispatch(c,c->ctr); } // 800C957C
  c->r[3]=c->r[29]+0x00000B28u; // 800C9580
  c->r[4]=0u+0x00000001u; // 800C9584
  c->lr=0x800C958Cu; f_8002B91C(c); // 800C9588
  c->r[12]=R32(c->r[29]+0x00000B28u); // 800C958C
  c->r[3]=c->r[29]+0x00000B28u; // 800C9590
  c->r[4]=c->r[1]+0x00000078u; // 800C9594
  c->r[12]=R32(c->r[12]+0x00000028u); // 800C9598
  c->ctr=c->r[12]; // 800C959C
  if (true) { c->lr=0x800C95A4u; dispatch(c,c->ctr); } // 800C95A0
  c->r[3]=c->r[29]+0x000009C0u; // 800C95A4
  c->r[4]=0u+0x00000000u; // 800C95A8
  c->lr=0x800C95B0u; f_8002B91C(c); // 800C95AC
  goto L_800C961C; // 800C95B0
L_800C95B4:;
  c->r[3]=R32(c->r[29]+0x000009C8u); // 800C95B4
  cmps(c,0,(int32_t)c->r[3],0); // 800C95B8
  if (crb(c,2)) { goto L_800C961C; } // 800C95BC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C95C0
  cmps(c,0,(int32_t)c->r[0],0); // 800C95C4
  if (crb(c,2)) { goto L_800C961C; } // 800C95C8
  c->r[0]=R32(c->r[3]+0x000000E8u); // 800C95CC
  c->r[3]=c->r[1]+0x00000008u; // 800C95D0
  c->r[4]=c->r[28]+0x00000004u; // 800C95D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C95D8
  c->lr=0x800C95E0u; f_80365B94(c); // 800C95DC
  cmps(c,0,(int32_t)c->r[3],0); // 800C95E0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800C95E4
  if (crb(c,2)) { goto L_800C9608; } // 800C95E8
  c->r[3]=c->r[1]+0x00000010u; // 800C95EC
  c->lr=0x800C95F4u; f_800772D8(c); // 800C95F0
  c->r[4]=c->r[3]|c->r[3]; // 800C95F4
  c->r[3]=c->r[29]+0x000009C0u; // 800C95F8
  c->r[5]=0u+0x00000000u; // 800C95FC
  c->lr=0x800C9604u; f_8002B3C8(c); // 800C9600
  goto L_800C961C; // 800C9604
L_800C9608:;
  c->r[12]=R32(c->r[29]+0x000009C0u); // 800C9608
  c->r[3]=c->r[29]+0x000009C0u; // 800C960C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800C9610
  c->ctr=c->r[12]; // 800C9614
  if (true) { c->lr=0x800C961Cu; dispatch(c,c->ctr); } // 800C9618
L_800C961C:;
  c->r[3]=0u+0x00000000u; // 800C961C
  c->r[0]=0u+0x00000007u; // 800C9620
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800C9624
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C9628
  c->r[4]=c->r[1]+0x00000038u; // 800C962C
  c->ctr=c->r[0]; // 800C9630
L_800C9634:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9634
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9638
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C963C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9640
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9634; } // 800C9644
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9648
  c->r[11]=c->r[1]+0x00000EE0u; // 800C964C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9650
  c->lr=0x800C9658u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C9654
  c->r[0]=R32(c->r[1]+0x00000EE4u); // 800C9658
  c->lr=c->r[0]; // 800C965C
  c->r[1]=c->r[1]+0x00000EE0u; // 800C9660
  return; // 800C9664
}

// fn_800C9668
void f_800C9668(Ctx* __restrict c) {
  trace_call(0x800C9668u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9668
  c->r[0]=c->lr; // 800C966C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C9670
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C9674
  c->r[31]=c->r[3]|c->r[3]; // 800C9678
  c->r[3]=c->r[5]|c->r[5]; // 800C967C
  c->lr=0x800C9684u; f_80068A78(c); // 800C9680
  c->r[4]=0u+0x00000000u; // 800C9684
  c->r[5]=0u+0x00000000u; // 800C9688
  c->lr=0x800C9690u; f_80076080(c); // 800C968C
  c->r[3]=0u+0x00000000u; // 800C9690
  c->r[0]=0u+0x00000007u; // 800C9694
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C9698
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C969C
  c->r[4]=c->r[1]+0x00000004u; // 800C96A0
  c->ctr=c->r[0]; // 800C96A4
L_800C96A8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C96A8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C96AC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C96B0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C96B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C96A8; } // 800C96B8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C96BC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C96C0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C96C4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C96C8
  c->lr=c->r[0]; // 800C96CC
  c->r[1]=c->r[1]+0x00000050u; // 800C96D0
  return; // 800C96D4
}

// fn_800C96D8
void f_800C96D8(Ctx* __restrict c) {
  trace_call(0x800C96D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C96D8
  c->r[0]=c->lr; // 800C96DC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C96E0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C96E4
  c->r[31]=c->r[3]|c->r[3]; // 800C96E8
  c->r[3]=c->r[5]|c->r[5]; // 800C96EC
  c->lr=0x800C96F4u; f_80068A78(c); // 800C96F0
  c->r[4]=c->r[3]|c->r[3]; // 800C96F4
  c->r[3]=c->r[1]+0x00000008u; // 800C96F8
  c->r[0]=R32(c->r[4]+0x000004D0u); // 800C96FC
  c->r[5]=R32(c->r[4]+0x00000874u); // 800C9700
  c->r[0]=c->r[5]^c->r[0]; // 800C9704
  c->r[4]=sraw(c,c->r[0],1); // 800C9708
  c->r[0]=c->r[0]&c->r[5]; // 800C970C
  c->r[0]=c->r[4]-c->r[0]; // 800C9710
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800C9714
  c->lr=0x800C971Cu; f_800BDBB4(c); // 800C9718
  c->r[0]=0u+0x00000007u; // 800C971C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C9720
  c->r[4]=c->r[1]+0x00000004u; // 800C9724
  c->ctr=c->r[0]; // 800C9728
L_800C972C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C972C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9730
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9734
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9738
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C972C; } // 800C973C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9740
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9744
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C9748
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C974C
  c->lr=c->r[0]; // 800C9750
  c->r[1]=c->r[1]+0x00000050u; // 800C9754
  return; // 800C9758
}

// fn_800C975C
void f_800C975C(Ctx* __restrict c) {
  trace_call(0x800C975Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C975C
  c->r[0]=c->lr; // 800C9760
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C9764
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C9768
  c->r[31]=c->r[3]|c->r[3]; // 800C976C
  c->lr=0x800C9774u; f_8007A81C(c); // 800C9770
  c->r[0]=cntlz(c->r[3]); // 800C9774
  c->r[3]=c->r[1]+0x00000008u; // 800C9778
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C977C
  c->lr=0x800C9784u; f_800BDBB4(c); // 800C9780
  c->r[0]=0u+0x00000007u; // 800C9784
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C9788
  c->r[4]=c->r[1]+0x00000004u; // 800C978C
  c->ctr=c->r[0]; // 800C9790
L_800C9794:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9794
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9798
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C979C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C97A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9794; } // 800C97A4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C97A8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C97AC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C97B0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C97B4
  c->lr=c->r[0]; // 800C97B8
  c->r[1]=c->r[1]+0x00000050u; // 800C97BC
  return; // 800C97C0
}

// fn_800C97C4
void f_800C97C4(Ctx* __restrict c) {
  trace_call(0x800C97C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C97C4
  c->r[0]=c->lr; // 800C97C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C97CC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C97D0
  c->r[31]=c->r[3]|c->r[3]; // 800C97D4
  c->r[3]=c->r[5]|c->r[5]; // 800C97D8
  c->lr=0x800C97E0u; f_80068A78(c); // 800C97DC
  c->r[4]=c->r[3]|c->r[3]; // 800C97E0
  c->r[3]=c->r[1]+0x00000008u; // 800C97E4
  c->r[4]=R32(c->r[4]+0x00000AE4u); // 800C97E8
  c->lr=0x800C97F0u; f_800C12E4(c); // 800C97EC
  c->r[0]=0u+0x00000007u; // 800C97F0
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C97F4
  c->r[4]=c->r[1]+0x00000004u; // 800C97F8
  c->ctr=c->r[0]; // 800C97FC
L_800C9800:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9800
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9804
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9808
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C980C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9800; } // 800C9810
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9814
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9818
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C981C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C9820
  c->lr=c->r[0]; // 800C9824
  c->r[1]=c->r[1]+0x00000050u; // 800C9828
  return; // 800C982C
}

// fn_800C9830
void f_800C9830(Ctx* __restrict c) {
  trace_call(0x800C9830u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9830
  c->r[0]=c->lr; // 800C9834
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C9838
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C983C
  c->r[31]=c->r[3]|c->r[3]; // 800C9840
  c->r[3]=c->r[5]|c->r[5]; // 800C9844
  c->lr=0x800C984Cu; f_80068A78(c); // 800C9848
  c->r[4]=c->r[3]|c->r[3]; // 800C984C
  c->r[3]=c->r[1]+0x00000008u; // 800C9850
  c->r[4]=R32(c->r[4]+0x00000AE0u); // 800C9854
  c->lr=0x800C985Cu; f_800C12E4(c); // 800C9858
  c->r[0]=0u+0x00000007u; // 800C985C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800C9860
  c->r[4]=c->r[1]+0x00000004u; // 800C9864
  c->ctr=c->r[0]; // 800C9868
L_800C986C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C986C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9870
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9874
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9878
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C986C; } // 800C987C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9880
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9884
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800C9888
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C988C
  c->lr=c->r[0]; // 800C9890
  c->r[1]=c->r[1]+0x00000050u; // 800C9894
  return; // 800C9898
}

// fn_800C989C
void f_800C989C(Ctx* __restrict c) {
  trace_call(0x800C989Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C989C
  c->r[0]=c->lr; // 800C98A0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C98A4
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C98A8
  c->r[30]=c->r[3]|c->r[3]; // 800C98AC
  c->r[3]=c->r[5]|c->r[5]; // 800C98B0
  c->lr=0x800C98B8u; f_80068A78(c); // 800C98B4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C98B8
  c->r[31]=c->r[3]|c->r[3]; // 800C98BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C98C0
  c->ctr=c->r[12]; // 800C98C4
  if (true) { c->lr=0x800C98CCu; dispatch(c,c->ctr); } // 800C98C8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C98CC
  c->r[5]=0u+0xE0000000u; // 800C98D0
  c->r[3]=c->r[1]+0x00000008u; // 800C98D4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C98D8
  c->r[4]=c->r[5]+0x00000002u; // 800C98DC
  c->lr=0x800C98E4u; f_8003EDD0(c); // 800C98E0
  cmps(c,0,(int32_t)c->r[3],0); // 800C98E4
  if (crb(c,2)) { goto L_800C98F8; } // 800C98E8
  c->r[4]=R32(c->r[31]+0x00000AECu); // 800C98EC
  c->r[3]=c->r[1]+0x00000010u; // 800C98F0
  c->lr=0x800C98F8u; f_800C12E4(c); // 800C98F4
L_800C98F8:;
  c->r[0]=0u+0x00000007u; // 800C98F8
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C98FC
  c->r[4]=c->r[1]+0x0000000Cu; // 800C9900
  c->ctr=c->r[0]; // 800C9904
L_800C9908:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9908
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C990C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9910
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9914
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9908; } // 800C9918
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C991C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9920
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9924
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C9928
  c->lr=c->r[0]; // 800C992C
  c->r[1]=c->r[1]+0x00000060u; // 800C9930
  return; // 800C9934
}

// fn_800C9938
void f_800C9938(Ctx* __restrict c) {
  trace_call(0x800C9938u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9938
  c->r[0]=c->lr; // 800C993C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C9940
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C9944
  c->r[31]=c->r[5]|c->r[5]; // 800C9948
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C994C
  c->r[30]=c->r[3]|c->r[3]; // 800C9950
  c->r[3]=c->r[31]|c->r[31]; // 800C9954
  c->lr=0x800C995Cu; f_80068A78(c); // 800C9958
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C995C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9960
  if (crb(c,2)) { goto L_800C99C8; } // 800C9964
  c->r[12]=R32(c->r[3]+0x00000000u); // 800C9968
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800C996C
  c->ctr=c->r[12]; // 800C9970
  if (true) { c->lr=0x800C9978u; dispatch(c,c->ctr); } // 800C9974
  c->r[0]=c->r[3]&0x00000016u; cr0(c,c->r[0]); // 800C9978
  if (crb(c,2)) { goto L_800C99C8; } // 800C997C
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C9980
  c->r[0]=R8(c->r[3]+0x00000034u); // 800C9984
  cmps(c,0,(int32_t)c->r[0],0); // 800C9988
  if (crb(c,0)) { goto L_800C9998; } // 800C998C
  cmps(c,0,(int32_t)c->r[0],29); // 800C9990
  if (crb(c,0)) { goto L_800C999C; } // 800C9994
L_800C9998:;
  c->r[0]=0u+0x00000000u; // 800C9998
L_800C999C:;
  c->r[3]=c->r[0]^0x80000000u; // 800C999C
  c->r[0]=0u+0x43300000u; // 800C99A0
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 800C99A4
  c->r[3]=0u+0x00000001u; // 800C99A8
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C99AC
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C99B0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800C99B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C99B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C99BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C99C0
  goto L_800C99D4; // 800C99C4
L_800C99C8:;
  c->r[3]=c->r[1]+0x00000008u; // 800C99C8
  c->r[4]=0u+0xFFFFFFFFu; // 800C99CC
  c->lr=0x800C99D4u; f_800BDBB4(c); // 800C99D0
L_800C99D4:;
  c->r[0]=0u+0x00000007u; // 800C99D4
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C99D8
  c->r[4]=c->r[1]+0x00000004u; // 800C99DC
  c->ctr=c->r[0]; // 800C99E0
L_800C99E4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C99E4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C99E8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C99EC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C99F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C99E4; } // 800C99F4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C99F8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C99FC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C9A00
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C9A04
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C9A08
  c->lr=c->r[0]; // 800C9A0C
  c->r[1]=c->r[1]+0x00000060u; // 800C9A10
  return; // 800C9A14
}

// fn_800C9A18
void f_800C9A18(Ctx* __restrict c) {
  trace_call(0x800C9A18u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9A18
  c->r[0]=c->lr; // 800C9A1C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C9A20
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9A24
  c->r[29]=c->r[3]|c->r[3]; // 800C9A28
  c->r[3]=c->r[5]|c->r[5]; // 800C9A2C
  c->r[30]=c->r[6]|c->r[6]; // 800C9A30
  c->lr=0x800C9A38u; f_80068A78(c); // 800C9A34
  c->r[4]=0u+0x803E0000u; // 800C9A38
  c->r[31]=c->r[3]|c->r[3]; // 800C9A3C
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C9A40
  c->r[3]=c->r[1]+0x00000008u; // 800C9A44
  c->r[4]=c->r[4]+0x00000006u; // 800C9A48
  c->lr=0x800C9A50u; f_800C12E4(c); // 800C9A4C
  c->r[0]=R8(c->r[30]+0x00000004u); // 800C9A50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C9A54
  cmps(c,0,(int32_t)c->r[0],99); // 800C9A58
  if (crb(c,2)) { goto L_800C9AE0; } // 800C9A5C
  if (!crb(c,0)) { goto L_800C9A8C; } // 800C9A60
  cmps(c,0,(int32_t)c->r[0],51); // 800C9A64
  if (crb(c,2)) { goto L_800C9B20; } // 800C9A68
  if (!crb(c,0)) { goto L_800C9A80; } // 800C9A6C
  cmps(c,0,(int32_t)c->r[0],49); // 800C9A70
  if (crb(c,2)) { goto L_800C9B00; } // 800C9A74
  if (!crb(c,0)) { goto L_800C9B10; } // 800C9A78
  goto L_800C9B2C; // 800C9A7C
L_800C9A80:;
  cmps(c,0,(int32_t)c->r[0],98); // 800C9A80
  if (!crb(c,0)) { goto L_800C9AC0; } // 800C9A84
  goto L_800C9B2C; // 800C9A88
L_800C9A8C:;
  cmps(c,0,(int32_t)c->r[0],111); // 800C9A8C
  if (crb(c,2)) { goto L_800C9AD0; } // 800C9A90
  if (!crb(c,0)) { goto L_800C9AA4; } // 800C9A94
  cmps(c,0,(int32_t)c->r[0],101); // 800C9A98
  if (!crb(c,0)) { goto L_800C9B2C; } // 800C9A9C
  goto L_800C9AB0; // 800C9AA0
L_800C9AA4:;
  cmps(c,0,(int32_t)c->r[0],118); // 800C9AA4
  if (crb(c,2)) { goto L_800C9AF0; } // 800C9AA8
  goto L_800C9B2C; // 800C9AAC
L_800C9AB0:;
  c->r[4]=R32(c->r[31]+0x00000AE4u); // 800C9AB0
  c->r[3]=c->r[1]+0x00000008u; // 800C9AB4
  c->lr=0x800C9ABCu; f_800C12E4(c); // 800C9AB8
  goto L_800C9B2C; // 800C9ABC
L_800C9AC0:;
  c->r[4]=R32(c->r[31]+0x00000AECu); // 800C9AC0
  c->r[3]=c->r[1]+0x00000008u; // 800C9AC4
  c->lr=0x800C9ACCu; f_800C12E4(c); // 800C9AC8
  goto L_800C9B2C; // 800C9ACC
L_800C9AD0:;
  c->r[4]=R32(c->r[31]+0x00000AF4u); // 800C9AD0
  c->r[3]=c->r[1]+0x00000008u; // 800C9AD4
  c->lr=0x800C9ADCu; f_800C12E4(c); // 800C9AD8
  goto L_800C9B2C; // 800C9ADC
L_800C9AE0:;
  c->r[4]=R32(c->r[31]+0x00000AFCu); // 800C9AE0
  c->r[3]=c->r[1]+0x00000008u; // 800C9AE4
  c->lr=0x800C9AECu; f_800C12E4(c); // 800C9AE8
  goto L_800C9B2C; // 800C9AEC
L_800C9AF0:;
  c->r[4]=R32(c->r[31]+0x00000B04u); // 800C9AF0
  c->r[3]=c->r[1]+0x00000008u; // 800C9AF4
  c->lr=0x800C9AFCu; f_800C12E4(c); // 800C9AF8
  goto L_800C9B2C; // 800C9AFC
L_800C9B00:;
  c->r[4]=R32(c->r[31]+0x00000B0Cu); // 800C9B00
  c->r[3]=c->r[1]+0x00000008u; // 800C9B04
  c->lr=0x800C9B0Cu; f_800C12E4(c); // 800C9B08
  goto L_800C9B2C; // 800C9B0C
L_800C9B10:;
  c->r[4]=R32(c->r[31]+0x00000B14u); // 800C9B10
  c->r[3]=c->r[1]+0x00000008u; // 800C9B14
  c->lr=0x800C9B1Cu; f_800C12E4(c); // 800C9B18
  goto L_800C9B2C; // 800C9B1C
L_800C9B20:;
  c->r[4]=R32(c->r[31]+0x00000B1Cu); // 800C9B20
  c->r[3]=c->r[1]+0x00000008u; // 800C9B24
  c->lr=0x800C9B2Cu; f_800C12E4(c); // 800C9B28
L_800C9B2C:;
  c->r[0]=0u+0x00000007u; // 800C9B2C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C9B30
  c->r[4]=c->r[1]+0x00000004u; // 800C9B34
  c->ctr=c->r[0]; // 800C9B38
L_800C9B3C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9B3C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9B40
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9B44
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9B48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9B3C; } // 800C9B4C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9B50
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9B54
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9B58
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C9B5C
  c->lr=c->r[0]; // 800C9B60
  c->r[1]=c->r[1]+0x00000060u; // 800C9B64
  return; // 800C9B68
}

// fn_800C9B6C
void f_800C9B6C(Ctx* __restrict c) {
  trace_call(0x800C9B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9B6C
  c->r[0]=c->lr; // 800C9B70
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C9B74
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9B78
  c->r[29]=c->r[3]|c->r[3]; // 800C9B7C
  c->r[3]=c->r[5]|c->r[5]; // 800C9B80
  c->r[30]=c->r[6]|c->r[6]; // 800C9B84
  c->lr=0x800C9B8Cu; f_80068A78(c); // 800C9B88
  c->r[4]=0u+0x803E0000u; // 800C9B8C
  c->r[31]=c->r[3]|c->r[3]; // 800C9B90
  c->r[4]=c->r[4]+0xFFFFA848u; // 800C9B94
  c->r[3]=c->r[1]+0x00000008u; // 800C9B98
  c->r[4]=c->r[4]+0x00000006u; // 800C9B9C
  c->lr=0x800C9BA4u; f_800C12E4(c); // 800C9BA0
  c->r[0]=R8(c->r[30]+0x00000004u); // 800C9BA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C9BA8
  cmps(c,0,(int32_t)c->r[0],99); // 800C9BAC
  if (crb(c,2)) { goto L_800C9C34; } // 800C9BB0
  if (!crb(c,0)) { goto L_800C9BE0; } // 800C9BB4
  cmps(c,0,(int32_t)c->r[0],51); // 800C9BB8
  if (crb(c,2)) { goto L_800C9C74; } // 800C9BBC
  if (!crb(c,0)) { goto L_800C9BD4; } // 800C9BC0
  cmps(c,0,(int32_t)c->r[0],49); // 800C9BC4
  if (crb(c,2)) { goto L_800C9C54; } // 800C9BC8
  if (!crb(c,0)) { goto L_800C9C64; } // 800C9BCC
  goto L_800C9C80; // 800C9BD0
L_800C9BD4:;
  cmps(c,0,(int32_t)c->r[0],98); // 800C9BD4
  if (!crb(c,0)) { goto L_800C9C14; } // 800C9BD8
  goto L_800C9C80; // 800C9BDC
L_800C9BE0:;
  cmps(c,0,(int32_t)c->r[0],111); // 800C9BE0
  if (crb(c,2)) { goto L_800C9C24; } // 800C9BE4
  if (!crb(c,0)) { goto L_800C9BF8; } // 800C9BE8
  cmps(c,0,(int32_t)c->r[0],101); // 800C9BEC
  if (!crb(c,0)) { goto L_800C9C80; } // 800C9BF0
  goto L_800C9C04; // 800C9BF4
L_800C9BF8:;
  cmps(c,0,(int32_t)c->r[0],118); // 800C9BF8
  if (crb(c,2)) { goto L_800C9C44; } // 800C9BFC
  goto L_800C9C80; // 800C9C00
L_800C9C04:;
  c->r[4]=R32(c->r[31]+0x00000AE0u); // 800C9C04
  c->r[3]=c->r[1]+0x00000008u; // 800C9C08
  c->lr=0x800C9C10u; f_800C12E4(c); // 800C9C0C
  goto L_800C9C80; // 800C9C10
L_800C9C14:;
  c->r[4]=R32(c->r[31]+0x00000AE8u); // 800C9C14
  c->r[3]=c->r[1]+0x00000008u; // 800C9C18
  c->lr=0x800C9C20u; f_800C12E4(c); // 800C9C1C
  goto L_800C9C80; // 800C9C20
L_800C9C24:;
  c->r[4]=R32(c->r[31]+0x00000AF0u); // 800C9C24
  c->r[3]=c->r[1]+0x00000008u; // 800C9C28
  c->lr=0x800C9C30u; f_800C12E4(c); // 800C9C2C
  goto L_800C9C80; // 800C9C30
L_800C9C34:;
  c->r[4]=R32(c->r[31]+0x00000AF8u); // 800C9C34
  c->r[3]=c->r[1]+0x00000008u; // 800C9C38
  c->lr=0x800C9C40u; f_800C12E4(c); // 800C9C3C
  goto L_800C9C80; // 800C9C40
L_800C9C44:;
  c->r[4]=R32(c->r[31]+0x00000B00u); // 800C9C44
  c->r[3]=c->r[1]+0x00000008u; // 800C9C48
  c->lr=0x800C9C50u; f_800C12E4(c); // 800C9C4C
  goto L_800C9C80; // 800C9C50
L_800C9C54:;
  c->r[4]=R32(c->r[31]+0x00000B08u); // 800C9C54
  c->r[3]=c->r[1]+0x00000008u; // 800C9C58
  c->lr=0x800C9C60u; f_800C12E4(c); // 800C9C5C
  goto L_800C9C80; // 800C9C60
L_800C9C64:;
  c->r[4]=R32(c->r[31]+0x00000B10u); // 800C9C64
  c->r[3]=c->r[1]+0x00000008u; // 800C9C68
  c->lr=0x800C9C70u; f_800C12E4(c); // 800C9C6C
  goto L_800C9C80; // 800C9C70
L_800C9C74:;
  c->r[4]=R32(c->r[31]+0x00000B18u); // 800C9C74
  c->r[3]=c->r[1]+0x00000008u; // 800C9C78
  c->lr=0x800C9C80u; f_800C12E4(c); // 800C9C7C
L_800C9C80:;
  c->r[0]=0u+0x00000007u; // 800C9C80
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C9C84
  c->r[4]=c->r[1]+0x00000004u; // 800C9C88
  c->ctr=c->r[0]; // 800C9C8C
L_800C9C90:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9C90
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9C94
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9C98
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9C9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9C90; } // 800C9CA0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9CA4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9CA8
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9CAC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C9CB0
  c->lr=c->r[0]; // 800C9CB4
  c->r[1]=c->r[1]+0x00000060u; // 800C9CB8
  return; // 800C9CBC
}

// fn_800C9CC0
void f_800C9CC0(Ctx* __restrict c) {
  trace_call(0x800C9CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9CC0
  c->r[0]=c->lr; // 800C9CC4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C9CC8
  c->r[11]=c->r[1]+0x00000070u; // 800C9CCC
  c->lr=0x800C9CD4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C9CD0
  c->r[29]=c->r[3]|c->r[3]; // 800C9CD4
  c->r[3]=c->r[5]|c->r[5]; // 800C9CD8
  c->r[30]=c->r[6]|c->r[6]; // 800C9CDC
  c->lr=0x800C9CE4u; f_80068A78(c); // 800C9CE0
  c->r[31]=c->r[3]|c->r[3]; // 800C9CE4
  c->r[3]=c->r[1]+0x00000008u; // 800C9CE8
  c->r[4]=0u+0x00000000u; // 800C9CEC
  c->lr=0x800C9CF4u; f_800BDBB4(c); // 800C9CF0
  c->r[4]=R32(c->r[31]+0x00000B20u); // 800C9CF4
  cmps(c,0,(int32_t)c->r[4],0); // 800C9CF8
  if (crb(c,2)) { goto L_800C9D44; } // 800C9CFC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C9D00
  c->r[0]=0u+0x43300000u; // 800C9D04
  W32(c->r[1]+0x00000050u,c->r[0]); // 800C9D08
  c->r[3]=0u+0x00000001u; // 800C9D0C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800C9D10
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800C9D14
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800C9D18
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800C9D1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C9D20
  c->r[4]=c->r[4]+c->r[0]; // 800C9D24
  c->r[0]=R32(c->r[4]+0x00000064u); // 800C9D28
  c->r[0]=c->r[0]^0x80000000u; // 800C9D2C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C9D30
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C9D34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800C9D38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800C9D3C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C9D40
L_800C9D44:;
  c->r[0]=0u+0x00000007u; // 800C9D44
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C9D48
  c->r[4]=c->r[1]+0x00000004u; // 800C9D4C
  c->ctr=c->r[0]; // 800C9D50
L_800C9D54:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9D54
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9D58
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9D5C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9D60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9D54; } // 800C9D64
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9D68
  c->r[11]=c->r[1]+0x00000070u; // 800C9D6C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9D70
  c->lr=0x800C9D78u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C9D74
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C9D78
  c->lr=c->r[0]; // 800C9D7C
  c->r[1]=c->r[1]+0x00000070u; // 800C9D80
  return; // 800C9D84
}

// fn_800C9D88
void f_800C9D88(Ctx* __restrict c) {
  trace_call(0x800C9D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9D88
  c->r[0]=c->lr; // 800C9D8C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C9D90
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9D94
  c->r[30]=c->r[3]|c->r[3]; // 800C9D98
  c->r[3]=c->r[5]|c->r[5]; // 800C9D9C
  c->lr=0x800C9DA4u; f_80068A78(c); // 800C9DA0
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C9DA4
  c->r[31]=c->r[3]|c->r[3]; // 800C9DA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C9DAC
  c->ctr=c->r[12]; // 800C9DB0
  if (true) { c->lr=0x800C9DB8u; dispatch(c,c->ctr); } // 800C9DB4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C9DB8
  c->r[5]=0u+0xE0000000u; // 800C9DBC
  c->r[3]=c->r[1]+0x00000008u; // 800C9DC0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C9DC4
  c->r[4]=c->r[5]+0x00000002u; // 800C9DC8
  c->lr=0x800C9DD0u; f_8003EDD0(c); // 800C9DCC
  cmps(c,0,(int32_t)c->r[3],0); // 800C9DD0
  if (crb(c,2)) { goto L_800C9DE4; } // 800C9DD4
  c->r[4]=R32(c->r[31]+0x00000AE8u); // 800C9DD8
  c->r[3]=c->r[1]+0x00000010u; // 800C9DDC
  c->lr=0x800C9DE4u; f_800C12E4(c); // 800C9DE0
L_800C9DE4:;
  c->r[0]=0u+0x00000007u; // 800C9DE4
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C9DE8
  c->r[4]=c->r[1]+0x0000000Cu; // 800C9DEC
  c->ctr=c->r[0]; // 800C9DF0
L_800C9DF4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9DF4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9DF8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9DFC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9E00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9DF4; } // 800C9E04
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9E08
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9E0C
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9E10
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C9E14
  c->lr=c->r[0]; // 800C9E18
  c->r[1]=c->r[1]+0x00000060u; // 800C9E1C
  return; // 800C9E20
}

// fn_800C9E24
void f_800C9E24(Ctx* __restrict c) {
  trace_call(0x800C9E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9E24
  c->r[0]=c->lr; // 800C9E28
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C9E2C
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9E30
  c->r[31]=c->r[5]|c->r[5]; // 800C9E34
  c->r[29]=c->r[3]|c->r[3]; // 800C9E38
  c->r[30]=0u+0x00000000u; // 800C9E3C
  c->r[3]=c->r[31]|c->r[31]; // 800C9E40
  c->lr=0x800C9E48u; f_80068A78(c); // 800C9E44
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C9E48
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C9E4C
  c->ctr=c->r[12]; // 800C9E50
  if (true) { c->lr=0x800C9E58u; dispatch(c,c->ctr); } // 800C9E54
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C9E58
  c->r[5]=0u+0xE0000000u; // 800C9E5C
  c->r[3]=c->r[1]+0x00000008u; // 800C9E60
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C9E64
  c->r[4]=c->r[5]+0x00000002u; // 800C9E68
  c->lr=0x800C9E70u; f_8003EDD0(c); // 800C9E6C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9E70
  if (crb(c,2)) { goto L_800C9E94; } // 800C9E74
  c->r[3]=c->r[31]|c->r[31]; // 800C9E78
  c->lr=0x800C9E80u; f_80068A78(c); // 800C9E7C
  c->r[4]=R32(c->r[3]+0x00000C4Cu); // 800C9E80
  cmps(c,0,(int32_t)c->r[4],0); // 800C9E84
  if (crb(c,2)) { goto L_800C9E94; } // 800C9E88
  c->lr=0x800C9E90u; f_800FF09C(c); // 800C9E8C
  c->r[30]=0u+0x00000001u; // 800C9E90
L_800C9E94:;
  c->r[4]=c->r[30]|c->r[30]; // 800C9E94
  c->r[3]=c->r[1]+0x00000010u; // 800C9E98
  c->lr=0x800C9EA0u; f_800BDBB4(c); // 800C9E9C
  c->r[0]=0u+0x00000007u; // 800C9EA0
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800C9EA4
  c->r[4]=c->r[1]+0x0000000Cu; // 800C9EA8
  c->ctr=c->r[0]; // 800C9EAC
L_800C9EB0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9EB0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9EB4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9EB8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9EBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9EB0; } // 800C9EC0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9EC4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9EC8
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9ECC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C9ED0
  c->lr=c->r[0]; // 800C9ED4
  c->r[1]=c->r[1]+0x00000060u; // 800C9ED8
  return; // 800C9EDC
}

// fn_800C9EE0
void f_800C9EE0(Ctx* __restrict c) {
  trace_call(0x800C9EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9EE0
  c->r[0]=c->lr; // 800C9EE4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800C9EE8
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C9EEC
  c->r[31]=c->r[5]|c->r[5]; // 800C9EF0
  c->r[30]=c->r[3]|c->r[3]; // 800C9EF4
  c->r[3]=c->r[31]|c->r[31]; // 800C9EF8
  c->lr=0x800C9F00u; f_80068A78(c); // 800C9EFC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C9F00
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C9F04
  c->ctr=c->r[12]; // 800C9F08
  if (true) { c->lr=0x800C9F10u; dispatch(c,c->ctr); } // 800C9F0C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C9F10
  c->r[5]=0u+0xE0000000u; // 800C9F14
  c->r[3]=c->r[1]+0x00000008u; // 800C9F18
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C9F1C
  c->r[4]=c->r[5]+0x00000002u; // 800C9F20
  c->lr=0x800C9F28u; f_8003EDD0(c); // 800C9F24
  cmps(c,0,(int32_t)c->r[3],0); // 800C9F28
  if (crb(c,2)) { goto L_800C9F4C; } // 800C9F2C
  c->r[3]=c->r[31]|c->r[31]; // 800C9F30
  c->lr=0x800C9F38u; f_80068A78(c); // 800C9F34
  c->r[31]=c->r[3]|c->r[3]; // 800C9F38
  c->r[3]=c->r[3]+0x00000C64u; // 800C9F3C
  c->lr=0x800C9F44u; f_8013FA28(c); // 800C9F40
  c->r[3]=c->r[31]+0x00000C80u; // 800C9F44
  c->lr=0x800C9F4Cu; f_8013F1B0(c); // 800C9F48
L_800C9F4C:;
  c->r[3]=c->r[1]+0x00000010u; // 800C9F4C
  c->r[4]=0u+0x00000000u; // 800C9F50
  c->lr=0x800C9F58u; f_800BDBB4(c); // 800C9F54
  c->r[0]=0u+0x00000007u; // 800C9F58
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800C9F5C
  c->r[4]=c->r[1]+0x0000000Cu; // 800C9F60
  c->ctr=c->r[0]; // 800C9F64
L_800C9F68:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C9F68
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800C9F6C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800C9F70
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800C9F74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9F68; } // 800C9F78
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C9F7C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C9F80
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9F84
  c->r[0]=R32(c->r[1]+0x00000064u); // 800C9F88
  c->lr=c->r[0]; // 800C9F8C
  c->r[1]=c->r[1]+0x00000060u; // 800C9F90
  return; // 800C9F94
}

// fn_800C9F98
void f_800C9F98(Ctx* __restrict c) {
  trace_call(0x800C9F98u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9F98
  c->r[0]=c->lr; // 800C9F9C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800C9FA0
  c->r[11]=c->r[1]+0x000000E0u; // 800C9FA4
  c->lr=0x800C9FACu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C9FA8
  c->r[28]=c->r[3]|c->r[3]; // 800C9FAC
  c->r[3]=c->r[5]|c->r[5]; // 800C9FB0
  c->r[29]=c->r[6]|c->r[6]; // 800C9FB4
  c->lr=0x800C9FBCu; f_80068A78(c); // 800C9FB8
  c->r[12]=R32(c->r[3]+0x00000010u); // 800C9FBC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800C9FC0
  c->ctr=c->r[12]; // 800C9FC4
  if (true) { c->lr=0x800C9FCCu; dispatch(c,c->ctr); } // 800C9FC8
  c->r[31]=R32(c->r[3]+0x00000008u); // 800C9FCC
  c->r[26]=0u+0x803E0000u; // 800C9FD0
  c->r[26]=c->r[26]+0xFFFF9B4Cu; // 800C9FD4
  c->r[27]=c->r[1]+0x00000018u; // 800C9FD8
  c->r[0]=R32(c->r[31]+0x000000E8u); // 800C9FDC
  c->r[30]=0u+0x00000000u; // 800C9FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9FE4
  goto L_800CA0D4; // 800C9FE8
L_800C9FEC:;
  c->r[4]=c->r[31]|c->r[31]; // 800C9FEC
  c->r[5]=c->r[30]|c->r[30]; // 800C9FF0
  c->r[3]=c->r[1]+0x00000064u; // 800C9FF4
  c->lr=0x800C9FFCu; f_80385274(c); // 800C9FF8
  c->r[0]=R8(c->r[29]+0x00000004u); // 800C9FFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CA000
  if (crb(c,2)) { goto L_800CA010; } // 800CA004
  cmps(c,0,(int32_t)c->r[0],32); // 800CA008
  if (!crb(c,2)) { goto L_800CA0D0; } // 800CA00C
L_800CA010:;
  c->r[3]=c->r[1]+0x00000064u; // 800CA010
  c->r[4]=0u+0x00000000u; // 800CA014
  c->lr=0x800CA01Cu; f_8038522C(c); // 800CA018
  W32(c->r[1]+0x00000010u,c->r[3]); // 800CA01C
  c->r[3]=c->r[1]+0x00000010u; // 800CA020
  c->r[6]=R32(c->r[26]+0x00000004u); // 800CA024
  c->r[5]=c->r[1]+0x00000008u; // 800CA028
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA02C
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA030
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CA034
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA038
  {uint32_t ea=c->r[29]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA03C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800CA040
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CA044
  c->r[7]=R32(c->r[26]+0x00000000u); // 800CA048
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CA04C
  {uint32_t ea=c->r[1]+0x00000098u; WF64(ea,c->f[3]);} // 800CA050
  c->r[0]=R32(c->r[26]+0x00000008u); // 800CA054
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[2]);} // 800CA058
  c->r[8]=R32(c->r[1]+0x0000009Cu); // 800CA05C
  c->r[9]=R32(c->r[1]+0x000000A4u); // 800CA060
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[1]);} // 800CA064
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800CA068
  c->r[10]=R32(c->r[1]+0x000000ACu); // 800CA06C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[0]);} // 800CA070
  c->r[11]=R32(c->r[1]+0x000000B4u); // 800CA074
  W8(c->r[1]+0x00000008u,c->r[8]); // 800CA078
  W8(c->r[1]+0x00000009u,c->r[9]); // 800CA07C
  W8(c->r[1]+0x0000000Au,c->r[10]); // 800CA080
  W8(c->r[1]+0x0000000Bu,c->r[11]); // 800CA084
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA088
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800CA08C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CA090
  W32(c->r[1]+0x00000018u,c->r[7]); // 800CA094
  {uint32_t ea=c->r[1]+0x000000B8u; WF64(ea,c->f[0]);} // 800CA098
  c->r[6]=R32(c->r[1]+0x000000BCu); // 800CA09C
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CA0A0
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800CA0A4
  W32(c->r[1]+0x00000024u,c->r[4]); // 800CA0A8
  W8(c->r[1]+0x0000000Cu,c->r[8]); // 800CA0AC
  c->r[4]=R32(c->r[27]+c->r[0]); // 800CA0B0
  W8(c->r[1]+0x0000000Du,c->r[9]); // 800CA0B4
  W8(c->r[1]+0x0000000Eu,c->r[10]); // 800CA0B8
  W8(c->r[1]+0x0000000Fu,c->r[11]); // 800CA0BC
  c->lr=0x800CA0C4u; f_80367A40(c); // 800CA0C0
  c->r[3]=c->r[1]+0x00000010u; // 800CA0C4
  c->r[4]=0u+0x00000000u; // 800CA0C8
  c->lr=0x800CA0D0u; f_80366F88(c); // 800CA0CC
L_800CA0D0:;
  c->r[30]=c->r[30]+0x00000001u; // 800CA0D0
L_800CA0D4:;
  c->r[3]=c->r[1]+0x00000014u; // 800CA0D4
  c->lr=0x800CA0DCu; f_8036624C(c); // 800CA0D8
  cmpu(c,0,c->r[30],c->r[3]); // 800CA0DC
  if (crb(c,0)) { IRQCHK(c); goto L_800C9FEC; } // 800CA0E0
  c->r[3]=0u+0x00000000u; // 800CA0E4
  c->r[0]=0u+0x00000007u; // 800CA0E8
  W32(c->r[1]+0x00000028u,c->r[3]); // 800CA0EC
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800CA0F0
  c->r[4]=c->r[1]+0x00000024u; // 800CA0F4
  c->ctr=c->r[0]; // 800CA0F8
L_800CA0FC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CA0FC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CA100
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CA104
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CA108
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA0FC; } // 800CA10C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CA110
  c->r[11]=c->r[1]+0x000000E0u; // 800CA114
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CA118
  c->lr=0x800CA120u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CA11C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800CA120
  c->lr=c->r[0]; // 800CA124
  c->r[1]=c->r[1]+0x000000E0u; // 800CA128
  return; // 800CA12C
}

// fn_800CA130
void f_800CA130(Ctx* __restrict c) {
  trace_call(0x800CA130u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA130
  c->r[0]=c->lr; // 800CA134
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800CA138
  c->r[11]=c->r[1]+0x000000D0u; // 800CA13C
  c->lr=0x800CA144u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CA140
  c->r[31]=c->r[1]|c->r[1]; // 800CA144
  c->r[30]=c->r[3]|c->r[3]; // 800CA148
  c->r[3]=c->r[5]|c->r[5]; // 800CA14C
  c->r[25]=c->r[6]|c->r[6]; // 800CA150
  c->lr=0x800CA158u; f_80068A78(c); // 800CA154
  {uint32_t ea=c->r[25]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA158
  c->r[28]=c->r[3]|c->r[3]; // 800CA15C
  {uint32_t ea=c->r[25]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA160
  c->r[3]=c->r[31]+0x00000044u; // 800CA164
  {uint32_t ea=c->r[25]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA168
  c->lr=0x800CA170u; f_800521A0(c); // 800CA16C
  {uint32_t ea=c->r[25]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA170
  c->r[3]=c->r[31]+0x00000038u; // 800CA174
  {uint32_t ea=c->r[25]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA178
  {uint32_t ea=c->r[25]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA17C
  c->lr=0x800CA184u; f_800521A0(c); // 800CA180
  c->r[0]=R8(c->r[25]+0x00000004u); // 800CA184
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CA188
  if (crb(c,2)) { goto L_800CA280; } // 800CA18C
  c->r[3]=c->r[28]+0x00000830u; // 800CA190
  c->r[4]=c->r[25]+0x00000004u; // 800CA194
  c->lr=0x800CA19Cu; f_800CA2D4(c); // 800CA198
  cmps(c,0,(int32_t)c->r[3],-1); // 800CA19C
  if (!crb(c,2)) { goto L_800CA274; } // 800CA1A0
  c->r[3]=c->r[31]+0x00000020u; // 800CA1A4
  c->r[4]=c->r[31]+0x00000038u; // 800CA1A8
  c->lr=0x800CA1B0u; f_8003F484(c); // 800CA1AC
  c->r[3]=c->r[31]+0x0000002Cu; // 800CA1B0
  c->r[4]=c->r[31]+0x00000044u; // 800CA1B4
  c->lr=0x800CA1BCu; f_8003F484(c); // 800CA1B8
  c->r[27]=R32(c->r[28]+0x0000083Cu); // 800CA1BC
  c->r[0]=R32(c->r[28]+0x00000838u); // 800CA1C0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800CA1C4
  if (!crb(c,0)) { goto L_800CA26C; } // 800CA1C8
  c->r[3]=R32(c->r[28]+0x00000848u); // 800CA1CC
  c->r[4]=0u+0x00000168u; // 800CA1D0
  c->lr=0x800CA1D8u; f_802A703C(c); // 800CA1D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CA1D8
  c->r[29]=c->r[3]|c->r[3]; // 800CA1DC
  if (crb(c,2)) { goto L_800CA200; } // 800CA1E0
  W32(c->r[31]+0x00000064u,c->r[1]); // 800CA1E4
  c->lr=0x800CA1ECu; f_801DC7B4(c); // 800CA1E8
  goto L_800CA200; // 800CA1EC
  c->r[3]=0u+0x00000000u; // 800CA1F0
  c->r[4]=0u+0x00000000u; // 800CA1F4
  c->r[5]=0u+0x00000000u; // 800CA1F8
  c->lr=0x800CA200u; f_8028BC3C(c); // 800CA1FC
L_800CA200:;
  c->r[5]=R32(c->r[28]+0x00000844u); // 800CA200
  c->r[26]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800CA204
  c->r[3]=c->r[31]+0x00000014u; // 800CA208
  c->r[4]=c->r[31]+0x00000020u; // 800CA20C
  W32(c->r[5]+c->r[26],c->r[29]); // 800CA210
  c->lr=0x800CA218u; f_8003F484(c); // 800CA214
  c->r[29]=c->r[3]|c->r[3]; // 800CA218
  c->r[3]=c->r[31]+0x00000008u; // 800CA21C
  c->r[4]=c->r[31]+0x0000002Cu; // 800CA220
  c->lr=0x800CA228u; f_8003F484(c); // 800CA224
  c->r[5]=R32(c->r[28]+0x00000844u); // 800CA228
  c->r[7]=c->r[3]|c->r[3]; // 800CA22C
  c->r[8]=c->r[29]|c->r[29]; // 800CA230
  c->r[4]=c->r[25]+0x00000004u; // 800CA234
  c->r[3]=R32(c->r[5]+c->r[26]); // 800CA238
  c->r[6]=c->r[25]+0x00000040u; // 800CA23C
  c->r[5]=R32(c->r[28]+0x00000840u); // 800CA240
  c->r[12]=R32(c->r[3]+0x00000004u); // 800CA244
  c->r[9]=R32(c->r[28]+0x00000848u); // 800CA248
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CA24C
  c->r[10]=R32(c->r[28]+0x00000834u); // 800CA250
  c->ctr=c->r[12]; // 800CA254
  if (true) { c->lr=0x800CA25Cu; dispatch(c,c->ctr); } // 800CA258
  c->r[3]=R32(c->r[28]+0x0000083Cu); // 800CA25C
  c->r[0]=c->r[3]+0x00000001u; // 800CA260
  W32(c->r[28]+0x0000083Cu,c->r[0]); // 800CA264
  goto L_800CA270; // 800CA268
L_800CA26C:;
  c->r[27]=0u+0xFFFFFFFFu; // 800CA26C
L_800CA270:;
  c->r[3]=c->r[27]|c->r[27]; // 800CA270
L_800CA274:;
  c->r[4]=c->r[3]|c->r[3]; // 800CA274
  c->r[3]=c->r[28]+0x00000830u; // 800CA278
  c->lr=0x800CA280u; f_800CA348(c); // 800CA27C
L_800CA280:;
  c->r[3]=0u+0x00000000u; // 800CA280
  c->r[0]=0u+0x00000007u; // 800CA284
  W32(c->r[31]+0x00000068u,c->r[3]); // 800CA288
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800CA28C
  c->r[4]=c->r[31]+0x00000064u; // 800CA290
  c->ctr=c->r[0]; // 800CA294
L_800CA298:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CA298
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CA29C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CA2A0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CA2A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA298; } // 800CA2A8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CA2AC
  c->r[10]=c->r[31]|c->r[31]; // 800CA2B0
  c->r[11]=c->r[10]+0x000000D0u; // 800CA2B4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CA2B8
  c->lr=0x800CA2C0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CA2BC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CA2C0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CA2C4
  c->r[1]=c->r[10]|c->r[10]; // 800CA2C8
  c->lr=c->r[0]; // 800CA2CC
  return; // 800CA2D0
}

// fn_800CA2D4
void f_800CA2D4(Ctx* __restrict c) {
  trace_call(0x800CA2D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA2D4
  c->r[0]=c->lr; // 800CA2D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA2DC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CA2E0
  c->r[27]=c->r[3]|c->r[3]; // 800CA2E4
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 800CA2E8
  c->r[28]=c->r[4]|c->r[4]; // 800CA2EC
  c->r[29]=0u+0x00000000u; // 800CA2F0
  c->r[31]=0u+0x00000000u; // 800CA2F4
  goto L_800CA328; // 800CA2F8
L_800CA2FC:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 800CA2FC
  c->r[4]=c->r[28]|c->r[28]; // 800CA300
  c->r[3]=R32(c->r[3]+c->r[31]); // 800CA304
  c->r[3]=c->r[3]+0x00000008u; // 800CA308
  c->lr=0x800CA310u; f_80293554(c); // 800CA30C
  cmps(c,0,(int32_t)c->r[3],0); // 800CA310
  if (!crb(c,2)) { goto L_800CA320; } // 800CA314
  c->r[3]=c->r[29]|c->r[29]; // 800CA318
  goto L_800CA334; // 800CA31C
L_800CA320:;
  c->r[29]=c->r[29]+0x00000001u; // 800CA320
  c->r[31]=c->r[31]+0x00000004u; // 800CA324
L_800CA328:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 800CA328
  if (crb(c,0)) { IRQCHK(c); goto L_800CA2FC; } // 800CA32C
  c->r[3]=0u+0xFFFFFFFFu; // 800CA330
L_800CA334:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA334
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CA338
  c->lr=c->r[0]; // 800CA33C
  c->r[1]=c->r[1]+0x00000020u; // 800CA340
  return; // 800CA344
}

// fn_800CA348
void f_800CA348(Ctx* __restrict c) {
  trace_call(0x800CA348u);
  c->r[5]=R32(c->r[3]+0x00000014u); // 800CA348
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800CA34C
  c->r[4]=R32(c->r[5]+c->r[6]); // 800CA350
  c->r[0]=R8(c->r[4]+0x00000000u); // 800CA354
  cmps(c,0,(int32_t)c->r[0],0); // 800CA358
  if (!crb(c,2)) return; // 800CA35C
  c->r[0]=0u+0x00000001u; // 800CA360
  W8(c->r[4]+0x00000000u,c->r[0]); // 800CA364
  c->r[5]=R32(c->r[3]+0x00000014u); // 800CA368
  c->r[4]=R32(c->r[3]+0x00000010u); // 800CA36C
  c->r[3]=R32(c->r[5]+c->r[6]); // 800CA370
  c->r[12]=R32(c->r[3]+0x00000004u); // 800CA374
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CA378
  c->ctr=c->r[12]; // 800CA37C
  if (true) { dispatch(c,c->ctr); return; } // 800CA380
  return; // 800CA384
}

// fn_800CA388
void f_800CA388(Ctx* __restrict c) {
  trace_call(0x800CA388u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA388
  c->r[0]=c->lr; // 800CA38C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CA390
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CA394
  c->r[29]=c->r[3]|c->r[3]; // 800CA398
  c->r[3]=c->r[5]|c->r[5]; // 800CA39C
  c->r[30]=c->r[6]|c->r[6]; // 800CA3A0
  c->lr=0x800CA3A8u; f_80068A78(c); // 800CA3A4
  c->r[0]=R8(c->r[30]+0x00000004u); // 800CA3A8
  c->r[31]=c->r[3]|c->r[3]; // 800CA3AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CA3B0
  if (crb(c,2)) { goto L_800CA408; } // 800CA3B4
  c->r[3]=c->r[3]+0x00000830u; // 800CA3B8
  c->r[4]=c->r[30]+0x00000004u; // 800CA3BC
  c->lr=0x800CA3C4u; f_800CA2D4(c); // 800CA3C0
  cmps(c,0,(int32_t)c->r[3],-1); // 800CA3C4
  if (crb(c,2)) { goto L_800CA408; } // 800CA3C8
  c->r[4]=R32(c->r[31]+0x00000844u); // 800CA3CC
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800CA3D0
  c->r[3]=R32(c->r[4]+c->r[5]); // 800CA3D4
  c->r[0]=R8(c->r[3]+0x00000000u); // 800CA3D8
  cmpu(c,0,c->r[0],0x00000001u); // 800CA3DC
  if (!crb(c,2)) { goto L_800CA408; } // 800CA3E0
  c->r[0]=0u+0x00000000u; // 800CA3E4
  W8(c->r[3]+0x00000000u,c->r[0]); // 800CA3E8
  c->r[3]=R32(c->r[31]+0x00000844u); // 800CA3EC
  c->r[4]=R32(c->r[31]+0x00000840u); // 800CA3F0
  c->r[3]=R32(c->r[3]+c->r[5]); // 800CA3F4
  c->r[12]=R32(c->r[3]+0x00000004u); // 800CA3F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800CA3FC
  c->ctr=c->r[12]; // 800CA400
  if (true) { c->lr=0x800CA408u; dispatch(c,c->ctr); } // 800CA404
L_800CA408:;
  c->r[3]=0u+0x00000000u; // 800CA408
  c->r[0]=0u+0x00000007u; // 800CA40C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA410
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800CA414
  c->r[4]=c->r[1]+0x00000004u; // 800CA418
  c->ctr=c->r[0]; // 800CA41C
L_800CA420:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CA420
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CA424
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CA428
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CA42C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA420; } // 800CA430
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CA434
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CA438
  {uint32_t ea=c->r[1]+0x00000054u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA43C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CA440
  c->lr=c->r[0]; // 800CA444
  c->r[1]=c->r[1]+0x00000060u; // 800CA448
  return; // 800CA44C
}

// fn_800CA450
void f_800CA450(Ctx* __restrict c) {
  trace_call(0x800CA450u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA450
  c->r[0]=c->lr; // 800CA454
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CA458
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CA45C
  c->r[31]=c->r[6]|c->r[6]; // 800CA460
  W32(c->r[1]+0x00000048u,c->r[30]); // 800CA464
  c->r[30]=c->r[3]|c->r[3]; // 800CA468
  c->r[3]=c->r[5]|c->r[5]; // 800CA46C
  c->lr=0x800CA474u; f_80068A78(c); // 800CA470
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 800CA474
  c->r[4]=c->r[31]+0x00000004u; // 800CA478
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CA47C
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 800CA480
  c->ctr=c->r[12]; // 800CA484
  if (true) { c->lr=0x800CA48Cu; dispatch(c,c->ctr); } // 800CA488
  c->r[31]=c->r[3]|c->r[3]; // 800CA48C
  c->lr=0x800CA494u; f_80061A4C(c); // 800CA490
  c->r[3]=R32(c->r[3]+0x0000031Cu); // 800CA494
  c->r[4]=c->r[31]|c->r[31]; // 800CA498
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA49C
  c->lr=0x800CA4A4u; f_801B1254(c); // 800CA4A0
  c->r[3]=0u+0x00000000u; // 800CA4A4
  c->r[0]=0u+0x00000007u; // 800CA4A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA4AC
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800CA4B0
  c->r[4]=c->r[1]+0x00000004u; // 800CA4B4
  c->ctr=c->r[0]; // 800CA4B8
L_800CA4BC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CA4BC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CA4C0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CA4C4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CA4C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA4BC; } // 800CA4CC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CA4D0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CA4D4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CA4D8
  c->r[30]=R32(c->r[1]+0x00000048u); // 800CA4DC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CA4E0
  c->lr=c->r[0]; // 800CA4E4
  c->r[1]=c->r[1]+0x00000050u; // 800CA4E8
  return; // 800CA4EC
}

// fn_800CA4F0
void f_800CA4F0(Ctx* __restrict c) {
  trace_call(0x800CA4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA4F0
  c->r[0]=c->lr; // 800CA4F4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800CA4F8
  c->r[11]=c->r[1]+0x000000D0u; // 800CA4FC
  c->lr=0x800CA504u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CA500
  c->r[31]=c->r[1]|c->r[1]; // 800CA504
  c->r[27]=c->r[3]|c->r[3]; // 800CA508
  c->r[3]=c->r[5]|c->r[5]; // 800CA50C
  c->r[28]=c->r[6]|c->r[6]; // 800CA510
  c->lr=0x800CA518u; f_80068A78(c); // 800CA514
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA518
  c->r[30]=c->r[3]|c->r[3]; // 800CA51C
  {uint32_t ea=c->r[28]+0x000000F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA520
  c->r[3]=c->r[31]+0x00000044u; // 800CA524
  {uint32_t ea=c->r[28]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA528
  c->lr=0x800CA530u; f_800521A0(c); // 800CA52C
  {uint32_t ea=c->r[28]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA530
  c->r[3]=c->r[31]+0x00000038u; // 800CA534
  {uint32_t ea=c->r[28]+0x000001A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA538
  {uint32_t ea=c->r[28]+0x000001E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA53C
  c->lr=0x800CA544u; f_800521A0(c); // 800CA540
  c->r[3]=c->r[30]+0x00000830u; // 800CA544
  c->r[4]=c->r[28]+0x00000004u; // 800CA548
  c->lr=0x800CA550u; f_800CA2D4(c); // 800CA54C
  cmps(c,0,(int32_t)c->r[3],-1); // 800CA550
  c->r[29]=c->r[3]|c->r[3]; // 800CA554
  if (!crb(c,2)) { goto L_800CA634; } // 800CA558
  c->r[3]=c->r[31]+0x00000020u; // 800CA55C
  c->r[4]=c->r[31]+0x00000038u; // 800CA560
  c->lr=0x800CA568u; f_8003F484(c); // 800CA564
  c->r[3]=c->r[31]+0x0000002Cu; // 800CA568
  c->r[4]=c->r[31]+0x00000044u; // 800CA56C
  c->lr=0x800CA574u; f_8003F484(c); // 800CA570
  c->r[29]=R32(c->r[30]+0x0000083Cu); // 800CA574
  c->r[3]=0u+0x803E0000u; // 800CA578
  c->r[0]=R32(c->r[30]+0x00000838u); // 800CA57C
  c->r[3]=c->r[3]+0xFFFFA848u; // 800CA580
  c->r[25]=c->r[3]+0x00000011u; // 800CA584
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800CA588
  if (!crb(c,0)) { goto L_800CA630; } // 800CA58C
  c->r[3]=R32(c->r[30]+0x00000848u); // 800CA590
  c->r[4]=0u+0x000000DCu; // 800CA594
  c->lr=0x800CA59Cu; f_802A703C(c); // 800CA598
  cmps(c,0,(int32_t)c->r[3],0); // 800CA59C
  c->r[26]=c->r[3]|c->r[3]; // 800CA5A0
  if (crb(c,2)) { goto L_800CA5C4; } // 800CA5A4
  W32(c->r[31]+0x00000064u,c->r[1]); // 800CA5A8
  c->lr=0x800CA5B0u; f_801DCBB8(c); // 800CA5AC
  goto L_800CA5C4; // 800CA5B0
  c->r[3]=0u+0x00000000u; // 800CA5B4
  c->r[4]=0u+0x00000000u; // 800CA5B8
  c->r[5]=0u+0x00000000u; // 800CA5BC
  c->lr=0x800CA5C4u; f_8028BC3C(c); // 800CA5C0
L_800CA5C4:;
  c->r[5]=R32(c->r[30]+0x00000844u); // 800CA5C4
  c->r[24]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800CA5C8
  c->r[3]=c->r[31]+0x00000014u; // 800CA5CC
  c->r[4]=c->r[31]+0x00000020u; // 800CA5D0
  W32(c->r[5]+c->r[24],c->r[26]); // 800CA5D4
  c->lr=0x800CA5DCu; f_8003F484(c); // 800CA5D8
  c->r[26]=c->r[3]|c->r[3]; // 800CA5DC
  c->r[3]=c->r[31]+0x00000008u; // 800CA5E0
  c->r[4]=c->r[31]+0x0000002Cu; // 800CA5E4
  c->lr=0x800CA5ECu; f_8003F484(c); // 800CA5E8
  c->r[4]=R32(c->r[30]+0x00000844u); // 800CA5EC
  c->r[7]=c->r[3]|c->r[3]; // 800CA5F0
  c->r[6]=c->r[25]|c->r[25]; // 800CA5F4
  c->r[8]=c->r[26]|c->r[26]; // 800CA5F8
  c->r[3]=R32(c->r[4]+c->r[24]); // 800CA5FC
  c->r[4]=c->r[28]+0x00000004u; // 800CA600
  c->r[5]=R32(c->r[30]+0x00000840u); // 800CA604
  c->r[12]=R32(c->r[3]+0x00000004u); // 800CA608
  c->r[9]=R32(c->r[30]+0x00000848u); // 800CA60C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CA610
  c->r[10]=R32(c->r[30]+0x00000834u); // 800CA614
  c->ctr=c->r[12]; // 800CA618
  if (true) { c->lr=0x800CA620u; dispatch(c,c->ctr); } // 800CA61C
  c->r[3]=R32(c->r[30]+0x0000083Cu); // 800CA620
  c->r[0]=c->r[3]+0x00000001u; // 800CA624
  W32(c->r[30]+0x0000083Cu,c->r[0]); // 800CA628
  goto L_800CA634; // 800CA62C
L_800CA630:;
  c->r[29]=0u+0xFFFFFFFFu; // 800CA630
L_800CA634:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 800CA634
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800CA638
  c->r[4]=R32(c->r[30]+0x00000844u); // 800CA63C
  c->r[3]=c->r[30]|c->r[30]; // 800CA640
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CA644
  c->r[24]=R32(c->r[4]+c->r[0]); // 800CA648
  c->ctr=c->r[12]; // 800CA64C
  if (true) { c->lr=0x800CA654u; dispatch(c,c->ctr); } // 800CA650
  c->r[4]=c->r[28]+0x0000007Cu; // 800CA654
  c->lr=0x800CA65Cu; f_8002C058(c); // 800CA658
  c->r[12]=R32(c->r[30]+0x00000010u); // 800CA65C
  c->r[26]=c->r[3]|c->r[3]; // 800CA660
  c->r[3]=c->r[30]|c->r[30]; // 800CA664
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CA668
  c->ctr=c->r[12]; // 800CA66C
  if (true) { c->lr=0x800CA674u; dispatch(c,c->ctr); } // 800CA670
  c->r[4]=c->r[28]+0x00000040u; // 800CA674
  c->lr=0x800CA67Cu; f_8002C058(c); // 800CA678
  W32(c->r[24]+0x00000050u,c->r[3]); // 800CA67C
  c->r[5]=0u+0x00000000u; // 800CA680
  W32(c->r[24]+0x00000060u,c->r[26]); // 800CA684
  goto L_800CA6A0; // 800CA688
L_800CA68C:;
  c->r[4]=c->r[28]+c->r[5]; // 800CA68C
  c->r[3]=c->r[24]+c->r[5]; // 800CA690
  c->r[0]=R8(c->r[4]+0x00000220u); // 800CA694
  c->r[5]=c->r[5]+0x00000001u; // 800CA698
  W8(c->r[3]+0x000000BCu,c->r[0]); // 800CA69C
L_800CA6A0:;
  cmps(c,0,(int32_t)c->r[5],32); // 800CA6A0
  if (crb(c,0)) { IRQCHK(c); goto L_800CA68C; } // 800CA6A4
  c->r[4]=c->r[29]|c->r[29]; // 800CA6A8
  c->r[3]=c->r[30]+0x00000830u; // 800CA6AC
  c->lr=0x800CA6B4u; f_800CA348(c); // 800CA6B0
  c->r[3]=0u+0x00000000u; // 800CA6B4
  c->r[0]=0u+0x00000007u; // 800CA6B8
  W32(c->r[31]+0x00000068u,c->r[3]); // 800CA6BC
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800CA6C0
  c->r[4]=c->r[31]+0x00000064u; // 800CA6C4
  c->ctr=c->r[0]; // 800CA6C8
L_800CA6CC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CA6CC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CA6D0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CA6D4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CA6D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA6CC; } // 800CA6DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CA6E0
  c->r[10]=c->r[31]|c->r[31]; // 800CA6E4
  c->r[11]=c->r[10]+0x000000D0u; // 800CA6E8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CA6EC
  c->lr=0x800CA6F4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CA6F0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CA6F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CA6F8
  c->r[1]=c->r[10]|c->r[10]; // 800CA6FC
  c->lr=c->r[0]; // 800CA700
  return; // 800CA704
}

// fn_800CA708
void f_800CA708(Ctx* __restrict c) {
  trace_call(0x800CA708u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA708
  c->r[0]=c->lr; // 800CA70C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CA710
  c->r[11]=c->r[1]+0x00000090u; // 800CA714
  c->lr=0x800CA71Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CA718
  c->r[28]=c->r[3]|c->r[3]; // 800CA71C
  c->r[3]=c->r[5]|c->r[5]; // 800CA720
  c->r[29]=c->r[6]|c->r[6]; // 800CA724
  c->lr=0x800CA72Cu; f_80068A78(c); // 800CA728
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA72C
  c->r[30]=c->r[3]|c->r[3]; // 800CA730
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA734
  c->r[3]=c->r[1]+0x0000002Cu; // 800CA738
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA73C
  c->lr=0x800CA744u; f_800521A0(c); // 800CA740
  {uint32_t ea=c->r[29]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA744
  c->r[3]=c->r[1]+0x00000020u; // 800CA748
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA74C
  {uint32_t ea=c->r[29]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA750
  c->lr=0x800CA758u; f_800521A0(c); // 800CA754
  c->r[3]=c->r[30]+0x00000830u; // 800CA758
  c->r[4]=c->r[29]+0x00000004u; // 800CA75C
  c->lr=0x800CA764u; f_800CA2D4(c); // 800CA760
  cmps(c,0,(int32_t)c->r[3],-1); // 800CA764
  c->r[31]=c->r[3]|c->r[3]; // 800CA768
  if (!crb(c,2)) { goto L_800CA7A8; } // 800CA76C
  c->r[3]=c->r[1]+0x00000008u; // 800CA770
  c->r[4]=c->r[1]+0x00000020u; // 800CA774
  c->lr=0x800CA77Cu; f_8003F484(c); // 800CA778
  c->r[31]=c->r[3]|c->r[3]; // 800CA77C
  c->r[3]=c->r[1]+0x00000014u; // 800CA780
  c->r[4]=c->r[1]+0x0000002Cu; // 800CA784
  c->lr=0x800CA78Cu; f_8003F484(c); // 800CA788
  c->r[6]=c->r[3]|c->r[3]; // 800CA78C
  c->r[7]=c->r[31]|c->r[31]; // 800CA790
  c->r[3]=c->r[30]+0x00000830u; // 800CA794
  c->r[4]=c->r[29]+0x00000004u; // 800CA798
  c->r[5]=c->r[29]+0x00000040u; // 800CA79C
  c->lr=0x800CA7A4u; f_800CA844(c); // 800CA7A0
  c->r[31]=c->r[3]|c->r[3]; // 800CA7A4
L_800CA7A8:;
  c->r[3]=R32(c->r[30]+0x00000844u); // 800CA7A8
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800CA7AC
  c->r[4]=c->r[29]+0x000001E4u; // 800CA7B0
  c->r[5]=0u+0x00000002u; // 800CA7B4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CA7B8
  c->lr=0x800CA7C0u; f_800CA818(c); // 800CA7BC
  c->r[4]=c->r[31]|c->r[31]; // 800CA7C0
  c->r[3]=c->r[30]+0x00000830u; // 800CA7C4
  c->lr=0x800CA7CCu; f_800CA348(c); // 800CA7C8
  c->r[3]=0u+0x00000000u; // 800CA7CC
  c->r[0]=0u+0x00000007u; // 800CA7D0
  W32(c->r[1]+0x00000038u,c->r[3]); // 800CA7D4
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800CA7D8
  c->r[4]=c->r[1]+0x00000034u; // 800CA7DC
  c->ctr=c->r[0]; // 800CA7E0
L_800CA7E4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CA7E4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CA7E8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CA7EC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CA7F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA7E4; } // 800CA7F4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CA7F8
  c->r[11]=c->r[1]+0x00000090u; // 800CA7FC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CA800
  c->lr=0x800CA808u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CA804
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CA808
  c->lr=c->r[0]; // 800CA80C
  c->r[1]=c->r[1]+0x00000090u; // 800CA810
  return; // 800CA814
}

// fn_800CA818
void f_800CA818(Ctx* __restrict c) {
  trace_call(0x800CA818u);
  c->r[0]=0u+0x00000020u; // 800CA818
  c->r[7]=0u+0x00000000u; // 800CA81C
  c->ctr=c->r[0]; // 800CA820
L_800CA824:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800CA824
  c->r[6]=c->r[3]+c->r[7]; // 800CA828
  c->r[7]=c->r[7]+0x00000001u; // 800CA82C
  c->r[4]=c->r[4]+0x00000001u; // 800CA830
  W8(c->r[6]+0x00000058u,c->r[0]); // 800CA834
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA824; } // 800CA838
  W32(c->r[3]+0x00000048u,c->r[5]); // 800CA83C
  return; // 800CA840
}

// fn_800CA844
void f_800CA844(Ctx* __restrict c) {
  trace_call(0x800CA844u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA844
  c->r[0]=c->lr; // 800CA848
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CA84C
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CA850
  c->r[31]=c->r[1]|c->r[1]; // 800CA854
  c->r[23]=c->r[3]|c->r[3]; // 800CA858
  c->r[24]=c->r[4]|c->r[4]; // 800CA85C
  c->r[25]=c->r[5]|c->r[5]; // 800CA860
  c->r[26]=c->r[6]|c->r[6]; // 800CA864
  c->r[27]=c->r[7]|c->r[7]; // 800CA868
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 800CA86C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800CA870
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800CA874
  if (!crb(c,0)) { goto L_800CA920; } // 800CA878
  c->r[3]=R32(c->r[3]+0x00000018u); // 800CA87C
  c->r[4]=0u+0x00000078u; // 800CA880
  c->lr=0x800CA888u; f_802A703C(c); // 800CA884
  cmps(c,0,(int32_t)c->r[3],0); // 800CA888
  c->r[30]=c->r[3]|c->r[3]; // 800CA88C
  if (crb(c,2)) { goto L_800CA8B0; } // 800CA890
  W32(c->r[31]+0x00000034u,c->r[1]); // 800CA894
  c->lr=0x800CA89Cu; f_801DD1EC(c); // 800CA898
  goto L_800CA8B0; // 800CA89C
  c->r[3]=0u+0x00000000u; // 800CA8A0
  c->r[4]=0u+0x00000000u; // 800CA8A4
  c->r[5]=0u+0x00000000u; // 800CA8A8
  c->lr=0x800CA8B0u; f_8028BC3C(c); // 800CA8AC
L_800CA8B0:;
  c->r[5]=R32(c->r[23]+0x00000014u); // 800CA8B0
  c->r[28]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800CA8B4
  c->r[4]=c->r[27]|c->r[27]; // 800CA8B8
  c->r[3]=c->r[31]+0x00000008u; // 800CA8BC
  W32(c->r[5]+c->r[28],c->r[30]); // 800CA8C0
  c->lr=0x800CA8C8u; f_8003F484(c); // 800CA8C4
  c->r[30]=c->r[3]|c->r[3]; // 800CA8C8
  c->r[4]=c->r[26]|c->r[26]; // 800CA8CC
  c->r[3]=c->r[31]+0x00000014u; // 800CA8D0
  c->lr=0x800CA8D8u; f_8003F484(c); // 800CA8D4
  c->r[5]=R32(c->r[23]+0x00000014u); // 800CA8D8
  c->r[7]=c->r[3]|c->r[3]; // 800CA8DC
  c->r[4]=c->r[24]|c->r[24]; // 800CA8E0
  c->r[6]=c->r[25]|c->r[25]; // 800CA8E4
  c->r[3]=R32(c->r[5]+c->r[28]); // 800CA8E8
  c->r[8]=c->r[30]|c->r[30]; // 800CA8EC
  c->r[5]=R32(c->r[23]+0x00000010u); // 800CA8F0
  c->r[12]=R32(c->r[3]+0x00000004u); // 800CA8F4
  c->r[9]=R32(c->r[23]+0x00000018u); // 800CA8F8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CA8FC
  c->r[10]=R32(c->r[23]+0x00000004u); // 800CA900
  c->ctr=c->r[12]; // 800CA904
  if (true) { c->lr=0x800CA90Cu; dispatch(c,c->ctr); } // 800CA908
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 800CA90C
  c->r[3]=c->r[29]|c->r[29]; // 800CA910
  c->r[0]=c->r[4]+0x00000001u; // 800CA914
  W32(c->r[23]+0x0000000Cu,c->r[0]); // 800CA918
  goto L_800CA924; // 800CA91C
L_800CA920:;
  c->r[3]=0u+0xFFFFFFFFu; // 800CA920
L_800CA924:;
  c->r[10]=c->r[31]|c->r[31]; // 800CA924
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA928
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CA92C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CA930
  c->r[1]=c->r[10]|c->r[10]; // 800CA934
  c->lr=c->r[0]; // 800CA938
  return; // 800CA93C
}

// fn_800CA940
void f_800CA940(Ctx* __restrict c) {
  trace_call(0x800CA940u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA940
  c->r[0]=c->lr; // 800CA944
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CA948
  c->r[11]=c->r[1]+0x00000090u; // 800CA94C
  c->lr=0x800CA954u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CA950
  c->r[28]=c->r[3]|c->r[3]; // 800CA954
  c->r[3]=c->r[5]|c->r[5]; // 800CA958
  c->r[29]=c->r[6]|c->r[6]; // 800CA95C
  c->lr=0x800CA964u; f_80068A78(c); // 800CA960
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA964
  c->r[30]=c->r[3]|c->r[3]; // 800CA968
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA96C
  c->r[3]=c->r[1]+0x0000002Cu; // 800CA970
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA974
  c->lr=0x800CA97Cu; f_800521A0(c); // 800CA978
  {uint32_t ea=c->r[29]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA97C
  c->r[3]=c->r[1]+0x00000020u; // 800CA980
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CA984
  {uint32_t ea=c->r[29]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CA988
  c->lr=0x800CA990u; f_800521A0(c); // 800CA98C
  c->r[3]=c->r[30]+0x00000830u; // 800CA990
  c->r[4]=c->r[29]+0x00000004u; // 800CA994
  c->lr=0x800CA99Cu; f_800CA2D4(c); // 800CA998
  cmps(c,0,(int32_t)c->r[3],-1); // 800CA99C
  c->r[31]=c->r[3]|c->r[3]; // 800CA9A0
  if (!crb(c,2)) { goto L_800CA9E0; } // 800CA9A4
  c->r[3]=c->r[1]+0x00000008u; // 800CA9A8
  c->r[4]=c->r[1]+0x00000020u; // 800CA9AC
  c->lr=0x800CA9B4u; f_8003F484(c); // 800CA9B0
  c->r[31]=c->r[3]|c->r[3]; // 800CA9B4
  c->r[3]=c->r[1]+0x00000014u; // 800CA9B8
  c->r[4]=c->r[1]+0x0000002Cu; // 800CA9BC
  c->lr=0x800CA9C4u; f_8003F484(c); // 800CA9C0
  c->r[6]=c->r[3]|c->r[3]; // 800CA9C4
  c->r[7]=c->r[31]|c->r[31]; // 800CA9C8
  c->r[3]=c->r[30]+0x00000830u; // 800CA9CC
  c->r[4]=c->r[29]+0x00000004u; // 800CA9D0
  c->r[5]=c->r[29]+0x00000040u; // 800CA9D4
  c->lr=0x800CA9DCu; f_800CA844(c); // 800CA9D8
  c->r[31]=c->r[3]|c->r[3]; // 800CA9DC
L_800CA9E0:;
  c->r[3]=R32(c->r[30]+0x00000844u); // 800CA9E0
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800CA9E4
  c->r[4]=c->r[29]+0x000001E4u; // 800CA9E8
  c->r[5]=0u+0x00000001u; // 800CA9EC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CA9F0
  c->lr=0x800CA9F8u; f_800CA818(c); // 800CA9F4
  c->r[4]=c->r[31]|c->r[31]; // 800CA9F8
  c->r[3]=c->r[30]+0x00000830u; // 800CA9FC
  c->lr=0x800CAA04u; f_800CA348(c); // 800CAA00
  c->r[3]=0u+0x00000000u; // 800CAA04
  c->r[0]=0u+0x00000007u; // 800CAA08
  W32(c->r[1]+0x00000038u,c->r[3]); // 800CAA0C
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800CAA10
  c->r[4]=c->r[1]+0x00000034u; // 800CAA14
  c->ctr=c->r[0]; // 800CAA18
L_800CAA1C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CAA1C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CAA20
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CAA24
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CAA28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAA1C; } // 800CAA2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CAA30
  c->r[11]=c->r[1]+0x00000090u; // 800CAA34
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CAA38
  c->lr=0x800CAA40u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CAA3C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CAA40
  c->lr=c->r[0]; // 800CAA44
  c->r[1]=c->r[1]+0x00000090u; // 800CAA48
  return; // 800CAA4C
}

// fn_800CAA50
void f_800CAA50(Ctx* __restrict c) {
  trace_call(0x800CAA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAA50
  c->r[0]=c->lr; // 800CAA54
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CAA58
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CAA5C
  c->r[31]=c->r[3]|c->r[3]; // 800CAA60
  c->r[3]=c->r[5]|c->r[5]; // 800CAA64
  c->lr=0x800CAA6Cu; f_80068A78(c); // 800CAA68
  {uint32_t ea=c->r[13]+0xFFFF8958u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAA6C
  {uint32_t ea=c->r[2]+0xFFFF8F20u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CAA70
  fcmp(c,0,c->f[1],c->f[0]); // 800CAA74
  c->r[4]=c->cr; // 800CAA78
  c->r[3]=c->r[1]+0x00000008u; // 800CAA7C
  c->r[4]=rotl(c->r[4],2)&0x00000001u; // 800CAA80
  c->lr=0x800CAA88u; f_800BDBB4(c); // 800CAA84
  c->r[0]=0u+0x00000007u; // 800CAA88
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800CAA8C
  c->r[4]=c->r[1]+0x00000004u; // 800CAA90
  c->ctr=c->r[0]; // 800CAA94
L_800CAA98:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CAA98
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CAA9C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CAAA0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CAAA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAA98; } // 800CAAA8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CAAAC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CAAB0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CAAB4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CAAB8
  c->lr=c->r[0]; // 800CAABC
  c->r[1]=c->r[1]+0x00000050u; // 800CAAC0
  return; // 800CAAC4
}

// fn_800CAAC8
void f_800CAAC8(Ctx* __restrict c) {
  trace_call(0x800CAAC8u);
  {uint32_t ea=c->r[1]+0xFFFFFE50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAAC8
  c->r[0]=c->lr; // 800CAACC
  W32(c->r[1]+0x000001B4u,c->r[0]); // 800CAAD0
  c->r[11]=c->r[1]+0x000001B0u; // 800CAAD4
  c->lr=0x800CAADCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CAAD8
  c->r[31]=c->r[1]|c->r[1]; // 800CAADC
  c->r[30]=c->r[3]|c->r[3]; // 800CAAE0
  c->r[3]=c->r[5]|c->r[5]; // 800CAAE4
  c->r[25]=c->r[6]|c->r[6]; // 800CAAE8
  c->lr=0x800CAAF0u; f_80068A78(c); // 800CAAEC
  {uint32_t ea=c->r[25]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAAF0
  c->r[26]=c->r[3]|c->r[3]; // 800CAAF4
  {uint32_t ea=c->r[25]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CAAF8
  c->r[3]=c->r[31]+0x00000058u; // 800CAAFC
  {uint32_t ea=c->r[25]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CAB00
  c->lr=0x800CAB08u; f_800521A0(c); // 800CAB04
  {uint32_t ea=c->r[25]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAB08
  c->r[3]=c->r[31]+0x0000004Cu; // 800CAB0C
  {uint32_t ea=c->r[25]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CAB10
  {uint32_t ea=c->r[25]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CAB14
  c->lr=0x800CAB1Cu; f_800521A0(c); // 800CAB18
  c->r[0]=R8(c->r[25]+0x00000004u); // 800CAB1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CAB20
  if (crb(c,2)) { goto L_800CAD44; } // 800CAB24
  cmps(c,0,(int32_t)c->r[0],64); // 800CAB28
  if (!crb(c,2)) { goto L_800CAC24; } // 800CAB2C
  c->r[3]=c->r[26]+0x00000830u; // 800CAB30
  c->r[4]=c->r[25]+0x00000004u; // 800CAB34
  c->lr=0x800CAB3Cu; f_800CA2D4(c); // 800CAB38
  cmps(c,0,(int32_t)c->r[3],-1); // 800CAB3C
  if (!crb(c,2)) { goto L_800CAC14; } // 800CAB40
  c->r[3]=c->r[31]+0x00000034u; // 800CAB44
  c->r[4]=c->r[31]+0x0000004Cu; // 800CAB48
  c->lr=0x800CAB50u; f_8003F484(c); // 800CAB4C
  c->r[3]=c->r[31]+0x00000040u; // 800CAB50
  c->r[4]=c->r[31]+0x00000058u; // 800CAB54
  c->lr=0x800CAB5Cu; f_8003F484(c); // 800CAB58
  c->r[28]=R32(c->r[26]+0x0000083Cu); // 800CAB5C
  c->r[0]=R32(c->r[26]+0x00000838u); // 800CAB60
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800CAB64
  if (!crb(c,0)) { goto L_800CAC0C; } // 800CAB68
  c->r[3]=R32(c->r[26]+0x00000848u); // 800CAB6C
  c->r[4]=0u+0x00000090u; // 800CAB70
  c->lr=0x800CAB78u; f_802A703C(c); // 800CAB74
  cmps(c,0,(int32_t)c->r[3],0); // 800CAB78
  c->r[29]=c->r[3]|c->r[3]; // 800CAB7C
  if (crb(c,2)) { goto L_800CABA0; } // 800CAB80
  W32(c->r[31]+0x00000078u,c->r[1]); // 800CAB84
  c->lr=0x800CAB8Cu; f_801DC310(c); // 800CAB88
  goto L_800CABA0; // 800CAB8C
  c->r[3]=0u+0x00000000u; // 800CAB90
  c->r[4]=0u+0x00000000u; // 800CAB94
  c->r[5]=0u+0x00000000u; // 800CAB98
  c->lr=0x800CABA0u; f_8028BC3C(c); // 800CAB9C
L_800CABA0:;
  c->r[5]=R32(c->r[26]+0x00000844u); // 800CABA0
  c->r[27]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800CABA4
  c->r[3]=c->r[31]+0x0000001Cu; // 800CABA8
  c->r[4]=c->r[31]+0x00000034u; // 800CABAC
  W32(c->r[5]+c->r[27],c->r[29]); // 800CABB0
  c->lr=0x800CABB8u; f_8003F484(c); // 800CABB4
  c->r[29]=c->r[3]|c->r[3]; // 800CABB8
  c->r[3]=c->r[31]+0x00000010u; // 800CABBC
  c->r[4]=c->r[31]+0x00000040u; // 800CABC0
  c->lr=0x800CABC8u; f_8003F484(c); // 800CABC4
  c->r[5]=R32(c->r[26]+0x00000844u); // 800CABC8
  c->r[7]=c->r[3]|c->r[3]; // 800CABCC
  c->r[8]=c->r[29]|c->r[29]; // 800CABD0
  c->r[4]=c->r[25]+0x00000004u; // 800CABD4
  c->r[3]=R32(c->r[5]+c->r[27]); // 800CABD8
  c->r[6]=c->r[25]+0x00000040u; // 800CABDC
  c->r[5]=R32(c->r[26]+0x00000840u); // 800CABE0
  c->r[12]=R32(c->r[3]+0x00000004u); // 800CABE4
  c->r[9]=R32(c->r[26]+0x00000848u); // 800CABE8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CABEC
  c->r[10]=R32(c->r[26]+0x00000834u); // 800CABF0
  c->ctr=c->r[12]; // 800CABF4
  if (true) { c->lr=0x800CABFCu; dispatch(c,c->ctr); } // 800CABF8
  c->r[3]=R32(c->r[26]+0x0000083Cu); // 800CABFC
  c->r[0]=c->r[3]+0x00000001u; // 800CAC00
  W32(c->r[26]+0x0000083Cu,c->r[0]); // 800CAC04
  goto L_800CAC10; // 800CAC08
L_800CAC0C:;
  c->r[28]=0u+0xFFFFFFFFu; // 800CAC0C
L_800CAC10:;
  c->r[3]=c->r[28]|c->r[28]; // 800CAC10
L_800CAC14:;
  c->r[4]=c->r[3]|c->r[3]; // 800CAC14
  c->r[3]=c->r[26]+0x00000830u; // 800CAC18
  c->lr=0x800CAC20u; f_800CA348(c); // 800CAC1C
  goto L_800CAD44; // 800CAC20
L_800CAC24:;
  c->lr=0x800CAC28u; f_80051FF4(c); // 800CAC24
  c->r[4]=c->r[3]|c->r[3]; // 800CAC28
  c->r[3]=c->r[31]+0x00000148u; // 800CAC2C
  c->r[5]=c->r[25]+0x00000004u; // 800CAC30
  c->r[6]=0u+0x00000001u; // 800CAC34
  c->lr=0x800CAC3Cu; f_8013DB40(c); // 800CAC38
  c->r[3]=c->r[31]+0x00000148u; // 800CAC3C
  c->lr=0x800CAC44u; f_80146F08(c); // 800CAC40
  cmps(c,0,(int32_t)c->r[3],0); // 800CAC44
  if (crb(c,2)) { goto L_800CAD44; } // 800CAC48
  c->r[12]=R32(c->r[26]+0x00000010u); // 800CAC4C
  c->r[3]=c->r[26]|c->r[26]; // 800CAC50
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CAC54
  c->ctr=c->r[12]; // 800CAC58
  if (true) { c->lr=0x800CAC60u; dispatch(c,c->ctr); } // 800CAC5C
  W32(c->r[31]+0x00000008u,c->r[3]); // 800CAC60
  c->r[5]=0u+0xE0000000u; // 800CAC64
  c->r[3]=c->r[31]+0x00000008u; // 800CAC68
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800CAC6C
  c->r[4]=c->r[5]+0x00000002u; // 800CAC70
  c->lr=0x800CAC78u; f_8003EDD0(c); // 800CAC74
  cmps(c,0,(int32_t)c->r[3],0); // 800CAC78
  if (crb(c,2)) { goto L_800CAC8C; } // 800CAC7C
  {uint32_t ea=c->r[26]+0x00000C54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAC80
  c->r[3]=c->r[31]+0x00000148u; // 800CAC84
  c->lr=0x800CAC8Cu; f_801478F8(c); // 800CAC88
L_800CAC8C:;
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAC8C
  c->r[3]=c->r[31]+0x00000028u; // 800CAC90
  c->f[2]=c->f[1]; // 800CAC94
  c->f[3]=c->f[1]; // 800CAC98
  c->lr=0x800CACA0u; f_800521A0(c); // 800CAC9C
  c->r[4]=c->r[3]|c->r[3]; // 800CACA0
  c->r[3]=c->r[31]+0x00000118u; // 800CACA4
  c->r[5]=c->r[31]+0x0000004Cu; // 800CACA8
  c->r[6]=c->r[31]+0x00000058u; // 800CACAC
  c->lr=0x800CACB4u; f_8007520C(c); // 800CACB0
  c->r[12]=R32(c->r[26]+0x00000010u); // 800CACB4
  c->r[3]=c->r[26]|c->r[26]; // 800CACB8
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CACBC
  c->ctr=c->r[12]; // 800CACC0
  if (true) { c->lr=0x800CACC8u; dispatch(c,c->ctr); } // 800CACC4
  c->r[4]=c->r[3]|c->r[3]; // 800CACC8
  c->r[3]=c->r[31]+0x000000E8u; // 800CACCC
  c->r[12]=R32(c->r[4]+0x00000000u); // 800CACD0
  c->r[5]=c->r[25]+0x00000040u; // 800CACD4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800CACD8
  c->ctr=c->r[12]; // 800CACDC
  if (true) { c->lr=0x800CACE4u; dispatch(c,c->ctr); } // 800CACE0
  c->r[3]=c->r[31]+0x000000E8u; // 800CACE4
  c->r[4]=c->r[31]+0x00000118u; // 800CACE8
  c->r[5]=c->r[31]+0x0000007Cu; // 800CACEC
  c->lr=0x800CACF4u; f_802646E0(c); // 800CACF0
  c->r[0]=0u+0x00000006u; // 800CACF4
  c->r[5]=c->r[31]+0x000000E4u; // 800CACF8
  c->r[4]=c->r[31]+0x00000078u; // 800CACFC
  c->ctr=c->r[0]; // 800CAD00
L_800CAD04:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CAD04
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CAD08
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CAD0C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CAD10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAD04; } // 800CAD14
  c->r[0]=0u+0x00000006u; // 800CAD18
  c->r[5]=c->r[31]+0x00000144u; // 800CAD1C
  c->r[4]=c->r[31]+0x000000E4u; // 800CAD20
  c->ctr=c->r[0]; // 800CAD24
L_800CAD28:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CAD28
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CAD2C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CAD30
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CAD34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAD28; } // 800CAD38
  c->r[3]=c->r[31]+0x00000148u; // 800CAD3C
  c->lr=0x800CAD44u; f_80146A94(c); // 800CAD40
L_800CAD44:;
  c->r[3]=0u+0x00000000u; // 800CAD44
  c->r[0]=0u+0x00000007u; // 800CAD48
  W32(c->r[31]+0x000000ACu,c->r[3]); // 800CAD4C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800CAD50
  c->r[4]=c->r[31]+0x000000A8u; // 800CAD54
  c->ctr=c->r[0]; // 800CAD58
L_800CAD5C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CAD5C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CAD60
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CAD64
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CAD68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAD5C; } // 800CAD6C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CAD70
  c->r[10]=c->r[31]|c->r[31]; // 800CAD74
  c->r[11]=c->r[10]+0x000001B0u; // 800CAD78
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CAD7C
  c->lr=0x800CAD84u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CAD80
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CAD84
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CAD88
  c->r[1]=c->r[10]|c->r[10]; // 800CAD8C
  c->lr=c->r[0]; // 800CAD90
  return; // 800CAD94
}

// fn_800CAD98
void f_800CAD98(Ctx* __restrict c) {
  trace_call(0x800CAD98u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAD98
  c->r[0]=c->lr; // 800CAD9C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800CADA0
  c->r[11]=c->r[1]+0x000000D0u; // 800CADA4
  c->lr=0x800CADACu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CADA8
  c->r[31]=c->r[1]|c->r[1]; // 800CADAC
  c->r[25]=c->r[3]|c->r[3]; // 800CADB0
  c->r[3]=c->r[5]|c->r[5]; // 800CADB4
  c->r[26]=c->r[6]|c->r[6]; // 800CADB8
  c->lr=0x800CADC0u; f_80068A78(c); // 800CADBC
  {uint32_t ea=c->r[26]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CADC0
  c->r[29]=c->r[3]|c->r[3]; // 800CADC4
  {uint32_t ea=c->r[26]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CADC8
  c->r[3]=c->r[31]+0x00000044u; // 800CADCC
  {uint32_t ea=c->r[26]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CADD0
  c->lr=0x800CADD8u; f_800521A0(c); // 800CADD4
  {uint32_t ea=c->r[26]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CADD8
  c->r[3]=c->r[31]+0x00000038u; // 800CADDC
  {uint32_t ea=c->r[26]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CADE0
  {uint32_t ea=c->r[26]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CADE4
  c->lr=0x800CADECu; f_800521A0(c); // 800CADE8
  c->r[3]=c->r[29]+0x00000830u; // 800CADEC
  c->r[4]=c->r[26]+0x00000004u; // 800CADF0
  c->lr=0x800CADF8u; f_800CA2D4(c); // 800CADF4
  cmps(c,0,(int32_t)c->r[3],-1); // 800CADF8
  if (!crb(c,2)) { goto L_800CAED0; } // 800CADFC
  c->r[3]=c->r[31]+0x00000020u; // 800CAE00
  c->r[4]=c->r[31]+0x00000038u; // 800CAE04
  c->lr=0x800CAE0Cu; f_8003F484(c); // 800CAE08
  c->r[3]=c->r[31]+0x0000002Cu; // 800CAE0C
  c->r[4]=c->r[31]+0x00000044u; // 800CAE10
  c->lr=0x800CAE18u; f_8003F484(c); // 800CAE14
  c->r[28]=R32(c->r[29]+0x0000083Cu); // 800CAE18
  c->r[0]=R32(c->r[29]+0x00000838u); // 800CAE1C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800CAE20
  if (!crb(c,0)) { goto L_800CAEC8; } // 800CAE24
  c->r[3]=R32(c->r[29]+0x00000848u); // 800CAE28
  c->r[4]=0u+0x00000084u; // 800CAE2C
  c->lr=0x800CAE34u; f_802A703C(c); // 800CAE30
  cmps(c,0,(int32_t)c->r[3],0); // 800CAE34
  c->r[30]=c->r[3]|c->r[3]; // 800CAE38
  if (crb(c,2)) { goto L_800CAE5C; } // 800CAE3C
  W32(c->r[31]+0x00000064u,c->r[1]); // 800CAE40
  c->lr=0x800CAE48u; f_801DC560(c); // 800CAE44
  goto L_800CAE5C; // 800CAE48
  c->r[3]=0u+0x00000000u; // 800CAE4C
  c->r[4]=0u+0x00000000u; // 800CAE50
  c->r[5]=0u+0x00000000u; // 800CAE54
  c->lr=0x800CAE5Cu; f_8028BC3C(c); // 800CAE58
L_800CAE5C:;
  c->r[5]=R32(c->r[29]+0x00000844u); // 800CAE5C
  c->r[27]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800CAE60
  c->r[3]=c->r[31]+0x00000014u; // 800CAE64
  c->r[4]=c->r[31]+0x00000020u; // 800CAE68
  W32(c->r[5]+c->r[27],c->r[30]); // 800CAE6C
  c->lr=0x800CAE74u; f_8003F484(c); // 800CAE70
  c->r[30]=c->r[3]|c->r[3]; // 800CAE74
  c->r[3]=c->r[31]+0x00000008u; // 800CAE78
  c->r[4]=c->r[31]+0x0000002Cu; // 800CAE7C
  c->lr=0x800CAE84u; f_8003F484(c); // 800CAE80
  c->r[5]=R32(c->r[29]+0x00000844u); // 800CAE84
  c->r[7]=c->r[3]|c->r[3]; // 800CAE88
  c->r[8]=c->r[30]|c->r[30]; // 800CAE8C
  c->r[4]=c->r[26]+0x00000004u; // 800CAE90
  c->r[3]=R32(c->r[5]+c->r[27]); // 800CAE94
  c->r[6]=c->r[26]+0x00000040u; // 800CAE98
  c->r[5]=R32(c->r[29]+0x00000840u); // 800CAE9C
  c->r[12]=R32(c->r[3]+0x00000004u); // 800CAEA0
  c->r[9]=R32(c->r[29]+0x00000848u); // 800CAEA4
  c->r[12]=R32(c->r[12]+0x00000018u); // 800CAEA8
  c->r[10]=R32(c->r[29]+0x00000834u); // 800CAEAC
  c->ctr=c->r[12]; // 800CAEB0
  if (true) { c->lr=0x800CAEB8u; dispatch(c,c->ctr); } // 800CAEB4
  c->r[3]=R32(c->r[29]+0x0000083Cu); // 800CAEB8
  c->r[0]=c->r[3]+0x00000001u; // 800CAEBC
  W32(c->r[29]+0x0000083Cu,c->r[0]); // 800CAEC0
  goto L_800CAECC; // 800CAEC4
L_800CAEC8:;
  c->r[28]=0u+0xFFFFFFFFu; // 800CAEC8
L_800CAECC:;
  c->r[3]=c->r[28]|c->r[28]; // 800CAECC
L_800CAED0:;
  c->r[4]=c->r[3]|c->r[3]; // 800CAED0
  c->r[3]=c->r[29]+0x00000830u; // 800CAED4
  c->lr=0x800CAEDCu; f_800CA348(c); // 800CAED8
  c->r[3]=0u+0x00000000u; // 800CAEDC
  c->r[0]=0u+0x00000007u; // 800CAEE0
  W32(c->r[31]+0x00000068u,c->r[3]); // 800CAEE4
  c->r[5]=c->r[25]+0xFFFFFFFCu; // 800CAEE8
  c->r[4]=c->r[31]+0x00000064u; // 800CAEEC
  c->ctr=c->r[0]; // 800CAEF0
L_800CAEF4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CAEF4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CAEF8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CAEFC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CAF00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAEF4; } // 800CAF04
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CAF08
  c->r[10]=c->r[31]|c->r[31]; // 800CAF0C
  c->r[11]=c->r[10]+0x000000D0u; // 800CAF10
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CAF14
  c->lr=0x800CAF1Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CAF18
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CAF1C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CAF20
  c->r[1]=c->r[10]|c->r[10]; // 800CAF24
  c->lr=c->r[0]; // 800CAF28
  return; // 800CAF2C
}

// fn_800CAF30
void f_800CAF30(Ctx* __restrict c) {
  trace_call(0x800CAF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAF30
  c->r[0]=c->lr; // 800CAF34
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CAF38
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CAF3C
  c->r[31]=c->r[3]|c->r[3]; // 800CAF40
  c->r[3]=c->r[5]|c->r[5]; // 800CAF44
  c->lr=0x800CAF4Cu; f_80068A78(c); // 800CAF48
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800CAF4C
  c->r[6]=0u+0x00000000u; // 800CAF50
  c->r[0]=0u+0x00000007u; // 800CAF54
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800CAF58
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800CAF5C
  c->r[4]=c->r[1]+0x00000004u; // 800CAF60
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CAF64
  c->ctr=c->r[0]; // 800CAF68
L_800CAF6C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CAF6C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CAF70
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CAF74
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CAF78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CAF6C; } // 800CAF7C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CAF80
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CAF84
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CAF88
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CAF8C
  c->lr=c->r[0]; // 800CAF90
  c->r[1]=c->r[1]+0x00000050u; // 800CAF94
  return; // 800CAF98
}

// fn_800CAF9C
void f_800CAF9C(Ctx* __restrict c) {
  trace_call(0x800CAF9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAF9C
  c->r[0]=c->lr; // 800CAFA0
  W32(c->r[1]+0x00000084u,c->r[0]); // 800CAFA4
  c->r[11]=c->r[1]+0x00000080u; // 800CAFA8
  c->lr=0x800CAFB0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CAFAC
  c->r[30]=c->r[5]|c->r[5]; // 800CAFB0
  c->r[28]=c->r[3]|c->r[3]; // 800CAFB4
  c->r[29]=c->r[6]|c->r[6]; // 800CAFB8
  c->r[3]=c->r[30]|c->r[30]; // 800CAFBC
  c->lr=0x800CAFC4u; f_80068A78(c); // 800CAFC0
  c->r[0]=R32(c->r[30]+0x00000008u); // 800CAFC4
  c->r[31]=c->r[3]|c->r[3]; // 800CAFC8
  cmps(c,0,(int32_t)c->r[0],0); // 800CAFCC
  if (crb(c,2)) { goto L_800CB010; } // 800CAFD0
  c->r[3]=c->r[0]|c->r[0]; // 800CAFD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CAFD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CAFDC
  c->ctr=c->r[12]; // 800CAFE0
  if (true) { c->lr=0x800CAFE8u; dispatch(c,c->ctr); } // 800CAFE4
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800CAFE8
  if (crb(c,2)) { goto L_800CB010; } // 800CAFEC
  c->r[30]=R32(c->r[30]+0x00000008u); // 800CAFF0
  c->r[3]=c->r[1]+0x00000020u; // 800CAFF4
  c->r[4]=c->r[30]+0x00000018u; // 800CAFF8
  c->lr=0x800CB000u; f_8003F468(c); // 800CAFFC
  c->r[3]=c->r[1]+0x00000014u; // 800CB000
  c->r[4]=c->r[30]+0x00000024u; // 800CB004
  c->lr=0x800CB00Cu; f_8003F468(c); // 800CB008
  goto L_800CB058; // 800CB00C
L_800CB010:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 800CB010
  cmps(c,0,(int32_t)c->r[3],0); // 800CB014
  if (crb(c,2)) { goto L_800CB058; } // 800CB018
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CB01C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CB020
  c->ctr=c->r[12]; // 800CB024
  if (true) { c->lr=0x800CB02Cu; dispatch(c,c->ctr); } // 800CB028
  cmps(c,0,(int32_t)c->r[3],5); // 800CB02C
  if (!crb(c,2)) { goto L_800CB058; } // 800CB030
  c->r[4]=R32(c->r[30]+0x00000008u); // 800CB034
  c->r[3]=c->r[1]+0x00000020u; // 800CB038
  c->r[4]=c->r[4]+0x0000001Cu; // 800CB03C
  c->lr=0x800CB044u; f_8003F468(c); // 800CB040
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB044
  c->r[3]=c->r[1]+0x00000014u; // 800CB048
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CB04C
  c->f[3]=c->f[1]; // 800CB050
  c->lr=0x800CB058u; f_80065358(c); // 800CB054
L_800CB058:;
  c->r[0]=R8(c->r[29]+0x00000040u); // 800CB058
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CB05C
  if (crb(c,2)) { goto L_800CB098; } // 800CB060
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB064
  c->r[3]=c->r[31]+0x00000800u; // 800CB068
  c->r[6]=R32(c->r[1]+0x00000020u); // 800CB06C
  c->r[4]=c->r[29]+0x00000040u; // 800CB070
  c->r[7]=R32(c->r[1]+0x00000024u); // 800CB074
  c->f[2]=c->f[1]; // 800CB078
  c->r[0]=R32(c->r[1]+0x00000028u); // 800CB07C
  c->r[5]=c->r[1]+0x00000008u; // 800CB080
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CB084
  c->r[6]=0u+0x00000001u; // 800CB088
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800CB08C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CB090
  c->lr=0x800CB098u; f_800C1BA0(c); // 800CB094
L_800CB098:;
  c->r[3]=0u+0x00000000u; // 800CB098
  c->r[0]=0u+0x00000007u; // 800CB09C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800CB0A0
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800CB0A4
  c->r[4]=c->r[1]+0x00000028u; // 800CB0A8
  c->ctr=c->r[0]; // 800CB0AC
L_800CB0B0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CB0B0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CB0B4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CB0B8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CB0BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB0B0; } // 800CB0C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CB0C4
  c->r[11]=c->r[1]+0x00000080u; // 800CB0C8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CB0CC
  c->lr=0x800CB0D4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB0D0
  c->r[0]=R32(c->r[1]+0x00000084u); // 800CB0D4
  c->lr=c->r[0]; // 800CB0D8
  c->r[1]=c->r[1]+0x00000080u; // 800CB0DC
  return; // 800CB0E0
}

// fn_800CB0E4
void f_800CB0E4(Ctx* __restrict c) {
  trace_call(0x800CB0E4u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB0E4
  c->r[0]=c->lr; // 800CB0E8
  W32(c->r[1]+0x00000234u,c->r[0]); // 800CB0EC
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[31]);} // 800CB0F0
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,31,ea,0,0);} // 800CB0F4
  c->r[11]=c->r[1]+0x00000220u; // 800CB0F8
  c->lr=0x800CB100u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB0FC
  c->r[31]=c->r[1]|c->r[1]; // 800CB100
  c->r[27]=c->r[3]|c->r[3]; // 800CB104
  c->r[3]=c->r[5]|c->r[5]; // 800CB108
  c->r[28]=c->r[6]|c->r[6]; // 800CB10C
  c->lr=0x800CB114u; f_80068A78(c); // 800CB110
  c->r[12]=R32(c->r[3]+0x00000010u); // 800CB114
  c->r[26]=c->r[3]|c->r[3]; // 800CB118
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CB11C
  c->ctr=c->r[12]; // 800CB120
  if (true) { c->lr=0x800CB128u; dispatch(c,c->ctr); } // 800CB124
  c->r[4]=c->r[3]|c->r[3]; // 800CB128
  c->r[3]=c->r[31]+0x000000D4u; // 800CB12C
  c->r[12]=R32(c->r[4]+0x00000000u); // 800CB130
  c->r[5]=c->r[28]+0x00000004u; // 800CB134
  c->r[12]=R32(c->r[12]+0x00000038u); // 800CB138
  c->ctr=c->r[12]; // 800CB13C
  if (true) { c->lr=0x800CB144u; dispatch(c,c->ctr); } // 800CB140
  c->lr=0x800CB148u; f_80232150(c); // 800CB144
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB148
  c->r[4]=c->r[28]+0x00000220u; // 800CB14C
  c->lr=0x800CB154u; f_80232230(c); // 800CB150
  {uint32_t ea=c->r[26]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB154
  c->r[3]=c->r[31]+0x00000104u; // 800CB158
  c->r[4]=c->r[28]+0x00000040u; // 800CB15C
  c->r[5]=c->r[28]+0x0000007Cu; // 800CB160
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 800CB164
  c->lr=0x800CB16Cu; f_800CB408(c); // 800CB168
  c->r[3]=c->r[31]+0x00000144u; // 800CB16C
  c->r[4]=c->r[28]+0x000000B8u; // 800CB170
  c->r[5]=c->r[28]+0x000000F4u; // 800CB174
  c->lr=0x800CB17Cu; f_800CB408(c); // 800CB178
  c->r[3]=c->r[31]+0x00000184u; // 800CB17C
  c->r[4]=c->r[28]+0x00000130u; // 800CB180
  c->r[5]=c->r[28]+0x0000016Cu; // 800CB184
  c->lr=0x800CB18Cu; f_800CB408(c); // 800CB188
  c->r[3]=c->r[31]+0x000001C4u; // 800CB18C
  c->r[4]=c->r[28]+0x000001A8u; // 800CB190
  c->r[5]=c->r[28]+0x000001E4u; // 800CB194
  c->lr=0x800CB19Cu; f_800CB408(c); // 800CB198
  c->r[3]=0u+0x80440000u; // 800CB19C
  {uint32_t ea=c->r[31]+0x00000204u; WF32(ea,c->f[31]);} // 800CB1A0
  c->r[3]=c->r[3]+0xFFFFA720u; // 800CB1A4
  c->r[4]=0u+0x00000001u; // 800CB1A8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800CB1AC
  c->lr=0x800CB1B4u; f_803819F8(c); // 800CB1B0
  W32(c->r[31]+0x00000010u,c->r[3]); // 800CB1B4
  c->r[3]=c->r[31]+0x00000010u; // 800CB1B8
  c->r[4]=c->r[31]+0x000000A4u; // 800CB1BC
  c->lr=0x800CB1C4u; f_8037D32C(c); // 800CB1C0
  c->r[3]=c->r[31]+0x000000A4u; // 800CB1C4
  c->r[4]=c->r[3]|c->r[3]; // 800CB1C8
  c->lr=0x800CB1D0u; f_80264994(c); // 800CB1CC
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB1D0
  c->r[3]=c->r[31]+0x00000044u; // 800CB1D4
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CB1D8
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CB1DC
  c->lr=0x800CB1E4u; f_800521A0(c); // 800CB1E0
  {uint32_t ea=c->r[28]+0x0000025Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800CB1E4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB1E8
  fcmp(c,0,c->f[31],c->f[0]); // 800CB1EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CB1F0
  if (!crb(c,2)) { goto L_800CB1FC; } // 800CB1F4
  {uint32_t ea=c->r[2]+0xFFFF8F24u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CB1F8
L_800CB1FC:;
  c->lr=0x800CB200u; f_8003DA30(c); // 800CB1FC
  c->r[30]=c->r[3]|c->r[3]; // 800CB200
  c->r[4]=c->r[31]+0x00000024u; // 800CB204
  c->r[5]=0u+0x00000001u; // 800CB208
  c->r[6]=0u+0x00000000u; // 800CB20C
  c->lr=0x800CB214u; f_8003DFDC(c); // 800CB210
  c->r[3]=c->r[31]+0x00000024u; // 800CB214
  c->r[4]=0u+0x00000278u; // 800CB218
  c->lr=0x800CB220u; f_802A703C(c); // 800CB21C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB220
  c->r[29]=c->r[3]|c->r[3]; // 800CB224
  if (crb(c,2)) { goto L_800CB28C; } // 800CB228
  W32(c->r[31]+0x00000064u,c->r[1]); // 800CB22C
  c->lr=0x800CB234u; f_800CB498(c); // 800CB230
  c->r[5]=0u+0x00000000u; // 800CB234
  c->r[4]=0u+0x80400000u; // 800CB238
  W32(c->r[29]+0x00000048u,c->r[5]); // 800CB23C
  c->r[4]=c->r[4]+0xFFFFB51Cu; // 800CB240
  c->r[0]=c->r[4]+0x00000040u; // 800CB244
  c->r[3]=c->r[29]+0x00000190u; // 800CB248
  W32(c->r[29]+0x00000010u,c->r[4]); // 800CB24C
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 800CB250
  W32(c->r[29]+0x00000050u,c->r[5]); // 800CB254
  c->lr=0x800CB25Cu; f_80063CC0(c); // 800CB258
  c->r[3]=c->r[29]+0x000001E8u; // 800CB25C
  c->lr=0x800CB264u; f_80146A34(c); // 800CB260
  c->r[3]=0u+0x80400000u; // 800CB264
  c->r[3]=c->r[3]+0xFFFFB480u; // 800CB268
  W32(c->r[29]+0x00000010u,c->r[3]); // 800CB26C
  c->r[0]=c->r[3]+0x00000040u; // 800CB270
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 800CB274
  goto L_800CB28C; // 800CB278
  c->r[3]=0u+0x00000000u; // 800CB27C
  c->r[4]=0u+0x00000000u; // 800CB280
  c->r[5]=0u+0x00000000u; // 800CB284
  c->lr=0x800CB28Cu; f_8028BC3C(c); // 800CB288
L_800CB28C:;
  c->r[7]=R32(c->r[31]+0x00000024u); // 800CB28C
  c->r[3]=c->r[29]|c->r[29]; // 800CB290
  c->r[6]=R32(c->r[31]+0x00000028u); // 800CB294
  c->r[4]=c->r[31]+0x00000034u; // 800CB298
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 800CB29C
  c->r[0]=R32(c->r[31]+0x00000030u); // 800CB2A0
  W32(c->r[31]+0x00000034u,c->r[7]); // 800CB2A4
  W32(c->r[31]+0x00000038u,c->r[6]); // 800CB2A8
  W32(c->r[31]+0x0000003Cu,c->r[5]); // 800CB2AC
  W32(c->r[31]+0x00000040u,c->r[0]); // 800CB2B0
  c->lr=0x800CB2B8u; f_800CB44C(c); // 800CB2B4
  c->r[0]=0u+0x00000001u; // 800CB2B8
  c->r[3]=c->r[29]|c->r[29]; // 800CB2BC
  W32(c->r[29]+0x00000040u,c->r[0]); // 800CB2C0
  c->r[12]=R32(c->r[29]+0x00000010u); // 800CB2C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CB2C8
  c->ctr=c->r[12]; // 800CB2CC
  if (true) { c->lr=0x800CB2D4u; dispatch(c,c->ctr); } // 800CB2D0
  c->r[12]=R32(c->r[29]+0x00000010u); // 800CB2D4
  c->r[3]=c->r[29]|c->r[29]; // 800CB2D8
  c->r[26]=0u+0x00000001u; // 800CB2DC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CB2E0
  c->ctr=c->r[12]; // 800CB2E4
  if (true) { c->lr=0x800CB2ECu; dispatch(c,c->ctr); } // 800CB2E8
  W32(c->r[31]+0x00000014u,c->r[3]); // 800CB2EC
  c->r[5]=0u+0xE0000000u; // 800CB2F0
  c->r[3]=c->r[31]+0x00000014u; // 800CB2F4
  W32(c->r[31]+0x00000018u,c->r[4]); // 800CB2F8
  c->r[4]=c->r[5]+0x00000002u; // 800CB2FC
  c->lr=0x800CB304u; f_8003EDD0(c); // 800CB300
  cmps(c,0,(int32_t)c->r[3],0); // 800CB304
  if (!crb(c,2)) { goto L_800CB340; } // 800CB308
  c->r[12]=R32(c->r[29]+0x00000010u); // 800CB30C
  c->r[3]=c->r[29]|c->r[29]; // 800CB310
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CB314
  c->ctr=c->r[12]; // 800CB318
  if (true) { c->lr=0x800CB320u; dispatch(c,c->ctr); } // 800CB31C
  W32(c->r[31]+0x00000020u,c->r[4]); // 800CB320
  c->r[4]=0u+0x00400000u; // 800CB324
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800CB328
  c->r[3]=c->r[31]+0x0000001Cu; // 800CB32C
  c->lr=0x800CB334u; f_8003EDD0(c); // 800CB330
  cmps(c,0,(int32_t)c->r[3],0); // 800CB334
  if (!crb(c,2)) { goto L_800CB340; } // 800CB338
  c->r[26]=0u+0x00000000u; // 800CB33C
L_800CB340:;
  cmps(c,0,(int32_t)c->r[26],0); // 800CB340
  if (crb(c,2)) { goto L_800CB368; } // 800CB344
  c->r[3]=c->r[30]|c->r[30]; // 800CB348
  c->lr=0x800CB350u; f_8003ECFC(c); // 800CB34C
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800CB350
  c->r[3]=c->r[30]|c->r[30]; // 800CB354
  c->r[5]=c->r[29]|c->r[29]; // 800CB358
  c->r[4]=c->r[31]+0x0000000Cu; // 800CB35C
  c->lr=0x800CB364u; f_8003ED04(c); // 800CB360
  goto L_800CB380; // 800CB364
L_800CB368:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800CB368
  c->r[3]=c->r[30]|c->r[30]; // 800CB36C
  c->r[5]=c->r[29]|c->r[29]; // 800CB370
  c->r[4]=c->r[31]+0x00000008u; // 800CB374
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CB378
  c->lr=0x800CB380u; f_8003ED04(c); // 800CB37C
L_800CB380:;
  c->r[12]=R32(c->r[29]+0x00000010u); // 800CB380
  c->f[3]=c->f[31]; // 800CB384
  c->r[3]=c->r[29]|c->r[29]; // 800CB388
  c->r[4]=c->r[31]+0x000000D4u; // 800CB38C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800CB390
  c->r[5]=c->r[31]+0x00000044u; // 800CB394
  c->r[6]=c->r[31]+0x00000104u; // 800CB398
  {uint32_t ea=c->r[28]+0x00000298u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB39C
  {uint32_t ea=c->r[2]+0xFFFF8ED0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CB3A0
  c->ctr=c->r[12]; // 800CB3A4
  if (true) { c->lr=0x800CB3ACu; dispatch(c,c->ctr); } // 800CB3A8
  c->r[3]=0u+0x00000000u; // 800CB3AC
  c->r[0]=0u+0x00000007u; // 800CB3B0
  W32(c->r[31]+0x00000068u,c->r[3]); // 800CB3B4
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800CB3B8
  c->r[4]=c->r[31]+0x00000064u; // 800CB3BC
  c->ctr=c->r[0]; // 800CB3C0
L_800CB3C4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CB3C4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CB3C8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CB3CC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CB3D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB3C4; } // 800CB3D4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CB3D8
  c->r[10]=c->r[31]|c->r[31]; // 800CB3DC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CB3E0
  {uint32_t ea=c->r[10]+0x00000228u; psq_load(c,31,ea,0,0);} // 800CB3E4
  {uint32_t ea=c->r[31]+0x00000220u; c->f[31]=RF64(ea);} // 800CB3E8
  c->r[11]=c->r[10]+0x00000220u; // 800CB3EC
  c->lr=0x800CB3F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB3F0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CB3F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CB3F8
  c->r[1]=c->r[10]|c->r[10]; // 800CB3FC
  c->lr=c->r[0]; // 800CB400
  return; // 800CB404
}

// fn_800CB408
void f_800CB408(Ctx* __restrict c) {
  trace_call(0x800CB408u);
  c->r[0]=0u+0x00000020u; // 800CB408
  c->r[7]=0u+0x00000000u; // 800CB40C
  c->ctr=c->r[0]; // 800CB410
L_800CB414:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800CB414
  c->r[6]=c->r[3]+c->r[7]; // 800CB418
  c->r[7]=c->r[7]+0x00000001u; // 800CB41C
  c->r[5]=c->r[5]+0x00000001u; // 800CB420
  W8(c->r[6]+0x00000020u,c->r[0]); // 800CB424
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB414; } // 800CB428
  c->r[0]=0u+0x00000020u; // 800CB42C
  c->ctr=c->r[0]; // 800CB430
L_800CB434:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800CB434
  c->r[4]=c->r[4]+0x00000001u; // 800CB438
  W8(c->r[3]+0x00000000u,c->r[0]); // 800CB43C
  c->r[3]=c->r[3]+0x00000001u; // 800CB440
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB434; } // 800CB444
  return; // 800CB448
}

// fn_800CB44C
void f_800CB44C(Ctx* __restrict c) {
  trace_call(0x800CB44Cu);
  c->r[7]=R32(c->r[4]+0x00000000u); // 800CB44C
  c->r[0]=c->r[3]+0x00000018u; // 800CB450
  c->r[6]=R32(c->r[4]+0x00000004u); // 800CB454
  c->r[5]=R32(c->r[4]+0x00000008u); // 800CB458
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800CB45C
  W32(c->r[3]+0x00000018u,c->r[7]); // 800CB460
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800CB464
  W32(c->r[3]+0x00000020u,c->r[5]); // 800CB468
  W32(c->r[3]+0x00000024u,c->r[4]); // 800CB46C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800CB470
  return; // 800CB474
}

// fn_800CB478
void f_800CB478(Ctx* __restrict c) {
  trace_call(0x800CB478u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB478
  c->r[4]=0u+0x02000000u; // 800CB47C
  c->r[0]=0u+0x00000004u; // 800CB480
  c->r[3]=0u+0x00000004u; // 800CB484
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CB488
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CB48C
  c->r[1]=c->r[1]+0x00000010u; // 800CB490
  return; // 800CB494
}

// fn_800CB498
void f_800CB498(Ctx* __restrict c) {
  trace_call(0x800CB498u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB498
  c->r[0]=c->lr; // 800CB49C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CB4A0
  c->r[0]=0u+0x00000000u; // 800CB4A4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CB4A8
  c->r[31]=c->r[3]|c->r[3]; // 800CB4AC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CB4B0
  W32(c->r[1]+0x00000024u,c->r[29]); // 800CB4B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CB4B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CB4BC
  c->lr=0x800CB4C4u; f_8003F2FC(c); // 800CB4C0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CB4C4
  c->r[0]=addc(c,c->r[0],0x00000001u,0); cr0(c,c->r[0]); // 800CB4C8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CB4CC
  if (!crb(c,2)) { goto L_800CB4DC; } // 800CB4D0
  c->r[0]=0u+0x00000001u; // 800CB4D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CB4D8
L_800CB4DC:;
  c->r[7]=R32(c->r[3]+0x00000004u); // 800CB4DC
  c->r[4]=0u+0x00400000u; // 800CB4E0
  c->r[6]=c->r[4]+0x00001005u; // 800CB4E4
  c->r[5]=c->r[7]+0x00000001u; // 800CB4E8
  c->r[4]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[5])>>32); // 800CB4EC
  c->r[0]=c->r[5]-c->r[4]; // 800CB4F0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800CB4F4
  c->r[0]=c->r[0]+c->r[4]; // 800CB4F8
  c->r[0]=rotl(c->r[0],21)&0x001FFFFFu; // 800CB4FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)4092); // 800CB500
  c->r[5]=c->r[5]-c->r[0]; // 800CB504
  goto L_800CB564; // 800CB508
L_800CB50C:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800CB50C
  c->r[4]=c->r[3]+c->r[0]; // 800CB510
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CB514
  cmps(c,0,(int32_t)c->r[0],0); // 800CB518
  if (!crb(c,2)) { goto L_800CB544; } // 800CB51C
  W32(c->r[3]+0x00000004u,c->r[5]); // 800CB520
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CB524
  W32(c->r[4]+0x00000008u,c->r[0]); // 800CB528
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 800CB52C
  c->r[4]=R32(c->r[3]+0x00000000u); // 800CB530
  c->r[0]=R32(c->r[3]+0x00000004u); // 800CB534
  W32(c->r[1]+0x00000010u,c->r[4]); // 800CB538
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB53C
  goto L_800CB580; // 800CB540
L_800CB544:;
  c->r[5]=c->r[5]+0x00000001u; // 800CB544
  c->r[4]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[5])>>32); // 800CB548
  c->r[0]=c->r[5]-c->r[4]; // 800CB54C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800CB550
  c->r[0]=c->r[0]+c->r[4]; // 800CB554
  c->r[0]=rotl(c->r[0],21)&0x001FFFFFu; // 800CB558
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)4092); // 800CB55C
  c->r[5]=c->r[5]-c->r[0]; // 800CB560
L_800CB564:;
  cmpu(c,0,c->r[5],c->r[7]); // 800CB564
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB50C; } // 800CB568
  c->r[0]=0u+0x00000000u; // 800CB56C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB570
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CB574
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CB578
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB57C
L_800CB580:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 800CB580
  c->r[4]=0u+0x803F0000u; // 800CB584
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB588
  c->r[4]=c->r[4]+0x00001A80u; // 800CB58C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CB590
  c->r[3]=c->r[31]+0x00000008u; // 800CB594
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CB598
  W32(c->r[31]+0x00000000u,c->r[5]); // 800CB59C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800CB5A0
  W32(c->r[31]+0x00000010u,c->r[4]); // 800CB5A4
  c->lr=0x800CB5ACu; f_8003EBC0(c); // 800CB5A8
  c->r[30]=0u+0x00000000u; // 800CB5AC
  c->r[29]=c->r[31]+0x00000030u; // 800CB5B0
  W32(c->r[31]+0x00000014u,c->r[30]); // 800CB5B4
  c->r[3]=c->r[29]+0x00000004u; // 800CB5B8
  c->lr=0x800CB5C0u; f_8003EBC0(c); // 800CB5BC
  c->r[4]=0u+0x803F0000u; // 800CB5C0
  c->r[0]=c->r[29]+0x00000004u; // 800CB5C4
  c->r[4]=c->r[4]+0x00001B18u; // 800CB5C8
  W32(c->r[29]+0x00000000u,c->r[30]); // 800CB5CC
  c->r[3]=c->r[29]|c->r[29]; // 800CB5D0
  W32(c->r[29]+0x00000004u,c->r[0]); // 800CB5D4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800CB5D8
  W32(c->r[29]+0x0000000Cu,c->r[4]); // 800CB5DC
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 800CB5E0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CB5E4
  c->ctr=c->r[12]; // 800CB5E8
  if (true) { c->lr=0x800CB5F0u; dispatch(c,c->ctr); } // 800CB5EC
  c->r[4]=0u+0x80470000u; // 800CB5F0
  W32(c->r[31]+0x00000044u,c->r[30]); // 800CB5F4
  c->r[4]=c->r[4]+0xFFFF867Cu; // 800CB5F8
  c->r[3]=c->r[31]|c->r[31]; // 800CB5FC
  W32(c->r[31]+0x00000028u,c->r[4]); // 800CB600
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 800CB604
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CB608
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CB60C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800CB610
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CB614
  c->lr=c->r[0]; // 800CB618
  c->r[1]=c->r[1]+0x00000030u; // 800CB61C
  return; // 800CB620
}

// fn_800CB624
void f_800CB624(Ctx* __restrict c) {
  trace_call(0x800CB624u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB624
  c->r[0]=c->lr; // 800CB628
  cmps(c,0,(int32_t)c->r[3],0); // 800CB62C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB630
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CB634
  c->r[30]=c->r[3]|c->r[3]; // 800CB638
  c->r[31]=c->r[4]|c->r[4]; // 800CB63C
  if (crb(c,2)) { goto L_800CB65C; } // 800CB640
  c->r[4]=0u+0x00000000u; // 800CB644
  c->lr=0x800CB64Cu; f_8003EE48(c); // 800CB648
  cmps(c,0,(int32_t)c->r[31],0); // 800CB64C
  if (!crb(c,1)) { goto L_800CB65C; } // 800CB650
  c->r[3]=c->r[30]|c->r[30]; // 800CB654
  c->lr=0x800CB65Cu; f_802896EC(c); // 800CB658
L_800CB65C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CB65C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CB660
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB664
  c->lr=c->r[0]; // 800CB668
  c->r[1]=c->r[1]+0x00000010u; // 800CB66C
  return; // 800CB670
}

// fn_800CB674
void f_800CB674(Ctx* __restrict c) {
  trace_call(0x800CB674u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB674
  c->r[0]=c->lr; // 800CB678
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CB67C
  c->r[11]=c->r[1]+0x00000060u; // 800CB680
  c->lr=0x800CB688u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB684
  c->r[31]=c->r[5]|c->r[5]; // 800CB688
  c->r[28]=c->r[3]|c->r[3]; // 800CB68C
  c->r[29]=c->r[6]|c->r[6]; // 800CB690
  c->r[30]=0u+0x00000000u; // 800CB694
  c->r[3]=c->r[31]|c->r[31]; // 800CB698
  c->lr=0x800CB6A0u; f_8003F1D4(c); // 800CB69C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB6A0
  if (crb(c,2)) { goto L_800CB6B4; } // 800CB6A4
  c->r[3]=c->r[31]|c->r[31]; // 800CB6A8
  c->lr=0x800CB6B0u; f_80068A78(c); // 800CB6AC
  c->r[30]=c->r[3]|c->r[3]; // 800CB6B0
L_800CB6B4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CB6B4
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB6B8
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CB6BC
  c->r[3]=c->r[29]+0x00000004u; // 800CB6C0
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CB6C4
  if (crb(c,2)) { goto L_800CB6D4; } // 800CB6C8
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB6CC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 800CB6D0
L_800CB6D4:;
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB6D4
  c->r[5]=c->r[30]|c->r[30]; // 800CB6D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CB6DC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800CB6E0
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800CB6E4
  c->lr=0x800CB6ECu; f_800BC364(c); // 800CB6E8
  c->r[3]=0u+0x00000000u; // 800CB6EC
  c->r[0]=0u+0x00000007u; // 800CB6F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CB6F4
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800CB6F8
  c->r[4]=c->r[1]+0x00000004u; // 800CB6FC
  c->ctr=c->r[0]; // 800CB700
L_800CB704:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CB704
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CB708
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CB70C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CB710
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB704; } // 800CB714
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CB718
  c->r[11]=c->r[1]+0x00000060u; // 800CB71C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CB720
  c->lr=0x800CB728u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB724
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CB728
  c->lr=c->r[0]; // 800CB72C
  c->r[1]=c->r[1]+0x00000060u; // 800CB730
  return; // 800CB734
}

// fn_800CB738
void f_800CB738(Ctx* __restrict c) {
  trace_call(0x800CB738u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB738
  c->r[0]=c->lr; // 800CB73C
  W32(c->r[1]+0x00000174u,c->r[0]); // 800CB740
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[31]);} // 800CB744
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,31,ea,0,0);} // 800CB748
  c->r[11]=c->r[1]+0x00000160u; // 800CB74C
  c->lr=0x800CB754u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB750
  c->r[29]=c->r[3]|c->r[3]; // 800CB754
  c->r[3]=c->r[5]|c->r[5]; // 800CB758
  c->r[30]=c->r[6]|c->r[6]; // 800CB75C
  c->lr=0x800CB764u; f_80068A78(c); // 800CB760
  c->r[12]=R32(c->r[3]+0x00000010u); // 800CB764
  c->r[31]=c->r[3]|c->r[3]; // 800CB768
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CB76C
  c->ctr=c->r[12]; // 800CB770
  if (true) { c->lr=0x800CB778u; dispatch(c,c->ctr); } // 800CB774
  c->r[4]=c->r[3]|c->r[3]; // 800CB778
  c->r[3]=c->r[1]+0x00000064u; // 800CB77C
  c->r[12]=R32(c->r[4]+0x00000000u); // 800CB780
  c->r[12]=R32(c->r[12]+0x00000040u); // 800CB784
  c->ctr=c->r[12]; // 800CB788
  if (true) { c->lr=0x800CB790u; dispatch(c,c->ctr); } // 800CB78C
  c->r[3]=c->r[1]+0x00000028u; // 800CB790
  c->r[4]=c->r[1]+0x00000064u; // 800CB794
  c->lr=0x800CB79Cu; f_80032FD8(c); // 800CB798
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB79C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[0]); // 800CB7A0
  c->lr=0x800CB7A8u; f_8003DA30(c); // 800CB7A4
  c->lr=0x800CB7ACu; f_8003ED58(c); // 800CB7A8
  W32(c->r[1]+0x00000010u,c->r[3]); // 800CB7AC
  goto L_800CB888; // 800CB7B0
L_800CB7B4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800CB7B4
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800CB7B8
  c->r[12]=R32(c->r[3]+0x00000010u); // 800CB7BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CB7C0
  c->ctr=c->r[12]; // 800CB7C4
  if (true) { c->lr=0x800CB7CCu; dispatch(c,c->ctr); } // 800CB7C8
  W32(c->r[1]+0x00000018u,c->r[4]); // 800CB7CC
  c->r[4]=0u+0xC8000000u; // 800CB7D0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800CB7D4
  c->r[3]=c->r[1]+0x00000014u; // 800CB7D8
  c->lr=0x800CB7E0u; f_8003EDD0(c); // 800CB7DC
  cmps(c,0,(int32_t)c->r[3],0); // 800CB7E0
  if (crb(c,2)) { goto L_800CB87C; } // 800CB7E4
  c->r[3]=R32(c->r[1]+0x00000010u); // 800CB7E8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800CB7EC
  cmpu(c,0,c->r[3],c->r[31]); // 800CB7F0
  if (crb(c,2)) { goto L_800CB87C; } // 800CB7F4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800CB7F8
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CB7FC
  c->ctr=c->r[12]; // 800CB800
  if (true) { c->lr=0x800CB808u; dispatch(c,c->ctr); } // 800CB804
  c->r[4]=c->r[3]|c->r[3]; // 800CB808
  c->r[3]=c->r[1]+0x00000034u; // 800CB80C
  c->r[12]=R32(c->r[4]+0x00000000u); // 800CB810
  c->r[12]=R32(c->r[12]+0x00000040u); // 800CB814
  c->ctr=c->r[12]; // 800CB818
  if (true) { c->lr=0x800CB820u; dispatch(c,c->ctr); } // 800CB81C
  c->r[3]=c->r[1]+0x0000001Cu; // 800CB820
  c->r[4]=c->r[1]+0x00000034u; // 800CB824
  c->lr=0x800CB82Cu; f_80032FD8(c); // 800CB828
  c->r[3]=c->r[1]+0x0000001Cu; // 800CB82C
  c->r[4]=c->r[1]+0x00000028u; // 800CB830
  c->lr=0x800CB838u; f_80265924(c); // 800CB834
  fcmp(c,0,c->f[1],c->f[31]); // 800CB838
  if (!crb(c,0)) { goto L_800CB87C; } // 800CB83C
  c->r[3]=c->r[1]+0x0000010Cu; // 800CB840
  c->r[4]=0u+0x00000001u; // 800CB844
  c->lr=0x800CB84Cu; f_800BDBB4(c); // 800CB848
  c->r[0]=0u+0x00000007u; // 800CB84C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800CB850
  c->r[4]=c->r[1]+0x00000108u; // 800CB854
  c->ctr=c->r[0]; // 800CB858
L_800CB85C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CB85C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CB860
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CB864
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CB868
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB85C; } // 800CB86C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CB870
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CB874
  goto L_800CB93C; // 800CB878
L_800CB87C:;
  c->r[3]=c->r[1]+0x00000010u; // 800CB87C
  c->r[4]=0u+0x00000000u; // 800CB880
  c->lr=0x800CB888u; f_8003ED68(c); // 800CB884
L_800CB888:;
  c->lr=0x800CB88Cu; f_8003DA30(c); // 800CB888
  c->lr=0x800CB890u; f_8003ECFC(c); // 800CB88C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800CB890
  c->r[4]=c->r[1]+0x00000008u; // 800CB894
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CB898
  c->r[3]=c->r[1]+0x0000000Cu; // 800CB89C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CB8A0
  c->lr=0x800CB8A8u; f_8003ED7C(c); // 800CB8A4
  cmps(c,0,(int32_t)c->r[3],0); // 800CB8A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB7B4; } // 800CB8AC
  c->lr=0x800CB8B4u; f_80061A4C(c); // 800CB8B0
  c->r[3]=c->r[3]+0x00000384u; // 800CB8B4
  c->r[4]=c->r[1]+0x00000028u; // 800CB8B8
  c->lr=0x800CB8C0u; f_80265924(c); // 800CB8BC
  fcmp(c,0,c->f[1],c->f[31]); // 800CB8C0
  if (!crb(c,0)) { goto L_800CB904; } // 800CB8C4
  c->r[3]=c->r[1]+0x000000D0u; // 800CB8C8
  c->r[4]=0u+0x00000001u; // 800CB8CC
  c->lr=0x800CB8D4u; f_800BDBB4(c); // 800CB8D0
  c->r[0]=0u+0x00000007u; // 800CB8D4
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800CB8D8
  c->r[4]=c->r[1]+0x000000CCu; // 800CB8DC
  c->ctr=c->r[0]; // 800CB8E0
L_800CB8E4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CB8E4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CB8E8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CB8EC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CB8F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB8E4; } // 800CB8F4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CB8F8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CB8FC
  goto L_800CB93C; // 800CB900
L_800CB904:;
  c->r[3]=c->r[1]+0x00000094u; // 800CB904
  c->r[4]=0u+0x00000000u; // 800CB908
  c->lr=0x800CB910u; f_800BDBB4(c); // 800CB90C
  c->r[0]=0u+0x00000007u; // 800CB910
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800CB914
  c->r[4]=c->r[1]+0x00000090u; // 800CB918
  c->ctr=c->r[0]; // 800CB91C
L_800CB920:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CB920
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CB924
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CB928
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CB92C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CB920; } // 800CB930
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CB934
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CB938
L_800CB93C:;
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,31,ea,0,0);} // 800CB93C
  c->r[11]=c->r[1]+0x00000160u; // 800CB940
  {uint32_t ea=c->r[1]+0x00000160u; c->f[31]=RF64(ea);} // 800CB944
  c->lr=0x800CB94Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB948
  c->r[0]=R32(c->r[1]+0x00000174u); // 800CB94C
  c->lr=c->r[0]; // 800CB950
  c->r[1]=c->r[1]+0x00000170u; // 800CB954
  return; // 800CB958
}

// fn_800CB95C
void f_800CB95C(Ctx* __restrict c) {
  trace_call(0x800CB95Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB95C
  c->r[0]=c->lr; // 800CB960
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800CB964
  c->r[11]=c->r[1]+0x000000E0u; // 800CB968
  c->lr=0x800CB970u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CB96C
  c->r[31]=c->r[1]|c->r[1]; // 800CB970
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB974
  c->r[28]=0u+0x00000000u; // 800CB978
  c->r[29]=0u+0x803F0000u; // 800CB97C
  c->r[25]=c->r[3]|c->r[3]; // 800CB980
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CB984
  c->r[29]=c->r[29]+0x00001B28u; // 800CB988
  W32(c->r[31]+0x00000020u,c->r[28]); // 800CB98C
  c->r[26]=c->r[5]|c->r[5]; // 800CB990
  c->r[3]=c->r[31]+0x00000064u; // 800CB994
  c->r[4]=c->r[31]+0x00000018u; // 800CB998
  {uint32_t ea=c->r[31]+0x000000B0u; WF64(ea,c->f[0]);} // 800CB99C
  W32(c->r[31]+0x00000024u,c->r[28]); // 800CB9A0
  c->r[27]=R32(c->r[31]+0x000000B4u); // 800CB9A4
  W32(c->r[31]+0x00000018u,c->r[28]); // 800CB9A8
  W32(c->r[31]+0x0000001Cu,c->r[28]); // 800CB9AC
  W32(c->r[31]+0x00000060u,c->r[29]); // 800CB9B0
  c->lr=0x800CB9B8u; f_80064C98(c); // 800CB9B4
  c->r[30]=0u+0x803F0000u; // 800CB9B8
  W32(c->r[31]+0x0000006Cu,c->r[28]); // 800CB9BC
  c->r[30]=c->r[30]+0x00007A58u; // 800CB9C0
  c->r[3]=c->r[31]+0x00000028u; // 800CB9C4
  W32(c->r[31]+0x00000060u,c->r[30]); // 800CB9C8
  W32(c->r[31]+0x00000070u,c->r[27]); // 800CB9CC
  c->r[4]=R32(c->r[26]+0x00000000u); // 800CB9D0
  c->r[0]=R32(c->r[26]+0x00000004u); // 800CB9D4
  W32(c->r[31]+0x00000028u,c->r[4]); // 800CB9D8
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800CB9DC
  c->lr=0x800CB9E4u; f_8003F1D4(c); // 800CB9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CB9E4
  if (crb(c,2)) { goto L_800CBA74; } // 800CB9E8
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CB9EC
  c->lr=0x800CB9F4u; f_802A6EE4(c); // 800CB9F0
  cmps(c,0,(int32_t)c->r[3],0); // 800CB9F4
  c->r[27]=c->r[3]|c->r[3]; // 800CB9F8
  if (crb(c,2)) { goto L_800CBA74; } // 800CB9FC
  if (crb(c,2)) { goto L_800CBA34; } // 800CBA00
  W32(c->r[31]+0x00000010u,c->r[28]); // 800CBA04
  c->r[4]=c->r[31]+0x00000010u; // 800CBA08
  W32(c->r[31]+0x00000014u,c->r[28]); // 800CBA0C
  W32(c->r[3]+0x00000000u,c->r[29]); // 800CBA10
  c->r[3]=c->r[3]+0x00000004u; // 800CBA14
  W32(c->r[31]+0x00000044u,c->r[1]); // 800CBA18
  W32(c->r[31]+0x00000008u,c->r[28]); // 800CBA1C
  W32(c->r[31]+0x0000000Cu,c->r[28]); // 800CBA20
  c->lr=0x800CBA28u; f_80064C98(c); // 800CBA24
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800CBA28
  W32(c->r[27]+0x00000000u,c->r[30]); // 800CBA2C
  W32(c->r[27]+0x00000010u,c->r[28]); // 800CBA30
L_800CBA34:;
  c->r[3]=c->r[27]|c->r[27]; // 800CBA34
  c->r[4]=c->r[31]+0x00000060u; // 800CBA38
  c->lr=0x800CBA40u; f_80064DD8(c); // 800CBA3C
  c->r[0]=R32(c->r[31]+0x00000070u); // 800CBA40
  c->r[28]=addc(c,c->r[27],0x00000014u,0); cr0(c,c->r[28]); // 800CBA44
  W32(c->r[27]+0x00000010u,c->r[0]); // 800CBA48
  if (crb(c,2)) { goto L_800CBA60; } // 800CBA4C
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 800CBA50
  c->r[3]=c->r[28]|c->r[28]; // 800CBA54
  c->r[4]=c->r[27]|c->r[27]; // 800CBA58
  c->lr=0x800CBA60u; f_80064CE8(c); // 800CBA5C
L_800CBA60:;
  c->r[3]=c->r[31]+0x00000028u; // 800CBA60
  c->lr=0x800CBA68u; f_80068A78(c); // 800CBA64
  c->r[4]=c->r[28]|c->r[28]; // 800CBA68
  c->r[3]=c->r[3]+0x00000030u; // 800CBA6C
  c->lr=0x800CBA74u; f_8003FD14(c); // 800CBA70
L_800CBA74:;
  c->r[3]=0u+0x00000000u; // 800CBA74
  c->r[0]=0u+0x00000007u; // 800CBA78
  W32(c->r[31]+0x00000074u,c->r[3]); // 800CBA7C
  c->r[5]=c->r[25]+0xFFFFFFFCu; // 800CBA80
  c->r[4]=c->r[31]+0x00000070u; // 800CBA84
  c->ctr=c->r[0]; // 800CBA88
L_800CBA8C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CBA8C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CBA90
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CBA94
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CBA98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CBA8C; } // 800CBA9C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CBAA0
  c->r[10]=c->r[31]|c->r[31]; // 800CBAA4
  c->r[11]=c->r[10]+0x000000E0u; // 800CBAA8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CBAAC
  c->lr=0x800CBAB4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CBAB0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CBAB4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CBAB8
  c->r[1]=c->r[10]|c->r[10]; // 800CBABC
  c->lr=c->r[0]; // 800CBAC0
  return; // 800CBAC4
}

// dtor_800CBAC8
void f_800CBAC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBAC8
  c->r[0]=c->lr; // 800CBACC
  cmps(c,0,(int32_t)c->r[3],0); // 800CBAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBAD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBAD8
  c->r[31]=c->r[3]|c->r[3]; // 800CBADC
  if (crb(c,2)) { goto L_800CBAF0; } // 800CBAE0
  cmps(c,0,(int32_t)c->r[4],0); // 800CBAE4
  if (!crb(c,1)) { goto L_800CBAF0; } // 800CBAE8
  c->lr=0x800CBAF0u; f_802896EC(c); // 800CBAEC
L_800CBAF0:;
  c->r[3]=c->r[31]|c->r[31]; // 800CBAF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBAF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBAF8
  c->lr=c->r[0]; // 800CBAFC
  c->r[1]=c->r[1]+0x00000010u; // 800CBB00
  return; // 800CBB04
}

// fn_800CBB08
void f_800CBB08(Ctx* __restrict c) {
  trace_call(0x800CBB08u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBB08
  c->r[0]=c->lr; // 800CBB0C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800CBB10
  {uint32_t ea=c->r[1]+0x00000068u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CBB14
  c->r[30]=c->r[3]|c->r[3]; // 800CBB18
  c->r[31]=c->r[5]|c->r[5]; // 800CBB1C
  c->r[3]=c->r[1]+0x00000010u; // 800CBB20
  c->lr=0x800CBB28u; f_800BD428(c); // 800CBB24
  c->r[5]=R32(c->r[31]+0x00000000u); // 800CBB28
  c->r[3]=c->r[1]+0x00000008u; // 800CBB2C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CBB30
  c->r[4]=c->r[1]+0x00000010u; // 800CBB34
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CBB38
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CBB3C
  c->lr=0x800CBB44u; f_800CBB8C(c); // 800CBB40
  c->r[3]=0u+0x00000000u; // 800CBB44
  c->r[0]=0u+0x00000007u; // 800CBB48
  W32(c->r[1]+0x00000020u,c->r[3]); // 800CBB4C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800CBB50
  c->r[4]=c->r[1]+0x0000001Cu; // 800CBB54
  c->ctr=c->r[0]; // 800CBB58
L_800CBB5C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CBB5C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CBB60
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CBB64
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CBB68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CBB5C; } // 800CBB6C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CBB70
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CBB74
  {uint32_t ea=c->r[1]+0x00000068u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CBB78
  c->r[0]=R32(c->r[1]+0x00000074u); // 800CBB7C
  c->lr=c->r[0]; // 800CBB80
  c->r[1]=c->r[1]+0x00000070u; // 800CBB84
  return; // 800CBB88
}

// fn_800CBB8C
void f_800CBB8C(Ctx* __restrict c) {
  trace_call(0x800CBB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBB8C
  c->r[0]=c->lr; // 800CBB90
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CBB94
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CBB98
  c->r[31]=c->r[1]|c->r[1]; // 800CBB9C
  c->r[28]=c->r[3]|c->r[3]; // 800CBBA0
  c->r[29]=c->r[4]|c->r[4]; // 800CBBA4
  c->lr=0x800CBBACu; f_8003F1D4(c); // 800CBBA8
  cmps(c,0,(int32_t)c->r[3],0); // 800CBBAC
  if (crb(c,2)) { goto L_800CBC0C; } // 800CBBB0
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CBBB4
  c->lr=0x800CBBBCu; f_802A6EE4(c); // 800CBBB8
  cmps(c,0,(int32_t)c->r[3],0); // 800CBBBC
  c->r[30]=c->r[3]|c->r[3]; // 800CBBC0
  if (crb(c,2)) { goto L_800CBC0C; } // 800CBBC4
  if (crb(c,2)) { goto L_800CBBD4; } // 800CBBC8
  W32(c->r[31]+0x00000034u,c->r[1]); // 800CBBCC
  c->lr=0x800CBBD4u; f_800BD428(c); // 800CBBD0
L_800CBBD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800CBBD4
  c->r[4]=c->r[29]|c->r[29]; // 800CBBD8
  c->lr=0x800CBBE0u; f_80064DD8(c); // 800CBBDC
  c->r[29]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[29]); // 800CBBE0
  if (crb(c,2)) { goto L_800CBBF8; } // 800CBBE4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 800CBBE8
  c->r[3]=c->r[29]|c->r[29]; // 800CBBEC
  c->r[4]=c->r[30]|c->r[30]; // 800CBBF0
  c->lr=0x800CBBF8u; f_80064CE8(c); // 800CBBF4
L_800CBBF8:;
  c->r[3]=c->r[28]|c->r[28]; // 800CBBF8
  c->lr=0x800CBC00u; f_80068A78(c); // 800CBBFC
  c->r[4]=c->r[29]|c->r[29]; // 800CBC00
  c->r[3]=c->r[3]+0x00000030u; // 800CBC04
  c->lr=0x800CBC0Cu; f_8003FD14(c); // 800CBC08
L_800CBC0C:;
  c->r[10]=c->r[31]|c->r[31]; // 800CBC0C
  {uint32_t ea=c->r[10]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CBC10
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CBC14
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CBC18
  c->r[1]=c->r[10]|c->r[10]; // 800CBC1C
  c->lr=c->r[0]; // 800CBC20
  return; // 800CBC24
}

// fn_800CBC28
void f_800CBC28(Ctx* __restrict c) {
  trace_call(0x800CBC28u);
  {uint32_t ea=c->r[1]+0xFFFFF080u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBC28
  c->r[0]=c->lr; // 800CBC2C
  W32(c->r[1]+0x00000F84u,c->r[0]); // 800CBC30
  c->r[11]=c->r[1]+0x00000F80u; // 800CBC34
  c->lr=0x800CBC3Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CBC38
  c->r[31]=c->r[1]|c->r[1]; // 800CBC3C
  {uint32_t ea=c->r[6]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC40
  c->r[29]=c->r[3]|c->r[3]; // 800CBC44
  {uint32_t ea=c->r[6]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CBC48
  c->r[30]=c->r[6]|c->r[6]; // 800CBC4C
  {uint32_t ea=c->r[6]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CBC50
  c->r[3]=c->r[31]+0x00000048u; // 800CBC54
  c->lr=0x800CBC5Cu; f_800521A0(c); // 800CBC58
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC5C
  c->r[3]=c->r[31]+0x0000003Cu; // 800CBC60
  {uint32_t ea=c->r[30]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CBC64
  {uint32_t ea=c->r[30]+0x0000016Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CBC68
  c->lr=0x800CBC70u; f_800521A0(c); // 800CBC6C
  c->r[3]=c->r[31]+0x00000030u; // 800CBC70
  c->r[4]=c->r[31]+0x0000003Cu; // 800CBC74
  c->r[5]=c->r[31]+0x00000048u; // 800CBC78
  c->lr=0x800CBC80u; f_80064C74(c); // 800CBC7C
  c->r[3]=c->r[31]+0x000000F8u; // 800CBC80
  c->lr=0x800CBC88u; f_80063ACC(c); // 800CBC84
  c->r[5]=0u+0x803F0000u; // 800CBC88
  c->r[3]=c->r[31]+0x0000011Cu; // 800CBC8C
  c->r[5]=c->r[5]+0x00001AC0u; // 800CBC90
  c->r[4]=c->r[31]+0x00000048u; // 800CBC94
  W32(c->r[31]+0x00000118u,c->r[5]); // 800CBC98
  c->lr=0x800CBCA0u; f_8003F484(c); // 800CBC9C
  c->r[3]=c->r[31]+0x00000128u; // 800CBCA0
  c->r[4]=c->r[31]+0x00000030u; // 800CBCA4
  c->lr=0x800CBCACu; f_8003F484(c); // 800CBCA8
  c->r[3]=c->r[31]+0x00000134u; // 800CBCAC
  c->lr=0x800CBCB4u; f_8003F3AC(c); // 800CBCB0
  c->lr=0x800CBCB8u; f_8003DA30(c); // 800CBCB4
  c->r[4]=c->r[31]+0x000000F8u; // 800CBCB8
  c->r[5]=c->r[31]+0x00000134u; // 800CBCBC
  c->lr=0x800CBCC4u; f_8003E7E4(c); // 800CBCC0
  {uint32_t ea=c->r[31]+0x00000140u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBCC4
  c->r[27]=c->r[3]|c->r[3]; // 800CBCC8
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBCCC
  fcmp(c,0,c->f[1],c->f[0]); // 800CBCD0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CBCD4
  c->r[0]=c->cr; // 800CBCD8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800CBCDC
  if (crb(c,2)) { goto L_800CBE84; } // 800CBCE0
  c->r[5]=0u+0x803F0000u; // 800CBCE4
  c->r[28]=0u+0x00000000u; // 800CBCE8
  c->r[5]=c->r[5]+0x00001B28u; // 800CBCEC
  W32(c->r[31]+0x00000020u,c->r[28]); // 800CBCF0
  c->r[26]=c->r[31]+0x00000084u; // 800CBCF4
  c->r[3]=c->r[31]+0x00000088u; // 800CBCF8
  W32(c->r[31]+0x00000024u,c->r[28]); // 800CBCFC
  c->r[4]=c->r[31]+0x00000018u; // 800CBD00
  W32(c->r[31]+0x00000018u,c->r[28]); // 800CBD04
  W32(c->r[31]+0x0000001Cu,c->r[28]); // 800CBD08
  W32(c->r[31]+0x00000084u,c->r[5]); // 800CBD0C
  c->lr=0x800CBD14u; f_80064C98(c); // 800CBD10
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBD14
  c->r[3]=0u+0x803F0000u; // 800CBD18
  c->r[3]=c->r[3]+0x000079F4u; // 800CBD1C
  W32(c->r[31]+0x00000090u,c->r[28]); // 800CBD20
  c->r[4]=0u+0x00000000u; // 800CBD24
  W32(c->r[31]+0x00000084u,c->r[3]); // 800CBD28
  W8(c->r[31]+0x000000B4u,c->r[28]); // 800CBD2C
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 800CBD30
  goto L_800CBD48; // 800CBD34
L_800CBD38:;
  c->r[3]=c->r[26]+c->r[4]; // 800CBD38
  c->r[0]=0u+0x00000000u; // 800CBD3C
  W8(c->r[3]+0x00000010u,c->r[0]); // 800CBD40
  c->r[4]=c->r[4]+0x00000001u; // 800CBD44
L_800CBD48:;
  cmps(c,0,(int32_t)c->r[4],32); // 800CBD48
  if (crb(c,0)) { IRQCHK(c); goto L_800CBD38; } // 800CBD4C
  c->r[5]=0u+0x00000000u; // 800CBD50
  goto L_800CBD6C; // 800CBD54
L_800CBD58:;
  c->r[4]=c->r[30]+c->r[5]; // 800CBD58
  c->r[3]=c->r[26]+c->r[5]; // 800CBD5C
  c->r[0]=R8(c->r[4]+0x00000004u); // 800CBD60
  c->r[5]=c->r[5]+0x00000001u; // 800CBD64
  W8(c->r[3]+0x00000010u,c->r[0]); // 800CBD68
L_800CBD6C:;
  cmps(c,0,(int32_t)c->r[5],32); // 800CBD6C
  if (crb(c,0)) { IRQCHK(c); goto L_800CBD58; } // 800CBD70
  c->r[4]=R32(c->r[27]+0x00000000u); // 800CBD74
  c->r[3]=c->r[31]+0x00000028u; // 800CBD78
  c->r[0]=R32(c->r[27]+0x00000004u); // 800CBD7C
  W32(c->r[31]+0x00000028u,c->r[4]); // 800CBD80
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800CBD84
  c->lr=0x800CBD8Cu; f_8003F1D4(c); // 800CBD88
  cmps(c,0,(int32_t)c->r[3],0); // 800CBD8C
  if (crb(c,2)) { goto L_800CBE84; } // 800CBD90
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CBD94
  c->lr=0x800CBD9Cu; f_802A6EE4(c); // 800CBD98
  cmps(c,0,(int32_t)c->r[3],0); // 800CBD9C
  c->r[27]=c->r[3]|c->r[3]; // 800CBDA0
  if (crb(c,2)) { goto L_800CBE84; } // 800CBDA4
  if (crb(c,2)) { goto L_800CBE18; } // 800CBDA8
  c->r[30]=0u+0x00000000u; // 800CBDAC
  c->r[5]=0u+0x803F0000u; // 800CBDB0
  W32(c->r[31]+0x00000010u,c->r[30]); // 800CBDB4
  c->r[5]=c->r[5]+0x00001B28u; // 800CBDB8
  c->r[4]=c->r[31]+0x00000010u; // 800CBDBC
  W32(c->r[31]+0x00000014u,c->r[30]); // 800CBDC0
  W32(c->r[3]+0x00000000u,c->r[5]); // 800CBDC4
  c->r[3]=c->r[3]+0x00000004u; // 800CBDC8
  W32(c->r[31]+0x00000068u,c->r[1]); // 800CBDCC
  W32(c->r[31]+0x00000008u,c->r[30]); // 800CBDD0
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 800CBDD4
  c->lr=0x800CBDDCu; f_80064C98(c); // 800CBDD8
  c->r[3]=0u+0x803F0000u; // 800CBDDC
  W32(c->r[27]+0x0000000Cu,c->r[30]); // 800CBDE0
  c->r[3]=c->r[3]+0x000079F4u; // 800CBDE4
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBDE8
  W32(c->r[27]+0x00000000u,c->r[3]); // 800CBDEC
  c->r[4]=0u+0x00000000u; // 800CBDF0
  W8(c->r[27]+0x00000030u,c->r[30]); // 800CBDF4
  {uint32_t ea=c->r[27]+0x00000034u; WF32(ea,c->f[0]);} // 800CBDF8
  goto L_800CBE10; // 800CBDFC
L_800CBE00:;
  c->r[3]=c->r[27]+c->r[4]; // 800CBE00
  c->r[0]=0u+0x00000000u; // 800CBE04
  W8(c->r[3]+0x00000010u,c->r[0]); // 800CBE08
  c->r[4]=c->r[4]+0x00000001u; // 800CBE0C
L_800CBE10:;
  cmps(c,0,(int32_t)c->r[4],32); // 800CBE10
  if (crb(c,0)) { IRQCHK(c); goto L_800CBE00; } // 800CBE14
L_800CBE18:;
  c->r[3]=c->r[27]|c->r[27]; // 800CBE18
  c->r[4]=c->r[31]+0x00000084u; // 800CBE1C
  c->lr=0x800CBE24u; f_80064DD8(c); // 800CBE20
  c->r[0]=0u+0x00000010u; // 800CBE24
  c->r[5]=c->r[27]+0x0000000Fu; // 800CBE28
  c->r[4]=c->r[31]+0x00000093u; // 800CBE2C
  c->ctr=c->r[0]; // 800CBE30
L_800CBE34:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 800CBE34
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CBE38
  W8(c->r[5]+0x00000001u,c->r[3]); // 800CBE3C
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 800CBE40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CBE34; } // 800CBE44
  c->r[0]=R8(c->r[31]+0x000000B4u); // 800CBE48
  c->r[26]=addc(c,c->r[27],0x00000038u,0); cr0(c,c->r[26]); // 800CBE4C
  W8(c->r[27]+0x00000030u,c->r[0]); // 800CBE50
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBE54
  {uint32_t ea=c->r[27]+0x00000034u; WF32(ea,c->f[0]);} // 800CBE58
  if (crb(c,2)) { goto L_800CBE70; } // 800CBE5C
  W32(c->r[31]+0x00000080u,c->r[1]); // 800CBE60
  c->r[3]=c->r[26]|c->r[26]; // 800CBE64
  c->r[4]=c->r[27]|c->r[27]; // 800CBE68
  c->lr=0x800CBE70u; f_80064CE8(c); // 800CBE6C
L_800CBE70:;
  c->r[3]=c->r[31]+0x00000028u; // 800CBE70
  c->lr=0x800CBE78u; f_80068A78(c); // 800CBE74
  c->r[4]=c->r[26]|c->r[26]; // 800CBE78
  c->r[3]=c->r[3]+0x00000030u; // 800CBE7C
  c->lr=0x800CBE84u; f_8003FD14(c); // 800CBE80
L_800CBE84:;
  c->r[3]=0u+0x00000000u; // 800CBE84
  c->r[0]=0u+0x00000007u; // 800CBE88
  W32(c->r[31]+0x000000BCu,c->r[3]); // 800CBE8C
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800CBE90
  c->r[4]=c->r[31]+0x000000B8u; // 800CBE94
  c->ctr=c->r[0]; // 800CBE98
L_800CBE9C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CBE9C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CBEA0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CBEA4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CBEA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CBE9C; } // 800CBEAC
  c->r[4]=R32(c->r[4]+0x00000004u); // 800CBEB0
  c->r[0]=0u+0xFFFFFFFFu; // 800CBEB4
  c->r[3]=c->r[31]+0x0000016Cu; // 800CBEB8
  W32(c->r[5]+0x00000004u,c->r[4]); // 800CBEBC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CBEC0
  c->lr=0x800CBEC8u; f_80046394(c); // 800CBEC4
  c->r[10]=c->r[31]|c->r[31]; // 800CBEC8
  c->r[11]=c->r[10]+0x00000F80u; // 800CBECC
  c->lr=0x800CBED4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CBED0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CBED4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CBED8
  c->r[1]=c->r[10]|c->r[10]; // 800CBEDC
  c->lr=c->r[0]; // 800CBEE0
  return; // 800CBEE4
}

// dtor_800CBEE8
void f_800CBEE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBEE8
  c->r[0]=c->lr; // 800CBEEC
  cmps(c,0,(int32_t)c->r[3],0); // 800CBEF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBEF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBEF8
  c->r[31]=c->r[3]|c->r[3]; // 800CBEFC
  if (crb(c,2)) { goto L_800CBF10; } // 800CBF00
  cmps(c,0,(int32_t)c->r[4],0); // 800CBF04
  if (!crb(c,1)) { goto L_800CBF10; } // 800CBF08
  c->lr=0x800CBF10u; f_802896EC(c); // 800CBF0C
L_800CBF10:;
  c->r[3]=c->r[31]|c->r[31]; // 800CBF10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBF14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBF18
  c->lr=c->r[0]; // 800CBF1C
  c->r[1]=c->r[1]+0x00000010u; // 800CBF20
  return; // 800CBF24
}

// fn_800CBF28
void f_800CBF28(Ctx* __restrict c) {
  trace_call(0x800CBF28u);
  {uint32_t ea=c->r[1]+0xFFFFEFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBF28
  c->r[0]=c->lr; // 800CBF2C
  W32(c->r[1]+0x00001064u,c->r[0]); // 800CBF30
  c->r[11]=c->r[1]+0x00001060u; // 800CBF34
  c->lr=0x800CBF3Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CBF38
  c->r[28]=c->r[3]|c->r[3]; // 800CBF3C
  c->r[29]=c->r[4]|c->r[4]; // 800CBF40
  c->r[3]=c->r[1]+0x0000021Cu; // 800CBF44
  c->lr=0x800CBF4Cu; f_8003F3AC(c); // 800CBF48
  c->r[31]=0u+0x805E0000u; // 800CBF4C
  c->r[4]=0u+0x00000000u; // 800CBF50
  c->r[3]=c->r[31]+0xFFFFDFB0u; // 800CBF54
  c->lr=0x800CBF5Cu; f_8025007C(c); // 800CBF58
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBF5C
  c->r[3]=c->r[31]+0xFFFFDFB0u; // 800CBF60
  c->r[4]=0u+0x00000000u; // 800CBF64
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800CBF68
  c->lr=0x800CBF70u; f_8025007C(c); // 800CBF6C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBF70
  c->r[5]=c->r[1]+0x00000030u; // 800CBF74
  {uint32_t ea=c->r[2]+0xFFFF8EB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBF78
  c->r[6]=c->r[1]+0x00000024u; // 800CBF7C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 800CBF80
  c->r[3]=c->r[13]+0xFFFF9380u; // 800CBF84
  c->r[4]=0u+0xFFFFFFFFu; // 800CBF88
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800CBF8C
  c->lr=0x800CBF94u; f_80028BC0(c); // 800CBF90
  c->r[3]=0u+0x80440000u; // 800CBF94
  c->r[3]=c->r[3]+0xFFFFA720u; // 800CBF98
  c->r[3]=R32(c->r[3]+0x00000004u); // 800CBF9C
  c->lr=0x800CBFA4u; f_80381A54(c); // 800CBFA0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CBFA4
  c->r[3]=c->r[1]+0x00000008u; // 800CBFA8
  c->r[4]=c->r[1]+0x00000018u; // 800CBFAC
  c->lr=0x800CBFB4u; f_8037CE54(c); // 800CBFB0
  c->r[3]=c->r[1]+0x0000000Cu; // 800CBFB4
  c->r[4]=c->r[1]+0x00000024u; // 800CBFB8
  c->r[5]=c->r[1]+0x00000018u; // 800CBFBC
  c->lr=0x800CBFC4u; f_80064C74(c); // 800CBFC0
  c->r[3]=c->r[1]+0x00000078u; // 800CBFC4
  c->lr=0x800CBFCCu; f_80063ACC(c); // 800CBFC8
  c->r[5]=0u+0x803F0000u; // 800CBFCC
  c->r[3]=c->r[1]+0x0000009Cu; // 800CBFD0
  c->r[5]=c->r[5]+0x00001AC0u; // 800CBFD4
  c->r[4]=c->r[1]+0x00000018u; // 800CBFD8
  W32(c->r[1]+0x00000098u,c->r[5]); // 800CBFDC
  c->lr=0x800CBFE4u; f_8003F484(c); // 800CBFE0
  c->r[3]=c->r[1]+0x000000A8u; // 800CBFE4
  c->r[4]=c->r[1]+0x0000000Cu; // 800CBFE8
  c->lr=0x800CBFF0u; f_8003F484(c); // 800CBFEC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBFF0
  c->r[0]=0u+0x00000001u; // 800CBFF4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800CBFF8
  c->r[3]=c->r[1]+0x000000F0u; // 800CBFFC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC000
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 800CC004
  c->lr=0x800CC00Cu; f_800BDCD0(c); // 800CC008
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC00C
  c->r[3]=c->r[1]+0x0000012Cu; // 800CC010
  c->lr=0x800CC018u; f_800BDCD0(c); // 800CC014
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC018
  c->r[3]=c->r[1]+0x00000168u; // 800CC01C
  c->lr=0x800CC024u; f_800BDCD0(c); // 800CC020
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC024
  c->r[3]=c->r[1]+0x000001A4u; // 800CC028
  c->lr=0x800CC030u; f_800BDCD0(c); // 800CC02C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC030
  c->r[3]=c->r[1]+0x000001E0u; // 800CC034
  c->lr=0x800CC03Cu; f_800BDCD0(c); // 800CC038
  c->r[30]=0u+0x00000000u; // 800CC03C
  c->r[31]=0u+0x00000000u; // 800CC040
L_800CC044:;
  c->r[4]=c->r[1]+0x000000B4u; // 800CC044
  c->r[3]=c->r[29]|c->r[29]; // 800CC048
  c->r[4]=c->r[4]+c->r[31]; // 800CC04C
  c->lr=0x800CC054u; f_800CC0BC(c); // 800CC050
  c->r[30]=c->r[30]+0x00000001u; // 800CC054
  c->r[31]=c->r[31]+0x0000003Cu; // 800CC058
  cmps(c,0,(int32_t)c->r[30],6); // 800CC05C
  if (crb(c,0)) { IRQCHK(c); goto L_800CC044; } // 800CC060
  c->r[3]=0u+0x00000000u; // 800CC064
  c->r[0]=0u+0x00000007u; // 800CC068
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800CC06C
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800CC070
  c->r[4]=c->r[1]+0x00000038u; // 800CC074
  c->ctr=c->r[0]; // 800CC078
L_800CC07C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CC07C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CC080
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CC084
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CC088
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CC07C; } // 800CC08C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CC090
  c->r[3]=c->r[1]+0x00000254u; // 800CC094
  c->r[4]=0u+0xFFFFFFFFu; // 800CC098
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CC09C
  c->lr=0x800CC0A4u; f_80046394(c); // 800CC0A0
  c->r[11]=c->r[1]+0x00001060u; // 800CC0A4
  c->lr=0x800CC0ACu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CC0A8
  c->r[0]=R32(c->r[1]+0x00001064u); // 800CC0AC
  c->lr=c->r[0]; // 800CC0B0
  c->r[1]=c->r[1]+0x00001060u; // 800CC0B4
  return; // 800CC0B8
}

// fn_800CC0BC
void f_800CC0BC(Ctx* __restrict c) {
  trace_call(0x800CC0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC0BC
  c->r[0]=c->lr; // 800CC0C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC0C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC0C8
  c->r[31]=c->r[3]|c->r[3]; // 800CC0CC
  c->r[0]=R32(c->r[3]+0x00000084u); // 800CC0D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800CC0D4
  c->r[3]=c->r[3]+c->r[0]; // 800CC0D8
  c->r[3]=c->r[3]+0x00000088u; // 800CC0DC
  c->lr=0x800CC0E4u; f_800791F0(c); // 800CC0E0
  c->r[3]=R32(c->r[31]+0x00000084u); // 800CC0E4
  c->r[0]=c->r[3]+0x00000001u; // 800CC0E8
  W32(c->r[31]+0x00000084u,c->r[0]); // 800CC0EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC0F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC0F4
  c->lr=c->r[0]; // 800CC0F8
  c->r[1]=c->r[1]+0x00000010u; // 800CC0FC
  return; // 800CC100
}

// fn_800CC104
void f_800CC104(Ctx* __restrict c) {
  trace_call(0x800CC104u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC104
  c->r[0]=c->lr; // 800CC108
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CC10C
  c->r[11]=c->r[1]+0x00000030u; // 800CC110
  c->lr=0x800CC118u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC114
  c->r[4]=0u+0x803E0000u; // 800CC118
  c->r[6]=0u+0x00000000u; // 800CC11C
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[5]=c->ps1[5]=RF32(ea);} // 800CC120
  c->r[4]=c->r[4]+0xFFFFA848u; // 800CC124
  {uint32_t ea=c->r[2]+0xFFFF8EA0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CC128
  c->r[7]=0u+0xFFFFFFFFu; // 800CC12C
  {uint32_t ea=c->r[2]+0xFFFF8F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC130
  c->r[8]=c->r[4]+0x0000006Fu; // 800CC134
  {uint32_t ea=c->r[2]+0xFFFF8EE8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800CC138
  c->r[0]=0u+0x0000000Au; // 800CC13C
  {uint32_t ea=c->r[2]+0xFFFF8F7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC140
  c->r[31]=c->r[3]|c->r[3]; // 800CC144
  {uint32_t ea=c->r[2]+0xFFFF8E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC148
  c->r[4]=0u+0x00000001u; // 800CC14C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 800CC150
  c->r[5]=0u+0x00000001u; // 800CC154
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 800CC158
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 800CC15C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 800CC160
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 800CC164
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[2]);} // 800CC168
  W32(c->r[3]+0x00000114u,c->r[8]); // 800CC16C
  W32(c->r[3]+0x00000128u,c->r[7]); // 800CC170
  W32(c->r[3]+0x0000012Cu,c->r[6]); // 800CC174
  W32(c->r[3]+0x00000130u,c->r[6]); // 800CC178
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[1]);} // 800CC17C
  {uint32_t ea=c->r[3]+0x00000138u; WF32(ea,c->f[1]);} // 800CC180
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 800CC184
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 800CC188
  W32(c->r[3]+0x00000454u,c->r[7]); // 800CC18C
  W32(c->r[3]+0x00000104u,c->r[6]); // 800CC190
  W32(c->r[3]+0x00000108u,c->r[6]); // 800CC194
  W32(c->r[3]+0x0000010Cu,c->r[6]); // 800CC198
  W32(c->r[3]+0x00000110u,c->r[6]); // 800CC19C
  W32(c->r[3]+0x00000450u,c->r[6]); // 800CC1A0
  c->lr=0x800CC1A8u; f_800B16D0(c); // 800CC1A4
  c->r[4]=0u+0x803E0000u; // 800CC1A8
  {uint32_t ea=c->r[4]+0xFFFF9B5Cu; c->r[7]=R32(ea); c->r[4]=ea;} // 800CC1AC
  c->r[0]=0u+0x00000003u; // 800CC1B0
  c->r[5]=c->r[1]+0x00000008u; // 800CC1B4
  c->r[6]=R32(c->r[4]+0x00000004u); // 800CC1B8
  c->r[3]=0u+0x00000000u; // 800CC1BC
  c->r[4]=R32(c->r[4]+0x00000008u); // 800CC1C0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800CC1C4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CC1C8
  W32(c->r[1]+0x00000010u,c->r[4]); // 800CC1CC
  c->ctr=c->r[0]; // 800CC1D0
L_800CC1D4:;
  {uint32_t ea=c->r[5]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC1D4
  c->r[4]=c->r[31]+c->r[3]; // 800CC1D8
  c->r[3]=c->r[3]+0x00000004u; // 800CC1DC
  {uint32_t ea=c->r[4]+0x00000144u; WF32(ea,c->f[0]);} // 800CC1E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CC1D4; } // 800CC1E4
  c->r[0]=0u+0x0000001Du; // 800CC1E8
  {uint32_t ea=c->r[2]+0xFFFF8F80u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC1EC
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC1F0
  c->r[3]=0u+0x00000000u; // 800CC1F4
  c->ctr=c->r[0]; // 800CC1F8
L_800CC1FC:;
  c->r[4]=c->r[31]+c->r[3]; // 800CC1FC
  c->r[3]=c->r[3]+0x00000004u; // 800CC200
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[1]);} // 800CC204
  {uint32_t ea=c->r[4]+0x0000008Cu; WF32(ea,c->f[0]);} // 800CC208
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CC1FC; } // 800CC20C
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC210
  c->r[28]=0u+0x00000000u; // 800CC214
  c->r[30]=0u+0x00000000u; // 800CC218
  c->r[29]=0u+0x803E0000u; // 800CC21C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CC220
L_800CC224:;
  c->r[3]=c->r[31]+c->r[30]; // 800CC224
  c->r[4]=c->r[29]+0xFFFF9BA0u; // 800CC228
  c->r[3]=c->r[3]+0x00000150u; // 800CC22C
  c->lr=0x800CC234u; f_800CC290(c); // 800CC230
  c->r[28]=c->r[28]+0x00000001u; // 800CC234
  c->r[30]=c->r[30]+0x00000018u; // 800CC238
  cmps(c,0,(int32_t)c->r[28],32); // 800CC23C
  if (crb(c,0)) { IRQCHK(c); goto L_800CC224; } // 800CC240
  c->r[29]=0u+0x803E0000u; // 800CC244
  c->r[28]=0u+0x00000000u; // 800CC248
  c->r[29]=c->r[29]+0xFFFF9BA0u; // 800CC24C
  c->r[30]=0u+0x00000000u; // 800CC250
L_800CC254:;
  c->r[3]=c->r[31]+c->r[30]; // 800CC254
  c->r[4]=c->r[29]+c->r[30]; // 800CC258
  c->r[3]=c->r[3]+0x00000150u; // 800CC25C
  c->lr=0x800CC264u; f_800CC290(c); // 800CC260
  c->r[28]=c->r[28]+0x00000001u; // 800CC264
  c->r[30]=c->r[30]+0x00000018u; // 800CC268
  cmps(c,0,(int32_t)c->r[28],17); // 800CC26C
  if (crb(c,0)) { IRQCHK(c); goto L_800CC254; } // 800CC270
  c->r[11]=c->r[1]+0x00000030u; // 800CC274
  c->r[3]=c->r[31]|c->r[31]; // 800CC278
  c->lr=0x800CC280u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CC27C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CC280
  c->lr=c->r[0]; // 800CC284
  c->r[1]=c->r[1]+0x00000030u; // 800CC288
  return; // 800CC28C
}

// fn_800CC290
void f_800CC290(Ctx* __restrict c) {
  trace_call(0x800CC290u);
  c->r[9]=R32(c->r[4]+0x00000000u); // 800CC290
  c->r[8]=R32(c->r[4]+0x00000004u); // 800CC294
  c->r[7]=R32(c->r[4]+0x00000008u); // 800CC298
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 800CC29C
  c->r[5]=R32(c->r[4]+0x00000010u); // 800CC2A0
  c->r[0]=R32(c->r[4]+0x00000014u); // 800CC2A4
  W32(c->r[3]+0x00000000u,c->r[9]); // 800CC2A8
  W32(c->r[3]+0x00000004u,c->r[8]); // 800CC2AC
  W32(c->r[3]+0x00000008u,c->r[7]); // 800CC2B0
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 800CC2B4
  W32(c->r[3]+0x00000010u,c->r[5]); // 800CC2B8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800CC2BC
  return; // 800CC2C0
}

// fn_800CC2C4
void f_800CC2C4(Ctx* __restrict c) {
  trace_call(0x800CC2C4u);
  c->r[0]=R32(c->r[3]+0x00000454u); // 800CC2C4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800CC2C8
  c->r[3]=c->r[0]^0x00000001u; // 800CC2CC
  return; // 800CC2D0
}

// fn_800CC2D4
void f_800CC2D4(Ctx* __restrict c) {
  trace_call(0x800CC2D4u);
  {uint32_t ea=c->r[1]+0xFFFFEE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC2D4
  c->r[0]=c->lr; // 800CC2D8
  W32(c->r[1]+0x000011A4u,c->r[0]); // 800CC2DC
  c->r[11]=c->r[1]+0x000011A0u; // 800CC2E0
  c->lr=0x800CC2E8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC2E4
  c->r[30]=c->r[4]|c->r[4]; // 800CC2E8
  c->r[29]=c->r[3]|c->r[3]; // 800CC2EC
  c->r[12]=R32(c->r[30]+0x00000000u); // 800CC2F0
  c->r[3]=c->r[30]|c->r[30]; // 800CC2F4
  c->r[31]=c->r[5]|c->r[5]; // 800CC2F8
  c->r[27]=c->r[6]|c->r[6]; // 800CC2FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CC300
  c->ctr=c->r[12]; // 800CC304
  if (true) { c->lr=0x800CC30Cu; dispatch(c,c->ctr); } // 800CC308
  cmps(c,0,(int32_t)c->r[3],1033); // 800CC30C
  if (crb(c,2)) { goto L_800CC5D4; } // 800CC310
  c->r[0]=R8(c->r[30]+0x00000170u); // 800CC314
  cmpu(c,0,c->r[0],0x00000001u); // 800CC318
  if (!crb(c,2)) { goto L_800CC324; } // 800CC31C
  goto L_800CC5D4; // 800CC320
L_800CC324:;
  c->r[28]=R8(c->r[30]+0x00000035u); // 800CC324
  c->lr=0x800CC32Cu; f_80051FF4(c); // 800CC328
  c->lr=0x800CC330u; f_8013E16C(c); // 800CC32C
  {uint32_t ea=c->r[2]+0xFFFF8F84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC330
  fcmp(c,0,c->f[1],c->f[0]); // 800CC334
  if (!crb(c,0)) { goto L_800CC5D4; } // 800CC338
  c->r[3]=c->r[1]+0x000001ACu; // 800CC33C
  c->lr=0x800CC344u; f_80146A34(c); // 800CC340
  cmps(c,0,(int32_t)c->r[31],1); // 800CC344
  if (!crb(c,2)) { goto L_800CC38C; } // 800CC348
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 800CC34C
  c->r[3]=c->r[29]+c->r[0]; // 800CC350
  c->r[28]=R32(c->r[3]+0x000004F4u); // 800CC354
  cmps(c,0,(int32_t)c->r[28],0); // 800CC358
  if (crb(c,2)) { goto L_800CC3CC; } // 800CC35C
  if (crb(c,2)) { goto L_800CC3CC; } // 800CC360
  c->lr=0x800CC368u; f_80051FF4(c); // 800CC364
  c->r[4]=c->r[3]|c->r[3]; // 800CC368
  c->r[5]=c->r[28]|c->r[28]; // 800CC36C
  c->r[3]=c->r[1]+0x0000011Cu; // 800CC370
  c->r[6]=0u+0x00000001u; // 800CC374
  c->lr=0x800CC37Cu; f_8013DB40(c); // 800CC378
  c->r[3]=c->r[1]+0x000001ACu; // 800CC37C
  c->r[4]=c->r[1]+0x0000011Cu; // 800CC380
  c->lr=0x800CC388u; f_800CC5EC(c); // 800CC384
  goto L_800CC3CC; // 800CC388
L_800CC38C:;
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 800CC38C
  c->r[0]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800CC390
  c->r[3]=c->r[29]+c->r[3]; // 800CC394
  c->r[3]=c->r[3]+c->r[0]; // 800CC398
  c->r[28]=R32(c->r[3]+0x000004E4u); // 800CC39C
  cmps(c,0,(int32_t)c->r[28],0); // 800CC3A0
  if (crb(c,2)) { goto L_800CC3CC; } // 800CC3A4
  c->lr=0x800CC3ACu; f_80051FF4(c); // 800CC3A8
  c->r[4]=c->r[3]|c->r[3]; // 800CC3AC
  c->r[5]=c->r[28]|c->r[28]; // 800CC3B0
  c->r[3]=c->r[1]+0x000000D4u; // 800CC3B4
  c->r[6]=0u+0x00000001u; // 800CC3B8
  c->lr=0x800CC3C0u; f_8013DB40(c); // 800CC3BC
  c->r[3]=c->r[1]+0x000001ACu; // 800CC3C0
  c->r[4]=c->r[1]+0x000000D4u; // 800CC3C4
  c->lr=0x800CC3CCu; f_800CC5EC(c); // 800CC3C8
L_800CC3CC:;
  c->r[3]=c->r[30]+0x00000010u; // 800CC3CC
  c->r[4]=0u+0x00000000u; // 800CC3D0
  c->lr=0x800CC3D8u; f_8003FF28(c); // 800CC3D4
  c->r[3]=c->r[1]+0x000001ACu; // 800CC3D8
  c->lr=0x800CC3E0u; f_80146F08(c); // 800CC3DC
  cmps(c,0,(int32_t)c->r[3],0); // 800CC3E0
  if (!crb(c,2)) { goto L_800CC3F4; } // 800CC3E4
  c->r[3]=c->r[30]+0x00000010u; // 800CC3E8
  c->r[4]=0u+0x00000000u; // 800CC3EC
  c->lr=0x800CC3F4u; f_8003FF28(c); // 800CC3F0
L_800CC3F4:;
  c->r[3]=c->r[1]+0x00000038u; // 800CC3F4
  c->r[4]=c->r[30]+0x00000018u; // 800CC3F8
  c->lr=0x800CC400u; f_8003F484(c); // 800CC3FC
  c->r[3]=c->r[1]+0x000001ACu; // 800CC400
  c->lr=0x800CC408u; f_80146F08(c); // 800CC404
  cmps(c,0,(int32_t)c->r[3],0); // 800CC408
  if (crb(c,2)) { goto L_800CC450; } // 800CC40C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC410
  c->r[3]=c->r[1]+0x000001ACu; // 800CC414
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC418
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CC41C
  c->lr=0x800CC424u; f_80146A14(c); // 800CC420
  c->r[6]=R32(c->r[30]+0x00000024u); // 800CC424
  c->r[3]=c->r[1]+0x000001ACu; // 800CC428
  c->r[5]=R32(c->r[30]+0x00000028u); // 800CC42C
  c->r[4]=c->r[1]+0x0000001Cu; // 800CC430
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800CC434
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800CC438
  W32(c->r[1]+0x00000020u,c->r[5]); // 800CC43C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC440
  c->lr=0x800CC448u; f_80146DB8(c); // 800CC444
  c->r[3]=c->r[1]+0x000001ACu; // 800CC448
  c->lr=0x800CC450u; f_80146A94(c); // 800CC44C
L_800CC450:;
  c->r[0]=R8(c->r[30]+0x00000034u); // 800CC450
  cmps(c,0,(int32_t)c->r[0],1); // 800CC454
  if (crb(c,2)) { goto L_800CC468; } // 800CC458
  c->r[0]=R8(c->r[30]+0x00000036u); // 800CC45C
  cmps(c,0,(int32_t)c->r[0],1); // 800CC460
  if (!crb(c,2)) { goto L_800CC5D4; } // 800CC464
L_800CC468:;
  c->r[3]=c->r[1]+0x00000164u; // 800CC468
  c->lr=0x800CC470u; f_80146A34(c); // 800CC46C
  c->r[3]=R32(c->r[29]+0x000004A8u); // 800CC470
  c->r[0]=R8(c->r[3]+0x00000000u); // 800CC474
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CC478
  cmps(c,0,(int32_t)c->r[0],69); // 800CC47C
  if (crb(c,2)) { goto L_800CC48C; } // 800CC480
  cmps(c,0,(int32_t)c->r[0],101); // 800CC484
  if (!crb(c,2)) { goto L_800CC548; } // 800CC488
L_800CC48C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 800CC48C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CC490
  cmps(c,0,(int32_t)c->r[0],90); // 800CC494
  if (crb(c,2)) { goto L_800CC4A4; } // 800CC498
  cmps(c,0,(int32_t)c->r[0],122); // 800CC49C
  if (!crb(c,2)) { goto L_800CC548; } // 800CC4A0
L_800CC4A4:;
  cmps(c,0,(int32_t)c->r[31],1); // 800CC4A4
  if (!crb(c,2)) { goto L_800CC548; } // 800CC4A8
  c->r[3]=R32(c->r[30]+0x00000168u); // 800CC4AC
  cmps(c,0,(int32_t)c->r[3],1); // 800CC4B0
  if (crb(c,2)) { goto L_800CC4C4; } // 800CC4B4
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 800CC4B8
  cmpu(c,0,c->r[0],0x00000002u); // 800CC4BC
  if (crb(c,1)) { goto L_800CC548; } // 800CC4C0
L_800CC4C4:;
  c->lr=0x800CC4C8u; f_80051FF4(c); // 800CC4C4
  c->r[31]=0u+0x803E0000u; // 800CC4C8
  c->r[4]=c->r[3]|c->r[3]; // 800CC4CC
  c->r[31]=c->r[31]+0xFFFFA848u; // 800CC4D0
  c->r[3]=c->r[1]+0x0000008Cu; // 800CC4D4
  c->r[5]=c->r[31]+0x00000076u; // 800CC4D8
  c->r[6]=0u+0x00000001u; // 800CC4DC
  c->lr=0x800CC4E4u; f_8013DB40(c); // 800CC4E0
  c->r[3]=c->r[1]+0x00000164u; // 800CC4E4
  c->r[4]=c->r[1]+0x0000008Cu; // 800CC4E8
  c->lr=0x800CC4F0u; f_800CC5EC(c); // 800CC4EC
  c->r[3]=0u+0x805C0000u; // 800CC4F0
  c->r[4]=R32(c->r[30]+0x0000016Cu); // 800CC4F4
  c->r[3]=c->r[3]+0x00005B94u; // 800CC4F8
  c->lr=0x800CC500u; f_802138EC(c); // 800CC4FC
  c->r[6]=R32(c->r[29]+0x00000000u); // 800CC500
  c->r[5]=c->r[30]|c->r[30]; // 800CC504
  c->r[0]=R32(c->r[29]+0x00000004u); // 800CC508
  c->r[28]=c->r[31]+0x0000007Cu; // 800CC50C
  c->r[3]=c->r[1]+0x00000028u; // 800CC510
  c->r[4]=c->r[1]+0x00000008u; // 800CC514
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CC518
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CC51C
  c->lr=0x800CC524u; f_800ABC54(c); // 800CC520
  c->r[4]=0u+0x803E0000u; // 800CC524
  c->r[3]=c->r[1]+0x000001F4u; // 800CC528
  c->r[4]=c->r[4]+0xFFFF9D38u; // 800CC52C
  c->lr=0x800CC534u; f_800ABCC0(c); // 800CC530
  c->r[5]=c->r[28]|c->r[28]; // 800CC534
  c->r[3]=c->r[1]+0x000001F4u; // 800CC538
  c->r[4]=c->r[1]+0x00000028u; // 800CC53C
  c->lr=0x800CC544u; f_80077408(c); // 800CC540
  goto L_800CC574; // 800CC544
L_800CC548:;
  c->lr=0x800CC54Cu; f_80051FF4(c); // 800CC548
  c->r[5]=0u+0x803E0000u; // 800CC54C
  c->r[4]=c->r[3]|c->r[3]; // 800CC550
  c->r[5]=c->r[5]+0xFFFFA848u; // 800CC554
  c->r[3]=c->r[1]+0x00000044u; // 800CC558
  c->r[5]=c->r[5]+0x00000107u; // 800CC55C
  c->r[6]=0u+0x00000001u; // 800CC560
  c->lr=0x800CC568u; f_8013DB40(c); // 800CC564
  c->r[3]=c->r[1]+0x00000164u; // 800CC568
  c->r[4]=c->r[1]+0x00000044u; // 800CC56C
  c->lr=0x800CC574u; f_800CC5EC(c); // 800CC570
L_800CC574:;
  c->r[3]=c->r[1]+0x00000164u; // 800CC574
  c->lr=0x800CC57Cu; f_80146F08(c); // 800CC578
  cmps(c,0,(int32_t)c->r[3],0); // 800CC57C
  if (crb(c,2)) { goto L_800CC5D4; } // 800CC580
  c->r[3]=c->r[1]+0x00000164u; // 800CC584
  c->r[4]=0u+0x00000006u; // 800CC588
  c->r[5]=0u+0x00000002u; // 800CC58C
  c->lr=0x800CC594u; f_8014763C(c); // 800CC590
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC594
  c->r[3]=c->r[1]+0x00000164u; // 800CC598
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC59C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CC5A0
  c->lr=0x800CC5A8u; f_80146A14(c); // 800CC5A4
  c->r[6]=R32(c->r[30]+0x00000024u); // 800CC5A8
  c->r[3]=c->r[1]+0x00000164u; // 800CC5AC
  c->r[5]=R32(c->r[30]+0x00000028u); // 800CC5B0
  c->r[4]=c->r[1]+0x00000010u; // 800CC5B4
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800CC5B8
  W32(c->r[1]+0x00000010u,c->r[6]); // 800CC5BC
  W32(c->r[1]+0x00000014u,c->r[5]); // 800CC5C0
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CC5C4
  c->lr=0x800CC5CCu; f_80146DB8(c); // 800CC5C8
  c->r[3]=c->r[1]+0x00000164u; // 800CC5CC
  c->lr=0x800CC5D4u; f_80146A94(c); // 800CC5D0
L_800CC5D4:;
  c->r[11]=c->r[1]+0x000011A0u; // 800CC5D4
  c->lr=0x800CC5DCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CC5D8
  c->r[0]=R32(c->r[1]+0x000011A4u); // 800CC5DC
  c->lr=c->r[0]; // 800CC5E0
  c->r[1]=c->r[1]+0x000011A0u; // 800CC5E4
  return; // 800CC5E8
}

// fn_800CC5EC
void f_800CC5EC(Ctx* __restrict c) {
  trace_call(0x800CC5ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC5EC
  c->r[0]=c->lr; // 800CC5F0
  c->r[7]=c->r[3]+0xFFFFFFFCu; // 800CC5F4
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 800CC5F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC5FC
  c->r[0]=0u+0x00000006u; // 800CC600
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CC604
  c->r[30]=c->r[3]|c->r[3]; // 800CC608
  c->r[31]=c->r[4]|c->r[4]; // 800CC60C
  c->ctr=c->r[0]; // 800CC610
L_800CC614:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800CC614
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 800CC618
  W32(c->r[7]+0x00000004u,c->r[5]); // 800CC61C
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 800CC620
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CC614; } // 800CC624
  c->r[0]=R32(c->r[4]+0x00000034u); // 800CC628
  c->r[4]=c->r[4]+0x00000038u; // 800CC62C
  W32(c->r[3]+0x00000034u,c->r[0]); // 800CC630
  c->r[3]=c->r[3]+0x00000038u; // 800CC634
  c->lr=0x800CC63Cu; f_80350B88(c); // 800CC638
  c->r[4]=R32(c->r[31]+0x00000040u); // 800CC63C
  c->r[3]=c->r[30]|c->r[30]; // 800CC640
  c->r[0]=R32(c->r[31]+0x00000044u); // 800CC644
  W32(c->r[30]+0x00000040u,c->r[4]); // 800CC648
  W32(c->r[30]+0x00000044u,c->r[0]); // 800CC64C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CC650
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC654
  c->lr=c->r[0]; // 800CC658
  c->r[1]=c->r[1]+0x00000010u; // 800CC65C
  return; // 800CC660
}

// fn_800CC664
void f_800CC664(Ctx* __restrict c) {
  trace_call(0x800CC664u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC664
  c->r[0]=c->lr; // 800CC668
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CC66C
  c->r[11]=c->r[1]+0x00000050u; // 800CC670
  c->lr=0x800CC678u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC674
  c->r[27]=c->r[4]|c->r[4]; // 800CC678
  c->r[31]=c->r[3]|c->r[3]; // 800CC67C
  c->r[12]=R32(c->r[27]+0x00000000u); // 800CC680
  c->r[3]=c->r[27]|c->r[27]; // 800CC684
  c->r[28]=c->r[5]|c->r[5]; // 800CC688
  c->r[29]=c->r[6]|c->r[6]; // 800CC68C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CC690
  c->ctr=c->r[12]; // 800CC694
  if (true) { c->lr=0x800CC69Cu; dispatch(c,c->ctr); } // 800CC698
  cmps(c,0,(int32_t)c->r[3],1033); // 800CC69C
  if (crb(c,2)) { goto L_800CC7C4; } // 800CC6A0
  c->r[0]=R8(c->r[27]+0x00000170u); // 800CC6A4
  cmpu(c,0,c->r[0],0x00000001u); // 800CC6A8
  if (!crb(c,2)) { goto L_800CC6B4; } // 800CC6AC
  goto L_800CC7C4; // 800CC6B0
L_800CC6B4:;
  c->r[30]=R8(c->r[27]+0x00000035u); // 800CC6B4
  c->r[3]=c->r[1]+0x0000002Cu; // 800CC6B8
  c->r[4]=c->r[27]+0x00000018u; // 800CC6BC
  c->lr=0x800CC6C4u; f_8003F484(c); // 800CC6C0
  c->r[12]=R32(c->r[27]+0x00000000u); // 800CC6C4
  c->r[3]=c->r[27]|c->r[27]; // 800CC6C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CC6CC
  c->ctr=c->r[12]; // 800CC6D0
  if (true) { c->lr=0x800CC6D8u; dispatch(c,c->ctr); } // 800CC6D4
  cmps(c,0,(int32_t)c->r[3],1029); // 800CC6D8
  if (!crb(c,2)) { goto L_800CC720; } // 800CC6DC
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC6E0
  c->r[4]=0u+0x803E0000u; // 800CC6E4
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 800CC6E8
  c->r[4]=c->r[4]+0xFFFFA848u; // 800CC6EC
  c->r[6]=R32(c->r[1]+0x00000030u); // 800CC6F0
  c->f[2]=c->f[1]; // 800CC6F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CC6F8
  c->r[3]=c->r[31]+0x00000800u; // 800CC6FC
  W32(c->r[1]+0x00000020u,c->r[5]); // 800CC700
  c->r[4]=c->r[4]+0x00000112u; // 800CC704
  c->r[5]=c->r[1]+0x00000020u; // 800CC708
  W32(c->r[1]+0x00000024u,c->r[6]); // 800CC70C
  c->r[6]=0u+0x00000001u; // 800CC710
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CC714
  c->lr=0x800CC71Cu; f_800C1BA0(c); // 800CC718
  goto L_800CC7C4; // 800CC71C
L_800CC720:;
  cmps(c,0,(int32_t)c->r[28],1); // 800CC720
  if (!crb(c,2)) { goto L_800CC774; } // 800CC724
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 800CC728
  c->r[8]=c->r[31]+c->r[0]; // 800CC72C
  c->r[0]=R32(c->r[8]+0x000004F8u); // 800CC730
  cmps(c,0,(int32_t)c->r[0],0); // 800CC734
  if (crb(c,2)) { goto L_800CC7C4; } // 800CC738
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 800CC73C
  c->r[3]=c->r[31]+0x00000800u; // 800CC740
  c->r[4]=R32(c->r[1]+0x00000030u); // 800CC744
  c->r[5]=c->r[1]+0x00000014u; // 800CC748
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CC74C
  c->r[6]=0u+0x00000001u; // 800CC750
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC754
  W32(c->r[1]+0x00000014u,c->r[7]); // 800CC758
  c->f[2]=c->f[1]; // 800CC75C
  W32(c->r[1]+0x00000018u,c->r[4]); // 800CC760
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CC764
  c->r[4]=R32(c->r[8]+0x000004F8u); // 800CC768
  c->lr=0x800CC770u; f_800C1BA0(c); // 800CC76C
  goto L_800CC7C4; // 800CC770
L_800CC774:;
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 800CC774
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800CC778
  c->r[3]=c->r[31]+c->r[3]; // 800CC77C
  c->r[8]=c->r[3]+c->r[0]; // 800CC780
  c->r[0]=R32(c->r[8]+0x000004E8u); // 800CC784
  cmps(c,0,(int32_t)c->r[0],0); // 800CC788
  if (crb(c,2)) { goto L_800CC7C4; } // 800CC78C
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 800CC790
  c->r[3]=c->r[31]+0x00000800u; // 800CC794
  c->r[4]=R32(c->r[1]+0x00000030u); // 800CC798
  c->r[5]=c->r[1]+0x00000008u; // 800CC79C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CC7A0
  c->r[6]=0u+0x00000001u; // 800CC7A4
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC7A8
  W32(c->r[1]+0x00000008u,c->r[7]); // 800CC7AC
  c->f[2]=c->f[1]; // 800CC7B0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CC7B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CC7B8
  c->r[4]=R32(c->r[8]+0x000004E8u); // 800CC7BC
  c->lr=0x800CC7C4u; f_800C1BA0(c); // 800CC7C0
L_800CC7C4:;
  c->r[11]=c->r[1]+0x00000050u; // 800CC7C4
  c->lr=0x800CC7CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CC7C8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CC7CC
  c->lr=c->r[0]; // 800CC7D0
  c->r[1]=c->r[1]+0x00000050u; // 800CC7D4
  return; // 800CC7D8
}

// fn_800CC7DC
void f_800CC7DC(Ctx* __restrict c) {
  trace_call(0x800CC7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC7DC
  c->r[0]=c->lr; // 800CC7E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CC7E4
  c->r[11]=c->r[1]+0x00000020u; // 800CC7E8
  c->lr=0x800CC7F0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC7EC
  c->r[28]=c->r[3]|c->r[3]; // 800CC7F0
  c->r[29]=c->r[4]|c->r[4]; // 800CC7F4
  c->r[30]=c->r[5]|c->r[5]; // 800CC7F8
  c->r[31]=0u+0x00000000u; // 800CC7FC
  c->lr=0x800CC804u; f_80291D94(c); // 800CC800
  c->r[3]=c->r[3]^0x80000000u; // 800CC804
  c->r[0]=0u+0x43300000u; // 800CC808
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800CC80C
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[3]=RF64(ea);} // 800CC810
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CC814
  {uint32_t ea=c->r[2]+0xFFFF8EB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC818
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800CC81C
  {uint32_t ea=c->r[2]+0xFFFF8E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC820
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800CC824
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800CC828
  fcmp(c,0,c->f[1],c->f[0]); // 800CC82C
  if (!crb(c,1)) { goto L_800CC838; } // 800CC830
  c->r[31]=0u+0x00000001u; // 800CC834
L_800CC838:;
  c->r[0]=R32(c->r[29]+0x00000150u); // 800CC838
  cmps(c,0,(int32_t)c->r[0],0); // 800CC83C
  if (crb(c,2)) { goto L_800CC884; } // 800CC840
  c->r[12]=R32(c->r[28]+0x00000010u); // 800CC844
  c->r[3]=c->r[28]|c->r[28]; // 800CC848
  c->r[4]=c->r[29]|c->r[29]; // 800CC84C
  c->r[5]=c->r[30]|c->r[30]; // 800CC850
  c->r[12]=R32(c->r[12]+0x00000344u); // 800CC854
  c->r[6]=c->r[31]|c->r[31]; // 800CC858
  c->ctr=c->r[12]; // 800CC85C
  if (true) { c->lr=0x800CC864u; dispatch(c,c->ctr); } // 800CC860
  c->r[12]=R32(c->r[28]+0x00000010u); // 800CC864
  c->r[3]=c->r[28]|c->r[28]; // 800CC868
  c->r[4]=c->r[29]|c->r[29]; // 800CC86C
  c->r[5]=c->r[30]|c->r[30]; // 800CC870
  c->r[12]=R32(c->r[12]+0x00000348u); // 800CC874
  c->r[6]=c->r[31]|c->r[31]; // 800CC878
  c->ctr=c->r[12]; // 800CC87C
  if (true) { c->lr=0x800CC884u; dispatch(c,c->ctr); } // 800CC880
L_800CC884:;
  c->r[11]=c->r[1]+0x00000020u; // 800CC884
  c->lr=0x800CC88Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CC888
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CC88C
  c->lr=c->r[0]; // 800CC890
  c->r[1]=c->r[1]+0x00000020u; // 800CC894
  return; // 800CC898
}

// fn_800CC89C
void f_800CC89C(Ctx* __restrict c) {
  trace_call(0x800CC89Cu);
  {uint32_t ea=c->r[1]+0xFFFFEE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC89C
  c->r[0]=c->lr; // 800CC8A0
  W32(c->r[1]+0x00001204u,c->r[0]); // 800CC8A4
  c->r[0]=0u+0x000011F8u; // 800CC8A8
  {uint32_t ea=c->r[1]+0x000011F0u; WF64(ea,c->f[31]);} // 800CC8AC
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800CC8B0
  c->r[11]=c->r[1]+0x000011F0u; // 800CC8B4
  c->lr=0x800CC8BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC8B8
  c->r[31]=c->r[1]|c->r[1]; // 800CC8BC
  {uint32_t ea=c->r[6]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CC8C0
  c->r[27]=c->r[3]|c->r[3]; // 800CC8C4
  c->r[28]=c->r[6]|c->r[6]; // 800CC8C8
  c->r[3]=c->r[31]+0x0000025Cu; // 800CC8CC
  c->lr=0x800CC8D4u; f_800BCA04(c); // 800CC8D0
  {uint32_t ea=c->r[28]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC8D4
  c->r[3]=c->r[31]+0x00000030u; // 800CC8D8
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC8DC
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CC8E0
  c->lr=0x800CC8E8u; f_800521A0(c); // 800CC8E4
  {uint32_t ea=c->r[28]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC8E8
  c->r[3]=c->r[31]+0x00000024u; // 800CC8EC
  {uint32_t ea=c->r[28]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC8F0
  {uint32_t ea=c->r[28]+0x0000016Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CC8F4
  c->lr=0x800CC8FCu; f_800521A0(c); // 800CC8F8
  c->r[3]=c->r[31]+0x00000018u; // 800CC8FC
  c->r[4]=c->r[31]+0x00000024u; // 800CC900
  c->r[5]=c->r[31]+0x00000030u; // 800CC904
  c->lr=0x800CC90Cu; f_80064C74(c); // 800CC908
  c->r[3]=c->r[31]+0x000000A8u; // 800CC90C
  c->lr=0x800CC914u; f_80063ACC(c); // 800CC910
  c->r[5]=0u+0x803F0000u; // 800CC914
  c->r[3]=c->r[31]+0x000000CCu; // 800CC918
  c->r[5]=c->r[5]+0x00001AC0u; // 800CC91C
  c->r[4]=c->r[31]+0x00000030u; // 800CC920
  W32(c->r[31]+0x000000C8u,c->r[5]); // 800CC924
  c->lr=0x800CC92Cu; f_8003F484(c); // 800CC928
  c->r[3]=c->r[31]+0x000000D8u; // 800CC92C
  c->r[4]=c->r[31]+0x00000018u; // 800CC930
  c->lr=0x800CC938u; f_8003F484(c); // 800CC934
  c->r[3]=c->r[31]+0x000003A0u; // 800CC938
  c->lr=0x800CC940u; f_8003F3AC(c); // 800CC93C
  c->lr=0x800CC944u; f_8003DA30(c); // 800CC940
  c->r[4]=c->r[31]+0x000000A8u; // 800CC944
  c->r[5]=c->r[31]+0x000003A0u; // 800CC948
  c->lr=0x800CC950u; f_8003E7E4(c); // 800CC94C
  {uint32_t ea=c->r[31]+0x000003ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC950
  c->r[29]=c->r[3]|c->r[3]; // 800CC954
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC958
  fcmp(c,0,c->f[1],c->f[0]); // 800CC95C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CC960
  c->r[0]=c->cr; // 800CC964
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800CC968
  if (crb(c,2)) { goto L_800CCA3C; } // 800CC96C
  c->r[5]=R32(c->r[3]+0x00000000u); // 800CC970
  c->f[1]=c->f[31]; // 800CC974
  c->r[0]=R32(c->r[3]+0x00000004u); // 800CC978
  c->r[3]=c->r[31]+0x000000E4u; // 800CC97C
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CC980
  c->r[4]=c->r[31]+0x00000030u; // 800CC984
  W32(c->r[31]+0x00000008u,c->r[5]); // 800CC988
  c->r[5]=c->r[31]+0x000003D8u; // 800CC98C
  c->r[6]=c->r[31]+0x00000008u; // 800CC990
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800CC994
  c->r[7]=0u+0x00000001u; // 800CC998
  c->r[8]=0u+0xFFFFFFFFu; // 800CC99C
  c->lr=0x800CC9A4u; f_8003FF2C(c); // 800CC9A0
  c->r[30]=0u+0x803F0000u; // 800CC9A4
  c->r[3]=c->r[31]+0x00000010u; // 800CC9A8
  c->r[30]=c->r[30]+0x00002468u; // 800CC9AC
  W32(c->r[31]+0x000000E4u,c->r[30]); // 800CC9B0
  c->r[4]=R32(c->r[29]+0x00000000u); // 800CC9B4
  c->r[0]=R32(c->r[29]+0x00000004u); // 800CC9B8
  W32(c->r[31]+0x00000010u,c->r[4]); // 800CC9BC
  W32(c->r[31]+0x00000014u,c->r[0]); // 800CC9C0
  c->lr=0x800CC9C8u; f_8003F1D4(c); // 800CC9C4
  cmps(c,0,(int32_t)c->r[3],0); // 800CC9C8
  if (crb(c,2)) { goto L_800CCA2C; } // 800CC9CC
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CC9D0
  c->lr=0x800CC9D8u; f_802A6EE4(c); // 800CC9D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CC9D8
  c->r[28]=c->r[3]|c->r[3]; // 800CC9DC
  if (crb(c,2)) { goto L_800CCA2C; } // 800CC9E0
  if (crb(c,2)) { goto L_800CC9F4; } // 800CC9E4
  W32(c->r[31]+0x00000050u,c->r[1]); // 800CC9E8
  c->lr=0x800CC9F0u; f_8006BEE8(c); // 800CC9EC
  W32(c->r[28]+0x00000000u,c->r[30]); // 800CC9F0
L_800CC9F4:;
  c->r[3]=c->r[28]|c->r[28]; // 800CC9F4
  c->r[4]=c->r[31]+0x000000E4u; // 800CC9F8
  c->lr=0x800CCA00u; f_8006BDA8(c); // 800CC9FC
  c->r[29]=addc(c,c->r[28],0x00000178u,0); cr0(c,c->r[29]); // 800CCA00
  if (crb(c,2)) { goto L_800CCA18; } // 800CCA04
  W32(c->r[31]+0x00000068u,c->r[1]); // 800CCA08
  c->r[3]=c->r[29]|c->r[29]; // 800CCA0C
  c->r[4]=c->r[28]|c->r[28]; // 800CCA10
  c->lr=0x800CCA18u; f_80064CE8(c); // 800CCA14
L_800CCA18:;
  c->r[3]=c->r[31]+0x00000010u; // 800CCA18
  c->lr=0x800CCA20u; f_80068A78(c); // 800CCA1C
  c->r[4]=c->r[29]|c->r[29]; // 800CCA20
  c->r[3]=c->r[3]+0x00000030u; // 800CCA24
  c->lr=0x800CCA2Cu; f_8003FD14(c); // 800CCA28
L_800CCA2C:;
  c->r[0]=0u+0xFFFFFFFFu; // 800CCA2C
  c->r[3]=c->r[31]+0x000000E4u; // 800CCA30
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CCA34
  c->lr=0x800CCA3Cu; f_8006BEA8(c); // 800CCA38
L_800CCA3C:;
  c->r[3]=0u+0x00000000u; // 800CCA3C
  c->r[0]=0u+0x00000007u; // 800CCA40
  W32(c->r[31]+0x0000006Cu,c->r[3]); // 800CCA44
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800CCA48
  c->r[4]=c->r[31]+0x00000068u; // 800CCA4C
  c->ctr=c->r[0]; // 800CCA50
L_800CCA54:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CCA54
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CCA58
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CCA5C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CCA60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CCA54; } // 800CCA64
  c->r[4]=R32(c->r[4]+0x00000004u); // 800CCA68
  c->r[0]=0u+0xFFFFFFFFu; // 800CCA6C
  c->r[3]=c->r[31]+0x000003D8u; // 800CCA70
  W32(c->r[5]+0x00000004u,c->r[4]); // 800CCA74
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CCA78
  c->lr=0x800CCA80u; f_80046394(c); // 800CCA7C
  c->r[10]=c->r[31]|c->r[31]; // 800CCA80
  c->r[0]=0u+0x000011F8u; // 800CCA84
  {uint32_t ea=c->r[10]+c->r[0]; psq_load(c,31,ea,0,0);} // 800CCA88
  c->r[11]=c->r[10]+0x000011F0u; // 800CCA8C
  {uint32_t ea=c->r[31]+0x000011F0u; c->f[31]=RF64(ea);} // 800CCA90
  c->lr=0x800CCA98u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CCA94
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CCA98
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CCA9C
  c->r[1]=c->r[10]|c->r[10]; // 800CCAA0
  c->lr=c->r[0]; // 800CCAA4
  return; // 800CCAA8
}

// fn_800CCAAC
void f_800CCAAC(Ctx* __restrict c) {
  trace_call(0x800CCAACu);
  {uint32_t ea=c->r[1]+0xFFFFEF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCAAC
  c->r[0]=c->lr; // 800CCAB0
  W32(c->r[1]+0x00001104u,c->r[0]); // 800CCAB4
  c->r[11]=c->r[1]+0x00001100u; // 800CCAB8
  c->lr=0x800CCAC0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CCABC
  c->r[31]=c->r[1]|c->r[1]; // 800CCAC0
  c->r[28]=c->r[3]|c->r[3]; // 800CCAC4
  c->r[3]=c->r[5]|c->r[5]; // 800CCAC8
  c->r[29]=c->r[6]|c->r[6]; // 800CCACC
  c->lr=0x800CCAD4u; f_80068A78(c); // 800CCAD0
  c->r[12]=R32(c->r[3]+0x00000010u); // 800CCAD4
  c->r[30]=c->r[3]|c->r[3]; // 800CCAD8
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CCADC
  c->ctr=c->r[12]; // 800CCAE0
  if (true) { c->lr=0x800CCAE8u; dispatch(c,c->ctr); } // 800CCAE4
  c->r[5]=R32(c->r[3]+0x00000008u); // 800CCAE8
  c->r[3]=c->r[31]+0x0000002Cu; // 800CCAEC
  c->r[4]=c->r[29]+0x00000004u; // 800CCAF0
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800CCAF4
  W32(c->r[31]+0x00000024u,c->r[0]); // 800CCAF8
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800CCAFC
  c->lr=0x800CCB04u; f_80365B94(c); // 800CCB00
  c->r[12]=R32(c->r[30]+0x00000010u); // 800CCB04
  c->r[3]=c->r[30]|c->r[30]; // 800CCB08
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CCB0C
  c->ctr=c->r[12]; // 800CCB10
  if (true) { c->lr=0x800CCB18u; dispatch(c,c->ctr); } // 800CCB14
  c->r[4]=c->r[3]|c->r[3]; // 800CCB18
  c->r[3]=c->r[31]+0x0000010Cu; // 800CCB1C
  c->r[12]=R32(c->r[4]+0x00000000u); // 800CCB20
  c->r[5]=c->r[29]+0x00000004u; // 800CCB24
  c->r[12]=R32(c->r[12]+0x00000038u); // 800CCB28
  c->ctr=c->r[12]; // 800CCB2C
  if (true) { c->lr=0x800CCB34u; dispatch(c,c->ctr); } // 800CCB30
  {uint32_t ea=c->r[31]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCB34
  c->r[3]=c->r[31]+0x0000005Cu; // 800CCB38
  {uint32_t ea=c->r[31]+0x00000128u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCB3C
  {uint32_t ea=c->r[31]+0x00000138u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCB40
  c->lr=0x800CCB48u; f_800521A0(c); // 800CCB44
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCB48
  c->r[3]=c->r[31]+0x00000050u; // 800CCB4C
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCB50
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCB54
  c->lr=0x800CCB5Cu; f_800521A0(c); // 800CCB58
  c->r[3]=c->r[31]+0x00000050u; // 800CCB5C
  c->r[4]=c->r[31]+0x0000010Cu; // 800CCB60
  c->r[5]=c->r[3]|c->r[3]; // 800CCB64
  c->lr=0x800CCB6Cu; f_80394B04(c); // 800CCB68
  c->r[3]=c->r[31]+0x0000005Cu; // 800CCB6C
  c->r[5]=c->r[31]+0x00000050u; // 800CCB70
  c->r[4]=c->r[3]|c->r[3]; // 800CCB74
  c->lr=0x800CCB7Cu; f_80064C34(c); // 800CCB78
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCB7C
  c->r[3]=c->r[31]+0x000000D4u; // 800CCB80
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCB84
  c->r[4]=c->r[31]+0x0000005Cu; // 800CCB88
  c->lr=0x800CCB90u; f_800BCC9C(c); // 800CCB8C
  c->r[0]=R32(c->r[30]+0x000008A0u); // 800CCB90
  c->r[3]=c->r[31]+0x000000E0u; // 800CCB94
  c->r[4]=c->r[31]+0x00000048u; // 800CCB98
  W32(c->r[31]+0x000000F0u,c->r[0]); // 800CCB9C
  c->r[5]=R32(c->r[30]+0x00000000u); // 800CCBA0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800CCBA4
  W32(c->r[31]+0x00000048u,c->r[5]); // 800CCBA8
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800CCBAC
  c->lr=0x800CCBB4u; f_80063D44(c); // 800CCBB0
  c->lr=0x800CCBB8u; f_8003DA30(c); // 800CCBB4
  c->lr=0x800CCBBCu; f_8003ED58(c); // 800CCBB8
  W32(c->r[31]+0x00000020u,c->r[3]); // 800CCBBC
  W32(c->r[31]+0x00000028u,c->r[3]); // 800CCBC0
  c->r[3]=c->r[31]+0x000002B4u; // 800CCBC4
  c->lr=0x800CCBCCu; f_8003F3AC(c); // 800CCBC8
  c->r[0]=R32(c->r[31]+0x00000028u); // 800CCBCC
  W32(c->r[31]+0x00000018u,c->r[0]); // 800CCBD0
  c->lr=0x800CCBD8u; f_8003DA30(c); // 800CCBD4
  c->r[4]=c->r[31]+0x000000D4u; // 800CCBD8
  c->r[5]=c->r[31]+0x00000018u; // 800CCBDC
  c->r[6]=c->r[31]+0x000002B4u; // 800CCBE0
  c->lr=0x800CCBE8u; f_8003E788(c); // 800CCBE4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800CCBE8
  W32(c->r[31]+0x00000028u,c->r[3]); // 800CCBEC
  goto L_800CCD20; // 800CCBF0
L_800CCBF4:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 800CCBF4
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 800CCBF8
  cmpu(c,0,c->r[0],c->r[30]); // 800CCBFC
  if (crb(c,2)) { goto L_800CCCF0; } // 800CCC00
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCC04
  c->r[3]=c->r[31]+0x0000013Cu; // 800CCC08
  {uint32_t ea=c->r[29]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCC0C
  c->r[4]=c->r[31]+0x0000005Cu; // 800CCC10
  c->r[7]=R32(c->r[30]+0x00000000u); // 800CCC14
  c->r[5]=c->r[31]+0x000002ECu; // 800CCC18
  c->r[0]=R32(c->r[30]+0x00000004u); // 800CCC1C
  c->r[6]=c->r[31]+0x00000030u; // 800CCC20
  c->r[8]=0u+0xFFFFFFFFu; // 800CCC24
  W32(c->r[31]+0x00000030u,c->r[7]); // 800CCC28
  c->r[7]=0u+0x00000000u; // 800CCC2C
  W32(c->r[31]+0x00000034u,c->r[0]); // 800CCC30
  c->lr=0x800CCC38u; f_8003FF2C(c); // 800CCC34
  c->r[27]=0u+0x803F0000u; // 800CCC38
  c->r[3]=c->r[31]+0x00000140u; // 800CCC3C
  c->r[27]=c->r[27]+0x000067BCu; // 800CCC40
  c->r[4]=c->r[31]+0x00000040u; // 800CCC44
  W32(c->r[31]+0x0000013Cu,c->r[27]); // 800CCC48
  c->r[5]=R32(c->r[30]+0x00000000u); // 800CCC4C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800CCC50
  W32(c->r[31]+0x00000040u,c->r[5]); // 800CCC54
  W32(c->r[31]+0x00000044u,c->r[0]); // 800CCC58
  c->lr=0x800CCC60u; f_80063D44(c); // 800CCC5C
  c->r[5]=R32(c->r[31]+0x00000028u); // 800CCC60
  c->r[3]=c->r[31]+0x00000038u; // 800CCC64
  c->r[4]=R32(c->r[5]+0xFFFFFFF8u); // 800CCC68
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 800CCC6C
  W32(c->r[31]+0x00000038u,c->r[4]); // 800CCC70
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800CCC74
  c->lr=0x800CCC7Cu; f_8003F1D4(c); // 800CCC78
  cmps(c,0,(int32_t)c->r[3],0); // 800CCC7C
  if (crb(c,2)) { goto L_800CCCE0; } // 800CCC80
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CCC84
  c->lr=0x800CCC8Cu; f_802A6EE4(c); // 800CCC88
  cmps(c,0,(int32_t)c->r[3],0); // 800CCC8C
  c->r[26]=c->r[3]|c->r[3]; // 800CCC90
  if (crb(c,2)) { goto L_800CCCE0; } // 800CCC94
  if (crb(c,2)) { goto L_800CCCA8; } // 800CCC98
  W32(c->r[31]+0x0000007Cu,c->r[1]); // 800CCC9C
  c->lr=0x800CCCA4u; f_8006BEE8(c); // 800CCCA0
  W32(c->r[26]+0x00000000u,c->r[27]); // 800CCCA4
L_800CCCA8:;
  c->r[3]=c->r[26]|c->r[26]; // 800CCCA8
  c->r[4]=c->r[31]+0x0000013Cu; // 800CCCAC
  c->lr=0x800CCCB4u; f_8006BDA8(c); // 800CCCB0
  c->r[27]=addc(c,c->r[26],0x00000178u,0); cr0(c,c->r[27]); // 800CCCB4
  if (crb(c,2)) { goto L_800CCCCC; } // 800CCCB8
  W32(c->r[31]+0x00000094u,c->r[1]); // 800CCCBC
  c->r[3]=c->r[27]|c->r[27]; // 800CCCC0
  c->r[4]=c->r[26]|c->r[26]; // 800CCCC4
  c->lr=0x800CCCCCu; f_80064CE8(c); // 800CCCC8
L_800CCCCC:;
  c->r[3]=c->r[31]+0x00000038u; // 800CCCCC
  c->lr=0x800CCCD4u; f_80068A78(c); // 800CCCD0
  c->r[4]=c->r[27]|c->r[27]; // 800CCCD4
  c->r[3]=c->r[3]+0x00000030u; // 800CCCD8
  c->lr=0x800CCCE0u; f_8003FD14(c); // 800CCCDC
L_800CCCE0:;
  c->r[0]=0u+0xFFFFFFFFu; // 800CCCE0
  c->r[3]=c->r[31]+0x0000013Cu; // 800CCCE4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CCCE8
  c->lr=0x800CCCF0u; f_800B1BAC(c); // 800CCCEC
L_800CCCF0:;
  c->r[3]=c->r[31]+0x00000028u; // 800CCCF0
  c->r[4]=0u+0x00000000u; // 800CCCF4
  c->lr=0x800CCCFCu; f_8003ED68(c); // 800CCCF8
  c->r[0]=R32(c->r[31]+0x00000028u); // 800CCCFC
  W32(c->r[31]+0x00000010u,c->r[0]); // 800CCD00
  c->lr=0x800CCD08u; f_8003DA30(c); // 800CCD04
  c->r[4]=c->r[31]+0x000000D4u; // 800CCD08
  c->r[5]=c->r[31]+0x00000010u; // 800CCD0C
  c->r[6]=c->r[31]+0x000002B4u; // 800CCD10
  c->lr=0x800CCD18u; f_8003E788(c); // 800CCD14
  W32(c->r[31]+0x00000014u,c->r[3]); // 800CCD18
  W32(c->r[31]+0x00000028u,c->r[3]); // 800CCD1C
L_800CCD20:;
  c->lr=0x800CCD24u; f_8003DA30(c); // 800CCD20
  c->lr=0x800CCD28u; f_8003ECFC(c); // 800CCD24
  c->r[0]=R32(c->r[31]+0x00000028u); // 800CCD28
  c->r[4]=c->r[31]+0x00000008u; // 800CCD2C
  W32(c->r[31]+0x00000008u,c->r[3]); // 800CCD30
  c->r[3]=c->r[31]+0x0000000Cu; // 800CCD34
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800CCD38
  c->lr=0x800CCD40u; f_8003ED7C(c); // 800CCD3C
  cmps(c,0,(int32_t)c->r[3],0); // 800CCD40
  if (!crb(c,2)) { IRQCHK(c); goto L_800CCBF4; } // 800CCD44
  c->r[3]=0u+0x00000000u; // 800CCD48
  c->r[0]=0u+0x00000007u; // 800CCD4C
  W32(c->r[31]+0x00000098u,c->r[3]); // 800CCD50
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800CCD54
  c->r[4]=c->r[31]+0x00000094u; // 800CCD58
  c->ctr=c->r[0]; // 800CCD5C
L_800CCD60:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CCD60
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CCD64
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CCD68
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CCD6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CCD60; } // 800CCD70
  c->r[4]=R32(c->r[4]+0x00000004u); // 800CCD74
  c->r[0]=0u+0xFFFFFFFFu; // 800CCD78
  c->r[3]=c->r[31]+0x000002ECu; // 800CCD7C
  W32(c->r[5]+0x00000004u,c->r[4]); // 800CCD80
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CCD84
  c->lr=0x800CCD8Cu; f_80046394(c); // 800CCD88
  c->r[10]=c->r[31]|c->r[31]; // 800CCD8C
  c->r[11]=c->r[10]+0x00001100u; // 800CCD90
  c->lr=0x800CCD98u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CCD94
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CCD98
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CCD9C
  c->r[1]=c->r[10]|c->r[10]; // 800CCDA0
  c->lr=c->r[0]; // 800CCDA4
  return; // 800CCDA8
}

// fn_800CCDAC
void f_800CCDAC(Ctx* __restrict c) {
  trace_call(0x800CCDACu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCDAC
  c->r[0]=c->lr; // 800CCDB0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800CCDB4
  c->r[11]=c->r[1]+0x000000A0u; // 800CCDB8
  c->lr=0x800CCDC0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CCDBC
  c->r[29]=c->r[3]|c->r[3]; // 800CCDC0
  c->r[3]=c->r[5]|c->r[5]; // 800CCDC4
  c->r[30]=c->r[6]|c->r[6]; // 800CCDC8
  c->lr=0x800CCDD0u; f_80068A78(c); // 800CCDCC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800CCDD0
  c->r[31]=c->r[3]|c->r[3]; // 800CCDD4
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CCDD8
  c->ctr=c->r[12]; // 800CCDDC
  if (true) { c->lr=0x800CCDE4u; dispatch(c,c->ctr); } // 800CCDE0
  c->r[5]=R32(c->r[3]+0x00000008u); // 800CCDE4
  c->r[3]=c->r[1]+0x00000008u; // 800CCDE8
  c->r[4]=c->r[30]+0x00000004u; // 800CCDEC
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800CCDF0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CCDF4
  c->lr=0x800CCDFCu; f_80365B94(c); // 800CCDF8
  c->r[12]=R32(c->r[31]+0x00000010u); // 800CCDFC
  c->r[3]=c->r[31]|c->r[31]; // 800CCE00
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CCE04
  c->ctr=c->r[12]; // 800CCE08
  if (true) { c->lr=0x800CCE10u; dispatch(c,c->ctr); } // 800CCE0C
  c->r[4]=c->r[3]|c->r[3]; // 800CCE10
  c->r[3]=c->r[1]+0x00000060u; // 800CCE14
  c->r[12]=R32(c->r[4]+0x00000000u); // 800CCE18
  c->r[5]=c->r[30]+0x00000004u; // 800CCE1C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800CCE20
  c->ctr=c->r[12]; // 800CCE24
  if (true) { c->lr=0x800CCE2Cu; dispatch(c,c->ctr); } // 800CCE28
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCE2C
  c->r[3]=c->r[1]+0x00000018u; // 800CCE30
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCE34
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCE38
  c->lr=0x800CCE40u; f_800521A0(c); // 800CCE3C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCE40
  c->r[3]=c->r[1]+0x0000000Cu; // 800CCE44
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCE48
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCE4C
  c->lr=0x800CCE54u; f_800521A0(c); // 800CCE50
  c->r[3]=c->r[1]+0x0000000Cu; // 800CCE54
  c->r[4]=c->r[1]+0x00000060u; // 800CCE58
  c->r[5]=c->r[3]|c->r[3]; // 800CCE5C
  c->lr=0x800CCE64u; f_80394B04(c); // 800CCE60
  c->r[3]=c->r[1]+0x00000018u; // 800CCE64
  c->r[5]=c->r[1]+0x0000000Cu; // 800CCE68
  c->r[4]=c->r[3]|c->r[3]; // 800CCE6C
  c->lr=0x800CCE74u; f_80064C34(c); // 800CCE70
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCE74
  c->r[3]=c->r[30]+0x00000004u; // 800CCE78
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCE7C
  fcmp(c,0,c->f[1],c->f[3]); // 800CCE80
  if (!crb(c,1)) { goto L_800CCE98; } // 800CCE84
  {uint32_t ea=c->r[30]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCE88
  c->r[5]=c->r[31]|c->r[31]; // 800CCE8C
  c->r[4]=0u+0x00000016u; // 800CCE90
  c->lr=0x800CCE98u; f_800BC364(c); // 800CCE94
L_800CCE98:;
  c->r[3]=0u+0x00000000u; // 800CCE98
  c->r[0]=0u+0x00000007u; // 800CCE9C
  W32(c->r[1]+0x00000024u,c->r[3]); // 800CCEA0
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800CCEA4
  c->r[4]=c->r[1]+0x00000020u; // 800CCEA8
  c->ctr=c->r[0]; // 800CCEAC
L_800CCEB0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CCEB0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CCEB4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CCEB8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CCEBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CCEB0; } // 800CCEC0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CCEC4
  c->r[11]=c->r[1]+0x000000A0u; // 800CCEC8
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CCECC
  c->lr=0x800CCED4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CCED0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800CCED4
  c->lr=c->r[0]; // 800CCED8
  c->r[1]=c->r[1]+0x000000A0u; // 800CCEDC
  return; // 800CCEE0
}

// fn_800CCEE4
void f_800CCEE4(Ctx* __restrict c) {
  trace_call(0x800CCEE4u);
  {uint32_t ea=c->r[1]+0xFFFFFC90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCEE4
  c->r[0]=c->lr; // 800CCEE8
  W32(c->r[1]+0x00000374u,c->r[0]); // 800CCEEC
  {uint32_t ea=c->r[1]+0x00000360u; WF64(ea,c->f[31]);} // 800CCEF0
  {uint32_t ea=c->r[1]+0x00000368u; psq_store(c,31,ea,0,0);} // 800CCEF4
  {uint32_t ea=c->r[1]+0x00000350u; WF64(ea,c->f[30]);} // 800CCEF8
  {uint32_t ea=c->r[1]+0x00000358u; psq_store(c,30,ea,0,0);} // 800CCEFC
  c->r[11]=c->r[1]+0x00000350u; // 800CCF00
  c->lr=0x800CCF08u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CCF04
  {uint32_t ea=c->r[6]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CCF08
  c->r[29]=c->r[3]|c->r[3]; // 800CCF0C
  c->r[31]=c->r[5]|c->r[5]; // 800CCF10
  c->r[30]=c->r[6]|c->r[6]; // 800CCF14
  c->r[3]=c->r[1]+0x000001FCu; // 800CCF18
  c->lr=0x800CCF20u; f_800BCA04(c); // 800CCF1C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCF20
  c->r[3]=c->r[1]+0x00000030u; // 800CCF24
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCF28
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCF2C
  c->lr=0x800CCF34u; f_800521A0(c); // 800CCF30
  {uint32_t ea=c->r[30]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCF34
  c->r[3]=c->r[1]+0x00000024u; // 800CCF38
  {uint32_t ea=c->r[30]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCF3C
  {uint32_t ea=c->r[30]+0x0000016Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCF40
  c->lr=0x800CCF48u; f_800521A0(c); // 800CCF44
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CCF48
  c->r[3]=c->r[1]+0x00000018u; // 800CCF4C
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCF50
  c->f[2]=c->f[1]; // 800CCF54
  c->lr=0x800CCF5Cu; f_800521A0(c); // 800CCF58
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[30]=c->ps1[30]=RF32(ea);} // 800CCF5C
  c->r[3]=c->r[31]|c->r[31]; // 800CCF60
  c->r[30]=0u+0x00000000u; // 800CCF64
  c->lr=0x800CCF6Cu; f_80068A78(c); // 800CCF68
  c->r[12]=R32(c->r[3]+0x00000010u); // 800CCF6C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CCF70
  c->ctr=c->r[12]; // 800CCF74
  if (true) { c->lr=0x800CCF7Cu; dispatch(c,c->ctr); } // 800CCF78
  W32(c->r[1]+0x00000014u,c->r[4]); // 800CCF7C
  c->r[4]=0u+0xC8000000u; // 800CCF80
  W32(c->r[1]+0x00000010u,c->r[3]); // 800CCF84
  c->r[3]=c->r[1]+0x00000010u; // 800CCF88
  c->lr=0x800CCF90u; f_8003EDD0(c); // 800CCF8C
  cmps(c,0,(int32_t)c->r[3],0); // 800CCF90
  if (crb(c,2)) { goto L_800CCFA4; } // 800CCF94
  c->r[3]=c->r[31]|c->r[31]; // 800CCF98
  c->lr=0x800CCFA0u; f_80068A78(c); // 800CCF9C
  c->r[30]=R32(c->r[3]+0x00000910u); // 800CCFA0
L_800CCFA4:;
  c->r[3]=c->r[1]+0x000001FCu; // 800CCFA4
  c->r[4]=c->r[1]+0x00000024u; // 800CCFA8
  c->r[5]=0u+0x00000000u; // 800CCFAC
  c->lr=0x800CCFB4u; f_800BCA64(c); // 800CCFB0
  c->r[3]=c->r[1]+0x000001FCu; // 800CCFB4
  c->r[4]=c->r[1]+0x00000018u; // 800CCFB8
  c->r[5]=0u+0x00000000u; // 800CCFBC
  c->lr=0x800CCFC4u; f_800BCA94(c); // 800CCFC0
  c->f[1]=c->f[30]; // 800CCFC4
  c->r[3]=c->r[1]+0x000001FCu; // 800CCFC8
  c->r[4]=0u+0x00000000u; // 800CCFCC
  c->lr=0x800CCFD4u; f_800CD0A4(c); // 800CCFD0
  c->r[4]=c->r[30]|c->r[30]; // 800CCFD4
  c->r[3]=c->r[1]+0x000001FCu; // 800CCFD8
  c->r[5]=0u+0x00000000u; // 800CCFDC
  c->lr=0x800CCFE4u; f_800CD0CC(c); // 800CCFE0
  c->r[3]=c->r[1]+0x000001FCu; // 800CCFE4
  c->r[4]=0u+0x00000000u; // 800CCFE8
  c->r[5]=0u+0x00000000u; // 800CCFEC
  c->lr=0x800CCFF4u; f_800CD0F8(c); // 800CCFF0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CCFF4
  c->f[1]=c->f[31]; // 800CCFF8
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CCFFC
  c->r[3]=c->r[1]+0x00000078u; // 800CD000
  c->f[4]=c->f[3]; // 800CD004
  c->r[4]=c->r[1]+0x00000030u; // 800CD008
  c->f[5]=c->f[3]; // 800CD00C
  c->r[5]=c->r[1]+0x000001FCu; // 800CD010
  c->r[6]=0u+0x00000001u; // 800CD014
  c->r[7]=0u+0xFFFFFFFFu; // 800CD018
  c->lr=0x800CD020u; f_800BCAC4(c); // 800CD01C
  c->r[5]=R32(c->r[31]+0x00000000u); // 800CD020
  c->r[3]=c->r[1]+0x00000008u; // 800CD024
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CD028
  c->r[4]=c->r[1]+0x00000078u; // 800CD02C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CD030
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CD034
  c->lr=0x800CD03Cu; f_800B1AD4(c); // 800CD038
  c->r[3]=c->r[1]+0x00000078u; // 800CD03C
  c->r[4]=0u+0xFFFFFFFFu; // 800CD040
  c->lr=0x800CD048u; f_8006BCB4(c); // 800CD044
  c->r[3]=0u+0x00000000u; // 800CD048
  c->r[0]=0u+0x00000007u; // 800CD04C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 800CD050
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800CD054
  c->r[4]=c->r[1]+0x00000038u; // 800CD058
  c->ctr=c->r[0]; // 800CD05C
L_800CD060:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CD060
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CD064
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CD068
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CD06C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CD060; } // 800CD070
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CD074
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CD078
  {uint32_t ea=c->r[1]+0x00000368u; psq_load(c,31,ea,0,0);} // 800CD07C
  {uint32_t ea=c->r[1]+0x00000360u; c->f[31]=RF64(ea);} // 800CD080
  {uint32_t ea=c->r[1]+0x00000358u; psq_load(c,30,ea,0,0);} // 800CD084
  {uint32_t ea=c->r[1]+0x00000350u; c->f[30]=RF64(ea);} // 800CD088
  c->r[11]=c->r[1]+0x00000350u; // 800CD08C
  c->lr=0x800CD094u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CD090
  c->r[0]=R32(c->r[1]+0x00000374u); // 800CD094
  c->lr=c->r[0]; // 800CD098
  c->r[1]=c->r[1]+0x00000370u; // 800CD09C
  return; // 800CD0A0
}

// fn_800CD0A4
void f_800CD0A4(Ctx* __restrict c) {
  trace_call(0x800CD0A4u);
  cmps(c,0,(int32_t)c->r[4],8); // 800CD0A4
  if (!crb(c,0)) return; // 800CD0A8
  c->r[0]=R32(c->r[3]+0x00000140u); // 800CD0AC
  cmpu(c,0,c->r[4],c->r[0]); // 800CD0B0
  if (crb(c,0)) { goto L_800CD0C0; } // 800CD0B4
  c->r[0]=c->r[4]+0x00000001u; // 800CD0B8
  W32(c->r[3]+0x00000140u,c->r[0]); // 800CD0BC
L_800CD0C0:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)40); // 800CD0C0
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 800CD0C4
  return; // 800CD0C8
}

// fn_800CD0CC
void f_800CD0CC(Ctx* __restrict c) {
  trace_call(0x800CD0CCu);
  cmps(c,0,(int32_t)c->r[5],8); // 800CD0CC
  if (!crb(c,0)) return; // 800CD0D0
  c->r[0]=R32(c->r[3]+0x00000140u); // 800CD0D4
  cmpu(c,0,c->r[5],c->r[0]); // 800CD0D8
  if (crb(c,0)) { goto L_800CD0E8; } // 800CD0DC
  c->r[0]=c->r[5]+0x00000001u; // 800CD0E0
  W32(c->r[3]+0x00000140u,c->r[0]); // 800CD0E4
L_800CD0E8:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)40); // 800CD0E8
  c->r[3]=c->r[3]+c->r[0]; // 800CD0EC
  W32(c->r[3]+0x00000004u,c->r[4]); // 800CD0F0
  return; // 800CD0F4
}

// fn_800CD0F8
void f_800CD0F8(Ctx* __restrict c) {
  trace_call(0x800CD0F8u);
  cmps(c,0,(int32_t)c->r[5],8); // 800CD0F8
  if (!crb(c,0)) return; // 800CD0FC
  c->r[0]=R32(c->r[3]+0x00000140u); // 800CD100
  cmpu(c,0,c->r[5],c->r[0]); // 800CD104
  if (crb(c,0)) { goto L_800CD114; } // 800CD108
  c->r[0]=c->r[5]+0x00000001u; // 800CD10C
  W32(c->r[3]+0x00000140u,c->r[0]); // 800CD110
L_800CD114:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)40); // 800CD114
  c->r[3]=c->r[3]+c->r[0]; // 800CD118
  W32(c->r[3]+0x00000020u,c->r[4]); // 800CD11C
  return; // 800CD120
}

// fn_800CD124
void f_800CD124(Ctx* __restrict c) {
  trace_call(0x800CD124u);
  {uint32_t ea=c->r[1]+0xFFFFFC60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD124
  c->r[0]=c->lr; // 800CD128
  W32(c->r[1]+0x000003A4u,c->r[0]); // 800CD12C
  {uint32_t ea=c->r[1]+0x00000390u; WF64(ea,c->f[31]);} // 800CD130
  {uint32_t ea=c->r[1]+0x00000398u; psq_store(c,31,ea,0,0);} // 800CD134
  {uint32_t ea=c->r[1]+0x00000380u; WF64(ea,c->f[30]);} // 800CD138
  {uint32_t ea=c->r[1]+0x00000388u; psq_store(c,30,ea,0,0);} // 800CD13C
  c->r[11]=c->r[1]+0x00000380u; // 800CD140
  c->lr=0x800CD148u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CD144
  c->r[31]=c->r[1]|c->r[1]; // 800CD148
  {uint32_t ea=c->r[6]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CD14C
  c->r[27]=c->r[3]|c->r[3]; // 800CD150
  c->r[28]=c->r[5]|c->r[5]; // 800CD154
  c->r[29]=c->r[6]|c->r[6]; // 800CD158
  c->r[3]=c->r[31]+0x00000218u; // 800CD15C
  c->lr=0x800CD164u; f_800BCA04(c); // 800CD160
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD164
  c->r[3]=c->r[31]+0x00000028u; // 800CD168
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD16C
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD170
  c->lr=0x800CD178u; f_800521A0(c); // 800CD174
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD178
  c->r[3]=c->r[31]+0x0000001Cu; // 800CD17C
  {uint32_t ea=c->r[29]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD180
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD184
  c->lr=0x800CD18Cu; f_800521A0(c); // 800CD188
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD18C
  c->r[3]=c->r[31]+0x00000010u; // 800CD190
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD194
  c->f[2]=c->f[1]; // 800CD198
  c->lr=0x800CD1A0u; f_800521A0(c); // 800CD19C
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[30]=c->ps1[30]=RF32(ea);} // 800CD1A0
  c->r[3]=c->r[31]+0x00000218u; // 800CD1A4
  c->r[4]=c->r[31]+0x0000001Cu; // 800CD1A8
  c->r[5]=0u+0x00000000u; // 800CD1AC
  c->lr=0x800CD1B4u; f_800BCA64(c); // 800CD1B0
  c->r[3]=c->r[31]+0x00000218u; // 800CD1B4
  c->r[4]=c->r[31]+0x00000010u; // 800CD1B8
  c->r[5]=0u+0x00000000u; // 800CD1BC
  c->lr=0x800CD1C4u; f_800BCA94(c); // 800CD1C0
  c->f[1]=c->f[30]; // 800CD1C4
  c->r[3]=c->r[31]+0x00000218u; // 800CD1C8
  c->r[4]=0u+0x00000000u; // 800CD1CC
  c->lr=0x800CD1D4u; f_800CD0A4(c); // 800CD1D0
  c->r[3]=c->r[31]+0x00000218u; // 800CD1D4
  c->r[4]=0u+0x00000001u; // 800CD1D8
  c->r[5]=0u+0x00000000u; // 800CD1DC
  c->lr=0x800CD1E4u; f_800CD0CC(c); // 800CD1E0
  c->r[3]=c->r[31]+0x00000218u; // 800CD1E4
  c->r[4]=0u+0x00000000u; // 800CD1E8
  c->r[5]=0u+0x00000000u; // 800CD1EC
  c->lr=0x800CD1F4u; f_800CD0F8(c); // 800CD1F0
  c->f[1]=c->f[31]; // 800CD1F4
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD1F8
  c->r[3]=c->r[31]+0x000000A0u; // 800CD1FC
  c->r[4]=c->r[31]+0x00000028u; // 800CD200
  c->r[5]=c->r[31]+0x00000218u; // 800CD204
  c->r[6]=0u+0x00000001u; // 800CD208
  c->r[7]=0u+0xFFFFFFFFu; // 800CD20C
  c->lr=0x800CD214u; f_800BCB24(c); // 800CD210
  c->r[30]=0u+0x803F0000u; // 800CD214
  c->r[3]=c->r[31]+0x00000008u; // 800CD218
  c->r[30]=c->r[30]+0x00007A3Cu; // 800CD21C
  W32(c->r[31]+0x000000A0u,c->r[30]); // 800CD220
  c->r[4]=R32(c->r[28]+0x00000000u); // 800CD224
  c->r[0]=R32(c->r[28]+0x00000004u); // 800CD228
  W32(c->r[31]+0x00000008u,c->r[4]); // 800CD22C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800CD230
  c->lr=0x800CD238u; f_8003F1D4(c); // 800CD234
  cmps(c,0,(int32_t)c->r[3],0); // 800CD238
  if (crb(c,2)) { goto L_800CD29C; } // 800CD23C
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CD240
  c->lr=0x800CD248u; f_802A6EE4(c); // 800CD244
  cmps(c,0,(int32_t)c->r[3],0); // 800CD248
  c->r[29]=c->r[3]|c->r[3]; // 800CD24C
  if (crb(c,2)) { goto L_800CD29C; } // 800CD250
  if (crb(c,2)) { goto L_800CD264; } // 800CD254
  W32(c->r[31]+0x00000048u,c->r[1]); // 800CD258
  c->lr=0x800CD260u; f_8006BEE8(c); // 800CD25C
  W32(c->r[29]+0x00000000u,c->r[30]); // 800CD260
L_800CD264:;
  c->r[3]=c->r[29]|c->r[29]; // 800CD264
  c->r[4]=c->r[31]+0x000000A0u; // 800CD268
  c->lr=0x800CD270u; f_8006BDA8(c); // 800CD26C
  c->r[30]=addc(c,c->r[29],0x00000178u,0); cr0(c,c->r[30]); // 800CD270
  if (crb(c,2)) { goto L_800CD288; } // 800CD274
  W32(c->r[31]+0x00000060u,c->r[1]); // 800CD278
  c->r[3]=c->r[30]|c->r[30]; // 800CD27C
  c->r[4]=c->r[29]|c->r[29]; // 800CD280
  c->lr=0x800CD288u; f_80064CE8(c); // 800CD284
L_800CD288:;
  c->r[3]=c->r[31]+0x00000008u; // 800CD288
  c->lr=0x800CD290u; f_80068A78(c); // 800CD28C
  c->r[4]=c->r[30]|c->r[30]; // 800CD290
  c->r[3]=c->r[3]+0x00000030u; // 800CD294
  c->lr=0x800CD29Cu; f_8003FD14(c); // 800CD298
L_800CD29C:;
  c->r[0]=0u+0xFFFFFFFFu; // 800CD29C
  c->r[3]=c->r[31]+0x000000A0u; // 800CD2A0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CD2A4
  c->lr=0x800CD2ACu; f_800CD310(c); // 800CD2A8
  c->r[3]=0u+0x00000000u; // 800CD2AC
  c->r[0]=0u+0x00000007u; // 800CD2B0
  W32(c->r[31]+0x00000064u,c->r[3]); // 800CD2B4
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800CD2B8
  c->r[4]=c->r[31]+0x00000060u; // 800CD2BC
  c->ctr=c->r[0]; // 800CD2C0
L_800CD2C4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CD2C4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CD2C8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CD2CC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CD2D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CD2C4; } // 800CD2D4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CD2D8
  c->r[10]=c->r[31]|c->r[31]; // 800CD2DC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CD2E0
  {uint32_t ea=c->r[10]+0x00000398u; psq_load(c,31,ea,0,0);} // 800CD2E4
  {uint32_t ea=c->r[31]+0x00000390u; c->f[31]=RF64(ea);} // 800CD2E8
  {uint32_t ea=c->r[10]+0x00000388u; psq_load(c,30,ea,0,0);} // 800CD2EC
  {uint32_t ea=c->r[31]+0x00000380u; c->f[30]=RF64(ea);} // 800CD2F0
  c->r[11]=c->r[10]+0x00000380u; // 800CD2F4
  c->lr=0x800CD2FCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CD2F8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CD2FC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CD300
  c->r[1]=c->r[10]|c->r[10]; // 800CD304
  c->lr=c->r[0]; // 800CD308
  return; // 800CD30C
}

// dtor_800CD310
void f_800CD310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD310
  c->r[0]=c->lr; // 800CD314
  cmps(c,0,(int32_t)c->r[3],0); // 800CD318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD31C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD320
  c->r[31]=c->r[3]|c->r[3]; // 800CD324
  if (crb(c,2)) { goto L_800CD338; } // 800CD328
  cmps(c,0,(int32_t)c->r[4],0); // 800CD32C
  if (!crb(c,1)) { goto L_800CD338; } // 800CD330
  c->lr=0x800CD338u; f_802896EC(c); // 800CD334
L_800CD338:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD33C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD340
  c->lr=c->r[0]; // 800CD344
  c->r[1]=c->r[1]+0x00000010u; // 800CD348
  return; // 800CD34C
}

// fn_800CD350
void f_800CD350(Ctx* __restrict c) {
  trace_call(0x800CD350u);
  {uint32_t ea=c->r[1]+0xFFFFFC60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD350
  c->r[0]=c->lr; // 800CD354
  W32(c->r[1]+0x000003A4u,c->r[0]); // 800CD358
  {uint32_t ea=c->r[1]+0x00000390u; WF64(ea,c->f[31]);} // 800CD35C
  {uint32_t ea=c->r[1]+0x00000398u; psq_store(c,31,ea,0,0);} // 800CD360
  {uint32_t ea=c->r[1]+0x00000380u; WF64(ea,c->f[30]);} // 800CD364
  {uint32_t ea=c->r[1]+0x00000388u; psq_store(c,30,ea,0,0);} // 800CD368
  c->r[11]=c->r[1]+0x00000380u; // 800CD36C
  c->lr=0x800CD374u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CD370
  c->r[31]=c->r[1]|c->r[1]; // 800CD374
  {uint32_t ea=c->r[6]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CD378
  c->r[27]=c->r[3]|c->r[3]; // 800CD37C
  c->r[28]=c->r[5]|c->r[5]; // 800CD380
  c->r[29]=c->r[6]|c->r[6]; // 800CD384
  c->r[3]=c->r[31]+0x00000218u; // 800CD388
  c->lr=0x800CD390u; f_800BCA04(c); // 800CD38C
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD390
  c->r[3]=c->r[31]+0x00000028u; // 800CD394
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD398
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD39C
  c->lr=0x800CD3A4u; f_800521A0(c); // 800CD3A0
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD3A4
  c->r[3]=c->r[31]+0x0000001Cu; // 800CD3A8
  {uint32_t ea=c->r[29]+0x00000130u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD3AC
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD3B0
  c->lr=0x800CD3B8u; f_800521A0(c); // 800CD3B4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD3B8
  c->r[3]=c->r[31]+0x00000010u; // 800CD3BC
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD3C0
  c->f[2]=c->f[1]; // 800CD3C4
  c->lr=0x800CD3CCu; f_800521A0(c); // 800CD3C8
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[30]=c->ps1[30]=RF32(ea);} // 800CD3CC
  c->r[3]=c->r[31]+0x00000218u; // 800CD3D0
  c->r[4]=c->r[31]+0x0000001Cu; // 800CD3D4
  c->r[5]=0u+0x00000000u; // 800CD3D8
  c->lr=0x800CD3E0u; f_800BCA64(c); // 800CD3DC
  c->r[3]=c->r[31]+0x00000218u; // 800CD3E0
  c->r[4]=c->r[31]+0x00000010u; // 800CD3E4
  c->r[5]=0u+0x00000000u; // 800CD3E8
  c->lr=0x800CD3F0u; f_800BCA94(c); // 800CD3EC
  c->f[1]=c->f[30]; // 800CD3F0
  c->r[3]=c->r[31]+0x00000218u; // 800CD3F4
  c->r[4]=0u+0x00000000u; // 800CD3F8
  c->lr=0x800CD400u; f_800CD0A4(c); // 800CD3FC
  c->r[3]=c->r[31]+0x00000218u; // 800CD400
  c->r[4]=0u+0x00000001u; // 800CD404
  c->r[5]=0u+0x00000000u; // 800CD408
  c->lr=0x800CD410u; f_800CD0CC(c); // 800CD40C
  c->r[3]=c->r[31]+0x00000218u; // 800CD410
  c->r[4]=0u+0x00000000u; // 800CD414
  c->r[5]=0u+0x00000000u; // 800CD418
  c->lr=0x800CD420u; f_800CD0F8(c); // 800CD41C
  c->f[1]=c->f[31]; // 800CD420
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD424
  c->r[3]=c->r[31]+0x000000A0u; // 800CD428
  c->r[4]=c->r[31]+0x00000028u; // 800CD42C
  c->r[5]=c->r[31]+0x00000218u; // 800CD430
  c->r[6]=0u+0x00000001u; // 800CD434
  c->r[7]=0u+0xFFFFFFFFu; // 800CD438
  c->lr=0x800CD440u; f_800BCB24(c); // 800CD43C
  c->r[30]=0u+0x803F0000u; // 800CD440
  c->r[3]=c->r[31]+0x00000008u; // 800CD444
  c->r[30]=c->r[30]+0x00007A20u; // 800CD448
  W32(c->r[31]+0x000000A0u,c->r[30]); // 800CD44C
  c->r[4]=R32(c->r[28]+0x00000000u); // 800CD450
  c->r[0]=R32(c->r[28]+0x00000004u); // 800CD454
  W32(c->r[31]+0x00000008u,c->r[4]); // 800CD458
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800CD45C
  c->lr=0x800CD464u; f_8003F1D4(c); // 800CD460
  cmps(c,0,(int32_t)c->r[3],0); // 800CD464
  if (crb(c,2)) { goto L_800CD4C8; } // 800CD468
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CD46C
  c->lr=0x800CD474u; f_802A6EE4(c); // 800CD470
  cmps(c,0,(int32_t)c->r[3],0); // 800CD474
  c->r[29]=c->r[3]|c->r[3]; // 800CD478
  if (crb(c,2)) { goto L_800CD4C8; } // 800CD47C
  if (crb(c,2)) { goto L_800CD490; } // 800CD480
  W32(c->r[31]+0x00000048u,c->r[1]); // 800CD484
  c->lr=0x800CD48Cu; f_8006BEE8(c); // 800CD488
  W32(c->r[29]+0x00000000u,c->r[30]); // 800CD48C
L_800CD490:;
  c->r[3]=c->r[29]|c->r[29]; // 800CD490
  c->r[4]=c->r[31]+0x000000A0u; // 800CD494
  c->lr=0x800CD49Cu; f_8006BDA8(c); // 800CD498
  c->r[30]=addc(c,c->r[29],0x00000178u,0); cr0(c,c->r[30]); // 800CD49C
  if (crb(c,2)) { goto L_800CD4B4; } // 800CD4A0
  W32(c->r[31]+0x00000060u,c->r[1]); // 800CD4A4
  c->r[3]=c->r[30]|c->r[30]; // 800CD4A8
  c->r[4]=c->r[29]|c->r[29]; // 800CD4AC
  c->lr=0x800CD4B4u; f_80064CE8(c); // 800CD4B0
L_800CD4B4:;
  c->r[3]=c->r[31]+0x00000008u; // 800CD4B4
  c->lr=0x800CD4BCu; f_80068A78(c); // 800CD4B8
  c->r[4]=c->r[30]|c->r[30]; // 800CD4BC
  c->r[3]=c->r[3]+0x00000030u; // 800CD4C0
  c->lr=0x800CD4C8u; f_8003FD14(c); // 800CD4C4
L_800CD4C8:;
  c->r[0]=0u+0xFFFFFFFFu; // 800CD4C8
  c->r[3]=c->r[31]+0x000000A0u; // 800CD4CC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CD4D0
  c->lr=0x800CD4D8u; f_800CD53C(c); // 800CD4D4
  c->r[3]=0u+0x00000000u; // 800CD4D8
  c->r[0]=0u+0x00000007u; // 800CD4DC
  W32(c->r[31]+0x00000064u,c->r[3]); // 800CD4E0
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800CD4E4
  c->r[4]=c->r[31]+0x00000060u; // 800CD4E8
  c->ctr=c->r[0]; // 800CD4EC
L_800CD4F0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CD4F0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CD4F4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CD4F8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CD4FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CD4F0; } // 800CD500
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CD504
  c->r[10]=c->r[31]|c->r[31]; // 800CD508
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CD50C
  {uint32_t ea=c->r[10]+0x00000398u; psq_load(c,31,ea,0,0);} // 800CD510
  {uint32_t ea=c->r[31]+0x00000390u; c->f[31]=RF64(ea);} // 800CD514
  {uint32_t ea=c->r[10]+0x00000388u; psq_load(c,30,ea,0,0);} // 800CD518
  {uint32_t ea=c->r[31]+0x00000380u; c->f[30]=RF64(ea);} // 800CD51C
  c->r[11]=c->r[10]+0x00000380u; // 800CD520
  c->lr=0x800CD528u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CD524
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CD528
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CD52C
  c->r[1]=c->r[10]|c->r[10]; // 800CD530
  c->lr=c->r[0]; // 800CD534
  return; // 800CD538
}

// dtor_800CD53C
void f_800CD53C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD53C
  c->r[0]=c->lr; // 800CD540
  cmps(c,0,(int32_t)c->r[3],0); // 800CD544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD54C
  c->r[31]=c->r[3]|c->r[3]; // 800CD550
  if (crb(c,2)) { goto L_800CD564; } // 800CD554
  cmps(c,0,(int32_t)c->r[4],0); // 800CD558
  if (!crb(c,1)) { goto L_800CD564; } // 800CD55C
  c->lr=0x800CD564u; f_802896EC(c); // 800CD560
L_800CD564:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD568
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD56C
  c->lr=c->r[0]; // 800CD570
  c->r[1]=c->r[1]+0x00000010u; // 800CD574
  return; // 800CD578
}

// fn_800CD57C
void f_800CD57C(Ctx* __restrict c) {
  trace_call(0x800CD57Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD57C
  c->r[0]=c->lr; // 800CD580
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CD584
  c->r[11]=c->r[1]+0x00000060u; // 800CD588
  c->lr=0x800CD590u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CD58C
  c->r[29]=c->r[5]|c->r[5]; // 800CD590
  c->r[31]=c->r[3]|c->r[3]; // 800CD594
  c->r[28]=c->r[6]|c->r[6]; // 800CD598
  c->r[3]=c->r[29]|c->r[29]; // 800CD59C
  c->lr=0x800CD5A4u; f_80068A78(c); // 800CD5A0
  c->r[0]=R32(c->r[29]+0x00000008u); // 800CD5A4
  c->r[30]=c->r[3]|c->r[3]; // 800CD5A8
  cmps(c,0,(int32_t)c->r[0],0); // 800CD5AC
  if (crb(c,2)) { goto L_800CD5DC; } // 800CD5B0
  c->r[3]=c->r[0]|c->r[0]; // 800CD5B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CD5B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800CD5BC
  c->ctr=c->r[12]; // 800CD5C0
  if (true) { c->lr=0x800CD5C8u; dispatch(c,c->ctr); } // 800CD5C4
  cmps(c,0,(int32_t)c->r[3],23); // 800CD5C8
  if (!crb(c,2)) { goto L_800CD5DC; } // 800CD5CC
  c->r[3]=R32(c->r[29]+0x00000008u); // 800CD5D0
  c->r[3]=c->r[3]+0x0000002Cu; // 800CD5D4
  goto L_800CD5F4; // 800CD5D8
L_800CD5DC:;
  {uint32_t ea=c->r[28]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD5DC
  c->r[3]=c->r[30]+0x000008A4u; // 800CD5E0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CD5E4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800CD5E8
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 800CD5EC
  c->lr=0x800CD5F4u; f_800772A8(c); // 800CD5F0
L_800CD5F4:;
  c->r[0]=0u+0x00000000u; // 800CD5F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CD5F8
  c->r[4]=R8(c->r[28]+0x00000004u); // 800CD5FC
  c->r[0]=R8(c->r[28]+0x00000005u); // 800CD600
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800CD604
  c->r[4]=rotl(c->r[4],8)&0x00FFFF00u; // 800CD608
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CD60C
  c->r[0]=c->r[4]+c->r[0]; // 800CD610
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800CD614
  cmps(c,0,(int32_t)c->r[0],26928); // 800CD618
  if (crb(c,2)) { goto L_800CD658; } // 800CD61C
  if (!crb(c,0)) { goto L_800CD648; } // 800CD620
  cmps(c,0,(int32_t)c->r[0],26161); // 800CD624
  if (crb(c,2)) { goto L_800CD6FC; } // 800CD628
  if (!crb(c,0)) { goto L_800CD63C; } // 800CD62C
  cmps(c,0,(int32_t)c->r[0],26160); // 800CD630
  if (!crb(c,0)) { goto L_800CD6E8; } // 800CD634
  goto L_800CD720; // 800CD638
L_800CD63C:;
  cmps(c,0,(int32_t)c->r[0],26163); // 800CD63C
  if (!crb(c,0)) { goto L_800CD720; } // 800CD640
  goto L_800CD710; // 800CD644
L_800CD648:;
  cmps(c,0,(int32_t)c->r[0],26930); // 800CD648
  if (crb(c,2)) { goto L_800CD6B8; } // 800CD64C
  if (!crb(c,0)) { goto L_800CD720; } // 800CD650
  goto L_800CD688; // 800CD654
L_800CD658:;
  c->r[4]=0u+0x00000001u; // 800CD658
  c->r[0]=0u+0x43300000u; // 800CD65C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CD660
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800CD664
  c->r[3]=R32(c->r[3]+0x00000004u); // 800CD668
  W32(c->r[1]+0x00000048u,c->r[0]); // 800CD66C
  c->r[0]=c->r[3]^0x80000000u; // 800CD670
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800CD674
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800CD678
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800CD67C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CD680
  goto L_800CD720; // 800CD684
L_800CD688:;
  c->r[4]=0u+0x00000001u; // 800CD688
  c->r[0]=0u+0x43300000u; // 800CD68C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CD690
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800CD694
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CD698
  W32(c->r[1]+0x00000048u,c->r[0]); // 800CD69C
  c->r[0]=c->r[3]^0x80000000u; // 800CD6A0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800CD6A4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800CD6A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800CD6AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CD6B0
  goto L_800CD720; // 800CD6B4
L_800CD6B8:;
  c->r[4]=0u+0x00000001u; // 800CD6B8
  c->r[0]=0u+0x43300000u; // 800CD6BC
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CD6C0
  {uint32_t ea=c->r[2]+0xFFFF8EB8u; c->f[1]=RF64(ea);} // 800CD6C4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CD6C8
  W32(c->r[1]+0x00000048u,c->r[0]); // 800CD6CC
  c->r[0]=c->r[3]^0x80000000u; // 800CD6D0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800CD6D4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800CD6D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800CD6DC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CD6E0
  goto L_800CD720; // 800CD6E4
L_800CD6E8:;
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD6E8
  c->r[0]=0u+0x00000001u; // 800CD6EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CD6F0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CD6F4
  goto L_800CD720; // 800CD6F8
L_800CD6FC:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD6FC
  c->r[0]=0u+0x00000001u; // 800CD700
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CD704
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CD708
  goto L_800CD720; // 800CD70C
L_800CD710:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD710
  c->r[0]=0u+0x00000001u; // 800CD714
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CD718
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CD71C
L_800CD720:;
  c->r[0]=0u+0x00000007u; // 800CD720
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800CD724
  c->r[4]=c->r[1]+0x00000004u; // 800CD728
  c->ctr=c->r[0]; // 800CD72C
L_800CD730:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CD730
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CD734
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CD738
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CD73C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CD730; } // 800CD740
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CD744
  c->r[11]=c->r[1]+0x00000060u; // 800CD748
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CD74C
  c->lr=0x800CD754u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CD750
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CD754
  c->lr=c->r[0]; // 800CD758
  c->r[1]=c->r[1]+0x00000060u; // 800CD75C
  return; // 800CD760
}

// fn_800CD764
void f_800CD764(Ctx* __restrict c) {
  trace_call(0x800CD764u);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD764
  c->r[0]=c->lr; // 800CD768
  W32(c->r[1]+0x00000214u,c->r[0]); // 800CD76C
  c->r[11]=c->r[1]+0x00000210u; // 800CD770
  c->lr=0x800CD778u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CD774
  c->r[31]=c->r[1]|c->r[1]; // 800CD778
  c->r[26]=0u+0x80490000u; // 800CD77C
  c->r[27]=c->r[3]|c->r[3]; // 800CD780
  c->r[28]=c->r[5]|c->r[5]; // 800CD784
  c->r[29]=c->r[6]|c->r[6]; // 800CD788
  c->r[3]=c->r[26]+0xFFFFFCD0u; // 800CD78C
  c->r[4]=c->r[6]+0x00000004u; // 800CD790
  c->r[5]=0u+0x00000000u; // 800CD794
  c->lr=0x800CD79Cu; f_8010453C(c); // 800CD798
  c->r[3]=c->r[26]+0xFFFFFCD0u; // 800CD79C
  c->lr=0x800CD7A4u; f_80102CC4(c); // 800CD7A0
  c->r[3]=c->r[26]+0xFFFFFCD0u; // 800CD7A4
  c->r[4]=c->r[29]+0x00000004u; // 800CD7A8
  c->lr=0x800CD7B0u; f_80103094(c); // 800CD7AC
  c->r[4]=c->r[3]|c->r[3]; // 800CD7B0
  c->r[3]=c->r[31]+0x00000184u; // 800CD7B4
  c->r[4]=R32(c->r[4]+0x00000010u); // 800CD7B8
  c->lr=0x800CD7C0u; f_801328F8(c); // 800CD7BC
  c->r[4]=0u+0x803E0000u; // 800CD7C0
  c->r[3]=c->r[31]+0x00000184u; // 800CD7C4
  c->r[4]=c->r[4]+0xFFFFA848u; // 800CD7C8
  c->r[5]=c->r[31]+0x00000060u; // 800CD7CC
  c->r[4]=c->r[4]+0x00000118u; // 800CD7D0
  c->lr=0x800CD7D8u; f_80132B34(c); // 800CD7D4
  c->r[4]=R32(c->r[31]+0x0000006Cu); // 800CD7D8
  c->r[3]=c->r[31]+0x00000184u; // 800CD7DC
  c->r[5]=c->r[31]+0x00000010u; // 800CD7E0
  c->r[6]=0u+0x00000000u; // 800CD7E4
  c->lr=0x800CD7ECu; f_801329F0(c); // 800CD7E8
  c->r[4]=R32(c->r[31]+0x00000010u); // 800CD7EC
  c->r[3]=c->r[31]+0x0000000Cu; // 800CD7F0
  c->lr=0x800CD7F8u; f_8006C13C(c); // 800CD7F4
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD7F8
  c->r[3]=c->r[31]+0x00000048u; // 800CD7FC
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD800
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD804
  c->lr=0x800CD80Cu; f_800521A0(c); // 800CD808
  c->r[4]=c->r[31]+0x00000054u; // 800CD80C
  c->lr=0x800CD814u; f_80265750(c); // 800CD810
  c->r[3]=c->r[31]+0x000000DCu; // 800CD814
  c->r[4]=c->r[31]+0x00000054u; // 800CD818
  c->lr=0x800CD820u; f_8007513C(c); // 800CD81C
  {uint32_t ea=c->r[29]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD820
  c->r[3]=c->r[31]+0x0000003Cu; // 800CD824
  {uint32_t ea=c->r[29]+0x0000016Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CD828
  {uint32_t ea=c->r[29]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CD82C
  c->lr=0x800CD834u; f_800521A0(c); // 800CD830
  c->r[4]=c->r[3]|c->r[3]; // 800CD834
  c->r[3]=c->r[31]+0x000000DCu; // 800CD838
  c->lr=0x800CD840u; f_80032FF4(c); // 800CD83C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800CD840
  c->r[5]=0u+0x803F0000u; // 800CD844
  c->r[26]=0u+0x00000000u; // 800CD848
  c->r[30]=c->r[31]+0x0000010Cu; // 800CD84C
  c->r[5]=c->r[5]+0x00001B28u; // 800CD850
  W32(c->r[31]+0x00000008u,c->r[0]); // 800CD854
  c->r[3]=c->r[31]+0x00000110u; // 800CD858
  c->r[4]=c->r[31]+0x00000024u; // 800CD85C
  W32(c->r[31]+0x0000002Cu,c->r[26]); // 800CD860
  W32(c->r[31]+0x00000030u,c->r[26]); // 800CD864
  W32(c->r[31]+0x00000024u,c->r[26]); // 800CD868
  W32(c->r[31]+0x00000028u,c->r[26]); // 800CD86C
  W32(c->r[31]+0x0000010Cu,c->r[5]); // 800CD870
  c->lr=0x800CD878u; f_80064C98(c); // 800CD874
  c->r[3]=0u+0x804D0000u; // 800CD878
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD87C
  c->r[3]=c->r[3]+0x00003280u; // 800CD880
  c->r[6]=R32(c->r[31]+0x00000008u); // 800CD884
  c->r[7]=0u+0x803F0000u; // 800CD888
  c->r[0]=0u+0x00000006u; // 800CD88C
  c->r[7]=c->r[7]+0x000079E4u; // 800CD890
  c->r[3]=c->r[3]+0x00000044u; // 800CD894
  W32(c->r[31]+0x00000118u,c->r[26]); // 800CD898
  c->r[5]=c->r[31]+0x00000150u; // 800CD89C
  c->r[4]=c->r[31]+0x000000D8u; // 800CD8A0
  W32(c->r[31]+0x0000010Cu,c->r[7]); // 800CD8A4
  W32(c->r[31]+0x0000011Cu,c->r[6]); // 800CD8A8
  W32(c->r[31]+0x00000140u,c->r[26]); // 800CD8AC
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[0]);} // 800CD8B0
  {uint32_t ea=c->r[31]+0x00000148u; WF32(ea,c->f[0]);} // 800CD8B4
  W32(c->r[31]+0x0000014Cu,c->r[26]); // 800CD8B8
  W32(c->r[31]+0x00000150u,c->r[3]); // 800CD8BC
  c->ctr=c->r[0]; // 800CD8C0
L_800CD8C4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CD8C4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CD8C8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CD8CC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CD8D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CD8C4; } // 800CD8D4
  c->r[5]=0u+0x00000000u; // 800CD8D8
  goto L_800CD8F4; // 800CD8DC
L_800CD8E0:;
  c->r[4]=c->r[29]+c->r[5]; // 800CD8E0
  c->r[3]=c->r[30]+c->r[5]; // 800CD8E4
  c->r[0]=R8(c->r[4]+0x00000040u); // 800CD8E8
  c->r[5]=c->r[5]+0x00000001u; // 800CD8EC
  W8(c->r[3]+0x00000014u,c->r[0]); // 800CD8F0
L_800CD8F4:;
  cmpu(c,0,c->r[5],0x00000020u); // 800CD8F4
  if (crb(c,0)) { IRQCHK(c); goto L_800CD8E0; } // 800CD8F8
  c->r[4]=R32(c->r[28]+0x00000000u); // 800CD8FC
  c->r[3]=c->r[31]+0x00000034u; // 800CD900
  c->r[0]=R32(c->r[28]+0x00000004u); // 800CD904
  W32(c->r[31]+0x00000034u,c->r[4]); // 800CD908
  W32(c->r[31]+0x00000038u,c->r[0]); // 800CD90C
  c->lr=0x800CD914u; f_8003F1D4(c); // 800CD910
  cmps(c,0,(int32_t)c->r[3],0); // 800CD914
  if (crb(c,2)) { goto L_800CDA64; } // 800CD918
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CD91C
  c->lr=0x800CD924u; f_802A6EE4(c); // 800CD920
  cmps(c,0,(int32_t)c->r[3],0); // 800CD924
  c->r[30]=c->r[3]|c->r[3]; // 800CD928
  if (crb(c,2)) { goto L_800CDA64; } // 800CD92C
  if (crb(c,2)) { goto L_800CD9B4; } // 800CD930
  c->r[28]=0u+0x00000000u; // 800CD934
  c->r[5]=0u+0x803F0000u; // 800CD938
  W32(c->r[31]+0x0000001Cu,c->r[28]); // 800CD93C
  c->r[5]=c->r[5]+0x00001B28u; // 800CD940
  c->r[26]=c->r[30]|c->r[30]; // 800CD944
  c->r[4]=c->r[31]+0x0000001Cu; // 800CD948
  W32(c->r[31]+0x00000020u,c->r[28]); // 800CD94C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800CD950
  c->r[3]=c->r[3]+0x00000004u; // 800CD954
  W32(c->r[31]+0x00000084u,c->r[1]); // 800CD958
  W32(c->r[31]+0x00000014u,c->r[28]); // 800CD95C
  W32(c->r[31]+0x00000018u,c->r[28]); // 800CD960
  c->lr=0x800CD968u; f_80064C98(c); // 800CD964
  c->r[4]=0u+0x803F0000u; // 800CD968
  W32(c->r[30]+0x0000000Cu,c->r[28]); // 800CD96C
  c->r[4]=c->r[4]+0x000079E4u; // 800CD970
  c->r[3]=c->r[30]+0x00000010u; // 800CD974
  W32(c->r[30]+0x00000000u,c->r[4]); // 800CD978
  c->r[4]=0u+0x00000000u; // 800CD97C
  c->lr=0x800CD984u; f_8006C13C(c); // 800CD980
  W32(c->r[30]+0x00000034u,c->r[28]); // 800CD984
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CD988
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 800CD98C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800CD990
  W32(c->r[30]+0x00000040u,c->r[28]); // 800CD994
  W32(c->r[30]+0x00000044u,c->r[28]); // 800CD998
  W8(c->r[30]+0x00000014u,c->r[28]); // 800CD99C
  goto L_800CD9B4; // 800CD9A0
  c->r[3]=0u+0x00000000u; // 800CD9A4
  c->r[4]=0u+0x00000000u; // 800CD9A8
  c->r[5]=0u+0x00000000u; // 800CD9AC
  c->lr=0x800CD9B4u; f_8028BC3C(c); // 800CD9B0
L_800CD9B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800CD9B4
  c->r[4]=c->r[31]+0x0000010Cu; // 800CD9B8
  c->lr=0x800CD9C0u; f_80064DD8(c); // 800CD9BC
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 800CD9C0
  c->r[0]=0u+0x00000010u; // 800CD9C4
  c->r[5]=c->r[30]+0x00000013u; // 800CD9C8
  c->r[4]=c->r[31]+0x0000011Fu; // 800CD9CC
  W32(c->r[30]+0x00000010u,c->r[3]); // 800CD9D0
  c->ctr=c->r[0]; // 800CD9D4
L_800CD9D8:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 800CD9D8
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CD9DC
  W8(c->r[5]+0x00000001u,c->r[3]); // 800CD9E0
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 800CD9E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CD9D8; } // 800CD9E8
  c->r[3]=R32(c->r[31]+0x00000140u); // 800CD9EC
  c->r[0]=0u+0x00000006u; // 800CD9F0
  c->r[5]=c->r[30]+0x00000044u; // 800CD9F4
  c->r[4]=c->r[31]+0x00000150u; // 800CD9F8
  W32(c->r[30]+0x00000034u,c->r[3]); // 800CD9FC
  {uint32_t ea=c->r[31]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDA00
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 800CDA04
  {uint32_t ea=c->r[31]+0x00000148u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDA08
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800CDA0C
  c->r[3]=R32(c->r[31]+0x0000014Cu); // 800CDA10
  W32(c->r[30]+0x00000040u,c->r[3]); // 800CDA14
  c->r[3]=R32(c->r[31]+0x00000150u); // 800CDA18
  W32(c->r[30]+0x00000044u,c->r[3]); // 800CDA1C
  c->ctr=c->r[0]; // 800CDA20
L_800CDA24:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CDA24
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CDA28
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CDA2C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CDA30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CDA24; } // 800CDA34
  c->r[26]=addc(c,c->r[30],0x00000078u,0); cr0(c,c->r[26]); // 800CDA38
  if (crb(c,2)) { goto L_800CDA50; } // 800CDA3C
  W32(c->r[31]+0x0000009Cu,c->r[1]); // 800CDA40
  c->r[3]=c->r[26]|c->r[26]; // 800CDA44
  c->r[4]=c->r[30]|c->r[30]; // 800CDA48
  c->lr=0x800CDA50u; f_80064CE8(c); // 800CDA4C
L_800CDA50:;
  c->r[3]=c->r[31]+0x00000034u; // 800CDA50
  c->lr=0x800CDA58u; f_80068A78(c); // 800CDA54
  c->r[4]=c->r[26]|c->r[26]; // 800CDA58
  c->r[3]=c->r[3]+0x00000030u; // 800CDA5C
  c->lr=0x800CDA64u; f_8003FD14(c); // 800CDA60
L_800CDA64:;
  c->r[3]=0u+0x00000000u; // 800CDA64
  c->r[0]=0u+0x00000007u; // 800CDA68
  W32(c->r[31]+0x000000A0u,c->r[3]); // 800CDA6C
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800CDA70
  c->r[4]=c->r[31]+0x0000009Cu; // 800CDA74
  c->ctr=c->r[0]; // 800CDA78
L_800CDA7C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CDA7C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CDA80
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CDA84
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CDA88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CDA7C; } // 800CDA8C
  c->r[4]=R32(c->r[4]+0x00000004u); // 800CDA90
  c->r[0]=0u+0xFFFFFFFFu; // 800CDA94
  c->r[3]=c->r[31]+0x00000184u; // 800CDA98
  W32(c->r[5]+0x00000004u,c->r[4]); // 800CDA9C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800CDAA0
  c->lr=0x800CDAA8u; f_80132958(c); // 800CDAA4
  c->r[10]=c->r[31]|c->r[31]; // 800CDAA8
  c->r[11]=c->r[10]+0x00000210u; // 800CDAAC
  c->lr=0x800CDAB4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CDAB0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CDAB4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CDAB8
  c->r[1]=c->r[10]|c->r[10]; // 800CDABC
  c->lr=c->r[0]; // 800CDAC0
  return; // 800CDAC4
}

// dtor_800CDAC8
void f_800CDAC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDAC8
  c->r[0]=c->lr; // 800CDACC
  cmps(c,0,(int32_t)c->r[3],0); // 800CDAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDAD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDAD8
  c->r[31]=c->r[3]|c->r[3]; // 800CDADC
  if (crb(c,2)) { goto L_800CDAF0; } // 800CDAE0
  cmps(c,0,(int32_t)c->r[4],0); // 800CDAE4
  if (!crb(c,1)) { goto L_800CDAF0; } // 800CDAE8
  c->lr=0x800CDAF0u; f_802896EC(c); // 800CDAEC
L_800CDAF0:;
  c->r[3]=c->r[31]|c->r[31]; // 800CDAF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDAF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDAF8
  c->lr=c->r[0]; // 800CDAFC
  c->r[1]=c->r[1]+0x00000010u; // 800CDB00
  return; // 800CDB04
}

// fn_800CDB08
void f_800CDB08(Ctx* __restrict c) {
  trace_call(0x800CDB08u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDB08
  c->r[0]=c->lr; // 800CDB0C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CDB10
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800CDB14
  c->r[31]=c->r[3]|c->r[3]; // 800CDB18
  c->r[3]=c->r[1]+0x00000008u; // 800CDB1C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDB20
  c->r[4]=R32(c->r[5]+0x00000000u); // 800CDB24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CDB28
  c->r[0]=R32(c->r[5]+0x00000004u); // 800CDB2C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800CDB30
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800CDB34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CDB38
  c->r[4]=R32(c->r[1]+0x00000054u); // 800CDB3C
  c->lr=0x800CDB44u; f_8007A8BC(c); // 800CDB40
  c->r[3]=0u+0x00000000u; // 800CDB44
  c->r[0]=0u+0x00000007u; // 800CDB48
  W32(c->r[1]+0x00000010u,c->r[3]); // 800CDB4C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800CDB50
  c->r[4]=c->r[1]+0x0000000Cu; // 800CDB54
  c->ctr=c->r[0]; // 800CDB58
L_800CDB5C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CDB5C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CDB60
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CDB64
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CDB68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CDB5C; } // 800CDB6C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CDB70
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CDB74
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800CDB78
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CDB7C
  c->lr=c->r[0]; // 800CDB80
  c->r[1]=c->r[1]+0x00000060u; // 800CDB84
  return; // 800CDB88
}

// fn_800CDB8C
void f_800CDB8C(Ctx* __restrict c) {
  trace_call(0x800CDB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDB8C
  c->r[0]=c->lr; // 800CDB90
  W32(c->r[1]+0x00000144u,c->r[0]); // 800CDB94
  c->r[11]=c->r[1]+0x00000140u; // 800CDB98
  c->lr=0x800CDBA0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CDB9C
  c->r[31]=c->r[1]|c->r[1]; // 800CDBA0
  c->r[30]=c->r[5]|c->r[5]; // 800CDBA4
  c->r[29]=c->r[3]|c->r[3]; // 800CDBA8
  c->r[26]=c->r[6]|c->r[6]; // 800CDBAC
  c->r[3]=c->r[30]|c->r[30]; // 800CDBB0
  c->lr=0x800CDBB8u; f_80068A78(c); // 800CDBB4
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CDBB8
  c->r[26]=c->r[3]|c->r[3]; // 800CDBBC
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDBC0
  c->r[3]=c->r[31]+0x00000030u; // 800CDBC4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CDBC8
  c->f[2]=c->f[1]; // 800CDBCC
  c->f[3]=c->f[1]; // 800CDBD0
  {uint32_t ea=c->r[31]+0x00000120u; WF64(ea,c->f[0]);} // 800CDBD4
  c->r[27]=R32(c->r[31]+0x00000124u); // 800CDBD8
  c->lr=0x800CDBE0u; f_800521A0(c); // 800CDBDC
  c->r[0]=0u+0xFFFFFFFFu; // 800CDBE0
  W32(c->r[31]+0x00000070u,c->r[27]); // 800CDBE4
  c->r[3]=c->r[31]+0x00000074u; // 800CDBE8
  c->r[4]=c->r[31]+0x00000030u; // 800CDBEC
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 800CDBF0
  c->lr=0x800CDBF8u; f_8003F484(c); // 800CDBF4
  c->r[5]=R32(c->r[31]+0x0000006Cu); // 800CDBF8
  c->r[4]=0u+0x00000000u; // 800CDBFC
  c->r[6]=R32(c->r[31]+0x00000070u); // 800CDC00
  c->r[7]=R32(c->r[26]+0x000011B4u); // 800CDC04
  goto L_800CDCAC; // 800CDC08
L_800CDC0C:;
  cmps(c,0,(int32_t)c->r[5],-1); // 800CDC0C
  if (crb(c,2)) { goto L_800CDC28; } // 800CDC10
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 800CDC14
  c->r[3]=c->r[26]+c->r[8]; // 800CDC18
  c->r[0]=R32(c->r[3]+0x00000CB4u); // 800CDC1C
  cmps(c,0,(int32_t)c->r[0],-1); // 800CDC20
  if (!crb(c,2)) { goto L_800CDC4C; } // 800CDC24
L_800CDC28:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 800CDC28
  c->r[3]=c->r[26]+c->r[8]; // 800CDC2C
  c->r[0]=R32(c->r[3]+0x00000CB8u); // 800CDC30
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 800CDC34
  if (!crb(c,2)) { goto L_800CDC44; } // 800CDC38
  c->r[0]=0u+0x00000001u; // 800CDC3C
  goto L_800CDC94; // 800CDC40
L_800CDC44:;
  c->r[0]=0u+0x00000000u; // 800CDC44
  goto L_800CDC94; // 800CDC48
L_800CDC4C:;
  cmps(c,0,(int32_t)c->r[6],-1); // 800CDC4C
  if (crb(c,2)) { goto L_800CDC60; } // 800CDC50
  c->r[3]=R32(c->r[3]+0x00000CB8u); // 800CDC54
  cmps(c,0,(int32_t)c->r[3],-1); // 800CDC58
  if (!crb(c,2)) { goto L_800CDC78; } // 800CDC5C
L_800CDC60:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800CDC60
  if (!crb(c,2)) { goto L_800CDC70; } // 800CDC64
  c->r[0]=0u+0x00000001u; // 800CDC68
  goto L_800CDC94; // 800CDC6C
L_800CDC70:;
  c->r[0]=0u+0x00000000u; // 800CDC70
  goto L_800CDC94; // 800CDC74
L_800CDC78:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[3]); // 800CDC78
  if (!crb(c,2)) { goto L_800CDC90; } // 800CDC7C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800CDC80
  if (!crb(c,2)) { goto L_800CDC90; } // 800CDC84
  c->r[0]=0u+0x00000001u; // 800CDC88
  goto L_800CDC94; // 800CDC8C
L_800CDC90:;
  c->r[0]=0u+0x00000000u; // 800CDC90
L_800CDC94:;
  cmps(c,0,(int32_t)c->r[0],1); // 800CDC94
  if (!crb(c,2)) { goto L_800CDCA8; } // 800CDC98
  c->r[3]=c->r[26]+c->r[8]; // 800CDC9C
  c->r[3]=c->r[3]+0x00000CB4u; // 800CDCA0
  goto L_800CDCB8; // 800CDCA4
L_800CDCA8:;
  c->r[4]=c->r[4]+0x00000001u; // 800CDCA8
L_800CDCAC:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 800CDCAC
  if (crb(c,0)) { IRQCHK(c); goto L_800CDC0C; } // 800CDCB0
  c->r[3]=c->r[26]+0x000011B8u; // 800CDCB4
L_800CDCB8:;
  c->r[5]=0u+0x803F0000u; // 800CDCB8
  c->r[26]=R32(c->r[3]+0x00000004u); // 800CDCBC
  c->r[28]=0u+0x00000000u; // 800CDCC0
  c->r[27]=c->r[31]+0x000000BCu; // 800CDCC4
  c->r[5]=c->r[5]+0x00001B28u; // 800CDCC8
  W32(c->r[31]+0x00000020u,c->r[28]); // 800CDCCC
  c->r[3]=c->r[31]+0x000000C0u; // 800CDCD0
  c->r[4]=c->r[31]+0x00000018u; // 800CDCD4
  W32(c->r[31]+0x00000024u,c->r[28]); // 800CDCD8
  W32(c->r[31]+0x00000018u,c->r[28]); // 800CDCDC
  W32(c->r[31]+0x0000001Cu,c->r[28]); // 800CDCE0
  W32(c->r[31]+0x000000BCu,c->r[5]); // 800CDCE4
  c->lr=0x800CDCECu; f_80064C98(c); // 800CDCE8
  c->r[3]=0u+0x803F0000u; // 800CDCEC
  W32(c->r[31]+0x000000C8u,c->r[28]); // 800CDCF0
  c->r[3]=c->r[3]+0x000079D4u; // 800CDCF4
  c->r[28]=0u+0x00000000u; // 800CDCF8
  W32(c->r[31]+0x000000BCu,c->r[3]); // 800CDCFC
  W32(c->r[31]+0x000000D0u,c->r[26]); // 800CDD00
  goto L_800CDD40; // 800CDD04
L_800CDD08:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDD08
  c->r[26]=(uint32_t)((int32_t)c->r[28]*(int32_t)12); // 800CDD0C
  c->f[2]=c->f[1]; // 800CDD10
  c->r[3]=c->r[27]+c->r[26]; // 800CDD14
  c->f[3]=c->f[1]; // 800CDD18
  c->r[3]=c->r[3]+0x0000001Cu; // 800CDD1C
  c->lr=0x800CDD24u; f_80065358(c); // 800CDD20
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDD24
  c->r[3]=c->r[27]+c->r[26]; // 800CDD28
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDD2C
  c->r[3]=c->r[3]+0x00000040u; // 800CDD30
  c->f[3]=c->f[1]; // 800CDD34
  c->lr=0x800CDD3Cu; f_80065358(c); // 800CDD38
  c->r[28]=c->r[28]+0x00000001u; // 800CDD3C
L_800CDD40:;
  cmps(c,0,(int32_t)c->r[28],3); // 800CDD40
  if (crb(c,0)) { IRQCHK(c); goto L_800CDD08; } // 800CDD44
  c->r[28]=0u+0x00000000u; // 800CDD48
  c->r[3]=c->r[31]+0x00000028u; // 800CDD4C
  W32(c->r[27]+0x00000018u,c->r[28]); // 800CDD50
  c->r[4]=R32(c->r[30]+0x00000000u); // 800CDD54
  c->r[0]=R32(c->r[30]+0x00000004u); // 800CDD58
  W32(c->r[31]+0x00000028u,c->r[4]); // 800CDD5C
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800CDD60
  c->lr=0x800CDD68u; f_8003F1D4(c); // 800CDD64
  cmps(c,0,(int32_t)c->r[3],0); // 800CDD68
  if (crb(c,2)) { goto L_800CDEB8; } // 800CDD6C
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CDD70
  c->lr=0x800CDD78u; f_802A6EE4(c); // 800CDD74
  cmps(c,0,(int32_t)c->r[3],0); // 800CDD78
  c->r[27]=c->r[3]|c->r[3]; // 800CDD7C
  if (crb(c,2)) { goto L_800CDEB8; } // 800CDD80
  if (crb(c,2)) { goto L_800CDE20; } // 800CDD84
  c->r[5]=0u+0x803F0000u; // 800CDD88
  W32(c->r[31]+0x00000010u,c->r[28]); // 800CDD8C
  c->r[5]=c->r[5]+0x00001B28u; // 800CDD90
  c->r[4]=c->r[31]+0x00000010u; // 800CDD94
  W32(c->r[31]+0x00000014u,c->r[28]); // 800CDD98
  W32(c->r[3]+0x00000000u,c->r[5]); // 800CDD9C
  c->r[3]=c->r[3]+0x00000004u; // 800CDDA0
  W32(c->r[31]+0x00000050u,c->r[1]); // 800CDDA4
  W32(c->r[31]+0x00000008u,c->r[28]); // 800CDDA8
  W32(c->r[31]+0x0000000Cu,c->r[28]); // 800CDDAC
  c->lr=0x800CDDB4u; f_80064C98(c); // 800CDDB0
  c->r[3]=0u+0x803F0000u; // 800CDDB4
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 800CDDB8
  c->r[3]=c->r[3]+0x000079D4u; // 800CDDBC
  c->r[0]=0u+0xFFFFFFFFu; // 800CDDC0
  W32(c->r[27]+0x00000000u,c->r[3]); // 800CDDC4
  c->r[26]=0u+0x00000000u; // 800CDDC8
  W32(c->r[27]+0x00000010u,c->r[0]); // 800CDDCC
  W32(c->r[27]+0x00000014u,c->r[0]); // 800CDDD0
  goto L_800CDE10; // 800CDDD4
L_800CDDD8:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDDD8
  c->r[28]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 800CDDDC
  c->f[2]=c->f[1]; // 800CDDE0
  c->r[3]=c->r[27]+c->r[28]; // 800CDDE4
  c->f[3]=c->f[1]; // 800CDDE8
  c->r[3]=c->r[3]+0x0000001Cu; // 800CDDEC
  c->lr=0x800CDDF4u; f_80065358(c); // 800CDDF0
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CDDF4
  c->r[3]=c->r[27]+c->r[28]; // 800CDDF8
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CDDFC
  c->r[3]=c->r[3]+0x00000040u; // 800CDE00
  c->f[3]=c->f[1]; // 800CDE04
  c->lr=0x800CDE0Cu; f_80065358(c); // 800CDE08
  c->r[26]=c->r[26]+0x00000001u; // 800CDE0C
L_800CDE10:;
  cmps(c,0,(int32_t)c->r[26],3); // 800CDE10
  if (crb(c,0)) { IRQCHK(c); goto L_800CDDD8; } // 800CDE14
  c->r[0]=0u+0x00000000u; // 800CDE18
  W32(c->r[27]+0x00000018u,c->r[0]); // 800CDE1C
L_800CDE20:;
  c->r[3]=c->r[27]|c->r[27]; // 800CDE20
  c->r[4]=c->r[31]+0x000000BCu; // 800CDE24
  c->lr=0x800CDE2Cu; f_80064DD8(c); // 800CDE28
  c->r[0]=R32(c->r[31]+0x000000CCu); // 800CDE2C
  c->r[3]=c->r[27]+0x0000001Cu; // 800CDE30
  c->r[4]=c->r[31]+0x000000D8u; // 800CDE34
  W32(c->r[27]+0x00000010u,c->r[0]); // 800CDE38
  c->r[0]=R32(c->r[31]+0x000000D0u); // 800CDE3C
  W32(c->r[27]+0x00000014u,c->r[0]); // 800CDE40
  c->r[0]=R32(c->r[31]+0x000000D4u); // 800CDE44
  W32(c->r[27]+0x00000018u,c->r[0]); // 800CDE48
  c->lr=0x800CDE50u; f_8003F468(c); // 800CDE4C
  c->r[3]=c->r[27]+0x00000028u; // 800CDE50
  c->r[4]=c->r[31]+0x000000E4u; // 800CDE54
  c->lr=0x800CDE5Cu; f_8003F468(c); // 800CDE58
  c->r[3]=c->r[27]+0x00000034u; // 800CDE5C
  c->r[4]=c->r[31]+0x000000F0u; // 800CDE60
  c->lr=0x800CDE68u; f_8003F468(c); // 800CDE64
  c->r[3]=c->r[27]+0x00000040u; // 800CDE68
  c->r[4]=c->r[31]+0x000000FCu; // 800CDE6C
  c->lr=0x800CDE74u; f_8003F468(c); // 800CDE70
  c->r[3]=c->r[27]+0x0000004Cu; // 800CDE74
  c->r[4]=c->r[31]+0x00000108u; // 800CDE78
  c->lr=0x800CDE80u; f_8003F468(c); // 800CDE7C
  c->r[3]=c->r[27]+0x00000058u; // 800CDE80
  c->r[4]=c->r[31]+0x00000114u; // 800CDE84
  c->lr=0x800CDE8Cu; f_8003F468(c); // 800CDE88
  c->r[26]=addc(c,c->r[27],0x00000064u,0); cr0(c,c->r[26]); // 800CDE8C
  if (crb(c,2)) { goto L_800CDEA4; } // 800CDE90
  W32(c->r[31]+0x00000068u,c->r[1]); // 800CDE94
  c->r[3]=c->r[26]|c->r[26]; // 800CDE98
  c->r[4]=c->r[27]|c->r[27]; // 800CDE9C
  c->lr=0x800CDEA4u; f_80064CE8(c); // 800CDEA0
L_800CDEA4:;
  c->r[3]=c->r[31]+0x00000028u; // 800CDEA4
  c->lr=0x800CDEACu; f_80068A78(c); // 800CDEA8
  c->r[4]=c->r[26]|c->r[26]; // 800CDEAC
  c->r[3]=c->r[3]+0x00000030u; // 800CDEB0
  c->lr=0x800CDEB8u; f_8003FD14(c); // 800CDEB4
L_800CDEB8:;
  c->r[3]=0u+0x00000000u; // 800CDEB8
  c->r[0]=0u+0x00000007u; // 800CDEBC
  W32(c->r[31]+0x00000080u,c->r[3]); // 800CDEC0
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800CDEC4
  c->r[4]=c->r[31]+0x0000007Cu; // 800CDEC8
  c->ctr=c->r[0]; // 800CDECC
L_800CDED0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CDED0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CDED4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CDED8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CDEDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CDED0; } // 800CDEE0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CDEE4
  c->r[10]=c->r[31]|c->r[31]; // 800CDEE8
  c->r[11]=c->r[10]+0x00000140u; // 800CDEEC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CDEF0
  c->lr=0x800CDEF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CDEF4
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CDEF8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CDEFC
  c->r[1]=c->r[10]|c->r[10]; // 800CDF00
  c->lr=c->r[0]; // 800CDF04
  return; // 800CDF08
}

// dtor_800CDF0C
void f_800CDF0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDF0C
  c->r[0]=c->lr; // 800CDF10
  cmps(c,0,(int32_t)c->r[3],0); // 800CDF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDF18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDF1C
  c->r[31]=c->r[3]|c->r[3]; // 800CDF20
  if (crb(c,2)) { goto L_800CDF34; } // 800CDF24
  cmps(c,0,(int32_t)c->r[4],0); // 800CDF28
  if (!crb(c,1)) { goto L_800CDF34; } // 800CDF2C
  c->lr=0x800CDF34u; f_802896EC(c); // 800CDF30
L_800CDF34:;
  c->r[3]=c->r[31]|c->r[31]; // 800CDF34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDF38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDF3C
  c->lr=c->r[0]; // 800CDF40
  c->r[1]=c->r[1]+0x00000010u; // 800CDF44
  return; // 800CDF48
}

// fn_800CDF4C
void f_800CDF4C(Ctx* __restrict c) {
  trace_call(0x800CDF4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDF4C
  c->r[0]=c->lr; // 800CDF50
  W32(c->r[1]+0x00000074u,c->r[0]); // 800CDF54
  {uint32_t ea=c->r[1]+0x00000068u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CDF58
  c->r[30]=c->r[3]|c->r[3]; // 800CDF5C
  c->r[31]=c->r[5]|c->r[5]; // 800CDF60
  c->r[3]=c->r[1]+0x00000010u; // 800CDF64
  c->lr=0x800CDF6Cu; f_800CDFD0(c); // 800CDF68
  c->r[5]=R32(c->r[31]+0x00000000u); // 800CDF6C
  c->r[3]=c->r[1]+0x00000008u; // 800CDF70
  c->r[0]=R32(c->r[31]+0x00000004u); // 800CDF74
  c->r[4]=c->r[1]+0x00000010u; // 800CDF78
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CDF7C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CDF80
  c->lr=0x800CDF88u; f_800CE040(c); // 800CDF84
  c->r[3]=0u+0x00000000u; // 800CDF88
  c->r[0]=0u+0x00000007u; // 800CDF8C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800CDF90
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800CDF94
  c->r[4]=c->r[1]+0x0000001Cu; // 800CDF98
  c->ctr=c->r[0]; // 800CDF9C
L_800CDFA0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CDFA0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CDFA4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CDFA8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CDFAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CDFA0; } // 800CDFB0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CDFB4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CDFB8
  {uint32_t ea=c->r[1]+0x00000068u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDFBC
  c->r[0]=R32(c->r[1]+0x00000074u); // 800CDFC0
  c->lr=c->r[0]; // 800CDFC4
  c->r[1]=c->r[1]+0x00000070u; // 800CDFC8
  return; // 800CDFCC
}

// fn_800CDFD0
void f_800CDFD0(Ctx* __restrict c) {
  trace_call(0x800CDFD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDFD0
  c->r[0]=c->lr; // 800CDFD4
  c->r[5]=0u+0x803F0000u; // 800CDFD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDFDC
  c->r[5]=c->r[5]+0x00001B28u; // 800CDFE0
  c->r[4]=c->r[1]+0x00000010u; // 800CDFE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDFE8
  c->r[31]=0u+0x00000000u; // 800CDFEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDFF0
  c->r[30]=c->r[3]|c->r[3]; // 800CDFF4
  W32(c->r[1]+0x00000010u,c->r[31]); // 800CDFF8
  W32(c->r[1]+0x00000014u,c->r[31]); // 800CDFFC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800CE000
  c->r[3]=c->r[3]+0x00000004u; // 800CE004
  W32(c->r[1]+0x00000008u,c->r[31]); // 800CE008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE00C
  c->lr=0x800CE014u; f_80064C98(c); // 800CE010
  c->r[3]=0u+0x803F0000u; // 800CE014
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 800CE018
  c->r[3]=c->r[3]+0x00007A88u; // 800CE01C
  W32(c->r[30]+0x00000000u,c->r[3]); // 800CE020
  c->r[3]=c->r[30]|c->r[30]; // 800CE024
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE028
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE02C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE030
  c->lr=c->r[0]; // 800CE034
  c->r[1]=c->r[1]+0x00000020u; // 800CE038
  return; // 800CE03C
}

// fn_800CE040
void f_800CE040(Ctx* __restrict c) {
  trace_call(0x800CE040u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE040
  c->r[0]=c->lr; // 800CE044
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CE048
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE04C
  c->r[31]=c->r[1]|c->r[1]; // 800CE050
  c->r[28]=c->r[3]|c->r[3]; // 800CE054
  c->r[29]=c->r[4]|c->r[4]; // 800CE058
  c->lr=0x800CE060u; f_8003F1D4(c); // 800CE05C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE060
  if (crb(c,2)) { goto L_800CE0C0; } // 800CE064
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CE068
  c->lr=0x800CE070u; f_802A6EE4(c); // 800CE06C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE070
  c->r[30]=c->r[3]|c->r[3]; // 800CE074
  if (crb(c,2)) { goto L_800CE0C0; } // 800CE078
  if (crb(c,2)) { goto L_800CE088; } // 800CE07C
  W32(c->r[31]+0x00000034u,c->r[1]); // 800CE080
  c->lr=0x800CE088u; f_800CDFD0(c); // 800CE084
L_800CE088:;
  c->r[3]=c->r[30]|c->r[30]; // 800CE088
  c->r[4]=c->r[29]|c->r[29]; // 800CE08C
  c->lr=0x800CE094u; f_80064DD8(c); // 800CE090
  c->r[29]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[29]); // 800CE094
  if (crb(c,2)) { goto L_800CE0AC; } // 800CE098
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 800CE09C
  c->r[3]=c->r[29]|c->r[29]; // 800CE0A0
  c->r[4]=c->r[30]|c->r[30]; // 800CE0A4
  c->lr=0x800CE0ACu; f_80064CE8(c); // 800CE0A8
L_800CE0AC:;
  c->r[3]=c->r[28]|c->r[28]; // 800CE0AC
  c->lr=0x800CE0B4u; f_80068A78(c); // 800CE0B0
  c->r[4]=c->r[29]|c->r[29]; // 800CE0B4
  c->r[3]=c->r[3]+0x00000030u; // 800CE0B8
  c->lr=0x800CE0C0u; f_8003FD14(c); // 800CE0BC
L_800CE0C0:;
  c->r[10]=c->r[31]|c->r[31]; // 800CE0C0
  {uint32_t ea=c->r[10]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE0C4
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CE0C8
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CE0CC
  c->r[1]=c->r[10]|c->r[10]; // 800CE0D0
  c->lr=c->r[0]; // 800CE0D4
  return; // 800CE0D8
}

// dtor_800CE0DC
void f_800CE0DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE0DC
  c->r[0]=c->lr; // 800CE0E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CE0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE0E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE0EC
  c->r[31]=c->r[3]|c->r[3]; // 800CE0F0
  if (crb(c,2)) { goto L_800CE104; } // 800CE0F4
  cmps(c,0,(int32_t)c->r[4],0); // 800CE0F8
  if (!crb(c,1)) { goto L_800CE104; } // 800CE0FC
  c->lr=0x800CE104u; f_802896EC(c); // 800CE100
L_800CE104:;
  c->r[3]=c->r[31]|c->r[31]; // 800CE104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE108
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE10C
  c->lr=c->r[0]; // 800CE110
  c->r[1]=c->r[1]+0x00000010u; // 800CE114
  return; // 800CE118
}

// fn_800CE11C
void f_800CE11C(Ctx* __restrict c) {
  trace_call(0x800CE11Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE11C
  c->r[0]=c->lr; // 800CE120
  W32(c->r[1]+0x00000194u,c->r[0]); // 800CE124
  c->r[11]=c->r[1]+0x00000190u; // 800CE128
  c->lr=0x800CE130u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE12C
  c->r[28]=c->r[3]|c->r[3]; // 800CE130
  c->r[29]=c->r[4]|c->r[4]; // 800CE134
  c->r[3]=c->r[5]|c->r[5]; // 800CE138
  c->r[30]=c->r[6]|c->r[6]; // 800CE13C
  c->lr=0x800CE144u; f_80068A78(c); // 800CE140
  c->r[12]=R32(c->r[3]+0x00000010u); // 800CE144
  c->r[31]=c->r[3]|c->r[3]; // 800CE148
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CE14C
  c->ctr=c->r[12]; // 800CE150
  if (true) { c->lr=0x800CE158u; dispatch(c,c->ctr); } // 800CE154
  cmps(c,0,(int32_t)c->r[3],0); // 800CE158
  if (crb(c,2)) { goto L_800CE21C; } // 800CE15C
  c->r[12]=R32(c->r[31]+0x00000010u); // 800CE160
  c->r[3]=c->r[31]|c->r[31]; // 800CE164
  c->r[12]=R32(c->r[12]+0x00000338u); // 800CE168
  c->ctr=c->r[12]; // 800CE16C
  if (true) { c->lr=0x800CE174u; dispatch(c,c->ctr); } // 800CE170
  c->r[4]=c->r[3]|c->r[3]; // 800CE174
  c->r[3]=c->r[1]+0x0000002Cu; // 800CE178
  c->r[12]=R32(c->r[4]+0x00000000u); // 800CE17C
  c->r[5]=c->r[30]+0x00000004u; // 800CE180
  c->r[12]=R32(c->r[12]+0x00000038u); // 800CE184
  c->ctr=c->r[12]; // 800CE188
  if (true) { c->lr=0x800CE190u; dispatch(c,c->ctr); } // 800CE18C
  c->r[0]=0u+0x00000006u; // 800CE190
  c->r[5]=c->r[1]+0x00000094u; // 800CE194
  c->r[4]=c->r[1]+0x00000028u; // 800CE198
  c->ctr=c->r[0]; // 800CE19C
L_800CE1A0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CE1A0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CE1A4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CE1A8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CE1AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE1A0; } // 800CE1B0
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE1B4
  c->r[3]=c->r[1]+0x00000020u; // 800CE1B8
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE1BC
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CE1C0
  c->lr=0x800CE1C8u; f_800521A0(c); // 800CE1C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE1C8
  c->r[0]=0u+0x00000001u; // 800CE1CC
  W32(c->r[1]+0x000000C8u,c->r[0]); // 800CE1D0
  c->r[3]=c->r[1]+0x00000014u; // 800CE1D4
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE1D8
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 800CE1DC
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE1E0
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CE1E4
  c->lr=0x800CE1ECu; f_800521A0(c); // 800CE1E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE1EC
  c->r[3]=c->r[1]+0x00000104u; // 800CE1F0
  c->lr=0x800CE1F8u; f_800BDCD0(c); // 800CE1F4
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE1F8
  c->r[3]=c->r[1]+0x00000008u; // 800CE1FC
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE200
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CE204
  c->lr=0x800CE20Cu; f_800521A0(c); // 800CE208
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE20C
  c->r[3]=c->r[1]+0x00000140u; // 800CE210
  c->lr=0x800CE218u; f_800BDCD0(c); // 800CE214
  goto L_800CE240; // 800CE218
L_800CE21C:;
  c->r[3]=c->r[1]+0x000000C8u; // 800CE21C
  c->r[4]=0u+0x00000000u; // 800CE220
  c->lr=0x800CE228u; f_800BDBB4(c); // 800CE224
  c->r[3]=c->r[1]+0x00000104u; // 800CE228
  c->r[4]=0u+0x00000000u; // 800CE22C
  c->lr=0x800CE234u; f_800BDBB4(c); // 800CE230
  c->r[3]=c->r[1]+0x00000140u; // 800CE234
  c->r[4]=0u+0x00000000u; // 800CE238
  c->lr=0x800CE240u; f_800BDBB4(c); // 800CE23C
L_800CE240:;
  c->r[30]=0u+0x00000000u; // 800CE240
  c->r[31]=0u+0x00000000u; // 800CE244
L_800CE248:;
  c->r[4]=c->r[1]+0x000000C8u; // 800CE248
  c->r[3]=c->r[29]|c->r[29]; // 800CE24C
  c->r[4]=c->r[4]+c->r[31]; // 800CE250
  c->lr=0x800CE258u; f_800CC0BC(c); // 800CE254
  c->r[30]=c->r[30]+0x00000001u; // 800CE258
  c->r[31]=c->r[31]+0x0000003Cu; // 800CE25C
  cmps(c,0,(int32_t)c->r[30],3); // 800CE260
  if (crb(c,0)) { IRQCHK(c); goto L_800CE248; } // 800CE264
  c->r[3]=0u+0x00000000u; // 800CE268
  c->r[0]=0u+0x00000007u; // 800CE26C
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 800CE270
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 800CE274
  c->r[4]=c->r[1]+0x00000058u; // 800CE278
  c->ctr=c->r[0]; // 800CE27C
L_800CE280:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CE280
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CE284
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CE288
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CE28C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE280; } // 800CE290
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CE294
  c->r[11]=c->r[1]+0x00000190u; // 800CE298
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CE29C
  c->lr=0x800CE2A4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE2A0
  c->r[0]=R32(c->r[1]+0x00000194u); // 800CE2A4
  c->lr=c->r[0]; // 800CE2A8
  c->r[1]=c->r[1]+0x00000190u; // 800CE2AC
  return; // 800CE2B0
}

// fn_800CE2B4
void f_800CE2B4(Ctx* __restrict c) {
  trace_call(0x800CE2B4u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE2B4
  c->r[0]=c->lr; // 800CE2B8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800CE2BC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800CE2C0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800CE2C4
  c->r[11]=c->r[1]+0x000000A0u; // 800CE2C8
  c->lr=0x800CE2D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE2CC
  c->r[27]=c->r[3]|c->r[3]; // 800CE2D0
  c->r[3]=c->r[5]|c->r[5]; // 800CE2D4
  c->r[28]=c->r[6]|c->r[6]; // 800CE2D8
  c->lr=0x800CE2E0u; f_80068A78(c); // 800CE2DC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE2E0
  c->r[31]=c->r[13]+0xFFFF94B8u; // 800CE2E4
  c->r[29]=c->r[3]|c->r[3]; // 800CE2E8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CE2EC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 800CE2F0
  c->r[0]=R32(c->r[1]+0x00000084u); // 800CE2F4
  c->r[30]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CE2F8
  c->r[3]=R32(c->r[31]+c->r[30]); // 800CE2FC
  cmps(c,0,(int32_t)c->r[3],0); // 800CE300
  if (crb(c,2)) { goto L_800CE370; } // 800CE304
  c->lr=0x800CE30Cu; f_80067C50(c); // 800CE308
  cmps(c,0,(int32_t)c->r[3],1); // 800CE30C
  if (!crb(c,2)) { goto L_800CE370; } // 800CE310
  {uint32_t ea=c->r[28]+0x00000040u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CE314
  c->r[3]=c->r[1]+0x00000010u; // 800CE318
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE31C
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CE320
  {uint32_t ea=c->r[28]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800CE324
  c->lr=0x800CE32Cu; f_800521A0(c); // 800CE328
  {uint32_t ea=c->r[28]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE32C
  c->r[3]=c->r[1]+0x0000001Cu; // 800CE330
  {uint32_t ea=c->r[29]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE334
  c->r[4]=c->r[1]+0x00000010u; // 800CE338
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CE33C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 800CE340
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[2]);} // 800CE344
  c->r[5]=R32(c->r[1]+0x00000084u); // 800CE348
  c->lr=0x800CE350u; f_800BCD10(c); // 800CE34C
  c->r[6]=R32(c->r[31]+c->r[30]); // 800CE350
  c->r[3]=c->r[1]+0x00000008u; // 800CE354
  c->r[4]=c->r[1]+0x0000001Cu; // 800CE358
  c->r[5]=R32(c->r[6]+0x00000000u); // 800CE35C
  c->r[0]=R32(c->r[6]+0x00000004u); // 800CE360
  W32(c->r[1]+0x00000008u,c->r[5]); // 800CE364
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CE368
  c->lr=0x800CE370u; f_800BCDAC(c); // 800CE36C
L_800CE370:;
  c->r[3]=0u+0x00000000u; // 800CE370
  c->r[0]=0u+0x00000007u; // 800CE374
  W32(c->r[1]+0x00000040u,c->r[3]); // 800CE378
  c->r[5]=c->r[27]+0xFFFFFFFCu; // 800CE37C
  c->r[4]=c->r[1]+0x0000003Cu; // 800CE380
  c->ctr=c->r[0]; // 800CE384
L_800CE388:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CE388
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CE38C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CE390
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CE394
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE388; } // 800CE398
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CE39C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CE3A0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800CE3A4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800CE3A8
  c->r[11]=c->r[1]+0x000000A0u; // 800CE3AC
  c->lr=0x800CE3B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE3B0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800CE3B4
  c->lr=c->r[0]; // 800CE3B8
  c->r[1]=c->r[1]+0x000000B0u; // 800CE3BC
  return; // 800CE3C0
}

// fn_800CE3C4
void f_800CE3C4(Ctx* __restrict c) {
  trace_call(0x800CE3C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE3C4
  c->r[0]=c->lr; // 800CE3C8
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800CE3CC
  c->r[11]=c->r[1]+0x000000E0u; // 800CE3D0
  c->lr=0x800CE3D8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE3D4
  c->r[31]=c->r[1]|c->r[1]; // 800CE3D8
  c->r[28]=0u+0x803F0000u; // 800CE3DC
  c->r[4]=R32(c->r[5]+0x00000000u); // 800CE3E0
  c->r[0]=R32(c->r[5]+0x00000004u); // 800CE3E4
  c->r[27]=0u+0x00000000u; // 800CE3E8
  c->r[28]=c->r[28]+0x00001B28u; // 800CE3EC
  W32(c->r[31]+0x00000020u,c->r[27]); // 800CE3F0
  c->r[30]=c->r[3]|c->r[3]; // 800CE3F4
  c->r[26]=c->r[6]|c->r[6]; // 800CE3F8
  W32(c->r[31]+0x00000028u,c->r[4]); // 800CE3FC
  c->r[3]=c->r[31]+0x0000006Cu; // 800CE400
  c->r[4]=c->r[31]+0x00000018u; // 800CE404
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800CE408
  W32(c->r[31]+0x00000024u,c->r[27]); // 800CE40C
  W32(c->r[31]+0x00000018u,c->r[27]); // 800CE410
  W32(c->r[31]+0x0000001Cu,c->r[27]); // 800CE414
  W32(c->r[31]+0x00000068u,c->r[28]); // 800CE418
  c->lr=0x800CE420u; f_80064C98(c); // 800CE41C
  c->r[29]=0u+0x803F0000u; // 800CE420
  W32(c->r[31]+0x00000074u,c->r[27]); // 800CE424
  c->r[29]=c->r[29]+0x00007634u; // 800CE428
  c->r[3]=c->r[31]+0x00000078u; // 800CE42C
  W32(c->r[31]+0x00000068u,c->r[29]); // 800CE430
  c->r[4]=c->r[31]+0x00000028u; // 800CE434
  W32(c->r[31]+0x00000078u,c->r[27]); // 800CE438
  W32(c->r[31]+0x0000007Cu,c->r[27]); // 800CE43C
  c->lr=0x800CE444u; f_80063D44(c); // 800CE440
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE444
  c->r[4]=c->r[13]+0xFFFF94B8u; // 800CE448
  c->r[3]=c->r[31]+0x00000030u; // 800CE44C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CE450
  {uint32_t ea=c->r[31]+0x000000C0u; WF64(ea,c->f[0]);} // 800CE454
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800CE458
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CE45C
  c->r[5]=R32(c->r[4]+c->r[0]); // 800CE460
  c->r[4]=R32(c->r[5]+0x00000000u); // 800CE464
  c->r[0]=R32(c->r[5]+0x00000004u); // 800CE468
  W32(c->r[31]+0x00000030u,c->r[4]); // 800CE46C
  W32(c->r[31]+0x00000034u,c->r[0]); // 800CE470
  c->lr=0x800CE478u; f_8003F1D4(c); // 800CE474
  cmps(c,0,(int32_t)c->r[3],0); // 800CE478
  if (crb(c,2)) { goto L_800CE514; } // 800CE47C
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CE480
  c->lr=0x800CE488u; f_802A6EE4(c); // 800CE484
  cmps(c,0,(int32_t)c->r[3],0); // 800CE488
  c->r[26]=c->r[3]|c->r[3]; // 800CE48C
  if (crb(c,2)) { goto L_800CE514; } // 800CE490
  if (crb(c,2)) { goto L_800CE4CC; } // 800CE494
  W32(c->r[31]+0x00000010u,c->r[27]); // 800CE498
  c->r[4]=c->r[31]+0x00000010u; // 800CE49C
  W32(c->r[31]+0x00000014u,c->r[27]); // 800CE4A0
  W32(c->r[3]+0x00000000u,c->r[28]); // 800CE4A4
  c->r[3]=c->r[3]+0x00000004u; // 800CE4A8
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 800CE4AC
  W32(c->r[31]+0x00000008u,c->r[27]); // 800CE4B0
  W32(c->r[31]+0x0000000Cu,c->r[27]); // 800CE4B4
  c->lr=0x800CE4BCu; f_80064C98(c); // 800CE4B8
  W32(c->r[26]+0x0000000Cu,c->r[27]); // 800CE4BC
  W32(c->r[26]+0x00000000u,c->r[29]); // 800CE4C0
  W32(c->r[26]+0x00000010u,c->r[27]); // 800CE4C4
  W32(c->r[26]+0x00000014u,c->r[27]); // 800CE4C8
L_800CE4CC:;
  c->r[3]=c->r[26]|c->r[26]; // 800CE4CC
  c->r[4]=c->r[31]+0x00000068u; // 800CE4D0
  c->lr=0x800CE4D8u; f_80064DD8(c); // 800CE4D4
  c->r[3]=R32(c->r[31]+0x00000078u); // 800CE4D8
  c->r[27]=addc(c,c->r[26],0x00000018u,0); cr0(c,c->r[27]); // 800CE4DC
  c->r[0]=R32(c->r[31]+0x0000007Cu); // 800CE4E0
  W32(c->r[26]+0x00000010u,c->r[3]); // 800CE4E4
  W32(c->r[26]+0x00000014u,c->r[0]); // 800CE4E8
  if (crb(c,2)) { goto L_800CE500; } // 800CE4EC
  W32(c->r[31]+0x00000064u,c->r[1]); // 800CE4F0
  c->r[3]=c->r[27]|c->r[27]; // 800CE4F4
  c->r[4]=c->r[26]|c->r[26]; // 800CE4F8
  c->lr=0x800CE500u; f_80064CE8(c); // 800CE4FC
L_800CE500:;
  c->r[3]=c->r[31]+0x00000030u; // 800CE500
  c->lr=0x800CE508u; f_80068A78(c); // 800CE504
  c->r[4]=c->r[27]|c->r[27]; // 800CE508
  c->r[3]=c->r[3]+0x00000030u; // 800CE50C
  c->lr=0x800CE514u; f_8003FD14(c); // 800CE510
L_800CE514:;
  c->r[3]=0u+0x00000000u; // 800CE514
  c->r[0]=0u+0x00000007u; // 800CE518
  W32(c->r[31]+0x00000080u,c->r[3]); // 800CE51C
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 800CE520
  c->r[4]=c->r[31]+0x0000007Cu; // 800CE524
  c->ctr=c->r[0]; // 800CE528
L_800CE52C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CE52C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CE530
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CE534
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CE538
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE52C; } // 800CE53C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CE540
  c->r[10]=c->r[31]|c->r[31]; // 800CE544
  c->r[11]=c->r[10]+0x000000E0u; // 800CE548
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CE54C
  c->lr=0x800CE554u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE550
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CE554
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CE558
  c->r[1]=c->r[10]|c->r[10]; // 800CE55C
  c->lr=c->r[0]; // 800CE560
  return; // 800CE564
}

// dtor_800CE568
void f_800CE568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE568
  c->r[0]=c->lr; // 800CE56C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE570
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE578
  c->r[31]=c->r[3]|c->r[3]; // 800CE57C
  if (crb(c,2)) { goto L_800CE590; } // 800CE580
  cmps(c,0,(int32_t)c->r[4],0); // 800CE584
  if (!crb(c,1)) { goto L_800CE590; } // 800CE588
  c->lr=0x800CE590u; f_802896EC(c); // 800CE58C
L_800CE590:;
  c->r[3]=c->r[31]|c->r[31]; // 800CE590
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE594
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE598
  c->lr=c->r[0]; // 800CE59C
  c->r[1]=c->r[1]+0x00000010u; // 800CE5A0
  return; // 800CE5A4
}

// fn_800CE5A8
void f_800CE5A8(Ctx* __restrict c) {
  trace_call(0x800CE5A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE5A8
  c->r[0]=c->lr; // 800CE5AC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800CE5B0
  c->r[11]=c->r[1]+0x000000B0u; // 800CE5B4
  c->lr=0x800CE5BCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE5B8
  c->r[31]=c->r[1]|c->r[1]; // 800CE5BC
  c->r[29]=c->r[5]|c->r[5]; // 800CE5C0
  c->r[26]=c->r[3]|c->r[3]; // 800CE5C4
  c->r[27]=c->r[6]|c->r[6]; // 800CE5C8
  c->r[3]=c->r[29]|c->r[29]; // 800CE5CC
  c->lr=0x800CE5D4u; f_80068A78(c); // 800CE5D0
  c->r[28]=c->r[3]|c->r[3]; // 800CE5D4
  c->r[3]=c->r[31]+0x00000010u; // 800CE5D8
  c->lr=0x800CE5E0u; f_80068B78(c); // 800CE5DC
  c->r[4]=R32(c->r[29]+0x00000000u); // 800CE5E0
  c->r[3]=c->r[31]+0x00000008u; // 800CE5E4
  c->r[0]=R32(c->r[29]+0x00000004u); // 800CE5E8
  W32(c->r[31]+0x00000008u,c->r[4]); // 800CE5EC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800CE5F0
  c->lr=0x800CE5F8u; f_8003F1D4(c); // 800CE5F4
  cmps(c,0,(int32_t)c->r[3],0); // 800CE5F8
  if (crb(c,2)) { goto L_800CE658; } // 800CE5FC
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800CE600
  c->lr=0x800CE608u; f_802A6EE4(c); // 800CE604
  cmps(c,0,(int32_t)c->r[3],0); // 800CE608
  c->r[29]=c->r[3]|c->r[3]; // 800CE60C
  if (crb(c,2)) { goto L_800CE658; } // 800CE610
  if (crb(c,2)) { goto L_800CE620; } // 800CE614
  W32(c->r[31]+0x00000034u,c->r[1]); // 800CE618
  c->lr=0x800CE620u; f_80068B78(c); // 800CE61C
L_800CE620:;
  c->r[3]=c->r[29]|c->r[29]; // 800CE620
  c->r[4]=c->r[31]+0x00000010u; // 800CE624
  c->lr=0x800CE62Cu; f_80064DD8(c); // 800CE628
  c->r[30]=addc(c,c->r[29],0x00000010u,0); cr0(c,c->r[30]); // 800CE62C
  if (crb(c,2)) { goto L_800CE644; } // 800CE630
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 800CE634
  c->r[3]=c->r[30]|c->r[30]; // 800CE638
  c->r[4]=c->r[29]|c->r[29]; // 800CE63C
  c->lr=0x800CE644u; f_80064CE8(c); // 800CE640
L_800CE644:;
  c->r[3]=c->r[31]+0x00000008u; // 800CE644
  c->lr=0x800CE64Cu; f_80068A78(c); // 800CE648
  c->r[4]=c->r[30]|c->r[30]; // 800CE64C
  c->r[3]=c->r[3]+0x00000030u; // 800CE650
  c->lr=0x800CE658u; f_8003FD14(c); // 800CE654
L_800CE658:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE658
  c->r[3]=0u+0x00000000u; // 800CE65C
  c->r[0]=0u+0x00000007u; // 800CE660
  c->r[5]=c->r[26]+0xFFFFFFFCu; // 800CE664
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CE668
  c->r[4]=c->r[31]+0x0000004Cu; // 800CE66C
  {uint32_t ea=c->r[31]+0x00000090u; WF64(ea,c->f[0]);} // 800CE670
  c->r[6]=R32(c->r[31]+0x00000094u); // 800CE674
  W32(c->r[28]+0x00000894u,c->r[6]); // 800CE678
  W32(c->r[31]+0x00000050u,c->r[3]); // 800CE67C
  c->ctr=c->r[0]; // 800CE680
L_800CE684:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800CE684
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800CE688
  W32(c->r[5]+0x00000004u,c->r[3]); // 800CE68C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800CE690
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CE684; } // 800CE694
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CE698
  c->r[10]=c->r[31]|c->r[31]; // 800CE69C
  c->r[11]=c->r[10]+0x000000B0u; // 800CE6A0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CE6A4
  c->lr=0x800CE6ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE6A8
  c->r[10]=R32(c->r[1]+0x00000000u); // 800CE6AC
  c->r[0]=R32(c->r[10]+0x00000004u); // 800CE6B0
  c->r[1]=c->r[10]|c->r[10]; // 800CE6B4
  c->lr=c->r[0]; // 800CE6B8
  return; // 800CE6BC
}

