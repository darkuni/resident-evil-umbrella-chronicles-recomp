#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8024C334
void f_8024C334(Ctx* __restrict c) {
  trace_call(0x8024C334u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024C334
  f_80249EDC(c); return; // 8024C338
}

// fn_8024C33C
void f_8024C33C(Ctx* __restrict c) {
  trace_call(0x8024C33Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024C33C
  f_80249CD4(c); return; // 8024C340
}

// fn_8024C344
void f_8024C344(Ctx* __restrict c) {
  trace_call(0x8024C344u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024C344
  f_8024BADC(c); return; // 8024C348
}

// fn_8024C34C
void f_8024C34C(Ctx* __restrict c) {
  trace_call(0x8024C34Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024C34C
  f_80249DB0(c); return; // 8024C350
}

// fn_8024C354
void f_8024C354(Ctx* __restrict c) {
  trace_call(0x8024C354u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024C354
  f_80249E90(c); return; // 8024C358
}

// fn_8024C35C
void f_8024C35C(Ctx* __restrict c) {
  trace_call(0x8024C35Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C35C
  c->r[0]=c->lr; // 8024C360
  W32(c->r[1]+0x00000044u,c->r[0]); // 8024C364
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 8024C368
  c->f[31]=c->f[2]; // 8024C36C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8024C370
  c->f[30]=c->f[1]; // 8024C374
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024C378
  c->r[26]=c->r[3]|c->r[3]; // 8024C37C
  c->r[27]=c->r[4]|c->r[4]; // 8024C380
  c->r[28]=0u+0x00000000u; // 8024C384
  c->r[25]=0u+0x00000000u; // 8024C388
  c->r[29]=0u+0x803F0000u; // 8024C38C
  c->r[30]=0u+0x803F0000u; // 8024C390
  c->r[31]=0u+0x803F0000u; // 8024C394
  goto L_8024C474; // 8024C398
L_8024C39C:;
  c->r[0]=R32(c->r[26]+0x00000900u); // 8024C39C
  c->r[3]=c->r[0]+c->r[25]; // 8024C3A0
  c->r[3]=R32(c->r[3]+0x00000008u); // 8024C3A4
  cmps(c,0,(int32_t)c->r[3],0); // 8024C3A8
  if (crb(c,2)) { goto L_8024C46C; } // 8024C3AC
  c->r[24]=R32(c->r[3]+0x0000002Cu); // 8024C3B0
  cmps(c,0,(int32_t)c->r[24],0); // 8024C3B4
  if (!crb(c,2)) { goto L_8024C3D8; } // 8024C3B8
  c->r[3]=c->r[29]+0x0000195Cu; // 8024C3BC
  c->r[5]=c->r[30]+0x00001940u; // 8024C3C0
  c->r[6]=c->r[31]+0x00001934u; // 8024C3C4
  c->r[4]=0u+0x00000026u; // 8024C3C8
  c->r[7]=c->r[13]+0xFFFF8D68u; // 8024C3CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024C3D0
  c->lr=0x8024C3D8u; f_803444BC(c); // 8024C3D4
L_8024C3D8:;
  c->r[0]=R32(c->r[24]+0x00000014u); // 8024C3D8
  cmps(c,0,(int32_t)c->r[0],0); // 8024C3DC
  if (crb(c,2)) { goto L_8024C3EC; } // 8024C3E0
  c->r[6]=c->r[24]+c->r[0]; // 8024C3E4
  goto L_8024C3F0; // 8024C3E8
L_8024C3EC:;
  c->r[6]=0u+0x00000000u; // 8024C3EC
L_8024C3F0:;
  c->r[4]=c->r[6]|c->r[6]; // 8024C3F0
  c->r[3]=c->r[27]|c->r[27]; // 8024C3F4
  c->r[7]=0u+0x00000000u; // 8024C3F8
  goto L_8024C424; // 8024C3FC
L_8024C400:;
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8024C400
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 8024C404
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8024C408
  if (crb(c,2)) { goto L_8024C418; } // 8024C40C
  c->r[0]=0u+0x00000000u; // 8024C410
  goto L_8024C460; // 8024C414
L_8024C418:;
  c->r[7]=c->r[7]+0x00000001u; // 8024C418
  c->r[3]=c->r[3]+0x00000001u; // 8024C41C
  c->r[4]=c->r[4]+0x00000001u; // 8024C420
L_8024C424:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 8024C424
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 8024C428
  if (crb(c,2)) { goto L_8024C43C; } // 8024C42C
  c->r[8]=R8(c->r[3]+0x00000000u); // 8024C430
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[0]); // 8024C434
  if (!crb(c,2)) { IRQCHK(c); goto L_8024C400; } // 8024C438
L_8024C43C:;
  c->r[0]=R8(c->r[6]+c->r[7]); // 8024C43C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8024C440
  if (!crb(c,2)) { goto L_8024C45C; } // 8024C444
  c->r[0]=R8(c->r[27]+c->r[7]); // 8024C448
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8024C44C
  if (!crb(c,2)) { goto L_8024C45C; } // 8024C450
  c->r[0]=0u+0x00000001u; // 8024C454
  goto L_8024C460; // 8024C458
L_8024C45C:;
  c->r[0]=0u+0x00000000u; // 8024C45C
L_8024C460:;
  cmps(c,0,(int32_t)c->r[0],0); // 8024C460
  if (crb(c,2)) { goto L_8024C46C; } // 8024C464
  goto L_8024C484; // 8024C468
L_8024C46C:;
  c->r[28]=c->r[28]+0x00000001u; // 8024C46C
  c->r[25]=c->r[25]+0x0000001Cu; // 8024C470
L_8024C474:;
  c->r[0]=R32(c->r[26]+0x00000904u); // 8024C474
  cmpu(c,0,c->r[28],c->r[0]); // 8024C478
  if (crb(c,0)) { IRQCHK(c); goto L_8024C39C; } // 8024C47C
  c->r[28]=0u+0xFFFFFFFFu; // 8024C480
L_8024C484:;
  c->f[1]=c->f[30]; // 8024C484
  c->r[5]=c->r[28]|c->r[28]; // 8024C488
  c->f[2]=c->f[31]; // 8024C48C
  c->r[3]=c->r[26]+0x00000C88u; // 8024C490
  c->r[4]=c->r[26]+0x000008ECu; // 8024C494
  c->r[6]=0u+0x00000000u; // 8024C498
  c->r[7]=0u+0x00000000u; // 8024C49C
  c->lr=0x8024C4A4u; f_800BB0C8(c); // 8024C4A0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 8024C4A4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8024C4A8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024C4AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8024C4B0
  c->lr=c->r[0]; // 8024C4B4
  c->r[1]=c->r[1]+0x00000040u; // 8024C4B8
  return; // 8024C4BC
}

// fn_8024C4C0
void f_8024C4C0(Ctx* __restrict c) {
  trace_call(0x8024C4C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C4C0
  c->r[0]=c->lr; // 8024C4C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024C4C8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8024C4CC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8024C4D0
  c->f[31]=c->f[1]; // 8024C4D4
  {uint32_t ea=c->r[2]+0xFFFFD810u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C4D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024C4DC
  fcmp(c,0,c->f[1],c->f[0]); // 8024C4E0
  c->r[3]=R32(c->r[3]+0x00000974u); // 8024C4E4
  c->r[31]=R32(c->r[3]+0x00000000u); // 8024C4E8
  if (!crb(c,0)) { goto L_8024C508; } // 8024C4EC
  c->f[1]=c->f[0]; // 8024C4F0
  c->r[3]=c->r[31]|c->r[31]; // 8024C4F4
  c->lr=0x8024C4FCu; f_8016498C(c); // 8024C4F8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8024C4FC
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8024C500
  goto L_8024C548; // 8024C504
L_8024C508:;
  c->r[3]=c->r[31]|c->r[31]; // 8024C508
  c->lr=0x8024C510u; f_80075320(c); // 8024C50C
  cmps(c,0,(int32_t)c->r[3],0); // 8024C510
  if (crb(c,2)) { goto L_8024C534; } // 8024C514
  c->r[3]=c->r[31]|c->r[31]; // 8024C518
  c->lr=0x8024C520u; f_80075320(c); // 8024C51C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024C520
  c->r[12]=R32(c->r[12]+0x00000020u); // 8024C524
  c->ctr=c->r[12]; // 8024C528
  if (true) { c->lr=0x8024C530u; dispatch(c,c->ctr); } // 8024C52C
  goto L_8024C538; // 8024C530
L_8024C534:;
  {uint32_t ea=c->r[2]+0xFFFFD810u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C534
L_8024C538:;
  fcmp(c,0,c->f[1],c->f[31]); // 8024C538
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024C53C
  c->r[3]=c->cr; // 8024C540
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 8024C544
L_8024C548:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8024C548
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024C54C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8024C550
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024C554
  c->lr=c->r[0]; // 8024C558
  c->r[1]=c->r[1]+0x00000020u; // 8024C55C
  return; // 8024C560
}

// fn_8024C564
void f_8024C564(Ctx* __restrict c) {
  trace_call(0x8024C564u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8024C564
  c->r[3]=c->r[3]+c->r[0]; // 8024C568
  {uint32_t ea=c->r[3]+0x000003ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C56C
  return; // 8024C570
}

// fn_8024C574
void f_8024C574(Ctx* __restrict c) {
  trace_call(0x8024C574u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8024C574
  c->r[3]=c->r[3]+c->r[0]; // 8024C578
  {uint32_t ea=c->r[3]+0x000003ACu; WF32(ea,c->f[1]);} // 8024C57C
  return; // 8024C580
}

// fn_8024C584
void f_8024C584(Ctx* __restrict c) {
  trace_call(0x8024C584u);
  {uint32_t ea=c->r[2]+0xFFFFD810u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C584
  c->r[3]=0u+0x805E0000u; // 8024C588
  {uint32_t ea=c->r[2]+0xFFFFD814u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024C58C
  c->r[3]=c->r[3]+0xFFFFDF58u; // 8024C590
  c->f[3]=c->f[1]; // 8024C594
  f_8003F588(c); return; // 8024C598
}

// fn_8024C59C
void f_8024C59C(Ctx* __restrict c) {
  trace_call(0x8024C59Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C59C
  c->r[0]=c->lr; // 8024C5A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024C5A4
  c->r[11]=c->r[1]+0x00000030u; // 8024C5A8
  c->lr=0x8024C5B0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024C5AC
  c->r[31]=c->r[3]|c->r[3]; // 8024C5B0
  c->lr=0x8024C5B8u; f_800CEA18(c); // 8024C5B4
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C5B8
  c->r[3]=0u+0x803F0000u; // 8024C5BC
  c->r[3]=c->r[3]+0x000059F8u; // 8024C5C0
  c->r[28]=0u+0x00000000u; // 8024C5C4
  c->r[0]=c->r[3]+0x00000040u; // 8024C5C8
  c->f[2]=c->f[1]; // 8024C5CC
  W32(c->r[31]+0x00000010u,c->r[3]); // 8024C5D0
  c->f[3]=c->f[1]; // 8024C5D4
  c->r[3]=c->r[31]+0x000008ACu; // 8024C5D8
  W32(c->r[31]+0x00000048u,c->r[0]); // 8024C5DC
  W32(c->r[31]+0x000008A4u,c->r[28]); // 8024C5E0
  W32(c->r[31]+0x000008A8u,c->r[28]); // 8024C5E4
  c->lr=0x8024C5ECu; f_800521A0(c); // 8024C5E8
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024C5EC
  c->r[3]=c->r[31]+0x000008B8u; // 8024C5F0
  c->f[2]=c->f[1]; // 8024C5F4
  c->f[3]=c->f[1]; // 8024C5F8
  c->lr=0x8024C600u; f_800521A0(c); // 8024C5FC
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C600
  c->r[27]=c->r[31]+0x000008D0u; // 8024C604
  W32(c->r[31]+0x000008C4u,c->r[28]); // 8024C608
  c->r[24]=c->r[27]|c->r[27]; // 8024C60C
  c->r[25]=c->r[27]|c->r[27]; // 8024C610
  c->r[3]=c->r[27]|c->r[27]; // 8024C614
  {uint32_t ea=c->r[31]+0x000008C8u; WF32(ea,c->f[0]);} // 8024C618
  W32(c->r[31]+0x000008CCu,c->r[28]); // 8024C61C
  c->lr=0x8024C624u; f_8002A0C4(c); // 8024C620
  c->r[4]=0u+0x803F0000u; // 8024C624
  c->r[3]=c->r[27]+0x0000001Cu; // 8024C628
  c->r[4]=c->r[4]+0x00001290u; // 8024C62C
  W32(c->r[27]+0x00000000u,c->r[4]); // 8024C630
  c->lr=0x8024C638u; f_80166A74(c); // 8024C634
  c->r[3]=0u+0x803F0000u; // 8024C638
  c->r[4]=0u+0x803F0000u; // 8024C63C
  c->r[25]=c->r[27]+0x000000D8u; // 8024C640
  c->r[29]=0u+0xFFFFFFFFu; // 8024C644
  c->r[3]=c->r[3]+0x00001150u; // 8024C648
  c->r[4]=c->r[4]+0x000011B8u; // 8024C64C
  c->r[30]=0u+0x00000001u; // 8024C650
  c->r[26]=c->r[25]+0x00000020u; // 8024C654
  W32(c->r[27]+0x00000000u,c->r[3]); // 8024C658
  c->r[3]=c->r[26]|c->r[26]; // 8024C65C
  W32(c->r[27]+0x000000D8u,c->r[4]); // 8024C660
  W32(c->r[27]+0x000000DCu,c->r[29]); // 8024C664
  W32(c->r[27]+0x000000E0u,c->r[28]); // 8024C668
  W32(c->r[27]+0x000000E4u,c->r[28]); // 8024C66C
  W32(c->r[27]+0x000000E8u,c->r[28]); // 8024C670
  W32(c->r[27]+0x000000ECu,c->r[30]); // 8024C674
  W32(c->r[27]+0x000000F0u,c->r[28]); // 8024C678
  W32(c->r[27]+0x000000F4u,c->r[28]); // 8024C67C
  c->lr=0x8024C684u; f_8002D9F4(c); // 8024C680
  c->r[3]=0u+0x803F0000u; // 8024C684
  c->r[4]=0u+0x803F0000u; // 8024C688
  c->r[3]=c->r[3]+0x000011D0u; // 8024C68C
  W32(c->r[27]+0x00000114u,c->r[28]); // 8024C690
  c->r[4]=c->r[4]+0x00003028u; // 8024C694
  W32(c->r[26]+0x00000000u,c->r[3]); // 8024C698
  c->r[3]=c->r[27]+0x00000124u; // 8024C69C
  W32(c->r[27]+0x00000118u,c->r[28]); // 8024C6A0
  W32(c->r[27]+0x0000011Cu,c->r[28]); // 8024C6A4
  W32(c->r[27]+0x00000120u,c->r[28]); // 8024C6A8
  W32(c->r[27]+0x00000000u,c->r[4]); // 8024C6AC
  c->lr=0x8024C6B4u; f_80141D50(c); // 8024C6B0
  c->r[6]=0u+0x80400000u; // 8024C6B4
  c->r[8]=0u+0x80400000u; // 8024C6B8
  c->r[6]=c->r[6]+0x000054F8u; // 8024C6BC
  c->r[4]=0u+0x80070000u; // 8024C6C0
  c->r[8]=c->r[8]+0x00005560u; // 8024C6C4
  c->r[5]=0u+0x80070000u; // 8024C6C8
  W32(c->r[27]+0x00000000u,c->r[6]); // 8024C6CC
  c->r[3]=c->r[27]+0x000001D8u; // 8024C6D0
  c->r[4]=c->r[4]+0x000058C4u; // 8024C6D4
  c->r[5]=c->r[5]+0x000059F8u; // 8024C6D8
  W8(c->r[27]+0x000001BCu,c->r[28]); // 8024C6DC
  c->r[6]=0u+0x00000058u; // 8024C6E0
  c->r[7]=0u+0x00000003u; // 8024C6E4
  W32(c->r[27]+0x000001C0u,c->r[28]); // 8024C6E8
  W32(c->r[27]+0x000001C8u,c->r[28]); // 8024C6EC
  W32(c->r[27]+0x000001CCu,c->r[28]); // 8024C6F0
  W32(c->r[27]+0x000001D0u,c->r[28]); // 8024C6F4
  W32(c->r[27]+0x000001C4u,c->r[8]); // 8024C6F8
  c->lr=0x8024C700u; f_80289B34(c); // 8024C6FC
  c->r[3]=c->r[27]+0x000002E0u; // 8024C700
  c->r[4]=0u+0x00000000u; // 8024C704
  c->r[5]=0u+0x00000002u; // 8024C708
  c->lr=0x8024C710u; f_80075338(c); // 8024C70C
  c->r[3]=c->r[27]+0x00000318u; // 8024C710
  c->r[4]=0u+0x00000003u; // 8024C714
  c->r[5]=0u+0x00000004u; // 8024C718
  c->lr=0x8024C720u; f_80075338(c); // 8024C71C
  c->r[3]=c->r[27]+0x00000350u; // 8024C720
  c->r[4]=0u+0x00000005u; // 8024C724
  c->r[5]=0u+0x00000006u; // 8024C728
  c->lr=0x8024C730u; f_80075338(c); // 8024C72C
  {uint32_t ea=c->r[2]+0xFFFFD81Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C730
  c->r[24]=c->r[31]+0x00000EDCu; // 8024C734
  W32(c->r[27]+0x00000388u,c->r[28]); // 8024C738
  c->r[3]=c->r[24]|c->r[24]; // 8024C73C
  W32(c->r[27]+0x000003B0u,c->r[29]); // 8024C740
  W32(c->r[31]+0x00000C88u,c->r[28]); // 8024C744
  W32(c->r[31]+0x00000C8Cu,c->r[28]); // 8024C748
  W32(c->r[31]+0x00000C90u,c->r[29]); // 8024C74C
  W32(c->r[31]+0x00000C94u,c->r[28]); // 8024C750
  W32(c->r[31]+0x00000C98u,c->r[28]); // 8024C754
  W32(c->r[31]+0x00000C9Cu,c->r[28]); // 8024C758
  W8(c->r[31]+0x00000CA0u,c->r[30]); // 8024C75C
  {uint32_t ea=c->r[31]+0x00000CA4u; WF32(ea,c->f[0]);} // 8024C760
  W32(c->r[31]+0x00000ED8u,c->r[28]); // 8024C764
  c->lr=0x8024C76Cu; f_80063A84(c); // 8024C768
  c->r[4]=0u+0x803F0000u; // 8024C76C
  c->r[3]=c->r[24]+0x00000078u; // 8024C770
  c->r[4]=c->r[4]+0x000021F8u; // 8024C774
  W32(c->r[24]+0x00000000u,c->r[4]); // 8024C778
  c->lr=0x8024C780u; f_800A4E78(c); // 8024C77C
  W8(c->r[24]+0x000000BCu,c->r[28]); // 8024C780
  c->r[3]=c->r[24]+0x000000C0u; // 8024C784
  c->lr=0x8024C78Cu; f_80063CC0(c); // 8024C788
  {uint32_t ea=c->r[2]+0xFFFFD820u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C78C
  c->r[0]=0u+0x00000007u; // 8024C790
  W8(c->r[24]+0x00000118u,c->r[30]); // 8024C794
  {uint32_t ea=c->r[24]+0x0000010Cu; WF32(ea,c->f[0]);} // 8024C798
  c->ctr=c->r[0]; // 8024C79C
L_8024C7A0:;
  c->r[3]=c->r[24]+c->r[28]; // 8024C7A0
  c->r[28]=c->r[28]+0x00000008u; // 8024C7A4
  W32(c->r[3]+0x00000034u,c->r[29]); // 8024C7A8
  W32(c->r[3]+0x00000038u,c->r[29]); // 8024C7AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024C7A0; } // 8024C7B0
  c->r[3]=c->r[31]+0x00000FF8u; // 8024C7B4
  c->lr=0x8024C7BCu; f_80063CC0(c); // 8024C7B8
  c->r[30]=0u+0xFFFFFFFFu; // 8024C7BC
  c->r[3]=c->r[31]+0x00001054u; // 8024C7C0
  W32(c->r[31]+0x00001050u,c->r[30]); // 8024C7C4
  c->lr=0x8024C7CCu; f_801811B4(c); // 8024C7C8
  {uint32_t ea=c->r[2]+0xFFFFD824u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C7CC
  c->r[3]=0u+0x00000000u; // 8024C7D0
  W8(c->r[31]+0x00001E80u,c->r[3]); // 8024C7D4
  c->r[4]=c->r[31]+0x00001E84u; // 8024C7D8
  c->r[0]=c->r[31]+0x00001F14u; // 8024C7DC
  {uint32_t ea=c->r[31]+0x00001E7Cu; WF32(ea,c->f[0]);} // 8024C7E0
L_8024C7E4:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 8024C7E4
  W32(c->r[4]+0x00000004u,c->r[30]); // 8024C7E8
  c->r[4]=c->r[4]+0x0000000Cu; // 8024C7EC
  cmpu(c,0,c->r[4],c->r[0]); // 8024C7F0
  if (crb(c,0)) { IRQCHK(c); goto L_8024C7E4; } // 8024C7F4
  c->r[4]=0u+0x80410000u; // 8024C7F8
  c->r[0]=0u+0x00000000u; // 8024C7FC
  c->r[4]=c->r[4]+0x00000AF0u; // 8024C800
  W8(c->r[31]+0x00001F14u,c->r[0]); // 8024C804
  c->r[0]=c->r[4]+0x00000040u; // 8024C808
  c->r[11]=c->r[1]+0x00000030u; // 8024C80C
  W32(c->r[31]+0x00000010u,c->r[4]); // 8024C810
  c->r[3]=c->r[31]|c->r[31]; // 8024C814
  W32(c->r[31]+0x00000048u,c->r[0]); // 8024C818
  c->lr=0x8024C820u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024C81C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024C820
  c->lr=c->r[0]; // 8024C824
  c->r[1]=c->r[1]+0x00000030u; // 8024C828
  return; // 8024C82C
}

// fn_8024C830
void f_8024C830(Ctx* __restrict c) {
  trace_call(0x8024C830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C830
  c->r[0]=c->lr; // 8024C834
  cmps(c,0,(int32_t)c->r[3],0); // 8024C838
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024C83C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024C840
  c->r[30]=c->r[3]|c->r[3]; // 8024C844
  c->r[31]=c->r[4]|c->r[4]; // 8024C848
  if (crb(c,2)) { goto L_8024C86C; } // 8024C84C
  if (crb(c,2)) { goto L_8024C85C; } // 8024C850
  c->r[4]=0u+0x00000000u; // 8024C854
  c->lr=0x8024C85Cu; f_80075DAC(c); // 8024C858
L_8024C85C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8024C85C
  if (!crb(c,1)) { goto L_8024C86C; } // 8024C860
  c->r[3]=c->r[30]|c->r[30]; // 8024C864
  c->lr=0x8024C86Cu; f_802896EC(c); // 8024C868
L_8024C86C:;
  c->r[3]=c->r[30]|c->r[30]; // 8024C86C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024C870
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024C874
  c->lr=c->r[0]; // 8024C878
  c->r[1]=c->r[1]+0x00000010u; // 8024C87C
  return; // 8024C880
}

// fn_8024C884
void f_8024C884(Ctx* __restrict c) {
  trace_call(0x8024C884u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C884
  c->r[0]=c->lr; // 8024C888
  {uint32_t ea=c->r[2]+0xFFFFD81Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024C88C
  c->r[4]=0u+0xFFFFFFFFu; // 8024C890
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024C894
  c->r[0]=0u+0x00000000u; // 8024C898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024C89C
  c->r[31]=c->r[3]|c->r[3]; // 8024C8A0
  W32(c->r[3]+0x00001F34u,c->r[4]); // 8024C8A4
  c->r[4]=0u+0x00000000u; // 8024C8A8
  W8(c->r[3]+0x00001F38u,c->r[0]); // 8024C8AC
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[0]);} // 8024C8B0
  c->r[3]=c->r[3]+0x000008D0u; // 8024C8B4
  c->lr=0x8024C8BCu; f_8002B91C(c); // 8024C8B8
  c->r[0]=R32(c->r[31]+0x000007E4u); // 8024C8BC
  c->r[0]=c->r[0]|0x01000000u; // 8024C8C0
  W32(c->r[31]+0x000007E4u,c->r[0]); // 8024C8C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024C8C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024C8CC
  c->lr=c->r[0]; // 8024C8D0
  c->r[1]=c->r[1]+0x00000010u; // 8024C8D4
  return; // 8024C8D8
}

// fn_8024C8DC
void f_8024C8DC(Ctx* __restrict c) {
  trace_call(0x8024C8DCu);
  f_800B5DFC(c); return; // 8024C8DC
}

// fn_8024C8E0
void f_8024C8E0(Ctx* __restrict c) {
  trace_call(0x8024C8E0u);
  return; // 8024C8E0
}

// fn_8024C8E4
void f_8024C8E4(Ctx* __restrict c) {
  trace_call(0x8024C8E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024C8E4
  c->r[0]=c->lr; // 8024C8E8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8024C8EC
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024C8F0
  c->r[30]=c->r[5]|c->r[5]; // 8024C8F4
  c->r[28]=c->r[3]|c->r[3]; // 8024C8F8
  c->r[31]=c->r[1]|c->r[1]; // 8024C8FC
  c->r[3]=c->r[30]|c->r[30]; // 8024C900
  c->r[29]=c->r[4]|c->r[4]; // 8024C904
  c->r[12]=R32(c->r[30]+0x00000000u); // 8024C908
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8024C90C
  c->ctr=c->r[12]; // 8024C910
  if (true) { c->lr=0x8024C918u; dispatch(c,c->ctr); } // 8024C914
  cmps(c,0,(int32_t)c->r[3],1025); // 8024C918
  if (!crb(c,0)) { goto L_8024C92C; } // 8024C91C
  cmps(c,0,(int32_t)c->r[3],3); // 8024C920
  if (crb(c,2)) { goto L_8024C938; } // 8024C924
  goto L_8024CA10; // 8024C928
L_8024C92C:;
  cmps(c,0,(int32_t)c->r[3],1032); // 8024C92C
  if (!crb(c,0)) { goto L_8024CA10; } // 8024C930
  goto L_8024C954; // 8024C934
L_8024C938:;
  c->r[3]=c->r[28]|c->r[28]; // 8024C938
  c->lr=0x8024C940u; f_800ACA58(c); // 8024C93C
  c->r[3]=c->r[28]|c->r[28]; // 8024C940
  c->r[4]=c->r[29]|c->r[29]; // 8024C944
  c->r[5]=c->r[30]|c->r[30]; // 8024C948
  c->lr=0x8024C950u; f_800B5B1C(c); // 8024C94C
  goto L_8024CA20; // 8024C950
L_8024C954:;
  c->r[3]=R32(c->r[28]+0x00000054u); // 8024C954
  cmps(c,0,(int32_t)c->r[3],0); // 8024C958
  if (crb(c,2)) { goto L_8024C9C0; } // 8024C95C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024C960
  c->r[12]=R32(c->r[12]+0x00000010u); // 8024C964
  c->ctr=c->r[12]; // 8024C968
  if (true) { c->lr=0x8024C970u; dispatch(c,c->ctr); } // 8024C96C
  c->lr=0x8024C974u; f_8007A658(c); // 8024C970
  c->r[30]=c->r[3]|c->r[3]; // 8024C974
  c->r[3]=0u+0x00000002u; // 8024C978
  c->lr=0x8024C980u; f_8007A658(c); // 8024C97C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8024C980
  if (!crb(c,1)) { goto L_8024C9B8; } // 8024C984
  c->r[30]=addc(c,c->r[28],0x00000280u,0); cr0(c,c->r[30]); // 8024C988
  if (crb(c,2)) { goto L_8024C9B0; } // 8024C98C
  W32(c->r[31]+0x00000034u,c->r[1]); // 8024C990
  c->r[3]=c->r[30]|c->r[30]; // 8024C994
  c->lr=0x8024C99Cu; f_8007614C(c); // 8024C998
  goto L_8024C9B0; // 8024C99C
  c->r[3]=0u+0x00000000u; // 8024C9A0
  c->r[4]=0u+0x00000000u; // 8024C9A4
  c->r[5]=0u+0x00000000u; // 8024C9A8
  c->lr=0x8024C9B0u; f_8028BC3C(c); // 8024C9AC
L_8024C9B0:;
  W32(c->r[28]+0x00000058u,c->r[30]); // 8024C9B0
  goto L_8024CA20; // 8024C9B4
L_8024C9B8:;
  c->r[0]=0u+0x00000000u; // 8024C9B8
  W32(c->r[28]+0x00000054u,c->r[0]); // 8024C9BC
L_8024C9C0:;
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 8024C9C0
  c->r[0]=c->r[3]+0x00000001u; // 8024C9C4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8024C9C8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8024C9CC
  c->r[0]=c->r[0]^c->r[3]; // 8024C9D0
  c->r[0]=c->r[0]-c->r[3]; // 8024C9D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 8024C9D8
  c->r[0]=c->r[28]+c->r[0]; // 8024C9DC
  c->r[30]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[30]); // 8024C9E0
  if (crb(c,2)) { goto L_8024CA08; } // 8024C9E4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8024C9E8
  c->r[3]=c->r[30]|c->r[30]; // 8024C9EC
  c->lr=0x8024C9F4u; f_8007614C(c); // 8024C9F0
  goto L_8024CA08; // 8024C9F4
  c->r[3]=0u+0x00000000u; // 8024C9F8
  c->r[4]=0u+0x00000000u; // 8024C9FC
  c->r[5]=0u+0x00000000u; // 8024CA00
  c->lr=0x8024CA08u; f_8028BC3C(c); // 8024CA04
L_8024CA08:;
  W32(c->r[28]+0x00000054u,c->r[30]); // 8024CA08
  goto L_8024CA20; // 8024CA0C
L_8024CA10:;
  c->r[3]=c->r[28]|c->r[28]; // 8024CA10
  c->r[4]=c->r[29]|c->r[29]; // 8024CA14
  c->r[5]=c->r[30]|c->r[30]; // 8024CA18
  c->lr=0x8024CA20u; f_800B5B1C(c); // 8024CA1C
L_8024CA20:;
  c->r[10]=c->r[31]|c->r[31]; // 8024CA20
  {uint32_t ea=c->r[10]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024CA24
  c->r[10]=R32(c->r[1]+0x00000000u); // 8024CA28
  c->r[0]=R32(c->r[10]+0x00000004u); // 8024CA2C
  c->r[1]=c->r[10]|c->r[10]; // 8024CA30
  c->lr=c->r[0]; // 8024CA34
  return; // 8024CA38
}

// fn_8024CA3C
void f_8024CA3C(Ctx* __restrict c) {
  trace_call(0x8024CA3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CA3C
  c->r[0]=c->lr; // 8024CA40
  W32(c->r[1]+0x00000054u,c->r[0]); // 8024CA44
  {uint32_t ea=c->r[1]+0x00000044u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024CA48
  c->r[31]=c->r[1]|c->r[1]; // 8024CA4C
  c->r[29]=c->r[3]|c->r[3]; // 8024CA50
  c->r[0]=R32(c->r[3]+0x00000054u); // 8024CA54
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[1]);} // 8024CA58
  cmps(c,0,(int32_t)c->r[0],0); // 8024CA5C
  W32(c->r[3]+0x00001F1Cu,c->r[4]); // 8024CA60
  W32(c->r[3]+0x00001F20u,c->r[5]); // 8024CA64
  W32(c->r[3]+0x00001F24u,c->r[6]); // 8024CA68
  {uint32_t ea=c->r[3]+0x00001F28u; WF32(ea,c->f[3]);} // 8024CA6C
  {uint32_t ea=c->r[3]+0x00001F2Cu; WF32(ea,c->f[2]);} // 8024CA70
  if (crb(c,2)) { goto L_8024CAC8; } // 8024CA74
  c->r[3]=c->r[0]|c->r[0]; // 8024CA78
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024CA7C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8024CA80
  c->ctr=c->r[12]; // 8024CA84
  if (true) { c->lr=0x8024CA8Cu; dispatch(c,c->ctr); } // 8024CA88
  c->lr=0x8024CA90u; f_8007A658(c); // 8024CA8C
  c->r[30]=c->r[3]|c->r[3]; // 8024CA90
  c->r[3]=0u+0x00000008u; // 8024CA94
  c->lr=0x8024CA9Cu; f_8007A658(c); // 8024CA98
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8024CA9C
  if (!crb(c,1)) { goto L_8024CAC0; } // 8024CAA0
  c->r[30]=addc(c,c->r[29],0x00000280u,0); cr0(c,c->r[30]); // 8024CAA4
  if (crb(c,2)) { goto L_8024CAB8; } // 8024CAA8
  W32(c->r[31]+0x00000034u,c->r[1]); // 8024CAAC
  c->r[3]=c->r[30]|c->r[30]; // 8024CAB0
  c->lr=0x8024CAB8u; f_800AC470(c); // 8024CAB4
L_8024CAB8:;
  W32(c->r[29]+0x00000058u,c->r[30]); // 8024CAB8
  goto L_8024CB00; // 8024CABC
L_8024CAC0:;
  c->r[0]=0u+0x00000000u; // 8024CAC0
  W32(c->r[29]+0x00000054u,c->r[0]); // 8024CAC4
L_8024CAC8:;
  c->r[3]=R32(c->r[29]+0x0000005Cu); // 8024CAC8
  c->r[0]=c->r[3]+0x00000001u; // 8024CACC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8024CAD0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8024CAD4
  c->r[0]=c->r[0]^c->r[3]; // 8024CAD8
  c->r[0]=c->r[0]-c->r[3]; // 8024CADC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 8024CAE0
  c->r[0]=c->r[29]+c->r[0]; // 8024CAE4
  c->r[30]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[30]); // 8024CAE8
  if (crb(c,2)) { goto L_8024CAFC; } // 8024CAEC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8024CAF0
  c->r[3]=c->r[30]|c->r[30]; // 8024CAF4
  c->lr=0x8024CAFCu; f_800AC470(c); // 8024CAF8
L_8024CAFC:;
  W32(c->r[29]+0x00000054u,c->r[30]); // 8024CAFC
L_8024CB00:;
  c->r[10]=c->r[31]|c->r[31]; // 8024CB00
  {uint32_t ea=c->r[10]+0x00000044u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024CB04
  c->r[10]=R32(c->r[1]+0x00000000u); // 8024CB08
  c->r[0]=R32(c->r[10]+0x00000004u); // 8024CB0C
  c->r[1]=c->r[10]|c->r[10]; // 8024CB10
  c->lr=c->r[0]; // 8024CB14
  return; // 8024CB18
}

// fn_8024CB1C
void f_8024CB1C(Ctx* __restrict c) {
  trace_call(0x8024CB1Cu);
  c->r[4]=0u+0x00000000u; // 8024CB1C
  c->r[3]=c->r[3]+0x000008D0u; // 8024CB20
  f_8002B91C(c); return; // 8024CB24
}

// fn_8024CB28
void f_8024CB28(Ctx* __restrict c) {
  trace_call(0x8024CB28u);
  return; // 8024CB28
}

// fn_8024CB2C
void f_8024CB2C(Ctx* __restrict c) {
  trace_call(0x8024CB2Cu);
  return; // 8024CB2C
}

// fn_8024CB30
void f_8024CB30(Ctx* __restrict c) {
  trace_call(0x8024CB30u);
  return; // 8024CB30
}

// fn_8024CB34
void f_8024CB34(Ctx* __restrict c) {
  trace_call(0x8024CB34u);
  c->r[4]=0u+0x00000001u; // 8024CB34
  c->r[0]=0u+0x00000000u; // 8024CB38
  W8(c->r[3]+0x00001F38u,c->r[4]); // 8024CB3C
  W32(c->r[3]+0x00001F18u,c->r[0]); // 8024CB40
  return; // 8024CB44
}

// fn_8024CB48
void f_8024CB48(Ctx* __restrict c) {
  trace_call(0x8024CB48u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CB48
  c->r[0]=c->lr; // 8024CB4C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8024CB50
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 8024CB54
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 8024CB58
  c->r[11]=c->r[1]+0x000000A0u; // 8024CB5C
  c->lr=0x8024CB64u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024CB60
  c->r[31]=c->r[1]|c->r[1]; // 8024CB64
  c->r[0]=R32(c->r[3]+0x00001F18u); // 8024CB68
  c->r[30]=c->r[3]|c->r[3]; // 8024CB6C
  cmps(c,0,(int32_t)c->r[0],10); // 8024CB70
  if (crb(c,2)) { goto L_8024CC58; } // 8024CB74
  if (!crb(c,0)) { goto L_8024CB88; } // 8024CB78
  cmps(c,0,(int32_t)c->r[0],0); // 8024CB7C
  if (crb(c,2)) { goto L_8024CB94; } // 8024CB80
  goto L_8024CE18; // 8024CB84
L_8024CB88:;
  cmps(c,0,(int32_t)c->r[0],20); // 8024CB88
  if (crb(c,2)) { goto L_8024CDFC; } // 8024CB8C
  goto L_8024CE18; // 8024CB90
L_8024CB94:;
  {uint32_t ea=c->r[3]+0x00001F2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CB94
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024CB98
  fcmp(c,0,c->f[1],c->f[0]); // 8024CB9C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8024CBA0
  if (!crb(c,2)) { goto L_8024CE18; } // 8024CBA4
  c->r[4]=0u+0x00000001u; // 8024CBA8
  c->r[3]=c->r[3]+0x000008D0u; // 8024CBAC
  c->lr=0x8024CBB4u; f_8002B91C(c); // 8024CBB0
  c->r[3]=R32(c->r[30]+0x00000028u); // 8024CBB4
  c->r[4]=0u+0x00000001u; // 8024CBB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024CBBC
  c->r[12]=R32(c->r[12]+0x00000008u); // 8024CBC0
  c->ctr=c->r[12]; // 8024CBC4
  if (true) { c->lr=0x8024CBCCu; dispatch(c,c->ctr); } // 8024CBC8
  c->r[0]=R32(c->r[30]+0x00001F20u); // 8024CBCC
  cmps(c,0,(int32_t)c->r[0],1); // 8024CBD0
  if (crb(c,2)) { goto L_8024CC18; } // 8024CBD4
  if (!crb(c,0)) { goto L_8024CC50; } // 8024CBD8
  cmps(c,0,(int32_t)c->r[0],0); // 8024CBDC
  if (!crb(c,0)) { goto L_8024CBE8; } // 8024CBE0
  goto L_8024CC50; // 8024CBE4
L_8024CBE8:;
  {uint32_t ea=c->r[2]+0xFFFFD828u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024CBE8
  c->r[4]=0u+0x80410000u; // 8024CBEC
  c->r[0]=R32(c->r[30]+0x00001F1Cu); // 8024CBF0
  c->r[4]=c->r[4]+0x00000A60u; // 8024CBF4
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CBF8
  c->r[3]=c->r[30]|c->r[30]; // 8024CBFC
  {uint32_t ea=c->r[30]+0x00001F30u; WF32(ea,c->f[0]);} // 8024CC00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024CC04
  c->f[2]=c->f[1]; // 8024CC08
  c->r[4]=R32(c->r[4]+c->r[0]); // 8024CC0C
  c->lr=0x8024CC14u; f_8024C35C(c); // 8024CC10
  goto L_8024CC50; // 8024CC14
L_8024CC18:;
  {uint32_t ea=c->r[2]+0xFFFFD82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024CC18
  c->r[5]=0u+0x80410000u; // 8024CC1C
  c->r[4]=R32(c->r[30]+0x00001F1Cu); // 8024CC20
  c->r[5]=c->r[5]+0x00000A90u; // 8024CC24
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CC28
  c->r[3]=c->r[30]|c->r[30]; // 8024CC2C
  c->r[0]=R32(c->r[30]+0x00001F24u); // 8024CC30
  c->r[6]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8024CC34
  {uint32_t ea=c->r[30]+0x00001F30u; WF32(ea,c->f[0]);} // 8024CC38
  c->f[2]=c->f[1]; // 8024CC3C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024CC40
  c->r[0]=c->r[5]+c->r[6]; // 8024CC44
  c->r[4]=R32(c->r[4]+c->r[0]); // 8024CC48
  c->lr=0x8024CC50u; f_8024C35C(c); // 8024CC4C
L_8024CC50:;
  c->r[0]=0u+0x0000000Au; // 8024CC50
  W32(c->r[30]+0x00001F18u,c->r[0]); // 8024CC54
L_8024CC58:;
  {uint32_t ea=c->r[30]+0x00001F30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CC58
  c->r[3]=c->r[30]|c->r[30]; // 8024CC5C
  c->lr=0x8024CC64u; f_8024C4C0(c); // 8024CC60
  cmps(c,0,(int32_t)c->r[3],0); // 8024CC64
  if (crb(c,2)) { goto L_8024CE18; } // 8024CC68
  {uint32_t ea=c->r[30]+0x00001F28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CC6C
  c->r[29]=0u+0x00000000u; // 8024CC70
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024CC74
  c->r[3]=c->r[31]+0x00000060u; // 8024CC78
  W32(c->r[31]+0x00000020u,c->r[29]); // 8024CC7C
  c->r[4]=c->r[31]+0x00000018u; // 8024CC80
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 8024CC84
  c->r[5]=0u+0x00000000u; // 8024CC88
  W32(c->r[31]+0x00000024u,c->r[29]); // 8024CC8C
  W32(c->r[31]+0x00000018u,c->r[29]); // 8024CC90
  W32(c->r[31]+0x0000001Cu,c->r[29]); // 8024CC94
  c->lr=0x8024CC9Cu; f_80068BE0(c); // 8024CC98
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CC9C
  c->r[4]=0u+0x803F0000u; // 8024CCA0
  c->r[4]=c->r[4]+0x00007644u; // 8024CCA4
  c->r[3]=c->r[31]+0x00000070u; // 8024CCA8
  c->f[2]=c->f[1]; // 8024CCAC
  W32(c->r[31]+0x00000060u,c->r[4]); // 8024CCB0
  c->f[3]=c->f[1]; // 8024CCB4
  c->lr=0x8024CCBCu; f_80065358(c); // 8024CCB8
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[31]);} // 8024CCBC
  W32(c->r[31]+0x00000080u,c->r[29]); // 8024CCC0
  c->lr=0x8024CCC8u; f_801E4C90(c); // 8024CCC4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8024CCC8
  c->r[3]=c->r[13]+0xFFFF94B8u; // 8024CCCC
  c->r[4]=R32(c->r[3]+c->r[0]); // 8024CCD0
  c->r[28]=0u+0x00000000u; // 8024CCD4
  c->r[3]=R32(c->r[4]+0x00000000u); // 8024CCD8
  c->r[0]=R32(c->r[4]+0x00000004u); // 8024CCDC
  cmps(c,0,(int32_t)c->r[3],0); // 8024CCE0
  W32(c->r[31]+0x00000028u,c->r[3]); // 8024CCE4
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8024CCE8
  if (crb(c,2)) { goto L_8024CD14; } // 8024CCEC
  c->lr=0x8024CCF4u; f_8003F2FC(c); // 8024CCF0
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8024CCF4
  c->r[4]=R32(c->r[31]+0x00000028u); // 8024CCF8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8024CCFC
  c->r[3]=c->r[3]+c->r[0]; // 8024CD00
  c->r[0]=R32(c->r[3]+0x00000008u); // 8024CD04
  cmpu(c,0,c->r[4],c->r[0]); // 8024CD08
  if (!crb(c,2)) { goto L_8024CD14; } // 8024CD0C
  c->r[28]=0u+0x00000001u; // 8024CD10
L_8024CD14:;
  cmps(c,0,(int32_t)c->r[28],0); // 8024CD14
  if (crb(c,2)) { goto L_8024CDF4; } // 8024CD18
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 8024CD1C
  c->lr=0x8024CD24u; f_802A6EE4(c); // 8024CD20
  cmps(c,0,(int32_t)c->r[3],0); // 8024CD24
  c->r[28]=c->r[3]|c->r[3]; // 8024CD28
  if (crb(c,2)) { goto L_8024CDF4; } // 8024CD2C
  if (crb(c,2)) { goto L_8024CD84; } // 8024CD30
  c->r[29]=0u+0x00000000u; // 8024CD34
  W32(c->r[31]+0x00000044u,c->r[1]); // 8024CD38
  c->r[4]=c->r[31]+0x00000010u; // 8024CD3C
  c->r[5]=0u+0x00000000u; // 8024CD40
  W32(c->r[31]+0x00000008u,c->r[29]); // 8024CD44
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 8024CD48
  W32(c->r[31]+0x00000010u,c->r[29]); // 8024CD4C
  W32(c->r[31]+0x00000014u,c->r[29]); // 8024CD50
  c->lr=0x8024CD58u; f_80068BE0(c); // 8024CD54
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CD58
  c->r[4]=0u+0x803F0000u; // 8024CD5C
  c->r[4]=c->r[4]+0x00007644u; // 8024CD60
  c->r[3]=c->r[28]+0x00000010u; // 8024CD64
  c->f[2]=c->f[1]; // 8024CD68
  W32(c->r[28]+0x00000000u,c->r[4]); // 8024CD6C
  c->f[3]=c->f[1]; // 8024CD70
  c->lr=0x8024CD78u; f_80065358(c); // 8024CD74
  {uint32_t ea=c->r[2]+0xFFFFD820u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024CD78
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 8024CD7C
  W32(c->r[28]+0x00000020u,c->r[29]); // 8024CD80
L_8024CD84:;
  c->r[5]=R32(c->r[31]+0x00000064u); // 8024CD84
  c->r[3]=c->r[28]+0x00000010u; // 8024CD88
  c->r[0]=R32(c->r[31]+0x00000068u); // 8024CD8C
  c->r[4]=c->r[31]+0x00000070u; // 8024CD90
  W32(c->r[28]+0x00000004u,c->r[5]); // 8024CD94
  W32(c->r[28]+0x00000008u,c->r[0]); // 8024CD98
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 8024CD9C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8024CDA0
  c->lr=0x8024CDA8u; f_8003F468(c); // 8024CDA4
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024CDA8
  c->r[29]=addc(c,c->r[28],0x00000024u,0); cr0(c,c->r[29]); // 8024CDAC
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 8024CDB0
  c->r[0]=R32(c->r[31]+0x00000080u); // 8024CDB4
  W32(c->r[28]+0x00000020u,c->r[0]); // 8024CDB8
  if (crb(c,2)) { goto L_8024CDD4; } // 8024CDBC
  c->r[0]=0u+0x00000000u; // 8024CDC0
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 8024CDC4
  W32(c->r[29]+0x00000000u,c->r[0]); // 8024CDC8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8024CDCC
  W32(c->r[29]+0x00000008u,c->r[28]); // 8024CDD0
L_8024CDD4:;
  c->lr=0x8024CDD8u; f_8003F2FC(c); // 8024CDD4
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8024CDD8
  c->r[4]=c->r[29]|c->r[29]; // 8024CDDC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8024CDE0
  c->r[3]=c->r[3]+c->r[0]; // 8024CDE4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8024CDE8
  c->r[3]=c->r[3]+0x00000030u; // 8024CDEC
  c->lr=0x8024CDF4u; f_8003FD14(c); // 8024CDF0
L_8024CDF4:;
  c->r[0]=0u+0x00000014u; // 8024CDF4
  W32(c->r[30]+0x00001F18u,c->r[0]); // 8024CDF8
L_8024CDFC:;
  {uint32_t ea=c->r[2]+0xFFFFD824u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CDFC
  c->r[3]=c->r[30]|c->r[30]; // 8024CE00
  c->lr=0x8024CE08u; f_8024C4C0(c); // 8024CE04
  cmps(c,0,(int32_t)c->r[3],0); // 8024CE08
  if (crb(c,2)) { goto L_8024CE18; } // 8024CE0C
  c->r[3]=c->r[30]|c->r[30]; // 8024CE10
  c->lr=0x8024CE18u; f_800ACA58(c); // 8024CE14
L_8024CE18:;
  c->r[3]=0u+0x804D0000u; // 8024CE18
  {uint32_t ea=c->r[30]+0x00001F2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024CE1C
  c->r[3]=c->r[3]+0x00003318u; // 8024CE20
  c->r[10]=c->r[31]|c->r[31]; // 8024CE24
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CE28
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8024CE2C
  {uint32_t ea=c->r[30]+0x00001F2Cu; WF32(ea,c->f[0]);} // 8024CE30
  {uint32_t ea=c->r[10]+0x000000A8u; psq_load(c,31,ea,0,0);} // 8024CE34
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[31]=RF64(ea);} // 8024CE38
  c->r[11]=c->r[10]+0x000000A0u; // 8024CE3C
  c->lr=0x8024CE44u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024CE40
  c->r[10]=R32(c->r[1]+0x00000000u); // 8024CE44
  c->r[0]=R32(c->r[10]+0x00000004u); // 8024CE48
  c->r[1]=c->r[10]|c->r[10]; // 8024CE4C
  c->lr=c->r[0]; // 8024CE50
  return; // 8024CE54
}

// fn_8024CE58
void f_8024CE58(Ctx* __restrict c) {
  trace_call(0x8024CE58u);
  return; // 8024CE58
}

// fn_8024CE5C
void f_8024CE5C(Ctx* __restrict c) {
  trace_call(0x8024CE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CE5C
  c->r[0]=c->lr; // 8024CE60
  c->r[4]=0u+0x00000000u; // 8024CE64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024CE68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024CE6C
  c->r[31]=c->r[3]|c->r[3]; // 8024CE70
  c->r[3]=c->r[3]+0x000008D0u; // 8024CE74
  c->lr=0x8024CE7Cu; f_8002B91C(c); // 8024CE78
  c->r[0]=0u+0x00000000u; // 8024CE7C
  W8(c->r[31]+0x00001F38u,c->r[0]); // 8024CE80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024CE84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024CE88
  c->lr=c->r[0]; // 8024CE8C
  c->r[1]=c->r[1]+0x00000010u; // 8024CE90
  return; // 8024CE94
}

// fn_8024CE98
void f_8024CE98(Ctx* __restrict c) {
  trace_call(0x8024CE98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CE98
  c->r[0]=c->lr; // 8024CE9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024CEA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024CEA4
  c->r[31]=c->r[3]|c->r[3]; // 8024CEA8
  c->r[0]=R32(c->r[3]+0x00001F20u); // 8024CEAC
  cmps(c,0,(int32_t)c->r[0],1); // 8024CEB0
  if (crb(c,2)) { goto L_8024CEEC; } // 8024CEB4
  if (!crb(c,0)) { goto L_8024CF18; } // 8024CEB8
  cmps(c,0,(int32_t)c->r[0],0); // 8024CEBC
  if (!crb(c,0)) { goto L_8024CEC8; } // 8024CEC0
  goto L_8024CF18; // 8024CEC4
L_8024CEC8:;
  c->r[0]=R32(c->r[3]+0x00001F1Cu); // 8024CEC8
  c->r[4]=0u+0x80410000u; // 8024CECC
  c->r[4]=c->r[4]+0x00000A78u; // 8024CED0
  {uint32_t ea=c->r[2]+0xFFFFD830u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CED4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024CED8
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024CEDC
  c->r[4]=R32(c->r[4]+c->r[0]); // 8024CEE0
  c->lr=0x8024CEE8u; f_8024C35C(c); // 8024CEE4
  goto L_8024CF18; // 8024CEE8
L_8024CEEC:;
  c->r[4]=R32(c->r[3]+0x00001F1Cu); // 8024CEEC
  c->r[5]=0u+0x80410000u; // 8024CEF0
  c->r[0]=R32(c->r[3]+0x00001F24u); // 8024CEF4
  c->r[5]=c->r[5]+0x00000AC0u; // 8024CEF8
  c->r[6]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8024CEFC
  {uint32_t ea=c->r[2]+0xFFFFD830u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CF00
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024CF04
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024CF08
  c->r[0]=c->r[5]+c->r[6]; // 8024CF0C
  c->r[4]=R32(c->r[4]+c->r[0]); // 8024CF10
  c->lr=0x8024CF18u; f_8024C35C(c); // 8024CF14
L_8024CF18:;
  c->r[3]=c->r[31]+0x000008D0u; // 8024CF18
  c->r[4]=0u+0x00000001u; // 8024CF1C
  c->lr=0x8024CF24u; f_8002B91C(c); // 8024CF20
  c->r[3]=R32(c->r[31]+0x00000028u); // 8024CF24
  c->r[4]=0u+0x00000000u; // 8024CF28
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024CF2C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8024CF30
  c->ctr=c->r[12]; // 8024CF34
  if (true) { c->lr=0x8024CF3Cu; dispatch(c,c->ctr); } // 8024CF38
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024CF3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024CF40
  c->lr=c->r[0]; // 8024CF44
  c->r[1]=c->r[1]+0x00000010u; // 8024CF48
  return; // 8024CF4C
}

// fn_8024CF50
void f_8024CF50(Ctx* __restrict c) {
  trace_call(0x8024CF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024CF50
  c->r[0]=c->lr; // 8024CF54
  {uint32_t ea=c->r[2]+0xFFFFD824u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024CF5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024CF60
  c->r[31]=c->r[3]|c->r[3]; // 8024CF64
  c->lr=0x8024CF6Cu; f_8024C4C0(c); // 8024CF68
  cmps(c,0,(int32_t)c->r[3],0); // 8024CF6C
  if (crb(c,2)) { goto L_8024CF7C; } // 8024CF70
  c->r[3]=c->r[31]|c->r[31]; // 8024CF74
  c->lr=0x8024CF7Cu; f_800ACA58(c); // 8024CF78
L_8024CF7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024CF7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024CF80
  c->lr=c->r[0]; // 8024CF84
  c->r[1]=c->r[1]+0x00000010u; // 8024CF88
  return; // 8024CF8C
}

// fn_8024CF90
void f_8024CF90(Ctx* __restrict c) {
  trace_call(0x8024CF90u);
  return; // 8024CF90
}

// fn_8024CF94
void f_8024CF94(Ctx* __restrict c) {
  trace_call(0x8024CF94u);
  return; // 8024CF94
}

// fn_8024CF98
void f_8024CF98(Ctx* __restrict c) {
  trace_call(0x8024CF98u);
  {uint32_t ea=c->r[2]+0xFFFFD818u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024CF98
  c->r[3]=0u+0x805E0000u; // 8024CF9C
  {uint32_t ea=c->r[2]+0xFFFFD81Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024CFA0
  c->r[3]=c->r[3]+0xFFFFDF68u; // 8024CFA4
  c->f[3]=c->f[1]; // 8024CFA8
  f_8003F588(c); return; // 8024CFAC
}

// fn_8024CFB0
void f_8024CFB0(Ctx* __restrict c) {
  trace_call(0x8024CFB0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFB0
  f_8024CF94(c); return; // 8024CFB4
}

// fn_8024CFB8
void f_8024CFB8(Ctx* __restrict c) {
  trace_call(0x8024CFB8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFB8
  f_8024CB30(c); return; // 8024CFBC
}

// fn_8024CFC0
void f_8024CFC0(Ctx* __restrict c) {
  trace_call(0x8024CFC0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFC0
  f_8024CE5C(c); return; // 8024CFC4
}

// fn_8024CFC8
void f_8024CFC8(Ctx* __restrict c) {
  trace_call(0x8024CFC8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFC8
  f_8024CE98(c); return; // 8024CFCC
}

// fn_8024CFD0
void f_8024CFD0(Ctx* __restrict c) {
  trace_call(0x8024CFD0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFD0
  f_8024CB1C(c); return; // 8024CFD4
}

// fn_8024CFD8
void f_8024CFD8(Ctx* __restrict c) {
  trace_call(0x8024CFD8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFD8
  f_8024CB34(c); return; // 8024CFDC
}

// fn_8024CFE0
void f_8024CFE0(Ctx* __restrict c) {
  trace_call(0x8024CFE0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFE0
  f_8024C8E0(c); return; // 8024CFE4
}

// fn_8024CFE8
void f_8024CFE8(Ctx* __restrict c) {
  trace_call(0x8024CFE8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFE8
  f_8024CF90(c); return; // 8024CFEC
}

// fn_8024CFF0
void f_8024CFF0(Ctx* __restrict c) {
  trace_call(0x8024CFF0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFF0
  f_8024CB2C(c); return; // 8024CFF4
}

// fn_8024CFF8
void f_8024CFF8(Ctx* __restrict c) {
  trace_call(0x8024CFF8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024CFF8
  f_8024CE58(c); return; // 8024CFFC
}

// fn_8024D000
void f_8024D000(Ctx* __restrict c) {
  trace_call(0x8024D000u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024D000
  f_8024CF50(c); return; // 8024D004
}

// fn_8024D008
void f_8024D008(Ctx* __restrict c) {
  trace_call(0x8024D008u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024D008
  f_8024CB28(c); return; // 8024D00C
}

// fn_8024D010
void f_8024D010(Ctx* __restrict c) {
  trace_call(0x8024D010u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024D010
  f_8024CB48(c); return; // 8024D014
}

// fn_8024D018
void f_8024D018(Ctx* __restrict c) {
  trace_call(0x8024D018u);
  return; // 8024D018
}

// fn_8024D01C
void f_8024D01C(Ctx* __restrict c) {
  trace_call(0x8024D01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D01C
  c->r[0]=c->lr; // 8024D020
  W32(c->r[1]+0x00000074u,c->r[0]); // 8024D024
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8024D028
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8024D02C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8024D030
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8024D034
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 8024D038
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 8024D03C
  c->r[11]=c->r[1]+0x00000040u; // 8024D040
  c->lr=0x8024D048u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024D044
  c->f[29]=c->f[1]; // 8024D048
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D04C
  c->f[30]=c->f[2]; // 8024D050
  W32(c->r[3]+0x00001F48u,c->r[4]); // 8024D054
  c->f[31]=c->f[3]; // 8024D058
  c->r[29]=c->r[3]|c->r[3]; // 8024D05C
  c->f[3]=c->f[1]; // 8024D060
  {uint32_t ea=c->r[2]+0xFFFFD84Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D064
  c->r[31]=c->r[5]|c->r[5]; // 8024D068
  c->r[30]=c->r[6]|c->r[6]; // 8024D06C
  c->r[3]=c->r[1]+0x00000010u; // 8024D070
  c->lr=0x8024D078u; f_800521A0(c); // 8024D074
  c->r[4]=c->r[3]|c->r[3]; // 8024D078
  c->r[3]=c->r[29]+0x00001F18u; // 8024D07C
  c->lr=0x8024D084u; f_8003F468(c); // 8024D080
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D084
  cmps(c,0,(int32_t)c->r[31],0); // 8024D088
  {uint32_t ea=c->r[29]+0x00001F6Cu; WF32(ea,c->f[0]);} // 8024D08C
  if (!crb(c,2)) { goto L_8024D0C8; } // 8024D090
  {uint32_t ea=c->r[2]+0xFFFFD850u; c->f[5]=c->ps1[5]=RF32(ea);} // 8024D094
  {uint32_t ea=c->r[2]+0xFFFFD854u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024D098
  {uint32_t ea=c->r[2]+0xFFFFD858u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024D09C
  {uint32_t ea=c->r[2]+0xFFFFD85Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D0A0
  {uint32_t ea=c->r[2]+0xFFFFD860u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D0A4
  {uint32_t ea=c->r[2]+0xFFFFD864u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D0A8
  {uint32_t ea=c->r[29]+0x00001F50u; WF32(ea,c->f[5]);} // 8024D0AC
  {uint32_t ea=c->r[29]+0x00001F54u; WF32(ea,c->f[4]);} // 8024D0B0
  {uint32_t ea=c->r[29]+0x00001F58u; WF32(ea,c->f[3]);} // 8024D0B4
  {uint32_t ea=c->r[29]+0x00001F5Cu; WF32(ea,c->f[2]);} // 8024D0B8
  {uint32_t ea=c->r[29]+0x00001F64u; WF32(ea,c->f[1]);} // 8024D0BC
  {uint32_t ea=c->r[29]+0x00001F68u; WF32(ea,c->f[0]);} // 8024D0C0
  goto L_8024D0FC; // 8024D0C4
L_8024D0C8:;
  {uint32_t ea=c->r[2]+0xFFFFD870u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D0C8
  {uint32_t ea=c->r[2]+0xFFFFD868u; c->f[5]=c->ps1[5]=RF32(ea);} // 8024D0CC
  {uint32_t ea=c->r[2]+0xFFFFD850u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024D0D0
  {uint32_t ea=c->r[2]+0xFFFFD86Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8024D0D4
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D0D8
  {uint32_t ea=c->r[2]+0xFFFFD878u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D0DC
  {uint32_t ea=c->r[29]+0x00001F1Cu; WF32(ea,c->f[5]);} // 8024D0E0
  {uint32_t ea=c->r[29]+0x00001F50u; WF32(ea,c->f[4]);} // 8024D0E4
  {uint32_t ea=c->r[29]+0x00001F54u; WF32(ea,c->f[3]);} // 8024D0E8
  {uint32_t ea=c->r[29]+0x00001F58u; WF32(ea,c->f[2]);} // 8024D0EC
  {uint32_t ea=c->r[29]+0x00001F5Cu; WF32(ea,c->f[1]);} // 8024D0F0
  {uint32_t ea=c->r[29]+0x00001F64u; WF32(ea,c->f[2]);} // 8024D0F4
  {uint32_t ea=c->r[29]+0x00001F68u; WF32(ea,c->f[0]);} // 8024D0F8
L_8024D0FC:;
  {uint32_t ea=c->r[2]+0xFFFFD87Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D0FC
  c->r[3]=c->r[1]+0x0000000Cu; // 8024D100
  c->r[4]=c->r[1]+0x00000008u; // 8024D104
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[29]); // 8024D108
  c->lr=0x8024D110u; f_80394374(c); // 8024D10C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D110
  {uint32_t ea=c->r[2]+0xFFFFD880u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D114
  {uint32_t ea=c->r[29]+0x00001F18u; WF32(ea,c->f[0]);} // 8024D118
  {uint32_t ea=c->r[2]+0xFFFFD884u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D11C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D120
  {uint32_t ea=c->r[29]+0x00001F20u; WF32(ea,c->f[2]);} // 8024D124
  {uint32_t ea=c->r[13]+0xFFFF97C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D128
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8024D12C
  fcmp(c,0,c->f[1],c->f[0]); // 8024D130
  {uint32_t ea=c->r[13]+0xFFFF97C0u; WF32(ea,c->f[1]);} // 8024D134
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024D138
  if (!crb(c,2)) { goto L_8024D148; } // 8024D13C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8024D140
  {uint32_t ea=c->r[13]+0xFFFF97C0u; WF32(ea,c->f[0]);} // 8024D144
L_8024D148:;
  W32(c->r[29]+0x00001F4Cu,c->r[31]); // 8024D148
  c->lr=0x8024D150u; f_80291D94(c); // 8024D14C
  c->r[0]=c->r[3]^0x80000000u; // 8024D150
  c->r[31]=0u+0x43300000u; // 8024D154
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024D158
  c->r[3]=c->r[29]+0x00001F18u; // 8024D15C
  {uint32_t ea=c->r[2]+0xFFFFD840u; c->f[3]=RF64(ea);} // 8024D160
  c->r[4]=c->r[3]|c->r[3]; // 8024D164
  W32(c->r[1]+0x00000020u,c->r[31]); // 8024D168
  {uint32_t ea=c->r[2]+0xFFFFD83Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D16C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8024D170
  {uint32_t ea=c->r[2]+0xFFFFD838u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D174
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 8024D178
  {uint32_t ea=c->r[29]+0x00001F50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D17C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 8024D180
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 8024D184
  {uint32_t ea=c->r[29]+0x00001F3Cu; WF32(ea,c->f[0]);} // 8024D188
  c->lr=0x8024D190u; f_80265750(c); // 8024D18C
  c->r[0]=c->r[30]^0x80000000u; // 8024D190
  W32(c->r[1]+0x00000028u,c->r[31]); // 8024D194
  {uint32_t ea=c->r[2]+0xFFFFD840u; c->f[1]=RF64(ea);} // 8024D198
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8024D19C
  c->r[3]=R32(c->r[29]+0x000007E4u); // 8024D1A0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 8024D1A4
  c->r[0]=c->r[3]|0x01000000u; // 8024D1A8
  {uint32_t ea=c->r[29]+0x000003A4u; WF32(ea,c->f[30]);} // 8024D1AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8024D1B0
  {uint32_t ea=c->r[29]+0x000003A8u; WF32(ea,c->f[30]);} // 8024D1B4
  {uint32_t ea=c->r[29]+0x00001F60u; WF32(ea,c->f[31]);} // 8024D1B8
  W32(c->r[29]+0x000007E4u,c->r[0]); // 8024D1BC
  {uint32_t ea=c->r[29]+0x00001F40u; WF32(ea,c->f[0]);} // 8024D1C0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8024D1C4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8024D1C8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8024D1CC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8024D1D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 8024D1D4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 8024D1D8
  c->r[11]=c->r[1]+0x00000040u; // 8024D1DC
  c->lr=0x8024D1E4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024D1E0
  c->r[0]=R32(c->r[1]+0x00000074u); // 8024D1E4
  c->lr=c->r[0]; // 8024D1E8
  c->r[1]=c->r[1]+0x00000070u; // 8024D1EC
  return; // 8024D1F0
}

// fn_8024D1F4
void f_8024D1F4(Ctx* __restrict c) {
  trace_call(0x8024D1F4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D1F4
  c->r[0]=c->lr; // 8024D1F8
  W32(c->r[1]+0x00000084u,c->r[0]); // 8024D1FC
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8024D200
  c->r[31]=c->r[3]|c->r[3]; // 8024D204
  c->r[3]=c->r[1]+0x00000038u; // 8024D208
  c->r[12]=R32(c->r[31]+0x000008D0u); // 8024D20C
  c->r[4]=c->r[31]+0x000008D0u; // 8024D210
  c->r[12]=R32(c->r[12]+0x00000040u); // 8024D214
  c->ctr=c->r[12]; // 8024D218
  if (true) { c->lr=0x8024D220u; dispatch(c,c->ctr); } // 8024D21C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D220
  c->r[3]=c->r[1]+0x00000020u; // 8024D224
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D228
  {uint32_t ea=c->r[1]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024D22C
  c->lr=0x8024D234u; f_800521A0(c); // 8024D230
  c->r[3]=c->r[31]+0x00001F24u; // 8024D234
  c->r[4]=c->r[1]+0x00000020u; // 8024D238
  c->lr=0x8024D240u; f_8003F468(c); // 8024D23C
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D240
  c->r[3]=c->r[1]+0x00000014u; // 8024D244
  {uint32_t ea=c->r[2]+0xFFFFD84Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D248
  c->f[3]=c->f[1]; // 8024D24C
  c->lr=0x8024D254u; f_800521A0(c); // 8024D250
  c->r[4]=c->r[3]|c->r[3]; // 8024D254
  c->r[3]=c->r[31]+0x00001F30u; // 8024D258
  c->lr=0x8024D260u; f_8003F468(c); // 8024D25C
  c->r[0]=R32(c->r[31]+0x00001F4Cu); // 8024D260
  cmps(c,0,(int32_t)c->r[0],0); // 8024D264
  if (crb(c,2)) { goto L_8024D270; } // 8024D268
  goto L_8024D280; // 8024D26C
L_8024D270:;
  {uint32_t ea=c->r[2]+0xFFFFD838u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D270
  {uint32_t ea=c->r[31]+0x00001F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D274
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8024D278
  {uint32_t ea=c->r[31]+0x00001F40u; WF32(ea,c->f[0]);} // 8024D27C
L_8024D280:;
  c->lr=0x8024D284u; f_80291D94(c); // 8024D280
  c->r[3]=c->r[3]^0x80000000u; // 8024D284
  c->r[0]=0u+0x43300000u; // 8024D288
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 8024D28C
  c->r[3]=c->r[1]+0x0000002Cu; // 8024D290
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D294
  W32(c->r[1]+0x00000068u,c->r[0]); // 8024D298
  {uint32_t ea=c->r[2]+0xFFFFD840u; c->f[1]=RF64(ea);} // 8024D29C
  c->f[3]=c->f[2]; // 8024D2A0
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 8024D2A4
  {uint32_t ea=c->r[2]+0xFFFFD83Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8024D2A8
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[1]); // 8024D2AC
  {uint32_t ea=c->r[2]+0xFFFFD888u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D2B0
  {uint32_t ea=c->r[31]+0x00001F44u; WF32(ea,c->f[2]);} // 8024D2B4
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D2B8
  c->f[4]=c->ps1[4]=S(c->f[5]/c->f[4]); // 8024D2BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 8024D2C0
  {uint32_t ea=c->r[31]+0x00001F6Cu; WF32(ea,c->f[0]);} // 8024D2C4
  c->lr=0x8024D2CCu; f_800521A0(c); // 8024D2C8
  c->r[3]=c->r[1]+0x00000038u; // 8024D2CC
  c->r[4]=c->r[31]+0x00001F18u; // 8024D2D0
  c->r[5]=c->r[1]+0x0000002Cu; // 8024D2D4
  c->lr=0x8024D2DCu; f_80074DF8(c); // 8024D2D8
  c->r[3]=c->r[1]+0x00000038u; // 8024D2DC
  c->r[4]=c->r[31]+0x00001F24u; // 8024D2E0
  c->lr=0x8024D2E8u; f_80032FF4(c); // 8024D2E4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 8024D2E8
  c->r[3]=c->r[31]+0x000008D0u; // 8024D2EC
  c->r[4]=c->r[1]+0x00000038u; // 8024D2F0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8024D2F4
  c->ctr=c->r[12]; // 8024D2F8
  if (true) { c->lr=0x8024D300u; dispatch(c,c->ctr); } // 8024D2FC
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D300
  c->r[3]=c->r[1]+0x00000008u; // 8024D304
  {uint32_t ea=c->r[2]+0xFFFFD84Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D308
  c->f[3]=c->f[1]; // 8024D30C
  c->lr=0x8024D314u; f_800521A0(c); // 8024D310
  c->r[4]=c->r[3]|c->r[3]; // 8024D314
  c->r[3]=c->r[31]+0x00001F30u; // 8024D318
  c->lr=0x8024D320u; f_8003F468(c); // 8024D31C
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D320
  {uint32_t ea=c->r[31]+0x00001F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D324
  fcmp(c,0,c->f[1],c->f[0]); // 8024D328
  if (!crb(c,2)) { goto L_8024D344; } // 8024D32C
  c->r[3]=c->r[31]|c->r[31]; // 8024D330
  c->r[4]=c->r[1]+0x00000038u; // 8024D334
  c->lr=0x8024D33Cu; f_8024DE88(c); // 8024D338
  c->r[3]=c->r[31]|c->r[31]; // 8024D33C
  c->lr=0x8024D344u; f_8024D954(c); // 8024D340
L_8024D344:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 8024D344
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8024D348
  c->lr=c->r[0]; // 8024D34C
  c->r[1]=c->r[1]+0x00000080u; // 8024D350
  return; // 8024D354
}

// fn_8024D358
void f_8024D358(Ctx* __restrict c) {
  trace_call(0x8024D358u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D358
  c->r[0]=c->lr; // 8024D35C
  W32(c->r[1]+0x00000124u,c->r[0]); // 8024D360
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 8024D364
  c->r[31]=c->r[3]|c->r[3]; // 8024D368
  c->r[4]=c->r[31]+0x000008D0u; // 8024D36C
  W32(c->r[1]+0x00000118u,c->r[30]); // 8024D370
  c->r[12]=R32(c->r[3]+0x000008D0u); // 8024D374
  c->r[3]=c->r[1]+0x000000DCu; // 8024D378
  c->r[5]=R32(c->r[2]+0xFFFFD88Cu); // 8024D37C
  c->r[0]=R32(c->r[2]+0xFFFFD890u); // 8024D380
  c->r[12]=R32(c->r[12]+0x00000040u); // 8024D384
  W32(c->r[1]+0x00000008u,c->r[5]); // 8024D388
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024D38C
  c->ctr=c->r[12]; // 8024D390
  if (true) { c->lr=0x8024D398u; dispatch(c,c->ctr); } // 8024D394
  {uint32_t ea=c->r[31]+0x00001F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D398
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D39C
  fcmp(c,0,c->f[0],c->f[1]); // 8024D3A0
  if (!crb(c,1)) { goto L_8024D3DC; } // 8024D3A4
  c->r[3]=0u+0x804D0000u; // 8024D3A8
  c->r[3]=c->r[3]+0x00003318u; // 8024D3AC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D3B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024D3B4
  fcmp(c,0,c->f[0],c->f[1]); // 8024D3B8
  {uint32_t ea=c->r[31]+0x00001F40u; WF32(ea,c->f[0]);} // 8024D3BC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8024D3C0
  if (!crb(c,2)) { goto L_8024D71C; } // 8024D3C4
  {uint32_t ea=c->r[31]+0x00001F40u; WF32(ea,c->f[1]);} // 8024D3C8
  c->r[3]=c->r[31]|c->r[31]; // 8024D3CC
  c->r[4]=c->r[1]+0x000000DCu; // 8024D3D0
  c->lr=0x8024D3D8u; f_8024DE88(c); // 8024D3D4
  goto L_8024D71C; // 8024D3D8
L_8024D3DC:;
  c->r[30]=0u+0x804D0000u; // 8024D3DC
  {uint32_t ea=c->r[31]+0x00001F44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D3E0
  c->r[30]=c->r[30]+0x00003318u; // 8024D3E4
  {uint32_t ea=c->r[31]+0x00001F5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D3E8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D3EC
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 8024D3F0
  fcmp(c,0,c->f[2],c->f[1]); // 8024D3F4
  {uint32_t ea=c->r[31]+0x00001F44u; WF32(ea,c->f[2]);} // 8024D3F8
  if (!crb(c,1)) { goto L_8024D51C; } // 8024D3FC
  c->r[0]=R32(c->r[31]+0x00001F4Cu); // 8024D400
  c->r[3]=c->r[1]+0x00000008u; // 8024D404
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024D408
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D40C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8024D410
  fcmp(c,0,c->f[2],c->f[0]); // 8024D414
  if (!crb(c,0)) { goto L_8024D4C4; } // 8024D418
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D41C
  c->r[3]=c->r[1]+0x00000064u; // 8024D420
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D424
  {uint32_t ea=c->r[1]+0x00000108u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024D428
  c->lr=0x8024D430u; f_800521A0(c); // 8024D42C
  c->lr=0x8024D434u; f_80061A4C(c); // 8024D430
  c->r[4]=c->r[1]+0x00000070u; // 8024D434
  {uint32_t ea=c->r[3]+0x00000384u; psq_load(c,0,ea,0,0);} // 8024D438
  {uint32_t ea=c->r[1]+0x00000064u; psq_load(c,1,ea,0,0);} // 8024D43C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024D440
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8024D444
  {uint32_t ea=c->r[3]+0x0000038Cu; psq_load(c,0,ea,1,0);} // 8024D448
  {uint32_t ea=c->r[1]+0x0000006Cu; psq_load(c,1,ea,1,0);} // 8024D44C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024D450
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 8024D454
  c->r[3]=c->r[1]+0x00000094u; // 8024D458
  c->lr=0x8024D460u; f_8003F468(c); // 8024D45C
  c->r[3]=c->r[1]+0x00000094u; // 8024D460
  c->r[4]=c->r[3]|c->r[3]; // 8024D464
  c->lr=0x8024D46Cu; f_80265750(c); // 8024D468
  c->r[4]=R32(c->r[30]+0x00000028u); // 8024D46C
  c->r[0]=0u+0x43300000u; // 8024D470
  W32(c->r[1]+0x00000110u,c->r[0]); // 8024D474
  c->r[3]=c->r[1]+0x00000058u; // 8024D478
  c->r[0]=c->r[4]^0x80000000u; // 8024D47C
  {uint32_t ea=c->r[2]+0xFFFFD840u; c->f[1]=RF64(ea);} // 8024D480
  W32(c->r[1]+0x00000114u,c->r[0]); // 8024D484
  c->r[4]=c->r[31]+0x00001F18u; // 8024D488
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D48C
  c->r[5]=c->r[1]+0x00000094u; // 8024D490
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=RF64(ea);} // 8024D494
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024D498
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8024D49C
  {uint32_t ea=c->r[2]+0xFFFFD894u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D4A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8024D4A4
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 8024D4A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8024D4AC
  c->lr=0x8024D4B4u; f_8024DF50(c); // 8024D4B0
  c->r[3]=c->r[1]+0x000000A0u; // 8024D4B4
  c->r[4]=c->r[1]+0x00000058u; // 8024D4B8
  c->lr=0x8024D4C0u; f_8003F468(c); // 8024D4BC
  goto L_8024D528; // 8024D4C0
L_8024D4C4:;
  c->r[4]=R32(c->r[30]+0x00000028u); // 8024D4C4
  c->r[0]=0u+0x43300000u; // 8024D4C8
  W32(c->r[1]+0x00000110u,c->r[0]); // 8024D4CC
  c->r[3]=c->r[1]+0x0000004Cu; // 8024D4D0
  c->r[0]=c->r[4]^0x80000000u; // 8024D4D4
  {uint32_t ea=c->r[2]+0xFFFFD840u; c->f[1]=RF64(ea);} // 8024D4D8
  W32(c->r[1]+0x00000114u,c->r[0]); // 8024D4DC
  c->r[4]=c->r[31]+0x00001F18u; // 8024D4E0
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D4E4
  c->r[5]=c->r[31]+0x00001F30u; // 8024D4E8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=RF64(ea);} // 8024D4EC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024D4F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8024D4F4
  {uint32_t ea=c->r[2]+0xFFFFD898u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D4F8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8024D4FC
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 8024D500
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8024D504
  c->lr=0x8024D50Cu; f_8024DF50(c); // 8024D508
  c->r[3]=c->r[1]+0x000000A0u; // 8024D50C
  c->r[4]=c->r[1]+0x0000004Cu; // 8024D510
  c->lr=0x8024D518u; f_8003F468(c); // 8024D514
  goto L_8024D528; // 8024D518
L_8024D51C:;
  c->r[3]=c->r[1]+0x000000A0u; // 8024D51C
  c->r[4]=c->r[31]+0x00001F18u; // 8024D520
  c->lr=0x8024D528u; f_8003F468(c); // 8024D524
L_8024D528:;
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D528
  c->r[3]=c->r[1]+0x00000088u; // 8024D52C
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D530
  c->f[3]=c->f[1]; // 8024D534
  c->lr=0x8024D53Cu; f_800521A0(c); // 8024D538
  c->r[3]=c->r[1]+0x00000088u; // 8024D53C
  c->r[4]=c->r[1]+0x000000A0u; // 8024D540
  c->r[5]=c->r[1]+0x00000040u; // 8024D544
  c->lr=0x8024D54Cu; f_80265810(c); // 8024D548
  c->r[3]=c->r[1]+0x00000040u; // 8024D54C
  c->lr=0x8024D554u; f_80065368(c); // 8024D550
  cmps(c,0,(int32_t)c->r[3],0); // 8024D554
  if (crb(c,2)) { goto L_8024D570; } // 8024D558
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D55C
  c->r[3]=c->r[1]+0x00000088u; // 8024D560
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D564
  c->f[3]=c->f[2]; // 8024D568
  c->lr=0x8024D570u; f_80065358(c); // 8024D56C
L_8024D570:;
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D570
  c->r[3]=c->r[1]+0x0000007Cu; // 8024D574
  c->f[2]=c->f[1]; // 8024D578
  c->f[3]=c->f[1]; // 8024D57C
  c->lr=0x8024D584u; f_800521A0(c); // 8024D580
  c->r[3]=c->r[1]+0x000000ACu; // 8024D584
  c->r[4]=c->r[1]+0x000000A0u; // 8024D588
  c->r[5]=c->r[1]+0x00000088u; // 8024D58C
  c->lr=0x8024D594u; f_80074DF8(c); // 8024D590
  {uint32_t ea=c->r[31]+0x00001F6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D594
  {uint32_t ea=c->r[31]+0x00001F44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D598
  {uint32_t ea=c->r[31]+0x00001F64u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D59C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8024D5A0
  {uint32_t ea=c->r[2]+0xFFFFD89Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D5A4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8024D5A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8024D5AC
  c->lr=0x8024D5B4u; f_803942AC(c); // 8024D5B0
  {uint32_t ea=c->r[31]+0x00001F68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D5B4
  c->r[3]=c->r[1]+0x000000ACu; // 8024D5B8
  c->r[4]=c->r[1]+0x0000007Cu; // 8024D5BC
  c->r[5]=c->r[1]+0x00000034u; // 8024D5C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8024D5C4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 8024D5C8
  c->lr=0x8024D5D0u; f_802652E8(c); // 8024D5CC
  c->r[3]=c->r[1]+0x0000007Cu; // 8024D5D0
  c->r[4]=c->r[1]+0x00000034u; // 8024D5D4
  c->lr=0x8024D5DCu; f_8003F468(c); // 8024D5D8
  c->r[30]=0u+0x804D0000u; // 8024D5DC
  {uint32_t ea=c->r[31]+0x00001F3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D5E0
  c->r[30]=c->r[30]+0x00003318u; // 8024D5E4
  c->r[5]=c->r[1]+0x0000001Cu; // 8024D5E8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D5EC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8024D5F0
  {uint32_t ea=c->r[1]+0x000000A0u; psq_load(c,1,ea,0,0);} // 8024D5F4
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024D5F8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 8024D5FC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,1,ea,1,0);} // 8024D600
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024D604
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,1,ea,1,0);} // 8024D608
  c->r[3]=c->r[1]+0x00000028u; // 8024D60C
  c->r[4]=c->r[31]+0x00001F24u; // 8024D610
  c->lr=0x8024D618u; f_801011E8(c); // 8024D614
  c->r[3]=c->r[31]+0x00001F24u; // 8024D618
  c->r[4]=c->r[1]+0x00000028u; // 8024D61C
  c->lr=0x8024D624u; f_8003F468(c); // 8024D620
  c->r[3]=c->r[1]+0x00000010u; // 8024D624
  c->r[4]=c->r[31]+0x00001F24u; // 8024D628
  c->r[5]=c->r[1]+0x0000007Cu; // 8024D62C
  c->lr=0x8024D634u; f_801011E8(c); // 8024D630
  c->r[3]=c->r[31]+0x00001F24u; // 8024D634
  c->r[4]=c->r[1]+0x00000010u; // 8024D638
  c->lr=0x8024D640u; f_8003F468(c); // 8024D63C
  c->r[3]=R32(c->r[30]+0x00000028u); // 8024D640
  c->r[0]=0u+0x43300000u; // 8024D644
  W32(c->r[1]+0x00000110u,c->r[0]); // 8024D648
  c->r[0]=c->r[3]^0x80000000u; // 8024D64C
  {uint32_t ea=c->r[2]+0xFFFFD840u; c->f[1]=RF64(ea);} // 8024D650
  W32(c->r[1]+0x00000114u,c->r[0]); // 8024D654
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8024D658
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=RF64(ea);} // 8024D65C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024D660
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 8024D664
  {uint32_t ea=c->r[31]+0x00001F58u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D668
  {uint32_t ea=c->r[31]+0x00001F3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D66C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8024D670
  {uint32_t ea=c->r[31]+0x00001F54u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D674
  c->f[2]=c->ps1[2]=S(c->f[4]/c->f[2]); // 8024D678
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[3],c->f[2],-c->f[1])); // 8024D67C
  fcmp(c,0,c->f[1],c->f[0]); // 8024D680
  {uint32_t ea=c->r[31]+0x00001F3Cu; WF32(ea,c->f[1]);} // 8024D684
  if (!crb(c,0)) { goto L_8024D690; } // 8024D688
  {uint32_t ea=c->r[31]+0x00001F3Cu; WF32(ea,c->f[0]);} // 8024D68C
L_8024D690:;
  c->r[3]=c->r[1]+0x000000DCu; // 8024D690
  c->r[4]=c->r[1]+0x000000A0u; // 8024D694
  c->r[5]=c->r[1]+0x00000088u; // 8024D698
  c->lr=0x8024D6A0u; f_80074DF8(c); // 8024D69C
  c->r[3]=c->r[1]+0x000000DCu; // 8024D6A0
  c->r[4]=c->r[31]+0x00001F24u; // 8024D6A4
  c->lr=0x8024D6ACu; f_80032FF4(c); // 8024D6A8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 8024D6AC
  c->r[3]=c->r[31]+0x000008D0u; // 8024D6B0
  c->r[4]=c->r[1]+0x000000DCu; // 8024D6B4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8024D6B8
  c->ctr=c->r[12]; // 8024D6BC
  if (true) { c->lr=0x8024D6C4u; dispatch(c,c->ctr); } // 8024D6C0
  c->r[3]=c->r[31]|c->r[31]; // 8024D6C4
  c->r[4]=c->r[1]+0x000000DCu; // 8024D6C8
  c->lr=0x8024D6D0u; f_8024DE14(c); // 8024D6CC
  c->r[3]=c->r[31]+0x00001F18u; // 8024D6D0
  c->r[4]=c->r[1]+0x000000A0u; // 8024D6D4
  c->lr=0x8024D6DCu; f_8003F468(c); // 8024D6D8
  {uint32_t ea=c->r[31]+0x00001F28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D6DC
  {uint32_t ea=c->r[2]+0xFFFFD838u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D6E0
  fcmp(c,0,c->f[1],c->f[0]); // 8024D6E4
  if (crb(c,0)) { goto L_8024D710; } // 8024D6E8
  c->r[3]=c->r[31]|c->r[31]; // 8024D6EC
  c->lr=0x8024D6F4u; f_8024D9EC(c); // 8024D6F0
  cmpu(c,0,c->r[3],0x00000001u); // 8024D6F4
  if (crb(c,2)) { goto L_8024D710; } // 8024D6F8
  {uint32_t ea=c->r[31]+0x00001F44u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D6FC
  {uint32_t ea=c->r[2]+0xFFFFD8A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D700
  fcmp(c,0,c->f[1],c->f[0]); // 8024D704
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024D708
  if (!crb(c,2)) { goto L_8024D71C; } // 8024D70C
L_8024D710:;
  c->r[3]=c->r[31]|c->r[31]; // 8024D710
  c->r[4]=0u+0x00000000u; // 8024D714
  c->lr=0x8024D71Cu; f_8024D8C4(c); // 8024D718
L_8024D71C:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 8024D71C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 8024D720
  c->r[30]=R32(c->r[1]+0x00000118u); // 8024D724
  c->lr=c->r[0]; // 8024D728
  c->r[1]=c->r[1]+0x00000120u; // 8024D72C
  return; // 8024D730
}

// fn_8024D734
void f_8024D734(Ctx* __restrict c) {
  trace_call(0x8024D734u);
  return; // 8024D734
}

// fn_8024D738
void f_8024D738(Ctx* __restrict c) {
  trace_call(0x8024D738u);
  return; // 8024D738
}

// fn_8024D73C
void f_8024D73C(Ctx* __restrict c) {
  trace_call(0x8024D73Cu);
  return; // 8024D73C
}

// fn_8024D740
void f_8024D740(Ctx* __restrict c) {
  trace_call(0x8024D740u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D740
  c->r[0]=c->lr; // 8024D744
  W32(c->r[1]+0x00000054u,c->r[0]); // 8024D748
  c->r[11]=c->r[1]+0x00000050u; // 8024D74C
  c->lr=0x8024D754u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024D750
  c->r[31]=c->r[1]|c->r[1]; // 8024D754
  c->r[30]=c->r[5]|c->r[5]; // 8024D758
  c->r[28]=c->r[3]|c->r[3]; // 8024D75C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8024D760
  c->r[3]=c->r[30]|c->r[30]; // 8024D764
  c->r[29]=c->r[4]|c->r[4]; // 8024D768
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8024D76C
  c->ctr=c->r[12]; // 8024D770
  if (true) { c->lr=0x8024D778u; dispatch(c,c->ctr); } // 8024D774
  cmps(c,0,(int32_t)c->r[3],3); // 8024D778
  if (crb(c,2)) { goto L_8024D7B4; } // 8024D77C
  if (!crb(c,0)) { goto L_8024D790; } // 8024D780
  cmps(c,0,(int32_t)c->r[3],2); // 8024D784
  if (!crb(c,0)) { goto L_8024D858; } // 8024D788
  goto L_8024D7A0; // 8024D78C
L_8024D790:;
  cmps(c,0,(int32_t)c->r[3],1030); // 8024D790
  if (!crb(c,0)) { goto L_8024D7A0; } // 8024D794
  cmps(c,0,(int32_t)c->r[3],1025); // 8024D798
  if (!crb(c,0)) { goto L_8024D868; } // 8024D79C
L_8024D7A0:;
  c->r[3]=c->r[28]|c->r[28]; // 8024D7A0
  c->r[4]=c->r[29]|c->r[29]; // 8024D7A4
  c->r[5]=c->r[30]|c->r[30]; // 8024D7A8
  c->lr=0x8024D7B0u; f_800B5B1C(c); // 8024D7AC
  goto L_8024D8A4; // 8024D7B0
L_8024D7B4:;
  c->r[3]=R32(c->r[28]+0x00000054u); // 8024D7B4
  cmps(c,0,(int32_t)c->r[3],0); // 8024D7B8
  if (crb(c,2)) { goto L_8024D80C; } // 8024D7BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024D7C0
  c->r[12]=R32(c->r[12]+0x00000010u); // 8024D7C4
  c->ctr=c->r[12]; // 8024D7C8
  if (true) { c->lr=0x8024D7D0u; dispatch(c,c->ctr); } // 8024D7CC
  c->lr=0x8024D7D4u; f_8007A658(c); // 8024D7D0
  c->r[27]=c->r[3]|c->r[3]; // 8024D7D4
  c->r[3]=0u+0x00000005u; // 8024D7D8
  c->lr=0x8024D7E0u; f_8007A658(c); // 8024D7DC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 8024D7E0
  if (!crb(c,1)) { goto L_8024D804; } // 8024D7E4
  c->r[27]=addc(c,c->r[28],0x00000280u,0); cr0(c,c->r[27]); // 8024D7E8
  if (crb(c,2)) { goto L_8024D7FC; } // 8024D7EC
  W32(c->r[31]+0x00000034u,c->r[1]); // 8024D7F0
  c->r[3]=c->r[27]|c->r[27]; // 8024D7F4
  c->lr=0x8024D7FCu; f_800AC890(c); // 8024D7F8
L_8024D7FC:;
  W32(c->r[28]+0x00000058u,c->r[27]); // 8024D7FC
  goto L_8024D844; // 8024D800
L_8024D804:;
  c->r[0]=0u+0x00000000u; // 8024D804
  W32(c->r[28]+0x00000054u,c->r[0]); // 8024D808
L_8024D80C:;
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 8024D80C
  c->r[0]=c->r[3]+0x00000001u; // 8024D810
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8024D814
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8024D818
  c->r[0]=c->r[0]^c->r[3]; // 8024D81C
  c->r[0]=c->r[0]-c->r[3]; // 8024D820
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 8024D824
  c->r[0]=c->r[28]+c->r[0]; // 8024D828
  c->r[27]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[27]); // 8024D82C
  if (crb(c,2)) { goto L_8024D840; } // 8024D830
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8024D834
  c->r[3]=c->r[27]|c->r[27]; // 8024D838
  c->lr=0x8024D840u; f_800AC890(c); // 8024D83C
L_8024D840:;
  W32(c->r[28]+0x00000054u,c->r[27]); // 8024D840
L_8024D844:;
  c->r[3]=c->r[28]|c->r[28]; // 8024D844
  c->r[4]=c->r[29]|c->r[29]; // 8024D848
  c->r[5]=c->r[30]|c->r[30]; // 8024D84C
  c->lr=0x8024D854u; f_800B5B1C(c); // 8024D850
  goto L_8024D8A4; // 8024D854
L_8024D858:;
  c->r[3]=c->r[28]|c->r[28]; // 8024D858
  c->r[4]=0u+0x00000000u; // 8024D85C
  c->lr=0x8024D864u; f_8024D8C4(c); // 8024D860
  goto L_8024D8A4; // 8024D864
L_8024D868:;
  c->r[0]=R32(c->r[28]+0x000007E4u); // 8024D868
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8024D86C
  if (!crb(c,2)) { goto L_8024D8A4; } // 8024D870
  c->r[3]=c->r[28]|c->r[28]; // 8024D874
  c->r[4]=c->r[29]|c->r[29]; // 8024D878
  c->r[5]=c->r[30]|c->r[30]; // 8024D87C
  c->lr=0x8024D884u; f_800B5B1C(c); // 8024D880
  {uint32_t ea=c->r[28]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024D884
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024D888
  fcmp(c,0,c->f[1],c->f[0]); // 8024D88C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8024D890
  if (!crb(c,2)) { goto L_8024D8A4; } // 8024D894
  c->r[3]=c->r[28]|c->r[28]; // 8024D898
  c->r[4]=0u+0x00000000u; // 8024D89C
  c->lr=0x8024D8A4u; f_8024D8C4(c); // 8024D8A0
L_8024D8A4:;
  c->r[10]=c->r[31]|c->r[31]; // 8024D8A4
  c->r[11]=c->r[10]+0x00000050u; // 8024D8A8
  c->lr=0x8024D8B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024D8AC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8024D8B0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8024D8B4
  c->r[1]=c->r[10]|c->r[10]; // 8024D8B8
  c->lr=c->r[0]; // 8024D8BC
  return; // 8024D8C0
}

// fn_8024D8C4
void f_8024D8C4(Ctx* __restrict c) {
  trace_call(0x8024D8C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D8C4
  c->r[0]=c->lr; // 8024D8C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024D8CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024D8D0
  c->r[31]=c->r[4]|c->r[4]; // 8024D8D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024D8D8
  c->r[30]=c->r[3]|c->r[3]; // 8024D8DC
  c->r[3]=c->r[3]+0x00001F70u; // 8024D8E0
  c->lr=0x8024D8E8u; f_80146F08(c); // 8024D8E4
  cmps(c,0,(int32_t)c->r[3],0); // 8024D8E8
  if (crb(c,2)) { goto L_8024D8FC; } // 8024D8EC
  c->r[4]=c->r[31]|c->r[31]; // 8024D8F0
  c->r[3]=c->r[30]+0x00001F70u; // 8024D8F4
  c->lr=0x8024D8FCu; f_80147098(c); // 8024D8F8
L_8024D8FC:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 8024D8FC
  c->r[3]=c->r[30]|c->r[30]; // 8024D900
  c->r[12]=R32(c->r[12]+0x00000030u); // 8024D904
  c->ctr=c->r[12]; // 8024D908
  if (true) { c->lr=0x8024D910u; dispatch(c,c->ctr); } // 8024D90C
  c->r[3]=R32(c->r[30]+0x00001F48u); // 8024D910
  c->r[0]=0u+0x43300000u; // 8024D914
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024D918
  c->r[0]=c->r[3]^0x80000000u; // 8024D91C
  {uint32_t ea=c->r[2]+0xFFFFD840u; c->f[1]=RF64(ea);} // 8024D920
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024D924
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024D928
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8024D92C
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024D930
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8024D934
  c->lr=0x8024D93Cu; f_80113E88(c); // 8024D938
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024D93C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024D940
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024D944
  c->lr=c->r[0]; // 8024D948
  c->r[1]=c->r[1]+0x00000020u; // 8024D94C
  return; // 8024D950
}

// fn_8024D954
void f_8024D954(Ctx* __restrict c) {
  trace_call(0x8024D954u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D954
  c->r[0]=c->lr; // 8024D958
  W32(c->r[1]+0x00000094u,c->r[0]); // 8024D95C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8024D960
  c->r[31]=c->r[3]|c->r[3]; // 8024D964
  c->lr=0x8024D96Cu; f_80051FF4(c); // 8024D968
  c->r[5]=0u+0x803E0000u; // 8024D96C
  c->r[4]=c->r[3]|c->r[3]; // 8024D970
  c->r[3]=c->r[1]+0x00000038u; // 8024D974
  c->r[6]=0u+0x00000001u; // 8024D978
  c->r[5]=c->r[5]+0x00005180u; // 8024D97C
  c->lr=0x8024D984u; f_8013DB40(c); // 8024D980
  c->r[3]=c->r[1]+0x00000038u; // 8024D984
  c->lr=0x8024D98Cu; f_80146F08(c); // 8024D988
  cmps(c,0,(int32_t)c->r[3],0); // 8024D98C
  if (crb(c,2)) { goto L_8024D9D8; } // 8024D990
  c->r[12]=R32(c->r[31]+0x000008D0u); // 8024D994
  c->r[4]=c->r[31]+0x000008D0u; // 8024D998
  c->r[3]=c->r[1]+0x00000008u; // 8024D99C
  c->r[12]=R32(c->r[12]+0x00000040u); // 8024D9A0
  c->ctr=c->r[12]; // 8024D9A4
  if (true) { c->lr=0x8024D9ACu; dispatch(c,c->ctr); } // 8024D9A8
  c->r[0]=0u+0x00000006u; // 8024D9AC
  c->r[5]=c->r[1]+0x00000034u; // 8024D9B0
  c->r[4]=c->r[1]+0x00000004u; // 8024D9B4
  c->ctr=c->r[0]; // 8024D9B8
L_8024D9BC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8024D9BC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8024D9C0
  W32(c->r[5]+0x00000004u,c->r[3]); // 8024D9C4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8024D9C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024D9BC; } // 8024D9CC
  c->r[3]=c->r[1]+0x00000038u; // 8024D9D0
  c->lr=0x8024D9D8u; f_80146A94(c); // 8024D9D4
L_8024D9D8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8024D9D8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8024D9DC
  c->lr=c->r[0]; // 8024D9E0
  c->r[1]=c->r[1]+0x00000090u; // 8024D9E4
  return; // 8024D9E8
}

// fn_8024D9EC
void f_8024D9EC(Ctx* __restrict c) {
  trace_call(0x8024D9ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024D9EC
  c->r[0]=c->lr; // 8024D9F0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8024D9F4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8024D9F8
  c->r[31]=c->r[3]|c->r[3]; // 8024D9FC
  c->r[3]=c->r[1]+0x00000014u; // 8024DA00
  c->r[12]=R32(c->r[31]+0x000008D0u); // 8024DA04
  c->r[4]=c->r[31]+0x000008D0u; // 8024DA08
  c->r[12]=R32(c->r[12]+0x00000040u); // 8024DA0C
  c->ctr=c->r[12]; // 8024DA10
  if (true) { c->lr=0x8024DA18u; dispatch(c,c->ctr); } // 8024DA14
  c->r[3]=c->r[1]+0x00000008u; // 8024DA18
  c->r[4]=c->r[1]+0x00000014u; // 8024DA1C
  c->lr=0x8024DA24u; f_80032FD8(c); // 8024DA20
  c->lr=0x8024DA28u; f_80061A4C(c); // 8024DA24
  c->r[3]=c->r[3]+0x00000384u; // 8024DA28
  c->r[4]=c->r[1]+0x00000008u; // 8024DA2C
  c->lr=0x8024DA34u; f_80265924(c); // 8024DA30
  {uint32_t ea=c->r[2]+0xFFFFD8A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024DA34
  fcmp(c,0,c->f[1],c->f[0]); // 8024DA38
  if (!crb(c,0)) { goto L_8024DAA0; } // 8024DA3C
  c->lr=0x8024DA44u; f_80291D94(c); // 8024DA40
  c->r[3]=c->r[3]^0x80000000u; // 8024DA44
  c->r[0]=0u+0x43300000u; // 8024DA48
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 8024DA4C
  {uint32_t ea=c->r[2]+0xFFFFD840u; c->f[3]=RF64(ea);} // 8024DA50
  W32(c->r[1]+0x00000048u,c->r[0]); // 8024DA54
  {uint32_t ea=c->r[2]+0xFFFFD83Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DA58
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 8024DA5C
  {uint32_t ea=c->r[2]+0xFFFFD8A8u; c->f[0]=RF64(ea);} // 8024DA60
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8024DA64
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8024DA68
  fcmp(c,0,c->f[1],c->f[0]); // 8024DA6C
  if (!crb(c,0)) { goto L_8024DA88; } // 8024DA70
  {uint32_t ea=c->r[31]+0x00001F60u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DA74
  c->r[3]=c->r[31]|c->r[31]; // 8024DA78
  c->r[4]=0u+0x00000003u; // 8024DA7C
  c->lr=0x8024DA84u; f_8024DAB8(c); // 8024DA80
  goto L_8024DA98; // 8024DA84
L_8024DA88:;
  {uint32_t ea=c->r[31]+0x00001F60u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DA88
  c->r[3]=c->r[31]|c->r[31]; // 8024DA8C
  c->r[4]=0u+0x00000004u; // 8024DA90
  c->lr=0x8024DA98u; f_8024DAB8(c); // 8024DA94
L_8024DA98:;
  c->r[3]=0u+0x00000001u; // 8024DA98
  goto L_8024DAA4; // 8024DA9C
L_8024DAA0:;
  c->r[3]=0u+0x00000000u; // 8024DAA0
L_8024DAA4:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 8024DAA4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8024DAA8
  c->lr=c->r[0]; // 8024DAAC
  c->r[1]=c->r[1]+0x00000060u; // 8024DAB0
  return; // 8024DAB4
}

// fn_8024DAB8
void f_8024DAB8(Ctx* __restrict c) {
  trace_call(0x8024DAB8u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DAB8
  c->r[0]=c->lr; // 8024DABC
  W32(c->r[1]+0x00000144u,c->r[0]); // 8024DAC0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 8024DAC4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 8024DAC8
  c->r[11]=c->r[1]+0x00000130u; // 8024DACC
  c->lr=0x8024DAD4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024DAD0
  c->f[31]=c->f[1]; // 8024DAD4
  cmps(c,0,(int32_t)c->r[4],2); // 8024DAD8
  c->r[31]=c->r[3]|c->r[3]; // 8024DADC
  c->r[29]=0u+0x00000000u; // 8024DAE0
  if (crb(c,2)) { goto L_8024DB0C; } // 8024DAE4
  if (!crb(c,0)) { goto L_8024DAFC; } // 8024DAE8
  cmps(c,0,(int32_t)c->r[4],0); // 8024DAEC
  if (crb(c,2)) { goto L_8024DDF4; } // 8024DAF0
  if (!crb(c,0)) { goto L_8024DB9C; } // 8024DAF4
  goto L_8024DDF4; // 8024DAF8
L_8024DAFC:;
  cmps(c,0,(int32_t)c->r[4],4); // 8024DAFC
  if (crb(c,2)) { goto L_8024DC28; } // 8024DB00
  if (!crb(c,0)) { goto L_8024DDF4; } // 8024DB04
  goto L_8024DCE0; // 8024DB08
L_8024DB0C:;
  c->r[29]=c->r[13]+0xFFFF94B8u; // 8024DB0C
  c->r[3]=R32(c->r[29]+0x00000004u); // 8024DB10
  cmps(c,0,(int32_t)c->r[3],0); // 8024DB14
  if (crb(c,2)) { goto L_8024DB9C; } // 8024DB18
  c->lr=0x8024DB20u; f_80067C50(c); // 8024DB1C
  cmps(c,0,(int32_t)c->r[3],1); // 8024DB20
  if (!crb(c,2)) { goto L_8024DB9C; } // 8024DB24
  c->r[5]=R32(c->r[31]+0x00001F24u); // 8024DB28
  c->r[4]=0u+0x803E0000u; // 8024DB2C
  c->r[0]=R32(c->r[31]+0x00001F28u); // 8024DB30
  c->r[4]=c->r[4]+0x00005180u; // 8024DB34
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DB38
  c->r[3]=c->r[31]+0x00000800u; // 8024DB3C
  W32(c->r[1]+0x00000060u,c->r[5]); // 8024DB40
  c->r[4]=c->r[4]+0x00000009u; // 8024DB44
  c->f[2]=c->f[1]; // 8024DB48
  c->r[5]=c->r[1]+0x00000060u; // 8024DB4C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8024DB50
  c->r[6]=0u+0x00000001u; // 8024DB54
  c->r[0]=R32(c->r[31]+0x00001F2Cu); // 8024DB58
  W32(c->r[1]+0x00000068u,c->r[0]); // 8024DB5C
  c->lr=0x8024DB64u; f_800C1BA0(c); // 8024DB60
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024DB64
  c->r[3]=c->r[1]+0x000000FCu; // 8024DB68
  c->r[4]=0u+0x00000000u; // 8024DB6C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 8024DB70
  c->lr=0x8024DB78u; f_8010541C(c); // 8024DB74
  c->r[6]=R32(c->r[29]+0x00000004u); // 8024DB78
  c->r[3]=c->r[1]+0x00000028u; // 8024DB7C
  c->r[4]=c->r[1]+0x000000FCu; // 8024DB80
  c->r[5]=R32(c->r[6]+0x00000000u); // 8024DB84
  c->r[0]=R32(c->r[6]+0x00000004u); // 8024DB88
  W32(c->r[1]+0x00000028u,c->r[5]); // 8024DB8C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8024DB90
  c->lr=0x8024DB98u; f_800BCDAC(c); // 8024DB94
  goto L_8024DDF4; // 8024DB98
L_8024DB9C:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 8024DB9C
  cmps(c,0,(int32_t)c->r[3],0); // 8024DBA0
  if (crb(c,2)) { goto L_8024DDF4; } // 8024DBA4
  c->lr=0x8024DBACu; f_80067C50(c); // 8024DBA8
  cmps(c,0,(int32_t)c->r[3],1); // 8024DBAC
  if (!crb(c,2)) { goto L_8024DDF4; } // 8024DBB0
  c->r[5]=R32(c->r[31]+0x00001F24u); // 8024DBB4
  c->r[4]=0u+0x803E0000u; // 8024DBB8
  c->r[0]=R32(c->r[31]+0x00001F28u); // 8024DBBC
  c->r[4]=c->r[4]+0x00005180u; // 8024DBC0
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DBC4
  c->r[3]=c->r[31]+0x00000800u; // 8024DBC8
  W32(c->r[1]+0x00000054u,c->r[5]); // 8024DBCC
  c->r[4]=c->r[4]+0x00000009u; // 8024DBD0
  c->f[2]=c->f[1]; // 8024DBD4
  c->r[5]=c->r[1]+0x00000054u; // 8024DBD8
  W32(c->r[1]+0x00000058u,c->r[0]); // 8024DBDC
  c->r[6]=0u+0x00000001u; // 8024DBE0
  c->r[0]=R32(c->r[31]+0x00001F2Cu); // 8024DBE4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8024DBE8
  c->lr=0x8024DBF0u; f_800C1BA0(c); // 8024DBEC
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024DBF0
  c->r[3]=c->r[1]+0x000000D8u; // 8024DBF4
  c->r[4]=0u+0x00000000u; // 8024DBF8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 8024DBFC
  c->lr=0x8024DC04u; f_8010541C(c); // 8024DC00
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 8024DC04
  c->r[3]=c->r[1]+0x00000020u; // 8024DC08
  c->r[4]=c->r[1]+0x000000D8u; // 8024DC0C
  c->r[5]=R32(c->r[6]+0x00000000u); // 8024DC10
  c->r[0]=R32(c->r[6]+0x00000004u); // 8024DC14
  W32(c->r[1]+0x00000020u,c->r[5]); // 8024DC18
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024DC1C
  c->lr=0x8024DC24u; f_800BCDAC(c); // 8024DC20
  goto L_8024DDF4; // 8024DC24
L_8024DC28:;
  c->r[3]=c->r[13]+0xFFFF94B8u; // 8024DC28
  c->r[3]=R32(c->r[3]+0x00000004u); // 8024DC2C
  cmps(c,0,(int32_t)c->r[3],0); // 8024DC30
  if (crb(c,2)) { goto L_8024DC4C; } // 8024DC34
  c->lr=0x8024DC3Cu; f_80067C50(c); // 8024DC38
  cmps(c,0,(int32_t)c->r[3],1); // 8024DC3C
  if (!crb(c,2)) { goto L_8024DC4C; } // 8024DC40
  c->lr=0x8024DC48u; f_80291D94(c); // 8024DC44
  c->r[29]=rotl(c->r[3],0)&0x00000001u; // 8024DC48
L_8024DC4C:;
  c->r[29]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8024DC4C
  c->r[30]=c->r[13]+0xFFFF94B8u; // 8024DC50
  c->r[3]=R32(c->r[30]+c->r[29]); // 8024DC54
  cmps(c,0,(int32_t)c->r[3],0); // 8024DC58
  if (crb(c,2)) { goto L_8024DDF4; } // 8024DC5C
  c->lr=0x8024DC64u; f_80067C50(c); // 8024DC60
  cmps(c,0,(int32_t)c->r[3],1); // 8024DC64
  if (!crb(c,2)) { goto L_8024DDF4; } // 8024DC68
  c->r[5]=R32(c->r[31]+0x00001F24u); // 8024DC6C
  c->r[4]=0u+0x803E0000u; // 8024DC70
  c->r[0]=R32(c->r[31]+0x00001F28u); // 8024DC74
  c->r[4]=c->r[4]+0x00005180u; // 8024DC78
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DC7C
  c->r[3]=c->r[31]+0x00000800u; // 8024DC80
  W32(c->r[1]+0x00000048u,c->r[5]); // 8024DC84
  c->r[4]=c->r[4]+0x00000009u; // 8024DC88
  c->f[2]=c->f[1]; // 8024DC8C
  c->r[5]=c->r[1]+0x00000048u; // 8024DC90
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8024DC94
  c->r[6]=0u+0x00000001u; // 8024DC98
  c->r[0]=R32(c->r[31]+0x00001F2Cu); // 8024DC9C
  W32(c->r[1]+0x00000050u,c->r[0]); // 8024DCA0
  c->lr=0x8024DCA8u; f_800C1BA0(c); // 8024DCA4
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024DCA8
  c->r[3]=c->r[1]+0x000000B4u; // 8024DCAC
  c->r[4]=0u+0x00000000u; // 8024DCB0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 8024DCB4
  c->lr=0x8024DCBCu; f_8010541C(c); // 8024DCB8
  c->r[6]=R32(c->r[30]+c->r[29]); // 8024DCBC
  c->r[3]=c->r[1]+0x00000018u; // 8024DCC0
  c->r[4]=c->r[1]+0x000000B4u; // 8024DCC4
  c->r[5]=R32(c->r[6]+0x00000000u); // 8024DCC8
  c->r[0]=R32(c->r[6]+0x00000004u); // 8024DCCC
  W32(c->r[1]+0x00000018u,c->r[5]); // 8024DCD0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8024DCD4
  c->lr=0x8024DCDCu; f_800BCDAC(c); // 8024DCD8
  goto L_8024DDF4; // 8024DCDC
L_8024DCE0:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 8024DCE0
  cmps(c,0,(int32_t)c->r[3],0); // 8024DCE4
  if (crb(c,2)) { goto L_8024DD68; } // 8024DCE8
  c->lr=0x8024DCF0u; f_80067C50(c); // 8024DCEC
  cmps(c,0,(int32_t)c->r[3],1); // 8024DCF0
  if (!crb(c,2)) { goto L_8024DD68; } // 8024DCF4
  c->r[5]=R32(c->r[31]+0x00001F24u); // 8024DCF8
  c->r[4]=0u+0x803E0000u; // 8024DCFC
  c->r[0]=R32(c->r[31]+0x00001F28u); // 8024DD00
  c->r[4]=c->r[4]+0x00005180u; // 8024DD04
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DD08
  c->r[3]=c->r[31]+0x00000800u; // 8024DD0C
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 8024DD10
  c->r[4]=c->r[4]+0x00000009u; // 8024DD14
  c->f[2]=c->f[1]; // 8024DD18
  c->r[5]=c->r[1]+0x0000003Cu; // 8024DD1C
  W32(c->r[1]+0x00000040u,c->r[0]); // 8024DD20
  c->r[6]=0u+0x00000001u; // 8024DD24
  c->r[0]=R32(c->r[31]+0x00001F2Cu); // 8024DD28
  W32(c->r[1]+0x00000044u,c->r[0]); // 8024DD2C
  c->lr=0x8024DD34u; f_800C1BA0(c); // 8024DD30
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024DD34
  c->r[3]=c->r[1]+0x00000090u; // 8024DD38
  c->r[4]=0u+0x00000000u; // 8024DD3C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 8024DD40
  c->lr=0x8024DD48u; f_8010541C(c); // 8024DD44
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 8024DD48
  c->r[3]=c->r[1]+0x00000010u; // 8024DD4C
  c->r[4]=c->r[1]+0x00000090u; // 8024DD50
  c->r[5]=R32(c->r[6]+0x00000000u); // 8024DD54
  c->r[0]=R32(c->r[6]+0x00000004u); // 8024DD58
  W32(c->r[1]+0x00000010u,c->r[5]); // 8024DD5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024DD60
  c->lr=0x8024DD68u; f_800BCDAC(c); // 8024DD64
L_8024DD68:;
  c->r[30]=c->r[13]+0xFFFF94B8u; // 8024DD68
  c->r[3]=R32(c->r[30]+0x00000004u); // 8024DD6C
  cmps(c,0,(int32_t)c->r[3],0); // 8024DD70
  if (crb(c,2)) { goto L_8024DDF4; } // 8024DD74
  c->lr=0x8024DD7Cu; f_80067C50(c); // 8024DD78
  cmps(c,0,(int32_t)c->r[3],1); // 8024DD7C
  if (!crb(c,2)) { goto L_8024DDF4; } // 8024DD80
  c->r[5]=R32(c->r[31]+0x00001F24u); // 8024DD84
  c->r[4]=0u+0x803E0000u; // 8024DD88
  c->r[0]=R32(c->r[31]+0x00001F28u); // 8024DD8C
  c->r[4]=c->r[4]+0x00005180u; // 8024DD90
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DD94
  c->r[3]=c->r[31]+0x00000800u; // 8024DD98
  W32(c->r[1]+0x00000030u,c->r[5]); // 8024DD9C
  c->r[4]=c->r[4]+0x00000009u; // 8024DDA0
  c->f[2]=c->f[1]; // 8024DDA4
  c->r[5]=c->r[1]+0x00000030u; // 8024DDA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024DDAC
  c->r[6]=0u+0x00000001u; // 8024DDB0
  c->r[0]=R32(c->r[31]+0x00001F2Cu); // 8024DDB4
  W32(c->r[1]+0x00000038u,c->r[0]); // 8024DDB8
  c->lr=0x8024DDC0u; f_800C1BA0(c); // 8024DDBC
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024DDC0
  c->r[3]=c->r[1]+0x0000006Cu; // 8024DDC4
  c->r[4]=0u+0x00000000u; // 8024DDC8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 8024DDCC
  c->lr=0x8024DDD4u; f_8010541C(c); // 8024DDD0
  c->r[6]=R32(c->r[30]+0x00000004u); // 8024DDD4
  c->r[3]=c->r[1]+0x00000008u; // 8024DDD8
  c->r[4]=c->r[1]+0x0000006Cu; // 8024DDDC
  c->r[5]=R32(c->r[6]+0x00000000u); // 8024DDE0
  c->r[0]=R32(c->r[6]+0x00000004u); // 8024DDE4
  W32(c->r[1]+0x00000008u,c->r[5]); // 8024DDE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024DDEC
  c->lr=0x8024DDF4u; f_800BCDAC(c); // 8024DDF0
L_8024DDF4:;
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 8024DDF4
  c->r[11]=c->r[1]+0x00000130u; // 8024DDF8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 8024DDFC
  c->lr=0x8024DE04u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024DE00
  c->r[0]=R32(c->r[1]+0x00000144u); // 8024DE04
  c->lr=c->r[0]; // 8024DE08
  c->r[1]=c->r[1]+0x00000140u; // 8024DE0C
  return; // 8024DE10
}

// fn_8024DE14
void f_8024DE14(Ctx* __restrict c) {
  trace_call(0x8024DE14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DE14
  c->r[0]=c->lr; // 8024DE18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024DE1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024DE20
  c->r[30]=c->r[3]|c->r[3]; // 8024DE24
  c->r[31]=c->r[4]|c->r[4]; // 8024DE28
  c->r[3]=c->r[3]+0x00001F70u; // 8024DE2C
  c->lr=0x8024DE34u; f_80146F08(c); // 8024DE30
  cmps(c,0,(int32_t)c->r[3],0); // 8024DE34
  if (crb(c,2)) { goto L_8024DE74; } // 8024DE38
  c->r[0]=0u+0x00000006u; // 8024DE3C
  c->r[5]=c->r[30]+0x00001F6Cu; // 8024DE40
  c->r[4]=c->r[31]+0xFFFFFFFCu; // 8024DE44
  c->ctr=c->r[0]; // 8024DE48
L_8024DE4C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8024DE4C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8024DE50
  W32(c->r[5]+0x00000004u,c->r[3]); // 8024DE54
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8024DE58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024DE4C; } // 8024DE5C
  c->r[12]=R32(c->r[30]+0x00001FA0u); // 8024DE60
  c->r[3]=c->r[30]+0x00001F70u; // 8024DE64
  c->r[12]=R32(c->r[12]+0x00000008u); // 8024DE68
  c->ctr=c->r[12]; // 8024DE6C
  if (true) { c->lr=0x8024DE74u; dispatch(c,c->ctr); } // 8024DE70
L_8024DE74:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024DE74
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024DE78
  c->lr=c->r[0]; // 8024DE7C
  c->r[1]=c->r[1]+0x00000010u; // 8024DE80
  return; // 8024DE84
}

// fn_8024DE88
void f_8024DE88(Ctx* __restrict c) {
  trace_call(0x8024DE88u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DE88
  c->r[0]=c->lr; // 8024DE8C
  W32(c->r[1]+0x00000064u,c->r[0]); // 8024DE90
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024DE94
  c->r[30]=c->r[3]|c->r[3]; // 8024DE98
  c->r[31]=c->r[4]|c->r[4]; // 8024DE9C
  c->r[4]=0u+0x00000000u; // 8024DEA0
  c->r[3]=c->r[3]+0x000008D0u; // 8024DEA4
  c->lr=0x8024DEACu; f_8002B91C(c); // 8024DEA8
  c->lr=0x8024DEB0u; f_80051FF4(c); // 8024DEAC
  c->r[5]=0u+0x803E0000u; // 8024DEB0
  c->r[4]=c->r[3]|c->r[3]; // 8024DEB4
  c->r[5]=c->r[5]+0x00005180u; // 8024DEB8
  c->r[3]=c->r[1]+0x00000008u; // 8024DEBC
  c->r[5]=c->r[5]+0x00000010u; // 8024DEC0
  c->r[6]=0u+0x00000001u; // 8024DEC4
  c->lr=0x8024DECCu; f_8013DB40(c); // 8024DEC8
  c->r[0]=0u+0x00000006u; // 8024DECC
  c->r[5]=c->r[30]+0x00001F6Cu; // 8024DED0
  c->r[4]=c->r[1]+0x00000004u; // 8024DED4
  c->ctr=c->r[0]; // 8024DED8
L_8024DEDC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8024DEDC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8024DEE0
  W32(c->r[5]+0x00000004u,c->r[3]); // 8024DEE4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8024DEE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024DEDC; } // 8024DEEC
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8024DEF0
  c->r[3]=c->r[30]+0x00001FA8u; // 8024DEF4
  c->r[4]=c->r[1]+0x00000040u; // 8024DEF8
  W32(c->r[30]+0x00001FA4u,c->r[0]); // 8024DEFC
  c->lr=0x8024DF04u; f_80350B88(c); // 8024DF00
  c->r[5]=R32(c->r[1]+0x00000048u); // 8024DF04
  c->r[3]=c->r[30]|c->r[30]; // 8024DF08
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8024DF0C
  c->r[4]=c->r[31]|c->r[31]; // 8024DF10
  W32(c->r[30]+0x00001FB0u,c->r[5]); // 8024DF14
  W32(c->r[30]+0x00001FB4u,c->r[0]); // 8024DF18
  c->lr=0x8024DF20u; f_8024DE14(c); // 8024DF1C
  c->r[3]=c->r[30]+0x00001F70u; // 8024DF20
  c->lr=0x8024DF28u; f_80146F08(c); // 8024DF24
  cmps(c,0,(int32_t)c->r[3],0); // 8024DF28
  if (!crb(c,2)) { goto L_8024DF3C; } // 8024DF2C
  c->r[3]=c->r[30]|c->r[30]; // 8024DF30
  c->r[4]=0u+0x00000000u; // 8024DF34
  c->lr=0x8024DF3Cu; f_8024D8C4(c); // 8024DF38
L_8024DF3C:;
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024DF3C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8024DF40
  c->lr=c->r[0]; // 8024DF44
  c->r[1]=c->r[1]+0x00000060u; // 8024DF48
  return; // 8024DF4C
}

// fn_8024DF50
void f_8024DF50(Ctx* __restrict c) {
  trace_call(0x8024DF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DF50
  c->r[0]=c->lr; // 8024DF54
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024DF58
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8024DF5C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8024DF60
  c->r[11]=c->r[1]+0x00000020u; // 8024DF64
  c->lr=0x8024DF6Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024DF68
  c->f[31]=c->f[1]; // 8024DF6C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DF70
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024DF74
  c->r[29]=c->r[3]|c->r[3]; // 8024DF78
  c->r[30]=c->r[4]|c->r[4]; // 8024DF7C
  c->r[31]=c->r[5]|c->r[5]; // 8024DF80
  c->f[3]=c->f[31]; // 8024DF84
  c->lr=0x8024DF8Cu; f_801E1AA0(c); // 8024DF88
  c->f[3]=c->f[31]; // 8024DF8C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 8024DF90
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DF94
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024DF98
  c->lr=0x8024DFA0u; f_801E1AA0(c); // 8024DF9C
  c->f[3]=c->f[31]; // 8024DFA0
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 8024DFA4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024DFA8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024DFAC
  c->lr=0x8024DFB4u; f_801E1AA0(c); // 8024DFB0
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 8024DFB4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8024DFB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8024DFBC
  c->r[11]=c->r[1]+0x00000020u; // 8024DFC0
  c->lr=0x8024DFC8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024DFC4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024DFC8
  c->lr=c->r[0]; // 8024DFCC
  c->r[1]=c->r[1]+0x00000030u; // 8024DFD0
  return; // 8024DFD4
}

// fn_8024DFD8
void f_8024DFD8(Ctx* __restrict c) {
  trace_call(0x8024DFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024DFD8
  c->r[0]=c->lr; // 8024DFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8024DFE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024DFE4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024DFE8
  c->r[30]=c->r[3]|c->r[3]; // 8024DFEC
  c->r[31]=c->r[4]|c->r[4]; // 8024DFF0
  if (crb(c,2)) { goto L_8024E154; } // 8024DFF4
  if (crb(c,2)) { goto L_8024E144; } // 8024DFF8
  if (crb(c,2)) { goto L_8024E144; } // 8024DFFC
  c->r[0]=addc(c,c->r[3],0x00001054u,0); cr0(c,c->r[0]); // 8024E000
  if (crb(c,2)) { goto L_8024E014; } // 8024E004
  c->r[4]=0u+0xFFFFFFFFu; // 8024E008
  c->r[3]=c->r[3]+0x00001060u; // 8024E00C
  c->lr=0x8024E014u; f_80046394(c); // 8024E010
L_8024E014:;
  c->r[0]=addc(c,c->r[30],0x00000EDCu,0); cr0(c,c->r[0]); // 8024E014
  if (crb(c,2)) { goto L_8024E028; } // 8024E018
  c->r[3]=c->r[30]+0x00000F54u; // 8024E01C
  c->r[4]=0u+0xFFFFFFFFu; // 8024E020
  c->lr=0x8024E028u; f_800A4EEC(c); // 8024E024
L_8024E028:;
  c->r[3]=addc(c,c->r[30],0x000008D0u,0); cr0(c,c->r[3]); // 8024E028
  if (crb(c,2)) { goto L_8024E0C8; } // 8024E02C
  c->r[0]=R32(c->r[30]+0x000008D8u); // 8024E030
  c->r[4]=0u+0x80400000u; // 8024E034
  c->r[4]=c->r[4]+0x000054F8u; // 8024E038
  cmps(c,0,(int32_t)c->r[0],0); // 8024E03C
  W32(c->r[30]+0x000008D0u,c->r[4]); // 8024E040
  if (crb(c,2)) { goto L_8024E06C; } // 8024E044
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024E048
  c->r[12]=R32(c->r[12]+0x00000020u); // 8024E04C
  c->ctr=c->r[12]; // 8024E050
  if (true) { c->lr=0x8024E058u; dispatch(c,c->ctr); } // 8024E054
  c->r[12]=R32(c->r[30]+0x000008D0u); // 8024E058
  c->r[3]=c->r[30]+0x000008D0u; // 8024E05C
  c->r[12]=R32(c->r[12]+0x00000018u); // 8024E060
  c->ctr=c->r[12]; // 8024E064
  if (true) { c->lr=0x8024E06Cu; dispatch(c,c->ctr); } // 8024E068
L_8024E06C:;
  c->r[3]=c->r[30]+0x00000C20u; // 8024E06C
  c->r[4]=0u+0xFFFFFFFFu; // 8024E070
  c->lr=0x8024E078u; f_80164EA0(c); // 8024E074
  c->r[3]=c->r[30]+0x00000BE8u; // 8024E078
  c->r[4]=0u+0xFFFFFFFFu; // 8024E07C
  c->lr=0x8024E084u; f_80164EA0(c); // 8024E080
  c->r[3]=c->r[30]+0x00000BB0u; // 8024E084
  c->r[4]=0u+0xFFFFFFFFu; // 8024E088
  c->lr=0x8024E090u; f_80164EA0(c); // 8024E08C
  c->r[4]=0u+0x80070000u; // 8024E090
  c->r[3]=c->r[30]+0x00000AA8u; // 8024E094
  c->r[4]=c->r[4]+0x000059F8u; // 8024E098
  c->r[5]=0u+0x00000058u; // 8024E09C
  c->r[6]=0u+0x00000003u; // 8024E0A0
  c->lr=0x8024E0A8u; f_80289C2C(c); // 8024E0A4
  c->r[0]=addc(c,c->r[30],0x000008D0u,0); cr0(c,c->r[0]); // 8024E0A8
  if (crb(c,2)) { goto L_8024E0C8; } // 8024E0AC
  c->r[3]=c->r[30]+0x000009F4u; // 8024E0B0
  c->r[4]=0u+0xFFFFFFFFu; // 8024E0B4
  c->lr=0x8024E0BCu; f_80141D80(c); // 8024E0B8
  c->r[3]=c->r[30]+0x000008D0u; // 8024E0BC
  c->r[4]=0u+0x00000000u; // 8024E0C0
  c->lr=0x8024E0C8u; f_80030FCC(c); // 8024E0C4
L_8024E0C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8024E0C8
  if (crb(c,2)) { goto L_8024E144; } // 8024E0CC
  c->r[3]=c->r[30]+0x00000830u; // 8024E0D0
  c->r[4]=0u+0xFFFFFFFFu; // 8024E0D4
  c->lr=0x8024E0DCu; f_80075650(c); // 8024E0D8
  c->r[3]=c->r[30]+0x00000800u; // 8024E0DC
  c->r[4]=0u+0xFFFFFFFFu; // 8024E0E0
  c->lr=0x8024E0E8u; f_800756A8(c); // 8024E0E4
  cmps(c,0,(int32_t)c->r[30],0); // 8024E0E8
  if (crb(c,2)) { goto L_8024E144; } // 8024E0EC
  if (crb(c,2)) { goto L_8024E144; } // 8024E0F0
  c->r[3]=c->r[30]+0x00000030u; // 8024E0F4
  c->r[4]=0u+0xFFFFFFFFu; // 8024E0F8
  c->lr=0x8024E100u; f_8003FD8C(c); // 8024E0FC
  c->r[3]=c->r[30]+0x00000008u; // 8024E100
  c->r[4]=0u+0xFFFFFFFFu; // 8024E104
  c->lr=0x8024E10Cu; f_8003C9C8(c); // 8024E108
  cmps(c,0,(int32_t)c->r[30],0); // 8024E10C
  if (crb(c,2)) { goto L_8024E144; } // 8024E110
  c->r[3]=R32(c->r[30]+0x00000000u); // 8024E114
  c->r[0]=R32(c->r[30]+0x00000004u); // 8024E118
  W32(c->r[1]+0x00000008u,c->r[3]); // 8024E11C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024E120
  c->lr=0x8024E128u; f_8003F2FC(c); // 8024E124
  c->lr=0x8024E12Cu; f_8003F2FC(c); // 8024E128
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8024E12C
  c->r[0]=0u+0x00000000u; // 8024E130
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 8024E134
  c->r[3]=c->r[3]+c->r[4]; // 8024E138
  W32(c->r[3]+0x00000008u,c->r[0]); // 8024E13C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8024E140
L_8024E144:;
  cmps(c,0,(int32_t)c->r[31],0); // 8024E144
  if (!crb(c,1)) { goto L_8024E154; } // 8024E148
  c->r[3]=c->r[30]|c->r[30]; // 8024E14C
  c->lr=0x8024E154u; f_802896EC(c); // 8024E150
L_8024E154:;
  c->r[3]=c->r[30]|c->r[30]; // 8024E154
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024E158
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024E15C
  c->lr=c->r[0]; // 8024E160
  c->r[1]=c->r[1]+0x00000020u; // 8024E164
  return; // 8024E168
}

// fn_8024E16C
void f_8024E16C(Ctx* __restrict c) {
  trace_call(0x8024E16Cu);
  {uint32_t ea=c->r[2]+0xFFFFD848u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E16C
  c->r[3]=0u+0x805E0000u; // 8024E170
  {uint32_t ea=c->r[2]+0xFFFFD874u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E174
  c->r[3]=c->r[3]+0xFFFFDF78u; // 8024E178
  c->f[3]=c->f[1]; // 8024E17C
  f_8003F588(c); return; // 8024E180
}

// fn_8024E184
void f_8024E184(Ctx* __restrict c) {
  trace_call(0x8024E184u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024E184
  f_8024D73C(c); return; // 8024E188
}

// fn_8024E18C
void f_8024E18C(Ctx* __restrict c) {
  trace_call(0x8024E18Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024E18C
  f_8024D1F4(c); return; // 8024E190
}

// fn_8024E194
void f_8024E194(Ctx* __restrict c) {
  trace_call(0x8024E194u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024E194
  f_8024D738(c); return; // 8024E198
}

// fn_8024E19C
void f_8024E19C(Ctx* __restrict c) {
  trace_call(0x8024E19Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024E19C
  f_8024D734(c); return; // 8024E1A0
}

// fn_8024E1A4
void f_8024E1A4(Ctx* __restrict c) {
  trace_call(0x8024E1A4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8024E1A4
  f_8024D358(c); return; // 8024E1A8
}

// fn_8024E1AC
void f_8024E1AC(Ctx* __restrict c) {
  trace_call(0x8024E1ACu);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024E1AC
  c->r[0]=c->lr; // 8024E1B0
  W32(c->r[1]+0x00000174u,c->r[0]); // 8024E1B4
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[31]);} // 8024E1B8
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,31,ea,0,0);} // 8024E1BC
  c->r[6]=0u+0x00000004u; // 8024E1C0
  c->f[7]=-c->f[4]; // 8024E1C4
  {uint32_t ea=c->r[2]+0xFFFFD8C0u; c->f[6]=RF64(ea);} // 8024E1C8
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 8024E1CC
  c->r[31]=c->r[3]|c->r[3]; // 8024E1D0
  c->r[5]=c->r[6]^0x80000000u; // 8024E1D4
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E1D8
  W32(c->r[1]+0x00000158u,c->r[30]); // 8024E1DC
  c->r[0]=0u+0x43300000u; // 8024E1E0
  W32(c->r[1]+0x00000154u,c->r[29]); // 8024E1E4
  c->ctr=c->r[6]; // 8024E1E8
L_8024E1EC:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 8024E1EC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 8024E1F0
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E1F4
  {uint32_t ea=c->r[1]+0x00000134u; psq_store(c,2,ea,0,0);} // 8024E1F8
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 8024E1FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 8024E200
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E204
  {uint32_t ea=c->r[1]+0x0000013Cu; psq_store(c,2,ea,1,0);} // 8024E208
  {uint32_t ea=c->r[1]+0x00000134u; psq_load(c,2,ea,0,0);} // 8024E20C
  {double t0=S(c->f[2]*c->f[5]), t1=S(c->ps1[2]*c->f[5]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E210
  {uint32_t ea=c->r[1]+0x000000ECu; psq_store(c,2,ea,0,0);} // 8024E214
  {uint32_t ea=c->r[1]+0x0000013Cu; psq_load(c,2,ea,1,0);} // 8024E218
  {double t0=S(c->f[2]*c->f[5]), t1=S(c->ps1[2]*c->f[5]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E21C
  {uint32_t ea=c->r[1]+0x000000F4u; psq_store(c,2,ea,1,0);} // 8024E220
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8024E224
  {uint32_t ea=c->r[1]+0x000000ECu; psq_load(c,3,ea,0,0);} // 8024E228
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E22C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 8024E230
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,2,ea,1,0);} // 8024E234
  {uint32_t ea=c->r[1]+0x000000F4u; psq_load(c,3,ea,1,0);} // 8024E238
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E23C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,1,0);} // 8024E240
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,2,ea,0,0);} // 8024E244
  {double t0=S(c->f[2]*c->f[7]), t1=S(c->ps1[2]*c->f[7]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E248
  {uint32_t ea=c->r[1]+0x000000D4u; psq_store(c,2,ea,0,0);} // 8024E24C
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,2,ea,1,0);} // 8024E250
  {double t0=S(c->f[2]*c->f[7]), t1=S(c->ps1[2]*c->f[7]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E254
  {uint32_t ea=c->r[1]+0x000000DCu; psq_store(c,2,ea,1,0);} // 8024E258
  {uint32_t ea=c->r[1]+0x000000D4u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024E25C
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024E260
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E264
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[4]);} // 8024E268
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[3]);} // 8024E26C
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[2]);} // 8024E270
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8024E274
  {uint32_t ea=c->r[1]+0x000000E0u; psq_load(c,3,ea,0,0);} // 8024E278
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E27C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 8024E280
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,2,ea,1,0);} // 8024E284
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,3,ea,1,0);} // 8024E288
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E28C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,1,0);} // 8024E290
  W32(c->r[1]+0x00000144u,c->r[5]); // 8024E294
  W32(c->r[1]+0x00000140u,c->r[0]); // 8024E298
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=RF64(ea);} // 8024E29C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[6]); // 8024E2A0
  c->f[8]=c->ps1[8]=S(c->f[1]/c->f[2]); // 8024E2A4
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8024E2A8
  {double t0=S(c->f[2]*c->f[8]), t1=S(c->ps1[2]*c->f[8]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E2AC
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,2,ea,0,0);} // 8024E2B0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,2,ea,1,0);} // 8024E2B4
  {double t0=S(c->f[2]*c->f[8]), t1=S(c->ps1[2]*c->f[8]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E2B8
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,1,0);} // 8024E2BC
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,3,ea,0,0);} // 8024E2C0
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 8024E2C4
  {double t0=S(c->f[3]+c->f[2]), t1=S(c->ps1[3]+c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E2C8
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,2,ea,0,0);} // 8024E2CC
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,3,ea,1,0);} // 8024E2D0
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,2,ea,1,0);} // 8024E2D4
  {double t0=S(c->f[3]+c->f[2]), t1=S(c->ps1[3]+c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E2D8
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,2,ea,1,0);} // 8024E2DC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8024E2E0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024E2E4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E2E8
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 8024E2EC
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[3]);} // 8024E2F0
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 8024E2F4
  {uint32_t ea=c->r[1]+0x0000008Cu; psq_load(c,9,ea,0,0);} // 8024E2F8
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[9]=t0; c->ps1[9]=t1;} // 8024E2FC
  {uint32_t ea=c->r[1]+0x0000008Cu; psq_store(c,9,ea,0,0);} // 8024E300
  {uint32_t ea=c->r[1]+0x00000094u; psq_load(c,9,ea,1,0);} // 8024E304
  {double t0=S(c->f[9]*c->f[8]), t1=S(c->ps1[9]*c->f[8]); c->f[9]=t0; c->ps1[9]=t1;} // 8024E308
  {uint32_t ea=c->r[1]+0x00000094u; psq_store(c,9,ea,1,0);} // 8024E30C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,9,ea,0,0);} // 8024E310
  {uint32_t ea=c->r[1]+0x0000008Cu; psq_load(c,8,ea,0,0);} // 8024E314
  {double t0=S(c->f[9]+c->f[8]), t1=S(c->ps1[9]+c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 8024E318
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,8,ea,0,0);} // 8024E31C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,9,ea,1,0);} // 8024E320
  {uint32_t ea=c->r[1]+0x00000094u; psq_load(c,8,ea,1,0);} // 8024E324
  {double t0=S(c->f[9]+c->f[8]), t1=S(c->ps1[9]+c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 8024E328
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,8,ea,1,0);} // 8024E32C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8024E330
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8024E334
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8024E338
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024E1EC; } // 8024E33C
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[4]);} // 8024E340
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[3]);} // 8024E344
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[2]);} // 8024E348
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,1,ea,0,0);} // 8024E34C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E350
  c->f[0]=c->ps1[0]=S(c->f[2]); // 8024E354
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 8024E358
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E35C
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E360
  fcmp(c,0,c->f[0],c->f[2]); // 8024E364
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E368
  c->r[0]=c->cr; // 8024E36C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E370
  if (crb(c,2)) { goto L_8024EA34; } // 8024E374
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E378
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E37C
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 8024E380
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[0]);} // 8024E384
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[1]);} // 8024E388
  {uint32_t ea=c->r[1]+0x00000120u; psq_load(c,5,ea,0,0);} // 8024E38C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 8024E390
  {double t0=S(c->f[5]*c->f[3]), t1=S(c->ps1[5]*c->ps1[3]); c->f[5]=t0; c->ps1[5]=t1;} // 8024E394
  {uint32_t ea=c->r[1]+0x0000011Cu; psq_load(c,3,ea,1,0);} // 8024E398
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,4,ea,1,0);} // 8024E39C
  {double t0=S(std::fma(c->f[3],c->f[4],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[4],c->ps1[5])); c->f[3]=t0; c->ps1[3]=t1;} // 8024E3A0
  {double t0=S(c->f[3]+c->ps1[5]), t1=S(c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 8024E3A4
  {uint32_t ea=c->r[1]+0x0000011Cu; psq_load(c,4,ea,0,0);} // 8024E3A8
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 8024E3AC
  c->f[3]=c->ps1[3]=S(c->f[1]); // 8024E3B0
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 8024E3B4
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 8024E3B8
  c->f[4]=c->ps1[4]=S(c->f[5]/c->f[3]); // 8024E3BC
  {uint32_t ea=c->r[1]+0x0000011Cu; psq_load(c,3,ea,0,0);} // 8024E3C0
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 8024E3C4
  {uint32_t ea=c->r[1]+0x00000080u; psq_store(c,3,ea,0,0);} // 8024E3C8
  {uint32_t ea=c->r[1]+0x00000124u; psq_load(c,3,ea,1,0);} // 8024E3CC
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 8024E3D0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,3,ea,1,0);} // 8024E3D4
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,4,ea,0,0);} // 8024E3D8
  {uint32_t ea=c->r[1]+0x00000080u; psq_load(c,3,ea,0,0);} // 8024E3DC
  {double t0=S(c->f[4]-c->f[3]), t1=S(c->ps1[4]-c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8024E3E0
  {uint32_t ea=c->r[1]+0x00000110u; psq_store(c,3,ea,0,0);} // 8024E3E4
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,4,ea,1,0);} // 8024E3E8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,3,ea,1,0);} // 8024E3EC
  {double t0=S(c->f[4]-c->f[3]), t1=S(c->ps1[4]-c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8024E3F0
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,3,ea,1,0);} // 8024E3F4
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8024E3F8
  {uint32_t ea=c->r[1]+0x0000011Cu; psq_load(c,4,ea,0,0);} // 8024E3FC
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8024E400
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,4,ea,0,0);} // 8024E404
  {uint32_t ea=c->r[1]+0x00000124u; psq_load(c,4,ea,1,0);} // 8024E408
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 8024E40C
  {uint32_t ea=c->r[1]+0x000000D0u; psq_store(c,4,ea,1,0);} // 8024E410
  c->r[3]=c->r[1]+0x00000104u; // 8024E414
  {uint32_t ea=c->r[1]+0x00000110u; psq_load(c,3,ea,0,0);} // 8024E418
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,4,ea,0,0);} // 8024E41C
  {double t0=S(c->f[3]+c->f[4]), t1=S(c->ps1[3]+c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 8024E420
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,3,ea,0,0);} // 8024E424
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,3,ea,1,0);} // 8024E428
  {uint32_t ea=c->r[1]+0x000000D0u; psq_load(c,4,ea,1,0);} // 8024E42C
  {double t0=S(c->f[3]+c->f[4]), t1=S(c->ps1[3]+c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 8024E430
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,3,ea,1,0);} // 8024E434
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 8024E438
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 8024E43C
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8024E440
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 8024E444
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[4]); c->f[3]=t0; c->ps1[3]=t1;} // 8024E448
  fcmp(c,0,c->f[3],c->f[2]); // 8024E44C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E450
  c->r[0]=c->cr; // 8024E454
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E458
  if (!crb(c,2)) { goto L_8024E470; } // 8024E45C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8024E460
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8024E464
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[1]);} // 8024E468
  goto L_8024E478; // 8024E46C
L_8024E470:;
  c->r[4]=c->r[3]|c->r[3]; // 8024E470
  c->lr=0x8024E478u; f_80265750(c); // 8024E474
L_8024E478:;
  c->r[3]=c->r[1]+0x00000110u; // 8024E478
  c->r[30]=c->r[1]+0x000000F8u; // 8024E47C
  {uint32_t ea=c->r[31]+0x0000000Cu; psq_load(c,0,ea,0,0);} // 8024E480
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 8024E484
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E488
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 8024E48C
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,1,0);} // 8024E490
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8024E494
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E498
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,0,ea,1,0);} // 8024E49C
  c->lr=0x8024E4A4u; f_802657AC(c); // 8024E4A0
  c->f[31]=c->f[1]; // 8024E4A4
  c->r[3]=c->r[30]|c->r[30]; // 8024E4A8
  c->lr=0x8024E4B0u; f_802657AC(c); // 8024E4AC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[31]); // 8024E4B0
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 8024E4B4
  fcmp(c,0,c->f[0],c->f[6]); // 8024E4B8
  if (!crb(c,0)) { goto L_8024E77C; } // 8024E4BC
  {uint32_t ea=c->r[1]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E4C0
  c->r[29]=c->r[1]+0x000000BCu; // 8024E4C4
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E4C8
  c->r[30]=c->r[1]+0x000000B0u; // 8024E4CC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[5]=c->ps1[5]=RF32(ea);} // 8024E4D0
  {uint32_t ea=c->r[1]+0x00000114u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024E4D4
  {uint32_t ea=c->r[1]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024E4D8
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E4DC
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 8024E4E0
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8024E4E4
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[5]);} // 8024E4E8
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[4]);} // 8024E4EC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[3]);} // 8024E4F0
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8024E4F4
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,1,ea,0,0);} // 8024E4F8
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E4FC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8024E500
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 8024E504
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E508
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E50C
  fcmp(c,0,c->f[2],c->f[0]); // 8024E510
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E514
  c->r[0]=c->cr; // 8024E518
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E51C
  if (!crb(c,2)) { goto L_8024E534; } // 8024E520
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E524
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[6]);} // 8024E528
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8024E52C
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8024E530
L_8024E534:;
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024E534
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E538
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E53C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E540
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E544
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E548
  fcmp(c,0,c->f[1],c->f[0]); // 8024E54C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E550
  c->r[0]=c->cr; // 8024E554
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E558
  if (!crb(c,2)) { goto L_8024E574; } // 8024E55C
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E560
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E564
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 8024E568
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 8024E56C
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8024E570
L_8024E574:;
  c->r[3]=c->r[29]|c->r[29]; // 8024E574
  c->r[4]=c->r[29]|c->r[29]; // 8024E578
  c->lr=0x8024E580u; f_80265750(c); // 8024E57C
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024E580
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E584
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E588
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E58C
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E590
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E594
  fcmp(c,0,c->f[1],c->f[0]); // 8024E598
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E59C
  c->r[0]=c->cr; // 8024E5A0
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E5A4
  if (!crb(c,2)) { goto L_8024E5C0; } // 8024E5A8
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E5AC
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E5B0
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 8024E5B4
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8024E5B8
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 8024E5BC
L_8024E5C0:;
  c->r[3]=c->r[30]|c->r[30]; // 8024E5C0
  c->r[4]=c->r[30]|c->r[30]; // 8024E5C4
  c->lr=0x8024E5CCu; f_80265750(c); // 8024E5C8
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024E5CC
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E5D0
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E5D4
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E5D8
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E5DC
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E5E0
  fcmp(c,0,c->f[1],c->f[0]); // 8024E5E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E5E8
  c->r[0]=c->cr; // 8024E5EC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E5F0
  if (!crb(c,2)) { goto L_8024E60C; } // 8024E5F4
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E5F8
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E5FC
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 8024E600
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8024E604
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 8024E608
L_8024E60C:;
  c->r[3]=c->r[29]|c->r[29]; // 8024E60C
  c->r[4]=c->r[30]|c->r[30]; // 8024E610
  c->r[5]=c->r[1]+0x00000044u; // 8024E614
  c->lr=0x8024E61Cu; f_80265810(c); // 8024E618
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,0,ea,0,0);} // 8024E61C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E620
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E624
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E628
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E62C
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E630
  fcmp(c,0,c->f[1],c->f[0]); // 8024E634
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E638
  c->r[0]=c->cr; // 8024E63C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E640
  if (!crb(c,2)) { goto L_8024E6EC; } // 8024E644
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E648
  c->r[3]=c->r[29]|c->r[29]; // 8024E64C
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E650
  c->r[4]=c->r[1]+0x0000005Cu; // 8024E654
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8024E658
  c->r[5]=c->r[1]+0x00000050u; // 8024E65C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 8024E660
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8024E664
  c->lr=0x8024E66Cu; f_80265810(c); // 8024E668
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,0,ea,0,0);} // 8024E66C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E670
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E674
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E678
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E67C
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E680
  fcmp(c,0,c->f[1],c->f[0]); // 8024E684
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E688
  c->r[0]=c->cr; // 8024E68C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E690
  if (!crb(c,2)) { goto L_8024E6B0; } // 8024E694
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E698
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E69C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8024E6A0
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 8024E6A4
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8024E6A8
  goto L_8024E6C4; // 8024E6AC
L_8024E6B0:;
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E6B0
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E6B4
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 8024E6B8
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[1]);} // 8024E6BC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8024E6C0
L_8024E6C4:;
  c->r[3]=c->r[29]|c->r[29]; // 8024E6C4
  c->r[4]=c->r[30]|c->r[30]; // 8024E6C8
  c->r[5]=c->r[1]+0x00000068u; // 8024E6CC
  c->lr=0x8024E6D4u; f_80265810(c); // 8024E6D0
  {uint32_t ea=c->r[1]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E6D4
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E6D8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E6DC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 8024E6E0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8024E6E4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8024E6E8
L_8024E6EC:;
  c->r[3]=c->r[1]+0x00000044u; // 8024E6EC
  c->r[4]=c->r[3]|c->r[3]; // 8024E6F0
  c->lr=0x8024E6F8u; f_80265750(c); // 8024E6F4
  c->r[4]=c->r[29]|c->r[29]; // 8024E6F8
  c->r[3]=c->r[1]+0x00000044u; // 8024E6FC
  c->r[5]=c->r[1]+0x00000074u; // 8024E700
  c->lr=0x8024E708u; f_80265810(c); // 8024E704
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E708
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E70C
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E710
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[1]);} // 8024E714
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E718
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8024E71C
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E720
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 8024E724
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[1]);} // 8024E728
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E72C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 8024E730
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E734
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[1]);} // 8024E738
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E73C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 8024E740
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E744
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 8024E748
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E74C
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[1]);} // 8024E750
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E754
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 8024E758
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E75C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[1]);} // 8024E760
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E764
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[1]);} // 8024E768
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 8024E76C
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8024E770
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 8024E774
  goto L_8024EA34; // 8024E778
L_8024E77C:;
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8024E77C
  c->r[30]=c->r[1]+0x000000A4u; // 8024E780
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8024E784
  c->r[29]=c->r[1]+0x00000098u; // 8024E788
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8024E78C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E790
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E794
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E798
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[2]);} // 8024E79C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[1]);} // 8024E7A0
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[5]);} // 8024E7A4
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[4]);} // 8024E7A8
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[3]);} // 8024E7AC
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8024E7B0
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,1,ea,0,0);} // 8024E7B4
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E7B8
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8024E7BC
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 8024E7C0
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 8024E7C4
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E7C8
  fcmp(c,0,c->f[2],c->f[0]); // 8024E7CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E7D0
  c->r[0]=c->cr; // 8024E7D4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E7D8
  if (!crb(c,2)) { goto L_8024E7F0; } // 8024E7DC
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E7E0
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[6]);} // 8024E7E4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8024E7E8
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8024E7EC
L_8024E7F0:;
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024E7F0
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E7F4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E7F8
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E7FC
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E800
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E804
  fcmp(c,0,c->f[1],c->f[0]); // 8024E808
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E80C
  c->r[0]=c->cr; // 8024E810
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E814
  if (!crb(c,2)) { goto L_8024E830; } // 8024E818
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E81C
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E820
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 8024E824
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 8024E828
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8024E82C
L_8024E830:;
  c->r[3]=c->r[30]|c->r[30]; // 8024E830
  c->r[4]=c->r[30]|c->r[30]; // 8024E834
  c->lr=0x8024E83Cu; f_80265750(c); // 8024E838
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024E83C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E840
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E844
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E848
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E84C
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E850
  fcmp(c,0,c->f[1],c->f[0]); // 8024E854
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E858
  c->r[0]=c->cr; // 8024E85C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E860
  if (!crb(c,2)) { goto L_8024E87C; } // 8024E864
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E868
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E86C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 8024E870
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8024E874
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[1]);} // 8024E878
L_8024E87C:;
  c->r[3]=c->r[29]|c->r[29]; // 8024E87C
  c->r[4]=c->r[29]|c->r[29]; // 8024E880
  c->lr=0x8024E888u; f_80265750(c); // 8024E884
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024E888
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E88C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E890
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E894
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E898
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E89C
  fcmp(c,0,c->f[1],c->f[0]); // 8024E8A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E8A4
  c->r[0]=c->cr; // 8024E8A8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E8AC
  if (!crb(c,2)) { goto L_8024E8C8; } // 8024E8B0
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E8B4
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E8B8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 8024E8BC
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8024E8C0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[1]);} // 8024E8C4
L_8024E8C8:;
  c->r[3]=c->r[30]|c->r[30]; // 8024E8C8
  c->r[4]=c->r[29]|c->r[29]; // 8024E8CC
  c->r[5]=c->r[1]+0x00000008u; // 8024E8D0
  c->lr=0x8024E8D8u; f_80265810(c); // 8024E8D4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,0,0);} // 8024E8D8
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E8DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E8E0
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E8E4
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E8E8
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E8EC
  fcmp(c,0,c->f[1],c->f[0]); // 8024E8F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E8F4
  c->r[0]=c->cr; // 8024E8F8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E8FC
  if (!crb(c,2)) { goto L_8024E9A8; } // 8024E900
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E904
  c->r[3]=c->r[30]|c->r[30]; // 8024E908
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E90C
  c->r[4]=c->r[1]+0x00000020u; // 8024E910
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8024E914
  c->r[5]=c->r[1]+0x00000014u; // 8024E918
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8024E91C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8024E920
  c->lr=0x8024E928u; f_80265810(c); // 8024E924
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,0,0);} // 8024E928
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024E92C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E930
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024E934
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024E938
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E93C
  fcmp(c,0,c->f[1],c->f[0]); // 8024E940
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024E944
  c->r[0]=c->cr; // 8024E948
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024E94C
  if (!crb(c,2)) { goto L_8024E96C; } // 8024E950
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E954
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E958
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8024E95C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 8024E960
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8024E964
  goto L_8024E980; // 8024E968
L_8024E96C:;
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E96C
  {uint32_t ea=c->r[2]+0xFFFFD8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E970
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 8024E974
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[1]);} // 8024E978
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8024E97C
L_8024E980:;
  c->r[3]=c->r[30]|c->r[30]; // 8024E980
  c->r[4]=c->r[29]|c->r[29]; // 8024E984
  c->r[5]=c->r[1]+0x0000002Cu; // 8024E988
  c->lr=0x8024E990u; f_80265810(c); // 8024E98C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E990
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E994
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E998
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 8024E99C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8024E9A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8024E9A4
L_8024E9A8:;
  c->r[3]=c->r[1]+0x00000008u; // 8024E9A8
  c->r[4]=c->r[3]|c->r[3]; // 8024E9AC
  c->lr=0x8024E9B4u; f_80265750(c); // 8024E9B0
  c->r[4]=c->r[30]|c->r[30]; // 8024E9B4
  c->r[3]=c->r[1]+0x00000008u; // 8024E9B8
  c->r[5]=c->r[1]+0x00000038u; // 8024E9BC
  c->lr=0x8024E9C4u; f_80265810(c); // 8024E9C0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E9C4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E9C8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024E9CC
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[1]);} // 8024E9D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E9D4
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8024E9D8
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024E9DC
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 8024E9E0
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[1]);} // 8024E9E4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E9E8
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 8024E9EC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E9F0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[1]);} // 8024E9F4
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024E9F8
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 8024E9FC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024EA00
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 8024EA04
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024EA08
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[1]);} // 8024EA0C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024EA10
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 8024EA14
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024EA18
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[1]);} // 8024EA1C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024EA20
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[1]);} // 8024EA24
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 8024EA28
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 8024EA2C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 8024EA30
L_8024EA34:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024EA34
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024EA38
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EA3C
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[2]);} // 8024EA40
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 8024EA44
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 8024EA48
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,31,ea,0,0);} // 8024EA4C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[31]=RF64(ea);} // 8024EA50
  c->r[31]=R32(c->r[1]+0x0000015Cu); // 8024EA54
  c->r[30]=R32(c->r[1]+0x00000158u); // 8024EA58
  c->r[29]=R32(c->r[1]+0x00000154u); // 8024EA5C
  c->r[0]=R32(c->r[1]+0x00000174u); // 8024EA60
  c->lr=c->r[0]; // 8024EA64
  c->r[1]=c->r[1]+0x00000170u; // 8024EA68
  return; // 8024EA6C
}

// fn_8024EA70
void f_8024EA70(Ctx* __restrict c) {
  trace_call(0x8024EA70u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EA70
  c->r[0]=c->lr; // 8024EA74
  W32(c->r[1]+0x00000084u,c->r[0]); // 8024EA78
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 8024EA7C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8024EA80
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 8024EA84
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 8024EA88
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 8024EA8C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 8024EA90
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 8024EA94
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 8024EA98
  c->f[28]=c->f[1]; // 8024EA9C
  c->f[29]=c->f[2]; // 8024EAA0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8024EAA4
  c->f[30]=c->f[3]; // 8024EAA8
  W32(c->r[1]+0x00000038u,c->r[30]); // 8024EAAC
  c->r[30]=c->r[4]|c->r[4]; // 8024EAB0
  W32(c->r[1]+0x00000034u,c->r[29]); // 8024EAB4
  c->r[29]=c->r[3]|c->r[3]; // 8024EAB8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EABC
  c->r[0]=R32(c->r[3]+0x00000024u); // 8024EAC0
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[0]); // 8024EAC4
  cmps(c,0,(int32_t)c->r[0],1); // 8024EAC8
  if (crb(c,2)) { goto L_8024EBD8; } // 8024EACC
  if (!crb(c,0)) { goto L_8024EC6C; } // 8024EAD0
  cmps(c,0,(int32_t)c->r[0],0); // 8024EAD4
  if (!crb(c,0)) { goto L_8024EAE4; } // 8024EAD8
  goto L_8024EC6C; // 8024EADC
  goto L_8024EC6C; // 8024EAE0
L_8024EAE4:;
  c->r[31]=c->r[1]+0x00000020u; // 8024EAE4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024EAE8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 8024EAEC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024EAF0
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 8024EAF4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 8024EAF8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 8024EAFC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024EB00
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,0,ea,1,0);} // 8024EB04
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,0,0);} // 8024EB08
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 8024EB0C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EB10
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 8024EB14
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 8024EB18
  {uint32_t ea=c->r[2]+0xFFFFD8B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EB1C
  fcmp(c,0,c->f[1],c->f[0]); // 8024EB20
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024EB24
  c->r[0]=c->cr; // 8024EB28
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8024EB2C
  if (crb(c,2)) { goto L_8024EB5C; } // 8024EB30
  c->r[3]=c->r[31]|c->r[31]; // 8024EB34
  c->r[4]=c->r[31]|c->r[31]; // 8024EB38
  c->lr=0x8024EB40u; f_80265750(c); // 8024EB3C
  {uint32_t ea=c->r[2]+0xFFFFD8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EB40
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,1,ea,0,0);} // 8024EB44
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024EB48
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,1,ea,0,0);} // 8024EB4C
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,1,0);} // 8024EB50
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024EB54
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,1,ea,1,0);} // 8024EB58
L_8024EB5C:;
  c->r[4]=c->r[1]+0x00000020u; // 8024EB5C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024EB60
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,1,ea,0,0);} // 8024EB64
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024EB68
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8024EB6C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 8024EB70
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,1,ea,1,0);} // 8024EB74
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8024EB78
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 8024EB7C
  c->f[1]=c->f[28]; // 8024EB80
  c->f[2]=c->f[29]; // 8024EB84
  c->r[3]=c->r[29]|c->r[29]; // 8024EB88
  c->f[3]=c->f[30]; // 8024EB8C
  {uint32_t ea=c->r[29]+0x00000068u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024EB90
  {uint32_t ea=c->r[29]+0x00000064u; c->f[5]=c->ps1[5]=RF32(ea);} // 8024EB94
  c->lr=0x8024EB9Cu; f_8024E1AC(c); // 8024EB98
  c->r[3]=c->r[29]|c->r[29]; // 8024EB9C
  c->r[4]=c->r[30]|c->r[30]; // 8024EBA0
  c->lr=0x8024EBA8u; f_80265924(c); // 8024EBA4
  fcmp(c,0,c->f[1],c->f[31]); // 8024EBA8
  if (!crb(c,0)) { goto L_8024EC6C; } // 8024EBAC
  c->r[12]=R32(c->r[29]+0x00000028u); // 8024EBB0
  c->r[3]=c->r[29]+0x00000024u; // 8024EBB4
  c->r[5]=R32(c->r[29]+0x00000024u); // 8024EBB8
  c->r[4]=0u+0x00000001u; // 8024EBBC
  c->r[12]=R32(c->r[12]+0x00000008u); // 8024EBC0
  c->ctr=c->r[12]; // 8024EBC4
  if (true) { c->lr=0x8024EBCCu; dispatch(c,c->ctr); } // 8024EBC8
  c->r[0]=0u+0x00000001u; // 8024EBCC
  W32(c->r[29]+0x00000024u,c->r[0]); // 8024EBD0
  goto L_8024EC6C; // 8024EBD4
L_8024EBD8:;
  {uint32_t ea=c->r[2]+0xFFFFD8CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EBD8
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,4,ea,0,0);} // 8024EBDC
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 8024EBE0
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,4,ea,0,0);} // 8024EBE4
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,4,ea,1,0);} // 8024EBE8
  {double t0=S(c->f[4]*c->f[0]), t1=S(c->ps1[4]*c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 8024EBEC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,4,ea,1,0);} // 8024EBF0
  c->r[4]=c->r[1]+0x00000014u; // 8024EBF4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8024EBF8
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,4,ea,0,0);} // 8024EBFC
  {double t0=S(c->f[0]-c->f[4]), t1=S(c->ps1[0]-c->ps1[4]); c->f[0]=t0; c->ps1[0]=t1;} // 8024EC00
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 8024EC04
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 8024EC08
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,4,ea,1,0);} // 8024EC0C
  {double t0=S(c->f[0]-c->f[4]), t1=S(c->ps1[0]-c->ps1[4]); c->f[0]=t0; c->ps1[0]=t1;} // 8024EC10
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 8024EC14
  {uint32_t ea=c->r[3]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024EC18
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8024EC1C
  c->lr=0x8024EC24u; f_8024E1AC(c); // 8024EC20
  {uint32_t ea=c->r[29]+0x0000000Cu; psq_load(c,0,ea,0,0);} // 8024EC24
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8024EC28
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024EC2C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 8024EC30
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 8024EC34
  {uint32_t ea=c->r[2]+0xFFFFD8B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EC38
  fcmp(c,0,c->f[1],c->f[0]); // 8024EC3C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8024EC40
  if (!crb(c,2)) { goto L_8024EC6C; } // 8024EC44
  c->r[12]=R32(c->r[29]+0x00000028u); // 8024EC48
  c->r[3]=c->r[29]+0x00000024u; // 8024EC4C
  c->r[5]=R32(c->r[29]+0x00000024u); // 8024EC50
  c->r[4]=0u+0x00000002u; // 8024EC54
  c->r[12]=R32(c->r[12]+0x00000008u); // 8024EC58
  c->ctr=c->r[12]; // 8024EC5C
  if (true) { c->lr=0x8024EC64u; dispatch(c,c->ctr); } // 8024EC60
  c->r[0]=0u+0x00000002u; // 8024EC64
  W32(c->r[29]+0x00000024u,c->r[0]); // 8024EC68
L_8024EC6C:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 8024EC6C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8024EC70
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 8024EC74
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 8024EC78
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 8024EC7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 8024EC80
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 8024EC84
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 8024EC88
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8024EC8C
  c->r[30]=R32(c->r[1]+0x00000038u); // 8024EC90
  c->r[0]=R32(c->r[1]+0x00000084u); // 8024EC94
  c->r[29]=R32(c->r[1]+0x00000034u); // 8024EC98
  c->lr=c->r[0]; // 8024EC9C
  c->r[1]=c->r[1]+0x00000080u; // 8024ECA0
  return; // 8024ECA4
}

// fn_8024ECA8
void f_8024ECA8(Ctx* __restrict c) {
  trace_call(0x8024ECA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024ECA8
  c->r[0]=c->lr; // 8024ECAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024ECB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024ECB4
  c->r[31]=c->r[3]|c->r[3]; // 8024ECB8
  c->lr=0x8024ECC0u; f_801492FC(c); // 8024ECBC
  c->r[4]=0u+0x80410000u; // 8024ECC0
  c->r[3]=c->r[31]|c->r[31]; // 8024ECC4
  c->r[4]=c->r[4]+0x000013C8u; // 8024ECC8
  W32(c->r[31]+0x00000000u,c->r[4]); // 8024ECCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024ECD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024ECD4
  c->lr=c->r[0]; // 8024ECD8
  c->r[1]=c->r[1]+0x00000010u; // 8024ECDC
  return; // 8024ECE0
}

// fn_8024ECE4
void f_8024ECE4(Ctx* __restrict c) {
  trace_call(0x8024ECE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024ECE4
  c->r[0]=c->lr; // 8024ECE8
  cmps(c,0,(int32_t)c->r[3],0); // 8024ECEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024ECF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024ECF4
  c->r[30]=c->r[3]|c->r[3]; // 8024ECF8
  c->r[31]=c->r[4]|c->r[4]; // 8024ECFC
  if (crb(c,2)) { goto L_8024ED30; } // 8024ED00
  c->r[4]=0u+0x80410000u; // 8024ED04
  c->r[4]=c->r[4]+0x000013C8u; // 8024ED08
  W32(c->r[3]+0x00000000u,c->r[4]); // 8024ED0C
  c->lr=0x8024ED14u; f_80149420(c); // 8024ED10
  c->r[3]=c->r[30]|c->r[30]; // 8024ED14
  c->r[4]=0u+0x00000000u; // 8024ED18
  c->lr=0x8024ED20u; f_8014936C(c); // 8024ED1C
  cmps(c,0,(int32_t)c->r[31],0); // 8024ED20
  if (!crb(c,1)) { goto L_8024ED30; } // 8024ED24
  c->r[3]=c->r[30]|c->r[30]; // 8024ED28
  c->lr=0x8024ED30u; f_802896EC(c); // 8024ED2C
L_8024ED30:;
  c->r[3]=c->r[30]|c->r[30]; // 8024ED30
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024ED34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024ED38
  c->lr=c->r[0]; // 8024ED3C
  c->r[1]=c->r[1]+0x00000010u; // 8024ED40
  return; // 8024ED44
}

// fn_8024ED48
void f_8024ED48(Ctx* __restrict c) {
  trace_call(0x8024ED48u);
  c->r[4]=0u+0xFFFFFFFFu; // 8024ED48
  c->r[0]=0u+0x00100000u; // 8024ED4C
  W32(c->r[3]+0x00000020u,c->r[4]); // 8024ED50
  W32(c->r[3]+0x00000024u,c->r[4]); // 8024ED54
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8024ED58
  W32(c->r[3]+0x00000034u,c->r[4]); // 8024ED5C
  W32(c->r[3]+0x00000048u,c->r[0]); // 8024ED60
  return; // 8024ED64
}

// fn_8024ED68
void f_8024ED68(Ctx* __restrict c) {
  trace_call(0x8024ED68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024ED68
  c->r[0]=c->lr; // 8024ED6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024ED70
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024ED74
  c->r[31]=0u+0x80460000u; // 8024ED78
  c->r[29]=c->r[3]|c->r[3]; // 8024ED7C
  c->r[4]=R32(c->r[3]+0x00000020u); // 8024ED80
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024ED84
  c->lr=0x8024ED8Cu; f_80047DC8(c); // 8024ED88
  c->r[30]=0u+0xFFFFFFFFu; // 8024ED8C
  c->r[31]=c->r[31]+0xFFFFD468u; // 8024ED90
  W32(c->r[29]+0x00000020u,c->r[30]); // 8024ED94
  c->r[3]=c->r[31]+0x00000014u; // 8024ED98
  c->r[4]=R32(c->r[29]+0x00000024u); // 8024ED9C
  c->lr=0x8024EDA4u; f_80048610(c); // 8024EDA0
  W32(c->r[29]+0x00000024u,c->r[30]); // 8024EDA4
  c->r[3]=c->r[31]+0x00000014u; // 8024EDA8
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 8024EDAC
  c->lr=0x8024EDB4u; f_80048610(c); // 8024EDB0
  W32(c->r[29]+0x0000002Cu,c->r[30]); // 8024EDB4
  c->r[3]=c->r[31]+0x00000014u; // 8024EDB8
  c->r[4]=R32(c->r[29]+0x00000034u); // 8024EDBC
  c->lr=0x8024EDC4u; f_80048610(c); // 8024EDC0
  W32(c->r[29]+0x00000034u,c->r[30]); // 8024EDC4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024EDC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024EDCC
  c->lr=c->r[0]; // 8024EDD0
  c->r[1]=c->r[1]+0x00000020u; // 8024EDD4
  return; // 8024EDD8
}

// fn_8024EDDC
void f_8024EDDC(Ctx* __restrict c) {
  trace_call(0x8024EDDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EDDC
  c->r[0]=c->lr; // 8024EDE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024EDE4
  c->r[11]=c->r[1]+0x00000020u; // 8024EDE8
  c->lr=0x8024EDF0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024EDEC
  c->r[0]=R8(c->r[3]+0x00000004u); // 8024EDF0
  c->r[31]=c->r[3]|c->r[3]; // 8024EDF4
  cmps(c,0,(int32_t)c->r[0],0); // 8024EDF8
  if (!crb(c,2)) { goto L_8024EE08; } // 8024EDFC
  c->r[3]=0u+0x00000000u; // 8024EE00
  goto L_8024EF7C; // 8024EE04
L_8024EE08:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 8024EE08
  cmps(c,0,(int32_t)c->r[0],0); // 8024EE0C
  if (!crb(c,2)) { goto L_8024EE1C; } // 8024EE10
  c->r[3]=0u+0x00000000u; // 8024EE14
  goto L_8024EF7C; // 8024EE18
L_8024EE1C:;
  c->r[4]=R32(c->r[3]+0x00000048u); // 8024EE1C
  c->r[0]=c->r[4]+0xFFF00000u; // 8024EE20
  cmpu(c,0,c->r[0],0x00000000u); // 8024EE24
  if (!crb(c,2)) { goto L_8024EE34; } // 8024EE28
  c->r[3]=0u+0x00000000u; // 8024EE2C
  goto L_8024EF7C; // 8024EE30
L_8024EE34:;
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 8024EE34
  if (crb(c,2)) { goto L_8024EE94; } // 8024EE38
  c->r[4]=0u+0x804D0000u; // 8024EE3C
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024EE40
  c->r[4]=c->r[4]+0x00003318u; // 8024EE44
  {uint32_t ea=c->r[2]+0xFFFFD8D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024EE48
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024EE4C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8024EE50
  fcmp(c,0,c->f[1],c->f[0]); // 8024EE54
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 8024EE58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8024EE5C
  if (!crb(c,2)) { goto L_8024EE94; } // 8024EE60
  c->r[0]=0u+0x20000000u; // 8024EE64
  c->r[4]=R32(c->r[31]+0x00000020u); // 8024EE68
  W32(c->r[3]+0x00000048u,c->r[0]); // 8024EE6C
  c->r[28]=0u+0x80460000u; // 8024EE70
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 8024EE74
  c->r[3]=c->r[28]+0xFFFFD468u; // 8024EE78
  c->r[6]=0u+0x00000001u; // 8024EE7C
  c->lr=0x8024EE84u; f_8014A860(c); // 8024EE80
  c->r[4]=R32(c->r[31]+0x00000020u); // 8024EE84
  c->r[3]=c->r[28]+0xFFFFD468u; // 8024EE88
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 8024EE8C
  c->lr=0x8024EE94u; f_8014A924(c); // 8024EE90
L_8024EE94:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 8024EE94
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 8024EE98
  if (crb(c,2)) { goto L_8024EF08; } // 8024EE9C
  c->r[28]=0u+0x80440000u; // 8024EEA0
  c->r[29]=0u+0x80450000u; // 8024EEA4
  c->r[26]=0u+0x00000000u; // 8024EEA8
  c->r[30]=0u+0x00000000u; // 8024EEAC
  c->r[28]=c->r[28]+0xFFFFA818u; // 8024EEB0
  c->r[29]=c->r[29]+0xFFFFA808u; // 8024EEB4
L_8024EEB8:;
  cmps(c,0,(int32_t)c->r[26],0); // 8024EEB8
  c->r[0]=c->r[26]|c->r[26]; // 8024EEBC
  if (!crb(c,0)) { goto L_8024EEC8; } // 8024EEC0
  c->r[0]=R32(c->r[28]+0x00006878u); // 8024EEC4
L_8024EEC8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6628); // 8024EEC8
  c->r[3]=c->r[29]+c->r[30]; // 8024EECC
  c->r[4]=0u+0x0000000Au; // 8024EED0
  c->r[5]=c->r[28]+c->r[0]; // 8024EED4
  c->r[27]=R32(c->r[5]+0x0000001Cu); // 8024EED8
  c->lr=0x8024EEE0u; f_8003FB98(c); // 8024EEDC
  c->r[0]=c->r[27]&c->r[3]; cr0(c,c->r[0]); // 8024EEE0
  if (crb(c,2)) { goto L_8024EEF8; } // 8024EEE4
  c->r[3]=c->r[31]|c->r[31]; // 8024EEE8
  c->r[4]=0u+0x00000001u; // 8024EEEC
  c->lr=0x8024EEF4u; f_8024F8B8(c); // 8024EEF0
  goto L_8024EF08; // 8024EEF4
L_8024EEF8:;
  c->r[26]=c->r[26]+0x00000001u; // 8024EEF8
  c->r[30]=c->r[30]+0x00000068u; // 8024EEFC
  cmps(c,0,(int32_t)c->r[26],4); // 8024EF00
  if (crb(c,0)) { IRQCHK(c); goto L_8024EEB8; } // 8024EF04
L_8024EF08:;
  c->r[30]=0u+0x80460000u; // 8024EF08
  c->r[4]=R32(c->r[31]+0x00000020u); // 8024EF0C
  c->r[30]=c->r[30]+0xFFFFD468u; // 8024EF10
  c->r[5]=R32(c->r[31]+0x00000024u); // 8024EF14
  c->r[3]=c->r[30]+0x00000014u; // 8024EF18
  c->lr=0x8024EF20u; f_8004867C(c); // 8024EF1C
  c->r[4]=R32(c->r[31]+0x00000020u); // 8024EF20
  c->r[3]=c->r[30]+0x00000014u; // 8024EF24
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 8024EF28
  c->lr=0x8024EF30u; f_8004867C(c); // 8024EF2C
  c->r[4]=R32(c->r[31]+0x00000020u); // 8024EF30
  c->r[3]=c->r[30]+0x00000014u; // 8024EF34
  c->r[5]=R32(c->r[31]+0x00000034u); // 8024EF38
  c->lr=0x8024EF40u; f_8004867C(c); // 8024EF3C
  c->r[3]=R32(c->r[31]+0x00000048u); // 8024EF40
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 8024EF44
  if (!crb(c,2)) { goto L_8024EF54; } // 8024EF48
  c->r[0]=rotl(c->r[3],0)&0x04000000u; cr0(c,c->r[0]); // 8024EF4C
  if (crb(c,2)) { goto L_8024EF60; } // 8024EF50
L_8024EF54:;
  c->r[3]=c->r[31]|c->r[31]; // 8024EF54
  c->lr=0x8024EF5Cu; f_8024F5AC(c); // 8024EF58
  goto L_8024EF78; // 8024EF5C
L_8024EF60:;
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 8024EF60
  if (!crb(c,2)) { goto L_8024EF70; } // 8024EF64
  c->r[0]=rotl(c->r[3],0)&0x08000000u; cr0(c,c->r[0]); // 8024EF68
  if (crb(c,2)) { goto L_8024EF78; } // 8024EF6C
L_8024EF70:;
  c->r[3]=c->r[31]|c->r[31]; // 8024EF70
  c->lr=0x8024EF78u; f_8024F778(c); // 8024EF74
L_8024EF78:;
  c->r[3]=0u+0x00000001u; // 8024EF78
L_8024EF7C:;
  c->r[11]=c->r[1]+0x00000020u; // 8024EF7C
  c->lr=0x8024EF84u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024EF80
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024EF84
  c->lr=c->r[0]; // 8024EF88
  c->r[1]=c->r[1]+0x00000020u; // 8024EF8C
  return; // 8024EF90
}

// fn_8024EF94
void f_8024EF94(Ctx* __restrict c) {
  trace_call(0x8024EF94u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024EF94
  c->r[0]=c->lr; // 8024EF98
  W32(c->r[1]+0x00000074u,c->r[0]); // 8024EF9C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8024EFA0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8024EFA4
  c->r[11]=c->r[1]+0x00000060u; // 8024EFA8
  c->lr=0x8024EFB0u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024EFAC
  c->r[0]=R8(c->r[3]+0x00000004u); // 8024EFB0
  c->r[26]=c->r[3]|c->r[3]; // 8024EFB4
  cmps(c,0,(int32_t)c->r[0],0); // 8024EFB8
  if (!crb(c,2)) { goto L_8024EFC8; } // 8024EFBC
  c->r[3]=0u+0x00000000u; // 8024EFC0
  goto L_8024F260; // 8024EFC4
L_8024EFC8:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 8024EFC8
  cmps(c,0,(int32_t)c->r[0],0); // 8024EFCC
  if (!crb(c,2)) { goto L_8024EFDC; } // 8024EFD0
  c->r[3]=0u+0x00000000u; // 8024EFD4
  goto L_8024F260; // 8024EFD8
L_8024EFDC:;
  c->r[3]=R32(c->r[3]+0x00000048u); // 8024EFDC
  c->r[0]=c->r[3]+0xFFF00000u; // 8024EFE0
  cmpu(c,0,c->r[0],0x00000000u); // 8024EFE4
  if (!crb(c,2)) { goto L_8024EFF4; } // 8024EFE8
  c->r[3]=0u+0x00000000u; // 8024EFEC
  goto L_8024F260; // 8024EFF0
L_8024EFF4:;
  c->r[3]=0u+0x80460000u; // 8024EFF4
  c->r[4]=R32(c->r[26]+0x00000020u); // 8024EFF8
  c->r[3]=c->r[3]+0xFFFFD468u; // 8024EFFC
  c->r[5]=0u+0x00000000u; // 8024F000
  c->lr=0x8024F008u; f_80047E30(c); // 8024F004
  c->r[3]=R32(c->r[26]+0x00000048u); // 8024F008
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 8024F00C
  if (!crb(c,2)) { goto L_8024F25C; } // 8024F010
  c->r[0]=rotl(c->r[3],0)&0x04000000u; cr0(c,c->r[0]); // 8024F014
  if (!crb(c,2)) { goto L_8024F25C; } // 8024F018
  c->lr=0x8024F020u; f_802324FC(c); // 8024F01C
  c->lr=0x8024F024u; f_80232508(c); // 8024F020
  c->lr=0x8024F028u; f_802324FC(c); // 8024F024
  c->r[4]=0u+0x00000001u; // 8024F028
  c->lr=0x8024F030u; f_802327C0(c); // 8024F02C
  c->lr=0x8024F034u; f_802324FC(c); // 8024F030
  c->r[4]=R32(c->r[26]+0x00000068u); // 8024F034
  c->lr=0x8024F03Cu; f_802327C8(c); // 8024F038
  c->lr=0x8024F040u; f_802324FC(c); // 8024F03C
  c->r[4]=R32(c->r[26]+0x00000078u); // 8024F040
  c->lr=0x8024F048u; f_80232820(c); // 8024F044
  c->lr=0x8024F04Cu; f_802324FC(c); // 8024F048
  c->r[4]=0u+0x00000030u; // 8024F04C
  c->lr=0x8024F054u; f_80232818(c); // 8024F050
  c->lr=0x8024F058u; f_802324FC(c); // 8024F054
  c->r[4]=R32(c->r[26]+0x0000006Cu); // 8024F058
  c->lr=0x8024F060u; f_802327FC(c); // 8024F05C
  {uint32_t ea=c->r[26]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F060
  c->r[29]=0u+0x00000000u; // 8024F064
  {uint32_t ea=c->r[2]+0xFFFFD8D8u; c->f[31]=RF64(ea);} // 8024F068
  c->r[28]=0u+0x00000000u; // 8024F06C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8024F070
  c->r[25]=0u+0x00000000u; // 8024F074
  c->r[31]=0u+0x803E0000u; // 8024F078
  c->r[24]=0u+0x43300000u; // 8024F07C
  {uint32_t ea=c->r[26]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F080
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8024F084
  {uint32_t ea=c->r[26]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F088
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8024F08C
  goto L_8024F250; // 8024F090
L_8024F094:;
  c->lr=0x8024F098u; f_802324FC(c); // 8024F094
  c->r[4]=c->r[1]+0x00000010u; // 8024F098
  c->lr=0x8024F0A0u; f_80232804(c); // 8024F09C
  c->r[3]=c->r[26]+c->r[25]; // 8024F0A0
  c->r[4]=c->r[31]+0x000051A0u; // 8024F0A4
  c->r[30]=R32(c->r[3]+0x00000184u); // 8024F0A8
  c->r[27]=0u+0x00000000u; // 8024F0AC
  c->r[3]=c->r[30]|c->r[30]; // 8024F0B0
  c->lr=0x8024F0B8u; f_80293E90(c); // 8024F0B4
  goto L_8024F0CC; // 8024F0B8
L_8024F0BC:;
  c->r[3]=c->r[3]+0x00000001u; // 8024F0BC
  c->r[4]=c->r[31]+0x000051A0u; // 8024F0C0
  c->r[27]=c->r[27]+0x00000001u; // 8024F0C4
  c->lr=0x8024F0CCu; f_80293E90(c); // 8024F0C8
L_8024F0CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024F0CC
  if (!crb(c,2)) { IRQCHK(c); goto L_8024F0BC; } // 8024F0D0
  cmps(c,0,(int32_t)c->r[27],0); // 8024F0D4
  if (!crb(c,2)) { goto L_8024F0F0; } // 8024F0D8
  c->lr=0x8024F0E0u; f_802324FC(c); // 8024F0DC
  c->r[4]=c->r[30]|c->r[30]; // 8024F0E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F0E4
  c->lr=0x8024F0ECu; f_80232C04(c); // 8024F0E8
  goto L_8024F21C; // 8024F0EC
L_8024F0F0:;
  cmps(c,0,(int32_t)c->r[27],1); // 8024F0F0
  if (!crb(c,2)) { goto L_8024F11C; } // 8024F0F4
  c->r[29]=rotl(c->r[29],5)&0xFFFFFFE0u; // 8024F0F8
  c->lr=0x8024F100u; f_802324FC(c); // 8024F0FC
  c->r[6]=c->r[26]+c->r[29]; // 8024F100
  c->r[4]=c->r[30]|c->r[30]; // 8024F104
  c->r[5]=c->r[6]+0x000001C8u; // 8024F108
  c->r[6]=c->r[6]+0x00000248u; // 8024F10C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F110
  c->lr=0x8024F118u; f_80232C04(c); // 8024F114
  goto L_8024F21C; // 8024F118
L_8024F11C:;
  cmps(c,0,(int32_t)c->r[27],2); // 8024F11C
  if (!crb(c,2)) { goto L_8024F15C; } // 8024F120
  c->r[0]=c->r[29]+0x00000001u; // 8024F124
  c->r[23]=rotl(c->r[29],5)&0xFFFFFFE0u; // 8024F128
  c->r[29]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8024F12C
  c->lr=0x8024F134u; f_802324FC(c); // 8024F130
  c->r[6]=c->r[26]+c->r[23]; // 8024F134
  c->r[8]=c->r[26]+c->r[29]; // 8024F138
  c->r[5]=c->r[6]+0x000001C8u; // 8024F13C
  c->r[4]=c->r[30]|c->r[30]; // 8024F140
  c->r[7]=c->r[8]+0x000001C8u; // 8024F144
  c->r[6]=c->r[6]+0x00000248u; // 8024F148
  c->r[8]=c->r[8]+0x00000248u; // 8024F14C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F150
  c->lr=0x8024F158u; f_80232C04(c); // 8024F154
  goto L_8024F21C; // 8024F158
L_8024F15C:;
  cmps(c,0,(int32_t)c->r[27],3); // 8024F15C
  if (!crb(c,2)) { goto L_8024F1B0; } // 8024F160
  c->r[3]=c->r[29]+0x00000002u; // 8024F164
  c->r[0]=c->r[29]+0x00000001u; // 8024F168
  c->r[22]=rotl(c->r[29],5)&0xFFFFFFE0u; // 8024F16C
  c->r[23]=rotl(c->r[3],5)&0xFFFFFFE0u; // 8024F170
  c->r[29]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8024F174
  c->lr=0x8024F17Cu; f_802324FC(c); // 8024F178
  c->r[6]=c->r[26]+c->r[22]; // 8024F17C
  c->r[8]=c->r[26]+c->r[29]; // 8024F180
  c->r[10]=c->r[26]+c->r[23]; // 8024F184
  c->r[4]=c->r[30]|c->r[30]; // 8024F188
  c->r[5]=c->r[6]+0x000001C8u; // 8024F18C
  c->r[7]=c->r[8]+0x000001C8u; // 8024F190
  c->r[9]=c->r[10]+0x000001C8u; // 8024F194
  c->r[6]=c->r[6]+0x00000248u; // 8024F198
  c->r[8]=c->r[8]+0x00000248u; // 8024F19C
  c->r[10]=c->r[10]+0x00000248u; // 8024F1A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F1A4
  c->lr=0x8024F1ACu; f_80232C04(c); // 8024F1A8
  goto L_8024F21C; // 8024F1AC
L_8024F1B0:;
  cmps(c,0,(int32_t)c->r[27],4); // 8024F1B0
  if (!crb(c,2)) { goto L_8024F21C; } // 8024F1B4
  c->r[4]=c->r[29]+0x00000003u; // 8024F1B8
  c->r[3]=c->r[29]+0x00000002u; // 8024F1BC
  c->r[0]=c->r[29]+0x00000001u; // 8024F1C0
  c->r[21]=rotl(c->r[29],5)&0xFFFFFFE0u; // 8024F1C4
  c->r[22]=rotl(c->r[4],5)&0xFFFFFFE0u; // 8024F1C8
  c->r[23]=rotl(c->r[3],5)&0xFFFFFFE0u; // 8024F1CC
  c->r[29]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8024F1D0
  c->lr=0x8024F1D8u; f_802324FC(c); // 8024F1D4
  c->r[4]=c->r[26]+c->r[22]; // 8024F1D8
  c->r[6]=c->r[26]+c->r[21]; // 8024F1DC
  c->r[0]=c->r[4]+0x000001C8u; // 8024F1E0
  c->r[8]=c->r[26]+c->r[29]; // 8024F1E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024F1E8
  c->r[0]=c->r[4]+0x00000248u; // 8024F1EC
  c->r[10]=c->r[26]+c->r[23]; // 8024F1F0
  c->r[5]=c->r[6]+0x000001C8u; // 8024F1F4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024F1F8
  c->r[7]=c->r[8]+0x000001C8u; // 8024F1FC
  c->r[9]=c->r[10]+0x000001C8u; // 8024F200
  c->r[4]=c->r[30]|c->r[30]; // 8024F204
  c->r[6]=c->r[6]+0x00000248u; // 8024F208
  c->r[8]=c->r[8]+0x00000248u; // 8024F20C
  c->r[10]=c->r[10]+0x00000248u; // 8024F210
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F214
  c->lr=0x8024F21Cu; f_80232C04(c); // 8024F218
L_8024F21C:;
  c->r[3]=R32(c->r[26]+0x00000068u); // 8024F21C
  c->r[29]=c->r[27]|c->r[27]; // 8024F220
  W32(c->r[1]+0x00000020u,c->r[24]); // 8024F224
  c->r[28]=c->r[28]+0x00000001u; // 8024F228
  c->r[0]=c->r[3]+0x00000004u; // 8024F22C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F230
  c->r[0]=c->r[0]^0x80000000u; // 8024F234
  c->r[25]=c->r[25]+0x00000004u; // 8024F238
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024F23C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8024F240
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8024F244
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8024F248
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8024F24C
L_8024F250:;
  c->r[0]=R32(c->r[26]+0x00000180u); // 8024F250
  cmpu(c,0,c->r[28],c->r[0]); // 8024F254
  if (crb(c,0)) { IRQCHK(c); goto L_8024F094; } // 8024F258
L_8024F25C:;
  c->r[3]=0u+0x00000001u; // 8024F25C
L_8024F260:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8024F260
  c->r[11]=c->r[1]+0x00000060u; // 8024F264
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8024F268
  c->lr=0x8024F270u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024F26C
  c->r[0]=R32(c->r[1]+0x00000074u); // 8024F270
  c->lr=c->r[0]; // 8024F274
  c->r[1]=c->r[1]+0x00000070u; // 8024F278
  return; // 8024F27C
}

// fn_8024F280
void f_8024F280(Ctx* __restrict c) {
  trace_call(0x8024F280u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F280
  c->r[0]=c->lr; // 8024F284
  W32(c->r[1]+0x00000044u,c->r[0]); // 8024F288
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8024F28C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8024F290
  c->r[11]=c->r[1]+0x00000030u; // 8024F294
  c->lr=0x8024F29Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024F298
  c->r[0]=R8(c->r[3]+0x00000004u); // 8024F29C
  c->r[29]=c->r[3]|c->r[3]; // 8024F2A0
  c->r[31]=c->r[4]|c->r[4]; // 8024F2A4
  cmps(c,0,(int32_t)c->r[0],0); // 8024F2A8
  if (!crb(c,2)) { goto L_8024F2B8; } // 8024F2AC
  c->r[3]=0u+0x00000000u; // 8024F2B0
  goto L_8024F47C; // 8024F2B4
L_8024F2B8:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 8024F2B8
  cmps(c,0,(int32_t)c->r[0],0); // 8024F2BC
  if (!crb(c,2)) { goto L_8024F2CC; } // 8024F2C0
  c->r[3]=0u+0x00000000u; // 8024F2C4
  goto L_8024F47C; // 8024F2C8
L_8024F2CC:;
  c->r[30]=0u+0x803E0000u; // 8024F2CC
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8024F2D0
  c->r[30]=c->r[30]+0x000051A0u; // 8024F2D4
  c->r[3]=c->r[1]+0x00000010u; // 8024F2D8
  c->r[4]=c->r[30]+0x00000005u; // 8024F2DC
  c->lr=0x8024F2E4u; f_80242B30(c); // 8024F2E0
  c->r[5]=c->r[31]|c->r[31]; // 8024F2E4
  c->r[3]=c->r[1]+0x00000008u; // 8024F2E8
  c->r[4]=c->r[30]+0x0000000Fu; // 8024F2EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024F2F0
  c->lr=0x8024F2F8u; f_80291CC4(c); // 8024F2F4
  c->r[3]=c->r[1]+0x00000010u; // 8024F2F8
  c->r[4]=c->r[1]+0x00000008u; // 8024F2FC
  c->lr=0x8024F304u; f_80242B8C(c); // 8024F300
  c->r[30]=0u+0x00000009u; // 8024F304
  c->r[3]=c->r[13]+0xFFFF97A8u; // 8024F308
  c->lr=0x8024F310u; f_80242AA8(c); // 8024F30C
  cmpu(c,0,c->r[3],0x00000009u); // 8024F310
  if (crb(c,1)) { goto L_8024F37C; } // 8024F314
  c->r[4]=0u+0x80410000u; // 8024F318
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8024F31C
  c->r[4]=c->r[4]+0x000013A0u; // 8024F320
  c->r[4]=R32(c->r[4]+c->r[0]); // 8024F324
  c->ctr=c->r[4]; // 8024F328
  if (true) { switch (c->ctr) { case 0x8024F330u: goto L_8024F330; case 0x8024F338u: goto L_8024F338; case 0x8024F340u: goto L_8024F340; case 0x8024F348u: goto L_8024F348; case 0x8024F350u: goto L_8024F350; case 0x8024F358u: goto L_8024F358; case 0x8024F360u: goto L_8024F360; case 0x8024F368u: goto L_8024F368; case 0x8024F370u: goto L_8024F370; case 0x8024F378u: goto L_8024F378; default: break; } dispatch(c,c->ctr); return; } // 8024F32C
L_8024F330:;
  c->r[30]=0u+0x00000007u; // 8024F330
  goto L_8024F37C; // 8024F334
L_8024F338:;
  c->r[30]=0u+0x0000000Au; // 8024F338
  goto L_8024F37C; // 8024F33C
L_8024F340:;
  c->r[30]=0u+0x00000009u; // 8024F340
  goto L_8024F37C; // 8024F344
L_8024F348:;
  c->r[30]=0u+0x0000000Bu; // 8024F348
  goto L_8024F37C; // 8024F34C
L_8024F350:;
  c->r[30]=0u+0x0000000Eu; // 8024F350
  goto L_8024F37C; // 8024F354
L_8024F358:;
  c->r[30]=0u+0x0000000Cu; // 8024F358
  goto L_8024F37C; // 8024F35C
L_8024F360:;
  c->r[30]=0u+0x0000000Fu; // 8024F360
  goto L_8024F37C; // 8024F364
L_8024F368:;
  c->r[30]=0u+0x0000000Du; // 8024F368
  goto L_8024F37C; // 8024F36C
L_8024F370:;
  c->r[30]=0u+0x00000010u; // 8024F370
  goto L_8024F37C; // 8024F374
L_8024F378:;
  c->r[30]=0u+0x00000009u; // 8024F378
L_8024F37C:;
  c->r[3]=c->r[1]+0x00000010u; // 8024F37C
  c->r[4]=0u+0x00000006u; // 8024F380
  c->r[5]=0u+0x0000005Fu; // 8024F384
  c->lr=0x8024F38Cu; f_80242CA8(c); // 8024F388
  c->lr=0x8024F390u; f_80295EAC(c); // 8024F38C
  W32(c->r[29]+0x00000050u,c->r[3]); // 8024F390
  c->r[4]=c->r[30]|c->r[30]; // 8024F394
  c->r[3]=c->r[1]+0x00000010u; // 8024F398
  c->r[5]=0u+0x00000000u; // 8024F39C
  c->lr=0x8024F3A4u; f_80242CA8(c); // 8024F3A0
  c->lr=0x8024F3A8u; f_80295EAC(c); // 8024F3A4
  c->r[0]=R32(c->r[29]+0x00000050u); // 8024F3A8
  c->r[30]=0u+0x803E0000u; // 8024F3AC
  c->r[30]=c->r[30]+0x000051A0u; // 8024F3B0
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024F3B4
  c->r[5]=c->r[0]+c->r[3]; // 8024F3B8
  c->r[3]=c->r[29]|c->r[29]; // 8024F3BC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8024F3C0
  c->r[6]=c->r[29]+0x0000005Cu; // 8024F3C4
  W32(c->r[29]+0x00000054u,c->r[0]); // 8024F3C8
  c->r[5]=c->r[30]+0x00000017u; // 8024F3CC
  c->lr=0x8024F3D4u; f_80149600(c); // 8024F3D0
  c->r[31]=0u+0x80460000u; // 8024F3D4
  c->r[5]=R32(c->r[29]+0x00000020u); // 8024F3D8
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F3DC
  c->r[6]=c->r[30]+0x0000001Cu; // 8024F3E0
  c->r[4]=0u+0x00000001u; // 8024F3E4
  c->lr=0x8024F3ECu; f_8014A80C(c); // 8024F3E8
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024F3EC
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F3F0
  c->r[5]=R32(c->r[29]+0x00000024u); // 8024F3F4
  c->r[6]=0u+0x00000001u; // 8024F3F8
  c->lr=0x8024F400u; f_8014A860(c); // 8024F3FC
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024F400
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F404
  c->r[5]=R32(c->r[29]+0x00000024u); // 8024F408
  c->lr=0x8024F410u; f_8014A924(c); // 8024F40C
  c->r[4]=R32(c->r[29]+0x00000024u); // 8024F410
  cmps(c,0,(int32_t)c->r[4],0); // 8024F414
  if (crb(c,0)) { goto L_8024F430; } // 8024F418
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F41C
  {uint32_t ea=c->r[2]+0xFFFFD8D0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8024F420
  c->r[3]=c->r[3]+0x00000014u; // 8024F424
  c->lr=0x8024F42Cu; f_8014ACB4(c); // 8024F428
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 8024F42C
L_8024F430:;
  c->r[0]=R32(c->r[29]+0x00000050u); // 8024F430
  c->r[3]=0u+0x80000000u; // 8024F434
  W32(c->r[29]+0x00000048u,c->r[3]); // 8024F438
  W32(c->r[29]+0x00000058u,c->r[0]); // 8024F43C
  c->lr=0x8024F444u; f_80066EFC(c); // 8024F440
  c->r[4]=0u+0x00000017u; // 8024F444
  c->r[5]=0u+0x00000001u; // 8024F448
  c->lr=0x8024F450u; f_80042D5C(c); // 8024F44C
  c->r[3]=0u+0x803E0000u; // 8024F450
  c->r[3]=c->r[3]+0x000051A0u; // 8024F454
  c->r[3]=addc(c,c->r[3],0x00000023u,0); cr0(c,c->r[3]); // 8024F458
  if (crb(c,2)) { goto L_8024F46C; } // 8024F45C
  {uint32_t ea=c->r[2]+0xFFFFD8D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024F460
  c->r[4]=0u+0xFFFFFFFFu; // 8024F464
  c->lr=0x8024F46Cu; f_80048B94(c); // 8024F468
L_8024F46C:;
  c->r[3]=c->r[1]+0x00000010u; // 8024F46C
  c->r[4]=0u+0xFFFFFFFFu; // 8024F470
  c->lr=0x8024F478u; f_80242AF0(c); // 8024F474
  c->r[3]=0u+0x00000001u; // 8024F478
L_8024F47C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8024F47C
  c->r[11]=c->r[1]+0x00000030u; // 8024F480
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8024F484
  c->lr=0x8024F48Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024F488
  c->r[0]=R32(c->r[1]+0x00000044u); // 8024F48C
  c->lr=c->r[0]; // 8024F490
  c->r[1]=c->r[1]+0x00000040u; // 8024F494
  return; // 8024F498
}

// fn_8024F49C
void f_8024F49C(Ctx* __restrict c) {
  trace_call(0x8024F49Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F49C
  c->r[0]=c->lr; // 8024F4A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024F4A4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8024F4A8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8024F4AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024F4B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024F4B4
  c->r[30]=c->r[3]|c->r[3]; // 8024F4B8
  c->r[0]=R8(c->r[3]+0x00000004u); // 8024F4BC
  cmps(c,0,(int32_t)c->r[0],0); // 8024F4C0
  if (!crb(c,2)) { goto L_8024F4D0; } // 8024F4C4
  c->r[3]=0u+0x00000000u; // 8024F4C8
  goto L_8024F538; // 8024F4CC
L_8024F4D0:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 8024F4D0
  cmps(c,0,(int32_t)c->r[0],0); // 8024F4D4
  if (!crb(c,2)) { goto L_8024F4E4; } // 8024F4D8
  c->r[3]=0u+0x00000000u; // 8024F4DC
  goto L_8024F538; // 8024F4E0
L_8024F4E4:;
  c->r[31]=0u+0x80460000u; // 8024F4E4
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024F4E8
  c->r[5]=R32(c->r[30]+0x00000024u); // 8024F4EC
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F4F0
  c->r[6]=0u+0x00000001u; // 8024F4F4
  c->lr=0x8024F4FCu; f_8014A860(c); // 8024F4F8
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024F4FC
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F500
  c->r[5]=R32(c->r[30]+0x00000024u); // 8024F504
  c->lr=0x8024F50Cu; f_80155D5C(c); // 8024F508
  c->r[4]=R32(c->r[30]+0x00000024u); // 8024F50C
  cmps(c,0,(int32_t)c->r[4],0); // 8024F510
  if (crb(c,0)) { goto L_8024F52C; } // 8024F514
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F518
  {uint32_t ea=c->r[2]+0xFFFFD8E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8024F51C
  c->r[3]=c->r[3]+0x00000014u; // 8024F520
  c->lr=0x8024F528u; f_8014ACB4(c); // 8024F524
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 8024F528
L_8024F52C:;
  c->r[0]=0u+0x04000000u; // 8024F52C
  c->r[3]=0u+0x00000001u; // 8024F530
  W32(c->r[30]+0x00000048u,c->r[0]); // 8024F534
L_8024F538:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8024F538
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024F53C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8024F540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024F544
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024F548
  c->lr=c->r[0]; // 8024F54C
  c->r[1]=c->r[1]+0x00000020u; // 8024F550
  return; // 8024F554
}

// fn_8024F558
void f_8024F558(Ctx* __restrict c) {
  trace_call(0x8024F558u);
  c->r[3]=R32(c->r[3]+0x00000048u); // 8024F558
  c->r[0]=0u+0x00100000u; // 8024F55C
  c->r[3]=c->r[3]-c->r[0]; // 8024F560
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8024F564
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8024F568
  return; // 8024F56C
}

// fn_8024F570
void f_8024F570(Ctx* __restrict c) {
  trace_call(0x8024F570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F570
  c->r[0]=c->lr; // 8024F574
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024F578
  c->r[4]=R32(c->r[3]+0x00000048u); // 8024F57C
  c->r[0]=c->r[4]+0xFFF00000u; // 8024F580
  cmpu(c,0,c->r[0],0x00000000u); // 8024F584
  if (!crb(c,2)) { goto L_8024F594; } // 8024F588
  c->r[3]=0u+0x00000000u; // 8024F58C
  goto L_8024F59C; // 8024F590
L_8024F594:;
  c->lr=0x8024F598u; f_8024F988(c); // 8024F594
  c->r[3]=0u+0x00000001u; // 8024F598
L_8024F59C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024F59C
  c->lr=c->r[0]; // 8024F5A0
  c->r[1]=c->r[1]+0x00000010u; // 8024F5A4
  return; // 8024F5A8
}

// fn_8024F5AC
void f_8024F5AC(Ctx* __restrict c) {
  trace_call(0x8024F5ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F5AC
  c->r[0]=c->lr; // 8024F5B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8024F5B4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8024F5B8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8024F5BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8024F5C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8024F5C4
  c->r[30]=c->r[3]|c->r[3]; // 8024F5C8
  c->r[3]=0u+0x80460000u; // 8024F5CC
  c->r[4]=R32(c->r[30]+0x00000024u); // 8024F5D0
  c->r[3]=c->r[3]+0xFFFFD468u; // 8024F5D4
  c->lr=0x8024F5DCu; f_80155E44(c); // 8024F5D8
  cmps(c,0,(int32_t)c->r[3],0); // 8024F5DC
  if (crb(c,2)) { goto L_8024F65C; } // 8024F5E0
  c->r[0]=R32(c->r[30]+0x00000048u); // 8024F5E4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8024F5E8
  if (crb(c,2)) { goto L_8024F608; } // 8024F5EC
  c->r[3]=c->r[30]|c->r[30]; // 8024F5F0
  c->lr=0x8024F5F8u; f_8024F988(c); // 8024F5F4
  {uint32_t ea=c->r[2]+0xFFFFD8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F5F8
  c->r[0]=0u+0x40000000u; // 8024F5FC
  W32(c->r[30]+0x00000048u,c->r[0]); // 8024F600
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8024F604
L_8024F608:;
  c->r[0]=R32(c->r[30]+0x00000048u); // 8024F608
  c->r[0]=rotl(c->r[0],0)&0x04000000u; cr0(c,c->r[0]); // 8024F60C
  if (crb(c,2)) { goto L_8024F65C; } // 8024F610
  c->r[6]=0u+0x803E0000u; // 8024F614
  c->r[31]=0u+0x80460000u; // 8024F618
  c->r[6]=c->r[6]+0x000051A0u; // 8024F61C
  c->r[5]=R32(c->r[30]+0x00000020u); // 8024F620
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F624
  c->r[4]=0u+0x00000000u; // 8024F628
  c->r[6]=c->r[6]+0x0000001Cu; // 8024F62C
  c->lr=0x8024F634u; f_8014A80C(c); // 8024F630
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024F634
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F638
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 8024F63C
  c->r[6]=0u+0x00000000u; // 8024F640
  c->lr=0x8024F648u; f_8014A860(c); // 8024F644
  c->r[0]=0u+0x00100000u; // 8024F648
  W32(c->r[30]+0x00000048u,c->r[0]); // 8024F64C
  c->lr=0x8024F654u; f_80066EFC(c); // 8024F650
  c->r[4]=0u+0x00000017u; // 8024F654
  c->lr=0x8024F65Cu; f_80042E7C(c); // 8024F658
L_8024F65C:;
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024F65C
  c->r[3]=0u+0x803E0000u; // 8024F660
  c->r[3]=c->r[3]+0x000051A0u; // 8024F664
  cmps(c,0,(int32_t)c->r[4],0); // 8024F668
  c->r[5]=c->r[3]+0x0000001Cu; // 8024F66C
  if (!crb(c,0)) { goto L_8024F67C; } // 8024F670
  c->r[0]=0u+0x00000000u; // 8024F674
  goto L_8024F71C; // 8024F678
L_8024F67C:;
  c->r[3]=0u+0x80460000u; // 8024F67C
  c->r[3]=c->r[3]+0xFFFFD468u; // 8024F680
  c->lr=0x8024F688u; f_800482D4(c); // 8024F684
  cmps(c,0,(int32_t)c->r[3],0); // 8024F688
  if (!crb(c,2)) { goto L_8024F698; } // 8024F68C
  c->r[0]=0u+0x00000000u; // 8024F690
  goto L_8024F71C; // 8024F694
L_8024F698:;
  c->r[0]=R8(c->r[3]+0x000000B4u); // 8024F698
  c->r[4]=0u+0x43300000u; // 8024F69C
  W32(c->r[1]+0x00000008u,c->r[4]); // 8024F6A0
  {uint32_t ea=c->r[2]+0xFFFFD8F0u; c->f[2]=RF64(ea);} // 8024F6A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024F6A8
  {uint32_t ea=c->r[2]+0xFFFFD8E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024F6AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8024F6B0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8024F6B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024F6B8
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 8024F6BC
  goto L_8024F6E4; // 8024F6C0
L_8024F6C4:;
  c->r[0]=R8(c->r[3]+0x000000B4u); // 8024F6C4
  W32(c->r[1]+0x00000008u,c->r[4]); // 8024F6C8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8024F6CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8024F6D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8024F6D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8024F6D8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8024F6DC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8024F6E0
L_8024F6E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8024F6E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8024F6C4; } // 8024F6E8
  {uint32_t ea=c->r[2]+0xFFFFD8E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F6EC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8024F6F0
  fcmp(c,0,c->f[3],c->f[0]); // 8024F6F4
  if (!crb(c,1)) { goto L_8024F700; } // 8024F6F8
  c->f[3]=c->f[0]; // 8024F6FC
L_8024F700:;
  {uint32_t ea=c->r[2]+0xFFFFD8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F700
  fcmp(c,0,c->f[3],c->f[0]); // 8024F704
  if (!crb(c,0)) { goto L_8024F710; } // 8024F708
  c->f[3]=c->f[0]; // 8024F70C
L_8024F710:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8024F710
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8024F714
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8024F718
L_8024F71C:;
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8024F71C
  c->r[0]=0u+0x43300000u; // 8024F720
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8024F724
  {uint32_t ea=c->r[2]+0xFFFFD8F0u; c->f[3]=RF64(ea);} // 8024F728
  W32(c->r[1]+0x00000008u,c->r[0]); // 8024F72C
  {uint32_t ea=c->r[2]+0xFFFFD8E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024F730
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8024F734
  {uint32_t ea=c->r[2]+0xFFFFD8ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024F738
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8024F73C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8024F740
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 8024F744
  c->lr=0x8024F74Cu; f_80066EFC(c); // 8024F748
  c->f[1]=c->f[31]; // 8024F74C
  c->r[3]=c->r[3]+0x000004A4u; // 8024F750
  c->lr=0x8024F758u; f_80040DAC(c); // 8024F754
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8024F758
  c->r[0]=R32(c->r[1]+0x00000034u); // 8024F75C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8024F760
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8024F764
  c->r[30]=R32(c->r[1]+0x00000018u); // 8024F768
  c->lr=c->r[0]; // 8024F76C
  c->r[1]=c->r[1]+0x00000030u; // 8024F770
  return; // 8024F774
}

// fn_8024F778
void f_8024F778(Ctx* __restrict c) {
  trace_call(0x8024F778u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F778
  c->r[0]=c->lr; // 8024F77C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024F780
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8024F784
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8024F788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024F78C
  c->r[31]=c->r[3]|c->r[3]; // 8024F790
  c->r[3]=0u+0x80460000u; // 8024F794
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024F798
  c->r[3]=c->r[3]+0xFFFFD468u; // 8024F79C
  c->r[4]=R32(c->r[31]+0x00000034u); // 8024F7A0
  c->lr=0x8024F7A8u; f_80155E44(c); // 8024F7A4
  cmps(c,0,(int32_t)c->r[3],0); // 8024F7A8
  if (crb(c,2)) { goto L_8024F898; } // 8024F7AC
  c->r[3]=R32(c->r[31]+0x00000048u); // 8024F7B0
  c->r[0]=c->r[3]+0xF0000000u; // 8024F7B4
  cmpu(c,0,c->r[0],0x00000000u); // 8024F7B8
  if (!crb(c,2)) { goto L_8024F7D0; } // 8024F7BC
  c->r[3]=R32(c->r[31]+0x00000058u); // 8024F7C0
  c->r[0]=c->r[3]+0x00000001u; // 8024F7C4
  W32(c->r[31]+0x00000058u,c->r[0]); // 8024F7C8
  goto L_8024F7E8; // 8024F7CC
L_8024F7D0:;
  c->r[0]=c->r[3]+0xF8000000u; // 8024F7D0
  cmpu(c,0,c->r[0],0x00000000u); // 8024F7D4
  if (!crb(c,2)) { goto L_8024F7E8; } // 8024F7D8
  c->r[3]=R32(c->r[31]+0x00000058u); // 8024F7DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8024F7E0
  W32(c->r[31]+0x00000058u,c->r[0]); // 8024F7E4
L_8024F7E8:;
  c->r[3]=R32(c->r[31]+0x00000058u); // 8024F7E8
  c->r[0]=R32(c->r[31]+0x00000054u); // 8024F7EC
  cmpu(c,0,c->r[3],c->r[0]); // 8024F7F0
  if (!crb(c,1)) { goto L_8024F804; } // 8024F7F4
  c->r[3]=c->r[31]|c->r[31]; // 8024F7F8
  c->lr=0x8024F800u; f_8024F49C(c); // 8024F7FC
  goto L_8024F898; // 8024F800
L_8024F804:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 8024F804
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8024F808
  if (crb(c,2)) { goto L_8024F83C; } // 8024F80C
  c->r[0]=0u+0x20000000u; // 8024F810
  c->r[4]=0u+0x803E0000u; // 8024F814
  c->r[4]=c->r[4]+0x000051A0u; // 8024F818
  c->r[3]=0u+0x80460000u; // 8024F81C
  c->r[6]=c->r[4]+0x0000002Au; // 8024F820
  W32(c->r[31]+0x00000048u,c->r[0]); // 8024F824
  c->r[5]=R32(c->r[31]+0x00000020u); // 8024F828
  c->r[3]=c->r[3]+0xFFFFD468u; // 8024F82C
  c->r[4]=0u+0x00000000u; // 8024F830
  c->lr=0x8024F838u; f_8014A80C(c); // 8024F834
  goto L_8024F898; // 8024F838
L_8024F83C:;
  c->r[30]=0u+0x80460000u; // 8024F83C
  c->r[4]=R32(c->r[31]+0x00000020u); // 8024F840
  c->r[5]=R32(c->r[31]+0x00000034u); // 8024F844
  c->r[3]=c->r[30]+0xFFFFD468u; // 8024F848
  c->r[6]=0u+0x00000001u; // 8024F84C
  c->lr=0x8024F854u; f_8014A860(c); // 8024F850
  c->r[4]=R32(c->r[31]+0x00000020u); // 8024F854
  c->r[3]=c->r[30]+0xFFFFD468u; // 8024F858
  c->r[5]=R32(c->r[31]+0x00000034u); // 8024F85C
  c->lr=0x8024F864u; f_80155D5C(c); // 8024F860
  c->r[4]=R32(c->r[31]+0x00000034u); // 8024F864
  cmps(c,0,(int32_t)c->r[4],0); // 8024F868
  if (crb(c,0)) { goto L_8024F884; } // 8024F86C
  c->r[3]=c->r[30]+0xFFFFD468u; // 8024F870
  {uint32_t ea=c->r[2]+0xFFFFD8E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8024F874
  c->r[3]=c->r[3]+0x00000014u; // 8024F878
  c->lr=0x8024F880u; f_8014ACB4(c); // 8024F87C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 8024F880
L_8024F884:;
  c->r[4]=R32(c->r[31]+0x00000048u); // 8024F884
  c->r[3]=c->r[31]|c->r[31]; // 8024F888
  c->r[0]=c->r[4]+0x00000001u; // 8024F88C
  W32(c->r[31]+0x00000048u,c->r[0]); // 8024F890
  c->lr=0x8024F898u; f_8024F988(c); // 8024F894
L_8024F898:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8024F898
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024F89C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8024F8A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024F8A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024F8A8
  c->lr=c->r[0]; // 8024F8AC
  c->r[1]=c->r[1]+0x00000020u; // 8024F8B0
  return; // 8024F8B4
}

// fn_8024F8B8
void f_8024F8B8(Ctx* __restrict c) {
  trace_call(0x8024F8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F8B8
  c->r[0]=c->lr; // 8024F8BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024F8C0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8024F8C4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8024F8C8
  cmps(c,0,(int32_t)c->r[4],0); // 8024F8CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024F8D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8024F8D4
  c->r[30]=c->r[3]|c->r[3]; // 8024F8D8
  if (crb(c,2)) { goto L_8024F8EC; } // 8024F8DC
  c->r[0]=0u+0x10000000u; // 8024F8E0
  W32(c->r[3]+0x00000048u,c->r[0]); // 8024F8E4
  goto L_8024F904; // 8024F8E8
L_8024F8EC:;
  c->r[4]=R32(c->r[3]+0x00000058u); // 8024F8EC
  c->r[0]=R32(c->r[3]+0x00000050u); // 8024F8F0
  cmpu(c,0,c->r[4],c->r[0]); // 8024F8F4
  if (crb(c,2)) { goto L_8024F968; } // 8024F8F8
  c->r[0]=0u+0x08000000u; // 8024F8FC
  W32(c->r[3]+0x00000048u,c->r[0]); // 8024F900
L_8024F904:;
  c->r[6]=0u+0x803E0000u; // 8024F904
  c->r[31]=0u+0x80460000u; // 8024F908
  c->r[6]=c->r[6]+0x000051A0u; // 8024F90C
  c->r[5]=R32(c->r[30]+0x00000020u); // 8024F910
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F914
  c->r[4]=0u+0x00000001u; // 8024F918
  c->r[6]=c->r[6]+0x0000002Au; // 8024F91C
  c->lr=0x8024F924u; f_8014A80C(c); // 8024F920
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024F924
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F928
  c->r[5]=R32(c->r[30]+0x00000034u); // 8024F92C
  c->r[6]=0u+0x00000001u; // 8024F930
  c->lr=0x8024F938u; f_8014A860(c); // 8024F934
  c->r[4]=R32(c->r[30]+0x00000020u); // 8024F938
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F93C
  c->r[5]=R32(c->r[30]+0x00000034u); // 8024F940
  c->lr=0x8024F948u; f_8014A924(c); // 8024F944
  c->r[4]=R32(c->r[30]+0x00000034u); // 8024F948
  cmps(c,0,(int32_t)c->r[4],0); // 8024F94C
  if (crb(c,0)) { goto L_8024F968; } // 8024F950
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024F954
  {uint32_t ea=c->r[2]+0xFFFFD8D0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8024F958
  c->r[3]=c->r[3]+0x00000014u; // 8024F95C
  c->lr=0x8024F964u; f_8014ACB4(c); // 8024F960
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 8024F964
L_8024F968:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8024F968
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024F96C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8024F970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024F974
  c->r[30]=R32(c->r[1]+0x00000008u); // 8024F978
  c->lr=c->r[0]; // 8024F97C
  c->r[1]=c->r[1]+0x00000020u; // 8024F980
  return; // 8024F984
}

// fn_8024F988
void f_8024F988(Ctx* __restrict c) {
  trace_call(0x8024F988u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024F988
  c->r[0]=c->lr; // 8024F98C
  W32(c->r[1]+0x00000154u,c->r[0]); // 8024F990
  c->r[11]=c->r[1]+0x00000150u; // 8024F994
  c->lr=0x8024F99Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8024F998
  c->r[0]=0u+0x43300000u; // 8024F99C
  c->r[21]=0u+0x80410000u; // 8024F9A0
  W32(c->r[1]+0x00000108u,c->r[0]); // 8024F9A4
  c->r[23]=c->r[3]|c->r[3]; // 8024F9A8
  c->r[21]=c->r[21]+0x00001360u; // 8024F9AC
  c->r[22]=0u+0x00000000u; // 8024F9B0
  W32(c->r[1]+0x00000110u,c->r[0]); // 8024F9B4
  c->r[20]=0u+0x00000000u; // 8024F9B8
L_8024F9BC:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 8024F9BC
  c->r[4]=c->r[22]|c->r[22]; // 8024F9C0
  c->lr=0x8024F9C8u; f_801F8308(c); // 8024F9C4
  c->r[22]=c->r[22]+0x00000001u; // 8024F9C8
  c->r[4]=c->r[23]+c->r[20]; // 8024F9CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8024F9D0
  c->r[20]=c->r[20]+0x00000004u; // 8024F9D4
  cmps(c,0,(int32_t)c->r[22],2); // 8024F9D8
  W32(c->r[4]+0x00000040u,c->r[0]); // 8024F9DC
  if (crb(c,0)) { IRQCHK(c); goto L_8024F9BC; } // 8024F9E0
  c->r[20]=0u+0x803E0000u; // 8024F9E4
  c->r[4]=R32(c->r[23]+0x00000020u); // 8024F9E8
  c->r[20]=c->r[20]+0x000051A0u; // 8024F9EC
  c->r[3]=c->r[23]|c->r[23]; // 8024F9F0
  c->r[5]=c->r[20]+0x00000017u; // 8024F9F4
  c->r[6]=c->r[23]+0x0000005Cu; // 8024F9F8
  c->r[7]=0u+0xFFFFFFFFu; // 8024F9FC
  c->lr=0x8024FA04u; f_80149470(c); // 8024FA00
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8024FA04
  c->r[5]=c->r[23]+0x0000017Cu; // 8024FA08
  c->r[4]=R32(c->r[23]+0x00000058u); // 8024FA0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024FA10
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8024FA14
  c->ctr=c->r[12]; // 8024FA18
  if (true) { c->lr=0x8024FA20u; dispatch(c,c->ctr); } // 8024FA1C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8024FA20
  c->r[5]=c->r[1]+0x00000020u; // 8024FA24
  c->r[4]=0u+0x000007D1u; // 8024FA28
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024FA2C
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8024FA30
  c->ctr=c->r[12]; // 8024FA34
  if (true) { c->lr=0x8024FA3Cu; dispatch(c,c->ctr); } // 8024FA38
  c->r[4]=c->r[20]+0x0000002Fu; // 8024FA3C
  c->r[3]=c->r[1]+0x00000018u; // 8024FA40
  c->lr=0x8024FA48u; f_80242B30(c); // 8024FA44
  c->r[5]=R32(c->r[23]+0x0000003Cu); // 8024FA48
  c->r[3]=c->r[1]+0x00000010u; // 8024FA4C
  c->r[4]=c->r[20]+0x0000000Fu; // 8024FA50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024FA54
  c->lr=0x8024FA5Cu; f_80291CC4(c); // 8024FA58
  c->r[3]=c->r[1]+0x00000018u; // 8024FA5C
  c->r[4]=c->r[1]+0x00000010u; // 8024FA60
  c->lr=0x8024FA68u; f_80242B8C(c); // 8024FA64
  c->r[20]=0u+0x00000000u; // 8024FA68
  goto L_8024FA80; // 8024FA6C
L_8024FA70:;
  c->r[3]=c->r[1]+0x00000018u; // 8024FA70
  c->r[4]=0u+0x00000000u; // 8024FA74
  c->lr=0x8024FA7Cu; f_80242BE0(c); // 8024FA78
  c->r[20]=c->r[20]+0x00000001u; // 8024FA7C
L_8024FA80:;
  c->r[3]=R32(c->r[23]+0x00000050u); // 8024FA80
  c->r[0]=R32(c->r[23]+0x00000058u); // 8024FA84
  c->r[0]=c->r[0]-c->r[3]; // 8024FA88
  cmpu(c,0,c->r[20],c->r[0]); // 8024FA8C
  if (crb(c,0)) { IRQCHK(c); goto L_8024FA70; } // 8024FA90
  c->r[28]=0u+0x803E0000u; // 8024FA94
  c->r[27]=c->r[21]+0x00000000u; // 8024FA98
  c->r[28]=c->r[28]+0x000051A0u; // 8024FA9C
  c->r[29]=c->r[21]+0x00000010u; // 8024FAA0
  c->r[30]=c->r[21]+0x00000020u; // 8024FAA4
  c->r[31]=c->r[21]+0x00000030u; // 8024FAA8
  c->r[26]=c->r[28]+0x0000003Cu; // 8024FAAC
  c->r[25]=0u+0x00000000u; // 8024FAB0
  c->r[22]=0u+0x00000000u; // 8024FAB4
L_8024FAB8:;
  c->r[3]=c->r[1]+0x00000018u; // 8024FAB8
  c->r[4]=c->r[25]+0x00000004u; // 8024FABC
  c->r[5]=c->r[1]+0x00000008u; // 8024FAC0
  c->r[6]=0u+0x00000000u; // 8024FAC4
  c->lr=0x8024FACCu; f_80242D10(c); // 8024FAC8
  c->r[0]=R8(c->r[1]+0x00000008u); // 8024FACC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8024FAD0
  if (crb(c,2)) { goto L_8024FCC8; } // 8024FAD4
  c->r[24]=0u+0x00000000u; // 8024FAD8
  c->r[21]=0u+0x00000000u; // 8024FADC
  c->r[20]=0u+0x00000000u; // 8024FAE0
L_8024FAE4:;
  c->r[4]=c->r[26]|c->r[26]; // 8024FAE4
  c->r[3]=c->r[1]+0x00000008u; // 8024FAE8
  c->lr=0x8024FAF0u; f_80293E90(c); // 8024FAEC
  cmps(c,0,(int32_t)c->r[3],0); // 8024FAF0
  if (crb(c,2)) { goto L_8024FB28; } // 8024FAF4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8024FAF8
  c->r[4]=c->r[23]+c->r[20]; // 8024FAFC
  c->r[0]=R32(c->r[4]+0x00000040u); // 8024FB00
  c->r[5]=c->r[1]+0x0000006Cu; // 8024FB04
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024FB08
  c->r[5]=c->r[5]+c->r[21]; // 8024FB0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024FB10
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8024FB14
  c->r[4]=R32(c->r[27]+c->r[0]); // 8024FB18
  c->ctr=c->r[12]; // 8024FB1C
  if (true) { c->lr=0x8024FB24u; dispatch(c,c->ctr); } // 8024FB20
  goto L_8024FBF0; // 8024FB24
L_8024FB28:;
  c->r[4]=c->r[28]+0x0000003Fu; // 8024FB28
  c->r[3]=c->r[1]+0x00000008u; // 8024FB2C
  c->lr=0x8024FB34u; f_80293E90(c); // 8024FB30
  cmps(c,0,(int32_t)c->r[3],0); // 8024FB34
  if (crb(c,2)) { goto L_8024FB6C; } // 8024FB38
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8024FB3C
  c->r[4]=c->r[23]+c->r[20]; // 8024FB40
  c->r[0]=R32(c->r[4]+0x00000040u); // 8024FB44
  c->r[5]=c->r[1]+0x0000006Cu; // 8024FB48
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024FB4C
  c->r[5]=c->r[5]+c->r[21]; // 8024FB50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024FB54
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8024FB58
  c->r[4]=R32(c->r[29]+c->r[0]); // 8024FB5C
  c->ctr=c->r[12]; // 8024FB60
  if (true) { c->lr=0x8024FB68u; dispatch(c,c->ctr); } // 8024FB64
  goto L_8024FBF0; // 8024FB68
L_8024FB6C:;
  c->r[4]=c->r[28]+0x00000042u; // 8024FB6C
  c->r[3]=c->r[1]+0x00000008u; // 8024FB70
  c->lr=0x8024FB78u; f_80293E90(c); // 8024FB74
  cmps(c,0,(int32_t)c->r[3],0); // 8024FB78
  if (crb(c,2)) { goto L_8024FBB0; } // 8024FB7C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8024FB80
  c->r[4]=c->r[23]+c->r[20]; // 8024FB84
  c->r[0]=R32(c->r[4]+0x00000040u); // 8024FB88
  c->r[5]=c->r[1]+0x0000006Cu; // 8024FB8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024FB90
  c->r[5]=c->r[5]+c->r[21]; // 8024FB94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024FB98
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8024FB9C
  c->r[4]=R32(c->r[30]+c->r[0]); // 8024FBA0
  c->ctr=c->r[12]; // 8024FBA4
  if (true) { c->lr=0x8024FBACu; dispatch(c,c->ctr); } // 8024FBA8
  goto L_8024FBF0; // 8024FBAC
L_8024FBB0:;
  c->r[4]=c->r[28]+0x00000045u; // 8024FBB0
  c->r[3]=c->r[1]+0x00000008u; // 8024FBB4
  c->lr=0x8024FBBCu; f_80293E90(c); // 8024FBB8
  cmps(c,0,(int32_t)c->r[3],0); // 8024FBBC
  if (crb(c,2)) { goto L_8024FBF0; } // 8024FBC0
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8024FBC4
  c->r[4]=c->r[23]+c->r[20]; // 8024FBC8
  c->r[0]=R32(c->r[4]+0x00000040u); // 8024FBCC
  c->r[5]=c->r[1]+0x0000006Cu; // 8024FBD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8024FBD4
  c->r[5]=c->r[5]+c->r[21]; // 8024FBD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8024FBDC
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8024FBE0
  c->r[4]=R32(c->r[31]+c->r[0]); // 8024FBE4
  c->ctr=c->r[12]; // 8024FBE8
  if (true) { c->lr=0x8024FBF0u; dispatch(c,c->ctr); } // 8024FBEC
L_8024FBF0:;
  c->r[24]=c->r[24]+0x00000001u; // 8024FBF0
  c->r[20]=c->r[20]+0x00000004u; // 8024FBF4
  cmps(c,0,(int32_t)c->r[24],2); // 8024FBF8
  c->r[21]=c->r[21]+0x0000004Cu; // 8024FBFC
  if (crb(c,0)) { IRQCHK(c); goto L_8024FAE4; } // 8024FC00
  c->r[3]=R32(c->r[23]+0x0000000Cu); // 8024FC04
  c->r[4]=R32(c->r[3]+0x00000000u); // 8024FC08
  cmps(c,0,(int32_t)c->r[4],21); // 8024FC0C
  if (crb(c,2)) { goto L_8024FC54; } // 8024FC10
  c->r[0]=R32(c->r[3]+0x00000004u); // 8024FC14
  cmps(c,0,(int32_t)c->r[0],21); // 8024FC18
  if (crb(c,2)) { goto L_8024FC54; } // 8024FC1C
  c->r[3]=c->r[23]+c->r[22]; // 8024FC20
  c->r[5]=R32(c->r[1]+0x00000074u); // 8024FC24
  c->r[3]=c->r[3]+0x000001C8u; // 8024FC28
  c->r[4]=c->r[28]+0x00000049u; // 8024FC2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024FC30
  c->lr=0x8024FC38u; f_80291CC4(c); // 8024FC34
  c->r[3]=c->r[23]+c->r[22]; // 8024FC38
  c->r[4]=R32(c->r[1]+0x00000028u); // 8024FC3C
  c->r[5]=R32(c->r[1]+0x000000C0u); // 8024FC40
  c->r[3]=c->r[3]+0x00000248u; // 8024FC44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024FC48
  c->lr=0x8024FC50u; f_80291CC4(c); // 8024FC4C
  goto L_8024FCB8; // 8024FC50
L_8024FC54:;
  cmps(c,0,(int32_t)c->r[4],21); // 8024FC54
  if (crb(c,2)) { goto L_8024FC8C; } // 8024FC58
  c->r[3]=c->r[23]+c->r[22]; // 8024FC5C
  c->r[5]=R32(c->r[1]+0x00000074u); // 8024FC60
  c->r[3]=c->r[3]+0x000001C8u; // 8024FC64
  c->r[4]=c->r[28]+0x00000049u; // 8024FC68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024FC6C
  c->lr=0x8024FC74u; f_80291CC4(c); // 8024FC70
  c->r[3]=c->r[23]+c->r[22]; // 8024FC74
  c->r[4]=c->r[28]+0x0000004Cu; // 8024FC78
  c->r[3]=c->r[3]+0x00000248u; // 8024FC7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024FC80
  c->lr=0x8024FC88u; f_80291CC4(c); // 8024FC84
  goto L_8024FCB8; // 8024FC88
L_8024FC8C:;
  c->r[3]=c->r[23]+c->r[22]; // 8024FC8C
  c->r[5]=R32(c->r[1]+0x000000C0u); // 8024FC90
  c->r[3]=c->r[3]+0x000001C8u; // 8024FC94
  c->r[4]=c->r[28]+0x00000049u; // 8024FC98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024FC9C
  c->lr=0x8024FCA4u; f_80291CC4(c); // 8024FCA0
  c->r[3]=c->r[23]+c->r[22]; // 8024FCA4
  c->r[4]=c->r[28]+0x0000004Cu; // 8024FCA8
  c->r[3]=c->r[3]+0x00000248u; // 8024FCAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8024FCB0
  c->lr=0x8024FCB8u; f_80291CC4(c); // 8024FCB4
L_8024FCB8:;
  c->r[25]=c->r[25]+0x00000001u; // 8024FCB8
  c->r[22]=c->r[22]+0x00000020u; // 8024FCBC
  cmps(c,0,(int32_t)c->r[25],4); // 8024FCC0
  if (crb(c,0)) { IRQCHK(c); goto L_8024FAB8; } // 8024FCC4
L_8024FCC8:;
  c->r[6]=R32(c->r[23]+0x00000180u); // 8024FCC8
  c->r[3]=c->r[1]+0x00000018u; // 8024FCCC
  c->r[0]=R32(c->r[23]+0x00000068u); // 8024FCD0
  c->r[4]=0u+0xFFFFFFFFu; // 8024FCD4
  c->r[7]=c->r[6]+0xFFFFFFFFu; // 8024FCD8
  c->r[5]=R32(c->r[23]+0x0000006Cu); // 8024FCDC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8024FCE0
  W32(c->r[1]+0x0000010Cu,c->r[7]); // 8024FCE4
  {uint32_t ea=c->r[2]+0xFFFFD8F0u; c->f[1]=RF64(ea);} // 8024FCE8
  c->r[0]=c->r[0]^0x80000000u; // 8024FCEC
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=RF64(ea);} // 8024FCF0
  c->r[5]=c->r[5]^0x80000000u; // 8024FCF4
  W32(c->r[1]+0x00000114u,c->r[6]); // 8024FCF8
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[1]); // 8024FCFC
  {uint32_t ea=c->r[2]+0xFFFFD8D8u; c->f[2]=RF64(ea);} // 8024FD00
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=RF64(ea);} // 8024FD04
  W32(c->r[1]+0x0000010Cu,c->r[5]); // 8024FD08
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 8024FD0C
  {uint32_t ea=c->r[2]+0xFFFFD8F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024FD10
  W32(c->r[1]+0x00000114u,c->r[0]); // 8024FD14
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=RF64(ea);} // 8024FD18
  c->f[5]=c->ps1[5]=S(std::fma(c->f[3],c->f[5],c->f[4])); // 8024FD1C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=RF64(ea);} // 8024FD20
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[2]); // 8024FD24
  {uint32_t ea=c->r[2]+0xFFFFD8FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8024FD28
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8024FD2C
  {uint32_t ea=c->r[23]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8024FD30
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[4],c->f[3],-c->f[2])); // 8024FD34
  {uint32_t ea=c->r[23]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024FD38
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8024FD3C
  {uint32_t ea=c->r[23]+0x0000005Cu; WF32(ea,c->f[2]);} // 8024FD40
  c->f[1]=c->ps1[1]=S(std::fma(c->f[5],c->f[3],-c->f[1])); // 8024FD44
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8024FD48
  {uint32_t ea=c->r[23]+0x00000060u; WF32(ea,c->f[0]);} // 8024FD4C
  c->lr=0x8024FD54u; f_80242AF0(c); // 8024FD50
  c->r[11]=c->r[1]+0x00000150u; // 8024FD54
  c->lr=0x8024FD5Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8024FD58
  c->r[0]=R32(c->r[1]+0x00000154u); // 8024FD5C
  c->lr=c->r[0]; // 8024FD60
  c->r[1]=c->r[1]+0x00000150u; // 8024FD64
  return; // 8024FD68
}

// fn_8024FD6C
void f_8024FD6C(Ctx* __restrict c) {
  trace_call(0x8024FD6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024FD6C
  c->r[0]=c->lr; // 8024FD70
  W32(c->r[1]+0x00000024u,c->r[0]); // 8024FD74
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8024FD78
  c->r[29]=c->r[3]|c->r[3]; // 8024FD7C
  c->r[0]=R8(c->r[3]+0x00000005u); // 8024FD80
  cmps(c,0,(int32_t)c->r[0],0); // 8024FD84
  if (!crb(c,2)) { goto L_8024FE7C; } // 8024FD88
  c->r[30]=0u+0x803E0000u; // 8024FD8C
  c->r[31]=0u+0x80460000u; // 8024FD90
  c->r[30]=c->r[30]+0x000051A0u; // 8024FD94
  c->r[4]=c->r[30]+0x0000004Du; // 8024FD98
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024FD9C
  c->lr=0x8024FDA4u; f_80047CD4(c); // 8024FDA0
  W32(c->r[29]+0x00000020u,c->r[3]); // 8024FDA4
  c->r[5]=c->r[3]|c->r[3]; // 8024FDA8
  c->r[3]=c->r[31]+0xFFFFD468u; // 8024FDAC
  c->r[6]=c->r[30]+0x0000001Cu; // 8024FDB0
  c->r[4]=0u+0x00000000u; // 8024FDB4
  c->lr=0x8024FDBCu; f_8014A80C(c); // 8024FDB8
  c->r[31]=c->r[31]+0xFFFFD468u; // 8024FDBC
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FDC0
  c->r[6]=c->r[30]+0x00000057u; // 8024FDC4
  c->r[5]=c->r[30]+0x0000001Cu; // 8024FDC8
  c->r[3]=c->r[31]+0x00000014u; // 8024FDCC
  c->lr=0x8024FDD4u; f_80048384(c); // 8024FDD0
  W32(c->r[29]+0x00000024u,c->r[3]); // 8024FDD4
  c->r[5]=c->r[3]|c->r[3]; // 8024FDD8
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FDDC
  c->r[3]=c->r[31]|c->r[31]; // 8024FDE0
  c->lr=0x8024FDE8u; f_8014AC10(c); // 8024FDE4
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FDE8
  c->r[3]=c->r[31]|c->r[31]; // 8024FDEC
  c->r[5]=R32(c->r[29]+0x00000024u); // 8024FDF0
  c->r[6]=0u+0x00000000u; // 8024FDF4
  c->lr=0x8024FDFCu; f_8014A860(c); // 8024FDF8
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FDFC
  c->r[6]=c->r[30]+0x00000066u; // 8024FE00
  c->r[5]=c->r[30]+0x00000075u; // 8024FE04
  c->r[3]=c->r[31]+0x00000014u; // 8024FE08
  c->lr=0x8024FE10u; f_80048384(c); // 8024FE0C
  W32(c->r[29]+0x0000002Cu,c->r[3]); // 8024FE10
  c->r[5]=c->r[3]|c->r[3]; // 8024FE14
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FE18
  c->r[3]=c->r[31]|c->r[31]; // 8024FE1C
  c->lr=0x8024FE24u; f_8014AC10(c); // 8024FE20
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FE24
  c->r[3]=c->r[31]|c->r[31]; // 8024FE28
  c->r[5]=R32(c->r[29]+0x0000002Cu); // 8024FE2C
  c->r[6]=0u+0x00000000u; // 8024FE30
  c->lr=0x8024FE38u; f_8014A860(c); // 8024FE34
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FE38
  c->r[6]=c->r[30]+0x0000007Cu; // 8024FE3C
  c->r[5]=c->r[30]+0x0000008Bu; // 8024FE40
  c->r[3]=c->r[31]+0x00000014u; // 8024FE44
  c->lr=0x8024FE4Cu; f_80048384(c); // 8024FE48
  W32(c->r[29]+0x00000034u,c->r[3]); // 8024FE4C
  c->r[5]=c->r[3]|c->r[3]; // 8024FE50
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FE54
  c->r[3]=c->r[31]|c->r[31]; // 8024FE58
  c->lr=0x8024FE60u; f_8014AC10(c); // 8024FE5C
  c->r[4]=R32(c->r[29]+0x00000020u); // 8024FE60
  c->r[3]=c->r[31]|c->r[31]; // 8024FE64
  c->r[5]=R32(c->r[29]+0x00000034u); // 8024FE68
  c->r[6]=0u+0x00000000u; // 8024FE6C
  c->lr=0x8024FE74u; f_8014A860(c); // 8024FE70
  c->r[0]=0u+0x00000001u; // 8024FE74
  W8(c->r[29]+0x00000005u,c->r[0]); // 8024FE78
L_8024FE7C:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8024FE7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8024FE80
  c->lr=c->r[0]; // 8024FE84
  c->r[1]=c->r[1]+0x00000020u; // 8024FE88
  return; // 8024FE8C
}

// fn_8024FE90
void f_8024FE90(Ctx* __restrict c) {
  trace_call(0x8024FE90u);
  {uint32_t ea=c->r[2]+0xFFFFD8E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024FE90
  c->r[3]=0u+0x805E0000u; // 8024FE94
  {uint32_t ea=c->r[2]+0xFFFFD8D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024FE98
  c->r[3]=c->r[3]+0xFFFFDF88u; // 8024FE9C
  c->f[3]=c->f[1]; // 8024FEA0
  f_8003F588(c); return; // 8024FEA4
}

// fn_8024FEA8
void f_8024FEA8(Ctx* __restrict c) {
  trace_call(0x8024FEA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8024FEA8
  c->r[0]=c->lr; // 8024FEAC
  cmps(c,0,(int32_t)c->r[3],0); // 8024FEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8024FEB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8024FEB8
  c->r[31]=c->r[3]|c->r[3]; // 8024FEBC
  if (crb(c,2)) { goto L_8024FED0; } // 8024FEC0
  cmps(c,0,(int32_t)c->r[4],0); // 8024FEC4
  if (!crb(c,1)) { goto L_8024FED0; } // 8024FEC8
  c->lr=0x8024FED0u; f_802896EC(c); // 8024FECC
L_8024FED0:;
  c->r[3]=c->r[31]|c->r[31]; // 8024FED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8024FED4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8024FED8
  c->lr=c->r[0]; // 8024FEDC
  c->r[1]=c->r[1]+0x00000010u; // 8024FEE0
  return; // 8024FEE4
}

// fn_8024FEE8
void f_8024FEE8(Ctx* __restrict c) {
  trace_call(0x8024FEE8u);
  c->r[5]=0u+0x80440000u; // 8024FEE8
  c->r[0]=0u+0x00000002u; // 8024FEEC
  c->r[7]=c->r[3]|c->r[3]; // 8024FEF0
  {uint32_t ea=c->r[2]+0xFFFFD908u; c->f[6]=c->ps1[6]=RF32(ea);} // 8024FEF4
  c->r[5]=c->r[5]+0xFFFFA818u; // 8024FEF8
  {uint32_t ea=c->r[2]+0xFFFFD90Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 8024FEFC
  c->r[8]=0u+0x00000000u; // 8024FF00
  {uint32_t ea=c->r[2]+0xFFFFD910u; c->f[4]=c->ps1[4]=RF32(ea);} // 8024FF04
  {uint32_t ea=c->r[2]+0xFFFFD914u; c->f[3]=c->ps1[3]=RF32(ea);} // 8024FF08
  {uint32_t ea=c->r[2]+0xFFFFD918u; c->f[2]=c->ps1[2]=RF32(ea);} // 8024FF0C
  c->ctr=c->r[0]; // 8024FF10
L_8024FF14:;
  {uint32_t ea=c->r[7]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024FF14
  cmps(c,0,(int32_t)c->r[8],0); // 8024FF18
  c->r[0]=c->r[8]|c->r[8]; // 8024FF1C
  {uint32_t ea=c->r[7]+0x00000140u; WF32(ea,c->f[0]);} // 8024FF20
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024FF24
  {uint32_t ea=c->r[7]+0x00000144u; WF32(ea,c->f[0]);} // 8024FF28
  if (!crb(c,0)) { goto L_8024FF34; } // 8024FF2C
  c->r[0]=R32(c->r[5]+0x00006878u); // 8024FF30
L_8024FF34:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6628); // 8024FF34
  {uint32_t ea=c->r[3]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024FF38
  cmps(c,0,(int32_t)c->r[8],0); // 8024FF3C
  c->r[6]=c->r[8]|c->r[8]; // 8024FF40
  c->r[4]=c->r[5]+c->r[0]; // 8024FF44
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024FF48
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[6])); // 8024FF4C
  {uint32_t ea=c->r[7]+0x00000128u; WF32(ea,c->f[0]);} // 8024FF50
  if (!crb(c,0)) { goto L_8024FF5C; } // 8024FF54
  c->r[6]=R32(c->r[5]+0x00006878u); // 8024FF58
L_8024FF5C:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)6628); // 8024FF5C
  {uint32_t ea=c->r[3]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024FF60
  c->r[4]=c->r[5]+c->r[0]; // 8024FF64
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8024FF68
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[5])); // 8024FF6C
  {uint32_t ea=c->r[7]+0x0000012Cu; WF32(ea,c->f[0]);} // 8024FF70
  {uint32_t ea=c->r[7]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 8024FF74
  fcmp(c,0,c->f[0],c->f[4]); // 8024FF78
  if (!crb(c,0)) { goto L_8024FF88; } // 8024FF7C
  {uint32_t ea=c->r[7]+0x00000128u; WF32(ea,c->f[4]);} // 8024FF80
  goto L_8024FF94; // 8024FF84
L_8024FF88:;
  fcmp(c,0,c->f[0],c->f[3]); // 8024FF88
  if (!crb(c,1)) { goto L_8024FF94; } // 8024FF8C
  {uint32_t ea=c->r[7]+0x00000128u; WF32(ea,c->f[3]);} // 8024FF90
L_8024FF94:;
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024FF94
  fcmp(c,0,c->f[0],c->f[4]); // 8024FF98
  if (!crb(c,0)) { goto L_8024FFA8; } // 8024FF9C
  {uint32_t ea=c->r[7]+0x0000012Cu; WF32(ea,c->f[4]);} // 8024FFA0
  goto L_8024FFB4; // 8024FFA4
L_8024FFA8:;
  fcmp(c,0,c->f[0],c->f[2]); // 8024FFA8
  if (!crb(c,1)) { goto L_8024FFB4; } // 8024FFAC
  {uint32_t ea=c->r[7]+0x0000012Cu; WF32(ea,c->f[2]);} // 8024FFB0
L_8024FFB4:;
  cmps(c,0,(int32_t)c->r[8],0); // 8024FFB4
  c->r[0]=c->r[8]|c->r[8]; // 8024FFB8
  if (!crb(c,0)) { goto L_8024FFC4; } // 8024FFBC
  c->r[0]=R32(c->r[5]+0x00006878u); // 8024FFC0
L_8024FFC4:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6628); // 8024FFC4
  c->r[4]=c->r[5]+c->r[0]; // 8024FFC8
  c->r[0]=R32(c->r[4]+0x000019A8u); // 8024FFCC
  cmps(c,0,(int32_t)c->r[0],1); // 8024FFD0
  if (!crb(c,1)) { goto L_80250068; } // 8024FFD4
  cmps(c,0,(int32_t)c->r[8],0); // 8024FFD8
  c->r[0]=c->r[8]|c->r[8]; // 8024FFDC
  if (!crb(c,0)) { goto L_8024FFE8; } // 8024FFE0
  c->r[0]=R32(c->r[5]+0x00006878u); // 8024FFE4
L_8024FFE8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6628); // 8024FFE8
  {uint32_t ea=c->r[3]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 8024FFEC
  cmps(c,0,(int32_t)c->r[8],0); // 8024FFF0
  c->r[6]=c->r[8]|c->r[8]; // 8024FFF4
  c->r[4]=c->r[5]+c->r[0]; // 8024FFF8
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8024FFFC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[6])); // 80250000
  {uint32_t ea=c->r[7]+0x00000140u; WF32(ea,c->f[0]);} // 80250004
  if (!crb(c,0)) { goto L_80250010; } // 80250008
  c->r[6]=R32(c->r[5]+0x00006878u); // 8025000C
L_80250010:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)6628); // 80250010
  {uint32_t ea=c->r[3]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250014
  c->r[4]=c->r[5]+c->r[0]; // 80250018
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025001C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[5])); // 80250020
  {uint32_t ea=c->r[7]+0x00000144u; WF32(ea,c->f[0]);} // 80250024
  {uint32_t ea=c->r[7]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250028
  fcmp(c,0,c->f[0],c->f[4]); // 8025002C
  if (!crb(c,0)) { goto L_8025003C; } // 80250030
  {uint32_t ea=c->r[7]+0x00000140u; WF32(ea,c->f[4]);} // 80250034
  goto L_80250048; // 80250038
L_8025003C:;
  fcmp(c,0,c->f[0],c->f[3]); // 8025003C
  if (!crb(c,1)) { goto L_80250048; } // 80250040
  {uint32_t ea=c->r[7]+0x00000140u; WF32(ea,c->f[3]);} // 80250044
L_80250048:;
  {uint32_t ea=c->r[7]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250048
  fcmp(c,0,c->f[0],c->f[4]); // 8025004C
  if (!crb(c,0)) { goto L_8025005C; } // 80250050
  {uint32_t ea=c->r[7]+0x00000144u; WF32(ea,c->f[4]);} // 80250054
  goto L_80250068; // 80250058
L_8025005C:;
  fcmp(c,0,c->f[0],c->f[2]); // 8025005C
  if (!crb(c,1)) { goto L_80250068; } // 80250060
  {uint32_t ea=c->r[7]+0x00000144u; WF32(ea,c->f[2]);} // 80250064
L_80250068:;
  c->r[7]=c->r[7]+0x0000000Cu; // 80250068
  c->r[8]=c->r[8]+0x00000001u; // 8025006C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8024FF14; } // 80250070
  c->r[3]=0u+0x00000001u; // 80250074
  return; // 80250078
}

// fn_8025007C
void f_8025007C(Ctx* __restrict c) {
  trace_call(0x8025007Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 8025007C
  if (crb(c,0)) { goto L_8025008C; } // 80250080
  cmps(c,0,(int32_t)c->r[4],2); // 80250084
  if (crb(c,0)) { goto L_80250090; } // 80250088
L_8025008C:;
  c->r[4]=0u+0x00000000u; // 8025008C
L_80250090:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80250090
  c->r[3]=c->r[3]+c->r[0]; // 80250094
  c->r[3]=c->r[3]+0x00000128u; // 80250098
  return; // 8025009C
}

// fn_802500A0
void f_802500A0(Ctx* __restrict c) {
  trace_call(0x802500A0u);
  cmps(c,0,(int32_t)c->r[4],0); // 802500A0
  if (crb(c,0)) { goto L_802500B0; } // 802500A4
  cmps(c,0,(int32_t)c->r[4],2); // 802500A8
  if (crb(c,0)) { goto L_802500B4; } // 802500AC
L_802500B0:;
  c->r[4]=0u+0x00000000u; // 802500B0
L_802500B4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802500B4
  c->r[3]=c->r[3]+c->r[0]; // 802500B8
  c->r[3]=c->r[3]+0x00000140u; // 802500BC
  return; // 802500C0
}

// fn_802500C4
void f_802500C4(Ctx* __restrict c) {
  trace_call(0x802500C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802500C4
  c->r[0]=c->lr; // 802500C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802500CC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802500D0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802500D4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 802500D8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 802500DC
  c->r[7]=0u+0x803F0000u; // 802500E0
  {uint32_t ea=c->r[2]+0xFFFFD90Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 802500E4
  c->r[3]=0u+0x80410000u; // 802500E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802500EC
  c->r[31]=0u+0x805E0000u; // 802500F0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 802500F4
  {uint32_t ea=c->r[2]+0xFFFFD908u; c->f[31]=c->ps1[31]=RF32(ea);} // 802500F8
  c->r[31]=c->r[31]+0xFFFFDF98u; // 802500FC
  {uint32_t ea=c->r[2]+0xFFFFD900u; c->f[3]=c->ps1[3]=RF32(ea);} // 80250100
  c->r[6]=c->r[31]+0x00000018u; // 80250104
  c->r[5]=0u+0x00000000u; // 80250108
  c->f[0]=c->ps1[0]=S(std::fma(c->f[31],c->f[31],c->f[0])); // 8025010C
  c->r[7]=c->r[7]+0x0000233Cu; // 80250110
  {uint32_t ea=c->r[2]+0xFFFFD904u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250114
  c->r[8]=c->r[31]+0x00000000u; // 80250118
  {uint32_t ea=c->r[2]+0xFFFFD910u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025011C
  c->r[4]=0u+0x00000002u; // 80250120
  c->r[0]=0u+0xFFFFFFFFu; // 80250124
  W32(c->r[6]+0x00000124u,c->r[7]); // 80250128
  c->r[3]=c->r[3]+0x000013E8u; // 8025012C
  fcmp(c,0,c->f[0],c->f[3]); // 80250130
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[3]);} // 80250134
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[2]);} // 80250138
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[3]);} // 8025013C
  W32(c->r[31]+0x00000018u,c->r[5]); // 80250140
  W32(c->r[6]+0x00000004u,c->r[4]); // 80250144
  W32(c->r[6]+0x00000010u,c->r[0]); // 80250148
  W32(c->r[6]+0x00000014u,c->r[5]); // 8025014C
  W32(c->r[6]+0x00000018u,c->r[5]); // 80250150
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 80250154
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 80250158
  W32(c->r[6]+0x00000020u,c->r[5]); // 8025015C
  W32(c->r[6]+0x00000008u,c->r[5]); // 80250160
  W32(c->r[6]+0x00000124u,c->r[3]); // 80250164
  {uint32_t ea=c->r[6]+0x00000128u; WF32(ea,c->f[3]);} // 80250168
  {uint32_t ea=c->r[6]+0x0000012Cu; WF32(ea,c->f[3]);} // 8025016C
  {uint32_t ea=c->r[6]+0x00000130u; WF32(ea,c->f[1]);} // 80250170
  {uint32_t ea=c->r[6]+0x00000140u; WF32(ea,c->f[3]);} // 80250174
  {uint32_t ea=c->r[6]+0x00000144u; WF32(ea,c->f[3]);} // 80250178
  {uint32_t ea=c->r[6]+0x00000148u; WF32(ea,c->f[3]);} // 8025017C
  {uint32_t ea=c->r[6]+0x00000134u; WF32(ea,c->f[3]);} // 80250180
  {uint32_t ea=c->r[6]+0x00000138u; WF32(ea,c->f[3]);} // 80250184
  {uint32_t ea=c->r[6]+0x0000013Cu; WF32(ea,c->f[1]);} // 80250188
  {uint32_t ea=c->r[6]+0x0000014Cu; WF32(ea,c->f[3]);} // 8025018C
  {uint32_t ea=c->r[6]+0x00000150u; WF32(ea,c->f[3]);} // 80250190
  {uint32_t ea=c->r[6]+0x00000154u; WF32(ea,c->f[3]);} // 80250194
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80250198
  if (crb(c,2)) { goto L_802501BC; } // 8025019C
  c->r[3]=0u+0x803F0000u; // 802501A0
  c->r[5]=0u+0x803F0000u; // 802501A4
  c->r[3]=c->r[3]+0x00001C38u; // 802501A8
  c->r[4]=0u+0x00000273u; // 802501AC
  c->r[5]=c->r[5]+0x00001C14u; // 802501B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802501B4
  c->lr=0x802501BCu; f_80344550(c); // 802501B8
L_802501BC:;
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[30]); // 802501BC
  {uint32_t ea=c->r[2]+0xFFFFD900u; c->f[0]=c->ps1[0]=RF32(ea);} // 802501C0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[31],c->f[31],c->f[1])); // 802501C4
  fcmp(c,0,c->f[1],c->f[0]); // 802501C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802501CC
  if (!crb(c,2)) { goto L_802501D8; } // 802501D0
  goto L_802501E8; // 802501D4
L_802501D8:;
  c->lr=0x802501DCu; f_80394248(c); // 802501D8
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 802501DC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[31],c->f[31],c->f[0])); // 802501E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802501E4
L_802501E8:;
  c->r[4]=c->r[31]+0x00000018u; // 802501E8
  c->r[3]=0u+0x80440000u; // 802501EC
  {uint32_t ea=c->r[4]+0x00000158u; WF32(ea,c->f[0]);} // 802501F0
  c->r[3]=c->r[3]+0x000010F8u; // 802501F4
  c->r[5]=0u+0x00000001u; // 802501F8
  c->r[6]=0u+0x00000000u; // 802501FC
  c->r[7]=0u+0x00000003u; // 80250200
  c->r[8]=0u+0x00000000u; // 80250204
  c->r[9]=0u+0x00000000u; // 80250208
  c->lr=0x80250210u; f_8003D4DC(c); // 8025020C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80250210
  cmps(c,0,(int32_t)c->r[0],-1); // 80250214
  if (crb(c,2)) { goto L_80250224; } // 80250218
  c->r[0]=0u+0xFFFFFFFFu; // 8025021C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80250220
L_80250224:;
  c->r[4]=0u+0x80250000u; // 80250224
  c->r[3]=c->r[31]+0x00000018u; // 80250228
  c->r[4]=c->r[4]+0xFFFFFEA8u; // 8025022C
  c->r[5]=c->r[31]+0x0000000Cu; // 80250230
  c->lr=0x80250238u; f_802895A4(c); // 80250234
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80250238
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8025023C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80250240
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80250244
  c->r[0]=R32(c->r[1]+0x00000034u); // 80250248
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025024C
  c->lr=c->r[0]; // 80250250
  c->r[1]=c->r[1]+0x00000030u; // 80250254
  return; // 80250258
}

// fn_8025025C
void f_8025025C(Ctx* __restrict c) {
  trace_call(0x8025025Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025025C
  c->r[0]=c->lr; // 80250260
  W32(c->r[1]+0x00000074u,c->r[0]); // 80250264
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80250268
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8025026C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 80250270
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 80250274
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80250278
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 8025027C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 80250280
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 80250284
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80250288
  W32(c->r[1]+0x00000028u,c->r[30]); // 8025028C
  c->r[30]=c->r[5]|c->r[5]; // 80250290
  W32(c->r[1]+0x00000024u,c->r[29]); // 80250294
  c->r[29]=c->r[4]|c->r[4]; // 80250298
  W32(c->r[1]+0x00000020u,c->r[28]); // 8025029C
  c->r[28]=c->r[3]|c->r[3]; // 802502A0
  c->r[31]=R32(c->r[3]+0x00001418u); // 802502A4
  goto L_80250418; // 802502A8
L_802502AC:;
  c->r[5]=R32(c->r[31]+0x00000004u); // 802502AC
  c->r[3]=c->r[1]+0x00000008u; // 802502B0
  c->r[4]=c->r[28]+0x00000008u; // 802502B4
  c->lr=0x802502BCu; f_80173034(c); // 802502B8
  c->r[3]=c->r[1]+0x00000008u; // 802502BC
  c->r[4]=0u+0x00000002u; // 802502C0
  c->lr=0x802502C8u; f_801733E8(c); // 802502C4
  cmps(c,0,(int32_t)c->r[3],2); // 802502C8
  if (!crb(c,2)) { goto L_80250414; } // 802502CC
  c->r[3]=c->r[1]+0x00000008u; // 802502D0
  c->r[4]=0u+0x00000005u; // 802502D4
  c->lr=0x802502DCu; f_801733E8(c); // 802502D8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 802502DC
  if (!crb(c,2)) { goto L_80250414; } // 802502E0
  cmps(c,0,(int32_t)c->r[30],0); // 802502E4
  if (!crb(c,2)) { goto L_80250300; } // 802502E8
  c->r[3]=c->r[1]+0x00000008u; // 802502EC
  c->r[4]=0u+0x00000003u; // 802502F0
  c->lr=0x802502F8u; f_801733E8(c); // 802502F4
  cmps(c,0,(int32_t)c->r[3],0); // 802502F8
  if (crb(c,2)) { goto L_8025031C; } // 802502FC
L_80250300:;
  cmps(c,0,(int32_t)c->r[30],0); // 80250300
  if (crb(c,2)) { goto L_80250414; } // 80250304
  c->r[3]=c->r[1]+0x00000008u; // 80250308
  c->r[4]=0u+0x00000003u; // 8025030C
  c->lr=0x80250314u; f_801733E8(c); // 80250310
  cmps(c,0,(int32_t)c->r[3],1); // 80250314
  if (!crb(c,2)) { goto L_80250414; } // 80250318
L_8025031C:;
  c->lr=0x80250320u; f_80061A4C(c); // 8025031C
  cmps(c,0,(int32_t)c->r[30],0); // 80250320
  c->r[31]=c->r[3]+0x00000720u; // 80250324
  if (!crb(c,2)) { goto L_8025034C; } // 80250328
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025032C
  {uint32_t ea=c->r[28]+0x00001438u; WF32(ea,c->f[0]);} // 80250330
  {uint32_t ea=c->r[31]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250334
  {uint32_t ea=c->r[28]+0x0000143Cu; WF32(ea,c->f[0]);} // 80250338
  {uint32_t ea=c->r[31]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025033C
  {uint32_t ea=c->r[28]+0x00001440u; WF32(ea,c->f[0]);} // 80250340
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80250344
  {uint32_t ea=c->r[28]+0x00001444u; WF32(ea,c->f[0]);} // 80250348
L_8025034C:;
  c->r[3]=c->r[1]+0x00000008u; // 8025034C
  c->r[4]=0u+0x00000006u; // 80250350
  c->lr=0x80250358u; f_80173484(c); // 80250354
  c->f[31]=c->f[1]; // 80250358
  c->r[3]=c->r[1]+0x00000008u; // 8025035C
  c->r[4]=0u+0x00000007u; // 80250360
  c->lr=0x80250368u; f_80173484(c); // 80250364
  c->f[30]=c->f[1]; // 80250368
  c->r[3]=c->r[1]+0x00000008u; // 8025036C
  c->r[4]=0u+0x00000008u; // 80250370
  c->lr=0x80250378u; f_80173484(c); // 80250374
  c->f[29]=c->f[1]; // 80250378
  c->r[3]=c->r[1]+0x00000008u; // 8025037C
  c->r[4]=0u+0x00000009u; // 80250380
  c->lr=0x80250388u; f_80173484(c); // 80250384
  cmps(c,0,(int32_t)c->r[30],0); // 80250388
  c->f[28]=c->f[1]; // 8025038C
  if (crb(c,2)) { goto L_802503D8; } // 80250390
  {uint32_t ea=c->r[2]+0xFFFFD920u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250394
  fcmp(c,0,c->f[31],c->f[0]); // 80250398
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8025039C
  if (!crb(c,2)) { goto L_802503D8; } // 802503A0
  fcmp(c,0,c->f[30],c->f[0]); // 802503A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802503A8
  if (!crb(c,2)) { goto L_802503D8; } // 802503AC
  fcmp(c,0,c->f[29],c->f[0]); // 802503B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802503B4
  if (!crb(c,2)) { goto L_802503D8; } // 802503B8
  fcmp(c,0,c->f[1],c->f[0]); // 802503BC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802503C0
  if (!crb(c,2)) { goto L_802503D8; } // 802503C4
  {uint32_t ea=c->r[28]+0x00001438u; c->f[31]=c->ps1[31]=RF32(ea);} // 802503C8
  {uint32_t ea=c->r[28]+0x0000143Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 802503CC
  {uint32_t ea=c->r[28]+0x00001440u; c->f[29]=c->ps1[29]=RF32(ea);} // 802503D0
  {uint32_t ea=c->r[28]+0x00001444u; c->f[28]=c->ps1[28]=RF32(ea);} // 802503D4
L_802503D8:;
  c->f[1]=c->f[31]; // 802503D8
  c->r[3]=c->r[31]|c->r[31]; // 802503DC
  c->lr=0x802503E4u; f_80171784(c); // 802503E0
  c->f[1]=c->f[30]; // 802503E4
  c->r[3]=c->r[31]|c->r[31]; // 802503E8
  c->lr=0x802503F0u; f_8017178C(c); // 802503EC
  c->f[1]=c->f[29]; // 802503F0
  c->r[3]=c->r[31]|c->r[31]; // 802503F4
  c->lr=0x802503FCu; f_80171794(c); // 802503F8
  c->f[1]=c->f[28]; // 802503FC
  c->r[3]=c->r[31]|c->r[31]; // 80250400
  c->lr=0x80250408u; f_8017179C(c); // 80250404
  c->r[0]=0u+0x00000000u; // 80250408
  W8(c->r[28]+0x00001424u,c->r[0]); // 8025040C
  goto L_80250420; // 80250410
L_80250414:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 80250414
L_80250418:;
  cmps(c,0,(int32_t)c->r[31],0); // 80250418
  if (!crb(c,2)) { IRQCHK(c); goto L_802502AC; } // 8025041C
L_80250420:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80250420
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80250424
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 80250428
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8025042C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80250430
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 80250434
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 80250438
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 8025043C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80250440
  c->r[30]=R32(c->r[1]+0x00000028u); // 80250444
  c->r[29]=R32(c->r[1]+0x00000024u); // 80250448
  c->r[0]=R32(c->r[1]+0x00000074u); // 8025044C
  c->r[28]=R32(c->r[1]+0x00000020u); // 80250450
  c->lr=c->r[0]; // 80250454
  c->r[1]=c->r[1]+0x00000070u; // 80250458
  return; // 8025045C
}

// fn_80250460
void f_80250460(Ctx* __restrict c) {
  trace_call(0x80250460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250460
  c->r[0]=c->lr; // 80250464
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025046C
  c->lr=0x80250474u; f_80061A4C(c); // 80250470
  c->r[31]=c->r[3]+0x00000720u; // 80250474
  c->r[3]=R32(c->r[13]+0xFFFF96C8u); // 80250478
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025047C
  c->r[12]=R32(c->r[12]+0x00000048u); // 80250480
  c->ctr=c->r[12]; // 80250484
  if (true) { c->lr=0x8025048Cu; dispatch(c,c->ctr); } // 80250488
  cmps(c,0,(int32_t)c->r[3],0); // 8025048C
  if (!crb(c,2)) { goto L_802504B0; } // 80250490
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80250494
  c->r[12]=R32(c->r[3]+0x00000000u); // 80250498
  c->r[12]=R32(c->r[12]+0x000000CCu); // 8025049C
  c->ctr=c->r[12]; // 802504A0
  if (true) { c->lr=0x802504A8u; dispatch(c,c->ctr); } // 802504A4
  cmps(c,0,(int32_t)c->r[3],0); // 802504A8
  if (crb(c,2)) { goto L_802504F8; } // 802504AC
L_802504B0:;
  c->r[3]=c->r[31]|c->r[31]; // 802504B0
  c->lr=0x802504B8u; f_80171688(c); // 802504B4
  {uint32_t ea=c->r[2]+0xFFFFD920u; c->f[1]=c->ps1[1]=RF32(ea);} // 802504B8
  c->r[3]=c->r[31]|c->r[31]; // 802504BC
  c->lr=0x802504C4u; f_801717A4(c); // 802504C0
  {uint32_t ea=c->r[2]+0xFFFFD920u; c->f[1]=c->ps1[1]=RF32(ea);} // 802504C4
  c->r[3]=c->r[31]|c->r[31]; // 802504C8
  c->lr=0x802504D0u; f_801717AC(c); // 802504CC
  {uint32_t ea=c->r[2]+0xFFFFD920u; c->f[1]=c->ps1[1]=RF32(ea);} // 802504D0
  c->r[3]=c->r[31]|c->r[31]; // 802504D4
  c->lr=0x802504DCu; f_801717B4(c); // 802504D8
  {uint32_t ea=c->r[2]+0xFFFFD920u; c->f[1]=c->ps1[1]=RF32(ea);} // 802504DC
  c->r[3]=c->r[31]|c->r[31]; // 802504E0
  c->lr=0x802504E8u; f_801717BC(c); // 802504E4
  c->r[3]=c->r[31]|c->r[31]; // 802504E8
  c->r[4]=c->r[31]+0x000000A0u; // 802504EC
  c->lr=0x802504F4u; f_80171760(c); // 802504F0
  goto L_80250534; // 802504F4
L_802504F8:;
  {uint32_t ea=c->r[2]+0xFFFFD924u; c->f[1]=c->ps1[1]=RF32(ea);} // 802504F8
  c->r[3]=c->r[31]|c->r[31]; // 802504FC
  c->lr=0x80250504u; f_801717A4(c); // 80250500
  {uint32_t ea=c->r[2]+0xFFFFD924u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250504
  c->r[3]=c->r[31]|c->r[31]; // 80250508
  c->lr=0x80250510u; f_801717AC(c); // 8025050C
  {uint32_t ea=c->r[2]+0xFFFFD924u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250510
  c->r[3]=c->r[31]|c->r[31]; // 80250514
  c->lr=0x8025051Cu; f_801717B4(c); // 80250518
  {uint32_t ea=c->r[2]+0xFFFFD924u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025051C
  c->r[3]=c->r[31]|c->r[31]; // 80250520
  c->lr=0x80250528u; f_801717BC(c); // 80250524
  c->r[3]=c->r[31]|c->r[31]; // 80250528
  c->r[4]=c->r[31]+0x000000A0u; // 8025052C
  c->lr=0x80250534u; f_80171760(c); // 80250530
L_80250534:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250534
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80250538
  c->lr=c->r[0]; // 8025053C
  c->r[1]=c->r[1]+0x00000010u; // 80250540
  return; // 80250544
}

// fn_80250548
void f_80250548(Ctx* __restrict c) {
  trace_call(0x80250548u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250548
  c->r[0]=c->lr; // 8025054C
  W32(c->r[1]+0x00000074u,c->r[0]); // 80250550
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80250554
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80250558
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8025055C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 80250560
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 80250564
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 80250568
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 8025056C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 80250570
  c->r[11]=c->r[1]+0x00000030u; // 80250574
  c->lr=0x8025057Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80250578
  c->r[0]=R32(c->r[3]+0x00000004u); // 8025057C
  c->r[27]=c->r[3]|c->r[3]; // 80250580
  c->r[28]=c->r[4]|c->r[4]; // 80250584
  cmps(c,0,(int32_t)c->r[0],0); // 80250588
  if (crb(c,2)) { goto L_80250714; } // 8025058C
  {uint32_t ea=c->r[2]+0xFFFFD920u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250590
  c->r[0]=0u+0x00000000u; // 80250594
  W32(c->r[3]+0x00001418u,c->r[0]); // 80250598
  c->r[31]=c->r[27]|c->r[27]; // 8025059C
  c->r[30]=R32(c->r[3]+0x00000010u); // 802505A0
  c->r[29]=0u+0x00000000u; // 802505A4
  {uint32_t ea=c->r[3]+0x0000141Cu; WF32(ea,c->f[0]);} // 802505A8
  {uint32_t ea=c->r[3]+0x00001420u; WF32(ea,c->f[1]);} // 802505AC
  goto L_8025070C; // 802505B0
L_802505B4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802505B4
  c->r[4]=c->r[28]|c->r[28]; // 802505B8
  c->lr=0x802505C0u; f_80293554(c); // 802505BC
  cmps(c,0,(int32_t)c->r[3],0); // 802505C0
  if (!crb(c,2)) { goto L_80250704; } // 802505C4
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 802505C8
  {uint32_t ea=c->r[27]+0x00001420u; c->f[30]=c->ps1[30]=RF32(ea);} // 802505CC
  c->r[3]=c->r[27]+c->r[0]; // 802505D0
  {uint32_t ea=c->r[2]+0xFFFFD928u; c->f[0]=c->ps1[0]=RF32(ea);} // 802505D4
  c->r[31]=R32(c->r[3]+0x00000018u); // 802505D8
  c->f[31]=c->ps1[31]=S(c->f[30]-c->f[0]); // 802505DC
  W32(c->r[27]+0x00001418u,c->r[31]); // 802505E0
  goto L_802506F8; // 802505E4
L_802505E8:;
  c->r[5]=R32(c->r[31]+0x00000004u); // 802505E8
  c->r[3]=c->r[1]+0x00000008u; // 802505EC
  c->r[4]=c->r[27]+0x00000008u; // 802505F0
  c->lr=0x802505F8u; f_80173034(c); // 802505F4
  c->r[3]=c->r[1]+0x00000008u; // 802505F8
  c->r[4]=0u+0x00000002u; // 802505FC
  c->lr=0x80250604u; f_801733E8(c); // 80250600
  cmps(c,0,(int32_t)c->r[3],1); // 80250604
  if (!crb(c,2)) { goto L_802506F4; } // 80250608
  c->r[3]=c->r[1]+0x00000008u; // 8025060C
  c->r[4]=0u+0x00000004u; // 80250610
  c->lr=0x80250618u; f_80173484(c); // 80250614
  fcmp(c,0,c->f[31],c->f[1]); // 80250618
  if (!crb(c,0)) { goto L_802506F4; } // 8025061C
  fcmp(c,0,c->f[1],c->f[30]); // 80250620
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80250624
  if (!crb(c,2)) { goto L_802506F4; } // 80250628
  c->lr=0x80250630u; f_80061A4C(c); // 8025062C
  c->r[31]=c->r[3]+0x00000720u; // 80250630
  c->r[3]=c->r[1]+0x00000008u; // 80250634
  c->r[4]=0u+0x00000006u; // 80250638
  c->lr=0x80250640u; f_80173484(c); // 8025063C
  c->f[28]=c->f[1]; // 80250640
  c->r[3]=c->r[1]+0x00000008u; // 80250644
  c->r[4]=0u+0x00000007u; // 80250648
  c->lr=0x80250650u; f_80173484(c); // 8025064C
  c->f[29]=c->f[1]; // 80250650
  c->r[3]=c->r[1]+0x00000008u; // 80250654
  c->r[4]=0u+0x00000008u; // 80250658
  c->lr=0x80250660u; f_80173484(c); // 8025065C
  c->f[31]=c->f[1]; // 80250660
  c->r[3]=c->r[1]+0x00000008u; // 80250664
  c->r[4]=0u+0x00000009u; // 80250668
  c->lr=0x80250670u; f_80173484(c); // 8025066C
  {uint32_t ea=c->r[2]+0xFFFFD920u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250670
  c->f[30]=c->f[1]; // 80250674
  fcmp(c,0,c->f[28],c->f[0]); // 80250678
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8025067C
  if (!crb(c,2)) { goto L_802506B8; } // 80250680
  fcmp(c,0,c->f[29],c->f[0]); // 80250684
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80250688
  if (!crb(c,2)) { goto L_802506B8; } // 8025068C
  fcmp(c,0,c->f[31],c->f[0]); // 80250690
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80250694
  if (!crb(c,2)) { goto L_802506B8; } // 80250698
  fcmp(c,0,c->f[1],c->f[0]); // 8025069C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802506A0
  if (!crb(c,2)) { goto L_802506B8; } // 802506A4
  {uint32_t ea=c->r[27]+0x00001428u; c->f[28]=c->ps1[28]=RF32(ea);} // 802506A8
  {uint32_t ea=c->r[27]+0x0000142Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 802506AC
  {uint32_t ea=c->r[27]+0x00001430u; c->f[31]=c->ps1[31]=RF32(ea);} // 802506B0
  {uint32_t ea=c->r[27]+0x00001434u; c->f[30]=c->ps1[30]=RF32(ea);} // 802506B4
L_802506B8:;
  c->f[1]=c->f[28]; // 802506B8
  c->r[3]=c->r[31]|c->r[31]; // 802506BC
  c->lr=0x802506C4u; f_80171784(c); // 802506C0
  c->f[1]=c->f[29]; // 802506C4
  c->r[3]=c->r[31]|c->r[31]; // 802506C8
  c->lr=0x802506D0u; f_8017178C(c); // 802506CC
  c->f[1]=c->f[31]; // 802506D0
  c->r[3]=c->r[31]|c->r[31]; // 802506D4
  c->lr=0x802506DCu; f_80171794(c); // 802506D8
  c->f[1]=c->f[30]; // 802506DC
  c->r[3]=c->r[31]|c->r[31]; // 802506E0
  c->lr=0x802506E8u; f_8017179C(c); // 802506E4
  c->r[0]=0u+0x00000000u; // 802506E8
  W8(c->r[27]+0x00001424u,c->r[0]); // 802506EC
  goto L_80250714; // 802506F0
L_802506F4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802506F4
L_802506F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 802506F8
  if (!crb(c,2)) { IRQCHK(c); goto L_802505E8; } // 802506FC
  goto L_80250714; // 80250700
L_80250704:;
  c->r[31]=c->r[31]+0x00000008u; // 80250704
  c->r[29]=c->r[29]+0x00000001u; // 80250708
L_8025070C:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 8025070C
  if (crb(c,0)) { IRQCHK(c); goto L_802505B4; } // 80250710
L_80250714:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80250714
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80250718
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8025071C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80250720
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80250724
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 80250728
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 8025072C
  c->r[11]=c->r[1]+0x00000030u; // 80250730
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 80250734
  c->lr=0x8025073Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80250738
  c->r[0]=R32(c->r[1]+0x00000074u); // 8025073C
  c->lr=c->r[0]; // 80250740
  c->r[1]=c->r[1]+0x00000070u; // 80250744
  return; // 80250748
}

// fn_8025074C
void f_8025074C(Ctx* __restrict c) {
  trace_call(0x8025074Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025074C
  c->r[0]=c->lr; // 80250750
  W32(c->r[1]+0x00000054u,c->r[0]); // 80250754
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80250758
  c->r[31]=c->r[3]|c->r[3]; // 8025075C
  c->r[25]=c->r[4]|c->r[4]; // 80250760
  c->r[12]=R32(c->r[3]+0x00000000u); // 80250764
  c->r[12]=R32(c->r[12]+0x00000008u); // 80250768
  c->ctr=c->r[12]; // 8025076C
  if (true) { c->lr=0x80250774u; dispatch(c,c->ctr); } // 80250770
  cmps(c,0,(int32_t)c->r[25],0); // 80250774
  W32(c->r[31]+0x00000004u,c->r[25]); // 80250778
  if (crb(c,2)) { goto L_802508FC; } // 8025077C
  if (crb(c,2)) { goto L_802508FC; } // 80250780
  c->r[4]=c->r[25]|c->r[25]; // 80250784
  c->r[3]=c->r[1]+0x00000010u; // 80250788
  c->lr=0x80250790u; f_80172DDC(c); // 8025078C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80250790
  cmps(c,0,(int32_t)c->r[0],0); // 80250794
  if (crb(c,2)) { goto L_802508FC; } // 80250798
  c->r[3]=c->r[1]+0x00000010u; // 8025079C
  c->r[4]=c->r[13]+0xFFFF8D70u; // 802507A0
  c->lr=0x802507A8u; f_80172EC8(c); // 802507A4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802507A8
  c->r[4]=c->r[1]+0x00000008u; // 802507AC
  W32(c->r[1]+0x00000008u,c->r[3]); // 802507B0
  c->r[3]=c->r[31]+0x00000008u; // 802507B4
  c->lr=0x802507BCu; f_80172FE0(c); // 802507B8
  c->r[3]=c->r[31]+0x00000008u; // 802507BC
  c->lr=0x802507C4u; f_80173004(c); // 802507C0
  cmps(c,0,(int32_t)c->r[3],0); // 802507C4
  if (crb(c,2)) { goto L_802508FC; } // 802507C8
  c->r[26]=0u+0x00000000u; // 802507CC
  c->r[30]=0u+0x00000000u; // 802507D0
  goto L_802508EC; // 802507D4
L_802507D8:;
  c->r[5]=c->r[26]|c->r[26]; // 802507D8
  c->r[3]=c->r[1]+0x0000001Cu; // 802507DC
  c->r[4]=c->r[31]+0x00000008u; // 802507E0
  c->lr=0x802507E8u; f_80173034(c); // 802507E4
  c->r[3]=c->r[1]+0x0000001Cu; // 802507E8
  c->r[4]=0u+0x00000002u; // 802507EC
  c->lr=0x802507F4u; f_801733E8(c); // 802507F0
  cmps(c,0,(int32_t)c->r[3],0); // 802507F4
  if (!crb(c,2)) { goto L_80250850; } // 802507F8
  c->r[3]=c->r[1]+0x0000001Cu; // 802507FC
  c->r[4]=0u+0x00000006u; // 80250800
  c->lr=0x80250808u; f_80173484(c); // 80250804
  {uint32_t ea=c->r[31]+0x00001438u; WF32(ea,c->f[1]);} // 80250808
  c->r[3]=c->r[1]+0x0000001Cu; // 8025080C
  c->r[4]=0u+0x00000007u; // 80250810
  {uint32_t ea=c->r[31]+0x00001428u; WF32(ea,c->f[1]);} // 80250814
  c->lr=0x8025081Cu; f_80173484(c); // 80250818
  {uint32_t ea=c->r[31]+0x0000143Cu; WF32(ea,c->f[1]);} // 8025081C
  c->r[3]=c->r[1]+0x0000001Cu; // 80250820
  c->r[4]=0u+0x00000008u; // 80250824
  {uint32_t ea=c->r[31]+0x0000142Cu; WF32(ea,c->f[1]);} // 80250828
  c->lr=0x80250830u; f_80173484(c); // 8025082C
  {uint32_t ea=c->r[31]+0x00001440u; WF32(ea,c->f[1]);} // 80250830
  c->r[3]=c->r[1]+0x0000001Cu; // 80250834
  c->r[4]=0u+0x00000009u; // 80250838
  {uint32_t ea=c->r[31]+0x00001430u; WF32(ea,c->f[1]);} // 8025083C
  c->lr=0x80250844u; f_80173484(c); // 80250840
  {uint32_t ea=c->r[31]+0x00001444u; WF32(ea,c->f[1]);} // 80250844
  {uint32_t ea=c->r[31]+0x00001434u; WF32(ea,c->f[1]);} // 80250848
  goto L_802508E8; // 8025084C
L_80250850:;
  c->r[3]=c->r[1]+0x0000001Cu; // 80250850
  c->r[4]=0u+0x00000001u; // 80250854
  c->lr=0x8025085Cu; f_80173520(c); // 80250858
  cmps(c,0,(int32_t)c->r[3],0); // 8025085C
  c->r[27]=c->r[3]|c->r[3]; // 80250860
  if (crb(c,2)) { goto L_802508E8; } // 80250864
  c->r[3]=R32(c->r[31]+0x00000414u); // 80250868
  c->r[25]=c->r[31]+0x00000014u; // 8025086C
  c->r[29]=0u+0x00000000u; // 80250870
  c->r[4]=c->r[3]+0x00000001u; // 80250874
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80250878
  W32(c->r[31]+0x00000414u,c->r[4]); // 8025087C
  c->r[3]=c->r[31]+c->r[0]; // 80250880
  c->r[28]=c->r[3]+0x00000418u; // 80250884
  W32(c->r[3]+0x00000418u,c->r[30]); // 80250888
  W32(c->r[3]+0x0000041Cu,c->r[26]); // 8025088C
  goto L_802508C4; // 80250890
L_80250894:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 80250894
  c->r[4]=c->r[27]|c->r[27]; // 80250898
  c->lr=0x802508A0u; f_80293554(c); // 8025089C
  cmps(c,0,(int32_t)c->r[3],0); // 802508A0
  if (!crb(c,2)) { goto L_802508BC; } // 802508A4
  c->r[0]=R32(c->r[25]+0x00000004u); // 802508A8
  cmps(c,0,(int32_t)c->r[0],0); // 802508AC
  W32(c->r[25]+0x00000004u,c->r[28]); // 802508B0
  if (crb(c,2)) { goto L_802508BC; } // 802508B4
  W32(c->r[28]+0x00000000u,c->r[0]); // 802508B8
L_802508BC:;
  c->r[25]=c->r[25]+0x00000008u; // 802508BC
  c->r[29]=c->r[29]+0x00000001u; // 802508C0
L_802508C4:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 802508C4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 802508C8
  if (crb(c,0)) { IRQCHK(c); goto L_80250894; } // 802508CC
  c->r[3]=c->r[4]+0x00000001u; // 802508D0
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 802508D4
  W32(c->r[31]+0x00000010u,c->r[3]); // 802508D8
  c->r[3]=c->r[31]+c->r[0]; // 802508DC
  W32(c->r[3]+0x00000014u,c->r[27]); // 802508E0
  W32(c->r[3]+0x00000018u,c->r[28]); // 802508E4
L_802508E8:;
  c->r[26]=c->r[26]+0x00000001u; // 802508E8
L_802508EC:;
  c->r[3]=c->r[31]+0x00000008u; // 802508EC
  c->lr=0x802508F4u; f_80173018(c); // 802508F0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 802508F4
  if (crb(c,0)) { IRQCHK(c); goto L_802507D8; } // 802508F8
L_802508FC:;
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802508FC
  c->r[0]=R32(c->r[1]+0x00000054u); // 80250900
  c->lr=c->r[0]; // 80250904
  c->r[1]=c->r[1]+0x00000050u; // 80250908
  return; // 8025090C
}

// fn_80250910
void f_80250910(Ctx* __restrict c) {
  trace_call(0x80250910u);
  {uint32_t ea=c->r[2]+0xFFFFD92Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80250910
  c->r[4]=0u+0x00000000u; // 80250914
  {uint32_t ea=c->r[2]+0xFFFFD920u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250918
  c->r[0]=0u+0x00000001u; // 8025091C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80250920
  W32(c->r[3]+0x00000010u,c->r[4]); // 80250924
  W32(c->r[3]+0x00000414u,c->r[4]); // 80250928
  W32(c->r[3]+0x00001418u,c->r[4]); // 8025092C
  {uint32_t ea=c->r[3]+0x00001420u; WF32(ea,c->f[1]);} // 80250930
  {uint32_t ea=c->r[3]+0x0000141Cu; WF32(ea,c->f[1]);} // 80250934
  W8(c->r[3]+0x00001424u,c->r[0]); // 80250938
  {uint32_t ea=c->r[3]+0x00001434u; WF32(ea,c->f[0]);} // 8025093C
  {uint32_t ea=c->r[3]+0x00001430u; WF32(ea,c->f[0]);} // 80250940
  {uint32_t ea=c->r[3]+0x0000142Cu; WF32(ea,c->f[0]);} // 80250944
  {uint32_t ea=c->r[3]+0x00001428u; WF32(ea,c->f[0]);} // 80250948
  {uint32_t ea=c->r[3]+0x00001444u; WF32(ea,c->f[0]);} // 8025094C
  {uint32_t ea=c->r[3]+0x00001440u; WF32(ea,c->f[0]);} // 80250950
  {uint32_t ea=c->r[3]+0x0000143Cu; WF32(ea,c->f[0]);} // 80250954
  {uint32_t ea=c->r[3]+0x00001438u; WF32(ea,c->f[0]);} // 80250958
  return; // 8025095C
}

// fn_80250960
void f_80250960(Ctx* __restrict c) {
  trace_call(0x80250960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250960
  c->r[0]=c->lr; // 80250964
  c->r[3]=0u+0x80410000u; // 80250968
  c->r[4]=0u+0x805E0000u; // 8025096C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250970
  c->r[3]=c->r[3]+0x00001418u; // 80250974
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80250978
  c->r[31]=c->r[4]+0xFFFFE120u; // 8025097C
  W32(c->r[4]+0xFFFFE120u,c->r[3]); // 80250980
  c->r[3]=c->r[31]+0x00000008u; // 80250984
  c->lr=0x8025098Cu; f_80172FD0(c); // 80250988
  c->r[4]=0u+0x80250000u; // 8025098C
  c->r[5]=0u+0x805E0000u; // 80250990
  W32(c->r[13]+0xFFFF97C8u,c->r[31]); // 80250994
  c->r[3]=c->r[31]|c->r[31]; // 80250998
  c->r[4]=c->r[4]+0x000009BCu; // 8025099C
  c->r[5]=c->r[5]+0xFFFFE110u; // 802509A0
  c->lr=0x802509A8u; f_802895A4(c); // 802509A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802509A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802509AC
  c->lr=c->r[0]; // 802509B0
  c->r[1]=c->r[1]+0x00000010u; // 802509B4
  return; // 802509B8
}

// fn_802509BC
void f_802509BC(Ctx* __restrict c) {
  trace_call(0x802509BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802509BC
  c->r[0]=c->lr; // 802509C0
  cmps(c,0,(int32_t)c->r[3],0); // 802509C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802509C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802509CC
  c->r[31]=c->r[3]|c->r[3]; // 802509D0
  if (crb(c,2)) { goto L_802509EC; } // 802509D4
  c->r[0]=0u+0x00000000u; // 802509D8
  cmps(c,0,(int32_t)c->r[4],0); // 802509DC
  W32(c->r[13]+0xFFFF97C8u,c->r[0]); // 802509E0
  if (!crb(c,1)) { goto L_802509EC; } // 802509E4
  c->lr=0x802509ECu; f_802896EC(c); // 802509E8
L_802509EC:;
  c->r[3]=c->r[31]|c->r[31]; // 802509EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802509F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802509F4
  c->lr=c->r[0]; // 802509F8
  c->r[1]=c->r[1]+0x00000010u; // 802509FC
  return; // 80250A00
}

// fn_80250A04
void f_80250A04(Ctx* __restrict c) {
  trace_call(0x80250A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250A04
  c->r[0]=c->lr; // 80250A08
  cmps(c,0,(int32_t)c->r[3],0); // 80250A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250A10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80250A14
  c->r[31]=c->r[3]|c->r[3]; // 80250A18
  if (crb(c,2)) { goto L_80250A2C; } // 80250A1C
  cmps(c,0,(int32_t)c->r[4],0); // 80250A20
  if (!crb(c,1)) { goto L_80250A2C; } // 80250A24
  c->lr=0x80250A2Cu; f_802896EC(c); // 80250A28
L_80250A2C:;
  c->r[3]=c->r[31]|c->r[31]; // 80250A2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80250A30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250A34
  c->lr=c->r[0]; // 80250A38
  c->r[1]=c->r[1]+0x00000010u; // 80250A3C
  return; // 80250A40
}

// fn_80250A44
void f_80250A44(Ctx* __restrict c) {
  trace_call(0x80250A44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250A44
  c->r[0]=c->lr; // 80250A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250A4C
  c->r[0]=R32(c->r[3]+0x00000128u); // 80250A50
  cmps(c,0,(int32_t)c->r[0],0); // 80250A54
  if (crb(c,2)) { goto L_80250A68; } // 80250A58
  c->r[3]=0u+0x804B0000u; // 80250A5C
  c->r[3]=c->r[3]+0x00003648u; // 80250A60
  c->lr=0x80250A68u; f_80136EEC(c); // 80250A64
L_80250A68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250A68
  c->r[3]=0u+0x00000001u; // 80250A6C
  c->lr=c->r[0]; // 80250A70
  c->r[1]=c->r[1]+0x00000010u; // 80250A74
  return; // 80250A78
}

// fn_80250A7C
void f_80250A7C(Ctx* __restrict c) {
  trace_call(0x80250A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250A7C
  c->r[0]=c->lr; // 80250A80
  cmps(c,0,(int32_t)c->r[4],0); // 80250A84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80250A88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80250A8C
  c->r[31]=c->r[5]|c->r[5]; // 80250A90
  W32(c->r[1]+0x00000018u,c->r[30]); // 80250A94
  c->r[30]=c->r[4]|c->r[4]; // 80250A98
  W32(c->r[1]+0x00000014u,c->r[29]); // 80250A9C
  c->r[29]=c->r[3]|c->r[3]; // 80250AA0
  if (crb(c,0)) { goto L_80250B30; } // 80250AA4
  cmps(c,0,(int32_t)c->r[4],9); // 80250AA8
  if (crb(c,0)) { goto L_80250AB4; } // 80250AAC
  c->r[30]=0u+0x00000000u; // 80250AB0
L_80250AB4:;
  cmps(c,0,(int32_t)c->r[5],0); // 80250AB4
  if (crb(c,0)) { goto L_80250AC4; } // 80250AB8
  cmps(c,0,(int32_t)c->r[5],4); // 80250ABC
  if (crb(c,0)) { goto L_80250AC8; } // 80250AC0
L_80250AC4:;
  c->r[31]=0u+0x00000000u; // 80250AC4
L_80250AC8:;
  c->r[0]=R32(c->r[3]+0x00000128u); // 80250AC8
  cmps(c,0,(int32_t)c->r[0],0); // 80250ACC
  if (!crb(c,2)) { goto L_80250B10; } // 80250AD0
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80250AD4
  c->r[4]=0u+0x803E0000u; // 80250AD8
  c->r[4]=c->r[4]+0x00005238u; // 80250ADC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80250AE0
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80250AE4
  c->ctr=c->r[12]; // 80250AE8
  if (true) { c->lr=0x80250AF0u; dispatch(c,c->ctr); } // 80250AEC
  cmps(c,0,(int32_t)c->r[3],0); // 80250AF0
  c->r[4]=c->r[3]|c->r[3]; // 80250AF4
  if (crb(c,2)) { goto L_80250B10; } // 80250AF8
  c->r[3]=0u+0x804B0000u; // 80250AFC
  c->r[3]=c->r[3]+0x00003648u; // 80250B00
  c->lr=0x80250B08u; f_80136B84(c); // 80250B04
  c->r[0]=0u+0x00000001u; // 80250B08
  W32(c->r[29]+0x00000128u,c->r[0]); // 80250B0C
L_80250B10:;
  c->r[0]=R32(c->r[29]+0x00000128u); // 80250B10
  cmps(c,0,(int32_t)c->r[0],1); // 80250B14
  if (!crb(c,2)) { goto L_80250B30; } // 80250B18
  c->r[3]=0u+0x804B0000u; // 80250B1C
  c->r[4]=c->r[30]|c->r[30]; // 80250B20
  c->r[5]=c->r[31]|c->r[31]; // 80250B24
  c->r[3]=c->r[3]+0x00003648u; // 80250B28
  c->lr=0x80250B30u; f_80137098(c); // 80250B2C
L_80250B30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80250B30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80250B34
  c->r[30]=R32(c->r[1]+0x00000018u); // 80250B38
  c->r[29]=R32(c->r[1]+0x00000014u); // 80250B3C
  c->lr=c->r[0]; // 80250B40
  c->r[1]=c->r[1]+0x00000020u; // 80250B44
  return; // 80250B48
}

// fn_80250B4C
void f_80250B4C(Ctx* __restrict c) {
  trace_call(0x80250B4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250B4C
  c->r[0]=c->lr; // 80250B50
  c->r[3]=0u+0x803F0000u; // 80250B54
  c->r[10]=0u+0x80410000u; // 80250B58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250B5C
  c->r[3]=c->r[3]+0x0000233Cu; // 80250B60
  {uint32_t ea=c->r[2]+0xFFFFD930u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250B64
  c->r[11]=0u+0x00000000u; // 80250B68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80250B6C
  c->r[10]=c->r[10]+0x00001438u; // 80250B70
  {uint32_t ea=c->r[2]+0xFFFFD934u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250B74
  c->r[0]=0u+0x00000002u; // 80250B78
  W32(c->r[1]+0x00000008u,c->r[30]); // 80250B7C
  c->r[30]=0u+0x805E0000u; // 80250B80
  c->r[30]=c->r[30]+0xFFFFF568u; // 80250B84
  c->r[31]=0u+0xFFFFFFFFu; // 80250B88
  c->r[4]=c->r[30]+0x00000018u; // 80250B8C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 80250B90
  c->r[8]=c->r[30]+0x00000000u; // 80250B94
  c->r[5]=0u+0x00000001u; // 80250B98
  W32(c->r[4]+0x00000124u,c->r[3]); // 80250B9C
  c->r[3]=0u+0x80440000u; // 80250BA0
  c->r[3]=c->r[3]+0x000010F8u; // 80250BA4
  c->r[6]=0u+0x00000006u; // 80250BA8
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[0]);} // 80250BAC
  c->r[7]=0u+0x00000018u; // 80250BB0
  c->r[9]=0u+0x00000000u; // 80250BB4
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[1]);} // 80250BB8
  c->r[8]=0u+0x00000000u; // 80250BBC
  W32(c->r[30]+0x00000018u,c->r[11]); // 80250BC0
  W32(c->r[4]+0x00000004u,c->r[0]); // 80250BC4
  W32(c->r[4]+0x00000010u,c->r[31]); // 80250BC8
  W32(c->r[4]+0x00000014u,c->r[11]); // 80250BCC
  W32(c->r[4]+0x00000018u,c->r[11]); // 80250BD0
  W32(c->r[4]+0x0000001Cu,c->r[11]); // 80250BD4
  W32(c->r[4]+0x0000000Cu,c->r[11]); // 80250BD8
  W32(c->r[4]+0x00000020u,c->r[11]); // 80250BDC
  W32(c->r[4]+0x00000008u,c->r[11]); // 80250BE0
  W32(c->r[4]+0x00000124u,c->r[10]); // 80250BE4
  W32(c->r[4]+0x00000128u,c->r[11]); // 80250BE8
  c->lr=0x80250BF0u; f_8003D4DC(c); // 80250BEC
  c->r[0]=R32(c->r[30]+0x00000018u); // 80250BF0
  cmps(c,0,(int32_t)c->r[0],-1); // 80250BF4
  if (crb(c,2)) { goto L_80250C00; } // 80250BF8
  W32(c->r[30]+0x00000018u,c->r[31]); // 80250BFC
L_80250C00:;
  c->r[4]=0u+0x80250000u; // 80250C00
  c->r[3]=c->r[30]+0x00000018u; // 80250C04
  c->r[4]=c->r[4]+0x00000A04u; // 80250C08
  c->r[5]=c->r[30]+0x0000000Cu; // 80250C0C
  c->lr=0x80250C14u; f_802895A4(c); // 80250C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250C14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80250C18
  c->r[30]=R32(c->r[1]+0x00000008u); // 80250C1C
  c->lr=c->r[0]; // 80250C20
  c->r[1]=c->r[1]+0x00000010u; // 80250C24
  return; // 80250C28
}

// fn_80250C2C
void f_80250C2C(Ctx* __restrict c) {
  trace_call(0x80250C2Cu);
  c->r[0]=0u+0x00000001u; // 80250C2C
  W8(c->r[3]+0x0000005Cu,c->r[0]); // 80250C30
  W8(c->r[3]+0x00000074u,c->r[0]); // 80250C34
  W8(c->r[3]+0x0000008Cu,c->r[0]); // 80250C38
  W8(c->r[3]+0x000000A4u,c->r[0]); // 80250C3C
  W8(c->r[3]+0x000000BCu,c->r[0]); // 80250C40
  W8(c->r[3]+0x000000D4u,c->r[0]); // 80250C44
  W8(c->r[3]+0x000000ECu,c->r[0]); // 80250C48
  W8(c->r[3]+0x0000010Cu,c->r[0]); // 80250C4C
  return; // 80250C50
}

// fn_80250C54
void f_80250C54(Ctx* __restrict c) {
  trace_call(0x80250C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250C54
  c->r[0]=c->lr; // 80250C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250C5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80250C60
  c->r[31]=c->r[3]|c->r[3]; // 80250C64
  c->lr=0x80250C6Cu; f_801E2A78(c); // 80250C68
  c->r[0]=R32(c->r[31]+0x00002150u); // 80250C6C
  c->r[6]=0u+0x80410000u; // 80250C70
  c->r[6]=c->r[6]+0x00001484u; // 80250C74
  c->r[3]=c->r[31]|c->r[31]; // 80250C78
  c->r[5]=c->r[6]+0x00000040u; // 80250C7C
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 80250C80
  c->r[4]=c->r[6]+0x0000041Cu; // 80250C84
  W32(c->r[31]+0x00000010u,c->r[6]); // 80250C88
  W32(c->r[31]+0x00000048u,c->r[5]); // 80250C8C
  W32(c->r[31]+0x00001F6Cu,c->r[4]); // 80250C90
  W32(c->r[31]+0x00002150u,c->r[0]); // 80250C94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80250C98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250C9C
  c->lr=c->r[0]; // 80250CA0
  c->r[1]=c->r[1]+0x00000010u; // 80250CA4
  return; // 80250CA8
}

// fn_80250CAC
void f_80250CAC(Ctx* __restrict c) {
  trace_call(0x80250CACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250CAC
  c->r[0]=c->lr; // 80250CB0
  cmps(c,0,(int32_t)c->r[3],0); // 80250CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250CB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80250CBC
  c->r[30]=c->r[3]|c->r[3]; // 80250CC0
  c->r[31]=c->r[4]|c->r[4]; // 80250CC4
  if (crb(c,2)) { goto L_80250CE4; } // 80250CC8
  c->r[4]=0u+0x00000000u; // 80250CCC
  c->lr=0x80250CD4u; f_801CCAF8(c); // 80250CD0
  cmps(c,0,(int32_t)c->r[31],0); // 80250CD4
  if (!crb(c,1)) { goto L_80250CE4; } // 80250CD8
  c->r[3]=c->r[30]|c->r[30]; // 80250CDC
  c->lr=0x80250CE4u; f_802896EC(c); // 80250CE0
L_80250CE4:;
  c->r[3]=c->r[30]|c->r[30]; // 80250CE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80250CE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250CEC
  c->lr=c->r[0]; // 80250CF0
  c->r[1]=c->r[1]+0x00000010u; // 80250CF4
  return; // 80250CF8
}

// fn_80250CFC
void f_80250CFC(Ctx* __restrict c) {
  trace_call(0x80250CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250CFC
  c->r[0]=c->lr; // 80250D00
  c->r[4]=c->r[3]+0x00000FF8u; // 80250D04
  c->r[5]=0u+0x00000001u; // 80250D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80250D0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80250D10
  c->r[31]=c->r[3]|c->r[3]; // 80250D14
  c->lr=0x80250D1Cu; f_80076080(c); // 80250D18
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 80250D1C
  c->r[3]=c->r[31]+0x00000FF8u; // 80250D20
  c->r[4]=0u+0x00000000u; // 80250D24
  c->r[12]=R32(c->r[12]+0x00000008u); // 80250D28
  c->ctr=c->r[12]; // 80250D2C
  if (true) { c->lr=0x80250D34u; dispatch(c,c->ctr); } // 80250D30
  c->r[12]=R32(c->r[31]+0x00000010u); // 80250D34
  c->r[3]=c->r[31]|c->r[31]; // 80250D38
  c->r[12]=R32(c->r[12]+0x00000338u); // 80250D3C
  c->ctr=c->r[12]; // 80250D40
  if (true) { c->lr=0x80250D48u; dispatch(c,c->ctr); } // 80250D44
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 80250D48
  c->r[4]=c->r[3]|c->r[3]; // 80250D4C
  c->r[3]=c->r[31]+0x00000FF8u; // 80250D50
  c->r[12]=R32(c->r[12]+0x00000040u); // 80250D54
  c->ctr=c->r[12]; // 80250D58
  if (true) { c->lr=0x80250D60u; dispatch(c,c->ctr); } // 80250D5C
  c->r[3]=c->r[31]+0x00001F18u; // 80250D60
  c->lr=0x80250D68u; f_801E24C0(c); // 80250D64
  c->r[3]=R32(c->r[31]+0x00002150u); // 80250D68
  c->r[0]=R32(c->r[31]+0x00002204u); // 80250D6C
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 80250D70
  c->r[0]=c->r[0]|0x80000000u; // 80250D74
  W32(c->r[31]+0x00002150u,c->r[3]); // 80250D78
  W32(c->r[31]+0x00002204u,c->r[0]); // 80250D7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80250D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 80250D84
  c->lr=c->r[0]; // 80250D88
  c->r[1]=c->r[1]+0x00000010u; // 80250D8C
  return; // 80250D90
}

// fn_80250D94
void f_80250D94(Ctx* __restrict c) {
  trace_call(0x80250D94u);
  f_801E2D68(c); return; // 80250D94
}

// fn_80250D98
void f_80250D98(Ctx* __restrict c) {
  trace_call(0x80250D98u);
  f_800ADCD8(c); return; // 80250D98
}

// fn_80250D9C
void f_80250D9C(Ctx* __restrict c) {
  trace_call(0x80250D9Cu);
  return; // 80250D9C
}

// fn_80250DA0
void f_80250DA0(Ctx* __restrict c) {
  trace_call(0x80250DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250DA0
  c->r[0]=c->lr; // 80250DA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80250DA8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80250DAC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80250DB0
  c->f[31]=c->f[3]; // 80250DB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80250DB8
  c->r[31]=c->r[3]|c->r[3]; // 80250DBC
  {uint32_t ea=c->r[3]+0x00002154u; WF32(ea,c->f[1]);} // 80250DC0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80250DC4
  {uint32_t ea=c->r[3]+0x00002174u; WF32(ea,c->f[2]);} // 80250DC8
  c->r[3]=c->r[1]+0x00000008u; // 80250DCC
  c->f[2]=c->f[1]; // 80250DD0
  c->f[3]=c->f[1]; // 80250DD4
  c->lr=0x80250DDCu; f_800521A0(c); // 80250DD8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80250DDC
  c->r[4]=c->r[3]|c->r[3]; // 80250DE0
  c->r[3]=c->r[31]+0x000008D0u; // 80250DE4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80250DE8
  c->ctr=c->r[12]; // 80250DEC
  if (true) { c->lr=0x80250DF4u; dispatch(c,c->ctr); } // 80250DF0
  {uint32_t ea=c->r[31]+0x000003A4u; WF32(ea,c->f[31]);} // 80250DF4
  {uint32_t ea=c->r[31]+0x000003A8u; WF32(ea,c->f[31]);} // 80250DF8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80250DFC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80250E00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80250E04
  c->r[0]=R32(c->r[1]+0x00000034u); // 80250E08
  c->lr=c->r[0]; // 80250E0C
  c->r[1]=c->r[1]+0x00000030u; // 80250E10
  return; // 80250E14
}

// fn_80250E18
void f_80250E18(Ctx* __restrict c) {
  trace_call(0x80250E18u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80250E18
  c->r[0]=c->lr; // 80250E1C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80250E20
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80250E24
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 80250E28
  c->r[11]=c->r[1]+0x00000090u; // 80250E2C
  c->lr=0x80250E34u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80250E30
  c->r[29]=c->r[3]|c->r[3]; // 80250E34
  c->r[30]=c->r[4]|c->r[4]; // 80250E38
  c->r[31]=c->r[5]|c->r[5]; // 80250E3C
  c->lr=0x80250E44u; f_80061A4C(c); // 80250E40
  c->r[5]=c->r[3]|c->r[3]; // 80250E44
  c->r[3]=c->r[1]+0x00000008u; // 80250E48
  c->r[4]=c->r[5]+0x00000390u; // 80250E4C
  c->r[5]=c->r[5]+0x00000384u; // 80250E50
  c->lr=0x80250E58u; f_8007B8A4(c); // 80250E54
  c->r[3]=c->r[1]+0x00000008u; // 80250E58
  c->r[4]=c->r[1]+0x00000014u; // 80250E5C
  c->lr=0x80250E64u; f_80265750(c); // 80250E60
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250E64
  c->r[3]=c->r[1]+0x00000020u; // 80250E68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80250E6C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80250E70
  c->f[1]=-c->f[1]; // 80250E74
  c->f[2]=-c->f[2]; // 80250E78
  c->f[3]=-c->f[0]; // 80250E7C
  c->lr=0x80250E84u; f_800521A0(c); // 80250E80
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80250E84
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250E88
  c->lr=0x80250E90u; f_80394548(c); // 80250E8C
  {uint32_t ea=c->r[2]+0xFFFFD948u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250E90
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 80250E94
  c->lr=0x80250E9Cu; f_80291D94(c); // 80250E98
  c->r[3]=c->r[3]^0x80000000u; // 80250E9C
  c->r[0]=0u+0x43300000u; // 80250EA0
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 80250EA4
  c->r[4]=c->r[30]|c->r[30]; // 80250EA8
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[1]=RF64(ea);} // 80250EAC
  c->r[3]=c->r[1]+0x0000002Cu; // 80250EB0
  W32(c->r[1]+0x00000078u,c->r[0]); // 80250EB4
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80250EB8
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 80250EBC
  {uint32_t ea=c->r[2]+0xFFFFD954u; c->f[2]=c->ps1[2]=RF32(ea);} // 80250EC0
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 80250EC4
  {uint32_t ea=c->r[2]+0xFFFFD950u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250EC8
  {uint32_t ea=c->r[2]+0xFFFFD958u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250ECC
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 80250ED0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 80250ED4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80250ED8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 80250EDC
  c->lr=0x80250EE4u; f_8003F468(c); // 80250EE0
  c->f[1]=c->f[31]; // 80250EE4
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80250EE8
  c->r[3]=c->r[1]+0x00000038u; // 80250EEC
  c->lr=0x80250EF4u; f_80124134(c); // 80250EF0
  c->r[4]=c->r[31]|c->r[31]; // 80250EF4
  c->r[3]=c->r[1]+0x00000038u; // 80250EF8
  c->lr=0x80250F00u; f_800653BC(c); // 80250EFC
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250F00
  c->f[31]=c->f[1]; // 80250F04
  c->r[0]=0u+0x00000000u; // 80250F08
  fcmp(c,0,c->f[1],c->f[0]); // 80250F0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80250F10
  if (!crb(c,2)) { goto L_80250F2C; } // 80250F14
  {uint32_t ea=c->r[2]+0xFFFFD964u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250F18
  fcmp(c,0,c->f[1],c->f[0]); // 80250F1C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80250F20
  if (!crb(c,2)) { goto L_80250F2C; } // 80250F24
  c->r[0]=0u+0x00000001u; // 80250F28
L_80250F2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80250F2C
  if (!crb(c,2)) { goto L_80250F50; } // 80250F30
  c->r[3]=0u+0x803F0000u; // 80250F34
  c->r[5]=0u+0x803F0000u; // 80250F38
  c->r[3]=c->r[3]+0x00002020u; // 80250F3C
  c->r[4]=0u+0x000000DFu; // 80250F40
  c->r[5]=c->r[5]+0x00001FF8u; // 80250F44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80250F48
  c->lr=0x80250F50u; f_80344550(c); // 80250F4C
L_80250F50:;
  c->f[1]=c->f[31]; // 80250F50
  c->lr=0x80250F58u; f_8029C490(c); // 80250F54
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80250F58
  {uint32_t ea=c->r[2]+0xFFFFD968u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250F5C
  fcmp(c,0,c->f[1],c->f[0]); // 80250F60
  c->r[0]=c->cr; // 80250F64
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 80250F68
  if (!crb(c,2)) { goto L_80250F8C; } // 80250F6C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80250F70
  c->r[3]=c->r[1]+0x00000038u; // 80250F74
  {uint32_t ea=c->r[2]+0xFFFFD96Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80250F78
  c->r[4]=c->r[3]|c->r[3]; // 80250F7C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80250F80
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80250F84
  c->lr=0x80250F8Cu; f_80265750(c); // 80250F88
L_80250F8C:;
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[0]=c->ps1[0]=RF32(ea);} // 80250F8C
  c->r[3]=c->r[29]|c->r[29]; // 80250F90
  c->r[4]=c->r[1]+0x0000002Cu; // 80250F94
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80250F98
  c->r[12]=R32(c->r[29]+0x00000010u); // 80250F9C
  c->r[12]=R32(c->r[12]+0x00000334u); // 80250FA0
  c->ctr=c->r[12]; // 80250FA4
  if (true) { c->lr=0x80250FACu; dispatch(c,c->ctr); } // 80250FA8
  c->r[5]=c->r[31]|c->r[31]; // 80250FAC
  c->r[3]=c->r[1]+0x00000048u; // 80250FB0
  c->r[4]=c->r[1]+0x00000038u; // 80250FB4
  c->lr=0x80250FBCu; f_80074DF8(c); // 80250FB8
  c->r[4]=c->r[30]|c->r[30]; // 80250FBC
  c->r[3]=c->r[1]+0x00000048u; // 80250FC0
  c->lr=0x80250FC8u; f_80032FF4(c); // 80250FC4
  c->r[12]=R32(c->r[29]+0x000008D0u); // 80250FC8
  c->r[3]=c->r[29]+0x000008D0u; // 80250FCC
  c->r[4]=c->r[1]+0x00000048u; // 80250FD0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80250FD4
  c->ctr=c->r[12]; // 80250FD8
  if (true) { c->lr=0x80250FE0u; dispatch(c,c->ctr); } // 80250FDC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80250FE0
  c->r[11]=c->r[1]+0x00000090u; // 80250FE4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80250FE8
  c->lr=0x80250FF0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80250FEC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80250FF0
  c->lr=c->r[0]; // 80250FF4
  c->r[1]=c->r[1]+0x000000A0u; // 80250FF8
  return; // 80250FFC
}

// fn_80251000
void f_80251000(Ctx* __restrict c) {
  trace_call(0x80251000u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80251000
  c->r[0]=c->lr; // 80251004
  W32(c->r[1]+0x00000064u,c->r[0]); // 80251008
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8025100C
  c->r[31]=c->r[3]|c->r[3]; // 80251010
  c->r[0]=R32(c->r[3]+0x000007E4u); // 80251014
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80251018
  if (!crb(c,2)) { goto L_80251040; } // 8025101C
  c->r[12]=R32(c->r[3]+0x00000010u); // 80251020
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251024
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 80251028
  c->ctr=c->r[12]; // 8025102C
  if (true) { c->lr=0x80251034u; dispatch(c,c->ctr); } // 80251030
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251034
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80251038
  {uint32_t ea=c->r[31]+0x000003A4u; WF32(ea,c->f[0]);} // 8025103C
L_80251040:;
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251040
  c->r[4]=0u+0x00000000u; // 80251044
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251048
  c->r[3]=R32(c->r[31]+0x00000874u); // 8025104C
  fcmp(c,0,c->f[0],c->f[1]); // 80251050
  {uint32_t ea=c->r[31]+0x00000870u; WF32(ea,c->f[1]);} // 80251054
  c->r[0]=c->r[3]+0x00000001u; // 80251058
  W32(c->r[31]+0x00000874u,c->r[0]); // 8025105C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80251060
  if (!crb(c,2)) { goto L_8025106C; } // 80251064
  c->r[4]=0u+0x00000001u; // 80251068
L_8025106C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8025106C
  if (crb(c,2)) { goto L_802510FC; } // 80251070
  c->r[0]=R32(c->r[31]+0x00002204u); // 80251074
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80251078
  if (crb(c,2)) { goto L_802510FC; } // 8025107C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80251080
  c->r[4]=c->r[31]+0x000008D0u; // 80251084
  c->r[3]=c->r[1]+0x00000020u; // 80251088
  c->r[12]=R32(c->r[12]+0x00000040u); // 8025108C
  c->ctr=c->r[12]; // 80251090
  if (true) { c->lr=0x80251098u; dispatch(c,c->ctr); } // 80251094
  c->r[3]=c->r[1]+0x00000008u; // 80251098
  c->r[4]=c->r[1]+0x00000020u; // 8025109C
  c->lr=0x802510A4u; f_80032FD8(c); // 802510A0
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[1]=c->ps1[1]=RF32(ea);} // 802510A4
  c->r[4]=0u+0x803E0000u; // 802510A8
  c->r[5]=R32(c->r[1]+0x00000008u); // 802510AC
  c->r[3]=c->r[31]+0x00000800u; // 802510B0
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 802510B4
  c->f[2]=c->f[1]; // 802510B8
  c->r[0]=R32(c->r[1]+0x00000010u); // 802510BC
  c->r[4]=c->r[4]+0x00005240u; // 802510C0
  W32(c->r[1]+0x00000014u,c->r[5]); // 802510C4
  c->r[5]=c->r[1]+0x00000014u; // 802510C8
  c->r[6]=0u+0x00000001u; // 802510CC
  W32(c->r[1]+0x00000018u,c->r[7]); // 802510D0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802510D4
  c->lr=0x802510DCu; f_800C1BA0(c); // 802510D8
  c->r[0]=R32(c->r[31]+0x00002204u); // 802510DC
  c->r[3]=c->r[31]|c->r[31]; // 802510E0
  c->r[4]=0u+0x00000008u; // 802510E4
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 802510E8
  W32(c->r[31]+0x00002204u,c->r[0]); // 802510EC
  c->lr=0x802510F4u; f_801E3330(c); // 802510F0
  c->r[0]=0u+0x00000050u; // 802510F4
  W32(c->r[31]+0x00002158u,c->r[0]); // 802510F8
L_802510FC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 802510FC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80251100
  c->lr=c->r[0]; // 80251104
  c->r[1]=c->r[1]+0x00000060u; // 80251108
  return; // 8025110C
}

// fn_80251110
void f_80251110(Ctx* __restrict c) {
  trace_call(0x80251110u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80251110
  c->r[0]=c->lr; // 80251114
  W32(c->r[1]+0x00000024u,c->r[0]); // 80251118
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8025111C
  c->r[31]=c->r[5]|c->r[5]; // 80251120
  c->r[29]=c->r[3]|c->r[3]; // 80251124
  c->r[30]=c->r[4]|c->r[4]; // 80251128
  c->r[3]=c->r[31]|c->r[31]; // 8025112C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80251130
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80251134
  c->ctr=c->r[12]; // 80251138
  if (true) { c->lr=0x80251140u; dispatch(c,c->ctr); } // 8025113C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80251140
  c->r[3]=c->r[31]|c->r[31]; // 80251144
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80251148
  c->ctr=c->r[12]; // 8025114C
  if (true) { c->lr=0x80251154u; dispatch(c,c->ctr); } // 80251150
  cmps(c,0,(int32_t)c->r[3],22); // 80251154
  if (crb(c,2)) { goto L_802511C8; } // 80251158
  if (!crb(c,0)) { goto L_8025116C; } // 8025115C
  cmps(c,0,(int32_t)c->r[3],3); // 80251160
  if (crb(c,2)) { goto L_80251180; } // 80251164
  goto L_802511B8; // 80251168
L_8025116C:;
  cmps(c,0,(int32_t)c->r[3],1032); // 8025116C
  if (!crb(c,0)) { goto L_802511B8; } // 80251170
  cmps(c,0,(int32_t)c->r[3],1025); // 80251174
  if (!crb(c,0)) { goto L_802511A8; } // 80251178
  goto L_802511B8; // 8025117C
L_80251180:;
  c->r[3]=c->r[29]|c->r[29]; // 80251180
  c->r[4]=0u+0x00000008u; // 80251184
  c->lr=0x8025118Cu; f_801E3330(c); // 80251188
  c->r[0]=0u+0x00000000u; // 8025118C
  c->r[3]=c->r[29]|c->r[29]; // 80251190
  W32(c->r[29]+0x00002158u,c->r[0]); // 80251194
  c->r[4]=c->r[30]|c->r[30]; // 80251198
  c->r[5]=c->r[31]|c->r[31]; // 8025119C
  c->lr=0x802511A4u; f_800B5B1C(c); // 802511A0
  goto L_802511C8; // 802511A4
L_802511A8:;
  c->r[3]=c->r[29]|c->r[29]; // 802511A8
  c->r[4]=c->r[31]|c->r[31]; // 802511AC
  c->lr=0x802511B4u; f_80251000(c); // 802511B0
  goto L_802511C8; // 802511B4
L_802511B8:;
  c->r[3]=c->r[29]|c->r[29]; // 802511B8
  c->r[4]=c->r[30]|c->r[30]; // 802511BC
  c->r[5]=c->r[31]|c->r[31]; // 802511C0
  c->lr=0x802511C8u; f_800B5B1C(c); // 802511C4
L_802511C8:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802511C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802511CC
  c->lr=c->r[0]; // 802511D0
  c->r[1]=c->r[1]+0x00000020u; // 802511D4
  return; // 802511D8
}

// fn_802511DC
void f_802511DC(Ctx* __restrict c) {
  trace_call(0x802511DCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802511DC
  c->r[0]=c->lr; // 802511E0
  W32(c->r[1]+0x00000074u,c->r[0]); // 802511E4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 802511E8
  c->r[31]=c->r[3]|c->r[3]; // 802511EC
  c->lr=0x802511F4u; f_80061A4C(c); // 802511F0
  c->r[5]=c->r[31]|c->r[31]; // 802511F4
  c->r[6]=c->r[1]+0x00000008u; // 802511F8
  c->r[3]=c->r[13]+0xFFFF9380u; // 802511FC
  c->r[4]=0u+0xFFFFFFFFu; // 80251200
  c->lr=0x80251208u; f_80028E1C(c); // 80251204
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251208
  {uint32_t ea=c->r[2]+0xFFFFD978u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025120C
  c->r[0]=R8(c->r[13]+0xFFFF93A0u); // 80251210
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 80251214
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251218
  {uint32_t ea=c->r[2]+0xFFFFD97Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025121C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80251220
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80251224
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80251228
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8025122C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80251230
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80251234
  if (!crb(c,2)) { goto L_80251268; } // 80251238
  c->r[31]=0u+0x80450000u; // 8025123C
  c->r[3]=c->r[31]+0xFFFFA1C0u; // 80251240
  c->lr=0x80251248u; f_8013CA64(c); // 80251244
  c->r[4]=0u+0x80140000u; // 80251248
  c->r[5]=0u+0x805E0000u; // 8025124C
  c->r[3]=c->r[31]+0xFFFFA1C0u; // 80251250
  c->r[4]=c->r[4]+0xFFFFCB04u; // 80251254
  c->r[5]=c->r[5]+0xFFFFF6BCu; // 80251258
  c->lr=0x80251260u; f_802895A4(c); // 8025125C
  c->r[0]=0u+0x00000001u; // 80251260
  W8(c->r[13]+0xFFFF93A0u,c->r[0]); // 80251264
L_80251268:;
  c->r[5]=0u+0x803E0000u; // 80251268
  c->r[4]=0u+0x80450000u; // 8025126C
  c->r[5]=c->r[5]+0x00005240u; // 80251270
  c->r[3]=c->r[1]+0x00000014u; // 80251274
  c->r[4]=c->r[4]+0xFFFFA1C0u; // 80251278
  c->r[6]=0u+0x00000001u; // 8025127C
  c->r[5]=c->r[5]+0x00000007u; // 80251280
  c->lr=0x80251288u; f_8013DB40(c); // 80251284
  c->r[3]=c->r[1]+0x00000014u; // 80251288
  c->lr=0x80251290u; f_80264680(c); // 8025128C
  c->r[3]=c->r[1]+0x00000014u; // 80251290
  c->r[4]=c->r[1]+0x00000008u; // 80251294
  c->lr=0x8025129Cu; f_80032FF4(c); // 80251298
  c->r[3]=c->r[1]+0x00000014u; // 8025129C
  c->lr=0x802512A4u; f_80146A94(c); // 802512A0
  c->r[0]=R32(c->r[1]+0x00000074u); // 802512A4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 802512A8
  c->lr=c->r[0]; // 802512AC
  c->r[1]=c->r[1]+0x00000070u; // 802512B0
  return; // 802512B4
}

// fn_802512B8
void f_802512B8(Ctx* __restrict c) {
  trace_call(0x802512B8u);
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802512B8
  c->r[4]=0u+0x805E0000u; // 802512BC
  c->r[4]=c->r[4]+0xFFFFF6C8u; // 802512C0
  {uint32_t ea=c->r[3]+0x00002170u; WF32(ea,c->f[0]);} // 802512C4
  {uint32_t ea=c->r[3]+0x00002168u; WF32(ea,c->f[0]);} // 802512C8
  c->r[3]=c->r[3]+0x00001F18u; // 802512CC
  f_801E2514(c); return; // 802512D0
}

// fn_802512D4
void f_802512D4(Ctx* __restrict c) {
  trace_call(0x802512D4u);
  {uint32_t ea=c->r[1]+0xFFFFFA50u; W32(ea,c->r[1]); c->r[1]=ea;} // 802512D4
  c->r[0]=c->lr; // 802512D8
  W32(c->r[1]+0x000005B4u,c->r[0]); // 802512DC
  {uint32_t ea=c->r[1]+0x000005A0u; WF64(ea,c->f[31]);} // 802512E0
  {uint32_t ea=c->r[1]+0x000005A8u; psq_store(c,31,ea,0,0);} // 802512E4
  {uint32_t ea=c->r[1]+0x00000590u; WF64(ea,c->f[30]);} // 802512E8
  {uint32_t ea=c->r[1]+0x00000598u; psq_store(c,30,ea,0,0);} // 802512EC
  c->r[11]=c->r[1]+0x00000590u; // 802512F0
  c->lr=0x802512F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802512F4
  c->r[31]=c->r[1]|c->r[1]; // 802512F8
  c->r[0]=R32(c->r[3]+0x00002158u); // 802512FC
  c->r[4]=0u+0x43300000u; // 80251300
  W32(c->r[31]+0x00000560u,c->r[4]); // 80251304
  c->r[28]=c->r[3]|c->r[3]; // 80251308
  cmps(c,0,(int32_t)c->r[0],50); // 8025130C
  W32(c->r[31]+0x00000568u,c->r[4]); // 80251310
  if (crb(c,2)) { goto L_80251CD4; } // 80251314
  if (!crb(c,0)) { goto L_80251358; } // 80251318
  cmps(c,0,(int32_t)c->r[0],10); // 8025131C
  if (crb(c,2)) { goto L_802515F8; } // 80251320
  if (!crb(c,0)) { goto L_8025134C; } // 80251324
  cmps(c,0,(int32_t)c->r[0],1); // 80251328
  if (crb(c,2)) { goto L_8025139C; } // 8025132C
  if (!crb(c,0)) { goto L_80251340; } // 80251330
  cmps(c,0,(int32_t)c->r[0],0); // 80251334
  if (!crb(c,0)) { goto L_8025137C; } // 80251338
  goto L_802520C0; // 8025133C
L_80251340:;
  cmps(c,0,(int32_t)c->r[0],3); // 80251340
  if (!crb(c,0)) { goto L_802520C0; } // 80251344
  goto L_802513B8; // 80251348
L_8025134C:;
  cmps(c,0,(int32_t)c->r[0],20); // 8025134C
  if (crb(c,2)) { goto L_80251AA4; } // 80251350
  goto L_802520C0; // 80251354
L_80251358:;
  cmps(c,0,(int32_t)c->r[0],70); // 80251358
  if (crb(c,2)) { goto L_80251F34; } // 8025135C
  if (!crb(c,0)) { goto L_80251370; } // 80251360
  cmps(c,0,(int32_t)c->r[0],60); // 80251364
  if (crb(c,2)) { goto L_80251CFC; } // 80251368
  goto L_802520C0; // 8025136C
L_80251370:;
  cmps(c,0,(int32_t)c->r[0],80); // 80251370
  if (crb(c,2)) { goto L_80251DF4; } // 80251374
  goto L_802520C0; // 80251378
L_8025137C:;
  c->r[4]=0u+0x805E0000u; // 8025137C
  c->r[3]=c->r[3]+0x00001F18u; // 80251380
  c->r[4]=c->r[4]+0xFFFFF6F0u; // 80251384
  c->lr=0x8025138Cu; f_801E2514(c); // 80251388
  c->r[3]=R32(c->r[28]+0x00002158u); // 8025138C
  c->r[0]=c->r[3]+0x00000001u; // 80251390
  W32(c->r[28]+0x00002158u,c->r[0]); // 80251394
  goto L_802520C0; // 80251398
L_8025139C:;
  c->r[3]=c->r[3]+0x00001F18u; // 8025139C
  c->lr=0x802513A4u; f_801E25C8(c); // 802513A0
  cmps(c,0,(int32_t)c->r[3],0); // 802513A4
  if (crb(c,2)) { goto L_802520C0; } // 802513A8
  c->r[3]=R32(c->r[28]+0x00002158u); // 802513AC
  c->r[0]=c->r[3]+0x00000001u; // 802513B0
  W32(c->r[28]+0x00002158u,c->r[0]); // 802513B4
L_802513B8:;
  c->lr=0x802513BCu; f_80291D94(c); // 802513B8
  c->r[0]=c->r[3]^0x80000000u; // 802513BC
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[3]=RF64(ea);} // 802513C0
  W32(c->r[31]+0x00000564u,c->r[0]); // 802513C4
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802513C8
  {uint32_t ea=c->r[31]+0x00000560u; c->f[0]=RF64(ea);} // 802513CC
  {uint32_t ea=c->r[2]+0xFFFFD984u; c->f[1]=c->ps1[1]=RF32(ea);} // 802513D0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 802513D4
  {uint32_t ea=c->r[2]+0xFFFFD980u; c->f[0]=c->ps1[0]=RF32(ea);} // 802513D8
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 802513DC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802513E0
  {uint32_t ea=c->r[28]+0x0000215Cu; WF32(ea,c->f[0]);} // 802513E4
  c->lr=0x802513ECu; f_80291D94(c); // 802513E8
  c->r[3]=c->r[3]^0x80000000u; // 802513EC
  c->r[0]=0u+0x00000001u; // 802513F0
  W32(c->r[31]+0x0000056Cu,c->r[3]); // 802513F4
  c->r[26]=0u+0x80410000u; // 802513F8
  {uint32_t ea=c->r[2]+0xFFFFD98Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802513FC
  c->r[3]=c->r[31]+0x00000274u; // 80251400
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[3]=RF64(ea);} // 80251404
  c->r[4]=c->r[26]+0xFFFF84BCu; // 80251408
  {uint32_t ea=c->r[31]+0x00000568u; c->f[2]=RF64(ea);} // 8025140C
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251410
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[3]); // 80251414
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251418
  {uint32_t ea=c->r[2]+0xFFFFD988u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025141C
  {uint32_t ea=c->r[28]+0x00002170u; WF32(ea,c->f[0]);} // 80251420
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[1]); // 80251424
  {uint32_t ea=c->r[28]+0x0000215Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251428
  W8(c->r[28]+0x0000216Cu,c->r[0]); // 8025142C
  W8(c->r[28]+0x0000216Du,c->r[0]); // 80251430
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[4],c->f[2])); // 80251434
  c->f[2]=c->ps1[2]=S(c->f[0]); // 80251438
  {uint32_t ea=c->r[28]+0x00002160u; WF32(ea,c->f[0]);} // 8025143C
  c->lr=0x80251444u; f_801F4C48(c); // 80251440
  c->r[12]=R32(c->r[28]+0x000008D0u); // 80251444
  c->r[4]=c->r[28]+0x000008D0u; // 80251448
  c->r[3]=c->r[31]+0x0000037Cu; // 8025144C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80251450
  c->ctr=c->r[12]; // 80251454
  if (true) { c->lr=0x8025145Cu; dispatch(c,c->ctr); } // 80251458
  c->r[3]=c->r[31]+0x00000268u; // 8025145C
  c->r[4]=c->r[31]+0x0000037Cu; // 80251460
  c->lr=0x80251468u; f_80032FD8(c); // 80251464
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251468
  c->r[3]=c->r[28]+0x00002178u; // 8025146C
  c->f[2]=c->f[1]; // 80251470
  c->f[3]=c->f[1]; // 80251474
  c->lr=0x8025147Cu; f_80065358(c); // 80251478
  {uint32_t ea=c->r[31]+0x0000026Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025147C
  {uint32_t ea=c->r[31]+0x00000278u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251480
  {uint32_t ea=c->r[28]+0x00002174u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251484
  c->lr=0x8025148Cu; f_801F0ABC(c); // 80251488
  {uint32_t ea=c->r[28]+0x0000217Cu; WF32(ea,c->f[1]);} // 8025148C
  c->f[3]=c->ps1[3]=S(c->f[1]); // 80251490
  {uint32_t ea=c->r[28]+0x00002174u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251494
  c->r[3]=c->r[31]+0x000001C8u; // 80251498
  {uint32_t ea=c->r[26]+0xFFFF84BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025149C
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[6]=c->ps1[6]=RF32(ea);} // 802514A0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802514A4
  {uint32_t ea=c->r[2]+0xFFFFD990u; c->f[2]=c->ps1[2]=RF32(ea);} // 802514A8
  {uint32_t ea=c->r[28]+0x00002184u; WF32(ea,c->f[0]);} // 802514AC
  c->f[7]=c->ps1[7]=S(c->f[0]); // 802514B0
  {uint32_t ea=c->r[31]+0x00000278u; c->f[0]=c->ps1[0]=RF32(ea);} // 802514B4
  {uint32_t ea=c->r[31]+0x0000026Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802514B8
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[7]); // 802514BC
  {uint32_t ea=c->r[31]+0x0000027Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802514C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 802514C4
  {uint32_t ea=c->r[31]+0x00000270u; c->f[3]=c->ps1[3]=RF32(ea);} // 802514C8
  {uint32_t ea=c->r[31]+0x00000274u; c->f[4]=c->ps1[4]=RF32(ea);} // 802514CC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 802514D0
  {uint32_t ea=c->r[31]+0x00000268u; c->f[8]=c->ps1[8]=RF32(ea);} // 802514D4
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[0]); // 802514D8
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[8]); // 802514DC
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 802514E0
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[7]); // 802514E4
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 802514E8
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[7]); // 802514EC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[7]); // 802514F0
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[5],c->f[2],-c->f[4])); // 802514F4
  c->lr=0x802514FCu; f_800521A0(c); // 802514F8
  c->r[3]=c->r[28]+0x00002188u; // 802514FC
  c->r[4]=c->r[31]+0x000001C8u; // 80251500
  c->lr=0x80251508u; f_8003F468(c); // 80251504
  c->r[12]=R32(c->r[28]+0x000008D0u); // 80251508
  c->r[4]=c->r[28]+0x000008D0u; // 8025150C
  c->r[3]=c->r[31]+0x0000034Cu; // 80251510
  c->r[12]=R32(c->r[12]+0x00000040u); // 80251514
  c->ctr=c->r[12]; // 80251518
  if (true) { c->lr=0x80251520u; dispatch(c,c->ctr); } // 8025151C
  c->r[0]=0u+0x00000006u; // 80251520
  c->r[5]=c->r[28]+0x0000219Cu; // 80251524
  c->r[4]=c->r[31]+0x00000348u; // 80251528
  c->ctr=c->r[0]; // 8025152C
L_80251530:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80251530
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80251534
  W32(c->r[5]+0x00000004u,c->r[3]); // 80251538
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8025153C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80251530; } // 80251540
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251544
  c->r[3]=c->r[31]+0x000001BCu; // 80251548
  c->f[2]=c->f[1]; // 8025154C
  c->f[3]=c->f[1]; // 80251550
  c->lr=0x80251558u; f_800521A0(c); // 80251554
  c->r[4]=c->r[3]|c->r[3]; // 80251558
  c->r[3]=c->r[28]+0x000021A0u; // 8025155C
  c->lr=0x80251564u; f_80032FF4(c); // 80251560
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251564
  {uint32_t ea=c->r[28]+0x00002168u; WF32(ea,c->f[0]);} // 80251568
  c->lr=0x80251570u; f_80291D94(c); // 8025156C
  c->r[0]=c->r[3]^0x80000000u; // 80251570
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251574
  W32(c->r[31]+0x00000564u,c->r[0]); // 80251578
  c->r[4]=0u+0x803E0000u; // 8025157C
  c->r[4]=c->r[4]+0x00005240u; // 80251580
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[3]=RF64(ea);} // 80251584
  {uint32_t ea=c->r[31]+0x00000560u; c->f[0]=RF64(ea);} // 80251588
  c->f[2]=c->f[1]; // 8025158C
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80251590
  c->r[3]=c->r[28]+0x00000800u; // 80251594
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[3]); // 80251598
  {uint32_t ea=c->r[2]+0xFFFFD998u; c->f[4]=c->ps1[4]=RF32(ea);} // 8025159C
  {uint32_t ea=c->r[2]+0xFFFFD994u; c->f[3]=c->ps1[3]=RF32(ea);} // 802515A0
  {uint32_t ea=c->r[2]+0xFFFFD958u; c->f[0]=c->ps1[0]=RF32(ea);} // 802515A4
  c->r[4]=c->r[4]+0x00000014u; // 802515A8
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[5]); // 802515AC
  c->r[5]=c->r[31]+0x000001B0u; // 802515B0
  c->r[6]=0u+0x00000001u; // 802515B4
  c->f[3]=c->ps1[3]=S(std::fma(c->f[4],c->f[5],c->f[3])); // 802515B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 802515BC
  {uint32_t ea=c->r[28]+0x00002164u; WF32(ea,c->f[0]);} // 802515C0
  c->r[8]=R32(c->r[31]+0x00000268u); // 802515C4
  c->r[7]=R32(c->r[31]+0x0000026Cu); // 802515C8
  c->r[0]=R32(c->r[31]+0x00000270u); // 802515CC
  W32(c->r[31]+0x000001B0u,c->r[8]); // 802515D0
  W32(c->r[31]+0x000001B4u,c->r[7]); // 802515D4
  W32(c->r[31]+0x000001B8u,c->r[0]); // 802515D8
  c->lr=0x802515E0u; f_800C1BA0(c); // 802515DC
  c->r[4]=0u+0x805E0000u; // 802515E0
  c->r[3]=c->r[28]+0x00001F18u; // 802515E4
  c->r[4]=c->r[4]+0xFFFFF6C8u; // 802515E8
  c->lr=0x802515F0u; f_801E2514(c); // 802515EC
  c->r[0]=0u+0x0000000Au; // 802515F0
  W32(c->r[28]+0x00002158u,c->r[0]); // 802515F4
L_802515F8:;
  c->r[29]=0u+0x80410000u; // 802515F8
  c->r[29]=c->r[29]+0xFFFF84BCu; // 802515FC
  c->lr=0x80251604u; f_80061A4C(c); // 80251600
  {uint32_t ea=c->r[28]+0x0000215Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251604
  c->r[30]=c->r[3]+0x0000035Cu; // 80251608
  {uint32_t ea=c->r[28]+0x00002160u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025160C
  c->r[4]=c->r[29]|c->r[29]; // 80251610
  c->r[3]=c->r[31]+0x0000025Cu; // 80251614
  c->lr=0x8025161Cu; f_801F4C48(c); // 80251618
  c->r[12]=R32(c->r[28]+0x000008D0u); // 8025161C
  c->r[4]=c->r[28]+0x000008D0u; // 80251620
  c->r[3]=c->r[31]+0x0000052Cu; // 80251624
  c->r[12]=R32(c->r[12]+0x00000040u); // 80251628
  c->ctr=c->r[12]; // 8025162C
  if (true) { c->lr=0x80251634u; dispatch(c,c->ctr); } // 80251630
  {uint32_t ea=c->r[31]+0x00000538u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251634
  c->r[3]=c->r[31]+0x00000250u; // 80251638
  {uint32_t ea=c->r[31]+0x00000548u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025163C
  {uint32_t ea=c->r[31]+0x00000558u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251640
  c->lr=0x80251648u; f_800521A0(c); // 80251644
  c->r[3]=c->r[31]+0x00000244u; // 80251648
  c->r[4]=c->r[31]+0x00000250u; // 8025164C
  c->lr=0x80251654u; f_8003F484(c); // 80251650
  c->r[27]=R32(c->r[13]+0xFFFF8D84u); // 80251654
  c->r[3]=0u+0x804D0000u; // 80251658
  c->r[3]=c->r[3]+0x00003318u; // 8025165C
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[2]=RF64(ea);} // 80251660
  c->r[0]=c->r[27]^0x80000000u; // 80251664
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251668
  W32(c->r[31]+0x0000056Cu,c->r[0]); // 8025166C
  c->r[26]=0u+0x00000000u; // 80251670
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251674
  {uint32_t ea=c->r[31]+0x00000568u; c->f[1]=RF64(ea);} // 80251678
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8025167C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 80251680
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[3]); // 80251684
  goto L_802516F0; // 80251688
L_8025168C:;
  c->f[1]=c->f[31]; // 8025168C
  c->r[3]=c->r[31]+0x000000A8u; // 80251690
  c->r[4]=c->r[28]+0x00002188u; // 80251694
  c->lr=0x8025169Cu; f_80064C58(c); // 80251698
  c->r[3]=c->r[31]+0x00000250u; // 8025169C
  c->r[5]=c->r[31]+0x000000A8u; // 802516A0
  c->r[4]=c->r[3]|c->r[3]; // 802516A4
  c->lr=0x802516ACu; f_80064C34(c); // 802516A8
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802516AC
  c->r[3]=c->r[31]+0x000000CCu; // 802516B0
  c->r[4]=c->r[28]+0x00002188u; // 802516B4
  c->lr=0x802516BCu; f_80064C58(c); // 802516B8
  c->r[3]=c->r[31]+0x000000C0u; // 802516BC
  c->r[4]=c->r[28]+0x00002178u; // 802516C0
  c->r[5]=c->r[31]+0x000000CCu; // 802516C4
  c->lr=0x802516CCu; f_8007B8A4(c); // 802516C8
  c->f[1]=c->f[31]; // 802516CC
  c->r[4]=c->r[31]+0x000000C0u; // 802516D0
  c->r[3]=c->r[31]+0x000000B4u; // 802516D4
  c->lr=0x802516DCu; f_80064C58(c); // 802516D8
  c->r[3]=c->r[28]+0x00002188u; // 802516DC
  c->r[5]=c->r[31]+0x000000B4u; // 802516E0
  c->r[4]=c->r[3]|c->r[3]; // 802516E4
  c->lr=0x802516ECu; f_80064C34(c); // 802516E8
  c->r[26]=c->r[26]+0x00000001u; // 802516EC
L_802516F0:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 802516F0
  if (crb(c,0)) { IRQCHK(c); goto L_8025168C; } // 802516F4
  c->r[3]=c->r[31]+0x0000052Cu; // 802516F8
  c->r[4]=c->r[31]+0x00000250u; // 802516FC
  c->lr=0x80251704u; f_80032FF4(c); // 80251700
  c->r[3]=c->r[30]|c->r[30]; // 80251704
  c->r[4]=c->r[31]+0x000004FCu; // 80251708
  c->lr=0x80251710u; f_800A0778(c); // 8025170C
  {uint32_t ea=c->r[31]+0x00000504u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251710
  c->r[3]=c->r[31]+0x00000238u; // 80251714
  {uint32_t ea=c->r[31]+0x00000514u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251718
  {uint32_t ea=c->r[31]+0x00000524u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025171C
  c->lr=0x80251724u; f_800521A0(c); // 80251720
  {uint32_t ea=c->r[31]+0x00000500u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251724
  c->r[3]=c->r[31]+0x0000022Cu; // 80251728
  {uint32_t ea=c->r[31]+0x00000510u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025172C
  {uint32_t ea=c->r[31]+0x00000520u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251730
  c->lr=0x80251738u; f_800521A0(c); // 80251734
  {uint32_t ea=c->r[28]+0x00002164u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251738
  c->r[3]=c->r[31]+0x000004CCu; // 8025173C
  {uint32_t ea=c->r[2]+0xFFFFD99Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251740
  c->r[4]=c->r[31]+0x00000238u; // 80251744
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80251748
  c->lr=0x80251750u; f_80394980(c); // 8025174C
  c->r[3]=c->r[31]+0x0000022Cu; // 80251750
  c->r[4]=c->r[31]+0x000004CCu; // 80251754
  c->r[5]=c->r[3]|c->r[3]; // 80251758
  c->lr=0x80251760u; f_80394B04(c); // 8025175C
  c->r[3]=c->r[31]+0x000004FCu; // 80251760
  c->r[4]=c->r[31]+0x0000022Cu; // 80251764
  c->r[5]=c->r[31]+0x00000238u; // 80251768
  c->lr=0x80251770u; f_80074DF8(c); // 8025176C
  c->r[3]=c->r[31]+0x000004FCu; // 80251770
  c->r[4]=c->r[31]+0x00000250u; // 80251774
  c->lr=0x8025177Cu; f_80032FF4(c); // 80251778
  {uint32_t ea=c->r[28]+0x00002168u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025177C
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251780
  {uint32_t ea=c->r[28]+0x00002184u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251784
  fcmp(c,0,c->f[2],c->f[0]); // 80251788
  if (!crb(c,0)) { goto L_80251798; } // 8025178C
  c->f[2]=c->f[0]; // 80251790
  goto L_802517A4; // 80251794
L_80251798:;
  fcmp(c,0,c->f[2],c->f[3]); // 80251798
  if (!crb(c,1)) { goto L_802517A4; } // 8025179C
  c->f[2]=c->f[3]; // 802517A0
L_802517A4:;
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802517A4
  c->r[0]=0u+0x00000006u; // 802517A8
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[0]=c->ps1[0]=RF32(ea);} // 802517AC
  c->r[5]=c->r[31]+0x00000528u; // 802517B0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 802517B4
  c->r[4]=c->r[28]+0x0000219Cu; // 802517B8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802517BC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 802517C0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 802517C4
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[1]); // 802517C8
  c->ctr=c->r[0]; // 802517CC
L_802517D0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 802517D0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 802517D4
  W32(c->r[5]+0x00000004u,c->r[3]); // 802517D8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 802517DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802517D0; } // 802517E0
  c->r[3]=c->r[31]+0x0000052Cu; // 802517E4
  c->r[4]=c->r[31]+0x00000250u; // 802517E8
  c->lr=0x802517F0u; f_80032FF4(c); // 802517EC
  c->r[3]=c->r[31]+0x00000070u; // 802517F0
  c->r[4]=c->r[31]+0x0000052Cu; // 802517F4
  c->lr=0x802517FCu; f_80265A3C(c); // 802517F8
  c->r[3]=c->r[31]+0x00000080u; // 802517FC
  c->r[4]=c->r[31]+0x000004FCu; // 80251800
  c->lr=0x80251808u; f_80265A3C(c); // 80251804
  c->f[1]=c->f[30]; // 80251808
  c->r[3]=c->r[31]+0x00000070u; // 8025180C
  c->r[5]=c->r[3]|c->r[3]; // 80251810
  c->r[4]=c->r[31]+0x00000080u; // 80251814
  c->lr=0x8025181Cu; f_80265C6C(c); // 80251818
  {uint32_t ea=c->r[31]+0x00000538u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025181C
  c->r[3]=c->r[31]+0x00000090u; // 80251820
  {uint32_t ea=c->r[31]+0x00000548u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251824
  {uint32_t ea=c->r[31]+0x00000558u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251828
  c->lr=0x80251830u; f_800521A0(c); // 8025182C
  {uint32_t ea=c->r[31]+0x00000508u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251830
  c->r[3]=c->r[31]+0x0000009Cu; // 80251834
  {uint32_t ea=c->r[31]+0x00000518u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251838
  {uint32_t ea=c->r[31]+0x00000528u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025183C
  c->lr=0x80251844u; f_800521A0(c); // 80251840
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251844
  c->r[3]=c->r[31]+0x00000090u; // 80251848
  c->r[4]=c->r[3]|c->r[3]; // 8025184C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 80251850
  c->lr=0x80251858u; f_80064C58(c); // 80251854
  c->f[1]=c->f[30]; // 80251858
  c->r[3]=c->r[31]+0x0000009Cu; // 8025185C
  c->r[4]=c->r[3]|c->r[3]; // 80251860
  c->lr=0x80251868u; f_80064C58(c); // 80251864
  c->r[3]=c->r[31]+0x00000090u; // 80251868
  c->r[5]=c->r[31]+0x0000009Cu; // 8025186C
  c->r[4]=c->r[3]|c->r[3]; // 80251870
  c->lr=0x80251878u; f_80064C34(c); // 80251874
  c->r[3]=c->r[31]+0x000002C8u; // 80251878
  c->r[4]=c->r[31]+0x00000070u; // 8025187C
  c->lr=0x80251884u; f_80264EAC(c); // 80251880
  c->r[0]=0u+0x00000006u; // 80251884
  c->r[5]=c->r[31]+0x00000528u; // 80251888
  c->r[4]=c->r[31]+0x000002C4u; // 8025188C
  c->ctr=c->r[0]; // 80251890
L_80251894:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80251894
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80251898
  W32(c->r[5]+0x00000004u,c->r[3]); // 8025189C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 802518A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80251894; } // 802518A4
  c->r[3]=c->r[31]+0x0000052Cu; // 802518A8
  c->r[4]=c->r[31]+0x00000090u; // 802518AC
  c->lr=0x802518B4u; f_80032FF4(c); // 802518B0
  c->r[26]=R32(c->r[31]+0x00000244u); // 802518B4
  c->r[3]=c->r[31]+0x000002B0u; // 802518B8
  c->r[27]=R32(c->r[31]+0x00000248u); // 802518BC
  c->r[4]=c->r[31]+0x0000021Cu; // 802518C0
  c->r[12]=R32(c->r[31]+0x0000024Cu); // 802518C4
  c->r[5]=c->r[31]+0x00000008u; // 802518C8
  c->r[11]=R32(c->r[31]+0x00000250u); // 802518CC
  c->r[6]=0u+0x00000000u; // 802518D0
  c->r[10]=R32(c->r[31]+0x00000254u); // 802518D4
  c->r[9]=R32(c->r[31]+0x00000258u); // 802518D8
  c->r[8]=R32(c->r[31]+0x0000025Cu); // 802518DC
  c->r[7]=R32(c->r[31]+0x00000260u); // 802518E0
  c->r[0]=R32(c->r[31]+0x00000264u); // 802518E4
  {uint32_t ea=c->r[2]+0xFFFFD9A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802518E8
  W32(c->r[31]+0x000002B0u,c->r[26]); // 802518EC
  W32(c->r[31]+0x000002B4u,c->r[27]); // 802518F0
  W32(c->r[31]+0x000002B8u,c->r[12]); // 802518F4
  W32(c->r[31]+0x000002BCu,c->r[11]); // 802518F8
  W32(c->r[31]+0x000002C0u,c->r[10]); // 802518FC
  W32(c->r[31]+0x000002C4u,c->r[9]); // 80251900
  W32(c->r[31]+0x0000021Cu,c->r[8]); // 80251904
  W32(c->r[31]+0x00000220u,c->r[7]); // 80251908
  W32(c->r[31]+0x00000224u,c->r[0]); // 8025190C
  {uint32_t ea=c->r[31]+0x00000228u; WF32(ea,c->f[0]);} // 80251910
  c->lr=0x80251918u; f_80396188(c); // 80251914
  cmps(c,0,(int32_t)c->r[3],0); // 80251918
  if (crb(c,2)) { goto L_80251A44; } // 8025191C
  c->r[3]=c->r[31]+0x00000210u; // 80251920
  c->r[4]=c->r[31]+0x00000250u; // 80251924
  c->r[5]=c->r[31]+0x00000244u; // 80251928
  c->lr=0x80251930u; f_8007B8A4(c); // 8025192C
  c->r[3]=c->r[31]+0x00000210u; // 80251930
  c->lr=0x80251938u; f_801CF0FC(c); // 80251934
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251938
  fcmp(c,0,c->f[1],c->f[0]); // 8025193C
  if (!crb(c,1)) { goto L_80251950; } // 80251940
  c->r[3]=c->r[31]+0x00000210u; // 80251944
  c->r[4]=c->r[31]+0x000001A4u; // 80251948
  c->lr=0x80251950u; f_80265750(c); // 8025194C
L_80251950:;
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251950
  c->r[3]=c->r[31]+0x0000018Cu; // 80251954
  c->r[4]=c->r[31]+0x00000210u; // 80251958
  c->lr=0x80251960u; f_80064C58(c); // 8025195C
  c->r[3]=c->r[31]+0x00000198u; // 80251960
  c->r[4]=c->r[31]+0x00000244u; // 80251964
  c->r[5]=c->r[31]+0x0000018Cu; // 80251968
  c->lr=0x80251970u; f_80064C34(c); // 8025196C
  c->r[3]=c->r[31]+0x0000052Cu; // 80251970
  c->r[4]=c->r[31]+0x00000198u; // 80251974
  c->lr=0x8025197Cu; f_80032FF4(c); // 80251978
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025197C
  c->r[3]=c->r[30]|c->r[30]; // 80251980
  c->r[4]=c->r[31]+0x0000049Cu; // 80251984
  {uint32_t ea=c->r[28]+0x00002200u; WF32(ea,c->f[0]);} // 80251988
  c->lr=0x80251990u; f_800A0778(c); // 8025198C
  c->r[3]=c->r[31]+0x0000049Cu; // 80251990
  c->r[4]=c->r[3]|c->r[3]; // 80251994
  c->lr=0x8025199Cu; f_80264994(c); // 80251998
  c->r[3]=c->r[31]+0x0000049Cu; // 8025199C
  c->r[4]=c->r[31]+0x0000052Cu; // 802519A0
  c->r[5]=c->r[31]+0x0000031Cu; // 802519A4
  c->lr=0x802519ACu; f_802646E0(c); // 802519A8
  c->r[0]=0u+0x00000006u; // 802519AC
  c->r[5]=c->r[28]+0x000021CCu; // 802519B0
  c->r[4]=c->r[31]+0x00000318u; // 802519B4
  c->ctr=c->r[0]; // 802519B8
L_802519BC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 802519BC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 802519C0
  W32(c->r[5]+0x00000004u,c->r[3]); // 802519C4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 802519C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802519BC; } // 802519CC
  c->r[0]=0u+0x00000014u; // 802519D0
  c->r[3]=c->r[31]+0x00000180u; // 802519D4
  W32(c->r[28]+0x00002158u,c->r[0]); // 802519D8
  {uint32_t ea=c->r[31]+0x00000538u; c->f[1]=c->ps1[1]=RF32(ea);} // 802519DC
  {uint32_t ea=c->r[31]+0x00000548u; c->f[2]=c->ps1[2]=RF32(ea);} // 802519E0
  {uint32_t ea=c->r[31]+0x00000558u; c->f[3]=c->ps1[3]=RF32(ea);} // 802519E4
  c->lr=0x802519ECu; f_800521A0(c); // 802519E8
  c->r[3]=c->r[31]+0x00000180u; // 802519EC
  c->lr=0x802519F4u; f_802511DC(c); // 802519F0
  {uint32_t ea=c->r[31]+0x00000538u; c->f[1]=c->ps1[1]=RF32(ea);} // 802519F4
  c->r[3]=c->r[31]+0x00000168u; // 802519F8
  {uint32_t ea=c->r[31]+0x00000548u; c->f[2]=c->ps1[2]=RF32(ea);} // 802519FC
  {uint32_t ea=c->r[31]+0x00000558u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251A00
  c->lr=0x80251A08u; f_800521A0(c); // 80251A04
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251A08
  c->r[4]=0u+0x803E0000u; // 80251A0C
  c->r[5]=R32(c->r[31]+0x00000168u); // 80251A10
  c->r[4]=c->r[4]+0x00005240u; // 80251A14
  c->r[6]=R32(c->r[31]+0x0000016Cu); // 80251A18
  c->f[2]=c->f[1]; // 80251A1C
  c->r[0]=R32(c->r[31]+0x00000170u); // 80251A20
  c->r[3]=c->r[28]+0x00000800u; // 80251A24
  W32(c->r[31]+0x00000174u,c->r[5]); // 80251A28
  c->r[4]=c->r[4]+0x0000001Bu; // 80251A2C
  c->r[5]=c->r[31]+0x00000174u; // 80251A30
  W32(c->r[31]+0x00000178u,c->r[6]); // 80251A34
  c->r[6]=0u+0x00000001u; // 80251A38
  W32(c->r[31]+0x0000017Cu,c->r[0]); // 80251A3C
  c->lr=0x80251A44u; f_800C1BA0(c); // 80251A40
L_80251A44:;
  {uint32_t ea=c->r[28]+0x00002170u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251A44
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251A48
  fcmp(c,0,c->f[1],c->f[0]); // 80251A4C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80251A50
  if (!crb(c,2)) { goto L_80251A88; } // 80251A54
  c->r[3]=c->r[28]|c->r[28]; // 80251A58
  c->r[4]=0u+0x00000001u; // 80251A5C
  c->lr=0x80251A64u; f_801E3330(c); // 80251A60
  c->r[3]=c->r[31]+0x00000158u; // 80251A64
  c->lr=0x80251A6Cu; f_800CDFD0(c); // 80251A68
  c->r[5]=R32(c->r[28]+0x00000000u); // 80251A6C
  c->r[3]=c->r[31]+0x00000044u; // 80251A70
  c->r[0]=R32(c->r[28]+0x00000004u); // 80251A74
  c->r[4]=c->r[31]+0x00000158u; // 80251A78
  W32(c->r[31]+0x00000044u,c->r[5]); // 80251A7C
  W32(c->r[31]+0x00000048u,c->r[0]); // 80251A80
  c->lr=0x80251A88u; f_800CE040(c); // 80251A84
L_80251A88:;
  c->r[12]=R32(c->r[28]+0x000008D0u); // 80251A88
  c->r[3]=c->r[28]+0x000008D0u; // 80251A8C
  c->r[4]=c->r[31]+0x0000052Cu; // 80251A90
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80251A94
  c->ctr=c->r[12]; // 80251A98
  if (true) { c->lr=0x80251AA0u; dispatch(c,c->ctr); } // 80251A9C
  goto L_802520C0; // 80251AA0
L_80251AA4:;
  c->r[26]=0u+0x80410000u; // 80251AA4
  c->r[26]=c->r[26]+0xFFFF84BCu; // 80251AA8
  c->lr=0x80251AB0u; f_80061A4C(c); // 80251AAC
  c->r[3]=c->r[3]+0x0000035Cu; // 80251AB0
  c->r[4]=c->r[31]+0x0000046Cu; // 80251AB4
  c->lr=0x80251ABCu; f_800A0778(c); // 80251AB8
  c->r[3]=c->r[31]+0x0000046Cu; // 80251ABC
  c->r[4]=c->r[28]+0x000021D0u; // 80251AC0
  c->r[5]=c->r[31]+0x0000043Cu; // 80251AC4
  c->lr=0x80251ACCu; f_802646E0(c); // 80251AC8
  c->r[12]=R32(c->r[28]+0x000008D0u); // 80251ACC
  c->r[3]=c->r[28]+0x000008D0u; // 80251AD0
  c->r[4]=c->r[31]+0x0000043Cu; // 80251AD4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80251AD8
  c->ctr=c->r[12]; // 80251ADC
  if (true) { c->lr=0x80251AE4u; dispatch(c,c->ctr); } // 80251AE0
  {uint32_t ea=c->r[31]+0x00000448u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251AE4
  c->r[3]=c->r[31]+0x00000204u; // 80251AE8
  {uint32_t ea=c->r[31]+0x00000458u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251AEC
  {uint32_t ea=c->r[31]+0x00000468u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251AF0
  c->lr=0x80251AF8u; f_800521A0(c); // 80251AF4
  c->r[3]=0u+0x804D0000u; // 80251AF8
  {uint32_t ea=c->r[28]+0x00002200u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251AFC
  c->r[3]=c->r[3]+0x00003318u; // 80251B00
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251B04
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251B08
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 80251B0C
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80251B10
  {uint32_t ea=c->r[28]+0x00002200u; WF32(ea,c->f[2]);} // 80251B14
  fcmp(c,0,c->f[1],c->f[0]); // 80251B18
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80251B1C
  if (!crb(c,2)) { goto L_802520C0; } // 80251B20
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251B24
  c->r[3]=0u+0x803E0000u; // 80251B28
  c->r[3]=c->r[3]+0x00005240u; // 80251B2C
  {uint32_t ea=c->r[28]+0x00002200u; WF32(ea,c->f[0]);} // 80251B30
  c->r[26]=c->r[3]+0x00000022u; // 80251B34
  c->lr=0x80251B3Cu; f_80232150(c); // 80251B38
  {uint32_t ea=c->r[28]+0x00000398u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251B3C
  c->r[4]=c->r[26]|c->r[26]; // 80251B40
  c->lr=0x80251B48u; f_80232230(c); // 80251B44
  c->r[30]=0u+0x00000000u; // 80251B48
  c->f[31]=c->f[1]; // 80251B4C
  W32(c->r[31]+0x00000024u,c->r[30]); // 80251B50
  c->r[3]=c->r[31]+0x000002F8u; // 80251B54
  c->r[4]=c->r[31]+0x0000001Cu; // 80251B58
  c->r[5]=0u+0x00000000u; // 80251B5C
  W32(c->r[31]+0x00000028u,c->r[30]); // 80251B60
  W32(c->r[31]+0x0000001Cu,c->r[30]); // 80251B64
  W32(c->r[31]+0x00000020u,c->r[30]); // 80251B68
  c->lr=0x80251B70u; f_80068BE0(c); // 80251B6C
  c->r[29]=0u+0x803F0000u; // 80251B70
  c->r[3]=c->r[31]+0x00000308u; // 80251B74
  c->r[29]=c->r[29]+0x00007644u; // 80251B78
  c->r[4]=c->r[31]+0x00000204u; // 80251B7C
  W32(c->r[31]+0x000002F8u,c->r[29]); // 80251B80
  c->lr=0x80251B88u; f_8003F468(c); // 80251B84
  {uint32_t ea=c->r[31]+0x00000314u; WF32(ea,c->f[31]);} // 80251B88
  W32(c->r[31]+0x00000318u,c->r[30]); // 80251B8C
  c->lr=0x80251B94u; f_801E4C90(c); // 80251B90
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80251B94
  c->r[3]=c->r[13]+0xFFFF94B8u; // 80251B98
  c->r[5]=R32(c->r[3]+c->r[0]); // 80251B9C
  c->r[3]=c->r[31]+0x0000003Cu; // 80251BA0
  c->r[4]=R32(c->r[5]+0x00000000u); // 80251BA4
  c->r[0]=R32(c->r[5]+0x00000004u); // 80251BA8
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 80251BAC
  W32(c->r[31]+0x00000040u,c->r[0]); // 80251BB0
  c->lr=0x80251BB8u; f_8003F1D4(c); // 80251BB4
  cmps(c,0,(int32_t)c->r[3],0); // 80251BB8
  if (crb(c,2)) { goto L_80251C70; } // 80251BBC
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 80251BC0
  c->lr=0x80251BC8u; f_802A6EE4(c); // 80251BC4
  cmps(c,0,(int32_t)c->r[3],0); // 80251BC8
  c->r[27]=c->r[3]|c->r[3]; // 80251BCC
  if (crb(c,2)) { goto L_80251C70; } // 80251BD0
  if (crb(c,2)) { goto L_80251C1C; } // 80251BD4
  W32(c->r[31]+0x00000294u,c->r[1]); // 80251BD8
  c->r[4]=c->r[31]+0x00000014u; // 80251BDC
  c->r[5]=0u+0x00000000u; // 80251BE0
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 80251BE4
  W32(c->r[31]+0x00000010u,c->r[30]); // 80251BE8
  W32(c->r[31]+0x00000014u,c->r[30]); // 80251BEC
  W32(c->r[31]+0x00000018u,c->r[30]); // 80251BF0
  c->lr=0x80251BF8u; f_80068BE0(c); // 80251BF4
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251BF8
  c->r[3]=c->r[27]+0x00000010u; // 80251BFC
  W32(c->r[27]+0x00000000u,c->r[29]); // 80251C00
  c->f[2]=c->f[1]; // 80251C04
  c->f[3]=c->f[1]; // 80251C08
  c->lr=0x80251C10u; f_80065358(c); // 80251C0C
  {uint32_t ea=c->r[2]+0xFFFFD9A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251C10
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[0]);} // 80251C14
  W32(c->r[27]+0x00000020u,c->r[30]); // 80251C18
L_80251C1C:;
  c->r[3]=c->r[27]|c->r[27]; // 80251C1C
  c->r[4]=c->r[31]+0x000002F8u; // 80251C20
  c->lr=0x80251C28u; f_80064DD8(c); // 80251C24
  c->r[3]=c->r[27]+0x00000010u; // 80251C28
  c->r[4]=c->r[31]+0x00000308u; // 80251C2C
  c->lr=0x80251C34u; f_8003F468(c); // 80251C30
  {uint32_t ea=c->r[31]+0x00000314u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251C34
  c->r[26]=addc(c,c->r[27],0x00000024u,0); cr0(c,c->r[26]); // 80251C38
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[0]);} // 80251C3C
  c->r[0]=R32(c->r[31]+0x00000318u); // 80251C40
  W32(c->r[27]+0x00000020u,c->r[0]); // 80251C44
  if (crb(c,2)) { goto L_80251C5C; } // 80251C48
  W32(c->r[31]+0x000002ACu,c->r[1]); // 80251C4C
  c->r[3]=c->r[26]|c->r[26]; // 80251C50
  c->r[4]=c->r[27]|c->r[27]; // 80251C54
  c->lr=0x80251C5Cu; f_80064CE8(c); // 80251C58
L_80251C5C:;
  c->r[3]=c->r[31]+0x0000003Cu; // 80251C5C
  c->lr=0x80251C64u; f_80068A78(c); // 80251C60
  c->r[4]=c->r[26]|c->r[26]; // 80251C64
  c->r[3]=c->r[3]+0x00000030u; // 80251C68
  c->lr=0x80251C70u; f_8003FD14(c); // 80251C6C
L_80251C70:;
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251C70
  c->r[3]=c->r[28]+0x00002188u; // 80251C74
  c->f[2]=c->f[1]; // 80251C78
  c->f[3]=c->f[1]; // 80251C7C
  c->lr=0x80251C84u; f_80065358(c); // 80251C80
  {uint32_t ea=c->r[2]+0xFFFFD9A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251C84
  c->r[4]=0u+0x803E0000u; // 80251C88
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251C8C
  c->r[4]=c->r[4]+0x00005240u; // 80251C90
  {uint32_t ea=c->r[28]+0x00002170u; WF32(ea,c->f[0]);} // 80251C94
  c->r[3]=c->r[28]+0x00000800u; // 80251C98
  c->f[2]=c->f[1]; // 80251C9C
  c->r[4]=c->r[4]+0x00000029u; // 80251CA0
  c->r[8]=R32(c->r[31]+0x00000204u); // 80251CA4
  c->r[5]=c->r[31]+0x0000014Cu; // 80251CA8
  c->r[7]=R32(c->r[31]+0x00000208u); // 80251CAC
  c->r[6]=0u+0x00000001u; // 80251CB0
  c->r[0]=R32(c->r[31]+0x0000020Cu); // 80251CB4
  W32(c->r[31]+0x0000014Cu,c->r[8]); // 80251CB8
  W32(c->r[31]+0x00000150u,c->r[7]); // 80251CBC
  W32(c->r[31]+0x00000154u,c->r[0]); // 80251CC0
  c->lr=0x80251CC8u; f_800C1BA0(c); // 80251CC4
  c->r[0]=0u+0x00000032u; // 80251CC8
  W32(c->r[28]+0x00002158u,c->r[0]); // 80251CCC
  goto L_802520C0; // 80251CD0
L_80251CD4:;
  {uint32_t ea=c->r[3]+0x00002170u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251CD4
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251CD8
  fcmp(c,0,c->f[1],c->f[0]); // 80251CDC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80251CE0
  if (!crb(c,2)) { goto L_802520C0; } // 80251CE4
  {uint32_t ea=c->r[2]+0xFFFFD9ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251CE8
  c->r[0]=0u+0x0000003Cu; // 80251CEC
  W32(c->r[3]+0x00002158u,c->r[0]); // 80251CF0
  {uint32_t ea=c->r[3]+0x00002170u; WF32(ea,c->f[0]);} // 80251CF4
  goto L_802520C0; // 80251CF8
L_80251CFC:;
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251CFC
  c->r[29]=0u+0x804D0000u; // 80251D00
  c->r[29]=c->r[29]+0x00003318u; // 80251D04
  {uint32_t ea=c->r[2]+0xFFFFD9B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251D08
  c->f[3]=c->f[1]; // 80251D0C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 80251D10
  c->r[3]=c->r[31]+0x00000134u; // 80251D14
  c->lr=0x80251D1Cu; f_800521A0(c); // 80251D18
  c->f[1]=c->f[31]; // 80251D1C
  c->r[4]=c->r[3]|c->r[3]; // 80251D20
  c->r[3]=c->r[31]+0x00000140u; // 80251D24
  c->lr=0x80251D2Cu; f_80064C58(c); // 80251D28
  c->r[3]=c->r[28]+0x00002188u; // 80251D2C
  c->r[5]=c->r[31]+0x00000140u; // 80251D30
  c->r[4]=c->r[3]|c->r[3]; // 80251D34
  c->lr=0x80251D3Cu; f_80064C34(c); // 80251D38
  c->r[12]=R32(c->r[28]+0x000008D0u); // 80251D3C
  c->r[4]=c->r[28]+0x000008D0u; // 80251D40
  c->r[3]=c->r[31]+0x0000040Cu; // 80251D44
  c->r[12]=R32(c->r[12]+0x00000040u); // 80251D48
  c->ctr=c->r[12]; // 80251D4C
  if (true) { c->lr=0x80251D54u; dispatch(c,c->ctr); } // 80251D50
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251D54
  c->r[3]=c->r[31]+0x0000011Cu; // 80251D58
  c->r[4]=c->r[28]+0x00002188u; // 80251D5C
  c->lr=0x80251D64u; f_80064C58(c); // 80251D60
  {uint32_t ea=c->r[31]+0x00000418u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251D64
  c->r[3]=c->r[31]+0x00000128u; // 80251D68
  {uint32_t ea=c->r[31]+0x00000428u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251D6C
  {uint32_t ea=c->r[31]+0x00000438u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251D70
  c->lr=0x80251D78u; f_800521A0(c); // 80251D74
  c->r[3]=c->r[31]+0x000001F8u; // 80251D78
  c->r[4]=c->r[31]+0x00000128u; // 80251D7C
  c->r[5]=c->r[31]+0x0000011Cu; // 80251D80
  c->lr=0x80251D88u; f_80064C34(c); // 80251D84
  c->r[3]=c->r[31]+0x0000040Cu; // 80251D88
  c->r[4]=c->r[31]+0x000001F8u; // 80251D8C
  c->lr=0x80251D94u; f_80032FF4(c); // 80251D90
  c->r[12]=R32(c->r[28]+0x000008D0u); // 80251D94
  c->r[3]=c->r[28]+0x000008D0u; // 80251D98
  c->r[4]=c->r[31]+0x0000040Cu; // 80251D9C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80251DA0
  c->ctr=c->r[12]; // 80251DA4
  if (true) { c->lr=0x80251DACu; dispatch(c,c->ctr); } // 80251DA8
  {uint32_t ea=c->r[28]+0x00002170u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251DAC
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251DB0
  fcmp(c,0,c->f[1],c->f[0]); // 80251DB4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80251DB8
  if (!crb(c,2)) { goto L_802520C0; } // 80251DBC
  c->r[3]=c->r[28]|c->r[28]; // 80251DC0
  c->r[4]=0u+0x00000001u; // 80251DC4
  c->lr=0x80251DCCu; f_801E3330(c); // 80251DC8
  c->r[3]=c->r[31]+0x0000010Cu; // 80251DCC
  c->lr=0x80251DD4u; f_800CDFD0(c); // 80251DD0
  c->r[5]=R32(c->r[28]+0x00000000u); // 80251DD4
  c->r[3]=c->r[31]+0x00000034u; // 80251DD8
  c->r[0]=R32(c->r[28]+0x00000004u); // 80251DDC
  c->r[4]=c->r[31]+0x0000010Cu; // 80251DE0
  W32(c->r[31]+0x00000034u,c->r[5]); // 80251DE4
  W32(c->r[31]+0x00000038u,c->r[0]); // 80251DE8
  c->lr=0x80251DF0u; f_800CE040(c); // 80251DEC
  goto L_802520C0; // 80251DF0
L_80251DF4:;
  c->lr=0x80251DF8u; f_80291D94(c); // 80251DF4
  c->r[0]=c->r[3]^0x80000000u; // 80251DF8
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[2]=RF64(ea);} // 80251DFC
  W32(c->r[31]+0x00000564u,c->r[0]); // 80251E00
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251E04
  {uint32_t ea=c->r[31]+0x00000560u; c->f[1]=RF64(ea);} // 80251E08
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80251E0C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 80251E10
  c->lr=0x80251E18u; f_80291D94(c); // 80251E14
  c->r[0]=c->r[3]^0x80000000u; // 80251E18
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[2]=RF64(ea);} // 80251E1C
  W32(c->r[31]+0x0000056Cu,c->r[0]); // 80251E20
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251E24
  {uint32_t ea=c->r[31]+0x00000568u; c->f[1]=RF64(ea);} // 80251E28
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80251E2C
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[0]); // 80251E30
  c->lr=0x80251E38u; f_80291D94(c); // 80251E34
  c->r[0]=c->r[3]^0x80000000u; // 80251E38
  c->r[4]=0u+0x80410000u; // 80251E3C
  W32(c->r[31]+0x00000564u,c->r[0]); // 80251E40
  c->r[29]=c->r[4]+0xFFFF84A0u; // 80251E44
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[2]=RF64(ea);} // 80251E48
  c->r[3]=c->r[28]+0x00002188u; // 80251E4C
  {uint32_t ea=c->r[31]+0x00000560u; c->f[1]=RF64(ea);} // 80251E50
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251E54
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 80251E58
  {uint32_t ea=c->r[4]+0xFFFF84A0u; c->f[5]=c->ps1[5]=RF32(ea);} // 80251E5C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251E60
  {uint32_t ea=c->r[29]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80251E64
  c->f[6]=c->ps1[6]=S(c->f[2]/c->f[0]); // 80251E68
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80251E6C
  {uint32_t ea=c->r[29]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251E70
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251E74
  c->f[1]=c->ps1[1]=S(std::fma(c->f[5],c->f[6],c->f[1])); // 80251E78
  c->f[2]=c->ps1[2]=S(std::fma(c->f[4],c->f[30],c->f[2])); // 80251E7C
  c->f[3]=c->ps1[3]=S(std::fma(c->f[3],c->f[31],c->f[0])); // 80251E80
  c->lr=0x80251E88u; f_80065358(c); // 80251E84
  c->lr=0x80251E8Cu; f_80291D94(c); // 80251E88
  c->r[0]=c->r[3]^0x80000000u; // 80251E8C
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[3]=RF64(ea);} // 80251E90
  W32(c->r[31]+0x0000056Cu,c->r[0]); // 80251E94
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80251E98
  {uint32_t ea=c->r[31]+0x00000568u; c->f[0]=RF64(ea);} // 80251E9C
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251EA0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80251EA4
  {uint32_t ea=c->r[2]+0xFFFFD988u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251EA8
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80251EAC
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80251EB0
  c->lr=0x80251EB8u; f_80291D94(c); // 80251EB4
  c->r[0]=c->r[3]^0x80000000u; // 80251EB8
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[3]=RF64(ea);} // 80251EBC
  W32(c->r[31]+0x00000564u,c->r[0]); // 80251EC0
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80251EC4
  {uint32_t ea=c->r[31]+0x00000560u; c->f[0]=RF64(ea);} // 80251EC8
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251ECC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80251ED0
  {uint32_t ea=c->r[2]+0xFFFFD988u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251ED4
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80251ED8
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 80251EDC
  c->lr=0x80251EE4u; f_80291D94(c); // 80251EE0
  c->r[0]=c->r[3]^0x80000000u; // 80251EE4
  {uint32_t ea=c->r[2]+0xFFFFD970u; c->f[5]=RF64(ea);} // 80251EE8
  W32(c->r[31]+0x0000056Cu,c->r[0]); // 80251EEC
  c->f[2]=c->f[31]; // 80251EF0
  {uint32_t ea=c->r[2]+0xFFFFD94Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80251EF4
  c->f[3]=c->f[30]; // 80251EF8
  {uint32_t ea=c->r[31]+0x00000568u; c->f[0]=RF64(ea);} // 80251EFC
  c->r[3]=c->r[28]+0x00002194u; // 80251F00
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251F04
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[5]); // 80251F08
  {uint32_t ea=c->r[2]+0xFFFFD988u; c->f[0]=c->ps1[0]=RF32(ea);} // 80251F0C
  c->f[4]=c->ps1[4]=S(c->f[5]/c->f[4]); // 80251F10
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[4],c->f[0])); // 80251F14
  c->lr=0x80251F1Cu; f_80065358(c); // 80251F18
  c->r[3]=c->r[28]+0x00002194u; // 80251F1C
  {uint32_t ea=c->r[29]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251F20
  c->r[4]=c->r[3]|c->r[3]; // 80251F24
  c->lr=0x80251F2Cu; f_80064C58(c); // 80251F28
  c->r[0]=0u+0x00000046u; // 80251F2C
  W32(c->r[28]+0x00002158u,c->r[0]); // 80251F30
L_80251F34:;
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80251F34
  c->r[29]=0u+0x804D0000u; // 80251F38
  c->r[29]=c->r[29]+0x00003318u; // 80251F3C
  {uint32_t ea=c->r[2]+0xFFFFD9B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251F40
  c->f[3]=c->f[1]; // 80251F44
  {uint32_t ea=c->r[29]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 80251F48
  c->r[3]=c->r[31]+0x000000F4u; // 80251F4C
  c->lr=0x80251F54u; f_800521A0(c); // 80251F50
  c->f[1]=c->f[30]; // 80251F54
  c->r[4]=c->r[3]|c->r[3]; // 80251F58
  c->r[3]=c->r[31]+0x00000100u; // 80251F5C
  c->lr=0x80251F64u; f_80064C58(c); // 80251F60
  c->r[3]=c->r[28]+0x00002188u; // 80251F64
  c->r[5]=c->r[31]+0x00000100u; // 80251F68
  c->r[4]=c->r[3]|c->r[3]; // 80251F6C
  c->lr=0x80251F74u; f_80064C34(c); // 80251F70
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251F74
  c->r[3]=c->r[31]+0x000001ECu; // 80251F78
  c->r[4]=c->r[28]+0x00002188u; // 80251F7C
  c->lr=0x80251F84u; f_80064C58(c); // 80251F80
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251F84
  c->r[3]=c->r[31]+0x000001E0u; // 80251F88
  c->r[4]=c->r[28]+0x00002194u; // 80251F8C
  c->lr=0x80251F94u; f_80064C58(c); // 80251F90
  c->r[12]=R32(c->r[28]+0x000008D0u); // 80251F94
  c->r[4]=c->r[28]+0x000008D0u; // 80251F98
  c->r[3]=c->r[31]+0x000003ACu; // 80251F9C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80251FA0
  c->ctr=c->r[12]; // 80251FA4
  if (true) { c->lr=0x80251FACu; dispatch(c,c->ctr); } // 80251FA8
  {uint32_t ea=c->r[31]+0x000003B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251FAC
  c->r[3]=c->r[31]+0x000001D4u; // 80251FB0
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251FB4
  {uint32_t ea=c->r[31]+0x000003D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80251FB8
  c->lr=0x80251FC0u; f_800521A0(c); // 80251FBC
  {uint32_t ea=c->r[31]+0x000001E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251FC0
  c->r[3]=c->r[31]+0x000003DCu; // 80251FC4
  {uint32_t ea=c->r[2]+0xFFFFD99Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80251FC8
  {uint32_t ea=c->r[31]+0x000001E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251FCC
  {uint32_t ea=c->r[31]+0x000001E0u; c->f[4]=c->ps1[4]=RF32(ea);} // 80251FD0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 80251FD4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80251FD8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 80251FDC
  c->lr=0x80251FE4u; f_803949B8(c); // 80251FE0
  c->r[3]=c->r[31]+0x000003ACu; // 80251FE4
  c->r[4]=c->r[31]+0x000003DCu; // 80251FE8
  c->r[5]=c->r[3]|c->r[3]; // 80251FEC
  c->lr=0x80251FF4u; f_802646E0(c); // 80251FF0
  {uint32_t ea=c->r[31]+0x000003B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80251FF4
  c->r[3]=c->r[31]+0x0000004Cu; // 80251FF8
  {uint32_t ea=c->r[31]+0x000003C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80251FFC
  {uint32_t ea=c->r[31]+0x000003D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80252000
  c->lr=0x80252008u; f_800521A0(c); // 80252004
  {uint32_t ea=c->r[31]+0x000003B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80252008
  c->r[3]=c->r[31]+0x00000064u; // 8025200C
  {uint32_t ea=c->r[31]+0x000003C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80252010
  {uint32_t ea=c->r[31]+0x000003D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80252014
  c->lr=0x8025201Cu; f_800521A0(c); // 80252018
  {uint32_t ea=c->r[31]+0x000003B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025201C
  c->r[3]=c->r[31]+0x00000058u; // 80252020
  {uint32_t ea=c->r[31]+0x000003C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80252024
  {uint32_t ea=c->r[31]+0x000003D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80252028
  c->lr=0x80252030u; f_800521A0(c); // 8025202C
  c->r[3]=c->r[31]+0x000003ACu; // 80252030
  c->r[4]=c->r[31]+0x00000058u; // 80252034
  c->r[5]=c->r[31]+0x00000064u; // 80252038
  c->lr=0x80252040u; f_80074DF8(c); // 8025203C
  c->r[3]=c->r[31]+0x000003ACu; // 80252040
  c->r[4]=c->r[31]+0x0000004Cu; // 80252044
  c->lr=0x8025204Cu; f_80032FF4(c); // 80252048
  c->r[3]=c->r[31]+0x000000E8u; // 8025204C
  c->r[4]=c->r[31]+0x000001D4u; // 80252050
  c->r[5]=c->r[31]+0x000001ECu; // 80252054
  c->lr=0x8025205Cu; f_80064C34(c); // 80252058
  c->r[3]=c->r[31]+0x000003ACu; // 8025205C
  c->r[4]=c->r[31]+0x000000E8u; // 80252060
  c->lr=0x80252068u; f_80032FF4(c); // 80252064
  c->r[12]=R32(c->r[28]+0x000008D0u); // 80252068
  c->r[3]=c->r[28]+0x000008D0u; // 8025206C
  c->r[4]=c->r[31]+0x000003ACu; // 80252070
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80252074
  c->ctr=c->r[12]; // 80252078
  if (true) { c->lr=0x80252080u; dispatch(c,c->ctr); } // 8025207C
  {uint32_t ea=c->r[28]+0x00002170u; c->f[1]=c->ps1[1]=RF32(ea);} // 80252080
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80252084
  fcmp(c,0,c->f[1],c->f[0]); // 80252088
  if (!crb(c,0)) { goto L_802520C0; } // 8025208C
  c->r[3]=c->r[28]|c->r[28]; // 80252090
  c->r[4]=0u+0x00000001u; // 80252094
  c->lr=0x8025209Cu; f_801E3330(c); // 80252098
  c->r[3]=c->r[31]+0x000000D8u; // 8025209C
  c->lr=0x802520A4u; f_800CDFD0(c); // 802520A0
  c->r[5]=R32(c->r[28]+0x00000000u); // 802520A4
  c->r[3]=c->r[31]+0x0000002Cu; // 802520A8
  c->r[0]=R32(c->r[28]+0x00000004u); // 802520AC
  c->r[4]=c->r[31]+0x000000D8u; // 802520B0
  W32(c->r[31]+0x0000002Cu,c->r[5]); // 802520B4
  W32(c->r[31]+0x00000030u,c->r[0]); // 802520B8
  c->lr=0x802520C0u; f_800CE040(c); // 802520BC
L_802520C0:;
  c->r[3]=0u+0x804D0000u; // 802520C0
  {uint32_t ea=c->r[28]+0x00002170u; c->f[1]=c->ps1[1]=RF32(ea);} // 802520C4
  c->r[3]=c->r[3]+0x00003318u; // 802520C8
  {uint32_t ea=c->r[28]+0x00002168u; c->f[0]=c->ps1[0]=RF32(ea);} // 802520CC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802520D0
  c->r[10]=c->r[31]|c->r[31]; // 802520D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802520D8
  {uint32_t ea=c->r[28]+0x00002170u; WF32(ea,c->f[1]);} // 802520DC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802520E0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802520E4
  {uint32_t ea=c->r[28]+0x00002168u; WF32(ea,c->f[0]);} // 802520E8
  {uint32_t ea=c->r[10]+0x000005A8u; psq_load(c,31,ea,0,0);} // 802520EC
  {uint32_t ea=c->r[31]+0x000005A0u; c->f[31]=RF64(ea);} // 802520F0
  {uint32_t ea=c->r[10]+0x00000598u; psq_load(c,30,ea,0,0);} // 802520F4
  {uint32_t ea=c->r[31]+0x00000590u; c->f[30]=RF64(ea);} // 802520F8
  c->r[11]=c->r[10]+0x00000590u; // 802520FC
  c->lr=0x80252104u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80252100
  c->r[10]=R32(c->r[1]+0x00000000u); // 80252104
  c->r[0]=R32(c->r[10]+0x00000004u); // 80252108
  c->r[1]=c->r[10]|c->r[10]; // 8025210C
  c->lr=c->r[0]; // 80252110
  return; // 80252114
}

// fn_80252118
void f_80252118(Ctx* __restrict c) {
  trace_call(0x80252118u);
  return; // 80252118
}

// fn_8025211C
void f_8025211C(Ctx* __restrict c) {
  trace_call(0x8025211Cu);
  return; // 8025211C
}

// fn_80252120
void f_80252120(Ctx* __restrict c) {
  trace_call(0x80252120u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80252120
  f_8025211C(c); return; // 80252124
}

// fn_80252128
void f_80252128(Ctx* __restrict c) {
  trace_call(0x80252128u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80252128
  f_802512B8(c); return; // 8025212C
}

// fn_80252130
void f_80252130(Ctx* __restrict c) {
  trace_call(0x80252130u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80252130
  f_80250D9C(c); return; // 80252134
}

// fn_80252138
void f_80252138(Ctx* __restrict c) {
  trace_call(0x80252138u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80252138
  f_80252118(c); return; // 8025213C
}

// fn_80252140
void f_80252140(Ctx* __restrict c) {
  trace_call(0x80252140u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80252140
  f_802512D4(c); return; // 80252144
}

// fn_80252148
void f_80252148(Ctx* __restrict c) {
  trace_call(0x80252148u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252148
  c->r[0]=c->lr; // 8025214C
  {uint32_t ea=c->r[2]+0xFFFFD95Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80252150
  W32(c->r[1]+0x00000014u,c->r[0]); // 80252154
  c->f[3]=c->f[1]; // 80252158
  {uint32_t ea=c->r[2]+0xFFFFD960u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025215C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80252160
  c->r[31]=0u+0x805E0000u; // 80252164
  c->r[31]=c->r[31]+0xFFFFF6B0u; // 80252168
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025216C
  c->r[3]=c->r[31]+0x00000000u; // 80252170
  c->lr=0x80252178u; f_8003F588(c); // 80252174
  c->r[11]=0u+0x80410000u; // 80252178
  c->r[3]=c->r[13]+0xFFFF8D78u; // 8025217C
  c->r[6]=0u+0x80410000u; // 80252180
  c->r[4]=R32(c->r[13]+0xFFFF8D78u); // 80252184
  c->r[11]=c->r[11]+0x00001468u; // 80252188
  c->r[0]=R32(c->r[3]+0x00000004u); // 8025218C
  c->r[12]=c->r[4]-c->r[11]; // 80252190
  c->r[6]=c->r[6]+0x00001476u; // 80252194
  c->r[30]=c->r[0]-c->r[6]; // 80252198
  c->r[9]=c->r[31]+0x00000018u; // 8025219C
  c->r[10]=sraw(c,c->r[12],16); // 802521A0
  c->r[0]=c->r[13]+0xFFFF8D80u; // 802521A4
  c->r[4]=c->r[31]+0x00000040u; // 802521A8
  c->r[8]=c->r[11]-c->r[9]; // 802521AC
  c->r[7]=c->r[0]-c->r[9]; // 802521B0
  c->r[5]=sraw(c,c->r[30],16); // 802521B4
  c->r[3]=c->r[6]-c->r[4]; // 802521B8
  c->r[0]=c->r[0]-c->r[4]; // 802521BC
  W16(c->r[11]+0x00000002u,c->r[10]); // 802521C0
  W16(c->r[11]+0x00000004u,c->r[12]); // 802521C4
  W32(c->r[9]+0x00000004u,c->r[8]); // 802521C8
  W32(c->r[9]+0x0000000Cu,c->r[7]); // 802521CC
  W16(c->r[6]+0x00000002u,c->r[5]); // 802521D0
  W16(c->r[6]+0x00000004u,c->r[30]); // 802521D4
  W32(c->r[4]+0x00000004u,c->r[3]); // 802521D8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802521DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802521E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802521E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802521E8
  c->lr=c->r[0]; // 802521EC
  c->r[1]=c->r[1]+0x00000010u; // 802521F0
  return; // 802521F4
}

// fn_802521F8
void f_802521F8(Ctx* __restrict c) {
  trace_call(0x802521F8u);
  {uint32_t ea=c->r[2]+0xFFFFD9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802521F8
  c->r[0]=0u+0x00000000u; // 802521FC
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80252200
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80252204
  return; // 80252208
}

// fn_8025220C
void f_8025220C(Ctx* __restrict c) {
  trace_call(0x8025220Cu);
  {uint32_t ea=c->r[2]+0xFFFFD9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025220C
  c->r[0]=0u+0x00000000u; // 80252210
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80252214
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80252218
  return; // 8025221C
}

// fn_80252220
void f_80252220(Ctx* __restrict c) {
  trace_call(0x80252220u);
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 80252220
  cmps(c,0,(int32_t)c->r[0],0); // 80252224
  if (crb(c,2)) return; // 80252228
  c->r[0]=R8(c->r[3]+0x0000001Du); // 8025222C
  cmps(c,0,(int32_t)c->r[0],0); // 80252230
  if (crb(c,2)) { goto L_80252270; } // 80252234
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80252238
  {uint32_t ea=c->r[2]+0xFFFFD9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025223C
  fcmp(c,0,c->f[1],c->f[0]); // 80252240
  if (!crb(c,0)) { goto L_8025224C; } // 80252244
  c->f[1]=-c->f[1]; // 80252248
L_8025224C:;
  {uint32_t ea=c->r[2]+0xFFFFD9BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025224C
  fcmp(c,0,c->f[1],c->f[0]); // 80252250
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80252254
  if (!crb(c,2)) { goto L_80252270; } // 80252258
  {uint32_t ea=c->r[2]+0xFFFFD9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025225C
  c->r[0]=0u+0x00000000u; // 80252260
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80252264
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80252268
  return; // 8025226C
L_80252270:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80252270
  c->r[4]=0u+0x804D0000u; // 80252274
  c->r[4]=c->r[4]+0x00003318u; // 80252278
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8025227C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80252280
  f_801237C0(c); return; // 80252284
  return; // 80252288
}

// fn_8025228C
void f_8025228C(Ctx* __restrict c) {
  trace_call(0x8025228Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025228C
  c->r[0]=c->lr; // 80252290
  W32(c->r[1]+0x00000034u,c->r[0]); // 80252294
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80252298
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8025229C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 802522A0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 802522A4
  c->f[30]=c->f[1]; // 802522A8
  c->f[31]=c->f[2]; // 802522AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802522B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802522B4
  c->r[30]=c->r[3]|c->r[3]; // 802522B8
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 802522BC
  cmps(c,0,(int32_t)c->r[0],0); // 802522C0
  if (!crb(c,2)) { goto L_802522E8; } // 802522C4
  {uint32_t ea=c->r[2]+0xFFFFD9B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802522C8
  c->r[4]=0u+0x00000002u; // 802522CC
  {uint32_t ea=c->r[2]+0xFFFFD9C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802522D0
  c->f[2]=c->f[1]; // 802522D4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 802522D8
  c->lr=0x802522E0u; f_80123768(c); // 802522DC
  c->r[0]=0u+0x00000001u; // 802522E0
  W8(c->r[30]+0x0000001Cu,c->r[0]); // 802522E4
L_802522E8:;
  {uint32_t ea=c->r[2]+0xFFFFD9B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802522E8
  fcmp(c,0,c->f[31],c->f[2]); // 802522EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802522F0
  if (!crb(c,2)) { goto L_80252310; } // 802522F4
  c->f[1]=c->f[30]; // 802522F8
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[30]);} // 802522FC
  {uint32_t ea=c->r[2]+0xFFFFD9C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80252300
  c->r[3]=c->r[30]|c->r[30]; // 80252304
  c->r[4]=0u+0x00000002u; // 80252308
  c->lr=0x80252310u; f_80123768(c); // 8025230C
L_80252310:;
  c->r[31]=0u+0x00000000u; // 80252310
  c->f[1]=c->f[31]; // 80252314
  W8(c->r[30]+0x0000000Cu,c->r[31]); // 80252318
  c->r[3]=c->r[30]|c->r[30]; // 8025231C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[30]);} // 80252320
  c->lr=0x80252328u; f_80123908(c); // 80252324
  W8(c->r[30]+0x0000001Du,c->r[31]); // 80252328
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8025232C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80252330
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80252334
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80252338
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025233C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80252340
  c->r[0]=R32(c->r[1]+0x00000034u); // 80252344
  c->lr=c->r[0]; // 80252348
  c->r[1]=c->r[1]+0x00000030u; // 8025234C
  return; // 80252350
}

// fn_80252354
void f_80252354(Ctx* __restrict c) {
  trace_call(0x80252354u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252354
  c->r[0]=c->lr; // 80252358
  {uint32_t ea=c->r[2]+0xFFFFD9B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025235C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80252360
  fcmp(c,0,c->f[1],c->f[0]); // 80252364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80252368
  c->r[31]=c->r[3]|c->r[3]; // 8025236C
  if (!crb(c,1)) { goto L_80252390; } // 80252370
  c->r[0]=0u+0x00000000u; // 80252374
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80252378
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8025237C
  c->lr=0x80252384u; f_80123908(c); // 80252380
  c->r[0]=0u+0x00000001u; // 80252384
  W8(c->r[31]+0x0000001Du,c->r[0]); // 80252388
  goto L_8025239C; // 8025238C
L_80252390:;
  c->r[0]=0u+0x00000000u; // 80252390
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80252394
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 80252398
L_8025239C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025239C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802523A0
  c->lr=c->r[0]; // 802523A4
  c->r[1]=c->r[1]+0x00000010u; // 802523A8
  return; // 802523AC
}

// fn_802523B0
void f_802523B0(Ctx* __restrict c) {
  trace_call(0x802523B0u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802523B0
  return; // 802523B4
}

// fn_802523B8
void f_802523B8(Ctx* __restrict c) {
  trace_call(0x802523B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802523B8
  c->r[0]=c->lr; // 802523BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802523C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802523C4
  c->r[31]=c->r[3]|c->r[3]; // 802523C8
  c->lr=0x802523D0u; f_801D7ABC(c); // 802523CC
  c->r[4]=0u+0x80410000u; // 802523D0
  c->r[3]=c->r[31]|c->r[31]; // 802523D4
  c->r[4]=c->r[4]+0x00001A38u; // 802523D8
  W32(c->r[31]+0x00000008u,c->r[4]); // 802523DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802523E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802523E4
  c->lr=c->r[0]; // 802523E8
  c->r[1]=c->r[1]+0x00000010u; // 802523EC
  return; // 802523F0
}

// dtor_802523F4
void f_802523F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802523F4
  c->r[0]=c->lr; // 802523F8
  cmps(c,0,(int32_t)c->r[3],0); // 802523FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80252400
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80252404
  c->r[30]=c->r[3]|c->r[3]; // 80252408
  c->r[31]=c->r[4]|c->r[4]; // 8025240C
  if (crb(c,2)) { goto L_8025242C; } // 80252410
  c->r[4]=0u+0x00000000u; // 80252414
  c->lr=0x8025241Cu; f_801D7AE0(c); // 80252418
  cmps(c,0,(int32_t)c->r[31],0); // 8025241C
  if (!crb(c,1)) { goto L_8025242C; } // 80252420
  c->r[3]=c->r[30]|c->r[30]; // 80252424
  c->lr=0x8025242Cu; f_802896EC(c); // 80252428
L_8025242C:;
  c->r[3]=c->r[30]|c->r[30]; // 8025242C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80252430
  c->r[0]=R32(c->r[1]+0x00000014u); // 80252434
  c->lr=c->r[0]; // 80252438
  c->r[1]=c->r[1]+0x00000010u; // 8025243C
  return; // 80252440
}

// fn_80252444
void f_80252444(Ctx* __restrict c) {
  trace_call(0x80252444u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252444
  c->r[0]=c->lr; // 80252448
  c->r[4]=0u+0x803E0000u; // 8025244C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80252450
  c->r[4]=c->r[4]+0x0000528Cu; // 80252454
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80252458
  c->r[31]=c->r[3]|c->r[3]; // 8025245C
  c->r[3]=c->r[3]+0x00000018u; // 80252460
  c->lr=0x80252468u; f_802933D8(c); // 80252464
  c->r[3]=0u+0xFFFFFFFFu; // 80252468
  c->r[0]=0u+0x00000000u; // 8025246C
  W32(c->r[31]+0x00001FE4u,c->r[3]); // 80252470
  W32(c->r[31]+0x00001FECu,c->r[3]); // 80252474
  W32(c->r[31]+0x00001FF4u,c->r[3]); // 80252478
  W32(c->r[31]+0x00001FFCu,c->r[3]); // 8025247C
  W8(c->r[31]+0x00001114u,c->r[0]); // 80252480
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80252484
  c->r[0]=R32(c->r[1]+0x00000014u); // 80252488
  c->lr=c->r[0]; // 8025248C
  c->r[1]=c->r[1]+0x00000010u; // 80252490
  return; // 80252494
}

// fn_80252498
void f_80252498(Ctx* __restrict c) {
  trace_call(0x80252498u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252498
  c->r[0]=c->lr; // 8025249C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802524A0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802524A4
  c->r[30]=0u+0x80460000u; // 802524A8
  c->r[30]=c->r[30]+0xFFFFD468u; // 802524AC
  c->r[29]=c->r[3]|c->r[3]; // 802524B0
  c->r[4]=R32(c->r[3]+0x00001FE4u); // 802524B4
  c->r[3]=c->r[30]+0x00000014u; // 802524B8
  c->lr=0x802524C0u; f_80048610(c); // 802524BC
  c->r[31]=0u+0xFFFFFFFFu; // 802524C0
  c->r[4]=R32(c->r[29]+0x00001FECu); // 802524C4
  W32(c->r[29]+0x00001FE4u,c->r[31]); // 802524C8
  c->r[3]=c->r[30]+0x00000014u; // 802524CC
  c->lr=0x802524D4u; f_80048610(c); // 802524D0
  W32(c->r[29]+0x00001FECu,c->r[31]); // 802524D4
  c->r[3]=c->r[30]+0x00000014u; // 802524D8
  c->r[4]=R32(c->r[29]+0x00001FF4u); // 802524DC
  c->lr=0x802524E4u; f_80048610(c); // 802524E0
  W32(c->r[29]+0x00001FF4u,c->r[31]); // 802524E4
  c->r[3]=c->r[30]+0x00000014u; // 802524E8
  c->r[4]=R32(c->r[29]+0x00001FFCu); // 802524EC
  c->lr=0x802524F4u; f_80048610(c); // 802524F0
  W32(c->r[29]+0x00001FFCu,c->r[31]); // 802524F4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802524F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802524FC
  c->lr=c->r[0]; // 80252500
  c->r[1]=c->r[1]+0x00000020u; // 80252504
  return; // 80252508
}

// fn_8025250C
void f_8025250C(Ctx* __restrict c) {
  trace_call(0x8025250Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025250C
  c->r[0]=c->lr; // 80252510
  W32(c->r[1]+0x00000034u,c->r[0]); // 80252514
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80252518
  c->r[30]=0u+0x80460000u; // 8025251C
  c->r[30]=c->r[30]+0xFFFFD468u; // 80252520
  c->r[28]=c->r[3]|c->r[3]; // 80252524
  c->r[4]=R32(c->r[3]+0x00000014u); // 80252528
  c->r[5]=R32(c->r[3]+0x00001FE4u); // 8025252C
  c->r[3]=c->r[30]+0x00000014u; // 80252530
  c->lr=0x80252538u; f_8004867C(c); // 80252534
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252538
  c->r[3]=c->r[30]+0x00000014u; // 8025253C
  c->r[5]=R32(c->r[28]+0x00001FECu); // 80252540
  c->lr=0x80252548u; f_8004867C(c); // 80252544
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252548
  c->r[3]=c->r[30]+0x00000014u; // 8025254C
  c->r[5]=R32(c->r[28]+0x00001FF4u); // 80252550
  c->lr=0x80252558u; f_8004867C(c); // 80252554
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252558
  c->r[3]=c->r[30]+0x00000014u; // 8025255C
  c->r[5]=R32(c->r[28]+0x00001FFCu); // 80252560
  c->lr=0x80252568u; f_8004867C(c); // 80252564
  c->r[0]=R8(c->r[28]+0x00001FE8u); // 80252568
  cmps(c,0,(int32_t)c->r[0],0); // 8025256C
  if (!crb(c,2)) { goto L_8025258C; } // 80252570
  c->r[0]=R8(c->r[28]+0x00001FF0u); // 80252574
  cmps(c,0,(int32_t)c->r[0],0); // 80252578
  if (!crb(c,2)) { goto L_8025258C; } // 8025257C
  c->r[0]=R8(c->r[28]+0x00001FF8u); // 80252580
  cmps(c,0,(int32_t)c->r[0],0); // 80252584
  if (crb(c,2)) { goto L_80252650; } // 80252588
L_8025258C:;
  c->r[30]=0u+0x803E0000u; // 8025258C
  c->r[29]=0u+0x00000000u; // 80252590
  c->r[30]=c->r[30]+0x0000528Cu; // 80252594
  c->r[31]=0u+0x00000000u; // 80252598
L_8025259C:;
  c->r[3]=c->r[1]+0x00000008u; // 8025259C
  c->r[4]=c->r[30]+0x00000006u; // 802525A0
  c->r[5]=c->r[29]+0x00000001u; // 802525A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802525A8
  c->lr=0x802525B0u; f_80291CC4(c); // 802525AC
  c->r[6]=c->r[28]+c->r[31]; // 802525B0
  c->r[4]=R32(c->r[28]+0x00000014u); // 802525B4
  c->r[3]=c->r[28]|c->r[28]; // 802525B8
  c->r[5]=c->r[1]+0x00000008u; // 802525BC
  c->r[6]=c->r[6]+0x00001A60u; // 802525C0
  c->r[7]=0u+0xFFFFFFFFu; // 802525C4
  c->lr=0x802525CCu; f_801DA300(c); // 802525C8
  c->r[29]=c->r[29]+0x00000001u; // 802525CC
  c->r[31]=c->r[31]+0x00000174u; // 802525D0
  cmps(c,0,(int32_t)c->r[29],2); // 802525D4
  if (crb(c,0)) { IRQCHK(c); goto L_8025259C; } // 802525D8
  c->r[31]=0u+0x803E0000u; // 802525DC
  c->r[4]=R32(c->r[28]+0x00000014u); // 802525E0
  c->r[31]=c->r[31]+0x0000528Cu; // 802525E4
  c->r[3]=c->r[28]|c->r[28]; // 802525E8
  c->r[5]=c->r[31]+0x00000016u; // 802525EC
  c->r[6]=c->r[28]+0x00001EBCu; // 802525F0
  c->r[7]=0u+0xFFFFFFFFu; // 802525F4
  c->lr=0x802525FCu; f_801DA300(c); // 802525F8
  c->r[4]=R32(c->r[28]+0x00000014u); // 802525FC
  c->r[3]=c->r[28]|c->r[28]; // 80252600
  c->r[5]=c->r[31]+0x00000025u; // 80252604
  c->r[6]=c->r[28]+0x00001D48u; // 80252608
  c->r[7]=0u+0xFFFFFFFFu; // 8025260C
  c->lr=0x80252614u; f_801DA300(c); // 80252610
  c->r[0]=R8(c->r[28]+0x0000110Cu); // 80252614
  c->r[3]=sraw(c,c->r[0],4); // 80252618
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8025261C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)5); // 80252620
  c->r[3]=c->r[28]+c->r[3]; // 80252624
  c->r[3]=c->r[3]+c->r[0]; // 80252628
  c->r[0]=R8(c->r[3]+0x00000FF8u); // 8025262C
  cmpu(c,0,c->r[0],0x00000002u); // 80252630
  if (!crb(c,2)) { goto L_80252650; } // 80252634
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252638
  c->r[3]=c->r[28]|c->r[28]; // 8025263C
  c->r[5]=c->r[31]+0x00000035u; // 80252640
  c->r[6]=c->r[28]+0x00001BD4u; // 80252644
  c->r[7]=0u+0xFFFFFFFFu; // 80252648
  c->lr=0x80252650u; f_801DA300(c); // 8025264C
L_80252650:;
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80252650
  c->r[0]=R32(c->r[1]+0x00000034u); // 80252654
  c->lr=c->r[0]; // 80252658
  c->r[1]=c->r[1]+0x00000030u; // 8025265C
  return; // 80252660
}

// fn_80252664
void f_80252664(Ctx* __restrict c) {
  trace_call(0x80252664u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252664
  c->r[0]=c->lr; // 80252668
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025266C
  c->r[11]=c->r[1]+0x00000030u; // 80252670
  c->lr=0x80252678u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80252674
  c->r[31]=c->r[3]|c->r[3]; // 80252678
  c->lr=0x80252680u; f_802324FC(c); // 8025267C
  c->lr=0x80252684u; f_80232508(c); // 80252680
  c->lr=0x80252688u; f_802324FC(c); // 80252684
  c->r[4]=0u+0x00000001u; // 80252688
  c->lr=0x80252690u; f_802327C0(c); // 8025268C
  c->lr=0x80252694u; f_802324FC(c); // 80252690
  {uint32_t ea=c->r[2]+0xFFFFD9C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80252694
  c->lr=0x8025269Cu; f_8023283C(c); // 80252698
  c->lr=0x802526A0u; f_802324FC(c); // 8025269C
  c->r[4]=0u+0x00000001u; // 802526A0
  c->lr=0x802526A8u; f_80233080(c); // 802526A4
  c->r[0]=R8(c->r[31]+0x0000026Fu); // 802526A8
  c->r[0]=sraw(c,c->r[0],4); // 802526AC
  cmpu(c,0,c->r[0],0x00000001u); // 802526B0
  if (crb(c,0)) { goto L_802526C4; } // 802526B4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 802526B8
  cmpu(c,0,c->r[0],0x00000003u); // 802526BC
  if (!crb(c,1)) { goto L_802526D0; } // 802526C0
L_802526C4:;
  c->r[0]=R32(c->r[31]+0x00000FF0u); // 802526C4
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 802526C8
  if (crb(c,2)) { goto L_8025277C; } // 802526CC
L_802526D0:;
  c->lr=0x802526D4u; f_802324FC(c); // 802526D0
  c->r[4]=0u+0x00000021u; // 802526D4
  c->lr=0x802526DCu; f_80232818(c); // 802526D8
  c->r[26]=0u+0x00000000u; // 802526DC
  c->r[30]=0u+0x00000000u; // 802526E0
L_802526E4:;
  c->r[27]=c->r[31]+c->r[30]; // 802526E4
  c->lr=0x802526ECu; f_802324FC(c); // 802526E8
  c->r[4]=R32(c->r[27]+0x000011B4u); // 802526EC
  c->lr=0x802526F4u; f_802327C8(c); // 802526F0
  c->lr=0x802526F8u; f_802324FC(c); // 802526F4
  c->r[4]=c->r[27]|c->r[27]; // 802526F8
  c->r[4]=c->r[4]+0x000011A8u; // 802526FC
  c->lr=0x80252704u; f_80232804(c); // 80252700
  c->lr=0x80252708u; f_802324FC(c); // 80252704
  c->r[4]=R32(c->r[27]+0x000011C4u); // 80252708
  c->lr=0x80252710u; f_80232820(c); // 8025270C
  c->lr=0x80252714u; f_802324FC(c); // 80252710
  c->r[4]=R32(c->r[27]+0x000011B8u); // 80252714
  c->lr=0x8025271Cu; f_802327FC(c); // 80252718
  c->lr=0x80252720u; f_802324FC(c); // 8025271C
  {uint32_t ea=c->r[27]+0x000011BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80252720
  c->lr=0x80252728u; f_80232844(c); // 80252724
  c->r[3]=c->r[27]|c->r[27]; // 80252728
  c->r[25]=0u+0x00000000u; // 8025272C
  c->r[28]=c->r[3]+0x000011C8u; // 80252730
  c->r[29]=0u+0x00000000u; // 80252734
  goto L_80252760; // 80252738
L_8025273C:;
  c->lr=0x80252740u; f_802324FC(c); // 8025273C
  c->r[4]=c->r[27]+c->r[29]; // 80252740
  c->r[6]=R32(c->r[27]+0x000012C8u); // 80252744
  c->r[4]=R32(c->r[4]+0x00001164u); // 80252748
  c->r[5]=c->r[28]|c->r[28]; // 8025274C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252750
  c->lr=0x80252758u; f_80232C04(c); // 80252754
  c->r[25]=c->r[25]+0x00000001u; // 80252758
  c->r[29]=c->r[29]+0x00000004u; // 8025275C
L_80252760:;
  c->r[0]=R32(c->r[27]+0x00001160u); // 80252760
  cmpu(c,0,c->r[25],c->r[0]); // 80252764
  if (crb(c,0)) { IRQCHK(c); goto L_8025273C; } // 80252768
  c->r[26]=c->r[26]+0x00000001u; // 8025276C
  c->r[30]=c->r[30]+0x00000174u; // 80252770
  cmps(c,0,(int32_t)c->r[26],2); // 80252774
  if (crb(c,0)) { IRQCHK(c); goto L_802526E4; } // 80252778
L_8025277C:;
  c->r[0]=R32(c->r[31]+0x00000FF0u); // 8025277C
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 80252780
  if (crb(c,2)) { goto L_802527E4; } // 80252784
  c->r[29]=0u+0x80590000u; // 80252788
  c->r[4]=0u+0x00000000u; // 8025278C
  c->r[3]=c->r[29]+0x000063F0u; // 80252790
  c->r[5]=0u+0x00000001u; // 80252794
  c->lr=0x8025279Cu; f_801FA2A8(c); // 80252798
  c->r[3]=c->r[29]+0x000063F0u; // 8025279C
  c->r[4]=0u+0x00000000u; // 802527A0
  c->lr=0x802527A8u; f_801F95A4(c); // 802527A4
  c->r[3]=c->r[29]+0x000063F0u; // 802527A8
  c->r[4]=0u+0x00000000u; // 802527AC
  c->r[5]=0u+0x00000000u; // 802527B0
  c->lr=0x802527B8u; f_801FA2A8(c); // 802527B4
  c->r[30]=0u+0x803E0000u; // 802527B8
  c->r[29]=0u+0x80460000u; // 802527BC
  c->r[30]=c->r[30]+0x0000528Cu; // 802527C0
  c->r[4]=R32(c->r[31]+0x00000014u); // 802527C4
  c->r[5]=c->r[30]+0x00000046u; // 802527C8
  c->r[3]=c->r[29]+0xFFFFD468u; // 802527CC
  c->lr=0x802527D4u; f_80047E30(c); // 802527D0
  c->r[4]=R32(c->r[31]+0x00000014u); // 802527D4
  c->r[5]=c->r[30]+0x0000004Du; // 802527D8
  c->r[3]=c->r[29]+0xFFFFD468u; // 802527DC
  c->lr=0x802527E4u; f_80047E30(c); // 802527E0
L_802527E4:;
  c->r[0]=R8(c->r[31]+0x0000026Fu); // 802527E4
  c->r[0]=sraw(c,c->r[0],4); // 802527E8
  cmpu(c,0,c->r[0],0x00000001u); // 802527EC
  if (crb(c,0)) { goto L_80252800; } // 802527F0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 802527F4
  cmpu(c,0,c->r[0],0x00000003u); // 802527F8
  if (!crb(c,1)) { goto L_8025280C; } // 802527FC
L_80252800:;
  c->r[0]=R32(c->r[31]+0x00000FF0u); // 80252800
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 80252804
  if (crb(c,2)) { goto L_802528AC; } // 80252808
L_8025280C:;
  c->lr=0x80252810u; f_802324FC(c); // 8025280C
  c->r[4]=0u+0x00000021u; // 80252810
  c->lr=0x80252818u; f_80232818(c); // 80252814
  c->r[25]=0u+0x00000000u; // 80252818
  c->r[30]=0u+0x00000000u; // 8025281C
L_80252820:;
  c->r[27]=c->r[31]+c->r[30]; // 80252820
  c->lr=0x80252828u; f_802324FC(c); // 80252824
  c->r[4]=R32(c->r[27]+0x0000149Cu); // 80252828
  c->lr=0x80252830u; f_802327C8(c); // 8025282C
  c->lr=0x80252834u; f_802324FC(c); // 80252830
  c->r[4]=c->r[27]|c->r[27]; // 80252834
  c->r[4]=c->r[4]+0x00001490u; // 80252838
  c->lr=0x80252840u; f_80232804(c); // 8025283C
  c->lr=0x80252844u; f_802324FC(c); // 80252840
  c->r[4]=R32(c->r[27]+0x000014ACu); // 80252844
  c->lr=0x8025284Cu; f_80232820(c); // 80252848
  c->lr=0x80252850u; f_802324FC(c); // 8025284C
  c->r[4]=R32(c->r[27]+0x000014A0u); // 80252850
  c->lr=0x80252858u; f_802327FC(c); // 80252854
  c->lr=0x8025285Cu; f_802324FC(c); // 80252858
  {uint32_t ea=c->r[27]+0x000014A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025285C
  c->lr=0x80252864u; f_80232844(c); // 80252860
  cmps(c,0,(int32_t)c->r[25],3); // 80252864
  if (!crb(c,2)) { goto L_80252888; } // 80252868
  c->lr=0x80252870u; f_802324FC(c); // 8025286C
  c->r[5]=c->r[27]|c->r[27]; // 80252870
  c->r[4]=R32(c->r[27]+0x0000144Cu); // 80252874
  c->r[5]=c->r[5]+0x000014B0u; // 80252878
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025287C
  c->lr=0x80252884u; f_80232C04(c); // 80252880
  goto L_8025289C; // 80252884
L_80252888:;
  c->lr=0x8025288Cu; f_802324FC(c); // 80252888
  c->r[4]=R32(c->r[27]+0x0000144Cu); // 8025288C
  c->r[5]=R32(c->r[27]+0x000015B0u); // 80252890
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252894
  c->lr=0x8025289Cu; f_80232C04(c); // 80252898
L_8025289C:;
  c->r[25]=c->r[25]+0x00000001u; // 8025289C
  c->r[30]=c->r[30]+0x00000174u; // 802528A0
  cmps(c,0,(int32_t)c->r[25],4); // 802528A4
  if (crb(c,0)) { IRQCHK(c); goto L_80252820; } // 802528A8
L_802528AC:;
  c->r[5]=0u+0x803E0000u; // 802528AC
  c->r[3]=0u+0x80460000u; // 802528B0
  c->r[5]=c->r[5]+0x0000528Cu; // 802528B4
  c->r[4]=R32(c->r[31]+0x00000014u); // 802528B8
  c->r[5]=c->r[5]+0x00000057u; // 802528BC
  c->r[3]=c->r[3]+0xFFFFD468u; // 802528C0
  c->lr=0x802528C8u; f_80047E30(c); // 802528C4
  c->lr=0x802528CCu; f_802324FC(c); // 802528C8
  c->r[4]=0u+0x00000021u; // 802528CC
  c->lr=0x802528D4u; f_80232818(c); // 802528D0
  c->lr=0x802528D8u; f_802324FC(c); // 802528D4
  c->r[4]=R32(c->r[31]+0x00001EC8u); // 802528D8
  c->lr=0x802528E0u; f_802327C8(c); // 802528DC
  c->lr=0x802528E4u; f_802324FC(c); // 802528E0
  c->r[4]=c->r[31]+0x00001EBCu; // 802528E4
  c->lr=0x802528ECu; f_80232804(c); // 802528E8
  c->lr=0x802528F0u; f_802324FC(c); // 802528EC
  c->r[4]=R32(c->r[31]+0x00001ED8u); // 802528F0
  c->lr=0x802528F8u; f_80232820(c); // 802528F4
  c->lr=0x802528FCu; f_802324FC(c); // 802528F8
  c->r[4]=R32(c->r[31]+0x00001ECCu); // 802528FC
  c->lr=0x80252904u; f_802327FC(c); // 80252900
  c->lr=0x80252908u; f_802324FC(c); // 80252904
  {uint32_t ea=c->r[31]+0x00001ED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80252908
  c->lr=0x80252910u; f_80232844(c); // 8025290C
  c->lr=0x80252914u; f_802324FC(c); // 80252910
  c->r[4]=R32(c->r[31]+0x00001E78u); // 80252914
  c->r[5]=R32(c->r[31]+0x00001FDCu); // 80252918
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025291C
  c->lr=0x80252924u; f_80232C04(c); // 80252920
  c->r[0]=R32(c->r[31]+0x00000FF0u); // 80252924
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 80252928
  if (crb(c,2)) { goto L_802529C4; } // 8025292C
  c->lr=0x80252934u; f_802324FC(c); // 80252930
  c->r[4]=0u+0x00000030u; // 80252934
  c->lr=0x8025293Cu; f_80232818(c); // 80252938
  c->r[25]=0u+0x00000000u; // 8025293C
  c->r[30]=0u+0x00000000u; // 80252940
L_80252944:;
  cmps(c,0,(int32_t)c->r[25],2); // 80252944
  if (!crb(c,2)) { goto L_80252958; } // 80252948
  c->r[0]=R8(c->r[31]+0x00000011u); // 8025294C
  cmps(c,0,(int32_t)c->r[0],0); // 80252950
  if (!crb(c,2)) { goto L_802529B4; } // 80252954
L_80252958:;
  c->r[27]=c->r[31]+c->r[30]; // 80252958
  c->lr=0x80252960u; f_802324FC(c); // 8025295C
  c->r[4]=R32(c->r[27]+0x00001A6Cu); // 80252960
  c->lr=0x80252968u; f_802327C8(c); // 80252964
  c->lr=0x8025296Cu; f_802324FC(c); // 80252968
  c->r[4]=c->r[27]|c->r[27]; // 8025296C
  c->r[4]=c->r[4]+0x00001A60u; // 80252970
  c->lr=0x80252978u; f_80232804(c); // 80252974
  c->lr=0x8025297Cu; f_802324FC(c); // 80252978
  c->r[4]=R32(c->r[27]+0x00001A7Cu); // 8025297C
  c->lr=0x80252984u; f_80232820(c); // 80252980
  c->lr=0x80252988u; f_802324FC(c); // 80252984
  c->r[4]=R32(c->r[27]+0x00001A70u); // 80252988
  c->lr=0x80252990u; f_802327FC(c); // 8025298C
  c->lr=0x80252994u; f_802324FC(c); // 80252990
  {uint32_t ea=c->r[27]+0x00001A74u; c->f[1]=c->ps1[1]=RF32(ea);} // 80252994
  c->lr=0x8025299Cu; f_80232844(c); // 80252998
  c->lr=0x802529A0u; f_802324FC(c); // 8025299C
  c->r[4]=R32(c->r[27]+0x00001A1Cu); // 802529A0
  c->r[5]=R32(c->r[27]+0x00001B80u); // 802529A4
  c->r[6]=R32(c->r[27]+0x00001B84u); // 802529A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802529AC
  c->lr=0x802529B4u; f_80232C04(c); // 802529B0
L_802529B4:;
  c->r[25]=c->r[25]+0x00000001u; // 802529B4
  c->r[30]=c->r[30]+0x00000174u; // 802529B8
  cmps(c,0,(int32_t)c->r[25],3); // 802529BC
  if (crb(c,0)) { IRQCHK(c); goto L_80252944; } // 802529C0
L_802529C4:;
  c->r[3]=R32(c->r[31]+0x00000FF0u); // 802529C4
  c->r[0]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[0]); // 802529C8
  if (crb(c,2)) { goto L_802529F0; } // 802529CC
  cmps(c,0,(int32_t)c->r[3],2049); // 802529D0
  if (!crb(c,1)) { goto L_802529F0; } // 802529D4
  cmps(c,0,(int32_t)c->r[3],2052); // 802529D8
  if (!crb(c,0)) { goto L_802529F0; } // 802529DC
  c->r[3]=0u+0x80590000u; // 802529E0
  c->r[4]=0u+0x00000001u; // 802529E4
  c->r[3]=c->r[3]+0x000063F0u; // 802529E8
  c->lr=0x802529F0u; f_801F95A4(c); // 802529EC
L_802529F0:;
  c->r[11]=c->r[1]+0x00000030u; // 802529F0
  c->lr=0x802529F8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802529F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802529F8
  c->lr=c->r[0]; // 802529FC
  c->r[1]=c->r[1]+0x00000030u; // 80252A00
  return; // 80252A04
}

// fn_80252A08
void f_80252A08(Ctx* __restrict c) {
  trace_call(0x80252A08u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252A08
  c->r[0]=c->lr; // 80252A0C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80252A10
  {uint32_t ea=c->r[1]+0x00000084u; for(int i=21;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80252A14
  c->r[21]=0u+0x805E0000u; // 80252A18
  c->r[30]=c->r[3]|c->r[3]; // 80252A1C
  c->r[3]=c->r[21]+0xFFFFD790u; // 80252A20
  c->lr=0x80252A28u; f_80241AA8(c); // 80252A24
  c->r[22]=0u+0x00000000u; // 80252A28
  c->r[4]=c->r[21]+0xFFFFD790u; // 80252A2C
  c->r[0]=0u+0x00000001u; // 80252A30
  W32(c->r[1]+0x00000010u,c->r[22]); // 80252A34
  c->r[3]=c->r[1]+0x00000010u; // 80252A38
  W8(c->r[4]+0x00000058u,c->r[0]); // 80252A3C
  W8(c->r[4]+0x00000059u,c->r[0]); // 80252A40
  W32(c->r[1]+0x00000014u,c->r[22]); // 80252A44
  c->lr=0x80252A4Cu; f_801D3FB0(c); // 80252A48
  c->r[3]=0u+0x803E0000u; // 80252A4C
  c->r[23]=0u+0x00000000u; // 80252A50
  c->r[21]=c->r[3]+0x0000528Cu; // 80252A54
L_80252A58:;
  cmps(c,0,(int32_t)c->r[23],0); // 80252A58
  if (!crb(c,2)) { goto L_80252A74; } // 80252A5C
  c->r[3]=c->r[1]+0x00000062u; // 80252A60
  c->r[4]=c->r[21]+0x00000063u; // 80252A64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252A68
  c->lr=0x80252A70u; f_80291CC4(c); // 80252A6C
  goto L_80252A84; // 80252A70
L_80252A74:;
  c->r[3]=c->r[1]+0x00000062u; // 80252A74
  c->r[4]=c->r[21]+0x0000006Fu; // 80252A78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252A7C
  c->lr=0x80252A84u; f_80291CC4(c); // 80252A80
L_80252A84:;
  c->r[6]=c->r[30]+c->r[22]; // 80252A84
  c->r[4]=R32(c->r[30]+0x00000014u); // 80252A88
  c->r[3]=c->r[30]|c->r[30]; // 80252A8C
  c->r[5]=c->r[1]+0x00000062u; // 80252A90
  c->r[6]=c->r[6]+0x000011A8u; // 80252A94
  c->r[7]=0u+0xFFFFFFFFu; // 80252A98
  c->lr=0x80252AA0u; f_801DA518(c); // 80252A9C
  c->r[23]=c->r[23]+0x00000001u; // 80252AA0
  c->r[22]=c->r[22]+0x00000174u; // 80252AA4
  cmps(c,0,(int32_t)c->r[23],2); // 80252AA8
  if (crb(c,0)) { IRQCHK(c); goto L_80252A58; } // 80252AAC
  c->r[21]=0u+0x803E0000u; // 80252AB0
  c->r[22]=0u+0x00000000u; // 80252AB4
  c->r[21]=c->r[21]+0x0000528Cu; // 80252AB8
  c->r[31]=0u+0x00000000u; // 80252ABC
L_80252AC0:;
  c->r[3]=c->r[1]+0x00000052u; // 80252AC0
  c->r[4]=c->r[21]+0x0000007Eu; // 80252AC4
  c->r[5]=c->r[22]+0x00000001u; // 80252AC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252ACC
  c->lr=0x80252AD4u; f_80291CC4(c); // 80252AD0
  c->r[6]=c->r[30]+c->r[31]; // 80252AD4
  c->r[4]=R32(c->r[30]+0x00000014u); // 80252AD8
  c->r[3]=c->r[30]|c->r[30]; // 80252ADC
  c->r[5]=c->r[1]+0x00000052u; // 80252AE0
  c->r[6]=c->r[6]+0x00001490u; // 80252AE4
  c->r[7]=0u+0xFFFFFFFFu; // 80252AE8
  c->lr=0x80252AF0u; f_801DA518(c); // 80252AEC
  c->r[22]=c->r[22]+0x00000001u; // 80252AF0
  c->r[31]=c->r[31]+0x00000174u; // 80252AF4
  cmps(c,0,(int32_t)c->r[22],4); // 80252AF8
  if (crb(c,0)) { IRQCHK(c); goto L_80252AC0; } // 80252AFC
  c->r[24]=0u+0x80460000u; // 80252B00
  c->r[25]=0u+0x803E0000u; // 80252B04
  c->r[23]=c->r[24]+0xFFFFD468u; // 80252B08
  c->r[31]=0u+0x00000005u; // 80252B0C
  c->r[25]=c->r[25]+0x0000528Cu; // 80252B10
  c->r[21]=0u+0x00000000u; // 80252B14
  c->r[22]=0u+0x00000001u; // 80252B18
L_80252B1C:;
  c->r[3]=c->r[30]|c->r[30]; // 80252B1C
  c->r[4]=c->r[31]|c->r[31]; // 80252B20
  c->r[5]=c->r[1]+0x00000009u; // 80252B24
  c->r[6]=c->r[1]+0x00000008u; // 80252B28
  c->lr=0x80252B30u; f_80254718(c); // 80252B2C
  c->r[5]=R8(c->r[1]+0x00000008u); // 80252B30
  c->r[3]=c->r[1]+0x0000000Au; // 80252B34
  c->r[6]=R8(c->r[1]+0x00000009u); // 80252B38
  c->r[4]=c->r[25]+0x00000090u; // 80252B3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252B40
  c->lr=0x80252B48u; f_80291CC4(c); // 80252B44
  c->r[3]=c->r[1]+0x00000042u; // 80252B48
  c->r[4]=c->r[25]+0x00000095u; // 80252B4C
  c->r[5]=c->r[1]+0x0000000Au; // 80252B50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252B54
  c->lr=0x80252B5Cu; f_80291CC4(c); // 80252B58
  c->r[3]=c->r[1]+0x00000032u; // 80252B5C
  c->r[4]=c->r[25]+0x0000009Cu; // 80252B60
  c->r[5]=c->r[1]+0x0000000Au; // 80252B64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252B68
  c->lr=0x80252B70u; f_80291CC4(c); // 80252B6C
  c->r[3]=c->r[31]|c->r[31]; // 80252B70
  c->lr=0x80252B78u; f_801D3788(c); // 80252B74
  cmps(c,0,(int32_t)c->r[3],0); // 80252B78
  if (crb(c,2)) { goto L_80252C50; } // 80252B7C
  c->r[3]=c->r[31]|c->r[31]; // 80252B80
  c->lr=0x80252B88u; f_801D3724(c); // 80252B84
  c->r[6]=c->r[3]|c->r[3]; // 80252B88
  c->r[3]=c->r[1]+0x00000028u; // 80252B8C
  c->r[4]=0u+0x00000005u; // 80252B90
  c->r[5]=c->r[13]+0xFFFF8D88u; // 80252B94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252B98
  c->lr=0x80252BA0u; f_80298080(c); // 80252B9C
  c->r[5]=R32(c->r[30]+0x00000014u); // 80252BA0
  c->r[3]=c->r[24]+0xFFFFD468u; // 80252BA4
  c->r[6]=c->r[1]+0x0000000Au; // 80252BA8
  c->r[4]=0u+0x00000001u; // 80252BAC
  c->lr=0x80252BB4u; f_8014A80C(c); // 80252BB0
  c->r[4]=R32(c->r[30]+0x00000014u); // 80252BB4
  cmps(c,0,(int32_t)c->r[4],0); // 80252BB8
  if (!crb(c,0)) { goto L_80252BC8; } // 80252BBC
  c->r[26]=0u+0x00000000u; // 80252BC0
  goto L_80252C10; // 80252BC4
L_80252BC8:;
  c->r[3]=R32(c->r[23]+0x0000002Cu); // 80252BC8
  c->r[5]=c->r[1]+0x00000032u; // 80252BCC
  c->lr=0x80252BD4u; f_800482D4(c); // 80252BD0
  cmps(c,0,(int32_t)c->r[3],0); // 80252BD4
  c->r[26]=c->r[3]|c->r[3]; // 80252BD8
  if (!crb(c,2)) { goto L_80252BE8; } // 80252BDC
  c->r[26]=0u+0x00000000u; // 80252BE0
  goto L_80252C10; // 80252BE4
L_80252BE8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80252BE8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80252BEC
  c->ctr=c->r[12]; // 80252BF0
  if (true) { c->lr=0x80252BF8u; dispatch(c,c->ctr); } // 80252BF4
  c->r[4]=c->r[13]+0xFFFF9FA8u; // 80252BF8
  c->lr=0x80252C00u; f_8015687C(c); // 80252BFC
  cmps(c,0,(int32_t)c->r[3],0); // 80252C00
  if (crb(c,2)) { goto L_80252C0C; } // 80252C04
  goto L_80252C10; // 80252C08
L_80252C0C:;
  c->r[26]=0u+0x00000000u; // 80252C0C
L_80252C10:;
  cmps(c,0,(int32_t)c->r[26],0); // 80252C10
  if (crb(c,2)) { goto L_80252C34; } // 80252C14
  c->r[12]=R32(c->r[26]+0x00000000u); // 80252C18
  c->r[3]=c->r[26]|c->r[26]; // 80252C1C
  c->r[4]=c->r[1]+0x00000028u; // 80252C20
  c->r[5]=0u+0x00000000u; // 80252C24
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 80252C28
  c->ctr=c->r[12]; // 80252C2C
  if (true) { c->lr=0x80252C34u; dispatch(c,c->ctr); } // 80252C30
L_80252C34:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 80252C34
  c->r[3]=R8(c->r[1]+0x00000009u); // 80252C38
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80252C3C
  c->r[0]=c->r[30]+c->r[0]; // 80252C40
  c->r[3]=c->r[3]+c->r[0]; // 80252C44
  W8(c->r[3]+0x00000270u,c->r[22]); // 80252C48
  goto L_80252C7C; // 80252C4C
L_80252C50:;
  c->r[5]=R32(c->r[30]+0x00000014u); // 80252C50
  c->r[3]=c->r[24]+0xFFFFD468u; // 80252C54
  c->r[6]=c->r[1]+0x0000000Au; // 80252C58
  c->r[4]=0u+0x00000000u; // 80252C5C
  c->lr=0x80252C64u; f_8014A80C(c); // 80252C60
  c->r[0]=R8(c->r[1]+0x00000008u); // 80252C64
  c->r[3]=R8(c->r[1]+0x00000009u); // 80252C68
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80252C6C
  c->r[0]=c->r[30]+c->r[0]; // 80252C70
  c->r[3]=c->r[3]+c->r[0]; // 80252C74
  W8(c->r[3]+0x00000270u,c->r[21]); // 80252C78
L_80252C7C:;
  c->r[31]=c->r[31]+0x00000001u; // 80252C7C
  cmps(c,0,(int32_t)c->r[31],20); // 80252C80
  if (crb(c,0)) { IRQCHK(c); goto L_80252B1C; } // 80252C84
  c->r[0]=0u+0x00000000u; // 80252C88
  W8(c->r[30]+0x00001114u,c->r[0]); // 80252C8C
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80252C90
  c->lr=0x80252C98u; f_801F8B2C(c); // 80252C94
  W32(c->r[30]+0x0000111Cu,c->r[3]); // 80252C98
  c->r[21]=0u+0x00000000u; // 80252C9C
  c->r[31]=0u+0x00000000u; // 80252CA0
L_80252CA4:;
  c->r[3]=c->r[21]+0x00000005u; // 80252CA4
  c->lr=0x80252CACu; f_801D4450(c); // 80252CA8
  c->r[4]=c->r[3]|c->r[3]; // 80252CAC
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80252CB0
  c->lr=0x80252CB8u; f_801F8B60(c); // 80252CB4
  c->r[21]=c->r[21]+0x00000001u; // 80252CB8
  c->r[4]=c->r[30]+c->r[31]; // 80252CBC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80252CC0
  c->r[31]=c->r[31]+0x00000004u; // 80252CC4
  cmps(c,0,(int32_t)c->r[21],15); // 80252CC8
  W32(c->r[4]+0x00001120u,c->r[0]); // 80252CCC
  if (crb(c,0)) { IRQCHK(c); goto L_80252CA4; } // 80252CD0
  c->r[3]=c->r[30]|c->r[30]; // 80252CD4
  c->lr=0x80252CDCu; f_8025477C(c); // 80252CD8
  cmps(c,0,(int32_t)c->r[3],0); // 80252CDC
  if (crb(c,2)) { goto L_80252CF0; } // 80252CE0
  c->r[0]=0u+0x00000001u; // 80252CE4
  W8(c->r[30]+0x00001114u,c->r[0]); // 80252CE8
  goto L_80252CF8; // 80252CEC
L_80252CF0:;
  c->r[0]=0u+0x00000000u; // 80252CF0
  W8(c->r[30]+0x00001114u,c->r[0]); // 80252CF4
L_80252CF8:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80252CF8
  c->lr=0x80252D00u; f_801F8B2C(c); // 80252CFC
  W32(c->r[30]+0x00001FDCu,c->r[3]); // 80252D00
  c->r[3]=c->r[30]|c->r[30]; // 80252D04
  c->lr=0x80252D0Cu; f_80253D64(c); // 80252D08
  c->r[21]=0u+0x803E0000u; // 80252D0C
  {uint32_t ea=c->r[21]+0x00005270u; c->r[22]=R8(ea); c->r[21]=ea;} // 80252D10
  c->r[3]=c->r[30]|c->r[30]; // 80252D14
  c->r[5]=c->r[1]+0x00000018u; // 80252D18
  c->r[23]=R8(c->r[21]+0x00000001u); // 80252D1C
  c->r[6]=c->r[30]+0x00001EBCu; // 80252D20
  c->r[24]=R8(c->r[21]+0x00000002u); // 80252D24
  c->r[7]=0u+0xFFFFFFFFu; // 80252D28
  c->r[25]=R8(c->r[21]+0x00000003u); // 80252D2C
  c->r[26]=R8(c->r[21]+0x00000004u); // 80252D30
  c->r[27]=R8(c->r[21]+0x00000005u); // 80252D34
  c->r[28]=R8(c->r[21]+0x00000006u); // 80252D38
  c->r[29]=R8(c->r[21]+0x00000007u); // 80252D3C
  c->r[31]=R8(c->r[21]+0x00000008u); // 80252D40
  c->r[12]=R8(c->r[21]+0x00000009u); // 80252D44
  c->r[11]=R8(c->r[21]+0x0000000Au); // 80252D48
  c->r[10]=R8(c->r[21]+0x0000000Bu); // 80252D4C
  c->r[9]=R8(c->r[21]+0x0000000Cu); // 80252D50
  c->r[8]=R8(c->r[21]+0x0000000Du); // 80252D54
  c->r[4]=R8(c->r[21]+0x0000000Eu); // 80252D58
  c->r[0]=R8(c->r[21]+0x0000000Fu); // 80252D5C
  W8(c->r[1]+0x00000018u,c->r[22]); // 80252D60
  W8(c->r[1]+0x00000019u,c->r[23]); // 80252D64
  W8(c->r[1]+0x0000001Au,c->r[24]); // 80252D68
  W8(c->r[1]+0x0000001Bu,c->r[25]); // 80252D6C
  W8(c->r[1]+0x0000001Cu,c->r[26]); // 80252D70
  W8(c->r[1]+0x0000001Du,c->r[27]); // 80252D74
  W8(c->r[1]+0x0000001Eu,c->r[28]); // 80252D78
  W8(c->r[1]+0x0000001Fu,c->r[29]); // 80252D7C
  W8(c->r[1]+0x00000020u,c->r[31]); // 80252D80
  W8(c->r[1]+0x00000021u,c->r[12]); // 80252D84
  W8(c->r[1]+0x00000022u,c->r[11]); // 80252D88
  W8(c->r[1]+0x00000023u,c->r[10]); // 80252D8C
  W8(c->r[1]+0x00000024u,c->r[9]); // 80252D90
  W8(c->r[1]+0x00000025u,c->r[8]); // 80252D94
  W8(c->r[1]+0x00000026u,c->r[4]); // 80252D98
  W8(c->r[1]+0x00000027u,c->r[0]); // 80252D9C
  c->r[4]=R32(c->r[30]+0x00000014u); // 80252DA0
  c->lr=0x80252DA8u; f_801DA518(c); // 80252DA4
  c->r[3]=c->r[30]|c->r[30]; // 80252DA8
  c->r[4]=c->r[1]+0x00000018u; // 80252DAC
  c->lr=0x80252DB4u; f_801DA490(c); // 80252DB0
  c->r[4]=c->r[3]|c->r[3]; // 80252DB4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80252DB8
  c->r[5]=c->r[30]+0x00001E70u; // 80252DBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80252DC0
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80252DC4
  c->ctr=c->r[12]; // 80252DC8
  if (true) { c->lr=0x80252DD0u; dispatch(c,c->ctr); } // 80252DCC
  c->r[5]=0u+0x803E0000u; // 80252DD0
  c->r[4]=R32(c->r[30]+0x00000014u); // 80252DD4
  c->r[5]=c->r[5]+0x0000528Cu; // 80252DD8
  c->r[3]=c->r[30]|c->r[30]; // 80252DDC
  c->r[5]=c->r[5]+0x00000016u; // 80252DE0
  c->r[6]=c->r[30]+0x00001EBCu; // 80252DE4
  c->r[7]=0u+0xFFFFFFFFu; // 80252DE8
  c->lr=0x80252DF0u; f_801DA300(c); // 80252DEC
  c->r[3]=0u+0x00000000u; // 80252DF0
  c->r[0]=0u+0x00000400u; // 80252DF4
  W8(c->r[30]+0x00000270u,c->r[3]); // 80252DF8
  W8(c->r[30]+0x000002C0u,c->r[3]); // 80252DFC
  W8(c->r[30]+0x000002C1u,c->r[3]); // 80252E00
  W32(c->r[30]+0x00000FF0u,c->r[0]); // 80252E04
  W8(c->r[30]+0x00001118u,c->r[3]); // 80252E08
  {uint32_t ea=c->r[1]+0x00000084u; for(int i=21;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80252E0C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80252E10
  c->lr=c->r[0]; // 80252E14
  c->r[1]=c->r[1]+0x000000B0u; // 80252E18
  return; // 80252E1C
}

// fn_80252E20
void f_80252E20(Ctx* __restrict c) {
  trace_call(0x80252E20u);
  c->r[3]=0u+0x805E0000u; // 80252E20
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80252E24
  c->r[3]=c->r[3]+0xFFFFD790u; // 80252E28
  c->r[4]=0u+0x00000000u; // 80252E2C
  f_80241F3C(c); return; // 80252E30
}

// fn_80252E34
void f_80252E34(Ctx* __restrict c) {
  trace_call(0x80252E34u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80252E34
  c->r[0]=c->lr; // 80252E38
  c->r[4]=0u+0x803E0000u; // 80252E3C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80252E40
  {uint32_t ea=c->r[1]+0x000000A0u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80252E44
  c->r[28]=c->r[3]|c->r[3]; // 80252E48
  c->r[30]=c->r[4]+0x0000528Cu; // 80252E4C
  c->r[3]=c->r[1]+0x00000020u; // 80252E50
  c->r[4]=c->r[30]+0x000000A2u; // 80252E54
  c->r[5]=c->r[28]+0x00000018u; // 80252E58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252E5C
  c->lr=0x80252E64u; f_80291CC4(c); // 80252E60
  c->r[31]=0u+0x80460000u; // 80252E64
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252E68
  c->r[31]=c->r[31]+0xFFFFD468u; // 80252E6C
  c->r[5]=c->r[30]+0x00000046u; // 80252E70
  c->r[3]=c->r[31]+0x00000014u; // 80252E74
  c->r[6]=c->r[1]+0x00000020u; // 80252E78
  c->lr=0x80252E80u; f_80048384(c); // 80252E7C
  W32(c->r[28]+0x00001FE4u,c->r[3]); // 80252E80
  c->r[5]=c->r[3]|c->r[3]; // 80252E84
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252E88
  c->r[3]=c->r[31]|c->r[31]; // 80252E8C
  c->lr=0x80252E94u; f_8014AC10(c); // 80252E90
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252E94
  c->r[3]=c->r[31]|c->r[31]; // 80252E98
  c->r[5]=R32(c->r[28]+0x00001FE4u); // 80252E9C
  c->r[6]=0u+0x00000000u; // 80252EA0
  c->lr=0x80252EA8u; f_8014A860(c); // 80252EA4
  c->r[3]=c->r[1]+0x00000020u; // 80252EA8
  c->r[4]=c->r[30]+0x000000B4u; // 80252EAC
  c->r[5]=c->r[28]+0x00000018u; // 80252EB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252EB4
  c->lr=0x80252EBCu; f_80291CC4(c); // 80252EB8
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252EBC
  c->r[5]=c->r[30]+0x00000046u; // 80252EC0
  c->r[3]=c->r[31]+0x00000014u; // 80252EC4
  c->r[6]=c->r[1]+0x00000020u; // 80252EC8
  c->lr=0x80252ED0u; f_80048384(c); // 80252ECC
  W32(c->r[28]+0x00001FECu,c->r[3]); // 80252ED0
  c->r[5]=c->r[3]|c->r[3]; // 80252ED4
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252ED8
  c->r[3]=c->r[31]|c->r[31]; // 80252EDC
  c->lr=0x80252EE4u; f_8014AC10(c); // 80252EE0
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252EE4
  c->r[3]=c->r[31]|c->r[31]; // 80252EE8
  c->r[5]=R32(c->r[28]+0x00001FECu); // 80252EEC
  c->r[6]=0u+0x00000000u; // 80252EF0
  c->lr=0x80252EF8u; f_8014A860(c); // 80252EF4
  c->r[3]=c->r[1]+0x00000020u; // 80252EF8
  c->r[4]=c->r[30]+0x000000C6u; // 80252EFC
  c->r[5]=c->r[28]+0x00000018u; // 80252F00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252F04
  c->lr=0x80252F0Cu; f_80291CC4(c); // 80252F08
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252F0C
  c->r[5]=c->r[30]+0x00000046u; // 80252F10
  c->r[3]=c->r[31]+0x00000014u; // 80252F14
  c->r[6]=c->r[1]+0x00000020u; // 80252F18
  c->lr=0x80252F20u; f_80048384(c); // 80252F1C
  W32(c->r[28]+0x00001FF4u,c->r[3]); // 80252F20
  c->r[5]=c->r[3]|c->r[3]; // 80252F24
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252F28
  c->r[3]=c->r[31]|c->r[31]; // 80252F2C
  c->lr=0x80252F34u; f_8014AC10(c); // 80252F30
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252F34
  c->r[3]=c->r[31]|c->r[31]; // 80252F38
  c->r[5]=R32(c->r[28]+0x00001FF4u); // 80252F3C
  c->r[6]=0u+0x00000000u; // 80252F40
  c->lr=0x80252F48u; f_8014A860(c); // 80252F44
  c->r[3]=c->r[1]+0x00000020u; // 80252F48
  c->r[4]=c->r[30]+0x000000D9u; // 80252F4C
  c->r[5]=c->r[28]+0x00000018u; // 80252F50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252F54
  c->lr=0x80252F5Cu; f_80291CC4(c); // 80252F58
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252F5C
  c->r[5]=c->r[30]+0x00000046u; // 80252F60
  c->r[3]=c->r[31]+0x00000014u; // 80252F64
  c->r[6]=c->r[1]+0x00000020u; // 80252F68
  c->lr=0x80252F70u; f_80048384(c); // 80252F6C
  W32(c->r[28]+0x00001FFCu,c->r[3]); // 80252F70
  c->r[5]=c->r[3]|c->r[3]; // 80252F74
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252F78
  c->r[3]=c->r[31]|c->r[31]; // 80252F7C
  c->lr=0x80252F84u; f_8014AC10(c); // 80252F80
  c->r[4]=R32(c->r[28]+0x00000014u); // 80252F84
  c->r[3]=c->r[31]|c->r[31]; // 80252F88
  c->r[5]=R32(c->r[28]+0x00001FFCu); // 80252F8C
  c->r[6]=0u+0x00000000u; // 80252F90
  c->lr=0x80252F98u; f_8014A860(c); // 80252F94
  c->r[4]=c->r[30]+0x000000EAu; // 80252F98
  c->r[3]=c->r[1]+0x00000008u; // 80252F9C
  c->lr=0x80252FA4u; f_80242B30(c); // 80252FA0
  c->r[29]=0u+0x00000000u; // 80252FA4
  c->r[31]=0u+0x00000000u; // 80252FA8
L_80252FAC:;
  c->r[3]=c->r[1]+0x00000010u; // 80252FAC
  c->r[4]=c->r[30]+0x000000F4u; // 80252FB0
  c->r[5]=c->r[29]+0x00000005u; // 80252FB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80252FB8
  c->lr=0x80252FC0u; f_80291CC4(c); // 80252FBC
  c->r[3]=c->r[1]+0x00000008u; // 80252FC0
  c->r[4]=c->r[1]+0x00000010u; // 80252FC4
  c->lr=0x80252FCCu; f_80242B8C(c); // 80252FC8
  c->r[3]=c->r[1]+0x00000008u; // 80252FCC
  c->r[4]=0u+0x00000006u; // 80252FD0
  c->r[5]=0u+0x0000005Fu; // 80252FD4
  c->lr=0x80252FDCu; f_80242CA8(c); // 80252FD8
  c->lr=0x80252FE0u; f_80295EAC(c); // 80252FDC
  c->r[29]=c->r[29]+0x00000001u; // 80252FE0
  c->r[4]=c->r[28]+c->r[31]; // 80252FE4
  cmps(c,0,(int32_t)c->r[29],15); // 80252FE8
  W32(c->r[4]+0x00002004u,c->r[3]); // 80252FEC
  c->r[31]=c->r[31]+0x00000004u; // 80252FF0
  if (crb(c,0)) { IRQCHK(c); goto L_80252FAC; } // 80252FF4
  c->r[3]=c->r[1]+0x00000008u; // 80252FF8
  c->r[4]=0u+0xFFFFFFFFu; // 80252FFC
  c->lr=0x80253004u; f_80242AF0(c); // 80253000
  {uint32_t ea=c->r[1]+0x000000A0u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80253004
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80253008
  c->lr=c->r[0]; // 8025300C
  c->r[1]=c->r[1]+0x000000B0u; // 80253010
  return; // 80253014
}

// fn_80253018
void f_80253018(Ctx* __restrict c) {
  trace_call(0x80253018u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253018
  c->r[0]=c->lr; // 8025301C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80253020
  c->r[0]=0u+0x00000001u; // 80253024
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80253028
  c->r[29]=c->r[3]|c->r[3]; // 8025302C
  c->r[30]=0u+0x00000000u; // 80253030
  c->r[31]=0u+0x805E0000u; // 80253034
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80253038
L_8025303C:;
  c->r[4]=c->r[30]|c->r[30]; // 8025303C
  c->r[3]=c->r[31]+0xFFFFD790u; // 80253040
  c->r[5]=0u+0x00000001u; // 80253044
  c->lr=0x8025304Cu; f_802417A4(c); // 80253048
  c->r[30]=c->r[30]+0x00000001u; // 8025304C
  cmps(c,0,(int32_t)c->r[30],2); // 80253050
  if (crb(c,0)) { IRQCHK(c); goto L_8025303C; } // 80253054
  c->r[0]=R8(c->r[29]+0x00001118u); // 80253058
  cmps(c,0,(int32_t)c->r[0],0); // 8025305C
  if (crb(c,2)) { goto L_80253070; } // 80253060
  c->r[0]=0u+0x00002001u; // 80253064
  W32(c->r[29]+0x00000FF0u,c->r[0]); // 80253068
  goto L_802530BC; // 8025306C
L_80253070:;
  c->r[0]=0u+0x00002002u; // 80253070
  c->r[4]=R32(c->r[29]+0x0000111Cu); // 80253074
  W32(c->r[29]+0x00000FF0u,c->r[0]); // 80253078
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 8025307C
  c->lr=0x80253084u; f_801F8B24(c); // 80253080
  c->r[30]=0u+0x00000000u; // 80253084
  c->r[31]=0u+0x00000000u; // 80253088
L_8025308C:;
  c->r[3]=c->r[30]+0x00000005u; // 8025308C
  c->lr=0x80253094u; f_801D4450(c); // 80253090
  c->r[5]=c->r[29]+c->r[31]; // 80253094
  c->r[4]=c->r[3]|c->r[3]; // 80253098
  c->r[0]=R32(c->r[5]+0x00001120u); // 8025309C
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802530A0
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 802530A4
  c->lr=0x802530ACu; f_801F8B34(c); // 802530A8
  c->r[30]=c->r[30]+0x00000001u; // 802530AC
  c->r[31]=c->r[31]+0x00000004u; // 802530B0
  cmps(c,0,(int32_t)c->r[30],15); // 802530B4
  if (crb(c,0)) { IRQCHK(c); goto L_8025308C; } // 802530B8
L_802530BC:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802530BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802530C0
  c->lr=c->r[0]; // 802530C4
  c->r[1]=c->r[1]+0x00000020u; // 802530C8
  return; // 802530CC
}

// fn_802530D0
void f_802530D0(Ctx* __restrict c) {
  trace_call(0x802530D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802530D0
  c->r[0]=c->lr; // 802530D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802530D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=18;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802530DC
  c->r[24]=c->r[3]|c->r[3]; // 802530E0
  c->r[4]=R32(c->r[3]+0x00000FF0u); // 802530E4
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 802530E8
  if (crb(c,2)) { goto L_802532A8; } // 802530EC
  cmps(c,0,(int32_t)c->r[4],2049); // 802530F0
  if (crb(c,2)) { goto L_80253100; } // 802530F4
  cmps(c,0,(int32_t)c->r[4],2052); // 802530F8
  if (!crb(c,2)) { goto L_80253268; } // 802530FC
L_80253100:;
  c->r[26]=0u+0x00000000u; // 80253100
  c->r[18]=0u+0x000000FFu; // 80253104
  c->r[27]=0u+0x80460000u; // 80253108
  c->r[28]=0u+0x00000802u; // 8025310C
  c->r[29]=0u+0xFFFFFFFFu; // 80253110
  c->r[30]=0u+0x00000050u; // 80253114
  c->r[31]=0u+0x00000400u; // 80253118
  c->r[19]=0u+0x80590000u; // 8025311C
  c->r[20]=0u+0x00000000u; // 80253120
  c->r[23]=0u+0x00000010u; // 80253124
  c->r[21]=0u+0x00000002u; // 80253128
  c->r[22]=0u+0x00000002u; // 8025312C
L_80253130:;
  cmps(c,0,(int32_t)c->r[26],0); // 80253130
  if (!crb(c,2)) { goto L_80253140; } // 80253134
  c->r[25]=c->r[24]+0x00001FE4u; // 80253138
  goto L_80253154; // 8025313C
L_80253140:;
  cmps(c,0,(int32_t)c->r[26],1); // 80253140
  if (!crb(c,2)) { goto L_80253150; } // 80253144
  c->r[25]=c->r[24]+0x00001FECu; // 80253148
  goto L_80253154; // 8025314C
L_80253150:;
  c->r[25]=c->r[24]+0x00001FF4u; // 80253150
L_80253154:;
  c->r[0]=R8(c->r[25]+0x00000004u); // 80253154
  cmps(c,0,(int32_t)c->r[0],0); // 80253158
  if (crb(c,2)) { goto L_8025325C; } // 8025315C
  c->r[4]=R32(c->r[25]+0x00000000u); // 80253160
  c->r[3]=c->r[27]+0xFFFFD468u; // 80253164
  c->lr=0x8025316Cu; f_80155E44(c); // 80253168
  cmps(c,0,(int32_t)c->r[3],0); // 8025316C
  if (crb(c,2)) { goto L_8025325C; } // 80253170
  c->r[0]=R32(c->r[24]+0x00000FF0u); // 80253174
  cmps(c,0,(int32_t)c->r[0],2049); // 80253178
  if (!crb(c,2)) { goto L_802531B0; } // 8025317C
  W32(c->r[24]+0x00000FF0u,c->r[28]); // 80253180
  c->r[4]=0u+0x00000000u; // 80253184
  W32(c->r[24]+0x00000770u,c->r[29]); // 80253188
  W8(c->r[24]+0x00000048u,c->r[30]); // 8025318C
  W8(c->r[24]+0x0000026Fu,c->r[18]); // 80253190
  c->ctr=c->r[21]; // 80253194
L_80253198:;
  c->r[3]=c->r[24]+c->r[4]; // 80253198
  c->r[4]=c->r[4]+0x00000001u; // 8025319C
  W8(c->r[3]+0x00000269u,c->r[18]); // 802531A0
  W8(c->r[3]+0x0000026Du,c->r[18]); // 802531A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80253198; } // 802531A8
  goto L_80253250; // 802531AC
L_802531B0:;
  cmps(c,0,(int32_t)c->r[0],2052); // 802531B0
  if (!crb(c,2)) { goto L_80253250; } // 802531B4
  c->r[4]=R32(c->r[24]+0x00001110u); // 802531B8
  c->r[5]=0u+0x00000000u; // 802531BC
  c->r[3]=R8(c->r[24]+0x0000110Fu); // 802531C0
  c->r[0]=R8(c->r[24]+0x0000110Cu); // 802531C4
  W32(c->r[24]+0x00000FF0u,c->r[31]); // 802531C8
  W32(c->r[24]+0x00000770u,c->r[4]); // 802531CC
  W8(c->r[24]+0x00000048u,c->r[3]); // 802531D0
  W8(c->r[24]+0x0000026Fu,c->r[0]); // 802531D4
  c->ctr=c->r[22]; // 802531D8
L_802531DC:;
  c->r[3]=c->r[24]+c->r[5]; // 802531DC
  c->r[5]=c->r[5]+0x00000001u; // 802531E0
  W8(c->r[3]+0x00000269u,c->r[18]); // 802531E4
  c->r[0]=R8(c->r[3]+0x0000110Du); // 802531E8
  W8(c->r[3]+0x0000026Du,c->r[0]); // 802531EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802531DC; } // 802531F0
  c->r[6]=0u+0x00000000u; // 802531F4
  c->r[3]=0u+0x00000000u; // 802531F8
L_802531FC:;
  c->r[4]=c->r[24]+c->r[3]; // 802531FC
  c->r[7]=0u+0x00000000u; // 80253200
  c->ctr=c->r[23]; // 80253204
L_80253208:;
  c->r[5]=c->r[4]+c->r[7]; // 80253208
  c->r[7]=c->r[7]+0x00000001u; // 8025320C
  c->r[0]=R8(c->r[5]+0x0000100Cu); // 80253210
  W8(c->r[5]+0x00000270u,c->r[0]); // 80253214
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80253208; } // 80253218
  c->r[6]=c->r[6]+0x00000001u; // 8025321C
  c->r[3]=c->r[3]+0x00000010u; // 80253220
  cmps(c,0,(int32_t)c->r[6],16); // 80253224
  if (crb(c,0)) { IRQCHK(c); goto L_802531FC; } // 80253228
  c->r[4]=R32(c->r[24]+0x00000F74u); // 8025322C
  c->r[3]=c->r[19]+0x000063F0u; // 80253230
  c->r[5]=0u+0x00000001u; // 80253234
  c->lr=0x8025323Cu; f_801FA2A8(c); // 80253238
  c->r[4]=R32(c->r[24]+0x00000F74u); // 8025323C
  c->r[3]=c->r[19]+0x000063F0u; // 80253240
  c->r[5]=0u+0x00000001u; // 80253244
  c->r[6]=0u+0x00000001u; // 80253248
  c->lr=0x80253250u; f_801FA320(c); // 8025324C
L_80253250:;
  W8(c->r[25]+0x00000004u,c->r[20]); // 80253250
  c->r[3]=c->r[24]|c->r[24]; // 80253254
  c->lr=0x8025325Cu; f_801D9B14(c); // 80253258
L_8025325C:;
  c->r[26]=c->r[26]+0x00000001u; // 8025325C
  cmps(c,0,(int32_t)c->r[26],3); // 80253260
  if (crb(c,0)) { IRQCHK(c); goto L_80253130; } // 80253264
L_80253268:;
  c->r[0]=R32(c->r[24]+0x00000FF0u); // 80253268
  cmps(c,0,(int32_t)c->r[0],2051); // 8025326C
  if (crb(c,2)) { goto L_80253278; } // 80253270
  if (!crb(c,2)) { goto L_80253478; } // 80253274
L_80253278:;
  c->r[3]=0u+0x80460000u; // 80253278
  c->r[4]=R32(c->r[24]+0x00001FFCu); // 8025327C
  c->r[3]=c->r[3]+0xFFFFD468u; // 80253280
  c->lr=0x80253288u; f_80155E44(c); // 80253284
  cmps(c,0,(int32_t)c->r[3],0); // 80253288
  if (crb(c,2)) { goto L_80253478; } // 8025328C
  c->r[3]=0u+0x00000000u; // 80253290
  c->r[0]=0u+0x00000802u; // 80253294
  W8(c->r[24]+0x00002000u,c->r[3]); // 80253298
  W8(c->r[24]+0x00000011u,c->r[3]); // 8025329C
  W32(c->r[24]+0x00000FF0u,c->r[0]); // 802532A0
  goto L_80253478; // 802532A4
L_802532A8:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 802532A8
  if (crb(c,2)) { goto L_80253414; } // 802532AC
  cmps(c,0,(int32_t)c->r[4],4097); // 802532B0
  if (!crb(c,2)) { goto L_8025331C; } // 802532B4
  c->r[4]=0u+0x804B0000u; // 802532B8
  c->r[4]=c->r[4]+0x00005CC8u; // 802532BC
  c->r[5]=c->r[4]+0x00020000u; // 802532C0
  c->r[4]=R32(c->r[5]+0xFFFFB0D0u); // 802532C4
  cmps(c,0,(int32_t)c->r[4],0); // 802532C8
  if (crb(c,0)) { goto L_80253478; } // 802532CC
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); // 802532D0
  c->r[4]=addc(c,~c->r[0],c->r[4],c->xer_ca); // 802532D4
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 802532D8
  W8(c->r[3]+0x00001118u,c->r[4]); // 802532DC
  if (crb(c,2)) { goto L_802532F0; } // 802532E0
  c->r[0]=0u+0x00100000u; // 802532E4
  W32(c->r[3]+0x00000FF0u,c->r[0]); // 802532E8
  goto L_80253478; // 802532EC
L_802532F0:;
  c->r[0]=R8(c->r[5]+0xFFFF9D66u); // 802532F0
  cmps(c,0,(int32_t)c->r[0],0); // 802532F4
  if (!crb(c,2)) { goto L_80253478; } // 802532F8
  c->r[0]=0u+0x00001002u; // 802532FC
  c->r[4]=0u+0x00000023u; // 80253300
  W32(c->r[3]+0x00000FF0u,c->r[0]); // 80253304
  c->r[3]=c->r[5]|c->r[5]; // 80253308
  c->r[5]=0u+0x00000000u; // 8025330C
  c->r[3]=c->r[3]+0xFFFF9D58u; // 80253310
  c->lr=0x80253318u; f_80236A50(c); // 80253314
  goto L_80253478; // 80253318
L_8025331C:;
  cmps(c,0,(int32_t)c->r[4],4098); // 8025331C
  if (!crb(c,2)) { goto L_80253478; } // 80253320
  c->r[4]=0u+0x804B0000u; // 80253324
  c->r[4]=c->r[4]+0x00005CC8u; // 80253328
  c->r[4]=c->r[4]+0x00020000u; // 8025332C
  c->r[0]=R32(c->r[4]+0xFFFFB0D0u); // 80253330
  cmps(c,0,(int32_t)c->r[0],1); // 80253334
  if (!crb(c,2)) { goto L_80253348; } // 80253338
  c->r[0]=0u+0x00100000u; // 8025333C
  W32(c->r[3]+0x00000FF0u,c->r[0]); // 80253340
  goto L_80253478; // 80253344
L_80253348:;
  cmps(c,0,(int32_t)c->r[0],0); // 80253348
  if (!crb(c,2)) { goto L_80253478; } // 8025334C
  c->r[0]=R8(c->r[4]+0xFFFF9D66u); // 80253350
  cmps(c,0,(int32_t)c->r[0],0); // 80253354
  if (!crb(c,2)) { goto L_80253478; } // 80253358
  c->r[7]=R32(c->r[3]+0x00001110u); // 8025335C
  c->r[4]=0u+0x00000400u; // 80253360
  c->r[6]=R8(c->r[3]+0x0000110Fu); // 80253364
  c->r[0]=0u+0x00000002u; // 80253368
  c->r[5]=R8(c->r[3]+0x0000110Cu); // 8025336C
  c->r[8]=0u+0x00000000u; // 80253370
  W32(c->r[3]+0x00000FF0u,c->r[4]); // 80253374
  c->r[4]=0u+0x000000FFu; // 80253378
  W32(c->r[3]+0x00000770u,c->r[7]); // 8025337C
  W8(c->r[3]+0x00000048u,c->r[6]); // 80253380
  W8(c->r[3]+0x0000026Fu,c->r[5]); // 80253384
  c->ctr=c->r[0]; // 80253388
L_8025338C:;
  c->r[5]=c->r[3]+c->r[8]; // 8025338C
  c->r[8]=c->r[8]+0x00000001u; // 80253390
  W8(c->r[5]+0x00000269u,c->r[4]); // 80253394
  c->r[0]=R8(c->r[5]+0x0000110Du); // 80253398
  W8(c->r[5]+0x0000026Du,c->r[0]); // 8025339C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025338C; } // 802533A0
  c->r[8]=0u+0x00000000u; // 802533A4
  c->r[4]=0u+0x00000000u; // 802533A8
  c->r[0]=0u+0x00000010u; // 802533AC
L_802533B0:;
  c->r[6]=c->r[3]+c->r[4]; // 802533B0
  c->r[9]=0u+0x00000000u; // 802533B4
  c->ctr=c->r[0]; // 802533B8
L_802533BC:;
  c->r[7]=c->r[6]+c->r[9]; // 802533BC
  c->r[9]=c->r[9]+0x00000001u; // 802533C0
  c->r[5]=R8(c->r[7]+0x0000100Cu); // 802533C4
  W8(c->r[7]+0x00000270u,c->r[5]); // 802533C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802533BC; } // 802533CC
  c->r[8]=c->r[8]+0x00000001u; // 802533D0
  c->r[4]=c->r[4]+0x00000010u; // 802533D4
  cmps(c,0,(int32_t)c->r[8],16); // 802533D8
  if (crb(c,0)) { IRQCHK(c); goto L_802533B0; } // 802533DC
  c->r[3]=c->r[24]|c->r[24]; // 802533E0
  c->lr=0x802533E8u; f_801D991C(c); // 802533E4
  c->r[3]=0u+0x80590000u; // 802533E8
  c->r[4]=R32(c->r[24]+0x00000F74u); // 802533EC
  c->r[3]=c->r[3]+0x000063F0u; // 802533F0
  c->r[5]=0u+0x00000001u; // 802533F4
  c->r[6]=0u+0x00000001u; // 802533F8
  c->lr=0x80253400u; f_801FA320(c); // 802533FC
  c->r[0]=0u+0x00000001u; // 80253400
  c->r[3]=c->r[24]|c->r[24]; // 80253404
  W8(c->r[24]+0x00001118u,c->r[0]); // 80253408
  c->lr=0x80253410u; f_801D9B14(c); // 8025340C
  goto L_80253478; // 80253410
L_80253414:;
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 80253414
  if (crb(c,2)) { goto L_80253478; } // 80253418
  cmps(c,0,(int32_t)c->r[4],8193); // 8025341C
  if (!crb(c,2)) { goto L_80253454; } // 80253420
  c->r[5]=0u+0x805E0000u; // 80253424
  c->r[5]=c->r[5]+0xFFFFDC20u; // 80253428
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 8025342C
  cmps(c,0,(int32_t)c->r[0],2); // 80253430
  if (crb(c,1)) { goto L_80253448; } // 80253434
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80253438
  c->r[4]=0u+0x00000001u; // 8025343C
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 80253440
  W32(c->r[5]+0x00000020u,c->r[0]); // 80253444
L_80253448:;
  c->r[0]=0u+0x00002002u; // 80253448
  W32(c->r[3]+0x00000FF0u,c->r[0]); // 8025344C
  goto L_80253478; // 80253450
L_80253454:;
  cmps(c,0,(int32_t)c->r[4],8194); // 80253454
  if (!crb(c,2)) { goto L_80253478; } // 80253458
  c->r[4]=0u+0x805E0000u; // 8025345C
  c->r[4]=c->r[4]+0xFFFFDC20u; // 80253460
  c->r[0]=R32(c->r[4]+0x00000004u); // 80253464
  cmps(c,0,(int32_t)c->r[0],0); // 80253468
  if (crb(c,2)) { goto L_80253478; } // 8025346C
  c->r[0]=0u+0x00000000u; // 80253470
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80253474
L_80253478:;
  c->r[0]=R32(c->r[24]+0x00000FF0u); // 80253478
  c->r[0]=rotl(c->r[0],0)&0x00100000u; cr0(c,c->r[0]); // 8025347C
  if (crb(c,2)) { goto L_80253548; } // 80253480
  c->r[6]=R32(c->r[24]+0x00001110u); // 80253484
  c->r[3]=0u+0x00000400u; // 80253488
  c->r[5]=R8(c->r[24]+0x0000110Fu); // 8025348C
  c->r[0]=0u+0x00000002u; // 80253490
  c->r[4]=R8(c->r[24]+0x0000110Cu); // 80253494
  c->r[7]=0u+0x00000000u; // 80253498
  W32(c->r[24]+0x00000FF0u,c->r[3]); // 8025349C
  c->r[3]=0u+0x000000FFu; // 802534A0
  W32(c->r[24]+0x00000770u,c->r[6]); // 802534A4
  W8(c->r[24]+0x00000048u,c->r[5]); // 802534A8
  W8(c->r[24]+0x0000026Fu,c->r[4]); // 802534AC
  c->ctr=c->r[0]; // 802534B0
L_802534B4:;
  c->r[4]=c->r[24]+c->r[7]; // 802534B4
  c->r[7]=c->r[7]+0x00000001u; // 802534B8
  W8(c->r[4]+0x00000269u,c->r[3]); // 802534BC
  c->r[0]=R8(c->r[4]+0x0000110Du); // 802534C0
  W8(c->r[4]+0x0000026Du,c->r[0]); // 802534C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802534B4; } // 802534C8
  c->r[7]=0u+0x00000000u; // 802534CC
  c->r[3]=0u+0x00000000u; // 802534D0
  c->r[0]=0u+0x00000010u; // 802534D4
L_802534D8:;
  c->r[5]=c->r[24]+c->r[3]; // 802534D8
  c->r[8]=0u+0x00000000u; // 802534DC
  c->ctr=c->r[0]; // 802534E0
L_802534E4:;
  c->r[6]=c->r[5]+c->r[8]; // 802534E4
  c->r[8]=c->r[8]+0x00000001u; // 802534E8
  c->r[4]=R8(c->r[6]+0x0000100Cu); // 802534EC
  W8(c->r[6]+0x00000270u,c->r[4]); // 802534F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802534E4; } // 802534F4
  c->r[7]=c->r[7]+0x00000001u; // 802534F8
  c->r[3]=c->r[3]+0x00000010u; // 802534FC
  cmps(c,0,(int32_t)c->r[7],16); // 80253500
  if (crb(c,0)) { IRQCHK(c); goto L_802534D8; } // 80253504
  c->r[0]=R8(c->r[24]+0x0000026Fu); // 80253508
  c->r[3]=c->r[24]|c->r[24]; // 8025350C
  c->r[6]=0u+0x00000000u; // 80253510
  c->r[18]=rotl(c->r[0],0)&0x0000000Fu; // 80253514
  c->r[19]=sraw(c,c->r[0],4); // 80253518
  c->r[4]=c->r[18]|c->r[18]; // 8025351C
  c->r[5]=c->r[19]|c->r[19]; // 80253520
  c->lr=0x80253528u; f_801D9E90(c); // 80253524
  c->r[12]=R32(c->r[24]+0x00000008u); // 80253528
  c->r[3]=c->r[24]|c->r[24]; // 8025352C
  c->r[4]=c->r[18]|c->r[18]; // 80253530
  c->r[5]=rotl(c->r[19],0)&0x000000FFu; // 80253534
  c->r[12]=R32(c->r[12]+0x00000070u); // 80253538
  c->ctr=c->r[12]; // 8025353C
  if (true) { c->lr=0x80253544u; dispatch(c,c->ctr); } // 80253540
  c->lr=0x80253548u; f_801D4194(c); // 80253544
L_80253548:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=18;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80253548
  c->r[0]=R32(c->r[1]+0x00000044u); // 8025354C
  c->lr=c->r[0]; // 80253550
  c->r[1]=c->r[1]+0x00000040u; // 80253554
  return; // 80253558
}

// fn_8025355C
void f_8025355C(Ctx* __restrict c) {
  trace_call(0x8025355Cu);
  return; // 8025355C
}

// fn_80253560
void f_80253560(Ctx* __restrict c) {
  trace_call(0x80253560u);
  return; // 80253560
}

// fn_80253564
void f_80253564(Ctx* __restrict c) {
  trace_call(0x80253564u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253564
  c->r[0]=c->lr; // 80253568
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025356C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80253570
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80253574
  c->r[11]=c->r[1]+0x00000020u; // 80253578
  c->lr=0x80253580u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025357C
  c->r[6]=R32(c->r[3]+0x00000FF0u); // 80253580
  c->r[31]=c->r[3]|c->r[3]; // 80253584
  c->r[0]=rotl(c->r[6],0)&0x00000400u; cr0(c,c->r[0]); // 80253588
  if (crb(c,2)) { goto L_80253640; } // 8025358C
  cmpu(c,0,c->r[5],0x00000001u); // 80253590
  if (crb(c,0)) { goto L_8025375C; } // 80253594
  cmpu(c,0,c->r[5],0x00000003u); // 80253598
  if (crb(c,1)) { goto L_8025375C; } // 8025359C
  c->r[6]=R32(c->r[3]+0x00000770u); // 802535A0
  c->r[7]=0u+0x00000001u; // 802535A4
  c->r[5]=R8(c->r[3]+0x00000048u); // 802535A8
  c->r[8]=0u+0x00000801u; // 802535AC
  c->r[4]=R8(c->r[3]+0x0000026Fu); // 802535B0
  c->r[0]=0u+0x00000002u; // 802535B4
  W32(c->r[3]+0x00000FF0u,c->r[8]); // 802535B8
  c->r[8]=0u+0x00000000u; // 802535BC
  W32(c->r[3]+0x00000F74u,c->r[7]); // 802535C0
  W8(c->r[3]+0x00000011u,c->r[7]); // 802535C4
  W32(c->r[3]+0x00001110u,c->r[6]); // 802535C8
  W8(c->r[3]+0x0000110Fu,c->r[5]); // 802535CC
  W8(c->r[3]+0x0000110Cu,c->r[4]); // 802535D0
  c->ctr=c->r[0]; // 802535D4
L_802535D8:;
  c->r[4]=c->r[3]+c->r[8]; // 802535D8
  c->r[8]=c->r[8]+0x00000001u; // 802535DC
  c->r[0]=R8(c->r[4]+0x0000026Du); // 802535E0
  W8(c->r[4]+0x0000110Du,c->r[0]); // 802535E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802535D8; } // 802535E8
  c->r[9]=0u+0x00000000u; // 802535EC
  c->r[4]=0u+0x00000000u; // 802535F0
  c->r[5]=c->r[9]|c->r[9]; // 802535F4
  c->r[0]=0u+0x00000010u; // 802535F8
L_802535FC:;
  c->r[7]=c->r[3]+c->r[4]; // 802535FC
  c->r[10]=0u+0x00000000u; // 80253600
  c->ctr=c->r[0]; // 80253604
L_80253608:;
  c->r[8]=c->r[7]+c->r[10]; // 80253608
  c->r[10]=c->r[10]+0x00000001u; // 8025360C
  c->r[6]=R8(c->r[8]+0x00000270u); // 80253610
  W8(c->r[8]+0x0000100Cu,c->r[6]); // 80253614
  W8(c->r[8]+0x00000270u,c->r[5]); // 80253618
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80253608; } // 8025361C
  c->r[9]=c->r[9]+0x00000001u; // 80253620
  c->r[4]=c->r[4]+0x00000010u; // 80253624
  cmps(c,0,(int32_t)c->r[9],16); // 80253628
  if (crb(c,0)) { IRQCHK(c); goto L_802535FC; } // 8025362C
  c->r[3]=c->r[31]|c->r[31]; // 80253630
  c->r[4]=0u+0x00000001u; // 80253634
  c->lr=0x8025363Cu; f_8025424C(c); // 80253638
  goto L_8025375C; // 8025363C
L_80253640:;
  c->r[0]=rotl(c->r[6],0)&0x00000800u; cr0(c,c->r[0]); // 80253640
  if (crb(c,2)) { goto L_8025375C; } // 80253644
  cmps(c,0,(int32_t)c->r[6],2050); // 80253648
  if (!crb(c,2)) { goto L_8025375C; } // 8025364C
  cmpu(c,0,c->r[4],0x00000001u); // 80253650
  if (!crb(c,2)) { goto L_8025375C; } // 80253654
  c->r[0]=0u+0x00000803u; // 80253658
  c->r[4]=R32(c->r[31]+0x00000014u); // 8025365C
  W32(c->r[3]+0x00000FF0u,c->r[0]); // 80253660
  c->r[30]=0u+0x80460000u; // 80253664
  c->r[5]=R32(c->r[31]+0x00001FFCu); // 80253668
  c->r[3]=c->r[30]+0xFFFFD468u; // 8025366C
  c->r[6]=0u+0x00000001u; // 80253670
  c->lr=0x80253678u; f_8014A860(c); // 80253674
  c->r[4]=R32(c->r[31]+0x00000014u); // 80253678
  c->r[3]=c->r[30]+0xFFFFD468u; // 8025367C
  c->r[5]=R32(c->r[31]+0x00001FFCu); // 80253680
  c->lr=0x80253688u; f_8014A924(c); // 80253684
  c->r[4]=R32(c->r[31]+0x00001FFCu); // 80253688
  cmps(c,0,(int32_t)c->r[4],0); // 8025368C
  if (crb(c,0)) { goto L_802536A8; } // 80253690
  c->r[3]=c->r[30]+0xFFFFD468u; // 80253694
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80253698
  c->r[3]=c->r[3]+0x00000014u; // 8025369C
  c->lr=0x802536A4u; f_8014ACB4(c); // 802536A0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 802536A4
L_802536A8:;
  c->r[0]=R8(c->r[31]+0x0000110Cu); // 802536A8
  c->r[30]=0u+0x00000001u; // 802536AC
  W8(c->r[31]+0x00002000u,c->r[30]); // 802536B0
  c->r[3]=c->r[31]|c->r[31]; // 802536B4
  c->r[4]=rotl(c->r[0],0)&0x0000000Fu; // 802536B8
  c->r[5]=sraw(c,c->r[0],4); // 802536BC
  c->lr=0x802536C4u; f_80254760(c); // 802536C0
  c->lr=0x802536C8u; f_801D4450(c); // 802536C4
  cmps(c,0,(int32_t)c->r[3],0); // 802536C8
  c->r[29]=c->r[3]|c->r[3]; // 802536CC
  if (crb(c,0)) { goto L_8025375C; } // 802536D0
  c->r[3]=R32(c->r[31]+0x00001B84u); // 802536D4
  c->r[0]=R32(c->r[31]+0x00001FDCu); // 802536D8
  c->r[4]=c->r[0]-c->r[3]; // 802536DC
  W32(c->r[31]+0x00001FDCu,c->r[4]); // 802536E0
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802536E4
  c->lr=0x802536ECu; f_801F8B24(c); // 802536E8
  c->r[5]=R32(c->r[31]+0x00001B80u); // 802536EC
  c->r[4]=c->r[29]|c->r[29]; // 802536F0
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802536F4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 802536F8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 802536FC
  c->lr=0x80253704u; f_801F8B34(c); // 80253700
  c->r[4]=R32(c->r[31]+0x000012C8u); // 80253704
  c->r[3]=c->r[31]|c->r[31]; // 80253708
  c->r[0]=c->r[4]+0x00000001u; // 8025370C
  W32(c->r[31]+0x000012C8u,c->r[0]); // 80253710
  c->lr=0x80253718u; f_80253D64(c); // 80253714
  c->r[3]=c->r[31]|c->r[31]; // 80253718
  c->lr=0x80253720u; f_80253F28(c); // 8025371C
  c->r[3]=c->r[31]|c->r[31]; // 80253720
  c->r[4]=0u+0x00000000u; // 80253724
  c->lr=0x8025372Cu; f_8025424C(c); // 80253728
  c->r[4]=0u+0x80590000u; // 8025372C
  c->r[3]=0u+0x803E0000u; // 80253730
  c->r[4]=c->r[4]+0x000063F0u; // 80253734
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80253738
  W8(c->r[4]+0x00000041u,c->r[30]); // 8025373C
  c->r[3]=c->r[3]+0x0000528Cu; // 80253740
  c->r[4]=0u+0x00000000u; // 80253744
  c->r[5]=0u+0xFFFFFFFFu; // 80253748
  W8(c->r[31]+0x00000011u,c->r[30]); // 8025374C
  c->r[3]=c->r[3]+0x000000FCu; // 80253750
  W8(c->r[31]+0x00001118u,c->r[30]); // 80253754
  c->lr=0x8025375Cu; f_80068DD8(c); // 80253758
L_8025375C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8025375C
  c->r[11]=c->r[1]+0x00000020u; // 80253760
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80253764
  c->lr=0x8025376Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80253768
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025376C
  c->lr=c->r[0]; // 80253770
  c->r[1]=c->r[1]+0x00000030u; // 80253774
  return; // 80253778
}

// fn_8025377C
void f_8025377C(Ctx* __restrict c) {
  trace_call(0x8025377Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025377C
  c->r[0]=c->lr; // 80253780
  W32(c->r[1]+0x00000034u,c->r[0]); // 80253784
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80253788
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8025378C
  c->r[11]=c->r[1]+0x00000020u; // 80253790
  c->lr=0x80253798u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80253794
  c->r[0]=R8(c->r[3]+0x00000011u); // 80253798
  c->r[31]=c->r[3]|c->r[3]; // 8025379C
  c->r[29]=c->r[6]|c->r[6]; // 802537A0
  cmps(c,0,(int32_t)c->r[0],0); // 802537A4
  if (!crb(c,2)) { goto L_802537DC; } // 802537A8
  c->r[30]=0u+0x803E0000u; // 802537AC
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802537B0
  c->r[30]=c->r[30]+0x0000528Cu; // 802537B4
  c->r[4]=0u+0x00000000u; // 802537B8
  c->r[3]=c->r[30]+0x00000103u; // 802537BC
  c->r[5]=0u+0xFFFFFFFFu; // 802537C0
  c->lr=0x802537C8u; f_80068DD8(c); // 802537C4
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802537C8
  c->r[5]=c->r[29]|c->r[29]; // 802537CC
  c->r[3]=c->r[30]+0x0000010Au; // 802537D0
  c->r[4]=0u+0x00000000u; // 802537D4
  c->lr=0x802537DCu; f_80068DD8(c); // 802537D8
L_802537DC:;
  c->r[3]=R32(c->r[31]+0x00000FF0u); // 802537DC
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 802537E0
  if (crb(c,2)) { goto L_802538BC; } // 802537E4
  c->r[6]=R32(c->r[31]+0x00000770u); // 802537E8
  c->r[5]=0u+0xFFFFFFFFu; // 802537EC
  c->r[4]=R8(c->r[31]+0x00000048u); // 802537F0
  c->r[0]=0u+0x00000002u; // 802537F4
  c->r[3]=R8(c->r[31]+0x0000026Fu); // 802537F8
  c->r[7]=0u+0x00000000u; // 802537FC
  W32(c->r[31]+0x00001110u,c->r[6]); // 80253800
  W32(c->r[31]+0x00000770u,c->r[5]); // 80253804
  W8(c->r[31]+0x0000110Fu,c->r[4]); // 80253808
  W8(c->r[31]+0x0000110Cu,c->r[3]); // 8025380C
  c->ctr=c->r[0]; // 80253810
L_80253814:;
  c->r[3]=c->r[31]+c->r[7]; // 80253814
  c->r[7]=c->r[7]+0x00000001u; // 80253818
  c->r[0]=R8(c->r[3]+0x0000026Du); // 8025381C
  W8(c->r[3]+0x0000110Du,c->r[0]); // 80253820
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80253814; } // 80253824
  c->r[8]=0u+0x00000000u; // 80253828
  c->r[3]=0u+0x00000000u; // 8025382C
  c->r[4]=c->r[8]|c->r[8]; // 80253830
  c->r[0]=0u+0x00000010u; // 80253834
L_80253838:;
  c->r[6]=c->r[31]+c->r[3]; // 80253838
  c->r[9]=0u+0x00000000u; // 8025383C
  c->ctr=c->r[0]; // 80253840
L_80253844:;
  c->r[7]=c->r[6]+c->r[9]; // 80253844
  c->r[9]=c->r[9]+0x00000001u; // 80253848
  c->r[5]=R8(c->r[7]+0x00000270u); // 8025384C
  W8(c->r[7]+0x0000100Cu,c->r[5]); // 80253850
  W8(c->r[7]+0x00000270u,c->r[4]); // 80253854
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80253844; } // 80253858
  c->r[8]=c->r[8]+0x00000001u; // 8025385C
  c->r[3]=c->r[3]+0x00000010u; // 80253860
  cmps(c,0,(int32_t)c->r[8],16); // 80253864
  if (crb(c,0)) { IRQCHK(c); goto L_80253838; } // 80253868
  c->r[0]=R8(c->r[31]+0x00001118u); // 8025386C
  cmps(c,0,(int32_t)c->r[0],0); // 80253870
  if (crb(c,2)) { goto L_802538B0; } // 80253874
  c->r[3]=0u+0x804B0000u; // 80253878
  c->r[0]=0u+0x00001001u; // 8025387C
  c->r[3]=c->r[3]+0x00005CC8u; // 80253880
  W32(c->r[31]+0x00000FF0u,c->r[0]); // 80253884
  c->r[3]=c->r[3]+0x00020000u; // 80253888
  c->r[4]=0u+0x0000001Du; // 8025388C
  c->r[5]=0u+0x00000000u; // 80253890
  c->r[3]=c->r[3]+0xFFFF9D58u; // 80253894
  c->lr=0x8025389Cu; f_80236A50(c); // 80253898
  c->r[3]=c->r[31]|c->r[31]; // 8025389C
  c->lr=0x802538A4u; f_801D9A6C(c); // 802538A0
  c->r[0]=0u+0x00000001u; // 802538A4
  W8(c->r[31]+0x00000011u,c->r[0]); // 802538A8
  goto L_802539A8; // 802538AC
L_802538B0:;
  c->r[0]=0u+0x00100000u; // 802538B0
  W32(c->r[31]+0x00000FF0u,c->r[0]); // 802538B4
  goto L_802539A8; // 802538B8
L_802538BC:;
  c->r[0]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[0]); // 802538BC
  if (crb(c,2)) { goto L_802539A8; } // 802538C0
  c->r[6]=R8(c->r[31]+0x0000026Fu); // 802538C4
  c->r[3]=0u+0x00000804u; // 802538C8
  c->r[5]=0u+0x00000000u; // 802538CC
  c->r[4]=0u+0x00000001u; // 802538D0
  c->r[0]=sraw(c,c->r[6],4); // 802538D4
  W32(c->r[31]+0x00000FF0u,c->r[3]); // 802538D8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 802538DC
  c->r[0]=rotl(c->r[6],0)&0x0000000Fu; // 802538E0
  W32(c->r[31]+0x00000F74u,c->r[5]); // 802538E4
  c->r[3]=c->r[31]+c->r[3]; // 802538E8
  W8(c->r[31]+0x00000011u,c->r[4]); // 802538EC
  c->r[3]=c->r[3]+c->r[0]; // 802538F0
  c->r[0]=R8(c->r[3]+0x00000FF8u); // 802538F4
  cmps(c,0,(int32_t)c->r[0],1); // 802538F8
  if (crb(c,2)) { goto L_80253924; } // 802538FC
  if (!crb(c,0)) { goto L_80253910; } // 80253900
  cmps(c,0,(int32_t)c->r[0],0); // 80253904
  if (!crb(c,0)) { goto L_8025391C; } // 80253908
  goto L_80253934; // 8025390C
L_80253910:;
  cmps(c,0,(int32_t)c->r[0],3); // 80253910
  if (!crb(c,0)) { goto L_80253934; } // 80253914
  goto L_8025392C; // 80253918
L_8025391C:;
  c->r[29]=c->r[31]+0x00001FE4u; // 8025391C
  goto L_8025393C; // 80253920
L_80253924:;
  c->r[29]=c->r[31]+0x00001FECu; // 80253924
  goto L_8025393C; // 80253928
L_8025392C:;
  c->r[29]=c->r[31]+0x00001FF4u; // 8025392C
  goto L_8025393C; // 80253930
L_80253934:;
  c->r[3]=0u+0x00000001u; // 80253934
  goto L_802539AC; // 80253938
L_8025393C:;
  c->r[30]=0u+0x80460000u; // 8025393C
  c->r[4]=R32(c->r[31]+0x00000014u); // 80253940
  c->r[5]=R32(c->r[29]+0x00000000u); // 80253944
  c->r[3]=c->r[30]+0xFFFFD468u; // 80253948
  c->r[6]=0u+0x00000001u; // 8025394C
  c->lr=0x80253954u; f_8014A860(c); // 80253950
  c->r[4]=R32(c->r[31]+0x00000014u); // 80253954
  c->r[3]=c->r[30]+0xFFFFD468u; // 80253958
  c->r[5]=R32(c->r[29]+0x00000000u); // 8025395C
  c->lr=0x80253964u; f_80155D5C(c); // 80253960
  c->r[4]=R32(c->r[29]+0x00000000u); // 80253964
  cmps(c,0,(int32_t)c->r[4],0); // 80253968
  if (crb(c,0)) { goto L_80253984; } // 8025396C
  c->r[3]=c->r[30]+0xFFFFD468u; // 80253970
  {uint32_t ea=c->r[2]+0xFFFFD9D4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80253974
  c->r[3]=c->r[3]+0x00000014u; // 80253978
  c->lr=0x80253980u; f_8014ACB4(c); // 8025397C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 80253980
L_80253984:;
  c->r[0]=0u+0x00000001u; // 80253984
  c->r[3]=0u+0x803E0000u; // 80253988
  c->r[3]=c->r[3]+0x0000528Cu; // 8025398C
  W8(c->r[29]+0x00000004u,c->r[0]); // 80253990
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80253994
  c->r[3]=c->r[3]+0x00000112u; // 80253998
  c->r[4]=0u+0x00000000u; // 8025399C
  c->r[5]=0u+0xFFFFFFFFu; // 802539A0
  c->lr=0x802539A8u; f_80068DD8(c); // 802539A4
L_802539A8:;
  c->r[3]=0u+0x00000001u; // 802539A8
L_802539AC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802539AC
  c->r[11]=c->r[1]+0x00000020u; // 802539B0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802539B4
  c->lr=0x802539BCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802539B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802539BC
  c->lr=c->r[0]; // 802539C0
  c->r[1]=c->r[1]+0x00000030u; // 802539C4
  return; // 802539C8
}

// fn_802539CC
void f_802539CC(Ctx* __restrict c) {
  trace_call(0x802539CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802539CC
  c->r[0]=c->lr; // 802539D0
  W32(c->r[1]+0x00000094u,c->r[0]); // 802539D4
  {uint32_t ea=c->r[1]+0x00000074u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802539D8
  c->r[29]=c->r[3]|c->r[3]; // 802539DC
  c->r[30]=c->r[4]|c->r[4]; // 802539E0
  c->r[31]=c->r[5]|c->r[5]; // 802539E4
  c->r[0]=R32(c->r[3]+0x00000FF0u); // 802539E8
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802539EC
  if (crb(c,2)) { goto L_80253BBC; } // 802539F0
  cmpu(c,0,c->r[5],0x00000001u); // 802539F4
  if (crb(c,0)) { goto L_80253BBC; } // 802539F8
  cmpu(c,0,c->r[5],0x00000003u); // 802539FC
  if (crb(c,1)) { goto L_80253BBC; } // 80253A00
  c->r[4]=c->r[1]+0x00000014u; // 80253A04
  c->lr=0x80253A0Cu; f_801D8A20(c); // 80253A08
  c->r[26]=R32(c->r[29]+0x00000014u); // 80253A0C
  c->r[3]=0u+0x803E0000u; // 80253A10
  c->r[3]=c->r[3]+0x0000528Cu; // 80253A14
  cmps(c,0,(int32_t)c->r[26],0); // 80253A18
  c->r[28]=c->r[3]+0x00000119u; // 80253A1C
  if (!crb(c,0)) { goto L_80253A2C; } // 80253A20
  c->r[0]=0u+0x00000001u; // 80253A24
  goto L_80253AE4; // 80253A28
L_80253A2C:;
  c->r[27]=0u+0x80460000u; // 80253A2C
  c->r[4]=c->r[26]|c->r[26]; // 80253A30
  c->r[3]=c->r[27]+0xFFFFD468u; // 80253A34
  c->r[5]=c->r[1]+0x00000014u; // 80253A38
  c->lr=0x80253A40u; f_800482D4(c); // 80253A3C
  cmps(c,0,(int32_t)c->r[3],0); // 80253A40
  if (!crb(c,2)) { goto L_80253A50; } // 80253A44
  c->r[0]=0u+0x00000001u; // 80253A48
  goto L_80253AE4; // 80253A4C
L_80253A50:;
  c->r[4]=c->r[26]|c->r[26]; // 80253A50
  c->r[5]=c->r[28]|c->r[28]; // 80253A54
  c->r[3]=c->r[27]+0xFFFFD468u; // 80253A58
  c->r[25]=0u+0x00000000u; // 80253A5C
  c->lr=0x80253A64u; f_800482D4(c); // 80253A60
  c->r[28]=c->r[3]|c->r[3]; // 80253A64
  c->r[4]=c->r[26]|c->r[26]; // 80253A68
  c->r[3]=c->r[27]+0xFFFFD468u; // 80253A6C
  c->r[5]=c->r[1]+0x00000014u; // 80253A70
  c->lr=0x80253A78u; f_800482D4(c); // 80253A74
  c->r[0]=0u+0x00000000u; // 80253A78
  c->r[26]=c->r[28]+0x00000010u; // 80253A7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80253A80
  c->r[28]=c->r[3]|c->r[3]; // 80253A84
  c->r[3]=c->r[26]|c->r[26]; // 80253A88
  c->lr=0x80253A90u; f_8023AA58(c); // 80253A8C
  W32(c->r[1]+0x00000010u,c->r[3]); // 80253A90
  goto L_80253AB8; // 80253A94
L_80253A98:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 80253A98
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 80253A9C
  cmpu(c,0,c->r[0],c->r[28]); // 80253AA0
  if (crb(c,2)) { goto L_80253AE0; } // 80253AA4
  c->r[3]=c->r[1]+0x00000010u; // 80253AA8
  c->r[4]=0u+0x00000000u; // 80253AAC
  c->r[25]=c->r[25]+0x00000001u; // 80253AB0
  c->lr=0x80253AB8u; f_8023AA60(c); // 80253AB4
L_80253AB8:;
  c->r[3]=c->r[26]|c->r[26]; // 80253AB8
  c->lr=0x80253AC0u; f_8023AA90(c); // 80253ABC
  c->r[0]=R32(c->r[1]+0x00000010u); // 80253AC0
  c->r[4]=c->r[1]+0x00000008u; // 80253AC4
  W32(c->r[1]+0x00000008u,c->r[3]); // 80253AC8
  c->r[3]=c->r[1]+0x0000000Cu; // 80253ACC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80253AD0
  c->lr=0x80253AD8u; f_8023AA74(c); // 80253AD4
  cmps(c,0,(int32_t)c->r[3],0); // 80253AD8
  if (!crb(c,2)) { IRQCHK(c); goto L_80253A98; } // 80253ADC
L_80253AE0:;
  c->r[0]=c->r[25]+0xFFFFFFFFu; // 80253AE0
L_80253AE4:;
  c->r[28]=0u+0x803E0000u; // 80253AE4
  c->r[3]=0u+0x80460000u; // 80253AE8
  c->r[28]=c->r[28]+0x0000528Cu; // 80253AEC
  W32(c->r[29]+0x00000FF4u,c->r[0]); // 80253AF0
  c->r[6]=c->r[28]+0x00000119u; // 80253AF4
  c->r[5]=R32(c->r[29]+0x00000014u); // 80253AF8
  c->r[7]=c->r[6]|c->r[6]; // 80253AFC
  c->r[3]=c->r[3]+0xFFFFD468u; // 80253B00
  c->r[8]=c->r[1]+0x00000014u; // 80253B04
  c->r[4]=0u+0x00000000u; // 80253B08
  c->lr=0x80253B10u; f_8023971C(c); // 80253B0C
  c->r[3]=c->r[29]|c->r[29]; // 80253B10
  c->r[4]=c->r[30]|c->r[30]; // 80253B14
  c->r[5]=c->r[31]|c->r[31]; // 80253B18
  c->lr=0x80253B20u; f_801D9BC4(c); // 80253B1C
  c->r[3]=c->r[29]|c->r[29]; // 80253B20
  c->r[4]=c->r[30]|c->r[30]; // 80253B24
  c->r[5]=c->r[31]|c->r[31]; // 80253B28
  c->lr=0x80253B30u; f_80254760(c); // 80253B2C
  c->r[25]=c->r[3]|c->r[3]; // 80253B30
  c->lr=0x80253B38u; f_801D4450(c); // 80253B34
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 80253B38
  c->r[3]=c->r[29]|c->r[29]; // 80253B3C
  c->r[4]=c->r[29]+c->r[0]; // 80253B40
  c->r[25]=R32(c->r[4]+0x00001FF0u); // 80253B44
  c->lr=0x80253B4Cu; f_80253F28(c); // 80253B48
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80253B4C
  c->r[5]=c->r[29]+0x0000115Cu; // 80253B50
  c->r[4]=0u+0x00000139u; // 80253B54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80253B58
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80253B5C
  c->ctr=c->r[12]; // 80253B60
  if (true) { c->lr=0x80253B68u; dispatch(c,c->ctr); } // 80253B64
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80253B68
  c->r[4]=c->r[25]+0x00000001u; // 80253B6C
  c->r[5]=c->r[29]+0x000012D0u; // 80253B70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80253B74
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80253B78
  c->ctr=c->r[12]; // 80253B7C
  if (true) { c->lr=0x80253B84u; dispatch(c,c->ctr); } // 80253B80
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80253B84
  c->r[4]=c->r[25]|c->r[25]; // 80253B88
  c->r[5]=c->r[1]+0x00000018u; // 80253B8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80253B90
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80253B94
  c->ctr=c->r[12]; // 80253B98
  if (true) { c->lr=0x80253BA0u; dispatch(c,c->ctr); } // 80253B9C
  c->r[5]=R32(c->r[1]+0x00000020u); // 80253BA0
  c->r[3]=c->r[29]+0x000011C8u; // 80253BA4
  c->r[4]=c->r[28]+0x00000121u; // 80253BA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80253BAC
  c->lr=0x80253BB4u; f_80291CC4(c); // 80253BB0
  c->r[0]=R32(c->r[29]+0x000015B0u); // 80253BB4
  W32(c->r[29]+0x000012C8u,c->r[0]); // 80253BB8
L_80253BBC:;
  {uint32_t ea=c->r[1]+0x00000074u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80253BBC
  c->r[0]=R32(c->r[1]+0x00000094u); // 80253BC0
  c->lr=c->r[0]; // 80253BC4
  c->r[1]=c->r[1]+0x00000090u; // 80253BC8
  return; // 80253BCC
}

// fn_80253BD0
void f_80253BD0(Ctx* __restrict c) {
  trace_call(0x80253BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253BD0
  c->r[0]=c->lr; // 80253BD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80253BD8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80253BDC
  c->r[28]=c->r[3]|c->r[3]; // 80253BE0
  c->r[29]=c->r[4]|c->r[4]; // 80253BE4
  c->r[30]=c->r[5]|c->r[5]; // 80253BE8
  c->r[0]=R32(c->r[3]+0x00000FF0u); // 80253BEC
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80253BF0
  if (crb(c,2)) { goto L_80253C54; } // 80253BF4
  cmpu(c,0,c->r[5],0x00000001u); // 80253BF8
  if (crb(c,0)) { goto L_80253C54; } // 80253BFC
  cmpu(c,0,c->r[5],0x00000003u); // 80253C00
  if (crb(c,1)) { goto L_80253C54; } // 80253C04
  c->r[31]=0u+0x803E0000u; // 80253C08
  c->r[6]=c->r[29]|c->r[29]; // 80253C0C
  c->r[31]=c->r[31]+0x0000528Cu; // 80253C10
  c->r[3]=c->r[1]+0x00000008u; // 80253C14
  c->r[4]=c->r[31]+0x00000090u; // 80253C18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80253C1C
  c->lr=0x80253C24u; f_80291CC4(c); // 80253C20
  c->r[6]=c->r[31]+0x00000119u; // 80253C24
  c->r[3]=0u+0x80460000u; // 80253C28
  c->r[4]=R32(c->r[28]+0x00000FF4u); // 80253C2C
  c->r[7]=c->r[6]|c->r[6]; // 80253C30
  c->r[5]=R32(c->r[28]+0x00000014u); // 80253C34
  c->r[3]=c->r[3]+0xFFFFD468u; // 80253C38
  c->r[8]=c->r[1]+0x00000008u; // 80253C3C
  c->lr=0x80253C44u; f_8023971C(c); // 80253C40
  c->r[3]=c->r[28]|c->r[28]; // 80253C44
  c->r[4]=c->r[29]|c->r[29]; // 80253C48
  c->r[5]=c->r[30]|c->r[30]; // 80253C4C
  c->lr=0x80253C54u; f_801D9C40(c); // 80253C50
L_80253C54:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80253C54
  c->r[0]=R32(c->r[1]+0x00000024u); // 80253C58
  c->lr=c->r[0]; // 80253C5C
  c->r[1]=c->r[1]+0x00000020u; // 80253C60
  return; // 80253C64
}

// fn_80253C68
void f_80253C68(Ctx* __restrict c) {
  trace_call(0x80253C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253C68
  c->r[0]=c->lr; // 80253C6C
  c->r[4]=0u+0xFFFFFFFFu; // 80253C70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80253C74
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80253C78
  c->r[31]=c->r[3]|c->r[3]; // 80253C7C
  c->r[0]=R32(c->r[3]+0x00000FF0u); // 80253C80
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80253C84
  if (crb(c,2)) { goto L_80253CC8; } // 80253C88
  c->r[0]=R8(c->r[3]+0x0000026Fu); // 80253C8C
  c->r[0]=sraw(c,c->r[0],4); // 80253C90
  cmpu(c,0,c->r[0],0x00000001u); // 80253C94
  if (crb(c,0)) { goto L_80253CC8; } // 80253C98
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80253C9C
  cmpu(c,0,c->r[0],0x00000003u); // 80253CA0
  if (crb(c,1)) { goto L_80253CC8; } // 80253CA4
  c->r[4]=R8(c->r[3]+0x00001114u); // 80253CA8
  c->r[5]=R32(c->r[3]+0x000015B0u); // 80253CAC
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); // 80253CB0
  c->r[3]=addc(c,~c->r[0],c->r[4],c->xer_ca); // 80253CB4
  c->r[0]=c->r[3]+0x00000004u; // 80253CB8
  c->r[3]=c->r[0]-c->r[5]; // 80253CBC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80253CC0
  c->r[4]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80253CC4
L_80253CC8:;
  cmps(c,0,(int32_t)c->r[4],1); // 80253CC8
  if (!crb(c,2)) { goto L_80253D08; } // 80253CCC
  c->r[28]=0u+0x00000000u; // 80253CD0
  c->r[30]=0u+0x00000000u; // 80253CD4
L_80253CD8:;
  c->r[29]=c->r[31]+c->r[30]; // 80253CD8
  c->lr=0x80253CE0u; f_802324FC(c); // 80253CDC
  c->r[4]=R32(c->r[29]+0x00001A1Cu); // 80253CE0
  c->r[5]=R32(c->r[29]+0x00001B80u); // 80253CE4
  c->r[6]=R32(c->r[29]+0x00001B84u); // 80253CE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80253CEC
  c->lr=0x80253CF4u; f_80232C04(c); // 80253CF0
  c->r[28]=c->r[28]+0x00000001u; // 80253CF4
  c->r[30]=c->r[30]+0x00000174u; // 80253CF8
  cmps(c,0,(int32_t)c->r[28],2); // 80253CFC
  if (crb(c,0)) { IRQCHK(c); goto L_80253CD8; } // 80253D00
  goto L_80253D50; // 80253D04
L_80253D08:;
  cmps(c,0,(int32_t)c->r[4],0); // 80253D08
  if (!crb(c,2)) { goto L_80253D20; } // 80253D0C
  c->lr=0x80253D14u; f_802324FC(c); // 80253D10
  c->r[4]=0u+0x0000012Fu; // 80253D14
  c->lr=0x80253D1Cu; f_8023284C(c); // 80253D18
  goto L_80253D50; // 80253D1C
L_80253D20:;
  c->r[28]=0u+0x00000000u; // 80253D20
  c->r[30]=0u+0x00000000u; // 80253D24
  goto L_80253D44; // 80253D28
L_80253D2C:;
  c->lr=0x80253D30u; f_802324FC(c); // 80253D2C
  c->r[4]=c->r[31]+c->r[30]; // 80253D30
  c->r[4]=R32(c->r[4]+0x00000F98u); // 80253D34
  c->lr=0x80253D3Cu; f_80232EF0(c); // 80253D38
  c->r[28]=c->r[28]+0x00000001u; // 80253D3C
  c->r[30]=c->r[30]+0x00000004u; // 80253D40
L_80253D44:;
  c->r[0]=R32(c->r[31]+0x00000F94u); // 80253D44
  cmpu(c,0,c->r[28],c->r[0]); // 80253D48
  if (crb(c,0)) { IRQCHK(c); goto L_80253D2C; } // 80253D4C
L_80253D50:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80253D50
  c->r[0]=R32(c->r[1]+0x00000024u); // 80253D54
  c->lr=c->r[0]; // 80253D58
  c->r[1]=c->r[1]+0x00000020u; // 80253D5C
  return; // 80253D60
}

// fn_80253D64
void f_80253D64(Ctx* __restrict c) {
  trace_call(0x80253D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253D64
  c->r[0]=c->lr; // 80253D68
  W32(c->r[1]+0x00000054u,c->r[0]); // 80253D6C
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80253D70
  c->r[26]=0u+0x803E0000u; // 80253D74
  c->r[24]=c->r[3]|c->r[3]; // 80253D78
  c->r[25]=0u+0x00000005u; // 80253D7C
  c->r[26]=c->r[26]+0x0000528Cu; // 80253D80
  c->r[27]=0u+0x80810000u; // 80253D84
  c->r[28]=0u+0x80460000u; // 80253D88
  c->r[30]=0u+0xFFFFFFFFu; // 80253D8C
  c->r[23]=0u+0x00000001u; // 80253D90
  c->r[31]=0u+0x00000000u; // 80253D94
  c->r[29]=0u+0x00000002u; // 80253D98
L_80253D9C:;
  c->r[3]=c->r[24]|c->r[24]; // 80253D9C
  c->r[4]=c->r[25]|c->r[25]; // 80253DA0
  c->r[5]=c->r[1]+0x00000009u; // 80253DA4
  c->r[6]=c->r[1]+0x00000008u; // 80253DA8
  c->lr=0x80253DB0u; f_80254718(c); // 80253DAC
  c->r[4]=R32(c->r[24]+0x00000FF0u); // 80253DB0
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 80253DB4
  if (crb(c,2)) { goto L_80253DDC; } // 80253DB8
  c->r[0]=R8(c->r[1]+0x00000008u); // 80253DBC
  c->r[3]=R8(c->r[1]+0x00000009u); // 80253DC0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80253DC4
  c->r[0]=c->r[24]+c->r[0]; // 80253DC8
  c->r[3]=c->r[3]+c->r[0]; // 80253DCC
  c->r[0]=R8(c->r[3]+0x00000270u); // 80253DD0
  cmps(c,0,(int32_t)c->r[0],0); // 80253DD4
  if (crb(c,2)) { goto L_80253F08; } // 80253DD8
L_80253DDC:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 80253DDC
  if (crb(c,2)) { goto L_80253E04; } // 80253DE0
  c->r[0]=R8(c->r[1]+0x00000008u); // 80253DE4
  c->r[3]=R8(c->r[1]+0x00000009u); // 80253DE8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80253DEC
  c->r[0]=c->r[24]+c->r[0]; // 80253DF0
  c->r[3]=c->r[3]+c->r[0]; // 80253DF4
  c->r[0]=R8(c->r[3]+0x0000100Cu); // 80253DF8
  cmps(c,0,(int32_t)c->r[0],0); // 80253DFC
  if (crb(c,2)) { goto L_80253F08; } // 80253E00
L_80253E04:;
  c->r[3]=c->r[25]|c->r[25]; // 80253E04
  c->lr=0x80253E0Cu; f_801D4450(c); // 80253E08
  c->r[5]=R8(c->r[1]+0x00000008u); // 80253E0C
  c->r[22]=c->r[3]|c->r[3]; // 80253E10
  c->r[6]=R8(c->r[1]+0x00000009u); // 80253E14
  c->r[3]=c->r[1]+0x00000018u; // 80253E18
  c->r[4]=c->r[26]+0x00000124u; // 80253E1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80253E20
  c->lr=0x80253E28u; f_80291CC4(c); // 80253E24
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80253E28
  c->r[4]=c->r[22]|c->r[22]; // 80253E2C
  c->lr=0x80253E34u; f_801F8B60(c); // 80253E30
  c->r[4]=R8(c->r[24]+0x00001114u); // 80253E34
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80253E38
  c->r[5]=c->r[3]+0x00000001u; // 80253E3C
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); // 80253E40
  c->r[3]=addc(c,~c->r[0],c->r[4],c->xer_ca); // 80253E44
  c->r[0]=c->r[3]+0x00000004u; // 80253E48
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80253E4C
  if (crb(c,0)) { goto L_80253E8C; } // 80253E50
  c->r[0]=c->r[27]+0xFFFF80FFu; // 80253E54
  c->r[3]=c->r[28]+0xFFFFD468u; // 80253E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80253E5C
  c->r[5]=c->r[1]+0x00000018u; // 80253E60
  c->r[6]=c->r[1]+0x00000014u; // 80253E64
  c->r[4]=R32(c->r[24]+0x00000014u); // 80253E68
  c->lr=0x80253E70u; f_8014CE14(c); // 80253E6C
  c->r[0]=R8(c->r[1]+0x00000008u); // 80253E70
  c->r[3]=R8(c->r[1]+0x00000009u); // 80253E74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80253E78
  c->r[0]=c->r[24]+c->r[0]; // 80253E7C
  c->r[3]=c->r[3]+c->r[0]; // 80253E80
  W8(c->r[3]+0x00000FF8u,c->r[29]); // 80253E84
  goto L_80253F08; // 80253E88
L_80253E8C:;
  c->r[3]=c->r[22]|c->r[22]; // 80253E8C
  c->lr=0x80253E94u; f_801D43EC(c); // 80253E90
  c->r[0]=R32(c->r[24]+0x00001FDCu); // 80253E94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80253E98
  if (crb(c,1)) { goto L_80253ED4; } // 80253E9C
  W32(c->r[1]+0x00000010u,c->r[30]); // 80253EA0
  c->r[3]=c->r[28]+0xFFFFD468u; // 80253EA4
  c->r[5]=c->r[1]+0x00000018u; // 80253EA8
  c->r[6]=c->r[1]+0x00000010u; // 80253EAC
  c->r[4]=R32(c->r[24]+0x00000014u); // 80253EB0
  c->lr=0x80253EB8u; f_8014CE14(c); // 80253EB4
  c->r[0]=R8(c->r[1]+0x00000008u); // 80253EB8
  c->r[3]=R8(c->r[1]+0x00000009u); // 80253EBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80253EC0
  c->r[0]=c->r[24]+c->r[0]; // 80253EC4
  c->r[3]=c->r[3]+c->r[0]; // 80253EC8
  W8(c->r[3]+0x00000FF8u,c->r[31]); // 80253ECC
  goto L_80253F08; // 80253ED0
L_80253ED4:;
  c->r[0]=c->r[27]+0xFFFF80FFu; // 80253ED4
  c->r[3]=c->r[28]+0xFFFFD468u; // 80253ED8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80253EDC
  c->r[5]=c->r[1]+0x00000018u; // 80253EE0
  c->r[6]=c->r[1]+0x0000000Cu; // 80253EE4
  c->r[4]=R32(c->r[24]+0x00000014u); // 80253EE8
  c->lr=0x80253EF0u; f_8014CE14(c); // 80253EEC
  c->r[0]=R8(c->r[1]+0x00000008u); // 80253EF0
  c->r[3]=R8(c->r[1]+0x00000009u); // 80253EF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80253EF8
  c->r[0]=c->r[24]+c->r[0]; // 80253EFC
  c->r[3]=c->r[3]+c->r[0]; // 80253F00
  W8(c->r[3]+0x00000FF8u,c->r[23]); // 80253F04
L_80253F08:;
  c->r[25]=c->r[25]+0x00000001u; // 80253F08
  cmps(c,0,(int32_t)c->r[25],20); // 80253F0C
  if (crb(c,0)) { IRQCHK(c); goto L_80253D9C; } // 80253F10
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80253F14
  c->r[0]=R32(c->r[1]+0x00000054u); // 80253F18
  c->lr=c->r[0]; // 80253F1C
  c->r[1]=c->r[1]+0x00000050u; // 80253F20
  return; // 80253F24
}

// fn_80253F28
void f_80253F28(Ctx* __restrict c) {
  trace_call(0x80253F28u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80253F28
  c->r[0]=c->lr; // 80253F2C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80253F30
  c->r[11]=c->r[1]+0x000000A0u; // 80253F34
  c->lr=0x80253F3Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80253F38
  c->r[0]=R32(c->r[3]+0x00000FF0u); // 80253F3C
  c->r[29]=c->r[3]|c->r[3]; // 80253F40
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 80253F44
  if (crb(c,2)) { goto L_80253F60; } // 80253F48
  c->r[0]=R8(c->r[3]+0x0000026Fu); // 80253F4C
  c->r[4]=rotl(c->r[0],0)&0x0000000Fu; // 80253F50
  c->r[5]=sraw(c,c->r[0],4); // 80253F54
  c->lr=0x80253F5Cu; f_80254760(c); // 80253F58
  c->r[27]=c->r[3]|c->r[3]; // 80253F5C
L_80253F60:;
  c->r[0]=R32(c->r[29]+0x00000FF0u); // 80253F60
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 80253F64
  if (crb(c,2)) { goto L_80253F84; } // 80253F68
  c->r[0]=R8(c->r[29]+0x0000110Cu); // 80253F6C
  c->r[3]=c->r[29]|c->r[29]; // 80253F70
  c->r[4]=rotl(c->r[0],0)&0x0000000Fu; // 80253F74
  c->r[5]=sraw(c,c->r[0],4); // 80253F78
  c->lr=0x80253F80u; f_80254760(c); // 80253F7C
  c->r[27]=c->r[3]|c->r[3]; // 80253F80
L_80253F84:;
  c->r[3]=c->r[27]|c->r[27]; // 80253F84
  c->lr=0x80253F8Cu; f_801D4450(c); // 80253F88
  cmps(c,0,(int32_t)c->r[3],0); // 80253F8C
  c->r[30]=c->r[3]|c->r[3]; // 80253F90
  if (crb(c,0)) { goto L_80254234; } // 80253F94
  c->r[5]=R8(c->r[29]+0x00001114u); // 80253F98
  c->r[3]=0u+0x803E0000u; // 80253F9C
  c->r[4]=R32(c->r[29]+0x00000014u); // 80253FA0
  c->r[3]=c->r[3]+0x0000528Cu; // 80253FA4
  c->r[0]=addc(c,c->r[5],0xFFFFFFFFu,0); // 80253FA8
  c->r[5]=addc(c,~c->r[0],c->r[5],c->xer_ca); // 80253FAC
  cmps(c,0,(int32_t)c->r[4],0); // 80253FB0
  c->r[31]=c->r[5]+0x00000004u; // 80253FB4
  c->r[5]=c->r[3]+0x0000012Du; // 80253FB8
  if (crb(c,0)) { goto L_802540A4; } // 80253FBC
  c->r[3]=0u+0x80460000u; // 80253FC0
  c->r[3]=c->r[3]+0xFFFFD468u; // 80253FC4
  c->r[3]=R32(c->r[3]+0x00000028u); // 80253FC8
  c->lr=0x80253FD0u; f_800482D4(c); // 80253FCC
  cmps(c,0,(int32_t)c->r[3],0); // 80253FD0
  if (crb(c,2)) { goto L_802540A4; } // 80253FD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80253FD8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80253FDC
  c->ctr=c->r[12]; // 80253FE0
  if (true) { c->lr=0x80253FE8u; dispatch(c,c->ctr); } // 80253FE4
  cmps(c,0,(int32_t)c->r[3],0); // 80253FE8
  c->r[26]=c->r[3]|c->r[3]; // 80253FEC
  if (crb(c,2)) { goto L_802540A4; } // 80253FF0
  c->r[3]=0u+0x80460000u; // 80253FF4
  c->r[0]=c->r[27]+0xFFFFFFFBu; // 80253FF8
  c->r[3]=R32(c->r[3]+0xFFFFD4A4u); // 80253FFC
  c->r[5]=0u+0x80410000u; // 80254000
  c->r[4]=0u+0x74690000u; // 80254004
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80254008
  c->r[12]=R32(c->r[3]+0x00000000u); // 8025400C
  c->r[5]=c->r[5]+0x000018E8u; // 80254010
  c->r[4]=c->r[4]+0x00006D67u; // 80254014
  c->r[6]=0u+0x00000000u; // 80254018
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8025401C
  c->r[5]=c->r[5]+c->r[0]; // 80254020
  c->ctr=c->r[12]; // 80254024
  if (true) { c->lr=0x8025402Cu; dispatch(c,c->ctr); } // 80254028
  cmps(c,0,(int32_t)c->r[3],0); // 8025402C
  if (crb(c,2)) { goto L_802540A4; } // 80254030
  c->r[4]=c->r[3]|c->r[3]; // 80254034
  c->r[3]=c->r[1]+0x00000018u; // 80254038
  c->r[5]=0u+0x00000000u; // 8025403C
  c->lr=0x80254044u; f_803921BC(c); // 80254040
  c->r[0]=R32(c->r[1]+0x00000030u); // 80254044
  c->r[3]=c->r[26]|c->r[26]; // 80254048
  c->r[0]=rotl(c->r[0],0)&0xFFFEFFFFu; // 8025404C
  c->r[0]=rotl(c->r[0],0)&0xFFFF9FFFu; // 80254050
  W32(c->r[1]+0x00000030u,c->r[0]); // 80254054
  c->lr=0x8025405Cu; f_80390BE8(c); // 80254058
  c->r[0]=R32(c->r[1]+0x00000018u); // 8025405C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80254060
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80254064
  W32(c->r[3]+0x00000004u,c->r[0]); // 80254068
  c->r[0]=R16(c->r[1]+0x00000020u); // 8025406C
  W16(c->r[3]+0x00000008u,c->r[0]); // 80254070
  c->r[0]=R16(c->r[1]+0x00000022u); // 80254074
  W16(c->r[3]+0x0000000Au,c->r[0]); // 80254078
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025407C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80254080
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80254084
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80254088
  c->r[0]=R16(c->r[1]+0x0000002Cu); // 8025408C
  W16(c->r[3]+0x00000014u,c->r[0]); // 80254090
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 80254094
  W16(c->r[3]+0x00000016u,c->r[0]); // 80254098
  c->r[0]=R32(c->r[1]+0x00000030u); // 8025409C
  W32(c->r[3]+0x00000018u,c->r[0]); // 802540A0
L_802540A4:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802540A4
  c->r[4]=c->r[30]|c->r[30]; // 802540A8
  c->lr=0x802540B0u; f_801F8B60(c); // 802540AC
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 802540B0
  c->r[3]=c->r[30]|c->r[30]; // 802540B4
  c->r[0]=c->r[4]+0x00000001u; // 802540B8
  W32(c->r[29]+0x000015B0u,c->r[0]); // 802540BC
  c->lr=0x802540C4u; f_801D4264(c); // 802540C0
  W32(c->r[29]+0x00001724u,c->r[3]); // 802540C4
  c->r[3]=c->r[30]|c->r[30]; // 802540C8
  c->lr=0x802540D0u; f_801D431C(c); // 802540CC
  W32(c->r[29]+0x00001898u,c->r[3]); // 802540D0
  c->r[3]=c->r[30]|c->r[30]; // 802540D4
  c->lr=0x802540DCu; f_801D4388(c); // 802540D8
  c->r[26]=0u+0x803E0000u; // 802540DC
  W32(c->r[29]+0x00001A0Cu,c->r[3]); // 802540E0
  c->r[26]=c->r[26]+0x0000528Cu; // 802540E4
  c->r[25]=0u+0x00000000u; // 802540E8
  c->r[28]=0u+0x00000000u; // 802540EC
  c->r[27]=0u+0xFFFFFFFFu; // 802540F0
L_802540F4:;
  c->r[3]=c->r[1]+0x00000008u; // 802540F4
  c->r[4]=c->r[26]+0x0000007Eu; // 802540F8
  c->r[5]=c->r[25]+0x00000001u; // 802540FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80254100
  c->lr=0x80254108u; f_80291CC4(c); // 80254104
  c->r[3]=c->r[29]|c->r[29]; // 80254108
  c->r[4]=c->r[1]+0x00000008u; // 8025410C
  c->lr=0x80254114u; f_801DA490(c); // 80254110
  c->r[4]=c->r[3]|c->r[3]; // 80254114
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80254118
  c->r[5]=c->r[29]+c->r[28]; // 8025411C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80254120
  c->r[5]=c->r[5]+0x00001444u; // 80254124
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80254128
  c->ctr=c->r[12]; // 8025412C
  if (true) { c->lr=0x80254134u; dispatch(c,c->ctr); } // 80254130
  c->r[3]=c->r[29]+c->r[28]; // 80254134
  cmps(c,0,(int32_t)c->r[25],3); // 80254138
  W32(c->r[3]+0x000014ACu,c->r[27]); // 8025413C
  if (!crb(c,2)) { goto L_80254174; } // 80254140
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80254144
  c->r[5]=c->r[1]+0x00000034u; // 80254148
  c->r[4]=R32(c->r[29]+0x00001A0Cu); // 8025414C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80254150
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80254154
  c->ctr=c->r[12]; // 80254158
  if (true) { c->lr=0x80254160u; dispatch(c,c->ctr); } // 8025415C
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 80254160
  c->r[3]=c->r[29]+0x0000190Cu; // 80254164
  c->r[4]=c->r[26]+0x00000121u; // 80254168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025416C
  c->lr=0x80254174u; f_80291CC4(c); // 80254170
L_80254174:;
  c->r[25]=c->r[25]+0x00000001u; // 80254174
  c->r[28]=c->r[28]+0x00000174u; // 80254178
  cmps(c,0,(int32_t)c->r[25],4); // 8025417C
  if (crb(c,0)) { IRQCHK(c); goto L_802540F4; } // 80254180
  c->r[4]=R32(c->r[29]+0x000015B0u); // 80254184
  c->r[28]=0u+0x803E0000u; // 80254188
  c->r[28]=c->r[28]+0x0000528Cu; // 8025418C
  c->r[3]=c->r[29]|c->r[29]; // 80254190
  c->r[0]=c->r[4]+0x00000001u; // 80254194
  W32(c->r[29]+0x00001B80u,c->r[0]); // 80254198
  c->r[4]=c->r[28]+0x0000013Cu; // 8025419C
  c->lr=0x802541A4u; f_801DA490(c); // 802541A0
  c->r[4]=c->r[3]|c->r[3]; // 802541A4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 802541A8
  c->r[5]=c->r[29]+0x00001A14u; // 802541AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802541B0
  c->r[12]=R32(c->r[12]+0x000000A8u); // 802541B4
  c->ctr=c->r[12]; // 802541B8
  if (true) { c->lr=0x802541C0u; dispatch(c,c->ctr); } // 802541BC
  c->r[0]=R32(c->r[29]+0x00001B80u); // 802541C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 802541C4
  if (crb(c,1)) { goto L_8025420C; } // 802541C8
  c->r[3]=c->r[29]|c->r[29]; // 802541CC
  c->r[4]=c->r[28]+0x0000014Bu; // 802541D0
  c->lr=0x802541D8u; f_801DA490(c); // 802541D4
  c->r[0]=R32(c->r[29]+0x000015B0u); // 802541D8
  c->r[5]=c->r[29]+0x00001B88u; // 802541DC
  c->r[4]=c->r[0]+c->r[3]; // 802541E0
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 802541E4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 802541E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802541EC
  c->r[12]=R32(c->r[12]+0x000000A8u); // 802541F0
  c->ctr=c->r[12]; // 802541F4
  if (true) { c->lr=0x802541FCu; dispatch(c,c->ctr); } // 802541F8
  c->r[3]=c->r[30]|c->r[30]; // 802541FC
  c->lr=0x80254204u; f_801D43EC(c); // 80254200
  W32(c->r[29]+0x00001B84u,c->r[3]); // 80254204
  goto L_80254234; // 80254208
L_8025420C:;
  c->r[0]=R32(c->r[29]+0x000015B0u); // 8025420C
  cmps(c,0,(int32_t)c->r[0],5); // 80254210
  if (!crb(c,2)) { goto L_80254234; } // 80254214
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80254218
  c->r[5]=c->r[29]+0x000015B8u; // 8025421C
  c->r[4]=0u+0x000007DFu; // 80254220
  c->r[12]=R32(c->r[3]+0x00000000u); // 80254224
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80254228
  c->ctr=c->r[12]; // 8025422C
  if (true) { c->lr=0x80254234u; dispatch(c,c->ctr); } // 80254230
L_80254234:;
  c->r[11]=c->r[1]+0x000000A0u; // 80254234
  c->lr=0x8025423Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80254238
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8025423C
  c->lr=c->r[0]; // 80254240
  c->r[1]=c->r[1]+0x000000A0u; // 80254244
  return; // 80254248
}

// fn_8025424C
void f_8025424C(Ctx* __restrict c) {
  trace_call(0x8025424Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025424C
  c->r[0]=c->lr; // 80254250
  W32(c->r[1]+0x00000054u,c->r[0]); // 80254254
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80254258
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8025425C
  c->r[11]=c->r[1]+0x00000040u; // 80254260
  c->lr=0x80254268u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80254264
  c->r[27]=0u+0x803E0000u; // 80254268
  {uint32_t ea=c->r[27]+0x00005280u; c->r[29]=R8(ea); c->r[27]=ea;} // 8025426C
  c->r[31]=c->r[4]|c->r[4]; // 80254270
  c->r[30]=c->r[3]|c->r[3]; // 80254274
  c->r[28]=R8(c->r[27]+0x00000001u); // 80254278
  c->r[12]=R8(c->r[27]+0x00000002u); // 8025427C
  c->r[11]=R8(c->r[27]+0x00000003u); // 80254280
  c->r[10]=R8(c->r[27]+0x00000004u); // 80254284
  c->r[9]=R8(c->r[27]+0x00000005u); // 80254288
  c->r[8]=R8(c->r[27]+0x00000006u); // 8025428C
  c->r[7]=R8(c->r[27]+0x00000007u); // 80254290
  c->r[6]=R8(c->r[27]+0x00000008u); // 80254294
  c->r[5]=R8(c->r[27]+0x00000009u); // 80254298
  c->r[4]=R8(c->r[27]+0x0000000Au); // 8025429C
  c->r[0]=R8(c->r[27]+0x0000000Bu); // 802542A0
  W8(c->r[1]+0x00000018u,c->r[29]); // 802542A4
  W8(c->r[1]+0x00000019u,c->r[28]); // 802542A8
  W8(c->r[1]+0x0000001Au,c->r[12]); // 802542AC
  W8(c->r[1]+0x0000001Bu,c->r[11]); // 802542B0
  W8(c->r[1]+0x0000001Cu,c->r[10]); // 802542B4
  W8(c->r[1]+0x0000001Du,c->r[9]); // 802542B8
  W8(c->r[1]+0x0000001Eu,c->r[8]); // 802542BC
  W8(c->r[1]+0x0000001Fu,c->r[7]); // 802542C0
  W8(c->r[1]+0x00000020u,c->r[6]); // 802542C4
  W8(c->r[1]+0x00000021u,c->r[5]); // 802542C8
  W8(c->r[1]+0x00000022u,c->r[4]); // 802542CC
  W8(c->r[1]+0x00000023u,c->r[0]); // 802542D0
  c->r[0]=R8(c->r[3]+0x0000110Cu); // 802542D4
  c->r[4]=sraw(c,c->r[0],4); // 802542D8
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 802542DC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)5); // 802542E0
  c->r[4]=c->r[3]+c->r[4]; // 802542E4
  c->r[4]=c->r[4]+c->r[0]; // 802542E8
  c->r[0]=R8(c->r[4]+0x00000FF8u); // 802542EC
  cmps(c,0,(int32_t)c->r[0],1); // 802542F0
  if (crb(c,2)) { goto L_8025436C; } // 802542F4
  if (!crb(c,0)) { goto L_80254308; } // 802542F8
  cmps(c,0,(int32_t)c->r[0],0); // 802542FC
  if (!crb(c,0)) { goto L_80254314; } // 80254300
  goto L_80254434; // 80254304
L_80254308:;
  cmps(c,0,(int32_t)c->r[0],3); // 80254308
  if (!crb(c,0)) { goto L_80254434; } // 8025430C
  goto L_802543C8; // 80254310
L_80254314:;
  c->r[28]=0u+0x803E0000u; // 80254314
  c->r[29]=0u+0x80460000u; // 80254318
  c->r[28]=c->r[28]+0x0000528Cu; // 8025431C
  c->r[5]=R32(c->r[30]+0x00000014u); // 80254320
  c->r[3]=c->r[29]+0xFFFFD468u; // 80254324
  c->r[4]=0u+0x00000001u; // 80254328
  c->r[6]=c->r[28]+0x0000015Au; // 8025432C
  c->lr=0x80254334u; f_8014A80C(c); // 80254330
  c->r[5]=R32(c->r[30]+0x00000014u); // 80254334
  c->r[3]=c->r[29]+0xFFFFD468u; // 80254338
  c->r[6]=c->r[28]+0x0000015Du; // 8025433C
  c->r[4]=0u+0x00000001u; // 80254340
  c->lr=0x80254348u; f_8014A80C(c); // 80254344
  c->r[0]=0u+0x00000001u; // 80254348
  c->r[27]=c->r[30]+0x00001FE4u; // 8025434C
  W8(c->r[30]+0x000002C0u,c->r[0]); // 80254350
  c->r[3]=c->r[1]+0x00000020u; // 80254354
  c->r[4]=c->r[28]+0x00000160u; // 80254358
  W8(c->r[30]+0x000002C1u,c->r[0]); // 8025435C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80254360
  c->lr=0x80254368u; f_80291CC4(c); // 80254364
  goto L_8025443C; // 80254368
L_8025436C:;
  c->r[28]=0u+0x803E0000u; // 8025436C
  c->r[29]=0u+0x80460000u; // 80254370
  c->r[28]=c->r[28]+0x0000528Cu; // 80254374
  c->r[5]=R32(c->r[30]+0x00000014u); // 80254378
  c->r[3]=c->r[29]+0xFFFFD468u; // 8025437C
  c->r[4]=0u+0x00000001u; // 80254380
  c->r[6]=c->r[28]+0x0000015Au; // 80254384
  c->lr=0x8025438Cu; f_8014A80C(c); // 80254388
  c->r[5]=R32(c->r[30]+0x00000014u); // 8025438C
  c->r[3]=c->r[29]+0xFFFFD468u; // 80254390
  c->r[6]=c->r[28]+0x0000015Du; // 80254394
  c->r[4]=0u+0x00000000u; // 80254398
  c->lr=0x802543A0u; f_8014A80C(c); // 8025439C
  c->r[3]=0u+0x00000001u; // 802543A0
  c->r[0]=0u+0x00000000u; // 802543A4
  W8(c->r[30]+0x000002C0u,c->r[3]); // 802543A8
  c->r[27]=c->r[30]+0x00001FECu; // 802543AC
  c->r[3]=c->r[1]+0x00000020u; // 802543B0
  c->r[4]=c->r[28]+0x00000163u; // 802543B4
  W8(c->r[30]+0x000002C1u,c->r[0]); // 802543B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802543BC
  c->lr=0x802543C4u; f_80291CC4(c); // 802543C0
  goto L_8025443C; // 802543C4
L_802543C8:;
  c->r[28]=0u+0x803E0000u; // 802543C8
  c->r[29]=0u+0x80460000u; // 802543CC
  c->r[28]=c->r[28]+0x0000528Cu; // 802543D0
  c->r[5]=R32(c->r[30]+0x00000014u); // 802543D4
  c->r[3]=c->r[29]+0xFFFFD468u; // 802543D8
  c->r[4]=0u+0x00000001u; // 802543DC
  c->r[6]=c->r[28]+0x0000015Au; // 802543E0
  c->lr=0x802543E8u; f_8014A80C(c); // 802543E4
  c->r[5]=R32(c->r[30]+0x00000014u); // 802543E8
  c->r[3]=c->r[29]+0xFFFFD468u; // 802543EC
  c->r[6]=c->r[28]+0x0000015Du; // 802543F0
  c->r[4]=0u+0x00000000u; // 802543F4
  c->lr=0x802543FCu; f_8014A80C(c); // 802543F8
  c->r[3]=0u+0x00000001u; // 802543FC
  c->r[0]=0u+0x00000000u; // 80254400
  W8(c->r[30]+0x000002C0u,c->r[3]); // 80254404
  c->r[27]=c->r[30]+0x00001FF4u; // 80254408
  c->r[3]=c->r[1]+0x0000001Cu; // 8025440C
  c->r[4]=c->r[28]+0x00000166u; // 80254410
  W8(c->r[30]+0x000002C1u,c->r[0]); // 80254414
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80254418
  c->lr=0x80254420u; f_80291CC4(c); // 8025441C
  c->r[3]=c->r[1]+0x00000020u; // 80254420
  c->r[4]=c->r[28]+0x0000016Au; // 80254424
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80254428
  c->lr=0x80254430u; f_80291CC4(c); // 8025442C
  goto L_8025443C; // 80254430
L_80254434:;
  c->r[0]=0u+0x00000400u; // 80254434
  W32(c->r[3]+0x00000FF0u,c->r[0]); // 80254438
L_8025443C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025443C
  if (crb(c,2)) { goto L_802544B4; } // 80254440
  c->r[28]=0u+0x80460000u; // 80254444
  c->r[4]=R32(c->r[30]+0x00000014u); // 80254448
  c->r[5]=R32(c->r[27]+0x00000000u); // 8025444C
  c->r[3]=c->r[28]+0xFFFFD468u; // 80254450
  c->r[6]=0u+0x00000001u; // 80254454
  c->lr=0x8025445Cu; f_8014A860(c); // 80254458
  c->r[4]=R32(c->r[30]+0x00000014u); // 8025445C
  c->r[3]=c->r[28]+0xFFFFD468u; // 80254460
  c->r[5]=R32(c->r[27]+0x00000000u); // 80254464
  c->lr=0x8025446Cu; f_8014A924(c); // 80254468
  c->r[4]=R32(c->r[27]+0x00000000u); // 8025446C
  cmps(c,0,(int32_t)c->r[4],0); // 80254470
  if (crb(c,0)) { goto L_8025448C; } // 80254474
  c->r[3]=c->r[28]+0xFFFFD468u; // 80254478
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[31]=c->ps1[31]=RF32(ea);} // 8025447C
  c->r[3]=c->r[3]+0x00000014u; // 80254480
  c->lr=0x80254488u; f_8014ACB4(c); // 80254484
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[31]);} // 80254488
L_8025448C:;
  c->r[0]=0u+0x00000001u; // 8025448C
  c->r[3]=0u+0x803E0000u; // 80254490
  c->r[3]=c->r[3]+0x0000528Cu; // 80254494
  W8(c->r[27]+0x00000004u,c->r[0]); // 80254498
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8025449C
  c->r[3]=c->r[3]+0x00000112u; // 802544A0
  c->r[4]=0u+0x00000000u; // 802544A4
  c->r[5]=0u+0xFFFFFFFFu; // 802544A8
  c->lr=0x802544B0u; f_80068DD8(c); // 802544AC
  goto L_802544F0; // 802544B0
L_802544B4:;
  c->r[28]=0u+0x80460000u; // 802544B4
  c->r[4]=R32(c->r[30]+0x00000014u); // 802544B8
  c->r[5]=R32(c->r[27]+0x00000000u); // 802544BC
  c->r[3]=c->r[28]+0xFFFFD468u; // 802544C0
  c->r[6]=0u+0x00000001u; // 802544C4
  c->lr=0x802544CCu; f_8014A860(c); // 802544C8
  c->r[4]=R32(c->r[30]+0x00000014u); // 802544CC
  c->r[3]=c->r[28]+0xFFFFD468u; // 802544D0
  c->r[5]=R32(c->r[27]+0x00000000u); // 802544D4
  c->lr=0x802544DCu; f_80155D5C(c); // 802544D8
  c->r[4]=R32(c->r[30]+0x00000014u); // 802544DC
  c->r[3]=c->r[28]+0xFFFFD468u; // 802544E0
  c->r[5]=R32(c->r[27]+0x00000000u); // 802544E4
  c->r[6]=0u+0x00000000u; // 802544E8
  c->lr=0x802544F0u; f_8014A860(c); // 802544EC
L_802544F0:;
  c->r[4]=R8(c->r[30]+0x00001114u); // 802544F0
  c->r[3]=c->r[30]|c->r[30]; // 802544F4
  c->r[6]=R8(c->r[30]+0x0000110Cu); // 802544F8
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); // 802544FC
  c->r[5]=addc(c,~c->r[0],c->r[4],c->xer_ca); // 80254500
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 80254504
  c->r[29]=c->r[5]+0x00000004u; // 80254508
  c->r[5]=sraw(c,c->r[6],4); // 8025450C
  c->lr=0x80254514u; f_80254760(c); // 80254510
  c->lr=0x80254518u; f_801D4450(c); // 80254514
  c->r[4]=R32(c->r[30]+0x000015B0u); // 80254518
  c->r[28]=0u+0x803E0000u; // 8025451C
  c->r[27]=c->r[3]|c->r[3]; // 80254520
  c->r[3]=c->r[30]|c->r[30]; // 80254524
  c->r[0]=c->r[4]+0x00000001u; // 80254528
  c->r[28]=c->r[28]+0x0000528Cu; // 8025452C
  W32(c->r[30]+0x00001B80u,c->r[0]); // 80254530
  c->r[4]=c->r[28]+0x0000013Cu; // 80254534
  c->lr=0x8025453Cu; f_801DA490(c); // 80254538
  c->r[4]=c->r[3]|c->r[3]; // 8025453C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80254540
  c->r[5]=c->r[30]+0x00001A14u; // 80254544
  c->r[12]=R32(c->r[3]+0x00000000u); // 80254548
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8025454C
  c->ctr=c->r[12]; // 80254550
  if (true) { c->lr=0x80254558u; dispatch(c,c->ctr); } // 80254554
  c->r[0]=R32(c->r[30]+0x00001B80u); // 80254558
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 8025455C
  if (crb(c,1)) { goto L_802545F4; } // 80254560
  c->r[3]=c->r[30]|c->r[30]; // 80254564
  c->r[4]=c->r[28]+0x0000014Bu; // 80254568
  c->lr=0x80254570u; f_801DA490(c); // 8025456C
  c->r[0]=R32(c->r[30]+0x000015B0u); // 80254570
  c->r[5]=c->r[30]+0x00001B88u; // 80254574
  c->r[4]=c->r[0]+c->r[3]; // 80254578
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8025457C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80254580
  c->r[12]=R32(c->r[3]+0x00000000u); // 80254584
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80254588
  c->ctr=c->r[12]; // 8025458C
  if (true) { c->lr=0x80254594u; dispatch(c,c->ctr); } // 80254590
  c->r[3]=c->r[27]|c->r[27]; // 80254594
  c->lr=0x8025459Cu; f_801D43EC(c); // 80254598
  cmps(c,0,(int32_t)c->r[31],0); // 8025459C
  W32(c->r[30]+0x00001B84u,c->r[3]); // 802545A0
  if (!crb(c,2)) { goto L_80254668; } // 802545A4
  c->r[0]=R32(c->r[30]+0x00001FDCu); // 802545A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802545AC
  if (!crb(c,1)) { goto L_80254668; } // 802545B0
  c->r[0]=0u+0x00000002u; // 802545B4
  c->r[5]=0u+0x00000000u; // 802545B8
  c->r[3]=0u+0x00000050u; // 802545BC
  c->ctr=c->r[0]; // 802545C0
L_802545C4:;
  c->r[4]=c->r[30]+c->r[5]; // 802545C4
  c->r[0]=R8(c->r[4]+0x0000110Du); // 802545C8
  cmpu(c,0,c->r[0],0x000000FFu); // 802545CC
  if (crb(c,2)) { goto L_802545D8; } // 802545D0
  W8(c->r[4]+0x0000026Du,c->r[3]); // 802545D4
L_802545D8:;
  c->r[5]=c->r[5]+0x00000001u; // 802545D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802545C4; } // 802545DC
  c->r[0]=0u+0x00000050u; // 802545E0
  c->r[3]=c->r[30]|c->r[30]; // 802545E4
  W8(c->r[30]+0x0000026Fu,c->r[0]); // 802545E8
  c->lr=0x802545F0u; f_801D991C(c); // 802545EC
  goto L_80254668; // 802545F0
L_802545F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 802545F4
  if (!crb(c,2)) { goto L_80254638; } // 802545F8
  c->r[0]=0u+0x00000002u; // 802545FC
  c->r[5]=0u+0x00000000u; // 80254600
  c->r[3]=0u+0x00000050u; // 80254604
  c->ctr=c->r[0]; // 80254608
L_8025460C:;
  c->r[4]=c->r[30]+c->r[5]; // 8025460C
  c->r[0]=R8(c->r[4]+0x0000110Du); // 80254610
  cmpu(c,0,c->r[0],0x000000FFu); // 80254614
  if (crb(c,2)) { goto L_80254620; } // 80254618
  W8(c->r[4]+0x0000026Du,c->r[3]); // 8025461C
L_80254620:;
  c->r[5]=c->r[5]+0x00000001u; // 80254620
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025460C; } // 80254624
  c->r[0]=0u+0x00000050u; // 80254628
  c->r[3]=c->r[30]|c->r[30]; // 8025462C
  W8(c->r[30]+0x0000026Fu,c->r[0]); // 80254630
  c->lr=0x80254638u; f_801D991C(c); // 80254634
L_80254638:;
  c->r[4]=0u+0x803E0000u; // 80254638
  c->r[3]=c->r[30]|c->r[30]; // 8025463C
  c->r[4]=c->r[4]+0x0000528Cu; // 80254640
  c->r[4]=c->r[4]+0x00000035u; // 80254644
  c->lr=0x8025464Cu; f_801DA490(c); // 80254648
  c->r[4]=c->r[3]|c->r[3]; // 8025464C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80254650
  c->r[5]=c->r[30]+0x00001B88u; // 80254654
  c->r[12]=R32(c->r[3]+0x00000000u); // 80254658
  c->r[12]=R32(c->r[12]+0x000000A8u); // 8025465C
  c->ctr=c->r[12]; // 80254660
  if (true) { c->lr=0x80254668u; dispatch(c,c->ctr); } // 80254664
L_80254668:;
  c->r[28]=0u+0x803E0000u; // 80254668
  c->r[27]=0u+0x00000000u; // 8025466C
  c->r[28]=c->r[28]+0x0000528Cu; // 80254670
  c->r[31]=0u+0x00000000u; // 80254674
  c->r[29]=0u+0x00000000u; // 80254678
L_8025467C:;
  c->r[5]=c->r[1]+0x00000018u; // 8025467C
  c->r[3]=c->r[1]+0x00000008u; // 80254680
  c->r[4]=c->r[28]+0x0000016Cu; // 80254684
  c->r[5]=c->r[5]+c->r[29]; // 80254688
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025468C
  c->lr=0x80254694u; f_80291CC4(c); // 80254690
  c->r[6]=c->r[30]+c->r[31]; // 80254694
  c->r[4]=R32(c->r[30]+0x00000014u); // 80254698
  c->r[3]=c->r[30]|c->r[30]; // 8025469C
  c->r[5]=c->r[1]+0x00000008u; // 802546A0
  c->r[6]=c->r[6]+0x00001A60u; // 802546A4
  c->r[7]=0u+0xFFFFFFFFu; // 802546A8
  c->lr=0x802546B0u; f_801DA518(c); // 802546AC
  cmps(c,0,(int32_t)c->r[27],2); // 802546B0
  if (!crb(c,2)) { goto L_802546E4; } // 802546B4
  c->r[3]=c->r[30]|c->r[30]; // 802546B8
  c->r[4]=c->r[1]+0x00000008u; // 802546BC
  c->lr=0x802546C4u; f_801DA490(c); // 802546C0
  c->r[4]=c->r[3]|c->r[3]; // 802546C4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 802546C8
  c->r[5]=c->r[30]+c->r[31]; // 802546CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802546D0
  c->r[5]=c->r[5]+0x00001A14u; // 802546D4
  c->r[12]=R32(c->r[12]+0x000000A8u); // 802546D8
  c->ctr=c->r[12]; // 802546DC
  if (true) { c->lr=0x802546E4u; dispatch(c,c->ctr); } // 802546E0
L_802546E4:;
  c->r[27]=c->r[27]+0x00000001u; // 802546E4
  c->r[29]=c->r[29]+0x00000004u; // 802546E8
  cmps(c,0,(int32_t)c->r[27],3); // 802546EC
  c->r[31]=c->r[31]+0x00000174u; // 802546F0
  if (crb(c,0)) { IRQCHK(c); goto L_8025467C; } // 802546F4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802546F8
  c->r[11]=c->r[1]+0x00000040u; // 802546FC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80254700
  c->lr=0x80254708u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80254704
  c->r[0]=R32(c->r[1]+0x00000054u); // 80254708
  c->lr=c->r[0]; // 8025470C
  c->r[1]=c->r[1]+0x00000050u; // 80254710
  return; // 80254714
}

// fn_80254718
void f_80254718(Ctx* __restrict c) {
  trace_call(0x80254718u);
  cmps(c,0,(int32_t)c->r[4],15); // 80254718
  if (!crb(c,0)) { goto L_8025474C; } // 8025471C
  c->r[7]=c->r[4]+0xFFFFFFFBu; // 80254720
  c->r[0]=sraw(c,c->r[7],1); // 80254724
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 80254728
  c->r[3]=rotl(c->r[7],1)&0x00000001u; // 8025472C
  c->r[0]=rotl(c->r[7],0)&0x00000001u; // 80254730
  W8(c->r[5]+0x00000000u,c->r[4]); // 80254734
  c->r[0]=c->r[0]^c->r[3]; // 80254738
  c->r[3]=c->r[0]-c->r[3]; // 8025473C
  c->r[0]=c->r[3]+0x00000001u; // 80254740
  W8(c->r[6]+0x00000000u,c->r[0]); // 80254744
  return; // 80254748
L_8025474C:;
  c->r[3]=c->r[4]+0xFFFFFFF1u; // 8025474C
  c->r[0]=0u+0x00000003u; // 80254750
  W8(c->r[5]+0x00000000u,c->r[3]); // 80254754
  W8(c->r[6]+0x00000000u,c->r[0]); // 80254758
  return; // 8025475C
}

// fn_80254760
void f_80254760(Ctx* __restrict c) {
  trace_call(0x80254760u);
  cmpu(c,0,c->r[5],0x00000003u); // 80254760
  c->r[3]=c->r[4]+0x0000000Fu; // 80254764
  if (!crb(c,0)) return; // 80254768
  c->r[0]=rotl(c->r[4],1)&0x000001FEu; // 8025476C
  c->r[3]=c->r[5]+c->r[0]; // 80254770
  c->r[3]=c->r[3]+0x00000004u; // 80254774
  return; // 80254778
}

// fn_8025477C
void f_8025477C(Ctx* __restrict c) {
  trace_call(0x8025477Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025477C
  c->r[0]=c->lr; // 80254780
  c->r[4]=0u+0x803E0000u; // 80254784
  W32(c->r[1]+0x00000024u,c->r[0]); // 80254788
  c->r[3]=c->r[1]+0x00000010u; // 8025478C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80254790
  c->r[31]=c->r[4]+0x0000528Cu; // 80254794
  c->r[4]=c->r[31]+0x000000EAu; // 80254798
  c->lr=0x802547A0u; f_80242B30(c); // 8025479C
  c->r[30]=0u+0x00000000u; // 802547A0
L_802547A4:;
  c->r[5]=c->r[30]|c->r[30]; // 802547A4
  c->r[3]=c->r[1]+0x00000008u; // 802547A8
  c->r[4]=c->r[31]+0x0000017Cu; // 802547AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802547B0
  c->lr=0x802547B8u; f_80291CC4(c); // 802547B4
  c->r[3]=c->r[1]+0x00000010u; // 802547B8
  c->r[4]=c->r[1]+0x00000008u; // 802547BC
  c->lr=0x802547C4u; f_80242B8C(c); // 802547C0
L_802547C4:;
  c->r[3]=c->r[1]+0x00000010u; // 802547C4
  c->r[4]=0u+0x00000002u; // 802547C8
  c->r[5]=0u+0x00000000u; // 802547CC
  c->lr=0x802547D4u; f_80242CA8(c); // 802547D0
  c->r[0]=R8(c->r[3]+0x00000000u); // 802547D4
  cmps(c,0,(int32_t)c->r[0],73); // 802547D8
  if (!crb(c,2)) { goto L_8025481C; } // 802547DC
  c->r[3]=c->r[1]+0x00000010u; // 802547E0
  c->r[4]=0u+0x00000002u; // 802547E4
  c->r[5]=0u+0x0000004Du; // 802547E8
  c->lr=0x802547F0u; f_80242CA8(c); // 802547EC
  c->lr=0x802547F4u; f_80295EAC(c); // 802547F0
  c->r[4]=c->r[3]|c->r[3]; // 802547F4
  c->r[3]=c->r[30]|c->r[30]; // 802547F8
  c->lr=0x80254800u; f_801D3854(c); // 802547FC
  cmps(c,0,(int32_t)c->r[3],0); // 80254800
  if (!crb(c,2)) { goto L_8025481C; } // 80254804
  c->r[3]=c->r[1]+0x00000010u; // 80254808
  c->r[4]=0u+0xFFFFFFFFu; // 8025480C
  c->lr=0x80254814u; f_80242AF0(c); // 80254810
  c->r[3]=0u+0x00000000u; // 80254814
  goto L_8025484C; // 80254818
L_8025481C:;
  c->r[3]=c->r[1]+0x00000010u; // 8025481C
  c->r[4]=c->r[1]+0x00000008u; // 80254820
  c->lr=0x80254828u; f_80242BE0(c); // 80254824
  cmps(c,0,(int32_t)c->r[3],0); // 80254828
  if (!crb(c,2)) { IRQCHK(c); goto L_802547C4; } // 8025482C
  c->r[30]=c->r[30]+0x00000001u; // 80254830
  cmps(c,0,(int32_t)c->r[30],4); // 80254834
  if (crb(c,0)) { IRQCHK(c); goto L_802547A4; } // 80254838
  c->r[3]=c->r[1]+0x00000010u; // 8025483C
  c->r[4]=0u+0xFFFFFFFFu; // 80254840
  c->lr=0x80254848u; f_80242AF0(c); // 80254844
  c->r[3]=0u+0x00000001u; // 80254848
L_8025484C:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8025484C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80254850
  c->lr=c->r[0]; // 80254854
  c->r[1]=c->r[1]+0x00000020u; // 80254858
  return; // 8025485C
}

// fn_80254860
void f_80254860(Ctx* __restrict c) {
  trace_call(0x80254860u);
  c->r[3]=0u+0x00000017u; // 80254860
  return; // 80254864
}

// fn_80254868
void f_80254868(Ctx* __restrict c) {
  trace_call(0x80254868u);
  {uint32_t ea=c->r[2]+0xFFFFD9D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254868
  c->r[3]=0u+0x805E0000u; // 8025486C
  {uint32_t ea=c->r[2]+0xFFFFD9CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80254870
  c->r[3]=c->r[3]+0x00007D30u; // 80254874
  c->f[3]=c->f[1]; // 80254878
  f_8003F588(c); return; // 8025487C
}

// fn_80254880
void f_80254880(Ctx* __restrict c) {
  trace_call(0x80254880u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254880
  c->r[0]=c->lr; // 80254884
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025488C
  c->r[31]=c->r[3]|c->r[3]; // 80254890
  c->lr=0x80254898u; f_8016C87C(c); // 80254894
  {uint32_t ea=c->r[2]+0xFFFFD9D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80254898
  c->r[3]=0u+0x80410000u; // 8025489C
  c->r[3]=c->r[3]+0x00001AB8u; // 802548A0
  c->r[4]=0u+0x00000000u; // 802548A4
  c->r[0]=0u+0x00000001u; // 802548A8
  W32(c->r[31]+0x00000004u,c->r[3]); // 802548AC
  c->r[3]=c->r[31]|c->r[31]; // 802548B0
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 802548B4
  W8(c->r[31]+0x00000014u,c->r[4]); // 802548B8
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 802548BC
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 802548C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802548C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802548C8
  c->lr=c->r[0]; // 802548CC
  c->r[1]=c->r[1]+0x00000010u; // 802548D0
  return; // 802548D4
}

// dtor_802548D8
void f_802548D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802548D8
  c->r[0]=c->lr; // 802548DC
  cmps(c,0,(int32_t)c->r[3],0); // 802548E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802548E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802548E8
  c->r[31]=c->r[3]|c->r[3]; // 802548EC
  if (crb(c,2)) { goto L_80254900; } // 802548F0
  cmps(c,0,(int32_t)c->r[4],0); // 802548F4
  if (!crb(c,1)) { goto L_80254900; } // 802548F8
  c->lr=0x80254900u; f_802896EC(c); // 802548FC
L_80254900:;
  c->r[3]=c->r[31]|c->r[31]; // 80254900
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80254904
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254908
  c->lr=c->r[0]; // 8025490C
  c->r[1]=c->r[1]+0x00000010u; // 80254910
  return; // 80254914
}

// fn_80254918
void f_80254918(Ctx* __restrict c) {
  trace_call(0x80254918u);
  return; // 80254918
}

// fn_8025491C
void f_8025491C(Ctx* __restrict c) {
  trace_call(0x8025491Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025491C
  c->r[0]=c->lr; // 80254920
  W32(c->r[1]+0x00000054u,c->r[0]); // 80254924
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80254928
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8025492C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80254930
  W32(c->r[1]+0x00000038u,c->r[30]); // 80254934
  c->r[30]=c->r[3]|c->r[3]; // 80254938
  c->r[3]=0u+0x00000000u; // 8025493C
  c->lr=0x80254944u; f_8004450C(c); // 80254940
  c->r[7]=R16(c->r[13]+0xFFFF93C6u); // 80254944
  c->r[3]=0u+0x00000006u; // 80254948
  c->r[6]=R16(c->r[13]+0xFFFF93C4u); // 8025494C
  c->r[4]=0u+0x00000000u; // 80254950
  c->r[9]=c->r[7]|c->r[7]; // 80254954
  c->r[5]=0u+0x00000000u; // 80254958
  c->r[8]=c->r[6]|c->r[6]; // 8025495C
  c->r[10]=0u+0x00000000u; // 80254960
  c->lr=0x80254968u; f_8004445C(c); // 80254964
  c->r[5]=R16(c->r[13]+0xFFFF93C4u); // 80254968
  c->r[3]=0u+0x00000006u; // 8025496C
  c->r[6]=R16(c->r[13]+0xFFFF93C6u); // 80254970
  c->r[4]=0u+0x00000000u; // 80254974
  c->r[7]=0u+0x00000000u; // 80254978
  c->r[8]=0u+0x00000000u; // 8025497C
  c->lr=0x80254984u; f_8004454C(c); // 80254980
  c->r[3]=0u+0x00000000u; // 80254984
  c->r[4]=0u+0x00000004u; // 80254988
  c->r[5]=0u+0x00000005u; // 8025498C
  c->r[6]=0u+0x00000000u; // 80254990
  c->lr=0x80254998u; f_80288274(c); // 80254994
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80254998
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025499C
  {uint32_t ea=c->r[2]+0xFFFFD9DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802549A0
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 802549A4
  fcmp(c,0,c->f[31],c->f[0]); // 802549A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802549AC
  if (!crb(c,2)) { goto L_802549C0; } // 802549B0
  c->r[0]=0u+0x00000000u; // 802549B4
  c->f[31]=c->f[0]; // 802549B8
  W8(c->r[30]+0x00000014u,c->r[0]); // 802549BC
L_802549C0:;
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 802549C0
  cmps(c,0,(int32_t)c->r[0],0); // 802549C4
  if (crb(c,2)) { goto L_802549D4; } // 802549C8
  {uint32_t ea=c->r[2]+0xFFFFD9DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802549CC
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[31]); // 802549D0
L_802549D4:;
  c->r[3]=0u+0x00000000u; // 802549D4
  c->r[4]=0u+0x00000000u; // 802549D8
  c->r[5]=0u+0x00000000u; // 802549DC
  c->r[6]=0u+0x00000004u; // 802549E0
  c->lr=0x802549E8u; f_80287C44(c); // 802549E4
  c->r[3]=0u+0x00000000u; // 802549E8
  c->r[4]=0u+0x0000000Cu; // 802549EC
  c->r[5]=0u+0x0000000Fu; // 802549F0
  c->r[6]=0u+0x00000008u; // 802549F4
  c->r[7]=0u+0x0000000Fu; // 802549F8
  c->lr=0x80254A00u; f_802877D8(c); // 802549FC
  c->r[3]=0u+0x00000000u; // 80254A00
  c->r[4]=0u+0x00000000u; // 80254A04
  c->r[5]=0u+0x00000000u; // 80254A08
  c->r[6]=0u+0x00000000u; // 80254A0C
  c->r[7]=0u+0x00000001u; // 80254A10
  c->r[8]=0u+0x00000001u; // 80254A14
  c->lr=0x80254A1Cu; f_80287858(c); // 80254A18
  c->r[3]=0u+0x00000000u; // 80254A1C
  c->r[4]=0u+0x00000007u; // 80254A20
  c->r[5]=0u+0x00000007u; // 80254A24
  c->r[6]=0u+0x00000007u; // 80254A28
  c->r[7]=0u+0x00000005u; // 80254A2C
  c->lr=0x80254A34u; f_80287818(c); // 80254A30
  c->r[3]=0u+0x00000000u; // 80254A34
  c->r[4]=0u+0x00000000u; // 80254A38
  c->r[5]=0u+0x00000000u; // 80254A3C
  c->r[6]=0u+0x00000000u; // 80254A40
  c->r[7]=0u+0x00000001u; // 80254A44
  c->r[8]=0u+0x00000001u; // 80254A48
  c->lr=0x80254A50u; f_802878B0(c); // 80254A4C
  c->r[3]=0u+0x00000001u; // 80254A50
  c->r[4]=0u+0x00000000u; // 80254A54
  c->r[5]=0u+0x00000000u; // 80254A58
  c->lr=0x80254A60u; f_80287AC8(c); // 80254A5C
  c->r[3]=0u+0x00000001u; // 80254A60
  c->r[4]=0u+0x00000000u; // 80254A64
  c->r[5]=0u+0x00000000u; // 80254A68
  c->r[6]=0u+0x00000004u; // 80254A6C
  c->lr=0x80254A74u; f_80287C44(c); // 80254A70
  c->r[3]=0u+0x00000001u; // 80254A74
  c->r[4]=0u+0x00000008u; // 80254A78
  c->r[5]=0u+0x00000002u; // 80254A7C
  c->r[6]=0u+0x0000000Bu; // 80254A80
  c->r[7]=0u+0x0000000Fu; // 80254A84
  c->lr=0x80254A8Cu; f_802877D8(c); // 80254A88
  c->r[3]=0u+0x00000001u; // 80254A8C
  c->r[4]=0u+0x00000000u; // 80254A90
  c->r[5]=0u+0x00000000u; // 80254A94
  c->r[6]=0u+0x00000000u; // 80254A98
  c->r[7]=0u+0x00000001u; // 80254A9C
  c->r[8]=0u+0x00000000u; // 80254AA0
  c->lr=0x80254AA8u; f_80287858(c); // 80254AA4
  c->r[3]=0u+0x00000001u; // 80254AA8
  c->r[4]=0u+0x00000007u; // 80254AAC
  c->r[5]=0u+0x00000007u; // 80254AB0
  c->r[6]=0u+0x00000007u; // 80254AB4
  c->r[7]=0u+0x00000005u; // 80254AB8
  c->lr=0x80254AC0u; f_80287818(c); // 80254ABC
  c->r[3]=0u+0x00000001u; // 80254AC0
  c->r[4]=0u+0x00000000u; // 80254AC4
  c->r[5]=0u+0x00000000u; // 80254AC8
  c->r[6]=0u+0x00000000u; // 80254ACC
  c->r[7]=0u+0x00000001u; // 80254AD0
  c->r[8]=0u+0x00000000u; // 80254AD4
  c->lr=0x80254ADCu; f_802878B0(c); // 80254AD8
  c->r[3]=0u+0x00000002u; // 80254ADC
  c->lr=0x80254AE4u; f_80287DA0(c); // 80254AE0
  c->r[0]=R8(c->r[13]+0xFFFF93B0u); // 80254AE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80254AE8
  if (!crb(c,2)) { goto L_80254B1C; } // 80254AEC
  c->r[31]=0u+0x80450000u; // 80254AF0
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 80254AF4
  c->lr=0x80254AFCu; f_800411F4(c); // 80254AF8
  c->r[4]=0u+0x80040000u; // 80254AFC
  c->r[5]=0u+0x805E0000u; // 80254B00
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 80254B04
  c->r[4]=c->r[4]+0x000014DCu; // 80254B08
  c->r[5]=c->r[5]+0x00007D40u; // 80254B0C
  c->lr=0x80254B14u; f_802895A4(c); // 80254B10
  c->r[0]=0u+0x00000001u; // 80254B14
  W8(c->r[13]+0xFFFF93B0u,c->r[0]); // 80254B18
L_80254B1C:;
  {uint32_t ea=c->r[2]+0xFFFFD9E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80254B1C
  c->r[5]=0u+0x43300000u; // 80254B20
  {uint32_t ea=c->r[2]+0xFFFFD9E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254B24
  c->r[31]=0u+0x80450000u; // 80254B28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 80254B2C
  W32(c->r[1]+0x00000010u,c->r[5]); // 80254B30
  {uint32_t ea=c->r[2]+0xFFFFDA00u; c->f[8]=RF64(ea);} // 80254B34
  c->f[2]=c->f[1]; // 80254B38
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80254B3C
  c->f[6]=c->f[1]; // 80254B40
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 80254B44
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80254B48
  c->f[7]=c->f[1]; // 80254B4C
  {uint32_t ea=c->r[2]+0xFFFFD9E4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80254B50
  c->r[6]=R16(c->r[13]+0xFFFF93C4u); // 80254B54
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 80254B58
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 80254B5C
  c->r[4]=R16(c->r[13]+0xFFFF93C6u); // 80254B60
  W32(c->r[1]+0x00000014u,c->r[6]); // 80254B64
  c->r[0]=R32(c->r[1]+0x00000024u); // 80254B68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80254B6C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80254B70
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80254B74
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[8]); // 80254B78
  W32(c->r[1]+0x00000018u,c->r[5]); // 80254B7C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80254B80
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80254B84
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[8]); // 80254B88
  W32(c->r[1]+0x00000028u,c->r[5]); // 80254B8C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 80254B90
  c->f[8]=c->ps1[8]=S(c->f[0]-c->f[8]); // 80254B94
  c->lr=0x80254B9Cu; f_8004202C(c); // 80254B98
  c->r[0]=R8(c->r[30]+0x00000014u); // 80254B9C
  cmps(c,0,(int32_t)c->r[0],0); // 80254BA0
  if (crb(c,2)) { goto L_80254BE4; } // 80254BA4
  c->r[3]=0u+0x804D0000u; // 80254BA8
  {uint32_t ea=c->r[2]+0xFFFFD9F0u; c->f[0]=RF64(ea);} // 80254BAC
  c->r[3]=c->r[3]+0x00003318u; // 80254BB0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254BB4
  fcmp(c,0,c->f[1],c->f[0]); // 80254BB8
  if (!crb(c,0)) { goto L_80254BD0; } // 80254BBC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80254BC0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80254BC4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 80254BC8
  goto L_80254C34; // 80254BCC
L_80254BD0:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254BD0
  {uint32_t ea=c->r[2]+0xFFFFD9F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80254BD4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80254BD8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 80254BDC
  goto L_80254C34; // 80254BE0
L_80254BE4:;
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 80254BE4
  cmps(c,0,(int32_t)c->r[0],0); // 80254BE8
  if (crb(c,2)) { goto L_80254C34; } // 80254BEC
  c->r[0]=R8(c->r[13]+0xFFFF93B0u); // 80254BF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80254BF4
  if (!crb(c,2)) { goto L_80254C24; } // 80254BF8
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 80254BFC
  c->lr=0x80254C04u; f_800411F4(c); // 80254C00
  c->r[4]=0u+0x80040000u; // 80254C04
  c->r[5]=0u+0x805E0000u; // 80254C08
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 80254C0C
  c->r[4]=c->r[4]+0x000014DCu; // 80254C10
  c->r[5]=c->r[5]+0x00007D40u; // 80254C14
  c->lr=0x80254C1Cu; f_802895A4(c); // 80254C18
  c->r[0]=0u+0x00000001u; // 80254C1C
  W8(c->r[13]+0xFFFF93B0u,c->r[0]); // 80254C20
L_80254C24:;
  c->r[3]=0u+0x80450000u; // 80254C24
  c->r[4]=0u+0x00000015u; // 80254C28
  c->r[3]=c->r[3]+0xFFFFA8E8u; // 80254C2C
  c->lr=0x80254C34u; f_80042E7C(c); // 80254C30
L_80254C34:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80254C34
  c->r[0]=R32(c->r[1]+0x00000054u); // 80254C38
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80254C3C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80254C40
  c->r[30]=R32(c->r[1]+0x00000038u); // 80254C44
  c->lr=c->r[0]; // 80254C48
  c->r[1]=c->r[1]+0x00000050u; // 80254C4C
  return; // 80254C50
}

// fn_80254C54
void f_80254C54(Ctx* __restrict c) {
  trace_call(0x80254C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254C54
  c->r[0]=c->lr; // 80254C58
  W32(c->r[1]+0x00000034u,c->r[0]); // 80254C5C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80254C60
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80254C64
  c->f[31]=c->f[1]; // 80254C68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80254C6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80254C70
  c->r[30]=c->r[4]|c->r[4]; // 80254C74
  W32(c->r[1]+0x00000014u,c->r[29]); // 80254C78
  c->r[29]=c->r[3]|c->r[3]; // 80254C7C
  c->r[0]=R8(c->r[13]+0xFFFF93B0u); // 80254C80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80254C84
  if (!crb(c,2)) { goto L_80254CB8; } // 80254C88
  c->r[31]=0u+0x80450000u; // 80254C8C
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 80254C90
  c->lr=0x80254C98u; f_800411F4(c); // 80254C94
  c->r[4]=0u+0x80040000u; // 80254C98
  c->r[5]=0u+0x805E0000u; // 80254C9C
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 80254CA0
  c->r[4]=c->r[4]+0x000014DCu; // 80254CA4
  c->r[5]=c->r[5]+0x00007D40u; // 80254CA8
  c->lr=0x80254CB0u; f_802895A4(c); // 80254CAC
  c->r[0]=0u+0x00000001u; // 80254CB0
  W8(c->r[13]+0xFFFF93B0u,c->r[0]); // 80254CB4
L_80254CB8:;
  c->r[3]=0u+0x80450000u; // 80254CB8
  c->r[4]=0u+0x00000015u; // 80254CBC
  c->r[3]=c->r[3]+0xFFFFA8E8u; // 80254CC0
  c->r[5]=0u+0x00000001u; // 80254CC4
  c->lr=0x80254CCCu; f_80042D5C(c); // 80254CC8
  c->f[0]=c->ps1[0]=S(c->f[31]); // 80254CCC
  {uint32_t ea=c->r[2]+0xFFFFD9E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254CD0
  c->r[0]=0u+0x00000001u; // 80254CD4
  W8(c->r[29]+0x0000000Cu,c->r[30]); // 80254CD8
  fcmp(c,0,c->f[1],c->f[0]); // 80254CDC
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[31]);} // 80254CE0
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 80254CE4
  W8(c->r[29]+0x00000014u,c->r[0]); // 80254CE8
  if (!crb(c,2)) { goto L_80254CFC; } // 80254CEC
  {uint32_t ea=c->r[2]+0xFFFFD9DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80254CF0
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80254CF4
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[0]);} // 80254CF8
L_80254CFC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80254CFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80254D00
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80254D04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80254D08
  c->r[30]=R32(c->r[1]+0x00000018u); // 80254D0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80254D10
  c->lr=c->r[0]; // 80254D14
  c->r[1]=c->r[1]+0x00000030u; // 80254D18
  return; // 80254D1C
}

// fn_80254D20
void f_80254D20(Ctx* __restrict c) {
  trace_call(0x80254D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254D20
  c->r[0]=c->lr; // 80254D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254D28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80254D2C
  c->r[31]=c->r[3]|c->r[3]; // 80254D30
  c->lr=0x80254D38u; f_8016C87C(c); // 80254D34
  {uint32_t ea=c->r[2]+0xFFFFDA08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80254D38
  c->r[3]=0u+0x80410000u; // 80254D3C
  c->r[3]=c->r[3]+0x00001AD8u; // 80254D40
  c->r[0]=0u+0x00000000u; // 80254D44
  W32(c->r[31]+0x00000004u,c->r[3]); // 80254D48
  c->r[3]=c->r[31]|c->r[31]; // 80254D4C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 80254D50
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 80254D54
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80254D58
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 80254D5C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 80254D60
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80254D64
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 80254D68
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80254D6C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80254D70
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80254D74
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 80254D78
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 80254D7C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 80254D80
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 80254D84
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 80254D88
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 80254D8C
  W32(c->r[31]+0x00000048u,c->r[0]); // 80254D90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80254D94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254D98
  c->lr=c->r[0]; // 80254D9C
  c->r[1]=c->r[1]+0x00000010u; // 80254DA0
  return; // 80254DA4
}

// fn_80254DA8
void f_80254DA8(Ctx* __restrict c) {
  trace_call(0x80254DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254DA8
  c->r[0]=c->lr; // 80254DAC
  cmps(c,0,(int32_t)c->r[3],0); // 80254DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80254DB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80254DB8
  c->r[31]=c->r[3]|c->r[3]; // 80254DBC
  if (crb(c,2)) { goto L_80254DD0; } // 80254DC0
  cmps(c,0,(int32_t)c->r[4],0); // 80254DC4
  if (!crb(c,1)) { goto L_80254DD0; } // 80254DC8
  c->lr=0x80254DD0u; f_802896EC(c); // 80254DCC
L_80254DD0:;
  c->r[3]=c->r[31]|c->r[31]; // 80254DD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80254DD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80254DD8
  c->lr=c->r[0]; // 80254DDC
  c->r[1]=c->r[1]+0x00000010u; // 80254DE0
  return; // 80254DE4
}

// fn_80254DE8
void f_80254DE8(Ctx* __restrict c) {
  trace_call(0x80254DE8u);
  return; // 80254DE8
}

// fn_80254DEC
void f_80254DEC(Ctx* __restrict c) {
  trace_call(0x80254DECu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80254DEC
  c->r[0]=c->lr; // 80254DF0
  c->r[4]=0u+0x000000FFu; // 80254DF4
  c->r[5]=0u+0x000000FFu; // 80254DF8
  W32(c->r[1]+0x00000094u,c->r[0]); // 80254DFC
  c->r[6]=0u+0x00000004u; // 80254E00
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80254E04
  c->r[31]=c->r[3]|c->r[3]; // 80254E08
  c->r[3]=0u+0x00000000u; // 80254E0C
  W32(c->r[1]+0x00000088u,c->r[30]); // 80254E10
  c->lr=0x80254E18u; f_80287C44(c); // 80254E14
  c->r[0]=R32(c->r[31]+0x00000048u); // 80254E18
  cmps(c,0,(int32_t)c->r[0],1); // 80254E1C
  if (crb(c,2)) { goto L_80254E4C; } // 80254E20
  if (!crb(c,0)) { goto L_80254E60; } // 80254E24
  cmps(c,0,(int32_t)c->r[0],0); // 80254E28
  if (!crb(c,0)) { goto L_80254E34; } // 80254E2C
  goto L_80254E60; // 80254E30
L_80254E34:;
  c->r[3]=0u+0x00000001u; // 80254E34
  c->r[4]=0u+0x00000004u; // 80254E38
  c->r[5]=0u+0x00000005u; // 80254E3C
  c->r[6]=0u+0x00000005u; // 80254E40
  c->lr=0x80254E48u; f_80288274(c); // 80254E44
  goto L_80254E60; // 80254E48
L_80254E4C:;
  c->r[3]=0u+0x00000001u; // 80254E4C
  c->r[4]=0u+0x00000001u; // 80254E50
  c->r[5]=0u+0x00000001u; // 80254E54
  c->r[6]=0u+0x00000005u; // 80254E58
  c->lr=0x80254E60u; f_80288274(c); // 80254E5C
L_80254E60:;
  c->r[0]=R8(c->r[13]+0xFFFF93B0u); // 80254E60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80254E64
  if (!crb(c,2)) { goto L_80254E98; } // 80254E68
  c->r[30]=0u+0x80450000u; // 80254E6C
  c->r[3]=c->r[30]+0xFFFFA8E8u; // 80254E70
  c->lr=0x80254E78u; f_800411F4(c); // 80254E74
  c->r[4]=0u+0x80040000u; // 80254E78
  c->r[5]=0u+0x805E0000u; // 80254E7C
  c->r[3]=c->r[30]+0xFFFFA8E8u; // 80254E80
  c->r[4]=c->r[4]+0x000014DCu; // 80254E84
  c->r[5]=c->r[5]+0x00007D50u; // 80254E88
  c->lr=0x80254E90u; f_802895A4(c); // 80254E8C
  c->r[0]=0u+0x00000001u; // 80254E90
  W8(c->r[13]+0xFFFF93B0u,c->r[0]); // 80254E94
L_80254E98:;
  c->r[30]=0u+0x80450000u; // 80254E98
  c->r[3]=0u+0x00010000u; // 80254E9C
  c->r[30]=c->r[30]+0xFFFFA8E8u; // 80254EA0
  c->r[4]=0u+0x00000000u; // 80254EA4
  c->r[3]=c->r[3]+0xFFFFFFFAu; // 80254EA8
  W16(c->r[30]+0x0000057Cu,c->r[4]); // 80254EAC
  {uint32_t ea=c->r[2]+0xFFFFDA0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80254EB0
  W16(c->r[30]+0x0000057Eu,c->r[4]); // 80254EB4
  c->r[0]=R16(c->r[13]+0xFFFF93C4u); // 80254EB8
  W16(c->r[30]+0x00000580u,c->r[3]); // 80254EBC
  c->r[9]=R16(c->r[13]+0xFFFF93C6u); // 80254EC0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254EC4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80254EC8
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 80254ECC
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80254ED0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254ED4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 80254ED8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80254EDC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80254EE0
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 80254EE4
  W16(c->r[30]+0x00000586u,c->r[0]); // 80254EE8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80254EEC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80254EF0
  W16(c->r[30]+0x00000588u,c->r[4]); // 80254EF4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80254EF8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[4]);} // 80254EFC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[3]);} // 80254F00
  c->r[8]=R32(c->r[1]+0x0000000Cu); // 80254F04
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 80254F08
  c->r[7]=R32(c->r[1]+0x00000014u); // 80254F0C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[1]);} // 80254F10
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 80254F14
  c->r[5]=R32(c->r[1]+0x00000024u); // 80254F18
  W8(c->r[30]+0x00000583u,c->r[6]); // 80254F1C
  W8(c->r[30]+0x00000582u,c->r[5]); // 80254F20
  W8(c->r[30]+0x00000584u,c->r[7]); // 80254F24
  W8(c->r[30]+0x00000585u,c->r[8]); // 80254F28
  W16(c->r[30]+0x0000058Au,c->r[3]); // 80254F2C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254F30
  {uint32_t ea=c->r[31]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80254F34
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 80254F38
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80254F3C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254F40
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 80254F44
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80254F48
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80254F4C
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 80254F50
  W16(c->r[30]+0x00000590u,c->r[0]); // 80254F54
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80254F58
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80254F5C
  W16(c->r[30]+0x00000592u,c->r[9]); // 80254F60
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80254F64
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[4]);} // 80254F68
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[3]);} // 80254F6C
  c->r[7]=R32(c->r[1]+0x0000002Cu); // 80254F70
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 80254F74
  c->r[6]=R32(c->r[1]+0x00000034u); // 80254F78
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[1]);} // 80254F7C
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 80254F80
  c->r[0]=R32(c->r[1]+0x00000044u); // 80254F84
  W8(c->r[30]+0x0000058Du,c->r[5]); // 80254F88
  W8(c->r[30]+0x0000058Cu,c->r[0]); // 80254F8C
  W8(c->r[30]+0x0000058Eu,c->r[6]); // 80254F90
  W8(c->r[30]+0x0000058Fu,c->r[7]); // 80254F94
  W16(c->r[30]+0x00000594u,c->r[3]); // 80254F98
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254F9C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 80254FA0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 80254FA4
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80254FA8
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 80254FAC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 80254FB0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80254FB4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80254FB8
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 80254FBC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80254FC0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80254FC4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80254FC8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[4]);} // 80254FCC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[3]);} // 80254FD0
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 80254FD4
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[2]);} // 80254FD8
  c->r[6]=R32(c->r[1]+0x00000054u); // 80254FDC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[1]);} // 80254FE0
  c->r[5]=R32(c->r[1]+0x0000005Cu); // 80254FE4
  c->r[0]=R32(c->r[1]+0x00000064u); // 80254FE8
  W8(c->r[30]+0x00000596u,c->r[0]); // 80254FEC
  c->r[0]=R8(c->r[13]+0xFFFF93B0u); // 80254FF0
  W8(c->r[30]+0x00000597u,c->r[5]); // 80254FF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80254FF8
  W8(c->r[30]+0x00000598u,c->r[6]); // 80254FFC
  W8(c->r[30]+0x00000599u,c->r[7]); // 80255000
  W16(c->r[30]+0x0000059Au,c->r[4]); // 80255004
  W16(c->r[30]+0x0000059Cu,c->r[9]); // 80255008
  W16(c->r[30]+0x0000059Eu,c->r[3]); // 8025500C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 80255010
  {uint32_t ea=c->r[31]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 80255014
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 80255018
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025501C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 80255020
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80255024
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 80255028
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8025502C
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 80255030
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80255034
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80255038
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8025503C
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[4]);} // 80255040
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[3]);} // 80255044
  c->r[5]=R32(c->r[1]+0x0000006Cu); // 80255048
  {uint32_t ea=c->r[1]+0x00000078u; WF64(ea,c->f[1]);} // 8025504C
  c->r[4]=R32(c->r[1]+0x00000074u); // 80255050
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 80255054
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 80255058
  c->r[0]=R32(c->r[1]+0x00000084u); // 8025505C
  W8(c->r[30]+0x000005A1u,c->r[3]); // 80255060
  W8(c->r[30]+0x000005A0u,c->r[0]); // 80255064
  W8(c->r[30]+0x000005A2u,c->r[4]); // 80255068
  W8(c->r[30]+0x000005A3u,c->r[5]); // 8025506C
  if (!crb(c,2)) { goto L_8025509C; } // 80255070
  c->r[3]=c->r[30]|c->r[30]; // 80255074
  c->lr=0x8025507Cu; f_800411F4(c); // 80255078
  c->r[4]=0u+0x80040000u; // 8025507C
  c->r[5]=0u+0x805E0000u; // 80255080
  c->r[3]=c->r[30]|c->r[30]; // 80255084
  c->r[4]=c->r[4]+0x000014DCu; // 80255088
  c->r[5]=c->r[5]+0x00007D50u; // 8025508C
  c->lr=0x80255094u; f_802895A4(c); // 80255090
  c->r[0]=0u+0x00000001u; // 80255094
  W8(c->r[13]+0xFFFF93B0u,c->r[0]); // 80255098
L_8025509C:;
  c->r[31]=0u+0x80450000u; // 8025509C
  c->r[3]=0u+0x00000000u; // 802550A0
  c->r[31]=c->r[31]+0xFFFFA8E8u; // 802550A4
  c->r[4]=0u+0x00000004u; // 802550A8
  c->lr=0x802550B0u; f_80287744(c); // 802550AC
  c->r[3]=0u+0x00000000u; // 802550B0
  c->lr=0x802550B8u; f_80284454(c); // 802550B4
  c->lr=0x802550BCu; f_80283B58(c); // 802550B8
  c->r[3]=0u+0x00000009u; // 802550BC
  c->r[4]=0u+0x00000001u; // 802550C0
  c->lr=0x802550C8u; f_80283564(c); // 802550C4
  c->r[3]=0u+0x0000000Bu; // 802550C8
  c->r[4]=0u+0x00000001u; // 802550CC
  c->lr=0x802550D4u; f_80283564(c); // 802550D0
  c->r[3]=0u+0x00000000u; // 802550D4
  c->r[4]=0u+0x00000009u; // 802550D8
  c->r[5]=0u+0x00000001u; // 802550DC
  c->r[6]=0u+0x00000002u; // 802550E0
  c->r[7]=0u+0x00000000u; // 802550E4
  c->lr=0x802550ECu; f_80283B8C(c); // 802550E8
  c->r[3]=0u+0x00000000u; // 802550EC
  c->r[4]=0u+0x0000000Bu; // 802550F0
  c->r[5]=0u+0x00000001u; // 802550F4
  c->r[6]=0u+0x00000005u; // 802550F8
  c->r[7]=0u+0x00000000u; // 802550FC
  c->lr=0x80255104u; f_80283B8C(c); // 80255100
  c->r[3]=0u+0x00000080u; // 80255104
  c->r[4]=0u+0x00000000u; // 80255108
  c->r[5]=0u+0x00000004u; // 8025510C
  c->lr=0x80255114u; f_80284FD0(c); // 80255110
  c->r[4]=R16(c->r[31]+0x00000580u); // 80255114
  c->r[5]=0u+0xCC010000u; // 80255118
  c->r[3]=R16(c->r[31]+0x0000057Eu); // 8025511C
  c->r[0]=R16(c->r[31]+0x0000057Cu); // 80255120
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80255124
  W16(c->r[5]+0xFFFF8000u,c->r[3]); // 80255128
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 8025512C
  c->r[6]=R8(c->r[31]+0x00000585u); // 80255130
  c->r[4]=R8(c->r[31]+0x00000584u); // 80255134
  c->r[3]=R8(c->r[31]+0x00000583u); // 80255138
  c->r[0]=R8(c->r[31]+0x00000582u); // 8025513C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80255140
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 80255144
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 80255148
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 8025514C
  c->r[4]=R16(c->r[31]+0x0000058Au); // 80255150
  c->r[3]=R16(c->r[31]+0x00000588u); // 80255154
  c->r[0]=R16(c->r[31]+0x00000586u); // 80255158
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 8025515C
  W16(c->r[5]+0xFFFF8000u,c->r[3]); // 80255160
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 80255164
  c->r[6]=R8(c->r[31]+0x0000058Fu); // 80255168
  c->r[4]=R8(c->r[31]+0x0000058Eu); // 8025516C
  c->r[3]=R8(c->r[31]+0x0000058Du); // 80255170
  c->r[0]=R8(c->r[31]+0x0000058Cu); // 80255174
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 80255178
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 8025517C
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 80255180
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 80255184
  c->r[4]=R16(c->r[31]+0x00000594u); // 80255188
  c->r[3]=R16(c->r[31]+0x00000592u); // 8025518C
  c->r[0]=R16(c->r[31]+0x00000590u); // 80255190
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 80255194
  W16(c->r[5]+0xFFFF8000u,c->r[3]); // 80255198
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 8025519C
  c->r[6]=R8(c->r[31]+0x00000599u); // 802551A0
  c->r[4]=R8(c->r[31]+0x00000598u); // 802551A4
  c->r[3]=R8(c->r[31]+0x00000597u); // 802551A8
  c->r[0]=R8(c->r[31]+0x00000596u); // 802551AC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 802551B0
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 802551B4
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 802551B8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 802551BC
  c->r[4]=R16(c->r[31]+0x0000059Eu); // 802551C0
  c->r[3]=R16(c->r[31]+0x0000059Cu); // 802551C4
  c->r[0]=R16(c->r[31]+0x0000059Au); // 802551C8
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802551CC
  W16(c->r[5]+0xFFFF8000u,c->r[3]); // 802551D0
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802551D4
  c->r[6]=R8(c->r[31]+0x000005A3u); // 802551D8
  c->r[4]=R8(c->r[31]+0x000005A2u); // 802551DC
  c->r[3]=R8(c->r[31]+0x000005A1u); // 802551E0
  c->r[0]=R8(c->r[31]+0x000005A0u); // 802551E4
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 802551E8
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 802551EC
  c->r[3]=0u+0x00000000u; // 802551F0
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 802551F4
  c->r[4]=0u+0x00000000u; // 802551F8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 802551FC
  c->lr=0x80255204u; f_80287744(c); // 80255200
  c->r[3]=0u+0x00000001u; // 80255204
  c->lr=0x8025520Cu; f_80284454(c); // 80255208
  c->r[0]=R32(c->r[1]+0x00000094u); // 8025520C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80255210
  c->r[30]=R32(c->r[1]+0x00000088u); // 80255214
  c->lr=c->r[0]; // 80255218
  c->r[1]=c->r[1]+0x00000090u; // 8025521C
  return; // 80255220
}

// fn_80255224
void f_80255224(Ctx* __restrict c) {
  trace_call(0x80255224u);
  {uint32_t ea=c->r[2]+0xFFFFDA10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255224
  fcmp(c,0,c->f[1],c->f[0]); // 80255228
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8025522C
  if (!crb(c,2)) { goto L_80255324; } // 80255230
  c->r[0]=R16(c->r[4]+0x00000000u); // 80255234
  W16(c->r[3]+0x00000000u,c->r[0]); // 80255238
  c->r[0]=R16(c->r[4]+0x00000002u); // 8025523C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80255240
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255244
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80255248
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025524C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80255250
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255254
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80255258
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025525C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80255260
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255264
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80255268
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025526C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80255270
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255274
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80255278
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025527C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 80255280
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255284
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80255288
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025528C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80255290
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255294
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80255298
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025529C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 802552A0
  {uint32_t ea=c->r[4]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802552A4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 802552A8
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802552AC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 802552B0
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802552B4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 802552B8
  {uint32_t ea=c->r[4]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802552BC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 802552C0
  c->r[0]=R32(c->r[4]+0x00000048u); // 802552C4
  W32(c->r[3]+0x00000048u,c->r[0]); // 802552C8
  c->r[5]=R32(c->r[4]+0x0000004Cu); // 802552CC
  c->r[0]=R32(c->r[4]+0x00000050u); // 802552D0
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 802552D4
  W32(c->r[3]+0x00000050u,c->r[0]); // 802552D8
  c->r[5]=R32(c->r[4]+0x00000054u); // 802552DC
  c->r[0]=R32(c->r[4]+0x00000058u); // 802552E0
  W32(c->r[3]+0x00000054u,c->r[5]); // 802552E4
  W32(c->r[3]+0x00000058u,c->r[0]); // 802552E8
  c->r[5]=R32(c->r[4]+0x0000005Cu); // 802552EC
  c->r[0]=R32(c->r[4]+0x00000060u); // 802552F0
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 802552F4
  W32(c->r[3]+0x00000060u,c->r[0]); // 802552F8
  c->r[5]=R32(c->r[4]+0x00000064u); // 802552FC
  c->r[0]=R32(c->r[4]+0x00000068u); // 80255300
  W32(c->r[3]+0x00000064u,c->r[5]); // 80255304
  W32(c->r[3]+0x00000068u,c->r[0]); // 80255308
  c->r[5]=R32(c->r[4]+0x0000006Cu); // 8025530C
  c->r[0]=R32(c->r[4]+0x00000070u); // 80255310
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 80255314
  W32(c->r[3]+0x00000070u,c->r[0]); // 80255318
  c->r[3]=0u+0x00000000u; // 8025531C
  return; // 80255320
L_80255324:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80255324
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255328
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8025532C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 80255330
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80255334
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80255338
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025533C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80255340
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 80255344
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80255348
  {uint32_t ea=c->r[5]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025534C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255350
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80255354
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 80255358
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8025535C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80255360
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255364
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80255368
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 8025536C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80255370
  {uint32_t ea=c->r[5]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80255374
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255378
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8025537C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 80255380
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80255384
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80255388
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025538C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80255390
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 80255394
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80255398
  {uint32_t ea=c->r[5]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025539C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802553A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802553A4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 802553A8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 802553AC
  {uint32_t ea=c->r[5]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802553B0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802553B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802553B8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 802553BC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 802553C0
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802553C4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802553C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802553CC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 802553D0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 802553D4
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802553D8
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802553DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802553E0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 802553E4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 802553E8
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802553EC
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802553F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802553F4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 802553F8
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 802553FC
  {uint32_t ea=c->r[5]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80255400
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255404
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80255408
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 8025540C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 80255410
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 80255414
  {uint32_t ea=c->r[4]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255418
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8025541C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 80255420
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80255424
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80255428
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8025542C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80255430
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 80255434
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80255438
  {uint32_t ea=c->r[5]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025543C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255440
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80255444
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 80255448
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 8025544C
  {uint32_t ea=c->r[5]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80255450
  {uint32_t ea=c->r[4]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255454
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80255458
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 8025545C
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 80255460
  c->r[0]=R32(c->r[4]+0x00000048u); // 80255464
  W32(c->r[3]+0x00000048u,c->r[0]); // 80255468
  c->r[3]=0u+0x00000001u; // 8025546C
  return; // 80255470
}

// fn_80255474
void f_80255474(Ctx* __restrict c) {
  trace_call(0x80255474u);
  c->r[3]=0u+0x804D0000u; // 80255474
  c->r[3]=c->r[3]+0x00003318u; // 80255478
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025547C
  return; // 80255480
}

// fn_80255484
void f_80255484(Ctx* __restrict c) {
  trace_call(0x80255484u);
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80255484
  if (crb(c,2)) return; // 80255488
  c->r[3]=R32(c->r[3]+0x00000050u); // 8025548C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80255490
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80255494
  c->ctr=c->r[12]; // 80255498
  if (true) { dispatch(c,c->ctr); return; } // 8025549C
  return; // 802554A0
}

// fn_802554A4
void f_802554A4(Ctx* __restrict c) {
  trace_call(0x802554A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802554A4
  c->r[0]=c->lr; // 802554A8
  cmps(c,0,(int32_t)c->r[3],0); // 802554AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802554B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802554B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802554B8
  c->r[30]=c->r[3]|c->r[3]; // 802554BC
  c->r[31]=c->r[30]|c->r[30]; // 802554C0
  if (crb(c,2)) { goto L_802554CC; } // 802554C4
  c->r[31]=c->r[3]+0x00000048u; // 802554C8
L_802554CC:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 802554CC
  c->r[3]=c->r[30]|c->r[30]; // 802554D0
  c->r[12]=R32(c->r[12]+0x00000304u); // 802554D4
  c->ctr=c->r[12]; // 802554D8
  if (true) { c->lr=0x802554E0u; dispatch(c,c->ctr); } // 802554DC
  c->r[12]=R32(c->r[30]+0x0000004Cu); // 802554E0
  c->r[3]=c->r[30]+0x0000004Cu; // 802554E4
  c->r[4]=c->r[31]|c->r[31]; // 802554E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802554EC
  c->ctr=c->r[12]; // 802554F0
  if (true) { c->lr=0x802554F8u; dispatch(c,c->ctr); } // 802554F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802554F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802554FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80255500
  c->lr=c->r[0]; // 80255504
  c->r[1]=c->r[1]+0x00000010u; // 80255508
  return; // 8025550C
}

// fn_80255510
void f_80255510(Ctx* __restrict c) {
  trace_call(0x80255510u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255510
  c->r[0]=c->lr; // 80255514
  c->r[5]=0u+0x803F0000u; // 80255518
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025551C
  c->r[0]=0u+0x00000000u; // 80255520
  c->r[5]=c->r[5]+0x00007A98u; // 80255524
  c->r[4]=c->r[1]+0x00000018u; // 80255528
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8025552C
  c->r[31]=c->r[3]|c->r[3]; // 80255530
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80255534
  W32(c->r[1]+0x00000020u,c->r[0]); // 80255538
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025553C
  W32(c->r[1]+0x00000018u,c->r[5]); // 80255540
  c->r[12]=R32(c->r[3]+0x00000010u); // 80255544
  W32(c->r[1]+0x00000010u,c->r[0]); // 80255548
  c->r[12]=R32(c->r[12]+0x00000038u); // 8025554C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80255550
  W32(c->r[1]+0x00000008u,c->r[0]); // 80255554
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80255558
  c->ctr=c->r[12]; // 8025555C
  if (true) { c->lr=0x80255564u; dispatch(c,c->ctr); } // 80255560
  cmps(c,0,(int32_t)c->r[31],0); // 80255564
  c->r[4]=c->r[31]|c->r[31]; // 80255568
  if (crb(c,2)) { goto L_80255574; } // 8025556C
  c->r[4]=c->r[31]+0x00000048u; // 80255570
L_80255574:;
  c->r[12]=R32(c->r[31]+0x0000004Cu); // 80255574
  c->r[3]=c->r[31]+0x0000004Cu; // 80255578
  c->r[12]=R32(c->r[12]+0x00000008u); // 8025557C
  c->ctr=c->r[12]; // 80255580
  if (true) { c->lr=0x80255588u; dispatch(c,c->ctr); } // 80255584
  c->r[0]=R32(c->r[1]+0x00000034u); // 80255588
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8025558C
  c->lr=c->r[0]; // 80255590
  c->r[1]=c->r[1]+0x00000030u; // 80255594
  return; // 80255598
}

// fn_8025559C
void f_8025559C(Ctx* __restrict c) {
  trace_call(0x8025559Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025559C
  c->r[0]=c->lr; // 802555A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802555A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802555A8
  c->r[31]=c->r[3]|c->r[3]; // 802555AC
  c->lr=0x802555B4u; f_801492FC(c); // 802555B0
  c->r[3]=0u+0x80410000u; // 802555B4
  c->r[5]=0u+0xFFFFFFFFu; // 802555B8
  c->r[3]=c->r[3]+0x00001E00u; // 802555BC
  c->r[0]=0u+0x00000003u; // 802555C0
  W32(c->r[31]+0x00000000u,c->r[3]); // 802555C4
  c->r[3]=0u+0x00000000u; // 802555C8
  W32(c->r[31]+0x00000020u,c->r[5]); // 802555CC
  c->ctr=c->r[0]; // 802555D0
L_802555D4:;
  c->r[4]=c->r[31]+c->r[3]; // 802555D4
  c->r[3]=c->r[3]+0x00000004u; // 802555D8
  W32(c->r[4]+0x00000024u,c->r[5]); // 802555DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802555D4; } // 802555E0
  c->r[3]=c->r[31]|c->r[31]; // 802555E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802555E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802555EC
  c->lr=c->r[0]; // 802555F0
  c->r[1]=c->r[1]+0x00000010u; // 802555F4
  return; // 802555F8
}

// fn_802555FC
void f_802555FC(Ctx* __restrict c) {
  trace_call(0x802555FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802555FC
  c->r[0]=c->lr; // 80255600
  cmps(c,0,(int32_t)c->r[3],0); // 80255604
  W32(c->r[1]+0x00000014u,c->r[0]); // 80255608
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8025560C
  c->r[30]=c->r[3]|c->r[3]; // 80255610
  c->r[31]=c->r[4]|c->r[4]; // 80255614
  if (crb(c,2)) { goto L_80255648; } // 80255618
  c->r[4]=0u+0x80410000u; // 8025561C
  c->r[4]=c->r[4]+0x00001E00u; // 80255620
  W32(c->r[3]+0x00000000u,c->r[4]); // 80255624
  c->lr=0x8025562Cu; f_80149420(c); // 80255628
  c->r[3]=c->r[30]|c->r[30]; // 8025562C
  c->r[4]=0u+0x00000000u; // 80255630
  c->lr=0x80255638u; f_8014936C(c); // 80255634
  cmps(c,0,(int32_t)c->r[31],0); // 80255638
  if (!crb(c,1)) { goto L_80255648; } // 8025563C
  c->r[3]=c->r[30]|c->r[30]; // 80255640
  c->lr=0x80255648u; f_802896EC(c); // 80255644
L_80255648:;
  c->r[3]=c->r[30]|c->r[30]; // 80255648
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8025564C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255650
  c->lr=c->r[0]; // 80255654
  c->r[1]=c->r[1]+0x00000010u; // 80255658
  return; // 8025565C
}

// fn_80255660
void f_80255660(Ctx* __restrict c) {
  trace_call(0x80255660u);
  c->r[4]=0u+0x00000000u; // 80255660
  c->r[5]=0u+0xFFFFFFFFu; // 80255664
  c->r[0]=0u+0x00000005u; // 80255668
  W32(c->r[3]+0x00000034u,c->r[5]); // 8025566C
  W32(c->r[3]+0x00000030u,c->r[5]); // 80255670
  W8(c->r[3]+0x00000038u,c->r[4]); // 80255674
  W8(c->r[3]+0x00000039u,c->r[4]); // 80255678
  W8(c->r[3]+0x0000003Au,c->r[4]); // 8025567C
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 80255680
  W32(c->r[3]+0x00000040u,c->r[0]); // 80255684
  return; // 80255688
}

// fn_8025568C
void f_8025568C(Ctx* __restrict c) {
  trace_call(0x8025568Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025568C
  c->r[0]=c->lr; // 80255690
  W32(c->r[1]+0x00000024u,c->r[0]); // 80255694
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80255698
  c->r[28]=c->r[3]|c->r[3]; // 8025569C
  c->r[0]=R8(c->r[3]+0x00000004u); // 802556A0
  cmps(c,0,(int32_t)c->r[0],0); // 802556A4
  if (!crb(c,2)) { goto L_802556B4; } // 802556A8
  c->r[3]=0u+0x00000000u; // 802556AC
  goto L_80255704; // 802556B0
L_802556B4:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 802556B4
  cmps(c,0,(int32_t)c->r[0],0); // 802556B8
  if (!crb(c,2)) { goto L_802556C8; } // 802556BC
  c->r[3]=0u+0x00000000u; // 802556C0
  goto L_80255704; // 802556C4
L_802556C8:;
  c->lr=0x802556CCu; f_80255C70(c); // 802556C8
  c->r[30]=0u+0x80460000u; // 802556CC
  c->r[29]=0u+0x00000000u; // 802556D0
  c->r[30]=c->r[30]+0xFFFFD468u; // 802556D4
  c->r[31]=0u+0x00000000u; // 802556D8
L_802556DC:;
  c->r[3]=c->r[28]+c->r[31]; // 802556DC
  c->r[4]=R32(c->r[28]+0x00000020u); // 802556E0
  c->r[5]=R32(c->r[3]+0x00000024u); // 802556E4
  c->r[3]=c->r[30]+0x00000014u; // 802556E8
  c->lr=0x802556F0u; f_8004867C(c); // 802556EC
  c->r[29]=c->r[29]+0x00000001u; // 802556F0
  c->r[31]=c->r[31]+0x00000004u; // 802556F4
  cmps(c,0,(int32_t)c->r[29],3); // 802556F8
  if (crb(c,0)) { IRQCHK(c); goto L_802556DC; } // 802556FC
  c->r[3]=0u+0x00000001u; // 80255700
L_80255704:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80255704
  c->r[0]=R32(c->r[1]+0x00000024u); // 80255708
  c->lr=c->r[0]; // 8025570C
  c->r[1]=c->r[1]+0x00000020u; // 80255710
  return; // 80255714
}

// fn_80255718
void f_80255718(Ctx* __restrict c) {
  trace_call(0x80255718u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255718
  c->r[0]=c->lr; // 8025571C
  c->r[4]=c->r[3]|c->r[3]; // 80255720
  W32(c->r[1]+0x00000014u,c->r[0]); // 80255724
  c->r[0]=R8(c->r[3]+0x00000004u); // 80255728
  cmps(c,0,(int32_t)c->r[0],0); // 8025572C
  if (!crb(c,2)) { goto L_8025573C; } // 80255730
  c->r[3]=0u+0x00000000u; // 80255734
  goto L_80255768; // 80255738
L_8025573C:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 8025573C
  cmps(c,0,(int32_t)c->r[0],0); // 80255740
  if (!crb(c,2)) { goto L_80255750; } // 80255744
  c->r[3]=0u+0x00000000u; // 80255748
  goto L_80255768; // 8025574C
L_80255750:;
  c->r[3]=0u+0x80460000u; // 80255750
  c->r[4]=R32(c->r[4]+0x00000020u); // 80255754
  c->r[3]=c->r[3]+0xFFFFD468u; // 80255758
  c->r[5]=0u+0x00000000u; // 8025575C
  c->lr=0x80255764u; f_80047E30(c); // 80255760
  c->r[3]=0u+0x00000001u; // 80255764
L_80255768:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255768
  c->lr=c->r[0]; // 8025576C
  c->r[1]=c->r[1]+0x00000010u; // 80255770
  return; // 80255774
}

// fn_80255778
void f_80255778(Ctx* __restrict c) {
  trace_call(0x80255778u);
  c->r[0]=R8(c->r[3]+0x00000004u); // 80255778
  cmps(c,0,(int32_t)c->r[0],0); // 8025577C
  if (!crb(c,2)) { goto L_8025578C; } // 80255780
  c->r[3]=0u+0x00000000u; // 80255784
  return; // 80255788
L_8025578C:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 8025578C
  cmps(c,0,(int32_t)c->r[0],0); // 80255790
  if (!crb(c,2)) { goto L_802557A0; } // 80255794
  c->r[3]=0u+0x00000000u; // 80255798
  return; // 8025579C
L_802557A0:;
  cmps(c,0,(int32_t)c->r[6],3); // 802557A0
  W32(c->r[3]+0x00000030u,c->r[4]); // 802557A4
  c->r[0]=0u+0x00000003u; // 802557A8
  W32(c->r[3]+0x00000034u,c->r[5]); // 802557AC
  if (crb(c,1)) { goto L_802557B8; } // 802557B0
  c->r[0]=c->r[6]|c->r[6]; // 802557B4
L_802557B8:;
  W32(c->r[3]+0x00000044u,c->r[0]); // 802557B8
  c->r[3]=0u+0x00000001u; // 802557BC
  return; // 802557C0
}

// fn_802557C4
void f_802557C4(Ctx* __restrict c) {
  trace_call(0x802557C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802557C4
  c->r[0]=c->lr; // 802557C8
  W32(c->r[1]+0x00000094u,c->r[0]); // 802557CC
  c->r[11]=c->r[1]+0x00000090u; // 802557D0
  c->lr=0x802557D8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802557D4
  c->r[0]=R8(c->r[3]+0x00000004u); // 802557D8
  c->r[31]=c->r[3]|c->r[3]; // 802557DC
  c->r[25]=c->r[4]|c->r[4]; // 802557E0
  c->r[26]=c->r[5]|c->r[5]; // 802557E4
  cmps(c,0,(int32_t)c->r[0],0); // 802557E8
  if (!crb(c,2)) { goto L_802557F8; } // 802557EC
  c->r[3]=0u+0x00000000u; // 802557F0
  goto L_80255AAC; // 802557F4
L_802557F8:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 802557F8
  cmps(c,0,(int32_t)c->r[0],0); // 802557FC
  if (!crb(c,2)) { goto L_80255814; } // 80255800
  c->r[12]=R32(c->r[3]+0x00000000u); // 80255804
  c->r[12]=R32(c->r[12]+0x00000018u); // 80255808
  c->ctr=c->r[12]; // 8025580C
  if (true) { c->lr=0x80255814u; dispatch(c,c->ctr); } // 80255810
L_80255814:;
  c->r[27]=0u+0x80460000u; // 80255814
  c->r[28]=0u+0x803E0000u; // 80255818
  c->r[5]=R32(c->r[31]+0x00000020u); // 8025581C
  c->r[3]=c->r[27]+0xFFFFD468u; // 80255820
  c->r[6]=c->r[28]+0x00005410u; // 80255824
  c->r[4]=0u+0x00000001u; // 80255828
  c->lr=0x80255830u; f_8014A80C(c); // 8025582C
  c->r[28]=c->r[28]+0x00005410u; // 80255830
  c->r[5]=R32(c->r[31]+0x00000020u); // 80255834
  c->r[3]=c->r[27]+0xFFFFD468u; // 80255838
  c->r[4]=0u+0x00000001u; // 8025583C
  c->r[6]=c->r[28]+0x00000007u; // 80255840
  c->lr=0x80255848u; f_8014A80C(c); // 80255844
  c->r[4]=R32(c->r[31]+0x00000020u); // 80255848
  c->r[3]=c->r[27]+0xFFFFD468u; // 8025584C
  c->r[5]=R32(c->r[31]+0x00000024u); // 80255850
  c->r[6]=0u+0x00000001u; // 80255854
  c->lr=0x8025585Cu; f_8014A860(c); // 80255858
  c->r[4]=R32(c->r[31]+0x00000020u); // 8025585C
  c->r[3]=c->r[27]+0xFFFFD468u; // 80255860
  c->r[5]=R32(c->r[31]+0x00000024u); // 80255864
  c->lr=0x8025586Cu; f_8014A924(c); // 80255868
  c->r[29]=0u+0x00000001u; // 8025586C
  c->r[30]=0u+0x00000000u; // 80255870
  W8(c->r[31]+0x00000038u,c->r[29]); // 80255874
  c->r[3]=c->r[1]+0x0000002Cu; // 80255878
  c->r[5]=R32(c->r[31]+0x00000044u); // 8025587C
  c->r[4]=c->r[28]+0x0000000Bu; // 80255880
  W8(c->r[31]+0x00000039u,c->r[25]); // 80255884
  c->r[6]=c->r[26]+0x00000001u; // 80255888
  W32(c->r[31]+0x0000003Cu,c->r[26]); // 8025588C
  W32(c->r[31]+0x00000040u,c->r[30]); // 80255890
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80255894
  c->lr=0x8025589Cu; f_80291CC4(c); // 80255898
  cmps(c,0,(int32_t)c->r[25],0); // 8025589C
  if (crb(c,2)) { goto L_80255A3C; } // 802558A0
  c->r[0]=R32(c->r[31]+0x00000044u); // 802558A4
  cmps(c,0,(int32_t)c->r[0],0); // 802558A8
  if (!crb(c,1)) { goto L_80255A1C; } // 802558AC
  c->r[4]=R32(c->r[31]+0x00000030u); // 802558B0
  cmps(c,0,(int32_t)c->r[4],0); // 802558B4
  if (!crb(c,0)) { goto L_802558D4; } // 802558B8
  {uint32_t ea=c->r[2]+0xFFFFDA18u; c->f[1]=c->ps1[1]=RF32(ea);} // 802558BC
  c->r[3]=c->r[1]+0x00000014u; // 802558C0
  c->f[2]=c->f[1]; // 802558C4
  c->f[3]=c->f[1]; // 802558C8
  c->lr=0x802558D0u; f_8003F588(c); // 802558CC
  goto L_80255950; // 802558D0
L_802558D4:;
  c->r[3]=c->r[27]+0xFFFFD468u; // 802558D4
  c->r[5]=c->r[1]+0x0000002Cu; // 802558D8
  c->lr=0x802558E0u; f_800482D4(c); // 802558DC
  cmps(c,0,(int32_t)c->r[3],0); // 802558E0
  if (!crb(c,2)) { goto L_80255900; } // 802558E4
  {uint32_t ea=c->r[2]+0xFFFFDA18u; c->f[1]=c->ps1[1]=RF32(ea);} // 802558E8
  c->r[3]=c->r[1]+0x00000014u; // 802558EC
  c->f[2]=c->f[1]; // 802558F0
  c->f[3]=c->f[1]; // 802558F4
  c->lr=0x802558FCu; f_8003F588(c); // 802558F8
  goto L_80255950; // 802558FC
L_80255900:;
  c->r[0]=0u+0x00000006u; // 80255900
  c->r[5]=c->r[1]+0x00000038u; // 80255904
  c->r[4]=c->r[3]+0x00000080u; // 80255908
  c->ctr=c->r[0]; // 8025590C
L_80255910:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80255910
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80255914
  W32(c->r[5]+0x00000004u,c->r[3]); // 80255918
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8025591C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255910; } // 80255920
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80255924
  c->r[3]=c->r[1]+0x00000008u; // 80255928
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025592C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80255930
  c->lr=0x80255938u; f_8003F588(c); // 80255934
  c->r[4]=R32(c->r[1]+0x00000008u); // 80255938
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8025593C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80255940
  W32(c->r[1]+0x00000014u,c->r[4]); // 80255944
  W32(c->r[1]+0x00000018u,c->r[3]); // 80255948
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8025594C
L_80255950:;
  c->r[4]=R32(c->r[31]+0x00000020u); // 80255950
  c->r[3]=0u+0x803E0000u; // 80255954
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80255958
  c->r[3]=c->r[3]+0x00005410u; // 8025595C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80255960
  cmps(c,0,(int32_t)c->r[4],0); // 80255964
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80255968
  c->r[5]=c->r[3]+0x00000015u; // 8025596C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80255970
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80255974
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80255978
  if (crb(c,0)) { goto L_802559AC; } // 8025597C
  c->r[3]=0u+0x80460000u; // 80255980
  c->r[3]=c->r[3]+0xFFFFD468u; // 80255984
  c->lr=0x8025598Cu; f_800482D4(c); // 80255988
  cmps(c,0,(int32_t)c->r[3],0); // 8025598C
  if (crb(c,2)) { goto L_802559AC; } // 80255990
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80255994
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80255998
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8025599C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802559A0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 802559A4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 802559A8
L_802559AC:;
  c->r[6]=0u+0x803E0000u; // 802559AC
  c->r[30]=0u+0x80460000u; // 802559B0
  c->r[6]=c->r[6]+0x00005410u; // 802559B4
  c->r[5]=R32(c->r[31]+0x00000020u); // 802559B8
  c->r[3]=c->r[30]+0xFFFFD468u; // 802559BC
  c->r[4]=0u+0x00000001u; // 802559C0
  c->r[6]=c->r[6]+0x00000015u; // 802559C4
  c->lr=0x802559CCu; f_8014A80C(c); // 802559C8
  c->r[5]=R32(c->r[31]+0x00000030u); // 802559CC
  c->r[3]=c->r[30]+0xFFFFD468u; // 802559D0
  c->r[6]=c->r[1]+0x0000002Cu; // 802559D4
  c->r[4]=0u+0x00000000u; // 802559D8
  c->lr=0x802559E0u; f_8014A80C(c); // 802559DC
  c->r[4]=R32(c->r[31]+0x00000020u); // 802559E0
  c->r[3]=c->r[30]+0xFFFFD468u; // 802559E4
  c->r[5]=R32(c->r[31]+0x00000028u); // 802559E8
  c->r[6]=0u+0x00000001u; // 802559EC
  c->lr=0x802559F4u; f_8014A860(c); // 802559F0
  c->r[4]=R32(c->r[31]+0x00000020u); // 802559F4
  c->r[3]=c->r[30]+0xFFFFD468u; // 802559F8
  c->r[5]=R32(c->r[31]+0x00000028u); // 802559FC
  c->lr=0x80255A04u; f_8014A924(c); // 80255A00
  c->r[4]=R32(c->r[31]+0x00000020u); // 80255A04
  c->r[3]=c->r[30]+0xFFFFD468u; // 80255A08
  c->r[5]=R32(c->r[31]+0x00000028u); // 80255A0C
  c->r[6]=0u+0x00000000u; // 80255A10
  c->lr=0x80255A18u; f_8014A860(c); // 80255A14
  goto L_80255A7C; // 80255A18
L_80255A1C:;
  W8(c->r[31]+0x00000039u,c->r[30]); // 80255A1C
  c->r[3]=c->r[27]+0xFFFFD468u; // 80255A20
  c->r[5]=R32(c->r[31]+0x00000020u); // 80255A24
  c->r[6]=c->r[28]+0x00000015u; // 80255A28
  W8(c->r[31]+0x0000003Au,c->r[30]); // 80255A2C
  c->r[4]=0u+0x00000000u; // 80255A30
  c->lr=0x80255A38u; f_8014A80C(c); // 80255A34
  goto L_80255A7C; // 80255A38
L_80255A3C:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 80255A3C
  cmps(c,0,(int32_t)c->r[0],0); // 80255A40
  if (!crb(c,1)) { goto L_80255A64; } // 80255A44
  W8(c->r[31]+0x0000003Au,c->r[29]); // 80255A48
  c->r[3]=c->r[27]+0xFFFFD468u; // 80255A4C
  c->r[5]=R32(c->r[31]+0x00000020u); // 80255A50
  c->r[6]=c->r[28]+0x00000015u; // 80255A54
  c->r[4]=0u+0x00000000u; // 80255A58
  c->lr=0x80255A60u; f_8014A80C(c); // 80255A5C
  goto L_80255A7C; // 80255A60
L_80255A64:;
  W8(c->r[31]+0x0000003Au,c->r[30]); // 80255A64
  c->r[3]=c->r[27]+0xFFFFD468u; // 80255A68
  c->r[5]=R32(c->r[31]+0x00000020u); // 80255A6C
  c->r[6]=c->r[28]+0x00000015u; // 80255A70
  c->r[4]=0u+0x00000000u; // 80255A74
  c->lr=0x80255A7Cu; f_8014A80C(c); // 80255A78
L_80255A7C:;
  c->r[0]=0u+0x00000002u; // 80255A7C
  c->r[3]=0u+0x00000000u; // 80255A80
  c->r[4]=0u+0x00000010u; // 80255A84
  c->ctr=c->r[0]; // 80255A88
L_80255A8C:;
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 80255A8C
  c->r[0]=R32(c->r[5]+c->r[3]); // 80255A90
  cmps(c,0,(int32_t)c->r[0],21); // 80255A94
  if (crb(c,2)) { goto L_80255AA0; } // 80255A98
  W32(c->r[5]+c->r[3],c->r[4]); // 80255A9C
L_80255AA0:;
  c->r[3]=c->r[3]+0x00000004u; // 80255AA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255A8C; } // 80255AA4
  c->r[3]=0u+0x00000001u; // 80255AA8
L_80255AAC:;
  c->r[11]=c->r[1]+0x00000090u; // 80255AAC
  c->lr=0x80255AB4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80255AB0
  c->r[0]=R32(c->r[1]+0x00000094u); // 80255AB4
  c->lr=c->r[0]; // 80255AB8
  c->r[1]=c->r[1]+0x00000090u; // 80255ABC
  return; // 80255AC0
}

// fn_80255AC4
void f_80255AC4(Ctx* __restrict c) {
  trace_call(0x80255AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255AC4
  c->r[0]=c->lr; // 80255AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80255ACC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80255AD0
  c->r[30]=c->r[3]|c->r[3]; // 80255AD4
  c->r[31]=c->r[4]|c->r[4]; // 80255AD8
  c->r[0]=R8(c->r[3]+0x00000004u); // 80255ADC
  cmps(c,0,(int32_t)c->r[0],0); // 80255AE0
  if (!crb(c,2)) { goto L_80255AF0; } // 80255AE4
  c->r[3]=0u+0x00000000u; // 80255AE8
  goto L_80255B2C; // 80255AEC
L_80255AF0:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 80255AF0
  cmps(c,0,(int32_t)c->r[0],0); // 80255AF4
  if (!crb(c,2)) { goto L_80255B0C; } // 80255AF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80255AFC
  c->r[12]=R32(c->r[12]+0x00000018u); // 80255B00
  c->ctr=c->r[12]; // 80255B04
  if (true) { c->lr=0x80255B0Cu; dispatch(c,c->ctr); } // 80255B08
L_80255B0C:;
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80255B0C
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80255B10
  c->r[0]=R32(c->r[4]+c->r[3]); // 80255B14
  cmps(c,0,(int32_t)c->r[0],0); // 80255B18
  if (crb(c,2)) { goto L_80255B28; } // 80255B1C
  c->r[0]=0u+0x00000005u; // 80255B20
  W32(c->r[4]+c->r[3],c->r[0]); // 80255B24
L_80255B28:;
  c->r[3]=0u+0x00000001u; // 80255B28
L_80255B2C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80255B2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255B30
  c->lr=c->r[0]; // 80255B34
  c->r[1]=c->r[1]+0x00000010u; // 80255B38
  return; // 80255B3C
}

// fn_80255B40
void f_80255B40(Ctx* __restrict c) {
  trace_call(0x80255B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255B40
  c->r[0]=c->lr; // 80255B44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80255B48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80255B4C
  c->r[30]=c->r[3]|c->r[3]; // 80255B50
  c->r[0]=R8(c->r[3]+0x00000004u); // 80255B54
  cmps(c,0,(int32_t)c->r[0],0); // 80255B58
  if (!crb(c,2)) { goto L_80255B68; } // 80255B5C
  c->r[3]=0u+0x00000000u; // 80255B60
  goto L_80255BB0; // 80255B64
L_80255B68:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 80255B68
  cmps(c,0,(int32_t)c->r[0],0); // 80255B6C
  if (!crb(c,2)) { goto L_80255B84; } // 80255B70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80255B74
  c->r[12]=R32(c->r[12]+0x00000018u); // 80255B78
  c->ctr=c->r[12]; // 80255B7C
  if (true) { c->lr=0x80255B84u; dispatch(c,c->ctr); } // 80255B80
L_80255B84:;
  c->r[31]=0u+0x80460000u; // 80255B84
  c->r[4]=R32(c->r[30]+0x00000020u); // 80255B88
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 80255B8C
  c->r[3]=c->r[31]+0xFFFFD468u; // 80255B90
  c->r[6]=0u+0x00000001u; // 80255B94
  c->lr=0x80255B9Cu; f_8014A860(c); // 80255B98
  c->r[4]=R32(c->r[30]+0x00000020u); // 80255B9C
  c->r[3]=c->r[31]+0xFFFFD468u; // 80255BA0
  c->r[5]=R32(c->r[30]+0x0000002Cu); // 80255BA4
  c->lr=0x80255BACu; f_8014A924(c); // 80255BA8
  c->r[3]=0u+0x00000001u; // 80255BAC
L_80255BB0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80255BB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80255BB4
  c->lr=c->r[0]; // 80255BB8
  c->r[1]=c->r[1]+0x00000010u; // 80255BBC
  return; // 80255BC0
}

// fn_80255BC4
void f_80255BC4(Ctx* __restrict c) {
  trace_call(0x80255BC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255BC4
  c->r[0]=c->lr; // 80255BC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80255BCC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80255BD0
  c->r[29]=c->r[3]|c->r[3]; // 80255BD4
  c->r[0]=R8(c->r[3]+0x00000004u); // 80255BD8
  cmps(c,0,(int32_t)c->r[0],0); // 80255BDC
  if (!crb(c,2)) { goto L_80255BEC; } // 80255BE0
  c->r[3]=0u+0x00000000u; // 80255BE4
  goto L_80255C5C; // 80255BE8
L_80255BEC:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 80255BEC
  cmps(c,0,(int32_t)c->r[0],0); // 80255BF0
  if (!crb(c,2)) { goto L_80255C08; } // 80255BF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80255BF8
  c->r[12]=R32(c->r[12]+0x00000018u); // 80255BFC
  c->ctr=c->r[12]; // 80255C00
  if (true) { c->lr=0x80255C08u; dispatch(c,c->ctr); } // 80255C04
L_80255C08:;
  c->r[30]=0u+0x80460000u; // 80255C08
  c->r[31]=0u+0x803E0000u; // 80255C0C
  c->r[5]=R32(c->r[29]+0x00000020u); // 80255C10
  c->r[3]=c->r[30]+0xFFFFD468u; // 80255C14
  c->r[6]=c->r[31]+0x00005410u; // 80255C18
  c->r[4]=0u+0x00000000u; // 80255C1C
  c->lr=0x80255C24u; f_8014A80C(c); // 80255C20
  c->r[31]=c->r[31]+0x00005410u; // 80255C24
  c->r[5]=R32(c->r[29]+0x00000020u); // 80255C28
  c->r[3]=c->r[30]+0xFFFFD468u; // 80255C2C
  c->r[4]=0u+0x00000000u; // 80255C30
  c->r[6]=c->r[31]+0x00000007u; // 80255C34
  c->lr=0x80255C3Cu; f_8014A80C(c); // 80255C38
  c->r[5]=R32(c->r[29]+0x00000020u); // 80255C3C
  c->r[3]=c->r[30]+0xFFFFD468u; // 80255C40
  c->r[6]=c->r[31]+0x00000015u; // 80255C44
  c->r[4]=0u+0x00000000u; // 80255C48
  c->lr=0x80255C50u; f_8014A80C(c); // 80255C4C
  c->r[0]=0u+0x00000000u; // 80255C50
  c->r[3]=0u+0x00000001u; // 80255C54
  W8(c->r[29]+0x00000038u,c->r[0]); // 80255C58
L_80255C5C:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80255C5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80255C60
  c->lr=c->r[0]; // 80255C64
  c->r[1]=c->r[1]+0x00000020u; // 80255C68
  return; // 80255C6C
}

// fn_80255C70
void f_80255C70(Ctx* __restrict c) {
  trace_call(0x80255C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255C70
  c->r[0]=c->lr; // 80255C74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80255C78
  c->r[11]=c->r[1]+0x00000020u; // 80255C7C
  c->lr=0x80255C84u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80255C80
  c->r[0]=R32(c->r[3]+0x00000040u); // 80255C84
  c->r[31]=c->r[3]|c->r[3]; // 80255C88
  cmps(c,0,(int32_t)c->r[0],2); // 80255C8C
  if (crb(c,2)) { goto L_80255E54; } // 80255C90
  if (!crb(c,0)) { goto L_80255CA8; } // 80255C94
  cmps(c,0,(int32_t)c->r[0],0); // 80255C98
  if (crb(c,2)) { goto L_80255CB8; } // 80255C9C
  if (!crb(c,0)) { goto L_80255DCC; } // 80255CA0
  goto L_80255F44; // 80255CA4
L_80255CA8:;
  cmps(c,0,(int32_t)c->r[0],4); // 80255CA8
  if (crb(c,2)) { goto L_80255E9C; } // 80255CAC
  if (!crb(c,0)) { goto L_80255F44; } // 80255CB0
  goto L_80255E78; // 80255CB4
L_80255CB8:;
  c->r[3]=0u+0x80460000u; // 80255CB8
  c->r[4]=R32(c->r[31]+0x00000024u); // 80255CBC
  c->r[3]=c->r[3]+0xFFFFD468u; // 80255CC0
  c->lr=0x80255CC8u; f_80155E44(c); // 80255CC4
  cmps(c,0,(int32_t)c->r[3],0); // 80255CC8
  if (crb(c,2)) { goto L_80255F44; } // 80255CCC
  c->r[0]=0u+0x00000002u; // 80255CD0
  c->r[3]=0u+0x00000000u; // 80255CD4
  c->r[4]=0u+0x00000011u; // 80255CD8
  c->ctr=c->r[0]; // 80255CDC
L_80255CE0:;
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 80255CE0
  c->r[0]=R32(c->r[5]+c->r[3]); // 80255CE4
  cmps(c,0,(int32_t)c->r[0],21); // 80255CE8
  if (crb(c,2)) { goto L_80255CF4; } // 80255CEC
  W32(c->r[5]+c->r[3],c->r[4]); // 80255CF0
L_80255CF4:;
  c->r[3]=c->r[3]+0x00000004u; // 80255CF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255CE0; } // 80255CF8
  c->r[0]=R8(c->r[31]+0x00000039u); // 80255CFC
  cmps(c,0,(int32_t)c->r[0],0); // 80255D00
  if (crb(c,2)) { goto L_80255D80; } // 80255D04
  c->r[0]=0u+0x00000001u; // 80255D08
  c->r[29]=0u+0x803E0000u; // 80255D0C
  c->r[29]=c->r[29]+0x00005410u; // 80255D10
  c->r[30]=0u+0x80460000u; // 80255D14
  W32(c->r[31]+0x00000040u,c->r[0]); // 80255D18
  c->r[3]=c->r[30]+0xFFFFD468u; // 80255D1C
  c->r[5]=R32(c->r[31]+0x00000020u); // 80255D20
  c->r[6]=c->r[29]+0x00000007u; // 80255D24
  c->r[4]=0u+0x00000001u; // 80255D28
  c->lr=0x80255D30u; f_8014A80C(c); // 80255D2C
  c->r[4]=R32(c->r[31]+0x00000020u); // 80255D30
  c->r[3]=c->r[30]+0xFFFFD468u; // 80255D34
  c->r[5]=R32(c->r[31]+0x00000028u); // 80255D38
  c->r[6]=0u+0x00000001u; // 80255D3C
  c->lr=0x80255D44u; f_8014A860(c); // 80255D40
  c->r[4]=R32(c->r[31]+0x00000020u); // 80255D44
  c->r[3]=c->r[30]+0xFFFFD468u; // 80255D48
  c->r[5]=R32(c->r[31]+0x00000028u); // 80255D4C
  c->lr=0x80255D54u; f_8014A924(c); // 80255D50
  {uint32_t ea=c->r[2]+0xFFFFDA1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80255D54
  c->r[3]=c->r[29]+0x00000019u; // 80255D58
  c->r[4]=0u+0x00000000u; // 80255D5C
  c->r[5]=0u+0xFFFFFFFFu; // 80255D60
  c->lr=0x80255D68u; f_80068DD8(c); // 80255D64
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 80255D68
  c->r[3]=c->r[29]+0x00000020u; // 80255D6C
  {uint32_t ea=c->r[2]+0xFFFFDA1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80255D70
  c->r[4]=0u+0x00000000u; // 80255D74
  c->lr=0x80255D7Cu; f_80068DD8(c); // 80255D78
  goto L_80255F44; // 80255D7C
L_80255D80:;
  c->r[0]=R8(c->r[31]+0x0000003Au); // 80255D80
  cmps(c,0,(int32_t)c->r[0],0); // 80255D84
  if (crb(c,2)) { goto L_80255DC0; } // 80255D88
  c->r[0]=0u+0x00000002u; // 80255D8C
  c->r[29]=0u+0x80460000u; // 80255D90
  W32(c->r[31]+0x00000040u,c->r[0]); // 80255D94
  c->r[3]=c->r[29]+0xFFFFD468u; // 80255D98
  c->r[4]=R32(c->r[31]+0x00000030u); // 80255D9C
  c->r[6]=0u+0x00000001u; // 80255DA0
  c->r[5]=R32(c->r[31]+0x00000034u); // 80255DA4
  c->lr=0x80255DACu; f_8014A860(c); // 80255DA8
  c->r[4]=R32(c->r[31]+0x00000030u); // 80255DAC
  c->r[3]=c->r[29]+0xFFFFD468u; // 80255DB0
  c->r[5]=R32(c->r[31]+0x00000034u); // 80255DB4
  c->lr=0x80255DBCu; f_8014A924(c); // 80255DB8
  goto L_80255F44; // 80255DBC
L_80255DC0:;
  c->r[0]=0u+0x00000004u; // 80255DC0
  W32(c->r[31]+0x00000040u,c->r[0]); // 80255DC4
  goto L_80255F44; // 80255DC8
L_80255DCC:;
  c->r[3]=0u+0x80460000u; // 80255DCC
  c->r[4]=R32(c->r[31]+0x00000028u); // 80255DD0
  c->r[3]=c->r[3]+0xFFFFD468u; // 80255DD4
  c->lr=0x80255DDCu; f_80155E44(c); // 80255DD8
  cmps(c,0,(int32_t)c->r[3],0); // 80255DDC
  if (crb(c,2)) { goto L_80255F44; } // 80255DE0
  c->r[0]=0u+0x00000002u; // 80255DE4
  c->r[3]=0u+0x00000000u; // 80255DE8
  c->r[4]=0u+0x00000012u; // 80255DEC
  c->ctr=c->r[0]; // 80255DF0
L_80255DF4:;
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 80255DF4
  c->r[0]=R32(c->r[5]+c->r[3]); // 80255DF8
  cmps(c,0,(int32_t)c->r[0],21); // 80255DFC
  if (crb(c,2)) { goto L_80255E08; } // 80255E00
  W32(c->r[5]+c->r[3],c->r[4]); // 80255E04
L_80255E08:;
  c->r[3]=c->r[3]+0x00000004u; // 80255E08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255DF4; } // 80255E0C
  c->r[0]=0u+0x00000003u; // 80255E10
  c->r[29]=0u+0x80460000u; // 80255E14
  W32(c->r[31]+0x00000040u,c->r[0]); // 80255E18
  c->r[3]=c->r[29]+0xFFFFD468u; // 80255E1C
  c->r[4]=R32(c->r[31]+0x00000020u); // 80255E20
  c->r[6]=0u+0x00000001u; // 80255E24
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 80255E28
  c->lr=0x80255E30u; f_8014A860(c); // 80255E2C
  c->r[4]=R32(c->r[31]+0x00000020u); // 80255E30
  c->r[3]=c->r[29]+0xFFFFD468u; // 80255E34
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 80255E38
  c->lr=0x80255E40u; f_8014A924(c); // 80255E3C
  c->r[3]=0u+0x804B0000u; // 80255E40
  c->r[3]=c->r[3]+0x00005CC8u; // 80255E44
  c->r[3]=c->r[3]+0x00000094u; // 80255E48
  c->lr=0x80255E50u; f_801515AC(c); // 80255E4C
  goto L_80255F44; // 80255E50
L_80255E54:;
  c->r[3]=0u+0x80460000u; // 80255E54
  c->r[4]=R32(c->r[31]+0x00000034u); // 80255E58
  c->r[3]=c->r[3]+0xFFFFD468u; // 80255E5C
  c->lr=0x80255E64u; f_80155E44(c); // 80255E60
  cmps(c,0,(int32_t)c->r[3],0); // 80255E64
  if (crb(c,2)) { goto L_80255F44; } // 80255E68
  c->r[0]=0u+0x00000004u; // 80255E6C
  W32(c->r[31]+0x00000040u,c->r[0]); // 80255E70
  goto L_80255F44; // 80255E74
L_80255E78:;
  c->r[3]=0u+0x80460000u; // 80255E78
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 80255E7C
  c->r[3]=c->r[3]+0xFFFFD468u; // 80255E80
  c->lr=0x80255E88u; f_80155E44(c); // 80255E84
  cmps(c,0,(int32_t)c->r[3],0); // 80255E88
  if (crb(c,2)) { goto L_80255F44; } // 80255E8C
  c->r[0]=0u+0x00000004u; // 80255E90
  W32(c->r[31]+0x00000040u,c->r[0]); // 80255E94
  goto L_80255F44; // 80255E98
L_80255E9C:;
  c->r[0]=R8(c->r[3]+0x00000039u); // 80255E9C
  cmps(c,0,(int32_t)c->r[0],0); // 80255EA0
  if (crb(c,2)) { goto L_80255EF8; } // 80255EA4
  c->r[29]=0u+0x80460000u; // 80255EA8
  c->r[30]=0u+0x803E0000u; // 80255EAC
  c->r[5]=R32(c->r[31]+0x00000020u); // 80255EB0
  c->r[3]=c->r[29]+0xFFFFD468u; // 80255EB4
  c->r[6]=c->r[30]+0x00005410u; // 80255EB8
  c->r[4]=0u+0x00000000u; // 80255EBC
  c->lr=0x80255EC4u; f_8014A80C(c); // 80255EC0
  c->r[30]=c->r[30]+0x00005410u; // 80255EC4
  c->r[5]=R32(c->r[31]+0x00000020u); // 80255EC8
  c->r[3]=c->r[29]+0xFFFFD468u; // 80255ECC
  c->r[4]=0u+0x00000000u; // 80255ED0
  c->r[6]=c->r[30]+0x00000007u; // 80255ED4
  c->lr=0x80255EDCu; f_8014A80C(c); // 80255ED8
  c->r[5]=R32(c->r[31]+0x00000020u); // 80255EDC
  c->r[3]=c->r[29]+0xFFFFD468u; // 80255EE0
  c->r[6]=c->r[30]+0x00000015u; // 80255EE4
  c->r[4]=0u+0x00000000u; // 80255EE8
  c->lr=0x80255EF0u; f_8014A80C(c); // 80255EEC
  c->r[0]=0u+0x00000000u; // 80255EF0
  W8(c->r[31]+0x00000038u,c->r[0]); // 80255EF4
L_80255EF8:;
  c->r[3]=0u+0x00000005u; // 80255EF8
  c->r[0]=0u+0x00000002u; // 80255EFC
  W32(c->r[31]+0x00000040u,c->r[3]); // 80255F00
  c->r[3]=0u+0x00000000u; // 80255F04
  c->r[4]=0u+0x00000013u; // 80255F08
  c->r[5]=0u+0x00000014u; // 80255F0C
  c->ctr=c->r[0]; // 80255F10
L_80255F14:;
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 80255F14
  c->r[0]=R32(c->r[6]+c->r[3]); // 80255F18
  cmps(c,0,(int32_t)c->r[0],21); // 80255F1C
  if (crb(c,2)) { goto L_80255F3C; } // 80255F20
  c->r[0]=R8(c->r[31]+0x00000039u); // 80255F24
  cmps(c,0,(int32_t)c->r[0],0); // 80255F28
  if (crb(c,2)) { goto L_80255F38; } // 80255F2C
  W32(c->r[6]+c->r[3],c->r[5]); // 80255F30
  goto L_80255F3C; // 80255F34
L_80255F38:;
  W32(c->r[6]+c->r[3],c->r[4]); // 80255F38
L_80255F3C:;
  c->r[3]=c->r[3]+0x00000004u; // 80255F3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80255F14; } // 80255F40
L_80255F44:;
  c->r[11]=c->r[1]+0x00000020u; // 80255F44
  c->lr=0x80255F4Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80255F48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80255F4C
  c->lr=c->r[0]; // 80255F50
  c->r[1]=c->r[1]+0x00000020u; // 80255F54
  return; // 80255F58
}

// fn_80255F5C
void f_80255F5C(Ctx* __restrict c) {
  trace_call(0x80255F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80255F5C
  c->r[0]=c->lr; // 80255F60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80255F64
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80255F68
  c->r[27]=c->r[3]|c->r[3]; // 80255F6C
  c->r[0]=R8(c->r[3]+0x00000005u); // 80255F70
  cmps(c,0,(int32_t)c->r[0],0); // 80255F74
  if (!crb(c,2)) { goto L_802560AC; } // 80255F78
  c->r[30]=0u+0x803E0000u; // 80255F7C
  c->r[31]=0u+0x80460000u; // 80255F80
  c->r[30]=c->r[30]+0x00005410u; // 80255F84
  c->r[4]=c->r[30]+0x00000028u; // 80255F88
  c->r[3]=c->r[31]+0xFFFFD468u; // 80255F8C
  c->lr=0x80255F94u; f_80047CD4(c); // 80255F90
  c->r[29]=c->r[3]|c->r[3]; // 80255F94
  W32(c->r[27]+0x00000020u,c->r[3]); // 80255F98
  c->r[31]=c->r[31]+0xFFFFD468u; // 80255F9C
  c->r[6]=c->r[30]+0x00000032u; // 80255FA0
  c->r[4]=c->r[29]|c->r[29]; // 80255FA4
  c->r[5]=c->r[30]+0x00000007u; // 80255FA8
  c->r[3]=c->r[31]+0x00000014u; // 80255FAC
  c->lr=0x80255FB4u; f_80048384(c); // 80255FB0
  c->r[28]=c->r[3]|c->r[3]; // 80255FB4
  W32(c->r[27]+0x00000024u,c->r[3]); // 80255FB8
  c->r[3]=c->r[31]|c->r[31]; // 80255FBC
  c->r[4]=c->r[29]|c->r[29]; // 80255FC0
  c->r[5]=c->r[28]|c->r[28]; // 80255FC4
  c->lr=0x80255FCCu; f_8014AC10(c); // 80255FC8
  c->r[3]=c->r[31]|c->r[31]; // 80255FCC
  c->r[4]=c->r[29]|c->r[29]; // 80255FD0
  c->r[5]=c->r[28]|c->r[28]; // 80255FD4
  c->r[6]=0u+0x00000000u; // 80255FD8
  c->lr=0x80255FE0u; f_8014A860(c); // 80255FDC
  c->r[28]=R32(c->r[27]+0x00000020u); // 80255FE0
  c->r[6]=c->r[30]+0x00000045u; // 80255FE4
  c->r[5]=c->r[30]+0x00000015u; // 80255FE8
  c->r[3]=c->r[31]+0x00000014u; // 80255FEC
  c->r[4]=c->r[28]|c->r[28]; // 80255FF0
  c->lr=0x80255FF8u; f_80048384(c); // 80255FF4
  c->r[29]=c->r[3]|c->r[3]; // 80255FF8
  W32(c->r[27]+0x00000028u,c->r[3]); // 80255FFC
  c->r[3]=c->r[31]|c->r[31]; // 80256000
  c->r[4]=c->r[28]|c->r[28]; // 80256004
  c->r[5]=c->r[29]|c->r[29]; // 80256008
  c->lr=0x80256010u; f_8014AC10(c); // 8025600C
  c->r[3]=c->r[31]|c->r[31]; // 80256010
  c->r[4]=c->r[28]|c->r[28]; // 80256014
  c->r[5]=c->r[29]|c->r[29]; // 80256018
  c->r[6]=0u+0x00000000u; // 8025601C
  c->lr=0x80256024u; f_8014A860(c); // 80256020
  c->r[28]=R32(c->r[27]+0x00000020u); // 80256024
  c->r[6]=c->r[30]+0x00000057u; // 80256028
  c->r[5]=c->r[30]+0x00000007u; // 8025602C
  c->r[3]=c->r[31]+0x00000014u; // 80256030
  c->r[4]=c->r[28]|c->r[28]; // 80256034
  c->lr=0x8025603Cu; f_80048384(c); // 80256038
  c->r[29]=c->r[3]|c->r[3]; // 8025603C
  W32(c->r[27]+0x0000002Cu,c->r[3]); // 80256040
  c->r[3]=c->r[31]|c->r[31]; // 80256044
  c->r[4]=c->r[28]|c->r[28]; // 80256048
  c->r[5]=c->r[29]|c->r[29]; // 8025604C
  c->lr=0x80256054u; f_8014AC10(c); // 80256050
  c->r[3]=c->r[31]|c->r[31]; // 80256054
  c->r[4]=c->r[28]|c->r[28]; // 80256058
  c->r[5]=c->r[29]|c->r[29]; // 8025605C
  c->r[6]=0u+0x00000000u; // 80256060
  c->lr=0x80256068u; f_8014A860(c); // 80256064
  c->r[5]=R32(c->r[27]+0x00000020u); // 80256068
  c->r[3]=c->r[31]|c->r[31]; // 8025606C
  c->r[6]=c->r[30]|c->r[30]; // 80256070
  c->r[4]=0u+0x00000000u; // 80256074
  c->lr=0x8025607Cu; f_8014A80C(c); // 80256078
  c->r[5]=R32(c->r[27]+0x00000020u); // 8025607C
  c->r[3]=c->r[31]|c->r[31]; // 80256080
  c->r[6]=c->r[30]+0x00000007u; // 80256084
  c->r[4]=0u+0x00000000u; // 80256088
  c->lr=0x80256090u; f_8014A80C(c); // 8025608C
  c->r[5]=R32(c->r[27]+0x00000020u); // 80256090
  c->r[3]=c->r[31]|c->r[31]; // 80256094
  c->r[6]=c->r[30]+0x00000015u; // 80256098
  c->r[4]=0u+0x00000000u; // 8025609C
  c->lr=0x802560A4u; f_8014A80C(c); // 802560A0
  c->r[0]=0u+0x00000001u; // 802560A4
  W8(c->r[27]+0x00000005u,c->r[0]); // 802560A8
L_802560AC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802560AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802560B0
  c->lr=c->r[0]; // 802560B4
  c->r[1]=c->r[1]+0x00000020u; // 802560B8
  return; // 802560BC
}

// fn_802560C0
void f_802560C0(Ctx* __restrict c) {
  trace_call(0x802560C0u);
  {uint32_t ea=c->r[2]+0xFFFFDA18u; c->f[1]=c->ps1[1]=RF32(ea);} // 802560C0
  c->r[3]=0u+0x805E0000u; // 802560C4
  {uint32_t ea=c->r[2]+0xFFFFDA1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802560C8
  c->r[3]=c->r[3]+0x00007D60u; // 802560CC
  c->f[3]=c->f[1]; // 802560D0
  f_8003F588(c); return; // 802560D4
}

// fn_802560D8
void f_802560D8(Ctx* __restrict c) {
  trace_call(0x802560D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802560D8
  c->r[0]=c->lr; // 802560DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802560E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802560E4
  c->r[26]=c->r[3]|c->r[3]; // 802560E8
  c->r[27]=c->r[4]|c->r[4]; // 802560EC
  c->r[28]=c->r[5]|c->r[5]; // 802560F0
  c->r[3]=c->r[13]+0xFFFF97A8u; // 802560F4
  c->lr=0x802560FCu; f_80242AA8(c); // 802560F8
  c->r[30]=0u+0x803E0000u; // 802560FC
  c->r[31]=c->r[3]|c->r[3]; // 80256100
  c->r[30]=c->r[30]+0x00005558u; // 80256104
  c->r[29]=0u+0x00000000u; // 80256108
L_8025610C:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 8025610C
  c->r[3]=c->r[27]|c->r[27]; // 80256110
  c->lr=0x80256118u; f_80293554(c); // 80256114
  cmps(c,0,(int32_t)c->r[3],0); // 80256118
  if (!crb(c,2)) { goto L_8025618C; } // 8025611C
  c->r[3]=c->r[26]|c->r[26]; // 80256120
  c->r[4]=c->r[27]|c->r[27]; // 80256124
  c->lr=0x8025612Cu; f_802933D8(c); // 80256128
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8025612C
  c->r[4]=0u+0x80410000u; // 80256130
  c->r[5]=c->r[30]+c->r[0]; // 80256134
  c->r[3]=c->r[26]|c->r[26]; // 80256138
  c->r[0]=R32(c->r[5]+0x00000004u); // 8025613C
  c->r[4]=c->r[4]+0x00001E20u; // 80256140
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80256144
  c->r[4]=R32(c->r[4]+c->r[0]); // 80256148
  c->lr=0x80256150u; f_802934DC(c); // 8025614C
  c->r[0]=R8(c->r[30]+0x0000002Cu); // 80256150
  cmps(c,0,(int32_t)c->r[0],0); // 80256154
  if (crb(c,2)) { goto L_80256170; } // 80256158
  cmps(c,0,(int32_t)c->r[31],0); // 8025615C
  if (!crb(c,2)) { goto L_80256170; } // 80256160
  c->r[4]=R32(c->r[13]+0xFFFF8D90u); // 80256164
  c->r[3]=c->r[26]|c->r[26]; // 80256168
  c->lr=0x80256170u; f_802934DC(c); // 8025616C
L_80256170:;
  cmps(c,0,(int32_t)c->r[28],0); // 80256170
  if (crb(c,2)) { goto L_80256184; } // 80256174
  c->r[3]=c->r[26]|c->r[26]; // 80256178
  c->r[4]=c->r[28]|c->r[28]; // 8025617C
  c->lr=0x80256184u; f_802934DC(c); // 80256180
L_80256184:;
  c->r[3]=0u+0x00000001u; // 80256184
  goto L_802561C0; // 80256188
L_8025618C:;
  c->r[29]=c->r[29]+0x00000001u; // 8025618C
  c->r[30]=c->r[30]+0x00000030u; // 80256190
  cmpu(c,0,c->r[29],0x0000000Cu); // 80256194
  if (crb(c,0)) { IRQCHK(c); goto L_8025610C; } // 80256198
  c->r[3]=c->r[26]|c->r[26]; // 8025619C
  c->r[4]=c->r[27]|c->r[27]; // 802561A0
  c->lr=0x802561A8u; f_802933D8(c); // 802561A4
  cmps(c,0,(int32_t)c->r[28],0); // 802561A8
  if (crb(c,2)) { goto L_802561BC; } // 802561AC
  c->r[3]=c->r[26]|c->r[26]; // 802561B0
  c->r[4]=c->r[28]|c->r[28]; // 802561B4
  c->lr=0x802561BCu; f_802934DC(c); // 802561B8
L_802561BC:;
  c->r[3]=0u+0x00000000u; // 802561BC
L_802561C0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802561C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802561C4
  c->lr=c->r[0]; // 802561C8
  c->r[1]=c->r[1]+0x00000020u; // 802561CC
  return; // 802561D0
}

// fn_802561D4
void f_802561D4(Ctx* __restrict c) {
  trace_call(0x802561D4u);
  c->r[5]=0u+0x803E0000u; // 802561D4
  c->r[5]=c->r[5]+0x00005798u; // 802561D8
  f_802560D8(c); return; // 802561DC
}

// fn_802561E0
void f_802561E0(Ctx* __restrict c) {
  trace_call(0x802561E0u);
  c->r[5]=0u+0x803E0000u; // 802561E0
  W32(c->r[3]+0x00000004u,c->r[4]); // 802561E4
  c->r[5]=c->r[5]+0x000057A0u; // 802561E8
  W32(c->r[3]+0x00000000u,c->r[5]); // 802561EC
  return; // 802561F0
}

// fn_802561F4
void f_802561F4(Ctx* __restrict c) {
  trace_call(0x802561F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802561F4
  c->r[0]=0u+0x00000000u; // 802561F8
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 802561FC
  c->r[4]=0u+0x00000001u; // 80256200
  W32(c->r[1]+0x00000008u,c->r[0]); // 80256204
  c->r[6]=c->r[1]+0x00000008u; // 80256208
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8025620C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80256210
  W32(c->r[1]+0x00000014u,c->r[0]); // 80256214
  W32(c->r[1]+0x00000018u,c->r[0]); // 80256218
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8025621C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80256220
  W32(c->r[1]+0x00000024u,c->r[0]); // 80256224
  goto L_80256248; // 80256228
L_8025622C:;
  c->r[7]=rotl(c->r[0],29)&0x0000001Fu; // 8025622C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 80256230
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 80256234
  c->r[5]=R8(c->r[6]+c->r[7]); // 80256238
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8025623C
  c->r[0]=c->r[5]|c->r[0]; // 80256240
  W8(c->r[6]+c->r[7],c->r[0]); // 80256244
L_80256248:;
  {uint32_t ea=c->r[8]+0x00000001u; c->r[0]=R8(ea); c->r[8]=ea;} // 80256248
  cmps(c,0,(int32_t)c->r[0],0); // 8025624C
  if (!crb(c,2)) { IRQCHK(c); goto L_8025622C; } // 80256250
  c->r[5]=R32(c->r[3]+0x00000004u); // 80256254
  c->r[6]=c->r[1]+0x00000008u; // 80256258
  c->r[4]=0u+0x00000001u; // 8025625C
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 80256260
  goto L_80256284; // 80256264
L_80256268:;
  c->r[5]=rotl(c->r[8],29)&0x0000001Fu; // 80256268
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 8025626C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 80256270
  c->r[5]=R8(c->r[6]+c->r[5]); // 80256274
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80256278
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 8025627C
  if (crb(c,2)) { goto L_80256290; } // 80256280
L_80256284:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[8]=R8(ea); c->r[7]=ea;} // 80256284
  cmps(c,0,(int32_t)c->r[8],0); // 80256288
  if (!crb(c,2)) { IRQCHK(c); goto L_80256268; } // 8025628C
L_80256290:;
  cmps(c,0,(int32_t)c->r[8],0); // 80256290
  if (!crb(c,2)) { goto L_802562A8; } // 80256294
  c->r[0]=R32(c->r[3]+0x00000000u); // 80256298
  W32(c->r[3]+0x00000004u,c->r[0]); // 8025629C
  c->r[3]=0u+0x00000000u; // 802562A0
  goto L_80256308; // 802562A4
L_802562A8:;
  c->r[9]=c->r[7]|c->r[7]; // 802562A8
  c->r[6]=c->r[1]+0x00000008u; // 802562AC
  c->r[4]=0u+0x00000001u; // 802562B0
  goto L_802562D4; // 802562B4
L_802562B8:;
  c->r[5]=rotl(c->r[8],29)&0x0000001Fu; // 802562B8
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 802562BC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 802562C0
  c->r[5]=R8(c->r[6]+c->r[5]); // 802562C4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 802562C8
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 802562CC
  if (!crb(c,2)) { goto L_802562E0; } // 802562D0
L_802562D4:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[8]=R8(ea); c->r[7]=ea;} // 802562D4
  cmps(c,0,(int32_t)c->r[8],0); // 802562D8
  if (!crb(c,2)) { IRQCHK(c); goto L_802562B8; } // 802562DC
L_802562E0:;
  cmps(c,0,(int32_t)c->r[8],0); // 802562E0
  if (!crb(c,2)) { goto L_802562F4; } // 802562E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 802562E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 802562EC
  goto L_80256304; // 802562F0
L_802562F4:;
  c->r[4]=c->r[7]+0x00000001u; // 802562F4
  c->r[0]=0u+0x00000000u; // 802562F8
  W32(c->r[3]+0x00000004u,c->r[4]); // 802562FC
  W8(c->r[7]+0x00000000u,c->r[0]); // 80256300
L_80256304:;
  c->r[3]=c->r[9]|c->r[9]; // 80256304
L_80256308:;
  c->r[1]=c->r[1]+0x00000030u; // 80256308
  return; // 8025630C
}

// fn_80256310
void f_80256310(Ctx* __restrict c) {
  trace_call(0x80256310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256310
  c->r[0]=c->lr; // 80256314
  W32(c->r[1]+0x00000014u,c->r[0]); // 80256318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025631C
  c->r[31]=c->r[3]|c->r[3]; // 80256320
  c->lr=0x80256328u; f_801D7ABC(c); // 80256324
  c->r[4]=0u+0x80410000u; // 80256328
  c->r[3]=c->r[31]|c->r[31]; // 8025632C
  c->r[4]=c->r[4]+0x00002118u; // 80256330
  W32(c->r[31]+0x00000008u,c->r[4]); // 80256334
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80256338
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025633C
  c->lr=c->r[0]; // 80256340
  c->r[1]=c->r[1]+0x00000010u; // 80256344
  return; // 80256348
}

// fn_8025634C
void f_8025634C(Ctx* __restrict c) {
  trace_call(0x8025634Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025634C
  c->r[0]=c->lr; // 80256350
  cmps(c,0,(int32_t)c->r[3],0); // 80256354
  W32(c->r[1]+0x00000014u,c->r[0]); // 80256358
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8025635C
  c->r[30]=c->r[3]|c->r[3]; // 80256360
  c->r[31]=c->r[4]|c->r[4]; // 80256364
  if (crb(c,2)) { goto L_80256384; } // 80256368
  c->r[4]=0u+0x00000000u; // 8025636C
  c->lr=0x80256374u; f_801D7AE0(c); // 80256370
  cmps(c,0,(int32_t)c->r[31],0); // 80256374
  if (!crb(c,1)) { goto L_80256384; } // 80256378
  c->r[3]=c->r[30]|c->r[30]; // 8025637C
  c->lr=0x80256384u; f_802896EC(c); // 80256380
L_80256384:;
  c->r[3]=c->r[30]|c->r[30]; // 80256384
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80256388
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025638C
  c->lr=c->r[0]; // 80256390
  c->r[1]=c->r[1]+0x00000010u; // 80256394
  return; // 80256398
}

// fn_8025639C
void f_8025639C(Ctx* __restrict c) {
  trace_call(0x8025639Cu);
  c->r[4]=0u+0x803E0000u; // 8025639C
  c->r[3]=c->r[3]+0x00000018u; // 802563A0
  c->r[4]=c->r[4]+0x00005830u; // 802563A4
  f_802933D8(c); return; // 802563A8
}

// fn_802563AC
void f_802563AC(Ctx* __restrict c) {
  trace_call(0x802563ACu);
  return; // 802563AC
}

// fn_802563B0
void f_802563B0(Ctx* __restrict c) {
  trace_call(0x802563B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802563B0
  c->r[0]=c->lr; // 802563B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802563B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=18;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802563BC
  c->r[21]=c->r[3]|c->r[3]; // 802563C0
  c->r[0]=R8(c->r[3]+0x00000011u); // 802563C4
  cmps(c,0,(int32_t)c->r[0],0); // 802563C8
  if (!crb(c,2)) { goto L_802565C0; } // 802563CC
  c->r[3]=0u+0x80590000u; // 802563D0
  c->r[26]=c->r[3]+0x000063F0u; // 802563D4
  c->r[0]=R8(c->r[26]+0x00000038u); // 802563D8
  cmps(c,0,(int32_t)c->r[0],0); // 802563DC
  if (!crb(c,2)) { goto L_802565C0; } // 802563E0
  c->r[23]=0u+0x00000000u; // 802563E4
  c->r[28]=0u+0x80450000u; // 802563E8
  c->r[29]=c->r[23]|c->r[23]; // 802563EC
  c->r[20]=0u+0x00000000u; // 802563F0
  c->r[28]=c->r[28]+0xFFFFA808u; // 802563F4
  c->r[27]=0u+0x80440000u; // 802563F8
  c->r[30]=0u+0x00000009u; // 802563FC
  c->r[31]=0u+0x00000003u; // 80256400
  c->r[19]=0u+0x00000001u; // 80256404
L_80256408:;
  c->r[3]=c->r[26]+c->r[20]; // 80256408
  c->r[25]=R32(c->r[3]+0x0000004Cu); // 8025640C
  cmps(c,0,(int32_t)c->r[25],0); // 80256410
  if (crb(c,0)) { goto L_802565B0; } // 80256414
  c->r[4]=c->r[25]|c->r[25]; // 80256418
  c->r[3]=c->r[27]+0xFFFFA818u; // 8025641C
  c->r[22]=0u+0x00000000u; // 80256420
  c->lr=0x80256428u; f_80068DBC(c); // 80256424
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)104); // 80256428
  c->r[18]=R32(c->r[3]+0x000019A0u); // 8025642C
  c->r[4]=0u+0x00000010u; // 80256430
  c->r[24]=c->r[28]+c->r[0]; // 80256434
  c->r[3]=c->r[24]|c->r[24]; // 80256438
  c->lr=0x80256440u; f_8003FB98(c); // 8025643C
  c->r[0]=c->r[18]&c->r[3]; cr0(c,c->r[0]); // 80256440
  if (crb(c,2)) { goto L_80256478; } // 80256444
  c->r[3]=R32(c->r[21]+0x00000FF4u); // 80256448
  c->r[0]=c->r[3]+0x00000001u; // 8025644C
  cmps(c,0,(int32_t)c->r[0],9); // 80256450
  W32(c->r[21]+0x00000FF4u,c->r[0]); // 80256454
  if (!crb(c,1)) { goto L_80256460; } // 80256458
  W32(c->r[21]+0x00000FF4u,c->r[29]); // 8025645C
L_80256460:;
  c->r[3]=c->r[21]|c->r[21]; // 80256460
  c->r[6]=c->r[23]|c->r[23]; // 80256464
  c->r[4]=0u+0x00000001u; // 80256468
  c->r[5]=0u+0x00000001u; // 8025646C
  c->lr=0x80256474u; f_8025730C(c); // 80256470
  c->r[22]=0u+0x00000001u; // 80256474
L_80256478:;
  c->r[4]=c->r[25]|c->r[25]; // 80256478
  c->r[3]=c->r[27]+0xFFFFA818u; // 8025647C
  c->lr=0x80256484u; f_80068DBC(c); // 80256480
  c->r[18]=R32(c->r[3]+0x000019A0u); // 80256484
  c->r[3]=c->r[24]|c->r[24]; // 80256488
  c->r[4]=0u+0x0000000Fu; // 8025648C
  c->lr=0x80256494u; f_8003FB98(c); // 80256490
  c->r[0]=c->r[18]&c->r[3]; cr0(c,c->r[0]); // 80256494
  if (crb(c,2)) { goto L_802564C8; } // 80256498
  c->r[3]=R32(c->r[21]+0x00000FF4u); // 8025649C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 802564A0
  W32(c->r[21]+0x00000FF4u,c->r[0]); // 802564A4
  if (!crb(c,0)) { goto L_802564B0; } // 802564A8
  W32(c->r[21]+0x00000FF4u,c->r[30]); // 802564AC
L_802564B0:;
  c->r[3]=c->r[21]|c->r[21]; // 802564B0
  c->r[6]=c->r[23]|c->r[23]; // 802564B4
  c->r[4]=0u+0x00000000u; // 802564B8
  c->r[5]=0u+0x00000001u; // 802564BC
  c->lr=0x802564C4u; f_8025730C(c); // 802564C0
  c->r[22]=0u+0x00000001u; // 802564C4
L_802564C8:;
  c->r[4]=c->r[25]|c->r[25]; // 802564C8
  c->r[3]=c->r[27]+0xFFFFA818u; // 802564CC
  c->lr=0x802564D4u; f_80068DBC(c); // 802564D0
  c->r[18]=R32(c->r[3]+0x000019A0u); // 802564D4
  c->r[3]=c->r[24]|c->r[24]; // 802564D8
  c->r[4]=0u+0x0000000Du; // 802564DC
  c->lr=0x802564E4u; f_8003FB98(c); // 802564E0
  c->r[0]=c->r[18]&c->r[3]; cr0(c,c->r[0]); // 802564E4
  if (crb(c,2)) { goto L_80256528; } // 802564E8
  c->r[0]=R8(c->r[21]+0x0000026Fu); // 802564EC
  c->r[0]=sraw(c,c->r[0],4); cr0(c,c->r[0]); // 802564F0
  if (crb(c,2)) { goto L_80256504; } // 802564F4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 802564F8
  cmpu(c,0,c->r[0],0x00000004u); // 802564FC
  if (!crb(c,2)) { goto L_80256528; } // 80256500
L_80256504:;
  c->r[3]=R8(c->r[21]+0x00000FFCu); // 80256504
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80256508
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8025650C
  W8(c->r[21]+0x00000FFCu,c->r[3]); // 80256510
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80256514
  cmps(c,0,(int32_t)c->r[0],1); // 80256518
  if (!crb(c,0)) { goto L_80256524; } // 8025651C
  W8(c->r[21]+0x00000FFCu,c->r[31]); // 80256520
L_80256524:;
  c->r[22]=0u+0x00000001u; // 80256524
L_80256528:;
  c->r[4]=c->r[25]|c->r[25]; // 80256528
  c->r[3]=c->r[27]+0xFFFFA818u; // 8025652C
  c->lr=0x80256534u; f_80068DBC(c); // 80256530
  c->r[18]=R32(c->r[3]+0x000019A0u); // 80256534
  c->r[3]=c->r[24]|c->r[24]; // 80256538
  c->r[4]=0u+0x0000000Eu; // 8025653C
  c->lr=0x80256544u; f_8003FB98(c); // 80256540
  c->r[0]=c->r[18]&c->r[3]; cr0(c,c->r[0]); // 80256544
  if (crb(c,2)) { goto L_80256588; } // 80256548
  c->r[0]=R8(c->r[21]+0x0000026Fu); // 8025654C
  c->r[0]=sraw(c,c->r[0],4); cr0(c,c->r[0]); // 80256550
  if (crb(c,2)) { goto L_80256564; } // 80256554
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80256558
  cmpu(c,0,c->r[0],0x00000004u); // 8025655C
  if (!crb(c,2)) { goto L_80256588; } // 80256560
L_80256564:;
  c->r[3]=R8(c->r[21]+0x00000FFCu); // 80256564
  c->r[3]=c->r[3]+0x00000001u; // 80256568
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8025656C
  W8(c->r[21]+0x00000FFCu,c->r[3]); // 80256570
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80256574
  cmps(c,0,(int32_t)c->r[0],3); // 80256578
  if (!crb(c,1)) { goto L_80256584; } // 8025657C
  W8(c->r[21]+0x00000FFCu,c->r[19]); // 80256580
L_80256584:;
  c->r[22]=0u+0x00000001u; // 80256584
L_80256588:;
  cmps(c,0,(int32_t)c->r[22],0); // 80256588
  if (crb(c,2)) { goto L_802565B0; } // 8025658C
  c->r[0]=R8(c->r[21]+0x00000FFCu); // 80256590
  c->r[4]=c->r[21]+c->r[23]; // 80256594
  c->r[3]=c->r[21]|c->r[21]; // 80256598
  c->r[0]=rotl(c->r[0],4)&0x000000F0u; // 8025659C
  W8(c->r[4]+0x0000026Du,c->r[0]); // 802565A0
  W8(c->r[4]+0x0000026Bu,c->r[0]); // 802565A4
  W8(c->r[21]+0x0000026Fu,c->r[0]); // 802565A8
  c->lr=0x802565B0u; f_801D991C(c); // 802565AC
L_802565B0:;
  c->r[23]=c->r[23]+0x00000001u; // 802565B0
  c->r[20]=c->r[20]+0x00000004u; // 802565B4
  cmps(c,0,(int32_t)c->r[23],2); // 802565B8
  if (crb(c,0)) { IRQCHK(c); goto L_80256408; } // 802565BC
L_802565C0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=18;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802565C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802565C4
  c->lr=c->r[0]; // 802565C8
  c->r[1]=c->r[1]+0x00000040u; // 802565CC
  return; // 802565D0
}

// fn_802565D4
void f_802565D4(Ctx* __restrict c) {
  trace_call(0x802565D4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802565D4
  c->r[0]=c->lr; // 802565D8
  W32(c->r[1]+0x00000084u,c->r[0]); // 802565DC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 802565E0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 802565E4
  c->r[11]=c->r[1]+0x00000070u; // 802565E8
  c->lr=0x802565F0u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802565EC
  c->r[0]=R8(c->r[3]+0x00000011u); // 802565F0
  c->r[4]=0u+0x43300000u; // 802565F4
  W32(c->r[1]+0x00000030u,c->r[4]); // 802565F8
  c->r[23]=c->r[3]|c->r[3]; // 802565FC
  cmps(c,0,(int32_t)c->r[0],0); // 80256600
  W32(c->r[1]+0x00000038u,c->r[4]); // 80256604
  if (crb(c,2)) { goto L_80256774; } // 80256608
  c->r[4]=R32(c->r[3]+0x00000014u); // 8025660C
  c->r[3]=0u+0x803E0000u; // 80256610
  c->r[3]=c->r[3]+0x00005830u; // 80256614
  cmps(c,0,(int32_t)c->r[4],0); // 80256618
  c->r[5]=c->r[3]+0x00000006u; // 8025661C
  if (!crb(c,0)) { goto L_8025662C; } // 80256620
  c->r[21]=0u+0x00000000u; // 80256624
  goto L_8025664C; // 80256628
L_8025662C:;
  c->r[3]=0u+0x80460000u; // 8025662C
  c->r[3]=c->r[3]+0xFFFFD468u; // 80256630
  c->lr=0x80256638u; f_800482D4(c); // 80256634
  cmps(c,0,(int32_t)c->r[3],0); // 80256638
  if (!crb(c,2)) { goto L_80256648; } // 8025663C
  c->r[21]=0u+0x00000000u; // 80256640
  goto L_8025664C; // 80256644
L_80256648:;
  c->r[21]=R8(c->r[3]+0x000000B4u); // 80256648
L_8025664C:;
  c->r[4]=R32(c->r[23]+0x00000014u); // 8025664C
  c->r[5]=0u+0x803E0000u; // 80256650
  c->r[5]=c->r[5]+0x00005830u; // 80256654
  c->r[3]=0u+0x80460000u; // 80256658
  cmps(c,0,(int32_t)c->r[4],0); // 8025665C
  c->r[22]=c->r[1]+0x00000014u; // 80256660
  c->r[5]=c->r[5]+0x00000006u; // 80256664
  c->r[3]=c->r[3]+0xFFFFD468u; // 80256668
  if (!crb(c,0)) { goto L_80256688; } // 8025666C
  {uint32_t ea=c->r[2]+0xFFFFDA50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80256670
  c->r[3]=c->r[22]|c->r[22]; // 80256674
  c->f[2]=c->f[1]; // 80256678
  c->f[3]=c->f[1]; // 8025667C
  c->lr=0x80256684u; f_8003F588(c); // 80256680
  goto L_80256738; // 80256684
L_80256688:;
  c->lr=0x8025668Cu; f_800482D4(c); // 80256688
  cmps(c,0,(int32_t)c->r[3],0); // 8025668C
  if (!crb(c,2)) { goto L_802566AC; } // 80256690
  {uint32_t ea=c->r[2]+0xFFFFDA50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80256694
  c->r[3]=c->r[22]|c->r[22]; // 80256698
  c->f[2]=c->f[1]; // 8025669C
  c->f[3]=c->f[1]; // 802566A0
  c->lr=0x802566A8u; f_8003F588(c); // 802566A4
  goto L_80256738; // 802566A8
L_802566AC:;
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 802566AC
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802566B0
  c->r[4]=R32(c->r[3]+0x00000030u); // 802566B4
  cmps(c,0,(int32_t)c->r[6],0); // 802566B8
  c->r[0]=R32(c->r[3]+0x00000034u); // 802566BC
  W32(c->r[1]+0x00000008u,c->r[5]); // 802566C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802566C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 802566C8
  if (crb(c,2)) { goto L_80256720; } // 802566CC
  goto L_80256718; // 802566D0
L_802566D4:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802566D4
  {uint32_t ea=c->r[6]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 802566D8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802566DC
  {uint32_t ea=c->r[6]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802566E0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802566E4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802566E8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 802566EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802566F0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,0,0);} // 802566F4
  {uint32_t ea=c->r[6]+0x0000002Cu; psq_load(c,1,ea,0,0);} // 802566F8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802566FC
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 80256700
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,0,ea,1,0);} // 80256704
  {uint32_t ea=c->r[6]+0x00000034u; psq_load(c,1,ea,1,0);} // 80256708
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8025670C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 80256710
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 80256714
L_80256718:;
  cmps(c,0,(int32_t)c->r[6],0); // 80256718
  if (!crb(c,2)) { IRQCHK(c); goto L_802566D4; } // 8025671C
L_80256720:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 80256720
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80256724
  c->r[0]=R32(c->r[1]+0x00000010u); // 80256728
  W32(c->r[1]+0x00000014u,c->r[4]); // 8025672C
  W32(c->r[1]+0x00000018u,c->r[3]); // 80256730
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80256734
L_80256738:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80256738
  c->r[4]=0u+0x803E0000u; // 8025673C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80256740
  c->r[4]=c->r[4]+0x00005830u; // 80256744
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80256748
  c->r[3]=0u+0x80460000u; // 8025674C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 80256750
  c->r[5]=c->r[4]+0x00000006u; // 80256754
  c->r[7]=c->r[21]|c->r[21]; // 80256758
  c->r[3]=c->r[3]+0xFFFFD468u; // 8025675C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 80256760
  c->r[6]=c->r[1]+0x00000020u; // 80256764
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80256768
  c->r[4]=R32(c->r[23]+0x00000014u); // 8025676C
  c->lr=0x80256774u; f_80048080(c); // 80256770
L_80256774:;
  c->r[0]=R32(c->r[23]+0x00000FF4u); // 80256774
  c->r[4]=0u+0x80410000u; // 80256778
  c->r[31]=0u+0x80540000u; // 8025677C
  c->r[3]=0u+0x0000000Au; // 80256780
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80256784
  c->r[4]=c->r[4]+0x00001E48u; // 80256788
  c->r[6]=R32(c->r[4]+c->r[0]); // 8025678C
  c->r[5]=0u+0x00000064u; // 80256790
  {uint32_t ea=c->r[2]+0xFFFFDA58u; c->f[31]=RF64(ea);} // 80256794
  c->r[31]=c->r[31]+0xFFFFC2B0u; // 80256798
  c->r[4]=divw((int32_t)c->r[6],(int32_t)c->r[3]); // 8025679C
  c->r[25]=0u+0x00000000u; // 802567A0
  c->r[22]=0u+0x00000000u; // 802567A4
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 802567A8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 802567AC
  c->r[5]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 802567B0
  c->r[3]=c->r[4]-c->r[3]; // 802567B4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802567B8
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 802567BC
  c->r[0]=c->r[23]+c->r[0]; // 802567C0
  c->r[30]=c->r[3]+c->r[0]; // 802567C4
  goto L_80256904; // 802567C8
L_802567CC:;
  c->r[29]=c->r[23]+c->r[22]; // 802567CC
  c->r[24]=0u+0x00000000u; // 802567D0
  c->r[28]=c->r[29]+0x00001244u; // 802567D4
  c->r[21]=0u+0x00000000u; // 802567D8
  c->r[27]=c->r[29]+0x00002618u; // 802567DC
L_802567E0:;
  c->r[3]=c->r[31]+0x00000090u; // 802567E0
  c->lr=0x802567E8u; f_801B18A4(c); // 802567E4
  c->r[4]=R32(c->r[23]+0x000038C8u); // 802567E8
  c->r[0]=R32(c->r[23]+0x000038C4u); // 802567EC
  c->r[4]=c->r[4]^0x80000000u; // 802567F0
  c->r[0]=c->r[0]^0x80000000u; // 802567F4
  W32(c->r[1]+0x00000034u,c->r[4]); // 802567F8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802567FC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 80256800
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80256804
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80256808
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 8025680C
  c->lr=0x80256814u; f_803B7A70(c); // 80256810
  {uint32_t ea=c->r[23]+0x000038B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80256814
  c->r[3]=c->r[31]+0x00000090u; // 80256818
  {uint32_t ea=c->r[23]+0x000038BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025681C
  c->r[5]=c->r[23]+0x000039ECu; // 80256820
  c->r[4]=R32(c->r[23]+0x000038D4u); // 80256824
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80256828
  c->lr=0x80256830u; f_801B1660(c); // 8025682C
  c->r[26]=c->r[29]+c->r[21]; // 80256830
  c->r[0]=R32(c->r[26]+0x00001230u); // 80256834
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)144); // 80256838
  c->r[20]=c->r[31]+c->r[0]; // 8025683C
  c->r[3]=c->r[20]|c->r[20]; // 80256840
  c->lr=0x80256848u; f_801B18A4(c); // 80256844
  c->r[4]=R32(c->r[26]+0x00001120u); // 80256848
  c->r[0]=R32(c->r[26]+0x0000111Cu); // 8025684C
  c->r[4]=c->r[4]^0x80000000u; // 80256850
  c->r[0]=c->r[0]^0x80000000u; // 80256854
  W32(c->r[1]+0x00000034u,c->r[4]); // 80256858
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8025685C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 80256860
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 80256864
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80256868
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 8025686C
  c->lr=0x80256874u; f_803B7A70(c); // 80256870
  {uint32_t ea=c->r[26]+0x00001110u; c->f[1]=c->ps1[1]=RF32(ea);} // 80256874
  c->r[3]=c->r[20]|c->r[20]; // 80256878
  {uint32_t ea=c->r[26]+0x00001114u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025687C
  c->r[5]=c->r[28]+c->r[21]; // 80256880
  c->r[4]=R32(c->r[26]+0x0000112Cu); // 80256884
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80256888
  c->lr=0x80256890u; f_801B1660(c); // 8025688C
  c->r[0]=R32(c->r[26]+0x00002604u); // 80256890
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)144); // 80256894
  c->r[20]=c->r[31]+c->r[0]; // 80256898
  c->r[3]=c->r[20]|c->r[20]; // 8025689C
  c->lr=0x802568A4u; f_801B18A4(c); // 802568A0
  c->r[4]=R32(c->r[26]+0x000024F4u); // 802568A4
  c->r[0]=R32(c->r[26]+0x000024F0u); // 802568A8
  c->r[4]=c->r[4]^0x80000000u; // 802568AC
  c->r[0]=c->r[0]^0x80000000u; // 802568B0
  W32(c->r[1]+0x00000034u,c->r[4]); // 802568B4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802568B8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 802568BC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802568C0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 802568C4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 802568C8
  c->lr=0x802568D0u; f_803B7A70(c); // 802568CC
  {uint32_t ea=c->r[26]+0x000024E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802568D0
  c->r[3]=c->r[20]|c->r[20]; // 802568D4
  {uint32_t ea=c->r[26]+0x000024E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802568D8
  c->r[5]=c->r[27]+c->r[21]; // 802568DC
  c->r[4]=R32(c->r[26]+0x00002500u); // 802568E0
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 802568E4
  c->lr=0x802568ECu; f_801B1660(c); // 802568E8
  c->r[24]=c->r[24]+0x00000001u; // 802568EC
  c->r[21]=c->r[21]+0x00000234u; // 802568F0
  cmps(c,0,(int32_t)c->r[24],3); // 802568F4
  if (crb(c,0)) { IRQCHK(c); goto L_802567E0; } // 802568F8
  c->r[25]=c->r[25]+0x00000001u; // 802568FC
  c->r[22]=c->r[22]+0x0000069Cu; // 80256900
L_80256904:;
  c->r[0]=R32(c->r[30]+0x00001010u); // 80256904
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80256908
  if (crb(c,0)) { IRQCHK(c); goto L_802567CC; } // 8025690C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 80256910
  c->r[11]=c->r[1]+0x00000070u; // 80256914
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 80256918
  c->lr=0x80256920u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025691C
  c->r[0]=R32(c->r[1]+0x00000084u); // 80256920
  c->lr=c->r[0]; // 80256924
  c->r[1]=c->r[1]+0x00000080u; // 80256928
  return; // 8025692C
}

// fn_80256930
void f_80256930(Ctx* __restrict c) {
  trace_call(0x80256930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256930
  c->r[0]=c->lr; // 80256934
  c->r[4]=0u+0x00000001u; // 80256938
  c->r[5]=0u+0x00000001u; // 8025693C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80256940
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80256944
  c->r[30]=0u+0x805E0000u; // 80256948
  c->r[28]=c->r[3]|c->r[3]; // 8025694C
  c->r[3]=c->r[30]+0xFFFFD790u; // 80256950
  c->lr=0x80256958u; f_802417A4(c); // 80256954
  c->r[3]=c->r[30]+0xFFFFD790u; // 80256958
  c->lr=0x80256960u; f_80241AA8(c); // 8025695C
  c->r[3]=c->r[30]+0xFFFFD790u; // 80256960
  c->r[4]=0u+0x00000000u; // 80256964
  c->lr=0x8025696Cu; f_8024182C(c); // 80256968
  c->r[4]=c->r[30]+0xFFFFD790u; // 8025696C
  c->r[30]=0u+0x00000000u; // 80256970
  c->r[0]=0u+0x00000001u; // 80256974
  W8(c->r[4]+0x00000058u,c->r[30]); // 80256978
  c->r[3]=c->r[28]|c->r[28]; // 8025697C
  W8(c->r[4]+0x00000059u,c->r[0]); // 80256980
  c->lr=0x80256988u; f_80256D40(c); // 80256984
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80256988
  c->lr=0x80256990u; f_801F821C(c); // 8025698C
  W8(c->r[28]+0x00000FFCu,c->r[3]); // 80256990
  c->r[3]=c->r[28]|c->r[28]; // 80256994
  c->r[4]=0u+0x00000001u; // 80256998
  c->r[5]=0u+0x00000000u; // 8025699C
  W32(c->r[28]+0x00000FF4u,c->r[30]); // 802569A0
  c->r[6]=0u+0x00000000u; // 802569A4
  c->lr=0x802569ACu; f_8025730C(c); // 802569A8
  c->r[5]=0u+0x00000000u; // 802569AC
  c->r[29]=0u+0x00000001u; // 802569B0
  c->r[6]=0u+0x00000000u; // 802569B4
  c->r[0]=0u+0x00000004u; // 802569B8
L_802569BC:;
  c->r[4]=c->r[28]+c->r[30]; // 802569BC
  c->r[7]=0u+0x00000000u; // 802569C0
  c->ctr=c->r[0]; // 802569C4
L_802569C8:;
  c->r[3]=c->r[4]+c->r[7]; // 802569C8
  c->r[3]=R8(c->r[3]+0x00000FFDu); // 802569CC
  cmps(c,0,(int32_t)c->r[3],0); // 802569D0
  if (crb(c,2)) { goto L_802569DC; } // 802569D4
  c->r[5]=c->r[5]+0x00000001u; // 802569D8
L_802569DC:;
  c->r[7]=c->r[7]+0x00000001u; // 802569DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802569C8; } // 802569E0
  c->r[6]=c->r[6]+0x00000001u; // 802569E4
  c->r[30]=c->r[30]+0x00000004u; // 802569E8
  cmps(c,0,(int32_t)c->r[6],4); // 802569EC
  if (crb(c,0)) { IRQCHK(c); goto L_802569BC; } // 802569F0
  cmps(c,0,(int32_t)c->r[5],1); // 802569F4
  if (!crb(c,2)) { goto L_80256A00; } // 802569F8
  c->r[29]=0u+0x00000000u; // 802569FC
L_80256A00:;
  c->r[31]=0u+0x803E0000u; // 80256A00
  c->r[30]=0u+0x80460000u; // 80256A04
  c->r[31]=c->r[31]+0x00005830u; // 80256A08
  c->r[5]=R32(c->r[28]+0x00000014u); // 80256A0C
  c->r[4]=c->r[29]|c->r[29]; // 80256A10
  c->r[3]=c->r[30]+0xFFFFD468u; // 80256A14
  c->r[6]=c->r[31]+0x0000000Bu; // 80256A18
  c->lr=0x80256A20u; f_8014A80C(c); // 80256A1C
  c->r[5]=R32(c->r[28]+0x00000014u); // 80256A20
  c->r[4]=c->r[29]|c->r[29]; // 80256A24
  c->r[3]=c->r[30]+0xFFFFD468u; // 80256A28
  c->r[6]=c->r[31]+0x0000000Eu; // 80256A2C
  c->lr=0x80256A34u; f_8014A80C(c); // 80256A30
  W8(c->r[28]+0x00000271u,c->r[29]); // 80256A34
  W8(c->r[28]+0x00000270u,c->r[29]); // 80256A38
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80256A3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80256A40
  c->lr=c->r[0]; // 80256A44
  c->r[1]=c->r[1]+0x00000020u; // 80256A48
  return; // 80256A4C
}

// fn_80256A50
void f_80256A50(Ctx* __restrict c) {
  trace_call(0x80256A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256A50
  c->r[0]=c->lr; // 80256A54
  c->r[4]=0u+0x00000001u; // 80256A58
  c->r[5]=0u+0x00000001u; // 80256A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80256A60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80256A64
  c->r[31]=0u+0x805E0000u; // 80256A68
  c->r[3]=c->r[31]+0xFFFFD790u; // 80256A6C
  c->lr=0x80256A74u; f_802417A4(c); // 80256A70
  {uint32_t ea=c->r[2]+0xFFFFDA60u; c->f[1]=c->ps1[1]=RF32(ea);} // 80256A74
  c->r[3]=c->r[31]+0xFFFFD790u; // 80256A78
  c->r[4]=0u+0x00000000u; // 80256A7C
  c->lr=0x80256A84u; f_80241F3C(c); // 80256A80
  c->r[3]=c->r[31]+0xFFFFD790u; // 80256A84
  c->r[4]=0u+0x00000000u; // 80256A88
  c->lr=0x80256A90u; f_8024182C(c); // 80256A8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80256A90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80256A94
  c->lr=c->r[0]; // 80256A98
  c->r[1]=c->r[1]+0x00000010u; // 80256A9C
  return; // 80256AA0
}

// fn_80256AA4
void f_80256AA4(Ctx* __restrict c) {
  trace_call(0x80256AA4u);
  return; // 80256AA4
}

// fn_80256AA8
void f_80256AA8(Ctx* __restrict c) {
  trace_call(0x80256AA8u);
  return; // 80256AA8
}

// fn_80256AAC
void f_80256AAC(Ctx* __restrict c) {
  trace_call(0x80256AACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256AAC
  c->r[0]=c->lr; // 80256AB0
  c->r[3]=0u+0x80590000u; // 80256AB4
  c->r[4]=0u+0x00000000u; // 80256AB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80256ABC
  c->r[3]=c->r[3]+0x000063F0u; // 80256AC0
  c->r[5]=0u+0x00000001u; // 80256AC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80256AC8
  c->lr=0x80256AD0u; f_801FA9B0(c); // 80256ACC
  c->r[31]=0u+0x805E0000u; // 80256AD0
  c->r[4]=0u+0x00000001u; // 80256AD4
  c->r[3]=c->r[31]+0xFFFFD790u; // 80256AD8
  c->r[5]=0u+0x00000001u; // 80256ADC
  c->lr=0x80256AE4u; f_802417A4(c); // 80256AE0
  c->r[3]=c->r[31]+0xFFFFD790u; // 80256AE4
  c->r[4]=0u+0x00000001u; // 80256AE8
  c->lr=0x80256AF0u; f_8024182C(c); // 80256AEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80256AF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80256AF4
  c->lr=c->r[0]; // 80256AF8
  c->r[1]=c->r[1]+0x00000010u; // 80256AFC
  return; // 80256B00
}

// fn_80256B04
void f_80256B04(Ctx* __restrict c) {
  trace_call(0x80256B04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256B04
  c->r[0]=c->lr; // 80256B08
  cmps(c,0,(int32_t)c->r[5],0); // 80256B0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80256B10
  if (!crb(c,2)) { goto L_80256B9C; } // 80256B14
  cmps(c,0,(int32_t)c->r[4],0); // 80256B18
  if (!crb(c,2)) { goto L_80256B30; } // 80256B1C
  c->r[5]=R32(c->r[3]+0x00000FF4u); // 80256B20
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80256B24
  W32(c->r[3]+0x00000FF4u,c->r[0]); // 80256B28
  goto L_80256B44; // 80256B2C
L_80256B30:;
  cmpu(c,0,c->r[4],0x00000001u); // 80256B30
  if (!crb(c,2)) { goto L_80256B44; } // 80256B34
  c->r[5]=R32(c->r[3]+0x00000FF4u); // 80256B38
  c->r[0]=c->r[5]+0x00000001u; // 80256B3C
  W32(c->r[3]+0x00000FF4u,c->r[0]); // 80256B40
L_80256B44:;
  c->r[0]=R32(c->r[3]+0x00000FF4u); // 80256B44
  cmps(c,0,(int32_t)c->r[0],0); // 80256B48
  if (!crb(c,0)) { goto L_80256B58; } // 80256B4C
  c->r[0]=0u+0x00000009u; // 80256B50
  W32(c->r[3]+0x00000FF4u,c->r[0]); // 80256B54
L_80256B58:;
  c->r[0]=R32(c->r[3]+0x00000FF4u); // 80256B58
  cmps(c,0,(int32_t)c->r[0],9); // 80256B5C
  if (!crb(c,1)) { goto L_80256B6C; } // 80256B60
  c->r[0]=0u+0x00000000u; // 80256B64
  W32(c->r[3]+0x00000FF4u,c->r[0]); // 80256B68
L_80256B6C:;
  cmps(c,0,(int32_t)c->r[4],0); // 80256B6C
  if (!crb(c,2)) { goto L_80256B84; } // 80256B70
  c->r[4]=0u+0x00000000u; // 80256B74
  c->r[5]=0u+0x00000001u; // 80256B78
  c->lr=0x80256B80u; f_8025730C(c); // 80256B7C
  goto L_80256BC0; // 80256B80
L_80256B84:;
  cmpu(c,0,c->r[4],0x00000001u); // 80256B84
  if (!crb(c,2)) { goto L_80256BC0; } // 80256B88
  c->r[4]=0u+0x00000001u; // 80256B8C
  c->r[5]=0u+0x00000001u; // 80256B90
  c->lr=0x80256B98u; f_8025730C(c); // 80256B94
  goto L_80256BC0; // 80256B98
L_80256B9C:;
  cmpu(c,0,c->r[5],0x00000001u); // 80256B9C
  if (crb(c,0)) { goto L_80256BC0; } // 80256BA0
  cmpu(c,0,c->r[5],0x00000003u); // 80256BA4
  if (crb(c,1)) { goto L_80256BC0; } // 80256BA8
  W8(c->r[3]+0x00000FFCu,c->r[5]); // 80256BAC
  c->r[4]=0u+0x00000001u; // 80256BB0
  c->r[5]=0u+0x00000000u; // 80256BB4
  c->r[6]=0u+0x00000000u; // 80256BB8
  c->lr=0x80256BC0u; f_8025730C(c); // 80256BBC
L_80256BC0:;
  c->r[3]=0u+0x80590000u; // 80256BC0
  c->r[0]=0u+0x00000001u; // 80256BC4
  c->r[3]=c->r[3]+0x000063F0u; // 80256BC8
  W8(c->r[3]+0x00000039u,c->r[0]); // 80256BCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80256BD0
  c->lr=c->r[0]; // 80256BD4
  c->r[1]=c->r[1]+0x00000010u; // 80256BD8
  return; // 80256BDC
}

// fn_80256BE0
void f_80256BE0(Ctx* __restrict c) {
  trace_call(0x80256BE0u);
  return; // 80256BE0
}

// fn_80256BE4
void f_80256BE4(Ctx* __restrict c) {
  trace_call(0x80256BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256BE4
  c->r[0]=c->lr; // 80256BE8
  cmps(c,0,(int32_t)c->r[5],0); // 80256BEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80256BF0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80256BF4
  c->r[30]=c->r[3]|c->r[3]; // 80256BF8
  c->r[31]=c->r[5]|c->r[5]; // 80256BFC
  if (!crb(c,2)) { goto L_80256C1C; } // 80256C00
  c->r[3]=0u+0x80590000u; // 80256C04
  c->r[4]=0u+0x00000000u; // 80256C08
  c->r[3]=c->r[3]+0x000063F0u; // 80256C0C
  c->r[5]=0u+0x00000002u; // 80256C10
  c->lr=0x80256C18u; f_801FA9B0(c); // 80256C14
  goto L_80256D28; // 80256C18
L_80256C1C:;
  c->r[3]=0u+0x80590000u; // 80256C1C
  c->r[4]=0u+0x00000000u; // 80256C20
  c->r[3]=c->r[3]+0x000063F0u; // 80256C24
  c->r[5]=0u+0x00000001u; // 80256C28
  c->lr=0x80256C30u; f_801FA9B0(c); // 80256C2C
  cmpu(c,0,c->r[31],0x00000001u); // 80256C30
  if (crb(c,0)) { goto L_80256D28; } // 80256C34
  cmpu(c,0,c->r[31],0x00000003u); // 80256C38
  if (crb(c,1)) { goto L_80256D28; } // 80256C3C
  c->r[3]=R8(c->r[30]+0x0000026Fu); // 80256C40
  c->r[0]=R8(c->r[30]+0x0000026Du); // 80256C44
  cmpu(c,0,c->r[3],c->r[0]); // 80256C48
  if (!crb(c,2)) { goto L_80256C5C; } // 80256C4C
  c->r[0]=R8(c->r[30]+0x0000026Bu); // 80256C50
  cmpu(c,0,c->r[3],c->r[0]); // 80256C54
  if (crb(c,2)) { goto L_80256C74; } // 80256C58
L_80256C5C:;
  c->r[0]=R8(c->r[30]+0x0000026Eu); // 80256C5C
  cmpu(c,0,c->r[3],c->r[0]); // 80256C60
  if (!crb(c,2)) { goto L_80256D28; } // 80256C64
  c->r[0]=R8(c->r[30]+0x0000026Cu); // 80256C68
  cmpu(c,0,c->r[3],c->r[0]); // 80256C6C
  if (!crb(c,2)) { goto L_80256D28; } // 80256C70
L_80256C74:;
  c->r[28]=0u+0x80440000u; // 80256C74
  c->r[4]=0u+0x00000000u; // 80256C78
  c->r[3]=c->r[28]+0xFFFFA818u; // 80256C7C
  c->lr=0x80256C84u; f_80068DBC(c); // 80256C80
  c->r[27]=R32(c->r[3]+0x000019A0u); // 80256C84
  c->r[29]=0u+0x80450000u; // 80256C88
  c->r[3]=c->r[29]+0xFFFFA808u; // 80256C8C
  c->r[4]=0u+0x0000000Eu; // 80256C90
  c->lr=0x80256C98u; f_8003FB98(c); // 80256C94
  c->r[0]=c->r[27]&c->r[3]; cr0(c,c->r[0]); // 80256C98
  if (!crb(c,2)) { goto L_80256D10; } // 80256C9C
  c->r[3]=c->r[28]+0xFFFFA818u; // 80256CA0
  c->r[4]=0u+0x00000000u; // 80256CA4
  c->lr=0x80256CACu; f_80068DBC(c); // 80256CA8
  c->r[27]=R32(c->r[3]+0x000019A0u); // 80256CAC
  c->r[3]=c->r[29]+0xFFFFA808u; // 80256CB0
  c->r[4]=0u+0x0000000Du; // 80256CB4
  c->lr=0x80256CBCu; f_8003FB98(c); // 80256CB8
  c->r[0]=c->r[27]&c->r[3]; cr0(c,c->r[0]); // 80256CBC
  if (!crb(c,2)) { goto L_80256D10; } // 80256CC0
  c->r[3]=c->r[28]+0xFFFFA818u; // 80256CC4
  c->r[4]=0u+0x00000001u; // 80256CC8
  c->lr=0x80256CD0u; f_80068DBC(c); // 80256CCC
  c->r[29]=c->r[29]+0xFFFFA808u; // 80256CD0
  c->r[27]=R32(c->r[3]+0x000019A0u); // 80256CD4
  c->r[3]=c->r[29]+0x00000068u; // 80256CD8
  c->r[4]=0u+0x0000000Eu; // 80256CDC
  c->lr=0x80256CE4u; f_8003FB98(c); // 80256CE0
  c->r[0]=c->r[27]&c->r[3]; cr0(c,c->r[0]); // 80256CE4
  if (!crb(c,2)) { goto L_80256D10; } // 80256CE8
  c->r[3]=c->r[28]+0xFFFFA818u; // 80256CEC
  c->r[4]=0u+0x00000001u; // 80256CF0
  c->lr=0x80256CF8u; f_80068DBC(c); // 80256CF4
  c->r[27]=R32(c->r[3]+0x000019A0u); // 80256CF8
  c->r[3]=c->r[29]+0x00000068u; // 80256CFC
  c->r[4]=0u+0x0000000Du; // 80256D00
  c->lr=0x80256D08u; f_8003FB98(c); // 80256D04
  c->r[0]=c->r[27]&c->r[3]; cr0(c,c->r[0]); // 80256D08
  if (crb(c,2)) { goto L_80256D28; } // 80256D0C
L_80256D10:;
  W8(c->r[30]+0x00000FFCu,c->r[31]); // 80256D10
  c->r[3]=c->r[30]|c->r[30]; // 80256D14
  c->r[4]=0u+0x00000001u; // 80256D18
  c->r[5]=0u+0x00000000u; // 80256D1C
  c->r[6]=0u+0x00000000u; // 80256D20
  c->lr=0x80256D28u; f_8025730C(c); // 80256D24
L_80256D28:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80256D28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80256D2C
  c->lr=c->r[0]; // 80256D30
  c->r[1]=c->r[1]+0x00000020u; // 80256D34
  return; // 80256D38
}

// fn_80256D3C
void f_80256D3C(Ctx* __restrict c) {
  trace_call(0x80256D3Cu);
  return; // 80256D3C
}

// fn_80256D40
void f_80256D40(Ctx* __restrict c) {
  trace_call(0x80256D40u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80256D40
  c->r[0]=c->lr; // 80256D44
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80256D48
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80256D4C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 80256D50
  c->r[11]=c->r[1]+0x00000090u; // 80256D54
  c->lr=0x80256D5Cu; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80256D58
  c->r[4]=0u+0x803E0000u; // 80256D5C
  c->r[0]=0u+0x0000000Cu; // 80256D60
  c->r[4]=c->r[4]+0x000057A8u; // 80256D64
  c->r[20]=c->r[3]|c->r[3]; // 80256D68
  c->r[5]=c->r[1]+0x0000002Fu; // 80256D6C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80256D70
  c->ctr=c->r[0]; // 80256D74
L_80256D78:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 80256D78
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 80256D7C
  W8(c->r[5]+0x00000001u,c->r[3]); // 80256D80
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 80256D84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80256D78; } // 80256D88
  c->r[3]=0u+0x803E0000u; // 80256D8C
  c->r[24]=0u+0x00000000u; // 80256D90
  c->r[15]=0u+0x00000000u; // 80256D94
  c->r[18]=0u+0x80460000u; // 80256D98
  c->r[19]=c->r[3]+0x00005830u; // 80256D9C
L_80256DA0:;
  c->r[3]=c->r[20]+c->r[15]; // 80256DA0
  c->r[25]=0u+0x00000000u; // 80256DA4
  c->r[21]=c->r[3]+0x00001234u; // 80256DA8
  c->r[16]=0u+0x00000000u; // 80256DAC
  c->r[22]=c->r[3]+0x00002608u; // 80256DB0
  c->r[17]=0u+0x00000000u; // 80256DB4
L_80256DB8:;
  c->r[23]=c->r[1]+0x00000030u; // 80256DB8
  c->r[3]=c->r[21]+c->r[16]; // 80256DBC
  c->r[23]=c->r[23]+c->r[17]; // 80256DC0
  c->r[4]=c->r[19]+0x00000011u; // 80256DC4
  c->r[6]=c->r[23]|c->r[23]; // 80256DC8
  c->r[5]=c->r[24]+0x00000001u; // 80256DCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80256DD0
  c->lr=0x80256DD8u; f_80291CC4(c); // 80256DD4
  c->r[6]=c->r[23]|c->r[23]; // 80256DD8
  c->r[3]=c->r[22]+c->r[16]; // 80256DDC
  c->r[4]=c->r[19]+0x0000001Du; // 80256DE0
  c->r[5]=c->r[24]+0x00000001u; // 80256DE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80256DE8
  c->lr=0x80256DF0u; f_80291CC4(c); // 80256DEC
  c->r[25]=c->r[25]+0x00000001u; // 80256DF0
  c->r[17]=c->r[17]+0x00000008u; // 80256DF4
  cmps(c,0,(int32_t)c->r[25],3); // 80256DF8
  c->r[16]=c->r[16]+0x00000234u; // 80256DFC
  if (crb(c,0)) { IRQCHK(c); goto L_80256DB8; } // 80256E00
  c->r[3]=c->r[1]+0x00000020u; // 80256E04
  c->r[4]=c->r[19]+0x00000024u; // 80256E08
  c->r[5]=c->r[24]+0x00000001u; // 80256E0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80256E10
  c->lr=0x80256E18u; f_80291CC4(c); // 80256E14
  c->r[5]=R32(c->r[20]+0x00000014u); // 80256E18
  c->r[3]=c->r[18]+0xFFFFD468u; // 80256E1C
  c->r[6]=c->r[1]+0x00000020u; // 80256E20
  c->r[4]=0u+0x00000000u; // 80256E24
  c->lr=0x80256E2Cu; f_8014A80C(c); // 80256E28
  c->r[24]=c->r[24]+0x00000001u; // 80256E2C
  c->r[15]=c->r[15]+0x0000069Cu; // 80256E30
  cmps(c,0,(int32_t)c->r[24],3); // 80256E34
  if (crb(c,0)) { IRQCHK(c); goto L_80256DA0; } // 80256E38
  c->r[4]=0u+0x803E0000u; // 80256E3C
  c->r[3]=c->r[20]+0x000039DCu; // 80256E40
  c->r[4]=c->r[4]+0x00005830u; // 80256E44
  c->r[4]=c->r[4]+0x00000031u; // 80256E48
  c->lr=0x80256E50u; f_802933D8(c); // 80256E4C
  c->r[0]=0u+0x00000004u; // 80256E50
  c->r[3]=0u+0x00000000u; // 80256E54
  c->r[5]=0u+0x00000003u; // 80256E58
  c->ctr=c->r[0]; // 80256E5C
L_80256E60:;
  c->r[4]=c->r[20]+c->r[3]; // 80256E60
  c->r[3]=c->r[3]+0x00000010u; // 80256E64
  W32(c->r[4]+0x00001010u,c->r[5]); // 80256E68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80256E60; } // 80256E6C
  c->r[3]=0u+0x00000000u; // 80256E70
  c->r[4]=0u+0x00000002u; // 80256E74
  c->r[0]=0u+0x00000001u; // 80256E78
  W32(c->r[20]+0x00001014u,c->r[4]); // 80256E7C
  c->r[22]=0u+0x00000000u; // 80256E80
  c->r[15]=0u+0x00000000u; // 80256E84
  W32(c->r[20]+0x00001018u,c->r[3]); // 80256E88
  c->r[16]=0u+0x00000000u; // 80256E8C
  W32(c->r[20]+0x0000101Cu,c->r[3]); // 80256E90
  W32(c->r[20]+0x00001024u,c->r[4]); // 80256E94
  W32(c->r[20]+0x00001028u,c->r[4]); // 80256E98
  W32(c->r[20]+0x0000102Cu,c->r[3]); // 80256E9C
  W32(c->r[20]+0x00001034u,c->r[3]); // 80256EA0
  W32(c->r[20]+0x00001038u,c->r[0]); // 80256EA4
  W32(c->r[20]+0x0000103Cu,c->r[0]); // 80256EA8
  W32(c->r[20]+0x00001044u,c->r[4]); // 80256EAC
  W32(c->r[20]+0x00001048u,c->r[3]); // 80256EB0
  W32(c->r[20]+0x0000104Cu,c->r[3]); // 80256EB4
L_80256EB8:;
  c->r[18]=c->r[20]+c->r[15]; // 80256EB8
  c->r[19]=c->r[20]+c->r[16]; // 80256EBC
  c->r[23]=0u+0x00000000u; // 80256EC0
  c->r[17]=0u+0x00000000u; // 80256EC4
L_80256EC8:;
  c->r[21]=c->r[18]+c->r[17]; // 80256EC8
  c->r[24]=0u+0x00000001u; // 80256ECC
  c->r[25]=0u+0x00000000u; // 80256ED0
  goto L_80256F18; // 80256ED4
L_80256ED8:;
  cmps(c,0,(int32_t)c->r[22],3); // 80256ED8
  if (!crb(c,2)) { goto L_80256EF4; } // 80256EDC
  cmps(c,0,(int32_t)c->r[23],1); // 80256EE0
  if (!crb(c,2)) { goto L_80256EF4; } // 80256EE4
  cmps(c,0,(int32_t)c->r[25],1); // 80256EE8
  if (!crb(c,2)) { goto L_80256EF4; } // 80256EEC
  c->r[25]=0u+0x00000002u; // 80256EF0
L_80256EF4:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80256EF4
  c->r[4]=c->r[22]|c->r[22]; // 80256EF8
  c->r[5]=c->r[23]|c->r[23]; // 80256EFC
  c->r[6]=c->r[25]|c->r[25]; // 80256F00
  c->lr=0x80256F08u; f_801F8A40(c); // 80256F04
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80256F08
  if (!crb(c,2)) { goto L_80256F14; } // 80256F0C
  c->r[24]=0u+0x00000000u; // 80256F10
L_80256F14:;
  c->r[25]=c->r[25]+0x00000001u; // 80256F14
L_80256F18:;
  c->r[0]=R32(c->r[21]+0x00001010u); // 80256F18
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80256F1C
  if (crb(c,0)) { IRQCHK(c); goto L_80256ED8; } // 80256F20
  cmps(c,0,(int32_t)c->r[0],0); // 80256F24
  if (!crb(c,2)) { goto L_80256F30; } // 80256F28
  c->r[24]=0u+0x00000000u; // 80256F2C
L_80256F30:;
  c->r[3]=c->r[19]+c->r[23]; // 80256F30
  c->r[23]=c->r[23]+0x00000001u; // 80256F34
  cmps(c,0,(int32_t)c->r[23],4); // 80256F38
  W8(c->r[3]+0x00000FFDu,c->r[24]); // 80256F3C
  c->r[17]=c->r[17]+0x00000004u; // 80256F40
  if (crb(c,0)) { IRQCHK(c); goto L_80256EC8; } // 80256F44
  c->r[22]=c->r[22]+0x00000001u; // 80256F48
  c->r[16]=c->r[16]+0x00000004u; // 80256F4C
  cmps(c,0,(int32_t)c->r[22],4); // 80256F50
  c->r[15]=c->r[15]+0x00000010u; // 80256F54
  if (crb(c,0)) { IRQCHK(c); goto L_80256EB8; } // 80256F58
  c->r[3]=0u+0x803E0000u; // 80256F5C
  c->r[24]=0u+0x00000000u; // 80256F60
  c->r[15]=0u+0x00000000u; // 80256F64
  c->r[17]=0u+0x80460000u; // 80256F68
  c->r[18]=c->r[3]+0x00005830u; // 80256F6C
L_80256F70:;
  c->r[3]=c->r[20]+c->r[15]; // 80256F70
  c->r[25]=0u+0x00000000u; // 80256F74
  c->r[21]=c->r[3]+0x00001234u; // 80256F78
  c->r[16]=0u+0x00000000u; // 80256F7C
  c->r[22]=c->r[3]+0x00001110u; // 80256F80
  c->r[23]=c->r[3]+0x000024E4u; // 80256F84
L_80256F88:;
  cmps(c,0,(int32_t)c->r[25],1); // 80256F88
  if (!crb(c,2)) { goto L_80256FBC; } // 80256F8C
  c->r[4]=R32(c->r[20]+0x00000014u); // 80256F90
  c->r[19]=c->r[18]+0x0000003Cu; // 80256F94
  cmps(c,0,(int32_t)c->r[4],0); // 80256F98
  if (crb(c,0)) { goto L_80256FBC; } // 80256F9C
  c->r[3]=c->r[17]+0xFFFFD468u; // 80256FA0
  c->r[5]=c->r[21]+c->r[16]; // 80256FA4
  c->lr=0x80256FACu; f_800482D4(c); // 80256FA8
  cmps(c,0,(int32_t)c->r[3],0); // 80256FAC
  if (crb(c,2)) { goto L_80256FBC; } // 80256FB0
  c->r[4]=c->r[19]|c->r[19]; // 80256FB4
  c->lr=0x80256FBCu; f_80389C4C(c); // 80256FB8
L_80256FBC:;
  c->r[3]=c->r[20]|c->r[20]; // 80256FBC
  c->r[4]=c->r[22]+c->r[16]; // 80256FC0
  c->r[5]=c->r[18]+0x00000043u; // 80256FC4
  c->lr=0x80256FCCu; f_80257944(c); // 80256FC8
  cmps(c,0,(int32_t)c->r[25],1); // 80256FCC
  if (crb(c,2)) { goto L_80257004; } // 80256FD0
  if (!crb(c,0)) { goto L_80256FE4; } // 80256FD4
  cmps(c,0,(int32_t)c->r[25],0); // 80256FD8
  if (!crb(c,0)) { goto L_80256FF0; } // 80256FDC
  goto L_80257028; // 80256FE0
L_80256FE4:;
  cmps(c,0,(int32_t)c->r[25],3); // 80256FE4
  if (!crb(c,0)) { goto L_80257028; } // 80256FE8
  goto L_80257018; // 80256FEC
L_80256FF0:;
  c->r[3]=c->r[20]|c->r[20]; // 80256FF0
  c->r[4]=c->r[23]+c->r[16]; // 80256FF4
  c->r[5]=c->r[18]+0x00000050u; // 80256FF8
  c->lr=0x80257000u; f_80257944(c); // 80256FFC
  goto L_80257028; // 80257000
L_80257004:;
  c->r[3]=c->r[20]|c->r[20]; // 80257004
  c->r[4]=c->r[23]+c->r[16]; // 80257008
  c->r[5]=c->r[18]+0x00000055u; // 8025700C
  c->lr=0x80257014u; f_80257944(c); // 80257010
  goto L_80257028; // 80257014
L_80257018:;
  c->r[3]=c->r[20]|c->r[20]; // 80257018
  c->r[4]=c->r[23]+c->r[16]; // 8025701C
  c->r[5]=c->r[18]+0x0000005Bu; // 80257020
  c->lr=0x80257028u; f_80257944(c); // 80257024
L_80257028:;
  c->r[25]=c->r[25]+0x00000001u; // 80257028
  c->r[16]=c->r[16]+0x00000234u; // 8025702C
  cmps(c,0,(int32_t)c->r[25],3); // 80257030
  if (crb(c,0)) { IRQCHK(c); goto L_80256F88; } // 80257034
  c->r[3]=c->r[13]+0xFFFF97A8u; // 80257038
  c->lr=0x80257040u; f_80242AA8(c); // 8025703C
  cmps(c,0,(int32_t)c->r[3],0); // 80257040
  if (!crb(c,2)) { goto L_80257060; } // 80257044
  c->r[3]=c->r[20]+c->r[15]; // 80257048
  c->r[4]=c->r[18]+0x00000060u; // 8025704C
  c->r[3]=c->r[3]+0x00002504u; // 80257050
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257054
  c->lr=0x8025705Cu; f_80291CC4(c); // 80257058
  goto L_80257074; // 8025705C
L_80257060:;
  c->r[3]=c->r[20]+c->r[15]; // 80257060
  c->r[4]=c->r[18]+0x00000076u; // 80257064
  c->r[3]=c->r[3]+0x00002504u; // 80257068
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025706C
  c->lr=0x80257074u; f_80291CC4(c); // 80257070
L_80257074:;
  c->r[3]=c->r[20]+c->r[15]; // 80257074
  c->r[4]=c->r[18]+0x00000088u; // 80257078
  c->r[3]=c->r[3]+0x00002738u; // 8025707C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257080
  c->lr=0x80257088u; f_80291CC4(c); // 80257084
  c->r[3]=c->r[20]+c->r[15]; // 80257088
  c->r[4]=c->r[18]+0x0000008Cu; // 8025708C
  c->r[3]=c->r[3]+0x0000296Cu; // 80257090
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257094
  c->lr=0x8025709Cu; f_80291CC4(c); // 80257098
  c->r[24]=c->r[24]+0x00000001u; // 8025709C
  c->r[15]=c->r[15]+0x0000069Cu; // 802570A0
  cmps(c,0,(int32_t)c->r[24],3); // 802570A4
  if (crb(c,0)) { IRQCHK(c); goto L_80256F70; } // 802570A8
  c->r[4]=R32(c->r[20]+0x00000014u); // 802570AC
  c->r[3]=c->r[20]|c->r[20]; // 802570B0
  c->r[5]=c->r[20]+0x000039DCu; // 802570B4
  c->r[6]=c->r[20]+0x000038B8u; // 802570B8
  c->r[7]=0u+0xFFFFFFFFu; // 802570BC
  c->lr=0x802570C4u; f_801DA518(c); // 802570C0
  c->r[22]=0u+0x00000000u; // 802570C4
  c->r[15]=0u+0x00000000u; // 802570C8
  c->r[21]=0u+0x00000003u; // 802570CC
L_802570D0:;
  c->r[17]=c->r[20]+c->r[15]; // 802570D0
  {uint32_t ea=c->r[2]+0xFFFFDA64u; c->f[31]=c->ps1[31]=RF32(ea);} // 802570D4
  c->r[18]=c->r[17]+0x00001110u; // 802570D8
  c->r[23]=0u+0x00000000u; // 802570DC
  c->r[19]=c->r[17]+0x000024E4u; // 802570E0
  c->r[16]=0u+0x00000000u; // 802570E4
L_802570E8:;
  c->r[3]=c->r[20]|c->r[20]; // 802570E8
  c->r[4]=c->r[18]+c->r[16]; // 802570EC
  c->r[5]=0u+0x00000002u; // 802570F0
  c->lr=0x802570F8u; f_80257BB8(c); // 802570F4
  c->r[3]=c->r[20]|c->r[20]; // 802570F8
  c->r[4]=c->r[19]+c->r[16]; // 802570FC
  c->r[5]=0u+0x00000000u; // 80257100
  c->lr=0x80257108u; f_80257BB8(c); // 80257104
  c->r[3]=c->r[17]+c->r[16]; // 80257108
  {uint32_t ea=c->r[3]+0x00001110u; c->f[0]=c->ps1[0]=RF32(ea);} // 8025710C
  fcmp(c,0,c->f[0],c->f[31]); // 80257110
  if (!crb(c,0)) { goto L_8025711C; } // 80257114
  c->f[31]=c->f[0]; // 80257118
L_8025711C:;
  c->r[23]=c->r[23]+0x00000001u; // 8025711C
  c->r[16]=c->r[16]+0x00000234u; // 80257120
  cmps(c,0,(int32_t)c->r[23],3); // 80257124
  if (crb(c,0)) { IRQCHK(c); goto L_802570E8; } // 80257128
  c->r[3]=0u+0x00000000u; // 8025712C
  c->ctr=c->r[21]; // 80257130
L_80257134:;
  c->r[4]=c->r[17]+c->r[3]; // 80257134
  c->r[3]=c->r[3]+0x00000234u; // 80257138
  {uint32_t ea=c->r[4]+0x00001110u; WF32(ea,c->f[31]);} // 8025713C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80257134; } // 80257140
  c->r[22]=c->r[22]+0x00000001u; // 80257144
  c->r[15]=c->r[15]+0x0000069Cu; // 80257148
  cmps(c,0,(int32_t)c->r[22],3); // 8025714C
  if (crb(c,0)) { IRQCHK(c); goto L_802570D0; } // 80257150
  c->r[4]=0u+0x803E0000u; // 80257154
  c->r[3]=c->r[1]+0x00000018u; // 80257158
  c->r[30]=c->r[4]+0x00005830u; // 8025715C
  c->r[4]=c->r[30]+0x00000094u; // 80257160
  c->lr=0x80257168u; f_80242B30(c); // 80257164
  c->r[4]=c->r[30]+0x0000009Eu; // 80257168
  c->r[3]=c->r[1]+0x00000010u; // 8025716C
  c->lr=0x80257174u; f_80242B30(c); // 80257170
  c->r[24]=0u+0x00000000u; // 80257174
  c->r[19]=0u+0x00000000u; // 80257178
  c->r[18]=0u+0x00000000u; // 8025717C
  c->r[17]=0u+0x00000000u; // 80257180
L_80257184:;
  c->r[29]=c->r[20]+c->r[17]; // 80257184
  c->r[28]=c->r[20]+c->r[19]; // 80257188
  c->r[27]=c->r[20]+c->r[18]; // 8025718C
  c->r[23]=0u+0x00000000u; // 80257190
  c->r[16]=0u+0x00000000u; // 80257194
  c->r[15]=0u+0x00000000u; // 80257198
L_8025719C:;
  c->r[3]=c->r[29]+c->r[23]; // 8025719C
  c->r[0]=R8(c->r[3]+0x00000FFDu); // 802571A0
  cmps(c,0,(int32_t)c->r[0],0); // 802571A4
  if (crb(c,2)) { goto L_802572A8; } // 802571A8
  c->r[26]=c->r[28]+c->r[16]; // 802571AC
  c->r[25]=c->r[27]+c->r[15]; // 802571B0
  c->r[22]=0u+0x00000000u; // 802571B4
  goto L_8025729C; // 802571B8
L_802571BC:;
  cmps(c,0,(int32_t)c->r[24],3); // 802571BC
  if (!crb(c,2)) { goto L_802571D8; } // 802571C0
  cmps(c,0,(int32_t)c->r[23],1); // 802571C4
  if (!crb(c,2)) { goto L_802571D8; } // 802571C8
  cmps(c,0,(int32_t)c->r[22],1); // 802571CC
  if (!crb(c,2)) { goto L_802571D8; } // 802571D0
  c->r[22]=0u+0x00000002u; // 802571D4
L_802571D8:;
  c->r[5]=c->r[24]|c->r[24]; // 802571D8
  c->r[6]=c->r[23]|c->r[23]; // 802571DC
  c->r[3]=c->r[1]+0x00000008u; // 802571E0
  c->r[4]=c->r[30]+0x000000A8u; // 802571E4
  c->r[7]=c->r[22]+0x00000001u; // 802571E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802571EC
  c->lr=0x802571F4u; f_80291CC4(c); // 802571F0
  c->r[3]=c->r[1]+0x00000018u; // 802571F4
  c->r[4]=c->r[1]+0x00000008u; // 802571F8
  c->lr=0x80257200u; f_80242B8C(c); // 802571FC
  c->r[3]=c->r[1]+0x00000018u; // 80257200
  c->r[4]=0u+0x00000013u; // 80257204
  c->r[5]=0u+0x00000000u; // 80257208
  c->lr=0x80257210u; f_80242CA8(c); // 8025720C
  c->lr=0x80257214u; f_80295EAC(c); // 80257210
  c->r[31]=c->r[3]|c->r[3]; // 80257214
  c->r[3]=c->r[1]+0x00000010u; // 80257218
  c->r[4]=c->r[1]+0x00000008u; // 8025721C
  c->r[21]=0u+0x00000000u; // 80257220
  c->lr=0x80257228u; f_80242B8C(c); // 80257224
L_80257228:;
  c->r[3]=c->r[1]+0x00000010u; // 80257228
  c->r[4]=0u+0x00000002u; // 8025722C
  c->r[5]=0u+0x00000000u; // 80257230
  c->lr=0x80257238u; f_80242CA8(c); // 80257234
  c->r[0]=R8(c->r[3]+0x00000000u); // 80257238
  cmps(c,0,(int32_t)c->r[0],70); // 8025723C
  if (!crb(c,2)) { goto L_80257270; } // 80257240
  c->r[3]=c->r[1]+0x00000010u; // 80257244
  c->r[4]=0u+0x00000002u; // 80257248
  c->r[5]=0u+0x00000045u; // 8025724C
  c->lr=0x80257254u; f_80242CA8(c); // 80257250
  c->lr=0x80257258u; f_80295EAC(c); // 80257254
  c->r[4]=c->r[3]|c->r[3]; // 80257258
  c->r[3]=c->r[24]|c->r[24]; // 8025725C
  c->lr=0x80257264u; f_801D37E8(c); // 80257260
  cmps(c,0,(int32_t)c->r[3],0); // 80257264
  if (crb(c,2)) { goto L_80257270; } // 80257268
  c->r[21]=c->r[21]+0x00000001u; // 8025726C
L_80257270:;
  c->r[3]=c->r[1]+0x00000010u; // 80257270
  c->r[4]=c->r[1]+0x00000008u; // 80257274
  c->lr=0x8025727Cu; f_80242BE0(c); // 80257278
  cmps(c,0,(int32_t)c->r[3],0); // 8025727C
  if (!crb(c,2)) { IRQCHK(c); goto L_80257228; } // 80257280
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 80257284
  c->r[3]=rotl(c->r[21],8)&0xFFFFFF00u; // 80257288
  c->r[4]=c->r[3]+c->r[31]; // 8025728C
  c->r[22]=c->r[22]+0x00000001u; // 80257290
  c->r[3]=c->r[26]+c->r[0]; // 80257294
  W32(c->r[3]+0x00001050u,c->r[4]); // 80257298
L_8025729C:;
  c->r[0]=R32(c->r[25]+0x00001010u); // 8025729C
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 802572A0
  if (crb(c,0)) { IRQCHK(c); goto L_802571BC; } // 802572A4
L_802572A8:;
  c->r[23]=c->r[23]+0x00000001u; // 802572A8
  c->r[15]=c->r[15]+0x00000004u; // 802572AC
  cmps(c,0,(int32_t)c->r[23],4); // 802572B0
  c->r[16]=c->r[16]+0x0000000Cu; // 802572B4
  if (crb(c,0)) { IRQCHK(c); goto L_8025719C; } // 802572B8
  c->r[24]=c->r[24]+0x00000001u; // 802572BC
  c->r[18]=c->r[18]+0x00000010u; // 802572C0
  cmps(c,0,(int32_t)c->r[24],4); // 802572C4
  c->r[17]=c->r[17]+0x00000004u; // 802572C8
  c->r[19]=c->r[19]+0x00000030u; // 802572CC
  if (crb(c,0)) { IRQCHK(c); goto L_80257184; } // 802572D0
  c->r[3]=c->r[1]+0x00000010u; // 802572D4
  c->r[4]=0u+0xFFFFFFFFu; // 802572D8
  c->lr=0x802572E0u; f_80242AF0(c); // 802572DC
  c->r[3]=c->r[1]+0x00000018u; // 802572E0
  c->r[4]=0u+0xFFFFFFFFu; // 802572E4
  c->lr=0x802572ECu; f_80242AF0(c); // 802572E8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 802572EC
  c->r[11]=c->r[1]+0x00000090u; // 802572F0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 802572F4
  c->lr=0x802572FCu; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802572F8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 802572FC
  c->lr=c->r[0]; // 80257300
  c->r[1]=c->r[1]+0x000000A0u; // 80257304
  return; // 80257308
}

// fn_8025730C
void f_8025730C(Ctx* __restrict c) {
  trace_call(0x8025730Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025730C
  c->r[0]=c->lr; // 80257310
  W32(c->r[1]+0x00000194u,c->r[0]); // 80257314
  c->r[11]=c->r[1]+0x00000190u; // 80257318
  c->lr=0x80257320u; f_80289DC0(c); // 8025731C
  c->r[25]=0u+0x803E0000u; // 80257320
  c->r[24]=0u+0x80410000u; // 80257324
  c->r[25]=c->r[25]+0x000057A8u; // 80257328
  c->r[14]=c->r[6]|c->r[6]; // 8025732C
  c->r[0]=0u+0x00000020u; // 80257330
  c->r[15]=c->r[3]|c->r[3]; // 80257334
  c->r[7]=c->r[25]+0x00000018u; // 80257338
  c->r[16]=c->r[5]|c->r[5]; // 8025733C
  c->r[24]=c->r[24]+0x00001E48u; // 80257340
  c->r[6]=c->r[1]+0x00000063u; // 80257344
  c->r[5]=c->r[7]+0xFFFFFFFFu; // 80257348
  c->ctr=c->r[0]; // 8025734C
L_80257350:;
  c->r[3]=R8(c->r[5]+0x00000001u); // 80257350
  {uint32_t ea=c->r[5]+0x00000002u; c->r[0]=R8(ea); c->r[5]=ea;} // 80257354
  W8(c->r[6]+0x00000001u,c->r[3]); // 80257358
  {uint32_t ea=c->r[6]+0x00000002u; W8(ea,c->r[0]); c->r[6]=ea;} // 8025735C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80257350; } // 80257360
  c->r[5]=c->r[25]+0x00000058u; // 80257364
  c->r[6]=c->r[25]+0x00000068u; // 80257368
  c->r[12]=R32(c->r[25]+0x00000058u); // 8025736C
  c->r[3]=c->r[15]|c->r[15]; // 80257370
  c->r[11]=R32(c->r[5]+0x00000004u); // 80257374
  c->r[10]=R32(c->r[5]+0x00000008u); // 80257378
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 8025737C
  c->r[8]=R32(c->r[25]+0x00000068u); // 80257380
  c->r[7]=R32(c->r[6]+0x00000004u); // 80257384
  c->r[5]=R32(c->r[6]+0x00000008u); // 80257388
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8025738C
  W32(c->r[1]+0x00000054u,c->r[12]); // 80257390
  W32(c->r[1]+0x00000058u,c->r[11]); // 80257394
  W32(c->r[1]+0x0000005Cu,c->r[10]); // 80257398
  W32(c->r[1]+0x00000060u,c->r[9]); // 8025739C
  W32(c->r[1]+0x00000044u,c->r[8]); // 802573A0
  W32(c->r[1]+0x00000048u,c->r[7]); // 802573A4
  W32(c->r[1]+0x0000004Cu,c->r[5]); // 802573A8
  W32(c->r[1]+0x00000050u,c->r[0]); // 802573AC
  c->lr=0x802573B4u; f_80257D1C(c); // 802573B0
  cmps(c,0,(int32_t)c->r[16],0); // 802573B4
  if (crb(c,2)) { goto L_802573FC; } // 802573B8
  c->r[3]=R32(c->r[15]+0x00000FF4u); // 802573BC
  c->r[0]=R32(c->r[15]+0x00000FF8u); // 802573C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802573C4
  if (crb(c,2)) { goto L_802573FC; } // 802573C8
  c->r[16]=0u+0x803E0000u; // 802573CC
  {uint32_t ea=c->r[2]+0xFFFFDA60u; c->f[1]=c->ps1[1]=RF32(ea);} // 802573D0
  c->r[16]=c->r[16]+0x00005830u; // 802573D4
  c->r[4]=0u+0x00000000u; // 802573D8
  c->r[3]=c->r[16]+0x000000B2u; // 802573DC
  c->r[5]=0u+0xFFFFFFFFu; // 802573E0
  c->lr=0x802573E8u; f_80068DD8(c); // 802573E4
  {uint32_t ea=c->r[2]+0xFFFFDA60u; c->f[1]=c->ps1[1]=RF32(ea);} // 802573E8
  c->r[5]=c->r[14]|c->r[14]; // 802573EC
  c->r[3]=c->r[16]+0x000000B9u; // 802573F0
  c->r[4]=0u+0x00000000u; // 802573F4
  c->lr=0x802573FCu; f_80068DD8(c); // 802573F8
L_802573FC:;
  c->r[0]=R32(c->r[15]+0x00000FF4u); // 802573FC
  c->r[16]=0u+0x803E0000u; // 80257400
  c->r[4]=c->r[24]+0x00000000u; // 80257404
  c->r[3]=0u+0x0000000Au; // 80257408
  W32(c->r[15]+0x00000FF8u,c->r[0]); // 8025740C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80257410
  c->r[5]=0u+0x00000064u; // 80257414
  c->r[16]=c->r[16]+0x00005830u; // 80257418
  c->r[6]=R32(c->r[4]+c->r[0]); // 8025741C
  c->r[17]=0u+0x00000000u; // 80257420
  c->r[23]=0u+0x00000000u; // 80257424
  c->r[14]=0u+0x80460000u; // 80257428
  c->r[4]=divw((int32_t)c->r[6],(int32_t)c->r[3]); // 8025742C
  c->r[18]=0u+0x00000003u; // 80257430
  c->r[19]=0u+0x00000003u; // 80257434
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 80257438
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 8025743C
  c->r[21]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 80257440
  c->r[20]=c->r[4]-c->r[3]; // 80257444
  c->r[3]=rotl(c->r[20],2)&0xFFFFFFFCu; // 80257448
  c->r[0]=rotl(c->r[21],4)&0xFFFFFFF0u; // 8025744C
  c->r[0]=c->r[15]+c->r[0]; // 80257450
  c->r[22]=c->r[3]+c->r[0]; // 80257454
L_80257458:;
  c->r[3]=c->r[1]+0x00000034u; // 80257458
  c->r[4]=c->r[16]+0x000000C1u; // 8025745C
  c->r[5]=c->r[17]+0x00000001u; // 80257460
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257464
  c->lr=0x8025746Cu; f_80291CC4(c); // 80257468
  c->r[0]=R32(c->r[22]+0x00001010u); // 8025746C
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[0]); // 80257470
  if (!crb(c,0)) { goto L_802574C0; } // 80257474
  c->r[5]=R32(c->r[15]+0x00000014u); // 80257478
  c->r[3]=c->r[14]+0xFFFFD468u; // 8025747C
  c->r[6]=c->r[1]+0x00000034u; // 80257480
  c->r[4]=0u+0x00000001u; // 80257484
  c->lr=0x8025748Cu; f_8014A80C(c); // 80257488
  c->r[4]=c->r[15]+c->r[23]; // 8025748C
  c->r[3]=0u+0x00000000u; // 80257490
  c->ctr=c->r[19]; // 80257494
L_80257498:;
  c->r[5]=c->r[4]+c->r[3]; // 80257498
  c->r[3]=c->r[3]+0x00000234u; // 8025749C
  c->r[0]=R32(c->r[5]+0x0000112Cu); // 802574A0
  c->r[0]=c->r[0]|0x000000FFu; // 802574A4
  W32(c->r[5]+0x0000112Cu,c->r[0]); // 802574A8
  c->r[0]=R32(c->r[5]+0x00002500u); // 802574AC
  c->r[0]=c->r[0]|0x000000FFu; // 802574B0
  W32(c->r[5]+0x00002500u,c->r[0]); // 802574B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80257498; } // 802574B8
  goto L_80257504; // 802574BC
L_802574C0:;
  c->r[5]=R32(c->r[15]+0x00000014u); // 802574C0
  c->r[3]=c->r[14]+0xFFFFD468u; // 802574C4
  c->r[6]=c->r[1]+0x00000034u; // 802574C8
  c->r[4]=0u+0x00000000u; // 802574CC
  c->lr=0x802574D4u; f_8014A80C(c); // 802574D0
  c->r[4]=c->r[15]+c->r[23]; // 802574D4
  c->r[3]=0u+0x00000000u; // 802574D8
  c->ctr=c->r[18]; // 802574DC
L_802574E0:;
  c->r[5]=c->r[4]+c->r[3]; // 802574E0
  c->r[3]=c->r[3]+0x00000234u; // 802574E4
  c->r[0]=R32(c->r[5]+0x0000112Cu); // 802574E8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 802574EC
  W32(c->r[5]+0x0000112Cu,c->r[0]); // 802574F0
  c->r[0]=R32(c->r[5]+0x00002500u); // 802574F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 802574F8
  W32(c->r[5]+0x00002500u,c->r[0]); // 802574FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802574E0; } // 80257500
L_80257504:;
  c->r[17]=c->r[17]+0x00000001u; // 80257504
  c->r[23]=c->r[23]+0x0000069Cu; // 80257508
  cmps(c,0,(int32_t)c->r[17],3); // 8025750C
  if (crb(c,0)) { IRQCHK(c); goto L_80257458; } // 80257510
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)48); // 80257514
  c->r[3]=0u+0x803E0000u; // 80257518
  c->r[26]=c->r[1]+0x00000054u; // 8025751C
  c->r[27]=c->r[3]+0x00005830u; // 80257520
  c->r[4]=(uint32_t)((int32_t)c->r[20]*(int32_t)12); // 80257524
  c->r[30]=c->r[25]+0x00000078u; // 80257528
  c->r[0]=c->r[15]+c->r[0]; // 8025752C
  c->r[14]=c->r[1]+0x00000024u; // 80257530
  c->r[23]=c->r[4]+c->r[0]; // 80257534
  c->r[31]=0u+0xFFFFF964u; // 80257538
  c->r[19]=0u+0x00000001u; // 8025753C
  c->r[18]=0u+0x00000003u; // 80257540
  c->r[17]=0u+0x00000000u; // 80257544
  c->r[28]=0u+0x00000E10u; // 80257548
  c->r[29]=0u+0x0000003Cu; // 8025754C
  goto L_802576F4; // 80257550
L_80257554:;
  cmps(c,0,(int32_t)c->r[21],3); // 80257554
  if (!crb(c,2)) { goto L_80257570; } // 80257558
  cmps(c,0,(int32_t)c->r[20],1); // 8025755C
  if (!crb(c,2)) { goto L_80257570; } // 80257560
  cmps(c,0,(int32_t)c->r[17],1); // 80257564
  if (!crb(c,2)) { goto L_80257570; } // 80257568
  c->r[17]=0u+0x00000002u; // 8025756C
L_80257570:;
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 80257570
  c->r[31]=c->r[31]+0x0000069Cu; // 80257574
  c->r[3]=c->r[23]+c->r[0]; // 80257578
  c->r[0]=R32(c->r[3]+0x00001050u); // 8025757C
  c->r[4]=c->r[15]+c->r[31]; // 80257580
  c->r[3]=c->r[4]+0x00002A80u; // 80257584
  c->r[4]=c->r[4]+0x0000296Cu; // 80257588
  c->r[5]=rotl(c->r[0],24)&0x00FFFFFFu; // 8025758C
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 80257590
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257594
  c->lr=0x8025759Cu; f_80291CC4(c); // 80257598
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 8025759C
  c->r[4]=c->r[21]|c->r[21]; // 802575A0
  c->r[5]=c->r[20]|c->r[20]; // 802575A4
  c->r[6]=c->r[17]|c->r[17]; // 802575A8
  c->lr=0x802575B0u; f_801F8A40(c); // 802575AC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802575B0
  if (crb(c,2)) { goto L_802575D0; } // 802575B4
  c->r[0]=R8(c->r[15]+0x00000FFCu); // 802575B8
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802575BC
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802575C0
  c->r[0]=R32(c->r[26]+c->r[0]); // 802575C4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 802575C8
  if (!crb(c,2)) { goto L_80257628; } // 802575CC
L_802575D0:;
  c->r[3]=c->r[13]+0xFFFF97A8u; // 802575D0
  c->lr=0x802575D8u; f_80242AA8(c); // 802575D4
  cmps(c,0,(int32_t)c->r[3],0); // 802575D8
  if (!crb(c,2)) { goto L_802575F8; } // 802575DC
  c->r[3]=c->r[15]+c->r[31]; // 802575E0
  c->r[4]=c->r[27]+0x000000CEu; // 802575E4
  c->r[3]=c->r[3]+0x00002618u; // 802575E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802575EC
  c->lr=0x802575F4u; f_80291CC4(c); // 802575F0
  goto L_8025760C; // 802575F4
L_802575F8:;
  c->r[3]=c->r[15]+c->r[31]; // 802575F8
  c->r[4]=c->r[27]+0x000000DBu; // 802575FC
  c->r[3]=c->r[3]+0x00002618u; // 80257600
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257604
  c->lr=0x8025760Cu; f_80291CC4(c); // 80257608
L_8025760C:;
  c->r[3]=c->r[15]+c->r[31]; // 8025760C
  c->r[4]=c->r[27]+0x000000E4u; // 80257610
  c->r[3]=c->r[3]+0x0000284Cu; // 80257614
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257618
  c->lr=0x80257620u; f_80291CC4(c); // 8025761C
  c->r[19]=0u+0x00000000u; // 80257620
  goto L_802576F0; // 80257624
L_80257628:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80257628
  c->r[4]=c->r[21]|c->r[21]; // 8025762C
  c->r[5]=c->r[20]|c->r[20]; // 80257630
  c->r[6]=c->r[17]|c->r[17]; // 80257634
  c->lr=0x8025763Cu; f_801F88C0(c); // 80257638
  c->r[5]=divwu(c->r[3],c->r[28]); // 8025763C
  c->r[7]=c->r[3]|c->r[3]; // 80257640
  c->r[4]=c->r[15]+c->r[31]; // 80257644
  c->r[3]=c->r[4]+0x00002618u; // 80257648
  c->r[4]=c->r[4]+0x00002504u; // 8025764C
  c->r[0]=divwu(c->r[7],c->r[29]); // 80257650
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)3600); // 80257654
  c->r[6]=c->r[7]-c->r[6]; // 80257658
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 8025765C
  c->r[6]=divwu(c->r[6],c->r[29]); // 80257660
  c->r[7]=c->r[7]-c->r[0]; // 80257664
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257668
  c->lr=0x80257670u; f_80291CC4(c); // 8025766C
  c->r[3]=R32(c->r[25]+0x00000078u); // 80257670
  c->r[4]=c->r[21]|c->r[21]; // 80257674
  c->r[10]=R32(c->r[30]+0x00000004u); // 80257678
  c->r[5]=c->r[20]|c->r[20]; // 8025767C
  c->r[9]=R32(c->r[30]+0x00000008u); // 80257680
  c->r[6]=c->r[17]|c->r[17]; // 80257684
  c->r[8]=R32(c->r[30]+0x0000000Cu); // 80257688
  c->r[0]=R8(c->r[15]+0x00000FFCu); // 8025768C
  W32(c->r[1]+0x00000024u,c->r[3]); // 80257690
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80257694
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80257698
  W32(c->r[1]+0x00000028u,c->r[10]); // 8025769C
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 802576A0
  W32(c->r[1]+0x00000030u,c->r[8]); // 802576A4
  c->lr=0x802576ACu; f_801F89C0(c); // 802576A8
  c->r[16]=c->r[3]|c->r[3]; // 802576AC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 802576B0
  c->r[0]=rotl(c->r[16],2)&0xFFFFFFFCu; // 802576B4
  c->r[5]=c->r[1]+0x000000F0u; // 802576B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802576BC
  c->r[4]=R32(c->r[14]+c->r[0]); // 802576C0
  c->r[12]=R32(c->r[12]+0x000000A8u); // 802576C4
  c->ctr=c->r[12]; // 802576C8
  if (true) { c->lr=0x802576D0u; dispatch(c,c->ctr); } // 802576CC
  c->r[3]=c->r[15]+c->r[31]; // 802576D0
  c->r[4]=R32(c->r[1]+0x000000F8u); // 802576D4
  c->r[3]=c->r[3]+0x0000284Cu; // 802576D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802576DC
  c->lr=0x802576E4u; f_80291CC4(c); // 802576E0
  cmpu(c,0,c->r[16],c->r[18]); // 802576E4
  if (!crb(c,0)) { goto L_802576F0; } // 802576E8
  c->r[18]=c->r[16]|c->r[16]; // 802576EC
L_802576F0:;
  c->r[17]=c->r[17]+0x00000001u; // 802576F0
L_802576F4:;
  c->r[0]=R32(c->r[22]+0x00001010u); // 802576F4
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[0]); // 802576F8
  if (crb(c,0)) { IRQCHK(c); goto L_80257554; } // 802576FC
  cmps(c,0,(int32_t)c->r[19],0); // 80257700
  if (crb(c,2)) { goto L_80257760; } // 80257704
  c->r[14]=0u+0x803E0000u; // 80257708
  c->r[16]=0u+0x80460000u; // 8025770C
  c->r[14]=c->r[14]+0x00005830u; // 80257710
  c->r[5]=R32(c->r[15]+0x00000014u); // 80257714
  c->r[3]=c->r[16]+0xFFFFD468u; // 80257718
  c->r[4]=0u+0x00000001u; // 8025771C
  c->r[6]=c->r[14]+0x000000E7u; // 80257720
  c->lr=0x80257728u; f_8014A80C(c); // 80257724
  c->r[0]=rotl(c->r[18],4)&0xFFFFFFF0u; // 80257728
  c->r[6]=c->r[1]+0x00000064u; // 8025772C
  c->r[4]=R32(c->r[15]+0x00000014u); // 80257730
  c->r[3]=c->r[16]+0xFFFFD468u; // 80257734
  c->r[5]=c->r[14]+0x000000F5u; // 80257738
  c->r[6]=c->r[6]+c->r[0]; // 8025773C
  c->r[7]=0u+0x00000000u; // 80257740
  c->lr=0x80257748u; f_80155F70(c); // 80257744
  c->r[5]=R32(c->r[15]+0x00000014u); // 80257748
  c->r[3]=c->r[16]+0xFFFFD468u; // 8025774C
  c->r[6]=c->r[14]+0x000000E7u; // 80257750
  c->r[4]=0u+0x00000001u; // 80257754
  c->lr=0x8025775Cu; f_8014A80C(c); // 80257758
  goto L_80257780; // 8025775C
L_80257760:;
  c->r[6]=0u+0x803E0000u; // 80257760
  c->r[3]=0u+0x80460000u; // 80257764
  c->r[6]=c->r[6]+0x00005830u; // 80257768
  c->r[5]=R32(c->r[15]+0x00000014u); // 8025776C
  c->r[3]=c->r[3]+0xFFFFD468u; // 80257770
  c->r[4]=0u+0x00000000u; // 80257774
  c->r[6]=c->r[6]+0x000000E7u; // 80257778
  c->lr=0x80257780u; f_8014A80C(c); // 8025777C
L_80257780:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80257780
  c->r[4]=c->r[24]+0x00000028u; // 80257784
  c->r[0]=R32(c->r[15]+0x00000FF4u); // 80257788
  c->r[5]=c->r[1]+0x000000A4u; // 8025778C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80257790
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80257794
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80257798
  c->r[4]=R32(c->r[4]+c->r[0]); // 8025779C
  c->ctr=c->r[12]; // 802577A0
  if (true) { c->lr=0x802577A8u; dispatch(c,c->ctr); } // 802577A4
  c->r[4]=R32(c->r[1]+0x000000ACu); // 802577A8
  c->r[3]=c->r[15]+0x000039ECu; // 802577AC
  c->lr=0x802577B4u; f_802933D8(c); // 802577B0
  c->r[3]=c->r[15]|c->r[15]; // 802577B4
  c->r[4]=c->r[15]+0x000038B8u; // 802577B8
  c->r[5]=0u+0x00000001u; // 802577BC
  c->lr=0x802577C4u; f_80257BB8(c); // 802577C0
  c->r[0]=R8(c->r[15]+0x00000FFCu); // 802577C4
  c->r[14]=0u+0x803E0000u; // 802577C8
  c->r[14]=c->r[14]+0x00005830u; // 802577CC
  c->r[16]=0u+0x80460000u; // 802577D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802577D4
  c->r[4]=c->r[1]+0x00000044u; // 802577D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802577DC
  c->r[3]=c->r[16]+0xFFFFD468u; // 802577E0
  c->r[0]=R32(c->r[4]+c->r[0]); // 802577E4
  c->r[5]=c->r[14]+0x00000100u; // 802577E8
  c->r[6]=c->r[1]+0x00000010u; // 802577EC
  W32(c->r[1]+0x00000010u,c->r[0]); // 802577F0
  c->r[4]=R32(c->r[15]+0x00000014u); // 802577F4
  c->lr=0x802577FCu; f_8014CE14(c); // 802577F8
  c->r[5]=R32(c->r[15]+0x00000FF4u); // 802577FC
  c->r[0]=c->r[24]+0x00000050u; // 80257800
  c->r[4]=R32(c->r[15]+0x00000014u); // 80257804
  c->r[3]=c->r[16]+0xFFFFD468u; // 80257808
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 8025780C
  c->r[5]=c->r[14]+0x0000010Au; // 80257810
  c->r[6]=c->r[0]+c->r[6]; // 80257814
  c->r[7]=0u+0x00000000u; // 80257818
  c->lr=0x80257820u; f_80155F70(c); // 8025781C
  c->r[5]=R32(c->r[15]+0x00000FF4u); // 80257820
  c->r[0]=c->r[24]+0x000000F0u; // 80257824
  c->r[4]=R32(c->r[15]+0x00000014u); // 80257828
  c->r[3]=c->r[16]+0xFFFFD468u; // 8025782C
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 80257830
  c->r[5]=c->r[14]+0x0000011Au; // 80257834
  c->r[7]=0u+0x00000000u; // 80257838
  c->r[6]=c->r[0]+c->r[6]; // 8025783C
  c->lr=0x80257844u; f_80155F70(c); // 80257840
  c->r[3]=R32(c->r[15]+0x00000FF4u); // 80257844
  c->r[0]=c->r[24]+0x000001E0u; // 80257848
  c->r[4]=c->r[14]+0x0000012Au; // 8025784C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 80257850
  c->r[17]=c->r[0]+c->r[3]; // 80257854
  c->r[3]=c->r[17]|c->r[17]; // 80257858
  c->lr=0x80257860u; f_80293554(c); // 8025785C
  cmps(c,0,(int32_t)c->r[3],0); // 80257860
  if (crb(c,2)) { goto L_80257898; } // 80257864
  c->r[4]=R32(c->r[15]+0x00000014u); // 80257868
  c->r[6]=c->r[17]|c->r[17]; // 8025786C
  c->r[3]=c->r[16]+0xFFFFD468u; // 80257870
  c->r[5]=c->r[14]+0x0000012Bu; // 80257874
  c->r[7]=0u+0x00000000u; // 80257878
  c->lr=0x80257880u; f_80155F70(c); // 8025787C
  c->r[5]=R32(c->r[15]+0x00000014u); // 80257880
  c->r[3]=c->r[16]+0xFFFFD468u; // 80257884
  c->r[6]=c->r[14]+0x0000012Bu; // 80257888
  c->r[4]=0u+0x00000001u; // 8025788C
  c->lr=0x80257894u; f_8014A80C(c); // 80257890
  goto L_802578AC; // 80257894
L_80257898:;
  c->r[5]=R32(c->r[15]+0x00000014u); // 80257898
  c->r[3]=c->r[16]+0xFFFFD468u; // 8025789C
  c->r[6]=c->r[14]+0x0000012Bu; // 802578A0
  c->r[4]=0u+0x00000000u; // 802578A4
  c->lr=0x802578ACu; f_8014A80C(c); // 802578A8
L_802578AC:;
  c->r[18]=0u+0x803E0000u; // 802578AC
  c->r[19]=0u+0x00000001u; // 802578B0
  c->r[18]=c->r[18]+0x00005830u; // 802578B4
  c->r[17]=0u+0xFFAA0000u; // 802578B8
  c->r[16]=0u+0x80460000u; // 802578BC
  c->r[14]=0u+0xFFFFFFFFu; // 802578C0
L_802578C4:;
  c->r[5]=c->r[19]|c->r[19]; // 802578C4
  c->r[3]=c->r[1]+0x00000014u; // 802578C8
  c->r[4]=c->r[18]+0x0000013Bu; // 802578CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802578D0
  c->lr=0x802578D8u; f_80291CC4(c); // 802578D4
  c->r[0]=R8(c->r[15]+0x00000FFCu); // 802578D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802578DC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[19]); // 802578E0
  if (!crb(c,2)) { goto L_80257908; } // 802578E4
  c->r[0]=c->r[17]+0x000000FFu; // 802578E8
  c->r[3]=c->r[16]+0xFFFFD468u; // 802578EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802578F0
  c->r[5]=c->r[1]+0x00000014u; // 802578F4
  c->r[6]=c->r[1]+0x0000000Cu; // 802578F8
  c->r[4]=R32(c->r[15]+0x00000014u); // 802578FC
  c->lr=0x80257904u; f_8014CE14(c); // 80257900
  goto L_80257920; // 80257904
L_80257908:;
  W32(c->r[1]+0x00000008u,c->r[14]); // 80257908
  c->r[3]=c->r[16]+0xFFFFD468u; // 8025790C
  c->r[5]=c->r[1]+0x00000014u; // 80257910
  c->r[6]=c->r[1]+0x00000008u; // 80257914
  c->r[4]=R32(c->r[15]+0x00000014u); // 80257918
  c->lr=0x80257920u; f_8014CE14(c); // 8025791C
L_80257920:;
  c->r[19]=c->r[19]+0x00000001u; // 80257920
  cmps(c,0,(int32_t)c->r[19],4); // 80257924
  if (crb(c,0)) { IRQCHK(c); goto L_802578C4; } // 80257928
  c->r[11]=c->r[1]+0x00000190u; // 8025792C
  c->lr=0x80257934u; f_80289E0C(c); // 80257930
  c->r[0]=R32(c->r[1]+0x00000194u); // 80257934
  c->lr=c->r[0]; // 80257938
  c->r[1]=c->r[1]+0x00000190u; // 8025793C
  return; // 80257940
}

// fn_80257944
void f_80257944(Ctx* __restrict c) {
  trace_call(0x80257944u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80257944
  c->r[0]=c->lr; // 80257948
  W32(c->r[1]+0x00000094u,c->r[0]); // 8025794C
  c->r[11]=c->r[1]+0x00000090u; // 80257950
  c->lr=0x80257958u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80257954
  c->r[0]=R32(c->r[3]+0x00000014u); // 80257958
  c->r[31]=c->r[4]|c->r[4]; // 8025795C
  c->r[29]=c->r[5]|c->r[5]; // 80257960
  cmps(c,0,(int32_t)c->r[0],0); // 80257964
  if (!crb(c,0)) { goto L_80257974; } // 80257968
  c->r[3]=0u+0x00000000u; // 8025796C
  goto L_8025799C; // 80257970
L_80257974:;
  c->r[3]=0u+0x80460000u; // 80257974
  c->r[4]=c->r[0]|c->r[0]; // 80257978
  c->r[3]=c->r[3]+0xFFFFD468u; // 8025797C
  c->r[5]=c->r[31]+0x00000124u; // 80257980
  c->lr=0x80257988u; f_800482D4(c); // 80257984
  cmps(c,0,(int32_t)c->r[3],0); // 80257988
  if (!crb(c,2)) { goto L_80257998; } // 8025798C
  c->r[3]=0u+0x00000000u; // 80257990
  goto L_8025799C; // 80257994
L_80257998:;
  c->r[3]=c->r[3]+0x000000C9u; // 80257998
L_8025799C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025799C
  if (!crb(c,2)) { goto L_802579BC; } // 802579A0
  c->r[4]=0u+0x00000000u; // 802579A4
  goto L_802579E8; // 802579A8
  goto L_802579BC; // 802579AC
L_802579B0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 802579B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802579B4
  if (crb(c,2)) { goto L_802579CC; } // 802579B8
L_802579BC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 802579BC
  c->r[3]=c->r[3]+0x00000001u; // 802579C0
  cmps(c,0,(int32_t)c->r[0],95); // 802579C4
  if (!crb(c,2)) { IRQCHK(c); goto L_802579B0; } // 802579C8
L_802579CC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 802579CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802579D0
  if (!crb(c,2)) { goto L_802579E0; } // 802579D4
  c->r[3]=0u+0x00000000u; // 802579D8
  goto L_802579E4; // 802579DC
L_802579E0:;
  c->lr=0x802579E4u; f_80295EAC(c); // 802579E0
L_802579E4:;
  c->r[4]=c->r[3]|c->r[3]; // 802579E4
L_802579E8:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 802579E8
  c->r[5]=c->r[1]+0x00000010u; // 802579EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802579F0
  c->r[12]=R32(c->r[12]+0x000000A8u); // 802579F4
  c->ctr=c->r[12]; // 802579F8
  if (true) { c->lr=0x80257A00u; dispatch(c,c->ctr); } // 802579FC
  c->r[30]=0u+0x803E0000u; // 80257A00
  c->r[5]=R32(c->r[1]+0x00000018u); // 80257A04
  c->r[30]=c->r[30]+0x00005830u; // 80257A08
  c->r[3]=c->r[31]+0x00000134u; // 80257A0C
  c->r[4]=c->r[30]+0x00000143u; // 80257A10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257A14
  c->lr=0x80257A1Cu; f_80291CC4(c); // 80257A18
  c->r[4]=c->r[30]+0x00000094u; // 80257A1C
  c->r[3]=c->r[1]+0x00000008u; // 80257A20
  c->lr=0x80257A28u; f_80242B30(c); // 80257A24
  c->r[3]=c->r[1]+0x00000008u; // 80257A28
  c->r[4]=c->r[30]+0x00000146u; // 80257A2C
  c->lr=0x80257A34u; f_80242B8C(c); // 80257A30
  c->r[4]=c->r[29]|c->r[29]; // 80257A34
  c->r[3]=c->r[1]+0x00000008u; // 80257A38
  c->lr=0x80257A40u; f_80242BE0(c); // 80257A3C
  c->r[3]=c->r[1]+0x00000008u; // 80257A40
  c->r[4]=0u+0x00000002u; // 80257A44
  c->r[5]=0u+0x00000000u; // 80257A48
  c->lr=0x80257A50u; f_80242CA8(c); // 80257A4C
  c->lr=0x80257A54u; f_80295EAC(c); // 80257A50
  c->r[0]=0u+0xFFFFFF00u; // 80257A54
  W32(c->r[31]+0x00000120u,c->r[3]); // 80257A58
  c->r[3]=c->r[13]+0xFFFF97A8u; // 80257A5C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80257A60
  c->lr=0x80257A68u; f_80242AA8(c); // 80257A64
  cmps(c,0,(int32_t)c->r[3],0); // 80257A68
  if (crb(c,2)) { goto L_80257A8C; } // 80257A6C
  c->r[3]=c->r[1]+0x00000008u; // 80257A70
  c->r[4]=0u+0x00000003u; // 80257A74
  c->r[5]=0u+0x00000000u; // 80257A78
  c->lr=0x80257A80u; f_80242CA8(c); // 80257A7C
  c->lr=0x80257A84u; f_80295EAC(c); // 80257A80
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80257A84
  goto L_80257AFC; // 80257A88
L_80257A8C:;
  c->r[3]=c->r[1]+0x00000008u; // 80257A8C
  c->r[4]=0u+0x00000003u; // 80257A90
  c->r[5]=0u+0x00000000u; // 80257A94
  c->lr=0x80257A9Cu; f_80242CA8(c); // 80257A98
  c->lr=0x80257AA0u; f_802953A0(c); // 80257A9C
  c->f[4]=c->ps1[4]=S(c->f[1]); // 80257AA0
  c->r[0]=0u+0x43300000u; // 80257AA4
  W32(c->r[1]+0x00000068u,c->r[0]); // 80257AA8
  {uint32_t ea=c->r[2]+0xFFFFDA58u; c->f[2]=RF64(ea);} // 80257AAC
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 80257AB0
  {uint32_t ea=c->r[2]+0xFFFFDA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80257AB4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[3]);} // 80257AB8
  c->r[0]=R32(c->r[1]+0x00000064u); // 80257ABC
  c->r[0]=c->r[0]^0x80000000u; // 80257AC0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80257AC4
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=RF64(ea);} // 80257AC8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80257ACC
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[1]); // 80257AD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80257AD4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80257AD8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[0]);} // 80257ADC
  c->r[0]=R32(c->r[1]+0x00000074u); // 80257AE0
  cmps(c,0,(int32_t)c->r[0],0); // 80257AE4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80257AE8
  if (crb(c,1)) { goto L_80257AFC; } // 80257AEC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[3]);} // 80257AF0
  c->r[0]=R32(c->r[1]+0x00000074u); // 80257AF4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80257AF8
L_80257AFC:;
  c->r[3]=c->r[13]+0xFFFF97A8u; // 80257AFC
  c->lr=0x80257B04u; f_80242AA8(c); // 80257B00
  cmps(c,0,(int32_t)c->r[3],0); // 80257B04
  if (crb(c,2)) { goto L_80257B28; } // 80257B08
  c->r[3]=c->r[1]+0x00000008u; // 80257B0C
  c->r[4]=0u+0x00000007u; // 80257B10
  c->r[5]=0u+0x00000000u; // 80257B14
  c->lr=0x80257B1Cu; f_80242CA8(c); // 80257B18
  c->lr=0x80257B20u; f_80295EAC(c); // 80257B1C
  W32(c->r[31]+0x00000010u,c->r[3]); // 80257B20
  goto L_80257B94; // 80257B24
L_80257B28:;
  c->r[3]=c->r[1]+0x00000008u; // 80257B28
  c->r[4]=0u+0x00000007u; // 80257B2C
  c->r[5]=0u+0x00000000u; // 80257B30
  c->lr=0x80257B38u; f_80242CA8(c); // 80257B34
  c->lr=0x80257B3Cu; f_802953A0(c); // 80257B38
  c->f[3]=c->ps1[3]=S(c->f[1]); // 80257B3C
  c->r[0]=0u+0x43300000u; // 80257B40
  W32(c->r[1]+0x00000068u,c->r[0]); // 80257B44
  {uint32_t ea=c->r[2]+0xFFFFDA58u; c->f[2]=RF64(ea);} // 80257B48
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 80257B4C
  {uint32_t ea=c->r[2]+0xFFFFDA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80257B50
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[1]);} // 80257B54
  c->r[0]=R32(c->r[1]+0x00000074u); // 80257B58
  c->r[0]=c->r[0]^0x80000000u; // 80257B5C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 80257B60
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=RF64(ea);} // 80257B64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80257B68
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 80257B6C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80257B70
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80257B74
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[0]);} // 80257B78
  c->r[0]=R32(c->r[1]+0x00000064u); // 80257B7C
  cmps(c,0,(int32_t)c->r[0],0); // 80257B80
  W32(c->r[31]+0x00000010u,c->r[0]); // 80257B84
  if (crb(c,1)) { goto L_80257B94; } // 80257B88
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80257B8C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80257B90
L_80257B94:;
  c->r[3]=c->r[1]+0x00000008u; // 80257B94
  c->r[4]=0u+0xFFFFFFFFu; // 80257B98
  c->lr=0x80257BA0u; f_80242AF0(c); // 80257B9C
  c->r[11]=c->r[1]+0x00000090u; // 80257BA0
  c->lr=0x80257BA8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80257BA4
  c->r[0]=R32(c->r[1]+0x00000094u); // 80257BA8
  c->lr=c->r[0]; // 80257BAC
  c->r[1]=c->r[1]+0x00000090u; // 80257BB0
  return; // 80257BB4
}

// fn_80257BB8
void f_80257BB8(Ctx* __restrict c) {
  trace_call(0x80257BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80257BB8
  c->r[0]=c->lr; // 80257BBC
  W32(c->r[1]+0x00000054u,c->r[0]); // 80257BC0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80257BC4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80257BC8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80257BCC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80257BD0
  c->r[11]=c->r[1]+0x00000030u; // 80257BD4
  c->lr=0x80257BDCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80257BD8
  c->r[0]=R32(c->r[4]+0x00000120u); // 80257BDC
  c->r[31]=0u+0x80540000u; // 80257BE0
  c->r[31]=c->r[31]+0xFFFFC2B0u; // 80257BE4
  c->r[27]=c->r[3]|c->r[3]; // 80257BE8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)144); // 80257BEC
  c->r[28]=c->r[4]|c->r[4]; // 80257BF0
  c->r[29]=c->r[5]|c->r[5]; // 80257BF4
  c->r[3]=c->r[31]+c->r[0]; // 80257BF8
  c->lr=0x80257C00u; f_801B18A4(c); // 80257BFC
  c->r[5]=R32(c->r[28]+0x00000010u); // 80257C00
  c->r[4]=0u+0x43300000u; // 80257C04
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80257C08
  c->r[5]=c->r[5]^0x80000000u; // 80257C0C
  W32(c->r[1]+0x00000008u,c->r[4]); // 80257C10
  c->r[0]=c->r[0]^0x80000000u; // 80257C14
  {uint32_t ea=c->r[2]+0xFFFFDA58u; c->f[2]=RF64(ea);} // 80257C18
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80257C1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80257C20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80257C24
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80257C28
  W32(c->r[1]+0x00000010u,c->r[4]); // 80257C2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80257C30
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80257C34
  c->lr=0x80257C3Cu; f_803B7A70(c); // 80257C38
  c->r[0]=R32(c->r[28]+0x00000120u); // 80257C3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)144); // 80257C40
  c->r[3]=c->r[31]+c->r[0]; // 80257C44
  c->lr=0x80257C4Cu; f_801B18A4(c); // 80257C48
  c->r[30]=c->r[3]|c->r[3]; // 80257C4C
  c->r[3]=c->r[28]+0x00000134u; // 80257C50
  c->lr=0x80257C58u; f_802894C0(c); // 80257C54
  c->r[5]=c->r[3]|c->r[3]; // 80257C58
  c->r[3]=c->r[30]|c->r[30]; // 80257C5C
  c->r[4]=c->r[28]+0x00000134u; // 80257C60
  c->lr=0x80257C68u; f_803B89C8(c); // 80257C64
  c->r[0]=R32(c->r[28]+0x00000120u); // 80257C68
  c->f[30]=c->f[1]; // 80257C6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)144); // 80257C70
  c->r[3]=c->r[31]+c->r[0]; // 80257C74
  c->lr=0x80257C7Cu; f_801B18A4(c); // 80257C78
  c->r[30]=c->r[3]|c->r[3]; // 80257C7C
  c->r[3]=c->r[28]+0x00000134u; // 80257C80
  c->lr=0x80257C88u; f_802894C0(c); // 80257C84
  c->r[5]=c->r[3]|c->r[3]; // 80257C88
  c->r[3]=c->r[30]|c->r[30]; // 80257C8C
  c->r[4]=c->r[28]+0x00000134u; // 80257C90
  c->lr=0x80257C98u; f_803B8C6C(c); // 80257C94
  c->f[31]=c->f[1]; // 80257C98
  c->r[4]=R32(c->r[27]+0x00000014u); // 80257C9C
  c->r[3]=c->r[27]|c->r[27]; // 80257CA0
  c->r[6]=c->r[28]|c->r[28]; // 80257CA4
  c->r[5]=c->r[28]+0x00000124u; // 80257CA8
  c->r[7]=0u+0xFFFFFFFFu; // 80257CAC
  c->lr=0x80257CB4u; f_801DA300(c); // 80257CB0
  cmps(c,0,(int32_t)c->r[29],1); // 80257CB4
  if (!crb(c,2)) { goto L_80257CCC; } // 80257CB8
  {uint32_t ea=c->r[2]+0xFFFFDA6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80257CBC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80257CC0
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[30],c->f[1],-c->f[0])); // 80257CC4
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80257CC8
L_80257CCC:;
  cmps(c,0,(int32_t)c->r[29],2); // 80257CCC
  if (!crb(c,2)) { goto L_80257CE0; } // 80257CD0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80257CD4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80257CD8
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 80257CDC
L_80257CE0:;
  {uint32_t ea=c->r[2]+0xFFFFDA70u; c->f[1]=c->ps1[1]=RF32(ea);} // 80257CE0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80257CE4
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[1]); // 80257CE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80257CEC
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 80257CF0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80257CF4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80257CF8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80257CFC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80257D00
  c->r[11]=c->r[1]+0x00000030u; // 80257D04
  c->lr=0x80257D0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80257D08
  c->r[0]=R32(c->r[1]+0x00000054u); // 80257D0C
  c->lr=c->r[0]; // 80257D10
  c->r[1]=c->r[1]+0x00000050u; // 80257D14
  return; // 80257D18
}

// fn_80257D1C
void f_80257D1C(Ctx* __restrict c) {
  trace_call(0x80257D1Cu);
  c->r[0]=R32(c->r[3]+0x00000FF4u); // 80257D1C
  c->r[5]=0u+0x80410000u; // 80257D20
  c->r[5]=c->r[5]+0x00001E48u; // 80257D24
  c->r[12]=0u+0x0000000Au; // 80257D28
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80257D2C
  c->r[0]=0u+0x00000064u; // 80257D30
  c->r[8]=R32(c->r[5]+c->r[6]); // 80257D34
  c->r[7]=divw((int32_t)c->r[8],(int32_t)c->r[12]); // 80257D38
  c->r[6]=divw((int32_t)c->r[7],(int32_t)c->r[12]); // 80257D3C
  c->r[8]=divw((int32_t)c->r[8],(int32_t)c->r[0]); // 80257D40
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[12]); // 80257D44
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80257D48
  c->r[8]=c->r[3]+c->r[8]; // 80257D4C
  c->r[6]=c->r[7]-c->r[6]; // 80257D50
  c->r[6]=c->r[8]+c->r[6]; // 80257D54
  c->r[6]=R8(c->r[6]+0x00000FFDu); // 80257D58
  cmps(c,0,(int32_t)c->r[6],0); // 80257D5C
  if (!crb(c,2)) return; // 80257D60
  c->r[10]=0u+0x00000009u; // 80257D64
  c->r[11]=0u+0x00000000u; // 80257D68
L_80257D6C:;
  cmps(c,0,(int32_t)c->r[4],0); // 80257D6C
  if (crb(c,2)) { goto L_80257D90; } // 80257D70
  c->r[6]=R32(c->r[3]+0x00000FF4u); // 80257D74
  c->r[6]=c->r[6]+0x00000001u; // 80257D78
  cmps(c,0,(int32_t)c->r[6],9); // 80257D7C
  W32(c->r[3]+0x00000FF4u,c->r[6]); // 80257D80
  if (!crb(c,1)) { goto L_80257DA4; } // 80257D84
  W32(c->r[3]+0x00000FF4u,c->r[11]); // 80257D88
  goto L_80257DA4; // 80257D8C
L_80257D90:;
  c->r[6]=R32(c->r[3]+0x00000FF4u); // 80257D90
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 80257D94
  W32(c->r[3]+0x00000FF4u,c->r[6]); // 80257D98
  if (!crb(c,0)) { goto L_80257DA4; } // 80257D9C
  W32(c->r[3]+0x00000FF4u,c->r[10]); // 80257DA0
L_80257DA4:;
  c->r[6]=R32(c->r[3]+0x00000FF4u); // 80257DA4
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80257DA8
  c->r[7]=R32(c->r[5]+c->r[6]); // 80257DAC
  c->r[8]=divw((int32_t)c->r[7],(int32_t)c->r[12]); // 80257DB0
  c->r[6]=divw((int32_t)c->r[8],(int32_t)c->r[12]); // 80257DB4
  c->r[9]=divw((int32_t)c->r[7],(int32_t)c->r[0]); // 80257DB8
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[12]); // 80257DBC
  c->r[6]=rotl(c->r[9],2)&0xFFFFFFFCu; // 80257DC0
  c->r[6]=c->r[3]+c->r[6]; // 80257DC4
  c->r[7]=c->r[8]-c->r[7]; // 80257DC8
  c->r[6]=c->r[7]+c->r[6]; // 80257DCC
  c->r[6]=R8(c->r[6]+0x00000FFDu); // 80257DD0
  cmps(c,0,(int32_t)c->r[6],0); // 80257DD4
  if (crb(c,2)) { IRQCHK(c); goto L_80257D6C; } // 80257DD8
  return; // 80257DDC
}

// fn_80257DE0
void f_80257DE0(Ctx* __restrict c) {
  trace_call(0x80257DE0u);
  c->r[3]=0u+0x00000019u; // 80257DE0
  return; // 80257DE4
}

// fn_80257DE8
void f_80257DE8(Ctx* __restrict c) {
  trace_call(0x80257DE8u);
  {uint32_t ea=c->r[2]+0xFFFFDA50u; c->f[1]=c->ps1[1]=RF32(ea);} // 80257DE8
  c->r[3]=0u+0x805E0000u; // 80257DEC
  {uint32_t ea=c->r[2]+0xFFFFDA60u; c->f[2]=c->ps1[2]=RF32(ea);} // 80257DF0
  c->r[3]=c->r[3]+0x00007D70u; // 80257DF4
  c->f[3]=c->f[1]; // 80257DF8
  f_8003F588(c); return; // 80257DFC
}

// PPCMfmsr
void f_80257E00(Ctx* __restrict c) {
  trace_call(0x80257E00u);
  c->r[3]=c->msr; // 80257E00
  return; // 80257E04
}

// PPCMtmsr
void f_80257E08(Ctx* __restrict c) {
  trace_call(0x80257E08u);
  c->msr=c->r[3]; // 80257E08
  return; // 80257E0C
}

// PPCMfhid0
void f_80257E10(Ctx* __restrict c) {
  trace_call(0x80257E10u);
  c->r[3]=mfspr(c,1008); // 80257E10
  return; // 80257E14
}

// PPCMthid0
void f_80257E18(Ctx* __restrict c) {
  trace_call(0x80257E18u);
  mtspr(c,1008,c->r[3]); // 80257E18
  return; // 80257E1C
}

// PPCMfl2cr
void f_80257E20(Ctx* __restrict c) {
  trace_call(0x80257E20u);
  c->r[3]=mfspr(c,1017); // 80257E20
  return; // 80257E24
}

// PPCMtl2cr
void f_80257E28(Ctx* __restrict c) {
  trace_call(0x80257E28u);
  mtspr(c,1017,c->r[3]); // 80257E28
  return; // 80257E2C
}

// PPCMtdec
void f_80257E30(Ctx* __restrict c) {
  trace_call(0x80257E30u);
  mtspr(c,22,c->r[3]); // 80257E30
  return; // 80257E34
}

// PPCSync
void f_80257E38(Ctx* __restrict c) {
  trace_call(0x80257E38u);
  sc(c,0x80257E38u); // 80257E38
  return; // 80257E3C
}

// PPCHalt
void f_80257E40(Ctx* __restrict c) {
  trace_call(0x80257E40u);
  /* sync */ // 80257E40
L_80257E44:;
  c->r[0]=c->r[0]|0x00000000u; // 80257E44
  c->r[3]=0u+0x00000000u; // 80257E48
  c->r[0]=c->r[0]|0x00000000u; // 80257E4C
  IRQCHK(c); goto L_80257E44; // 80257E50
}

// PPCMtmmcr0
void f_80257E54(Ctx* __restrict c) {
  trace_call(0x80257E54u);
  mtspr(c,952,c->r[3]); // 80257E54
  return; // 80257E58
}

// PPCMtmmcr1
void f_80257E5C(Ctx* __restrict c) {
  trace_call(0x80257E5Cu);
  mtspr(c,956,c->r[3]); // 80257E5C
  return; // 80257E60
}

// PPCMtpmc1
void f_80257E64(Ctx* __restrict c) {
  trace_call(0x80257E64u);
  mtspr(c,953,c->r[3]); // 80257E64
  return; // 80257E68
}

// PPCMtpmc2
void f_80257E6C(Ctx* __restrict c) {
  trace_call(0x80257E6Cu);
  mtspr(c,954,c->r[3]); // 80257E6C
  return; // 80257E70
}

// PPCMtpmc3
void f_80257E74(Ctx* __restrict c) {
  trace_call(0x80257E74u);
  mtspr(c,957,c->r[3]); // 80257E74
  return; // 80257E78
}

// PPCMtpmc4
void f_80257E7C(Ctx* __restrict c) {
  trace_call(0x80257E7Cu);
  mtspr(c,958,c->r[3]); // 80257E7C
  return; // 80257E80
}

// PPCMffpscr
void f_80257E84(Ctx* __restrict c) {
  trace_call(0x80257E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80257E84
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 80257E88
  c->f[31]=u2d((uint64_t)c->fpscr); // 80257E8C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 80257E90
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80257E94
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80257E98
  c->r[1]=c->r[1]+0x00000020u; // 80257E9C
  return; // 80257EA0
}

// PPCMtfpscr
void f_80257EA4(Ctx* __restrict c) {
  trace_call(0x80257EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80257EA4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 80257EA8
  c->r[4]=0u+0x00000000u; // 80257EAC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80257EB0
  W32(c->r[1]+0x00000008u,c->r[4]); // 80257EB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 80257EB8
  c->fpscr=(uint32_t)d2u(c->f[31]); // 80257EBC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80257EC0
  c->r[1]=c->r[1]+0x00000020u; // 80257EC4
  return; // 80257EC8
}

// PPCMfhid2
void f_80257ECC(Ctx* __restrict c) {
  trace_call(0x80257ECCu);
  c->r[3]=mfspr(c,920); // 80257ECC
  return; // 80257ED0
}

// PPCMthid2
void f_80257ED4(Ctx* __restrict c) {
  trace_call(0x80257ED4u);
  mtspr(c,920,c->r[3]); // 80257ED4
  return; // 80257ED8
}

// fn_80257EDC
void f_80257EDC(Ctx* __restrict c) {
  trace_call(0x80257EDCu);
  /* sync */ // 80257EDC
  c->r[3]=mfspr(c,921); // 80257EE0
  return; // 80257EE4
}

// PPCMtwpar
void f_80257EE8(Ctx* __restrict c) {
  trace_call(0x80257EE8u);
  mtspr(c,921,c->r[3]); // 80257EE8
  return; // 80257EEC
}

// PPCDisableSpeculation
void f_80257EF0(Ctx* __restrict c) {
  trace_call(0x80257EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80257EF0
  c->r[0]=c->lr; // 80257EF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80257EF8
  c->lr=0x80257F00u; f_80257E10(c); // 80257EFC
  c->r[3]=c->r[3]|0x00000200u; // 80257F00
  c->lr=0x80257F08u; f_80257E18(c); // 80257F04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80257F08
  c->lr=c->r[0]; // 80257F0C
  c->r[1]=c->r[1]+0x00000010u; // 80257F10
  return; // 80257F14
}

// PPCSetFpNonIEEEMode
void f_80257F18(Ctx* __restrict c) {
  trace_call(0x80257F18u);
  c->fpscr|=0x00000004u; // 80257F18
  return; // 80257F1C
}

// PPCMthid4
void f_80257F20(Ctx* __restrict c) {
  trace_call(0x80257F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80257F20
  c->r[0]=c->lr; // 80257F24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80257F28
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 80257F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80257F30
  c->r[31]=c->r[3]|c->r[3]; // 80257F34
  if (crb(c,2)) { goto L_80257F44; } // 80257F38
  mtspr(c,1011,c->r[3]); // 80257F3C
  goto L_80257F5C; // 80257F40
L_80257F44:;
  c->r[3]=0u+0x80410000u; // 80257F44
  c->r[3]=c->r[3]+0x00002198u; // 80257F48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257F4C
  c->lr=0x80257F54u; f_801CCA38(c); // 80257F50
  c->r[31]=c->r[31]|0x80000000u; // 80257F54
  mtspr(c,1011,c->r[31]); // 80257F58
L_80257F5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80257F5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80257F60
  c->lr=c->r[0]; // 80257F64
  c->r[1]=c->r[1]+0x00000010u; // 80257F68
  return; // 80257F6C
}

// DBInit
void f_80257F70(Ctx* __restrict c) {
  trace_call(0x80257F70u);
  c->r[4]=0u+0x80000000u; // 80257F70
  c->r[3]=0u+0x80250000u; // 80257F74
  c->r[5]=c->r[4]+0x00000040u; // 80257F78
  c->r[0]=0u+0x00000001u; // 80257F7C
  c->r[3]=c->r[3]+0x00007FE0u; // 80257F80
  W32(c->r[13]+0xFFFF97D0u,c->r[5]); // 80257F84
  c->r[3]=c->r[3]+0x80000000u; // 80257F88
  W32(c->r[4]+0x00000048u,c->r[3]); // 80257F8C
  W32(c->r[13]+0xFFFF97D4u,c->r[0]); // 80257F90
  return; // 80257F94
}

// __DBExceptionDestinationAux
void f_80257F98(Ctx* __restrict c) {
  trace_call(0x80257F98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80257F98
  c->r[0]=c->lr; // 80257F9C
  c->r[3]=0u+0x80410000u; // 80257FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80257FA4
  c->r[3]=c->r[3]+0x000021D0u; // 80257FA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80257FAC
  c->r[4]=R32(0u+0x000000C0u); // 80257FB0
  c->r[31]=c->r[4]+0x80000000u; // 80257FB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80257FB8
  c->lr=0x80257FC0u; f_801CCA38(c); // 80257FBC
  c->r[3]=c->r[31]|c->r[31]; // 80257FC0
  c->lr=0x80257FC8u; f_8025AF4C(c); // 80257FC4
  c->lr=0x80257FCCu; f_80257E40(c); // 80257FC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80257FCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80257FD0
  c->lr=c->r[0]; // 80257FD4
  c->r[1]=c->r[1]+0x00000010u; // 80257FD8
  return; // 80257FDC
}

// __DBExceptionDestination
void f_80257FE0(Ctx* __restrict c) {
  trace_call(0x80257FE0u);
  c->r[3]=c->msr; // 80257FE0
  c->r[3]=c->r[3]|0x00000030u; // 80257FE4
  c->msr=c->r[3]; // 80257FE8
  f_80257F98(c); return; // 80257FEC
}

// __DBIsExceptionMarked
void f_80257FF0(Ctx* __restrict c) {
  trace_call(0x80257FF0u);
  c->r[4]=R32(c->r[13]+0xFFFF97D0u); // 80257FF0
  c->r[0]=0u+0x00000001u; // 80257FF4
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80257FF8
  c->r[3]=R32(c->r[4]+0x00000004u); // 80257FFC
  c->r[3]=c->r[3]&c->r[0]; // 80258000
  return; // 80258004
}

// DBPrintf
void f_80258008(Ctx* __restrict c) {
  trace_call(0x80258008u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80258008
  if (!crb(c,6)) { goto L_80258030; } // 8025800C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 80258010
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 80258014
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 80258018
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8025801C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 80258020
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 80258024
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 80258028
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8025802C
L_80258030:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 80258030
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80258034
  W32(c->r[1]+0x00000010u,c->r[5]); // 80258038
  W32(c->r[1]+0x00000014u,c->r[6]); // 8025803C
  W32(c->r[1]+0x00000018u,c->r[7]); // 80258040
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 80258044
  W32(c->r[1]+0x00000020u,c->r[9]); // 80258048
  W32(c->r[1]+0x00000024u,c->r[10]); // 8025804C
  c->r[1]=c->r[1]+0x00000070u; // 80258050
  return; // 80258054
}

// __OSFPRInit
void f_80258058(Ctx* __restrict c) {
  trace_call(0x80258058u);
  c->r[3]=c->msr; // 80258058
  c->r[3]=c->r[3]|0x00002000u; // 8025805C
  c->msr=c->r[3]; // 80258060
  c->r[3]=mfspr(c,920); // 80258064
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 80258068
  if (crb(c,2)) { goto L_802580F8; } // 8025806C
  c->r[3]=0u+0x806C0000u; // 80258070
  c->r[3]=c->r[3]+0x00003E10u; // 80258074
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80258078
  {double t0=c->f[0], t1=c->ps1[0]; c->f[1]=t0; c->ps1[1]=t1;} // 8025807C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[2]=t0; c->ps1[2]=t1;} // 80258080
  {double t0=c->f[0], t1=c->ps1[0]; c->f[3]=t0; c->ps1[3]=t1;} // 80258084
  {double t0=c->f[0], t1=c->ps1[0]; c->f[4]=t0; c->ps1[4]=t1;} // 80258088
  {double t0=c->f[0], t1=c->ps1[0]; c->f[5]=t0; c->ps1[5]=t1;} // 8025808C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[6]=t0; c->ps1[6]=t1;} // 80258090
  {double t0=c->f[0], t1=c->ps1[0]; c->f[7]=t0; c->ps1[7]=t1;} // 80258094
  {double t0=c->f[0], t1=c->ps1[0]; c->f[8]=t0; c->ps1[8]=t1;} // 80258098
  {double t0=c->f[0], t1=c->ps1[0]; c->f[9]=t0; c->ps1[9]=t1;} // 8025809C
  {double t0=c->f[0], t1=c->ps1[0]; c->f[10]=t0; c->ps1[10]=t1;} // 802580A0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[11]=t0; c->ps1[11]=t1;} // 802580A4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[12]=t0; c->ps1[12]=t1;} // 802580A8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[13]=t0; c->ps1[13]=t1;} // 802580AC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[14]=t0; c->ps1[14]=t1;} // 802580B0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[15]=t0; c->ps1[15]=t1;} // 802580B4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[16]=t0; c->ps1[16]=t1;} // 802580B8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[17]=t0; c->ps1[17]=t1;} // 802580BC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[18]=t0; c->ps1[18]=t1;} // 802580C0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[19]=t0; c->ps1[19]=t1;} // 802580C4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[20]=t0; c->ps1[20]=t1;} // 802580C8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[21]=t0; c->ps1[21]=t1;} // 802580CC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[22]=t0; c->ps1[22]=t1;} // 802580D0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[23]=t0; c->ps1[23]=t1;} // 802580D4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[24]=t0; c->ps1[24]=t1;} // 802580D8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[25]=t0; c->ps1[25]=t1;} // 802580DC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[26]=t0; c->ps1[26]=t1;} // 802580E0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[27]=t0; c->ps1[27]=t1;} // 802580E4
  {double t0=c->f[0], t1=c->ps1[0]; c->f[28]=t0; c->ps1[28]=t1;} // 802580E8
  {double t0=c->f[0], t1=c->ps1[0]; c->f[29]=t0; c->ps1[29]=t1;} // 802580EC
  {double t0=c->f[0], t1=c->ps1[0]; c->f[30]=t0; c->ps1[30]=t1;} // 802580F0
  {double t0=c->f[0], t1=c->ps1[0]; c->f[31]=t0; c->ps1[31]=t1;} // 802580F4
L_802580F8:;
  {uint32_t ea=c->r[13]+0xFFFF97F8u; c->f[0]=RF64(ea);} // 802580F8
  c->f[1]=c->f[0]; // 802580FC
  c->f[2]=c->f[0]; // 80258100
  c->f[3]=c->f[0]; // 80258104
  c->f[4]=c->f[0]; // 80258108
  c->f[5]=c->f[0]; // 8025810C
  c->f[6]=c->f[0]; // 80258110
  c->f[7]=c->f[0]; // 80258114
  c->f[8]=c->f[0]; // 80258118
  c->f[9]=c->f[0]; // 8025811C
  c->f[10]=c->f[0]; // 80258120
  c->f[11]=c->f[0]; // 80258124
  c->f[12]=c->f[0]; // 80258128
  c->f[13]=c->f[0]; // 8025812C
  c->f[14]=c->f[0]; // 80258130
  c->f[15]=c->f[0]; // 80258134
  c->f[16]=c->f[0]; // 80258138
  c->f[17]=c->f[0]; // 8025813C
  c->f[18]=c->f[0]; // 80258140
  c->f[19]=c->f[0]; // 80258144
  c->f[20]=c->f[0]; // 80258148
  c->f[21]=c->f[0]; // 8025814C
  c->f[22]=c->f[0]; // 80258150
  c->f[23]=c->f[0]; // 80258154
  c->f[24]=c->f[0]; // 80258158
  c->f[25]=c->f[0]; // 8025815C
  c->f[26]=c->f[0]; // 80258160
  c->f[27]=c->f[0]; // 80258164
  c->f[28]=c->f[0]; // 80258168
  c->f[29]=c->f[0]; // 8025816C
  c->f[30]=c->f[0]; // 80258170
  c->f[31]=c->f[0]; // 80258174
  c->fpscr=(uint32_t)d2u(c->f[0]); // 80258178
  return; // 8025817C
}

// __OSGetIOSRev
void f_80258180(Ctx* __restrict c) {
  trace_call(0x80258180u);
  c->r[4]=0u+0xC0000000u; // 80258180
  c->r[10]=R32(c->r[4]+0x00003144u); // 80258184
  c->r[9]=R32(c->r[4]+0x00003140u); // 80258188
  c->r[0]=rotl(c->r[10],28)&0x0000000Fu; // 8025818C
  c->r[6]=rotl(c->r[10],12)&0x0000000Fu; // 80258190
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 80258194
  c->r[7]=rotl(c->r[9],8)&0x000000FFu; // 80258198
  c->r[0]=rotl(c->r[10],0)&0x0000000Fu; // 8025819C
  W8(c->r[3]+0x00000000u,c->r[7]); // 802581A0
  c->r[8]=rotl(c->r[9],16)&0x000000FFu; // 802581A4
  c->r[4]=c->r[0]+c->r[4]; // 802581A8
  c->r[0]=c->r[4]+0x000007D0u; // 802581AC
  c->r[5]=rotl(c->r[10],20)&0x0000000Fu; // 802581B0
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 802581B4
  W8(c->r[3]+0x00000001u,c->r[8]); // 802581B8
  c->r[5]=rotl(c->r[10],24)&0x0000000Fu; // 802581BC
  c->r[8]=rotl(c->r[9],24)&0x000000FFu; // 802581C0
  W8(c->r[3]+0x00000003u,c->r[9]); // 802581C4
  c->r[4]=c->r[5]+c->r[4]; // 802581C8
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 802581CC
  c->r[7]=rotl(c->r[10],16)&0x0000000Fu; // 802581D0
  W8(c->r[3]+0x00000002u,c->r[8]); // 802581D4
  c->r[6]=c->r[7]+c->r[6]; // 802581D8
  W8(c->r[3]+0x00000005u,c->r[4]); // 802581DC
  W8(c->r[3]+0x00000004u,c->r[6]); // 802581E0
  W16(c->r[3]+0x00000006u,c->r[0]); // 802581E4
  return; // 802581E8
}

// OSGetConsoleType
void f_802581EC(Ctx* __restrict c) {
  trace_call(0x802581ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802581EC
  c->r[0]=c->lr; // 802581F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802581F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802581F8
  c->r[3]=R32(c->r[13]+0xFFFF9810u); // 802581FC
  cmps(c,0,(int32_t)c->r[3],0); // 80258200
  if (crb(c,2)) { goto L_80258214; } // 80258204
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80258208
  cmps(c,0,(int32_t)c->r[0],0); // 8025820C
  if (!crb(c,2)) { goto L_80258220; } // 80258210
L_80258214:;
  c->r[3]=0u+0x10000000u; // 80258214
  c->r[3]=c->r[3]+0x00000002u; // 80258218
  goto L_80258448; // 8025821C
L_80258220:;
  c->r[3]=0u+0x80000000u; // 80258220
  c->r[0]=R16(c->r[3]+0x000030E6u); // 80258224
  c->r[31]=R32(c->r[3]+0x00003138u); // 80258228
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 8025822C
  if (crb(c,2)) { goto L_80258358; } // 80258230
  c->r[0]=R16(c->r[3]+0x000030E6u); // 80258234
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 80258238
  cmps(c,0,(int32_t)c->r[0],513); // 8025823C
  if (!crb(c,0)) { goto L_80258258; } // 80258240
  cmps(c,0,(int32_t)c->r[0],4); // 80258244
  if (!crb(c,0)) { goto L_80258358; } // 80258248
  cmps(c,0,(int32_t)c->r[0],2); // 8025824C
  if (!crb(c,0)) { goto L_80258268; } // 80258250
  goto L_80258358; // 80258254
L_80258258:;
  cmps(c,0,(int32_t)c->r[0],515); // 80258258
  if (crb(c,2)) { goto L_80258268; } // 8025825C
  if (!crb(c,0)) { goto L_80258358; } // 80258260
  goto L_802582D4; // 80258264
L_80258268:;
  cmps(c,0,(int32_t)c->r[31],2); // 80258268
  if (crb(c,2)) { goto L_802582AC; } // 8025826C
  if (!crb(c,0)) { goto L_80258284; } // 80258270
  cmps(c,0,(int32_t)c->r[31],0); // 80258274
  if (crb(c,2)) { goto L_8025829C; } // 80258278
  if (!crb(c,0)) { goto L_802582A4; } // 8025827C
  goto L_802582C4; // 80258280
L_80258284:;
  cmps(c,0,(int32_t)c->r[31],17); // 80258284
  if (crb(c,2)) { goto L_802582BC; } // 80258288
  if (!crb(c,0)) { goto L_802582C4; } // 8025828C
  cmps(c,0,(int32_t)c->r[31],16); // 80258290
  if (!crb(c,0)) { goto L_802582B4; } // 80258294
  goto L_802582C4; // 80258298
L_8025829C:;
  c->r[3]=0u+0x00000010u; // 8025829C
  goto L_80258448; // 802582A0
L_802582A4:;
  c->r[3]=0u+0x00000011u; // 802582A4
  goto L_80258448; // 802582A8
L_802582AC:;
  c->r[3]=0u+0x00000012u; // 802582AC
  goto L_80258448; // 802582B0
L_802582B4:;
  c->r[3]=0u+0x00000020u; // 802582B4
  goto L_80258448; // 802582B8
L_802582BC:;
  c->r[3]=0u+0x00000021u; // 802582BC
  goto L_80258448; // 802582C0
L_802582C4:;
  cmpu(c,0,c->r[31],0x00000011u); // 802582C4
  if (!crb(c,1)) { goto L_802582D4; } // 802582C8
  c->r[3]=0u+0x00000021u; // 802582CC
  goto L_80258448; // 802582D0
L_802582D4:;
  cmps(c,0,(int32_t)c->r[31],2); // 802582D4
  if (crb(c,2)) { goto L_80258320; } // 802582D8
  if (!crb(c,0)) { goto L_802582F0; } // 802582DC
  cmps(c,0,(int32_t)c->r[31],0); // 802582E0
  if (crb(c,2)) { goto L_80258308; } // 802582E4
  if (!crb(c,0)) { goto L_80258314; } // 802582E8
  goto L_80258344; // 802582EC
L_802582F0:;
  cmps(c,0,(int32_t)c->r[31],17); // 802582F0
  if (crb(c,2)) { goto L_80258338; } // 802582F4
  if (!crb(c,0)) { goto L_80258344; } // 802582F8
  cmps(c,0,(int32_t)c->r[31],16); // 802582FC
  if (!crb(c,0)) { goto L_8025832C; } // 80258300
  goto L_80258344; // 80258304
L_80258308:;
  c->r[3]=0u+0x10000000u; // 80258308
  c->r[3]=c->r[3]+0x00000010u; // 8025830C
  goto L_80258448; // 80258310
L_80258314:;
  c->r[3]=0u+0x10000000u; // 80258314
  c->r[3]=c->r[3]+0x00000011u; // 80258318
  goto L_80258448; // 8025831C
L_80258320:;
  c->r[3]=0u+0x10000000u; // 80258320
  c->r[3]=c->r[3]+0x00000012u; // 80258324
  goto L_80258448; // 80258328
L_8025832C:;
  c->r[3]=0u+0x10000000u; // 8025832C
  c->r[3]=c->r[3]+0x00000020u; // 80258330
  goto L_80258448; // 80258334
L_80258338:;
  c->r[3]=0u+0x10000000u; // 80258338
  c->r[3]=c->r[3]+0x00000021u; // 8025833C
  goto L_80258448; // 80258340
L_80258344:;
  cmpu(c,0,c->r[31],0x00000011u); // 80258344
  if (!crb(c,1)) { goto L_80258358; } // 80258348
  c->r[3]=0u+0x10000000u; // 8025834C
  c->r[3]=c->r[3]+0x00000021u; // 80258350
  goto L_80258448; // 80258354
L_80258358:;
  c->lr=0x8025835Cu; f_8025F48C(c); // 80258358
  cmps(c,0,(int32_t)c->r[31],2); // 8025835C
  if (crb(c,2)) { goto L_802583C8; } // 80258360
  if (!crb(c,0)) { goto L_80258378; } // 80258364
  cmps(c,0,(int32_t)c->r[31],0); // 80258368
  if (crb(c,2)) { goto L_80258390; } // 8025836C
  if (!crb(c,0)) { goto L_802583AC; } // 80258370
  goto L_8025841C; // 80258374
L_80258378:;
  cmps(c,0,(int32_t)c->r[31],17); // 80258378
  if (crb(c,2)) { goto L_80258400; } // 8025837C
  if (!crb(c,0)) { goto L_8025841C; } // 80258380
  cmps(c,0,(int32_t)c->r[31],16); // 80258384
  if (!crb(c,0)) { goto L_802583E4; } // 80258388
  goto L_8025841C; // 8025838C
L_80258390:;
  c->r[0]=c->r[3]+0xFC000000u; // 80258390
  c->r[3]=0u+0x10000000u; // 80258394
  cmpu(c,0,c->r[0],0x00000000u); // 80258398
  c->r[3]=c->r[3]+0x00000010u; // 8025839C
  if (!crb(c,2)) { goto L_80258448; } // 802583A0
  c->r[3]=0u+0x00000010u; // 802583A4
  goto L_80258448; // 802583A8
L_802583AC:;
  c->r[0]=c->r[3]+0xFC000000u; // 802583AC
  c->r[3]=0u+0x10000000u; // 802583B0
  cmpu(c,0,c->r[0],0x00000000u); // 802583B4
  c->r[3]=c->r[3]+0x00000011u; // 802583B8
  if (!crb(c,2)) { goto L_80258448; } // 802583BC
  c->r[3]=0u+0x00000011u; // 802583C0
  goto L_80258448; // 802583C4
L_802583C8:;
  c->r[0]=c->r[3]+0xFC000000u; // 802583C8
  c->r[3]=0u+0x10000000u; // 802583CC
  cmpu(c,0,c->r[0],0x00000000u); // 802583D0
  c->r[3]=c->r[3]+0x00000012u; // 802583D4
  if (!crb(c,2)) { goto L_80258448; } // 802583D8
  c->r[3]=0u+0x00000012u; // 802583DC
  goto L_80258448; // 802583E0
L_802583E4:;
  c->r[0]=c->r[3]+0xFC000000u; // 802583E4
  c->r[3]=0u+0x10000000u; // 802583E8
  cmpu(c,0,c->r[0],0x00000000u); // 802583EC
  c->r[3]=c->r[3]+0x00000020u; // 802583F0
  if (!crb(c,2)) { goto L_80258448; } // 802583F4
  c->r[3]=0u+0x00000020u; // 802583F8
  goto L_80258448; // 802583FC
L_80258400:;
  c->r[0]=c->r[3]+0xFC000000u; // 80258400
  c->r[3]=0u+0x10000000u; // 80258404
  cmpu(c,0,c->r[0],0x00000000u); // 80258408
  c->r[3]=c->r[3]+0x00000021u; // 8025840C
  if (!crb(c,2)) { goto L_80258448; } // 80258410
  c->r[3]=0u+0x00000021u; // 80258414
  goto L_80258448; // 80258418
L_8025841C:;
  cmpu(c,0,c->r[31],0x00000011u); // 8025841C
  if (!crb(c,1)) { goto L_80258440; } // 80258420
  c->r[0]=c->r[3]+0xFC000000u; // 80258424
  c->r[3]=0u+0x10000000u; // 80258428
  cmpu(c,0,c->r[0],0x00000000u); // 8025842C
  c->r[3]=c->r[3]+0x00000021u; // 80258430
  if (!crb(c,2)) { goto L_80258448; } // 80258434
  c->r[3]=0u+0x00000021u; // 80258438
  goto L_80258448; // 8025843C
L_80258440:;
  c->r[3]=R32(c->r[13]+0xFFFF9810u); // 80258440
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80258444
L_80258448:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80258448
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025844C
  c->lr=c->r[0]; // 80258450
  c->r[1]=c->r[1]+0x00000010u; // 80258454
  return; // 80258458
}

// ClearArena
void f_8025845C(Ctx* __restrict c) {
  trace_call(0x8025845Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025845C
  c->r[0]=c->lr; // 80258460
  W32(c->r[1]+0x00000014u,c->r[0]); // 80258464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80258468
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025846C
  c->lr=0x80258474u; f_802605A8(c); // 80258470
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 80258474
  if (!crb(c,2)) { goto L_802584C4; } // 80258478
  c->lr=0x80258480u; f_80259E88(c); // 8025847C
  c->r[31]=c->r[3]|c->r[3]; // 80258480
  c->lr=0x80258488u; f_80259EA0(c); // 80258484
  c->r[31]=c->r[31]-c->r[3]; // 80258488
  c->lr=0x80258490u; f_80259EA0(c); // 8025848C
  c->r[0]=0u+0x00040000u; // 80258490
  cmpu(c,0,c->r[31],c->r[0]); // 80258494
  if (!crb(c,1)) { goto L_802584A8; } // 80258498
  c->r[30]=c->r[31]+0xFFFC0000u; // 8025849C
  c->r[30]=c->r[3]+c->r[30]; // 802584A0
  goto L_802584AC; // 802584A4
L_802584A8:;
  c->r[30]=c->r[3]|c->r[3]; // 802584A8
L_802584AC:;
  c->r[4]=c->r[31]|c->r[31]; // 802584AC
  c->lr=0x802584B4u; f_8025A4B8(c); // 802584B0
  c->r[3]=c->r[30]|c->r[30]; // 802584B4
  c->r[4]=0u+0x00040000u; // 802584B8
  c->lr=0x802584C0u; f_8025A400(c); // 802584BC
  goto L_80258620; // 802584C0
L_802584C4:;
  c->r[31]=0u+0x805E0000u; // 802584C4
  c->r[31]=c->r[31]+0x00007D80u; // 802584C8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802584CC
  cmps(c,0,(int32_t)c->r[0],0); // 802584D0
  if (crb(c,2)) { goto L_802584E0; } // 802584D4
  c->r[0]=rotl(c->r[0],0)&0x30000000u; cr0(c,c->r[0]); // 802584D8
  if (crb(c,2)) { goto L_80258528; } // 802584DC
L_802584E0:;
  c->lr=0x802584E4u; f_80259E88(c); // 802584E0
  c->r[31]=c->r[3]|c->r[3]; // 802584E4
  c->lr=0x802584ECu; f_80259EA0(c); // 802584E8
  c->r[31]=c->r[31]-c->r[3]; // 802584EC
  c->lr=0x802584F4u; f_80259EA0(c); // 802584F0
  c->r[0]=0u+0x00040000u; // 802584F4
  cmpu(c,0,c->r[31],c->r[0]); // 802584F8
  if (!crb(c,1)) { goto L_8025850C; } // 802584FC
  c->r[30]=c->r[31]+0xFFFC0000u; // 80258500
  c->r[30]=c->r[3]+c->r[30]; // 80258504
  goto L_80258510; // 80258508
L_8025850C:;
  c->r[30]=c->r[3]|c->r[3]; // 8025850C
L_80258510:;
  c->r[4]=c->r[31]|c->r[31]; // 80258510
  c->lr=0x80258518u; f_8025A4B8(c); // 80258514
  c->r[3]=c->r[30]|c->r[30]; // 80258518
  c->r[4]=0u+0x00040000u; // 8025851C
  c->lr=0x80258524u; f_8025A400(c); // 80258520
  goto L_80258620; // 80258524
L_80258528:;
  c->lr=0x8025852Cu; f_80259EA0(c); // 80258528
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8025852C
  cmpu(c,0,c->r[3],c->r[0]); // 80258530
  if (!crb(c,0)) { goto L_80258620; } // 80258534
  c->lr=0x8025853Cu; f_80259E88(c); // 80258538
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8025853C
  cmpu(c,0,c->r[3],c->r[0]); // 80258540
  if (crb(c,1)) { goto L_80258590; } // 80258544
  c->lr=0x8025854Cu; f_80259E88(c); // 80258548
  c->r[31]=c->r[3]|c->r[3]; // 8025854C
  c->lr=0x80258554u; f_80259EA0(c); // 80258550
  c->r[31]=c->r[31]-c->r[3]; // 80258554
  c->lr=0x8025855Cu; f_80259EA0(c); // 80258558
  c->r[0]=0u+0x00040000u; // 8025855C
  cmpu(c,0,c->r[31],c->r[0]); // 80258560
  if (!crb(c,1)) { goto L_80258574; } // 80258564
  c->r[30]=c->r[31]+0xFFFC0000u; // 80258568
  c->r[30]=c->r[3]+c->r[30]; // 8025856C
  goto L_80258578; // 80258570
L_80258574:;
  c->r[30]=c->r[3]|c->r[3]; // 80258574
L_80258578:;
  c->r[4]=c->r[31]|c->r[31]; // 80258578
  c->lr=0x80258580u; f_8025A4B8(c); // 8025857C
  c->r[3]=c->r[30]|c->r[30]; // 80258580
  c->r[4]=0u+0x00040000u; // 80258584
  c->lr=0x8025858Cu; f_8025A400(c); // 80258588
  goto L_80258620; // 8025858C
L_80258590:;
  c->lr=0x80258594u; f_80259EA0(c); // 80258590
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80258594
  c->r[31]=c->r[0]-c->r[3]; // 80258598
  c->lr=0x802585A0u; f_80259EA0(c); // 8025859C
  c->r[0]=0u+0x00040000u; // 802585A0
  cmpu(c,0,c->r[31],c->r[0]); // 802585A4
  if (!crb(c,1)) { goto L_802585B8; } // 802585A8
  c->r[30]=c->r[31]+0xFFFC0000u; // 802585AC
  c->r[30]=c->r[3]+c->r[30]; // 802585B0
  goto L_802585BC; // 802585B4
L_802585B8:;
  c->r[30]=c->r[3]|c->r[3]; // 802585B8
L_802585BC:;
  c->r[4]=c->r[31]|c->r[31]; // 802585BC
  c->lr=0x802585C4u; f_8025A4B8(c); // 802585C0
  c->r[3]=c->r[30]|c->r[30]; // 802585C4
  c->r[4]=0u+0x00040000u; // 802585C8
  c->lr=0x802585D0u; f_8025A400(c); // 802585CC
  c->r[3]=0u+0x805E0000u; // 802585D0
  c->r[3]=c->r[3]+0x00007D80u; // 802585D4
  c->r[31]=R32(c->r[3]+0x00000010u); // 802585D8
  c->lr=0x802585E0u; f_80259E88(c); // 802585DC
  cmpu(c,0,c->r[3],c->r[31]); // 802585E0
  if (!crb(c,1)) { goto L_80258620; } // 802585E4
  c->lr=0x802585ECu; f_80259E88(c); // 802585E8
  c->r[4]=c->r[3]-c->r[31]; // 802585EC
  c->r[0]=0u+0x00040000u; // 802585F0
  cmpu(c,0,c->r[4],c->r[0]); // 802585F4
  if (!crb(c,1)) { goto L_80258608; } // 802585F8
  c->r[30]=c->r[4]+0xFFFC0000u; // 802585FC
  c->r[30]=c->r[31]+c->r[30]; // 80258600
  goto L_8025860C; // 80258604
L_80258608:;
  c->r[30]=c->r[31]|c->r[31]; // 80258608
L_8025860C:;
  c->r[3]=c->r[31]|c->r[31]; // 8025860C
  c->lr=0x80258614u; f_8025A4B8(c); // 80258610
  c->r[3]=c->r[30]|c->r[30]; // 80258614
  c->r[4]=0u+0x00040000u; // 80258618
  c->lr=0x80258620u; f_8025A400(c); // 8025861C
L_80258620:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80258620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80258624
  c->r[30]=R32(c->r[1]+0x00000008u); // 80258628
  c->lr=c->r[0]; // 8025862C
  c->r[1]=c->r[1]+0x00000010u; // 80258630
  return; // 80258634
}

// ClearMEM2Arena
void f_80258638(Ctx* __restrict c) {
  trace_call(0x80258638u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80258638
  c->r[0]=c->lr; // 8025863C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80258640
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80258644
  W32(c->r[1]+0x00000008u,c->r[30]); // 80258648
  c->lr=0x80258650u; f_802605A8(c); // 8025864C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 80258650
  if (!crb(c,2)) { goto L_802586A0; } // 80258654
  c->lr=0x8025865Cu; f_80259E80(c); // 80258658
  c->r[31]=c->r[3]|c->r[3]; // 8025865C
  c->lr=0x80258664u; f_80259E98(c); // 80258660
  c->r[31]=c->r[31]-c->r[3]; // 80258664
  c->lr=0x8025866Cu; f_80259E98(c); // 80258668
  c->r[0]=0u+0x00040000u; // 8025866C
  cmpu(c,0,c->r[31],c->r[0]); // 80258670
  if (!crb(c,1)) { goto L_80258684; } // 80258674
  c->r[30]=c->r[31]+0xFFFC0000u; // 80258678
  c->r[30]=c->r[3]+c->r[30]; // 8025867C
  goto L_80258688; // 80258680
L_80258684:;
  c->r[30]=c->r[3]|c->r[3]; // 80258684
L_80258688:;
  c->r[4]=c->r[31]|c->r[31]; // 80258688
  c->lr=0x80258690u; f_8025A4B8(c); // 8025868C
  c->r[3]=c->r[30]|c->r[30]; // 80258690
  c->r[4]=0u+0x00040000u; // 80258694
  c->lr=0x8025869Cu; f_8025A400(c); // 80258698
  goto L_80258804; // 8025869C
L_802586A0:;
  c->r[31]=0u+0x805E0000u; // 802586A0
  c->r[31]=c->r[31]+0x00007D80u; // 802586A4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802586A8
  cmps(c,0,(int32_t)c->r[0],0); // 802586AC
  if (crb(c,2)) { goto L_802586C4; } // 802586B0
  c->r[3]=rotl(c->r[0],0)&0x30000000u; // 802586B4
  c->r[0]=c->r[3]+0xF0000000u; // 802586B8
  cmpu(c,0,c->r[0],0x00000000u); // 802586BC
  if (crb(c,2)) { goto L_8025870C; } // 802586C0
L_802586C4:;
  c->lr=0x802586C8u; f_80259E80(c); // 802586C4
  c->r[31]=c->r[3]|c->r[3]; // 802586C8
  c->lr=0x802586D0u; f_80259E98(c); // 802586CC
  c->r[31]=c->r[31]-c->r[3]; // 802586D0
  c->lr=0x802586D8u; f_80259E98(c); // 802586D4
  c->r[0]=0u+0x00040000u; // 802586D8
  cmpu(c,0,c->r[31],c->r[0]); // 802586DC
  if (!crb(c,1)) { goto L_802586F0; } // 802586E0
  c->r[30]=c->r[31]+0xFFFC0000u; // 802586E4
  c->r[30]=c->r[3]+c->r[30]; // 802586E8
  goto L_802586F4; // 802586EC
L_802586F0:;
  c->r[30]=c->r[3]|c->r[3]; // 802586F0
L_802586F4:;
  c->r[4]=c->r[31]|c->r[31]; // 802586F4
  c->lr=0x802586FCu; f_8025A4B8(c); // 802586F8
  c->r[3]=c->r[30]|c->r[30]; // 802586FC
  c->r[4]=0u+0x00040000u; // 80258700
  c->lr=0x80258708u; f_8025A400(c); // 80258704
  goto L_80258804; // 80258708
L_8025870C:;
  c->lr=0x80258710u; f_80259E98(c); // 8025870C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80258710
  cmpu(c,0,c->r[3],c->r[0]); // 80258714
  if (!crb(c,0)) { goto L_80258804; } // 80258718
  c->lr=0x80258720u; f_80259E80(c); // 8025871C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80258720
  cmpu(c,0,c->r[3],c->r[0]); // 80258724
  if (crb(c,1)) { goto L_80258774; } // 80258728
  c->lr=0x80258730u; f_80259E80(c); // 8025872C
  c->r[31]=c->r[3]|c->r[3]; // 80258730
  c->lr=0x80258738u; f_80259E98(c); // 80258734
  c->r[31]=c->r[31]-c->r[3]; // 80258738
  c->lr=0x80258740u; f_80259E98(c); // 8025873C
  c->r[0]=0u+0x00040000u; // 80258740
  cmpu(c,0,c->r[31],c->r[0]); // 80258744
  if (!crb(c,1)) { goto L_80258758; } // 80258748
  c->r[30]=c->r[31]+0xFFFC0000u; // 8025874C
  c->r[30]=c->r[3]+c->r[30]; // 80258750
  goto L_8025875C; // 80258754
L_80258758:;
  c->r[30]=c->r[3]|c->r[3]; // 80258758
L_8025875C:;
  c->r[4]=c->r[31]|c->r[31]; // 8025875C
  c->lr=0x80258764u; f_8025A4B8(c); // 80258760
  c->r[3]=c->r[30]|c->r[30]; // 80258764
  c->r[4]=0u+0x00040000u; // 80258768
  c->lr=0x80258770u; f_8025A400(c); // 8025876C
  goto L_80258804; // 80258770
L_80258774:;
  c->lr=0x80258778u; f_80259E98(c); // 80258774
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80258778
  c->r[31]=c->r[0]-c->r[3]; // 8025877C
  c->lr=0x80258784u; f_80259E98(c); // 80258780
  c->r[0]=0u+0x00040000u; // 80258784
  cmpu(c,0,c->r[31],c->r[0]); // 80258788
  if (!crb(c,1)) { goto L_8025879C; } // 8025878C
  c->r[30]=c->r[31]+0xFFFC0000u; // 80258790
  c->r[30]=c->r[3]+c->r[30]; // 80258794
  goto L_802587A0; // 80258798
L_8025879C:;
  c->r[30]=c->r[3]|c->r[3]; // 8025879C
L_802587A0:;
  c->r[4]=c->r[31]|c->r[31]; // 802587A0
  c->lr=0x802587A8u; f_8025A4B8(c); // 802587A4
  c->r[3]=c->r[30]|c->r[30]; // 802587A8
  c->r[4]=0u+0x00040000u; // 802587AC
  c->lr=0x802587B4u; f_8025A400(c); // 802587B0
  c->r[3]=0u+0x805E0000u; // 802587B4
  c->r[3]=c->r[3]+0x00007D80u; // 802587B8
  c->r[31]=R32(c->r[3]+0x00000010u); // 802587BC
  c->lr=0x802587C4u; f_80259E80(c); // 802587C0
  cmpu(c,0,c->r[3],c->r[31]); // 802587C4
  if (!crb(c,1)) { goto L_80258804; } // 802587C8
  c->lr=0x802587D0u; f_80259E80(c); // 802587CC
  c->r[4]=c->r[3]-c->r[31]; // 802587D0
  c->r[0]=0u+0x00040000u; // 802587D4
  cmpu(c,0,c->r[4],c->r[0]); // 802587D8
  if (!crb(c,1)) { goto L_802587EC; } // 802587DC
  c->r[30]=c->r[4]+0xFFFC0000u; // 802587E0
  c->r[30]=c->r[31]+c->r[30]; // 802587E4
  goto L_802587F0; // 802587E8
L_802587EC:;
  c->r[30]=c->r[31]|c->r[31]; // 802587EC
L_802587F0:;
  c->r[3]=c->r[31]|c->r[31]; // 802587F0
  c->lr=0x802587F8u; f_8025A4B8(c); // 802587F4
  c->r[3]=c->r[30]|c->r[30]; // 802587F8
  c->r[4]=0u+0x00040000u; // 802587FC
  c->lr=0x80258804u; f_8025A400(c); // 80258800
L_80258804:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80258804
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80258808
  c->r[30]=R32(c->r[1]+0x00000008u); // 8025880C
  c->lr=c->r[0]; // 80258810
  c->r[1]=c->r[1]+0x00000010u; // 80258814
  return; // 80258818
}

// InquiryCallback
void f_8025881C(Ctx* __restrict c) {
  trace_call(0x8025881Cu);
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8025881C
  cmps(c,0,(int32_t)c->r[0],0); // 80258820
  if (crb(c,2)) { goto L_8025882C; } // 80258824
  goto L_80258848; // 80258828
L_8025882C:;
  c->r[4]=0u+0x805E0000u; // 8025882C
  c->r[3]=0u+0x80000000u; // 80258830
  c->r[4]=c->r[4]+0x00007DA0u; // 80258834
  c->r[0]=R16(c->r[4]+0x00000002u); // 80258838
  c->r[0]=c->r[0]|0x00008000u; // 8025883C
  W16(c->r[3]+0x000030E6u,c->r[0]); // 80258840
  return; // 80258844
L_80258848:;
  c->r[0]=0u+0x00000001u; // 80258848
  c->r[3]=0u+0x80000000u; // 8025884C
  W16(c->r[3]+0x000030E6u,c->r[0]); // 80258850
  return; // 80258854
}

// ReportOSInfo
void f_80258858(Ctx* __restrict c) {
  trace_call(0x80258858u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80258858
  c->r[0]=c->lr; // 8025885C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80258860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80258864
  c->r[31]=0u+0x80410000u; // 80258868
  c->r[31]=c->r[31]+0x000021E8u; // 8025886C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80258870
  c->r[3]=c->r[31]+0x00000048u; // 80258874
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258878
  c->lr=0x80258880u; f_801CCA38(c); // 8025887C
  c->r[3]=c->r[31]+0x00000058u; // 80258880
  c->r[4]=c->r[31]+0x00000070u; // 80258884
  c->r[5]=c->r[31]+0x0000007Cu; // 80258888
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025888C
  c->lr=0x80258894u; f_801CCA38(c); // 80258890
  c->r[3]=c->r[31]+0x00000088u; // 80258894
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258898
  c->lr=0x802588A0u; f_801CCA38(c); // 8025889C
  c->lr=0x802588A4u; f_802581EC(c); // 802588A0
  c->r[4]=rotl(c->r[3],0)&0xF0000000u; // 802588A4
  c->r[0]=0u+0x10000000u; // 802588A8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802588AC
  if (crb(c,2)) { goto L_8025893C; } // 802588B0
  if (!crb(c,0)) { goto L_802588C4; } // 802588B4
  cmps(c,0,(int32_t)c->r[4],0); // 802588B8
  if (crb(c,2)) { goto L_802588D4; } // 802588BC
  goto L_802589F0; // 802588C0
L_802588C4:;
  c->r[0]=0u+0x20000000u; // 802588C4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802588C8
  if (crb(c,2)) { goto L_802589D8; } // 802588CC
  goto L_802589F0; // 802588D0
L_802588D4:;
  cmps(c,0,(int32_t)c->r[3],18); // 802588D4
  if (crb(c,2)) { goto L_80258908; } // 802588D8
  if (!crb(c,0)) { goto L_802588EC; } // 802588DC
  cmps(c,0,(int32_t)c->r[3],17); // 802588E0
  if (!crb(c,0)) { goto L_802588F8; } // 802588E4
  goto L_80258928; // 802588E8
L_802588EC:;
  cmps(c,0,(int32_t)c->r[3],32); // 802588EC
  if (crb(c,2)) { goto L_80258918; } // 802588F0
  goto L_80258928; // 802588F4
L_802588F8:;
  c->r[3]=c->r[31]+0x00000098u; // 802588F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802588FC
  c->lr=0x80258904u; f_801CCA38(c); // 80258900
  goto L_80258A00; // 80258904
L_80258908:;
  c->r[3]=c->r[31]+0x000000B0u; // 80258908
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025890C
  c->lr=0x80258914u; f_801CCA38(c); // 80258910
  goto L_80258A00; // 80258914
L_80258918:;
  c->r[3]=c->r[31]+0x000000CCu; // 80258918
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025891C
  c->lr=0x80258924u; f_801CCA38(c); // 80258920
  goto L_80258A00; // 80258924
L_80258928:;
  c->r[4]=c->r[3]|c->r[3]; // 80258928
  c->r[3]=c->r[31]+0x000000E8u; // 8025892C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258930
  c->lr=0x80258938u; f_801CCA38(c); // 80258934
  goto L_80258A00; // 80258938
L_8025893C:;
  c->r[5]=c->r[3]+0xF0000000u; // 8025893C
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 80258940
  cmpu(c,0,c->r[5],0x00000019u); // 80258944
  if (crb(c,1)) { goto L_802589C4; } // 80258948
  c->r[4]=0u+0x80410000u; // 8025894C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80258950
  c->r[4]=c->r[4]+0x000023D8u; // 80258954
  c->r[4]=R32(c->r[4]+c->r[5]); // 80258958
  c->ctr=c->r[4]; // 8025895C
  if (true) { switch (c->ctr) { case 0x80258964u: goto L_80258964; case 0x80258974u: goto L_80258974; case 0x80258984u: goto L_80258984; case 0x80258994u: goto L_80258994; case 0x802589A4u: goto L_802589A4; case 0x802589B4u: goto L_802589B4; case 0x802589C4u: goto L_802589C4; default: break; } dispatch(c,c->ctr); return; } // 80258960
L_80258964:;
  c->r[3]=c->r[31]+0x000000F4u; // 80258964
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258968
  c->lr=0x80258970u; f_801CCA38(c); // 8025896C
  goto L_80258A00; // 80258970
L_80258974:;
  c->r[3]=c->r[31]+0x00000100u; // 80258974
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258978
  c->lr=0x80258980u; f_801CCA38(c); // 8025897C
  goto L_80258A00; // 80258980
L_80258984:;
  c->r[3]=c->r[31]+0x0000010Cu; // 80258984
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258988
  c->lr=0x80258990u; f_801CCA38(c); // 8025898C
  goto L_80258A00; // 80258990
L_80258994:;
  c->r[3]=c->r[31]+0x00000118u; // 80258994
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258998
  c->lr=0x802589A0u; f_801CCA38(c); // 8025899C
  goto L_80258A00; // 802589A0
L_802589A4:;
  c->r[3]=c->r[31]+0x00000124u; // 802589A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802589A8
  c->lr=0x802589B0u; f_801CCA38(c); // 802589AC
  goto L_80258A00; // 802589B0
L_802589B4:;
  c->r[3]=c->r[31]+0x00000130u; // 802589B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802589B8
  c->lr=0x802589C0u; f_801CCA38(c); // 802589BC
  goto L_80258A00; // 802589C0
L_802589C4:;
  c->r[4]=c->r[3]|c->r[3]; // 802589C4
  c->r[3]=c->r[31]+0x00000148u; // 802589C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802589CC
  c->lr=0x802589D4u; f_801CCA38(c); // 802589D0
  goto L_80258A00; // 802589D4
L_802589D8:;
  c->r[4]=rotl(c->r[3],0)&0x0FFFFFFFu; // 802589D8
  c->r[3]=c->r[31]+0x00000164u; // 802589DC
  c->r[4]=c->r[4]+0xFFFFFFFDu; // 802589E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802589E4
  c->lr=0x802589ECu; f_801CCA38(c); // 802589E8
  goto L_80258A00; // 802589EC
L_802589F0:;
  c->r[4]=c->r[3]|c->r[3]; // 802589F0
  c->r[3]=c->r[13]+0xFFFF8D9Cu; // 802589F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802589F8
  c->lr=0x80258A00u; f_801CCA38(c); // 802589FC
L_80258A00:;
  c->r[4]=0u+0xC0000000u; // 80258A00
  c->r[3]=c->r[31]+0x00000180u; // 80258A04
  c->r[0]=R32(c->r[4]+0x00003140u); // 80258A08
  c->r[30]=R32(c->r[4]+0x00003144u); // 80258A0C
  c->r[4]=rotl(c->r[0],16)&0x000000FFu; // 80258A10
  c->r[5]=rotl(c->r[0],24)&0x000000FFu; // 80258A14
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 80258A18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258A1C
  c->lr=0x80258A24u; f_801CCA38(c); // 80258A20
  c->r[3]=rotl(c->r[30],28)&0x0000000Fu; // 80258A24
  c->r[6]=rotl(c->r[30],12)&0x0000000Fu; // 80258A28
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 80258A2C
  c->r[5]=rotl(c->r[30],20)&0x0000000Fu; // 80258A30
  c->r[0]=rotl(c->r[30],0)&0x0000000Fu; // 80258A34
  c->r[8]=rotl(c->r[30],16)&0x0000000Fu; // 80258A38
  c->r[4]=c->r[0]+c->r[4]; // 80258A3C
  c->r[7]=rotl(c->r[30],24)&0x0000000Fu; // 80258A40
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 80258A44
  c->r[3]=c->r[31]+0x0000019Cu; // 80258A48
  c->r[0]=c->r[4]+0x000007D0u; // 80258A4C
  c->r[4]=c->r[8]+c->r[6]; // 80258A50
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 80258A54
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 80258A58
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 80258A5C
  c->r[0]=c->r[7]+c->r[5]; // 80258A60
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 80258A64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258A68
  c->lr=0x80258A70u; f_801CCA38(c); // 80258A6C
  c->lr=0x80258A74u; f_8025F4A4(c); // 80258A70
  c->r[30]=c->r[3]|c->r[3]; // 80258A74
  c->lr=0x80258A7Cu; f_8025F498(c); // 80258A78
  c->r[0]=c->r[3]+c->r[30]; // 80258A7C
  c->r[3]=c->r[31]+0x000001A8u; // 80258A80
  c->r[4]=rotl(c->r[0],12)&0x00000FFFu; // 80258A84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258A88
  c->lr=0x80258A90u; f_801CCA38(c); // 80258A8C
  c->lr=0x80258A94u; f_80259E78(c); // 80258A90
  c->r[30]=c->r[3]|c->r[3]; // 80258A94
  c->lr=0x80258A9Cu; f_80259E90(c); // 80258A98
  c->r[4]=c->r[3]|c->r[3]; // 80258A9C
  c->r[5]=c->r[30]|c->r[30]; // 80258AA0
  c->r[3]=c->r[31]+0x000001B8u; // 80258AA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258AA8
  c->lr=0x80258AB0u; f_801CCA38(c); // 80258AAC
  c->lr=0x80258AB4u; f_80259E80(c); // 80258AB0
  c->r[30]=c->r[3]|c->r[3]; // 80258AB4
  c->lr=0x80258ABCu; f_80259E98(c); // 80258AB8
  c->r[4]=c->r[3]|c->r[3]; // 80258ABC
  c->r[5]=c->r[30]|c->r[30]; // 80258AC0
  c->r[3]=c->r[31]+0x000001D4u; // 80258AC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258AC8
  c->lr=0x80258AD0u; f_801CCA38(c); // 80258ACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80258AD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80258AD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80258AD8
  c->lr=c->r[0]; // 80258ADC
  c->r[1]=c->r[1]+0x00000010u; // 80258AE0
  return; // 80258AE4
}

// OSInit
void f_80258AE8(Ctx* __restrict c) {
  trace_call(0x80258AE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80258AE8
  c->r[0]=c->lr; // 80258AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80258AF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80258AF4
  c->r[31]=0u+0x80410000u; // 80258AF8
  c->r[31]=c->r[31]+0x000021E8u; // 80258AFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80258B00
  c->r[30]=0u+0x805E0000u; // 80258B04
  c->r[30]=c->r[30]+0x00007D80u; // 80258B08
  c->r[0]=R32(c->r[13]+0xFFFF97E4u); // 80258B0C
  cmps(c,0,(int32_t)c->r[0],0); // 80258B10
  if (!crb(c,2)) { goto L_80258ED4; } // 80258B14
  c->r[0]=0u+0x00000001u; // 80258B18
  W32(c->r[13]+0xFFFF97E4u,c->r[0]); // 80258B1C
  c->lr=0x80258B24u; f_802627A0(c); // 80258B20
  W32(c->r[13]+0xFFFF981Cu,c->r[4]); // 80258B24
  W32(c->r[13]+0xFFFF9818u,c->r[3]); // 80258B28
  c->lr=0x80258B30u; f_8025EA10(c); // 80258B2C
  c->r[3]=c->r[30]+0x00000000u; // 80258B30
  c->lr=0x80258B38u; f_8025B9BC(c); // 80258B34
  c->r[3]=0u+0x00000000u; // 80258B38
  c->lr=0x80258B40u; f_80257E54(c); // 80258B3C
  c->r[3]=0u+0x00000000u; // 80258B40
  c->lr=0x80258B48u; f_80257E5C(c); // 80258B44
  c->r[3]=0u+0x00000000u; // 80258B48
  c->lr=0x80258B50u; f_80257E64(c); // 80258B4C
  c->r[3]=0u+0x00000000u; // 80258B50
  c->lr=0x80258B58u; f_80257E6C(c); // 80258B54
  c->r[3]=0u+0x00000000u; // 80258B58
  c->lr=0x80258B60u; f_80257E74(c); // 80258B5C
  c->r[3]=0u+0x00000000u; // 80258B60
  c->lr=0x80258B68u; f_80257E7C(c); // 80258B64
  c->r[3]=0u+0x83900000u; // 80258B68
  c->lr=0x80258B70u; f_80257F20(c); // 80258B6C
  c->lr=0x80258B74u; f_80257EF0(c); // 80258B70
  c->lr=0x80258B78u; f_80257F18(c); // 80258B74
  c->r[0]=0u+0x00000000u; // 80258B78
  c->r[4]=0u+0x80000000u; // 80258B7C
  W32(c->r[13]+0xFFFF9810u,c->r[4]); // 80258B80
  W32(c->r[13]+0xFFFF980Cu,c->r[0]); // 80258B84
  W32(c->r[13]+0xFFFF8E20u,c->r[0]); // 80258B88
  c->r[5]=R32(c->r[4]+0x000000F4u); // 80258B8C
  cmps(c,0,(int32_t)c->r[5],0); // 80258B90
  if (crb(c,2)) { goto L_80258BBC; } // 80258B94
  c->r[3]=c->r[5]+0x0000000Cu; // 80258B98
  W32(c->r[13]+0xFFFF980Cu,c->r[3]); // 80258B9C
  c->r[0]=R32(c->r[5]+0x00000024u); // 80258BA0
  W32(c->r[13]+0xFFFF9AD0u,c->r[0]); // 80258BA4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80258BA8
  W8(c->r[4]+0x000030E8u,c->r[0]); // 80258BAC
  c->r[0]=R32(c->r[13]+0xFFFF9AD0u); // 80258BB0
  W8(c->r[4]+0x000030E9u,c->r[0]); // 80258BB4
  goto L_80258BE0; // 80258BB8
L_80258BBC:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 80258BBC
  cmps(c,0,(int32_t)c->r[0],0); // 80258BC0
  if (crb(c,2)) { goto L_80258BE0; } // 80258BC4
  c->r[3]=R8(c->r[4]+0x000030E8u); // 80258BC8
  c->r[0]=c->r[13]+0xFFFF9808u; // 80258BCC
  W32(c->r[13]+0xFFFF9808u,c->r[3]); // 80258BD0
  W32(c->r[13]+0xFFFF980Cu,c->r[0]); // 80258BD4
  c->r[0]=R8(c->r[4]+0x000030E9u); // 80258BD8
  W32(c->r[13]+0xFFFF9AD0u,c->r[0]); // 80258BDC
L_80258BE0:;
  c->r[0]=0u+0x00000001u; // 80258BE0
  c->r[4]=0u+0x80000000u; // 80258BE4
  W32(c->r[13]+0xFFFF8E20u,c->r[0]); // 80258BE8
  c->r[3]=R32(c->r[4]+0x0000310Cu); // 80258BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80258BF0
  if (!crb(c,2)) { goto L_80258C60; } // 80258BF4
  c->r[3]=0u+0x80710000u; // 80258BF8
  c->r[3]=c->r[3]+0xFFFFD780u; // 80258BFC
  c->r[0]=rotl(c->r[3],0)&0x30000000u; cr0(c,c->r[0]); // 80258C00
  if (!crb(c,2)) { goto L_80258C5C; } // 80258C04
  c->r[4]=R32(c->r[13]+0xFFFF9810u); // 80258C08
  c->r[0]=R32(c->r[4]+0x00000030u); // 80258C0C
  cmps(c,0,(int32_t)c->r[0],0); // 80258C10
  if (!crb(c,2)) { goto L_80258C1C; } // 80258C14
  goto L_80258C20; // 80258C18
L_80258C1C:;
  c->r[3]=c->r[0]|c->r[0]; // 80258C1C
L_80258C20:;
  c->r[4]=R32(c->r[13]+0xFFFF9810u); // 80258C20
  c->r[0]=R32(c->r[4]+0x00000030u); // 80258C24
  cmps(c,0,(int32_t)c->r[0],0); // 80258C28
  if (!crb(c,2)) { goto L_80258C60; } // 80258C2C
  c->r[4]=R32(c->r[13]+0xFFFF980Cu); // 80258C30
  cmps(c,0,(int32_t)c->r[4],0); // 80258C34
  if (crb(c,2)) { goto L_80258C60; } // 80258C38
  c->r[0]=R32(c->r[4]+0x00000000u); // 80258C3C
  cmpu(c,0,c->r[0],0x00000002u); // 80258C40
  if (!crb(c,0)) { goto L_80258C60; } // 80258C44
  c->r[3]=0u+0x80710000u; // 80258C48
  c->r[3]=c->r[3]+0xFFFFB780u; // 80258C4C
  c->r[0]=c->r[3]+0x0000001Fu; // 80258C50
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80258C54
  goto L_80258C60; // 80258C58
L_80258C5C:;
  c->r[3]=c->r[4]+0x00004000u; // 80258C5C
L_80258C60:;
  c->lr=0x80258C64u; f_80259EC0(c); // 80258C60
  c->r[3]=0u+0x80000000u; // 80258C64
  c->r[3]=R32(c->r[3]+0x00003110u); // 80258C68
  cmps(c,0,(int32_t)c->r[3],0); // 80258C6C
  if (!crb(c,2)) { goto L_80258C8C; } // 80258C70
  c->r[3]=R32(c->r[13]+0xFFFF9810u); // 80258C74
  c->r[3]=R32(c->r[3]+0x00000034u); // 80258C78
  cmps(c,0,(int32_t)c->r[3],0); // 80258C7C
  if (!crb(c,2)) { goto L_80258C8C; } // 80258C80
  c->r[3]=0u+0x81700000u; // 80258C84
  c->r[3]=c->r[3]+0x00000000u; // 80258C88
L_80258C8C:;
  c->lr=0x80258C90u; f_80259EA8(c); // 80258C8C
  c->r[3]=0u+0x80000000u; // 80258C90
  c->r[3]=R32(c->r[3]+0x00003124u); // 80258C94
  cmps(c,0,(int32_t)c->r[3],0); // 80258C98
  if (crb(c,2)) { goto L_80258D08; } // 80258C9C
  c->r[5]=0u+0x80710000u; // 80258CA0
  c->r[5]=c->r[5]+0xFFFFD780u; // 80258CA4
  c->r[4]=rotl(c->r[5],0)&0x30000000u; // 80258CA8
  c->r[0]=c->r[4]+0xF0000000u; // 80258CAC
  cmpu(c,0,c->r[0],0x00000000u); // 80258CB0
  if (!crb(c,2)) { goto L_80258CE8; } // 80258CB4
  c->r[4]=R32(c->r[13]+0xFFFF980Cu); // 80258CB8
  c->r[3]=c->r[5]|c->r[5]; // 80258CBC
  cmps(c,0,(int32_t)c->r[4],0); // 80258CC0
  if (crb(c,2)) { goto L_80258D04; } // 80258CC4
  c->r[0]=R32(c->r[4]+0x00000000u); // 80258CC8
  cmpu(c,0,c->r[0],0x00000002u); // 80258CCC
  if (!crb(c,0)) { goto L_80258D04; } // 80258CD0
  c->r[3]=0u+0x80710000u; // 80258CD4
  c->r[3]=c->r[3]+0xFFFFB780u; // 80258CD8
  c->r[0]=c->r[3]+0x0000001Fu; // 80258CDC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80258CE0
  goto L_80258D04; // 80258CE4
L_80258CE8:;
  c->r[4]=0u+0x90000000u; // 80258CE8
  cmpu(c,0,c->r[3],c->r[4]); // 80258CEC
  if (crb(c,0)) { goto L_80258D04; } // 80258CF0
  c->r[0]=c->r[4]+0x00000800u; // 80258CF4
  cmpu(c,0,c->r[3],c->r[0]); // 80258CF8
  if (!crb(c,0)) { goto L_80258D04; } // 80258CFC
  c->r[3]=c->r[0]|c->r[0]; // 80258D00
L_80258D04:;
  c->lr=0x80258D08u; f_80259EC8(c); // 80258D04
L_80258D08:;
  c->r[3]=0u+0x80000000u; // 80258D08
  c->r[3]=R32(c->r[3]+0x00003128u); // 80258D0C
  cmps(c,0,(int32_t)c->r[3],0); // 80258D10
  if (crb(c,2)) { goto L_80258D1C; } // 80258D14
  c->lr=0x80258D1Cu; f_80259EB0(c); // 80258D18
L_80258D1C:;
  c->lr=0x80258D20u; f_80262DDC(c); // 80258D1C
  c->lr=0x80258D24u; f_80258EEC(c); // 80258D20
  c->lr=0x80258D28u; f_802610A0(c); // 80258D24
  c->lr=0x80258D2Cu; f_8025938C(c); // 80258D28
  c->lr=0x80258D30u; f_8025F194(c); // 80258D2C
  c->lr=0x80258D34u; f_8025EA80(c); // 80258D30
  c->lr=0x80258D38u; f_8025B230(c); // 80258D34
  c->lr=0x80258D3Cu; f_8025A8B8(c); // 80258D38
  c->lr=0x80258D40u; f_8029D824(c); // 80258D3C
  c->lr=0x80258D44u; f_8029ECE4(c); // 80258D40
  c->lr=0x80258D48u; f_8026072C(c); // 80258D44
  c->lr=0x80258D4Cu; f_80261104(c); // 80258D48
  c->lr=0x80258D50u; f_8025A12C(c); // 80258D4C
  c->lr=0x80258D54u; f_80257ECC(c); // 80258D50
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 80258D54
  c->lr=0x80258D5Cu; f_80257ED4(c); // 80258D58
  c->r[0]=R32(c->r[13]+0xFFFF97D8u); // 80258D5C
  cmps(c,0,(int32_t)c->r[0],0); // 80258D60
  if (!crb(c,2)) { goto L_80258D6C; } // 80258D64
  c->lr=0x80258D6Cu; f_8025FBE4(c); // 80258D68
L_80258D6C:;
  c->lr=0x80258D70u; f_80258858(c); // 80258D6C
  c->r[4]=R32(c->r[13]+0xFFFF8D98u); // 80258D70
  c->r[3]=c->r[13]+0xFFFF8DA4u; // 80258D74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258D78
  c->lr=0x80258D80u; f_801CCA38(c); // 80258D7C
  c->r[3]=R32(c->r[13]+0xFFFF980Cu); // 80258D80
  cmps(c,0,(int32_t)c->r[3],0); // 80258D84
  if (crb(c,2)) { goto L_80258D9C; } // 80258D88
  c->r[0]=R32(c->r[3]+0x00000000u); // 80258D8C
  cmpu(c,0,c->r[0],0x00000002u); // 80258D90
  if (crb(c,0)) { goto L_80258D9C; } // 80258D94
  c->lr=0x80258D9Cu; f_802A4694(c); // 80258D98
L_80258D9C:;
  c->lr=0x80258DA0u; f_8025845C(c); // 80258D9C
  c->lr=0x80258DA4u; f_80258638(c); // 80258DA0
  c->lr=0x80258DA8u; f_8025EA24(c); // 80258DA4
  c->lr=0x80258DACu; f_802A8F48(c); // 80258DA8
  c->r[0]=R32(c->r[13]+0xFFFF97DCu); // 80258DAC
  cmps(c,0,(int32_t)c->r[0],0); // 80258DB0
  if (!crb(c,2)) { goto L_80258DDC; } // 80258DB4
  c->r[0]=R32(c->r[13]+0xFFFF9848u); // 80258DB8
  cmps(c,0,(int32_t)c->r[0],0); // 80258DBC
  if (!crb(c,2)) { goto L_80258DDC; } // 80258DC0
  c->lr=0x80258DC8u; f_80262F6C(c); // 80258DC4
  c->lr=0x80258DCCu; f_802AD4BC(c); // 80258DC8
L_80258DCC:;
  c->lr=0x80258DD0u; f_802AD55C(c); // 80258DCC
  cmpu(c,0,c->r[3],0x00000001u); // 80258DD0
  if (crb(c,2)) { IRQCHK(c); goto L_80258DCC; } // 80258DD4
  c->lr=0x80258DDCu; f_80263D48(c); // 80258DD8
L_80258DDC:;
  c->r[0]=R32(c->r[13]+0xFFFF97D8u); // 80258DDC
  cmps(c,0,(int32_t)c->r[0],0); // 80258DE0
  if (!crb(c,2)) { goto L_80258EAC; } // 80258DE4
  c->r[3]=0u+0x80000000u; // 80258DE8
  c->r[0]=R8(c->r[3]+0x0000315Cu); // 80258DEC
  cmps(c,0,(int32_t)c->r[0],129); // 80258DF0
  if (crb(c,2)) { goto L_80258E00; } // 80258DF4
  if (!crb(c,0)) { goto L_80258E20; } // 80258DF8
  goto L_80258E20; // 80258DFC
L_80258E00:;
  c->r[3]=c->r[31]+0x00000258u; // 80258E00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258E04
  c->lr=0x80258E0Cu; f_801CCA38(c); // 80258E08
  c->r[5]=c->r[31]+0x000002A8u; // 80258E0C
  c->r[3]=c->r[13]+0xFFFF8DA8u; // 80258E10
  c->r[4]=0u+0x00000458u; // 80258E14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258E18
  c->lr=0x80258E20u; f_801D479C(c); // 80258E1C
L_80258E20:;
  c->r[3]=0u+0x80000000u; // 80258E20
  c->r[0]=R8(c->r[3]+0x0000315Du); // 80258E24
  cmps(c,0,(int32_t)c->r[0],129); // 80258E28
  if (crb(c,2)) { goto L_80258E38; } // 80258E2C
  if (!crb(c,0)) { goto L_80258E58; } // 80258E30
  goto L_80258E58; // 80258E34
L_80258E38:;
  c->r[3]=c->r[31]+0x000002C0u; // 80258E38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258E3C
  c->lr=0x80258E44u; f_801CCA38(c); // 80258E40
  c->r[5]=c->r[31]+0x000002A8u; // 80258E44
  c->r[3]=c->r[13]+0xFFFF8DA8u; // 80258E48
  c->r[4]=0u+0x0000046Au; // 80258E4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258E50
  c->lr=0x80258E58u; f_801D479C(c); // 80258E54
L_80258E58:;
  c->lr=0x80258E5Cu; f_80266960(c); // 80258E58
  c->r[0]=R32(c->r[13]+0xFFFF97E0u); // 80258E5C
  cmps(c,0,(int32_t)c->r[0],0); // 80258E60
  if (crb(c,2)) { goto L_80258E7C; } // 80258E64
  c->r[4]=0u+0x00010000u; // 80258E68
  c->r[3]=0u+0x80000000u; // 80258E6C
  c->r[0]=c->r[4]+0xFFFF9000u; // 80258E70
  W16(c->r[3]+0x000030E6u,c->r[0]); // 80258E74
  goto L_80258EAC; // 80258E78
L_80258E7C:;
  c->r[3]=0u+0x80000000u; // 80258E7C
  c->r[0]=R16(c->r[3]+0x000030E6u); // 80258E80
  cmps(c,0,(int32_t)c->r[0],0); // 80258E84
  if (!crb(c,2)) { goto L_80258EAC; } // 80258E88
  c->r[3]=c->r[30]+0x00000020u; // 80258E8C
  c->r[4]=0u+0x00000020u; // 80258E90
  c->lr=0x80258E98u; f_8025A3D4(c); // 80258E94
  c->r[5]=0u+0x80260000u; // 80258E98
  c->r[3]=c->r[30]+0x00000040u; // 80258E9C
  c->r[4]=c->r[30]+0x00000020u; // 80258EA0
  c->r[5]=c->r[5]+0xFFFF881Cu; // 80258EA4
  c->lr=0x80258EACu; f_8026A374(c); // 80258EA8
L_80258EAC:;
  c->r[0]=R32(c->r[13]+0xFFFF97D8u); // 80258EAC
  cmps(c,0,(int32_t)c->r[0],0); // 80258EB0
  if (!crb(c,2)) { goto L_80258ED4; } // 80258EB4
  c->r[0]=R32(c->r[13]+0xFFFF97DCu); // 80258EB8
  cmps(c,0,(int32_t)c->r[0],0); // 80258EBC
  if (!crb(c,2)) { goto L_80258ED4; } // 80258EC0
  c->r[0]=R32(c->r[13]+0xFFFF9848u); // 80258EC4
  cmps(c,0,(int32_t)c->r[0],0); // 80258EC8
  if (!crb(c,2)) { goto L_80258ED4; } // 80258ECC
  c->lr=0x80258ED4u; f_80263900(c); // 80258ED0
L_80258ED4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80258ED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80258ED8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80258EDC
  c->lr=c->r[0]; // 80258EE0
  c->r[1]=c->r[1]+0x00000010u; // 80258EE4
  return; // 80258EE8
}

// OSExceptionInit
void f_80258EEC(Ctx* __restrict c) {
  trace_call(0x80258EECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80258EEC
  c->r[0]=c->lr; // 80258EF0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80258EF4
  c->r[11]=c->r[1]+0x00000040u; // 80258EF8
  c->lr=0x80258F00u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80258EFC
  c->r[22]=0u+0x80000000u; // 80258F00
  c->r[26]=0u+0x80260000u; // 80258F04
  c->r[0]=R32(c->r[22]+0x00000060u); // 80258F08
  c->r[3]=0u+0x80260000u; // 80258F0C
  c->r[28]=0u+0x80260000u; // 80258F10
  c->r[30]=0u+0x80410000u; // 80258F14
  cmps(c,0,(int32_t)c->r[0],0); // 80258F18
  c->r[26]=c->r[26]+0xFFFF91B8u; // 80258F1C
  c->r[3]=c->r[3]+0xFFFF9250u; // 80258F20
  {uint32_t ea=c->r[28]+0xFFFF9220u; c->r[27]=R32(ea); c->r[28]=ea;} // 80258F24
  c->r[30]=c->r[30]+0x000021E8u; // 80258F28
  c->r[25]=c->r[3]-c->r[26]; // 80258F2C
  if (!crb(c,2)) { goto L_80258F7C; } // 80258F30
  c->r[3]=c->r[30]+0x00000354u; // 80258F34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258F38
  c->lr=0x80258F40u; f_80258008(c); // 80258F3C
  c->r[4]=0u+0x80260000u; // 80258F40
  c->r[5]=0u+0x80260000u; // 80258F44
  c->r[4]=c->r[4]+0xFFFF916Cu; // 80258F48
  c->r[3]=c->r[22]+0x00000060u; // 80258F4C
  c->r[5]=c->r[5]+0xFFFF9190u; // 80258F50
  c->r[21]=c->r[5]-c->r[4]; // 80258F54
  c->r[5]=c->r[21]|c->r[21]; // 80258F58
  c->lr=0x80258F60u; f_80235294(c); // 80258F5C
  c->r[4]=c->r[21]|c->r[21]; // 80258F60
  c->r[3]=c->r[22]+0x00000060u; // 80258F64
  c->lr=0x80258F6Cu; f_8025A460(c); // 80258F68
  /* sync */ // 80258F6C
  c->r[4]=c->r[21]|c->r[21]; // 80258F70
  c->r[3]=c->r[22]+0x00000060u; // 80258F74
  c->lr=0x80258F7Cu; f_8025A4E4(c); // 80258F78
L_80258F7C:;
  c->r[31]=0u+0x80260000u; // 80258F7C
  c->r[3]=0u+0x80260000u; // 80258F80
  c->r[0]=c->r[31]+0xFFFF9190u; // 80258F84
  c->r[24]=c->r[30]+0x00000318u; // 80258F88
  c->r[3]=c->r[3]+0xFFFF9194u; // 80258F8C
  c->r[29]=0u+0x00000000u; // 80258F90
  c->r[21]=c->r[3]-c->r[0]; // 80258F94
  c->r[23]=0u+0x60000000u; // 80258F98
  c->r[22]=0u+0x80260000u; // 80258F9C
L_80258FA0:;
  c->r[3]=R32(c->r[13]+0xFFFF980Cu); // 80258FA0
  cmps(c,0,(int32_t)c->r[3],0); // 80258FA4
  if (crb(c,2)) { goto L_80258FDC; } // 80258FA8
  c->r[0]=R32(c->r[3]+0x00000000u); // 80258FAC
  cmpu(c,0,c->r[0],0x00000002u); // 80258FB0
  if (crb(c,0)) { goto L_80258FDC; } // 80258FB4
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80258FB8
  c->lr=0x80258FC0u; f_80257FF0(c); // 80258FBC
  cmps(c,0,(int32_t)c->r[3],0); // 80258FC0
  if (crb(c,2)) { goto L_80258FDC; } // 80258FC4
  c->r[3]=c->r[30]+0x00000370u; // 80258FC8
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 80258FCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258FD0
  c->lr=0x80258FD8u; f_80258008(c); // 80258FD4
  goto L_802590B0; // 80258FD8
L_80258FDC:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80258FDC
  c->r[0]=c->r[27]|c->r[3]; // 80258FE0
  W32(c->r[28]+0x00000000u,c->r[0]); // 80258FE4
  c->lr=0x80258FECu; f_80257FF0(c); // 80258FE8
  cmps(c,0,(int32_t)c->r[3],0); // 80258FEC
  if (crb(c,2)) { goto L_80259018; } // 80258FF0
  c->r[3]=c->r[30]+0x000003A0u; // 80258FF4
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 80258FF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80258FFC
  c->lr=0x80259004u; f_80258008(c); // 80259000
  c->r[5]=c->r[21]|c->r[21]; // 80259004
  c->r[3]=c->r[22]+0xFFFF9210u; // 80259008
  c->r[4]=c->r[31]+0xFFFF9190u; // 8025900C
  c->lr=0x80259014u; f_80235294(c); // 80259010
  goto L_80259078; // 80259014
L_80259018:;
  cmpu(c,0,c->r[21],0x00000000u); // 80259018
  c->r[3]=c->r[21]+0x00000003u; // 8025901C
  c->r[4]=c->r[22]+0xFFFF9210u; // 80259020
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 80259024
  if (!crb(c,1)) { goto L_80259078; } // 80259028
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8025902C
  c->ctr=c->r[0]; // 80259030
  if (crb(c,2)) { goto L_80259068; } // 80259034
L_80259038:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 80259038
  W32(c->r[4]+0x00000004u,c->r[23]); // 8025903C
  W32(c->r[4]+0x00000008u,c->r[23]); // 80259040
  W32(c->r[4]+0x0000000Cu,c->r[23]); // 80259044
  W32(c->r[4]+0x00000010u,c->r[23]); // 80259048
  W32(c->r[4]+0x00000014u,c->r[23]); // 8025904C
  W32(c->r[4]+0x00000018u,c->r[23]); // 80259050
  W32(c->r[4]+0x0000001Cu,c->r[23]); // 80259054
  c->r[4]=c->r[4]+0x00000020u; // 80259058
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80259038; } // 8025905C
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 80259060
  if (crb(c,2)) { goto L_80259078; } // 80259064
L_80259068:;
  c->ctr=c->r[3]; // 80259068
L_8025906C:;
  W32(c->r[4]+0x00000000u,c->r[23]); // 8025906C
  c->r[4]=c->r[4]+0x00000004u; // 80259070
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025906C; } // 80259074
L_80259078:;
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 80259078
  c->r[4]=c->r[26]|c->r[26]; // 8025907C
  c->r[3]=R32(c->r[24]+c->r[0]); // 80259080
  c->r[5]=c->r[25]|c->r[25]; // 80259084
  c->r[20]=c->r[3]+0x80000000u; // 80259088
  c->r[3]=c->r[20]|c->r[20]; // 8025908C
  c->lr=0x80259094u; f_80235294(c); // 80259090
  c->r[3]=c->r[20]|c->r[20]; // 80259094
  c->r[4]=c->r[25]|c->r[25]; // 80259098
  c->lr=0x802590A0u; f_8025A460(c); // 8025909C
  /* sync */ // 802590A0
  c->r[3]=c->r[20]|c->r[20]; // 802590A4
  c->r[4]=c->r[25]|c->r[25]; // 802590A8
  c->lr=0x802590B0u; f_8025A4E4(c); // 802590AC
L_802590B0:;
  c->r[29]=c->r[29]+0x00000001u; // 802590B0
  cmpu(c,0,c->r[29],0x0000000Fu); // 802590B4
  if (crb(c,0)) { IRQCHK(c); goto L_80258FA0; } // 802590B8
  c->r[3]=0u+0x80000000u; // 802590BC
  c->r[5]=0u+0x80260000u; // 802590C0
  c->r[4]=c->r[3]+0x00003000u; // 802590C4
  W32(c->r[13]+0xFFFF97E8u,c->r[4]); // 802590C8
  c->r[5]=c->r[5]+0xFFFF9254u; // 802590CC
  c->r[3]=c->r[30]+0x000003D0u; // 802590D0
  W32(c->r[4]+0x00000000u,c->r[5]); // 802590D4
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 802590D8
  W32(c->r[4]+0x00000004u,c->r[5]); // 802590DC
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 802590E0
  W32(c->r[4]+0x00000008u,c->r[5]); // 802590E4
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 802590E8
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 802590EC
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 802590F0
  W32(c->r[4]+0x00000010u,c->r[5]); // 802590F4
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 802590F8
  W32(c->r[4]+0x00000014u,c->r[5]); // 802590FC
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259100
  W32(c->r[4]+0x00000018u,c->r[5]); // 80259104
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259108
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 8025910C
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259110
  W32(c->r[4]+0x00000020u,c->r[5]); // 80259114
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259118
  W32(c->r[4]+0x00000024u,c->r[5]); // 8025911C
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259120
  W32(c->r[4]+0x00000028u,c->r[5]); // 80259124
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259128
  W32(c->r[4]+0x0000002Cu,c->r[5]); // 8025912C
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259130
  W32(c->r[4]+0x00000030u,c->r[5]); // 80259134
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259138
  W32(c->r[4]+0x00000034u,c->r[5]); // 8025913C
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 80259140
  W32(c->r[4]+0x00000038u,c->r[5]); // 80259144
  W32(c->r[28]+0x00000000u,c->r[27]); // 80259148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025914C
  c->lr=0x80259154u; f_80258008(c); // 80259150
  c->r[11]=c->r[1]+0x00000040u; // 80259154
  c->lr=0x8025915Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80259158
  c->r[0]=R32(c->r[1]+0x00000044u); // 8025915C
  c->lr=c->r[0]; // 80259160
  c->r[1]=c->r[1]+0x00000040u; // 80259164
  return; // 80259168
}

// __OSDBIntegrator
void f_8025916C(Ctx* __restrict c) {
  trace_call(0x8025916Cu);
  c->r[5]=0u+0x00000040u; // 8025916C
  c->r[3]=c->lr; // 80259170
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 80259174
  c->r[3]=R32(c->r[5]+0x00000008u); // 80259178
  c->r[3]=c->r[3]|0x80000000u; // 8025917C
  c->lr=c->r[3]; // 80259180
  c->r[3]=0u+0x00000030u; // 80259184
  c->msr=c->r[3]; // 80259188
  return; // 8025918C
}

// fn_80259190
void f_80259190(Ctx* __restrict c) {
  trace_call(0x80259190u);
  c->lr=0x80259194u; dispatch(c,0x802591F0u); // 80259190
}

// __OSSetExceptionHandler
void f_80259194(Ctx* __restrict c) {
  trace_call(0x80259194u);
  c->r[5]=R32(c->r[13]+0xFFFF97E8u); // 80259194
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 80259198
  c->r[3]=R32(c->r[5]+c->r[0]); // 8025919C
  W32(c->r[5]+c->r[0],c->r[4]); // 802591A0
  return; // 802591A4
}

// __OSGetExceptionHandler
void f_802591A8(Ctx* __restrict c) {
  trace_call(0x802591A8u);
  c->r[4]=R32(c->r[13]+0xFFFF97E8u); // 802591A8
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 802591AC
  c->r[3]=R32(c->r[4]+c->r[0]); // 802591B0
  return; // 802591B4
}

// OSExceptionVector
void f_802591B8(Ctx* __restrict c) {
  trace_call(0x802591B8u);
  mtspr(c,272,c->r[4]); // 802591B8
  c->r[4]=R32(0u+0x000000C0u); // 802591BC
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 802591C0
  c->r[3]=mfspr(c,272); // 802591C4
  W32(c->r[4]+0x00000010u,c->r[3]); // 802591C8
  W32(c->r[4]+0x00000014u,c->r[5]); // 802591CC
  c->r[3]=R16(c->r[4]+0x000001A2u); // 802591D0
  c->r[3]=c->r[3]|0x00000002u; // 802591D4
  W16(c->r[4]+0x000001A2u,c->r[3]); // 802591D8
  c->r[3]=c->cr; // 802591DC
  W32(c->r[4]+0x00000080u,c->r[3]); // 802591E0
  c->r[3]=c->lr; // 802591E4
  W32(c->r[4]+0x00000084u,c->r[3]); // 802591E8
  c->r[3]=c->ctr; // 802591EC
  W32(c->r[4]+0x00000088u,c->r[3]); // 802591F0
  c->r[3]=mfspr(c,1); // 802591F4
  W32(c->r[4]+0x0000008Cu,c->r[3]); // 802591F8
  c->r[3]=mfspr(c,26); // 802591FC
  W32(c->r[4]+0x00000198u,c->r[3]); // 80259200
  c->r[3]=mfspr(c,27); // 80259204
  W32(c->r[4]+0x0000019Cu,c->r[3]); // 80259208
  c->r[5]=c->r[3]|c->r[3]; // 8025920C
  c->r[0]=c->r[0]|0x00000000u; // 80259210
  c->r[3]=c->msr; // 80259214
  c->r[3]=c->r[3]|0x00000030u; // 80259218
  mtspr(c,27,c->r[3]); // 8025921C
  c->r[3]=0u+0x00000000u; // 80259220
  c->r[4]=R32(0u+0x000000D4u); // 80259224
  c->r[5]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[5]); // 80259228
  if (!crb(c,2)) { goto L_80259240; } // 8025922C
  c->r[5]=0u+0x80260000u; // 80259230
  c->r[5]=c->r[5]+0xFFFF9254u; // 80259234
  mtspr(c,26,c->r[5]); // 80259238
  return; /* rfi */ // 8025923C
L_80259240:;
  c->r[5]=rotl(c->r[3],2)&0x000003FCu; // 80259240
  c->r[5]=R32(c->r[5]+0x00003000u); // 80259244
  mtspr(c,26,c->r[5]); // 80259248
  return; /* rfi */ // 8025924C
  c->r[0]=c->r[0]|0x00000000u; // 80259250
}

// OSDefaultExceptionHandler
void f_80259254(Ctx* __restrict c) {
  trace_call(0x80259254u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 80259254
  W32(c->r[4]+0x00000004u,c->r[1]); // 80259258
  W32(c->r[4]+0x00000008u,c->r[2]); // 8025925C
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80259260
  c->r[0]=mfspr(c,913); // 80259264
  W32(c->r[4]+0x000001A8u,c->r[0]); // 80259268
  c->r[0]=mfspr(c,914); // 8025926C
  W32(c->r[4]+0x000001ACu,c->r[0]); // 80259270
  c->r[0]=mfspr(c,915); // 80259274
  W32(c->r[4]+0x000001B0u,c->r[0]); // 80259278
  c->r[0]=mfspr(c,916); // 8025927C
  W32(c->r[4]+0x000001B4u,c->r[0]); // 80259280
  c->r[0]=mfspr(c,917); // 80259284
  W32(c->r[4]+0x000001B8u,c->r[0]); // 80259288
  c->r[0]=mfspr(c,918); // 8025928C
  W32(c->r[4]+0x000001BCu,c->r[0]); // 80259290
  c->r[0]=mfspr(c,919); // 80259294
  W32(c->r[4]+0x000001C0u,c->r[0]); // 80259298
  c->r[5]=mfspr(c,18); // 8025929C
  c->r[6]=mfspr(c,19); // 802592A0
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 802592A4
  f_8025B504(c); return; // 802592A8
}

// __OSPSInit
void f_802592AC(Ctx* __restrict c) {
  trace_call(0x802592ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802592AC
  c->r[0]=c->lr; // 802592B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802592B4
  c->lr=0x802592BCu; f_80257ECC(c); // 802592B8
  c->r[3]=c->r[3]|0xA0000000u; // 802592BC
  c->lr=0x802592C4u; f_80257ED4(c); // 802592C0
  c->lr=0x802592C8u; f_8025A518(c); // 802592C4
  /* sync */ // 802592C8
  c->r[3]=0u+0x00000000u; // 802592CC
  mtspr(c,912,c->r[3]); // 802592D0
  mtspr(c,913,c->r[3]); // 802592D4
  mtspr(c,914,c->r[3]); // 802592D8
  mtspr(c,915,c->r[3]); // 802592DC
  mtspr(c,916,c->r[3]); // 802592E0
  mtspr(c,917,c->r[3]); // 802592E4
  mtspr(c,918,c->r[3]); // 802592E8
  mtspr(c,919,c->r[3]); // 802592EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802592F0
  c->lr=c->r[0]; // 802592F4
  c->r[1]=c->r[1]+0x00000010u; // 802592F8
  return; // 802592FC
}

// __OSGetDIConfig
void f_80259300(Ctx* __restrict c) {
  trace_call(0x80259300u);
  c->r[3]=0u+0xCD000000u; // 80259300
  c->r[0]=R32(c->r[3]+0x00006024u); // 80259304
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 80259308
  return; // 8025930C
}

// OSRegisterVersion
void f_80259310(Ctx* __restrict c) {
  trace_call(0x80259310u);
  c->r[4]=c->r[3]|c->r[3]; // 80259310
  c->r[3]=c->r[13]+0xFFFF8DA4u; // 80259314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80259318
  f_801CCA38(c); return; // 8025931C
}

// OSGetAppGamename
void f_80259320(Ctx* __restrict c) {
  trace_call(0x80259320u);
  c->r[0]=R32(c->r[13]+0xFFFF97D8u); // 80259320
  c->r[3]=0u+0x80000000u; // 80259324
  c->r[6]=c->r[3]+0x00003180u; // 80259328
  cmps(c,0,(int32_t)c->r[0],0); // 8025932C
  if (crb(c,2)) { goto L_80259338; } // 80259330
  c->r[6]=R32(c->r[13]+0xFFFF8DB8u); // 80259334
L_80259338:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 80259338
  c->r[5]=c->r[13]+0xFFFF9800u; // 8025933C
  c->r[0]=0u+0x00000000u; // 80259340
  c->r[3]=c->r[13]+0xFFFF9800u; // 80259344
  W8(c->r[13]+0xFFFF9800u,c->r[4]); // 80259348
  c->r[4]=R8(c->r[6]+0x00000001u); // 8025934C
  W8(c->r[5]+0x00000001u,c->r[4]); // 80259350
  c->r[4]=R8(c->r[6]+0x00000002u); // 80259354
  W8(c->r[5]+0x00000002u,c->r[4]); // 80259358
  c->r[4]=R8(c->r[6]+0x00000003u); // 8025935C
  W8(c->r[5]+0x00000003u,c->r[4]); // 80259360
  W8(c->r[5]+0x00000004u,c->r[0]); // 80259364
  return; // 80259368
}

// OSGetAppType
void f_8025936C(Ctx* __restrict c) {
  trace_call(0x8025936Cu);
  c->r[0]=R32(c->r[13]+0xFFFF97D8u); // 8025936C
  cmps(c,0,(int32_t)c->r[0],0); // 80259370
  if (crb(c,2)) { goto L_80259380; } // 80259374
  c->r[3]=0u+0x00000040u; // 80259378
  return; // 8025937C
L_80259380:;
  c->r[3]=0u+0x80000000u; // 80259380
  c->r[3]=R8(c->r[3]+0x00003184u); // 80259384
  return; // 80259388
}

// __OSInitAlarm
void f_8025938C(Ctx* __restrict c) {
  trace_call(0x8025938Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025938C
  c->r[0]=c->lr; // 80259390
  c->r[3]=0u+0x00000008u; // 80259394
  W32(c->r[1]+0x00000014u,c->r[0]); // 80259398
  c->lr=0x802593A0u; f_802591A8(c); // 8025939C
  c->r[4]=0u+0x80260000u; // 802593A0
  c->r[4]=c->r[4]+0xFFFF9A7Cu; // 802593A4
  cmpu(c,0,c->r[3],c->r[4]); // 802593A8
  if (crb(c,2)) { goto L_802593D4; } // 802593AC
  c->r[0]=0u+0x00000000u; // 802593B0
  c->r[3]=c->r[13]+0xFFFF9820u; // 802593B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802593B8
  c->r[3]=0u+0x00000008u; // 802593BC
  W32(c->r[13]+0xFFFF9820u,c->r[0]); // 802593C0
  c->lr=0x802593C8u; f_80259194(c); // 802593C4
  c->r[3]=0u+0x80410000u; // 802593C8
  c->r[3]=c->r[3]+0x000025D8u; // 802593CC
  c->lr=0x802593D4u; f_8025FF50(c); // 802593D0
L_802593D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802593D4
  c->lr=c->r[0]; // 802593D8
  c->r[1]=c->r[1]+0x00000010u; // 802593DC
  return; // 802593E0
}

// OSCreateAlarm
void f_802593E4(Ctx* __restrict c) {
  trace_call(0x802593E4u);
  c->r[0]=0u+0x00000000u; // 802593E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 802593E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 802593EC
  return; // 802593F0
}

// InsertAlarm
void f_802593F4(Ctx* __restrict c) {
  trace_call(0x802593F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802593F4
  c->r[0]=c->lr; // 802593F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802593FC
  c->r[11]=c->r[1]+0x00000030u; // 80259400
  c->lr=0x80259408u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80259404
  c->r[4]=R32(c->r[3]+0x00000018u); // 80259408
  c->r[29]=0u+0x00000000u; // 8025940C
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 80259410
  c->r[30]=c->r[3]|c->r[3]; // 80259414
  c->r[0]=c->r[29]^0x80000000u; // 80259418
  c->r[4]=c->r[4]^0x80000000u; // 8025941C
  c->r[3]=addc(c,~c->r[8],c->r[29],1); // 80259420
  c->r[31]=c->r[7]|c->r[7]; // 80259424
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80259428
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8025942C
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80259430
  if (crb(c,2)) { goto L_802594B0; } // 80259434
  c->lr=0x8025943Cu; f_802627A0(c); // 80259438
  c->r[28]=R32(c->r[30]+0x00000020u); // 8025943C
  c->r[7]=c->r[3]^0x80000000u; // 80259440
  c->r[27]=R32(c->r[30]+0x00000024u); // 80259444
  c->r[0]=c->r[28]^0x80000000u; // 80259448
  c->r[5]=c->r[28]|c->r[28]; // 8025944C
  c->r[6]=addc(c,~c->r[4],c->r[27],1); // 80259450
  c->r[7]=addc(c,~c->r[7],c->r[0],c->xer_ca); // 80259454
  c->r[7]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80259458
  c->r[6]=c->r[27]|c->r[27]; // 8025945C
  c->r[7]=0u-c->r[7]; cr0(c,c->r[7]); // 80259460
  if (crb(c,2)) { goto L_802594B0; } // 80259464
  c->r[26]=R32(c->r[30]+0x00000018u); // 80259468
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 8025946C
  c->r[25]=R32(c->r[30]+0x0000001Cu); // 80259470
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 80259474
  c->r[5]=c->r[26]|c->r[26]; // 80259478
  c->r[6]=c->r[25]|c->r[25]; // 8025947C
  c->lr=0x80259484u; f_80289F44(c); // 80259480
  c->r[0]=0u+0x00000001u; // 80259484
  c->r[4]=addc(c,c->r[4],c->r[0],0); // 80259488
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[4])>>32); // 8025948C
  c->r[5]=addc(c,c->r[3],c->r[29],c->xer_ca); // 80259490
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[4]); // 80259494
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[4]); // 80259498
  c->r[3]=c->r[0]+c->r[3]; // 8025949C
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[5]); // 802594A0
  c->r[6]=addc(c,c->r[27],c->r[4],0); // 802594A4
  c->r[0]=c->r[3]+c->r[0]; // 802594A8
  c->r[5]=addc(c,c->r[28],c->r[0],c->xer_ca); // 802594AC
L_802594B0:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 802594B0
  c->r[0]=c->r[5]^0x80000000u; // 802594B4
  W32(c->r[30]+0x0000000Cu,c->r[6]); // 802594B8
  W32(c->r[30]+0x00000008u,c->r[5]); // 802594BC
  c->r[7]=R32(c->r[13]+0xFFFF9820u); // 802594C0
  goto L_80259588; // 802594C4
L_802594C8:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 802594C8
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 802594CC
  c->r[4]=c->r[3]^0x80000000u; // 802594D0
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 802594D4
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 802594D8
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 802594DC
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 802594E0
  if (crb(c,2)) { goto L_80259584; } // 802594E4
  c->r[0]=R32(c->r[7]+0x00000010u); // 802594E8
  W32(c->r[30]+0x00000010u,c->r[0]); // 802594EC
  W32(c->r[7]+0x00000010u,c->r[30]); // 802594F0
  c->r[3]=R32(c->r[30]+0x00000010u); // 802594F4
  W32(c->r[30]+0x00000014u,c->r[7]); // 802594F8
  cmps(c,0,(int32_t)c->r[3],0); // 802594FC
  if (crb(c,2)) { goto L_8025950C; } // 80259500
  W32(c->r[3]+0x00000014u,c->r[30]); // 80259504
  goto L_8025962C; // 80259508
L_8025950C:;
  W32(c->r[13]+0xFFFF9820u,c->r[30]); // 8025950C
  c->lr=0x80259514u; f_802627A0(c); // 80259510
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80259514
  c->r[7]=0u+0x00000000u; // 80259518
  c->r[0]=R32(c->r[30]+0x00000008u); // 8025951C
  c->r[6]=c->r[7]^0x80000000u; // 80259520
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 80259524
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 80259528
  c->r[5]=c->r[0]^0x80000000u; // 8025952C
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 80259530
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 80259534
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 80259538
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 8025953C
  if (crb(c,2)) { goto L_80259550; } // 80259540
  c->r[3]=0u+0x00000000u; // 80259544
  c->lr=0x8025954Cu; f_80257E30(c); // 80259548
  goto L_8025962C; // 8025954C
L_80259550:;
  c->r[4]=0u+0x80000000u; // 80259550
  c->r[3]=c->r[7]^0x80000000u; // 80259554
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 80259558
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 8025955C
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 80259560
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80259564
  if (crb(c,2)) { goto L_80259578; } // 80259568
  c->r[3]=c->r[8]|c->r[8]; // 8025956C
  c->lr=0x80259574u; f_80257E30(c); // 80259570
  goto L_8025962C; // 80259574
L_80259578:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 80259578
  c->lr=0x80259580u; f_80257E30(c); // 8025957C
  goto L_8025962C; // 80259580
L_80259584:;
  c->r[7]=R32(c->r[7]+0x00000014u); // 80259584
L_80259588:;
  cmps(c,0,(int32_t)c->r[7],0); // 80259588
  if (!crb(c,2)) { IRQCHK(c); goto L_802594C8; } // 8025958C
  c->r[31]=0u+0x00000000u; // 80259590
  c->r[3]=c->r[13]+0xFFFF9820u; // 80259594
  W32(c->r[30]+0x00000014u,c->r[31]); // 80259598
  c->r[4]=R32(c->r[3]+0x00000004u); // 8025959C
  W32(c->r[3]+0x00000004u,c->r[30]); // 802595A0
  cmps(c,0,(int32_t)c->r[4],0); // 802595A4
  W32(c->r[30]+0x00000010u,c->r[4]); // 802595A8
  if (crb(c,2)) { goto L_802595B8; } // 802595AC
  W32(c->r[4]+0x00000014u,c->r[30]); // 802595B0
  goto L_8025962C; // 802595B4
L_802595B8:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 802595B8
  W32(c->r[13]+0xFFFF9820u,c->r[30]); // 802595BC
  c->lr=0x802595C4u; f_802627A0(c); // 802595C0
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 802595C4
  c->r[6]=c->r[31]^0x80000000u; // 802595C8
  c->r[0]=R32(c->r[30]+0x00000008u); // 802595CC
  c->r[7]=addc(c,~c->r[4],c->r[5],1); // 802595D0
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 802595D4
  c->r[5]=c->r[0]^0x80000000u; // 802595D8
  c->r[0]=addc(c,~c->r[31],c->r[7],1); // 802595DC
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 802595E0
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 802595E4
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 802595E8
  if (crb(c,2)) { goto L_802595FC; } // 802595EC
  c->r[3]=0u+0x00000000u; // 802595F0
  c->lr=0x802595F8u; f_80257E30(c); // 802595F4
  goto L_8025962C; // 802595F8
L_802595FC:;
  c->r[4]=0u+0x80000000u; // 802595FC
  c->r[3]=c->r[31]^0x80000000u; // 80259600
  c->r[0]=addc(c,~c->r[4],c->r[7],1); // 80259604
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 80259608
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 8025960C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80259610
  if (crb(c,2)) { goto L_80259624; } // 80259614
  c->r[3]=c->r[7]|c->r[7]; // 80259618
  c->lr=0x80259620u; f_80257E30(c); // 8025961C
  goto L_8025962C; // 80259620
L_80259624:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 80259624
  c->lr=0x8025962Cu; f_80257E30(c); // 80259628
L_8025962C:;
  c->r[11]=c->r[1]+0x00000030u; // 8025962C
  c->lr=0x80259634u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80259630
  c->r[0]=R32(c->r[1]+0x00000034u); // 80259634
  c->lr=c->r[0]; // 80259638
  c->r[1]=c->r[1]+0x00000030u; // 8025963C
  return; // 80259640
}

// OSSetAlarm
void f_80259644(Ctx* __restrict c) {
  trace_call(0x80259644u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80259644
  c->r[0]=c->lr; // 80259648
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025964C
  c->r[11]=c->r[1]+0x00000020u; // 80259650
  c->lr=0x80259658u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80259654
  c->r[27]=c->r[3]|c->r[3]; // 80259658
  c->r[29]=c->r[5]|c->r[5]; // 8025965C
  c->r[28]=c->r[6]|c->r[6]; // 80259660
  c->r[30]=c->r[7]|c->r[7]; // 80259664
  c->lr=0x8025966Cu; f_8025EA10(c); // 80259668
  c->r[0]=0u+0x00000000u; // 8025966C
  c->r[31]=c->r[3]|c->r[3]; // 80259670
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 80259674
  W32(c->r[27]+0x00000018u,c->r[0]); // 80259678
  c->lr=0x80259680u; f_802627A0(c); // 8025967C
  c->r[6]=addc(c,c->r[28],c->r[4],0); // 80259680
  c->r[7]=c->r[30]|c->r[30]; // 80259684
  c->r[5]=addc(c,c->r[29],c->r[3],c->xer_ca); // 80259688
  c->r[3]=c->r[27]|c->r[27]; // 8025968C
  c->lr=0x80259694u; f_802593F4(c); // 80259690
  c->r[3]=c->r[31]|c->r[31]; // 80259694
  c->lr=0x8025969Cu; f_8025EA38(c); // 80259698
  c->r[11]=c->r[1]+0x00000020u; // 8025969C
  c->lr=0x802596A4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802596A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802596A4
  c->lr=c->r[0]; // 802596A8
  c->r[1]=c->r[1]+0x00000020u; // 802596AC
  return; // 802596B0
}

// OSSetPeriodicAlarm
void f_802596B4(Ctx* __restrict c) {
  trace_call(0x802596B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802596B4
  c->r[0]=c->lr; // 802596B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802596BC
  c->r[11]=c->r[1]+0x00000020u; // 802596C0
  c->lr=0x802596C8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802596C4
  c->r[26]=c->r[3]|c->r[3]; // 802596C8
  c->r[28]=c->r[5]|c->r[5]; // 802596CC
  c->r[27]=c->r[6]|c->r[6]; // 802596D0
  c->r[29]=c->r[7]|c->r[7]; // 802596D4
  c->r[31]=c->r[8]|c->r[8]; // 802596D8
  c->r[30]=c->r[9]|c->r[9]; // 802596DC
  c->lr=0x802596E4u; f_8025EA10(c); // 802596E0
  W32(c->r[26]+0x0000001Cu,c->r[31]); // 802596E4
  c->r[31]=c->r[3]|c->r[3]; // 802596E8
  c->r[4]=c->r[27]|c->r[27]; // 802596EC
  c->r[3]=c->r[28]|c->r[28]; // 802596F0
  W32(c->r[26]+0x00000018u,c->r[29]); // 802596F4
  c->lr=0x802596FCu; f_80262804(c); // 802596F8
  W32(c->r[26]+0x00000020u,c->r[3]); // 802596FC
  c->r[3]=c->r[26]|c->r[26]; // 80259700
  c->r[7]=c->r[30]|c->r[30]; // 80259704
  c->r[6]=0u+0x00000000u; // 80259708
  W32(c->r[26]+0x00000024u,c->r[4]); // 8025970C
  c->r[5]=0u+0x00000000u; // 80259710
  c->lr=0x80259718u; f_802593F4(c); // 80259714
  c->r[3]=c->r[31]|c->r[31]; // 80259718
  c->lr=0x80259720u; f_8025EA38(c); // 8025971C
  c->r[11]=c->r[1]+0x00000020u; // 80259720
  c->lr=0x80259728u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80259724
  c->r[0]=R32(c->r[1]+0x00000024u); // 80259728
  c->lr=c->r[0]; // 8025972C
  c->r[1]=c->r[1]+0x00000020u; // 80259730
  return; // 80259734
}

// OSCancelAlarm
void f_80259738(Ctx* __restrict c) {
  trace_call(0x80259738u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80259738
  c->r[0]=c->lr; // 8025973C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80259740
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80259744
  W32(c->r[1]+0x00000018u,c->r[30]); // 80259748
  c->r[30]=c->r[3]|c->r[3]; // 8025974C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80259750
  c->lr=0x80259758u; f_8025EA10(c); // 80259754
  c->r[0]=R32(c->r[30]+0x00000000u); // 80259758
  c->r[31]=c->r[3]|c->r[3]; // 8025975C
  cmps(c,0,(int32_t)c->r[0],0); // 80259760
  if (!crb(c,2)) { goto L_80259770; } // 80259764
  c->lr=0x8025976Cu; f_8025EA38(c); // 80259768
  goto L_80259834; // 8025976C
L_80259770:;
  c->r[29]=R32(c->r[30]+0x00000014u); // 80259770
  cmps(c,0,(int32_t)c->r[29],0); // 80259774
  if (!crb(c,2)) { goto L_8025978C; } // 80259778
  c->r[0]=R32(c->r[30]+0x00000010u); // 8025977C
  c->r[3]=c->r[13]+0xFFFF9820u; // 80259780
  W32(c->r[3]+0x00000004u,c->r[0]); // 80259784
  goto L_80259794; // 80259788
L_8025978C:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 8025978C
  W32(c->r[29]+0x00000010u,c->r[0]); // 80259790
L_80259794:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 80259794
  cmps(c,0,(int32_t)c->r[3],0); // 80259798
  if (crb(c,2)) { goto L_802597A8; } // 8025979C
  W32(c->r[3]+0x00000014u,c->r[29]); // 802597A0
  goto L_80259824; // 802597A4
L_802597A8:;
  cmps(c,0,(int32_t)c->r[29],0); // 802597A8
  W32(c->r[13]+0xFFFF9820u,c->r[29]); // 802597AC
  if (crb(c,2)) { goto L_80259824; } // 802597B0
  c->lr=0x802597B8u; f_802627A0(c); // 802597B4
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 802597B8
  c->r[7]=0u+0x00000000u; // 802597BC
  c->r[0]=R32(c->r[29]+0x00000008u); // 802597C0
  c->r[6]=c->r[7]^0x80000000u; // 802597C4
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 802597C8
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 802597CC
  c->r[5]=c->r[0]^0x80000000u; // 802597D0
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 802597D4
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 802597D8
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 802597DC
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 802597E0
  if (crb(c,2)) { goto L_802597F4; } // 802597E4
  c->r[3]=0u+0x00000000u; // 802597E8
  c->lr=0x802597F0u; f_80257E30(c); // 802597EC
  goto L_80259824; // 802597F0
L_802597F4:;
  c->r[4]=0u+0x80000000u; // 802597F4
  c->r[3]=c->r[7]^0x80000000u; // 802597F8
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 802597FC
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 80259800
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 80259804
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80259808
  if (crb(c,2)) { goto L_8025981C; } // 8025980C
  c->r[3]=c->r[8]|c->r[8]; // 80259810
  c->lr=0x80259818u; f_80257E30(c); // 80259814
  goto L_80259824; // 80259818
L_8025981C:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 8025981C
  c->lr=0x80259824u; f_80257E30(c); // 80259820
L_80259824:;
  c->r[0]=0u+0x00000000u; // 80259824
  c->r[3]=c->r[31]|c->r[31]; // 80259828
  W32(c->r[30]+0x00000000u,c->r[0]); // 8025982C
  c->lr=0x80259834u; f_8025EA38(c); // 80259830
L_80259834:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80259834
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80259838
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025983C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80259840
  c->lr=c->r[0]; // 80259844
  c->r[1]=c->r[1]+0x00000020u; // 80259848
  return; // 8025984C
}

// DecrementerExceptionCallback
void f_80259850(Ctx* __restrict c) {
  trace_call(0x80259850u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80259850
  c->r[0]=c->lr; // 80259854
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80259858
  W32(c->r[1]+0x000002DCu,c->r[31]); // 8025985C
  W32(c->r[1]+0x000002D8u,c->r[30]); // 80259860
  W32(c->r[1]+0x000002D4u,c->r[29]); // 80259864
  c->r[29]=c->r[4]|c->r[4]; // 80259868
  W32(c->r[1]+0x000002D0u,c->r[28]); // 8025986C
  c->lr=0x80259874u; f_802627A0(c); // 80259870
  c->r[31]=R32(c->r[13]+0xFFFF9820u); // 80259874
  c->r[28]=c->r[4]|c->r[4]; // 80259878
  c->r[30]=c->r[3]|c->r[3]; // 8025987C
  cmps(c,0,(int32_t)c->r[31],0); // 80259880
  if (!crb(c,2)) { goto L_80259890; } // 80259884
  c->r[3]=c->r[29]|c->r[29]; // 80259888
  c->lr=0x80259890u; f_8025AD2C(c); // 8025988C
L_80259890:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80259890
  c->r[0]=c->r[30]^0x80000000u; // 80259894
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 80259898
  c->r[4]=c->r[3]^0x80000000u; // 8025989C
  c->r[3]=addc(c,~c->r[5],c->r[28],1); // 802598A0
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 802598A4
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 802598A8
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 802598AC
  if (crb(c,2)) { goto L_8025992C; } // 802598B0
  c->lr=0x802598B8u; f_802627A0(c); // 802598B4
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 802598B8
  c->r[7]=0u+0x00000000u; // 802598BC
  c->r[0]=R32(c->r[31]+0x00000008u); // 802598C0
  c->r[6]=c->r[7]^0x80000000u; // 802598C4
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 802598C8
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 802598CC
  c->r[5]=c->r[0]^0x80000000u; // 802598D0
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 802598D4
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 802598D8
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 802598DC
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 802598E0
  if (crb(c,2)) { goto L_802598F4; } // 802598E4
  c->r[3]=0u+0x00000000u; // 802598E8
  c->lr=0x802598F0u; f_80257E30(c); // 802598EC
  goto L_80259924; // 802598F0
L_802598F4:;
  c->r[4]=0u+0x80000000u; // 802598F4
  c->r[3]=c->r[7]^0x80000000u; // 802598F8
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 802598FC
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 80259900
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 80259904
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80259908
  if (crb(c,2)) { goto L_8025991C; } // 8025990C
  c->r[3]=c->r[8]|c->r[8]; // 80259910
  c->lr=0x80259918u; f_80257E30(c); // 80259914
  goto L_80259924; // 80259918
L_8025991C:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 8025991C
  c->lr=0x80259924u; f_80257E30(c); // 80259920
L_80259924:;
  c->r[3]=c->r[29]|c->r[29]; // 80259924
  c->lr=0x8025992Cu; f_8025AD2C(c); // 80259928
L_8025992C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8025992C
  cmps(c,0,(int32_t)c->r[3],0); // 80259930
  W32(c->r[13]+0xFFFF9820u,c->r[3]); // 80259934
  if (!crb(c,2)) { goto L_8025994C; } // 80259938
  c->r[0]=0u+0x00000000u; // 8025993C
  c->r[3]=c->r[13]+0xFFFF9820u; // 80259940
  W32(c->r[3]+0x00000004u,c->r[0]); // 80259944
  goto L_80259954; // 80259948
L_8025994C:;
  c->r[0]=0u+0x00000000u; // 8025994C
  W32(c->r[3]+0x00000010u,c->r[0]); // 80259950
L_80259954:;
  c->r[30]=R32(c->r[31]+0x00000000u); // 80259954
  c->r[6]=0u+0x00000000u; // 80259958
  c->r[0]=c->r[6]^0x80000000u; // 8025995C
  W32(c->r[31]+0x00000000u,c->r[6]); // 80259960
  c->r[3]=R32(c->r[31]+0x00000018u); // 80259964
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 80259968
  c->r[4]=c->r[3]^0x80000000u; // 8025996C
  c->r[3]=addc(c,~c->r[5],c->r[6],1); // 80259970
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80259974
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80259978
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8025997C
  if (crb(c,2)) { goto L_80259998; } // 80259980
  c->r[3]=c->r[31]|c->r[31]; // 80259984
  c->r[7]=c->r[30]|c->r[30]; // 80259988
  c->r[6]=0u+0x00000000u; // 8025998C
  c->r[5]=0u+0x00000000u; // 80259990
  c->lr=0x80259998u; f_802593F4(c); // 80259994
L_80259998:;
  c->r[28]=R32(c->r[13]+0xFFFF9820u); // 80259998
  cmps(c,0,(int32_t)c->r[28],0); // 8025999C
  if (crb(c,2)) { goto L_80259A14; } // 802599A0
  c->lr=0x802599A8u; f_802627A0(c); // 802599A4
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 802599A8
  c->r[7]=0u+0x00000000u; // 802599AC
  c->r[0]=R32(c->r[28]+0x00000008u); // 802599B0
  c->r[6]=c->r[7]^0x80000000u; // 802599B4
  c->r[8]=addc(c,~c->r[4],c->r[5],1); // 802599B8
  c->r[0]=addc(c,~c->r[3],c->r[0],c->xer_ca); // 802599BC
  c->r[5]=c->r[0]^0x80000000u; // 802599C0
  c->r[0]=addc(c,~c->r[7],c->r[8],1); // 802599C4
  c->r[6]=addc(c,~c->r[6],c->r[5],c->xer_ca); // 802599C8
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 802599CC
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 802599D0
  if (crb(c,2)) { goto L_802599E4; } // 802599D4
  c->r[3]=0u+0x00000000u; // 802599D8
  c->lr=0x802599E0u; f_80257E30(c); // 802599DC
  goto L_80259A14; // 802599E0
L_802599E4:;
  c->r[4]=0u+0x80000000u; // 802599E4
  c->r[3]=c->r[7]^0x80000000u; // 802599E8
  c->r[0]=addc(c,~c->r[4],c->r[8],1); // 802599EC
  c->r[3]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 802599F0
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 802599F4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 802599F8
  if (crb(c,2)) { goto L_80259A0C; } // 802599FC
  c->r[3]=c->r[8]|c->r[8]; // 80259A00
  c->lr=0x80259A08u; f_80257E30(c); // 80259A04
  goto L_80259A14; // 80259A08
L_80259A0C:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 80259A0C
  c->lr=0x80259A14u; f_80257E30(c); // 80259A10
L_80259A14:;
  c->lr=0x80259A18u; f_802613A4(c); // 80259A14
  c->r[3]=c->r[1]+0x00000008u; // 80259A18
  c->lr=0x80259A20u; f_8025AE6C(c); // 80259A1C
  c->r[3]=c->r[1]+0x00000008u; // 80259A20
  c->lr=0x80259A28u; f_8025AC44(c); // 80259A24
  c->r[12]=c->r[30]|c->r[30]; // 80259A28
  c->r[3]=c->r[31]|c->r[31]; // 80259A2C
  c->r[4]=c->r[29]|c->r[29]; // 80259A30
  c->ctr=c->r[12]; // 80259A34
  if (true) { c->lr=0x80259A3Cu; dispatch(c,c->ctr); } // 80259A38
  c->r[3]=c->r[1]+0x00000008u; // 80259A3C
  c->lr=0x80259A44u; f_8025AE6C(c); // 80259A40
  c->r[3]=c->r[29]|c->r[29]; // 80259A44
  c->lr=0x80259A4Cu; f_8025AC44(c); // 80259A48
  c->lr=0x80259A50u; f_802613E0(c); // 80259A4C
  c->lr=0x80259A54u; f_802618EC(c); // 80259A50
  c->r[3]=c->r[29]|c->r[29]; // 80259A54
  c->lr=0x80259A5Cu; f_8025AD2C(c); // 80259A58
  c->r[0]=R32(c->r[1]+0x000002E4u); // 80259A5C
  c->r[31]=R32(c->r[1]+0x000002DCu); // 80259A60
  c->r[30]=R32(c->r[1]+0x000002D8u); // 80259A64
  c->r[29]=R32(c->r[1]+0x000002D4u); // 80259A68
  c->r[28]=R32(c->r[1]+0x000002D0u); // 80259A6C
  c->lr=c->r[0]; // 80259A70
  c->r[1]=c->r[1]+0x000002E0u; // 80259A74
  return; // 80259A78
}

// DecrementerExceptionHandler
void f_80259A7C(Ctx* __restrict c) {
  trace_call(0x80259A7Cu);
  W32(c->r[4]+0x00000000u,c->r[0]); // 80259A7C
  W32(c->r[4]+0x00000004u,c->r[1]); // 80259A80
  W32(c->r[4]+0x00000008u,c->r[2]); // 80259A84
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80259A88
  c->r[0]=mfspr(c,913); // 80259A8C
  W32(c->r[4]+0x000001A8u,c->r[0]); // 80259A90
  c->r[0]=mfspr(c,914); // 80259A94
  W32(c->r[4]+0x000001ACu,c->r[0]); // 80259A98
  c->r[0]=mfspr(c,915); // 80259A9C
  W32(c->r[4]+0x000001B0u,c->r[0]); // 80259AA0
  c->r[0]=mfspr(c,916); // 80259AA4
  W32(c->r[4]+0x000001B4u,c->r[0]); // 80259AA8
  c->r[0]=mfspr(c,917); // 80259AAC
  W32(c->r[4]+0x000001B8u,c->r[0]); // 80259AB0
  c->r[0]=mfspr(c,918); // 80259AB4
  W32(c->r[4]+0x000001BCu,c->r[0]); // 80259AB8
  c->r[0]=mfspr(c,919); // 80259ABC
  W32(c->r[4]+0x000001C0u,c->r[0]); // 80259AC0
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 80259AC4
  f_80259850(c); return; // 80259AC8
}

// OSSetAlarmTag
void f_80259ACC(Ctx* __restrict c) {
  trace_call(0x80259ACCu);
  W32(c->r[3]+0x00000004u,c->r[4]); // 80259ACC
  return; // 80259AD0
}

// OnReset
void f_80259AD4(Ctx* __restrict c) {
  trace_call(0x80259AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80259AD4
  c->r[0]=c->lr; // 80259AD8
  cmps(c,0,(int32_t)c->r[3],0); // 80259ADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80259AE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80259AE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80259AE8
  if (crb(c,2)) { goto L_80259B44; } // 80259AEC
  c->r[31]=R32(c->r[13]+0xFFFF9820u); // 80259AF0
  cmps(c,0,(int32_t)c->r[31],0); // 80259AF4
  if (crb(c,2)) { goto L_80259B04; } // 80259AF8
  c->r[30]=R32(c->r[31]+0x00000014u); // 80259AFC
  goto L_80259B3C; // 80259B00
L_80259B04:;
  c->r[30]=0u+0x00000000u; // 80259B04
  goto L_80259B3C; // 80259B08
L_80259B0C:;
  c->r[3]=c->r[31]|c->r[31]; // 80259B0C
  c->lr=0x80259B14u; f_8026AD64(c); // 80259B10
  cmps(c,0,(int32_t)c->r[3],0); // 80259B14
  if (!crb(c,2)) { goto L_80259B24; } // 80259B18
  c->r[3]=c->r[31]|c->r[31]; // 80259B1C
  c->lr=0x80259B24u; f_80259738(c); // 80259B20
L_80259B24:;
  cmps(c,0,(int32_t)c->r[30],0); // 80259B24
  c->r[31]=c->r[30]|c->r[30]; // 80259B28
  if (crb(c,2)) { goto L_80259B38; } // 80259B2C
  c->r[30]=R32(c->r[30]+0x00000014u); // 80259B30
  goto L_80259B3C; // 80259B34
L_80259B38:;
  c->r[30]=0u+0x00000000u; // 80259B38
L_80259B3C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80259B3C
  if (!crb(c,2)) { IRQCHK(c); goto L_80259B0C; } // 80259B40
L_80259B44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80259B44
  c->r[3]=0u+0x00000001u; // 80259B48
  c->r[30]=R32(c->r[1]+0x00000008u); // 80259B4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80259B50
  c->lr=c->r[0]; // 80259B54
  c->r[1]=c->r[1]+0x00000010u; // 80259B58
  return; // 80259B5C
}

// OSSetAlarmUserData
void f_80259B60(Ctx* __restrict c) {
  trace_call(0x80259B60u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 80259B60
  return; // 80259B64
}

// OSGetAlarmUserData
void f_80259B68(Ctx* __restrict c) {
  trace_call(0x80259B68u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 80259B68
  return; // 80259B6C
}

// DLInsert
void f_80259B70(Ctx* __restrict c) {
  trace_call(0x80259B70u);
  c->r[7]=c->r[3]|c->r[3]; // 80259B70
  c->r[6]=0u+0x00000000u; // 80259B74
  goto L_80259B8C; // 80259B78
L_80259B7C:;
  cmpu(c,0,c->r[4],c->r[7]); // 80259B7C
  if (!crb(c,1)) { goto L_80259B94; } // 80259B80
  c->r[6]=c->r[7]|c->r[7]; // 80259B84
  c->r[7]=R32(c->r[7]+0x00000004u); // 80259B88
L_80259B8C:;
  cmps(c,0,(int32_t)c->r[7],0); // 80259B8C
  if (!crb(c,2)) { IRQCHK(c); goto L_80259B7C; } // 80259B90
L_80259B94:;
  cmps(c,0,(int32_t)c->r[7],0); // 80259B94
  W32(c->r[4]+0x00000004u,c->r[7]); // 80259B98
  W32(c->r[4]+0x00000000u,c->r[6]); // 80259B9C
  if (crb(c,2)) { goto L_80259BD8; } // 80259BA0
  W32(c->r[7]+0x00000000u,c->r[4]); // 80259BA4
  c->r[5]=R32(c->r[4]+0x00000008u); // 80259BA8
  c->r[0]=c->r[4]+c->r[5]; // 80259BAC
  cmpu(c,0,c->r[0],c->r[7]); // 80259BB0
  if (!crb(c,2)) { goto L_80259BD8; } // 80259BB4
  c->r[0]=R32(c->r[7]+0x00000008u); // 80259BB8
  c->r[0]=c->r[5]+c->r[0]; // 80259BBC
  W32(c->r[4]+0x00000008u,c->r[0]); // 80259BC0
  c->r[7]=R32(c->r[7]+0x00000004u); // 80259BC4
  cmps(c,0,(int32_t)c->r[7],0); // 80259BC8
  W32(c->r[4]+0x00000004u,c->r[7]); // 80259BCC
  if (crb(c,2)) { goto L_80259BD8; } // 80259BD0
  W32(c->r[7]+0x00000000u,c->r[4]); // 80259BD4
L_80259BD8:;
  cmps(c,0,(int32_t)c->r[6],0); // 80259BD8
  if (crb(c,2)) { goto L_80259C14; } // 80259BDC
  W32(c->r[6]+0x00000004u,c->r[4]); // 80259BE0
  c->r[5]=R32(c->r[6]+0x00000008u); // 80259BE4
  c->r[0]=c->r[6]+c->r[5]; // 80259BE8
  cmpu(c,0,c->r[0],c->r[4]); // 80259BEC
  if (!crb(c,2)) return; // 80259BF0
  c->r[0]=R32(c->r[4]+0x00000008u); // 80259BF4
  cmps(c,0,(int32_t)c->r[7],0); // 80259BF8
  c->r[0]=c->r[5]+c->r[0]; // 80259BFC
  W32(c->r[6]+0x00000008u,c->r[0]); // 80259C00
  W32(c->r[6]+0x00000004u,c->r[7]); // 80259C04
  if (crb(c,2)) return; // 80259C08
  W32(c->r[7]+0x00000000u,c->r[6]); // 80259C0C
  return; // 80259C10
L_80259C14:;
  c->r[3]=c->r[4]|c->r[4]; // 80259C14
  return; // 80259C18
}

// OSAllocFromHeap
void f_80259C1C(Ctx* __restrict c) {
  trace_call(0x80259C1Cu);
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80259C1C
  c->r[5]=R32(c->r[13]+0xFFFF9834u); // 80259C20
  c->r[0]=c->r[4]+0x0000003Fu; // 80259C24
  c->r[5]=c->r[5]+c->r[3]; // 80259C28
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80259C2C
  c->r[3]=R32(c->r[5]+0x00000004u); // 80259C30
  c->r[6]=c->r[3]|c->r[3]; // 80259C34
  goto L_80259C4C; // 80259C38
L_80259C3C:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 80259C3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80259C40
  if (!crb(c,1)) { goto L_80259C54; } // 80259C44
  c->r[6]=R32(c->r[6]+0x00000004u); // 80259C48
L_80259C4C:;
  cmps(c,0,(int32_t)c->r[6],0); // 80259C4C
  if (!crb(c,2)) { IRQCHK(c); goto L_80259C3C; } // 80259C50
L_80259C54:;
  cmps(c,0,(int32_t)c->r[6],0); // 80259C54
  if (!crb(c,2)) { goto L_80259C64; } // 80259C58
  c->r[3]=0u+0x00000000u; // 80259C5C
  return; // 80259C60
L_80259C64:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 80259C64
  c->r[0]=c->r[0]-c->r[4]; // 80259C68
  cmpu(c,0,c->r[0],0x00000040u); // 80259C6C
  if (!crb(c,0)) { goto L_80259CAC; } // 80259C70
  c->r[4]=R32(c->r[6]+0x00000004u); // 80259C74
  cmps(c,0,(int32_t)c->r[4],0); // 80259C78
  if (crb(c,2)) { goto L_80259C88; } // 80259C7C
  c->r[0]=R32(c->r[6]+0x00000000u); // 80259C80
  W32(c->r[4]+0x00000000u,c->r[0]); // 80259C84
L_80259C88:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 80259C88
  cmps(c,0,(int32_t)c->r[4],0); // 80259C8C
  if (!crb(c,2)) { goto L_80259C9C; } // 80259C90
  c->r[3]=R32(c->r[6]+0x00000004u); // 80259C94
  goto L_80259CA4; // 80259C98
L_80259C9C:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 80259C9C
  W32(c->r[4]+0x00000004u,c->r[0]); // 80259CA0
L_80259CA4:;
  W32(c->r[5]+0x00000004u,c->r[3]); // 80259CA4
  goto L_80259CEC; // 80259CA8
L_80259CAC:;
  W32(c->r[6]+0x00000008u,c->r[4]); // 80259CAC
  c->r[4]=c->r[6]+c->r[4]; // 80259CB0
  W32(c->r[4]+0x00000008u,c->r[0]); // 80259CB4
  c->r[0]=R32(c->r[6]+0x00000000u); // 80259CB8
  W32(c->r[4]+0x00000000u,c->r[0]); // 80259CBC
  c->r[3]=R32(c->r[6]+0x00000004u); // 80259CC0
  cmps(c,0,(int32_t)c->r[3],0); // 80259CC4
  W32(c->r[4]+0x00000004u,c->r[3]); // 80259CC8
  if (crb(c,2)) { goto L_80259CD4; } // 80259CCC
  W32(c->r[3]+0x00000000u,c->r[4]); // 80259CD0
L_80259CD4:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80259CD4
  cmps(c,0,(int32_t)c->r[3],0); // 80259CD8
  if (crb(c,2)) { goto L_80259CE8; } // 80259CDC
  W32(c->r[3]+0x00000004u,c->r[4]); // 80259CE0
  goto L_80259CEC; // 80259CE4
L_80259CE8:;
  W32(c->r[5]+0x00000004u,c->r[4]); // 80259CE8
L_80259CEC:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 80259CEC
  c->r[0]=0u+0x00000000u; // 80259CF0
  W32(c->r[6]+0x00000004u,c->r[3]); // 80259CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80259CF8
  W32(c->r[6]+0x00000000u,c->r[0]); // 80259CFC
  if (crb(c,2)) { goto L_80259D08; } // 80259D00
  W32(c->r[3]+0x00000000u,c->r[6]); // 80259D04
L_80259D08:;
  W32(c->r[5]+0x00000008u,c->r[6]); // 80259D08
  c->r[3]=c->r[6]+0x00000020u; // 80259D0C
  return; // 80259D10
}

// OSFreeToHeap
void f_80259D14(Ctx* __restrict c) {
  trace_call(0x80259D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80259D14
  c->r[0]=c->lr; // 80259D18
  c->r[4]=c->r[4]+0xFFFFFFE0u; // 80259D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80259D20
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80259D24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80259D28
  c->r[5]=R32(c->r[13]+0xFFFF9834u); // 80259D2C
  c->r[6]=R32(c->r[4]+0x00000004u); // 80259D30
  c->r[31]=c->r[5]+c->r[0]; // 80259D34
  cmps(c,0,(int32_t)c->r[6],0); // 80259D38
  c->r[3]=R32(c->r[31]+0x00000008u); // 80259D3C
  if (crb(c,2)) { goto L_80259D4C; } // 80259D40
  c->r[0]=R32(c->r[4]+0x00000000u); // 80259D44
  W32(c->r[6]+0x00000000u,c->r[0]); // 80259D48
L_80259D4C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 80259D4C
  cmps(c,0,(int32_t)c->r[5],0); // 80259D50
  if (!crb(c,2)) { goto L_80259D60; } // 80259D54
  c->r[3]=R32(c->r[4]+0x00000004u); // 80259D58
  goto L_80259D68; // 80259D5C
L_80259D60:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 80259D60
  W32(c->r[5]+0x00000004u,c->r[0]); // 80259D64
L_80259D68:;
  W32(c->r[31]+0x00000008u,c->r[3]); // 80259D68
  c->r[3]=R32(c->r[31]+0x00000004u); // 80259D6C
  c->lr=0x80259D74u; f_80259B70(c); // 80259D70
  W32(c->r[31]+0x00000004u,c->r[3]); // 80259D74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80259D78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80259D7C
  c->lr=c->r[0]; // 80259D80
  c->r[1]=c->r[1]+0x00000010u; // 80259D84
  return; // 80259D88
}

// OSSetCurrentHeap
void f_80259D8C(Ctx* __restrict c) {
  trace_call(0x80259D8Cu);
  c->r[0]=R32(c->r[13]+0xFFFF8DC0u); // 80259D8C
  W32(c->r[13]+0xFFFF8DC0u,c->r[3]); // 80259D90
  c->r[3]=c->r[0]|c->r[0]; // 80259D94
  return; // 80259D98
}

// OSInitAlloc
void f_80259D9C(Ctx* __restrict c) {
  trace_call(0x80259D9Cu);
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 80259D9C
  W32(c->r[13]+0xFFFF9834u,c->r[3]); // 80259DA0
  c->r[8]=0u+0x00000000u; // 80259DA4
  W32(c->r[13]+0xFFFF9830u,c->r[5]); // 80259DA8
  c->r[6]=0u+0x00000000u; // 80259DAC
  c->r[5]=0u+0xFFFFFFFFu; // 80259DB0
  c->r[3]=0u+0x00000000u; // 80259DB4
  goto L_80259DD8; // 80259DB8
L_80259DBC:;
  c->r[0]=R32(c->r[13]+0xFFFF9834u); // 80259DBC
  c->r[8]=c->r[8]+0x00000001u; // 80259DC0
  W32(c->r[6]+c->r[0],c->r[5]); // 80259DC4
  c->r[9]=c->r[0]+c->r[6]; // 80259DC8
  c->r[6]=c->r[6]+0x0000000Cu; // 80259DCC
  W32(c->r[9]+0x00000008u,c->r[3]); // 80259DD0
  W32(c->r[9]+0x00000004u,c->r[3]); // 80259DD4
L_80259DD8:;
  c->r[0]=R32(c->r[13]+0xFFFF9830u); // 80259DD8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 80259DDC
  if (crb(c,0)) { IRQCHK(c); goto L_80259DBC; } // 80259DE0
  c->r[3]=R32(c->r[13]+0xFFFF9834u); // 80259DE4
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80259DE8
  c->r[4]=0u+0xFFFFFFFFu; // 80259DEC
  W32(c->r[13]+0xFFFF9828u,c->r[0]); // 80259DF0
  c->r[3]=c->r[3]+c->r[7]; // 80259DF4
  c->r[0]=c->r[3]+0x0000001Fu; // 80259DF8
  W32(c->r[13]+0xFFFF8DC0u,c->r[4]); // 80259DFC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80259E00
  W32(c->r[13]+0xFFFF982Cu,c->r[3]); // 80259E04
  return; // 80259E08
}

// OSCreateHeap
void f_80259E0C(Ctx* __restrict c) {
  trace_call(0x80259E0Cu);
  c->r[6]=R32(c->r[13]+0xFFFF9830u); // 80259E0C
  c->r[0]=c->r[3]+0x0000001Fu; // 80259E10
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80259E14
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80259E18
  c->r[5]=R32(c->r[13]+0xFFFF9834u); // 80259E1C
  c->r[3]=0u+0x00000000u; // 80259E20
  c->ctr=c->r[6]; // 80259E24
  cmps(c,0,(int32_t)c->r[6],0); // 80259E28
  if (!crb(c,1)) { goto L_80259E70; } // 80259E2C
L_80259E30:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80259E30
  cmps(c,0,(int32_t)c->r[0],0); // 80259E34
  if (!crb(c,0)) { goto L_80259E64; } // 80259E38
  c->r[0]=c->r[4]-c->r[7]; // 80259E3C
  c->r[4]=0u+0x00000000u; // 80259E40
  W32(c->r[5]+0x00000000u,c->r[0]); // 80259E44
  W32(c->r[7]+0x00000000u,c->r[4]); // 80259E48
  W32(c->r[7]+0x00000004u,c->r[4]); // 80259E4C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80259E50
  W32(c->r[7]+0x00000008u,c->r[0]); // 80259E54
  W32(c->r[5]+0x00000004u,c->r[7]); // 80259E58
  W32(c->r[5]+0x00000008u,c->r[4]); // 80259E5C
  return; // 80259E60
L_80259E64:;
  c->r[5]=c->r[5]+0x0000000Cu; // 80259E64
  c->r[3]=c->r[3]+0x00000001u; // 80259E68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80259E30; } // 80259E6C
L_80259E70:;
  c->r[3]=0u+0xFFFFFFFFu; // 80259E70
  return; // 80259E74
}

// OSGetMEM1ArenaHi
void f_80259E78(Ctx* __restrict c) {
  trace_call(0x80259E78u);
  c->r[3]=R32(c->r[13]+0xFFFF9838u); // 80259E78
  return; // 80259E7C
}

// OSGetMEM2ArenaHi
void f_80259E80(Ctx* __restrict c) {
  trace_call(0x80259E80u);
  c->r[3]=R32(c->r[13]+0xFFFF983Cu); // 80259E80
  return; // 80259E84
}

// OSGetArenaHi
void f_80259E88(Ctx* __restrict c) {
  trace_call(0x80259E88u);
  c->r[3]=R32(c->r[13]+0xFFFF9838u); // 80259E88
  return; // 80259E8C
}

// OSGetMEM1ArenaLo
void f_80259E90(Ctx* __restrict c) {
  trace_call(0x80259E90u);
  c->r[3]=R32(c->r[13]+0xFFFF8DC8u); // 80259E90
  return; // 80259E94
}

// OSGetMEM2ArenaLo
void f_80259E98(Ctx* __restrict c) {
  trace_call(0x80259E98u);
  c->r[3]=R32(c->r[13]+0xFFFF8DCCu); // 80259E98
  return; // 80259E9C
}

// OSGetArenaLo
void f_80259EA0(Ctx* __restrict c) {
  trace_call(0x80259EA0u);
  c->r[3]=R32(c->r[13]+0xFFFF8DC8u); // 80259EA0
  return; // 80259EA4
}

// OSSetMEM1ArenaHi
void f_80259EA8(Ctx* __restrict c) {
  trace_call(0x80259EA8u);
  W32(c->r[13]+0xFFFF9838u,c->r[3]); // 80259EA8
  return; // 80259EAC
}

// OSSetMEM2ArenaHi
void f_80259EB0(Ctx* __restrict c) {
  trace_call(0x80259EB0u);
  W32(c->r[13]+0xFFFF983Cu,c->r[3]); // 80259EB0
  return; // 80259EB4
}

// OSSetArenaHi
void f_80259EB8(Ctx* __restrict c) {
  trace_call(0x80259EB8u);
  W32(c->r[13]+0xFFFF9838u,c->r[3]); // 80259EB8
  return; // 80259EBC
}

// OSSetMEM1ArenaLo
void f_80259EC0(Ctx* __restrict c) {
  trace_call(0x80259EC0u);
  W32(c->r[13]+0xFFFF8DC8u,c->r[3]); // 80259EC0
  return; // 80259EC4
}

// OSSetMEM2ArenaLo
void f_80259EC8(Ctx* __restrict c) {
  trace_call(0x80259EC8u);
  W32(c->r[13]+0xFFFF8DCCu,c->r[3]); // 80259EC8
  return; // 80259ECC
}

// OSSetArenaLo
void f_80259ED0(Ctx* __restrict c) {
  trace_call(0x80259ED0u);
  W32(c->r[13]+0xFFFF8DC8u,c->r[3]); // 80259ED0
  return; // 80259ED4
}

// OSAllocFromMEM1ArenaLo
void f_80259ED8(Ctx* __restrict c) {
  trace_call(0x80259ED8u);
  c->r[0]=R32(c->r[13]+0xFFFF8DC8u); // 80259ED8
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 80259EDC
  c->r[6]=~(c->r[5]|c->r[5]); // 80259EE0
  c->r[5]=c->r[4]+c->r[0]; // 80259EE4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80259EE8
  c->r[0]=c->r[6]&c->r[0]; // 80259EEC
  c->r[3]=c->r[0]+c->r[3]; // 80259EF0
  c->r[4]=c->r[3]+c->r[4]; // 80259EF4
  c->r[3]=c->r[0]|c->r[0]; // 80259EF8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80259EFC
  c->r[0]=c->r[6]&c->r[0]; // 80259F00
  W32(c->r[13]+0xFFFF8DC8u,c->r[0]); // 80259F04
  return; // 80259F08
}

// __AIClockInit
void f_80259F0C(Ctx* __restrict c) {
  trace_call(0x80259F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80259F0C
  c->r[0]=c->lr; // 80259F10
  c->r[4]=0u+0xCD800000u; // 80259F14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80259F18
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 80259F1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80259F20
  c->r[31]=c->r[3]|c->r[3]; // 80259F24
  W32(c->r[1]+0x00000018u,c->r[30]); // 80259F28
  W32(c->r[1]+0x00000014u,c->r[29]); // 80259F2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80259F30
  c->r[5]=R32(c->r[4]+0x00000180u); // 80259F34
  c->r[5]=rotl(c->r[5],0)&0xFFFFFEFFu; // 80259F38
  c->r[5]=c->r[5]|c->r[0]; // 80259F3C
  c->r[0]=rotl(c->r[5],0)&0xFFFFFF7Fu; // 80259F40
  W32(c->r[4]+0x00000180u,c->r[0]); // 80259F44
  c->r[0]=R32(c->r[4]+0x000001D0u); // 80259F48
  c->r[0]=rotl(c->r[0],0)&0x3FFFFFFFu; // 80259F4C
  W32(c->r[4]+0x000001D0u,c->r[0]); // 80259F50
  c->lr=0x80259F58u; f_80262798(c); // 80259F54
  c->r[4]=0u+0x431C0000u; // 80259F58
  c->r[28]=c->r[3]|c->r[3]; // 80259F5C
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80259F60
  c->r[29]=0u+0x80000000u; // 80259F64
L_80259F68:;
  c->lr=0x80259F6Cu; f_80262798(c); // 80259F68
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80259F6C
  c->r[3]=c->r[3]-c->r[28]; // 80259F70
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80259F74
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80259F78
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 80259F7C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 80259F80
  c->r[0]=divwu(c->r[3],c->r[0]); // 80259F84
  cmpu(c,0,c->r[0],0x00000064u); // 80259F88
  if (crb(c,0)) { IRQCHK(c); goto L_80259F68; } // 80259F8C
  cmps(c,0,(int32_t)c->r[31],0); // 80259F90
  if (!crb(c,2)) { goto L_80259FC0; } // 80259F94
  c->r[4]=0u+0xCD800000u; // 80259F98
  c->r[3]=0u+0xF8040000u; // 80259F9C
  c->r[5]=R32(c->r[4]+0x000001CCu); // 80259FA0
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 80259FA4
  c->r[3]=rotl(c->r[5],0)&0xFFFC003Fu; // 80259FA8
  c->r[3]=c->r[3]|0x00000FC0u; // 80259FAC
  c->r[0]=c->r[3]&c->r[0]; // 80259FB0
  c->r[0]=c->r[0]|0x04640000u; // 80259FB4
  W32(c->r[4]+0x000001CCu,c->r[0]); // 80259FB8
  goto L_80259FE4; // 80259FBC
L_80259FC0:;
  c->r[3]=0u+0xCD800000u; // 80259FC0
  c->r[0]=R32(c->r[3]+0x000001CCu); // 80259FC4
  c->r[0]=rotl(c->r[0],0)&0xFFFC003Fu; // 80259FC8
  c->r[0]=c->r[0]|0x0000FFC0u; // 80259FCC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC0u; // 80259FD0
  c->r[0]=c->r[0]|0x0000000Eu; // 80259FD4
  c->r[0]=rotl(c->r[0],0)&0xF803FFFFu; // 80259FD8
  c->r[0]=c->r[0]|0x04B00000u; // 80259FDC
  W32(c->r[3]+0x000001CCu,c->r[0]); // 80259FE0
L_80259FE4:;
  c->lr=0x80259FE8u; f_80262798(c); // 80259FE4
  c->r[4]=0u+0x431C0000u; // 80259FE8
  c->r[31]=c->r[3]|c->r[3]; // 80259FEC
  c->r[30]=c->r[4]+0xFFFFDE83u; // 80259FF0
  c->r[29]=0u+0x80000000u; // 80259FF4
L_80259FF8:;
  c->lr=0x80259FFCu; f_80262798(c); // 80259FF8
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80259FFC
  c->r[3]=c->r[3]-c->r[31]; // 8025A000
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8025A004
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8025A008
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8025A00C
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8025A010
  c->r[0]=divwu(c->r[3],c->r[0]); // 8025A014
  cmpu(c,0,c->r[0],0x00000064u); // 8025A018
  if (crb(c,0)) { IRQCHK(c); goto L_80259FF8; } // 8025A01C
  c->r[3]=0u+0xCD800000u; // 8025A020
  c->r[0]=R32(c->r[3]+0x000001D0u); // 8025A024
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 8025A028
  W32(c->r[3]+0x000001D0u,c->r[0]); // 8025A02C
  c->lr=0x8025A034u; f_80262798(c); // 8025A030
  c->r[4]=0u+0x431C0000u; // 8025A034
  c->r[31]=c->r[3]|c->r[3]; // 8025A038
  c->r[30]=c->r[4]+0xFFFFDE83u; // 8025A03C
  c->r[29]=0u+0x80000000u; // 8025A040
L_8025A044:;
  c->lr=0x8025A048u; f_80262798(c); // 8025A044
  c->r[0]=R32(c->r[29]+0x000000F8u); // 8025A048
  c->r[3]=c->r[3]-c->r[31]; // 8025A04C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8025A050
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8025A054
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8025A058
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8025A05C
  c->r[0]=divwu(c->r[3],c->r[0]); // 8025A060
  cmpu(c,0,c->r[0],0x000003E8u); // 8025A064
  if (crb(c,0)) { IRQCHK(c); goto L_8025A044; } // 8025A068
  c->r[3]=0u+0xCD800000u; // 8025A06C
  c->r[0]=R32(c->r[3]+0x000001D0u); // 8025A070
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 8025A074
  c->r[0]=c->r[0]|0x40000000u; // 8025A078
  W32(c->r[3]+0x000001D0u,c->r[0]); // 8025A07C
  c->lr=0x8025A084u; f_80262798(c); // 8025A080
  c->r[4]=0u+0x431C0000u; // 8025A084
  c->r[31]=c->r[3]|c->r[3]; // 8025A088
  c->r[30]=c->r[4]+0xFFFFDE83u; // 8025A08C
  c->r[29]=0u+0x80000000u; // 8025A090
L_8025A094:;
  c->lr=0x8025A098u; f_80262798(c); // 8025A094
  c->r[0]=R32(c->r[29]+0x000000F8u); // 8025A098
  c->r[3]=c->r[3]-c->r[31]; // 8025A09C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8025A0A0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8025A0A4
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8025A0A8
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8025A0AC
  c->r[0]=divwu(c->r[3],c->r[0]); // 8025A0B0
  cmpu(c,0,c->r[0],0x000003E8u); // 8025A0B4
  if (crb(c,0)) { IRQCHK(c); goto L_8025A094; } // 8025A0B8
  c->r[3]=0u+0xCD800000u; // 8025A0BC
  c->r[0]=R32(c->r[3]+0x000001D0u); // 8025A0C0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 8025A0C4
  c->r[0]=c->r[0]|0x80000000u; // 8025A0C8
  W32(c->r[3]+0x000001D0u,c->r[0]); // 8025A0CC
  c->lr=0x8025A0D4u; f_80262798(c); // 8025A0D0
  c->r[4]=0u+0x431C0000u; // 8025A0D4
  c->r[29]=c->r[3]|c->r[3]; // 8025A0D8
  c->r[30]=c->r[4]+0xFFFFDE83u; // 8025A0DC
  c->r[31]=0u+0x80000000u; // 8025A0E0
L_8025A0E4:;
  c->lr=0x8025A0E8u; f_80262798(c); // 8025A0E4
  c->r[0]=R32(c->r[31]+0x000000F8u); // 8025A0E8
  c->r[3]=c->r[3]-c->r[29]; // 8025A0EC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8025A0F0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8025A0F4
  c->r[0]=(uint32_t)(((uint64_t)c->r[30]*(uint64_t)c->r[0])>>32); // 8025A0F8
  c->r[0]=rotl(c->r[0],17)&0x0001FFFFu; // 8025A0FC
  c->r[0]=divwu(c->r[3],c->r[0]); // 8025A100
  cmpu(c,0,c->r[0],0x000003E8u); // 8025A104
  if (crb(c,0)) { IRQCHK(c); goto L_8025A0E4; } // 8025A108
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025A10C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025A110
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025A114
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025A118
  c->r[28]=R32(c->r[1]+0x00000010u); // 8025A11C
  c->lr=c->r[0]; // 8025A120
  c->r[1]=c->r[1]+0x00000020u; // 8025A124
  return; // 8025A128
}

// __OSInitAudioSystem
void f_8025A12C(Ctx* __restrict c) {
  stub_log(0x8025A12Cu);  return;
}

// __OSStopAudioSystem
void f_8025A2F4(Ctx* __restrict c) {
  trace_call(0x8025A2F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025A2F4
  c->r[0]=c->lr; // 8025A2F8
  c->r[3]=0u+0xCC000000u; // 8025A2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025A300
  c->r[0]=0u+0x00000804u; // 8025A304
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025A308
  W16(c->r[3]+0x0000500Au,c->r[0]); // 8025A30C
  c->r[0]=R16(c->r[3]+0x00005036u); // 8025A310
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 8025A314
  W16(c->r[3]+0x00005036u,c->r[0]); // 8025A318
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8025A31C
  goto L_8025A328; // 8025A320
L_8025A324:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8025A324
L_8025A328:;
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 8025A328
  if (!crb(c,2)) { IRQCHK(c); goto L_8025A324; } // 8025A32C
  c->r[3]=0u+0xCC000000u; // 8025A330
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8025A334
  goto L_8025A340; // 8025A338
L_8025A33C:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8025A33C
L_8025A340:;
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 8025A340
  if (!crb(c,2)) { IRQCHK(c); goto L_8025A33C; } // 8025A344
  c->r[4]=0u+0xCC000000u; // 8025A348
  c->r[0]=0u+0x000008ACu; // 8025A34C
  W16(c->r[4]+0x0000500Au,c->r[0]); // 8025A350
  c->r[0]=0u+0x00000000u; // 8025A354
  W16(c->r[4]+0x00005000u,c->r[0]); // 8025A358
L_8025A35C:;
  c->r[3]=R16(c->r[4]+0x00005004u); // 8025A35C
  c->r[0]=R16(c->r[4]+0x00005006u); // 8025A360
  c->r[0]=(rotl(c->r[3],16)&0xFFFF0000u)|(c->r[0]&~0xFFFF0000u); // 8025A364
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 8025A368
  if (!crb(c,2)) { IRQCHK(c); goto L_8025A35C; } // 8025A36C
  c->lr=0x8025A374u; f_80262798(c); // 8025A370
  c->r[31]=c->r[3]|c->r[3]; // 8025A374
L_8025A378:;
  c->lr=0x8025A37Cu; f_80262798(c); // 8025A378
  c->r[0]=c->r[3]-c->r[31]; // 8025A37C
  cmps(c,0,(int32_t)c->r[0],44); // 8025A380
  if (crb(c,0)) { IRQCHK(c); goto L_8025A378; } // 8025A384
  c->r[3]=0u+0xCC000000u; // 8025A388
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8025A38C
  c->r[0]=c->r[0]|0x00000001u; // 8025A390
  W16(c->r[3]+0x0000500Au,c->r[0]); // 8025A394
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8025A398
  goto L_8025A3A4; // 8025A39C
L_8025A3A0:;
  c->r[0]=R16(c->r[3]+0x0000500Au); // 8025A3A0
L_8025A3A4:;
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8025A3A4
  if (!crb(c,2)) { IRQCHK(c); goto L_8025A3A0; } // 8025A3A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025A3AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025A3B0
  c->lr=c->r[0]; // 8025A3B4
  c->r[1]=c->r[1]+0x00000010u; // 8025A3B8
  return; // 8025A3BC
}

// DCEnable
void f_8025A3C0(Ctx* __restrict c) {
  trace_call(0x8025A3C0u);
  /* sync */ // 8025A3C0
  c->r[3]=mfspr(c,1008); // 8025A3C4
  c->r[3]=c->r[3]|0x00004000u; // 8025A3C8
  mtspr(c,1008,c->r[3]); // 8025A3CC
  return; // 8025A3D0
}

// DCInvalidateRange
void f_8025A3D4(Ctx* __restrict c) {
  trace_call(0x8025A3D4u);
  cmpu(c,0,c->r[4],0x00000000u); // 8025A3D4
  if (!crb(c,1)) return; // 8025A3D8
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8025A3DC
  c->r[4]=c->r[4]+c->r[5]; // 8025A3E0
  c->r[4]=c->r[4]+0x0000001Fu; // 8025A3E4
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8025A3E8
  c->ctr=c->r[4]; // 8025A3EC
L_8025A3F0:;
  /* dcbi */ // 8025A3F0
  c->r[3]=c->r[3]+0x00000020u; // 8025A3F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A3F0; } // 8025A3F8
  return; // 8025A3FC
}

// DCFlushRange
void f_8025A400(Ctx* __restrict c) {
  trace_call(0x8025A400u);
  cmpu(c,0,c->r[4],0x00000000u); // 8025A400
  if (!crb(c,1)) return; // 8025A404
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8025A408
  c->r[4]=c->r[4]+c->r[5]; // 8025A40C
  c->r[4]=c->r[4]+0x0000001Fu; // 8025A410
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8025A414
  c->ctr=c->r[4]; // 8025A418
L_8025A41C:;
  /* dcbf */ // 8025A41C
  c->r[3]=c->r[3]+0x00000020u; // 8025A420
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A41C; } // 8025A424
  sc(c,0x8025A428u); // 8025A428
  return; // 8025A42C
}

// DCStoreRange
void f_8025A430(Ctx* __restrict c) {
  trace_call(0x8025A430u);
  cmpu(c,0,c->r[4],0x00000000u); // 8025A430
  if (!crb(c,1)) return; // 8025A434
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8025A438
  c->r[4]=c->r[4]+c->r[5]; // 8025A43C
  c->r[4]=c->r[4]+0x0000001Fu; // 8025A440
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8025A444
  c->ctr=c->r[4]; // 8025A448
L_8025A44C:;
  /* dcbst */ // 8025A44C
  c->r[3]=c->r[3]+0x00000020u; // 8025A450
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A44C; } // 8025A454
  sc(c,0x8025A458u); // 8025A458
  return; // 8025A45C
}

// DCFlushRangeNoSync
void f_8025A460(Ctx* __restrict c) {
  trace_call(0x8025A460u);
  cmpu(c,0,c->r[4],0x00000000u); // 8025A460
  if (!crb(c,1)) return; // 8025A464
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8025A468
  c->r[4]=c->r[4]+c->r[5]; // 8025A46C
  c->r[4]=c->r[4]+0x0000001Fu; // 8025A470
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8025A474
  c->ctr=c->r[4]; // 8025A478
L_8025A47C:;
  /* dcbf */ // 8025A47C
  c->r[3]=c->r[3]+0x00000020u; // 8025A480
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A47C; } // 8025A484
  return; // 8025A488
}

// DCStoreRangeNoSync
void f_8025A48C(Ctx* __restrict c) {
  trace_call(0x8025A48Cu);
  cmpu(c,0,c->r[4],0x00000000u); // 8025A48C
  if (!crb(c,1)) return; // 8025A490
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8025A494
  c->r[4]=c->r[4]+c->r[5]; // 8025A498
  c->r[4]=c->r[4]+0x0000001Fu; // 8025A49C
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8025A4A0
  c->ctr=c->r[4]; // 8025A4A4
L_8025A4A8:;
  /* dcbst */ // 8025A4A8
  c->r[3]=c->r[3]+0x00000020u; // 8025A4AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A4A8; } // 8025A4B0
  return; // 8025A4B4
}

// DCZeroRange
void f_8025A4B8(Ctx* __restrict c) {
  trace_call(0x8025A4B8u);
  cmpu(c,0,c->r[4],0x00000000u); // 8025A4B8
  if (!crb(c,1)) return; // 8025A4BC
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8025A4C0
  c->r[4]=c->r[4]+c->r[5]; // 8025A4C4
  c->r[4]=c->r[4]+0x0000001Fu; // 8025A4C8
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8025A4CC
  c->ctr=c->r[4]; // 8025A4D0
L_8025A4D4:;
  dcbz(0u+c->r[3]); // 8025A4D4
  c->r[3]=c->r[3]+0x00000020u; // 8025A4D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A4D4; } // 8025A4DC
  return; // 8025A4E0
}

// ICInvalidateRange
void f_8025A4E4(Ctx* __restrict c) {
  trace_call(0x8025A4E4u);
  cmpu(c,0,c->r[4],0x00000000u); // 8025A4E4
  if (!crb(c,1)) return; // 8025A4E8
  c->r[5]=rotl(c->r[3],0)&0x0000001Fu; // 8025A4EC
  c->r[4]=c->r[4]+c->r[5]; // 8025A4F0
  c->r[4]=c->r[4]+0x0000001Fu; // 8025A4F4
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 8025A4F8
  c->ctr=c->r[4]; // 8025A4FC
L_8025A500:;
  /* icbi */ // 8025A500
  c->r[3]=c->r[3]+0x00000020u; // 8025A504
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A500; } // 8025A508
  /* sync */ // 8025A50C
  /* isync */ // 8025A510
  return; // 8025A514
}

// ICFlashInvalidate
void f_8025A518(Ctx* __restrict c) {
  trace_call(0x8025A518u);
  c->r[3]=mfspr(c,1008); // 8025A518
  c->r[3]=c->r[3]|0x00000800u; // 8025A51C
  mtspr(c,1008,c->r[3]); // 8025A520
  return; // 8025A524
}

// ICEnable
void f_8025A528(Ctx* __restrict c) {
  trace_call(0x8025A528u);
  /* isync */ // 8025A528
  c->r[3]=mfspr(c,1008); // 8025A52C
  c->r[3]=c->r[3]|0x00008000u; // 8025A530
  mtspr(c,1008,c->r[3]); // 8025A534
  return; // 8025A538
}

// __LCEnable
void f_8025A53C(Ctx* __restrict c) {
  trace_call(0x8025A53Cu);
  c->r[5]=c->msr; // 8025A53C
  c->r[5]=c->r[5]|0x00001000u; // 8025A540
  c->msr=c->r[5]; // 8025A544
  c->r[3]=0u+0x80000000u; // 8025A548
  c->r[4]=0u+0x00000400u; // 8025A54C
  c->ctr=c->r[4]; // 8025A550
L_8025A554:;
  /* dcbt */ // 8025A554
  /* dcbst */ // 8025A558
  c->r[3]=c->r[3]+0x00000020u; // 8025A55C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A554; } // 8025A560
  c->r[4]=mfspr(c,920); // 8025A564
  c->r[4]=c->r[4]|0x100F0000u; // 8025A568
  mtspr(c,920,c->r[4]); // 8025A56C
  c->r[0]=c->r[0]|0x00000000u; // 8025A570
  c->r[0]=c->r[0]|0x00000000u; // 8025A574
  c->r[0]=c->r[0]|0x00000000u; // 8025A578
  c->r[0]=c->r[0]|0x00000000u; // 8025A57C
  c->r[0]=c->r[0]|0x00000000u; // 8025A580
  c->r[0]=c->r[0]|0x00000000u; // 8025A584
  c->r[0]=c->r[0]|0x00000000u; // 8025A588
  c->r[0]=c->r[0]|0x00000000u; // 8025A58C
  c->r[0]=c->r[0]|0x00000000u; // 8025A590
  c->r[0]=c->r[0]|0x00000000u; // 8025A594
  c->r[0]=c->r[0]|0x00000000u; // 8025A598
  c->r[0]=c->r[0]|0x00000000u; // 8025A59C
  c->r[3]=0u+0xE0000000u; // 8025A5A0
  c->r[3]=c->r[3]|0x00000002u; // 8025A5A4
  mtspr(c,543,c->r[3]); // 8025A5A8
  c->r[3]=c->r[3]|0x000001FEu; // 8025A5AC
  mtspr(c,542,c->r[3]); // 8025A5B0
  /* isync */ // 8025A5B4
  c->r[3]=0u+0xE0000000u; // 8025A5B8
  c->r[6]=0u+0x00000200u; // 8025A5BC
  c->ctr=c->r[6]; // 8025A5C0
  c->r[6]=0u+0x00000000u; // 8025A5C4
L_8025A5C8:;
  dcbz(c->r[6]+c->r[3]); // 8025A5C8
  c->r[3]=c->r[3]+0x00000020u; // 8025A5CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A5C8; } // 8025A5D0
  c->r[0]=c->r[0]|0x00000000u; // 8025A5D4
  c->r[0]=c->r[0]|0x00000000u; // 8025A5D8
  c->r[0]=c->r[0]|0x00000000u; // 8025A5DC
  c->r[0]=c->r[0]|0x00000000u; // 8025A5E0
  c->r[0]=c->r[0]|0x00000000u; // 8025A5E4
  c->r[0]=c->r[0]|0x00000000u; // 8025A5E8
  c->r[0]=c->r[0]|0x00000000u; // 8025A5EC
  c->r[0]=c->r[0]|0x00000000u; // 8025A5F0
  c->r[0]=c->r[0]|0x00000000u; // 8025A5F4
  c->r[0]=c->r[0]|0x00000000u; // 8025A5F8
  c->r[0]=c->r[0]|0x00000000u; // 8025A5FC
  c->r[0]=c->r[0]|0x00000000u; // 8025A600
  return; // 8025A604
}

