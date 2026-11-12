#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8036B158
void f_8036B158(Ctx* __restrict c) {
  trace_call(0x8036B158u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8036B158
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8036B15C
  if (crb(c,2)) { goto L_8036B178; } // 8036B160
  {uint32_t ea=c->r[2]+0xFFFFE99Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B164
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8036B168
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8036B16C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8036B170
  return; // 8036B174
L_8036B178:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036B178
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B17C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B180
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 8036B184
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 8036B188
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8036B18C
  return; // 8036B190
}

// fn_8036B194
void f_8036B194(Ctx* __restrict c) {
  trace_call(0x8036B194u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8036B194
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8036B198
  if (crb(c,2)) { goto L_8036B1B4; } // 8036B19C
  {uint32_t ea=c->r[2]+0xFFFFE998u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B1A0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8036B1A4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8036B1A8
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8036B1AC
  return; // 8036B1B0
L_8036B1B4:;
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036B1B4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B1B8
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B1BC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 8036B1C0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 8036B1C4
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 8036B1C8
  return; // 8036B1CC
}

// fn_8036B1D0
void f_8036B1D0(Ctx* __restrict c) {
  trace_call(0x8036B1D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036B1D0
  c->r[0]=c->lr; // 8036B1D4
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036B1D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036B1DC
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 8036B1E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036B1E4
  c->r[31]=c->r[4]|c->r[4]; // 8036B1E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8036B1EC
  c->r[30]=c->r[3]|c->r[3]; // 8036B1F0
  if (crb(c,2)) { goto L_8036B230; } // 8036B1F4
  c->r[0]=rotl(c->r[5],0)&0x00000040u; cr0(c,c->r[0]); // 8036B1F8
  if (crb(c,2)) { goto L_8036B20C; } // 8036B1FC
  c->r[3]=c->r[31]|c->r[31]; // 8036B200
  c->lr=0x8036B208u; f_80264680(c); // 8036B204
  goto L_8036B25C; // 8036B208
L_8036B20C:;
  c->r[3]=c->r[31]|c->r[31]; // 8036B20C
  c->lr=0x8036B214u; f_80264680(c); // 8036B210
  {uint32_t ea=c->r[30]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036B214
  {uint32_t ea=c->r[30]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B218
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B21C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 8036B220
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 8036B224
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8036B228
  goto L_8036B25C; // 8036B22C
L_8036B230:;
  c->r[0]=rotl(c->r[5],0)&0x00000040u; cr0(c,c->r[0]); // 8036B230
  if (crb(c,2)) { goto L_8036B254; } // 8036B234
  c->r[3]=c->r[3]+0x0000001Cu; // 8036B238
  c->lr=0x8036B240u; f_802646AC(c); // 8036B23C
  {uint32_t ea=c->r[2]+0xFFFFE998u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B240
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8036B244
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8036B248
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8036B24C
  goto L_8036B25C; // 8036B250
L_8036B254:;
  c->r[3]=c->r[3]+0x0000001Cu; // 8036B254
  c->lr=0x8036B25Cu; f_802646AC(c); // 8036B258
L_8036B25C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036B25C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036B260
  c->r[30]=R32(c->r[1]+0x00000008u); // 8036B264
  c->lr=c->r[0]; // 8036B268
  c->r[1]=c->r[1]+0x00000010u; // 8036B26C
  return; // 8036B270
}

// fn_8036B274
void f_8036B274(Ctx* __restrict c) {
  trace_call(0x8036B274u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036B274
  c->r[0]=c->lr; // 8036B278
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036B27C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036B280
  c->r[31]=c->r[4]|c->r[4]; // 8036B284
  W32(c->r[1]+0x00000008u,c->r[30]); // 8036B288
  c->r[30]=c->r[3]|c->r[3]; // 8036B28C
  c->lr=0x8036B294u; f_8036B1D0(c); // 8036B290
  c->r[0]=R32(c->r[30]+0x00000000u); // 8036B294
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8036B298
  if (!crb(c,2)) { goto L_8036B2B0; } // 8036B29C
  c->r[3]=c->r[31]|c->r[31]; // 8036B2A0
  c->r[4]=c->r[31]|c->r[31]; // 8036B2A4
  c->r[5]=c->r[30]+0x00000004u; // 8036B2A8
  c->lr=0x8036B2B0u; f_803948C0(c); // 8036B2AC
L_8036B2B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036B2B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036B2B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8036B2B8
  c->lr=c->r[0]; // 8036B2BC
  c->r[1]=c->r[1]+0x00000010u; // 8036B2C0
  return; // 8036B2C4
}

// fn_8036B2C8
void f_8036B2C8(Ctx* __restrict c) {
  trace_call(0x8036B2C8u);
  {uint32_t ea=c->r[2]+0xFFFFE99Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B2C8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B2CC
  fcmp(c,0,c->f[1],c->f[0]); // 8036B2D0
  if (!crb(c,2)) { goto L_8036B310; } // 8036B2D4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B2D8
  fcmp(c,0,c->f[1],c->f[0]); // 8036B2DC
  if (!crb(c,2)) { goto L_8036B310; } // 8036B2E0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B2E4
  fcmp(c,0,c->f[1],c->f[0]); // 8036B2E8
  if (!crb(c,2)) { goto L_8036B310; } // 8036B2EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8036B2F0
  c->r[5]=c->r[0]|0x00000018u; // 8036B2F4
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 8036B2F8
  W32(c->r[3]+0x00000000u,c->r[5]); // 8036B2FC
  if (crb(c,2)) { goto L_8036B344; } // 8036B300
  c->r[0]=c->r[5]|0x00000002u; // 8036B304
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B308
  goto L_8036B344; // 8036B30C
L_8036B310:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036B310
  c->r[0]=0u+0xFFFFFFE5u; // 8036B314
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B318
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B31C
  c->r[0]=c->r[5]&c->r[0]; // 8036B320
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B324
  fcmp(c,0,c->f[0],c->f[1]); // 8036B328
  if (!crb(c,2)) { goto L_8036B344; } // 8036B32C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B330
  fcmp(c,0,c->f[1],c->f[0]); // 8036B334
  if (!crb(c,2)) { goto L_8036B344; } // 8036B338
  c->r[0]=c->r[0]|0x00000010u; // 8036B33C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B340
L_8036B344:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036B344
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B348
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B34C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8036B350
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8036B354
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8036B358
  return; // 8036B35C
}

// fn_8036B360
void f_8036B360(Ctx* __restrict c) {
  trace_call(0x8036B360u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036B360
  c->r[0]=c->lr; // 8036B364
  {uint32_t ea=c->r[2]+0xFFFFE998u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B368
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036B36C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B370
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036B374
  c->r[31]=c->r[4]|c->r[4]; // 8036B378
  fcmp(c,0,c->f[1],c->f[0]); // 8036B37C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036B380
  c->r[30]=c->r[3]|c->r[3]; // 8036B384
  if (!crb(c,2)) { goto L_8036B400; } // 8036B388
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B38C
  fcmp(c,0,c->f[1],c->f[0]); // 8036B390
  if (!crb(c,2)) { goto L_8036B400; } // 8036B394
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B398
  fcmp(c,0,c->f[1],c->f[0]); // 8036B39C
  if (!crb(c,2)) { goto L_8036B400; } // 8036B3A0
  c->r[4]=R32(c->r[3]+0x00000000u); // 8036B3A4
  c->r[5]=0u+0x00000020u; // 8036B3A8
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 8036B3AC
  if (crb(c,2)) { goto L_8036B3C4; } // 8036B3B0
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 8036B3B4
  c->r[5]=c->r[5]|0x00000004u; // 8036B3B8
  if (crb(c,2)) { goto L_8036B3C4; } // 8036B3BC
  c->r[5]=c->r[5]|0x00000002u; // 8036B3C0
L_8036B3C4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8036B3C4
  {uint32_t ea=c->r[2]+0xFFFFE998u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B3C8
  {uint32_t ea=c->r[2]+0xFFFFE99Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B3CC
  c->r[0]=c->r[0]|c->r[5]; // 8036B3D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B3D4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8036B3D8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8036B3DC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8036B3E0
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8036B3E4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 8036B3E8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8036B3EC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8036B3F0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 8036B3F4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8036B3F8
  goto L_8036B47C; // 8036B3FC
L_8036B400:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8036B400
  {uint32_t ea=c->r[2]+0xFFFFE9A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B404
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036B408
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B40C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8036B410
  {uint32_t ea=c->r[3]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 8036B414
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8036B418
  {uint32_t ea=c->r[3]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 8036B41C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8036B420
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B424
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 8036B428
  c->r[3]=c->r[3]+0x0000001Cu; // 8036B42C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8036B430
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 8036B434
  c->lr=0x8036B43Cu; f_803949B8(c); // 8036B438
  c->r[3]=R32(c->r[30]+0x00000000u); // 8036B43C
  c->r[0]=0u+0xFFFFFFD9u; // 8036B440
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8036B444
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8036B448
  c->r[0]=c->r[3]&c->r[0]; // 8036B44C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8036B450
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036B454
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B458
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B45C
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[5]);} // 8036B460
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[4]);} // 8036B464
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[3]);} // 8036B468
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[2]);} // 8036B46C
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 8036B470
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8036B474
  W32(c->r[30]+0x00000000u,c->r[0]); // 8036B478
L_8036B47C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8036B47C
  c->r[0]=c->r[0]|0x80000000u; // 8036B480
  W32(c->r[30]+0x00000000u,c->r[0]); // 8036B484
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036B488
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036B48C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036B490
  c->lr=c->r[0]; // 8036B494
  c->r[1]=c->r[1]+0x00000020u; // 8036B498
  return; // 8036B49C
}

// fn_8036B4A0
void f_8036B4A0(Ctx* __restrict c) {
  trace_call(0x8036B4A0u);
  {uint32_t ea=c->r[2]+0xFFFFE998u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B4A0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B4A4
  fcmp(c,0,c->f[1],c->f[0]); // 8036B4A8
  if (!crb(c,2)) { goto L_8036B4F8; } // 8036B4AC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B4B0
  fcmp(c,0,c->f[1],c->f[0]); // 8036B4B4
  if (!crb(c,2)) { goto L_8036B4F8; } // 8036B4B8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B4BC
  fcmp(c,0,c->f[1],c->f[0]); // 8036B4C0
  if (!crb(c,2)) { goto L_8036B4F8; } // 8036B4C4
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036B4C8
  c->r[6]=0u+0x00000040u; // 8036B4CC
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 8036B4D0
  if (crb(c,2)) { goto L_8036B4E8; } // 8036B4D4
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 8036B4D8
  c->r[6]=c->r[6]|0x00000004u; // 8036B4DC
  if (crb(c,2)) { goto L_8036B4E8; } // 8036B4E0
  c->r[6]=c->r[6]|0x00000002u; // 8036B4E4
L_8036B4E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8036B4E8
  c->r[0]=c->r[0]|c->r[6]; // 8036B4EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B4F0
  goto L_8036B508; // 8036B4F4
L_8036B4F8:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036B4F8
  c->r[0]=0u+0xFFFFFFB9u; // 8036B4FC
  c->r[0]=c->r[5]&c->r[0]; // 8036B500
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B504
L_8036B508:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036B508
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B50C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B510
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 8036B514
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8036B518
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8036B51C
  return; // 8036B520
}

// fn_8036B524
void f_8036B524(Ctx* __restrict c) {
  trace_call(0x8036B524u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036B524
  c->r[0]=c->lr; // 8036B528
  {uint32_t ea=c->r[2]+0xFFFFE99Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8036B52C
  c->r[5]=0u+0x00000000u; // 8036B530
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036B534
  c->r[0]=0u+0x00000000u; // 8036B538
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B53C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036B540
  c->r[31]=c->r[3]|c->r[3]; // 8036B544
  fcmp(c,0,c->f[2],c->f[0]); // 8036B548
  if (!crb(c,2)) { goto L_8036B5AC; } // 8036B54C
  {uint32_t ea=c->r[2]+0xFFFFE998u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B550
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B554
  fcmp(c,0,c->f[1],c->f[0]); // 8036B558
  if (!crb(c,2)) { goto L_8036B5AC; } // 8036B55C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B560
  fcmp(c,0,c->f[1],c->f[0]); // 8036B564
  if (!crb(c,2)) { goto L_8036B5AC; } // 8036B568
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B56C
  fcmp(c,0,c->f[1],c->f[0]); // 8036B570
  if (!crb(c,2)) { goto L_8036B5AC; } // 8036B574
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B578
  fcmp(c,0,c->f[2],c->f[0]); // 8036B57C
  if (!crb(c,2)) { goto L_8036B5AC; } // 8036B580
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B584
  fcmp(c,0,c->f[1],c->f[0]); // 8036B588
  if (!crb(c,2)) { goto L_8036B5AC; } // 8036B58C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B590
  fcmp(c,0,c->f[1],c->f[0]); // 8036B594
  if (!crb(c,2)) { goto L_8036B5AC; } // 8036B598
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B59C
  fcmp(c,0,c->f[1],c->f[0]); // 8036B5A0
  if (!crb(c,2)) { goto L_8036B5AC; } // 8036B5A4
  c->r[0]=0u+0x00000001u; // 8036B5A8
L_8036B5AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8036B5AC
  if (crb(c,2)) { goto L_8036B5C8; } // 8036B5B0
  {uint32_t ea=c->r[2]+0xFFFFE99Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B5B4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B5B8
  fcmp(c,0,c->f[1],c->f[0]); // 8036B5BC
  if (!crb(c,2)) { goto L_8036B5C8; } // 8036B5C0
  c->r[5]=0u+0x00000001u; // 8036B5C4
L_8036B5C8:;
  {uint32_t ea=c->r[2]+0xFFFFE998u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B5C8
  c->r[6]=0u+0x00000000u; // 8036B5CC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B5D0
  c->r[0]=0u+0x00000000u; // 8036B5D4
  fcmp(c,0,c->f[1],c->f[0]); // 8036B5D8
  if (!crb(c,2)) { goto L_8036B5F0; } // 8036B5DC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B5E0
  fcmp(c,0,c->f[1],c->f[0]); // 8036B5E4
  if (!crb(c,2)) { goto L_8036B5F0; } // 8036B5E8
  c->r[0]=0u+0x00000001u; // 8036B5EC
L_8036B5F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8036B5F0
  if (crb(c,2)) { goto L_8036B60C; } // 8036B5F4
  {uint32_t ea=c->r[2]+0xFFFFE998u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036B5F8
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B5FC
  fcmp(c,0,c->f[1],c->f[0]); // 8036B600
  if (!crb(c,2)) { goto L_8036B60C; } // 8036B604
  c->r[6]=0u+0x00000001u; // 8036B608
L_8036B60C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8036B60C
  if (crb(c,2)) { goto L_8036B654; } // 8036B610
  cmps(c,0,(int32_t)c->r[6],0); // 8036B614
  if (crb(c,2)) { goto L_8036B63C; } // 8036B618
  c->r[0]=R32(c->r[3]+0x00000000u); // 8036B61C
  c->r[5]=c->r[0]|0x00000064u; // 8036B620
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 8036B624
  W32(c->r[3]+0x00000000u,c->r[5]); // 8036B628
  if (crb(c,2)) { goto L_8036B684; } // 8036B62C
  c->r[0]=c->r[5]|0x00000002u; // 8036B630
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B634
  goto L_8036B684; // 8036B638
L_8036B63C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036B63C
  c->r[0]=0u+0xFFFFFFB9u; // 8036B640
  c->r[5]=c->r[5]|0x00000020u; // 8036B644
  c->r[0]=c->r[5]&c->r[0]; // 8036B648
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B64C
  goto L_8036B684; // 8036B650
L_8036B654:;
  cmps(c,0,(int32_t)c->r[6],0); // 8036B654
  if (crb(c,2)) { goto L_8036B674; } // 8036B658
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036B65C
  c->r[0]=0u+0xFFFFFFD9u; // 8036B660
  c->r[5]=c->r[5]|0x00000040u; // 8036B664
  c->r[0]=c->r[5]&c->r[0]; // 8036B668
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B66C
  goto L_8036B684; // 8036B670
L_8036B674:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036B674
  c->r[0]=0u+0xFFFFFF99u; // 8036B678
  c->r[0]=c->r[5]&c->r[0]; // 8036B67C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036B680
L_8036B684:;
  c->r[3]=c->r[4]|c->r[4]; // 8036B684
  c->r[4]=c->r[31]+0x0000001Cu; // 8036B688
  c->lr=0x8036B690u; f_802646AC(c); // 8036B68C
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036B690
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 8036B694
  W32(c->r[31]+0x00000000u,c->r[0]); // 8036B698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036B69C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036B6A0
  c->lr=c->r[0]; // 8036B6A4
  c->r[1]=c->r[1]+0x00000010u; // 8036B6A8
  return; // 8036B6AC
}

// fn_8036B6B0
void f_8036B6B0(Ctx* __restrict c) {
  trace_call(0x8036B6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036B6B0
  c->r[0]=c->lr; // 8036B6B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036B6B8
  c->r[11]=c->r[1]+0x00000030u; // 8036B6BC
  c->lr=0x8036B6C4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036B6C0
  c->r[25]=R32(c->r[3]+0x00000000u); // 8036B6C4
  c->r[28]=c->r[3]|c->r[3]; // 8036B6C8
  c->r[29]=c->r[4]|c->r[4]; // 8036B6CC
  c->r[31]=0u+0x00000000u; // 8036B6D0
  c->r[0]=R32(c->r[25]+0x00000014u); // 8036B6D4
  c->r[30]=0u+0x00000000u; // 8036B6D8
  cmps(c,0,(int32_t)c->r[0],0); // 8036B6DC
  if (crb(c,2)) { goto L_8036B76C; } // 8036B6E0
  c->r[3]=c->r[29]|c->r[29]; // 8036B6E4
  c->lr=0x8036B6ECu; f_8036C15C(c); // 8036B6E8
  cmps(c,0,(int32_t)c->r[3],0); // 8036B6EC
  if (crb(c,2)) { goto L_8036B76C; } // 8036B6F0
  c->r[4]=R32(c->r[28]+0x00000000u); // 8036B6F4
  c->r[3]=0u+0x00000001u; // 8036B6F8
  c->r[31]=0u+0x00000001u; // 8036B6FC
  c->r[0]=R32(c->r[4]+0x00000014u); // 8036B700
  cmps(c,0,(int32_t)c->r[0],0); // 8036B704
  if (crb(c,2)) { goto L_8036B71C; } // 8036B708
  c->r[0]=R16(c->r[4]+0x00000018u); // 8036B70C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8036B710
  if (!crb(c,2)) { goto L_8036B71C; } // 8036B714
  c->r[3]=0u+0x00000000u; // 8036B718
L_8036B71C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8036B71C
  if (!crb(c,2)) { goto L_8036B768; } // 8036B720
  c->r[0]=R32(c->r[4]+0x00000014u); // 8036B724
  cmps(c,0,(int32_t)c->r[0],0); // 8036B728
  if (crb(c,2)) { goto L_8036B73C; } // 8036B72C
  c->r[3]=c->r[4]+c->r[0]; // 8036B730
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8036B734
  goto L_8036B740; // 8036B738
L_8036B73C:;
  c->r[0]=0u+0x00000000u; // 8036B73C
L_8036B740:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036B740
  c->r[3]=c->r[29]|c->r[29]; // 8036B744
  c->r[4]=c->r[1]+0x0000000Cu; // 8036B748
  c->lr=0x8036B750u; f_8036C29C(c); // 8036B74C
  cmps(c,0,(int32_t)c->r[3],0); // 8036B750
  if (crb(c,2)) { goto L_8036B76C; } // 8036B754
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036B758
  c->r[30]=0u+0x00000001u; // 8036B75C
  W16(c->r[25]+0x00000018u,c->r[0]); // 8036B760
  goto L_8036B76C; // 8036B764
L_8036B768:;
  c->r[30]=0u+0x00000001u; // 8036B768
L_8036B76C:;
  c->r[3]=c->r[29]|c->r[29]; // 8036B76C
  c->lr=0x8036B774u; f_8036C1BC(c); // 8036B770
  cmps(c,0,(int32_t)c->r[3],0); // 8036B774
  if (crb(c,2)) { goto L_8036B7F8; } // 8036B778
  c->r[3]=R32(c->r[28]+0x00000000u); // 8036B77C
  c->r[26]=c->r[25]+0x0000003Cu; // 8036B780
  c->r[24]=0u+0x00000000u; // 8036B784
  c->r[25]=0u+0x00000000u; // 8036B788
  c->r[27]=R8(c->r[3]+0x0000001Au); // 8036B78C
  c->r[31]=c->r[31]+c->r[27]; // 8036B790
  goto L_8036B7F0; // 8036B794
L_8036B798:;
  c->r[0]=R16(c->r[26]+0x00000000u); // 8036B798
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8036B79C
  if (crb(c,2)) { goto L_8036B7AC; } // 8036B7A0
  c->r[30]=c->r[30]+0x00000001u; // 8036B7A4
  goto L_8036B7E4; // 8036B7A8
L_8036B7AC:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 8036B7AC
  c->r[3]=c->r[29]|c->r[29]; // 8036B7B0
  c->r[4]=c->r[1]+0x00000008u; // 8036B7B4
  c->r[5]=c->r[5]+0x0000001Cu; // 8036B7B8
  c->r[0]=R32(c->r[5]+c->r[25]); // 8036B7BC
  c->r[5]=c->r[5]+c->r[0]; // 8036B7C0
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 8036B7C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036B7C8
  c->lr=0x8036B7D0u; f_8036C450(c); // 8036B7CC
  cmps(c,0,(int32_t)c->r[3],0); // 8036B7D0
  if (crb(c,2)) { goto L_8036B7E4; } // 8036B7D4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036B7D8
  c->r[30]=c->r[30]+0x00000001u; // 8036B7DC
  W16(c->r[26]+0x00000000u,c->r[0]); // 8036B7E0
L_8036B7E4:;
  c->r[26]=c->r[26]+0x00000002u; // 8036B7E4
  c->r[25]=c->r[25]+0x00000004u; // 8036B7E8
  c->r[24]=c->r[24]+0x00000001u; // 8036B7EC
L_8036B7F0:;
  cmpu(c,0,c->r[24],c->r[27]); // 8036B7F0
  if (crb(c,0)) { IRQCHK(c); goto L_8036B798; } // 8036B7F4
L_8036B7F8:;
  c->r[0]=c->r[31]-c->r[30]; // 8036B7F8
  c->r[11]=c->r[1]+0x00000030u; // 8036B7FC
  c->r[0]=cntlz(c->r[0]); // 8036B800
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036B804
  c->lr=0x8036B80Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036B808
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036B80C
  c->lr=c->r[0]; // 8036B810
  c->r[1]=c->r[1]+0x00000030u; // 8036B814
  return; // 8036B818
}

// GetAnmResult__Q34nw4r3g3d14ResAnmAmbLightCFPQ34nw4r3g3d17AmbLightAnmResultf
void f_8036B81C(Ctx* __restrict c) {
  trace_call(0x8036B81Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036B81C
  c->r[0]=c->lr; // 8036B820
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036B824
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036B828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036B82C
  c->r[31]=c->r[4]|c->r[4]; // 8036B830
  c->r[0]=R32(c->r[5]+0x00000004u); // 8036B834
  c->r[6]=R32(c->r[5]+0x00000014u); // 8036B838
  cmps(c,0,(int32_t)c->r[0],0); // 8036B83C
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 8036B840
  if (crb(c,2)) { goto L_8036B850; } // 8036B844
  c->r[3]=c->r[5]+c->r[0]; // 8036B848
  goto L_8036B854; // 8036B84C
L_8036B850:;
  c->r[3]=0u+0x00000000u; // 8036B850
L_8036B854:;
  {uint32_t ea=c->r[2]+0xFFFFE9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036B854
  fcmp(c,0,c->f[1],c->f[0]); // 8036B858
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8036B85C
  if (!crb(c,2)) { goto L_8036B868; } // 8036B860
  goto L_8036B8A8; // 8036B864
L_8036B868:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 8036B868
  c->r[0]=0u+0x43300000u; // 8036B86C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036B870
  {uint32_t ea=c->r[2]+0xFFFFE9C0u; c->f[2]=RF64(ea);} // 8036B874
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036B878
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8036B87C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8036B880
  fcmp(c,0,c->f[0],c->f[1]); // 8036B884
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8036B888
  if (!crb(c,2)) { goto L_8036B8A4; } // 8036B88C
  W32(c->r[1]+0x00000014u,c->r[3]); // 8036B890
  W32(c->r[1]+0x00000010u,c->r[0]); // 8036B894
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8036B898
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8036B89C
  goto L_8036B8A8; // 8036B8A0
L_8036B8A4:;
  c->f[0]=c->f[1]; // 8036B8A4
L_8036B8A8:;
  c->r[0]=rotl(c->r[6],0)&0x00000003u; // 8036B8A8
  cmps(c,0,(int32_t)c->r[7],0); // 8036B8AC
  W32(c->r[4]+0x00000000u,c->r[0]); // 8036B8B0
  if (crb(c,2)) { goto L_8036B8C0; } // 8036B8B4
  c->r[3]=R32(c->r[5]+0x00000018u); // 8036B8B8
  goto L_8036B8D4; // 8036B8BC
L_8036B8C0:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 8036B8C0
  c->f[1]=c->f[0]; // 8036B8C4
  c->r[3]=c->r[5]+c->r[0]; // 8036B8C8
  c->r[3]=c->r[3]+0x00000018u; // 8036B8CC
  c->lr=0x8036B8D4u; f_80368DD8(c); // 8036B8D0
L_8036B8D4:;
  W32(c->r[31]+0x00000004u,c->r[3]); // 8036B8D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036B8D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036B8DC
  c->lr=c->r[0]; // 8036B8E0
  c->r[1]=c->r[1]+0x00000020u; // 8036B8E4
  return; // 8036B8E8
}

// GetAnmResult__Q34nw4r3g3d11ResAnmLightCFPQ34nw4r3g3d14LightAnmResultf
void f_8036B8EC(Ctx* __restrict c) {
  trace_call(0x8036B8ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036B8EC
  c->r[0]=c->lr; // 8036B8F0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8036B8F4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8036B8F8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8036B8FC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8036B900
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8036B904
  c->r[11]=c->r[1]+0x00000040u; // 8036B908
  c->lr=0x8036B910u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036B90C
  c->r[31]=R32(c->r[3]+0x00000000u); // 8036B910
  c->f[30]=c->f[1]; // 8036B914
  c->r[27]=c->r[4]|c->r[4]; // 8036B918
  c->r[0]=R32(c->r[31]+0x00000004u); // 8036B91C
  c->r[30]=R32(c->r[31]+0x0000001Cu); // 8036B920
  cmps(c,0,(int32_t)c->r[0],0); // 8036B924
  if (crb(c,2)) { goto L_8036B934; } // 8036B928
  c->r[3]=c->r[31]+c->r[0]; // 8036B92C
  goto L_8036B938; // 8036B930
L_8036B934:;
  c->r[3]=0u+0x00000000u; // 8036B934
L_8036B938:;
  {uint32_t ea=c->r[2]+0xFFFFE9C8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8036B938
  fcmp(c,0,c->f[1],c->f[31]); // 8036B93C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8036B940
  if (!crb(c,2)) { goto L_8036B94C; } // 8036B944
  goto L_8036B98C; // 8036B948
L_8036B94C:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 8036B94C
  c->r[0]=0u+0x43300000u; // 8036B950
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036B954
  {uint32_t ea=c->r[2]+0xFFFFE9D0u; c->f[2]=RF64(ea);} // 8036B958
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036B95C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8036B960
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8036B964
  fcmp(c,0,c->f[0],c->f[1]); // 8036B968
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8036B96C
  if (!crb(c,2)) { goto L_8036B988; } // 8036B970
  W32(c->r[1]+0x00000014u,c->r[3]); // 8036B974
  W32(c->r[1]+0x00000010u,c->r[0]); // 8036B978
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8036B97C
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 8036B980
  goto L_8036B98C; // 8036B984
L_8036B988:;
  c->f[31]=c->f[30]; // 8036B988
L_8036B98C:;
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 8036B98C
  c->r[0]=rotl(c->r[30],0)&0x0000003Fu; // 8036B990
  W32(c->r[4]+0x00000004u,c->r[0]); // 8036B994
  if (!crb(c,2)) { goto L_8036B9E8; } // 8036B998
  c->f[1]=c->f[31]; // 8036B99C
  c->lr=0x8036B9A4u; f_8029BF0C(c); // 8036B9A0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8036B9A4
  c->r[0]=R32(c->r[31]+0x00000020u); // 8036B9A8
  c->r[3]=0u+0x80000000u; // 8036B9AC
  c->r[5]=c->r[31]+c->r[0]; // 8036B9B0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8036B9B4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8036B9B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036B9BC
  c->r[4]=rotl(c->r[0],29)&0x1FFFFFFCu; // 8036B9C0
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8036B9C4
  c->r[4]=c->r[5]+c->r[4]; // 8036B9C8
  c->r[4]=R32(c->r[4]+0x00000020u); // 8036B9CC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 8036B9D0
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 8036B9D4
  if (crb(c,2)) { goto L_8036B9E8; } // 8036B9D8
  c->r[0]=R32(c->r[27]+0x00000004u); // 8036B9DC
  c->r[0]=c->r[0]|0x00000004u; // 8036B9E0
  W32(c->r[27]+0x00000004u,c->r[0]); // 8036B9E4
L_8036B9E8:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 8036B9E8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8036B9EC
  if (crb(c,2)) { goto L_8036BCBC; } // 8036B9F0
  c->r[29]=rotl(c->r[30],0)&0x00000003u; cr0(c,c->r[29]); // 8036B9F4
  c->r[28]=rotl(c->r[30],29)&0x00000001u; // 8036B9F8
  c->r[26]=0u+0x00000001u; // 8036B9FC
  if (!crb(c,2)) { goto L_8036BA10; } // 8036BA00
  cmps(c,0,(int32_t)c->r[28],0); // 8036BA04
  if (!crb(c,2)) { goto L_8036BA10; } // 8036BA08
  c->r[26]=0u+0x00000000u; // 8036BA0C
L_8036BA10:;
  c->r[0]=rotl(c->r[30],0)&0x00080000u; cr0(c,c->r[0]); // 8036BA10
  c->r[25]=rotl(c->r[30],12)&0x00000001u; // 8036BA14
  c->r[24]=rotl(c->r[30],11)&0x00000001u; // 8036BA18
  c->r[23]=rotl(c->r[30],10)&0x00000001u; // 8036BA1C
  if (crb(c,2)) { goto L_8036BA2C; } // 8036BA20
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BA24
  goto L_8036BA40; // 8036BA28
L_8036BA2C:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 8036BA2C
  c->f[1]=c->f[30]; // 8036BA30
  c->r[3]=c->r[31]+c->r[0]; // 8036BA34
  c->r[3]=c->r[3]+0x00000024u; // 8036BA38
  c->lr=0x8036BA40u; f_80368CAC(c); // 8036BA3C
L_8036BA40:;
  cmps(c,0,(int32_t)c->r[25],0); // 8036BA40
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 8036BA44
  if (crb(c,2)) { goto L_8036BA54; } // 8036BA48
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BA4C
  goto L_8036BA68; // 8036BA50
L_8036BA54:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 8036BA54
  c->f[1]=c->f[30]; // 8036BA58
  c->r[3]=c->r[31]+c->r[0]; // 8036BA5C
  c->r[3]=c->r[3]+0x00000028u; // 8036BA60
  c->lr=0x8036BA68u; f_80368CAC(c); // 8036BA64
L_8036BA68:;
  cmps(c,0,(int32_t)c->r[24],0); // 8036BA68
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 8036BA6C
  if (crb(c,2)) { goto L_8036BA7C; } // 8036BA70
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BA74
  goto L_8036BA90; // 8036BA78
L_8036BA7C:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8036BA7C
  c->f[1]=c->f[30]; // 8036BA80
  c->r[3]=c->r[31]+c->r[0]; // 8036BA84
  c->r[3]=c->r[3]+0x0000002Cu; // 8036BA88
  c->lr=0x8036BA90u; f_80368CAC(c); // 8036BA8C
L_8036BA90:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036BA90
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[1]);} // 8036BA94
  if (crb(c,2)) { goto L_8036BAA4; } // 8036BA98
  c->r[3]=R32(c->r[31]+0x00000030u); // 8036BA9C
  goto L_8036BAB8; // 8036BAA0
L_8036BAA4:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 8036BAA4
  c->f[1]=c->f[31]; // 8036BAA8
  c->r[3]=c->r[31]+c->r[0]; // 8036BAAC
  c->r[3]=c->r[3]+0x00000030u; // 8036BAB0
  c->lr=0x8036BAB8u; f_80368DD8(c); // 8036BAB4
L_8036BAB8:;
  cmps(c,0,(int32_t)c->r[26],0); // 8036BAB8
  W32(c->r[27]+0x00000020u,c->r[3]); // 8036BABC
  if (crb(c,2)) { goto L_8036BB44; } // 8036BAC0
  c->r[0]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[0]); // 8036BAC4
  c->r[23]=rotl(c->r[30],7)&0x00000001u; // 8036BAC8
  c->r[24]=rotl(c->r[30],6)&0x00000001u; // 8036BACC
  if (crb(c,2)) { goto L_8036BADC; } // 8036BAD0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BAD4
  goto L_8036BAF0; // 8036BAD8
L_8036BADC:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 8036BADC
  c->f[1]=c->f[30]; // 8036BAE0
  c->r[3]=c->r[31]+c->r[0]; // 8036BAE4
  c->r[3]=c->r[3]+0x00000034u; // 8036BAE8
  c->lr=0x8036BAF0u; f_80368CAC(c); // 8036BAEC
L_8036BAF0:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036BAF0
  {uint32_t ea=c->r[27]+0x00000014u; WF32(ea,c->f[1]);} // 8036BAF4
  if (crb(c,2)) { goto L_8036BB04; } // 8036BAF8
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BAFC
  goto L_8036BB18; // 8036BB00
L_8036BB04:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 8036BB04
  c->f[1]=c->f[30]; // 8036BB08
  c->r[3]=c->r[31]+c->r[0]; // 8036BB0C
  c->r[3]=c->r[3]+0x00000038u; // 8036BB10
  c->lr=0x8036BB18u; f_80368CAC(c); // 8036BB14
L_8036BB18:;
  cmps(c,0,(int32_t)c->r[24],0); // 8036BB18
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[1]);} // 8036BB1C
  if (crb(c,2)) { goto L_8036BB2C; } // 8036BB20
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BB24
  goto L_8036BB40; // 8036BB28
L_8036BB2C:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8036BB2C
  c->f[1]=c->f[30]; // 8036BB30
  c->r[3]=c->r[31]+c->r[0]; // 8036BB34
  c->r[3]=c->r[3]+0x0000003Cu; // 8036BB38
  c->lr=0x8036BB40u; f_80368CAC(c); // 8036BB3C
L_8036BB40:;
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[1]);} // 8036BB40
L_8036BB44:;
  cmps(c,0,(int32_t)c->r[29],1); // 8036BB44
  if (crb(c,2)) { goto L_8036BC58; } // 8036BB48
  if (!crb(c,0)) { goto L_8036BB5C; } // 8036BB4C
  cmps(c,0,(int32_t)c->r[29],0); // 8036BB50
  if (!crb(c,0)) { goto L_8036BB68; } // 8036BB54
  goto L_8036BC58; // 8036BB58
L_8036BB5C:;
  cmps(c,0,(int32_t)c->r[29],3); // 8036BB5C
  if (!crb(c,0)) { goto L_8036BC58; } // 8036BB60
  goto L_8036BBC8; // 8036BB64
L_8036BB68:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 8036BB68
  c->r[0]=R32(c->r[31]+0x00000040u); // 8036BB6C
  c->r[23]=rotl(c->r[30],3)&0x00000001u; // 8036BB70
  W32(c->r[27]+0x00000024u,c->r[0]); // 8036BB74
  if (crb(c,2)) { goto L_8036BB84; } // 8036BB78
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BB7C
  goto L_8036BB98; // 8036BB80
L_8036BB84:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 8036BB84
  c->f[1]=c->f[30]; // 8036BB88
  c->r[3]=c->r[31]+c->r[0]; // 8036BB8C
  c->r[3]=c->r[3]+0x00000044u; // 8036BB90
  c->lr=0x8036BB98u; f_80368CAC(c); // 8036BB94
L_8036BB98:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036BB98
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[1]);} // 8036BB9C
  if (crb(c,2)) { goto L_8036BBAC; } // 8036BBA0
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BBA4
  goto L_8036BBC0; // 8036BBA8
L_8036BBAC:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 8036BBAC
  c->f[1]=c->f[30]; // 8036BBB0
  c->r[3]=c->r[31]+c->r[0]; // 8036BBB4
  c->r[3]=c->r[3]+0x00000048u; // 8036BBB8
  c->lr=0x8036BBC0u; f_80368CAC(c); // 8036BBBC
L_8036BBC0:;
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[1]);} // 8036BBC0
  goto L_8036BC58; // 8036BBC4
L_8036BBC8:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 8036BBC8
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 8036BBCC
  c->r[23]=rotl(c->r[30],4)&0x00000001u; // 8036BBD0
  c->r[24]=rotl(c->r[30],3)&0x00000001u; // 8036BBD4
  W32(c->r[27]+0x00000024u,c->r[3]); // 8036BBD8
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 8036BBDC
  W32(c->r[27]+0x00000030u,c->r[0]); // 8036BBE0
  if (crb(c,2)) { goto L_8036BBF0; } // 8036BBE4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BBE8
  goto L_8036BC04; // 8036BBEC
L_8036BBF0:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 8036BBF0
  c->f[1]=c->f[30]; // 8036BBF4
  c->r[3]=c->r[31]+c->r[0]; // 8036BBF8
  c->r[3]=c->r[3]+0x00000050u; // 8036BBFC
  c->lr=0x8036BC04u; f_80368CAC(c); // 8036BC00
L_8036BC04:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036BC04
  {uint32_t ea=c->r[27]+0x00000034u; WF32(ea,c->f[1]);} // 8036BC08
  if (crb(c,2)) { goto L_8036BC18; } // 8036BC0C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BC10
  goto L_8036BC2C; // 8036BC14
L_8036BC18:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 8036BC18
  c->f[1]=c->f[30]; // 8036BC1C
  c->r[3]=c->r[31]+c->r[0]; // 8036BC20
  c->r[3]=c->r[3]+0x00000044u; // 8036BC24
  c->lr=0x8036BC2Cu; f_80368CAC(c); // 8036BC28
L_8036BC2C:;
  cmps(c,0,(int32_t)c->r[24],0); // 8036BC2C
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[1]);} // 8036BC30
  if (crb(c,2)) { goto L_8036BC40; } // 8036BC34
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BC38
  goto L_8036BC54; // 8036BC3C
L_8036BC40:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 8036BC40
  c->f[1]=c->f[30]; // 8036BC44
  c->r[3]=c->r[31]+c->r[0]; // 8036BC48
  c->r[3]=c->r[3]+0x00000048u; // 8036BC4C
  c->lr=0x8036BC54u; f_80368CAC(c); // 8036BC50
L_8036BC54:;
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[1]);} // 8036BC54
L_8036BC58:;
  cmps(c,0,(int32_t)c->r[28],0); // 8036BC58
  if (crb(c,2)) { goto L_8036BCBC; } // 8036BC5C
  c->r[0]=rotl(c->r[30],0)&0x40000000u; cr0(c,c->r[0]); // 8036BC60
  c->r[23]=rotl(c->r[30],1)&0x00000001u; // 8036BC64
  if (crb(c,2)) { goto L_8036BC74; } // 8036BC68
  c->r[3]=R32(c->r[31]+0x00000054u); // 8036BC6C
  goto L_8036BC88; // 8036BC70
L_8036BC74:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 8036BC74
  c->f[1]=c->f[31]; // 8036BC78
  c->r[3]=c->r[31]+c->r[0]; // 8036BC7C
  c->r[3]=c->r[3]+0x00000054u; // 8036BC80
  c->lr=0x8036BC88u; f_80368DD8(c); // 8036BC84
L_8036BC88:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036BC88
  W32(c->r[27]+0x00000038u,c->r[3]); // 8036BC8C
  if (crb(c,2)) { goto L_8036BC9C; } // 8036BC90
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BC94
  goto L_8036BCB0; // 8036BC98
L_8036BC9C:;
  c->r[0]=R32(c->r[31]+0x00000058u); // 8036BC9C
  c->f[1]=c->f[30]; // 8036BCA0
  c->r[3]=c->r[31]+c->r[0]; // 8036BCA4
  c->r[3]=c->r[3]+0x00000058u; // 8036BCA8
  c->lr=0x8036BCB0u; f_80368CAC(c); // 8036BCAC
L_8036BCB0:;
  {uint32_t ea=c->r[27]+0x0000003Cu; WF32(ea,c->f[1]);} // 8036BCB0
  c->r[0]=R32(c->r[31]+0x00000014u); // 8036BCB4
  W32(c->r[27]+0x00000000u,c->r[0]); // 8036BCB8
L_8036BCBC:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8036BCBC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8036BCC0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8036BCC4
  c->r[11]=c->r[1]+0x00000040u; // 8036BCC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8036BCCC
  c->lr=0x8036BCD4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036BCD0
  c->r[0]=R32(c->r[1]+0x00000064u); // 8036BCD4
  c->lr=c->r[0]; // 8036BCD8
  c->r[1]=c->r[1]+0x00000060u; // 8036BCDC
  return; // 8036BCE0
}

// GetAnmResult__Q34nw4r3g3d9ResAnmFogCFPQ34nw4r3g3d12FogAnmResultf
void f_8036BCE4(Ctx* __restrict c) {
  trace_call(0x8036BCE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036BCE4
  c->r[0]=c->lr; // 8036BCE8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8036BCEC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8036BCF0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8036BCF4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8036BCF8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8036BCFC
  c->f[30]=c->f[1]; // 8036BD00
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8036BD04
  c->r[31]=R32(c->r[3]+0x00000000u); // 8036BD08
  W32(c->r[1]+0x00000028u,c->r[30]); // 8036BD0C
  W32(c->r[1]+0x00000024u,c->r[29]); // 8036BD10
  W32(c->r[1]+0x00000020u,c->r[28]); // 8036BD14
  c->r[28]=c->r[4]|c->r[4]; // 8036BD18
  c->r[0]=R32(c->r[31]+0x00000004u); // 8036BD1C
  c->r[5]=R32(c->r[31]+0x00000014u); // 8036BD20
  cmps(c,0,(int32_t)c->r[0],0); // 8036BD24
  if (crb(c,2)) { goto L_8036BD34; } // 8036BD28
  c->r[3]=c->r[31]+c->r[0]; // 8036BD2C
  goto L_8036BD38; // 8036BD30
L_8036BD34:;
  c->r[3]=0u+0x00000000u; // 8036BD34
L_8036BD38:;
  {uint32_t ea=c->r[2]+0xFFFFE9D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8036BD38
  fcmp(c,0,c->f[1],c->f[31]); // 8036BD3C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8036BD40
  if (!crb(c,2)) { goto L_8036BD4C; } // 8036BD44
  goto L_8036BD8C; // 8036BD48
L_8036BD4C:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 8036BD4C
  c->r[0]=0u+0x43300000u; // 8036BD50
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036BD54
  {uint32_t ea=c->r[2]+0xFFFFE9E0u; c->f[2]=RF64(ea);} // 8036BD58
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036BD5C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8036BD60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8036BD64
  fcmp(c,0,c->f[0],c->f[1]); // 8036BD68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8036BD6C
  if (!crb(c,2)) { goto L_8036BD88; } // 8036BD70
  W32(c->r[1]+0x00000014u,c->r[3]); // 8036BD74
  W32(c->r[1]+0x00000010u,c->r[0]); // 8036BD78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8036BD7C
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 8036BD80
  goto L_8036BD8C; // 8036BD84
L_8036BD88:;
  c->f[31]=c->f[30]; // 8036BD88
L_8036BD8C:;
  c->r[0]=rotl(c->r[5],0)&0x20000000u; cr0(c,c->r[0]); // 8036BD8C
  c->r[0]=R32(c->r[31]+0x00000018u); // 8036BD90
  c->r[30]=rotl(c->r[5],2)&0x00000001u; // 8036BD94
  c->r[29]=rotl(c->r[5],1)&0x00000001u; // 8036BD98
  W32(c->r[4]+0x00000000u,c->r[0]); // 8036BD9C
  if (crb(c,2)) { goto L_8036BDAC; } // 8036BDA0
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BDA4
  goto L_8036BDC0; // 8036BDA8
L_8036BDAC:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8036BDAC
  c->f[1]=c->f[30]; // 8036BDB0
  c->r[3]=c->r[31]+c->r[0]; // 8036BDB4
  c->r[3]=c->r[3]+0x0000001Cu; // 8036BDB8
  c->lr=0x8036BDC0u; f_80368CAC(c); // 8036BDBC
L_8036BDC0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8036BDC0
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 8036BDC4
  if (crb(c,2)) { goto L_8036BDD4; } // 8036BDC8
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BDCC
  goto L_8036BDE8; // 8036BDD0
L_8036BDD4:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 8036BDD4
  c->f[1]=c->f[30]; // 8036BDD8
  c->r[3]=c->r[31]+c->r[0]; // 8036BDDC
  c->r[3]=c->r[3]+0x00000020u; // 8036BDE0
  c->lr=0x8036BDE8u; f_80368CAC(c); // 8036BDE4
L_8036BDE8:;
  cmps(c,0,(int32_t)c->r[29],0); // 8036BDE8
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 8036BDEC
  if (crb(c,2)) { goto L_8036BDFC; } // 8036BDF0
  c->r[3]=R32(c->r[31]+0x00000024u); // 8036BDF4
  goto L_8036BE10; // 8036BDF8
L_8036BDFC:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 8036BDFC
  c->f[1]=c->f[31]; // 8036BE00
  c->r[3]=c->r[31]+c->r[0]; // 8036BE04
  c->r[3]=c->r[3]+0x00000024u; // 8036BE08
  c->lr=0x8036BE10u; f_80368DD8(c); // 8036BE0C
L_8036BE10:;
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 8036BE10
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8036BE14
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8036BE18
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8036BE1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8036BE20
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8036BE24
  c->r[30]=R32(c->r[1]+0x00000028u); // 8036BE28
  c->r[29]=R32(c->r[1]+0x00000024u); // 8036BE2C
  c->r[28]=R32(c->r[1]+0x00000020u); // 8036BE30
  c->r[0]=R32(c->r[1]+0x00000054u); // 8036BE34
  c->lr=c->r[0]; // 8036BE38
  c->r[1]=c->r[1]+0x00000050u; // 8036BE3C
  return; // 8036BE40
}

// GetAnmResult__Q34nw4r3g3d12ResAnmCameraCFPQ34nw4r3g3d15CameraAnmResultf
void f_8036BE44(Ctx* __restrict c) {
  trace_call(0x8036BE44u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036BE44
  c->r[0]=c->lr; // 8036BE48
  W32(c->r[1]+0x00000044u,c->r[0]); // 8036BE4C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8036BE50
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8036BE54
  c->r[11]=c->r[1]+0x00000030u; // 8036BE58
  c->lr=0x8036BE60u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036BE5C
  c->r[31]=R32(c->r[3]+0x00000000u); // 8036BE60
  c->f[31]=c->f[1]; // 8036BE64
  c->r[26]=c->r[4]|c->r[4]; // 8036BE68
  c->r[30]=R32(c->r[31]+0x00000018u); // 8036BE6C
  c->r[3]=rotl(c->r[30],0)&0x00000003u; // 8036BE70
  c->r[0]=rotl(c->r[30],0)&0x00020000u; cr0(c,c->r[0]); // 8036BE74
  W32(c->r[4]+0x00000000u,c->r[3]); // 8036BE78
  c->r[25]=rotl(c->r[30],14)&0x00000001u; // 8036BE7C
  c->r[24]=rotl(c->r[30],13)&0x00000001u; // 8036BE80
  c->r[23]=rotl(c->r[30],12)&0x00000001u; // 8036BE84
  c->r[0]=R32(c->r[31]+0x00000014u); // 8036BE88
  c->r[29]=rotl(c->r[30],11)&0x00000001u; // 8036BE8C
  c->r[28]=rotl(c->r[30],10)&0x00000001u; // 8036BE90
  c->r[27]=rotl(c->r[30],0)&0x00000001u; // 8036BE94
  W32(c->r[4]+0x00000004u,c->r[0]); // 8036BE98
  if (crb(c,2)) { goto L_8036BEA8; } // 8036BE9C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BEA0
  goto L_8036BEB8; // 8036BEA4
L_8036BEA8:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 8036BEA8
  c->r[3]=c->r[31]+c->r[0]; // 8036BEAC
  c->r[3]=c->r[3]+0x00000020u; // 8036BEB0
  c->lr=0x8036BEB8u; f_80368CAC(c); // 8036BEB4
L_8036BEB8:;
  cmps(c,0,(int32_t)c->r[25],0); // 8036BEB8
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[1]);} // 8036BEBC
  if (crb(c,2)) { goto L_8036BECC; } // 8036BEC0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BEC4
  goto L_8036BEE0; // 8036BEC8
L_8036BECC:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 8036BECC
  c->f[1]=c->f[31]; // 8036BED0
  c->r[3]=c->r[31]+c->r[0]; // 8036BED4
  c->r[3]=c->r[3]+0x00000024u; // 8036BED8
  c->lr=0x8036BEE0u; f_80368CAC(c); // 8036BEDC
L_8036BEE0:;
  cmps(c,0,(int32_t)c->r[24],0); // 8036BEE0
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[1]);} // 8036BEE4
  if (crb(c,2)) { goto L_8036BEF4; } // 8036BEE8
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BEEC
  goto L_8036BF08; // 8036BEF0
L_8036BEF4:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 8036BEF4
  c->f[1]=c->f[31]; // 8036BEF8
  c->r[3]=c->r[31]+c->r[0]; // 8036BEFC
  c->r[3]=c->r[3]+0x00000028u; // 8036BF00
  c->lr=0x8036BF08u; f_80368CAC(c); // 8036BF04
L_8036BF08:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036BF08
  {uint32_t ea=c->r[26]+0x00000010u; WF32(ea,c->f[1]);} // 8036BF0C
  if (crb(c,2)) { goto L_8036BF1C; } // 8036BF10
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BF14
  goto L_8036BF30; // 8036BF18
L_8036BF1C:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8036BF1C
  c->f[1]=c->f[31]; // 8036BF20
  c->r[3]=c->r[31]+c->r[0]; // 8036BF24
  c->r[3]=c->r[3]+0x0000002Cu; // 8036BF28
  c->lr=0x8036BF30u; f_80368CAC(c); // 8036BF2C
L_8036BF30:;
  cmps(c,0,(int32_t)c->r[29],0); // 8036BF30
  {uint32_t ea=c->r[26]+0x00000014u; WF32(ea,c->f[1]);} // 8036BF34
  if (crb(c,2)) { goto L_8036BF44; } // 8036BF38
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BF3C
  goto L_8036BF58; // 8036BF40
L_8036BF44:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 8036BF44
  c->f[1]=c->f[31]; // 8036BF48
  c->r[3]=c->r[31]+c->r[0]; // 8036BF4C
  c->r[3]=c->r[3]+0x00000030u; // 8036BF50
  c->lr=0x8036BF58u; f_80368CAC(c); // 8036BF54
L_8036BF58:;
  cmps(c,0,(int32_t)c->r[28],0); // 8036BF58
  {uint32_t ea=c->r[26]+0x00000018u; WF32(ea,c->f[1]);} // 8036BF5C
  if (crb(c,2)) { goto L_8036BF6C; } // 8036BF60
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BF64
  goto L_8036BF80; // 8036BF68
L_8036BF6C:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 8036BF6C
  c->f[1]=c->f[31]; // 8036BF70
  c->r[3]=c->r[31]+c->r[0]; // 8036BF74
  c->r[3]=c->r[3]+0x00000034u; // 8036BF78
  c->lr=0x8036BF80u; f_80368CAC(c); // 8036BF7C
L_8036BF80:;
  cmps(c,0,(int32_t)c->r[27],1); // 8036BF80
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[1]);} // 8036BF84
  if (crb(c,2)) { goto L_8036C020; } // 8036BF88
  if (!crb(c,0)) { goto L_8036C0CC; } // 8036BF8C
  cmps(c,0,(int32_t)c->r[27],0); // 8036BF90
  if (!crb(c,0)) { goto L_8036BF9C; } // 8036BF94
  goto L_8036C0CC; // 8036BF98
L_8036BF9C:;
  c->r[0]=rotl(c->r[30],0)&0x20000000u; cr0(c,c->r[0]); // 8036BF9C
  c->r[23]=rotl(c->r[30],2)&0x00000001u; // 8036BFA0
  c->r[24]=rotl(c->r[30],1)&0x00000001u; // 8036BFA4
  if (crb(c,2)) { goto L_8036BFB4; } // 8036BFA8
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BFAC
  goto L_8036BFC8; // 8036BFB0
L_8036BFB4:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 8036BFB4
  c->f[1]=c->f[31]; // 8036BFB8
  c->r[3]=c->r[31]+c->r[0]; // 8036BFBC
  c->r[3]=c->r[3]+0x00000038u; // 8036BFC0
  c->lr=0x8036BFC8u; f_80368CAC(c); // 8036BFC4
L_8036BFC8:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036BFC8
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[1]);} // 8036BFCC
  if (crb(c,2)) { goto L_8036BFDC; } // 8036BFD0
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BFD4
  goto L_8036BFF0; // 8036BFD8
L_8036BFDC:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8036BFDC
  c->f[1]=c->f[31]; // 8036BFE0
  c->r[3]=c->r[31]+c->r[0]; // 8036BFE4
  c->r[3]=c->r[3]+0x0000003Cu; // 8036BFE8
  c->lr=0x8036BFF0u; f_80368CAC(c); // 8036BFEC
L_8036BFF0:;
  cmps(c,0,(int32_t)c->r[24],0); // 8036BFF0
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[1]);} // 8036BFF4
  if (crb(c,2)) { goto L_8036C004; } // 8036BFF8
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036BFFC
  goto L_8036C018; // 8036C000
L_8036C004:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 8036C004
  c->f[1]=c->f[31]; // 8036C008
  c->r[3]=c->r[31]+c->r[0]; // 8036C00C
  c->r[3]=c->r[3]+0x00000040u; // 8036C010
  c->lr=0x8036C018u; f_80368CAC(c); // 8036C014
L_8036C018:;
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[1]);} // 8036C018
  goto L_8036C0CC; // 8036C01C
L_8036C020:;
  c->r[0]=rotl(c->r[30],0)&0x02000000u; cr0(c,c->r[0]); // 8036C020
  c->r[23]=rotl(c->r[30],6)&0x00000001u; // 8036C024
  c->r[24]=rotl(c->r[30],5)&0x00000001u; // 8036C028
  c->r[25]=rotl(c->r[30],4)&0x00000001u; // 8036C02C
  if (crb(c,2)) { goto L_8036C03C; } // 8036C030
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036C034
  goto L_8036C050; // 8036C038
L_8036C03C:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 8036C03C
  c->f[1]=c->f[31]; // 8036C040
  c->r[3]=c->r[31]+c->r[0]; // 8036C044
  c->r[3]=c->r[3]+0x00000044u; // 8036C048
  c->lr=0x8036C050u; f_80368CAC(c); // 8036C04C
L_8036C050:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036C050
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[1]);} // 8036C054
  if (crb(c,2)) { goto L_8036C064; } // 8036C058
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036C05C
  goto L_8036C078; // 8036C060
L_8036C064:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 8036C064
  c->f[1]=c->f[31]; // 8036C068
  c->r[3]=c->r[31]+c->r[0]; // 8036C06C
  c->r[3]=c->r[3]+0x00000048u; // 8036C070
  c->lr=0x8036C078u; f_80368CAC(c); // 8036C074
L_8036C078:;
  cmps(c,0,(int32_t)c->r[24],0); // 8036C078
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[1]);} // 8036C07C
  if (crb(c,2)) { goto L_8036C08C; } // 8036C080
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036C084
  goto L_8036C0A0; // 8036C088
L_8036C08C:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 8036C08C
  c->f[1]=c->f[31]; // 8036C090
  c->r[3]=c->r[31]+c->r[0]; // 8036C094
  c->r[3]=c->r[3]+0x0000004Cu; // 8036C098
  c->lr=0x8036C0A0u; f_80368CAC(c); // 8036C09C
L_8036C0A0:;
  cmps(c,0,(int32_t)c->r[25],0); // 8036C0A0
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[1]);} // 8036C0A4
  if (crb(c,2)) { goto L_8036C0B4; } // 8036C0A8
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036C0AC
  goto L_8036C0C8; // 8036C0B0
L_8036C0B4:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 8036C0B4
  c->f[1]=c->f[31]; // 8036C0B8
  c->r[3]=c->r[31]+c->r[0]; // 8036C0BC
  c->r[3]=c->r[3]+0x00000050u; // 8036C0C0
  c->lr=0x8036C0C8u; f_80368CAC(c); // 8036C0C4
L_8036C0C8:;
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[1]);} // 8036C0C8
L_8036C0CC:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8036C0CC
  cmps(c,0,(int32_t)c->r[0],1); // 8036C0D0
  if (crb(c,2)) { goto L_8036C114; } // 8036C0D4
  if (!crb(c,0)) { goto L_8036C13C; } // 8036C0D8
  cmps(c,0,(int32_t)c->r[0],0); // 8036C0DC
  if (!crb(c,0)) { goto L_8036C0E8; } // 8036C0E0
  goto L_8036C13C; // 8036C0E4
L_8036C0E8:;
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 8036C0E8
  if (crb(c,2)) { goto L_8036C0F8; } // 8036C0EC
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036C0F0
  goto L_8036C10C; // 8036C0F4
L_8036C0F8:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 8036C0F8
  c->f[1]=c->f[31]; // 8036C0FC
  c->r[3]=c->r[31]+c->r[0]; // 8036C100
  c->r[3]=c->r[3]+0x00000054u; // 8036C104
  c->lr=0x8036C10Cu; f_80368CAC(c); // 8036C108
L_8036C10C:;
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[1]);} // 8036C10C
  goto L_8036C13C; // 8036C110
L_8036C114:;
  c->r[0]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[0]); // 8036C114
  if (crb(c,2)) { goto L_8036C124; } // 8036C118
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036C11C
  goto L_8036C138; // 8036C120
L_8036C124:;
  c->r[0]=R32(c->r[31]+0x00000058u); // 8036C124
  c->f[1]=c->f[31]; // 8036C128
  c->r[3]=c->r[31]+c->r[0]; // 8036C12C
  c->r[3]=c->r[3]+0x00000058u; // 8036C130
  c->lr=0x8036C138u; f_80368CAC(c); // 8036C134
L_8036C138:;
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[1]);} // 8036C138
L_8036C13C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8036C13C
  c->r[11]=c->r[1]+0x00000030u; // 8036C140
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8036C144
  c->lr=0x8036C14Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036C148
  c->r[0]=R32(c->r[1]+0x00000044u); // 8036C14C
  c->lr=c->r[0]; // 8036C150
  c->r[1]=c->r[1]+0x00000040u; // 8036C154
  return; // 8036C158
}

// fn_8036C15C
void f_8036C15C(Ctx* __restrict c) {
  trace_call(0x8036C15Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C15C
  c->r[0]=c->lr; // 8036C160
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C164
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C168
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C16C
  cmps(c,0,(int32_t)c->r[0],0); // 8036C170
  if (crb(c,2)) { goto L_8036C180; } // 8036C174
  c->r[0]=c->r[3]+c->r[0]; // 8036C178
  goto L_8036C184; // 8036C17C
L_8036C180:;
  c->r[0]=0u+0x00000000u; // 8036C180
L_8036C184:;
  c->r[3]=0u+0x80430000u; // 8036C184
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036C188
  c->r[3]=c->r[3]+0x00004840u; // 8036C18C
  c->r[4]=c->r[1]+0x00000008u; // 8036C190
  W32(c->r[1]+0x00000008u,c->r[3]); // 8036C194
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C198
  c->lr=0x8036C1A0u; f_803639BC(c); // 8036C19C
  c->r[0]=0u-c->r[3]; // 8036C1A0
  c->r[0]=c->r[0]|c->r[3]; // 8036C1A4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8036C1A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036C1AC
  c->lr=c->r[0]; // 8036C1B0
  c->r[1]=c->r[1]+0x00000010u; // 8036C1B4
  return; // 8036C1B8
}

// fn_8036C1BC
void f_8036C1BC(Ctx* __restrict c) {
  trace_call(0x8036C1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C1BC
  c->r[0]=c->lr; // 8036C1C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C1C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C1C8
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C1CC
  cmps(c,0,(int32_t)c->r[0],0); // 8036C1D0
  if (crb(c,2)) { goto L_8036C1E0; } // 8036C1D4
  c->r[0]=c->r[3]+c->r[0]; // 8036C1D8
  goto L_8036C1E4; // 8036C1DC
L_8036C1E0:;
  c->r[0]=0u+0x00000000u; // 8036C1E0
L_8036C1E4:;
  c->r[3]=0u+0x80430000u; // 8036C1E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036C1E8
  c->r[3]=c->r[3]+0x00004860u; // 8036C1EC
  c->r[4]=c->r[1]+0x00000008u; // 8036C1F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 8036C1F4
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C1F8
  c->lr=0x8036C200u; f_803639BC(c); // 8036C1FC
  c->r[0]=0u-c->r[3]; // 8036C200
  c->r[0]=c->r[0]|c->r[3]; // 8036C204
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8036C208
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036C20C
  c->lr=c->r[0]; // 8036C210
  c->r[1]=c->r[1]+0x00000010u; // 8036C214
  return; // 8036C218
}

// fn_8036C21C
void f_8036C21C(Ctx* __restrict c) {
  trace_call(0x8036C21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C21C
  c->r[0]=c->lr; // 8036C220
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C224
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C228
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C22C
  cmps(c,0,(int32_t)c->r[0],0); // 8036C230
  if (crb(c,2)) { goto L_8036C240; } // 8036C234
  c->r[0]=c->r[3]+c->r[0]; // 8036C238
  goto L_8036C244; // 8036C23C
L_8036C240:;
  c->r[0]=0u+0x00000000u; // 8036C240
L_8036C244:;
  c->r[3]=0u+0x80430000u; // 8036C244
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036C248
  c->r[3]=c->r[3]+0x00004820u; // 8036C24C
  c->r[4]=c->r[1]+0x00000008u; // 8036C250
  W32(c->r[1]+0x00000008u,c->r[3]); // 8036C254
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C258
  c->lr=0x8036C260u; f_803639BC(c); // 8036C25C
  cmps(c,0,(int32_t)c->r[3],0); // 8036C260
  if (crb(c,2)) { goto L_8036C288; } // 8036C264
  c->r[0]=0u-c->r[3]; // 8036C268
  c->r[0]=c->r[0]|c->r[3]; // 8036C26C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C270
  if (crb(c,2)) { goto L_8036C280; } // 8036C274
  c->r[3]=R32(c->r[3]+0x00000004u); // 8036C278
  goto L_8036C28C; // 8036C27C
L_8036C280:;
  c->r[3]=0u+0x00000000u; // 8036C280
  goto L_8036C28C; // 8036C284
L_8036C288:;
  c->r[3]=0u+0x00000000u; // 8036C288
L_8036C28C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036C28C
  c->lr=c->r[0]; // 8036C290
  c->r[1]=c->r[1]+0x00000010u; // 8036C294
  return; // 8036C298
}

// fn_8036C29C
void f_8036C29C(Ctx* __restrict c) {
  trace_call(0x8036C29Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C29C
  c->r[0]=c->lr; // 8036C2A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C2A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036C2A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036C2AC
  c->r[31]=c->r[4]|c->r[4]; // 8036C2B0
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C2B4
  cmps(c,0,(int32_t)c->r[0],0); // 8036C2B8
  if (crb(c,2)) { goto L_8036C2C8; } // 8036C2BC
  c->r[0]=c->r[3]+c->r[0]; // 8036C2C0
  goto L_8036C2CC; // 8036C2C4
L_8036C2C8:;
  c->r[0]=0u+0x00000000u; // 8036C2C8
L_8036C2CC:;
  c->r[3]=0u+0x80430000u; // 8036C2CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C2D0
  c->r[3]=c->r[3]+0x00004840u; // 8036C2D4
  c->r[4]=c->r[1]+0x00000010u; // 8036C2D8
  W32(c->r[1]+0x00000010u,c->r[3]); // 8036C2DC
  c->r[3]=c->r[1]+0x00000014u; // 8036C2E0
  c->lr=0x8036C2E8u; f_803639BC(c); // 8036C2E4
  cmps(c,0,(int32_t)c->r[3],0); // 8036C2E8
  if (crb(c,2)) { goto L_8036C30C; } // 8036C2EC
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036C2F0
  c->r[4]=c->r[1]+0x00000008u; // 8036C2F4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036C2F8
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C2FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036C300
  c->lr=0x8036C308u; f_803639BC(c); // 8036C304
  goto L_8036C310; // 8036C308
L_8036C30C:;
  c->r[3]=0u+0x00000000u; // 8036C30C
L_8036C310:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036C310
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036C314
  c->lr=c->r[0]; // 8036C318
  c->r[1]=c->r[1]+0x00000020u; // 8036C31C
  return; // 8036C320
}

// fn_8036C324
void f_8036C324(Ctx* __restrict c) {
  trace_call(0x8036C324u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C324
  c->r[0]=c->lr; // 8036C328
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C32C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036C330
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036C334
  c->r[31]=c->r[4]|c->r[4]; // 8036C338
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C33C
  cmps(c,0,(int32_t)c->r[0],0); // 8036C340
  if (crb(c,2)) { goto L_8036C350; } // 8036C344
  c->r[0]=c->r[3]+c->r[0]; // 8036C348
  goto L_8036C354; // 8036C34C
L_8036C350:;
  c->r[0]=0u+0x00000000u; // 8036C350
L_8036C354:;
  c->r[3]=0u+0x80430000u; // 8036C354
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036C358
  c->r[3]=c->r[3]+0x00004840u; // 8036C35C
  c->r[4]=c->r[1]+0x0000000Cu; // 8036C360
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036C364
  c->r[3]=c->r[1]+0x00000008u; // 8036C368
  c->lr=0x8036C370u; f_803639BC(c); // 8036C36C
  cmps(c,0,(int32_t)c->r[3],0); // 8036C370
  if (crb(c,2)) { goto L_8036C3B8; } // 8036C374
  c->r[0]=0u-c->r[3]; // 8036C378
  c->r[0]=c->r[0]|c->r[3]; // 8036C37C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C380
  if (crb(c,2)) { goto L_8036C3B0; } // 8036C384
  c->r[0]=c->r[31]+0x00000001u; // 8036C388
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8036C38C
  c->r[4]=c->r[3]+c->r[0]; // 8036C390
  c->r[0]=R32(c->r[4]+0x00000014u); // 8036C394
  cmps(c,0,(int32_t)c->r[0],0); // 8036C398
  if (crb(c,2)) { goto L_8036C3A8; } // 8036C39C
  c->r[3]=c->r[3]+c->r[0]; // 8036C3A0
  goto L_8036C3BC; // 8036C3A4
L_8036C3A8:;
  c->r[3]=0u+0x00000000u; // 8036C3A8
  goto L_8036C3BC; // 8036C3AC
L_8036C3B0:;
  c->r[3]=0u+0x00000000u; // 8036C3B0
  goto L_8036C3BC; // 8036C3B4
L_8036C3B8:;
  c->r[3]=0u+0x00000000u; // 8036C3B8
L_8036C3BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036C3BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036C3C0
  c->lr=c->r[0]; // 8036C3C4
  c->r[1]=c->r[1]+0x00000020u; // 8036C3C8
  return; // 8036C3CC
}

// fn_8036C3D0
void f_8036C3D0(Ctx* __restrict c) {
  trace_call(0x8036C3D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C3D0
  c->r[0]=c->lr; // 8036C3D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C3DC
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C3E0
  cmps(c,0,(int32_t)c->r[0],0); // 8036C3E4
  if (crb(c,2)) { goto L_8036C3F4; } // 8036C3E8
  c->r[0]=c->r[3]+c->r[0]; // 8036C3EC
  goto L_8036C3F8; // 8036C3F0
L_8036C3F4:;
  c->r[0]=0u+0x00000000u; // 8036C3F4
L_8036C3F8:;
  c->r[3]=0u+0x80430000u; // 8036C3F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036C3FC
  c->r[3]=c->r[3]+0x00004840u; // 8036C400
  c->r[4]=c->r[1]+0x00000008u; // 8036C404
  W32(c->r[1]+0x00000008u,c->r[3]); // 8036C408
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C40C
  c->lr=0x8036C414u; f_803639BC(c); // 8036C410
  cmps(c,0,(int32_t)c->r[3],0); // 8036C414
  if (crb(c,2)) { goto L_8036C43C; } // 8036C418
  c->r[0]=0u-c->r[3]; // 8036C41C
  c->r[0]=c->r[0]|c->r[3]; // 8036C420
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C424
  if (crb(c,2)) { goto L_8036C434; } // 8036C428
  c->r[3]=R32(c->r[3]+0x00000004u); // 8036C42C
  goto L_8036C440; // 8036C430
L_8036C434:;
  c->r[3]=0u+0x00000000u; // 8036C434
  goto L_8036C440; // 8036C438
L_8036C43C:;
  c->r[3]=0u+0x00000000u; // 8036C43C
L_8036C440:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036C440
  c->lr=c->r[0]; // 8036C444
  c->r[1]=c->r[1]+0x00000010u; // 8036C448
  return; // 8036C44C
}

// fn_8036C450
void f_8036C450(Ctx* __restrict c) {
  trace_call(0x8036C450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C450
  c->r[0]=c->lr; // 8036C454
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C458
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036C45C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036C460
  c->r[31]=c->r[4]|c->r[4]; // 8036C464
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C468
  cmps(c,0,(int32_t)c->r[0],0); // 8036C46C
  if (crb(c,2)) { goto L_8036C47C; } // 8036C470
  c->r[0]=c->r[3]+c->r[0]; // 8036C474
  goto L_8036C480; // 8036C478
L_8036C47C:;
  c->r[0]=0u+0x00000000u; // 8036C47C
L_8036C480:;
  c->r[3]=0u+0x80430000u; // 8036C480
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C484
  c->r[3]=c->r[3]+0x00004860u; // 8036C488
  c->r[4]=c->r[1]+0x00000010u; // 8036C48C
  W32(c->r[1]+0x00000010u,c->r[3]); // 8036C490
  c->r[3]=c->r[1]+0x00000014u; // 8036C494
  c->lr=0x8036C49Cu; f_803639BC(c); // 8036C498
  cmps(c,0,(int32_t)c->r[3],0); // 8036C49C
  if (crb(c,2)) { goto L_8036C4C0; } // 8036C4A0
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036C4A4
  c->r[4]=c->r[1]+0x00000008u; // 8036C4A8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036C4AC
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C4B0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036C4B4
  c->lr=0x8036C4BCu; f_803639BC(c); // 8036C4B8
  goto L_8036C4C4; // 8036C4BC
L_8036C4C0:;
  c->r[3]=0u+0x00000000u; // 8036C4C0
L_8036C4C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036C4C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036C4C8
  c->lr=c->r[0]; // 8036C4CC
  c->r[1]=c->r[1]+0x00000020u; // 8036C4D0
  return; // 8036C4D4
}

// fn_8036C4D8
void f_8036C4D8(Ctx* __restrict c) {
  trace_call(0x8036C4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C4D8
  c->r[0]=c->lr; // 8036C4DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C4E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036C4E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036C4E8
  c->r[31]=c->r[4]|c->r[4]; // 8036C4EC
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C4F0
  cmps(c,0,(int32_t)c->r[0],0); // 8036C4F4
  if (crb(c,2)) { goto L_8036C504; } // 8036C4F8
  c->r[0]=c->r[3]+c->r[0]; // 8036C4FC
  goto L_8036C508; // 8036C500
L_8036C504:;
  c->r[0]=0u+0x00000000u; // 8036C504
L_8036C508:;
  c->r[3]=0u+0x80430000u; // 8036C508
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036C50C
  c->r[3]=c->r[3]+0x00004860u; // 8036C510
  c->r[4]=c->r[1]+0x0000000Cu; // 8036C514
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036C518
  c->r[3]=c->r[1]+0x00000008u; // 8036C51C
  c->lr=0x8036C524u; f_803639BC(c); // 8036C520
  cmps(c,0,(int32_t)c->r[3],0); // 8036C524
  if (crb(c,2)) { goto L_8036C56C; } // 8036C528
  c->r[0]=0u-c->r[3]; // 8036C52C
  c->r[0]=c->r[0]|c->r[3]; // 8036C530
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C534
  if (crb(c,2)) { goto L_8036C564; } // 8036C538
  c->r[0]=c->r[31]+0x00000001u; // 8036C53C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8036C540
  c->r[4]=c->r[3]+c->r[0]; // 8036C544
  c->r[0]=R32(c->r[4]+0x00000014u); // 8036C548
  cmps(c,0,(int32_t)c->r[0],0); // 8036C54C
  if (crb(c,2)) { goto L_8036C55C; } // 8036C550
  c->r[3]=c->r[3]+c->r[0]; // 8036C554
  goto L_8036C570; // 8036C558
L_8036C55C:;
  c->r[3]=0u+0x00000000u; // 8036C55C
  goto L_8036C570; // 8036C560
L_8036C564:;
  c->r[3]=0u+0x00000000u; // 8036C564
  goto L_8036C570; // 8036C568
L_8036C56C:;
  c->r[3]=0u+0x00000000u; // 8036C56C
L_8036C570:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036C570
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036C574
  c->lr=c->r[0]; // 8036C578
  c->r[1]=c->r[1]+0x00000020u; // 8036C57C
  return; // 8036C580
}

// fn_8036C584
void f_8036C584(Ctx* __restrict c) {
  trace_call(0x8036C584u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C584
  c->r[0]=c->lr; // 8036C588
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C58C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C590
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C594
  cmps(c,0,(int32_t)c->r[0],0); // 8036C598
  if (crb(c,2)) { goto L_8036C5A8; } // 8036C59C
  c->r[0]=c->r[3]+c->r[0]; // 8036C5A0
  goto L_8036C5AC; // 8036C5A4
L_8036C5A8:;
  c->r[0]=0u+0x00000000u; // 8036C5A8
L_8036C5AC:;
  c->r[3]=0u+0x80430000u; // 8036C5AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036C5B0
  c->r[3]=c->r[3]+0x00004860u; // 8036C5B4
  c->r[4]=c->r[1]+0x00000008u; // 8036C5B8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8036C5BC
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C5C0
  c->lr=0x8036C5C8u; f_803639BC(c); // 8036C5C4
  cmps(c,0,(int32_t)c->r[3],0); // 8036C5C8
  if (crb(c,2)) { goto L_8036C5F0; } // 8036C5CC
  c->r[0]=0u-c->r[3]; // 8036C5D0
  c->r[0]=c->r[0]|c->r[3]; // 8036C5D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C5D8
  if (crb(c,2)) { goto L_8036C5E8; } // 8036C5DC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8036C5E0
  goto L_8036C5F4; // 8036C5E4
L_8036C5E8:;
  c->r[3]=0u+0x00000000u; // 8036C5E8
  goto L_8036C5F4; // 8036C5EC
L_8036C5F0:;
  c->r[3]=0u+0x00000000u; // 8036C5F0
L_8036C5F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036C5F4
  c->lr=c->r[0]; // 8036C5F8
  c->r[1]=c->r[1]+0x00000010u; // 8036C5FC
  return; // 8036C600
}

// fn_8036C604
void f_8036C604(Ctx* __restrict c) {
  trace_call(0x8036C604u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C604
  c->r[0]=c->lr; // 8036C608
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C60C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036C610
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036C614
  c->r[31]=c->r[4]|c->r[4]; // 8036C618
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C61C
  cmps(c,0,(int32_t)c->r[0],0); // 8036C620
  if (crb(c,2)) { goto L_8036C630; } // 8036C624
  c->r[0]=c->r[3]+c->r[0]; // 8036C628
  goto L_8036C634; // 8036C62C
L_8036C630:;
  c->r[0]=0u+0x00000000u; // 8036C630
L_8036C634:;
  c->r[3]=0u+0x80430000u; // 8036C634
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036C638
  c->r[3]=c->r[3]+0x00004880u; // 8036C63C
  c->r[4]=c->r[1]+0x0000000Cu; // 8036C640
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036C644
  c->r[3]=c->r[1]+0x00000008u; // 8036C648
  c->lr=0x8036C650u; f_803639BC(c); // 8036C64C
  cmps(c,0,(int32_t)c->r[3],0); // 8036C650
  if (crb(c,2)) { goto L_8036C698; } // 8036C654
  c->r[0]=0u-c->r[3]; // 8036C658
  c->r[0]=c->r[0]|c->r[3]; // 8036C65C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C660
  if (crb(c,2)) { goto L_8036C690; } // 8036C664
  c->r[0]=c->r[31]+0x00000001u; // 8036C668
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8036C66C
  c->r[4]=c->r[3]+c->r[0]; // 8036C670
  c->r[0]=R32(c->r[4]+0x00000014u); // 8036C674
  cmps(c,0,(int32_t)c->r[0],0); // 8036C678
  if (crb(c,2)) { goto L_8036C688; } // 8036C67C
  c->r[3]=c->r[3]+c->r[0]; // 8036C680
  goto L_8036C69C; // 8036C684
L_8036C688:;
  c->r[3]=0u+0x00000000u; // 8036C688
  goto L_8036C69C; // 8036C68C
L_8036C690:;
  c->r[3]=0u+0x00000000u; // 8036C690
  goto L_8036C69C; // 8036C694
L_8036C698:;
  c->r[3]=0u+0x00000000u; // 8036C698
L_8036C69C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036C69C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036C6A0
  c->lr=c->r[0]; // 8036C6A4
  c->r[1]=c->r[1]+0x00000020u; // 8036C6A8
  return; // 8036C6AC
}

// fn_8036C6B0
void f_8036C6B0(Ctx* __restrict c) {
  trace_call(0x8036C6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C6B0
  c->r[0]=c->lr; // 8036C6B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C6B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C6BC
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C6C0
  cmps(c,0,(int32_t)c->r[0],0); // 8036C6C4
  if (crb(c,2)) { goto L_8036C6D4; } // 8036C6C8
  c->r[0]=c->r[3]+c->r[0]; // 8036C6CC
  goto L_8036C6D8; // 8036C6D0
L_8036C6D4:;
  c->r[0]=0u+0x00000000u; // 8036C6D4
L_8036C6D8:;
  c->r[3]=0u+0x80430000u; // 8036C6D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036C6DC
  c->r[3]=c->r[3]+0x00004880u; // 8036C6E0
  c->r[4]=c->r[1]+0x00000008u; // 8036C6E4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8036C6E8
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C6EC
  c->lr=0x8036C6F4u; f_803639BC(c); // 8036C6F0
  cmps(c,0,(int32_t)c->r[3],0); // 8036C6F4
  if (crb(c,2)) { goto L_8036C71C; } // 8036C6F8
  c->r[0]=0u-c->r[3]; // 8036C6FC
  c->r[0]=c->r[0]|c->r[3]; // 8036C700
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C704
  if (crb(c,2)) { goto L_8036C714; } // 8036C708
  c->r[3]=R32(c->r[3]+0x00000004u); // 8036C70C
  goto L_8036C720; // 8036C710
L_8036C714:;
  c->r[3]=0u+0x00000000u; // 8036C714
  goto L_8036C720; // 8036C718
L_8036C71C:;
  c->r[3]=0u+0x00000000u; // 8036C71C
L_8036C720:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036C720
  c->lr=c->r[0]; // 8036C724
  c->r[1]=c->r[1]+0x00000010u; // 8036C728
  return; // 8036C72C
}

// fn_8036C730
void f_8036C730(Ctx* __restrict c) {
  trace_call(0x8036C730u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C730
  c->r[0]=c->lr; // 8036C734
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C738
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036C73C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036C740
  c->r[31]=c->r[4]|c->r[4]; // 8036C744
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C748
  cmps(c,0,(int32_t)c->r[0],0); // 8036C74C
  if (crb(c,2)) { goto L_8036C75C; } // 8036C750
  c->r[0]=c->r[3]+c->r[0]; // 8036C754
  goto L_8036C760; // 8036C758
L_8036C75C:;
  c->r[0]=0u+0x00000000u; // 8036C75C
L_8036C760:;
  c->r[3]=0u+0x80430000u; // 8036C760
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036C764
  c->r[3]=c->r[3]+0x000048A0u; // 8036C768
  c->r[4]=c->r[1]+0x0000000Cu; // 8036C76C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8036C770
  c->r[3]=c->r[1]+0x00000008u; // 8036C774
  c->lr=0x8036C77Cu; f_803639BC(c); // 8036C778
  cmps(c,0,(int32_t)c->r[3],0); // 8036C77C
  if (crb(c,2)) { goto L_8036C7C4; } // 8036C780
  c->r[0]=0u-c->r[3]; // 8036C784
  c->r[0]=c->r[0]|c->r[3]; // 8036C788
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C78C
  if (crb(c,2)) { goto L_8036C7BC; } // 8036C790
  c->r[0]=c->r[31]+0x00000001u; // 8036C794
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8036C798
  c->r[4]=c->r[3]+c->r[0]; // 8036C79C
  c->r[0]=R32(c->r[4]+0x00000014u); // 8036C7A0
  cmps(c,0,(int32_t)c->r[0],0); // 8036C7A4
  if (crb(c,2)) { goto L_8036C7B4; } // 8036C7A8
  c->r[3]=c->r[3]+c->r[0]; // 8036C7AC
  goto L_8036C7C8; // 8036C7B0
L_8036C7B4:;
  c->r[3]=0u+0x00000000u; // 8036C7B4
  goto L_8036C7C8; // 8036C7B8
L_8036C7BC:;
  c->r[3]=0u+0x00000000u; // 8036C7BC
  goto L_8036C7C8; // 8036C7C0
L_8036C7C4:;
  c->r[3]=0u+0x00000000u; // 8036C7C4
L_8036C7C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036C7C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036C7CC
  c->lr=c->r[0]; // 8036C7D0
  c->r[1]=c->r[1]+0x00000020u; // 8036C7D4
  return; // 8036C7D8
}

// fn_8036C7DC
void f_8036C7DC(Ctx* __restrict c) {
  trace_call(0x8036C7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C7DC
  c->r[0]=c->lr; // 8036C7E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C7E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036C7E8
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036C7EC
  cmps(c,0,(int32_t)c->r[0],0); // 8036C7F0
  if (crb(c,2)) { goto L_8036C800; } // 8036C7F4
  c->r[0]=c->r[3]+c->r[0]; // 8036C7F8
  goto L_8036C804; // 8036C7FC
L_8036C800:;
  c->r[0]=0u+0x00000000u; // 8036C800
L_8036C804:;
  c->r[3]=0u+0x80430000u; // 8036C804
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036C808
  c->r[3]=c->r[3]+0x000048A0u; // 8036C80C
  c->r[4]=c->r[1]+0x00000008u; // 8036C810
  W32(c->r[1]+0x00000008u,c->r[3]); // 8036C814
  c->r[3]=c->r[1]+0x0000000Cu; // 8036C818
  c->lr=0x8036C820u; f_803639BC(c); // 8036C81C
  cmps(c,0,(int32_t)c->r[3],0); // 8036C820
  if (crb(c,2)) { goto L_8036C848; } // 8036C824
  c->r[0]=0u-c->r[3]; // 8036C828
  c->r[0]=c->r[0]|c->r[3]; // 8036C82C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036C830
  if (crb(c,2)) { goto L_8036C840; } // 8036C834
  c->r[3]=R32(c->r[3]+0x00000004u); // 8036C838
  goto L_8036C84C; // 8036C83C
L_8036C840:;
  c->r[3]=0u+0x00000000u; // 8036C840
  goto L_8036C84C; // 8036C844
L_8036C848:;
  c->r[3]=0u+0x00000000u; // 8036C848
L_8036C84C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036C84C
  c->lr=c->r[0]; // 8036C850
  c->r[1]=c->r[1]+0x00000010u; // 8036C854
  return; // 8036C858
}

// fn_8036C85C
void f_8036C85C(Ctx* __restrict c) {
  trace_call(0x8036C85Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C85C
  c->r[5]=R16(c->r[3]+0x00000038u); // 8036C860
  cmpu(c,0,c->r[5],c->r[4]); // 8036C864
  if (crb(c,1)) { goto L_8036C874; } // 8036C868
  c->r[3]=0u+0x00000000u; // 8036C86C
  return; // 8036C870
L_8036C874:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 8036C874
  cmps(c,0,(int32_t)c->r[0],0); // 8036C878
  if (crb(c,2)) { goto L_8036C888; } // 8036C87C
  c->r[3]=c->r[3]+c->r[0]; // 8036C880
  goto L_8036C88C; // 8036C884
L_8036C888:;
  c->r[3]=0u+0x00000000u; // 8036C888
L_8036C88C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)76); // 8036C88C
  c->r[3]=c->r[3]+c->r[0]; // 8036C890
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036C894
  cmpu(c,0,c->r[0],c->r[5]); // 8036C898
  if (crb(c,0)) return; // 8036C89C
  c->r[3]=0u+0x00000000u; // 8036C8A0
  return; // 8036C8A4
}

// fn_8036C8A8
void f_8036C8A8(Ctx* __restrict c) {
  trace_call(0x8036C8A8u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C8A8
  c->r[5]=R16(c->r[3]+0x0000003Au); // 8036C8AC
  cmpu(c,0,c->r[5],c->r[4]); // 8036C8B0
  if (crb(c,1)) { goto L_8036C8C0; } // 8036C8B4
  c->r[3]=0u+0x00000000u; // 8036C8B8
  return; // 8036C8BC
L_8036C8C0:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8036C8C0
  cmps(c,0,(int32_t)c->r[0],0); // 8036C8C4
  if (crb(c,2)) { goto L_8036C8D4; } // 8036C8C8
  c->r[3]=c->r[3]+c->r[0]; // 8036C8CC
  goto L_8036C8D8; // 8036C8D0
L_8036C8D4:;
  c->r[3]=0u+0x00000000u; // 8036C8D4
L_8036C8D8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 8036C8D8
  c->r[3]=c->r[3]+c->r[0]; // 8036C8DC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036C8E0
  cmpu(c,0,c->r[0],c->r[5]); // 8036C8E4
  if (crb(c,0)) return; // 8036C8E8
  c->r[3]=0u+0x00000000u; // 8036C8EC
  return; // 8036C8F0
}

// fn_8036C8F4
void f_8036C8F4(Ctx* __restrict c) {
  trace_call(0x8036C8F4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C8F4
  c->r[5]=R16(c->r[3]+0x0000003Cu); // 8036C8F8
  cmpu(c,0,c->r[5],c->r[4]); // 8036C8FC
  if (crb(c,1)) { goto L_8036C90C; } // 8036C900
  c->r[3]=0u+0x00000000u; // 8036C904
  return; // 8036C908
L_8036C90C:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8036C90C
  cmps(c,0,(int32_t)c->r[0],0); // 8036C910
  if (crb(c,2)) { goto L_8036C920; } // 8036C914
  c->r[3]=c->r[3]+c->r[0]; // 8036C918
  goto L_8036C924; // 8036C91C
L_8036C920:;
  c->r[3]=0u+0x00000000u; // 8036C920
L_8036C924:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)92); // 8036C924
  c->r[3]=c->r[3]+c->r[0]; // 8036C928
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036C92C
  cmpu(c,0,c->r[0],c->r[5]); // 8036C930
  if (crb(c,0)) return; // 8036C934
  c->r[3]=0u+0x00000000u; // 8036C938
  return; // 8036C93C
}

// fn_8036C940
void f_8036C940(Ctx* __restrict c) {
  trace_call(0x8036C940u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C940
  c->r[5]=R16(c->r[3]+0x0000003Eu); // 8036C944
  cmpu(c,0,c->r[5],c->r[4]); // 8036C948
  if (crb(c,1)) { goto L_8036C958; } // 8036C94C
  c->r[3]=0u+0x00000000u; // 8036C950
  return; // 8036C954
L_8036C958:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 8036C958
  cmps(c,0,(int32_t)c->r[0],0); // 8036C95C
  if (crb(c,2)) { goto L_8036C96C; } // 8036C960
  c->r[3]=c->r[3]+c->r[0]; // 8036C964
  goto L_8036C970; // 8036C968
L_8036C96C:;
  c->r[3]=0u+0x00000000u; // 8036C96C
L_8036C970:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)40); // 8036C970
  c->r[3]=c->r[3]+c->r[0]; // 8036C974
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036C978
  cmpu(c,0,c->r[0],c->r[5]); // 8036C97C
  if (crb(c,0)) return; // 8036C980
  c->r[3]=0u+0x00000000u; // 8036C984
  return; // 8036C988
}

// fn_8036C98C
void f_8036C98C(Ctx* __restrict c) {
  trace_call(0x8036C98Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036C98C
  c->r[5]=R16(c->r[3]+0x00000040u); // 8036C990
  cmpu(c,0,c->r[5],c->r[4]); // 8036C994
  if (crb(c,1)) { goto L_8036C9A4; } // 8036C998
  c->r[3]=0u+0x00000000u; // 8036C99C
  return; // 8036C9A0
L_8036C9A4:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 8036C9A4
  cmps(c,0,(int32_t)c->r[0],0); // 8036C9A8
  if (crb(c,2)) { goto L_8036C9B8; } // 8036C9AC
  c->r[3]=c->r[3]+c->r[0]; // 8036C9B0
  goto L_8036C9BC; // 8036C9B4
L_8036C9B8:;
  c->r[3]=0u+0x00000000u; // 8036C9B8
L_8036C9BC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)92); // 8036C9BC
  c->r[3]=c->r[3]+c->r[0]; // 8036C9C0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036C9C4
  cmpu(c,0,c->r[0],c->r[5]); // 8036C9C8
  if (crb(c,0)) return; // 8036C9CC
  c->r[3]=0u+0x00000000u; // 8036C9D0
  return; // 8036C9D4
}

// fn_8036C9D8
void f_8036C9D8(Ctx* __restrict c) {
  trace_call(0x8036C9D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036C9D8
  c->r[0]=c->lr; // 8036C9DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8036C9E0
  c->r[11]=c->r[1]+0x00000040u; // 8036C9E4
  c->lr=0x8036C9ECu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036C9E8
  c->r[5]=R32(c->r[3]+0x00000000u); // 8036C9EC
  c->r[28]=c->r[3]|c->r[3]; // 8036C9F0
  c->r[29]=c->r[4]|c->r[4]; // 8036C9F4
  c->r[0]=R32(c->r[5]+0x00000010u); // 8036C9F8
  cmps(c,0,(int32_t)c->r[0],0); // 8036C9FC
  if (crb(c,2)) { goto L_8036CA0C; } // 8036CA00
  c->r[0]=c->r[5]+c->r[0]; // 8036CA04
  goto L_8036CA10; // 8036CA08
L_8036CA0C:;
  c->r[0]=0u+0x00000000u; // 8036CA0C
L_8036CA10:;
  c->r[3]=0u+0x80430000u; // 8036CA10
  W32(c->r[1]+0x00000010u,c->r[0]); // 8036CA14
  c->r[3]=c->r[3]+0x00004820u; // 8036CA18
  c->r[4]=c->r[1]+0x00000014u; // 8036CA1C
  W32(c->r[1]+0x00000014u,c->r[3]); // 8036CA20
  c->r[3]=c->r[1]+0x00000010u; // 8036CA24
  c->lr=0x8036CA2Cu; f_803639BC(c); // 8036CA28
  cmps(c,0,(int32_t)c->r[3],0); // 8036CA2C
  if (crb(c,2)) { goto L_8036CA54; } // 8036CA30
  c->r[0]=0u-c->r[3]; // 8036CA34
  c->r[0]=c->r[0]|c->r[3]; // 8036CA38
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036CA3C
  if (crb(c,2)) { goto L_8036CA4C; } // 8036CA40
  c->r[26]=R32(c->r[3]+0x00000004u); // 8036CA44
  goto L_8036CA58; // 8036CA48
L_8036CA4C:;
  c->r[26]=0u+0x00000000u; // 8036CA4C
  goto L_8036CA58; // 8036CA50
L_8036CA54:;
  c->r[26]=0u+0x00000000u; // 8036CA54
L_8036CA58:;
  c->r[27]=0u+0x80430000u; // 8036CA58
  c->r[31]=0u+0x00000001u; // 8036CA5C
  c->r[27]=c->r[27]+0x00004820u; // 8036CA60
  c->r[30]=0u+0x00000000u; // 8036CA64
  goto L_8036CB20; // 8036CA68
L_8036CA6C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8036CA6C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036CA70
  cmps(c,0,(int32_t)c->r[0],0); // 8036CA74
  if (crb(c,2)) { goto L_8036CA84; } // 8036CA78
  c->r[0]=c->r[3]+c->r[0]; // 8036CA7C
  goto L_8036CA88; // 8036CA80
L_8036CA84:;
  c->r[0]=0u+0x00000000u; // 8036CA84
L_8036CA88:;
  W32(c->r[1]+0x00000008u,c->r[27]); // 8036CA88
  c->r[4]=c->r[1]+0x00000008u; // 8036CA8C
  c->r[3]=c->r[1]+0x0000000Cu; // 8036CA90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8036CA94
  c->lr=0x8036CA9Cu; f_803639BC(c); // 8036CA98
  cmps(c,0,(int32_t)c->r[3],0); // 8036CA9C
  if (crb(c,2)) { goto L_8036CAE4; } // 8036CAA0
  c->r[0]=0u-c->r[3]; // 8036CAA4
  c->r[0]=c->r[0]|c->r[3]; // 8036CAA8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8036CAAC
  if (crb(c,2)) { goto L_8036CADC; } // 8036CAB0
  c->r[0]=c->r[30]+0x00000001u; // 8036CAB4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8036CAB8
  c->r[4]=c->r[3]+c->r[0]; // 8036CABC
  c->r[0]=R32(c->r[4]+0x00000014u); // 8036CAC0
  cmps(c,0,(int32_t)c->r[0],0); // 8036CAC4
  if (crb(c,2)) { goto L_8036CAD4; } // 8036CAC8
  c->r[3]=c->r[3]+c->r[0]; // 8036CACC
  goto L_8036CAE8; // 8036CAD0
L_8036CAD4:;
  c->r[3]=0u+0x00000000u; // 8036CAD4
  goto L_8036CAE8; // 8036CAD8
L_8036CADC:;
  c->r[3]=0u+0x00000000u; // 8036CADC
  goto L_8036CAE8; // 8036CAE0
L_8036CAE4:;
  c->r[3]=0u+0x00000000u; // 8036CAE4
L_8036CAE8:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 8036CAE8
  c->r[4]=c->r[1]+0x00000018u; // 8036CAEC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8036CAF0
  c->r[3]=c->r[1]+0x0000001Cu; // 8036CAF4
  c->r[25]=0u+0x00000000u; // 8036CAF8
  W32(c->r[1]+0x00000018u,c->r[0]); // 8036CAFC
  c->lr=0x8036CB04u; f_8036B6B0(c); // 8036CB00
  cmps(c,0,(int32_t)c->r[3],0); // 8036CB04
  if (crb(c,2)) { goto L_8036CB18; } // 8036CB08
  cmps(c,0,(int32_t)c->r[31],0); // 8036CB0C
  if (crb(c,2)) { goto L_8036CB18; } // 8036CB10
  c->r[25]=0u+0x00000001u; // 8036CB14
L_8036CB18:;
  c->r[31]=c->r[25]|c->r[25]; // 8036CB18
  c->r[30]=c->r[30]+0x00000001u; // 8036CB1C
L_8036CB20:;
  cmpu(c,0,c->r[30],c->r[26]); // 8036CB20
  if (crb(c,0)) { IRQCHK(c); goto L_8036CA6C; } // 8036CB24
  c->r[11]=c->r[1]+0x00000040u; // 8036CB28
  c->r[3]=c->r[31]|c->r[31]; // 8036CB2C
  c->lr=0x8036CB34u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036CB30
  c->r[0]=R32(c->r[1]+0x00000044u); // 8036CB34
  c->lr=c->r[0]; // 8036CB38
  c->r[1]=c->r[1]+0x00000040u; // 8036CB3C
  return; // 8036CB40
}

// GetAnmResult__Q34nw4r3g3d9ResAnmShpCFPQ34nw4r3g3d12ShpAnmResultUlfPCQ34nw4r3g3d12ShpAnmVtxSet
void f_8036CB44(Ctx* __restrict c) {
  trace_call(0x8036CB44u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036CB44
  c->r[0]=c->lr; // 8036CB48
  W32(c->r[1]+0x00000044u,c->r[0]); // 8036CB4C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8036CB50
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8036CB54
  c->r[11]=c->r[1]+0x00000030u; // 8036CB58
  c->lr=0x8036CB60u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036CB5C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8036CB60
  c->f[31]=c->f[1]; // 8036CB64
  c->r[23]=c->r[4]|c->r[4]; // 8036CB68
  c->r[24]=c->r[6]|c->r[6]; // 8036CB6C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036CB70
  cmps(c,0,(int32_t)c->r[0],0); // 8036CB74
  if (crb(c,2)) { goto L_8036CB84; } // 8036CB78
  c->r[0]=c->r[3]+c->r[0]; // 8036CB7C
  goto L_8036CB88; // 8036CB80
L_8036CB84:;
  c->r[0]=0u+0x00000000u; // 8036CB84
L_8036CB88:;
  cmps(c,0,(int32_t)c->r[0],0); // 8036CB88
  if (crb(c,2)) { goto L_8036CBB8; } // 8036CB8C
  c->r[3]=c->r[5]+0x00000001u; // 8036CB90
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8036CB94
  c->r[3]=c->r[0]+c->r[3]; // 8036CB98
  c->r[3]=R32(c->r[3]+0x00000014u); // 8036CB9C
  cmps(c,0,(int32_t)c->r[3],0); // 8036CBA0
  if (crb(c,2)) { goto L_8036CBB0; } // 8036CBA4
  c->r[31]=c->r[0]+c->r[3]; // 8036CBA8
  goto L_8036CBBC; // 8036CBAC
L_8036CBB0:;
  c->r[31]=0u+0x00000000u; // 8036CBB0
  goto L_8036CBBC; // 8036CBB4
L_8036CBB8:;
  c->r[31]=0u+0x00000000u; // 8036CBB8
L_8036CBBC:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8036CBBC
  c->r[28]=c->r[31]|c->r[31]; // 8036CBC0
  c->r[26]=R32(c->r[31]+0x0000000Cu); // 8036CBC4
  c->r[30]=c->r[4]+0x00000018u; // 8036CBC8
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036CBCC
  c->r[29]=c->r[3]+c->r[31]; // 8036CBD0
  {uint32_t ea=c->r[2]+0xFFFFE9E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036CBD4
  c->r[27]=c->r[31]+0x00000014u; // 8036CBD8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8036CBDC
  c->r[25]=0u+0x00000000u; // 8036CBE0
  c->r[0]=R16(c->r[31]+0x0000000Au); // 8036CBE4
  W32(c->r[4]+0x00000004u,c->r[0]); // 8036CBE8
  c->r[0]=R16(c->r[31]+0x00000008u); // 8036CBEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8036CBF0
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 8036CBF4
  {uint32_t ea=c->r[6]+c->r[0]; c->r[5]=R32(ea); c->r[6]=ea;} // 8036CBF8
  c->r[3]=R32(c->r[6]+0x00000004u); // 8036CBFC
  c->r[0]=R32(c->r[6]+0x00000008u); // 8036CC00
  W32(c->r[4]+0x00000008u,c->r[5]); // 8036CC04
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8036CC08
  W32(c->r[4]+0x00000010u,c->r[0]); // 8036CC0C
  goto L_8036CC80; // 8036CC10
L_8036CC14:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 8036CC14
  c->r[22]=R16(c->r[29]+0x00000000u); // 8036CC18
  if (crb(c,2)) { goto L_8036CC28; } // 8036CC1C
  {uint32_t ea=c->r[28]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036CC20
  goto L_8036CC38; // 8036CC24
L_8036CC28:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 8036CC28
  c->f[1]=c->f[31]; // 8036CC2C
  c->r[3]=c->r[27]+c->r[0]; // 8036CC30
  c->lr=0x8036CC38u; f_80368CAC(c); // 8036CC34
L_8036CC38:;
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)12); // 8036CC38
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 8036CC3C
  c->r[29]=c->r[29]+0x00000002u; // 8036CC40
  c->r[28]=c->r[28]+0x00000004u; // 8036CC44
  c->r[4]=c->r[24]+c->r[0]; // 8036CC48
  c->r[0]=R32(c->r[24]+c->r[0]); // 8036CC4C
  c->r[3]=R32(c->r[4]+0x00000004u); // 8036CC50
  c->r[27]=c->r[27]+0x00000004u; // 8036CC54
  W32(c->r[30]+0x00000000u,c->r[0]); // 8036CC58
  c->r[25]=c->r[25]+0x00000001u; // 8036CC5C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8036CC60
  W32(c->r[30]+0x00000004u,c->r[3]); // 8036CC64
  W32(c->r[30]+0x00000008u,c->r[0]); // 8036CC68
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 8036CC6C
  c->r[30]=c->r[30]+0x00000010u; // 8036CC70
  {uint32_t ea=c->r[23]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036CC74
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8036CC78
  {uint32_t ea=c->r[23]+0x00000014u; WF32(ea,c->f[0]);} // 8036CC7C
L_8036CC80:;
  c->r[0]=R16(c->r[31]+0x0000000Au); // 8036CC80
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 8036CC84
  if (crb(c,0)) { IRQCHK(c); goto L_8036CC14; } // 8036CC88
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8036CC8C
  c->r[11]=c->r[1]+0x00000030u; // 8036CC90
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8036CC94
  c->lr=0x8036CC9Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036CC98
  c->r[0]=R32(c->r[1]+0x00000044u); // 8036CC9C
  c->lr=c->r[0]; // 8036CCA0
  c->r[1]=c->r[1]+0x00000040u; // 8036CCA4
  return; // 8036CCA8
}

// fn_8036CCAC
void f_8036CCAC(Ctx* __restrict c) {
  trace_call(0x8036CCACu);
  c->r[4]=0u+0x00010000u; // 8036CCAC
  c->r[7]=0u+0x00000000u; // 8036CCB0
  c->r[5]=c->r[4]+0xFFFF8000u; // 8036CCB4
  c->r[6]=0u+0x00000000u; // 8036CCB8
  goto L_8036CCD0; // 8036CCBC
L_8036CCC0:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 8036CCC0
  c->r[7]=c->r[7]+0x00000001u; // 8036CCC4
  W16(c->r[4]+c->r[6],c->r[5]); // 8036CCC8
  c->r[6]=c->r[6]+0x00000002u; // 8036CCCC
L_8036CCD0:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036CCD0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8036CCD4
  if (crb(c,0)) { IRQCHK(c); goto L_8036CCC0; } // 8036CCD8
  c->r[4]=0u+0x00000004u; // 8036CCDC
  c->r[5]=0u+0x00000000u; // 8036CCE0
  f_80373CC0(c); return; // 8036CCE4
}

// fn_8036CCE8
void f_8036CCE8(Ctx* __restrict c) {
  trace_call(0x8036CCE8u);
  c->r[3]=0u+0x00000000u; // 8036CCE8
  return; // 8036CCEC
}

// fn_8036CCF0
void f_8036CCF0(Ctx* __restrict c) {
  trace_call(0x8036CCF0u);
  c->r[3]=0u+0x00000000u; // 8036CCF0
  return; // 8036CCF4
}

// fn_8036CCF8
void f_8036CCF8(Ctx* __restrict c) {
  trace_call(0x8036CCF8u);
  c->r[5]=0u+0x00010000u; // 8036CCF8
  c->r[0]=c->r[5]+0x00000002u; // 8036CCFC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036CD00
  if (crb(c,2)) { goto L_8036CD40; } // 8036CD04
  if (!crb(c,0)) { goto L_8036CD18; } // 8036CD08
  cmps(c,0,(int32_t)c->r[4],8); // 8036CD0C
  if (crb(c,2)) { goto L_8036CD28; } // 8036CD10
  return; // 8036CD14
L_8036CD18:;
  c->r[0]=c->r[5]+0x00000004u; // 8036CD18
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036CD1C
  if (!crb(c,0)) return; // 8036CD20
  goto L_8036CD34; // 8036CD24
L_8036CD28:;
  c->r[4]=0u+0x00000002u; // 8036CD28
  c->r[5]=0u+0x00000001u; // 8036CD2C
  f_80373CC0(c); return; // 8036CD30
L_8036CD34:;
  c->r[0]=0u+0x00000000u; // 8036CD34
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036CD38
  return; // 8036CD3C
L_8036CD40:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8036CD40
  return; // 8036CD44
}

// fn_8036CD48
void f_8036CD48(Ctx* __restrict c) {
  trace_call(0x8036CD48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036CD48
  c->r[0]=c->lr; // 8036CD4C
  cmps(c,0,(int32_t)c->r[3],0); // 8036CD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036CD54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036CD58
  c->r[31]=c->r[3]|c->r[3]; // 8036CD5C
  if (crb(c,2)) { goto L_8036CD70; } // 8036CD60
  if (crb(c,2)) { goto L_8036CD70; } // 8036CD64
  c->r[4]=0u+0x00000000u; // 8036CD68
  c->lr=0x8036CD70u; f_80373AF0(c); // 8036CD6C
L_8036CD70:;
  c->r[3]=c->r[31]|c->r[31]; // 8036CD70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036CD74
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036CD78
  c->lr=c->r[0]; // 8036CD7C
  c->r[1]=c->r[1]+0x00000010u; // 8036CD80
  return; // 8036CD84
}

// Construct__Q34nw4r3g3d12AnmObjVisResFP12MEMAllocatorPiQ34nw4r3g3d9ResAnmVisQ34nw4r3g3d6ResMdl
void f_8036CD88(Ctx* __restrict c) {
  trace_call(0x8036CD88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036CD88
  c->r[0]=c->lr; // 8036CD8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036CD90
  c->r[0]=R32(c->r[5]+0x00000000u); // 8036CD94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036CD98
  c->r[31]=c->r[5]|c->r[5]; // 8036CD9C
  cmps(c,0,(int32_t)c->r[0],0); // 8036CDA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036CDA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036CDA8
  c->r[29]=c->r[4]|c->r[4]; // 8036CDAC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8036CDB0
  c->r[28]=c->r[3]|c->r[3]; // 8036CDB4
  if (crb(c,2)) { goto L_8036CDC8; } // 8036CDB8
  c->r[0]=R32(c->r[6]+0x00000000u); // 8036CDBC
  cmps(c,0,(int32_t)c->r[0],0); // 8036CDC0
  if (!crb(c,2)) { goto L_8036CDD0; } // 8036CDC4
L_8036CDC8:;
  c->r[3]=0u+0x00000000u; // 8036CDC8
  goto L_8036CEB8; // 8036CDCC
L_8036CDD0:;
  c->r[3]=c->r[6]|c->r[6]; // 8036CDD0
  c->lr=0x8036CDD8u; f_80365CD0(c); // 8036CDD4
  cmps(c,0,(int32_t)c->r[29],0); // 8036CDD8
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8036CDDC
  c->r[30]=c->r[3]|c->r[3]; // 8036CDE0
  c->r[4]=c->r[4]+0x00000030u; // 8036CDE4
  if (crb(c,2)) { goto L_8036CDF0; } // 8036CDE8
  W32(c->r[29]+0x00000000u,c->r[4]); // 8036CDEC
L_8036CDF0:;
  cmps(c,0,(int32_t)c->r[28],0); // 8036CDF0
  if (!crb(c,2)) { goto L_8036CE00; } // 8036CDF4
  c->r[3]=0u+0x00000000u; // 8036CDF8
  goto L_8036CEB8; // 8036CDFC
L_8036CE00:;
  c->r[3]=c->r[28]|c->r[28]; // 8036CE00
  c->lr=0x8036CE08u; f_802A703C(c); // 8036CE04
  cmps(c,0,(int32_t)c->r[3],0); // 8036CE08
  c->r[29]=c->r[3]|c->r[3]; // 8036CE0C
  if (!crb(c,2)) { goto L_8036CE1C; } // 8036CE10
  c->r[3]=0u+0x00000000u; // 8036CE14
  goto L_8036CEB8; // 8036CE18
L_8036CE1C:;
  c->r[4]=c->r[3]+0x00000030u; // 8036CE1C
  if (crb(c,2)) { goto L_8036CEB4; } // 8036CE20
  c->r[0]=0u+0x00000000u; // 8036CE24
  c->r[12]=0u+0x80430000u; // 8036CE28
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036CE2C
  c->r[12]=c->r[12]+0x00004904u; // 8036CE30
  c->r[31]=R32(c->r[31]+0x00000000u); // 8036CE34
  W32(c->r[3]+0x00000008u,c->r[28]); // 8036CE38
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8036CE3C
  W32(c->r[3]+0x00000000u,c->r[12]); // 8036CE40
  W32(c->r[3]+0x00000010u,c->r[30]); // 8036CE44
  W32(c->r[3]+0x00000014u,c->r[4]); // 8036CE48
  c->r[12]=R32(c->r[12]+0x00000034u); // 8036CE4C
  c->ctr=c->r[12]; // 8036CE50
  if (true) { c->lr=0x8036CE58u; dispatch(c,c->ctr); } // 8036CE54
  c->r[4]=R16(c->r[31]+0x0000001Cu); // 8036CE58
  c->r[0]=0u+0x43300000u; // 8036CE5C
  c->r[5]=R32(c->r[31]+0x00000020u); // 8036CE60
  c->r[3]=0u+0x80430000u; // 8036CE64
  c->r[4]=c->r[4]^0x80000000u; // 8036CE68
  {uint32_t ea=c->r[2]+0xFFFFE9F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036CE6C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8036CE70
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8036CE74
  {uint32_t ea=c->r[2]+0xFFFFE9F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036CE78
  c->r[4]=c->r[13]+0xFFFF92D8u; // 8036CE7C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036CE80
  c->r[3]=c->r[3]+0x000048C0u; // 8036CE84
  {uint32_t ea=c->r[2]+0xFFFFE9F8u; c->f[3]=RF64(ea);} // 8036CE88
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8036CE8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8036CE90
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 8036CE94
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 8036CE98
  c->r[0]=R32(c->r[4]+c->r[5]); // 8036CE9C
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[1]);} // 8036CEA0
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 8036CEA4
  W32(c->r[29]+0x00000028u,c->r[0]); // 8036CEA8
  W32(c->r[29]+0x00000000u,c->r[3]); // 8036CEAC
  W32(c->r[29]+0x0000002Cu,c->r[31]); // 8036CEB0
L_8036CEB4:;
  c->r[3]=c->r[29]|c->r[29]; // 8036CEB4
L_8036CEB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036CEB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036CEBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036CEC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036CEC4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8036CEC8
  c->lr=c->r[0]; // 8036CECC
  c->r[1]=c->r[1]+0x00000020u; // 8036CED0
  return; // 8036CED4
}

// SetFrame__Q34nw4r3g3d12AnmObjVisResFf
void f_8036CED8(Ctx* __restrict c) {
  trace_call(0x8036CED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036CED8
  c->r[0]=c->lr; // 8036CEDC
  c->f[3]=c->f[1]; // 8036CEE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036CEE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036CEE8
  c->r[31]=c->r[3]|c->r[3]; // 8036CEEC
  c->r[12]=R32(c->r[3]+0x00000028u); // 8036CEF0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036CEF4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036CEF8
  c->ctr=c->r[12]; // 8036CEFC
  if (true) { c->lr=0x8036CF04u; dispatch(c,c->ctr); } // 8036CF00
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8036CF04
  c->r[3]=c->r[31]|c->r[31]; // 8036CF08
  c->r[4]=0u+0x00000008u; // 8036CF0C
  c->r[5]=0u+0x00000000u; // 8036CF10
  c->r[12]=R32(c->r[31]+0x00000000u); // 8036CF14
  c->r[6]=0u+0x00000000u; // 8036CF18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8036CF1C
  c->ctr=c->r[12]; // 8036CF20
  if (true) { c->lr=0x8036CF28u; dispatch(c,c->ctr); } // 8036CF24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036CF28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036CF2C
  c->lr=c->r[0]; // 8036CF30
  c->r[1]=c->r[1]+0x00000010u; // 8036CF34
  return; // 8036CF38
}

// fn_8036CF3C
void f_8036CF3C(Ctx* __restrict c) {
  trace_call(0x8036CF3Cu);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036CF3C
  return; // 8036CF40
}

// fn_8036CF44
void f_8036CF44(Ctx* __restrict c) {
  trace_call(0x8036CF44u);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8036CF44
  return; // 8036CF48
}

// fn_8036CF4C
void f_8036CF4C(Ctx* __restrict c) {
  trace_call(0x8036CF4Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036CF4C
  return; // 8036CF50
}

// fn_8036CF54
void f_8036CF54(Ctx* __restrict c) {
  trace_call(0x8036CF54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036CF54
  c->r[0]=c->lr; // 8036CF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036CF5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036CF60
  c->r[31]=c->r[3]|c->r[3]; // 8036CF64
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8036CF68
  {uint32_t ea=c->r[13]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036CF6C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036CF70
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8036CF74
  c->r[12]=R32(c->r[3]+0x00000028u); // 8036CF78
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036CF7C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036CF80
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 8036CF84
  c->ctr=c->r[12]; // 8036CF88
  if (true) { c->lr=0x8036CF90u; dispatch(c,c->ctr); } // 8036CF8C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8036CF90
  c->r[3]=c->r[31]|c->r[31]; // 8036CF94
  c->r[4]=0u+0x00000008u; // 8036CF98
  c->r[5]=0u+0x00000000u; // 8036CF9C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8036CFA0
  c->r[6]=0u+0x00000000u; // 8036CFA4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8036CFA8
  c->ctr=c->r[12]; // 8036CFAC
  if (true) { c->lr=0x8036CFB4u; dispatch(c,c->ctr); } // 8036CFB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036CFB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036CFB8
  c->lr=c->r[0]; // 8036CFBC
  c->r[1]=c->r[1]+0x00000010u; // 8036CFC0
  return; // 8036CFC4
}

// fn_8036CFC8
void f_8036CFC8(Ctx* __restrict c) {
  trace_call(0x8036CFC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036CFC8
  c->r[0]=c->lr; // 8036CFCC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036CFD0
  c->r[11]=c->r[1]+0x00000030u; // 8036CFD4
  c->lr=0x8036CFDCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036CFD8
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 8036CFDC
  c->r[27]=c->r[3]|c->r[3]; // 8036CFE0
  c->r[28]=c->r[4]|c->r[4]; // 8036CFE4
  c->r[30]=0u+0x00000000u; // 8036CFE8
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 8036CFEC
  c->r[29]=0u+0x00000000u; // 8036CFF0
  cmps(c,0,(int32_t)c->r[31],0); // 8036CFF4
  if (!crb(c,1)) { goto L_8036D0A0; } // 8036CFF8
  goto L_8036D094; // 8036CFFC
L_8036D000:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 8036D000
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036D004
  cmps(c,0,(int32_t)c->r[0],0); // 8036D008
  if (crb(c,2)) { goto L_8036D018; } // 8036D00C
  c->r[0]=c->r[3]+c->r[0]; // 8036D010
  goto L_8036D01C; // 8036D014
L_8036D018:;
  c->r[0]=0u+0x00000000u; // 8036D018
L_8036D01C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8036D01C
  if (crb(c,2)) { goto L_8036D048; } // 8036D020
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 8036D024
  c->r[3]=c->r[0]+c->r[3]; // 8036D028
  c->r[3]=R32(c->r[3]+0x00000024u); // 8036D02C
  cmps(c,0,(int32_t)c->r[3],0); // 8036D030
  if (crb(c,2)) { goto L_8036D040; } // 8036D034
  c->r[5]=c->r[0]+c->r[3]; // 8036D038
  goto L_8036D04C; // 8036D03C
L_8036D040:;
  c->r[5]=0u+0x00000000u; // 8036D040
  goto L_8036D04C; // 8036D044
L_8036D048:;
  c->r[5]=0u+0x00000000u; // 8036D048
L_8036D04C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8036D04C
  c->r[3]=c->r[28]|c->r[28]; // 8036D050
  c->r[4]=c->r[1]+0x00000008u; // 8036D054
  c->r[5]=c->r[0]+c->r[5]; // 8036D058
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 8036D05C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036D060
  c->lr=0x8036D068u; f_80365BD8(c); // 8036D064
  cmps(c,0,(int32_t)c->r[3],0); // 8036D068
  if (crb(c,2)) { goto L_8036D090; } // 8036D06C
  c->r[4]=R32(c->r[27]+0x00000014u); // 8036D070
  if (crb(c,2)) { goto L_8036D080; } // 8036D074
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036D078
  goto L_8036D084; // 8036D07C
L_8036D080:;
  c->r[0]=0u+0x00000000u; // 8036D080
L_8036D084:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8036D084
  c->r[30]=0u+0x00000001u; // 8036D088
  W16(c->r[4]+c->r[0],c->r[29]); // 8036D08C
L_8036D090:;
  c->r[29]=c->r[29]+0x00000001u; // 8036D090
L_8036D094:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 8036D094
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 8036D098
  if (crb(c,0)) { IRQCHK(c); goto L_8036D000; } // 8036D09C
L_8036D0A0:;
  c->r[3]=c->r[27]|c->r[27]; // 8036D0A0
  c->r[4]=0u+0x00000004u; // 8036D0A4
  c->r[5]=0u+0x00000001u; // 8036D0A8
  c->lr=0x8036D0B0u; f_80373CC0(c); // 8036D0AC
  c->r[11]=c->r[1]+0x00000030u; // 8036D0B0
  c->r[3]=c->r[30]|c->r[30]; // 8036D0B4
  c->lr=0x8036D0BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036D0B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036D0BC
  c->lr=c->r[0]; // 8036D0C0
  c->r[1]=c->r[1]+0x00000030u; // 8036D0C4
  return; // 8036D0C8
}

// GetResult__Q34nw4r3g3d12AnmObjVisResFUl
void f_8036D0CC(Ctx* __restrict c) {
  trace_call(0x8036D0CCu);
  c->r[5]=R32(c->r[3]+0x00000014u); // 8036D0CC
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8036D0D0
  c->r[4]=R16(c->r[5]+c->r[0]); // 8036D0D4
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 8036D0D8
  if (!crb(c,2)) { goto L_8036D0E8; } // 8036D0DC
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 8036D0E0
  if (crb(c,2)) { goto L_8036D0F0; } // 8036D0E4
L_8036D0E8:;
  c->r[3]=0u+0x00000001u; // 8036D0E8
  return; // 8036D0EC
L_8036D0F0:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036D0F0
  c->r[3]=c->r[3]+0x0000002Cu; // 8036D0F4
  f_80368ED8(c); return; // 8036D0F8
  return; // 8036D0FC
}

// ApplyVisAnmResult__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
void f_8036D100(Ctx* __restrict c) {
  trace_call(0x8036D100u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D100
  c->r[0]=c->lr; // 8036D104
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036D108
  c->r[11]=c->r[1]+0x00000020u; // 8036D10C
  c->lr=0x8036D114u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036D110
  c->r[26]=c->r[3]|c->r[3]; // 8036D114
  c->r[27]=c->r[4]|c->r[4]; // 8036D118
  c->lr=0x8036D120u; f_80365CD0(c); // 8036D11C
  c->r[30]=c->r[3]|c->r[3]; // 8036D120
  c->r[28]=0u+0x00000000u; // 8036D124
  c->r[29]=0u+0x00000000u; // 8036D128
  goto L_8036D19C; // 8036D12C
L_8036D130:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 8036D130
  c->r[0]=R16(c->r[3]+c->r[29]); // 8036D134
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 8036D138
  if (!crb(c,2)) { goto L_8036D194; } // 8036D13C
  c->r[3]=c->r[26]|c->r[26]; // 8036D140
  c->r[4]=c->r[28]|c->r[28]; // 8036D144
  c->lr=0x8036D14Cu; f_80365C7C(c); // 8036D148
  c->r[12]=R32(c->r[27]+0x00000000u); // 8036D14C
  c->r[31]=c->r[3]|c->r[3]; // 8036D150
  c->r[3]=c->r[27]|c->r[27]; // 8036D154
  c->r[4]=c->r[28]|c->r[28]; // 8036D158
  c->r[12]=R32(c->r[12]+0x00000038u); // 8036D15C
  c->ctr=c->r[12]; // 8036D160
  if (true) { c->lr=0x8036D168u; dispatch(c,c->ctr); } // 8036D164
  cmps(c,0,(int32_t)c->r[31],0); // 8036D168
  if (crb(c,2)) { goto L_8036D194; } // 8036D16C
  cmps(c,0,(int32_t)c->r[3],0); // 8036D170
  if (crb(c,2)) { goto L_8036D188; } // 8036D174
  c->r[0]=R32(c->r[31]+0x00000014u); // 8036D178
  c->r[0]=c->r[0]|0x00000100u; // 8036D17C
  W32(c->r[31]+0x00000014u,c->r[0]); // 8036D180
  goto L_8036D194; // 8036D184
L_8036D188:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8036D188
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 8036D18C
  W32(c->r[31]+0x00000014u,c->r[0]); // 8036D190
L_8036D194:;
  c->r[29]=c->r[29]+0x00000002u; // 8036D194
  c->r[28]=c->r[28]+0x00000001u; // 8036D198
L_8036D19C:;
  cmpu(c,0,c->r[28],c->r[30]); // 8036D19C
  if (crb(c,0)) { IRQCHK(c); goto L_8036D130; } // 8036D1A0
  c->r[11]=c->r[1]+0x00000020u; // 8036D1A4
  c->lr=0x8036D1ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036D1A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036D1AC
  c->lr=c->r[0]; // 8036D1B0
  c->r[1]=c->r[1]+0x00000020u; // 8036D1B4
  return; // 8036D1B8
}

// ApplyVisAnmResult__Q24nw4r3g3dFPUcQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
void f_8036D1BC(Ctx* __restrict c) {
  trace_call(0x8036D1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D1BC
  c->r[0]=c->lr; // 8036D1C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036D1C4
  c->r[11]=c->r[1]+0x00000020u; // 8036D1C8
  c->lr=0x8036D1D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036D1CC
  c->r[27]=c->r[3]|c->r[3]; // 8036D1D0
  c->r[3]=c->r[4]|c->r[4]; // 8036D1D4
  c->r[28]=c->r[5]|c->r[5]; // 8036D1D8
  c->lr=0x8036D1E0u; f_80365CD0(c); // 8036D1DC
  c->r[31]=c->r[3]|c->r[3]; // 8036D1E0
  c->r[29]=0u+0x00000000u; // 8036D1E4
  c->r[30]=0u+0x00000000u; // 8036D1E8
  goto L_8036D228; // 8036D1EC
L_8036D1F0:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 8036D1F0
  c->r[0]=R16(c->r[3]+c->r[30]); // 8036D1F4
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 8036D1F8
  if (!crb(c,2)) { goto L_8036D21C; } // 8036D1FC
  c->r[12]=R32(c->r[28]+0x00000000u); // 8036D200
  c->r[3]=c->r[28]|c->r[28]; // 8036D204
  c->r[4]=c->r[29]|c->r[29]; // 8036D208
  c->r[12]=R32(c->r[12]+0x00000038u); // 8036D20C
  c->ctr=c->r[12]; // 8036D210
  if (true) { c->lr=0x8036D218u; dispatch(c,c->ctr); } // 8036D214
  W8(c->r[27]+0x00000000u,c->r[3]); // 8036D218
L_8036D21C:;
  c->r[30]=c->r[30]+0x00000002u; // 8036D21C
  c->r[29]=c->r[29]+0x00000001u; // 8036D220
  c->r[27]=c->r[27]+0x00000001u; // 8036D224
L_8036D228:;
  cmpu(c,0,c->r[29],c->r[31]); // 8036D228
  if (crb(c,0)) { IRQCHK(c); goto L_8036D1F0; } // 8036D22C
  c->r[11]=c->r[1]+0x00000020u; // 8036D230
  c->lr=0x8036D238u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036D234
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036D238
  c->lr=c->r[0]; // 8036D23C
  c->r[1]=c->r[1]+0x00000020u; // 8036D240
  return; // 8036D244
}

// fn_8036D248
void f_8036D248(Ctx* __restrict c) {
  trace_call(0x8036D248u);
  c->r[3]=0u+0x803F0000u; // 8036D248
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036D24C
  c->r[3]=c->r[3]+0xFFFFDF38u; // 8036D250
  cmpu(c,0,c->r[0],c->r[3]); // 8036D254
  if (!crb(c,2)) { goto L_8036D264; } // 8036D258
  c->r[3]=0u+0x00000001u; // 8036D25C
  return; // 8036D260
L_8036D264:;
  c->r[3]=0u+0x803F0000u; // 8036D264
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036D268
  c->r[3]=c->r[3]+0xFFFFDF28u; // 8036D26C
  cmpu(c,0,c->r[0],c->r[3]); // 8036D270
  if (!crb(c,2)) { goto L_8036D280; } // 8036D274
  c->r[3]=0u+0x00000001u; // 8036D278
  return; // 8036D27C
L_8036D280:;
  c->r[3]=0u+0x803F0000u; // 8036D280
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8036D284
  cmpu(c,0,c->r[0],c->r[3]); // 8036D288
  if (!crb(c,2)) { goto L_8036D298; } // 8036D28C
  c->r[3]=0u+0x00000001u; // 8036D290
  return; // 8036D294
L_8036D298:;
  c->r[3]=0u+0x803F0000u; // 8036D298
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 8036D29C
  c->r[0]=c->r[3]-c->r[0]; // 8036D2A0
  c->r[0]=cntlz(c->r[0]); // 8036D2A4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036D2A8
  return; // 8036D2AC
}

// fn_8036D2B0
void f_8036D2B0(Ctx* __restrict c) {
  trace_call(0x8036D2B0u);
  c->r[3]=0u+0x803F0000u; // 8036D2B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036D2B4
  c->r[3]=c->r[3]+0xFFFFDF28u; // 8036D2B8
  cmpu(c,0,c->r[0],c->r[3]); // 8036D2BC
  if (!crb(c,2)) { goto L_8036D2CC; } // 8036D2C0
  c->r[3]=0u+0x00000001u; // 8036D2C4
  return; // 8036D2C8
L_8036D2CC:;
  c->r[3]=0u+0x803F0000u; // 8036D2CC
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036D2D0
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8036D2D4
  cmpu(c,0,c->r[0],c->r[3]); // 8036D2D8
  if (!crb(c,2)) { goto L_8036D2E8; } // 8036D2DC
  c->r[3]=0u+0x00000001u; // 8036D2E0
  return; // 8036D2E4
L_8036D2E8:;
  c->r[3]=0u+0x803F0000u; // 8036D2E8
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 8036D2EC
  c->r[0]=c->r[3]-c->r[0]; // 8036D2F0
  c->r[0]=cntlz(c->r[0]); // 8036D2F4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036D2F8
  return; // 8036D2FC
}

// fn_8036D300
void f_8036D300(Ctx* __restrict c) {
  trace_call(0x8036D300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D300
  c->r[0]=c->lr; // 8036D304
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036D308
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036D30C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8036D310
  c->ctr=c->r[12]; // 8036D314
  if (true) { c->lr=0x8036D31Cu; dispatch(c,c->ctr); } // 8036D318
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036D31C
  c->r[3]=c->r[3]+0x00000004u; // 8036D320
  c->lr=c->r[0]; // 8036D324
  c->r[1]=c->r[1]+0x00000010u; // 8036D328
  return; // 8036D32C
}

// fn_8036D330
void f_8036D330(Ctx* __restrict c) {
  trace_call(0x8036D330u);
  c->r[3]=0u+0x803F0000u; // 8036D330
  c->r[3]=c->r[3]+0xFFFFDF38u; // 8036D334
  return; // 8036D338
}

// fn_8036D33C
void f_8036D33C(Ctx* __restrict c) {
  trace_call(0x8036D33Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D33C
  c->r[0]=c->lr; // 8036D340
  cmps(c,0,(int32_t)c->r[3],0); // 8036D344
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036D348
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036D34C
  c->r[31]=c->r[3]|c->r[3]; // 8036D350
  if (crb(c,2)) { goto L_8036D368; } // 8036D354
  if (crb(c,2)) { goto L_8036D368; } // 8036D358
  if (crb(c,2)) { goto L_8036D368; } // 8036D35C
  c->r[4]=0u+0x00000000u; // 8036D360
  c->lr=0x8036D368u; f_80373AF0(c); // 8036D364
L_8036D368:;
  c->r[3]=c->r[31]|c->r[31]; // 8036D368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036D36C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036D370
  c->lr=c->r[0]; // 8036D374
  c->r[1]=c->r[1]+0x00000010u; // 8036D378
  return; // 8036D37C
}

// fn_8036D380
void f_8036D380(Ctx* __restrict c) {
  trace_call(0x8036D380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D380
  c->r[0]=c->lr; // 8036D384
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036D388
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036D38C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8036D390
  c->ctr=c->r[12]; // 8036D394
  if (true) { c->lr=0x8036D39Cu; dispatch(c,c->ctr); } // 8036D398
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036D39C
  c->r[3]=c->r[3]+0x00000004u; // 8036D3A0
  c->lr=c->r[0]; // 8036D3A4
  c->r[1]=c->r[1]+0x00000010u; // 8036D3A8
  return; // 8036D3AC
}

// fn_8036D3B0
void f_8036D3B0(Ctx* __restrict c) {
  trace_call(0x8036D3B0u);
  c->r[3]=0u+0x803F0000u; // 8036D3B0
  c->r[3]=c->r[3]+0xFFFFDF28u; // 8036D3B4
  return; // 8036D3B8
}

// TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl
void f_8036D3BC(Ctx* __restrict c) {
  trace_call(0x8036D3BCu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8036D3BC
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8036D3C0
  c->r[0]=R16(c->r[3]+c->r[0]); // 8036D3C4
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 8036D3C8
  c->r[0]=cntlz(c->r[0]); // 8036D3CC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036D3D0
  return; // 8036D3D4
}

// fn_8036D3D8
void f_8036D3D8(Ctx* __restrict c) {
  trace_call(0x8036D3D8u);
  c->r[4]=0u+0x00010000u; // 8036D3D8
  c->r[7]=0u+0x00000000u; // 8036D3DC
  c->r[5]=c->r[4]+0xFFFF8000u; // 8036D3E0
  c->r[6]=0u+0x00000000u; // 8036D3E4
  goto L_8036D3FC; // 8036D3E8
L_8036D3EC:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 8036D3EC
  c->r[7]=c->r[7]+0x00000001u; // 8036D3F0
  W16(c->r[4]+c->r[6],c->r[5]); // 8036D3F4
  c->r[6]=c->r[6]+0x00000002u; // 8036D3F8
L_8036D3FC:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036D3FC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8036D400
  if (crb(c,0)) { IRQCHK(c); goto L_8036D3EC; } // 8036D404
  c->r[4]=0u+0x00000004u; // 8036D408
  c->r[5]=0u+0x00000000u; // 8036D40C
  f_80373CC0(c); return; // 8036D410
}

// fn_8036D414
void f_8036D414(Ctx* __restrict c) {
  trace_call(0x8036D414u);
  c->r[3]=0u+0x00000000u; // 8036D414
  return; // 8036D418
}

// fn_8036D41C
void f_8036D41C(Ctx* __restrict c) {
  trace_call(0x8036D41Cu);
  c->r[3]=0u+0x00000000u; // 8036D41C
  return; // 8036D420
}

// fn_8036D424
void f_8036D424(Ctx* __restrict c) {
  trace_call(0x8036D424u);
  return; // 8036D424
}

// fn_8036D428
void f_8036D428(Ctx* __restrict c) {
  trace_call(0x8036D428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D428
  c->r[0]=c->lr; // 8036D42C
  cmps(c,0,(int32_t)c->r[3],0); // 8036D430
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036D434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036D438
  c->r[31]=c->r[3]|c->r[3]; // 8036D43C
  if (crb(c,2)) { goto L_8036D450; } // 8036D440
  if (crb(c,2)) { goto L_8036D450; } // 8036D444
  c->r[4]=0u+0x00000000u; // 8036D448
  c->lr=0x8036D450u; f_80373AF0(c); // 8036D44C
L_8036D450:;
  c->r[3]=c->r[31]|c->r[31]; // 8036D450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036D454
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036D458
  c->lr=c->r[0]; // 8036D45C
  c->r[1]=c->r[1]+0x00000010u; // 8036D460
  return; // 8036D464
}

// fn_8036D468
void f_8036D468(Ctx* __restrict c) {
  trace_call(0x8036D468u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D468
  c->r[0]=c->lr; // 8036D46C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8036D470
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8036D474
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8036D478
  c->r[11]=c->r[1]+0x00000030u; // 8036D47C
  c->lr=0x8036D484u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036D480
  c->r[8]=R32(c->r[5]+0x00000000u); // 8036D484
  c->r[29]=c->r[3]|c->r[3]; // 8036D488
  c->r[25]=c->r[4]|c->r[4]; // 8036D48C
  c->r[30]=c->r[5]|c->r[5]; // 8036D490
  cmps(c,0,(int32_t)c->r[8],0); // 8036D494
  c->r[27]=c->r[7]|c->r[7]; // 8036D498
  if (crb(c,2)) { goto L_8036D4AC; } // 8036D49C
  c->r[0]=R32(c->r[6]+0x00000000u); // 8036D4A0
  cmps(c,0,(int32_t)c->r[0],0); // 8036D4A4
  if (!crb(c,2)) { goto L_8036D4B4; } // 8036D4A8
L_8036D4AC:;
  c->r[3]=0u+0x00000000u; // 8036D4AC
  goto L_8036D638; // 8036D4B0
L_8036D4B4:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 8036D4B4
  c->r[3]=c->r[6]|c->r[6]; // 8036D4B8
  c->lr=0x8036D4C0u; f_8036624C(c); // 8036D4BC
  c->r[0]=0u-c->r[27]; // 8036D4C0
  c->r[28]=c->r[3]|c->r[3]; // 8036D4C4
  c->r[4]=c->r[0]|c->r[27]; // 8036D4C8
  cmps(c,0,(int32_t)c->r[25],0); // 8036D4CC
  c->r[4]=sraw(c,c->r[4],31); // 8036D4D0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8036D4D4
  c->r[3]=c->r[31]&c->r[4]; // 8036D4D8
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)92); // 8036D4DC
  c->r[3]=c->r[26]+c->r[0]; // 8036D4E0
  c->r[4]=c->r[3]+0x00000034u; // 8036D4E4
  if (crb(c,2)) { goto L_8036D4F0; } // 8036D4E8
  W32(c->r[25]+0x00000000u,c->r[4]); // 8036D4EC
L_8036D4F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 8036D4F0
  if (!crb(c,2)) { goto L_8036D500; } // 8036D4F4
  c->r[3]=0u+0x00000000u; // 8036D4F8
  goto L_8036D638; // 8036D4FC
L_8036D500:;
  c->r[3]=c->r[29]|c->r[29]; // 8036D500
  c->lr=0x8036D508u; f_802A703C(c); // 8036D504
  cmps(c,0,(int32_t)c->r[3],0); // 8036D508
  c->r[31]=c->r[3]|c->r[3]; // 8036D50C
  if (!crb(c,2)) { goto L_8036D51C; } // 8036D510
  c->r[3]=0u+0x00000000u; // 8036D514
  goto L_8036D638; // 8036D518
L_8036D51C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8036D51C
  if (crb(c,2)) { goto L_8036D52C; } // 8036D520
  c->r[27]=c->r[3]+0x00000034u; // 8036D524
  goto L_8036D530; // 8036D528
L_8036D52C:;
  c->r[27]=0u+0x00000000u; // 8036D52C
L_8036D530:;
  cmps(c,0,(int32_t)c->r[3],0); // 8036D530
  c->r[4]=c->r[3]+c->r[26]; // 8036D534
  c->r[5]=c->r[4]+0x00000034u; // 8036D538
  if (crb(c,2)) { goto L_8036D634; } // 8036D53C
  c->r[0]=0u+0x00000000u; // 8036D540
  c->r[4]=0u+0x80430000u; // 8036D544
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036D548
  c->r[4]=c->r[4]+0x00004990u; // 8036D54C
  c->r[30]=R32(c->r[30]+0x00000000u); // 8036D550
  W32(c->r[3]+0x00000008u,c->r[29]); // 8036D554
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8036D558
  W32(c->r[3]+0x00000000u,c->r[4]); // 8036D55C
  W32(c->r[3]+0x00000010u,c->r[28]); // 8036D560
  W32(c->r[3]+0x00000014u,c->r[5]); // 8036D564
  c->r[3]=c->r[31]|c->r[31]; // 8036D568
  c->r[12]=R32(c->r[31]+0x00000000u); // 8036D56C
  c->r[12]=R32(c->r[12]+0x00000034u); // 8036D570
  c->ctr=c->r[12]; // 8036D574
  if (true) { c->lr=0x8036D57Cu; dispatch(c,c->ctr); } // 8036D578
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 8036D57C
  c->r[0]=0u+0x43300000u; // 8036D580
  c->r[5]=R32(c->r[30]+0x00000020u); // 8036D584
  c->r[3]=0u+0x80430000u; // 8036D588
  c->r[4]=c->r[4]^0x80000000u; // 8036D58C
  {uint32_t ea=c->r[2]+0xFFFFEA00u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036D590
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8036D594
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8036D598
  {uint32_t ea=c->r[2]+0xFFFFEA04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036D59C
  c->r[4]=c->r[13]+0xFFFF92D8u; // 8036D5A0
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036D5A4
  c->r[3]=c->r[3]+0x00004948u; // 8036D5A8
  {uint32_t ea=c->r[2]+0xFFFFEA08u; c->f[3]=RF64(ea);} // 8036D5AC
  cmps(c,0,(int32_t)c->r[27],0); // 8036D5B0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8036D5B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8036D5B8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8036D5BC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 8036D5C0
  c->r[0]=R32(c->r[4]+c->r[5]); // 8036D5C4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 8036D5C8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8036D5CC
  W32(c->r[31]+0x00000028u,c->r[0]); // 8036D5D0
  W32(c->r[31]+0x00000000u,c->r[3]); // 8036D5D4
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 8036D5D8
  W32(c->r[31]+0x00000030u,c->r[27]); // 8036D5DC
  if (crb(c,2)) { goto L_8036D634; } // 8036D5E0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8036D5E4
  c->r[28]=0u+0x00000000u; // 8036D5E8
  c->r[27]=0u+0x00000000u; // 8036D5EC
  goto L_8036D628; // 8036D5F0
L_8036D5F4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8036D5F4
  c->r[3]=R16(c->r[3]+c->r[27]); // 8036D5F8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036D5FC
  if (!crb(c,2)) { goto L_8036D620; } // 8036D600
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036D604
  c->f[1]=c->f[31]; // 8036D608
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 8036D60C
  c->r[4]=R32(c->r[31]+0x00000030u); // 8036D610
  c->r[3]=c->r[31]+0x0000002Cu; // 8036D614
  c->r[4]=c->r[4]+c->r[0]; // 8036D618
  c->lr=0x8036D620u; f_80368FF8(c); // 8036D61C
L_8036D620:;
  c->r[27]=c->r[27]+0x00000002u; // 8036D620
  c->r[28]=c->r[28]+0x00000001u; // 8036D624
L_8036D628:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8036D628
  cmpu(c,0,c->r[28],c->r[0]); // 8036D62C
  if (crb(c,0)) { IRQCHK(c); goto L_8036D5F4; } // 8036D630
L_8036D634:;
  c->r[3]=c->r[31]|c->r[31]; // 8036D634
L_8036D638:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8036D638
  c->r[11]=c->r[1]+0x00000030u; // 8036D63C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8036D640
  c->lr=0x8036D648u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036D644
  c->r[0]=R32(c->r[1]+0x00000044u); // 8036D648
  c->lr=c->r[0]; // 8036D64C
  c->r[1]=c->r[1]+0x00000040u; // 8036D650
  return; // 8036D654
}

// fn_8036D658
void f_8036D658(Ctx* __restrict c) {
  trace_call(0x8036D658u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D658
  c->r[0]=c->lr; // 8036D65C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036D660
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8036D664
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8036D668
  c->f[3]=c->f[1]; // 8036D66C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036D670
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036D674
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036D678
  c->r[29]=c->r[3]|c->r[3]; // 8036D67C
  c->r[12]=R32(c->r[3]+0x00000028u); // 8036D680
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036D684
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036D688
  c->ctr=c->r[12]; // 8036D68C
  if (true) { c->lr=0x8036D694u; dispatch(c,c->ctr); } // 8036D690
  c->r[0]=R32(c->r[29]+0x00000030u); // 8036D694
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8036D698
  cmps(c,0,(int32_t)c->r[0],0); // 8036D69C
  if (crb(c,2)) { goto L_8036D6F4; } // 8036D6A0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8036D6A4
  c->r[31]=0u+0x00000000u; // 8036D6A8
  c->r[30]=0u+0x00000000u; // 8036D6AC
  goto L_8036D6E8; // 8036D6B0
L_8036D6B4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8036D6B4
  c->r[3]=R16(c->r[3]+c->r[30]); // 8036D6B8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036D6BC
  if (!crb(c,2)) { goto L_8036D6E0; } // 8036D6C0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036D6C4
  c->f[1]=c->f[31]; // 8036D6C8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 8036D6CC
  c->r[4]=R32(c->r[29]+0x00000030u); // 8036D6D0
  c->r[3]=c->r[29]+0x0000002Cu; // 8036D6D4
  c->r[4]=c->r[4]+c->r[0]; // 8036D6D8
  c->lr=0x8036D6E0u; f_80368FF8(c); // 8036D6DC
L_8036D6E0:;
  c->r[30]=c->r[30]+0x00000002u; // 8036D6E0
  c->r[31]=c->r[31]+0x00000001u; // 8036D6E4
L_8036D6E8:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8036D6E8
  cmpu(c,0,c->r[31],c->r[0]); // 8036D6EC
  if (crb(c,0)) { IRQCHK(c); goto L_8036D6B4; } // 8036D6F0
L_8036D6F4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8036D6F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036D6F8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8036D6FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036D700
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036D704
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036D708
  c->lr=c->r[0]; // 8036D70C
  c->r[1]=c->r[1]+0x00000030u; // 8036D710
  return; // 8036D714
}

// fn_8036D718
void f_8036D718(Ctx* __restrict c) {
  trace_call(0x8036D718u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036D718
  return; // 8036D71C
}

// fn_8036D720
void f_8036D720(Ctx* __restrict c) {
  trace_call(0x8036D720u);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8036D720
  return; // 8036D724
}

// fn_8036D728
void f_8036D728(Ctx* __restrict c) {
  trace_call(0x8036D728u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036D728
  return; // 8036D72C
}

// fn_8036D730
void f_8036D730(Ctx* __restrict c) {
  trace_call(0x8036D730u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D730
  c->r[0]=c->lr; // 8036D734
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036D738
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8036D73C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8036D740
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036D744
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036D748
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036D74C
  c->r[29]=c->r[3]|c->r[3]; // 8036D750
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8036D754
  {uint32_t ea=c->r[13]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036D758
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036D75C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8036D760
  c->r[12]=R32(c->r[3]+0x00000028u); // 8036D764
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036D768
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036D76C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 8036D770
  c->ctr=c->r[12]; // 8036D774
  if (true) { c->lr=0x8036D77Cu; dispatch(c,c->ctr); } // 8036D778
  c->r[0]=R32(c->r[29]+0x00000030u); // 8036D77C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8036D780
  cmps(c,0,(int32_t)c->r[0],0); // 8036D784
  if (crb(c,2)) { goto L_8036D7DC; } // 8036D788
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8036D78C
  c->r[31]=0u+0x00000000u; // 8036D790
  c->r[30]=0u+0x00000000u; // 8036D794
  goto L_8036D7D0; // 8036D798
L_8036D79C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8036D79C
  c->r[3]=R16(c->r[3]+c->r[30]); // 8036D7A0
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036D7A4
  if (!crb(c,2)) { goto L_8036D7C8; } // 8036D7A8
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036D7AC
  c->f[1]=c->f[31]; // 8036D7B0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 8036D7B4
  c->r[4]=R32(c->r[29]+0x00000030u); // 8036D7B8
  c->r[3]=c->r[29]+0x0000002Cu; // 8036D7BC
  c->r[4]=c->r[4]+c->r[0]; // 8036D7C0
  c->lr=0x8036D7C8u; f_80368FF8(c); // 8036D7C4
L_8036D7C8:;
  c->r[30]=c->r[30]+0x00000002u; // 8036D7C8
  c->r[31]=c->r[31]+0x00000001u; // 8036D7CC
L_8036D7D0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8036D7D0
  cmpu(c,0,c->r[31],c->r[0]); // 8036D7D4
  if (crb(c,0)) { IRQCHK(c); goto L_8036D79C; } // 8036D7D8
L_8036D7DC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8036D7DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036D7E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8036D7E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036D7E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036D7EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036D7F0
  c->lr=c->r[0]; // 8036D7F4
  c->r[1]=c->r[1]+0x00000030u; // 8036D7F8
  return; // 8036D7FC
}

// fn_8036D800
void f_8036D800(Ctx* __restrict c) {
  trace_call(0x8036D800u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D800
  c->r[0]=c->lr; // 8036D804
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036D808
  c->r[11]=c->r[1]+0x00000030u; // 8036D80C
  c->lr=0x8036D814u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036D810
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 8036D814
  c->r[27]=c->r[3]|c->r[3]; // 8036D818
  c->r[28]=c->r[4]|c->r[4]; // 8036D81C
  c->r[30]=0u+0x00000000u; // 8036D820
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 8036D824
  c->r[29]=0u+0x00000000u; // 8036D828
  cmps(c,0,(int32_t)c->r[31],0); // 8036D82C
  if (!crb(c,1)) { goto L_8036D8CC; } // 8036D830
  goto L_8036D8C0; // 8036D834
L_8036D838:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 8036D838
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036D83C
  cmps(c,0,(int32_t)c->r[0],0); // 8036D840
  if (crb(c,2)) { goto L_8036D850; } // 8036D844
  c->r[0]=c->r[3]+c->r[0]; // 8036D848
  goto L_8036D854; // 8036D84C
L_8036D850:;
  c->r[0]=0u+0x00000000u; // 8036D850
L_8036D854:;
  cmps(c,0,(int32_t)c->r[0],0); // 8036D854
  if (crb(c,2)) { goto L_8036D880; } // 8036D858
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 8036D85C
  c->r[3]=c->r[0]+c->r[3]; // 8036D860
  c->r[3]=R32(c->r[3]+0x00000024u); // 8036D864
  cmps(c,0,(int32_t)c->r[3],0); // 8036D868
  if (crb(c,2)) { goto L_8036D878; } // 8036D86C
  c->r[5]=c->r[0]+c->r[3]; // 8036D870
  goto L_8036D884; // 8036D874
L_8036D878:;
  c->r[5]=0u+0x00000000u; // 8036D878
  goto L_8036D884; // 8036D87C
L_8036D880:;
  c->r[5]=0u+0x00000000u; // 8036D880
L_8036D884:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8036D884
  c->r[3]=c->r[28]|c->r[28]; // 8036D888
  c->r[4]=c->r[1]+0x00000008u; // 8036D88C
  c->r[5]=c->r[0]+c->r[5]; // 8036D890
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 8036D894
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036D898
  c->lr=0x8036D8A0u; f_80366154(c); // 8036D89C
  cmps(c,0,(int32_t)c->r[3],0); // 8036D8A0
  if (crb(c,2)) { goto L_8036D8BC; } // 8036D8A4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036D8A8
  c->r[30]=0u+0x00000001u; // 8036D8AC
  c->r[3]=R32(c->r[27]+0x00000014u); // 8036D8B0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8036D8B4
  W16(c->r[3]+c->r[0],c->r[29]); // 8036D8B8
L_8036D8BC:;
  c->r[29]=c->r[29]+0x00000001u; // 8036D8BC
L_8036D8C0:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 8036D8C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 8036D8C4
  if (crb(c,0)) { IRQCHK(c); goto L_8036D838; } // 8036D8C8
L_8036D8CC:;
  c->r[3]=c->r[27]|c->r[27]; // 8036D8CC
  c->r[4]=0u+0x00000004u; // 8036D8D0
  c->r[5]=0u+0x00000001u; // 8036D8D4
  c->lr=0x8036D8DCu; f_80373CC0(c); // 8036D8D8
  c->r[11]=c->r[1]+0x00000030u; // 8036D8DC
  c->r[3]=c->r[30]|c->r[30]; // 8036D8E0
  c->lr=0x8036D8E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036D8E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036D8E8
  c->lr=c->r[0]; // 8036D8EC
  c->r[1]=c->r[1]+0x00000030u; // 8036D8F0
  return; // 8036D8F4
}

// fn_8036D8F8
void f_8036D8F8(Ctx* __restrict c) {
  trace_call(0x8036D8F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D8F8
  c->r[0]=c->lr; // 8036D8FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036D900
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8036D904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036D908
  c->r[31]=c->r[4]|c->r[4]; // 8036D90C
  c->r[6]=R32(c->r[3]+0x00000014u); // 8036D910
  c->r[5]=R16(c->r[6]+c->r[0]); // 8036D914
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 8036D918
  if (crb(c,2)) { goto L_8036D930; } // 8036D91C
  c->r[0]=0u+0x00000000u; // 8036D920
  c->r[3]=c->r[31]|c->r[31]; // 8036D924
  W32(c->r[4]+0x00000000u,c->r[0]); // 8036D928
  goto L_8036D958; // 8036D92C
L_8036D930:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 8036D930
  cmps(c,0,(int32_t)c->r[6],0); // 8036D934
  if (crb(c,2)) { goto L_8036D948; } // 8036D938
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 8036D93C
  c->r[3]=c->r[6]+c->r[0]; // 8036D940
  goto L_8036D958; // 8036D944
L_8036D948:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036D948
  c->r[3]=c->r[3]+0x0000002Cu; // 8036D94C
  c->lr=0x8036D954u; f_80368FF8(c); // 8036D950
  c->r[3]=c->r[31]|c->r[31]; // 8036D954
L_8036D958:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036D958
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036D95C
  c->lr=c->r[0]; // 8036D960
  c->r[1]=c->r[1]+0x00000010u; // 8036D964
  return; // 8036D968
}

// fn_8036D96C
void f_8036D96C(Ctx* __restrict c) {
  trace_call(0x8036D96Cu);
  c->r[5]=0u+0x00010000u; // 8036D96C
  c->r[0]=c->r[5]+0x00000002u; // 8036D970
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036D974
  if (crb(c,2)) { goto L_8036D9B8; } // 8036D978
  if (!crb(c,0)) { goto L_8036D98C; } // 8036D97C
  cmps(c,0,(int32_t)c->r[4],8); // 8036D980
  if (crb(c,2)) { goto L_8036D99C; } // 8036D984
  return; // 8036D988
L_8036D98C:;
  c->r[0]=c->r[5]+0x00000004u; // 8036D98C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036D990
  if (!crb(c,0)) return; // 8036D994
  goto L_8036D9AC; // 8036D998
L_8036D99C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036D99C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8036D9A0
  c->ctr=c->r[12]; // 8036D9A4
  if (true) { dispatch(c,c->ctr); return; } // 8036D9A8
L_8036D9AC:;
  c->r[0]=0u+0x00000000u; // 8036D9AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036D9B0
  return; // 8036D9B4
L_8036D9B8:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8036D9B8
  return; // 8036D9BC
}

// ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult
void f_8036D9C0(Ctx* __restrict c) {
  trace_call(0x8036D9C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036D9C0
  c->r[0]=c->lr; // 8036D9C4
  c->r[6]=R32(c->r[5]+0x00000000u); // 8036D9C8
  W32(c->r[1]+0x00000094u,c->r[0]); // 8036D9CC
  c->r[0]=0u+0xFFFFFFFFu; // 8036D9D0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8036D9D4
  c->r[31]=c->r[5]|c->r[5]; // 8036D9D8
  W32(c->r[1]+0x00000088u,c->r[30]); // 8036D9DC
  c->r[30]=c->r[4]|c->r[4]; // 8036D9E0
  W32(c->r[1]+0x00000084u,c->r[29]); // 8036D9E4
  c->r[29]=c->r[3]|c->r[3]; // 8036D9E8
  W32(c->r[1]+0x00000080u,c->r[28]); // 8036D9EC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036D9F0
  c->r[0]=rotl(c->r[6],0)&0x0000000Fu; cr0(c,c->r[0]); // 8036D9F4
  if (crb(c,2)) { goto L_8036DB58; } // 8036D9F8
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 8036D9FC
  if (crb(c,2)) { goto L_8036DA50; } // 8036DA00
  c->r[28]=R32(c->r[3]+0x00000000u); // 8036DA04
  c->r[3]=c->r[1]+0x00000078u; // 8036DA08
  c->r[5]=R32(c->r[5]+0x00000030u); // 8036DA0C
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DA10
  c->r[0]=R32(c->r[28]+0x00000004u); // 8036DA14
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DA18
  c->lr=0x8036DA20u; f_8036DEF0(c); // 8036DA1C
  c->r[5]=R32(c->r[31]+0x00000004u); // 8036DA20
  c->r[3]=c->r[1]+0x00000074u; // 8036DA24
  c->r[4]=c->r[1]+0x00000078u; // 8036DA28
  c->lr=0x8036DA30u; f_8036DF00(c); // 8036DA2C
  c->r[0]=R8(c->r[1]+0x00000074u); // 8036DA30
  W8(c->r[28]+0x00000004u,c->r[0]); // 8036DA34
  c->r[0]=R8(c->r[1]+0x00000075u); // 8036DA38
  W8(c->r[28]+0x00000005u,c->r[0]); // 8036DA3C
  c->r[0]=R8(c->r[1]+0x00000076u); // 8036DA40
  W8(c->r[28]+0x00000006u,c->r[0]); // 8036DA44
  c->r[0]=R8(c->r[1]+0x00000077u); // 8036DA48
  W8(c->r[28]+0x00000007u,c->r[0]); // 8036DA4C
L_8036DA50:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DA50
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8036DA54
  if (crb(c,2)) { goto L_8036DAA8; } // 8036DA58
  c->r[28]=R32(c->r[29]+0x00000000u); // 8036DA5C
  c->r[3]=c->r[1]+0x00000070u; // 8036DA60
  c->r[5]=R32(c->r[31]+0x00000038u); // 8036DA64
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DA68
  c->r[0]=R32(c->r[28]+0x00000008u); // 8036DA6C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DA70
  c->lr=0x8036DA78u; f_8036DEF0(c); // 8036DA74
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 8036DA78
  c->r[3]=c->r[1]+0x0000006Cu; // 8036DA7C
  c->r[4]=c->r[1]+0x00000070u; // 8036DA80
  c->lr=0x8036DA88u; f_8036DF00(c); // 8036DA84
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 8036DA88
  W8(c->r[28]+0x00000008u,c->r[0]); // 8036DA8C
  c->r[0]=R8(c->r[1]+0x0000006Du); // 8036DA90
  W8(c->r[28]+0x00000009u,c->r[0]); // 8036DA94
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 8036DA98
  W8(c->r[28]+0x0000000Au,c->r[0]); // 8036DA9C
  c->r[0]=R8(c->r[1]+0x0000006Fu); // 8036DAA0
  W8(c->r[28]+0x0000000Bu,c->r[0]); // 8036DAA4
L_8036DAA8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DAA8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8036DAAC
  if (crb(c,2)) { goto L_8036DB00; } // 8036DAB0
  c->r[28]=R32(c->r[29]+0x00000000u); // 8036DAB4
  c->r[3]=c->r[1]+0x00000068u; // 8036DAB8
  c->r[5]=R32(c->r[31]+0x00000034u); // 8036DABC
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DAC0
  c->r[0]=R32(c->r[28]+0x00000018u); // 8036DAC4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DAC8
  c->lr=0x8036DAD0u; f_8036DEF0(c); // 8036DACC
  c->r[5]=R32(c->r[31]+0x00000008u); // 8036DAD0
  c->r[3]=c->r[1]+0x00000064u; // 8036DAD4
  c->r[4]=c->r[1]+0x00000068u; // 8036DAD8
  c->lr=0x8036DAE0u; f_8036DF00(c); // 8036DADC
  c->r[0]=R8(c->r[1]+0x00000064u); // 8036DAE0
  W8(c->r[28]+0x00000018u,c->r[0]); // 8036DAE4
  c->r[0]=R8(c->r[1]+0x00000065u); // 8036DAE8
  W8(c->r[28]+0x00000019u,c->r[0]); // 8036DAEC
  c->r[0]=R8(c->r[1]+0x00000066u); // 8036DAF0
  W8(c->r[28]+0x0000001Au,c->r[0]); // 8036DAF4
  c->r[0]=R8(c->r[1]+0x00000067u); // 8036DAF8
  W8(c->r[28]+0x0000001Bu,c->r[0]); // 8036DAFC
L_8036DB00:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DB00
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8036DB04
  if (crb(c,2)) { goto L_8036DB58; } // 8036DB08
  c->r[29]=R32(c->r[29]+0x00000000u); // 8036DB0C
  c->r[3]=c->r[1]+0x00000060u; // 8036DB10
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 8036DB14
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DB18
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 8036DB1C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DB20
  c->lr=0x8036DB28u; f_8036DEF0(c); // 8036DB24
  c->r[5]=R32(c->r[31]+0x00000010u); // 8036DB28
  c->r[3]=c->r[1]+0x0000005Cu; // 8036DB2C
  c->r[4]=c->r[1]+0x00000060u; // 8036DB30
  c->lr=0x8036DB38u; f_8036DF00(c); // 8036DB34
  c->r[0]=R8(c->r[1]+0x0000005Cu); // 8036DB38
  W8(c->r[29]+0x0000001Cu,c->r[0]); // 8036DB3C
  c->r[0]=R8(c->r[1]+0x0000005Du); // 8036DB40
  W8(c->r[29]+0x0000001Du,c->r[0]); // 8036DB44
  c->r[0]=R8(c->r[1]+0x0000005Eu); // 8036DB48
  W8(c->r[29]+0x0000001Eu,c->r[0]); // 8036DB4C
  c->r[0]=R8(c->r[1]+0x0000005Fu); // 8036DB50
  W8(c->r[29]+0x0000001Fu,c->r[0]); // 8036DB54
L_8036DB58:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8036DB58
  c->r[0]=rotl(c->r[3],0)&0x000007F0u; cr0(c,c->r[0]); // 8036DB5C
  if (crb(c,2)) { goto L_8036DED0; } // 8036DB60
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8036DB64
  if (crb(c,2)) { goto L_8036DBDC; } // 8036DB68
  c->r[3]=c->r[30]|c->r[30]; // 8036DB6C
  c->r[5]=c->r[1]+0x0000007Cu; // 8036DB70
  c->r[4]=0u+0x00000001u; // 8036DB74
  c->lr=0x8036DB7Cu; f_80367838(c); // 8036DB78
  cmps(c,0,(int32_t)c->r[3],0); // 8036DB7C
  if (!crb(c,2)) { goto L_8036DB8C; } // 8036DB80
  c->r[0]=0u+0x000000FFu; // 8036DB84
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DB88
L_8036DB8C:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 8036DB8C
  c->r[3]=c->r[1]+0x00000054u; // 8036DB90
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DB94
  c->lr=0x8036DB9Cu; f_8036DEF0(c); // 8036DB98
  c->r[5]=R32(c->r[31]+0x00000014u); // 8036DB9C
  c->r[3]=c->r[1]+0x00000050u; // 8036DBA0
  c->r[4]=c->r[1]+0x00000054u; // 8036DBA4
  c->lr=0x8036DBACu; f_8036DF00(c); // 8036DBA8
  c->r[8]=R8(c->r[1]+0x00000050u); // 8036DBAC
  c->r[5]=c->r[1]+0x00000058u; // 8036DBB0
  c->r[7]=R8(c->r[1]+0x00000051u); // 8036DBB4
  c->r[3]=c->r[30]|c->r[30]; // 8036DBB8
  c->r[6]=R8(c->r[1]+0x00000052u); // 8036DBBC
  c->r[4]=0u+0x00000001u; // 8036DBC0
  c->r[0]=R8(c->r[1]+0x00000053u); // 8036DBC4
  W8(c->r[1]+0x00000058u,c->r[8]); // 8036DBC8
  W8(c->r[1]+0x00000059u,c->r[7]); // 8036DBCC
  W8(c->r[1]+0x0000005Au,c->r[6]); // 8036DBD0
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 8036DBD4
  c->lr=0x8036DBDCu; f_803678F4(c); // 8036DBD8
L_8036DBDC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DBDC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8036DBE0
  if (crb(c,2)) { goto L_8036DC58; } // 8036DBE4
  c->r[3]=c->r[30]|c->r[30]; // 8036DBE8
  c->r[5]=c->r[1]+0x0000007Cu; // 8036DBEC
  c->r[4]=0u+0x00000002u; // 8036DBF0
  c->lr=0x8036DBF8u; f_80367838(c); // 8036DBF4
  cmps(c,0,(int32_t)c->r[3],0); // 8036DBF8
  if (!crb(c,2)) { goto L_8036DC08; } // 8036DBFC
  c->r[0]=0u+0x000000FFu; // 8036DC00
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DC04
L_8036DC08:;
  c->r[5]=R32(c->r[31]+0x00000044u); // 8036DC08
  c->r[3]=c->r[1]+0x00000048u; // 8036DC0C
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DC10
  c->lr=0x8036DC18u; f_8036DEF0(c); // 8036DC14
  c->r[5]=R32(c->r[31]+0x00000018u); // 8036DC18
  c->r[3]=c->r[1]+0x00000044u; // 8036DC1C
  c->r[4]=c->r[1]+0x00000048u; // 8036DC20
  c->lr=0x8036DC28u; f_8036DF00(c); // 8036DC24
  c->r[8]=R8(c->r[1]+0x00000044u); // 8036DC28
  c->r[5]=c->r[1]+0x0000004Cu; // 8036DC2C
  c->r[7]=R8(c->r[1]+0x00000045u); // 8036DC30
  c->r[3]=c->r[30]|c->r[30]; // 8036DC34
  c->r[6]=R8(c->r[1]+0x00000046u); // 8036DC38
  c->r[4]=0u+0x00000002u; // 8036DC3C
  c->r[0]=R8(c->r[1]+0x00000047u); // 8036DC40
  W8(c->r[1]+0x0000004Cu,c->r[8]); // 8036DC44
  W8(c->r[1]+0x0000004Du,c->r[7]); // 8036DC48
  W8(c->r[1]+0x0000004Eu,c->r[6]); // 8036DC4C
  W8(c->r[1]+0x0000004Fu,c->r[0]); // 8036DC50
  c->lr=0x8036DC58u; f_803678F4(c); // 8036DC54
L_8036DC58:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DC58
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8036DC5C
  if (crb(c,2)) { goto L_8036DCD4; } // 8036DC60
  c->r[3]=c->r[30]|c->r[30]; // 8036DC64
  c->r[5]=c->r[1]+0x0000007Cu; // 8036DC68
  c->r[4]=0u+0x00000003u; // 8036DC6C
  c->lr=0x8036DC74u; f_80367838(c); // 8036DC70
  cmps(c,0,(int32_t)c->r[3],0); // 8036DC74
  if (!crb(c,2)) { goto L_8036DC84; } // 8036DC78
  c->r[0]=0u+0x000000FFu; // 8036DC7C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DC80
L_8036DC84:;
  c->r[5]=R32(c->r[31]+0x00000048u); // 8036DC84
  c->r[3]=c->r[1]+0x0000003Cu; // 8036DC88
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DC8C
  c->lr=0x8036DC94u; f_8036DEF0(c); // 8036DC90
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 8036DC94
  c->r[3]=c->r[1]+0x00000038u; // 8036DC98
  c->r[4]=c->r[1]+0x0000003Cu; // 8036DC9C
  c->lr=0x8036DCA4u; f_8036DF00(c); // 8036DCA0
  c->r[8]=R8(c->r[1]+0x00000038u); // 8036DCA4
  c->r[5]=c->r[1]+0x00000040u; // 8036DCA8
  c->r[7]=R8(c->r[1]+0x00000039u); // 8036DCAC
  c->r[3]=c->r[30]|c->r[30]; // 8036DCB0
  c->r[6]=R8(c->r[1]+0x0000003Au); // 8036DCB4
  c->r[4]=0u+0x00000003u; // 8036DCB8
  c->r[0]=R8(c->r[1]+0x0000003Bu); // 8036DCBC
  W8(c->r[1]+0x00000040u,c->r[8]); // 8036DCC0
  W8(c->r[1]+0x00000041u,c->r[7]); // 8036DCC4
  W8(c->r[1]+0x00000042u,c->r[6]); // 8036DCC8
  W8(c->r[1]+0x00000043u,c->r[0]); // 8036DCCC
  c->lr=0x8036DCD4u; f_803678F4(c); // 8036DCD0
L_8036DCD4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DCD4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8036DCD8
  if (crb(c,2)) { goto L_8036DD50; } // 8036DCDC
  c->r[3]=c->r[30]|c->r[30]; // 8036DCE0
  c->r[5]=c->r[1]+0x0000007Cu; // 8036DCE4
  c->r[4]=0u+0x00000000u; // 8036DCE8
  c->lr=0x8036DCF0u; f_80367988(c); // 8036DCEC
  cmps(c,0,(int32_t)c->r[3],0); // 8036DCF0
  if (!crb(c,2)) { goto L_8036DD00; } // 8036DCF4
  c->r[0]=0u+0x000000FFu; // 8036DCF8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DCFC
L_8036DD00:;
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 8036DD00
  c->r[3]=c->r[1]+0x00000030u; // 8036DD04
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DD08
  c->lr=0x8036DD10u; f_8036DEF0(c); // 8036DD0C
  c->r[5]=R32(c->r[31]+0x00000020u); // 8036DD10
  c->r[3]=c->r[1]+0x0000002Cu; // 8036DD14
  c->r[4]=c->r[1]+0x00000030u; // 8036DD18
  c->lr=0x8036DD20u; f_8036DF00(c); // 8036DD1C
  c->r[8]=R8(c->r[1]+0x0000002Cu); // 8036DD20
  c->r[5]=c->r[1]+0x00000034u; // 8036DD24
  c->r[7]=R8(c->r[1]+0x0000002Du); // 8036DD28
  c->r[3]=c->r[30]|c->r[30]; // 8036DD2C
  c->r[6]=R8(c->r[1]+0x0000002Eu); // 8036DD30
  c->r[4]=0u+0x00000000u; // 8036DD34
  c->r[0]=R8(c->r[1]+0x0000002Fu); // 8036DD38
  W8(c->r[1]+0x00000034u,c->r[8]); // 8036DD3C
  W8(c->r[1]+0x00000035u,c->r[7]); // 8036DD40
  W8(c->r[1]+0x00000036u,c->r[6]); // 8036DD44
  W8(c->r[1]+0x00000037u,c->r[0]); // 8036DD48
  c->lr=0x8036DD50u; f_80367A40(c); // 8036DD4C
L_8036DD50:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DD50
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 8036DD54
  if (crb(c,2)) { goto L_8036DDCC; } // 8036DD58
  c->r[3]=c->r[30]|c->r[30]; // 8036DD5C
  c->r[5]=c->r[1]+0x0000007Cu; // 8036DD60
  c->r[4]=0u+0x00000001u; // 8036DD64
  c->lr=0x8036DD6Cu; f_80367988(c); // 8036DD68
  cmps(c,0,(int32_t)c->r[3],0); // 8036DD6C
  if (!crb(c,2)) { goto L_8036DD7C; } // 8036DD70
  c->r[0]=0u+0x000000FFu; // 8036DD74
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DD78
L_8036DD7C:;
  c->r[5]=R32(c->r[31]+0x00000050u); // 8036DD7C
  c->r[3]=c->r[1]+0x00000024u; // 8036DD80
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DD84
  c->lr=0x8036DD8Cu; f_8036DEF0(c); // 8036DD88
  c->r[5]=R32(c->r[31]+0x00000024u); // 8036DD8C
  c->r[3]=c->r[1]+0x00000020u; // 8036DD90
  c->r[4]=c->r[1]+0x00000024u; // 8036DD94
  c->lr=0x8036DD9Cu; f_8036DF00(c); // 8036DD98
  c->r[8]=R8(c->r[1]+0x00000020u); // 8036DD9C
  c->r[5]=c->r[1]+0x00000028u; // 8036DDA0
  c->r[7]=R8(c->r[1]+0x00000021u); // 8036DDA4
  c->r[3]=c->r[30]|c->r[30]; // 8036DDA8
  c->r[6]=R8(c->r[1]+0x00000022u); // 8036DDAC
  c->r[4]=0u+0x00000001u; // 8036DDB0
  c->r[0]=R8(c->r[1]+0x00000023u); // 8036DDB4
  W8(c->r[1]+0x00000028u,c->r[8]); // 8036DDB8
  W8(c->r[1]+0x00000029u,c->r[7]); // 8036DDBC
  W8(c->r[1]+0x0000002Au,c->r[6]); // 8036DDC0
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 8036DDC4
  c->lr=0x8036DDCCu; f_80367A40(c); // 8036DDC8
L_8036DDCC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DDCC
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 8036DDD0
  if (crb(c,2)) { goto L_8036DE48; } // 8036DDD4
  c->r[3]=c->r[30]|c->r[30]; // 8036DDD8
  c->r[5]=c->r[1]+0x0000007Cu; // 8036DDDC
  c->r[4]=0u+0x00000002u; // 8036DDE0
  c->lr=0x8036DDE8u; f_80367988(c); // 8036DDE4
  cmps(c,0,(int32_t)c->r[3],0); // 8036DDE8
  if (!crb(c,2)) { goto L_8036DDF8; } // 8036DDEC
  c->r[0]=0u+0x000000FFu; // 8036DDF0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DDF4
L_8036DDF8:;
  c->r[5]=R32(c->r[31]+0x00000054u); // 8036DDF8
  c->r[3]=c->r[1]+0x00000018u; // 8036DDFC
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DE00
  c->lr=0x8036DE08u; f_8036DEF0(c); // 8036DE04
  c->r[5]=R32(c->r[31]+0x00000028u); // 8036DE08
  c->r[3]=c->r[1]+0x00000014u; // 8036DE0C
  c->r[4]=c->r[1]+0x00000018u; // 8036DE10
  c->lr=0x8036DE18u; f_8036DF00(c); // 8036DE14
  c->r[8]=R8(c->r[1]+0x00000014u); // 8036DE18
  c->r[5]=c->r[1]+0x0000001Cu; // 8036DE1C
  c->r[7]=R8(c->r[1]+0x00000015u); // 8036DE20
  c->r[3]=c->r[30]|c->r[30]; // 8036DE24
  c->r[6]=R8(c->r[1]+0x00000016u); // 8036DE28
  c->r[4]=0u+0x00000002u; // 8036DE2C
  c->r[0]=R8(c->r[1]+0x00000017u); // 8036DE30
  W8(c->r[1]+0x0000001Cu,c->r[8]); // 8036DE34
  W8(c->r[1]+0x0000001Du,c->r[7]); // 8036DE38
  W8(c->r[1]+0x0000001Eu,c->r[6]); // 8036DE3C
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 8036DE40
  c->lr=0x8036DE48u; f_80367A40(c); // 8036DE44
L_8036DE48:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8036DE48
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 8036DE4C
  if (crb(c,2)) { goto L_8036DEC4; } // 8036DE50
  c->r[3]=c->r[30]|c->r[30]; // 8036DE54
  c->r[5]=c->r[1]+0x0000007Cu; // 8036DE58
  c->r[4]=0u+0x00000003u; // 8036DE5C
  c->lr=0x8036DE64u; f_80367988(c); // 8036DE60
  cmps(c,0,(int32_t)c->r[3],0); // 8036DE64
  if (!crb(c,2)) { goto L_8036DE74; } // 8036DE68
  c->r[0]=0u+0x000000FFu; // 8036DE6C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8036DE70
L_8036DE74:;
  c->r[5]=R32(c->r[31]+0x00000058u); // 8036DE74
  c->r[3]=c->r[1]+0x0000000Cu; // 8036DE78
  c->r[4]=c->r[1]+0x0000007Cu; // 8036DE7C
  c->lr=0x8036DE84u; f_8036DEF0(c); // 8036DE80
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 8036DE84
  c->r[3]=c->r[1]+0x00000008u; // 8036DE88
  c->r[4]=c->r[1]+0x0000000Cu; // 8036DE8C
  c->lr=0x8036DE94u; f_8036DF00(c); // 8036DE90
  c->r[8]=R8(c->r[1]+0x00000008u); // 8036DE94
  c->r[5]=c->r[1]+0x00000010u; // 8036DE98
  c->r[7]=R8(c->r[1]+0x00000009u); // 8036DE9C
  c->r[3]=c->r[30]|c->r[30]; // 8036DEA0
  c->r[6]=R8(c->r[1]+0x0000000Au); // 8036DEA4
  c->r[4]=0u+0x00000003u; // 8036DEA8
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 8036DEAC
  W8(c->r[1]+0x00000010u,c->r[8]); // 8036DEB0
  W8(c->r[1]+0x00000011u,c->r[7]); // 8036DEB4
  W8(c->r[1]+0x00000012u,c->r[6]); // 8036DEB8
  W8(c->r[1]+0x00000013u,c->r[0]); // 8036DEBC
  c->lr=0x8036DEC4u; f_80367A40(c); // 8036DEC0
L_8036DEC4:;
  c->r[3]=c->r[30]|c->r[30]; // 8036DEC4
  c->r[4]=0u+0x00000000u; // 8036DEC8
  c->lr=0x8036DED0u; f_80366F88(c); // 8036DECC
L_8036DED0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8036DED0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8036DED4
  c->r[30]=R32(c->r[1]+0x00000088u); // 8036DED8
  c->r[29]=R32(c->r[1]+0x00000084u); // 8036DEDC
  c->r[28]=R32(c->r[1]+0x00000080u); // 8036DEE0
  c->lr=c->r[0]; // 8036DEE4
  c->r[1]=c->r[1]+0x00000090u; // 8036DEE8
  return; // 8036DEEC
}

// __ad__Q34nw4r2ut5ColorCFUl
void f_8036DEF0(Ctx* __restrict c) {
  trace_call(0x8036DEF0u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036DEF0
  c->r[0]=c->r[5]&c->r[0]; // 8036DEF4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036DEF8
  return; // 8036DEFC
}

// __or__Q34nw4r2ut5ColorCFUl
void f_8036DF00(Ctx* __restrict c) {
  trace_call(0x8036DF00u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036DF00
  c->r[0]=c->r[5]|c->r[0]; // 8036DF04
  W32(c->r[3]+0x00000000u,c->r[0]); // 8036DF08
  return; // 8036DF0C
}

// fn_8036DF10
void f_8036DF10(Ctx* __restrict c) {
  trace_call(0x8036DF10u);
  c->r[3]=0u+0x803F0000u; // 8036DF10
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036DF14
  c->r[3]=c->r[3]+0xFFFFDF68u; // 8036DF18
  cmpu(c,0,c->r[0],c->r[3]); // 8036DF1C
  if (!crb(c,2)) { goto L_8036DF2C; } // 8036DF20
  c->r[3]=0u+0x00000001u; // 8036DF24
  return; // 8036DF28
L_8036DF2C:;
  c->r[3]=0u+0x803F0000u; // 8036DF2C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036DF30
  c->r[3]=c->r[3]+0xFFFFDF50u; // 8036DF34
  cmpu(c,0,c->r[0],c->r[3]); // 8036DF38
  if (!crb(c,2)) { goto L_8036DF48; } // 8036DF3C
  c->r[3]=0u+0x00000001u; // 8036DF40
  return; // 8036DF44
L_8036DF48:;
  c->r[3]=0u+0x803F0000u; // 8036DF48
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8036DF4C
  cmpu(c,0,c->r[0],c->r[3]); // 8036DF50
  if (!crb(c,2)) { goto L_8036DF60; } // 8036DF54
  c->r[3]=0u+0x00000001u; // 8036DF58
  return; // 8036DF5C
L_8036DF60:;
  c->r[3]=0u+0x803F0000u; // 8036DF60
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 8036DF64
  c->r[0]=c->r[3]-c->r[0]; // 8036DF68
  c->r[0]=cntlz(c->r[0]); // 8036DF6C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036DF70
  return; // 8036DF74
}

// fn_8036DF78
void f_8036DF78(Ctx* __restrict c) {
  trace_call(0x8036DF78u);
  c->r[3]=0u+0x803F0000u; // 8036DF78
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036DF7C
  c->r[3]=c->r[3]+0xFFFFDF50u; // 8036DF80
  cmpu(c,0,c->r[0],c->r[3]); // 8036DF84
  if (!crb(c,2)) { goto L_8036DF94; } // 8036DF88
  c->r[3]=0u+0x00000001u; // 8036DF8C
  return; // 8036DF90
L_8036DF94:;
  c->r[3]=0u+0x803F0000u; // 8036DF94
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036DF98
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8036DF9C
  cmpu(c,0,c->r[0],c->r[3]); // 8036DFA0
  if (!crb(c,2)) { goto L_8036DFB0; } // 8036DFA4
  c->r[3]=0u+0x00000001u; // 8036DFA8
  return; // 8036DFAC
L_8036DFB0:;
  c->r[3]=0u+0x803F0000u; // 8036DFB0
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 8036DFB4
  c->r[0]=c->r[3]-c->r[0]; // 8036DFB8
  c->r[0]=cntlz(c->r[0]); // 8036DFBC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036DFC0
  return; // 8036DFC4
}

// fn_8036DFC8
void f_8036DFC8(Ctx* __restrict c) {
  trace_call(0x8036DFC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036DFC8
  c->r[0]=c->lr; // 8036DFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036DFD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036DFD4
  c->r[12]=R32(c->r[12]+0x00000014u); // 8036DFD8
  c->ctr=c->r[12]; // 8036DFDC
  if (true) { c->lr=0x8036DFE4u; dispatch(c,c->ctr); } // 8036DFE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036DFE4
  c->r[3]=c->r[3]+0x00000004u; // 8036DFE8
  c->lr=c->r[0]; // 8036DFEC
  c->r[1]=c->r[1]+0x00000010u; // 8036DFF0
  return; // 8036DFF4
}

// fn_8036DFF8
void f_8036DFF8(Ctx* __restrict c) {
  trace_call(0x8036DFF8u);
  c->r[3]=0u+0x803F0000u; // 8036DFF8
  c->r[3]=c->r[3]+0xFFFFDF68u; // 8036DFFC
  return; // 8036E000
}

// fn_8036E004
void f_8036E004(Ctx* __restrict c) {
  trace_call(0x8036E004u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E004
  c->r[0]=c->lr; // 8036E008
  cmps(c,0,(int32_t)c->r[3],0); // 8036E00C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036E010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036E014
  c->r[31]=c->r[3]|c->r[3]; // 8036E018
  if (crb(c,2)) { goto L_8036E030; } // 8036E01C
  if (crb(c,2)) { goto L_8036E030; } // 8036E020
  if (crb(c,2)) { goto L_8036E030; } // 8036E024
  c->r[4]=0u+0x00000000u; // 8036E028
  c->lr=0x8036E030u; f_80373AF0(c); // 8036E02C
L_8036E030:;
  c->r[3]=c->r[31]|c->r[31]; // 8036E030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036E034
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036E038
  c->lr=c->r[0]; // 8036E03C
  c->r[1]=c->r[1]+0x00000010u; // 8036E040
  return; // 8036E044
}

// fn_8036E048
void f_8036E048(Ctx* __restrict c) {
  trace_call(0x8036E048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E048
  c->r[0]=c->lr; // 8036E04C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036E050
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036E054
  c->r[12]=R32(c->r[12]+0x00000014u); // 8036E058
  c->ctr=c->r[12]; // 8036E05C
  if (true) { c->lr=0x8036E064u; dispatch(c,c->ctr); } // 8036E060
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036E064
  c->r[3]=c->r[3]+0x00000004u; // 8036E068
  c->lr=c->r[0]; // 8036E06C
  c->r[1]=c->r[1]+0x00000010u; // 8036E070
  return; // 8036E074
}

// fn_8036E078
void f_8036E078(Ctx* __restrict c) {
  trace_call(0x8036E078u);
  c->r[3]=0u+0x803F0000u; // 8036E078
  c->r[3]=c->r[3]+0xFFFFDF50u; // 8036E07C
  return; // 8036E080
}

// fn_8036E084
void f_8036E084(Ctx* __restrict c) {
  trace_call(0x8036E084u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8036E084
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8036E088
  c->r[0]=R16(c->r[3]+c->r[0]); // 8036E08C
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 8036E090
  c->r[0]=cntlz(c->r[0]); // 8036E094
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036E098
  return; // 8036E09C
}

// fn_8036E0A0
void f_8036E0A0(Ctx* __restrict c) {
  trace_call(0x8036E0A0u);
  c->r[4]=0u+0x00010000u; // 8036E0A0
  c->r[7]=0u+0x00000000u; // 8036E0A4
  c->r[5]=c->r[4]+0xFFFF8000u; // 8036E0A8
  c->r[6]=0u+0x00000000u; // 8036E0AC
  goto L_8036E0C4; // 8036E0B0
L_8036E0B4:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 8036E0B4
  c->r[7]=c->r[7]+0x00000001u; // 8036E0B8
  W16(c->r[4]+c->r[6],c->r[5]); // 8036E0BC
  c->r[6]=c->r[6]+0x00000002u; // 8036E0C0
L_8036E0C4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036E0C4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8036E0C8
  if (crb(c,0)) { IRQCHK(c); goto L_8036E0B4; } // 8036E0CC
  c->r[4]=0u+0x00000004u; // 8036E0D0
  c->r[5]=0u+0x00000000u; // 8036E0D4
  f_80373CC0(c); return; // 8036E0D8
}

// fn_8036E0DC
void f_8036E0DC(Ctx* __restrict c) {
  trace_call(0x8036E0DCu);
  c->r[3]=0u+0x00000000u; // 8036E0DC
  return; // 8036E0E0
}

// fn_8036E0E4
void f_8036E0E4(Ctx* __restrict c) {
  trace_call(0x8036E0E4u);
  c->r[3]=0u+0x00000000u; // 8036E0E4
  return; // 8036E0E8
}

// fn_8036E0EC
void f_8036E0EC(Ctx* __restrict c) {
  trace_call(0x8036E0ECu);
  return; // 8036E0EC
}

// fn_8036E0F0
void f_8036E0F0(Ctx* __restrict c) {
  trace_call(0x8036E0F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E0F0
  c->r[0]=c->lr; // 8036E0F4
  cmps(c,0,(int32_t)c->r[3],0); // 8036E0F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036E0FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036E100
  c->r[31]=c->r[3]|c->r[3]; // 8036E104
  if (crb(c,2)) { goto L_8036E118; } // 8036E108
  if (crb(c,2)) { goto L_8036E118; } // 8036E10C
  c->r[4]=0u+0x00000000u; // 8036E110
  c->lr=0x8036E118u; f_80373AF0(c); // 8036E114
L_8036E118:;
  c->r[3]=c->r[31]|c->r[31]; // 8036E118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036E11C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036E120
  c->lr=c->r[0]; // 8036E124
  c->r[1]=c->r[1]+0x00000010u; // 8036E128
  return; // 8036E12C
}

// fn_8036E130
void f_8036E130(Ctx* __restrict c) {
  trace_call(0x8036E130u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E130
  c->r[0]=c->lr; // 8036E134
  W32(c->r[1]+0x00000044u,c->r[0]); // 8036E138
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8036E13C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8036E140
  c->r[11]=c->r[1]+0x00000030u; // 8036E144
  c->lr=0x8036E14Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036E148
  c->r[8]=R32(c->r[5]+0x00000000u); // 8036E14C
  c->r[29]=c->r[3]|c->r[3]; // 8036E150
  c->r[25]=c->r[4]|c->r[4]; // 8036E154
  c->r[30]=c->r[5]|c->r[5]; // 8036E158
  cmps(c,0,(int32_t)c->r[8],0); // 8036E15C
  c->r[27]=c->r[7]|c->r[7]; // 8036E160
  if (crb(c,2)) { goto L_8036E174; } // 8036E164
  c->r[0]=R32(c->r[6]+0x00000000u); // 8036E168
  cmps(c,0,(int32_t)c->r[0],0); // 8036E16C
  if (!crb(c,2)) { goto L_8036E17C; } // 8036E170
L_8036E174:;
  c->r[3]=0u+0x00000000u; // 8036E174
  goto L_8036E300; // 8036E178
L_8036E17C:;
  c->r[31]=R16(c->r[8]+0x0000002Eu); // 8036E17C
  c->r[3]=c->r[6]|c->r[6]; // 8036E180
  c->lr=0x8036E188u; f_8036624C(c); // 8036E184
  c->r[0]=0u-c->r[27]; // 8036E188
  c->r[28]=c->r[3]|c->r[3]; // 8036E18C
  c->r[4]=c->r[0]|c->r[27]; // 8036E190
  cmps(c,0,(int32_t)c->r[25],0); // 8036E194
  c->r[4]=sraw(c,c->r[4],31); // 8036E198
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8036E19C
  c->r[3]=c->r[31]&c->r[4]; // 8036E1A0
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 8036E1A4
  c->r[3]=c->r[26]+c->r[0]; // 8036E1A8
  c->r[4]=c->r[3]+0x00000034u; // 8036E1AC
  if (crb(c,2)) { goto L_8036E1B8; } // 8036E1B0
  W32(c->r[25]+0x00000000u,c->r[4]); // 8036E1B4
L_8036E1B8:;
  cmps(c,0,(int32_t)c->r[29],0); // 8036E1B8
  if (!crb(c,2)) { goto L_8036E1C8; } // 8036E1BC
  c->r[3]=0u+0x00000000u; // 8036E1C0
  goto L_8036E300; // 8036E1C4
L_8036E1C8:;
  c->r[3]=c->r[29]|c->r[29]; // 8036E1C8
  c->lr=0x8036E1D0u; f_802A703C(c); // 8036E1CC
  cmps(c,0,(int32_t)c->r[3],0); // 8036E1D0
  c->r[31]=c->r[3]|c->r[3]; // 8036E1D4
  if (!crb(c,2)) { goto L_8036E1E4; } // 8036E1D8
  c->r[3]=0u+0x00000000u; // 8036E1DC
  goto L_8036E300; // 8036E1E0
L_8036E1E4:;
  cmps(c,0,(int32_t)c->r[27],0); // 8036E1E4
  if (crb(c,2)) { goto L_8036E1F4; } // 8036E1E8
  c->r[27]=c->r[3]+0x00000034u; // 8036E1EC
  goto L_8036E1F8; // 8036E1F0
L_8036E1F4:;
  c->r[27]=0u+0x00000000u; // 8036E1F4
L_8036E1F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8036E1F8
  c->r[4]=c->r[3]+c->r[26]; // 8036E1FC
  c->r[5]=c->r[4]+0x00000034u; // 8036E200
  if (crb(c,2)) { goto L_8036E2FC; } // 8036E204
  c->r[0]=0u+0x00000000u; // 8036E208
  c->r[4]=0u+0x80430000u; // 8036E20C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036E210
  c->r[4]=c->r[4]+0x00004A20u; // 8036E214
  c->r[30]=R32(c->r[30]+0x00000000u); // 8036E218
  W32(c->r[3]+0x00000008u,c->r[29]); // 8036E21C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8036E220
  W32(c->r[3]+0x00000000u,c->r[4]); // 8036E224
  W32(c->r[3]+0x00000010u,c->r[28]); // 8036E228
  W32(c->r[3]+0x00000014u,c->r[5]); // 8036E22C
  c->r[3]=c->r[31]|c->r[31]; // 8036E230
  c->r[12]=R32(c->r[31]+0x00000000u); // 8036E234
  c->r[12]=R32(c->r[12]+0x00000034u); // 8036E238
  c->ctr=c->r[12]; // 8036E23C
  if (true) { c->lr=0x8036E244u; dispatch(c,c->ctr); } // 8036E240
  c->r[4]=R16(c->r[30]+0x0000002Cu); // 8036E244
  c->r[0]=0u+0x43300000u; // 8036E248
  c->r[5]=R32(c->r[30]+0x00000034u); // 8036E24C
  c->r[3]=0u+0x80430000u; // 8036E250
  c->r[4]=c->r[4]^0x80000000u; // 8036E254
  {uint32_t ea=c->r[2]+0xFFFFEA10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036E258
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8036E25C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8036E260
  {uint32_t ea=c->r[2]+0xFFFFEA14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036E264
  c->r[4]=c->r[13]+0xFFFF92D8u; // 8036E268
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036E26C
  c->r[3]=c->r[3]+0x000049D8u; // 8036E270
  {uint32_t ea=c->r[2]+0xFFFFEA18u; c->f[3]=RF64(ea);} // 8036E274
  cmps(c,0,(int32_t)c->r[27],0); // 8036E278
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8036E27C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8036E280
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8036E284
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 8036E288
  c->r[0]=R32(c->r[4]+c->r[5]); // 8036E28C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 8036E290
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8036E294
  W32(c->r[31]+0x00000028u,c->r[0]); // 8036E298
  W32(c->r[31]+0x00000000u,c->r[3]); // 8036E29C
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 8036E2A0
  W32(c->r[31]+0x00000030u,c->r[27]); // 8036E2A4
  if (crb(c,2)) { goto L_8036E2FC; } // 8036E2A8
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8036E2AC
  c->r[28]=0u+0x00000000u; // 8036E2B0
  c->r[27]=0u+0x00000000u; // 8036E2B4
  goto L_8036E2F0; // 8036E2B8
L_8036E2BC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8036E2BC
  c->r[3]=R16(c->r[3]+c->r[27]); // 8036E2C0
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036E2C4
  if (!crb(c,2)) { goto L_8036E2E8; } // 8036E2C8
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036E2CC
  c->f[1]=c->f[31]; // 8036E2D0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 8036E2D4
  c->r[4]=R32(c->r[31]+0x00000030u); // 8036E2D8
  c->r[3]=c->r[31]+0x0000002Cu; // 8036E2DC
  c->r[4]=c->r[4]+c->r[0]; // 8036E2E0
  c->lr=0x8036E2E8u; f_80369210(c); // 8036E2E4
L_8036E2E8:;
  c->r[27]=c->r[27]+0x00000002u; // 8036E2E8
  c->r[28]=c->r[28]+0x00000001u; // 8036E2EC
L_8036E2F0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8036E2F0
  cmpu(c,0,c->r[28],c->r[0]); // 8036E2F4
  if (crb(c,0)) { IRQCHK(c); goto L_8036E2BC; } // 8036E2F8
L_8036E2FC:;
  c->r[3]=c->r[31]|c->r[31]; // 8036E2FC
L_8036E300:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8036E300
  c->r[11]=c->r[1]+0x00000030u; // 8036E304
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8036E308
  c->lr=0x8036E310u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036E30C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8036E310
  c->lr=c->r[0]; // 8036E314
  c->r[1]=c->r[1]+0x00000040u; // 8036E318
  return; // 8036E31C
}

// fn_8036E320
void f_8036E320(Ctx* __restrict c) {
  trace_call(0x8036E320u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E320
  c->r[0]=c->lr; // 8036E324
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036E328
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8036E32C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8036E330
  c->f[3]=c->f[1]; // 8036E334
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036E338
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036E33C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036E340
  c->r[29]=c->r[3]|c->r[3]; // 8036E344
  c->r[12]=R32(c->r[3]+0x00000028u); // 8036E348
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036E34C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036E350
  c->ctr=c->r[12]; // 8036E354
  if (true) { c->lr=0x8036E35Cu; dispatch(c,c->ctr); } // 8036E358
  c->r[0]=R32(c->r[29]+0x00000030u); // 8036E35C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8036E360
  cmps(c,0,(int32_t)c->r[0],0); // 8036E364
  if (crb(c,2)) { goto L_8036E3BC; } // 8036E368
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8036E36C
  c->r[31]=0u+0x00000000u; // 8036E370
  c->r[30]=0u+0x00000000u; // 8036E374
  goto L_8036E3B0; // 8036E378
L_8036E37C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8036E37C
  c->r[3]=R16(c->r[3]+c->r[30]); // 8036E380
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036E384
  if (!crb(c,2)) { goto L_8036E3A8; } // 8036E388
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036E38C
  c->f[1]=c->f[31]; // 8036E390
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 8036E394
  c->r[4]=R32(c->r[29]+0x00000030u); // 8036E398
  c->r[3]=c->r[29]+0x0000002Cu; // 8036E39C
  c->r[4]=c->r[4]+c->r[0]; // 8036E3A0
  c->lr=0x8036E3A8u; f_80369210(c); // 8036E3A4
L_8036E3A8:;
  c->r[30]=c->r[30]+0x00000002u; // 8036E3A8
  c->r[31]=c->r[31]+0x00000001u; // 8036E3AC
L_8036E3B0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8036E3B0
  cmpu(c,0,c->r[31],c->r[0]); // 8036E3B4
  if (crb(c,0)) { IRQCHK(c); goto L_8036E37C; } // 8036E3B8
L_8036E3BC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8036E3BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036E3C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8036E3C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036E3C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036E3CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036E3D0
  c->lr=c->r[0]; // 8036E3D4
  c->r[1]=c->r[1]+0x00000030u; // 8036E3D8
  return; // 8036E3DC
}

// fn_8036E3E0
void f_8036E3E0(Ctx* __restrict c) {
  trace_call(0x8036E3E0u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036E3E0
  return; // 8036E3E4
}

// fn_8036E3E8
void f_8036E3E8(Ctx* __restrict c) {
  trace_call(0x8036E3E8u);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8036E3E8
  return; // 8036E3EC
}

// fn_8036E3F0
void f_8036E3F0(Ctx* __restrict c) {
  trace_call(0x8036E3F0u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036E3F0
  return; // 8036E3F4
}

// fn_8036E3F8
void f_8036E3F8(Ctx* __restrict c) {
  trace_call(0x8036E3F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E3F8
  c->r[0]=c->lr; // 8036E3FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036E400
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8036E404
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8036E408
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036E40C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036E410
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036E414
  c->r[29]=c->r[3]|c->r[3]; // 8036E418
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8036E41C
  {uint32_t ea=c->r[13]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036E420
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036E424
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8036E428
  c->r[12]=R32(c->r[3]+0x00000028u); // 8036E42C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036E430
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036E434
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 8036E438
  c->ctr=c->r[12]; // 8036E43C
  if (true) { c->lr=0x8036E444u; dispatch(c,c->ctr); } // 8036E440
  c->r[0]=R32(c->r[29]+0x00000030u); // 8036E444
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8036E448
  cmps(c,0,(int32_t)c->r[0],0); // 8036E44C
  if (crb(c,2)) { goto L_8036E4A4; } // 8036E450
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8036E454
  c->r[31]=0u+0x00000000u; // 8036E458
  c->r[30]=0u+0x00000000u; // 8036E45C
  goto L_8036E498; // 8036E460
L_8036E464:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8036E464
  c->r[3]=R16(c->r[3]+c->r[30]); // 8036E468
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036E46C
  if (!crb(c,2)) { goto L_8036E490; } // 8036E470
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036E474
  c->f[1]=c->f[31]; // 8036E478
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 8036E47C
  c->r[4]=R32(c->r[29]+0x00000030u); // 8036E480
  c->r[3]=c->r[29]+0x0000002Cu; // 8036E484
  c->r[4]=c->r[4]+c->r[0]; // 8036E488
  c->lr=0x8036E490u; f_80369210(c); // 8036E48C
L_8036E490:;
  c->r[30]=c->r[30]+0x00000002u; // 8036E490
  c->r[31]=c->r[31]+0x00000001u; // 8036E494
L_8036E498:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8036E498
  cmpu(c,0,c->r[31],c->r[0]); // 8036E49C
  if (crb(c,0)) { IRQCHK(c); goto L_8036E464; } // 8036E4A0
L_8036E4A4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8036E4A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036E4A8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8036E4AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036E4B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036E4B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036E4B8
  c->lr=c->r[0]; // 8036E4BC
  c->r[1]=c->r[1]+0x00000030u; // 8036E4C0
  return; // 8036E4C4
}

// fn_8036E4C8
void f_8036E4C8(Ctx* __restrict c) {
  trace_call(0x8036E4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E4C8
  c->r[0]=c->lr; // 8036E4CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036E4D0
  c->r[11]=c->r[1]+0x00000030u; // 8036E4D4
  c->lr=0x8036E4DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036E4D8
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 8036E4DC
  c->r[27]=c->r[3]|c->r[3]; // 8036E4E0
  c->r[28]=c->r[4]|c->r[4]; // 8036E4E4
  c->r[30]=0u+0x00000000u; // 8036E4E8
  c->r[31]=R16(c->r[5]+0x0000002Eu); // 8036E4EC
  c->r[29]=0u+0x00000000u; // 8036E4F0
  cmps(c,0,(int32_t)c->r[31],0); // 8036E4F4
  if (!crb(c,1)) { goto L_8036E594; } // 8036E4F8
  goto L_8036E588; // 8036E4FC
L_8036E500:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 8036E500
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036E504
  cmps(c,0,(int32_t)c->r[0],0); // 8036E508
  if (crb(c,2)) { goto L_8036E518; } // 8036E50C
  c->r[0]=c->r[3]+c->r[0]; // 8036E510
  goto L_8036E51C; // 8036E514
L_8036E518:;
  c->r[0]=0u+0x00000000u; // 8036E518
L_8036E51C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8036E51C
  if (crb(c,2)) { goto L_8036E548; } // 8036E520
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 8036E524
  c->r[3]=c->r[0]+c->r[3]; // 8036E528
  c->r[3]=R32(c->r[3]+0x00000024u); // 8036E52C
  cmps(c,0,(int32_t)c->r[3],0); // 8036E530
  if (crb(c,2)) { goto L_8036E540; } // 8036E534
  c->r[5]=c->r[0]+c->r[3]; // 8036E538
  goto L_8036E54C; // 8036E53C
L_8036E540:;
  c->r[5]=0u+0x00000000u; // 8036E540
  goto L_8036E54C; // 8036E544
L_8036E548:;
  c->r[5]=0u+0x00000000u; // 8036E548
L_8036E54C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8036E54C
  c->r[3]=c->r[28]|c->r[28]; // 8036E550
  c->r[4]=c->r[1]+0x00000008u; // 8036E554
  c->r[5]=c->r[0]+c->r[5]; // 8036E558
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 8036E55C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036E560
  c->lr=0x8036E568u; f_80366154(c); // 8036E564
  cmps(c,0,(int32_t)c->r[3],0); // 8036E568
  if (crb(c,2)) { goto L_8036E584; } // 8036E56C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036E570
  c->r[30]=0u+0x00000001u; // 8036E574
  c->r[3]=R32(c->r[27]+0x00000014u); // 8036E578
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8036E57C
  W16(c->r[3]+c->r[0],c->r[29]); // 8036E580
L_8036E584:;
  c->r[29]=c->r[29]+0x00000001u; // 8036E584
L_8036E588:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 8036E588
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 8036E58C
  if (crb(c,0)) { IRQCHK(c); goto L_8036E500; } // 8036E590
L_8036E594:;
  c->r[3]=c->r[27]|c->r[27]; // 8036E594
  c->r[4]=0u+0x00000004u; // 8036E598
  c->r[5]=0u+0x00000001u; // 8036E59C
  c->lr=0x8036E5A4u; f_80373CC0(c); // 8036E5A0
  c->r[11]=c->r[1]+0x00000030u; // 8036E5A4
  c->r[3]=c->r[30]|c->r[30]; // 8036E5A8
  c->lr=0x8036E5B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036E5AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036E5B0
  c->lr=c->r[0]; // 8036E5B4
  c->r[1]=c->r[1]+0x00000030u; // 8036E5B8
  return; // 8036E5BC
}

// fn_8036E5C0
void f_8036E5C0(Ctx* __restrict c) {
  trace_call(0x8036E5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E5C0
  c->r[0]=c->lr; // 8036E5C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036E5C8
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8036E5CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036E5D0
  c->r[31]=c->r[4]|c->r[4]; // 8036E5D4
  c->r[6]=R32(c->r[3]+0x00000014u); // 8036E5D8
  c->r[5]=R16(c->r[6]+c->r[0]); // 8036E5DC
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 8036E5E0
  if (crb(c,2)) { goto L_8036E5FC; } // 8036E5E4
  c->r[0]=0u+0x00000000u; // 8036E5E8
  c->r[3]=c->r[31]|c->r[31]; // 8036E5EC
  W8(c->r[4]+0x00000000u,c->r[0]); // 8036E5F0
  W8(c->r[4]+0x00000001u,c->r[0]); // 8036E5F4
  goto L_8036E624; // 8036E5F8
L_8036E5FC:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 8036E5FC
  cmps(c,0,(int32_t)c->r[6],0); // 8036E600
  if (crb(c,2)) { goto L_8036E614; } // 8036E604
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 8036E608
  c->r[3]=c->r[6]+c->r[0]; // 8036E60C
  goto L_8036E624; // 8036E610
L_8036E614:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036E614
  c->r[3]=c->r[3]+0x0000002Cu; // 8036E618
  c->lr=0x8036E620u; f_80369210(c); // 8036E61C
  c->r[3]=c->r[31]|c->r[31]; // 8036E620
L_8036E624:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036E624
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036E628
  c->lr=c->r[0]; // 8036E62C
  c->r[1]=c->r[1]+0x00000010u; // 8036E630
  return; // 8036E634
}

// fn_8036E638
void f_8036E638(Ctx* __restrict c) {
  trace_call(0x8036E638u);
  c->r[5]=0u+0x00010000u; // 8036E638
  c->r[0]=c->r[5]+0x00000002u; // 8036E63C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036E640
  if (crb(c,2)) { goto L_8036E684; } // 8036E644
  if (!crb(c,0)) { goto L_8036E658; } // 8036E648
  cmps(c,0,(int32_t)c->r[4],8); // 8036E64C
  if (crb(c,2)) { goto L_8036E668; } // 8036E650
  return; // 8036E654
L_8036E658:;
  c->r[0]=c->r[5]+0x00000004u; // 8036E658
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036E65C
  if (!crb(c,0)) return; // 8036E660
  goto L_8036E678; // 8036E664
L_8036E668:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036E668
  c->r[12]=R32(c->r[12]+0x00000024u); // 8036E66C
  c->ctr=c->r[12]; // 8036E670
  if (true) { dispatch(c,c->ctr); return; } // 8036E674
L_8036E678:;
  c->r[0]=0u+0x00000000u; // 8036E678
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036E67C
  return; // 8036E680
L_8036E684:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8036E684
  return; // 8036E688
}

// fn_8036E68C
void f_8036E68C(Ctx* __restrict c) {
  trace_call(0x8036E68Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E68C
  c->r[0]=c->lr; // 8036E690
  W32(c->r[1]+0x00000074u,c->r[0]); // 8036E694
  c->r[11]=c->r[1]+0x00000070u; // 8036E698
  c->lr=0x8036E6A0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036E69C
  c->r[31]=c->r[5]|c->r[5]; // 8036E6A0
  c->r[26]=R8(c->r[5]+0x00000000u); // 8036E6A4
  c->r[22]=c->r[3]|c->r[3]; // 8036E6A8
  c->r[30]=c->r[4]|c->r[4]; // 8036E6AC
  c->r[27]=c->r[31]|c->r[31]; // 8036E6B0
  c->r[29]=c->r[1]+0x00000024u; // 8036E6B4
  c->r[28]=0u+0x00000000u; // 8036E6B8
  goto L_8036E7F8; // 8036E6BC
L_8036E6C0:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 8036E6C0
  if (crb(c,2)) { goto L_8036E7EC; } // 8036E6C4
  c->r[0]=R32(c->r[27]+0x00000004u); // 8036E6C8
  c->r[3]=c->r[22]|c->r[22]; // 8036E6CC
  c->r[4]=c->r[28]|c->r[28]; // 8036E6D0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8036E6D4
  c->lr=0x8036E6DCu; f_80367178(c); // 8036E6D8
  W32(c->r[1]+0x00000008u,c->r[29]); // 8036E6DC
  c->r[25]=c->r[3]|c->r[3]; // 8036E6E0
  c->r[4]=c->r[1]+0x00000038u; // 8036E6E4
  c->r[5]=c->r[1]+0x00000034u; // 8036E6E8
  c->r[6]=c->r[1]+0x00000030u; // 8036E6EC
  c->r[7]=c->r[1]+0x0000002Cu; // 8036E6F0
  c->r[8]=c->r[1]+0x00000028u; // 8036E6F4
  c->r[9]=c->r[1]+0x00000012u; // 8036E6F8
  c->r[10]=c->r[1]+0x00000011u; // 8036E6FC
  c->lr=0x8036E704u; f_802868B4(c); // 8036E700
  c->r[3]=c->r[25]|c->r[25]; // 8036E704
  c->lr=0x8036E70Cu; f_80286890(c); // 8036E708
  c->r[24]=c->r[3]|c->r[3]; // 8036E70C
  c->r[3]=c->r[25]|c->r[25]; // 8036E710
  c->lr=0x8036E718u; f_8028689C(c); // 8036E714
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 8036E718
  c->r[23]=c->r[3]|c->r[3]; // 8036E71C
  c->r[0]=R32(c->r[4]+0x00000018u); // 8036E720
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8036E724
  if (crb(c,2)) { goto L_8036E77C; } // 8036E728
  c->r[3]=c->r[1]+0x0000003Cu; // 8036E72C
  c->r[4]=c->r[1]+0x00000020u; // 8036E730
  c->r[5]=c->r[1]+0x00000016u; // 8036E734
  c->r[6]=c->r[1]+0x00000014u; // 8036E738
  c->r[7]=c->r[1]+0x00000018u; // 8036E73C
  c->r[8]=c->r[1]+0x00000030u; // 8036E740
  c->r[9]=c->r[1]+0x0000002Cu; // 8036E744
  c->r[10]=c->r[1]+0x00000010u; // 8036E748
  c->lr=0x8036E750u; f_8036892C(c); // 8036E74C
  W32(c->r[1]+0x00000008u,c->r[28]); // 8036E750
  c->r[3]=c->r[25]|c->r[25]; // 8036E754
  c->r[8]=c->r[24]|c->r[24]; // 8036E758
  c->r[9]=c->r[23]|c->r[23]; // 8036E75C
  c->r[4]=R32(c->r[1]+0x00000020u); // 8036E760
  c->r[5]=R16(c->r[1]+0x00000016u); // 8036E764
  c->r[6]=R16(c->r[1]+0x00000014u); // 8036E768
  c->r[7]=R32(c->r[1]+0x00000018u); // 8036E76C
  c->r[10]=R8(c->r[1]+0x00000010u); // 8036E770
  c->lr=0x8036E778u; f_80286648(c); // 8036E774
  goto L_8036E7C4; // 8036E778
L_8036E77C:;
  c->r[3]=c->r[1]+0x0000003Cu; // 8036E77C
  c->r[4]=c->r[1]+0x00000020u; // 8036E780
  c->r[5]=c->r[1]+0x00000016u; // 8036E784
  c->r[6]=c->r[1]+0x00000014u; // 8036E788
  c->r[7]=c->r[1]+0x0000001Cu; // 8036E78C
  c->r[8]=c->r[1]+0x00000030u; // 8036E790
  c->r[9]=c->r[1]+0x0000002Cu; // 8036E794
  c->r[10]=c->r[1]+0x00000010u; // 8036E798
  c->lr=0x8036E7A0u; f_80368870(c); // 8036E79C
  c->r[4]=R32(c->r[1]+0x00000020u); // 8036E7A0
  c->r[3]=c->r[25]|c->r[25]; // 8036E7A4
  c->r[5]=R16(c->r[1]+0x00000016u); // 8036E7A8
  c->r[8]=c->r[24]|c->r[24]; // 8036E7AC
  c->r[6]=R16(c->r[1]+0x00000014u); // 8036E7B0
  c->r[9]=c->r[23]|c->r[23]; // 8036E7B4
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 8036E7B8
  c->r[10]=R8(c->r[1]+0x00000010u); // 8036E7BC
  c->lr=0x8036E7C4u; f_8028643C(c); // 8036E7C0
L_8036E7C4:;
  c->r[4]=R32(c->r[1]+0x00000038u); // 8036E7C4
  c->r[3]=c->r[25]|c->r[25]; // 8036E7C8
  c->r[5]=R32(c->r[1]+0x00000034u); // 8036E7CC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036E7D0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8036E7D4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8036E7D8
  c->r[6]=R8(c->r[1]+0x00000012u); // 8036E7DC
  c->r[7]=R8(c->r[1]+0x00000011u); // 8036E7E0
  c->r[8]=R32(c->r[1]+0x00000024u); // 8036E7E4
  c->lr=0x8036E7ECu; f_80286690(c); // 8036E7E8
L_8036E7EC:;
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 8036E7EC
  c->r[27]=c->r[27]+0x00000004u; // 8036E7F0
  c->r[28]=c->r[28]+0x00000001u; // 8036E7F4
L_8036E7F8:;
  cmps(c,0,(int32_t)c->r[26],0); // 8036E7F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8036E6C0; } // 8036E7FC
  c->r[23]=R8(c->r[31]+0x00000001u); // 8036E800
  c->r[26]=0u+0x00000000u; // 8036E804
  goto L_8036E860; // 8036E808
L_8036E80C:;
  c->r[0]=rotl(c->r[23],0)&0x00000001u; cr0(c,c->r[0]); // 8036E80C
  if (crb(c,2)) { goto L_8036E854; } // 8036E810
  c->r[4]=R32(c->r[31]+0x00000024u); // 8036E814
  c->r[0]=R32(c->r[4]+0x00000010u); // 8036E818
  cmps(c,0,(int32_t)c->r[0],0); // 8036E81C
  if (crb(c,2)) { goto L_8036E82C; } // 8036E820
  c->r[28]=c->r[4]+c->r[0]; // 8036E824
  goto L_8036E830; // 8036E828
L_8036E82C:;
  c->r[28]=0u+0x00000000u; // 8036E82C
L_8036E830:;
  c->r[27]=R32(c->r[4]+0x00000018u); // 8036E830
  c->r[3]=c->r[30]|c->r[30]; // 8036E834
  c->r[29]=R16(c->r[4]+0x0000001Cu); // 8036E838
  c->r[4]=c->r[26]|c->r[26]; // 8036E83C
  c->lr=0x8036E844u; f_803672E0(c); // 8036E840
  c->r[4]=c->r[28]|c->r[28]; // 8036E844
  c->r[5]=c->r[27]|c->r[27]; // 8036E848
  c->r[6]=c->r[29]|c->r[29]; // 8036E84C
  c->lr=0x8036E854u; f_80286B58(c); // 8036E850
L_8036E854:;
  c->r[23]=rotl(c->r[23],31)&0x7FFFFFFFu; // 8036E854
  c->r[31]=c->r[31]+0x00000004u; // 8036E858
  c->r[26]=c->r[26]+0x00000001u; // 8036E85C
L_8036E860:;
  cmps(c,0,(int32_t)c->r[23],0); // 8036E860
  if (!crb(c,2)) { IRQCHK(c); goto L_8036E80C; } // 8036E864
  c->r[11]=c->r[1]+0x00000070u; // 8036E868
  c->lr=0x8036E870u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036E86C
  c->r[0]=R32(c->r[1]+0x00000074u); // 8036E870
  c->lr=c->r[0]; // 8036E874
  c->r[1]=c->r[1]+0x00000070u; // 8036E878
  return; // 8036E87C
}

// fn_8036E880
void f_8036E880(Ctx* __restrict c) {
  trace_call(0x8036E880u);
  c->r[3]=0u+0x803F0000u; // 8036E880
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036E884
  c->r[3]=c->r[3]+0xFFFFDF98u; // 8036E888
  cmpu(c,0,c->r[0],c->r[3]); // 8036E88C
  if (!crb(c,2)) { goto L_8036E89C; } // 8036E890
  c->r[3]=0u+0x00000001u; // 8036E894
  return; // 8036E898
L_8036E89C:;
  c->r[3]=0u+0x803F0000u; // 8036E89C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036E8A0
  c->r[3]=c->r[3]+0xFFFFDF80u; // 8036E8A4
  cmpu(c,0,c->r[0],c->r[3]); // 8036E8A8
  if (!crb(c,2)) { goto L_8036E8B8; } // 8036E8AC
  c->r[3]=0u+0x00000001u; // 8036E8B0
  return; // 8036E8B4
L_8036E8B8:;
  c->r[3]=0u+0x803F0000u; // 8036E8B8
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8036E8BC
  cmpu(c,0,c->r[0],c->r[3]); // 8036E8C0
  if (!crb(c,2)) { goto L_8036E8D0; } // 8036E8C4
  c->r[3]=0u+0x00000001u; // 8036E8C8
  return; // 8036E8CC
L_8036E8D0:;
  c->r[3]=0u+0x803F0000u; // 8036E8D0
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 8036E8D4
  c->r[0]=c->r[3]-c->r[0]; // 8036E8D8
  c->r[0]=cntlz(c->r[0]); // 8036E8DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036E8E0
  return; // 8036E8E4
}

// fn_8036E8E8
void f_8036E8E8(Ctx* __restrict c) {
  trace_call(0x8036E8E8u);
  c->r[3]=0u+0x803F0000u; // 8036E8E8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036E8EC
  c->r[3]=c->r[3]+0xFFFFDF80u; // 8036E8F0
  cmpu(c,0,c->r[0],c->r[3]); // 8036E8F4
  if (!crb(c,2)) { goto L_8036E904; } // 8036E8F8
  c->r[3]=0u+0x00000001u; // 8036E8FC
  return; // 8036E900
L_8036E904:;
  c->r[3]=0u+0x803F0000u; // 8036E904
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036E908
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8036E90C
  cmpu(c,0,c->r[0],c->r[3]); // 8036E910
  if (!crb(c,2)) { goto L_8036E920; } // 8036E914
  c->r[3]=0u+0x00000001u; // 8036E918
  return; // 8036E91C
L_8036E920:;
  c->r[3]=0u+0x803F0000u; // 8036E920
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 8036E924
  c->r[0]=c->r[3]-c->r[0]; // 8036E928
  c->r[0]=cntlz(c->r[0]); // 8036E92C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036E930
  return; // 8036E934
}

// fn_8036E938
void f_8036E938(Ctx* __restrict c) {
  trace_call(0x8036E938u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E938
  c->r[0]=c->lr; // 8036E93C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036E940
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036E944
  c->r[12]=R32(c->r[12]+0x00000014u); // 8036E948
  c->ctr=c->r[12]; // 8036E94C
  if (true) { c->lr=0x8036E954u; dispatch(c,c->ctr); } // 8036E950
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036E954
  c->r[3]=c->r[3]+0x00000004u; // 8036E958
  c->lr=c->r[0]; // 8036E95C
  c->r[1]=c->r[1]+0x00000010u; // 8036E960
  return; // 8036E964
}

// fn_8036E968
void f_8036E968(Ctx* __restrict c) {
  trace_call(0x8036E968u);
  c->r[3]=0u+0x803F0000u; // 8036E968
  c->r[3]=c->r[3]+0xFFFFDF98u; // 8036E96C
  return; // 8036E970
}

// fn_8036E974
void f_8036E974(Ctx* __restrict c) {
  trace_call(0x8036E974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E974
  c->r[0]=c->lr; // 8036E978
  cmps(c,0,(int32_t)c->r[3],0); // 8036E97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036E980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036E984
  c->r[31]=c->r[3]|c->r[3]; // 8036E988
  if (crb(c,2)) { goto L_8036E9A0; } // 8036E98C
  if (crb(c,2)) { goto L_8036E9A0; } // 8036E990
  if (crb(c,2)) { goto L_8036E9A0; } // 8036E994
  c->r[4]=0u+0x00000000u; // 8036E998
  c->lr=0x8036E9A0u; f_80373AF0(c); // 8036E99C
L_8036E9A0:;
  c->r[3]=c->r[31]|c->r[31]; // 8036E9A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036E9A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036E9A8
  c->lr=c->r[0]; // 8036E9AC
  c->r[1]=c->r[1]+0x00000010u; // 8036E9B0
  return; // 8036E9B4
}

// fn_8036E9B8
void f_8036E9B8(Ctx* __restrict c) {
  trace_call(0x8036E9B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036E9B8
  c->r[0]=c->lr; // 8036E9BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036E9C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036E9C4
  c->r[12]=R32(c->r[12]+0x00000014u); // 8036E9C8
  c->ctr=c->r[12]; // 8036E9CC
  if (true) { c->lr=0x8036E9D4u; dispatch(c,c->ctr); } // 8036E9D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036E9D4
  c->r[3]=c->r[3]+0x00000004u; // 8036E9D8
  c->lr=c->r[0]; // 8036E9DC
  c->r[1]=c->r[1]+0x00000010u; // 8036E9E0
  return; // 8036E9E4
}

// fn_8036E9E8
void f_8036E9E8(Ctx* __restrict c) {
  trace_call(0x8036E9E8u);
  c->r[3]=0u+0x803F0000u; // 8036E9E8
  c->r[3]=c->r[3]+0xFFFFDF80u; // 8036E9EC
  return; // 8036E9F0
}

// fn_8036E9F4
void f_8036E9F4(Ctx* __restrict c) {
  trace_call(0x8036E9F4u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8036E9F4
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8036E9F8
  c->r[0]=R16(c->r[3]+c->r[0]); // 8036E9FC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 8036EA00
  c->r[0]=cntlz(c->r[0]); // 8036EA04
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036EA08
  return; // 8036EA0C
}

// fn_8036EA10
void f_8036EA10(Ctx* __restrict c) {
  trace_call(0x8036EA10u);
  c->r[4]=0u+0x00010000u; // 8036EA10
  c->r[7]=0u+0x00000000u; // 8036EA14
  c->r[5]=c->r[4]+0xFFFF8000u; // 8036EA18
  c->r[6]=0u+0x00000000u; // 8036EA1C
  goto L_8036EA34; // 8036EA20
L_8036EA24:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 8036EA24
  c->r[7]=c->r[7]+0x00000001u; // 8036EA28
  W16(c->r[4]+c->r[6],c->r[5]); // 8036EA2C
  c->r[6]=c->r[6]+0x00000002u; // 8036EA30
L_8036EA34:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036EA34
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8036EA38
  if (crb(c,0)) { IRQCHK(c); goto L_8036EA24; } // 8036EA3C
  c->r[4]=0u+0x00000004u; // 8036EA40
  c->r[5]=0u+0x00000000u; // 8036EA44
  f_80373CC0(c); return; // 8036EA48
}

// fn_8036EA4C
void f_8036EA4C(Ctx* __restrict c) {
  trace_call(0x8036EA4Cu);
  c->r[3]=0u+0x00000000u; // 8036EA4C
  return; // 8036EA50
}

// fn_8036EA54
void f_8036EA54(Ctx* __restrict c) {
  trace_call(0x8036EA54u);
  c->r[3]=0u+0x00000000u; // 8036EA54
  return; // 8036EA58
}

// fn_8036EA5C
void f_8036EA5C(Ctx* __restrict c) {
  trace_call(0x8036EA5Cu);
  return; // 8036EA5C
}

// fn_8036EA60
void f_8036EA60(Ctx* __restrict c) {
  trace_call(0x8036EA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036EA60
  c->r[0]=c->lr; // 8036EA64
  cmps(c,0,(int32_t)c->r[3],0); // 8036EA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036EA6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036EA70
  c->r[31]=c->r[3]|c->r[3]; // 8036EA74
  if (crb(c,2)) { goto L_8036EA88; } // 8036EA78
  if (crb(c,2)) { goto L_8036EA88; } // 8036EA7C
  c->r[4]=0u+0x00000000u; // 8036EA80
  c->lr=0x8036EA88u; f_80373AF0(c); // 8036EA84
L_8036EA88:;
  c->r[3]=c->r[31]|c->r[31]; // 8036EA88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036EA8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036EA90
  c->lr=c->r[0]; // 8036EA94
  c->r[1]=c->r[1]+0x00000010u; // 8036EA98
  return; // 8036EA9C
}

// fn_8036EAA0
void f_8036EAA0(Ctx* __restrict c) {
  trace_call(0x8036EAA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036EAA0
  c->r[0]=c->lr; // 8036EAA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8036EAA8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8036EAAC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8036EAB0
  c->r[11]=c->r[1]+0x00000030u; // 8036EAB4
  c->lr=0x8036EABCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036EAB8
  c->r[8]=R32(c->r[5]+0x00000000u); // 8036EABC
  c->r[29]=c->r[3]|c->r[3]; // 8036EAC0
  c->r[25]=c->r[4]|c->r[4]; // 8036EAC4
  c->r[30]=c->r[5]|c->r[5]; // 8036EAC8
  cmps(c,0,(int32_t)c->r[8],0); // 8036EACC
  c->r[27]=c->r[7]|c->r[7]; // 8036EAD0
  if (crb(c,2)) { goto L_8036EAE4; } // 8036EAD4
  c->r[0]=R32(c->r[6]+0x00000000u); // 8036EAD8
  cmps(c,0,(int32_t)c->r[0],0); // 8036EADC
  if (!crb(c,2)) { goto L_8036EAEC; } // 8036EAE0
L_8036EAE4:;
  c->r[3]=0u+0x00000000u; // 8036EAE4
  goto L_8036EC70; // 8036EAE8
L_8036EAEC:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 8036EAEC
  c->r[3]=c->r[6]|c->r[6]; // 8036EAF0
  c->lr=0x8036EAF8u; f_8036624C(c); // 8036EAF4
  c->r[0]=0u-c->r[27]; // 8036EAF8
  c->r[28]=c->r[3]|c->r[3]; // 8036EAFC
  c->r[4]=c->r[0]|c->r[27]; // 8036EB00
  cmps(c,0,(int32_t)c->r[25],0); // 8036EB04
  c->r[4]=sraw(c,c->r[4],31); // 8036EB08
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8036EB0C
  c->r[3]=c->r[31]&c->r[4]; // 8036EB10
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)232); // 8036EB14
  c->r[3]=c->r[26]+c->r[0]; // 8036EB18
  c->r[4]=c->r[3]+0x00000034u; // 8036EB1C
  if (crb(c,2)) { goto L_8036EB28; } // 8036EB20
  W32(c->r[25]+0x00000000u,c->r[4]); // 8036EB24
L_8036EB28:;
  cmps(c,0,(int32_t)c->r[29],0); // 8036EB28
  if (!crb(c,2)) { goto L_8036EB38; } // 8036EB2C
  c->r[3]=0u+0x00000000u; // 8036EB30
  goto L_8036EC70; // 8036EB34
L_8036EB38:;
  c->r[3]=c->r[29]|c->r[29]; // 8036EB38
  c->lr=0x8036EB40u; f_802A703C(c); // 8036EB3C
  cmps(c,0,(int32_t)c->r[3],0); // 8036EB40
  c->r[31]=c->r[3]|c->r[3]; // 8036EB44
  if (!crb(c,2)) { goto L_8036EB54; } // 8036EB48
  c->r[3]=0u+0x00000000u; // 8036EB4C
  goto L_8036EC70; // 8036EB50
L_8036EB54:;
  cmps(c,0,(int32_t)c->r[27],0); // 8036EB54
  if (crb(c,2)) { goto L_8036EB64; } // 8036EB58
  c->r[27]=c->r[3]+0x00000034u; // 8036EB5C
  goto L_8036EB68; // 8036EB60
L_8036EB64:;
  c->r[27]=0u+0x00000000u; // 8036EB64
L_8036EB68:;
  cmps(c,0,(int32_t)c->r[3],0); // 8036EB68
  c->r[4]=c->r[3]+c->r[26]; // 8036EB6C
  c->r[5]=c->r[4]+0x00000034u; // 8036EB70
  if (crb(c,2)) { goto L_8036EC6C; } // 8036EB74
  c->r[0]=0u+0x00000000u; // 8036EB78
  c->r[4]=0u+0x80430000u; // 8036EB7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036EB80
  c->r[4]=c->r[4]+0x00004AB0u; // 8036EB84
  c->r[30]=R32(c->r[30]+0x00000000u); // 8036EB88
  W32(c->r[3]+0x00000008u,c->r[29]); // 8036EB8C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8036EB90
  W32(c->r[3]+0x00000000u,c->r[4]); // 8036EB94
  W32(c->r[3]+0x00000010u,c->r[28]); // 8036EB98
  W32(c->r[3]+0x00000014u,c->r[5]); // 8036EB9C
  c->r[3]=c->r[31]|c->r[31]; // 8036EBA0
  c->r[12]=R32(c->r[31]+0x00000000u); // 8036EBA4
  c->r[12]=R32(c->r[12]+0x00000034u); // 8036EBA8
  c->ctr=c->r[12]; // 8036EBAC
  if (true) { c->lr=0x8036EBB4u; dispatch(c,c->ctr); } // 8036EBB0
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 8036EBB4
  c->r[0]=0u+0x43300000u; // 8036EBB8
  c->r[5]=R32(c->r[30]+0x00000024u); // 8036EBBC
  c->r[3]=0u+0x80430000u; // 8036EBC0
  c->r[4]=c->r[4]^0x80000000u; // 8036EBC4
  {uint32_t ea=c->r[2]+0xFFFFEA20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036EBC8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8036EBCC
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8036EBD0
  {uint32_t ea=c->r[2]+0xFFFFEA24u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036EBD4
  c->r[4]=c->r[13]+0xFFFF92D8u; // 8036EBD8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036EBDC
  c->r[3]=c->r[3]+0x00004A68u; // 8036EBE0
  {uint32_t ea=c->r[2]+0xFFFFEA28u; c->f[3]=RF64(ea);} // 8036EBE4
  cmps(c,0,(int32_t)c->r[27],0); // 8036EBE8
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 8036EBEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8036EBF0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8036EBF4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 8036EBF8
  c->r[0]=R32(c->r[4]+c->r[5]); // 8036EBFC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 8036EC00
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8036EC04
  W32(c->r[31]+0x00000028u,c->r[0]); // 8036EC08
  W32(c->r[31]+0x00000000u,c->r[3]); // 8036EC0C
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 8036EC10
  W32(c->r[31]+0x00000030u,c->r[27]); // 8036EC14
  if (crb(c,2)) { goto L_8036EC6C; } // 8036EC18
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 8036EC1C
  c->r[28]=0u+0x00000000u; // 8036EC20
  c->r[27]=0u+0x00000000u; // 8036EC24
  goto L_8036EC60; // 8036EC28
L_8036EC2C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8036EC2C
  c->r[3]=R16(c->r[3]+c->r[27]); // 8036EC30
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036EC34
  if (!crb(c,2)) { goto L_8036EC58; } // 8036EC38
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036EC3C
  c->f[1]=c->f[31]; // 8036EC40
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 8036EC44
  c->r[4]=R32(c->r[31]+0x00000030u); // 8036EC48
  c->r[3]=c->r[31]+0x0000002Cu; // 8036EC4C
  c->r[4]=c->r[4]+c->r[0]; // 8036EC50
  c->lr=0x8036EC58u; f_80369500(c); // 8036EC54
L_8036EC58:;
  c->r[27]=c->r[27]+0x00000002u; // 8036EC58
  c->r[28]=c->r[28]+0x00000001u; // 8036EC5C
L_8036EC60:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8036EC60
  cmpu(c,0,c->r[28],c->r[0]); // 8036EC64
  if (crb(c,0)) { IRQCHK(c); goto L_8036EC2C; } // 8036EC68
L_8036EC6C:;
  c->r[3]=c->r[31]|c->r[31]; // 8036EC6C
L_8036EC70:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8036EC70
  c->r[11]=c->r[1]+0x00000030u; // 8036EC74
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8036EC78
  c->lr=0x8036EC80u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036EC7C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8036EC80
  c->lr=c->r[0]; // 8036EC84
  c->r[1]=c->r[1]+0x00000040u; // 8036EC88
  return; // 8036EC8C
}

// fn_8036EC90
void f_8036EC90(Ctx* __restrict c) {
  trace_call(0x8036EC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036EC90
  c->r[0]=c->lr; // 8036EC94
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036EC98
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8036EC9C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8036ECA0
  c->f[3]=c->f[1]; // 8036ECA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036ECA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036ECAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036ECB0
  c->r[29]=c->r[3]|c->r[3]; // 8036ECB4
  c->r[12]=R32(c->r[3]+0x00000028u); // 8036ECB8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036ECBC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036ECC0
  c->ctr=c->r[12]; // 8036ECC4
  if (true) { c->lr=0x8036ECCCu; dispatch(c,c->ctr); } // 8036ECC8
  c->r[0]=R32(c->r[29]+0x00000030u); // 8036ECCC
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8036ECD0
  cmps(c,0,(int32_t)c->r[0],0); // 8036ECD4
  if (crb(c,2)) { goto L_8036ED2C; } // 8036ECD8
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8036ECDC
  c->r[31]=0u+0x00000000u; // 8036ECE0
  c->r[30]=0u+0x00000000u; // 8036ECE4
  goto L_8036ED20; // 8036ECE8
L_8036ECEC:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8036ECEC
  c->r[3]=R16(c->r[3]+c->r[30]); // 8036ECF0
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036ECF4
  if (!crb(c,2)) { goto L_8036ED18; } // 8036ECF8
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036ECFC
  c->f[1]=c->f[31]; // 8036ED00
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 8036ED04
  c->r[4]=R32(c->r[29]+0x00000030u); // 8036ED08
  c->r[3]=c->r[29]+0x0000002Cu; // 8036ED0C
  c->r[4]=c->r[4]+c->r[0]; // 8036ED10
  c->lr=0x8036ED18u; f_80369500(c); // 8036ED14
L_8036ED18:;
  c->r[30]=c->r[30]+0x00000002u; // 8036ED18
  c->r[31]=c->r[31]+0x00000001u; // 8036ED1C
L_8036ED20:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8036ED20
  cmpu(c,0,c->r[31],c->r[0]); // 8036ED24
  if (crb(c,0)) { IRQCHK(c); goto L_8036ECEC; } // 8036ED28
L_8036ED2C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8036ED2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036ED30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8036ED34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036ED38
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036ED3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036ED40
  c->lr=c->r[0]; // 8036ED44
  c->r[1]=c->r[1]+0x00000030u; // 8036ED48
  return; // 8036ED4C
}

// fn_8036ED50
void f_8036ED50(Ctx* __restrict c) {
  trace_call(0x8036ED50u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036ED50
  return; // 8036ED54
}

// fn_8036ED58
void f_8036ED58(Ctx* __restrict c) {
  trace_call(0x8036ED58u);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8036ED58
  return; // 8036ED5C
}

// fn_8036ED60
void f_8036ED60(Ctx* __restrict c) {
  trace_call(0x8036ED60u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8036ED60
  return; // 8036ED64
}

// fn_8036ED68
void f_8036ED68(Ctx* __restrict c) {
  trace_call(0x8036ED68u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036ED68
  c->r[0]=c->lr; // 8036ED6C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036ED70
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8036ED74
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8036ED78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036ED7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036ED80
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036ED84
  c->r[29]=c->r[3]|c->r[3]; // 8036ED88
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8036ED8C
  {uint32_t ea=c->r[13]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036ED90
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036ED94
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 8036ED98
  c->r[12]=R32(c->r[3]+0x00000028u); // 8036ED9C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036EDA0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036EDA4
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 8036EDA8
  c->ctr=c->r[12]; // 8036EDAC
  if (true) { c->lr=0x8036EDB4u; dispatch(c,c->ctr); } // 8036EDB0
  c->r[0]=R32(c->r[29]+0x00000030u); // 8036EDB4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 8036EDB8
  cmps(c,0,(int32_t)c->r[0],0); // 8036EDBC
  if (crb(c,2)) { goto L_8036EE14; } // 8036EDC0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8036EDC4
  c->r[31]=0u+0x00000000u; // 8036EDC8
  c->r[30]=0u+0x00000000u; // 8036EDCC
  goto L_8036EE08; // 8036EDD0
L_8036EDD4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8036EDD4
  c->r[3]=R16(c->r[3]+c->r[30]); // 8036EDD8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8036EDDC
  if (!crb(c,2)) { goto L_8036EE00; } // 8036EDE0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8036EDE4
  c->f[1]=c->f[31]; // 8036EDE8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 8036EDEC
  c->r[4]=R32(c->r[29]+0x00000030u); // 8036EDF0
  c->r[3]=c->r[29]+0x0000002Cu; // 8036EDF4
  c->r[4]=c->r[4]+c->r[0]; // 8036EDF8
  c->lr=0x8036EE00u; f_80369500(c); // 8036EDFC
L_8036EE00:;
  c->r[30]=c->r[30]+0x00000002u; // 8036EE00
  c->r[31]=c->r[31]+0x00000001u; // 8036EE04
L_8036EE08:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8036EE08
  cmpu(c,0,c->r[31],c->r[0]); // 8036EE0C
  if (crb(c,0)) { IRQCHK(c); goto L_8036EDD4; } // 8036EE10
L_8036EE14:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8036EE14
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036EE18
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8036EE1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036EE20
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036EE24
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036EE28
  c->lr=c->r[0]; // 8036EE2C
  c->r[1]=c->r[1]+0x00000030u; // 8036EE30
  return; // 8036EE34
}

// fn_8036EE38
void f_8036EE38(Ctx* __restrict c) {
  trace_call(0x8036EE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036EE38
  c->r[0]=c->lr; // 8036EE3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036EE40
  c->r[11]=c->r[1]+0x00000030u; // 8036EE44
  c->lr=0x8036EE4Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036EE48
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 8036EE4C
  c->r[27]=c->r[3]|c->r[3]; // 8036EE50
  c->r[28]=c->r[4]|c->r[4]; // 8036EE54
  c->r[30]=0u+0x00000000u; // 8036EE58
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 8036EE5C
  c->r[29]=0u+0x00000000u; // 8036EE60
  cmps(c,0,(int32_t)c->r[31],0); // 8036EE64
  if (!crb(c,1)) { goto L_8036EF04; } // 8036EE68
  goto L_8036EEF8; // 8036EE6C
L_8036EE70:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 8036EE70
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036EE74
  cmps(c,0,(int32_t)c->r[0],0); // 8036EE78
  if (crb(c,2)) { goto L_8036EE88; } // 8036EE7C
  c->r[0]=c->r[3]+c->r[0]; // 8036EE80
  goto L_8036EE8C; // 8036EE84
L_8036EE88:;
  c->r[0]=0u+0x00000000u; // 8036EE88
L_8036EE8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8036EE8C
  if (crb(c,2)) { goto L_8036EEB8; } // 8036EE90
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 8036EE94
  c->r[3]=c->r[0]+c->r[3]; // 8036EE98
  c->r[3]=R32(c->r[3]+0x00000024u); // 8036EE9C
  cmps(c,0,(int32_t)c->r[3],0); // 8036EEA0
  if (crb(c,2)) { goto L_8036EEB0; } // 8036EEA4
  c->r[5]=c->r[0]+c->r[3]; // 8036EEA8
  goto L_8036EEBC; // 8036EEAC
L_8036EEB0:;
  c->r[5]=0u+0x00000000u; // 8036EEB0
  goto L_8036EEBC; // 8036EEB4
L_8036EEB8:;
  c->r[5]=0u+0x00000000u; // 8036EEB8
L_8036EEBC:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 8036EEBC
  c->r[3]=c->r[28]|c->r[28]; // 8036EEC0
  c->r[4]=c->r[1]+0x00000008u; // 8036EEC4
  c->r[5]=c->r[0]+c->r[5]; // 8036EEC8
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 8036EECC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036EED0
  c->lr=0x8036EED8u; f_80366154(c); // 8036EED4
  cmps(c,0,(int32_t)c->r[3],0); // 8036EED8
  if (crb(c,2)) { goto L_8036EEF4; } // 8036EEDC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8036EEE0
  c->r[30]=0u+0x00000001u; // 8036EEE4
  c->r[3]=R32(c->r[27]+0x00000014u); // 8036EEE8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8036EEEC
  W16(c->r[3]+c->r[0],c->r[29]); // 8036EEF0
L_8036EEF4:;
  c->r[29]=c->r[29]+0x00000001u; // 8036EEF4
L_8036EEF8:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 8036EEF8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 8036EEFC
  if (crb(c,0)) { IRQCHK(c); goto L_8036EE70; } // 8036EF00
L_8036EF04:;
  c->r[3]=c->r[27]|c->r[27]; // 8036EF04
  c->r[4]=0u+0x00000004u; // 8036EF08
  c->r[5]=0u+0x00000001u; // 8036EF0C
  c->lr=0x8036EF14u; f_80373CC0(c); // 8036EF10
  c->r[11]=c->r[1]+0x00000030u; // 8036EF14
  c->r[3]=c->r[30]|c->r[30]; // 8036EF18
  c->lr=0x8036EF20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036EF1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036EF20
  c->lr=c->r[0]; // 8036EF24
  c->r[1]=c->r[1]+0x00000030u; // 8036EF28
  return; // 8036EF2C
}

// fn_8036EF30
void f_8036EF30(Ctx* __restrict c) {
  trace_call(0x8036EF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036EF30
  c->r[0]=c->lr; // 8036EF34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036EF38
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8036EF3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036EF40
  c->r[31]=c->r[4]|c->r[4]; // 8036EF44
  c->r[6]=R32(c->r[3]+0x00000014u); // 8036EF48
  c->r[5]=R16(c->r[6]+c->r[0]); // 8036EF4C
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 8036EF50
  if (crb(c,2)) { goto L_8036EF68; } // 8036EF54
  c->r[0]=0u+0x00000000u; // 8036EF58
  c->r[3]=c->r[31]|c->r[31]; // 8036EF5C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8036EF60
  goto L_8036EF90; // 8036EF64
L_8036EF68:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 8036EF68
  cmps(c,0,(int32_t)c->r[6],0); // 8036EF6C
  if (crb(c,2)) { goto L_8036EF80; } // 8036EF70
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 8036EF74
  c->r[3]=c->r[6]+c->r[0]; // 8036EF78
  goto L_8036EF90; // 8036EF7C
L_8036EF80:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036EF80
  c->r[3]=c->r[3]+0x0000002Cu; // 8036EF84
  c->lr=0x8036EF8Cu; f_80369500(c); // 8036EF88
  c->r[3]=c->r[31]|c->r[31]; // 8036EF8C
L_8036EF90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036EF90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036EF94
  c->lr=c->r[0]; // 8036EF98
  c->r[1]=c->r[1]+0x00000010u; // 8036EF9C
  return; // 8036EFA0
}

// fn_8036EFA4
void f_8036EFA4(Ctx* __restrict c) {
  trace_call(0x8036EFA4u);
  c->r[5]=0u+0x00010000u; // 8036EFA4
  c->r[0]=c->r[5]+0x00000002u; // 8036EFA8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036EFAC
  if (crb(c,2)) { goto L_8036EFF0; } // 8036EFB0
  if (!crb(c,0)) { goto L_8036EFC4; } // 8036EFB4
  cmps(c,0,(int32_t)c->r[4],8); // 8036EFB8
  if (crb(c,2)) { goto L_8036EFD4; } // 8036EFBC
  return; // 8036EFC0
L_8036EFC4:;
  c->r[0]=c->r[5]+0x00000004u; // 8036EFC4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036EFC8
  if (!crb(c,0)) return; // 8036EFCC
  goto L_8036EFE4; // 8036EFD0
L_8036EFD4:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036EFD4
  c->r[12]=R32(c->r[12]+0x00000024u); // 8036EFD8
  c->ctr=c->r[12]; // 8036EFDC
  if (true) { dispatch(c,c->ctr); return; } // 8036EFE0
L_8036EFE4:;
  c->r[0]=0u+0x00000000u; // 8036EFE4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036EFE8
  return; // 8036EFEC
L_8036EFF0:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8036EFF0
  return; // 8036EFF4
}

// fn_8036EFF8
void f_8036EFF8(Ctx* __restrict c) {
  trace_call(0x8036EFF8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036EFF8
  c->r[0]=c->lr; // 8036EFFC
  W32(c->r[1]+0x00000074u,c->r[0]); // 8036F000
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8036F004
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8036F008
  c->r[11]=c->r[1]+0x00000060u; // 8036F00C
  c->lr=0x8036F014u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036F010
  c->r[6]=R32(c->r[3]+0x00000000u); // 8036F014
  c->r[31]=c->r[4]|c->r[4]; // 8036F018
  c->r[7]=R32(c->r[5]+0x00000000u); // 8036F01C
  c->r[8]=c->r[5]|c->r[5]; // 8036F020
  c->r[9]=c->r[6]|c->r[6]; // 8036F024
  c->r[4]=0u+0x0000000Fu; // 8036F028
  goto L_8036F090; // 8036F02C
L_8036F030:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 8036F030
  if (crb(c,2)) { goto L_8036F080; } // 8036F034
  c->r[3]=R32(c->r[5]+0x00000008u); // 8036F038
  c->r[0]=R32(c->r[5]+0x00000000u); // 8036F03C
  W32(c->r[6]+0x00000004u,c->r[3]); // 8036F040
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F044
  c->r[0]=c->r[0]&c->r[4]; // 8036F048
  {uint32_t ea=c->r[8]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036F04C
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[0]);} // 8036F050
  {uint32_t ea=c->r[8]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F054
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[1]);} // 8036F058
  {uint32_t ea=c->r[8]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036F05C
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 8036F060
  {uint32_t ea=c->r[8]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F064
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 8036F068
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[0]);} // 8036F06C
  c->r[3]=R32(c->r[6]+0x00000000u); // 8036F070
  c->r[3]=c->r[3]&~c->r[4]; // 8036F074
  c->r[0]=c->r[3]|c->r[0]; // 8036F078
  W32(c->r[6]+0x00000000u,c->r[0]); // 8036F07C
L_8036F080:;
  c->r[7]=rotl(c->r[7],28)&0x0FFFFFFFu; // 8036F080
  c->r[4]=rotl(c->r[4],4)&0xFFFFFFF0u; // 8036F084
  c->r[8]=c->r[8]+0x00000014u; // 8036F088
  c->r[9]=c->r[9]+0x00000014u; // 8036F08C
L_8036F090:;
  cmps(c,0,(int32_t)c->r[7],0); // 8036F090
  if (!crb(c,2)) { IRQCHK(c); goto L_8036F030; } // 8036F094
  c->r[29]=R32(c->r[5]+0x00000004u); // 8036F098
  c->r[30]=c->r[5]+0x000000ACu; // 8036F09C
  {uint32_t ea=c->r[2]+0xFFFFEA30u; c->f[31]=c->ps1[31]=RF32(ea);} // 8036F0A0
  c->r[28]=0u+0x00000008u; // 8036F0A4
  goto L_8036F1E8; // 8036F0A8
L_8036F0AC:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 8036F0AC
  if (crb(c,2)) { goto L_8036F1DC; } // 8036F0B0
  c->r[5]=c->r[30]|c->r[30]; // 8036F0B4
  c->r[3]=c->r[1]+0x00000010u; // 8036F0B8
  c->r[6]=rotl(c->r[29],0)&0x0000000Fu; // 8036F0BC
  c->r[4]=0u+0x00000001u; // 8036F0C0
  c->r[7]=0u+0x00000000u; // 8036F0C4
  c->lr=0x8036F0CCu; f_8037A4F8(c); // 8036F0C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F0CC
  c->f[1]=std::fabs(c->f[0]); // 8036F0D0
  fcmp(c,0,c->f[31],c->f[1]); // 8036F0D4
  if (!crb(c,0)) { goto L_8036F0E0; } // 8036F0D8
  goto L_8036F0E4; // 8036F0DC
L_8036F0E0:;
  c->f[1]=c->f[31]; // 8036F0E0
L_8036F0E4:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F0E4
  c->f[2]=std::fabs(c->f[0]); // 8036F0E8
  fcmp(c,0,c->f[1],c->f[2]); // 8036F0EC
  if (!crb(c,0)) { goto L_8036F0F8; } // 8036F0F0
  goto L_8036F0FC; // 8036F0F4
L_8036F0F8:;
  c->f[2]=c->f[1]; // 8036F0F8
L_8036F0FC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F0FC
  c->f[1]=std::fabs(c->f[0]); // 8036F100
  fcmp(c,0,c->f[2],c->f[1]); // 8036F104
  if (!crb(c,0)) { goto L_8036F110; } // 8036F108
  goto L_8036F114; // 8036F10C
L_8036F110:;
  c->f[1]=c->f[2]; // 8036F110
L_8036F114:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F114
  c->f[2]=std::fabs(c->f[0]); // 8036F118
  fcmp(c,0,c->f[1],c->f[2]); // 8036F11C
  if (!crb(c,0)) { goto L_8036F128; } // 8036F120
  goto L_8036F12C; // 8036F124
L_8036F128:;
  c->f[2]=c->f[1]; // 8036F128
L_8036F12C:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F12C
  c->f[1]=std::fabs(c->f[0]); // 8036F130
  fcmp(c,0,c->f[2],c->f[1]); // 8036F134
  if (!crb(c,0)) { goto L_8036F140; } // 8036F138
  goto L_8036F144; // 8036F13C
L_8036F140:;
  c->f[1]=c->f[2]; // 8036F140
L_8036F144:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F144
  c->f[0]=std::fabs(c->f[0]); // 8036F148
  fcmp(c,0,c->f[1],c->f[0]); // 8036F14C
  if (!crb(c,0)) { goto L_8036F158; } // 8036F150
  goto L_8036F15C; // 8036F154
L_8036F158:;
  c->f[0]=c->f[1]; // 8036F158
L_8036F15C:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8036F15C
  {uint32_t ea=c->r[2]+0xFFFFEA38u; c->f[1]=RF64(ea);} // 8036F160
  c->r[0]=R32(c->r[1]+0x00000008u); // 8036F164
  c->r[3]=rotl(c->r[0],9)&0x000000FFu; // 8036F168
  c->r[0]=c->r[3]+0xFFFFFF82u; // 8036F16C
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8036F170
  c->r[3]=0u-c->r[27]; // 8036F174
  c->lr=0x8036F17Cu; f_8029C0D8(c); // 8036F178
  c->f[6]=c->ps1[6]=S(c->f[1]); // 8036F17C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036F180
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F184
  c->r[3]=c->r[31]|c->r[31]; // 8036F188
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8036F18C
  c->r[6]=c->r[27]|c->r[27]; // 8036F190
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[6]); // 8036F194
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8036F198
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[6]); // 8036F19C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036F1A0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8036F1A4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[6]); // 8036F1A8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[6]); // 8036F1AC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 8036F1B0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 8036F1B4
  c->r[4]=c->r[28]+0xFFFFFFF9u; // 8036F1B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 8036F1BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 8036F1C0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 8036F1C4
  c->r[5]=c->r[1]+0x00000010u; // 8036F1C8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 8036F1CC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8036F1D0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8036F1D4
  c->lr=0x8036F1DCu; f_80367DB8(c); // 8036F1D8
L_8036F1DC:;
  c->r[29]=rotl(c->r[29],28)&0x0FFFFFFFu; // 8036F1DC
  c->r[30]=c->r[30]+0x00000014u; // 8036F1E0
  c->r[28]=c->r[28]+0x00000001u; // 8036F1E4
L_8036F1E8:;
  cmps(c,0,(int32_t)c->r[29],0); // 8036F1E8
  if (!crb(c,2)) { IRQCHK(c); goto L_8036F0AC; } // 8036F1EC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8036F1F0
  c->r[11]=c->r[1]+0x00000060u; // 8036F1F4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8036F1F8
  c->lr=0x8036F200u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036F1FC
  c->r[0]=R32(c->r[1]+0x00000074u); // 8036F200
  c->lr=c->r[0]; // 8036F204
  c->r[1]=c->r[1]+0x00000070u; // 8036F208
  return; // 8036F20C
}

// fn_8036F210
void f_8036F210(Ctx* __restrict c) {
  trace_call(0x8036F210u);
  c->r[3]=0u+0x803F0000u; // 8036F210
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036F214
  c->r[3]=c->r[3]+0xFFFFDFC8u; // 8036F218
  cmpu(c,0,c->r[0],c->r[3]); // 8036F21C
  if (!crb(c,2)) { goto L_8036F22C; } // 8036F220
  c->r[3]=0u+0x00000001u; // 8036F224
  return; // 8036F228
L_8036F22C:;
  c->r[3]=0u+0x803F0000u; // 8036F22C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036F230
  c->r[3]=c->r[3]+0xFFFFDFB0u; // 8036F234
  cmpu(c,0,c->r[0],c->r[3]); // 8036F238
  if (!crb(c,2)) { goto L_8036F248; } // 8036F23C
  c->r[3]=0u+0x00000001u; // 8036F240
  return; // 8036F244
L_8036F248:;
  c->r[3]=0u+0x803F0000u; // 8036F248
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8036F24C
  cmpu(c,0,c->r[0],c->r[3]); // 8036F250
  if (!crb(c,2)) { goto L_8036F260; } // 8036F254
  c->r[3]=0u+0x00000001u; // 8036F258
  return; // 8036F25C
L_8036F260:;
  c->r[3]=0u+0x803F0000u; // 8036F260
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 8036F264
  c->r[0]=c->r[3]-c->r[0]; // 8036F268
  c->r[0]=cntlz(c->r[0]); // 8036F26C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036F270
  return; // 8036F274
}

// fn_8036F278
void f_8036F278(Ctx* __restrict c) {
  trace_call(0x8036F278u);
  c->r[3]=0u+0x803F0000u; // 8036F278
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036F27C
  c->r[3]=c->r[3]+0xFFFFDFB0u; // 8036F280
  cmpu(c,0,c->r[0],c->r[3]); // 8036F284
  if (!crb(c,2)) { goto L_8036F294; } // 8036F288
  c->r[3]=0u+0x00000001u; // 8036F28C
  return; // 8036F290
L_8036F294:;
  c->r[3]=0u+0x803F0000u; // 8036F294
  c->r[0]=R32(c->r[4]+0x00000000u); // 8036F298
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8036F29C
  cmpu(c,0,c->r[0],c->r[3]); // 8036F2A0
  if (!crb(c,2)) { goto L_8036F2B0; } // 8036F2A4
  c->r[3]=0u+0x00000001u; // 8036F2A8
  return; // 8036F2AC
L_8036F2B0:;
  c->r[3]=0u+0x803F0000u; // 8036F2B0
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 8036F2B4
  c->r[0]=c->r[3]-c->r[0]; // 8036F2B8
  c->r[0]=cntlz(c->r[0]); // 8036F2BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036F2C0
  return; // 8036F2C4
}

// fn_8036F2C8
void f_8036F2C8(Ctx* __restrict c) {
  trace_call(0x8036F2C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F2C8
  c->r[0]=c->lr; // 8036F2CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036F2D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036F2D4
  c->r[12]=R32(c->r[12]+0x00000014u); // 8036F2D8
  c->ctr=c->r[12]; // 8036F2DC
  if (true) { c->lr=0x8036F2E4u; dispatch(c,c->ctr); } // 8036F2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036F2E4
  c->r[3]=c->r[3]+0x00000004u; // 8036F2E8
  c->lr=c->r[0]; // 8036F2EC
  c->r[1]=c->r[1]+0x00000010u; // 8036F2F0
  return; // 8036F2F4
}

// fn_8036F2F8
void f_8036F2F8(Ctx* __restrict c) {
  trace_call(0x8036F2F8u);
  c->r[3]=0u+0x803F0000u; // 8036F2F8
  c->r[3]=c->r[3]+0xFFFFDFC8u; // 8036F2FC
  return; // 8036F300
}

// fn_8036F304
void f_8036F304(Ctx* __restrict c) {
  trace_call(0x8036F304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F304
  c->r[0]=c->lr; // 8036F308
  cmps(c,0,(int32_t)c->r[3],0); // 8036F30C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036F310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036F314
  c->r[31]=c->r[3]|c->r[3]; // 8036F318
  if (crb(c,2)) { goto L_8036F330; } // 8036F31C
  if (crb(c,2)) { goto L_8036F330; } // 8036F320
  if (crb(c,2)) { goto L_8036F330; } // 8036F324
  c->r[4]=0u+0x00000000u; // 8036F328
  c->lr=0x8036F330u; f_80373AF0(c); // 8036F32C
L_8036F330:;
  c->r[3]=c->r[31]|c->r[31]; // 8036F330
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036F334
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036F338
  c->lr=c->r[0]; // 8036F33C
  c->r[1]=c->r[1]+0x00000010u; // 8036F340
  return; // 8036F344
}

// fn_8036F348
void f_8036F348(Ctx* __restrict c) {
  trace_call(0x8036F348u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F348
  c->r[0]=c->lr; // 8036F34C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036F350
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036F354
  c->r[12]=R32(c->r[12]+0x00000014u); // 8036F358
  c->ctr=c->r[12]; // 8036F35C
  if (true) { c->lr=0x8036F364u; dispatch(c,c->ctr); } // 8036F360
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036F364
  c->r[3]=c->r[3]+0x00000004u; // 8036F368
  c->lr=c->r[0]; // 8036F36C
  c->r[1]=c->r[1]+0x00000010u; // 8036F370
  return; // 8036F374
}

// fn_8036F378
void f_8036F378(Ctx* __restrict c) {
  trace_call(0x8036F378u);
  c->r[3]=0u+0x803F0000u; // 8036F378
  c->r[3]=c->r[3]+0xFFFFDFB0u; // 8036F37C
  return; // 8036F380
}

// fn_8036F384
void f_8036F384(Ctx* __restrict c) {
  trace_call(0x8036F384u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8036F384
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8036F388
  c->r[0]=R16(c->r[3]+c->r[0]); // 8036F38C
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 8036F390
  c->r[0]=cntlz(c->r[0]); // 8036F394
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8036F398
  return; // 8036F39C
}

// fn_8036F3A0
void f_8036F3A0(Ctx* __restrict c) {
  trace_call(0x8036F3A0u);
  c->r[4]=0u+0x00010000u; // 8036F3A0
  c->r[7]=0u+0x00000000u; // 8036F3A4
  c->r[5]=c->r[4]+0xFFFF8000u; // 8036F3A8
  c->r[6]=0u+0x00000000u; // 8036F3AC
  goto L_8036F3C4; // 8036F3B0
L_8036F3B4:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 8036F3B4
  c->r[7]=c->r[7]+0x00000001u; // 8036F3B8
  W16(c->r[4]+c->r[6],c->r[5]); // 8036F3BC
  c->r[6]=c->r[6]+0x00000002u; // 8036F3C0
L_8036F3C4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 8036F3C4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8036F3C8
  if (crb(c,0)) { IRQCHK(c); goto L_8036F3B4; } // 8036F3CC
  c->r[4]=0u+0x00000004u; // 8036F3D0
  c->r[5]=0u+0x00000000u; // 8036F3D4
  f_80373CC0(c); return; // 8036F3D8
}

// fn_8036F3DC
void f_8036F3DC(Ctx* __restrict c) {
  trace_call(0x8036F3DCu);
  c->r[3]=0u+0x00000000u; // 8036F3DC
  return; // 8036F3E0
}

// fn_8036F3E4
void f_8036F3E4(Ctx* __restrict c) {
  trace_call(0x8036F3E4u);
  c->r[3]=0u+0x00000000u; // 8036F3E4
  return; // 8036F3E8
}

// fn_8036F3EC
void f_8036F3EC(Ctx* __restrict c) {
  trace_call(0x8036F3ECu);
  return; // 8036F3EC
}

// fn_8036F3F0
void f_8036F3F0(Ctx* __restrict c) {
  trace_call(0x8036F3F0u);
  {uint32_t ea=c->r[2]+0xFFFFEA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036F3F0
  return; // 8036F3F4
}

// fn_8036F3F8
void f_8036F3F8(Ctx* __restrict c) {
  trace_call(0x8036F3F8u);
  return; // 8036F3F8
}

// fn_8036F3FC
void f_8036F3FC(Ctx* __restrict c) {
  trace_call(0x8036F3FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F3FC
  c->r[0]=c->lr; // 8036F400
  cmps(c,0,(int32_t)c->r[3],0); // 8036F404
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036F408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036F40C
  c->r[31]=c->r[3]|c->r[3]; // 8036F410
  if (crb(c,2)) { goto L_8036F424; } // 8036F414
  if (crb(c,2)) { goto L_8036F424; } // 8036F418
  c->r[4]=0u+0x00000000u; // 8036F41C
  c->lr=0x8036F424u; f_80373AF0(c); // 8036F420
L_8036F424:;
  c->r[3]=c->r[31]|c->r[31]; // 8036F424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036F428
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036F42C
  c->lr=c->r[0]; // 8036F430
  c->r[1]=c->r[1]+0x00000010u; // 8036F434
  return; // 8036F438
}

// fn_8036F43C
void f_8036F43C(Ctx* __restrict c) {
  trace_call(0x8036F43Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F43C
  c->r[0]=c->lr; // 8036F440
  cmps(c,0,(int32_t)c->r[3],0); // 8036F444
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036F448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036F44C
  c->r[31]=c->r[3]|c->r[3]; // 8036F450
  if (crb(c,2)) { goto L_8036F488; } // 8036F454
  c->r[12]=0u+0x80430000u; // 8036F458
  c->r[12]=c->r[12]+0x00004BA8u; // 8036F45C
  W32(c->r[3]+0x00000000u,c->r[12]); // 8036F460
  c->r[12]=R32(c->r[12]+0x00000044u); // 8036F464
  c->ctr=c->r[12]; // 8036F468
  if (true) { c->lr=0x8036F470u; dispatch(c,c->ctr); } // 8036F46C
  cmps(c,0,(int32_t)c->r[31],0); // 8036F470
  if (crb(c,2)) { goto L_8036F488; } // 8036F474
  if (crb(c,2)) { goto L_8036F488; } // 8036F478
  c->r[3]=c->r[31]|c->r[31]; // 8036F47C
  c->r[4]=0u+0x00000000u; // 8036F480
  c->lr=0x8036F488u; f_80373AF0(c); // 8036F484
L_8036F488:;
  c->r[3]=c->r[31]|c->r[31]; // 8036F488
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036F48C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036F490
  c->lr=c->r[0]; // 8036F494
  c->r[1]=c->r[1]+0x00000010u; // 8036F498
  return; // 8036F49C
}

// fn_8036F4A0
void f_8036F4A0(Ctx* __restrict c) {
  trace_call(0x8036F4A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F4A0
  c->r[0]=c->lr; // 8036F4A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036F4A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036F4AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036F4B0
  c->r[30]=c->r[5]|c->r[5]; // 8036F4B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036F4B8
  c->r[29]=c->r[4]|c->r[4]; // 8036F4BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8036F4C0
  c->r[28]=c->r[3]|c->r[3]; // 8036F4C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036F4C8
  c->r[12]=R32(c->r[12]+0x00000040u); // 8036F4CC
  c->ctr=c->r[12]; // 8036F4D0
  if (true) { c->lr=0x8036F4D8u; dispatch(c,c->ctr); } // 8036F4D4
  c->r[31]=c->r[3]|c->r[3]; // 8036F4D8
  c->r[6]=0u+0x00000000u; // 8036F4DC
  c->r[7]=0u+0x00000000u; // 8036F4E0
  c->r[5]=0u+0x00000000u; // 8036F4E4
  c->r[4]=0u+0x00000000u; // 8036F4E8
  goto L_8036F514; // 8036F4EC
L_8036F4F0:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8036F4F0
  c->r[0]=R16(c->r[3]+c->r[5]); // 8036F4F4
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8036F4F8
  if (!crb(c,2)) { goto L_8036F50C; } // 8036F4FC
  c->r[3]=R32(c->r[28]+0x00000014u); // 8036F500
  c->r[6]=0u+0x00000001u; // 8036F504
  W16(c->r[3]+c->r[5],c->r[4]); // 8036F508
L_8036F50C:;
  c->r[5]=c->r[5]+0x00000002u; // 8036F50C
  c->r[7]=c->r[7]+0x00000001u; // 8036F510
L_8036F514:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 8036F514
  cmpu(c,0,c->r[7],c->r[0]); // 8036F518
  if (crb(c,0)) { IRQCHK(c); goto L_8036F4F0; } // 8036F51C
  cmps(c,0,(int32_t)c->r[6],0); // 8036F520
  if (crb(c,2)) { goto L_8036F538; } // 8036F524
  c->r[3]=c->r[28]|c->r[28]; // 8036F528
  c->r[4]=0u+0x00000004u; // 8036F52C
  c->r[5]=0u+0x00000001u; // 8036F530
  c->lr=0x8036F538u; f_80373CC0(c); // 8036F534
L_8036F538:;
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 8036F538
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8036F53C
  c->r[4]=0u+0x00010000u; // 8036F540
  c->r[3]=c->r[30]|c->r[30]; // 8036F544
  W32(c->r[5]+c->r[0],c->r[30]); // 8036F548
  c->r[6]=c->r[28]|c->r[28]; // 8036F54C
  c->r[4]=c->r[4]+0x00000002u; // 8036F550
  c->r[5]=0u+0x00000000u; // 8036F554
  c->r[12]=R32(c->r[30]+0x00000000u); // 8036F558
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8036F55C
  c->ctr=c->r[12]; // 8036F560
  if (true) { c->lr=0x8036F568u; dispatch(c,c->ctr); } // 8036F564
  c->r[3]=c->r[31]|c->r[31]; // 8036F568
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036F56C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036F570
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036F574
  c->r[28]=R32(c->r[1]+0x00000010u); // 8036F578
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036F57C
  c->lr=c->r[0]; // 8036F580
  c->r[1]=c->r[1]+0x00000020u; // 8036F584
  return; // 8036F588
}

// fn_8036F58C
void f_8036F58C(Ctx* __restrict c) {
  trace_call(0x8036F58Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F58C
  c->r[0]=c->lr; // 8036F590
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036F594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036F598
  c->r[31]=c->r[3]|c->r[3]; // 8036F59C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036F5A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036F5A4
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8036F5A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8036F5AC
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 8036F5B0
  c->r[28]=R32(c->r[5]+c->r[29]); // 8036F5B4
  cmps(c,0,(int32_t)c->r[28],0); // 8036F5B8
  if (crb(c,2)) { goto L_8036F680; } // 8036F5BC
  c->r[12]=R32(c->r[28]+0x00000000u); // 8036F5C0
  c->r[30]=0u+0x00010000u; // 8036F5C4
  c->r[3]=c->r[28]|c->r[28]; // 8036F5C8
  c->r[6]=c->r[31]|c->r[31]; // 8036F5CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8036F5D0
  c->r[4]=c->r[30]+0x00000003u; // 8036F5D4
  c->r[5]=0u+0x00000000u; // 8036F5D8
  c->ctr=c->r[12]; // 8036F5DC
  if (true) { c->lr=0x8036F5E4u; dispatch(c,c->ctr); } // 8036F5E0
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8036F5E4
  c->r[0]=0u+0x00000000u; // 8036F5E8
  c->r[6]=0u+0x00000000u; // 8036F5EC
  c->r[7]=0u+0x00000000u; // 8036F5F0
  W32(c->r[3]+c->r[29],c->r[0]); // 8036F5F4
  c->r[4]=0u+0x00000000u; // 8036F5F8
  goto L_8036F65C; // 8036F5FC
L_8036F600:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 8036F600
  c->r[8]=c->r[30]+0xFFFF8000u; // 8036F604
  c->r[5]=0u+0x00000000u; // 8036F608
  c->ctr=c->r[0]; // 8036F60C
  cmps(c,0,(int32_t)c->r[0],0); // 8036F610
  if (!crb(c,1)) { goto L_8036F64C; } // 8036F614
L_8036F618:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8036F618
  c->r[3]=R32(c->r[3]+c->r[5]); // 8036F61C
  cmps(c,0,(int32_t)c->r[3],0); // 8036F620
  if (crb(c,2)) { goto L_8036F644; } // 8036F624
  c->r[0]=R32(c->r[3]+0x00000014u); // 8036F628
  c->r[0]=R16(c->r[4]+c->r[0]); // 8036F62C
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8036F630
  if (!crb(c,2)) { goto L_8036F644; } // 8036F634
  c->r[6]=0u+0x00000001u; // 8036F638
  c->r[8]=0u+0x00000000u; // 8036F63C
  goto L_8036F64C; // 8036F640
L_8036F644:;
  c->r[5]=c->r[5]+0x00000004u; // 8036F644
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8036F618; } // 8036F648
L_8036F64C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8036F64C
  c->r[7]=c->r[7]+0x00000001u; // 8036F650
  W16(c->r[3]+c->r[4],c->r[8]); // 8036F654
  c->r[4]=c->r[4]+0x00000002u; // 8036F658
L_8036F65C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8036F65C
  cmpu(c,0,c->r[7],c->r[0]); // 8036F660
  if (crb(c,0)) { IRQCHK(c); goto L_8036F600; } // 8036F664
  cmps(c,0,(int32_t)c->r[6],0); // 8036F668
  if (!crb(c,2)) { goto L_8036F680; } // 8036F66C
  c->r[3]=c->r[31]|c->r[31]; // 8036F670
  c->r[4]=0u+0x00000004u; // 8036F674
  c->r[5]=0u+0x00000000u; // 8036F678
  c->lr=0x8036F680u; f_80373CC0(c); // 8036F67C
L_8036F680:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036F680
  c->r[3]=c->r[28]|c->r[28]; // 8036F684
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036F688
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036F68C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8036F690
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036F694
  c->lr=c->r[0]; // 8036F698
  c->r[1]=c->r[1]+0x00000020u; // 8036F69C
  return; // 8036F6A0
}

// fn_8036F6A4
void f_8036F6A4(Ctx* __restrict c) {
  trace_call(0x8036F6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F6A4
  c->r[0]=c->lr; // 8036F6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8036F6AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8036F6B0
  c->r[31]=0u+0x00000000u; // 8036F6B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8036F6B8
  c->r[30]=c->r[3]|c->r[3]; // 8036F6BC
  goto L_8036F6E0; // 8036F6C0
L_8036F6C4:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8036F6C4
  c->r[3]=c->r[30]|c->r[30]; // 8036F6C8
  c->r[4]=c->r[31]|c->r[31]; // 8036F6CC
  c->r[12]=R32(c->r[12]+0x00000040u); // 8036F6D0
  c->ctr=c->r[12]; // 8036F6D4
  if (true) { c->lr=0x8036F6DCu; dispatch(c,c->ctr); } // 8036F6D8
  c->r[31]=c->r[31]+0x00000001u; // 8036F6DC
L_8036F6E0:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 8036F6E0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8036F6E4
  if (crb(c,0)) { IRQCHK(c); goto L_8036F6C4; } // 8036F6E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8036F6EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8036F6F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8036F6F4
  c->lr=c->r[0]; // 8036F6F8
  c->r[1]=c->r[1]+0x00000010u; // 8036F6FC
  return; // 8036F700
}

// fn_8036F704
void f_8036F704(Ctx* __restrict c) {
  trace_call(0x8036F704u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F704
  c->r[0]=c->lr; // 8036F708
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036F70C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036F710
  c->r[31]=0u+0x00000000u; // 8036F714
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036F718
  c->r[30]=0u+0x00000000u; // 8036F71C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036F720
  c->r[29]=c->r[3]|c->r[3]; // 8036F724
  goto L_8036F754; // 8036F728
L_8036F72C:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8036F72C
  c->r[3]=R32(c->r[3]+c->r[31]); // 8036F730
  cmps(c,0,(int32_t)c->r[3],0); // 8036F734
  if (crb(c,2)) { goto L_8036F74C; } // 8036F738
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036F73C
  c->r[12]=R32(c->r[12]+0x00000024u); // 8036F740
  c->ctr=c->r[12]; // 8036F744
  if (true) { c->lr=0x8036F74Cu; dispatch(c,c->ctr); } // 8036F748
L_8036F74C:;
  c->r[31]=c->r[31]+0x00000004u; // 8036F74C
  c->r[30]=c->r[30]+0x00000001u; // 8036F750
L_8036F754:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 8036F754
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8036F758
  if (crb(c,0)) { IRQCHK(c); goto L_8036F72C; } // 8036F75C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036F760
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036F764
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036F768
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036F76C
  c->lr=c->r[0]; // 8036F770
  c->r[1]=c->r[1]+0x00000020u; // 8036F774
  return; // 8036F778
}

// fn_8036F77C
void f_8036F77C(Ctx* __restrict c) {
  trace_call(0x8036F77Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F77C
  c->r[0]=c->lr; // 8036F780
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036F784
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8036F788
  c->f[31]=c->f[1]; // 8036F78C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8036F790
  c->r[31]=0u+0x00000000u; // 8036F794
  W32(c->r[1]+0x00000010u,c->r[30]); // 8036F798
  c->r[30]=0u+0x00000000u; // 8036F79C
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8036F7A0
  c->r[29]=c->r[3]|c->r[3]; // 8036F7A4
  goto L_8036F7D8; // 8036F7A8
L_8036F7AC:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8036F7AC
  c->r[3]=R32(c->r[3]+c->r[31]); // 8036F7B0
  cmps(c,0,(int32_t)c->r[3],0); // 8036F7B4
  if (crb(c,2)) { goto L_8036F7D0; } // 8036F7B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036F7BC
  c->f[1]=c->f[31]; // 8036F7C0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8036F7C4
  c->ctr=c->r[12]; // 8036F7C8
  if (true) { c->lr=0x8036F7D0u; dispatch(c,c->ctr); } // 8036F7CC
L_8036F7D0:;
  c->r[31]=c->r[31]+0x00000004u; // 8036F7D0
  c->r[30]=c->r[30]+0x00000001u; // 8036F7D4
L_8036F7D8:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 8036F7D8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8036F7DC
  if (crb(c,0)) { IRQCHK(c); goto L_8036F7AC; } // 8036F7E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036F7E4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8036F7E8
  c->r[31]=R32(c->r[1]+0x00000014u); // 8036F7EC
  c->r[30]=R32(c->r[1]+0x00000010u); // 8036F7F0
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 8036F7F4
  c->lr=c->r[0]; // 8036F7F8
  c->r[1]=c->r[1]+0x00000020u; // 8036F7FC
  return; // 8036F800
}

// fn_8036F804
void f_8036F804(Ctx* __restrict c) {
  trace_call(0x8036F804u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 8036F804
  c->r[6]=0u+0x00000000u; // 8036F808
  c->r[5]=0u+0x00000000u; // 8036F80C
  c->ctr=c->r[0]; // 8036F810
  cmps(c,0,(int32_t)c->r[0],0); // 8036F814
  if (!crb(c,1)) { goto L_8036F850; } // 8036F818
L_8036F81C:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8036F81C
  c->r[0]=R32(c->r[4]+c->r[5]); // 8036F820
  cmps(c,0,(int32_t)c->r[0],0); // 8036F824
  if (crb(c,2)) { goto L_8036F844; } // 8036F828
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8036F82C
  c->r[3]=R32(c->r[4]+c->r[0]); // 8036F830
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036F834
  c->r[12]=R32(c->r[12]+0x00000020u); // 8036F838
  c->ctr=c->r[12]; // 8036F83C
  if (true) { dispatch(c,c->ctr); return; } // 8036F840
L_8036F844:;
  c->r[5]=c->r[5]+0x00000004u; // 8036F844
  c->r[6]=c->r[6]+0x00000001u; // 8036F848
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8036F81C; } // 8036F84C
L_8036F850:;
  {uint32_t ea=c->r[2]+0xFFFFEA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036F850
  return; // 8036F854
}

// fn_8036F858
void f_8036F858(Ctx* __restrict c) {
  trace_call(0x8036F858u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F858
  c->r[0]=c->lr; // 8036F85C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036F860
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8036F864
  c->f[31]=c->f[1]; // 8036F868
  W32(c->r[1]+0x00000014u,c->r[31]); // 8036F86C
  c->r[31]=0u+0x00000000u; // 8036F870
  W32(c->r[1]+0x00000010u,c->r[30]); // 8036F874
  c->r[30]=0u+0x00000000u; // 8036F878
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8036F87C
  c->r[29]=c->r[3]|c->r[3]; // 8036F880
  goto L_8036F8B4; // 8036F884
L_8036F888:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8036F888
  c->r[3]=R32(c->r[3]+c->r[31]); // 8036F88C
  cmps(c,0,(int32_t)c->r[3],0); // 8036F890
  if (crb(c,2)) { goto L_8036F8AC; } // 8036F894
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036F898
  c->f[1]=c->f[31]; // 8036F89C
  c->r[12]=R32(c->r[12]+0x00000028u); // 8036F8A0
  c->ctr=c->r[12]; // 8036F8A4
  if (true) { c->lr=0x8036F8ACu; dispatch(c,c->ctr); } // 8036F8A8
L_8036F8AC:;
  c->r[31]=c->r[31]+0x00000004u; // 8036F8AC
  c->r[30]=c->r[30]+0x00000001u; // 8036F8B0
L_8036F8B4:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 8036F8B4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8036F8B8
  if (crb(c,0)) { IRQCHK(c); goto L_8036F888; } // 8036F8BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036F8C0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8036F8C4
  c->r[31]=R32(c->r[1]+0x00000014u); // 8036F8C8
  c->r[30]=R32(c->r[1]+0x00000010u); // 8036F8CC
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 8036F8D0
  c->lr=c->r[0]; // 8036F8D4
  c->r[1]=c->r[1]+0x00000020u; // 8036F8D8
  return; // 8036F8DC
}

// fn_8036F8E0
void f_8036F8E0(Ctx* __restrict c) {
  trace_call(0x8036F8E0u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 8036F8E0
  c->r[6]=0u+0x00000000u; // 8036F8E4
  c->r[5]=0u+0x00000000u; // 8036F8E8
  c->ctr=c->r[0]; // 8036F8EC
  cmps(c,0,(int32_t)c->r[0],0); // 8036F8F0
  if (!crb(c,1)) { goto L_8036F92C; } // 8036F8F4
L_8036F8F8:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8036F8F8
  c->r[0]=R32(c->r[4]+c->r[5]); // 8036F8FC
  cmps(c,0,(int32_t)c->r[0],0); // 8036F900
  if (crb(c,2)) { goto L_8036F920; } // 8036F904
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8036F908
  c->r[3]=R32(c->r[4]+c->r[0]); // 8036F90C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036F910
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8036F914
  c->ctr=c->r[12]; // 8036F918
  if (true) { dispatch(c,c->ctr); return; } // 8036F91C
L_8036F920:;
  c->r[5]=c->r[5]+0x00000004u; // 8036F920
  c->r[6]=c->r[6]+0x00000001u; // 8036F924
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8036F8F8; } // 8036F928
L_8036F92C:;
  {uint32_t ea=c->r[2]+0xFFFFEA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 8036F92C
  return; // 8036F930
}

// fn_8036F934
void f_8036F934(Ctx* __restrict c) {
  trace_call(0x8036F934u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036F934
  c->r[0]=c->lr; // 8036F938
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036F93C
  c->r[11]=c->r[1]+0x00000030u; // 8036F940
  c->lr=0x8036F948u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036F944
  c->r[25]=c->r[3]|c->r[3]; // 8036F948
  c->r[26]=c->r[4]|c->r[4]; // 8036F94C
  c->r[29]=0u+0x00000000u; // 8036F950
  c->r[28]=0u+0x00000000u; // 8036F954
  c->r[30]=0u+0x00000000u; // 8036F958
  c->r[31]=0u+0x00000000u; // 8036F95C
  goto L_8036F9EC; // 8036F960
L_8036F964:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 8036F964
  c->r[27]=R32(c->r[3]+c->r[30]); // 8036F968
  cmps(c,0,(int32_t)c->r[27],0); // 8036F96C
  if (crb(c,2)) { goto L_8036F9E4; } // 8036F970
  c->r[0]=R32(c->r[26]+0x00000000u); // 8036F974
  c->r[3]=c->r[27]|c->r[27]; // 8036F978
  c->r[4]=c->r[1]+0x00000008u; // 8036F97C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036F980
  c->r[12]=R32(c->r[27]+0x00000000u); // 8036F984
  c->r[12]=R32(c->r[12]+0x00000030u); // 8036F988
  c->ctr=c->r[12]; // 8036F98C
  if (true) { c->lr=0x8036F994u; dispatch(c,c->ctr); } // 8036F990
  cmps(c,0,(int32_t)c->r[29],0); // 8036F994
  c->r[29]=0u+0x00000000u; // 8036F998
  if (!crb(c,2)) { goto L_8036F9A8; } // 8036F99C
  cmps(c,0,(int32_t)c->r[3],0); // 8036F9A0
  if (crb(c,2)) { goto L_8036F9AC; } // 8036F9A4
L_8036F9A8:;
  c->r[29]=0u+0x00000001u; // 8036F9A8
L_8036F9AC:;
  c->r[5]=0u+0x00000000u; // 8036F9AC
  c->r[4]=0u+0x00000000u; // 8036F9B0
  goto L_8036F9D8; // 8036F9B4
L_8036F9B8:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 8036F9B8
  c->r[0]=R16(c->r[3]+c->r[4]); // 8036F9BC
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8036F9C0
  if (!crb(c,2)) { goto L_8036F9D0; } // 8036F9C4
  c->r[3]=R32(c->r[25]+0x00000014u); // 8036F9C8
  W16(c->r[3]+c->r[4],c->r[31]); // 8036F9CC
L_8036F9D0:;
  c->r[4]=c->r[4]+0x00000002u; // 8036F9D0
  c->r[5]=c->r[5]+0x00000001u; // 8036F9D4
L_8036F9D8:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 8036F9D8
  cmpu(c,0,c->r[5],c->r[0]); // 8036F9DC
  if (crb(c,0)) { IRQCHK(c); goto L_8036F9B8; } // 8036F9E0
L_8036F9E4:;
  c->r[30]=c->r[30]+0x00000004u; // 8036F9E4
  c->r[28]=c->r[28]+0x00000001u; // 8036F9E8
L_8036F9EC:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 8036F9EC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8036F9F0
  if (crb(c,0)) { IRQCHK(c); goto L_8036F964; } // 8036F9F4
  c->r[3]=c->r[25]|c->r[25]; // 8036F9F8
  c->r[4]=0u+0x00000004u; // 8036F9FC
  c->r[5]=0u+0x00000001u; // 8036FA00
  c->lr=0x8036FA08u; f_80373CC0(c); // 8036FA04
  c->r[11]=c->r[1]+0x00000030u; // 8036FA08
  c->r[3]=c->r[29]|c->r[29]; // 8036FA0C
  c->lr=0x8036FA14u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036FA10
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036FA14
  c->lr=c->r[0]; // 8036FA18
  c->r[1]=c->r[1]+0x00000030u; // 8036FA1C
  return; // 8036FA20
}

// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_8036FA24(Ctx* __restrict c) {
  trace_call(0x8036FA24u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036FA24
  c->r[0]=c->lr; // 8036FA28
  W32(c->r[1]+0x00000044u,c->r[0]); // 8036FA2C
  c->r[11]=c->r[1]+0x00000040u; // 8036FA30
  c->lr=0x8036FA38u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036FA34
  c->r[28]=c->r[3]|c->r[3]; // 8036FA38
  c->r[29]=c->r[4]|c->r[4]; // 8036FA3C
  c->r[30]=c->r[5]|c->r[5]; // 8036FA40
  c->r[31]=c->r[6]|c->r[6]; // 8036FA44
  c->r[25]=0u+0x00000000u; // 8036FA48
  c->r[24]=0u+0x00000000u; // 8036FA4C
  c->r[26]=0u+0x00000000u; // 8036FA50
  c->r[27]=0u+0x00000000u; // 8036FA54
  goto L_8036FAEC; // 8036FA58
L_8036FA5C:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 8036FA5C
  c->r[23]=R32(c->r[3]+c->r[26]); // 8036FA60
  cmps(c,0,(int32_t)c->r[23],0); // 8036FA64
  if (crb(c,2)) { goto L_8036FAE4; } // 8036FA68
  c->r[0]=R32(c->r[29]+0x00000000u); // 8036FA6C
  c->r[3]=c->r[23]|c->r[23]; // 8036FA70
  c->r[5]=c->r[30]|c->r[30]; // 8036FA74
  c->r[6]=c->r[31]|c->r[31]; // 8036FA78
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036FA7C
  c->r[4]=c->r[1]+0x00000008u; // 8036FA80
  c->r[12]=R32(c->r[23]+0x00000000u); // 8036FA84
  c->r[12]=R32(c->r[12]+0x00000050u); // 8036FA88
  c->ctr=c->r[12]; // 8036FA8C
  if (true) { c->lr=0x8036FA94u; dispatch(c,c->ctr); } // 8036FA90
  cmps(c,0,(int32_t)c->r[25],0); // 8036FA94
  c->r[25]=0u+0x00000000u; // 8036FA98
  if (!crb(c,2)) { goto L_8036FAA8; } // 8036FA9C
  cmps(c,0,(int32_t)c->r[3],0); // 8036FAA0
  if (crb(c,2)) { goto L_8036FAAC; } // 8036FAA4
L_8036FAA8:;
  c->r[25]=0u+0x00000001u; // 8036FAA8
L_8036FAAC:;
  c->r[5]=0u+0x00000000u; // 8036FAAC
  c->r[4]=0u+0x00000000u; // 8036FAB0
  goto L_8036FAD8; // 8036FAB4
L_8036FAB8:;
  c->r[3]=R32(c->r[23]+0x00000014u); // 8036FAB8
  c->r[0]=R16(c->r[3]+c->r[4]); // 8036FABC
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8036FAC0
  if (!crb(c,2)) { goto L_8036FAD0; } // 8036FAC4
  c->r[3]=R32(c->r[28]+0x00000014u); // 8036FAC8
  W16(c->r[3]+c->r[4],c->r[27]); // 8036FACC
L_8036FAD0:;
  c->r[4]=c->r[4]+0x00000002u; // 8036FAD0
  c->r[5]=c->r[5]+0x00000001u; // 8036FAD4
L_8036FAD8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 8036FAD8
  cmpu(c,0,c->r[5],c->r[0]); // 8036FADC
  if (crb(c,0)) { IRQCHK(c); goto L_8036FAB8; } // 8036FAE0
L_8036FAE4:;
  c->r[26]=c->r[26]+0x00000004u; // 8036FAE4
  c->r[24]=c->r[24]+0x00000001u; // 8036FAE8
L_8036FAEC:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 8036FAEC
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 8036FAF0
  if (crb(c,0)) { IRQCHK(c); goto L_8036FA5C; } // 8036FAF4
  c->r[3]=c->r[28]|c->r[28]; // 8036FAF8
  c->r[4]=0u+0x00000004u; // 8036FAFC
  c->r[5]=0u+0x00000001u; // 8036FB00
  c->lr=0x8036FB08u; f_80373CC0(c); // 8036FB04
  c->r[11]=c->r[1]+0x00000040u; // 8036FB08
  c->r[3]=c->r[25]|c->r[25]; // 8036FB0C
  c->lr=0x8036FB14u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036FB10
  c->r[0]=R32(c->r[1]+0x00000044u); // 8036FB14
  c->lr=c->r[0]; // 8036FB18
  c->r[1]=c->r[1]+0x00000040u; // 8036FB1C
  return; // 8036FB20
}

// fn_8036FB24
void f_8036FB24(Ctx* __restrict c) {
  trace_call(0x8036FB24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036FB24
  c->r[0]=c->lr; // 8036FB28
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036FB2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8036FB30
  c->r[31]=0u+0x00000000u; // 8036FB34
  W32(c->r[1]+0x00000018u,c->r[30]); // 8036FB38
  c->r[30]=0u+0x00000000u; // 8036FB3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8036FB40
  c->r[29]=c->r[3]|c->r[3]; // 8036FB44
  goto L_8036FB74; // 8036FB48
L_8036FB4C:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8036FB4C
  c->r[3]=R32(c->r[3]+c->r[31]); // 8036FB50
  cmps(c,0,(int32_t)c->r[3],0); // 8036FB54
  if (crb(c,2)) { goto L_8036FB6C; } // 8036FB58
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036FB5C
  c->r[12]=R32(c->r[12]+0x00000034u); // 8036FB60
  c->ctr=c->r[12]; // 8036FB64
  if (true) { c->lr=0x8036FB6Cu; dispatch(c,c->ctr); } // 8036FB68
L_8036FB6C:;
  c->r[31]=c->r[31]+0x00000004u; // 8036FB6C
  c->r[30]=c->r[30]+0x00000001u; // 8036FB70
L_8036FB74:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 8036FB74
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8036FB78
  if (crb(c,0)) { IRQCHK(c); goto L_8036FB4C; } // 8036FB7C
  c->r[3]=0u+0x00010000u; // 8036FB80
  c->r[5]=0u+0x00000000u; // 8036FB84
  c->r[4]=c->r[3]+0xFFFF8000u; // 8036FB88
  c->r[6]=0u+0x00000000u; // 8036FB8C
  goto L_8036FBA4; // 8036FB90
L_8036FB94:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8036FB94
  c->r[5]=c->r[5]+0x00000001u; // 8036FB98
  W16(c->r[3]+c->r[6],c->r[4]); // 8036FB9C
  c->r[6]=c->r[6]+0x00000002u; // 8036FBA0
L_8036FBA4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 8036FBA4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8036FBA8
  if (crb(c,0)) { IRQCHK(c); goto L_8036FB94; } // 8036FBAC
  c->r[3]=c->r[29]|c->r[29]; // 8036FBB0
  c->r[4]=0u+0x00000004u; // 8036FBB4
  c->r[5]=0u+0x00000000u; // 8036FBB8
  c->lr=0x8036FBC0u; f_80373CC0(c); // 8036FBBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036FBC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8036FBC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8036FBC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8036FBCC
  c->lr=c->r[0]; // 8036FBD0
  c->r[1]=c->r[1]+0x00000020u; // 8036FBD4
  return; // 8036FBD8
}

// Release__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_8036FBDC(Ctx* __restrict c) {
  trace_call(0x8036FBDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036FBDC
  c->r[0]=c->lr; // 8036FBE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8036FBE4
  c->r[11]=c->r[1]+0x00000030u; // 8036FBE8
  c->lr=0x8036FBF0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036FBEC
  c->r[31]=c->r[3]|c->r[3]; // 8036FBF0
  c->r[26]=c->r[4]|c->r[4]; // 8036FBF4
  c->r[27]=c->r[5]|c->r[5]; // 8036FBF8
  c->r[28]=c->r[6]|c->r[6]; // 8036FBFC
  c->r[29]=0u+0x00000000u; // 8036FC00
  c->r[30]=0u+0x00000000u; // 8036FC04
  goto L_8036FC48; // 8036FC08
L_8036FC0C:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8036FC0C
  c->r[3]=R32(c->r[3]+c->r[30]); // 8036FC10
  cmps(c,0,(int32_t)c->r[3],0); // 8036FC14
  if (crb(c,2)) { goto L_8036FC40; } // 8036FC18
  c->r[0]=R32(c->r[26]+0x00000000u); // 8036FC1C
  c->r[5]=c->r[27]|c->r[27]; // 8036FC20
  c->r[6]=c->r[28]|c->r[28]; // 8036FC24
  c->r[4]=c->r[1]+0x00000008u; // 8036FC28
  W32(c->r[1]+0x00000008u,c->r[0]); // 8036FC2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036FC30
  c->r[12]=R32(c->r[12]+0x00000054u); // 8036FC34
  c->ctr=c->r[12]; // 8036FC38
  if (true) { c->lr=0x8036FC40u; dispatch(c,c->ctr); } // 8036FC3C
L_8036FC40:;
  c->r[30]=c->r[30]+0x00000004u; // 8036FC40
  c->r[29]=c->r[29]+0x00000001u; // 8036FC44
L_8036FC48:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 8036FC48
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8036FC4C
  if (crb(c,0)) { IRQCHK(c); goto L_8036FC0C; } // 8036FC50
  c->r[3]=0u+0x00010000u; // 8036FC54
  c->r[5]=0u+0x00000000u; // 8036FC58
  c->r[4]=c->r[3]+0xFFFF8000u; // 8036FC5C
  c->r[6]=0u+0x00000000u; // 8036FC60
  goto L_8036FC78; // 8036FC64
L_8036FC68:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8036FC68
  c->r[5]=c->r[5]+0x00000001u; // 8036FC6C
  W16(c->r[3]+c->r[6],c->r[4]); // 8036FC70
  c->r[6]=c->r[6]+0x00000002u; // 8036FC74
L_8036FC78:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8036FC78
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8036FC7C
  if (crb(c,0)) { IRQCHK(c); goto L_8036FC68; } // 8036FC80
  c->r[3]=c->r[31]|c->r[31]; // 8036FC84
  c->r[4]=0u+0x00000004u; // 8036FC88
  c->r[5]=0u+0x00000000u; // 8036FC8C
  c->lr=0x8036FC94u; f_80373CC0(c); // 8036FC90
  c->r[7]=0u+0x00000000u; // 8036FC94
  c->r[5]=0u+0x00000000u; // 8036FC98
  c->r[4]=0u+0x00000000u; // 8036FC9C
  goto L_8036FCF4; // 8036FCA0
L_8036FCA4:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8036FCA4
  c->r[8]=R32(c->r[3]+c->r[5]); // 8036FCA8
  cmps(c,0,(int32_t)c->r[8],0); // 8036FCAC
  if (crb(c,2)) { goto L_8036FCEC; } // 8036FCB0
  c->r[9]=0u+0x00000000u; // 8036FCB4
  c->r[6]=0u+0x00000000u; // 8036FCB8
  goto L_8036FCE0; // 8036FCBC
L_8036FCC0:;
  c->r[3]=R32(c->r[8]+0x00000014u); // 8036FCC0
  c->r[0]=R16(c->r[3]+c->r[6]); // 8036FCC4
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8036FCC8
  if (!crb(c,2)) { goto L_8036FCD8; } // 8036FCCC
  c->r[3]=R32(c->r[31]+0x00000014u); // 8036FCD0
  W16(c->r[3]+c->r[6],c->r[4]); // 8036FCD4
L_8036FCD8:;
  c->r[6]=c->r[6]+0x00000002u; // 8036FCD8
  c->r[9]=c->r[9]+0x00000001u; // 8036FCDC
L_8036FCE0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8036FCE0
  cmpu(c,0,c->r[9],c->r[0]); // 8036FCE4
  if (crb(c,0)) { IRQCHK(c); goto L_8036FCC0; } // 8036FCE8
L_8036FCEC:;
  c->r[5]=c->r[5]+0x00000004u; // 8036FCEC
  c->r[7]=c->r[7]+0x00000001u; // 8036FCF0
L_8036FCF4:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 8036FCF4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8036FCF8
  if (crb(c,0)) { IRQCHK(c); goto L_8036FCA4; } // 8036FCFC
  c->r[11]=c->r[1]+0x00000030u; // 8036FD00
  c->lr=0x8036FD08u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036FD04
  c->r[0]=R32(c->r[1]+0x00000034u); // 8036FD08
  c->lr=c->r[0]; // 8036FD0C
  c->r[1]=c->r[1]+0x00000030u; // 8036FD10
  return; // 8036FD14
}

// fn_8036FD18
void f_8036FD18(Ctx* __restrict c) {
  trace_call(0x8036FD18u);
  c->r[5]=0u+0x00010000u; // 8036FD18
  c->r[0]=c->r[5]+0x00000002u; // 8036FD1C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036FD20
  if (crb(c,2)) { goto L_8036FDA0; } // 8036FD24
  if (!crb(c,0)) { goto L_8036FD3C; } // 8036FD28
  c->r[0]=c->r[5]+0x00000001u; // 8036FD2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036FD30
  if (!crb(c,0)) { goto L_8036FD4C; } // 8036FD34
  return; // 8036FD38
L_8036FD3C:;
  c->r[0]=c->r[5]+0x00000004u; // 8036FD3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036FD40
  if (!crb(c,0)) return; // 8036FD44
  goto L_8036FD94; // 8036FD48
L_8036FD4C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8036FD4C
  c->r[4]=0u+0x00000000u; // 8036FD50
  c->r[7]=0u+0x00000000u; // 8036FD54
  c->ctr=c->r[0]; // 8036FD58
  cmps(c,0,(int32_t)c->r[0],0); // 8036FD5C
  if (!crb(c,1)) return; // 8036FD60
L_8036FD64:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 8036FD64
  c->r[0]=R32(c->r[5]+c->r[7]); // 8036FD68
  cmpu(c,0,c->r[0],c->r[6]); // 8036FD6C
  if (!crb(c,2)) { goto L_8036FD84; } // 8036FD70
  c->r[12]=R32(c->r[3]+0x00000000u); // 8036FD74
  c->r[12]=R32(c->r[12]+0x00000040u); // 8036FD78
  c->ctr=c->r[12]; // 8036FD7C
  if (true) { dispatch(c,c->ctr); return; } // 8036FD80
L_8036FD84:;
  c->r[7]=c->r[7]+0x00000004u; // 8036FD84
  c->r[4]=c->r[4]+0x00000001u; // 8036FD88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8036FD64; } // 8036FD8C
  return; // 8036FD90
L_8036FD94:;
  c->r[0]=0u+0x00000000u; // 8036FD94
  W32(c->r[3]+0x00000004u,c->r[0]); // 8036FD98
  return; // 8036FD9C
L_8036FDA0:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 8036FDA0
  return; // 8036FDA4
}

// fn_8036FDA8
void f_8036FDA8(Ctx* __restrict c) {
  trace_call(0x8036FDA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036FDA8
  c->r[0]=c->lr; // 8036FDAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8036FDB0
  c->r[11]=c->r[1]+0x00000020u; // 8036FDB4
  c->lr=0x8036FDBCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036FDB8
  c->r[12]=0u+0x80430000u; // 8036FDBC
  c->r[31]=0u+0x00000000u; // 8036FDC0
  c->r[12]=c->r[12]+0x00004C00u; // 8036FDC4
  W32(c->r[3]+0x00000004u,c->r[31]); // 8036FDC8
  c->r[27]=c->r[3]|c->r[3]; // 8036FDCC
  c->r[28]=c->r[7]|c->r[7]; // 8036FDD0
  W32(c->r[3]+0x00000008u,c->r[4]); // 8036FDD4
  c->r[29]=c->r[8]|c->r[8]; // 8036FDD8
  c->r[30]=c->r[9]|c->r[9]; // 8036FDDC
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8036FDE0
  W32(c->r[3]+0x00000000u,c->r[12]); // 8036FDE4
  W32(c->r[3]+0x00000010u,c->r[6]); // 8036FDE8
  W32(c->r[3]+0x00000014u,c->r[5]); // 8036FDEC
  c->r[12]=R32(c->r[12]+0x00000034u); // 8036FDF0
  c->ctr=c->r[12]; // 8036FDF4
  if (true) { c->lr=0x8036FDFCu; dispatch(c,c->ctr); } // 8036FDF8
  c->r[3]=0u+0x80430000u; // 8036FDFC
  W32(c->r[27]+0x00000018u,c->r[29]); // 8036FE00
  c->r[3]=c->r[3]+0x00004BA8u; // 8036FE04
  c->r[4]=0u+0x00000000u; // 8036FE08
  W32(c->r[27]+0x00000000u,c->r[3]); // 8036FE0C
  c->r[5]=0u+0x00000000u; // 8036FE10
  W32(c->r[27]+0x0000001Cu,c->r[28]); // 8036FE14
  goto L_8036FE2C; // 8036FE18
L_8036FE1C:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 8036FE1C
  c->r[4]=c->r[4]+0x00000001u; // 8036FE20
  W32(c->r[3]+c->r[5],c->r[31]); // 8036FE24
  c->r[5]=c->r[5]+0x00000004u; // 8036FE28
L_8036FE2C:;
  c->r[0]=R32(c->r[27]+0x00000018u); // 8036FE2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8036FE30
  if (crb(c,0)) { IRQCHK(c); goto L_8036FE1C; } // 8036FE34
  c->r[3]=0u+0x80430000u; // 8036FE38
  W32(c->r[27]+0x00000020u,c->r[30]); // 8036FE3C
  c->r[3]=c->r[3]+0x00004B50u; // 8036FE40
  {uint32_t ea=c->r[2]+0xFFFFEA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036FE44
  W32(c->r[27]+0x00000000u,c->r[3]); // 8036FE48
  c->r[5]=0u+0x00000000u; // 8036FE4C
  c->r[4]=0u+0x00000000u; // 8036FE50
  goto L_8036FE68; // 8036FE54
L_8036FE58:;
  c->r[3]=R32(c->r[27]+0x00000020u); // 8036FE58
  c->r[5]=c->r[5]+0x00000001u; // 8036FE5C
  {uint32_t ea=c->r[3]+c->r[4]; WF32(ea,c->f[0]);} // 8036FE60
  c->r[4]=c->r[4]+0x00000004u; // 8036FE64
L_8036FE68:;
  c->r[0]=R32(c->r[27]+0x00000018u); // 8036FE68
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8036FE6C
  if (crb(c,0)) { IRQCHK(c); goto L_8036FE58; } // 8036FE70
  c->r[11]=c->r[1]+0x00000020u; // 8036FE74
  c->r[3]=c->r[27]|c->r[27]; // 8036FE78
  c->lr=0x8036FE80u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8036FE7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8036FE80
  c->lr=c->r[0]; // 8036FE84
  c->r[1]=c->r[1]+0x00000020u; // 8036FE88
  return; // 8036FE8C
}

// fn_8036FE90
void f_8036FE90(Ctx* __restrict c) {
  trace_call(0x8036FE90u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8036FE90
  c->r[0]=c->lr; // 8036FE94
  W32(c->r[1]+0x00000144u,c->r[0]); // 8036FE98
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 8036FE9C
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 8036FEA0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[30]);} // 8036FEA4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,30,ea,0,0);} // 8036FEA8
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[29]);} // 8036FEAC
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,29,ea,0,0);} // 8036FEB0
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[28]);} // 8036FEB4
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,28,ea,0,0);} // 8036FEB8
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[27]);} // 8036FEBC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,27,ea,0,0);} // 8036FEC0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[26]);} // 8036FEC4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,26,ea,0,0);} // 8036FEC8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[25]);} // 8036FECC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,25,ea,0,0);} // 8036FED0
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[24]);} // 8036FED4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,24,ea,0,0);} // 8036FED8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[23]);} // 8036FEDC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,23,ea,0,0);} // 8036FEE0
  c->r[11]=c->r[1]+0x000000B0u; // 8036FEE4
  c->lr=0x8036FEECu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8036FEE8
  {uint32_t ea=c->r[2]+0xFFFFEA40u; c->f[23]=c->ps1[23]=RF32(ea);} // 8036FEEC
  c->r[24]=c->r[3]|c->r[3]; // 8036FEF0
  c->r[0]=R32(c->r[3]+0x00000018u); // 8036FEF4
  c->r[25]=c->r[4]|c->r[4]; // 8036FEF8
  c->r[26]=c->r[5]|c->r[5]; // 8036FEFC
  c->f[0]=c->f[23]; // 8036FF00
  c->r[28]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8036FF04
  c->r[8]=0u+0x00000000u; // 8036FF08
  c->r[9]=0u+0x00000000u; // 8036FF0C
  c->r[7]=0u+0x00000000u; // 8036FF10
  c->ctr=c->r[0]; // 8036FF14
  cmps(c,0,(int32_t)c->r[0],0); // 8036FF18
  if (!crb(c,1)) { goto L_8036FF6C; } // 8036FF1C
L_8036FF20:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 8036FF20
  c->r[6]=R32(c->r[3]+0x00000020u); // 8036FF24
  c->r[5]=R32(c->r[5]+c->r[7]); // 8036FF28
  {uint32_t ea=c->r[6]+c->r[7]; c->f[1]=c->ps1[1]=RF32(ea);} // 8036FF2C
  cmps(c,0,(int32_t)c->r[5],0); // 8036FF30
  if (crb(c,2)) { goto L_8036FF64; } // 8036FF34
  fcmp(c,0,c->f[0],c->f[1]); // 8036FF38
  if (crb(c,2)) { goto L_8036FF64; } // 8036FF3C
  c->r[0]=R32(c->r[5]+0x00000014u); // 8036FF40
  c->r[0]=R16(c->r[28]+c->r[0]); // 8036FF44
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 8036FF48
  if (!crb(c,2)) { goto L_8036FF64; } // 8036FF4C
  cmps(c,0,(int32_t)c->r[8],0); // 8036FF50
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[1]); // 8036FF54
  c->r[9]=c->r[9]+0x00000001u; // 8036FF58
  if (!crb(c,2)) { goto L_8036FF64; } // 8036FF5C
  c->r[8]=c->r[5]|c->r[5]; // 8036FF60
L_8036FF64:;
  c->r[7]=c->r[7]+0x00000004u; // 8036FF64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8036FF20; } // 8036FF68
L_8036FF6C:;
  cmps(c,0,(int32_t)c->r[9],0); // 8036FF6C
  if (!crb(c,2)) { goto L_8036FF84; } // 8036FF70
  c->r[0]=0u+0x00000000u; // 8036FF74
  c->r[3]=c->r[25]|c->r[25]; // 8036FF78
  W32(c->r[4]+0x00000000u,c->r[0]); // 8036FF7C
  goto L_80370388; // 8036FF80
L_8036FF84:;
  cmps(c,0,(int32_t)c->r[9],1); // 8036FF84
  if (!crb(c,2)) { goto L_8036FFAC; } // 8036FF88
  c->r[12]=R32(c->r[8]+0x00000000u); // 8036FF8C
  c->r[3]=c->r[8]|c->r[8]; // 8036FF90
  c->r[4]=c->r[25]|c->r[25]; // 8036FF94
  c->r[5]=c->r[26]|c->r[26]; // 8036FF98
  c->r[12]=R32(c->r[12]+0x00000038u); // 8036FF9C
  c->ctr=c->r[12]; // 8036FFA0
  if (true) { c->lr=0x8036FFA8u; dispatch(c,c->ctr); } // 8036FFA4
  goto L_80370388; // 8036FFA8
L_8036FFAC:;
  c->r[3]=c->r[24]|c->r[24]; // 8036FFAC
  c->r[4]=0u+0x00000008u; // 8036FFB0
  c->lr=0x8036FFB8u; f_80373CE8(c); // 8036FFB4
  c->r[30]=c->r[3]|c->r[3]; // 8036FFB8
  c->r[3]=c->r[24]|c->r[24]; // 8036FFBC
  c->r[4]=0u+0x00000010u; // 8036FFC0
  c->lr=0x8036FFC8u; f_80373CE8(c); // 8036FFC4
  c->f[29]=c->ps1[29]=fres(c->f[23]); // 8036FFC8
  {uint32_t ea=c->r[2]+0xFFFFEA40u; c->f[28]=c->ps1[28]=RF32(ea);} // 8036FFCC
  {uint32_t ea=c->r[2]+0xFFFFEA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8036FFD0
  c->r[31]=c->r[3]|c->r[3]; // 8036FFD4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[28]);} // 8036FFD8
  c->r[0]=0u+0xFFFFFFFFu; // 8036FFDC
  {double t0=S(c->f[29]+c->f[29]), t1=S(c->ps1[29]+c->ps1[29]); c->f[2]=t0; c->ps1[2]=t1;} // 8036FFE0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[28]);} // 8036FFE4
  {double t0=S(c->f[29]*c->f[29]), t1=S(c->ps1[29]*c->ps1[29]); c->f[1]=t0; c->ps1[1]=t1;} // 8036FFE8
  c->r[3]=c->r[25]+0x0000001Cu; // 8036FFEC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[28]);} // 8036FFF0
  c->f[27]=c->f[28]; // 8036FFF4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8036FFF8
  c->f[26]=c->f[28]; // 8036FFFC
  c->f[25]=c->f[28]; // 80370000
  {double t0=S(-std::fma(c->f[23],c->f[1],-c->f[2])), t1=S(-std::fma(c->ps1[23],c->ps1[1],-c->ps1[2])); c->f[29]=t0; c->ps1[29]=t1;} // 80370004
  W32(c->r[25]+0x00000000u,c->r[0]); // 80370008
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[28]);} // 8037000C
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[28]);} // 80370010
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[28]);} // 80370014
  c->lr=0x8037001Cu; f_803948A0(c); // 80370018
  {uint32_t ea=c->r[2]+0xFFFFEA40u; c->f[30]=c->ps1[30]=RF32(ea);} // 8037001C
  c->r[27]=0u+0x00000000u; // 80370020
  {uint32_t ea=c->r[2]+0xFFFFEA44u; c->f[31]=c->ps1[31]=RF32(ea);} // 80370024
  c->r[29]=0u+0x00000000u; // 80370028
  goto L_803702B4; // 8037002C
L_80370030:;
  c->r[3]=R32(c->r[24]+0x0000001Cu); // 80370030
  c->r[4]=R32(c->r[24]+0x00000020u); // 80370034
  c->r[3]=R32(c->r[3]+c->r[29]); // 80370038
  {uint32_t ea=c->r[4]+c->r[29]; c->f[24]=c->ps1[24]=RF32(ea);} // 8037003C
  cmps(c,0,(int32_t)c->r[3],0); // 80370040
  if (crb(c,2)) { goto L_803702AC; } // 80370044
  fcmp(c,0,c->f[30],c->f[24]); // 80370048
  if (crb(c,2)) { goto L_803702AC; } // 8037004C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80370050
  c->r[0]=R16(c->r[28]+c->r[0]); // 80370054
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 80370058
  if (!crb(c,2)) { goto L_803702AC; } // 8037005C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80370060
  c->r[5]=c->r[26]|c->r[26]; // 80370064
  c->r[4]=c->r[1]+0x00000038u; // 80370068
  c->r[12]=R32(c->r[12]+0x00000038u); // 8037006C
  c->ctr=c->r[12]; // 80370070
  if (true) { c->lr=0x80370078u; dispatch(c,c->ctr); } // 80370074
  cmps(c,0,(int32_t)c->r[31],0); // 80370078
  c->f[23]=c->ps1[23]=S(c->f[24]*c->f[29]); // 8037007C
  c->r[22]=R32(c->r[3]+0x00000000u); // 80370080
  c->r[23]=c->r[3]|c->r[3]; // 80370084
  if (crb(c,2)) { goto L_803700F8; } // 80370088
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 8037008C
  if (!crb(c,2)) { goto L_80370164; } // 80370090
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370094
  fcmp(c,0,c->f[1],c->f[30]); // 80370098
  if (!crb(c,1)) { goto L_803700A8; } // 8037009C
  c->lr=0x803700A4u; f_803941BC(c); // 803700A0
  goto L_803700AC; // 803700A4
L_803700A8:;
  {uint32_t ea=c->r[2]+0xFFFFEA48u; c->f[1]=c->ps1[1]=RF32(ea);} // 803700A8
L_803700AC:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 803700AC
  {uint32_t ea=c->r[23]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803700B0
  fcmp(c,0,c->f[1],c->f[30]); // 803700B4
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 803700B8
  if (!crb(c,1)) { goto L_803700C8; } // 803700BC
  c->lr=0x803700C4u; f_803941BC(c); // 803700C0
  goto L_803700CC; // 803700C4
L_803700C8:;
  {uint32_t ea=c->r[2]+0xFFFFEA48u; c->f[1]=c->ps1[1]=RF32(ea);} // 803700C8
L_803700CC:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 803700CC
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803700D0
  fcmp(c,0,c->f[1],c->f[30]); // 803700D4
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 803700D8
  if (!crb(c,1)) { goto L_803700E8; } // 803700DC
  c->lr=0x803700E4u; f_803941BC(c); // 803700E0
  goto L_803700EC; // 803700E4
L_803700E8:;
  {uint32_t ea=c->r[2]+0xFFFFEA48u; c->f[1]=c->ps1[1]=RF32(ea);} // 803700E8
L_803700EC:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 803700EC
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 803700F0
  goto L_80370164; // 803700F4
L_803700F8:;
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 803700F8
  if (!crb(c,2)) { goto L_80370140; } // 803700FC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80370100
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80370104
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 80370108
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037010C
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80370110
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80370114
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 80370118
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8037011C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 80370120
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80370124
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 80370128
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8037012C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 80370130
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80370134
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 80370138
  goto L_80370164; // 8037013C
L_80370140:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80370140
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370144
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80370148
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[23]); // 8037014C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 80370150
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 80370154
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 80370158
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 8037015C
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 80370160
L_80370164:;
  cmps(c,0,(int32_t)c->r[30],0); // 80370164
  if (crb(c,2)) { goto L_803701C0; } // 80370168
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 8037016C
  if (!crb(c,2)) { goto L_80370184; } // 80370170
  c->r[3]=c->r[1]+0x00000018u; // 80370174
  c->r[4]=c->r[23]+0x0000001Cu; // 80370178
  c->lr=0x80370180u; f_80265A3C(c); // 8037017C
  goto L_80370194; // 80370180
L_80370184:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[30]);} // 80370184
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[30]);} // 80370188
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[30]);} // 8037018C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 80370190
L_80370194:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[24]); // 80370194
  c->r[3]=c->r[1]+0x00000028u; // 80370198
  c->r[5]=c->r[3]|c->r[3]; // 8037019C
  c->r[4]=c->r[1]+0x00000018u; // 803701A0
  c->f[0]=c->ps1[0]=fres(c->f[25]); // 803701A4
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 803701A8
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803701AC
  {double t0=S(-std::fma(c->f[25],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[25],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 803701B0
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 803701B4
  c->lr=0x803701BCu; f_80265C6C(c); // 803701B8
  goto L_8037025C; // 803701BC
L_803701C0:;
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 803701C0
  if (!crb(c,2)) { goto L_80370244; } // 803701C4
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803701C8
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803701CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 803701D0
  {uint32_t ea=c->r[25]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 803701D4
  {uint32_t ea=c->r[25]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 803701D8
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803701DC
  c->f[5]=c->ps1[5]=S(c->f[0]+c->f[1]); // 803701E0
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 803701E4
  {uint32_t ea=c->r[25]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 803701E8
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[5]);} // 803701EC
  {uint32_t ea=c->r[23]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 803701F0
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[23]); // 803701F4
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 803701F8
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[4]);} // 803701FC
  {uint32_t ea=c->r[23]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 80370200
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[23]); // 80370204
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 80370208
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[3]);} // 8037020C
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80370210
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[23]); // 80370214
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80370218
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[2]);} // 8037021C
  {uint32_t ea=c->r[23]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 80370220
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 80370224
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80370228
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[1]);} // 8037022C
  {uint32_t ea=c->r[23]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370230
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 80370234
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80370238
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 8037023C
  goto L_8037025C; // 80370240
L_80370244:;
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80370244
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80370248
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 8037024C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 80370250
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[1]);} // 80370254
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 80370258
L_8037025C:;
  c->r[0]=rotl(c->r[22],0)&0x00000040u; cr0(c,c->r[0]); // 8037025C
  if (!crb(c,2)) { goto L_803702A0; } // 80370260
  {uint32_t ea=c->r[23]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80370264
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80370268
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 8037026C
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370270
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80370274
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 80370278
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 8037027C
  {uint32_t ea=c->r[23]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 80370280
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 80370284
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80370288
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 8037028C
  {uint32_t ea=c->r[23]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370290
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 80370294
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80370298
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 8037029C
L_803702A0:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 803702A0
  c->r[0]=c->r[0]&c->r[22]; // 803702A4
  W32(c->r[25]+0x00000000u,c->r[0]); // 803702A8
L_803702AC:;
  c->r[29]=c->r[29]+0x00000004u; // 803702AC
  c->r[27]=c->r[27]+0x00000001u; // 803702B0
L_803702B4:;
  c->r[0]=R32(c->r[24]+0x00000018u); // 803702B4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 803702B8
  if (crb(c,0)) { IRQCHK(c); goto L_80370030; } // 803702BC
  cmps(c,0,(int32_t)c->r[31],0); // 803702C0
  if (crb(c,2)) { goto L_803702EC; } // 803702C4
  c->f[1]=c->f[28]; // 803702C8
  c->lr=0x803702D0u; f_80394130(c); // 803702CC
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 803702D0
  c->f[1]=c->f[27]; // 803702D4
  c->lr=0x803702DCu; f_80394130(c); // 803702D8
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 803702DC
  c->f[1]=c->f[26]; // 803702E0
  c->lr=0x803702E8u; f_80394130(c); // 803702E4
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 803702E8
L_803702EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 803702EC
  if (crb(c,2)) { goto L_80370334; } // 803702F0
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 803702F4
  c->r[3]=c->r[25]+0x0000001Cu; // 803702F8
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803702FC
  c->r[4]=c->r[1]+0x00000028u; // 80370300
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80370304
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80370308
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8037030C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80370310
  c->lr=0x80370318u; f_80264EAC(c); // 80370314
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80370318
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8037031C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80370320
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 80370324
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 80370328
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 8037032C
  goto L_80370378; // 80370330
L_80370334:;
  c->r[22]=c->r[25]+0x0000001Cu; // 80370334
  c->r[23]=c->r[25]+0x0000002Cu; // 80370338
  c->r[24]=c->r[25]+0x0000003Cu; // 8037033C
  c->r[3]=c->r[22]|c->r[22]; // 80370340
  c->r[4]=c->r[23]|c->r[23]; // 80370344
  c->r[5]=c->r[24]|c->r[24]; // 80370348
  c->lr=0x80370350u; f_80265810(c); // 8037034C
  c->r[3]=c->r[22]|c->r[22]; // 80370350
  c->r[4]=c->r[22]|c->r[22]; // 80370354
  c->lr=0x8037035Cu; f_80265750(c); // 80370358
  c->r[3]=c->r[24]|c->r[24]; // 8037035C
  c->r[4]=c->r[24]|c->r[24]; // 80370360
  c->lr=0x80370368u; f_80265750(c); // 80370364
  c->r[3]=c->r[24]|c->r[24]; // 80370368
  c->r[4]=c->r[22]|c->r[22]; // 8037036C
  c->r[5]=c->r[23]|c->r[23]; // 80370370
  c->lr=0x80370378u; f_80265810(c); // 80370374
L_80370378:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80370378
  c->r[3]=c->r[25]|c->r[25]; // 8037037C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80370380
  W32(c->r[25]+0x00000000u,c->r[0]); // 80370384
L_80370388:;
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 80370388
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 8037038C
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,30,ea,0,0);} // 80370390
  {uint32_t ea=c->r[1]+0x00000120u; c->f[30]=RF64(ea);} // 80370394
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,29,ea,0,0);} // 80370398
  {uint32_t ea=c->r[1]+0x00000110u; c->f[29]=RF64(ea);} // 8037039C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,28,ea,0,0);} // 803703A0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[28]=RF64(ea);} // 803703A4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,27,ea,0,0);} // 803703A8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[27]=RF64(ea);} // 803703AC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,26,ea,0,0);} // 803703B0
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[26]=RF64(ea);} // 803703B4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,25,ea,0,0);} // 803703B8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[25]=RF64(ea);} // 803703BC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,24,ea,0,0);} // 803703C0
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[24]=RF64(ea);} // 803703C4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,23,ea,0,0);} // 803703C8
  c->r[11]=c->r[1]+0x000000B0u; // 803703CC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[23]=RF64(ea);} // 803703D0
  c->lr=0x803703D8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803703D4
  c->r[0]=R32(c->r[1]+0x00000144u); // 803703D8
  c->lr=c->r[0]; // 803703DC
  c->r[1]=c->r[1]+0x00000140u; // 803703E0
  return; // 803703E4
}

// fn_803703E8
void f_803703E8(Ctx* __restrict c) {
  trace_call(0x803703E8u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 803703E8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803703EC
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 803703F0
  return; // 803703F4
}

// fn_803703F8
void f_803703F8(Ctx* __restrict c) {
  trace_call(0x803703F8u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 803703F8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803703FC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80370400
  return; // 80370404
}

// fn_80370408
void f_80370408(Ctx* __restrict c) {
  trace_call(0x80370408u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80370408
  c->r[0]=c->lr; // 8037040C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80370410
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80370414
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80370418
  c->r[11]=c->r[1]+0x00000030u; // 8037041C
  c->lr=0x80370424u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80370420
  c->r[8]=R32(c->r[5]+0x00000000u); // 80370424
  c->r[29]=c->r[3]|c->r[3]; // 80370428
  c->r[25]=c->r[4]|c->r[4]; // 8037042C
  c->r[30]=c->r[5]|c->r[5]; // 80370430
  cmps(c,0,(int32_t)c->r[8],0); // 80370434
  c->r[27]=c->r[7]|c->r[7]; // 80370438
  if (crb(c,2)) { goto L_8037044C; } // 8037043C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80370440
  cmps(c,0,(int32_t)c->r[0],0); // 80370444
  if (!crb(c,2)) { goto L_80370454; } // 80370448
L_8037044C:;
  c->r[3]=0u+0x00000000u; // 8037044C
  goto L_803705D8; // 80370450
L_80370454:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 80370454
  c->r[3]=c->r[6]|c->r[6]; // 80370458
  c->lr=0x80370460u; f_80365CD0(c); // 8037045C
  c->r[0]=0u-c->r[27]; // 80370460
  c->r[28]=c->r[3]|c->r[3]; // 80370464
  c->r[4]=c->r[0]|c->r[27]; // 80370468
  cmps(c,0,(int32_t)c->r[25],0); // 8037046C
  c->r[4]=sraw(c,c->r[4],31); // 80370470
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80370474
  c->r[3]=c->r[31]&c->r[4]; // 80370478
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 8037047C
  c->r[3]=c->r[26]+c->r[0]; // 80370480
  c->r[4]=c->r[3]+0x00000034u; // 80370484
  if (crb(c,2)) { goto L_80370490; } // 80370488
  W32(c->r[25]+0x00000000u,c->r[4]); // 8037048C
L_80370490:;
  cmps(c,0,(int32_t)c->r[29],0); // 80370490
  if (!crb(c,2)) { goto L_803704A0; } // 80370494
  c->r[3]=0u+0x00000000u; // 80370498
  goto L_803705D8; // 8037049C
L_803704A0:;
  c->r[3]=c->r[29]|c->r[29]; // 803704A0
  c->lr=0x803704A8u; f_802A703C(c); // 803704A4
  cmps(c,0,(int32_t)c->r[3],0); // 803704A8
  c->r[31]=c->r[3]|c->r[3]; // 803704AC
  if (!crb(c,2)) { goto L_803704BC; } // 803704B0
  c->r[3]=0u+0x00000000u; // 803704B4
  goto L_803705D8; // 803704B8
L_803704BC:;
  cmps(c,0,(int32_t)c->r[27],0); // 803704BC
  if (crb(c,2)) { goto L_803704CC; } // 803704C0
  c->r[27]=c->r[3]+0x00000034u; // 803704C4
  goto L_803704D0; // 803704C8
L_803704CC:;
  c->r[27]=0u+0x00000000u; // 803704CC
L_803704D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803704D0
  c->r[4]=c->r[3]+c->r[26]; // 803704D4
  c->r[5]=c->r[4]+0x00000034u; // 803704D8
  if (crb(c,2)) { goto L_803705D4; } // 803704DC
  c->r[0]=0u+0x00000000u; // 803704E0
  c->r[4]=0u+0x80430000u; // 803704E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 803704E8
  c->r[4]=c->r[4]+0x00004C00u; // 803704EC
  c->r[30]=R32(c->r[30]+0x00000000u); // 803704F0
  W32(c->r[3]+0x00000008u,c->r[29]); // 803704F4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803704F8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803704FC
  W32(c->r[3]+0x00000010u,c->r[28]); // 80370500
  W32(c->r[3]+0x00000014u,c->r[5]); // 80370504
  c->r[3]=c->r[31]|c->r[31]; // 80370508
  c->r[12]=R32(c->r[31]+0x00000000u); // 8037050C
  c->r[12]=R32(c->r[12]+0x00000034u); // 80370510
  c->ctr=c->r[12]; // 80370514
  if (true) { c->lr=0x8037051Cu; dispatch(c,c->ctr); } // 80370518
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 8037051C
  c->r[0]=0u+0x43300000u; // 80370520
  c->r[5]=R32(c->r[30]+0x00000020u); // 80370524
  c->r[3]=0u+0x80430000u; // 80370528
  c->r[4]=c->r[4]^0x80000000u; // 8037052C
  {uint32_t ea=c->r[2]+0xFFFFEA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370530
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80370534
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80370538
  {uint32_t ea=c->r[2]+0xFFFFEA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8037053C
  c->r[4]=c->r[13]+0xFFFF92D8u; // 80370540
  W32(c->r[1]+0x00000008u,c->r[0]); // 80370544
  c->r[3]=c->r[3]+0x00004AF8u; // 80370548
  {uint32_t ea=c->r[2]+0xFFFFEA50u; c->f[3]=RF64(ea);} // 8037054C
  cmps(c,0,(int32_t)c->r[27],0); // 80370550
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 80370554
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80370558
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8037055C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 80370560
  c->r[0]=R32(c->r[4]+c->r[5]); // 80370564
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 80370568
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 8037056C
  W32(c->r[31]+0x00000028u,c->r[0]); // 80370570
  W32(c->r[31]+0x00000000u,c->r[3]); // 80370574
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 80370578
  W32(c->r[31]+0x00000030u,c->r[27]); // 8037057C
  if (crb(c,2)) { goto L_803705D4; } // 80370580
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80370584
  c->r[28]=0u+0x00000000u; // 80370588
  c->r[27]=0u+0x00000000u; // 8037058C
  goto L_803705C8; // 80370590
L_80370594:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80370594
  c->r[3]=R16(c->r[3]+c->r[27]); // 80370598
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8037059C
  if (!crb(c,2)) { goto L_803705C0; } // 803705A0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 803705A4
  c->f[1]=c->f[31]; // 803705A8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 803705AC
  c->r[4]=R32(c->r[31]+0x00000030u); // 803705B0
  c->r[3]=c->r[31]+0x0000002Cu; // 803705B4
  c->r[4]=c->r[4]+c->r[0]; // 803705B8
  c->lr=0x803705C0u; f_8036B0D8(c); // 803705BC
L_803705C0:;
  c->r[27]=c->r[27]+0x00000002u; // 803705C0
  c->r[28]=c->r[28]+0x00000001u; // 803705C4
L_803705C8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 803705C8
  cmpu(c,0,c->r[28],c->r[0]); // 803705CC
  if (crb(c,0)) { IRQCHK(c); goto L_80370594; } // 803705D0
L_803705D4:;
  c->r[3]=c->r[31]|c->r[31]; // 803705D4
L_803705D8:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803705D8
  c->r[11]=c->r[1]+0x00000030u; // 803705DC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803705E0
  c->lr=0x803705E8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803705E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 803705E8
  c->lr=c->r[0]; // 803705EC
  c->r[1]=c->r[1]+0x00000040u; // 803705F0
  return; // 803705F4
}

// fn_803705F8
void f_803705F8(Ctx* __restrict c) {
  trace_call(0x803705F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803705F8
  c->r[0]=c->lr; // 803705FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80370600
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80370604
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80370608
  c->f[3]=c->f[1]; // 8037060C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80370610
  W32(c->r[1]+0x00000018u,c->r[30]); // 80370614
  W32(c->r[1]+0x00000014u,c->r[29]); // 80370618
  c->r[29]=c->r[3]|c->r[3]; // 8037061C
  c->r[12]=R32(c->r[3]+0x00000028u); // 80370620
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370624
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80370628
  c->ctr=c->r[12]; // 8037062C
  if (true) { c->lr=0x80370634u; dispatch(c,c->ctr); } // 80370630
  c->r[0]=R32(c->r[29]+0x00000030u); // 80370634
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80370638
  cmps(c,0,(int32_t)c->r[0],0); // 8037063C
  if (crb(c,2)) { goto L_80370694; } // 80370640
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80370644
  c->r[31]=0u+0x00000000u; // 80370648
  c->r[30]=0u+0x00000000u; // 8037064C
  goto L_80370688; // 80370650
L_80370654:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80370654
  c->r[3]=R16(c->r[3]+c->r[30]); // 80370658
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8037065C
  if (!crb(c,2)) { goto L_80370680; } // 80370660
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80370664
  c->f[1]=c->f[31]; // 80370668
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 8037066C
  c->r[4]=R32(c->r[29]+0x00000030u); // 80370670
  c->r[3]=c->r[29]+0x0000002Cu; // 80370674
  c->r[4]=c->r[4]+c->r[0]; // 80370678
  c->lr=0x80370680u; f_8036B0D8(c); // 8037067C
L_80370680:;
  c->r[30]=c->r[30]+0x00000002u; // 80370680
  c->r[31]=c->r[31]+0x00000001u; // 80370684
L_80370688:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80370688
  cmpu(c,0,c->r[31],c->r[0]); // 8037068C
  if (crb(c,0)) { IRQCHK(c); goto L_80370654; } // 80370690
L_80370694:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80370694
  c->r[0]=R32(c->r[1]+0x00000034u); // 80370698
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8037069C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803706A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803706A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803706A8
  c->lr=c->r[0]; // 803706AC
  c->r[1]=c->r[1]+0x00000030u; // 803706B0
  return; // 803706B4
}

// fn_803706B8
void f_803706B8(Ctx* __restrict c) {
  trace_call(0x803706B8u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803706B8
  return; // 803706BC
}

// fn_803706C0
void f_803706C0(Ctx* __restrict c) {
  trace_call(0x803706C0u);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 803706C0
  return; // 803706C4
}

// fn_803706C8
void f_803706C8(Ctx* __restrict c) {
  trace_call(0x803706C8u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803706C8
  return; // 803706CC
}

// fn_803706D0
void f_803706D0(Ctx* __restrict c) {
  trace_call(0x803706D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803706D0
  c->r[0]=c->lr; // 803706D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803706D8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803706DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803706E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803706E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803706E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803706EC
  c->r[29]=c->r[3]|c->r[3]; // 803706F0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803706F4
  {uint32_t ea=c->r[13]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803706F8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803706FC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80370700
  c->r[12]=R32(c->r[3]+0x00000028u); // 80370704
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370708
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8037070C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 80370710
  c->ctr=c->r[12]; // 80370714
  if (true) { c->lr=0x8037071Cu; dispatch(c,c->ctr); } // 80370718
  c->r[0]=R32(c->r[29]+0x00000030u); // 8037071C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80370720
  cmps(c,0,(int32_t)c->r[0],0); // 80370724
  if (crb(c,2)) { goto L_8037077C; } // 80370728
  c->f[31]=c->ps1[31]=S(c->f[1]); // 8037072C
  c->r[31]=0u+0x00000000u; // 80370730
  c->r[30]=0u+0x00000000u; // 80370734
  goto L_80370770; // 80370738
L_8037073C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8037073C
  c->r[3]=R16(c->r[3]+c->r[30]); // 80370740
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80370744
  if (!crb(c,2)) { goto L_80370768; } // 80370748
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8037074C
  c->f[1]=c->f[31]; // 80370750
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 80370754
  c->r[4]=R32(c->r[29]+0x00000030u); // 80370758
  c->r[3]=c->r[29]+0x0000002Cu; // 8037075C
  c->r[4]=c->r[4]+c->r[0]; // 80370760
  c->lr=0x80370768u; f_8036B0D8(c); // 80370764
L_80370768:;
  c->r[30]=c->r[30]+0x00000002u; // 80370768
  c->r[31]=c->r[31]+0x00000001u; // 8037076C
L_80370770:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80370770
  cmpu(c,0,c->r[31],c->r[0]); // 80370774
  if (crb(c,0)) { IRQCHK(c); goto L_8037073C; } // 80370778
L_8037077C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8037077C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80370780
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80370784
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80370788
  c->r[30]=R32(c->r[1]+0x00000018u); // 8037078C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80370790
  c->lr=c->r[0]; // 80370794
  c->r[1]=c->r[1]+0x00000030u; // 80370798
  return; // 8037079C
}

// fn_803707A0
void f_803707A0(Ctx* __restrict c) {
  trace_call(0x803707A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803707A0
  c->r[0]=c->lr; // 803707A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803707A8
  c->r[11]=c->r[1]+0x00000030u; // 803707AC
  c->lr=0x803707B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803707B0
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 803707B4
  c->r[27]=c->r[3]|c->r[3]; // 803707B8
  c->r[28]=c->r[4]|c->r[4]; // 803707BC
  c->r[30]=0u+0x00000000u; // 803707C0
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 803707C4
  c->r[29]=0u+0x00000000u; // 803707C8
  cmps(c,0,(int32_t)c->r[31],0); // 803707CC
  if (!crb(c,1)) { goto L_80370878; } // 803707D0
  goto L_8037086C; // 803707D4
L_803707D8:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 803707D8
  c->r[0]=R32(c->r[3]+0x00000010u); // 803707DC
  cmps(c,0,(int32_t)c->r[0],0); // 803707E0
  if (crb(c,2)) { goto L_803707F0; } // 803707E4
  c->r[0]=c->r[3]+c->r[0]; // 803707E8
  goto L_803707F4; // 803707EC
L_803707F0:;
  c->r[0]=0u+0x00000000u; // 803707F0
L_803707F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 803707F4
  if (crb(c,2)) { goto L_80370820; } // 803707F8
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 803707FC
  c->r[3]=c->r[0]+c->r[3]; // 80370800
  c->r[3]=R32(c->r[3]+0x00000024u); // 80370804
  cmps(c,0,(int32_t)c->r[3],0); // 80370808
  if (crb(c,2)) { goto L_80370818; } // 8037080C
  c->r[5]=c->r[0]+c->r[3]; // 80370810
  goto L_80370824; // 80370814
L_80370818:;
  c->r[5]=0u+0x00000000u; // 80370818
  goto L_80370824; // 8037081C
L_80370820:;
  c->r[5]=0u+0x00000000u; // 80370820
L_80370824:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80370824
  c->r[3]=c->r[28]|c->r[28]; // 80370828
  c->r[4]=c->r[1]+0x00000008u; // 8037082C
  c->r[5]=c->r[0]+c->r[5]; // 80370830
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 80370834
  W32(c->r[1]+0x00000008u,c->r[0]); // 80370838
  c->lr=0x80370840u; f_80365BD8(c); // 8037083C
  cmps(c,0,(int32_t)c->r[3],0); // 80370840
  if (crb(c,2)) { goto L_80370868; } // 80370844
  c->r[4]=R32(c->r[27]+0x00000014u); // 80370848
  if (crb(c,2)) { goto L_80370858; } // 8037084C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80370850
  goto L_8037085C; // 80370854
L_80370858:;
  c->r[0]=0u+0x00000000u; // 80370858
L_8037085C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8037085C
  c->r[30]=0u+0x00000001u; // 80370860
  W16(c->r[4]+c->r[0],c->r[29]); // 80370864
L_80370868:;
  c->r[29]=c->r[29]+0x00000001u; // 80370868
L_8037086C:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 8037086C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 80370870
  if (crb(c,0)) { IRQCHK(c); goto L_803707D8; } // 80370874
L_80370878:;
  c->r[3]=c->r[27]|c->r[27]; // 80370878
  c->r[4]=0u+0x00000004u; // 8037087C
  c->r[5]=0u+0x00000001u; // 80370880
  c->lr=0x80370888u; f_80373CC0(c); // 80370884
  c->r[11]=c->r[1]+0x00000030u; // 80370888
  c->r[3]=c->r[30]|c->r[30]; // 8037088C
  c->lr=0x80370894u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80370890
  c->r[0]=R32(c->r[1]+0x00000034u); // 80370894
  c->lr=c->r[0]; // 80370898
  c->r[1]=c->r[1]+0x00000030u; // 8037089C
  return; // 803708A0
}

// Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_803708A4(Ctx* __restrict c) {
  trace_call(0x803708A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803708A4
  c->r[0]=c->lr; // 803708A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 803708AC
  c->r[11]=c->r[1]+0x00000040u; // 803708B0
  c->lr=0x803708B8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803708B4
  cmps(c,0,(int32_t)c->r[6],1); // 803708B8
  c->r[28]=c->r[3]|c->r[3]; // 803708BC
  c->r[29]=c->r[4]|c->r[4]; // 803708C0
  c->r[30]=c->r[5]|c->r[5]; // 803708C4
  c->r[31]=0u+0x00000000u; // 803708C8
  if (crb(c,2)) { goto L_803708E0; } // 803708CC
  if (!crb(c,0)) { goto L_80370A70; } // 803708D0
  cmps(c,0,(int32_t)c->r[6],0); // 803708D4
  if (!crb(c,0)) { goto L_80370A00; } // 803708D8
  goto L_80370A70; // 803708DC
L_803708E0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 803708E0
  c->r[4]=c->r[30]|c->r[30]; // 803708E4
  c->r[3]=c->r[1]+0x00000018u; // 803708E8
  W32(c->r[1]+0x00000018u,c->r[0]); // 803708EC
  c->lr=0x803708F4u; f_80365C7C(c); // 803708F0
  c->r[0]=R32(c->r[3]+0x00000064u); // 803708F4
  cmps(c,0,(int32_t)c->r[0],0); // 803708F8
  if (crb(c,2)) { goto L_80370908; } // 803708FC
  c->r[4]=c->r[3]+c->r[0]; // 80370900
  goto L_80370948; // 80370904
L_80370908:;
  c->r[4]=0u+0x00000000u; // 80370908
  goto L_80370948; // 8037090C
L_80370910:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80370910
  cmps(c,0,(int32_t)c->r[0],0); // 80370914
  if (crb(c,2)) { goto L_80370924; } // 80370918
  c->r[3]=c->r[3]+c->r[0]; // 8037091C
  goto L_80370928; // 80370920
L_80370924:;
  c->r[3]=0u+0x00000000u; // 80370924
L_80370928:;
  cmps(c,0,(int32_t)c->r[3],0); // 80370928
  if (crb(c,2)) { goto L_80370950; } // 8037092C
  c->r[0]=R32(c->r[3]+0x00000064u); // 80370930
  cmps(c,0,(int32_t)c->r[0],0); // 80370934
  if (crb(c,2)) { goto L_80370944; } // 80370938
  c->r[4]=c->r[3]+c->r[0]; // 8037093C
  goto L_80370948; // 80370940
L_80370944:;
  c->r[4]=0u+0x00000000u; // 80370944
L_80370948:;
  cmps(c,0,(int32_t)c->r[4],0); // 80370948
  if (crb(c,2)) { IRQCHK(c); goto L_80370910; } // 8037094C
L_80370950:;
  cmps(c,0,(int32_t)c->r[4],0); // 80370950
  if (crb(c,2)) { goto L_8037096C; } // 80370954
  if (crb(c,2)) { goto L_80370964; } // 80370958
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 8037095C
  goto L_80370978; // 80370960
L_80370964:;
  c->r[27]=0u+0x00000000u; // 80370964
  goto L_80370978; // 80370968
L_8037096C:;
  c->r[3]=c->r[1]+0x00000018u; // 8037096C
  c->lr=0x80370974u; f_80365CD0(c); // 80370970
  c->r[27]=c->r[3]|c->r[3]; // 80370974
L_80370978:;
  c->r[26]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80370978
  goto L_803709F4; // 8037097C
L_80370980:;
  c->r[3]=c->r[29]|c->r[29]; // 80370980
  c->r[4]=c->r[30]|c->r[30]; // 80370984
  c->lr=0x8037098Cu; f_80365C7C(c); // 80370988
  c->r[0]=R32(c->r[3]+0x00000008u); // 8037098C
  cmps(c,0,(int32_t)c->r[0],0); // 80370990
  if (crb(c,2)) { goto L_803709A4; } // 80370994
  c->r[3]=c->r[3]+c->r[0]; // 80370998
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8037099C
  goto L_803709A8; // 803709A0
L_803709A4:;
  c->r[0]=0u+0x00000000u; // 803709A4
L_803709A8:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 803709A8
  c->r[3]=R32(c->r[4]+0x00000010u); // 803709AC
  cmps(c,0,(int32_t)c->r[3],0); // 803709B0
  if (crb(c,2)) { goto L_803709C0; } // 803709B4
  c->r[5]=c->r[4]+c->r[3]; // 803709B8
  goto L_803709C4; // 803709BC
L_803709C0:;
  c->r[5]=0u+0x00000000u; // 803709C0
L_803709C4:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 803709C4
  c->r[3]=c->r[1]+0x00000010u; // 803709C8
  c->r[4]=c->r[1]+0x00000014u; // 803709CC
  W32(c->r[1]+0x00000010u,c->r[5]); // 803709D0
  c->lr=0x803709D8u; f_80363A24(c); // 803709D4
  cmps(c,0,(int32_t)c->r[3],-1); // 803709D8
  if (crb(c,2)) { goto L_803709EC; } // 803709DC
  c->r[4]=R32(c->r[28]+0x00000014u); // 803709E0
  c->r[31]=0u+0x00000001u; // 803709E4
  W16(c->r[4]+c->r[26],c->r[3]); // 803709E8
L_803709EC:;
  c->r[26]=c->r[26]+0x00000002u; // 803709EC
  c->r[30]=c->r[30]+0x00000001u; // 803709F0
L_803709F4:;
  cmpu(c,0,c->r[30],c->r[27]); // 803709F4
  if (crb(c,0)) { IRQCHK(c); goto L_80370980; } // 803709F8
  goto L_80370A70; // 803709FC
L_80370A00:;
  c->r[3]=c->r[29]|c->r[29]; // 80370A00
  c->r[4]=c->r[30]|c->r[30]; // 80370A04
  c->lr=0x80370A0Cu; f_80365C7C(c); // 80370A08
  c->r[0]=R32(c->r[3]+0x00000008u); // 80370A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80370A10
  if (crb(c,2)) { goto L_80370A24; } // 80370A14
  c->r[3]=c->r[3]+c->r[0]; // 80370A18
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 80370A1C
  goto L_80370A28; // 80370A20
L_80370A24:;
  c->r[0]=0u+0x00000000u; // 80370A24
L_80370A28:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 80370A28
  c->r[3]=R32(c->r[4]+0x00000010u); // 80370A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80370A30
  if (crb(c,2)) { goto L_80370A40; } // 80370A34
  c->r[5]=c->r[4]+c->r[3]; // 80370A38
  goto L_80370A44; // 80370A3C
L_80370A40:;
  c->r[5]=0u+0x00000000u; // 80370A40
L_80370A44:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80370A44
  c->r[3]=c->r[1]+0x00000008u; // 80370A48
  c->r[4]=c->r[1]+0x0000000Cu; // 80370A4C
  W32(c->r[1]+0x00000008u,c->r[5]); // 80370A50
  c->lr=0x80370A58u; f_80363A24(c); // 80370A54
  cmps(c,0,(int32_t)c->r[3],-1); // 80370A58
  if (crb(c,2)) { goto L_80370A70; } // 80370A5C
  c->r[4]=R32(c->r[28]+0x00000014u); // 80370A60
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80370A64
  c->r[31]=0u+0x00000001u; // 80370A68
  W16(c->r[4]+c->r[0],c->r[3]); // 80370A6C
L_80370A70:;
  c->r[3]=c->r[28]|c->r[28]; // 80370A70
  c->r[4]=0u+0x00000004u; // 80370A74
  c->r[5]=0u+0x00000001u; // 80370A78
  c->lr=0x80370A80u; f_80373CC0(c); // 80370A7C
  c->r[11]=c->r[1]+0x00000040u; // 80370A80
  c->r[3]=c->r[31]|c->r[31]; // 80370A84
  c->lr=0x80370A8Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80370A88
  c->r[0]=R32(c->r[1]+0x00000044u); // 80370A8C
  c->lr=c->r[0]; // 80370A90
  c->r[1]=c->r[1]+0x00000040u; // 80370A94
  return; // 80370A98
}

// Release__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_80370A9C(Ctx* __restrict c) {
  trace_call(0x80370A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80370A9C
  c->r[0]=c->lr; // 80370AA0
  cmps(c,0,(int32_t)c->r[6],1); // 80370AA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80370AA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80370AAC
  c->r[31]=c->r[5]|c->r[5]; // 80370AB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80370AB4
  c->r[30]=c->r[3]|c->r[3]; // 80370AB8
  if (crb(c,2)) { goto L_80370AD0; } // 80370ABC
  if (!crb(c,0)) { goto L_80370C50; } // 80370AC0
  cmps(c,0,(int32_t)c->r[6],0); // 80370AC4
  if (!crb(c,0)) { goto L_80370C3C; } // 80370AC8
  goto L_80370C50; // 80370ACC
L_80370AD0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80370AD0
  c->r[4]=c->r[31]|c->r[31]; // 80370AD4
  c->r[3]=c->r[1]+0x00000008u; // 80370AD8
  W32(c->r[1]+0x00000008u,c->r[0]); // 80370ADC
  c->lr=0x80370AE4u; f_80365C7C(c); // 80370AE0
  c->r[0]=R32(c->r[3]+0x00000064u); // 80370AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80370AE8
  if (crb(c,2)) { goto L_80370AF8; } // 80370AEC
  c->r[4]=c->r[3]+c->r[0]; // 80370AF0
  goto L_80370B38; // 80370AF4
L_80370AF8:;
  c->r[4]=0u+0x00000000u; // 80370AF8
  goto L_80370B38; // 80370AFC
L_80370B00:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 80370B00
  cmps(c,0,(int32_t)c->r[0],0); // 80370B04
  if (crb(c,2)) { goto L_80370B14; } // 80370B08
  c->r[3]=c->r[3]+c->r[0]; // 80370B0C
  goto L_80370B18; // 80370B10
L_80370B14:;
  c->r[3]=0u+0x00000000u; // 80370B14
L_80370B18:;
  cmps(c,0,(int32_t)c->r[3],0); // 80370B18
  if (crb(c,2)) { goto L_80370B40; } // 80370B1C
  c->r[0]=R32(c->r[3]+0x00000064u); // 80370B20
  cmps(c,0,(int32_t)c->r[0],0); // 80370B24
  if (crb(c,2)) { goto L_80370B34; } // 80370B28
  c->r[4]=c->r[3]+c->r[0]; // 80370B2C
  goto L_80370B38; // 80370B30
L_80370B34:;
  c->r[4]=0u+0x00000000u; // 80370B34
L_80370B38:;
  cmps(c,0,(int32_t)c->r[4],0); // 80370B38
  if (crb(c,2)) { IRQCHK(c); goto L_80370B00; } // 80370B3C
L_80370B40:;
  cmps(c,0,(int32_t)c->r[4],0); // 80370B40
  if (crb(c,2)) { goto L_80370B5C; } // 80370B44
  if (crb(c,2)) { goto L_80370B54; } // 80370B48
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80370B4C
  goto L_80370B64; // 80370B50
L_80370B54:;
  c->r[3]=0u+0x00000000u; // 80370B54
  goto L_80370B64; // 80370B58
L_80370B5C:;
  c->r[3]=c->r[1]+0x00000008u; // 80370B5C
  c->lr=0x80370B64u; f_80365CD0(c); // 80370B60
L_80370B64:;
  cmpu(c,1,c->r[31],c->r[3]); // 80370B64
  if (!crb(c,4)) { goto L_80370C50; } // 80370B68
  c->r[0]=c->r[3]-c->r[31]; // 80370B6C
  c->r[6]=c->r[3]+0xFFFFFFF8u; // 80370B70
  cmpu(c,0,c->r[0],0x00000008u); // 80370B74
  if (!crb(c,1)) { goto L_80370C0C; } // 80370B78
  if (crb(c,5)) { goto L_80370C0C; } // 80370B7C
  c->r[0]=c->r[6]+0x00000007u; // 80370B80
  c->r[4]=0u+0x00010000u; // 80370B84
  c->r[0]=c->r[0]-c->r[31]; // 80370B88
  c->r[7]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80370B8C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80370B90
  c->r[5]=c->r[4]+0xFFFF8000u; // 80370B94
  c->ctr=c->r[0]; // 80370B98
  cmpu(c,0,c->r[31],c->r[6]); // 80370B9C
  if (!crb(c,0)) { goto L_80370C0C; } // 80370BA0
L_80370BA4:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 80370BA4
  c->r[31]=c->r[31]+0x00000008u; // 80370BA8
  W16(c->r[4]+c->r[7],c->r[5]); // 80370BAC
  c->r[0]=R32(c->r[30]+0x00000014u); // 80370BB0
  c->r[4]=c->r[0]+c->r[7]; // 80370BB4
  W16(c->r[4]+0x00000002u,c->r[5]); // 80370BB8
  c->r[0]=R32(c->r[30]+0x00000014u); // 80370BBC
  c->r[4]=c->r[0]+c->r[7]; // 80370BC0
  W16(c->r[4]+0x00000004u,c->r[5]); // 80370BC4
  c->r[0]=R32(c->r[30]+0x00000014u); // 80370BC8
  c->r[4]=c->r[0]+c->r[7]; // 80370BCC
  W16(c->r[4]+0x00000006u,c->r[5]); // 80370BD0
  c->r[0]=R32(c->r[30]+0x00000014u); // 80370BD4
  c->r[4]=c->r[0]+c->r[7]; // 80370BD8
  W16(c->r[4]+0x00000008u,c->r[5]); // 80370BDC
  c->r[0]=R32(c->r[30]+0x00000014u); // 80370BE0
  c->r[4]=c->r[0]+c->r[7]; // 80370BE4
  W16(c->r[4]+0x0000000Au,c->r[5]); // 80370BE8
  c->r[0]=R32(c->r[30]+0x00000014u); // 80370BEC
  c->r[4]=c->r[0]+c->r[7]; // 80370BF0
  W16(c->r[4]+0x0000000Cu,c->r[5]); // 80370BF4
  c->r[0]=R32(c->r[30]+0x00000014u); // 80370BF8
  c->r[4]=c->r[0]+c->r[7]; // 80370BFC
  c->r[7]=c->r[7]+0x00000010u; // 80370C00
  W16(c->r[4]+0x0000000Eu,c->r[5]); // 80370C04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80370BA4; } // 80370C08
L_80370C0C:;
  c->r[4]=0u+0x00010000u; // 80370C0C
  c->r[0]=c->r[3]-c->r[31]; // 80370C10
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80370C14
  c->r[4]=c->r[4]+0xFFFF8000u; // 80370C18
  c->ctr=c->r[0]; // 80370C1C
  cmpu(c,0,c->r[31],c->r[3]); // 80370C20
  if (!crb(c,0)) { goto L_80370C50; } // 80370C24
L_80370C28:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80370C28
  W16(c->r[3]+c->r[5],c->r[4]); // 80370C2C
  c->r[5]=c->r[5]+0x00000002u; // 80370C30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80370C28; } // 80370C34
  goto L_80370C50; // 80370C38
L_80370C3C:;
  c->r[4]=0u+0x00010000u; // 80370C3C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80370C40
  c->r[4]=c->r[4]+0xFFFF8000u; // 80370C44
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80370C48
  W16(c->r[3]+c->r[0],c->r[4]); // 80370C4C
L_80370C50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80370C50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80370C54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80370C58
  c->lr=c->r[0]; // 80370C5C
  c->r[1]=c->r[1]+0x00000020u; // 80370C60
  return; // 80370C64
}

// fn_80370C68
void f_80370C68(Ctx* __restrict c) {
  trace_call(0x80370C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80370C68
  c->r[0]=c->lr; // 80370C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80370C70
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80370C74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80370C78
  c->r[31]=c->r[4]|c->r[4]; // 80370C7C
  c->r[6]=R32(c->r[3]+0x00000014u); // 80370C80
  c->r[5]=R16(c->r[6]+c->r[0]); // 80370C84
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 80370C88
  if (crb(c,2)) { goto L_80370CA0; } // 80370C8C
  c->r[0]=0u+0x00000000u; // 80370C90
  c->r[3]=c->r[31]|c->r[31]; // 80370C94
  W32(c->r[4]+0x00000000u,c->r[0]); // 80370C98
  goto L_80370CC8; // 80370C9C
L_80370CA0:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 80370CA0
  cmps(c,0,(int32_t)c->r[6],0); // 80370CA4
  if (crb(c,2)) { goto L_80370CB8; } // 80370CA8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 80370CAC
  c->r[3]=c->r[6]+c->r[0]; // 80370CB0
  goto L_80370CC8; // 80370CB4
L_80370CB8:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80370CB8
  c->r[3]=c->r[3]+0x0000002Cu; // 80370CBC
  c->lr=0x80370CC4u; f_8036B0D8(c); // 80370CC0
  c->r[3]=c->r[31]|c->r[31]; // 80370CC4
L_80370CC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80370CC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80370CCC
  c->lr=c->r[0]; // 80370CD0
  c->r[1]=c->r[1]+0x00000010u; // 80370CD4
  return; // 80370CD8
}

// fn_80370CDC
void f_80370CDC(Ctx* __restrict c) {
  trace_call(0x80370CDCu);
  c->r[5]=0u+0x00010000u; // 80370CDC
  c->r[0]=c->r[5]+0x00000002u; // 80370CE0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80370CE4
  if (crb(c,2)) { goto L_80370D28; } // 80370CE8
  if (!crb(c,0)) { goto L_80370CFC; } // 80370CEC
  cmps(c,0,(int32_t)c->r[4],8); // 80370CF0
  if (crb(c,2)) { goto L_80370D0C; } // 80370CF4
  return; // 80370CF8
L_80370CFC:;
  c->r[0]=c->r[5]+0x00000004u; // 80370CFC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80370D00
  if (!crb(c,0)) return; // 80370D04
  goto L_80370D1C; // 80370D08
L_80370D0C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80370D0C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80370D10
  c->ctr=c->r[12]; // 80370D14
  if (true) { dispatch(c,c->ctr); return; } // 80370D18
L_80370D1C:;
  c->r[0]=0u+0x00000000u; // 80370D1C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80370D20
  return; // 80370D24
L_80370D28:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 80370D28
  return; // 80370D2C
}

// fn_80370D30
void f_80370D30(Ctx* __restrict c) {
  trace_call(0x80370D30u);
  c->r[3]=0u+0x803F0000u; // 80370D30
  c->r[0]=R32(c->r[4]+0x00000000u); // 80370D34
  c->r[3]=c->r[3]+0xFFFFE018u; // 80370D38
  cmpu(c,0,c->r[0],c->r[3]); // 80370D3C
  if (!crb(c,2)) { goto L_80370D4C; } // 80370D40
  c->r[3]=0u+0x00000001u; // 80370D44
  return; // 80370D48
L_80370D4C:;
  c->r[3]=0u+0x803F0000u; // 80370D4C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80370D50
  c->r[3]=c->r[3]+0xFFFFDFE0u; // 80370D54
  cmpu(c,0,c->r[0],c->r[3]); // 80370D58
  if (!crb(c,2)) { goto L_80370D68; } // 80370D5C
  c->r[3]=0u+0x00000001u; // 80370D60
  return; // 80370D64
L_80370D68:;
  c->r[3]=0u+0x803F0000u; // 80370D68
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 80370D6C
  cmpu(c,0,c->r[0],c->r[3]); // 80370D70
  if (!crb(c,2)) { goto L_80370D80; } // 80370D74
  c->r[3]=0u+0x00000001u; // 80370D78
  return; // 80370D7C
L_80370D80:;
  c->r[3]=0u+0x803F0000u; // 80370D80
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80370D84
  c->r[0]=c->r[3]-c->r[0]; // 80370D88
  c->r[0]=cntlz(c->r[0]); // 80370D8C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80370D90
  return; // 80370D94
}

// fn_80370D98
void f_80370D98(Ctx* __restrict c) {
  trace_call(0x80370D98u);
  c->r[3]=0u+0x803F0000u; // 80370D98
  c->r[0]=R32(c->r[4]+0x00000000u); // 80370D9C
  c->r[3]=c->r[3]+0xFFFFDFE0u; // 80370DA0
  cmpu(c,0,c->r[0],c->r[3]); // 80370DA4
  if (!crb(c,2)) { goto L_80370DB4; } // 80370DA8
  c->r[3]=0u+0x00000001u; // 80370DAC
  return; // 80370DB0
L_80370DB4:;
  c->r[3]=0u+0x803F0000u; // 80370DB4
  c->r[0]=R32(c->r[4]+0x00000000u); // 80370DB8
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 80370DBC
  cmpu(c,0,c->r[0],c->r[3]); // 80370DC0
  if (!crb(c,2)) { goto L_80370DD0; } // 80370DC4
  c->r[3]=0u+0x00000001u; // 80370DC8
  return; // 80370DCC
L_80370DD0:;
  c->r[3]=0u+0x803F0000u; // 80370DD0
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80370DD4
  c->r[0]=c->r[3]-c->r[0]; // 80370DD8
  c->r[0]=cntlz(c->r[0]); // 80370DDC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80370DE0
  return; // 80370DE4
}

// fn_80370DE8
void f_80370DE8(Ctx* __restrict c) {
  trace_call(0x80370DE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80370DE8
  c->r[0]=c->lr; // 80370DEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80370DF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80370DF4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80370DF8
  c->ctr=c->r[12]; // 80370DFC
  if (true) { c->lr=0x80370E04u; dispatch(c,c->ctr); } // 80370E00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80370E04
  c->r[3]=c->r[3]+0x00000004u; // 80370E08
  c->lr=c->r[0]; // 80370E0C
  c->r[1]=c->r[1]+0x00000010u; // 80370E10
  return; // 80370E14
}

// fn_80370E18
void f_80370E18(Ctx* __restrict c) {
  trace_call(0x80370E18u);
  c->r[3]=0u+0x803F0000u; // 80370E18
  c->r[3]=c->r[3]+0xFFFFE018u; // 80370E1C
  return; // 80370E20
}

// fn_80370E24
void f_80370E24(Ctx* __restrict c) {
  trace_call(0x80370E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80370E24
  c->r[0]=c->lr; // 80370E28
  cmps(c,0,(int32_t)c->r[3],0); // 80370E2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80370E30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80370E34
  c->r[31]=c->r[3]|c->r[3]; // 80370E38
  if (crb(c,2)) { goto L_80370E50; } // 80370E3C
  if (crb(c,2)) { goto L_80370E50; } // 80370E40
  if (crb(c,2)) { goto L_80370E50; } // 80370E44
  c->r[4]=0u+0x00000000u; // 80370E48
  c->lr=0x80370E50u; f_80373AF0(c); // 80370E4C
L_80370E50:;
  c->r[3]=c->r[31]|c->r[31]; // 80370E50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80370E54
  c->r[0]=R32(c->r[1]+0x00000014u); // 80370E58
  c->lr=c->r[0]; // 80370E5C
  c->r[1]=c->r[1]+0x00000010u; // 80370E60
  return; // 80370E64
}

// fn_80370E68
void f_80370E68(Ctx* __restrict c) {
  trace_call(0x80370E68u);
  c->r[5]=0u+0x803F0000u; // 80370E68
  c->r[0]=R32(c->r[4]+0x00000000u); // 80370E6C
  c->r[5]=c->r[5]+0xFFFFDFE0u; // 80370E70
  c->r[3]=c->r[5]+0x00000024u; // 80370E74
  cmpu(c,0,c->r[0],c->r[3]); // 80370E78
  if (!crb(c,2)) { goto L_80370E88; } // 80370E7C
  c->r[3]=0u+0x00000001u; // 80370E80
  return; // 80370E84
L_80370E88:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80370E88
  c->r[0]=c->r[5]+0x00000010u; // 80370E8C
  cmpu(c,0,c->r[4],c->r[0]); // 80370E90
  if (!crb(c,2)) { goto L_80370EA0; } // 80370E94
  c->r[3]=0u+0x00000001u; // 80370E98
  return; // 80370E9C
L_80370EA0:;
  c->r[0]=c->r[5]+0x00000000u; // 80370EA0
  cmpu(c,0,c->r[4],c->r[0]); // 80370EA4
  if (!crb(c,2)) { goto L_80370EB4; } // 80370EA8
  c->r[3]=0u+0x00000001u; // 80370EAC
  return; // 80370EB0
L_80370EB4:;
  c->r[3]=0u+0x803F0000u; // 80370EB4
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 80370EB8
  cmpu(c,0,c->r[4],c->r[3]); // 80370EBC
  if (!crb(c,2)) { goto L_80370ECC; } // 80370EC0
  c->r[3]=0u+0x00000001u; // 80370EC4
  return; // 80370EC8
L_80370ECC:;
  c->r[3]=0u+0x803F0000u; // 80370ECC
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80370ED0
  c->r[0]=c->r[3]-c->r[4]; // 80370ED4
  c->r[0]=cntlz(c->r[0]); // 80370ED8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80370EDC
  return; // 80370EE0
}

// fn_80370EE4
void f_80370EE4(Ctx* __restrict c) {
  trace_call(0x80370EE4u);
  c->r[3]=0u+0x803F0000u; // 80370EE4
  c->r[0]=R32(c->r[4]+0x00000000u); // 80370EE8
  c->r[3]=c->r[3]+0xFFFFDFF0u; // 80370EEC
  cmpu(c,0,c->r[0],c->r[3]); // 80370EF0
  if (!crb(c,2)) { goto L_80370F00; } // 80370EF4
  c->r[3]=0u+0x00000001u; // 80370EF8
  return; // 80370EFC
L_80370F00:;
  c->r[3]=0u+0x803F0000u; // 80370F00
  c->r[0]=R32(c->r[4]+0x00000000u); // 80370F04
  c->r[3]=c->r[3]+0xFFFFDFE0u; // 80370F08
  cmpu(c,0,c->r[0],c->r[3]); // 80370F0C
  if (!crb(c,2)) { goto L_80370F1C; } // 80370F10
  c->r[3]=0u+0x00000001u; // 80370F14
  return; // 80370F18
L_80370F1C:;
  c->r[3]=0u+0x803F0000u; // 80370F1C
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 80370F20
  cmpu(c,0,c->r[0],c->r[3]); // 80370F24
  if (!crb(c,2)) { goto L_80370F34; } // 80370F28
  c->r[3]=0u+0x00000001u; // 80370F2C
  return; // 80370F30
L_80370F34:;
  c->r[3]=0u+0x803F0000u; // 80370F34
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80370F38
  c->r[0]=c->r[3]-c->r[0]; // 80370F3C
  c->r[0]=cntlz(c->r[0]); // 80370F40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80370F44
  return; // 80370F48
}

// fn_80370F4C
void f_80370F4C(Ctx* __restrict c) {
  trace_call(0x80370F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80370F4C
  c->r[0]=c->lr; // 80370F50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80370F54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80370F58
  c->r[12]=R32(c->r[12]+0x00000014u); // 80370F5C
  c->ctr=c->r[12]; // 80370F60
  if (true) { c->lr=0x80370F68u; dispatch(c,c->ctr); } // 80370F64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80370F68
  c->r[3]=c->r[3]+0x00000004u; // 80370F6C
  c->lr=c->r[0]; // 80370F70
  c->r[1]=c->r[1]+0x00000010u; // 80370F74
  return; // 80370F78
}

// fn_80370F7C
void f_80370F7C(Ctx* __restrict c) {
  trace_call(0x80370F7Cu);
  c->r[3]=0u+0x803F0000u; // 80370F7C
  c->r[3]=c->r[3]+0xFFFFE004u; // 80370F80
  return; // 80370F84
}

// fn_80370F88
void f_80370F88(Ctx* __restrict c) {
  trace_call(0x80370F88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80370F88
  c->r[0]=c->lr; // 80370F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80370F90
  c->r[12]=R32(c->r[3]+0x00000000u); // 80370F94
  c->r[12]=R32(c->r[12]+0x00000014u); // 80370F98
  c->ctr=c->r[12]; // 80370F9C
  if (true) { c->lr=0x80370FA4u; dispatch(c,c->ctr); } // 80370FA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80370FA4
  c->r[3]=c->r[3]+0x00000004u; // 80370FA8
  c->lr=c->r[0]; // 80370FAC
  c->r[1]=c->r[1]+0x00000010u; // 80370FB0
  return; // 80370FB4
}

// fn_80370FB8
void f_80370FB8(Ctx* __restrict c) {
  trace_call(0x80370FB8u);
  c->r[3]=0u+0x803F0000u; // 80370FB8
  c->r[3]=c->r[3]+0xFFFFDFF0u; // 80370FBC
  return; // 80370FC0
}

// fn_80370FC4
void f_80370FC4(Ctx* __restrict c) {
  trace_call(0x80370FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80370FC4
  c->r[0]=c->lr; // 80370FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80370FCC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80370FD0
  c->r[12]=R32(c->r[12]+0x00000014u); // 80370FD4
  c->ctr=c->r[12]; // 80370FD8
  if (true) { c->lr=0x80370FE0u; dispatch(c,c->ctr); } // 80370FDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80370FE0
  c->r[3]=c->r[3]+0x00000004u; // 80370FE4
  c->lr=c->r[0]; // 80370FE8
  c->r[1]=c->r[1]+0x00000010u; // 80370FEC
  return; // 80370FF0
}

// fn_80370FF4
void f_80370FF4(Ctx* __restrict c) {
  trace_call(0x80370FF4u);
  c->r[3]=0u+0x803F0000u; // 80370FF4
  c->r[3]=c->r[3]+0xFFFFDFE0u; // 80370FF8
  return; // 80370FFC
}

// TestExistence__Q34nw4r3g3d9AnmObjShpCFUl
void f_80371000(Ctx* __restrict c) {
  trace_call(0x80371000u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80371000
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80371004
  c->r[0]=R16(c->r[3]+c->r[0]); // 80371008
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 8037100C
  c->r[0]=cntlz(c->r[0]); // 80371010
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80371014
  return; // 80371018
}

// fn_8037101C
void f_8037101C(Ctx* __restrict c) {
  trace_call(0x8037101Cu);
  c->r[4]=0u+0x00010000u; // 8037101C
  c->r[7]=0u+0x00000000u; // 80371020
  c->r[5]=c->r[4]+0xFFFF8000u; // 80371024
  c->r[6]=0u+0x00000000u; // 80371028
  goto L_80371040; // 8037102C
L_80371030:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 80371030
  c->r[7]=c->r[7]+0x00000001u; // 80371034
  W16(c->r[4]+c->r[6],c->r[5]); // 80371038
  c->r[6]=c->r[6]+0x00000002u; // 8037103C
L_80371040:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 80371040
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80371044
  if (crb(c,0)) { IRQCHK(c); goto L_80371030; } // 80371048
  c->r[4]=0u+0x00000004u; // 8037104C
  c->r[5]=0u+0x00000000u; // 80371050
  f_80373CC0(c); return; // 80371054
}

// fn_80371058
void f_80371058(Ctx* __restrict c) {
  trace_call(0x80371058u);
  c->r[3]=0u+0x00000000u; // 80371058
  return; // 8037105C
}

// fn_80371060
void f_80371060(Ctx* __restrict c) {
  trace_call(0x80371060u);
  c->r[3]=0u+0x00000000u; // 80371060
  return; // 80371064
}

// fn_80371068
void f_80371068(Ctx* __restrict c) {
  trace_call(0x80371068u);
  return; // 80371068
}

// fn_8037106C
void f_8037106C(Ctx* __restrict c) {
  trace_call(0x8037106Cu);
  {uint32_t ea=c->r[2]+0xFFFFEA58u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037106C
  return; // 80371070
}

// fn_80371074
void f_80371074(Ctx* __restrict c) {
  trace_call(0x80371074u);
  return; // 80371074
}

// fn_80371078
void f_80371078(Ctx* __restrict c) {
  trace_call(0x80371078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80371078
  c->r[0]=c->lr; // 8037107C
  cmps(c,0,(int32_t)c->r[3],0); // 80371080
  W32(c->r[1]+0x00000014u,c->r[0]); // 80371084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80371088
  c->r[31]=c->r[3]|c->r[3]; // 8037108C
  if (crb(c,2)) { goto L_803710A0; } // 80371090
  if (crb(c,2)) { goto L_803710A0; } // 80371094
  c->r[4]=0u+0x00000000u; // 80371098
  c->lr=0x803710A0u; f_80373AF0(c); // 8037109C
L_803710A0:;
  c->r[3]=c->r[31]|c->r[31]; // 803710A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803710A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803710A8
  c->lr=c->r[0]; // 803710AC
  c->r[1]=c->r[1]+0x00000010u; // 803710B0
  return; // 803710B4
}

// fn_803710B8
void f_803710B8(Ctx* __restrict c) {
  trace_call(0x803710B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803710B8
  c->r[0]=c->lr; // 803710BC
  cmps(c,0,(int32_t)c->r[3],0); // 803710C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803710C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803710C8
  c->r[31]=c->r[3]|c->r[3]; // 803710CC
  if (crb(c,2)) { goto L_80371104; } // 803710D0
  c->r[12]=0u+0x80430000u; // 803710D4
  c->r[12]=c->r[12]+0x00004CF8u; // 803710D8
  W32(c->r[3]+0x00000000u,c->r[12]); // 803710DC
  c->r[12]=R32(c->r[12]+0x00000044u); // 803710E0
  c->ctr=c->r[12]; // 803710E4
  if (true) { c->lr=0x803710ECu; dispatch(c,c->ctr); } // 803710E8
  cmps(c,0,(int32_t)c->r[31],0); // 803710EC
  if (crb(c,2)) { goto L_80371104; } // 803710F0
  if (crb(c,2)) { goto L_80371104; } // 803710F4
  c->r[3]=c->r[31]|c->r[31]; // 803710F8
  c->r[4]=0u+0x00000000u; // 803710FC
  c->lr=0x80371104u; f_80373AF0(c); // 80371100
L_80371104:;
  c->r[3]=c->r[31]|c->r[31]; // 80371104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80371108
  c->r[0]=R32(c->r[1]+0x00000014u); // 8037110C
  c->lr=c->r[0]; // 80371110
  c->r[1]=c->r[1]+0x00000010u; // 80371114
  return; // 80371118
}

// fn_8037111C
void f_8037111C(Ctx* __restrict c) {
  trace_call(0x8037111Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8037111C
  c->r[0]=c->lr; // 80371120
  W32(c->r[1]+0x00000024u,c->r[0]); // 80371124
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80371128
  W32(c->r[1]+0x00000018u,c->r[30]); // 8037112C
  c->r[30]=c->r[5]|c->r[5]; // 80371130
  W32(c->r[1]+0x00000014u,c->r[29]); // 80371134
  c->r[29]=c->r[4]|c->r[4]; // 80371138
  W32(c->r[1]+0x00000010u,c->r[28]); // 8037113C
  c->r[28]=c->r[3]|c->r[3]; // 80371140
  c->r[12]=R32(c->r[3]+0x00000000u); // 80371144
  c->r[12]=R32(c->r[12]+0x00000040u); // 80371148
  c->ctr=c->r[12]; // 8037114C
  if (true) { c->lr=0x80371154u; dispatch(c,c->ctr); } // 80371150
  c->r[31]=c->r[3]|c->r[3]; // 80371154
  c->r[6]=0u+0x00000000u; // 80371158
  c->r[7]=0u+0x00000000u; // 8037115C
  c->r[5]=0u+0x00000000u; // 80371160
  c->r[4]=0u+0x00000000u; // 80371164
  goto L_80371190; // 80371168
L_8037116C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8037116C
  c->r[0]=R16(c->r[3]+c->r[5]); // 80371170
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 80371174
  if (!crb(c,2)) { goto L_80371188; } // 80371178
  c->r[3]=R32(c->r[28]+0x00000014u); // 8037117C
  c->r[6]=0u+0x00000001u; // 80371180
  W16(c->r[3]+c->r[5],c->r[4]); // 80371184
L_80371188:;
  c->r[5]=c->r[5]+0x00000002u; // 80371188
  c->r[7]=c->r[7]+0x00000001u; // 8037118C
L_80371190:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 80371190
  cmpu(c,0,c->r[7],c->r[0]); // 80371194
  if (crb(c,0)) { IRQCHK(c); goto L_8037116C; } // 80371198
  cmps(c,0,(int32_t)c->r[6],0); // 8037119C
  if (crb(c,2)) { goto L_803711B4; } // 803711A0
  c->r[3]=c->r[28]|c->r[28]; // 803711A4
  c->r[4]=0u+0x00000004u; // 803711A8
  c->r[5]=0u+0x00000001u; // 803711AC
  c->lr=0x803711B4u; f_80373CC0(c); // 803711B0
L_803711B4:;
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 803711B4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 803711B8
  c->r[4]=0u+0x00010000u; // 803711BC
  c->r[3]=c->r[30]|c->r[30]; // 803711C0
  W32(c->r[5]+c->r[0],c->r[30]); // 803711C4
  c->r[6]=c->r[28]|c->r[28]; // 803711C8
  c->r[4]=c->r[4]+0x00000002u; // 803711CC
  c->r[5]=0u+0x00000000u; // 803711D0
  c->r[12]=R32(c->r[30]+0x00000000u); // 803711D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803711D8
  c->ctr=c->r[12]; // 803711DC
  if (true) { c->lr=0x803711E4u; dispatch(c,c->ctr); } // 803711E0
  c->r[3]=c->r[31]|c->r[31]; // 803711E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803711E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803711EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803711F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803711F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803711F8
  c->lr=c->r[0]; // 803711FC
  c->r[1]=c->r[1]+0x00000020u; // 80371200
  return; // 80371204
}

// fn_80371208
void f_80371208(Ctx* __restrict c) {
  trace_call(0x80371208u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80371208
  c->r[0]=c->lr; // 8037120C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80371210
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80371214
  c->r[31]=c->r[3]|c->r[3]; // 80371218
  W32(c->r[1]+0x00000018u,c->r[30]); // 8037121C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80371220
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80371224
  W32(c->r[1]+0x00000010u,c->r[28]); // 80371228
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 8037122C
  c->r[28]=R32(c->r[5]+c->r[29]); // 80371230
  cmps(c,0,(int32_t)c->r[28],0); // 80371234
  if (crb(c,2)) { goto L_803712FC; } // 80371238
  c->r[12]=R32(c->r[28]+0x00000000u); // 8037123C
  c->r[30]=0u+0x00010000u; // 80371240
  c->r[3]=c->r[28]|c->r[28]; // 80371244
  c->r[6]=c->r[31]|c->r[31]; // 80371248
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8037124C
  c->r[4]=c->r[30]+0x00000003u; // 80371250
  c->r[5]=0u+0x00000000u; // 80371254
  c->ctr=c->r[12]; // 80371258
  if (true) { c->lr=0x80371260u; dispatch(c,c->ctr); } // 8037125C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80371260
  c->r[0]=0u+0x00000000u; // 80371264
  c->r[6]=0u+0x00000000u; // 80371268
  c->r[7]=0u+0x00000000u; // 8037126C
  W32(c->r[3]+c->r[29],c->r[0]); // 80371270
  c->r[4]=0u+0x00000000u; // 80371274
  goto L_803712D8; // 80371278
L_8037127C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 8037127C
  c->r[8]=c->r[30]+0xFFFF8000u; // 80371280
  c->r[5]=0u+0x00000000u; // 80371284
  c->ctr=c->r[0]; // 80371288
  cmps(c,0,(int32_t)c->r[0],0); // 8037128C
  if (!crb(c,1)) { goto L_803712C8; } // 80371290
L_80371294:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80371294
  c->r[3]=R32(c->r[3]+c->r[5]); // 80371298
  cmps(c,0,(int32_t)c->r[3],0); // 8037129C
  if (crb(c,2)) { goto L_803712C0; } // 803712A0
  c->r[0]=R32(c->r[3]+0x00000014u); // 803712A4
  c->r[0]=R16(c->r[4]+c->r[0]); // 803712A8
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 803712AC
  if (!crb(c,2)) { goto L_803712C0; } // 803712B0
  c->r[6]=0u+0x00000001u; // 803712B4
  c->r[8]=0u+0x00000000u; // 803712B8
  goto L_803712C8; // 803712BC
L_803712C0:;
  c->r[5]=c->r[5]+0x00000004u; // 803712C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80371294; } // 803712C4
L_803712C8:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 803712C8
  c->r[7]=c->r[7]+0x00000001u; // 803712CC
  W16(c->r[3]+c->r[4],c->r[8]); // 803712D0
  c->r[4]=c->r[4]+0x00000002u; // 803712D4
L_803712D8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 803712D8
  cmpu(c,0,c->r[7],c->r[0]); // 803712DC
  if (crb(c,0)) { IRQCHK(c); goto L_8037127C; } // 803712E0
  cmps(c,0,(int32_t)c->r[6],0); // 803712E4
  if (!crb(c,2)) { goto L_803712FC; } // 803712E8
  c->r[3]=c->r[31]|c->r[31]; // 803712EC
  c->r[4]=0u+0x00000004u; // 803712F0
  c->r[5]=0u+0x00000000u; // 803712F4
  c->lr=0x803712FCu; f_80373CC0(c); // 803712F8
L_803712FC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803712FC
  c->r[3]=c->r[28]|c->r[28]; // 80371300
  c->r[30]=R32(c->r[1]+0x00000018u); // 80371304
  c->r[29]=R32(c->r[1]+0x00000014u); // 80371308
  c->r[28]=R32(c->r[1]+0x00000010u); // 8037130C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80371310
  c->lr=c->r[0]; // 80371314
  c->r[1]=c->r[1]+0x00000020u; // 80371318
  return; // 8037131C
}

// fn_80371320
void f_80371320(Ctx* __restrict c) {
  trace_call(0x80371320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80371320
  c->r[0]=c->lr; // 80371324
  W32(c->r[1]+0x00000014u,c->r[0]); // 80371328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8037132C
  c->r[31]=0u+0x00000000u; // 80371330
  W32(c->r[1]+0x00000008u,c->r[30]); // 80371334
  c->r[30]=c->r[3]|c->r[3]; // 80371338
  goto L_8037135C; // 8037133C
L_80371340:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80371340
  c->r[3]=c->r[30]|c->r[30]; // 80371344
  c->r[4]=c->r[31]|c->r[31]; // 80371348
  c->r[12]=R32(c->r[12]+0x00000040u); // 8037134C
  c->ctr=c->r[12]; // 80371350
  if (true) { c->lr=0x80371358u; dispatch(c,c->ctr); } // 80371354
  c->r[31]=c->r[31]+0x00000001u; // 80371358
L_8037135C:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 8037135C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80371360
  if (crb(c,0)) { IRQCHK(c); goto L_80371340; } // 80371364
  c->r[0]=R32(c->r[1]+0x00000014u); // 80371368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8037136C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80371370
  c->lr=c->r[0]; // 80371374
  c->r[1]=c->r[1]+0x00000010u; // 80371378
  return; // 8037137C
}

// fn_80371380
void f_80371380(Ctx* __restrict c) {
  trace_call(0x80371380u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80371380
  c->r[0]=c->lr; // 80371384
  W32(c->r[1]+0x00000024u,c->r[0]); // 80371388
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8037138C
  c->r[31]=0u+0x00000000u; // 80371390
  W32(c->r[1]+0x00000018u,c->r[30]); // 80371394
  c->r[30]=0u+0x00000000u; // 80371398
  W32(c->r[1]+0x00000014u,c->r[29]); // 8037139C
  c->r[29]=c->r[3]|c->r[3]; // 803713A0
  goto L_803713D0; // 803713A4
L_803713A8:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 803713A8
  c->r[3]=R32(c->r[3]+c->r[31]); // 803713AC
  cmps(c,0,(int32_t)c->r[3],0); // 803713B0
  if (crb(c,2)) { goto L_803713C8; } // 803713B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803713B8
  c->r[12]=R32(c->r[12]+0x00000024u); // 803713BC
  c->ctr=c->r[12]; // 803713C0
  if (true) { c->lr=0x803713C8u; dispatch(c,c->ctr); } // 803713C4
L_803713C8:;
  c->r[31]=c->r[31]+0x00000004u; // 803713C8
  c->r[30]=c->r[30]+0x00000001u; // 803713CC
L_803713D0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 803713D0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803713D4
  if (crb(c,0)) { IRQCHK(c); goto L_803713A8; } // 803713D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803713DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803713E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803713E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803713E8
  c->lr=c->r[0]; // 803713EC
  c->r[1]=c->r[1]+0x00000020u; // 803713F0
  return; // 803713F4
}

// fn_803713F8
void f_803713F8(Ctx* __restrict c) {
  trace_call(0x803713F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803713F8
  c->r[0]=c->lr; // 803713FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80371400
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 80371404
  c->f[31]=c->f[1]; // 80371408
  W32(c->r[1]+0x00000014u,c->r[31]); // 8037140C
  c->r[31]=0u+0x00000000u; // 80371410
  W32(c->r[1]+0x00000010u,c->r[30]); // 80371414
  c->r[30]=0u+0x00000000u; // 80371418
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8037141C
  c->r[29]=c->r[3]|c->r[3]; // 80371420
  goto L_80371454; // 80371424
L_80371428:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80371428
  c->r[3]=R32(c->r[3]+c->r[31]); // 8037142C
  cmps(c,0,(int32_t)c->r[3],0); // 80371430
  if (crb(c,2)) { goto L_8037144C; } // 80371434
  c->r[12]=R32(c->r[3]+0x00000000u); // 80371438
  c->f[1]=c->f[31]; // 8037143C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80371440
  c->ctr=c->r[12]; // 80371444
  if (true) { c->lr=0x8037144Cu; dispatch(c,c->ctr); } // 80371448
L_8037144C:;
  c->r[31]=c->r[31]+0x00000004u; // 8037144C
  c->r[30]=c->r[30]+0x00000001u; // 80371450
L_80371454:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80371454
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80371458
  if (crb(c,0)) { IRQCHK(c); goto L_80371428; } // 8037145C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80371460
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80371464
  c->r[31]=R32(c->r[1]+0x00000014u); // 80371468
  c->r[30]=R32(c->r[1]+0x00000010u); // 8037146C
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 80371470
  c->lr=c->r[0]; // 80371474
  c->r[1]=c->r[1]+0x00000020u; // 80371478
  return; // 8037147C
}

// fn_80371480
void f_80371480(Ctx* __restrict c) {
  trace_call(0x80371480u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 80371480
  c->r[6]=0u+0x00000000u; // 80371484
  c->r[5]=0u+0x00000000u; // 80371488
  c->ctr=c->r[0]; // 8037148C
  cmps(c,0,(int32_t)c->r[0],0); // 80371490
  if (!crb(c,1)) { goto L_803714CC; } // 80371494
L_80371498:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80371498
  c->r[0]=R32(c->r[4]+c->r[5]); // 8037149C
  cmps(c,0,(int32_t)c->r[0],0); // 803714A0
  if (crb(c,2)) { goto L_803714C0; } // 803714A4
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803714A8
  c->r[3]=R32(c->r[4]+c->r[0]); // 803714AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803714B0
  c->r[12]=R32(c->r[12]+0x00000020u); // 803714B4
  c->ctr=c->r[12]; // 803714B8
  if (true) { dispatch(c,c->ctr); return; } // 803714BC
L_803714C0:;
  c->r[5]=c->r[5]+0x00000004u; // 803714C0
  c->r[6]=c->r[6]+0x00000001u; // 803714C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80371498; } // 803714C8
L_803714CC:;
  {uint32_t ea=c->r[2]+0xFFFFEA58u; c->f[1]=c->ps1[1]=RF32(ea);} // 803714CC
  return; // 803714D0
}

// fn_803714D4
void f_803714D4(Ctx* __restrict c) {
  trace_call(0x803714D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803714D4
  c->r[0]=c->lr; // 803714D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803714DC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 803714E0
  c->f[31]=c->f[1]; // 803714E4
  W32(c->r[1]+0x00000014u,c->r[31]); // 803714E8
  c->r[31]=0u+0x00000000u; // 803714EC
  W32(c->r[1]+0x00000010u,c->r[30]); // 803714F0
  c->r[30]=0u+0x00000000u; // 803714F4
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 803714F8
  c->r[29]=c->r[3]|c->r[3]; // 803714FC
  goto L_80371530; // 80371500
L_80371504:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80371504
  c->r[3]=R32(c->r[3]+c->r[31]); // 80371508
  cmps(c,0,(int32_t)c->r[3],0); // 8037150C
  if (crb(c,2)) { goto L_80371528; } // 80371510
  c->r[12]=R32(c->r[3]+0x00000000u); // 80371514
  c->f[1]=c->f[31]; // 80371518
  c->r[12]=R32(c->r[12]+0x00000028u); // 8037151C
  c->ctr=c->r[12]; // 80371520
  if (true) { c->lr=0x80371528u; dispatch(c,c->ctr); } // 80371524
L_80371528:;
  c->r[31]=c->r[31]+0x00000004u; // 80371528
  c->r[30]=c->r[30]+0x00000001u; // 8037152C
L_80371530:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 80371530
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80371534
  if (crb(c,0)) { IRQCHK(c); goto L_80371504; } // 80371538
  c->r[0]=R32(c->r[1]+0x00000024u); // 8037153C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80371540
  c->r[31]=R32(c->r[1]+0x00000014u); // 80371544
  c->r[30]=R32(c->r[1]+0x00000010u); // 80371548
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 8037154C
  c->lr=c->r[0]; // 80371550
  c->r[1]=c->r[1]+0x00000020u; // 80371554
  return; // 80371558
}

// fn_8037155C
void f_8037155C(Ctx* __restrict c) {
  trace_call(0x8037155Cu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 8037155C
  c->r[6]=0u+0x00000000u; // 80371560
  c->r[5]=0u+0x00000000u; // 80371564
  c->ctr=c->r[0]; // 80371568
  cmps(c,0,(int32_t)c->r[0],0); // 8037156C
  if (!crb(c,1)) { goto L_803715A8; } // 80371570
L_80371574:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80371574
  c->r[0]=R32(c->r[4]+c->r[5]); // 80371578
  cmps(c,0,(int32_t)c->r[0],0); // 8037157C
  if (crb(c,2)) { goto L_8037159C; } // 80371580
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80371584
  c->r[3]=R32(c->r[4]+c->r[0]); // 80371588
  c->r[12]=R32(c->r[3]+0x00000000u); // 8037158C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80371590
  c->ctr=c->r[12]; // 80371594
  if (true) { dispatch(c,c->ctr); return; } // 80371598
L_8037159C:;
  c->r[5]=c->r[5]+0x00000004u; // 8037159C
  c->r[6]=c->r[6]+0x00000001u; // 803715A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80371574; } // 803715A4
L_803715A8:;
  {uint32_t ea=c->r[2]+0xFFFFEA5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803715A8
  return; // 803715AC
}

// fn_803715B0
void f_803715B0(Ctx* __restrict c) {
  trace_call(0x803715B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803715B0
  c->r[0]=c->lr; // 803715B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803715B8
  c->r[11]=c->r[1]+0x00000030u; // 803715BC
  c->lr=0x803715C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803715C0
  c->r[25]=c->r[3]|c->r[3]; // 803715C4
  c->r[26]=c->r[4]|c->r[4]; // 803715C8
  c->r[29]=0u+0x00000000u; // 803715CC
  c->r[28]=0u+0x00000000u; // 803715D0
  c->r[30]=0u+0x00000000u; // 803715D4
  c->r[31]=0u+0x00000000u; // 803715D8
  goto L_80371668; // 803715DC
L_803715E0:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 803715E0
  c->r[27]=R32(c->r[3]+c->r[30]); // 803715E4
  cmps(c,0,(int32_t)c->r[27],0); // 803715E8
  if (crb(c,2)) { goto L_80371660; } // 803715EC
  c->r[0]=R32(c->r[26]+0x00000000u); // 803715F0
  c->r[3]=c->r[27]|c->r[27]; // 803715F4
  c->r[4]=c->r[1]+0x00000008u; // 803715F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803715FC
  c->r[12]=R32(c->r[27]+0x00000000u); // 80371600
  c->r[12]=R32(c->r[12]+0x00000030u); // 80371604
  c->ctr=c->r[12]; // 80371608
  if (true) { c->lr=0x80371610u; dispatch(c,c->ctr); } // 8037160C
  cmps(c,0,(int32_t)c->r[29],0); // 80371610
  c->r[29]=0u+0x00000000u; // 80371614
  if (!crb(c,2)) { goto L_80371624; } // 80371618
  cmps(c,0,(int32_t)c->r[3],0); // 8037161C
  if (crb(c,2)) { goto L_80371628; } // 80371620
L_80371624:;
  c->r[29]=0u+0x00000001u; // 80371624
L_80371628:;
  c->r[5]=0u+0x00000000u; // 80371628
  c->r[4]=0u+0x00000000u; // 8037162C
  goto L_80371654; // 80371630
L_80371634:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 80371634
  c->r[0]=R16(c->r[3]+c->r[4]); // 80371638
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8037163C
  if (!crb(c,2)) { goto L_8037164C; } // 80371640
  c->r[3]=R32(c->r[25]+0x00000014u); // 80371644
  W16(c->r[3]+c->r[4],c->r[31]); // 80371648
L_8037164C:;
  c->r[4]=c->r[4]+0x00000002u; // 8037164C
  c->r[5]=c->r[5]+0x00000001u; // 80371650
L_80371654:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 80371654
  cmpu(c,0,c->r[5],c->r[0]); // 80371658
  if (crb(c,0)) { IRQCHK(c); goto L_80371634; } // 8037165C
L_80371660:;
  c->r[30]=c->r[30]+0x00000004u; // 80371660
  c->r[28]=c->r[28]+0x00000001u; // 80371664
L_80371668:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 80371668
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 8037166C
  if (crb(c,0)) { IRQCHK(c); goto L_803715E0; } // 80371670
  c->r[3]=c->r[25]|c->r[25]; // 80371674
  c->r[4]=0u+0x00000004u; // 80371678
  c->r[5]=0u+0x00000001u; // 8037167C
  c->lr=0x80371684u; f_80373CC0(c); // 80371680
  c->r[11]=c->r[1]+0x00000030u; // 80371684
  c->r[3]=c->r[29]|c->r[29]; // 80371688
  c->lr=0x80371690u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8037168C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80371690
  c->lr=c->r[0]; // 80371694
  c->r[1]=c->r[1]+0x00000030u; // 80371698
  return; // 8037169C
}

// fn_803716A0
void f_803716A0(Ctx* __restrict c) {
  trace_call(0x803716A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803716A0
  c->r[0]=c->lr; // 803716A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803716A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803716AC
  c->r[31]=0u+0x00000000u; // 803716B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803716B4
  c->r[30]=0u+0x00000000u; // 803716B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803716BC
  c->r[29]=c->r[3]|c->r[3]; // 803716C0
  goto L_803716F0; // 803716C4
L_803716C8:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 803716C8
  c->r[3]=R32(c->r[3]+c->r[31]); // 803716CC
  cmps(c,0,(int32_t)c->r[3],0); // 803716D0
  if (crb(c,2)) { goto L_803716E8; } // 803716D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803716D8
  c->r[12]=R32(c->r[12]+0x00000034u); // 803716DC
  c->ctr=c->r[12]; // 803716E0
  if (true) { c->lr=0x803716E8u; dispatch(c,c->ctr); } // 803716E4
L_803716E8:;
  c->r[31]=c->r[31]+0x00000004u; // 803716E8
  c->r[30]=c->r[30]+0x00000001u; // 803716EC
L_803716F0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 803716F0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803716F4
  if (crb(c,0)) { IRQCHK(c); goto L_803716C8; } // 803716F8
  c->r[3]=0u+0x00010000u; // 803716FC
  c->r[5]=0u+0x00000000u; // 80371700
  c->r[4]=c->r[3]+0xFFFF8000u; // 80371704
  c->r[6]=0u+0x00000000u; // 80371708
  goto L_80371720; // 8037170C
L_80371710:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80371710
  c->r[5]=c->r[5]+0x00000001u; // 80371714
  W16(c->r[3]+c->r[6],c->r[4]); // 80371718
  c->r[6]=c->r[6]+0x00000002u; // 8037171C
L_80371720:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80371720
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80371724
  if (crb(c,0)) { IRQCHK(c); goto L_80371710; } // 80371728
  c->r[3]=c->r[29]|c->r[29]; // 8037172C
  c->r[4]=0u+0x00000004u; // 80371730
  c->r[5]=0u+0x00000000u; // 80371734
  c->lr=0x8037173Cu; f_80373CC0(c); // 80371738
  c->r[0]=R32(c->r[1]+0x00000024u); // 8037173C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80371740
  c->r[30]=R32(c->r[1]+0x00000018u); // 80371744
  c->r[29]=R32(c->r[1]+0x00000014u); // 80371748
  c->lr=c->r[0]; // 8037174C
  c->r[1]=c->r[1]+0x00000020u; // 80371750
  return; // 80371754
}

// fn_80371758
void f_80371758(Ctx* __restrict c) {
  trace_call(0x80371758u);
  c->r[5]=0u+0x00010000u; // 80371758
  c->r[0]=c->r[5]+0x00000002u; // 8037175C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80371760
  if (crb(c,2)) { goto L_803717E0; } // 80371764
  if (!crb(c,0)) { goto L_8037177C; } // 80371768
  c->r[0]=c->r[5]+0x00000001u; // 8037176C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80371770
  if (!crb(c,0)) { goto L_8037178C; } // 80371774
  return; // 80371778
L_8037177C:;
  c->r[0]=c->r[5]+0x00000004u; // 8037177C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80371780
  if (!crb(c,0)) return; // 80371784
  goto L_803717D4; // 80371788
L_8037178C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8037178C
  c->r[4]=0u+0x00000000u; // 80371790
  c->r[7]=0u+0x00000000u; // 80371794
  c->ctr=c->r[0]; // 80371798
  cmps(c,0,(int32_t)c->r[0],0); // 8037179C
  if (!crb(c,1)) return; // 803717A0
L_803717A4:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 803717A4
  c->r[0]=R32(c->r[5]+c->r[7]); // 803717A8
  cmpu(c,0,c->r[0],c->r[6]); // 803717AC
  if (!crb(c,2)) { goto L_803717C4; } // 803717B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803717B4
  c->r[12]=R32(c->r[12]+0x00000040u); // 803717B8
  c->ctr=c->r[12]; // 803717BC
  if (true) { dispatch(c,c->ctr); return; } // 803717C0
L_803717C4:;
  c->r[7]=c->r[7]+0x00000004u; // 803717C4
  c->r[4]=c->r[4]+0x00000001u; // 803717C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803717A4; } // 803717CC
  return; // 803717D0
L_803717D4:;
  c->r[0]=0u+0x00000000u; // 803717D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 803717D8
  return; // 803717DC
L_803717E0:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 803717E0
  return; // 803717E4
}

// Construct__Q34nw4r3g3d14AnmObjChrBlendFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdli
void f_803717E8(Ctx* __restrict c) {
  trace_call(0x803717E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803717E8
  c->r[0]=c->lr; // 803717EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803717F0
  c->r[11]=c->r[1]+0x00000030u; // 803717F4
  c->lr=0x803717FCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803717F8
  c->r[0]=R32(c->r[5]+0x00000000u); // 803717FC
  c->r[25]=c->r[3]|c->r[3]; // 80371800
  c->r[29]=c->r[4]|c->r[4]; // 80371804
  c->r[30]=c->r[6]|c->r[6]; // 80371808
  cmps(c,0,(int32_t)c->r[0],0); // 8037180C
  if (!crb(c,2)) { goto L_8037181C; } // 80371810
  c->r[3]=0u+0x00000000u; // 80371814
  goto L_80371944; // 80371818
L_8037181C:;
  c->r[3]=c->r[5]|c->r[5]; // 8037181C
  c->lr=0x80371824u; f_80365DFC(c); // 80371820
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80371824
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80371828
  c->r[0]=c->r[4]+0x00000027u; // 8037182C
  c->r[28]=c->r[3]|c->r[3]; // 80371830
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80371834
  cmps(c,0,(int32_t)c->r[29],0); // 80371838
  c->r[3]=c->r[27]+c->r[5]; // 8037183C
  c->r[0]=c->r[3]+0x00000003u; // 80371840
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80371844
  c->r[3]=c->r[26]+c->r[5]; // 80371848
  c->r[0]=c->r[3]+0x00000003u; // 8037184C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80371850
  if (crb(c,2)) { goto L_8037185C; } // 80371854
  W32(c->r[29]+0x00000000u,c->r[4]); // 80371858
L_8037185C:;
  cmps(c,0,(int32_t)c->r[25],0); // 8037185C
  if (!crb(c,2)) { goto L_8037186C; } // 80371860
  c->r[3]=0u+0x00000000u; // 80371864
  goto L_80371944; // 80371868
L_8037186C:;
  c->r[3]=c->r[25]|c->r[25]; // 8037186C
  c->lr=0x80371874u; f_802A703C(c); // 80371870
  cmps(c,0,(int32_t)c->r[3],0); // 80371874
  c->r[31]=c->r[3]|c->r[3]; // 80371878
  if (!crb(c,2)) { goto L_80371888; } // 8037187C
  c->r[3]=0u+0x00000000u; // 80371880
  goto L_80371944; // 80371884
L_80371888:;
  if (crb(c,2)) { goto L_80371940; } // 80371888
  c->r[29]=0u+0x00000000u; // 8037188C
  c->r[12]=0u+0x80430000u; // 80371890
  W32(c->r[3]+0x00000004u,c->r[29]); // 80371894
  c->r[12]=c->r[12]+0x00004D48u; // 80371898
  c->r[0]=c->r[3]+0x00000024u; // 8037189C
  W32(c->r[3]+0x00000008u,c->r[25]); // 803718A0
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 803718A4
  W32(c->r[3]+0x00000000u,c->r[12]); // 803718A8
  W32(c->r[3]+0x00000010u,c->r[28]); // 803718AC
  W32(c->r[3]+0x00000014u,c->r[0]); // 803718B0
  c->r[12]=R32(c->r[12]+0x00000034u); // 803718B4
  c->ctr=c->r[12]; // 803718B8
  if (true) { c->lr=0x803718C0u; dispatch(c,c->ctr); } // 803718BC
  c->r[3]=0u+0x80430000u; // 803718C0
  c->r[0]=c->r[31]+c->r[27]; // 803718C4
  c->r[3]=c->r[3]+0x00004CF8u; // 803718C8
  c->r[4]=0u+0x00000000u; // 803718CC
  W32(c->r[31]+0x00000000u,c->r[3]); // 803718D0
  c->r[5]=0u+0x00000000u; // 803718D4
  W32(c->r[31]+0x00000018u,c->r[30]); // 803718D8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 803718DC
  goto L_803718F4; // 803718E0
L_803718E4:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 803718E4
  c->r[4]=c->r[4]+0x00000001u; // 803718E8
  W32(c->r[3]+c->r[5],c->r[29]); // 803718EC
  c->r[5]=c->r[5]+0x00000004u; // 803718F0
L_803718F4:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 803718F4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803718F8
  if (crb(c,0)) { IRQCHK(c); goto L_803718E4; } // 803718FC
  c->r[3]=0u+0x80430000u; // 80371900
  c->r[0]=c->r[31]+c->r[26]; // 80371904
  c->r[3]=c->r[3]+0x00004CA8u; // 80371908
  {uint32_t ea=c->r[2]+0xFFFFEA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8037190C
  W32(c->r[31]+0x00000000u,c->r[3]); // 80371910
  c->r[4]=0u+0x00000000u; // 80371914
  c->r[5]=0u+0x00000000u; // 80371918
  W32(c->r[31]+0x00000020u,c->r[0]); // 8037191C
  goto L_80371934; // 80371920
L_80371924:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 80371924
  c->r[4]=c->r[4]+0x00000001u; // 80371928
  {uint32_t ea=c->r[3]+c->r[5]; WF32(ea,c->f[0]);} // 8037192C
  c->r[5]=c->r[5]+0x00000004u; // 80371930
L_80371934:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 80371934
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80371938
  if (crb(c,0)) { IRQCHK(c); goto L_80371924; } // 8037193C
L_80371940:;
  c->r[3]=c->r[31]|c->r[31]; // 80371940
L_80371944:;
  c->r[11]=c->r[1]+0x00000030u; // 80371944
  c->lr=0x8037194Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80371948
  c->r[0]=R32(c->r[1]+0x00000034u); // 8037194C
  c->lr=c->r[0]; // 80371950
  c->r[1]=c->r[1]+0x00000030u; // 80371954
  return; // 80371958
}

// fn_8037195C
void f_8037195C(Ctx* __restrict c) {
  trace_call(0x8037195Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8037195C
  c->r[0]=c->lr; // 80371960
  W32(c->r[1]+0x00000064u,c->r[0]); // 80371964
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80371968
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8037196C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80371970
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80371974
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80371978
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 8037197C
  c->r[11]=c->r[1]+0x00000030u; // 80371980
  c->lr=0x80371988u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80371984
  c->r[23]=c->r[3]|c->r[3]; // 80371988
  c->r[24]=c->r[4]|c->r[4]; // 8037198C
  c->r[25]=c->r[5]|c->r[5]; // 80371990
  c->lr=0x80371998u; f_8037A5C0(c); // 80371994
  {uint32_t ea=c->r[2]+0xFFFFEA58u; c->f[30]=c->ps1[30]=RF32(ea);} // 80371998
  c->r[28]=c->r[3]|c->r[3]; // 8037199C
  c->r[30]=c->r[28]|c->r[28]; // 803719A0
  c->r[29]=rotl(c->r[25],1)&0xFFFFFFFEu; // 803719A4
  c->f[31]=c->f[30]; // 803719A8
  c->r[27]=0u+0x00000000u; // 803719AC
  c->r[26]=0u+0x00000000u; // 803719B0
  c->r[31]=0u+0x00000000u; // 803719B4
  goto L_80371A40; // 803719B8
L_803719BC:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 803719BC
  c->r[3]=R32(c->r[23]+0x0000001Cu); // 803719C0
  {uint32_t ea=c->r[4]+c->r[31]; c->f[29]=c->ps1[29]=RF32(ea);} // 803719C4
  c->r[3]=R32(c->r[3]+c->r[31]); // 803719C8
  fcmp(c,0,c->f[31],c->f[29]); // 803719CC
  c->r[0]=0u-c->r[3]; // 803719D0
  c->r[0]=c->r[0]|c->r[3]; // 803719D4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 803719D8
  c->r[0]=c->cr; // 803719DC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 803719E0
  c->r[0]=c->r[0]^0x00000001u; // 803719E4
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 803719E8
  if (crb(c,2)) { goto L_80371A38; } // 803719EC
  c->r[0]=R32(c->r[3]+0x00000014u); // 803719F0
  c->r[0]=R16(c->r[29]+c->r[0]); // 803719F4
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 803719F8
  if (!crb(c,2)) { goto L_80371A38; } // 803719FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80371A00
  c->r[4]=c->r[30]|c->r[30]; // 80371A04
  c->r[5]=c->r[25]|c->r[25]; // 80371A08
  c->r[12]=R32(c->r[12]+0x00000038u); // 80371A0C
  c->ctr=c->r[12]; // 80371A10
  if (true) { c->lr=0x80371A18u; dispatch(c,c->ctr); } // 80371A14
  c->r[0]=R32(c->r[3]+0x00000000u); // 80371A18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80371A1C
  if (crb(c,2)) { goto L_80371A38; } // 80371A20
  W32(c->r[30]+0x00000218u,c->r[3]); // 80371A24
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[29]); // 80371A28
  c->r[27]=c->r[27]+0x00000001u; // 80371A2C
  {uint32_t ea=c->r[30]+0x0000021Cu; WF32(ea,c->f[29]);} // 80371A30
  c->r[30]=c->r[30]+0x00000220u; // 80371A34
L_80371A38:;
  c->r[31]=c->r[31]+0x00000004u; // 80371A38
  c->r[26]=c->r[26]+0x00000001u; // 80371A3C
L_80371A40:;
  c->r[0]=R32(c->r[23]+0x00000018u); // 80371A40
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80371A44
  if (crb(c,0)) { IRQCHK(c); goto L_803719BC; } // 80371A48
  cmps(c,0,(int32_t)c->r[27],0); // 80371A4C
  if (!crb(c,2)) { goto L_80371A64; } // 80371A50
  c->r[0]=0u+0x00000000u; // 80371A54
  c->r[3]=c->r[24]|c->r[24]; // 80371A58
  W32(c->r[24]+0x00000000u,c->r[0]); // 80371A5C
  goto L_80371C34; // 80371A60
L_80371A64:;
  cmps(c,0,(int32_t)c->r[27],1); // 80371A64
  if (!crb(c,2)) { goto L_80371AD8; } // 80371A68
  c->r[3]=R32(c->r[28]+0x00000218u); // 80371A6C
  cmpu(c,0,c->r[3],c->r[28]); // 80371A70
  if (!crb(c,2)) { goto L_80371C34; } // 80371A74
  c->r[6]=R32(c->r[3]+0x00000000u); // 80371A78
  c->r[0]=0u+0x00000040u; // 80371A7C
  c->r[5]=c->r[24]+0x00000014u; // 80371A80
  c->r[4]=c->r[3]+0x00000014u; // 80371A84
  W32(c->r[24]+0x00000000u,c->r[6]); // 80371A88
  c->r[6]=R32(c->r[3]+0x00000004u); // 80371A8C
  W32(c->r[24]+0x00000004u,c->r[6]); // 80371A90
  c->r[7]=R32(c->r[3]+0x00000008u); // 80371A94
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 80371A98
  W32(c->r[24]+0x00000008u,c->r[7]); // 80371A9C
  W32(c->r[24]+0x0000000Cu,c->r[6]); // 80371AA0
  c->r[6]=R32(c->r[3]+0x00000010u); // 80371AA4
  W32(c->r[24]+0x00000010u,c->r[6]); // 80371AA8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80371AAC
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[0]);} // 80371AB0
  c->ctr=c->r[0]; // 80371AB4
L_80371AB8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80371AB8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80371ABC
  W32(c->r[5]+0x00000004u,c->r[3]); // 80371AC0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80371AC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80371AB8; } // 80371AC8
  c->r[3]=c->r[24]|c->r[24]; // 80371ACC
  goto L_80371C34; // 80371AD0
  goto L_80371C34; // 80371AD4
L_80371AD8:;
  c->r[3]=R32(c->r[28]+0x00000218u); // 80371AD8
  c->f[3]=c->ps1[3]=fres(c->f[30]); // 80371ADC
  c->r[0]=0u+0x00000000u; // 80371AE0
  {uint32_t ea=c->r[2]+0xFFFFEA58u; c->f[2]=c->ps1[2]=RF32(ea);} // 80371AE4
  c->r[4]=R32(c->r[3]+0x00000000u); // 80371AE8
  c->r[3]=0u+0x00000000u; // 80371AEC
  W32(c->r[24]+0x00000000u,c->r[4]); // 80371AF0
  W32(c->r[24]+0x00000004u,c->r[0]); // 80371AF4
  {double t0=S(c->f[3]+c->f[3]), t1=S(c->ps1[3]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80371AF8
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80371AFC
  c->r[4]=R32(c->r[28]+0x00000218u); // 80371B00
  c->r[0]=R32(c->r[4]+0x00000008u); // 80371B04
  {double t0=S(-std::fma(c->f[30],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[30],c->ps1[0],-c->ps1[1])); c->f[3]=t0; c->ps1[3]=t1;} // 80371B08
  W32(c->r[24]+0x00000008u,c->r[0]); // 80371B0C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80371B10
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 80371B14
  c->r[0]=R32(c->r[4]+0x00000010u); // 80371B18
  W32(c->r[24]+0x00000010u,c->r[0]); // 80371B1C
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[2]);} // 80371B20
  goto L_80371C28; // 80371B24
L_80371B28:;
  {uint32_t ea=c->r[28]+0x0000021Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80371B28
  c->r[10]=0u+0x00000000u; // 80371B2C
  c->r[9]=R32(c->r[28]+0x00000218u); // 80371B30
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[3]); // 80371B34
  {uint32_t ea=c->r[24]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80371B38
  {uint32_t ea=c->r[9]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80371B3C
  c->r[6]=c->r[9]+0x00000018u; // 80371B40
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 80371B44
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80371B48
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[0]);} // 80371B4C
  goto L_80371C14; // 80371B50
L_80371B54:;
  c->r[8]=R32(c->r[24]+0x00000004u); // 80371B54
  c->r[7]=c->r[24]|c->r[24]; // 80371B58
  c->r[11]=0u+0x00000000u; // 80371B5C
  c->ctr=c->r[8]; // 80371B60
  cmpu(c,0,c->r[8],0x00000000u); // 80371B64
  if (!crb(c,1)) { goto L_80371BB8; } // 80371B68
L_80371B6C:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 80371B6C
  c->r[5]=0u+0x00000000u; // 80371B70
  c->r[0]=R32(c->r[7]+0x00000018u); // 80371B74
  cmpu(c,0,c->r[4],c->r[0]); // 80371B78
  if (!crb(c,2)) { goto L_80371BA4; } // 80371B7C
  c->r[4]=R32(c->r[6]+0x00000004u); // 80371B80
  c->r[0]=R32(c->r[7]+0x0000001Cu); // 80371B84
  cmpu(c,0,c->r[4],c->r[0]); // 80371B88
  if (!crb(c,2)) { goto L_80371BA4; } // 80371B8C
  c->r[4]=R32(c->r[6]+0x00000008u); // 80371B90
  c->r[0]=R32(c->r[7]+0x00000020u); // 80371B94
  cmpu(c,0,c->r[4],c->r[0]); // 80371B98
  if (!crb(c,2)) { goto L_80371BA4; } // 80371B9C
  c->r[5]=0u+0x00000001u; // 80371BA0
L_80371BA4:;
  cmps(c,0,(int32_t)c->r[5],0); // 80371BA4
  if (!crb(c,2)) { goto L_80371BB8; } // 80371BA8
  c->r[7]=c->r[7]+0x00000010u; // 80371BAC
  c->r[11]=c->r[11]+0x00000001u; // 80371BB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80371B6C; } // 80371BB4
L_80371BB8:;
  cmpu(c,0,c->r[11],c->r[8]); // 80371BB8
  if (!crb(c,2)) { goto L_80371BF0; } // 80371BBC
  c->r[4]=rotl(c->r[11],4)&0xFFFFFFF0u; // 80371BC0
  c->r[0]=R32(c->r[6]+0x00000000u); // 80371BC4
  c->r[4]=c->r[24]+c->r[4]; // 80371BC8
  W32(c->r[4]+0x00000018u,c->r[0]); // 80371BCC
  c->r[0]=R32(c->r[6]+0x00000004u); // 80371BD0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80371BD4
  c->r[0]=R32(c->r[6]+0x00000008u); // 80371BD8
  W32(c->r[4]+0x00000020u,c->r[0]); // 80371BDC
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[2]);} // 80371BE0
  c->r[4]=R32(c->r[24]+0x00000004u); // 80371BE4
  c->r[0]=c->r[4]+0x00000001u; // 80371BE8
  W32(c->r[24]+0x00000004u,c->r[0]); // 80371BEC
L_80371BF0:;
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80371BF0
  c->r[0]=rotl(c->r[11],4)&0xFFFFFFF0u; // 80371BF4
  c->r[4]=c->r[24]+c->r[0]; // 80371BF8
  c->r[6]=c->r[6]+0x00000010u; // 80371BFC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 80371C00
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80371C04
  c->r[10]=c->r[10]+0x00000001u; // 80371C08
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80371C0C
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 80371C10
L_80371C14:;
  c->r[0]=R32(c->r[9]+0x00000004u); // 80371C14
  cmpu(c,0,c->r[10],c->r[0]); // 80371C18
  if (crb(c,0)) { IRQCHK(c); goto L_80371B54; } // 80371C1C
  c->r[28]=c->r[28]+0x00000220u; // 80371C20
  c->r[3]=c->r[3]+0x00000001u; // 80371C24
L_80371C28:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[27]); // 80371C28
  if (crb(c,0)) { IRQCHK(c); goto L_80371B28; } // 80371C2C
  c->r[3]=c->r[24]|c->r[24]; // 80371C30
L_80371C34:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80371C34
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80371C38
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80371C3C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80371C40
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80371C44
  c->r[11]=c->r[1]+0x00000030u; // 80371C48
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80371C4C
  c->lr=0x80371C54u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80371C50
  c->r[0]=R32(c->r[1]+0x00000064u); // 80371C54
  c->lr=c->r[0]; // 80371C58
  c->r[1]=c->r[1]+0x00000060u; // 80371C5C
  return; // 80371C60
}

// fn_80371C64
void f_80371C64(Ctx* __restrict c) {
  trace_call(0x80371C64u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80371C64
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80371C68
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 80371C6C
  return; // 80371C70
}

// fn_80371C74
void f_80371C74(Ctx* __restrict c) {
  trace_call(0x80371C74u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80371C74
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80371C78
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80371C7C
  return; // 80371C80
}

// Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb
void f_80371C84(Ctx* __restrict c) {
  trace_call(0x80371C84u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80371C84
  c->r[0]=c->lr; // 80371C88
  W32(c->r[1]+0x00000044u,c->r[0]); // 80371C8C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80371C90
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80371C94
  c->r[11]=c->r[1]+0x00000030u; // 80371C98
  c->lr=0x80371CA0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80371C9C
  c->r[8]=R32(c->r[5]+0x00000000u); // 80371CA0
  c->r[27]=c->r[3]|c->r[3]; // 80371CA4
  c->r[29]=c->r[4]|c->r[4]; // 80371CA8
  c->r[28]=c->r[5]|c->r[5]; // 80371CAC
  cmps(c,0,(int32_t)c->r[8],0); // 80371CB0
  c->r[24]=c->r[7]|c->r[7]; // 80371CB4
  if (crb(c,2)) { goto L_80371CC8; } // 80371CB8
  c->r[0]=R32(c->r[6]+0x00000000u); // 80371CBC
  cmps(c,0,(int32_t)c->r[0],0); // 80371CC0
  if (!crb(c,2)) { goto L_80371CD0; } // 80371CC4
L_80371CC8:;
  c->r[3]=0u+0x00000000u; // 80371CC8
  goto L_80371EA4; // 80371CCC
L_80371CD0:;
  c->r[0]=R32(c->r[8]+0x00000010u); // 80371CD0
  cmps(c,0,(int32_t)c->r[0],0); // 80371CD4
  if (crb(c,2)) { goto L_80371CE4; } // 80371CD8
  c->r[3]=c->r[8]+c->r[0]; // 80371CDC
  goto L_80371CE8; // 80371CE0
L_80371CE4:;
  c->r[3]=0u+0x00000000u; // 80371CE4
L_80371CE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80371CE8
  if (crb(c,2)) { goto L_80371CF8; } // 80371CEC
  c->r[25]=R32(c->r[3]+0x00000004u); // 80371CF0
  goto L_80371CFC; // 80371CF4
L_80371CF8:;
  c->r[25]=0u+0x00000000u; // 80371CF8
L_80371CFC:;
  c->r[3]=c->r[6]|c->r[6]; // 80371CFC
  c->lr=0x80371D04u; f_80365DFC(c); // 80371D00
  c->r[5]=R32(c->r[28]+0x00000000u); // 80371D04
  c->r[0]=0u-c->r[24]; // 80371D08
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80371D0C
  c->r[26]=c->r[3]|c->r[3]; // 80371D10
  c->r[6]=R16(c->r[5]+0x00000022u); // 80371D14
  c->r[0]=c->r[0]|c->r[24]; // 80371D18
  c->r[5]=sraw(c,c->r[0],31); // 80371D1C
  c->r[4]=c->r[4]+0x0000003Bu; // 80371D20
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 80371D24
  cmps(c,0,(int32_t)c->r[29],0); // 80371D28
  c->r[5]=c->r[25]&c->r[5]; // 80371D2C
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 80371D30
  c->r[3]=c->r[30]+c->r[0]; // 80371D34
  c->r[0]=c->r[3]+0x00000003u; // 80371D38
  c->r[24]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 80371D3C
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80371D40
  c->r[3]=c->r[25]+c->r[24]; // 80371D44
  c->r[0]=c->r[3]+0x00000003u; // 80371D48
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80371D4C
  if (crb(c,2)) { goto L_80371D58; } // 80371D50
  W32(c->r[29]+0x00000000u,c->r[4]); // 80371D54
L_80371D58:;
  cmps(c,0,(int32_t)c->r[27],0); // 80371D58
  if (!crb(c,2)) { goto L_80371D68; } // 80371D5C
  c->r[3]=0u+0x00000000u; // 80371D60
  goto L_80371EA4; // 80371D64
L_80371D68:;
  c->r[3]=c->r[27]|c->r[27]; // 80371D68
  c->lr=0x80371D70u; f_802A703C(c); // 80371D6C
  cmps(c,0,(int32_t)c->r[3],0); // 80371D70
  c->r[31]=c->r[3]|c->r[3]; // 80371D74
  if (!crb(c,2)) { goto L_80371D84; } // 80371D78
  c->r[3]=0u+0x00000000u; // 80371D7C
  goto L_80371EA4; // 80371D80
L_80371D84:;
  c->r[5]=c->r[3]+0x00000038u; // 80371D84
  c->r[30]=c->r[3]+c->r[30]; // 80371D88
  c->r[29]=c->r[3]+c->r[25]; // 80371D8C
  if (crb(c,2)) { goto L_80371EA0; } // 80371D90
  cmps(c,0,(int32_t)c->r[24],0); // 80371D94
  c->r[28]=R32(c->r[28]+0x00000000u); // 80371D98
  if (crb(c,2)) { goto L_80371DA4; } // 80371D9C
  goto L_80371DA8; // 80371DA0
L_80371DA4:;
  c->r[29]=0u+0x00000000u; // 80371DA4
L_80371DA8:;
  c->r[0]=0u+0x00000000u; // 80371DA8
  c->r[4]=0u+0x80430000u; // 80371DAC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80371DB0
  c->r[4]=c->r[4]+0x00004D48u; // 80371DB4
  W32(c->r[3]+0x00000008u,c->r[27]); // 80371DB8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80371DBC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80371DC0
  W32(c->r[3]+0x00000010u,c->r[26]); // 80371DC4
  W32(c->r[3]+0x00000014u,c->r[5]); // 80371DC8
  c->r[3]=c->r[31]|c->r[31]; // 80371DCC
  c->r[12]=R32(c->r[31]+0x00000000u); // 80371DD0
  c->r[12]=R32(c->r[12]+0x00000034u); // 80371DD4
  c->ctr=c->r[12]; // 80371DD8
  if (true) { c->lr=0x80371DE0u; dispatch(c,c->ctr); } // 80371DDC
  c->r[4]=R16(c->r[28]+0x00000020u); // 80371DE0
  c->r[0]=0u+0x43300000u; // 80371DE4
  c->r[5]=R32(c->r[28]+0x00000024u); // 80371DE8
  c->r[3]=0u+0x80430000u; // 80371DEC
  c->r[4]=c->r[4]^0x80000000u; // 80371DF0
  {uint32_t ea=c->r[2]+0xFFFFEA58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80371DF4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80371DF8
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80371DFC
  {uint32_t ea=c->r[2]+0xFFFFEA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80371E00
  c->r[4]=c->r[13]+0xFFFF92D8u; // 80371E04
  W32(c->r[1]+0x00000008u,c->r[0]); // 80371E08
  c->r[3]=c->r[3]+0x00004C58u; // 80371E0C
  {uint32_t ea=c->r[2]+0xFFFFEA60u; c->f[3]=RF64(ea);} // 80371E10
  cmps(c,0,(int32_t)c->r[29],0); // 80371E14
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 80371E18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80371E1C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80371E20
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 80371E24
  c->r[0]=R32(c->r[4]+c->r[5]); // 80371E28
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 80371E2C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80371E30
  W32(c->r[31]+0x00000028u,c->r[0]); // 80371E34
  W32(c->r[31]+0x00000000u,c->r[3]); // 80371E38
  W32(c->r[31]+0x0000002Cu,c->r[28]); // 80371E3C
  W32(c->r[31]+0x00000030u,c->r[30]); // 80371E40
  W32(c->r[31]+0x00000034u,c->r[29]); // 80371E44
  if (crb(c,2)) { goto L_80371EA0; } // 80371E48
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 80371E4C
  c->r[26]=0u+0x00000000u; // 80371E50
  c->r[25]=0u+0x00000000u; // 80371E54
  goto L_80371E94; // 80371E58
L_80371E5C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80371E5C
  c->r[3]=R16(c->r[3]+c->r[25]); // 80371E60
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80371E64
  if (!crb(c,2)) { goto L_80371E8C; } // 80371E68
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80371E6C
  c->f[1]=c->f[31]; // 80371E70
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 80371E74
  c->r[4]=R32(c->r[31]+0x00000034u); // 80371E78
  c->r[6]=R32(c->r[31]+0x00000030u); // 80371E7C
  c->r[3]=c->r[31]+0x0000002Cu; // 80371E80
  c->r[4]=c->r[4]+c->r[0]; // 80371E84
  c->lr=0x80371E8Cu; f_8036CB44(c); // 80371E88
L_80371E8C:;
  c->r[25]=c->r[25]+0x00000002u; // 80371E8C
  c->r[26]=c->r[26]+0x00000001u; // 80371E90
L_80371E94:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80371E94
  cmpu(c,0,c->r[26],c->r[0]); // 80371E98
  if (crb(c,0)) { IRQCHK(c); goto L_80371E5C; } // 80371E9C
L_80371EA0:;
  c->r[3]=c->r[31]|c->r[31]; // 80371EA0
L_80371EA4:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80371EA4
  c->r[11]=c->r[1]+0x00000030u; // 80371EA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80371EAC
  c->lr=0x80371EB4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80371EB0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80371EB4
  c->lr=c->r[0]; // 80371EB8
  c->r[1]=c->r[1]+0x00000040u; // 80371EBC
  return; // 80371EC0
}

// SetFrame__Q34nw4r3g3d12AnmObjShpResFf
void f_80371EC4(Ctx* __restrict c) {
  trace_call(0x80371EC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80371EC4
  c->r[0]=c->lr; // 80371EC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80371ECC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80371ED0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80371ED4
  c->f[3]=c->f[1]; // 80371ED8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80371EDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80371EE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80371EE4
  c->r[29]=c->r[3]|c->r[3]; // 80371EE8
  c->r[12]=R32(c->r[3]+0x00000028u); // 80371EEC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80371EF0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80371EF4
  c->ctr=c->r[12]; // 80371EF8
  if (true) { c->lr=0x80371F00u; dispatch(c,c->ctr); } // 80371EFC
  c->r[0]=R32(c->r[29]+0x00000034u); // 80371F00
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80371F04
  cmps(c,0,(int32_t)c->r[0],0); // 80371F08
  if (crb(c,2)) { goto L_80371F64; } // 80371F0C
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80371F10
  c->r[31]=0u+0x00000000u; // 80371F14
  c->r[30]=0u+0x00000000u; // 80371F18
  goto L_80371F58; // 80371F1C
L_80371F20:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 80371F20
  c->r[3]=R16(c->r[3]+c->r[30]); // 80371F24
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80371F28
  if (!crb(c,2)) { goto L_80371F50; } // 80371F2C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 80371F30
  c->f[1]=c->f[31]; // 80371F34
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 80371F38
  c->r[4]=R32(c->r[29]+0x00000034u); // 80371F3C
  c->r[6]=R32(c->r[29]+0x00000030u); // 80371F40
  c->r[3]=c->r[29]+0x0000002Cu; // 80371F44
  c->r[4]=c->r[4]+c->r[0]; // 80371F48
  c->lr=0x80371F50u; f_8036CB44(c); // 80371F4C
L_80371F50:;
  c->r[30]=c->r[30]+0x00000002u; // 80371F50
  c->r[31]=c->r[31]+0x00000001u; // 80371F54
L_80371F58:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80371F58
  cmpu(c,0,c->r[31],c->r[0]); // 80371F5C
  if (crb(c,0)) { IRQCHK(c); goto L_80371F20; } // 80371F60
L_80371F64:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80371F64
  c->r[0]=R32(c->r[1]+0x00000034u); // 80371F68
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80371F6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80371F70
  c->r[30]=R32(c->r[1]+0x00000018u); // 80371F74
  c->r[29]=R32(c->r[1]+0x00000014u); // 80371F78
  c->lr=c->r[0]; // 80371F7C
  c->r[1]=c->r[1]+0x00000030u; // 80371F80
  return; // 80371F84
}

// fn_80371F88
void f_80371F88(Ctx* __restrict c) {
  trace_call(0x80371F88u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80371F88
  return; // 80371F8C
}

// fn_80371F90
void f_80371F90(Ctx* __restrict c) {
  trace_call(0x80371F90u);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80371F90
  return; // 80371F94
}

// fn_80371F98
void f_80371F98(Ctx* __restrict c) {
  trace_call(0x80371F98u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80371F98
  return; // 80371F9C
}

// fn_80371FA0
void f_80371FA0(Ctx* __restrict c) {
  trace_call(0x80371FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80371FA0
  c->r[0]=c->lr; // 80371FA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80371FA8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80371FAC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80371FB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80371FB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80371FB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80371FBC
  c->r[29]=c->r[3]|c->r[3]; // 80371FC0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80371FC4
  {uint32_t ea=c->r[13]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80371FC8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80371FCC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80371FD0
  c->r[12]=R32(c->r[3]+0x00000028u); // 80371FD4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80371FD8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80371FDC
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 80371FE0
  c->ctr=c->r[12]; // 80371FE4
  if (true) { c->lr=0x80371FECu; dispatch(c,c->ctr); } // 80371FE8
  c->r[0]=R32(c->r[29]+0x00000034u); // 80371FEC
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 80371FF0
  cmps(c,0,(int32_t)c->r[0],0); // 80371FF4
  if (crb(c,2)) { goto L_80372050; } // 80371FF8
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80371FFC
  c->r[31]=0u+0x00000000u; // 80372000
  c->r[30]=0u+0x00000000u; // 80372004
  goto L_80372044; // 80372008
L_8037200C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 8037200C
  c->r[3]=R16(c->r[3]+c->r[30]); // 80372010
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 80372014
  if (!crb(c,2)) { goto L_8037203C; } // 80372018
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 8037201C
  c->f[1]=c->f[31]; // 80372020
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 80372024
  c->r[4]=R32(c->r[29]+0x00000034u); // 80372028
  c->r[6]=R32(c->r[29]+0x00000030u); // 8037202C
  c->r[3]=c->r[29]+0x0000002Cu; // 80372030
  c->r[4]=c->r[4]+c->r[0]; // 80372034
  c->lr=0x8037203Cu; f_8036CB44(c); // 80372038
L_8037203C:;
  c->r[30]=c->r[30]+0x00000002u; // 8037203C
  c->r[31]=c->r[31]+0x00000001u; // 80372040
L_80372044:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 80372044
  cmpu(c,0,c->r[31],c->r[0]); // 80372048
  if (crb(c,0)) { IRQCHK(c); goto L_8037200C; } // 8037204C
L_80372050:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80372050
  c->r[0]=R32(c->r[1]+0x00000034u); // 80372054
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80372058
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8037205C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80372060
  c->r[29]=R32(c->r[1]+0x00000014u); // 80372064
  c->lr=c->r[0]; // 80372068
  c->r[1]=c->r[1]+0x00000030u; // 8037206C
  return; // 80372070
}

// Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl
void f_80372074(Ctx* __restrict c) {
  trace_call(0x80372074u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372074
  c->r[0]=c->lr; // 80372078
  W32(c->r[1]+0x00000044u,c->r[0]); // 8037207C
  c->r[11]=c->r[1]+0x00000040u; // 80372080
  c->lr=0x80372088u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80372084
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 80372088
  c->r[28]=c->r[3]|c->r[3]; // 8037208C
  c->r[29]=c->r[4]|c->r[4]; // 80372090
  c->r[31]=0u+0x00000000u; // 80372094
  c->r[0]=R32(c->r[5]+0x00000010u); // 80372098
  cmps(c,0,(int32_t)c->r[0],0); // 8037209C
  if (crb(c,2)) { goto L_803720AC; } // 803720A0
  c->r[3]=c->r[5]+c->r[0]; // 803720A4
  goto L_803720B0; // 803720A8
L_803720AC:;
  c->r[3]=0u+0x00000000u; // 803720AC
L_803720B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803720B0
  if (crb(c,2)) { goto L_803720C0; } // 803720B4
  c->r[27]=R32(c->r[3]+0x00000004u); // 803720B8
  goto L_803720C4; // 803720BC
L_803720C0:;
  c->r[27]=0u+0x00000000u; // 803720C0
L_803720C4:;
  cmps(c,0,(int32_t)c->r[27],0); // 803720C4
  c->r[30]=0u+0x00000000u; // 803720C8
  if (crb(c,2)) { goto L_80372168; } // 803720CC
  goto L_8037215C; // 803720D0
L_803720D4:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 803720D4
  c->r[0]=R32(c->r[3]+0x00000010u); // 803720D8
  cmps(c,0,(int32_t)c->r[0],0); // 803720DC
  if (crb(c,2)) { goto L_803720EC; } // 803720E0
  c->r[0]=c->r[3]+c->r[0]; // 803720E4
  goto L_803720F0; // 803720E8
L_803720EC:;
  c->r[0]=0u+0x00000000u; // 803720EC
L_803720F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 803720F0
  if (crb(c,2)) { goto L_8037211C; } // 803720F4
  c->r[3]=rotl(c->r[30],4)&0x000FFFF0u; // 803720F8
  c->r[3]=c->r[0]+c->r[3]; // 803720FC
  c->r[3]=R32(c->r[3]+0x00000024u); // 80372100
  cmps(c,0,(int32_t)c->r[3],0); // 80372104
  if (crb(c,2)) { goto L_80372114; } // 80372108
  c->r[5]=c->r[0]+c->r[3]; // 8037210C
  goto L_80372120; // 80372110
L_80372114:;
  c->r[5]=0u+0x00000000u; // 80372114
  goto L_80372120; // 80372118
L_8037211C:;
  c->r[5]=0u+0x00000000u; // 8037211C
L_80372120:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 80372120
  c->r[3]=c->r[29]|c->r[29]; // 80372124
  c->r[4]=c->r[1]+0x00000014u; // 80372128
  c->r[5]=c->r[0]+c->r[5]; // 8037212C
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 80372130
  W32(c->r[1]+0x00000014u,c->r[0]); // 80372134
  c->lr=0x8037213Cu; f_80365D04(c); // 80372138
  cmps(c,0,(int32_t)c->r[3],0); // 8037213C
  if (crb(c,2)) { goto L_80372158; } // 80372140
  c->r[0]=R32(c->r[3]+0x00000010u); // 80372144
  c->r[31]=0u+0x00000001u; // 80372148
  c->r[3]=R32(c->r[28]+0x00000014u); // 8037214C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80372150
  W16(c->r[3]+c->r[0],c->r[30]); // 80372154
L_80372158:;
  c->r[30]=c->r[30]+0x00000001u; // 80372158
L_8037215C:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 8037215C
  cmpu(c,0,c->r[0],c->r[27]); // 80372160
  if (crb(c,0)) { IRQCHK(c); goto L_803720D4; } // 80372164
L_80372168:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 80372168
  c->r[0]=R32(c->r[3]+0x00000014u); // 8037216C
  c->r[24]=R16(c->r[3]+0x00000022u); // 80372170
  cmps(c,0,(int32_t)c->r[0],0); // 80372174
  if (crb(c,2)) { goto L_80372184; } // 80372178
  c->r[27]=c->r[3]+c->r[0]; // 8037217C
  goto L_80372188; // 80372180
L_80372184:;
  c->r[27]=0u+0x00000000u; // 80372184
L_80372188:;
  c->r[25]=c->r[27]|c->r[27]; // 80372188
  c->r[23]=0u+0x00000000u; // 8037218C
  c->r[26]=0u+0x00000000u; // 80372190
  goto L_803721F4; // 80372194
L_80372198:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80372198
  c->r[3]=c->r[29]|c->r[29]; // 8037219C
  c->r[6]=R32(c->r[28]+0x00000030u); // 803721A0
  c->r[4]=c->r[1]+0x00000010u; // 803721A4
  c->r[5]=c->r[27]+c->r[0]; // 803721A8
  c->r[30]=c->r[5]+0xFFFFFFFCu; // 803721AC
  c->r[22]=c->r[6]+c->r[26]; // 803721B0
  W32(c->r[1]+0x00000010u,c->r[30]); // 803721B4
  c->lr=0x803721BCu; f_80365D04(c); // 803721B8
  W32(c->r[22]+0x00000000u,c->r[3]); // 803721BC
  c->r[3]=c->r[29]|c->r[29]; // 803721C0
  c->r[4]=c->r[1]+0x0000000Cu; // 803721C4
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 803721C8
  c->lr=0x803721D0u; f_80365E30(c); // 803721CC
  W32(c->r[22]+0x00000004u,c->r[3]); // 803721D0
  c->r[3]=c->r[29]|c->r[29]; // 803721D4
  c->r[4]=c->r[1]+0x00000008u; // 803721D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803721DC
  c->lr=0x803721E4u; f_80365F5C(c); // 803721E0
  W32(c->r[22]+0x00000008u,c->r[3]); // 803721E4
  c->r[26]=c->r[26]+0x0000000Cu; // 803721E8
  c->r[25]=c->r[25]+0x00000004u; // 803721EC
  c->r[23]=c->r[23]+0x00000001u; // 803721F0
L_803721F4:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[24]); // 803721F4
  if (crb(c,0)) { IRQCHK(c); goto L_80372198; } // 803721F8
  c->r[3]=c->r[28]|c->r[28]; // 803721FC
  c->r[4]=0u+0x00000004u; // 80372200
  c->r[5]=0u+0x00000001u; // 80372204
  c->lr=0x8037220Cu; f_80373CC0(c); // 80372208
  c->r[11]=c->r[1]+0x00000040u; // 8037220C
  c->r[3]=c->r[31]|c->r[31]; // 80372210
  c->lr=0x80372218u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80372214
  c->r[0]=R32(c->r[1]+0x00000044u); // 80372218
  c->lr=c->r[0]; // 8037221C
  c->r[1]=c->r[1]+0x00000040u; // 80372220
  return; // 80372224
}

// GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl
void f_80372228(Ctx* __restrict c) {
  trace_call(0x80372228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372228
  c->r[0]=c->lr; // 8037222C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80372230
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 80372234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80372238
  c->r[31]=c->r[4]|c->r[4]; // 8037223C
  c->r[6]=R32(c->r[3]+0x00000014u); // 80372240
  c->r[5]=R16(c->r[6]+c->r[0]); // 80372244
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 80372248
  if (crb(c,2)) { goto L_80372260; } // 8037224C
  c->r[0]=0u+0x00000000u; // 80372250
  c->r[3]=c->r[31]|c->r[31]; // 80372254
  W32(c->r[4]+0x00000000u,c->r[0]); // 80372258
  goto L_8037228C; // 8037225C
L_80372260:;
  c->r[6]=R32(c->r[3]+0x00000034u); // 80372260
  cmps(c,0,(int32_t)c->r[6],0); // 80372264
  if (crb(c,2)) { goto L_80372278; } // 80372268
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 8037226C
  c->r[3]=c->r[6]+c->r[0]; // 80372270
  goto L_8037228C; // 80372274
L_80372278:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372278
  c->r[6]=R32(c->r[3]+0x00000030u); // 8037227C
  c->r[3]=c->r[3]+0x0000002Cu; // 80372280
  c->lr=0x80372288u; f_8036CB44(c); // 80372284
  c->r[3]=c->r[31]|c->r[31]; // 80372288
L_8037228C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8037228C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80372290
  c->lr=c->r[0]; // 80372294
  c->r[1]=c->r[1]+0x00000010u; // 80372298
  return; // 8037229C
}

// fn_803722A0
void f_803722A0(Ctx* __restrict c) {
  trace_call(0x803722A0u);
  c->r[5]=0u+0x00010000u; // 803722A0
  c->r[0]=c->r[5]+0x00000002u; // 803722A4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803722A8
  if (crb(c,2)) { goto L_803722EC; } // 803722AC
  if (!crb(c,0)) { goto L_803722C0; } // 803722B0
  cmps(c,0,(int32_t)c->r[4],8); // 803722B4
  if (crb(c,2)) { goto L_803722D0; } // 803722B8
  return; // 803722BC
L_803722C0:;
  c->r[0]=c->r[5]+0x00000004u; // 803722C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803722C4
  if (!crb(c,0)) return; // 803722C8
  goto L_803722E0; // 803722CC
L_803722D0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803722D0
  c->r[12]=R32(c->r[12]+0x00000024u); // 803722D4
  c->ctr=c->r[12]; // 803722D8
  if (true) { dispatch(c,c->ctr); return; } // 803722DC
L_803722E0:;
  c->r[0]=0u+0x00000000u; // 803722E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 803722E4
  return; // 803722E8
L_803722EC:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 803722EC
  return; // 803722F0
}

// fn_803722F4
void f_803722F4(Ctx* __restrict c) {
  trace_call(0x803722F4u);
  c->r[3]=0u+0x803F0000u; // 803722F4
  c->r[0]=R32(c->r[4]+0x00000000u); // 803722F8
  c->r[3]=c->r[3]+0xFFFFE068u; // 803722FC
  cmpu(c,0,c->r[0],c->r[3]); // 80372300
  if (!crb(c,2)) { goto L_80372310; } // 80372304
  c->r[3]=0u+0x00000001u; // 80372308
  return; // 8037230C
L_80372310:;
  c->r[3]=0u+0x803F0000u; // 80372310
  c->r[0]=R32(c->r[4]+0x00000000u); // 80372314
  c->r[3]=c->r[3]+0xFFFFE030u; // 80372318
  cmpu(c,0,c->r[0],c->r[3]); // 8037231C
  if (!crb(c,2)) { goto L_8037232C; } // 80372320
  c->r[3]=0u+0x00000001u; // 80372324
  return; // 80372328
L_8037232C:;
  c->r[3]=0u+0x803F0000u; // 8037232C
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 80372330
  cmpu(c,0,c->r[0],c->r[3]); // 80372334
  if (!crb(c,2)) { goto L_80372344; } // 80372338
  c->r[3]=0u+0x00000001u; // 8037233C
  return; // 80372340
L_80372344:;
  c->r[3]=0u+0x803F0000u; // 80372344
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80372348
  c->r[0]=c->r[3]-c->r[0]; // 8037234C
  c->r[0]=cntlz(c->r[0]); // 80372350
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80372354
  return; // 80372358
}

// fn_8037235C
void f_8037235C(Ctx* __restrict c) {
  trace_call(0x8037235Cu);
  c->r[3]=0u+0x803F0000u; // 8037235C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80372360
  c->r[3]=c->r[3]+0xFFFFE030u; // 80372364
  cmpu(c,0,c->r[0],c->r[3]); // 80372368
  if (!crb(c,2)) { goto L_80372378; } // 8037236C
  c->r[3]=0u+0x00000001u; // 80372370
  return; // 80372374
L_80372378:;
  c->r[3]=0u+0x803F0000u; // 80372378
  c->r[0]=R32(c->r[4]+0x00000000u); // 8037237C
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 80372380
  cmpu(c,0,c->r[0],c->r[3]); // 80372384
  if (!crb(c,2)) { goto L_80372394; } // 80372388
  c->r[3]=0u+0x00000001u; // 8037238C
  return; // 80372390
L_80372394:;
  c->r[3]=0u+0x803F0000u; // 80372394
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80372398
  c->r[0]=c->r[3]-c->r[0]; // 8037239C
  c->r[0]=cntlz(c->r[0]); // 803723A0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 803723A4
  return; // 803723A8
}

// fn_803723AC
void f_803723AC(Ctx* __restrict c) {
  trace_call(0x803723ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803723AC
  c->r[0]=c->lr; // 803723B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803723B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803723B8
  c->r[12]=R32(c->r[12]+0x00000014u); // 803723BC
  c->ctr=c->r[12]; // 803723C0
  if (true) { c->lr=0x803723C8u; dispatch(c,c->ctr); } // 803723C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803723C8
  c->r[3]=c->r[3]+0x00000004u; // 803723CC
  c->lr=c->r[0]; // 803723D0
  c->r[1]=c->r[1]+0x00000010u; // 803723D4
  return; // 803723D8
}

// fn_803723DC
void f_803723DC(Ctx* __restrict c) {
  trace_call(0x803723DCu);
  c->r[3]=0u+0x803F0000u; // 803723DC
  c->r[3]=c->r[3]+0xFFFFE068u; // 803723E0
  return; // 803723E4
}

// fn_803723E8
void f_803723E8(Ctx* __restrict c) {
  trace_call(0x803723E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803723E8
  c->r[0]=c->lr; // 803723EC
  cmps(c,0,(int32_t)c->r[3],0); // 803723F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803723F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803723F8
  c->r[31]=c->r[3]|c->r[3]; // 803723FC
  if (crb(c,2)) { goto L_80372414; } // 80372400
  if (crb(c,2)) { goto L_80372414; } // 80372404
  if (crb(c,2)) { goto L_80372414; } // 80372408
  c->r[4]=0u+0x00000000u; // 8037240C
  c->lr=0x80372414u; f_80373AF0(c); // 80372410
L_80372414:;
  c->r[3]=c->r[31]|c->r[31]; // 80372414
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80372418
  c->r[0]=R32(c->r[1]+0x00000014u); // 8037241C
  c->lr=c->r[0]; // 80372420
  c->r[1]=c->r[1]+0x00000010u; // 80372424
  return; // 80372428
}

// fn_8037242C
void f_8037242C(Ctx* __restrict c) {
  trace_call(0x8037242Cu);
  c->r[5]=0u+0x803F0000u; // 8037242C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80372430
  c->r[5]=c->r[5]+0xFFFFE030u; // 80372434
  c->r[3]=c->r[5]+0x00000024u; // 80372438
  cmpu(c,0,c->r[0],c->r[3]); // 8037243C
  if (!crb(c,2)) { goto L_8037244C; } // 80372440
  c->r[3]=0u+0x00000001u; // 80372444
  return; // 80372448
L_8037244C:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 8037244C
  c->r[0]=c->r[5]+0x00000010u; // 80372450
  cmpu(c,0,c->r[4],c->r[0]); // 80372454
  if (!crb(c,2)) { goto L_80372464; } // 80372458
  c->r[3]=0u+0x00000001u; // 8037245C
  return; // 80372460
L_80372464:;
  c->r[0]=c->r[5]+0x00000000u; // 80372464
  cmpu(c,0,c->r[4],c->r[0]); // 80372468
  if (!crb(c,2)) { goto L_80372478; } // 8037246C
  c->r[3]=0u+0x00000001u; // 80372470
  return; // 80372474
L_80372478:;
  c->r[3]=0u+0x803F0000u; // 80372478
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 8037247C
  cmpu(c,0,c->r[4],c->r[3]); // 80372480
  if (!crb(c,2)) { goto L_80372490; } // 80372484
  c->r[3]=0u+0x00000001u; // 80372488
  return; // 8037248C
L_80372490:;
  c->r[3]=0u+0x803F0000u; // 80372490
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80372494
  c->r[0]=c->r[3]-c->r[4]; // 80372498
  c->r[0]=cntlz(c->r[0]); // 8037249C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 803724A0
  return; // 803724A4
}

// fn_803724A8
void f_803724A8(Ctx* __restrict c) {
  trace_call(0x803724A8u);
  c->r[3]=0u+0x803F0000u; // 803724A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 803724AC
  c->r[3]=c->r[3]+0xFFFFE040u; // 803724B0
  cmpu(c,0,c->r[0],c->r[3]); // 803724B4
  if (!crb(c,2)) { goto L_803724C4; } // 803724B8
  c->r[3]=0u+0x00000001u; // 803724BC
  return; // 803724C0
L_803724C4:;
  c->r[3]=0u+0x803F0000u; // 803724C4
  c->r[0]=R32(c->r[4]+0x00000000u); // 803724C8
  c->r[3]=c->r[3]+0xFFFFE030u; // 803724CC
  cmpu(c,0,c->r[0],c->r[3]); // 803724D0
  if (!crb(c,2)) { goto L_803724E0; } // 803724D4
  c->r[3]=0u+0x00000001u; // 803724D8
  return; // 803724DC
L_803724E0:;
  c->r[3]=0u+0x803F0000u; // 803724E0
  c->r[3]=c->r[3]+0xFFFFE0B0u; // 803724E4
  cmpu(c,0,c->r[0],c->r[3]); // 803724E8
  if (!crb(c,2)) { goto L_803724F8; } // 803724EC
  c->r[3]=0u+0x00000001u; // 803724F0
  return; // 803724F4
L_803724F8:;
  c->r[3]=0u+0x803F0000u; // 803724F8
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 803724FC
  c->r[0]=c->r[3]-c->r[0]; // 80372500
  c->r[0]=cntlz(c->r[0]); // 80372504
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80372508
  return; // 8037250C
}

// fn_80372510
void f_80372510(Ctx* __restrict c) {
  trace_call(0x80372510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372510
  c->r[0]=c->lr; // 80372514
  W32(c->r[1]+0x00000014u,c->r[0]); // 80372518
  c->r[12]=R32(c->r[3]+0x00000000u); // 8037251C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80372520
  c->ctr=c->r[12]; // 80372524
  if (true) { c->lr=0x8037252Cu; dispatch(c,c->ctr); } // 80372528
  c->r[0]=R32(c->r[1]+0x00000014u); // 8037252C
  c->r[3]=c->r[3]+0x00000004u; // 80372530
  c->lr=c->r[0]; // 80372534
  c->r[1]=c->r[1]+0x00000010u; // 80372538
  return; // 8037253C
}

// fn_80372540
void f_80372540(Ctx* __restrict c) {
  trace_call(0x80372540u);
  c->r[3]=0u+0x803F0000u; // 80372540
  c->r[3]=c->r[3]+0xFFFFE054u; // 80372544
  return; // 80372548
}

// __dt__Q34nw4r3g3d14AnmObjChrBlendFv
void f_8037254C(Ctx* __restrict c) {
  trace_call(0x8037254Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8037254C
  c->r[0]=c->lr; // 80372550
  cmps(c,0,(int32_t)c->r[3],0); // 80372554
  W32(c->r[1]+0x00000014u,c->r[0]); // 80372558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8037255C
  c->r[31]=c->r[3]|c->r[3]; // 80372560
  if (crb(c,2)) { goto L_8037259C; } // 80372564
  if (crb(c,2)) { goto L_8037259C; } // 80372568
  c->r[12]=0u+0x80430000u; // 8037256C
  c->r[12]=c->r[12]+0x00004CF8u; // 80372570
  W32(c->r[3]+0x00000000u,c->r[12]); // 80372574
  c->r[12]=R32(c->r[12]+0x00000044u); // 80372578
  c->ctr=c->r[12]; // 8037257C
  if (true) { c->lr=0x80372584u; dispatch(c,c->ctr); } // 80372580
  cmps(c,0,(int32_t)c->r[31],0); // 80372584
  if (crb(c,2)) { goto L_8037259C; } // 80372588
  if (crb(c,2)) { goto L_8037259C; } // 8037258C
  c->r[3]=c->r[31]|c->r[31]; // 80372590
  c->r[4]=0u+0x00000000u; // 80372594
  c->lr=0x8037259Cu; f_80373AF0(c); // 80372598
L_8037259C:;
  c->r[3]=c->r[31]|c->r[31]; // 8037259C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803725A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803725A4
  c->lr=c->r[0]; // 803725A8
  c->r[1]=c->r[1]+0x00000010u; // 803725AC
  return; // 803725B0
}

// fn_803725B4
void f_803725B4(Ctx* __restrict c) {
  trace_call(0x803725B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803725B4
  c->r[0]=c->lr; // 803725B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803725BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803725C0
  c->r[12]=R32(c->r[12]+0x00000014u); // 803725C4
  c->ctr=c->r[12]; // 803725C8
  if (true) { c->lr=0x803725D0u; dispatch(c,c->ctr); } // 803725CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803725D0
  c->r[3]=c->r[3]+0x00000004u; // 803725D4
  c->lr=c->r[0]; // 803725D8
  c->r[1]=c->r[1]+0x00000010u; // 803725DC
  return; // 803725E0
}

// fn_803725E4
void f_803725E4(Ctx* __restrict c) {
  trace_call(0x803725E4u);
  c->r[3]=0u+0x803F0000u; // 803725E4
  c->r[3]=c->r[3]+0xFFFFE040u; // 803725E8
  return; // 803725EC
}

// fn_803725F0
void f_803725F0(Ctx* __restrict c) {
  trace_call(0x803725F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803725F0
  c->r[0]=c->lr; // 803725F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803725F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803725FC
  c->r[12]=R32(c->r[12]+0x00000014u); // 80372600
  c->ctr=c->r[12]; // 80372604
  if (true) { c->lr=0x8037260Cu; dispatch(c,c->ctr); } // 80372608
  c->r[0]=R32(c->r[1]+0x00000014u); // 8037260C
  c->r[3]=c->r[3]+0x00000004u; // 80372610
  c->lr=c->r[0]; // 80372614
  c->r[1]=c->r[1]+0x00000010u; // 80372618
  return; // 8037261C
}

// fn_80372620
void f_80372620(Ctx* __restrict c) {
  trace_call(0x80372620u);
  c->r[3]=0u+0x803F0000u; // 80372620
  c->r[3]=c->r[3]+0xFFFFE030u; // 80372624
  return; // 80372628
}

// fn_8037262C
void f_8037262C(Ctx* __restrict c) {
  trace_call(0x8037262Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8037262C
  c->r[0]=c->lr; // 80372630
  W32(c->r[1]+0x00000054u,c->r[0]); // 80372634
  c->r[0]=R32(c->r[4]+0x00000004u); // 80372638
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8037263C
  c->r[31]=c->r[4]|c->r[4]; // 80372640
  W32(c->r[1]+0x00000048u,c->r[30]); // 80372644
  c->r[30]=c->r[3]|c->r[3]; // 80372648
  W32(c->r[1]+0x00000044u,c->r[29]); // 8037264C
  c->r[29]=rotl(c->r[0],0)&0x00000003u; // 80372650
  c->lr=0x80372658u; f_80388500(c); // 80372654
  cmps(c,0,(int32_t)c->r[29],1); // 80372658
  if (crb(c,2)) { goto L_803726F8; } // 8037265C
  if (!crb(c,0)) { goto L_80372670; } // 80372660
  cmps(c,0,(int32_t)c->r[29],0); // 80372664
  if (!crb(c,0)) { goto L_8037267C; } // 80372668
  goto L_80372854; // 8037266C
L_80372670:;
  cmps(c,0,(int32_t)c->r[29],3); // 80372670
  if (!crb(c,0)) { goto L_80372854; } // 80372674
  goto L_803727B0; // 80372678
L_8037267C:;
  c->r[7]=R8(c->r[31]+0x00000020u); // 8037267C
  c->r[4]=c->r[1]+0x00000010u; // 80372680
  c->r[6]=R8(c->r[31]+0x00000021u); // 80372684
  c->r[3]=c->r[30]|c->r[30]; // 80372688
  c->r[5]=R8(c->r[31]+0x00000022u); // 8037268C
  c->r[0]=R8(c->r[31]+0x00000023u); // 80372690
  W8(c->r[1]+0x00000010u,c->r[7]); // 80372694
  W8(c->r[1]+0x00000011u,c->r[6]); // 80372698
  W8(c->r[1]+0x00000012u,c->r[5]); // 8037269C
  W8(c->r[1]+0x00000013u,c->r[0]); // 803726A0
  c->lr=0x803726A8u; f_80388514(c); // 803726A4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803726A8
  c->r[3]=c->r[30]|c->r[30]; // 803726AC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803726B0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803726B4
  c->lr=0x803726BCu; f_8038855C(c); // 803726B8
  {uint32_t ea=c->r[2]+0xFFFFEA68u; c->f[1]=c->ps1[1]=RF32(ea);} // 803726BC
  c->r[3]=c->r[30]|c->r[30]; // 803726C0
  c->r[4]=0u+0x00000000u; // 803726C4
  c->lr=0x803726CCu; f_803885D8(c); // 803726C8
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 803726CC
  c->r[3]=c->r[30]|c->r[30]; // 803726D0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803726D4
  c->r[4]=R32(c->r[31]+0x00000024u); // 803726D8
  c->lr=0x803726E0u; f_80388658(c); // 803726DC
  {uint32_t ea=c->r[2]+0xFFFFEA68u; c->f[1]=c->ps1[1]=RF32(ea);} // 803726E0
  c->r[3]=c->r[30]|c->r[30]; // 803726E4
  c->f[2]=c->f[1]; // 803726E8
  c->f[3]=c->f[1]; // 803726EC
  c->lr=0x803726F4u; f_80388598(c); // 803726F0
  goto L_80372854; // 803726F4
L_803726F8:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 803726F8
  c->r[4]=c->r[1]+0x0000000Cu; // 803726FC
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 80372700
  c->r[3]=c->r[30]|c->r[30]; // 80372704
  c->r[7]=R8(c->r[31]+0x00000020u); // 80372708
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8037270C
  c->r[6]=R8(c->r[31]+0x00000021u); // 80372710
  c->r[5]=R8(c->r[31]+0x00000022u); // 80372714
  c->r[0]=R8(c->r[31]+0x00000023u); // 80372718
  {double t0=c->f[2], t1=c->ps1[2]; c->f[4]=t0; c->ps1[4]=t1;} // 8037271C
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 80372720
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 80372724
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,2,ea,0,0);} // 80372728
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8037272C
  {uint32_t ea=c->r[2]+0xFFFFEA6Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80372730
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 80372734
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80372738
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,2,ea,1,0);} // 8037273C
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 80372740
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80372744
  W8(c->r[1]+0x0000000Du,c->r[6]); // 80372748
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 8037274C
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 80372750
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80372754
  c->lr=0x8037275Cu; f_80388514(c); // 80372758
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037275C
  c->r[3]=c->r[30]|c->r[30]; // 80372760
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80372764
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80372768
  c->lr=0x80372770u; f_8038855C(c); // 8037276C
  {uint32_t ea=c->r[2]+0xFFFFEA68u; c->f[2]=c->ps1[2]=RF32(ea);} // 80372770
  c->r[3]=c->r[30]|c->r[30]; // 80372774
  {uint32_t ea=c->r[2]+0xFFFFEA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372778
  c->f[3]=c->f[2]; // 8037277C
  c->lr=0x80372784u; f_80388618(c); // 80372780
  {uint32_t ea=c->r[2]+0xFFFFEA68u; c->f[2]=c->ps1[2]=RF32(ea);} // 80372784
  c->r[3]=c->r[30]|c->r[30]; // 80372788
  {uint32_t ea=c->r[2]+0xFFFFEA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037278C
  c->f[3]=c->f[2]; // 80372790
  c->lr=0x80372798u; f_80388698(c); // 80372794
  {uint32_t ea=c->r[2]+0xFFFFEA68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372798
  c->r[3]=c->r[30]|c->r[30]; // 8037279C
  c->f[2]=c->f[1]; // 803727A0
  c->f[3]=c->f[1]; // 803727A4
  c->lr=0x803727ACu; f_80388598(c); // 803727A8
  goto L_80372854; // 803727AC
L_803727B0:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 803727B0
  c->r[3]=c->r[1]+0x00000014u; // 803727B4
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 803727B8
  c->r[4]=c->r[3]|c->r[3]; // 803727BC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803727C0
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 803727C4
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 803727C8
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 803727CC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 803727D0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,1,0);} // 803727D4
  c->lr=0x803727DCu; f_80265750(c); // 803727D8
  c->r[7]=R8(c->r[31]+0x00000020u); // 803727DC
  c->r[4]=c->r[1]+0x00000008u; // 803727E0
  c->r[6]=R8(c->r[31]+0x00000021u); // 803727E4
  c->r[3]=c->r[30]|c->r[30]; // 803727E8
  c->r[5]=R8(c->r[31]+0x00000022u); // 803727EC
  c->r[0]=R8(c->r[31]+0x00000023u); // 803727F0
  W8(c->r[1]+0x00000008u,c->r[7]); // 803727F4
  W8(c->r[1]+0x00000009u,c->r[6]); // 803727F8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 803727FC
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80372800
  c->lr=0x80372808u; f_80388514(c); // 80372804
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372808
  c->r[3]=c->r[30]|c->r[30]; // 8037280C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80372810
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80372814
  c->lr=0x8037281Cu; f_8038855C(c); // 80372818
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037281C
  c->r[3]=c->r[30]|c->r[30]; // 80372820
  c->r[4]=R32(c->r[31]+0x00000030u); // 80372824
  c->lr=0x8037282Cu; f_803885D8(c); // 80372828
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037282C
  c->r[3]=c->r[30]|c->r[30]; // 80372830
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80372834
  c->r[4]=R32(c->r[31]+0x00000024u); // 80372838
  c->lr=0x80372840u; f_80388658(c); // 8037283C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372840
  c->r[3]=c->r[30]|c->r[30]; // 80372844
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80372848
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8037284C
  c->lr=0x80372854u; f_80388598(c); // 80372850
L_80372854:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80372854
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80372858
  if (!crb(c,2)) { goto L_8037286C; } // 8037285C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80372860
  c->r[0]=c->r[0]|0x00000010u; // 80372864
  W32(c->r[30]+0x00000000u,c->r[0]); // 80372868
L_8037286C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8037286C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80372870
  if (!crb(c,2)) { goto L_80372884; } // 80372874
  c->r[0]=R32(c->r[30]+0x00000000u); // 80372878
  c->r[0]=c->r[0]|0x00000020u; // 8037287C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80372880
L_80372884:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80372884
  c->r[0]=c->r[0]|0x00000004u; // 80372888
  W32(c->r[30]+0x00000000u,c->r[0]); // 8037288C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80372890
  c->r[30]=R32(c->r[1]+0x00000048u); // 80372894
  c->r[29]=R32(c->r[1]+0x00000044u); // 80372898
  c->r[0]=R32(c->r[1]+0x00000054u); // 8037289C
  c->lr=c->r[0]; // 803728A0
  c->r[1]=c->r[1]+0x00000050u; // 803728A4
  return; // 803728A8
}

// fn_803728AC
void f_803728AC(Ctx* __restrict c) {
  trace_call(0x803728ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803728AC
  c->r[0]=c->lr; // 803728B0
  W32(c->r[1]+0x00000064u,c->r[0]); // 803728B4
  c->r[11]=c->r[1]+0x00000060u; // 803728B8
  c->lr=0x803728C0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803728BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803728C0
  c->r[28]=c->r[3]|c->r[3]; // 803728C4
  c->r[29]=c->r[4]|c->r[4]; // 803728C8
  c->r[12]=R32(c->r[12]+0x00000050u); // 803728CC
  c->ctr=c->r[12]; // 803728D0
  if (true) { c->lr=0x803728D8u; dispatch(c,c->ctr); } // 803728D4
  W32(c->r[1]+0x00000024u,c->r[3]); // 803728D8
  c->r[3]=c->r[28]|c->r[28]; // 803728DC
  c->r[12]=R32(c->r[28]+0x00000000u); // 803728E0
  c->r[12]=R32(c->r[12]+0x00000054u); // 803728E4
  c->ctr=c->r[12]; // 803728E8
  if (true) { c->lr=0x803728F0u; dispatch(c,c->ctr); } // 803728EC
  W32(c->r[1]+0x00000020u,c->r[3]); // 803728F0
  c->r[3]=c->r[28]|c->r[28]; // 803728F4
  c->r[12]=R32(c->r[28]+0x00000000u); // 803728F8
  c->r[12]=R32(c->r[12]+0x00000058u); // 803728FC
  c->ctr=c->r[12]; // 80372900
  if (true) { c->lr=0x80372908u; dispatch(c,c->ctr); } // 80372904
  c->r[0]=R32(c->r[1]+0x00000024u); // 80372908
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8037290C
  cmps(c,0,(int32_t)c->r[0],0); // 80372910
  if (crb(c,2)) { goto L_80372984; } // 80372914
  c->r[4]=R16(c->r[29]+0x00000002u); // 80372918
  c->r[3]=c->r[1]+0x00000024u; // 8037291C
  cmpu(c,0,c->r[4],c->r[0]); // 80372920
  W32(c->r[1]+0x00000018u,c->r[4]); // 80372924
  if (!crb(c,0)) { goto L_80372930; } // 80372928
  c->r[3]=c->r[1]+0x00000018u; // 8037292C
L_80372930:;
  c->r[27]=R32(c->r[3]+0x00000000u); // 80372930
  c->r[30]=0u+0x00000000u; // 80372934
  goto L_8037297C; // 80372938
L_8037293C:;
  c->r[4]=c->r[29]|c->r[29]; // 8037293C
  c->r[5]=c->r[30]|c->r[30]; // 80372940
  c->r[3]=c->r[1]+0x00000030u; // 80372944
  c->lr=0x8037294Cu; f_8011FB30(c); // 80372948
  c->r[4]=R32(c->r[1]+0x00000030u); // 8037294C
  c->r[3]=c->r[28]|c->r[28]; // 80372950
  c->r[0]=R32(c->r[1]+0x00000034u); // 80372954
  c->r[5]=c->r[30]|c->r[30]; // 80372958
  W32(c->r[1]+0x00000028u,c->r[4]); // 8037295C
  c->r[4]=c->r[1]+0x00000028u; // 80372960
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80372964
  c->r[12]=R32(c->r[28]+0x00000000u); // 80372968
  c->r[12]=R32(c->r[12]+0x00000064u); // 8037296C
  c->ctr=c->r[12]; // 80372970
  if (true) { c->lr=0x80372978u; dispatch(c,c->ctr); } // 80372974
  c->r[30]=c->r[30]+0x00000001u; // 80372978
L_8037297C:;
  cmpu(c,0,c->r[30],c->r[27]); // 8037297C
  if (crb(c,0)) { IRQCHK(c); goto L_8037293C; } // 80372980
L_80372984:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 80372984
  cmps(c,0,(int32_t)c->r[0],0); // 80372988
  if (crb(c,2)) { goto L_803729EC; } // 8037298C
  c->r[4]=R16(c->r[29]+0x00000000u); // 80372990
  c->r[3]=c->r[1]+0x00000020u; // 80372994
  c->r[27]=R32(c->r[29]+0x00000008u); // 80372998
  cmpu(c,0,c->r[4],c->r[0]); // 8037299C
  W32(c->r[1]+0x00000014u,c->r[4]); // 803729A0
  if (!crb(c,0)) { goto L_803729AC; } // 803729A4
  c->r[3]=c->r[1]+0x00000014u; // 803729A8
L_803729AC:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 803729AC
  c->r[31]=0u+0x00000000u; // 803729B0
  goto L_803729E4; // 803729B4
L_803729B8:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 803729B8
  c->r[4]=c->r[28]|c->r[28]; // 803729BC
  c->r[5]=c->r[31]|c->r[31]; // 803729C0
  c->r[3]=c->r[1]+0x00000008u; // 803729C4
  c->r[12]=R32(c->r[12]+0x00000068u); // 803729C8
  c->ctr=c->r[12]; // 803729CC
  if (true) { c->lr=0x803729D4u; dispatch(c,c->ctr); } // 803729D0
  c->r[0]=R32(c->r[1]+0x00000008u); // 803729D4
  c->r[31]=c->r[31]+0x00000001u; // 803729D8
  W32(c->r[27]+0x00000000u,c->r[0]); // 803729DC
  c->r[27]=c->r[27]+0x00000004u; // 803729E0
L_803729E4:;
  cmpu(c,0,c->r[31],c->r[30]); // 803729E4
  if (crb(c,0)) { IRQCHK(c); goto L_803729B8; } // 803729E8
L_803729EC:;
  c->r[27]=R32(c->r[1]+0x0000001Cu); // 803729EC
  cmps(c,0,(int32_t)c->r[27],0); // 803729F0
  if (crb(c,2)) { goto L_80372BA8; } // 803729F4
  c->r[31]=R32(c->r[29]+0x00000004u); // 803729F8
  c->r[3]=c->r[28]|c->r[28]; // 803729FC
  c->r[29]=R16(c->r[29]+0x00000000u); // 80372A00
  W32(c->r[1]+0x00000010u,c->r[29]); // 80372A04
  c->r[12]=R32(c->r[28]+0x00000000u); // 80372A08
  c->r[12]=R32(c->r[12]+0x00000044u); // 80372A0C
  c->ctr=c->r[12]; // 80372A10
  if (true) { c->lr=0x80372A18u; dispatch(c,c->ctr); } // 80372A14
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 80372A18
  c->r[0]=c->r[27]+c->r[3]; // 80372A1C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80372A20
  c->r[3]=c->r[1]+0x0000001Cu; // 80372A24
  cmpu(c,0,c->r[29],c->r[4]); // 80372A28
  if (!crb(c,0)) { goto L_80372A34; } // 80372A2C
  c->r[3]=c->r[1]+0x00000010u; // 80372A30
L_80372A34:;
  cmpu(c,0,c->r[29],c->r[0]); // 80372A34
  c->r[30]=R32(c->r[3]+0x00000000u); // 80372A38
  c->r[3]=c->r[1]+0x0000000Cu; // 80372A3C
  if (!crb(c,0)) { goto L_80372A48; } // 80372A40
  c->r[3]=c->r[1]+0x00000010u; // 80372A44
L_80372A48:;
  cmps(c,0,(int32_t)c->r[30],0); // 80372A48
  c->r[29]=R32(c->r[3]+0x00000000u); // 80372A4C
  c->r[5]=0u+0x00000000u; // 80372A50
  if (crb(c,2)) { goto L_80372B14; } // 80372A54
  cmpu(c,0,c->r[30],0x00000008u); // 80372A58
  c->r[3]=c->r[30]+0xFFFFFFF8u; // 80372A5C
  if (!crb(c,1)) { goto L_80372AE8; } // 80372A60
  c->r[0]=c->r[3]+0x00000007u; // 80372A64
  c->r[4]=c->r[31]|c->r[31]; // 80372A68
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80372A6C
  c->ctr=c->r[0]; // 80372A70
  cmpu(c,0,c->r[3],0x00000000u); // 80372A74
  if (!crb(c,1)) { goto L_80372AE8; } // 80372A78
L_80372A7C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80372A7C
  c->r[5]=c->r[5]+0x00000008u; // 80372A80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372A84
  W32(c->r[4]+0x00000000u,c->r[0]); // 80372A88
  c->r[0]=R32(c->r[4]+0x00000044u); // 80372A8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372A90
  W32(c->r[4]+0x00000044u,c->r[0]); // 80372A94
  c->r[0]=R32(c->r[4]+0x00000088u); // 80372A98
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372A9C
  W32(c->r[4]+0x00000088u,c->r[0]); // 80372AA0
  c->r[0]=R32(c->r[4]+0x000000CCu); // 80372AA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372AA8
  W32(c->r[4]+0x000000CCu,c->r[0]); // 80372AAC
  c->r[0]=R32(c->r[4]+0x00000110u); // 80372AB0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372AB4
  W32(c->r[4]+0x00000110u,c->r[0]); // 80372AB8
  c->r[0]=R32(c->r[4]+0x00000154u); // 80372ABC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372AC0
  W32(c->r[4]+0x00000154u,c->r[0]); // 80372AC4
  c->r[0]=R32(c->r[4]+0x00000198u); // 80372AC8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372ACC
  W32(c->r[4]+0x00000198u,c->r[0]); // 80372AD0
  c->r[0]=R32(c->r[4]+0x000001DCu); // 80372AD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372AD8
  W32(c->r[4]+0x000001DCu,c->r[0]); // 80372ADC
  c->r[4]=c->r[4]+0x00000220u; // 80372AE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80372A7C; } // 80372AE4
L_80372AE8:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 80372AE8
  c->r[0]=c->r[30]-c->r[5]; // 80372AEC
  c->r[3]=c->r[31]+c->r[3]; // 80372AF0
  c->ctr=c->r[0]; // 80372AF4
  cmpu(c,0,c->r[5],c->r[30]); // 80372AF8
  if (!crb(c,0)) { goto L_80372B14; } // 80372AFC
L_80372B00:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80372B00
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80372B04
  W32(c->r[3]+0x00000000u,c->r[0]); // 80372B08
  c->r[3]=c->r[3]+0x00000044u; // 80372B0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80372B00; } // 80372B10
L_80372B14:;
  c->r[27]=c->r[31]|c->r[31]; // 80372B14
  c->r[26]=0u+0x00000000u; // 80372B18
  goto L_80372BA0; // 80372B1C
L_80372B20:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 80372B20
  c->r[25]=0u+0x00000000u; // 80372B24
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80372B28
  if (!crb(c,2)) { goto L_80372B98; } // 80372B2C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80372B30
  c->r[3]=c->r[28]|c->r[28]; // 80372B34
  c->r[4]=c->r[26]|c->r[26]; // 80372B38
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80372B3C
  c->ctr=c->r[12]; // 80372B40
  if (true) { c->lr=0x80372B48u; dispatch(c,c->ctr); } // 80372B44
  cmps(c,0,(int32_t)c->r[3],0); // 80372B48
  if (crb(c,2)) { goto L_80372B78; } // 80372B4C
  c->r[12]=R32(c->r[28]+0x00000000u); // 80372B50
  c->r[3]=c->r[28]|c->r[28]; // 80372B54
  c->r[4]=c->r[26]|c->r[26]; // 80372B58
  c->r[12]=R32(c->r[12]+0x00000078u); // 80372B5C
  c->ctr=c->r[12]; // 80372B60
  if (true) { c->lr=0x80372B68u; dispatch(c,c->ctr); } // 80372B64
  cmpu(c,0,c->r[3],c->r[29]); // 80372B68
  if (!crb(c,0)) { goto L_80372B78; } // 80372B6C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 80372B70
  c->r[25]=c->r[31]+c->r[0]; // 80372B74
L_80372B78:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 80372B78
  c->r[3]=c->r[28]|c->r[28]; // 80372B7C
  c->r[4]=c->r[27]|c->r[27]; // 80372B80
  c->r[5]=c->r[25]|c->r[25]; // 80372B84
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80372B88
  c->r[6]=c->r[26]|c->r[26]; // 80372B8C
  c->ctr=c->r[12]; // 80372B90
  if (true) { c->lr=0x80372B98u; dispatch(c,c->ctr); } // 80372B94
L_80372B98:;
  c->r[27]=c->r[27]+0x00000044u; // 80372B98
  c->r[26]=c->r[26]+0x00000001u; // 80372B9C
L_80372BA0:;
  cmpu(c,0,c->r[26],c->r[30]); // 80372BA0
  if (crb(c,0)) { IRQCHK(c); goto L_80372B20; } // 80372BA4
L_80372BA8:;
  c->r[11]=c->r[1]+0x00000060u; // 80372BA8
  c->lr=0x80372BB0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80372BAC
  c->r[0]=R32(c->r[1]+0x00000064u); // 80372BB0
  c->lr=c->r[0]; // 80372BB4
  c->r[1]=c->r[1]+0x00000060u; // 80372BB8
  return; // 80372BBC
}

// fn_80372BC0
void f_80372BC0(Ctx* __restrict c) {
  trace_call(0x80372BC0u);
  c->r[3]=0u+0x00000000u; // 80372BC0
  return; // 80372BC4
}

// fn_80372BC8
void f_80372BC8(Ctx* __restrict c) {
  trace_call(0x80372BC8u);
  c->r[3]=0u+0x00000000u; // 80372BC8
  return; // 80372BCC
}

// fn_80372BD0
void f_80372BD0(Ctx* __restrict c) {
  trace_call(0x80372BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372BD0
  c->r[0]=c->lr; // 80372BD4
  cmps(c,0,(int32_t)c->r[3],0); // 80372BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80372BDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80372BE0
  c->r[31]=c->r[3]|c->r[3]; // 80372BE4
  if (crb(c,2)) { goto L_80372BF4; } // 80372BE8
  c->r[4]=0u+0x00000000u; // 80372BEC
  c->lr=0x80372BF4u; f_80373AF0(c); // 80372BF0
L_80372BF4:;
  c->r[3]=c->r[31]|c->r[31]; // 80372BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80372BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80372BFC
  c->lr=c->r[0]; // 80372C00
  c->r[1]=c->r[1]+0x00000010u; // 80372C04
  return; // 80372C08
}

// fn_80372C0C
void f_80372C0C(Ctx* __restrict c) {
  trace_call(0x80372C0Cu);
  c->r[3]=c->r[3]+0x00000020u; // 80372C0C
  f_8036C21C(c); return; // 80372C10
}

// fn_80372C14
void f_80372C14(Ctx* __restrict c) {
  trace_call(0x80372C14u);
  c->r[3]=c->r[3]+0x00000020u; // 80372C14
  f_8036C3D0(c); return; // 80372C18
}

// fn_80372C1C
void f_80372C1C(Ctx* __restrict c) {
  trace_call(0x80372C1Cu);
  c->r[3]=c->r[3]+0x00000020u; // 80372C1C
  f_8036C584(c); return; // 80372C20
}

// fn_80372C24
void f_80372C24(Ctx* __restrict c) {
  trace_call(0x80372C24u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80372C24
  c->r[3]=R16(c->r[3]+0x00000032u); // 80372C28
  return; // 80372C2C
}

// fn_80372C30
void f_80372C30(Ctx* __restrict c) {
  trace_call(0x80372C30u);
  c->r[3]=c->r[3]+0x00000020u; // 80372C30
  f_8036C6B0(c); return; // 80372C34
}

// fn_80372C38
void f_80372C38(Ctx* __restrict c) {
  trace_call(0x80372C38u);
  c->r[3]=c->r[3]+0x00000020u; // 80372C38
  f_8036C7DC(c); return; // 80372C3C
}

// fn_80372C40
void f_80372C40(Ctx* __restrict c) {
  trace_call(0x80372C40u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80372C40
  c->r[3]=R16(c->r[3]+0x00000038u); // 80372C44
  return; // 80372C48
}

// fn_80372C4C
void f_80372C4C(Ctx* __restrict c) {
  trace_call(0x80372C4Cu);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80372C4C
  c->r[3]=R16(c->r[3]+0x0000003Au); // 80372C50
  return; // 80372C54
}

// fn_80372C58
void f_80372C58(Ctx* __restrict c) {
  trace_call(0x80372C58u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80372C58
  c->r[3]=R16(c->r[3]+0x0000003Cu); // 80372C5C
  return; // 80372C60
}

// fn_80372C64
void f_80372C64(Ctx* __restrict c) {
  trace_call(0x80372C64u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80372C64
  c->r[3]=R16(c->r[3]+0x0000003Eu); // 80372C68
  return; // 80372C6C
}

// fn_80372C70
void f_80372C70(Ctx* __restrict c) {
  trace_call(0x80372C70u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 80372C70
  c->r[3]=R16(c->r[3]+0x00000040u); // 80372C74
  return; // 80372C78
}

// fn_80372C7C
void f_80372C7C(Ctx* __restrict c) {
  trace_call(0x80372C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372C7C
  c->r[0]=c->lr; // 80372C80
  W32(c->r[1]+0x00000044u,c->r[0]); // 80372C84
  c->r[11]=c->r[1]+0x00000040u; // 80372C88
  c->lr=0x80372C90u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80372C8C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80372C90
  c->r[29]=c->r[3]|c->r[3]; // 80372C94
  c->r[30]=c->r[4]|c->r[4]; // 80372C98
  c->r[31]=c->r[5]|c->r[5]; // 80372C9C
  cmps(c,0,(int32_t)c->r[0],0); // 80372CA0
  c->r[22]=c->r[6]|c->r[6]; // 80372CA4
  if (!crb(c,2)) { goto L_80372CB4; } // 80372CA8
  c->r[3]=0u+0x00000000u; // 80372CAC
  goto L_80372DF8; // 80372CB0
L_80372CB4:;
  cmps(c,0,(int32_t)c->r[6],0); // 80372CB4
  if (crb(c,2)) { goto L_80372CCC; } // 80372CB8
  c->r[3]=c->r[31]|c->r[31]; // 80372CBC
  c->lr=0x80372CC4u; f_8036C3D0(c); // 80372CC0
  c->r[26]=c->r[3]|c->r[3]; // 80372CC4
  goto L_80372CD0; // 80372CC8
L_80372CCC:;
  c->r[26]=0u+0x00000000u; // 80372CCC
L_80372CD0:;
  cmps(c,0,(int32_t)c->r[22],0); // 80372CD0
  if (crb(c,2)) { goto L_80372CE8; } // 80372CD4
  c->r[3]=c->r[31]|c->r[31]; // 80372CD8
  c->lr=0x80372CE0u; f_8036C584(c); // 80372CDC
  c->r[27]=c->r[3]|c->r[3]; // 80372CE0
  goto L_80372CEC; // 80372CE4
L_80372CE8:;
  c->r[27]=0u+0x00000000u; // 80372CE8
L_80372CEC:;
  cmps(c,0,(int32_t)c->r[22],0); // 80372CEC
  if (crb(c,2)) { goto L_80372D04; } // 80372CF0
  c->r[3]=c->r[31]|c->r[31]; // 80372CF4
  c->lr=0x80372CFCu; f_8036C6B0(c); // 80372CF8
  c->r[28]=c->r[3]|c->r[3]; // 80372CFC
  goto L_80372D08; // 80372D00
L_80372D04:;
  c->r[28]=0u+0x00000000u; // 80372D04
L_80372D08:;
  cmps(c,0,(int32_t)c->r[22],0); // 80372D08
  if (crb(c,2)) { goto L_80372D1C; } // 80372D0C
  c->r[3]=c->r[31]|c->r[31]; // 80372D10
  c->lr=0x80372D18u; f_8036C7DC(c); // 80372D14
  goto L_80372D20; // 80372D18
L_80372D1C:;
  c->r[3]=0u+0x00000000u; // 80372D1C
L_80372D20:;
  c->r[25]=rotl(c->r[26],3)&0xFFFFFFF8u; // 80372D20
  c->r[24]=rotl(c->r[27],6)&0xFFFFFFC0u; // 80372D24
  c->r[0]=c->r[25]+0x0000003Bu; // 80372D28
  c->r[23]=rotl(c->r[28],4)&0xFFFFFFF0u; // 80372D2C
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80372D30
  cmps(c,0,(int32_t)c->r[30],0); // 80372D34
  c->r[4]=c->r[26]+c->r[24]; // 80372D38
  c->r[0]=c->r[4]+0x00000003u; // 80372D3C
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80372D40
  c->r[4]=c->r[27]+c->r[23]; // 80372D44
  c->r[0]=c->r[4]+0x00000003u; // 80372D48
  c->r[22]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 80372D4C
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80372D50
  c->r[3]=c->r[28]+c->r[22]; // 80372D54
  c->r[0]=c->r[3]+0x00000003u; // 80372D58
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80372D5C
  if (crb(c,2)) { goto L_80372D68; } // 80372D60
  W32(c->r[30]+0x00000000u,c->r[4]); // 80372D64
L_80372D68:;
  cmps(c,0,(int32_t)c->r[29],0); // 80372D68
  if (!crb(c,2)) { goto L_80372D78; } // 80372D6C
  c->r[3]=0u+0x00000000u; // 80372D70
  goto L_80372DF8; // 80372D74
L_80372D78:;
  c->r[3]=c->r[29]|c->r[29]; // 80372D78
  c->lr=0x80372D80u; f_802A703C(c); // 80372D7C
  cmps(c,0,(int32_t)c->r[3],0); // 80372D80
  if (!crb(c,2)) { goto L_80372D90; } // 80372D84
  c->r[3]=0u+0x00000000u; // 80372D88
  goto L_80372DF8; // 80372D8C
L_80372D90:;
  if (crb(c,2)) { goto L_80372DF8; } // 80372D90
  cmps(c,0,(int32_t)c->r[22],0); // 80372D94
  if (crb(c,2)) { goto L_80372DA4; } // 80372D98
  c->r[9]=c->r[3]+c->r[28]; // 80372D9C
  goto L_80372DA8; // 80372DA0
L_80372DA4:;
  c->r[9]=0u+0x00000000u; // 80372DA4
L_80372DA8:;
  cmps(c,0,(int32_t)c->r[23],0); // 80372DA8
  if (crb(c,2)) { goto L_80372DB8; } // 80372DAC
  c->r[8]=c->r[3]+c->r[27]; // 80372DB0
  goto L_80372DBC; // 80372DB4
L_80372DB8:;
  c->r[8]=0u+0x00000000u; // 80372DB8
L_80372DBC:;
  cmps(c,0,(int32_t)c->r[24],0); // 80372DBC
  if (crb(c,2)) { goto L_80372DCC; } // 80372DC0
  c->r[7]=c->r[3]+c->r[26]; // 80372DC4
  goto L_80372DD0; // 80372DC8
L_80372DCC:;
  c->r[7]=0u+0x00000000u; // 80372DCC
L_80372DD0:;
  cmps(c,0,(int32_t)c->r[25],0); // 80372DD0
  if (crb(c,2)) { goto L_80372DE0; } // 80372DD4
  c->r[6]=c->r[3]+0x00000038u; // 80372DD8
  goto L_80372DE4; // 80372DDC
L_80372DE0:;
  c->r[6]=0u+0x00000000u; // 80372DE0
L_80372DE4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80372DE4
  c->r[4]=c->r[29]|c->r[29]; // 80372DE8
  c->r[5]=c->r[1]+0x00000008u; // 80372DEC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80372DF0
  c->lr=0x80372DF8u; f_80372E10(c); // 80372DF4
L_80372DF8:;
  c->r[11]=c->r[1]+0x00000040u; // 80372DF8
  c->lr=0x80372E00u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80372DFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80372E00
  c->lr=c->r[0]; // 80372E04
  c->r[1]=c->r[1]+0x00000040u; // 80372E08
  return; // 80372E0C
}

// fn_80372E10
void f_80372E10(Ctx* __restrict c) {
  trace_call(0x80372E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372E10
  c->r[0]=c->lr; // 80372E14
  c->r[12]=0u+0x80430000u; // 80372E18
  c->r[10]=0u+0x80430000u; // 80372E1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80372E20
  c->r[0]=0u+0x43300000u; // 80372E24
  c->r[12]=c->r[12]+0x00004E28u; // 80372E28
  {uint32_t ea=c->r[2]+0xFFFFEA78u; c->f[3]=RF64(ea);} // 80372E2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80372E30
  c->r[31]=0u+0x00000000u; // 80372E34
  c->r[11]=c->r[13]+0xFFFF92D8u; // 80372E38
  {uint32_t ea=c->r[2]+0xFFFFEA68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372E3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80372E40
  cmps(c,0,(int32_t)c->r[6],0); // 80372E44
  c->r[30]=R32(c->r[5]+0x00000000u); // 80372E48
  c->r[10]=c->r[10]+0x00004D98u; // 80372E4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80372E50
  c->r[29]=c->r[3]|c->r[3]; // 80372E54
  {uint32_t ea=c->r[2]+0xFFFFEA70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80372E58
  W32(c->r[3]+0x00000004u,c->r[31]); // 80372E5C
  W32(c->r[3]+0x00000008u,c->r[4]); // 80372E60
  W32(c->r[3]+0x00000000u,c->r[12]); // 80372E64
  c->r[4]=R16(c->r[30]+0x00000030u); // 80372E68
  c->r[12]=R32(c->r[30]+0x00000034u); // 80372E6C
  c->r[4]=c->r[4]^0x80000000u; // 80372E70
  W32(c->r[1]+0x00000008u,c->r[0]); // 80372E74
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 80372E78
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80372E7C
  c->r[4]=R32(c->r[11]+c->r[0]); // 80372E80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 80372E84
  c->r[0]=R32(c->r[5]+0x00000000u); // 80372E88
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80372E8C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80372E90
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80372E94
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 80372E98
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 80372E9C
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 80372EA0
  W32(c->r[3]+0x00000000u,c->r[10]); // 80372EA4
  W32(c->r[3]+0x00000020u,c->r[0]); // 80372EA8
  W32(c->r[3]+0x00000024u,c->r[31]); // 80372EAC
  W32(c->r[3]+0x00000028u,c->r[6]); // 80372EB0
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 80372EB4
  W32(c->r[3]+0x00000030u,c->r[8]); // 80372EB8
  W32(c->r[3]+0x00000034u,c->r[9]); // 80372EBC
  if (!crb(c,2)) { goto L_80372EDC; } // 80372EC0
  cmps(c,0,(int32_t)c->r[7],0); // 80372EC4
  if (!crb(c,2)) { goto L_80372EDC; } // 80372EC8
  cmps(c,0,(int32_t)c->r[8],0); // 80372ECC
  if (!crb(c,2)) { goto L_80372EDC; } // 80372ED0
  cmps(c,0,(int32_t)c->r[9],0); // 80372ED4
  if (crb(c,2)) { goto L_80372EE8; } // 80372ED8
L_80372EDC:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 80372EDC
  c->r[0]=c->r[0]|0x00000001u; // 80372EE0
  W32(c->r[3]+0x00000024u,c->r[0]); // 80372EE4
L_80372EE8:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 80372EE8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80372EEC
  if (crb(c,2)) { goto L_80372EFC; } // 80372EF0
  c->r[3]=c->r[29]|c->r[29]; // 80372EF4
  c->lr=0x80372EFCu; f_8037387C(c); // 80372EF8
L_80372EFC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80372EFC
  c->r[3]=c->r[29]|c->r[29]; // 80372F00
  c->r[30]=R32(c->r[1]+0x00000018u); // 80372F04
  c->r[29]=R32(c->r[1]+0x00000014u); // 80372F08
  c->r[0]=R32(c->r[1]+0x00000024u); // 80372F0C
  c->lr=c->r[0]; // 80372F10
  c->r[1]=c->r[1]+0x00000020u; // 80372F14
  return; // 80372F18
}

// fn_80372F1C
void f_80372F1C(Ctx* __restrict c) {
  trace_call(0x80372F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372F1C
  c->r[0]=c->lr; // 80372F20
  cmps(c,0,(int32_t)c->r[3],0); // 80372F24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80372F28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80372F2C
  c->r[31]=c->r[3]|c->r[3]; // 80372F30
  if (crb(c,2)) { goto L_80372F44; } // 80372F34
  if (crb(c,2)) { goto L_80372F44; } // 80372F38
  c->r[4]=0u+0x00000000u; // 80372F3C
  c->lr=0x80372F44u; f_80373AF0(c); // 80372F40
L_80372F44:;
  c->r[3]=c->r[31]|c->r[31]; // 80372F44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80372F48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80372F4C
  c->lr=c->r[0]; // 80372F50
  c->r[1]=c->r[1]+0x00000010u; // 80372F54
  return; // 80372F58
}

// fn_80372F5C
void f_80372F5C(Ctx* __restrict c) {
  trace_call(0x80372F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372F5C
  c->r[0]=c->lr; // 80372F60
  c->f[3]=c->f[1]; // 80372F64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80372F68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80372F6C
  c->r[31]=c->r[3]|c->r[3]; // 80372F70
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80372F74
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372F78
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80372F7C
  c->ctr=c->r[12]; // 80372F80
  if (true) { c->lr=0x80372F88u; dispatch(c,c->ctr); } // 80372F84
  c->r[0]=R32(c->r[31]+0x00000024u); // 80372F88
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 80372F8C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80372F90
  if (crb(c,2)) { goto L_80372FA0; } // 80372F94
  c->r[3]=c->r[31]|c->r[31]; // 80372F98
  c->lr=0x80372FA0u; f_8037387C(c); // 80372F9C
L_80372FA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80372FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80372FA4
  c->lr=c->r[0]; // 80372FA8
  c->r[1]=c->r[1]+0x00000010u; // 80372FAC
  return; // 80372FB0
}

// fn_80372FB4
void f_80372FB4(Ctx* __restrict c) {
  trace_call(0x80372FB4u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80372FB4
  return; // 80372FB8
}

// fn_80372FBC
void f_80372FBC(Ctx* __restrict c) {
  trace_call(0x80372FBCu);
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80372FBC
  return; // 80372FC0
}

// fn_80372FC4
void f_80372FC4(Ctx* __restrict c) {
  trace_call(0x80372FC4u);
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372FC4
  return; // 80372FC8
}

// fn_80372FCC
void f_80372FCC(Ctx* __restrict c) {
  trace_call(0x80372FCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80372FCC
  c->r[0]=c->lr; // 80372FD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80372FD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80372FD8
  c->r[31]=c->r[3]|c->r[3]; // 80372FDC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80372FE0
  {uint32_t ea=c->r[13]+0xFFFF92E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372FE4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80372FE8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 80372FEC
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 80372FF0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80372FF4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80372FF8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 80372FFC
  c->ctr=c->r[12]; // 80373000
  if (true) { c->lr=0x80373008u; dispatch(c,c->ctr); } // 80373004
  c->r[0]=R32(c->r[31]+0x00000024u); // 80373008
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 8037300C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80373010
  if (crb(c,2)) { goto L_80373020; } // 80373014
  c->r[3]=c->r[31]|c->r[31]; // 80373018
  c->lr=0x80373020u; f_8037387C(c); // 8037301C
L_80373020:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80373024
  c->lr=c->r[0]; // 80373028
  c->r[1]=c->r[1]+0x00000010u; // 8037302C
  return; // 80373030
}

// fn_80373034
void f_80373034(Ctx* __restrict c) {
  trace_call(0x80373034u);
  c->r[5]=0u+0x00010000u; // 80373034
  c->r[0]=c->r[5]+0x00000002u; // 80373038
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8037303C
  if (crb(c,2)) { goto L_80373080; } // 80373040
  if (!crb(c,0)) { goto L_80373054; } // 80373044
  cmps(c,0,(int32_t)c->r[4],8); // 80373048
  if (crb(c,2)) { goto L_80373064; } // 8037304C
  return; // 80373050
L_80373054:;
  c->r[0]=c->r[5]+0x00000004u; // 80373054
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80373058
  if (!crb(c,0)) return; // 8037305C
  goto L_80373074; // 80373060
L_80373064:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80373064
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80373068
  c->ctr=c->r[12]; // 8037306C
  if (true) { dispatch(c,c->ctr); return; } // 80373070
L_80373074:;
  c->r[0]=0u+0x00000000u; // 80373074
  W32(c->r[3]+0x00000004u,c->r[0]); // 80373078
  return; // 8037307C
L_80373080:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 80373080
  return; // 80373084
}

// fn_80373088
void f_80373088(Ctx* __restrict c) {
  trace_call(0x80373088u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373088
  c->r[0]=c->lr; // 8037308C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80373090
  c->r[11]=c->r[1]+0x00000030u; // 80373094
  c->lr=0x8037309Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80373098
  c->r[24]=c->r[3]|c->r[3]; // 8037309C
  c->r[25]=c->r[4]|c->r[4]; // 803730A0
  c->r[4]=c->r[5]|c->r[5]; // 803730A4
  c->r[3]=c->r[3]+0x00000020u; // 803730A8
  c->lr=0x803730B0u; f_8036C85C(c); // 803730AC
  cmps(c,0,(int32_t)c->r[3],0); // 803730B0
  c->r[30]=c->r[3]|c->r[3]; // 803730B4
  if (!crb(c,2)) { goto L_803730C4; } // 803730B8
  c->r[3]=0u+0x00000000u; // 803730BC
  goto L_803731A8; // 803730C0
L_803730C4:;
  c->r[26]=R8(c->r[3]+0x0000001Au); // 803730C4
  c->r[28]=0u+0x00000007u; // 803730C8
  c->r[27]=0u+0x00000000u; // 803730CC
  cmps(c,0,(int32_t)c->r[26],0); // 803730D0
  if (crb(c,2)) { goto L_80373164; } // 803730D4
  c->r[29]=c->r[30]|c->r[30]; // 803730D8
  goto L_80373144; // 803730DC
L_803730E0:;
  c->r[4]=R16(c->r[29]+0x0000003Cu); // 803730E0
  cmpu(c,0,c->r[4],0x0000FFFFu); // 803730E4
  if (crb(c,2)) { goto L_8037312C; } // 803730E8
  c->r[3]=c->r[24]+0x00000020u; // 803730EC
  c->lr=0x803730F4u; f_8036C4D8(c); // 803730F0
  c->r[31]=c->r[3]|c->r[3]; // 803730F4
  c->r[3]=c->r[25]|c->r[25]; // 803730F8
  c->r[5]=R32(c->r[31]+0x00000010u); // 803730FC
  c->r[4]=c->r[27]|c->r[27]; // 80373100
  c->lr=0x80373108u; f_803890C8(c); // 80373104
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80373108
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8037310C
  if (crb(c,2)) { goto L_8037313C; } // 80373110
  c->r[5]=R32(c->r[31]+0x00000014u); // 80373114
  c->r[4]=c->r[28]|c->r[28]; // 80373118
  c->r[3]=c->r[25]|c->r[25]; // 8037311C
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 80373120
  c->lr=0x80373128u; f_803890C8(c); // 80373124
  goto L_8037313C; // 80373128
L_8037312C:;
  c->r[3]=c->r[25]|c->r[25]; // 8037312C
  c->r[4]=c->r[27]|c->r[27]; // 80373130
  c->r[5]=0u+0xFFFFFFFFu; // 80373134
  c->lr=0x8037313Cu; f_803890C8(c); // 80373138
L_8037313C:;
  c->r[29]=c->r[29]+0x00000002u; // 8037313C
  c->r[27]=c->r[27]+0x00000001u; // 80373140
L_80373144:;
  cmpu(c,0,c->r[27],c->r[26]); // 80373144
  if (crb(c,0)) { IRQCHK(c); goto L_803730E0; } // 80373148
  goto L_80373164; // 8037314C
L_80373150:;
  c->r[3]=c->r[25]|c->r[25]; // 80373150
  c->r[4]=c->r[26]|c->r[26]; // 80373154
  c->r[5]=0u+0xFFFFFFFFu; // 80373158
  c->lr=0x80373160u; f_803890C8(c); // 8037315C
  c->r[26]=c->r[26]+0x00000001u; // 80373160
L_80373164:;
  cmpu(c,0,c->r[26],c->r[28]); // 80373164
  if (!crb(c,1)) { IRQCHK(c); goto L_80373150; } // 80373168
  c->r[0]=R32(c->r[30]+0x00000014u); // 8037316C
  cmps(c,0,(int32_t)c->r[0],0); // 80373170
  if (crb(c,2)) { goto L_80373198; } // 80373174
  c->r[4]=R16(c->r[30]+0x00000018u); // 80373178
  c->r[3]=c->r[24]+0x00000020u; // 8037317C
  c->lr=0x80373184u; f_8036C324(c); // 80373180
  c->r[4]=c->r[3]|c->r[3]; // 80373184
  c->r[3]=c->r[25]|c->r[25]; // 80373188
  c->r[4]=R32(c->r[4]+0x00000010u); // 8037318C
  c->lr=0x80373194u; f_80389138(c); // 80373190
  goto L_803731A4; // 80373194
L_80373198:;
  c->r[3]=c->r[25]|c->r[25]; // 80373198
  c->r[4]=0u+0xFFFFFFFFu; // 8037319C
  c->lr=0x803731A4u; f_80389138(c); // 803731A0
L_803731A4:;
  c->r[3]=0u+0x00000001u; // 803731A4
L_803731A8:;
  c->r[11]=c->r[1]+0x00000030u; // 803731A8
  c->lr=0x803731B0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803731AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 803731B0
  c->lr=c->r[0]; // 803731B4
  c->r[1]=c->r[1]+0x00000030u; // 803731B8
  return; // 803731BC
}

// fn_803731C0
void f_803731C0(Ctx* __restrict c) {
  trace_call(0x803731C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803731C0
  c->r[0]=c->lr; // 803731C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803731C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803731CC
  c->r[31]=c->r[3]|c->r[3]; // 803731D0
  c->r[3]=c->r[4]|c->r[4]; // 803731D4
  c->r[12]=R32(c->r[4]+0x00000000u); // 803731D8
  c->r[4]=c->r[1]+0x00000008u; // 803731DC
  c->r[12]=R32(c->r[12]+0x00000080u); // 803731E0
  c->ctr=c->r[12]; // 803731E4
  if (true) { c->lr=0x803731ECu; dispatch(c,c->ctr); } // 803731E8
  c->r[4]=R32(c->r[3]+0x00000000u); // 803731EC
  c->r[3]=R32(c->r[3]+0x00000004u); // 803731F0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 803731F4
  if (!crb(c,2)) { goto L_80373204; } // 803731F8
  c->r[0]=0u+0xFFFFFF00u; // 803731FC
  c->r[3]=c->r[3]|c->r[0]; // 80373200
L_80373204:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80373204
  if (!crb(c,2)) { goto L_80373210; } // 80373208
  c->r[3]=c->r[3]|0x000000FFu; // 8037320C
L_80373210:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 80373210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80373214
  c->r[0]=R32(c->r[1]+0x00000024u); // 80373218
  c->lr=c->r[0]; // 8037321C
  c->r[1]=c->r[1]+0x00000020u; // 80373220
  return; // 80373224
}

// fn_80373228
void f_80373228(Ctx* __restrict c) {
  trace_call(0x80373228u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373228
  c->r[0]=c->lr; // 8037322C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80373230
  c->r[0]=0u+0xFFFFFFFFu; // 80373234
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80373238
  c->r[31]=c->r[5]|c->r[5]; // 8037323C
  c->r[5]=c->r[6]|c->r[6]; // 80373240
  W32(c->r[1]+0x00000068u,c->r[30]); // 80373244
  W32(c->r[1]+0x00000064u,c->r[29]); // 80373248
  c->r[29]=c->r[4]|c->r[4]; // 8037324C
  c->r[4]=c->r[1]+0x00000018u; // 80373250
  W32(c->r[1]+0x00000038u,c->r[0]); // 80373254
  W32(c->r[1]+0x00000050u,c->r[0]); // 80373258
  c->r[12]=R32(c->r[3]+0x00000000u); // 8037325C
  c->r[12]=R32(c->r[12]+0x00000084u); // 80373260
  c->ctr=c->r[12]; // 80373264
  if (true) { c->lr=0x8037326Cu; dispatch(c,c->ctr); } // 80373268
  c->r[0]=R32(c->r[3]+0x00000004u); // 8037326C
  c->r[30]=c->r[3]|c->r[3]; // 80373270
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80373274
  if (crb(c,2)) { goto L_80373374; } // 80373278
  cmps(c,0,(int32_t)c->r[29],0); // 8037327C
  if (crb(c,2)) { goto L_80373290; } // 80373280
  c->r[3]=c->r[29]|c->r[29]; // 80373284
  c->r[4]=c->r[30]|c->r[30]; // 80373288
  c->lr=0x80373290u; f_8037262C(c); // 8037328C
L_80373290:;
  cmps(c,0,(int32_t)c->r[31],0); // 80373290
  if (crb(c,2)) { goto L_8037339C; } // 80373294
  c->r[0]=R32(c->r[30]+0x00000004u); // 80373298
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8037329C
  if (crb(c,2)) { goto L_80373364; } // 803732A0
  {uint32_t ea=c->r[30]+0x00000014u; psq_load(c,1,ea,0,0);} // 803732A4
  c->r[3]=c->r[1]+0x0000000Cu; // 803732A8
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 803732AC
  c->r[4]=c->r[3]|c->r[3]; // 803732B0
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803732B4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 803732B8
  {uint32_t ea=c->r[30]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 803732BC
  {uint32_t ea=c->r[30]+0x00000010u; psq_load(c,0,ea,1,0);} // 803732C0
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 803732C4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 803732C8
  c->lr=0x803732D0u; f_80265750(c); // 803732CC
  c->r[3]=c->r[31]|c->r[31]; // 803732D0
  c->lr=0x803732D8u; f_80388500(c); // 803732D4
  c->r[0]=R8(c->r[30]+0x00000038u); // 803732D8
  c->r[4]=c->r[1]+0x00000008u; // 803732DC
  c->r[3]=c->r[31]|c->r[31]; // 803732E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803732E4
  c->r[0]=R8(c->r[30]+0x00000039u); // 803732E8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803732EC
  c->r[0]=R8(c->r[30]+0x0000003Au); // 803732F0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803732F4
  c->r[0]=R8(c->r[30]+0x0000003Bu); // 803732F8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803732FC
  c->lr=0x80373304u; f_80388514(c); // 80373300
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80373304
  c->r[3]=c->r[31]|c->r[31]; // 80373308
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8037330C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80373310
  c->lr=0x80373318u; f_803886D8(c); // 80373314
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80373318
  c->r[3]=c->r[31]|c->r[31]; // 8037331C
  c->lr=0x80373324u; f_80388718(c); // 80373320
  c->r[0]=R32(c->r[30]+0x00000004u); // 80373324
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80373328
  if (!crb(c,2)) { goto L_8037333C; } // 8037332C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80373330
  c->r[0]=c->r[0]|0x00000010u; // 80373334
  W32(c->r[31]+0x00000000u,c->r[0]); // 80373338
L_8037333C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8037333C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80373340
  if (!crb(c,2)) { goto L_80373354; } // 80373344
  c->r[0]=R32(c->r[31]+0x00000000u); // 80373348
  c->r[0]=c->r[0]|0x00000020u; // 8037334C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80373350
L_80373354:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80373354
  c->r[0]=c->r[0]|0x00000004u; // 80373358
  W32(c->r[31]+0x00000000u,c->r[0]); // 8037335C
  goto L_8037339C; // 80373360
L_80373364:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80373364
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80373368
  W32(c->r[31]+0x00000000u,c->r[0]); // 8037336C
  goto L_8037339C; // 80373370
L_80373374:;
  cmps(c,0,(int32_t)c->r[29],0); // 80373374
  if (crb(c,2)) { goto L_80373388; } // 80373378
  c->r[0]=R32(c->r[29]+0x00000000u); // 8037337C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80373380
  W32(c->r[29]+0x00000000u,c->r[0]); // 80373384
L_80373388:;
  cmps(c,0,(int32_t)c->r[31],0); // 80373388
  if (crb(c,2)) { goto L_8037339C; } // 8037338C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80373390
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 80373394
  W32(c->r[31]+0x00000000u,c->r[0]); // 80373398
L_8037339C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 8037339C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 803733A0
  c->r[30]=R32(c->r[1]+0x00000068u); // 803733A4
  c->r[29]=R32(c->r[1]+0x00000064u); // 803733A8
  c->lr=c->r[0]; // 803733AC
  c->r[1]=c->r[1]+0x00000070u; // 803733B0
  return; // 803733B4
}

// fn_803733B8
void f_803733B8(Ctx* __restrict c) {
  trace_call(0x803733B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803733B8
  c->r[0]=c->lr; // 803733BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803733C0
  c->r[0]=0u+0xFFFFFFFFu; // 803733C4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803733C8
  c->r[31]=c->r[4]|c->r[4]; // 803733CC
  c->r[4]=c->r[1]+0x00000010u; // 803733D0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803733D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803733D8
  c->r[12]=R32(c->r[12]+0x00000088u); // 803733DC
  c->ctr=c->r[12]; // 803733E0
  if (true) { c->lr=0x803733E8u; dispatch(c,c->ctr); } // 803733E4
  c->r[4]=R32(c->r[31]+0x00000000u); // 803733E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 803733EC
  cmps(c,0,(int32_t)c->r[4],0); // 803733F0
  if (crb(c,2)) { goto L_803733FC; } // 803733F4
  W32(c->r[4]+0x00000000u,c->r[0]); // 803733F8
L_803733FC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 803733FC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80373400
  cmps(c,0,(int32_t)c->r[4],0); // 80373404
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80373408
  if (crb(c,2)) { goto L_80373418; } // 8037340C
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 80373410
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 80373414
L_80373418:;
  c->r[7]=R32(c->r[31]+0x00000000u); // 80373418
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 8037341C
  c->r[5]=R8(c->r[3]+0x0000000Du); // 80373420
  cmps(c,0,(int32_t)c->r[7],0); // 80373424
  c->r[4]=R8(c->r[3]+0x0000000Eu); // 80373428
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 8037342C
  W8(c->r[1]+0x00000008u,c->r[6]); // 80373430
  W8(c->r[1]+0x00000009u,c->r[5]); // 80373434
  W8(c->r[1]+0x0000000Au,c->r[4]); // 80373438
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8037343C
  if (crb(c,2)) { goto L_80373454; } // 80373440
  W8(c->r[7]+0x00000014u,c->r[6]); // 80373444
  W8(c->r[7]+0x00000015u,c->r[5]); // 80373448
  W8(c->r[7]+0x00000016u,c->r[4]); // 8037344C
  W8(c->r[7]+0x00000017u,c->r[0]); // 80373450
L_80373454:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80373454
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80373458
  c->lr=c->r[0]; // 8037345C
  c->r[1]=c->r[1]+0x00000030u; // 80373460
  return; // 80373464
}

// fn_80373468
void f_80373468(Ctx* __restrict c) {
  trace_call(0x80373468u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373468
  c->r[0]=c->lr; // 8037346C
  W32(c->r[1]+0x00000094u,c->r[0]); // 80373470
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80373474
  W32(c->r[1]+0x00000088u,c->r[30]); // 80373478
  c->r[30]=c->r[4]|c->r[4]; // 8037347C
  c->r[4]=c->r[1]+0x0000004Cu; // 80373480
  c->r[12]=R32(c->r[3]+0x00000000u); // 80373484
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 80373488
  c->ctr=c->r[12]; // 8037348C
  if (true) { c->lr=0x80373494u; dispatch(c,c->ctr); } // 80373490
  c->r[0]=R32(c->r[3]+0x00000000u); // 80373494
  c->r[31]=c->r[3]|c->r[3]; // 80373498
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8037349C
  if (!crb(c,2)) { goto L_803734AC; } // 803734A0
  c->r[3]=0u+0x00000000u; // 803734A4
  goto L_803735B0; // 803734A8
L_803734AC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803734AC
  cmps(c,0,(int32_t)c->r[0],1); // 803734B0
  if (crb(c,2)) { goto L_803734E4; } // 803734B4
  if (!crb(c,0)) { goto L_80373510; } // 803734B8
  cmps(c,0,(int32_t)c->r[0],0); // 803734BC
  if (!crb(c,0)) { goto L_803734C8; } // 803734C0
  goto L_80373510; // 803734C4
L_803734C8:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 803734C8
  c->r[3]=c->r[30]|c->r[30]; // 803734CC
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803734D0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 803734D4
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 803734D8
  c->lr=0x803734E0u; f_8037D158(c); // 803734DC
  goto L_80373510; // 803734E0
L_803734E4:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 803734E4
  {uint32_t ea=c->r[2]+0xFFFFEA80u; c->f[1]=c->ps1[1]=RF32(ea);} // 803734E8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803734EC
  c->r[3]=c->r[30]|c->r[30]; // 803734F0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803734F4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 803734F8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 803734FC
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 80373500
  c->f[2]=-c->f[1]; // 80373504
  c->f[3]=-c->f[4]; // 80373508
  c->lr=0x80373510u; f_8037D190(c); // 8037350C
L_80373510:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80373510
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80373514
  cmps(c,0,(int32_t)c->r[0],1); // 80373518
  if (crb(c,2)) { goto L_80373560; } // 8037351C
  if (!crb(c,0)) { goto L_80373594; } // 80373520
  cmps(c,0,(int32_t)c->r[0],0); // 80373524
  if (!crb(c,0)) { goto L_80373530; } // 80373528
  goto L_80373594; // 8037352C
L_80373530:;
  c->r[0]=0u+0x00000001u; // 80373530
  W32(c->r[1]+0x00000020u,c->r[0]); // 80373534
  {uint32_t ea=c->r[31]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80373538
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037353C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80373540
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 80373544
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 80373548
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8037354C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80373550
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 80373554
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80373558
  goto L_80373594; // 8037355C
L_80373560:;
  c->r[0]=0u+0x00000002u; // 80373560
  W32(c->r[1]+0x00000020u,c->r[0]); // 80373564
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80373568
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8037356C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80373570
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80373574
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80373578
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 8037357C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 80373580
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80373584
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 80373588
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8037358C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80373590
L_80373594:;
  c->r[3]=c->r[30]|c->r[30]; // 80373594
  c->r[4]=c->r[31]+0x00000008u; // 80373598
  c->lr=0x803735A0u; f_8037CE20(c); // 8037359C
  c->r[3]=c->r[30]|c->r[30]; // 803735A0
  c->r[4]=c->r[1]+0x00000020u; // 803735A4
  c->lr=0x803735ACu; f_8037CE84(c); // 803735A8
  c->r[3]=0u+0x00000001u; // 803735AC
L_803735B0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 803735B0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 803735B4
  c->r[30]=R32(c->r[1]+0x00000088u); // 803735B8
  c->lr=c->r[0]; // 803735BC
  c->r[1]=c->r[1]+0x00000090u; // 803735C0
  return; // 803735C4
}

// fn_803735C8
void f_803735C8(Ctx* __restrict c) {
  trace_call(0x803735C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803735C8
  c->r[0]=c->lr; // 803735CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803735D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803735D4
  c->r[31]=c->r[4]|c->r[4]; // 803735D8
  c->r[4]=c->r[5]|c->r[5]; // 803735DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803735E0
  c->r[30]=c->r[3]|c->r[3]; // 803735E4
  c->r[3]=c->r[3]+0x00000020u; // 803735E8
  c->lr=0x803735F0u; f_8036C8A8(c); // 803735EC
  cmps(c,0,(int32_t)c->r[3],0); // 803735F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 803735F4
  if (!crb(c,2)) { goto L_80373614; } // 803735F8
  c->r[3]=0u+0x00000000u; // 803735FC
  c->r[0]=0u+0xFFFFFFFFu; // 80373600
  W32(c->r[31]+0x00000000u,c->r[3]); // 80373604
  c->r[3]=c->r[31]|c->r[31]; // 80373608
  W32(c->r[31]+0x00000004u,c->r[0]); // 8037360C
  goto L_80373644; // 80373610
L_80373614:;
  c->r[4]=R32(c->r[30]+0x00000028u); // 80373614
  cmps(c,0,(int32_t)c->r[4],0); // 80373618
  if (crb(c,2)) { goto L_80373630; } // 8037361C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80373620
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80373624
  c->r[3]=c->r[4]+c->r[0]; // 80373628
  goto L_80373644; // 8037362C
L_80373630:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80373630
  c->r[4]=c->r[31]|c->r[31]; // 80373634
  c->r[3]=c->r[1]+0x00000008u; // 80373638
  c->lr=0x80373640u; f_8036B81C(c); // 8037363C
  c->r[3]=c->r[31]|c->r[31]; // 80373640
L_80373644:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80373644
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80373648
  c->r[30]=R32(c->r[1]+0x00000018u); // 8037364C
  c->lr=c->r[0]; // 80373650
  c->r[1]=c->r[1]+0x00000020u; // 80373654
  return; // 80373658
}

// fn_8037365C
void f_8037365C(Ctx* __restrict c) {
  trace_call(0x8037365Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8037365C
  c->r[0]=c->lr; // 80373660
  W32(c->r[1]+0x00000024u,c->r[0]); // 80373664
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80373668
  c->r[31]=c->r[4]|c->r[4]; // 8037366C
  c->r[4]=c->r[5]|c->r[5]; // 80373670
  W32(c->r[1]+0x00000018u,c->r[30]); // 80373674
  c->r[30]=c->r[3]|c->r[3]; // 80373678
  c->r[3]=c->r[3]+0x00000020u; // 8037367C
  c->lr=0x80373684u; f_8036C8F4(c); // 80373680
  cmps(c,0,(int32_t)c->r[3],0); // 80373684
  W32(c->r[1]+0x00000008u,c->r[3]); // 80373688
  if (!crb(c,2)) { goto L_803736A0; } // 8037368C
  c->r[0]=0u+0x00000000u; // 80373690
  c->r[3]=c->r[31]|c->r[31]; // 80373694
  W32(c->r[31]+0x00000004u,c->r[0]); // 80373698
  goto L_803736D0; // 8037369C
L_803736A0:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 803736A0
  cmps(c,0,(int32_t)c->r[4],0); // 803736A4
  if (crb(c,2)) { goto L_803736BC; } // 803736A8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803736AC
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 803736B0
  c->r[3]=c->r[4]+c->r[0]; // 803736B4
  goto L_803736D0; // 803736B8
L_803736BC:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803736BC
  c->r[4]=c->r[31]|c->r[31]; // 803736C0
  c->r[3]=c->r[1]+0x00000008u; // 803736C4
  c->lr=0x803736CCu; f_8036B8EC(c); // 803736C8
  c->r[3]=c->r[31]|c->r[31]; // 803736CC
L_803736D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803736D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803736D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803736D8
  c->lr=c->r[0]; // 803736DC
  c->r[1]=c->r[1]+0x00000020u; // 803736E0
  return; // 803736E4
}

// fn_803736E8
void f_803736E8(Ctx* __restrict c) {
  trace_call(0x803736E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803736E8
  c->r[0]=c->lr; // 803736EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803736F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803736F4
  c->r[31]=c->r[4]|c->r[4]; // 803736F8
  c->r[4]=c->r[5]|c->r[5]; // 803736FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80373700
  c->r[30]=c->r[3]|c->r[3]; // 80373704
  c->r[3]=c->r[3]+0x00000020u; // 80373708
  c->lr=0x80373710u; f_8036C940(c); // 8037370C
  cmps(c,0,(int32_t)c->r[3],0); // 80373710
  W32(c->r[1]+0x00000008u,c->r[3]); // 80373714
  if (!crb(c,2)) { goto L_8037372C; } // 80373718
  c->r[0]=0u+0x00000000u; // 8037371C
  c->r[3]=c->r[31]|c->r[31]; // 80373720
  W32(c->r[31]+0x00000000u,c->r[0]); // 80373724
  goto L_8037375C; // 80373728
L_8037372C:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 8037372C
  cmps(c,0,(int32_t)c->r[4],0); // 80373730
  if (crb(c,2)) { goto L_80373748; } // 80373734
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80373738
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8037373C
  c->r[3]=c->r[4]+c->r[0]; // 80373740
  goto L_8037375C; // 80373744
L_80373748:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80373748
  c->r[4]=c->r[31]|c->r[31]; // 8037374C
  c->r[3]=c->r[1]+0x00000008u; // 80373750
  c->lr=0x80373758u; f_8036BCE4(c); // 80373754
  c->r[3]=c->r[31]|c->r[31]; // 80373758
L_8037375C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8037375C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80373760
  c->r[30]=R32(c->r[1]+0x00000018u); // 80373764
  c->lr=c->r[0]; // 80373768
  c->r[1]=c->r[1]+0x00000020u; // 8037376C
  return; // 80373770
}

// fn_80373774
void f_80373774(Ctx* __restrict c) {
  trace_call(0x80373774u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373774
  c->r[0]=c->lr; // 80373778
  W32(c->r[1]+0x00000024u,c->r[0]); // 8037377C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80373780
  c->r[31]=c->r[4]|c->r[4]; // 80373784
  c->r[4]=c->r[5]|c->r[5]; // 80373788
  W32(c->r[1]+0x00000018u,c->r[30]); // 8037378C
  c->r[30]=c->r[3]|c->r[3]; // 80373790
  c->r[3]=c->r[3]+0x00000020u; // 80373794
  c->lr=0x8037379Cu; f_8036C98C(c); // 80373798
  cmps(c,0,(int32_t)c->r[3],0); // 8037379C
  W32(c->r[1]+0x00000008u,c->r[3]); // 803737A0
  if (!crb(c,2)) { goto L_803737B8; } // 803737A4
  c->r[0]=0u+0x00000000u; // 803737A8
  c->r[3]=c->r[31]|c->r[31]; // 803737AC
  W32(c->r[31]+0x00000000u,c->r[0]); // 803737B0
  goto L_803737E8; // 803737B4
L_803737B8:;
  c->r[4]=R32(c->r[30]+0x00000034u); // 803737B8
  cmps(c,0,(int32_t)c->r[4],0); // 803737BC
  if (crb(c,2)) { goto L_803737D4; } // 803737C0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803737C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 803737C8
  c->r[3]=c->r[4]+c->r[0]; // 803737CC
  goto L_803737E8; // 803737D0
L_803737D4:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803737D4
  c->r[4]=c->r[31]|c->r[31]; // 803737D8
  c->r[3]=c->r[1]+0x00000008u; // 803737DC
  c->lr=0x803737E4u; f_8036BE44(c); // 803737E0
  c->r[3]=c->r[31]|c->r[31]; // 803737E4
L_803737E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803737E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803737EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803737F0
  c->lr=c->r[0]; // 803737F4
  c->r[1]=c->r[1]+0x00000020u; // 803737F8
  return; // 803737FC
}

// fn_80373800
void f_80373800(Ctx* __restrict c) {
  trace_call(0x80373800u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373800
  c->r[0]=c->lr; // 80373804
  c->r[3]=c->r[3]+0x00000020u; // 80373808
  W32(c->r[1]+0x00000014u,c->r[0]); // 8037380C
  c->lr=0x80373814u; f_8036C8F4(c); // 80373810
  cmps(c,0,(int32_t)c->r[3],0); // 80373814
  if (crb(c,2)) { goto L_80373824; } // 80373818
  c->r[3]=R32(c->r[3]+0x00000014u); // 8037381C
  goto L_80373828; // 80373820
L_80373824:;
  c->r[3]=0u+0xFFFFFFFFu; // 80373824
L_80373828:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373828
  c->lr=c->r[0]; // 8037382C
  c->r[1]=c->r[1]+0x00000010u; // 80373830
  return; // 80373834
}

// fn_80373838
void f_80373838(Ctx* __restrict c) {
  trace_call(0x80373838u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373838
  c->r[0]=c->lr; // 8037383C
  c->r[3]=c->r[3]+0x00000020u; // 80373840
  W32(c->r[1]+0x00000014u,c->r[0]); // 80373844
  c->lr=0x8037384Cu; f_8036C8F4(c); // 80373848
  cmps(c,0,(int32_t)c->r[3],0); // 8037384C
  c->r[4]=0u+0x00000000u; // 80373850
  if (crb(c,2)) { goto L_80373868; } // 80373854
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80373858
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8037385C
  if (crb(c,2)) { goto L_80373868; } // 80373860
  c->r[4]=0u+0x00000001u; // 80373864
L_80373868:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373868
  c->r[3]=c->r[4]|c->r[4]; // 8037386C
  c->lr=c->r[0]; // 80373870
  c->r[1]=c->r[1]+0x00000010u; // 80373874
  return; // 80373878
}

// fn_8037387C
void f_8037387C(Ctx* __restrict c) {
  trace_call(0x8037387Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8037387C
  c->r[0]=c->lr; // 80373880
  W32(c->r[1]+0x00000054u,c->r[0]); // 80373884
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80373888
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8037388C
  c->r[11]=c->r[1]+0x00000040u; // 80373890
  c->lr=0x80373898u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80373894
  c->r[25]=c->r[3]|c->r[3]; // 80373898
  c->r[3]=c->r[3]+0x00000020u; // 8037389C
  c->lr=0x803738A4u; f_8036C3D0(c); // 803738A0
  c->r[28]=c->r[3]|c->r[3]; // 803738A4
  c->r[3]=c->r[25]+0x00000020u; // 803738A8
  c->lr=0x803738B0u; f_8036C584(c); // 803738AC
  c->r[29]=c->r[3]|c->r[3]; // 803738B0
  c->r[3]=c->r[25]+0x00000020u; // 803738B4
  c->lr=0x803738BCu; f_8036C6B0(c); // 803738B8
  c->r[30]=c->r[3]|c->r[3]; // 803738BC
  c->r[3]=c->r[25]+0x00000020u; // 803738C0
  c->lr=0x803738C8u; f_8036C7DC(c); // 803738C4
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 803738C8
  c->r[31]=c->r[3]|c->r[3]; // 803738CC
  c->r[26]=0u+0x00000000u; // 803738D0
  c->r[27]=0u+0x00000000u; // 803738D4
  goto L_80373908; // 803738D8
L_803738DC:;
  c->r[4]=c->r[26]|c->r[26]; // 803738DC
  c->r[3]=c->r[25]+0x00000020u; // 803738E0
  c->lr=0x803738E8u; f_8036C324(c); // 803738E4
  W32(c->r[1]+0x00000014u,c->r[3]); // 803738E8
  c->f[1]=c->f[31]; // 803738EC
  c->r[3]=c->r[1]+0x00000014u; // 803738F0
  c->r[0]=R32(c->r[25]+0x00000028u); // 803738F4
  c->r[4]=c->r[0]+c->r[27]; // 803738F8
  c->lr=0x80373900u; f_8036B81C(c); // 803738FC
  c->r[27]=c->r[27]+0x00000008u; // 80373900
  c->r[26]=c->r[26]+0x00000001u; // 80373904
L_80373908:;
  cmpu(c,0,c->r[26],c->r[28]); // 80373908
  if (crb(c,0)) { IRQCHK(c); goto L_803738DC; } // 8037390C
  c->r[26]=0u+0x00000000u; // 80373910
  c->r[28]=0u+0x00000000u; // 80373914
  goto L_80373948; // 80373918
L_8037391C:;
  c->r[4]=c->r[26]|c->r[26]; // 8037391C
  c->r[3]=c->r[25]+0x00000020u; // 80373920
  c->lr=0x80373928u; f_8036C4D8(c); // 80373924
  W32(c->r[1]+0x00000010u,c->r[3]); // 80373928
  c->f[1]=c->f[31]; // 8037392C
  c->r[3]=c->r[1]+0x00000010u; // 80373930
  c->r[0]=R32(c->r[25]+0x0000002Cu); // 80373934
  c->r[4]=c->r[0]+c->r[28]; // 80373938
  c->lr=0x80373940u; f_8036B8EC(c); // 8037393C
  c->r[28]=c->r[28]+0x00000040u; // 80373940
  c->r[26]=c->r[26]+0x00000001u; // 80373944
L_80373948:;
  cmpu(c,0,c->r[26],c->r[29]); // 80373948
  if (crb(c,0)) { IRQCHK(c); goto L_8037391C; } // 8037394C
  c->r[26]=0u+0x00000000u; // 80373950
  c->r[28]=0u+0x00000000u; // 80373954
  goto L_80373988; // 80373958
L_8037395C:;
  c->r[4]=c->r[26]|c->r[26]; // 8037395C
  c->r[3]=c->r[25]+0x00000020u; // 80373960
  c->lr=0x80373968u; f_8036C604(c); // 80373964
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80373968
  c->f[1]=c->f[31]; // 8037396C
  c->r[3]=c->r[1]+0x0000000Cu; // 80373970
  c->r[0]=R32(c->r[25]+0x00000030u); // 80373974
  c->r[4]=c->r[0]+c->r[28]; // 80373978
  c->lr=0x80373980u; f_8036BCE4(c); // 8037397C
  c->r[28]=c->r[28]+0x00000010u; // 80373980
  c->r[26]=c->r[26]+0x00000001u; // 80373984
L_80373988:;
  cmpu(c,0,c->r[26],c->r[30]); // 80373988
  if (crb(c,0)) { IRQCHK(c); goto L_8037395C; } // 8037398C
  c->r[26]=0u+0x00000000u; // 80373990
  c->r[28]=0u+0x00000000u; // 80373994
  goto L_803739C8; // 80373998
L_8037399C:;
  c->r[4]=c->r[26]|c->r[26]; // 8037399C
  c->r[3]=c->r[25]+0x00000020u; // 803739A0
  c->lr=0x803739A8u; f_8036C730(c); // 803739A4
  W32(c->r[1]+0x00000008u,c->r[3]); // 803739A8
  c->f[1]=c->f[31]; // 803739AC
  c->r[3]=c->r[1]+0x00000008u; // 803739B0
  c->r[0]=R32(c->r[25]+0x00000034u); // 803739B4
  c->r[4]=c->r[0]+c->r[28]; // 803739B8
  c->lr=0x803739C0u; f_8036BE44(c); // 803739BC
  c->r[28]=c->r[28]+0x00000034u; // 803739C0
  c->r[26]=c->r[26]+0x00000001u; // 803739C4
L_803739C8:;
  cmpu(c,0,c->r[26],c->r[31]); // 803739C8
  if (crb(c,0)) { IRQCHK(c); goto L_8037399C; } // 803739CC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803739D0
  c->r[11]=c->r[1]+0x00000040u; // 803739D4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803739D8
  c->lr=0x803739E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803739DC
  c->r[0]=R32(c->r[1]+0x00000054u); // 803739E0
  c->lr=c->r[0]; // 803739E4
  c->r[1]=c->r[1]+0x00000050u; // 803739E8
  return; // 803739EC
}

// fn_803739F0
void f_803739F0(Ctx* __restrict c) {
  trace_call(0x803739F0u);
  c->r[3]=0u+0x803F0000u; // 803739F0
  c->r[0]=R32(c->r[4]+0x00000000u); // 803739F4
  c->r[3]=c->r[3]+0xFFFFE090u; // 803739F8
  cmpu(c,0,c->r[0],c->r[3]); // 803739FC
  if (!crb(c,2)) { goto L_80373A0C; } // 80373A00
  c->r[3]=0u+0x00000001u; // 80373A04
  return; // 80373A08
L_80373A0C:;
  c->r[3]=0u+0x803F0000u; // 80373A0C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80373A10
  c->r[3]=c->r[3]+0xFFFFE080u; // 80373A14
  cmpu(c,0,c->r[0],c->r[3]); // 80373A18
  if (!crb(c,2)) { goto L_80373A28; } // 80373A1C
  c->r[3]=0u+0x00000001u; // 80373A20
  return; // 80373A24
L_80373A28:;
  c->r[3]=0u+0x803F0000u; // 80373A28
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80373A2C
  c->r[0]=c->r[3]-c->r[0]; // 80373A30
  c->r[0]=cntlz(c->r[0]); // 80373A34
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80373A38
  return; // 80373A3C
}

// fn_80373A40
void f_80373A40(Ctx* __restrict c) {
  trace_call(0x80373A40u);
  c->r[3]=0u+0x803F0000u; // 80373A40
  c->r[0]=R32(c->r[4]+0x00000000u); // 80373A44
  c->r[3]=c->r[3]+0xFFFFE080u; // 80373A48
  cmpu(c,0,c->r[0],c->r[3]); // 80373A4C
  if (!crb(c,2)) { goto L_80373A5C; } // 80373A50
  c->r[3]=0u+0x00000001u; // 80373A54
  return; // 80373A58
L_80373A5C:;
  c->r[3]=0u+0x803F0000u; // 80373A5C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80373A60
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80373A64
  c->r[0]=c->r[3]-c->r[0]; // 80373A68
  c->r[0]=cntlz(c->r[0]); // 80373A6C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80373A70
  return; // 80373A74
}

// fn_80373A78
void f_80373A78(Ctx* __restrict c) {
  trace_call(0x80373A78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373A78
  c->r[0]=c->lr; // 80373A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80373A80
  c->r[12]=R32(c->r[3]+0x00000000u); // 80373A84
  c->r[12]=R32(c->r[12]+0x00000014u); // 80373A88
  c->ctr=c->r[12]; // 80373A8C
  if (true) { c->lr=0x80373A94u; dispatch(c,c->ctr); } // 80373A90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373A94
  c->r[3]=c->r[3]+0x00000004u; // 80373A98
  c->lr=c->r[0]; // 80373A9C
  c->r[1]=c->r[1]+0x00000010u; // 80373AA0
  return; // 80373AA4
}

// fn_80373AA8
void f_80373AA8(Ctx* __restrict c) {
  trace_call(0x80373AA8u);
  c->r[3]=0u+0x803F0000u; // 80373AA8
  c->r[3]=c->r[3]+0xFFFFE090u; // 80373AAC
  return; // 80373AB0
}

// fn_80373AB4
void f_80373AB4(Ctx* __restrict c) {
  trace_call(0x80373AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373AB4
  c->r[0]=c->lr; // 80373AB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80373ABC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80373AC0
  c->r[12]=R32(c->r[12]+0x00000014u); // 80373AC4
  c->ctr=c->r[12]; // 80373AC8
  if (true) { c->lr=0x80373AD0u; dispatch(c,c->ctr); } // 80373ACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373AD0
  c->r[3]=c->r[3]+0x00000004u; // 80373AD4
  c->lr=c->r[0]; // 80373AD8
  c->r[1]=c->r[1]+0x00000010u; // 80373ADC
  return; // 80373AE0
}

// fn_80373AE4
void f_80373AE4(Ctx* __restrict c) {
  trace_call(0x80373AE4u);
  c->r[3]=0u+0x803F0000u; // 80373AE4
  c->r[3]=c->r[3]+0xFFFFE080u; // 80373AE8
  return; // 80373AEC
}

// __dt__Q34nw4r3g3d6G3dObjFv
void f_80373AF0(Ctx* __restrict c) {
  trace_call(0x80373AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373AF0
  c->r[0]=c->lr; // 80373AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80373AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80373AFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80373B00
  c->r[31]=c->r[3]|c->r[3]; // 80373B04
  if (crb(c,2)) { goto L_80373B24; } // 80373B08
  c->r[5]=0u+0x80430000u; // 80373B0C
  c->r[4]=c->r[31]|c->r[31]; // 80373B10
  c->r[5]=c->r[5]+0x00004EB8u; // 80373B14
  W32(c->r[3]+0x00000000u,c->r[5]); // 80373B18
  c->r[3]=R32(c->r[3]+0x00000008u); // 80373B1C
  c->lr=0x80373B24u; f_802A704C(c); // 80373B20
L_80373B24:;
  c->r[3]=c->r[31]|c->r[31]; // 80373B24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80373B28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373B2C
  c->lr=c->r[0]; // 80373B30
  c->r[1]=c->r[1]+0x00000010u; // 80373B34
  return; // 80373B38
}

// Destroy__Q34nw4r3g3d6G3dObjFv
void f_80373B3C(Ctx* __restrict c) {
  trace_call(0x80373B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373B3C
  c->r[0]=c->lr; // 80373B40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80373B44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80373B48
  c->r[31]=c->r[3]|c->r[3]; // 80373B4C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80373B50
  cmps(c,0,(int32_t)c->r[0],0); // 80373B54
  if (crb(c,2)) { goto L_80373B80; } // 80373B58
  c->r[3]=c->r[0]|c->r[0]; // 80373B5C
  c->r[4]=0u+0x00010000u; // 80373B60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80373B64
  c->r[6]=c->r[31]|c->r[31]; // 80373B68
  c->r[4]=c->r[4]+0x00000001u; // 80373B6C
  c->r[5]=0u+0x00000000u; // 80373B70
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80373B74
  c->ctr=c->r[12]; // 80373B78
  if (true) { c->lr=0x80373B80u; dispatch(c,c->ctr); } // 80373B7C
L_80373B80:;
  cmps(c,0,(int32_t)c->r[31],0); // 80373B80
  if (crb(c,2)) { goto L_80373BA0; } // 80373B84
  c->r[12]=R32(c->r[31]+0x00000000u); // 80373B88
  c->r[3]=c->r[31]|c->r[31]; // 80373B8C
  c->r[4]=0u+0x00000001u; // 80373B90
  c->r[12]=R32(c->r[12]+0x00000010u); // 80373B94
  c->ctr=c->r[12]; // 80373B98
  if (true) { c->lr=0x80373BA0u; dispatch(c,c->ctr); } // 80373B9C
L_80373BA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80373BA4
  c->lr=c->r[0]; // 80373BA8
  c->r[1]=c->r[1]+0x00000010u; // 80373BAC
  return; // 80373BB0
}

// fn_80373BB4
void f_80373BB4(Ctx* __restrict c) {
  trace_call(0x80373BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373BB4
  c->r[0]=c->lr; // 80373BB8
  c->r[6]=c->r[3]|c->r[3]; // 80373BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80373BC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80373BC4
  c->r[31]=R32(c->r[3]+0x00000004u); // 80373BC8
  cmps(c,0,(int32_t)c->r[31],0); // 80373BCC
  if (crb(c,2)) { goto L_80373BF4; } // 80373BD0
  c->r[12]=R32(c->r[31]+0x00000000u); // 80373BD4
  c->r[4]=0u+0x00010000u; // 80373BD8
  c->r[3]=c->r[31]|c->r[31]; // 80373BDC
  c->r[5]=0u+0x00000000u; // 80373BE0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80373BE4
  c->r[4]=c->r[4]+0x00000001u; // 80373BE8
  c->ctr=c->r[12]; // 80373BEC
  if (true) { c->lr=0x80373BF4u; dispatch(c,c->ctr); } // 80373BF0
L_80373BF4:;
  c->r[3]=c->r[31]|c->r[31]; // 80373BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80373BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373BFC
  c->lr=c->r[0]; // 80373C00
  c->r[1]=c->r[1]+0x00000010u; // 80373C04
  return; // 80373C08
}

// fn_80373C0C
void f_80373C0C(Ctx* __restrict c) {
  trace_call(0x80373C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373C0C
  c->r[0]=c->lr; // 80373C10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80373C14
  c->r[12]=R32(c->r[3]+0x00000000u); // 80373C18
  c->r[12]=R32(c->r[12]+0x00000014u); // 80373C1C
  c->ctr=c->r[12]; // 80373C20
  if (true) { c->lr=0x80373C28u; dispatch(c,c->ctr); } // 80373C24
  c->r[0]=R32(c->r[1]+0x00000014u); // 80373C28
  c->r[3]=c->r[3]+0x00000004u; // 80373C2C
  c->lr=c->r[0]; // 80373C30
  c->r[1]=c->r[1]+0x00000010u; // 80373C34
  return; // 80373C38
}

// fn_80373C3C
void f_80373C3C(Ctx* __restrict c) {
  trace_call(0x80373C3Cu);
  c->r[3]=0u+0x803F0000u; // 80373C3C
  c->r[3]=c->r[3]+0xFFFFE0A0u; // 80373C40
  return; // 80373C44
}

// fn_80373C48
void f_80373C48(Ctx* __restrict c) {
  trace_call(0x80373C48u);
  c->f[1]=c->f[3]; // 80373C48
  return; // 80373C4C
}

// fn_80373C50
void f_80373C50(Ctx* __restrict c) {
  trace_call(0x80373C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373C50
  c->r[0]=c->lr; // 80373C54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80373C58
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80373C5C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80373C60
  {uint32_t ea=c->r[2]+0xFFFFEA88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80373C64
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[1]); // 80373C68
  fcmp(c,0,c->f[3],c->f[0]); // 80373C6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373C70
  if (!crb(c,2)) { goto L_80373C8C; } // 80373C74
  c->f[1]=c->f[3]; // 80373C78
  c->f[2]=c->f[31]; // 80373C7C
  c->lr=0x80373C84u; f_8029C49C(c); // 80373C80
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80373C84
  goto L_80373CA8; // 80373C88
L_80373C8C:;
  c->f[2]=c->f[31]; // 80373C8C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[31]); // 80373C90
  c->lr=0x80373C98u; f_8029C49C(c); // 80373C94
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80373C98
  {uint32_t ea=c->r[2]+0xFFFFEA88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80373C9C
  c->f[0]=(c->f[1]>=0.0)?c->f[0]:c->f[31]; // 80373CA0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 80373CA4
L_80373CA8:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80373CA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80373CAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80373CB0
  c->lr=c->r[0]; // 80373CB4
  c->r[1]=c->r[1]+0x00000020u; // 80373CB8
  return; // 80373CBC
}

// SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
void f_80373CC0(Ctx* __restrict c) {
  trace_call(0x80373CC0u);
  cmps(c,0,(int32_t)c->r[5],0); // 80373CC0
  if (crb(c,2)) { goto L_80373CD8; } // 80373CC4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80373CC8
  c->r[0]=c->r[0]|c->r[4]; // 80373CCC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80373CD0
  return; // 80373CD4
L_80373CD8:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80373CD8
  c->r[0]=c->r[0]&~c->r[4]; // 80373CDC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80373CE0
  return; // 80373CE4
}

// TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
void f_80373CE8(Ctx* __restrict c) {
  trace_call(0x80373CE8u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80373CE8
  c->r[3]=c->r[0]&c->r[4]; // 80373CEC
  c->r[0]=0u-c->r[3]; // 80373CF0
  c->r[0]=c->r[0]|c->r[3]; // 80373CF4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80373CF8
  return; // 80373CFC
}

// GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
void f_80373D00(Ctx* __restrict c) {
  trace_call(0x80373D00u);
  c->r[10]=0u+0xCC010000u; // 80373D00
  c->r[11]=0u+0x00000061u; // 80373D04
  c->r[9]=0u+0xFE080000u; // 80373D08
  c->r[8]=c->r[2]+0xFFFFEA90u; // 80373D0C
  c->r[7]=R8(c->r[8]+c->r[7]); // 80373D10
  c->r[9]=c->r[9]+0xFFFFFC3Fu; // 80373D14
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 80373D18
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80373D1C
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 80373D20
  c->r[8]=rotl(c->r[6],16)&0x00FF0000u; // 80373D24
  c->r[6]=rotl(c->r[7],14)&0xFFFFC000u; // 80373D28
  W32(c->r[10]+0xFFFF8000u,c->r[9]); // 80373D2C
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 80373D30
  c->r[0]=c->r[3]|c->r[0]; // 80373D34
  c->r[0]=c->r[5]|c->r[0]; // 80373D38
  c->r[6]=c->r[8]|c->r[6]; // 80373D3C
  c->r[0]=c->r[6]|c->r[0]; // 80373D40
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 80373D44
  c->r[7]=0u+0x00000010u; // 80373D48
  c->r[6]=0u+0x00000000u; // 80373D4C
  W32(c->r[10]+0xFFFF8000u,c->r[0]); // 80373D50
  c->r[5]=0u+0x00001009u; // 80373D54
  c->r[0]=0u+0x0000103Fu; // 80373D58
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 80373D5C
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 80373D60
  W16(c->r[10]+0xFFFF8000u,c->r[5]); // 80373D64
  W32(c->r[10]+0xFFFF8000u,c->r[4]); // 80373D68
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 80373D6C
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 80373D70
  W16(c->r[10]+0xFFFF8000u,c->r[0]); // 80373D74
  W32(c->r[10]+0xFFFF8000u,c->r[3]); // 80373D78
  return; // 80373D7C
}

// GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
void f_80373D80(Ctx* __restrict c) {
  trace_call(0x80373D80u);
  c->r[5]=0u+0xCC010000u; // 80373D80
  c->r[6]=0u+0x00000061u; // 80373D84
  c->r[4]=0u+0xFE010000u; // 80373D88
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80373D8C
  c->r[0]=c->r[4]+0xFFFFC000u; // 80373D90
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80373D94
  c->r[4]=c->r[2]+0xFFFFEA90u; // 80373D98
  c->r[0]=R8(c->r[4]+c->r[3]); // 80373D9C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80373DA0
  c->r[0]=rotl(c->r[0],14)&0xFFFFC000u; // 80373DA4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80373DA8
  return; // 80373DAC
}

// GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
void f_80373DB0(Ctx* __restrict c) {
  trace_call(0x80373DB0u);
  c->r[11]=0u+0xCC010000u; // 80373DB0
  c->r[12]=0u+0x00000061u; // 80373DB4
  c->r[10]=0u+0xFE040000u; // 80373DB8
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 80373DBC
  c->r[0]=c->r[10]+0xFFFFFFFFu; // 80373DC0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80373DC4
  c->r[10]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80373DC8
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 80373DCC
  c->r[3]=rotl(c->r[5],16)&0x00FF0000u; // 80373DD0
  c->r[5]=rotl(c->r[6],17)&0x01FE0000u; // 80373DD4
  c->r[3]=c->r[4]|c->r[3]; // 80373DD8
  c->r[0]=c->r[10]+0x00000030u; // 80373DDC
  c->r[3]=c->r[5]|c->r[3]; // 80373DE0
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 80373DE4
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80373DE8
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 80373DEC
  c->r[0]=c->r[3]|c->r[0]; // 80373DF0
  c->r[3]=rotl(c->r[8],16)&0x00FF0000u; // 80373DF4
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 80373DF8
  c->r[0]=c->r[10]+0x00000031u; // 80373DFC
  c->r[5]=rotl(c->r[9],17)&0x01FE0000u; // 80373E00
  c->r[3]=c->r[4]|c->r[3]; // 80373E04
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 80373E08
  c->r[3]=c->r[5]|c->r[3]; // 80373E0C
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80373E10
  c->r[0]=c->r[3]|c->r[0]; // 80373E14
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 80373E18
  return; // 80373E1C
}

// GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
void f_80373E20(Ctx* __restrict c) {
  trace_call(0x80373E20u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80373E20
  c->r[5]=0u+0x00000000u; // 80373E24
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80373E28
  c->f[5]=std::fabs(c->f[2]); // 80373E2C
  {uint32_t ea=c->r[2]+0xFFFFEA94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80373E30
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 80373E34
  c->f[9]=std::fabs(c->f[3]); // 80373E38
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80373E3C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 80373E40
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 80373E44
  fcmp(c,0,c->f[5],c->f[0]); // 80373E48
  c->f[10]=std::fabs(c->f[6]); // 80373E4C
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80373E50
  c->f[11]=std::fabs(c->f[4]); // 80373E54
  c->f[12]=std::fabs(c->f[7]); // 80373E58
  c->f[13]=std::fabs(c->f[8]); // 80373E5C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373E60
  if (crb(c,2)) { goto L_80373EA4; } // 80373E64
  fcmp(c,0,c->f[9],c->f[0]); // 80373E68
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373E6C
  if (crb(c,2)) { goto L_80373EA4; } // 80373E70
  fcmp(c,0,c->f[10],c->f[0]); // 80373E74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373E78
  if (crb(c,2)) { goto L_80373EA4; } // 80373E7C
  fcmp(c,0,c->f[11],c->f[0]); // 80373E80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373E84
  if (crb(c,2)) { goto L_80373EA4; } // 80373E88
  fcmp(c,0,c->f[12],c->f[0]); // 80373E8C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373E90
  if (crb(c,2)) { goto L_80373EA4; } // 80373E94
  fcmp(c,0,c->f[13],c->f[0]); // 80373E98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373E9C
  if (!crb(c,2)) { goto L_80373F38; } // 80373EA0
L_80373EA4:;
  {uint32_t ea=c->r[2]+0xFFFFEA98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80373EA4
  {uint32_t ea=c->r[2]+0xFFFFEA94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80373EA8
L_80373EAC:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80373EAC
  cmps(c,0,(int32_t)c->r[0],46); // 80373EB0
  if (!crb(c,0)) { goto L_80373FE0; } // 80373EB4
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 80373EB8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 80373EBC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 80373EC0
  fcmp(c,0,c->f[5],c->f[0]); // 80373EC4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 80373EC8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 80373ECC
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 80373ED0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 80373ED4
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 80373ED8
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 80373EDC
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 80373EE0
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 80373EE4
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 80373EE8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373EEC
  c->r[5]=c->r[5]+0x00000001u; // 80373EF0
  if (crb(c,2)) { IRQCHK(c); goto L_80373EAC; } // 80373EF4
  fcmp(c,0,c->f[9],c->f[0]); // 80373EF8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373EFC
  if (crb(c,2)) { IRQCHK(c); goto L_80373EAC; } // 80373F00
  fcmp(c,0,c->f[10],c->f[0]); // 80373F04
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373F08
  if (crb(c,2)) { IRQCHK(c); goto L_80373EAC; } // 80373F0C
  fcmp(c,0,c->f[11],c->f[0]); // 80373F10
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373F14
  if (crb(c,2)) { IRQCHK(c); goto L_80373EAC; } // 80373F18
  fcmp(c,0,c->f[12],c->f[0]); // 80373F1C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373F20
  if (crb(c,2)) { IRQCHK(c); goto L_80373EAC; } // 80373F24
  fcmp(c,0,c->f[13],c->f[0]); // 80373F28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80373F2C
  if (crb(c,2)) { IRQCHK(c); goto L_80373EAC; } // 80373F30
  goto L_80373FE0; // 80373F34
L_80373F38:;
  {uint32_t ea=c->r[2]+0xFFFFEA98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80373F38
  fcmp(c,0,c->f[5],c->f[1]); // 80373F3C
  if (!crb(c,0)) { goto L_80373FE0; } // 80373F40
  fcmp(c,0,c->f[9],c->f[1]); // 80373F44
  if (!crb(c,0)) { goto L_80373FE0; } // 80373F48
  fcmp(c,0,c->f[10],c->f[1]); // 80373F4C
  if (!crb(c,0)) { goto L_80373FE0; } // 80373F50
  fcmp(c,0,c->f[11],c->f[1]); // 80373F54
  if (!crb(c,0)) { goto L_80373FE0; } // 80373F58
  fcmp(c,0,c->f[12],c->f[1]); // 80373F5C
  if (!crb(c,0)) { goto L_80373FE0; } // 80373F60
  fcmp(c,0,c->f[13],c->f[1]); // 80373F64
  if (!crb(c,0)) { goto L_80373FE0; } // 80373F68
  {uint32_t ea=c->r[2]+0xFFFFEA9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80373F6C
L_80373F70:;
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 80373F70
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80373F74
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 80373F78
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 80373F7C
  fcmp(c,0,c->f[5],c->f[1]); // 80373F80
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 80373F84
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 80373F88
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 80373F8C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 80373F90
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 80373F94
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 80373F98
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 80373F9C
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 80373FA0
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 80373FA4
  if (!crb(c,0)) { goto L_80373FE0; } // 80373FA8
  fcmp(c,0,c->f[9],c->f[1]); // 80373FAC
  if (!crb(c,0)) { goto L_80373FE0; } // 80373FB0
  fcmp(c,0,c->f[10],c->f[1]); // 80373FB4
  if (!crb(c,0)) { goto L_80373FE0; } // 80373FB8
  fcmp(c,0,c->f[11],c->f[1]); // 80373FBC
  if (!crb(c,0)) { goto L_80373FE0; } // 80373FC0
  fcmp(c,0,c->f[12],c->f[1]); // 80373FC4
  if (!crb(c,0)) { goto L_80373FE0; } // 80373FC8
  fcmp(c,0,c->f[13],c->f[1]); // 80373FCC
  if (!crb(c,0)) { goto L_80373FE0; } // 80373FD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80373FD4
  cmps(c,0,(int32_t)c->r[0],-17); // 80373FD8
  if (crb(c,1)) { IRQCHK(c); goto L_80373F70; } // 80373FDC
L_80373FE0:;
  {uint32_t ea=c->r[2]+0xFFFFEAA0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80373FE0
  c->r[9]=c->r[5]+0x00000011u; // 80373FE4
  c->r[0]=c->r[3]+0x00000006u; // 80373FE8
  c->r[7]=0u+0xCC010000u; // 80373FEC
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 80373FF0
  c->r[5]=rotl(c->r[9],22)&0x00C00000u; // 80373FF4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 80373FF8
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80373FFC
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[3]); // 80374000
  c->r[8]=0u+0x00000061u; // 80374004
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80374008
  c->r[0]=c->r[3]+0x00000007u; // 8037400C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80374010
  c->r[6]=rotl(c->r[9],20)&0x00C00000u; // 80374014
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[7]); // 80374018
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 8037401C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 80374020
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80374024
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80374028
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 8037402C
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 80374030
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[8]); // 80374034
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 80374038
  c->r[0]=R32(c->r[1]+0x00000014u); // 8037403C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80374040
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80374044
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 80374048
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 8037404C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80374050
  c->r[0]=c->r[5]|c->r[0]; // 80374054
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80374058
  c->r[0]=c->r[3]+0x00000008u; // 8037405C
  c->r[4]=rotl(c->r[9],18)&0x00C00000u; // 80374060
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 80374064
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 80374068
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 8037406C
  c->r[3]=R32(c->r[1]+0x00000024u); // 80374070
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80374074
  c->r[5]=rotl(c->r[3],11)&0x003FF800u; // 80374078
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8037407C
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 80374080
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 80374084
  c->r[5]=c->r[6]|c->r[5]; // 80374088
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 8037408C
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 80374090
  c->r[0]=R32(c->r[1]+0x00000034u); // 80374094
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 80374098
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 8037409C
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 803740A0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 803740A4
  c->r[0]=c->r[4]|c->r[0]; // 803740A8
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 803740AC
  c->r[1]=c->r[1]+0x00000040u; // 803740B0
  return; // 803740B4
}

// GDResetCurrentMtx__Q34nw4r3g3d4fifoFv
void f_803740B8(Ctx* __restrict c) {
  trace_call(0x803740B8u);
  c->r[8]=0u+0xCC010000u; // 803740B8
  c->r[9]=0u+0x00000008u; // 803740BC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 803740C0
  c->r[0]=0u+0x00000030u; // 803740C4
  c->r[4]=0u+0x3CF40000u; // 803740C8
  c->r[3]=0u+0x00F40000u; // 803740CC
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 803740D0
  c->r[7]=c->r[4]+0xFFFFCF00u; // 803740D4
  c->r[5]=c->r[3]+0xFFFFCF3Cu; // 803740D8
  c->r[6]=0u+0x00000040u; // 803740DC
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 803740E0
  c->r[4]=0u+0x00000010u; // 803740E4
  c->r[3]=0u+0x00000001u; // 803740E8
  c->r[0]=0u+0x00001018u; // 803740EC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 803740F0
  W8(c->r[8]+0xFFFF8000u,c->r[6]); // 803740F4
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 803740F8
  W8(c->r[8]+0xFFFF8000u,c->r[4]); // 803740FC
  W16(c->r[8]+0xFFFF8000u,c->r[3]); // 80374100
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 80374104
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 80374108
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 8037410C
  return; // 80374110
}

// GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl
void f_80374114(Ctx* __restrict c) {
  trace_call(0x80374114u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 80374114
  c->r[5]=0u+0xCC010000u; // 80374118
  c->r[0]=0u+0x00000010u; // 8037411C
  c->r[6]=R32(c->r[3]+0x00000004u); // 80374120
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80374124
  c->r[4]=0u+0x00000001u; // 80374128
  c->r[8]=R32(c->r[3]+0x00000008u); // 8037412C
  c->r[7]=rotl(c->r[7],6)&0xFFFFFFC0u; // 80374130
  c->r[6]=rotl(c->r[6],12)&0xFFFFF000u; // 80374134
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 80374138
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 8037413C
  c->r[6]=c->r[7]|c->r[6]; // 80374140
  c->r[0]=0u+0x00001018u; // 80374144
  c->r[8]=rotl(c->r[8],18)&0xFFFC0000u; // 80374148
  c->r[10]=rotl(c->r[9],24)&0xFF000000u; // 8037414C
  c->r[4]=R32(c->r[3]+0x00000014u); // 80374150
  c->r[9]=c->r[8]|c->r[6]; // 80374154
  c->r[7]=R32(c->r[3]+0x00000018u); // 80374158
  c->r[6]=R32(c->r[3]+0x00000010u); // 8037415C
  c->r[9]=c->r[10]|c->r[9]; // 80374160
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 80374164
  c->r[3]=rotl(c->r[4],6)&0xFFFFFFC0u; // 80374168
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 8037416C
  c->r[0]=c->r[6]|c->r[3]; // 80374170
  c->r[4]=rotl(c->r[7],12)&0xFFFFF000u; // 80374174
  c->r[3]=rotl(c->r[8],18)&0xFFFC0000u; // 80374178
  c->r[0]=c->r[4]|c->r[0]; // 8037417C
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 80374180
  c->r[0]=c->r[3]|c->r[0]; // 80374184
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 80374188
  return; // 8037418C
}

// GDLoadTexMtxImm3x3__Q34nw4r3g3d4fifoFRCQ34nw4r4math5MTX33Ul
void f_80374190(Ctx* __restrict c) {
  trace_call(0x80374190u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80374190
  c->r[0]=c->lr; // 80374194
  {uint32_t ea=c->r[2]+0xFFFFEAA4u; c->f[6]=c->ps1[6]=RF32(ea);} // 80374198
  c->r[5]=0u+0x00000000u; // 8037419C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803741A0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 803741A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 803741A8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 803741AC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803741B0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 803741B4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 803741B8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 803741BC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803741C0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803741C4
  c->r[3]=c->r[1]+0x00000008u; // 803741C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 803741CC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 803741D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 803741D4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 803741D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 803741DC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 803741E0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 803741E4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 803741E8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 803741EC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 803741F0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 803741F4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 803741F8
  c->lr=0x80374200u; f_80288954(c); // 803741FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80374200
  c->lr=c->r[0]; // 80374204
  c->r[1]=c->r[1]+0x00000040u; // 80374208
  return; // 8037420C
}

// Copy32ByteBlocks__Q34nw4r3g3d6detailFPvPCvUl
void f_80374210(Ctx* __restrict c) {
  trace_call(0x80374210u);
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[5]); // 80374210
  if (crb(c,2)) return; // 80374214
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 80374218
  c->ctr=c->r[0]; // 8037421C
  if (crb(c,2)) { goto L_803742B8; } // 80374220
L_80374224:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 80374224
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 80374228
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 8037422C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 80374230
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 80374234
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 80374238
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 8037423C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=RF64(ea);} // 80374240
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 80374244
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=RF64(ea);} // 80374248
  {uint32_t ea=c->r[3]+0x00000020u; WF64(ea,c->f[0]);} // 8037424C
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=RF64(ea);} // 80374250
  {uint32_t ea=c->r[3]+0x00000028u; WF64(ea,c->f[1]);} // 80374254
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=RF64(ea);} // 80374258
  {uint32_t ea=c->r[3]+0x00000030u; WF64(ea,c->f[0]);} // 8037425C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=RF64(ea);} // 80374260
  {uint32_t ea=c->r[3]+0x00000038u; WF64(ea,c->f[1]);} // 80374264
  {uint32_t ea=c->r[4]+0x00000048u; c->f[1]=RF64(ea);} // 80374268
  {uint32_t ea=c->r[3]+0x00000040u; WF64(ea,c->f[0]);} // 8037426C
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=RF64(ea);} // 80374270
  {uint32_t ea=c->r[3]+0x00000048u; WF64(ea,c->f[1]);} // 80374274
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=RF64(ea);} // 80374278
  {uint32_t ea=c->r[3]+0x00000050u; WF64(ea,c->f[0]);} // 8037427C
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=RF64(ea);} // 80374280
  {uint32_t ea=c->r[3]+0x00000058u; WF64(ea,c->f[1]);} // 80374284
  {uint32_t ea=c->r[4]+0x00000068u; c->f[1]=RF64(ea);} // 80374288
  {uint32_t ea=c->r[3]+0x00000060u; WF64(ea,c->f[0]);} // 8037428C
  {uint32_t ea=c->r[4]+0x00000070u; c->f[0]=RF64(ea);} // 80374290
  {uint32_t ea=c->r[3]+0x00000068u; WF64(ea,c->f[1]);} // 80374294
  {uint32_t ea=c->r[4]+0x00000078u; c->f[1]=RF64(ea);} // 80374298
  c->r[4]=c->r[4]+0x00000080u; // 8037429C
  {uint32_t ea=c->r[3]+0x00000070u; WF64(ea,c->f[0]);} // 803742A0
  {uint32_t ea=c->r[3]+0x00000078u; WF64(ea,c->f[1]);} // 803742A4
  c->r[3]=c->r[3]+0x00000080u; // 803742A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80374224; } // 803742AC
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 803742B0
  if (crb(c,2)) return; // 803742B4
L_803742B8:;
  c->ctr=c->r[5]; // 803742B8
L_803742BC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 803742BC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 803742C0
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 803742C4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 803742C8
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 803742CC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 803742D0
  c->r[4]=c->r[4]+0x00000020u; // 803742D4
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 803742D8
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 803742DC
  c->r[3]=c->r[3]+0x00000020u; // 803742E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803742BC; } // 803742E4
  return; // 803742E8
}

// ZeroMemory32ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_803742EC(Ctx* __restrict c) {
  trace_call(0x803742ECu);
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 803742EC
  {uint32_t ea=c->r[2]+0xFFFFEAA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803742F0
  if (crb(c,2)) return; // 803742F4
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 803742F8
  c->ctr=c->r[0]; // 803742FC
  if (crb(c,2)) { goto L_80374394; } // 80374300
L_80374304:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80374304
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80374308
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 8037430C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80374310
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80374314
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 80374318
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 8037431C
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 80374320
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 80374324
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 80374328
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 8037432C
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 80374330
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 80374334
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 80374338
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 8037433C
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 80374340
  {uint32_t ea=c->r[3]+0x00000080u; psq_store(c,0,ea,0,0);} // 80374344
  {uint32_t ea=c->r[3]+0x00000088u; psq_store(c,0,ea,0,0);} // 80374348
  {uint32_t ea=c->r[3]+0x00000090u; psq_store(c,0,ea,0,0);} // 8037434C
  {uint32_t ea=c->r[3]+0x00000098u; psq_store(c,0,ea,0,0);} // 80374350
  {uint32_t ea=c->r[3]+0x000000A0u; psq_store(c,0,ea,0,0);} // 80374354
  {uint32_t ea=c->r[3]+0x000000A8u; psq_store(c,0,ea,0,0);} // 80374358
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,0,ea,0,0);} // 8037435C
  {uint32_t ea=c->r[3]+0x000000B8u; psq_store(c,0,ea,0,0);} // 80374360
  {uint32_t ea=c->r[3]+0x000000C0u; psq_store(c,0,ea,0,0);} // 80374364
  {uint32_t ea=c->r[3]+0x000000C8u; psq_store(c,0,ea,0,0);} // 80374368
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,0,ea,0,0);} // 8037436C
  {uint32_t ea=c->r[3]+0x000000D8u; psq_store(c,0,ea,0,0);} // 80374370
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 80374374
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 80374378
  {uint32_t ea=c->r[3]+0x000000F0u; psq_store(c,0,ea,0,0);} // 8037437C
  {uint32_t ea=c->r[3]+0x000000F8u; psq_store(c,0,ea,0,0);} // 80374380
  c->r[3]=c->r[3]+0x00000100u; // 80374384
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80374304; } // 80374388
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 8037438C
  if (crb(c,2)) return; // 80374390
L_80374394:;
  c->ctr=c->r[4]; // 80374394
L_80374398:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80374398
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 8037439C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 803743A0
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 803743A4
  c->r[3]=c->r[3]+0x00000020u; // 803743A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80374398; } // 803743AC
  return; // 803743B0
}

// EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_803743B4(Ctx* __restrict c) {
  trace_call(0x803743B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803743B4
  c->r[0]=c->lr; // 803743B8
  cmps(c,0,(int32_t)c->r[3],0); // 803743BC
  W32(c->r[1]+0x00000064u,c->r[0]); // 803743C0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 803743C4
  c->r[31]=c->r[3]|c->r[3]; // 803743C8
  W32(c->r[1]+0x00000058u,c->r[30]); // 803743CC
  W32(c->r[1]+0x00000054u,c->r[29]); // 803743D0
  if (crb(c,2)) { goto L_8037477C; } // 803743D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 803743D8
  cmps(c,1,(int32_t)c->r[0],0); // 803743DC
  if (crb(c,4)) { goto L_80374490; } // 803743E0
  cmps(c,0,(int32_t)c->r[0],32); // 803743E4
  if (!crb(c,0)) { goto L_80374490; } // 803743E8
  if (!crb(c,0)) { goto L_8037440C; } // 803743EC
  if (crb(c,4)) { goto L_8037440C; } // 803743F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 803743F4
  c->r[3]=0u+0x806A0000u; // 803743F8
  c->r[3]=c->r[3]+0x00003AC0u; // 803743FC
  c->r[3]=c->r[3]+c->r[0]; // 80374400
  c->r[29]=c->r[3]+0x00000034u; // 80374404
  goto L_80374410; // 80374408
L_8037440C:;
  c->r[29]=0u+0x00000000u; // 8037440C
L_80374410:;
  c->r[30]=0u+0x806A0000u; // 80374410
  c->r[0]=R16(c->r[30]+0x00003AC0u); // 80374414
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80374418
  if (!crb(c,2)) { goto L_80374448; } // 8037441C
  c->r[3]=c->r[30]+0x00003AC0u; // 80374420
  c->r[0]=R16(c->r[3]+0x00000002u); // 80374424
  c->r[4]=c->r[3]+0x00000004u; // 80374428
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8037442C
  c->r[3]=c->r[3]+c->r[0]; // 80374430
  c->r[3]=c->r[3]+0x00000034u; // 80374434
  c->lr=0x8037443Cu; f_80264994(c); // 80374438
  c->r[0]=R16(c->r[30]+0x00003AC0u); // 8037443C
  c->r[0]=c->r[0]|0x00000001u; // 80374440
  W16(c->r[30]+0x00003AC0u,c->r[0]); // 80374444
L_80374448:;
  c->r[30]=0u+0x806A0000u; // 80374448
  c->r[3]=c->r[29]|c->r[29]; // 8037444C
  c->r[30]=c->r[30]+0x00003AC0u; // 80374450
  c->r[5]=c->r[31]|c->r[31]; // 80374454
  c->r[4]=c->r[30]+0x00000004u; // 80374458
  c->lr=0x80374460u; f_802646E0(c); // 8037445C
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374460
  c->r[4]=c->r[31]|c->r[31]; // 80374464
  c->r[5]=c->r[31]|c->r[31]; // 80374468
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8037446C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80374470
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80374474
  c->r[0]=R16(c->r[30]+0x00000002u); // 80374478
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8037447C
  c->r[3]=c->r[30]+c->r[0]; // 80374480
  c->r[3]=c->r[3]+0x00001434u; // 80374484
  c->lr=0x8037448Cu; f_802646E0(c); // 80374488
  goto L_8037477C; // 8037448C
L_80374490:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80374490
  cmps(c,1,(int32_t)c->r[0],0); // 80374494
  if (crb(c,4)) { goto L_8037475C; } // 80374498
  cmps(c,0,(int32_t)c->r[0],128); // 8037449C
  if (!crb(c,0)) { goto L_8037475C; } // 803744A0
  if (crb(c,4)) { goto L_803744C4; } // 803744A4
  if (!crb(c,0)) { goto L_803744C4; } // 803744A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 803744AC
  c->r[3]=0u+0x806A0000u; // 803744B0
  c->r[3]=c->r[3]+0x00001094u; // 803744B4
  c->r[3]=c->r[3]+c->r[0]; // 803744B8
  c->r[3]=c->r[3]+0x0000002Cu; // 803744BC
  goto L_803744C8; // 803744C0
L_803744C4:;
  c->r[3]=0u+0x00000000u; // 803744C4
L_803744C8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803744C8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803744CC
  if (crb(c,2)) { goto L_8037475C; } // 803744D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 803744D4
  if (crb(c,0)) { goto L_803744FC; } // 803744D8
  cmps(c,0,(int32_t)c->r[0],128); // 803744DC
  if (!crb(c,0)) { goto L_803744FC; } // 803744E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 803744E4
  c->r[3]=0u+0x806A0000u; // 803744E8
  c->r[3]=c->r[3]+0x00001094u; // 803744EC
  c->r[3]=c->r[3]+c->r[0]; // 803744F0
  c->r[29]=c->r[3]+0x0000002Cu; // 803744F4
  goto L_80374500; // 803744F8
L_803744FC:;
  c->r[29]=0u+0x00000000u; // 803744FC
L_80374500:;
  c->r[3]=c->r[29]|c->r[29]; // 80374500
  c->r[4]=c->r[1]+0x00000038u; // 80374504
  c->lr=0x8037450Cu; f_803888E4(c); // 80374508
  c->r[30]=0u+0x806A0000u; // 8037450C
  c->r[0]=R16(c->r[30]+0x00003AC0u); // 80374510
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80374514
  if (!crb(c,2)) { goto L_80374544; } // 80374518
  c->r[3]=c->r[30]+0x00003AC0u; // 8037451C
  c->r[0]=R16(c->r[3]+0x00000002u); // 80374520
  c->r[4]=c->r[3]+0x00000004u; // 80374524
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374528
  c->r[3]=c->r[3]+c->r[0]; // 8037452C
  c->r[3]=c->r[3]+0x00000034u; // 80374530
  c->lr=0x80374538u; f_80264994(c); // 80374534
  c->r[0]=R16(c->r[30]+0x00003AC0u); // 80374538
  c->r[0]=c->r[0]|0x00000001u; // 8037453C
  W16(c->r[30]+0x00003AC0u,c->r[0]); // 80374540
L_80374544:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 80374544
  c->r[3]=0u+0x806A0000u; // 80374548
  c->r[3]=c->r[3]+0x00003AC0u; // 8037454C
  c->r[4]=0u+0x00000000u; // 80374550
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 80374554
  c->r[30]=c->r[3]+0x00000004u; // 80374558
  if (!crb(c,2)) { goto L_8037456C; } // 8037455C
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80374560
  if (!crb(c,2)) { goto L_8037456C; } // 80374564
  c->r[4]=0u+0x00000001u; // 80374568
L_8037456C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8037456C
  if (!crb(c,2)) { goto L_8037459C; } // 80374570
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374574
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374578
  fcmp(c,0,c->f[1],c->f[0]); // 8037457C
  if (!crb(c,2)) { goto L_8037461C; } // 80374580
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374584
  fcmp(c,0,c->f[1],c->f[0]); // 80374588
  if (!crb(c,2)) { goto L_8037461C; } // 8037458C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374590
  fcmp(c,0,c->f[1],c->f[0]); // 80374594
  if (!crb(c,2)) { goto L_8037461C; } // 80374598
L_8037459C:;
  c->r[3]=c->r[29]|c->r[29]; // 8037459C
  c->r[4]=c->r[1]+0x00000038u; // 803745A0
  c->lr=0x803745A8u; f_80388874(c); // 803745A4
  c->r[3]=c->r[1]+0x00000038u; // 803745A8
  c->r[4]=c->r[30]|c->r[30]; // 803745AC
  c->r[5]=c->r[3]|c->r[3]; // 803745B0
  c->lr=0x803745B8u; f_80394B04(c); // 803745B4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803745B8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803745BC
  c->f[6]=-c->f[0]; // 803745C0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803745C4
  c->f[4]=-c->f[2]; // 803745C8
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803745CC
  c->f[5]=-c->f[1]; // 803745D0
  c->f[3]=c->ps1[3]=S(c->f[6]); // 803745D4
  c->f[1]=c->ps1[1]=S(c->f[4]); // 803745D8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 803745DC
  c->f[2]=c->ps1[2]=S(c->f[5]); // 803745E0
  fcmp(c,0,c->f[0],c->f[3]); // 803745E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 803745E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 803745EC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 803745F0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 803745F4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 803745F8
  if (!crb(c,2)) { goto L_8037462C; } // 803745FC
  fcmp(c,0,c->f[0],c->f[2]); // 80374600
  if (!crb(c,2)) { goto L_8037462C; } // 80374604
  fcmp(c,0,c->f[0],c->f[1]); // 80374608
  if (!crb(c,2)) { goto L_8037462C; } // 8037460C
  {uint32_t ea=c->r[2]+0xFFFFEAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374610
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80374614
  goto L_8037462C; // 80374618
L_8037461C:;
  c->r[3]=c->r[1]+0x00000038u; // 8037461C
  c->r[4]=c->r[30]|c->r[30]; // 80374620
  c->r[5]=c->r[3]|c->r[3]; // 80374624
  c->lr=0x8037462Cu; f_80394B04(c); // 80374628
L_8037462C:;
  c->r[3]=c->r[1]+0x00000038u; // 8037462C
  c->r[4]=c->r[3]|c->r[3]; // 80374630
  c->lr=0x80374638u; f_80265750(c); // 80374634
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374638
  {uint32_t ea=c->r[2]+0xFFFFEABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8037463C
  c->f[1]=std::fabs(c->f[1]); // 80374640
  fcmp(c,0,c->f[1],c->f[0]); // 80374644
  if (!crb(c,0)) { goto L_80374690; } // 80374648
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037464C
  c->f[1]=std::fabs(c->f[1]); // 80374650
  fcmp(c,0,c->f[1],c->f[0]); // 80374654
  if (!crb(c,0)) { goto L_80374690; } // 80374658
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8037465C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374660
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80374664
  fcmp(c,0,c->f[0],c->f[1]); // 80374668
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8037466C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80374670
  if (!crb(c,2)) { goto L_80374684; } // 80374674
  {uint32_t ea=c->r[2]+0xFFFFEAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374678
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8037467C
  goto L_803746A4; // 80374680
L_80374684:;
  {uint32_t ea=c->r[2]+0xFFFFEAC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374684
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80374688
  goto L_803746A4; // 8037468C
L_80374690:;
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374690
  {uint32_t ea=c->r[2]+0xFFFFEAC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374694
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80374698
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8037469C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 803746A0
L_803746A4:;
  c->r[3]=c->r[1]+0x00000038u; // 803746A4
  c->r[4]=c->r[1]+0x0000002Cu; // 803746A8
  c->r[5]=c->r[1]+0x00000020u; // 803746AC
  c->lr=0x803746B4u; f_80265810(c); // 803746B0
  c->r[3]=c->r[1]+0x00000020u; // 803746B4
  c->r[4]=c->r[3]|c->r[3]; // 803746B8
  c->lr=0x803746C0u; f_80265750(c); // 803746BC
  c->r[3]=c->r[1]+0x00000020u; // 803746C0
  c->r[4]=c->r[1]+0x00000038u; // 803746C4
  c->r[5]=c->r[1]+0x00000014u; // 803746C8
  c->lr=0x803746D0u; f_80265810(c); // 803746CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803746D0
  c->r[3]=c->r[31]|c->r[31]; // 803746D4
  c->r[4]=c->r[30]|c->r[30]; // 803746D8
  c->r[5]=c->r[31]|c->r[31]; // 803746DC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 803746E0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803746E4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 803746E8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803746EC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 803746F0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803746F4
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 803746F8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803746FC
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 80374700
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374704
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80374708
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8037470C
  c->f[0]=-c->f[0]; // 80374710
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80374714
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374718
  c->f[0]=-c->f[0]; // 8037471C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80374720
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374724
  c->f[0]=-c->f[0]; // 80374728
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 8037472C
  c->lr=0x80374734u; f_802646E0(c); // 80374730
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374734
  c->r[3]=0u+0x803F0000u; // 80374738
  c->r[4]=c->r[31]|c->r[31]; // 8037473C
  c->r[5]=c->r[31]|c->r[31]; // 80374740
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80374744
  c->r[3]=c->r[3]+0xFFFFE0C0u; // 80374748
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 8037474C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80374750
  c->lr=0x80374758u; f_802646E0(c); // 80374754
  goto L_8037477C; // 80374758
L_8037475C:;
  c->r[3]=0u+0x806A0000u; // 8037475C
  c->r[4]=c->r[31]|c->r[31]; // 80374760
  c->r[3]=c->r[3]+0x00003AC0u; // 80374764
  c->r[0]=R16(c->r[3]+0x00000002u); // 80374768
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 8037476C
  c->r[3]=c->r[3]+c->r[0]; // 80374770
  c->r[3]=c->r[3]+0x00001434u; // 80374774
  c->lr=0x8037477Cu; f_802646AC(c); // 80374778
L_8037477C:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8037477C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80374780
  c->r[30]=R32(c->r[1]+0x00000058u); // 80374784
  c->r[29]=R32(c->r[1]+0x00000054u); // 80374788
  c->lr=c->r[0]; // 8037478C
  c->r[1]=c->r[1]+0x00000060u; // 80374790
  return; // 80374794
}

// ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_80374798(Ctx* __restrict c) {
  trace_call(0x80374798u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80374798
  c->r[0]=c->lr; // 8037479C
  cmps(c,0,(int32_t)c->r[3],0); // 803747A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803747A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803747A8
  c->r[31]=c->r[3]|c->r[3]; // 803747AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803747B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803747B4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803747B8
  c->r[28]=c->r[4]|c->r[4]; // 803747BC
  if (crb(c,2)) { goto L_803748A4; } // 803747C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 803747C4
  cmps(c,1,(int32_t)c->r[0],0); // 803747C8
  if (crb(c,4)) { goto L_80374884; } // 803747CC
  cmps(c,0,(int32_t)c->r[0],32); // 803747D0
  if (!crb(c,0)) { goto L_80374884; } // 803747D4
  if (!crb(c,0)) { goto L_803747F8; } // 803747D8
  if (crb(c,4)) { goto L_803747F8; } // 803747DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 803747E0
  c->r[3]=0u+0x806A0000u; // 803747E4
  c->r[3]=c->r[3]+0x00003AC0u; // 803747E8
  c->r[3]=c->r[3]+c->r[0]; // 803747EC
  c->r[29]=c->r[3]+0x00000034u; // 803747F0
  goto L_803747FC; // 803747F4
L_803747F8:;
  c->r[29]=0u+0x00000000u; // 803747F8
L_803747FC:;
  c->r[30]=0u+0x806A0000u; // 803747FC
  c->r[0]=R16(c->r[30]+0x00003AC0u); // 80374800
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80374804
  if (!crb(c,2)) { goto L_80374834; } // 80374808
  c->r[3]=c->r[30]+0x00003AC0u; // 8037480C
  c->r[0]=R16(c->r[3]+0x00000002u); // 80374810
  c->r[4]=c->r[3]+0x00000004u; // 80374814
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374818
  c->r[3]=c->r[3]+c->r[0]; // 8037481C
  c->r[3]=c->r[3]+0x00000034u; // 80374820
  c->lr=0x80374828u; f_80264994(c); // 80374824
  c->r[0]=R16(c->r[30]+0x00003AC0u); // 80374828
  c->r[0]=c->r[0]|0x00000001u; // 8037482C
  W16(c->r[30]+0x00003AC0u,c->r[0]); // 80374830
L_80374834:;
  c->r[30]=0u+0x806A0000u; // 80374834
  c->r[3]=c->r[29]|c->r[29]; // 80374838
  c->r[30]=c->r[30]+0x00003AC0u; // 8037483C
  c->r[5]=c->r[31]|c->r[31]; // 80374840
  c->r[4]=c->r[30]+0x00000004u; // 80374844
  c->lr=0x8037484Cu; f_802646E0(c); // 80374848
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 8037484C
  cmps(c,0,(int32_t)c->r[0],32); // 80374850
  if (!crb(c,0)) { goto L_80374870; } // 80374854
  cmps(c,0,(int32_t)c->r[0],0); // 80374858
  if (crb(c,0)) { goto L_80374870; } // 8037485C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374860
  c->r[3]=c->r[30]+c->r[0]; // 80374864
  c->r[3]=c->r[3]+0x00000E34u; // 80374868
  goto L_80374874; // 8037486C
L_80374870:;
  c->r[3]=0u+0x00000000u; // 80374870
L_80374874:;
  c->r[4]=c->r[31]|c->r[31]; // 80374874
  c->r[5]=c->r[31]|c->r[31]; // 80374878
  c->lr=0x80374880u; f_802646E0(c); // 8037487C
  goto L_803748A4; // 80374880
L_80374884:;
  c->r[3]=0u+0x806A0000u; // 80374884
  c->r[4]=c->r[31]|c->r[31]; // 80374888
  c->r[3]=c->r[3]+0x00003AC0u; // 8037488C
  c->r[0]=R16(c->r[3]+0x00000002u); // 80374890
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374894
  c->r[3]=c->r[3]+c->r[0]; // 80374898
  c->r[3]=c->r[3]+0x00000E34u; // 8037489C
  c->lr=0x803748A4u; f_802646AC(c); // 803748A0
L_803748A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803748A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803748A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803748AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803748B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803748B4
  c->lr=c->r[0]; // 803748B8
  c->r[1]=c->r[1]+0x00000020u; // 803748BC
  return; // 803748C0
}

// EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_803748C4(Ctx* __restrict c) {
  trace_call(0x803748C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803748C4
  c->r[0]=c->lr; // 803748C8
  cmps(c,0,(int32_t)c->r[3],0); // 803748CC
  W32(c->r[1]+0x00000094u,c->r[0]); // 803748D0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 803748D4
  W32(c->r[1]+0x00000088u,c->r[30]); // 803748D8
  c->r[30]=c->r[5]|c->r[5]; // 803748DC
  W32(c->r[1]+0x00000084u,c->r[29]); // 803748E0
  c->r[29]=c->r[4]|c->r[4]; // 803748E4
  W32(c->r[1]+0x00000080u,c->r[28]); // 803748E8
  c->r[28]=c->r[3]|c->r[3]; // 803748EC
  if (crb(c,2)) { goto L_80374CF0; } // 803748F0
  c->r[31]=0u+0x806A0000u; // 803748F4
  c->r[4]=c->r[31]+0x00003AC0u; // 803748F8
  c->r[0]=R16(c->r[31]+0x00003AC0u); // 803748FC
  c->r[3]=R16(c->r[4]+0x00000002u); // 80374900
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80374904
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 80374908
  c->r[3]=c->r[4]+c->r[0]; // 8037490C
  c->r[3]=c->r[3]+0x00000034u; // 80374910
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80374914
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374918
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8037491C
  c->f[2]=-c->f[2]; // 80374920
  c->f[1]=-c->f[1]; // 80374924
  c->f[0]=-c->f[0]; // 80374928
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 8037492C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 80374930
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80374934
  if (!crb(c,2)) { goto L_80374950; } // 80374938
  c->r[4]=c->r[4]+0x00000004u; // 8037493C
  c->lr=0x80374944u; f_80264994(c); // 80374940
  c->r[0]=R16(c->r[31]+0x00003AC0u); // 80374944
  c->r[0]=c->r[0]|0x00000001u; // 80374948
  W16(c->r[31]+0x00003AC0u,c->r[0]); // 8037494C
L_80374950:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 80374950
  c->r[3]=0u+0x806A0000u; // 80374954
  cmps(c,1,(int32_t)c->r[0],0); // 80374958
  c->r[3]=c->r[3]+0x00003AC0u; // 8037495C
  c->r[31]=c->r[3]+0x00000004u; // 80374960
  if (crb(c,4)) { goto L_80374B80; } // 80374964
  cmps(c,0,(int32_t)c->r[0],128); // 80374968
  if (!crb(c,0)) { goto L_80374B80; } // 8037496C
  if (crb(c,4)) { goto L_80374990; } // 80374970
  if (!crb(c,0)) { goto L_80374990; } // 80374974
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 80374978
  c->r[3]=0u+0x806A0000u; // 8037497C
  c->r[3]=c->r[3]+0x00001094u; // 80374980
  c->r[3]=c->r[3]+c->r[0]; // 80374984
  c->r[3]=c->r[3]+0x0000002Cu; // 80374988
  goto L_80374994; // 8037498C
L_80374990:;
  c->r[3]=0u+0x00000000u; // 80374990
L_80374994:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80374994
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80374998
  if (crb(c,2)) { goto L_80374B80; } // 8037499C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; cr0(c,c->r[0]); // 803749A0
  if (crb(c,0)) { goto L_803749C8; } // 803749A4
  cmps(c,0,(int32_t)c->r[0],128); // 803749A8
  if (!crb(c,0)) { goto L_803749C8; } // 803749AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 803749B0
  c->r[3]=0u+0x806A0000u; // 803749B4
  c->r[3]=c->r[3]+0x00001094u; // 803749B8
  c->r[3]=c->r[3]+c->r[0]; // 803749BC
  c->r[29]=c->r[3]+0x0000002Cu; // 803749C0
  goto L_803749CC; // 803749C4
L_803749C8:;
  c->r[29]=0u+0x00000000u; // 803749C8
L_803749CC:;
  c->r[3]=c->r[29]|c->r[29]; // 803749CC
  c->r[4]=c->r[1]+0x00000044u; // 803749D0
  c->lr=0x803749D8u; f_803888E4(c); // 803749D4
  c->r[4]=R32(c->r[29]+0x00000000u); // 803749D8
  c->r[3]=0u+0x00000000u; // 803749DC
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 803749E0
  if (!crb(c,2)) { goto L_803749F4; } // 803749E4
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 803749E8
  if (!crb(c,2)) { goto L_803749F4; } // 803749EC
  c->r[3]=0u+0x00000001u; // 803749F0
L_803749F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 803749F4
  if (!crb(c,2)) { goto L_80374A24; } // 803749F8
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803749FC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374A00
  fcmp(c,0,c->f[1],c->f[0]); // 80374A04
  if (!crb(c,2)) { goto L_80374AA4; } // 80374A08
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374A0C
  fcmp(c,0,c->f[1],c->f[0]); // 80374A10
  if (!crb(c,2)) { goto L_80374AA4; } // 80374A14
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374A18
  fcmp(c,0,c->f[1],c->f[0]); // 80374A1C
  if (!crb(c,2)) { goto L_80374AA4; } // 80374A20
L_80374A24:;
  c->r[3]=c->r[29]|c->r[29]; // 80374A24
  c->r[4]=c->r[1]+0x00000044u; // 80374A28
  c->lr=0x80374A30u; f_80388874(c); // 80374A2C
  c->r[3]=c->r[1]+0x00000044u; // 80374A30
  c->r[4]=c->r[31]|c->r[31]; // 80374A34
  c->r[5]=c->r[3]|c->r[3]; // 80374A38
  c->lr=0x80374A40u; f_80394B04(c); // 80374A3C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374A40
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80374A44
  c->f[6]=-c->f[0]; // 80374A48
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374A4C
  c->f[4]=-c->f[2]; // 80374A50
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374A54
  c->f[5]=-c->f[1]; // 80374A58
  c->f[3]=c->ps1[3]=S(c->f[6]); // 80374A5C
  c->f[1]=c->ps1[1]=S(c->f[4]); // 80374A60
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 80374A64
  c->f[2]=c->ps1[2]=S(c->f[5]); // 80374A68
  fcmp(c,0,c->f[0],c->f[3]); // 80374A6C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 80374A70
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 80374A74
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 80374A78
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 80374A7C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 80374A80
  if (!crb(c,2)) { goto L_80374AB4; } // 80374A84
  fcmp(c,0,c->f[0],c->f[2]); // 80374A88
  if (!crb(c,2)) { goto L_80374AB4; } // 80374A8C
  fcmp(c,0,c->f[0],c->f[1]); // 80374A90
  if (!crb(c,2)) { goto L_80374AB4; } // 80374A94
  {uint32_t ea=c->r[2]+0xFFFFEAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374A98
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80374A9C
  goto L_80374AB4; // 80374AA0
L_80374AA4:;
  c->r[3]=c->r[1]+0x00000044u; // 80374AA4
  c->r[4]=c->r[31]|c->r[31]; // 80374AA8
  c->r[5]=c->r[3]|c->r[3]; // 80374AAC
  c->lr=0x80374AB4u; f_80394B04(c); // 80374AB0
L_80374AB4:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80374AB4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80374AB8
  if (!crb(c,2)) { goto L_80374AD4; } // 80374ABC
  c->r[3]=c->r[1]+0x00000050u; // 80374AC0
  c->r[4]=c->r[1]+0x00000044u; // 80374AC4
  c->r[5]=c->r[1]+0x00000068u; // 80374AC8
  c->lr=0x80374AD0u; f_8026584C(c); // 80374ACC
  goto L_80374B10; // 80374AD0
L_80374AD4:;
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374AD4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374AD8
  c->f[2]=-c->f[0]; // 80374ADC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374AE0
  c->f[3]=-c->f[1]; // 80374AE4
  c->f[4]=-c->f[0]; // 80374AE8
  c->f[0]=c->ps1[0]=S(c->f[2]); // 80374AEC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 80374AF0
  c->f[1]=c->ps1[1]=S(c->f[3]); // 80374AF4
  c->f[2]=c->ps1[2]=S(c->f[4]); // 80374AF8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 80374AFC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 80374B00
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 80374B04
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 80374B08
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80374B0C
L_80374B10:;
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374B10
  {uint32_t ea=c->r[2]+0xFFFFEABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374B14
  c->f[1]=std::fabs(c->f[1]); // 80374B18
  fcmp(c,0,c->f[1],c->f[0]); // 80374B1C
  if (!crb(c,0)) { goto L_80374B68; } // 80374B20
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374B24
  c->f[1]=std::fabs(c->f[1]); // 80374B28
  fcmp(c,0,c->f[1],c->f[0]); // 80374B2C
  if (!crb(c,0)) { goto L_80374B68; } // 80374B30
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374B34
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374B38
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 80374B3C
  fcmp(c,0,c->f[0],c->f[1]); // 80374B40
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80374B44
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80374B48
  if (!crb(c,2)) { goto L_80374B5C; } // 80374B4C
  {uint32_t ea=c->r[2]+0xFFFFEAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374B50
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80374B54
  goto L_80374C2C; // 80374B58
L_80374B5C:;
  {uint32_t ea=c->r[2]+0xFFFFEAC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374B5C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80374B60
  goto L_80374C2C; // 80374B64
L_80374B68:;
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374B68
  {uint32_t ea=c->r[2]+0xFFFFEAC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374B6C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80374B70
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 80374B74
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80374B78
  goto L_80374C2C; // 80374B7C
L_80374B80:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 80374B80
  cmps(c,1,(int32_t)c->r[0],0); // 80374B84
  if (crb(c,4)) { goto L_80374C08; } // 80374B88
  cmps(c,0,(int32_t)c->r[0],32); // 80374B8C
  if (!crb(c,0)) { goto L_80374C08; } // 80374B90
  if (!crb(c,0)) { goto L_80374BB4; } // 80374B94
  if (crb(c,4)) { goto L_80374BB4; } // 80374B98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374B9C
  c->r[3]=0u+0x806A0000u; // 80374BA0
  c->r[3]=c->r[3]+0x00003AC0u; // 80374BA4
  c->r[3]=c->r[3]+c->r[0]; // 80374BA8
  c->r[6]=c->r[3]+0x00000034u; // 80374BAC
  goto L_80374BB8; // 80374BB0
L_80374BB4:;
  c->r[6]=0u+0x00000000u; // 80374BB4
L_80374BB8:;
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374BB8
  c->r[3]=c->r[1]+0x00000050u; // 80374BBC
  c->r[4]=c->r[1]+0x00000038u; // 80374BC0
  c->r[5]=c->r[1]+0x00000068u; // 80374BC4
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80374BC8
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374BCC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80374BD0
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374BD4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80374BD8
  {uint32_t ea=c->r[6]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80374BDC
  {uint32_t ea=c->r[6]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80374BE0
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374BE4
  c->f[2]=-c->f[2]; // 80374BE8
  c->f[1]=-c->f[1]; // 80374BEC
  c->f[0]=-c->f[0]; // 80374BF0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 80374BF4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80374BF8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 80374BFC
  c->lr=0x80374C04u; f_8026584C(c); // 80374C00
  goto L_80374C2C; // 80374C04
L_80374C08:;
  c->r[3]=0u+0x806A0000u; // 80374C08
  c->r[4]=c->r[28]|c->r[28]; // 80374C0C
  c->r[3]=c->r[3]+0x00003AC0u; // 80374C10
  c->r[0]=R16(c->r[3]+0x00000002u); // 80374C14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374C18
  c->r[3]=c->r[3]+c->r[0]; // 80374C1C
  c->r[3]=c->r[3]+0x00001434u; // 80374C20
  c->lr=0x80374C28u; f_802646AC(c); // 80374C24
  goto L_80374CF0; // 80374C28
L_80374C2C:;
  c->r[3]=c->r[1]+0x00000068u; // 80374C2C
  c->r[4]=c->r[3]|c->r[3]; // 80374C30
  c->lr=0x80374C38u; f_80265750(c); // 80374C34
  c->r[3]=c->r[1]+0x0000005Cu; // 80374C38
  c->r[4]=c->r[1]+0x00000068u; // 80374C3C
  c->r[5]=c->r[1]+0x0000002Cu; // 80374C40
  c->lr=0x80374C48u; f_80265810(c); // 80374C44
  c->r[3]=c->r[1]+0x0000002Cu; // 80374C48
  c->r[4]=c->r[3]|c->r[3]; // 80374C4C
  c->lr=0x80374C54u; f_80265750(c); // 80374C50
  c->r[3]=c->r[1]+0x00000068u; // 80374C54
  c->r[4]=c->r[1]+0x0000002Cu; // 80374C58
  c->r[5]=c->r[1]+0x00000020u; // 80374C5C
  c->lr=0x80374C64u; f_80265810(c); // 80374C60
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374C64
  c->r[3]=c->r[28]|c->r[28]; // 80374C68
  c->r[4]=c->r[31]|c->r[31]; // 80374C6C
  c->r[5]=c->r[28]|c->r[28]; // 80374C70
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80374C74
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374C78
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 80374C7C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374C80
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 80374C84
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374C88
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[0]);} // 80374C8C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374C90
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[0]);} // 80374C94
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374C98
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 80374C9C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374CA0
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 80374CA4
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80374CA8
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[0]);} // 80374CAC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374CB0
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 80374CB4
  c->lr=0x80374CBCu; f_802646E0(c); // 80374CB8
  {uint32_t ea=c->r[2]+0xFFFFEAB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80374CBC
  c->r[3]=0u+0x806A0000u; // 80374CC0
  c->r[3]=c->r[3]+0x00003AC0u; // 80374CC4
  c->r[4]=c->r[28]|c->r[28]; // 80374CC8
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 80374CCC
  c->r[5]=c->r[28]|c->r[28]; // 80374CD0
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 80374CD4
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 80374CD8
  c->r[0]=R16(c->r[3]+0x00000002u); // 80374CDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374CE0
  c->r[3]=c->r[3]+c->r[0]; // 80374CE4
  c->r[3]=c->r[3]+0x00001434u; // 80374CE8
  c->lr=0x80374CF0u; f_802646E0(c); // 80374CEC
L_80374CF0:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80374CF0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80374CF4
  c->r[30]=R32(c->r[1]+0x00000088u); // 80374CF8
  c->r[29]=R32(c->r[1]+0x00000084u); // 80374CFC
  c->r[28]=R32(c->r[1]+0x00000080u); // 80374D00
  c->lr=c->r[0]; // 80374D04
  c->r[1]=c->r[1]+0x00000090u; // 80374D08
  return; // 80374D0C
}

// fn_80374D10
void f_80374D10(Ctx* __restrict c) {
  trace_call(0x80374D10u);
  cmps(c,0,(int32_t)c->r[3],0); // 80374D10
  if (crb(c,2)) return; // 80374D14
  f_80264680(c); return; // 80374D18
  return; // 80374D1C
}

// FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv
void f_80374D20(Ctx* __restrict c) {
  trace_call(0x80374D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80374D20
  c->r[0]=c->lr; // 80374D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80374D28
  c->r[0]=R32(c->r[3]+0x00000000u); // 80374D2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80374D30
  c->r[31]=c->r[3]|c->r[3]; // 80374D34
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80374D38
  if (crb(c,2)) { goto L_80374D4C; } // 80374D3C
  c->r[4]=c->r[31]+0x00000004u; // 80374D40
  c->r[3]=0u+0x00000000u; // 80374D44
  c->lr=0x80374D4Cu; f_80373E20(c); // 80374D48
L_80374D4C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80374D4C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80374D50
  if (crb(c,2)) { goto L_80374D64; } // 80374D54
  c->r[4]=c->r[31]+0x00000034u; // 80374D58
  c->r[3]=0u+0x00000003u; // 80374D5C
  c->lr=0x80374D64u; f_80373E20(c); // 80374D60
L_80374D64:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80374D64
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80374D68
  if (crb(c,2)) { goto L_80374D7C; } // 80374D6C
  c->r[4]=c->r[31]+0x00000064u; // 80374D70
  c->r[3]=0u+0x00000006u; // 80374D74
  c->lr=0x80374D7Cu; f_80373E20(c); // 80374D78
L_80374D7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80374D7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80374D80
  c->lr=c->r[0]; // 80374D84
  c->r[1]=c->r[1]+0x00000010u; // 80374D88
  return; // 80374D8C
}

// fn_80374D90
void f_80374D90(Ctx* __restrict c) {
  trace_call(0x80374D90u);
  c->r[0]=0u+0x00000001u; // 80374D90
  W8(c->r[13]+0xFFFF9F68u,c->r[0]); // 80374D94
  return; // 80374D98
}

// fn_80374D9C
void f_80374D9C(Ctx* __restrict c) {
  trace_call(0x80374D9Cu);
  c->r[0]=0u+0x00000000u; // 80374D9C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80374DA0
  return; // 80374DA4
}

// SetLightSetting__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFRCQ34nw4r3g3d12LightSetting
void f_80374DA8(Ctx* __restrict c) {
  trace_call(0x80374DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80374DA8
  c->r[0]=c->lr; // 80374DAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80374DB0
  c->r[11]=c->r[1]+0x00000020u; // 80374DB4
  c->lr=0x80374DBCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80374DB8
  c->r[31]=c->r[3]|c->r[3]; // 80374DBC
  c->r[26]=c->r[4]|c->r[4]; // 80374DC0
  c->lr=0x80374DC8u; f_80388E18(c); // 80374DC4
  c->r[4]=0u+0x806A0000u; // 80374DC8
  c->r[5]=R16(c->r[26]+0x00000000u); // 80374DCC
  c->r[4]=c->r[4]+0x00003AC0u; // 80374DD0
  c->r[3]=c->r[31]|c->r[31]; // 80374DD4
  c->r[0]=R16(c->r[4]+0x00000002u); // 80374DD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374DDC
  c->r[4]=c->r[4]+c->r[0]; // 80374DE0
  c->r[4]=c->r[4]+0x00000034u; // 80374DE4
  c->lr=0x80374DECu; f_80388FA8(c); // 80374DE8
  c->r[3]=0u+0xFFFFFFFFu; // 80374DEC
  c->r[0]=0u+0x00000000u; // 80374DF0
  W32(c->r[31]+0x00000010u,c->r[3]); // 80374DF4
  c->r[27]=0u+0x00000000u; // 80374DF8
  c->r[28]=R16(c->r[31]+0x00000000u); // 80374DFC
  c->r[26]=0u+0x00000000u; // 80374E00
  W32(c->r[31]+0x00000014u,c->r[0]); // 80374E04
  c->r[29]=0u+0x00000000u; // 80374E08
  c->r[30]=0u+0x00000001u; // 80374E0C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80374E10
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80374E14
  W32(c->r[31]+0x00000020u,c->r[0]); // 80374E18
  W8(c->r[31]+0x0000002Bu,c->r[3]); // 80374E1C
  W8(c->r[31]+0x0000002Au,c->r[3]); // 80374E20
  W8(c->r[31]+0x00000029u,c->r[3]); // 80374E24
  W8(c->r[31]+0x00000028u,c->r[3]); // 80374E28
  W8(c->r[31]+0x00000027u,c->r[3]); // 80374E2C
  W8(c->r[31]+0x00000026u,c->r[3]); // 80374E30
  W8(c->r[31]+0x00000025u,c->r[3]); // 80374E34
  W8(c->r[31]+0x00000024u,c->r[3]); // 80374E38
  goto L_80374E74; // 80374E3C
L_80374E40:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80374E40
  c->r[3]=c->r[0]+c->r[29]; // 80374E44
  c->r[0]=R32(c->r[29]+c->r[0]); // 80374E48
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80374E4C
  if (crb(c,2)) { goto L_80374E6C; } // 80374E50
  c->r[4]=c->r[31]+c->r[27]; // 80374E54
  c->r[3]=c->r[3]+0x00000004u; // 80374E58
  W8(c->r[4]+0x00000024u,c->r[26]); // 80374E5C
  c->r[4]=((c->r[27])&0x20)?0u:(c->r[30]<<((c->r[27])&31)); // 80374E60
  c->lr=0x80374E68u; f_80285F64(c); // 80374E64
  c->r[27]=c->r[27]+0x00000001u; // 80374E68
L_80374E6C:;
  c->r[29]=c->r[29]+0x00000044u; // 80374E6C
  c->r[26]=c->r[26]+0x00000001u; // 80374E70
L_80374E74:;
  cmpu(c,0,c->r[27],0x00000008u); // 80374E74
  if (!crb(c,0)) { goto L_80374E84; } // 80374E78
  cmpu(c,0,c->r[26],c->r[28]); // 80374E7C
  if (crb(c,0)) { IRQCHK(c); goto L_80374E40; } // 80374E80
L_80374E84:;
  c->r[11]=c->r[1]+0x00000020u; // 80374E84
  c->lr=0x80374E8Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80374E88
  c->r[0]=R32(c->r[1]+0x00000024u); // 80374E8C
  c->lr=c->r[0]; // 80374E90
  c->r[1]=c->r[1]+0x00000020u; // 80374E94
  return; // 80374E98
}

// fn_80374E9C
void f_80374E9C(Ctx* __restrict c) {
  trace_call(0x80374E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80374E9C
  c->r[0]=c->lr; // 80374EA0
  W32(c->r[1]+0x00000074u,c->r[0]); // 80374EA4
  c->r[11]=c->r[1]+0x00000070u; // 80374EA8
  c->lr=0x80374EB0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80374EAC
  cmps(c,0,(int32_t)c->r[5],0); // 80374EB0
  c->r[27]=c->r[3]|c->r[3]; // 80374EB4
  c->r[28]=c->r[5]|c->r[5]; // 80374EB8
  if (crb(c,0)) { goto L_803750A0; } // 80374EBC
  cmps(c,0,(int32_t)c->r[5],128); // 80374EC0
  if (crb(c,0)) { goto L_80374ECC; } // 80374EC4
  goto L_803750A0; // 80374EC8
L_80374ECC:;
  c->r[3]=c->r[1]+0x00000008u; // 80374ECC
  c->lr=0x80374ED4u; f_80388350(c); // 80374ED0
  c->r[4]=0u+0x806A0000u; // 80374ED4
  c->r[3]=c->r[1]+0x00000008u; // 80374ED8
  c->r[4]=c->r[4]+0x00003AC0u; // 80374EDC
  c->r[0]=R16(c->r[4]+0x00000002u); // 80374EE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 80374EE4
  c->r[4]=c->r[4]+c->r[0]; // 80374EE8
  c->r[4]=c->r[4]+0x00000034u; // 80374EEC
  c->lr=0x80374EF4u; f_80388914(c); // 80374EF0
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)68); // 80374EF4
  c->r[3]=c->r[1]+0x00000008u; // 80374EF8
  c->r[4]=c->r[27]+c->r[0]; // 80374EFC
  c->r[26]=c->r[4]+0x0000002Cu; // 80374F00
  c->r[4]=c->r[26]|c->r[26]; // 80374F04
  c->lr=0x80374F0Cu; f_803883E0(c); // 80374F08
  cmps(c,0,(int32_t)c->r[3],0); // 80374F0C
  if (crb(c,2)) { goto L_803750A0; } // 80374F10
  c->r[3]=c->r[26]|c->r[26]; // 80374F14
  c->r[4]=c->r[1]+0x00000008u; // 80374F18
  c->lr=0x80374F20u; f_80388394(c); // 80374F1C
  c->r[30]=0u+0x00000000u; // 80374F20
  c->r[31]=0u+0x00000001u; // 80374F24
  c->r[26]=0u+0xFFFFFFFFu; // 80374F28
L_80374F2C:;
  c->r[3]=c->r[27]+c->r[30]; // 80374F2C
  c->r[0]=R8(c->r[3]+0x00000024u); // 80374F30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80374F34
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80374F38
  if (!crb(c,2)) { goto L_80375094; } // 80374F3C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80374F40
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80374F44
  if (crb(c,2)) { goto L_80375058; } // 80374F48
  c->r[29]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 80374F4C
  c->r[3]=c->r[1]+0x0000000Cu; // 80374F50
  c->r[4]=c->r[29]|c->r[29]; // 80374F54
  c->lr=0x80374F5Cu; f_80285F64(c); // 80374F58
  c->r[4]=R32(c->r[27]+0x00000020u); // 80374F5C
  c->r[5]=R32(c->r[27]+0x0000001Cu); // 80374F60
  c->r[3]=R32(c->r[27]+0x00000014u); // 80374F64
  c->r[0]=R32(c->r[27]+0x00000018u); // 80374F68
  c->r[4]=c->r[4]|c->r[5]; // 80374F6C
  c->r[0]=c->r[3]|c->r[0]; // 80374F70
  c->r[0]=c->r[4]|c->r[0]; // 80374F74
  c->r[0]=c->r[29]&c->r[0]; cr0(c,c->r[0]); // 80374F78
  if (crb(c,2)) { goto L_80375094; } // 80374F7C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80374F80
  c->r[4]=R32(c->r[1]+0x00000008u); // 80374F84
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80374F88
  if (crb(c,2)) { goto L_80374FF4; } // 80374F8C
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80374F90
  if (!crb(c,2)) { goto L_80374FA4; } // 80374F94
  c->r[0]=c->r[5]|c->r[29]; // 80374F98
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 80374F9C
  goto L_80374FAC; // 80374FA0
L_80374FA4:;
  c->r[0]=c->r[5]&~c->r[29]; // 80374FA4
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 80374FA8
L_80374FAC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80374FAC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80374FB0
  if (!crb(c,2)) { goto L_80374FC8; } // 80374FB4
  c->r[0]=R32(c->r[27]+0x00000020u); // 80374FB8
  c->r[0]=c->r[0]|c->r[29]; // 80374FBC
  W32(c->r[27]+0x00000020u,c->r[0]); // 80374FC0
  goto L_80374FD4; // 80374FC4
L_80374FC8:;
  c->r[0]=R32(c->r[27]+0x00000020u); // 80374FC8
  c->r[0]=c->r[0]&~c->r[29]; // 80374FCC
  W32(c->r[27]+0x00000020u,c->r[0]); // 80374FD0
L_80374FD4:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 80374FD4
  c->r[4]=~(c->r[29]|c->r[29]); // 80374FD8
  c->r[0]=R32(c->r[27]+0x00000018u); // 80374FDC
  c->r[3]=c->r[3]&c->r[4]; // 80374FE0
  c->r[0]=c->r[0]&c->r[4]; // 80374FE4
  W32(c->r[27]+0x00000014u,c->r[3]); // 80374FE8
  W32(c->r[27]+0x00000018u,c->r[0]); // 80374FEC
  goto L_80375094; // 80374FF0
L_80374FF4:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80374FF4
  if (!crb(c,2)) { goto L_80375008; } // 80374FF8
  c->r[0]=c->r[3]|c->r[29]; // 80374FFC
  W32(c->r[27]+0x00000014u,c->r[0]); // 80375000
  goto L_80375010; // 80375004
L_80375008:;
  c->r[0]=c->r[3]&~c->r[29]; // 80375008
  W32(c->r[27]+0x00000014u,c->r[0]); // 8037500C
L_80375010:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80375010
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80375014
  if (!crb(c,2)) { goto L_8037502C; } // 80375018
  c->r[0]=R32(c->r[27]+0x00000018u); // 8037501C
  c->r[0]=c->r[0]|c->r[29]; // 80375020
  W32(c->r[27]+0x00000018u,c->r[0]); // 80375024
  goto L_80375038; // 80375028
L_8037502C:;
  c->r[0]=R32(c->r[27]+0x00000018u); // 8037502C
  c->r[0]=c->r[0]&~c->r[29]; // 80375030
  W32(c->r[27]+0x00000018u,c->r[0]); // 80375034
L_80375038:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 80375038
  c->r[4]=~(c->r[29]|c->r[29]); // 8037503C
  c->r[0]=R32(c->r[27]+0x00000020u); // 80375040
  c->r[3]=c->r[3]&c->r[4]; // 80375044
  c->r[0]=c->r[0]&c->r[4]; // 80375048
  W32(c->r[27]+0x0000001Cu,c->r[3]); // 8037504C
  W32(c->r[27]+0x00000020u,c->r[0]); // 80375050
  goto L_80375094; // 80375054
L_80375058:;
  W8(c->r[3]+0x00000024u,c->r[26]); // 80375058
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 8037505C
  c->r[6]=~(c->r[0]|c->r[0]); // 80375060
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 80375064
  c->r[4]=R32(c->r[27]+0x00000020u); // 80375068
  c->r[5]=c->r[0]&c->r[6]; // 8037506C
  c->r[3]=R32(c->r[27]+0x00000014u); // 80375070
  c->r[0]=R32(c->r[27]+0x00000018u); // 80375074
  c->r[4]=c->r[4]&c->r[6]; // 80375078
  c->r[3]=c->r[3]&c->r[6]; // 8037507C
  W32(c->r[27]+0x0000001Cu,c->r[5]); // 80375080
  c->r[0]=c->r[0]&c->r[6]; // 80375084
  W32(c->r[27]+0x00000020u,c->r[4]); // 80375088
  W32(c->r[27]+0x00000014u,c->r[3]); // 8037508C
  W32(c->r[27]+0x00000018u,c->r[0]); // 80375090
L_80375094:;
  c->r[30]=c->r[30]+0x00000001u; // 80375094
  cmpu(c,0,c->r[30],0x00000008u); // 80375098
  if (crb(c,0)) { IRQCHK(c); goto L_80374F2C; } // 8037509C
L_803750A0:;
  c->r[11]=c->r[1]+0x00000070u; // 803750A0
  c->lr=0x803750A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803750A4
  c->r[0]=R32(c->r[1]+0x00000074u); // 803750A8
  c->lr=c->r[0]; // 803750AC
  c->r[1]=c->r[1]+0x00000070u; // 803750B0
  return; // 803750B4
}

// LoadLightSet__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFiPUlPUlPUlPUlPQ34nw4r3g3d11AmbLightObj
void f_803750B8(Ctx* __restrict c) {
  trace_call(0x803750B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803750B8
  c->r[0]=c->lr; // 803750BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803750C0
  c->r[11]=c->r[1]+0x00000040u; // 803750C4
  c->lr=0x803750CCu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803750C8
  cmps(c,0,(int32_t)c->r[4],0); // 803750CC
  c->r[20]=c->r[3]|c->r[3]; // 803750D0
  c->r[21]=c->r[5]|c->r[5]; // 803750D4
  c->r[22]=c->r[6]|c->r[6]; // 803750D8
  c->r[23]=c->r[7]|c->r[7]; // 803750DC
  c->r[24]=c->r[8]|c->r[8]; // 803750E0
  if (crb(c,0)) { goto L_803750F0; } // 803750E4
  cmps(c,0,(int32_t)c->r[4],128); // 803750E8
  if (crb(c,0)) { goto L_80375150; } // 803750EC
L_803750F0:;
  cmps(c,0,(int32_t)c->r[5],0); // 803750F0
  if (crb(c,2)) { goto L_80375100; } // 803750F4
  c->r[0]=0u+0x00000000u; // 803750F8
  W32(c->r[5]+0x00000000u,c->r[0]); // 803750FC
L_80375100:;
  cmps(c,0,(int32_t)c->r[6],0); // 80375100
  if (crb(c,2)) { goto L_80375110; } // 80375104
  c->r[0]=0u+0x00000000u; // 80375108
  W32(c->r[6]+0x00000000u,c->r[0]); // 8037510C
L_80375110:;
  cmps(c,0,(int32_t)c->r[7],0); // 80375110
  if (crb(c,2)) { goto L_80375120; } // 80375114
  c->r[0]=0u+0x00000000u; // 80375118
  W32(c->r[7]+0x00000000u,c->r[0]); // 8037511C
L_80375120:;
  cmps(c,0,(int32_t)c->r[8],0); // 80375120
  if (crb(c,2)) { goto L_80375130; } // 80375124
  c->r[0]=0u+0x00000000u; // 80375128
  W32(c->r[8]+0x00000000u,c->r[0]); // 8037512C
L_80375130:;
  cmps(c,0,(int32_t)c->r[9],0); // 80375130
  if (crb(c,2)) { goto L_803754B8; } // 80375134
  c->r[0]=0u+0x000000FFu; // 80375138
  W8(c->r[9]+0x00000003u,c->r[0]); // 8037513C
  W8(c->r[9]+0x00000002u,c->r[0]); // 80375140
  W8(c->r[9]+0x00000001u,c->r[0]); // 80375144
  W8(c->r[9]+0x00000000u,c->r[0]); // 80375148
  goto L_803754B8; // 8037514C
L_80375150:;
  cmps(c,0,(int32_t)c->r[9],0); // 80375150
  if (crb(c,2)) { goto L_803751AC; } // 80375154
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80375158
  c->r[10]=c->r[3]+c->r[0]; // 8037515C
  c->r[0]=R8(c->r[10]+0x00002434u); // 80375160
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80375164
  if (!crb(c,0)) { goto L_80375184; } // 80375168
  c->r[0]=0u+0x000000FFu; // 8037516C
  W8(c->r[9]+0x00000003u,c->r[0]); // 80375170
  W8(c->r[9]+0x00000002u,c->r[0]); // 80375174
  W8(c->r[9]+0x00000001u,c->r[0]); // 80375178
  W8(c->r[9]+0x00000000u,c->r[0]); // 8037517C
  goto L_803751AC; // 80375180
L_80375184:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80375184
  c->r[10]=c->r[3]+c->r[0]; // 80375188
  c->r[0]=R8(c->r[10]+0x0000222Cu); // 8037518C
  W8(c->r[9]+0x00000000u,c->r[0]); // 80375190
  c->r[0]=R8(c->r[10]+0x0000222Du); // 80375194
  W8(c->r[9]+0x00000001u,c->r[0]); // 80375198
  c->r[0]=R8(c->r[10]+0x0000222Eu); // 8037519C
  W8(c->r[9]+0x00000002u,c->r[0]); // 803751A0
  c->r[0]=R8(c->r[10]+0x0000222Fu); // 803751A4
  W8(c->r[9]+0x00000003u,c->r[0]); // 803751A8
L_803751AC:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 803751AC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 803751B0
  if (!crb(c,2)) { goto L_803751FC; } // 803751B4
  cmps(c,0,(int32_t)c->r[5],0); // 803751B8
  if (crb(c,2)) { goto L_803751C8; } // 803751BC
  c->r[0]=R32(c->r[3]+0x00000014u); // 803751C0
  W32(c->r[5]+0x00000000u,c->r[0]); // 803751C4
L_803751C8:;
  cmps(c,0,(int32_t)c->r[6],0); // 803751C8
  if (crb(c,2)) { goto L_803751D8; } // 803751CC
  c->r[0]=R32(c->r[3]+0x00000018u); // 803751D0
  W32(c->r[6]+0x00000000u,c->r[0]); // 803751D4
L_803751D8:;
  cmps(c,0,(int32_t)c->r[7],0); // 803751D8
  if (crb(c,2)) { goto L_803751E8; } // 803751DC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 803751E0
  W32(c->r[7]+0x00000000u,c->r[0]); // 803751E4
L_803751E8:;
  cmps(c,0,(int32_t)c->r[8],0); // 803751E8
  if (crb(c,2)) { goto L_803754B8; } // 803751EC
  c->r[0]=R32(c->r[3]+0x00000020u); // 803751F0
  W32(c->r[8]+0x00000000u,c->r[0]); // 803751F4
  goto L_803754B8; // 803751F8
L_803751FC:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 803751FC
  c->r[0]=0u+0x00000000u; // 80375200
  W32(c->r[3]+0x00000014u,c->r[0]); // 80375204
  c->r[27]=0u+0x00000000u; // 80375208
  c->r[31]=0u+0x00000001u; // 8037520C
  c->r[5]=c->r[3]+c->r[5]; // 80375210
  c->r[28]=c->r[5]+0x0000242Cu; // 80375214
  W32(c->r[3]+0x00000018u,c->r[0]); // 80375218
  c->r[18]=c->r[28]|c->r[28]; // 8037521C
  c->r[19]=0u+0x00000002u; // 80375220
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80375224
  W32(c->r[3]+0x00000020u,c->r[0]); // 80375228
  W32(c->r[3]+0x00000010u,c->r[4]); // 8037522C
L_80375230:;
  c->r[26]=R8(c->r[18]+0x00000000u); // 80375230
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[26]; cr0(c,c->r[4]); // 80375234
  if (crb(c,0)) { goto L_80375468; } // 80375238
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 8037523C
  c->r[29]=c->r[20]+c->r[0]; // 80375240
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 80375244
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80375248
  if (crb(c,2)) { goto L_80375468; } // 8037524C
  c->r[5]=c->r[20]+0x00000024u; // 80375250
  c->r[3]=c->r[20]+0x0000002Cu; // 80375254
  goto L_80375260; // 80375258
L_8037525C:;
  c->r[5]=c->r[5]+0x00000001u; // 8037525C
L_80375260:;
  cmpu(c,0,c->r[5],c->r[3]); // 80375260
  if (crb(c,2)) { goto L_80375278; } // 80375264
  c->r[0]=R8(c->r[5]+0x00000000u); // 80375268
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8037526C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80375270
  if (!crb(c,2)) { IRQCHK(c); goto L_8037525C; } // 80375274
L_80375278:;
  c->r[3]=c->r[20]+0x0000002Cu; // 80375278
  cmpu(c,0,c->r[5],c->r[3]); // 8037527C
  if (!crb(c,2)) { goto L_803753F4; } // 80375280
  c->r[4]=R32(c->r[13]+0xFFFF92E8u); // 80375284
  c->r[30]=c->r[20]+0x00000024u; // 80375288
  goto L_80375294; // 8037528C
L_80375290:;
  c->r[30]=c->r[30]+0x00000001u; // 80375290
L_80375294:;
  cmpu(c,0,c->r[30],c->r[3]); // 80375294
  if (crb(c,2)) { goto L_803752AC; } // 80375298
  c->r[0]=R8(c->r[30]+0x00000000u); // 8037529C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803752A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 803752A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80375290; } // 803752A8
L_803752AC:;
  c->r[0]=c->r[20]+0x0000002Cu; // 803752AC
  cmpu(c,0,c->r[30],c->r[0]); // 803752B0
  if (crb(c,2)) { goto L_803752D8; } // 803752B4
  c->r[0]=c->r[20]+0x00000024u; // 803752B8
  c->r[3]=c->r[29]+0x00000030u; // 803752BC
  c->r[0]=c->r[30]-c->r[0]; // 803752C0
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 803752C4
  c->r[4]=c->r[25]|c->r[25]; // 803752C8
  c->lr=0x803752D0u; f_80285F64(c); // 803752CC
  W8(c->r[30]+0x00000000u,c->r[26]); // 803752D0
  goto L_80375400; // 803752D4
L_803752D8:;
  c->r[4]=c->r[28]+0x00000008u; // 803752D8
  c->r[30]=0u+0x00000000u; // 803752DC
  c->ctr=c->r[19]; // 803752E0
L_803752E4:;
  c->r[5]=c->r[28]|c->r[28]; // 803752E4
  c->r[6]=c->r[20]+c->r[30]; // 803752E8
  goto L_803752F4; // 803752EC
L_803752F0:;
  c->r[5]=c->r[5]+0x00000001u; // 803752F0
L_803752F4:;
  cmpu(c,0,c->r[5],c->r[4]); // 803752F4
  if (crb(c,2)) { goto L_80375314; } // 803752F8
  c->r[3]=R8(c->r[5]+0x00000000u); // 803752FC
  c->r[0]=R8(c->r[6]+0x00000024u); // 80375300
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80375304
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80375308
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8037530C
  if (!crb(c,2)) { IRQCHK(c); goto L_803752F0; } // 80375310
L_80375314:;
  cmpu(c,0,c->r[5],c->r[4]); // 80375314
  if (crb(c,2)) { goto L_803753D8; } // 80375318
  c->r[30]=c->r[30]+0x00000001u; // 8037531C
  c->r[5]=c->r[28]|c->r[28]; // 80375320
  c->r[6]=c->r[20]+c->r[30]; // 80375324
  goto L_80375330; // 80375328
L_8037532C:;
  c->r[5]=c->r[5]+0x00000001u; // 8037532C
L_80375330:;
  cmpu(c,0,c->r[5],c->r[4]); // 80375330
  if (crb(c,2)) { goto L_80375350; } // 80375334
  c->r[3]=R8(c->r[5]+0x00000000u); // 80375338
  c->r[0]=R8(c->r[6]+0x00000024u); // 8037533C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80375340
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80375344
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80375348
  if (!crb(c,2)) { IRQCHK(c); goto L_8037532C; } // 8037534C
L_80375350:;
  cmpu(c,0,c->r[5],c->r[4]); // 80375350
  if (crb(c,2)) { goto L_803753D8; } // 80375354
  c->r[30]=c->r[30]+0x00000001u; // 80375358
  c->r[5]=c->r[28]|c->r[28]; // 8037535C
  c->r[6]=c->r[20]+c->r[30]; // 80375360
  goto L_8037536C; // 80375364
L_80375368:;
  c->r[5]=c->r[5]+0x00000001u; // 80375368
L_8037536C:;
  cmpu(c,0,c->r[5],c->r[4]); // 8037536C
  if (crb(c,2)) { goto L_8037538C; } // 80375370
  c->r[3]=R8(c->r[5]+0x00000000u); // 80375374
  c->r[0]=R8(c->r[6]+0x00000024u); // 80375378
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8037537C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80375380
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80375384
  if (!crb(c,2)) { IRQCHK(c); goto L_80375368; } // 80375388
L_8037538C:;
  cmpu(c,0,c->r[5],c->r[4]); // 8037538C
  if (crb(c,2)) { goto L_803753D8; } // 80375390
  c->r[30]=c->r[30]+0x00000001u; // 80375394
  c->r[5]=c->r[28]|c->r[28]; // 80375398
  c->r[6]=c->r[20]+c->r[30]; // 8037539C
  goto L_803753A8; // 803753A0
L_803753A4:;
  c->r[5]=c->r[5]+0x00000001u; // 803753A4
L_803753A8:;
  cmpu(c,0,c->r[5],c->r[4]); // 803753A8
  if (crb(c,2)) { goto L_803753C8; } // 803753AC
  c->r[3]=R8(c->r[5]+0x00000000u); // 803753B0
  c->r[0]=R8(c->r[6]+0x00000024u); // 803753B4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 803753B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803753BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803753C0
  if (!crb(c,2)) { IRQCHK(c); goto L_803753A4; } // 803753C4
L_803753C8:;
  cmpu(c,0,c->r[5],c->r[4]); // 803753C8
  if (crb(c,2)) { goto L_803753D8; } // 803753CC
  c->r[30]=c->r[30]+0x00000001u; // 803753D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803752E4; } // 803753D4
L_803753D8:;
  c->r[25]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 803753D8
  c->r[3]=c->r[29]+0x00000030u; // 803753DC
  c->r[4]=c->r[25]|c->r[25]; // 803753E0
  c->lr=0x803753E8u; f_80285F64(c); // 803753E4
  c->r[3]=c->r[20]+c->r[30]; // 803753E8
  W8(c->r[3]+0x00000024u,c->r[26]); // 803753EC
  goto L_80375400; // 803753F0
L_803753F4:;
  c->r[0]=c->r[20]+0x00000024u; // 803753F4
  c->r[0]=c->r[5]-c->r[0]; // 803753F8
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 803753FC
L_80375400:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 80375400
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80375404
  if (crb(c,2)) { goto L_8037543C; } // 80375408
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8037540C
  if (!crb(c,2)) { goto L_80375420; } // 80375410
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 80375414
  c->r[0]=c->r[0]|c->r[25]; // 80375418
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 8037541C
L_80375420:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 80375420
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80375424
  if (!crb(c,2)) { goto L_80375468; } // 80375428
  c->r[0]=R32(c->r[20]+0x00000020u); // 8037542C
  c->r[0]=c->r[0]|c->r[25]; // 80375430
  W32(c->r[20]+0x00000020u,c->r[0]); // 80375434
  goto L_80375468; // 80375438
L_8037543C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 8037543C
  if (!crb(c,2)) { goto L_80375450; } // 80375440
  c->r[0]=R32(c->r[20]+0x00000014u); // 80375444
  c->r[0]=c->r[0]|c->r[25]; // 80375448
  W32(c->r[20]+0x00000014u,c->r[0]); // 8037544C
L_80375450:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 80375450
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80375454
  if (!crb(c,2)) { goto L_80375468; } // 80375458
  c->r[0]=R32(c->r[20]+0x00000018u); // 8037545C
  c->r[0]=c->r[0]|c->r[25]; // 80375460
  W32(c->r[20]+0x00000018u,c->r[0]); // 80375464
L_80375468:;
  c->r[27]=c->r[27]+0x00000001u; // 80375468
  c->r[18]=c->r[18]+0x00000001u; // 8037546C
  cmpu(c,0,c->r[27],0x00000008u); // 80375470
  if (crb(c,0)) { IRQCHK(c); goto L_80375230; } // 80375474
  cmps(c,0,(int32_t)c->r[21],0); // 80375478
  if (crb(c,2)) { goto L_80375488; } // 8037547C
  c->r[0]=R32(c->r[20]+0x00000014u); // 80375480
  W32(c->r[21]+0x00000000u,c->r[0]); // 80375484
L_80375488:;
  cmps(c,0,(int32_t)c->r[22],0); // 80375488
  if (crb(c,2)) { goto L_80375498; } // 8037548C
  c->r[0]=R32(c->r[20]+0x00000018u); // 80375490
  W32(c->r[22]+0x00000000u,c->r[0]); // 80375494
L_80375498:;
  cmps(c,0,(int32_t)c->r[23],0); // 80375498
  if (crb(c,2)) { goto L_803754A8; } // 8037549C
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 803754A0
  W32(c->r[23]+0x00000000u,c->r[0]); // 803754A4
L_803754A8:;
  cmps(c,0,(int32_t)c->r[24],0); // 803754A8
  if (crb(c,2)) { goto L_803754B8; } // 803754AC
  c->r[0]=R32(c->r[20]+0x00000020u); // 803754B0
  W32(c->r[24]+0x00000000u,c->r[0]); // 803754B4
L_803754B8:;
  c->r[11]=c->r[1]+0x00000040u; // 803754B8
  c->lr=0x803754C0u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803754BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 803754C0
  c->lr=c->r[0]; // 803754C4
  c->r[1]=c->r[1]+0x00000040u; // 803754C8
  return; // 803754CC
}

// __ct__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@14CameraMtxStateFv
void f_803754D0(Ctx* __restrict c) {
  trace_call(0x803754D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803754D0
  c->r[0]=c->lr; // 803754D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803754D8
  c->r[11]=c->r[1]+0x00000020u; // 803754DC
  c->lr=0x803754E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803754E0
  c->r[0]=0u+0x00000000u; // 803754E4
  c->r[26]=c->r[3]|c->r[3]; // 803754E8
  W16(c->r[3]+0x00000000u,c->r[0]); // 803754EC
  W16(c->r[3]+0x00000002u,c->r[0]); // 803754F0
  c->r[3]=c->r[3]+0x00000004u; // 803754F4
  c->lr=0x803754FCu; f_80264680(c); // 803754F8
  c->r[31]=c->r[26]+0x00000034u; // 803754FC
  c->r[30]=c->r[26]+0x00000634u; // 80375500
  c->r[29]=c->r[26]+0x00000E34u; // 80375504
  c->r[28]=c->r[26]+0x00001434u; // 80375508
  c->r[27]=0u+0x00000000u; // 8037550C
L_80375510:;
  c->r[3]=c->r[31]|c->r[31]; // 80375510
  c->lr=0x80375518u; f_80264680(c); // 80375514
  c->r[3]=c->r[30]|c->r[30]; // 80375518
  c->lr=0x80375520u; f_80394B94(c); // 8037551C
  c->r[3]=c->r[29]|c->r[29]; // 80375520
  c->lr=0x80375528u; f_80264680(c); // 80375524
  c->r[3]=c->r[28]|c->r[28]; // 80375528
  c->lr=0x80375530u; f_80264680(c); // 8037552C
  c->r[27]=c->r[27]+0x00000001u; // 80375530
  c->r[30]=c->r[30]+0x00000040u; // 80375534
  cmpu(c,0,c->r[27],0x00000020u); // 80375538
  c->r[29]=c->r[29]+0x00000030u; // 8037553C
  c->r[28]=c->r[28]+0x00000030u; // 80375540
  c->r[31]=c->r[31]+0x00000030u; // 80375544
  if (crb(c,0)) { IRQCHK(c); goto L_80375510; } // 80375548
  c->r[11]=c->r[1]+0x00000020u; // 8037554C
  c->r[3]=c->r[26]|c->r[26]; // 80375550
  c->lr=0x80375558u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80375554
  c->r[0]=R32(c->r[1]+0x00000024u); // 80375558
  c->lr=c->r[0]; // 8037555C
  c->r[1]=c->r[1]+0x00000020u; // 80375560
  return; // 80375564
}

// LoadResMatMisc__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatMisc
void f_80375568(Ctx* __restrict c) {
  trace_call(0x80375568u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80375568
  c->r[0]=c->lr; // 8037556C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80375570
  c->r[0]=R32(c->r[3]+0x00000000u); // 80375574
  cmps(c,0,(int32_t)c->r[0],0); // 80375578
  if (crb(c,2)) { goto L_803755C8; } // 8037557C
  c->lr=0x80375584u; f_803675E0(c); // 80375580
  c->r[0]=R32(c->r[13]+0xFFFF9F80u); // 80375584
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80375588
  if (crb(c,2)) { goto L_803755A4; } // 8037558C
  c->r[4]=c->r[13]+0xFFFF9F80u; // 80375590
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80375594
  c->r[4]=R8(c->r[4]+0x00000004u); // 80375598
  cmpu(c,0,c->r[4],c->r[0]); // 8037559C
  if (crb(c,2)) { goto L_803755C8; } // 803755A0
L_803755A4:;
  c->r[0]=R32(c->r[13]+0xFFFF9F80u); // 803755A4
  c->r[4]=c->r[13]+0xFFFF9F80u; // 803755A8
  W8(c->r[4]+0x00000004u,c->r[3]); // 803755AC
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 803755B0
  c->r[0]=c->r[0]|0x00000001u; // 803755B4
  W32(c->r[13]+0xFFFF9F80u,c->r[0]); // 803755B8
  c->lr=0x803755C0u; f_80288350(c); // 803755BC
  c->r[0]=0u+0x00000001u; // 803755C0
  W8(c->r[13]+0xFFFF9F68u,c->r[0]); // 803755C4
L_803755C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803755C8
  c->lr=c->r[0]; // 803755CC
  c->r[1]=c->r[1]+0x00000010u; // 803755D0
  return; // 803755D4
}

// LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj
void f_803755D8(Ctx* __restrict c) {
  trace_call(0x803755D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803755D8
  c->r[0]=c->lr; // 803755DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803755E0
  c->r[11]=c->r[1]+0x00000030u; // 803755E4
  c->lr=0x803755ECu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803755E8
  c->r[4]=R32(c->r[3]+0x00000000u); // 803755EC
  c->r[0]=0u-c->r[4]; // 803755F0
  c->r[0]=c->r[0]|c->r[4]; // 803755F4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803755F8
  if (crb(c,2)) { goto L_80375828; } // 803755FC
  c->r[3]=0u+0x806A0000u; // 80375600
  c->r[25]=0u+0x806A0000u; // 80375604
  W32(c->r[1]+0x00000008u,c->r[4]); // 80375608
  c->r[31]=c->r[3]+0x000000C0u; // 8037560C
  c->r[26]=c->r[25]+0x0000004Cu; // 80375610
  c->r[28]=0u+0x00000000u; // 80375614
  c->r[27]=0u+0x00000000u; // 80375618
  c->r[30]=0u+0x00000001u; // 8037561C
L_80375620:;
  c->r[4]=c->r[28]|c->r[28]; // 80375620
  c->r[3]=c->r[1]+0x00000008u; // 80375624
  c->lr=0x8037562Cu; f_803671AC(c); // 80375628
  cmps(c,0,(int32_t)c->r[3],0); // 8037562C
  if (crb(c,2)) { goto L_80375810; } // 80375630
  c->r[4]=c->r[28]|c->r[28]; // 80375634
  c->r[3]=c->r[1]+0x00000008u; // 80375638
  c->lr=0x80375640u; f_80367144(c); // 8037563C
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[30]<<((c->r[28])&31)); // 80375640
  c->r[4]=R8(c->r[31]+0x00000100u); // 80375644
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80375648
  c->r[29]=c->r[3]|c->r[3]; // 8037564C
  c->r[4]=c->r[4]&c->r[0]; cr0(c,c->r[4]); // 80375650
  if (crb(c,2)) { goto L_8037577C; } // 80375654
  c->r[9]=R32(c->r[3]+0x00000000u); // 80375658
  c->r[4]=0u+0x00000000u; // 8037565C
  c->r[8]=R32(c->r[31]+c->r[27]); // 80375660
  c->r[5]=0u+0x00000000u; // 80375664
  c->r[6]=0u+0x00000000u; // 80375668
  c->r[7]=0u+0x00000000u; // 8037566C
  cmpu(c,0,c->r[9],c->r[8]); // 80375670
  c->r[10]=0u+0x00000000u; // 80375674
  c->r[11]=0u+0x00000000u; // 80375678
  c->r[12]=0u+0x00000000u; // 8037567C
  if (!crb(c,2)) { goto L_8037569C; } // 80375680
  c->r[8]=c->r[31]+c->r[27]; // 80375684
  c->r[9]=R32(c->r[3]+0x00000004u); // 80375688
  c->r[8]=R32(c->r[8]+0x00000004u); // 8037568C
  cmpu(c,0,c->r[9],c->r[8]); // 80375690
  if (!crb(c,2)) { goto L_8037569C; } // 80375694
  c->r[12]=0u+0x00000001u; // 80375698
L_8037569C:;
  cmps(c,0,(int32_t)c->r[12],0); // 8037569C
  if (crb(c,2)) { goto L_803756C0; } // 803756A0
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 803756A4
  c->r[9]=R32(c->r[3]+0x00000008u); // 803756A8
  c->r[8]=c->r[31]+c->r[8]; // 803756AC
  c->r[8]=R32(c->r[8]+0x00000008u); // 803756B0
  cmpu(c,0,c->r[9],c->r[8]); // 803756B4
  if (!crb(c,2)) { goto L_803756C0; } // 803756B8
  c->r[11]=0u+0x00000001u; // 803756BC
L_803756C0:;
  cmps(c,0,(int32_t)c->r[11],0); // 803756C0
  if (crb(c,2)) { goto L_803756E4; } // 803756C4
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 803756C8
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 803756CC
  c->r[8]=c->r[31]+c->r[8]; // 803756D0
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 803756D4
  cmpu(c,0,c->r[9],c->r[8]); // 803756D8
  if (!crb(c,2)) { goto L_803756E4; } // 803756DC
  c->r[10]=0u+0x00000001u; // 803756E0
L_803756E4:;
  cmps(c,0,(int32_t)c->r[10],0); // 803756E4
  if (crb(c,2)) { goto L_80375708; } // 803756E8
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 803756EC
  c->r[9]=R32(c->r[3]+0x00000010u); // 803756F0
  c->r[8]=c->r[31]+c->r[8]; // 803756F4
  c->r[8]=R32(c->r[8]+0x00000010u); // 803756F8
  cmpu(c,0,c->r[9],c->r[8]); // 803756FC
  if (!crb(c,2)) { goto L_80375708; } // 80375700
  c->r[7]=0u+0x00000001u; // 80375704
L_80375708:;
  cmps(c,0,(int32_t)c->r[7],0); // 80375708
  if (crb(c,2)) { goto L_8037572C; } // 8037570C
  c->r[7]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80375710
  c->r[8]=R32(c->r[3]+0x00000014u); // 80375714
  c->r[7]=c->r[31]+c->r[7]; // 80375718
  c->r[7]=R32(c->r[7]+0x00000014u); // 8037571C
  cmpu(c,0,c->r[8],c->r[7]); // 80375720
  if (!crb(c,2)) { goto L_8037572C; } // 80375724
  c->r[6]=0u+0x00000001u; // 80375728
L_8037572C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8037572C
  if (crb(c,2)) { goto L_80375750; } // 80375730
  c->r[6]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80375734
  c->r[7]=R32(c->r[3]+0x00000018u); // 80375738
  c->r[6]=c->r[31]+c->r[6]; // 8037573C
  c->r[6]=R32(c->r[6]+0x00000018u); // 80375740
  cmpu(c,0,c->r[7],c->r[6]); // 80375744
  if (!crb(c,2)) { goto L_80375750; } // 80375748
  c->r[5]=0u+0x00000001u; // 8037574C
L_80375750:;
  cmps(c,0,(int32_t)c->r[5],0); // 80375750
  if (crb(c,2)) { goto L_80375774; } // 80375754
  c->r[5]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80375758
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8037575C
  c->r[5]=c->r[31]+c->r[5]; // 80375760
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80375764
  cmpu(c,0,c->r[6],c->r[5]); // 80375768
  if (!crb(c,2)) { goto L_80375774; } // 8037576C
  c->r[4]=0u+0x00000001u; // 80375770
L_80375774:;
  cmps(c,0,(int32_t)c->r[4],0); // 80375774
  if (!crb(c,2)) { goto L_80375810; } // 80375778
L_8037577C:;
  c->r[5]=R8(c->r[31]+0x00000100u); // 8037577C
  c->r[4]=rotl(c->r[28],5)&0xFFFFFFE0u; // 80375780
  c->r[6]=c->r[31]+c->r[4]; // 80375784
  c->r[0]=c->r[5]|c->r[0]; // 80375788
  c->r[4]=c->r[28]|c->r[28]; // 8037578C
  W8(c->r[31]+0x00000100u,c->r[0]); // 80375790
  c->r[5]=R32(c->r[3]+0x00000000u); // 80375794
  c->r[0]=R32(c->r[3]+0x00000004u); // 80375798
  W32(c->r[6]+0x00000000u,c->r[5]); // 8037579C
  W32(c->r[6]+0x00000004u,c->r[0]); // 803757A0
  c->r[5]=R32(c->r[3]+0x00000008u); // 803757A4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803757A8
  W32(c->r[6]+0x00000008u,c->r[5]); // 803757AC
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 803757B0
  c->r[5]=R32(c->r[3]+0x00000010u); // 803757B4
  c->r[0]=R32(c->r[3]+0x00000014u); // 803757B8
  W32(c->r[6]+0x00000010u,c->r[5]); // 803757BC
  W32(c->r[6]+0x00000014u,c->r[0]); // 803757C0
  c->r[5]=R32(c->r[3]+0x00000018u); // 803757C4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 803757C8
  c->r[3]=c->r[29]|c->r[29]; // 803757CC
  W32(c->r[6]+0x00000018u,c->r[5]); // 803757D0
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 803757D4
  c->lr=0x803757DCu; f_80286B04(c); // 803757D8
  c->r[3]=c->r[29]|c->r[29]; // 803757DC
  c->lr=0x803757E4u; f_80286874(c); // 803757E0
  c->r[24]=c->r[3]|c->r[3]; // 803757E4
  c->r[3]=c->r[29]|c->r[29]; // 803757E8
  c->lr=0x803757F0u; f_80286860(c); // 803757EC
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 803757F0
  c->r[4]=c->r[26]+c->r[0]; // 803757F4
  W16(c->r[4]+0x00000004u,c->r[3]); // 803757F8
  W16(c->r[4]+0x00000006u,c->r[24]); // 803757FC
  c->r[0]=R32(c->r[25]+0x0000004Cu); // 80375800
  c->r[0]=c->r[0]|0x00000002u; // 80375804
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80375808
  W32(c->r[25]+0x0000004Cu,c->r[0]); // 8037580C
L_80375810:;
  c->r[28]=c->r[28]+0x00000001u; // 80375810
  c->r[27]=c->r[27]+0x00000020u; // 80375814
  cmpu(c,0,c->r[28],0x00000008u); // 80375818
  if (crb(c,0)) { IRQCHK(c); goto L_80375620; } // 8037581C
  c->r[0]=0u+0x00000001u; // 80375820
  W8(c->r[13]+0xFFFF9F68u,c->r[0]); // 80375824
L_80375828:;
  c->r[11]=c->r[1]+0x00000030u; // 80375828
  c->lr=0x80375830u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8037582C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80375830
  c->lr=c->r[0]; // 80375834
  c->r[1]=c->r[1]+0x00000030u; // 80375838
  return; // 8037583C
}

// LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj
void f_80375840(Ctx* __restrict c) {
  trace_call(0x80375840u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80375840
  c->r[0]=c->lr; // 80375844
  W32(c->r[1]+0x00000034u,c->r[0]); // 80375848
  c->r[11]=c->r[1]+0x00000030u; // 8037584C
  c->lr=0x80375854u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80375850
  c->r[3]=R32(c->r[3]+0x00000000u); // 80375854
  c->r[0]=0u-c->r[3]; // 80375858
  c->r[0]=c->r[0]|c->r[3]; // 8037585C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80375860
  if (crb(c,2)) { goto L_80375974; } // 80375864
  c->r[27]=0u+0x806A0000u; // 80375868
  c->r[28]=0u+0x806A0000u; // 8037586C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80375870
  c->r[27]=c->r[27]+0x000001E0u; // 80375874
  c->r[28]=c->r[28]+0x000000C0u; // 80375878
  c->r[30]=0u+0x00000000u; // 8037587C
  c->r[29]=0u+0x00000000u; // 80375880
  c->r[31]=0u+0x00000001u; // 80375884
L_80375888:;
  c->r[4]=c->r[30]|c->r[30]; // 80375888
  c->r[3]=c->r[1]+0x00000008u; // 8037588C
  c->lr=0x80375894u; f_80367314(c); // 80375890
  cmps(c,0,(int32_t)c->r[3],0); // 80375894
  if (crb(c,2)) { goto L_8037595C; } // 80375898
  c->r[4]=c->r[30]|c->r[30]; // 8037589C
  c->r[3]=c->r[1]+0x00000008u; // 803758A0
  c->lr=0x803758A8u; f_803672AC(c); // 803758A4
  c->r[4]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 803758A8
  c->r[0]=R16(c->r[27]+0x00000060u); // 803758AC
  c->r[6]=rotl(c->r[4],0)&0x0000FFFFu; // 803758B0
  c->r[0]=c->r[0]&c->r[6]; cr0(c,c->r[0]); // 803758B4
  if (crb(c,2)) { goto L_80375918; } // 803758B8
  c->r[4]=R32(c->r[3]+0x00000000u); // 803758BC
  c->r[7]=0u+0x00000000u; // 803758C0
  c->r[0]=R32(c->r[27]+c->r[29]); // 803758C4
  c->r[8]=0u+0x00000000u; // 803758C8
  cmpu(c,0,c->r[4],c->r[0]); // 803758CC
  if (!crb(c,2)) { goto L_803758EC; } // 803758D0
  c->r[4]=c->r[27]+c->r[29]; // 803758D4
  c->r[5]=R32(c->r[3]+0x00000004u); // 803758D8
  c->r[0]=R32(c->r[4]+0x00000004u); // 803758DC
  cmpu(c,0,c->r[5],c->r[0]); // 803758E0
  if (!crb(c,2)) { goto L_803758EC; } // 803758E4
  c->r[8]=0u+0x00000001u; // 803758E8
L_803758EC:;
  cmps(c,0,(int32_t)c->r[8],0); // 803758EC
  if (crb(c,2)) { goto L_80375910; } // 803758F0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 803758F4
  c->r[5]=R32(c->r[3]+0x00000008u); // 803758F8
  c->r[4]=c->r[27]+c->r[0]; // 803758FC
  c->r[0]=R32(c->r[4]+0x00000008u); // 80375900
  cmpu(c,0,c->r[5],c->r[0]); // 80375904
  if (!crb(c,2)) { goto L_80375910; } // 80375908
  c->r[7]=0u+0x00000001u; // 8037590C
L_80375910:;
  cmps(c,0,(int32_t)c->r[7],0); // 80375910
  if (!crb(c,2)) { goto L_8037595C; } // 80375914
L_80375918:;
  c->r[5]=R16(c->r[27]+0x00000060u); // 80375918
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 8037591C
  c->r[4]=c->r[30]|c->r[30]; // 80375920
  c->r[5]=c->r[5]|c->r[6]; // 80375924
  W16(c->r[27]+0x00000060u,c->r[5]); // 80375928
  c->r[6]=c->r[27]+c->r[0]; // 8037592C
  c->r[5]=R32(c->r[3]+0x00000000u); // 80375930
  c->r[0]=R32(c->r[3]+0x00000004u); // 80375934
  W32(c->r[6]+0x00000000u,c->r[5]); // 80375938
  W32(c->r[6]+0x00000004u,c->r[0]); // 8037593C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80375940
  W32(c->r[6]+0x00000008u,c->r[0]); // 80375944
  c->lr=0x8037594Cu; f_80286B80(c); // 80375948
  c->r[3]=R8(c->r[28]+0x00000100u); // 8037594C
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 80375950
  c->r[0]=c->r[3]&~c->r[0]; // 80375954
  W8(c->r[28]+0x00000100u,c->r[0]); // 80375958
L_8037595C:;
  c->r[30]=c->r[30]+0x00000001u; // 8037595C
  c->r[29]=c->r[29]+0x0000000Cu; // 80375960
  cmpu(c,0,c->r[30],0x00000008u); // 80375964
  if (crb(c,0)) { IRQCHK(c); goto L_80375888; } // 80375968
  c->r[0]=0u+0x00000001u; // 8037596C
  W8(c->r[13]+0xFFFF9F68u,c->r[0]); // 80375970
L_80375974:;
  c->r[11]=c->r[1]+0x00000030u; // 80375974
  c->lr=0x8037597Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80375978
  c->r[0]=R32(c->r[1]+0x00000034u); // 8037597C
  c->lr=c->r[0]; // 80375980
  c->r[1]=c->r[1]+0x00000030u; // 80375984
  return; // 80375988
}

// LoadResGenMode__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResGenMode
void f_8037598C(Ctx* __restrict c) {
  trace_call(0x8037598Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8037598C
  cmps(c,0,(int32_t)c->r[3],0); // 80375990
  if (crb(c,2)) return; // 80375994
  c->r[4]=0u+0x806A0000u; // 80375998
  c->r[4]=R8(c->r[4]+0x00000040u); // 8037599C
  if (crb(c,2)) { goto L_803759AC; } // 803759A0
  c->r[0]=R8(c->r[3]+0x00000000u); // 803759A4
  goto L_803759B0; // 803759A8
L_803759AC:;
  c->r[0]=0u+0x00000000u; // 803759AC
L_803759B0:;
  cmpu(c,0,c->r[4],c->r[0]); // 803759B0
  if (crb(c,2)) { goto L_803759E4; } // 803759B4
  cmps(c,0,(int32_t)c->r[3],0); // 803759B8
  if (crb(c,2)) { goto L_803759C8; } // 803759BC
  c->r[0]=R8(c->r[3]+0x00000000u); // 803759C0
  goto L_803759CC; // 803759C4
L_803759C8:;
  c->r[0]=0u+0x00000000u; // 803759C8
L_803759CC:;
  c->r[5]=0u+0x806A0000u; // 803759CC
  c->r[4]=c->r[5]+0x00000040u; // 803759D0
  W8(c->r[5]+0x00000040u,c->r[0]); // 803759D4
  c->r[0]=R32(c->r[4]+0x00000008u); // 803759D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803759DC
  W32(c->r[4]+0x00000008u,c->r[0]); // 803759E0
L_803759E4:;
  c->r[4]=0u+0x806A0000u; // 803759E4
  cmps(c,0,(int32_t)c->r[3],0); // 803759E8
  c->r[4]=c->r[4]+0x00000040u; // 803759EC
  c->r[4]=R8(c->r[4]+0x00000001u); // 803759F0
  if (crb(c,2)) { goto L_80375A00; } // 803759F4
  c->r[0]=R8(c->r[3]+0x00000001u); // 803759F8
  goto L_80375A04; // 803759FC
L_80375A00:;
  c->r[0]=0u+0x00000000u; // 80375A00
L_80375A04:;
  cmpu(c,0,c->r[4],c->r[0]); // 80375A04
  if (crb(c,2)) { goto L_80375A38; } // 80375A08
  cmps(c,0,(int32_t)c->r[3],0); // 80375A0C
  if (crb(c,2)) { goto L_80375A1C; } // 80375A10
  c->r[5]=R8(c->r[3]+0x00000001u); // 80375A14
  goto L_80375A20; // 80375A18
L_80375A1C:;
  c->r[5]=0u+0x00000000u; // 80375A1C
L_80375A20:;
  c->r[4]=0u+0x806A0000u; // 80375A20
  c->r[4]=c->r[4]+0x00000040u; // 80375A24
  c->r[0]=R32(c->r[4]+0x00000008u); // 80375A28
  W8(c->r[4]+0x00000001u,c->r[5]); // 80375A2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 80375A30
  W32(c->r[4]+0x00000008u,c->r[0]); // 80375A34
L_80375A38:;
  c->r[4]=0u+0x806A0000u; // 80375A38
  cmps(c,0,(int32_t)c->r[3],0); // 80375A3C
  c->r[4]=c->r[4]+0x00000040u; // 80375A40
  c->r[4]=R8(c->r[4]+0x00000002u); // 80375A44
  if (crb(c,2)) { goto L_80375A54; } // 80375A48
  c->r[0]=R8(c->r[3]+0x00000002u); // 80375A4C
  goto L_80375A58; // 80375A50
L_80375A54:;
  c->r[0]=0u+0x00000000u; // 80375A54
L_80375A58:;
  cmpu(c,0,c->r[4],c->r[0]); // 80375A58
  if (crb(c,2)) { goto L_80375A8C; } // 80375A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80375A60
  if (crb(c,2)) { goto L_80375A70; } // 80375A64
  c->r[5]=R8(c->r[3]+0x00000002u); // 80375A68
  goto L_80375A74; // 80375A6C
L_80375A70:;
  c->r[5]=0u+0x00000000u; // 80375A70
L_80375A74:;
  c->r[4]=0u+0x806A0000u; // 80375A74
  c->r[4]=c->r[4]+0x00000040u; // 80375A78
  c->r[0]=R32(c->r[4]+0x00000008u); // 80375A7C
  W8(c->r[4]+0x00000002u,c->r[5]); // 80375A80
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80375A84
  W32(c->r[4]+0x00000008u,c->r[0]); // 80375A88
L_80375A8C:;
  c->r[4]=0u+0x806A0000u; // 80375A8C
  cmps(c,0,(int32_t)c->r[3],0); // 80375A90
  c->r[4]=c->r[4]+0x00000040u; // 80375A94
  c->r[4]=R8(c->r[4]+0x00000003u); // 80375A98
  if (crb(c,2)) { goto L_80375AA8; } // 80375A9C
  c->r[0]=R8(c->r[3]+0x00000003u); // 80375AA0
  goto L_80375AAC; // 80375AA4
L_80375AA8:;
  c->r[0]=0u+0x00000000u; // 80375AA8
L_80375AAC:;
  cmpu(c,0,c->r[4],c->r[0]); // 80375AAC
  if (crb(c,2)) { goto L_80375AE0; } // 80375AB0
  cmps(c,0,(int32_t)c->r[3],0); // 80375AB4
  if (crb(c,2)) { goto L_80375AC4; } // 80375AB8
  c->r[5]=R8(c->r[3]+0x00000003u); // 80375ABC
  goto L_80375AC8; // 80375AC0
L_80375AC4:;
  c->r[5]=0u+0x00000000u; // 80375AC4
L_80375AC8:;
  c->r[4]=0u+0x806A0000u; // 80375AC8
  c->r[4]=c->r[4]+0x00000040u; // 80375ACC
  c->r[0]=R32(c->r[4]+0x00000008u); // 80375AD0
  W8(c->r[4]+0x00000003u,c->r[5]); // 80375AD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80375AD8
  W32(c->r[4]+0x00000008u,c->r[0]); // 80375ADC
L_80375AE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80375AE0
  if (crb(c,2)) { goto L_80375AF0; } // 80375AE4
  c->r[5]=R32(c->r[3]+0x00000004u); // 80375AE8
  goto L_80375AF4; // 80375AEC
L_80375AF0:;
  c->r[5]=0u+0x00000003u; // 80375AF0
L_80375AF4:;
  c->r[4]=0u+0x806A0000u; // 80375AF4
  c->r[4]=c->r[4]+0x00000040u; // 80375AF8
  c->r[0]=R32(c->r[4]+0x00000004u); // 80375AFC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80375B00
  if (crb(c,2)) { goto L_80375B34; } // 80375B04
  cmps(c,0,(int32_t)c->r[3],0); // 80375B08
  if (crb(c,2)) { goto L_80375B18; } // 80375B0C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80375B10
  goto L_80375B1C; // 80375B14
L_80375B18:;
  c->r[4]=0u+0x00000003u; // 80375B18
L_80375B1C:;
  c->r[3]=0u+0x806A0000u; // 80375B1C
  c->r[3]=c->r[3]+0x00000040u; // 80375B20
  c->r[0]=R32(c->r[3]+0x00000008u); // 80375B24
  W32(c->r[3]+0x00000004u,c->r[4]); // 80375B28
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80375B2C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80375B30
L_80375B34:;
  c->r[4]=0u+0x806A0000u; // 80375B34
  c->r[4]=c->r[4]+0x00000040u; // 80375B38
  c->r[3]=R32(c->r[4]+0x00000008u); // 80375B3C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80375B40
  if (!crb(c,2)) return; // 80375B44
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFCu; // 80375B48
  c->r[0]=c->r[0]|0x00000004u; // 80375B4C
  W32(c->r[4]+0x00000008u,c->r[0]); // 80375B50
  return; // 80375B54
}

// LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev
void f_80375B58(Ctx* __restrict c) {
  trace_call(0x80375B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80375B58
  c->r[0]=c->lr; // 80375B5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80375B60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80375B64
  c->r[31]=c->r[3]|c->r[3]; // 80375B68
  W32(c->r[1]+0x00000018u,c->r[30]); // 80375B6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80375B70
  c->r[4]=R32(c->r[3]+0x00000000u); // 80375B74
  cmps(c,0,(int32_t)c->r[4],0); // 80375B78
  if (crb(c,2)) { goto L_80375D4C; } // 80375B7C
  c->r[0]=R32(c->r[13]+0xFFFF9F74u); // 80375B80
  cmpu(c,0,c->r[4],c->r[0]); // 80375B84
  if (!crb(c,2)) { goto L_80375B94; } // 80375B88
  c->r[0]=0u+0x00000001u; // 80375B8C
  goto L_80375B9C; // 80375B90
L_80375B94:;
  W32(c->r[13]+0xFFFF9F74u,c->r[4]); // 80375B94
  c->r[0]=0u+0x00000000u; // 80375B98
L_80375B9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80375B9C
  if (!crb(c,2)) { goto L_80375D4C; } // 80375BA0
  c->r[9]=0u+0x806A0000u; // 80375BA4
  c->r[8]=c->r[9]+0x00000040u; // 80375BA8
  c->r[3]=R32(c->r[8]+0x00000008u); // 80375BAC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80375BB0
  if (crb(c,2)) { goto L_80375C30; } // 80375BB4
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 80375BB8
  cmpu(c,0,c->r[0],0x00000002u); // 80375BBC
  if (!crb(c,2)) { goto L_80375C30; } // 80375BC0
  c->r[5]=R32(c->r[8]+0x00000004u); // 80375BC4
  c->r[3]=0u+0xFE080000u; // 80375BC8
  c->r[7]=0u+0xCC010000u; // 80375BCC
  c->r[4]=0u+0x00000061u; // 80375BD0
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80375BD4
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 80375BD8
  c->r[3]=c->r[2]+0xFFFFEAB0u; // 80375BDC
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80375BE0
  c->r[0]=R8(c->r[3]+c->r[5]); // 80375BE4
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 80375BE8
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 80375BEC
  c->r[3]=R8(c->r[8]+0x00000002u); // 80375BF0
  c->r[0]=R8(c->r[8]+0x00000001u); // 80375BF4
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 80375BF8
  c->r[6]=R8(c->r[8]+0x00000003u); // 80375BFC
  c->r[3]=R8(c->r[9]+0x00000040u); // 80375C00
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80375C04
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 80375C08
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 80375C0C
  c->r[0]=c->r[3]|c->r[0]; // 80375C10
  c->r[3]=c->r[6]|c->r[5]; // 80375C14
  c->r[0]=c->r[4]|c->r[0]; // 80375C18
  c->r[0]=c->r[3]|c->r[0]; // 80375C1C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 80375C20
  c->r[0]=R32(c->r[8]+0x00000008u); // 80375C24
  c->r[0]=c->r[0]|0x00000001u; // 80375C28
  W32(c->r[8]+0x00000008u,c->r[0]); // 80375C2C
L_80375C30:;
  c->r[4]=R8(c->r[13]+0xFFFF9F68u); // 80375C30
  c->r[0]=0u+0x00000000u; // 80375C34
  c->r[3]=c->r[31]|c->r[31]; // 80375C38
  W8(c->r[13]+0xFFFF9F68u,c->r[0]); // 80375C3C
  c->lr=0x80375C44u; f_80366E78(c); // 80375C40
  c->r[3]=0u+0x806A0000u; // 80375C44
  c->r[6]=R32(c->r[31]+0x00000000u); // 80375C48
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80375C4C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80375C50
  if (crb(c,2)) { goto L_80375C7C; } // 80375C54
  c->r[4]=c->r[3]+0x0000004Cu; // 80375C58
  c->r[3]=R32(c->r[6]+0x00000010u); // 80375C5C
  c->r[0]=R32(c->r[4]+0x00000064u); // 80375C60
  cmpu(c,0,c->r[3],c->r[0]); // 80375C64
  if (!crb(c,2)) { goto L_80375C7C; } // 80375C68
  c->r[3]=R32(c->r[6]+0x00000014u); // 80375C6C
  c->r[0]=R32(c->r[4]+0x00000068u); // 80375C70
  cmpu(c,0,c->r[3],c->r[0]); // 80375C74
  if (crb(c,2)) { goto L_80375CA4; } // 80375C78
L_80375C7C:;
  c->r[5]=0u+0x806A0000u; // 80375C7C
  c->r[3]=R32(c->r[6]+0x00000010u); // 80375C80
  c->r[4]=c->r[5]+0x0000004Cu; // 80375C84
  c->r[0]=R32(c->r[5]+0x0000004Cu); // 80375C88
  W32(c->r[4]+0x00000064u,c->r[3]); // 80375C8C
  c->r[0]=c->r[0]|0x00000002u; // 80375C90
  c->r[3]=R32(c->r[6]+0x00000014u); // 80375C94
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80375C98
  W32(c->r[4]+0x00000068u,c->r[3]); // 80375C9C
  W32(c->r[5]+0x0000004Cu,c->r[0]); // 80375CA0
L_80375CA4:;
  c->r[3]=0u+0x806A0000u; // 80375CA4
  c->r[4]=0u+0x806A0000u; // 80375CA8
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 80375CAC
  c->r[29]=R8(c->r[4]+0x00000040u); // 80375CB0
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 80375CB4
  if (crb(c,2)) { goto L_80375D4C; } // 80375CB8
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 80375CBC
  if (!crb(c,2)) { goto L_80375D4C; } // 80375CC0
  cmps(c,0,(int32_t)c->r[29],0); // 80375CC4
  if (crb(c,2)) { goto L_80375D4C; } // 80375CC8
  c->r[31]=c->r[3]+0x0000004Cu; // 80375CCC
  c->r[30]=0u+0x00000000u; // 80375CD0
  goto L_80375D30; // 80375CD4
L_80375CD8:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 80375CD8
  c->r[7]=c->r[31]+c->r[3]; // 80375CDC
  c->r[0]=R8(c->r[7]+0x00000064u); // 80375CE0
  cmpu(c,0,c->r[0],0x000000FFu); // 80375CE4
  if (crb(c,2)) { goto L_80375D2C; } // 80375CE8
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 80375CEC
  c->r[5]=rotl(c->r[30],3)&0x000007F8u; // 80375CF0
  c->r[4]=c->r[31]+c->r[0]; // 80375CF4
  c->r[6]=0u+0x00000000u; // 80375CF8
  c->r[4]=R16(c->r[4]+0x00000004u); // 80375CFC
  c->r[10]=c->r[31]+c->r[5]; // 80375D00
  c->r[5]=0u+0x00000000u; // 80375D04
  c->r[8]=0u+0x00000000u; // 80375D08
  W16(c->r[10]+0x00000024u,c->r[4]); // 80375D0C
  c->r[9]=0u+0x00000000u; // 80375D10
  c->r[0]=R8(c->r[7]+0x00000064u); // 80375D14
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80375D18
  c->r[7]=c->r[31]+c->r[0]; // 80375D1C
  c->r[7]=R16(c->r[7]+0x00000006u); // 80375D20
  W16(c->r[10]+0x00000026u,c->r[7]); // 80375D24
  c->lr=0x80375D2Cu; f_80373DB0(c); // 80375D28
L_80375D2C:;
  c->r[30]=c->r[30]+0x00000001u; // 80375D2C
L_80375D30:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 80375D30
  cmpu(c,0,c->r[0],c->r[29]); // 80375D34
  if (crb(c,0)) { IRQCHK(c); goto L_80375CD8; } // 80375D38
  c->r[3]=0u+0x806A0000u; // 80375D3C
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 80375D40
  c->r[0]=c->r[0]|0x00000001u; // 80375D44
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80375D48
L_80375D4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80375D4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80375D50
  c->r[30]=R32(c->r[1]+0x00000018u); // 80375D54
  c->r[29]=R32(c->r[1]+0x00000014u); // 80375D58
  c->lr=c->r[0]; // 80375D5C
  c->r[1]=c->r[1]+0x00000020u; // 80375D60
  return; // 80375D64
}

