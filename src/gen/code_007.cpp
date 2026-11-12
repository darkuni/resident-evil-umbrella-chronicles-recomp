#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800AD23C
void f_800AD23C(Ctx* __restrict c) {
  trace_call(0x800AD23Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD23C
  c->r[0]=c->lr; // 800AD240
  c->r[4]=c->r[3]+0x00000A44u; // 800AD244
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD24C
  c->r[31]=c->r[3]|c->r[3]; // 800AD250
  c->r[12]=R32(c->r[3]+0x000009ECu); // 800AD254
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AD258
  c->ctr=c->r[12]; // 800AD25C
  c->r[3]=c->r[3]+0x000009ECu; // 800AD260
  if (true) { c->lr=0x800AD268u; dispatch(c,c->ctr); } // 800AD264
  c->r[3]=c->r[31]+0x00000A60u; // 800AD268
  c->lr=0x800AD270u; f_8016AAE4(c); // 800AD26C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD274
  c->lr=c->r[0]; // 800AD278
  c->r[1]=c->r[1]+0x00000010u; // 800AD27C
  return; // 800AD280
}

// fn_800AD284
void f_800AD284(Ctx* __restrict c) {
  trace_call(0x800AD284u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD284
  c->r[0]=c->lr; // 800AD288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD28C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD290
  c->r[31]=c->r[3]|c->r[3]; // 800AD294
  c->lr=0x800AD29Cu; f_800CF888(c); // 800AD298
  c->r[0]=R32(c->r[31]+0x00000028u); // 800AD29C
  c->r[3]=c->r[31]+0x000008D0u; // 800AD2A0
  cmpu(c,0,c->r[0],c->r[3]); // 800AD2A4
  if (!crb(c,2)) { goto L_800AD2C0; } // 800AD2A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AD2AC
  c->r[4]=c->r[31]+0x00000A44u; // 800AD2B0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AD2B4
  c->ctr=c->r[12]; // 800AD2B8
  if (true) { c->lr=0x800AD2C0u; dispatch(c,c->ctr); } // 800AD2BC
L_800AD2C0:;
  c->r[12]=R32(c->r[31]+0x00000010u); // 800AD2C0
  c->r[3]=c->r[31]|c->r[31]; // 800AD2C4
  c->r[12]=R32(c->r[12]+0x00000338u); // 800AD2C8
  c->ctr=c->r[12]; // 800AD2CC
  if (true) { c->lr=0x800AD2D4u; dispatch(c,c->ctr); } // 800AD2D0
  c->r[12]=R32(c->r[31]+0x000009ECu); // 800AD2D4
  c->r[4]=c->r[3]|c->r[3]; // 800AD2D8
  c->r[3]=c->r[31]+0x000009ECu; // 800AD2DC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AD2E0
  c->ctr=c->r[12]; // 800AD2E4
  if (true) { c->lr=0x800AD2ECu; dispatch(c,c->ctr); } // 800AD2E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD2EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD2F0
  c->lr=c->r[0]; // 800AD2F4
  c->r[1]=c->r[1]+0x00000010u; // 800AD2F8
  return; // 800AD2FC
}

// fn_800AD300
void f_800AD300(Ctx* __restrict c) {
  trace_call(0x800AD300u);
  c->r[3]=c->r[3]+0x00000A44u; // 800AD300
  return; // 800AD304
}

// fn_800AD308
void f_800AD308(Ctx* __restrict c) {
  trace_call(0x800AD308u);
  {uint32_t ea=c->r[1]+0xFFFFF0D0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD308
  c->r[0]=c->lr; // 800AD30C
  W32(c->r[1]+0x00000F34u,c->r[0]); // 800AD310
  W32(c->r[1]+0x00000F2Cu,c->r[31]); // 800AD314
  c->r[31]=c->r[3]|c->r[3]; // 800AD318
  c->r[3]=c->r[1]+0x000000F8u; // 800AD31C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800AD320
  c->r[4]=c->r[31]+0x000008D0u; // 800AD324
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AD328
  c->ctr=c->r[12]; // 800AD32C
  if (true) { c->lr=0x800AD334u; dispatch(c,c->ctr); } // 800AD330
  c->r[0]=0u+0x00000006u; // 800AD334
  c->r[5]=c->r[1]+0x000000C4u; // 800AD338
  c->r[4]=c->r[31]+0x00000940u; // 800AD33C
  c->ctr=c->r[0]; // 800AD340
L_800AD344:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AD344
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AD348
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AD34C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AD350
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD344; } // 800AD354
  c->r[3]=c->r[1]+0x000000F8u; // 800AD358
  c->r[4]=c->r[1]+0x000000C8u; // 800AD35C
  c->r[5]=c->r[1]+0x00000098u; // 800AD360
  c->lr=0x800AD368u; f_802646E0(c); // 800AD364
  c->r[3]=c->r[1]+0x00000128u; // 800AD368
  c->lr=0x800AD370u; f_800462E8(c); // 800AD36C
  c->r[0]=0u+0x00000006u; // 800AD370
  c->r[5]=c->r[1]+0x00000004u; // 800AD374
  c->r[4]=c->r[1]+0x000000C4u; // 800AD378
  c->ctr=c->r[0]; // 800AD37C
L_800AD380:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AD380
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AD384
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AD388
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AD38C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD380; } // 800AD390
  c->r[0]=0u+0x00000006u; // 800AD394
  c->r[5]=c->r[1]+0x00000034u; // 800AD398
  c->r[4]=c->r[1]+0x000000F4u; // 800AD39C
  c->ctr=c->r[0]; // 800AD3A0
L_800AD3A4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AD3A4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AD3A8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AD3AC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AD3B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD3A4; } // 800AD3B4
  {uint32_t ea=c->r[31]+0x000004C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD3B8
  c->r[3]=c->r[1]+0x00000068u; // 800AD3BC
  {uint32_t ea=c->r[31]+0x000004CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AD3C0
  c->r[4]=c->r[1]+0x00000128u; // 800AD3C4
  c->r[5]=c->r[1]+0x00000038u; // 800AD3C8
  c->r[6]=c->r[1]+0x00000008u; // 800AD3CC
  c->lr=0x800AD3D4u; f_80180C24(c); // 800AD3D0
  c->r[0]=0u+0x00000006u; // 800AD3D4
  c->r[5]=c->r[1]+0x000000C4u; // 800AD3D8
  c->r[4]=c->r[1]+0x00000064u; // 800AD3DC
  c->ctr=c->r[0]; // 800AD3E0
L_800AD3E4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AD3E4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AD3E8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AD3EC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AD3F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD3E4; } // 800AD3F4
  c->r[3]=c->r[31]+0x000008ECu; // 800AD3F8
  c->r[4]=c->r[1]+0x000000C8u; // 800AD3FC
  c->lr=0x800AD404u; f_8016A37C(c); // 800AD400
  c->r[3]=c->r[1]+0x00000128u; // 800AD404
  c->r[4]=0u+0xFFFFFFFFu; // 800AD408
  c->lr=0x800AD410u; f_80046394(c); // 800AD40C
  c->r[0]=R32(c->r[1]+0x00000F34u); // 800AD410
  c->r[31]=R32(c->r[1]+0x00000F2Cu); // 800AD414
  c->lr=c->r[0]; // 800AD418
  c->r[1]=c->r[1]+0x00000F30u; // 800AD41C
  return; // 800AD420
}

// fn_800AD424
void f_800AD424(Ctx* __restrict c) {
  trace_call(0x800AD424u);
  c->r[0]=0u+0x0000000Cu; // 800AD424
  c->r[8]=0u+0x00000000u; // 800AD428
  c->r[4]=0u+0x00000000u; // 800AD42C
  c->r[5]=0u+0xFFFFFFFFu; // 800AD430
  c->ctr=c->r[0]; // 800AD434
L_800AD438:;
  c->r[7]=c->r[3]+c->r[4]; // 800AD438
  c->r[6]=R32(c->r[7]+0x00001E88u); // 800AD43C
  cmps(c,0,(int32_t)c->r[6],0); // 800AD440
  if (!crb(c,1)) { goto L_800AD454; } // 800AD444
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800AD448
  W32(c->r[7]+0x00001E88u,c->r[0]); // 800AD44C
  goto L_800AD45C; // 800AD450
L_800AD454:;
  W32(c->r[7]+0x00001E84u,c->r[8]); // 800AD454
  W32(c->r[7]+0x00001E88u,c->r[5]); // 800AD458
L_800AD45C:;
  c->r[4]=c->r[4]+0x0000000Cu; // 800AD45C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD438; } // 800AD460
  return; // 800AD464
}

// fn_800AD468
void f_800AD468(Ctx* __restrict c) {
  trace_call(0x800AD468u);
  c->r[0]=0u+0x0000000Cu; // 800AD468
  c->r[5]=0u+0x00000000u; // 800AD46C
  c->ctr=c->r[0]; // 800AD470
L_800AD474:;
  c->r[6]=c->r[3]+c->r[5]; // 800AD474
  c->r[0]=R32(c->r[6]+0x00001E84u); // 800AD478
  cmpu(c,0,c->r[4],c->r[0]); // 800AD47C
  if (!crb(c,2)) { goto L_800AD48C; } // 800AD480
  c->r[3]=c->r[6]+0x00001E84u; // 800AD484
  return; // 800AD488
L_800AD48C:;
  c->r[5]=c->r[5]+0x0000000Cu; // 800AD48C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD474; } // 800AD490
  c->r[3]=0u+0x00000000u; // 800AD494
  return; // 800AD498
}

// fn_800AD49C
void f_800AD49C(Ctx* __restrict c) {
  trace_call(0x800AD49Cu);
  c->r[0]=0u+0x0000000Bu; // 800AD49C
  c->r[7]=0u+0x00000084u; // 800AD4A0
  c->ctr=c->r[0]; // 800AD4A4
L_800AD4A8:;
  c->r[8]=c->r[3]+c->r[7]; // 800AD4A8
  c->r[7]=c->r[7]+0xFFFFFFF4u; // 800AD4AC
  c->r[0]=R32(c->r[8]+0x00001E78u); // 800AD4B0
  W32(c->r[8]+0x00001E84u,c->r[0]); // 800AD4B4
  c->r[0]=R32(c->r[8]+0x00001E7Cu); // 800AD4B8
  W32(c->r[8]+0x00001E88u,c->r[0]); // 800AD4BC
  c->r[0]=R32(c->r[8]+0x00001E80u); // 800AD4C0
  W32(c->r[8]+0x00001E8Cu,c->r[0]); // 800AD4C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AD4A8; } // 800AD4C8
  W32(c->r[3]+0x00001E84u,c->r[4]); // 800AD4CC
  W8(c->r[3]+0x00001E8Cu,c->r[5]); // 800AD4D0
  W32(c->r[3]+0x00001E88u,c->r[6]); // 800AD4D4
  return; // 800AD4D8
}

// fn_800AD4DC
void f_800AD4DC(Ctx* __restrict c) {
  trace_call(0x800AD4DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD4DC
  c->r[0]=c->lr; // 800AD4E0
  {uint32_t ea=c->r[2]+0xFFFF8D64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD4E4
  c->r[5]=0u+0x00000007u; // 800AD4E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD4EC
  c->r[0]=0u+0x00000000u; // 800AD4F0
  c->r[6]=0u+0x00000003u; // 800AD4F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD4F8
  c->r[31]=c->r[3]|c->r[3]; // 800AD4FC
  W8(c->r[3]+0x00001E80u,c->r[0]); // 800AD500
  c->r[4]=R32(c->r[3]+0x00000014u); // 800AD504
  {uint32_t ea=c->r[3]+0x00001E7Cu; WF32(ea,c->f[0]);} // 800AD508
  c->r[3]=c->r[3]+0x000008D0u; // 800AD50C
  c->lr=0x800AD514u; f_801DFB08(c); // 800AD510
  c->r[3]=c->r[31]+0x000008D0u; // 800AD514
  c->r[4]=c->r[31]+0x00000830u; // 800AD518
  c->lr=0x800AD520u; f_801DF848(c); // 800AD51C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD520
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD524
  c->lr=c->r[0]; // 800AD528
  c->r[1]=c->r[1]+0x00000010u; // 800AD52C
  return; // 800AD530
}

// fn_800AD534
void f_800AD534(Ctx* __restrict c) {
  trace_call(0x800AD534u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD534
  c->r[0]=c->lr; // 800AD538
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD53C
  c->r[0]=0u+0x00000030u; // 800AD540
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD544
  c->r[30]=c->r[3]|c->r[3]; // 800AD548
  c->r[31]=c->r[4]|c->r[4]; // 800AD54C
  c->r[3]=c->r[3]+0x00000C88u; // 800AD550
  c->r[5]=R32(c->r[4]+0x00000000u); // 800AD554
  c->r[4]=R32(c->r[4]+0x00000004u); // 800AD558
  c->r[5]=divwu(c->r[5],c->r[0]); // 800AD55C
  c->lr=0x800AD564u; f_800AD590(c); // 800AD560
  cmps(c,0,(int32_t)c->r[3],0); // 800AD564
  if (crb(c,2)) { goto L_800AD57C; } // 800AD568
  c->r[5]=R32(c->r[31]+0x00000008u); // 800AD56C
  c->r[3]=c->r[30]+0x00000C88u; // 800AD570
  c->r[4]=c->r[30]+0x000008ECu; // 800AD574
  c->lr=0x800AD57Cu; f_800AD5C8(c); // 800AD578
L_800AD57C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD57C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD580
  c->lr=c->r[0]; // 800AD584
  c->r[1]=c->r[1]+0x00000010u; // 800AD588
  return; // 800AD58C
}

// fn_800AD590
void f_800AD590(Ctx* __restrict c) {
  trace_call(0x800AD590u);
  c->r[0]=R32(c->r[3]+0x00000010u); // 800AD590
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800AD594
  if (!crb(c,1)) { goto L_800AD5C0; } // 800AD598
  c->r[6]=0u+0x00000000u; // 800AD59C
  c->r[0]=0u+0xFFFFFFFFu; // 800AD5A0
  W32(c->r[3]+0x00000000u,c->r[6]); // 800AD5A4
  W32(c->r[3]+0x00000004u,c->r[6]); // 800AD5A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800AD5AC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800AD5B0
  W32(c->r[3]+0x00000010u,c->r[5]); // 800AD5B4
  c->r[3]=0u+0x00000001u; // 800AD5B8
  return; // 800AD5BC
L_800AD5C0:;
  c->r[3]=0u+0x00000000u; // 800AD5C0
  return; // 800AD5C4
}

// fn_800AD5C8
void f_800AD5C8(Ctx* __restrict c) {
  trace_call(0x800AD5C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD5C8
  c->r[0]=c->lr; // 800AD5CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AD5D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD5D4
  c->r[26]=c->r[3]|c->r[3]; // 800AD5D8
  c->r[27]=c->r[4]|c->r[4]; // 800AD5DC
  c->r[28]=c->r[5]|c->r[5]; // 800AD5E0
  c->r[29]=0u+0x00000000u; // 800AD5E4
  c->r[31]=0u+0x00000000u; // 800AD5E8
  W32(c->r[3]+0x00000014u,c->r[5]); // 800AD5EC
  goto L_800AD634; // 800AD5F0
L_800AD5F4:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800AD5F4
  c->r[4]=c->r[27]|c->r[27]; // 800AD5F8
  c->r[5]=c->r[28]|c->r[28]; // 800AD5FC
  c->r[30]=c->r[0]+c->r[31]; // 800AD600
  c->r[3]=c->r[30]+0x00000004u; // 800AD604
  c->lr=0x800AD60Cu; f_800AD654(c); // 800AD608
  c->r[4]=c->r[27]|c->r[27]; // 800AD60C
  c->r[5]=c->r[28]|c->r[28]; // 800AD610
  c->r[3]=c->r[30]+0x0000000Cu; // 800AD614
  c->lr=0x800AD61Cu; f_800AD654(c); // 800AD618
  c->r[4]=c->r[27]|c->r[27]; // 800AD61C
  c->r[5]=c->r[28]|c->r[28]; // 800AD620
  c->r[3]=c->r[30]+0x00000014u; // 800AD624
  c->lr=0x800AD62Cu; f_800AD654(c); // 800AD628
  c->r[29]=c->r[29]+0x00000001u; // 800AD62C
  c->r[31]=c->r[31]+0x00000030u; // 800AD630
L_800AD634:;
  c->r[0]=R32(c->r[26]+0x00000010u); // 800AD634
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800AD638
  if (crb(c,0)) { IRQCHK(c); goto L_800AD5F4; } // 800AD63C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD640
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AD644
  c->lr=c->r[0]; // 800AD648
  c->r[1]=c->r[1]+0x00000020u; // 800AD64C
  return; // 800AD650
}

// fn_800AD654
void f_800AD654(Ctx* __restrict c) {
  trace_call(0x800AD654u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD654
  c->r[0]=c->lr; // 800AD658
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AD65C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD660
  c->r[31]=c->r[3]|c->r[3]; // 800AD664
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AD668
  cmps(c,0,(int32_t)c->r[0],0); // 800AD66C
  if (!crb(c,0)) { goto L_800AD6A0; } // 800AD670
  c->r[0]=R32(c->r[3]+0x00000004u); // 800AD674
  {uint32_t ea=c->r[5]+c->r[0]; c->r[0]=R8(ea); c->r[5]=ea;} // 800AD678
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800AD67C
  if (!crb(c,2)) { goto L_800AD690; } // 800AD680
  c->r[0]=0u+0xFFFFFFFFu; // 800AD684
  W32(c->r[3]+0x00000000u,c->r[0]); // 800AD688
  goto L_800AD6A0; // 800AD68C
L_800AD690:;
  c->r[3]=c->r[4]|c->r[4]; // 800AD690
  c->r[4]=c->r[5]|c->r[5]; // 800AD694
  c->lr=0x800AD69Cu; f_80075440(c); // 800AD698
  W32(c->r[31]+0x00000000u,c->r[3]); // 800AD69C
L_800AD6A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AD6A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD6A4
  c->lr=c->r[0]; // 800AD6A8
  c->r[1]=c->r[1]+0x00000010u; // 800AD6AC
  return; // 800AD6B0
}

// fn_800AD6B4
void f_800AD6B4(Ctx* __restrict c) {
  trace_call(0x800AD6B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD6B4
  c->r[0]=c->lr; // 800AD6B8
  c->r[6]=0u+0x756E0000u; // 800AD6BC
  c->r[5]=0u+0x73740000u; // 800AD6C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AD6C4
  c->r[7]=c->r[6]+0x00006964u; // 800AD6C8
  c->r[8]=c->r[4]+0x00000008u; // 800AD6CC
  c->r[6]=c->r[5]+0x00007264u; // 800AD6D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AD6D4
  c->r[31]=c->r[3]|c->r[3]; // 800AD6D8
  goto L_800AD724; // 800AD6DC
L_800AD6E0:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 800AD6E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 800AD6E4
  if (crb(c,2)) { goto L_800AD6FC; } // 800AD6E8
  if (!crb(c,0)) { goto L_800AD718; } // 800AD6EC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 800AD6F0
  if (crb(c,2)) { goto L_800AD710; } // 800AD6F4
  goto L_800AD718; // 800AD6F8
L_800AD6FC:;
  c->r[0]=c->r[8]+0x00000008u; // 800AD6FC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800AD700
  c->r[0]=R32(c->r[8]+0x00000004u); // 800AD704
  W32(c->r[1]+0x00000008u,c->r[0]); // 800AD708
  goto L_800AD718; // 800AD70C
L_800AD710:;
  c->r[0]=c->r[8]+0x00000008u; // 800AD710
  W32(c->r[1]+0x00000010u,c->r[0]); // 800AD714
L_800AD718:;
  c->r[0]=R32(c->r[8]+0x00000004u); // 800AD718
  c->r[3]=c->r[8]+c->r[0]; // 800AD71C
  c->r[8]=c->r[3]+0x00000008u; // 800AD720
L_800AD724:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AD724
  c->r[5]=c->r[8]-c->r[4]; // 800AD728
  c->r[0]=c->r[3]+0x00000008u; // 800AD72C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800AD730
  if (crb(c,0)) { IRQCHK(c); goto L_800AD6E0; } // 800AD734
  c->r[3]=c->r[31]|c->r[31]; // 800AD738
  c->r[4]=c->r[1]+0x00000008u; // 800AD73C
  c->lr=0x800AD744u; f_800AD534(c); // 800AD740
  c->r[5]=R32(c->r[1]+0x00000008u); // 800AD744
  c->r[0]=0u+0x00000030u; // 800AD748
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800AD74C
  c->r[3]=c->r[31]+0x00000C88u; // 800AD750
  c->r[5]=divwu(c->r[5],c->r[0]); // 800AD754
  c->lr=0x800AD75Cu; f_800AD590(c); // 800AD758
  cmps(c,0,(int32_t)c->r[3],0); // 800AD75C
  if (crb(c,2)) { goto L_800AD774; } // 800AD760
  c->r[5]=R32(c->r[1]+0x00000010u); // 800AD764
  c->r[3]=c->r[31]+0x00000C88u; // 800AD768
  c->r[4]=c->r[31]+0x000008ECu; // 800AD76C
  c->lr=0x800AD774u; f_800AD5C8(c); // 800AD770
L_800AD774:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AD774
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AD778
  c->lr=c->r[0]; // 800AD77C
  c->r[1]=c->r[1]+0x00000020u; // 800AD780
  return; // 800AD784
}

// fn_800AD788
void f_800AD788(Ctx* __restrict c) {
  trace_call(0x800AD788u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD788
  c->r[0]=c->lr; // 800AD78C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800AD790
  {uint32_t ea=c->r[1]+0x00000080u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800AD794
  c->r[31]=c->r[8]|c->r[8]; // 800AD798
  c->r[29]=c->r[4]|c->r[4]; // 800AD79C
  c->r[30]=c->r[7]|c->r[7]; // 800AD7A0
  c->r[8]=c->r[9]|c->r[9]; // 800AD7A4
  c->r[28]=c->r[3]|c->r[3]; // 800AD7A8
  c->r[9]=c->r[10]|c->r[10]; // 800AD7AC
  c->r[7]=0u+0x00000000u; // 800AD7B0
  W32(c->r[3]+0x00000888u,c->r[31]); // 800AD7B4
  c->r[4]=R32(c->r[3]+0x00000014u); // 800AD7B8
  c->r[12]=R32(c->r[3]+0x000008D0u); // 800AD7BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 800AD7C0
  c->ctr=c->r[12]; // 800AD7C4
  c->r[3]=c->r[3]+0x000008D0u; // 800AD7C8
  if (true) { c->lr=0x800AD7D0u; dispatch(c,c->ctr); } // 800AD7CC
  c->r[5]=R32(c->r[28]+0x00000000u); // 800AD7D0
  c->r[3]=c->r[28]+0x000008D0u; // 800AD7D4
  c->r[0]=R32(c->r[28]+0x00000004u); // 800AD7D8
  c->r[4]=c->r[1]+0x00000008u; // 800AD7DC
  W32(c->r[1]+0x00000008u,c->r[5]); // 800AD7E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800AD7E4
  c->lr=0x800AD7ECu; f_801E075C(c); // 800AD7E8
  cmps(c,0,(int32_t)c->r[31],0); // 800AD7EC
  if (crb(c,2)) { goto L_800AD824; } // 800AD7F0
  c->r[4]=c->r[31]|c->r[31]; // 800AD7F4
  c->r[3]=c->r[1]+0x00000010u; // 800AD7F8
  c->lr=0x800AD800u; f_801328F8(c); // 800AD7FC
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800AD800
  c->r[3]=c->r[28]+0x000008D0u; // 800AD804
  c->r[4]=c->r[1]+0x00000010u; // 800AD808
  c->r[12]=R32(c->r[12]+0x00000014u); // 800AD80C
  c->ctr=c->r[12]; // 800AD810
  if (true) { c->lr=0x800AD818u; dispatch(c,c->ctr); } // 800AD814
  c->r[3]=c->r[1]+0x00000010u; // 800AD818
  c->r[4]=0u+0xFFFFFFFFu; // 800AD81C
  c->lr=0x800AD824u; f_80132958(c); // 800AD820
L_800AD824:;
  c->r[4]=R32(c->r[28]+0x000008D8u); // 800AD824
  c->r[3]=c->r[13]+0xFFFF9600u; // 800AD828
  c->lr=0x800AD830u; f_800ACDA0(c); // 800AD82C
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800AD830
  c->r[3]=c->r[28]+0x000008D0u; // 800AD834
  c->r[4]=c->r[29]|c->r[29]; // 800AD838
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800AD83C
  c->ctr=c->r[12]; // 800AD840
  if (true) { c->lr=0x800AD848u; dispatch(c,c->ctr); } // 800AD844
  c->r[3]=c->r[28]+0x000008D0u; // 800AD848
  c->r[4]=0u+0x000000E5u; // 800AD84C
  c->r[5]=0u+0x000000E5u; // 800AD850
  c->lr=0x800AD858u; f_8002B9BC(c); // 800AD854
  cmps(c,0,(int32_t)c->r[30],0); // 800AD858
  if (crb(c,0)) { goto L_800AD894; } // 800AD85C
  c->r[3]=c->r[28]|c->r[28]; // 800AD860
  c->r[4]=c->r[28]+0x00000EDCu; // 800AD864
  c->r[5]=0u+0x00000000u; // 800AD868
  c->lr=0x800AD870u; f_80076080(c); // 800AD86C
  c->r[4]=c->r[30]|c->r[30]; // 800AD870
  c->r[3]=c->r[28]+0x00000EDCu; // 800AD874
  c->lr=0x800AD87Cu; f_80064778(c); // 800AD878
  c->r[12]=R32(c->r[28]+0x00000EDCu); // 800AD87C
  c->r[3]=c->r[28]+0x00000EDCu; // 800AD880
  c->r[4]=c->r[28]+0x000008D0u; // 800AD884
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AD888
  c->ctr=c->r[12]; // 800AD88C
  if (true) { c->lr=0x800AD894u; dispatch(c,c->ctr); } // 800AD890
L_800AD894:;
  c->r[3]=c->r[28]+0x00001054u; // 800AD894
  c->r[4]=c->r[28]+0x000008D0u; // 800AD898
  c->lr=0x800AD8A0u; f_80181568(c); // 800AD89C
  c->r[0]=0u+0x00000000u; // 800AD8A0
  W32(c->r[28]+0x0000105Cu,c->r[0]); // 800AD8A4
  {uint32_t ea=c->r[1]+0x00000080u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800AD8A8
  c->r[0]=R32(c->r[1]+0x00000094u); // 800AD8AC
  c->lr=c->r[0]; // 800AD8B0
  c->r[1]=c->r[1]+0x00000090u; // 800AD8B4
  return; // 800AD8B8
}

// fn_800AD8BC
void f_800AD8BC(Ctx* __restrict c) {
  trace_call(0x800AD8BCu);
  c->r[4]=R32(c->r[3]+0x00000014u); // 800AD8BC
  c->r[3]=c->r[3]+0x000008D0u; // 800AD8C0
  f_80031698(c); return; // 800AD8C4
}

// fn_800AD8C8
void f_800AD8C8(Ctx* __restrict c) {
  trace_call(0x800AD8C8u);
  f_800CEE48(c); return; // 800AD8C8
}

// fn_800AD8CC
void f_800AD8CC(Ctx* __restrict c) {
  trace_call(0x800AD8CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AD8CC
  c->r[0]=c->lr; // 800AD8D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AD8D4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800AD8D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800AD8DC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800AD8E0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800AD8E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AD8E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AD8EC
  c->r[30]=c->r[3]|c->r[3]; // 800AD8F0
  c->lr=0x800AD8F8u; f_801AEFEC(c); // 800AD8F4
  c->f[30]=c->f[1]; // 800AD8F8
  {uint32_t ea=c->r[30]+0x00001E7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AD8FC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD900
  fcmp(c,0,c->f[1],c->f[0]); // 800AD904
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AD908
  if (!crb(c,2)) { goto L_800AD988; } // 800AD90C
  c->r[3]=R32(c->r[30]+0x00000974u); // 800AD910
  c->r[31]=R32(c->r[3]+0x00000000u); // 800AD914
  c->r[3]=c->r[31]|c->r[31]; // 800AD918
  c->lr=0x800AD920u; f_800752CC(c); // 800AD91C
  c->f[31]=c->f[1]; // 800AD920
  c->r[3]=c->r[31]|c->r[31]; // 800AD924
  c->lr=0x800AD92Cu; f_80165E24(c); // 800AD928
  c->f[1]=c->ps1[1]=S(std::fma(c->f[30],c->f[1],c->f[31])); // 800AD92C
  {uint32_t ea=c->r[30]+0x00001E7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD930
  fcmp(c,0,c->f[0],c->f[1]); // 800AD934
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800AD938
  if (!crb(c,2)) { goto L_800AD988; } // 800AD93C
  c->r[3]=R32(c->r[30]+0x00000974u); // 800AD940
  c->r[3]=R32(c->r[3]+0x00000000u); // 800AD944
  c->lr=0x800AD94Cu; f_80165E24(c); // 800AD948
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800AD94C
  fcmp(c,0,c->f[1],c->f[30]); // 800AD950
  if (!crb(c,1)) { goto L_800AD980; } // 800AD954
  c->r[3]=R32(c->r[30]+0x00000974u); // 800AD958
  c->r[31]=R32(c->r[3]+0x00000000u); // 800AD95C
  c->r[3]=c->r[31]|c->r[31]; // 800AD960
  c->lr=0x800AD968u; f_80165E24(c); // 800AD964
  c->f[31]=c->f[1]; // 800AD968
  c->r[3]=c->r[31]|c->r[31]; // 800AD96C
  c->lr=0x800AD974u; f_800752CC(c); // 800AD970
  {uint32_t ea=c->r[30]+0x00001E7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AD974
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800AD978
  c->f[30]=c->ps1[30]=S(c->f[0]/c->f[31]); // 800AD97C
L_800AD980:;
  c->r[0]=0u+0x00000001u; // 800AD980
  W8(c->r[30]+0x00001E80u,c->r[0]); // 800AD984
L_800AD988:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800AD988
  c->f[1]=c->f[30]; // 800AD98C
  c->r[3]=c->r[30]+0x000008D0u; // 800AD990
  c->r[4]=0u+0x00000000u; // 800AD994
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 800AD998
  c->ctr=c->r[12]; // 800AD99C
  if (true) { c->lr=0x800AD9A4u; dispatch(c,c->ctr); } // 800AD9A0
  c->r[12]=R32(c->r[30]+0x00000010u); // 800AD9A4
  c->r[3]=c->r[30]|c->r[30]; // 800AD9A8
  c->r[12]=R32(c->r[12]+0x00000304u); // 800AD9AC
  c->ctr=c->r[12]; // 800AD9B0
  if (true) { c->lr=0x800AD9B8u; dispatch(c,c->ctr); } // 800AD9B4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800AD9B8
  c->r[3]=c->r[30]+0x000008ECu; // 800AD9BC
  c->lr=0x800AD9C4u; f_8016AA10(c); // 800AD9C0
  c->r[12]=R32(c->r[30]+0x00000FF8u); // 800AD9C4
  c->r[3]=c->r[30]+0x00000FF8u; // 800AD9C8
  c->r[4]=c->r[30]+0x000008D0u; // 800AD9CC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AD9D0
  c->ctr=c->r[12]; // 800AD9D4
  if (true) { c->lr=0x800AD9DCu; dispatch(c,c->ctr); } // 800AD9D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800AD9DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800AD9E0
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800AD9E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800AD9E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AD9EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AD9F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AD9F4
  c->lr=c->r[0]; // 800AD9F8
  c->r[1]=c->r[1]+0x00000030u; // 800AD9FC
  return; // 800ADA00
}

// fn_800ADA04
void f_800ADA04(Ctx* __restrict c) {
  trace_call(0x800ADA04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADA04
  c->r[0]=c->lr; // 800ADA08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADA0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADA10
  c->r[31]=c->r[3]|c->r[3]; // 800ADA14
  c->r[3]=c->r[3]+0x000008ECu; // 800ADA18
  c->lr=0x800ADA20u; f_8016AAE4(c); // 800ADA1C
  c->r[5]=R32(c->r[31]+0x00000C90u); // 800ADA20
  c->r[4]=c->r[31]+0x000008ECu; // 800ADA24
  cmps(c,0,(int32_t)c->r[5],0); // 800ADA28
  if (crb(c,0)) { goto L_800ADA4C; } // 800ADA2C
  c->r[3]=R32(c->r[4]+0x00000088u); // 800ADA30
  c->r[3]=R32(c->r[3]+0x00000000u); // 800ADA34
  c->r[0]=R32(c->r[3]+0x00000018u); // 800ADA38
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800ADA3C
  if (crb(c,2)) { goto L_800ADA4C; } // 800ADA40
  c->r[3]=c->r[31]+0x00000C88u; // 800ADA44
  c->lr=0x800ADA4Cu; f_800BC154(c); // 800ADA48
L_800ADA4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADA4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADA50
  c->lr=c->r[0]; // 800ADA54
  c->r[1]=c->r[1]+0x00000010u; // 800ADA58
  return; // 800ADA5C
}

// fn_800ADA60
void f_800ADA60(Ctx* __restrict c) {
  trace_call(0x800ADA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADA60
  c->r[0]=c->lr; // 800ADA64
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ADA68
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800ADA6C
  c->r[31]=c->r[3]|c->r[3]; // 800ADA70
  c->lr=0x800ADA78u; f_80128B5C(c); // 800ADA74
  c->r[4]=c->r[3]|c->r[3]; // 800ADA78
  c->r[3]=c->r[1]+0x00000008u; // 800ADA7C
  c->r[4]=c->r[4]+0x00000020u; // 800ADA80
  c->lr=0x800ADA88u; f_8003F484(c); // 800ADA84
  c->r[3]=c->r[1]+0x00000014u; // 800ADA88
  c->r[4]=c->r[1]+0x00000008u; // 800ADA8C
  c->lr=0x800ADA94u; f_8003F468(c); // 800ADA90
  c->r[3]=c->r[31]+0x000008D0u; // 800ADA94
  c->lr=0x800ADA9Cu; f_80030FBC(c); // 800ADA98
  cmps(c,0,(int32_t)c->r[3],0); // 800ADA9C
  if (crb(c,2)) { goto L_800ADB78; } // 800ADAA0
  c->r[3]=c->r[31]+0x000008D0u; // 800ADAA4
  c->lr=0x800ADAACu; f_80030FBC(c); // 800ADAA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ADAAC
  c->r[4]=c->r[1]+0x00000014u; // 800ADAB0
  c->r[12]=R32(c->r[12]+0x00000058u); // 800ADAB4
  c->ctr=c->r[12]; // 800ADAB8
  if (true) { c->lr=0x800ADAC0u; dispatch(c,c->ctr); } // 800ADABC
  c->r[3]=c->r[31]+0x000008D0u; // 800ADAC0
  c->lr=0x800ADAC8u; f_80030FBC(c); // 800ADAC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ADAC8
  c->r[4]=0u+0x00000000u; // 800ADACC
  c->r[5]=0u+0x00000000u; // 800ADAD0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800ADAD4
  c->ctr=c->r[12]; // 800ADAD8
  if (true) { c->lr=0x800ADAE0u; dispatch(c,c->ctr); } // 800ADADC
  c->r[3]=c->r[31]+0x000008D0u; // 800ADAE0
  c->lr=0x800ADAE8u; f_80030FBC(c); // 800ADAE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ADAE8
  c->r[4]=0u+0x00000000u; // 800ADAEC
  c->r[5]=0u+0x00000001u; // 800ADAF0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800ADAF4
  c->ctr=c->r[12]; // 800ADAF8
  if (true) { c->lr=0x800ADB00u; dispatch(c,c->ctr); } // 800ADAFC
  c->r[3]=c->r[31]+0x000008D0u; // 800ADB00
  c->lr=0x800ADB08u; f_80030FBC(c); // 800ADB04
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ADB08
  c->r[4]=0u+0x00000001u; // 800ADB0C
  c->r[5]=0u+0x00000002u; // 800ADB10
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800ADB14
  c->ctr=c->r[12]; // 800ADB18
  if (true) { c->lr=0x800ADB20u; dispatch(c,c->ctr); } // 800ADB1C
  c->r[3]=c->r[31]+0x000008D0u; // 800ADB20
  c->lr=0x800ADB28u; f_80030FBC(c); // 800ADB24
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ADB28
  c->r[4]=0u+0x00000001u; // 800ADB2C
  c->r[5]=0u+0x00000003u; // 800ADB30
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800ADB34
  c->ctr=c->r[12]; // 800ADB38
  if (true) { c->lr=0x800ADB40u; dispatch(c,c->ctr); } // 800ADB3C
  c->r[3]=c->r[31]+0x000008D0u; // 800ADB40
  c->lr=0x800ADB48u; f_80030FBC(c); // 800ADB44
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ADB48
  c->r[4]=0u+0x00000000u; // 800ADB4C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800ADB50
  c->ctr=c->r[12]; // 800ADB54
  if (true) { c->lr=0x800ADB5Cu; dispatch(c,c->ctr); } // 800ADB58
  c->r[3]=c->r[31]+0x000008D0u; // 800ADB5C
  c->lr=0x800ADB64u; f_80030FBC(c); // 800ADB60
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ADB64
  c->r[4]=0u+0x00000000u; // 800ADB68
  c->r[12]=R32(c->r[12]+0x00000044u); // 800ADB6C
  c->ctr=c->r[12]; // 800ADB70
  if (true) { c->lr=0x800ADB78u; dispatch(c,c->ctr); } // 800ADB74
L_800ADB78:;
  c->r[3]=c->r[31]|c->r[31]; // 800ADB78
  c->lr=0x800ADB80u; f_800CEE48(c); // 800ADB7C
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADB80
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800ADB84
  fcmp(c,0,c->f[1],c->f[0]); // 800ADB88
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800ADB8C
  if (!crb(c,2)) { goto L_800ADBAC; } // 800ADB90
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 800ADB94
  c->r[3]=c->r[31]+0x00000FF8u; // 800ADB98
  c->r[4]=0u+0x00000000u; // 800ADB9C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800ADBA0
  c->ctr=c->r[12]; // 800ADBA4
  if (true) { c->lr=0x800ADBACu; dispatch(c,c->ctr); } // 800ADBA8
L_800ADBAC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ADBAC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800ADBB0
  c->lr=c->r[0]; // 800ADBB4
  c->r[1]=c->r[1]+0x00000030u; // 800ADBB8
  return; // 800ADBBC
}

// fn_800ADBC0
void f_800ADBC0(Ctx* __restrict c) {
  trace_call(0x800ADBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADBC0
  c->r[0]=c->lr; // 800ADBC4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ADBC8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800ADBCC
  c->r[24]=c->r[4]|c->r[4]; // 800ADBD0
  c->r[23]=c->r[3]|c->r[3]; // 800ADBD4
  c->r[26]=0u+0x00000000u; // 800ADBD8
  c->r[4]=0u+0x0000000Fu; // 800ADBDC
  c->r[5]=R32(c->r[3]+0x00000F70u); // 800ADBE0
  c->r[3]=c->r[3]+0x00000394u; // 800ADBE4
  c->r[27]=R32(c->r[5]+0x00000018u); // 800ADBE8
  c->lr=0x800ADBF0u; f_80076DD4(c); // 800ADBEC
  cmps(c,0,(int32_t)c->r[3],0); // 800ADBF0
  if (crb(c,2)) { goto L_800ADBFC; } // 800ADBF4
  c->r[26]=0u+0x00000001u; // 800ADBF8
L_800ADBFC:;
  c->r[3]=c->r[23]+0x00000394u; // 800ADBFC
  c->r[4]=0u+0x00000012u; // 800ADC00
  c->lr=0x800ADC08u; f_80076DD4(c); // 800ADC04
  cmps(c,0,(int32_t)c->r[3],0); // 800ADC08
  if (crb(c,2)) { goto L_800ADC1C; } // 800ADC0C
  c->lr=0x800ADC14u; f_800ADC94(c); // 800ADC10
  c->r[4]=0u+0x00000001u; // 800ADC14
  c->lr=0x800ADC1Cu; f_80131C04(c); // 800ADC18
L_800ADC1C:;
  c->r[25]=0u+0x00000000u; // 800ADC1C
  c->r[31]=0u+0x00000000u; // 800ADC20
  goto L_800ADC78; // 800ADC24
L_800ADC28:;
  c->r[0]=R32(c->r[23]+0x00000F70u); // 800ADC28
  c->r[4]=R32(c->r[24]+0x00000000u); // 800ADC2C
  c->r[5]=c->r[0]+c->r[31]; // 800ADC30
  c->r[3]=R32(c->r[24]+0x00000004u); // 800ADC34
  c->r[30]=R32(c->r[5]+0x00000020u); // 800ADC38
  c->r[29]=R32(c->r[5]+0x00000024u); // 800ADC3C
  c->r[28]=R32(c->r[5]+0x0000001Cu); // 800ADC40
  c->r[0]=R32(c->r[24]+0x00000008u); // 800ADC44
  W32(c->r[1]+0x00000008u,c->r[4]); // 800ADC48
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800ADC4C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800ADC50
  c->lr=0x800ADC58u; f_800ADC94(c); // 800ADC54
  c->r[4]=c->r[30]|c->r[30]; // 800ADC58
  c->r[5]=c->r[29]|c->r[29]; // 800ADC5C
  c->r[6]=c->r[28]|c->r[28]; // 800ADC60
  c->r[8]=c->r[26]|c->r[26]; // 800ADC64
  c->r[7]=c->r[1]+0x00000008u; // 800ADC68
  c->lr=0x800ADC70u; f_80131C0C(c); // 800ADC6C
  c->r[25]=c->r[25]+0x00000001u; // 800ADC70
  c->r[31]=c->r[31]+0x0000000Cu; // 800ADC74
L_800ADC78:;
  cmpu(c,0,c->r[25],c->r[27]); // 800ADC78
  if (crb(c,0)) { IRQCHK(c); goto L_800ADC28; } // 800ADC7C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800ADC80
  c->r[0]=R32(c->r[1]+0x00000044u); // 800ADC84
  c->lr=c->r[0]; // 800ADC88
  c->r[1]=c->r[1]+0x00000040u; // 800ADC8C
  return; // 800ADC90
}

// fn_800ADC94
void f_800ADC94(Ctx* __restrict c) {
  trace_call(0x800ADC94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADC94
  c->r[0]=c->lr; // 800ADC98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADC9C
  c->r[0]=R8(c->r[13]+0xFFFF9501u); // 800ADCA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800ADCA4
  if (!crb(c,2)) { goto L_800ADCC0; } // 800ADCA8
  c->r[3]=0u+0x80470000u; // 800ADCAC
  c->r[3]=c->r[3]+0x00000DC8u; // 800ADCB0
  c->lr=0x800ADCB8u; f_80131AFC(c); // 800ADCB4
  c->r[0]=0u+0x00000001u; // 800ADCB8
  W8(c->r[13]+0xFFFF9501u,c->r[0]); // 800ADCBC
L_800ADCC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADCC0
  c->r[3]=0u+0x80470000u; // 800ADCC4
  c->r[3]=c->r[3]+0x00000DC8u; // 800ADCC8
  c->lr=c->r[0]; // 800ADCCC
  c->r[1]=c->r[1]+0x00000010u; // 800ADCD0
  return; // 800ADCD4
}

// fn_800ADCD8
void f_800ADCD8(Ctx* __restrict c) {
  trace_call(0x800ADCD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADCD8
  c->r[0]=c->lr; // 800ADCDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ADCE0
  c->r[0]=c->r[3]+0x00000EDCu; // 800ADCE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ADCE8
  c->r[31]=c->r[3]|c->r[3]; // 800ADCEC
  c->r[4]=R32(c->r[3]+0x00000028u); // 800ADCF0
  cmpu(c,0,c->r[4],c->r[0]); // 800ADCF4
  if (!crb(c,2)) { goto L_800ADD14; } // 800ADCF8
  c->r[3]=c->r[0]|c->r[0]; // 800ADCFC
  c->r[4]=c->r[31]+0x000008D0u; // 800ADD00
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ADD04
  c->r[12]=R32(c->r[12]+0x00000040u); // 800ADD08
  c->ctr=c->r[12]; // 800ADD0C
  if (true) { c->lr=0x800ADD14u; dispatch(c,c->ctr); } // 800ADD10
L_800ADD14:;
  c->r[3]=c->r[31]|c->r[31]; // 800ADD14
  c->lr=0x800ADD1Cu; f_800CF888(c); // 800ADD18
  c->r[3]=c->r[31]|c->r[31]; // 800ADD1C
  c->r[4]=0u+0x00000007u; // 800ADD20
  c->lr=0x800ADD28u; f_800760EC(c); // 800ADD24
  cmps(c,0,(int32_t)c->r[3],0); // 800ADD28
  if (!crb(c,2)) { goto L_800ADD5C; } // 800ADD2C
  c->r[12]=R32(c->r[31]+0x00000010u); // 800ADD30
  c->r[3]=c->r[31]|c->r[31]; // 800ADD34
  c->r[12]=R32(c->r[12]+0x00000338u); // 800ADD38
  c->ctr=c->r[12]; // 800ADD3C
  if (true) { c->lr=0x800ADD44u; dispatch(c,c->ctr); } // 800ADD40
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 800ADD44
  c->r[4]=c->r[3]|c->r[3]; // 800ADD48
  c->r[3]=c->r[31]+0x00000FF8u; // 800ADD4C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800ADD50
  c->ctr=c->r[12]; // 800ADD54
  if (true) { c->lr=0x800ADD5Cu; dispatch(c,c->ctr); } // 800ADD58
L_800ADD5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ADD5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ADD60
  c->lr=c->r[0]; // 800ADD64
  c->r[1]=c->r[1]+0x00000010u; // 800ADD68
  return; // 800ADD6C
}

// fn_800ADD70
void f_800ADD70(Ctx* __restrict c) {
  trace_call(0x800ADD70u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ADD70
  c->r[0]=c->lr; // 800ADD74
  cmps(c,0,(int32_t)c->r[3],0); // 800ADD78
  W32(c->r[1]+0x00000104u,c->r[0]); // 800ADD7C
  W32(c->r[1]+0x000000FCu,c->r[31]); // 800ADD80
  c->r[31]=c->r[3]|c->r[3]; // 800ADD84
  c->r[4]=c->r[31]|c->r[31]; // 800ADD88
  W32(c->r[1]+0x000000F8u,c->r[30]); // 800ADD8C
  if (crb(c,2)) { goto L_800ADD98; } // 800ADD90
  c->r[4]=c->r[3]+0x00000048u; // 800ADD94
L_800ADD98:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->r[12]=R32(ea); c->r[3]=ea;} // 800ADD98
  c->r[12]=R32(c->r[12]+0x00000010u); // 800ADD9C
  c->ctr=c->r[12]; // 800ADDA0
  if (true) { c->lr=0x800ADDA8u; dispatch(c,c->ctr); } // 800ADDA4
  {uint32_t ea=c->r[31]+0x000004D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADDA8
  c->r[3]=c->r[1]+0x00000050u; // 800ADDAC
  {uint32_t ea=c->r[31]+0x000004DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADDB0
  {uint32_t ea=c->r[31]+0x000004E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ADDB4
  c->lr=0x800ADDBCu; f_800521A0(c); // 800ADDB8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800ADDBC
  c->r[4]=c->r[31]+0x000008D0u; // 800ADDC0
  c->r[3]=c->r[1]+0x0000008Cu; // 800ADDC4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800ADDC8
  c->ctr=c->r[12]; // 800ADDCC
  if (true) { c->lr=0x800ADDD4u; dispatch(c,c->ctr); } // 800ADDD0
  c->r[3]=c->r[1]+0x00000038u; // 800ADDD4
  c->r[4]=c->r[1]+0x0000008Cu; // 800ADDD8
  c->lr=0x800ADDE0u; f_80032FD8(c); // 800ADDDC
  c->r[4]=c->r[1]+0x00000038u; // 800ADDE0
  c->r[3]=c->r[1]+0x00000044u; // 800ADDE4
  c->r[5]=c->r[1]+0x00000050u; // 800ADDE8
  c->lr=0x800ADDF0u; f_80064C74(c); // 800ADDEC
  c->r[3]=c->r[1]+0x00000050u; // 800ADDF0
  c->r[4]=c->r[1]+0x00000044u; // 800ADDF4
  c->lr=0x800ADDFCu; f_8003F468(c); // 800ADDF8
  c->r[3]=c->r[1]+0x00000050u; // 800ADDFC
  c->lr=0x800ADE04u; f_80065368(c); // 800ADE00
  cmps(c,0,(int32_t)c->r[3],0); // 800ADE04
  if (!crb(c,2)) { goto L_800AE008; } // 800ADE08
  c->r[3]=c->r[1]+0x00000050u; // 800ADE0C
  c->r[4]=c->r[3]|c->r[3]; // 800ADE10
  c->lr=0x800ADE18u; f_80265750(c); // 800ADE14
  c->r[3]=c->r[31]+0x00000394u; // 800ADE18
  c->r[4]=0u+0x00000001u; // 800ADE1C
  c->lr=0x800ADE24u; f_80076DD4(c); // 800ADE20
  cmps(c,0,(int32_t)c->r[3],0); // 800ADE24
  if (crb(c,2)) { goto L_800ADFC8; } // 800ADE28
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADE2C
  c->r[3]=c->r[1]+0x00000050u; // 800ADE30
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADE34
  c->f[3]=c->f[1]; // 800ADE38
  c->lr=0x800ADE40u; f_80065358(c); // 800ADE3C
  c->r[3]=c->r[1]+0x00000050u; // 800ADE40
  c->r[4]=c->r[3]|c->r[3]; // 800ADE44
  c->lr=0x800ADE4Cu; f_80265750(c); // 800ADE48
  c->r[3]=0u+0x80440000u; // 800ADE4C
  c->r[3]=c->r[3]+0x000010A8u; // 800ADE50
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800ADE54
  cmps(c,0,(int32_t)c->r[0],0); // 800ADE58
  if (!crb(c,2)) { goto L_800ADEEC; } // 800ADE5C
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800ADE60
  c->r[0]=R32(c->r[4]+0x00000008u); // 800ADE64
  cmps(c,0,(int32_t)c->r[0],0); // 800ADE68
  if (!crb(c,2)) { goto L_800ADE7C; } // 800ADE6C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800ADE70
  W32(c->r[4]+0x00000008u,c->r[0]); // 800ADE74
  goto L_800ADE88; // 800ADE78
L_800ADE7C:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800ADE7C
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800ADE80
  W32(c->r[3]+0x00000004u,c->r[0]); // 800ADE84
L_800ADE88:;
  c->r[30]=0u+0x80440000u; // 800ADE88
  c->r[0]=0u+0x00000000u; // 800ADE8C
  c->r[30]=c->r[30]+0x000010A8u; // 800ADE90
  c->r[4]=R32(c->r[30]+0x00000010u); // 800ADE94
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800ADE98
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800ADE9C
  c->r[3]=R32(c->r[30]+0x00000010u); // 800ADEA0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800ADEA4
  c->r[3]=R32(c->r[30]+0x00000010u); // 800ADEA8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800ADEAC
  c->r[3]=R32(c->r[30]+0x00000010u); // 800ADEB0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800ADEB4
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 800ADEB8
  c->r[5]=R32(c->r[30]+0x00000010u); // 800ADEBC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800ADEC0
  c->r[0]=R32(c->r[30]+0x00000028u); // 800ADEC4
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800ADEC8
  c->r[4]=c->r[30]+c->r[4]; // 800ADECC
  c->r[3]=c->r[5]+0x00000020u; // 800ADED0
  c->r[4]=R32(c->r[4]+0x00000014u); // 800ADED4
  c->r[4]=c->r[3]-c->r[4]; // 800ADED8
  c->r[4]=c->r[0]-c->r[4]; // 800ADEDC
  c->lr=0x800ADEE4u; f_80288528(c); // 800ADEE0
  c->r[0]=0u+0x00000001u; // 800ADEE4
  W32(c->r[30]+0x00000020u,c->r[0]); // 800ADEE8
L_800ADEEC:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800ADEEC
  c->r[4]=c->r[31]+0x000008D0u; // 800ADEF0
  c->r[3]=c->r[1]+0x000000BCu; // 800ADEF4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800ADEF8
  c->ctr=c->r[12]; // 800ADEFC
  if (true) { c->lr=0x800ADF04u; dispatch(c,c->ctr); } // 800ADF00
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADF04
  c->r[3]=c->r[1]+0x00000014u; // 800ADF08
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADF0C
  c->f[3]=c->f[1]; // 800ADF10
  c->lr=0x800ADF18u; f_800521A0(c); // 800ADF14
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADF18
  c->r[3]=c->r[1]+0x00000020u; // 800ADF1C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADF20
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ADF24
  c->lr=0x800ADF2Cu; f_800521A0(c); // 800ADF28
  c->r[3]=c->r[1]+0x0000002Cu; // 800ADF2C
  c->r[4]=c->r[1]+0x00000020u; // 800ADF30
  c->r[5]=c->r[1]+0x00000014u; // 800ADF34
  c->lr=0x800ADF3Cu; f_80064C34(c); // 800ADF38
  c->r[3]=c->r[1]+0x000000BCu; // 800ADF3C
  c->r[4]=c->r[1]+0x0000002Cu; // 800ADF40
  c->lr=0x800ADF48u; f_80032FF4(c); // 800ADF44
  c->r[0]=0u+0x00000006u; // 800ADF48
  c->r[5]=c->r[1]+0x00000058u; // 800ADF4C
  c->r[4]=c->r[1]+0x000000B8u; // 800ADF50
  c->r[6]=R32(c->r[31]+0x000008D8u); // 800ADF54
  c->ctr=c->r[0]; // 800ADF58
L_800ADF5C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800ADF5C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800ADF60
  W32(c->r[5]+0x00000004u,c->r[3]); // 800ADF64
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800ADF68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ADF5C; } // 800ADF6C
  c->r[3]=c->r[31]+0x00000CA0u; // 800ADF70
  c->r[4]=c->r[1]+0x00000050u; // 800ADF74
  c->r[5]=c->r[1]+0x0000005Cu; // 800ADF78
  c->lr=0x800ADF80u; f_800BA0E8(c); // 800ADF7C
  c->r[30]=0u+0x80440000u; // 800ADF80
  c->r[30]=c->r[30]+0x000010A8u; // 800ADF84
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 800ADF88
  cmps(c,0,(int32_t)c->r[0],0); // 800ADF8C
  if (!crb(c,2)) { goto L_800ADFC8; } // 800ADF90
  c->lr=0x800ADF98u; f_802885D8(c); // 800ADF94
  c->r[0]=R32(c->r[30]+0x00000020u); // 800ADF98
  c->r[4]=0u+0xFFFFFFFFu; // 800ADF9C
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 800ADFA0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800ADFA4
  c->r[5]=c->r[5]+c->r[0]; // 800ADFA8
  c->r[5]=R32(c->r[5]+0x00000004u); // 800ADFAC
  W32(c->r[5]+0x00000008u,c->r[3]); // 800ADFB0
  c->r[0]=R32(c->r[30]+0x00000010u); // 800ADFB4
  W32(c->r[30]+0x00000020u,c->r[4]); // 800ADFB8
  c->r[3]=c->r[3]+c->r[0]; // 800ADFBC
  c->r[0]=c->r[3]+0x00000020u; // 800ADFC0
  W32(c->r[30]+0x00000010u,c->r[0]); // 800ADFC4
L_800ADFC8:;
  c->r[3]=c->r[31]+0x00000394u; // 800ADFC8
  c->r[4]=0u+0x00000000u; // 800ADFCC
  c->lr=0x800ADFD4u; f_80076DD4(c); // 800ADFD0
  cmps(c,0,(int32_t)c->r[3],0); // 800ADFD4
  if (crb(c,2)) { goto L_800AE008; } // 800ADFD8
  {uint32_t ea=c->r[31]+0x000004D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ADFDC
  c->r[3]=c->r[1]+0x00000050u; // 800ADFE0
  {uint32_t ea=c->r[31]+0x000004DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800ADFE4
  {uint32_t ea=c->r[31]+0x000004E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800ADFE8
  c->lr=0x800ADFF0u; f_80065358(c); // 800ADFEC
  c->r[3]=c->r[1]+0x00000008u; // 800ADFF0
  c->r[4]=c->r[1]+0x00000050u; // 800ADFF4
  c->lr=0x800ADFFCu; f_8003F484(c); // 800ADFF8
  c->r[4]=c->r[3]|c->r[3]; // 800ADFFC
  c->r[3]=c->r[31]|c->r[31]; // 800AE000
  c->lr=0x800AE008u; f_800ADBC0(c); // 800AE004
L_800AE008:;
  c->r[0]=R32(c->r[1]+0x00000104u); // 800AE008
  c->r[31]=R32(c->r[1]+0x000000FCu); // 800AE00C
  c->r[30]=R32(c->r[1]+0x000000F8u); // 800AE010
  c->lr=c->r[0]; // 800AE014
  c->r[1]=c->r[1]+0x00000100u; // 800AE018
  return; // 800AE01C
}

// fn_800AE020
void f_800AE020(Ctx* __restrict c) {
  trace_call(0x800AE020u);
  cmps(c,0,(int32_t)c->r[3],0); // 800AE020
  c->r[4]=c->r[3]|c->r[3]; // 800AE024
  if (crb(c,2)) { goto L_800AE030; } // 800AE028
  c->r[4]=c->r[3]+0x00000048u; // 800AE02C
L_800AE030:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->r[12]=R32(ea); c->r[3]=ea;} // 800AE030
  c->r[12]=R32(c->r[12]+0x00000010u); // 800AE034
  c->ctr=c->r[12]; // 800AE038
  if (true) { dispatch(c,c->ctr); return; } // 800AE03C
}

// fn_800AE040
void f_800AE040(Ctx* __restrict c) {
  trace_call(0x800AE040u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800AE040
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AE044
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800AE048
  c->ctr=c->r[12]; // 800AE04C
  if (true) { dispatch(c,c->ctr); return; } // 800AE050
}

// fn_800AE054
void f_800AE054(Ctx* __restrict c) {
  trace_call(0x800AE054u);
  f_800D05D4(c); return; // 800AE054
}

// fn_800AE058
void f_800AE058(Ctx* __restrict c) {
  trace_call(0x800AE058u);
  {uint32_t ea=c->r[1]+0xFFFFE170u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE058
  c->r[0]=c->lr; // 800AE05C
  W32(c->r[1]+0x00001E94u,c->r[0]); // 800AE060
  c->r[0]=0u+0x00001E88u; // 800AE064
  {uint32_t ea=c->r[1]+0x00001E80u; WF64(ea,c->f[31]);} // 800AE068
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800AE06C
  c->r[0]=0u+0x00001E78u; // 800AE070
  {uint32_t ea=c->r[1]+0x00001E70u; WF64(ea,c->f[30]);} // 800AE074
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,30,ea,0,0);} // 800AE078
  c->f[30]=c->f[1]; // 800AE07C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE080
  W32(c->r[1]+0x00001E6Cu,c->r[31]); // 800AE084
  c->r[31]=c->r[3]|c->r[3]; // 800AE088
  fcmp(c,0,c->f[1],c->f[0]); // 800AE08C
  W32(c->r[1]+0x00001E68u,c->r[30]); // 800AE090
  c->r[30]=c->r[4]|c->r[4]; // 800AE094
  if (!crb(c,0)) { goto L_800AE0A0; } // 800AE098
  c->f[30]=c->f[0]; // 800AE09C
L_800AE0A0:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800AE0A0
  c->r[4]=c->r[31]+0x000008D0u; // 800AE0A4
  c->r[3]=c->r[1]+0x0000023Cu; // 800AE0A8
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AE0AC
  c->ctr=c->r[12]; // 800AE0B0
  if (true) { c->lr=0x800AE0B8u; dispatch(c,c->ctr); } // 800AE0B4
  c->r[0]=0u+0x00000006u; // 800AE0B8
  c->r[5]=c->r[1]+0x00000208u; // 800AE0BC
  c->r[4]=c->r[31]+0x00000940u; // 800AE0C0
  c->ctr=c->r[0]; // 800AE0C4
L_800AE0C8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AE0C8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AE0CC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AE0D0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AE0D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE0C8; } // 800AE0D8
  {uint32_t ea=c->r[1]+0x00000218u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE0DC
  c->r[3]=c->r[1]+0x000000BCu; // 800AE0E0
  {uint32_t ea=c->r[1]+0x00000228u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE0E4
  {uint32_t ea=c->r[1]+0x00000238u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE0E8
  c->lr=0x800AE0F0u; f_800521A0(c); // 800AE0EC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=c->ps1[31]=RF32(ea);} // 800AE0F0
  c->r[3]=c->r[1]+0x0000023Cu; // 800AE0F4
  c->r[4]=c->r[1]+0x0000020Cu; // 800AE0F8
  c->r[5]=c->r[1]+0x000001DCu; // 800AE0FC
  c->lr=0x800AE104u; f_802646E0(c); // 800AE100
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE104
  c->r[3]=c->r[1]+0x00000110u; // 800AE108
  {uint32_t ea=c->r[1]+0x00000258u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE10C
  {uint32_t ea=c->r[1]+0x00000268u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE110
  c->lr=0x800AE118u; f_800521A0(c); // 800AE114
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE118
  c->r[3]=c->r[1]+0x00000104u; // 800AE11C
  c->f[2]=c->f[1]; // 800AE120
  c->f[3]=c->f[1]; // 800AE124
  c->lr=0x800AE12Cu; f_800521A0(c); // 800AE128
  c->r[4]=c->r[1]+0x00000104u; // 800AE12C
  c->r[3]=c->r[1]+0x000001DCu; // 800AE130
  c->r[5]=c->r[4]|c->r[4]; // 800AE134
  c->lr=0x800AE13Cu; f_802652E8(c); // 800AE138
  c->lr=0x800AE140u; f_80128B5C(c); // 800AE13C
  c->r[4]=c->r[3]|c->r[3]; // 800AE140
  c->r[3]=c->r[1]+0x000000B0u; // 800AE144
  c->r[4]=c->r[4]+0x00000020u; // 800AE148
  c->lr=0x800AE150u; f_8003F484(c); // 800AE14C
  c->r[3]=c->r[1]+0x000000F8u; // 800AE150
  c->r[4]=c->r[1]+0x000000B0u; // 800AE154
  c->lr=0x800AE15Cu; f_8003F468(c); // 800AE158
  c->r[3]=c->r[30]|c->r[30]; // 800AE15C
  c->lr=0x800AE164u; f_80065368(c); // 800AE160
  cmps(c,0,(int32_t)c->r[3],0); // 800AE164
  if (crb(c,2)) { goto L_800AE18C; } // 800AE168
  c->lr=0x800AE170u; f_80128B5C(c); // 800AE16C
  c->r[4]=c->r[3]|c->r[3]; // 800AE170
  c->r[3]=c->r[1]+0x000000A4u; // 800AE174
  c->lr=0x800AE17Cu; f_800AB510(c); // 800AE178
  c->r[3]=c->r[1]+0x000000ECu; // 800AE17C
  c->r[4]=c->r[1]+0x000000A4u; // 800AE180
  c->lr=0x800AE188u; f_8003F468(c); // 800AE184
  goto L_800AE198; // 800AE188
L_800AE18C:;
  c->r[4]=c->r[30]|c->r[30]; // 800AE18C
  c->r[3]=c->r[1]+0x000000ECu; // 800AE190
  c->lr=0x800AE198u; f_8003F468(c); // 800AE194
L_800AE198:;
  c->f[1]=c->f[30]; // 800AE198
  c->r[3]=c->r[1]+0x00000098u; // 800AE19C
  c->r[4]=c->r[1]+0x000000ECu; // 800AE1A0
  c->lr=0x800AE1A8u; f_80064C58(c); // 800AE1A4
  c->r[3]=c->r[1]+0x000000F8u; // 800AE1A8
  c->r[5]=c->r[1]+0x00000098u; // 800AE1AC
  c->r[4]=c->r[3]|c->r[3]; // 800AE1B0
  c->lr=0x800AE1B8u; f_80064C34(c); // 800AE1B4
  c->r[3]=c->r[1]+0x00000080u; // 800AE1B8
  c->r[4]=c->r[1]+0x000000ECu; // 800AE1BC
  c->lr=0x800AE1C4u; f_8003F484(c); // 800AE1C0
  c->r[30]=c->r[3]|c->r[3]; // 800AE1C4
  c->r[3]=c->r[1]+0x0000008Cu; // 800AE1C8
  c->r[4]=c->r[1]+0x000000F8u; // 800AE1CC
  c->lr=0x800AE1D4u; f_8003F484(c); // 800AE1D0
  c->r[5]=c->r[3]|c->r[3]; // 800AE1D4
  c->r[6]=c->r[30]|c->r[30]; // 800AE1D8
  c->r[3]=c->r[1]+0x00000110u; // 800AE1DC
  c->r[4]=c->r[1]+0x00000104u; // 800AE1E0
  c->r[7]=0u+0x00000001u; // 800AE1E4
  c->lr=0x800AE1ECu; f_800AB27C(c); // 800AE1E8
  cmps(c,0,(int32_t)c->r[3],0); // 800AE1EC
  if (crb(c,2)) { goto L_800AE334; } // 800AE1F0
  c->r[3]=c->r[1]+0x00001064u; // 800AE1F4
  c->lr=0x800AE1FCu; f_800462E8(c); // 800AE1F8
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE1FC
  c->r[3]=c->r[1]+0x000000E0u; // 800AE200
  {uint32_t ea=c->r[1]+0x00000250u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE204
  {uint32_t ea=c->r[1]+0x00000260u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE208
  c->lr=0x800AE210u; f_800521A0(c); // 800AE20C
  {uint32_t ea=c->r[2]+0xFFFF8D90u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE210
  c->r[3]=c->r[1]+0x00000068u; // 800AE214
  c->r[4]=c->r[1]+0x000000E0u; // 800AE218
  c->lr=0x800AE220u; f_80064C58(c); // 800AE21C
  c->r[3]=c->r[1]+0x00000074u; // 800AE220
  c->r[4]=c->r[1]+0x00000104u; // 800AE224
  c->r[5]=c->r[1]+0x00000068u; // 800AE228
  c->lr=0x800AE230u; f_80064C34(c); // 800AE22C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE230
  c->r[3]=c->r[1]+0x00000050u; // 800AE234
  c->r[4]=c->r[1]+0x000000E0u; // 800AE238
  c->lr=0x800AE240u; f_80064C58(c); // 800AE23C
  c->r[3]=c->r[1]+0x0000005Cu; // 800AE240
  c->r[4]=c->r[1]+0x00000104u; // 800AE244
  c->r[5]=c->r[1]+0x00000050u; // 800AE248
  c->lr=0x800AE250u; f_80064C74(c); // 800AE24C
  c->r[3]=0u+0x80450000u; // 800AE250
  c->r[4]=c->r[1]+0x00001064u; // 800AE254
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800AE258
  c->r[5]=c->r[1]+0x00000074u; // 800AE25C
  c->r[6]=c->r[1]+0x0000005Cu; // 800AE260
  c->r[7]=0u+0x00000000u; // 800AE264
  c->lr=0x800AE26Cu; f_80044D14(c); // 800AE268
  cmps(c,0,(int32_t)c->r[3],0); // 800AE26C
  if (crb(c,2)) { goto L_800AE280; } // 800AE270
  c->r[3]=c->r[1]+0x00000104u; // 800AE274
  c->r[4]=c->r[1]+0x0000106Cu; // 800AE278
  c->lr=0x800AE280u; f_8003F468(c); // 800AE27C
L_800AE280:;
  c->r[3]=c->r[1]+0x000001DCu; // 800AE280
  c->r[4]=c->r[1]+0x00000104u; // 800AE284
  c->lr=0x800AE28Cu; f_80032FF4(c); // 800AE288
  c->r[3]=c->r[1]+0x0000023Cu; // 800AE28C
  c->r[4]=c->r[1]+0x000001ACu; // 800AE290
  c->lr=0x800AE298u; f_80264994(c); // 800AE294
  c->r[3]=c->r[1]+0x000001ACu; // 800AE298
  c->r[4]=c->r[1]+0x000001DCu; // 800AE29C
  c->r[5]=c->r[1]+0x0000014Cu; // 800AE2A0
  c->lr=0x800AE2A8u; f_802646E0(c); // 800AE2A4
  c->r[0]=0u+0x00000006u; // 800AE2A8
  c->r[5]=c->r[1]+0x00000208u; // 800AE2AC
  c->r[4]=c->r[1]+0x00000148u; // 800AE2B0
  c->ctr=c->r[0]; // 800AE2B4
L_800AE2B8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AE2B8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AE2BC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AE2C0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AE2C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE2B8; } // 800AE2C8
  c->r[3]=c->r[31]|c->r[31]; // 800AE2CC
  c->r[4]=0u+0x00000008u; // 800AE2D0
  c->lr=0x800AE2D8u; f_800760EC(c); // 800AE2D4
  cmps(c,0,(int32_t)c->r[3],0); // 800AE2D8
  if (crb(c,2)) { goto L_800AE318; } // 800AE2DC
  c->r[3]=c->r[31]+0x00000394u; // 800AE2E0
  c->r[4]=0u+0x00000006u; // 800AE2E4
  c->lr=0x800AE2ECu; f_80076DD4(c); // 800AE2E8
  cmps(c,0,(int32_t)c->r[3],0); // 800AE2EC
  if (crb(c,2)) { goto L_800AE318; } // 800AE2F0
  {uint32_t ea=c->r[1]+0x00000218u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE2F4
  c->r[3]=c->r[1]+0x000000D4u; // 800AE2F8
  {uint32_t ea=c->r[1]+0x00000228u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE2FC
  {uint32_t ea=c->r[1]+0x00000238u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE300
  c->lr=0x800AE308u; f_800521A0(c); // 800AE304
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[31]);} // 800AE308
  c->r[3]=c->r[1]+0x0000020Cu; // 800AE30C
  c->r[4]=c->r[1]+0x000000D4u; // 800AE310
  c->lr=0x800AE318u; f_80032FF4(c); // 800AE314
L_800AE318:;
  c->r[3]=c->r[31]+0x000008ECu; // 800AE318
  c->r[4]=c->r[1]+0x0000020Cu; // 800AE31C
  c->lr=0x800AE324u; f_8016A37C(c); // 800AE320
  c->r[3]=c->r[1]+0x00001064u; // 800AE324
  c->r[4]=0u+0xFFFFFFFFu; // 800AE328
  c->lr=0x800AE330u; f_80046394(c); // 800AE32C
  goto L_800AE44C; // 800AE330
L_800AE334:;
  c->r[3]=c->r[1]+0x0000026Cu; // 800AE334
  c->lr=0x800AE33Cu; f_800462E8(c); // 800AE338
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE33C
  c->r[3]=c->r[1]+0x000000C8u; // 800AE340
  {uint32_t ea=c->r[1]+0x00000250u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE344
  {uint32_t ea=c->r[1]+0x00000260u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE348
  c->lr=0x800AE350u; f_800521A0(c); // 800AE34C
  {uint32_t ea=c->r[2]+0xFFFF8D90u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE350
  c->r[3]=c->r[1]+0x0000002Cu; // 800AE354
  c->r[4]=c->r[1]+0x000000C8u; // 800AE358
  c->lr=0x800AE360u; f_80064C58(c); // 800AE35C
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE360
  c->r[3]=c->r[1]+0x00000038u; // 800AE364
  {uint32_t ea=c->r[1]+0x000001F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE368
  {uint32_t ea=c->r[1]+0x00000208u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE36C
  c->lr=0x800AE374u; f_800521A0(c); // 800AE370
  c->r[3]=c->r[1]+0x00000044u; // 800AE374
  c->r[4]=c->r[1]+0x00000038u; // 800AE378
  c->r[5]=c->r[1]+0x0000002Cu; // 800AE37C
  c->lr=0x800AE384u; f_80064C34(c); // 800AE380
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE384
  c->r[3]=c->r[1]+0x00000008u; // 800AE388
  c->r[4]=c->r[1]+0x000000C8u; // 800AE38C
  c->lr=0x800AE394u; f_80064C58(c); // 800AE390
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE394
  c->r[3]=c->r[1]+0x00000014u; // 800AE398
  {uint32_t ea=c->r[1]+0x000001F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE39C
  {uint32_t ea=c->r[1]+0x00000208u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE3A0
  c->lr=0x800AE3A8u; f_800521A0(c); // 800AE3A4
  c->r[3]=c->r[1]+0x00000020u; // 800AE3A8
  c->r[4]=c->r[1]+0x00000014u; // 800AE3AC
  c->r[5]=c->r[1]+0x00000008u; // 800AE3B0
  c->lr=0x800AE3B8u; f_80064C74(c); // 800AE3B4
  c->r[3]=0u+0x80450000u; // 800AE3B8
  c->r[4]=c->r[1]+0x0000026Cu; // 800AE3BC
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800AE3C0
  c->r[5]=c->r[1]+0x00000044u; // 800AE3C4
  c->r[6]=c->r[1]+0x00000020u; // 800AE3C8
  c->r[7]=0u+0x00000000u; // 800AE3CC
  c->lr=0x800AE3D4u; f_80044D14(c); // 800AE3D0
  cmps(c,0,(int32_t)c->r[3],0); // 800AE3D4
  if (crb(c,2)) { goto L_800AE440; } // 800AE3D8
  c->r[3]=c->r[1]+0x00000110u; // 800AE3DC
  c->r[4]=c->r[1]+0x00000274u; // 800AE3E0
  c->lr=0x800AE3E8u; f_8003F468(c); // 800AE3E4
  c->r[3]=c->r[1]+0x000001DCu; // 800AE3E8
  c->r[4]=c->r[1]+0x00000274u; // 800AE3EC
  c->lr=0x800AE3F4u; f_80032FF4(c); // 800AE3F0
  c->r[3]=c->r[1]+0x0000023Cu; // 800AE3F4
  c->r[4]=c->r[1]+0x0000017Cu; // 800AE3F8
  c->lr=0x800AE400u; f_80264994(c); // 800AE3FC
  c->r[3]=c->r[1]+0x0000017Cu; // 800AE400
  c->r[4]=c->r[1]+0x000001DCu; // 800AE404
  c->r[5]=c->r[1]+0x0000011Cu; // 800AE408
  c->lr=0x800AE410u; f_802646E0(c); // 800AE40C
  c->r[0]=0u+0x00000006u; // 800AE410
  c->r[5]=c->r[1]+0x00000208u; // 800AE414
  c->r[4]=c->r[1]+0x00000118u; // 800AE418
  c->ctr=c->r[0]; // 800AE41C
L_800AE420:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AE420
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AE424
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AE428
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AE42C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE420; } // 800AE430
  c->r[3]=c->r[31]+0x000008ECu; // 800AE434
  c->r[4]=c->r[1]+0x0000020Cu; // 800AE438
  c->lr=0x800AE440u; f_8016A37C(c); // 800AE43C
L_800AE440:;
  c->r[3]=c->r[1]+0x0000026Cu; // 800AE440
  c->r[4]=0u+0xFFFFFFFFu; // 800AE444
  c->lr=0x800AE44Cu; f_80046394(c); // 800AE448
L_800AE44C:;
  c->r[0]=0u+0x00001E88u; // 800AE44C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800AE450
  {uint32_t ea=c->r[1]+0x00001E80u; c->f[31]=RF64(ea);} // 800AE454
  c->r[0]=0u+0x00001E78u; // 800AE458
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800AE45C
  {uint32_t ea=c->r[1]+0x00001E70u; c->f[30]=RF64(ea);} // 800AE460
  c->r[31]=R32(c->r[1]+0x00001E6Cu); // 800AE464
  c->r[0]=R32(c->r[1]+0x00001E94u); // 800AE468
  c->r[30]=R32(c->r[1]+0x00001E68u); // 800AE46C
  c->lr=c->r[0]; // 800AE470
  c->r[1]=c->r[1]+0x00001E90u; // 800AE474
  return; // 800AE478
}

// fn_800AE47C
void f_800AE47C(Ctx* __restrict c) {
  trace_call(0x800AE47Cu);
  c->r[4]=R32(c->r[3]+0x00000974u); // 800AE47C
  c->r[5]=R32(c->r[5]+0x00000010u); // 800AE480
  c->r[4]=R32(c->r[4]+0x00000000u); // 800AE484
  c->r[0]=R32(c->r[4]+0x00000018u); // 800AE488
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800AE48C
  if (crb(c,2)) return; // 800AE490
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE494
  c->r[4]=c->r[3]+0x000008ECu; // 800AE498
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE49C
  c->r[6]=0u+0x00000000u; // 800AE4A0
  c->r[7]=0u+0x00000000u; // 800AE4A4
  c->r[3]=c->r[3]+0x00000C88u; // 800AE4A8
  f_800BB0C8(c); return; // 800AE4AC
  return; // 800AE4B0
}

// fn_800AE4B4
void f_800AE4B4(Ctx* __restrict c) {
  trace_call(0x800AE4B4u);
  return; // 800AE4B4
}

// fn_800AE4B8
void f_800AE4B8(Ctx* __restrict c) {
  trace_call(0x800AE4B8u);
  return; // 800AE4B8
}

// fn_800AE4BC
void f_800AE4BC(Ctx* __restrict c) {
  trace_call(0x800AE4BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE4BC
  c->r[0]=c->lr; // 800AE4C0
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE4C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AE4C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AE4CC
  c->r[31]=c->r[5]|c->r[5]; // 800AE4D0
  c->r[4]=R32(c->r[5]+0x00000018u); // 800AE4D4
  {uint32_t ea=c->r[5]+0x00000034u; WF32(ea,c->f[0]);} // 800AE4D8
  cmps(c,0,(int32_t)c->r[4],0); // 800AE4DC
  if (crb(c,0)) { goto L_800AE4FC; } // 800AE4E0
  c->r[0]=R32(c->r[3]+0x00000C90u); // 800AE4E4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800AE4E8
  if (!crb(c,2)) { goto L_800AE4FC; } // 800AE4EC
  c->r[0]=0u+0x00000001u; // 800AE4F0
  W32(c->r[5]+0x00000010u,c->r[0]); // 800AE4F4
  goto L_800AE55C; // 800AE4F8
L_800AE4FC:;
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 800AE4FC
  cmps(c,0,(int32_t)c->r[4],0); // 800AE500
  if (crb(c,0)) { goto L_800AE520; } // 800AE504
  c->r[0]=R32(c->r[3]+0x00000C90u); // 800AE508
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800AE50C
  if (!crb(c,2)) { goto L_800AE520; } // 800AE510
  c->r[0]=0u+0x00000002u; // 800AE514
  W32(c->r[5]+0x00000010u,c->r[0]); // 800AE518
  goto L_800AE55C; // 800AE51C
L_800AE520:;
  c->r[4]=R32(c->r[3]+0x00000974u); // 800AE520
  c->r[5]=R32(c->r[5]+0x00000014u); // 800AE524
  c->r[4]=R32(c->r[4]+0x00000000u); // 800AE528
  c->r[0]=R32(c->r[4]+0x00000018u); // 800AE52C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800AE530
  if (crb(c,2)) { goto L_800AE554; } // 800AE534
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE538
  c->r[4]=c->r[3]+0x000008ECu; // 800AE53C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE540
  c->r[6]=0u+0x00000000u; // 800AE544
  c->r[7]=0u+0x00000000u; // 800AE548
  c->r[3]=c->r[3]+0x00000C88u; // 800AE54C
  c->lr=0x800AE554u; f_800BB0C8(c); // 800AE550
L_800AE554:;
  c->r[0]=0u+0x00000000u; // 800AE554
  W32(c->r[31]+0x00000010u,c->r[0]); // 800AE558
L_800AE55C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AE55C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AE560
  c->lr=c->r[0]; // 800AE564
  c->r[1]=c->r[1]+0x00000010u; // 800AE568
  return; // 800AE56C
}

// fn_800AE570
void f_800AE570(Ctx* __restrict c) {
  trace_call(0x800AE570u);
  {uint32_t ea=c->r[1]+0xFFFFFD40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AE570
  c->r[0]=c->lr; // 800AE574
  W32(c->r[1]+0x000002C4u,c->r[0]); // 800AE578
  {uint32_t ea=c->r[1]+0x000002B0u; WF64(ea,c->f[31]);} // 800AE57C
  {uint32_t ea=c->r[1]+0x000002B8u; psq_store(c,31,ea,0,0);} // 800AE580
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[30]);} // 800AE584
  {uint32_t ea=c->r[1]+0x000002A8u; psq_store(c,30,ea,0,0);} // 800AE588
  c->r[11]=c->r[1]+0x000002A0u; // 800AE58C
  c->lr=0x800AE594u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AE590
  c->r[31]=c->r[3]|c->r[3]; // 800AE594
  c->r[27]=c->r[4]|c->r[4]; // 800AE598
  c->r[28]=c->r[5]|c->r[5]; // 800AE59C
  c->lr=0x800AE5A4u; f_80061A4C(c); // 800AE5A0
  c->r[29]=c->r[3]+0x000000ECu; // 800AE5A4
  c->r[30]=0u+0x00000000u; // 800AE5A8
  c->r[3]=c->r[29]|c->r[29]; // 800AE5AC
  c->lr=0x800AE5B4u; f_8012CF88(c); // 800AE5B0
  cmps(c,0,(int32_t)c->r[3],1); // 800AE5B4
  if (!crb(c,2)) { goto L_800AE5D0; } // 800AE5B8
  c->r[3]=c->r[29]|c->r[29]; // 800AE5BC
  c->lr=0x800AE5C4u; f_8012D21C(c); // 800AE5C0
  cmps(c,0,(int32_t)c->r[3],0); // 800AE5C4
  if (!crb(c,2)) { goto L_800AE5D0; } // 800AE5C8
  c->r[30]=0u+0x00000001u; // 800AE5CC
L_800AE5D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AE5D0
  if (crb(c,2)) { goto L_800AE5E0; } // 800AE5D4
  c->r[3]=0u+0x00000000u; // 800AE5D8
  goto L_800AEA1C; // 800AE5DC
L_800AE5E0:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800AE5E0
  c->r[4]=c->r[31]+0x000008D0u; // 800AE5E4
  c->r[3]=c->r[1]+0x00000250u; // 800AE5E8
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AE5EC
  c->ctr=c->r[12]; // 800AE5F0
  if (true) { c->lr=0x800AE5F8u; dispatch(c,c->ctr); } // 800AE5F4
  c->r[0]=0u+0x00000006u; // 800AE5F8
  c->r[5]=c->r[1]+0x0000021Cu; // 800AE5FC
  c->r[4]=c->r[31]+0x00000940u; // 800AE600
  c->ctr=c->r[0]; // 800AE604
L_800AE608:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AE608
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AE60C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AE610
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AE614
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE608; } // 800AE618
  c->r[3]=c->r[31]|c->r[31]; // 800AE61C
  c->r[4]=c->r[1]+0x00000220u; // 800AE620
  c->lr=0x800AE628u; f_800AF6F8(c); // 800AE624
  c->f[30]=c->f[1]; // 800AE628
  c->r[3]=c->r[1]+0x00000250u; // 800AE62C
  c->r[4]=c->r[1]+0x00000220u; // 800AE630
  c->r[5]=c->r[1]+0x000001F0u; // 800AE634
  c->lr=0x800AE63Cu; f_802646E0(c); // 800AE638
  {uint32_t ea=c->r[1]+0x0000025Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE63C
  c->r[3]=c->r[1]+0x00000154u; // 800AE640
  {uint32_t ea=c->r[1]+0x0000026Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE644
  {uint32_t ea=c->r[1]+0x0000027Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE648
  c->lr=0x800AE650u; f_800521A0(c); // 800AE64C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE650
  c->r[3]=c->r[1]+0x00000148u; // 800AE654
  c->f[2]=c->f[1]; // 800AE658
  c->f[3]=c->f[1]; // 800AE65C
  c->lr=0x800AE664u; f_800521A0(c); // 800AE660
  c->r[4]=c->r[1]+0x00000148u; // 800AE664
  c->r[3]=c->r[1]+0x000001F0u; // 800AE668
  c->r[5]=c->r[4]|c->r[4]; // 800AE66C
  c->lr=0x800AE674u; f_802652E8(c); // 800AE670
  cmps(c,0,(int32_t)c->r[27],0); // 800AE674
  if (crb(c,2)) { goto L_800AE68C; } // 800AE678
  c->r[4]=c->r[28]|c->r[28]; // 800AE67C
  c->r[3]=c->r[1]+0x0000013Cu; // 800AE680
  c->lr=0x800AE688u; f_8003F468(c); // 800AE684
  goto L_800AE6BC; // 800AE688
L_800AE68C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800AE68C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800AE690
  W32(c->r[1]+0x00000008u,c->r[3]); // 800AE694
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800AE698
  c->lr=0x800AE6A0u; f_80128B5C(c); // 800AE69C
  c->r[4]=c->r[3]|c->r[3]; // 800AE6A0
  c->r[3]=c->r[1]+0x00000100u; // 800AE6A4
  c->r[5]=c->r[1]+0x00000008u; // 800AE6A8
  c->lr=0x800AE6B0u; f_80129C6C(c); // 800AE6AC
  c->r[3]=c->r[1]+0x0000013Cu; // 800AE6B0
  c->r[4]=c->r[1]+0x00000100u; // 800AE6B4
  c->lr=0x800AE6BCu; f_8003F468(c); // 800AE6B8
L_800AE6BC:;
  c->lr=0x800AE6C0u; f_80128B5C(c); // 800AE6BC
  c->r[4]=c->r[3]|c->r[3]; // 800AE6C0
  c->r[3]=c->r[1]+0x000000E8u; // 800AE6C4
  c->r[4]=c->r[4]+0x00000020u; // 800AE6C8
  c->lr=0x800AE6D0u; f_8003F484(c); // 800AE6CC
  c->r[3]=c->r[1]+0x000000F4u; // 800AE6D0
  c->r[4]=c->r[1]+0x000000E8u; // 800AE6D4
  c->r[5]=c->r[1]+0x0000013Cu; // 800AE6D8
  c->lr=0x800AE6E0u; f_80064C74(c); // 800AE6DC
  c->r[3]=c->r[1]+0x00000130u; // 800AE6E0
  c->r[4]=c->r[1]+0x000000F4u; // 800AE6E4
  c->lr=0x800AE6ECu; f_8003F468(c); // 800AE6E8
  {uint32_t ea=c->r[1]+0x0000025Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE6EC
  c->r[3]=c->r[1]+0x00000124u; // 800AE6F0
  {uint32_t ea=c->r[1]+0x0000026Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE6F4
  {uint32_t ea=c->r[1]+0x0000027Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE6F8
  c->lr=0x800AE700u; f_800521A0(c); // 800AE6FC
  c->r[3]=c->r[1]+0x00000130u; // 800AE700
  c->r[4]=c->r[1]+0x0000013Cu; // 800AE704
  c->lr=0x800AE70Cu; f_800653BC(c); // 800AE708
  c->f[31]=c->f[1]; // 800AE70C
  c->r[3]=c->r[1]+0x00000130u; // 800AE710
  c->r[4]=c->r[1]+0x00000124u; // 800AE714
  c->lr=0x800AE71Cu; f_800653BC(c); // 800AE718
  fcmp(c,0,c->f[1],c->f[31]); // 800AE71C
  if (!crb(c,0)) { goto L_800AE72C; } // 800AE720
  c->r[3]=0u+0x00000000u; // 800AE724
  goto L_800AEA1C; // 800AE728
L_800AE72C:;
  {uint32_t ea=c->r[1]+0x0000022Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE72C
  c->r[3]=c->r[1]+0x000000DCu; // 800AE730
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE734
  {uint32_t ea=c->r[1]+0x0000024Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE738
  c->lr=0x800AE740u; f_800521A0(c); // 800AE73C
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE740
  {uint32_t ea=c->r[2]+0xFFFF8D94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE744
  fcmp(c,0,c->f[1],c->f[0]); // 800AE748
  if (!crb(c,0)) { goto L_800AE8B8; } // 800AE74C
  {uint32_t ea=c->r[1]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE750
  c->r[3]=c->r[1]+0x000000ACu; // 800AE754
  {uint32_t ea=c->r[1]+0x0000020Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE758
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE75C
  c->lr=0x800AE764u; f_800521A0(c); // 800AE760
  c->lr=0x800AE768u; f_80128B5C(c); // 800AE764
  c->r[4]=c->r[3]|c->r[3]; // 800AE768
  c->r[3]=c->r[1]+0x000000B8u; // 800AE76C
  c->r[4]=c->r[4]+0x00000020u; // 800AE770
  c->lr=0x800AE778u; f_8003F484(c); // 800AE774
  c->r[3]=c->r[1]+0x000000C4u; // 800AE778
  c->r[4]=c->r[1]+0x000000B8u; // 800AE77C
  c->r[5]=c->r[1]+0x00000130u; // 800AE780
  c->lr=0x800AE788u; f_80064C34(c); // 800AE784
  c->lr=0x800AE78Cu; f_80128B5C(c); // 800AE788
  c->r[4]=c->r[3]|c->r[3]; // 800AE78C
  c->r[3]=c->r[1]+0x000000D0u; // 800AE790
  c->r[4]=c->r[4]+0x00000020u; // 800AE794
  c->lr=0x800AE79Cu; f_8003F484(c); // 800AE798
  c->r[3]=c->r[1]+0x00000010u; // 800AE79C
  c->r[4]=c->r[1]+0x000000C4u; // 800AE7A0
  c->lr=0x800AE7A8u; f_8003F484(c); // 800AE7A4
  c->r[3]=c->r[1]+0x00000010u; // 800AE7A8
  c->r[5]=c->r[1]+0x000000D0u; // 800AE7AC
  c->r[4]=c->r[3]|c->r[3]; // 800AE7B0
  c->lr=0x800AE7B8u; f_80064C74(c); // 800AE7B4
  c->r[3]=c->r[1]+0x0000001Cu; // 800AE7B8
  c->r[4]=c->r[1]+0x000000ACu; // 800AE7BC
  c->lr=0x800AE7C4u; f_8003F484(c); // 800AE7C0
  c->r[3]=c->r[1]+0x0000001Cu; // 800AE7C4
  c->r[5]=c->r[1]+0x000000D0u; // 800AE7C8
  c->r[4]=c->r[3]|c->r[3]; // 800AE7CC
  c->lr=0x800AE7D4u; f_80064C74(c); // 800AE7D0
  c->r[3]=c->r[1]+0x00000010u; // 800AE7D4
  c->lr=0x800AE7DCu; f_800653A4(c); // 800AE7D8
  c->f[31]=c->f[1]; // 800AE7DC
  c->r[3]=c->r[1]+0x00000010u; // 800AE7E0
  c->r[4]=c->r[1]+0x0000001Cu; // 800AE7E4
  c->lr=0x800AE7ECu; f_800653BC(c); // 800AE7E8
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[31]); // 800AE7EC
  c->r[3]=c->r[1]+0x00000118u; // 800AE7F0
  c->r[4]=c->r[1]+0x00000010u; // 800AE7F4
  c->lr=0x800AE7FCu; f_8003F484(c); // 800AE7F8
  c->f[1]=c->f[31]; // 800AE7FC
  c->r[3]=c->r[1]+0x00000118u; // 800AE800
  c->r[4]=c->r[3]|c->r[3]; // 800AE804
  c->lr=0x800AE80Cu; f_80064C58(c); // 800AE808
  c->r[3]=c->r[1]+0x00000118u; // 800AE80C
  c->r[5]=c->r[1]+0x000000D0u; // 800AE810
  c->r[4]=c->r[3]|c->r[3]; // 800AE814
  c->lr=0x800AE81Cu; f_80064C34(c); // 800AE818
  {uint32_t ea=c->r[1]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE81C
  c->r[3]=c->r[1]+0x0000010Cu; // 800AE820
  {uint32_t ea=c->r[1]+0x0000020Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE824
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE828
  c->lr=0x800AE830u; f_800521A0(c); // 800AE82C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE830
  c->r[3]=c->r[31]|c->r[31]; // 800AE834
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 800AE838
  c->r[12]=R32(c->r[31]+0x00000010u); // 800AE83C
  c->r[12]=R32(c->r[12]+0x00000304u); // 800AE840
  c->ctr=c->r[12]; // 800AE844
  if (true) { c->lr=0x800AE84Cu; dispatch(c,c->ctr); } // 800AE848
  c->f[31]=c->f[1]; // 800AE84C
  c->r[3]=c->r[1]+0x0000007Cu; // 800AE850
  c->r[4]=c->r[1]+0x00000118u; // 800AE854
  c->r[5]=c->r[1]+0x0000010Cu; // 800AE858
  c->lr=0x800AE860u; f_80064C74(c); // 800AE85C
  c->f[1]=c->f[31]; // 800AE860
  c->r[3]=c->r[1]+0x00000088u; // 800AE864
  c->r[4]=c->r[1]+0x0000007Cu; // 800AE868
  c->lr=0x800AE870u; f_80064C58(c); // 800AE86C
  {uint32_t ea=c->r[2]+0xFFFF8D98u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE870
  c->r[3]=c->r[1]+0x00000094u; // 800AE874
  c->r[4]=c->r[1]+0x00000088u; // 800AE878
  c->lr=0x800AE880u; f_80064C58(c); // 800AE87C
  {uint32_t ea=c->r[2]+0xFFFF8D9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE880
  c->r[3]=c->r[1]+0x000000A0u; // 800AE884
  {uint32_t ea=c->r[2]+0xFFFF8D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE888
  c->r[4]=c->r[1]+0x00000094u; // 800AE88C
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[1]); // 800AE890
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800AE894
  c->lr=0x800AE89Cu; f_80064C58(c); // 800AE898
  c->r[3]=c->r[1]+0x0000010Cu; // 800AE89C
  c->r[5]=c->r[1]+0x000000A0u; // 800AE8A0
  c->r[4]=c->r[3]|c->r[3]; // 800AE8A4
  c->lr=0x800AE8ACu; f_80064C34(c); // 800AE8A8
  c->r[3]=c->r[1]+0x000001F0u; // 800AE8AC
  c->r[4]=c->r[1]+0x0000010Cu; // 800AE8B0
  c->lr=0x800AE8B8u; f_80032FF4(c); // 800AE8B4
L_800AE8B8:;
  c->r[3]=c->r[1]+0x00000064u; // 800AE8B8
  c->r[4]=c->r[1]+0x00000130u; // 800AE8BC
  c->r[29]=0u+0x00000000u; // 800AE8C0
  c->lr=0x800AE8C8u; f_8003F484(c); // 800AE8C4
  c->r[30]=c->r[3]|c->r[3]; // 800AE8C8
  c->r[3]=c->r[1]+0x00000070u; // 800AE8CC
  c->r[4]=c->r[1]+0x0000013Cu; // 800AE8D0
  c->lr=0x800AE8D8u; f_8003F484(c); // 800AE8D4
  c->r[5]=c->r[3]|c->r[3]; // 800AE8D8
  c->r[6]=c->r[30]|c->r[30]; // 800AE8DC
  c->r[3]=c->r[1]+0x00000154u; // 800AE8E0
  c->r[4]=c->r[1]+0x00000148u; // 800AE8E4
  c->r[7]=0u+0x00000000u; // 800AE8E8
  c->lr=0x800AE8F0u; f_800AB27C(c); // 800AE8EC
  cmps(c,0,(int32_t)c->r[3],0); // 800AE8F0
  if (crb(c,2)) { goto L_800AE9CC; } // 800AE8F4
  c->r[3]=c->r[1]+0x000001F0u; // 800AE8F8
  c->r[4]=c->r[1]+0x00000148u; // 800AE8FC
  c->lr=0x800AE904u; f_80032FF4(c); // 800AE900
  c->r[3]=c->r[1]+0x00000130u; // 800AE904
  c->lr=0x800AE90Cu; f_80065368(c); // 800AE908
  cmps(c,0,(int32_t)c->r[3],0); // 800AE90C
  if (!crb(c,2)) { goto L_800AE9C8; } // 800AE910
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE914
  c->r[3]=c->r[1]+0x0000004Cu; // 800AE918
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE91C
  c->f[3]=c->f[1]; // 800AE920
  c->lr=0x800AE928u; f_800521A0(c); // 800AE924
  c->r[3]=c->r[1]+0x00000130u; // 800AE928
  c->r[4]=c->r[1]+0x0000004Cu; // 800AE92C
  c->r[5]=c->r[1]+0x00000058u; // 800AE930
  c->lr=0x800AE938u; f_80265810(c); // 800AE934
  c->r[3]=c->r[1]+0x00000058u; // 800AE938
  c->lr=0x800AE940u; f_80065368(c); // 800AE93C
  cmps(c,0,(int32_t)c->r[3],0); // 800AE940
  if (!crb(c,2)) { goto L_800AE9C8; } // 800AE944
  c->r[3]=c->r[1]+0x00000130u; // 800AE948
  c->r[4]=c->r[3]|c->r[3]; // 800AE94C
  c->lr=0x800AE954u; f_80265750(c); // 800AE950
  {uint32_t ea=c->r[1]+0x00000254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE954
  c->r[3]=c->r[1]+0x00000040u; // 800AE958
  {uint32_t ea=c->r[1]+0x00000264u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AE95C
  {uint32_t ea=c->r[1]+0x00000274u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AE960
  c->lr=0x800AE968u; f_800521A0(c); // 800AE964
  c->r[3]=c->r[1]+0x00000034u; // 800AE968
  c->r[4]=c->r[1]+0x00000130u; // 800AE96C
  c->lr=0x800AE974u; f_8003F484(c); // 800AE970
  c->r[5]=c->r[3]|c->r[3]; // 800AE974
  c->r[3]=c->r[1]+0x000001C0u; // 800AE978
  c->r[4]=c->r[1]+0x00000040u; // 800AE97C
  c->lr=0x800AE984u; f_80074BF0(c); // 800AE980
  {uint32_t ea=c->r[2]+0xFFFF8D58u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE984
  c->r[3]=c->r[1]+0x00000028u; // 800AE988
  c->r[4]=c->r[1]+0x00000130u; // 800AE98C
  c->lr=0x800AE994u; f_80064C58(c); // 800AE990
  c->r[3]=c->r[1]+0x0000013Cu; // 800AE994
  c->r[5]=c->r[1]+0x00000028u; // 800AE998
  c->r[4]=c->r[3]|c->r[3]; // 800AE99C
  c->lr=0x800AE9A4u; f_80064C34(c); // 800AE9A0
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AE9A4
  c->r[3]=c->r[1]+0x000001C0u; // 800AE9A8
  c->r[4]=c->r[1]+0x0000013Cu; // 800AE9AC
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[0]);} // 800AE9B0
  c->lr=0x800AE9B8u; f_80032FF4(c); // 800AE9B4
  {uint32_t ea=c->r[2]+0xFFFF8D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AE9B8
  c->r[3]=c->r[1]+0x000001F0u; // 800AE9BC
  c->r[4]=c->r[1]+0x000001C0u; // 800AE9C0
  c->lr=0x800AE9C8u; f_80074FF0(c); // 800AE9C4
L_800AE9C8:;
  c->r[29]=0u+0x00000001u; // 800AE9C8
L_800AE9CC:;
  c->r[3]=c->r[1]+0x00000250u; // 800AE9CC
  c->r[4]=c->r[1]+0x00000190u; // 800AE9D0
  c->lr=0x800AE9D8u; f_80264994(c); // 800AE9D4
  c->r[3]=c->r[1]+0x00000190u; // 800AE9D8
  c->r[4]=c->r[1]+0x000001F0u; // 800AE9DC
  c->r[5]=c->r[1]+0x00000160u; // 800AE9E0
  c->lr=0x800AE9E8u; f_802646E0(c); // 800AE9E4
  c->r[0]=0u+0x00000006u; // 800AE9E8
  c->r[5]=c->r[1]+0x0000021Cu; // 800AE9EC
  c->r[4]=c->r[1]+0x0000015Cu; // 800AE9F0
  c->ctr=c->r[0]; // 800AE9F4
L_800AE9F8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AE9F8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AE9FC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AEA00
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AEA04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AE9F8; } // 800AEA08
  c->r[3]=c->r[31]+0x000008ECu; // 800AEA0C
  c->r[4]=c->r[1]+0x00000220u; // 800AEA10
  c->lr=0x800AEA18u; f_8016A37C(c); // 800AEA14
  c->r[3]=c->r[29]|c->r[29]; // 800AEA18
L_800AEA1C:;
  {uint32_t ea=c->r[1]+0x000002B8u; psq_load(c,31,ea,0,0);} // 800AEA1C
  {uint32_t ea=c->r[1]+0x000002B0u; c->f[31]=RF64(ea);} // 800AEA20
  {uint32_t ea=c->r[1]+0x000002A8u; psq_load(c,30,ea,0,0);} // 800AEA24
  c->r[11]=c->r[1]+0x000002A0u; // 800AEA28
  {uint32_t ea=c->r[1]+0x000002A0u; c->f[30]=RF64(ea);} // 800AEA2C
  c->lr=0x800AEA34u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AEA30
  c->r[0]=R32(c->r[1]+0x000002C4u); // 800AEA34
  c->lr=c->r[0]; // 800AEA38
  c->r[1]=c->r[1]+0x000002C0u; // 800AEA3C
  return; // 800AEA40
}

// fn_800AEA44
void f_800AEA44(Ctx* __restrict c) {
  trace_call(0x800AEA44u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEA44
  c->r[0]=c->lr; // 800AEA48
  W32(c->r[1]+0x00000184u,c->r[0]); // 800AEA4C
  c->r[11]=c->r[1]+0x00000180u; // 800AEA50
  c->lr=0x800AEA58u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AEA54
  c->r[29]=c->r[3]|c->r[3]; // 800AEA58
  c->r[3]=c->r[1]+0x0000013Cu; // 800AEA5C
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800AEA60
  c->r[4]=c->r[29]+0x000008D0u; // 800AEA64
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AEA68
  c->ctr=c->r[12]; // 800AEA6C
  if (true) { c->lr=0x800AEA74u; dispatch(c,c->ctr); } // 800AEA70
  c->r[0]=0u+0x00000006u; // 800AEA74
  c->r[5]=c->r[1]+0x00000108u; // 800AEA78
  c->r[4]=c->r[29]+0x00000940u; // 800AEA7C
  c->ctr=c->r[0]; // 800AEA80
L_800AEA84:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AEA84
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AEA88
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AEA8C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AEA90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AEA84; } // 800AEA94
  c->r[3]=c->r[1]+0x0000013Cu; // 800AEA98
  c->r[4]=c->r[1]+0x0000010Cu; // 800AEA9C
  c->r[5]=c->r[1]+0x000000DCu; // 800AEAA0
  c->lr=0x800AEAA8u; f_802646E0(c); // 800AEAA4
  {uint32_t ea=c->r[1]+0x00000148u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEAA8
  c->r[3]=c->r[1]+0x00000070u; // 800AEAAC
  {uint32_t ea=c->r[1]+0x00000158u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEAB0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AEAB4
  c->lr=0x800AEABCu; f_800521A0(c); // 800AEAB8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEABC
  c->r[3]=c->r[1]+0x00000064u; // 800AEAC0
  c->f[2]=c->f[1]; // 800AEAC4
  c->f[3]=c->f[1]; // 800AEAC8
  c->lr=0x800AEAD0u; f_800521A0(c); // 800AEACC
  c->r[4]=c->r[1]+0x00000064u; // 800AEAD0
  c->r[3]=c->r[1]+0x000000DCu; // 800AEAD4
  c->r[5]=c->r[4]|c->r[4]; // 800AEAD8
  c->lr=0x800AEAE0u; f_802652E8(c); // 800AEADC
  c->r[3]=R32(c->r[29]+0x00000000u); // 800AEAE0
  c->r[0]=R32(c->r[29]+0x00000004u); // 800AEAE4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800AEAE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800AEAEC
  c->lr=0x800AEAF4u; f_80128B5C(c); // 800AEAF0
  c->r[4]=c->r[3]|c->r[3]; // 800AEAF4
  c->r[3]=c->r[1]+0x00000040u; // 800AEAF8
  c->r[5]=c->r[1]+0x00000008u; // 800AEAFC
  c->lr=0x800AEB04u; f_80129C6C(c); // 800AEB00
  c->r[3]=c->r[1]+0x00000058u; // 800AEB04
  c->r[4]=c->r[1]+0x00000040u; // 800AEB08
  c->lr=0x800AEB10u; f_8003F468(c); // 800AEB0C
  c->lr=0x800AEB14u; f_80128B5C(c); // 800AEB10
  c->r[4]=c->r[3]|c->r[3]; // 800AEB14
  c->r[3]=c->r[1]+0x00000028u; // 800AEB18
  c->r[4]=c->r[4]+0x00000020u; // 800AEB1C
  c->lr=0x800AEB24u; f_8003F484(c); // 800AEB20
  c->r[3]=c->r[1]+0x00000034u; // 800AEB24
  c->r[4]=c->r[1]+0x00000028u; // 800AEB28
  c->r[5]=c->r[1]+0x00000058u; // 800AEB2C
  c->lr=0x800AEB34u; f_80064C74(c); // 800AEB30
  c->r[3]=c->r[1]+0x0000004Cu; // 800AEB34
  c->r[4]=c->r[1]+0x00000034u; // 800AEB38
  c->lr=0x800AEB40u; f_8003F468(c); // 800AEB3C
  c->r[3]=c->r[1]+0x00000010u; // 800AEB40
  c->r[4]=c->r[1]+0x0000004Cu; // 800AEB44
  c->r[30]=0u+0x00000000u; // 800AEB48
  c->lr=0x800AEB50u; f_8003F484(c); // 800AEB4C
  c->r[31]=c->r[3]|c->r[3]; // 800AEB50
  c->r[3]=c->r[1]+0x0000001Cu; // 800AEB54
  c->r[4]=c->r[1]+0x00000058u; // 800AEB58
  c->lr=0x800AEB60u; f_8003F484(c); // 800AEB5C
  c->r[5]=c->r[3]|c->r[3]; // 800AEB60
  c->r[6]=c->r[31]|c->r[31]; // 800AEB64
  c->r[3]=c->r[1]+0x00000070u; // 800AEB68
  c->r[4]=c->r[1]+0x00000064u; // 800AEB6C
  c->r[7]=0u+0x00000000u; // 800AEB70
  c->lr=0x800AEB78u; f_800AB27C(c); // 800AEB74
  cmps(c,0,(int32_t)c->r[3],0); // 800AEB78
  if (crb(c,2)) { goto L_800AEB90; } // 800AEB7C
  c->r[3]=c->r[1]+0x000000DCu; // 800AEB80
  c->r[4]=c->r[1]+0x00000064u; // 800AEB84
  c->lr=0x800AEB8Cu; f_80032FF4(c); // 800AEB88
  c->r[30]=0u+0x00000001u; // 800AEB8C
L_800AEB90:;
  c->r[3]=c->r[1]+0x0000013Cu; // 800AEB90
  c->r[4]=c->r[1]+0x000000ACu; // 800AEB94
  c->lr=0x800AEB9Cu; f_80264994(c); // 800AEB98
  c->r[3]=c->r[1]+0x000000ACu; // 800AEB9C
  c->r[4]=c->r[1]+0x000000DCu; // 800AEBA0
  c->r[5]=c->r[1]+0x0000007Cu; // 800AEBA4
  c->lr=0x800AEBACu; f_802646E0(c); // 800AEBA8
  c->r[0]=0u+0x00000006u; // 800AEBAC
  c->r[5]=c->r[1]+0x00000108u; // 800AEBB0
  c->r[4]=c->r[1]+0x00000078u; // 800AEBB4
  c->ctr=c->r[0]; // 800AEBB8
L_800AEBBC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AEBBC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AEBC0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AEBC4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AEBC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AEBBC; } // 800AEBCC
  c->r[3]=c->r[29]+0x000008ECu; // 800AEBD0
  c->r[4]=c->r[1]+0x0000010Cu; // 800AEBD4
  c->lr=0x800AEBDCu; f_8016A37C(c); // 800AEBD8
  c->r[11]=c->r[1]+0x00000180u; // 800AEBDC
  c->r[3]=c->r[30]|c->r[30]; // 800AEBE0
  c->lr=0x800AEBE8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AEBE4
  c->r[0]=R32(c->r[1]+0x00000184u); // 800AEBE8
  c->lr=c->r[0]; // 800AEBEC
  c->r[1]=c->r[1]+0x00000180u; // 800AEBF0
  return; // 800AEBF4
}

// fn_800AEBF8
void f_800AEBF8(Ctx* __restrict c) {
  trace_call(0x800AEBF8u);
  {uint32_t ea=c->r[1]+0xFFFFFD90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AEBF8
  c->r[0]=c->lr; // 800AEBFC
  W32(c->r[1]+0x00000274u,c->r[0]); // 800AEC00
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[31]);} // 800AEC04
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,31,ea,0,0);} // 800AEC08
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[30]);} // 800AEC0C
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,30,ea,0,0);} // 800AEC10
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[29]);} // 800AEC14
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,29,ea,0,0);} // 800AEC18
  c->r[11]=c->r[1]+0x00000240u; // 800AEC1C
  c->lr=0x800AEC24u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AEC20
  c->f[30]=c->f[1]; // 800AEC24
  c->r[31]=c->r[3]|c->r[3]; // 800AEC28
  c->f[29]=c->f[2]; // 800AEC2C
  c->r[26]=c->r[4]|c->r[4]; // 800AEC30
  c->r[27]=c->r[5]|c->r[5]; // 800AEC34
  c->r[28]=c->r[6]|c->r[6]; // 800AEC38
  c->lr=0x800AEC40u; f_80061A4C(c); // 800AEC3C
  c->r[29]=c->r[3]+0x000000ECu; // 800AEC40
  c->r[30]=0u+0x00000000u; // 800AEC44
  c->r[3]=c->r[29]|c->r[29]; // 800AEC48
  c->lr=0x800AEC50u; f_8012CF88(c); // 800AEC4C
  cmps(c,0,(int32_t)c->r[3],1); // 800AEC50
  if (!crb(c,2)) { goto L_800AEC6C; } // 800AEC54
  c->r[3]=c->r[29]|c->r[29]; // 800AEC58
  c->lr=0x800AEC60u; f_8012D21C(c); // 800AEC5C
  cmps(c,0,(int32_t)c->r[3],0); // 800AEC60
  if (!crb(c,2)) { goto L_800AEC6C; } // 800AEC64
  c->r[30]=0u+0x00000001u; // 800AEC68
L_800AEC6C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AEC6C
  if (crb(c,2)) { goto L_800AEC7C; } // 800AEC70
  c->r[3]=0u+0x00000000u; // 800AEC74
  goto L_800AF054; // 800AEC78
L_800AEC7C:;
  {uint32_t ea=c->r[2]+0xFFFF8DA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEC7C
  c->lr=0x800AEC84u; f_80394318(c); // 800AEC80
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800AEC84
  c->f[31]=c->f[1]; // 800AEC88
  c->r[4]=c->r[31]+0x000008D0u; // 800AEC8C
  c->r[3]=c->r[1]+0x000001ECu; // 800AEC90
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AEC94
  c->ctr=c->r[12]; // 800AEC98
  if (true) { c->lr=0x800AECA0u; dispatch(c,c->ctr); } // 800AEC9C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AECA0
  c->r[3]=c->r[1]+0x000001BCu; // 800AECA4
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AECA8
  c->f[3]=c->f[1]; // 800AECAC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[29]); // 800AECB0
  c->lr=0x800AECB8u; f_803949B8(c); // 800AECB4
  c->r[3]=c->r[1]+0x000001ECu; // 800AECB8
  c->r[4]=c->r[1]+0x000001BCu; // 800AECBC
  c->r[5]=c->r[1]+0x000000FCu; // 800AECC0
  c->lr=0x800AECC8u; f_802646E0(c); // 800AECC4
  c->r[0]=0u+0x00000006u; // 800AECC8
  c->r[5]=c->r[1]+0x000001E8u; // 800AECCC
  c->r[4]=c->r[1]+0x000000F8u; // 800AECD0
  c->ctr=c->r[0]; // 800AECD4
L_800AECD8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AECD8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AECDC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AECE0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AECE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AECD8; } // 800AECE8
  c->lr=0x800AECF0u; f_80128B5C(c); // 800AECEC
  c->r[4]=c->r[3]|c->r[3]; // 800AECF0
  c->r[3]=c->r[1]+0x0000018Cu; // 800AECF4
  c->lr=0x800AECFCu; f_800AF084(c); // 800AECF8
  c->lr=0x800AED00u; f_80128B5C(c); // 800AECFC
  c->r[4]=c->r[3]|c->r[3]; // 800AED00
  c->r[3]=c->r[1]+0x0000009Cu; // 800AED04
  c->r[4]=c->r[4]+0x00000020u; // 800AED08
  c->lr=0x800AED10u; f_8003F484(c); // 800AED0C
  c->r[5]=c->r[26]|c->r[26]; // 800AED10
  c->r[3]=c->r[1]+0x000000A8u; // 800AED14
  c->r[4]=c->r[1]+0x0000018Cu; // 800AED18
  c->lr=0x800AED20u; f_80394B04(c); // 800AED1C
  c->r[3]=c->r[1]+0x000000C0u; // 800AED20
  c->r[4]=c->r[1]+0x000000A8u; // 800AED24
  c->r[5]=c->r[1]+0x0000009Cu; // 800AED28
  c->lr=0x800AED30u; f_80064C34(c); // 800AED2C
  cmps(c,0,(int32_t)c->r[27],0); // 800AED30
  if (crb(c,2)) { goto L_800AED68; } // 800AED34
  c->lr=0x800AED3Cu; f_80128B5C(c); // 800AED38
  c->r[4]=c->r[3]|c->r[3]; // 800AED3C
  c->r[3]=c->r[1]+0x00000084u; // 800AED40
  c->lr=0x800AED48u; f_800AB510(c); // 800AED44
  {uint32_t ea=c->r[2]+0xFFFF8D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AED48
  c->r[4]=c->r[1]+0x00000084u; // 800AED4C
  c->r[3]=c->r[1]+0x00000090u; // 800AED50
  c->lr=0x800AED58u; f_80064C58(c); // 800AED54
  c->r[3]=c->r[1]+0x000000B4u; // 800AED58
  c->r[4]=c->r[1]+0x00000090u; // 800AED5C
  c->lr=0x800AED64u; f_8003F468(c); // 800AED60
  goto L_800AED98; // 800AED64
L_800AED68:;
  {uint32_t ea=c->r[1]+0x000001F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AED68
  c->r[3]=c->r[1]+0x0000006Cu; // 800AED6C
  {uint32_t ea=c->r[1]+0x00000208u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AED70
  {uint32_t ea=c->r[1]+0x00000218u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AED74
  c->lr=0x800AED7Cu; f_800521A0(c); // 800AED78
  c->r[3]=c->r[1]+0x00000078u; // 800AED7C
  c->r[4]=c->r[1]+0x000000C0u; // 800AED80
  c->r[5]=c->r[1]+0x0000006Cu; // 800AED84
  c->lr=0x800AED8Cu; f_80064C74(c); // 800AED88
  c->r[3]=c->r[1]+0x000000B4u; // 800AED8C
  c->r[4]=c->r[1]+0x00000078u; // 800AED90
  c->lr=0x800AED98u; f_8003F468(c); // 800AED94
L_800AED98:;
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AED98
  c->r[3]=c->r[1]+0x00000054u; // 800AED9C
  {uint32_t ea=c->r[1]+0x00000200u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEDA0
  c->r[29]=0u+0x00000000u; // 800AEDA4
  {uint32_t ea=c->r[1]+0x00000210u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AEDA8
  c->lr=0x800AEDB0u; f_800521A0(c); // 800AEDAC
  c->r[3]=c->r[1]+0x00000060u; // 800AEDB0
  c->r[4]=c->r[1]+0x000000B4u; // 800AEDB4
  c->r[5]=c->r[1]+0x00000054u; // 800AEDB8
  c->lr=0x800AEDC0u; f_800AF128(c); // 800AEDBC
  c->r[3]=c->r[1]+0x00000060u; // 800AEDC0
  c->lr=0x800AEDC8u; f_800653A4(c); // 800AEDC4
  {uint32_t ea=c->r[2]+0xFFFF8DA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEDC8
  fcmp(c,0,c->f[1],c->f[0]); // 800AEDCC
  if (!crb(c,0)) { goto L_800AEDD8; } // 800AEDD0
  c->r[29]=0u+0x00000001u; // 800AEDD4
L_800AEDD8:;
  c->r[3]=c->r[1]+0x000000B4u; // 800AEDD8
  c->lr=0x800AEDE0u; f_80065368(c); // 800AEDDC
  cmps(c,0,(int32_t)c->r[3],0); // 800AEDE0
  if (crb(c,2)) { goto L_800AEE08; } // 800AEDE4
  {uint32_t ea=c->r[1]+0x000001F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEDE8
  c->r[3]=c->r[1]+0x00000048u; // 800AEDEC
  {uint32_t ea=c->r[1]+0x00000204u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEDF0
  {uint32_t ea=c->r[1]+0x00000214u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AEDF4
  c->lr=0x800AEDFCu; f_800521A0(c); // 800AEDF8
  c->r[3]=c->r[1]+0x000000B4u; // 800AEDFC
  c->r[4]=c->r[1]+0x00000048u; // 800AEE00
  c->lr=0x800AEE08u; f_8003F468(c); // 800AEE04
L_800AEE08:;
  c->r[3]=c->r[1]+0x000000B4u; // 800AEE08
  c->r[4]=c->r[3]|c->r[3]; // 800AEE0C
  c->lr=0x800AEE14u; f_80265750(c); // 800AEE10
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEE14
  c->r[3]=c->r[1]+0x00000030u; // 800AEE18
  {uint32_t ea=c->r[1]+0x00000200u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEE1C
  {uint32_t ea=c->r[1]+0x00000210u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AEE20
  c->lr=0x800AEE28u; f_800521A0(c); // 800AEE24
  c->r[3]=c->r[1]+0x0000003Cu; // 800AEE28
  c->r[4]=c->r[1]+0x000000B4u; // 800AEE2C
  c->r[5]=c->r[1]+0x00000030u; // 800AEE30
  c->lr=0x800AEE38u; f_800AF128(c); // 800AEE34
  c->r[3]=c->r[1]+0x000000B4u; // 800AEE38
  c->r[4]=c->r[1]+0x0000003Cu; // 800AEE3C
  c->lr=0x800AEE44u; f_8003F468(c); // 800AEE40
  c->r[3]=c->r[1]+0x000000B4u; // 800AEE44
  c->lr=0x800AEE4Cu; f_80065368(c); // 800AEE48
  cmps(c,0,(int32_t)c->r[3],0); // 800AEE4C
  if (crb(c,2)) { goto L_800AEE74; } // 800AEE50
  {uint32_t ea=c->r[1]+0x000001F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEE54
  c->r[3]=c->r[1]+0x00000024u; // 800AEE58
  {uint32_t ea=c->r[1]+0x00000204u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEE5C
  {uint32_t ea=c->r[1]+0x00000214u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AEE60
  c->lr=0x800AEE68u; f_800521A0(c); // 800AEE64
  c->r[3]=c->r[1]+0x000000B4u; // 800AEE68
  c->r[4]=c->r[1]+0x00000024u; // 800AEE6C
  c->lr=0x800AEE74u; f_8003F468(c); // 800AEE70
L_800AEE74:;
  c->r[3]=c->r[1]+0x000000B4u; // 800AEE74
  c->r[4]=c->r[3]|c->r[3]; // 800AEE78
  c->lr=0x800AEE80u; f_80265750(c); // 800AEE7C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEE80
  c->r[3]=c->r[31]|c->r[31]; // 800AEE84
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800AEE88
  c->r[12]=R32(c->r[31]+0x00000010u); // 800AEE8C
  c->r[12]=R32(c->r[12]+0x00000304u); // 800AEE90
  c->ctr=c->r[12]; // 800AEE94
  if (true) { c->lr=0x800AEE9Cu; dispatch(c,c->ctr); } // 800AEE98
  {uint32_t ea=c->r[2]+0xFFFF8DACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEE9C
  c->r[3]=c->r[1]+0x00000018u; // 800AEEA0
  {uint32_t ea=c->r[1]+0x00000204u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEEA4
  c->r[30]=0u+0x00000000u; // 800AEEA8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800AEEAC
  {uint32_t ea=c->r[1]+0x000001F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEEB0
  {uint32_t ea=c->r[1]+0x00000214u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AEEB4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 800AEEB8
  c->lr=0x800AEEC0u; f_800521A0(c); // 800AEEBC
  c->r[3]=c->r[1]+0x000000B4u; // 800AEEC0
  c->r[4]=c->r[1]+0x00000018u; // 800AEEC4
  c->lr=0x800AEECCu; f_800653BC(c); // 800AEEC8
  fcmp(c,0,c->f[1],c->f[31]); // 800AEECC
  if (!crb(c,0)) { goto L_800AEF88; } // 800AEED0
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEED4
  c->f[2]=c->f[30]; // 800AEED8
  c->r[3]=c->r[1]+0x0000015Cu; // 800AEEDC
  c->r[4]=c->r[1]+0x000001ECu; // 800AEEE0
  c->f[3]=c->f[1]; // 800AEEE4
  c->r[5]=c->r[1]+0x000000B4u; // 800AEEE8
  c->r[6]=c->r[1]+0x00000008u; // 800AEEEC
  c->r[30]=0u+0x00000001u; // 800AEEF0
  c->r[7]=0u+0x00000000u; // 800AEEF4
  c->r[8]=0u+0x00000000u; // 800AEEF8
  c->lr=0x800AEF00u; f_800AF1B0(c); // 800AEEFC
  c->f[2]=-c->f[29]; // 800AEF00
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEF04
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEF08
  c->r[3]=c->r[1]+0x0000012Cu; // 800AEF0C
  c->f[3]=c->f[1]; // 800AEF10
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800AEF14
  c->lr=0x800AEF1Cu; f_803949B8(c); // 800AEF18
  c->r[3]=c->r[1]+0x0000015Cu; // 800AEF1C
  c->r[4]=c->r[1]+0x0000012Cu; // 800AEF20
  c->r[5]=c->r[1]+0x000000CCu; // 800AEF24
  c->lr=0x800AEF2Cu; f_802646E0(c); // 800AEF28
  c->r[0]=0u+0x00000006u; // 800AEF2C
  c->r[5]=c->r[1]+0x00000158u; // 800AEF30
  c->r[4]=c->r[1]+0x000000C8u; // 800AEF34
  c->ctr=c->r[0]; // 800AEF38
L_800AEF3C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AEF3C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AEF40
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AEF44
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AEF48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AEF3C; } // 800AEF4C
  {uint32_t ea=c->r[1]+0x000001F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEF50
  c->r[3]=c->r[1]+0x0000000Cu; // 800AEF54
  {uint32_t ea=c->r[1]+0x00000208u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AEF58
  {uint32_t ea=c->r[1]+0x00000218u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AEF5C
  c->lr=0x800AEF64u; f_800521A0(c); // 800AEF60
  c->r[3]=c->r[1]+0x0000015Cu; // 800AEF64
  c->r[4]=c->r[1]+0x0000000Cu; // 800AEF68
  c->lr=0x800AEF70u; f_80032FF4(c); // 800AEF6C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800AEF70
  c->r[3]=c->r[31]+0x000008D0u; // 800AEF74
  c->r[4]=c->r[1]+0x0000015Cu; // 800AEF78
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800AEF7C
  c->ctr=c->r[12]; // 800AEF80
  if (true) { c->lr=0x800AEF88u; dispatch(c,c->ctr); } // 800AEF84
L_800AEF88:;
  cmps(c,0,(int32_t)c->r[29],0); // 800AEF88
  if (crb(c,2)) { goto L_800AEF98; } // 800AEF8C
  c->r[3]=0u+0x00000000u; // 800AEF90
  goto L_800AF054; // 800AEF94
L_800AEF98:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AEF98
  if (crb(c,2)) { goto L_800AF050; } // 800AEF9C
  {uint32_t ea=c->r[2]+0xFFFF8D58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEFA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AEFA4
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 800AEFA8
  fcmp(c,0,c->f[1],c->f[0]); // 800AEFAC
  if (!crb(c,0)) { goto L_800AF030; } // 800AEFB0
  c->f[0]=-c->f[0]; // 800AEFB4
  fcmp(c,0,c->f[1],c->f[0]); // 800AEFB8
  if (!crb(c,1)) { goto L_800AF030; } // 800AEFBC
  cmps(c,1,(int32_t)c->r[28],0); // 800AEFC0
  if (crb(c,4)) { goto L_800AF028; } // 800AEFC4
  cmps(c,0,(int32_t)c->r[28],1); // 800AEFC8
  if (crb(c,2)) { goto L_800AEFF0; } // 800AEFCC
  if (!crb(c,0)) { goto L_800AEFDC; } // 800AEFD0
  if (!crb(c,4)) { goto L_800AEFE8; } // 800AEFD4
  goto L_800AF028; // 800AEFD8
L_800AEFDC:;
  cmps(c,0,(int32_t)c->r[28],3); // 800AEFDC
  if (!crb(c,0)) { goto L_800AF028; } // 800AEFE0
  goto L_800AF008; // 800AEFE4
L_800AEFE8:;
  c->r[3]=0u+0x00000000u; // 800AEFE8
  goto L_800AF054; // 800AEFEC
L_800AEFF0:;
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AEFF0
  fcmp(c,0,c->f[1],c->f[0]); // 800AEFF4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AEFF8
  c->r[3]=c->cr; // 800AEFFC
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 800AF000
  goto L_800AF054; // 800AF004
L_800AF008:;
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF008
  fcmp(c,0,c->f[1],c->f[0]); // 800AF00C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800AF010
  if (!crb(c,2)) { goto L_800AF020; } // 800AF014
  c->r[3]=0u+0x00000002u; // 800AF018
  goto L_800AF054; // 800AF01C
L_800AF020:;
  c->r[3]=0u+0x00000000u; // 800AF020
  goto L_800AF054; // 800AF024
L_800AF028:;
  c->r[3]=0u+0x00000000u; // 800AF028
  goto L_800AF054; // 800AF02C
L_800AF030:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF030
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF034
  fcmp(c,0,c->f[1],c->f[0]); // 800AF038
  if (!crb(c,0)) { goto L_800AF048; } // 800AF03C
  c->r[3]=0u+0x00000002u; // 800AF040
  goto L_800AF054; // 800AF044
L_800AF048:;
  c->r[3]=0u+0x00000001u; // 800AF048
  goto L_800AF054; // 800AF04C
L_800AF050:;
  c->r[3]=0u+0x00000000u; // 800AF050
L_800AF054:;
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,31,ea,0,0);} // 800AF054
  {uint32_t ea=c->r[1]+0x00000260u; c->f[31]=RF64(ea);} // 800AF058
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,30,ea,0,0);} // 800AF05C
  {uint32_t ea=c->r[1]+0x00000250u; c->f[30]=RF64(ea);} // 800AF060
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,29,ea,0,0);} // 800AF064
  c->r[11]=c->r[1]+0x00000240u; // 800AF068
  {uint32_t ea=c->r[1]+0x00000240u; c->f[29]=RF64(ea);} // 800AF06C
  c->lr=0x800AF074u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AF070
  c->r[0]=R32(c->r[1]+0x00000274u); // 800AF074
  c->lr=c->r[0]; // 800AF078
  c->r[1]=c->r[1]+0x00000270u; // 800AF07C
  return; // 800AF080
}

// fn_800AF084
void f_800AF084(Ctx* __restrict c) {
  trace_call(0x800AF084u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF084
  c->r[0]=c->lr; // 800AF088
  W32(c->r[1]+0x00000044u,c->r[0]); // 800AF08C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800AF090
  c->r[31]=c->r[4]|c->r[4]; // 800AF094
  c->r[4]=c->r[4]+0x00000020u; // 800AF098
  W32(c->r[1]+0x00000038u,c->r[30]); // 800AF09C
  c->r[30]=c->r[3]|c->r[3]; // 800AF0A0
  c->r[3]=c->r[1]+0x0000002Cu; // 800AF0A4
  c->lr=0x800AF0ACu; f_8003F484(c); // 800AF0A8
  c->r[4]=c->r[31]|c->r[31]; // 800AF0AC
  c->r[3]=c->r[1]+0x00000020u; // 800AF0B0
  c->lr=0x800AF0B8u; f_800AB510(c); // 800AF0B4
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF0B8
  c->r[3]=c->r[1]+0x00000008u; // 800AF0BC
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF0C0
  c->f[3]=c->f[1]; // 800AF0C4
  c->lr=0x800AF0CCu; f_800521A0(c); // 800AF0C8
  c->r[3]=c->r[1]+0x00000020u; // 800AF0CC
  c->r[4]=c->r[1]+0x00000008u; // 800AF0D0
  c->r[5]=c->r[1]+0x00000014u; // 800AF0D4
  c->lr=0x800AF0DCu; f_80265810(c); // 800AF0D8
  c->r[3]=c->r[1]+0x00000014u; // 800AF0DC
  c->lr=0x800AF0E4u; f_80065368(c); // 800AF0E0
  cmps(c,0,(int32_t)c->r[3],0); // 800AF0E4
  if (crb(c,2)) { goto L_800AF0F8; } // 800AF0E8
  c->r[3]=c->r[30]|c->r[30]; // 800AF0EC
  c->lr=0x800AF0F4u; f_80264680(c); // 800AF0F0
  goto L_800AF104; // 800AF0F4
L_800AF0F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800AF0F8
  c->r[4]=c->r[1]+0x00000020u; // 800AF0FC
  c->lr=0x800AF104u; f_8007513C(c); // 800AF100
L_800AF104:;
  c->r[3]=c->r[30]|c->r[30]; // 800AF104
  c->r[4]=c->r[1]+0x0000002Cu; // 800AF108
  c->lr=0x800AF110u; f_80032FF4(c); // 800AF10C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AF110
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800AF114
  c->r[30]=R32(c->r[1]+0x00000038u); // 800AF118
  c->lr=c->r[0]; // 800AF11C
  c->r[1]=c->r[1]+0x00000040u; // 800AF120
  return; // 800AF124
}

// fn_800AF128
void f_800AF128(Ctx* __restrict c) {
  trace_call(0x800AF128u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF128
  c->r[0]=c->lr; // 800AF12C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800AF130
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800AF134
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800AF138
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800AF13C
  c->r[31]=c->r[5]|c->r[5]; // 800AF140
  W32(c->r[1]+0x00000028u,c->r[30]); // 800AF144
  c->r[30]=c->r[4]|c->r[4]; // 800AF148
  W32(c->r[1]+0x00000024u,c->r[29]); // 800AF14C
  c->r[29]=c->r[3]|c->r[3]; // 800AF150
  c->r[3]=c->r[31]|c->r[31]; // 800AF154
  c->lr=0x800AF15Cu; f_800653A4(c); // 800AF158
  c->f[31]=c->f[1]; // 800AF15C
  c->r[3]=c->r[31]|c->r[31]; // 800AF160
  c->r[4]=c->r[30]|c->r[30]; // 800AF164
  c->lr=0x800AF16Cu; f_800653BC(c); // 800AF168
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 800AF16C
  c->r[4]=c->r[31]|c->r[31]; // 800AF170
  c->r[3]=c->r[1]+0x00000008u; // 800AF174
  c->lr=0x800AF17Cu; f_80064C58(c); // 800AF178
  c->r[3]=c->r[29]|c->r[29]; // 800AF17C
  c->r[4]=c->r[30]|c->r[30]; // 800AF180
  c->r[5]=c->r[1]+0x00000008u; // 800AF184
  c->lr=0x800AF18Cu; f_80064C74(c); // 800AF188
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800AF18C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AF190
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800AF194
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800AF198
  c->r[30]=R32(c->r[1]+0x00000028u); // 800AF19C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800AF1A0
  c->lr=c->r[0]; // 800AF1A4
  c->r[1]=c->r[1]+0x00000040u; // 800AF1A8
  return; // 800AF1AC
}

// fn_800AF1B0
void f_800AF1B0(Ctx* __restrict c) {
  trace_call(0x800AF1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFD90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF1B0
  c->r[0]=c->lr; // 800AF1B4
  W32(c->r[1]+0x00000274u,c->r[0]); // 800AF1B8
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[31]);} // 800AF1BC
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,31,ea,0,0);} // 800AF1C0
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[30]);} // 800AF1C4
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,30,ea,0,0);} // 800AF1C8
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[29]);} // 800AF1CC
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,29,ea,0,0);} // 800AF1D0
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[28]);} // 800AF1D4
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,28,ea,0,0);} // 800AF1D8
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[27]);} // 800AF1DC
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,27,ea,0,0);} // 800AF1E0
  c->r[11]=c->r[1]+0x00000220u; // 800AF1E4
  c->lr=0x800AF1ECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AF1E8
  c->f[27]=c->f[1]; // 800AF1EC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF1F0
  c->f[30]=c->f[2]; // 800AF1F4
  c->r[31]=c->r[3]|c->r[3]; // 800AF1F8
  c->f[31]=c->f[3]; // 800AF1FC
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF200
  c->f[2]=c->f[1]; // 800AF204
  c->r[26]=c->r[4]|c->r[4]; // 800AF208
  c->r[30]=c->r[5]|c->r[5]; // 800AF20C
  c->r[29]=c->r[6]|c->r[6]; // 800AF210
  c->r[28]=c->r[7]|c->r[7]; // 800AF214
  c->r[27]=c->r[8]|c->r[8]; // 800AF218
  c->r[3]=c->r[1]+0x00000074u; // 800AF21C
  c->lr=0x800AF224u; f_800521A0(c); // 800AF220
  c->r[3]=c->r[26]|c->r[26]; // 800AF224
  c->r[4]=c->r[1]+0x000001D0u; // 800AF228
  c->lr=0x800AF230u; f_80264994(c); // 800AF22C
  c->r[5]=c->r[30]|c->r[30]; // 800AF230
  c->r[3]=c->r[1]+0x00000068u; // 800AF234
  c->r[4]=c->r[1]+0x000001D0u; // 800AF238
  c->lr=0x800AF240u; f_80394B04(c); // 800AF23C
  c->r[3]=c->r[1]+0x00000068u; // 800AF240
  c->r[4]=c->r[1]+0x00000074u; // 800AF244
  c->r[5]=c->r[1]+0x0000005Cu; // 800AF248
  c->lr=0x800AF250u; f_80265810(c); // 800AF24C
  cmps(c,0,(int32_t)c->r[29],0); // 800AF250
  if (crb(c,2)) { goto L_800AF260; } // 800AF254
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF258
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800AF25C
L_800AF260:;
  cmps(c,0,(int32_t)c->r[28],0); // 800AF260
  if (crb(c,2)) { goto L_800AF270; } // 800AF264
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF268
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 800AF26C
L_800AF270:;
  cmps(c,0,(int32_t)c->r[27],0); // 800AF270
  if (crb(c,2)) { goto L_800AF280; } // 800AF274
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF278
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 800AF27C
L_800AF280:;
  {uint32_t ea=c->r[26]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF280
  c->r[3]=c->r[1]+0x00000050u; // 800AF284
  {uint32_t ea=c->r[26]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF288
  {uint32_t ea=c->r[26]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF28C
  c->lr=0x800AF294u; f_800521A0(c); // 800AF290
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF294
  c->r[3]=c->r[1]+0x00000008u; // 800AF298
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF29C
  c->f[3]=c->f[1]; // 800AF2A0
  c->lr=0x800AF2A8u; f_800521A0(c); // 800AF2A4
  {uint32_t ea=c->r[26]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF2A8
  c->r[3]=c->r[1]+0x00000014u; // 800AF2AC
  {uint32_t ea=c->r[26]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF2B0
  {uint32_t ea=c->r[26]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF2B4
  c->lr=0x800AF2BCu; f_800521A0(c); // 800AF2B8
  c->r[3]=c->r[1]+0x00000014u; // 800AF2BC
  c->r[4]=c->r[1]+0x00000008u; // 800AF2C0
  c->r[5]=c->r[1]+0x00000044u; // 800AF2C4
  c->lr=0x800AF2CCu; f_80265810(c); // 800AF2C8
  c->r[3]=c->r[1]+0x00000044u; // 800AF2CC
  c->lr=0x800AF2D4u; f_80065368(c); // 800AF2D0
  cmps(c,0,(int32_t)c->r[3],0); // 800AF2D4
  if (!crb(c,2)) { goto L_800AF398; } // 800AF2D8
  c->r[3]=c->r[1]+0x00000044u; // 800AF2DC
  c->r[4]=c->r[3]|c->r[3]; // 800AF2E0
  c->lr=0x800AF2E8u; f_80265750(c); // 800AF2E4
  c->r[3]=c->r[1]+0x00000038u; // 800AF2E8
  c->r[4]=c->r[1]+0x00000050u; // 800AF2EC
  c->r[5]=c->r[1]+0x00000044u; // 800AF2F0
  c->lr=0x800AF2F8u; f_800AF128(c); // 800AF2F4
  c->r[3]=c->r[1]+0x0000002Cu; // 800AF2F8
  c->r[4]=c->r[1]+0x00000050u; // 800AF2FC
  c->r[5]=c->r[1]+0x00000038u; // 800AF300
  c->lr=0x800AF308u; f_80064C74(c); // 800AF304
  {uint32_t ea=c->r[2]+0xFFFF8D64u; c->f[28]=c->ps1[28]=RF32(ea);} // 800AF308
  c->r[3]=c->r[1]+0x0000002Cu; // 800AF30C
  c->r[4]=c->r[1]+0x00000044u; // 800AF310
  c->lr=0x800AF318u; f_800653BC(c); // 800AF314
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF318
  fcmp(c,0,c->f[1],c->f[0]); // 800AF31C
  if (!crb(c,0)) { goto L_800AF328; } // 800AF320
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[28]=c->ps1[28]=RF32(ea);} // 800AF324
L_800AF328:;
  c->r[3]=c->r[1]+0x00000038u; // 800AF328
  c->lr=0x800AF330u; f_802657AC(c); // 800AF32C
  c->f[29]=c->f[1]; // 800AF330
  c->r[3]=c->r[1]+0x0000002Cu; // 800AF334
  c->lr=0x800AF33Cu; f_802657AC(c); // 800AF338
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 800AF33C
  c->f[2]=c->f[29]; // 800AF340
  c->lr=0x800AF348u; f_80394548(c); // 800AF344
  {uint32_t ea=c->r[2]+0xFFFF8DB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF348
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800AF34C
  fcmp(c,0,c->f[3],c->f[27]); // 800AF350
  if (!crb(c,1)) { goto L_800AF360; } // 800AF354
  c->f[3]=c->f[27]; // 800AF358
  goto L_800AF370; // 800AF35C
L_800AF360:;
  c->f[0]=-c->f[27]; // 800AF360
  fcmp(c,0,c->f[3],c->f[0]); // 800AF364
  if (!crb(c,0)) { goto L_800AF370; } // 800AF368
  c->f[3]=c->f[0]; // 800AF36C
L_800AF370:;
  cmps(c,0,(int32_t)c->r[28],0); // 800AF370
  if (crb(c,2)) { goto L_800AF37C; } // 800AF374
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[3]);} // 800AF378
L_800AF37C:;
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF37C
  c->r[3]=c->r[1]+0x000001A0u; // 800AF380
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF384
  c->f[2]=c->f[1]; // 800AF388
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800AF38C
  c->lr=0x800AF394u; f_803949B8(c); // 800AF390
  goto L_800AF3A0; // 800AF394
L_800AF398:;
  c->r[3]=c->r[1]+0x000001A0u; // 800AF398
  c->lr=0x800AF3A0u; f_80264680(c); // 800AF39C
L_800AF3A0:;
  c->r[3]=c->r[1]+0x0000005Cu; // 800AF3A0
  c->lr=0x800AF3A8u; f_80065368(c); // 800AF3A4
  cmps(c,0,(int32_t)c->r[3],0); // 800AF3A8
  if (crb(c,2)) { goto L_800AF540; } // 800AF3AC
  c->r[3]=c->r[1]+0x00000074u; // 800AF3B0
  c->r[4]=c->r[1]+0x00000068u; // 800AF3B4
  c->lr=0x800AF3BCu; f_800653BC(c); // 800AF3B8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF3BC
  fcmp(c,0,c->f[1],c->f[3]); // 800AF3C0
  if (!crb(c,1)) { goto L_800AF43C; } // 800AF3C4
  c->r[4]=c->r[1]+0x000001A0u; // 800AF3C8
  c->r[3]=c->r[26]|c->r[26]; // 800AF3CC
  c->r[5]=c->r[4]|c->r[4]; // 800AF3D0
  c->lr=0x800AF3D8u; f_802646E0(c); // 800AF3D4
  c->r[3]=R32(c->r[1]+0x000001A0u); // 800AF3D8
  c->r[0]=R32(c->r[1]+0x000001A4u); // 800AF3DC
  W32(c->r[31]+0x00000000u,c->r[3]); // 800AF3E0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800AF3E4
  c->r[3]=R32(c->r[1]+0x000001A8u); // 800AF3E8
  c->r[0]=R32(c->r[1]+0x000001ACu); // 800AF3EC
  W32(c->r[31]+0x00000008u,c->r[3]); // 800AF3F0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800AF3F4
  c->r[3]=R32(c->r[1]+0x000001B0u); // 800AF3F8
  c->r[0]=R32(c->r[1]+0x000001B4u); // 800AF3FC
  W32(c->r[31]+0x00000010u,c->r[3]); // 800AF400
  W32(c->r[31]+0x00000014u,c->r[0]); // 800AF404
  c->r[3]=R32(c->r[1]+0x000001B8u); // 800AF408
  c->r[0]=R32(c->r[1]+0x000001BCu); // 800AF40C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AF410
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800AF414
  c->r[3]=R32(c->r[1]+0x000001C0u); // 800AF418
  c->r[0]=R32(c->r[1]+0x000001C4u); // 800AF41C
  W32(c->r[31]+0x00000020u,c->r[3]); // 800AF420
  W32(c->r[31]+0x00000024u,c->r[0]); // 800AF424
  c->r[3]=R32(c->r[1]+0x000001C8u); // 800AF428
  c->r[0]=R32(c->r[1]+0x000001CCu); // 800AF42C
  W32(c->r[31]+0x00000028u,c->r[3]); // 800AF430
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800AF434
  goto L_800AF6B8; // 800AF438
L_800AF43C:;
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF43C
  c->f[1]=c->f[3]; // 800AF440
  c->r[3]=c->r[1]+0x00000170u; // 800AF444
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[30]); // 800AF448
  c->lr=0x800AF450u; f_803949B8(c); // 800AF44C
  cmps(c,0,(int32_t)c->r[29],0); // 800AF450
  if (crb(c,2)) { goto L_800AF45C; } // 800AF454
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[30]);} // 800AF458
L_800AF45C:;
  c->r[3]=c->r[1]+0x00000170u; // 800AF45C
  c->r[4]=c->r[1]+0x000001A0u; // 800AF460
  c->r[5]=c->r[1]+0x000000B0u; // 800AF464
  c->lr=0x800AF46Cu; f_802646E0(c); // 800AF468
  c->r[27]=R32(c->r[1]+0x000000B0u); // 800AF46C
  c->r[4]=c->r[1]+0x00000170u; // 800AF470
  c->r[28]=R32(c->r[1]+0x000000B4u); // 800AF474
  c->r[3]=c->r[26]|c->r[26]; // 800AF478
  c->r[29]=R32(c->r[1]+0x000000B8u); // 800AF47C
  c->r[5]=c->r[4]|c->r[4]; // 800AF480
  c->r[30]=R32(c->r[1]+0x000000BCu); // 800AF484
  c->r[12]=R32(c->r[1]+0x000000C0u); // 800AF488
  c->r[11]=R32(c->r[1]+0x000000C4u); // 800AF48C
  c->r[10]=R32(c->r[1]+0x000000C8u); // 800AF490
  c->r[9]=R32(c->r[1]+0x000000CCu); // 800AF494
  c->r[8]=R32(c->r[1]+0x000000D0u); // 800AF498
  c->r[7]=R32(c->r[1]+0x000000D4u); // 800AF49C
  c->r[6]=R32(c->r[1]+0x000000D8u); // 800AF4A0
  c->r[0]=R32(c->r[1]+0x000000DCu); // 800AF4A4
  W32(c->r[1]+0x00000170u,c->r[27]); // 800AF4A8
  W32(c->r[1]+0x00000174u,c->r[28]); // 800AF4AC
  W32(c->r[1]+0x00000178u,c->r[29]); // 800AF4B0
  W32(c->r[1]+0x0000017Cu,c->r[30]); // 800AF4B4
  W32(c->r[1]+0x00000180u,c->r[12]); // 800AF4B8
  W32(c->r[1]+0x00000184u,c->r[11]); // 800AF4BC
  W32(c->r[1]+0x00000188u,c->r[10]); // 800AF4C0
  W32(c->r[1]+0x0000018Cu,c->r[9]); // 800AF4C4
  W32(c->r[1]+0x00000190u,c->r[8]); // 800AF4C8
  W32(c->r[1]+0x00000194u,c->r[7]); // 800AF4CC
  W32(c->r[1]+0x00000198u,c->r[6]); // 800AF4D0
  W32(c->r[1]+0x0000019Cu,c->r[0]); // 800AF4D4
  c->lr=0x800AF4DCu; f_802646E0(c); // 800AF4D8
  c->r[3]=R32(c->r[1]+0x00000170u); // 800AF4DC
  c->r[0]=R32(c->r[1]+0x00000174u); // 800AF4E0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800AF4E4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800AF4E8
  c->r[3]=R32(c->r[1]+0x00000178u); // 800AF4EC
  c->r[0]=R32(c->r[1]+0x0000017Cu); // 800AF4F0
  W32(c->r[31]+0x00000008u,c->r[3]); // 800AF4F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800AF4F8
  c->r[3]=R32(c->r[1]+0x00000180u); // 800AF4FC
  c->r[0]=R32(c->r[1]+0x00000184u); // 800AF500
  W32(c->r[31]+0x00000010u,c->r[3]); // 800AF504
  W32(c->r[31]+0x00000014u,c->r[0]); // 800AF508
  c->r[3]=R32(c->r[1]+0x00000188u); // 800AF50C
  c->r[0]=R32(c->r[1]+0x0000018Cu); // 800AF510
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AF514
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800AF518
  c->r[3]=R32(c->r[1]+0x00000190u); // 800AF51C
  c->r[0]=R32(c->r[1]+0x00000194u); // 800AF520
  W32(c->r[31]+0x00000020u,c->r[3]); // 800AF524
  W32(c->r[31]+0x00000024u,c->r[0]); // 800AF528
  c->r[3]=R32(c->r[1]+0x00000198u); // 800AF52C
  c->r[0]=R32(c->r[1]+0x0000019Cu); // 800AF530
  W32(c->r[31]+0x00000028u,c->r[3]); // 800AF534
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800AF538
  goto L_800AF6B8; // 800AF53C
L_800AF540:;
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 800AF540
  c->r[3]=c->r[1]+0x00000020u; // 800AF544
  c->r[4]=c->r[1]+0x00000068u; // 800AF548
  c->lr=0x800AF550u; f_8003F484(c); // 800AF54C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF550
  c->r[3]=c->r[1]+0x00000020u; // 800AF554
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800AF558
  c->lr=0x800AF560u; f_80065368(c); // 800AF55C
  cmps(c,0,(int32_t)c->r[3],0); // 800AF560
  if (!crb(c,2)) { goto L_800AF58C; } // 800AF564
  c->r[3]=c->r[1]+0x00000020u; // 800AF568
  c->lr=0x800AF570u; f_802657AC(c); // 800AF56C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF570
  c->f[2]=c->f[1]; // 800AF574
  c->f[0]=-c->f[0]; // 800AF578
  c->f[1]=c->f[0]; // 800AF57C
  c->lr=0x800AF584u; f_80394548(c); // 800AF580
  {uint32_t ea=c->r[2]+0xFFFF8DB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF584
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 800AF588
L_800AF58C:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF58C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF590
  c->lr=0x800AF598u; f_80394548(c); // 800AF594
  {uint32_t ea=c->r[2]+0xFFFF8DB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF598
  fcmp(c,0,c->f[28],c->f[31]); // 800AF59C
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 800AF5A0
  if (!crb(c,1)) { goto L_800AF5B0; } // 800AF5A4
  c->f[28]=c->f[31]; // 800AF5A8
  goto L_800AF5C0; // 800AF5AC
L_800AF5B0:;
  c->f[0]=-c->f[31]; // 800AF5B0
  fcmp(c,0,c->f[28],c->f[0]); // 800AF5B4
  if (!crb(c,0)) { goto L_800AF5C0; } // 800AF5B8
  c->f[28]=c->f[0]; // 800AF5BC
L_800AF5C0:;
  cmps(c,0,(int32_t)c->r[27],0); // 800AF5C0
  if (crb(c,2)) { goto L_800AF5CC; } // 800AF5C4
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[28]);} // 800AF5C8
L_800AF5CC:;
  fcmp(c,0,c->f[29],c->f[30]); // 800AF5CC
  if (!crb(c,1)) { goto L_800AF5DC; } // 800AF5D0
  c->f[29]=c->f[30]; // 800AF5D4
  goto L_800AF5EC; // 800AF5D8
L_800AF5DC:;
  c->f[0]=-c->f[30]; // 800AF5DC
  fcmp(c,0,c->f[29],c->f[0]); // 800AF5E0
  if (!crb(c,0)) { goto L_800AF5EC; } // 800AF5E4
  c->f[29]=c->f[0]; // 800AF5E8
L_800AF5EC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800AF5EC
  if (crb(c,2)) { goto L_800AF5F8; } // 800AF5F0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[29]);} // 800AF5F4
L_800AF5F8:;
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF5F8
  c->r[3]=c->r[1]+0x00000110u; // 800AF5FC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF600
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[28]); // 800AF604
  c->f[3]=c->f[2]; // 800AF608
  c->lr=0x800AF610u; f_803949B8(c); // 800AF60C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF610
  c->r[3]=c->r[1]+0x00000140u; // 800AF614
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF618
  c->f[3]=c->f[1]; // 800AF61C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[29]); // 800AF620
  c->lr=0x800AF628u; f_803949B8(c); // 800AF624
  c->r[3]=c->r[1]+0x00000110u; // 800AF628
  c->r[4]=c->r[1]+0x00000140u; // 800AF62C
  c->r[5]=c->r[1]+0x00000080u; // 800AF630
  c->lr=0x800AF638u; f_802646E0(c); // 800AF634
  c->r[3]=c->r[1]+0x00000080u; // 800AF638
  c->r[4]=c->r[1]+0x000001A0u; // 800AF63C
  c->r[5]=c->r[1]+0x000000E0u; // 800AF640
  c->lr=0x800AF648u; f_802646E0(c); // 800AF644
  c->r[4]=c->r[1]+0x000000E0u; // 800AF648
  c->r[3]=c->r[26]|c->r[26]; // 800AF64C
  c->r[5]=c->r[4]|c->r[4]; // 800AF650
  c->lr=0x800AF658u; f_802646E0(c); // 800AF654
  c->r[3]=R32(c->r[1]+0x000000E0u); // 800AF658
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800AF65C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800AF660
  W32(c->r[31]+0x00000004u,c->r[0]); // 800AF664
  c->r[3]=R32(c->r[1]+0x000000E8u); // 800AF668
  c->r[0]=R32(c->r[1]+0x000000ECu); // 800AF66C
  W32(c->r[31]+0x00000008u,c->r[3]); // 800AF670
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800AF674
  c->r[3]=R32(c->r[1]+0x000000F0u); // 800AF678
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800AF67C
  W32(c->r[31]+0x00000010u,c->r[3]); // 800AF680
  W32(c->r[31]+0x00000014u,c->r[0]); // 800AF684
  c->r[3]=R32(c->r[1]+0x000000F8u); // 800AF688
  c->r[0]=R32(c->r[1]+0x000000FCu); // 800AF68C
  W32(c->r[31]+0x00000018u,c->r[3]); // 800AF690
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800AF694
  c->r[3]=R32(c->r[1]+0x00000100u); // 800AF698
  c->r[0]=R32(c->r[1]+0x00000104u); // 800AF69C
  W32(c->r[31]+0x00000020u,c->r[3]); // 800AF6A0
  W32(c->r[31]+0x00000024u,c->r[0]); // 800AF6A4
  c->r[3]=R32(c->r[1]+0x00000108u); // 800AF6A8
  c->r[0]=R32(c->r[1]+0x0000010Cu); // 800AF6AC
  W32(c->r[31]+0x00000028u,c->r[3]); // 800AF6B0
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800AF6B4
L_800AF6B8:;
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,31,ea,0,0);} // 800AF6B8
  {uint32_t ea=c->r[1]+0x00000260u; c->f[31]=RF64(ea);} // 800AF6BC
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,30,ea,0,0);} // 800AF6C0
  {uint32_t ea=c->r[1]+0x00000250u; c->f[30]=RF64(ea);} // 800AF6C4
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,29,ea,0,0);} // 800AF6C8
  {uint32_t ea=c->r[1]+0x00000240u; c->f[29]=RF64(ea);} // 800AF6CC
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,28,ea,0,0);} // 800AF6D0
  {uint32_t ea=c->r[1]+0x00000230u; c->f[28]=RF64(ea);} // 800AF6D4
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,27,ea,0,0);} // 800AF6D8
  c->r[11]=c->r[1]+0x00000220u; // 800AF6DC
  {uint32_t ea=c->r[1]+0x00000220u; c->f[27]=RF64(ea);} // 800AF6E0
  c->lr=0x800AF6E8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AF6E4
  c->r[0]=R32(c->r[1]+0x00000274u); // 800AF6E8
  c->lr=c->r[0]; // 800AF6EC
  c->r[1]=c->r[1]+0x00000270u; // 800AF6F0
  return; // 800AF6F4
}

// fn_800AF6F8
void f_800AF6F8(Ctx* __restrict c) {
  trace_call(0x800AF6F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF6F8
  c->r[0]=c->lr; // 800AF6FC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF700
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AF704
  c->r[3]=c->r[1]+0x00000008u; // 800AF708
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF70C
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF710
  c->lr=0x800AF718u; f_800521A0(c); // 800AF714
  c->r[3]=c->r[1]+0x00000008u; // 800AF718
  c->lr=0x800AF720u; f_802657AC(c); // 800AF71C
  {uint32_t ea=c->r[2]+0xFFFF8D98u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF720
  {uint32_t ea=c->r[2]+0xFFFF8D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF724
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800AF728
  fcmp(c,0,c->f[1],c->f[0]); // 800AF72C
  if (!crb(c,1)) { goto L_800AF73C; } // 800AF730
  c->f[1]=c->f[0]; // 800AF734
  goto L_800AF74C; // 800AF738
L_800AF73C:;
  {uint32_t ea=c->r[2]+0xFFFF8D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF73C
  fcmp(c,0,c->f[1],c->f[0]); // 800AF740
  if (!crb(c,0)) { goto L_800AF74C; } // 800AF744
  c->f[1]=c->f[0]; // 800AF748
L_800AF74C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AF74C
  c->lr=c->r[0]; // 800AF750
  c->r[1]=c->r[1]+0x00000020u; // 800AF754
  return; // 800AF758
}

// fn_800AF75C
void f_800AF75C(Ctx* __restrict c) {
  trace_call(0x800AF75Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF75C
  c->r[0]=c->lr; // 800AF760
  W32(c->r[1]+0x00000164u,c->r[0]); // 800AF764
  c->r[0]=0u+0x00000006u; // 800AF768
  c->r[5]=c->r[1]+0x00000118u; // 800AF76C
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 800AF770
  c->r[31]=c->r[4]|c->r[4]; // 800AF774
  c->r[4]=c->r[3]+0x00000940u; // 800AF778
  W32(c->r[1]+0x00000158u,c->r[30]); // 800AF77C
  c->r[30]=c->r[3]|c->r[3]; // 800AF780
  c->ctr=c->r[0]; // 800AF784
L_800AF788:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AF788
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AF78C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AF790
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AF794
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AF788; } // 800AF798
  c->r[3]=c->r[30]|c->r[30]; // 800AF79C
  c->r[4]=c->r[1]+0x0000011Cu; // 800AF7A0
  c->lr=0x800AF7A8u; f_800AF6F8(c); // 800AF7A4
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[1]);} // 800AF7A8
  c->r[3]=c->r[30]+0x00000394u; // 800AF7AC
  c->r[4]=0u+0x0000000Du; // 800AF7B0
  c->lr=0x800AF7B8u; f_80076DD4(c); // 800AF7B4
  cmps(c,0,(int32_t)c->r[3],0); // 800AF7B8
  if (crb(c,2)) { goto L_800AF7EC; } // 800AF7BC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF7C0
  c->r[3]=c->r[1]+0x00000014u; // 800AF7C4
  c->f[2]=c->f[1]; // 800AF7C8
  c->f[3]=c->f[1]; // 800AF7CC
  c->lr=0x800AF7D4u; f_800521A0(c); // 800AF7D0
  c->r[4]=c->r[3]|c->r[3]; // 800AF7D4
  c->r[3]=c->r[1]+0x0000011Cu; // 800AF7D8
  c->lr=0x800AF7E0u; f_80032FF4(c); // 800AF7DC
  c->r[3]=c->r[30]+0x000008ECu; // 800AF7E0
  c->r[4]=c->r[1]+0x0000011Cu; // 800AF7E4
  c->lr=0x800AF7ECu; f_8016A37C(c); // 800AF7E8
L_800AF7EC:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800AF7EC
  c->r[4]=c->r[30]+0x000008D0u; // 800AF7F0
  c->r[3]=c->r[1]+0x000000ECu; // 800AF7F4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AF7F8
  c->ctr=c->r[12]; // 800AF7FC
  if (true) { c->lr=0x800AF804u; dispatch(c,c->ctr); } // 800AF800
  c->r[0]=0u+0x00000006u; // 800AF804
  c->r[5]=c->r[1]+0x00000058u; // 800AF808
  c->r[4]=c->r[30]+0x00000940u; // 800AF80C
  c->ctr=c->r[0]; // 800AF810
L_800AF814:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AF814
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AF818
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AF81C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AF820
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AF814; } // 800AF824
  c->r[3]=c->r[1]+0x000000ECu; // 800AF828
  c->r[4]=c->r[1]+0x0000005Cu; // 800AF82C
  c->r[5]=c->r[1]+0x000000BCu; // 800AF830
  c->lr=0x800AF838u; f_802646E0(c); // 800AF834
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF838
  c->r[3]=c->r[1]+0x00000020u; // 800AF83C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF840
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF844
  c->lr=0x800AF84Cu; f_800521A0(c); // 800AF848
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF84C
  c->r[3]=c->r[1]+0x00000008u; // 800AF850
  {uint32_t ea=c->r[1]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF854
  {uint32_t ea=c->r[1]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AF858
  c->lr=0x800AF860u; f_800521A0(c); // 800AF85C
  c->lr=0x800AF864u; f_80128B5C(c); // 800AF860
  c->r[4]=c->r[1]+0x00000008u; // 800AF864
  c->r[5]=c->r[1]+0x00000020u; // 800AF868
  c->r[6]=0u+0x00000000u; // 800AF86C
  c->lr=0x800AF874u; f_8012A620(c); // 800AF870
  cmps(c,0,(int32_t)c->r[3],0); // 800AF874
  if (crb(c,2)) { goto L_800AF8B0; } // 800AF878
  c->r[3]=c->r[1]+0x000000BCu; // 800AF87C
  c->r[4]=c->r[1]+0x00000020u; // 800AF880
  c->lr=0x800AF888u; f_80032FF4(c); // 800AF884
  c->r[3]=c->r[1]+0x000000ECu; // 800AF888
  c->r[4]=c->r[1]+0x0000002Cu; // 800AF88C
  c->lr=0x800AF894u; f_80264994(c); // 800AF890
  c->r[3]=c->r[1]+0x0000002Cu; // 800AF894
  c->r[4]=c->r[1]+0x000000BCu; // 800AF898
  c->r[5]=c->r[1]+0x0000008Cu; // 800AF89C
  c->lr=0x800AF8A4u; f_802646E0(c); // 800AF8A0
  c->r[3]=c->r[30]+0x000008ECu; // 800AF8A4
  c->r[4]=c->r[1]+0x0000008Cu; // 800AF8A8
  c->lr=0x800AF8B0u; f_8016A37C(c); // 800AF8AC
L_800AF8B0:;
  c->r[0]=R32(c->r[1]+0x00000164u); // 800AF8B0
  c->r[31]=R32(c->r[1]+0x0000015Cu); // 800AF8B4
  c->r[30]=R32(c->r[1]+0x00000158u); // 800AF8B8
  c->lr=c->r[0]; // 800AF8BC
  c->r[1]=c->r[1]+0x00000160u; // 800AF8C0
  return; // 800AF8C4
}

// fn_800AF8C8
void f_800AF8C8(Ctx* __restrict c) {
  trace_call(0x800AF8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF8C8
  c->r[0]=c->lr; // 800AF8CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AF8D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AF8D4
  c->r[31]=c->r[4]|c->r[4]; // 800AF8D8
  c->r[4]=c->r[4]+0x00000024u; // 800AF8DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AF8E0
  c->r[30]=c->r[3]|c->r[3]; // 800AF8E4
  c->r[3]=c->r[1]+0x00000008u; // 800AF8E8
  c->lr=0x800AF8F0u; f_8003F484(c); // 800AF8EC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF8F0
  c->r[4]=c->r[3]|c->r[3]; // 800AF8F4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AF8F8
  c->r[3]=c->r[30]|c->r[30]; // 800AF8FC
  {uint32_t ea=c->r[31]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF900
  c->r[5]=0u+0x00000000u; // 800AF904
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800AF908
  c->r[6]=R32(c->r[31]+0x00000010u); // 800AF90C
  c->lr=0x800AF914u; f_800AEBF8(c); // 800AF910
  cmps(c,0,(int32_t)c->r[3],1); // 800AF914
  W32(c->r[31]+0x00000010u,c->r[3]); // 800AF918
  if (crb(c,2)) { goto L_800AF96C; } // 800AF91C
  if (!crb(c,0)) { goto L_800AF930; } // 800AF920
  cmps(c,0,(int32_t)c->r[3],0); // 800AF924
  if (!crb(c,0)) { goto L_800AF93C; } // 800AF928
  goto L_800AF9DC; // 800AF92C
L_800AF930:;
  cmps(c,0,(int32_t)c->r[3],3); // 800AF930
  if (!crb(c,0)) { goto L_800AF9DC; } // 800AF934
  goto L_800AF9A4; // 800AF938
L_800AF93C:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 800AF93C
  c->r[0]=R32(c->r[30]+0x00000C90u); // 800AF940
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800AF944
  if (crb(c,2)) { goto L_800AF9DC; } // 800AF948
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF94C
  c->r[3]=c->r[30]+0x00000C88u; // 800AF950
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF954
  c->r[4]=c->r[30]+0x000008ECu; // 800AF958
  c->r[6]=0u+0x00000001u; // 800AF95C
  c->r[7]=0u+0x00000004u; // 800AF960
  c->lr=0x800AF968u; f_800BB0C8(c); // 800AF964
  goto L_800AF9DC; // 800AF968
L_800AF96C:;
  c->r[5]=R32(c->r[31]+0x00000018u); // 800AF96C
  cmps(c,0,(int32_t)c->r[5],0); // 800AF970
  if (crb(c,0)) { goto L_800AF9DC; } // 800AF974
  c->r[0]=R32(c->r[30]+0x00000C90u); // 800AF978
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800AF97C
  if (crb(c,2)) { goto L_800AF9DC; } // 800AF980
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF984
  c->r[3]=c->r[30]+0x00000C88u; // 800AF988
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF98C
  c->r[4]=c->r[30]+0x000008ECu; // 800AF990
  c->r[6]=0u+0x00000001u; // 800AF994
  c->r[7]=0u+0x00000000u; // 800AF998
  c->lr=0x800AF9A0u; f_800BB0C8(c); // 800AF99C
  goto L_800AF9DC; // 800AF9A0
L_800AF9A4:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 800AF9A4
  cmps(c,0,(int32_t)c->r[0],0); // 800AF9A8
  if (crb(c,0)) { goto L_800AF9DC; } // 800AF9AC
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 800AF9B0
  c->r[0]=R32(c->r[30]+0x00000C90u); // 800AF9B4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800AF9B8
  if (crb(c,2)) { goto L_800AF9DC; } // 800AF9BC
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AF9C0
  c->r[3]=c->r[30]+0x00000C88u; // 800AF9C4
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AF9C8
  c->r[4]=c->r[30]+0x000008ECu; // 800AF9CC
  c->r[6]=0u+0x00000001u; // 800AF9D0
  c->r[7]=0u+0x00000000u; // 800AF9D4
  c->lr=0x800AF9DCu; f_800BB0C8(c); // 800AF9D8
L_800AF9DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AF9DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AF9E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AF9E4
  c->lr=c->r[0]; // 800AF9E8
  c->r[1]=c->r[1]+0x00000020u; // 800AF9EC
  return; // 800AF9F0
}

// fn_800AF9F4
void f_800AF9F4(Ctx* __restrict c) {
  trace_call(0x800AF9F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AF9F4
  c->r[0]=c->lr; // 800AF9F8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800AF9FC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800AFA00
  c->r[31]=c->r[5]|c->r[5]; // 800AFA04
  W32(c->r[1]+0x00000058u,c->r[30]); // 800AFA08
  c->r[30]=c->r[3]|c->r[3]; // 800AFA0C
  c->r[0]=R32(c->r[5]+0x00000020u); // 800AFA10
  cmps(c,0,(int32_t)c->r[0],0); // 800AFA14
  if (!crb(c,0)) { goto L_800AFA64; } // 800AFA18
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 800AFA1C
  cmps(c,0,(int32_t)c->r[0],0); // 800AFA20
  if (!crb(c,0)) { goto L_800AFA64; } // 800AFA24
  c->r[4]=R32(c->r[3]+0x00001050u); // 800AFA28
  c->r[5]=0u+0x00000000u; // 800AFA2C
  c->lr=0x800AFA34u; f_800C77F8(c); // 800AFA30
  c->r[4]=c->r[3]|c->r[3]; // 800AFA34
  c->r[3]=c->r[30]+0x000008ECu; // 800AFA38
  c->lr=0x800AFA40u; f_80075440(c); // 800AFA3C
  W32(c->r[31]+0x00000020u,c->r[3]); // 800AFA40
  c->r[3]=c->r[30]|c->r[30]; // 800AFA44
  c->r[5]=0u+0x00000001u; // 800AFA48
  c->r[4]=R32(c->r[30]+0x00001050u); // 800AFA4C
  c->lr=0x800AFA54u; f_800C77F8(c); // 800AFA50
  c->r[4]=c->r[3]|c->r[3]; // 800AFA54
  c->r[3]=c->r[30]+0x000008ECu; // 800AFA58
  c->lr=0x800AFA60u; f_80075440(c); // 800AFA5C
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800AFA60
L_800AFA64:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 800AFA64
  c->r[5]=R32(c->r[31]+0x00000020u); // 800AFA68
  c->r[3]=R32(c->r[3]+0x00000000u); // 800AFA6C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800AFA70
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800AFA74
  if (crb(c,2)) { goto L_800AFA98; } // 800AFA78
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFA7C
  c->r[3]=c->r[30]+0x00000C88u; // 800AFA80
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFA84
  c->r[4]=c->r[30]+0x000008ECu; // 800AFA88
  c->r[6]=0u+0x00000000u; // 800AFA8C
  c->r[7]=0u+0x00000000u; // 800AFA90
  c->lr=0x800AFA98u; f_800BB0C8(c); // 800AFA94
L_800AFA98:;
  c->r[3]=R32(c->r[30]+0x000008C4u); // 800AFA98
  cmps(c,0,(int32_t)c->r[3],0); // 800AFA9C
  if (!crb(c,1)) { goto L_800AFB1C; } // 800AFAA0
  c->r[4]=R32(c->r[30]+0x000008CCu); // 800AFAA4
  c->r[0]=c->r[3]-c->r[4]; // 800AFAA8
  cmps(c,0,(int32_t)c->r[0],2); // 800AFAAC
  if (crb(c,0)) { goto L_800AFB04; } // 800AFAB0
  c->r[0]=c->r[4]+0x00000001u; // 800AFAB4
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFAB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800AFABC
  c->r[6]=R32(c->r[30]+0x000008A4u); // 800AFAC0
  {uint32_t ea=c->r[30]+0x000008C8u; WF32(ea,c->f[0]);} // 800AFAC4
  c->r[3]=c->r[1]+0x00000014u; // 800AFAC8
  c->r[5]=c->r[6]+c->r[0]; // 800AFACC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800AFAD0
  c->r[7]=c->r[5]+0x0000000Cu; // 800AFAD4
  c->r[4]=c->r[6]+c->r[0]; // 800AFAD8
  c->r[6]=c->r[4]+0x0000000Cu; // 800AFADC
  c->lr=0x800AFAE4u; f_800AFB40(c); // 800AFAE0
  {uint32_t ea=c->r[30]+0x000008C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFAE4
  c->r[3]=c->r[1]+0x00000008u; // 800AFAE8
  c->r[4]=c->r[1]+0x00000014u; // 800AFAEC
  c->lr=0x800AFAF4u; f_800AFD64(c); // 800AFAF0
  c->r[3]=c->r[31]+0x00000010u; // 800AFAF4
  c->r[4]=c->r[1]+0x00000008u; // 800AFAF8
  c->lr=0x800AFB00u; f_8003F468(c); // 800AFAFC
  goto L_800AFB1C; // 800AFB00
L_800AFB04:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800AFB04
  c->r[4]=R32(c->r[30]+0x000008A4u); // 800AFB08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800AFB0C
  c->r[3]=c->r[31]+0x00000010u; // 800AFB10
  c->r[4]=c->r[4]+c->r[0]; // 800AFB14
  c->lr=0x800AFB1Cu; f_8003F468(c); // 800AFB18
L_800AFB1C:;
  {uint32_t ea=c->r[30]+0x0000039Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFB1C
  c->r[3]=c->r[30]+0x000008ECu; // 800AFB20
  c->lr=0x800AFB28u; f_80075394(c); // 800AFB24
  c->r[0]=R32(c->r[1]+0x00000064u); // 800AFB28
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800AFB2C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800AFB30
  c->lr=c->r[0]; // 800AFB34
  c->r[1]=c->r[1]+0x00000060u; // 800AFB38
  return; // 800AFB3C
}

// fn_800AFB40
void f_800AFB40(Ctx* __restrict c) {
  trace_call(0x800AFB40u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFB40
  c->r[0]=c->lr; // 800AFB44
  W32(c->r[1]+0x00000084u,c->r[0]); // 800AFB48
  c->r[11]=c->r[1]+0x00000080u; // 800AFB4C
  c->lr=0x800AFB54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AFB50
  c->r[0]=R8(c->r[13]+0xFFFF9500u); // 800AFB54
  c->r[31]=c->r[3]|c->r[3]; // 800AFB58
  c->r[27]=c->r[4]|c->r[4]; // 800AFB5C
  c->r[28]=c->r[5]|c->r[5]; // 800AFB60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800AFB64
  c->r[29]=c->r[6]|c->r[6]; // 800AFB68
  c->r[30]=c->r[7]|c->r[7]; // 800AFB6C
  if (!crb(c,2)) { goto L_800AFBCC; } // 800AFB70
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AFB74
  c->r[3]=0u+0x80470000u; // 800AFB78
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFB7C
  c->r[3]=c->r[3]+0x00000D88u; // 800AFB80
  {uint32_t ea=c->r[2]+0xFFFF8DB8u; c->f[5]=c->ps1[5]=RF32(ea);} // 800AFB84
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 800AFB88
  c->f[7]=c->f[3]; // 800AFB8C
  {uint32_t ea=c->r[2]+0xFFFF8D64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFB90
  c->f[8]=c->f[3]; // 800AFB94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 800AFB98
  {uint32_t ea=c->r[2]+0xFFFF8D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFB9C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 800AFBA0
  {uint32_t ea=c->r[2]+0xFFFF8DB4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFBA4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800AFBA8
  {uint32_t ea=c->r[2]+0xFFFF8D90u; c->f[6]=c->ps1[6]=RF32(ea);} // 800AFBAC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 800AFBB0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AFBB4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 800AFBB8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 800AFBBC
  c->lr=0x800AFBC4u; f_800AFCD8(c); // 800AFBC0
  c->r[0]=0u+0x00000001u; // 800AFBC4
  W8(c->r[13]+0xFFFF9500u,c->r[0]); // 800AFBC8
L_800AFBCC:;
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFBCC
  c->r[3]=c->r[1]+0x00000028u; // 800AFBD0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFBD4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800AFBD8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFBDC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800AFBE0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFBE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800AFBE8
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFBEC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800AFBF0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 800AFBF4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800AFBF8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 800AFBFC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800AFC00
  {uint32_t ea=c->r[28]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 800AFC04
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800AFC08
  {uint32_t ea=c->r[27]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 800AFC0C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800AFC10
  {uint32_t ea=c->r[29]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFC14
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFC18
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFC1C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800AFC20
  c->lr=0x800AFC28u; f_800AFCD8(c); // 800AFC24
  c->r[3]=c->r[1]+0x00000028u; // 800AFC28
  c->r[4]=0u+0x80470000u; // 800AFC2C
  c->r[5]=c->r[3]|c->r[3]; // 800AFC30
  c->r[4]=c->r[4]+0x00000D88u; // 800AFC34
  c->lr=0x800AFC3Cu; f_802655E8(c); // 800AFC38
  c->r[4]=R32(c->r[1]+0x00000028u); // 800AFC3C
  c->r[11]=c->r[1]+0x00000080u; // 800AFC40
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800AFC44
  c->r[3]=c->r[31]|c->r[31]; // 800AFC48
  W32(c->r[31]+0x00000000u,c->r[4]); // 800AFC4C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800AFC50
  c->r[4]=R32(c->r[1]+0x00000030u); // 800AFC54
  c->r[0]=R32(c->r[1]+0x00000034u); // 800AFC58
  W32(c->r[31]+0x00000008u,c->r[4]); // 800AFC5C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800AFC60
  c->r[4]=R32(c->r[1]+0x00000038u); // 800AFC64
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800AFC68
  W32(c->r[31]+0x00000010u,c->r[4]); // 800AFC6C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800AFC70
  c->r[4]=R32(c->r[1]+0x00000040u); // 800AFC74
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AFC78
  W32(c->r[31]+0x00000018u,c->r[4]); // 800AFC7C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800AFC80
  c->r[4]=R32(c->r[1]+0x00000048u); // 800AFC84
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800AFC88
  W32(c->r[31]+0x00000020u,c->r[4]); // 800AFC8C
  W32(c->r[31]+0x00000024u,c->r[0]); // 800AFC90
  c->r[4]=R32(c->r[1]+0x00000050u); // 800AFC94
  c->r[0]=R32(c->r[1]+0x00000054u); // 800AFC98
  W32(c->r[31]+0x00000028u,c->r[4]); // 800AFC9C
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800AFCA0
  c->r[4]=R32(c->r[1]+0x00000058u); // 800AFCA4
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800AFCA8
  W32(c->r[31]+0x00000030u,c->r[4]); // 800AFCAC
  W32(c->r[31]+0x00000034u,c->r[0]); // 800AFCB0
  c->r[4]=R32(c->r[1]+0x00000060u); // 800AFCB4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800AFCB8
  W32(c->r[31]+0x00000038u,c->r[4]); // 800AFCBC
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800AFCC0
  c->lr=0x800AFCC8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AFCC4
  c->r[0]=R32(c->r[1]+0x00000084u); // 800AFCC8
  c->lr=c->r[0]; // 800AFCCC
  c->r[1]=c->r[1]+0x00000080u; // 800AFCD0
  return; // 800AFCD4
}

// fn_800AFCD8
void f_800AFCD8(Ctx* __restrict c) {
  trace_call(0x800AFCD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFCD8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800AFCDC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800AFCE0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800AFCE4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800AFCE8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[30]=c->ps1[30]=RF32(ea);} // 800AFCEC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800AFCF0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[13]=c->ps1[13]=RF32(ea);} // 800AFCF4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[12]=c->ps1[12]=RF32(ea);} // 800AFCF8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[11]=c->ps1[11]=RF32(ea);} // 800AFCFC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800AFD00
  {uint32_t ea=c->r[1]+0x00000050u; c->f[9]=c->ps1[9]=RF32(ea);} // 800AFD04
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFD08
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800AFD0C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 800AFD10
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[3]);} // 800AFD14
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 800AFD18
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 800AFD1C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[6]);} // 800AFD20
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[7]);} // 800AFD24
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[8]);} // 800AFD28
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[30]);} // 800AFD2C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[31]);} // 800AFD30
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[13]);} // 800AFD34
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[12]);} // 800AFD38
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[11]);} // 800AFD3C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[10]);} // 800AFD40
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[9]);} // 800AFD44
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 800AFD48
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800AFD4C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800AFD50
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 800AFD54
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800AFD58
  c->r[1]=c->r[1]+0x00000030u; // 800AFD5C
  return; // 800AFD60
}

// fn_800AFD64
void f_800AFD64(Ctx* __restrict c) {
  trace_call(0x800AFD64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFD64
  c->r[0]=c->lr; // 800AFD68
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[1]); // 800AFD6C
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFD70
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AFD74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AFD78
  c->r[31]=c->r[3]|c->r[3]; // 800AFD7C
  c->r[3]=c->r[1]+0x00000008u; // 800AFD80
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800AFD84
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800AFD88
  c->r[5]=c->r[3]|c->r[3]; // 800AFD8C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 800AFD90
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800AFD94
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800AFD98
  c->lr=0x800AFDA0u; f_80394CE4(c); // 800AFD9C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFDA0
  c->r[3]=c->r[31]|c->r[31]; // 800AFDA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFDA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFDAC
  c->lr=0x800AFDB4u; f_800521A0(c); // 800AFDB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AFDB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AFDB8
  c->lr=c->r[0]; // 800AFDBC
  c->r[1]=c->r[1]+0x00000020u; // 800AFDC0
  return; // 800AFDC4
}

// fn_800AFDC8
void f_800AFDC8(Ctx* __restrict c) {
  trace_call(0x800AFDC8u);
  {uint32_t ea=c->r[1]+0xFFFFFD40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AFDC8
  c->r[0]=c->lr; // 800AFDCC
  W32(c->r[1]+0x000002C4u,c->r[0]); // 800AFDD0
  {uint32_t ea=c->r[1]+0x000002B0u; WF64(ea,c->f[31]);} // 800AFDD4
  {uint32_t ea=c->r[1]+0x000002B8u; psq_store(c,31,ea,0,0);} // 800AFDD8
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[30]);} // 800AFDDC
  {uint32_t ea=c->r[1]+0x000002A8u; psq_store(c,30,ea,0,0);} // 800AFDE0
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[29]);} // 800AFDE4
  {uint32_t ea=c->r[1]+0x00000298u; psq_store(c,29,ea,0,0);} // 800AFDE8
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[28]);} // 800AFDEC
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,28,ea,0,0);} // 800AFDF0
  c->r[11]=c->r[1]+0x00000280u; // 800AFDF4
  c->lr=0x800AFDFCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AFDF8
  c->r[12]=R32(c->r[3]+0x000008D0u); // 800AFDFC
  c->r[30]=c->r[3]|c->r[3]; // 800AFE00
  c->r[31]=c->r[4]|c->r[4]; // 800AFE04
  {uint32_t ea=c->r[3]+0x000004C8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800AFE08
  c->r[12]=R32(c->r[12]+0x00000040u); // 800AFE0C
  c->r[4]=c->r[30]+0x000008D0u; // 800AFE10
  {uint32_t ea=c->r[3]+0x000004CCu; c->f[30]=c->ps1[30]=RF32(ea);} // 800AFE14
  c->r[3]=c->r[1]+0x0000023Cu; // 800AFE18
  c->ctr=c->r[12]; // 800AFE1C
  if (true) { c->lr=0x800AFE24u; dispatch(c,c->ctr); } // 800AFE20
  c->r[0]=0u+0x00000006u; // 800AFE24
  c->r[5]=c->r[1]+0x00000208u; // 800AFE28
  c->r[4]=c->r[1]+0x00000238u; // 800AFE2C
  c->ctr=c->r[0]; // 800AFE30
L_800AFE34:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AFE34
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AFE38
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AFE3C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AFE40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AFE34; } // 800AFE44
  c->r[0]=0u+0x00000006u; // 800AFE48
  c->r[5]=c->r[1]+0x000001D8u; // 800AFE4C
  c->r[4]=c->r[30]+0x00000940u; // 800AFE50
  c->ctr=c->r[0]; // 800AFE54
L_800AFE58:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AFE58
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AFE5C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AFE60
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AFE64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AFE58; } // 800AFE68
  c->r[3]=c->r[1]+0x0000020Cu; // 800AFE6C
  c->r[4]=c->r[1]+0x000001DCu; // 800AFE70
  c->r[5]=c->r[1]+0x000001ACu; // 800AFE74
  c->lr=0x800AFE7Cu; f_802646E0(c); // 800AFE78
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFE7C
  c->r[3]=c->r[1]+0x00000080u; // 800AFE80
  {uint32_t ea=c->r[1]+0x000001F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFE84
  c->r[29]=0u+0x00000001u; // 800AFE88
  {uint32_t ea=c->r[1]+0x00000208u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFE8C
  c->lr=0x800AFE94u; f_800521A0(c); // 800AFE90
  c->r[3]=c->r[1]+0x00000080u; // 800AFE94
  c->lr=0x800AFE9Cu; f_802657AC(c); // 800AFE98
  {uint32_t ea=c->r[2]+0xFFFF8D6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFE9C
  c->f[29]=c->f[1]; // 800AFEA0
  fcmp(c,0,c->f[1],c->f[0]); // 800AFEA4
  if (!crb(c,0)) { goto L_800AFEB0; } // 800AFEA8
  c->r[29]=0u+0x00000000u; // 800AFEAC
L_800AFEB0:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 800AFEB0
  c->r[3]=c->r[30]|c->r[30]; // 800AFEB4
  c->r[12]=R32(c->r[12]+0x00000304u); // 800AFEB8
  c->ctr=c->r[12]; // 800AFEBC
  if (true) { c->lr=0x800AFEC4u; dispatch(c,c->ctr); } // 800AFEC0
  {uint32_t ea=c->r[2]+0xFFFF8DBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFEC4
  {uint32_t ea=c->r[2]+0xFFFF8DC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AFEC8
  c->f[28]=c->ps1[28]=S(c->f[2]*c->f[1]); // 800AFECC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800AFED0
  fcmp(c,0,c->f[28],c->f[0]); // 800AFED4
  if (!crb(c,1)) { goto L_800AFEE0; } // 800AFED8
  c->f[28]=c->f[0]; // 800AFEDC
L_800AFEE0:;
  c->r[0]=0u+0x00000006u; // 800AFEE0
  c->r[5]=c->r[1]+0x00000208u; // 800AFEE4
  c->r[4]=c->r[1]+0x000001A8u; // 800AFEE8
  c->ctr=c->r[0]; // 800AFEEC
L_800AFEF0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800AFEF0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800AFEF4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800AFEF8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800AFEFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AFEF0; } // 800AFF00
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFF04
  c->r[3]=c->r[1]+0x000000E0u; // 800AFF08
  {uint32_t ea=c->r[1]+0x00000258u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFF0C
  {uint32_t ea=c->r[1]+0x00000268u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFF10
  c->lr=0x800AFF18u; f_800521A0(c); // 800AFF14
  {uint32_t ea=c->r[1]+0x00000218u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFF18
  c->r[3]=c->r[1]+0x000000D4u; // 800AFF1C
  {uint32_t ea=c->r[1]+0x00000228u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFF20
  {uint32_t ea=c->r[1]+0x00000238u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFF24
  c->lr=0x800AFF2Cu; f_800521A0(c); // 800AFF28
  {uint32_t ea=c->r[1]+0x00000210u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFF2C
  c->r[3]=c->r[1]+0x000000C8u; // 800AFF30
  {uint32_t ea=c->r[1]+0x00000220u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AFF34
  {uint32_t ea=c->r[1]+0x00000230u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AFF38
  c->lr=0x800AFF40u; f_800521A0(c); // 800AFF3C
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[30]); // 800AFF40
  c->r[3]=c->r[1]+0x000000BCu; // 800AFF44
  c->r[4]=c->r[1]+0x000000C8u; // 800AFF48
  c->lr=0x800AFF50u; f_80064C58(c); // 800AFF4C
  c->r[3]=c->r[1]+0x000000E0u; // 800AFF50
  c->r[5]=c->r[1]+0x000000BCu; // 800AFF54
  c->r[4]=c->r[3]|c->r[3]; // 800AFF58
  c->lr=0x800AFF60u; f_80064C34(c); // 800AFF5C
  c->r[3]=c->r[1]+0x000000D4u; // 800AFF60
  c->r[5]=c->r[1]+0x000000BCu; // 800AFF64
  c->r[4]=c->r[3]|c->r[3]; // 800AFF68
  c->lr=0x800AFF70u; f_80064C34(c); // 800AFF6C
  c->r[3]=0u+0x80450000u; // 800AFF70
  c->r[4]=c->r[31]|c->r[31]; // 800AFF74
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800AFF78
  c->r[5]=c->r[1]+0x000000E0u; // 800AFF7C
  c->r[6]=c->r[1]+0x000000D4u; // 800AFF80
  c->r[7]=0u+0x00000000u; // 800AFF84
  c->lr=0x800AFF8Cu; f_80044D14(c); // 800AFF88
  cmps(c,0,(int32_t)c->r[3],0); // 800AFF8C
  if (crb(c,2)) { goto L_800AFFE8; } // 800AFF90
  c->r[3]=c->r[1]+0x000000B0u; // 800AFF94
  c->r[4]=c->r[31]+0x00000014u; // 800AFF98
  c->lr=0x800AFFA0u; f_8003F484(c); // 800AFF9C
  c->r[3]=c->r[1]+0x000000E0u; // 800AFFA0
  c->r[4]=c->r[31]+0x00000008u; // 800AFFA4
  c->lr=0x800AFFACu; f_8003F468(c); // 800AFFA8
  cmps(c,0,(int32_t)c->r[29],0); // 800AFFAC
  if (crb(c,2)) { goto L_800AFFF4; } // 800AFFB0
  c->f[1]=c->f[29]; // 800AFFB4
  c->r[3]=c->r[1]+0x00000068u; // 800AFFB8
  c->r[4]=c->r[1]+0x000000B0u; // 800AFFBC
  c->lr=0x800AFFC4u; f_80064C58(c); // 800AFFC0
  {uint32_t ea=c->r[2]+0xFFFF8D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AFFC4
  c->r[3]=c->r[1]+0x00000074u; // 800AFFC8
  c->r[4]=c->r[1]+0x00000068u; // 800AFFCC
  c->lr=0x800AFFD4u; f_80064C58(c); // 800AFFD0
  c->r[3]=c->r[1]+0x000000E0u; // 800AFFD4
  c->r[5]=c->r[1]+0x00000074u; // 800AFFD8
  c->r[4]=c->r[3]|c->r[3]; // 800AFFDC
  c->lr=0x800AFFE4u; f_80064C34(c); // 800AFFE0
  goto L_800AFFF4; // 800AFFE4
L_800AFFE8:;
  c->r[3]=c->r[1]+0x000000E0u; // 800AFFE8
  c->r[4]=c->r[1]+0x000000D4u; // 800AFFEC
  c->lr=0x800AFFF4u; f_8003F468(c); // 800AFFF0
L_800AFFF4:;
  c->f[1]=c->f[31]; // 800AFFF4
  c->r[3]=0u+0x80450000u; // 800AFFF8
  c->r[4]=c->r[31]|c->r[31]; // 800AFFFC
  c->r[5]=c->r[1]+0x000000E0u; // 800B0000
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B0004
  c->r[6]=0u+0x00000000u; // 800B0008
  c->lr=0x800B0010u; f_80044E70(c); // 800B000C
  cmps(c,0,(int32_t)c->r[3],0); // 800B0010
  if (crb(c,2)) { goto L_800B002C; } // 800B0014
  c->f[1]=c->f[31]; // 800B0018
  c->r[4]=c->r[1]+0x000000E0u; // 800B001C
  c->r[3]=c->r[31]|c->r[31]; // 800B0020
  c->r[5]=c->r[4]|c->r[4]; // 800B0024
  c->lr=0x800B002Cu; f_80046E64(c); // 800B0028
L_800B002C:;
  c->r[3]=c->r[1]+0x000000D4u; // 800B002C
  c->r[4]=c->r[1]+0x000000E0u; // 800B0030
  c->lr=0x800B0038u; f_8003F468(c); // 800B0034
  c->r[3]=c->r[1]+0x000000D4u; // 800B0038
  c->r[5]=c->r[1]+0x000000BCu; // 800B003C
  c->r[4]=c->r[3]|c->r[3]; // 800B0040
  c->lr=0x800B0048u; f_80064C74(c); // 800B0044
  {uint32_t ea=c->r[1]+0x00000210u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0048
  c->r[3]=c->r[1]+0x00000044u; // 800B004C
  {uint32_t ea=c->r[1]+0x00000220u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0050
  {uint32_t ea=c->r[1]+0x00000230u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0054
  c->lr=0x800B005Cu; f_800521A0(c); // 800B0058
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B005C
  c->r[3]=c->r[1]+0x00000050u; // 800B0060
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0064
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0068
  c->f[1]=-c->f[1]; // 800B006C
  c->f[2]=-c->f[2]; // 800B0070
  c->f[3]=-c->f[0]; // 800B0074
  c->lr=0x800B007Cu; f_800521A0(c); // 800B0078
  {uint32_t ea=c->r[2]+0xFFFF8D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B007C
  c->r[3]=c->r[1]+0x0000005Cu; // 800B0080
  c->r[4]=c->r[1]+0x00000050u; // 800B0084
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[28]); // 800B0088
  c->lr=0x800B0090u; f_80064C58(c); // 800B008C
  c->r[3]=c->r[1]+0x000000D4u; // 800B0090
  c->r[5]=c->r[1]+0x0000005Cu; // 800B0094
  c->r[4]=c->r[3]|c->r[3]; // 800B0098
  c->lr=0x800B00A0u; f_80064C34(c); // 800B009C
  c->r[3]=0u+0x80450000u; // 800B00A0
  c->r[4]=c->r[31]|c->r[31]; // 800B00A4
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B00A8
  c->r[5]=c->r[1]+0x000000E0u; // 800B00AC
  c->r[6]=c->r[1]+0x000000D4u; // 800B00B0
  c->r[7]=0u+0x00000000u; // 800B00B4
  c->lr=0x800B00BCu; f_80044D14(c); // 800B00B8
  cmps(c,0,(int32_t)c->r[3],0); // 800B00BC
  if (crb(c,2)) { goto L_800B0128; } // 800B00C0
  c->r[3]=c->r[1]+0x000000E0u; // 800B00C4
  c->r[4]=c->r[31]+0x00000008u; // 800B00C8
  c->lr=0x800B00D0u; f_8003F468(c); // 800B00CC
  c->r[3]=c->r[1]+0x000000A4u; // 800B00D0
  c->r[4]=c->r[31]+0x00000014u; // 800B00D4
  c->lr=0x800B00DCu; f_8003F484(c); // 800B00D8
  c->r[3]=c->r[1]+0x000000A4u; // 800B00DC
  c->lr=0x800B00E4u; f_8018122C(c); // 800B00E0
  cmps(c,0,(int32_t)c->r[3],0); // 800B00E4
  if (!crb(c,2)) { goto L_800B0120; } // 800B00E8
  {uint32_t ea=c->r[1]+0x00000210u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B00EC
  c->r[3]=c->r[1]+0x00000038u; // 800B00F0
  {uint32_t ea=c->r[1]+0x00000220u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B00F4
  {uint32_t ea=c->r[1]+0x00000230u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B00F8
  c->lr=0x800B0100u; f_800521A0(c); // 800B00FC
  c->r[3]=c->r[1]+0x00000038u; // 800B0100
  c->r[4]=c->r[1]+0x000000A4u; // 800B0104
  c->lr=0x800B010Cu; f_800653BC(c); // 800B0108
  {uint32_t ea=c->r[2]+0xFFFF8DC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B010C
  fcmp(c,0,c->f[1],c->f[0]); // 800B0110
  if (!crb(c,0)) { goto L_800B0138; } // 800B0114
  c->f[1]=c->f[0]; // 800B0118
  goto L_800B0138; // 800B011C
L_800B0120:;
  {uint32_t ea=c->r[2]+0xFFFF8DC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0120
  goto L_800B0138; // 800B0124
L_800B0128:;
  c->r[3]=c->r[1]+0x000000E0u; // 800B0128
  c->r[4]=c->r[1]+0x000000D4u; // 800B012C
  c->lr=0x800B0134u; f_8003F468(c); // 800B0130
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0134
L_800B0138:;
  {uint32_t ea=c->r[30]+0x000008F0u; WF32(ea,c->f[1]);} // 800B0138
  c->r[3]=c->r[1]+0x0000020Cu; // 800B013C
  c->r[4]=c->r[1]+0x000000E0u; // 800B0140
  c->lr=0x800B0148u; f_80032FF4(c); // 800B0144
  c->r[3]=c->r[1]+0x0000023Cu; // 800B0148
  c->r[4]=c->r[1]+0x000000ECu; // 800B014C
  c->lr=0x800B0154u; f_80264994(c); // 800B0150
  c->r[3]=c->r[1]+0x000000ECu; // 800B0154
  c->r[4]=c->r[1]+0x0000020Cu; // 800B0158
  c->r[5]=c->r[1]+0x0000011Cu; // 800B015C
  c->lr=0x800B0164u; f_802646E0(c); // 800B0160
  c->r[3]=c->r[30]+0x000008ECu; // 800B0164
  c->r[4]=c->r[1]+0x0000011Cu; // 800B0168
  c->lr=0x800B0170u; f_8016A37C(c); // 800B016C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B0170
  c->r[4]=c->r[30]+0x000008D0u; // 800B0174
  c->r[3]=c->r[1]+0x0000017Cu; // 800B0178
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B017C
  c->ctr=c->r[12]; // 800B0180
  if (true) { c->lr=0x800B0188u; dispatch(c,c->ctr); } // 800B0184
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0188
  c->r[3]=c->r[1]+0x00000098u; // 800B018C
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0190
  c->f[3]=c->f[1]; // 800B0194
  c->lr=0x800B019Cu; f_800521A0(c); // 800B0198
  {uint32_t ea=c->r[1]+0x00000184u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B019C
  c->r[3]=c->r[1]+0x00000020u; // 800B01A0
  {uint32_t ea=c->r[1]+0x00000194u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B01A4
  {uint32_t ea=c->r[1]+0x000001A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B01A8
  c->lr=0x800B01B0u; f_800521A0(c); // 800B01AC
  c->r[3]=c->r[1]+0x00000098u; // 800B01B0
  c->r[4]=c->r[1]+0x00000020u; // 800B01B4
  c->r[5]=c->r[1]+0x0000002Cu; // 800B01B8
  c->lr=0x800B01C0u; f_80265810(c); // 800B01BC
  c->r[3]=c->r[1]+0x0000002Cu; // 800B01C0
  c->lr=0x800B01C8u; f_80065368(c); // 800B01C4
  cmps(c,0,(int32_t)c->r[3],0); // 800B01C8
  if (!crb(c,2)) { goto L_800B0270; } // 800B01CC
  {uint32_t ea=c->r[1]+0x00000188u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B01D0
  c->r[3]=c->r[1]+0x0000008Cu; // 800B01D4
  {uint32_t ea=c->r[1]+0x00000198u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B01D8
  {uint32_t ea=c->r[1]+0x000001A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B01DC
  c->lr=0x800B01E4u; f_800521A0(c); // 800B01E0
  {uint32_t ea=c->r[1]+0x00000184u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B01E4
  c->r[3]=c->r[1]+0x00000008u; // 800B01E8
  {uint32_t ea=c->r[1]+0x00000194u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B01EC
  {uint32_t ea=c->r[1]+0x000001A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B01F0
  c->lr=0x800B01F8u; f_800521A0(c); // 800B01F4
  c->r[3]=c->r[1]+0x00000014u; // 800B01F8
  c->r[4]=c->r[1]+0x00000098u; // 800B01FC
  c->lr=0x800B0204u; f_8003F484(c); // 800B0200
  c->r[4]=c->r[3]|c->r[3]; // 800B0204
  c->r[3]=c->r[1]+0x0000014Cu; // 800B0208
  c->r[5]=c->r[1]+0x00000008u; // 800B020C
  c->lr=0x800B0214u; f_80074BF0(c); // 800B0210
  c->r[12]=R32(c->r[30]+0x00000010u); // 800B0214
  c->r[3]=c->r[30]|c->r[30]; // 800B0218
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B021C
  c->ctr=c->r[12]; // 800B0220
  if (true) { c->lr=0x800B0228u; dispatch(c,c->ctr); } // 800B0224
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0228
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B022C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800B0230
  fcmp(c,0,c->f[1],c->f[0]); // 800B0234
  if (!crb(c,1)) { goto L_800B0240; } // 800B0238
  c->f[1]=c->f[0]; // 800B023C
L_800B0240:;
  c->r[3]=c->r[1]+0x0000017Cu; // 800B0240
  c->r[4]=c->r[1]+0x0000014Cu; // 800B0244
  c->lr=0x800B024Cu; f_80074FF0(c); // 800B0248
  c->r[3]=c->r[1]+0x0000017Cu; // 800B024C
  c->r[4]=c->r[1]+0x0000008Cu; // 800B0250
  c->lr=0x800B0258u; f_80032FF4(c); // 800B0254
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B0258
  c->r[3]=c->r[30]+0x000008D0u; // 800B025C
  c->r[4]=c->r[1]+0x0000017Cu; // 800B0260
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B0264
  c->ctr=c->r[12]; // 800B0268
  if (true) { c->lr=0x800B0270u; dispatch(c,c->ctr); } // 800B026C
L_800B0270:;
  {uint32_t ea=c->r[1]+0x000002B8u; psq_load(c,31,ea,0,0);} // 800B0270
  {uint32_t ea=c->r[1]+0x000002B0u; c->f[31]=RF64(ea);} // 800B0274
  {uint32_t ea=c->r[1]+0x000002A8u; psq_load(c,30,ea,0,0);} // 800B0278
  {uint32_t ea=c->r[1]+0x000002A0u; c->f[30]=RF64(ea);} // 800B027C
  {uint32_t ea=c->r[1]+0x00000298u; psq_load(c,29,ea,0,0);} // 800B0280
  {uint32_t ea=c->r[1]+0x00000290u; c->f[29]=RF64(ea);} // 800B0284
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,28,ea,0,0);} // 800B0288
  c->r[11]=c->r[1]+0x00000280u; // 800B028C
  {uint32_t ea=c->r[1]+0x00000280u; c->f[28]=RF64(ea);} // 800B0290
  c->lr=0x800B0298u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B0294
  c->r[0]=R32(c->r[1]+0x000002C4u); // 800B0298
  c->lr=c->r[0]; // 800B029C
  c->r[1]=c->r[1]+0x000002C0u; // 800B02A0
  return; // 800B02A4
}

// fn_800B02A8
void f_800B02A8(Ctx* __restrict c) {
  trace_call(0x800B02A8u);
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B02A8
  c->r[3]=c->r[3]+0x000008ECu; // 800B02AC
  f_80075394(c); return; // 800B02B0
}

// fn_800B02B4
void f_800B02B4(Ctx* __restrict c) {
  trace_call(0x800B02B4u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B02B4
  c->r[0]=c->lr; // 800B02B8
  W32(c->r[1]+0x00000194u,c->r[0]); // 800B02BC
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 800B02C0
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 800B02C4
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 800B02C8
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 800B02CC
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[29]);} // 800B02D0
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,29,ea,0,0);} // 800B02D4
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[28]);} // 800B02D8
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,28,ea,0,0);} // 800B02DC
  c->r[11]=c->r[1]+0x00000150u; // 800B02E0
  c->lr=0x800B02E8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B02E4
  c->r[12]=R32(c->r[3]+0x000008D0u); // 800B02E8
  c->r[28]=c->r[3]|c->r[3]; // 800B02EC
  c->r[29]=c->r[4]|c->r[4]; // 800B02F0
  c->f[28]=c->f[1]; // 800B02F4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B02F8
  c->f[29]=c->f[2]; // 800B02FC
  c->f[30]=c->f[3]; // 800B0300
  c->r[4]=c->r[28]+0x000008D0u; // 800B0304
  c->f[31]=c->f[4]; // 800B0308
  c->r[31]=c->r[5]|c->r[5]; // 800B030C
  c->r[3]=c->r[1]+0x00000104u; // 800B0310
  c->ctr=c->r[12]; // 800B0314
  if (true) { c->lr=0x800B031Cu; dispatch(c,c->ctr); } // 800B0318
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800B031C
  c->r[4]=c->r[28]+0x000008D0u; // 800B0320
  c->r[3]=c->r[1]+0x00000074u; // 800B0324
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B0328
  c->ctr=c->r[12]; // 800B032C
  if (true) { c->lr=0x800B0334u; dispatch(c,c->ctr); } // 800B0330
  c->r[3]=c->r[1]+0x00000068u; // 800B0334
  c->r[4]=c->r[1]+0x00000074u; // 800B0338
  c->lr=0x800B0340u; f_80032FD8(c); // 800B033C
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0340
  c->r[3]=c->r[1]+0x0000005Cu; // 800B0344
  {uint32_t ea=c->r[1]+0x00000118u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0348
  {uint32_t ea=c->r[1]+0x00000128u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B034C
  c->lr=0x800B0354u; f_800521A0(c); // 800B0350
  c->r[4]=c->r[29]|c->r[29]; // 800B0354
  c->r[3]=c->r[1]+0x00000050u; // 800B0358
  c->r[5]=c->r[1]+0x00000068u; // 800B035C
  c->r[30]=0u+0x00000000u; // 800B0360
  c->lr=0x800B0368u; f_80064C74(c); // 800B0364
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0368
  c->r[3]=c->r[1]+0x00000050u; // 800B036C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800B0370
  c->lr=0x800B0378u; f_80065368(c); // 800B0374
  cmps(c,0,(int32_t)c->r[3],0); // 800B0378
  if (!crb(c,2)) { goto L_800B0504; } // 800B037C
  {uint32_t ea=c->r[2]+0xFFFF8DC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0380
  fcmp(c,0,c->f[30],c->f[0]); // 800B0384
  if (!crb(c,1)) { goto L_800B0390; } // 800B0388
  c->f[30]=c->f[0]; // 800B038C
L_800B0390:;
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0390
  c->r[3]=c->r[1]+0x00000044u; // 800B0394
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0398
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B039C
  c->lr=0x800B03A4u; f_800521A0(c); // 800B03A0
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B03A4
  c->r[3]=c->r[1]+0x000000D4u; // 800B03A8
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B03AC
  c->f[3]=c->f[1]; // 800B03B0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 800B03B4
  c->lr=0x800B03BCu; f_803949B8(c); // 800B03B8
  c->r[4]=c->r[1]+0x00000044u; // 800B03BC
  c->r[3]=c->r[1]+0x000000D4u; // 800B03C0
  c->r[5]=c->r[4]|c->r[4]; // 800B03C4
  c->lr=0x800B03CCu; f_802652E8(c); // 800B03C8
  c->f[2]=-c->f[31]; // 800B03CC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B03D0
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B03D4
  c->r[3]=c->r[1]+0x000000A4u; // 800B03D8
  c->f[3]=c->f[1]; // 800B03DC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B03E0
  c->lr=0x800B03E8u; f_803949B8(c); // 800B03E4
  c->r[3]=c->r[1]+0x00000050u; // 800B03E8
  c->lr=0x800B03F0u; f_800653A4(c); // 800B03EC
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[29]); // 800B03F0
  fcmp(c,0,c->f[1],c->f[0]); // 800B03F4
  if (!crb(c,0)) { goto L_800B0418; } // 800B03F8
  c->r[3]=c->r[1]+0x00000050u; // 800B03FC
  c->r[4]=c->r[1]+0x00000044u; // 800B0400
  c->lr=0x800B0408u; f_800653BC(c); // 800B0404
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0408
  fcmp(c,0,c->f[1],c->f[0]); // 800B040C
  if (!crb(c,0)) { goto L_800B0418; } // 800B0410
  c->r[30]=0u+0x00000001u; // 800B0414
L_800B0418:;
  c->r[3]=c->r[1]+0x00000050u; // 800B0418
  c->r[4]=c->r[3]|c->r[3]; // 800B041C
  c->lr=0x800B0424u; f_80265750(c); // 800B0420
  c->r[12]=R32(c->r[28]+0x00000010u); // 800B0424
  c->r[3]=c->r[28]|c->r[28]; // 800B0428
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B042C
  c->ctr=c->r[12]; // 800B0430
  if (true) { c->lr=0x800B0438u; dispatch(c,c->ctr); } // 800B0434
  c->f[31]=c->f[1]; // 800B0438
  c->r[3]=c->r[1]+0x00000014u; // 800B043C
  c->r[4]=c->r[1]+0x00000050u; // 800B0440
  c->r[5]=c->r[1]+0x00000044u; // 800B0444
  c->lr=0x800B044Cu; f_80064C74(c); // 800B0448
  c->f[1]=c->f[31]; // 800B044C
  c->r[3]=c->r[1]+0x00000020u; // 800B0450
  c->r[4]=c->r[1]+0x00000014u; // 800B0454
  c->lr=0x800B045Cu; f_80064C58(c); // 800B0458
  c->f[1]=c->f[30]; // 800B045C
  c->r[3]=c->r[1]+0x0000002Cu; // 800B0460
  c->r[4]=c->r[1]+0x00000020u; // 800B0464
  c->lr=0x800B046Cu; f_80064C58(c); // 800B0468
  c->r[3]=c->r[1]+0x00000038u; // 800B046C
  c->r[4]=c->r[1]+0x0000002Cu; // 800B0470
  c->r[5]=c->r[1]+0x00000044u; // 800B0474
  c->lr=0x800B047Cu; f_80064C34(c); // 800B0478
  c->r[3]=c->r[1]+0x00000050u; // 800B047C
  c->r[4]=c->r[1]+0x00000038u; // 800B0480
  c->lr=0x800B0488u; f_8003F468(c); // 800B0484
  c->r[3]=c->r[1]+0x00000008u; // 800B0488
  c->r[4]=c->r[1]+0x00000050u; // 800B048C
  c->r[5]=c->r[1]+0x0000005Cu; // 800B0490
  c->lr=0x800B0498u; f_800AF128(c); // 800B0494
  c->r[3]=c->r[1]+0x00000050u; // 800B0498
  c->r[4]=c->r[1]+0x00000008u; // 800B049C
  c->lr=0x800B04A4u; f_8003F468(c); // 800B04A0
  c->r[4]=c->r[1]+0x00000050u; // 800B04A4
  c->r[3]=c->r[1]+0x000000A4u; // 800B04A8
  c->r[5]=c->r[4]|c->r[4]; // 800B04AC
  c->lr=0x800B04B4u; f_802652E8(c); // 800B04B0
  c->r[3]=c->r[1]+0x00000050u; // 800B04B4
  c->lr=0x800B04BCu; f_80065368(c); // 800B04B8
  cmps(c,0,(int32_t)c->r[3],0); // 800B04BC
  if (!crb(c,2)) { goto L_800B0504; } // 800B04C0
  c->r[3]=c->r[1]+0x00000050u; // 800B04C4
  c->r[4]=c->r[3]|c->r[3]; // 800B04C8
  c->lr=0x800B04D0u; f_80265750(c); // 800B04CC
  c->r[3]=c->r[1]+0x00000104u; // 800B04D0
  c->r[4]=c->r[1]+0x00000050u; // 800B04D4
  c->r[5]=c->r[1]+0x0000005Cu; // 800B04D8
  c->lr=0x800B04E0u; f_80074DF8(c); // 800B04DC
  c->r[3]=c->r[1]+0x00000104u; // 800B04E0
  c->r[4]=c->r[1]+0x00000068u; // 800B04E4
  c->lr=0x800B04ECu; f_80032FF4(c); // 800B04E8
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800B04EC
  c->r[3]=c->r[28]+0x000008D0u; // 800B04F0
  c->r[4]=c->r[1]+0x00000104u; // 800B04F4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B04F8
  c->ctr=c->r[12]; // 800B04FC
  if (true) { c->lr=0x800B0504u; dispatch(c,c->ctr); } // 800B0500
L_800B0504:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B0504
  if (crb(c,2)) { goto L_800B0510; } // 800B0508
  W32(c->r[31]+0x00000000u,c->r[30]); // 800B050C
L_800B0510:;
  c->r[4]=c->r[29]|c->r[29]; // 800B0510
  c->r[3]=c->r[1]+0x00000068u; // 800B0514
  c->r[31]=0u+0x00000001u; // 800B0518
  c->lr=0x800B0520u; f_80265924(c); // 800B051C
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[28]); // 800B0520
  fcmp(c,0,c->f[1],c->f[0]); // 800B0524
  if (crb(c,0)) { goto L_800B0538; } // 800B0528
  cmps(c,0,(int32_t)c->r[30],0); // 800B052C
  if (!crb(c,2)) { goto L_800B0538; } // 800B0530
  c->r[31]=0u+0x00000000u; // 800B0534
L_800B0538:;
  c->r[3]=c->r[31]|c->r[31]; // 800B0538
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 800B053C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 800B0540
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,30,ea,0,0);} // 800B0544
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 800B0548
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,29,ea,0,0);} // 800B054C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[29]=RF64(ea);} // 800B0550
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,28,ea,0,0);} // 800B0554
  {uint32_t ea=c->r[1]+0x00000150u; c->f[28]=RF64(ea);} // 800B0558
  c->r[11]=c->r[1]+0x00000150u; // 800B055C
  c->lr=0x800B0564u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B0560
  c->r[0]=R32(c->r[1]+0x00000194u); // 800B0564
  c->lr=c->r[0]; // 800B0568
  c->r[1]=c->r[1]+0x00000190u; // 800B056C
  return; // 800B0570
}

// fn_800B0574
void f_800B0574(Ctx* __restrict c) {
  trace_call(0x800B0574u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0574
  c->r[0]=c->lr; // 800B0578
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B057C
  c->r[4]=c->r[3]+0x000008ECu; // 800B0580
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0584
  c->r[6]=0u+0x00000000u; // 800B0588
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B058C
  c->r[7]=0u+0x00000000u; // 800B0590
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B0594
  c->r[31]=c->r[5]|c->r[5]; // 800B0598
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B059C
  c->r[30]=c->r[3]|c->r[3]; // 800B05A0
  c->r[3]=c->r[3]+0x00000C88u; // 800B05A4
  c->r[5]=R32(c->r[5]+0x00000014u); // 800B05A8
  c->lr=0x800B05B0u; f_800BB0C8(c); // 800B05AC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B05B0
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B05B4
  fcmp(c,0,c->f[1],c->f[0]); // 800B05B8
  if (!crb(c,1)) { goto L_800B05D0; } // 800B05BC
  c->r[3]=R32(c->r[30]+0x00000974u); // 800B05C0
  c->r[4]=0u+0x00000000u; // 800B05C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B05C8
  c->lr=0x800B05D0u; f_80165194(c); // 800B05CC
L_800B05D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B05D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B05D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B05D8
  c->lr=c->r[0]; // 800B05DC
  c->r[1]=c->r[1]+0x00000010u; // 800B05E0
  return; // 800B05E4
}

// fn_800B05E8
void f_800B05E8(Ctx* __restrict c) {
  trace_call(0x800B05E8u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B05E8
  c->r[0]=c->lr; // 800B05EC
  W32(c->r[1]+0x000001D4u,c->r[0]); // 800B05F0
  c->r[11]=c->r[1]+0x000001D0u; // 800B05F4
  c->lr=0x800B05FCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B05F8
  c->r[0]=R8(c->r[4]+0x00000010u); // 800B05FC
  c->r[29]=c->r[3]|c->r[3]; // 800B0600
  c->r[30]=c->r[4]|c->r[4]; // 800B0604
  cmps(c,0,(int32_t)c->r[0],0); // 800B0608
  if (crb(c,2)) { goto L_800B0748; } // 800B060C
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B0610
  c->r[4]=c->r[29]+0x000008D0u; // 800B0614
  c->r[3]=c->r[1]+0x00000188u; // 800B0618
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B061C
  c->ctr=c->r[12]; // 800B0620
  if (true) { c->lr=0x800B0628u; dispatch(c,c->ctr); } // 800B0624
  c->r[0]=0u+0x00000006u; // 800B0628
  c->r[5]=c->r[1]+0x000000C4u; // 800B062C
  c->r[4]=c->r[29]+0x00000940u; // 800B0630
  c->ctr=c->r[0]; // 800B0634
L_800B0638:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B0638
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B063C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B0640
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B0644
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B0638; } // 800B0648
  c->r[3]=c->r[1]+0x00000188u; // 800B064C
  c->r[4]=c->r[1]+0x000000C8u; // 800B0650
  c->r[5]=c->r[1]+0x00000158u; // 800B0654
  c->lr=0x800B065Cu; f_802646E0(c); // 800B0658
  {uint32_t ea=c->r[1]+0x00000164u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B065C
  c->r[3]=c->r[1]+0x00000048u; // 800B0660
  {uint32_t ea=c->r[1]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0664
  {uint32_t ea=c->r[1]+0x00000184u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0668
  c->lr=0x800B0670u; f_800521A0(c); // 800B066C
  {uint32_t ea=c->r[1]+0x00000194u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0670
  c->r[3]=c->r[1]+0x0000003Cu; // 800B0674
  {uint32_t ea=c->r[1]+0x000001A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0678
  {uint32_t ea=c->r[1]+0x000001B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B067C
  c->lr=0x800B0684u; f_800521A0(c); // 800B0680
  c->lr=0x800B0688u; f_80128B5C(c); // 800B0684
  c->r[4]=c->r[1]+0x0000003Cu; // 800B0688
  c->r[5]=c->r[1]+0x00000048u; // 800B068C
  c->r[6]=0u+0x00000000u; // 800B0690
  c->lr=0x800B0698u; f_8012A620(c); // 800B0694
  cmps(c,0,(int32_t)c->r[3],0); // 800B0698
  if (crb(c,2)) { goto L_800B06D4; } // 800B069C
  c->r[3]=c->r[1]+0x00000158u; // 800B06A0
  c->r[4]=c->r[1]+0x00000048u; // 800B06A4
  c->lr=0x800B06ACu; f_80032FF4(c); // 800B06A8
  c->r[3]=c->r[1]+0x00000188u; // 800B06AC
  c->r[4]=c->r[1]+0x00000098u; // 800B06B0
  c->lr=0x800B06B8u; f_80264994(c); // 800B06B4
  c->r[3]=c->r[1]+0x00000098u; // 800B06B8
  c->r[4]=c->r[1]+0x00000158u; // 800B06BC
  c->r[5]=c->r[1]+0x00000128u; // 800B06C0
  c->lr=0x800B06C8u; f_802646E0(c); // 800B06C4
  c->r[3]=c->r[29]+0x000008ECu; // 800B06C8
  c->r[4]=c->r[1]+0x00000128u; // 800B06CC
  c->lr=0x800B06D4u; f_8016A37C(c); // 800B06D0
L_800B06D4:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800B06D4
  c->r[3]=c->r[1]+0x00000030u; // 800B06D8
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B06DC
  {uint32_t ea=c->r[1]+0x00000194u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B06E0
  W32(c->r[1]+0x00000010u,c->r[4]); // 800B06E4
  {uint32_t ea=c->r[1]+0x000001A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B06E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B06EC
  {uint32_t ea=c->r[1]+0x000001B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B06F0
  c->lr=0x800B06F8u; f_800521A0(c); // 800B06F4
  c->lr=0x800B06FCu; f_80128B5C(c); // 800B06F8
  c->r[4]=c->r[1]+0x00000030u; // 800B06FC
  c->r[5]=c->r[1]+0x00000048u; // 800B0700
  c->r[6]=c->r[1]+0x00000010u; // 800B0704
  c->lr=0x800B070Cu; f_8012A73C(c); // 800B0708
  cmps(c,0,(int32_t)c->r[3],0); // 800B070C
  if (crb(c,2)) { goto L_800B0748; } // 800B0710
  c->r[3]=c->r[1]+0x00000158u; // 800B0714
  c->r[4]=c->r[1]+0x00000048u; // 800B0718
  c->lr=0x800B0720u; f_80032FF4(c); // 800B071C
  c->r[3]=c->r[1]+0x00000188u; // 800B0720
  c->r[4]=c->r[1]+0x00000068u; // 800B0724
  c->lr=0x800B072Cu; f_80264994(c); // 800B0728
  c->r[3]=c->r[1]+0x00000068u; // 800B072C
  c->r[4]=c->r[1]+0x00000158u; // 800B0730
  c->r[5]=c->r[1]+0x000000F8u; // 800B0734
  c->lr=0x800B073Cu; f_802646E0(c); // 800B0738
  c->r[3]=c->r[29]+0x000008ECu; // 800B073C
  c->r[4]=c->r[1]+0x000000F8u; // 800B0740
  c->lr=0x800B0748u; f_8016A37C(c); // 800B0744
L_800B0748:;
  c->r[0]=R8(c->r[30]+0x00000011u); // 800B0748
  cmps(c,0,(int32_t)c->r[0],0); // 800B074C
  if (crb(c,2)) { goto L_800B0794; } // 800B0750
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0754
  c->r[3]=c->r[1]+0x00000018u; // 800B0758
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B075C
  c->f[2]=c->f[1]; // 800B0760
  c->lr=0x800B0768u; f_800521A0(c); // 800B0764
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0768
  c->r[31]=c->r[3]|c->r[3]; // 800B076C
  c->r[3]=c->r[1]+0x00000024u; // 800B0770
  c->f[2]=c->f[1]; // 800B0774
  c->f[3]=c->f[1]; // 800B0778
  c->lr=0x800B0780u; f_800521A0(c); // 800B077C
  c->r[5]=c->r[3]|c->r[3]; // 800B0780
  c->r[3]=c->r[29]|c->r[29]; // 800B0784
  c->r[6]=c->r[31]|c->r[31]; // 800B0788
  c->r[4]=0u+0x00000000u; // 800B078C
  c->lr=0x800B0794u; f_800AE570(c); // 800B0790
L_800B0794:;
  c->r[3]=R32(c->r[29]+0x00000974u); // 800B0794
  c->r[4]=R32(c->r[30]+0x00000014u); // 800B0798
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B079C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B07A0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B07A4
  if (!crb(c,2)) { goto L_800B07E4; } // 800B07A8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B07AC
  c->lr=0x800B07B4u; f_8016498C(c); // 800B07B0
  cmps(c,0,(int32_t)c->r[3],0); // 800B07B4
  if (crb(c,2)) { goto L_800B07E4; } // 800B07B8
  c->r[3]=c->r[1]+0x00000054u; // 800B07BC
  c->r[4]=0u+0x00000000u; // 800B07C0
  c->lr=0x800B07C8u; f_800770B8(c); // 800B07C4
  c->r[5]=R32(c->r[29]+0x00000000u); // 800B07C8
  c->r[3]=c->r[1]+0x00000008u; // 800B07CC
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B07D0
  c->r[4]=c->r[1]+0x00000054u; // 800B07D4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B07D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B07DC
  c->lr=0x800B07E4u; f_80077140(c); // 800B07E0
L_800B07E4:;
  c->r[11]=c->r[1]+0x000001D0u; // 800B07E4
  c->lr=0x800B07ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B07E8
  c->r[0]=R32(c->r[1]+0x000001D4u); // 800B07EC
  c->lr=c->r[0]; // 800B07F0
  c->r[1]=c->r[1]+0x000001D0u; // 800B07F4
  return; // 800B07F8
}

// fn_800B07FC
void f_800B07FC(Ctx* __restrict c) {
  trace_call(0x800B07FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B07FC
  c->r[0]=c->lr; // 800B0800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B0804
  c->r[0]=0u+0xFFFFFFFFu; // 800B0808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B080C
  c->r[31]=c->r[3]|c->r[3]; // 800B0810
  c->r[4]=c->r[31]+0x000008D0u; // 800B0814
  W32(c->r[3]+0x00000C90u,c->r[0]); // 800B0818
  c->r[3]=c->r[5]|c->r[5]; // 800B081C
  c->lr=0x800B0824u; f_8007AEAC(c); // 800B0820
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0824
  c->r[0]=0u+0x00000000u; // 800B0828
  W8(c->r[31]+0x00001028u,c->r[0]); // 800B082C
  {uint32_t ea=c->r[31]+0x000008F0u; WF32(ea,c->f[0]);} // 800B0830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B0834
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B0838
  c->lr=c->r[0]; // 800B083C
  c->r[1]=c->r[1]+0x00000010u; // 800B0840
  return; // 800B0844
}

// fn_800B0848
void f_800B0848(Ctx* __restrict c) {
  trace_call(0x800B0848u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0848
  c->r[0]=c->lr; // 800B084C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0850
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B0854
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B0858
  c->r[31]=c->r[4]|c->r[4]; // 800B085C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800B0860
  c->r[30]=c->r[3]|c->r[3]; // 800B0864
  c->r[5]=R32(c->r[3]+0x00000974u); // 800B0868
  c->r[3]=R32(c->r[5]+0x00000000u); // 800B086C
  c->lr=0x800B0874u; f_8016498C(c); // 800B0870
  cmps(c,0,(int32_t)c->r[3],0); // 800B0874
  if (crb(c,2)) { goto L_800B08B8; } // 800B0878
  c->r[3]=c->r[31]|c->r[31]; // 800B087C
  c->r[4]=c->r[30]+0x000008D0u; // 800B0880
  c->lr=0x800B0888u; f_8007AEAC(c); // 800B0884
  cmps(c,0,(int32_t)c->r[3],0); // 800B0888
  if (!crb(c,2)) { goto L_800B08B8; } // 800B088C
  c->r[3]=c->r[1]+0x00000010u; // 800B0890
  c->r[4]=0u+0x00000000u; // 800B0894
  c->lr=0x800B089Cu; f_800770B8(c); // 800B0898
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B089C
  c->r[3]=c->r[1]+0x00000008u; // 800B08A0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B08A4
  c->r[4]=c->r[1]+0x00000010u; // 800B08A8
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B08AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B08B0
  c->lr=0x800B08B8u; f_80077140(c); // 800B08B4
L_800B08B8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B08B8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B08BC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800B08C0
  c->lr=c->r[0]; // 800B08C4
  c->r[1]=c->r[1]+0x00000030u; // 800B08C8
  return; // 800B08CC
}

// fn_800B08D0
void f_800B08D0(Ctx* __restrict c) {
  trace_call(0x800B08D0u);
  c->r[0]=0u+0x00000001u; // 800B08D0
  W8(c->r[3]+0x00001028u,c->r[0]); // 800B08D4
  return; // 800B08D8
}

// fn_800B08DC
void f_800B08DC(Ctx* __restrict c) {
  trace_call(0x800B08DCu);
  c->r[5]=R32(c->r[5]+0x00000010u); // 800B08DC
  c->r[4]=c->r[3]+0x000008ECu; // 800B08E0
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B08E4
  c->r[6]=0u+0x00000000u; // 800B08E8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B08EC
  c->r[7]=0u+0x00000000u; // 800B08F0
  c->r[3]=c->r[3]+0x00000C88u; // 800B08F4
  f_800BB0C8(c); return; // 800B08F8
}

// fn_800B08FC
void f_800B08FC(Ctx* __restrict c) {
  trace_call(0x800B08FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B08FC
  c->r[0]=c->lr; // 800B0900
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B0904
  c->r[0]=0u+0x00000001u; // 800B0908
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B090C
  c->r[31]=c->r[3]|c->r[3]; // 800B0910
  W32(c->r[3]+0x0000105Cu,c->r[0]); // 800B0914
  c->r[5]=R32(c->r[3]+0x00000974u); // 800B0918
  c->r[4]=R32(c->r[4]+0x00000010u); // 800B091C
  c->r[3]=R32(c->r[5]+0x00000000u); // 800B0920
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B0924
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B0928
  if (!crb(c,2)) { goto L_800B0968; } // 800B092C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0930
  c->lr=0x800B0938u; f_8016498C(c); // 800B0934
  cmps(c,0,(int32_t)c->r[3],0); // 800B0938
  if (crb(c,2)) { goto L_800B0968; } // 800B093C
  c->r[3]=c->r[1]+0x00000010u; // 800B0940
  c->r[4]=0u+0x00000000u; // 800B0944
  c->lr=0x800B094Cu; f_800770B8(c); // 800B0948
  c->r[5]=R32(c->r[31]+0x00000000u); // 800B094C
  c->r[3]=c->r[1]+0x00000008u; // 800B0950
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B0954
  c->r[4]=c->r[1]+0x00000010u; // 800B0958
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B095C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B0960
  c->lr=0x800B0968u; f_80077140(c); // 800B0964
L_800B0968:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B0968
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B096C
  c->lr=c->r[0]; // 800B0970
  c->r[1]=c->r[1]+0x00000030u; // 800B0974
  return; // 800B0978
}

// fn_800B097C
void f_800B097C(Ctx* __restrict c) {
  trace_call(0x800B097Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B097C
  c->r[0]=c->lr; // 800B0980
  W32(c->r[1]+0x00000124u,c->r[0]); // 800B0984
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800B0988
  c->r[31]=c->r[4]|c->r[4]; // 800B098C
  W32(c->r[1]+0x00000118u,c->r[30]); // 800B0990
  c->r[30]=c->r[3]|c->r[3]; // 800B0994
  c->r[4]=c->r[30]+0x000008D0u; // 800B0998
  c->r[3]=c->r[1]+0x000000E0u; // 800B099C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B09A0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B09A4
  c->ctr=c->r[12]; // 800B09A8
  if (true) { c->lr=0x800B09B0u; dispatch(c,c->ctr); } // 800B09AC
  c->r[0]=0u+0x00000006u; // 800B09B0
  c->r[5]=c->r[1]+0x000000ACu; // 800B09B4
  c->r[4]=c->r[30]+0x00000940u; // 800B09B8
  c->ctr=c->r[0]; // 800B09BC
L_800B09C0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B09C0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B09C4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B09C8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B09CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B09C0; } // 800B09D0
  c->r[3]=c->r[1]+0x000000E0u; // 800B09D4
  c->r[4]=c->r[1]+0x000000B0u; // 800B09D8
  c->r[5]=c->r[1]+0x00000080u; // 800B09DC
  c->lr=0x800B09E4u; f_802646E0(c); // 800B09E0
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B09E4
  c->r[3]=c->r[1]+0x00000014u; // 800B09E8
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B09EC
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B09F0
  c->lr=0x800B09F8u; f_800521A0(c); // 800B09F4
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B09F8
  c->r[3]=c->r[1]+0x00000008u; // 800B09FC
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0A00
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0A04
  c->lr=0x800B0A0Cu; f_800521A0(c); // 800B0A08
  c->r[3]=c->r[30]+0x00001060u; // 800B0A0C
  c->lr=0x800B0A14u; f_80181260(c); // 800B0A10
  c->r[3]=0u+0x80450000u; // 800B0A14
  c->r[4]=c->r[31]|c->r[31]; // 800B0A18
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B0A1C
  c->r[5]=c->r[1]+0x00000014u; // 800B0A20
  c->r[6]=c->r[1]+0x00000008u; // 800B0A24
  c->r[7]=0u+0x00000000u; // 800B0A28
  c->lr=0x800B0A30u; f_80044D14(c); // 800B0A2C
  cmps(c,0,(int32_t)c->r[3],0); // 800B0A30
  if (crb(c,2)) { goto L_800B0A6C; } // 800B0A34
  c->r[3]=c->r[1]+0x00000080u; // 800B0A38
  c->r[4]=c->r[31]+0x00000008u; // 800B0A3C
  c->lr=0x800B0A44u; f_80032FF4(c); // 800B0A40
  c->r[3]=c->r[1]+0x000000E0u; // 800B0A44
  c->r[4]=c->r[1]+0x00000020u; // 800B0A48
  c->lr=0x800B0A50u; f_80264994(c); // 800B0A4C
  c->r[3]=c->r[1]+0x00000020u; // 800B0A50
  c->r[4]=c->r[1]+0x00000080u; // 800B0A54
  c->r[5]=c->r[1]+0x00000050u; // 800B0A58
  c->lr=0x800B0A60u; f_802646E0(c); // 800B0A5C
  c->r[3]=c->r[30]+0x000008ECu; // 800B0A60
  c->r[4]=c->r[1]+0x00000050u; // 800B0A64
  c->lr=0x800B0A6Cu; f_8016A37C(c); // 800B0A68
L_800B0A6C:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 800B0A6C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800B0A70
  c->r[30]=R32(c->r[1]+0x00000118u); // 800B0A74
  c->lr=c->r[0]; // 800B0A78
  c->r[1]=c->r[1]+0x00000120u; // 800B0A7C
  return; // 800B0A80
}

// fn_800B0A84
void f_800B0A84(Ctx* __restrict c) {
  trace_call(0x800B0A84u);
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 800B0A84
  c->r[4]=c->r[3]+0x000008ECu; // 800B0A88
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0A8C
  c->r[6]=0u+0x00000000u; // 800B0A90
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0A94
  c->r[7]=0u+0x00000000u; // 800B0A98
  c->r[3]=c->r[3]+0x00000C88u; // 800B0A9C
  f_800BB0C8(c); return; // 800B0AA0
}

// fn_800B0AA4
void f_800B0AA4(Ctx* __restrict c) {
  trace_call(0x800B0AA4u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0AA4
  c->r[0]=c->lr; // 800B0AA8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800B0AAC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800B0AB0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800B0AB4
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0AB8
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800B0ABC
  c->r[31]=c->r[4]|c->r[4]; // 800B0AC0
  W32(c->r[1]+0x00000098u,c->r[30]); // 800B0AC4
  c->r[30]=c->r[3]|c->r[3]; // 800B0AC8
  c->r[3]=c->r[1]+0x00000010u; // 800B0ACC
  c->r[4]=c->r[30]|c->r[30]; // 800B0AD0
  c->lr=0x800B0AD8u; f_800B4024(c); // 800B0AD4
  c->r[3]=c->r[31]+0x00000010u; // 800B0AD8
  c->r[4]=c->r[1]+0x00000010u; // 800B0ADC
  c->lr=0x800B0AE4u; f_8003F468(c); // 800B0AE0
  c->r[12]=R32(c->r[30]+0x00000010u); // 800B0AE4
  c->r[3]=c->r[30]|c->r[30]; // 800B0AE8
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B0AEC
  c->ctr=c->r[12]; // 800B0AF0
  if (true) { c->lr=0x800B0AF8u; dispatch(c,c->ctr); } // 800B0AF4
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B0AF8
  c->r[4]=c->r[30]+0x000008D0u; // 800B0AFC
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0B00
  c->r[3]=c->r[1]+0x00000030u; // 800B0B04
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B0B08
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800B0B0C
  c->ctr=c->r[12]; // 800B0B10
  if (true) { c->lr=0x800B0B18u; dispatch(c,c->ctr); } // 800B0B14
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0B18
  c->f[2]=c->f[31]; // 800B0B1C
  c->r[3]=c->r[1]+0x00000060u; // 800B0B20
  c->r[4]=c->r[1]+0x00000030u; // 800B0B24
  c->f[3]=c->f[1]; // 800B0B28
  c->r[5]=c->r[31]+0x00000010u; // 800B0B2C
  c->r[6]=0u+0x00000000u; // 800B0B30
  c->r[7]=0u+0x00000000u; // 800B0B34
  c->r[8]=0u+0x00000000u; // 800B0B38
  c->lr=0x800B0B40u; f_800AF1B0(c); // 800B0B3C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B0B40
  c->r[3]=c->r[30]+0x000008D0u; // 800B0B44
  c->r[4]=c->r[1]+0x00000060u; // 800B0B48
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B0B4C
  c->ctr=c->r[12]; // 800B0B50
  if (true) { c->lr=0x800B0B58u; dispatch(c,c->ctr); } // 800B0B54
  c->r[3]=R32(c->r[30]+0x00000974u); // 800B0B58
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800B0B5C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B0B60
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B0B64
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B0B68
  if (!crb(c,2)) { goto L_800B0BA8; } // 800B0B6C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0B70
  c->lr=0x800B0B78u; f_8016498C(c); // 800B0B74
  cmps(c,0,(int32_t)c->r[3],0); // 800B0B78
  if (crb(c,2)) { goto L_800B0BA8; } // 800B0B7C
  c->r[3]=c->r[1]+0x0000001Cu; // 800B0B80
  c->r[4]=0u+0x00000000u; // 800B0B84
  c->lr=0x800B0B8Cu; f_800770B8(c); // 800B0B88
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B0B8C
  c->r[3]=c->r[1]+0x00000008u; // 800B0B90
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B0B94
  c->r[4]=c->r[1]+0x0000001Cu; // 800B0B98
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B0B9C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B0BA0
  c->lr=0x800B0BA8u; f_80077140(c); // 800B0BA4
L_800B0BA8:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800B0BA8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800B0BAC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800B0BB0
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800B0BB4
  c->r[30]=R32(c->r[1]+0x00000098u); // 800B0BB8
  c->lr=c->r[0]; // 800B0BBC
  c->r[1]=c->r[1]+0x000000B0u; // 800B0BC0
  return; // 800B0BC4
}

// fn_800B0BC8
void f_800B0BC8(Ctx* __restrict c) {
  trace_call(0x800B0BC8u);
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 800B0BC8
  c->r[4]=c->r[3]+0x000008ECu; // 800B0BCC
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0BD0
  c->r[6]=0u+0x00000000u; // 800B0BD4
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0BD8
  c->r[7]=0u+0x00000000u; // 800B0BDC
  c->r[3]=c->r[3]+0x00000C88u; // 800B0BE0
  f_800BB0C8(c); return; // 800B0BE4
}

// fn_800B0BE8
void f_800B0BE8(Ctx* __restrict c) {
  trace_call(0x800B0BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0BE8
  c->r[0]=c->lr; // 800B0BEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B0BF0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B0BF4
  c->r[31]=c->r[3]|c->r[3]; // 800B0BF8
  c->r[5]=R32(c->r[3]+0x00000974u); // 800B0BFC
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 800B0C00
  c->r[3]=R32(c->r[5]+0x00000000u); // 800B0C04
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B0C08
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B0C0C
  if (!crb(c,2)) { goto L_800B0C4C; } // 800B0C10
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0C14
  c->lr=0x800B0C1Cu; f_8016498C(c); // 800B0C18
  cmps(c,0,(int32_t)c->r[3],0); // 800B0C1C
  if (crb(c,2)) { goto L_800B0C4C; } // 800B0C20
  c->r[3]=c->r[1]+0x00000010u; // 800B0C24
  c->r[4]=0u+0x00000000u; // 800B0C28
  c->lr=0x800B0C30u; f_800770B8(c); // 800B0C2C
  c->r[5]=R32(c->r[31]+0x00000000u); // 800B0C30
  c->r[3]=c->r[1]+0x00000008u; // 800B0C34
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B0C38
  c->r[4]=c->r[1]+0x00000010u; // 800B0C3C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B0C40
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B0C44
  c->lr=0x800B0C4Cu; f_80077140(c); // 800B0C48
L_800B0C4C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B0C4C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B0C50
  c->lr=c->r[0]; // 800B0C54
  c->r[1]=c->r[1]+0x00000030u; // 800B0C58
  return; // 800B0C5C
}

// fn_800B0C60
void f_800B0C60(Ctx* __restrict c) {
  trace_call(0x800B0C60u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0C60
  c->r[0]=c->lr; // 800B0C64
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B0C68
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800B0C6C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800B0C70
  c->r[11]=c->r[1]+0x000000B0u; // 800B0C74
  c->lr=0x800B0C7Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B0C78
  c->r[31]=c->r[1]|c->r[1]; // 800B0C7C
  c->r[30]=c->r[4]|c->r[4]; // 800B0C80
  {uint32_t ea=c->r[4]+0x000008D0u; c->r[12]=R32(ea); c->r[4]=ea;} // 800B0C84
  c->r[29]=c->r[3]|c->r[3]; // 800B0C88
  c->f[31]=c->f[1]; // 800B0C8C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B0C90
  c->r[3]=c->r[31]+0x00000068u; // 800B0C94
  c->ctr=c->r[12]; // 800B0C98
  if (true) { c->lr=0x800B0CA0u; dispatch(c,c->ctr); } // 800B0C9C
  c->r[3]=c->r[31]+0x00000044u; // 800B0CA0
  c->r[4]=c->r[31]+0x00000068u; // 800B0CA4
  c->lr=0x800B0CACu; f_80032FD8(c); // 800B0CA8
  c->r[3]=R32(c->r[30]+0x000008C4u); // 800B0CAC
  c->r[4]=R32(c->r[30]+0x000008CCu); // 800B0CB0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B0CB4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B0CB8
  if (!crb(c,0)) { goto L_800B0CDC; } // 800B0CBC
  c->r[3]=c->r[30]+0x000008A4u; // 800B0CC0
  c->r[4]=c->r[4]+0x00000001u; // 800B0CC4
  c->lr=0x800B0CCCu; f_800B0E28(c); // 800B0CC8
  c->r[4]=c->r[3]|c->r[3]; // 800B0CCC
  c->r[3]=c->r[29]|c->r[29]; // 800B0CD0
  c->lr=0x800B0CD8u; f_8003F468(c); // 800B0CD4
  goto L_800B0D48; // 800B0CD8
L_800B0CDC:;
  c->lr=0x800B0CE0u; f_80061A4C(c); // 800B0CDC
  c->r[4]=c->r[3]|c->r[3]; // 800B0CE0
  c->r[3]=c->r[31]+0x00000038u; // 800B0CE4
  c->r[4]=c->r[4]+0x0000035Cu; // 800B0CE8
  c->lr=0x800B0CF0u; f_8003F484(c); // 800B0CEC
  c->r[3]=c->r[31]+0x0000002Cu; // 800B0CF0
  c->r[4]=c->r[31]+0x00000038u; // 800B0CF4
  c->r[5]=c->r[31]+0x00000044u; // 800B0CF8
  c->lr=0x800B0D00u; f_80064C74(c); // 800B0CFC
  c->r[3]=c->r[31]+0x0000002Cu; // 800B0D00
  c->lr=0x800B0D08u; f_80065368(c); // 800B0D04
  cmps(c,0,(int32_t)c->r[3],0); // 800B0D08
  if (!crb(c,2)) { goto L_800B0D2C; } // 800B0D0C
  c->r[3]=c->r[31]+0x0000002Cu; // 800B0D10
  c->r[4]=c->r[3]|c->r[3]; // 800B0D14
  c->lr=0x800B0D1Cu; f_80265750(c); // 800B0D18
  c->f[1]=-c->f[31]; // 800B0D1C
  c->r[3]=c->r[31]+0x0000002Cu; // 800B0D20
  c->r[4]=c->r[3]|c->r[3]; // 800B0D24
  c->lr=0x800B0D2Cu; f_80064C58(c); // 800B0D28
L_800B0D2C:;
  c->r[3]=c->r[31]+0x00000014u; // 800B0D2C
  c->r[4]=c->r[31]+0x00000038u; // 800B0D30
  c->r[5]=c->r[31]+0x0000002Cu; // 800B0D34
  c->lr=0x800B0D3Cu; f_80064C34(c); // 800B0D38
  c->r[3]=c->r[29]|c->r[29]; // 800B0D3C
  c->r[4]=c->r[31]+0x00000014u; // 800B0D40
  c->lr=0x800B0D48u; f_8003F468(c); // 800B0D44
L_800B0D48:;
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0D48
  c->r[3]=c->r[31]+0x00000008u; // 800B0D4C
  {uint32_t ea=c->r[2]+0xFFFF8DCCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0D50
  c->f[3]=c->f[1]; // 800B0D54
  c->lr=0x800B0D5Cu; f_800521A0(c); // 800B0D58
  c->r[4]=c->r[29]|c->r[29]; // 800B0D5C
  c->r[3]=c->r[31]+0x00000020u; // 800B0D60
  c->r[5]=c->r[31]+0x00000008u; // 800B0D64
  c->lr=0x800B0D6Cu; f_80064C34(c); // 800B0D68
  c->r[0]=R8(c->r[13]+0xFFFF9502u); // 800B0D6C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B0D70
  if (!crb(c,2)) { goto L_800B0DA4; } // 800B0D74
  c->r[30]=0u+0x80470000u; // 800B0D78
  c->r[3]=c->r[30]+0xFFFFE388u; // 800B0D7C
  c->lr=0x800B0D84u; f_800462E8(c); // 800B0D80
  c->r[4]=0u+0x80040000u; // 800B0D84
  c->r[5]=0u+0x80470000u; // 800B0D88
  c->r[3]=c->r[30]+0xFFFFE388u; // 800B0D8C
  c->r[4]=c->r[4]+0x00006394u; // 800B0D90
  c->r[5]=c->r[5]+0xFFFFE37Cu; // 800B0D94
  c->lr=0x800B0D9Cu; f_802895A4(c); // 800B0D98
  c->r[0]=0u+0x00000001u; // 800B0D9C
  W8(c->r[13]+0xFFFF9502u,c->r[0]); // 800B0DA0
L_800B0DA4:;
  c->r[0]=0u+0x80470000u; // 800B0DA4
  c->r[30]=addc(c,c->r[0],0xFFFFE388u,0); cr0(c,c->r[30]); // 800B0DA8
  if (crb(c,2)) { goto L_800B0DD0; } // 800B0DAC
  W32(c->r[31]+0x00000064u,c->r[1]); // 800B0DB0
  c->r[3]=c->r[30]|c->r[30]; // 800B0DB4
  c->lr=0x800B0DBCu; f_800462E8(c); // 800B0DB8
  goto L_800B0DD0; // 800B0DBC
  c->r[3]=0u+0x00000000u; // 800B0DC0
  c->r[4]=0u+0x00000000u; // 800B0DC4
  c->r[5]=0u+0x00000000u; // 800B0DC8
  c->lr=0x800B0DD0u; f_8028BC3C(c); // 800B0DCC
L_800B0DD0:;
  c->r[3]=0u+0x80450000u; // 800B0DD0
  c->r[4]=c->r[30]|c->r[30]; // 800B0DD4
  c->r[5]=c->r[29]|c->r[29]; // 800B0DD8
  c->r[6]=c->r[31]+0x00000020u; // 800B0DDC
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B0DE0
  c->r[7]=0u+0x00000000u; // 800B0DE4
  c->lr=0x800B0DECu; f_80044D14(c); // 800B0DE8
  cmps(c,0,(int32_t)c->r[3],0); // 800B0DEC
  if (crb(c,2)) { goto L_800B0E00; } // 800B0DF0
  c->r[3]=c->r[29]|c->r[29]; // 800B0DF4
  c->r[4]=c->r[30]+0x00000008u; // 800B0DF8
  c->lr=0x800B0E00u; f_8003F468(c); // 800B0DFC
L_800B0E00:;
  c->r[10]=c->r[31]|c->r[31]; // 800B0E00
  {uint32_t ea=c->r[10]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800B0E04
  c->r[11]=c->r[10]+0x000000B0u; // 800B0E08
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[31]=RF64(ea);} // 800B0E0C
  c->lr=0x800B0E14u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B0E10
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B0E14
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B0E18
  c->r[1]=c->r[10]|c->r[10]; // 800B0E1C
  c->lr=c->r[0]; // 800B0E20
  return; // 800B0E24
}

// fn_800B0E28
void f_800B0E28(Ctx* __restrict c) {
  trace_call(0x800B0E28u);
  cmps(c,0,(int32_t)c->r[4],0); // 800B0E28
  if (!crb(c,0)) { goto L_800B0E34; } // 800B0E2C
  c->r[4]=R32(c->r[3]+0x00000028u); // 800B0E30
L_800B0E34:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800B0E34
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B0E38
  c->r[3]=c->r[3]+c->r[0]; // 800B0E3C
  return; // 800B0E40
}

// fn_800B0E44
void f_800B0E44(Ctx* __restrict c) {
  trace_call(0x800B0E44u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B0E44
  c->r[0]=c->lr; // 800B0E48
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0E4C
  c->r[4]=c->r[3]+0x000008ECu; // 800B0E50
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800B0E54
  c->r[6]=0u+0x00000000u; // 800B0E58
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0E5C
  c->r[7]=0u+0x00000000u; // 800B0E60
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800B0E64
  c->r[31]=c->r[5]|c->r[5]; // 800B0E68
  W32(c->r[1]+0x000000D8u,c->r[30]); // 800B0E6C
  c->r[30]=c->r[3]|c->r[3]; // 800B0E70
  c->r[3]=c->r[3]+0x00000C88u; // 800B0E74
  c->r[5]=R32(c->r[5]+0x00000050u); // 800B0E78
  c->lr=0x800B0E80u; f_800BB0C8(c); // 800B0E7C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B0E80
  c->r[4]=c->r[30]+0x000008D0u; // 800B0E84
  c->r[3]=c->r[1]+0x00000068u; // 800B0E88
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B0E8C
  c->ctr=c->r[12]; // 800B0E90
  if (true) { c->lr=0x800B0E98u; dispatch(c,c->ctr); } // 800B0E94
  c->r[3]=c->r[1]+0x0000005Cu; // 800B0E98
  c->r[4]=c->r[1]+0x00000068u; // 800B0E9C
  c->lr=0x800B0EA4u; f_80032FD8(c); // 800B0EA0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0EA4
  c->r[4]=c->r[30]|c->r[30]; // 800B0EA8
  c->r[3]=c->r[1]+0x00000050u; // 800B0EAC
  c->lr=0x800B0EB4u; f_800B0C60(c); // 800B0EB0
  c->r[3]=c->r[31]+0x00000044u; // 800B0EB4
  c->r[4]=c->r[1]+0x00000050u; // 800B0EB8
  c->lr=0x800B0EC0u; f_8003F468(c); // 800B0EBC
  c->r[3]=R32(c->r[30]+0x000008A8u); // 800B0EC0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0EC4
  cmps(c,0,(int32_t)c->r[3],0); // 800B0EC8
  c->r[0]=R32(c->r[30]+0x000008CCu); // 800B0ECC
  if (crb(c,2)) { goto L_800B0EE0; } // 800B0ED0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B0ED4
  c->r[3]=c->r[3]+c->r[0]; // 800B0ED8
  goto L_800B0EE8; // 800B0EDC
L_800B0EE0:;
  c->r[3]=0u+0x80470000u; // 800B0EE0
  c->r[3]=c->r[3]+0xFFFFDFA4u; // 800B0EE4
L_800B0EE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800B0EE8
  if (crb(c,2)) { goto L_800B0F04; } // 800B0EEC
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0EF0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0EF4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0EF8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800B0EFC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800B0F00
L_800B0F04:;
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 800B0F04
  c->r[3]=c->r[1]+0x00000020u; // 800B0F08
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0F0C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0F10
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0F14
  c->lr=0x800B0F1Cu; f_800521A0(c); // 800B0F18
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0F1C
  c->r[3]=c->r[1]+0x0000002Cu; // 800B0F20
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0F24
  {uint32_t ea=c->r[1]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0F28
  c->lr=0x800B0F30u; f_800521A0(c); // 800B0F2C
  c->r[4]=c->r[3]|c->r[3]; // 800B0F30
  c->r[3]=c->r[1]+0x00000008u; // 800B0F34
  c->lr=0x800B0F3Cu; f_8003F484(c); // 800B0F38
  c->r[3]=c->r[1]+0x00000008u; // 800B0F3C
  c->r[5]=c->r[1]+0x00000020u; // 800B0F40
  c->r[4]=c->r[3]|c->r[3]; // 800B0F44
  c->lr=0x800B0F4Cu; f_80064C74(c); // 800B0F48
  c->r[3]=c->r[1]+0x00000008u; // 800B0F4C
  c->lr=0x800B0F54u; f_802657AC(c); // 800B0F50
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B0F54
  c->r[3]=c->r[1]+0x00000014u; // 800B0F58
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0F5C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0F60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800B0F64
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0F68
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B0F6C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 800B0F70
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0F74
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B0F78
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800B0F7C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B0F80
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[4]); // 800B0F84
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[2]); // 800B0F88
  {uint32_t ea=c->r[31]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B0F8C
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[6]); // 800B0F90
  {uint32_t ea=c->r[2]+0xFFFF8DD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0F94
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 800B0F98
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[6]); // 800B0F9C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[6]); // 800B0FA0
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[6]); // 800B0FA4
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[0],c->f[2],-c->f[4])); // 800B0FA8
  c->lr=0x800B0FB0u; f_800521A0(c); // 800B0FAC
  c->r[3]=c->r[31]+0x0000002Cu; // 800B0FB0
  c->r[4]=c->r[1]+0x00000014u; // 800B0FB4
  c->lr=0x800B0FBCu; f_8003F468(c); // 800B0FB8
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B0FBC
  c->r[4]=c->r[30]+0x000008D0u; // 800B0FC0
  c->r[3]=c->r[1]+0x00000098u; // 800B0FC4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B0FC8
  c->ctr=c->r[12]; // 800B0FCC
  if (true) { c->lr=0x800B0FD4u; dispatch(c,c->ctr); } // 800B0FD0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0FD4
  c->r[4]=c->r[30]|c->r[30]; // 800B0FD8
  c->r[3]=c->r[1]+0x00000044u; // 800B0FDC
  c->lr=0x800B0FE4u; f_800B4024(c); // 800B0FE0
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B0FE4
  c->r[3]=c->r[1]+0x00000038u; // 800B0FE8
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B0FEC
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B0FF0
  c->lr=0x800B0FF8u; f_800521A0(c); // 800B0FF4
  c->r[3]=c->r[1]+0x00000098u; // 800B0FF8
  c->r[4]=c->r[1]+0x00000044u; // 800B0FFC
  c->lr=0x800B1004u; f_8007513C(c); // 800B1000
  c->r[3]=c->r[1]+0x00000098u; // 800B1004
  c->r[4]=c->r[1]+0x00000038u; // 800B1008
  c->lr=0x800B1010u; f_80032FF4(c); // 800B100C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B1010
  c->r[3]=c->r[30]+0x000008D0u; // 800B1014
  c->r[4]=c->r[1]+0x00000098u; // 800B1018
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B101C
  c->ctr=c->r[12]; // 800B1020
  if (true) { c->lr=0x800B1028u; dispatch(c,c->ctr); } // 800B1024
  c->r[3]=c->r[31]+0x00000038u; // 800B1028
  c->r[4]=c->r[1]+0x00000038u; // 800B102C
  c->lr=0x800B1034u; f_8003F468(c); // 800B1030
  c->r[0]=0u+0x00000000u; // 800B1034
  c->r[3]=c->r[13]+0xFFFF94B8u; // 800B1038
  W32(c->r[30]+0x00000894u,c->r[0]); // 800B103C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800B1040
  cmps(c,0,(int32_t)c->r[3],0); // 800B1044
  if (crb(c,2)) { goto L_800B10B0; } // 800B1048
  c->lr=0x800B1050u; f_80067C50(c); // 800B104C
  cmps(c,0,(int32_t)c->r[3],1); // 800B1050
  if (!crb(c,2)) { goto L_800B10B0; } // 800B1054
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 800B1058
  c->lr=0x800B1060u; f_80067C50(c); // 800B105C
  cmps(c,0,(int32_t)c->r[3],1); // 800B1060
  if (crb(c,2)) { goto L_800B1074; } // 800B1064
  c->r[0]=0u+0x00000001u; // 800B1068
  W32(c->r[30]+0x00000894u,c->r[0]); // 800B106C
  goto L_800B10B0; // 800B1070
L_800B1074:;
  c->lr=0x800B1078u; f_80291D94(c); // 800B1074
  c->r[3]=c->r[3]^0x80000000u; // 800B1078
  c->r[0]=0u+0x43300000u; // 800B107C
  W32(c->r[1]+0x000000CCu,c->r[3]); // 800B1080
  {uint32_t ea=c->r[2]+0xFFFF8D78u; c->f[3]=RF64(ea);} // 800B1084
  W32(c->r[1]+0x000000C8u,c->r[0]); // 800B1088
  {uint32_t ea=c->r[2]+0xFFFF8D70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B108C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=RF64(ea);} // 800B1090
  {uint32_t ea=c->r[2]+0xFFFF8DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1094
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800B1098
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800B109C
  fcmp(c,0,c->f[1],c->f[0]); // 800B10A0
  if (!crb(c,1)) { goto L_800B10B0; } // 800B10A4
  c->r[0]=0u+0x00000001u; // 800B10A8
  W32(c->r[30]+0x00000894u,c->r[0]); // 800B10AC
L_800B10B0:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800B10B0
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800B10B4
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800B10B8
  c->lr=c->r[0]; // 800B10BC
  c->r[1]=c->r[1]+0x000000E0u; // 800B10C0
  return; // 800B10C4
}

// fn_800B10C8
void f_800B10C8(Ctx* __restrict c) {
  trace_call(0x800B10C8u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B10C8
  c->r[0]=c->lr; // 800B10CC
  W32(c->r[1]+0x00000184u,c->r[0]); // 800B10D0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[31]);} // 800B10D4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,31,ea,0,0);} // 800B10D8
  c->r[11]=c->r[1]+0x00000170u; // 800B10DC
  c->lr=0x800B10E4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B10E0
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B10E4
  c->r[28]=c->r[3]|c->r[3]; // 800B10E8
  c->r[29]=c->r[4]|c->r[4]; // 800B10EC
  c->r[3]=c->r[1]+0x0000009Cu; // 800B10F0
  c->f[2]=c->f[1]; // 800B10F4
  c->f[3]=c->f[1]; // 800B10F8
  c->lr=0x800B1100u; f_800521A0(c); // 800B10FC
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1100
  c->r[3]=c->r[1]+0x000000BCu; // 800B1104
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1108
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 800B110C
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800B1110
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 800B1114
  c->lr=0x800B111Cu; f_80264680(c); // 800B1118
  c->r[3]=c->r[28]+0x000008ECu; // 800B111C
  c->r[4]=c->r[1]+0x000000BCu; // 800B1120
  c->lr=0x800B1128u; f_8016A37C(c); // 800B1124
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800B1128
  c->r[4]=c->r[28]+0x000008D0u; // 800B112C
  c->r[3]=c->r[1]+0x0000012Cu; // 800B1130
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B1134
  c->ctr=c->r[12]; // 800B1138
  if (true) { c->lr=0x800B1140u; dispatch(c,c->ctr); } // 800B113C
  {uint32_t ea=c->r[29]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1140
  c->r[3]=c->r[1]+0x00000060u; // 800B1144
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1148
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800B114C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[3]);} // 800B1150
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[3]);} // 800B1154
  {uint32_t ea=c->r[29]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1158
  {uint32_t ea=c->r[29]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B115C
  c->lr=0x800B1164u; f_800521A0(c); // 800B1160
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1164
  c->r[30]=c->r[3]|c->r[3]; // 800B1168
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B116C
  c->r[3]=c->r[1]+0x0000006Cu; // 800B1170
  c->f[3]=c->f[2]; // 800B1174
  c->lr=0x800B117Cu; f_800521A0(c); // 800B1178
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B117C
  c->r[31]=c->r[3]|c->r[3]; // 800B1180
  c->r[3]=c->r[1]+0x00000078u; // 800B1184
  c->f[2]=c->f[1]; // 800B1188
  c->f[3]=c->f[1]; // 800B118C
  c->lr=0x800B1194u; f_800521A0(c); // 800B1190
  c->r[4]=c->r[3]|c->r[3]; // 800B1194
  c->r[5]=c->r[31]|c->r[31]; // 800B1198
  c->r[6]=c->r[30]|c->r[30]; // 800B119C
  c->r[3]=c->r[1]+0x000000ECu; // 800B11A0
  c->r[7]=c->r[1]+0x00000054u; // 800B11A4
  c->lr=0x800B11ACu; f_800AFB40(c); // 800B11A8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B11AC
  c->r[3]=c->r[1]+0x00000048u; // 800B11B0
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B11B4
  c->r[4]=c->r[1]+0x000000ECu; // 800B11B8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800B11BC
  c->lr=0x800B11C4u; f_800AFD64(c); // 800B11C0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B11C4
  c->r[3]=c->r[28]|c->r[28]; // 800B11C8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800B11CC
  c->r[12]=R32(c->r[28]+0x00000010u); // 800B11D0
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B11D4
  c->ctr=c->r[12]; // 800B11D8
  if (true) { c->lr=0x800B11E0u; dispatch(c,c->ctr); } // 800B11DC
  {uint32_t ea=c->r[2]+0xFFFF8D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B11E0
  c->r[30]=0u+0x00000000u; // 800B11E4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800B11E8
L_800B11EC:;
  c->f[1]=c->f[31]; // 800B11EC
  c->r[3]=c->r[1]+0x00000018u; // 800B11F0
  c->r[4]=c->r[29]+0x0000002Cu; // 800B11F4
  c->lr=0x800B11FCu; f_80064C58(c); // 800B11F8
  c->r[3]=c->r[29]+0x00000038u; // 800B11FC
  c->r[5]=c->r[1]+0x00000018u; // 800B1200
  c->r[4]=c->r[3]|c->r[3]; // 800B1204
  c->lr=0x800B120Cu; f_80064C34(c); // 800B1208
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B120C
  c->r[3]=c->r[1]+0x0000003Cu; // 800B1210
  c->r[4]=c->r[29]+0x0000002Cu; // 800B1214
  c->lr=0x800B121Cu; f_80064C58(c); // 800B1218
  c->r[3]=c->r[1]+0x00000030u; // 800B121C
  c->r[4]=c->r[1]+0x00000090u; // 800B1220
  c->r[5]=c->r[1]+0x0000003Cu; // 800B1224
  c->lr=0x800B122Cu; f_80064C74(c); // 800B1228
  c->f[1]=c->f[31]; // 800B122C
  c->r[3]=c->r[1]+0x00000024u; // 800B1230
  c->r[4]=c->r[1]+0x00000030u; // 800B1234
  c->lr=0x800B123Cu; f_80064C58(c); // 800B1238
  c->r[3]=c->r[29]+0x0000002Cu; // 800B123C
  c->r[5]=c->r[1]+0x00000024u; // 800B1240
  c->r[4]=c->r[3]|c->r[3]; // 800B1244
  c->lr=0x800B124Cu; f_80064C34(c); // 800B1248
  c->r[30]=c->r[30]+0x00000001u; // 800B124C
  cmps(c,0,(int32_t)c->r[30],10); // 800B1250
  if (crb(c,0)) { IRQCHK(c); goto L_800B11EC; } // 800B1254
  c->r[3]=c->r[1]+0x00000084u; // 800B1258
  c->r[4]=c->r[29]+0x00000038u; // 800B125C
  c->r[5]=c->r[1]+0x0000009Cu; // 800B1260
  c->lr=0x800B1268u; f_80064C34(c); // 800B1264
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1268
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B126C
  fcmp(c,0,c->f[1],c->f[0]); // 800B1270
  if (!crb(c,1)) { goto L_800B12D0; } // 800B1274
  c->r[3]=c->r[1]+0x000000A8u; // 800B1278
  c->r[4]=0u+0x00000000u; // 800B127C
  c->lr=0x800B1284u; f_800770B8(c); // 800B1280
  c->r[5]=R32(c->r[28]+0x00000000u); // 800B1284
  c->r[3]=c->r[1]+0x00000010u; // 800B1288
  c->r[0]=R32(c->r[28]+0x00000004u); // 800B128C
  c->r[4]=c->r[1]+0x000000A8u; // 800B1290
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B1294
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1298
  c->lr=0x800B12A0u; f_80077140(c); // 800B129C
  c->r[7]=R32(c->r[28]+0x00000000u); // 800B12A0
  c->r[3]=c->r[28]+0x000008A4u; // 800B12A4
  c->r[0]=R32(c->r[28]+0x00000004u); // 800B12A8
  c->r[4]=c->r[1]+0x00000008u; // 800B12AC
  c->r[5]=0u+0x00000001u; // 800B12B0
  c->r[6]=0u+0x00000001u; // 800B12B4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800B12B8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B12BC
  c->lr=0x800B12C4u; f_800B8C4C(c); // 800B12C0
  c->r[3]=c->r[1]+0x00000084u; // 800B12C4
  c->r[4]=c->r[29]+0x00000044u; // 800B12C8
  c->lr=0x800B12D0u; f_8003F468(c); // 800B12CC
L_800B12D0:;
  c->r[3]=c->r[1]+0x0000012Cu; // 800B12D0
  c->r[4]=c->r[1]+0x00000084u; // 800B12D4
  c->lr=0x800B12DCu; f_80032FF4(c); // 800B12D8
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800B12DC
  c->r[3]=c->r[28]+0x000008D0u; // 800B12E0
  c->r[4]=c->r[1]+0x0000012Cu; // 800B12E4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B12E8
  c->ctr=c->r[12]; // 800B12EC
  if (true) { c->lr=0x800B12F4u; dispatch(c,c->ctr); } // 800B12F0
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,31,ea,0,0);} // 800B12F4
  c->r[11]=c->r[1]+0x00000170u; // 800B12F8
  {uint32_t ea=c->r[1]+0x00000170u; c->f[31]=RF64(ea);} // 800B12FC
  c->lr=0x800B1304u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1300
  c->r[0]=R32(c->r[1]+0x00000184u); // 800B1304
  c->lr=c->r[0]; // 800B1308
  c->r[1]=c->r[1]+0x00000180u; // 800B130C
  return; // 800B1310
}

// fn_800B1314
void f_800B1314(Ctx* __restrict c) {
  trace_call(0x800B1314u);
  return; // 800B1314
}

// fn_800B1318
void f_800B1318(Ctx* __restrict c) {
  trace_call(0x800B1318u);
  c->r[4]=c->r[3]|c->r[3]; // 800B1318
  c->r[3]=c->r[3]+0x00001054u; // 800B131C
  c->r[4]=c->r[4]+0x00001E64u; // 800B1320
  f_801812C4(c); return; // 800B1324
}

// fn_800B1328
void f_800B1328(Ctx* __restrict c) {
  trace_call(0x800B1328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1328
  c->r[0]=c->lr; // 800B132C
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1330
  c->r[4]=c->r[3]+0x000008ECu; // 800B1334
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1338
  c->r[6]=0u+0x00000000u; // 800B133C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1340
  c->r[7]=0u+0x00000000u; // 800B1344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1348
  c->r[31]=c->r[5]|c->r[5]; // 800B134C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B1350
  c->r[30]=c->r[3]|c->r[3]; // 800B1354
  c->r[3]=c->r[3]+0x00000C88u; // 800B1358
  c->r[5]=R32(c->r[5]+0x00000034u); // 800B135C
  c->lr=0x800B1364u; f_800BB0C8(c); // 800B1360
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1364
  c->r[3]=c->r[31]+0x00000038u; // 800B1368
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B136C
  c->f[2]=c->f[1]; // 800B1370
  c->f[3]=c->f[1]; // 800B1374
  {uint32_t ea=c->r[30]+0x000008F0u; WF32(ea,c->f[0]);} // 800B1378
  c->lr=0x800B1380u; f_80065358(c); // 800B137C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1380
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1384
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B1388
  c->lr=c->r[0]; // 800B138C
  c->r[1]=c->r[1]+0x00000010u; // 800B1390
  return; // 800B1394
}

// fn_800B1398
void f_800B1398(Ctx* __restrict c) {
  trace_call(0x800B1398u);
  {uint32_t ea=c->r[1]+0xFFFFF0C0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1398
  c->r[0]=c->lr; // 800B139C
  W32(c->r[1]+0x00000F44u,c->r[0]); // 800B13A0
  c->r[11]=c->r[1]+0x00000F40u; // 800B13A4
  c->lr=0x800B13ACu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B13A8
  c->r[12]=R32(c->r[3]+0x00000FF8u); // 800B13AC
  c->r[30]=c->r[4]|c->r[4]; // 800B13B0
  c->r[29]=c->r[3]|c->r[3]; // 800B13B4
  c->r[4]=0u+0x00000000u; // 800B13B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B13BC
  c->ctr=c->r[12]; // 800B13C0
  c->r[3]=c->r[3]+0x00000FF8u; // 800B13C4
  if (true) { c->lr=0x800B13CCu; dispatch(c,c->ctr); } // 800B13C8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B13CC
  c->r[3]=c->r[1]+0x00000014u; // 800B13D0
  c->f[2]=c->f[1]; // 800B13D4
  c->f[3]=c->f[1]; // 800B13D8
  c->lr=0x800B13E0u; f_800521A0(c); // 800B13DC
  c->r[12]=R32(c->r[29]+0x00000010u); // 800B13E0
  c->r[31]=c->r[3]|c->r[3]; // 800B13E4
  c->r[3]=c->r[29]|c->r[29]; // 800B13E8
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B13EC
  c->ctr=c->r[12]; // 800B13F0
  if (true) { c->lr=0x800B13F8u; dispatch(c,c->ctr); } // 800B13F4
  c->r[6]=c->r[31]|c->r[31]; // 800B13F8
  c->r[3]=c->r[30]+0x00000010u; // 800B13FC
  c->r[4]=c->r[29]+0x000008D0u; // 800B1400
  c->r[5]=c->r[29]+0x00001054u; // 800B1404
  c->r[7]=0u+0x00000001u; // 800B1408
  c->lr=0x800B1410u; f_8007B0CC(c); // 800B140C
  c->r[12]=R32(c->r[29]+0x00000010u); // 800B1410
  c->r[3]=c->r[29]|c->r[29]; // 800B1414
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B1418
  c->ctr=c->r[12]; // 800B141C
  if (true) { c->lr=0x800B1424u; dispatch(c,c->ctr); } // 800B1420
  c->r[3]=c->r[30]+0x00000010u; // 800B1424
  c->r[4]=c->r[29]+0x000008D0u; // 800B1428
  c->lr=0x800B1430u; f_8007B654(c); // 800B142C
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B1430
  c->r[4]=c->r[29]+0x000008D0u; // 800B1434
  c->r[3]=c->r[1]+0x00000104u; // 800B1438
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B143C
  c->ctr=c->r[12]; // 800B1440
  if (true) { c->lr=0x800B1448u; dispatch(c,c->ctr); } // 800B1444
  c->r[0]=0u+0x00000006u; // 800B1448
  c->r[5]=c->r[1]+0x000000D0u; // 800B144C
  c->r[4]=c->r[29]+0x00000940u; // 800B1450
  c->ctr=c->r[0]; // 800B1454
L_800B1458:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B1458
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B145C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B1460
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B1464
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B1458; } // 800B1468
  c->r[3]=c->r[1]+0x00000104u; // 800B146C
  c->r[4]=c->r[1]+0x000000D4u; // 800B1470
  c->r[5]=c->r[1]+0x000000A4u; // 800B1474
  c->lr=0x800B147Cu; f_802646E0(c); // 800B1478
  {uint32_t ea=c->r[1]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B147C
  c->r[3]=c->r[1]+0x00000038u; // 800B1480
  {uint32_t ea=c->r[1]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1484
  {uint32_t ea=c->r[1]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1488
  c->lr=0x800B1490u; f_800521A0(c); // 800B148C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1490
  c->r[3]=c->r[1]+0x0000002Cu; // 800B1494
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1498
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B149C
  c->lr=0x800B14A4u; f_800521A0(c); // 800B14A0
  c->r[3]=c->r[1]+0x00000134u; // 800B14A4
  c->lr=0x800B14ACu; f_800462E8(c); // 800B14A8
  c->r[3]=0u+0x80450000u; // 800B14AC
  c->r[4]=c->r[1]+0x00000134u; // 800B14B0
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B14B4
  c->r[5]=c->r[1]+0x00000038u; // 800B14B8
  c->r[6]=c->r[1]+0x0000002Cu; // 800B14BC
  c->r[7]=0u+0x00000000u; // 800B14C0
  c->lr=0x800B14C8u; f_80044D14(c); // 800B14C4
  cmps(c,0,(int32_t)c->r[3],0); // 800B14C8
  if (crb(c,2)) { goto L_800B1530; } // 800B14CC
  {uint32_t ea=c->r[2]+0xFFFF8D84u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B14D0
  c->r[3]=c->r[1]+0x00000008u; // 800B14D4
  c->r[4]=c->r[1]+0x00000148u; // 800B14D8
  c->lr=0x800B14E0u; f_80064C58(c); // 800B14DC
  c->r[3]=c->r[1]+0x00000020u; // 800B14E0
  c->r[4]=c->r[1]+0x0000013Cu; // 800B14E4
  c->r[5]=c->r[1]+0x00000008u; // 800B14E8
  c->lr=0x800B14F0u; f_80064C34(c); // 800B14EC
  c->r[3]=c->r[1]+0x000000A4u; // 800B14F0
  c->r[4]=c->r[1]+0x00000020u; // 800B14F4
  c->lr=0x800B14FCu; f_80032FF4(c); // 800B14F8
  c->r[3]=c->r[1]+0x00000104u; // 800B14FC
  c->r[4]=c->r[1]+0x00000044u; // 800B1500
  c->lr=0x800B1508u; f_80264994(c); // 800B1504
  c->r[3]=c->r[1]+0x00000044u; // 800B1508
  c->r[4]=c->r[1]+0x000000A4u; // 800B150C
  c->r[5]=c->r[1]+0x00000074u; // 800B1510
  c->lr=0x800B1518u; f_802646E0(c); // 800B1514
  c->r[3]=c->r[29]+0x000008ECu; // 800B1518
  c->r[4]=c->r[1]+0x00000074u; // 800B151C
  c->lr=0x800B1524u; f_8016A37C(c); // 800B1520
  c->r[3]=c->r[29]+0x00001060u; // 800B1524
  c->r[4]=c->r[1]+0x00000134u; // 800B1528
  c->lr=0x800B1530u; f_80046478(c); // 800B152C
L_800B1530:;
  c->r[3]=c->r[1]+0x00000134u; // 800B1530
  c->r[4]=0u+0xFFFFFFFFu; // 800B1534
  c->lr=0x800B153Cu; f_80046394(c); // 800B1538
  c->r[11]=c->r[1]+0x00000F40u; // 800B153C
  c->lr=0x800B1544u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1540
  c->r[0]=R32(c->r[1]+0x00000F44u); // 800B1544
  c->lr=c->r[0]; // 800B1548
  c->r[1]=c->r[1]+0x00000F40u; // 800B154C
  return; // 800B1550
}

// fn_800B1554
void f_800B1554(Ctx* __restrict c) {
  trace_call(0x800B1554u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1554
  c->r[0]=c->lr; // 800B1558
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B155C
  c->r[11]=c->r[1]+0x00000040u; // 800B1560
  c->lr=0x800B1568u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1564
  c->r[29]=c->r[3]|c->r[3]; // 800B1568
  c->r[30]=c->r[4]|c->r[4]; // 800B156C
  c->r[3]=c->r[4]+0x00000010u; // 800B1570
  c->r[4]=c->r[29]+0x000008D0u; // 800B1574
  c->r[5]=c->r[29]+0x00001054u; // 800B1578
  c->lr=0x800B1580u; f_8007AFF8(c); // 800B157C
  cmps(c,0,(int32_t)c->r[3],3); // 800B1580
  c->r[31]=c->r[3]|c->r[3]; // 800B1584
  if (crb(c,2)) { goto L_800B15DC; } // 800B1588
  c->r[3]=R32(c->r[29]+0x00000974u); // 800B158C
  c->r[4]=R32(c->r[30]+0x00000034u); // 800B1590
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B1594
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B1598
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B159C
  if (!crb(c,2)) { goto L_800B15DC; } // 800B15A0
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B15A4
  c->lr=0x800B15ACu; f_8016498C(c); // 800B15A8
  cmps(c,0,(int32_t)c->r[3],0); // 800B15AC
  if (crb(c,2)) { goto L_800B15DC; } // 800B15B0
  c->r[4]=c->r[31]|c->r[31]; // 800B15B4
  c->r[3]=c->r[1]+0x00000010u; // 800B15B8
  c->lr=0x800B15C0u; f_800770B8(c); // 800B15BC
  c->r[5]=R32(c->r[29]+0x00000000u); // 800B15C0
  c->r[3]=c->r[1]+0x00000008u; // 800B15C4
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B15C8
  c->r[4]=c->r[1]+0x00000010u; // 800B15CC
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B15D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B15D4
  c->lr=0x800B15DCu; f_80077140(c); // 800B15D8
L_800B15DC:;
  c->r[11]=c->r[1]+0x00000040u; // 800B15DC
  c->lr=0x800B15E4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B15E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B15E4
  c->lr=c->r[0]; // 800B15E8
  c->r[1]=c->r[1]+0x00000040u; // 800B15EC
  return; // 800B15F0
}

// fn_800B15F4
void f_800B15F4(Ctx* __restrict c) {
  trace_call(0x800B15F4u);
  {uint32_t ea=c->r[3]+0x00000FF8u; c->r[12]=R32(ea); c->r[3]=ea;} // 800B15F4
  c->r[4]=0u+0x00000001u; // 800B15F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B15FC
  c->ctr=c->r[12]; // 800B1600
  if (true) { dispatch(c,c->ctr); return; } // 800B1604
}

// fn_800B1608
void f_800B1608(Ctx* __restrict c) {
  trace_call(0x800B1608u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1608
  c->r[0]=c->lr; // 800B160C
  c->r[4]=0u+0x00000017u; // 800B1610
  W32(c->r[1]+0x00000064u,c->r[0]); // 800B1614
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800B1618
  c->r[31]=c->r[5]|c->r[5]; // 800B161C
  c->r[5]=0u+0x00000001u; // 800B1620
  W32(c->r[1]+0x00000058u,c->r[30]); // 800B1624
  c->r[30]=c->r[3]|c->r[3]; // 800B1628
  c->r[3]=c->r[3]+0x00000394u; // 800B162C
  c->lr=0x800B1634u; f_800B16D0(c); // 800B1630
  c->r[5]=R32(c->r[31]+0x00000034u); // 800B1634
  c->r[3]=c->r[30]+0x00000C88u; // 800B1638
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B163C
  c->r[4]=c->r[30]+0x000008ECu; // 800B1640
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1644
  c->r[6]=0u+0x00000000u; // 800B1648
  c->r[7]=0u+0x00000000u; // 800B164C
  c->lr=0x800B1654u; f_800BB0C8(c); // 800B1650
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B1654
  c->r[4]=c->r[30]+0x000008D0u; // 800B1658
  c->r[3]=c->r[1]+0x0000001Cu; // 800B165C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B1660
  c->ctr=c->r[12]; // 800B1664
  if (true) { c->lr=0x800B166Cu; dispatch(c,c->ctr); } // 800B1668
  c->r[3]=c->r[1]+0x00000010u; // 800B166C
  c->r[4]=c->r[1]+0x0000001Cu; // 800B1670
  c->lr=0x800B1678u; f_80032FD8(c); // 800B1674
  c->r[3]=c->r[31]+0x00000018u; // 800B1678
  c->r[4]=c->r[1]+0x00000010u; // 800B167C
  c->lr=0x800B1684u; f_8003F468(c); // 800B1680
  c->lr=0x800B1688u; f_80127CC0(c); // 800B1684
  c->r[4]=c->r[3]|c->r[3]; // 800B1688
  c->r[3]=c->r[1]+0x00000008u; // 800B168C
  c->lr=0x800B1694u; f_800773C0(c); // 800B1690
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1694
  c->r[3]=c->r[31]+0x00000038u; // 800B1698
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800B169C
  c->f[2]=c->f[1]; // 800B16A0
  c->f[3]=c->f[1]; // 800B16A4
  W32(c->r[31]+0x00000058u,c->r[0]); // 800B16A8
  c->lr=0x800B16B0u; f_80065358(c); // 800B16AC
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B16B0
  {uint32_t ea=c->r[30]+0x000008F0u; WF32(ea,c->f[0]);} // 800B16B4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800B16B8
  c->r[30]=R32(c->r[1]+0x00000058u); // 800B16BC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800B16C0
  c->lr=c->r[0]; // 800B16C4
  c->r[1]=c->r[1]+0x00000060u; // 800B16C8
  return; // 800B16CC
}

// fn_800B16D0
void f_800B16D0(Ctx* __restrict c) {
  trace_call(0x800B16D0u);
  c->r[0]=sraw(c,c->r[4],5); // 800B16D0
  cmps(c,0,(int32_t)c->r[5],0); // 800B16D4
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 800B16D8
  c->r[0]=sraw(c,c->r[4],5); // 800B16DC
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 800B16E0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B16E4
  c->r[6]=c->r[4]-c->r[0]; // 800B16E8
  if (crb(c,2)) { goto L_800B1710; } // 800B16EC
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800B16F0
  c->r[0]=0u+0x00000001u; // 800B16F4
  c->r[4]=c->r[3]+c->r[4]; // 800B16F8
  c->r[3]=R32(c->r[4]+0x00000450u); // 800B16FC
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 800B1700
  c->r[0]=c->r[3]|c->r[0]; // 800B1704
  W32(c->r[4]+0x00000450u,c->r[0]); // 800B1708
  return; // 800B170C
L_800B1710:;
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800B1710
  c->r[0]=0u+0x00000001u; // 800B1714
  c->r[4]=c->r[3]+c->r[4]; // 800B1718
  c->r[3]=R32(c->r[4]+0x00000450u); // 800B171C
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 800B1720
  c->r[0]=c->r[3]&~c->r[0]; // 800B1724
  W32(c->r[4]+0x00000450u,c->r[0]); // 800B1728
  return; // 800B172C
}

// fn_800B1730
void f_800B1730(Ctx* __restrict c) {
  trace_call(0x800B1730u);
  {uint32_t ea=c->r[1]+0xFFFFEDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1730
  c->r[0]=c->lr; // 800B1734
  W32(c->r[1]+0x00001234u,c->r[0]); // 800B1738
  c->r[0]=0u+0x00001228u; // 800B173C
  {uint32_t ea=c->r[1]+0x00001220u; WF64(ea,c->f[31]);} // 800B1740
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800B1744
  c->r[0]=0u+0x00001218u; // 800B1748
  {uint32_t ea=c->r[1]+0x00001210u; WF64(ea,c->f[30]);} // 800B174C
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,30,ea,0,0);} // 800B1750
  c->r[11]=c->r[1]+0x00001210u; // 800B1754
  c->lr=0x800B175Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1758
  c->r[31]=c->r[1]|c->r[1]; // 800B175C
  c->f[30]=c->f[1]; // 800B1760
  c->r[27]=c->r[3]|c->r[3]; // 800B1764
  {uint32_t ea=c->r[2]+0xFFFF8DD4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B1768
  c->r[29]=c->r[4]|c->r[4]; // 800B176C
  c->r[28]=c->r[5]|c->r[5]; // 800B1770
  c->r[30]=c->r[6]|c->r[6]; // 800B1774
  c->r[3]=c->r[31]+0x00000084u; // 800B1778
  c->lr=0x800B1780u; f_80063ACC(c); // 800B177C
  c->r[5]=0u+0x803F0000u; // 800B1780
  c->r[4]=c->r[28]|c->r[28]; // 800B1784
  c->r[5]=c->r[5]+0x000022C4u; // 800B1788
  c->r[3]=c->r[31]+0x000000A8u; // 800B178C
  W32(c->r[31]+0x000000A4u,c->r[5]); // 800B1790
  c->lr=0x800B1798u; f_8003F468(c); // 800B1794
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B1798
  c->r[3]=c->r[31]+0x00000090u; // 800B179C
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[30]);} // 800B17A0
  c->r[4]=c->r[31]+0x0000004Cu; // 800B17A4
  W32(c->r[31]+0x000000A0u,c->r[0]); // 800B17A8
  c->r[5]=R32(c->r[27]+0x00000000u); // 800B17AC
  c->r[0]=R32(c->r[27]+0x00000004u); // 800B17B0
  W32(c->r[31]+0x0000004Cu,c->r[5]); // 800B17B4
  W32(c->r[31]+0x00000050u,c->r[0]); // 800B17B8
  c->lr=0x800B17C0u; f_80063D44(c); // 800B17BC
  c->r[3]=c->r[31]+0x000003B8u; // 800B17C0
  c->lr=0x800B17C8u; f_8003F3AC(c); // 800B17C4
  c->lr=0x800B17CCu; f_8003DA30(c); // 800B17C8
  c->lr=0x800B17D0u; f_8003ED58(c); // 800B17CC
  W32(c->r[31]+0x00000018u,c->r[3]); // 800B17D0
  c->lr=0x800B17D8u; f_8003DA30(c); // 800B17D4
  c->r[4]=c->r[31]+0x00000084u; // 800B17D8
  c->r[5]=c->r[31]+0x00000018u; // 800B17DC
  c->r[6]=c->r[31]+0x000003B8u; // 800B17E0
  c->lr=0x800B17E8u; f_8003E788(c); // 800B17E4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800B17E8
  W32(c->r[31]+0x00000020u,c->r[3]); // 800B17EC
  goto L_800B19E4; // 800B17F0
L_800B17F4:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B17F4
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800B17F8
  c->r[12]=R32(c->r[3]+0x00000010u); // 800B17FC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B1800
  c->ctr=c->r[12]; // 800B1804
  if (true) { c->lr=0x800B180Cu; dispatch(c,c->ctr); } // 800B1808
  W32(c->r[31]+0x00000044u,c->r[3]); // 800B180C
  c->r[5]=0u+0xE0000000u; // 800B1810
  c->r[3]=c->r[31]+0x00000044u; // 800B1814
  W32(c->r[31]+0x00000048u,c->r[4]); // 800B1818
  c->r[4]=c->r[5]+0x00000002u; // 800B181C
  c->lr=0x800B1824u; f_8003EDD0(c); // 800B1820
  cmps(c,0,(int32_t)c->r[3],0); // 800B1824
  if (crb(c,2)) { goto L_800B18D0; } // 800B1828
  cmps(c,0,(int32_t)c->r[30],0); // 800B182C
  if (crb(c,2)) { goto L_800B1848; } // 800B1830
  c->r[3]=R32(c->r[31]+0x00000020u); // 800B1834
  c->r[3]=R32(c->r[3]+0x00000020u); // 800B1838
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B183C
  cmps(c,0,(int32_t)c->r[0],-1); // 800B1840
  if (!crb(c,2)) { goto L_800B19B4; } // 800B1844
L_800B1848:;
  c->r[5]=R32(c->r[31]+0x00000020u); // 800B1848
  c->f[1]=c->f[31]; // 800B184C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1850
  c->r[3]=c->r[31]+0x00000234u; // 800B1854
  c->r[0]=R32(c->r[31]+0x000000A0u); // 800B1858
  c->r[4]=c->r[31]+0x000000A8u; // 800B185C
  c->r[5]=R32(c->r[5]+0x00000020u); // 800B1860
  c->f[4]=c->f[3]; // 800B1864
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1868
  W32(c->r[5]+0x00000018u,c->r[0]); // 800B186C
  c->f[5]=c->f[3]; // 800B1870
  c->r[5]=c->r[31]+0x000003F0u; // 800B1874
  c->r[6]=c->r[31]+0x00000034u; // 800B1878
  c->r[10]=R32(c->r[31]+0x00000020u); // 800B187C
  c->r[7]=0u+0x00000016u; // 800B1880
  c->r[8]=0u+0xFFFFFFFFu; // 800B1884
  c->r[9]=R32(c->r[10]+0xFFFFFFF8u); // 800B1888
  c->r[0]=R32(c->r[10]+0xFFFFFFFCu); // 800B188C
  W32(c->r[31]+0x00000034u,c->r[9]); // 800B1890
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B1894
  c->lr=0x800B189Cu; f_800B1A54(c); // 800B1898
  c->r[6]=R32(c->r[31]+0x00000020u); // 800B189C
  c->r[3]=c->r[31]+0x0000003Cu; // 800B18A0
  c->r[4]=c->r[31]+0x00000234u; // 800B18A4
  c->r[5]=R32(c->r[6]+0xFFFFFFF8u); // 800B18A8
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800B18AC
  W32(c->r[31]+0x0000003Cu,c->r[5]); // 800B18B0
  W32(c->r[31]+0x00000040u,c->r[0]); // 800B18B4
  c->lr=0x800B18BCu; f_800B1AD4(c); // 800B18B8
  c->r[0]=0u+0xFFFFFFFFu; // 800B18BC
  c->r[3]=c->r[31]+0x00000234u; // 800B18C0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800B18C4
  c->lr=0x800B18CCu; f_8006BCB4(c); // 800B18C8
  goto L_800B19B4; // 800B18CC
L_800B18D0:;
  c->r[5]=R32(c->r[31]+0x00000020u); // 800B18D0
  c->r[3]=c->r[31]+0x000000BCu; // 800B18D4
  c->r[0]=R32(c->r[31]+0x000000A0u); // 800B18D8
  c->r[4]=c->r[31]+0x000000A8u; // 800B18DC
  c->r[7]=R32(c->r[5]+0x00000020u); // 800B18E0
  c->r[5]=c->r[31]+0x000003F0u; // 800B18E4
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B18E8
  c->r[6]=c->r[31]+0x00000024u; // 800B18EC
  W32(c->r[7]+0x00000018u,c->r[0]); // 800B18F0
  c->r[7]=0u+0x00000000u; // 800B18F4
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B18F8
  c->r[8]=0u+0xFFFFFFFFu; // 800B18FC
  c->r[10]=R32(c->r[31]+0x00000020u); // 800B1900
  c->r[9]=R32(c->r[10]+0xFFFFFFF8u); // 800B1904
  c->r[0]=R32(c->r[10]+0xFFFFFFFCu); // 800B1908
  W32(c->r[31]+0x00000024u,c->r[9]); // 800B190C
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B1910
  c->lr=0x800B1918u; f_8003FF2C(c); // 800B1914
  c->r[29]=0u+0x803F0000u; // 800B1918
  c->r[5]=R32(c->r[31]+0x00000020u); // 800B191C
  c->r[29]=c->r[29]+0x000067BCu; // 800B1920
  c->r[3]=c->r[31]+0x0000002Cu; // 800B1924
  W32(c->r[31]+0x000000BCu,c->r[29]); // 800B1928
  c->r[4]=R32(c->r[5]+0xFFFFFFF8u); // 800B192C
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 800B1930
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 800B1934
  W32(c->r[31]+0x00000030u,c->r[0]); // 800B1938
  c->lr=0x800B1940u; f_8003F1D4(c); // 800B193C
  cmps(c,0,(int32_t)c->r[3],0); // 800B1940
  if (crb(c,2)) { goto L_800B19A4; } // 800B1944
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800B1948
  c->lr=0x800B1950u; f_802A6EE4(c); // 800B194C
  cmps(c,0,(int32_t)c->r[3],0); // 800B1950
  c->r[28]=c->r[3]|c->r[3]; // 800B1954
  if (crb(c,2)) { goto L_800B19A4; } // 800B1958
  if (crb(c,2)) { goto L_800B196C; } // 800B195C
  W32(c->r[31]+0x00000068u,c->r[1]); // 800B1960
  c->lr=0x800B1968u; f_8006BEE8(c); // 800B1964
  W32(c->r[28]+0x00000000u,c->r[29]); // 800B1968
L_800B196C:;
  c->r[3]=c->r[28]|c->r[28]; // 800B196C
  c->r[4]=c->r[31]+0x000000BCu; // 800B1970
  c->lr=0x800B1978u; f_8006BDA8(c); // 800B1974
  c->r[29]=addc(c,c->r[28],0x00000178u,0); cr0(c,c->r[29]); // 800B1978
  if (crb(c,2)) { goto L_800B1990; } // 800B197C
  W32(c->r[31]+0x00000080u,c->r[1]); // 800B1980
  c->r[3]=c->r[29]|c->r[29]; // 800B1984
  c->r[4]=c->r[28]|c->r[28]; // 800B1988
  c->lr=0x800B1990u; f_80064CE8(c); // 800B198C
L_800B1990:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800B1990
  c->lr=0x800B1998u; f_80068A78(c); // 800B1994
  c->r[4]=c->r[29]|c->r[29]; // 800B1998
  c->r[3]=c->r[3]+0x00000030u; // 800B199C
  c->lr=0x800B19A4u; f_8003FD14(c); // 800B19A0
L_800B19A4:;
  c->r[0]=0u+0xFFFFFFFFu; // 800B19A4
  c->r[3]=c->r[31]+0x000000BCu; // 800B19A8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800B19AC
  c->lr=0x800B19B4u; f_800B1BAC(c); // 800B19B0
L_800B19B4:;
  c->r[3]=c->r[31]+0x00000020u; // 800B19B4
  c->r[4]=0u+0x00000000u; // 800B19B8
  c->lr=0x800B19C0u; f_8003ED68(c); // 800B19BC
  c->r[0]=R32(c->r[31]+0x00000020u); // 800B19C0
  W32(c->r[31]+0x00000010u,c->r[0]); // 800B19C4
  c->lr=0x800B19CCu; f_8003DA30(c); // 800B19C8
  c->r[4]=c->r[31]+0x00000084u; // 800B19CC
  c->r[5]=c->r[31]+0x00000010u; // 800B19D0
  c->r[6]=c->r[31]+0x000003B8u; // 800B19D4
  c->lr=0x800B19DCu; f_8003E788(c); // 800B19D8
  W32(c->r[31]+0x00000014u,c->r[3]); // 800B19DC
  W32(c->r[31]+0x00000020u,c->r[3]); // 800B19E0
L_800B19E4:;
  c->lr=0x800B19E8u; f_8003DA30(c); // 800B19E4
  c->lr=0x800B19ECu; f_8003ECFC(c); // 800B19E8
  c->r[0]=R32(c->r[31]+0x00000020u); // 800B19EC
  c->r[4]=c->r[31]+0x00000008u; // 800B19F0
  W32(c->r[31]+0x00000008u,c->r[3]); // 800B19F4
  c->r[3]=c->r[31]+0x0000000Cu; // 800B19F8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800B19FC
  c->lr=0x800B1A04u; f_8003ED7C(c); // 800B1A00
  cmps(c,0,(int32_t)c->r[3],0); // 800B1A04
  if (!crb(c,2)) { IRQCHK(c); goto L_800B17F4; } // 800B1A08
  c->r[0]=0u+0xFFFFFFFFu; // 800B1A0C
  c->r[3]=c->r[31]+0x000003F0u; // 800B1A10
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800B1A14
  c->lr=0x800B1A1Cu; f_80046394(c); // 800B1A18
  c->r[10]=c->r[31]|c->r[31]; // 800B1A1C
  c->r[0]=0u+0x00001228u; // 800B1A20
  {uint32_t ea=c->r[10]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B1A24
  {uint32_t ea=c->r[31]+0x00001220u; c->f[31]=RF64(ea);} // 800B1A28
  c->r[0]=0u+0x00001218u; // 800B1A2C
  {uint32_t ea=c->r[10]+c->r[0]; psq_load(c,30,ea,0,0);} // 800B1A30
  c->r[11]=c->r[10]+0x00001210u; // 800B1A34
  {uint32_t ea=c->r[31]+0x00001210u; c->f[30]=RF64(ea);} // 800B1A38
  c->lr=0x800B1A40u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1A3C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B1A40
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B1A44
  c->r[1]=c->r[10]|c->r[10]; // 800B1A48
  c->lr=c->r[0]; // 800B1A4C
  return; // 800B1A50
}

// fn_800B1A54
void f_800B1A54(Ctx* __restrict c) {
  trace_call(0x800B1A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1A54
  c->r[0]=c->lr; // 800B1A58
  c->r[9]=R32(c->r[6]+0x00000000u); // 800B1A5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B1A60
  c->r[0]=R32(c->r[6]+0x00000004u); // 800B1A64
  c->r[6]=c->r[1]+0x00000008u; // 800B1A68
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800B1A6C
  c->f[31]=c->f[5]; // 800B1A70
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800B1A74
  c->f[30]=c->f[4]; // 800B1A78
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[29]);} // 800B1A7C
  c->f[29]=c->f[3]; // 800B1A80
  W32(c->r[1]+0x00000014u,c->r[31]); // 800B1A84
  c->r[31]=c->r[3]|c->r[3]; // 800B1A88
  W32(c->r[1]+0x00000008u,c->r[9]); // 800B1A8C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B1A90
  c->lr=0x800B1A98u; f_8003FF2C(c); // 800B1A94
  c->r[4]=0u+0x803F0000u; // 800B1A98
  {uint32_t ea=c->r[31]+0x00000178u; WF32(ea,c->f[29]);} // 800B1A9C
  c->r[4]=c->r[4]+0x0000244Cu; // 800B1AA0
  c->r[3]=c->r[31]|c->r[31]; // 800B1AA4
  W32(c->r[31]+0x00000000u,c->r[4]); // 800B1AA8
  {uint32_t ea=c->r[31]+0x0000017Cu; WF32(ea,c->f[30]);} // 800B1AAC
  {uint32_t ea=c->r[31]+0x00000180u; WF32(ea,c->f[31]);} // 800B1AB0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800B1AB4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800B1AB8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[29]=RF64(ea);} // 800B1ABC
  c->r[31]=R32(c->r[1]+0x00000014u); // 800B1AC0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B1AC4
  c->lr=c->r[0]; // 800B1AC8
  c->r[1]=c->r[1]+0x00000030u; // 800B1ACC
  return; // 800B1AD0
}

// fn_800B1AD4
void f_800B1AD4(Ctx* __restrict c) {
  trace_call(0x800B1AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1AD4
  c->r[0]=c->lr; // 800B1AD8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B1ADC
  c->r[11]=c->r[1]+0x00000050u; // 800B1AE0
  c->lr=0x800B1AE8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1AE4
  c->r[31]=c->r[1]|c->r[1]; // 800B1AE8
  c->r[27]=c->r[3]|c->r[3]; // 800B1AEC
  c->r[28]=c->r[4]|c->r[4]; // 800B1AF0
  c->lr=0x800B1AF8u; f_8003F1D4(c); // 800B1AF4
  cmps(c,0,(int32_t)c->r[3],0); // 800B1AF8
  if (crb(c,2)) { goto L_800B1B8C; } // 800B1AFC
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800B1B00
  c->lr=0x800B1B08u; f_802A6EE4(c); // 800B1B04
  cmps(c,0,(int32_t)c->r[3],0); // 800B1B08
  c->r[30]=c->r[3]|c->r[3]; // 800B1B0C
  if (crb(c,2)) { goto L_800B1B8C; } // 800B1B10
  if (crb(c,2)) { goto L_800B1B3C; } // 800B1B14
  W32(c->r[31]+0x00000034u,c->r[1]); // 800B1B18
  c->lr=0x800B1B20u; f_8006BEE8(c); // 800B1B1C
  c->r[3]=0u+0x803F0000u; // 800B1B20
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1B24
  c->r[3]=c->r[3]+0x0000244Cu; // 800B1B28
  W32(c->r[30]+0x00000000u,c->r[3]); // 800B1B2C
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[0]);} // 800B1B30
  {uint32_t ea=c->r[30]+0x0000017Cu; WF32(ea,c->f[0]);} // 800B1B34
  {uint32_t ea=c->r[30]+0x00000180u; WF32(ea,c->f[0]);} // 800B1B38
L_800B1B3C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B1B3C
  c->r[4]=c->r[28]|c->r[28]; // 800B1B40
  c->lr=0x800B1B48u; f_8006BDA8(c); // 800B1B44
  {uint32_t ea=c->r[28]+0x00000178u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1B48
  c->r[29]=addc(c,c->r[30],0x00000184u,0); cr0(c,c->r[29]); // 800B1B4C
  {uint32_t ea=c->r[28]+0x0000017Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1B50
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[0]);} // 800B1B54
  {uint32_t ea=c->r[28]+0x00000180u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1B58
  {uint32_t ea=c->r[30]+0x0000017Cu; WF32(ea,c->f[1]);} // 800B1B5C
  {uint32_t ea=c->r[30]+0x00000180u; WF32(ea,c->f[0]);} // 800B1B60
  if (crb(c,2)) { goto L_800B1B78; } // 800B1B64
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 800B1B68
  c->r[3]=c->r[29]|c->r[29]; // 800B1B6C
  c->r[4]=c->r[30]|c->r[30]; // 800B1B70
  c->lr=0x800B1B78u; f_80064CE8(c); // 800B1B74
L_800B1B78:;
  c->r[3]=c->r[27]|c->r[27]; // 800B1B78
  c->lr=0x800B1B80u; f_80068A78(c); // 800B1B7C
  c->r[4]=c->r[29]|c->r[29]; // 800B1B80
  c->r[3]=c->r[3]+0x00000030u; // 800B1B84
  c->lr=0x800B1B8Cu; f_8003FD14(c); // 800B1B88
L_800B1B8C:;
  c->r[10]=c->r[31]|c->r[31]; // 800B1B8C
  c->r[11]=c->r[10]+0x00000050u; // 800B1B90
  c->lr=0x800B1B98u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1B94
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B1B98
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B1B9C
  c->r[1]=c->r[10]|c->r[10]; // 800B1BA0
  c->lr=c->r[0]; // 800B1BA4
  return; // 800B1BA8
}

// dtor_800B1BAC
void f_800B1BAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1BAC
  c->r[0]=c->lr; // 800B1BB0
  cmps(c,0,(int32_t)c->r[3],0); // 800B1BB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B1BB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B1BBC
  c->r[31]=c->r[3]|c->r[3]; // 800B1BC0
  if (crb(c,2)) { goto L_800B1BD4; } // 800B1BC4
  cmps(c,0,(int32_t)c->r[4],0); // 800B1BC8
  if (!crb(c,1)) { goto L_800B1BD4; } // 800B1BCC
  c->lr=0x800B1BD4u; f_802896EC(c); // 800B1BD0
L_800B1BD4:;
  c->r[3]=c->r[31]|c->r[31]; // 800B1BD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B1BD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B1BDC
  c->lr=c->r[0]; // 800B1BE0
  c->r[1]=c->r[1]+0x00000010u; // 800B1BE4
  return; // 800B1BE8
}

// fn_800B1BEC
void f_800B1BEC(Ctx* __restrict c) {
  trace_call(0x800B1BECu);
  {uint32_t ea=c->r[1]+0xFFFFFE20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1BEC
  c->r[0]=c->lr; // 800B1BF0
  W32(c->r[1]+0x000001E4u,c->r[0]); // 800B1BF4
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[31]);} // 800B1BF8
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,31,ea,0,0);} // 800B1BFC
  c->r[11]=c->r[1]+0x000001D0u; // 800B1C00
  c->lr=0x800B1C08u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1C04
  c->r[5]=0u+0x803F0000u; // 800B1C08
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1C0C
  c->r[5]=c->r[5]+0x00001AD8u; // 800B1C10
  c->r[29]=c->r[3]|c->r[3]; // 800B1C14
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B1C18
  c->r[30]=c->r[4]|c->r[4]; // 800B1C1C
  c->r[5]=c->r[3]+0x0000102Cu; // 800B1C20
  c->r[6]=0u+0x00000000u; // 800B1C24
  c->r[0]=R32(c->r[4]+0x00000058u); // 800B1C28
  c->r[4]=c->r[1]+0x00000008u; // 800B1C2C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B1C30
  {uint32_t ea=c->r[3]+0x00001044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1C34
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800B1C38
  c->lr=0x800B1C40u; f_800B1730(c); // 800B1C3C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1C40
  c->r[3]=c->r[1]+0x00000040u; // 800B1C44
  {uint32_t ea=c->r[2]+0xFFFF8DDCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1C48
  c->f[3]=c->f[1]; // 800B1C4C
  c->lr=0x800B1C54u; f_800521A0(c); // 800B1C50
  c->r[12]=R32(c->r[29]+0x00000010u); // 800B1C54
  c->r[31]=c->r[3]|c->r[3]; // 800B1C58
  c->r[3]=c->r[29]|c->r[29]; // 800B1C5C
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B1C60
  c->ctr=c->r[12]; // 800B1C64
  if (true) { c->lr=0x800B1C6Cu; dispatch(c,c->ctr); } // 800B1C68
  c->r[6]=c->r[31]|c->r[31]; // 800B1C6C
  c->r[3]=c->r[30]+0x00000010u; // 800B1C70
  c->r[4]=c->r[29]+0x000008D0u; // 800B1C74
  c->r[5]=c->r[29]+0x00001054u; // 800B1C78
  c->r[7]=0u+0x00000000u; // 800B1C7C
  c->lr=0x800B1C84u; f_8007B0CC(c); // 800B1C80
  c->r[12]=R32(c->r[29]+0x00000010u); // 800B1C84
  c->r[3]=c->r[29]|c->r[29]; // 800B1C88
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B1C8C
  c->ctr=c->r[12]; // 800B1C90
  if (true) { c->lr=0x800B1C98u; dispatch(c,c->ctr); } // 800B1C94
  c->r[3]=c->r[30]+0x00000010u; // 800B1C98
  c->r[4]=c->r[29]+0x000008D0u; // 800B1C9C
  c->lr=0x800B1CA4u; f_8007B654(c); // 800B1CA0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1CA4
  {uint32_t ea=c->r[2]+0xFFFF8DC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1CA8
  fcmp(c,0,c->f[1],c->f[0]); // 800B1CAC
  if (!crb(c,0)) { goto L_800B1E38; } // 800B1CB0
  c->r[3]=c->r[30]+0x00000048u; // 800B1CB4
  c->lr=0x800B1CBCu; f_80065368(c); // 800B1CB8
  cmps(c,0,(int32_t)c->r[3],0); // 800B1CBC
  if (!crb(c,2)) { goto L_800B1E38; } // 800B1CC0
  c->r[0]=0u+0x00000006u; // 800B1CC4
  c->r[5]=c->r[1]+0x00000180u; // 800B1CC8
  c->r[4]=c->r[29]+0x00000940u; // 800B1CCC
  c->ctr=c->r[0]; // 800B1CD0
L_800B1CD4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B1CD4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B1CD8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B1CDC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B1CE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B1CD4; } // 800B1CE4
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B1CE8
  c->r[4]=c->r[29]+0x000008D0u; // 800B1CEC
  c->r[3]=c->r[1]+0x00000154u; // 800B1CF0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B1CF4
  c->ctr=c->r[12]; // 800B1CF8
  if (true) { c->lr=0x800B1D00u; dispatch(c,c->ctr); } // 800B1CFC
  c->r[3]=c->r[1]+0x00000154u; // 800B1D00
  c->r[4]=c->r[1]+0x00000124u; // 800B1D04
  c->lr=0x800B1D0Cu; f_80264994(c); // 800B1D08
  c->r[12]=R32(c->r[29]+0x00000010u); // 800B1D0C
  c->r[3]=c->r[29]|c->r[29]; // 800B1D10
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B1D14
  c->ctr=c->r[12]; // 800B1D18
  if (true) { c->lr=0x800B1D20u; dispatch(c,c->ctr); } // 800B1D1C
  {uint32_t ea=c->r[2]+0xFFFF8DE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1D20
  c->r[3]=c->r[1]+0x000000F4u; // 800B1D24
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1D28
  c->r[4]=c->r[1]+0x00000154u; // 800B1D2C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800B1D30
  c->r[5]=c->r[30]+0x00000048u; // 800B1D34
  c->r[6]=0u+0x00000000u; // 800B1D38
  c->r[7]=0u+0x00000000u; // 800B1D3C
  c->r[8]=0u+0x00000000u; // 800B1D40
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800B1D44
  c->f[2]=c->f[1]; // 800B1D48
  c->f[3]=c->f[1]; // 800B1D4C
  c->lr=0x800B1D54u; f_800AF1B0(c); // 800B1D50
  {uint32_t ea=c->r[1]+0x00000190u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1D54
  c->r[3]=c->r[1]+0x00000058u; // 800B1D58
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1D5C
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1D60
  c->lr=0x800B1D68u; f_800521A0(c); // 800B1D64
  c->r[3]=c->r[1]+0x00000058u; // 800B1D68
  c->r[4]=c->r[1]+0x00000154u; // 800B1D6C
  c->r[5]=c->r[3]|c->r[3]; // 800B1D70
  c->lr=0x800B1D78u; f_80394B04(c); // 800B1D74
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B1D78
  c->r[3]=c->r[1]+0x00000058u; // 800B1D7C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1D80
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B1D84
  c->lr=0x800B1D8Cu; f_802657AC(c); // 800B1D88
  c->r[3]=c->r[1]+0x00000034u; // 800B1D8C
  c->r[4]=c->r[30]+0x00000048u; // 800B1D90
  c->lr=0x800B1D98u; f_80064C58(c); // 800B1D94
  c->r[3]=c->r[1]+0x00000058u; // 800B1D98
  c->r[4]=c->r[1]+0x00000034u; // 800B1D9C
  c->lr=0x800B1DA4u; f_8003F468(c); // 800B1DA0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[31]);} // 800B1DA4
  c->r[3]=c->r[1]+0x0000001Cu; // 800B1DA8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1DAC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1DB0
  {uint32_t ea=c->r[1]+0x00000180u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1DB4
  c->lr=0x800B1DBCu; f_800521A0(c); // 800B1DB8
  c->r[3]=c->r[1]+0x00000028u; // 800B1DBC
  c->r[4]=c->r[1]+0x00000058u; // 800B1DC0
  c->r[5]=c->r[1]+0x0000001Cu; // 800B1DC4
  c->lr=0x800B1DCCu; f_80064C34(c); // 800B1DC8
  c->r[3]=c->r[1]+0x000000F4u; // 800B1DCC
  c->r[4]=c->r[1]+0x00000028u; // 800B1DD0
  c->lr=0x800B1DD8u; f_80032FF4(c); // 800B1DD4
  c->r[3]=c->r[1]+0x00000124u; // 800B1DD8
  c->r[4]=c->r[1]+0x000000F4u; // 800B1DDC
  c->r[5]=c->r[1]+0x00000094u; // 800B1DE0
  c->lr=0x800B1DE8u; f_802646E0(c); // 800B1DE4
  c->r[0]=0u+0x00000006u; // 800B1DE8
  c->r[5]=c->r[1]+0x000000F0u; // 800B1DEC
  c->r[4]=c->r[1]+0x00000090u; // 800B1DF0
  c->ctr=c->r[0]; // 800B1DF4
L_800B1DF8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B1DF8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B1DFC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B1E00
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B1E04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B1DF8; } // 800B1E08
  {uint32_t ea=c->r[1]+0x00000190u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1E0C
  c->r[3]=c->r[1]+0x00000010u; // 800B1E10
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1E14
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1E18
  c->lr=0x800B1E20u; f_800521A0(c); // 800B1E1C
  c->r[3]=c->r[1]+0x000000F4u; // 800B1E20
  c->r[4]=c->r[1]+0x00000010u; // 800B1E24
  c->lr=0x800B1E2Cu; f_80032FF4(c); // 800B1E28
  c->r[3]=c->r[29]+0x000008ECu; // 800B1E2C
  c->r[4]=c->r[1]+0x000000F4u; // 800B1E30
  c->lr=0x800B1E38u; f_8016A37C(c); // 800B1E34
L_800B1E38:;
  c->r[3]=c->r[29]+0x00000394u; // 800B1E38
  c->r[4]=0u+0x00000016u; // 800B1E3C
  c->lr=0x800B1E44u; f_80076DD4(c); // 800B1E40
  cmps(c,0,(int32_t)c->r[3],0); // 800B1E44
  if (!crb(c,2)) { goto L_800B1ED4; } // 800B1E48
  {uint32_t ea=c->r[29]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1E4C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1E50
  fcmp(c,0,c->f[1],c->f[0]); // 800B1E54
  if (!crb(c,1)) { goto L_800B1ED4; } // 800B1E58
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B1E5C
  c->r[4]=c->r[29]+0x000008D0u; // 800B1E60
  c->r[3]=c->r[1]+0x00000064u; // 800B1E64
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B1E68
  c->ctr=c->r[12]; // 800B1E6C
  if (true) { c->lr=0x800B1E74u; dispatch(c,c->ctr); } // 800B1E70
  c->r[3]=c->r[1]+0x0000004Cu; // 800B1E74
  c->r[4]=c->r[1]+0x00000064u; // 800B1E78
  c->lr=0x800B1E80u; f_80032FD8(c); // 800B1E7C
  c->lr=0x800B1E84u; f_80128B5C(c); // 800B1E80
  c->r[4]=c->r[3]|c->r[3]; // 800B1E84
  c->r[3]=c->r[1]+0x000000C4u; // 800B1E88
  c->lr=0x800B1E90u; f_800AF084(c); // 800B1E8C
  c->r[3]=c->r[1]+0x000000C4u; // 800B1E90
  c->r[4]=c->r[3]|c->r[3]; // 800B1E94
  c->lr=0x800B1E9Cu; f_80264994(c); // 800B1E98
  c->r[4]=c->r[1]+0x0000004Cu; // 800B1E9C
  c->r[3]=c->r[1]+0x000000C4u; // 800B1EA0
  c->r[5]=c->r[4]|c->r[4]; // 800B1EA4
  c->lr=0x800B1EACu; f_802652E8(c); // 800B1EA8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1EAC
  {uint32_t ea=c->r[2]+0xFFFF8DE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1EB0
  fcmp(c,0,c->f[1],c->f[0]); // 800B1EB4
  if (!crb(c,0)) { goto L_800B1ED4; } // 800B1EB8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1EBC
  c->r[3]=0u+0x805C0000u; // 800B1EC0
  c->r[4]=R32(c->r[29]+0x00000898u); // 800B1EC4
  c->r[3]=c->r[3]+0x00005B94u; // 800B1EC8
  {uint32_t ea=c->r[29]+0x000003A4u; WF32(ea,c->f[0]);} // 800B1ECC
  c->lr=0x800B1ED4u; f_80213880(c); // 800B1ED0
L_800B1ED4:;
  c->r[3]=c->r[29]+0x00000394u; // 800B1ED4
  c->r[4]=0u+0x00000016u; // 800B1ED8
  c->lr=0x800B1EE0u; f_80076DD4(c); // 800B1EDC
  cmps(c,0,(int32_t)c->r[3],0); // 800B1EE0
  if (crb(c,2)) { goto L_800B1EF4; } // 800B1EE4
  {uint32_t ea=c->r[2]+0xFFFF8D84u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1EE8
  {uint32_t ea=c->r[29]+0x00001058u; WF32(ea,c->f[0]);} // 800B1EEC
  goto L_800B1EFC; // 800B1EF0
L_800B1EF4:;
  c->r[3]=c->r[29]|c->r[29]; // 800B1EF4
  c->lr=0x800B1EFCu; f_800AD308(c); // 800B1EF8
L_800B1EFC:;
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,31,ea,0,0);} // 800B1EFC
  c->r[11]=c->r[1]+0x000001D0u; // 800B1F00
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[31]=RF64(ea);} // 800B1F04
  c->lr=0x800B1F0Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B1F08
  c->r[0]=R32(c->r[1]+0x000001E4u); // 800B1F0C
  c->lr=c->r[0]; // 800B1F10
  c->r[1]=c->r[1]+0x000001E0u; // 800B1F14
  return; // 800B1F18
}

// fn_800B1F1C
void f_800B1F1C(Ctx* __restrict c) {
  trace_call(0x800B1F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B1F1C
  c->r[0]=c->lr; // 800B1F20
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800B1F24
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800B1F28
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800B1F2C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 800B1F30
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 800B1F34
  c->r[11]=c->r[1]+0x000000C0u; // 800B1F38
  c->lr=0x800B1F40u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B1F3C
  c->r[31]=c->r[1]|c->r[1]; // 800B1F40
  c->r[12]=R32(c->r[3]+0x000008D0u); // 800B1F44
  c->r[28]=c->r[3]|c->r[3]; // 800B1F48
  c->r[29]=c->r[4]|c->r[4]; // 800B1F4C
  c->f[30]=c->f[1]; // 800B1F50
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B1F54
  c->f[31]=c->f[2]; // 800B1F58
  c->r[4]=c->r[28]+0x000008D0u; // 800B1F5C
  c->r[3]=c->r[31]+0x00000080u; // 800B1F60
  c->ctr=c->r[12]; // 800B1F64
  if (true) { c->lr=0x800B1F6Cu; dispatch(c,c->ctr); } // 800B1F68
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1F6C
  c->f[3]=c->f[30]; // 800B1F70
  c->r[3]=c->r[31]+0x0000005Cu; // 800B1F74
  c->f[2]=c->f[1]; // 800B1F78
  c->lr=0x800B1F80u; f_800521A0(c); // 800B1F7C
  c->r[4]=c->r[31]+0x0000005Cu; // 800B1F80
  c->r[3]=c->r[31]+0x00000080u; // 800B1F84
  c->r[5]=c->r[4]|c->r[4]; // 800B1F88
  c->lr=0x800B1F90u; f_802652E8(c); // 800B1F8C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1F90
  c->f[2]=c->f[31]; // 800B1F94
  c->r[3]=c->r[31]+0x0000002Cu; // 800B1F98
  c->f[3]=c->f[1]; // 800B1F9C
  c->lr=0x800B1FA4u; f_800521A0(c); // 800B1FA0
  c->r[3]=c->r[31]+0x00000050u; // 800B1FA4
  c->r[4]=c->r[31]+0x0000005Cu; // 800B1FA8
  c->r[5]=c->r[31]+0x0000002Cu; // 800B1FAC
  c->lr=0x800B1FB4u; f_80064C34(c); // 800B1FB0
  c->f[0]=-c->f[31]; // 800B1FB4
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1FB8
  c->r[3]=c->r[31]+0x00000044u; // 800B1FBC
  c->r[4]=c->r[31]+0x0000005Cu; // 800B1FC0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 800B1FC4
  c->r[5]=c->r[31]+0x00000020u; // 800B1FC8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800B1FCC
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[1]);} // 800B1FD0
  c->lr=0x800B1FD8u; f_80064C34(c); // 800B1FD4
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1FD8
  c->r[3]=c->r[31]+0x00000038u; // 800B1FDC
  {uint32_t ea=c->r[31]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B1FE0
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B1FE4
  c->lr=0x800B1FECu; f_800521A0(c); // 800B1FE8
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B1FEC
  {uint32_t ea=c->r[2]+0xFFFF8DC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B1FF0
  fcmp(c,0,c->f[1],c->f[0]); // 800B1FF4
  if (!crb(c,0)) { goto L_800B200C; } // 800B1FF8
  c->f[1]=-c->f[30]; // 800B1FFC
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2000
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B2004
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800B2008
L_800B200C:;
  c->r[0]=R8(c->r[13]+0xFFFF9503u); // 800B200C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B2010
  if (!crb(c,2)) { goto L_800B2044; } // 800B2014
  c->r[30]=0u+0x80470000u; // 800B2018
  c->r[3]=c->r[30]+0xFFFFF18Cu; // 800B201C
  c->lr=0x800B2024u; f_800462E8(c); // 800B2020
  c->r[4]=0u+0x80040000u; // 800B2024
  c->r[5]=0u+0x80470000u; // 800B2028
  c->r[3]=c->r[30]+0xFFFFF18Cu; // 800B202C
  c->r[4]=c->r[4]+0x00006394u; // 800B2030
  c->r[5]=c->r[5]+0xFFFFF180u; // 800B2034
  c->lr=0x800B203Cu; f_802895A4(c); // 800B2038
  c->r[0]=0u+0x00000001u; // 800B203C
  W8(c->r[13]+0xFFFF9503u,c->r[0]); // 800B2040
L_800B2044:;
  c->r[0]=0u+0x80470000u; // 800B2044
  c->r[30]=addc(c,c->r[0],0xFFFFF18Cu,0); cr0(c,c->r[30]); // 800B2048
  if (crb(c,2)) { goto L_800B2070; } // 800B204C
  W32(c->r[31]+0x0000007Cu,c->r[1]); // 800B2050
  c->r[3]=c->r[30]|c->r[30]; // 800B2054
  c->lr=0x800B205Cu; f_800462E8(c); // 800B2058
  goto L_800B2070; // 800B205C
  c->r[3]=0u+0x00000000u; // 800B2060
  c->r[4]=0u+0x00000000u; // 800B2064
  c->r[5]=0u+0x00000000u; // 800B2068
  c->lr=0x800B2070u; f_8028BC3C(c); // 800B206C
L_800B2070:;
  c->r[3]=0u+0x80450000u; // 800B2070
  c->r[4]=c->r[30]|c->r[30]; // 800B2074
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B2078
  c->r[5]=c->r[31]+0x00000050u; // 800B207C
  c->r[6]=c->r[31]+0x00000044u; // 800B2080
  c->r[7]=0u+0x00000000u; // 800B2084
  c->lr=0x800B208Cu; f_80044D14(c); // 800B2088
  cmps(c,0,(int32_t)c->r[3],0); // 800B208C
  if (!crb(c,2)) { goto L_800B2108; } // 800B2090
  {uint32_t ea=c->r[28]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2094
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2098
  fcmp(c,0,c->f[1],c->f[0]); // 800B209C
  if (!crb(c,1)) { goto L_800B20C8; } // 800B20A0
  c->r[3]=0u+0x805C0000u; // 800B20A4
  {uint32_t ea=c->r[28]+0x000003A4u; WF32(ea,c->f[0]);} // 800B20A8
  c->r[4]=R32(c->r[28]+0x00000898u); // 800B20AC
  c->r[3]=c->r[3]+0x00005B94u; // 800B20B0
  c->lr=0x800B20B8u; f_80213880(c); // 800B20B4
  c->r[3]=c->r[28]|c->r[28]; // 800B20B8
  c->r[4]=0u+0x00000000u; // 800B20BC
  c->r[5]=0u+0x00000001u; // 800B20C0
  c->lr=0x800B20C8u; f_80076080(c); // 800B20C4
L_800B20C8:;
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B20C8
  c->r[3]=c->r[31]+0x00000008u; // 800B20CC
  {uint32_t ea=c->r[31]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B20D0
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B20D4
  c->lr=0x800B20DCu; f_800521A0(c); // 800B20D8
  {uint32_t ea=c->r[2]+0xFFFF8DE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B20DC
  c->r[3]=c->r[31]+0x00000014u; // 800B20E0
  c->r[4]=c->r[31]+0x00000008u; // 800B20E4
  c->lr=0x800B20ECu; f_80064C58(c); // 800B20E8
  c->r[3]=c->r[29]+0x00000038u; // 800B20EC
  c->r[4]=c->r[31]+0x00000014u; // 800B20F0
  c->lr=0x800B20F8u; f_8003F468(c); // 800B20F4
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B20F8
  c->r[3]=0u+0x00000001u; // 800B20FC
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800B2100
  goto L_800B210C; // 800B2104
L_800B2108:;
  c->r[3]=0u+0x00000000u; // 800B2108
L_800B210C:;
  c->r[10]=c->r[31]|c->r[31]; // 800B210C
  {uint32_t ea=c->r[10]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800B2110
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[31]=RF64(ea);} // 800B2114
  {uint32_t ea=c->r[10]+0x000000C8u; psq_load(c,30,ea,0,0);} // 800B2118
  c->r[11]=c->r[10]+0x000000C0u; // 800B211C
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[30]=RF64(ea);} // 800B2120
  c->lr=0x800B2128u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B2124
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B2128
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B212C
  c->r[1]=c->r[10]|c->r[10]; // 800B2130
  c->lr=c->r[0]; // 800B2134
  return; // 800B2138
}

// fn_800B213C
void f_800B213C(Ctx* __restrict c) {
  trace_call(0x800B213Cu);
  {uint32_t ea=c->r[1]+0xFFFFF110u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B213C
  c->r[0]=c->lr; // 800B2140
  W32(c->r[1]+0x00000EF4u,c->r[0]); // 800B2144
  c->r[11]=c->r[1]+0x00000EF0u; // 800B2148
  c->lr=0x800B2150u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B214C
  c->r[29]=c->r[3]|c->r[3]; // 800B2150
  c->r[30]=c->r[4]|c->r[4]; // 800B2154
  c->r[3]=c->r[4]+0x00000010u; // 800B2158
  c->r[4]=c->r[29]+0x000008D0u; // 800B215C
  c->r[5]=c->r[29]+0x00001054u; // 800B2160
  c->lr=0x800B2168u; f_8007AFF8(c); // 800B2164
  cmps(c,0,(int32_t)c->r[3],3); // 800B2168
  c->r[31]=c->r[3]|c->r[3]; // 800B216C
  if (crb(c,2)) { goto L_800B22F8; } // 800B2170
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B2174
  c->r[4]=c->r[29]+0x000008D0u; // 800B2178
  c->r[3]=c->r[1]+0x000000B4u; // 800B217C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2180
  c->ctr=c->r[12]; // 800B2184
  if (true) { c->lr=0x800B218Cu; dispatch(c,c->ctr); } // 800B2188
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B218C
  c->r[3]=c->r[1]+0x00000064u; // 800B2190
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2194
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2198
  c->lr=0x800B21A0u; f_800521A0(c); // 800B219C
  c->r[3]=c->r[1]+0x00000058u; // 800B21A0
  c->r[4]=c->r[29]+0x00001074u; // 800B21A4
  c->lr=0x800B21ACu; f_8003F484(c); // 800B21A8
  c->r[3]=c->r[1]+0x00000058u; // 800B21AC
  {uint32_t ea=c->r[2]+0xFFFF8D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B21B0
  c->r[4]=c->r[3]|c->r[3]; // 800B21B4
  c->lr=0x800B21BCu; f_80064C58(c); // 800B21B8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B21BC
  c->r[3]=c->r[1]+0x00000064u; // 800B21C0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800B21C4
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B21C8
  c->lr=0x800B21D0u; f_80065368(c); // 800B21CC
  cmps(c,0,(int32_t)c->r[3],0); // 800B21D0
  if (!crb(c,2)) { goto L_800B2238; } // 800B21D4
  c->r[3]=c->r[1]+0x00000058u; // 800B21D8
  c->lr=0x800B21E0u; f_80065368(c); // 800B21DC
  cmps(c,0,(int32_t)c->r[3],0); // 800B21E0
  if (!crb(c,2)) { goto L_800B2238; } // 800B21E4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800B21E8
  cmpu(c,0,c->r[0],0x00000001u); // 800B21EC
  if (crb(c,1)) { goto L_800B2238; } // 800B21F0
  c->r[3]=c->r[1]+0x00000064u; // 800B21F4
  c->r[4]=c->r[3]|c->r[3]; // 800B21F8
  c->lr=0x800B2200u; f_80265750(c); // 800B21FC
  c->r[3]=c->r[1]+0x00000058u; // 800B2200
  c->r[4]=c->r[3]|c->r[3]; // 800B2204
  c->lr=0x800B220Cu; f_80265750(c); // 800B2208
  c->r[3]=c->r[1]+0x00000064u; // 800B220C
  c->r[4]=c->r[1]+0x00000058u; // 800B2210
  c->lr=0x800B2218u; f_800653BC(c); // 800B2214
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2218
  fcmp(c,0,c->f[1],c->f[0]); // 800B221C
  if (!crb(c,0)) { goto L_800B2228; } // 800B2220
  c->f[1]=-c->f[1]; // 800B2224
L_800B2228:;
  {uint32_t ea=c->r[2]+0xFFFF8DECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2228
  fcmp(c,0,c->f[1],c->f[0]); // 800B222C
  if (!crb(c,0)) { goto L_800B2238; } // 800B2230
  c->r[31]=0u+0x00000003u; // 800B2234
L_800B2238:;
  cmps(c,0,(int32_t)c->r[31],2); // 800B2238
  if (crb(c,2)) { goto L_800B22F8; } // 800B223C
  cmps(c,0,(int32_t)c->r[31],3); // 800B2240
  if (crb(c,2)) { goto L_800B22F8; } // 800B2244
  cmps(c,0,(int32_t)c->r[31],0); // 800B2248
  if (!crb(c,2)) { goto L_800B22BC; } // 800B224C
  c->r[3]=c->r[29]+0x00000394u; // 800B2250
  c->r[4]=0u+0x00000016u; // 800B2254
  c->lr=0x800B225Cu; f_80076DD4(c); // 800B2258
  cmps(c,0,(int32_t)c->r[3],0); // 800B225C
  if (!crb(c,2)) { goto L_800B22BC; } // 800B2260
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2264
  c->r[3]=c->r[29]|c->r[29]; // 800B2268
  {uint32_t ea=c->r[2]+0xFFFF8DE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B226C
  c->r[4]=c->r[30]|c->r[30]; // 800B2270
  c->lr=0x800B2278u; f_800B1F1C(c); // 800B2274
  cmps(c,0,(int32_t)c->r[3],0); // 800B2278
  if (crb(c,2)) { goto L_800B22BC; } // 800B227C
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 800B2280
  cmps(c,0,(int32_t)c->r[0],0); // 800B2284
  if (!crb(c,2)) { goto L_800B2498; } // 800B2288
  c->r[12]=R32(c->r[30]+0x00000060u); // 800B228C
  c->r[3]=c->r[30]+0x0000005Cu; // 800B2290
  c->r[5]=R32(c->r[30]+0x0000005Cu); // 800B2294
  c->r[4]=0u+0x00000001u; // 800B2298
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B229C
  c->ctr=c->r[12]; // 800B22A0
  if (true) { c->lr=0x800B22A8u; dispatch(c,c->ctr); } // 800B22A4
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B22A8
  c->r[0]=0u+0x00000001u; // 800B22AC
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 800B22B0
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800B22B4
  goto L_800B2498; // 800B22B8
L_800B22BC:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 800B22BC
  cmps(c,0,(int32_t)c->r[0],0); // 800B22C0
  if (crb(c,2)) { goto L_800B22D0; } // 800B22C4
  cmps(c,0,(int32_t)c->r[0],3); // 800B22C8
  if (!crb(c,2)) { goto L_800B22F8; } // 800B22CC
L_800B22D0:;
  c->r[4]=c->r[31]|c->r[31]; // 800B22D0
  c->r[3]=c->r[1]+0x00000070u; // 800B22D4
  c->lr=0x800B22DCu; f_800770B8(c); // 800B22D8
  c->r[5]=R32(c->r[29]+0x00000000u); // 800B22DC
  c->r[3]=c->r[1]+0x00000008u; // 800B22E0
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B22E4
  c->r[4]=c->r[1]+0x00000070u; // 800B22E8
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B22EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B22F0
  c->lr=0x800B22F8u; f_80077140(c); // 800B22F4
L_800B22F8:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 800B22F8
  cmps(c,0,(int32_t)c->r[0],2); // 800B22FC
  if (crb(c,2)) { goto L_800B2364; } // 800B2300
  if (!crb(c,0)) { goto L_800B2498; } // 800B2304
  cmps(c,0,(int32_t)c->r[0],0); // 800B2308
  if (crb(c,2)) { goto L_800B2498; } // 800B230C
  if (!crb(c,0)) { goto L_800B231C; } // 800B2310
  goto L_800B2498; // 800B2314
  goto L_800B2498; // 800B2318
L_800B231C:;
  c->r[12]=R32(c->r[29]+0x00000010u); // 800B231C
  c->r[3]=c->r[29]|c->r[29]; // 800B2320
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B2324
  c->ctr=c->r[12]; // 800B2328
  if (true) { c->lr=0x800B2330u; dispatch(c,c->ctr); } // 800B232C
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2330
  c->r[3]=c->r[30]+0x0000005Cu; // 800B2334
  c->r[5]=R32(c->r[30]+0x0000005Cu); // 800B2338
  c->r[4]=0u+0x00000002u; // 800B233C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B2340
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 800B2344
  c->r[12]=R32(c->r[30]+0x00000060u); // 800B2348
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B234C
  c->ctr=c->r[12]; // 800B2350
  if (true) { c->lr=0x800B2358u; dispatch(c,c->ctr); } // 800B2354
  c->r[0]=0u+0x00000002u; // 800B2358
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 800B235C
  goto L_800B2498; // 800B2360
L_800B2364:;
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B2364
  c->r[4]=c->r[29]+0x000008D0u; // 800B2368
  c->r[3]=c->r[1]+0x00000084u; // 800B236C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2370
  c->ctr=c->r[12]; // 800B2374
  if (true) { c->lr=0x800B237Cu; dispatch(c,c->ctr); } // 800B2378
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B237C
  c->r[3]=c->r[1]+0x0000004Cu; // 800B2380
  {uint32_t ea=c->r[2]+0xFFFF8DF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2384
  c->f[2]=c->f[1]; // 800B2388
  c->lr=0x800B2390u; f_800521A0(c); // 800B238C
  c->r[4]=c->r[1]+0x0000004Cu; // 800B2390
  c->r[3]=c->r[1]+0x00000084u; // 800B2394
  c->r[5]=c->r[4]|c->r[4]; // 800B2398
  c->lr=0x800B23A0u; f_802652E8(c); // 800B239C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B23A0
  c->r[3]=c->r[1]+0x00000040u; // 800B23A4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B23A8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B23AC
  c->lr=0x800B23B4u; f_800521A0(c); // 800B23B0
  c->r[3]=c->r[1]+0x000000E4u; // 800B23B4
  c->lr=0x800B23BCu; f_800462E8(c); // 800B23B8
  c->r[31]=0u+0x80450000u; // 800B23BC
  c->r[4]=c->r[1]+0x000000E4u; // 800B23C0
  c->r[3]=c->r[31]+0xFFFFC69Cu; // 800B23C4
  c->r[5]=c->r[1]+0x00000040u; // 800B23C8
  c->r[6]=c->r[1]+0x0000004Cu; // 800B23CC
  c->r[7]=0u+0x00000000u; // 800B23D0
  c->lr=0x800B23D8u; f_80044D14(c); // 800B23D4
  cmps(c,0,(int32_t)c->r[3],1); // 800B23D8
  if (!crb(c,2)) { goto L_800B2414; } // 800B23DC
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B23E0
  c->r[3]=c->r[1]+0x00000028u; // 800B23E4
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B23E8
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B23EC
  c->lr=0x800B23F4u; f_800521A0(c); // 800B23F0
  {uint32_t ea=c->r[2]+0xFFFF8DE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B23F4
  c->r[3]=c->r[1]+0x00000034u; // 800B23F8
  c->r[4]=c->r[1]+0x00000028u; // 800B23FC
  c->lr=0x800B2404u; f_80064C58(c); // 800B2400
  c->r[3]=c->r[30]+0x00000038u; // 800B2404
  c->r[4]=c->r[1]+0x00000034u; // 800B2408
  c->lr=0x800B2410u; f_8003F468(c); // 800B240C
  goto L_800B248C; // 800B2410
L_800B2414:;
  c->r[3]=c->r[31]+0xFFFFC69Cu; // 800B2414
  c->r[4]=c->r[1]+0x000000E4u; // 800B2418
  c->r[5]=c->r[1]+0x0000004Cu; // 800B241C
  c->r[6]=c->r[1]+0x00000040u; // 800B2420
  c->r[7]=0u+0x00000000u; // 800B2424
  c->lr=0x800B242Cu; f_80044D14(c); // 800B2428
  cmps(c,0,(int32_t)c->r[3],1); // 800B242C
  if (!crb(c,2)) { goto L_800B2468; } // 800B2430
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2434
  c->r[3]=c->r[1]+0x00000010u; // 800B2438
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B243C
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2440
  c->lr=0x800B2448u; f_800521A0(c); // 800B2444
  {uint32_t ea=c->r[2]+0xFFFF8DE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2448
  c->r[3]=c->r[1]+0x0000001Cu; // 800B244C
  c->r[4]=c->r[1]+0x00000010u; // 800B2450
  c->lr=0x800B2458u; f_80064C58(c); // 800B2454
  c->r[3]=c->r[30]+0x00000038u; // 800B2458
  c->r[4]=c->r[1]+0x0000001Cu; // 800B245C
  c->lr=0x800B2464u; f_8003F468(c); // 800B2460
  goto L_800B248C; // 800B2464
L_800B2468:;
  c->r[12]=R32(c->r[30]+0x00000060u); // 800B2468
  c->r[3]=c->r[30]+0x0000005Cu; // 800B246C
  c->r[5]=R32(c->r[30]+0x0000005Cu); // 800B2470
  c->r[4]=0u+0x00000003u; // 800B2474
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B2478
  c->ctr=c->r[12]; // 800B247C
  if (true) { c->lr=0x800B2484u; dispatch(c,c->ctr); } // 800B2480
  c->r[0]=0u+0x00000003u; // 800B2484
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 800B2488
L_800B248C:;
  c->r[3]=c->r[1]+0x000000E4u; // 800B248C
  c->r[4]=0u+0xFFFFFFFFu; // 800B2490
  c->lr=0x800B2498u; f_80046394(c); // 800B2494
L_800B2498:;
  c->r[11]=c->r[1]+0x00000EF0u; // 800B2498
  c->lr=0x800B24A0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B249C
  c->r[0]=R32(c->r[1]+0x00000EF4u); // 800B24A0
  c->lr=c->r[0]; // 800B24A4
  c->r[1]=c->r[1]+0x00000EF0u; // 800B24A8
  return; // 800B24AC
}

// fn_800B24B0
void f_800B24B0(Ctx* __restrict c) {
  trace_call(0x800B24B0u);
  c->r[4]=0u+0x00000016u; // 800B24B0
  c->r[5]=0u+0x00000000u; // 800B24B4
  c->r[3]=c->r[3]+0x00000394u; // 800B24B8
  f_800B16D0(c); return; // 800B24BC
}

// fn_800B24C0
void f_800B24C0(Ctx* __restrict c) {
  trace_call(0x800B24C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B24C0
  c->r[0]=c->lr; // 800B24C4
  c->r[4]=0u+0x00000017u; // 800B24C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B24CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B24D0
  c->r[31]=c->r[5]|c->r[5]; // 800B24D4
  c->r[5]=0u+0x00000001u; // 800B24D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B24DC
  c->r[30]=c->r[3]|c->r[3]; // 800B24E0
  c->r[3]=c->r[3]+0x00000394u; // 800B24E4
  c->lr=0x800B24ECu; f_800B16D0(c); // 800B24E8
  c->r[0]=0u+0x00000001u; // 800B24EC
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B24F0
  W32(c->r[30]+0x0000105Cu,c->r[0]); // 800B24F4
  c->r[3]=c->r[30]+0x00000C88u; // 800B24F8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B24FC
  c->r[4]=c->r[30]+0x000008ECu; // 800B2500
  c->r[5]=R32(c->r[31]+0x00000010u); // 800B2504
  c->r[6]=0u+0x00000000u; // 800B2508
  c->r[7]=0u+0x00000000u; // 800B250C
  c->lr=0x800B2514u; f_800BB0C8(c); // 800B2510
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B2514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B2518
  c->r[30]=R32(c->r[1]+0x00000008u); // 800B251C
  c->lr=c->r[0]; // 800B2520
  c->r[1]=c->r[1]+0x00000010u; // 800B2524
  return; // 800B2528
}

// fn_800B252C
void f_800B252C(Ctx* __restrict c) {
  trace_call(0x800B252Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B252C
  c->r[0]=c->lr; // 800B2530
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B2534
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800B2538
  c->r[31]=c->r[3]|c->r[3]; // 800B253C
  c->r[5]=R32(c->r[3]+0x00000974u); // 800B2540
  c->r[4]=R32(c->r[4]+0x00000010u); // 800B2544
  c->r[3]=R32(c->r[5]+0x00000000u); // 800B2548
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B254C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B2550
  if (!crb(c,2)) { goto L_800B2590; } // 800B2554
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2558
  c->lr=0x800B2560u; f_8016498C(c); // 800B255C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2560
  if (crb(c,2)) { goto L_800B2590; } // 800B2564
  c->r[3]=c->r[1]+0x00000010u; // 800B2568
  c->r[4]=0u+0x00000000u; // 800B256C
  c->lr=0x800B2574u; f_800770B8(c); // 800B2570
  c->r[5]=R32(c->r[31]+0x00000000u); // 800B2574
  c->r[3]=c->r[1]+0x00000008u; // 800B2578
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B257C
  c->r[4]=c->r[1]+0x00000010u; // 800B2580
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B2584
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B2588
  c->lr=0x800B2590u; f_80077140(c); // 800B258C
L_800B2590:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B2590
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800B2594
  c->lr=c->r[0]; // 800B2598
  c->r[1]=c->r[1]+0x00000030u; // 800B259C
  return; // 800B25A0
}

// fn_800B25A4
void f_800B25A4(Ctx* __restrict c) {
  trace_call(0x800B25A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B25A4
  c->r[0]=c->lr; // 800B25A8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B25AC
  c->r[4]=0u+0x00000017u; // 800B25B0
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800B25B4
  c->r[0]=0u+0x00000000u; // 800B25B8
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800B25BC
  c->r[31]=c->r[5]|c->r[5]; // 800B25C0
  c->r[5]=0u+0x00000001u; // 800B25C4
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800B25C8
  c->r[30]=c->r[3]|c->r[3]; // 800B25CC
  W32(c->r[3]+0x00000874u,c->r[0]); // 800B25D0
  {uint32_t ea=c->r[3]+0x00000878u; WF32(ea,c->f[0]);} // 800B25D4
  c->r[3]=c->r[3]+0x00000394u; // 800B25D8
  c->lr=0x800B25E0u; f_800B16D0(c); // 800B25DC
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 800B25E0
  c->r[3]=c->r[30]+0x00000C88u; // 800B25E4
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B25E8
  c->r[4]=c->r[30]+0x000008ECu; // 800B25EC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B25F0
  c->r[6]=0u+0x00000000u; // 800B25F4
  c->r[7]=0u+0x00000000u; // 800B25F8
  c->lr=0x800B2600u; f_800BB0C8(c); // 800B25FC
  c->r[0]=R8(c->r[31]+0x00000021u); // 800B2600
  cmps(c,0,(int32_t)c->r[0],0); // 800B2604
  if (crb(c,2)) { goto L_800B2660; } // 800B2608
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B260C
  c->r[3]=c->r[1]+0x00000070u; // 800B2610
  {uint32_t ea=c->r[2]+0xFFFF8DF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2614
  c->f[2]=c->f[1]; // 800B2618
  c->lr=0x800B2620u; f_803949B8(c); // 800B261C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B2620
  c->r[4]=c->r[30]+0x000008D0u; // 800B2624
  c->r[3]=c->r[1]+0x00000010u; // 800B2628
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B262C
  c->ctr=c->r[12]; // 800B2630
  if (true) { c->lr=0x800B2638u; dispatch(c,c->ctr); } // 800B2634
  c->r[3]=c->r[1]+0x00000010u; // 800B2638
  c->r[4]=c->r[1]+0x00000070u; // 800B263C
  c->r[5]=c->r[1]+0x00000040u; // 800B2640
  c->lr=0x800B2648u; f_802646E0(c); // 800B2644
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B2648
  c->r[3]=c->r[30]+0x000008D0u; // 800B264C
  c->r[4]=c->r[1]+0x00000040u; // 800B2650
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B2654
  c->ctr=c->r[12]; // 800B2658
  if (true) { c->lr=0x800B2660u; dispatch(c,c->ctr); } // 800B265C
L_800B2660:;
  c->r[0]=R8(c->r[31]+0x00000020u); // 800B2660
  cmps(c,0,(int32_t)c->r[0],0); // 800B2664
  if (crb(c,2)) { goto L_800B2674; } // 800B2668
  c->r[0]=0u+0x00000001u; // 800B266C
  W32(c->r[30]+0x0000105Cu,c->r[0]); // 800B2670
L_800B2674:;
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2674
  {uint32_t ea=c->r[30]+0x000008F0u; WF32(ea,c->f[0]);} // 800B2678
  c->lr=0x800B2680u; f_80127CC0(c); // 800B267C
  c->r[4]=c->r[3]|c->r[3]; // 800B2680
  c->r[3]=c->r[1]+0x00000008u; // 800B2684
  c->lr=0x800B268Cu; f_800773C0(c); // 800B2688
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800B268C
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B2690
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800B2694
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800B2698
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800B269C
  c->lr=c->r[0]; // 800B26A0
  c->r[1]=c->r[1]+0x000000B0u; // 800B26A4
  return; // 800B26A8
}

// fn_800B26AC
void f_800B26AC(Ctx* __restrict c) {
  trace_call(0x800B26ACu);
  {uint32_t ea=c->r[1]+0xFFFFED90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B26AC
  c->r[0]=c->lr; // 800B26B0
  W32(c->r[1]+0x00001274u,c->r[0]); // 800B26B4
  c->r[0]=0u+0x00001268u; // 800B26B8
  {uint32_t ea=c->r[1]+0x00001260u; WF64(ea,c->f[31]);} // 800B26BC
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800B26C0
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B26C4
  W32(c->r[1]+0x0000125Cu,c->r[31]); // 800B26C8
  c->r[31]=c->r[4]|c->r[4]; // 800B26CC
  W32(c->r[1]+0x00001258u,c->r[30]); // 800B26D0
  c->r[30]=c->r[3]|c->r[3]; // 800B26D4
  c->r[5]=R32(c->r[3]+0x00000000u); // 800B26D8
  {uint32_t ea=c->r[3]+0x000008F0u; WF32(ea,c->f[0]);} // 800B26DC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800B26E0
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 800B26E4
  W32(c->r[1]+0x00000050u,c->r[0]); // 800B26E8
  c->lr=0x800B26F0u; f_80128B5C(c); // 800B26EC
  c->r[4]=c->r[1]+0x0000004Cu; // 800B26F0
  c->lr=0x800B26F8u; f_8012C12C(c); // 800B26F4
  cmps(c,0,(int32_t)c->r[3],0); // 800B26F8
  if (!crb(c,2)) { goto L_800B2708; } // 800B26FC
  c->r[3]=c->r[30]|c->r[30]; // 800B2700
  c->lr=0x800B2708u; f_800AEA44(c); // 800B2704
L_800B2708:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800B2708
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B270C
  W32(c->r[1]+0x00000044u,c->r[3]); // 800B2710
  W32(c->r[1]+0x00000048u,c->r[0]); // 800B2714
  c->lr=0x800B271Cu; f_80128B5C(c); // 800B2718
  {uint32_t ea=c->r[2]+0xFFFF8D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B271C
  c->r[4]=c->r[1]+0x00000044u; // 800B2720
  c->lr=0x800B2728u; f_8012A160(c); // 800B2724
  cmps(c,0,(int32_t)c->r[3],0); // 800B2728
  if (crb(c,2)) { goto L_800B2920; } // 800B272C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B2730
  c->r[4]=c->r[30]+0x000008D0u; // 800B2734
  c->r[3]=c->r[1]+0x00000268u; // 800B2738
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B273C
  c->ctr=c->r[12]; // 800B2740
  if (true) { c->lr=0x800B2748u; dispatch(c,c->ctr); } // 800B2744
  c->r[0]=0u+0x00000006u; // 800B2748
  c->r[5]=c->r[1]+0x0000010Cu; // 800B274C
  c->r[4]=c->r[30]+0x00000940u; // 800B2750
  c->ctr=c->r[0]; // 800B2754
L_800B2758:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B2758
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B275C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B2760
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B2764
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B2758; } // 800B2768
  c->r[3]=c->r[1]+0x00000268u; // 800B276C
  c->r[4]=c->r[1]+0x00000110u; // 800B2770
  c->r[5]=c->r[1]+0x00000238u; // 800B2774
  c->lr=0x800B277Cu; f_802646E0(c); // 800B2778
  {uint32_t ea=c->r[1]+0x00000244u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B277C
  c->r[3]=c->r[1]+0x000000C0u; // 800B2780
  {uint32_t ea=c->r[1]+0x00000254u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2784
  {uint32_t ea=c->r[1]+0x00000264u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2788
  c->lr=0x800B2790u; f_800521A0(c); // 800B278C
  c->lr=0x800B2794u; f_80128B5C(c); // 800B2790
  c->r[4]=c->r[3]|c->r[3]; // 800B2794
  c->r[3]=c->r[1]+0x000000B4u; // 800B2798
  c->r[4]=c->r[4]+0x00000020u; // 800B279C
  c->lr=0x800B27A4u; f_8003F484(c); // 800B27A0
  {uint32_t ea=c->r[1]+0x00000274u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B27A4
  c->r[3]=c->r[1]+0x0000006Cu; // 800B27A8
  {uint32_t ea=c->r[1]+0x00000284u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B27AC
  {uint32_t ea=c->r[1]+0x00000294u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B27B0
  c->lr=0x800B27B8u; f_800521A0(c); // 800B27B4
  c->lr=0x800B27BCu; f_80128B5C(c); // 800B27B8
  c->r[4]=c->r[1]+0x0000006Cu; // 800B27BC
  c->r[5]=c->r[1]+0x000000C0u; // 800B27C0
  c->r[6]=c->r[1]+0x000000B4u; // 800B27C4
  c->lr=0x800B27CCu; f_8012A620(c); // 800B27C8
  cmps(c,0,(int32_t)c->r[3],0); // 800B27CC
  if (crb(c,2)) { goto L_800B2808; } // 800B27D0
  c->r[3]=c->r[1]+0x00000238u; // 800B27D4
  c->r[4]=c->r[1]+0x000000C0u; // 800B27D8
  c->lr=0x800B27E0u; f_80032FF4(c); // 800B27DC
  c->r[3]=c->r[1]+0x00000268u; // 800B27E0
  c->r[4]=c->r[1]+0x000000E0u; // 800B27E4
  c->lr=0x800B27ECu; f_80264994(c); // 800B27E8
  c->r[3]=c->r[1]+0x000000E0u; // 800B27EC
  c->r[4]=c->r[1]+0x00000238u; // 800B27F0
  c->r[5]=c->r[1]+0x00000208u; // 800B27F4
  c->lr=0x800B27FCu; f_802646E0(c); // 800B27F8
  c->r[3]=c->r[30]+0x000008ECu; // 800B27FC
  c->r[4]=c->r[1]+0x00000208u; // 800B2800
  c->lr=0x800B2808u; f_8016A37C(c); // 800B2804
L_800B2808:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B2808
  c->r[4]=c->r[30]+0x000008D0u; // 800B280C
  c->r[3]=c->r[1]+0x000001D8u; // 800B2810
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2814
  c->ctr=c->r[12]; // 800B2818
  if (true) { c->lr=0x800B2820u; dispatch(c,c->ctr); } // 800B281C
  c->r[0]=0u+0x00000006u; // 800B2820
  c->r[5]=c->r[1]+0x000001A4u; // 800B2824
  c->r[4]=c->r[30]+0x00000940u; // 800B2828
  c->ctr=c->r[0]; // 800B282C
L_800B2830:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B2830
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B2834
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B2838
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B283C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B2830; } // 800B2840
  c->r[3]=c->r[1]+0x000001D8u; // 800B2844
  c->r[4]=c->r[1]+0x000001A8u; // 800B2848
  c->r[5]=c->r[1]+0x00000178u; // 800B284C
  c->lr=0x800B2854u; f_802646E0(c); // 800B2850
  {uint32_t ea=c->r[1]+0x000001E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2854
  c->r[3]=c->r[1]+0x000000A8u; // 800B2858
  {uint32_t ea=c->r[1]+0x000001F4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B285C
  {uint32_t ea=c->r[1]+0x00000204u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2860
  c->lr=0x800B2868u; f_800521A0(c); // 800B2864
  {uint32_t ea=c->r[1]+0x00000184u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2868
  c->r[3]=c->r[1]+0x0000009Cu; // 800B286C
  {uint32_t ea=c->r[1]+0x00000194u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2870
  {uint32_t ea=c->r[1]+0x000001A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2874
  c->lr=0x800B287Cu; f_800521A0(c); // 800B2878
  c->lr=0x800B2880u; f_80128B5C(c); // 800B287C
  c->r[4]=c->r[3]|c->r[3]; // 800B2880
  c->r[3]=c->r[1]+0x00000090u; // 800B2884
  c->r[4]=c->r[4]+0x00000020u; // 800B2888
  c->lr=0x800B2890u; f_8003F484(c); // 800B288C
  c->lr=0x800B2894u; f_80128B5C(c); // 800B2890
  c->r[4]=c->r[3]|c->r[3]; // 800B2894
  c->r[3]=c->r[1]+0x00000084u; // 800B2898
  c->r[5]=0u+0x00000000u; // 800B289C
  c->lr=0x800B28A4u; f_80129ACC(c); // 800B28A0
  c->r[3]=c->r[1]+0x00000054u; // 800B28A4
  c->r[4]=c->r[1]+0x00000084u; // 800B28A8
  c->lr=0x800B28B0u; f_8003F484(c); // 800B28AC
  c->r[3]=c->r[1]+0x00000054u; // 800B28B0
  c->r[5]=c->r[1]+0x00000090u; // 800B28B4
  c->r[4]=c->r[3]|c->r[3]; // 800B28B8
  c->lr=0x800B28C0u; f_80064C74(c); // 800B28BC
  c->r[3]=c->r[1]+0x00000054u; // 800B28C0
  c->lr=0x800B28C8u; f_802657AC(c); // 800B28C4
  {uint32_t ea=c->r[2]+0xFFFF8DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28C8
  c->r[3]=c->r[1]+0x00000078u; // 800B28CC
  c->r[4]=c->r[1]+0x000000A8u; // 800B28D0
  c->r[5]=c->r[1]+0x00000090u; // 800B28D4
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 800B28D8
  c->lr=0x800B28E0u; f_80064C74(c); // 800B28DC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B28E0
  c->r[3]=c->r[1]+0x00000078u; // 800B28E4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800B28E8
  c->lr=0x800B28F0u; f_80065368(c); // 800B28EC
  cmps(c,0,(int32_t)c->r[3],0); // 800B28F0
  if (!crb(c,2)) { goto L_800B2904; } // 800B28F4
  c->r[3]=c->r[1]+0x00000078u; // 800B28F8
  c->r[4]=c->r[3]|c->r[3]; // 800B28FC
  c->lr=0x800B2904u; f_80265750(c); // 800B2900
L_800B2904:;
  c->r[3]=c->r[1]+0x00000060u; // 800B2904
  c->r[4]=c->r[1]+0x00000078u; // 800B2908
  c->lr=0x800B2910u; f_8003F484(c); // 800B290C
  c->f[1]=c->f[31]; // 800B2910
  c->r[4]=c->r[3]|c->r[3]; // 800B2914
  c->r[3]=c->r[30]|c->r[30]; // 800B2918
  c->lr=0x800B2920u; f_800AE058(c); // 800B291C
L_800B2920:;
  c->r[3]=c->r[30]|c->r[30]; // 800B2920
  c->lr=0x800B2928u; f_800AD308(c); // 800B2924
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800B2928
  cmps(c,0,(int32_t)c->r[4],0); // 800B292C
  if (crb(c,0)) { goto L_800B2948; } // 800B2930
  c->r[3]=R32(c->r[30]+0x00000974u); // 800B2934
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B2938
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B293C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B2940
  if (!crb(c,2)) { goto L_800B2998; } // 800B2944
L_800B2948:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 800B2948
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B294C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B2950
  c->lr=0x800B2958u; f_8016498C(c); // 800B2954
  cmps(c,0,(int32_t)c->r[3],0); // 800B2958
  if (crb(c,2)) { goto L_800B2998; } // 800B295C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2960
  c->r[0]=0u+0x00000000u; // 800B2964
  W32(c->r[30]+0x00000874u,c->r[0]); // 800B2968
  c->r[3]=c->r[1]+0x000000CCu; // 800B296C
  c->r[4]=0u+0x00000000u; // 800B2970
  {uint32_t ea=c->r[30]+0x00000878u; WF32(ea,c->f[0]);} // 800B2974
  c->lr=0x800B297Cu; f_800770B8(c); // 800B2978
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B297C
  c->r[3]=c->r[1]+0x0000003Cu; // 800B2980
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B2984
  c->r[4]=c->r[1]+0x000000CCu; // 800B2988
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 800B298C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800B2990
  c->lr=0x800B2998u; f_80077140(c); // 800B2994
L_800B2998:;
  {uint32_t ea=c->r[2]+0xFFFF8DD4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B2998
  c->r[3]=c->r[1]+0x00000140u; // 800B299C
  c->lr=0x800B29A4u; f_80063ACC(c); // 800B29A0
  c->r[5]=0u+0x803F0000u; // 800B29A4
  c->r[3]=c->r[1]+0x00000164u; // 800B29A8
  c->r[5]=c->r[5]+0x000022C4u; // 800B29AC
  c->r[4]=c->r[30]+0x0000102Cu; // 800B29B0
  W32(c->r[1]+0x00000160u,c->r[5]); // 800B29B4
  c->lr=0x800B29BCu; f_8003F468(c); // 800B29B8
  {uint32_t ea=c->r[2]+0xFFFF8DD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B29BC
  c->r[3]=c->r[1]+0x0000014Cu; // 800B29C0
  {uint32_t ea=c->r[30]+0x00001044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B29C4
  c->r[4]=c->r[1]+0x00000034u; // 800B29C8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800B29CC
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 800B29D0
  c->r[0]=R32(c->r[31]+0x00000028u); // 800B29D4
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 800B29D8
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B29DC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B29E0
  W32(c->r[1]+0x00000034u,c->r[5]); // 800B29E4
  W32(c->r[1]+0x00000038u,c->r[0]); // 800B29E8
  c->lr=0x800B29F0u; f_80063D44(c); // 800B29EC
  c->r[3]=c->r[1]+0x0000041Cu; // 800B29F0
  c->lr=0x800B29F8u; f_8003F3AC(c); // 800B29F4
  c->lr=0x800B29FCu; f_8003DA30(c); // 800B29F8
  c->lr=0x800B2A00u; f_8003ED58(c); // 800B29FC
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B2A00
  c->lr=0x800B2A08u; f_8003DA30(c); // 800B2A04
  c->r[4]=c->r[1]+0x00000140u; // 800B2A08
  c->r[5]=c->r[1]+0x00000014u; // 800B2A0C
  c->r[6]=c->r[1]+0x0000041Cu; // 800B2A10
  c->lr=0x800B2A18u; f_8003E788(c); // 800B2A14
  W32(c->r[1]+0x00000018u,c->r[3]); // 800B2A18
  c->r[30]=0u+0xE0000000u; // 800B2A1C
  goto L_800B2B04; // 800B2A20
L_800B2A24:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 800B2A24
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 800B2A28
  c->r[3]=R32(c->r[3]+0x00000020u); // 800B2A2C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800B2A30
  c->r[3]=R32(c->r[1]+0x00000018u); // 800B2A34
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800B2A38
  c->r[12]=R32(c->r[3]+0x00000010u); // 800B2A3C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B2A40
  c->ctr=c->r[12]; // 800B2A44
  if (true) { c->lr=0x800B2A4Cu; dispatch(c,c->ctr); } // 800B2A48
  W32(c->r[1]+0x00000030u,c->r[4]); // 800B2A4C
  c->r[4]=c->r[30]+0x00000002u; // 800B2A50
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800B2A54
  c->r[3]=c->r[1]+0x0000002Cu; // 800B2A58
  c->lr=0x800B2A60u; f_8003EDD0(c); // 800B2A5C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2A60
  if (crb(c,2)) { goto L_800B2AD8; } // 800B2A64
  c->r[6]=R32(c->r[1]+0x00000018u); // 800B2A68
  c->f[1]=c->f[31]; // 800B2A6C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2A70
  c->r[3]=c->r[1]+0x00000298u; // 800B2A74
  c->r[5]=R32(c->r[6]+0xFFFFFFF8u); // 800B2A78
  c->r[4]=c->r[1]+0x00000164u; // 800B2A7C
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800B2A80
  c->f[4]=c->f[3]; // 800B2A84
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2A88
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 800B2A8C
  c->f[5]=c->f[3]; // 800B2A90
  c->r[5]=c->r[1]+0x00000454u; // 800B2A94
  c->r[6]=c->r[1]+0x0000001Cu; // 800B2A98
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B2A9C
  c->r[7]=0u+0x00000016u; // 800B2AA0
  c->r[8]=0u+0xFFFFFFFFu; // 800B2AA4
  c->lr=0x800B2AACu; f_800B1A54(c); // 800B2AA8
  c->r[6]=R32(c->r[1]+0x00000018u); // 800B2AAC
  c->r[3]=c->r[1]+0x00000024u; // 800B2AB0
  c->r[4]=c->r[1]+0x00000298u; // 800B2AB4
  c->r[5]=R32(c->r[6]+0xFFFFFFF8u); // 800B2AB8
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800B2ABC
  W32(c->r[1]+0x00000024u,c->r[5]); // 800B2AC0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B2AC4
  c->lr=0x800B2ACCu; f_800B1AD4(c); // 800B2AC8
  c->r[3]=c->r[1]+0x00000298u; // 800B2ACC
  c->r[4]=0u+0xFFFFFFFFu; // 800B2AD0
  c->lr=0x800B2AD8u; f_8006BCB4(c); // 800B2AD4
L_800B2AD8:;
  c->r[3]=c->r[1]+0x00000018u; // 800B2AD8
  c->r[4]=0u+0x00000000u; // 800B2ADC
  c->lr=0x800B2AE4u; f_8003ED68(c); // 800B2AE0
  c->r[0]=R32(c->r[1]+0x00000018u); // 800B2AE4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B2AE8
  c->lr=0x800B2AF0u; f_8003DA30(c); // 800B2AEC
  c->r[4]=c->r[1]+0x00000140u; // 800B2AF0
  c->r[5]=c->r[1]+0x00000010u; // 800B2AF4
  c->r[6]=c->r[1]+0x0000041Cu; // 800B2AF8
  c->lr=0x800B2B00u; f_8003E788(c); // 800B2AFC
  W32(c->r[1]+0x00000018u,c->r[3]); // 800B2B00
L_800B2B04:;
  c->lr=0x800B2B08u; f_8003DA30(c); // 800B2B04
  c->lr=0x800B2B0Cu; f_8003ECFC(c); // 800B2B08
  c->r[0]=R32(c->r[1]+0x00000018u); // 800B2B0C
  c->r[4]=c->r[1]+0x00000008u; // 800B2B10
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B2B14
  c->r[3]=c->r[1]+0x0000000Cu; // 800B2B18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B2B1C
  c->lr=0x800B2B24u; f_8003ED7C(c); // 800B2B20
  cmps(c,0,(int32_t)c->r[3],0); // 800B2B24
  if (!crb(c,2)) { IRQCHK(c); goto L_800B2A24; } // 800B2B28
  c->r[3]=c->r[1]+0x00000454u; // 800B2B2C
  c->r[4]=0u+0xFFFFFFFFu; // 800B2B30
  c->lr=0x800B2B38u; f_80046394(c); // 800B2B34
  c->r[0]=0u+0x00001268u; // 800B2B38
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B2B3C
  c->r[0]=R32(c->r[1]+0x00001274u); // 800B2B40
  {uint32_t ea=c->r[1]+0x00001260u; c->f[31]=RF64(ea);} // 800B2B44
  c->r[31]=R32(c->r[1]+0x0000125Cu); // 800B2B48
  c->r[30]=R32(c->r[1]+0x00001258u); // 800B2B4C
  c->lr=c->r[0]; // 800B2B50
  c->r[1]=c->r[1]+0x00001270u; // 800B2B54
  return; // 800B2B58
}

// fn_800B2B5C
void f_800B2B5C(Ctx* __restrict c) {
  trace_call(0x800B2B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2B5C
  c->r[0]=c->lr; // 800B2B60
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B2B64
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800B2B68
  c->r[31]=c->r[3]|c->r[3]; // 800B2B6C
  c->r[0]=R8(c->r[4]+0x00000021u); // 800B2B70
  cmps(c,0,(int32_t)c->r[0],0); // 800B2B74
  if (crb(c,2)) { goto L_800B2BD0; } // 800B2B78
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2B7C
  c->r[3]=c->r[1]+0x00000068u; // 800B2B80
  {uint32_t ea=c->r[2]+0xFFFF8DF8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2B84
  c->f[2]=c->f[1]; // 800B2B88
  c->lr=0x800B2B90u; f_803949B8(c); // 800B2B8C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800B2B90
  c->r[4]=c->r[31]+0x000008D0u; // 800B2B94
  c->r[3]=c->r[1]+0x00000008u; // 800B2B98
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2B9C
  c->ctr=c->r[12]; // 800B2BA0
  if (true) { c->lr=0x800B2BA8u; dispatch(c,c->ctr); } // 800B2BA4
  c->r[3]=c->r[1]+0x00000008u; // 800B2BA8
  c->r[4]=c->r[1]+0x00000068u; // 800B2BAC
  c->r[5]=c->r[1]+0x00000038u; // 800B2BB0
  c->lr=0x800B2BB8u; f_802646E0(c); // 800B2BB4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 800B2BB8
  c->r[3]=c->r[31]+0x000008D0u; // 800B2BBC
  c->r[4]=c->r[1]+0x00000038u; // 800B2BC0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B2BC4
  c->ctr=c->r[12]; // 800B2BC8
  if (true) { c->lr=0x800B2BD0u; dispatch(c,c->ctr); } // 800B2BCC
L_800B2BD0:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800B2BD0
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800B2BD4
  c->lr=c->r[0]; // 800B2BD8
  c->r[1]=c->r[1]+0x000000A0u; // 800B2BDC
  return; // 800B2BE0
}

// fn_800B2BE4
void f_800B2BE4(Ctx* __restrict c) {
  trace_call(0x800B2BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2BE4
  c->r[0]=c->lr; // 800B2BE8
  W32(c->r[1]+0x00000154u,c->r[0]); // 800B2BEC
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[31]);} // 800B2BF0
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,31,ea,0,0);} // 800B2BF4
  {uint32_t ea=c->r[2]+0xFFFF8DC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2BF8
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 800B2BFC
  c->r[31]=c->r[4]|c->r[4]; // 800B2C00
  W32(c->r[1]+0x00000138u,c->r[30]); // 800B2C04
  c->r[30]=c->r[3]|c->r[3]; // 800B2C08
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2C0C
  fcmp(c,0,c->f[1],c->f[0]); // 800B2C10
  if (!crb(c,0)) { goto L_800B2D84; } // 800B2C14
  c->r[3]=c->r[4]+0x00000010u; // 800B2C18
  c->lr=0x800B2C20u; f_80065368(c); // 800B2C1C
  cmps(c,0,(int32_t)c->r[3],0); // 800B2C20
  if (!crb(c,2)) { goto L_800B2D84; } // 800B2C24
  c->r[0]=0u+0x00000006u; // 800B2C28
  c->r[5]=c->r[1]+0x00000100u; // 800B2C2C
  c->r[4]=c->r[30]+0x00000940u; // 800B2C30
  c->ctr=c->r[0]; // 800B2C34
L_800B2C38:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B2C38
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B2C3C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B2C40
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B2C44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B2C38; } // 800B2C48
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B2C4C
  c->r[4]=c->r[30]+0x000008D0u; // 800B2C50
  c->r[3]=c->r[1]+0x000000D4u; // 800B2C54
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2C58
  c->ctr=c->r[12]; // 800B2C5C
  if (true) { c->lr=0x800B2C64u; dispatch(c,c->ctr); } // 800B2C60
  c->r[3]=c->r[1]+0x000000D4u; // 800B2C64
  c->r[4]=c->r[1]+0x000000A4u; // 800B2C68
  c->lr=0x800B2C70u; f_80264994(c); // 800B2C6C
  c->r[3]=R32(c->r[30]+0x00000974u); // 800B2C70
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B2C74
  c->lr=0x800B2C7Cu; f_80165E24(c); // 800B2C78
  c->r[12]=R32(c->r[30]+0x00000010u); // 800B2C7C
  c->f[31]=c->f[1]; // 800B2C80
  c->r[3]=c->r[30]|c->r[30]; // 800B2C84
  c->r[12]=R32(c->r[12]+0x00000304u); // 800B2C88
  c->ctr=c->r[12]; // 800B2C8C
  if (true) { c->lr=0x800B2C94u; dispatch(c,c->ctr); } // 800B2C90
  {uint32_t ea=c->r[2]+0xFFFF8DE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2C94
  c->r[3]=c->r[1]+0x00000074u; // 800B2C98
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2C9C
  c->r[4]=c->r[1]+0x000000D4u; // 800B2CA0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800B2CA4
  c->r[5]=c->r[31]+0x00000010u; // 800B2CA8
  c->r[6]=0u+0x00000000u; // 800B2CAC
  c->r[7]=0u+0x00000000u; // 800B2CB0
  c->r[8]=0u+0x00000000u; // 800B2CB4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800B2CB8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 800B2CBC
  c->f[2]=c->f[1]; // 800B2CC0
  c->f[3]=c->f[1]; // 800B2CC4
  c->lr=0x800B2CCCu; f_800AF1B0(c); // 800B2CC8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2CCC
  c->r[3]=c->r[1]+0x00000014u; // 800B2CD0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2CD4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2CD8
  c->lr=0x800B2CE0u; f_800521A0(c); // 800B2CDC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2CE0
  c->r[3]=c->r[1]+0x00000020u; // 800B2CE4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2CE8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2CEC
  c->lr=0x800B2CF4u; f_800521A0(c); // 800B2CF0
  c->r[3]=c->r[1]+0x00000020u; // 800B2CF4
  c->lr=0x800B2CFCu; f_802657AC(c); // 800B2CF8
  c->r[3]=c->r[1]+0x0000002Cu; // 800B2CFC
  c->r[4]=c->r[31]+0x00000010u; // 800B2D00
  c->lr=0x800B2D08u; f_80064C58(c); // 800B2D04
  c->r[3]=c->r[1]+0x00000038u; // 800B2D08
  c->r[4]=c->r[1]+0x0000002Cu; // 800B2D0C
  c->r[5]=c->r[1]+0x00000014u; // 800B2D10
  c->lr=0x800B2D18u; f_80064C34(c); // 800B2D14
  c->r[3]=c->r[1]+0x00000074u; // 800B2D18
  c->r[4]=c->r[1]+0x00000038u; // 800B2D1C
  c->lr=0x800B2D24u; f_80032FF4(c); // 800B2D20
  c->r[3]=c->r[1]+0x000000A4u; // 800B2D24
  c->r[4]=c->r[1]+0x00000074u; // 800B2D28
  c->r[5]=c->r[1]+0x00000044u; // 800B2D2C
  c->lr=0x800B2D34u; f_802646E0(c); // 800B2D30
  c->r[0]=0u+0x00000006u; // 800B2D34
  c->r[5]=c->r[1]+0x00000070u; // 800B2D38
  c->r[4]=c->r[1]+0x00000040u; // 800B2D3C
  c->ctr=c->r[0]; // 800B2D40
L_800B2D44:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B2D44
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B2D48
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B2D4C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B2D50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B2D44; } // 800B2D54
  {uint32_t ea=c->r[1]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2D58
  c->r[3]=c->r[1]+0x00000008u; // 800B2D5C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2D60
  {uint32_t ea=c->r[1]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B2D64
  c->lr=0x800B2D6Cu; f_800521A0(c); // 800B2D68
  c->r[3]=c->r[1]+0x00000074u; // 800B2D6C
  c->r[4]=c->r[1]+0x00000008u; // 800B2D70
  c->lr=0x800B2D78u; f_80032FF4(c); // 800B2D74
  c->r[3]=c->r[30]+0x000008ECu; // 800B2D78
  c->r[4]=c->r[1]+0x00000074u; // 800B2D7C
  c->lr=0x800B2D84u; f_8016A37C(c); // 800B2D80
L_800B2D84:;
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,31,ea,0,0);} // 800B2D84
  c->r[0]=R32(c->r[1]+0x00000154u); // 800B2D88
  {uint32_t ea=c->r[1]+0x00000140u; c->f[31]=RF64(ea);} // 800B2D8C
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 800B2D90
  c->r[30]=R32(c->r[1]+0x00000138u); // 800B2D94
  c->lr=c->r[0]; // 800B2D98
  c->r[1]=c->r[1]+0x00000150u; // 800B2D9C
  return; // 800B2DA0
}

// fn_800B2DA4
void f_800B2DA4(Ctx* __restrict c) {
  trace_call(0x800B2DA4u);
  {uint32_t ea=c->r[1]+0xFFFFFE20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B2DA4
  c->r[0]=c->lr; // 800B2DA8
  W32(c->r[1]+0x000001E4u,c->r[0]); // 800B2DAC
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[31]);} // 800B2DB0
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,31,ea,0,0);} // 800B2DB4
  c->r[11]=c->r[1]+0x000001D0u; // 800B2DB8
  c->lr=0x800B2DC0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B2DBC
  c->r[31]=c->r[1]|c->r[1]; // 800B2DC0
  c->r[5]=0u+0x00000000u; // 800B2DC4
  c->r[0]=0u+0x00000006u; // 800B2DC8
  c->r[30]=c->r[4]|c->r[4]; // 800B2DCC
  W32(c->r[31]+0x00000008u,c->r[5]); // 800B2DD0
  c->r[29]=c->r[3]|c->r[3]; // 800B2DD4
  c->r[5]=c->r[31]+0x0000018Cu; // 800B2DD8
  c->r[4]=c->r[3]+0x00000940u; // 800B2DDC
  c->ctr=c->r[0]; // 800B2DE0
L_800B2DE4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B2DE4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B2DE8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B2DEC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B2DF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B2DE4; } // 800B2DF4
  c->r[3]=c->r[31]+0x0000006Cu; // 800B2DF8
  c->r[4]=c->r[31]+0x00000190u; // 800B2DFC
  c->lr=0x800B2E04u; f_80032FD8(c); // 800B2E00
  c->r[3]=c->r[31]+0x0000006Cu; // 800B2E04
  c->lr=0x800B2E0Cu; f_802657AC(c); // 800B2E08
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2E0C
  c->f[3]=c->f[1]; // 800B2E10
  fcmp(c,0,c->f[1],c->f[0]); // 800B2E14
  if (!crb(c,0)) { goto L_800B2E20; } // 800B2E18
  c->f[3]=c->f[0]; // 800B2E1C
L_800B2E20:;
  {uint32_t ea=c->r[2]+0xFFFF8D68u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B2E20
  c->r[3]=c->r[29]|c->r[29]; // 800B2E24
  {uint32_t ea=c->r[2]+0xFFFF8D98u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2E28
  c->r[4]=c->r[30]+0x00000010u; // 800B2E2C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2E30
  c->r[5]=c->r[31]+0x00000008u; // 800B2E34
  c->f[31]=c->ps1[31]=S(std::fma(c->f[5],c->f[1],c->f[2])); // 800B2E38
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2E3C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800B2E40
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B2E44
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[31]); // 800B2E48
  c->lr=0x800B2E50u; f_800B02B4(c); // 800B2E4C
  c->r[5]=R32(c->r[29]+0x00000000u); // 800B2E50
  c->r[4]=c->r[29]+0x000008D0u; // 800B2E54
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B2E58
  c->r[3]=c->r[31]+0x00000160u; // 800B2E5C
  W32(c->r[31]+0x0000001Cu,c->r[5]); // 800B2E60
  W32(c->r[31]+0x00000020u,c->r[0]); // 800B2E64
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B2E68
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2E6C
  c->ctr=c->r[12]; // 800B2E70
  if (true) { c->lr=0x800B2E78u; dispatch(c,c->ctr); } // 800B2E74
  c->f[1]=c->f[31]; // 800B2E78
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2E7C
  c->r[3]=c->r[29]+0x000008A4u; // 800B2E80
  c->r[4]=c->r[31]+0x00000160u; // 800B2E84
  c->r[5]=c->r[31]+0x0000001Cu; // 800B2E88
  c->lr=0x800B2E90u; f_800B9434(c); // 800B2E8C
  cmpu(c,0,c->r[3],0x00000001u); // 800B2E90
  if (!crb(c,2)) { goto L_800B2EFC; } // 800B2E94
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B2E98
  c->r[4]=c->r[29]+0x000008D0u; // 800B2E9C
  c->r[3]=c->r[31]+0x00000130u; // 800B2EA0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2EA4
  c->ctr=c->r[12]; // 800B2EA8
  if (true) { c->lr=0x800B2EB0u; dispatch(c,c->ctr); } // 800B2EAC
  c->r[3]=c->r[31]+0x00000060u; // 800B2EB0
  c->r[4]=c->r[31]+0x00000130u; // 800B2EB4
  c->lr=0x800B2EBCu; f_80032FD8(c); // 800B2EB8
  c->r[3]=c->r[31]+0x00000060u; // 800B2EBC
  c->r[4]=c->r[30]+0x00000010u; // 800B2EC0
  c->lr=0x800B2EC8u; f_80265924(c); // 800B2EC4
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800B2EC8
  fcmp(c,0,c->f[1],c->f[0]); // 800B2ECC
  if (!crb(c,0)) { goto L_800B2EFC; } // 800B2ED0
  c->r[3]=c->r[31]+0x000000BCu; // 800B2ED4
  c->r[4]=0u+0x00000000u; // 800B2ED8
  c->lr=0x800B2EE0u; f_800770B8(c); // 800B2EDC
  c->r[5]=R32(c->r[29]+0x00000000u); // 800B2EE0
  c->r[3]=c->r[31]+0x00000014u; // 800B2EE4
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B2EE8
  c->r[4]=c->r[31]+0x000000BCu; // 800B2EEC
  W32(c->r[31]+0x00000014u,c->r[5]); // 800B2EF0
  W32(c->r[31]+0x00000018u,c->r[0]); // 800B2EF4
  c->lr=0x800B2EFCu; f_80077140(c); // 800B2EF8
L_800B2EFC:;
  c->r[3]=c->r[31]+0x00000054u; // 800B2EFC
  c->r[4]=c->r[29]+0x000008A4u; // 800B2F00
  c->lr=0x800B2F08u; f_800B83D4(c); // 800B2F04
  c->r[3]=c->r[30]+0x00000010u; // 800B2F08
  c->r[4]=c->r[31]+0x00000054u; // 800B2F0C
  c->lr=0x800B2F14u; f_8003F468(c); // 800B2F10
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B2F14
  c->r[4]=c->r[29]+0x000008D0u; // 800B2F18
  c->r[3]=c->r[31]+0x00000100u; // 800B2F1C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2F20
  c->ctr=c->r[12]; // 800B2F24
  if (true) { c->lr=0x800B2F2Cu; dispatch(c,c->ctr); } // 800B2F28
  c->r[3]=c->r[31]+0x00000048u; // 800B2F2C
  c->r[4]=c->r[31]+0x00000100u; // 800B2F30
  c->lr=0x800B2F38u; f_80032FD8(c); // 800B2F34
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B2F38
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 800B2F3C
  c->lr=0x800B2F44u; f_80127CB8(c); // 800B2F40
  cmps(c,0,(int32_t)c->r[3],0); // 800B2F44
  if (crb(c,2)) { goto L_800B307C; } // 800B2F48
  c->r[0]=R8(c->r[13]+0xFFFF9504u); // 800B2F4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B2F50
  if (!crb(c,2)) { goto L_800B2F84; } // 800B2F54
  c->r[28]=0u+0x80470000u; // 800B2F58
  c->r[3]=c->r[28]+0xFFFFFF90u; // 800B2F5C
  c->lr=0x800B2F64u; f_800462E8(c); // 800B2F60
  c->r[4]=0u+0x80040000u; // 800B2F64
  c->r[5]=0u+0x80470000u; // 800B2F68
  c->r[3]=c->r[28]+0xFFFFFF90u; // 800B2F6C
  c->r[4]=c->r[4]+0x00006394u; // 800B2F70
  c->r[5]=c->r[5]+0xFFFFFF84u; // 800B2F74
  c->lr=0x800B2F7Cu; f_802895A4(c); // 800B2F78
  c->r[0]=0u+0x00000001u; // 800B2F7C
  W8(c->r[13]+0xFFFF9504u,c->r[0]); // 800B2F80
L_800B2F84:;
  c->r[0]=0u+0x80470000u; // 800B2F84
  c->r[28]=addc(c,c->r[0],0xFFFFFF90u,0); cr0(c,c->r[28]); // 800B2F88
  if (crb(c,2)) { goto L_800B2FB0; } // 800B2F8C
  W32(c->r[31]+0x000000B8u,c->r[1]); // 800B2F90
  c->r[3]=c->r[28]|c->r[28]; // 800B2F94
  c->lr=0x800B2F9Cu; f_800462E8(c); // 800B2F98
  goto L_800B2FB0; // 800B2F9C
  c->r[3]=0u+0x00000000u; // 800B2FA0
  c->r[4]=0u+0x00000000u; // 800B2FA4
  c->r[5]=0u+0x00000000u; // 800B2FA8
  c->lr=0x800B2FB0u; f_8028BC3C(c); // 800B2FAC
L_800B2FB0:;
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2FB0
  c->r[3]=c->r[31]+0x00000030u; // 800B2FB4
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B2FB8
  c->f[3]=c->f[1]; // 800B2FBC
  c->lr=0x800B2FC4u; f_800521A0(c); // 800B2FC0
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B2FC4
  c->r[4]=c->r[29]+0x000008D0u; // 800B2FC8
  c->r[3]=c->r[31]+0x000000D0u; // 800B2FCC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B2FD0
  c->ctr=c->r[12]; // 800B2FD4
  if (true) { c->lr=0x800B2FDCu; dispatch(c,c->ctr); } // 800B2FD8
  c->r[3]=c->r[31]+0x0000003Cu; // 800B2FDC
  c->r[4]=c->r[31]+0x000000D0u; // 800B2FE0
  c->lr=0x800B2FE8u; f_80032FD8(c); // 800B2FE4
  c->r[4]=c->r[31]+0x0000003Cu; // 800B2FE8
  c->r[3]=c->r[31]+0x00000084u; // 800B2FEC
  c->r[5]=c->r[31]+0x00000030u; // 800B2FF0
  c->lr=0x800B2FF8u; f_80064C34(c); // 800B2FF4
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B2FF8
  c->r[3]=c->r[31]+0x00000024u; // 800B2FFC
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3000
  c->f[3]=c->f[1]; // 800B3004
  c->lr=0x800B300Cu; f_800521A0(c); // 800B3008
  c->r[3]=c->r[31]+0x00000078u; // 800B300C
  c->r[4]=c->r[30]+0x00000010u; // 800B3010
  c->r[5]=c->r[31]+0x00000024u; // 800B3014
  c->lr=0x800B301Cu; f_80064C34(c); // 800B3018
  c->r[3]=0u+0x80450000u; // 800B301C
  c->r[4]=c->r[28]|c->r[28]; // 800B3020
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B3024
  c->r[5]=c->r[31]+0x00000084u; // 800B3028
  c->r[6]=c->r[31]+0x00000078u; // 800B302C
  c->r[7]=0u+0x00000000u; // 800B3030
  c->lr=0x800B3038u; f_80044D14(c); // 800B3034
  cmps(c,0,(int32_t)c->r[3],0); // 800B3038
  if (crb(c,2)) { goto L_800B307C; } // 800B303C
  c->r[5]=R32(c->r[29]+0x000008C4u); // 800B3040
  c->r[3]=c->r[31]+0x00000090u; // 800B3044
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3048
  c->r[4]=0u+0x00000000u; // 800B304C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800B3050
  W32(c->r[29]+0x000008CCu,c->r[0]); // 800B3054
  {uint32_t ea=c->r[29]+0x000008C8u; WF32(ea,c->f[0]);} // 800B3058
  c->lr=0x800B3060u; f_800770B8(c); // 800B305C
  c->r[5]=R32(c->r[29]+0x00000000u); // 800B3060
  c->r[3]=c->r[31]+0x0000000Cu; // 800B3064
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B3068
  c->r[4]=c->r[31]+0x00000090u; // 800B306C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800B3070
  W32(c->r[31]+0x00000010u,c->r[0]); // 800B3074
  c->lr=0x800B307Cu; f_80077140(c); // 800B3078
L_800B307C:;
  c->r[10]=c->r[31]|c->r[31]; // 800B307C
  {uint32_t ea=c->r[10]+0x000001D8u; psq_load(c,31,ea,0,0);} // 800B3080
  c->r[11]=c->r[10]+0x000001D0u; // 800B3084
  {uint32_t ea=c->r[31]+0x000001D0u; c->f[31]=RF64(ea);} // 800B3088
  c->lr=0x800B3090u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B308C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B3090
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B3094
  c->r[1]=c->r[10]|c->r[10]; // 800B3098
  c->lr=c->r[0]; // 800B309C
  return; // 800B30A0
}

// fn_800B30A4
void f_800B30A4(Ctx* __restrict c) {
  trace_call(0x800B30A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B30A4
  c->r[0]=c->lr; // 800B30A8
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B30AC
  c->r[11]=c->r[1]+0x000000C0u; // 800B30B0
  c->lr=0x800B30B8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B30B4
  c->r[12]=R32(c->r[5]+0x000008D0u); // 800B30B8
  c->r[30]=c->r[4]|c->r[4]; // 800B30BC
  c->r[29]=c->r[3]|c->r[3]; // 800B30C0
  c->r[4]=c->r[5]+0x000008D0u; // 800B30C4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B30C8
  c->r[31]=c->r[5]|c->r[5]; // 800B30CC
  c->r[3]=c->r[1]+0x0000007Cu; // 800B30D0
  c->ctr=c->r[12]; // 800B30D4
  if (true) { c->lr=0x800B30DCu; dispatch(c,c->ctr); } // 800B30D8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B30DC
  c->r[3]=c->r[1]+0x00000064u; // 800B30E0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B30E4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B30E8
  c->lr=0x800B30F0u; f_800521A0(c); // 800B30EC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B30F0
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B30F4
  W32(c->r[1]+0x00000020u,c->r[3]); // 800B30F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B30FC
  c->lr=0x800B3104u; f_80128B5C(c); // 800B3100
  c->r[4]=c->r[1]+0x00000020u; // 800B3104
  c->lr=0x800B310Cu; f_8012BDE8(c); // 800B3108
  cmps(c,0,(int32_t)c->r[3],0); // 800B310C
  if (!crb(c,2)) { goto L_800B3148; } // 800B3110
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B3114
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B3118
  W32(c->r[1]+0x00000018u,c->r[3]); // 800B311C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B3120
  c->lr=0x800B3128u; f_80128B5C(c); // 800B3124
  c->r[4]=c->r[3]|c->r[3]; // 800B3128
  c->r[3]=c->r[1]+0x00000040u; // 800B312C
  c->r[5]=c->r[1]+0x00000018u; // 800B3130
  c->lr=0x800B3138u; f_80129C6C(c); // 800B3134
  c->r[3]=c->r[1]+0x00000070u; // 800B3138
  c->r[4]=c->r[1]+0x00000040u; // 800B313C
  c->lr=0x800B3144u; f_8003F468(c); // 800B3140
  goto L_800B3178; // 800B3144
L_800B3148:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B3148
  c->r[0]=R32(c->r[31]+0x00000004u); // 800B314C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800B3150
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B3154
  c->lr=0x800B315Cu; f_80128B5C(c); // 800B3158
  c->r[4]=c->r[3]|c->r[3]; // 800B315C
  c->r[3]=c->r[1]+0x00000034u; // 800B3160
  c->r[5]=c->r[1]+0x00000010u; // 800B3164
  c->lr=0x800B316Cu; f_80129C6C(c); // 800B3168
  c->r[3]=c->r[1]+0x00000070u; // 800B316C
  c->r[4]=c->r[1]+0x00000034u; // 800B3170
  c->lr=0x800B3178u; f_8003F468(c); // 800B3174
L_800B3178:;
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3178
  c->r[3]=c->r[1]+0x00000058u; // 800B317C
  c->r[4]=c->r[1]+0x00000070u; // 800B3180
  c->r[5]=c->r[1]+0x00000064u; // 800B3184
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800B3188
  c->lr=0x800B3190u; f_80064C74(c); // 800B318C
  c->lr=0x800B3194u; f_80128B5C(c); // 800B3190
  c->r[4]=c->r[3]|c->r[3]; // 800B3194
  c->r[3]=c->r[1]+0x00000028u; // 800B3198
  c->r[4]=c->r[4]+0x00000020u; // 800B319C
  c->lr=0x800B31A4u; f_8003F484(c); // 800B31A0
  c->r[3]=c->r[1]+0x0000004Cu; // 800B31A4
  c->r[4]=c->r[1]+0x00000028u; // 800B31A8
  c->r[5]=c->r[1]+0x00000064u; // 800B31AC
  c->lr=0x800B31B4u; f_80064C74(c); // 800B31B0
  c->r[3]=c->r[1]+0x0000004Cu; // 800B31B4
  c->r[4]=c->r[1]+0x00000058u; // 800B31B8
  c->lr=0x800B31C0u; f_800653BC(c); // 800B31BC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B31C0
  fcmp(c,0,c->f[1],c->f[0]); // 800B31C4
  if (!crb(c,1)) { goto L_800B31DC; } // 800B31C8
  c->r[3]=c->r[29]|c->r[29]; // 800B31CC
  c->r[4]=c->r[1]+0x00000070u; // 800B31D0
  c->lr=0x800B31D8u; f_8003F484(c); // 800B31D4
  goto L_800B3220; // 800B31D8
L_800B31DC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 800B31DC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B31E0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B31E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B31E8
  c->lr=0x800B31F0u; f_80128B5C(c); // 800B31EC
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B31F0
  c->r[4]=c->r[1]+0x00000008u; // 800B31F4
  c->lr=0x800B31FCu; f_80128004(c); // 800B31F8
  cmps(c,0,(int32_t)c->r[3],0); // 800B31FC
  if (crb(c,2)) { goto L_800B3214; } // 800B3200
  c->r[3]=c->r[29]|c->r[29]; // 800B3204
  c->r[4]=c->r[1]+0x00000070u; // 800B3208
  c->lr=0x800B3210u; f_8003F484(c); // 800B320C
  goto L_800B3220; // 800B3210
L_800B3214:;
  c->r[3]=c->r[29]|c->r[29]; // 800B3214
  c->r[4]=c->r[1]+0x00000064u; // 800B3218
  c->lr=0x800B3220u; f_8003F484(c); // 800B321C
L_800B3220:;
  c->r[11]=c->r[1]+0x000000C0u; // 800B3220
  c->lr=0x800B3228u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3224
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B3228
  c->lr=c->r[0]; // 800B322C
  c->r[1]=c->r[1]+0x000000C0u; // 800B3230
  return; // 800B3234
}

// fn_800B3238
void f_800B3238(Ctx* __restrict c) {
  trace_call(0x800B3238u);
  {uint32_t ea=c->r[1]+0xFFFFF180u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3238
  c->r[0]=c->lr; // 800B323C
  W32(c->r[1]+0x00000E84u,c->r[0]); // 800B3240
  c->r[11]=c->r[1]+0x00000E80u; // 800B3244
  c->lr=0x800B324Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B3248
  c->r[29]=c->r[5]|c->r[5]; // 800B324C
  c->r[5]=R32(c->r[5]+0x0000002Cu); // 800B3250
  c->r[30]=c->r[4]|c->r[4]; // 800B3254
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3258
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B325C
  c->r[28]=c->r[3]|c->r[3]; // 800B3260
  c->r[4]=c->r[3]+0x000008ECu; // 800B3264
  c->r[6]=0u+0x00000000u; // 800B3268
  c->r[7]=0u+0x00000000u; // 800B326C
  c->r[3]=c->r[3]+0x00000C88u; // 800B3270
  c->lr=0x800B3278u; f_800BB0C8(c); // 800B3274
  c->r[3]=c->r[1]+0x00000010u; // 800B3278
  c->r[4]=c->r[29]+0x00000020u; // 800B327C
  c->lr=0x800B3284u; f_8003F484(c); // 800B3280
  {uint32_t ea=c->r[29]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3284
  c->r[6]=c->r[3]|c->r[3]; // 800B3288
  c->r[4]=c->r[28]|c->r[28]; // 800B328C
  c->r[5]=c->r[28]|c->r[28]; // 800B3290
  c->r[3]=c->r[1]+0x0000001Cu; // 800B3294
  c->lr=0x800B329Cu; f_800B30A4(c); // 800B3298
  c->r[3]=c->r[29]+0x00000010u; // 800B329C
  c->r[4]=c->r[1]+0x0000001Cu; // 800B32A0
  c->lr=0x800B32A8u; f_8003F468(c); // 800B32A4
  {uint32_t ea=c->r[28]+0x0000039Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B32A8
  c->r[3]=c->r[28]+0x000008ECu; // 800B32AC
  c->lr=0x800B32B4u; f_80075394(c); // 800B32B0
  c->lr=0x800B32B8u; f_80127CB8(c); // 800B32B4
  cmps(c,0,(int32_t)c->r[3],0); // 800B32B8
  if (crb(c,2)) { goto L_800B33B8; } // 800B32BC
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B32C0
  c->r[3]=c->r[30]|c->r[30]; // 800B32C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B32C8
  c->ctr=c->r[12]; // 800B32CC
  if (true) { c->lr=0x800B32D4u; dispatch(c,c->ctr); } // 800B32D0
  cmps(c,0,(int32_t)c->r[3],12); // 800B32D4
  if (crb(c,2)) { goto L_800B33A8; } // 800B32D8
  c->r[31]=0u+0xFFFFFFFFu; // 800B32DC
  W32(c->r[29]+0x00000038u,c->r[31]); // 800B32E0
  W32(c->r[29]+0x0000003Cu,c->r[31]); // 800B32E4
  c->r[3]=R32(c->r[28]+0x00000000u); // 800B32E8
  c->r[0]=R32(c->r[28]+0x00000004u); // 800B32EC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B32F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B32F4
  c->lr=0x800B32FCu; f_80128B5C(c); // 800B32F8
  c->r[4]=c->r[1]+0x00000008u; // 800B32FC
  c->lr=0x800B3304u; f_8012BDE8(c); // 800B3300
  cmps(c,0,(int32_t)c->r[3],0); // 800B3304
  c->r[30]=c->r[3]|c->r[3]; // 800B3308
  if (crb(c,0)) { goto L_800B33B8; } // 800B330C
  c->r[3]=c->r[1]+0x00000070u; // 800B3310
  c->lr=0x800B3318u; f_800462E8(c); // 800B3314
  c->r[12]=R32(c->r[28]+0x000008D0u); // 800B3318
  c->r[4]=c->r[28]+0x000008D0u; // 800B331C
  c->r[3]=c->r[1]+0x00000040u; // 800B3320
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B3324
  c->ctr=c->r[12]; // 800B3328
  if (true) { c->lr=0x800B3330u; dispatch(c,c->ctr); } // 800B332C
  c->r[3]=c->r[1]+0x00000034u; // 800B3330
  c->r[4]=c->r[1]+0x00000040u; // 800B3334
  c->lr=0x800B333Cu; f_80032FD8(c); // 800B3338
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B333C
  {uint32_t ea=c->r[28]+0x000004CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3340
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B3344
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800B3348
  c->lr=0x800B3350u; f_80128B5C(c); // 800B334C
  c->r[4]=c->r[3]|c->r[3]; // 800B3350
  c->r[5]=c->r[30]|c->r[30]; // 800B3354
  c->r[3]=c->r[1]+0x00000028u; // 800B3358
  c->lr=0x800B3360u; f_80129ACC(c); // 800B335C
  c->r[3]=0u+0x80450000u; // 800B3360
  c->r[4]=c->r[1]+0x00000070u; // 800B3364
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B3368
  c->r[5]=c->r[1]+0x00000034u; // 800B336C
  c->r[6]=c->r[1]+0x00000028u; // 800B3370
  c->r[7]=0u+0x00000000u; // 800B3374
  c->lr=0x800B337Cu; f_80044D14(c); // 800B3378
  cmps(c,0,(int32_t)c->r[3],0); // 800B337C
  if (crb(c,2)) { goto L_800B3390; } // 800B3380
  W32(c->r[29]+0x00000038u,c->r[31]); // 800B3384
  W32(c->r[29]+0x0000003Cu,c->r[30]); // 800B3388
  goto L_800B3398; // 800B338C
L_800B3390:;
  W32(c->r[29]+0x00000038u,c->r[30]); // 800B3390
  W32(c->r[29]+0x0000003Cu,c->r[30]); // 800B3394
L_800B3398:;
  c->r[3]=c->r[1]+0x00000070u; // 800B3398
  c->r[4]=0u+0xFFFFFFFFu; // 800B339C
  c->lr=0x800B33A4u; f_80046394(c); // 800B33A0
  goto L_800B33B8; // 800B33A4
L_800B33A8:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 800B33A8
  W32(c->r[29]+0x00000038u,c->r[0]); // 800B33AC
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800B33B0
  W32(c->r[29]+0x0000003Cu,c->r[0]); // 800B33B4
L_800B33B8:;
  c->r[11]=c->r[1]+0x00000E80u; // 800B33B8
  c->lr=0x800B33C0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B33BC
  c->r[0]=R32(c->r[1]+0x00000E84u); // 800B33C0
  c->lr=c->r[0]; // 800B33C4
  c->r[1]=c->r[1]+0x00000E80u; // 800B33C8
  return; // 800B33CC
}

// fn_800B33D0
void f_800B33D0(Ctx* __restrict c) {
  trace_call(0x800B33D0u);
  {uint32_t ea=c->r[1]+0xFFFFF1B0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B33D0
  c->r[0]=c->lr; // 800B33D4
  W32(c->r[1]+0x00000E54u,c->r[0]); // 800B33D8
  W32(c->r[1]+0x00000E4Cu,c->r[31]); // 800B33DC
  c->r[31]=c->r[4]|c->r[4]; // 800B33E0
  W32(c->r[1]+0x00000E48u,c->r[30]); // 800B33E4
  c->r[30]=c->r[3]|c->r[3]; // 800B33E8
  c->r[3]=c->r[1]+0x00000050u; // 800B33EC
  c->lr=0x800B33F4u; f_800462E8(c); // 800B33F0
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B33F4
  c->r[4]=c->r[30]+0x000008D0u; // 800B33F8
  c->r[3]=c->r[1]+0x00000020u; // 800B33FC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B3400
  c->ctr=c->r[12]; // 800B3404
  if (true) { c->lr=0x800B340Cu; dispatch(c,c->ctr); } // 800B3408
  c->r[3]=c->r[1]+0x00000014u; // 800B340C
  c->r[4]=c->r[1]+0x00000020u; // 800B3410
  c->lr=0x800B3418u; f_80032FD8(c); // 800B3414
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3418
  {uint32_t ea=c->r[30]+0x000004CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B341C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B3420
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B3424
  c->lr=0x800B342Cu; f_80128B5C(c); // 800B3428
  c->r[4]=c->r[3]|c->r[3]; // 800B342C
  c->r[5]=c->r[31]|c->r[31]; // 800B3430
  c->r[3]=c->r[1]+0x00000008u; // 800B3434
  c->lr=0x800B343Cu; f_80129ACC(c); // 800B3438
  c->r[3]=0u+0x80450000u; // 800B343C
  c->r[4]=c->r[1]+0x00000050u; // 800B3440
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800B3444
  c->r[5]=c->r[1]+0x00000014u; // 800B3448
  c->r[6]=c->r[1]+0x00000008u; // 800B344C
  c->r[7]=0u+0x00000000u; // 800B3450
  c->lr=0x800B3458u; f_80044D14(c); // 800B3454
  cmps(c,0,(int32_t)c->r[3],0); // 800B3458
  if (crb(c,2)) { goto L_800B3474; } // 800B345C
  c->r[3]=c->r[1]+0x00000050u; // 800B3460
  c->r[4]=0u+0xFFFFFFFFu; // 800B3464
  c->lr=0x800B346Cu; f_80046394(c); // 800B3468
  c->r[3]=0u+0x00000000u; // 800B346C
  goto L_800B3484; // 800B3470
L_800B3474:;
  c->r[3]=c->r[1]+0x00000050u; // 800B3474
  c->r[4]=0u+0xFFFFFFFFu; // 800B3478
  c->lr=0x800B3480u; f_80046394(c); // 800B347C
  c->r[3]=0u+0x00000001u; // 800B3480
L_800B3484:;
  c->r[0]=R32(c->r[1]+0x00000E54u); // 800B3484
  c->r[31]=R32(c->r[1]+0x00000E4Cu); // 800B3488
  c->r[30]=R32(c->r[1]+0x00000E48u); // 800B348C
  c->lr=c->r[0]; // 800B3490
  c->r[1]=c->r[1]+0x00000E50u; // 800B3494
  return; // 800B3498
}

// fn_800B349C
void f_800B349C(Ctx* __restrict c) {
  trace_call(0x800B349Cu);
  {uint32_t ea=c->r[1]+0xFFFFE130u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B349C
  c->r[0]=c->lr; // 800B34A0
  W32(c->r[1]+0x00001ED4u,c->r[0]); // 800B34A4
  c->r[0]=0u+0x00001EC8u; // 800B34A8
  {uint32_t ea=c->r[1]+0x00001EC0u; WF64(ea,c->f[31]);} // 800B34AC
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800B34B0
  c->r[11]=c->r[1]+0x00001EC0u; // 800B34B4
  c->lr=0x800B34BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B34B8
  c->r[30]=c->r[3]|c->r[3]; // 800B34BC
  c->r[31]=c->r[4]|c->r[4]; // 800B34C0
  c->r[3]=c->r[1]+0x00000110u; // 800B34C4
  c->r[4]=c->r[4]+0x00000020u; // 800B34C8
  c->lr=0x800B34D0u; f_8003F484(c); // 800B34CC
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B34D0
  c->r[4]=c->r[30]+0x000008D0u; // 800B34D4
  c->r[3]=c->r[1]+0x00000280u; // 800B34D8
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B34DC
  c->ctr=c->r[12]; // 800B34E0
  if (true) { c->lr=0x800B34E8u; dispatch(c,c->ctr); } // 800B34E4
  c->r[0]=0u+0x00000006u; // 800B34E8
  c->r[5]=c->r[1]+0x0000024Cu; // 800B34EC
  c->r[4]=c->r[30]+0x00000940u; // 800B34F0
  c->ctr=c->r[0]; // 800B34F4
L_800B34F8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B34F8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B34FC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B3500
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B3504
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B34F8; } // 800B3508
  c->r[3]=c->r[30]|c->r[30]; // 800B350C
  c->r[4]=c->r[1]+0x00000250u; // 800B3510
  c->lr=0x800B3518u; f_800AF6F8(c); // 800B3514
  c->f[31]=c->f[1]; // 800B3518
  c->lr=0x800B3520u; f_80127CB8(c); // 800B351C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3520
  if (crb(c,2)) { goto L_800B3824; } // 800B3524
  c->r[3]=R32(c->r[30]+0x00000000u); // 800B3528
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B352C
  W32(c->r[1]+0x00000024u,c->r[3]); // 800B3530
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B3534
  c->lr=0x800B353Cu; f_80128B5C(c); // 800B3538
  c->r[4]=c->r[1]+0x00000024u; // 800B353C
  c->lr=0x800B3544u; f_8012BDE8(c); // 800B3540
  c->r[27]=c->r[3]|c->r[3]; // 800B3544
  c->lr=0x800B354Cu; f_80128B5C(c); // 800B3548
  c->r[4]=c->r[3]|c->r[3]; // 800B354C
  c->r[5]=c->r[27]|c->r[27]; // 800B3550
  c->r[3]=c->r[1]+0x00000104u; // 800B3554
  c->lr=0x800B355Cu; f_80129ACC(c); // 800B3558
  c->r[3]=c->r[1]+0x000010A8u; // 800B355C
  c->lr=0x800B3564u; f_800462E8(c); // 800B3560
  {uint32_t ea=c->r[1]+0x0000028Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3564
  c->r[3]=c->r[1]+0x000000F8u; // 800B3568
  {uint32_t ea=c->r[1]+0x0000029Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B356C
  {uint32_t ea=c->r[1]+0x000002ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3570
  c->lr=0x800B3578u; f_800521A0(c); // 800B3574
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3578
  c->r[29]=0u+0x80450000u; // 800B357C
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3580
  c->r[3]=c->r[29]+0xFFFFC69Cu; // 800B3584
  c->r[4]=c->r[1]+0x000010A8u; // 800B3588
  c->r[5]=c->r[1]+0x000000F8u; // 800B358C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800B3590
  c->r[6]=c->r[1]+0x00000104u; // 800B3594
  c->r[7]=0u+0x00000000u; // 800B3598
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 800B359C
  c->lr=0x800B35A4u; f_80044D14(c); // 800B35A0
  cmps(c,0,(int32_t)c->r[3],0); // 800B35A4
  if (crb(c,2)) { goto L_800B37E4; } // 800B35A8
  c->r[0]=R32(c->r[31]+0x00000038u); // 800B35AC
  cmps(c,0,(int32_t)c->r[0],0); // 800B35B0
  if (!crb(c,0)) { goto L_800B3604; } // 800B35B4
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800B35B8
  c->r[3]=c->r[30]|c->r[30]; // 800B35BC
  c->r[4]=c->r[4]+0x00000001u; // 800B35C0
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800B35C4
  c->lr=0x800B35CCu; f_800B33D0(c); // 800B35C8
  cmps(c,0,(int32_t)c->r[3],0); // 800B35CC
  if (crb(c,2)) { goto L_800B35E0; } // 800B35D0
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 800B35D4
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B35D8
  W32(c->r[31]+0x0000003Cu,c->r[27]); // 800B35DC
L_800B35E0:;
  c->lr=0x800B35E4u; f_80128B5C(c); // 800B35E0
  c->r[5]=R32(c->r[31]+0x00000038u); // 800B35E4
  c->r[4]=c->r[3]|c->r[3]; // 800B35E8
  c->r[3]=c->r[1]+0x000000B0u; // 800B35EC
  c->lr=0x800B35F4u; f_80129ACC(c); // 800B35F0
  c->r[3]=c->r[31]+0x00000010u; // 800B35F4
  c->r[4]=c->r[1]+0x000000B0u; // 800B35F8
  c->lr=0x800B3600u; f_8003F468(c); // 800B35FC
  goto L_800B3814; // 800B3600
L_800B3604:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 800B3604
  if (crb(c,2)) { goto L_800B37B0; } // 800B3608
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800B360C
  c->r[3]=c->r[30]|c->r[30]; // 800B3610
  c->lr=0x800B3618u; f_800B33D0(c); // 800B3614
  cmps(c,0,(int32_t)c->r[3],0); // 800B3618
  if (crb(c,2)) { goto L_800B3630; } // 800B361C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 800B3620
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B3624
  W32(c->r[31]+0x0000003Cu,c->r[27]); // 800B3628
  goto L_800B3814; // 800B362C
L_800B3630:;
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800B3630
  c->r[28]=R32(c->r[31]+0x00000038u); // 800B3634
  c->r[0]=c->r[3]+0x00000001u; // 800B3638
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 800B363C
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800B3640
  if (!crb(c,2)) { goto L_800B3814; } // 800B3644
  c->lr=0x800B364Cu; f_80128B5C(c); // 800B3648
  c->r[4]=c->r[3]|c->r[3]; // 800B364C
  c->r[5]=c->r[28]|c->r[28]; // 800B3650
  c->r[3]=c->r[1]+0x000000A4u; // 800B3654
  c->lr=0x800B365Cu; f_80129ACC(c); // 800B3658
  c->r[3]=c->r[31]+0x00000010u; // 800B365C
  c->r[4]=c->r[1]+0x000000A4u; // 800B3660
  c->lr=0x800B3668u; f_8003F468(c); // 800B3664
  c->r[3]=c->r[29]+0xFFFFC69Cu; // 800B3668
  c->r[4]=c->r[1]+0x000010A8u; // 800B366C
  c->r[5]=c->r[1]+0x000000F8u; // 800B3670
  c->r[6]=c->r[31]+0x00000010u; // 800B3674
  c->r[7]=0u+0x00000000u; // 800B3678
  c->lr=0x800B3680u; f_80044D14(c); // 800B367C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3680
  if (crb(c,2)) { goto L_800B3698; } // 800B3684
  c->r[0]=0u+0xFFFFFFFFu; // 800B3688
  W32(c->r[31]+0x0000003Cu,c->r[27]); // 800B368C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B3690
  goto L_800B37A8; // 800B3694
L_800B3698:;
  c->lr=0x800B369Cu; f_80128B5C(c); // 800B3698
  c->r[4]=c->r[3]|c->r[3]; // 800B369C
  c->r[5]=c->r[27]|c->r[27]; // 800B36A0
  c->r[3]=c->r[1]+0x000000ECu; // 800B36A4
  c->lr=0x800B36ACu; f_80129ACC(c); // 800B36A8
  c->r[3]=c->r[1]+0x000002B0u; // 800B36AC
  c->lr=0x800B36B4u; f_800462E8(c); // 800B36B0
  c->r[3]=c->r[29]+0xFFFFC69Cu; // 800B36B4
  c->r[4]=c->r[1]+0x000002B0u; // 800B36B8
  c->r[5]=c->r[1]+0x000000F8u; // 800B36BC
  c->r[6]=c->r[1]+0x000000ECu; // 800B36C0
  c->r[7]=0u+0x00000000u; // 800B36C4
  c->lr=0x800B36CCu; f_80044D14(c); // 800B36C8
  cmps(c,0,(int32_t)c->r[3],0); // 800B36CC
  if (crb(c,2)) { goto L_800B379C; } // 800B36D0
  c->r[3]=c->r[1]+0x000000E0u; // 800B36D4
  c->r[4]=c->r[1]+0x000002C4u; // 800B36D8
  c->lr=0x800B36E0u; f_8003F484(c); // 800B36DC
  c->r[3]=c->r[1]+0x000000D4u; // 800B36E0
  c->r[4]=c->r[1]+0x000000ECu; // 800B36E4
  c->r[5]=c->r[1]+0x000000F8u; // 800B36E8
  c->lr=0x800B36F0u; f_80064C74(c); // 800B36EC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B36F0
  c->r[3]=c->r[1]+0x000000D4u; // 800B36F4
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 800B36F8
  c->lr=0x800B3700u; f_80065368(c); // 800B36FC
  cmps(c,0,(int32_t)c->r[3],0); // 800B3700
  if (!crb(c,2)) { goto L_800B379C; } // 800B3704
  c->r[3]=c->r[1]+0x000000D4u; // 800B3708
  c->r[4]=c->r[3]|c->r[3]; // 800B370C
  c->lr=0x800B3714u; f_80265750(c); // 800B3710
  {uint32_t ea=c->r[1]+0x00000284u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3714
  c->r[3]=c->r[1]+0x00000098u; // 800B3718
  {uint32_t ea=c->r[1]+0x00000294u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B371C
  {uint32_t ea=c->r[1]+0x000002A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3720
  c->lr=0x800B3728u; f_800521A0(c); // 800B3724
  c->r[3]=c->r[1]+0x00000098u; // 800B3728
  c->r[4]=c->r[1]+0x000000D4u; // 800B372C
  c->r[5]=c->r[1]+0x000000C8u; // 800B3730
  c->lr=0x800B3738u; f_80265810(c); // 800B3734
  c->r[3]=c->r[1]+0x000000C8u; // 800B3738
  c->lr=0x800B3740u; f_80065368(c); // 800B373C
  cmps(c,0,(int32_t)c->r[3],0); // 800B3740
  if (!crb(c,2)) { goto L_800B379C; } // 800B3744
  c->r[3]=c->r[1]+0x000000C8u; // 800B3748
  c->r[4]=c->r[3]|c->r[3]; // 800B374C
  c->lr=0x800B3754u; f_80265750(c); // 800B3750
  c->r[3]=c->r[1]+0x000000C8u; // 800B3754
  c->r[4]=c->r[1]+0x000000E0u; // 800B3758
  c->lr=0x800B3760u; f_800653BC(c); // 800B375C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3760
  fcmp(c,0,c->f[1],c->f[0]); // 800B3764
  if (!crb(c,0)) { goto L_800B377C; } // 800B3768
  c->r[3]=c->r[1]+0x000000C8u; // 800B376C
  {uint32_t ea=c->r[2]+0xFFFF8D64u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3770
  c->r[4]=c->r[3]|c->r[3]; // 800B3774
  c->lr=0x800B377Cu; f_80064C58(c); // 800B3778
L_800B377C:;
  c->r[3]=c->r[1]+0x000000C8u; // 800B377C
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3780
  c->r[4]=c->r[3]|c->r[3]; // 800B3784
  c->lr=0x800B378Cu; f_80064C58(c); // 800B3788
  c->r[3]=c->r[31]+0x00000010u; // 800B378C
  c->r[5]=c->r[1]+0x000000C8u; // 800B3790
  c->r[4]=c->r[3]|c->r[3]; // 800B3794
  c->lr=0x800B379Cu; f_80064C34(c); // 800B3798
L_800B379C:;
  c->r[3]=c->r[1]+0x000002B0u; // 800B379C
  c->r[4]=0u+0xFFFFFFFFu; // 800B37A0
  c->lr=0x800B37A8u; f_80046394(c); // 800B37A4
L_800B37A8:;
  W32(c->r[31]+0x0000003Cu,c->r[27]); // 800B37A8
  goto L_800B3814; // 800B37AC
L_800B37B0:;
  c->r[3]=c->r[1]+0x00000080u; // 800B37B0
  c->r[4]=c->r[31]+0x00000020u; // 800B37B4
  c->lr=0x800B37BCu; f_8003F484(c); // 800B37B8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B37BC
  c->r[6]=c->r[3]|c->r[3]; // 800B37C0
  c->r[4]=c->r[30]|c->r[30]; // 800B37C4
  c->r[5]=c->r[30]|c->r[30]; // 800B37C8
  c->r[3]=c->r[1]+0x0000008Cu; // 800B37CC
  c->lr=0x800B37D4u; f_800B30A4(c); // 800B37D0
  c->r[3]=c->r[31]+0x00000010u; // 800B37D4
  c->r[4]=c->r[1]+0x0000008Cu; // 800B37D8
  c->lr=0x800B37E0u; f_8003F468(c); // 800B37DC
  goto L_800B3814; // 800B37E0
L_800B37E4:;
  c->r[3]=c->r[1]+0x00000068u; // 800B37E4
  c->r[4]=c->r[31]+0x00000020u; // 800B37E8
  c->lr=0x800B37F0u; f_8003F484(c); // 800B37EC
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B37F0
  c->r[6]=c->r[3]|c->r[3]; // 800B37F4
  c->r[4]=c->r[30]|c->r[30]; // 800B37F8
  c->r[5]=c->r[30]|c->r[30]; // 800B37FC
  c->r[3]=c->r[1]+0x00000074u; // 800B3800
  c->lr=0x800B3808u; f_800B30A4(c); // 800B3804
  c->r[3]=c->r[31]+0x00000010u; // 800B3808
  c->r[4]=c->r[1]+0x00000074u; // 800B380C
  c->lr=0x800B3814u; f_8003F468(c); // 800B3810
L_800B3814:;
  c->r[3]=c->r[1]+0x000010A8u; // 800B3814
  c->r[4]=0u+0xFFFFFFFFu; // 800B3818
  c->lr=0x800B3820u; f_80046394(c); // 800B381C
  goto L_800B3854; // 800B3820
L_800B3824:;
  c->r[3]=c->r[1]+0x00000050u; // 800B3824
  c->r[4]=c->r[31]+0x00000020u; // 800B3828
  c->lr=0x800B3830u; f_8003F484(c); // 800B382C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3830
  c->r[6]=c->r[3]|c->r[3]; // 800B3834
  c->r[4]=c->r[30]|c->r[30]; // 800B3838
  c->r[5]=c->r[30]|c->r[30]; // 800B383C
  c->r[3]=c->r[1]+0x0000005Cu; // 800B3840
  c->lr=0x800B3848u; f_800B30A4(c); // 800B3844
  c->r[3]=c->r[31]+0x00000010u; // 800B3848
  c->r[4]=c->r[1]+0x0000005Cu; // 800B384C
  c->lr=0x800B3854u; f_8003F468(c); // 800B3850
L_800B3854:;
  {uint32_t ea=c->r[1]+0x0000028Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3854
  c->r[3]=c->r[1]+0x00000044u; // 800B3858
  {uint32_t ea=c->r[1]+0x0000029Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B385C
  {uint32_t ea=c->r[1]+0x000002ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3860
  c->lr=0x800B3868u; f_800521A0(c); // 800B3864
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3868
  c->r[3]=c->r[30]|c->r[30]; // 800B386C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3870
  c->r[4]=c->r[31]+0x00000010u; // 800B3874
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[31]); // 800B3878
  {uint32_t ea=c->r[2]+0xFFFF8D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B387C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 800B3880
  c->r[5]=c->r[1]+0x00000008u; // 800B3884
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3888
  {uint32_t ea=c->r[31]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B388C
  c->lr=0x800B3894u; f_800B02B4(c); // 800B3890
  c->r[0]=0u+0x00000006u; // 800B3894
  c->r[5]=c->r[1]+0x0000018Cu; // 800B3898
  c->r[4]=c->r[30]+0x00000940u; // 800B389C
  c->ctr=c->r[0]; // 800B38A0
L_800B38A4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B38A4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800B38A8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B38AC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800B38B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B38A4; } // 800B38B4
  c->r[3]=c->r[1]+0x00000280u; // 800B38B8
  c->r[4]=c->r[1]+0x00000190u; // 800B38BC
  c->r[5]=c->r[1]+0x00000220u; // 800B38C0
  c->lr=0x800B38C8u; f_802646E0(c); // 800B38C4
  {uint32_t ea=c->r[1]+0x0000022Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B38C8
  c->r[3]=c->r[1]+0x000000BCu; // 800B38CC
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B38D0
  {uint32_t ea=c->r[1]+0x0000024Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B38D4
  c->lr=0x800B38DCu; f_800521A0(c); // 800B38D8
  {uint32_t ea=c->r[1]+0x0000028Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B38DC
  c->r[3]=c->r[1]+0x00000038u; // 800B38E0
  {uint32_t ea=c->r[1]+0x0000029Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B38E4
  {uint32_t ea=c->r[1]+0x000002ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B38E8
  c->lr=0x800B38F0u; f_800521A0(c); // 800B38EC
  c->lr=0x800B38F4u; f_80128B5C(c); // 800B38F0
  c->r[4]=c->r[1]+0x00000038u; // 800B38F4
  c->r[5]=c->r[1]+0x000000BCu; // 800B38F8
  c->r[6]=0u+0x00000000u; // 800B38FC
  c->lr=0x800B3904u; f_8012A620(c); // 800B3900
  cmps(c,0,(int32_t)c->r[3],0); // 800B3904
  if (crb(c,2)) { goto L_800B3940; } // 800B3908
  c->r[3]=c->r[1]+0x00000220u; // 800B390C
  c->r[4]=c->r[1]+0x000000BCu; // 800B3910
  c->lr=0x800B3918u; f_80032FF4(c); // 800B3914
  c->r[3]=c->r[1]+0x00000280u; // 800B3918
  c->r[4]=c->r[1]+0x00000160u; // 800B391C
  c->lr=0x800B3924u; f_80264994(c); // 800B3920
  c->r[3]=c->r[1]+0x00000160u; // 800B3924
  c->r[4]=c->r[1]+0x00000220u; // 800B3928
  c->r[5]=c->r[1]+0x000001F0u; // 800B392C
  c->lr=0x800B3934u; f_802646E0(c); // 800B3930
  c->r[3]=c->r[30]+0x000008ECu; // 800B3934
  c->r[4]=c->r[1]+0x000001F0u; // 800B3938
  c->lr=0x800B3940u; f_8016A37C(c); // 800B393C
L_800B3940:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 800B3940
  c->r[3]=c->r[1]+0x0000002Cu; // 800B3944
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B3948
  {uint32_t ea=c->r[1]+0x0000028Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B394C
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800B3950
  {uint32_t ea=c->r[1]+0x0000029Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3954
  W32(c->r[1]+0x00000020u,c->r[0]); // 800B3958
  {uint32_t ea=c->r[1]+0x000002ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B395C
  c->lr=0x800B3964u; f_800521A0(c); // 800B3960
  c->lr=0x800B3968u; f_80128B5C(c); // 800B3964
  c->r[4]=c->r[1]+0x0000002Cu; // 800B3968
  c->r[5]=c->r[1]+0x000000BCu; // 800B396C
  c->r[6]=c->r[1]+0x0000001Cu; // 800B3970
  c->lr=0x800B3978u; f_8012A73C(c); // 800B3974
  cmps(c,0,(int32_t)c->r[3],0); // 800B3978
  if (crb(c,2)) { goto L_800B39B4; } // 800B397C
  c->r[3]=c->r[1]+0x00000220u; // 800B3980
  c->r[4]=c->r[1]+0x000000BCu; // 800B3984
  c->lr=0x800B398Cu; f_80032FF4(c); // 800B3988
  c->r[3]=c->r[1]+0x00000280u; // 800B398C
  c->r[4]=c->r[1]+0x00000130u; // 800B3990
  c->lr=0x800B3998u; f_80264994(c); // 800B3994
  c->r[3]=c->r[1]+0x00000130u; // 800B3998
  c->r[4]=c->r[1]+0x00000220u; // 800B399C
  c->r[5]=c->r[1]+0x000001C0u; // 800B39A0
  c->lr=0x800B39A8u; f_802646E0(c); // 800B39A4
  c->r[3]=c->r[30]+0x000008ECu; // 800B39A8
  c->r[4]=c->r[1]+0x000001C0u; // 800B39AC
  c->lr=0x800B39B4u; f_8016A37C(c); // 800B39B0
L_800B39B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800B39B4
  c->lr=0x800B39BCu; f_800AD308(c); // 800B39B8
  c->r[3]=R32(c->r[30]+0x00000000u); // 800B39BC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B39C0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800B39C4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800B39C8
  c->lr=0x800B39D0u; f_80128B5C(c); // 800B39CC
  {uint32_t ea=c->r[2]+0xFFFF8D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B39D0
  c->r[4]=c->r[1]+0x00000014u; // 800B39D4
  c->lr=0x800B39DCu; f_8012A160(c); // 800B39D8
  cmps(c,0,(int32_t)c->r[3],0); // 800B39DC
  if (crb(c,2)) { goto L_800B3A0C; } // 800B39E0
  c->r[3]=c->r[1]+0x0000011Cu; // 800B39E4
  c->r[4]=0u+0x00000000u; // 800B39E8
  c->lr=0x800B39F0u; f_800770B8(c); // 800B39EC
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B39F0
  c->r[3]=c->r[1]+0x0000000Cu; // 800B39F4
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B39F8
  c->r[4]=c->r[1]+0x0000011Cu; // 800B39FC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B3A00
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B3A04
  c->lr=0x800B3A0Cu; f_80077140(c); // 800B3A08
L_800B3A0C:;
  c->r[0]=0u+0x00001EC8u; // 800B3A0C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800B3A10
  c->r[11]=c->r[1]+0x00001EC0u; // 800B3A14
  {uint32_t ea=c->r[1]+0x00001EC0u; c->f[31]=RF64(ea);} // 800B3A18
  c->lr=0x800B3A20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B3A1C
  c->r[0]=R32(c->r[1]+0x00001ED4u); // 800B3A20
  c->lr=c->r[0]; // 800B3A24
  c->r[1]=c->r[1]+0x00001ED0u; // 800B3A28
  return; // 800B3A2C
}

// fn_800B3A30
void f_800B3A30(Ctx* __restrict c) {
  trace_call(0x800B3A30u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3A30
  c->r[0]=c->lr; // 800B3A34
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B3A38
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800B3A3C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800B3A40
  c->r[4]=c->r[3]+0x000008ECu; // 800B3A44
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3A48
  c->r[6]=0u+0x00000000u; // 800B3A4C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800B3A50
  c->r[31]=c->r[5]|c->r[5]; // 800B3A54
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3A58
  c->r[7]=0u+0x00000000u; // 800B3A5C
  W32(c->r[1]+0x00000078u,c->r[30]); // 800B3A60
  c->r[30]=c->r[3]|c->r[3]; // 800B3A64
  c->r[3]=c->r[3]+0x00000C88u; // 800B3A68
  c->r[5]=R32(c->r[5]+0x00000020u); // 800B3A6C
  c->lr=0x800B3A74u; f_800BB0C8(c); // 800B3A70
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3A74
  c->lr=0x800B3A7Cu; f_80128B5C(c); // 800B3A78
  c->r[4]=c->r[3]|c->r[3]; // 800B3A7C
  c->r[3]=c->r[1]+0x00000014u; // 800B3A80
  c->lr=0x800B3A88u; f_800AB510(c); // 800B3A84
  c->f[1]=c->f[31]; // 800B3A88
  c->r[4]=c->r[1]+0x00000014u; // 800B3A8C
  c->r[3]=c->r[1]+0x00000020u; // 800B3A90
  c->lr=0x800B3A98u; f_80064C58(c); // 800B3A94
  c->lr=0x800B3A9Cu; f_80128B5C(c); // 800B3A98
  c->r[4]=c->r[3]|c->r[3]; // 800B3A9C
  c->r[3]=c->r[1]+0x0000002Cu; // 800B3AA0
  c->r[4]=c->r[4]+0x00000020u; // 800B3AA4
  c->lr=0x800B3AACu; f_8003F484(c); // 800B3AA8
  c->r[3]=c->r[1]+0x00000038u; // 800B3AAC
  c->r[4]=c->r[1]+0x0000002Cu; // 800B3AB0
  c->r[5]=c->r[1]+0x00000020u; // 800B3AB4
  c->lr=0x800B3ABCu; f_80064C34(c); // 800B3AB8
  c->r[3]=c->r[31]+0x00000010u; // 800B3ABC
  c->r[4]=c->r[1]+0x00000038u; // 800B3AC0
  c->lr=0x800B3AC8u; f_8003F468(c); // 800B3AC4
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B3AC8
  c->r[4]=c->r[30]+0x000008D0u; // 800B3ACC
  c->r[3]=c->r[1]+0x00000044u; // 800B3AD0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B3AD4
  c->ctr=c->r[12]; // 800B3AD8
  if (true) { c->lr=0x800B3AE0u; dispatch(c,c->ctr); } // 800B3ADC
  c->r[3]=c->r[1]+0x00000008u; // 800B3AE0
  c->r[4]=c->r[1]+0x00000044u; // 800B3AE4
  c->lr=0x800B3AECu; f_80032FD8(c); // 800B3AE8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3AEC
  c->r[3]=c->r[30]+0x000008ECu; // 800B3AF0
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800B3AF4
  {uint32_t ea=c->r[30]+0x0000039Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3AF8
  c->lr=0x800B3B00u; f_80075394(c); // 800B3AFC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800B3B00
  c->r[0]=R32(c->r[1]+0x00000094u); // 800B3B04
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800B3B08
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800B3B0C
  c->r[30]=R32(c->r[1]+0x00000078u); // 800B3B10
  c->lr=c->r[0]; // 800B3B14
  c->r[1]=c->r[1]+0x00000090u; // 800B3B18
  return; // 800B3B1C
}

// fn_800B3B20
void f_800B3B20(Ctx* __restrict c) {
  trace_call(0x800B3B20u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3B20
  c->r[0]=c->lr; // 800B3B24
  W32(c->r[1]+0x00000114u,c->r[0]); // 800B3B28
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 800B3B2C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 800B3B30
  W32(c->r[1]+0x000000FCu,c->r[31]); // 800B3B34
  c->r[31]=c->r[4]|c->r[4]; // 800B3B38
  W32(c->r[1]+0x000000F8u,c->r[30]); // 800B3B3C
  c->r[30]=c->r[3]|c->r[3]; // 800B3B40
  c->r[4]=c->r[30]+0x000008D0u; // 800B3B44
  c->r[3]=c->r[1]+0x000000C4u; // 800B3B48
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B3B4C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B3B50
  c->ctr=c->r[12]; // 800B3B54
  if (true) { c->lr=0x800B3B5Cu; dispatch(c,c->ctr); } // 800B3B58
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3B5C
  c->lr=0x800B3B64u; f_80128B5C(c); // 800B3B60
  c->r[4]=c->r[3]|c->r[3]; // 800B3B64
  c->r[3]=c->r[1]+0x00000068u; // 800B3B68
  c->lr=0x800B3B70u; f_800AB510(c); // 800B3B6C
  c->f[1]=c->f[31]; // 800B3B70
  c->r[4]=c->r[1]+0x00000068u; // 800B3B74
  c->r[3]=c->r[1]+0x00000074u; // 800B3B78
  c->lr=0x800B3B80u; f_80064C58(c); // 800B3B7C
  c->lr=0x800B3B84u; f_80128B5C(c); // 800B3B80
  c->r[4]=c->r[3]|c->r[3]; // 800B3B84
  c->r[3]=c->r[1]+0x00000080u; // 800B3B88
  c->r[4]=c->r[4]+0x00000020u; // 800B3B8C
  c->lr=0x800B3B94u; f_8003F484(c); // 800B3B90
  c->r[3]=c->r[1]+0x0000008Cu; // 800B3B94
  c->r[4]=c->r[1]+0x00000080u; // 800B3B98
  c->r[5]=c->r[1]+0x00000074u; // 800B3B9C
  c->lr=0x800B3BA4u; f_80064C34(c); // 800B3BA0
  c->r[3]=c->r[31]+0x00000010u; // 800B3BA4
  c->r[4]=c->r[1]+0x0000008Cu; // 800B3BA8
  c->lr=0x800B3BB0u; f_8003F468(c); // 800B3BAC
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800B3BB0
  c->lr=0x800B3BB8u; f_80128B5C(c); // 800B3BB4
  c->r[4]=c->r[3]|c->r[3]; // 800B3BB8
  c->r[3]=c->r[1]+0x00000044u; // 800B3BBC
  c->lr=0x800B3BC4u; f_800AB510(c); // 800B3BC0
  c->f[1]=c->f[31]; // 800B3BC4
  c->r[4]=c->r[1]+0x00000044u; // 800B3BC8
  c->r[3]=c->r[1]+0x00000050u; // 800B3BCC
  c->lr=0x800B3BD4u; f_80064C58(c); // 800B3BD0
  {uint32_t ea=c->r[2]+0xFFFF8DC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3BD4
  c->r[3]=c->r[1]+0x0000005Cu; // 800B3BD8
  c->r[4]=c->r[1]+0x00000050u; // 800B3BDC
  c->lr=0x800B3BE4u; f_80064C58(c); // 800B3BE0
  c->r[3]=c->r[1]+0x000000A4u; // 800B3BE4
  c->r[4]=c->r[31]+0x00000010u; // 800B3BE8
  c->r[5]=c->r[1]+0x0000005Cu; // 800B3BEC
  c->lr=0x800B3BF4u; f_80064C34(c); // 800B3BF0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3BF4
  c->r[3]=c->r[1]+0x00000038u; // 800B3BF8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3BFC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3C00
  c->lr=0x800B3C08u; f_800521A0(c); // 800B3C04
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C08
  c->r[3]=c->r[1]+0x0000002Cu; // 800B3C0C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3C10
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 800B3C14
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3C18
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3C1C
  c->lr=0x800B3C24u; f_800521A0(c); // 800B3C20
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C24
  c->r[3]=c->r[30]|c->r[30]; // 800B3C28
  {uint32_t ea=c->r[2]+0xFFFF8D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3C2C
  c->r[4]=c->r[1]+0x000000A4u; // 800B3C30
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800B3C34
  c->r[5]=c->r[1]+0x00000008u; // 800B3C38
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3C3C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3C40
  {uint32_t ea=c->r[31]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B3C44
  c->lr=0x800B3C4Cu; f_800B02B4(c); // 800B3C48
  c->lr=0x800B3C50u; f_80128B5C(c); // 800B3C4C
  c->r[4]=c->r[3]|c->r[3]; // 800B3C50
  c->r[3]=c->r[1]+0x00000098u; // 800B3C54
  c->r[4]=c->r[4]+0x00000020u; // 800B3C58
  c->lr=0x800B3C60u; f_8003F484(c); // 800B3C5C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3C60
  c->r[3]=c->r[1]+0x00000020u; // 800B3C64
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3C68
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3C6C
  c->lr=0x800B3C74u; f_800521A0(c); // 800B3C70
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C74
  c->r[3]=c->r[1]+0x00000014u; // 800B3C78
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3C7C
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 800B3C80
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3C84
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3C88
  c->lr=0x800B3C90u; f_800521A0(c); // 800B3C8C
  c->r[3]=c->r[1]+0x00000098u; // 800B3C90
  c->r[4]=c->r[1]+0x00000014u; // 800B3C94
  c->lr=0x800B3C9Cu; f_80265924(c); // 800B3C98
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3C9C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800B3CA0
  fcmp(c,0,c->f[1],c->f[0]); // 800B3CA4
  if (!crb(c,1)) { goto L_800B3CD4; } // 800B3CA8
  c->r[3]=c->r[1]+0x000000B0u; // 800B3CAC
  c->r[4]=0u+0x00000000u; // 800B3CB0
  c->lr=0x800B3CB8u; f_800770B8(c); // 800B3CB4
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B3CB8
  c->r[3]=c->r[1]+0x0000000Cu; // 800B3CBC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B3CC0
  c->r[4]=c->r[1]+0x000000B0u; // 800B3CC4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B3CC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B3CCC
  c->lr=0x800B3CD4u; f_80077140(c); // 800B3CD0
L_800B3CD4:;
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 800B3CD4
  c->r[0]=R32(c->r[1]+0x00000114u); // 800B3CD8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 800B3CDC
  c->r[31]=R32(c->r[1]+0x000000FCu); // 800B3CE0
  c->r[30]=R32(c->r[1]+0x000000F8u); // 800B3CE4
  c->lr=c->r[0]; // 800B3CE8
  c->r[1]=c->r[1]+0x00000110u; // 800B3CEC
  return; // 800B3CF0
}

// fn_800B3CF4
void f_800B3CF4(Ctx* __restrict c) {
  trace_call(0x800B3CF4u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3CF4
  c->r[0]=c->lr; // 800B3CF8
  {uint32_t ea=c->r[2]+0xFFFF8D8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3CFC
  c->r[4]=c->r[3]+0x000008ECu; // 800B3D00
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800B3D04
  c->r[6]=0u+0x00000000u; // 800B3D08
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3D0C
  c->r[7]=0u+0x00000000u; // 800B3D10
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800B3D14
  c->r[31]=c->r[5]|c->r[5]; // 800B3D18
  W32(c->r[1]+0x000000D8u,c->r[30]); // 800B3D1C
  c->r[30]=c->r[3]|c->r[3]; // 800B3D20
  c->r[3]=c->r[3]+0x00000C88u; // 800B3D24
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 800B3D28
  c->lr=0x800B3D30u; f_800BB0C8(c); // 800B3D2C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3D30
  c->r[3]=c->r[1]+0x000000A4u; // 800B3D34
  {uint32_t ea=c->r[31]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3D38
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3D3C
  c->f[3]=c->f[1]; // 800B3D40
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B3D44
  c->lr=0x800B3D4Cu; f_803949B8(c); // 800B3D48
  c->lr=0x800B3D50u; f_80128B5C(c); // 800B3D4C
  c->r[4]=c->r[3]|c->r[3]; // 800B3D50
  c->r[3]=c->r[1]+0x00000014u; // 800B3D54
  c->lr=0x800B3D5Cu; f_800AB510(c); // 800B3D58
  c->r[5]=c->r[1]+0x00000014u; // 800B3D5C
  c->r[3]=c->r[1]+0x00000020u; // 800B3D60
  c->r[4]=c->r[1]+0x000000A4u; // 800B3D64
  c->lr=0x800B3D6Cu; f_80394B04(c); // 800B3D68
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B3D6C
  c->r[4]=c->r[30]+0x000008D0u; // 800B3D70
  c->r[3]=c->r[1]+0x00000074u; // 800B3D74
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B3D78
  c->ctr=c->r[12]; // 800B3D7C
  if (true) { c->lr=0x800B3D84u; dispatch(c,c->ctr); } // 800B3D80
  c->r[3]=c->r[1]+0x0000002Cu; // 800B3D84
  c->r[4]=c->r[1]+0x00000074u; // 800B3D88
  c->lr=0x800B3D90u; f_80032FD8(c); // 800B3D8C
  c->r[4]=c->r[1]+0x0000002Cu; // 800B3D90
  c->r[3]=c->r[1]+0x00000038u; // 800B3D94
  c->r[5]=c->r[1]+0x00000020u; // 800B3D98
  c->lr=0x800B3DA0u; f_80064C34(c); // 800B3D9C
  c->r[3]=c->r[31]+0x00000010u; // 800B3DA0
  c->r[4]=c->r[1]+0x00000038u; // 800B3DA4
  c->lr=0x800B3DACu; f_8003F468(c); // 800B3DA8
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B3DAC
  c->r[4]=c->r[30]+0x000008D0u; // 800B3DB0
  c->r[3]=c->r[1]+0x00000044u; // 800B3DB4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B3DB8
  c->ctr=c->r[12]; // 800B3DBC
  if (true) { c->lr=0x800B3DC4u; dispatch(c,c->ctr); } // 800B3DC0
  c->r[3]=c->r[1]+0x00000008u; // 800B3DC4
  c->r[4]=c->r[1]+0x00000044u; // 800B3DC8
  c->lr=0x800B3DD0u; f_80032FD8(c); // 800B3DCC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3DD0
  c->r[3]=c->r[30]+0x000008ECu; // 800B3DD4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800B3DD8
  {uint32_t ea=c->r[30]+0x0000039Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3DDC
  c->lr=0x800B3DE4u; f_80075394(c); // 800B3DE0
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800B3DE4
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800B3DE8
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800B3DEC
  c->lr=c->r[0]; // 800B3DF0
  c->r[1]=c->r[1]+0x000000E0u; // 800B3DF4
  return; // 800B3DF8
}

// fn_800B3DFC
void f_800B3DFC(Ctx* __restrict c) {
  trace_call(0x800B3DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B3DFC
  c->r[0]=c->lr; // 800B3E00
  W32(c->r[1]+0x00000144u,c->r[0]); // 800B3E04
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 800B3E08
  c->r[31]=c->r[4]|c->r[4]; // 800B3E0C
  W32(c->r[1]+0x00000138u,c->r[30]); // 800B3E10
  c->r[30]=c->r[3]|c->r[3]; // 800B3E14
  c->r[4]=c->r[30]+0x000008D0u; // 800B3E18
  c->r[3]=c->r[1]+0x00000104u; // 800B3E1C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 800B3E20
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B3E24
  c->ctr=c->r[12]; // 800B3E28
  if (true) { c->lr=0x800B3E30u; dispatch(c,c->ctr); } // 800B3E2C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3E30
  c->r[3]=c->r[1]+0x000000D4u; // 800B3E34
  {uint32_t ea=c->r[31]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3E38
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3E3C
  c->f[3]=c->f[1]; // 800B3E40
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B3E44
  c->lr=0x800B3E4Cu; f_803949B8(c); // 800B3E48
  c->lr=0x800B3E50u; f_80128B5C(c); // 800B3E4C
  c->r[4]=c->r[3]|c->r[3]; // 800B3E50
  c->r[3]=c->r[1]+0x00000040u; // 800B3E54
  c->r[4]=c->r[4]+0x00000020u; // 800B3E58
  c->lr=0x800B3E60u; f_8003F484(c); // 800B3E5C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3E60
  c->r[3]=c->r[1]+0x0000004Cu; // 800B3E64
  {uint32_t ea=c->r[1]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3E68
  {uint32_t ea=c->r[1]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3E6C
  c->lr=0x800B3E74u; f_800521A0(c); // 800B3E70
  c->r[3]=c->r[1]+0x00000058u; // 800B3E74
  c->r[4]=c->r[1]+0x0000004Cu; // 800B3E78
  c->r[5]=c->r[1]+0x00000040u; // 800B3E7C
  c->lr=0x800B3E84u; f_80064C74(c); // 800B3E80
  c->r[3]=c->r[1]+0x00000070u; // 800B3E84
  c->r[4]=c->r[1]+0x000000D4u; // 800B3E88
  c->r[5]=c->r[1]+0x00000058u; // 800B3E8C
  c->lr=0x800B3E94u; f_80394B04(c); // 800B3E90
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3E94
  c->r[3]=c->r[1]+0x00000070u; // 800B3E98
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800B3E9C
  c->lr=0x800B3EA4u; f_80065368(c); // 800B3EA0
  cmps(c,0,(int32_t)c->r[3],0); // 800B3EA4
  if (!crb(c,2)) { goto L_800B3EB8; } // 800B3EA8
  c->r[3]=c->r[1]+0x00000070u; // 800B3EAC
  c->r[4]=c->r[3]|c->r[3]; // 800B3EB0
  c->lr=0x800B3EB8u; f_80265750(c); // 800B3EB4
L_800B3EB8:;
  {uint32_t ea=c->r[1]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3EB8
  c->r[3]=c->r[1]+0x00000028u; // 800B3EBC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3EC0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3EC4
  c->lr=0x800B3ECCu; f_800521A0(c); // 800B3EC8
  c->r[3]=c->r[1]+0x00000034u; // 800B3ECC
  c->r[4]=c->r[1]+0x00000028u; // 800B3ED0
  c->r[5]=c->r[1]+0x00000070u; // 800B3ED4
  c->lr=0x800B3EDCu; f_80064C34(c); // 800B3ED8
  c->r[3]=c->r[31]+0x00000010u; // 800B3EDC
  c->r[4]=c->r[1]+0x00000034u; // 800B3EE0
  c->lr=0x800B3EE8u; f_8003F468(c); // 800B3EE4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3EE8
  c->r[3]=c->r[1]+0x0000001Cu; // 800B3EEC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3EF0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3EF4
  c->lr=0x800B3EFCu; f_800521A0(c); // 800B3EF8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3EFC
  c->r[3]=c->r[30]|c->r[30]; // 800B3F00
  {uint32_t ea=c->r[2]+0xFFFF8D68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3F04
  c->r[4]=c->r[31]+0x00000010u; // 800B3F08
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800B3F0C
  c->r[5]=c->r[1]+0x00000008u; // 800B3F10
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3F14
  {uint32_t ea=c->r[31]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3F18
  {uint32_t ea=c->r[31]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B3F1C
  c->lr=0x800B3F24u; f_800B02B4(c); // 800B3F20
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3F24
  c->r[3]=c->r[1]+0x00000064u; // 800B3F28
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3F2C
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B3F30
  c->lr=0x800B3F38u; f_800521A0(c); // 800B3F34
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B3F38
  c->r[3]=c->r[1]+0x000000A4u; // 800B3F3C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B3F40
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3F44
  c->f[3]=c->f[1]; // 800B3F48
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B3F4C
  c->lr=0x800B3F54u; f_803949B8(c); // 800B3F50
  c->r[3]=c->r[1]+0x00000064u; // 800B3F54
  c->r[4]=c->r[1]+0x000000A4u; // 800B3F58
  c->r[5]=c->r[3]|c->r[3]; // 800B3F5C
  c->lr=0x800B3F64u; f_80394B04(c); // 800B3F60
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3F64
  c->r[3]=c->r[1]+0x00000070u; // 800B3F68
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800B3F6C
  c->lr=0x800B3F74u; f_80065368(c); // 800B3F70
  cmps(c,0,(int32_t)c->r[3],0); // 800B3F74
  if (!crb(c,2)) { goto L_800B3F8C; } // 800B3F78
  c->r[3]=c->r[1]+0x00000064u; // 800B3F7C
  c->lr=0x800B3F84u; f_80065368(c); // 800B3F80
  cmps(c,0,(int32_t)c->r[3],0); // 800B3F84
  if (crb(c,2)) { goto L_800B3FB4; } // 800B3F88
L_800B3F8C:;
  c->r[3]=c->r[1]+0x00000090u; // 800B3F8C
  c->r[4]=0u+0x00000000u; // 800B3F90
  c->lr=0x800B3F98u; f_800770B8(c); // 800B3F94
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B3F98
  c->r[3]=c->r[1]+0x00000014u; // 800B3F9C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B3FA0
  c->r[4]=c->r[1]+0x00000090u; // 800B3FA4
  W32(c->r[1]+0x00000014u,c->r[5]); // 800B3FA8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800B3FAC
  c->lr=0x800B3FB4u; f_80077140(c); // 800B3FB0
L_800B3FB4:;
  c->r[3]=c->r[1]+0x00000064u; // 800B3FB4
  c->r[4]=c->r[3]|c->r[3]; // 800B3FB8
  c->lr=0x800B3FC0u; f_80265750(c); // 800B3FBC
  c->r[3]=c->r[1]+0x00000070u; // 800B3FC0
  c->r[4]=c->r[3]|c->r[3]; // 800B3FC4
  c->lr=0x800B3FCCu; f_80265750(c); // 800B3FC8
  c->r[3]=c->r[1]+0x00000064u; // 800B3FCC
  c->r[4]=c->r[1]+0x00000070u; // 800B3FD0
  c->lr=0x800B3FD8u; f_800653BC(c); // 800B3FD4
  {uint32_t ea=c->r[2]+0xFFFF8D88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B3FD8
  fcmp(c,0,c->f[1],c->f[0]); // 800B3FDC
  if (!crb(c,1)) { goto L_800B400C; } // 800B3FE0
  c->r[3]=c->r[1]+0x0000007Cu; // 800B3FE4
  c->r[4]=0u+0x00000000u; // 800B3FE8
  c->lr=0x800B3FF0u; f_800770B8(c); // 800B3FEC
  c->r[5]=R32(c->r[30]+0x00000000u); // 800B3FF0
  c->r[3]=c->r[1]+0x0000000Cu; // 800B3FF4
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B3FF8
  c->r[4]=c->r[1]+0x0000007Cu; // 800B3FFC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800B4000
  W32(c->r[1]+0x00000010u,c->r[0]); // 800B4004
  c->lr=0x800B400Cu; f_80077140(c); // 800B4008
L_800B400C:;
  c->r[0]=R32(c->r[1]+0x00000144u); // 800B400C
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 800B4010
  c->r[30]=R32(c->r[1]+0x00000138u); // 800B4014
  c->lr=c->r[0]; // 800B4018
  c->r[1]=c->r[1]+0x00000140u; // 800B401C
  return; // 800B4020
}

// fn_800B4024
void f_800B4024(Ctx* __restrict c) {
  trace_call(0x800B4024u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B4024
  c->r[0]=c->lr; // 800B4028
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B402C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800B4030
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800B4034
  c->f[31]=c->f[1]; // 800B4038
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800B403C
  c->r[31]=c->r[4]|c->r[4]; // 800B4040
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800B4044
  c->r[30]=c->r[3]|c->r[3]; // 800B4048
  c->r[3]=c->r[1]+0x00000074u; // 800B404C
  c->r[12]=R32(c->r[4]+0x000008D0u); // 800B4050
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B4054
  c->ctr=c->r[12]; // 800B4058
  c->r[4]=c->r[4]+0x000008D0u; // 800B405C
  if (true) { c->lr=0x800B4064u; dispatch(c,c->ctr); } // 800B4060
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4064
  c->r[3]=c->r[1]+0x00000038u; // 800B4068
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B406C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4070
  c->lr=0x800B4078u; f_800521A0(c); // 800B4074
  c->r[3]=R32(c->r[31]+0x000008C4u); // 800B4078
  c->r[4]=R32(c->r[31]+0x000008CCu); // 800B407C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B4080
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800B4084
  if (!crb(c,0)) { goto L_800B40A8; } // 800B4088
  c->r[3]=c->r[31]+0x000008A4u; // 800B408C
  c->r[4]=c->r[4]+0x00000001u; // 800B4090
  c->lr=0x800B4098u; f_800B0E28(c); // 800B4094
  c->r[4]=c->r[3]|c->r[3]; // 800B4098
  c->r[3]=c->r[1]+0x0000002Cu; // 800B409C
  c->lr=0x800B40A4u; f_8003F468(c); // 800B40A0
  goto L_800B4114; // 800B40A4
L_800B40A8:;
  c->lr=0x800B40ACu; f_80061A4C(c); // 800B40A8
  c->r[4]=c->r[3]|c->r[3]; // 800B40AC
  c->r[3]=c->r[1]+0x00000020u; // 800B40B0
  c->r[4]=c->r[4]+0x0000035Cu; // 800B40B4
  c->lr=0x800B40BCu; f_8003F484(c); // 800B40B8
  c->r[3]=c->r[1]+0x00000014u; // 800B40BC
  c->r[4]=c->r[1]+0x00000020u; // 800B40C0
  c->r[5]=c->r[1]+0x00000038u; // 800B40C4
  c->lr=0x800B40CCu; f_80064C74(c); // 800B40C8
  c->r[3]=c->r[1]+0x00000014u; // 800B40CC
  c->lr=0x800B40D4u; f_80065368(c); // 800B40D0
  cmps(c,0,(int32_t)c->r[3],0); // 800B40D4
  if (!crb(c,2)) { goto L_800B40F8; } // 800B40D8
  c->r[3]=c->r[1]+0x00000014u; // 800B40DC
  c->r[4]=c->r[3]|c->r[3]; // 800B40E0
  c->lr=0x800B40E8u; f_80265750(c); // 800B40E4
  c->f[1]=-c->f[31]; // 800B40E8
  c->r[3]=c->r[1]+0x00000014u; // 800B40EC
  c->r[4]=c->r[3]|c->r[3]; // 800B40F0
  c->lr=0x800B40F8u; f_80064C58(c); // 800B40F4
L_800B40F8:;
  c->r[3]=c->r[1]+0x00000008u; // 800B40F8
  c->r[4]=c->r[1]+0x00000020u; // 800B40FC
  c->r[5]=c->r[1]+0x00000014u; // 800B4100
  c->lr=0x800B4108u; f_80064C34(c); // 800B4104
  c->r[3]=c->r[1]+0x0000002Cu; // 800B4108
  c->r[4]=c->r[1]+0x00000008u; // 800B410C
  c->lr=0x800B4114u; f_8003F468(c); // 800B4110
L_800B4114:;
  c->r[3]=c->r[30]|c->r[30]; // 800B4114
  c->r[4]=c->r[1]+0x0000002Cu; // 800B4118
  c->r[5]=c->r[1]+0x00000038u; // 800B411C
  c->lr=0x800B4124u; f_80064C74(c); // 800B4120
  c->r[3]=c->r[1]+0x00000074u; // 800B4124
  c->r[4]=c->r[1]+0x00000044u; // 800B4128
  c->lr=0x800B4130u; f_80264994(c); // 800B412C
  c->r[3]=c->r[30]|c->r[30]; // 800B4130
  c->r[5]=c->r[30]|c->r[30]; // 800B4134
  c->r[4]=c->r[1]+0x00000044u; // 800B4138
  c->lr=0x800B4140u; f_80394B04(c); // 800B413C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4140
  c->r[3]=c->r[30]|c->r[30]; // 800B4144
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 800B4148
  c->lr=0x800B4150u; f_80065368(c); // 800B414C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4150
  if (!crb(c,2)) { goto L_800B4168; } // 800B4154
  c->r[3]=c->r[30]|c->r[30]; // 800B4158
  c->r[4]=c->r[30]|c->r[30]; // 800B415C
  c->lr=0x800B4164u; f_80265750(c); // 800B4160
  goto L_800B417C; // 800B4164
L_800B4168:;
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4168
  c->r[3]=c->r[30]|c->r[30]; // 800B416C
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4170
  c->f[3]=c->f[1]; // 800B4174
  c->lr=0x800B417Cu; f_80065358(c); // 800B4178
L_800B417C:;
  c->r[3]=c->r[30]|c->r[30]; // 800B417C
  c->r[5]=c->r[30]|c->r[30]; // 800B4180
  c->r[4]=c->r[1]+0x00000074u; // 800B4184
  c->lr=0x800B418Cu; f_80394B04(c); // 800B4188
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800B418C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B4190
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800B4194
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800B4198
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800B419C
  c->lr=c->r[0]; // 800B41A0
  c->r[1]=c->r[1]+0x000000C0u; // 800B41A4
  return; // 800B41A8
}

// fn_800B41AC
void f_800B41AC(Ctx* __restrict c) {
  trace_call(0x800B41ACu);
  {uint32_t ea=c->r[1]+0xFFFFED50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B41AC
  c->r[0]=c->lr; // 800B41B0
  W32(c->r[1]+0x000012B4u,c->r[0]); // 800B41B4
  c->r[11]=c->r[1]+0x000012B0u; // 800B41B8
  c->lr=0x800B41C0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B41BC
  c->r[31]=c->r[1]|c->r[1]; // 800B41C0
  c->r[7]=R32(c->r[3]+0x00000000u); // 800B41C4
  c->r[28]=c->r[4]|c->r[4]; // 800B41C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800B41CC
  c->r[27]=c->r[3]|c->r[3]; // 800B41D0
  c->r[30]=c->r[6]|c->r[6]; // 800B41D4
  c->r[29]=c->r[5]|c->r[5]; // 800B41D8
  W32(c->r[31]+0x00000068u,c->r[7]); // 800B41DC
  c->r[5]=c->r[30]|c->r[30]; // 800B41E0
  c->r[3]=c->r[31]+0x000000D0u; // 800B41E4
  c->r[4]=c->r[31]+0x00000068u; // 800B41E8
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 800B41EC
  c->lr=0x800B41F4u; f_800ABC54(c); // 800B41F0
  c->r[4]=0u+0x803E0000u; // 800B41F4
  c->r[3]=c->r[31]+0x000002F0u; // 800B41F8
  c->r[4]=c->r[4]+0xFFFF9D38u; // 800B41FC
  c->lr=0x800B4204u; f_800ABCC0(c); // 800B4200
  c->r[3]=c->r[28]|c->r[28]; // 800B4204
  c->r[4]=c->r[29]|c->r[29]; // 800B4208
  c->lr=0x800B4210u; f_800ABCE0(c); // 800B420C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800B4210
  cmpu(c,0,c->r[0],0x00000021u); // 800B4214
  if (crb(c,1)) { goto L_800B4234; } // 800B4218
  c->r[3]=0u+0x803F0000u; // 800B421C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800B4220
  c->r[3]=c->r[3]+0x00005554u; // 800B4224
  c->r[3]=R32(c->r[3]+c->r[0]); // 800B4228
  c->ctr=c->r[3]; // 800B422C
  if (true) { switch (c->ctr) { case 0x800B4234u: goto L_800B4234; case 0x800B424Cu: goto L_800B424C; case 0x800B43E8u: goto L_800B43E8; case 0x800B4478u: goto L_800B4478; case 0x800B4574u: goto L_800B4574; case 0x800B4618u: goto L_800B4618; case 0x800B4678u: goto L_800B4678; case 0x800B4750u: goto L_800B4750; case 0x800B4828u: goto L_800B4828; case 0x800B496Cu: goto L_800B496C; case 0x800B4AC4u: goto L_800B4AC4; case 0x800B4BECu: goto L_800B4BEC; case 0x800B4C28u: goto L_800B4C28; case 0x800B4D78u: goto L_800B4D78; case 0x800B4F58u: goto L_800B4F58; case 0x800B5034u: goto L_800B5034; case 0x800B5184u: goto L_800B5184; case 0x800B5258u: goto L_800B5258; case 0x800B5280u: goto L_800B5280; case 0x800B52C8u: goto L_800B52C8; case 0x800B5328u: goto L_800B5328; case 0x800B5410u: goto L_800B5410; default: break; } dispatch(c,c->ctr); return; } // 800B4230
L_800B4234:;
  c->r[3]=c->r[27]|c->r[27]; // 800B4234
  c->r[4]=c->r[28]|c->r[28]; // 800B4238
  c->r[5]=c->r[29]|c->r[29]; // 800B423C
  c->r[6]=c->r[30]|c->r[30]; // 800B4240
  c->lr=0x800B4248u; f_800CF9E0(c); // 800B4244
  goto L_800B5470; // 800B4248
L_800B424C:;
  c->r[4]=R32(c->r[27]+0x0000002Cu); // 800B424C
  c->r[0]=0u+0x00000000u; // 800B4250
  c->r[3]=c->r[27]|c->r[27]; // 800B4254
  W8(c->r[4]+0x00000030u,c->r[0]); // 800B4258
  c->lr=0x800B4260u; f_800ACB54(c); // 800B425C
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4260
  c->r[26]=c->r[3]|c->r[3]; // 800B4264
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4268
  fcmp(c,0,c->f[1],c->f[0]); // 800B426C
  if (!crb(c,1)) { goto L_800B4278; } // 800B4270
  {uint32_t ea=c->r[27]+0x000003A4u; WF32(ea,c->f[0]);} // 800B4274
L_800B4278:;
  c->r[3]=c->r[28]|c->r[28]; // 800B4278
  c->r[4]=c->r[29]|c->r[29]; // 800B427C
  c->lr=0x800B4284u; f_80076E44(c); // 800B4280
  c->r[5]=c->r[3]|c->r[3]; // 800B4284
  c->r[3]=c->r[31]+0x000002F0u; // 800B4288
  c->r[4]=c->r[31]+0x000000D0u; // 800B428C
  c->lr=0x800B4294u; f_80077408(c); // 800B4290
  c->r[3]=c->r[27]+0x000008D0u; // 800B4294
  c->lr=0x800B429Cu; f_80030FBC(c); // 800B4298
  cmps(c,0,(int32_t)c->r[3],0); // 800B429C
  if (crb(c,2)) { goto L_800B42C0; } // 800B42A0
  c->r[3]=c->r[27]+0x000008D0u; // 800B42A4
  c->lr=0x800B42ACu; f_80030FBC(c); // 800B42A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B42AC
  c->r[4]=0u+0x00000000u; // 800B42B0
  c->r[12]=R32(c->r[12]+0x00000054u); // 800B42B4
  c->ctr=c->r[12]; // 800B42B8
  if (true) { c->lr=0x800B42C0u; dispatch(c,c->ctr); } // 800B42BC
L_800B42C0:;
  c->r[3]=c->r[31]+0x00000378u; // 800B42C0
  c->lr=0x800B42C8u; f_800ACC48(c); // 800B42C4
  cmps(c,0,(int32_t)c->r[3],0); // 800B42C8
  if (crb(c,2)) { goto L_800B42FC; } // 800B42CC
  c->r[0]=R8(c->r[31]+0x0000037Cu); // 800B42D0
  cmps(c,0,(int32_t)c->r[0],32); // 800B42D4
  if (crb(c,2)) { goto L_800B42F0; } // 800B42D8
  c->r[3]=c->r[27]+0x000008ECu; // 800B42DC
  c->r[4]=c->r[31]+0x0000037Cu; // 800B42E0
  c->lr=0x800B42E8u; f_80075440(c); // 800B42E4
  W32(c->r[26]+0x00000014u,c->r[3]); // 800B42E8
  goto L_800B4304; // 800B42EC
L_800B42F0:;
  c->r[0]=0u+0xFFFFFFFFu; // 800B42F0
  W32(c->r[26]+0x00000014u,c->r[0]); // 800B42F4
  goto L_800B4304; // 800B42F8
L_800B42FC:;
  c->r[0]=0u+0xFFFFFFFFu; // 800B42FC
  W32(c->r[26]+0x00000014u,c->r[0]); // 800B4300
L_800B4304:;
  c->r[0]=R32(c->r[31]+0x00000374u); // 800B4304
  cmps(c,0,(int32_t)c->r[0],2); // 800B4308
  if (crb(c,0)) { goto L_800B4324; } // 800B430C
  c->r[3]=c->r[31]+0x000003B4u; // 800B4310
  c->lr=0x800B4318u; f_800797C0(c); // 800B4314
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800B4318
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800B431C
  W8(c->r[26]+0x0000006Cu,c->r[0]); // 800B4320
L_800B4324:;
  c->r[0]=R32(c->r[31]+0x00000374u); // 800B4324
  cmps(c,0,(int32_t)c->r[0],9); // 800B4328
  if (crb(c,0)) { goto L_800B5470; } // 800B432C
  {uint32_t ea=c->r[31]+0x000004A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4330
  c->r[3]=c->r[31]+0x0000007Cu; // 800B4334
  {uint32_t ea=c->r[31]+0x000004E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4338
  {uint32_t ea=c->r[31]+0x00000520u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B433C
  c->lr=0x800B4344u; f_800521A0(c); // 800B4340
  {uint32_t ea=c->r[31]+0x000003F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4344
  c->r[3]=c->r[31]+0x00000088u; // 800B4348
  {uint32_t ea=c->r[31]+0x00000430u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B434C
  {uint32_t ea=c->r[31]+0x0000046Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4350
  c->lr=0x800B4358u; f_800521A0(c); // 800B4354
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4358
  c->r[3]=c->r[31]+0x00000094u; // 800B435C
  c->f[2]=c->f[1]; // 800B4360
  c->f[3]=c->f[1]; // 800B4364
  c->lr=0x800B436Cu; f_800521A0(c); // 800B4368
  c->r[3]=c->r[31]+0x00000290u; // 800B436C
  c->lr=0x800B4374u; f_80264680(c); // 800B4370
  c->r[3]=c->r[31]+0x00000290u; // 800B4374
  {uint32_t ea=c->r[31]+0x00000094u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4378
  {uint32_t ea=c->r[31]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B437C
  c->r[4]=c->r[3]|c->r[3]; // 800B4380
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4384
  c->lr=0x800B438Cu; f_80264E54(c); // 800B4388
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B438C
  c->r[3]=c->r[26]+0x0000003Cu; // 800B4390
  {uint32_t ea=c->r[2]+0xFFFF8DFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4394
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4398
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B439C
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[0]); // 800B43A0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800B43A4
  {uint32_t ea=c->r[2]+0xFFFF8DA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B43A8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800B43AC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 800B43B0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800B43B4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800B43B8
  c->lr=0x800B43C0u; f_803949B8(c); // 800B43BC
  c->r[3]=c->r[26]+0x0000003Cu; // 800B43C0
  c->r[4]=c->r[31]+0x00000290u; // 800B43C4
  c->r[5]=c->r[3]|c->r[3]; // 800B43C8
  c->lr=0x800B43D0u; f_802646E0(c); // 800B43CC
  c->r[3]=c->r[26]+0x0000003Cu; // 800B43D0
  c->r[4]=c->r[31]+0x0000007Cu; // 800B43D4
  c->lr=0x800B43DCu; f_80032FF4(c); // 800B43D8
  {uint32_t ea=c->r[31]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B43DC
  {uint32_t ea=c->r[26]+0x00000038u; WF32(ea,c->f[0]);} // 800B43E0
  goto L_800B5470; // 800B43E4
L_800B43E8:;
  c->r[3]=c->r[27]|c->r[27]; // 800B43E8
  c->lr=0x800B43F0u; f_800ACA58(c); // 800B43EC
  c->r[30]=c->r[3]|c->r[3]; // 800B43F0
  c->r[3]=c->r[28]|c->r[28]; // 800B43F4
  c->r[4]=c->r[29]|c->r[29]; // 800B43F8
  c->lr=0x800B4400u; f_80076E44(c); // 800B43FC
  c->r[5]=c->r[3]|c->r[3]; // 800B4400
  c->r[3]=c->r[31]+0x000002F0u; // 800B4404
  c->r[4]=c->r[31]+0x000000D0u; // 800B4408
  c->lr=0x800B4410u; f_80077408(c); // 800B440C
  c->r[3]=R8(c->r[31]+0x0000037Eu); // 800B4410
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4414
  c->r[0]=R8(c->r[31]+0x0000037Du); // 800B4418
  c->r[6]=R8(c->r[31]+0x0000037Fu); // 800B441C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800B4420
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800B4424
  c->r[3]=R8(c->r[31]+0x0000037Cu); // 800B4428
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800B442C
  c->r[6]=rotl(c->r[5],8)&0xFFFFFF00u; // 800B4430
  c->r[5]=rotl(c->r[3],24)&0xFF000000u; // 800B4434
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 800B4438
  c->r[3]=c->r[7]+c->r[6]; // 800B443C
  c->r[0]=c->r[5]+c->r[0]; // 800B4440
  c->r[3]=c->r[3]+c->r[0]; // 800B4444
  c->r[0]=c->r[3]+0xAFAE0000u; // 800B4448
  cmpu(c,0,c->r[0],0x00004556u); // 800B444C
  if (!crb(c,2)) { goto L_800B4468; } // 800B4450
  c->r[3]=R32(c->r[27]+0x00000974u); // 800B4454
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B4458
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B445C
  W32(c->r[30]+0x00000010u,c->r[0]); // 800B4460
  goto L_800B5470; // 800B4464
L_800B4468:;
  c->r[3]=c->r[27]+0x000008ECu; // 800B4468
  c->lr=0x800B4470u; f_80075440(c); // 800B446C
  W32(c->r[30]+0x00000010u,c->r[3]); // 800B4470
  goto L_800B5470; // 800B4474
L_800B4478:;
  c->r[3]=c->r[27]|c->r[27]; // 800B4478
  c->lr=0x800B4480u; f_800AC8F8(c); // 800B447C
  c->r[30]=c->r[3]|c->r[3]; // 800B4480
  c->r[3]=c->r[28]|c->r[28]; // 800B4484
  c->r[4]=c->r[29]|c->r[29]; // 800B4488
  c->lr=0x800B4490u; f_80076E44(c); // 800B448C
  c->r[5]=c->r[3]|c->r[3]; // 800B4490
  c->r[3]=c->r[31]+0x000002F0u; // 800B4494
  c->r[4]=c->r[31]+0x000000D0u; // 800B4498
  c->lr=0x800B44A0u; f_80077408(c); // 800B449C
  c->r[3]=R8(c->r[31]+0x0000037Eu); // 800B44A0
  c->r[4]=c->r[31]+0x0000037Cu; // 800B44A4
  c->r[0]=R8(c->r[31]+0x0000037Du); // 800B44A8
  c->r[6]=R8(c->r[31]+0x0000037Fu); // 800B44AC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800B44B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800B44B4
  c->r[3]=R8(c->r[31]+0x0000037Cu); // 800B44B8
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800B44BC
  c->r[6]=rotl(c->r[5],8)&0xFFFFFF00u; // 800B44C0
  c->r[5]=rotl(c->r[3],24)&0xFF000000u; // 800B44C4
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 800B44C8
  c->r[3]=c->r[7]+c->r[6]; // 800B44CC
  c->r[0]=c->r[5]+c->r[0]; // 800B44D0
  c->r[3]=c->r[3]+c->r[0]; // 800B44D4
  c->r[0]=c->r[3]+0xAFAE0000u; // 800B44D8
  cmpu(c,0,c->r[0],0x00004556u); // 800B44DC
  if (!crb(c,2)) { goto L_800B44F8; } // 800B44E0
  c->r[3]=R32(c->r[27]+0x00000974u); // 800B44E4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B44E8
  c->r[0]=R32(c->r[3]+0x00000018u); // 800B44EC
  W32(c->r[30]+0x00000014u,c->r[0]); // 800B44F0
  goto L_800B4504; // 800B44F4
L_800B44F8:;
  c->r[3]=c->r[27]+0x000008ECu; // 800B44F8
  c->lr=0x800B4500u; f_80075440(c); // 800B44FC
  W32(c->r[30]+0x00000014u,c->r[3]); // 800B4500
L_800B4504:;
  {uint32_t ea=c->r[31]+0x000003F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4504
  c->r[3]=c->r[30]+0x00000024u; // 800B4508
  {uint32_t ea=c->r[31]+0x00000430u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B450C
  {uint32_t ea=c->r[31]+0x0000046Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4510
  c->lr=0x800B4518u; f_80065358(c); // 800B4514
  {uint32_t ea=c->r[31]+0x000004A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4518
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 800B451C
  c->r[0]=R32(c->r[31]+0x00000374u); // 800B4520
  cmps(c,0,(int32_t)c->r[0],7); // 800B4524
  if (!crb(c,1)) { goto L_800B4540; } // 800B4528
  c->r[3]=c->r[27]+0x000008ECu; // 800B452C
  c->r[4]=c->r[31]+0x00000520u; // 800B4530
  c->lr=0x800B4538u; f_80075440(c); // 800B4534
  W32(c->r[30]+0x00000018u,c->r[3]); // 800B4538
  goto L_800B4548; // 800B453C
L_800B4540:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 800B4540
  W32(c->r[30]+0x00000018u,c->r[0]); // 800B4544
L_800B4548:;
  c->r[0]=R32(c->r[31]+0x00000374u); // 800B4548
  cmps(c,0,(int32_t)c->r[0],8); // 800B454C
  if (!crb(c,1)) { goto L_800B4568; } // 800B4550
  c->r[3]=c->r[27]+0x000008ECu; // 800B4554
  c->r[4]=c->r[31]+0x0000055Cu; // 800B4558
  c->lr=0x800B4560u; f_80075440(c); // 800B455C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B4560
  goto L_800B5470; // 800B4564
L_800B4568:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 800B4568
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800B456C
  goto L_800B5470; // 800B4570
L_800B4574:;
  c->r[3]=c->r[27]|c->r[27]; // 800B4574
  c->lr=0x800B457Cu; f_800AC7C4(c); // 800B4578
  c->r[26]=c->r[3]|c->r[3]; // 800B457C
  c->r[3]=c->r[28]|c->r[28]; // 800B4580
  c->r[4]=c->r[29]|c->r[29]; // 800B4584
  c->lr=0x800B458Cu; f_80076E44(c); // 800B4588
  c->r[5]=c->r[3]|c->r[3]; // 800B458C
  c->r[3]=c->r[31]+0x000002F0u; // 800B4590
  c->r[4]=c->r[31]+0x000000D0u; // 800B4594
  c->lr=0x800B459Cu; f_80077408(c); // 800B4598
  c->r[0]=R32(c->r[31]+0x00000374u); // 800B459C
  cmps(c,0,(int32_t)c->r[0],1); // 800B45A0
  if (!crb(c,2)) { goto L_800B45C4; } // 800B45A4
  c->r[3]=c->r[31]+0x00000378u; // 800B45A8
  c->lr=0x800B45B0u; f_800B5850(c); // 800B45AC
  cmps(c,0,(int32_t)c->r[3],0); // 800B45B0
  if (crb(c,2)) { goto L_800B45C4; } // 800B45B4
  {uint32_t ea=c->r[31]+0x0000037Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B45B8
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[0]);} // 800B45BC
  goto L_800B5470; // 800B45C0
L_800B45C4:;
  c->r[0]=R32(c->r[31]+0x00000374u); // 800B45C4
  cmps(c,0,(int32_t)c->r[0],1); // 800B45C8
  if (!crb(c,1)) { goto L_800B460C; } // 800B45CC
  c->r[3]=c->r[31]+0x000003B4u; // 800B45D0
  c->lr=0x800B45D8u; f_800B5850(c); // 800B45D4
  cmps(c,0,(int32_t)c->r[3],0); // 800B45D8
  if (crb(c,2)) { goto L_800B460C; } // 800B45DC
  c->r[3]=c->r[27]+0x000008ECu; // 800B45E0
  c->r[4]=c->r[31]+0x0000037Cu; // 800B45E4
  c->lr=0x800B45ECu; f_80075440(c); // 800B45E8
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800B45EC
  c->r[3]=c->r[27]+0x000008ECu; // 800B45F0
  c->r[4]=c->r[31]+0x0000037Cu; // 800B45F4
  c->lr=0x800B45FCu; f_80075440(c); // 800B45F8
  W32(c->r[26]+0x00000020u,c->r[3]); // 800B45FC
  {uint32_t ea=c->r[31]+0x000003B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4600
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[0]);} // 800B4604
  goto L_800B5470; // 800B4608
L_800B460C:;
  {uint32_t ea=c->r[2]+0xFFFF8D9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B460C
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[0]);} // 800B4610
  goto L_800B5470; // 800B4614
L_800B4618:;
  c->r[3]=c->r[27]|c->r[27]; // 800B4618
  c->lr=0x800B4620u; f_800AC668(c); // 800B461C
  c->r[26]=c->r[3]|c->r[3]; // 800B4620
  c->r[3]=c->r[28]|c->r[28]; // 800B4624
  c->r[4]=c->r[29]|c->r[29]; // 800B4628
  c->lr=0x800B4630u; f_80076E44(c); // 800B462C
  c->r[5]=c->r[3]|c->r[3]; // 800B4630
  c->r[3]=c->r[31]+0x000002F0u; // 800B4634
  c->r[4]=c->r[31]+0x000000D0u; // 800B4638
  c->lr=0x800B4640u; f_80077408(c); // 800B463C
  c->r[3]=c->r[27]+0x000008ECu; // 800B4640
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4644
  c->lr=0x800B464Cu; f_80075440(c); // 800B4648
  W32(c->r[26]+0x0000002Cu,c->r[3]); // 800B464C
  c->r[3]=c->r[26]+0x00000020u; // 800B4650
  {uint32_t ea=c->r[31]+0x000003B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4654
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B4658
  {uint32_t ea=c->r[31]+0x000003F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B465C
  {uint32_t ea=c->r[31]+0x00000430u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B4660
  {uint32_t ea=c->r[31]+0x0000046Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B4664
  c->lr=0x800B466Cu; f_80065358(c); // 800B4668
  {uint32_t ea=c->r[31]+0x000004A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B466C
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[0]);} // 800B4670
  goto L_800B5470; // 800B4674
L_800B4678:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B4678
  cmps(c,0,(int32_t)c->r[3],0); // 800B467C
  if (crb(c,2)) { goto L_800B46D0; } // 800B4680
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B4684
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B4688
  c->ctr=c->r[12]; // 800B468C
  if (true) { c->lr=0x800B4694u; dispatch(c,c->ctr); } // 800B4690
  c->lr=0x800B4698u; f_8007A658(c); // 800B4694
  c->r[26]=c->r[3]|c->r[3]; // 800B4698
  c->r[3]=0u+0x00000020u; // 800B469C
  c->lr=0x800B46A4u; f_8007A658(c); // 800B46A0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800B46A4
  if (!crb(c,1)) { goto L_800B46C8; } // 800B46A8
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B46AC
  if (crb(c,2)) { goto L_800B46C0; } // 800B46B0
  W32(c->r[31]+0x0000028Cu,c->r[1]); // 800B46B4
  c->r[3]=c->r[26]|c->r[26]; // 800B46B8
  c->lr=0x800B46C0u; f_800B57E0(c); // 800B46BC
L_800B46C0:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B46C0
  goto L_800B4708; // 800B46C4
L_800B46C8:;
  c->r[0]=0u+0x00000000u; // 800B46C8
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B46CC
L_800B46D0:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B46D0
  c->r[0]=c->r[3]+0x00000001u; // 800B46D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B46D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B46DC
  c->r[0]=c->r[0]^c->r[3]; // 800B46E0
  c->r[0]=c->r[0]-c->r[3]; // 800B46E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B46E8
  c->r[0]=c->r[27]+c->r[0]; // 800B46EC
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B46F0
  if (crb(c,2)) { goto L_800B4704; } // 800B46F4
  W32(c->r[31]+0x00000274u,c->r[1]); // 800B46F8
  c->r[3]=c->r[26]|c->r[26]; // 800B46FC
  c->lr=0x800B4704u; f_800B57E0(c); // 800B4700
L_800B4704:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B4704
L_800B4708:;
  c->r[3]=c->r[28]|c->r[28]; // 800B4708
  c->r[4]=c->r[29]|c->r[29]; // 800B470C
  c->lr=0x800B4714u; f_80076E44(c); // 800B4710
  c->r[5]=c->r[3]|c->r[3]; // 800B4714
  c->r[3]=c->r[31]+0x000002F0u; // 800B4718
  c->r[4]=c->r[31]+0x000000D0u; // 800B471C
  c->lr=0x800B4724u; f_80077408(c); // 800B4720
  c->r[3]=c->r[27]+0x000008ECu; // 800B4724
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4728
  c->lr=0x800B4730u; f_80075440(c); // 800B472C
  W32(c->r[26]+0x00000020u,c->r[3]); // 800B4730
  {uint32_t ea=c->r[31]+0x000003B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4734
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B4738
  {uint32_t ea=c->r[31]+0x000003F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B473C
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[0]);} // 800B4740
  {uint32_t ea=c->r[31]+0x00000430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4744
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[0]);} // 800B4748
  goto L_800B5470; // 800B474C
L_800B4750:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B4750
  cmps(c,0,(int32_t)c->r[3],0); // 800B4754
  if (crb(c,2)) { goto L_800B47A8; } // 800B4758
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B475C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B4760
  c->ctr=c->r[12]; // 800B4764
  if (true) { c->lr=0x800B476Cu; dispatch(c,c->ctr); } // 800B4768
  c->lr=0x800B4770u; f_8007A658(c); // 800B476C
  c->r[26]=c->r[3]|c->r[3]; // 800B4770
  c->r[3]=0u+0x00000021u; // 800B4774
  c->lr=0x800B477Cu; f_8007A658(c); // 800B4778
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800B477C
  if (!crb(c,1)) { goto L_800B47A0; } // 800B4780
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B4784
  if (crb(c,2)) { goto L_800B4798; } // 800B4788
  W32(c->r[31]+0x0000025Cu,c->r[1]); // 800B478C
  c->r[3]=c->r[26]|c->r[26]; // 800B4790
  c->lr=0x800B4798u; f_800B5768(c); // 800B4794
L_800B4798:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B4798
  goto L_800B47E0; // 800B479C
L_800B47A0:;
  c->r[0]=0u+0x00000000u; // 800B47A0
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B47A4
L_800B47A8:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B47A8
  c->r[0]=c->r[3]+0x00000001u; // 800B47AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B47B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B47B4
  c->r[0]=c->r[0]^c->r[3]; // 800B47B8
  c->r[0]=c->r[0]-c->r[3]; // 800B47BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B47C0
  c->r[0]=c->r[27]+c->r[0]; // 800B47C4
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B47C8
  if (crb(c,2)) { goto L_800B47DC; } // 800B47CC
  W32(c->r[31]+0x00000244u,c->r[1]); // 800B47D0
  c->r[3]=c->r[26]|c->r[26]; // 800B47D4
  c->lr=0x800B47DCu; f_800B5768(c); // 800B47D8
L_800B47DC:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B47DC
L_800B47E0:;
  c->r[3]=c->r[28]|c->r[28]; // 800B47E0
  c->r[4]=c->r[29]|c->r[29]; // 800B47E4
  c->lr=0x800B47ECu; f_80076E44(c); // 800B47E8
  c->r[5]=c->r[3]|c->r[3]; // 800B47EC
  c->r[3]=c->r[31]+0x000002F0u; // 800B47F0
  c->r[4]=c->r[31]+0x000000D0u; // 800B47F4
  c->lr=0x800B47FCu; f_80077408(c); // 800B47F8
  c->r[3]=c->r[27]+0x000008ECu; // 800B47FC
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4800
  c->lr=0x800B4808u; f_80075440(c); // 800B4804
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800B4808
  {uint32_t ea=c->r[31]+0x000003B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B480C
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[0]);} // 800B4810
  {uint32_t ea=c->r[31]+0x000003F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4814
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[0]);} // 800B4818
  {uint32_t ea=c->r[31]+0x00000430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B481C
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[0]);} // 800B4820
  goto L_800B5470; // 800B4824
L_800B4828:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B4828
  cmps(c,0,(int32_t)c->r[3],0); // 800B482C
  if (crb(c,2)) { goto L_800B4880; } // 800B4830
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B4834
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B4838
  c->ctr=c->r[12]; // 800B483C
  if (true) { c->lr=0x800B4844u; dispatch(c,c->ctr); } // 800B4840
  c->lr=0x800B4848u; f_8007A658(c); // 800B4844
  c->r[26]=c->r[3]|c->r[3]; // 800B4848
  c->r[3]=0u+0x00000013u; // 800B484C
  c->lr=0x800B4854u; f_8007A658(c); // 800B4850
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800B4854
  if (!crb(c,1)) { goto L_800B4878; } // 800B4858
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B485C
  if (crb(c,2)) { goto L_800B4870; } // 800B4860
  W32(c->r[31]+0x0000022Cu,c->r[1]); // 800B4864
  c->r[3]=c->r[26]|c->r[26]; // 800B4868
  c->lr=0x800B4870u; f_800B5708(c); // 800B486C
L_800B4870:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B4870
  goto L_800B48B8; // 800B4874
L_800B4878:;
  c->r[0]=0u+0x00000000u; // 800B4878
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B487C
L_800B4880:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B4880
  c->r[0]=c->r[3]+0x00000001u; // 800B4884
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B4888
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B488C
  c->r[0]=c->r[0]^c->r[3]; // 800B4890
  c->r[0]=c->r[0]-c->r[3]; // 800B4894
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B4898
  c->r[0]=c->r[27]+c->r[0]; // 800B489C
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B48A0
  if (crb(c,2)) { goto L_800B48B4; } // 800B48A4
  W32(c->r[31]+0x00000214u,c->r[1]); // 800B48A8
  c->r[3]=c->r[26]|c->r[26]; // 800B48AC
  c->lr=0x800B48B4u; f_800B5708(c); // 800B48B0
L_800B48B4:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B48B4
L_800B48B8:;
  c->r[3]=c->r[28]|c->r[28]; // 800B48B8
  c->r[4]=c->r[29]|c->r[29]; // 800B48BC
  c->lr=0x800B48C4u; f_80076E44(c); // 800B48C0
  c->r[5]=c->r[3]|c->r[3]; // 800B48C4
  c->r[3]=c->r[31]+0x000002F0u; // 800B48C8
  c->r[4]=c->r[31]+0x000000D0u; // 800B48CC
  c->lr=0x800B48D4u; f_80077408(c); // 800B48D0
  c->r[3]=c->r[27]+0x000008ECu; // 800B48D4
  c->r[4]=c->r[31]+0x0000037Cu; // 800B48D8
  c->lr=0x800B48E0u; f_80075440(c); // 800B48DC
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800B48E0
  c->r[0]=0u+0x00000003u; // 800B48E4
  {uint32_t ea=c->r[2]+0xFFFF8D80u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B48E8
  c->r[4]=c->r[27]|c->r[27]; // 800B48EC
  W32(c->r[27]+0x0000105Cu,c->r[0]); // 800B48F0
  c->r[3]=c->r[31]+0x00000070u; // 800B48F4
  c->lr=0x800B48FCu; f_800B4024(c); // 800B48F8
  c->r[3]=c->r[26]+0x00000010u; // 800B48FC
  c->r[4]=c->r[31]+0x00000070u; // 800B4900
  c->lr=0x800B4908u; f_8003F468(c); // 800B4904
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4908
  c->r[3]=c->r[31]+0x00000058u; // 800B490C
  c->r[4]=c->r[31]+0x000003F4u; // 800B4910
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4914
  W32(c->r[31]+0x00000058u,c->r[0]); // 800B4918
  c->lr=0x800B4920u; f_80365B94(c); // 800B491C
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 800B4920
  c->r[3]=c->r[31]+0x00000060u; // 800B4924
  c->r[4]=c->r[31]+0x000003B8u; // 800B4928
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B492C
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4930
  W32(c->r[31]+0x00000060u,c->r[0]); // 800B4934
  c->lr=0x800B493Cu; f_80365B94(c); // 800B4938
  W32(c->r[31]+0x00000064u,c->r[3]); // 800B493C
  c->r[3]=c->r[31]+0x0000005Cu; // 800B4940
  c->lr=0x800B4948u; f_800772D8(c); // 800B4944
  c->r[26]=c->r[3]|c->r[3]; // 800B4948
  c->r[3]=c->r[31]+0x00000064u; // 800B494C
  c->lr=0x800B4954u; f_800772D8(c); // 800B4950
  c->r[4]=c->r[3]|c->r[3]; // 800B4954
  c->r[5]=c->r[26]|c->r[26]; // 800B4958
  c->r[3]=c->r[27]+0x00001054u; // 800B495C
  c->r[6]=0u+0x00000000u; // 800B4960
  c->lr=0x800B4968u; f_80181524(c); // 800B4964
  goto L_800B5470; // 800B4968
L_800B496C:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B496C
  cmps(c,0,(int32_t)c->r[3],0); // 800B4970
  if (crb(c,2)) { goto L_800B49C4; } // 800B4974
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B4978
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B497C
  c->ctr=c->r[12]; // 800B4980
  if (true) { c->lr=0x800B4988u; dispatch(c,c->ctr); } // 800B4984
  c->lr=0x800B498Cu; f_8007A658(c); // 800B4988
  c->r[26]=c->r[3]|c->r[3]; // 800B498C
  c->r[3]=0u+0x00000014u; // 800B4990
  c->lr=0x800B4998u; f_8007A658(c); // 800B4994
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800B4998
  if (!crb(c,1)) { goto L_800B49BC; } // 800B499C
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B49A0
  if (crb(c,2)) { goto L_800B49B4; } // 800B49A4
  W32(c->r[31]+0x000001FCu,c->r[1]); // 800B49A8
  c->r[3]=c->r[26]|c->r[26]; // 800B49AC
  c->lr=0x800B49B4u; f_800B5668(c); // 800B49B0
L_800B49B4:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B49B4
  goto L_800B49FC; // 800B49B8
L_800B49BC:;
  c->r[0]=0u+0x00000000u; // 800B49BC
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B49C0
L_800B49C4:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B49C4
  c->r[0]=c->r[3]+0x00000001u; // 800B49C8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B49CC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B49D0
  c->r[0]=c->r[0]^c->r[3]; // 800B49D4
  c->r[0]=c->r[0]-c->r[3]; // 800B49D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B49DC
  c->r[0]=c->r[27]+c->r[0]; // 800B49E0
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B49E4
  if (crb(c,2)) { goto L_800B49F8; } // 800B49E8
  W32(c->r[31]+0x000001E4u,c->r[1]); // 800B49EC
  c->r[3]=c->r[26]|c->r[26]; // 800B49F0
  c->lr=0x800B49F8u; f_800B5668(c); // 800B49F4
L_800B49F8:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B49F8
L_800B49FC:;
  c->r[3]=c->r[28]|c->r[28]; // 800B49FC
  c->r[4]=c->r[29]|c->r[29]; // 800B4A00
  c->lr=0x800B4A08u; f_80076E44(c); // 800B4A04
  c->r[5]=c->r[3]|c->r[3]; // 800B4A08
  c->r[3]=c->r[31]+0x000002F0u; // 800B4A0C
  c->r[4]=c->r[31]+0x000000D0u; // 800B4A10
  c->lr=0x800B4A18u; f_80077408(c); // 800B4A14
  c->r[3]=c->r[27]+0x000008ECu; // 800B4A18
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4A1C
  c->lr=0x800B4A24u; f_80075440(c); // 800B4A20
  W32(c->r[26]+0x00000050u,c->r[3]); // 800B4A24
  c->r[0]=0u+0x00000003u; // 800B4A28
  c->r[3]=c->r[31]+0x00000048u; // 800B4A2C
  c->r[4]=c->r[31]+0x0000055Cu; // 800B4A30
  {uint32_t ea=c->r[31]+0x000003B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4A34
  {uint32_t ea=c->r[26]+0x00000018u; WF32(ea,c->f[0]);} // 800B4A38
  {uint32_t ea=c->r[31]+0x000003F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4A3C
  {uint32_t ea=c->r[26]+0x00000010u; WF32(ea,c->f[0]);} // 800B4A40
  {uint32_t ea=c->r[31]+0x00000430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4A44
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B4A48
  {uint32_t ea=c->r[31]+0x0000046Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4A4C
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[0]);} // 800B4A50
  {uint32_t ea=c->r[31]+0x000004A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4A54
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[0]);} // 800B4A58
  {uint32_t ea=c->r[31]+0x000004E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4A5C
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[0]);} // 800B4A60
  W32(c->r[27]+0x0000105Cu,c->r[0]); // 800B4A64
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4A68
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4A6C
  W32(c->r[31]+0x00000048u,c->r[0]); // 800B4A70
  c->lr=0x800B4A78u; f_80365B94(c); // 800B4A74
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 800B4A78
  c->r[3]=c->r[31]+0x00000050u; // 800B4A7C
  c->r[4]=c->r[31]+0x00000520u; // 800B4A80
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4A84
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4A88
  W32(c->r[31]+0x00000050u,c->r[0]); // 800B4A8C
  c->lr=0x800B4A94u; f_80365B94(c); // 800B4A90
  W32(c->r[31]+0x00000054u,c->r[3]); // 800B4A94
  c->r[3]=c->r[31]+0x0000004Cu; // 800B4A98
  c->lr=0x800B4AA0u; f_800772D8(c); // 800B4A9C
  c->r[26]=c->r[3]|c->r[3]; // 800B4AA0
  c->r[3]=c->r[31]+0x00000054u; // 800B4AA4
  c->lr=0x800B4AACu; f_800772D8(c); // 800B4AA8
  c->r[4]=c->r[3]|c->r[3]; // 800B4AAC
  c->r[5]=c->r[26]|c->r[26]; // 800B4AB0
  c->r[3]=c->r[27]+0x00001054u; // 800B4AB4
  c->r[6]=0u+0x00000000u; // 800B4AB8
  c->lr=0x800B4AC0u; f_80181524(c); // 800B4ABC
  goto L_800B5470; // 800B4AC0
L_800B4AC4:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B4AC4
  cmps(c,0,(int32_t)c->r[3],0); // 800B4AC8
  if (crb(c,2)) { goto L_800B4B1C; } // 800B4ACC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B4AD0
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B4AD4
  c->ctr=c->r[12]; // 800B4AD8
  if (true) { c->lr=0x800B4AE0u; dispatch(c,c->ctr); } // 800B4ADC
  c->lr=0x800B4AE4u; f_8007A658(c); // 800B4AE0
  c->r[26]=c->r[3]|c->r[3]; // 800B4AE4
  c->r[3]=0u+0x00000015u; // 800B4AE8
  c->lr=0x800B4AF0u; f_8007A658(c); // 800B4AEC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800B4AF0
  if (!crb(c,1)) { goto L_800B4B14; } // 800B4AF4
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B4AF8
  if (crb(c,2)) { goto L_800B4B0C; } // 800B4AFC
  W32(c->r[31]+0x000001CCu,c->r[1]); // 800B4B00
  c->r[3]=c->r[26]|c->r[26]; // 800B4B04
  c->lr=0x800B4B0Cu; f_800B560C(c); // 800B4B08
L_800B4B0C:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B4B0C
  goto L_800B4B54; // 800B4B10
L_800B4B14:;
  c->r[0]=0u+0x00000000u; // 800B4B14
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B4B18
L_800B4B1C:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B4B1C
  c->r[0]=c->r[3]+0x00000001u; // 800B4B20
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B4B24
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B4B28
  c->r[0]=c->r[0]^c->r[3]; // 800B4B2C
  c->r[0]=c->r[0]-c->r[3]; // 800B4B30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B4B34
  c->r[0]=c->r[27]+c->r[0]; // 800B4B38
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B4B3C
  if (crb(c,2)) { goto L_800B4B50; } // 800B4B40
  W32(c->r[31]+0x000001B4u,c->r[1]); // 800B4B44
  c->r[3]=c->r[26]|c->r[26]; // 800B4B48
  c->lr=0x800B4B50u; f_800B560C(c); // 800B4B4C
L_800B4B50:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B4B50
L_800B4B54:;
  c->r[3]=c->r[28]|c->r[28]; // 800B4B54
  c->r[4]=c->r[29]|c->r[29]; // 800B4B58
  c->lr=0x800B4B60u; f_80076E44(c); // 800B4B5C
  c->r[5]=c->r[3]|c->r[3]; // 800B4B60
  c->r[3]=c->r[31]+0x000002F0u; // 800B4B64
  c->r[4]=c->r[31]+0x000000D0u; // 800B4B68
  c->lr=0x800B4B70u; f_80077408(c); // 800B4B6C
  c->r[3]=c->r[27]+0x000008ECu; // 800B4B70
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4B74
  c->lr=0x800B4B7Cu; f_80075440(c); // 800B4B78
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800B4B7C
  c->r[0]=0u+0x00000003u; // 800B4B80
  c->r[3]=c->r[31]+0x00000038u; // 800B4B84
  c->r[4]=c->r[31]+0x000003F4u; // 800B4B88
  W32(c->r[27]+0x0000105Cu,c->r[0]); // 800B4B8C
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4B90
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4B94
  W32(c->r[31]+0x00000038u,c->r[0]); // 800B4B98
  c->lr=0x800B4BA0u; f_80365B94(c); // 800B4B9C
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 800B4BA0
  c->r[3]=c->r[31]+0x00000040u; // 800B4BA4
  c->r[4]=c->r[31]+0x000003B8u; // 800B4BA8
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4BAC
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4BB0
  W32(c->r[31]+0x00000040u,c->r[0]); // 800B4BB4
  c->lr=0x800B4BBCu; f_80365B94(c); // 800B4BB8
  W32(c->r[31]+0x00000044u,c->r[3]); // 800B4BBC
  c->r[3]=c->r[31]+0x0000003Cu; // 800B4BC0
  c->lr=0x800B4BC8u; f_800772D8(c); // 800B4BC4
  c->r[26]=c->r[3]|c->r[3]; // 800B4BC8
  c->r[3]=c->r[31]+0x00000044u; // 800B4BCC
  c->lr=0x800B4BD4u; f_800772D8(c); // 800B4BD0
  c->r[4]=c->r[3]|c->r[3]; // 800B4BD4
  c->r[5]=c->r[26]|c->r[26]; // 800B4BD8
  c->r[3]=c->r[27]+0x00001054u; // 800B4BDC
  c->r[6]=0u+0x00000000u; // 800B4BE0
  c->lr=0x800B4BE8u; f_80181524(c); // 800B4BE4
  goto L_800B5470; // 800B4BE8
L_800B4BEC:;
  c->r[3]=c->r[27]|c->r[27]; // 800B4BEC
  c->lr=0x800B4BF4u; f_800AC524(c); // 800B4BF0
  c->r[26]=c->r[3]|c->r[3]; // 800B4BF4
  c->r[3]=c->r[28]|c->r[28]; // 800B4BF8
  c->r[4]=c->r[29]|c->r[29]; // 800B4BFC
  c->lr=0x800B4C04u; f_80076E44(c); // 800B4C00
  c->r[5]=c->r[3]|c->r[3]; // 800B4C04
  c->r[3]=c->r[31]+0x000002F0u; // 800B4C08
  c->r[4]=c->r[31]+0x000000D0u; // 800B4C0C
  c->lr=0x800B4C14u; f_80077408(c); // 800B4C10
  c->r[3]=c->r[27]+0x000008ECu; // 800B4C14
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4C18
  c->lr=0x800B4C20u; f_80075440(c); // 800B4C1C
  W32(c->r[26]+0x0000001Cu,c->r[3]); // 800B4C20
  goto L_800B5470; // 800B4C24
L_800B4C28:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B4C28
  cmps(c,0,(int32_t)c->r[3],0); // 800B4C2C
  if (crb(c,2)) { goto L_800B4C94; } // 800B4C30
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B4C34
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B4C38
  c->ctr=c->r[12]; // 800B4C3C
  if (true) { c->lr=0x800B4C44u; dispatch(c,c->ctr); } // 800B4C40
  c->lr=0x800B4C48u; f_8007A658(c); // 800B4C44
  c->r[26]=c->r[3]|c->r[3]; // 800B4C48
  c->r[3]=0u+0x0000000Du; // 800B4C4C
  c->lr=0x800B4C54u; f_8007A658(c); // 800B4C50
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800B4C54
  if (!crb(c,1)) { goto L_800B4C8C; } // 800B4C58
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B4C5C
  if (crb(c,2)) { goto L_800B4C84; } // 800B4C60
  c->r[4]=0u+0x803F0000u; // 800B4C64
  W32(c->r[31]+0x0000019Cu,c->r[1]); // 800B4C68
  c->r[3]=c->r[26]|c->r[26]; // 800B4C6C
  c->r[4]=c->r[4]+0x0000681Cu; // 800B4C70
  c->lr=0x800B4C78u; f_800761D8(c); // 800B4C74
  c->r[3]=0u+0x803F0000u; // 800B4C78
  c->r[3]=c->r[3]+0x0000661Cu; // 800B4C7C
  W32(c->r[26]+0x00000000u,c->r[3]); // 800B4C80
L_800B4C84:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B4C84
  goto L_800B4CE0; // 800B4C88
L_800B4C8C:;
  c->r[0]=0u+0x00000000u; // 800B4C8C
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B4C90
L_800B4C94:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B4C94
  c->r[0]=c->r[3]+0x00000001u; // 800B4C98
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B4C9C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B4CA0
  c->r[0]=c->r[0]^c->r[3]; // 800B4CA4
  c->r[0]=c->r[0]-c->r[3]; // 800B4CA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B4CAC
  c->r[0]=c->r[27]+c->r[0]; // 800B4CB0
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B4CB4
  if (crb(c,2)) { goto L_800B4CDC; } // 800B4CB8
  c->r[4]=0u+0x803F0000u; // 800B4CBC
  W32(c->r[31]+0x00000184u,c->r[1]); // 800B4CC0
  c->r[3]=c->r[26]|c->r[26]; // 800B4CC4
  c->r[4]=c->r[4]+0x0000681Cu; // 800B4CC8
  c->lr=0x800B4CD0u; f_800761D8(c); // 800B4CCC
  c->r[3]=0u+0x803F0000u; // 800B4CD0
  c->r[3]=c->r[3]+0x0000661Cu; // 800B4CD4
  W32(c->r[26]+0x00000000u,c->r[3]); // 800B4CD8
L_800B4CDC:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B4CDC
L_800B4CE0:;
  c->r[3]=c->r[28]|c->r[28]; // 800B4CE0
  c->r[4]=c->r[29]|c->r[29]; // 800B4CE4
  c->lr=0x800B4CECu; f_80076E44(c); // 800B4CE8
  c->r[5]=c->r[3]|c->r[3]; // 800B4CEC
  c->r[3]=c->r[31]+0x000002F0u; // 800B4CF0
  c->r[4]=c->r[31]+0x000000D0u; // 800B4CF4
  c->lr=0x800B4CFCu; f_80077408(c); // 800B4CF8
  c->r[3]=c->r[27]+0x000008ECu; // 800B4CFC
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4D00
  c->lr=0x800B4D08u; f_80075440(c); // 800B4D04
  W32(c->r[26]+0x00000010u,c->r[3]); // 800B4D08
  c->r[0]=0u+0x00000003u; // 800B4D0C
  c->r[3]=c->r[31]+0x00000028u; // 800B4D10
  c->r[4]=c->r[31]+0x000003F4u; // 800B4D14
  W32(c->r[27]+0x0000105Cu,c->r[0]); // 800B4D18
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4D1C
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4D20
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B4D24
  c->lr=0x800B4D2Cu; f_80365B94(c); // 800B4D28
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 800B4D2C
  c->r[3]=c->r[31]+0x00000030u; // 800B4D30
  c->r[4]=c->r[31]+0x000003B8u; // 800B4D34
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4D38
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4D3C
  W32(c->r[31]+0x00000030u,c->r[0]); // 800B4D40
  c->lr=0x800B4D48u; f_80365B94(c); // 800B4D44
  W32(c->r[31]+0x00000034u,c->r[3]); // 800B4D48
  c->r[3]=c->r[31]+0x0000002Cu; // 800B4D4C
  c->lr=0x800B4D54u; f_800772D8(c); // 800B4D50
  c->r[26]=c->r[3]|c->r[3]; // 800B4D54
  c->r[3]=c->r[31]+0x00000034u; // 800B4D58
  c->lr=0x800B4D60u; f_800772D8(c); // 800B4D5C
  c->r[4]=c->r[3]|c->r[3]; // 800B4D60
  c->r[5]=c->r[26]|c->r[26]; // 800B4D64
  c->r[3]=c->r[27]+0x00001054u; // 800B4D68
  c->r[6]=0u+0x00000000u; // 800B4D6C
  c->lr=0x800B4D74u; f_80181524(c); // 800B4D70
  goto L_800B5470; // 800B4D74
L_800B4D78:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B4D78
  cmps(c,0,(int32_t)c->r[3],0); // 800B4D7C
  if (crb(c,2)) { goto L_800B4DD0; } // 800B4D80
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B4D84
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B4D88
  c->ctr=c->r[12]; // 800B4D8C
  if (true) { c->lr=0x800B4D94u; dispatch(c,c->ctr); } // 800B4D90
  c->lr=0x800B4D98u; f_8007A658(c); // 800B4D94
  c->r[26]=c->r[3]|c->r[3]; // 800B4D98
  c->r[3]=0u+0x0000000Eu; // 800B4D9C
  c->lr=0x800B4DA4u; f_8007A658(c); // 800B4DA0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 800B4DA4
  if (!crb(c,1)) { goto L_800B4DC8; } // 800B4DA8
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B4DAC
  if (crb(c,2)) { goto L_800B4DC0; } // 800B4DB0
  W32(c->r[31]+0x0000016Cu,c->r[1]); // 800B4DB4
  c->r[3]=c->r[26]|c->r[26]; // 800B4DB8
  c->lr=0x800B4DC0u; f_800B5570(c); // 800B4DBC
L_800B4DC0:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B4DC0
  goto L_800B4E08; // 800B4DC4
L_800B4DC8:;
  c->r[0]=0u+0x00000000u; // 800B4DC8
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B4DCC
L_800B4DD0:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B4DD0
  c->r[0]=c->r[3]+0x00000001u; // 800B4DD4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B4DD8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B4DDC
  c->r[0]=c->r[0]^c->r[3]; // 800B4DE0
  c->r[0]=c->r[0]-c->r[3]; // 800B4DE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B4DE8
  c->r[0]=c->r[27]+c->r[0]; // 800B4DEC
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B4DF0
  if (crb(c,2)) { goto L_800B4E04; } // 800B4DF4
  W32(c->r[31]+0x00000154u,c->r[1]); // 800B4DF8
  c->r[3]=c->r[26]|c->r[26]; // 800B4DFC
  c->lr=0x800B4E04u; f_800B5570(c); // 800B4E00
L_800B4E04:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B4E04
L_800B4E08:;
  c->r[3]=c->r[28]|c->r[28]; // 800B4E08
  c->r[4]=c->r[29]|c->r[29]; // 800B4E0C
  c->lr=0x800B4E14u; f_80076E44(c); // 800B4E10
  c->r[5]=c->r[3]|c->r[3]; // 800B4E14
  c->r[3]=c->r[31]+0x000002F0u; // 800B4E18
  c->r[4]=c->r[31]+0x000000D0u; // 800B4E1C
  c->lr=0x800B4E24u; f_80077408(c); // 800B4E20
  c->r[3]=c->r[27]+0x000008ECu; // 800B4E24
  c->r[4]=c->r[31]+0x0000037Cu; // 800B4E28
  c->lr=0x800B4E30u; f_80075440(c); // 800B4E2C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4E30
  W32(c->r[26]+0x00000034u,c->r[3]); // 800B4E34
  c->r[3]=c->r[31]+0x000000C4u; // 800B4E38
  c->f[2]=c->f[1]; // 800B4E3C
  c->f[3]=c->f[1]; // 800B4E40
  c->lr=0x800B4E48u; f_800521A0(c); // 800B4E44
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B4E48
  c->r[3]=c->r[30]|c->r[30]; // 800B4E4C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800B4E50
  c->ctr=c->r[12]; // 800B4E54
  if (true) { c->lr=0x800B4E5Cu; dispatch(c,c->ctr); } // 800B4E58
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800B4E5C
  if (crb(c,2)) { goto L_800B4EE0; } // 800B4E60
  c->r[12]=R32(c->r[27]+0x000008D0u); // 800B4E64
  c->r[4]=c->r[27]+0x000008D0u; // 800B4E68
  c->r[3]=c->r[31]+0x000002C0u; // 800B4E6C
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B4E70
  c->ctr=c->r[12]; // 800B4E74
  if (true) { c->lr=0x800B4E7Cu; dispatch(c,c->ctr); } // 800B4E78
  c->r[3]=c->r[31]+0x000000B8u; // 800B4E7C
  c->r[4]=c->r[31]+0x000002C0u; // 800B4E80
  c->lr=0x800B4E88u; f_80032FD8(c); // 800B4E84
  c->r[3]=c->r[31]+0x000000ACu; // 800B4E88
  c->r[4]=c->r[30]+0x00000158u; // 800B4E8C
  c->r[5]=c->r[31]+0x000000B8u; // 800B4E90
  c->lr=0x800B4E98u; f_80064C74(c); // 800B4E94
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B4E98
  c->r[3]=c->r[31]+0x000000C4u; // 800B4E9C
  c->r[4]=c->r[31]+0x000000ACu; // 800B4EA0
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 800B4EA4
  c->lr=0x800B4EACu; f_8003F468(c); // 800B4EA8
  c->r[3]=c->r[31]+0x000000C4u; // 800B4EAC
  c->lr=0x800B4EB4u; f_80065368(c); // 800B4EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800B4EB4
  if (crb(c,2)) { goto L_800B4ED4; } // 800B4EB8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B4EBC
  c->r[3]=c->r[31]+0x000000C4u; // 800B4EC0
  c->f[2]=c->f[1]; // 800B4EC4
  c->f[3]=c->f[1]; // 800B4EC8
  c->lr=0x800B4ED0u; f_80065358(c); // 800B4ECC
  goto L_800B4EE0; // 800B4ED0
L_800B4ED4:;
  c->r[3]=c->r[31]+0x000000C4u; // 800B4ED4
  c->r[4]=c->r[3]|c->r[3]; // 800B4ED8
  c->lr=0x800B4EE0u; f_80265750(c); // 800B4EDC
L_800B4EE0:;
  c->r[3]=c->r[26]+0x00000048u; // 800B4EE0
  c->r[4]=c->r[31]+0x000000C4u; // 800B4EE4
  c->lr=0x800B4EECu; f_8003F468(c); // 800B4EE8
  c->r[0]=0u+0x00000003u; // 800B4EEC
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4EF0
  W32(c->r[27]+0x0000105Cu,c->r[0]); // 800B4EF4
  c->r[3]=c->r[31]+0x00000018u; // 800B4EF8
  c->r[4]=c->r[31]+0x000003F4u; // 800B4EFC
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4F00
  W32(c->r[31]+0x00000018u,c->r[0]); // 800B4F04
  c->lr=0x800B4F0Cu; f_80365B94(c); // 800B4F08
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 800B4F0C
  c->r[3]=c->r[31]+0x00000020u; // 800B4F10
  c->r[4]=c->r[31]+0x000003B8u; // 800B4F14
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B4F18
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B4F1C
  W32(c->r[31]+0x00000020u,c->r[0]); // 800B4F20
  c->lr=0x800B4F28u; f_80365B94(c); // 800B4F24
  W32(c->r[31]+0x00000024u,c->r[3]); // 800B4F28
  c->r[3]=c->r[31]+0x0000001Cu; // 800B4F2C
  c->lr=0x800B4F34u; f_800772D8(c); // 800B4F30
  c->r[28]=c->r[3]|c->r[3]; // 800B4F34
  c->r[3]=c->r[31]+0x00000024u; // 800B4F38
  c->lr=0x800B4F40u; f_800772D8(c); // 800B4F3C
  c->r[4]=c->r[3]|c->r[3]; // 800B4F40
  c->r[5]=c->r[28]|c->r[28]; // 800B4F44
  c->r[3]=c->r[27]+0x00001054u; // 800B4F48
  c->r[6]=0u+0x00000000u; // 800B4F4C
  c->lr=0x800B4F54u; f_80181524(c); // 800B4F50
  goto L_800B5470; // 800B4F54
L_800B4F58:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B4F58
  cmps(c,0,(int32_t)c->r[3],0); // 800B4F5C
  if (crb(c,2)) { goto L_800B4FB0; } // 800B4F60
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B4F64
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B4F68
  c->ctr=c->r[12]; // 800B4F6C
  if (true) { c->lr=0x800B4F74u; dispatch(c,c->ctr); } // 800B4F70
  c->lr=0x800B4F78u; f_8007A658(c); // 800B4F74
  c->r[30]=c->r[3]|c->r[3]; // 800B4F78
  c->r[3]=0u+0x00000017u; // 800B4F7C
  c->lr=0x800B4F84u; f_8007A658(c); // 800B4F80
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 800B4F84
  if (!crb(c,1)) { goto L_800B4FA8; } // 800B4F88
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B4F8C
  if (crb(c,2)) { goto L_800B4FA0; } // 800B4F90
  W32(c->r[31]+0x0000013Cu,c->r[1]); // 800B4F94
  c->r[3]=c->r[26]|c->r[26]; // 800B4F98
  c->lr=0x800B4FA0u; f_800B5490(c); // 800B4F9C
L_800B4FA0:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B4FA0
  goto L_800B4FE8; // 800B4FA4
L_800B4FA8:;
  c->r[0]=0u+0x00000000u; // 800B4FA8
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B4FAC
L_800B4FB0:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B4FB0
  c->r[0]=c->r[3]+0x00000001u; // 800B4FB4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B4FB8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B4FBC
  c->r[0]=c->r[0]^c->r[3]; // 800B4FC0
  c->r[0]=c->r[0]-c->r[3]; // 800B4FC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B4FC8
  c->r[0]=c->r[27]+c->r[0]; // 800B4FCC
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B4FD0
  if (crb(c,2)) { goto L_800B4FE4; } // 800B4FD4
  W32(c->r[31]+0x00000124u,c->r[1]); // 800B4FD8
  c->r[3]=c->r[26]|c->r[26]; // 800B4FDC
  c->lr=0x800B4FE4u; f_800B5490(c); // 800B4FE0
L_800B4FE4:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B4FE4
L_800B4FE8:;
  c->r[3]=c->r[28]|c->r[28]; // 800B4FE8
  c->r[4]=c->r[29]|c->r[29]; // 800B4FEC
  c->lr=0x800B4FF4u; f_80076E44(c); // 800B4FF0
  c->r[5]=c->r[3]|c->r[3]; // 800B4FF4
  c->r[3]=c->r[31]+0x000002F0u; // 800B4FF8
  c->r[4]=c->r[31]+0x000000D0u; // 800B4FFC
  c->lr=0x800B5004u; f_80077408(c); // 800B5000
  c->r[3]=c->r[27]+0x000008ECu; // 800B5004
  c->r[4]=c->r[31]+0x0000037Cu; // 800B5008
  c->lr=0x800B5010u; f_80075440(c); // 800B500C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5010
  W32(c->r[26]+0x00000034u,c->r[3]); // 800B5014
  c->r[3]=c->r[31]+0x000000A0u; // 800B5018
  c->f[2]=c->f[1]; // 800B501C
  c->f[3]=c->f[1]; // 800B5020
  c->lr=0x800B5028u; f_800521A0(c); // 800B5024
  c->r[0]=0u+0x00000001u; // 800B5028
  W32(c->r[27]+0x0000105Cu,c->r[0]); // 800B502C
  goto L_800B5470; // 800B5030
L_800B5034:;
  c->r[3]=R32(c->r[27]+0x00000054u); // 800B5034
  cmps(c,0,(int32_t)c->r[3],0); // 800B5038
  if (crb(c,2)) { goto L_800B50A0; } // 800B503C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B5040
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B5044
  c->ctr=c->r[12]; // 800B5048
  if (true) { c->lr=0x800B5050u; dispatch(c,c->ctr); } // 800B504C
  c->lr=0x800B5054u; f_8007A658(c); // 800B5050
  c->r[30]=c->r[3]|c->r[3]; // 800B5054
  c->r[3]=0u+0x0000000Fu; // 800B5058
  c->lr=0x800B5060u; f_8007A658(c); // 800B505C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 800B5060
  if (!crb(c,1)) { goto L_800B5098; } // 800B5064
  c->r[26]=addc(c,c->r[27],0x00000280u,0); cr0(c,c->r[26]); // 800B5068
  if (crb(c,2)) { goto L_800B5090; } // 800B506C
  c->r[4]=0u+0x803F0000u; // 800B5070
  W32(c->r[31]+0x0000010Cu,c->r[1]); // 800B5074
  c->r[3]=c->r[26]|c->r[26]; // 800B5078
  c->r[4]=c->r[4]+0x00006807u; // 800B507C
  c->lr=0x800B5084u; f_800761D8(c); // 800B5080
  c->r[3]=0u+0x803F0000u; // 800B5084
  c->r[3]=c->r[3]+0x000065BCu; // 800B5088
  W32(c->r[26]+0x00000000u,c->r[3]); // 800B508C
L_800B5090:;
  W32(c->r[27]+0x00000058u,c->r[26]); // 800B5090
  goto L_800B50EC; // 800B5094
L_800B5098:;
  c->r[0]=0u+0x00000000u; // 800B5098
  W32(c->r[27]+0x00000054u,c->r[0]); // 800B509C
L_800B50A0:;
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 800B50A0
  c->r[0]=c->r[3]+0x00000001u; // 800B50A4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B50A8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B50AC
  c->r[0]=c->r[0]^c->r[3]; // 800B50B0
  c->r[0]=c->r[0]-c->r[3]; // 800B50B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B50B8
  c->r[0]=c->r[27]+c->r[0]; // 800B50BC
  c->r[26]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[26]); // 800B50C0
  if (crb(c,2)) { goto L_800B50E8; } // 800B50C4
  c->r[4]=0u+0x803F0000u; // 800B50C8
  W32(c->r[31]+0x000000F4u,c->r[1]); // 800B50CC
  c->r[3]=c->r[26]|c->r[26]; // 800B50D0
  c->r[4]=c->r[4]+0x00006807u; // 800B50D4
  c->lr=0x800B50DCu; f_800761D8(c); // 800B50D8
  c->r[3]=0u+0x803F0000u; // 800B50DC
  c->r[3]=c->r[3]+0x000065BCu; // 800B50E0
  W32(c->r[26]+0x00000000u,c->r[3]); // 800B50E4
L_800B50E8:;
  W32(c->r[27]+0x00000054u,c->r[26]); // 800B50E8
L_800B50EC:;
  c->r[3]=c->r[28]|c->r[28]; // 800B50EC
  c->r[4]=c->r[29]|c->r[29]; // 800B50F0
  c->lr=0x800B50F8u; f_80076E44(c); // 800B50F4
  c->r[5]=c->r[3]|c->r[3]; // 800B50F8
  c->r[3]=c->r[31]+0x000002F0u; // 800B50FC
  c->r[4]=c->r[31]+0x000000D0u; // 800B5100
  c->lr=0x800B5108u; f_80077408(c); // 800B5104
  c->r[3]=c->r[27]+0x000008ECu; // 800B5108
  c->r[4]=c->r[31]+0x0000037Cu; // 800B510C
  c->lr=0x800B5114u; f_80075440(c); // 800B5110
  W32(c->r[26]+0x00000010u,c->r[3]); // 800B5114
  c->r[0]=0u+0x00000003u; // 800B5118
  c->r[3]=c->r[31]+0x00000008u; // 800B511C
  c->r[4]=c->r[31]+0x000003F4u; // 800B5120
  W32(c->r[27]+0x0000105Cu,c->r[0]); // 800B5124
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B5128
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B512C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B5130
  c->lr=0x800B5138u; f_80365B94(c); // 800B5134
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800B5138
  c->r[3]=c->r[31]+0x00000010u; // 800B513C
  c->r[4]=c->r[31]+0x000003B8u; // 800B5140
  c->r[5]=R32(c->r[27]+0x000008D8u); // 800B5144
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B5148
  W32(c->r[31]+0x00000010u,c->r[0]); // 800B514C
  c->lr=0x800B5154u; f_80365B94(c); // 800B5150
  W32(c->r[31]+0x00000014u,c->r[3]); // 800B5154
  c->r[3]=c->r[31]+0x0000000Cu; // 800B5158
  c->lr=0x800B5160u; f_800772D8(c); // 800B515C
  c->r[28]=c->r[3]|c->r[3]; // 800B5160
  c->r[3]=c->r[31]+0x00000014u; // 800B5164
  c->lr=0x800B516Cu; f_800772D8(c); // 800B5168
  c->r[4]=c->r[3]|c->r[3]; // 800B516C
  c->r[5]=c->r[28]|c->r[28]; // 800B5170
  c->r[3]=c->r[27]+0x00001054u; // 800B5174
  c->r[6]=0u+0x00000000u; // 800B5178
  c->lr=0x800B5180u; f_80181524(c); // 800B517C
  goto L_800B5470; // 800B5180
L_800B5184:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5184
  c->lr=0x800B518Cu; f_800AC3A4(c); // 800B5188
  c->r[0]=0u+0x00000000u; // 800B518C
  c->r[4]=c->r[13]+0xFFFF94B8u; // 800B5190
  W32(c->r[27]+0x00000894u,c->r[0]); // 800B5194
  c->r[30]=c->r[3]|c->r[3]; // 800B5198
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B519C
  cmps(c,0,(int32_t)c->r[3],0); // 800B51A0
  if (crb(c,2)) { goto L_800B520C; } // 800B51A4
  c->lr=0x800B51ACu; f_80067C50(c); // 800B51A8
  cmps(c,0,(int32_t)c->r[3],1); // 800B51AC
  if (!crb(c,2)) { goto L_800B520C; } // 800B51B0
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 800B51B4
  c->lr=0x800B51BCu; f_80067C50(c); // 800B51B8
  cmps(c,0,(int32_t)c->r[3],1); // 800B51BC
  if (crb(c,2)) { goto L_800B51D0; } // 800B51C0
  c->r[0]=0u+0x00000001u; // 800B51C4
  W32(c->r[27]+0x00000894u,c->r[0]); // 800B51C8
  goto L_800B520C; // 800B51CC
L_800B51D0:;
  c->lr=0x800B51D4u; f_80291D94(c); // 800B51D0
  c->r[3]=c->r[3]^0x80000000u; // 800B51D4
  c->r[0]=0u+0x43300000u; // 800B51D8
  W32(c->r[31]+0x0000128Cu,c->r[3]); // 800B51DC
  {uint32_t ea=c->r[2]+0xFFFF8D78u; c->f[3]=RF64(ea);} // 800B51E0
  W32(c->r[31]+0x00001288u,c->r[0]); // 800B51E4
  {uint32_t ea=c->r[2]+0xFFFF8D70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B51E8
  {uint32_t ea=c->r[31]+0x00001288u; c->f[2]=RF64(ea);} // 800B51EC
  {uint32_t ea=c->r[2]+0xFFFF8DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B51F0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800B51F4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800B51F8
  fcmp(c,0,c->f[1],c->f[0]); // 800B51FC
  if (!crb(c,1)) { goto L_800B520C; } // 800B5200
  c->r[0]=0u+0x00000001u; // 800B5204
  W32(c->r[27]+0x00000894u,c->r[0]); // 800B5208
L_800B520C:;
  c->r[3]=c->r[28]|c->r[28]; // 800B520C
  c->r[4]=c->r[29]|c->r[29]; // 800B5210
  c->lr=0x800B5218u; f_80076E44(c); // 800B5214
  c->r[5]=c->r[3]|c->r[3]; // 800B5218
  c->r[3]=c->r[31]+0x000002F0u; // 800B521C
  c->r[4]=c->r[31]+0x000000D0u; // 800B5220
  c->lr=0x800B5228u; f_80077408(c); // 800B5224
  c->r[3]=c->r[27]+0x000008ECu; // 800B5228
  c->r[4]=c->r[31]+0x0000037Cu; // 800B522C
  c->lr=0x800B5234u; f_80075440(c); // 800B5230
  W32(c->r[30]+0x00000034u,c->r[3]); // 800B5234
  c->r[3]=c->r[30]+0x00000028u; // 800B5238
  {uint32_t ea=c->r[31]+0x000003F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B523C
  {uint32_t ea=c->r[31]+0x00000430u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5240
  {uint32_t ea=c->r[31]+0x0000046Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B5244
  c->lr=0x800B524Cu; f_80065358(c); // 800B5248
  c->r[0]=R32(c->r[27]+0x00000894u); // 800B524C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800B5250
  goto L_800B5470; // 800B5254
L_800B5258:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5258
  c->lr=0x800B5260u; f_800AC268(c); // 800B525C
  c->r[3]=c->r[28]|c->r[28]; // 800B5260
  c->r[4]=c->r[29]|c->r[29]; // 800B5264
  c->lr=0x800B526Cu; f_80076E44(c); // 800B5268
  c->r[5]=c->r[3]|c->r[3]; // 800B526C
  c->r[3]=c->r[31]+0x000002F0u; // 800B5270
  c->r[4]=c->r[31]+0x000000D0u; // 800B5274
  c->lr=0x800B527Cu; f_80077408(c); // 800B5278
  goto L_800B5470; // 800B527C
L_800B5280:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5280
  c->lr=0x800B5288u; f_800AC148(c); // 800B5284
  cmps(c,0,(int32_t)c->r[3],0); // 800B5288
  c->r[26]=c->r[3]|c->r[3]; // 800B528C
  if (crb(c,2)) { goto L_800B5298; } // 800B5290
  c->r[26]=c->r[3]+0x00000010u; // 800B5294
L_800B5298:;
  c->r[3]=c->r[28]|c->r[28]; // 800B5298
  c->r[4]=c->r[29]|c->r[29]; // 800B529C
  c->lr=0x800B52A4u; f_80076E44(c); // 800B52A0
  c->r[5]=c->r[3]|c->r[3]; // 800B52A4
  c->r[3]=c->r[31]+0x000002F0u; // 800B52A8
  c->r[4]=c->r[31]+0x000000D0u; // 800B52AC
  c->lr=0x800B52B4u; f_80077408(c); // 800B52B0
  c->r[3]=c->r[26]|c->r[26]; // 800B52B4
  c->r[4]=c->r[27]+0x000008D0u; // 800B52B8
  c->r[5]=c->r[31]+0x00000378u; // 800B52BC
  c->lr=0x800B52C4u; f_8007A738(c); // 800B52C0
  goto L_800B5470; // 800B52C4
L_800B52C8:;
  c->r[3]=c->r[27]|c->r[27]; // 800B52C8
  c->lr=0x800B52D0u; f_800AC044(c); // 800B52CC
  c->r[30]=c->r[3]|c->r[3]; // 800B52D0
  c->r[3]=c->r[28]|c->r[28]; // 800B52D4
  c->r[4]=c->r[29]|c->r[29]; // 800B52D8
  c->lr=0x800B52E0u; f_80076E44(c); // 800B52DC
  c->r[5]=c->r[3]|c->r[3]; // 800B52E0
  c->r[3]=c->r[31]+0x000002F0u; // 800B52E4
  c->r[4]=c->r[31]+0x000000D0u; // 800B52E8
  c->lr=0x800B52F0u; f_80077408(c); // 800B52EC
  c->r[3]=R32(c->r[27]+0x00000050u); // 800B52F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B52F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B52F8
  c->ctr=c->r[12]; // 800B52FC
  if (true) { c->lr=0x800B5304u; dispatch(c,c->ctr); } // 800B5300
  cmps(c,0,(int32_t)c->r[3],9); // 800B5304
  if (crb(c,2)) { goto L_800B5310; } // 800B5308
  goto L_800B5328; // 800B530C
L_800B5310:;
  c->r[4]=R32(c->r[27]+0x00000050u); // 800B5310
  cmps(c,0,(int32_t)c->r[4],0); // 800B5314
  if (crb(c,2)) { goto L_800B5320; } // 800B5318
  c->r[4]=c->r[4]+0x00000010u; // 800B531C
L_800B5320:;
  c->r[3]=c->r[30]+0x00000010u; // 800B5320
  c->lr=0x800B5328u; f_800ABD3C(c); // 800B5324
L_800B5328:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5328
  c->lr=0x800B5330u; f_800ABEC8(c); // 800B532C
  c->r[30]=c->r[3]|c->r[3]; // 800B5330
  c->r[3]=c->r[28]|c->r[28]; // 800B5334
  c->r[4]=c->r[29]|c->r[29]; // 800B5338
  c->lr=0x800B5340u; f_80076E44(c); // 800B533C
  c->r[5]=c->r[3]|c->r[3]; // 800B5340
  c->r[3]=c->r[31]+0x000002F0u; // 800B5344
  c->r[4]=c->r[31]+0x000000D0u; // 800B5348
  c->lr=0x800B5350u; f_80077408(c); // 800B534C
  c->r[3]=R32(c->r[27]+0x00000050u); // 800B5350
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B5354
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B5358
  c->ctr=c->r[12]; // 800B535C
  if (true) { c->lr=0x800B5364u; dispatch(c,c->ctr); } // 800B5360
  cmps(c,0,(int32_t)c->r[3],10); // 800B5364
  if (crb(c,2)) { goto L_800B53BC; } // 800B5368
  if (!crb(c,0)) { goto L_800B537C; } // 800B536C
  cmps(c,0,(int32_t)c->r[3],9); // 800B5370
  if (!crb(c,0)) { goto L_800B5388; } // 800B5374
  goto L_800B53BC; // 800B5378
L_800B537C:;
  cmps(c,0,(int32_t)c->r[3],12); // 800B537C
  if (!crb(c,0)) { goto L_800B53BC; } // 800B5380
  goto L_800B53A4; // 800B5384
L_800B5388:;
  c->r[4]=R32(c->r[27]+0x00000050u); // 800B5388
  cmps(c,0,(int32_t)c->r[4],0); // 800B538C
  if (crb(c,2)) { goto L_800B5398; } // 800B5390
  c->r[4]=c->r[4]+0x00000010u; // 800B5394
L_800B5398:;
  c->r[3]=c->r[30]+0x00000010u; // 800B5398
  c->lr=0x800B53A0u; f_800ABD3C(c); // 800B539C
  goto L_800B53BC; // 800B53A0
L_800B53A4:;
  c->r[4]=R32(c->r[27]+0x00000050u); // 800B53A4
  cmps(c,0,(int32_t)c->r[4],0); // 800B53A8
  if (crb(c,2)) { goto L_800B53B4; } // 800B53AC
  c->r[4]=c->r[4]+0x00000010u; // 800B53B0
L_800B53B4:;
  c->r[3]=c->r[30]+0x00000010u; // 800B53B4
  c->lr=0x800B53BCu; f_800ABD3C(c); // 800B53B8
L_800B53BC:;
  c->r[3]=c->r[27]+0x000008ECu; // 800B53BC
  c->r[4]=c->r[31]+0x0000037Cu; // 800B53C0
  c->lr=0x800B53C8u; f_80075440(c); // 800B53C4
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800B53C8
  c->r[3]=c->r[27]+0x000008ECu; // 800B53CC
  c->r[4]=c->r[31]+0x000003F4u; // 800B53D0
  c->lr=0x800B53D8u; f_80075440(c); // 800B53D4
  W32(c->r[30]+0x00000030u,c->r[3]); // 800B53D8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 800B53DC
  c->lr=0x800B53E4u; f_800F39E4(c); // 800B53E0
  c->r[4]=R32(c->r[30]+0x00000020u); // 800B53E4
  c->lr=0x800B53ECu; f_801D5BAC(c); // 800B53E8
  c->r[5]=0u+0x80490000u; // 800B53EC
  c->r[4]=c->r[3]|c->r[3]; // 800B53F0
  c->r[3]=c->r[5]+0xFFFFEE9Cu; // 800B53F4
  c->lr=0x800B53FCu; f_80104358(c); // 800B53F8
  c->r[3]=c->r[3]+0x0000001Cu; // 800B53FC
  c->r[4]=c->r[31]+0x0000046Cu; // 800B5400
  c->lr=0x800B5408u; f_80075440(c); // 800B5404
  W32(c->r[30]+0x00000024u,c->r[3]); // 800B5408
  goto L_800B5470; // 800B540C
L_800B5410:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5410
  c->lr=0x800B5418u; f_800ABD9C(c); // 800B5414
  c->r[30]=c->r[3]|c->r[3]; // 800B5418
  c->r[3]=c->r[28]|c->r[28]; // 800B541C
  c->r[4]=c->r[29]|c->r[29]; // 800B5420
  c->lr=0x800B5428u; f_80076E44(c); // 800B5424
  c->r[5]=c->r[3]|c->r[3]; // 800B5428
  c->r[3]=c->r[31]+0x000002F0u; // 800B542C
  c->r[4]=c->r[31]+0x000000D0u; // 800B5430
  c->lr=0x800B5438u; f_80077408(c); // 800B5434
  c->r[3]=c->r[27]+0x000008ECu; // 800B5438
  c->r[4]=c->r[31]+0x0000037Cu; // 800B543C
  c->lr=0x800B5444u; f_80075440(c); // 800B5440
  W32(c->r[30]+0x00000014u,c->r[3]); // 800B5444
  c->r[0]=R32(c->r[31]+0x00000374u); // 800B5448
  cmps(c,0,(int32_t)c->r[0],1); // 800B544C
  if (!crb(c,1)) { goto L_800B5468; } // 800B5450
  c->r[3]=c->r[31]+0x000003B4u; // 800B5454
  c->lr=0x800B545Cu; f_800797C0(c); // 800B5458
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800B545C
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800B5460
  W8(c->r[30]+0x00000012u,c->r[0]); // 800B5464
L_800B5468:;
  c->r[0]=0u+0x00000000u; // 800B5468
  W32(c->r[27]+0x0000105Cu,c->r[0]); // 800B546C
L_800B5470:;
  c->r[10]=c->r[31]|c->r[31]; // 800B5470
  c->r[11]=c->r[10]+0x000012B0u; // 800B5474
  c->lr=0x800B547Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5478
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B547C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B5480
  c->r[1]=c->r[10]|c->r[10]; // 800B5484
  c->lr=c->r[0]; // 800B5488
  return; // 800B548C
}

// fn_800B5490
void f_800B5490(Ctx* __restrict c) {
  trace_call(0x800B5490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5490
  c->r[0]=c->lr; // 800B5494
  c->r[4]=0u+0x803F0000u; // 800B5498
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B549C
  c->r[4]=c->r[4]+0x0000686Eu; // 800B54A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B54A4
  c->r[31]=c->r[3]|c->r[3]; // 800B54A8
  c->lr=0x800B54B0u; f_800761D8(c); // 800B54AC
  c->r[3]=c->r[31]+0x00000010u; // 800B54B0
  c->lr=0x800B54B8u; f_800B54E4(c); // 800B54B4
  c->r[4]=0u+0x803F0000u; // 800B54B8
  c->r[3]=c->r[31]|c->r[31]; // 800B54BC
  c->r[4]=c->r[4]+0x0000675Cu; // 800B54C0
  c->r[0]=c->r[4]+0x00000028u; // 800B54C4
  W32(c->r[31]+0x00000000u,c->r[4]); // 800B54C8
  W32(c->r[31]+0x00000014u,c->r[0]); // 800B54CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B54D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B54D4
  c->lr=c->r[0]; // 800B54D8
  c->r[1]=c->r[1]+0x00000010u; // 800B54DC
  return; // 800B54E0
}

// fn_800B54E4
void f_800B54E4(Ctx* __restrict c) {
  trace_call(0x800B54E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B54E4
  c->r[0]=c->lr; // 800B54E8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B54EC
  c->r[4]=0u+0x803F0000u; // 800B54F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B54F4
  c->r[4]=c->r[4]+0x00003668u; // 800B54F8
  c->r[0]=0u+0x00000001u; // 800B54FC
  c->f[2]=c->f[1]; // 800B5500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5504
  c->f[3]=c->f[1]; // 800B5508
  c->r[31]=c->r[3]|c->r[3]; // 800B550C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B5510
  W32(c->r[3]+0x00000004u,c->r[4]); // 800B5514
  c->r[3]=c->r[3]+0x00000008u; // 800B5518
  c->lr=0x800B5520u; f_800521A0(c); // 800B551C
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5520
  c->r[3]=c->r[31]+0x00000018u; // 800B5524
  {uint32_t ea=c->r[2]+0xFFFF8DD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5528
  c->f[3]=c->f[1]; // 800B552C
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B5530
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 800B5534
  c->lr=0x800B553Cu; f_800521A0(c); // 800B5538
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B553C
  c->r[0]=0u+0xFFFFFFFFu; // 800B5540
  W32(c->r[31]+0x00000024u,c->r[0]); // 800B5544
  c->r[3]=c->r[31]+0x00000028u; // 800B5548
  c->f[2]=c->f[1]; // 800B554C
  c->f[3]=c->f[1]; // 800B5550
  c->lr=0x800B5558u; f_800521A0(c); // 800B5554
  c->r[3]=c->r[31]|c->r[31]; // 800B5558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B555C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5560
  c->lr=c->r[0]; // 800B5564
  c->r[1]=c->r[1]+0x00000010u; // 800B5568
  return; // 800B556C
}

// fn_800B5570
void f_800B5570(Ctx* __restrict c) {
  trace_call(0x800B5570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5570
  c->r[0]=c->lr; // 800B5574
  c->r[4]=0u+0x803F0000u; // 800B5578
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B557C
  c->r[4]=c->r[4]+0x00006811u; // 800B5580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5584
  c->r[31]=c->r[3]|c->r[3]; // 800B5588
  c->lr=0x800B5590u; f_800761D8(c); // 800B558C
  c->r[3]=c->r[31]+0x00000010u; // 800B5590
  c->lr=0x800B5598u; f_800B54E4(c); // 800B5594
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5598
  c->r[4]=0u+0x803F0000u; // 800B559C
  c->r[4]=c->r[4]+0x000065E4u; // 800B55A0
  c->r[3]=c->r[31]+0x00000048u; // 800B55A4
  c->r[0]=c->r[4]+0x00000028u; // 800B55A8
  c->f[2]=c->f[1]; // 800B55AC
  c->f[3]=c->f[1]; // 800B55B0
  W32(c->r[31]+0x00000000u,c->r[4]); // 800B55B4
  W32(c->r[31]+0x00000014u,c->r[0]); // 800B55B8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800B55BC
  c->lr=0x800B55C4u; f_800521A0(c); // 800B55C0
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B55C4
  c->r[3]=0u+0x803F0000u; // 800B55C8
  c->r[4]=0u+0x803F0000u; // 800B55CC
  c->r[5]=0u+0xFFFFFFFFu; // 800B55D0
  c->r[3]=c->r[3]+0x00001AD8u; // 800B55D4
  c->r[0]=0u+0x00000000u; // 800B55D8
  c->r[4]=c->r[4]+0x00003280u; // 800B55DC
  W32(c->r[31]+0x00000054u,c->r[3]); // 800B55E0
  c->r[3]=c->r[31]|c->r[31]; // 800B55E4
  W32(c->r[31]+0x00000058u,c->r[5]); // 800B55E8
  W32(c->r[31]+0x00000060u,c->r[4]); // 800B55EC
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800B55F0
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800B55F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B55F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B55FC
  c->lr=c->r[0]; // 800B5600
  c->r[1]=c->r[1]+0x00000010u; // 800B5604
  return; // 800B5608
}

// fn_800B560C
void f_800B560C(Ctx* __restrict c) {
  trace_call(0x800B560Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B560C
  c->r[0]=c->lr; // 800B5610
  c->r[4]=c->r[13]+0xFFFF8151u; // 800B5614
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B561C
  c->r[31]=c->r[3]|c->r[3]; // 800B5620
  c->lr=0x800B5628u; f_800761D8(c); // 800B5624
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5628
  c->r[4]=0u+0x803F0000u; // 800B562C
  c->r[4]=c->r[4]+0x00006694u; // 800B5630
  c->r[3]=c->r[31]+0x00000010u; // 800B5634
  c->f[2]=c->f[1]; // 800B5638
  W32(c->r[31]+0x00000000u,c->r[4]); // 800B563C
  c->f[3]=c->f[1]; // 800B5640
  c->lr=0x800B5648u; f_800521A0(c); // 800B5644
  c->r[0]=0u+0xFFFFFFFFu; // 800B5648
  c->r[3]=c->r[31]|c->r[31]; // 800B564C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800B5650
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5654
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5658
  c->lr=c->r[0]; // 800B565C
  c->r[1]=c->r[1]+0x00000010u; // 800B5660
  return; // 800B5664
}

// fn_800B5668
void f_800B5668(Ctx* __restrict c) {
  trace_call(0x800B5668u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5668
  c->r[0]=c->lr; // 800B566C
  c->r[4]=0u+0x803F0000u; // 800B5670
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5674
  c->r[4]=c->r[4]+0x00006831u; // 800B5678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B567C
  c->r[31]=c->r[3]|c->r[3]; // 800B5680
  c->lr=0x800B5688u; f_800761D8(c); // 800B5684
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5688
  c->r[3]=0u+0x803F0000u; // 800B568C
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B5690
  c->r[3]=c->r[3]+0x000066BCu; // 800B5694
  {uint32_t ea=c->r[2]+0xFFFF8E00u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B5698
  c->f[2]=c->f[1]; // 800B569C
  {uint32_t ea=c->r[2]+0xFFFF8D64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B56A0
  c->f[3]=c->f[1]; // 800B56A4
  W32(c->r[31]+0x00000000u,c->r[3]); // 800B56A8
  c->r[3]=c->r[31]+0x0000002Cu; // 800B56AC
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[5]);} // 800B56B0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[4]);} // 800B56B4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800B56B8
  c->lr=0x800B56C0u; f_800521A0(c); // 800B56BC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B56C0
  c->r[3]=c->r[31]+0x00000038u; // 800B56C4
  c->f[2]=c->f[1]; // 800B56C8
  c->f[3]=c->f[1]; // 800B56CC
  c->lr=0x800B56D4u; f_800521A0(c); // 800B56D0
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B56D4
  c->r[3]=c->r[31]+0x00000044u; // 800B56D8
  c->f[2]=c->f[1]; // 800B56DC
  c->f[3]=c->f[1]; // 800B56E0
  c->lr=0x800B56E8u; f_800521A0(c); // 800B56E4
  c->r[0]=0u+0xFFFFFFFFu; // 800B56E8
  c->r[3]=c->r[31]|c->r[31]; // 800B56EC
  W32(c->r[31]+0x00000050u,c->r[0]); // 800B56F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B56F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B56F8
  c->lr=c->r[0]; // 800B56FC
  c->r[1]=c->r[1]+0x00000010u; // 800B5700
  return; // 800B5704
}

// fn_800B5708
void f_800B5708(Ctx* __restrict c) {
  trace_call(0x800B5708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5708
  c->r[0]=c->lr; // 800B570C
  c->r[4]=0u+0x803F0000u; // 800B5710
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5714
  c->r[4]=c->r[4]+0x0000683Au; // 800B5718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B571C
  c->r[31]=c->r[3]|c->r[3]; // 800B5720
  c->lr=0x800B5728u; f_800761D8(c); // 800B5724
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5728
  c->r[4]=0u+0x803F0000u; // 800B572C
  c->r[4]=c->r[4]+0x000066E4u; // 800B5730
  c->r[3]=c->r[31]+0x00000010u; // 800B5734
  c->f[2]=c->f[1]; // 800B5738
  W32(c->r[31]+0x00000000u,c->r[4]); // 800B573C
  c->f[3]=c->f[1]; // 800B5740
  c->lr=0x800B5748u; f_800521A0(c); // 800B5744
  c->r[0]=0u+0xFFFFFFFFu; // 800B5748
  c->r[3]=c->r[31]|c->r[31]; // 800B574C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800B5750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5754
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5758
  c->lr=c->r[0]; // 800B575C
  c->r[1]=c->r[1]+0x00000010u; // 800B5760
  return; // 800B5764
}

// fn_800B5768
void f_800B5768(Ctx* __restrict c) {
  trace_call(0x800B5768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5768
  c->r[0]=c->lr; // 800B576C
  c->r[4]=0u+0x803F0000u; // 800B5770
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5774
  c->r[4]=c->r[4]+0x00006844u; // 800B5778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B577C
  c->r[31]=c->r[3]|c->r[3]; // 800B5780
  c->lr=0x800B5788u; f_800761D8(c); // 800B5784
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5788
  c->r[4]=0u+0x803F0000u; // 800B578C
  c->r[4]=c->r[4]+0x0000670Cu; // 800B5790
  c->r[3]=c->r[31]+0x00000010u; // 800B5794
  c->f[2]=c->f[1]; // 800B5798
  W32(c->r[31]+0x00000000u,c->r[4]); // 800B579C
  c->f[3]=c->f[1]; // 800B57A0
  c->lr=0x800B57A8u; f_800521A0(c); // 800B57A4
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B57A8
  c->r[0]=0u+0x00000000u; // 800B57AC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B57B0
  c->r[3]=c->r[31]|c->r[31]; // 800B57B4
  {uint32_t ea=c->r[2]+0xFFFF8DE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B57B8
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800B57BC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[2]);} // 800B57C0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 800B57C4
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800B57C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B57CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B57D0
  c->lr=c->r[0]; // 800B57D4
  c->r[1]=c->r[1]+0x00000010u; // 800B57D8
  return; // 800B57DC
}

// fn_800B57E0
void f_800B57E0(Ctx* __restrict c) {
  trace_call(0x800B57E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B57E0
  c->r[0]=c->lr; // 800B57E4
  c->r[4]=0u+0x803F0000u; // 800B57E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B57EC
  c->r[4]=c->r[4]+0x00006853u; // 800B57F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B57F4
  c->r[31]=c->r[3]|c->r[3]; // 800B57F8
  c->lr=0x800B5800u; f_800761D8(c); // 800B57FC
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5800
  c->r[4]=0u+0x803F0000u; // 800B5804
  c->r[4]=c->r[4]+0x00006734u; // 800B5808
  c->r[3]=c->r[31]+0x00000010u; // 800B580C
  c->f[2]=c->f[1]; // 800B5810
  W32(c->r[31]+0x00000000u,c->r[4]); // 800B5814
  c->f[3]=c->f[1]; // 800B5818
  c->lr=0x800B5820u; f_800521A0(c); // 800B581C
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5820
  c->r[0]=0u+0x00000000u; // 800B5824
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5828
  c->r[3]=c->r[31]|c->r[31]; // 800B582C
  W32(c->r[31]+0x00000020u,c->r[0]); // 800B5830
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 800B5834
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800B5838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B583C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5840
  c->lr=c->r[0]; // 800B5844
  c->r[1]=c->r[1]+0x00000010u; // 800B5848
  return; // 800B584C
}

// fn_800B5850
void f_800B5850(Ctx* __restrict c) {
  trace_call(0x800B5850u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B5850
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B5854
  c->r[0]=cntlz(c->r[0]); // 800B5858
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B585C
  return; // 800B5860
}

// fn_800B5864
void f_800B5864(Ctx* __restrict c) {
  trace_call(0x800B5864u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5864
  c->r[0]=c->lr; // 800B5868
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B586C
  c->r[11]=c->r[1]+0x00000020u; // 800B5870
  c->lr=0x800B5878u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5874
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5878
  c->r[31]=c->r[4]|c->r[4]; // 800B587C
  c->r[29]=c->r[3]|c->r[3]; // 800B5880
  c->r[4]=0u+0x00000007u; // 800B5884
  {uint32_t ea=c->r[3]+0x000008F0u; WF32(ea,c->f[0]);} // 800B5888
  c->lr=0x800B5890u; f_800B5928(c); // 800B588C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5890
  if (crb(c,2)) { goto L_800B58A0; } // 800B5894
  c->r[30]=R32(c->r[29]+0x00000054u); // 800B5898
  goto L_800B5900; // 800B589C
L_800B58A0:;
  c->r[3]=c->r[29]|c->r[29]; // 800B58A0
  c->r[4]=0u+0x00000007u; // 800B58A4
  c->lr=0x800B58ACu; f_800760EC(c); // 800B58A8
  cmps(c,0,(int32_t)c->r[3],0); // 800B58AC
  if (crb(c,2)) { goto L_800B58C4; } // 800B58B0
  c->r[3]=c->r[29]|c->r[29]; // 800B58B4
  c->lr=0x800B58BCu; f_800B5980(c); // 800B58B8
  c->r[30]=c->r[3]|c->r[3]; // 800B58BC
  goto L_800B5900; // 800B58C0
L_800B58C4:;
  c->r[3]=c->r[29]|c->r[29]; // 800B58C4
  c->lr=0x800B58CCu; f_800B5980(c); // 800B58C8
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B58CC
  c->r[30]=c->r[3]|c->r[3]; // 800B58D0
  c->r[3]=c->r[29]+0x000008D0u; // 800B58D4
  c->r[4]=c->r[31]+0x00000048u; // 800B58D8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800B58DC
  c->ctr=c->r[12]; // 800B58E0
  if (true) { c->lr=0x800B58E8u; dispatch(c,c->ctr); } // 800B58E4
  c->r[12]=R32(c->r[29]+0x000008D0u); // 800B58E8
  c->r[3]=c->r[29]+0x000008D0u; // 800B58EC
  c->r[4]=c->r[31]+0x00000048u; // 800B58F0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B58F4
  c->ctr=c->r[12]; // 800B58F8
  if (true) { c->lr=0x800B5900u; dispatch(c,c->ctr); } // 800B58FC
L_800B5900:;
  c->r[3]=c->r[30]|c->r[30]; // 800B5900
  c->r[5]=c->r[31]|c->r[31]; // 800B5904
  c->r[4]=c->r[29]+0x000008D0u; // 800B5908
  c->lr=0x800B5910u; f_8007ABD0(c); // 800B590C
  c->r[11]=c->r[1]+0x00000020u; // 800B5910
  c->lr=0x800B5918u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5914
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5918
  c->lr=c->r[0]; // 800B591C
  c->r[1]=c->r[1]+0x00000020u; // 800B5920
  return; // 800B5924
}

// fn_800B5928
void f_800B5928(Ctx* __restrict c) {
  trace_call(0x800B5928u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5928
  c->r[0]=c->lr; // 800B592C
  c->r[3]=R32(c->r[3]+0x00000054u); // 800B5930
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5934
  cmps(c,0,(int32_t)c->r[3],0); // 800B5938
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B593C
  c->r[31]=c->r[4]|c->r[4]; // 800B5940
  if (crb(c,2)) { goto L_800B5968; } // 800B5944
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B5948
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B594C
  c->ctr=c->r[12]; // 800B5950
  if (true) { c->lr=0x800B5958u; dispatch(c,c->ctr); } // 800B5954
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800B5958
  if (!crb(c,2)) { goto L_800B5968; } // 800B595C
  c->r[3]=0u+0x00000001u; // 800B5960
  goto L_800B596C; // 800B5964
L_800B5968:;
  c->r[3]=0u+0x00000000u; // 800B5968
L_800B596C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B596C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5970
  c->lr=c->r[0]; // 800B5974
  c->r[1]=c->r[1]+0x00000010u; // 800B5978
  return; // 800B597C
}

// fn_800B5980
void f_800B5980(Ctx* __restrict c) {
  trace_call(0x800B5980u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5980
  c->r[0]=c->lr; // 800B5984
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B5988
  {uint32_t ea=c->r[1]+0x00000044u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B598C
  c->r[31]=c->r[1]|c->r[1]; // 800B5990
  c->r[29]=c->r[3]|c->r[3]; // 800B5994
  c->r[0]=R32(c->r[3]+0x00000054u); // 800B5998
  cmps(c,0,(int32_t)c->r[0],0); // 800B599C
  if (crb(c,2)) { goto L_800B5A08; } // 800B59A0
  c->r[3]=c->r[0]|c->r[0]; // 800B59A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B59A8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800B59AC
  c->ctr=c->r[12]; // 800B59B0
  if (true) { c->lr=0x800B59B8u; dispatch(c,c->ctr); } // 800B59B4
  c->lr=0x800B59BCu; f_8007A658(c); // 800B59B8
  c->r[30]=c->r[3]|c->r[3]; // 800B59BC
  c->r[3]=0u+0x00000007u; // 800B59C0
  c->lr=0x800B59C8u; f_8007A658(c); // 800B59C4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 800B59C8
  if (!crb(c,1)) { goto L_800B5A00; } // 800B59CC
  c->r[30]=addc(c,c->r[29],0x00000280u,0); cr0(c,c->r[30]); // 800B59D0
  if (crb(c,2)) { goto L_800B59F8; } // 800B59D4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 800B59D8
  c->r[3]=c->r[30]|c->r[30]; // 800B59DC
  c->lr=0x800B59E4u; f_800B5A74(c); // 800B59E0
  goto L_800B59F8; // 800B59E4
  c->r[3]=0u+0x00000000u; // 800B59E8
  c->r[4]=0u+0x00000000u; // 800B59EC
  c->r[5]=0u+0x00000000u; // 800B59F0
  c->lr=0x800B59F8u; f_8028BC3C(c); // 800B59F4
L_800B59F8:;
  W32(c->r[29]+0x00000058u,c->r[30]); // 800B59F8
  goto L_800B5A54; // 800B59FC
L_800B5A00:;
  c->r[0]=0u+0x00000000u; // 800B5A00
  W32(c->r[29]+0x00000054u,c->r[0]); // 800B5A04
L_800B5A08:;
  c->r[3]=R32(c->r[29]+0x0000005Cu); // 800B5A08
  c->r[0]=c->r[3]+0x00000001u; // 800B5A0C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800B5A10
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800B5A14
  c->r[0]=c->r[0]^c->r[3]; // 800B5A18
  c->r[0]=c->r[0]-c->r[3]; // 800B5A1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 800B5A20
  c->r[0]=c->r[29]+c->r[0]; // 800B5A24
  c->r[30]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[30]); // 800B5A28
  if (crb(c,2)) { goto L_800B5A50; } // 800B5A2C
  W32(c->r[31]+0x00000034u,c->r[1]); // 800B5A30
  c->r[3]=c->r[30]|c->r[30]; // 800B5A34
  c->lr=0x800B5A3Cu; f_800B5A74(c); // 800B5A38
  goto L_800B5A50; // 800B5A3C
  c->r[3]=0u+0x00000000u; // 800B5A40
  c->r[4]=0u+0x00000000u; // 800B5A44
  c->r[5]=0u+0x00000000u; // 800B5A48
  c->lr=0x800B5A50u; f_8028BC3C(c); // 800B5A4C
L_800B5A50:;
  W32(c->r[29]+0x00000054u,c->r[30]); // 800B5A50
L_800B5A54:;
  c->r[10]=c->r[31]|c->r[31]; // 800B5A54
  c->r[3]=c->r[30]|c->r[30]; // 800B5A58
  {uint32_t ea=c->r[10]+0x00000044u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B5A5C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B5A60
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B5A64
  c->r[1]=c->r[10]|c->r[10]; // 800B5A68
  c->lr=c->r[0]; // 800B5A6C
  return; // 800B5A70
}

// fn_800B5A74
void f_800B5A74(Ctx* __restrict c) {
  trace_call(0x800B5A74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5A74
  c->r[0]=c->lr; // 800B5A78
  c->r[4]=c->r[13]+0xFFFF8144u; // 800B5A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5A80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5A84
  c->r[31]=c->r[3]|c->r[3]; // 800B5A88
  c->lr=0x800B5A90u; f_800761D8(c); // 800B5A8C
  c->r[4]=0u+0x803F0000u; // 800B5A90
  c->r[3]=0u+0x00000000u; // 800B5A94
  c->r[4]=c->r[4]+0x00006594u; // 800B5A98
  W8(c->r[31]+0x00000030u,c->r[3]); // 800B5A9C
  c->r[5]=c->r[31]+0x00000034u; // 800B5AA0
  c->r[0]=c->r[31]+0x0000007Cu; // 800B5AA4
  W32(c->r[31]+0x00000000u,c->r[4]); // 800B5AA8
L_800B5AAC:;
  W32(c->r[5]+0x00000004u,c->r[3]); // 800B5AAC
  c->r[5]=c->r[5]+0x00000018u; // 800B5AB0
  cmpu(c,0,c->r[5],c->r[0]); // 800B5AB4
  if (crb(c,0)) { IRQCHK(c); goto L_800B5AAC; } // 800B5AB8
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5ABC
  c->r[0]=0u+0x00000000u; // 800B5AC0
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 800B5AC4
  c->r[3]=c->r[31]|c->r[31]; // 800B5AC8
  W32(c->r[31]+0x00000034u,c->r[0]); // 800B5ACC
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800B5AD0
  W32(c->r[31]+0x00000040u,c->r[0]); // 800B5AD4
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800B5AD8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800B5ADC
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800B5AE0
  W32(c->r[31]+0x00000054u,c->r[0]); // 800B5AE4
  W32(c->r[31]+0x00000058u,c->r[0]); // 800B5AE8
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B5AEC
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800B5AF0
  W32(c->r[31]+0x00000064u,c->r[0]); // 800B5AF4
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 800B5AF8
  W32(c->r[31]+0x00000070u,c->r[0]); // 800B5AFC
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800B5B00
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800B5B04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5B08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5B0C
  c->lr=c->r[0]; // 800B5B10
  c->r[1]=c->r[1]+0x00000010u; // 800B5B14
  return; // 800B5B18
}

// fn_800B5B1C
void f_800B5B1C(Ctx* __restrict c) {
  trace_call(0x800B5B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5B1C
  c->r[0]=c->lr; // 800B5B20
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B5B24
  c->r[11]=c->r[1]+0x00000030u; // 800B5B28
  c->lr=0x800B5B30u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B5B2C
  c->r[27]=c->r[3]|c->r[3]; // 800B5B30
  c->r[28]=c->r[4]|c->r[4]; // 800B5B34
  c->r[29]=c->r[5]|c->r[5]; // 800B5B38
  c->r[30]=0u+0x00000000u; // 800B5B3C
  c->r[31]=0u+0x00000000u; // 800B5B40
  goto L_800B5B78; // 800B5B44
L_800B5B48:;
  c->r[3]=R32(c->r[27]+0x00000974u); // 800B5B48
  c->r[4]=R32(c->r[3]+c->r[31]); // 800B5B4C
  c->r[3]=R32(c->r[4]+0x00000004u); // 800B5B50
  cmps(c,0,(int32_t)c->r[3],0); // 800B5B54
  if (crb(c,2)) { goto L_800B5B70; } // 800B5B58
  c->r[4]=R32(c->r[4]+0x00000018u); // 800B5B5C
  c->r[6]=c->r[29]|c->r[29]; // 800B5B60
  c->r[5]=0u+0x00000000u; // 800B5B64
  c->r[7]=0u+0x00000000u; // 800B5B68
  c->lr=0x800B5B70u; f_80161ECC(c); // 800B5B6C
L_800B5B70:;
  c->r[30]=c->r[30]+0x00000001u; // 800B5B70
  c->r[31]=c->r[31]+0x00000004u; // 800B5B74
L_800B5B78:;
  c->r[0]=R32(c->r[27]+0x00000978u); // 800B5B78
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800B5B7C
  if (crb(c,0)) { IRQCHK(c); goto L_800B5B48; } // 800B5B80
  c->r[12]=R32(c->r[29]+0x00000000u); // 800B5B84
  c->r[3]=c->r[29]|c->r[29]; // 800B5B88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800B5B8C
  c->ctr=c->r[12]; // 800B5B90
  if (true) { c->lr=0x800B5B98u; dispatch(c,c->ctr); } // 800B5B94
  cmps(c,0,(int32_t)c->r[3],1025); // 800B5B98
  if (!crb(c,0)) { goto L_800B5BAC; } // 800B5B9C
  cmps(c,0,(int32_t)c->r[3],14); // 800B5BA0
  if (crb(c,2)) { goto L_800B5BCC; } // 800B5BA4
  goto L_800B5BB8; // 800B5BA8
L_800B5BAC:;
  cmps(c,0,(int32_t)c->r[3],1032); // 800B5BAC
  if (!crb(c,0)) { goto L_800B5BB8; } // 800B5BB0
  goto L_800B5BDC; // 800B5BB4
L_800B5BB8:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5BB8
  c->r[4]=c->r[28]|c->r[28]; // 800B5BBC
  c->r[5]=c->r[29]|c->r[29]; // 800B5BC0
  c->lr=0x800B5BC8u; f_800CFFB0(c); // 800B5BC4
  goto L_800B5D70; // 800B5BC8
L_800B5BCC:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5BCC
  c->r[4]=c->r[29]|c->r[29]; // 800B5BD0
  c->lr=0x800B5BD8u; f_800B5864(c); // 800B5BD4
  goto L_800B5D70; // 800B5BD8
L_800B5BDC:;
  c->r[3]=c->r[27]+0x00000394u; // 800B5BDC
  c->r[4]=0u+0x00000002u; // 800B5BE0
  c->lr=0x800B5BE8u; f_80076DD4(c); // 800B5BE4
  cmps(c,0,(int32_t)c->r[3],0); // 800B5BE8
  if (!crb(c,2)) { goto L_800B5C18; } // 800B5BEC
  c->r[12]=R32(c->r[27]+0x00000010u); // 800B5BF0
  c->r[3]=c->r[27]|c->r[27]; // 800B5BF4
  c->r[4]=c->r[29]|c->r[29]; // 800B5BF8
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5BFC
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 800B5C00
  c->ctr=c->r[12]; // 800B5C04
  if (true) { c->lr=0x800B5C0Cu; dispatch(c,c->ctr); } // 800B5C08
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5C0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800B5C10
  {uint32_t ea=c->r[27]+0x000003A4u; WF32(ea,c->f[0]);} // 800B5C14
L_800B5C18:;
  c->r[3]=c->r[27]|c->r[27]; // 800B5C18
  c->r[4]=0u+0x00000007u; // 800B5C1C
  c->lr=0x800B5C24u; f_800760EC(c); // 800B5C20
  cmps(c,0,(int32_t)c->r[3],0); // 800B5C24
  if (!crb(c,2)) { goto L_800B5C40; } // 800B5C28
  c->r[3]=c->r[27]|c->r[27]; // 800B5C2C
  c->r[4]=0u+0x00000007u; // 800B5C30
  c->lr=0x800B5C38u; f_800B5928(c); // 800B5C34
  cmps(c,0,(int32_t)c->r[3],0); // 800B5C38
  if (crb(c,2)) { goto L_800B5C5C; } // 800B5C3C
L_800B5C40:;
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5C40
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5C44
  fcmp(c,0,c->f[1],c->f[0]); // 800B5C48
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800B5C4C
  if (!crb(c,2)) { goto L_800B5C5C; } // 800B5C50
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5C54
  {uint32_t ea=c->r[27]+0x000003A4u; WF32(ea,c->f[0]);} // 800B5C58
L_800B5C5C:;
  c->r[3]=R32(c->r[27]+0x000008D8u); // 800B5C5C
  c->r[4]=R32(c->r[29]+0x00000014u); // 800B5C60
  c->r[0]=R32(c->r[3]+0x000000E8u); // 800B5C64
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B5C68
  cmps(c,0,(int32_t)c->r[4],0); // 800B5C6C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B5C70
  c->r[3]=R32(c->r[27]+0x00000874u); // 800B5C74
  {uint32_t ea=c->r[27]+0x00000870u; WF32(ea,c->f[0]);} // 800B5C78
  c->r[0]=c->r[3]+0x00000001u; // 800B5C7C
  W32(c->r[27]+0x00000874u,c->r[0]); // 800B5C80
  if (!crb(c,1)) { goto L_800B5D70; } // 800B5C84
  c->r[3]=c->r[1]+0x0000000Cu; // 800B5C88
  c->lr=0x800B5C90u; f_80365C7C(c); // 800B5C8C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B5C90
  c->r[3]=c->r[27]+0x00000394u; // 800B5C94
  c->r[4]=0u+0x00000003u; // 800B5C98
  c->lr=0x800B5CA0u; f_80076DD4(c); // 800B5C9C
  cmps(c,0,(int32_t)c->r[3],0); // 800B5CA0
  if (crb(c,2)) { goto L_800B5D70; } // 800B5CA4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800B5CA8
  cmps(c,0,(int32_t)c->r[0],0); // 800B5CAC
  if (crb(c,2)) { goto L_800B5D70; } // 800B5CB0
  c->r[3]=c->r[27]+0x000008D0u; // 800B5CB4
  c->lr=0x800B5CBCu; f_80030FBC(c); // 800B5CB8
  cmps(c,0,(int32_t)c->r[3],0); // 800B5CBC
  if (crb(c,2)) { goto L_800B5D14; } // 800B5CC0
  c->r[12]=R32(c->r[27]+0x000008D0u); // 800B5CC4
  c->r[3]=c->r[27]+0x000008D0u; // 800B5CC8
  c->r[12]=R32(c->r[12]+0x00000054u); // 800B5CCC
  c->ctr=c->r[12]; // 800B5CD0
  if (true) { c->lr=0x800B5CD8u; dispatch(c,c->ctr); } // 800B5CD4
  cmps(c,0,(int32_t)c->r[3],0); // 800B5CD8
  if (crb(c,2)) { goto L_800B5D14; } // 800B5CDC
  c->r[3]=c->r[1]+0x00000008u; // 800B5CE0
  c->lr=0x800B5CE8u; f_800B5D88(c); // 800B5CE4
  c->r[31]=c->r[3]|c->r[3]; // 800B5CE8
  c->r[3]=c->r[27]+0x000008D0u; // 800B5CEC
  c->lr=0x800B5CF4u; f_80030FBC(c); // 800B5CF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B5CF4
  c->r[4]=c->r[29]|c->r[29]; // 800B5CF8
  c->r[5]=c->r[31]|c->r[31]; // 800B5CFC
  c->r[6]=c->r[27]|c->r[27]; // 800B5D00
  c->r[12]=R32(c->r[12]+0x00000078u); // 800B5D04
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5D08
  c->ctr=c->r[12]; // 800B5D0C
  if (true) { c->lr=0x800B5D14u; dispatch(c,c->ctr); } // 800B5D10
L_800B5D14:;
  c->r[3]=c->r[27]+0x000008D0u; // 800B5D14
  c->lr=0x800B5D1Cu; f_80030FC4(c); // 800B5D18
  cmps(c,0,(int32_t)c->r[3],0); // 800B5D1C
  if (crb(c,2)) { goto L_800B5D70; } // 800B5D20
  c->r[12]=R32(c->r[27]+0x000008D0u); // 800B5D24
  c->r[3]=c->r[27]+0x000008D0u; // 800B5D28
  c->r[12]=R32(c->r[12]+0x00000058u); // 800B5D2C
  c->ctr=c->r[12]; // 800B5D30
  if (true) { c->lr=0x800B5D38u; dispatch(c,c->ctr); } // 800B5D34
  cmps(c,0,(int32_t)c->r[3],0); // 800B5D38
  if (crb(c,2)) { goto L_800B5D70; } // 800B5D3C
  c->r[3]=c->r[1]+0x00000008u; // 800B5D40
  c->lr=0x800B5D48u; f_800B5D88(c); // 800B5D44
  c->r[31]=c->r[3]|c->r[3]; // 800B5D48
  c->r[3]=c->r[27]+0x000008D0u; // 800B5D4C
  c->lr=0x800B5D54u; f_80030FC4(c); // 800B5D50
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B5D54
  c->r[4]=c->r[29]|c->r[29]; // 800B5D58
  c->r[5]=c->r[31]|c->r[31]; // 800B5D5C
  c->r[6]=c->r[27]|c->r[27]; // 800B5D60
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B5D64
  c->ctr=c->r[12]; // 800B5D68
  if (true) { c->lr=0x800B5D70u; dispatch(c,c->ctr); } // 800B5D6C
L_800B5D70:;
  c->r[11]=c->r[1]+0x00000030u; // 800B5D70
  c->lr=0x800B5D78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B5D74
  c->r[0]=R32(c->r[1]+0x00000034u); // 800B5D78
  c->lr=c->r[0]; // 800B5D7C
  c->r[1]=c->r[1]+0x00000030u; // 800B5D80
  return; // 800B5D84
}

// fn_800B5D88
void f_800B5D88(Ctx* __restrict c) {
  trace_call(0x800B5D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5D88
  c->r[0]=c->lr; // 800B5D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5D90
  c->r[0]=R32(c->r[3]+0x00000000u); // 800B5D94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5D98
  c->r[31]=c->r[3]|c->r[3]; // 800B5D9C
  cmps(c,0,(int32_t)c->r[0],0); // 800B5DA0
  if (!crb(c,2)) { goto L_800B5DCC; } // 800B5DA4
  c->r[3]=0u+0x803F0000u; // 800B5DA8
  c->r[5]=0u+0x803F0000u; // 800B5DAC
  c->r[3]=c->r[3]+0x000018B0u; // 800B5DB0
  c->r[4]=0u+0x00000029u; // 800B5DB4
  c->r[5]=c->r[5]+0x00001894u; // 800B5DB8
  c->r[6]=c->r[13]+0xFFFF8048u; // 800B5DBC
  c->r[7]=c->r[13]+0xFFFF8130u; // 800B5DC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B5DC4
  c->lr=0x800B5DCCu; f_803444BC(c); // 800B5DC8
L_800B5DCC:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800B5DCC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800B5DD0
  cmps(c,0,(int32_t)c->r[0],0); // 800B5DD4
  if (crb(c,2)) { goto L_800B5DE4; } // 800B5DD8
  c->r[3]=c->r[3]+c->r[0]; // 800B5DDC
  goto L_800B5DE8; // 800B5DE0
L_800B5DE4:;
  c->r[3]=0u+0x00000000u; // 800B5DE4
L_800B5DE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5DE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5DEC
  c->lr=c->r[0]; // 800B5DF0
  c->r[1]=c->r[1]+0x00000010u; // 800B5DF4
  return; // 800B5DF8
}

// fn_800B5DFC
void f_800B5DFC(Ctx* __restrict c) {
  trace_call(0x800B5DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5DFC
  c->r[0]=c->lr; // 800B5E00
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5E04
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B5E08
  c->r[30]=c->r[3]|c->r[3]; // 800B5E0C
  c->r[31]=0u+0x00000000u; // 800B5E10
  c->lr=0x800B5E18u; f_800C785C(c); // 800B5E14
  cmpu(c,0,c->r[3],0x00000001u); // 800B5E18
  if (!crb(c,2)) { goto L_800B5E58; } // 800B5E1C
  c->r[12]=R32(c->r[30]+0x00000010u); // 800B5E20
  c->r[3]=c->r[30]|c->r[30]; // 800B5E24
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B5E28
  c->ctr=c->r[12]; // 800B5E2C
  if (true) { c->lr=0x800B5E34u; dispatch(c,c->ctr); } // 800B5E30
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B5E34
  c->r[5]=0u+0xC8000000u; // 800B5E38
  c->r[3]=c->r[1]+0x00000008u; // 800B5E3C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800B5E40
  c->r[4]=c->r[5]+0x00000028u; // 800B5E44
  c->lr=0x800B5E4Cu; f_8003EDD0(c); // 800B5E48
  cmps(c,0,(int32_t)c->r[3],0); // 800B5E4C
  if (!crb(c,2)) { goto L_800B5E58; } // 800B5E50
  c->r[31]=0u+0x00000001u; // 800B5E54
L_800B5E58:;
  cmps(c,0,(int32_t)c->r[31],0); // 800B5E58
  if (crb(c,2)) { goto L_800B5E78; } // 800B5E5C
  c->r[3]=c->r[30]+0x000008D0u; // 800B5E60
  c->r[4]=0u+0x00000003u; // 800B5E64
  c->lr=0x800B5E6Cu; f_80032330(c); // 800B5E68
  c->r[3]=c->r[30]+0x000008D0u; // 800B5E6C
  c->r[4]=0u+0x00000004u; // 800B5E70
  c->lr=0x800B5E78u; f_80032330(c); // 800B5E74
L_800B5E78:;
  c->r[3]=c->r[30]|c->r[30]; // 800B5E78
  c->lr=0x800B5E80u; f_800ADA60(c); // 800B5E7C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B5E80
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5E84
  c->lr=c->r[0]; // 800B5E88
  c->r[1]=c->r[1]+0x00000020u; // 800B5E8C
  return; // 800B5E90
}

// fn_800B5E94
void f_800B5E94(Ctx* __restrict c) {
  trace_call(0x800B5E94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5E94
  c->r[4]=0u+0xCC000000u; // 800B5E98
  c->r[0]=0u+0x00000004u; // 800B5E9C
  c->r[3]=0u+0x00000004u; // 800B5EA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B5EA4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800B5EA8
  c->r[1]=c->r[1]+0x00000010u; // 800B5EAC
  return; // 800B5EB0
}

// fn_800B5EB4
void f_800B5EB4(Ctx* __restrict c) {
  trace_call(0x800B5EB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5EB4
  c->r[0]=c->lr; // 800B5EB8
  cmpu(c,0,c->r[4],0x00000001u); // 800B5EBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B5EC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B5EC4
  c->r[31]=c->r[3]|c->r[3]; // 800B5EC8
  if (!crb(c,2)) { goto L_800B5F00; } // 800B5ECC
  cmps(c,0,(int32_t)c->r[5],0); // 800B5ED0
  if (!crb(c,2)) { goto L_800B5F00; } // 800B5ED4
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5ED8
  c->r[3]=c->r[1]+0x00000008u; // 800B5EDC
  c->f[2]=c->f[1]; // 800B5EE0
  c->f[3]=c->f[1]; // 800B5EE4
  c->lr=0x800B5EECu; f_800521A0(c); // 800B5EE8
  c->r[5]=c->r[3]|c->r[3]; // 800B5EEC
  c->r[3]=c->r[31]+0x000008D0u; // 800B5EF0
  c->r[4]=0u+0x00000001u; // 800B5EF4
  c->lr=0x800B5EFCu; f_80032208(c); // 800B5EF8
  goto L_800B5F08; // 800B5EFC
L_800B5F00:;
  c->r[3]=c->r[3]+0x000008D0u; // 800B5F00
  c->lr=0x800B5F08u; f_800322B0(c); // 800B5F04
L_800B5F08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B5F08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B5F0C
  c->lr=c->r[0]; // 800B5F10
  c->r[1]=c->r[1]+0x00000020u; // 800B5F14
  return; // 800B5F18
}

// fn_800B5F1C
void f_800B5F1C(Ctx* __restrict c) {
  trace_call(0x800B5F1Cu);
  cmps(c,0,(int32_t)c->r[5],0); // 800B5F1C
  if (!crb(c,2)) { goto L_800B5F34; } // 800B5F20
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B5F24
  c->r[5]=c->r[3]|c->r[3]; // 800B5F28
  c->r[3]=c->r[3]+0x000008D0u; // 800B5F2C
  f_80032454(c); return; // 800B5F30
L_800B5F34:;
  c->r[5]=c->r[3]|c->r[3]; // 800B5F34
  c->r[3]=c->r[3]+0x000008D0u; // 800B5F38
  f_80032370(c); return; // 800B5F3C
}

// fn_800B5F40
void f_800B5F40(Ctx* __restrict c) {
  trace_call(0x800B5F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5F40
  c->r[0]=c->lr; // 800B5F44
  c->r[4]=0u+0x00000002u; // 800B5F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5F4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5F50
  c->r[31]=c->r[3]|c->r[3]; // 800B5F54
  c->r[3]=c->r[3]+0x000008D0u; // 800B5F58
  c->lr=0x800B5F60u; f_80032310(c); // 800B5F5C
  c->r[3]=c->r[31]+0x000008D0u; // 800B5F60
  c->r[4]=0u+0x00000005u; // 800B5F64
  c->lr=0x800B5F6Cu; f_80032310(c); // 800B5F68
  c->r[3]=c->r[31]+0x000008D0u; // 800B5F6C
  c->r[4]=0u+0x00000006u; // 800B5F70
  c->lr=0x800B5F78u; f_80032310(c); // 800B5F74
  c->r[3]=c->r[31]+0x000008D0u; // 800B5F78
  c->r[4]=0u+0x00000003u; // 800B5F7C
  c->lr=0x800B5F84u; f_80032330(c); // 800B5F80
  c->r[3]=c->r[31]+0x000008D0u; // 800B5F84
  c->r[4]=0u+0x00000004u; // 800B5F88
  c->lr=0x800B5F90u; f_80032330(c); // 800B5F8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B5F90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B5F94
  c->lr=c->r[0]; // 800B5F98
  c->r[1]=c->r[1]+0x00000010u; // 800B5F9C
  return; // 800B5FA0
}

// fn_800B5FA4
void f_800B5FA4(Ctx* __restrict c) {
  trace_call(0x800B5FA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B5FA4
  c->r[0]=c->lr; // 800B5FA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B5FAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B5FB0
  c->r[31]=c->r[3]|c->r[3]; // 800B5FB4
  c->r[0]=R8(c->r[3]+0x00001F14u); // 800B5FB8
  cmps(c,0,(int32_t)c->r[0],0); // 800B5FBC
  if (!crb(c,2)) { goto L_800B600C; } // 800B5FC0
  c->r[3]=c->r[3]+0x000008D0u; // 800B5FC4
  c->lr=0x800B5FCCu; f_80030FBC(c); // 800B5FC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B5FCC
  c->r[4]=0u+0x00000000u; // 800B5FD0
  c->r[5]=0u+0x00000002u; // 800B5FD4
  c->r[12]=R32(c->r[12]+0x00000080u); // 800B5FD8
  c->ctr=c->r[12]; // 800B5FDC
  if (true) { c->lr=0x800B5FE4u; dispatch(c,c->ctr); } // 800B5FE0
  c->r[3]=c->r[31]+0x000008D0u; // 800B5FE4
  c->lr=0x800B5FECu; f_80030FBC(c); // 800B5FE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B5FEC
  c->r[4]=0u+0x00000000u; // 800B5FF0
  c->r[5]=0u+0x00000003u; // 800B5FF4
  c->r[12]=R32(c->r[12]+0x00000084u); // 800B5FF8
  c->ctr=c->r[12]; // 800B5FFC
  if (true) { c->lr=0x800B6004u; dispatch(c,c->ctr); } // 800B6000
  c->r[0]=0u+0x00000001u; // 800B6004
  W8(c->r[31]+0x00001F14u,c->r[0]); // 800B6008
L_800B600C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B600C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6010
  c->lr=c->r[0]; // 800B6014
  c->r[1]=c->r[1]+0x00000010u; // 800B6018
  return; // 800B601C
}

// fn_800B6020
void f_800B6020(Ctx* __restrict c) {
  trace_call(0x800B6020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6020
  c->r[0]=c->lr; // 800B6024
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B602C
  c->r[31]=c->r[3]|c->r[3]; // 800B6030
  c->r[0]=R8(c->r[3]+0x00001F14u); // 800B6034
  cmpu(c,0,c->r[0],0x00000001u); // 800B6038
  if (!crb(c,2)) { goto L_800B6088; } // 800B603C
  c->r[3]=c->r[3]+0x000008D0u; // 800B6040
  c->lr=0x800B6048u; f_80030FBC(c); // 800B6044
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6048
  c->r[4]=0u+0x00000001u; // 800B604C
  c->r[5]=0u+0x00000002u; // 800B6050
  c->r[12]=R32(c->r[12]+0x00000080u); // 800B6054
  c->ctr=c->r[12]; // 800B6058
  if (true) { c->lr=0x800B6060u; dispatch(c,c->ctr); } // 800B605C
  c->r[3]=c->r[31]+0x000008D0u; // 800B6060
  c->lr=0x800B6068u; f_80030FBC(c); // 800B6064
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6068
  c->r[4]=0u+0x00000001u; // 800B606C
  c->r[5]=0u+0x00000003u; // 800B6070
  c->r[12]=R32(c->r[12]+0x00000084u); // 800B6074
  c->ctr=c->r[12]; // 800B6078
  if (true) { c->lr=0x800B6080u; dispatch(c,c->ctr); } // 800B607C
  c->r[0]=0u+0x00000000u; // 800B6080
  W8(c->r[31]+0x00001F14u,c->r[0]); // 800B6084
L_800B6088:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6088
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B608C
  c->lr=c->r[0]; // 800B6090
  c->r[1]=c->r[1]+0x00000010u; // 800B6094
  return; // 800B6098
}

// fn_800B609C
void f_800B609C(Ctx* __restrict c) {
  trace_call(0x800B609Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B609C
  c->r[0]=c->lr; // 800B60A0
  c->r[3]=c->r[3]+0x000008D0u; // 800B60A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B60A8
  c->lr=0x800B60B0u; f_80030FBC(c); // 800B60AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B60B0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800B60B4
  c->ctr=c->r[12]; // 800B60B8
  if (true) { c->lr=0x800B60C0u; dispatch(c,c->ctr); } // 800B60BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B60C0
  c->lr=c->r[0]; // 800B60C4
  c->r[1]=c->r[1]+0x00000010u; // 800B60C8
  return; // 800B60CC
}

// fn_800B60D0
void f_800B60D0(Ctx* __restrict c) {
  trace_call(0x800B60D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B60D0
  c->r[0]=c->lr; // 800B60D4
  c->r[3]=c->r[3]+0x000008D0u; // 800B60D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B60DC
  c->lr=0x800B60E4u; f_80030FBC(c); // 800B60E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B60E4
  c->r[12]=R32(c->r[12]+0x00000030u); // 800B60E8
  c->ctr=c->r[12]; // 800B60EC
  if (true) { c->lr=0x800B60F4u; dispatch(c,c->ctr); } // 800B60F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B60F4
  c->lr=c->r[0]; // 800B60F8
  c->r[1]=c->r[1]+0x00000010u; // 800B60FC
  return; // 800B6100
}

// fn_800B6104
void f_800B6104(Ctx* __restrict c) {
  trace_call(0x800B6104u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6104
  c->r[0]=c->lr; // 800B6108
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B610C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6110
  c->r[29]=c->r[3]|c->r[3]; // 800B6114
  c->r[30]=c->r[4]|c->r[4]; // 800B6118
  c->r[31]=c->r[5]|c->r[5]; // 800B611C
  c->r[3]=c->r[3]+0x000008D0u; // 800B6120
  c->lr=0x800B6128u; f_80030FBC(c); // 800B6124
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6128
  c->r[4]=0u+0x00000001u; // 800B612C
  c->r[12]=R32(c->r[12]+0x00000054u); // 800B6130
  c->ctr=c->r[12]; // 800B6134
  if (true) { c->lr=0x800B613Cu; dispatch(c,c->ctr); } // 800B6138
  c->r[3]=c->r[29]+0x000008D0u; // 800B613C
  c->lr=0x800B6144u; f_80030FBC(c); // 800B6140
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6144
  c->r[4]=c->r[30]|c->r[30]; // 800B6148
  c->r[12]=R32(c->r[12]+0x00000058u); // 800B614C
  c->ctr=c->r[12]; // 800B6150
  if (true) { c->lr=0x800B6158u; dispatch(c,c->ctr); } // 800B6154
  c->r[3]=c->r[29]+0x000008D0u; // 800B6158
  c->lr=0x800B6160u; f_80030FBC(c); // 800B615C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6160
  c->r[4]=c->r[31]|c->r[31]; // 800B6164
  c->r[5]=c->r[29]+0x000008D0u; // 800B6168
  c->r[12]=R32(c->r[12]+0x00000074u); // 800B616C
  c->ctr=c->r[12]; // 800B6170
  if (true) { c->lr=0x800B6178u; dispatch(c,c->ctr); } // 800B6174
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6178
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B617C
  c->lr=c->r[0]; // 800B6180
  c->r[1]=c->r[1]+0x00000020u; // 800B6184
  return; // 800B6188
}

// fn_800B618C
void f_800B618C(Ctx* __restrict c) {
  trace_call(0x800B618Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B618C
  c->r[0]=c->lr; // 800B6190
  c->r[3]=c->r[3]+0x000008D0u; // 800B6194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6198
  c->lr=0x800B61A0u; f_80030FBC(c); // 800B619C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B61A0
  c->r[4]=0u+0x00000000u; // 800B61A4
  c->r[12]=R32(c->r[12]+0x00000054u); // 800B61A8
  c->ctr=c->r[12]; // 800B61AC
  if (true) { c->lr=0x800B61B4u; dispatch(c,c->ctr); } // 800B61B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B61B4
  c->lr=c->r[0]; // 800B61B8
  c->r[1]=c->r[1]+0x00000010u; // 800B61BC
  return; // 800B61C0
}

// fn_800B61C4
void f_800B61C4(Ctx* __restrict c) {
  trace_call(0x800B61C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B61C4
  c->r[0]=c->lr; // 800B61C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B61CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B61D0
  c->r[31]=c->r[3]|c->r[3]; // 800B61D4
  c->r[0]=R8(c->r[3]+0x00001F14u); // 800B61D8
  cmps(c,0,(int32_t)c->r[0],0); // 800B61DC
  if (!crb(c,2)) { goto L_800B6260; } // 800B61E0
  c->r[3]=c->r[3]+0x000008D0u; // 800B61E4
  c->lr=0x800B61ECu; f_80030FBC(c); // 800B61E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B61EC
  c->r[4]=0u+0x00000002u; // 800B61F0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B61F4
  c->ctr=c->r[12]; // 800B61F8
  if (true) { c->lr=0x800B6200u; dispatch(c,c->ctr); } // 800B61FC
  c->r[3]=c->r[31]+0x000008D0u; // 800B6200
  c->lr=0x800B6208u; f_80030FBC(c); // 800B6204
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6208
  c->r[4]=0u+0x00000000u; // 800B620C
  c->r[5]=0u+0x00000002u; // 800B6210
  c->r[12]=R32(c->r[12]+0x00000080u); // 800B6214
  c->ctr=c->r[12]; // 800B6218
  if (true) { c->lr=0x800B6220u; dispatch(c,c->ctr); } // 800B621C
  c->r[3]=c->r[31]+0x000008D0u; // 800B6220
  c->lr=0x800B6228u; f_80030FBC(c); // 800B6224
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6228
  c->r[4]=0u+0x00000000u; // 800B622C
  c->r[5]=0u+0x00000003u; // 800B6230
  c->r[12]=R32(c->r[12]+0x00000084u); // 800B6234
  c->ctr=c->r[12]; // 800B6238
  if (true) { c->lr=0x800B6240u; dispatch(c,c->ctr); } // 800B623C
  c->r[3]=c->r[31]+0x000008D0u; // 800B6240
  c->r[4]=0u+0x00000003u; // 800B6244
  c->lr=0x800B624Cu; f_80032330(c); // 800B6248
  c->r[3]=c->r[31]+0x000008D0u; // 800B624C
  c->r[4]=0u+0x00000004u; // 800B6250
  c->lr=0x800B6258u; f_80032330(c); // 800B6254
  c->r[0]=0u+0x00000001u; // 800B6258
  W8(c->r[31]+0x00001F14u,c->r[0]); // 800B625C
L_800B6260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6264
  c->lr=c->r[0]; // 800B6268
  c->r[1]=c->r[1]+0x00000010u; // 800B626C
  return; // 800B6270
}

// fn_800B6274
void f_800B6274(Ctx* __restrict c) {
  trace_call(0x800B6274u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6274
  c->r[0]=c->lr; // 800B6278
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B627C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6280
  c->r[31]=c->r[3]|c->r[3]; // 800B6284
  c->r[0]=R8(c->r[3]+0x00001F14u); // 800B6288
  cmpu(c,0,c->r[0],0x00000001u); // 800B628C
  if (!crb(c,2)) { goto L_800B6310; } // 800B6290
  c->r[3]=c->r[3]+0x000008D0u; // 800B6294
  c->lr=0x800B629Cu; f_80030FBC(c); // 800B6298
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B629C
  c->r[4]=0u+0x00002710u; // 800B62A0
  c->r[12]=R32(c->r[12]+0x00000064u); // 800B62A4
  c->ctr=c->r[12]; // 800B62A8
  if (true) { c->lr=0x800B62B0u; dispatch(c,c->ctr); } // 800B62AC
  c->r[3]=c->r[31]+0x000008D0u; // 800B62B0
  c->lr=0x800B62B8u; f_80030FBC(c); // 800B62B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B62B8
  c->r[4]=0u+0x00000001u; // 800B62BC
  c->r[5]=0u+0x00000002u; // 800B62C0
  c->r[12]=R32(c->r[12]+0x00000080u); // 800B62C4
  c->ctr=c->r[12]; // 800B62C8
  if (true) { c->lr=0x800B62D0u; dispatch(c,c->ctr); } // 800B62CC
  c->r[3]=c->r[31]+0x000008D0u; // 800B62D0
  c->lr=0x800B62D8u; f_80030FBC(c); // 800B62D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B62D8
  c->r[4]=0u+0x00000001u; // 800B62DC
  c->r[5]=0u+0x00000003u; // 800B62E0
  c->r[12]=R32(c->r[12]+0x00000084u); // 800B62E4
  c->ctr=c->r[12]; // 800B62E8
  if (true) { c->lr=0x800B62F0u; dispatch(c,c->ctr); } // 800B62EC
  c->r[3]=c->r[31]+0x000008D0u; // 800B62F0
  c->r[4]=0u+0x00000003u; // 800B62F4
  c->lr=0x800B62FCu; f_80032310(c); // 800B62F8
  c->r[3]=c->r[31]+0x000008D0u; // 800B62FC
  c->r[4]=0u+0x00000004u; // 800B6300
  c->lr=0x800B6308u; f_80032310(c); // 800B6304
  c->r[0]=0u+0x00000000u; // 800B6308
  W8(c->r[31]+0x00001F14u,c->r[0]); // 800B630C
L_800B6310:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6310
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6314
  c->lr=c->r[0]; // 800B6318
  c->r[1]=c->r[1]+0x00000010u; // 800B631C
  return; // 800B6320
}

// fn_800B6324
void f_800B6324(Ctx* __restrict c) {
  trace_call(0x800B6324u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6324
  c->r[0]=c->lr; // 800B6328
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B632C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6330
  c->r[31]=c->r[3]|c->r[3]; // 800B6334
  c->r[0]=R8(c->r[3]+0x00001F14u); // 800B6338
  cmps(c,0,(int32_t)c->r[0],0); // 800B633C
  if (!crb(c,2)) { goto L_800B63A4; } // 800B6340
  c->r[3]=c->r[3]+0x000008D0u; // 800B6344
  c->lr=0x800B634Cu; f_80030FBC(c); // 800B6348
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B634C
  c->r[4]=0u+0x00000000u; // 800B6350
  c->r[5]=0u+0x00000003u; // 800B6354
  c->r[12]=R32(c->r[12]+0x00000084u); // 800B6358
  c->ctr=c->r[12]; // 800B635C
  if (true) { c->lr=0x800B6364u; dispatch(c,c->ctr); } // 800B6360
  c->r[3]=c->r[31]+0x000008D0u; // 800B6364
  c->lr=0x800B636Cu; f_80030FBC(c); // 800B6368
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B636C
  c->r[4]=0u+0x00000003u; // 800B6370
  {uint32_t ea=c->r[2]+0xFFFF8E04u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6374
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 800B6378
  c->ctr=c->r[12]; // 800B637C
  if (true) { c->lr=0x800B6384u; dispatch(c,c->ctr); } // 800B6380
  c->r[3]=c->r[31]+0x000008D0u; // 800B6384
  c->r[4]=0u+0x00000003u; // 800B6388
  c->lr=0x800B6390u; f_80032330(c); // 800B638C
  c->r[3]=c->r[31]+0x000008D0u; // 800B6390
  c->r[4]=0u+0x00000004u; // 800B6394
  c->lr=0x800B639Cu; f_80032330(c); // 800B6398
  c->r[0]=0u+0x00000001u; // 800B639C
  W8(c->r[31]+0x00001F14u,c->r[0]); // 800B63A0
L_800B63A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B63A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B63A8
  c->lr=c->r[0]; // 800B63AC
  c->r[1]=c->r[1]+0x00000010u; // 800B63B0
  return; // 800B63B4
}

// fn_800B63B8
void f_800B63B8(Ctx* __restrict c) {
  trace_call(0x800B63B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B63B8
  c->r[0]=c->lr; // 800B63BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B63C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B63C4
  c->r[31]=c->r[3]|c->r[3]; // 800B63C8
  c->r[0]=R8(c->r[3]+0x00001F14u); // 800B63CC
  cmpu(c,0,c->r[0],0x00000001u); // 800B63D0
  if (!crb(c,2)) { goto L_800B6438; } // 800B63D4
  c->r[3]=c->r[3]+0x000008D0u; // 800B63D8
  c->lr=0x800B63E0u; f_80030FBC(c); // 800B63DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B63E0
  c->r[4]=0u+0x00000001u; // 800B63E4
  c->r[5]=0u+0x00000003u; // 800B63E8
  c->r[12]=R32(c->r[12]+0x00000084u); // 800B63EC
  c->ctr=c->r[12]; // 800B63F0
  if (true) { c->lr=0x800B63F8u; dispatch(c,c->ctr); } // 800B63F4
  c->r[3]=c->r[31]+0x000008D0u; // 800B63F8
  c->lr=0x800B6400u; f_80030FBC(c); // 800B63FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6400
  c->r[4]=0u+0x00000003u; // 800B6404
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B6408
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 800B640C
  c->ctr=c->r[12]; // 800B6410
  if (true) { c->lr=0x800B6418u; dispatch(c,c->ctr); } // 800B6414
  c->r[3]=c->r[31]+0x000008D0u; // 800B6418
  c->r[4]=0u+0x00000003u; // 800B641C
  c->lr=0x800B6424u; f_80032310(c); // 800B6420
  c->r[3]=c->r[31]+0x000008D0u; // 800B6424
  c->r[4]=0u+0x00000004u; // 800B6428
  c->lr=0x800B6430u; f_80032310(c); // 800B642C
  c->r[0]=0u+0x00000000u; // 800B6430
  W8(c->r[31]+0x00001F14u,c->r[0]); // 800B6434
L_800B6438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B643C
  c->lr=c->r[0]; // 800B6440
  c->r[1]=c->r[1]+0x00000010u; // 800B6444
  return; // 800B6448
}

// fn_800B644C
void f_800B644C(Ctx* __restrict c) {
  trace_call(0x800B644Cu);
  return; // 800B644C
}

// fn_800B6450
void f_800B6450(Ctx* __restrict c) {
  trace_call(0x800B6450u);
  return; // 800B6450
}

// fn_800B6454
void f_800B6454(Ctx* __restrict c) {
  trace_call(0x800B6454u);
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6454
  c->r[0]=0u+0x00000000u; // 800B6458
  W32(c->r[3]+0x00000000u,c->r[4]); // 800B645C
  W32(c->r[3]+0x00000020u,c->r[5]); // 800B6460
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B6464
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800B6468
  return; // 800B646C
}

// fn_800B6470
void f_800B6470(Ctx* __restrict c) {
  trace_call(0x800B6470u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6470
  c->r[0]=c->lr; // 800B6474
  c->r[4]=c->r[13]+0xFFFF80C5u; // 800B6478
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B647C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6480
  c->r[31]=c->r[3]|c->r[3]; // 800B6484
  c->r[3]=c->r[1]+0x00000008u; // 800B6488
  c->lr=0x800B6490u; f_800761D8(c); // 800B648C
  c->r[3]=0u+0x803F0000u; // 800B6490
  cmps(c,0,(int32_t)c->r[31],0); // 800B6494
  c->r[3]=c->r[3]+0x00003224u; // 800B6498
  c->r[4]=c->r[31]|c->r[31]; // 800B649C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800B64A0
  if (crb(c,2)) { goto L_800B64AC; } // 800B64A4
  c->r[4]=c->r[31]+0x00000048u; // 800B64A8
L_800B64AC:;
  c->r[3]=R32(c->r[31]+0x00000050u); // 800B64AC
  c->r[5]=c->r[1]+0x00000008u; // 800B64B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B64B4
  c->r[12]=R32(c->r[12]+0x00000024u); // 800B64B8
  c->ctr=c->r[12]; // 800B64BC
  if (true) { c->lr=0x800B64C4u; dispatch(c,c->ctr); } // 800B64C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B64C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B64C8
  c->lr=c->r[0]; // 800B64CC
  c->r[1]=c->r[1]+0x00000020u; // 800B64D0
  return; // 800B64D4
}

// fn_800B64D8
void f_800B64D8(Ctx* __restrict c) {
  trace_call(0x800B64D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B64D8
  c->r[0]=c->lr; // 800B64DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B64E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B64E4
  c->r[31]=c->r[3]|c->r[3]; // 800B64E8
  c->lr=0x800B64F0u; f_80161DAC(c); // 800B64EC
  c->r[3]=R32(c->r[31]+0x00000024u); // 800B64F0
  c->r[0]=0u+0x00000000u; // 800B64F4
  W32(c->r[31]+0x00000030u,c->r[0]); // 800B64F8
  W32(c->r[31]+0x00000024u,c->r[0]); // 800B64FC
  W32(c->r[31]+0x00000028u,c->r[0]); // 800B6500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6504
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6508
  c->lr=c->r[0]; // 800B650C
  c->r[1]=c->r[1]+0x00000010u; // 800B6510
  return; // 800B6514
}

// fn_800B6518
void f_800B6518(Ctx* __restrict c) {
  trace_call(0x800B6518u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6518
  c->r[4]=0u+0xC8000000u; // 800B651C
  c->r[0]=0u+0x00000001u; // 800B6520
  c->r[3]=0u+0x00000001u; // 800B6524
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B6528
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800B652C
  c->r[1]=c->r[1]+0x00000010u; // 800B6530
  return; // 800B6534
}

// fn_800B6538
void f_800B6538(Ctx* __restrict c) {
  trace_call(0x800B6538u);
  return; // 800B6538
}

// fn_800B653C
void f_800B653C(Ctx* __restrict c) {
  trace_call(0x800B653Cu);
  c->r[3]=0u+0x00000000u; // 800B653C
  return; // 800B6540
}

// fn_800B6544
void f_800B6544(Ctx* __restrict c) {
  trace_call(0x800B6544u);
  return; // 800B6544
}

// fn_800B6548
void f_800B6548(Ctx* __restrict c) {
  trace_call(0x800B6548u);
  return; // 800B6548
}

// fn_800B654C
void f_800B654C(Ctx* __restrict c) {
  trace_call(0x800B654Cu);
  return; // 800B654C
}

// fn_800B6550
void f_800B6550(Ctx* __restrict c) {
  trace_call(0x800B6550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6550
  c->r[0]=c->lr; // 800B6554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B655C
  c->r[31]=c->r[3]|c->r[3]; // 800B6560
  c->r[3]=c->r[3]+0x000008A4u; // 800B6564
  c->lr=0x800B656Cu; f_800B9BCC(c); // 800B6568
  c->r[12]=R32(c->r[31]+0x00000010u); // 800B656C
  c->r[3]=c->r[31]|c->r[31]; // 800B6570
  c->r[4]=R32(c->r[31]+0x000008A4u); // 800B6574
  c->r[12]=R32(c->r[12]+0x00000334u); // 800B6578
  c->ctr=c->r[12]; // 800B657C
  if (true) { c->lr=0x800B6584u; dispatch(c,c->ctr); } // 800B6580
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6588
  c->lr=c->r[0]; // 800B658C
  c->r[1]=c->r[1]+0x00000010u; // 800B6590
  return; // 800B6594
}

// fn_800B6598
void f_800B6598(Ctx* __restrict c) {
  trace_call(0x800B6598u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6598
  c->r[0]=c->lr; // 800B659C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800B65A0
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800B65A4
  c->r[31]=c->r[4]|c->r[4]; // 800B65A8
  W32(c->r[1]+0x00000058u,c->r[30]); // 800B65AC
  c->r[30]=c->r[3]|c->r[3]; // 800B65B0
  c->r[3]=c->r[4]+0x0000000Cu; // 800B65B4
  c->lr=0x800B65BCu; f_80065368(c); // 800B65B8
  cmps(c,0,(int32_t)c->r[3],0); // 800B65BC
  if (crb(c,2)) { goto L_800B65E8; } // 800B65C0
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B65C4
  c->r[3]=c->r[1]+0x00000014u; // 800B65C8
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B65CC
  c->f[2]=c->f[1]; // 800B65D0
  c->lr=0x800B65D8u; f_800521A0(c); // 800B65D4
  c->r[4]=c->r[3]|c->r[3]; // 800B65D8
  c->r[3]=c->r[1]+0x00000020u; // 800B65DC
  c->lr=0x800B65E4u; f_8007513C(c); // 800B65E0
  goto L_800B6600; // 800B65E4
L_800B65E8:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800B65E8
  c->r[4]=c->r[1]+0x00000008u; // 800B65EC
  c->lr=0x800B65F4u; f_80265750(c); // 800B65F0
  c->r[3]=c->r[1]+0x00000020u; // 800B65F4
  c->r[4]=c->r[1]+0x00000008u; // 800B65F8
  c->lr=0x800B6600u; f_8007513C(c); // 800B65FC
L_800B6600:;
  c->r[4]=c->r[31]|c->r[31]; // 800B6600
  c->r[3]=c->r[1]+0x00000020u; // 800B6604
  c->lr=0x800B660Cu; f_80032FF4(c); // 800B6608
  c->r[12]=R32(c->r[30]+0x00000A44u); // 800B660C
  c->r[3]=c->r[30]+0x00000A44u; // 800B6610
  c->r[4]=c->r[1]+0x00000020u; // 800B6614
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800B6618
  c->ctr=c->r[12]; // 800B661C
  if (true) { c->lr=0x800B6624u; dispatch(c,c->ctr); } // 800B6620
  c->r[12]=R32(c->r[30]+0x00000A44u); // 800B6624
  c->r[3]=c->r[30]+0x00000A44u; // 800B6628
  c->r[4]=c->r[1]+0x00000020u; // 800B662C
  c->r[12]=R32(c->r[12]+0x00000028u); // 800B6630
  c->ctr=c->r[12]; // 800B6634
  if (true) { c->lr=0x800B663Cu; dispatch(c,c->ctr); } // 800B6638
  c->r[0]=R32(c->r[1]+0x00000064u); // 800B663C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800B6640
  c->r[30]=R32(c->r[1]+0x00000058u); // 800B6644
  c->lr=c->r[0]; // 800B6648
  c->r[1]=c->r[1]+0x00000060u; // 800B664C
  return; // 800B6650
}

// fn_800B6654
void f_800B6654(Ctx* __restrict c) {
  trace_call(0x800B6654u);
  c->r[3]=c->r[3]+0x000008A4u; // 800B6654
  f_800B6454(c); return; // 800B6658
}

// fn_800B665C
void f_800B665C(Ctx* __restrict c) {
  trace_call(0x800B665Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B665C
  c->r[4]=0u+0xD0000000u; // 800B6660
  c->r[0]=0u+0x00000008u; // 800B6664
  c->r[3]=0u+0x00000008u; // 800B6668
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B666C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800B6670
  c->r[1]=c->r[1]+0x00000010u; // 800B6674
  return; // 800B6678
}

// fn_800B667C
void f_800B667C(Ctx* __restrict c) {
  trace_call(0x800B667Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B667C
  c->r[0]=c->lr; // 800B6680
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6684
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6688
  c->r[31]=c->r[3]|c->r[3]; // 800B668C
  c->lr=0x800B6694u; f_800B6470(c); // 800B6690
  c->r[12]=R32(c->r[31]+0x00000A44u); // 800B6694
  c->r[3]=c->r[31]+0x00000A44u; // 800B6698
  c->r[12]=R32(c->r[12]+0x00000020u); // 800B669C
  c->ctr=c->r[12]; // 800B66A0
  if (true) { c->lr=0x800B66A8u; dispatch(c,c->ctr); } // 800B66A4
  c->r[12]=R32(c->r[31]+0x00000A44u); // 800B66A8
  c->r[3]=c->r[31]+0x00000A44u; // 800B66AC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800B66B0
  c->ctr=c->r[12]; // 800B66B4
  if (true) { c->lr=0x800B66BCu; dispatch(c,c->ctr); } // 800B66B8
  c->r[3]=c->r[31]|c->r[31]; // 800B66BC
  c->r[4]=0u+0x00000000u; // 800B66C0
  c->r[5]=0u+0x00000000u; // 800B66C4
  c->lr=0x800B66CCu; f_80076080(c); // 800B66C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B66CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B66D0
  c->lr=c->r[0]; // 800B66D4
  c->r[1]=c->r[1]+0x00000010u; // 800B66D8
  return; // 800B66DC
}

// fn_800B66E0
void f_800B66E0(Ctx* __restrict c) {
  trace_call(0x800B66E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B66E0
  c->r[0]=c->lr; // 800B66E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B66E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B66EC
  c->r[31]=c->r[3]|c->r[3]; // 800B66F0
  c->r[0]=R8(c->r[3]+0x00000170u); // 800B66F4
  cmps(c,0,(int32_t)c->r[0],0); // 800B66F8
  if (crb(c,2)) { goto L_800B6710; } // 800B66FC
  c->r[3]=c->r[3]+0x000000D8u; // 800B6700
  c->lr=0x800B6708u; f_801421D0(c); // 800B6704
  c->r[0]=0u+0x00000000u; // 800B6708
  W8(c->r[31]+0x00000170u,c->r[0]); // 800B670C
L_800B6710:;
  c->r[3]=c->r[31]|c->r[31]; // 800B6710
  c->lr=0x800B6718u; f_8002CAA0(c); // 800B6714
  c->r[0]=R32(c->r[31]+0x00000218u); // 800B6718
  cmps(c,0,(int32_t)c->r[0],0); // 800B671C
  if (crb(c,2)) { goto L_800B6740; } // 800B6720
  c->r[3]=c->r[31]+0x00000188u; // 800B6724
  c->lr=0x800B672Cu; f_800B64D8(c); // 800B6728
  c->r[4]=c->r[3]|c->r[3]; // 800B672C
  c->r[3]=R32(c->r[31]+0x00000218u); // 800B6730
  c->lr=0x800B6738u; f_802A704C(c); // 800B6734
  c->r[0]=0u+0x00000000u; // 800B6738
  W32(c->r[31]+0x00000218u,c->r[0]); // 800B673C
L_800B6740:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6740
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6744
  c->lr=c->r[0]; // 800B6748
  c->r[1]=c->r[1]+0x00000010u; // 800B674C
  return; // 800B6750
}

// fn_800B6754
void f_800B6754(Ctx* __restrict c) {
  trace_call(0x800B6754u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6754
  c->r[0]=c->lr; // 800B6758
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B675C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6760
  c->r[31]=c->r[3]|c->r[3]; // 800B6764
  c->r[12]=R32(c->r[3]+0x00000A44u); // 800B6768
  c->r[12]=R32(c->r[12]+0x00000020u); // 800B676C
  c->ctr=c->r[12]; // 800B6770
  c->r[3]=c->r[3]+0x00000A44u; // 800B6774
  if (true) { c->lr=0x800B677Cu; dispatch(c,c->ctr); } // 800B6778
  c->r[3]=c->r[31]|c->r[31]; // 800B677C
  c->r[4]=0u+0x00000000u; // 800B6780
  c->r[5]=0u+0x00000000u; // 800B6784
  c->lr=0x800B678Cu; f_80076080(c); // 800B6788
  c->r[3]=c->r[31]|c->r[31]; // 800B678C
  c->lr=0x800B6794u; f_800D9778(c); // 800B6790
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6794
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6798
  c->lr=c->r[0]; // 800B679C
  c->r[1]=c->r[1]+0x00000010u; // 800B67A0
  return; // 800B67A4
}

// dtor_800B67A8
void f_800B67A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B67A8
  c->r[0]=c->lr; // 800B67AC
  cmps(c,0,(int32_t)c->r[3],0); // 800B67B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B67B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B67B8
  c->r[30]=c->r[3]|c->r[3]; // 800B67BC
  c->r[31]=c->r[4]|c->r[4]; // 800B67C0
  if (crb(c,2)) { goto L_800B6884; } // 800B67C4
  c->r[5]=addc(c,c->r[3],0x00000A44u,0); cr0(c,c->r[5]); // 800B67C8
  if (crb(c,2)) { goto L_800B685C; } // 800B67CC
  c->r[0]=R32(c->r[3]+0x00000A4Cu); // 800B67D0
  c->r[4]=0u+0x80400000u; // 800B67D4
  c->r[4]=c->r[4]+0x00005580u; // 800B67D8
  cmps(c,0,(int32_t)c->r[0],0); // 800B67DC
  W32(c->r[3]+0x00000A44u,c->r[4]); // 800B67E0
  if (crb(c,2)) { goto L_800B6810; } // 800B67E4
  c->r[12]=R32(c->r[5]+0x00000000u); // 800B67E8
  c->r[3]=c->r[5]|c->r[5]; // 800B67EC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800B67F0
  c->ctr=c->r[12]; // 800B67F4
  if (true) { c->lr=0x800B67FCu; dispatch(c,c->ctr); } // 800B67F8
  c->r[12]=R32(c->r[30]+0x00000A44u); // 800B67FC
  c->r[3]=c->r[30]+0x00000A44u; // 800B6800
  c->r[12]=R32(c->r[12]+0x00000018u); // 800B6804
  c->ctr=c->r[12]; // 800B6808
  if (true) { c->lr=0x800B6810u; dispatch(c,c->ctr); } // 800B680C
L_800B6810:;
  c->r[3]=c->r[30]+0x00000C24u; // 800B6810
  c->r[4]=0u+0xFFFFFFFFu; // 800B6814
  c->lr=0x800B681Cu; f_80164EA0(c); // 800B6818
  c->r[3]=c->r[30]+0x00000BCCu; // 800B681C
  c->r[4]=0u+0xFFFFFFFFu; // 800B6820
  c->lr=0x800B6828u; f_800759F8(c); // 800B6824
  c->r[0]=addc(c,c->r[30],0x00000A44u,0); cr0(c,c->r[0]); // 800B6828
  if (crb(c,2)) { goto L_800B685C; } // 800B682C
  c->r[3]=c->r[30]+0x00000B1Cu; // 800B6830
  c->r[4]=0u+0xFFFFFFFFu; // 800B6834
  c->lr=0x800B683Cu; f_80141D80(c); // 800B6838
  c->r[0]=addc(c,c->r[30],0x00000A44u,0); cr0(c,c->r[0]); // 800B683C
  if (crb(c,2)) { goto L_800B685C; } // 800B6840
  c->r[3]=c->r[30]+0x00000A60u; // 800B6844
  c->r[4]=0u+0xFFFFFFFFu; // 800B6848
  c->lr=0x800B6850u; f_80166B20(c); // 800B684C
  c->r[3]=c->r[30]+0x00000A44u; // 800B6850
  c->r[4]=0u+0x00000000u; // 800B6854
  c->lr=0x800B685Cu; f_8002A100(c); // 800B6858
L_800B685C:;
  c->r[3]=c->r[30]+0x000008D0u; // 800B685C
  c->r[4]=0u+0xFFFFFFFFu; // 800B6860
  c->lr=0x800B6868u; f_80075D04(c); // 800B6864
  c->r[3]=c->r[30]|c->r[30]; // 800B6868
  c->r[4]=0u+0x00000000u; // 800B686C
  c->lr=0x800B6874u; f_8006F900(c); // 800B6870
  cmps(c,0,(int32_t)c->r[31],0); // 800B6874
  if (!crb(c,1)) { goto L_800B6884; } // 800B6878
  c->r[3]=c->r[30]|c->r[30]; // 800B687C
  c->lr=0x800B6884u; f_802896EC(c); // 800B6880
L_800B6884:;
  c->r[3]=c->r[30]|c->r[30]; // 800B6884
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6888
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B688C
  c->lr=c->r[0]; // 800B6890
  c->r[1]=c->r[1]+0x00000010u; // 800B6894
  return; // 800B6898
}

// fn_800B689C
void f_800B689C(Ctx* __restrict c) {
  trace_call(0x800B689Cu);
  c->r[3]=c->r[3]+0x000009C0u; // 800B689C
  return; // 800B68A0
}

// fn_800B68A4
void f_800B68A4(Ctx* __restrict c) {
  trace_call(0x800B68A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B68A4
  c->r[0]=c->lr; // 800B68A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B68AC
  c->r[0]=c->r[3]+0x000008A4u; // 800B68B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B68B4
  c->r[31]=c->r[3]|c->r[3]; // 800B68B8
  c->r[4]=R32(c->r[3]+0x00000028u); // 800B68BC
  cmpu(c,0,c->r[4],c->r[0]); // 800B68C0
  if (!crb(c,2)) { goto L_800B68F0; } // 800B68C4
  c->r[12]=R32(c->r[3]+0x00000010u); // 800B68C8
  c->r[12]=R32(c->r[12]+0x00000338u); // 800B68CC
  c->ctr=c->r[12]; // 800B68D0
  if (true) { c->lr=0x800B68D8u; dispatch(c,c->ctr); } // 800B68D4
  c->r[12]=R32(c->r[31]+0x000008A4u); // 800B68D8
  c->r[4]=c->r[3]|c->r[3]; // 800B68DC
  c->r[3]=c->r[31]+0x000008A4u; // 800B68E0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800B68E4
  c->ctr=c->r[12]; // 800B68E8
  if (true) { c->lr=0x800B68F0u; dispatch(c,c->ctr); } // 800B68EC
L_800B68F0:;
  c->r[3]=c->r[31]|c->r[31]; // 800B68F0
  c->lr=0x800B68F8u; f_800CF888(c); // 800B68F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B68F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B68FC
  c->lr=c->r[0]; // 800B6900
  c->r[1]=c->r[1]+0x00000010u; // 800B6904
  return; // 800B6908
}

// fn_800B690C
void f_800B690C(Ctx* __restrict c) {
  trace_call(0x800B690Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B690C
  c->r[0]=c->lr; // 800B6910
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B6914
  W32(c->r[1]+0x00000044u,c->r[0]); // 800B6918
  c->r[0]=0u+0x00000000u; // 800B691C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800B6920
  c->r[31]=c->r[3]|c->r[3]; // 800B6924
  c->r[3]=c->r[1]+0x00000008u; // 800B6928
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B692C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B6930
  W32(c->r[1]+0x00000028u,c->r[0]); // 800B6934
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B6938
  W32(c->r[1]+0x00000030u,c->r[0]); // 800B693C
  c->lr=0x800B6944u; f_800B9BCC(c); // 800B6940
  c->r[12]=R32(c->r[31]+0x00000010u); // 800B6944
  c->r[3]=c->r[31]|c->r[31]; // 800B6948
  c->r[4]=R32(c->r[1]+0x00000008u); // 800B694C
  c->r[12]=R32(c->r[12]+0x00000334u); // 800B6950
  c->ctr=c->r[12]; // 800B6954
  if (true) { c->lr=0x800B695Cu; dispatch(c,c->ctr); } // 800B6958
  c->r[0]=R32(c->r[1]+0x00000044u); // 800B695C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800B6960
  c->lr=c->r[0]; // 800B6964
  c->r[1]=c->r[1]+0x00000040u; // 800B6968
  return; // 800B696C
}

// fn_800B6970
void f_800B6970(Ctx* __restrict c) {
  trace_call(0x800B6970u);
  c->r[12]=R32(c->r[3]+0x00000010u); // 800B6970
  c->r[12]=R32(c->r[12]+0x00000334u); // 800B6974
  c->ctr=c->r[12]; // 800B6978
  if (true) { dispatch(c,c->ctr); return; } // 800B697C
}

// fn_800B6980
void f_800B6980(Ctx* __restrict c) {
  trace_call(0x800B6980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6980
  c->r[4]=0u+0xE0000000u; // 800B6984
  c->r[0]=0u+0x00000008u; // 800B6988
  c->r[3]=0u+0x00000008u; // 800B698C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B6990
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800B6994
  c->r[1]=c->r[1]+0x00000010u; // 800B6998
  return; // 800B699C
}

// fn_800B69A0
void f_800B69A0(Ctx* __restrict c) {
  trace_call(0x800B69A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B69A0
  c->r[0]=c->lr; // 800B69A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B69A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B69AC
  c->r[31]=c->r[3]|c->r[3]; // 800B69B0
  c->lr=0x800B69B8u; f_800B6470(c); // 800B69B4
  c->r[12]=R32(c->r[31]+0x000009C0u); // 800B69B8
  c->r[3]=c->r[31]+0x000009C0u; // 800B69BC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800B69C0
  c->ctr=c->r[12]; // 800B69C4
  if (true) { c->lr=0x800B69CCu; dispatch(c,c->ctr); } // 800B69C8
  c->r[12]=R32(c->r[31]+0x000009C0u); // 800B69CC
  c->r[3]=c->r[31]+0x000009C0u; // 800B69D0
  c->r[12]=R32(c->r[12]+0x00000018u); // 800B69D4
  c->ctr=c->r[12]; // 800B69D8
  if (true) { c->lr=0x800B69E0u; dispatch(c,c->ctr); } // 800B69DC
  c->r[3]=c->r[31]|c->r[31]; // 800B69E0
  c->r[4]=0u+0x00000000u; // 800B69E4
  c->r[5]=0u+0x00000000u; // 800B69E8
  c->lr=0x800B69F0u; f_80076080(c); // 800B69EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B69F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B69F4
  c->lr=c->r[0]; // 800B69F8
  c->r[1]=c->r[1]+0x00000010u; // 800B69FC
  return; // 800B6A00
}

// fn_800B6A04
void f_800B6A04(Ctx* __restrict c) {
  trace_call(0x800B6A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6A04
  c->r[0]=c->lr; // 800B6A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6A0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B6A10
  c->r[31]=c->r[3]|c->r[3]; // 800B6A14
  c->r[12]=R32(c->r[3]+0x000009C0u); // 800B6A18
  c->r[12]=R32(c->r[12]+0x00000020u); // 800B6A1C
  c->ctr=c->r[12]; // 800B6A20
  c->r[3]=c->r[3]+0x000009C0u; // 800B6A24
  if (true) { c->lr=0x800B6A2Cu; dispatch(c,c->ctr); } // 800B6A28
  c->r[3]=c->r[31]|c->r[31]; // 800B6A2C
  c->r[4]=0u+0x00000000u; // 800B6A30
  c->r[5]=0u+0x00000000u; // 800B6A34
  c->lr=0x800B6A3Cu; f_80076080(c); // 800B6A38
  c->r[3]=c->r[31]|c->r[31]; // 800B6A3C
  c->lr=0x800B6A44u; f_800D9778(c); // 800B6A40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B6A48
  c->lr=c->r[0]; // 800B6A4C
  c->r[1]=c->r[1]+0x00000010u; // 800B6A50
  return; // 800B6A54
}

// dtor_800B6A58
void f_800B6A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6A58
  c->r[0]=c->lr; // 800B6A5C
  cmps(c,0,(int32_t)c->r[3],0); // 800B6A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B6A64
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800B6A68
  c->r[30]=c->r[3]|c->r[3]; // 800B6A6C
  c->r[31]=c->r[4]|c->r[4]; // 800B6A70
  if (crb(c,2)) { goto L_800B6AAC; } // 800B6A74
  c->r[4]=0u+0xFFFFFFFFu; // 800B6A78
  c->r[3]=c->r[3]+0x000009C0u; // 800B6A7C
  c->lr=0x800B6A84u; f_801DE238(c); // 800B6A80
  c->r[3]=c->r[30]+0x000008A4u; // 800B6A84
  c->r[4]=0u+0xFFFFFFFFu; // 800B6A88
  c->lr=0x800B6A90u; f_80075D04(c); // 800B6A8C
  c->r[3]=c->r[30]|c->r[30]; // 800B6A90
  c->r[4]=0u+0x00000000u; // 800B6A94
  c->lr=0x800B6A9Cu; f_8006F900(c); // 800B6A98
  cmps(c,0,(int32_t)c->r[31],0); // 800B6A9C
  if (!crb(c,1)) { goto L_800B6AAC; } // 800B6AA0
  c->r[3]=c->r[30]|c->r[30]; // 800B6AA4
  c->lr=0x800B6AACu; f_802896EC(c); // 800B6AA8
L_800B6AAC:;
  c->r[3]=c->r[30]|c->r[30]; // 800B6AAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800B6AB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B6AB4
  c->lr=c->r[0]; // 800B6AB8
  c->r[1]=c->r[1]+0x00000010u; // 800B6ABC
  return; // 800B6AC0
}

// fn_800B6AC4
void f_800B6AC4(Ctx* __restrict c) {
  trace_call(0x800B6AC4u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6AC4
  c->r[0]=c->r[3]|c->r[3]; // 800B6AC8
  c->r[3]=c->r[4]|c->r[4]; // 800B6ACC
  c->r[12]=R32(c->r[12]+0x00000194u); // 800B6AD0
  c->r[4]=c->r[0]|c->r[0]; // 800B6AD4
  c->ctr=c->r[12]; // 800B6AD8
  if (true) { dispatch(c,c->ctr); return; } // 800B6ADC
}

// fn_800B6AE0
void f_800B6AE0(Ctx* __restrict c) {
  trace_call(0x800B6AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6AE0
  c->r[0]=c->lr; // 800B6AE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6AE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6AEC
  c->r[31]=c->r[5]|c->r[5]; // 800B6AF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6AF4
  c->r[30]=c->r[4]|c->r[4]; // 800B6AF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6AFC
  c->r[29]=c->r[3]|c->r[3]; // 800B6B00
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6B04
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B6B08
  c->ctr=c->r[12]; // 800B6B0C
  if (true) { c->lr=0x800B6B14u; dispatch(c,c->ctr); } // 800B6B10
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B6B14
  c->r[3]=c->r[30]|c->r[30]; // 800B6B18
  c->r[4]=c->r[31]|c->r[31]; // 800B6B1C
  c->r[5]=c->r[29]|c->r[29]; // 800B6B20
  c->r[12]=R32(c->r[12]+0x00000190u); // 800B6B24
  c->ctr=c->r[12]; // 800B6B28
  if (true) { c->lr=0x800B6B30u; dispatch(c,c->ctr); } // 800B6B2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6B30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6B34
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6B38
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6B3C
  c->lr=c->r[0]; // 800B6B40
  c->r[1]=c->r[1]+0x00000020u; // 800B6B44
  return; // 800B6B48
}

// fn_800B6B4C
void f_800B6B4C(Ctx* __restrict c) {
  trace_call(0x800B6B4Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6B4C
  c->r[0]=c->r[3]|c->r[3]; // 800B6B50
  c->r[3]=c->r[4]|c->r[4]; // 800B6B54
  c->r[12]=R32(c->r[12]+0x0000018Cu); // 800B6B58
  c->r[4]=c->r[0]|c->r[0]; // 800B6B5C
  c->ctr=c->r[12]; // 800B6B60
  if (true) { dispatch(c,c->ctr); return; } // 800B6B64
}

// fn_800B6B68
void f_800B6B68(Ctx* __restrict c) {
  trace_call(0x800B6B68u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6B68
  c->r[0]=c->r[3]|c->r[3]; // 800B6B6C
  c->r[3]=c->r[4]|c->r[4]; // 800B6B70
  c->r[12]=R32(c->r[12]+0x00000188u); // 800B6B74
  c->r[4]=c->r[0]|c->r[0]; // 800B6B78
  c->ctr=c->r[12]; // 800B6B7C
  if (true) { dispatch(c,c->ctr); return; } // 800B6B80
}

// fn_800B6B84
void f_800B6B84(Ctx* __restrict c) {
  trace_call(0x800B6B84u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6B84
  c->r[0]=c->r[3]|c->r[3]; // 800B6B88
  c->r[3]=c->r[4]|c->r[4]; // 800B6B8C
  c->r[12]=R32(c->r[12]+0x00000184u); // 800B6B90
  c->r[4]=c->r[0]|c->r[0]; // 800B6B94
  c->ctr=c->r[12]; // 800B6B98
  if (true) { dispatch(c,c->ctr); return; } // 800B6B9C
}

// fn_800B6BA0
void f_800B6BA0(Ctx* __restrict c) {
  trace_call(0x800B6BA0u);
  c->r[3]=0u+0x0000000Au; // 800B6BA0
  return; // 800B6BA4
}

// fn_800B6BA8
void f_800B6BA8(Ctx* __restrict c) {
  trace_call(0x800B6BA8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6BA8
  c->r[0]=c->r[3]|c->r[3]; // 800B6BAC
  c->r[3]=c->r[4]|c->r[4]; // 800B6BB0
  c->r[12]=R32(c->r[12]+0x0000016Cu); // 800B6BB4
  c->r[4]=c->r[0]|c->r[0]; // 800B6BB8
  c->ctr=c->r[12]; // 800B6BBC
  if (true) { dispatch(c,c->ctr); return; } // 800B6BC0
}

// fn_800B6BC4
void f_800B6BC4(Ctx* __restrict c) {
  trace_call(0x800B6BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6BC4
  c->r[0]=c->lr; // 800B6BC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6BCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6BD0
  c->r[31]=c->r[5]|c->r[5]; // 800B6BD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6BD8
  c->r[30]=c->r[4]|c->r[4]; // 800B6BDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6BE0
  c->r[29]=c->r[3]|c->r[3]; // 800B6BE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6BE8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B6BEC
  c->ctr=c->r[12]; // 800B6BF0
  if (true) { c->lr=0x800B6BF8u; dispatch(c,c->ctr); } // 800B6BF4
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B6BF8
  c->r[3]=c->r[30]|c->r[30]; // 800B6BFC
  c->r[4]=c->r[31]|c->r[31]; // 800B6C00
  c->r[5]=c->r[29]|c->r[29]; // 800B6C04
  c->r[12]=R32(c->r[12]+0x00000168u); // 800B6C08
  c->ctr=c->r[12]; // 800B6C0C
  if (true) { c->lr=0x800B6C14u; dispatch(c,c->ctr); } // 800B6C10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6C14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6C18
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6C1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6C20
  c->lr=c->r[0]; // 800B6C24
  c->r[1]=c->r[1]+0x00000020u; // 800B6C28
  return; // 800B6C2C
}

// fn_800B6C30
void f_800B6C30(Ctx* __restrict c) {
  trace_call(0x800B6C30u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6C30
  c->r[0]=c->r[3]|c->r[3]; // 800B6C34
  c->r[3]=c->r[4]|c->r[4]; // 800B6C38
  c->r[12]=R32(c->r[12]+0x00000164u); // 800B6C3C
  c->r[4]=c->r[0]|c->r[0]; // 800B6C40
  c->ctr=c->r[12]; // 800B6C44
  if (true) { dispatch(c,c->ctr); return; } // 800B6C48
}

// fn_800B6C4C
void f_800B6C4C(Ctx* __restrict c) {
  trace_call(0x800B6C4Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6C4C
  c->r[0]=c->r[3]|c->r[3]; // 800B6C50
  c->r[3]=c->r[4]|c->r[4]; // 800B6C54
  c->r[12]=R32(c->r[12]+0x00000160u); // 800B6C58
  c->r[4]=c->r[0]|c->r[0]; // 800B6C5C
  c->ctr=c->r[12]; // 800B6C60
  if (true) { dispatch(c,c->ctr); return; } // 800B6C64
}

// fn_800B6C68
void f_800B6C68(Ctx* __restrict c) {
  trace_call(0x800B6C68u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6C68
  c->r[0]=c->r[3]|c->r[3]; // 800B6C6C
  c->r[3]=c->r[4]|c->r[4]; // 800B6C70
  c->r[12]=R32(c->r[12]+0x0000015Cu); // 800B6C74
  c->r[4]=c->r[0]|c->r[0]; // 800B6C78
  c->ctr=c->r[12]; // 800B6C7C
  if (true) { dispatch(c,c->ctr); return; } // 800B6C80
}

// fn_800B6C84
void f_800B6C84(Ctx* __restrict c) {
  trace_call(0x800B6C84u);
  c->r[3]=0u+0x0000000Bu; // 800B6C84
  return; // 800B6C88
}

// fn_800B6C8C
void f_800B6C8C(Ctx* __restrict c) {
  trace_call(0x800B6C8Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6C8C
  c->r[0]=c->r[3]|c->r[3]; // 800B6C90
  c->r[3]=c->r[4]|c->r[4]; // 800B6C94
  c->r[12]=R32(c->r[12]+0x00000158u); // 800B6C98
  c->r[4]=c->r[0]|c->r[0]; // 800B6C9C
  c->ctr=c->r[12]; // 800B6CA0
  if (true) { dispatch(c,c->ctr); return; } // 800B6CA4
}

// fn_800B6CA8
void f_800B6CA8(Ctx* __restrict c) {
  trace_call(0x800B6CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6CA8
  c->r[0]=c->lr; // 800B6CAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6CB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6CB4
  c->r[31]=c->r[5]|c->r[5]; // 800B6CB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6CBC
  c->r[30]=c->r[4]|c->r[4]; // 800B6CC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6CC4
  c->r[29]=c->r[3]|c->r[3]; // 800B6CC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6CCC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B6CD0
  c->ctr=c->r[12]; // 800B6CD4
  if (true) { c->lr=0x800B6CDCu; dispatch(c,c->ctr); } // 800B6CD8
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B6CDC
  c->r[3]=c->r[30]|c->r[30]; // 800B6CE0
  c->r[4]=c->r[31]|c->r[31]; // 800B6CE4
  c->r[5]=c->r[29]|c->r[29]; // 800B6CE8
  c->r[12]=R32(c->r[12]+0x00000154u); // 800B6CEC
  c->ctr=c->r[12]; // 800B6CF0
  if (true) { c->lr=0x800B6CF8u; dispatch(c,c->ctr); } // 800B6CF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6CF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6CFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6D00
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6D04
  c->lr=c->r[0]; // 800B6D08
  c->r[1]=c->r[1]+0x00000020u; // 800B6D0C
  return; // 800B6D10
}

// fn_800B6D14
void f_800B6D14(Ctx* __restrict c) {
  trace_call(0x800B6D14u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6D14
  c->r[0]=c->r[3]|c->r[3]; // 800B6D18
  c->r[3]=c->r[4]|c->r[4]; // 800B6D1C
  c->r[12]=R32(c->r[12]+0x00000150u); // 800B6D20
  c->r[4]=c->r[0]|c->r[0]; // 800B6D24
  c->ctr=c->r[12]; // 800B6D28
  if (true) { dispatch(c,c->ctr); return; } // 800B6D2C
}

// fn_800B6D30
void f_800B6D30(Ctx* __restrict c) {
  trace_call(0x800B6D30u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6D30
  c->r[0]=c->r[3]|c->r[3]; // 800B6D34
  c->r[3]=c->r[4]|c->r[4]; // 800B6D38
  c->r[12]=R32(c->r[12]+0x0000014Cu); // 800B6D3C
  c->r[4]=c->r[0]|c->r[0]; // 800B6D40
  c->ctr=c->r[12]; // 800B6D44
  if (true) { dispatch(c,c->ctr); return; } // 800B6D48
}

// fn_800B6D4C
void f_800B6D4C(Ctx* __restrict c) {
  trace_call(0x800B6D4Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6D4C
  c->r[0]=c->r[3]|c->r[3]; // 800B6D50
  c->r[3]=c->r[4]|c->r[4]; // 800B6D54
  c->r[12]=R32(c->r[12]+0x00000148u); // 800B6D58
  c->r[4]=c->r[0]|c->r[0]; // 800B6D5C
  c->ctr=c->r[12]; // 800B6D60
  if (true) { dispatch(c,c->ctr); return; } // 800B6D64
}

// fn_800B6D68
void f_800B6D68(Ctx* __restrict c) {
  trace_call(0x800B6D68u);
  c->r[3]=0u+0x00000009u; // 800B6D68
  return; // 800B6D6C
}

// fn_800B6D70
void f_800B6D70(Ctx* __restrict c) {
  trace_call(0x800B6D70u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6D70
  c->r[0]=c->r[3]|c->r[3]; // 800B6D74
  c->r[3]=c->r[4]|c->r[4]; // 800B6D78
  c->r[12]=R32(c->r[12]+0x000001BCu); // 800B6D7C
  c->r[4]=c->r[0]|c->r[0]; // 800B6D80
  c->ctr=c->r[12]; // 800B6D84
  if (true) { dispatch(c,c->ctr); return; } // 800B6D88
}

// fn_800B6D8C
void f_800B6D8C(Ctx* __restrict c) {
  trace_call(0x800B6D8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6D8C
  c->r[0]=c->lr; // 800B6D90
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6D94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6D98
  c->r[31]=c->r[5]|c->r[5]; // 800B6D9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6DA0
  c->r[30]=c->r[4]|c->r[4]; // 800B6DA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6DA8
  c->r[29]=c->r[3]|c->r[3]; // 800B6DAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6DB0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B6DB4
  c->ctr=c->r[12]; // 800B6DB8
  if (true) { c->lr=0x800B6DC0u; dispatch(c,c->ctr); } // 800B6DBC
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B6DC0
  c->r[3]=c->r[30]|c->r[30]; // 800B6DC4
  c->r[4]=c->r[31]|c->r[31]; // 800B6DC8
  c->r[5]=c->r[29]|c->r[29]; // 800B6DCC
  c->r[12]=R32(c->r[12]+0x000001B8u); // 800B6DD0
  c->ctr=c->r[12]; // 800B6DD4
  if (true) { c->lr=0x800B6DDCu; dispatch(c,c->ctr); } // 800B6DD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6DDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6DE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6DE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6DE8
  c->lr=c->r[0]; // 800B6DEC
  c->r[1]=c->r[1]+0x00000020u; // 800B6DF0
  return; // 800B6DF4
}

// fn_800B6DF8
void f_800B6DF8(Ctx* __restrict c) {
  trace_call(0x800B6DF8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6DF8
  c->r[0]=c->r[3]|c->r[3]; // 800B6DFC
  c->r[3]=c->r[4]|c->r[4]; // 800B6E00
  c->r[12]=R32(c->r[12]+0x000001B4u); // 800B6E04
  c->r[4]=c->r[0]|c->r[0]; // 800B6E08
  c->ctr=c->r[12]; // 800B6E0C
  if (true) { dispatch(c,c->ctr); return; } // 800B6E10
}

// fn_800B6E14
void f_800B6E14(Ctx* __restrict c) {
  trace_call(0x800B6E14u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6E14
  c->r[0]=c->r[3]|c->r[3]; // 800B6E18
  c->r[3]=c->r[4]|c->r[4]; // 800B6E1C
  c->r[12]=R32(c->r[12]+0x000001B0u); // 800B6E20
  c->r[4]=c->r[0]|c->r[0]; // 800B6E24
  c->ctr=c->r[12]; // 800B6E28
  if (true) { dispatch(c,c->ctr); return; } // 800B6E2C
}

// fn_800B6E30
void f_800B6E30(Ctx* __restrict c) {
  trace_call(0x800B6E30u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6E30
  c->r[0]=c->r[3]|c->r[3]; // 800B6E34
  c->r[3]=c->r[4]|c->r[4]; // 800B6E38
  c->r[12]=R32(c->r[12]+0x000001ACu); // 800B6E3C
  c->r[4]=c->r[0]|c->r[0]; // 800B6E40
  c->ctr=c->r[12]; // 800B6E44
  if (true) { dispatch(c,c->ctr); return; } // 800B6E48
}

// fn_800B6E4C
void f_800B6E4C(Ctx* __restrict c) {
  trace_call(0x800B6E4Cu);
  c->r[3]=0u+0x00000012u; // 800B6E4C
  return; // 800B6E50
}

// fn_800B6E54
void f_800B6E54(Ctx* __restrict c) {
  trace_call(0x800B6E54u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6E54
  c->r[0]=c->r[3]|c->r[3]; // 800B6E58
  c->r[3]=c->r[4]|c->r[4]; // 800B6E5C
  c->r[12]=R32(c->r[12]+0x00000144u); // 800B6E60
  c->r[4]=c->r[0]|c->r[0]; // 800B6E64
  c->ctr=c->r[12]; // 800B6E68
  if (true) { dispatch(c,c->ctr); return; } // 800B6E6C
}

// fn_800B6E70
void f_800B6E70(Ctx* __restrict c) {
  trace_call(0x800B6E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6E70
  c->r[0]=c->lr; // 800B6E74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6E78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6E7C
  c->r[31]=c->r[5]|c->r[5]; // 800B6E80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6E84
  c->r[30]=c->r[4]|c->r[4]; // 800B6E88
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6E8C
  c->r[29]=c->r[3]|c->r[3]; // 800B6E90
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6E94
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B6E98
  c->ctr=c->r[12]; // 800B6E9C
  if (true) { c->lr=0x800B6EA4u; dispatch(c,c->ctr); } // 800B6EA0
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B6EA4
  c->r[3]=c->r[30]|c->r[30]; // 800B6EA8
  c->r[4]=c->r[31]|c->r[31]; // 800B6EAC
  c->r[5]=c->r[29]|c->r[29]; // 800B6EB0
  c->r[12]=R32(c->r[12]+0x00000140u); // 800B6EB4
  c->ctr=c->r[12]; // 800B6EB8
  if (true) { c->lr=0x800B6EC0u; dispatch(c,c->ctr); } // 800B6EBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6EC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6EC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6EC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6ECC
  c->lr=c->r[0]; // 800B6ED0
  c->r[1]=c->r[1]+0x00000020u; // 800B6ED4
  return; // 800B6ED8
}

// fn_800B6EDC
void f_800B6EDC(Ctx* __restrict c) {
  trace_call(0x800B6EDCu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6EDC
  c->r[0]=c->r[3]|c->r[3]; // 800B6EE0
  c->r[3]=c->r[4]|c->r[4]; // 800B6EE4
  c->r[12]=R32(c->r[12]+0x0000013Cu); // 800B6EE8
  c->r[4]=c->r[0]|c->r[0]; // 800B6EEC
  c->ctr=c->r[12]; // 800B6EF0
  if (true) { dispatch(c,c->ctr); return; } // 800B6EF4
}

// fn_800B6EF8
void f_800B6EF8(Ctx* __restrict c) {
  trace_call(0x800B6EF8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6EF8
  c->r[0]=c->r[3]|c->r[3]; // 800B6EFC
  c->r[3]=c->r[4]|c->r[4]; // 800B6F00
  c->r[12]=R32(c->r[12]+0x00000138u); // 800B6F04
  c->r[4]=c->r[0]|c->r[0]; // 800B6F08
  c->ctr=c->r[12]; // 800B6F0C
  if (true) { dispatch(c,c->ctr); return; } // 800B6F10
}

// fn_800B6F14
void f_800B6F14(Ctx* __restrict c) {
  trace_call(0x800B6F14u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6F14
  c->r[0]=c->r[3]|c->r[3]; // 800B6F18
  c->r[3]=c->r[4]|c->r[4]; // 800B6F1C
  c->r[12]=R32(c->r[12]+0x00000134u); // 800B6F20
  c->r[4]=c->r[0]|c->r[0]; // 800B6F24
  c->ctr=c->r[12]; // 800B6F28
  if (true) { dispatch(c,c->ctr); return; } // 800B6F2C
}

// fn_800B6F30
void f_800B6F30(Ctx* __restrict c) {
  trace_call(0x800B6F30u);
  c->r[3]=0u+0x00000008u; // 800B6F30
  return; // 800B6F34
}

// fn_800B6F38
void f_800B6F38(Ctx* __restrict c) {
  trace_call(0x800B6F38u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6F38
  c->r[0]=c->r[3]|c->r[3]; // 800B6F3C
  c->r[3]=c->r[4]|c->r[4]; // 800B6F40
  c->r[12]=R32(c->r[12]+0x00000130u); // 800B6F44
  c->r[4]=c->r[0]|c->r[0]; // 800B6F48
  c->ctr=c->r[12]; // 800B6F4C
  if (true) { dispatch(c,c->ctr); return; } // 800B6F50
}

// fn_800B6F54
void f_800B6F54(Ctx* __restrict c) {
  trace_call(0x800B6F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B6F54
  c->r[0]=c->lr; // 800B6F58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B6F5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B6F60
  c->r[31]=c->r[5]|c->r[5]; // 800B6F64
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B6F68
  c->r[30]=c->r[4]|c->r[4]; // 800B6F6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B6F70
  c->r[29]=c->r[3]|c->r[3]; // 800B6F74
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B6F78
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B6F7C
  c->ctr=c->r[12]; // 800B6F80
  if (true) { c->lr=0x800B6F88u; dispatch(c,c->ctr); } // 800B6F84
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B6F88
  c->r[3]=c->r[30]|c->r[30]; // 800B6F8C
  c->r[4]=c->r[31]|c->r[31]; // 800B6F90
  c->r[5]=c->r[29]|c->r[29]; // 800B6F94
  c->r[12]=R32(c->r[12]+0x0000012Cu); // 800B6F98
  c->ctr=c->r[12]; // 800B6F9C
  if (true) { c->lr=0x800B6FA4u; dispatch(c,c->ctr); } // 800B6FA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B6FA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B6FA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B6FAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B6FB0
  c->lr=c->r[0]; // 800B6FB4
  c->r[1]=c->r[1]+0x00000020u; // 800B6FB8
  return; // 800B6FBC
}

// fn_800B6FC0
void f_800B6FC0(Ctx* __restrict c) {
  trace_call(0x800B6FC0u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6FC0
  c->r[0]=c->r[3]|c->r[3]; // 800B6FC4
  c->r[3]=c->r[4]|c->r[4]; // 800B6FC8
  c->r[12]=R32(c->r[12]+0x00000128u); // 800B6FCC
  c->r[4]=c->r[0]|c->r[0]; // 800B6FD0
  c->ctr=c->r[12]; // 800B6FD4
  if (true) { dispatch(c,c->ctr); return; } // 800B6FD8
}

// fn_800B6FDC
void f_800B6FDC(Ctx* __restrict c) {
  trace_call(0x800B6FDCu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6FDC
  c->r[0]=c->r[3]|c->r[3]; // 800B6FE0
  c->r[3]=c->r[4]|c->r[4]; // 800B6FE4
  c->r[12]=R32(c->r[12]+0x00000124u); // 800B6FE8
  c->r[4]=c->r[0]|c->r[0]; // 800B6FEC
  c->ctr=c->r[12]; // 800B6FF0
  if (true) { dispatch(c,c->ctr); return; } // 800B6FF4
}

// fn_800B6FF8
void f_800B6FF8(Ctx* __restrict c) {
  trace_call(0x800B6FF8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B6FF8
  c->r[0]=c->r[3]|c->r[3]; // 800B6FFC
  c->r[3]=c->r[4]|c->r[4]; // 800B7000
  c->r[12]=R32(c->r[12]+0x00000120u); // 800B7004
  c->r[4]=c->r[0]|c->r[0]; // 800B7008
  c->ctr=c->r[12]; // 800B700C
  if (true) { dispatch(c,c->ctr); return; } // 800B7010
}

// fn_800B7014
void f_800B7014(Ctx* __restrict c) {
  trace_call(0x800B7014u);
  c->r[3]=0u+0x00000007u; // 800B7014
  return; // 800B7018
}

// fn_800B701C
void f_800B701C(Ctx* __restrict c) {
  trace_call(0x800B701Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B701C
  c->r[0]=c->r[3]|c->r[3]; // 800B7020
  c->r[3]=c->r[4]|c->r[4]; // 800B7024
  c->r[12]=R32(c->r[12]+0x0000011Cu); // 800B7028
  c->r[4]=c->r[0]|c->r[0]; // 800B702C
  c->ctr=c->r[12]; // 800B7030
  if (true) { dispatch(c,c->ctr); return; } // 800B7034
}

// fn_800B7038
void f_800B7038(Ctx* __restrict c) {
  trace_call(0x800B7038u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7038
  c->r[0]=c->lr; // 800B703C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7040
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B7044
  c->r[31]=c->r[5]|c->r[5]; // 800B7048
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B704C
  c->r[30]=c->r[4]|c->r[4]; // 800B7050
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B7054
  c->r[29]=c->r[3]|c->r[3]; // 800B7058
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B705C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B7060
  c->ctr=c->r[12]; // 800B7064
  if (true) { c->lr=0x800B706Cu; dispatch(c,c->ctr); } // 800B7068
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B706C
  c->r[3]=c->r[30]|c->r[30]; // 800B7070
  c->r[4]=c->r[31]|c->r[31]; // 800B7074
  c->r[5]=c->r[29]|c->r[29]; // 800B7078
  c->r[12]=R32(c->r[12]+0x00000118u); // 800B707C
  c->ctr=c->r[12]; // 800B7080
  if (true) { c->lr=0x800B7088u; dispatch(c,c->ctr); } // 800B7084
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7088
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B708C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7090
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B7094
  c->lr=c->r[0]; // 800B7098
  c->r[1]=c->r[1]+0x00000020u; // 800B709C
  return; // 800B70A0
}

// fn_800B70A4
void f_800B70A4(Ctx* __restrict c) {
  trace_call(0x800B70A4u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B70A4
  c->r[0]=c->r[3]|c->r[3]; // 800B70A8
  c->r[3]=c->r[4]|c->r[4]; // 800B70AC
  c->r[12]=R32(c->r[12]+0x00000114u); // 800B70B0
  c->r[4]=c->r[0]|c->r[0]; // 800B70B4
  c->ctr=c->r[12]; // 800B70B8
  if (true) { dispatch(c,c->ctr); return; } // 800B70BC
}

// fn_800B70C0
void f_800B70C0(Ctx* __restrict c) {
  trace_call(0x800B70C0u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B70C0
  c->r[0]=c->r[3]|c->r[3]; // 800B70C4
  c->r[3]=c->r[4]|c->r[4]; // 800B70C8
  c->r[12]=R32(c->r[12]+0x00000110u); // 800B70CC
  c->r[4]=c->r[0]|c->r[0]; // 800B70D0
  c->ctr=c->r[12]; // 800B70D4
  if (true) { dispatch(c,c->ctr); return; } // 800B70D8
}

// fn_800B70DC
void f_800B70DC(Ctx* __restrict c) {
  trace_call(0x800B70DCu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B70DC
  c->r[0]=c->r[3]|c->r[3]; // 800B70E0
  c->r[3]=c->r[4]|c->r[4]; // 800B70E4
  c->r[12]=R32(c->r[12]+0x0000010Cu); // 800B70E8
  c->r[4]=c->r[0]|c->r[0]; // 800B70EC
  c->ctr=c->r[12]; // 800B70F0
  if (true) { dispatch(c,c->ctr); return; } // 800B70F4
}

// fn_800B70F8
void f_800B70F8(Ctx* __restrict c) {
  trace_call(0x800B70F8u);
  c->r[3]=0u+0x0000000Fu; // 800B70F8
  return; // 800B70FC
}

// fn_800B7100
void f_800B7100(Ctx* __restrict c) {
  trace_call(0x800B7100u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7100
  c->r[0]=c->r[3]|c->r[3]; // 800B7104
  c->r[3]=c->r[4]|c->r[4]; // 800B7108
  c->r[12]=R32(c->r[12]+0x00000108u); // 800B710C
  c->r[4]=c->r[0]|c->r[0]; // 800B7110
  c->ctr=c->r[12]; // 800B7114
  if (true) { dispatch(c,c->ctr); return; } // 800B7118
}

// fn_800B711C
void f_800B711C(Ctx* __restrict c) {
  trace_call(0x800B711Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B711C
  c->r[0]=c->lr; // 800B7120
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7124
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B7128
  c->r[31]=c->r[5]|c->r[5]; // 800B712C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B7130
  c->r[30]=c->r[4]|c->r[4]; // 800B7134
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B7138
  c->r[29]=c->r[3]|c->r[3]; // 800B713C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B7140
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B7144
  c->ctr=c->r[12]; // 800B7148
  if (true) { c->lr=0x800B7150u; dispatch(c,c->ctr); } // 800B714C
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B7150
  c->r[3]=c->r[30]|c->r[30]; // 800B7154
  c->r[4]=c->r[31]|c->r[31]; // 800B7158
  c->r[5]=c->r[29]|c->r[29]; // 800B715C
  c->r[12]=R32(c->r[12]+0x00000104u); // 800B7160
  c->ctr=c->r[12]; // 800B7164
  if (true) { c->lr=0x800B716Cu; dispatch(c,c->ctr); } // 800B7168
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B716C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7170
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7174
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B7178
  c->lr=c->r[0]; // 800B717C
  c->r[1]=c->r[1]+0x00000020u; // 800B7180
  return; // 800B7184
}

// fn_800B7188
void f_800B7188(Ctx* __restrict c) {
  trace_call(0x800B7188u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7188
  c->r[0]=c->r[3]|c->r[3]; // 800B718C
  c->r[3]=c->r[4]|c->r[4]; // 800B7190
  c->r[12]=R32(c->r[12]+0x00000100u); // 800B7194
  c->r[4]=c->r[0]|c->r[0]; // 800B7198
  c->ctr=c->r[12]; // 800B719C
  if (true) { dispatch(c,c->ctr); return; } // 800B71A0
}

// fn_800B71A4
void f_800B71A4(Ctx* __restrict c) {
  trace_call(0x800B71A4u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B71A4
  c->r[0]=c->r[3]|c->r[3]; // 800B71A8
  c->r[3]=c->r[4]|c->r[4]; // 800B71AC
  c->r[12]=R32(c->r[12]+0x000000FCu); // 800B71B0
  c->r[4]=c->r[0]|c->r[0]; // 800B71B4
  c->ctr=c->r[12]; // 800B71B8
  if (true) { dispatch(c,c->ctr); return; } // 800B71BC
}

// fn_800B71C0
void f_800B71C0(Ctx* __restrict c) {
  trace_call(0x800B71C0u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B71C0
  c->r[0]=c->r[3]|c->r[3]; // 800B71C4
  c->r[3]=c->r[4]|c->r[4]; // 800B71C8
  c->r[12]=R32(c->r[12]+0x000000F8u); // 800B71CC
  c->r[4]=c->r[0]|c->r[0]; // 800B71D0
  c->ctr=c->r[12]; // 800B71D4
  if (true) { dispatch(c,c->ctr); return; } // 800B71D8
}

// fn_800B71DC
void f_800B71DC(Ctx* __restrict c) {
  trace_call(0x800B71DCu);
  c->r[3]=0u+0x0000000Eu; // 800B71DC
  return; // 800B71E0
}

// fn_800B71E4
void f_800B71E4(Ctx* __restrict c) {
  trace_call(0x800B71E4u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B71E4
  c->r[0]=c->r[3]|c->r[3]; // 800B71E8
  c->r[3]=c->r[4]|c->r[4]; // 800B71EC
  c->r[12]=R32(c->r[12]+0x000000F4u); // 800B71F0
  c->r[4]=c->r[0]|c->r[0]; // 800B71F4
  c->ctr=c->r[12]; // 800B71F8
  if (true) { dispatch(c,c->ctr); return; } // 800B71FC
}

// fn_800B7200
void f_800B7200(Ctx* __restrict c) {
  trace_call(0x800B7200u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7200
  c->r[0]=c->lr; // 800B7204
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7208
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B720C
  c->r[31]=c->r[5]|c->r[5]; // 800B7210
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B7214
  c->r[30]=c->r[4]|c->r[4]; // 800B7218
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B721C
  c->r[29]=c->r[3]|c->r[3]; // 800B7220
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B7224
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B7228
  c->ctr=c->r[12]; // 800B722C
  if (true) { c->lr=0x800B7234u; dispatch(c,c->ctr); } // 800B7230
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B7234
  c->r[3]=c->r[30]|c->r[30]; // 800B7238
  c->r[4]=c->r[31]|c->r[31]; // 800B723C
  c->r[5]=c->r[29]|c->r[29]; // 800B7240
  c->r[12]=R32(c->r[12]+0x000000F0u); // 800B7244
  c->ctr=c->r[12]; // 800B7248
  if (true) { c->lr=0x800B7250u; dispatch(c,c->ctr); } // 800B724C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7250
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7254
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7258
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B725C
  c->lr=c->r[0]; // 800B7260
  c->r[1]=c->r[1]+0x00000020u; // 800B7264
  return; // 800B7268
}

// fn_800B726C
void f_800B726C(Ctx* __restrict c) {
  trace_call(0x800B726Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B726C
  c->r[0]=c->r[3]|c->r[3]; // 800B7270
  c->r[3]=c->r[4]|c->r[4]; // 800B7274
  c->r[12]=R32(c->r[12]+0x000000ECu); // 800B7278
  c->r[4]=c->r[0]|c->r[0]; // 800B727C
  c->ctr=c->r[12]; // 800B7280
  if (true) { dispatch(c,c->ctr); return; } // 800B7284
}

// fn_800B7288
void f_800B7288(Ctx* __restrict c) {
  trace_call(0x800B7288u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7288
  c->r[0]=c->r[3]|c->r[3]; // 800B728C
  c->r[3]=c->r[4]|c->r[4]; // 800B7290
  c->r[12]=R32(c->r[12]+0x000000E8u); // 800B7294
  c->r[4]=c->r[0]|c->r[0]; // 800B7298
  c->ctr=c->r[12]; // 800B729C
  if (true) { dispatch(c,c->ctr); return; } // 800B72A0
}

// fn_800B72A4
void f_800B72A4(Ctx* __restrict c) {
  trace_call(0x800B72A4u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B72A4
  c->r[0]=c->r[3]|c->r[3]; // 800B72A8
  c->r[3]=c->r[4]|c->r[4]; // 800B72AC
  c->r[12]=R32(c->r[12]+0x000000E4u); // 800B72B0
  c->r[4]=c->r[0]|c->r[0]; // 800B72B4
  c->ctr=c->r[12]; // 800B72B8
  if (true) { dispatch(c,c->ctr); return; } // 800B72BC
}

// fn_800B72C0
void f_800B72C0(Ctx* __restrict c) {
  trace_call(0x800B72C0u);
  c->r[3]=0u+0x0000000Du; // 800B72C0
  return; // 800B72C4
}

// fn_800B72C8
void f_800B72C8(Ctx* __restrict c) {
  trace_call(0x800B72C8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B72C8
  c->r[0]=c->r[3]|c->r[3]; // 800B72CC
  c->r[3]=c->r[4]|c->r[4]; // 800B72D0
  c->r[12]=R32(c->r[12]+0x00000180u); // 800B72D4
  c->r[4]=c->r[0]|c->r[0]; // 800B72D8
  c->ctr=c->r[12]; // 800B72DC
  if (true) { dispatch(c,c->ctr); return; } // 800B72E0
}

// fn_800B72E4
void f_800B72E4(Ctx* __restrict c) {
  trace_call(0x800B72E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B72E4
  c->r[0]=c->lr; // 800B72E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B72EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B72F0
  c->r[31]=c->r[5]|c->r[5]; // 800B72F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B72F8
  c->r[30]=c->r[4]|c->r[4]; // 800B72FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B7300
  c->r[29]=c->r[3]|c->r[3]; // 800B7304
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B7308
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B730C
  c->ctr=c->r[12]; // 800B7310
  if (true) { c->lr=0x800B7318u; dispatch(c,c->ctr); } // 800B7314
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B7318
  c->r[3]=c->r[30]|c->r[30]; // 800B731C
  c->r[4]=c->r[31]|c->r[31]; // 800B7320
  c->r[5]=c->r[29]|c->r[29]; // 800B7324
  c->r[12]=R32(c->r[12]+0x0000017Cu); // 800B7328
  c->ctr=c->r[12]; // 800B732C
  if (true) { c->lr=0x800B7334u; dispatch(c,c->ctr); } // 800B7330
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7334
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7338
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B733C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B7340
  c->lr=c->r[0]; // 800B7344
  c->r[1]=c->r[1]+0x00000020u; // 800B7348
  return; // 800B734C
}

// fn_800B7350
void f_800B7350(Ctx* __restrict c) {
  trace_call(0x800B7350u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7350
  c->r[0]=c->r[3]|c->r[3]; // 800B7354
  c->r[3]=c->r[4]|c->r[4]; // 800B7358
  c->r[12]=R32(c->r[12]+0x00000178u); // 800B735C
  c->r[4]=c->r[0]|c->r[0]; // 800B7360
  c->ctr=c->r[12]; // 800B7364
  if (true) { dispatch(c,c->ctr); return; } // 800B7368
}

// fn_800B736C
void f_800B736C(Ctx* __restrict c) {
  trace_call(0x800B736Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B736C
  c->r[0]=c->r[3]|c->r[3]; // 800B7370
  c->r[3]=c->r[4]|c->r[4]; // 800B7374
  c->r[12]=R32(c->r[12]+0x00000174u); // 800B7378
  c->r[4]=c->r[0]|c->r[0]; // 800B737C
  c->ctr=c->r[12]; // 800B7380
  if (true) { dispatch(c,c->ctr); return; } // 800B7384
}

// fn_800B7388
void f_800B7388(Ctx* __restrict c) {
  trace_call(0x800B7388u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7388
  c->r[0]=c->r[3]|c->r[3]; // 800B738C
  c->r[3]=c->r[4]|c->r[4]; // 800B7390
  c->r[12]=R32(c->r[12]+0x00000170u); // 800B7394
  c->r[4]=c->r[0]|c->r[0]; // 800B7398
  c->ctr=c->r[12]; // 800B739C
  if (true) { dispatch(c,c->ctr); return; } // 800B73A0
}

// fn_800B73A4
void f_800B73A4(Ctx* __restrict c) {
  trace_call(0x800B73A4u);
  c->r[3]=0u+0x00000010u; // 800B73A4
  return; // 800B73A8
}

// fn_800B73AC
void f_800B73AC(Ctx* __restrict c) {
  trace_call(0x800B73ACu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B73AC
  c->r[0]=c->r[3]|c->r[3]; // 800B73B0
  c->r[3]=c->r[4]|c->r[4]; // 800B73B4
  c->r[12]=R32(c->r[12]+0x000000E0u); // 800B73B8
  c->r[4]=c->r[0]|c->r[0]; // 800B73BC
  c->ctr=c->r[12]; // 800B73C0
  if (true) { dispatch(c,c->ctr); return; } // 800B73C4
}

// fn_800B73C8
void f_800B73C8(Ctx* __restrict c) {
  trace_call(0x800B73C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B73C8
  c->r[0]=c->lr; // 800B73CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B73D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B73D4
  c->r[31]=c->r[5]|c->r[5]; // 800B73D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B73DC
  c->r[30]=c->r[4]|c->r[4]; // 800B73E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B73E4
  c->r[29]=c->r[3]|c->r[3]; // 800B73E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B73EC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B73F0
  c->ctr=c->r[12]; // 800B73F4
  if (true) { c->lr=0x800B73FCu; dispatch(c,c->ctr); } // 800B73F8
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B73FC
  c->r[3]=c->r[30]|c->r[30]; // 800B7400
  c->r[4]=c->r[31]|c->r[31]; // 800B7404
  c->r[5]=c->r[29]|c->r[29]; // 800B7408
  c->r[12]=R32(c->r[12]+0x000000DCu); // 800B740C
  c->ctr=c->r[12]; // 800B7410
  if (true) { c->lr=0x800B7418u; dispatch(c,c->ctr); } // 800B7414
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7418
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B741C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7420
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B7424
  c->lr=c->r[0]; // 800B7428
  c->r[1]=c->r[1]+0x00000020u; // 800B742C
  return; // 800B7430
}

// fn_800B7434
void f_800B7434(Ctx* __restrict c) {
  trace_call(0x800B7434u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7434
  c->r[0]=c->r[3]|c->r[3]; // 800B7438
  c->r[3]=c->r[4]|c->r[4]; // 800B743C
  c->r[12]=R32(c->r[12]+0x000000D8u); // 800B7440
  c->r[4]=c->r[0]|c->r[0]; // 800B7444
  c->ctr=c->r[12]; // 800B7448
  if (true) { dispatch(c,c->ctr); return; } // 800B744C
}

// fn_800B7450
void f_800B7450(Ctx* __restrict c) {
  trace_call(0x800B7450u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7450
  c->r[0]=c->r[3]|c->r[3]; // 800B7454
  c->r[3]=c->r[4]|c->r[4]; // 800B7458
  c->r[12]=R32(c->r[12]+0x000000D4u); // 800B745C
  c->r[4]=c->r[0]|c->r[0]; // 800B7460
  c->ctr=c->r[12]; // 800B7464
  if (true) { dispatch(c,c->ctr); return; } // 800B7468
}

// fn_800B746C
void f_800B746C(Ctx* __restrict c) {
  trace_call(0x800B746Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B746C
  c->r[0]=c->r[3]|c->r[3]; // 800B7470
  c->r[3]=c->r[4]|c->r[4]; // 800B7474
  c->r[12]=R32(c->r[12]+0x000000D0u); // 800B7478
  c->r[4]=c->r[0]|c->r[0]; // 800B747C
  c->ctr=c->r[12]; // 800B7480
  if (true) { dispatch(c,c->ctr); return; } // 800B7484
}

// fn_800B7488
void f_800B7488(Ctx* __restrict c) {
  trace_call(0x800B7488u);
  c->r[3]=0u+0x00000006u; // 800B7488
  return; // 800B748C
}

// fn_800B7490
void f_800B7490(Ctx* __restrict c) {
  trace_call(0x800B7490u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7490
  c->r[0]=c->r[3]|c->r[3]; // 800B7494
  c->r[3]=c->r[4]|c->r[4]; // 800B7498
  c->r[12]=R32(c->r[12]+0x000001F8u); // 800B749C
  c->r[4]=c->r[0]|c->r[0]; // 800B74A0
  c->ctr=c->r[12]; // 800B74A4
  if (true) { dispatch(c,c->ctr); return; } // 800B74A8
}

// fn_800B74AC
void f_800B74AC(Ctx* __restrict c) {
  trace_call(0x800B74ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B74AC
  c->r[0]=c->lr; // 800B74B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B74B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B74B8
  c->r[31]=c->r[5]|c->r[5]; // 800B74BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B74C0
  c->r[30]=c->r[4]|c->r[4]; // 800B74C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B74C8
  c->r[29]=c->r[3]|c->r[3]; // 800B74CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B74D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B74D4
  c->ctr=c->r[12]; // 800B74D8
  if (true) { c->lr=0x800B74E0u; dispatch(c,c->ctr); } // 800B74DC
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B74E0
  c->r[3]=c->r[30]|c->r[30]; // 800B74E4
  c->r[4]=c->r[31]|c->r[31]; // 800B74E8
  c->r[5]=c->r[29]|c->r[29]; // 800B74EC
  c->r[12]=R32(c->r[12]+0x000001F4u); // 800B74F0
  c->ctr=c->r[12]; // 800B74F4
  if (true) { c->lr=0x800B74FCu; dispatch(c,c->ctr); } // 800B74F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B74FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7500
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7504
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B7508
  c->lr=c->r[0]; // 800B750C
  c->r[1]=c->r[1]+0x00000020u; // 800B7510
  return; // 800B7514
}

// fn_800B7518
void f_800B7518(Ctx* __restrict c) {
  trace_call(0x800B7518u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7518
  c->r[0]=c->r[3]|c->r[3]; // 800B751C
  c->r[3]=c->r[4]|c->r[4]; // 800B7520
  c->r[12]=R32(c->r[12]+0x000001F0u); // 800B7524
  c->r[4]=c->r[0]|c->r[0]; // 800B7528
  c->ctr=c->r[12]; // 800B752C
  if (true) { dispatch(c,c->ctr); return; } // 800B7530
}

// fn_800B7534
void f_800B7534(Ctx* __restrict c) {
  trace_call(0x800B7534u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7534
  c->r[0]=c->r[3]|c->r[3]; // 800B7538
  c->r[3]=c->r[4]|c->r[4]; // 800B753C
  c->r[12]=R32(c->r[12]+0x000001ECu); // 800B7540
  c->r[4]=c->r[0]|c->r[0]; // 800B7544
  c->ctr=c->r[12]; // 800B7548
  if (true) { dispatch(c,c->ctr); return; } // 800B754C
}

// fn_800B7550
void f_800B7550(Ctx* __restrict c) {
  trace_call(0x800B7550u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7550
  c->r[0]=c->r[3]|c->r[3]; // 800B7554
  c->r[3]=c->r[4]|c->r[4]; // 800B7558
  c->r[12]=R32(c->r[12]+0x000001E8u); // 800B755C
  c->r[4]=c->r[0]|c->r[0]; // 800B7560
  c->ctr=c->r[12]; // 800B7564
  if (true) { dispatch(c,c->ctr); return; } // 800B7568
}

// fn_800B756C
void f_800B756C(Ctx* __restrict c) {
  trace_call(0x800B756Cu);
  c->r[3]=0u+0x00000015u; // 800B756C
  return; // 800B7570
}

// fn_800B7574
void f_800B7574(Ctx* __restrict c) {
  trace_call(0x800B7574u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7574
  c->r[0]=c->r[3]|c->r[3]; // 800B7578
  c->r[3]=c->r[4]|c->r[4]; // 800B757C
  c->r[12]=R32(c->r[12]+0x000001E4u); // 800B7580
  c->r[4]=c->r[0]|c->r[0]; // 800B7584
  c->ctr=c->r[12]; // 800B7588
  if (true) { dispatch(c,c->ctr); return; } // 800B758C
}

// fn_800B7590
void f_800B7590(Ctx* __restrict c) {
  trace_call(0x800B7590u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7590
  c->r[0]=c->lr; // 800B7594
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7598
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B759C
  c->r[31]=c->r[5]|c->r[5]; // 800B75A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B75A4
  c->r[30]=c->r[4]|c->r[4]; // 800B75A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B75AC
  c->r[29]=c->r[3]|c->r[3]; // 800B75B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B75B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B75B8
  c->ctr=c->r[12]; // 800B75BC
  if (true) { c->lr=0x800B75C4u; dispatch(c,c->ctr); } // 800B75C0
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B75C4
  c->r[3]=c->r[30]|c->r[30]; // 800B75C8
  c->r[4]=c->r[31]|c->r[31]; // 800B75CC
  c->r[5]=c->r[29]|c->r[29]; // 800B75D0
  c->r[12]=R32(c->r[12]+0x000001E0u); // 800B75D4
  c->ctr=c->r[12]; // 800B75D8
  if (true) { c->lr=0x800B75E0u; dispatch(c,c->ctr); } // 800B75DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B75E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B75E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B75E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B75EC
  c->lr=c->r[0]; // 800B75F0
  c->r[1]=c->r[1]+0x00000020u; // 800B75F4
  return; // 800B75F8
}

// fn_800B75FC
void f_800B75FC(Ctx* __restrict c) {
  trace_call(0x800B75FCu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B75FC
  c->r[0]=c->r[3]|c->r[3]; // 800B7600
  c->r[3]=c->r[4]|c->r[4]; // 800B7604
  c->r[12]=R32(c->r[12]+0x000001DCu); // 800B7608
  c->r[4]=c->r[0]|c->r[0]; // 800B760C
  c->ctr=c->r[12]; // 800B7610
  if (true) { dispatch(c,c->ctr); return; } // 800B7614
}

// fn_800B7618
void f_800B7618(Ctx* __restrict c) {
  trace_call(0x800B7618u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7618
  c->r[0]=c->r[3]|c->r[3]; // 800B761C
  c->r[3]=c->r[4]|c->r[4]; // 800B7620
  c->r[12]=R32(c->r[12]+0x000001D8u); // 800B7624
  c->r[4]=c->r[0]|c->r[0]; // 800B7628
  c->ctr=c->r[12]; // 800B762C
  if (true) { dispatch(c,c->ctr); return; } // 800B7630
}

// fn_800B7634
void f_800B7634(Ctx* __restrict c) {
  trace_call(0x800B7634u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7634
  c->r[0]=c->r[3]|c->r[3]; // 800B7638
  c->r[3]=c->r[4]|c->r[4]; // 800B763C
  c->r[12]=R32(c->r[12]+0x000001D4u); // 800B7640
  c->r[4]=c->r[0]|c->r[0]; // 800B7644
  c->ctr=c->r[12]; // 800B7648
  if (true) { dispatch(c,c->ctr); return; } // 800B764C
}

// fn_800B7650
void f_800B7650(Ctx* __restrict c) {
  trace_call(0x800B7650u);
  c->r[3]=0u+0x00000014u; // 800B7650
  return; // 800B7654
}

// fn_800B7658
void f_800B7658(Ctx* __restrict c) {
  trace_call(0x800B7658u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7658
  c->r[0]=c->r[3]|c->r[3]; // 800B765C
  c->r[3]=c->r[4]|c->r[4]; // 800B7660
  c->r[12]=R32(c->r[12]+0x000001D0u); // 800B7664
  c->r[4]=c->r[0]|c->r[0]; // 800B7668
  c->ctr=c->r[12]; // 800B766C
  if (true) { dispatch(c,c->ctr); return; } // 800B7670
}

// fn_800B7674
void f_800B7674(Ctx* __restrict c) {
  trace_call(0x800B7674u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7674
  c->r[0]=c->lr; // 800B7678
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B767C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B7680
  c->r[31]=c->r[5]|c->r[5]; // 800B7684
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B7688
  c->r[30]=c->r[4]|c->r[4]; // 800B768C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B7690
  c->r[29]=c->r[3]|c->r[3]; // 800B7694
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B7698
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B769C
  c->ctr=c->r[12]; // 800B76A0
  if (true) { c->lr=0x800B76A8u; dispatch(c,c->ctr); } // 800B76A4
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B76A8
  c->r[3]=c->r[30]|c->r[30]; // 800B76AC
  c->r[4]=c->r[31]|c->r[31]; // 800B76B0
  c->r[5]=c->r[29]|c->r[29]; // 800B76B4
  c->r[12]=R32(c->r[12]+0x000001CCu); // 800B76B8
  c->ctr=c->r[12]; // 800B76BC
  if (true) { c->lr=0x800B76C4u; dispatch(c,c->ctr); } // 800B76C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B76C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B76C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B76CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B76D0
  c->lr=c->r[0]; // 800B76D4
  c->r[1]=c->r[1]+0x00000020u; // 800B76D8
  return; // 800B76DC
}

// fn_800B76E0
void f_800B76E0(Ctx* __restrict c) {
  trace_call(0x800B76E0u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B76E0
  c->r[0]=c->r[3]|c->r[3]; // 800B76E4
  c->r[3]=c->r[4]|c->r[4]; // 800B76E8
  c->r[12]=R32(c->r[12]+0x000001C8u); // 800B76EC
  c->r[4]=c->r[0]|c->r[0]; // 800B76F0
  c->ctr=c->r[12]; // 800B76F4
  if (true) { dispatch(c,c->ctr); return; } // 800B76F8
}

// fn_800B76FC
void f_800B76FC(Ctx* __restrict c) {
  trace_call(0x800B76FCu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B76FC
  c->r[0]=c->r[3]|c->r[3]; // 800B7700
  c->r[3]=c->r[4]|c->r[4]; // 800B7704
  c->r[12]=R32(c->r[12]+0x000001C4u); // 800B7708
  c->r[4]=c->r[0]|c->r[0]; // 800B770C
  c->ctr=c->r[12]; // 800B7710
  if (true) { dispatch(c,c->ctr); return; } // 800B7714
}

// fn_800B7718
void f_800B7718(Ctx* __restrict c) {
  trace_call(0x800B7718u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7718
  c->r[0]=c->r[3]|c->r[3]; // 800B771C
  c->r[3]=c->r[4]|c->r[4]; // 800B7720
  c->r[12]=R32(c->r[12]+0x000001C0u); // 800B7724
  c->r[4]=c->r[0]|c->r[0]; // 800B7728
  c->ctr=c->r[12]; // 800B772C
  if (true) { dispatch(c,c->ctr); return; } // 800B7730
}

// fn_800B7734
void f_800B7734(Ctx* __restrict c) {
  trace_call(0x800B7734u);
  c->r[3]=0u+0x00000013u; // 800B7734
  return; // 800B7738
}

// fn_800B773C
void f_800B773C(Ctx* __restrict c) {
  trace_call(0x800B773Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B773C
  c->r[0]=c->r[3]|c->r[3]; // 800B7740
  c->r[3]=c->r[4]|c->r[4]; // 800B7744
  c->r[12]=R32(c->r[12]+0x000002ACu); // 800B7748
  c->r[4]=c->r[0]|c->r[0]; // 800B774C
  c->ctr=c->r[12]; // 800B7750
  if (true) { dispatch(c,c->ctr); return; } // 800B7754
}

// fn_800B7758
void f_800B7758(Ctx* __restrict c) {
  trace_call(0x800B7758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7758
  c->r[0]=c->lr; // 800B775C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7760
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B7764
  c->r[31]=c->r[5]|c->r[5]; // 800B7768
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B776C
  c->r[30]=c->r[4]|c->r[4]; // 800B7770
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B7774
  c->r[29]=c->r[3]|c->r[3]; // 800B7778
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B777C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B7780
  c->ctr=c->r[12]; // 800B7784
  if (true) { c->lr=0x800B778Cu; dispatch(c,c->ctr); } // 800B7788
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B778C
  c->r[3]=c->r[30]|c->r[30]; // 800B7790
  c->r[4]=c->r[31]|c->r[31]; // 800B7794
  c->r[5]=c->r[29]|c->r[29]; // 800B7798
  c->r[12]=R32(c->r[12]+0x000002A8u); // 800B779C
  c->ctr=c->r[12]; // 800B77A0
  if (true) { c->lr=0x800B77A8u; dispatch(c,c->ctr); } // 800B77A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B77A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B77AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B77B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B77B4
  c->lr=c->r[0]; // 800B77B8
  c->r[1]=c->r[1]+0x00000020u; // 800B77BC
  return; // 800B77C0
}

// fn_800B77C4
void f_800B77C4(Ctx* __restrict c) {
  trace_call(0x800B77C4u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B77C4
  c->r[0]=c->r[3]|c->r[3]; // 800B77C8
  c->r[3]=c->r[4]|c->r[4]; // 800B77CC
  c->r[12]=R32(c->r[12]+0x000002A4u); // 800B77D0
  c->r[4]=c->r[0]|c->r[0]; // 800B77D4
  c->ctr=c->r[12]; // 800B77D8
  if (true) { dispatch(c,c->ctr); return; } // 800B77DC
}

// fn_800B77E0
void f_800B77E0(Ctx* __restrict c) {
  trace_call(0x800B77E0u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B77E0
  c->r[0]=c->r[3]|c->r[3]; // 800B77E4
  c->r[3]=c->r[4]|c->r[4]; // 800B77E8
  c->r[12]=R32(c->r[12]+0x000002A0u); // 800B77EC
  c->r[4]=c->r[0]|c->r[0]; // 800B77F0
  c->ctr=c->r[12]; // 800B77F4
  if (true) { dispatch(c,c->ctr); return; } // 800B77F8
}

// fn_800B77FC
void f_800B77FC(Ctx* __restrict c) {
  trace_call(0x800B77FCu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B77FC
  c->r[0]=c->r[3]|c->r[3]; // 800B7800
  c->r[3]=c->r[4]|c->r[4]; // 800B7804
  c->r[12]=R32(c->r[12]+0x0000029Cu); // 800B7808
  c->r[4]=c->r[0]|c->r[0]; // 800B780C
  c->ctr=c->r[12]; // 800B7810
  if (true) { dispatch(c,c->ctr); return; } // 800B7814
}

// fn_800B7818
void f_800B7818(Ctx* __restrict c) {
  trace_call(0x800B7818u);
  c->r[3]=0u+0x00000021u; // 800B7818
  return; // 800B781C
}

// fn_800B7820
void f_800B7820(Ctx* __restrict c) {
  trace_call(0x800B7820u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7820
  c->r[0]=c->r[3]|c->r[3]; // 800B7824
  c->r[3]=c->r[4]|c->r[4]; // 800B7828
  c->r[12]=R32(c->r[12]+0x00000298u); // 800B782C
  c->r[4]=c->r[0]|c->r[0]; // 800B7830
  c->ctr=c->r[12]; // 800B7834
  if (true) { dispatch(c,c->ctr); return; } // 800B7838
}

// fn_800B783C
void f_800B783C(Ctx* __restrict c) {
  trace_call(0x800B783Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B783C
  c->r[0]=c->lr; // 800B7840
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7844
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B7848
  c->r[31]=c->r[5]|c->r[5]; // 800B784C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B7850
  c->r[30]=c->r[4]|c->r[4]; // 800B7854
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B7858
  c->r[29]=c->r[3]|c->r[3]; // 800B785C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B7860
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B7864
  c->ctr=c->r[12]; // 800B7868
  if (true) { c->lr=0x800B7870u; dispatch(c,c->ctr); } // 800B786C
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B7870
  c->r[3]=c->r[30]|c->r[30]; // 800B7874
  c->r[4]=c->r[31]|c->r[31]; // 800B7878
  c->r[5]=c->r[29]|c->r[29]; // 800B787C
  c->r[12]=R32(c->r[12]+0x00000294u); // 800B7880
  c->ctr=c->r[12]; // 800B7884
  if (true) { c->lr=0x800B788Cu; dispatch(c,c->ctr); } // 800B7888
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B788C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7890
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7894
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B7898
  c->lr=c->r[0]; // 800B789C
  c->r[1]=c->r[1]+0x00000020u; // 800B78A0
  return; // 800B78A4
}

// fn_800B78A8
void f_800B78A8(Ctx* __restrict c) {
  trace_call(0x800B78A8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B78A8
  c->r[0]=c->r[3]|c->r[3]; // 800B78AC
  c->r[3]=c->r[4]|c->r[4]; // 800B78B0
  c->r[12]=R32(c->r[12]+0x00000290u); // 800B78B4
  c->r[4]=c->r[0]|c->r[0]; // 800B78B8
  c->ctr=c->r[12]; // 800B78BC
  if (true) { dispatch(c,c->ctr); return; } // 800B78C0
}

// fn_800B78C4
void f_800B78C4(Ctx* __restrict c) {
  trace_call(0x800B78C4u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B78C4
  c->r[0]=c->r[3]|c->r[3]; // 800B78C8
  c->r[3]=c->r[4]|c->r[4]; // 800B78CC
  c->r[12]=R32(c->r[12]+0x0000028Cu); // 800B78D0
  c->r[4]=c->r[0]|c->r[0]; // 800B78D4
  c->ctr=c->r[12]; // 800B78D8
  if (true) { dispatch(c,c->ctr); return; } // 800B78DC
}

// fn_800B78E0
void f_800B78E0(Ctx* __restrict c) {
  trace_call(0x800B78E0u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B78E0
  c->r[0]=c->r[3]|c->r[3]; // 800B78E4
  c->r[3]=c->r[4]|c->r[4]; // 800B78E8
  c->r[12]=R32(c->r[12]+0x00000288u); // 800B78EC
  c->r[4]=c->r[0]|c->r[0]; // 800B78F0
  c->ctr=c->r[12]; // 800B78F4
  if (true) { dispatch(c,c->ctr); return; } // 800B78F8
}

// fn_800B78FC
void f_800B78FC(Ctx* __restrict c) {
  trace_call(0x800B78FCu);
  c->r[3]=0u+0x00000020u; // 800B78FC
  return; // 800B7900
}

// fn_800B7904
void f_800B7904(Ctx* __restrict c) {
  trace_call(0x800B7904u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7904
  c->r[0]=c->r[3]|c->r[3]; // 800B7908
  c->r[3]=c->r[4]|c->r[4]; // 800B790C
  c->r[12]=R32(c->r[12]+0x000000A4u); // 800B7910
  c->r[4]=c->r[0]|c->r[0]; // 800B7914
  c->ctr=c->r[12]; // 800B7918
  if (true) { dispatch(c,c->ctr); return; } // 800B791C
}

// fn_800B7920
void f_800B7920(Ctx* __restrict c) {
  trace_call(0x800B7920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7920
  c->r[0]=c->lr; // 800B7924
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7928
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B792C
  c->r[31]=c->r[5]|c->r[5]; // 800B7930
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B7934
  c->r[30]=c->r[4]|c->r[4]; // 800B7938
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B793C
  c->r[29]=c->r[3]|c->r[3]; // 800B7940
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B7944
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B7948
  c->ctr=c->r[12]; // 800B794C
  if (true) { c->lr=0x800B7954u; dispatch(c,c->ctr); } // 800B7950
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B7954
  c->r[3]=c->r[30]|c->r[30]; // 800B7958
  c->r[4]=c->r[31]|c->r[31]; // 800B795C
  c->r[5]=c->r[29]|c->r[29]; // 800B7960
  c->r[12]=R32(c->r[12]+0x000000A0u); // 800B7964
  c->ctr=c->r[12]; // 800B7968
  if (true) { c->lr=0x800B7970u; dispatch(c,c->ctr); } // 800B796C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7970
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7974
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7978
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B797C
  c->lr=c->r[0]; // 800B7980
  c->r[1]=c->r[1]+0x00000020u; // 800B7984
  return; // 800B7988
}

// fn_800B798C
void f_800B798C(Ctx* __restrict c) {
  trace_call(0x800B798Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B798C
  c->r[0]=c->r[3]|c->r[3]; // 800B7990
  c->r[3]=c->r[4]|c->r[4]; // 800B7994
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 800B7998
  c->r[4]=c->r[0]|c->r[0]; // 800B799C
  c->ctr=c->r[12]; // 800B79A0
  if (true) { dispatch(c,c->ctr); return; } // 800B79A4
}

// fn_800B79A8
void f_800B79A8(Ctx* __restrict c) {
  trace_call(0x800B79A8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B79A8
  c->r[0]=c->r[3]|c->r[3]; // 800B79AC
  c->r[3]=c->r[4]|c->r[4]; // 800B79B0
  c->r[12]=R32(c->r[12]+0x00000098u); // 800B79B4
  c->r[4]=c->r[0]|c->r[0]; // 800B79B8
  c->ctr=c->r[12]; // 800B79BC
  if (true) { dispatch(c,c->ctr); return; } // 800B79C0
}

// fn_800B79C4
void f_800B79C4(Ctx* __restrict c) {
  trace_call(0x800B79C4u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B79C4
  c->r[0]=c->r[3]|c->r[3]; // 800B79C8
  c->r[3]=c->r[4]|c->r[4]; // 800B79CC
  c->r[12]=R32(c->r[12]+0x00000094u); // 800B79D0
  c->r[4]=c->r[0]|c->r[0]; // 800B79D4
  c->ctr=c->r[12]; // 800B79D8
  if (true) { dispatch(c,c->ctr); return; } // 800B79DC
}

// fn_800B79E0
void f_800B79E0(Ctx* __restrict c) {
  trace_call(0x800B79E0u);
  c->r[3]=0u+0x00000017u; // 800B79E0
  return; // 800B79E4
}

// fn_800B79E8
void f_800B79E8(Ctx* __restrict c) {
  trace_call(0x800B79E8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B79E8
  c->r[0]=c->r[3]|c->r[3]; // 800B79EC
  c->r[3]=c->r[4]|c->r[4]; // 800B79F0
  c->r[12]=R32(c->r[12]+0x00000054u); // 800B79F4
  c->r[4]=c->r[0]|c->r[0]; // 800B79F8
  c->ctr=c->r[12]; // 800B79FC
  if (true) { dispatch(c,c->ctr); return; } // 800B7A00
}

// fn_800B7A04
void f_800B7A04(Ctx* __restrict c) {
  trace_call(0x800B7A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7A04
  c->r[0]=c->lr; // 800B7A08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800B7A0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B7A10
  c->r[31]=c->r[5]|c->r[5]; // 800B7A14
  W32(c->r[1]+0x00000018u,c->r[30]); // 800B7A18
  c->r[30]=c->r[4]|c->r[4]; // 800B7A1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800B7A20
  c->r[29]=c->r[3]|c->r[3]; // 800B7A24
  c->r[12]=R32(c->r[3]+0x00000000u); // 800B7A28
  c->r[12]=R32(c->r[12]+0x00000008u); // 800B7A2C
  c->ctr=c->r[12]; // 800B7A30
  if (true) { c->lr=0x800B7A38u; dispatch(c,c->ctr); } // 800B7A34
  c->r[12]=R32(c->r[30]+0x00000000u); // 800B7A38
  c->r[3]=c->r[30]|c->r[30]; // 800B7A3C
  c->r[4]=c->r[31]|c->r[31]; // 800B7A40
  c->r[5]=c->r[29]|c->r[29]; // 800B7A44
  c->r[12]=R32(c->r[12]+0x00000050u); // 800B7A48
  c->ctr=c->r[12]; // 800B7A4C
  if (true) { c->lr=0x800B7A54u; dispatch(c,c->ctr); } // 800B7A50
  c->r[0]=R32(c->r[1]+0x00000024u); // 800B7A54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800B7A58
  c->r[30]=R32(c->r[1]+0x00000018u); // 800B7A5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800B7A60
  c->lr=c->r[0]; // 800B7A64
  c->r[1]=c->r[1]+0x00000020u; // 800B7A68
  return; // 800B7A6C
}

// fn_800B7A70
void f_800B7A70(Ctx* __restrict c) {
  trace_call(0x800B7A70u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7A70
  c->r[0]=c->r[3]|c->r[3]; // 800B7A74
  c->r[3]=c->r[4]|c->r[4]; // 800B7A78
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 800B7A7C
  c->r[4]=c->r[0]|c->r[0]; // 800B7A80
  c->ctr=c->r[12]; // 800B7A84
  if (true) { dispatch(c,c->ctr); return; } // 800B7A88
}

// fn_800B7A8C
void f_800B7A8C(Ctx* __restrict c) {
  trace_call(0x800B7A8Cu);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7A8C
  c->r[0]=c->r[3]|c->r[3]; // 800B7A90
  c->r[3]=c->r[4]|c->r[4]; // 800B7A94
  c->r[12]=R32(c->r[12]+0x00000048u); // 800B7A98
  c->r[4]=c->r[0]|c->r[0]; // 800B7A9C
  c->ctr=c->r[12]; // 800B7AA0
  if (true) { dispatch(c,c->ctr); return; } // 800B7AA4
}

// fn_800B7AA8
void f_800B7AA8(Ctx* __restrict c) {
  trace_call(0x800B7AA8u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B7AA8
  c->r[0]=c->r[3]|c->r[3]; // 800B7AAC
  c->r[3]=c->r[4]|c->r[4]; // 800B7AB0
  c->r[12]=R32(c->r[12]+0x00000044u); // 800B7AB4
  c->r[4]=c->r[0]|c->r[0]; // 800B7AB8
  c->ctr=c->r[12]; // 800B7ABC
  if (true) { dispatch(c,c->ctr); return; } // 800B7AC0
}

// fn_800B7AC4
void f_800B7AC4(Ctx* __restrict c) {
  trace_call(0x800B7AC4u);
  c->r[3]=0u+0x00000003u; // 800B7AC4
  return; // 800B7AC8
}

// fn_800B7ACC
void f_800B7ACC(Ctx* __restrict c) {
  trace_call(0x800B7ACCu);
  c->r[3]=0u+0x00000409u; // 800B7ACC
  return; // 800B7AD0
}

// fn_800B7AD4
void f_800B7AD4(Ctx* __restrict c) {
  trace_call(0x800B7AD4u);
  {uint32_t ea=c->r[2]+0xFFFF8D5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7AD4
  c->r[3]=0u+0x80470000u; // 800B7AD8
  {uint32_t ea=c->r[2]+0xFFFF8D60u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7ADC
  c->r[3]=c->r[3]+0xFFFFE370u; // 800B7AE0
  c->f[3]=c->f[1]; // 800B7AE4
  f_8003F588(c); return; // 800B7AE8
}

// fn_800B7AEC
void f_800B7AEC(Ctx* __restrict c) {
  trace_call(0x800B7AECu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B7AEC
  c->r[0]=c->lr; // 800B7AF0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B7AF4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B7AF8
  W32(c->r[1]+0x00000124u,c->r[0]); // 800B7AFC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7B00
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800B7B04
  c->r[31]=c->r[4]|c->r[4]; // 800B7B08
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7B0C
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7B10
  W32(c->r[1]+0x00000118u,c->r[30]); // 800B7B14
  c->r[30]=c->r[3]|c->r[3]; // 800B7B18
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 800B7B1C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 800B7B20
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[4]);} // 800B7B24
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 800B7B28
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B7B2C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800B7B30
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800B7B34
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800B7B38
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 800B7B3C
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 800B7B40
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 800B7B44
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800B7B48
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[3])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[3])); c->f[4]=t0; c->ps1[4]=t1;} // 800B7B4C
  {double t0=S(c->f[4]+c->ps1[3]), t1=S(c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 800B7B50
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7B54
  fcmp(c,0,c->f[4],c->f[0]); // 800B7B58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7B5C
  c->r[0]=c->cr; // 800B7B60
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7B64
  if (!crb(c,2)) { goto L_800B7B78; } // 800B7B68
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 800B7B6C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 800B7B70
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800B7B74
L_800B7B78:;
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,2,ea,0,0);} // 800B7B78
  {uint32_t ea=c->r[1]+0x00000030u; psq_load(c,0,ea,0,0);} // 800B7B7C
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7B80
  {uint32_t ea=c->r[4]+0x0000000Cu; psq_load(c,0,ea,1,0);} // 800B7B84
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,1,ea,1,0);} // 800B7B88
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[2])); c->f[0]=t0; c->ps1[0]=t1;} // 800B7B8C
  {double t0=S(c->f[0]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7B90
  {uint32_t ea=c->r[2]+0xFFFF8E18u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7B94
  fcmp(c,0,c->f[1],c->f[0]); // 800B7B98
  if (crb(c,0)) { goto L_800B7BAC; } // 800B7B9C
  {uint32_t ea=c->r[2]+0xFFFF8E1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7BA0
  fcmp(c,0,c->f[1],c->f[0]); // 800B7BA4
  if (!crb(c,1)) { goto L_800B7E50; } // 800B7BA8
L_800B7BAC:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7BAC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7BB0
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B7BB4
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B7BB8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7BBC
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[2]);} // 800B7BC0
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 800B7BC4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[4]);} // 800B7BC8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 800B7BCC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 800B7BD0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800B7BD4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,2,ea,0,0);} // 800B7BD8
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7BDC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800B7BE0
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7BE4
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7BE8
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7BEC
  fcmp(c,0,c->f[1],c->f[0]); // 800B7BF0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7BF4
  c->r[0]=c->cr; // 800B7BF8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7BFC
  if (!crb(c,2)) { goto L_800B7C14; } // 800B7C00
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C04
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[3]);} // 800B7C08
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[3]);} // 800B7C0C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800B7C10
L_800B7C14:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7C14
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7C18
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C1C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 800B7C20
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 800B7C24
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 800B7C28
  {uint32_t ea=c->r[1]+0x0000008Cu; psq_load(c,2,ea,0,0);} // 800B7C2C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7C30
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800B7C34
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7C38
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7C3C
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C40
  fcmp(c,0,c->f[1],c->f[0]); // 800B7C44
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7C48
  c->r[0]=c->cr; // 800B7C4C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7C50
  if (!crb(c,2)) { goto L_800B7C6C; } // 800B7C54
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7C58
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C5C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 800B7C60
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800B7C64
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 800B7C68
L_800B7C6C:;
  c->r[3]=c->r[1]+0x00000098u; // 800B7C6C
  c->r[4]=c->r[1]+0x00000080u; // 800B7C70
  c->lr=0x800B7C78u; f_80265750(c); // 800B7C74
  {uint32_t ea=c->r[1]+0x00000080u; psq_load(c,2,ea,0,0);} // 800B7C78
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7C7C
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C80
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7C84
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7C88
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7C8C
  fcmp(c,0,c->f[1],c->f[0]); // 800B7C90
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7C94
  c->r[0]=c->cr; // 800B7C98
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7C9C
  if (!crb(c,2)) { goto L_800B7CB8; } // 800B7CA0
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7CA4
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7CA8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 800B7CAC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 800B7CB0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 800B7CB4
L_800B7CB8:;
  c->r[3]=c->r[1]+0x0000008Cu; // 800B7CB8
  c->r[4]=c->r[1]+0x00000080u; // 800B7CBC
  c->r[5]=c->r[1]+0x00000074u; // 800B7CC0
  c->lr=0x800B7CC8u; f_80265810(c); // 800B7CC4
  {uint32_t ea=c->r[1]+0x00000074u; psq_load(c,2,ea,0,0);} // 800B7CC8
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7CCC
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7CD0
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7CD4
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7CD8
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7CDC
  fcmp(c,0,c->f[1],c->f[0]); // 800B7CE0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7CE4
  c->r[0]=c->cr; // 800B7CE8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7CEC
  if (!crb(c,2)) { goto L_800B7D98; } // 800B7CF0
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7CF4
  c->r[3]=c->r[1]+0x00000098u; // 800B7CF8
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7CFC
  c->r[4]=c->r[1]+0x00000050u; // 800B7D00
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 800B7D04
  c->r[5]=c->r[1]+0x0000005Cu; // 800B7D08
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800B7D0C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 800B7D10
  c->lr=0x800B7D18u; f_80265810(c); // 800B7D14
  {uint32_t ea=c->r[1]+0x0000005Cu; psq_load(c,2,ea,0,0);} // 800B7D18
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7D1C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7D20
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7D24
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7D28
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7D2C
  fcmp(c,0,c->f[1],c->f[0]); // 800B7D30
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7D34
  c->r[0]=c->cr; // 800B7D38
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7D3C
  if (!crb(c,2)) { goto L_800B7D5C; } // 800B7D40
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7D44
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7D48
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800B7D4C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 800B7D50
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 800B7D54
  goto L_800B7D70; // 800B7D58
L_800B7D5C:;
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7D5C
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7D60
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 800B7D64
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800B7D68
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 800B7D6C
L_800B7D70:;
  c->r[3]=c->r[1]+0x0000008Cu; // 800B7D70
  c->r[4]=c->r[1]+0x00000080u; // 800B7D74
  c->r[5]=c->r[1]+0x00000044u; // 800B7D78
  c->lr=0x800B7D80u; f_80265810(c); // 800B7D7C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7D80
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7D84
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7D88
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[2]);} // 800B7D8C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 800B7D90
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800B7D94
L_800B7D98:;
  c->r[3]=c->r[1]+0x00000074u; // 800B7D98
  c->r[4]=c->r[3]|c->r[3]; // 800B7D9C
  c->lr=0x800B7DA4u; f_80265750(c); // 800B7DA0
  {uint32_t ea=c->r[1]+0x00000074u; psq_load(c,2,ea,0,0);} // 800B7DA4
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7DA8
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7DAC
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7DB0
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7DB4
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7DB8
  fcmp(c,0,c->f[1],c->f[0]); // 800B7DBC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7DC0
  c->r[0]=c->cr; // 800B7DC4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7DC8
  if (!crb(c,2)) { goto L_800B7DE4; } // 800B7DCC
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7DD0
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7DD4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 800B7DD8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 800B7DDC
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800B7DE0
L_800B7DE4:;
  c->r[3]=c->r[1]+0x00000080u; // 800B7DE4
  c->r[4]=c->r[1]+0x00000074u; // 800B7DE8
  c->r[5]=c->r[1]+0x00000068u; // 800B7DEC
  c->lr=0x800B7DF4u; f_80265810(c); // 800B7DF0
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7DF4
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7DF8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 800B7DFC
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E00
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 800B7E04
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E08
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[1]);} // 800B7E0C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E10
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 800B7E14
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E18
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 800B7E1C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E20
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 800B7E24
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E28
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 800B7E2C
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E30
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 800B7E34
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E38
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 800B7E3C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B7E40
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B7E44
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B7E48
  goto L_800B80E0; // 800B7E4C
L_800B7E50:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7E50
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E54
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7E58
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[2]);} // 800B7E5C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 800B7E60
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 800B7E64
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,2,ea,0,0);} // 800B7E68
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7E6C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800B7E70
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7E74
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7E78
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7E7C
  fcmp(c,0,c->f[1],c->f[0]); // 800B7E80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7E84
  c->r[0]=c->cr; // 800B7E88
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7E8C
  if (!crb(c,2)) { goto L_800B7EA8; } // 800B7E90
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7E94
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7E98
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[1]);} // 800B7E9C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 800B7EA0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 800B7EA4
L_800B7EA8:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B7EA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7EAC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7EB0
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[2]);} // 800B7EB4
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[1]);} // 800B7EB8
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 800B7EBC
  {uint32_t ea=c->r[1]+0x000000ECu; psq_load(c,2,ea,0,0);} // 800B7EC0
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7EC4
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800B7EC8
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7ECC
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7ED0
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7ED4
  fcmp(c,0,c->f[1],c->f[0]); // 800B7ED8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7EDC
  c->r[0]=c->cr; // 800B7EE0
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7EE4
  if (!crb(c,2)) { goto L_800B7F00; } // 800B7EE8
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7EEC
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7EF0
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 800B7EF4
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 800B7EF8
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[1]);} // 800B7EFC
L_800B7F00:;
  c->r[3]=c->r[1]+0x000000F8u; // 800B7F00
  c->r[4]=c->r[1]+0x000000E0u; // 800B7F04
  c->lr=0x800B7F0Cu; f_80265750(c); // 800B7F08
  {uint32_t ea=c->r[1]+0x000000E0u; psq_load(c,2,ea,0,0);} // 800B7F0C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7F10
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7F14
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7F18
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7F1C
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7F20
  fcmp(c,0,c->f[1],c->f[0]); // 800B7F24
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7F28
  c->r[0]=c->cr; // 800B7F2C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7F30
  if (!crb(c,2)) { goto L_800B7F4C; } // 800B7F34
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7F38
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7F3C
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[1]);} // 800B7F40
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[1]);} // 800B7F44
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 800B7F48
L_800B7F4C:;
  c->r[3]=c->r[1]+0x000000ECu; // 800B7F4C
  c->r[4]=c->r[1]+0x000000E0u; // 800B7F50
  c->r[5]=c->r[1]+0x000000D4u; // 800B7F54
  c->lr=0x800B7F5Cu; f_80265810(c); // 800B7F58
  {uint32_t ea=c->r[1]+0x000000D4u; psq_load(c,2,ea,0,0);} // 800B7F5C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7F60
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7F64
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7F68
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7F6C
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7F70
  fcmp(c,0,c->f[1],c->f[0]); // 800B7F74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7F78
  c->r[0]=c->cr; // 800B7F7C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7F80
  if (!crb(c,2)) { goto L_800B802C; } // 800B7F84
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7F88
  c->r[3]=c->r[1]+0x000000F8u; // 800B7F8C
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7F90
  c->r[4]=c->r[1]+0x000000B0u; // 800B7F94
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 800B7F98
  c->r[5]=c->r[1]+0x000000BCu; // 800B7F9C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 800B7FA0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 800B7FA4
  c->lr=0x800B7FACu; f_80265810(c); // 800B7FA8
  {uint32_t ea=c->r[1]+0x000000BCu; psq_load(c,2,ea,0,0);} // 800B7FAC
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B7FB0
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7FB4
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B7FB8
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B7FBC
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7FC0
  fcmp(c,0,c->f[1],c->f[0]); // 800B7FC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B7FC8
  c->r[0]=c->cr; // 800B7FCC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B7FD0
  if (!crb(c,2)) { goto L_800B7FF0; } // 800B7FD4
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7FD8
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7FDC
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 800B7FE0
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 800B7FE4
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 800B7FE8
  goto L_800B8004; // 800B7FEC
L_800B7FF0:;
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B7FF0
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B7FF4
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 800B7FF8
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 800B7FFC
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[1]);} // 800B8000
L_800B8004:;
  c->r[3]=c->r[1]+0x000000ECu; // 800B8004
  c->r[4]=c->r[1]+0x000000E0u; // 800B8008
  c->r[5]=c->r[1]+0x000000A4u; // 800B800C
  c->lr=0x800B8014u; f_80265810(c); // 800B8010
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8014
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8018
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B801C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[2]);} // 800B8020
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[1]);} // 800B8024
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 800B8028
L_800B802C:;
  c->r[3]=c->r[1]+0x000000D4u; // 800B802C
  c->r[4]=c->r[3]|c->r[3]; // 800B8030
  c->lr=0x800B8038u; f_80265750(c); // 800B8034
  {uint32_t ea=c->r[1]+0x000000D4u; psq_load(c,2,ea,0,0);} // 800B8038
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B803C
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8040
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B8044
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B8048
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B804C
  fcmp(c,0,c->f[1],c->f[0]); // 800B8050
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B8054
  c->r[0]=c->cr; // 800B8058
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B805C
  if (!crb(c,2)) { goto L_800B8078; } // 800B8060
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8064
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8068
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 800B806C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 800B8070
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 800B8074
L_800B8078:;
  c->r[3]=c->r[1]+0x000000E0u; // 800B8078
  c->r[4]=c->r[1]+0x000000D4u; // 800B807C
  c->r[5]=c->r[1]+0x000000C8u; // 800B8080
  c->lr=0x800B8088u; f_80265810(c); // 800B8084
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8088
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B808C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 800B8090
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8094
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 800B8098
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B809C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[1]);} // 800B80A0
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B80A4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 800B80A8
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B80AC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 800B80B0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B80B4
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[1]);} // 800B80B8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B80BC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 800B80C0
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B80C4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 800B80C8
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B80CC
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 800B80D0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 800B80D4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B80D8
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B80DC
L_800B80E0:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B80E0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B80E4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B80E8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 800B80EC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B80F0
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 800B80F4
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800B80F8
  c->r[30]=R32(c->r[1]+0x00000118u); // 800B80FC
  c->r[0]=R32(c->r[1]+0x00000124u); // 800B8100
  c->lr=c->r[0]; // 800B8104
  c->r[1]=c->r[1]+0x00000120u; // 800B8108
  return; // 800B810C
}

// fn_800B8110
void f_800B8110(Ctx* __restrict c) {
  trace_call(0x800B8110u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8110
  c->r[0]=c->lr; // 800B8114
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800B8118
  c->r[11]=c->r[1]+0x000000D0u; // 800B811C
  c->lr=0x800B8124u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B8120
  c->r[5]=R32(c->r[4]+0x00000020u); // 800B8124
  c->r[31]=c->r[3]|c->r[3]; // 800B8128
  c->r[6]=R32(c->r[4]+0x00000028u); // 800B812C
  c->r[23]=c->r[4]|c->r[4]; // 800B8130
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800B8134
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800B8138
  if (crb(c,0)) { goto L_800B81CC; } // 800B813C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800B8140
  c->r[3]=R32(c->r[4]+0x00000000u); // 800B8144
  c->r[3]=c->r[3]+c->r[0]; // 800B8148
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B814C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B8150
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8154
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800B8158
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B815C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B8160
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,2,ea,0,0);} // 800B8164
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B8168
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800B816C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B8170
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B8174
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8178
  fcmp(c,0,c->f[1],c->f[0]); // 800B817C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B8180
  c->r[0]=c->cr; // 800B8184
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B8188
  if (!crb(c,2)) { goto L_800B81A4; } // 800B818C
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8190
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8194
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800B8198
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B819C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B81A0
L_800B81A4:;
  c->r[3]=c->r[1]+0x00000018u; // 800B81A4
  c->r[4]=c->r[3]|c->r[3]; // 800B81A8
  c->lr=0x800B81B0u; f_80265750(c); // 800B81AC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B81B0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800B81B4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B81B8
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 800B81BC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B81C0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 800B81C4
  goto L_800B83BC; // 800B81C8
L_800B81CC:;
  c->r[0]=R8(c->r[13]+0xFFFF9500u); // 800B81CC
  c->r[3]=c->r[6]+0x00000001u; // 800B81D0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800B81D4
  c->r[4]=R32(c->r[4]+0x00000000u); // 800B81D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B81DC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)28); // 800B81E0
  c->r[6]=c->r[4]+c->r[3]; // 800B81E4
  c->r[7]=c->r[4]+c->r[0]; // 800B81E8
  if (!crb(c,2)) { goto L_800B825C; } // 800B81EC
  c->r[4]=0u+0x80470000u; // 800B81F0
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B81F4
  c->r[0]=0u+0x00000001u; // 800B81F8
  {uint32_t ea=c->r[2]+0xFFFF8E28u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B81FC
  c->r[3]=c->r[4]+0x00000D88u; // 800B8200
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8204
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8208
  {uint32_t ea=c->r[2]+0xFFFF8E2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B820C
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8210
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8214
  {uint32_t ea=c->r[4]+0x00000D88u; WF32(ea,c->f[6]);} // 800B8218
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 800B821C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 800B8220
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 800B8224
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800B8228
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800B822C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 800B8230
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 800B8234
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 800B8238
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 800B823C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 800B8240
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[4]);} // 800B8244
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 800B8248
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800B824C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[4]);} // 800B8250
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800B8254
  W8(c->r[13]+0xFFFF9500u,c->r[0]); // 800B8258
L_800B825C:;
  {uint32_t ea=c->r[6]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B825C
  c->r[3]=c->r[1]+0x00000028u; // 800B8260
  {uint32_t ea=c->r[7]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8264
  c->r[4]=0u+0x80470000u; // 800B8268
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B826C
  c->r[5]=c->r[3]|c->r[3]; // 800B8270
  {uint32_t ea=c->r[7]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8274
  c->r[4]=c->r[4]+0x00000D88u; // 800B8278
  {uint32_t ea=c->r[6]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B827C
  {uint32_t ea=c->r[7]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B8280
  {uint32_t ea=c->r[6]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B8284
  {uint32_t ea=c->r[7]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B8288
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800B828C
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800B8290
  {uint32_t ea=c->r[6]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 800B8294
  {uint32_t ea=c->r[7]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 800B8298
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B829C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[12]);} // 800B82A0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[11]);} // 800B82A4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[10]);} // 800B82A8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[9]);} // 800B82AC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[8]);} // 800B82B0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[7]);} // 800B82B4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[6]);} // 800B82B8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[5]);} // 800B82BC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 800B82C0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 800B82C4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 800B82C8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 800B82CC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800B82D0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B82D4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800B82D8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800B82DC
  c->lr=0x800B82E4u; f_802655E8(c); // 800B82E0
  {uint32_t ea=c->r[23]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B82E4
  c->r[3]=c->r[1]+0x00000008u; // 800B82E8
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B82EC
  c->r[5]=c->r[3]|c->r[3]; // 800B82F0
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B82F4
  c->r[4]=c->r[1]+0x00000068u; // 800B82F8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 800B82FC
  c->r[23]=R32(c->r[1]+0x00000028u); // 800B8300
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[3]); // 800B8304
  c->r[24]=R32(c->r[1]+0x0000002Cu); // 800B8308
  c->r[25]=R32(c->r[1]+0x00000030u); // 800B830C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800B8310
  c->r[26]=R32(c->r[1]+0x00000034u); // 800B8314
  c->r[27]=R32(c->r[1]+0x00000038u); // 800B8318
  c->r[28]=R32(c->r[1]+0x0000003Cu); // 800B831C
  c->r[29]=R32(c->r[1]+0x00000040u); // 800B8320
  c->r[30]=R32(c->r[1]+0x00000044u); // 800B8324
  c->r[12]=R32(c->r[1]+0x00000048u); // 800B8328
  c->r[11]=R32(c->r[1]+0x0000004Cu); // 800B832C
  c->r[10]=R32(c->r[1]+0x00000050u); // 800B8330
  c->r[9]=R32(c->r[1]+0x00000054u); // 800B8334
  c->r[8]=R32(c->r[1]+0x00000058u); // 800B8338
  c->r[7]=R32(c->r[1]+0x0000005Cu); // 800B833C
  c->r[6]=R32(c->r[1]+0x00000060u); // 800B8340
  c->r[0]=R32(c->r[1]+0x00000064u); // 800B8344
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8348
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B834C
  W32(c->r[1]+0x00000068u,c->r[23]); // 800B8350
  W32(c->r[1]+0x0000006Cu,c->r[24]); // 800B8354
  W32(c->r[1]+0x00000070u,c->r[25]); // 800B8358
  W32(c->r[1]+0x00000074u,c->r[26]); // 800B835C
  W32(c->r[1]+0x00000078u,c->r[27]); // 800B8360
  W32(c->r[1]+0x0000007Cu,c->r[28]); // 800B8364
  W32(c->r[1]+0x00000080u,c->r[29]); // 800B8368
  W32(c->r[1]+0x00000084u,c->r[30]); // 800B836C
  W32(c->r[1]+0x00000088u,c->r[12]); // 800B8370
  W32(c->r[1]+0x0000008Cu,c->r[11]); // 800B8374
  W32(c->r[1]+0x00000090u,c->r[10]); // 800B8378
  W32(c->r[1]+0x00000094u,c->r[9]); // 800B837C
  W32(c->r[1]+0x00000098u,c->r[8]); // 800B8380
  W32(c->r[1]+0x0000009Cu,c->r[7]); // 800B8384
  W32(c->r[1]+0x000000A0u,c->r[6]); // 800B8388
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800B838C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 800B8390
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 800B8394
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800B8398
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B839C
  c->lr=0x800B83A4u; f_80394CE4(c); // 800B83A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B83A4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B83A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B83AC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800B83B0
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 800B83B4
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 800B83B8
L_800B83BC:;
  c->r[11]=c->r[1]+0x000000D0u; // 800B83BC
  c->lr=0x800B83C4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B83C0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800B83C4
  c->lr=c->r[0]; // 800B83C8
  c->r[1]=c->r[1]+0x000000D0u; // 800B83CC
  return; // 800B83D0
}

// fn_800B83D4
void f_800B83D4(Ctx* __restrict c) {
  trace_call(0x800B83D4u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B83D4
  c->r[0]=c->lr; // 800B83D8
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800B83DC
  c->r[11]=c->r[1]+0x000000C0u; // 800B83E0
  c->lr=0x800B83E8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B83E4
  c->r[5]=R32(c->r[4]+0x00000020u); // 800B83E8
  c->r[31]=c->r[3]|c->r[3]; // 800B83EC
  c->r[6]=R32(c->r[4]+0x00000028u); // 800B83F0
  c->r[23]=c->r[4]|c->r[4]; // 800B83F4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800B83F8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800B83FC
  if (crb(c,0)) { goto L_800B8428; } // 800B8400
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800B8404
  c->r[4]=R32(c->r[4]+0x00000000u); // 800B8408
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 800B840C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800B8410
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8414
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800B8418
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B841C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800B8420
  goto L_800B8608; // 800B8424
L_800B8428:;
  c->r[0]=R8(c->r[13]+0xFFFF9500u); // 800B8428
  c->r[3]=c->r[6]+0x00000001u; // 800B842C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800B8430
  c->r[4]=R32(c->r[4]+0x00000000u); // 800B8434
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B8438
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)28); // 800B843C
  c->r[6]=c->r[4]+c->r[3]; // 800B8440
  c->r[7]=c->r[4]+c->r[0]; // 800B8444
  if (!crb(c,2)) { goto L_800B84B8; } // 800B8448
  c->r[4]=0u+0x80470000u; // 800B844C
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B8450
  c->r[0]=0u+0x00000001u; // 800B8454
  {uint32_t ea=c->r[2]+0xFFFF8E28u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B8458
  c->r[3]=c->r[4]+0x00000D88u; // 800B845C
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8460
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8464
  {uint32_t ea=c->r[2]+0xFFFF8E2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8468
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B846C
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8470
  {uint32_t ea=c->r[4]+0x00000D88u; WF32(ea,c->f[6]);} // 800B8474
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 800B8478
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 800B847C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 800B8480
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800B8484
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800B8488
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 800B848C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 800B8490
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 800B8494
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 800B8498
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 800B849C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[4]);} // 800B84A0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 800B84A4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800B84A8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[4]);} // 800B84AC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800B84B0
  W8(c->r[13]+0xFFFF9500u,c->r[0]); // 800B84B4
L_800B84B8:;
  {uint32_t ea=c->r[6]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B84B8
  c->r[3]=c->r[1]+0x00000018u; // 800B84BC
  {uint32_t ea=c->r[7]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B84C0
  c->r[4]=0u+0x80470000u; // 800B84C4
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B84C8
  c->r[5]=c->r[3]|c->r[3]; // 800B84CC
  {uint32_t ea=c->r[7]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B84D0
  c->r[4]=c->r[4]+0x00000D88u; // 800B84D4
  {uint32_t ea=c->r[6]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B84D8
  {uint32_t ea=c->r[7]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B84DC
  {uint32_t ea=c->r[6]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B84E0
  {uint32_t ea=c->r[7]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B84E4
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800B84E8
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800B84EC
  {uint32_t ea=c->r[6]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 800B84F0
  {uint32_t ea=c->r[7]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 800B84F4
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B84F8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 800B84FC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[11]);} // 800B8500
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[10]);} // 800B8504
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[9]);} // 800B8508
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[8]);} // 800B850C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[7]);} // 800B8510
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[6]);} // 800B8514
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[5]);} // 800B8518
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[4]);} // 800B851C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 800B8520
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 800B8524
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 800B8528
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800B852C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800B8530
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800B8534
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800B8538
  c->lr=0x800B8540u; f_802655E8(c); // 800B853C
  {uint32_t ea=c->r[23]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8540
  c->r[3]=c->r[1]+0x00000008u; // 800B8544
  c->r[23]=R32(c->r[1]+0x00000018u); // 800B8548
  c->r[5]=c->r[3]|c->r[3]; // 800B854C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 800B8550
  c->r[24]=R32(c->r[1]+0x0000001Cu); // 800B8554
  c->r[25]=R32(c->r[1]+0x00000020u); // 800B8558
  c->r[4]=c->r[1]+0x00000058u; // 800B855C
  c->r[26]=R32(c->r[1]+0x00000024u); // 800B8560
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800B8564
  c->r[27]=R32(c->r[1]+0x00000028u); // 800B8568
  c->r[28]=R32(c->r[1]+0x0000002Cu); // 800B856C
  c->r[29]=R32(c->r[1]+0x00000030u); // 800B8570
  c->r[30]=R32(c->r[1]+0x00000034u); // 800B8574
  c->r[12]=R32(c->r[1]+0x00000038u); // 800B8578
  c->r[11]=R32(c->r[1]+0x0000003Cu); // 800B857C
  c->r[10]=R32(c->r[1]+0x00000040u); // 800B8580
  c->r[9]=R32(c->r[1]+0x00000044u); // 800B8584
  c->r[8]=R32(c->r[1]+0x00000048u); // 800B8588
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 800B858C
  c->r[6]=R32(c->r[1]+0x00000050u); // 800B8590
  c->r[0]=R32(c->r[1]+0x00000054u); // 800B8594
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8598
  W32(c->r[1]+0x00000058u,c->r[23]); // 800B859C
  W32(c->r[1]+0x0000005Cu,c->r[24]); // 800B85A0
  W32(c->r[1]+0x00000060u,c->r[25]); // 800B85A4
  W32(c->r[1]+0x00000064u,c->r[26]); // 800B85A8
  W32(c->r[1]+0x00000068u,c->r[27]); // 800B85AC
  W32(c->r[1]+0x0000006Cu,c->r[28]); // 800B85B0
  W32(c->r[1]+0x00000070u,c->r[29]); // 800B85B4
  W32(c->r[1]+0x00000074u,c->r[30]); // 800B85B8
  W32(c->r[1]+0x00000078u,c->r[12]); // 800B85BC
  W32(c->r[1]+0x0000007Cu,c->r[11]); // 800B85C0
  W32(c->r[1]+0x00000080u,c->r[10]); // 800B85C4
  W32(c->r[1]+0x00000084u,c->r[9]); // 800B85C8
  W32(c->r[1]+0x00000088u,c->r[8]); // 800B85CC
  W32(c->r[1]+0x0000008Cu,c->r[7]); // 800B85D0
  W32(c->r[1]+0x00000090u,c->r[6]); // 800B85D4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800B85D8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800B85DC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 800B85E0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 800B85E4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B85E8
  c->lr=0x800B85F0u; f_80394CE4(c); // 800B85EC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B85F0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B85F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B85F8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800B85FC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 800B8600
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 800B8604
L_800B8608:;
  c->r[11]=c->r[1]+0x000000C0u; // 800B8608
  c->lr=0x800B8610u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B860C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B8610
  c->lr=c->r[0]; // 800B8614
  c->r[1]=c->r[1]+0x000000C0u; // 800B8618
  return; // 800B861C
}

// fn_800B8620
void f_800B8620(Ctx* __restrict c) {
  trace_call(0x800B8620u);
  {uint32_t ea=c->r[1]+0xFFFFFE20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8620
  c->r[0]=c->lr; // 800B8624
  W32(c->r[1]+0x000001E4u,c->r[0]); // 800B8628
  c->r[11]=c->r[1]+0x000001E0u; // 800B862C
  c->lr=0x800B8634u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B8630
  c->r[7]=R32(c->r[4]+0x00000028u); // 800B8634
  c->r[30]=c->r[3]|c->r[3]; // 800B8638
  c->r[31]=c->r[4]|c->r[4]; // 800B863C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[5]); // 800B8640
  if (!crb(c,2)) { goto L_800B866C; } // 800B8644
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)28); // 800B8648
  c->r[4]=R32(c->r[4]+0x00000000u); // 800B864C
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 800B8650
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800B8654
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8658
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800B865C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8660
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800B8664
  goto L_800B8C34; // 800B8668
L_800B866C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800B866C
  if (!crb(c,1)) { goto L_800B885C; } // 800B8670
  c->r[3]=R32(c->r[4]+0x00000020u); // 800B8674
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800B8678
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800B867C
  if (crb(c,0)) { goto L_800B885C; } // 800B8680
  c->r[0]=R8(c->r[13]+0xFFFF9500u); // 800B8684
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)28); // 800B8688
  c->r[6]=R32(c->r[4]+0x00000000u); // 800B868C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B8690
  c->r[7]=c->r[6]+c->r[3]; // 800B8694
  if (!crb(c,2)) { goto L_800B8708; } // 800B8698
  c->r[4]=0u+0x80470000u; // 800B869C
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B86A0
  c->r[0]=0u+0x00000001u; // 800B86A4
  {uint32_t ea=c->r[2]+0xFFFF8E28u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B86A8
  c->r[3]=c->r[4]+0x00000D88u; // 800B86AC
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B86B0
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B86B4
  {uint32_t ea=c->r[2]+0xFFFF8E2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B86B8
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B86BC
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B86C0
  {uint32_t ea=c->r[4]+0x00000D88u; WF32(ea,c->f[6]);} // 800B86C4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 800B86C8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 800B86CC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 800B86D0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800B86D4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800B86D8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 800B86DC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 800B86E0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 800B86E4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 800B86E8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 800B86EC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[4]);} // 800B86F0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 800B86F4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800B86F8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[4]);} // 800B86FC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800B8700
  W8(c->r[13]+0xFFFF9500u,c->r[0]); // 800B8704
L_800B8708:;
  {uint32_t ea=c->r[6]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8708
  c->r[3]=c->r[1]+0x000000B8u; // 800B870C
  {uint32_t ea=c->r[7]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8710
  c->r[4]=0u+0x80470000u; // 800B8714
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8718
  c->r[5]=c->r[3]|c->r[3]; // 800B871C
  {uint32_t ea=c->r[7]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8720
  c->r[4]=c->r[4]+0x00000D88u; // 800B8724
  {uint32_t ea=c->r[6]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B8728
  {uint32_t ea=c->r[7]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B872C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B8730
  {uint32_t ea=c->r[7]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B8734
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800B8738
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800B873C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 800B8740
  {uint32_t ea=c->r[7]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 800B8744
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8748
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[12]);} // 800B874C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[11]);} // 800B8750
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[10]);} // 800B8754
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[9]);} // 800B8758
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[8]);} // 800B875C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[7]);} // 800B8760
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[6]);} // 800B8764
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[5]);} // 800B8768
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[4]);} // 800B876C
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[3]);} // 800B8770
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[2]);} // 800B8774
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[1]);} // 800B8778
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 800B877C
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 800B8780
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 800B8784
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 800B8788
  c->lr=0x800B8790u; f_802655E8(c); // 800B878C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8790
  c->r[3]=c->r[1]+0x00000028u; // 800B8794
  c->r[31]=R32(c->r[1]+0x000000B8u); // 800B8798
  c->r[5]=c->r[3]|c->r[3]; // 800B879C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 800B87A0
  c->r[29]=R32(c->r[1]+0x000000BCu); // 800B87A4
  c->r[28]=R32(c->r[1]+0x000000C0u); // 800B87A8
  c->r[4]=c->r[1]+0x00000178u; // 800B87AC
  c->r[27]=R32(c->r[1]+0x000000C4u); // 800B87B0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800B87B4
  c->r[26]=R32(c->r[1]+0x000000C8u); // 800B87B8
  c->r[25]=R32(c->r[1]+0x000000CCu); // 800B87BC
  c->r[24]=R32(c->r[1]+0x000000D0u); // 800B87C0
  c->r[23]=R32(c->r[1]+0x000000D4u); // 800B87C4
  c->r[12]=R32(c->r[1]+0x000000D8u); // 800B87C8
  c->r[11]=R32(c->r[1]+0x000000DCu); // 800B87CC
  c->r[10]=R32(c->r[1]+0x000000E0u); // 800B87D0
  c->r[9]=R32(c->r[1]+0x000000E4u); // 800B87D4
  c->r[8]=R32(c->r[1]+0x000000E8u); // 800B87D8
  c->r[7]=R32(c->r[1]+0x000000ECu); // 800B87DC
  c->r[6]=R32(c->r[1]+0x000000F0u); // 800B87E0
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800B87E4
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B87E8
  W32(c->r[1]+0x00000178u,c->r[31]); // 800B87EC
  W32(c->r[1]+0x0000017Cu,c->r[29]); // 800B87F0
  W32(c->r[1]+0x00000180u,c->r[28]); // 800B87F4
  W32(c->r[1]+0x00000184u,c->r[27]); // 800B87F8
  W32(c->r[1]+0x00000188u,c->r[26]); // 800B87FC
  W32(c->r[1]+0x0000018Cu,c->r[25]); // 800B8800
  W32(c->r[1]+0x00000190u,c->r[24]); // 800B8804
  W32(c->r[1]+0x00000194u,c->r[23]); // 800B8808
  W32(c->r[1]+0x00000198u,c->r[12]); // 800B880C
  W32(c->r[1]+0x0000019Cu,c->r[11]); // 800B8810
  W32(c->r[1]+0x000001A0u,c->r[10]); // 800B8814
  W32(c->r[1]+0x000001A4u,c->r[9]); // 800B8818
  W32(c->r[1]+0x000001A8u,c->r[8]); // 800B881C
  W32(c->r[1]+0x000001ACu,c->r[7]); // 800B8820
  W32(c->r[1]+0x000001B0u,c->r[6]); // 800B8824
  W32(c->r[1]+0x000001B4u,c->r[0]); // 800B8828
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800B882C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800B8830
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[3]);} // 800B8834
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800B8838
  c->lr=0x800B8840u; f_80394CE4(c); // 800B883C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8840
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8844
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8848
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 800B884C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 800B8850
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 800B8854
  goto L_800B8C34; // 800B8858
L_800B885C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800B885C
  if (!crb(c,0)) { goto L_800B8A54; } // 800B8860
  cmps(c,0,(int32_t)c->r[7],0); // 800B8864
  if (crb(c,1)) { goto L_800B8A54; } // 800B8868
  c->r[5]=R32(c->r[4]+0x00000020u); // 800B886C
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)28); // 800B8870
  c->r[0]=R8(c->r[13]+0xFFFF9500u); // 800B8874
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800B8878
  c->r[6]=R32(c->r[4]+0x00000000u); // 800B887C
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 800B8880
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B8884
  c->r[7]=c->r[6]+c->r[3]; // 800B8888
  c->r[6]=c->r[6]+c->r[4]; // 800B888C
  if (!crb(c,2)) { goto L_800B8900; } // 800B8890
  c->r[4]=0u+0x80470000u; // 800B8894
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B8898
  c->r[0]=0u+0x00000001u; // 800B889C
  {uint32_t ea=c->r[2]+0xFFFF8E28u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B88A0
  c->r[3]=c->r[4]+0x00000D88u; // 800B88A4
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B88A8
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B88AC
  {uint32_t ea=c->r[2]+0xFFFF8E2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B88B0
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B88B4
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B88B8
  {uint32_t ea=c->r[4]+0x00000D88u; WF32(ea,c->f[6]);} // 800B88BC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 800B88C0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 800B88C4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 800B88C8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800B88CC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800B88D0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 800B88D4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 800B88D8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 800B88DC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 800B88E0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 800B88E4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[4]);} // 800B88E8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 800B88EC
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800B88F0
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[4]);} // 800B88F4
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800B88F8
  W8(c->r[13]+0xFFFF9500u,c->r[0]); // 800B88FC
L_800B8900:;
  {uint32_t ea=c->r[6]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8900
  c->r[3]=c->r[1]+0x00000078u; // 800B8904
  {uint32_t ea=c->r[7]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8908
  c->r[4]=0u+0x80470000u; // 800B890C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8910
  c->r[5]=c->r[3]|c->r[3]; // 800B8914
  {uint32_t ea=c->r[7]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8918
  c->r[4]=c->r[4]+0x00000D88u; // 800B891C
  {uint32_t ea=c->r[6]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B8920
  {uint32_t ea=c->r[7]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B8924
  {uint32_t ea=c->r[6]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B8928
  {uint32_t ea=c->r[7]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B892C
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800B8930
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800B8934
  {uint32_t ea=c->r[6]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 800B8938
  {uint32_t ea=c->r[7]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 800B893C
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8940
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[12]);} // 800B8944
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[11]);} // 800B8948
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[10]);} // 800B894C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[9]);} // 800B8950
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[8]);} // 800B8954
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[7]);} // 800B8958
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[6]);} // 800B895C
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[5]);} // 800B8960
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[4]);} // 800B8964
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[3]);} // 800B8968
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 800B896C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 800B8970
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 800B8974
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 800B8978
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 800B897C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 800B8980
  c->lr=0x800B8988u; f_802655E8(c); // 800B8984
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8988
  c->r[3]=c->r[1]+0x00000018u; // 800B898C
  c->r[31]=R32(c->r[1]+0x00000078u); // 800B8990
  c->r[5]=c->r[3]|c->r[3]; // 800B8994
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 800B8998
  c->r[29]=R32(c->r[1]+0x0000007Cu); // 800B899C
  c->r[28]=R32(c->r[1]+0x00000080u); // 800B89A0
  c->r[4]=c->r[1]+0x00000138u; // 800B89A4
  c->r[27]=R32(c->r[1]+0x00000084u); // 800B89A8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800B89AC
  c->r[26]=R32(c->r[1]+0x00000088u); // 800B89B0
  c->r[25]=R32(c->r[1]+0x0000008Cu); // 800B89B4
  c->r[24]=R32(c->r[1]+0x00000090u); // 800B89B8
  c->r[23]=R32(c->r[1]+0x00000094u); // 800B89BC
  c->r[12]=R32(c->r[1]+0x00000098u); // 800B89C0
  c->r[11]=R32(c->r[1]+0x0000009Cu); // 800B89C4
  c->r[10]=R32(c->r[1]+0x000000A0u); // 800B89C8
  c->r[9]=R32(c->r[1]+0x000000A4u); // 800B89CC
  c->r[8]=R32(c->r[1]+0x000000A8u); // 800B89D0
  c->r[7]=R32(c->r[1]+0x000000ACu); // 800B89D4
  c->r[6]=R32(c->r[1]+0x000000B0u); // 800B89D8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800B89DC
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B89E0
  W32(c->r[1]+0x00000138u,c->r[31]); // 800B89E4
  W32(c->r[1]+0x0000013Cu,c->r[29]); // 800B89E8
  W32(c->r[1]+0x00000140u,c->r[28]); // 800B89EC
  W32(c->r[1]+0x00000144u,c->r[27]); // 800B89F0
  W32(c->r[1]+0x00000148u,c->r[26]); // 800B89F4
  W32(c->r[1]+0x0000014Cu,c->r[25]); // 800B89F8
  W32(c->r[1]+0x00000150u,c->r[24]); // 800B89FC
  W32(c->r[1]+0x00000154u,c->r[23]); // 800B8A00
  W32(c->r[1]+0x00000158u,c->r[12]); // 800B8A04
  W32(c->r[1]+0x0000015Cu,c->r[11]); // 800B8A08
  W32(c->r[1]+0x00000160u,c->r[10]); // 800B8A0C
  W32(c->r[1]+0x00000164u,c->r[9]); // 800B8A10
  W32(c->r[1]+0x00000168u,c->r[8]); // 800B8A14
  W32(c->r[1]+0x0000016Cu,c->r[7]); // 800B8A18
  W32(c->r[1]+0x00000170u,c->r[6]); // 800B8A1C
  W32(c->r[1]+0x00000174u,c->r[0]); // 800B8A20
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800B8A24
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800B8A28
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 800B8A2C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800B8A30
  c->lr=0x800B8A38u; f_80394CE4(c); // 800B8A34
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8A38
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8A3C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8A40
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 800B8A44
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 800B8A48
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 800B8A4C
  goto L_800B8C34; // 800B8A50
L_800B8A54:;
  c->r[0]=R8(c->r[13]+0xFFFF9500u); // 800B8A54
  c->r[3]=c->r[7]+c->r[6]; // 800B8A58
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800B8A5C
  c->r[4]=R32(c->r[4]+0x00000000u); // 800B8A60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B8A64
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)28); // 800B8A68
  c->r[6]=c->r[4]+c->r[3]; // 800B8A6C
  c->r[7]=c->r[4]+c->r[0]; // 800B8A70
  if (!crb(c,2)) { goto L_800B8AE4; } // 800B8A74
  c->r[4]=0u+0x80470000u; // 800B8A78
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B8A7C
  c->r[0]=0u+0x00000001u; // 800B8A80
  {uint32_t ea=c->r[2]+0xFFFF8E28u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B8A84
  c->r[3]=c->r[4]+0x00000D88u; // 800B8A88
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8A8C
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8A90
  {uint32_t ea=c->r[2]+0xFFFF8E2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8A94
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8A98
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8A9C
  {uint32_t ea=c->r[4]+0x00000D88u; WF32(ea,c->f[6]);} // 800B8AA0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 800B8AA4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 800B8AA8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 800B8AAC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800B8AB0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800B8AB4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 800B8AB8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 800B8ABC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 800B8AC0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 800B8AC4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 800B8AC8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[4]);} // 800B8ACC
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 800B8AD0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800B8AD4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[4]);} // 800B8AD8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800B8ADC
  W8(c->r[13]+0xFFFF9500u,c->r[0]); // 800B8AE0
L_800B8AE4:;
  {uint32_t ea=c->r[6]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8AE4
  c->r[3]=c->r[1]+0x00000038u; // 800B8AE8
  {uint32_t ea=c->r[7]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8AEC
  c->r[4]=0u+0x80470000u; // 800B8AF0
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8AF4
  c->r[5]=c->r[3]|c->r[3]; // 800B8AF8
  {uint32_t ea=c->r[7]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B8AFC
  c->r[4]=c->r[4]+0x00000D88u; // 800B8B00
  {uint32_t ea=c->r[6]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B8B04
  {uint32_t ea=c->r[7]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B8B08
  {uint32_t ea=c->r[6]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B8B0C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B8B10
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800B8B14
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800B8B18
  {uint32_t ea=c->r[6]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 800B8B1C
  {uint32_t ea=c->r[7]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 800B8B20
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8B24
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[12]);} // 800B8B28
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[11]);} // 800B8B2C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[10]);} // 800B8B30
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[9]);} // 800B8B34
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[8]);} // 800B8B38
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[7]);} // 800B8B3C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[6]);} // 800B8B40
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[5]);} // 800B8B44
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[4]);} // 800B8B48
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[3]);} // 800B8B4C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 800B8B50
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 800B8B54
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800B8B58
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 800B8B5C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 800B8B60
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800B8B64
  c->lr=0x800B8B6Cu; f_802655E8(c); // 800B8B68
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B8B6C
  c->r[3]=c->r[1]+0x00000008u; // 800B8B70
  c->r[23]=R32(c->r[1]+0x00000038u); // 800B8B74
  c->r[5]=c->r[3]|c->r[3]; // 800B8B78
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 800B8B7C
  c->r[24]=R32(c->r[1]+0x0000003Cu); // 800B8B80
  c->r[25]=R32(c->r[1]+0x00000040u); // 800B8B84
  c->r[4]=c->r[1]+0x000000F8u; // 800B8B88
  c->r[26]=R32(c->r[1]+0x00000044u); // 800B8B8C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800B8B90
  c->r[27]=R32(c->r[1]+0x00000048u); // 800B8B94
  c->r[28]=R32(c->r[1]+0x0000004Cu); // 800B8B98
  c->r[29]=R32(c->r[1]+0x00000050u); // 800B8B9C
  c->r[31]=R32(c->r[1]+0x00000054u); // 800B8BA0
  c->r[12]=R32(c->r[1]+0x00000058u); // 800B8BA4
  c->r[11]=R32(c->r[1]+0x0000005Cu); // 800B8BA8
  c->r[10]=R32(c->r[1]+0x00000060u); // 800B8BAC
  c->r[9]=R32(c->r[1]+0x00000064u); // 800B8BB0
  c->r[8]=R32(c->r[1]+0x00000068u); // 800B8BB4
  c->r[7]=R32(c->r[1]+0x0000006Cu); // 800B8BB8
  c->r[6]=R32(c->r[1]+0x00000070u); // 800B8BBC
  c->r[0]=R32(c->r[1]+0x00000074u); // 800B8BC0
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8BC4
  W32(c->r[1]+0x000000F8u,c->r[23]); // 800B8BC8
  W32(c->r[1]+0x000000FCu,c->r[24]); // 800B8BCC
  W32(c->r[1]+0x00000100u,c->r[25]); // 800B8BD0
  W32(c->r[1]+0x00000104u,c->r[26]); // 800B8BD4
  W32(c->r[1]+0x00000108u,c->r[27]); // 800B8BD8
  W32(c->r[1]+0x0000010Cu,c->r[28]); // 800B8BDC
  W32(c->r[1]+0x00000110u,c->r[29]); // 800B8BE0
  W32(c->r[1]+0x00000114u,c->r[31]); // 800B8BE4
  W32(c->r[1]+0x00000118u,c->r[12]); // 800B8BE8
  W32(c->r[1]+0x0000011Cu,c->r[11]); // 800B8BEC
  W32(c->r[1]+0x00000120u,c->r[10]); // 800B8BF0
  W32(c->r[1]+0x00000124u,c->r[9]); // 800B8BF4
  W32(c->r[1]+0x00000128u,c->r[8]); // 800B8BF8
  W32(c->r[1]+0x0000012Cu,c->r[7]); // 800B8BFC
  W32(c->r[1]+0x00000130u,c->r[6]); // 800B8C00
  W32(c->r[1]+0x00000134u,c->r[0]); // 800B8C04
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800B8C08
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 800B8C0C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 800B8C10
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800B8C14
  c->lr=0x800B8C1Cu; f_80394CE4(c); // 800B8C18
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B8C1C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B8C20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8C24
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 800B8C28
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 800B8C2C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 800B8C30
L_800B8C34:;
  c->r[11]=c->r[1]+0x000001E0u; // 800B8C34
  c->lr=0x800B8C3Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B8C38
  c->r[0]=R32(c->r[1]+0x000001E4u); // 800B8C3C
  c->lr=c->r[0]; // 800B8C40
  c->r[1]=c->r[1]+0x000001E0u; // 800B8C44
  return; // 800B8C48
}

// fn_800B8C4C
void f_800B8C4C(Ctx* __restrict c) {
  trace_call(0x800B8C4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8C4C
  c->r[0]=c->lr; // 800B8C50
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8C54
  W32(c->r[1]+0x00000124u,c->r[0]); // 800B8C58
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800B8C5C
  W32(c->r[1]+0x00000118u,c->r[30]); // 800B8C60
  W32(c->r[1]+0x00000114u,c->r[29]); // 800B8C64
  c->r[7]=R32(c->r[3]+0x00000020u); // 800B8C68
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800B8C6C
  cmps(c,0,(int32_t)c->r[7],0); // 800B8C70
  if (crb(c,1)) { goto L_800B8C80; } // 800B8C74
  c->r[3]=0u+0x00000001u; // 800B8C78
  goto L_800B8F0C; // 800B8C7C
L_800B8C80:;
  c->r[6]=R32(c->r[3]+0x00000028u); // 800B8C80
  c->r[30]=c->r[7]+0xFFFFFFFFu; // 800B8C84
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[30]); // 800B8C88
  if (!crb(c,0)) { goto L_800B8DD0; } // 800B8C8C
  c->r[0]=c->r[6]+0x00000001u; // 800B8C90
  cmps(c,0,(int32_t)c->r[5],0); // 800B8C94
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B8C98
  if (crb(c,2)) { goto L_800B8F08; } // 800B8C9C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800B8CA0
  cmps(c,0,(int32_t)c->r[5],0); // 800B8CA4
  if (crb(c,2)) { goto L_800B8CFC; } // 800B8CA8
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B8CAC
  c->r[30]=c->r[5]+c->r[0]; // 800B8CB0
  c->r[12]=R16(c->r[5]+c->r[0]); // 800B8CB4
  c->r[11]=R16(c->r[30]+0x00000002u); // 800B8CB8
  c->r[10]=R32(c->r[30]+0x00000004u); // 800B8CBC
  c->r[9]=R32(c->r[30]+0x00000008u); // 800B8CC0
  c->r[8]=R32(c->r[30]+0x0000000Cu); // 800B8CC4
  c->r[7]=R32(c->r[30]+0x00000010u); // 800B8CC8
  c->r[6]=R32(c->r[30]+0x00000014u); // 800B8CCC
  c->r[5]=R32(c->r[30]+0x00000018u); // 800B8CD0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800B8CD4
  W16(c->r[1]+0x00000058u,c->r[12]); // 800B8CD8
  W16(c->r[1]+0x0000005Au,c->r[11]); // 800B8CDC
  W32(c->r[1]+0x0000005Cu,c->r[10]); // 800B8CE0
  W32(c->r[1]+0x00000060u,c->r[9]); // 800B8CE4
  W32(c->r[1]+0x00000064u,c->r[8]); // 800B8CE8
  W32(c->r[1]+0x00000068u,c->r[7]); // 800B8CEC
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 800B8CF0
  W32(c->r[1]+0x00000070u,c->r[5]); // 800B8CF4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800B8CF8
L_800B8CFC:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800B8CFC
  c->r[31]=0u+0x00000000u; // 800B8D00
  c->r[6]=R32(c->r[3]+0x00000000u); // 800B8D04
  c->r[5]=0u+0x803F0000u; // 800B8D08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800B8D0C
  c->r[30]=R32(c->r[1]+0x00000058u); // 800B8D10
  c->r[5]=c->r[5]+0x00006888u; // 800B8D14
  W32(c->r[1]+0x000000C8u,c->r[31]); // 800B8D18
  c->r[12]=R32(c->r[1]+0x0000005Cu); // 800B8D1C
  c->r[3]=c->r[1]+0x00000030u; // 800B8D20
  W32(c->r[1]+0x000000C4u,c->r[5]); // 800B8D24
  c->r[29]=c->r[6]+c->r[0]; // 800B8D28
  c->r[11]=R32(c->r[1]+0x00000060u); // 800B8D2C
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800B8D30
  c->r[10]=R32(c->r[1]+0x00000064u); // 800B8D34
  W32(c->r[1]+0x000000D0u,c->r[31]); // 800B8D38
  c->r[9]=R32(c->r[1]+0x00000068u); // 800B8D3C
  {uint32_t ea=c->r[6]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D40
  c->r[8]=R32(c->r[1]+0x0000006Cu); // 800B8D44
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 800B8D48
  c->r[7]=R32(c->r[1]+0x00000070u); // 800B8D4C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D50
  c->r[6]=R32(c->r[1]+0x00000074u); // 800B8D54
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 800B8D58
  c->r[5]=R32(c->r[4]+0x00000000u); // 800B8D5C
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D60
  c->r[0]=R32(c->r[4]+0x00000004u); // 800B8D64
  c->r[4]=c->r[1]+0x000000C4u; // 800B8D68
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 800B8D6C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D70
  W32(c->r[1]+0x00000020u,c->r[31]); // 800B8D74
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 800B8D78
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D7C
  W32(c->r[1]+0x00000024u,c->r[31]); // 800B8D80
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 800B8D84
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D88
  W32(c->r[1]+0x00000018u,c->r[31]); // 800B8D8C
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 800B8D90
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8D94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800B8D98
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 800B8D9C
  W32(c->r[1]+0x000000F0u,c->r[30]); // 800B8DA0
  W32(c->r[1]+0x000000F4u,c->r[12]); // 800B8DA4
  W32(c->r[1]+0x000000F8u,c->r[11]); // 800B8DA8
  W32(c->r[1]+0x000000FCu,c->r[10]); // 800B8DAC
  W32(c->r[1]+0x00000100u,c->r[9]); // 800B8DB0
  W32(c->r[1]+0x00000104u,c->r[8]); // 800B8DB4
  W32(c->r[1]+0x00000108u,c->r[7]); // 800B8DB8
  W32(c->r[1]+0x0000010Cu,c->r[6]); // 800B8DBC
  W32(c->r[1]+0x00000030u,c->r[5]); // 800B8DC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800B8DC4
  c->lr=0x800B8DCCu; f_800B8F28(c); // 800B8DC8
  goto L_800B8F08; // 800B8DCC
L_800B8DD0:;
  cmps(c,0,(int32_t)c->r[5],0); // 800B8DD0
  if (crb(c,2)) { goto L_800B8F00; } // 800B8DD4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800B8DD8
  cmps(c,0,(int32_t)c->r[5],0); // 800B8DDC
  if (crb(c,2)) { goto L_800B8E34; } // 800B8DE0
  c->r[0]=rotl(c->r[30],5)&0xFFFFFFE0u; // 800B8DE4
  c->r[29]=c->r[5]+c->r[0]; // 800B8DE8
  c->r[12]=R16(c->r[5]+c->r[0]); // 800B8DEC
  c->r[11]=R16(c->r[29]+0x00000002u); // 800B8DF0
  c->r[10]=R32(c->r[29]+0x00000004u); // 800B8DF4
  c->r[9]=R32(c->r[29]+0x00000008u); // 800B8DF8
  c->r[8]=R32(c->r[29]+0x0000000Cu); // 800B8DFC
  c->r[7]=R32(c->r[29]+0x00000010u); // 800B8E00
  c->r[6]=R32(c->r[29]+0x00000014u); // 800B8E04
  c->r[5]=R32(c->r[29]+0x00000018u); // 800B8E08
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800B8E0C
  W16(c->r[1]+0x00000038u,c->r[12]); // 800B8E10
  W16(c->r[1]+0x0000003Au,c->r[11]); // 800B8E14
  W32(c->r[1]+0x0000003Cu,c->r[10]); // 800B8E18
  W32(c->r[1]+0x00000040u,c->r[9]); // 800B8E1C
  W32(c->r[1]+0x00000044u,c->r[8]); // 800B8E20
  W32(c->r[1]+0x00000048u,c->r[7]); // 800B8E24
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 800B8E28
  W32(c->r[1]+0x00000050u,c->r[5]); // 800B8E2C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800B8E30
L_800B8E34:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)28); // 800B8E34
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B8E38
  c->r[30]=0u+0x00000000u; // 800B8E3C
  c->r[31]=R32(c->r[1]+0x00000038u); // 800B8E40
  c->r[5]=0u+0x803F0000u; // 800B8E44
  W32(c->r[1]+0x0000007Cu,c->r[30]); // 800B8E48
  c->r[29]=c->r[3]+c->r[0]; // 800B8E4C
  c->r[5]=c->r[5]+0x00006888u; // 800B8E50
  W32(c->r[1]+0x00000078u,c->r[5]); // 800B8E54
  c->r[3]=c->r[1]+0x00000028u; // 800B8E58
  c->r[12]=R32(c->r[1]+0x0000003Cu); // 800B8E5C
  W32(c->r[1]+0x00000080u,c->r[30]); // 800B8E60
  c->r[11]=R32(c->r[1]+0x00000040u); // 800B8E64
  W32(c->r[1]+0x00000084u,c->r[30]); // 800B8E68
  c->r[10]=R32(c->r[1]+0x00000044u); // 800B8E6C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8E70
  c->r[9]=R32(c->r[1]+0x00000048u); // 800B8E74
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 800B8E78
  c->r[8]=R32(c->r[1]+0x0000004Cu); // 800B8E7C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8E80
  c->r[7]=R32(c->r[1]+0x00000050u); // 800B8E84
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800B8E88
  c->r[6]=R32(c->r[1]+0x00000054u); // 800B8E8C
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8E90
  c->r[5]=R32(c->r[4]+0x00000000u); // 800B8E94
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800B8E98
  c->r[0]=R32(c->r[4]+0x00000004u); // 800B8E9C
  c->r[4]=c->r[1]+0x00000078u; // 800B8EA0
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8EA4
  W32(c->r[1]+0x00000010u,c->r[30]); // 800B8EA8
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 800B8EAC
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8EB0
  W32(c->r[1]+0x00000014u,c->r[30]); // 800B8EB4
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 800B8EB8
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8EBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800B8EC0
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 800B8EC4
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B8EC8
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800B8ECC
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800B8ED0
  W32(c->r[1]+0x000000A4u,c->r[31]); // 800B8ED4
  W32(c->r[1]+0x000000A8u,c->r[12]); // 800B8ED8
  W32(c->r[1]+0x000000ACu,c->r[11]); // 800B8EDC
  W32(c->r[1]+0x000000B0u,c->r[10]); // 800B8EE0
  W32(c->r[1]+0x000000B4u,c->r[9]); // 800B8EE4
  W32(c->r[1]+0x000000B8u,c->r[8]); // 800B8EE8
  W32(c->r[1]+0x000000BCu,c->r[7]); // 800B8EEC
  W32(c->r[1]+0x000000C0u,c->r[6]); // 800B8EF0
  W32(c->r[1]+0x00000028u,c->r[5]); // 800B8EF4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800B8EF8
  c->lr=0x800B8F00u; f_800B8F28(c); // 800B8EFC
L_800B8F00:;
  c->r[3]=0u+0x00000001u; // 800B8F00
  goto L_800B8F0C; // 800B8F04
L_800B8F08:;
  c->r[3]=0u+0x00000000u; // 800B8F08
L_800B8F0C:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 800B8F0C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800B8F10
  c->r[30]=R32(c->r[1]+0x00000118u); // 800B8F14
  c->r[29]=R32(c->r[1]+0x00000114u); // 800B8F18
  c->lr=c->r[0]; // 800B8F1C
  c->r[1]=c->r[1]+0x00000120u; // 800B8F20
  return; // 800B8F24
}

// fn_800B8F28
void f_800B8F28(Ctx* __restrict c) {
  trace_call(0x800B8F28u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B8F28
  c->r[0]=c->lr; // 800B8F2C
  c->r[5]=R32(c->r[3]+0x00000000u); // 800B8F30
  W32(c->r[1]+0x00000064u,c->r[0]); // 800B8F34
  c->r[0]=0u-c->r[5]; // 800B8F38
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800B8F3C
  c->r[0]=c->r[0]|c->r[5]; // 800B8F40
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800B8F44
  c->r[31]=c->r[1]|c->r[1]; // 800B8F48
  W32(c->r[1]+0x00000058u,c->r[30]); // 800B8F4C
  c->r[30]=c->r[4]|c->r[4]; // 800B8F50
  W32(c->r[1]+0x00000054u,c->r[29]); // 800B8F54
  c->r[29]=c->r[3]|c->r[3]; // 800B8F58
  if (crb(c,2)) { goto L_800B904C; } // 800B8F5C
  c->r[0]=R8(c->r[13]+0xFFFF9399u); // 800B8F60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B8F64
  if (!crb(c,2)) { goto L_800B9024; } // 800B8F68
  c->r[4]=0u+0x80440000u; // 800B8F6C
  c->r[5]=0u+0x00000000u; // 800B8F70
  c->r[7]=c->r[4]+0x000021BCu; // 800B8F74
  W32(c->r[4]+0x000021BCu,c->r[5]); // 800B8F78
  c->r[0]=0u+0x00000FFBu; // 800B8F7C
  c->r[6]=0u+0x00000000u; // 800B8F80
  W32(c->r[7]+0x00000004u,c->r[5]); // 800B8F84
  W32(c->r[4]+0x000021BCu,c->r[5]); // 800B8F88
  W32(c->r[7]+0x00000004u,c->r[0]); // 800B8F8C
  goto L_800B8FE0; // 800B8F90
L_800B8F94:;
  c->r[0]=0u+0x00000000u; // 800B8F94
  c->r[6]=c->r[6]+0x00000008u; // 800B8F98
  W32(c->r[7]+0x00000008u,c->r[0]); // 800B8F9C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800B8FA0
  W32(c->r[7]+0x00000010u,c->r[0]); // 800B8FA4
  W32(c->r[7]+0x00000014u,c->r[0]); // 800B8FA8
  W32(c->r[7]+0x00000018u,c->r[0]); // 800B8FAC
  W32(c->r[7]+0x0000001Cu,c->r[0]); // 800B8FB0
  W32(c->r[7]+0x00000020u,c->r[0]); // 800B8FB4
  W32(c->r[7]+0x00000024u,c->r[0]); // 800B8FB8
  W32(c->r[7]+0x00000028u,c->r[0]); // 800B8FBC
  W32(c->r[7]+0x0000002Cu,c->r[0]); // 800B8FC0
  W32(c->r[7]+0x00000030u,c->r[0]); // 800B8FC4
  W32(c->r[7]+0x00000034u,c->r[0]); // 800B8FC8
  W32(c->r[7]+0x00000038u,c->r[0]); // 800B8FCC
  W32(c->r[7]+0x0000003Cu,c->r[0]); // 800B8FD0
  W32(c->r[7]+0x00000040u,c->r[0]); // 800B8FD4
  W32(c->r[7]+0x00000044u,c->r[0]); // 800B8FD8
  c->r[7]=c->r[7]+0x00000040u; // 800B8FDC
L_800B8FE0:;
  cmps(c,0,(int32_t)c->r[6],4084); // 800B8FE0
  if (crb(c,0)) { IRQCHK(c); goto L_800B8F94; } // 800B8FE4
  c->r[5]=0u+0x80440000u; // 800B8FE8
  c->r[0]=0u+0x00000001u; // 800B8FEC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800B8FF0
  c->r[4]=0u+0x00000000u; // 800B8FF4
  c->r[5]=c->r[5]+0x000021BCu; // 800B8FF8
  W8(c->r[13]+0xFFFF9399u,c->r[0]); // 800B8FFC
  c->r[5]=c->r[5]+c->r[6]; // 800B9000
  W32(c->r[5]+0x00000008u,c->r[4]); // 800B9004
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800B9008
  W32(c->r[5]+0x00000010u,c->r[4]); // 800B900C
  W32(c->r[5]+0x00000014u,c->r[4]); // 800B9010
  W32(c->r[5]+0x00000018u,c->r[4]); // 800B9014
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 800B9018
  W32(c->r[5]+0x00000020u,c->r[4]); // 800B901C
  W32(c->r[5]+0x00000024u,c->r[4]); // 800B9020
L_800B9024:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800B9024
  c->r[4]=0u+0x80440000u; // 800B9028
  c->r[4]=c->r[4]+0x000021BCu; // 800B902C
  c->r[5]=R32(c->r[3]+0x00000000u); // 800B9030
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B9034
  c->r[3]=c->r[4]+c->r[0]; // 800B9038
  c->r[0]=R32(c->r[3]+0x00000008u); // 800B903C
  c->r[0]=c->r[0]-c->r[5]; // 800B9040
  c->r[0]=cntlz(c->r[0]); // 800B9044
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B9048
L_800B904C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B904C
  if (crb(c,2)) { goto L_800B9228; } // 800B9050
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800B9054
  c->lr=0x800B905Cu; f_802A6EE4(c); // 800B9058
  cmps(c,0,(int32_t)c->r[3],0); // 800B905C
  if (crb(c,2)) { goto L_800B9228; } // 800B9060
  if (crb(c,2)) { goto L_800B9098; } // 800B9064
  c->r[0]=0u+0x00000000u; // 800B9068
  c->r[4]=0u+0x803F0000u; // 800B906C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B9070
  c->r[4]=c->r[4]+0x00006888u; // 800B9074
  W32(c->r[3]+0x00000008u,c->r[0]); // 800B9078
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B907C
  W32(c->r[31]+0x00000044u,c->r[1]); // 800B9080
  W32(c->r[31]+0x00000010u,c->r[0]); // 800B9084
  W32(c->r[31]+0x00000014u,c->r[0]); // 800B9088
  W32(c->r[31]+0x00000008u,c->r[0]); // 800B908C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800B9090
  W32(c->r[3]+0x00000000u,c->r[4]); // 800B9094
L_800B9098:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 800B9098
  c->r[4]=addc(c,c->r[3],0x0000004Cu,0); cr0(c,c->r[4]); // 800B909C
  c->r[5]=R32(c->r[30]+0x00000008u); // 800B90A0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B90A4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800B90A8
  W32(c->r[3]+0x00000008u,c->r[5]); // 800B90AC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B90B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800B90B4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B90B8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800B90BC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B90C0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800B90C4
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B90C8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800B90CC
  {uint32_t ea=c->r[30]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B90D0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B90D4
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B90D8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800B90DC
  {uint32_t ea=c->r[30]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B90E0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 800B90E4
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 800B90E8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800B90EC
  c->r[0]=R32(c->r[30]+0x00000030u); // 800B90F0
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 800B90F4
  c->r[5]=R32(c->r[30]+0x00000034u); // 800B90F8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800B90FC
  c->r[0]=R32(c->r[30]+0x00000038u); // 800B9100
  W32(c->r[3]+0x00000034u,c->r[5]); // 800B9104
  c->r[5]=R32(c->r[30]+0x0000003Cu); // 800B9108
  W32(c->r[3]+0x00000038u,c->r[0]); // 800B910C
  c->r[0]=R32(c->r[30]+0x00000040u); // 800B9110
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 800B9114
  c->r[5]=R32(c->r[30]+0x00000044u); // 800B9118
  W32(c->r[3]+0x00000040u,c->r[0]); // 800B911C
  c->r[0]=R32(c->r[30]+0x00000048u); // 800B9120
  W32(c->r[3]+0x00000044u,c->r[5]); // 800B9124
  W32(c->r[3]+0x00000048u,c->r[0]); // 800B9128
  if (crb(c,2)) { goto L_800B9144; } // 800B912C
  c->r[0]=0u+0x00000000u; // 800B9130
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 800B9134
  W32(c->r[4]+0x00000000u,c->r[0]); // 800B9138
  W32(c->r[4]+0x00000004u,c->r[0]); // 800B913C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800B9140
L_800B9144:;
  c->r[0]=R8(c->r[13]+0xFFFF9399u); // 800B9144
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9148
  if (!crb(c,2)) { goto L_800B9208; } // 800B914C
  c->r[3]=0u+0x80440000u; // 800B9150
  c->r[5]=0u+0x00000000u; // 800B9154
  c->r[7]=c->r[3]+0x000021BCu; // 800B9158
  W32(c->r[3]+0x000021BCu,c->r[5]); // 800B915C
  c->r[0]=0u+0x00000FFBu; // 800B9160
  c->r[6]=0u+0x00000000u; // 800B9164
  W32(c->r[7]+0x00000004u,c->r[5]); // 800B9168
  W32(c->r[3]+0x000021BCu,c->r[5]); // 800B916C
  W32(c->r[7]+0x00000004u,c->r[0]); // 800B9170
  goto L_800B91C4; // 800B9174
L_800B9178:;
  c->r[0]=0u+0x00000000u; // 800B9178
  c->r[6]=c->r[6]+0x00000008u; // 800B917C
  W32(c->r[7]+0x00000008u,c->r[0]); // 800B9180
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800B9184
  W32(c->r[7]+0x00000010u,c->r[0]); // 800B9188
  W32(c->r[7]+0x00000014u,c->r[0]); // 800B918C
  W32(c->r[7]+0x00000018u,c->r[0]); // 800B9190
  W32(c->r[7]+0x0000001Cu,c->r[0]); // 800B9194
  W32(c->r[7]+0x00000020u,c->r[0]); // 800B9198
  W32(c->r[7]+0x00000024u,c->r[0]); // 800B919C
  W32(c->r[7]+0x00000028u,c->r[0]); // 800B91A0
  W32(c->r[7]+0x0000002Cu,c->r[0]); // 800B91A4
  W32(c->r[7]+0x00000030u,c->r[0]); // 800B91A8
  W32(c->r[7]+0x00000034u,c->r[0]); // 800B91AC
  W32(c->r[7]+0x00000038u,c->r[0]); // 800B91B0
  W32(c->r[7]+0x0000003Cu,c->r[0]); // 800B91B4
  W32(c->r[7]+0x00000040u,c->r[0]); // 800B91B8
  W32(c->r[7]+0x00000044u,c->r[0]); // 800B91BC
  c->r[7]=c->r[7]+0x00000040u; // 800B91C0
L_800B91C4:;
  cmps(c,0,(int32_t)c->r[6],4084); // 800B91C4
  if (crb(c,0)) { IRQCHK(c); goto L_800B9178; } // 800B91C8
  c->r[5]=0u+0x80440000u; // 800B91CC
  c->r[0]=0u+0x00000001u; // 800B91D0
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800B91D4
  c->r[3]=0u+0x00000000u; // 800B91D8
  c->r[5]=c->r[5]+0x000021BCu; // 800B91DC
  W8(c->r[13]+0xFFFF9399u,c->r[0]); // 800B91E0
  c->r[5]=c->r[5]+c->r[6]; // 800B91E4
  W32(c->r[5]+0x00000008u,c->r[3]); // 800B91E8
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800B91EC
  W32(c->r[5]+0x00000010u,c->r[3]); // 800B91F0
  W32(c->r[5]+0x00000014u,c->r[3]); // 800B91F4
  W32(c->r[5]+0x00000018u,c->r[3]); // 800B91F8
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 800B91FC
  W32(c->r[5]+0x00000020u,c->r[3]); // 800B9200
  W32(c->r[5]+0x00000024u,c->r[3]); // 800B9204
L_800B9208:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800B9208
  c->r[3]=0u+0x80440000u; // 800B920C
  c->r[3]=c->r[3]+0x000021BCu; // 800B9210
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B9214
  c->r[3]=c->r[3]+c->r[0]; // 800B9218
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800B921C
  c->r[3]=c->r[3]+0x00000030u; // 800B9220
  c->lr=0x800B9228u; f_8003FD14(c); // 800B9224
L_800B9228:;
  c->r[10]=c->r[31]|c->r[31]; // 800B9228
  c->r[31]=R32(c->r[31]+0x0000005Cu); // 800B922C
  c->r[30]=R32(c->r[10]+0x00000058u); // 800B9230
  c->r[29]=R32(c->r[10]+0x00000054u); // 800B9234
  c->r[10]=R32(c->r[1]+0x00000000u); // 800B9238
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B923C
  c->r[1]=c->r[10]|c->r[10]; // 800B9240
  c->lr=c->r[0]; // 800B9244
  return; // 800B9248
}

// dtor_800B924C
void f_800B924C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B924C
  c->r[0]=c->lr; // 800B9250
  cmps(c,0,(int32_t)c->r[3],0); // 800B9254
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B9258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800B925C
  c->r[31]=c->r[3]|c->r[3]; // 800B9260
  if (crb(c,2)) { goto L_800B9274; } // 800B9264
  cmps(c,0,(int32_t)c->r[4],0); // 800B9268
  if (!crb(c,1)) { goto L_800B9274; } // 800B926C
  c->lr=0x800B9274u; f_802896EC(c); // 800B9270
L_800B9274:;
  c->r[3]=c->r[31]|c->r[31]; // 800B9274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800B9278
  c->r[0]=R32(c->r[1]+0x00000014u); // 800B927C
  c->lr=c->r[0]; // 800B9280
  c->r[1]=c->r[1]+0x00000010u; // 800B9284
  return; // 800B9288
}

// fn_800B928C
void f_800B928C(Ctx* __restrict c) {
  trace_call(0x800B928Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B928C
  c->r[0]=c->lr; // 800B9290
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800B9294
  c->r[11]=c->r[1]+0x000000B0u; // 800B9298
  c->lr=0x800B92A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B929C
  c->r[8]=R32(c->r[3]+0x00000020u); // 800B92A0
  cmps(c,0,(int32_t)c->r[7],0); // 800B92A4
  c->r[7]=R32(c->r[3]+0x00000028u); // 800B92A8
  c->r[30]=c->r[3]|c->r[3]; // 800B92AC
  c->r[0]=c->r[8]+c->r[5]; // 800B92B0
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B92B4
  c->r[5]=c->r[7]+c->r[0]; // 800B92B8
  c->r[31]=c->r[6]|c->r[6]; // 800B92BC
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[8]); // 800B92C0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800B92C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[8]); // 800B92C8
  c->r[0]=c->r[5]-c->r[0]; // 800B92CC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800B92D0
  if (crb(c,2)) { goto L_800B9404; } // 800B92D4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800B92D8
  cmps(c,0,(int32_t)c->r[5],0); // 800B92DC
  if (crb(c,2)) { goto L_800B9334; } // 800B92E0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800B92E4
  c->r[28]=c->r[5]+c->r[0]; // 800B92E8
  c->r[12]=R16(c->r[5]+c->r[0]); // 800B92EC
  c->r[11]=R16(c->r[28]+0x00000002u); // 800B92F0
  c->r[10]=R32(c->r[28]+0x00000004u); // 800B92F4
  c->r[9]=R32(c->r[28]+0x00000008u); // 800B92F8
  c->r[8]=R32(c->r[28]+0x0000000Cu); // 800B92FC
  c->r[7]=R32(c->r[28]+0x00000010u); // 800B9300
  c->r[6]=R32(c->r[28]+0x00000014u); // 800B9304
  c->r[5]=R32(c->r[28]+0x00000018u); // 800B9308
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 800B930C
  W16(c->r[1]+0x00000020u,c->r[12]); // 800B9310
  W16(c->r[1]+0x00000022u,c->r[11]); // 800B9314
  W32(c->r[1]+0x00000024u,c->r[10]); // 800B9318
  W32(c->r[1]+0x00000028u,c->r[9]); // 800B931C
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 800B9320
  W32(c->r[1]+0x00000030u,c->r[7]); // 800B9324
  W32(c->r[1]+0x00000034u,c->r[6]); // 800B9328
  W32(c->r[1]+0x00000038u,c->r[5]); // 800B932C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800B9330
L_800B9334:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800B9334
  c->r[28]=0u+0x00000000u; // 800B9338
  c->r[6]=R32(c->r[3]+0x00000000u); // 800B933C
  c->r[5]=0u+0x803F0000u; // 800B9340
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800B9344
  c->r[29]=R32(c->r[1]+0x00000020u); // 800B9348
  c->r[5]=c->r[5]+0x00006888u; // 800B934C
  W32(c->r[1]+0x00000044u,c->r[28]); // 800B9350
  c->r[12]=R32(c->r[1]+0x00000024u); // 800B9354
  c->r[3]=c->r[1]+0x00000018u; // 800B9358
  W32(c->r[1]+0x00000040u,c->r[5]); // 800B935C
  c->r[27]=c->r[6]+c->r[0]; // 800B9360
  c->r[11]=R32(c->r[1]+0x00000028u); // 800B9364
  W32(c->r[1]+0x00000048u,c->r[28]); // 800B9368
  c->r[10]=R32(c->r[1]+0x0000002Cu); // 800B936C
  W32(c->r[1]+0x0000004Cu,c->r[28]); // 800B9370
  c->r[9]=R32(c->r[1]+0x00000030u); // 800B9374
  {uint32_t ea=c->r[6]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9378
  c->r[8]=R32(c->r[1]+0x00000034u); // 800B937C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800B9380
  c->r[7]=R32(c->r[1]+0x00000038u); // 800B9384
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9388
  c->r[6]=R32(c->r[1]+0x0000003Cu); // 800B938C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800B9390
  c->r[5]=R32(c->r[4]+0x00000000u); // 800B9394
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9398
  c->r[0]=R32(c->r[4]+0x00000004u); // 800B939C
  c->r[4]=c->r[1]+0x00000040u; // 800B93A0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800B93A4
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B93A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800B93AC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 800B93B0
  {uint32_t ea=c->r[27]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B93B4
  W32(c->r[1]+0x00000014u,c->r[28]); // 800B93B8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 800B93BC
  {uint32_t ea=c->r[27]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B93C0
  W32(c->r[1]+0x00000008u,c->r[28]); // 800B93C4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800B93C8
  {uint32_t ea=c->r[27]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B93CC
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 800B93D0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800B93D4
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 800B93D8
  W32(c->r[1]+0x00000070u,c->r[12]); // 800B93DC
  W32(c->r[1]+0x00000074u,c->r[11]); // 800B93E0
  W32(c->r[1]+0x00000078u,c->r[10]); // 800B93E4
  W32(c->r[1]+0x0000007Cu,c->r[9]); // 800B93E8
  W32(c->r[1]+0x00000080u,c->r[8]); // 800B93EC
  W32(c->r[1]+0x00000084u,c->r[7]); // 800B93F0
  W32(c->r[1]+0x00000088u,c->r[6]); // 800B93F4
  W32(c->r[1]+0x00000018u,c->r[5]); // 800B93F8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800B93FC
  c->lr=0x800B9404u; f_800B8F28(c); // 800B9400
L_800B9404:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800B9404
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 800B9408
  if (!crb(c,2)) { goto L_800B9418; } // 800B940C
  c->r[3]=0u+0x00000001u; // 800B9410
  goto L_800B941C; // 800B9414
L_800B9418:;
  c->r[3]=0u+0x00000000u; // 800B9418
L_800B941C:;
  c->r[11]=c->r[1]+0x000000B0u; // 800B941C
  c->lr=0x800B9424u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800B9420
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800B9424
  c->lr=c->r[0]; // 800B9428
  c->r[1]=c->r[1]+0x000000B0u; // 800B942C
  return; // 800B9430
}

// fn_800B9434
void f_800B9434(Ctx* __restrict c) {
  trace_call(0x800B9434u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9434
  c->r[0]=c->lr; // 800B9438
  W32(c->r[1]+0x00000234u,c->r[0]); // 800B943C
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[31]);} // 800B9440
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,31,ea,0,0);} // 800B9444
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[30]);} // 800B9448
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,30,ea,0,0);} // 800B944C
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[29]);} // 800B9450
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,29,ea,0,0);} // 800B9454
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[28]);} // 800B9458
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,28,ea,0,0);} // 800B945C
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[27]);} // 800B9460
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,27,ea,0,0);} // 800B9464
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[26]);} // 800B9468
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,26,ea,0,0);} // 800B946C
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[25]);} // 800B9470
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,25,ea,0,0);} // 800B9474
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[24]);} // 800B9478
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,24,ea,0,0);} // 800B947C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[23]);} // 800B9480
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,23,ea,0,0);} // 800B9484
  c->r[11]=c->r[1]+0x000001A0u; // 800B9488
  c->lr=0x800B9490u; f_80289DC0(c); // 800B948C
  c->r[6]=R32(c->r[3]+0x00000020u); // 800B9490
  c->f[30]=c->f[1]; // 800B9494
  c->r[7]=R32(c->r[3]+0x00000028u); // 800B9498
  c->f[31]=c->f[2]; // 800B949C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800B94A0
  c->r[23]=c->r[3]|c->r[3]; // 800B94A4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800B94A8
  c->r[14]=c->r[4]|c->r[4]; // 800B94AC
  c->r[24]=c->r[5]|c->r[5]; // 800B94B0
  if (!crb(c,0)) { goto L_800B9AF4; } // 800B94B4
  c->r[0]=R8(c->r[13]+0xFFFF9500u); // 800B94B8
  c->r[4]=c->r[7]+0x00000001u; // 800B94BC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800B94C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800B94C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B94C8
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)28); // 800B94CC
  c->r[6]=c->r[3]+c->r[4]; // 800B94D0
  c->r[7]=c->r[3]+c->r[0]; // 800B94D4
  if (!crb(c,2)) { goto L_800B9548; } // 800B94D8
  c->r[4]=0u+0x80470000u; // 800B94DC
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B94E0
  c->r[0]=0u+0x00000001u; // 800B94E4
  {uint32_t ea=c->r[2]+0xFFFF8E28u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B94E8
  c->r[3]=c->r[4]+0x00000D88u; // 800B94EC
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B94F0
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B94F4
  {uint32_t ea=c->r[2]+0xFFFF8E2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B94F8
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B94FC
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9500
  {uint32_t ea=c->r[4]+0x00000D88u; WF32(ea,c->f[6]);} // 800B9504
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 800B9508
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 800B950C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 800B9510
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800B9514
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800B9518
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 800B951C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 800B9520
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 800B9524
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 800B9528
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 800B952C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[4]);} // 800B9530
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 800B9534
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800B9538
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[4]);} // 800B953C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[4]);} // 800B9540
  W8(c->r[13]+0xFFFF9500u,c->r[0]); // 800B9544
L_800B9548:;
  {uint32_t ea=c->r[6]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9548
  c->r[3]=c->r[1]+0x000000D0u; // 800B954C
  {uint32_t ea=c->r[7]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9550
  c->r[4]=0u+0x80470000u; // 800B9554
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B9558
  c->r[5]=c->r[3]|c->r[3]; // 800B955C
  {uint32_t ea=c->r[7]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B9560
  c->r[4]=c->r[4]+0x00000D88u; // 800B9564
  {uint32_t ea=c->r[6]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B9568
  {uint32_t ea=c->r[7]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B956C
  {uint32_t ea=c->r[6]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B9570
  {uint32_t ea=c->r[7]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B9574
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800B9578
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800B957C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 800B9580
  {uint32_t ea=c->r[7]+0x00000000u; c->f[12]=c->ps1[12]=RF32(ea);} // 800B9584
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9588
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[12]);} // 800B958C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[11]);} // 800B9590
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[10]);} // 800B9594
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[9]);} // 800B9598
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[8]);} // 800B959C
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[7]);} // 800B95A0
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[6]);} // 800B95A4
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[5]);} // 800B95A8
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[4]);} // 800B95AC
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[3]);} // 800B95B0
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[2]);} // 800B95B4
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 800B95B8
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 800B95BC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 800B95C0
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 800B95C4
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 800B95C8
  c->lr=0x800B95D0u; f_802655E8(c); // 800B95CC
  c->r[22]=R32(c->r[1]+0x000000D0u); // 800B95D0
  c->r[3]=c->r[1]+0x00000028u; // 800B95D4
  c->r[21]=R32(c->r[1]+0x000000D4u); // 800B95D8
  c->r[5]=c->r[3]|c->r[3]; // 800B95DC
  c->r[20]=R32(c->r[1]+0x000000D8u); // 800B95E0
  c->r[4]=c->r[1]+0x00000110u; // 800B95E4
  c->r[19]=R32(c->r[1]+0x000000DCu); // 800B95E8
  c->r[18]=R32(c->r[1]+0x000000E0u); // 800B95EC
  c->r[17]=R32(c->r[1]+0x000000E4u); // 800B95F0
  c->r[16]=R32(c->r[1]+0x000000E8u); // 800B95F4
  c->r[15]=R32(c->r[1]+0x000000ECu); // 800B95F8
  c->r[12]=R32(c->r[1]+0x000000F0u); // 800B95FC
  c->r[11]=R32(c->r[1]+0x000000F4u); // 800B9600
  c->r[10]=R32(c->r[1]+0x000000F8u); // 800B9604
  c->r[9]=R32(c->r[1]+0x000000FCu); // 800B9608
  c->r[8]=R32(c->r[1]+0x00000100u); // 800B960C
  c->r[7]=R32(c->r[1]+0x00000104u); // 800B9610
  c->r[6]=R32(c->r[1]+0x00000108u); // 800B9614
  c->r[0]=R32(c->r[1]+0x0000010Cu); // 800B9618
  {uint32_t ea=c->r[14]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B961C
  {uint32_t ea=c->r[14]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9620
  {uint32_t ea=c->r[14]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B9624
  W32(c->r[1]+0x00000110u,c->r[22]); // 800B9628
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B962C
  W32(c->r[1]+0x00000114u,c->r[21]); // 800B9630
  W32(c->r[1]+0x00000118u,c->r[20]); // 800B9634
  W32(c->r[1]+0x0000011Cu,c->r[19]); // 800B9638
  W32(c->r[1]+0x00000120u,c->r[18]); // 800B963C
  W32(c->r[1]+0x00000124u,c->r[17]); // 800B9640
  W32(c->r[1]+0x00000128u,c->r[16]); // 800B9644
  W32(c->r[1]+0x0000012Cu,c->r[15]); // 800B9648
  W32(c->r[1]+0x00000130u,c->r[12]); // 800B964C
  W32(c->r[1]+0x00000134u,c->r[11]); // 800B9650
  W32(c->r[1]+0x00000138u,c->r[10]); // 800B9654
  W32(c->r[1]+0x0000013Cu,c->r[9]); // 800B9658
  W32(c->r[1]+0x00000140u,c->r[8]); // 800B965C
  W32(c->r[1]+0x00000144u,c->r[7]); // 800B9660
  W32(c->r[1]+0x00000148u,c->r[6]); // 800B9664
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 800B9668
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[3]);} // 800B966C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[2]);} // 800B9670
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 800B9674
  {uint32_t ea=c->r[23]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9678
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[2]); // 800B967C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800B9680
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 800B9684
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 800B9688
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800B968C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800B9690
  c->lr=0x800B9698u; f_80394CE4(c); // 800B9694
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9698
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B969C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B96A0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800B96A4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 800B96A8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 800B96AC
  {uint32_t ea=c->r[1]+0x00000074u; psq_load(c,0,ea,0,0);} // 800B96B0
  {uint32_t ea=c->r[1]+0x00000080u; psq_load(c,1,ea,0,0);} // 800B96B4
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B96B8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,0,ea,0,0);} // 800B96BC
  {uint32_t ea=c->r[1]+0x0000007Cu; psq_load(c,0,ea,1,0);} // 800B96C0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,1,ea,1,0);} // 800B96C4
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B96C8
  {uint32_t ea=c->r[1]+0x00000070u; psq_store(c,0,ea,1,0);} // 800B96CC
  c->r[25]=0u+0x00000000u; // 800B96D0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,2,ea,0,0);} // 800B96D4
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800B96D8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B96DC
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800B96E0
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800B96E4
  {uint32_t ea=c->r[2]+0xFFFF8E14u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B96E8
  fcmp(c,0,c->f[1],c->f[0]); // 800B96EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800B96F0
  c->r[0]=c->cr; // 800B96F4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800B96F8
  if (crb(c,2)) { goto L_800B9764; } // 800B96FC
  {uint32_t ea=c->r[14]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9700
  {uint32_t ea=c->r[14]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9704
  {uint32_t ea=c->r[14]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9708
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 800B970C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 800B9710
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 800B9714
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,0,ea,0,0);} // 800B9718
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800B971C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9720
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800B9724
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800B9728
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[31]); // 800B972C
  fcmp(c,0,c->f[1],c->f[0]); // 800B9730
  if (!crb(c,0)) { goto L_800B9764; } // 800B9734
  {uint32_t ea=c->r[1]+0x0000006Cu; psq_load(c,0,ea,0,0);} // 800B9738
  {uint32_t ea=c->r[1]+0x00000060u; psq_load(c,1,ea,0,0);} // 800B973C
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800B9740
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,2,ea,1,0);} // 800B9744
  {uint32_t ea=c->r[1]+0x0000005Cu; psq_load(c,1,ea,1,0);} // 800B9748
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800B974C
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800B9750
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9754
  fcmp(c,0,c->f[1],c->f[0]); // 800B9758
  if (!crb(c,0)) { goto L_800B9764; } // 800B975C
  c->r[25]=0u+0x00000001u; // 800B9760
L_800B9764:;
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[30]); // 800B9764
  c->r[26]=0u+0x80440000u; // 800B9768
  c->r[30]=0u+0x80470000u; // 800B976C
  {uint32_t ea=c->r[2]+0xFFFF8E0Cu; c->f[23]=c->ps1[23]=RF32(ea);} // 800B9770
  {uint32_t ea=c->r[2]+0xFFFF8E24u; c->f[24]=c->ps1[24]=RF32(ea);} // 800B9774
  c->r[27]=c->r[26]+0x000021BCu; // 800B9778
  {uint32_t ea=c->r[2]+0xFFFF8E28u; c->f[25]=c->ps1[25]=RF32(ea);} // 800B977C
  c->r[31]=c->r[30]+0x00000D88u; // 800B9780
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[26]=c->ps1[26]=RF32(ea);} // 800B9784
  c->r[28]=0u+0x00000000u; // 800B9788
  {uint32_t ea=c->r[2]+0xFFFF8E2Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 800B978C
  c->r[14]=0u+0x00000FFBu; // 800B9790
  {uint32_t ea=c->r[2]+0xFFFF8E20u; c->f[28]=c->ps1[28]=RF32(ea);} // 800B9794
  c->r[29]=0u+0x00000001u; // 800B9798
  {uint32_t ea=c->r[2]+0xFFFF8E10u; c->f[29]=c->ps1[29]=RF32(ea);} // 800B979C
  goto L_800B9AD0; // 800B97A0
L_800B97A4:;
  c->r[0]=R32(c->r[23]+0x00000028u); // 800B97A4
  c->r[25]=0u+0x00000000u; // 800B97A8
  c->r[3]=R32(c->r[23]+0x00000000u); // 800B97AC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800B97B0
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B97B4
  c->r[3]=c->r[3]+c->r[0]; // 800B97B8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B97BC
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[1]); // 800B97C0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800B97C4
  fcmp(c,0,c->f[0],c->f[23]); // 800B97C8
  {uint32_t ea=c->r[23]+0x00000024u; WF32(ea,c->f[0]);} // 800B97CC
  if (!crb(c,1)) { goto L_800B9914; } // 800B97D0
  c->r[5]=R32(c->r[24]+0x00000000u); // 800B97D4
  c->r[3]=c->r[23]|c->r[23]; // 800B97D8
  c->r[0]=R32(c->r[24]+0x00000004u); // 800B97DC
  c->r[4]=c->r[1]+0x00000010u; // 800B97E0
  W32(c->r[1]+0x00000010u,c->r[5]); // 800B97E4
  c->r[5]=0u+0x00000001u; // 800B97E8
  c->r[6]=0u+0x00000001u; // 800B97EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800B97F0
  c->lr=0x800B97F8u; f_800B8C4C(c); // 800B97F4
  c->r[3]=R32(c->r[24]+0x00000000u); // 800B97F8
  c->r[0]=0u-c->r[3]; // 800B97FC
  c->r[0]=c->r[0]|c->r[3]; // 800B9800
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800B9804
  if (crb(c,2)) { goto L_800B98D0; } // 800B9808
  c->r[0]=R8(c->r[13]+0xFFFF9399u); // 800B980C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9810
  if (!crb(c,2)) { goto L_800B98B0; } // 800B9814
  W32(c->r[26]+0x000021BCu,c->r[28]); // 800B9818
  c->r[0]=0u+0x000001FFu; // 800B981C
  c->r[4]=c->r[27]|c->r[27]; // 800B9820
  c->r[3]=0u+0x00000000u; // 800B9824
  W32(c->r[27]+0x00000004u,c->r[28]); // 800B9828
  W32(c->r[26]+0x000021BCu,c->r[28]); // 800B982C
  W32(c->r[27]+0x00000004u,c->r[14]); // 800B9830
  c->ctr=c->r[0]; // 800B9834
L_800B9838:;
  W32(c->r[4]+0x00000008u,c->r[28]); // 800B9838
  c->r[3]=c->r[3]+0x00000008u; // 800B983C
  W32(c->r[4]+0x0000000Cu,c->r[28]); // 800B9840
  W32(c->r[4]+0x00000010u,c->r[28]); // 800B9844
  W32(c->r[4]+0x00000014u,c->r[28]); // 800B9848
  W32(c->r[4]+0x00000018u,c->r[28]); // 800B984C
  W32(c->r[4]+0x0000001Cu,c->r[28]); // 800B9850
  W32(c->r[4]+0x00000020u,c->r[28]); // 800B9854
  W32(c->r[4]+0x00000024u,c->r[28]); // 800B9858
  W32(c->r[4]+0x00000028u,c->r[28]); // 800B985C
  W32(c->r[4]+0x0000002Cu,c->r[28]); // 800B9860
  W32(c->r[4]+0x00000030u,c->r[28]); // 800B9864
  W32(c->r[4]+0x00000034u,c->r[28]); // 800B9868
  W32(c->r[4]+0x00000038u,c->r[28]); // 800B986C
  W32(c->r[4]+0x0000003Cu,c->r[28]); // 800B9870
  W32(c->r[4]+0x00000040u,c->r[28]); // 800B9874
  W32(c->r[4]+0x00000044u,c->r[28]); // 800B9878
  c->r[4]=c->r[4]+0x00000040u; // 800B987C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800B9838; } // 800B9880
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800B9884
  W8(c->r[13]+0xFFFF9399u,c->r[29]); // 800B9888
  c->r[3]=c->r[27]+c->r[0]; // 800B988C
  W32(c->r[3]+0x00000008u,c->r[28]); // 800B9890
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 800B9894
  W32(c->r[3]+0x00000010u,c->r[28]); // 800B9898
  W32(c->r[3]+0x00000014u,c->r[28]); // 800B989C
  W32(c->r[3]+0x00000018u,c->r[28]); // 800B98A0
  W32(c->r[3]+0x0000001Cu,c->r[28]); // 800B98A4
  W32(c->r[3]+0x00000020u,c->r[28]); // 800B98A8
  W32(c->r[3]+0x00000024u,c->r[28]); // 800B98AC
L_800B98B0:;
  c->r[0]=R32(c->r[24]+0x00000004u); // 800B98B0
  c->r[4]=R32(c->r[24]+0x00000000u); // 800B98B4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800B98B8
  c->r[3]=c->r[27]+c->r[0]; // 800B98BC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800B98C0
  c->r[0]=c->r[0]-c->r[4]; // 800B98C4
  c->r[0]=cntlz(c->r[0]); // 800B98C8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800B98CC
L_800B98D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800B98D0
  if (crb(c,2)) { goto L_800B9914; } // 800B98D4
  c->r[3]=R32(c->r[23]+0x00000020u); // 800B98D8
  c->r[0]=R32(c->r[23]+0x00000028u); // 800B98DC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800B98E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800B98E4
  if (crb(c,0)) { goto L_800B9914; } // 800B98E8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800B98EC
  c->r[4]=R32(c->r[23]+0x00000000u); // 800B98F0
  c->r[3]=0u+0x00000001u; // 800B98F4
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 800B98F8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800B98FC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9900
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 800B9904
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9908
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 800B990C
  goto L_800B9B6C; // 800B9910
L_800B9914:;
  c->r[4]=R32(c->r[23]+0x00000028u); // 800B9914
  c->r[0]=R8(c->r[13]+0xFFFF9500u); // 800B9918
  c->r[3]=c->r[4]+0x00000001u; // 800B991C
  c->r[5]=R32(c->r[23]+0x00000000u); // 800B9920
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 800B9924
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800B9928
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 800B992C
  c->r[6]=c->r[5]+c->r[3]; // 800B9930
  c->r[7]=c->r[5]+c->r[0]; // 800B9934
  if (!crb(c,2)) { goto L_800B9980; } // 800B9938
  {uint32_t ea=c->r[30]+0x00000D88u; WF32(ea,c->f[24]);} // 800B993C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[25]);} // 800B9940
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[26]);} // 800B9944
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[23]);} // 800B9948
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[27]);} // 800B994C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[28]);} // 800B9950
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[26]);} // 800B9954
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[26]);} // 800B9958
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[23]);} // 800B995C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[27]);} // 800B9960
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[23]);} // 800B9964
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[26]);} // 800B9968
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[23]);} // 800B996C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[29]);} // 800B9970
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[26]);} // 800B9974
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[26]);} // 800B9978
  W8(c->r[13]+0xFFFF9500u,c->r[29]); // 800B997C
L_800B9980:;
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9980
  c->r[3]=c->r[1]+0x00000090u; // 800B9984
  {uint32_t ea=c->r[7]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9988
  c->r[5]=c->r[3]|c->r[3]; // 800B998C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9990
  c->r[4]=c->r[30]+0x00000D88u; // 800B9994
  {uint32_t ea=c->r[7]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B9998
  {uint32_t ea=c->r[6]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 800B999C
  {uint32_t ea=c->r[7]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B99A0
  {uint32_t ea=c->r[6]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B99A4
  {uint32_t ea=c->r[7]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 800B99A8
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 800B99AC
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800B99B0
  {uint32_t ea=c->r[6]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 800B99B4
  {uint32_t ea=c->r[7]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 800B99B8
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[11]);} // 800B99BC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[10]);} // 800B99C0
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[9]);} // 800B99C4
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[8]);} // 800B99C8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[7]);} // 800B99CC
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[6]);} // 800B99D0
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[5]);} // 800B99D4
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[4]);} // 800B99D8
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[3]);} // 800B99DC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[2]);} // 800B99E0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 800B99E4
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 800B99E8
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[23]);} // 800B99EC
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[23]);} // 800B99F0
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[23]);} // 800B99F4
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[23]);} // 800B99F8
  c->lr=0x800B9A00u; f_802655E8(c); // 800B99FC
  c->r[15]=R32(c->r[1]+0x00000090u); // 800B9A00
  c->r[3]=c->r[1]+0x00000018u; // 800B9A04
  c->r[16]=R32(c->r[1]+0x00000094u); // 800B9A08
  c->r[5]=c->r[3]|c->r[3]; // 800B9A0C
  c->r[17]=R32(c->r[1]+0x00000098u); // 800B9A10
  c->r[4]=c->r[1]+0x00000110u; // 800B9A14
  c->r[18]=R32(c->r[1]+0x0000009Cu); // 800B9A18
  c->r[19]=R32(c->r[1]+0x000000A0u); // 800B9A1C
  c->r[20]=R32(c->r[1]+0x000000A4u); // 800B9A20
  c->r[21]=R32(c->r[1]+0x000000A8u); // 800B9A24
  c->r[22]=R32(c->r[1]+0x000000ACu); // 800B9A28
  c->r[12]=R32(c->r[1]+0x000000B0u); // 800B9A2C
  c->r[11]=R32(c->r[1]+0x000000B4u); // 800B9A30
  c->r[10]=R32(c->r[1]+0x000000B8u); // 800B9A34
  c->r[9]=R32(c->r[1]+0x000000BCu); // 800B9A38
  c->r[8]=R32(c->r[1]+0x000000C0u); // 800B9A3C
  c->r[7]=R32(c->r[1]+0x000000C4u); // 800B9A40
  c->r[6]=R32(c->r[1]+0x000000C8u); // 800B9A44
  c->r[0]=R32(c->r[1]+0x000000CCu); // 800B9A48
  W32(c->r[1]+0x00000110u,c->r[15]); // 800B9A4C
  W32(c->r[1]+0x00000114u,c->r[16]); // 800B9A50
  W32(c->r[1]+0x00000118u,c->r[17]); // 800B9A54
  W32(c->r[1]+0x0000011Cu,c->r[18]); // 800B9A58
  W32(c->r[1]+0x00000120u,c->r[19]); // 800B9A5C
  W32(c->r[1]+0x00000124u,c->r[20]); // 800B9A60
  W32(c->r[1]+0x00000128u,c->r[21]); // 800B9A64
  W32(c->r[1]+0x0000012Cu,c->r[22]); // 800B9A68
  W32(c->r[1]+0x00000130u,c->r[12]); // 800B9A6C
  W32(c->r[1]+0x00000134u,c->r[11]); // 800B9A70
  W32(c->r[1]+0x00000138u,c->r[10]); // 800B9A74
  W32(c->r[1]+0x0000013Cu,c->r[9]); // 800B9A78
  W32(c->r[1]+0x00000140u,c->r[8]); // 800B9A7C
  W32(c->r[1]+0x00000144u,c->r[7]); // 800B9A80
  W32(c->r[1]+0x00000148u,c->r[6]); // 800B9A84
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 800B9A88
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9A8C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[0]); // 800B9A90
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800B9A94
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[23]);} // 800B9A98
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800B9A9C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800B9AA0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800B9AA4
  c->lr=0x800B9AACu; f_80394CE4(c); // 800B9AA8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9AAC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9AB0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9AB4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800B9AB8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800B9ABC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 800B9AC0
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 800B9AC4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 800B9AC8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 800B9ACC
L_800B9AD0:;
  c->r[3]=c->r[1]+0x00000080u; // 800B9AD0
  c->r[4]=c->r[1]+0x00000074u; // 800B9AD4
  c->lr=0x800B9ADCu; f_80265924(c); // 800B9AD8
  fcmp(c,0,c->f[1],c->f[31]); // 800B9ADC
  if (crb(c,0)) { IRQCHK(c); goto L_800B97A4; } // 800B9AE0
  cmps(c,0,(int32_t)c->r[25],0); // 800B9AE4
  if (!crb(c,2)) { IRQCHK(c); goto L_800B97A4; } // 800B9AE8
  c->r[3]=0u+0x00000000u; // 800B9AEC
  goto L_800B9B6C; // 800B9AF0
L_800B9AF4:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800B9AF4
  c->r[5]=R32(c->r[3]+0x00000000u); // 800B9AF8
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9AFC
  c->r[3]=c->r[1]+0x00000050u; // 800B9B00
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9B04
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea); c->r[5]=ea;} // 800B9B08
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B9B0C
  c->r[4]=c->r[1]+0x00000044u; // 800B9B10
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800B9B14
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9B18
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 800B9B1C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9B20
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 800B9B24
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 800B9B28
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 800B9B2C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 800B9B30
  c->lr=0x800B9B38u; f_80265924(c); // 800B9B34
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 800B9B38
  fcmp(c,0,c->f[1],c->f[0]); // 800B9B3C
  if (!crb(c,0)) { goto L_800B9B68; } // 800B9B40
  c->r[5]=R32(c->r[24]+0x00000000u); // 800B9B44
  c->r[3]=c->r[23]|c->r[23]; // 800B9B48
  c->r[0]=R32(c->r[24]+0x00000004u); // 800B9B4C
  c->r[4]=c->r[1]+0x00000008u; // 800B9B50
  W32(c->r[1]+0x00000008u,c->r[5]); // 800B9B54
  c->r[5]=0u+0x00000001u; // 800B9B58
  c->r[6]=0u+0x00000001u; // 800B9B5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B9B60
  c->lr=0x800B9B68u; f_800B8C4C(c); // 800B9B64
L_800B9B68:;
  c->r[3]=0u+0x00000001u; // 800B9B68
L_800B9B6C:;
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,31,ea,0,0);} // 800B9B6C
  {uint32_t ea=c->r[1]+0x00000220u; c->f[31]=RF64(ea);} // 800B9B70
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,30,ea,0,0);} // 800B9B74
  {uint32_t ea=c->r[1]+0x00000210u; c->f[30]=RF64(ea);} // 800B9B78
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,29,ea,0,0);} // 800B9B7C
  {uint32_t ea=c->r[1]+0x00000200u; c->f[29]=RF64(ea);} // 800B9B80
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,28,ea,0,0);} // 800B9B84
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[28]=RF64(ea);} // 800B9B88
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,27,ea,0,0);} // 800B9B8C
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[27]=RF64(ea);} // 800B9B90
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,26,ea,0,0);} // 800B9B94
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[26]=RF64(ea);} // 800B9B98
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,25,ea,0,0);} // 800B9B9C
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[25]=RF64(ea);} // 800B9BA0
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,24,ea,0,0);} // 800B9BA4
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[24]=RF64(ea);} // 800B9BA8
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,23,ea,0,0);} // 800B9BAC
  c->r[11]=c->r[1]+0x000001A0u; // 800B9BB0
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[23]=RF64(ea);} // 800B9BB4
  c->lr=0x800B9BBCu; f_80289E0C(c); // 800B9BB8
  c->r[0]=R32(c->r[1]+0x00000234u); // 800B9BBC
  c->lr=c->r[0]; // 800B9BC0
  c->r[1]=c->r[1]+0x00000230u; // 800B9BC4
  return; // 800B9BC8
}

// fn_800B9BCC
void f_800B9BCC(Ctx* __restrict c) {
  trace_call(0x800B9BCCu);
  {uint32_t ea=c->r[2]+0xFFFF8E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9BCC
  c->r[7]=0u+0x00000000u; // 800B9BD0
  c->r[5]=0u+0x70730000u; // 800B9BD4
  W32(c->r[3]+0x00000028u,c->r[7]); // 800B9BD8
  c->r[0]=c->r[5]+0x00006570u; // 800B9BDC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800B9BE0
  c->r[6]=R32(c->r[4]+0x00000000u); // 800B9BE4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800B9BE8
  if (crb(c,2)) { goto L_800B9C3C; } // 800B9BEC
  if (!crb(c,0)) return; // 800B9BF0
  c->r[5]=0u+0x70610000u; // 800B9BF4
  c->r[0]=c->r[5]+0x00007373u; // 800B9BF8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800B9BFC
  if (!crb(c,2)) return; // 800B9C00
  c->r[6]=R32(c->r[4]+0x00000004u); // 800B9C04
  c->r[5]=0u+0x24920000u; // 800B9C08
  c->r[5]=c->r[5]+0x00004925u; // 800B9C0C
  c->r[0]=c->r[4]+0x00000008u; // 800B9C10
  c->r[4]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[6])>>32); // 800B9C14
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B9C18
  W32(c->r[3]+0x00000028u,c->r[7]); // 800B9C1C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800B9C20
  c->r[0]=c->r[6]-c->r[4]; // 800B9C24
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800B9C28
  c->r[0]=c->r[0]+c->r[4]; // 800B9C2C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 800B9C30
  W32(c->r[3]+0x00000020u,c->r[0]); // 800B9C34
  return; // 800B9C38
L_800B9C3C:;
  c->r[5]=0u+0x696E0000u; // 800B9C3C
  c->r[10]=c->r[4]+0x00000008u; // 800B9C40
  c->r[9]=c->r[5]+0x0000666Fu; // 800B9C44
  c->r[7]=0u+0x70610000u; // 800B9C48
  c->r[8]=0u+0x65700000u; // 800B9C4C
  goto L_800B9CE0; // 800B9C50
L_800B9C54:;
  c->r[5]=R32(c->r[10]+0x00000000u); // 800B9C54
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[9]); // 800B9C58
  if (crb(c,2)) { goto L_800B9C84; } // 800B9C5C
  if (!crb(c,0)) { goto L_800B9C74; } // 800B9C60
  c->r[0]=c->r[8]+0x0000726Du; // 800B9C64
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800B9C68
  if (crb(c,2)) { goto L_800B9CCC; } // 800B9C6C
  goto L_800B9CD4; // 800B9C70
L_800B9C74:;
  c->r[0]=c->r[7]+0x00007373u; // 800B9C74
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800B9C78
  if (crb(c,2)) { goto L_800B9CC0; } // 800B9C7C
  goto L_800B9CD4; // 800B9C80
L_800B9C84:;
  {uint32_t ea=c->r[10]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9C84
  {uint32_t ea=c->r[10]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9C88
  {uint32_t ea=c->r[10]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9C8C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800B9C90
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800B9C94
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 800B9C98
  {uint32_t ea=c->r[10]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9C9C
  {uint32_t ea=c->r[10]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9CA0
  {uint32_t ea=c->r[10]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9CA4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800B9CA8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800B9CAC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 800B9CB0
  c->r[0]=R32(c->r[10]+0x00000020u); // 800B9CB4
  W32(c->r[3]+0x00000020u,c->r[0]); // 800B9CB8
  goto L_800B9CD4; // 800B9CBC
L_800B9CC0:;
  c->r[0]=c->r[10]+0x00000008u; // 800B9CC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800B9CC4
  goto L_800B9CD4; // 800B9CC8
L_800B9CCC:;
  c->r[0]=c->r[10]+0x00000008u; // 800B9CCC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800B9CD0
L_800B9CD4:;
  c->r[0]=R32(c->r[10]+0x00000004u); // 800B9CD4
  c->r[5]=c->r[10]+c->r[0]; // 800B9CD8
  c->r[10]=c->r[5]+0x00000008u; // 800B9CDC
L_800B9CE0:;
  c->r[5]=R32(c->r[4]+0x00000004u); // 800B9CE0
  c->r[6]=c->r[10]-c->r[4]; // 800B9CE4
  c->r[0]=c->r[5]+0x00000008u; // 800B9CE8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800B9CEC
  if (crb(c,0)) { IRQCHK(c); goto L_800B9C54; } // 800B9CF0
  return; // 800B9CF4
}

// fn_800B9CF8
void f_800B9CF8(Ctx* __restrict c) {
  trace_call(0x800B9CF8u);
  c->r[3]=0u+0x00000017u; // 800B9CF8
  return; // 800B9CFC
}

// fn_800B9D00
void f_800B9D00(Ctx* __restrict c) {
  trace_call(0x800B9D00u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800B9D00
  c->r[0]=c->lr; // 800B9D04
  W32(c->r[1]+0x00000124u,c->r[0]); // 800B9D08
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 800B9D0C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 800B9D10
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 800B9D14
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 800B9D18
  c->r[11]=c->r[1]+0x00000100u; // 800B9D1C
  c->lr=0x800B9D24u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800B9D20
  c->r[0]=R32(c->r[3]+0x00000238u); // 800B9D24
  c->r[30]=c->r[3]|c->r[3]; // 800B9D28
  c->r[31]=c->r[4]|c->r[4]; // 800B9D2C
  cmps(c,0,(int32_t)c->r[0],0); // 800B9D30
  if (crb(c,1)) { goto L_800BA0C0; } // 800B9D34
  c->r[5]=R32(c->r[4]+0x00000008u); // 800B9D38
  c->r[6]=0u+0x803E0000u; // 800B9D3C
  {uint32_t ea=c->r[6]+0xFFFF9B00u; c->r[11]=R32(ea); c->r[6]=ea;} // 800B9D40
  c->r[4]=0u+0x803E0000u; // 800B9D44
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800B9D48
  c->r[3]=c->r[1]+0x0000000Cu; // 800B9D4C
  c->r[10]=R32(c->r[6]+0x00000004u); // 800B9D50
  c->r[4]=c->r[4]+0xFFFF9B18u; // 800B9D54
  c->r[9]=R32(c->r[6]+0x00000008u); // 800B9D58
  c->r[8]=R32(c->r[6]+0x0000000Cu); // 800B9D5C
  c->r[7]=R32(c->r[6]+0x00000010u); // 800B9D60
  c->r[6]=R32(c->r[6]+0x00000014u); // 800B9D64
  W32(c->r[1]+0x00000028u,c->r[11]); // 800B9D68
  W32(c->r[1]+0x0000002Cu,c->r[10]); // 800B9D6C
  W32(c->r[1]+0x00000030u,c->r[9]); // 800B9D70
  W32(c->r[1]+0x00000034u,c->r[8]); // 800B9D74
  W32(c->r[1]+0x00000038u,c->r[7]); // 800B9D78
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800B9D7C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800B9D80
  c->lr=0x800B9D88u; f_80365B94(c); // 800B9D84
  cmps(c,0,(int32_t)c->r[3],0); // 800B9D88
  c->r[24]=c->r[3]|c->r[3]; // 800B9D8C
  if (!crb(c,2)) { goto L_800B9DB0; } // 800B9D90
  c->r[3]=0u+0x803F0000u; // 800B9D94
  c->r[5]=0u+0x803F0000u; // 800B9D98
  c->r[3]=c->r[3]+0x000018E8u; // 800B9D9C
  c->r[4]=0u+0x00000035u; // 800B9DA0
  c->r[5]=c->r[5]+0x000018C8u; // 800B9DA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B9DA8
  c->lr=0x800B9DB0u; f_803444BC(c); // 800B9DAC
L_800B9DB0:;
  cmps(c,0,(int32_t)c->r[24],0); // 800B9DB0
  c->r[4]=c->r[31]|c->r[31]; // 800B9DB4
  c->r[3]=c->r[1]+0x00000070u; // 800B9DB8
  if (crb(c,2)) { goto L_800B9DC8; } // 800B9DBC
  c->r[5]=R32(c->r[24]+0x0000000Cu); // 800B9DC0
  goto L_800B9DCC; // 800B9DC4
L_800B9DC8:;
  c->r[5]=0u+0x00000000u; // 800B9DC8
L_800B9DCC:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B9DCC
  c->r[12]=R32(c->r[12]+0x00000034u); // 800B9DD0
  c->ctr=c->r[12]; // 800B9DD4
  if (true) { c->lr=0x800B9DDCu; dispatch(c,c->ctr); } // 800B9DD8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9DDC
  cmps(c,0,(int32_t)c->r[24],0); // 800B9DE0
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9DE4
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9DE8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800B9DEC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800B9DF0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800B9DF4
  if (!crb(c,2)) { goto L_800B9E20; } // 800B9DF8
  c->r[3]=0u+0x803F0000u; // 800B9DFC
  c->r[5]=0u+0x803F0000u; // 800B9E00
  c->r[3]=c->r[3]+0x00001880u; // 800B9E04
  c->r[4]=0u+0x00000029u; // 800B9E08
  c->r[5]=c->r[5]+0x00001864u; // 800B9E0C
  c->r[6]=c->r[13]+0xFFFF8048u; // 800B9E10
  c->r[7]=c->r[13]+0xFFFF816Cu; // 800B9E14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B9E18
  c->lr=0x800B9E20u; f_803444BC(c); // 800B9E1C
L_800B9E20:;
  c->r[0]=R32(c->r[24]+0x00000060u); // 800B9E20
  cmps(c,0,(int32_t)c->r[0],0); // 800B9E24
  if (crb(c,2)) { goto L_800B9E58; } // 800B9E28
  c->r[23]=c->r[24]+c->r[0]; // 800B9E2C
  c->r[0]=rotl(c->r[23],0)&0x00000003u; cr0(c,c->r[0]); // 800B9E30
  if (crb(c,2)) { goto L_800B9E5C; } // 800B9E34
  c->r[3]=0u+0x803F0000u; // 800B9E38
  c->r[5]=0u+0x803F0000u; // 800B9E3C
  c->r[3]=c->r[3]+0x00001850u; // 800B9E40
  c->r[4]=0u+0x00000029u; // 800B9E44
  c->r[5]=c->r[5]+0x00001828u; // 800B9E48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B9E4C
  c->lr=0x800B9E54u; f_803444BC(c); // 800B9E50
  goto L_800B9E5C; // 800B9E54
L_800B9E58:;
  c->r[23]=0u+0x00000000u; // 800B9E58
L_800B9E5C:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=c->ps1[30]=RF32(ea);} // 800B9E5C
  c->r[28]=0u+0x803F0000u; // 800B9E60
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[31]=c->ps1[31]=RF32(ea);} // 800B9E64
  c->r[29]=0u+0x803F0000u; // 800B9E68
  c->r[24]=0u+0x803F0000u; // 800B9E6C
  c->r[25]=0u+0x803F0000u; // 800B9E70
  c->r[26]=0u+0x803F0000u; // 800B9E74
  c->r[27]=0u+0x803F0000u; // 800B9E78
  goto L_800BA0B8; // 800B9E7C
L_800B9E80:;
  cmps(c,0,(int32_t)c->r[23],0); // 800B9E80
  if (!crb(c,2)) { goto L_800B9E9C; } // 800B9E84
  c->r[3]=c->r[24]+0x000018E8u; // 800B9E88
  c->r[5]=c->r[25]+0x000018C8u; // 800B9E8C
  c->r[4]=0u+0x00000035u; // 800B9E90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B9E94
  c->lr=0x800B9E9Cu; f_803444BC(c); // 800B9E98
L_800B9E9C:;
  cmps(c,0,(int32_t)c->r[23],0); // 800B9E9C
  c->r[4]=c->r[31]|c->r[31]; // 800B9EA0
  c->r[3]=c->r[1]+0x00000040u; // 800B9EA4
  if (crb(c,2)) { goto L_800B9EB4; } // 800B9EA8
  c->r[5]=R32(c->r[23]+0x0000000Cu); // 800B9EAC
  goto L_800B9EB8; // 800B9EB0
L_800B9EB4:;
  c->r[5]=0u+0x00000000u; // 800B9EB4
L_800B9EB8:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 800B9EB8
  c->r[12]=R32(c->r[12]+0x00000034u); // 800B9EBC
  c->ctr=c->r[12]; // 800B9EC0
  if (true) { c->lr=0x800B9EC8u; dispatch(c,c->ctr); } // 800B9EC4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9EC8
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9ECC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[30]); // 800B9ED0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800B9ED4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800B9ED8
  fcmp(c,0,c->f[0],c->f[31]); // 800B9EDC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 800B9EE0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800B9EE4
  if (!crb(c,1)) { goto L_800BA060; } // 800B9EE8
  cmps(c,0,(int32_t)c->r[23],0); // 800B9EEC
  if (!crb(c,2)) { goto L_800B9F18; } // 800B9EF0
  c->r[3]=0u+0x803F0000u; // 800B9EF4
  c->r[5]=0u+0x803F0000u; // 800B9EF8
  c->r[3]=c->r[3]+0x000018B0u; // 800B9EFC
  c->r[4]=0u+0x00000029u; // 800B9F00
  c->r[5]=c->r[5]+0x00001894u; // 800B9F04
  c->r[6]=c->r[13]+0xFFFF8048u; // 800B9F08
  c->r[7]=c->r[13]+0xFFFF8168u; // 800B9F0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800B9F10
  c->lr=0x800B9F18u; f_803444BC(c); // 800B9F14
L_800B9F18:;
  c->r[0]=R32(c->r[23]+0x00000008u); // 800B9F18
  cmps(c,0,(int32_t)c->r[0],0); // 800B9F1C
  if (crb(c,2)) { goto L_800B9F2C; } // 800B9F20
  c->r[4]=c->r[23]+c->r[0]; // 800B9F24
  goto L_800B9F30; // 800B9F28
L_800B9F2C:;
  c->r[4]=0u+0x00000000u; // 800B9F2C
L_800B9F30:;
  c->r[0]=R32(c->r[30]+0x00000238u); // 800B9F30
  c->r[7]=0u+0x00000001u; // 800B9F34
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[6]=c->ps1[6]=RF32(ea);} // 800B9F38
  c->r[3]=c->r[1]+0x00000008u; // 800B9F3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 800B9F40
  {uint32_t ea=c->r[2]+0xFFFF8E34u; c->f[9]=c->ps1[9]=RF32(ea);} // 800B9F44
  {uint32_t ea=c->r[2]+0xFFFF8E38u; c->f[8]=c->ps1[8]=RF32(ea);} // 800B9F48
  {uint32_t ea=c->r[2]+0xFFFF8E3Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 800B9F4C
  c->r[6]=c->r[30]+c->r[0]; // 800B9F50
  {uint32_t ea=c->r[1]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 800B9F54
  W32(c->r[6]+0x00000008u,c->r[4]); // 800B9F58
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800B9F5C
  W32(c->r[6]+0x0000000Cu,c->r[7]); // 800B9F60
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800B9F64
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[9]);} // 800B9F68
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800B9F6C
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[8]);} // 800B9F70
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800B9F74
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[7]);} // 800B9F78
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800B9F7C
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[6]);} // 800B9F80
  c->r[8]=R32(c->r[31]+0x00000008u); // 800B9F84
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[5]);} // 800B9F88
  {uint32_t ea=c->r[6]+0x00000020u; WF32(ea,c->f[6]);} // 800B9F8C
  c->r[5]=R32(c->r[1]+0x000000C0u); // 800B9F90
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[4]);} // 800B9F94
  {uint32_t ea=c->r[6]+0x00000024u; WF32(ea,c->f[6]);} // 800B9F98
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800B9F9C
  W32(c->r[6]+0x00000028u,c->r[5]); // 800B9FA0
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[3]);} // 800B9FA4
  c->r[5]=R32(c->r[1]+0x000000C8u); // 800B9FA8
  W32(c->r[6]+0x0000002Cu,c->r[0]); // 800B9FAC
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[2]);} // 800B9FB0
  c->r[0]=R32(c->r[1]+0x000000CCu); // 800B9FB4
  W32(c->r[6]+0x00000030u,c->r[5]); // 800B9FB8
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 800B9FBC
  c->r[5]=R32(c->r[1]+0x000000D0u); // 800B9FC0
  W32(c->r[6]+0x00000034u,c->r[0]); // 800B9FC4
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 800B9FC8
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800B9FCC
  W32(c->r[6]+0x00000038u,c->r[5]); // 800B9FD0
  W32(c->r[6]+0x0000003Cu,c->r[0]); // 800B9FD4
  c->r[0]=R32(c->r[8]+0x000000E8u); // 800B9FD8
  W32(c->r[1]+0x000000A0u,c->r[4]); // 800B9FDC
  W32(c->r[1]+0x000000A4u,c->r[7]); // 800B9FE0
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[9]);} // 800B9FE4
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[8]);} // 800B9FE8
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[7]);} // 800B9FEC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[6]);} // 800B9FF0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[6]);} // 800B9FF4
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[6]);} // 800B9FF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800B9FFC
  c->lr=0x800BA004u; f_80365B94(c); // 800BA000
  cmps(c,0,(int32_t)c->r[3],0); // 800BA004
  c->r[26]=c->r[3]|c->r[3]; // 800BA008
  if (!crb(c,2)) { goto L_800BA02C; } // 800BA00C
  c->r[3]=0u+0x803F0000u; // 800BA010
  c->r[5]=0u+0x803F0000u; // 800BA014
  c->r[3]=c->r[3]+0x000018E8u; // 800BA018
  c->r[4]=0u+0x00000035u; // 800BA01C
  c->r[5]=c->r[5]+0x000018C8u; // 800BA020
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BA024
  c->lr=0x800BA02Cu; f_803444BC(c); // 800BA028
L_800BA02C:;
  cmps(c,0,(int32_t)c->r[26],0); // 800BA02C
  if (crb(c,2)) { goto L_800BA03C; } // 800BA030
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800BA034
  goto L_800BA040; // 800BA038
L_800BA03C:;
  c->r[4]=0u+0x00000000u; // 800BA03C
L_800BA040:;
  c->r[0]=R32(c->r[30]+0x00000238u); // 800BA040
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 800BA044
  c->r[3]=c->r[30]+c->r[0]; // 800BA048
  W32(c->r[3]+0x00000008u,c->r[4]); // 800BA04C
  c->r[3]=R32(c->r[30]+0x00000238u); // 800BA050
  c->r[0]=c->r[3]+0x00000001u; // 800BA054
  W32(c->r[30]+0x00000238u,c->r[0]); // 800BA058
  goto L_800BA0C0; // 800BA05C
L_800BA060:;
  cmps(c,0,(int32_t)c->r[23],0); // 800BA060
  if (!crb(c,2)) { goto L_800BA084; } // 800BA064
  c->r[3]=c->r[26]+0x00001880u; // 800BA068
  c->r[5]=c->r[27]+0x00001864u; // 800BA06C
  c->r[4]=0u+0x00000029u; // 800BA070
  c->r[6]=c->r[13]+0xFFFF8048u; // 800BA074
  c->r[7]=c->r[13]+0xFFFF816Cu; // 800BA078
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BA07C
  c->lr=0x800BA084u; f_803444BC(c); // 800BA080
L_800BA084:;
  c->r[0]=R32(c->r[23]+0x00000060u); // 800BA084
  cmps(c,0,(int32_t)c->r[0],0); // 800BA088
  if (crb(c,2)) { goto L_800BA0B4; } // 800BA08C
  c->r[23]=c->r[23]+c->r[0]; // 800BA090
  c->r[0]=rotl(c->r[23],0)&0x00000003u; cr0(c,c->r[0]); // 800BA094
  if (crb(c,2)) { goto L_800BA0B8; } // 800BA098
  c->r[3]=c->r[28]+0x00001850u; // 800BA09C
  c->r[5]=c->r[29]+0x00001828u; // 800BA0A0
  c->r[4]=0u+0x00000029u; // 800BA0A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BA0A8
  c->lr=0x800BA0B0u; f_803444BC(c); // 800BA0AC
  goto L_800BA0B8; // 800BA0B0
L_800BA0B4:;
  c->r[23]=0u+0x00000000u; // 800BA0B4
L_800BA0B8:;
  cmps(c,0,(int32_t)c->r[23],0); // 800BA0B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800B9E80; } // 800BA0BC
L_800BA0C0:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 800BA0C0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 800BA0C4
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 800BA0C8
  c->r[11]=c->r[1]+0x00000100u; // 800BA0CC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 800BA0D0
  c->lr=0x800BA0D8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BA0D4
  c->r[0]=R32(c->r[1]+0x00000124u); // 800BA0D8
  c->lr=c->r[0]; // 800BA0DC
  c->r[1]=c->r[1]+0x00000120u; // 800BA0E0
  return; // 800BA0E4
}

// fn_800BA0E8
void f_800BA0E8(Ctx* __restrict c) {
  trace_call(0x800BA0E8u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA0E8
  c->r[0]=c->lr; // 800BA0EC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800BA0F0
  c->r[11]=c->r[1]+0x000000F0u; // 800BA0F4
  c->lr=0x800BA0FCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BA0F8
  c->r[31]=c->r[1]|c->r[1]; // 800BA0FC
  c->r[25]=R32(c->r[5]+0x00000000u); // 800BA100
  c->r[29]=c->r[4]|c->r[4]; // 800BA104
  c->r[26]=R32(c->r[5]+0x00000004u); // 800BA108
  c->r[30]=c->r[6]|c->r[6]; // 800BA10C
  c->r[27]=R32(c->r[5]+0x00000008u); // 800BA110
  c->r[28]=c->r[3]|c->r[3]; // 800BA114
  c->r[12]=R32(c->r[5]+0x0000000Cu); // 800BA118
  c->r[11]=R32(c->r[5]+0x00000010u); // 800BA11C
  c->r[10]=R32(c->r[5]+0x00000014u); // 800BA120
  c->r[9]=R32(c->r[5]+0x00000018u); // 800BA124
  c->r[8]=R32(c->r[5]+0x0000001Cu); // 800BA128
  c->r[7]=R32(c->r[5]+0x00000020u); // 800BA12C
  c->r[6]=R32(c->r[5]+0x00000024u); // 800BA130
  c->r[4]=R32(c->r[5]+0x00000028u); // 800BA134
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 800BA138
  W32(c->r[31]+0x00000098u,c->r[25]); // 800BA13C
  W32(c->r[31]+0x0000009Cu,c->r[26]); // 800BA140
  W32(c->r[31]+0x000000A0u,c->r[27]); // 800BA144
  W32(c->r[31]+0x000000A4u,c->r[12]); // 800BA148
  W32(c->r[31]+0x000000A8u,c->r[11]); // 800BA14C
  W32(c->r[31]+0x000000ACu,c->r[10]); // 800BA150
  W32(c->r[31]+0x000000B0u,c->r[9]); // 800BA154
  W32(c->r[31]+0x000000B4u,c->r[8]); // 800BA158
  W32(c->r[31]+0x000000B8u,c->r[7]); // 800BA15C
  W32(c->r[31]+0x000000BCu,c->r[6]); // 800BA160
  W32(c->r[31]+0x000000C0u,c->r[4]); // 800BA164
  W32(c->r[31]+0x000000C4u,c->r[0]); // 800BA168
  c->r[0]=R8(c->r[3]+0x00000000u); // 800BA16C
  cmps(c,0,(int32_t)c->r[0],0); // 800BA170
  if (crb(c,2)) { goto L_800BA278; } // 800BA174
  c->r[0]=R8(c->r[13]+0xFFFF9508u); // 800BA178
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800BA17C
  if (!crb(c,2)) { goto L_800BA1B0; } // 800BA180
  c->r[27]=0u+0x80470000u; // 800BA184
  c->r[3]=c->r[27]+0x00000F18u; // 800BA188
  c->lr=0x800BA190u; f_800462E8(c); // 800BA18C
  c->r[4]=0u+0x80040000u; // 800BA190
  c->r[5]=0u+0x80470000u; // 800BA194
  c->r[3]=c->r[27]+0x00000F18u; // 800BA198
  c->r[4]=c->r[4]+0x00006394u; // 800BA19C
  c->r[5]=c->r[5]+0x00000F08u; // 800BA1A0
  c->lr=0x800BA1A8u; f_802895A4(c); // 800BA1A4
  c->r[0]=0u+0x00000001u; // 800BA1A8
  W8(c->r[13]+0xFFFF9508u,c->r[0]); // 800BA1AC
L_800BA1B0:;
  c->r[0]=0u+0x80470000u; // 800BA1B0
  c->r[25]=addc(c,c->r[0],0x00000F18u,0); cr0(c,c->r[25]); // 800BA1B4
  if (crb(c,2)) { goto L_800BA1DC; } // 800BA1B8
  W32(c->r[31]+0x00000064u,c->r[1]); // 800BA1BC
  c->r[3]=c->r[25]|c->r[25]; // 800BA1C0
  c->lr=0x800BA1C8u; f_800462E8(c); // 800BA1C4
  goto L_800BA1DC; // 800BA1C8
  c->r[3]=0u+0x00000000u; // 800BA1CC
  c->r[4]=0u+0x00000000u; // 800BA1D0
  c->r[5]=0u+0x00000000u; // 800BA1D4
  c->lr=0x800BA1DCu; f_8028BC3C(c); // 800BA1D8
L_800BA1DC:;
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BA1DC
  c->r[3]=0u+0x80450000u; // 800BA1E0
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BA1E4
  c->r[4]=c->r[25]|c->r[25]; // 800BA1E8
  c->f[1]=c->ps1[1]=S(c->f[5]); // 800BA1EC
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[6]=c->ps1[6]=RF32(ea);} // 800BA1F0
  c->f[2]=c->ps1[2]=S(c->f[4]); // 800BA1F4
  {uint32_t ea=c->r[2]+0xFFFF8E40u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA1F8
  c->f[3]=c->ps1[3]=S(c->f[6]); // 800BA1FC
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[6]);} // 800BA200
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800BA204
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[5]);} // 800BA208
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 800BA20C
  c->r[5]=c->r[31]+0x00000044u; // 800BA210
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[4]);} // 800BA214
  c->r[6]=c->r[31]+0x00000038u; // 800BA218
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BA21C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[3]);} // 800BA220
  c->r[7]=0u+0x00000000u; // 800BA224
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[2]);} // 800BA228
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BA22C
  c->lr=0x800BA234u; f_80044D14(c); // 800BA230
  cmps(c,0,(int32_t)c->r[3],0); // 800BA234
  if (crb(c,2)) { goto L_800BA260; } // 800BA238
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA23C
  {uint32_t ea=c->r[25]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BA240
  c->f[1]=c->ps1[1]=S(c->f[0]); // 800BA244
  {uint32_t ea=c->r[2]+0xFFFF8E44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA248
  {uint32_t ea=c->r[25]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA24C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[3]);} // 800BA250
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800BA254
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[2]);} // 800BA258
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BA25C
L_800BA260:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA260
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA264
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA268
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[2]);} // 800BA26C
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[1]);} // 800BA270
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 800BA274
L_800BA278:;
  c->r[26]=c->r[28]|c->r[28]; // 800BA278
  c->r[27]=c->r[28]+0x00000008u; // 800BA27C
  c->r[24]=0u+0x00000000u; // 800BA280
  goto L_800BA364; // 800BA284
L_800BA288:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 800BA288
  c->r[25]=0u+0x00000000u; // 800BA28C
  c->r[3]=0u+0x00000000u; // 800BA290
  cmps(c,0,(int32_t)c->r[0],0); // 800BA294
  if (crb(c,0)) { goto L_800BA2B0; } // 800BA298
  c->r[0]=R32(c->r[30]+0x000000E8u); // 800BA29C
  cmps(c,0,(int32_t)c->r[0],0); // 800BA2A0
  W32(c->r[31]+0x00000010u,c->r[0]); // 800BA2A4
  if (crb(c,2)) { goto L_800BA2B0; } // 800BA2A8
  c->r[3]=0u+0x00000001u; // 800BA2AC
L_800BA2B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BA2B0
  if (crb(c,2)) { goto L_800BA2DC; } // 800BA2B4
  c->r[0]=R32(c->r[30]+0x000000E8u); // 800BA2B8
  c->r[3]=c->r[31]+0x00000008u; // 800BA2BC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800BA2C0
  c->r[4]=R32(c->r[26]+0x00000008u); // 800BA2C4
  c->lr=0x800BA2CCu; f_80365C28(c); // 800BA2C8
  cmps(c,0,(int32_t)c->r[3],0); // 800BA2CC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800BA2D0
  if (crb(c,2)) { goto L_800BA2DC; } // 800BA2D4
  c->r[25]=0u+0x00000001u; // 800BA2D8
L_800BA2DC:;
  cmps(c,0,(int32_t)c->r[25],0); // 800BA2DC
  if (crb(c,2)) { goto L_800BA358; } // 800BA2E0
  c->r[6]=R32(c->r[26]+0x00000008u); // 800BA2E4
  c->r[3]=c->r[30]|c->r[30]; // 800BA2E8
  c->r[4]=c->r[31]+0x00000068u; // 800BA2EC
  c->r[5]=0u+0x00000001u; // 800BA2F0
  c->lr=0x800BA2F8u; f_803840F4(c); // 800BA2F4
  {uint32_t ea=c->r[31]+0x00000094u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BA2F8
  c->r[3]=c->r[28]|c->r[28]; // 800BA2FC
  {uint32_t ea=c->r[31]+0x00000084u; c->f[6]=c->ps1[6]=RF32(ea);} // 800BA300
  c->r[4]=c->r[29]|c->r[29]; // 800BA304
  {uint32_t ea=c->r[31]+0x00000074u; c->f[7]=c->ps1[7]=RF32(ea);} // 800BA308
  c->f[0]=c->ps1[0]=S(c->f[5]); // 800BA30C
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BA310
  c->f[1]=c->ps1[1]=S(c->f[6]); // 800BA314
  c->f[2]=c->ps1[2]=S(c->f[7]); // 800BA318
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BA31C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[7]);} // 800BA320
  c->r[8]=c->r[27]|c->r[27]; // 800BA324
  c->r[5]=c->r[31]+0x00000098u; // 800BA328
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[6]);} // 800BA32C
  c->r[6]=c->r[31]+0x00000020u; // 800BA330
  c->r[7]=c->r[31]+0x00000014u; // 800BA334
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[5]);} // 800BA338
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[4]);} // 800BA33C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[3]);} // 800BA340
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[4]);} // 800BA344
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 800BA348
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 800BA34C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BA350
  c->lr=0x800BA358u; f_800BA398(c); // 800BA354
L_800BA358:;
  c->r[26]=c->r[26]+0x00000038u; // 800BA358
  c->r[27]=c->r[27]+0x00000038u; // 800BA35C
  c->r[24]=c->r[24]+0x00000001u; // 800BA360
L_800BA364:;
  c->r[0]=R32(c->r[28]+0x00000238u); // 800BA364
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800BA368
  if (crb(c,0)) { IRQCHK(c); goto L_800BA288; } // 800BA36C
  c->r[0]=0u+0x00000001u; // 800BA370
  c->r[10]=c->r[31]|c->r[31]; // 800BA374
  W8(c->r[28]+0x00000000u,c->r[0]); // 800BA378
  c->r[11]=c->r[10]+0x000000F0u; // 800BA37C
  c->lr=0x800BA384u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BA380
  c->r[10]=R32(c->r[1]+0x00000000u); // 800BA384
  c->r[0]=R32(c->r[10]+0x00000004u); // 800BA388
  c->r[1]=c->r[10]|c->r[10]; // 800BA38C
  c->lr=c->r[0]; // 800BA390
  return; // 800BA394
}

// fn_800BA398
void f_800BA398(Ctx* __restrict c) {
  trace_call(0x800BA398u);
  {uint32_t ea=c->r[1]+0xFFFFFA00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BA398
  c->r[0]=c->lr; // 800BA39C
  W32(c->r[1]+0x00000604u,c->r[0]); // 800BA3A0
  {uint32_t ea=c->r[1]+0x000005F0u; WF64(ea,c->f[31]);} // 800BA3A4
  {uint32_t ea=c->r[1]+0x000005F8u; psq_store(c,31,ea,0,0);} // 800BA3A8
  {uint32_t ea=c->r[1]+0x000005E0u; WF64(ea,c->f[30]);} // 800BA3AC
  {uint32_t ea=c->r[1]+0x000005E8u; psq_store(c,30,ea,0,0);} // 800BA3B0
  {uint32_t ea=c->r[1]+0x000005D0u; WF64(ea,c->f[29]);} // 800BA3B4
  {uint32_t ea=c->r[1]+0x000005D8u; psq_store(c,29,ea,0,0);} // 800BA3B8
  {uint32_t ea=c->r[1]+0x000005C0u; WF64(ea,c->f[28]);} // 800BA3BC
  {uint32_t ea=c->r[1]+0x000005C8u; psq_store(c,28,ea,0,0);} // 800BA3C0
  {uint32_t ea=c->r[1]+0x000005B0u; WF64(ea,c->f[27]);} // 800BA3C4
  {uint32_t ea=c->r[1]+0x000005B8u; psq_store(c,27,ea,0,0);} // 800BA3C8
  c->r[11]=c->r[1]+0x000005B0u; // 800BA3CC
  c->lr=0x800BA3D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BA3D0
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA3D4
  c->r[27]=c->r[3]|c->r[3]; // 800BA3D8
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA3DC
  c->r[28]=c->r[4]|c->r[4]; // 800BA3E0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA3E4
  c->r[29]=c->r[6]|c->r[6]; // 800BA3E8
  c->r[30]=c->r[7]|c->r[7]; // 800BA3EC
  c->r[31]=c->r[8]|c->r[8]; // 800BA3F0
  {uint32_t ea=c->r[1]+0x00000190u; WF32(ea,c->f[2]);} // 800BA3F4
  {uint32_t ea=c->r[8]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BA3F8
  {uint32_t ea=c->r[1]+0x00000194u; WF32(ea,c->f[1]);} // 800BA3FC
  {uint32_t ea=c->r[8]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 800BA400
  {uint32_t ea=c->r[1]+0x00000198u; WF32(ea,c->f[0]);} // 800BA404
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 800BA408
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,0,ea,0,0);} // 800BA40C
  {uint32_t ea=c->r[6]+0x00000004u; psq_load(c,1,ea,0,0);} // 800BA410
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA414
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,1,0);} // 800BA418
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,1,ea,1,0);} // 800BA41C
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA420
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[27]=t0; c->ps1[27]=t1;} // 800BA424
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA428
  fcmp(c,0,c->f[0],c->f[27]); // 800BA42C
  if (crb(c,2)) { goto L_800BB074; } // 800BA430
  c->r[4]=c->r[5]|c->r[5]; // 800BA434
  c->r[3]=c->r[1]+0x00000118u; // 800BA438
  c->r[5]=c->r[8]+0x00000014u; // 800BA43C
  c->lr=0x800BA444u; f_80394B04(c); // 800BA440
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 800BA444
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,1,ea,0,0);} // 800BA448
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA44C
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 800BA450
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,1,0);} // 800BA454
  {uint32_t ea=c->r[1]+0x00000120u; psq_load(c,1,ea,1,0);} // 800BA458
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA45C
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,0,ea,1,0);} // 800BA460
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA464
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA468
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA46C
  {uint32_t ea=c->r[1]+0x00000184u; WF32(ea,c->f[2]);} // 800BA470
  {uint32_t ea=c->r[1]+0x00000188u; WF32(ea,c->f[1]);} // 800BA474
  {uint32_t ea=c->r[1]+0x0000018Cu; WF32(ea,c->f[0]);} // 800BA478
  {uint32_t ea=c->r[1]+0x00000194u; psq_load(c,0,ea,0,0);} // 800BA47C
  {uint32_t ea=c->r[29]+0x00000004u; psq_load(c,1,ea,0,0);} // 800BA480
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA484
  {uint32_t ea=c->r[1]+0x00000190u; psq_load(c,2,ea,1,0);} // 800BA488
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,1,ea,1,0);} // 800BA48C
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA490
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA494
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,1,ea,0,0);} // 800BA498
  {uint32_t ea=c->r[29]+0x00000004u; psq_load(c,2,ea,0,0);} // 800BA49C
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA4A0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,3,ea,1,0);} // 800BA4A4
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,1,0);} // 800BA4A8
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 800BA4AC
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA4B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800BA4B4
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[27]); // 800BA4B8
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,0,ea,0,0);} // 800BA4BC
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA4C0
  {uint32_t ea=c->r[1]+0x0000010Cu; psq_store(c,0,ea,0,0);} // 800BA4C4
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,0,ea,1,0);} // 800BA4C8
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA4CC
  {uint32_t ea=c->r[1]+0x00000114u; psq_store(c,0,ea,1,0);} // 800BA4D0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 800BA4D4
  {uint32_t ea=c->r[1]+0x0000010Cu; psq_load(c,1,ea,0,0);} // 800BA4D8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA4DC
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,0,ea,0,0);} // 800BA4E0
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,1,0);} // 800BA4E4
  {uint32_t ea=c->r[1]+0x00000114u; psq_load(c,1,ea,1,0);} // 800BA4E8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA4EC
  {uint32_t ea=c->r[1]+0x00000180u; psq_store(c,0,ea,1,0);} // 800BA4F0
  c->r[3]=c->r[1]+0x00000230u; // 800BA4F4
  c->lr=0x800BA4FCu; f_80264680(c); // 800BA4F8
  c->r[3]=c->r[28]|c->r[28]; // 800BA4FC
  c->r[4]=c->r[29]|c->r[29]; // 800BA500
  c->r[5]=c->r[1]+0x0000016Cu; // 800BA504
  c->lr=0x800BA50Cu; f_80265810(c); // 800BA508
  c->r[3]=c->r[1]+0x0000016Cu; // 800BA50C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 800BA510
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 800BA514
  {uint32_t ea=c->r[1]+0x00000174u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA518
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA51C
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA520
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA524
  fcmp(c,0,c->f[1],c->f[0]); // 800BA528
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA52C
  c->r[0]=c->cr; // 800BA530
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA534
  if (!crb(c,2)) { goto L_800BA810; } // 800BA538
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA53C
  c->r[3]=c->r[29]|c->r[29]; // 800BA540
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA544
  c->r[4]=c->r[1]+0x00000160u; // 800BA548
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[1]);} // 800BA54C
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[1]);} // 800BA550
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[0]);} // 800BA554
  c->lr=0x800BA55Cu; f_80265924(c); // 800BA558
  {uint32_t ea=c->r[2]+0xFFFF8E3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA55C
  fcmp(c,0,c->f[1],c->f[0]); // 800BA560
  if (!crb(c,0)) { goto L_800BA57C; } // 800BA564
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA568
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA56C
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[0]);} // 800BA570
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[1]);} // 800BA574
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[0]);} // 800BA578
L_800BA57C:;
  {uint32_t ea=c->r[1]+0x00000160u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA57C
  {uint32_t ea=c->r[1]+0x00000164u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA580
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA584
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 800BA588
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 800BA58C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 800BA590
  {uint32_t ea=c->r[1]+0x0000007Cu; psq_load(c,1,ea,0,0);} // 800BA594
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA598
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800BA59C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 800BA5A0
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800BA5A4
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA5A8
  fcmp(c,0,c->f[2],c->f[0]); // 800BA5AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA5B0
  c->r[0]=c->cr; // 800BA5B4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA5B8
  if (!crb(c,2)) { goto L_800BA5D4; } // 800BA5BC
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA5C0
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA5C4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 800BA5C8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 800BA5CC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 800BA5D0
L_800BA5D4:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA5D4
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA5D8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA5DC
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[2]);} // 800BA5E0
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 800BA5E4
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800BA5E8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,1,ea,0,0);} // 800BA5EC
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA5F0
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800BA5F4
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 800BA5F8
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800BA5FC
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA600
  fcmp(c,0,c->f[2],c->f[0]); // 800BA604
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA608
  c->r[0]=c->cr; // 800BA60C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA610
  if (!crb(c,2)) { goto L_800BA62C; } // 800BA614
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA618
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA61C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 800BA620
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BA624
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 800BA628
L_800BA62C:;
  c->r[3]=c->r[1]+0x0000007Cu; // 800BA62C
  c->r[4]=c->r[1]+0x00000094u; // 800BA630
  c->lr=0x800BA638u; f_80265750(c); // 800BA634
  {uint32_t ea=c->r[1]+0x00000094u; psq_load(c,0,ea,0,0);} // 800BA638
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA63C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA640
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA644
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA648
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA64C
  fcmp(c,0,c->f[1],c->f[0]); // 800BA650
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA654
  c->r[0]=c->cr; // 800BA658
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA65C
  if (!crb(c,2)) { goto L_800BA678; } // 800BA660
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA664
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA668
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[1]);} // 800BA66C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 800BA670
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 800BA674
L_800BA678:;
  c->r[3]=c->r[1]+0x00000088u; // 800BA678
  c->r[4]=c->r[1]+0x00000094u; // 800BA67C
  c->r[5]=c->r[1]+0x000000A0u; // 800BA680
  c->lr=0x800BA688u; f_80265810(c); // 800BA684
  {uint32_t ea=c->r[1]+0x000000A0u; psq_load(c,0,ea,0,0);} // 800BA688
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA68C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA690
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA694
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA698
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA69C
  fcmp(c,0,c->f[1],c->f[0]); // 800BA6A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA6A4
  c->r[0]=c->cr; // 800BA6A8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA6AC
  if (!crb(c,2)) { goto L_800BA758; } // 800BA6B0
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA6B4
  c->r[3]=c->r[1]+0x0000007Cu; // 800BA6B8
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA6BC
  c->r[4]=c->r[1]+0x000000C4u; // 800BA6C0
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 800BA6C4
  c->r[5]=c->r[1]+0x000000B8u; // 800BA6C8
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 800BA6CC
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 800BA6D0
  c->lr=0x800BA6D8u; f_80265810(c); // 800BA6D4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,0,ea,0,0);} // 800BA6D8
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA6DC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA6E0
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA6E4
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA6E8
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA6EC
  fcmp(c,0,c->f[1],c->f[0]); // 800BA6F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA6F4
  c->r[0]=c->cr; // 800BA6F8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA6FC
  if (!crb(c,2)) { goto L_800BA71C; } // 800BA700
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA704
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA708
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BA70C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 800BA710
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 800BA714
  goto L_800BA730; // 800BA718
L_800BA71C:;
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA71C
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA720
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 800BA724
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 800BA728
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 800BA72C
L_800BA730:;
  c->r[3]=c->r[1]+0x00000088u; // 800BA730
  c->r[4]=c->r[1]+0x00000094u; // 800BA734
  c->r[5]=c->r[1]+0x000000D0u; // 800BA738
  c->lr=0x800BA740u; f_80265810(c); // 800BA73C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA740
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA744
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA748
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 800BA74C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 800BA750
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 800BA754
L_800BA758:;
  c->r[3]=c->r[1]+0x000000A0u; // 800BA758
  c->r[4]=c->r[3]|c->r[3]; // 800BA75C
  c->lr=0x800BA764u; f_80265750(c); // 800BA760
  {uint32_t ea=c->r[1]+0x000000A0u; psq_load(c,0,ea,0,0);} // 800BA764
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA768
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA76C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA770
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA774
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA778
  fcmp(c,0,c->f[1],c->f[0]); // 800BA77C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA780
  c->r[0]=c->cr; // 800BA784
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA788
  if (!crb(c,2)) { goto L_800BA7A4; } // 800BA78C
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA790
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA794
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 800BA798
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 800BA79C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 800BA7A0
L_800BA7A4:;
  c->r[3]=c->r[1]+0x00000094u; // 800BA7A4
  c->r[4]=c->r[1]+0x000000A0u; // 800BA7A8
  c->r[5]=c->r[1]+0x000000ACu; // 800BA7AC
  c->lr=0x800BA7B4u; f_80265810(c); // 800BA7B0
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA7B4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[9]=c->ps1[9]=RF32(ea);} // 800BA7B8
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[8]=c->ps1[8]=RF32(ea);} // 800BA7BC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[7]=c->ps1[7]=RF32(ea);} // 800BA7C0
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[6]=c->ps1[6]=RF32(ea);} // 800BA7C4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BA7C8
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BA7CC
  {uint32_t ea=c->r[1]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BA7D0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA7D4
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA7D8
  {uint32_t ea=c->r[1]+0x00000230u; WF32(ea,c->f[9]);} // 800BA7DC
  {uint32_t ea=c->r[1]+0x00000240u; WF32(ea,c->f[8]);} // 800BA7E0
  {uint32_t ea=c->r[1]+0x00000250u; WF32(ea,c->f[7]);} // 800BA7E4
  {uint32_t ea=c->r[1]+0x00000234u; WF32(ea,c->f[6]);} // 800BA7E8
  {uint32_t ea=c->r[1]+0x00000244u; WF32(ea,c->f[5]);} // 800BA7EC
  {uint32_t ea=c->r[1]+0x00000254u; WF32(ea,c->f[4]);} // 800BA7F0
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[3]);} // 800BA7F4
  {uint32_t ea=c->r[1]+0x00000248u; WF32(ea,c->f[2]);} // 800BA7F8
  {uint32_t ea=c->r[1]+0x00000258u; WF32(ea,c->f[1]);} // 800BA7FC
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[0]);} // 800BA800
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[0]);} // 800BA804
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[0]);} // 800BA808
  goto L_800BAAAC; // 800BA80C
L_800BA810:;
  c->r[4]=c->r[29]|c->r[29]; // 800BA810
  c->r[5]=c->r[1]+0x00000154u; // 800BA814
  c->lr=0x800BA81Cu; f_80265810(c); // 800BA818
  {uint32_t ea=c->r[1]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA81C
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA820
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA824
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800BA828
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800BA82C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800BA830
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,1,ea,0,0);} // 800BA834
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA838
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800BA83C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 800BA840
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800BA844
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA848
  fcmp(c,0,c->f[2],c->f[0]); // 800BA84C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA850
  c->r[0]=c->cr; // 800BA854
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA858
  if (!crb(c,2)) { goto L_800BA874; } // 800BA85C
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA860
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA864
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800BA868
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 800BA86C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800BA870
L_800BA874:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA874
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA878
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA87C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 800BA880
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800BA884
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800BA888
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,1,ea,0,0);} // 800BA88C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA890
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800BA894
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 800BA898
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 800BA89C
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA8A0
  fcmp(c,0,c->f[2],c->f[0]); // 800BA8A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA8A8
  c->r[0]=c->cr; // 800BA8AC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA8B0
  if (!crb(c,2)) { goto L_800BA8CC; } // 800BA8B4
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA8B8
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA8BC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800BA8C0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BA8C4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800BA8C8
L_800BA8CC:;
  c->r[3]=c->r[1]+0x0000001Cu; // 800BA8CC
  c->r[4]=c->r[1]+0x00000034u; // 800BA8D0
  c->lr=0x800BA8D8u; f_80265750(c); // 800BA8D4
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,0,ea,0,0);} // 800BA8D8
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA8DC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA8E0
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA8E4
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA8E8
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA8EC
  fcmp(c,0,c->f[1],c->f[0]); // 800BA8F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA8F4
  c->r[0]=c->cr; // 800BA8F8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA8FC
  if (!crb(c,2)) { goto L_800BA918; } // 800BA900
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA904
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA908
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 800BA90C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800BA910
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800BA914
L_800BA918:;
  c->r[3]=c->r[1]+0x00000028u; // 800BA918
  c->r[4]=c->r[1]+0x00000034u; // 800BA91C
  c->r[5]=c->r[1]+0x00000040u; // 800BA920
  c->lr=0x800BA928u; f_80265810(c); // 800BA924
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,0,ea,0,0);} // 800BA928
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA92C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA930
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA934
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA938
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA93C
  fcmp(c,0,c->f[1],c->f[0]); // 800BA940
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA944
  c->r[0]=c->cr; // 800BA948
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA94C
  if (!crb(c,2)) { goto L_800BA9F8; } // 800BA950
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA954
  c->r[3]=c->r[1]+0x0000001Cu; // 800BA958
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA95C
  c->r[4]=c->r[1]+0x00000064u; // 800BA960
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 800BA964
  c->r[5]=c->r[1]+0x00000058u; // 800BA968
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800BA96C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 800BA970
  c->lr=0x800BA978u; f_80265810(c); // 800BA974
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,0,ea,0,0);} // 800BA978
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BA97C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA980
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BA984
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BA988
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA98C
  fcmp(c,0,c->f[1],c->f[0]); // 800BA990
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BA994
  c->r[0]=c->cr; // 800BA998
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BA99C
  if (!crb(c,2)) { goto L_800BA9BC; } // 800BA9A0
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA9A4
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA9A8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BA9AC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800BA9B0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 800BA9B4
  goto L_800BA9D0; // 800BA9B8
L_800BA9BC:;
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA9BC
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA9C0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800BA9C4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800BA9C8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800BA9CC
L_800BA9D0:;
  c->r[3]=c->r[1]+0x00000028u; // 800BA9D0
  c->r[4]=c->r[1]+0x00000034u; // 800BA9D4
  c->r[5]=c->r[1]+0x00000070u; // 800BA9D8
  c->lr=0x800BA9E0u; f_80265810(c); // 800BA9DC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BA9E0
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BA9E4
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BA9E8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 800BA9EC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 800BA9F0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800BA9F4
L_800BA9F8:;
  c->r[3]=c->r[1]+0x00000040u; // 800BA9F8
  c->r[4]=c->r[3]|c->r[3]; // 800BA9FC
  c->lr=0x800BAA04u; f_80265750(c); // 800BAA00
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,0,ea,0,0);} // 800BAA04
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAA08
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAA0C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BAA10
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 800BAA14
  {uint32_t ea=c->r[2]+0xFFFF8E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA18
  fcmp(c,0,c->f[1],c->f[0]); // 800BAA1C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BAA20
  c->r[0]=c->cr; // 800BAA24
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 800BAA28
  if (!crb(c,2)) { goto L_800BAA44; } // 800BAA2C
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA30
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAA34
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800BAA38
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800BAA3C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800BAA40
L_800BAA44:;
  c->r[3]=c->r[1]+0x00000034u; // 800BAA44
  c->r[4]=c->r[1]+0x00000040u; // 800BAA48
  c->r[5]=c->r[1]+0x0000004Cu; // 800BAA4C
  c->lr=0x800BAA54u; f_80265810(c); // 800BAA50
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAA54
  {uint32_t ea=c->r[1]+0x00000040u; c->f[9]=c->ps1[9]=RF32(ea);} // 800BAA58
  {uint32_t ea=c->r[1]+0x00000044u; c->f[8]=c->ps1[8]=RF32(ea);} // 800BAA5C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[7]=c->ps1[7]=RF32(ea);} // 800BAA60
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800BAA64
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BAA68
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BAA6C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BAA70
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAA74
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAA78
  {uint32_t ea=c->r[1]+0x00000230u; WF32(ea,c->f[9]);} // 800BAA7C
  {uint32_t ea=c->r[1]+0x00000240u; WF32(ea,c->f[8]);} // 800BAA80
  {uint32_t ea=c->r[1]+0x00000250u; WF32(ea,c->f[7]);} // 800BAA84
  {uint32_t ea=c->r[1]+0x00000234u; WF32(ea,c->f[6]);} // 800BAA88
  {uint32_t ea=c->r[1]+0x00000244u; WF32(ea,c->f[5]);} // 800BAA8C
  {uint32_t ea=c->r[1]+0x00000254u; WF32(ea,c->f[4]);} // 800BAA90
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[3]);} // 800BAA94
  {uint32_t ea=c->r[1]+0x00000248u; WF32(ea,c->f[2]);} // 800BAA98
  {uint32_t ea=c->r[1]+0x00000258u; WF32(ea,c->f[1]);} // 800BAA9C
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[0]);} // 800BAAA0
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[0]);} // 800BAAA4
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[0]);} // 800BAAA8
L_800BAAAC:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BAAAC
  cmps(c,0,(int32_t)c->r[0],0); // 800BAAB0
  if (crb(c,2)) { goto L_800BAB5C; } // 800BAAB4
  {uint32_t ea=c->r[29]+0x00000004u; psq_load(c,0,ea,0,0);} // 800BAAB8
  {uint32_t ea=c->r[1]+0x00000194u; psq_load(c,1,ea,0,0);} // 800BAABC
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAAC0
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,1,0);} // 800BAAC4
  {uint32_t ea=c->r[1]+0x00000190u; psq_load(c,1,ea,1,0);} // 800BAAC8
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BAACC
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAAD0
  {uint32_t ea=c->r[29]+0x00000004u; psq_load(c,1,ea,0,0);} // 800BAAD4
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,2,ea,0,0);} // 800BAAD8
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 800BAADC
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,3,ea,1,0);} // 800BAAE0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 800BAAE4
  {double t0=S(std::fma(c->f[3],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[3],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 800BAAE8
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 800BAAEC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800BAAF0
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 800BAAF4
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAAF8
  {uint32_t ea=c->r[1]+0x000000F4u; psq_store(c,0,ea,0,0);} // 800BAAFC
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,0,ea,1,0);} // 800BAB00
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAB04
  {uint32_t ea=c->r[1]+0x000000FCu; psq_store(c,0,ea,1,0);} // 800BAB08
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 800BAB0C
  {uint32_t ea=c->r[1]+0x000000F4u; psq_load(c,1,ea,0,0);} // 800BAB10
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAB14
  {uint32_t ea=c->r[1]+0x00000100u; psq_store(c,0,ea,0,0);} // 800BAB18
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,1,0);} // 800BAB1C
  {uint32_t ea=c->r[1]+0x000000FCu; psq_load(c,1,ea,1,0);} // 800BAB20
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAB24
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,0,ea,1,0);} // 800BAB28
  {uint32_t ea=c->r[1]+0x00000100u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAB2C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAB30
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB34
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 800BAB38
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800BAB3C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 800BAB40
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800BAB44
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 800BAB48
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[2]);} // 800BAB4C
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[1]);} // 800BAB50
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[0]);} // 800BAB54
  goto L_800BAB74; // 800BAB58
L_800BAB5C:;
  {uint32_t ea=c->r[1]+0x00000178u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAB5C
  {uint32_t ea=c->r[1]+0x0000017Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAB60
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB64
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[2]);} // 800BAB68
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[1]);} // 800BAB6C
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[0]);} // 800BAB70
L_800BAB74:;
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB74
  fcmp(c,0,c->f[31],c->f[0]); // 800BAB78
  c->r[3]=c->r[1]+0x00000184u; // 800BAB7C
  c->r[4]=c->r[1]+0x00000178u; // 800BAB80
  c->lr=0x800BAB88u; f_80265924(c); // 800BAB84
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[1]); // 800BAB88
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAB8C
  fcmp(c,0,c->f[7],c->f[0]); // 800BAB90
  if (!crb(c,0)) { goto L_800BAB9C; } // 800BAB94
  c->f[7]=c->f[0]; // 800BAB98
L_800BAB9C:;
  {uint32_t ea=c->r[31]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAB9C
  c->f[28]=c->ps1[28]=S(c->f[28]/c->f[7]); // 800BABA0
  {uint32_t ea=c->r[31]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 800BABA4
  {uint32_t ea=c->r[31]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 800BABA8
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800BABAC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BABB0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BABB4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[7]); // 800BABB8
  {uint32_t ea=c->r[2]+0xFFFF8E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BABBC
  {uint32_t ea=c->r[1]+0x000001CCu; WF32(ea,c->f[1]);} // 800BABC0
  {uint32_t ea=c->r[1]+0x000001B8u; WF32(ea,c->f[6]);} // 800BABC4
  {uint32_t ea=c->r[1]+0x000001BCu; WF32(ea,c->f[5]);} // 800BABC8
  {uint32_t ea=c->r[1]+0x000001C4u; WF32(ea,c->f[4]);} // 800BABCC
  {uint32_t ea=c->r[1]+0x000001C8u; WF32(ea,c->f[3]);} // 800BABD0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[28]); // 800BABD4
  {uint32_t ea=c->r[1]+0x000001C0u; WF32(ea,c->f[2]);} // 800BABD8
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BABDC
  c->f[28]=c->ps1[28]=S(c->f[1]*c->f[0]); // 800BABE0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,28,ea,1,2);} // 800BABE4
  c->r[0]=R8(c->r[1]+0x00000018u); // 800BABE8
  c->r[3]=c->r[1]+0x00000200u; // 800BABEC
  c->lr=0x800BABF4u; f_80264680(c); // 800BABF0
  {uint32_t ea=c->r[28]+0x00000004u; psq_load(c,0,ea,0,0);} // 800BABF4
  {uint32_t ea=c->r[29]+0x00000004u; psq_load(c,1,ea,0,0);} // 800BABF8
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BABFC
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,2,ea,1,0);} // 800BAC00
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,1,ea,1,0);} // 800BAC04
  {double t0=S(std::fma(c->f[2],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[2],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 800BAC08
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAC0C
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAC10
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAC14
  c->r[3]=c->r[1]+0x00000200u; // 800BAC18
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[1]);} // 800BAC1C
  c->r[4]=c->r[3]|c->r[3]; // 800BAC20
  c->f[3]=c->ps1[3]=S(c->f[1]/c->f[0]); // 800BAC24
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[2]);} // 800BAC28
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[3]);} // 800BAC2C
  c->lr=0x800BAC34u; f_80264E54(c); // 800BAC30
  {uint32_t ea=c->r[1]+0x00000150u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAC34
  c->r[3]=c->r[1]+0x0000013Cu; // 800BAC38
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAC3C
  c->r[5]=c->r[3]|c->r[3]; // 800BAC40
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAC44
  c->r[4]=c->r[1]+0x00000230u; // 800BAC48
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800BAC4C
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 800BAC50
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[29]); // 800BAC54
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[0]);} // 800BAC58
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[1]);} // 800BAC5C
  c->lr=0x800BAC64u; f_80394B04(c); // 800BAC60
  {uint32_t ea=c->r[1]+0x0000024Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAC64
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAC68
  {uint32_t ea=c->r[1]+0x0000025Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAC6C
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[2]);} // 800BAC70
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[1]);} // 800BAC74
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 800BAC78
  {uint32_t ea=c->r[1]+0x0000013Cu; psq_load(c,0,ea,0,0);} // 800BAC7C
  {uint32_t ea=c->r[1]+0x000000DCu; psq_load(c,1,ea,0,0);} // 800BAC80
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAC84
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,0,ea,0,0);} // 800BAC88
  {uint32_t ea=c->r[1]+0x00000144u; psq_load(c,0,ea,1,0);} // 800BAC8C
  {uint32_t ea=c->r[1]+0x000000E4u; psq_load(c,1,ea,1,0);} // 800BAC90
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 800BAC94
  {uint32_t ea=c->r[1]+0x000000F0u; psq_store(c,0,ea,1,0);} // 800BAC98
  c->r[3]=c->r[1]+0x00000230u; // 800BAC9C
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BACA0
  c->r[4]=c->r[1]+0x00000200u; // 800BACA4
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BACA8
  c->r[5]=c->r[1]+0x000001D0u; // 800BACAC
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BACB0
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[2]);} // 800BACB4
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[1]);} // 800BACB8
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[0]);} // 800BACBC
  c->lr=0x800BACC4u; f_802646E0(c); // 800BACC0
  c->r[26]=R32(c->r[1]+0x000001D0u); // 800BACC4
  c->r[3]=0u+0x80440000u; // 800BACC8
  c->r[31]=R32(c->r[1]+0x000001D4u); // 800BACCC
  c->r[3]=c->r[3]+0xFFFFA69Cu; // 800BACD0
  c->r[30]=R32(c->r[1]+0x000001D8u); // 800BACD4
  c->r[4]=0u+0xFFFFFFFFu; // 800BACD8
  c->r[29]=R32(c->r[1]+0x000001DCu); // 800BACDC
  c->r[5]=0u+0x00000001u; // 800BACE0
  c->r[28]=R32(c->r[1]+0x000001E0u); // 800BACE4
  c->r[6]=0u+0x00000004u; // 800BACE8
  c->r[27]=R32(c->r[1]+0x000001E4u); // 800BACEC
  c->r[7]=0u+0x00000004u; // 800BACF0
  c->r[12]=R32(c->r[1]+0x000001E8u); // 800BACF4
  c->r[11]=R32(c->r[1]+0x000001ECu); // 800BACF8
  c->r[10]=R32(c->r[1]+0x000001F0u); // 800BACFC
  c->r[9]=R32(c->r[1]+0x000001F4u); // 800BAD00
  c->r[8]=R32(c->r[1]+0x000001F8u); // 800BAD04
  c->r[0]=R32(c->r[1]+0x000001FCu); // 800BAD08
  W32(c->r[1]+0x00000230u,c->r[26]); // 800BAD0C
  W32(c->r[1]+0x00000234u,c->r[31]); // 800BAD10
  W32(c->r[1]+0x00000238u,c->r[30]); // 800BAD14
  W32(c->r[1]+0x0000023Cu,c->r[29]); // 800BAD18
  W32(c->r[1]+0x00000240u,c->r[28]); // 800BAD1C
  W32(c->r[1]+0x00000244u,c->r[27]); // 800BAD20
  W32(c->r[1]+0x00000248u,c->r[12]); // 800BAD24
  W32(c->r[1]+0x0000024Cu,c->r[11]); // 800BAD28
  W32(c->r[1]+0x00000250u,c->r[10]); // 800BAD2C
  W32(c->r[1]+0x00000254u,c->r[9]); // 800BAD30
  W32(c->r[1]+0x00000258u,c->r[8]); // 800BAD34
  W32(c->r[1]+0x0000025Cu,c->r[0]); // 800BAD38
  c->lr=0x800BAD40u; f_800296D4(c); // 800BAD3C
  c->r[3]=0u+0x00000001u; // 800BAD40
  c->r[4]=0u+0x00000004u; // 800BAD44
  c->r[5]=0u+0x00000005u; // 800BAD48
  c->r[6]=0u+0x00000005u; // 800BAD4C
  c->lr=0x800BAD54u; f_80288274(c); // 800BAD50
  c->r[3]=0u+0x00000004u; // 800BAD54
  c->r[4]=0u+0x00000000u; // 800BAD58
  c->r[5]=0u+0x00000001u; // 800BAD5C
  c->r[6]=0u+0x00000001u; // 800BAD60
  c->r[7]=0u+0x00000000u; // 800BAD64
  c->r[8]=0u+0x00000000u; // 800BAD68
  c->r[9]=0u+0x00000002u; // 800BAD6C
  c->lr=0x800BAD74u; f_802861B4(c); // 800BAD70
  c->r[3]=0u+0x00000000u; // 800BAD74
  c->r[4]=0u+0x00000004u; // 800BAD78
  c->lr=0x800BAD80u; f_80287744(c); // 800BAD7C
  c->r[3]=0u+0x00000000u; // 800BAD80
  c->r[4]=0u+0x00000001u; // 800BAD84
  c->r[5]=0u+0x00000000u; // 800BAD88
  c->r[6]=0u+0x00000000u; // 800BAD8C
  c->r[7]=0u+0x00000000u; // 800BAD90
  c->r[8]=0u+0x00000000u; // 800BAD94
  c->lr=0x800BAD9Cu; f_802878B0(c); // 800BAD98
  c->r[3]=0u+0x00000000u; // 800BAD9C
  c->lr=0x800BADA4u; f_802882F0(c); // 800BADA0
  c->r[3]=0u+0x00000001u; // 800BADA4
  c->r[4]=0u+0x00000003u; // 800BADA8
  c->r[5]=0u+0x00000000u; // 800BADAC
  c->lr=0x800BADB4u; f_8028831C(c); // 800BADB0
  c->r[3]=0u+0x00000004u; // 800BADB4
  c->r[4]=0u+0x00000000u; // 800BADB8
  c->r[5]=0u+0x00000000u; // 800BADBC
  c->r[6]=0u+0x00000007u; // 800BADC0
  c->r[7]=0u+0x00000000u; // 800BADC4
  c->lr=0x800BADCCu; f_80287B80(c); // 800BADC8
  c->r[3]=0u+0x000000A0u; // 800BADCC
  c->r[4]=0u+0x00000000u; // 800BADD0
  c->r[5]=0u+0x00000012u; // 800BADD4
  c->lr=0x800BADDCu; f_80284FD0(c); // 800BADD8
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BADDC
  c->r[4]=c->r[1]+0x00000130u; // 800BADE0
  c->r[5]=c->r[4]|c->r[4]; // 800BADE4
  c->r[3]=c->r[1]+0x00000230u; // 800BADE8
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[0]);} // 800BADEC
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 800BADF0
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[0]);} // 800BADF4
  c->lr=0x800BADFCu; f_802652E8(c); // 800BADF8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BADFC
  c->r[3]=0u+0xCC010000u; // 800BAE00
  {uint32_t ea=c->r[1]+0x00000134u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAE04
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE08
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAE0C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800BAE10
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800BAE14
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE18
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAE1C
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE20
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAE24
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE28
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAE2C
  {uint32_t ea=c->r[1]+0x000001BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE30
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[0]); // 800BAE34
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,0,ea,1,2);} // 800BAE38
  c->r[4]=R8(c->r[1]+0x00000014u); // 800BAE3C
  c->r[0]=0u+0x00000000u; // 800BAE40
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BAE44
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BAE48
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BAE4C
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800BAE50
  {uint32_t ea=c->r[1]+0x000001C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAE54
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[0]); // 800BAE58
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,2);} // 800BAE5C
  c->r[26]=R8(c->r[1]+0x00000010u); // 800BAE60
  c->r[28]=c->r[1]+0x00000260u; // 800BAE64
  {uint32_t ea=c->r[2]+0xFFFF8E60u; c->f[27]=RF64(ea);} // 800BAE68
  c->r[29]=0u+0x00000000u; // 800BAE6C
  {uint32_t ea=c->r[2]+0xFFFF8E58u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BAE70
  c->r[27]=0u+0x43300000u; // 800BAE74
  {uint32_t ea=c->r[2]+0xFFFF8E54u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BAE78
L_800BAE7C:;
  c->r[0]=c->r[29]^0x80000000u; // 800BAE7C
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAE80
  W32(c->r[1]+0x00000594u,c->r[0]); // 800BAE84
  c->r[3]=c->r[28]|c->r[28]; // 800BAE88
  c->f[3]=c->f[1]; // 800BAE8C
  W32(c->r[1]+0x00000590u,c->r[27]); // 800BAE90
  {uint32_t ea=c->r[1]+0x00000590u; c->f[0]=RF64(ea);} // 800BAE94
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 800BAE98
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800BAE9C
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[0]); // 800BAEA0
  c->lr=0x800BAEA8u; f_803949B8(c); // 800BAEA4
  c->r[29]=c->r[29]+0x00000001u; // 800BAEA8
  c->r[28]=c->r[28]+0x00000030u; // 800BAEAC
  cmps(c,0,(int32_t)c->r[29],17); // 800BAEB0
  if (crb(c,0)) { IRQCHK(c); goto L_800BAE7C; } // 800BAEB4
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BAEB8
  c->r[29]=c->r[1]+0x00000260u; // 800BAEBC
  c->r[30]=0u+0x00000000u; // 800BAEC0
  c->r[28]=0u+0xCC010000u; // 800BAEC4
  c->r[27]=0u+0x00000000u; // 800BAEC8
L_800BAECC:;
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAECC
  c->r[4]=c->r[1]+0x00000124u; // 800BAED0
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[30]);} // 800BAED4
  c->r[3]=c->r[29]|c->r[29]; // 800BAED8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 800BAEDC
  c->r[5]=c->r[4]|c->r[4]; // 800BAEE0
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[30]);} // 800BAEE4
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[0]);} // 800BAEE8
  c->lr=0x800BAEF0u; f_802652E8(c); // 800BAEEC
  c->r[4]=c->r[1]+0x00000124u; // 800BAEF0
  c->r[3]=c->r[1]+0x00000230u; // 800BAEF4
  c->r[5]=c->r[4]|c->r[4]; // 800BAEF8
  c->lr=0x800BAF00u; f_802652E8(c); // 800BAEFC
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAF00
  c->r[30]=c->r[30]+0x00000001u; // 800BAF04
  {uint32_t ea=c->r[1]+0x00000128u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAF08
  cmps(c,0,(int32_t)c->r[30],17); // 800BAF0C
  {uint32_t ea=c->r[1]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAF10
  c->r[29]=c->r[29]+0x00000030u; // 800BAF14
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAF18
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800BAF1C
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800BAF20
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAF24
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAF28
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAF2C
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAF30
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAF34
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAF38
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BAF3C
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BAF40
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BAF44
  W8(c->r[28]+0xFFFF8000u,c->r[26]); // 800BAF48
  if (crb(c,0)) { IRQCHK(c); goto L_800BAECC; } // 800BAF4C
  {uint32_t ea=c->r[1]+0x000001C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAF50
  c->r[28]=0u+0xCC010000u; // 800BAF54
  {uint32_t ea=c->r[1]+0x000001CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAF58
  c->r[27]=0u+0x00000000u; // 800BAF5C
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 800BAF60
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BAF64
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[0]); // 800BAF68
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,2);} // 800BAF6C
  c->r[26]=R8(c->r[1]+0x0000000Cu); // 800BAF70
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,2);} // 800BAF74
  c->r[29]=R8(c->r[1]+0x00000008u); // 800BAF78
  c->r[3]=0u+0x00000098u; // 800BAF7C
  c->r[4]=0u+0x00000000u; // 800BAF80
  c->r[5]=0u+0x00000022u; // 800BAF84
  c->lr=0x800BAF8Cu; f_80284FD0(c); // 800BAF88
  c->r[30]=c->r[1]+0x00000260u; // 800BAF8C
  c->r[31]=0u+0x00000000u; // 800BAF90
L_800BAF94:;
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAF94
  c->r[4]=c->r[1]+0x000001A0u; // 800BAF98
  {uint32_t ea=c->r[1]+0x000001C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAF9C
  c->r[3]=c->r[30]|c->r[30]; // 800BAFA0
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 800BAFA4
  {uint32_t ea=c->r[1]+0x000001A0u; WF32(ea,c->f[30]);} // 800BAFA8
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 800BAFAC
  c->r[5]=c->r[4]|c->r[4]; // 800BAFB0
  {uint32_t ea=c->r[1]+0x000001A4u; WF32(ea,c->f[30]);} // 800BAFB4
  c->r[6]=0u+0x00000002u; // 800BAFB8
  {uint32_t ea=c->r[1]+0x000001A8u; WF32(ea,c->f[1]);} // 800BAFBC
  {uint32_t ea=c->r[1]+0x000001ACu; WF32(ea,c->f[30]);} // 800BAFC0
  {uint32_t ea=c->r[1]+0x000001B0u; WF32(ea,c->f[30]);} // 800BAFC4
  {uint32_t ea=c->r[1]+0x000001B4u; WF32(ea,c->f[0]);} // 800BAFC8
  c->lr=0x800BAFD0u; f_8026533C(c); // 800BAFCC
  c->r[4]=c->r[1]+0x000001A0u; // 800BAFD0
  c->r[3]=c->r[1]+0x00000230u; // 800BAFD4
  c->r[5]=c->r[4]|c->r[4]; // 800BAFD8
  c->r[6]=0u+0x00000002u; // 800BAFDC
  c->lr=0x800BAFE4u; f_8026533C(c); // 800BAFE0
  {uint32_t ea=c->r[1]+0x000001A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BAFE4
  c->r[31]=c->r[31]+0x00000001u; // 800BAFE8
  {uint32_t ea=c->r[1]+0x000001A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BAFEC
  cmps(c,0,(int32_t)c->r[31],17); // 800BAFF0
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BAFF4
  c->r[30]=c->r[30]+0x00000030u; // 800BAFF8
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BAFFC
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800BB000
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800BB004
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB008
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB00C
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB010
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB014
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB018
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB01C
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BB020
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BB024
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BB028
  W8(c->r[28]+0xFFFF8000u,c->r[26]); // 800BB02C
  {uint32_t ea=c->r[1]+0x000001B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB030
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB034
  {uint32_t ea=c->r[1]+0x000001ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB038
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB03C
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800BB040
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800BB044
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB048
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB04C
  {uint32_t ea=c->r[2]+0xFFFF8E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB050
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB054
  {uint32_t ea=c->r[2]+0xFFFF8E30u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB058
  {uint32_t ea=c->r[28]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800BB05C
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BB060
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BB064
  W8(c->r[28]+0xFFFF8000u,c->r[27]); // 800BB068
  W8(c->r[28]+0xFFFF8000u,c->r[29]); // 800BB06C
  if (crb(c,0)) { IRQCHK(c); goto L_800BAF94; } // 800BB070
L_800BB074:;
  {uint32_t ea=c->r[1]+0x000005F8u; psq_load(c,31,ea,0,0);} // 800BB074
  {uint32_t ea=c->r[1]+0x000005F0u; c->f[31]=RF64(ea);} // 800BB078
  {uint32_t ea=c->r[1]+0x000005E8u; psq_load(c,30,ea,0,0);} // 800BB07C
  {uint32_t ea=c->r[1]+0x000005E0u; c->f[30]=RF64(ea);} // 800BB080
  {uint32_t ea=c->r[1]+0x000005D8u; psq_load(c,29,ea,0,0);} // 800BB084
  {uint32_t ea=c->r[1]+0x000005D0u; c->f[29]=RF64(ea);} // 800BB088
  {uint32_t ea=c->r[1]+0x000005C8u; psq_load(c,28,ea,0,0);} // 800BB08C
  {uint32_t ea=c->r[1]+0x000005C0u; c->f[28]=RF64(ea);} // 800BB090
  {uint32_t ea=c->r[1]+0x000005B8u; psq_load(c,27,ea,0,0);} // 800BB094
  c->r[11]=c->r[1]+0x000005B0u; // 800BB098
  {uint32_t ea=c->r[1]+0x000005B0u; c->f[27]=RF64(ea);} // 800BB09C
  c->lr=0x800BB0A4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BB0A0
  c->r[0]=R32(c->r[1]+0x00000604u); // 800BB0A4
  c->lr=c->r[0]; // 800BB0A8
  c->r[1]=c->r[1]+0x00000600u; // 800BB0AC
  return; // 800BB0B0
}

// fn_800BB0B4
void f_800BB0B4(Ctx* __restrict c) {
  trace_call(0x800BB0B4u);
  c->r[4]=R32(c->r[4]+0x00000088u); // 800BB0B4
  c->r[4]=R32(c->r[4]+0x00000000u); // 800BB0B8
  c->r[0]=R32(c->r[4]+0x00000018u); // 800BB0BC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BB0C0
  return; // 800BB0C4
}

// fn_800BB0C8
void f_800BB0C8(Ctx* __restrict c) {
  trace_call(0x800BB0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB0C8
  c->r[0]=c->lr; // 800BB0CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BB0D0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800BB0D4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800BB0D8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800BB0DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800BB0E0
  c->r[11]=c->r[1]+0x00000020u; // 800BB0E4
  c->lr=0x800BB0ECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BB0E8
  c->f[30]=c->f[1]; // 800BB0EC
  cmps(c,0,(int32_t)c->r[6],0); // 800BB0F0
  c->f[31]=c->f[2]; // 800BB0F4
  W32(c->r[3]+0x00000008u,c->r[5]); // 800BB0F8
  c->r[26]=c->r[3]|c->r[3]; // 800BB0FC
  c->r[28]=c->r[4]|c->r[4]; // 800BB100
  c->r[29]=c->r[5]|c->r[5]; // 800BB104
  c->r[30]=c->r[7]|c->r[7]; // 800BB108
  if (crb(c,2)) { goto L_800BB268; } // 800BB10C
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB110
  fcmp(c,0,c->f[2],c->f[0]); // 800BB114
  if (!crb(c,0)) { goto L_800BB220; } // 800BB118
  c->r[3]=R32(c->r[4]+0x00000088u); // 800BB11C
  c->r[4]=0u+0x00000000u; // 800BB120
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BB124
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB128
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB12C
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BB130
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BB134
  if (crb(c,0)) { goto L_800BB150; } // 800BB138
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BB13C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB140
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BB144
  if (crb(c,1)) { goto L_800BB150; } // 800BB148
  c->r[4]=0u+0x00000001u; // 800BB14C
L_800BB150:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB150
  if (!crb(c,2)) { goto L_800BB184; } // 800BB154
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BB158
  c->r[3]=0u+0x803F0000u; // 800BB15C
  c->r[5]=0u+0x803F0000u; // 800BB160
  c->r[6]=c->r[26]|c->r[26]; // 800BB164
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB168
  c->r[3]=c->r[3]+0x00001540u; // 800BB16C
  c->r[5]=c->r[5]+0x00001508u; // 800BB170
  c->r[4]=0u+0x00000098u; // 800BB174
  c->r[7]=0u+0x00000000u; // 800BB178
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB17C
  c->lr=0x800BB184u; f_803444BC(c); // 800BB180
L_800BB184:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BB184
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BB188
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BB18C
  cmps(c,0,(int32_t)c->r[0],0); // 800BB190
  if (crb(c,2)) { goto L_800BB218; } // 800BB194
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB198
  c->r[4]=0u+0x00000000u; // 800BB19C
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB1A0
  c->r[31]=R32(c->r[31]+0x00000024u); // 800BB1A4
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BB1A8
  if (crb(c,0)) { goto L_800BB1C4; } // 800BB1AC
  c->r[3]=R32(c->r[31]+0x00000018u); // 800BB1B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB1B4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BB1B8
  if (crb(c,1)) { goto L_800BB1C4; } // 800BB1BC
  c->r[4]=0u+0x00000001u; // 800BB1C0
L_800BB1C4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB1C4
  if (!crb(c,2)) { goto L_800BB1F8; } // 800BB1C8
  c->r[4]=R32(c->r[31]+0x00000018u); // 800BB1CC
  c->r[3]=0u+0x803F0000u; // 800BB1D0
  c->r[5]=0u+0x803F0000u; // 800BB1D4
  c->r[6]=c->r[27]|c->r[27]; // 800BB1D8
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB1DC
  c->r[3]=c->r[3]+0x00001540u; // 800BB1E0
  c->r[5]=c->r[5]+0x00001508u; // 800BB1E4
  c->r[4]=0u+0x00000098u; // 800BB1E8
  c->r[7]=0u+0x00000000u; // 800BB1EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB1F0
  c->lr=0x800BB1F8u; f_803444BC(c); // 800BB1F4
L_800BB1F8:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 800BB1F8
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BB1FC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BB200
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BB204
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BB208
  c->ctr=c->r[12]; // 800BB20C
  if (true) { c->lr=0x800BB214u; dispatch(c,c->ctr); } // 800BB210
  goto L_800BB21C; // 800BB214
L_800BB218:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB218
L_800BB21C:;
  c->f[31]=c->f[1]; // 800BB21C
L_800BB220:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800BB220
  c->f[1]=c->f[30]; // 800BB224
  c->r[3]=c->r[28]|c->r[28]; // 800BB228
  c->r[5]=c->r[29]|c->r[29]; // 800BB22C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800BB230
  c->r[7]=c->r[30]|c->r[30]; // 800BB234
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB238
  {uint32_t ea=c->r[2]+0xFFFF8E70u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BB23C
  c->r[4]=0u+0x00000000u; // 800BB240
  c->r[6]=0u+0xFFFFFFFFu; // 800BB244
  c->ctr=c->r[12]; // 800BB248
  if (true) { c->lr=0x800BB250u; dispatch(c,c->ctr); } // 800BB24C
  c->r[3]=R32(c->r[28]+0x00000088u); // 800BB250
  c->f[1]=c->f[31]; // 800BB254
  c->r[4]=0u+0x00000000u; // 800BB258
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BB25C
  c->lr=0x800BB264u; f_80165194(c); // 800BB260
  goto L_800BB408; // 800BB264
L_800BB268:;
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800BB268
  c->r[6]=c->r[28]|c->r[28]; // 800BB26C
  c->r[5]=R32(c->r[3]+0x00000010u); // 800BB270
  c->r[7]=c->r[29]|c->r[29]; // 800BB274
  c->r[8]=R32(c->r[3]+0x00000014u); // 800BB278
  c->lr=0x800BB280u; f_800BC264(c); // 800BB27C
  cmps(c,0,(int32_t)c->r[3],0); // 800BB280
  W32(c->r[26]+0x00000004u,c->r[3]); // 800BB284
  if (!crb(c,2)) { goto L_800BB3E4; } // 800BB288
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB28C
  fcmp(c,0,c->f[31],c->f[0]); // 800BB290
  if (!crb(c,0)) { goto L_800BB39C; } // 800BB294
  c->r[3]=R32(c->r[28]+0x00000088u); // 800BB298
  c->r[4]=0u+0x00000000u; // 800BB29C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BB2A0
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB2A4
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB2A8
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BB2AC
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BB2B0
  if (crb(c,0)) { goto L_800BB2CC; } // 800BB2B4
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BB2B8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB2BC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BB2C0
  if (crb(c,1)) { goto L_800BB2CC; } // 800BB2C4
  c->r[4]=0u+0x00000001u; // 800BB2C8
L_800BB2CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB2CC
  if (!crb(c,2)) { goto L_800BB300; } // 800BB2D0
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BB2D4
  c->r[3]=0u+0x803F0000u; // 800BB2D8
  c->r[5]=0u+0x803F0000u; // 800BB2DC
  c->r[6]=c->r[27]|c->r[27]; // 800BB2E0
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB2E4
  c->r[3]=c->r[3]+0x00001540u; // 800BB2E8
  c->r[5]=c->r[5]+0x00001508u; // 800BB2EC
  c->r[4]=0u+0x00000098u; // 800BB2F0
  c->r[7]=0u+0x00000000u; // 800BB2F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB2F8
  c->lr=0x800BB300u; f_803444BC(c); // 800BB2FC
L_800BB300:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BB300
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BB304
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BB308
  cmps(c,0,(int32_t)c->r[0],0); // 800BB30C
  if (crb(c,2)) { goto L_800BB394; } // 800BB310
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB314
  c->r[4]=0u+0x00000000u; // 800BB318
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB31C
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BB320
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BB324
  if (crb(c,0)) { goto L_800BB340; } // 800BB328
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BB32C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB330
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BB334
  if (crb(c,1)) { goto L_800BB340; } // 800BB338
  c->r[4]=0u+0x00000001u; // 800BB33C
L_800BB340:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB340
  if (!crb(c,2)) { goto L_800BB374; } // 800BB344
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BB348
  c->r[3]=0u+0x803F0000u; // 800BB34C
  c->r[5]=0u+0x803F0000u; // 800BB350
  c->r[6]=c->r[27]|c->r[27]; // 800BB354
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB358
  c->r[3]=c->r[3]+0x00001540u; // 800BB35C
  c->r[5]=c->r[5]+0x00001508u; // 800BB360
  c->r[4]=0u+0x00000098u; // 800BB364
  c->r[7]=0u+0x00000000u; // 800BB368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB36C
  c->lr=0x800BB374u; f_803444BC(c); // 800BB370
L_800BB374:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BB374
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BB378
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BB37C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BB380
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BB384
  c->ctr=c->r[12]; // 800BB388
  if (true) { c->lr=0x800BB390u; dispatch(c,c->ctr); } // 800BB38C
  goto L_800BB398; // 800BB390
L_800BB394:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB394
L_800BB398:;
  c->f[31]=c->f[1]; // 800BB398
L_800BB39C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800BB39C
  c->f[1]=c->f[30]; // 800BB3A0
  c->r[3]=c->r[28]|c->r[28]; // 800BB3A4
  c->r[5]=c->r[29]|c->r[29]; // 800BB3A8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800BB3AC
  c->r[7]=c->r[30]|c->r[30]; // 800BB3B0
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB3B4
  {uint32_t ea=c->r[2]+0xFFFF8E70u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BB3B8
  c->r[4]=0u+0x00000000u; // 800BB3BC
  c->r[6]=0u+0xFFFFFFFFu; // 800BB3C0
  c->ctr=c->r[12]; // 800BB3C4
  if (true) { c->lr=0x800BB3CCu; dispatch(c,c->ctr); } // 800BB3C8
  c->r[3]=R32(c->r[28]+0x00000088u); // 800BB3CC
  c->f[1]=c->f[31]; // 800BB3D0
  c->r[4]=0u+0x00000000u; // 800BB3D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BB3D8
  c->lr=0x800BB3E0u; f_80165194(c); // 800BB3DC
  goto L_800BB408; // 800BB3E0
L_800BB3E4:;
  c->r[3]=R32(c->r[28]+0x00000088u); // 800BB3E4
  c->r[4]=R32(c->r[26]+0x00000008u); // 800BB3E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BB3EC
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BB3F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800BB3F4
  if (!crb(c,2)) { goto L_800BB408; } // 800BB3F8
  c->r[3]=c->r[26]|c->r[26]; // 800BB3FC
  c->r[4]=c->r[28]|c->r[28]; // 800BB400
  c->lr=0x800BB408u; f_800BC154(c); // 800BB404
L_800BB408:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800BB408
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800BB40C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800BB410
  c->r[11]=c->r[1]+0x00000020u; // 800BB414
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800BB418
  c->lr=0x800BB420u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BB41C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BB420
  c->lr=c->r[0]; // 800BB424
  c->r[1]=c->r[1]+0x00000040u; // 800BB428
  return; // 800BB42C
}

// fn_800BB430
void f_800BB430(Ctx* __restrict c) {
  trace_call(0x800BB430u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB430
  c->r[0]=c->lr; // 800BB434
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BB438
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800BB43C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800BB440
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800BB444
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800BB448
  c->r[11]=c->r[1]+0x00000030u; // 800BB44C
  c->lr=0x800BB454u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BB450
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800BB454
  c->r[28]=c->r[3]|c->r[3]; // 800BB458
  c->r[29]=c->r[4]|c->r[4]; // 800BB45C
  c->r[30]=c->r[5]|c->r[5]; // 800BB460
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800BB464
  if (crb(c,2)) { goto L_800BB47C; } // 800BB468
  cmps(c,0,(int32_t)c->r[0],0); // 800BB46C
  if (crb(c,0)) { goto L_800BB47C; } // 800BB470
  c->r[3]=0u+0x00000000u; // 800BB474
  goto L_800BC12C; // 800BB478
L_800BB47C:;
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800BB47C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800BB480
  if (crb(c,2)) { goto L_800BB4B8; } // 800BB484
  c->r[5]=R32(c->r[4]+0x00000088u); // 800BB488
  {uint32_t ea=c->r[2]+0xFFFF8E70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB48C
  c->r[5]=R32(c->r[5]+0x00000000u); // 800BB490
  c->r[0]=R32(c->r[5]+0x00000014u); // 800BB494
  c->r[5]=R32(c->r[5]+0x00000028u); // 800BB498
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 800BB49C
  c->r[5]=c->r[5]+c->r[0]; // 800BB4A0
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB4A4
  fcmp(c,0,c->f[1],c->f[0]); // 800BB4A8
  if (!crb(c,0)) { goto L_800BB4B8; } // 800BB4AC
  c->r[3]=0u+0x00000001u; // 800BB4B0
  goto L_800BC12C; // 800BB4B4
L_800BB4B8:;
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800BB4B8
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB4BC
  fcmp(c,0,c->f[31],c->f[1]); // 800BB4C0
  if (!crb(c,0)) { goto L_800BB6A4; } // 800BB4C4
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BB4C8
  cmps(c,0,(int32_t)c->r[0],0); // 800BB4CC
  if (crb(c,0)) { goto L_800BB4D8; } // 800BB4D0
  c->r[30]=c->r[0]|c->r[0]; // 800BB4D4
L_800BB4D8:;
  c->r[3]=R32(c->r[4]+0x00000088u); // 800BB4D8
  c->r[4]=0u+0x00000000u; // 800BB4DC
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BB4E0
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB4E4
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB4E8
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BB4EC
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BB4F0
  if (crb(c,0)) { goto L_800BB50C; } // 800BB4F4
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BB4F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB4FC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BB500
  if (crb(c,1)) { goto L_800BB50C; } // 800BB504
  c->r[4]=0u+0x00000001u; // 800BB508
L_800BB50C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB50C
  if (!crb(c,2)) { goto L_800BB540; } // 800BB510
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BB514
  c->r[3]=0u+0x803F0000u; // 800BB518
  c->r[5]=0u+0x803F0000u; // 800BB51C
  c->r[6]=c->r[27]|c->r[27]; // 800BB520
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB524
  c->r[3]=c->r[3]+0x00001540u; // 800BB528
  c->r[5]=c->r[5]+0x00001508u; // 800BB52C
  c->r[4]=0u+0x00000098u; // 800BB530
  c->r[7]=0u+0x00000000u; // 800BB534
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB538
  c->lr=0x800BB540u; f_803444BC(c); // 800BB53C
L_800BB540:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BB540
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BB544
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BB548
  cmps(c,0,(int32_t)c->r[0],0); // 800BB54C
  if (crb(c,2)) { goto L_800BB5D8; } // 800BB550
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB554
  c->r[4]=0u+0x00000000u; // 800BB558
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB55C
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BB560
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BB564
  if (crb(c,0)) { goto L_800BB580; } // 800BB568
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BB56C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB570
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BB574
  if (crb(c,1)) { goto L_800BB580; } // 800BB578
  c->r[4]=0u+0x00000001u; // 800BB57C
L_800BB580:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB580
  if (!crb(c,2)) { goto L_800BB5B4; } // 800BB584
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BB588
  c->r[3]=0u+0x803F0000u; // 800BB58C
  c->r[5]=0u+0x803F0000u; // 800BB590
  c->r[6]=c->r[26]|c->r[26]; // 800BB594
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB598
  c->r[3]=c->r[3]+0x00001540u; // 800BB59C
  c->r[5]=c->r[5]+0x00001508u; // 800BB5A0
  c->r[4]=0u+0x00000098u; // 800BB5A4
  c->r[7]=0u+0x00000000u; // 800BB5A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB5AC
  c->lr=0x800BB5B4u; f_803444BC(c); // 800BB5B0
L_800BB5B4:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BB5B4
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BB5B8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BB5BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BB5C0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BB5C4
  c->ctr=c->r[12]; // 800BB5C8
  if (true) { c->lr=0x800BB5D0u; dispatch(c,c->ctr); } // 800BB5CC
  c->f[31]=c->f[1]; // 800BB5D0
  goto L_800BB5DC; // 800BB5D4
L_800BB5D8:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BB5D8
L_800BB5DC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800BB5DC
  c->r[3]=c->r[29]|c->r[29]; // 800BB5E0
  c->r[0]=R32(c->r[28]+0x0000002Cu); // 800BB5E4
  c->r[5]=c->r[30]|c->r[30]; // 800BB5E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800BB5EC
  c->r[4]=0u+0x00000000u; // 800BB5F0
  c->r[7]=rotl(c->r[0],0)&0x00000007u; // 800BB5F4
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB5F8
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB5FC
  c->r[6]=0u+0xFFFFFFFFu; // 800BB600
  {uint32_t ea=c->r[2]+0xFFFF8E70u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BB604
  c->ctr=c->r[12]; // 800BB608
  if (true) { c->lr=0x800BB610u; dispatch(c,c->ctr); } // 800BB60C
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB610
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB614
  fcmp(c,0,c->f[0],c->f[1]); // 800BB618
  if (!crb(c,2)) { goto L_800BB638; } // 800BB61C
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BB620
  c->f[1]=c->f[31]; // 800BB624
  c->r[4]=0u+0x00000000u; // 800BB628
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BB62C
  c->lr=0x800BB634u; f_80165194(c); // 800BB630
  goto L_800BB69C; // 800BB634
L_800BB638:;
  fcmp(c,0,c->f[1],c->f[0]); // 800BB638
  if (!crb(c,0)) { goto L_800BB68C; } // 800BB63C
  c->lr=0x800BB644u; f_80291D94(c); // 800BB640
  c->r[3]=c->r[3]^0x80000000u; // 800BB644
  c->r[0]=0u+0x43300000u; // 800BB648
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BB64C
  c->r[4]=0u+0x00000000u; // 800BB650
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BB654
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BB658
  {uint32_t ea=c->r[2]+0xFFFF8E78u; c->f[1]=RF64(ea);} // 800BB65C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800BB660
  {uint32_t ea=c->r[2]+0xFFFF8E74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BB664
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800BB668
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB66C
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB670
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BB674
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800BB678
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BB67C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800BB680
  c->lr=0x800BB688u; f_80165194(c); // 800BB684
  goto L_800BB69C; // 800BB688
L_800BB68C:;
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BB68C
  c->r[4]=0u+0x00000000u; // 800BB690
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BB694
  c->lr=0x800BB69Cu; f_80165194(c); // 800BB698
L_800BB69C:;
  c->r[3]=0u+0x00000002u; // 800BB69C
  goto L_800BC12C; // 800BB6A0
L_800BB6A4:;
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BB6A4
  fcmp(c,0,c->f[0],c->f[1]); // 800BB6A8
  if (!crb(c,0)) { goto L_800BBAC4; } // 800BB6AC
  c->r[3]=R32(c->r[4]+0x00000088u); // 800BB6B0
  c->r[4]=0u+0x00000000u; // 800BB6B4
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BB6B8
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB6BC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB6C0
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BB6C4
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BB6C8
  if (crb(c,0)) { goto L_800BB6E4; } // 800BB6CC
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BB6D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB6D4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BB6D8
  if (crb(c,1)) { goto L_800BB6E4; } // 800BB6DC
  c->r[4]=0u+0x00000001u; // 800BB6E0
L_800BB6E4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB6E4
  if (!crb(c,2)) { goto L_800BB718; } // 800BB6E8
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BB6EC
  c->r[3]=0u+0x803F0000u; // 800BB6F0
  c->r[5]=0u+0x803F0000u; // 800BB6F4
  c->r[6]=c->r[27]|c->r[27]; // 800BB6F8
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB6FC
  c->r[3]=c->r[3]+0x00001540u; // 800BB700
  c->r[5]=c->r[5]+0x00001508u; // 800BB704
  c->r[4]=0u+0x00000098u; // 800BB708
  c->r[7]=0u+0x00000000u; // 800BB70C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB710
  c->lr=0x800BB718u; f_803444BC(c); // 800BB714
L_800BB718:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BB718
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BB71C
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BB720
  cmps(c,0,(int32_t)c->r[0],0); // 800BB724
  if (crb(c,2)) { goto L_800BB7AC; } // 800BB728
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB72C
  c->r[4]=0u+0x00000000u; // 800BB730
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB734
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BB738
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BB73C
  if (crb(c,0)) { goto L_800BB758; } // 800BB740
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BB744
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB748
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BB74C
  if (crb(c,1)) { goto L_800BB758; } // 800BB750
  c->r[4]=0u+0x00000001u; // 800BB754
L_800BB758:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB758
  if (!crb(c,2)) { goto L_800BB78C; } // 800BB75C
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BB760
  c->r[3]=0u+0x803F0000u; // 800BB764
  c->r[5]=0u+0x803F0000u; // 800BB768
  c->r[6]=c->r[27]|c->r[27]; // 800BB76C
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB770
  c->r[3]=c->r[3]+0x00001540u; // 800BB774
  c->r[5]=c->r[5]+0x00001508u; // 800BB778
  c->r[4]=0u+0x00000098u; // 800BB77C
  c->r[7]=0u+0x00000000u; // 800BB780
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB784
  c->lr=0x800BB78Cu; f_803444BC(c); // 800BB788
L_800BB78C:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BB78C
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BB790
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BB794
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BB798
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BB79C
  c->ctr=c->r[12]; // 800BB7A0
  if (true) { c->lr=0x800BB7A8u; dispatch(c,c->ctr); } // 800BB7A4
  goto L_800BB7B0; // 800BB7A8
L_800BB7AC:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB7AC
L_800BB7B0:;
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800BB7B0
  fcmp(c,0,c->f[30],c->f[1]); // 800BB7B4
  if (!crb(c,2)) { goto L_800BB7C0; } // 800BB7B8
  {uint32_t ea=c->r[31]+0x00000020u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BB7BC
L_800BB7C0:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB7C0
  c->r[4]=0u+0x00000000u; // 800BB7C4
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB7C8
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BB7CC
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BB7D0
  if (crb(c,0)) { goto L_800BB7EC; } // 800BB7D4
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BB7D8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB7DC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BB7E0
  if (crb(c,1)) { goto L_800BB7EC; } // 800BB7E4
  c->r[4]=0u+0x00000001u; // 800BB7E8
L_800BB7EC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB7EC
  if (!crb(c,2)) { goto L_800BB820; } // 800BB7F0
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BB7F4
  c->r[3]=0u+0x803F0000u; // 800BB7F8
  c->r[5]=0u+0x803F0000u; // 800BB7FC
  c->r[6]=c->r[26]|c->r[26]; // 800BB800
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB804
  c->r[3]=c->r[3]+0x00001540u; // 800BB808
  c->r[5]=c->r[5]+0x00001508u; // 800BB80C
  c->r[4]=0u+0x00000098u; // 800BB810
  c->r[7]=0u+0x00000000u; // 800BB814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB818
  c->lr=0x800BB820u; f_803444BC(c); // 800BB81C
L_800BB820:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BB820
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BB824
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BB828
  cmps(c,0,(int32_t)c->r[0],0); // 800BB82C
  if (crb(c,2)) { goto L_800BB8B4; } // 800BB830
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB834
  c->r[4]=0u+0x00000000u; // 800BB838
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB83C
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BB840
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BB844
  if (crb(c,0)) { goto L_800BB860; } // 800BB848
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BB84C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB850
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BB854
  if (crb(c,1)) { goto L_800BB860; } // 800BB858
  c->r[4]=0u+0x00000001u; // 800BB85C
L_800BB860:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB860
  if (!crb(c,2)) { goto L_800BB894; } // 800BB864
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BB868
  c->r[3]=0u+0x803F0000u; // 800BB86C
  c->r[5]=0u+0x803F0000u; // 800BB870
  c->r[6]=c->r[26]|c->r[26]; // 800BB874
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB878
  c->r[3]=c->r[3]+0x00001540u; // 800BB87C
  c->r[5]=c->r[5]+0x00001508u; // 800BB880
  c->r[4]=0u+0x00000098u; // 800BB884
  c->r[7]=0u+0x00000000u; // 800BB888
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB88C
  c->lr=0x800BB894u; f_803444BC(c); // 800BB890
L_800BB894:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BB894
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BB898
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BB89C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BB8A0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BB8A4
  c->ctr=c->r[12]; // 800BB8A8
  if (true) { c->lr=0x800BB8B0u; dispatch(c,c->ctr); } // 800BB8AC
  goto L_800BB8B8; // 800BB8B0
L_800BB8B4:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BB8B4
L_800BB8B8:;
  fcmp(c,0,c->f[30],c->f[1]); // 800BB8B8
  if (!crb(c,1)) { goto L_800BB8C4; } // 800BB8BC
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800BB8C0
L_800BB8C4:;
  fcmp(c,0,c->f[31],c->f[30]); // 800BB8C4
  c->r[0]=0u+0x00000000u; // 800BB8C8
  if (!crb(c,1)) { goto L_800BB8E0; } // 800BB8CC
  fcmp(c,0,c->f[31],c->f[1]); // 800BB8D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BB8D4
  if (!crb(c,2)) { goto L_800BB8E0; } // 800BB8D8
  c->r[0]=0u+0x00000001u; // 800BB8DC
L_800BB8E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BB8E0
  if (crb(c,2)) { goto L_800BC128; } // 800BB8E4
  c->r[0]=R32(c->r[28]+0x00000014u); // 800BB8E8
  cmps(c,0,(int32_t)c->r[0],0); // 800BB8EC
  if (crb(c,0)) { goto L_800BB8F8; } // 800BB8F0
  c->r[30]=c->r[0]|c->r[0]; // 800BB8F4
L_800BB8F8:;
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BB8F8
  c->r[4]=0u+0x00000000u; // 800BB8FC
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BB900
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB904
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB908
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BB90C
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BB910
  if (crb(c,0)) { goto L_800BB92C; } // 800BB914
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BB918
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB91C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BB920
  if (crb(c,1)) { goto L_800BB92C; } // 800BB924
  c->r[4]=0u+0x00000001u; // 800BB928
L_800BB92C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB92C
  if (!crb(c,2)) { goto L_800BB960; } // 800BB930
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BB934
  c->r[3]=0u+0x803F0000u; // 800BB938
  c->r[5]=0u+0x803F0000u; // 800BB93C
  c->r[6]=c->r[26]|c->r[26]; // 800BB940
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB944
  c->r[3]=c->r[3]+0x00001540u; // 800BB948
  c->r[5]=c->r[5]+0x00001508u; // 800BB94C
  c->r[4]=0u+0x00000098u; // 800BB950
  c->r[7]=0u+0x00000000u; // 800BB954
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB958
  c->lr=0x800BB960u; f_803444BC(c); // 800BB95C
L_800BB960:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BB960
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BB964
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BB968
  cmps(c,0,(int32_t)c->r[0],0); // 800BB96C
  if (crb(c,2)) { goto L_800BB9F8; } // 800BB970
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BB974
  c->r[4]=0u+0x00000000u; // 800BB978
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BB97C
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BB980
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BB984
  if (crb(c,0)) { goto L_800BB9A0; } // 800BB988
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BB98C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BB990
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BB994
  if (crb(c,1)) { goto L_800BB9A0; } // 800BB998
  c->r[4]=0u+0x00000001u; // 800BB99C
L_800BB9A0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BB9A0
  if (!crb(c,2)) { goto L_800BB9D4; } // 800BB9A4
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BB9A8
  c->r[3]=0u+0x803F0000u; // 800BB9AC
  c->r[5]=0u+0x803F0000u; // 800BB9B0
  c->r[6]=c->r[26]|c->r[26]; // 800BB9B4
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BB9B8
  c->r[3]=c->r[3]+0x00001540u; // 800BB9BC
  c->r[5]=c->r[5]+0x00001508u; // 800BB9C0
  c->r[4]=0u+0x00000098u; // 800BB9C4
  c->r[7]=0u+0x00000000u; // 800BB9C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BB9CC
  c->lr=0x800BB9D4u; f_803444BC(c); // 800BB9D0
L_800BB9D4:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BB9D4
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BB9D8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BB9DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BB9E0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BB9E4
  c->ctr=c->r[12]; // 800BB9E8
  if (true) { c->lr=0x800BB9F0u; dispatch(c,c->ctr); } // 800BB9EC
  c->f[30]=c->f[1]; // 800BB9F0
  goto L_800BB9FC; // 800BB9F4
L_800BB9F8:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BB9F8
L_800BB9FC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800BB9FC
  c->r[3]=c->r[29]|c->r[29]; // 800BBA00
  c->r[0]=R32(c->r[28]+0x0000002Cu); // 800BBA04
  c->r[5]=c->r[30]|c->r[30]; // 800BBA08
  c->r[12]=R32(c->r[12]+0x00000010u); // 800BBA0C
  c->r[4]=0u+0x00000000u; // 800BBA10
  c->r[7]=rotl(c->r[0],0)&0x00000007u; // 800BBA14
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBA18
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBA1C
  c->r[6]=0u+0xFFFFFFFFu; // 800BBA20
  {uint32_t ea=c->r[2]+0xFFFF8E70u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BBA24
  c->ctr=c->r[12]; // 800BBA28
  if (true) { c->lr=0x800BBA30u; dispatch(c,c->ctr); } // 800BBA2C
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBA30
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBA34
  fcmp(c,0,c->f[0],c->f[1]); // 800BBA38
  if (!crb(c,2)) { goto L_800BBA58; } // 800BBA3C
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BBA40
  c->f[1]=c->f[30]; // 800BBA44
  c->r[4]=0u+0x00000000u; // 800BBA48
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BBA4C
  c->lr=0x800BBA54u; f_80165194(c); // 800BBA50
  goto L_800BBABC; // 800BBA54
L_800BBA58:;
  fcmp(c,0,c->f[1],c->f[0]); // 800BBA58
  if (!crb(c,0)) { goto L_800BBAAC; } // 800BBA5C
  c->lr=0x800BBA64u; f_80291D94(c); // 800BBA60
  c->r[3]=c->r[3]^0x80000000u; // 800BBA64
  c->r[0]=0u+0x43300000u; // 800BBA68
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BBA6C
  c->r[4]=0u+0x00000000u; // 800BBA70
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BBA74
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BBA78
  {uint32_t ea=c->r[2]+0xFFFF8E78u; c->f[1]=RF64(ea);} // 800BBA7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800BBA80
  {uint32_t ea=c->r[2]+0xFFFF8E74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BBA84
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800BBA88
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBA8C
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBA90
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BBA94
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800BBA98
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BBA9C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800BBAA0
  c->lr=0x800BBAA8u; f_80165194(c); // 800BBAA4
  goto L_800BBABC; // 800BBAA8
L_800BBAAC:;
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BBAAC
  c->r[4]=0u+0x00000000u; // 800BBAB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BBAB4
  c->lr=0x800BBABCu; f_80165194(c); // 800BBAB8
L_800BBABC:;
  c->r[3]=0u+0x00000002u; // 800BBABC
  goto L_800BC12C; // 800BBAC0
L_800BBAC4:;
  c->r[3]=R32(c->r[4]+0x00000088u); // 800BBAC4
  c->r[4]=0u+0x00000000u; // 800BBAC8
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BBACC
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBAD0
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBAD4
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BBAD8
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BBADC
  if (crb(c,0)) { goto L_800BBAF8; } // 800BBAE0
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BBAE4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBAE8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BBAEC
  if (crb(c,1)) { goto L_800BBAF8; } // 800BBAF0
  c->r[4]=0u+0x00000001u; // 800BBAF4
L_800BBAF8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBAF8
  if (!crb(c,2)) { goto L_800BBB2C; } // 800BBAFC
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BBB00
  c->r[3]=0u+0x803F0000u; // 800BBB04
  c->r[5]=0u+0x803F0000u; // 800BBB08
  c->r[6]=c->r[27]|c->r[27]; // 800BBB0C
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBB10
  c->r[3]=c->r[3]+0x00001540u; // 800BBB14
  c->r[5]=c->r[5]+0x00001508u; // 800BBB18
  c->r[4]=0u+0x00000098u; // 800BBB1C
  c->r[7]=0u+0x00000000u; // 800BBB20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBB24
  c->lr=0x800BBB2Cu; f_803444BC(c); // 800BBB28
L_800BBB2C:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BBB2C
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BBB30
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BBB34
  cmps(c,0,(int32_t)c->r[0],0); // 800BBB38
  if (crb(c,2)) { goto L_800BBBC0; } // 800BBB3C
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBB40
  c->r[4]=0u+0x00000000u; // 800BBB44
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBB48
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BBB4C
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BBB50
  if (crb(c,0)) { goto L_800BBB6C; } // 800BBB54
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BBB58
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBB5C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BBB60
  if (crb(c,1)) { goto L_800BBB6C; } // 800BBB64
  c->r[4]=0u+0x00000001u; // 800BBB68
L_800BBB6C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBB6C
  if (!crb(c,2)) { goto L_800BBBA0; } // 800BBB70
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BBB74
  c->r[3]=0u+0x803F0000u; // 800BBB78
  c->r[5]=0u+0x803F0000u; // 800BBB7C
  c->r[6]=c->r[27]|c->r[27]; // 800BBB80
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBB84
  c->r[3]=c->r[3]+0x00001540u; // 800BBB88
  c->r[5]=c->r[5]+0x00001508u; // 800BBB8C
  c->r[4]=0u+0x00000098u; // 800BBB90
  c->r[7]=0u+0x00000000u; // 800BBB94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBB98
  c->lr=0x800BBBA0u; f_803444BC(c); // 800BBB9C
L_800BBBA0:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BBBA0
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BBBA4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BBBA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BBBAC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BBBB0
  c->ctr=c->r[12]; // 800BBBB4
  if (true) { c->lr=0x800BBBBCu; dispatch(c,c->ctr); } // 800BBBB8
  goto L_800BBBC4; // 800BBBBC
L_800BBBC0:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBBC0
L_800BBBC4:;
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800BBBC4
  fcmp(c,0,c->f[30],c->f[1]); // 800BBBC8
  if (!crb(c,2)) { goto L_800BBBD4; } // 800BBBCC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BBBD0
L_800BBBD4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBBD4
  c->r[4]=0u+0x00000000u; // 800BBBD8
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBBDC
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BBBE0
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BBBE4
  if (crb(c,0)) { goto L_800BBC00; } // 800BBBE8
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BBBEC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBBF0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BBBF4
  if (crb(c,1)) { goto L_800BBC00; } // 800BBBF8
  c->r[4]=0u+0x00000001u; // 800BBBFC
L_800BBC00:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBC00
  if (!crb(c,2)) { goto L_800BBC34; } // 800BBC04
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BBC08
  c->r[3]=0u+0x803F0000u; // 800BBC0C
  c->r[5]=0u+0x803F0000u; // 800BBC10
  c->r[6]=c->r[26]|c->r[26]; // 800BBC14
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBC18
  c->r[3]=c->r[3]+0x00001540u; // 800BBC1C
  c->r[5]=c->r[5]+0x00001508u; // 800BBC20
  c->r[4]=0u+0x00000098u; // 800BBC24
  c->r[7]=0u+0x00000000u; // 800BBC28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBC2C
  c->lr=0x800BBC34u; f_803444BC(c); // 800BBC30
L_800BBC34:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BBC34
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BBC38
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BBC3C
  cmps(c,0,(int32_t)c->r[0],0); // 800BBC40
  if (crb(c,2)) { goto L_800BBCC8; } // 800BBC44
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBC48
  c->r[4]=0u+0x00000000u; // 800BBC4C
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBC50
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BBC54
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BBC58
  if (crb(c,0)) { goto L_800BBC74; } // 800BBC5C
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BBC60
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBC64
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BBC68
  if (crb(c,1)) { goto L_800BBC74; } // 800BBC6C
  c->r[4]=0u+0x00000001u; // 800BBC70
L_800BBC74:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBC74
  if (!crb(c,2)) { goto L_800BBCA8; } // 800BBC78
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BBC7C
  c->r[3]=0u+0x803F0000u; // 800BBC80
  c->r[5]=0u+0x803F0000u; // 800BBC84
  c->r[6]=c->r[26]|c->r[26]; // 800BBC88
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBC8C
  c->r[3]=c->r[3]+0x00001540u; // 800BBC90
  c->r[5]=c->r[5]+0x00001508u; // 800BBC94
  c->r[4]=0u+0x00000098u; // 800BBC98
  c->r[7]=0u+0x00000000u; // 800BBC9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBCA0
  c->lr=0x800BBCA8u; f_803444BC(c); // 800BBCA4
L_800BBCA8:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BBCA8
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BBCAC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BBCB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BBCB4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BBCB8
  c->ctr=c->r[12]; // 800BBCBC
  if (true) { c->lr=0x800BBCC4u; dispatch(c,c->ctr); } // 800BBCC0
  goto L_800BBCCC; // 800BBCC4
L_800BBCC8:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBCC8
L_800BBCCC:;
  fcmp(c,0,c->f[30],c->f[1]); // 800BBCCC
  if (!crb(c,1)) { goto L_800BBCD8; } // 800BBCD0
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800BBCD4
L_800BBCD8:;
  fcmp(c,0,c->f[31],c->f[30]); // 800BBCD8
  c->r[0]=0u+0x00000000u; // 800BBCDC
  if (!crb(c,1)) { goto L_800BBCF4; } // 800BBCE0
  fcmp(c,0,c->f[31],c->f[1]); // 800BBCE4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BBCE8
  if (!crb(c,2)) { goto L_800BBCF4; } // 800BBCEC
  c->r[0]=0u+0x00000001u; // 800BBCF0
L_800BBCF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BBCF4
  if (!crb(c,2)) { goto L_800BBF4C; } // 800BBCF8
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BBCFC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BBD00
  c->lr=0x800BBD08u; f_801652C0(c); // 800BBD04
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBD08
  fcmp(c,0,c->f[1],c->f[0]); // 800BBD0C
  if (!crb(c,0)) { goto L_800BBD2C; } // 800BBD10
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BBD14
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBD18
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BBD1C
  c->lr=0x800BBD24u; f_8016498C(c); // 800BBD20
  cmps(c,0,(int32_t)c->r[3],0); // 800BBD24
  if (!crb(c,2)) { goto L_800BBF4C; } // 800BBD28
L_800BBD2C:;
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BBD2C
  c->r[4]=0u+0x00000000u; // 800BBD30
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BBD34
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBD38
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBD3C
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BBD40
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BBD44
  if (crb(c,0)) { goto L_800BBD60; } // 800BBD48
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BBD4C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBD50
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BBD54
  if (crb(c,1)) { goto L_800BBD60; } // 800BBD58
  c->r[4]=0u+0x00000001u; // 800BBD5C
L_800BBD60:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBD60
  if (!crb(c,2)) { goto L_800BBD94; } // 800BBD64
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BBD68
  c->r[3]=0u+0x803F0000u; // 800BBD6C
  c->r[5]=0u+0x803F0000u; // 800BBD70
  c->r[6]=c->r[27]|c->r[27]; // 800BBD74
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBD78
  c->r[3]=c->r[3]+0x00001540u; // 800BBD7C
  c->r[5]=c->r[5]+0x00001508u; // 800BBD80
  c->r[4]=0u+0x00000098u; // 800BBD84
  c->r[7]=0u+0x00000000u; // 800BBD88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBD8C
  c->lr=0x800BBD94u; f_803444BC(c); // 800BBD90
L_800BBD94:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BBD94
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BBD98
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BBD9C
  cmps(c,0,(int32_t)c->r[0],0); // 800BBDA0
  if (crb(c,2)) { goto L_800BBE28; } // 800BBDA4
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBDA8
  c->r[4]=0u+0x00000000u; // 800BBDAC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBDB0
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BBDB4
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BBDB8
  if (crb(c,0)) { goto L_800BBDD4; } // 800BBDBC
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BBDC0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBDC4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BBDC8
  if (crb(c,1)) { goto L_800BBDD4; } // 800BBDCC
  c->r[4]=0u+0x00000001u; // 800BBDD0
L_800BBDD4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBDD4
  if (!crb(c,2)) { goto L_800BBE08; } // 800BBDD8
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BBDDC
  c->r[3]=0u+0x803F0000u; // 800BBDE0
  c->r[5]=0u+0x803F0000u; // 800BBDE4
  c->r[6]=c->r[27]|c->r[27]; // 800BBDE8
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBDEC
  c->r[3]=c->r[3]+0x00001540u; // 800BBDF0
  c->r[5]=c->r[5]+0x00001508u; // 800BBDF4
  c->r[4]=0u+0x00000098u; // 800BBDF8
  c->r[7]=0u+0x00000000u; // 800BBDFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBE00
  c->lr=0x800BBE08u; f_803444BC(c); // 800BBE04
L_800BBE08:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BBE08
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BBE0C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BBE10
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BBE14
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BBE18
  c->ctr=c->r[12]; // 800BBE1C
  if (true) { c->lr=0x800BBE24u; dispatch(c,c->ctr); } // 800BBE20
  goto L_800BBE2C; // 800BBE24
L_800BBE28:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBE28
L_800BBE2C:;
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBE2C
  fcmp(c,0,c->f[1],c->f[0]); // 800BBE30
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BBE34
  if (!crb(c,2)) { goto L_800BC128; } // 800BBE38
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BBE3C
  c->r[4]=0u+0x00000000u; // 800BBE40
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BBE44
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBE48
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBE4C
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BBE50
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BBE54
  if (crb(c,0)) { goto L_800BBE70; } // 800BBE58
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BBE5C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBE60
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BBE64
  if (crb(c,1)) { goto L_800BBE70; } // 800BBE68
  c->r[4]=0u+0x00000001u; // 800BBE6C
L_800BBE70:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBE70
  if (!crb(c,2)) { goto L_800BBEA4; } // 800BBE74
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BBE78
  c->r[3]=0u+0x803F0000u; // 800BBE7C
  c->r[5]=0u+0x803F0000u; // 800BBE80
  c->r[6]=c->r[27]|c->r[27]; // 800BBE84
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBE88
  c->r[3]=c->r[3]+0x00001540u; // 800BBE8C
  c->r[5]=c->r[5]+0x00001508u; // 800BBE90
  c->r[4]=0u+0x00000098u; // 800BBE94
  c->r[7]=0u+0x00000000u; // 800BBE98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBE9C
  c->lr=0x800BBEA4u; f_803444BC(c); // 800BBEA0
L_800BBEA4:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BBEA4
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BBEA8
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BBEAC
  cmps(c,0,(int32_t)c->r[0],0); // 800BBEB0
  if (crb(c,2)) { goto L_800BBF38; } // 800BBEB4
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBEB8
  c->r[4]=0u+0x00000000u; // 800BBEBC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBEC0
  c->r[26]=R32(c->r[31]+0x00000024u); // 800BBEC4
  c->r[27]=c->r[3]+c->r[0]; cr0(c,c->r[27]); // 800BBEC8
  if (crb(c,0)) { goto L_800BBEE4; } // 800BBECC
  c->r[3]=R32(c->r[26]+0x00000018u); // 800BBED0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBED4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800BBED8
  if (crb(c,1)) { goto L_800BBEE4; } // 800BBEDC
  c->r[4]=0u+0x00000001u; // 800BBEE0
L_800BBEE4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBEE4
  if (!crb(c,2)) { goto L_800BBF18; } // 800BBEE8
  c->r[4]=R32(c->r[26]+0x00000018u); // 800BBEEC
  c->r[3]=0u+0x803F0000u; // 800BBEF0
  c->r[5]=0u+0x803F0000u; // 800BBEF4
  c->r[6]=c->r[27]|c->r[27]; // 800BBEF8
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBEFC
  c->r[3]=c->r[3]+0x00001540u; // 800BBF00
  c->r[5]=c->r[5]+0x00001508u; // 800BBF04
  c->r[4]=0u+0x00000098u; // 800BBF08
  c->r[7]=0u+0x00000000u; // 800BBF0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBF10
  c->lr=0x800BBF18u; f_803444BC(c); // 800BBF14
L_800BBF18:;
  c->r[3]=R32(c->r[26]+0x0000001Cu); // 800BBF18
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800BBF1C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BBF20
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BBF24
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BBF28
  c->ctr=c->r[12]; // 800BBF2C
  if (true) { c->lr=0x800BBF34u; dispatch(c,c->ctr); } // 800BBF30
  goto L_800BBF3C; // 800BBF34
L_800BBF38:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BBF38
L_800BBF3C:;
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BBF3C
  fcmp(c,0,c->f[1],c->f[0]); // 800BBF40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800BBF44
  if (!crb(c,2)) { goto L_800BC128; } // 800BBF48
L_800BBF4C:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 800BBF4C
  cmps(c,0,(int32_t)c->r[0],0); // 800BBF50
  if (crb(c,0)) { goto L_800BBF5C; } // 800BBF54
  c->r[30]=c->r[0]|c->r[0]; // 800BBF58
L_800BBF5C:;
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BBF5C
  c->r[4]=0u+0x00000000u; // 800BBF60
  c->r[31]=R32(c->r[3]+0x00000000u); // 800BBF64
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBF68
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBF6C
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BBF70
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BBF74
  if (crb(c,0)) { goto L_800BBF90; } // 800BBF78
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BBF7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBF80
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BBF84
  if (crb(c,1)) { goto L_800BBF90; } // 800BBF88
  c->r[4]=0u+0x00000001u; // 800BBF8C
L_800BBF90:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BBF90
  if (!crb(c,2)) { goto L_800BBFC4; } // 800BBF94
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BBF98
  c->r[3]=0u+0x803F0000u; // 800BBF9C
  c->r[5]=0u+0x803F0000u; // 800BBFA0
  c->r[6]=c->r[26]|c->r[26]; // 800BBFA4
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BBFA8
  c->r[3]=c->r[3]+0x00001540u; // 800BBFAC
  c->r[5]=c->r[5]+0x00001508u; // 800BBFB0
  c->r[4]=0u+0x00000098u; // 800BBFB4
  c->r[7]=0u+0x00000000u; // 800BBFB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBFBC
  c->lr=0x800BBFC4u; f_803444BC(c); // 800BBFC0
L_800BBFC4:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BBFC4
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BBFC8
  c->r[0]=R32(c->r[3]+c->r[0]); // 800BBFCC
  cmps(c,0,(int32_t)c->r[0],0); // 800BBFD0
  if (crb(c,2)) { goto L_800BC05C; } // 800BBFD4
  c->r[3]=R32(c->r[31]+0x00000014u); // 800BBFD8
  c->r[4]=0u+0x00000000u; // 800BBFDC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800BBFE0
  c->r[27]=R32(c->r[31]+0x00000024u); // 800BBFE4
  c->r[26]=c->r[3]+c->r[0]; cr0(c,c->r[26]); // 800BBFE8
  if (crb(c,0)) { goto L_800BC004; } // 800BBFEC
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BBFF0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BBFF4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800BBFF8
  if (crb(c,1)) { goto L_800BC004; } // 800BBFFC
  c->r[4]=0u+0x00000001u; // 800BC000
L_800BC004:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BC004
  if (!crb(c,2)) { goto L_800BC038; } // 800BC008
  c->r[4]=R32(c->r[27]+0x00000018u); // 800BC00C
  c->r[3]=0u+0x803F0000u; // 800BC010
  c->r[5]=0u+0x803F0000u; // 800BC014
  c->r[6]=c->r[26]|c->r[26]; // 800BC018
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800BC01C
  c->r[3]=c->r[3]+0x00001540u; // 800BC020
  c->r[5]=c->r[5]+0x00001508u; // 800BC024
  c->r[4]=0u+0x00000098u; // 800BC028
  c->r[7]=0u+0x00000000u; // 800BC02C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BC030
  c->lr=0x800BC038u; f_803444BC(c); // 800BC034
L_800BC038:;
  c->r[3]=R32(c->r[27]+0x0000001Cu); // 800BC038
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800BC03C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BC040
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BC044
  c->r[12]=R32(c->r[12]+0x00000020u); // 800BC048
  c->ctr=c->r[12]; // 800BC04C
  if (true) { c->lr=0x800BC054u; dispatch(c,c->ctr); } // 800BC050
  c->f[30]=c->f[1]; // 800BC054
  goto L_800BC060; // 800BC058
L_800BC05C:;
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BC05C
L_800BC060:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 800BC060
  c->r[3]=c->r[29]|c->r[29]; // 800BC064
  c->r[0]=R32(c->r[28]+0x0000002Cu); // 800BC068
  c->r[5]=c->r[30]|c->r[30]; // 800BC06C
  c->r[12]=R32(c->r[12]+0x00000010u); // 800BC070
  c->r[4]=0u+0x00000000u; // 800BC074
  c->r[7]=rotl(c->r[0],0)&0x00000007u; // 800BC078
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC07C
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC080
  c->r[6]=0u+0xFFFFFFFFu; // 800BC084
  {uint32_t ea=c->r[2]+0xFFFF8E70u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC088
  c->ctr=c->r[12]; // 800BC08C
  if (true) { c->lr=0x800BC094u; dispatch(c,c->ctr); } // 800BC090
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC094
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC098
  fcmp(c,0,c->f[0],c->f[1]); // 800BC09C
  if (!crb(c,2)) { goto L_800BC0BC; } // 800BC0A0
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BC0A4
  c->f[1]=c->f[30]; // 800BC0A8
  c->r[4]=0u+0x00000000u; // 800BC0AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BC0B0
  c->lr=0x800BC0B8u; f_80165194(c); // 800BC0B4
  goto L_800BC120; // 800BC0B8
L_800BC0BC:;
  fcmp(c,0,c->f[1],c->f[0]); // 800BC0BC
  if (!crb(c,0)) { goto L_800BC110; } // 800BC0C0
  c->lr=0x800BC0C8u; f_80291D94(c); // 800BC0C4
  c->r[3]=c->r[3]^0x80000000u; // 800BC0C8
  c->r[0]=0u+0x43300000u; // 800BC0CC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BC0D0
  c->r[4]=0u+0x00000000u; // 800BC0D4
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BC0D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BC0DC
  {uint32_t ea=c->r[2]+0xFFFF8E78u; c->f[1]=RF64(ea);} // 800BC0E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800BC0E4
  {uint32_t ea=c->r[2]+0xFFFF8E74u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC0E8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800BC0EC
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC0F0
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC0F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BC0F8
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800BC0FC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800BC100
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800BC104
  c->lr=0x800BC10Cu; f_80165194(c); // 800BC108
  goto L_800BC120; // 800BC10C
L_800BC110:;
  c->r[3]=R32(c->r[29]+0x00000088u); // 800BC110
  c->r[4]=0u+0x00000000u; // 800BC114
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BC118
  c->lr=0x800BC120u; f_80165194(c); // 800BC11C
L_800BC120:;
  c->r[3]=0u+0x00000002u; // 800BC120
  goto L_800BC12C; // 800BC124
L_800BC128:;
  c->r[3]=0u+0x00000001u; // 800BC128
L_800BC12C:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800BC12C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800BC130
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 800BC134
  c->r[11]=c->r[1]+0x00000030u; // 800BC138
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800BC13C
  c->lr=0x800BC144u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BC140
  c->r[0]=R32(c->r[1]+0x00000054u); // 800BC144
  c->lr=c->r[0]; // 800BC148
  c->r[1]=c->r[1]+0x00000050u; // 800BC14C
  return; // 800BC150
}

// fn_800BC154
void f_800BC154(Ctx* __restrict c) {
  trace_call(0x800BC154u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC154
  c->r[0]=c->lr; // 800BC158
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC15C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BC160
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BC164
  c->r[30]=c->r[4]|c->r[4]; // 800BC168
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BC16C
  c->r[29]=c->r[3]|c->r[3]; // 800BC170
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BC174
  cmps(c,0,(int32_t)c->r[0],0); // 800BC178
  if (!crb(c,1)) { goto L_800BC248; } // 800BC17C
  c->r[31]=0u+0x00000000u; // 800BC180
  goto L_800BC20C; // 800BC184
L_800BC188:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BC188
  c->r[4]=c->r[30]|c->r[30]; // 800BC18C
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800BC190
  c->r[0]=c->r[0]+c->r[31]; // 800BC194
  c->r[5]=R32(c->r[29]+0x00000008u); // 800BC198
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800BC19C
  c->r[6]=R32(c->r[29]+0x00000014u); // 800BC1A0
  c->r[3]=c->r[3]+c->r[0]; // 800BC1A4
  c->lr=0x800BC1ACu; f_800BB430(c); // 800BC1A8
  cmps(c,0,(int32_t)c->r[3],2); // 800BC1AC
  if (!crb(c,2)) { goto L_800BC200; } // 800BC1B0
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BC1B4
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800BC1B8
  c->r[0]=c->r[0]+c->r[31]; // 800BC1BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 800BC1C0
  c->r[3]=c->r[3]+c->r[0]; // 800BC1C4
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC1C8
  cmps(c,0,(int32_t)c->r[0],-1); // 800BC1CC
  if (crb(c,2)) { goto L_800BC248; } // 800BC1D0
  c->r[5]=R32(c->r[29]+0x00000008u); // 800BC1D4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800BC1D8
  if (crb(c,2)) { goto L_800BC248; } // 800BC1DC
  {uint32_t ea=c->r[2]+0xFFFF8E80u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC1E0
  c->r[3]=c->r[29]|c->r[29]; // 800BC1E4
  {uint32_t ea=c->r[2]+0xFFFF8E68u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC1E8
  c->r[4]=c->r[30]|c->r[30]; // 800BC1EC
  c->r[6]=0u+0x00000000u; // 800BC1F0
  c->r[7]=0u+0x00000000u; // 800BC1F4
  c->lr=0x800BC1FCu; f_800BB0C8(c); // 800BC1F8
  goto L_800BC248; // 800BC1FC
L_800BC200:;
  cmps(c,0,(int32_t)c->r[3],1); // 800BC200
  if (crb(c,2)) { goto L_800BC248; } // 800BC204
  c->r[31]=c->r[31]+0x00000001u; // 800BC208
L_800BC20C:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800BC20C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800BC210
  if (crb(c,0)) { IRQCHK(c); goto L_800BC188; } // 800BC214
  c->r[12]=R32(c->r[30]+0x00000000u); // 800BC218
  c->r[3]=c->r[30]|c->r[30]; // 800BC21C
  c->r[5]=R32(c->r[29]+0x00000008u); // 800BC220
  c->r[4]=0u+0x00000000u; // 800BC224
  c->r[12]=R32(c->r[12]+0x00000010u); // 800BC228
  c->r[6]=0u+0xFFFFFFFFu; // 800BC22C
  {uint32_t ea=c->r[2]+0xFFFF8E84u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC230
  c->r[7]=0u+0x00000000u; // 800BC234
  {uint32_t ea=c->r[2]+0xFFFF8E6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC238
  {uint32_t ea=c->r[2]+0xFFFF8E70u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC23C
  c->ctr=c->r[12]; // 800BC240
  if (true) { c->lr=0x800BC248u; dispatch(c,c->ctr); } // 800BC244
L_800BC248:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC248
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BC24C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BC250
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BC254
  c->lr=c->r[0]; // 800BC258
  c->r[1]=c->r[1]+0x00000020u; // 800BC25C
  return; // 800BC260
}

// fn_800BC264
void f_800BC264(Ctx* __restrict c) {
  trace_call(0x800BC264u);
  c->r[9]=c->r[4]|c->r[4]; // 800BC264
  c->r[12]=0u+0x00000000u; // 800BC268
  c->r[11]=0u+0x00000000u; // 800BC26C
  c->ctr=c->r[5]; // 800BC270
  cmps(c,0,(int32_t)c->r[5],0); // 800BC274
  if (!crb(c,1)) { goto L_800BC2D0; } // 800BC278
L_800BC27C:;
  c->r[10]=R32(c->r[9]+0x00000004u); // 800BC27C
  c->r[8]=0u+0x00000000u; // 800BC280
  cmps(c,0,(int32_t)c->r[10],-1); // 800BC284
  if (!crb(c,2)) { goto L_800BC294; } // 800BC288
  c->r[8]=c->r[8]|0x00000001u; // 800BC28C
  goto L_800BC2B4; // 800BC290
L_800BC294:;
  c->r[7]=R32(c->r[6]+0x00000088u); // 800BC294
  c->r[7]=R32(c->r[7]+0x00000000u); // 800BC298
  c->r[0]=R32(c->r[7]+0x00000018u); // 800BC29C
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 800BC2A0
  if (!crb(c,2)) { goto L_800BC2B0; } // 800BC2A4
  c->r[8]=c->r[8]|0x00000002u; // 800BC2A8
  goto L_800BC2B4; // 800BC2AC
L_800BC2B0:;
  c->r[8]=0u+0x00000000u; // 800BC2B0
L_800BC2B4:;
  cmps(c,0,(int32_t)c->r[8],0); // 800BC2B4
  if (!crb(c,1)) { goto L_800BC2C4; } // 800BC2B8
  c->r[12]=c->r[8]|c->r[8]; // 800BC2BC
  goto L_800BC2D0; // 800BC2C0
L_800BC2C4:;
  c->r[9]=c->r[9]+0x00000030u; // 800BC2C4
  c->r[11]=c->r[11]+0x00000001u; // 800BC2C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC27C; } // 800BC2CC
L_800BC2D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BC2D0
  if (crb(c,2)) { goto L_800BC2DC; } // 800BC2D4
  W32(c->r[3]+0x00000000u,c->r[11]); // 800BC2D8
L_800BC2DC:;
  c->r[3]=(uint32_t)((int32_t)c->r[11]*(int32_t)48); // 800BC2DC
  c->r[0]=c->r[5]-c->r[11]; // 800BC2E0
  c->r[8]=c->r[11]|c->r[11]; // 800BC2E4
  c->r[7]=c->r[4]+c->r[3]; // 800BC2E8
  c->ctr=c->r[0]; // 800BC2EC
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[5]); // 800BC2F0
  if (!crb(c,0)) { goto L_800BC34C; } // 800BC2F4
L_800BC2F8:;
  c->r[5]=R32(c->r[7]+0x00000004u); // 800BC2F8
  c->r[4]=0u+0x00000000u; // 800BC2FC
  cmps(c,0,(int32_t)c->r[5],-1); // 800BC300
  if (!crb(c,2)) { goto L_800BC310; } // 800BC304
  c->r[4]=c->r[4]|0x00000001u; // 800BC308
  goto L_800BC330; // 800BC30C
L_800BC310:;
  c->r[3]=R32(c->r[6]+0x00000088u); // 800BC310
  c->r[3]=R32(c->r[3]+0x00000000u); // 800BC314
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC318
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800BC31C
  if (!crb(c,2)) { goto L_800BC32C; } // 800BC320
  c->r[4]=c->r[4]|0x00000002u; // 800BC324
  goto L_800BC330; // 800BC328
L_800BC32C:;
  c->r[4]=0u+0x00000000u; // 800BC32C
L_800BC330:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[12]); // 800BC330
  if (crb(c,2)) { goto L_800BC340; } // 800BC334
  c->r[3]=c->r[8]-c->r[11]; // 800BC338
  return; // 800BC33C
L_800BC340:;
  c->r[7]=c->r[7]+0x00000030u; // 800BC340
  c->r[8]=c->r[8]+0x00000001u; // 800BC344
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BC2F8; } // 800BC348
L_800BC34C:;
  c->r[3]=c->r[8]-c->r[11]; // 800BC34C
  return; // 800BC350
}

// fn_800BC354
void f_800BC354(Ctx* __restrict c) {
  trace_call(0x800BC354u);
  c->r[0]=c->r[3]+0x00001F18u; // 800BC354
  W32(c->r[3]+0x00000994u,c->r[0]); // 800BC358
  f_800AD4DC(c); return; // 800BC35C
}

// fn_800BC360
void f_800BC360(Ctx* __restrict c) {
  trace_call(0x800BC360u);
  f_800ADD70(c); return; // 800BC360
}

// fn_800BC364
void f_800BC364(Ctx* __restrict c) {
  trace_call(0x800BC364u);
  {uint32_t ea=c->r[1]+0xFFFFDB90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC364
  c->r[0]=c->lr; // 800BC368
  W32(c->r[1]+0x00002474u,c->r[0]); // 800BC36C
  c->r[0]=0u+0x00002468u; // 800BC370
  {uint32_t ea=c->r[1]+0x00002460u; WF64(ea,c->f[31]);} // 800BC374
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 800BC378
  c->r[0]=0u+0x00002458u; // 800BC37C
  {uint32_t ea=c->r[1]+0x00002450u; WF64(ea,c->f[30]);} // 800BC380
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,30,ea,0,0);} // 800BC384
  c->r[0]=0u+0x00002448u; // 800BC388
  {uint32_t ea=c->r[1]+0x00002440u; WF64(ea,c->f[29]);} // 800BC38C
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,29,ea,0,0);} // 800BC390
  c->r[0]=0u+0x00002438u; // 800BC394
  {uint32_t ea=c->r[1]+0x00002430u; WF64(ea,c->f[28]);} // 800BC398
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,28,ea,0,0);} // 800BC39C
  c->r[0]=0u+0x00002428u; // 800BC3A0
  {uint32_t ea=c->r[1]+0x00002420u; WF64(ea,c->f[27]);} // 800BC3A4
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,27,ea,0,0);} // 800BC3A8
  c->r[11]=c->r[1]+0x00002420u; // 800BC3AC
  c->lr=0x800BC3B4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BC3B0
  c->f[27]=c->f[1]; // 800BC3B4
  cmps(c,0,(int32_t)c->r[5],0); // 800BC3B8
  c->f[28]=c->f[2]; // 800BC3BC
  c->r[25]=c->r[3]|c->r[3]; // 800BC3C0
  c->f[29]=c->f[3]; // 800BC3C4
  c->r[30]=c->r[4]|c->r[4]; // 800BC3C8
  c->f[30]=c->ps1[30]=S(c->f[1]*c->f[1]); // 800BC3CC
  c->r[31]=c->r[5]|c->r[5]; // 800BC3D0
  c->r[27]=0u+0x00000005u; // 800BC3D4
  if (crb(c,2)) { goto L_800BC428; } // 800BC3D8
  c->r[12]=R32(c->r[31]+0x00000010u); // 800BC3DC
  c->r[3]=c->r[31]|c->r[31]; // 800BC3E0
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BC3E4
  c->ctr=c->r[12]; // 800BC3E8
  if (true) { c->lr=0x800BC3F0u; dispatch(c,c->ctr); } // 800BC3EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BC3F0
  c->r[4]=c->r[3]|c->r[3]; // 800BC3F4
  c->r[5]=c->r[25]|c->r[25]; // 800BC3F8
  c->r[3]=c->r[1]+0x00000160u; // 800BC3FC
  c->r[12]=R32(c->r[12]+0x00000038u); // 800BC400
  c->ctr=c->r[12]; // 800BC404
  if (true) { c->lr=0x800BC40Cu; dispatch(c,c->ctr); } // 800BC408
  c->r[3]=c->r[1]+0x00000070u; // 800BC40C
  c->r[4]=c->r[1]+0x00000160u; // 800BC410
  c->lr=0x800BC418u; f_80032FD8(c); // 800BC414
  c->r[3]=c->r[1]+0x000000A0u; // 800BC418
  c->r[4]=c->r[1]+0x00000070u; // 800BC41C
  c->lr=0x800BC424u; f_8003F468(c); // 800BC420
  goto L_800BC43C; // 800BC424
L_800BC428:;
  c->lr=0x800BC42Cu; f_80061A4C(c); // 800BC428
  c->r[4]=c->r[3]|c->r[3]; // 800BC42C
  c->r[3]=c->r[1]+0x000000A0u; // 800BC430
  c->r[4]=c->r[4]+0x00000384u; // 800BC434
  c->lr=0x800BC43Cu; f_8003F468(c); // 800BC438
L_800BC43C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800BC43C
  if (!crb(c,2)) { goto L_800BC744; } // 800BC440
  c->lr=0x800BC448u; f_8003DA30(c); // 800BC444
  c->lr=0x800BC44Cu; f_8003ED58(c); // 800BC448
  W32(c->r[1]+0x00000024u,c->r[3]); // 800BC44C
  c->r[28]=0u+0xE0000000u; // 800BC450
  c->r[29]=0u+0x803E0000u; // 800BC454
  goto L_800BC718; // 800BC458
L_800BC45C:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 800BC45C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800BC460
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BC464
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BC468
  c->ctr=c->r[12]; // 800BC46C
  if (true) { c->lr=0x800BC474u; dispatch(c,c->ctr); } // 800BC470
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800BC474
  c->r[4]=0u+0xC0000000u; // 800BC478
  W32(c->r[1]+0x00000068u,c->r[3]); // 800BC47C
  c->r[3]=c->r[1]+0x00000068u; // 800BC480
  c->lr=0x800BC488u; f_8003EDD0(c); // 800BC484
  cmps(c,0,(int32_t)c->r[3],0); // 800BC488
  if (crb(c,2)) { goto L_800BC70C; } // 800BC48C
  c->r[3]=R32(c->r[1]+0x00000024u); // 800BC490
  c->r[26]=c->r[3]+0xFFFFFFF8u; // 800BC494
  c->r[12]=R32(c->r[26]+0x00000010u); // 800BC498
  c->r[3]=c->r[26]|c->r[26]; // 800BC49C
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BC4A0
  c->ctr=c->r[12]; // 800BC4A4
  if (true) { c->lr=0x800BC4ACu; dispatch(c,c->ctr); } // 800BC4A8
  c->r[4]=c->r[3]|c->r[3]; // 800BC4AC
  c->r[3]=c->r[1]+0x00000130u; // 800BC4B0
  c->r[12]=R32(c->r[4]+0x00000000u); // 800BC4B4
  c->r[12]=R32(c->r[12]+0x00000040u); // 800BC4B8
  c->ctr=c->r[12]; // 800BC4BC
  if (true) { c->lr=0x800BC4C4u; dispatch(c,c->ctr); } // 800BC4C0
  c->r[3]=c->r[1]+0x00000094u; // 800BC4C4
  c->r[4]=c->r[1]+0x00000130u; // 800BC4C8
  c->lr=0x800BC4D0u; f_80032FD8(c); // 800BC4CC
  c->r[12]=R32(c->r[26]+0x00000010u); // 800BC4D0
  c->r[3]=c->r[26]|c->r[26]; // 800BC4D4
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BC4D8
  c->ctr=c->r[12]; // 800BC4DC
  if (true) { c->lr=0x800BC4E4u; dispatch(c,c->ctr); } // 800BC4E0
  c->r[4]=c->r[3]|c->r[3]; // 800BC4E4
  c->r[3]=c->r[1]+0x00000100u; // 800BC4E8
  c->r[12]=R32(c->r[4]+0x00000000u); // 800BC4EC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800BC4F0
  c->ctr=c->r[12]; // 800BC4F4
  if (true) { c->lr=0x800BC4FCu; dispatch(c,c->ctr); } // 800BC4F8
  c->r[3]=c->r[1]+0x00000088u; // 800BC4FC
  c->r[4]=c->r[1]+0x00000100u; // 800BC500
  c->lr=0x800BC508u; f_800BC9F4(c); // 800BC504
  c->r[3]=R32(c->r[1]+0x00000024u); // 800BC508
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800BC50C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BC510
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BC514
  c->ctr=c->r[12]; // 800BC518
  if (true) { c->lr=0x800BC520u; dispatch(c,c->ctr); } // 800BC51C
  W32(c->r[1]+0x00000064u,c->r[4]); // 800BC520
  c->r[4]=c->r[28]+0x00000002u; // 800BC524
  W32(c->r[1]+0x00000060u,c->r[3]); // 800BC528
  c->r[3]=c->r[1]+0x00000060u; // 800BC52C
  c->lr=0x800BC534u; f_8003EDD0(c); // 800BC530
  cmps(c,0,(int32_t)c->r[3],0); // 800BC534
  if (crb(c,2)) { goto L_800BC5D0; } // 800BC538
  c->r[12]=R32(c->r[26]+0x00000010u); // 800BC53C
  c->r[3]=c->r[26]|c->r[26]; // 800BC540
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BC544
  c->ctr=c->r[12]; // 800BC548
  if (true) { c->lr=0x800BC550u; dispatch(c,c->ctr); } // 800BC54C
  c->r[4]=c->r[29]+0xFFFFA848u; // 800BC550
  c->lr=0x800BC558u; f_8002C058(c); // 800BC554
  cmps(c,0,(int32_t)c->r[3],0); // 800BC558
  c->r[25]=c->r[3]|c->r[3]; // 800BC55C
  if (crb(c,0)) { goto L_800BC5D0; } // 800BC560
  c->r[12]=R32(c->r[26]+0x00000010u); // 800BC564
  c->r[3]=c->r[26]|c->r[26]; // 800BC568
  c->r[12]=R32(c->r[12]+0x00000338u); // 800BC56C
  c->ctr=c->r[12]; // 800BC570
  if (true) { c->lr=0x800BC578u; dispatch(c,c->ctr); } // 800BC574
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BC578
  c->r[4]=c->r[3]|c->r[3]; // 800BC57C
  c->r[5]=c->r[25]|c->r[25]; // 800BC580
  c->r[3]=c->r[1]+0x000000D0u; // 800BC584
  c->r[12]=R32(c->r[12]+0x00000034u); // 800BC588
  c->ctr=c->r[12]; // 800BC58C
  if (true) { c->lr=0x800BC594u; dispatch(c,c->ctr); } // 800BC590
  c->r[3]=c->r[1]+0x0000007Cu; // 800BC594
  c->r[4]=c->r[1]+0x000000D0u; // 800BC598
  c->lr=0x800BC5A0u; f_80032FD8(c); // 800BC59C
  c->r[3]=c->r[1]+0x000000A0u; // 800BC5A0
  c->r[4]=c->r[1]+0x00000094u; // 800BC5A4
  c->lr=0x800BC5ACu; f_80265924(c); // 800BC5A8
  c->f[31]=c->f[1]; // 800BC5AC
  c->r[3]=c->r[1]+0x000000A0u; // 800BC5B0
  c->r[4]=c->r[1]+0x0000007Cu; // 800BC5B4
  c->lr=0x800BC5BCu; f_80265924(c); // 800BC5B8
  fcmp(c,0,c->f[1],c->f[31]); // 800BC5BC
  if (!crb(c,0)) { goto L_800BC5D0; } // 800BC5C0
  c->r[3]=c->r[1]+0x00000094u; // 800BC5C4
  c->r[4]=c->r[1]+0x0000007Cu; // 800BC5C8
  c->lr=0x800BC5D0u; f_8003F468(c); // 800BC5CC
L_800BC5D0:;
  c->r[3]=c->r[1]+0x000000A0u; // 800BC5D0
  c->r[4]=c->r[1]+0x00000094u; // 800BC5D4
  c->lr=0x800BC5DCu; f_80265924(c); // 800BC5D8
  fcmp(c,0,c->f[1],c->f[30]); // 800BC5DC
  if (!crb(c,0)) { goto L_800BC70C; } // 800BC5E0
  c->r[3]=c->r[1]+0x00000654u; // 800BC5E4
  c->lr=0x800BC5ECu; f_800BCA04(c); // 800BC5E8
  c->r[3]=c->r[1]+0x00000654u; // 800BC5EC
  c->r[4]=c->r[1]+0x00000094u; // 800BC5F0
  c->r[5]=0u+0x00000000u; // 800BC5F4
  c->lr=0x800BC5FCu; f_800BCA64(c); // 800BC5F8
  c->r[3]=c->r[1]+0x00000654u; // 800BC5FC
  c->r[4]=c->r[1]+0x00000088u; // 800BC600
  c->r[5]=0u+0x00000000u; // 800BC604
  c->lr=0x800BC60Cu; f_800BCA94(c); // 800BC608
  c->r[25]=R8(c->r[31]+0x00000891u); // 800BC60C
  c->r[25]=(uint32_t)(int32_t)(int8_t)c->r[25]; cr0(c,c->r[25]); // 800BC610
  if (!crb(c,0)) { goto L_800BC61C; } // 800BC614
  c->r[25]=R32(c->r[31]+0x00000898u); // 800BC618
L_800BC61C:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 800BC61C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800BC620
  c->r[12]=R32(c->r[3]+0x00000010u); // 800BC624
  c->r[12]=R32(c->r[12]+0x00000008u); // 800BC628
  c->ctr=c->r[12]; // 800BC62C
  if (true) { c->lr=0x800BC634u; dispatch(c,c->ctr); } // 800BC630
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800BC634
  c->r[4]=c->r[28]+0x00000002u; // 800BC638
  W32(c->r[1]+0x00000058u,c->r[3]); // 800BC63C
  c->r[3]=c->r[1]+0x00000058u; // 800BC640
  c->lr=0x800BC648u; f_8003EDD0(c); // 800BC644
  cmps(c,0,(int32_t)c->r[3],0); // 800BC648
  if (crb(c,2)) { goto L_800BC6B4; } // 800BC64C
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 800BC650
  if (!crb(c,1)) { goto L_800BC70C; } // 800BC654
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC658
  c->f[1]=c->f[28]; // 800BC65C
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC660
  c->r[6]=c->r[30]|c->r[30]; // 800BC664
  c->f[4]=c->f[3]; // 800BC668
  c->r[7]=c->r[25]|c->r[25]; // 800BC66C
  c->f[5]=c->f[3]; // 800BC670
  c->r[3]=c->r[1]+0x000004D0u; // 800BC674
  c->r[4]=c->r[1]+0x000000A0u; // 800BC678
  c->r[5]=c->r[1]+0x00000654u; // 800BC67C
  c->lr=0x800BC684u; f_800BCAC4(c); // 800BC680
  c->r[6]=R32(c->r[1]+0x00000024u); // 800BC684
  c->r[3]=c->r[1]+0x00000050u; // 800BC688
  c->r[4]=c->r[1]+0x000004D0u; // 800BC68C
  c->r[5]=R32(c->r[6]+0xFFFFFFF8u); // 800BC690
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800BC694
  W32(c->r[1]+0x00000050u,c->r[5]); // 800BC698
  W32(c->r[1]+0x00000054u,c->r[0]); // 800BC69C
  c->lr=0x800BC6A4u; f_800B1AD4(c); // 800BC6A0
  c->r[3]=c->r[1]+0x000004D0u; // 800BC6A4
  c->r[4]=0u+0xFFFFFFFFu; // 800BC6A8
  c->lr=0x800BC6B0u; f_8006BCB4(c); // 800BC6AC
  goto L_800BC70C; // 800BC6B0
L_800BC6B4:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC6B4
  c->f[1]=c->f[28]; // 800BC6B8
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC6BC
  c->r[6]=c->r[30]|c->r[30]; // 800BC6C0
  c->f[4]=c->f[3]; // 800BC6C4
  c->r[7]=c->r[25]|c->r[25]; // 800BC6C8
  c->f[5]=c->f[3]; // 800BC6CC
  c->r[3]=c->r[1]+0x0000034Cu; // 800BC6D0
  c->r[4]=c->r[1]+0x000000A0u; // 800BC6D4
  c->r[5]=c->r[1]+0x00000654u; // 800BC6D8
  c->lr=0x800BC6E0u; f_800BCAC4(c); // 800BC6DC
  c->r[6]=R32(c->r[1]+0x00000024u); // 800BC6E0
  c->r[3]=c->r[1]+0x00000048u; // 800BC6E4
  c->r[4]=c->r[1]+0x0000034Cu; // 800BC6E8
  c->r[5]=R32(c->r[6]+0xFFFFFFF8u); // 800BC6EC
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800BC6F0
  W32(c->r[1]+0x00000048u,c->r[5]); // 800BC6F4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800BC6F8
  c->lr=0x800BC700u; f_800B1AD4(c); // 800BC6FC
  c->r[3]=c->r[1]+0x0000034Cu; // 800BC700
  c->r[4]=0u+0xFFFFFFFFu; // 800BC704
  c->lr=0x800BC70Cu; f_8006BCB4(c); // 800BC708
L_800BC70C:;
  c->r[3]=c->r[1]+0x00000024u; // 800BC70C
  c->r[4]=0u+0x00000000u; // 800BC710
  c->lr=0x800BC718u; f_8003ED68(c); // 800BC714
L_800BC718:;
  c->lr=0x800BC71Cu; f_8003DA30(c); // 800BC718
  c->lr=0x800BC720u; f_8003ECFC(c); // 800BC71C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC720
  c->r[4]=c->r[1]+0x00000018u; // 800BC724
  W32(c->r[1]+0x00000018u,c->r[3]); // 800BC728
  c->r[3]=c->r[1]+0x0000001Cu; // 800BC72C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800BC730
  c->lr=0x800BC738u; f_8003ED7C(c); // 800BC734
  cmps(c,0,(int32_t)c->r[3],0); // 800BC738
  if (!crb(c,2)) { IRQCHK(c); goto L_800BC45C; } // 800BC73C
  goto L_800BC908; // 800BC740
L_800BC744:;
  c->f[1]=c->f[27]; // 800BC744
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC748
  c->r[3]=c->r[1]+0x00000190u; // 800BC74C
  c->r[4]=c->r[1]+0x000000A0u; // 800BC750
  c->lr=0x800BC758u; f_800BCC9C(c); // 800BC754
  c->r[0]=R32(c->r[31]+0x000008A0u); // 800BC758
  c->r[3]=c->r[1]+0x0000019Cu; // 800BC75C
  c->r[4]=c->r[1]+0x00000040u; // 800BC760
  W32(c->r[1]+0x000001ACu,c->r[0]); // 800BC764
  c->r[5]=R32(c->r[31]+0x00000000u); // 800BC768
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BC76C
  W32(c->r[1]+0x00000040u,c->r[5]); // 800BC770
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BC774
  c->lr=0x800BC77Cu; f_80063D44(c); // 800BC778
  c->r[0]=0u+0x00000000u; // 800BC77C
  W32(c->r[1]+0x00000190u,c->r[0]); // 800BC780
  c->lr=0x800BC788u; f_8003DA30(c); // 800BC784
  c->lr=0x800BC78Cu; f_8003ED58(c); // 800BC788
  W32(c->r[1]+0x00000020u,c->r[3]); // 800BC78C
  c->r[3]=c->r[1]+0x000015CCu; // 800BC790
  c->lr=0x800BC798u; f_8003F3AC(c); // 800BC794
  c->r[0]=R32(c->r[1]+0x00000020u); // 800BC798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC79C
  c->lr=0x800BC7A4u; f_8003DA30(c); // 800BC7A0
  c->r[4]=c->r[1]+0x00000190u; // 800BC7A4
  c->r[5]=c->r[1]+0x00000014u; // 800BC7A8
  c->r[6]=c->r[1]+0x000015CCu; // 800BC7AC
  c->lr=0x800BC7B4u; f_8003E788(c); // 800BC7B0
  W32(c->r[1]+0x00000020u,c->r[3]); // 800BC7B4
  c->r[25]=R8(c->r[31]+0x00000891u); // 800BC7B8
  c->r[25]=(uint32_t)(int32_t)(int8_t)c->r[25]; cr0(c,c->r[25]); // 800BC7BC
  if (!crb(c,0)) { goto L_800BC7C8; } // 800BC7C0
  c->r[25]=R32(c->r[31]+0x00000898u); // 800BC7C4
L_800BC7C8:;
  c->r[29]=0u+0x803F0000u; // 800BC7C8
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800BC7CC
  c->r[29]=c->r[29]+0x0000244Cu; // 800BC7D0
  goto L_800BC884; // 800BC7D4
L_800BC7D8:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 800BC7D8
  c->f[1]=c->f[28]; // 800BC7DC
  c->r[0]=R32(c->r[31]+0x000008A0u); // 800BC7E0
  c->r[7]=c->r[30]|c->r[30]; // 800BC7E4
  c->r[3]=R32(c->r[3]+0x00000020u); // 800BC7E8
  c->r[8]=c->r[25]|c->r[25]; // 800BC7EC
  {uint32_t ea=c->r[2]+0xFFFF8E88u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC7F0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC7F4
  c->r[3]=c->r[1]+0x000001C8u; // 800BC7F8
  c->r[4]=c->r[1]+0x000000A0u; // 800BC7FC
  c->r[5]=c->r[1]+0x00001604u; // 800BC800
  c->r[9]=R32(c->r[31]+0x00000000u); // 800BC804
  c->r[6]=c->r[1]+0x00000028u; // 800BC808
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BC80C
  W32(c->r[1]+0x00000028u,c->r[9]); // 800BC810
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800BC814
  c->lr=0x800BC81Cu; f_8003FF2C(c); // 800BC818
  W32(c->r[1]+0x000001C8u,c->r[29]); // 800BC81C
  c->r[3]=c->r[1]+0x00000038u; // 800BC820
  c->r[6]=R32(c->r[1]+0x00000020u); // 800BC824
  c->r[4]=c->r[1]+0x000001C8u; // 800BC828
  {uint32_t ea=c->r[1]+0x00000340u; WF32(ea,c->f[31]);} // 800BC82C
  {uint32_t ea=c->r[1]+0x00000344u; WF32(ea,c->f[31]);} // 800BC830
  {uint32_t ea=c->r[1]+0x00000348u; WF32(ea,c->f[31]);} // 800BC834
  c->r[5]=R32(c->r[6]+0xFFFFFFF8u); // 800BC838
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800BC83C
  W32(c->r[1]+0x00000038u,c->r[5]); // 800BC840
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800BC844
  c->lr=0x800BC84Cu; f_800B1AD4(c); // 800BC848
  c->r[3]=c->r[1]+0x000001C8u; // 800BC84C
  c->r[4]=0u+0xFFFFFFFFu; // 800BC850
  c->lr=0x800BC858u; f_8006BCB4(c); // 800BC854
  c->r[3]=c->r[1]+0x00000020u; // 800BC858
  c->r[4]=0u+0x00000000u; // 800BC85C
  c->lr=0x800BC864u; f_8003ED68(c); // 800BC860
  c->r[0]=R32(c->r[1]+0x00000020u); // 800BC864
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BC868
  c->lr=0x800BC870u; f_8003DA30(c); // 800BC86C
  c->r[4]=c->r[1]+0x00000190u; // 800BC870
  c->r[5]=c->r[1]+0x00000010u; // 800BC874
  c->r[6]=c->r[1]+0x000015CCu; // 800BC878
  c->lr=0x800BC880u; f_8003E788(c); // 800BC87C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800BC880
L_800BC884:;
  c->lr=0x800BC888u; f_8003DA30(c); // 800BC884
  c->lr=0x800BC88Cu; f_8003ECFC(c); // 800BC888
  c->r[0]=R32(c->r[1]+0x00000020u); // 800BC88C
  c->r[4]=c->r[1]+0x00000008u; // 800BC890
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BC894
  c->r[3]=c->r[1]+0x0000000Cu; // 800BC898
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BC89C
  c->lr=0x800BC8A4u; f_8003ED7C(c); // 800BC8A0
  cmps(c,0,(int32_t)c->r[3],0); // 800BC8A4
  if (!crb(c,2)) { IRQCHK(c); goto L_800BC7D8; } // 800BC8A8
  c->r[3]=c->r[1]+0x00000798u; // 800BC8AC
  c->lr=0x800BC8B4u; f_8003F3AC(c); // 800BC8B0
  c->lr=0x800BC8B8u; f_8015D64C(c); // 800BC8B4
  {uint32_t ea=c->r[2]+0xFFFF8E90u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC8B8
  c->r[4]=c->r[1]+0x00000798u; // 800BC8BC
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC8C0
  c->r[5]=c->r[1]+0x00000190u; // 800BC8C4
  c->r[6]=R8(c->r[31]+0x00000891u); // 800BC8C8
  c->r[7]=0u+0x00000002u; // 800BC8CC
  {uint32_t ea=c->r[2]+0xFFFF8E94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC8D0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800BC8D4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC8D8
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800BC8DC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800BC8E0
  {uint32_t ea=c->r[2]+0xFFFF8E98u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BC8E4
  c->r[8]=0u+0x00000000u; // 800BC8E8
  c->lr=0x800BC8F0u; f_8015FB98(c); // 800BC8EC
  c->r[3]=c->r[1]+0x000007D0u; // 800BC8F0
  c->r[4]=0u+0xFFFFFFFFu; // 800BC8F4
  c->lr=0x800BC8FCu; f_80046394(c); // 800BC8F8
  c->r[3]=c->r[1]+0x00001604u; // 800BC8FC
  c->r[4]=0u+0xFFFFFFFFu; // 800BC900
  c->lr=0x800BC908u; f_80046394(c); // 800BC904
L_800BC908:;
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BC908
  fcmp(c,0,c->f[29],c->f[0]); // 800BC90C
  if (!crb(c,1)) { goto L_800BC998; } // 800BC910
  c->lr=0x800BC918u; f_80061A4C(c); // 800BC914
  c->r[3]=c->r[3]+0x00000384u; // 800BC918
  c->r[4]=c->r[1]+0x000000A0u; // 800BC91C
  c->lr=0x800BC924u; f_80265924(c); // 800BC920
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[27]); // 800BC924
  fcmp(c,0,c->f[1],c->f[0]); // 800BC928
  if (!crb(c,0)) { goto L_800BC998; } // 800BC92C
  c->r[25]=0u+0x00000000u; // 800BC930
  c->r[30]=0u+0x00000000u; // 800BC934
  c->r[31]=c->r[13]+0xFFFF94B8u; // 800BC938
L_800BC93C:;
  c->r[3]=R32(c->r[31]+c->r[30]); // 800BC93C
  cmps(c,0,(int32_t)c->r[3],0); // 800BC940
  if (crb(c,2)) { goto L_800BC988; } // 800BC944
  c->lr=0x800BC94Cu; f_80067C50(c); // 800BC948
  cmps(c,0,(int32_t)c->r[3],1); // 800BC94C
  if (!crb(c,2)) { goto L_800BC988; } // 800BC950
  c->f[1]=c->f[29]; // 800BC954
  c->r[3]=c->r[1]+0x000000ACu; // 800BC958
  c->r[4]=c->r[1]+0x000000A0u; // 800BC95C
  c->r[5]=0u+0xFFFFFFFFu; // 800BC960
  c->lr=0x800BC968u; f_800BCD10(c); // 800BC964
  c->r[6]=R32(c->r[31]+c->r[30]); // 800BC968
  c->r[3]=c->r[1]+0x00000030u; // 800BC96C
  c->r[4]=c->r[1]+0x000000ACu; // 800BC970
  c->r[5]=R32(c->r[6]+0x00000000u); // 800BC974
  c->r[0]=R32(c->r[6]+0x00000004u); // 800BC978
  W32(c->r[1]+0x00000030u,c->r[5]); // 800BC97C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BC980
  c->lr=0x800BC988u; f_800BCDAC(c); // 800BC984
L_800BC988:;
  c->r[25]=c->r[25]+0x00000001u; // 800BC988
  c->r[30]=c->r[30]+0x00000004u; // 800BC98C
  cmps(c,0,(int32_t)c->r[25],2); // 800BC990
  if (crb(c,0)) { IRQCHK(c); goto L_800BC93C; } // 800BC994
L_800BC998:;
  c->r[0]=0u+0x00002468u; // 800BC998
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800BC99C
  {uint32_t ea=c->r[1]+0x00002460u; c->f[31]=RF64(ea);} // 800BC9A0
  c->r[0]=0u+0x00002458u; // 800BC9A4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800BC9A8
  {uint32_t ea=c->r[1]+0x00002450u; c->f[30]=RF64(ea);} // 800BC9AC
  c->r[0]=0u+0x00002448u; // 800BC9B0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800BC9B4
  {uint32_t ea=c->r[1]+0x00002440u; c->f[29]=RF64(ea);} // 800BC9B8
  c->r[0]=0u+0x00002438u; // 800BC9BC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 800BC9C0
  {uint32_t ea=c->r[1]+0x00002430u; c->f[28]=RF64(ea);} // 800BC9C4
  c->r[0]=0u+0x00002428u; // 800BC9C8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 800BC9CC
  c->r[11]=c->r[1]+0x00002420u; // 800BC9D0
  {uint32_t ea=c->r[1]+0x00002420u; c->f[27]=RF64(ea);} // 800BC9D4
  c->lr=0x800BC9DCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BC9D8
  c->r[0]=R32(c->r[1]+0x00002474u); // 800BC9DC
  c->lr=c->r[0]; // 800BC9E0
  c->r[1]=c->r[1]+0x00002470u; // 800BC9E4
  return; // 800BC9E8
}

// fn_800BC9EC
void f_800BC9EC(Ctx* __restrict c) {
  trace_call(0x800BC9ECu);
  c->r[3]=0u+0x00000000u; // 800BC9EC
  return; // 800BC9F0
}

// fn_800BC9F4
void f_800BC9F4(Ctx* __restrict c) {
  trace_call(0x800BC9F4u);
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BC9F4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BC9F8
  {uint32_t ea=c->r[4]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BC9FC
  f_800521A0(c); return; // 800BCA00
}

// fn_800BCA04
void f_800BCA04(Ctx* __restrict c) {
  trace_call(0x800BCA04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCA04
  c->r[0]=c->lr; // 800BCA08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BCA0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BCA10
  c->r[31]=c->r[3]+0x00000140u; // 800BCA14
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BCA18
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BCA1C
  c->r[29]=c->r[3]|c->r[3]; // 800BCA20
  c->r[30]=c->r[29]|c->r[29]; // 800BCA24
L_800BCA28:;
  c->r[3]=c->r[30]|c->r[30]; // 800BCA28
  c->lr=0x800BCA30u; f_8006BF9C(c); // 800BCA2C
  c->r[30]=c->r[30]+0x00000028u; // 800BCA30
  cmpu(c,0,c->r[30],c->r[31]); // 800BCA34
  if (crb(c,0)) { IRQCHK(c); goto L_800BCA28; } // 800BCA38
  c->r[3]=c->r[29]|c->r[29]; // 800BCA3C
  c->lr=0x800BCA44u; f_8006BFDC(c); // 800BCA40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BCA44
  c->r[3]=c->r[29]|c->r[29]; // 800BCA48
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BCA4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BCA50
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BCA54
  c->lr=c->r[0]; // 800BCA58
  c->r[1]=c->r[1]+0x00000020u; // 800BCA5C
  return; // 800BCA60
}

// fn_800BCA64
void f_800BCA64(Ctx* __restrict c) {
  trace_call(0x800BCA64u);
  cmps(c,0,(int32_t)c->r[5],8); // 800BCA64
  if (!crb(c,0)) return; // 800BCA68
  c->r[0]=R32(c->r[3]+0x00000140u); // 800BCA6C
  cmpu(c,0,c->r[5],c->r[0]); // 800BCA70
  if (crb(c,0)) { goto L_800BCA80; } // 800BCA74
  c->r[0]=c->r[5]+0x00000001u; // 800BCA78
  W32(c->r[3]+0x00000140u,c->r[0]); // 800BCA7C
L_800BCA80:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)40); // 800BCA80
  c->r[3]=c->r[3]+c->r[0]; // 800BCA84
  c->r[3]=c->r[3]+0x00000008u; // 800BCA88
  f_8003F468(c); return; // 800BCA8C
  return; // 800BCA90
}

// fn_800BCA94
void f_800BCA94(Ctx* __restrict c) {
  trace_call(0x800BCA94u);
  cmps(c,0,(int32_t)c->r[5],8); // 800BCA94
  if (!crb(c,0)) return; // 800BCA98
  c->r[0]=R32(c->r[3]+0x00000140u); // 800BCA9C
  cmpu(c,0,c->r[5],c->r[0]); // 800BCAA0
  if (crb(c,0)) { goto L_800BCAB0; } // 800BCAA4
  c->r[0]=c->r[5]+0x00000001u; // 800BCAA8
  W32(c->r[3]+0x00000140u,c->r[0]); // 800BCAAC
L_800BCAB0:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)40); // 800BCAB0
  c->r[3]=c->r[3]+c->r[0]; // 800BCAB4
  c->r[3]=c->r[3]+0x00000014u; // 800BCAB8
  f_8003F468(c); return; // 800BCABC
  return; // 800BCAC0
}

// fn_800BCAC4
void f_800BCAC4(Ctx* __restrict c) {
  trace_call(0x800BCAC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCAC4
  c->r[0]=c->lr; // 800BCAC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BCACC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800BCAD0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800BCAD4
  c->f[31]=c->f[1]; // 800BCAD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCADC
  c->r[31]=c->r[3]|c->r[3]; // 800BCAE0
  c->lr=0x800BCAE8u; f_800BCB24(c); // 800BCAE4
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCAE8
  c->r[4]=0u+0x803F0000u; // 800BCAEC
  c->r[4]=c->r[4]+0x0000244Cu; // 800BCAF0
  {uint32_t ea=c->r[31]+0x0000017Cu; WF32(ea,c->f[31]);} // 800BCAF4
  c->r[3]=c->r[31]|c->r[31]; // 800BCAF8
  W32(c->r[31]+0x00000000u,c->r[4]); // 800BCAFC
  {uint32_t ea=c->r[31]+0x00000178u; WF32(ea,c->f[0]);} // 800BCB00
  {uint32_t ea=c->r[31]+0x00000180u; WF32(ea,c->f[0]);} // 800BCB04
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800BCB08
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800BCB0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BCB10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BCB14
  c->lr=c->r[0]; // 800BCB18
  c->r[1]=c->r[1]+0x00000020u; // 800BCB1C
  return; // 800BCB20
}

// fn_800BCB24
void f_800BCB24(Ctx* __restrict c) {
  trace_call(0x800BCB24u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCB24
  c->r[0]=c->lr; // 800BCB28
  c->r[8]=0u+0x803F0000u; // 800BCB2C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BCB30
  c->r[8]=c->r[8]+0x00001B28u; // 800BCB34
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 800BCB38
  c->f[31]=c->f[2]; // 800BCB3C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800BCB40
  c->f[30]=c->f[1]; // 800BCB44
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BCB48
  c->r[31]=0u+0x00000000u; // 800BCB4C
  c->r[27]=c->r[4]|c->r[4]; // 800BCB50
  c->r[26]=c->r[3]|c->r[3]; // 800BCB54
  W32(c->r[1]+0x00000008u,c->r[31]); // 800BCB58
  c->r[28]=c->r[5]|c->r[5]; // 800BCB5C
  c->r[29]=c->r[6]|c->r[6]; // 800BCB60
  c->r[30]=c->r[7]|c->r[7]; // 800BCB64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCB68
  c->r[4]=c->r[1]+0x00000010u; // 800BCB6C
  W32(c->r[1]+0x00000010u,c->r[31]); // 800BCB70
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BCB74
  W32(c->r[3]+0x00000000u,c->r[8]); // 800BCB78
  c->r[3]=c->r[3]+0x00000004u; // 800BCB7C
  c->lr=0x800BCB84u; f_80064C98(c); // 800BCB80
  c->r[3]=0u+0x803F0000u; // 800BCB84
  W32(c->r[26]+0x0000000Cu,c->r[31]); // 800BCB88
  c->r[3]=c->r[3]+0x00001AF8u; // 800BCB8C
  W32(c->r[26]+0x00000000u,c->r[3]); // 800BCB90
  c->r[3]=c->r[26]+0x00000010u; // 800BCB94
  c->lr=0x800BCB9Cu; f_800BCA04(c); // 800BCB98
  {uint32_t ea=c->r[26]+0x00000154u; WF32(ea,c->f[31]);} // 800BCB9C
  c->r[4]=c->r[27]|c->r[27]; // 800BCBA0
  c->r[3]=c->r[26]+0x00000158u; // 800BCBA4
  c->lr=0x800BCBACu; f_8003F484(c); // 800BCBA8
  c->r[0]=0u+0x00000001u; // 800BCBAC
  W32(c->r[26]+0x00000168u,c->r[29]); // 800BCBB0
  c->r[4]=c->r[28]|c->r[28]; // 800BCBB4
  c->r[3]=c->r[26]+0x00000010u; // 800BCBB8
  W8(c->r[26]+0x00000164u,c->r[0]); // 800BCBBC
  W32(c->r[26]+0x0000016Cu,c->r[30]); // 800BCBC0
  W8(c->r[26]+0x00000170u,c->r[31]); // 800BCBC4
  {uint32_t ea=c->r[26]+0x00000174u; WF32(ea,c->f[30]);} // 800BCBC8
  c->lr=0x800BCBD0u; f_800BCBF0(c); // 800BCBCC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 800BCBD0
  c->r[3]=c->r[26]|c->r[26]; // 800BCBD4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800BCBD8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BCBDC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BCBE0
  c->lr=c->r[0]; // 800BCBE4
  c->r[1]=c->r[1]+0x00000040u; // 800BCBE8
  return; // 800BCBEC
}

// fn_800BCBF0
void f_800BCBF0(Ctx* __restrict c) {
  trace_call(0x800BCBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCBF0
  c->r[0]=c->lr; // 800BCBF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BCBF8
  c->r[11]=c->r[1]+0x00000020u; // 800BCBFC
  c->lr=0x800BCC04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BCC00
  c->r[27]=c->r[3]|c->r[3]; // 800BCC04
  c->r[28]=c->r[4]|c->r[4]; // 800BCC08
  c->r[30]=c->r[27]|c->r[27]; // 800BCC0C
  c->r[31]=c->r[3]+0x00000140u; // 800BCC10
  c->r[29]=c->r[28]|c->r[28]; // 800BCC14
L_800BCC18:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCC18
  c->r[3]=c->r[30]+0x00000008u; // 800BCC1C
  c->r[0]=R32(c->r[29]+0x00000004u); // 800BCC20
  c->r[4]=c->r[29]+0x00000008u; // 800BCC24
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 800BCC28
  W32(c->r[30]+0x00000004u,c->r[0]); // 800BCC2C
  c->lr=0x800BCC34u; f_8003F468(c); // 800BCC30
  c->r[3]=c->r[30]+0x00000014u; // 800BCC34
  c->r[4]=c->r[29]+0x00000014u; // 800BCC38
  c->lr=0x800BCC40u; f_8003F468(c); // 800BCC3C
  c->r[0]=R32(c->r[29]+0x00000020u); // 800BCC40
  c->r[3]=R8(c->r[29]+0x00000024u); // 800BCC44
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BCC48
  c->r[0]=R8(c->r[29]+0x00000025u); // 800BCC4C
  W8(c->r[30]+0x00000024u,c->r[3]); // 800BCC50
  c->r[3]=R8(c->r[29]+0x00000026u); // 800BCC54
  W8(c->r[30]+0x00000025u,c->r[0]); // 800BCC58
  c->r[0]=R8(c->r[29]+0x00000027u); // 800BCC5C
  c->r[29]=c->r[29]+0x00000028u; // 800BCC60
  W8(c->r[30]+0x00000026u,c->r[3]); // 800BCC64
  W8(c->r[30]+0x00000027u,c->r[0]); // 800BCC68
  c->r[30]=c->r[30]+0x00000028u; // 800BCC6C
  cmpu(c,0,c->r[30],c->r[31]); // 800BCC70
  if (crb(c,0)) { IRQCHK(c); goto L_800BCC18; } // 800BCC74
  c->r[0]=R32(c->r[28]+0x00000140u); // 800BCC78
  c->r[11]=c->r[1]+0x00000020u; // 800BCC7C
  c->r[3]=c->r[27]|c->r[27]; // 800BCC80
  W32(c->r[27]+0x00000140u,c->r[0]); // 800BCC84
  c->lr=0x800BCC8Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BCC88
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BCC8C
  c->lr=c->r[0]; // 800BCC90
  c->r[1]=c->r[1]+0x00000020u; // 800BCC94
  return; // 800BCC98
}

// fn_800BCC9C
void f_800BCC9C(Ctx* __restrict c) {
  trace_call(0x800BCC9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCC9C
  c->r[0]=c->lr; // 800BCCA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BCCA4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800BCCA8
  c->f[31]=c->f[2]; // 800BCCAC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800BCCB0
  c->f[30]=c->f[1]; // 800BCCB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCCB8
  c->r[31]=c->r[4]|c->r[4]; // 800BCCBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BCCC0
  c->r[30]=c->r[3]|c->r[3]; // 800BCCC4
  c->lr=0x800BCCCCu; f_80063ACC(c); // 800BCCC8
  c->r[5]=0u+0x803F0000u; // 800BCCCC
  c->r[4]=c->r[31]|c->r[31]; // 800BCCD0
  c->r[5]=c->r[5]+0x000022C4u; // 800BCCD4
  c->r[3]=c->r[30]+0x00000024u; // 800BCCD8
  W32(c->r[30]+0x00000020u,c->r[5]); // 800BCCDC
  c->lr=0x800BCCE4u; f_8003F484(c); // 800BCCE0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[30]);} // 800BCCE4
  c->r[3]=c->r[30]|c->r[30]; // 800BCCE8
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[31]);} // 800BCCEC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800BCCF0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800BCCF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BCCF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BCCFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BCD00
  c->lr=c->r[0]; // 800BCD04
  c->r[1]=c->r[1]+0x00000020u; // 800BCD08
  return; // 800BCD0C
}

// fn_800BCD10
void f_800BCD10(Ctx* __restrict c) {
  trace_call(0x800BCD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCD10
  c->r[0]=c->lr; // 800BCD14
  c->r[6]=0u+0x803F0000u; // 800BCD18
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BCD1C
  c->r[6]=c->r[6]+0x00001B28u; // 800BCD20
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800BCD24
  c->f[31]=c->f[1]; // 800BCD28
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800BCD2C
  c->r[31]=0u+0x00000000u; // 800BCD30
  c->r[29]=c->r[4]|c->r[4]; // 800BCD34
  c->r[28]=c->r[3]|c->r[3]; // 800BCD38
  W32(c->r[1]+0x00000008u,c->r[31]); // 800BCD3C
  c->r[30]=c->r[5]|c->r[5]; // 800BCD40
  c->r[4]=c->r[1]+0x00000010u; // 800BCD44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCD48
  W32(c->r[1]+0x00000010u,c->r[31]); // 800BCD4C
  W32(c->r[1]+0x00000014u,c->r[31]); // 800BCD50
  W32(c->r[3]+0x00000000u,c->r[6]); // 800BCD54
  c->r[3]=c->r[3]+0x00000004u; // 800BCD58
  c->lr=0x800BCD60u; f_80064C98(c); // 800BCD5C
  c->r[3]=0u+0x803F0000u; // 800BCD60
  W32(c->r[28]+0x0000000Cu,c->r[31]); // 800BCD64
  c->r[3]=c->r[3]+0x00007644u; // 800BCD68
  c->r[4]=c->r[29]|c->r[29]; // 800BCD6C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800BCD70
  c->r[3]=c->r[28]+0x00000010u; // 800BCD74
  c->lr=0x800BCD7Cu; f_8003F468(c); // 800BCD78
  cmps(c,0,(int32_t)c->r[30],0); // 800BCD7C
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[31]);} // 800BCD80
  if (!crb(c,0)) { goto L_800BCD8C; } // 800BCD84
  c->r[30]=0u+0x00000000u; // 800BCD88
L_800BCD8C:;
  W32(c->r[28]+0x00000020u,c->r[30]); // 800BCD8C
  c->r[3]=c->r[28]|c->r[28]; // 800BCD90
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800BCD94
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800BCD98
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BCD9C
  c->lr=c->r[0]; // 800BCDA0
  c->r[1]=c->r[1]+0x00000030u; // 800BCDA4
  return; // 800BCDA8
}

// fn_800BCDAC
void f_800BCDAC(Ctx* __restrict c) {
  trace_call(0x800BCDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCDAC
  c->r[0]=c->lr; // 800BCDB0
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BCDB4
  c->r[11]=c->r[1]+0x00000060u; // 800BCDB8
  c->lr=0x800BCDC0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BCDBC
  c->r[31]=c->r[1]|c->r[1]; // 800BCDC0
  c->r[27]=c->r[3]|c->r[3]; // 800BCDC4
  c->r[28]=c->r[4]|c->r[4]; // 800BCDC8
  c->lr=0x800BCDD0u; f_8003F1D4(c); // 800BCDCC
  cmps(c,0,(int32_t)c->r[3],0); // 800BCDD0
  if (crb(c,2)) { goto L_800BCEA4; } // 800BCDD4
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800BCDD8
  c->lr=0x800BCDE0u; f_802A6EE4(c); // 800BCDDC
  cmps(c,0,(int32_t)c->r[3],0); // 800BCDE0
  c->r[29]=c->r[3]|c->r[3]; // 800BCDE4
  if (crb(c,2)) { goto L_800BCEA4; } // 800BCDE8
  if (crb(c,2)) { goto L_800BCE50; } // 800BCDEC
  c->r[30]=0u+0x00000000u; // 800BCDF0
  c->r[5]=0u+0x803F0000u; // 800BCDF4
  W32(c->r[31]+0x00000008u,c->r[30]); // 800BCDF8
  c->r[5]=c->r[5]+0x00001B28u; // 800BCDFC
  c->r[4]=c->r[31]+0x00000008u; // 800BCE00
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 800BCE04
  W32(c->r[3]+0x00000000u,c->r[5]); // 800BCE08
  c->r[3]=c->r[3]+0x00000004u; // 800BCE0C
  W32(c->r[31]+0x00000044u,c->r[1]); // 800BCE10
  W32(c->r[31]+0x00000010u,c->r[30]); // 800BCE14
  W32(c->r[31]+0x00000014u,c->r[30]); // 800BCE18
  c->lr=0x800BCE20u; f_80064C98(c); // 800BCE1C
  {uint32_t ea=c->r[2]+0xFFFF8E8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800BCE20
  c->r[4]=0u+0x803F0000u; // 800BCE24
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800BCE28
  c->r[4]=c->r[4]+0x00007644u; // 800BCE2C
  c->f[2]=c->f[1]; // 800BCE30
  c->r[3]=c->r[29]+0x00000010u; // 800BCE34
  c->f[3]=c->f[1]; // 800BCE38
  W32(c->r[29]+0x00000000u,c->r[4]); // 800BCE3C
  c->lr=0x800BCE44u; f_80065358(c); // 800BCE40
  {uint32_t ea=c->r[2]+0xFFFF8EA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE44
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BCE48
  W32(c->r[29]+0x00000020u,c->r[30]); // 800BCE4C
L_800BCE50:;
  c->r[3]=c->r[29]|c->r[29]; // 800BCE50
  c->r[4]=c->r[28]|c->r[28]; // 800BCE54
  c->lr=0x800BCE5Cu; f_80064DD8(c); // 800BCE58
  c->r[3]=c->r[29]+0x00000010u; // 800BCE5C
  c->r[4]=c->r[28]+0x00000010u; // 800BCE60
  c->lr=0x800BCE68u; f_8003F468(c); // 800BCE64
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCE68
  c->r[30]=addc(c,c->r[29],0x00000024u,0); cr0(c,c->r[30]); // 800BCE6C
  c->r[0]=R32(c->r[28]+0x00000020u); // 800BCE70
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 800BCE74
  W32(c->r[29]+0x00000020u,c->r[0]); // 800BCE78
  if (crb(c,2)) { goto L_800BCE90; } // 800BCE7C
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 800BCE80
  c->r[3]=c->r[30]|c->r[30]; // 800BCE84
  c->r[4]=c->r[29]|c->r[29]; // 800BCE88
  c->lr=0x800BCE90u; f_80064CE8(c); // 800BCE8C
L_800BCE90:;
  c->r[3]=c->r[27]|c->r[27]; // 800BCE90
  c->lr=0x800BCE98u; f_80068A78(c); // 800BCE94
  c->r[4]=c->r[30]|c->r[30]; // 800BCE98
  c->r[3]=c->r[3]+0x00000030u; // 800BCE9C
  c->lr=0x800BCEA4u; f_8003FD14(c); // 800BCEA0
L_800BCEA4:;
  c->r[10]=c->r[31]|c->r[31]; // 800BCEA4
  c->r[11]=c->r[10]+0x00000060u; // 800BCEA8
  c->lr=0x800BCEB0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BCEAC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800BCEB0
  c->r[0]=R32(c->r[10]+0x00000004u); // 800BCEB4
  c->r[1]=c->r[10]|c->r[10]; // 800BCEB8
  c->lr=c->r[0]; // 800BCEBC
  return; // 800BCEC0
}

// dtor_800BCEC4
void f_800BCEC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCEC4
  c->r[0]=c->lr; // 800BCEC8
  cmps(c,0,(int32_t)c->r[3],0); // 800BCECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BCED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BCED4
  c->r[31]=c->r[3]|c->r[3]; // 800BCED8
  if (crb(c,2)) { goto L_800BCEEC; } // 800BCEDC
  cmps(c,0,(int32_t)c->r[4],0); // 800BCEE0
  if (!crb(c,1)) { goto L_800BCEEC; } // 800BCEE4
  c->lr=0x800BCEECu; f_802896EC(c); // 800BCEE8
L_800BCEEC:;
  c->r[3]=c->r[31]|c->r[31]; // 800BCEEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BCEF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BCEF4
  c->lr=c->r[0]; // 800BCEF8
  c->r[1]=c->r[1]+0x00000010u; // 800BCEFC
  return; // 800BCF00
}

// fn_800BCF04
void f_800BCF04(Ctx* __restrict c) {
  trace_call(0x800BCF04u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCF04
  c->r[0]=c->lr; // 800BCF08
  W32(c->r[1]+0x00000064u,c->r[0]); // 800BCF0C
  c->r[11]=c->r[1]+0x00000060u; // 800BCF10
  c->lr=0x800BCF18u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BCF14
  c->r[29]=c->r[3]|c->r[3]; // 800BCF18
  c->r[3]=c->r[5]|c->r[5]; // 800BCF1C
  c->r[30]=c->r[6]|c->r[6]; // 800BCF20
  c->lr=0x800BCF28u; f_80068A78(c); // 800BCF24
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BCF28
  c->r[0]=0u+0x00000000u; // 800BCF2C
  c->r[31]=c->r[3]|c->r[3]; // 800BCF30
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BCF34
  W8(c->r[3]+0x00000890u,c->r[0]); // 800BCF38
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800BCF3C
  c->r[30]=R32(c->r[1]+0x0000004Cu); // 800BCF40
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800BCF44
  if (crb(c,2)) { goto L_800BCF54; } // 800BCF48
  c->r[0]=0u+0x00000001u; // 800BCF4C
  W8(c->r[3]+0x00000890u,c->r[0]); // 800BCF50
L_800BCF54:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 800BCF54
  if (crb(c,2)) { goto L_800BCF70; } // 800BCF58
  c->r[4]=0u+0x00000019u; // 800BCF5C
  c->r[5]=0u+0x00000001u; // 800BCF60
  c->r[3]=c->r[3]+0x00000394u; // 800BCF64
  c->lr=0x800BCF6Cu; f_800B16D0(c); // 800BCF68
  goto L_800BCF80; // 800BCF6C
L_800BCF70:;
  c->r[4]=0u+0x00000019u; // 800BCF70
  c->r[5]=0u+0x00000000u; // 800BCF74
  c->r[3]=c->r[3]+0x00000394u; // 800BCF78
  c->lr=0x800BCF80u; f_800B16D0(c); // 800BCF7C
L_800BCF80:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 800BCF80
  if (crb(c,2)) { goto L_800BCF9C; } // 800BCF84
  c->r[3]=c->r[31]+0x00000394u; // 800BCF88
  c->r[4]=0u+0x0000001Au; // 800BCF8C
  c->r[5]=0u+0x00000001u; // 800BCF90
  c->lr=0x800BCF98u; f_800B16D0(c); // 800BCF94
  goto L_800BCFAC; // 800BCF98
L_800BCF9C:;
  c->r[3]=c->r[31]+0x00000394u; // 800BCF9C
  c->r[4]=0u+0x0000001Au; // 800BCFA0
  c->r[5]=0u+0x00000000u; // 800BCFA4
  c->lr=0x800BCFACu; f_800B16D0(c); // 800BCFA8
L_800BCFAC:;
  c->r[3]=0u+0x00000000u; // 800BCFAC
  c->r[0]=0u+0x00000007u; // 800BCFB0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BCFB4
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 800BCFB8
  c->r[4]=c->r[1]+0x00000004u; // 800BCFBC
  c->ctr=c->r[0]; // 800BCFC0
L_800BCFC4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BCFC4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BCFC8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BCFCC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BCFD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BCFC4; } // 800BCFD4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BCFD8
  c->r[11]=c->r[1]+0x00000060u; // 800BCFDC
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BCFE0
  c->lr=0x800BCFE8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BCFE4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800BCFE8
  c->lr=c->r[0]; // 800BCFEC
  c->r[1]=c->r[1]+0x00000060u; // 800BCFF0
  return; // 800BCFF4
}

// fn_800BCFF8
void f_800BCFF8(Ctx* __restrict c) {
  trace_call(0x800BCFF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCFF8
  c->r[4]=0u+0x00000000u; // 800BCFFC
  c->r[0]=0u+0x00000007u; // 800BD000
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 800BD004
  W32(c->r[1]+0x00000008u,c->r[4]); // 800BD008
  c->r[4]=c->r[1]+0x00000004u; // 800BD00C
  c->ctr=c->r[0]; // 800BD010
L_800BD014:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD014
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD018
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD01C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD020
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD014; } // 800BD024
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD028
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BD02C
  c->r[1]=c->r[1]+0x00000050u; // 800BD030
  return; // 800BD034
}

// fn_800BD038
void f_800BD038(Ctx* __restrict c) {
  trace_call(0x800BD038u);
  {uint32_t ea=c->r[1]+0xFFFFEFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD038
  c->r[0]=c->lr; // 800BD03C
  c->r[5]=0u+0x803E0000u; // 800BD040
  W32(c->r[1]+0x00001054u,c->r[0]); // 800BD044
  c->r[5]=c->r[5]+0xFFFFA848u; // 800BD048
  c->r[5]=c->r[5]+0x00000006u; // 800BD04C
  W32(c->r[1]+0x0000104Cu,c->r[31]); // 800BD050
  c->r[31]=c->r[3]|c->r[3]; // 800BD054
  c->r[3]=c->r[4]|c->r[4]; // 800BD058
  c->r[4]=c->r[1]+0x00000044u; // 800BD05C
  c->lr=0x800BD064u; f_8007927C(c); // 800BD060
  c->r[3]=0u+0x00000000u; // 800BD064
  c->r[0]=0u+0x00000007u; // 800BD068
  W32(c->r[1]+0x00000008u,c->r[3]); // 800BD06C
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 800BD070
  c->r[4]=c->r[1]+0x00000004u; // 800BD074
  c->ctr=c->r[0]; // 800BD078
L_800BD07C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800BD07C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800BD080
  W32(c->r[5]+0x00000004u,c->r[3]); // 800BD084
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800BD088
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD07C; } // 800BD08C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800BD090
  W32(c->r[5]+0x00000004u,c->r[0]); // 800BD094
  c->r[31]=R32(c->r[1]+0x0000104Cu); // 800BD098
  c->r[0]=R32(c->r[1]+0x00001054u); // 800BD09C
  c->lr=c->r[0]; // 800BD0A0
  c->r[1]=c->r[1]+0x00001050u; // 800BD0A4
  return; // 800BD0A8
}

