#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801BE998
void f_801BE998(Ctx* __restrict c) {
  trace_call(0x801BE998u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE998
  c->r[0]=c->lr; // 801BE99C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BE9A0
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BE9A4
  c->r[25]=c->r[3]|c->r[3]; // 801BE9A8
  c->r[26]=c->r[4]|c->r[4]; // 801BE9AC
  c->r[27]=c->r[5]|c->r[5]; // 801BE9B0
  c->r[4]=c->r[6]|c->r[6]; // 801BE9B4
  c->r[28]=c->r[7]|c->r[7]; // 801BE9B8
  c->r[3]=c->r[1]+0x00000018u; // 801BE9BC
  c->r[30]=0u+0x00000000u; // 801BE9C0
  c->lr=0x801BE9C8u; f_8013932C(c); // 801BE9C4
  c->r[29]=0u+0x00000000u; // 801BE9C8
  c->r[31]=0u+0x00000000u; // 801BE9CC
  goto L_801BEA20; // 801BE9D0
L_801BE9D4:;
  c->r[3]=R32(c->r[25]+0x00000008u); // 801BE9D4
  c->r[5]=c->r[27]|c->r[27]; // 801BE9D8
  c->r[7]=c->r[28]|c->r[28]; // 801BE9DC
  c->r[8]=c->r[30]|c->r[30]; // 801BE9E0
  c->r[3]=R32(c->r[3]+c->r[31]); // 801BE9E4
  c->r[4]=c->r[1]+0x00000008u; // 801BE9E8
  c->r[6]=c->r[1]+0x00000018u; // 801BE9EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE9F0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801BE9F4
  c->ctr=c->r[12]; // 801BE9F8
  if (true) { c->lr=0x801BEA00u; dispatch(c,c->ctr); } // 801BE9FC
  cmpu(c,0,c->r[3],0x00000001u); // 801BEA00
  if (!crb(c,2)) { goto L_801BEA18; } // 801BEA04
  c->r[3]=c->r[1]+0x00000018u; // 801BEA08
  c->r[4]=c->r[1]+0x00000008u; // 801BEA0C
  c->lr=0x801BEA14u; f_8013939C(c); // 801BEA10
  c->r[30]=0u+0x00000001u; // 801BEA14
L_801BEA18:;
  c->r[31]=c->r[31]+0x00000004u; // 801BEA18
  c->r[29]=c->r[29]+0x00000001u; // 801BEA1C
L_801BEA20:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 801BEA20
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801BEA24
  if (crb(c,0)) { IRQCHK(c); goto L_801BE9D4; } // 801BEA28
  cmpu(c,0,c->r[30],0x00000001u); // 801BEA2C
  if (!crb(c,2)) { goto L_801BEA40; } // 801BEA30
  c->r[3]=c->r[26]|c->r[26]; // 801BEA34
  c->r[4]=c->r[1]+0x00000018u; // 801BEA38
  c->lr=0x801BEA40u; f_8013939C(c); // 801BEA3C
L_801BEA40:;
  c->r[3]=c->r[30]|c->r[30]; // 801BEA40
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BEA44
  c->r[0]=R32(c->r[1]+0x00000054u); // 801BEA48
  c->lr=c->r[0]; // 801BEA4C
  c->r[1]=c->r[1]+0x00000050u; // 801BEA50
  return; // 801BEA54
}

// fn_801BEA58
void f_801BEA58(Ctx* __restrict c) {
  trace_call(0x801BEA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEA58
  c->r[0]=c->lr; // 801BEA5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEA60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEA64
  c->r[31]=0u+0x00000000u; // 801BEA68
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEA6C
  c->r[30]=0u+0x00000000u; // 801BEA70
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEA74
  c->r[29]=c->r[4]|c->r[4]; // 801BEA78
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BEA7C
  c->r[28]=c->r[3]|c->r[3]; // 801BEA80
  goto L_801BEAC0; // 801BEA84
L_801BEA88:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 801BEA88
  c->r[3]=R32(c->r[3]+c->r[31]); // 801BEA8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BEA90
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BEA94
  c->ctr=c->r[12]; // 801BEA98
  if (true) { c->lr=0x801BEAA0u; dispatch(c,c->ctr); } // 801BEA9C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801BEAA0
  if (!crb(c,2)) { goto L_801BEAB8; } // 801BEAA4
  c->r[3]=R32(c->r[28]+0x00000008u); // 801BEAA8
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801BEAAC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BEAB0
  goto L_801BEAD0; // 801BEAB4
L_801BEAB8:;
  c->r[31]=c->r[31]+0x00000004u; // 801BEAB8
  c->r[30]=c->r[30]+0x00000001u; // 801BEABC
L_801BEAC0:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 801BEAC0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801BEAC4
  if (crb(c,0)) { IRQCHK(c); goto L_801BEA88; } // 801BEAC8
  c->r[3]=0u+0x00000000u; // 801BEACC
L_801BEAD0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BEAD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BEAD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BEAD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BEADC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BEAE0
  c->lr=c->r[0]; // 801BEAE4
  c->r[1]=c->r[1]+0x00000020u; // 801BEAE8
  return; // 801BEAEC
}

// fn_801BEAF0
void f_801BEAF0(Ctx* __restrict c) {
  trace_call(0x801BEAF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEAF0
  c->r[0]=c->lr; // 801BEAF4
  c->r[4]=0u+0x80400000u; // 801BEAF8
  c->r[5]=0u+0xFFFFFFFFu; // 801BEAFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEB00
  c->r[0]=0u+0x00000000u; // 801BEB04
  c->r[4]=c->r[4]+0x00001CB8u; // 801BEB08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEB0C
  c->r[31]=c->r[3]|c->r[3]; // 801BEB10
  W16(c->r[3]+0x00000002u,c->r[5]); // 801BEB14
  W16(c->r[3]+0x00000000u,c->r[0]); // 801BEB18
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BEB1C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BEB20
  W32(c->r[3]+0x0000000Cu,c->r[3]); // 801BEB24
  W32(c->r[3]+0x00000010u,c->r[4]); // 801BEB28
  c->r[3]=c->r[3]+0x00000014u; // 801BEB2C
  c->lr=0x801BEB34u; f_801BFEB0(c); // 801BEB30
  c->r[3]=c->r[31]+0x00000050u; // 801BEB34
  c->lr=0x801BEB3Cu; f_80350B64(c); // 801BEB38
  c->r[3]=c->r[31]|c->r[31]; // 801BEB3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEB40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEB44
  c->lr=c->r[0]; // 801BEB48
  c->r[1]=c->r[1]+0x00000010u; // 801BEB4C
  return; // 801BEB50
}

// fn_801BEB54
void f_801BEB54(Ctx* __restrict c) {
  trace_call(0x801BEB54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEB54
  c->r[0]=c->lr; // 801BEB58
  cmps(c,0,(int32_t)c->r[3],0); // 801BEB5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BEB60
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BEB64
  c->r[29]=c->r[3]|c->r[3]; // 801BEB68
  c->r[30]=c->r[4]|c->r[4]; // 801BEB6C
  if (crb(c,2)) { goto L_801BEBE4; } // 801BEB70
  c->r[4]=0u+0x80400000u; // 801BEB74
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 801BEB78
  c->r[4]=c->r[4]+0x00001CB8u; // 801BEB7C
  W32(c->r[3]+0x00000010u,c->r[4]); // 801BEB80
  goto L_801BEB9C; // 801BEB84
L_801BEB88:;
  c->r[31]=R32(c->r[5]+0x00000004u); // 801BEB88
  c->r[3]=c->r[5]|c->r[5]; // 801BEB8C
  c->r[4]=0u+0x00000001u; // 801BEB90
  c->lr=0x801BEB98u; f_801BF4C8(c); // 801BEB94
  c->r[5]=R32(c->r[31]+0x00000008u); // 801BEB98
L_801BEB9C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BEB9C
  if (!crb(c,2)) { IRQCHK(c); goto L_801BEB88; } // 801BEBA0
  c->r[3]=c->r[1]+0x00000008u; // 801BEBA4
  c->lr=0x801BEBACu; f_801BFEB0(c); // 801BEBA8
  c->r[3]=c->r[1]+0x00000008u; // 801BEBAC
  c->r[4]=0u+0xFFFFFFFFu; // 801BEBB0
  c->lr=0x801BEBB8u; f_801BFEDC(c); // 801BEBB4
  c->r[3]=c->r[29]+0x00000014u; // 801BEBB8
  c->r[4]=0u+0xFFFFFFFFu; // 801BEBBC
  c->lr=0x801BEBC4u; f_801BFEDC(c); // 801BEBC0
  c->r[3]=c->r[29]|c->r[29]; // 801BEBC4
  c->r[4]=0u+0x00000000u; // 801BEBC8
  c->lr=0x801BEBD0u; f_801BFE28(c); // 801BEBCC
  cmps(c,0,(int32_t)c->r[30],0); // 801BEBD0
  if (!crb(c,1)) { goto L_801BEBE4; } // 801BEBD4
  c->lr=0x801BEBDCu; f_8013CE3C(c); // 801BEBD8
  c->r[4]=c->r[29]|c->r[29]; // 801BEBDC
  c->lr=0x801BEBE4u; f_80060DFC(c); // 801BEBE0
L_801BEBE4:;
  c->r[3]=c->r[29]|c->r[29]; // 801BEBE4
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BEBE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BEBEC
  c->lr=c->r[0]; // 801BEBF0
  c->r[1]=c->r[1]+0x00000030u; // 801BEBF4
  return; // 801BEBF8
}

// fn_801BEBFC
void f_801BEBFC(Ctx* __restrict c) {
  trace_call(0x801BEBFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEBFC
  c->r[0]=c->lr; // 801BEC00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEC04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEC08
  c->r[31]=c->r[3]|c->r[3]; // 801BEC0C
  c->r[3]=c->r[3]+0x00000050u; // 801BEC10
  c->lr=0x801BEC18u; f_80350B88(c); // 801BEC14
  c->r[3]=c->r[31]+0x00000050u; // 801BEC18
  c->lr=0x801BEC20u; f_80350BC4(c); // 801BEC1C
  c->lr=0x801BEC24u; f_80345204(c); // 801BEC20
  c->r[4]=R32(c->r[3]+0x000000B8u); // 801BEC24
  c->r[3]=c->r[31]+0x0000002Cu; // 801BEC28
  c->r[8]=0u+0x00000000u; // 801BEC2C
  c->r[9]=0u+0x00000000u; // 801BEC30
  c->r[0]=R32(c->r[4]+0x00000004u); // 801BEC34
  c->r[10]=0u+0x00000000u; // 801BEC38
  c->r[4]=c->r[0]+c->r[4]; // 801BEC3C
  c->r[4]=c->r[4]+0x0000000Cu; // 801BEC40
  W32(c->r[31]+0x00000028u,c->r[4]); // 801BEC44
  c->r[7]=R32(c->r[4]+0x00000068u); // 801BEC48
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BEC4C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 801BEC50
  c->r[4]=R32(c->r[7]+0x00000018u); // 801BEC54
  c->r[5]=R16(c->r[7]+0x00000004u); // 801BEC58
  c->r[6]=R16(c->r[7]+0x00000006u); // 801BEC5C
  c->r[7]=R8(c->r[7]+0x0000000Cu); // 801BEC60
  c->lr=0x801BEC68u; f_8028643C(c); // 801BEC64
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BEC68
  c->r[3]=c->r[31]+0x0000002Cu; // 801BEC6C
  c->r[4]=0u+0x00000001u; // 801BEC70
  c->r[5]=0u+0x00000001u; // 801BEC74
  c->f[2]=c->f[1]; // 801BEC78
  c->r[6]=0u+0x00000000u; // 801BEC7C
  c->f[3]=c->f[1]; // 801BEC80
  c->r[7]=0u+0x00000000u; // 801BEC84
  c->r[8]=0u+0x00000000u; // 801BEC88
  c->lr=0x801BEC90u; f_80286690(c); // 801BEC8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEC90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEC94
  c->lr=c->r[0]; // 801BEC98
  c->r[1]=c->r[1]+0x00000010u; // 801BEC9C
  return; // 801BECA0
}

// fn_801BECA4
void f_801BECA4(Ctx* __restrict c) {
  trace_call(0x801BECA4u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BECA4
  c->r[0]=c->lr; // 801BECA8
  W32(c->r[1]+0x00000164u,c->r[0]); // 801BECAC
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 801BECB0
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 801BECB4
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 801BECB8
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 801BECBC
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 801BECC0
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 801BECC4
  c->r[11]=c->r[1]+0x00000130u; // 801BECC8
  c->lr=0x801BECD0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BECCC
  c->r[31]=c->r[3]|c->r[3]; // 801BECD0
  c->r[3]=c->r[3]+0x00000050u; // 801BECD4
  c->lr=0x801BECDCu; f_80350BC4(c); // 801BECD8
  cmps(c,0,(int32_t)c->r[3],0); // 801BECDC
  if (!crb(c,2)) { goto L_801BECEC; } // 801BECE0
  c->r[3]=0u+0x00000000u; // 801BECE4
  goto L_801BECF0; // 801BECE8
L_801BECEC:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801BECEC
L_801BECF0:;
  cmps(c,0,(int32_t)c->r[3],1); // 801BECF0
  c->r[0]=0u+0x00000000u; // 801BECF4
  if (crb(c,2)) { goto L_801BED04; } // 801BECF8
  cmps(c,0,(int32_t)c->r[3],2); // 801BECFC
  if (!crb(c,2)) { goto L_801BED08; } // 801BED00
L_801BED04:;
  c->r[0]=0u+0x00000001u; // 801BED04
L_801BED08:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BED08
  if (crb(c,2)) { goto L_801BF164; } // 801BED0C
  c->r[3]=c->r[31]+0x00000050u; // 801BED10
  c->lr=0x801BED18u; f_80350BC4(c); // 801BED14
  c->r[0]=0u+0x00000006u; // 801BED18
  c->r[5]=c->r[1]+0x000000DCu; // 801BED1C
  c->r[4]=c->r[3]+0x00000050u; // 801BED20
  c->ctr=c->r[0]; // 801BED24
L_801BED28:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801BED28
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801BED2C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801BED30
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801BED34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BED28; } // 801BED38
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BED3C
  c->r[3]=c->r[1]+0x000000D4u; // 801BED40
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BED44
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BED48
  c->lr=0x801BED50u; f_800521A0(c); // 801BED4C
  c->r[6]=R32(c->r[1]+0x000000D4u); // 801BED50
  c->r[3]=c->r[1]+0x0000008Cu; // 801BED54
  c->r[5]=R32(c->r[1]+0x000000D8u); // 801BED58
  c->r[4]=c->r[1]+0x000000C8u; // 801BED5C
  c->r[0]=R32(c->r[1]+0x000000DCu); // 801BED60
  W32(c->r[1]+0x0000008Cu,c->r[6]); // 801BED64
  W32(c->r[1]+0x00000090u,c->r[5]); // 801BED68
  W32(c->r[1]+0x00000094u,c->r[0]); // 801BED6C
  c->lr=0x801BED74u; f_80044038(c); // 801BED70
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BED74
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BED78
  c->f[31]=-c->f[1]; // 801BED7C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 801BED80
  fcmp(c,0,c->f[31],c->f[0]); // 801BED84
  if (!crb(c,1)) { goto L_801BF010; } // 801BED88
  c->r[3]=c->r[1]+0x00000080u; // 801BED8C
  c->r[4]=c->r[31]+0x00000064u; // 801BED90
  c->r[5]=c->r[1]+0x000000C8u; // 801BED94
  c->lr=0x801BED9Cu; f_8007B8A4(c); // 801BED98
  c->r[3]=c->r[1]+0x00000080u; // 801BED9C
  c->lr=0x801BEDA4u; f_802657AC(c); // 801BEDA0
  {uint32_t ea=c->r[2]+0xFFFFB6BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BEDA4
  fcmp(c,0,c->f[1],c->f[0]); // 801BEDA8
  if (!crb(c,1)) { goto L_801BF010; } // 801BEDAC
  c->r[3]=0u+0x01000000u; // 801BEDB0
  c->r[0]=0u+0x43300000u; // 801BEDB4
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801BEDB8
  W32(c->r[1]+0x00000110u,c->r[0]); // 801BEDBC
  c->r[3]=0u+0x80440000u; // 801BEDC0
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[3]=RF64(ea);} // 801BEDC4
  W32(c->r[1]+0x00000114u,c->r[4]); // 801BEDC8
  c->r[3]=c->r[3]+0xFFFFA720u; // 801BEDCC
  {uint32_t ea=c->r[2]+0xFFFFB6C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BEDD0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[2]=RF64(ea);} // 801BEDD4
  {uint32_t ea=c->r[2]+0xFFFFB6C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BEDD8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801BEDDC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BEDE0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801BEDE4
  c->f[30]=c->ps1[30]=S(c->f[0]-c->f[1]); // 801BEDE8
  c->lr=0x801BEDF0u; f_80381A54(c); // 801BEDEC
  cmps(c,0,(int32_t)c->r[3],0); // 801BEDF0
  c->r[30]=c->r[3]|c->r[3]; // 801BEDF4
  if (!crb(c,2)) { goto L_801BEE18; } // 801BEDF8
  c->r[3]=0u+0x803F0000u; // 801BEDFC
  c->r[5]=0u+0x803F0000u; // 801BEE00
  c->r[3]=c->r[3]+0x00001C00u; // 801BEE04
  c->r[4]=0u+0x0000008Cu; // 801BEE08
  c->r[5]=c->r[5]+0x00001BD8u; // 801BEE0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BEE10
  c->lr=0x801BEE18u; f_803444BC(c); // 801BEE14
L_801BEE18:;
  c->r[3]=c->r[1]+0x000000BCu; // 801BEE18
  c->r[4]=c->r[30]+0x00000080u; // 801BEE1C
  c->lr=0x801BEE24u; f_8012CBE4(c); // 801BEE20
  c->r[3]=c->r[1]+0x000000BCu; // 801BEE24
  c->r[4]=c->r[3]|c->r[3]; // 801BEE28
  c->lr=0x801BEE30u; f_80265750(c); // 801BEE2C
  c->r[3]=c->r[1]+0x000000BCu; // 801BEE30
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BEE34
  c->r[4]=c->r[3]|c->r[3]; // 801BEE38
  c->lr=0x801BEE40u; f_80064C58(c); // 801BEE3C
  c->r[3]=c->r[1]+0x000000B0u; // 801BEE40
  c->r[4]=c->r[1]+0x000000D4u; // 801BEE44
  c->r[5]=c->r[1]+0x000000BCu; // 801BEE48
  c->lr=0x801BEE50u; f_801011E8(c); // 801BEE4C
  c->r[6]=R32(c->r[1]+0x000000B0u); // 801BEE50
  c->r[3]=c->r[1]+0x00000074u; // 801BEE54
  c->r[5]=R32(c->r[1]+0x000000B4u); // 801BEE58
  c->r[4]=c->r[1]+0x000000B0u; // 801BEE5C
  c->r[0]=R32(c->r[1]+0x000000B8u); // 801BEE60
  W32(c->r[1]+0x00000074u,c->r[6]); // 801BEE64
  W32(c->r[1]+0x00000078u,c->r[5]); // 801BEE68
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801BEE6C
  c->lr=0x801BEE74u; f_80044038(c); // 801BEE70
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BEE74
  c->r[3]=c->r[1]+0x00000068u; // 801BEE78
  c->r[4]=c->r[1]+0x000000B0u; // 801BEE7C
  c->r[5]=c->r[1]+0x000000C8u; // 801BEE80
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 801BEE84
  c->lr=0x801BEE8Cu; f_8007B8A4(c); // 801BEE88
  c->r[3]=c->r[1]+0x00000068u; // 801BEE8C
  c->lr=0x801BEE94u; f_802657AC(c); // 801BEE90
  c->f[29]=c->f[1]; // 801BEE94
  c->lr=0x801BEE9Cu; f_8013CE3C(c); // 801BEE98
  c->r[4]=0u+0x0000004Cu; // 801BEE9C
  c->lr=0x801BEEA4u; f_80060C7C(c); // 801BEEA0
  cmps(c,0,(int32_t)c->r[3],0); // 801BEEA4
  c->r[29]=c->r[3]|c->r[3]; // 801BEEA8
  if (crb(c,2)) { goto L_801BEEB4; } // 801BEEAC
  c->lr=0x801BEEB4u; f_801BF48C(c); // 801BEEB0
L_801BEEB4:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801BEEB4
  cmps(c,0,(int32_t)c->r[3],0); // 801BEEB8
  if (crb(c,2)) { goto L_801BEEEC; } // 801BEEBC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BEEC0
  W32(c->r[29]+0x00000004u,c->r[0]); // 801BEEC4
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801BEEC8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801BEECC
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801BEED0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801BEED4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801BEED8
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801BEEDC
  W32(c->r[3]+0x00000004u,c->r[29]); // 801BEEE0
  W32(c->r[31]+0x0000001Cu,c->r[29]); // 801BEEE4
  goto L_801BEF24; // 801BEEE8
L_801BEEEC:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 801BEEEC
  cmps(c,0,(int32_t)c->r[3],0); // 801BEEF0
  if (crb(c,2)) { goto L_801BEF08; } // 801BEEF4
  W32(c->r[3]+0x00000008u,c->r[29]); // 801BEEF8
  c->r[0]=R32(c->r[31]+0x00000020u); // 801BEEFC
  W32(c->r[29]+0x00000004u,c->r[0]); // 801BEF00
  goto L_801BEF10; // 801BEF04
L_801BEF08:;
  c->r[0]=c->r[31]+0x00000014u; // 801BEF08
  W32(c->r[29]+0x00000004u,c->r[0]); // 801BEF0C
L_801BEF10:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801BEF10
  W32(c->r[31]+0x00000020u,c->r[29]); // 801BEF14
  cmps(c,0,(int32_t)c->r[0],0); // 801BEF18
  if (!crb(c,2)) { goto L_801BEF24; } // 801BEF1C
  W32(c->r[31]+0x0000001Cu,c->r[29]); // 801BEF20
L_801BEF24:;
  fcmp(c,0,c->f[30],c->f[31]); // 801BEF24
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BEF28
  if (!crb(c,2)) { goto L_801BEF9C; } // 801BEF2C
  c->r[28]=R32(c->r[31]+0x00000028u); // 801BEF30
  c->r[3]=c->r[1]+0x00000050u; // 801BEF34
  c->r[4]=c->r[31]+0x00000064u; // 801BEF38
  c->lr=0x801BEF40u; f_8003F484(c); // 801BEF3C
  c->r[30]=c->r[3]|c->r[3]; // 801BEF40
  c->r[3]=c->r[1]+0x0000005Cu; // 801BEF44
  c->r[4]=c->r[1]+0x000000C8u; // 801BEF48
  c->lr=0x801BEF50u; f_8003F484(c); // 801BEF4C
  c->r[5]=R8(c->r[28]+0x00000004u); // 801BEF50
  c->r[0]=0u+0x43300000u; // 801BEF54
  c->r[4]=c->r[3]|c->r[3]; // 801BEF58
  W32(c->r[1]+0x00000110u,c->r[0]); // 801BEF5C
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[3]=RF64(ea);} // 801BEF60
  c->f[1]=c->f[29]; // 801BEF64
  W32(c->r[1]+0x00000114u,c->r[5]); // 801BEF68
  c->r[3]=c->r[29]|c->r[29]; // 801BEF6C
  {uint32_t ea=c->r[2]+0xFFFFB6C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BEF70
  c->r[5]=c->r[30]|c->r[30]; // 801BEF74
  {uint32_t ea=c->r[1]+0x00000110u; c->f[2]=RF64(ea);} // 801BEF78
  c->r[6]=R8(c->r[28]+0x00000007u); // 801BEF7C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801BEF80
  c->r[7]=R8(c->r[28]+0x00000000u); // 801BEF84
  c->r[8]=R8(c->r[28]+0x00000001u); // 801BEF88
  c->r[9]=R8(c->r[28]+0x00000002u); // 801BEF8C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801BEF90
  c->lr=0x801BEF98u; f_801BF51C(c); // 801BEF94
  goto L_801BF004; // 801BEF98
L_801BEF9C:;
  c->r[28]=R32(c->r[31]+0x00000028u); // 801BEF9C
  c->r[3]=c->r[1]+0x00000038u; // 801BEFA0
  c->r[4]=c->r[31]+0x00000064u; // 801BEFA4
  c->lr=0x801BEFACu; f_8003F484(c); // 801BEFA8
  c->r[30]=c->r[3]|c->r[3]; // 801BEFAC
  c->r[3]=c->r[1]+0x00000044u; // 801BEFB0
  c->r[4]=c->r[1]+0x000000C8u; // 801BEFB4
  c->lr=0x801BEFBCu; f_8003F484(c); // 801BEFB8
  c->r[5]=R8(c->r[28]+0x00000004u); // 801BEFBC
  c->r[0]=0u+0x43300000u; // 801BEFC0
  c->r[4]=c->r[3]|c->r[3]; // 801BEFC4
  W32(c->r[1]+0x00000110u,c->r[0]); // 801BEFC8
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[3]=RF64(ea);} // 801BEFCC
  c->f[1]=c->f[29]; // 801BEFD0
  W32(c->r[1]+0x00000114u,c->r[5]); // 801BEFD4
  c->r[3]=c->r[29]|c->r[29]; // 801BEFD8
  {uint32_t ea=c->r[2]+0xFFFFB6C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BEFDC
  c->r[5]=c->r[30]|c->r[30]; // 801BEFE0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[2]=RF64(ea);} // 801BEFE4
  c->r[7]=R8(c->r[28]+0x00000000u); // 801BEFE8
  c->r[6]=0u+0x00000000u; // 801BEFEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801BEFF0
  c->r[8]=R8(c->r[28]+0x00000001u); // 801BEFF4
  c->r[9]=R8(c->r[28]+0x00000002u); // 801BEFF8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801BEFFC
  c->lr=0x801BF004u; f_801BF51C(c); // 801BF000
L_801BF004:;
  c->r[3]=c->r[31]+0x00000064u; // 801BF004
  c->r[4]=c->r[1]+0x000000C8u; // 801BF008
  c->lr=0x801BF010u; f_8003F468(c); // 801BF00C
L_801BF010:;
  c->r[3]=c->r[31]+0x00000014u; // 801BF010
  c->lr=0x801BF018u; f_801BFF64(c); // 801BF014
  cmpu(c,0,c->r[3],0x00000002u); // 801BF018
  if (crb(c,0)) { goto L_801BF17C; } // 801BF01C
  c->r[3]=c->r[31]+0x00000014u; // 801BF020
  c->lr=0x801BF028u; f_801BFF84(c); // 801BF024
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF028
  c->r[28]=c->r[3]|c->r[3]; // 801BF02C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF030
  c->r[0]=0u+0x00000000u; // 801BF034
  fcmp(c,0,c->f[1],c->f[0]); // 801BF038
  if (!crb(c,2)) { goto L_801BF060; } // 801BF03C
  {uint32_t ea=c->r[31]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF040
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF044
  fcmp(c,0,c->f[1],c->f[0]); // 801BF048
  if (!crb(c,2)) { goto L_801BF060; } // 801BF04C
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF050
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF054
  fcmp(c,0,c->f[1],c->f[0]); // 801BF058
  if (crb(c,2)) { goto L_801BF064; } // 801BF05C
L_801BF060:;
  c->r[0]=0u+0x00000001u; // 801BF060
L_801BF064:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BF064
  if (crb(c,2)) { goto L_801BF17C; } // 801BF068
  c->r[3]=0u+0x80440000u; // 801BF06C
  c->r[3]=c->r[3]+0xFFFFA720u; // 801BF070
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BF074
  c->lr=0x801BF07Cu; f_80381A54(c); // 801BF078
  cmps(c,0,(int32_t)c->r[3],0); // 801BF07C
  c->r[30]=c->r[3]|c->r[3]; // 801BF080
  if (!crb(c,2)) { goto L_801BF0A4; } // 801BF084
  c->r[3]=0u+0x803F0000u; // 801BF088
  c->r[5]=0u+0x803F0000u; // 801BF08C
  c->r[3]=c->r[3]+0x00001C00u; // 801BF090
  c->r[4]=0u+0x0000008Cu; // 801BF094
  c->r[5]=c->r[5]+0x00001BD8u; // 801BF098
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF09C
  c->lr=0x801BF0A4u; f_803444BC(c); // 801BF0A0
L_801BF0A4:;
  c->r[3]=c->r[1]+0x000000A4u; // 801BF0A4
  c->r[4]=c->r[30]+0x00000080u; // 801BF0A8
  c->lr=0x801BF0B0u; f_8012CBE4(c); // 801BF0AC
  c->r[3]=c->r[1]+0x000000A4u; // 801BF0B0
  c->r[4]=c->r[3]|c->r[3]; // 801BF0B4
  c->lr=0x801BF0BCu; f_80265750(c); // 801BF0B8
  c->r[3]=c->r[1]+0x000000A4u; // 801BF0BC
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF0C0
  c->r[4]=c->r[3]|c->r[3]; // 801BF0C4
  c->lr=0x801BF0CCu; f_80064C58(c); // 801BF0C8
  c->r[3]=c->r[1]+0x00000098u; // 801BF0CC
  c->r[4]=c->r[1]+0x000000D4u; // 801BF0D0
  c->r[5]=c->r[1]+0x000000A4u; // 801BF0D4
  c->lr=0x801BF0DCu; f_801011E8(c); // 801BF0D8
  c->r[6]=R32(c->r[1]+0x00000098u); // 801BF0DC
  c->r[3]=c->r[1]+0x0000002Cu; // 801BF0E0
  c->r[5]=R32(c->r[1]+0x0000009Cu); // 801BF0E4
  c->r[4]=c->r[1]+0x00000098u; // 801BF0E8
  c->r[0]=R32(c->r[1]+0x000000A0u); // 801BF0EC
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 801BF0F0
  W32(c->r[1]+0x00000030u,c->r[5]); // 801BF0F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BF0F8
  c->lr=0x801BF100u; f_80044038(c); // 801BF0FC
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF100
  c->r[3]=c->r[1]+0x00000020u; // 801BF104
  c->r[4]=c->r[1]+0x00000098u; // 801BF108
  c->r[5]=c->r[1]+0x000000C8u; // 801BF10C
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 801BF110
  c->lr=0x801BF118u; f_8007B8A4(c); // 801BF114
  c->r[3]=c->r[1]+0x00000020u; // 801BF118
  c->lr=0x801BF120u; f_802657AC(c); // 801BF11C
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF120
  c->f[29]=c->f[1]; // 801BF124
  fcmp(c,0,c->f[31],c->f[0]); // 801BF128
  if (!crb(c,1)) { goto L_801BF17C; } // 801BF12C
  c->r[3]=c->r[1]+0x00000008u; // 801BF130
  c->r[4]=c->r[31]+0x00000064u; // 801BF134
  c->lr=0x801BF13Cu; f_8003F484(c); // 801BF138
  c->r[30]=c->r[3]|c->r[3]; // 801BF13C
  c->r[3]=c->r[1]+0x00000014u; // 801BF140
  c->r[4]=c->r[1]+0x000000C8u; // 801BF144
  c->lr=0x801BF14Cu; f_8003F484(c); // 801BF148
  c->f[1]=c->f[29]; // 801BF14C
  c->r[4]=c->r[3]|c->r[3]; // 801BF150
  c->r[3]=c->r[28]|c->r[28]; // 801BF154
  c->r[5]=c->r[30]|c->r[30]; // 801BF158
  c->lr=0x801BF160u; f_801BF604(c); // 801BF15C
  goto L_801BF17C; // 801BF160
L_801BF164:;
  c->r[3]=c->r[31]+0x00000014u; // 801BF164
  c->lr=0x801BF16Cu; f_801BFF64(c); // 801BF168
  cmps(c,0,(int32_t)c->r[3],0); // 801BF16C
  if (!crb(c,2)) { goto L_801BF17C; } // 801BF170
  c->r[3]=0u+0x00000000u; // 801BF174
  goto L_801BF1E4; // 801BF178
L_801BF17C:;
  c->r[30]=R32(c->r[31]+0x0000001Cu); // 801BF17C
  c->r[29]=0u+0x00000000u; // 801BF180
  goto L_801BF1D8; // 801BF184
L_801BF188:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801BF188
  c->r[3]=c->r[30]|c->r[30]; // 801BF18C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801BF190
  c->ctr=c->r[12]; // 801BF194
  if (true) { c->lr=0x801BF19Cu; dispatch(c,c->ctr); } // 801BF198
  cmps(c,0,(int32_t)c->r[3],0); // 801BF19C
  if (!crb(c,2)) { goto L_801BF1CC; } // 801BF1A0
  c->r[4]=R32(c->r[31]+0x00000020u); // 801BF1A4
  c->r[3]=c->r[30]|c->r[30]; // 801BF1A8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801BF1AC
  c->r[30]=R32(c->r[30]+0x00000004u); // 801BF1B0
  cmpu(c,0,c->r[4],c->r[0]); // 801BF1B4
  if (!crb(c,2)) { goto L_801BF1C0; } // 801BF1B8
  W32(c->r[31]+0x00000020u,c->r[30]); // 801BF1BC
L_801BF1C0:;
  c->r[4]=0u+0x00000001u; // 801BF1C0
  c->lr=0x801BF1C8u; f_801BF4C8(c); // 801BF1C4
  goto L_801BF1D4; // 801BF1C8
L_801BF1CC:;
  W16(c->r[30]+0x00000002u,c->r[29]); // 801BF1CC
  c->r[29]=c->r[29]+0x00000001u; // 801BF1D0
L_801BF1D4:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 801BF1D4
L_801BF1D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BF1D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801BF188; } // 801BF1DC
  c->r[3]=0u+0x00000001u; // 801BF1E0
L_801BF1E4:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 801BF1E4
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 801BF1E8
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 801BF1EC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 801BF1F0
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 801BF1F4
  c->r[11]=c->r[1]+0x00000130u; // 801BF1F8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 801BF1FC
  c->lr=0x801BF204u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BF200
  c->r[0]=R32(c->r[1]+0x00000164u); // 801BF204
  c->lr=c->r[0]; // 801BF208
  c->r[1]=c->r[1]+0x00000160u; // 801BF20C
  return; // 801BF210
}

// fn_801BF214
void f_801BF214(Ctx* __restrict c) {
  trace_call(0x801BF214u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF214
  c->r[0]=c->lr; // 801BF218
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BF21C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BF220
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BF224
  c->r[30]=c->r[3]|c->r[3]; // 801BF228
  c->r[3]=c->r[3]+0x00000014u; // 801BF22C
  c->lr=0x801BF234u; f_801BFF84(c); // 801BF230
  cmps(c,0,(int32_t)c->r[3],0); // 801BF234
  if (crb(c,2)) { goto L_801BF474; } // 801BF238
  c->r[0]=R8(c->r[13]+0xFFFF93B0u); // 801BF23C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BF240
  if (!crb(c,2)) { goto L_801BF274; } // 801BF244
  c->r[31]=0u+0x80450000u; // 801BF248
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 801BF24C
  c->lr=0x801BF254u; f_800411F4(c); // 801BF250
  c->r[4]=0u+0x80040000u; // 801BF254
  c->r[5]=0u+0x80570000u; // 801BF258
  c->r[3]=c->r[31]+0xFFFFA8E8u; // 801BF25C
  c->r[4]=c->r[4]+0x000014DCu; // 801BF260
  c->r[5]=c->r[5]+0x00000060u; // 801BF264
  c->lr=0x801BF26Cu; f_802895A4(c); // 801BF268
  c->r[0]=0u+0x00000001u; // 801BF26C
  W8(c->r[13]+0xFFFF93B0u,c->r[0]); // 801BF270
L_801BF274:;
  c->r[3]=0u+0x80450000u; // 801BF274
  c->r[3]=c->r[3]+0xFFFFA8E8u; // 801BF278
  c->lr=0x801BF280u; f_80042CB8(c); // 801BF27C
  c->r[3]=0u+0x80440000u; // 801BF280
  c->r[31]=0u+0x43300000u; // 801BF284
  c->r[3]=c->r[3]+0xFFFFA720u; // 801BF288
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF28C
  c->r[5]=R16(c->r[3]+0x0000000Eu); // 801BF290
  c->r[4]=0u+0x00000000u; // 801BF294
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 801BF298
  c->f[3]=c->f[1]; // 801BF29C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801BF2A0
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[4]=RF64(ea);} // 801BF2A4
  W32(c->r[1]+0x00000008u,c->r[31]); // 801BF2A8
  {uint32_t ea=c->r[2]+0xFFFFB6D8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BF2AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BF2B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF2B4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 801BF2B8
  {uint32_t ea=c->r[2]+0xFFFFB6DCu; c->f[6]=c->ps1[6]=RF32(ea);} // 801BF2BC
  W32(c->r[1]+0x00000010u,c->r[31]); // 801BF2C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BF2C4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[4]); // 801BF2C8
  c->lr=0x801BF2D0u; f_8003ADB8(c); // 801BF2CC
  c->r[3]=0u+0x00000001u; // 801BF2D0
  c->r[4]=0u+0x00000004u; // 801BF2D4
  c->r[5]=0u+0x00000005u; // 801BF2D8
  c->r[6]=0u+0x00000003u; // 801BF2DC
  c->lr=0x801BF2E4u; f_80288274(c); // 801BF2E0
  c->r[3]=0u+0x00000000u; // 801BF2E4
  c->r[4]=0u+0x00000001u; // 801BF2E8
  c->r[5]=0u+0x00000004u; // 801BF2EC
  c->r[6]=0u+0x0000003Cu; // 801BF2F0
  c->r[7]=0u+0x00000000u; // 801BF2F4
  c->r[8]=0u+0x0000007Du; // 801BF2F8
  c->lr=0x801BF300u; f_8028422C(c); // 801BF2FC
  c->r[3]=c->r[30]+0x0000002Cu; // 801BF300
  c->r[4]=0u+0x00000000u; // 801BF304
  c->lr=0x801BF30Cu; f_80286B04(c); // 801BF308
  c->r[3]=0u+0x00000001u; // 801BF30C
  c->lr=0x801BF314u; f_80287DA0(c); // 801BF310
  c->r[3]=0u+0x00000000u; // 801BF314
  c->r[4]=0u+0x00000000u; // 801BF318
  c->lr=0x801BF320u; f_80287744(c); // 801BF31C
  c->r[3]=0u+0x00000000u; // 801BF320
  c->r[4]=0u+0x00000000u; // 801BF324
  c->r[5]=0u+0x00000000u; // 801BF328
  c->r[6]=0u+0x00000004u; // 801BF32C
  c->lr=0x801BF334u; f_80287C44(c); // 801BF330
  c->r[3]=0u+0x00000000u; // 801BF334
  c->r[4]=0u+0x0000000Fu; // 801BF338
  c->r[5]=0u+0x0000000Au; // 801BF33C
  c->r[6]=0u+0x00000008u; // 801BF340
  c->r[7]=0u+0x0000000Fu; // 801BF344
  c->lr=0x801BF34Cu; f_802877D8(c); // 801BF348
  c->r[3]=0u+0x00000000u; // 801BF34C
  c->r[4]=0u+0x00000000u; // 801BF350
  c->r[5]=0u+0x00000000u; // 801BF354
  c->r[6]=0u+0x00000000u; // 801BF358
  c->r[7]=0u+0x00000001u; // 801BF35C
  c->r[8]=0u+0x00000000u; // 801BF360
  c->lr=0x801BF368u; f_80287858(c); // 801BF364
  c->r[3]=0u+0x00000000u; // 801BF368
  c->r[4]=0u+0x00000007u; // 801BF36C
  c->r[5]=0u+0x00000004u; // 801BF370
  c->r[6]=0u+0x00000005u; // 801BF374
  c->r[7]=0u+0x00000007u; // 801BF378
  c->lr=0x801BF380u; f_80287818(c); // 801BF37C
  c->r[3]=0u+0x00000000u; // 801BF380
  c->r[4]=0u+0x00000000u; // 801BF384
  c->r[5]=0u+0x00000000u; // 801BF388
  c->r[6]=0u+0x00000000u; // 801BF38C
  c->r[7]=0u+0x00000001u; // 801BF390
  c->r[8]=0u+0x00000000u; // 801BF394
  c->lr=0x801BF39Cu; f_802878B0(c); // 801BF398
  c->lr=0x801BF3A0u; f_80283B58(c); // 801BF39C
  c->r[3]=0u+0x00000009u; // 801BF3A0
  c->r[4]=0u+0x00000001u; // 801BF3A4
  c->lr=0x801BF3ACu; f_80283564(c); // 801BF3A8
  c->r[3]=0u+0x0000000Bu; // 801BF3AC
  c->r[4]=0u+0x00000001u; // 801BF3B0
  c->lr=0x801BF3B8u; f_80283564(c); // 801BF3B4
  c->r[3]=0u+0x0000000Du; // 801BF3B8
  c->r[4]=0u+0x00000001u; // 801BF3BC
  c->lr=0x801BF3C4u; f_80283564(c); // 801BF3C0
  c->r[3]=0u+0x00000000u; // 801BF3C4
  c->r[4]=0u+0x00000009u; // 801BF3C8
  c->r[5]=0u+0x00000001u; // 801BF3CC
  c->r[6]=0u+0x00000004u; // 801BF3D0
  c->r[7]=0u+0x00000000u; // 801BF3D4
  c->lr=0x801BF3DCu; f_80283B8C(c); // 801BF3D8
  c->r[3]=0u+0x00000000u; // 801BF3DC
  c->r[4]=0u+0x0000000Bu; // 801BF3E0
  c->r[5]=0u+0x00000001u; // 801BF3E4
  c->r[6]=0u+0x00000005u; // 801BF3E8
  c->r[7]=0u+0x00000000u; // 801BF3EC
  c->lr=0x801BF3F4u; f_80283B8C(c); // 801BF3F0
  c->r[3]=0u+0x00000000u; // 801BF3F4
  c->r[4]=0u+0x0000000Du; // 801BF3F8
  c->r[5]=0u+0x00000001u; // 801BF3FC
  c->r[6]=0u+0x00000004u; // 801BF400
  c->r[7]=0u+0x00000000u; // 801BF404
  c->lr=0x801BF40Cu; f_80283B8C(c); // 801BF408
  c->r[3]=c->r[30]+0x00000014u; // 801BF40C
  c->lr=0x801BF414u; f_801BFF64(c); // 801BF410
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801BF414
  cmpu(c,0,c->r[3],0x00000002u); // 801BF418
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[1]=RF64(ea);} // 801BF41C
  W32(c->r[1]+0x00000018u,c->r[31]); // 801BF420
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801BF424
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF428
  {uint32_t ea=c->r[13]+0xFFFF9718u; WF32(ea,c->f[0]);} // 801BF42C
  if (!crb(c,1)) { goto L_801BF474; } // 801BF430
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801BF434
  c->r[3]=0u+0x00000098u; // 801BF438
  c->r[0]=c->r[4]+0xFFFFFFFAu; // 801BF43C
  c->r[4]=0u+0x00000000u; // 801BF440
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801BF444
  c->lr=0x801BF44Cu; f_80284FD0(c); // 801BF448
  c->r[31]=R32(c->r[30]+0x0000001Cu); // 801BF44C
  goto L_801BF46C; // 801BF450
L_801BF454:;
  c->r[12]=R32(c->r[31]+0x00000010u); // 801BF454
  c->r[3]=c->r[31]|c->r[31]; // 801BF458
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BF45C
  c->ctr=c->r[12]; // 801BF460
  if (true) { c->lr=0x801BF468u; dispatch(c,c->ctr); } // 801BF464
  c->r[31]=R32(c->r[31]+0x00000008u); // 801BF468
L_801BF46C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BF46C
  if (!crb(c,2)) { IRQCHK(c); goto L_801BF454; } // 801BF470
L_801BF474:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BF474
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BF478
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BF47C
  c->lr=c->r[0]; // 801BF480
  c->r[1]=c->r[1]+0x00000030u; // 801BF484
  return; // 801BF488
}

// fn_801BF48C
void f_801BF48C(Ctx* __restrict c) {
  trace_call(0x801BF48Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF48C
  c->r[0]=c->lr; // 801BF490
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF494
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF498
  c->r[31]=c->r[3]|c->r[3]; // 801BF49C
  c->lr=0x801BF4A4u; f_801BFEB0(c); // 801BF4A0
  c->r[4]=0u+0x80400000u; // 801BF4A4
  c->r[3]=c->r[31]|c->r[31]; // 801BF4A8
  c->r[4]=c->r[4]+0x00001CD8u; // 801BF4AC
  W32(c->r[31]+0x00000010u,c->r[4]); // 801BF4B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF4B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF4B8
  c->lr=c->r[0]; // 801BF4BC
  c->r[1]=c->r[1]+0x00000010u; // 801BF4C0
  return; // 801BF4C4
}

// fn_801BF4C8
void f_801BF4C8(Ctx* __restrict c) {
  trace_call(0x801BF4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF4C8
  c->r[0]=c->lr; // 801BF4CC
  cmps(c,0,(int32_t)c->r[3],0); // 801BF4D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF4D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BF4D8
  c->r[30]=c->r[3]|c->r[3]; // 801BF4DC
  c->r[31]=c->r[4]|c->r[4]; // 801BF4E0
  if (crb(c,2)) { goto L_801BF504; } // 801BF4E4
  c->r[4]=0u+0x00000000u; // 801BF4E8
  c->lr=0x801BF4F0u; f_801BFEDC(c); // 801BF4EC
  cmps(c,0,(int32_t)c->r[31],0); // 801BF4F0
  if (!crb(c,1)) { goto L_801BF504; } // 801BF4F4
  c->lr=0x801BF4FCu; f_8013CE3C(c); // 801BF4F8
  c->r[4]=c->r[30]|c->r[30]; // 801BF4FC
  c->lr=0x801BF504u; f_80060DFC(c); // 801BF500
L_801BF504:;
  c->r[3]=c->r[30]|c->r[30]; // 801BF504
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BF508
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF50C
  c->lr=c->r[0]; // 801BF510
  c->r[1]=c->r[1]+0x00000010u; // 801BF514
  return; // 801BF518
}

// fn_801BF51C
void f_801BF51C(Ctx* __restrict c) {
  trace_call(0x801BF51Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF51C
  c->r[0]=c->lr; // 801BF520
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BF524
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801BF528
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801BF52C
  c->r[11]=c->r[1]+0x00000040u; // 801BF530
  c->lr=0x801BF538u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF534
  c->r[0]=0u+0x43300000u; // 801BF538
  c->f[31]=c->f[1]; // 801BF53C
  W32(c->r[1]+0x00000024u,c->r[6]); // 801BF540
  c->f[0]=c->ps1[0]=S(c->f[2]); // 801BF544
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[4]=RF64(ea);} // 801BF548
  c->r[29]=c->r[3]|c->r[3]; // 801BF54C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801BF550
  {uint32_t ea=c->r[2]+0xFFFFB6F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF554
  c->r[30]=c->r[4]|c->r[4]; // 801BF558
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=RF64(ea);} // 801BF55C
  c->r[31]=c->r[5]|c->r[5]; // 801BF560
  W8(c->r[3]+0x00000040u,c->r[7]); // 801BF564
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 801BF568
  W8(c->r[3]+0x00000041u,c->r[8]); // 801BF56C
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 801BF570
  W8(c->r[3]+0x00000042u,c->r[9]); // 801BF574
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 801BF578
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801BF57C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801BF580
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801BF584
  c->lr=0x801BF58Cu; f_801BFF84(c); // 801BF588
  cmps(c,0,(int32_t)c->r[3],0); // 801BF58C
  if (crb(c,2)) { goto L_801BF5B4; } // 801BF590
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF594
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF598
  fcmp(c,0,c->f[1],c->f[0]); // 801BF59C
  if (!crb(c,2)) { goto L_801BF5B4; } // 801BF5A0
  {uint32_t ea=c->r[2]+0xFFFFB6F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF5A4
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF5A8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF5AC
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 801BF5B0
L_801BF5B4:;
  c->r[4]=c->r[31]|c->r[31]; // 801BF5B4
  c->r[3]=c->r[1]+0x00000008u; // 801BF5B8
  c->lr=0x801BF5C0u; f_8003F484(c); // 801BF5BC
  c->r[31]=c->r[3]|c->r[3]; // 801BF5C0
  c->r[4]=c->r[30]|c->r[30]; // 801BF5C4
  c->r[3]=c->r[1]+0x00000014u; // 801BF5C8
  c->lr=0x801BF5D0u; f_8003F484(c); // 801BF5CC
  c->f[1]=c->f[31]; // 801BF5D0
  c->r[4]=c->r[3]|c->r[3]; // 801BF5D4
  c->r[3]=c->r[29]|c->r[29]; // 801BF5D8
  c->r[5]=c->r[31]|c->r[31]; // 801BF5DC
  c->lr=0x801BF5E4u; f_801BF604(c); // 801BF5E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801BF5E4
  c->r[11]=c->r[1]+0x00000040u; // 801BF5E8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801BF5EC
  c->lr=0x801BF5F4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BF5F0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801BF5F4
  c->lr=c->r[0]; // 801BF5F8
  c->r[1]=c->r[1]+0x00000050u; // 801BF5FC
  return; // 801BF600
}

// fn_801BF604
void f_801BF604(Ctx* __restrict c) {
  trace_call(0x801BF604u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF604
  c->r[0]=c->lr; // 801BF608
  W32(c->r[1]+0x00000094u,c->r[0]); // 801BF60C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801BF610
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801BF614
  c->r[11]=c->r[1]+0x00000080u; // 801BF618
  c->lr=0x801BF620u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF61C
  {uint32_t ea=c->r[2]+0xFFFFB6C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF620
  c->r[0]=0u+0x43300000u; // 801BF624
  c->f[31]=c->f[1]; // 801BF628
  W32(c->r[1]+0x00000060u,c->r[0]); // 801BF62C
  fcmp(c,0,c->f[1],c->f[0]); // 801BF630
  c->r[29]=c->r[3]|c->r[3]; // 801BF634
  W32(c->r[1]+0x00000068u,c->r[0]); // 801BF638
  c->r[30]=c->r[4]|c->r[4]; // 801BF63C
  c->r[31]=c->r[5]|c->r[5]; // 801BF640
  if (!crb(c,0)) { goto L_801BF64C; } // 801BF644
  c->f[31]=c->f[0]; // 801BF648
L_801BF64C:;
  c->r[4]=c->r[30]|c->r[30]; // 801BF64C
  c->r[3]=c->r[3]+0x00000014u; // 801BF650
  c->lr=0x801BF658u; f_8003F468(c); // 801BF654
  c->r[4]=c->r[30]|c->r[30]; // 801BF658
  c->r[5]=c->r[31]|c->r[31]; // 801BF65C
  c->r[3]=c->r[1]+0x00000050u; // 801BF660
  c->lr=0x801BF668u; f_8007B8A4(c); // 801BF664
  c->r[3]=c->r[1]+0x00000050u; // 801BF668
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 801BF66C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 801BF670
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF674
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 801BF678
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 801BF67C
  {uint32_t ea=c->r[2]+0xFFFFB6FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF680
  fcmp(c,0,c->f[1],c->f[0]); // 801BF684
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801BF688
  c->r[0]=c->cr; // 801BF68C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 801BF690
  if (crb(c,2)) { goto L_801BF6A0; } // 801BF694
  c->r[4]=c->r[3]|c->r[3]; // 801BF698
  c->lr=0x801BF6A0u; f_80265750(c); // 801BF69C
L_801BF6A0:;
  c->f[1]=c->f[31]; // 801BF6A0
  c->r[3]=c->r[1]+0x00000050u; // 801BF6A4
  c->r[4]=c->r[3]|c->r[3]; // 801BF6A8
  c->lr=0x801BF6B0u; f_80064C58(c); // 801BF6AC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF6B0
  c->r[3]=c->r[1]+0x00000038u; // 801BF6B4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF6B8
  c->f[4]=-c->f[0]; // 801BF6BC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF6C0
  c->f[2]=-c->f[1]; // 801BF6C4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801BF6C8
  c->f[3]=-c->f[0]; // 801BF6CC
  c->f[0]=c->ps1[0]=S(c->f[4]); // 801BF6D0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[4]);} // 801BF6D4
  c->f[1]=-c->f[0]; // 801BF6D8
  c->lr=0x801BF6E0u; f_800521A0(c); // 801BF6DC
  c->r[4]=c->r[30]|c->r[30]; // 801BF6E0
  c->r[3]=c->r[1]+0x0000002Cu; // 801BF6E4
  c->r[5]=c->r[1]+0x00000038u; // 801BF6E8
  c->lr=0x801BF6F0u; f_801011E8(c); // 801BF6EC
  c->r[4]=c->r[30]|c->r[30]; // 801BF6F0
  c->r[3]=c->r[1]+0x00000020u; // 801BF6F4
  c->r[5]=c->r[1]+0x00000038u; // 801BF6F8
  c->lr=0x801BF700u; f_8007B8A4(c); // 801BF6FC
  c->r[3]=c->r[29]|c->r[29]; // 801BF700
  c->lr=0x801BF708u; f_801BFF84(c); // 801BF704
  cmps(c,0,(int32_t)c->r[3],0); // 801BF708
  c->r[31]=c->r[3]|c->r[3]; // 801BF70C
  if (crb(c,2)) { goto L_801BF78C; } // 801BF710
  c->r[3]=c->r[1]+0x00000014u; // 801BF714
  c->r[4]=c->r[1]+0x0000002Cu; // 801BF718
  c->r[5]=c->r[31]+0x00000020u; // 801BF71C
  c->lr=0x801BF724u; f_8007B8A4(c); // 801BF720
  c->r[3]=c->r[1]+0x00000014u; // 801BF724
  c->lr=0x801BF72Cu; f_802657AC(c); // 801BF728
  c->f[31]=c->f[1]; // 801BF72C
  c->r[3]=c->r[1]+0x00000008u; // 801BF730
  c->r[4]=c->r[1]+0x00000020u; // 801BF734
  c->r[5]=c->r[31]+0x00000020u; // 801BF738
  c->lr=0x801BF740u; f_8007B8A4(c); // 801BF73C
  c->r[3]=c->r[1]+0x00000008u; // 801BF740
  c->lr=0x801BF748u; f_802657AC(c); // 801BF744
  fcmp(c,0,c->f[31],c->f[1]); // 801BF748
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BF74C
  if (!crb(c,2)) { goto L_801BF770; } // 801BF750
  c->r[3]=c->r[29]+0x00000020u; // 801BF754
  c->r[4]=c->r[1]+0x0000002Cu; // 801BF758
  c->lr=0x801BF760u; f_8003F468(c); // 801BF75C
  c->r[3]=c->r[29]+0x0000002Cu; // 801BF760
  c->r[4]=c->r[1]+0x00000020u; // 801BF764
  c->lr=0x801BF76Cu; f_8003F468(c); // 801BF768
  goto L_801BF7A4; // 801BF76C
L_801BF770:;
  c->r[3]=c->r[29]+0x00000020u; // 801BF770
  c->r[4]=c->r[1]+0x00000020u; // 801BF774
  c->lr=0x801BF77Cu; f_8003F468(c); // 801BF778
  c->r[3]=c->r[29]+0x0000002Cu; // 801BF77C
  c->r[4]=c->r[1]+0x0000002Cu; // 801BF780
  c->lr=0x801BF788u; f_8003F468(c); // 801BF784
  goto L_801BF7A4; // 801BF788
L_801BF78C:;
  c->r[3]=c->r[29]+0x00000020u; // 801BF78C
  c->r[4]=c->r[1]+0x0000002Cu; // 801BF790
  c->lr=0x801BF798u; f_8003F468(c); // 801BF794
  c->r[3]=c->r[29]+0x0000002Cu; // 801BF798
  c->r[4]=c->r[1]+0x00000020u; // 801BF79C
  c->lr=0x801BF7A4u; f_8003F468(c); // 801BF7A0
L_801BF7A4:;
  c->r[5]=R16(c->r[13]+0xFFFF93C4u); // 801BF7A4
  {uint32_t ea=c->r[2]+0xFFFFB700u; c->f[1]=RF64(ea);} // 801BF7A8
  c->r[3]=0u-c->r[5]; // 801BF7AC
  {uint32_t ea=c->r[29]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF7B0
  c->r[0]=c->r[3]^0x80000000u; // 801BF7B4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BF7B8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801BF7BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF7C0
  fcmp(c,0,c->f[2],c->f[0]); // 801BF7C4
  if (!crb(c,0)) { goto L_801BF7DC; } // 801BF7C8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BF7CC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801BF7D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF7D4
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[0]);} // 801BF7D8
L_801BF7DC:;
  W32(c->r[1]+0x00000064u,c->r[5]); // 801BF7DC
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[2]=RF64(ea);} // 801BF7E0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801BF7E4
  {uint32_t ea=c->r[2]+0xFFFFB6F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF7E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BF7EC
  {uint32_t ea=c->r[29]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BF7F0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF7F4
  fcmp(c,0,c->f[3],c->f[0]); // 801BF7F8
  if (!crb(c,1)) { goto L_801BF814; } // 801BF7FC
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 801BF800
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801BF804
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BF808
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF80C
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[0]);} // 801BF810
L_801BF814:;
  c->r[6]=R16(c->r[13]+0xFFFF93C6u); // 801BF814
  {uint32_t ea=c->r[2]+0xFFFFB700u; c->f[1]=RF64(ea);} // 801BF818
  c->r[4]=0u-c->r[6]; // 801BF81C
  {uint32_t ea=c->r[29]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF820
  c->r[0]=c->r[4]^0x80000000u; // 801BF824
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BF828
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801BF82C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF830
  fcmp(c,0,c->f[2],c->f[0]); // 801BF834
  if (!crb(c,0)) { goto L_801BF84C; } // 801BF838
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BF83C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801BF840
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF844
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 801BF848
L_801BF84C:;
  W32(c->r[1]+0x00000064u,c->r[6]); // 801BF84C
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[2]=RF64(ea);} // 801BF850
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801BF854
  {uint32_t ea=c->r[2]+0xFFFFB6F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF858
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BF85C
  {uint32_t ea=c->r[29]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BF860
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF864
  fcmp(c,0,c->f[3],c->f[0]); // 801BF868
  if (!crb(c,1)) { goto L_801BF884; } // 801BF86C
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 801BF870
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801BF874
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BF878
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF87C
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 801BF880
L_801BF884:;
  c->r[0]=c->r[3]^0x80000000u; // 801BF884
  {uint32_t ea=c->r[2]+0xFFFFB700u; c->f[1]=RF64(ea);} // 801BF888
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BF88C
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF890
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801BF894
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF898
  fcmp(c,0,c->f[2],c->f[0]); // 801BF89C
  if (!crb(c,0)) { goto L_801BF8B4; } // 801BF8A0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BF8A4
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801BF8A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF8AC
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 801BF8B0
L_801BF8B4:;
  W32(c->r[1]+0x00000064u,c->r[5]); // 801BF8B4
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[2]=RF64(ea);} // 801BF8B8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801BF8BC
  {uint32_t ea=c->r[2]+0xFFFFB6F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF8C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BF8C4
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BF8C8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF8CC
  fcmp(c,0,c->f[3],c->f[0]); // 801BF8D0
  if (!crb(c,1)) { goto L_801BF8EC; } // 801BF8D4
  W32(c->r[1]+0x0000006Cu,c->r[5]); // 801BF8D8
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801BF8DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BF8E0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF8E4
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 801BF8E8
L_801BF8EC:;
  c->r[0]=c->r[4]^0x80000000u; // 801BF8EC
  {uint32_t ea=c->r[2]+0xFFFFB700u; c->f[1]=RF64(ea);} // 801BF8F0
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BF8F4
  {uint32_t ea=c->r[29]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF8F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801BF8FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF900
  fcmp(c,0,c->f[2],c->f[0]); // 801BF904
  if (!crb(c,0)) { goto L_801BF91C; } // 801BF908
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801BF90C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801BF910
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BF914
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 801BF918
L_801BF91C:;
  W32(c->r[1]+0x00000064u,c->r[6]); // 801BF91C
  {uint32_t ea=c->r[2]+0xFFFFB6D0u; c->f[2]=RF64(ea);} // 801BF920
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801BF924
  {uint32_t ea=c->r[2]+0xFFFFB6F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF928
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BF92C
  {uint32_t ea=c->r[29]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BF930
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF934
  fcmp(c,0,c->f[3],c->f[0]); // 801BF938
  if (!crb(c,1)) { goto L_801BF954; } // 801BF93C
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 801BF940
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801BF944
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BF948
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BF94C
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 801BF950
L_801BF954:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801BF954
  c->r[11]=c->r[1]+0x00000080u; // 801BF958
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801BF95C
  c->lr=0x801BF964u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BF960
  c->r[0]=R32(c->r[1]+0x00000094u); // 801BF964
  c->lr=c->r[0]; // 801BF968
  c->r[1]=c->r[1]+0x00000090u; // 801BF96C
  return; // 801BF970
}

// fn_801BF974
void f_801BF974(Ctx* __restrict c) {
  trace_call(0x801BF974u);
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BF974
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BF978
  fcmp(c,0,c->f[2],c->f[3]); // 801BF97C
  if (!crb(c,0)) { goto L_801BF990; } // 801BF980
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[3]);} // 801BF984
  c->r[3]=0u+0x00000000u; // 801BF988
  return; // 801BF98C
L_801BF990:;
  {uint32_t ea=c->r[13]+0xFFFF93E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF990
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BF994
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801BF998
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BF99C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801BF9A0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 801BF9A4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BF9A8
  fcmp(c,0,c->f[0],c->f[3]); // 801BF9AC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801BF9B0
  if (!crb(c,0)) { goto L_801BF9BC; } // 801BF9B4
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[3]);} // 801BF9B8
L_801BF9BC:;
  c->r[3]=0u+0x00000001u; // 801BF9BC
  return; // 801BF9C0
}

// fn_801BF9C4
void f_801BF9C4(Ctx* __restrict c) {
  trace_call(0x801BF9C4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF9C4
  c->r[0]=c->lr; // 801BF9C8
  W32(c->r[1]+0x00000124u,c->r[0]); // 801BF9CC
  c->r[11]=c->r[1]+0x00000120u; // 801BF9D0
  c->lr=0x801BF9D8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF9D4
  c->r[28]=c->r[3]|c->r[3]; // 801BF9D8
  c->lr=0x801BF9E0u; f_801BFF84(c); // 801BF9DC
  cmps(c,0,(int32_t)c->r[3],0); // 801BF9E0
  c->r[29]=c->r[3]|c->r[3]; // 801BF9E4
  if (crb(c,2)) { goto L_801BFC10; } // 801BF9E8
  c->r[31]=R32(c->r[28]+0x00000004u); // 801BF9EC
  cmps(c,0,(int32_t)c->r[31],0); // 801BF9F0
  if (crb(c,2)) { goto L_801BF9FC; } // 801BF9F4
  goto L_801BFA00; // 801BF9F8
L_801BF9FC:;
  c->r[31]=0u+0x00000000u; // 801BF9FC
L_801BFA00:;
  c->r[3]=c->r[29]|c->r[29]; // 801BFA00
  c->lr=0x801BFA08u; f_801BFF84(c); // 801BFA04
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000002u); // 801BFA08
  c->r[30]=c->r[3]|c->r[3]; // 801BFA0C
  cmps(c,0,(int32_t)c->r[0],0); // 801BFA10
  if (!crb(c,2)) { goto L_801BFA28; } // 801BFA14
  c->r[3]=c->r[1]+0x00000098u; // 801BFA18
  c->r[4]=c->r[28]+0x00000020u; // 801BFA1C
  c->lr=0x801BFA24u; f_8003F468(c); // 801BFA20
  goto L_801BFA34; // 801BFA24
L_801BFA28:;
  c->r[3]=c->r[1]+0x00000098u; // 801BFA28
  c->r[4]=c->r[31]+0x00000020u; // 801BFA2C
  c->lr=0x801BFA34u; f_8003F468(c); // 801BFA30
L_801BFA34:;
  c->r[3]=c->r[1]+0x000000A4u; // 801BFA34
  c->r[4]=c->r[28]+0x00000020u; // 801BFA38
  c->lr=0x801BFA40u; f_8003F468(c); // 801BFA3C
  c->r[3]=c->r[1]+0x000000B0u; // 801BFA40
  c->r[4]=c->r[29]+0x00000020u; // 801BFA44
  c->lr=0x801BFA4Cu; f_8003F468(c); // 801BFA48
  cmps(c,0,(int32_t)c->r[30],0); // 801BFA4C
  if (crb(c,2)) { goto L_801BFA64; } // 801BFA50
  c->r[3]=c->r[1]+0x000000BCu; // 801BFA54
  c->r[4]=c->r[30]+0x00000020u; // 801BFA58
  c->lr=0x801BFA60u; f_8003F468(c); // 801BFA5C
  goto L_801BFA70; // 801BFA60
L_801BFA64:;
  c->r[3]=c->r[1]+0x000000BCu; // 801BFA64
  c->r[4]=c->r[29]+0x00000020u; // 801BFA68
  c->lr=0x801BFA70u; f_8003F468(c); // 801BFA6C
L_801BFA70:;
  {uint32_t ea=c->r[2]+0xFFFFB708u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFA70
  c->r[4]=c->r[28]|c->r[28]; // 801BFA74
  c->r[3]=c->r[1]+0x0000008Cu; // 801BFA78
  c->r[5]=c->r[1]+0x00000098u; // 801BFA7C
  c->lr=0x801BFA84u; f_801BFD6C(c); // 801BFA80
  c->r[3]=c->r[1]+0x000000ECu; // 801BFA84
  c->r[4]=c->r[1]+0x0000008Cu; // 801BFA88
  c->lr=0x801BFA90u; f_8003F468(c); // 801BFA8C
  {uint32_t ea=c->r[2]+0xFFFFB6E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFA90
  c->r[4]=c->r[28]|c->r[28]; // 801BFA94
  c->r[3]=c->r[1]+0x00000080u; // 801BFA98
  c->r[5]=c->r[1]+0x00000098u; // 801BFA9C
  c->lr=0x801BFAA4u; f_801BFD6C(c); // 801BFAA0
  c->r[3]=c->r[1]+0x000000F8u; // 801BFAA4
  c->r[4]=c->r[1]+0x00000080u; // 801BFAA8
  c->lr=0x801BFAB0u; f_8003F468(c); // 801BFAAC
  {uint32_t ea=c->r[2]+0xFFFFB70Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFAB0
  c->r[4]=c->r[28]|c->r[28]; // 801BFAB4
  c->r[3]=c->r[1]+0x00000074u; // 801BFAB8
  c->r[5]=c->r[1]+0x00000098u; // 801BFABC
  c->lr=0x801BFAC4u; f_801BFD6C(c); // 801BFAC0
  c->r[3]=c->r[1]+0x00000104u; // 801BFAC4
  c->r[4]=c->r[1]+0x00000074u; // 801BFAC8
  c->lr=0x801BFAD0u; f_8003F468(c); // 801BFACC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000002u); // 801BFAD0
  cmps(c,0,(int32_t)c->r[0],0); // 801BFAD4
  if (!crb(c,2)) { goto L_801BFAEC; } // 801BFAD8
  c->r[3]=c->r[1]+0x00000098u; // 801BFADC
  c->r[4]=c->r[28]+0x0000002Cu; // 801BFAE0
  c->lr=0x801BFAE8u; f_8003F468(c); // 801BFAE4
  goto L_801BFAF8; // 801BFAE8
L_801BFAEC:;
  c->r[3]=c->r[1]+0x00000098u; // 801BFAEC
  c->r[4]=c->r[31]+0x0000002Cu; // 801BFAF0
  c->lr=0x801BFAF8u; f_8003F468(c); // 801BFAF4
L_801BFAF8:;
  c->r[3]=c->r[1]+0x000000A4u; // 801BFAF8
  c->r[4]=c->r[28]+0x0000002Cu; // 801BFAFC
  c->lr=0x801BFB04u; f_8003F468(c); // 801BFB00
  c->r[3]=c->r[1]+0x000000B0u; // 801BFB04
  c->r[4]=c->r[29]+0x0000002Cu; // 801BFB08
  c->lr=0x801BFB10u; f_8003F468(c); // 801BFB0C
  cmps(c,0,(int32_t)c->r[30],0); // 801BFB10
  if (crb(c,2)) { goto L_801BFB28; } // 801BFB14
  c->r[3]=c->r[1]+0x000000BCu; // 801BFB18
  c->r[4]=c->r[30]+0x0000002Cu; // 801BFB1C
  c->lr=0x801BFB24u; f_8003F468(c); // 801BFB20
  goto L_801BFB34; // 801BFB24
L_801BFB28:;
  c->r[3]=c->r[1]+0x000000BCu; // 801BFB28
  c->r[4]=c->r[29]+0x0000002Cu; // 801BFB2C
  c->lr=0x801BFB34u; f_8003F468(c); // 801BFB30
L_801BFB34:;
  {uint32_t ea=c->r[2]+0xFFFFB708u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFB34
  c->r[4]=c->r[28]|c->r[28]; // 801BFB38
  c->r[3]=c->r[1]+0x00000068u; // 801BFB3C
  c->r[5]=c->r[1]+0x00000098u; // 801BFB40
  c->lr=0x801BFB48u; f_801BFD6C(c); // 801BFB44
  c->r[3]=c->r[1]+0x000000C8u; // 801BFB48
  c->r[4]=c->r[1]+0x00000068u; // 801BFB4C
  c->lr=0x801BFB54u; f_8003F468(c); // 801BFB50
  {uint32_t ea=c->r[2]+0xFFFFB6E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFB54
  c->r[4]=c->r[28]|c->r[28]; // 801BFB58
  c->r[3]=c->r[1]+0x0000005Cu; // 801BFB5C
  c->r[5]=c->r[1]+0x00000098u; // 801BFB60
  c->lr=0x801BFB68u; f_801BFD6C(c); // 801BFB64
  c->r[3]=c->r[1]+0x000000D4u; // 801BFB68
  c->r[4]=c->r[1]+0x0000005Cu; // 801BFB6C
  c->lr=0x801BFB74u; f_8003F468(c); // 801BFB70
  {uint32_t ea=c->r[2]+0xFFFFB70Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFB74
  c->r[4]=c->r[28]|c->r[28]; // 801BFB78
  c->r[3]=c->r[1]+0x00000050u; // 801BFB7C
  c->r[5]=c->r[1]+0x00000098u; // 801BFB80
  c->lr=0x801BFB88u; f_801BFD6C(c); // 801BFB84
  c->r[3]=c->r[1]+0x000000E0u; // 801BFB88
  c->r[4]=c->r[1]+0x00000050u; // 801BFB8C
  c->lr=0x801BFB94u; f_8003F468(c); // 801BFB90
  c->r[3]=c->r[1]+0x00000038u; // 801BFB94
  c->r[4]=c->r[28]+0x0000002Cu; // 801BFB98
  c->lr=0x801BFBA0u; f_8003F484(c); // 801BFB9C
  c->r[30]=c->r[3]|c->r[3]; // 801BFBA0
  c->r[3]=c->r[1]+0x00000044u; // 801BFBA4
  c->r[4]=c->r[28]+0x00000020u; // 801BFBA8
  c->lr=0x801BFBB0u; f_8003F484(c); // 801BFBAC
  c->r[4]=c->r[3]|c->r[3]; // 801BFBB0
  c->r[3]=c->r[28]|c->r[28]; // 801BFBB4
  c->r[5]=c->r[30]|c->r[30]; // 801BFBB8
  c->lr=0x801BFBC0u; f_801BFC54(c); // 801BFBBC
  c->r[29]=0u+0x00000000u; // 801BFBC0
  c->r[31]=0u+0x00000000u; // 801BFBC4
L_801BFBC8:;
  c->r[4]=c->r[1]+0x000000C8u; // 801BFBC8
  c->r[3]=c->r[1]+0x00000020u; // 801BFBCC
  c->r[4]=c->r[4]+c->r[31]; // 801BFBD0
  c->lr=0x801BFBD8u; f_8003F484(c); // 801BFBD4
  c->r[4]=c->r[1]+0x000000ECu; // 801BFBD8
  c->r[30]=c->r[3]|c->r[3]; // 801BFBDC
  c->r[3]=c->r[1]+0x0000002Cu; // 801BFBE0
  c->r[4]=c->r[4]+c->r[31]; // 801BFBE4
  c->lr=0x801BFBECu; f_8003F484(c); // 801BFBE8
  c->r[4]=c->r[3]|c->r[3]; // 801BFBEC
  c->r[3]=c->r[28]|c->r[28]; // 801BFBF0
  c->r[5]=c->r[30]|c->r[30]; // 801BFBF4
  c->lr=0x801BFBFCu; f_801BFC54(c); // 801BFBF8
  c->r[29]=c->r[29]+0x00000001u; // 801BFBFC
  c->r[31]=c->r[31]+0x0000000Cu; // 801BFC00
  cmps(c,0,(int32_t)c->r[29],3); // 801BFC04
  if (crb(c,0)) { IRQCHK(c); goto L_801BFBC8; } // 801BFC08
  goto L_801BFC3C; // 801BFC0C
L_801BFC10:;
  c->r[3]=c->r[1]+0x00000008u; // 801BFC10
  c->r[4]=c->r[28]+0x0000002Cu; // 801BFC14
  c->lr=0x801BFC1Cu; f_8003F484(c); // 801BFC18
  c->r[31]=c->r[3]|c->r[3]; // 801BFC1C
  c->r[3]=c->r[1]+0x00000014u; // 801BFC20
  c->r[4]=c->r[28]+0x00000020u; // 801BFC24
  c->lr=0x801BFC2Cu; f_8003F484(c); // 801BFC28
  c->r[4]=c->r[3]|c->r[3]; // 801BFC2C
  c->r[3]=c->r[28]|c->r[28]; // 801BFC30
  c->r[5]=c->r[31]|c->r[31]; // 801BFC34
  c->lr=0x801BFC3Cu; f_801BFC54(c); // 801BFC38
L_801BFC3C:;
  c->r[11]=c->r[1]+0x00000120u; // 801BFC3C
  c->lr=0x801BFC44u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFC40
  c->r[0]=R32(c->r[1]+0x00000124u); // 801BFC44
  c->lr=c->r[0]; // 801BFC48
  c->r[1]=c->r[1]+0x00000120u; // 801BFC4C
  return; // 801BFC50
}

// fn_801BFC54
void f_801BFC54(Ctx* __restrict c) {
  trace_call(0x801BFC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFC54
  c->r[0]=c->lr; // 801BFC58
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BFC5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801BFC60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801BFC64
  c->r[11]=c->r[1]+0x00000030u; // 801BFC68
  c->lr=0x801BFC70u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BFC6C
  {uint32_t ea=c->r[2]+0xFFFFB6E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFC70
  c->r[29]=c->r[3]|c->r[3]; // 801BFC74
  {uint32_t ea=c->r[13]+0xFFFF9718u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFC78
  c->r[0]=0u+0x43300000u; // 801BFC7C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801BFC80
  c->r[30]=c->r[5]|c->r[5]; // 801BFC84
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[0]); // 801BFC88
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BFC8C
  c->r[0]=c->r[3]^0x80000000u; // 801BFC90
  {uint32_t ea=c->r[2]+0xFFFFB700u; c->f[3]=RF64(ea);} // 801BFC94
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BFC98
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFC9C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BFCA0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFCA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801BFCA8
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BFCAC
  c->f[31]=c->ps1[31]=S(c->f[4]*c->f[0]); // 801BFCB0
  c->lr=0x801BFCB8u; f_801BFFB0(c); // 801BFCB4
  {uint32_t ea=c->r[2]+0xFFFFB6F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFCB8
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFCBC
  c->r[3]=R8(c->r[29]+0x00000040u); // 801BFCC0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BFCC4
  c->r[4]=R8(c->r[29]+0x00000041u); // 801BFCC8
  c->r[5]=R8(c->r[29]+0x00000042u); // 801BFCCC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BFCD0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801BFCD4
  c->r[6]=R32(c->r[1]+0x00000014u); // 801BFCD8
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801BFCDC
  c->lr=0x801BFCE4u; f_801BFFC4(c); // 801BFCE0
  {uint32_t ea=c->r[2]+0xFFFFB6E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFCE4
  c->r[31]=0u+0xCC010000u; // 801BFCE8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFCEC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 801BFCF0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFCF4
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BFCF8
  {uint32_t ea=c->r[31]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801BFCFC
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFD00
  {uint32_t ea=c->r[31]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801BFD04
  c->lr=0x801BFD0Cu; f_801BFFB0(c); // 801BFD08
  {uint32_t ea=c->r[2]+0xFFFFB6F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFD0C
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFD10
  c->r[3]=R8(c->r[29]+0x00000040u); // 801BFD14
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BFD18
  c->r[4]=R8(c->r[29]+0x00000041u); // 801BFD1C
  c->r[5]=R8(c->r[29]+0x00000042u); // 801BFD20
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BFD24
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801BFD28
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 801BFD2C
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801BFD30
  c->lr=0x801BFD38u; f_801BFFC4(c); // 801BFD34
  {uint32_t ea=c->r[2]+0xFFFFB6E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFD38
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 801BFD3C
  {uint32_t ea=c->r[31]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801BFD40
  {uint32_t ea=c->r[2]+0xFFFFB6C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFD44
  {uint32_t ea=c->r[31]+0xFFFF8000u; WF32(ea,c->f[0]);} // 801BFD48
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801BFD4C
  c->r[11]=c->r[1]+0x00000030u; // 801BFD50
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801BFD54
  c->lr=0x801BFD5Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFD58
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BFD5C
  c->lr=c->r[0]; // 801BFD60
  c->r[1]=c->r[1]+0x00000040u; // 801BFD64
  return; // 801BFD68
}

// fn_801BFD6C
void f_801BFD6C(Ctx* __restrict c) {
  trace_call(0x801BFD6Cu);
  c->f[10]=c->ps1[10]=S(c->f[1]*c->f[1]); // 801BFD6C
  {uint32_t ea=c->r[2]+0xFFFFB6E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFD70
  {uint32_t ea=c->r[2]+0xFFFFB6E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BFD74
  {uint32_t ea=c->r[2]+0xFFFFB6F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFD78
  c->f[11]=c->ps1[11]=S(c->f[10]*c->f[1]); // 801BFD7C
  {uint32_t ea=c->r[2]+0xFFFFB6C0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BFD80
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[10]); // 801BFD84
  {uint32_t ea=c->r[2]+0xFFFFB6E0u; c->f[8]=c->ps1[8]=RF32(ea);} // 801BFD88
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[10]); // 801BFD8C
  {uint32_t ea=c->r[2]+0xFFFFB6ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFD90
  c->f[7]=c->ps1[7]=S(std::fma(c->f[3],c->f[11],-c->f[6])); // 801BFD94
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801BFD98
  c->f[9]=-c->f[11]; // 801BFD9C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BFDA0
  c->f[6]=c->ps1[6]=S(std::fma(c->f[0],c->f[11],c->f[2])); // 801BFDA4
  {uint32_t ea=c->r[5]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFDA8
  c->f[12]=c->ps1[12]=S(c->f[5]+c->f[7]); // 801BFDAC
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFDB0
  c->f[9]=c->ps1[9]=S(c->f[9]-c->f[1]); // 801BFDB4
  c->f[5]=c->ps1[5]=S(c->f[11]-c->f[10]); // 801BFDB8
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[12]); // 801BFDBC
  c->f[7]=c->ps1[7]=S(std::fma(c->f[8],c->f[9],c->f[10])); // 801BFDC0
  c->f[6]=c->ps1[6]=S(std::fma(c->f[8],c->f[1],c->f[6])); // 801BFDC4
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[5]); // 801BFDC8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[3],c->f[7],c->f[4])); // 801BFDCC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[6],c->f[1])); // 801BFDD0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[5],c->f[1])); // 801BFDD4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801BFDD8
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFDDC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFDE0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[12]); // 801BFDE4
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFDE8
  {uint32_t ea=c->r[5]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFDEC
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[7],c->f[3])); // 801BFDF0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[6],c->f[2])); // 801BFDF4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[5],c->f[1])); // 801BFDF8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801BFDFC
  {uint32_t ea=c->r[5]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFE00
  {uint32_t ea=c->r[5]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFE04
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[12]); // 801BFE08
  {uint32_t ea=c->r[5]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFE0C
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFE10
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[7],c->f[3])); // 801BFE14
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[6],c->f[2])); // 801BFE18
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[5],c->f[1])); // 801BFE1C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801BFE20
  return; // 801BFE24
}

// dtor_801BFE28
void f_801BFE28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFE28
  c->r[0]=c->lr; // 801BFE2C
  cmps(c,0,(int32_t)c->r[3],0); // 801BFE30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFE34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BFE38
  c->r[31]=c->r[3]|c->r[3]; // 801BFE3C
  if (crb(c,2)) { goto L_801BFE98; } // 801BFE40
  c->r[5]=R32(c->r[3]+0x00000004u); // 801BFE44
  cmps(c,0,(int32_t)c->r[5],0); // 801BFE48
  if (crb(c,2)) { goto L_801BFE58; } // 801BFE4C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801BFE50
  W32(c->r[5]+0x00000008u,c->r[0]); // 801BFE54
L_801BFE58:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 801BFE58
  cmps(c,0,(int32_t)c->r[5],0); // 801BFE5C
  if (crb(c,2)) { goto L_801BFE6C; } // 801BFE60
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BFE64
  W32(c->r[5]+0x00000004u,c->r[0]); // 801BFE68
L_801BFE6C:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801BFE6C
  cmps(c,0,(int32_t)c->r[0],0); // 801BFE70
  if (!crb(c,2)) { goto L_801BFE88; } // 801BFE74
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BFE78
  cmps(c,0,(int32_t)c->r[3],0); // 801BFE7C
  if (crb(c,2)) { goto L_801BFE88; } // 801BFE80
  W32(c->r[3]+0x0000000Cu,c->r[3]); // 801BFE84
L_801BFE88:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BFE88
  if (!crb(c,1)) { goto L_801BFE98; } // 801BFE8C
  c->r[3]=c->r[31]|c->r[31]; // 801BFE90
  c->lr=0x801BFE98u; f_802896EC(c); // 801BFE94
L_801BFE98:;
  c->r[3]=c->r[31]|c->r[31]; // 801BFE98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BFE9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFEA0
  c->lr=c->r[0]; // 801BFEA4
  c->r[1]=c->r[1]+0x00000010u; // 801BFEA8
  return; // 801BFEAC
}

// fn_801BFEB0
void f_801BFEB0(Ctx* __restrict c) {
  trace_call(0x801BFEB0u);
  c->r[5]=0u+0x80400000u; // 801BFEB0
  c->r[0]=0u+0x00000000u; // 801BFEB4
  c->r[5]=c->r[5]+0x00001CE8u; // 801BFEB8
  c->r[4]=0u+0xFFFFFFFFu; // 801BFEBC
  W32(c->r[3]+0x00000010u,c->r[5]); // 801BFEC0
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BFEC4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801BFEC8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BFECC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BFED0
  W32(c->r[3]+0x0000000Cu,c->r[3]); // 801BFED4
  return; // 801BFED8
}

// dtor_801BFEDC
void f_801BFEDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFEDC
  c->r[0]=c->lr; // 801BFEE0
  cmps(c,0,(int32_t)c->r[3],0); // 801BFEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFEE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BFEEC
  c->r[31]=c->r[3]|c->r[3]; // 801BFEF0
  if (crb(c,2)) { goto L_801BFF4C; } // 801BFEF4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801BFEF8
  cmps(c,0,(int32_t)c->r[5],0); // 801BFEFC
  if (crb(c,2)) { goto L_801BFF0C; } // 801BFF00
  c->r[0]=R32(c->r[3]+0x00000008u); // 801BFF04
  W32(c->r[5]+0x00000008u,c->r[0]); // 801BFF08
L_801BFF0C:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 801BFF0C
  cmps(c,0,(int32_t)c->r[5],0); // 801BFF10
  if (crb(c,2)) { goto L_801BFF20; } // 801BFF14
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BFF18
  W32(c->r[5]+0x00000004u,c->r[0]); // 801BFF1C
L_801BFF20:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801BFF20
  cmps(c,0,(int32_t)c->r[0],0); // 801BFF24
  if (!crb(c,2)) { goto L_801BFF3C; } // 801BFF28
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BFF2C
  cmps(c,0,(int32_t)c->r[3],0); // 801BFF30
  if (crb(c,2)) { goto L_801BFF3C; } // 801BFF34
  W32(c->r[3]+0x0000000Cu,c->r[3]); // 801BFF38
L_801BFF3C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BFF3C
  if (!crb(c,1)) { goto L_801BFF4C; } // 801BFF40
  c->r[3]=c->r[31]|c->r[31]; // 801BFF44
  c->lr=0x801BFF4Cu; f_802896EC(c); // 801BFF48
L_801BFF4C:;
  c->r[3]=c->r[31]|c->r[31]; // 801BFF4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BFF50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFF54
  c->lr=c->r[0]; // 801BFF58
  c->r[1]=c->r[1]+0x00000010u; // 801BFF5C
  return; // 801BFF60
}

// fn_801BFF64
void f_801BFF64(Ctx* __restrict c) {
  trace_call(0x801BFF64u);
  c->r[4]=R32(c->r[3]+0x00000008u); // 801BFF64
  c->r[3]=0u+0x00000000u; // 801BFF68
  goto L_801BFF78; // 801BFF6C
L_801BFF70:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 801BFF70
  c->r[3]=c->r[3]+0x00000001u; // 801BFF74
L_801BFF78:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BFF78
  if (!crb(c,2)) { IRQCHK(c); goto L_801BFF70; } // 801BFF7C
  return; // 801BFF80
}

// fn_801BFF84
void f_801BFF84(Ctx* __restrict c) {
  trace_call(0x801BFF84u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801BFF84
  cmps(c,0,(int32_t)c->r[3],0); // 801BFF88
  if (!crb(c,2)) return; // 801BFF8C
  c->r[3]=0u+0x00000000u; // 801BFF90
  return; // 801BFF94
}

// fn_801BFF98
void f_801BFF98(Ctx* __restrict c) {
  trace_call(0x801BFF98u);
  c->r[3]=0u+0x00000001u; // 801BFF98
  return; // 801BFF9C
}

// fn_801BFFA0
void f_801BFFA0(Ctx* __restrict c) {
  trace_call(0x801BFFA0u);
  return; // 801BFFA0
}

// fn_801BFFA4
void f_801BFFA4(Ctx* __restrict c) {
  trace_call(0x801BFFA4u);
  c->r[3]=0u+0x00000001u; // 801BFFA4
  return; // 801BFFA8
}

// fn_801BFFAC
void f_801BFFAC(Ctx* __restrict c) {
  trace_call(0x801BFFACu);
  return; // 801BFFAC
}

// fn_801BFFB0
void f_801BFFB0(Ctx* __restrict c) {
  trace_call(0x801BFFB0u);
  c->r[3]=0u+0xCC010000u; // 801BFFB0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 801BFFB4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 801BFFB8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 801BFFBC
  return; // 801BFFC0
}

// fn_801BFFC4
void f_801BFFC4(Ctx* __restrict c) {
  trace_call(0x801BFFC4u);
  c->r[7]=0u+0xCC010000u; // 801BFFC4
  W8(c->r[7]+0xFFFF8000u,c->r[3]); // 801BFFC8
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 801BFFCC
  W8(c->r[7]+0xFFFF8000u,c->r[5]); // 801BFFD0
  W8(c->r[7]+0xFFFF8000u,c->r[6]); // 801BFFD4
  return; // 801BFFD8
}

// fn_801BFFDC
void f_801BFFDC(Ctx* __restrict c) {
  trace_call(0x801BFFDCu);
  {uint32_t ea=c->r[2]+0xFFFFB6B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFFDC
  c->r[3]=0u+0x80570000u; // 801BFFE0
  {uint32_t ea=c->r[2]+0xFFFFB6C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFFE4
  c->r[3]=c->r[3]+0x0000006Cu; // 801BFFE8
  c->f[3]=c->f[1]; // 801BFFEC
  f_8003F588(c); return; // 801BFFF0
}

// fn_801BFFF4
void f_801BFFF4(Ctx* __restrict c) {
  trace_call(0x801BFFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFFF4
  c->r[0]=c->lr; // 801BFFF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFFFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0000
  c->r[31]=c->r[3]|c->r[3]; // 801C0004
  c->lr=0x801C000Cu; f_801C0220(c); // 801C0008
  c->r[3]=c->r[31]|c->r[31]; // 801C000C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0010
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0014
  c->lr=c->r[0]; // 801C0018
  c->r[1]=c->r[1]+0x00000010u; // 801C001C
  return; // 801C0020
}

// fn_801C0024
void f_801C0024(Ctx* __restrict c) {
  trace_call(0x801C0024u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0024
  c->r[0]=c->lr; // 801C0028
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C002C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C0030
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C0034
  goto L_801C004C; // 801C0038
L_801C003C:;
  c->r[31]=R32(c->r[3]+0x00000004u); // 801C003C
  c->r[4]=0u+0x00000001u; // 801C0040
  c->lr=0x801C0048u; f_801BEB54(c); // 801C0044
  c->r[3]=R32(c->r[31]+0x00000008u); // 801C0048
L_801C004C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C004C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C003C; } // 801C0050
  c->r[3]=c->r[1]+0x00000008u; // 801C0054
  c->lr=0x801C005Cu; f_801C0220(c); // 801C0058
  c->r[3]=c->r[1]+0x00000008u; // 801C005C
  c->r[4]=0u+0xFFFFFFFFu; // 801C0060
  c->lr=0x801C0068u; f_801BFE28(c); // 801C0064
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C0068
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C006C
  c->lr=c->r[0]; // 801C0070
  c->r[1]=c->r[1]+0x00000030u; // 801C0074
  return; // 801C0078
}

// fn_801C007C
void f_801C007C(Ctx* __restrict c) {
  trace_call(0x801C007Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C007C
  c->r[0]=c->lr; // 801C0080
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0084
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C0088
  c->r[29]=c->r[3]|c->r[3]; // 801C008C
  c->r[30]=c->r[4]|c->r[4]; // 801C0090
  c->lr=0x801C0098u; f_8013CE3C(c); // 801C0094
  c->r[4]=0u+0x00000070u; // 801C0098
  c->lr=0x801C00A0u; f_80060C7C(c); // 801C009C
  cmps(c,0,(int32_t)c->r[3],0); // 801C00A0
  c->r[31]=c->r[3]|c->r[3]; // 801C00A4
  if (crb(c,2)) { goto L_801C00B0; } // 801C00A8
  c->lr=0x801C00B0u; f_801BEAF0(c); // 801C00AC
L_801C00B0:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801C00B0
  cmps(c,0,(int32_t)c->r[3],0); // 801C00B4
  if (crb(c,2)) { goto L_801C00CC; } // 801C00B8
  W32(c->r[3]+0x00000008u,c->r[31]); // 801C00BC
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801C00C0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C00C4
  goto L_801C00D0; // 801C00C8
L_801C00CC:;
  W32(c->r[31]+0x00000004u,c->r[29]); // 801C00CC
L_801C00D0:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801C00D0
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801C00D4
  cmps(c,0,(int32_t)c->r[0],0); // 801C00D8
  if (!crb(c,2)) { goto L_801C00E4; } // 801C00DC
  W32(c->r[29]+0x00000008u,c->r[31]); // 801C00E0
L_801C00E4:;
  c->r[4]=c->r[30]|c->r[30]; // 801C00E4
  c->r[3]=c->r[1]+0x00000008u; // 801C00E8
  c->lr=0x801C00F0u; f_80350B74(c); // 801C00EC
  c->r[3]=c->r[31]|c->r[31]; // 801C00F0
  c->r[4]=c->r[1]+0x00000008u; // 801C00F4
  c->lr=0x801C00FCu; f_801BEBFC(c); // 801C00F8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C00FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0100
  c->lr=c->r[0]; // 801C0104
  c->r[1]=c->r[1]+0x00000020u; // 801C0108
  return; // 801C010C
}

// fn_801C0110
void f_801C0110(Ctx* __restrict c) {
  trace_call(0x801C0110u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0110
  c->r[0]=c->lr; // 801C0114
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0118
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C011C
  c->r[29]=c->r[3]|c->r[3]; // 801C0120
  c->r[30]=0u+0x00000000u; // 801C0124
  c->r[31]=R32(c->r[3]+0x00000008u); // 801C0128
  goto L_801C0180; // 801C012C
L_801C0130:;
  c->r[12]=R32(c->r[31]+0x00000010u); // 801C0130
  c->r[3]=c->r[31]|c->r[31]; // 801C0134
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C0138
  c->ctr=c->r[12]; // 801C013C
  if (true) { c->lr=0x801C0144u; dispatch(c,c->ctr); } // 801C0140
  cmps(c,0,(int32_t)c->r[3],0); // 801C0144
  if (!crb(c,2)) { goto L_801C0174; } // 801C0148
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801C014C
  c->r[3]=c->r[31]|c->r[31]; // 801C0150
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C0154
  c->r[31]=R32(c->r[31]+0x00000004u); // 801C0158
  cmpu(c,0,c->r[4],c->r[0]); // 801C015C
  if (!crb(c,2)) { goto L_801C0168; } // 801C0160
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801C0164
L_801C0168:;
  c->r[4]=0u+0x00000001u; // 801C0168
  c->lr=0x801C0170u; f_801BEB54(c); // 801C016C
  goto L_801C017C; // 801C0170
L_801C0174:;
  W16(c->r[31]+0x00000002u,c->r[30]); // 801C0174
  c->r[30]=c->r[30]+0x00000001u; // 801C0178
L_801C017C:;
  c->r[31]=R32(c->r[31]+0x00000008u); // 801C017C
L_801C0180:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C0180
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0130; } // 801C0184
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C0188
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C018C
  c->lr=c->r[0]; // 801C0190
  c->r[1]=c->r[1]+0x00000020u; // 801C0194
  return; // 801C0198
}

// fn_801C019C
void f_801C019C(Ctx* __restrict c) {
  trace_call(0x801C019Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C019C
  c->r[0]=c->lr; // 801C01A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C01A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C01A8
  c->r[31]=c->r[3]|c->r[3]; // 801C01AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C01B0
  cmps(c,0,(int32_t)c->r[0],0); // 801C01B4
  if (crb(c,2)) { goto L_801C01C0; } // 801C01B8
  goto L_801C01C4; // 801C01BC
L_801C01C0:;
  c->r[0]=0u+0x00000000u; // 801C01C0
L_801C01C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C01C4
  if (crb(c,2)) { goto L_801C020C; } // 801C01C8
  c->r[3]=0u+0x00000001u; // 801C01CC
  c->r[4]=0u+0x00000008u; // 801C01D0
  c->lr=0x801C01D8u; f_80284478(c); // 801C01D4
  c->r[31]=R32(c->r[31]+0x00000008u); // 801C01D8
  goto L_801C01F8; // 801C01DC
L_801C01E0:;
  c->r[12]=R32(c->r[31]+0x00000010u); // 801C01E0
  c->r[3]=c->r[31]|c->r[31]; // 801C01E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C01E8
  c->ctr=c->r[12]; // 801C01EC
  if (true) { c->lr=0x801C01F4u; dispatch(c,c->ctr); } // 801C01F0
  c->r[31]=R32(c->r[31]+0x00000008u); // 801C01F4
L_801C01F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C01F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C01E0; } // 801C01FC
  c->r[3]=0u+0x00000001u; // 801C0200
  c->r[4]=0u+0x00000000u; // 801C0204
  c->lr=0x801C020Cu; f_80284478(c); // 801C0208
L_801C020C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C020C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0210
  c->lr=c->r[0]; // 801C0214
  c->r[1]=c->r[1]+0x00000010u; // 801C0218
  return; // 801C021C
}

// fn_801C0220
void f_801C0220(Ctx* __restrict c) {
  trace_call(0x801C0220u);
  c->r[5]=0u+0x80400000u; // 801C0220
  c->r[0]=0u+0x00000000u; // 801C0224
  c->r[5]=c->r[5]+0x00001CC8u; // 801C0228
  c->r[4]=0u+0xFFFFFFFFu; // 801C022C
  W32(c->r[3]+0x00000010u,c->r[5]); // 801C0230
  W16(c->r[3]+0x00000002u,c->r[4]); // 801C0234
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C0238
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C023C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C0240
  W32(c->r[3]+0x0000000Cu,c->r[3]); // 801C0244
  return; // 801C0248
}

// HBMSetAdjustFlag
void f_801C024C(Ctx* __restrict c) {
  trace_call(0x801C024Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C024C
  c->r[0]=c->lr; // 801C0250
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0258
  c->r[31]=c->r[3]|c->r[3]; // 801C025C
  c->lr=0x801C0264u; f_8013CE3C(c); // 801C0260
  c->r[4]=c->r[31]|c->r[31]; // 801C0264
  c->lr=0x801C026Cu; f_80060DFC(c); // 801C0268
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C026C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0270
  c->lr=c->r[0]; // 801C0274
  c->r[1]=c->r[1]+0x00000010u; // 801C0278
  return; // 801C027C
}

// fn_801C0280
void f_801C0280(Ctx* __restrict c) {
  trace_call(0x801C0280u);
  {uint32_t ea=c->r[2]+0xFFFFB710u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0280
  c->r[3]=0u+0x80570000u; // 801C0284
  {uint32_t ea=c->r[2]+0xFFFFB714u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0288
  c->r[3]=c->r[3]+0x00000078u; // 801C028C
  c->f[3]=c->f[1]; // 801C0290
  f_8003F588(c); return; // 801C0294
}

// fn_801C0298
void f_801C0298(Ctx* __restrict c) {
  trace_call(0x801C0298u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0298
  c->r[0]=c->lr; // 801C029C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C02A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C02A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C02A8
  c->r[30]=c->r[3]|c->r[3]; // 801C02AC
  c->lr=0x801C02B4u; f_801C236C(c); // 801C02B0
  {uint32_t ea=c->r[2]+0xFFFFB718u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C02B4
  c->r[31]=0u+0x803E0000u; // 801C02B8
  {uint32_t ea=c->r[2]+0xFFFFB71Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C02BC
  c->r[3]=c->r[30]+0x00002180u; // 801C02C0
  {uint32_t ea=c->r[30]+0x000021E8u; WF32(ea,c->f[1]);} // 801C02C4
  c->r[4]=c->r[31]+0x000009A0u; // 801C02C8
  {uint32_t ea=c->r[30]+0x00001FE8u; WF32(ea,c->f[0]);} // 801C02CC
  c->lr=0x801C02D4u; f_802933D8(c); // 801C02D0
  c->r[31]=c->r[31]+0x000009A0u; // 801C02D4
  c->r[3]=c->r[30]+0x00002194u; // 801C02D8
  c->r[4]=c->r[31]+0x0000000Au; // 801C02DC
  c->lr=0x801C02E4u; f_802933D8(c); // 801C02E0
  c->r[3]=c->r[30]+0x000021A8u; // 801C02E4
  c->r[4]=c->r[31]+0x00000012u; // 801C02E8
  c->lr=0x801C02F0u; f_802933D8(c); // 801C02EC
  c->r[3]=c->r[30]+0x000021BCu; // 801C02F0
  c->r[4]=c->r[31]+0x0000001Au; // 801C02F4
  c->lr=0x801C02FCu; f_802933D8(c); // 801C02F8
  c->r[3]=c->r[30]+0x00001F65u; // 801C02FC
  c->r[4]=c->r[31]+0x00000022u; // 801C0300
  c->lr=0x801C0308u; f_802933D8(c); // 801C0304
  c->r[3]=c->r[30]+0x00001F79u; // 801C0308
  c->r[4]=c->r[31]+0x0000002Fu; // 801C030C
  c->lr=0x801C0314u; f_802933D8(c); // 801C0310
  c->r[3]=c->r[30]+0x00001F8Du; // 801C0314
  c->r[4]=c->r[31]+0x0000003Cu; // 801C0318
  c->lr=0x801C0320u; f_802933D8(c); // 801C031C
  c->r[3]=c->r[30]+0x000021D0u; // 801C0320
  c->r[4]=c->r[31]+0x0000004Au; // 801C0324
  c->lr=0x801C032Cu; f_802933D8(c); // 801C0328
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C032C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0330
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C0334
  c->lr=c->r[0]; // 801C0338
  c->r[1]=c->r[1]+0x00000010u; // 801C033C
  return; // 801C0340
}

// fn_801C0344
void f_801C0344(Ctx* __restrict c) {
  trace_call(0x801C0344u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0344
  c->r[0]=c->lr; // 801C0348
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C034C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0350
  c->r[31]=c->r[3]|c->r[3]; // 801C0354
  c->lr=0x801C035Cu; f_801C248C(c); // 801C0358
  c->r[0]=R16(c->r[31]+0x00001FECu); // 801C035C
  cmps(c,0,(int32_t)c->r[0],0); // 801C0360
  if (!crb(c,2)) { goto L_801C039C; } // 801C0364
  c->r[0]=R16(c->r[31]+0x00001FEEu); // 801C0368
  cmps(c,0,(int32_t)c->r[0],0); // 801C036C
  if (!crb(c,2)) { goto L_801C039C; } // 801C0370
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0374
  c->r[3]=c->r[1]+0x00000008u; // 801C0378
  c->f[2]=c->f[1]; // 801C037C
  c->f[3]=c->f[1]; // 801C0380
  c->lr=0x801C0388u; f_800521A0(c); // 801C0384
  c->r[5]=c->r[3]|c->r[3]; // 801C0388
  c->r[3]=c->r[31]+0x000008D0u; // 801C038C
  c->r[4]=0u+0x00000001u; // 801C0390
  c->lr=0x801C0398u; f_80032208(c); // 801C0394
  goto L_801C03A4; // 801C0398
L_801C039C:;
  c->r[3]=c->r[31]+0x000008D0u; // 801C039C
  c->lr=0x801C03A4u; f_800322B0(c); // 801C03A0
L_801C03A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C03A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C03A8
  c->lr=c->r[0]; // 801C03AC
  c->r[1]=c->r[1]+0x00000020u; // 801C03B0
  return; // 801C03B4
}

// fn_801C03B8
void f_801C03B8(Ctx* __restrict c) {
  trace_call(0x801C03B8u);
  f_801C20E4(c); return; // 801C03B8
}

// fn_801C03BC
void f_801C03BC(Ctx* __restrict c) {
  trace_call(0x801C03BCu);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C03BC
  cmps(c,0,(int32_t)c->r[0],30); // 801C03C0
  if (crb(c,2)) { goto L_801C03DC; } // 801C03C4
  if (!crb(c,0)) return; // 801C03C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C03CC
  if (!crb(c,2)) return; // 801C03D0
  c->r[4]=c->r[5]|c->r[5]; // 801C03D4
  f_801C2670(c); return; // 801C03D8
L_801C03DC:;
  c->r[4]=c->r[5]|c->r[5]; // 801C03DC
  f_801C1A9C(c); return; // 801C03E0
  return; // 801C03E4
}

// fn_801C03E8
void f_801C03E8(Ctx* __restrict c) {
  trace_call(0x801C03E8u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C03E8
  cmps(c,0,(int32_t)c->r[0],30); // 801C03EC
  if (crb(c,2)) { goto L_801C0408; } // 801C03F0
  if (!crb(c,0)) return; // 801C03F4
  cmps(c,0,(int32_t)c->r[0],0); // 801C03F8
  if (crb(c,2)) { goto L_801C0404; } // 801C03FC
  return; // 801C0400
L_801C0404:;
  f_801C063C(c); return; // 801C0404
L_801C0408:;
  f_801C1B90(c); return; // 801C0408
  return; // 801C040C
}

// fn_801C0410
void f_801C0410(Ctx* __restrict c) {
  trace_call(0x801C0410u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C0410
  cmps(c,0,(int32_t)c->r[0],30); // 801C0414
  if (crb(c,2)) { goto L_801C0430; } // 801C0418
  if (!crb(c,0)) return; // 801C041C
  cmps(c,0,(int32_t)c->r[0],0); // 801C0420
  if (crb(c,2)) { goto L_801C042C; } // 801C0424
  return; // 801C0428
L_801C042C:;
  f_801C06F0(c); return; // 801C042C
L_801C0430:;
  f_801C1C10(c); return; // 801C0430
  return; // 801C0434
}

// fn_801C0438
void f_801C0438(Ctx* __restrict c) {
  trace_call(0x801C0438u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C0438
  cmps(c,0,(int32_t)c->r[0],20); // 801C043C
  if (crb(c,2)) { goto L_801C0468; } // 801C0440
  if (!crb(c,0)) { goto L_801C0454; } // 801C0444
  cmps(c,0,(int32_t)c->r[0],10); // 801C0448
  if (crb(c,2)) { goto L_801C0460; } // 801C044C
  return; // 801C0450
L_801C0454:;
  cmps(c,0,(int32_t)c->r[0],40); // 801C0454
  if (crb(c,2)) { goto L_801C0470; } // 801C0458
  return; // 801C045C
L_801C0460:;
  c->r[4]=c->r[5]|c->r[5]; // 801C0460
  f_801C07E0(c); return; // 801C0464
L_801C0468:;
  c->r[4]=c->r[5]|c->r[5]; // 801C0468
  f_801C2D04(c); return; // 801C046C
L_801C0470:;
  c->r[4]=c->r[5]|c->r[5]; // 801C0470
  f_801C3018(c); return; // 801C0474
  return; // 801C0478
}

// fn_801C047C
void f_801C047C(Ctx* __restrict c) {
  trace_call(0x801C047Cu);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C047C
  cmps(c,0,(int32_t)c->r[0],20); // 801C0480
  if (crb(c,2)) { goto L_801C04A8; } // 801C0484
  if (!crb(c,0)) { goto L_801C0498; } // 801C0488
  cmps(c,0,(int32_t)c->r[0],10); // 801C048C
  if (crb(c,2)) { goto L_801C04A4; } // 801C0490
  return; // 801C0494
L_801C0498:;
  cmps(c,0,(int32_t)c->r[0],40); // 801C0498
  if (crb(c,2)) { goto L_801C04AC; } // 801C049C
  return; // 801C04A0
L_801C04A4:;
  f_801C0B10(c); return; // 801C04A4
L_801C04A8:;
  f_801C2F0C(c); return; // 801C04A8
L_801C04AC:;
  f_801C3178(c); return; // 801C04AC
  return; // 801C04B0
}

// fn_801C04B4
void f_801C04B4(Ctx* __restrict c) {
  trace_call(0x801C04B4u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C04B4
  cmps(c,0,(int32_t)c->r[0],20); // 801C04B8
  if (crb(c,2)) { goto L_801C04E0; } // 801C04BC
  if (!crb(c,0)) { goto L_801C04D0; } // 801C04C0
  cmps(c,0,(int32_t)c->r[0],10); // 801C04C4
  if (crb(c,2)) { goto L_801C04DC; } // 801C04C8
  return; // 801C04CC
L_801C04D0:;
  cmps(c,0,(int32_t)c->r[0],40); // 801C04D0
  if (crb(c,2)) { goto L_801C04E4; } // 801C04D4
  return; // 801C04D8
L_801C04DC:;
  f_801C0F00(c); return; // 801C04DC
L_801C04E0:;
  f_801C2FB4(c); return; // 801C04E0
L_801C04E4:;
  f_801C31D8(c); return; // 801C04E4
  return; // 801C04E8
}

// fn_801C04EC
void f_801C04EC(Ctx* __restrict c) {
  trace_call(0x801C04ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C04EC
  c->r[0]=c->lr; // 801C04F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C04F4
  c->r[11]=c->r[1]+0x00000030u; // 801C04F8
  c->lr=0x801C0500u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C04FC
  c->r[31]=c->r[5]|c->r[5]; // 801C0500
  c->r[30]=c->r[4]|c->r[4]; // 801C0504
  c->r[29]=c->r[3]|c->r[3]; // 801C0508
  c->r[4]=c->r[31]|c->r[31]; // 801C050C
  c->lr=0x801C0514u; f_801C3B78(c); // 801C0510
  c->lr=0x801C0518u; f_80232150(c); // 801C0514
  c->r[4]=0u+0x803E0000u; // 801C0518
  {uint32_t ea=c->r[2]+0xFFFFB724u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C051C
  c->r[4]=c->r[4]+0x000009A0u; // 801C0520
  c->r[4]=c->r[4]+0x00000058u; // 801C0524
  c->lr=0x801C052Cu; f_80232230(c); // 801C0528
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 801C052C
  c->r[0]=R16(c->r[29]+0x000021E6u); // 801C0530
  cmps(c,0,(int32_t)c->r[0],1); // 801C0534
  if (crb(c,2)) { goto L_801C0568; } // 801C0538
  if (!crb(c,0)) { goto L_801C054C; } // 801C053C
  cmps(c,0,(int32_t)c->r[0],0); // 801C0540
  if (!crb(c,0)) { goto L_801C0558; } // 801C0544
  goto L_801C05D4; // 801C0548
L_801C054C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801C054C
  if (!crb(c,0)) { goto L_801C05D4; } // 801C0550
  goto L_801C0578; // 801C0554
L_801C0558:;
  c->r[3]=c->r[29]|c->r[29]; // 801C0558
  c->r[4]=c->r[31]|c->r[31]; // 801C055C
  c->lr=0x801C0564u; f_801C0F58(c); // 801C0560
  goto L_801C05D4; // 801C0564
L_801C0568:;
  c->r[3]=c->r[29]|c->r[29]; // 801C0568
  c->r[4]=c->r[31]|c->r[31]; // 801C056C
  c->lr=0x801C0574u; f_801C154C(c); // 801C0570
  goto L_801C05D4; // 801C0574
L_801C0578:;
  c->lr=0x801C057Cu; f_80291D94(c); // 801C0578
  c->r[3]=c->r[3]^0x80000000u; // 801C057C
  c->r[0]=0u+0x43300000u; // 801C0580
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801C0584
  c->r[3]=c->r[29]|c->r[29]; // 801C0588
  {uint32_t ea=c->r[2]+0xFFFFB730u; c->f[3]=RF64(ea);} // 801C058C
  c->r[4]=c->r[30]|c->r[30]; // 801C0590
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C0594
  c->r[5]=c->r[31]|c->r[31]; // 801C0598
  {uint32_t ea=c->r[2]+0xFFFFB72Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C059C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801C05A0
  {uint32_t ea=c->r[2]+0xFFFFB728u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C05A4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C05A8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C05AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C05B0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C05B4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801C05B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C05BC
  W16(c->r[29]+0x000021E6u,c->r[0]); // 801C05C0
  c->r[12]=R32(c->r[29]+0x00000010u); // 801C05C4
  c->r[12]=R32(c->r[12]+0x00000424u); // 801C05C8
  c->ctr=c->r[12]; // 801C05CC
  if (true) { c->lr=0x801C05D4u; dispatch(c,c->ctr); } // 801C05D0
L_801C05D4:;
  c->r[11]=c->r[1]+0x00000030u; // 801C05D4
  c->lr=0x801C05DCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C05D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C05DC
  c->lr=c->r[0]; // 801C05E0
  c->r[1]=c->r[1]+0x00000030u; // 801C05E4
  return; // 801C05E8
}

// fn_801C05EC
void f_801C05EC(Ctx* __restrict c) {
  trace_call(0x801C05ECu);
  c->r[0]=R16(c->r[3]+0x000021E6u); // 801C05EC
  cmps(c,0,(int32_t)c->r[0],1); // 801C05F0
  if (crb(c,2)) { goto L_801C060C; } // 801C05F4
  if (!crb(c,0)) return; // 801C05F8
  cmps(c,0,(int32_t)c->r[0],0); // 801C05FC
  if (!crb(c,0)) { goto L_801C0608; } // 801C0600
  return; // 801C0604
L_801C0608:;
  f_801C1024(c); return; // 801C0608
L_801C060C:;
  f_801C15B8(c); return; // 801C060C
  return; // 801C0610
}

// fn_801C0614
void f_801C0614(Ctx* __restrict c) {
  trace_call(0x801C0614u);
  c->r[0]=R16(c->r[3]+0x000021E6u); // 801C0614
  cmps(c,0,(int32_t)c->r[0],1); // 801C0618
  if (crb(c,2)) { goto L_801C0634; } // 801C061C
  if (!crb(c,0)) return; // 801C0620
  cmps(c,0,(int32_t)c->r[0],0); // 801C0624
  if (!crb(c,0)) { goto L_801C0630; } // 801C0628
  return; // 801C062C
L_801C0630:;
  f_801C1484(c); return; // 801C0630
L_801C0634:;
  f_801C17CC(c); return; // 801C0634
  return; // 801C0638
}

// fn_801C063C
void f_801C063C(Ctx* __restrict c) {
  trace_call(0x801C063Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C063C
  c->r[0]=c->lr; // 801C0640
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C0644
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801C0648
  c->r[31]=c->r[4]|c->r[4]; // 801C064C
  W32(c->r[1]+0x00000048u,c->r[30]); // 801C0650
  c->r[30]=c->r[3]|c->r[3]; // 801C0654
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C0658
  cmps(c,0,(int32_t)c->r[0],1); // 801C065C
  if (crb(c,2)) { goto L_801C0668; } // 801C0660
  goto L_801C06D8; // 801C0664
L_801C0668:;
  c->r[3]=c->r[3]+0x000008ECu; // 801C0668
  c->r[4]=c->r[30]+0x00001F29u; // 801C066C
  c->lr=0x801C0674u; f_80075440(c); // 801C0670
  W32(c->r[31]+0x00000014u,c->r[3]); // 801C0674
  c->r[5]=c->r[3]|c->r[3]; // 801C0678
  {uint32_t ea=c->r[2]+0xFFFFB738u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C067C
  c->r[3]=c->r[30]+0x00000C88u; // 801C0680
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0684
  c->r[4]=c->r[30]+0x000008ECu; // 801C0688
  c->r[6]=0u+0x00000000u; // 801C068C
  c->r[7]=0u+0x00000000u; // 801C0690
  c->lr=0x801C0698u; f_800BB0C8(c); // 801C0694
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0698
  c->r[0]=0u+0x00000002u; // 801C069C
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C06A0
  c->r[4]=c->r[30]+0x000008D0u; // 801C06A4
  c->r[3]=c->r[1]+0x00000014u; // 801C06A8
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C06AC
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C06B0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C06B4
  c->ctr=c->r[12]; // 801C06B8
  if (true) { c->lr=0x801C06C0u; dispatch(c,c->ctr); } // 801C06BC
  c->r[3]=c->r[1]+0x00000008u; // 801C06C0
  c->r[4]=c->r[1]+0x00000014u; // 801C06C4
  c->lr=0x801C06CCu; f_800BC9F4(c); // 801C06C8
  c->r[3]=c->r[30]+0x00002000u; // 801C06CC
  c->r[4]=c->r[1]+0x00000008u; // 801C06D0
  c->lr=0x801C06D8u; f_8003F468(c); // 801C06D4
L_801C06D8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C06D8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801C06DC
  c->r[30]=R32(c->r[1]+0x00000048u); // 801C06E0
  c->lr=c->r[0]; // 801C06E4
  c->r[1]=c->r[1]+0x00000050u; // 801C06E8
  return; // 801C06EC
}

// fn_801C06F0
void f_801C06F0(Ctx* __restrict c) {
  trace_call(0x801C06F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C06F0
  c->r[0]=c->lr; // 801C06F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C06F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C06FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C0700
  c->r[30]=c->r[3]|c->r[3]; // 801C0704
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C0708
  cmps(c,0,(int32_t)c->r[0],1); // 801C070C
  if (crb(c,2)) { goto L_801C07C8; } // 801C0710
  if (!crb(c,0)) { goto L_801C0724; } // 801C0714
  cmps(c,0,(int32_t)c->r[0],0); // 801C0718
  if (!crb(c,0)) { goto L_801C0730; } // 801C071C
  goto L_801C07C8; // 801C0720
L_801C0724:;
  cmps(c,0,(int32_t)c->r[0],3); // 801C0724
  if (!crb(c,0)) { goto L_801C07C8; } // 801C0728
  goto L_801C0798; // 801C072C
L_801C0730:;
  c->r[0]=R16(c->r[3]+0x00001FA6u); // 801C0730
  c->r[31]=0u+0x00000000u; // 801C0734
  cmps(c,0,(int32_t)c->r[0],1); // 801C0738
  if (crb(c,2)) { goto L_801C076C; } // 801C073C
  if (!crb(c,0)) { goto L_801C0784; } // 801C0740
  cmps(c,0,(int32_t)c->r[0],0); // 801C0744
  if (!crb(c,0)) { goto L_801C0750; } // 801C0748
  goto L_801C0784; // 801C074C
L_801C0750:;
  c->lr=0x801C0754u; f_801C3C1C(c); // 801C0750
  {uint32_t ea=c->r[2]+0xFFFFB73Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0754
  fcmp(c,0,c->f[1],c->f[0]); // 801C0758
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C075C
  if (!crb(c,2)) { goto L_801C0784; } // 801C0760
  c->r[31]=0u+0x00000001u; // 801C0764
  goto L_801C0784; // 801C0768
L_801C076C:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801C076C
  c->r[4]=0u+0xFFFFFFFFu; // 801C0770
  c->lr=0x801C0778u; f_800F3BBC(c); // 801C0774
  c->r[0]=c->r[3]&0x90000000u; cr0(c,c->r[0]); // 801C0778
  if (crb(c,2)) { goto L_801C0784; } // 801C077C
  c->r[31]=0u+0x00000001u; // 801C0780
L_801C0784:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C0784
  if (crb(c,2)) { goto L_801C07C8; } // 801C0788
  c->r[0]=0u+0x00000001u; // 801C078C
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C0790
  goto L_801C07C8; // 801C0794
L_801C0798:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C0798
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C079C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C07A0
  c->lr=0x801C07A8u; f_8016498C(c); // 801C07A4
  cmps(c,0,(int32_t)c->r[3],0); // 801C07A8
  if (crb(c,2)) { goto L_801C07C8; } // 801C07AC
  c->r[0]=R16(c->r[30]+0x00001FA4u); // 801C07B0
  c->r[3]=c->r[30]|c->r[30]; // 801C07B4
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C07B8
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801C07BC
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C07C0
  c->lr=0x801C07C8u; f_800AC668(c); // 801C07C4
L_801C07C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C07C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C07CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C07D0
  c->lr=c->r[0]; // 801C07D4
  c->r[1]=c->r[1]+0x00000010u; // 801C07D8
  return; // 801C07DC
}

// fn_801C07E0
void f_801C07E0(Ctx* __restrict c) {
  trace_call(0x801C07E0u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C07E0
  c->r[0]=c->lr; // 801C07E4
  W32(c->r[1]+0x00000194u,c->r[0]); // 801C07E8
  W32(c->r[1]+0x0000018Cu,c->r[31]); // 801C07EC
  c->r[31]=c->r[3]|c->r[3]; // 801C07F0
  W32(c->r[1]+0x00000188u,c->r[30]); // 801C07F4
  c->r[30]=c->r[4]|c->r[4]; // 801C07F8
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C07FC
  cmpu(c,0,c->r[0],0x0000000Du); // 801C0800
  if (!crb(c,2)) { goto L_801C0814; } // 801C0804
  c->r[0]=0u+0x00000000u; // 801C0808
  W8(c->r[3]+0x0000200Cu,c->r[0]); // 801C080C
  goto L_801C0AF8; // 801C0810
L_801C0814:;
  c->r[3]=c->r[3]+0x000008ECu; // 801C0814
  c->r[4]=c->r[31]+0x00001F3Du; // 801C0818
  c->lr=0x801C0820u; f_80075440(c); // 801C081C
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 801C0820
  c->r[5]=c->r[3]|c->r[3]; // 801C0824
  {uint32_t ea=c->r[2]+0xFFFFB738u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0828
  c->r[3]=c->r[31]+0x00000C88u; // 801C082C
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0830
  c->r[4]=c->r[31]+0x000008ECu; // 801C0834
  c->r[6]=0u+0x00000000u; // 801C0838
  c->r[7]=0u+0x00000000u; // 801C083C
  c->lr=0x801C0844u; f_800BB0C8(c); // 801C0840
  {uint32_t ea=c->r[2]+0xFFFFB728u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0844
  c->r[0]=0u+0x0000000Bu; // 801C0848
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C084C
  {uint32_t ea=c->r[31]+0x00002010u; WF32(ea,c->f[0]);} // 801C0850
  goto L_801C094C; // 801C0854
  if (true) { c->lr=0x801C085Cu; dispatch(c,c->ctr); } // 801C0858
  c->r[3]=c->r[1]+0x0000008Cu; // 801C085C
  c->r[4]=c->r[1]+0x00000158u; // 801C0860
  c->lr=0x801C0868u; f_80032FD8(c); // 801C0864
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C0868
  c->r[4]=c->r[31]+0x000008D0u; // 801C086C
  c->r[3]=c->r[1]+0x000000F8u; // 801C0870
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C0874
  c->ctr=c->r[12]; // 801C0878
  if (true) { c->lr=0x801C0880u; dispatch(c,c->ctr); } // 801C087C
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0880
  c->r[3]=c->r[1]+0x00000050u; // 801C0884
  {uint32_t ea=c->r[1]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0888
  {uint32_t ea=c->r[1]+0x00000118u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C088C
  c->lr=0x801C0894u; f_800521A0(c); // 801C0890
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C0894
  c->r[4]=c->r[31]+0x000008D0u; // 801C0898
  c->r[3]=c->r[1]+0x00000128u; // 801C089C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C08A0
  c->ctr=c->r[12]; // 801C08A4
  if (true) { c->lr=0x801C08ACu; dispatch(c,c->ctr); } // 801C08A8
  c->r[3]=c->r[1]+0x0000005Cu; // 801C08AC
  c->r[4]=c->r[1]+0x00000128u; // 801C08B0
  c->lr=0x801C08B8u; f_800BC9F4(c); // 801C08B4
  c->r[4]=c->r[1]+0x0000005Cu; // 801C08B8
  c->r[3]=c->r[1]+0x00000080u; // 801C08BC
  c->r[5]=c->r[1]+0x00000050u; // 801C08C0
  c->lr=0x801C08C8u; f_80064C34(c); // 801C08C4
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C08C8
  c->r[3]=c->r[1]+0x00000080u; // 801C08CC
  {uint32_t ea=c->r[2]+0xFFFFB744u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C08D0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C08D4
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 801C08D8
  c->lr=0x801C08E0u; f_80065368(c); // 801C08DC
  cmps(c,0,(int32_t)c->r[3],0); // 801C08E0
  if (!crb(c,2)) { goto L_801C08F4; } // 801C08E4
  c->r[3]=c->r[1]+0x00000080u; // 801C08E8
  c->r[4]=c->r[3]|c->r[3]; // 801C08EC
  c->lr=0x801C08F4u; f_80265750(c); // 801C08F0
L_801C08F4:;
  c->r[3]=c->r[1]+0x00000038u; // 801C08F4
  c->r[4]=c->r[1]+0x00000080u; // 801C08F8
  c->lr=0x801C0900u; f_8003F484(c); // 801C08FC
  c->r[30]=c->r[3]|c->r[3]; // 801C0900
  c->r[3]=c->r[1]+0x00000044u; // 801C0904
  c->r[4]=c->r[1]+0x0000008Cu; // 801C0908
  c->lr=0x801C0910u; f_8003F484(c); // 801C090C
  c->r[7]=R16(c->r[31]+0x00001FACu); // 801C0910
  c->r[5]=c->r[3]|c->r[3]; // 801C0914
  c->r[6]=c->r[30]|c->r[30]; // 801C0918
  c->r[3]=c->r[31]+0x00002018u; // 801C091C
  c->r[4]=0u+0x00000001u; // 801C0920
  c->lr=0x801C0928u; f_801C1E14(c); // 801C0924
  c->r[3]=0u+0x804D0000u; // 801C0928
  {uint32_t ea=c->r[2]+0xFFFFB748u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C092C
  c->r[3]=c->r[3]+0x00003318u; // 801C0930
  c->r[0]=0u+0x00000001u; // 801C0934
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0938
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C093C
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C0940
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0944
  goto L_801C0AF8; // 801C0948
L_801C094C:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C094C
  c->r[4]=c->r[31]+0x000008D0u; // 801C0950
  c->r[3]=c->r[1]+0x000000C8u; // 801C0954
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C0958
  c->ctr=c->r[12]; // 801C095C
  if (true) { c->lr=0x801C0964u; dispatch(c,c->ctr); } // 801C0960
  c->r[3]=c->r[1]+0x00000074u; // 801C0964
  c->r[4]=c->r[1]+0x000000C8u; // 801C0968
  c->lr=0x801C0970u; f_80032FD8(c); // 801C096C
  c->r[3]=R32(c->r[31]+0x00002018u); // 801C0970
  c->r[0]=0u+0x00000000u; // 801C0974
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0978
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C097C
  fcmp(c,0,c->f[1],c->f[0]); // 801C0980
  if (!crb(c,2)) { goto L_801C09AC; } // 801C0984
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0988
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C098C
  fcmp(c,0,c->f[1],c->f[0]); // 801C0990
  if (!crb(c,2)) { goto L_801C09AC; } // 801C0994
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0998
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C099C
  fcmp(c,0,c->f[1],c->f[0]); // 801C09A0
  if (!crb(c,2)) { goto L_801C09AC; } // 801C09A4
  c->r[0]=0u+0x00000001u; // 801C09A8
L_801C09AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C09AC
  if (crb(c,2)) { goto L_801C0A6C; } // 801C09B0
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C09B4
  c->r[3]=c->r[1]+0x0000002Cu; // 801C09B8
  c->f[2]=c->f[1]; // 801C09BC
  c->f[3]=c->f[1]; // 801C09C0
  c->lr=0x801C09C8u; f_800521A0(c); // 801C09C4
  c->r[3]=R32(c->r[31]+0x00002038u); // 801C09C8
  cmps(c,0,(int32_t)c->r[3],2); // 801C09CC
  if (crb(c,0)) { goto L_801C0A50; } // 801C09D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C09D4
  c->r[5]=R32(c->r[31]+0x00002018u); // 801C09D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C09DC
  c->r[3]=0u+0x00000001u; // 801C09E0
  W8(c->r[31]+0x00002084u,c->r[3]); // 801C09E4
  c->r[4]=c->r[5]+0x0000001Cu; // 801C09E8
  c->r[3]=c->r[1]+0x00000008u; // 801C09EC
  c->r[5]=c->r[5]+c->r[0]; // 801C09F0
  c->lr=0x801C09F8u; f_8007B8A4(c); // 801C09F4
  c->r[3]=c->r[31]+0x0000205Cu; // 801C09F8
  c->r[4]=c->r[1]+0x00000008u; // 801C09FC
  c->lr=0x801C0A04u; f_8003F468(c); // 801C0A00
  c->r[3]=c->r[31]+0x0000205Cu; // 801C0A04
  c->lr=0x801C0A0Cu; f_80065368(c); // 801C0A08
  cmps(c,0,(int32_t)c->r[3],0); // 801C0A0C
  if (!crb(c,2)) { goto L_801C0A20; } // 801C0A10
  c->r[3]=c->r[31]+0x0000205Cu; // 801C0A14
  c->r[4]=c->r[3]|c->r[3]; // 801C0A18
  c->lr=0x801C0A20u; f_80265750(c); // 801C0A1C
L_801C0A20:;
  c->r[4]=R32(c->r[31]+0x00002018u); // 801C0A20
  c->r[3]=c->r[31]+0x00002044u; // 801C0A24
  c->lr=0x801C0A2Cu; f_8003F468(c); // 801C0A28
  c->r[6]=0u+0xFFFFFFFFu; // 801C0A2C
  c->r[0]=0u+0x00000000u; // 801C0A30
  W32(c->r[31]+0x0000208Cu,c->r[6]); // 801C0A34
  c->r[3]=c->r[31]+0x00002018u; // 801C0A38
  c->r[4]=0u+0xFFFFFFFFu; // 801C0A3C
  c->r[5]=0u+0x00000000u; // 801C0A40
  W32(c->r[31]+0x00002040u,c->r[6]); // 801C0A44
  W32(c->r[31]+0x00002088u,c->r[0]); // 801C0A48
  c->lr=0x801C0A50u; f_801C47C4(c); // 801C0A4C
L_801C0A50:;
  {uint32_t ea=c->r[31]+0x00001FF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0A50
  c->r[0]=0u+0x00000000u; // 801C0A54
  {uint32_t ea=c->r[2]+0xFFFFB74Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0A58
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[1]);} // 801C0A5C
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C0A60
  {uint32_t ea=c->r[31]+0x00002010u; WF32(ea,c->f[0]);} // 801C0A64
  goto L_801C0AF8; // 801C0A68
L_801C0A6C:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C0A6C
  c->r[4]=c->r[31]+0x000008D0u; // 801C0A70
  c->r[3]=c->r[1]+0x00000098u; // 801C0A74
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C0A78
  c->ctr=c->r[12]; // 801C0A7C
  if (true) { c->lr=0x801C0A84u; dispatch(c,c->ctr); } // 801C0A80
  c->r[3]=c->r[1]+0x00000068u; // 801C0A84
  c->r[4]=c->r[1]+0x00000098u; // 801C0A88
  c->lr=0x801C0A90u; f_800BC9F4(c); // 801C0A8C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0A90
  c->r[3]=c->r[1]+0x00000068u; // 801C0A94
  {uint32_t ea=c->r[2]+0xFFFFB750u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0A98
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C0A9C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 801C0AA0
  c->lr=0x801C0AA8u; f_80065368(c); // 801C0AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801C0AA8
  if (!crb(c,2)) { goto L_801C0ABC; } // 801C0AAC
  c->r[3]=c->r[1]+0x00000068u; // 801C0AB0
  c->r[4]=c->r[3]|c->r[3]; // 801C0AB4
  c->lr=0x801C0ABCu; f_80265750(c); // 801C0AB8
L_801C0ABC:;
  c->r[3]=c->r[1]+0x00000014u; // 801C0ABC
  c->r[4]=c->r[1]+0x00000068u; // 801C0AC0
  c->lr=0x801C0AC8u; f_8003F484(c); // 801C0AC4
  c->r[30]=c->r[3]|c->r[3]; // 801C0AC8
  c->r[3]=c->r[1]+0x00000020u; // 801C0ACC
  c->r[4]=c->r[1]+0x00000074u; // 801C0AD0
  c->lr=0x801C0AD8u; f_8003F484(c); // 801C0AD4
  c->r[5]=c->r[3]|c->r[3]; // 801C0AD8
  c->r[6]=c->r[30]|c->r[30]; // 801C0ADC
  c->r[3]=c->r[31]+0x00002018u; // 801C0AE0
  c->r[4]=0u+0x00000001u; // 801C0AE4
  c->r[7]=0u+0xFFFFFFFFu; // 801C0AE8
  c->lr=0x801C0AF0u; f_801C1E14(c); // 801C0AEC
  c->r[0]=0u+0x00000001u; // 801C0AF0
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C0AF4
L_801C0AF8:;
  c->r[0]=R32(c->r[1]+0x00000194u); // 801C0AF8
  c->r[31]=R32(c->r[1]+0x0000018Cu); // 801C0AFC
  c->r[30]=R32(c->r[1]+0x00000188u); // 801C0B00
  c->lr=c->r[0]; // 801C0B04
  c->r[1]=c->r[1]+0x00000190u; // 801C0B08
  return; // 801C0B0C
}

// fn_801C0B10
void f_801C0B10(Ctx* __restrict c) {
  trace_call(0x801C0B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0B10
  c->r[0]=c->lr; // 801C0B14
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C0B18
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801C0B1C
  c->r[31]=c->r[4]|c->r[4]; // 801C0B20
  W32(c->r[1]+0x00000058u,c->r[30]); // 801C0B24
  c->r[30]=c->r[3]|c->r[3]; // 801C0B28
  c->r[4]=c->r[30]+0x00002018u; // 801C0B2C
  {uint32_t ea=c->r[3]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0B30
  c->r[3]=c->r[1]+0x00000014u; // 801C0B34
  c->lr=0x801C0B3Cu; f_801C44B8(c); // 801C0B38
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0B3C
  c->r[0]=0u+0x00000000u; // 801C0B40
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0B44
  fcmp(c,0,c->f[1],c->f[0]); // 801C0B48
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0B4C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0B50
  fcmp(c,0,c->f[1],c->f[0]); // 801C0B54
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0B58
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0B5C
  fcmp(c,0,c->f[1],c->f[0]); // 801C0B60
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0B64
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0B68
  fcmp(c,0,c->f[1],c->f[0]); // 801C0B6C
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0B70
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0B74
  fcmp(c,0,c->f[1],c->f[0]); // 801C0B78
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0B7C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0B80
  fcmp(c,0,c->f[1],c->f[0]); // 801C0B84
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0B88
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0B8C
  fcmp(c,0,c->f[1],c->f[0]); // 801C0B90
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0B94
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0B98
  fcmp(c,0,c->f[1],c->f[0]); // 801C0B9C
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0BA0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0BA4
  fcmp(c,0,c->f[1],c->f[0]); // 801C0BA8
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0BAC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0BB0
  fcmp(c,0,c->f[1],c->f[0]); // 801C0BB4
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0BB8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0BBC
  fcmp(c,0,c->f[1],c->f[0]); // 801C0BC0
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0BC4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0BC8
  fcmp(c,0,c->f[1],c->f[0]); // 801C0BCC
  if (!crb(c,2)) { goto L_801C0BD8; } // 801C0BD0
  c->r[0]=0u+0x00000001u; // 801C0BD4
L_801C0BD8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C0BD8
  if (!crb(c,2)) { goto L_801C0BF8; } // 801C0BDC
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C0BE0
  c->r[3]=c->r[30]+0x000008D0u; // 801C0BE4
  c->r[4]=c->r[1]+0x00000014u; // 801C0BE8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C0BEC
  c->ctr=c->r[12]; // 801C0BF0
  if (true) { c->lr=0x801C0BF8u; dispatch(c,c->ctr); } // 801C0BF4
L_801C0BF8:;
  c->r[4]=R16(c->r[30]+0x00001FACu); // 801C0BF8
  c->r[3]=c->r[30]+0x00002018u; // 801C0BFC
  c->lr=0x801C0C04u; f_801C1EC4(c); // 801C0C00
  cmps(c,0,(int32_t)c->r[3],0); // 801C0C04
  if (crb(c,2)) { goto L_801C0C1C; } // 801C0C08
  {uint32_t ea=c->r[2]+0xFFFFB74Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0C0C
  c->r[0]=0u+0x00000000u; // 801C0C10
  W8(c->r[30]+0x0000200Cu,c->r[0]); // 801C0C14
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C0C18
L_801C0C1C:;
  c->r[0]=R8(c->r[30]+0x0000200Cu); // 801C0C1C
  cmps(c,0,(int32_t)c->r[0],0); // 801C0C20
  if (crb(c,2)) { goto L_801C0D54; } // 801C0C24
  c->r[3]=R16(c->r[30]+0x00001FACu); // 801C0C28
  c->r[0]=R32(c->r[30]+0x00002038u); // 801C0C2C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C0C30
  if (crb(c,0)) { goto L_801C0C40; } // 801C0C34
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0C38
  goto L_801C0C60; // 801C0C3C
L_801C0C40:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 801C0C40
  c->r[4]=R32(c->r[30]+0x00002018u); // 801C0C44
  c->r[3]=c->r[1]+0x00000008u; // 801C0C48
  c->r[5]=c->r[30]+0x00002044u; // 801C0C4C
  c->r[4]=c->r[4]+c->r[0]; // 801C0C50
  c->lr=0x801C0C58u; f_8007B8A4(c); // 801C0C54
  c->r[3]=c->r[1]+0x00000008u; // 801C0C58
  c->lr=0x801C0C60u; f_802657AC(c); // 801C0C5C
L_801C0C60:;
  {uint32_t ea=c->r[2]+0xFFFFB754u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0C60
  fcmp(c,0,c->f[1],c->f[0]); // 801C0C64
  if (!crb(c,1)) { goto L_801C0CE8; } // 801C0C68
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0C6C
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0C70
  fcmp(c,0,c->f[1],c->f[0]); // 801C0C74
  if (!crb(c,0)) { goto L_801C0C94; } // 801C0C78
  c->r[3]=0u+0x804D0000u; // 801C0C7C
  {uint32_t ea=c->r[2]+0xFFFFB74Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0C80
  c->r[3]=c->r[3]+0x00003318u; // 801C0C84
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0C88
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801C0C8C
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0C90
L_801C0C94:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0C94
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0C98
  fcmp(c,0,c->f[1],c->f[0]); // 801C0C9C
  if (!crb(c,1)) { goto L_801C0CA8; } // 801C0CA0
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0CA4
L_801C0CA8:;
  {uint32_t ea=c->r[30]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0CA8
  {uint32_t ea=c->r[2]+0xFFFFB744u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0CAC
  fcmp(c,0,c->f[1],c->f[0]); // 801C0CB0
  if (!crb(c,0)) { goto L_801C0CC0; } // 801C0CB4
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C0CB8
  goto L_801C0CD4; // 801C0CBC
L_801C0CC0:;
  c->r[3]=0u+0x804D0000u; // 801C0CC0
  c->r[3]=c->r[3]+0x00003318u; // 801C0CC4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0CC8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C0CCC
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C0CD0
L_801C0CD4:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 801C0CD4
  {uint32_t ea=c->r[30]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0CD8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C0CDC
  c->lr=0x801C0CE4u; f_80165B9C(c); // 801C0CE0
  goto L_801C0D78; // 801C0CE4
L_801C0CE8:;
  c->r[3]=c->r[30]+0x000008ECu; // 801C0CE8
  c->r[4]=c->r[30]+0x00002180u; // 801C0CEC
  c->lr=0x801C0CF4u; f_80075440(c); // 801C0CF0
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801C0CF4
  c->r[5]=c->r[3]|c->r[3]; // 801C0CF8
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0CFC
  c->r[3]=c->r[30]+0x00000C88u; // 801C0D00
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0D04
  c->r[4]=c->r[30]+0x000008ECu; // 801C0D08
  c->r[6]=0u+0x00000000u; // 801C0D0C
  c->r[7]=0u+0x00000000u; // 801C0D10
  c->lr=0x801C0D18u; f_800BB0C8(c); // 801C0D14
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0D18
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D1C
  fcmp(c,0,c->f[1],c->f[0]); // 801C0D20
  if (!crb(c,1)) { goto L_801C0D3C; } // 801C0D24
  c->r[3]=0u+0x804D0000u; // 801C0D28
  c->r[3]=c->r[3]+0x00003318u; // 801C0D2C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D30
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C0D34
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0D38
L_801C0D3C:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0D3C
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D40
  fcmp(c,0,c->f[1],c->f[0]); // 801C0D44
  if (!crb(c,0)) { goto L_801C0D78; } // 801C0D48
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0D4C
  goto L_801C0D78; // 801C0D50
L_801C0D54:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0D54
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D58
  fcmp(c,0,c->f[1],c->f[0]); // 801C0D5C
  if (!crb(c,0)) { goto L_801C0D78; } // 801C0D60
  c->r[3]=0u+0x804D0000u; // 801C0D64
  c->r[3]=c->r[3]+0x00003318u; // 801C0D68
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D6C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C0D70
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0D74
L_801C0D78:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0D78
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D7C
  fcmp(c,0,c->f[1],c->f[0]); // 801C0D80
  if (!crb(c,1)) { goto L_801C0D8C; } // 801C0D84
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0D88
L_801C0D8C:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0D8C
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0D90
  fcmp(c,0,c->f[1],c->f[0]); // 801C0D94
  if (!crb(c,1)) { goto L_801C0DB0; } // 801C0D98
  c->r[3]=0u+0x804D0000u; // 801C0D9C
  c->r[3]=c->r[3]+0x00003318u; // 801C0DA0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0DA4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C0DA8
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0DAC
L_801C0DB0:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0DB0
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0DB4
  fcmp(c,0,c->f[1],c->f[0]); // 801C0DB8
  if (!crb(c,0)) { goto L_801C0DC4; } // 801C0DBC
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C0DC0
L_801C0DC4:;
  c->r[0]=R32(c->r[30]+0x00002040u); // 801C0DC4
  cmps(c,0,(int32_t)c->r[0],0); // 801C0DC8
  if (crb(c,0)) { goto L_801C0ED0; } // 801C0DCC
  {uint32_t ea=c->r[30]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0DD0
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0DD4
  fcmp(c,0,c->f[1],c->f[0]); // 801C0DD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C0DDC
  if (!crb(c,2)) { goto L_801C0ED0; } // 801C0DE0
  c->r[3]=R32(c->r[30]+0x00000974u); // 801C0DE4
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 801C0DE8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C0DEC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C0DF0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C0DF4
  if (!crb(c,2)) { goto L_801C0E6C; } // 801C0DF8
  c->r[3]=c->r[30]+0x000008ECu; // 801C0DFC
  c->r[4]=c->r[30]+0x00001F3Du; // 801C0E00
  c->lr=0x801C0E08u; f_80075440(c); // 801C0E04
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801C0E08
  c->r[5]=c->r[3]|c->r[3]; // 801C0E0C
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0E10
  c->r[3]=c->r[30]+0x00000C88u; // 801C0E14
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0E18
  c->r[4]=c->r[30]+0x000008ECu; // 801C0E1C
  c->r[6]=0u+0x00000000u; // 801C0E20
  c->r[7]=0u+0x00000000u; // 801C0E24
  c->lr=0x801C0E2Cu; f_800BB0C8(c); // 801C0E28
  c->r[3]=c->r[30]+0x000008ECu; // 801C0E2C
  c->r[4]=c->r[30]+0x00002180u; // 801C0E30
  c->lr=0x801C0E38u; f_80075440(c); // 801C0E34
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801C0E38
  c->lr=0x801C0E40u; f_80291D94(c); // 801C0E3C
  c->r[3]=c->r[3]^0x80000000u; // 801C0E40
  c->r[0]=0u+0x43300000u; // 801C0E44
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801C0E48
  {uint32_t ea=c->r[2]+0xFFFFB730u; c->f[2]=RF64(ea);} // 801C0E4C
  W32(c->r[1]+0x00000048u,c->r[0]); // 801C0E50
  {uint32_t ea=c->r[2]+0xFFFFB75Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0E54
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 801C0E58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C0E5C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C0E60
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C0E64
  goto L_801C0ED0; // 801C0E68
L_801C0E6C:;
  c->r[3]=c->r[30]+0x000008ECu; // 801C0E6C
  c->r[4]=c->r[30]+0x00002180u; // 801C0E70
  c->lr=0x801C0E78u; f_80075440(c); // 801C0E74
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801C0E78
  c->r[5]=c->r[3]|c->r[3]; // 801C0E7C
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0E80
  c->r[3]=c->r[30]+0x00000C88u; // 801C0E84
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0E88
  c->r[4]=c->r[30]+0x000008ECu; // 801C0E8C
  c->r[6]=0u+0x00000000u; // 801C0E90
  c->r[7]=0u+0x00000000u; // 801C0E94
  c->lr=0x801C0E9Cu; f_800BB0C8(c); // 801C0E98
  c->lr=0x801C0EA0u; f_80291D94(c); // 801C0E9C
  c->r[3]=c->r[3]^0x80000000u; // 801C0EA0
  c->r[0]=0u+0x43300000u; // 801C0EA4
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801C0EA8
  {uint32_t ea=c->r[2]+0xFFFFB730u; c->f[3]=RF64(ea);} // 801C0EAC
  W32(c->r[1]+0x00000048u,c->r[0]); // 801C0EB0
  {uint32_t ea=c->r[2]+0xFFFFB75Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0EB4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 801C0EB8
  {uint32_t ea=c->r[2]+0xFFFFB728u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0EBC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C0EC0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C0EC4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C0EC8
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C0ECC
L_801C0ED0:;
  c->r[3]=0u+0x804D0000u; // 801C0ED0
  {uint32_t ea=c->r[30]+0x00002010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0ED4
  c->r[3]=c->r[3]+0x00003318u; // 801C0ED8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0EDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C0EE0
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C0EE4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801C0EE8
  c->r[30]=R32(c->r[1]+0x00000058u); // 801C0EEC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C0EF0
  c->lr=c->r[0]; // 801C0EF4
  c->r[1]=c->r[1]+0x00000060u; // 801C0EF8
  return; // 801C0EFC
}

// fn_801C0F00
void f_801C0F00(Ctx* __restrict c) {
  trace_call(0x801C0F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0F00
  c->r[0]=c->lr; // 801C0F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0F08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0F0C
  c->r[31]=c->r[3]|c->r[3]; // 801C0F10
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C0F14
  cmpu(c,0,c->r[0],0x0000000Du); // 801C0F18
  if (!crb(c,2)) { goto L_801C0F44; } // 801C0F1C
  c->r[4]=R16(c->r[3]+0x00001FAAu); // 801C0F20
  c->r[3]=c->r[3]+0x00002018u; // 801C0F24
  c->lr=0x801C0F2Cu; f_801C1EC4(c); // 801C0F28
  cmps(c,0,(int32_t)c->r[3],0); // 801C0F2C
  if (crb(c,2)) { goto L_801C0F44; } // 801C0F30
  c->r[0]=R16(c->r[31]+0x00001FA8u); // 801C0F34
  c->r[3]=c->r[31]|c->r[31]; // 801C0F38
  W16(c->r[31]+0x00001FECu,c->r[0]); // 801C0F3C
  c->lr=0x801C0F44u; f_800AC668(c); // 801C0F40
L_801C0F44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0F44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0F48
  c->lr=c->r[0]; // 801C0F4C
  c->r[1]=c->r[1]+0x00000010u; // 801C0F50
  return; // 801C0F54
}

// fn_801C0F58
void f_801C0F58(Ctx* __restrict c) {
  trace_call(0x801C0F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0F58
  c->r[0]=c->lr; // 801C0F5C
  {uint32_t ea=c->r[2]+0xFFFFB724u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0F60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C0F64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0F68
  c->r[31]=c->r[4]|c->r[4]; // 801C0F6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C0F70
  c->r[30]=c->r[3]|c->r[3]; // 801C0F74
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C0F78
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[0]);} // 801C0F7C
  cmpu(c,0,c->r[0],0x0000001Eu); // 801C0F80
  if (!crb(c,2)) { goto L_801C0FC4; } // 801C0F84
  c->r[3]=c->r[3]+0x000008ECu; // 801C0F88
  c->r[4]=c->r[30]+0x00002194u; // 801C0F8C
  c->lr=0x801C0F94u; f_80075440(c); // 801C0F90
  W32(c->r[31]+0x00000034u,c->r[3]); // 801C0F94
  c->r[5]=c->r[3]|c->r[3]; // 801C0F98
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0F9C
  c->r[3]=c->r[30]+0x00000C88u; // 801C0FA0
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0FA4
  c->r[4]=c->r[30]+0x000008ECu; // 801C0FA8
  c->r[6]=0u+0x00000000u; // 801C0FAC
  c->r[7]=0u+0x00000000u; // 801C0FB0
  c->lr=0x801C0FB8u; f_800BB0C8(c); // 801C0FB4
  c->r[0]=0u+0x00000018u; // 801C0FB8
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C0FBC
  goto L_801C100C; // 801C0FC0
L_801C0FC4:;
  c->r[0]=0u+0x00000016u; // 801C0FC4
  c->r[4]=c->r[30]+0x00001F3Du; // 801C0FC8
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C0FCC
  c->r[3]=c->r[3]+0x000008ECu; // 801C0FD0
  c->lr=0x801C0FD8u; f_80075440(c); // 801C0FD4
  W32(c->r[31]+0x00000034u,c->r[3]); // 801C0FD8
  c->r[5]=c->r[3]|c->r[3]; // 801C0FDC
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0FE0
  c->r[3]=c->r[30]+0x00000C88u; // 801C0FE4
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C0FE8
  c->r[4]=c->r[30]+0x000008ECu; // 801C0FEC
  c->r[6]=0u+0x00000000u; // 801C0FF0
  c->r[7]=0u+0x00000000u; // 801C0FF4
  c->lr=0x801C0FFCu; f_800BB0C8(c); // 801C0FF8
  c->r[3]=c->r[30]+0x000008ECu; // 801C0FFC
  c->r[4]=c->r[30]+0x000021A8u; // 801C1000
  c->lr=0x801C1008u; f_80075440(c); // 801C1004
  W32(c->r[31]+0x00000034u,c->r[3]); // 801C1008
L_801C100C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C100C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1010
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C1014
  c->lr=c->r[0]; // 801C1018
  c->r[1]=c->r[1]+0x00000010u; // 801C101C
  return; // 801C1020
}

// fn_801C1024
void f_801C1024(Ctx* __restrict c) {
  trace_call(0x801C1024u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1024
  c->r[0]=c->lr; // 801C1028
  W32(c->r[1]+0x00000154u,c->r[0]); // 801C102C
  c->r[11]=c->r[1]+0x00000150u; // 801C1030
  c->lr=0x801C1038u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C1034
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C1038
  c->r[31]=c->r[3]|c->r[3]; // 801C103C
  c->r[29]=c->r[4]|c->r[4]; // 801C1040
  cmps(c,0,(int32_t)c->r[0],24); // 801C1044
  if (crb(c,2)) { goto L_801C1288; } // 801C1048
  if (!crb(c,0)) { goto L_801C1060; } // 801C104C
  cmps(c,0,(int32_t)c->r[0],22); // 801C1050
  if (crb(c,2)) { goto L_801C106C; } // 801C1054
  if (!crb(c,0)) { goto L_801C11C0; } // 801C1058
  goto L_801C146C; // 801C105C
L_801C1060:;
  cmps(c,0,(int32_t)c->r[0],26); // 801C1060
  if (!crb(c,0)) { goto L_801C146C; } // 801C1064
  goto L_801C1444; // 801C1068
L_801C106C:;
  c->lr=0x801C1070u; f_801C3C1C(c); // 801C106C
  {uint32_t ea=c->r[31]+0x000021E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1070
  fcmp(c,0,c->f[1],c->f[0]); // 801C1074
  if (!crb(c,0)) { goto L_801C114C; } // 801C1078
  c->r[3]=R32(c->r[31]+0x00000974u); // 801C107C
  c->r[4]=R32(c->r[29]+0x00000034u); // 801C1080
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1084
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C1088
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C108C
  if (crb(c,2)) { goto L_801C10C8; } // 801C1090
  c->r[3]=c->r[31]+0x000008ECu; // 801C1094
  c->r[4]=c->r[31]+0x000021A8u; // 801C1098
  c->lr=0x801C10A0u; f_80075440(c); // 801C109C
  W32(c->r[29]+0x00000034u,c->r[3]); // 801C10A0
  c->r[5]=c->r[3]|c->r[3]; // 801C10A4
  {uint32_t ea=c->r[2]+0xFFFFB744u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C10A8
  c->r[3]=c->r[31]+0x00000C88u; // 801C10AC
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C10B0
  c->r[4]=c->r[31]+0x000008ECu; // 801C10B4
  c->r[6]=0u+0x00000000u; // 801C10B8
  c->r[7]=0u+0x00000000u; // 801C10BC
  c->lr=0x801C10C4u; f_800BB0C8(c); // 801C10C0
  goto L_801C1110; // 801C10C4
L_801C10C8:;
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C10C8
  c->lr=0x801C10D0u; f_8016498C(c); // 801C10CC
  cmps(c,0,(int32_t)c->r[3],0); // 801C10D0
  if (crb(c,2)) { goto L_801C1110; } // 801C10D4
  c->r[3]=c->r[31]+0x000008ECu; // 801C10D8
  c->r[4]=c->r[31]+0x000021BCu; // 801C10DC
  c->lr=0x801C10E4u; f_80075440(c); // 801C10E0
  W32(c->r[29]+0x00000034u,c->r[3]); // 801C10E4
  c->r[5]=c->r[3]|c->r[3]; // 801C10E8
  {uint32_t ea=c->r[2]+0xFFFFB744u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C10EC
  c->r[3]=c->r[31]+0x00000C88u; // 801C10F0
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C10F4
  c->r[4]=c->r[31]+0x000008ECu; // 801C10F8
  c->r[6]=0u+0x00000000u; // 801C10FC
  c->r[7]=0u+0x00000000u; // 801C1100
  c->lr=0x801C1108u; f_800BB0C8(c); // 801C1104
  c->r[0]=0u+0x00000017u; // 801C1108
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C110C
L_801C1110:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1110
  {uint32_t ea=c->r[31]+0x00001FFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1114
  fcmp(c,0,c->f[1],c->f[0]); // 801C1118
  if (!crb(c,1)) { goto L_801C1134; } // 801C111C
  c->r[3]=0u+0x804D0000u; // 801C1120
  c->r[3]=c->r[3]+0x00003318u; // 801C1124
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1128
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C112C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1130
L_801C1134:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1134
  {uint32_t ea=c->r[31]+0x00001FFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1138
  fcmp(c,0,c->f[1],c->f[0]); // 801C113C
  if (!crb(c,0)) { goto L_801C146C; } // 801C1140
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1144
  goto L_801C146C; // 801C1148
L_801C114C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C114C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1150
  fcmp(c,0,c->f[1],c->f[0]); // 801C1154
  if (!crb(c,0)) { goto L_801C1170; } // 801C1158
  c->r[3]=0u+0x804D0000u; // 801C115C
  c->r[3]=c->r[3]+0x00003318u; // 801C1160
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1164
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C1168
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C116C
L_801C1170:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1170
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1174
  fcmp(c,0,c->f[1],c->f[0]); // 801C1178
  if (!crb(c,1)) { goto L_801C1184; } // 801C117C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1180
L_801C1184:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1184
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1188
  fcmp(c,0,c->f[1],c->f[0]); // 801C118C
  if (!crb(c,1)) { goto L_801C11A8; } // 801C1190
  c->r[3]=0u+0x804D0000u; // 801C1194
  c->r[3]=c->r[3]+0x00003318u; // 801C1198
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C119C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C11A0
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C11A4
L_801C11A8:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C11A8
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C11AC
  fcmp(c,0,c->f[1],c->f[0]); // 801C11B0
  if (!crb(c,0)) { goto L_801C146C; } // 801C11B4
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C11B8
  goto L_801C146C; // 801C11BC
L_801C11C0:;
  c->lr=0x801C11C4u; f_801C3C1C(c); // 801C11C0
  {uint32_t ea=c->r[2]+0xFFFFB760u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C11C4
  fcmp(c,0,c->f[1],c->f[0]); // 801C11C8
  if (!crb(c,0)) { goto L_801C1240; } // 801C11CC
  c->r[3]=c->r[31]+0x000008ECu; // 801C11D0
  c->r[4]=c->r[31]+0x00002194u; // 801C11D4
  c->lr=0x801C11DCu; f_80075440(c); // 801C11D8
  W32(c->r[29]+0x00000034u,c->r[3]); // 801C11DC
  c->r[5]=c->r[3]|c->r[3]; // 801C11E0
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C11E4
  c->r[3]=c->r[31]+0x00000C88u; // 801C11E8
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C11EC
  c->r[4]=c->r[31]+0x000008ECu; // 801C11F0
  c->r[6]=0u+0x00000000u; // 801C11F4
  c->r[7]=0u+0x00000000u; // 801C11F8
  c->lr=0x801C1200u; f_800BB0C8(c); // 801C11FC
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1200
  c->r[0]=0u+0x00000018u; // 801C1204
  {uint32_t ea=c->r[31]+0x00001FFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1208
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C120C
  fcmp(c,0,c->f[1],c->f[0]); // 801C1210
  if (!crb(c,1)) { goto L_801C122C; } // 801C1214
  c->r[3]=0u+0x804D0000u; // 801C1218
  c->r[3]=c->r[3]+0x00003318u; // 801C121C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1220
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C1224
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1228
L_801C122C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C122C
  {uint32_t ea=c->r[31]+0x00001FFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1230
  fcmp(c,0,c->f[1],c->f[0]); // 801C1234
  if (!crb(c,0)) { goto L_801C1240; } // 801C1238
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C123C
L_801C1240:;
  {uint32_t ea=c->r[31]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1240
  {uint32_t ea=c->r[2]+0xFFFFB764u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1244
  fcmp(c,0,c->f[1],c->f[0]); // 801C1248
  if (!crb(c,1)) { goto L_801C1258; } // 801C124C
  {uint32_t ea=c->r[31]+0x00002010u; WF32(ea,c->f[0]);} // 801C1250
  goto L_801C1274; // 801C1254
L_801C1258:;
  if (!crb(c,0)) { goto L_801C1274; } // 801C1258
  c->r[3]=0u+0x804D0000u; // 801C125C
  {uint32_t ea=c->r[2]+0xFFFFB738u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1260
  c->r[3]=c->r[3]+0x00003318u; // 801C1264
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1268
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801C126C
  {uint32_t ea=c->r[31]+0x00002010u; WF32(ea,c->f[0]);} // 801C1270
L_801C1274:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801C1274
  {uint32_t ea=c->r[31]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1278
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C127C
  c->lr=0x801C1284u; f_80165B9C(c); // 801C1280
  goto L_801C146C; // 801C1284
L_801C1288:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C1288
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C128C
  c->lr=0x801C1294u; f_800752CC(c); // 801C1290
  {uint32_t ea=c->r[2]+0xFFFFB768u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1294
  fcmp(c,0,c->f[1],c->f[0]); // 801C1298
  if (!crb(c,1)) { goto L_801C146C; } // 801C129C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C12A0
  c->r[4]=c->r[31]+0x000008D0u; // 801C12A4
  c->r[3]=c->r[1]+0x000000DCu; // 801C12A8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C12AC
  c->ctr=c->r[12]; // 801C12B0
  if (true) { c->lr=0x801C12B8u; dispatch(c,c->ctr); } // 801C12B4
  c->r[3]=c->r[1]+0x0000004Cu; // 801C12B8
  c->r[4]=c->r[1]+0x000000DCu; // 801C12BC
  c->lr=0x801C12C4u; f_800BC9F4(c); // 801C12C0
  c->lr=0x801C12C8u; f_80061A4C(c); // 801C12C4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C12C8
  c->r[30]=c->r[3]|c->r[3]; // 801C12CC
  c->r[4]=c->r[31]+0x000008D0u; // 801C12D0
  c->r[3]=c->r[1]+0x000000ACu; // 801C12D4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C12D8
  c->ctr=c->r[12]; // 801C12DC
  if (true) { c->lr=0x801C12E4u; dispatch(c,c->ctr); } // 801C12E0
  c->r[3]=c->r[1]+0x00000010u; // 801C12E4
  c->r[4]=c->r[1]+0x000000ACu; // 801C12E8
  c->lr=0x801C12F0u; f_80032FD8(c); // 801C12EC
  c->r[3]=c->r[1]+0x00000040u; // 801C12F0
  c->r[4]=c->r[30]+0x00000384u; // 801C12F4
  c->r[5]=c->r[1]+0x00000010u; // 801C12F8
  c->lr=0x801C1300u; f_8007B8A4(c); // 801C12FC
  c->r[3]=c->r[1]+0x00000040u; // 801C1300
  c->lr=0x801C1308u; f_80065368(c); // 801C1304
  cmps(c,0,(int32_t)c->r[3],0); // 801C1308
  if (!crb(c,2)) { goto L_801C131C; } // 801C130C
  c->r[3]=c->r[1]+0x00000040u; // 801C1310
  c->r[4]=c->r[3]|c->r[3]; // 801C1314
  c->lr=0x801C131Cu; f_80265750(c); // 801C1318
L_801C131C:;
  c->r[3]=c->r[1]+0x0000004Cu; // 801C131C
  c->r[4]=c->r[1]+0x00000040u; // 801C1320
  c->lr=0x801C1328u; f_800653BC(c); // 801C1324
  {uint32_t ea=c->r[2]+0xFFFFB76Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1328
  fcmp(c,0,c->f[1],c->f[0]); // 801C132C
  if (!crb(c,1)) { goto L_801C1428; } // 801C1330
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C1334
  c->r[4]=c->r[31]+0x000008D0u; // 801C1338
  c->r[3]=c->r[1]+0x0000007Cu; // 801C133C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C1340
  c->ctr=c->r[12]; // 801C1344
  if (true) { c->lr=0x801C134Cu; dispatch(c,c->ctr); } // 801C1348
  c->r[3]=c->r[1]+0x00000034u; // 801C134C
  c->r[4]=c->r[1]+0x0000007Cu; // 801C1350
  c->lr=0x801C1358u; f_80032FD8(c); // 801C1354
  {uint32_t ea=c->r[29]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1358
  c->r[3]=c->r[1]+0x00000058u; // 801C135C
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1360
  c->r[4]=c->r[1]+0x00000034u; // 801C1364
  c->r[5]=0u+0xFFFFFFFFu; // 801C1368
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801C136C
  c->lr=0x801C1374u; f_800BCD10(c); // 801C1370
  c->r[0]=R32(c->r[29]+0x00000024u); // 801C1374
  c->r[5]=c->r[13]+0xFFFF94B8u; // 801C1378
  c->r[3]=c->r[1]+0x00000008u; // 801C137C
  c->r[4]=c->r[1]+0x00000058u; // 801C1380
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C1384
  c->r[6]=R32(c->r[5]+c->r[0]); // 801C1388
  c->r[5]=R32(c->r[6]+0x00000000u); // 801C138C
  c->r[0]=R32(c->r[6]+0x00000004u); // 801C1390
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C1394
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C1398
  c->lr=0x801C13A0u; f_800BCDAC(c); // 801C139C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C13A0
  c->r[4]=c->r[31]+0x000008D0u; // 801C13A4
  c->r[3]=c->r[1]+0x0000010Cu; // 801C13A8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C13AC
  c->ctr=c->r[12]; // 801C13B0
  if (true) { c->lr=0x801C13B8u; dispatch(c,c->ctr); } // 801C13B4
  {uint32_t ea=c->r[1]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C13B8
  c->r[3]=c->r[1]+0x00000028u; // 801C13BC
  {uint32_t ea=c->r[1]+0x00000128u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C13C0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C13C4
  c->lr=0x801C13CCu; f_800521A0(c); // 801C13C8
  c->lr=0x801C13D0u; f_80061A4C(c); // 801C13CC
  c->r[4]=c->r[3]|c->r[3]; // 801C13D0
  c->r[3]=c->r[1]+0x0000001Cu; // 801C13D4
  c->r[4]=c->r[4]+0x00000384u; // 801C13D8
  c->r[5]=c->r[1]+0x00000028u; // 801C13DC
  c->lr=0x801C13E4u; f_8007B8A4(c); // 801C13E0
  c->r[3]=c->r[1]+0x0000001Cu; // 801C13E4
  c->r[4]=c->r[3]|c->r[3]; // 801C13E8
  c->lr=0x801C13F0u; f_80265750(c); // 801C13EC
  c->r[3]=c->r[1]+0x0000010Cu; // 801C13F0
  c->lr=0x801C13F8u; f_80264680(c); // 801C13F4
  c->r[3]=c->r[1]+0x0000010Cu; // 801C13F8
  c->r[4]=c->r[1]+0x0000001Cu; // 801C13FC
  c->lr=0x801C1404u; f_8007513C(c); // 801C1400
  c->r[3]=c->r[1]+0x0000010Cu; // 801C1404
  c->r[4]=c->r[1]+0x00000028u; // 801C1408
  c->lr=0x801C1410u; f_80032FF4(c); // 801C140C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C1410
  c->r[3]=c->r[31]+0x000008D0u; // 801C1414
  c->r[4]=c->r[1]+0x0000010Cu; // 801C1418
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C141C
  c->ctr=c->r[12]; // 801C1420
  if (true) { c->lr=0x801C1428u; dispatch(c,c->ctr); } // 801C1424
L_801C1428:;
  c->r[0]=0u+0x00000019u; // 801C1428
  c->r[3]=R32(c->r[31]+0x00000974u); // 801C142C
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C1430
  {uint32_t ea=c->r[2]+0xFFFFB724u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1434
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1438
  c->lr=0x801C1440u; f_80165B9C(c); // 801C143C
  goto L_801C146C; // 801C1440
L_801C1444:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C1444
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1448
  c->lr=0x801C1450u; f_800752CC(c); // 801C144C
  {uint32_t ea=c->r[2]+0xFFFFB770u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1450
  fcmp(c,0,c->f[1],c->f[0]); // 801C1454
  if (!crb(c,1)) { goto L_801C146C; } // 801C1458
  c->r[0]=0u+0x0000001Eu; // 801C145C
  c->r[3]=c->r[31]|c->r[31]; // 801C1460
  W16(c->r[31]+0x00001FECu,c->r[0]); // 801C1464
  c->lr=0x801C146Cu; f_800AC8F8(c); // 801C1468
L_801C146C:;
  c->r[11]=c->r[1]+0x00000150u; // 801C146C
  c->lr=0x801C1474u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C1470
  c->r[0]=R32(c->r[1]+0x00000154u); // 801C1474
  c->lr=c->r[0]; // 801C1478
  c->r[1]=c->r[1]+0x00000150u; // 801C147C
  return; // 801C1480
}

// fn_801C1484
void f_801C1484(Ctx* __restrict c) {
  trace_call(0x801C1484u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1484
  c->r[0]=c->lr; // 801C1488
  W32(c->r[1]+0x00000094u,c->r[0]); // 801C148C
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801C1490
  c->r[31]=c->r[3]|c->r[3]; // 801C1494
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C1498
  cmps(c,0,(int32_t)c->r[0],23); // 801C149C
  if (crb(c,2)) { goto L_801C14F8; } // 801C14A0
  if (!crb(c,0)) { goto L_801C1538; } // 801C14A4
  cmps(c,0,(int32_t)c->r[0],22); // 801C14A8
  if (!crb(c,0)) { goto L_801C14B4; } // 801C14AC
  goto L_801C1538; // 801C14B0
L_801C14B4:;
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C14B4
  c->r[3]=c->r[1]+0x00000014u; // 801C14B8
  c->f[2]=c->f[1]; // 801C14BC
  c->f[3]=c->f[1]; // 801C14C0
  c->lr=0x801C14C8u; f_800521A0(c); // 801C14C4
  {uint32_t ea=c->r[2]+0xFFFFB740u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C14C8
  c->r[5]=c->r[3]|c->r[3]; // 801C14CC
  c->r[4]=c->r[31]|c->r[31]; // 801C14D0
  c->r[3]=c->r[1]+0x00000050u; // 801C14D4
  c->lr=0x801C14DCu; f_801C3C7C(c); // 801C14D8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C14DC
  c->r[3]=c->r[31]+0x000008D0u; // 801C14E0
  c->r[4]=c->r[1]+0x00000050u; // 801C14E4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C14E8
  c->ctr=c->r[12]; // 801C14EC
  if (true) { c->lr=0x801C14F4u; dispatch(c,c->ctr); } // 801C14F0
  goto L_801C1538; // 801C14F4
L_801C14F8:;
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C14F8
  c->r[3]=c->r[1]+0x00000008u; // 801C14FC
  c->f[2]=c->f[1]; // 801C1500
  c->f[3]=c->f[1]; // 801C1504
  c->lr=0x801C150Cu; f_800521A0(c); // 801C1508
  {uint32_t ea=c->r[2]+0xFFFFB768u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C150C
  c->r[5]=c->r[3]|c->r[3]; // 801C1510
  c->r[4]=c->r[31]|c->r[31]; // 801C1514
  c->r[3]=c->r[1]+0x00000020u; // 801C1518
  c->lr=0x801C1520u; f_801C3C7C(c); // 801C151C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C1520
  c->r[3]=c->r[31]+0x000008D0u; // 801C1524
  c->r[4]=c->r[1]+0x00000020u; // 801C1528
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C152C
  c->ctr=c->r[12]; // 801C1530
  if (true) { c->lr=0x801C1538u; dispatch(c,c->ctr); } // 801C1534
L_801C1538:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801C1538
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801C153C
  c->lr=c->r[0]; // 801C1540
  c->r[1]=c->r[1]+0x00000090u; // 801C1544
  return; // 801C1548
}

// fn_801C154C
void f_801C154C(Ctx* __restrict c) {
  trace_call(0x801C154Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C154C
  c->r[0]=c->lr; // 801C1550
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1554
  c->r[0]=0u+0x00000016u; // 801C1558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C155C
  c->r[31]=c->r[4]|c->r[4]; // 801C1560
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C1564
  c->r[30]=c->r[3]|c->r[3]; // 801C1568
  c->r[4]=c->r[30]+0x00001F3Du; // 801C156C
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C1570
  c->r[3]=c->r[3]+0x000008ECu; // 801C1574
  c->lr=0x801C157Cu; f_80075440(c); // 801C1578
  W32(c->r[31]+0x00000034u,c->r[3]); // 801C157C
  c->r[5]=c->r[3]|c->r[3]; // 801C1580
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1584
  c->r[3]=c->r[30]+0x00000C88u; // 801C1588
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C158C
  c->r[4]=c->r[30]+0x000008ECu; // 801C1590
  c->r[6]=0u+0x00000000u; // 801C1594
  c->r[7]=0u+0x00000000u; // 801C1598
  c->lr=0x801C15A0u; f_800BB0C8(c); // 801C159C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C15A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C15A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C15A8
  c->lr=c->r[0]; // 801C15AC
  c->r[1]=c->r[1]+0x00000010u; // 801C15B0
  return; // 801C15B4
}

// fn_801C15B8
void f_801C15B8(Ctx* __restrict c) {
  trace_call(0x801C15B8u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C15B8
  c->r[0]=c->lr; // 801C15BC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801C15C0
  W32(c->r[1]+0x000000ECu,c->r[31]); // 801C15C4
  c->r[31]=c->r[3]|c->r[3]; // 801C15C8
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C15CC
  cmps(c,0,(int32_t)c->r[0],23); // 801C15D0
  if (crb(c,2)) { goto L_801C16A8; } // 801C15D4
  if (!crb(c,0)) { goto L_801C15E8; } // 801C15D8
  cmps(c,0,(int32_t)c->r[0],22); // 801C15DC
  if (!crb(c,0)) { goto L_801C15F4; } // 801C15E0
  goto L_801C17B8; // 801C15E4
L_801C15E8:;
  cmps(c,0,(int32_t)c->r[0],26); // 801C15E8
  if (crb(c,2)) { goto L_801C1708; } // 801C15EC
  goto L_801C17B8; // 801C15F0
L_801C15F4:;
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C15F4
  c->r[3]=c->r[1]+0x00000038u; // 801C15F8
  c->f[2]=c->f[1]; // 801C15FC
  c->f[3]=c->f[1]; // 801C1600
  c->lr=0x801C1608u; f_800521A0(c); // 801C1604
  {uint32_t ea=c->r[2]+0xFFFFB740u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1608
  c->r[5]=c->r[3]|c->r[3]; // 801C160C
  c->r[4]=c->r[31]|c->r[31]; // 801C1610
  c->r[3]=c->r[1]+0x00000080u; // 801C1614
  c->lr=0x801C161Cu; f_801C3C7C(c); // 801C1618
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C161C
  c->r[3]=c->r[31]+0x000008D0u; // 801C1620
  c->r[4]=c->r[1]+0x00000080u; // 801C1624
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C1628
  c->ctr=c->r[12]; // 801C162C
  if (true) { c->lr=0x801C1634u; dispatch(c,c->ctr); } // 801C1630
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1634
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1638
  fcmp(c,0,c->f[1],c->f[0]); // 801C163C
  if (!crb(c,0)) { goto L_801C1658; } // 801C1640
  c->r[3]=0u+0x804D0000u; // 801C1644
  c->r[3]=c->r[3]+0x00003318u; // 801C1648
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C164C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C1650
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1654
L_801C1658:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1658
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C165C
  fcmp(c,0,c->f[1],c->f[0]); // 801C1660
  if (!crb(c,1)) { goto L_801C166C; } // 801C1664
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1668
L_801C166C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C166C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1670
  fcmp(c,0,c->f[1],c->f[0]); // 801C1674
  if (!crb(c,1)) { goto L_801C1690; } // 801C1678
  c->r[3]=0u+0x804D0000u; // 801C167C
  c->r[3]=c->r[3]+0x00003318u; // 801C1680
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1684
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C1688
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C168C
L_801C1690:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1690
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1694
  fcmp(c,0,c->f[1],c->f[0]); // 801C1698
  if (!crb(c,0)) { goto L_801C17B8; } // 801C169C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C16A0
  goto L_801C17B8; // 801C16A4
L_801C16A8:;
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C16A8
  c->r[3]=c->r[1]+0x0000002Cu; // 801C16AC
  c->f[2]=c->f[1]; // 801C16B0
  c->f[3]=c->f[1]; // 801C16B4
  c->lr=0x801C16BCu; f_800521A0(c); // 801C16B8
  {uint32_t ea=c->r[2]+0xFFFFB774u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C16BC
  c->r[5]=c->r[3]|c->r[3]; // 801C16C0
  c->r[4]=c->r[31]|c->r[31]; // 801C16C4
  c->r[3]=c->r[1]+0x00000050u; // 801C16C8
  c->lr=0x801C16D0u; f_801C3C7C(c); // 801C16CC
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C16D0
  c->r[3]=c->r[31]+0x000008D0u; // 801C16D4
  c->r[4]=c->r[1]+0x00000050u; // 801C16D8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C16DC
  c->ctr=c->r[12]; // 801C16E0
  if (true) { c->lr=0x801C16E8u; dispatch(c,c->ctr); } // 801C16E4
  c->r[3]=0u+0x804D0000u; // 801C16E8
  {uint32_t ea=c->r[2]+0xFFFFB74Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C16EC
  c->r[3]=c->r[3]+0x00003318u; // 801C16F0
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C16F4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C16F8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801C16FC
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1700
  goto L_801C17B8; // 801C1704
L_801C1708:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C1708
  c->r[4]=c->r[31]+0x000008D0u; // 801C170C
  c->r[3]=c->r[1]+0x000000B0u; // 801C1710
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C1714
  c->ctr=c->r[12]; // 801C1718
  if (true) { c->lr=0x801C1720u; dispatch(c,c->ctr); } // 801C171C
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1720
  c->r[3]=c->r[1]+0x00000044u; // 801C1724
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1728
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C172C
  c->lr=0x801C1734u; f_800521A0(c); // 801C1730
  c->lr=0x801C1738u; f_80061A4C(c); // 801C1734
  c->r[5]=c->r[3]|c->r[3]; // 801C1738
  c->r[3]=c->r[1]+0x00000008u; // 801C173C
  c->r[4]=c->r[5]+0x00000390u; // 801C1740
  c->r[5]=c->r[5]+0x00000384u; // 801C1744
  c->lr=0x801C174Cu; f_8007B8A4(c); // 801C1748
  c->r[3]=c->r[1]+0x00000008u; // 801C174C
  c->r[4]=c->r[1]+0x00000014u; // 801C1750
  c->lr=0x801C1758u; f_80265750(c); // 801C1754
  c->r[3]=0u+0x804D0000u; // 801C1758
  {uint32_t ea=c->r[2]+0xFFFFB778u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C175C
  c->r[3]=c->r[3]+0x00003318u; // 801C1760
  c->r[5]=c->r[1]+0x00000020u; // 801C1764
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1768
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C176C
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801C1770
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801C1774
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 801C1778
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 801C177C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801C1780
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,1,ea,1,0);} // 801C1784
  c->r[3]=c->r[1]+0x00000044u; // 801C1788
  c->r[4]=c->r[3]|c->r[3]; // 801C178C
  c->lr=0x801C1794u; f_80064C34(c); // 801C1790
  c->r[3]=c->r[1]+0x000000B0u; // 801C1794
  c->r[4]=c->r[1]+0x00000044u; // 801C1798
  c->lr=0x801C17A0u; f_80032FF4(c); // 801C179C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C17A0
  c->r[3]=c->r[31]+0x000008D0u; // 801C17A4
  c->r[4]=c->r[1]+0x000000B0u; // 801C17A8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C17AC
  c->ctr=c->r[12]; // 801C17B0
  if (true) { c->lr=0x801C17B8u; dispatch(c,c->ctr); } // 801C17B4
L_801C17B8:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801C17B8
  c->r[31]=R32(c->r[1]+0x000000ECu); // 801C17BC
  c->lr=c->r[0]; // 801C17C0
  c->r[1]=c->r[1]+0x000000F0u; // 801C17C4
  return; // 801C17C8
}

// fn_801C17CC
void f_801C17CC(Ctx* __restrict c) {
  trace_call(0x801C17CCu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C17CC
  c->r[0]=c->lr; // 801C17D0
  W32(c->r[1]+0x00000134u,c->r[0]); // 801C17D4
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801C17D8
  c->r[31]=c->r[4]|c->r[4]; // 801C17DC
  W32(c->r[1]+0x00000128u,c->r[30]); // 801C17E0
  c->r[30]=c->r[3]|c->r[3]; // 801C17E4
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C17E8
  cmps(c,0,(int32_t)c->r[0],24); // 801C17EC
  if (crb(c,2)) { goto L_801C19A4; } // 801C17F0
  if (!crb(c,0)) { goto L_801C1808; } // 801C17F4
  cmps(c,0,(int32_t)c->r[0],22); // 801C17F8
  if (crb(c,2)) { goto L_801C1814; } // 801C17FC
  if (!crb(c,0)) { goto L_801C18E0; } // 801C1800
  goto L_801C1A84; // 801C1804
L_801C1808:;
  cmps(c,0,(int32_t)c->r[0],26); // 801C1808
  if (crb(c,2)) { goto L_801C1A64; } // 801C180C
  goto L_801C1A84; // 801C1810
L_801C1814:;
  c->lr=0x801C1818u; f_801C3C1C(c); // 801C1814
  {uint32_t ea=c->r[2]+0xFFFFB718u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1818
  fcmp(c,0,c->f[1],c->f[0]); // 801C181C
  if (!crb(c,0)) { goto L_801C1A84; } // 801C1820
  c->r[3]=c->r[30]+0x000008ECu; // 801C1824
  c->r[4]=c->r[30]+0x00002180u; // 801C1828
  c->lr=0x801C1830u; f_80075440(c); // 801C182C
  W32(c->r[31]+0x00000034u,c->r[3]); // 801C1830
  c->r[5]=c->r[3]|c->r[3]; // 801C1834
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1838
  c->r[3]=c->r[30]+0x00000C88u; // 801C183C
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1840
  c->r[4]=c->r[30]+0x000008ECu; // 801C1844
  c->r[6]=0u+0x00000000u; // 801C1848
  c->r[7]=0u+0x00000000u; // 801C184C
  c->lr=0x801C1854u; f_800BB0C8(c); // 801C1850
  c->r[0]=0u+0x00000017u; // 801C1854
  c->r[4]=c->r[30]+0x000008D0u; // 801C1858
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C185C
  c->r[3]=c->r[1]+0x000000C4u; // 801C1860
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C1864
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C1868
  c->ctr=c->r[12]; // 801C186C
  if (true) { c->lr=0x801C1874u; dispatch(c,c->ctr); } // 801C1870
  c->r[3]=c->r[1]+0x00000034u; // 801C1874
  c->r[4]=c->r[1]+0x000000C4u; // 801C1878
  c->lr=0x801C1880u; f_80032FD8(c); // 801C187C
  {uint32_t ea=c->r[2]+0xFFFFB724u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1880
  c->r[3]=0u+0x803E0000u; // 801C1884
  c->r[8]=R32(c->r[1]+0x00000034u); // 801C1888
  c->r[3]=c->r[3]+0x000009A0u; // 801C188C
  c->r[7]=R32(c->r[1]+0x00000038u); // 801C1890
  c->f[2]=c->f[1]; // 801C1894
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 801C1898
  c->r[31]=0u+0x80460000u; // 801C189C
  c->r[4]=c->r[3]+0x0000005Fu; // 801C18A0
  W32(c->r[1]+0x00000040u,c->r[8]); // 801C18A4
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 801C18A8
  W32(c->r[1]+0x00000044u,c->r[7]); // 801C18AC
  c->r[5]=c->r[1]+0x0000001Cu; // 801C18B0
  c->r[6]=0u+0xFFFFFFFFu; // 801C18B4
  W32(c->r[1]+0x00000048u,c->r[0]); // 801C18B8
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801C18BC
  W32(c->r[1]+0x00000020u,c->r[7]); // 801C18C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C18C4
  c->lr=0x801C18CCu; f_8004AD54(c); // 801C18C8
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C18CC
  c->r[4]=c->r[3]|c->r[3]; // 801C18D0
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 801C18D4
  c->lr=0x801C18DCu; f_8004B4F8(c); // 801C18D8
  goto L_801C1A84; // 801C18DC
L_801C18E0:;
  c->lr=0x801C18E4u; f_801C3C1C(c); // 801C18E0
  {uint32_t ea=c->r[2]+0xFFFFB774u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C18E4
  fcmp(c,0,c->f[1],c->f[0]); // 801C18E8
  if (!crb(c,0)) { goto L_801C1A84; } // 801C18EC
  c->r[0]=0u+0x00000018u; // 801C18F0
  c->r[4]=c->r[30]+0x000008D0u; // 801C18F4
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C18F8
  c->r[3]=c->r[1]+0x000000F4u; // 801C18FC
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C1900
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C1904
  c->ctr=c->r[12]; // 801C1908
  if (true) { c->lr=0x801C1910u; dispatch(c,c->ctr); } // 801C190C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1910
  c->r[3]=c->r[1]+0x00000064u; // 801C1914
  {uint32_t ea=c->r[1]+0x00000110u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1918
  {uint32_t ea=c->r[1]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C191C
  c->lr=0x801C1924u; f_800521A0(c); // 801C1920
  c->lr=0x801C1928u; f_80061A4C(c); // 801C1924
  c->r[5]=c->r[3]|c->r[3]; // 801C1928
  c->r[3]=c->r[1]+0x00000010u; // 801C192C
  c->r[4]=c->r[5]+0x00000390u; // 801C1930
  c->r[5]=c->r[5]+0x00000384u; // 801C1934
  c->lr=0x801C193Cu; f_8007B8A4(c); // 801C1938
  c->r[3]=c->r[1]+0x00000010u; // 801C193C
  c->r[4]=c->r[1]+0x00000028u; // 801C1940
  c->lr=0x801C1948u; f_80265750(c); // 801C1944
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1948
  c->r[3]=c->r[1]+0x00000058u; // 801C194C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1950
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1954
  c->f[1]=-c->f[1]; // 801C1958
  c->f[2]=-c->f[2]; // 801C195C
  c->f[3]=-c->f[0]; // 801C1960
  c->lr=0x801C1968u; f_800521A0(c); // 801C1964
  c->r[3]=c->r[1]+0x000000F4u; // 801C1968
  c->lr=0x801C1970u; f_80264680(c); // 801C196C
  c->r[3]=c->r[1]+0x000000F4u; // 801C1970
  c->r[4]=c->r[1]+0x00000058u; // 801C1974
  c->lr=0x801C197Cu; f_8007513C(c); // 801C1978
  c->r[3]=c->r[1]+0x000000F4u; // 801C197C
  c->r[4]=c->r[1]+0x00000064u; // 801C1980
  c->lr=0x801C1988u; f_80032FF4(c); // 801C1984
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C1988
  c->r[3]=c->r[30]+0x000008D0u; // 801C198C
  c->r[4]=c->r[1]+0x000000F4u; // 801C1990
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C1994
  c->ctr=c->r[12]; // 801C1998
  if (true) { c->lr=0x801C19A0u; dispatch(c,c->ctr); } // 801C199C
  goto L_801C1A84; // 801C19A0
L_801C19A4:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C19A4
  c->r[4]=c->r[30]+0x000008D0u; // 801C19A8
  c->r[3]=c->r[1]+0x00000094u; // 801C19AC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C19B0
  c->ctr=c->r[12]; // 801C19B4
  if (true) { c->lr=0x801C19BCu; dispatch(c,c->ctr); } // 801C19B8
  c->r[3]=c->r[1]+0x0000004Cu; // 801C19BC
  c->r[4]=c->r[1]+0x00000094u; // 801C19C0
  c->lr=0x801C19C8u; f_80032FD8(c); // 801C19C4
  c->r[3]=c->r[30]|c->r[30]; // 801C19C8
  c->lr=0x801C19D0u; f_801C3C1C(c); // 801C19CC
  {uint32_t ea=c->r[2]+0xFFFFB77Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C19D0
  fcmp(c,0,c->f[1],c->f[0]); // 801C19D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C19D8
  if (!crb(c,2)) { goto L_801C1A28; } // 801C19DC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C19E0
  c->r[3]=c->r[1]+0x00000070u; // 801C19E4
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C19E8
  c->r[4]=c->r[1]+0x0000004Cu; // 801C19EC
  c->r[5]=0u+0xFFFFFFFFu; // 801C19F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801C19F4
  c->lr=0x801C19FCu; f_800BCD10(c); // 801C19F8
  c->r[0]=R32(c->r[31]+0x00000024u); // 801C19FC
  c->r[5]=c->r[13]+0xFFFF94B8u; // 801C1A00
  c->r[3]=c->r[1]+0x00000008u; // 801C1A04
  c->r[4]=c->r[1]+0x00000070u; // 801C1A08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C1A0C
  c->r[6]=R32(c->r[5]+c->r[0]); // 801C1A10
  c->r[5]=R32(c->r[6]+0x00000000u); // 801C1A14
  c->r[0]=R32(c->r[6]+0x00000004u); // 801C1A18
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C1A1C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C1A20
  c->lr=0x801C1A28u; f_800BCDAC(c); // 801C1A24
L_801C1A28:;
  c->r[3]=c->r[30]+0x000008ECu; // 801C1A28
  c->r[4]=c->r[30]+0x00002194u; // 801C1A2C
  c->lr=0x801C1A34u; f_80075440(c); // 801C1A30
  W32(c->r[31]+0x00000034u,c->r[3]); // 801C1A34
  c->r[5]=c->r[3]|c->r[3]; // 801C1A38
  {uint32_t ea=c->r[2]+0xFFFFB758u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1A3C
  c->r[3]=c->r[30]+0x00000C88u; // 801C1A40
  {uint32_t ea=c->r[2]+0xFFFFB780u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1A44
  c->r[4]=c->r[30]+0x000008ECu; // 801C1A48
  c->r[6]=0u+0x00000000u; // 801C1A4C
  c->r[7]=0u+0x00000000u; // 801C1A50
  c->lr=0x801C1A58u; f_800BB0C8(c); // 801C1A54
  c->r[0]=0u+0x0000001Au; // 801C1A58
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C1A5C
  goto L_801C1A84; // 801C1A60
L_801C1A64:;
  c->lr=0x801C1A68u; f_801C3C1C(c); // 801C1A64
  {uint32_t ea=c->r[2]+0xFFFFB760u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1A68
  fcmp(c,0,c->f[1],c->f[0]); // 801C1A6C
  if (!crb(c,1)) { goto L_801C1A84; } // 801C1A70
  c->r[0]=0u+0x0000001Eu; // 801C1A74
  c->r[3]=c->r[30]|c->r[30]; // 801C1A78
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801C1A7C
  c->lr=0x801C1A84u; f_800AC8F8(c); // 801C1A80
L_801C1A84:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801C1A84
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801C1A88
  c->r[30]=R32(c->r[1]+0x00000128u); // 801C1A8C
  c->lr=c->r[0]; // 801C1A90
  c->r[1]=c->r[1]+0x00000130u; // 801C1A94
  return; // 801C1A98
}

// fn_801C1A9C
void f_801C1A9C(Ctx* __restrict c) {
  trace_call(0x801C1A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1A9C
  c->r[0]=c->lr; // 801C1AA0
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1AA4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C1AA8
  c->r[0]=0u+0x0000001Eu; // 801C1AAC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801C1AB0
  c->r[31]=c->r[4]|c->r[4]; // 801C1AB4
  W32(c->r[1]+0x00000058u,c->r[30]); // 801C1AB8
  c->r[30]=c->r[3]|c->r[3]; // 801C1ABC
  c->r[4]=c->r[30]+0x00001F51u; // 801C1AC0
  {uint32_t ea=c->r[3]+0x00001FFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1AC4
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[1]);} // 801C1AC8
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C1ACC
  {uint32_t ea=c->r[3]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1AD0
  c->r[3]=c->r[3]+0x000008ECu; // 801C1AD4
  c->lr=0x801C1ADCu; f_80075440(c); // 801C1AD8
  W32(c->r[31]+0x00000014u,c->r[3]); // 801C1ADC
  c->r[5]=c->r[3]|c->r[3]; // 801C1AE0
  {uint32_t ea=c->r[2]+0xFFFFB744u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1AE4
  c->r[3]=c->r[30]+0x00000C88u; // 801C1AE8
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1AEC
  c->r[4]=c->r[30]+0x000008ECu; // 801C1AF0
  c->r[6]=0u+0x00000000u; // 801C1AF4
  c->r[7]=0u+0x00000000u; // 801C1AF8
  c->lr=0x801C1B00u; f_800BB0C8(c); // 801C1AFC
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1B00
  c->r[3]=c->r[1]+0x00000014u; // 801C1B04
  c->f[2]=c->f[1]; // 801C1B08
  c->f[3]=c->f[1]; // 801C1B0C
  c->lr=0x801C1B14u; f_800521A0(c); // 801C1B10
  c->r[4]=c->r[3]|c->r[3]; // 801C1B14
  c->r[3]=c->r[31]+0x00000024u; // 801C1B18
  c->lr=0x801C1B20u; f_8003F468(c); // 801C1B1C
  {uint32_t ea=c->r[2]+0xFFFFB774u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1B20
  c->r[4]=c->r[30]+0x000008D0u; // 801C1B24
  c->r[3]=c->r[1]+0x00000020u; // 801C1B28
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801C1B2C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C1B30
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C1B34
  c->ctr=c->r[12]; // 801C1B38
  if (true) { c->lr=0x801C1B40u; dispatch(c,c->ctr); } // 801C1B3C
  c->r[3]=c->r[1]+0x00000008u; // 801C1B40
  c->r[4]=c->r[1]+0x00000020u; // 801C1B44
  c->lr=0x801C1B4Cu; f_80032FD8(c); // 801C1B48
  c->r[3]=c->r[31]+0x00000038u; // 801C1B4C
  c->r[4]=c->r[1]+0x00000008u; // 801C1B50
  c->lr=0x801C1B58u; f_8003F468(c); // 801C1B54
  c->r[3]=R32(c->r[30]+0x00000974u); // 801C1B58
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1B5C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C1B60
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801C1B64
  c->r[3]=R32(c->r[30]+0x00000974u); // 801C1B68
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C1B6C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C1B70
  W32(c->r[31]+0x00000018u,c->r[0]); // 801C1B74
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801C1B78
  c->r[30]=R32(c->r[1]+0x00000058u); // 801C1B7C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C1B80
  c->lr=c->r[0]; // 801C1B84
  c->r[1]=c->r[1]+0x00000060u; // 801C1B88
  return; // 801C1B8C
}

// fn_801C1B90
void f_801C1B90(Ctx* __restrict c) {
  trace_call(0x801C1B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1B90
  c->r[0]=c->lr; // 801C1B94
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C1B98
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801C1B9C
  c->r[31]=c->r[3]|c->r[3]; // 801C1BA0
  c->lr=0x801C1BA8u; f_801C2758(c); // 801C1BA4
  c->r[3]=c->r[31]|c->r[31]; // 801C1BA8
  c->lr=0x801C1BB0u; f_801C3C1C(c); // 801C1BAC
  {uint32_t ea=c->r[2]+0xFFFFB760u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1BB0
  fcmp(c,0,c->f[1],c->f[0]); // 801C1BB4
  if (!crb(c,1)) { goto L_801C1BFC; } // 801C1BB8
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1BBC
  c->r[3]=c->r[1]+0x00000008u; // 801C1BC0
  c->f[2]=c->f[1]; // 801C1BC4
  c->f[3]=c->f[1]; // 801C1BC8
  c->lr=0x801C1BD0u; f_800521A0(c); // 801C1BCC
  {uint32_t ea=c->r[2]+0xFFFFB740u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1BD0
  c->r[5]=c->r[3]|c->r[3]; // 801C1BD4
  c->r[4]=c->r[31]|c->r[31]; // 801C1BD8
  c->r[3]=c->r[1]+0x00000014u; // 801C1BDC
  c->lr=0x801C1BE4u; f_801C3C7C(c); // 801C1BE0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C1BE4
  c->r[3]=c->r[31]+0x000008D0u; // 801C1BE8
  c->r[4]=c->r[1]+0x00000014u; // 801C1BEC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C1BF0
  c->ctr=c->r[12]; // 801C1BF4
  if (true) { c->lr=0x801C1BFCu; dispatch(c,c->ctr); } // 801C1BF8
L_801C1BFC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C1BFC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801C1C00
  c->lr=c->r[0]; // 801C1C04
  c->r[1]=c->r[1]+0x00000050u; // 801C1C08
  return; // 801C1C0C
}

// fn_801C1C10
void f_801C1C10(Ctx* __restrict c) {
  trace_call(0x801C1C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1C10
  c->r[0]=c->lr; // 801C1C14
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C1C18
  c->r[11]=c->r[1]+0x00000050u; // 801C1C1C
  c->lr=0x801C1C24u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C1C20
  c->r[31]=c->r[1]|c->r[1]; // 801C1C24
  c->r[4]=0u+0x804D0000u; // 801C1C28
  c->r[5]=R16(c->r[3]+0x000021E4u); // 801C1C2C
  c->r[4]=c->r[4]+0x00003318u; // 801C1C30
  {uint32_t ea=c->r[3]+0x00002010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C34
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1C38
  cmpu(c,0,c->r[5],0x0000001Eu); // 801C1C3C
  c->r[30]=c->r[3]|c->r[3]; // 801C1C40
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C1C44
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[0]);} // 801C1C48
  if (!crb(c,2)) { goto L_801C1D1C; } // 801C1C4C
  c->f[1]=c->ps1[1]=S(c->f[0]); // 801C1C50
  {uint32_t ea=c->r[2]+0xFFFFB728u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C54
  fcmp(c,0,c->f[1],c->f[0]); // 801C1C58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C1C5C
  if (!crb(c,2)) { goto L_801C1D74; } // 801C1C60
  c->r[0]=0u+0x00000000u; // 801C1C64
  c->r[29]=0u+0x00000014u; // 801C1C68
  W16(c->r[3]+0x000021E6u,c->r[0]); // 801C1C6C
  W16(c->r[3]+0x00001FECu,c->r[29]); // 801C1C70
  c->lr=0x801C1C78u; f_801C3C1C(c); // 801C1C74
  {uint32_t ea=c->r[2]+0xFFFFB760u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C78
  fcmp(c,0,c->f[1],c->f[0]); // 801C1C7C
  if (!crb(c,1)) { goto L_801C1C88; } // 801C1C80
  W16(c->r[30]+0x00001FEEu,c->r[29]); // 801C1C84
L_801C1C88:;
  c->r[3]=R32(c->r[30]+0x00000054u); // 801C1C88
  cmps(c,0,(int32_t)c->r[3],0); // 801C1C8C
  if (crb(c,2)) { goto L_801C1CE0; } // 801C1C90
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C1C94
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C1C98
  c->ctr=c->r[12]; // 801C1C9C
  if (true) { c->lr=0x801C1CA4u; dispatch(c,c->ctr); } // 801C1CA0
  c->lr=0x801C1CA8u; f_8007A658(c); // 801C1CA4
  c->r[29]=c->r[3]|c->r[3]; // 801C1CA8
  c->r[3]=0u+0x00000008u; // 801C1CAC
  c->lr=0x801C1CB4u; f_8007A658(c); // 801C1CB0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801C1CB4
  if (!crb(c,1)) { goto L_801C1CD8; } // 801C1CB8
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801C1CBC
  if (crb(c,2)) { goto L_801C1CD0; } // 801C1CC0
  W32(c->r[31]+0x00000034u,c->r[1]); // 801C1CC4
  c->r[3]=c->r[29]|c->r[29]; // 801C1CC8
  c->lr=0x801C1CD0u; f_800AC470(c); // 801C1CCC
L_801C1CD0:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801C1CD0
  goto L_801C1D74; // 801C1CD4
L_801C1CD8:;
  c->r[0]=0u+0x00000000u; // 801C1CD8
  W32(c->r[30]+0x00000054u,c->r[0]); // 801C1CDC
L_801C1CE0:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801C1CE0
  c->r[0]=c->r[3]+0x00000001u; // 801C1CE4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C1CE8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801C1CEC
  c->r[0]=c->r[0]^c->r[3]; // 801C1CF0
  c->r[0]=c->r[0]-c->r[3]; // 801C1CF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801C1CF8
  c->r[0]=c->r[30]+c->r[0]; // 801C1CFC
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801C1D00
  if (crb(c,2)) { goto L_801C1D14; } // 801C1D04
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801C1D08
  c->r[3]=c->r[29]|c->r[29]; // 801C1D0C
  c->lr=0x801C1D14u; f_800AC470(c); // 801C1D10
L_801C1D14:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801C1D14
  goto L_801C1D74; // 801C1D18
L_801C1D1C:;
  c->f[1]=c->ps1[1]=S(c->f[0]); // 801C1D1C
  {uint32_t ea=c->r[2]+0xFFFFB724u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1D20
  fcmp(c,0,c->f[1],c->f[0]); // 801C1D24
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C1D28
  if (!crb(c,2)) { goto L_801C1D74; } // 801C1D2C
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 801C1D30
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1D34
  cmps(c,0,(int32_t)c->r[0],40); // 801C1D38
  W16(c->r[3]+0x00001FECu,c->r[5]); // 801C1D3C
  {uint32_t ea=c->r[3]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C1D40
  if (crb(c,2)) { goto L_801C1D68; } // 801C1D44
  if (!crb(c,0)) { goto L_801C1D74; } // 801C1D48
  cmps(c,0,(int32_t)c->r[0],10); // 801C1D4C
  if (crb(c,2)) { goto L_801C1D58; } // 801C1D50
  goto L_801C1D74; // 801C1D54
L_801C1D58:;
  c->r[0]=0u+0x0000000Au; // 801C1D58
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C1D5C
  c->lr=0x801C1D64u; f_800AC668(c); // 801C1D60
  goto L_801C1D74; // 801C1D64
L_801C1D68:;
  c->r[0]=0u+0x00000028u; // 801C1D68
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C1D6C
  c->lr=0x801C1D74u; f_800AC668(c); // 801C1D70
L_801C1D74:;
  c->r[10]=c->r[31]|c->r[31]; // 801C1D74
  c->r[11]=c->r[10]+0x00000050u; // 801C1D78
  c->lr=0x801C1D80u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C1D7C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801C1D80
  c->r[0]=R32(c->r[10]+0x00000004u); // 801C1D84
  c->r[1]=c->r[10]|c->r[10]; // 801C1D88
  c->lr=c->r[0]; // 801C1D8C
  return; // 801C1D90
}

// fn_801C1D94
void f_801C1D94(Ctx* __restrict c) {
  trace_call(0x801C1D94u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1D94
  f_801C2660(c); return; // 801C1D98
}

// fn_801C1D9C
void f_801C1D9C(Ctx* __restrict c) {
  trace_call(0x801C1D9Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1D9C
  f_801C03BC(c); return; // 801C1DA0
}

// fn_801C1DA4
void f_801C1DA4(Ctx* __restrict c) {
  trace_call(0x801C1DA4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DA4
  f_801C0438(c); return; // 801C1DA8
}

// fn_801C1DAC
void f_801C1DAC(Ctx* __restrict c) {
  trace_call(0x801C1DACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DAC
  f_801C2650(c); return; // 801C1DB0
}

// fn_801C1DB4
void f_801C1DB4(Ctx* __restrict c) {
  trace_call(0x801C1DB4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DB4
  f_801C04EC(c); return; // 801C1DB8
}

// fn_801C1DBC
void f_801C1DBC(Ctx* __restrict c) {
  trace_call(0x801C1DBCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DBC
  f_801C2490(c); return; // 801C1DC0
}

// fn_801C1DC4
void f_801C1DC4(Ctx* __restrict c) {
  trace_call(0x801C1DC4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DC4
  f_801C266C(c); return; // 801C1DC8
}

// fn_801C1DCC
void f_801C1DCC(Ctx* __restrict c) {
  trace_call(0x801C1DCCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DCC
  f_801C0410(c); return; // 801C1DD0
}

// fn_801C1DD4
void f_801C1DD4(Ctx* __restrict c) {
  trace_call(0x801C1DD4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DD4
  f_801C04B4(c); return; // 801C1DD8
}

// fn_801C1DDC
void f_801C1DDC(Ctx* __restrict c) {
  trace_call(0x801C1DDCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DDC
  f_801C265C(c); return; // 801C1DE0
}

// fn_801C1DE4
void f_801C1DE4(Ctx* __restrict c) {
  trace_call(0x801C1DE4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DE4
  f_801C0614(c); return; // 801C1DE8
}

// fn_801C1DEC
void f_801C1DEC(Ctx* __restrict c) {
  trace_call(0x801C1DECu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DEC
  f_801C2668(c); return; // 801C1DF0
}

// fn_801C1DF4
void f_801C1DF4(Ctx* __restrict c) {
  trace_call(0x801C1DF4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DF4
  f_801C03E8(c); return; // 801C1DF8
}

// fn_801C1DFC
void f_801C1DFC(Ctx* __restrict c) {
  trace_call(0x801C1DFCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1DFC
  f_801C047C(c); return; // 801C1E00
}

// fn_801C1E04
void f_801C1E04(Ctx* __restrict c) {
  trace_call(0x801C1E04u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1E04
  f_801C2658(c); return; // 801C1E08
}

// fn_801C1E0C
void f_801C1E0C(Ctx* __restrict c) {
  trace_call(0x801C1E0Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C1E0C
  f_801C05EC(c); return; // 801C1E10
}

// fn_801C1E14
void f_801C1E14(Ctx* __restrict c) {
  trace_call(0x801C1E14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1E14
  c->r[0]=c->lr; // 801C1E18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1E1C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C1E20
  c->r[29]=c->r[3]|c->r[3]; // 801C1E24
  c->r[30]=c->r[5]|c->r[5]; // 801C1E28
  c->r[31]=c->r[7]|c->r[7]; // 801C1E2C
  c->r[0]=R32(c->r[3]+0x00000020u); // 801C1E30
  cmps(c,0,(int32_t)c->r[0],1); // 801C1E34
  if (!crb(c,0)) { goto L_801C1E44; } // 801C1E38
  c->r[3]=0u+0x00000000u; // 801C1E3C
  goto L_801C1EB0; // 801C1E40
L_801C1E44:;
  W8(c->r[3]+0x0000006Cu,c->r[4]); // 801C1E44
  c->r[4]=c->r[6]|c->r[6]; // 801C1E48
  c->r[3]=c->r[3]+0x00000044u; // 801C1E4C
  c->lr=0x801C1E54u; f_8003F468(c); // 801C1E50
  c->r[3]=c->r[29]+0x00000044u; // 801C1E54
  c->lr=0x801C1E5Cu; f_80065368(c); // 801C1E58
  cmps(c,0,(int32_t)c->r[3],0); // 801C1E5C
  if (!crb(c,2)) { goto L_801C1E70; } // 801C1E60
  c->r[3]=c->r[29]+0x00000044u; // 801C1E64
  c->r[4]=c->r[3]|c->r[3]; // 801C1E68
  c->lr=0x801C1E70u; f_80265750(c); // 801C1E6C
L_801C1E70:;
  c->r[4]=c->r[30]|c->r[30]; // 801C1E70
  c->r[3]=c->r[29]+0x0000002Cu; // 801C1E74
  c->lr=0x801C1E7Cu; f_8003F468(c); // 801C1E78
  c->r[4]=c->r[30]|c->r[30]; // 801C1E7C
  c->r[3]=c->r[29]+0x00000038u; // 801C1E80
  c->lr=0x801C1E88u; f_8003F468(c); // 801C1E84
  c->r[6]=0u+0xFFFFFFFEu; // 801C1E88
  c->r[0]=0u+0x00000000u; // 801C1E8C
  W32(c->r[29]+0x00000074u,c->r[6]); // 801C1E90
  c->r[3]=c->r[29]|c->r[29]; // 801C1E94
  c->r[4]=c->r[31]|c->r[31]; // 801C1E98
  c->r[5]=0u+0x00000001u; // 801C1E9C
  W32(c->r[29]+0x00000028u,c->r[6]); // 801C1EA0
  W32(c->r[29]+0x00000070u,c->r[0]); // 801C1EA4
  c->lr=0x801C1EACu; f_801C47C4(c); // 801C1EA8
  c->r[3]=0u+0x00000001u; // 801C1EAC
L_801C1EB0:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C1EB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1EB4
  c->lr=c->r[0]; // 801C1EB8
  c->r[1]=c->r[1]+0x00000020u; // 801C1EBC
  return; // 801C1EC0
}

// fn_801C1EC4
void f_801C1EC4(Ctx* __restrict c) {
  trace_call(0x801C1EC4u);
  cmps(c,0,(int32_t)c->r[4],0); // 801C1EC4
  if (!crb(c,2)) { goto L_801C1F08; } // 801C1EC8
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 801C1ECC
  cmps(c,0,(int32_t)c->r[0],0); // 801C1ED0
  if (crb(c,2)) { goto L_801C1F08; } // 801C1ED4
  c->r[5]=R32(c->r[3]+0x00000020u); // 801C1ED8
  c->r[7]=0u+0x00000000u; // 801C1EDC
  c->r[6]=R32(c->r[3]+0x00000074u); // 801C1EE0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801C1EE4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801C1EE8
  if (!crb(c,2)) { goto L_801C1F00; } // 801C1EEC
  c->r[0]=R32(c->r[3]+0x00000028u); // 801C1EF0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C1EF4
  if (!crb(c,2)) { goto L_801C1F00; } // 801C1EF8
  c->r[7]=0u+0x00000001u; // 801C1EFC
L_801C1F00:;
  c->r[3]=c->r[7]|c->r[7]; // 801C1F00
  return; // 801C1F04
L_801C1F08:;
  c->r[5]=R32(c->r[3]+0x00000074u); // 801C1F08
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C1F0C
  c->r[6]=0u+0x00000000u; // 801C1F10
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801C1F14
  if (!crb(c,2)) { goto L_801C1F2C; } // 801C1F18
  c->r[0]=R32(c->r[3]+0x00000028u); // 801C1F1C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C1F20
  if (!crb(c,2)) { goto L_801C1F2C; } // 801C1F24
  c->r[6]=0u+0x00000001u; // 801C1F28
L_801C1F2C:;
  c->r[3]=c->r[6]|c->r[6]; // 801C1F2C
  return; // 801C1F30
}

// fn_801C1F34
void f_801C1F34(Ctx* __restrict c) {
  trace_call(0x801C1F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1F34
  c->r[0]=c->lr; // 801C1F38
  cmps(c,0,(int32_t)c->r[3],0); // 801C1F3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1F40
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C1F44
  c->r[30]=c->r[3]|c->r[3]; // 801C1F48
  c->r[31]=c->r[4]|c->r[4]; // 801C1F4C
  if (crb(c,2)) { goto L_801C20B4; } // 801C1F50
  if (crb(c,2)) { goto L_801C20A4; } // 801C1F54
  if (crb(c,2)) { goto L_801C20A4; } // 801C1F58
  if (crb(c,2)) { goto L_801C20A4; } // 801C1F5C
  c->r[0]=addc(c,c->r[3],0x00001054u,0); cr0(c,c->r[0]); // 801C1F60
  if (crb(c,2)) { goto L_801C1F74; } // 801C1F64
  c->r[4]=0u+0xFFFFFFFFu; // 801C1F68
  c->r[3]=c->r[3]+0x00001060u; // 801C1F6C
  c->lr=0x801C1F74u; f_80046394(c); // 801C1F70
L_801C1F74:;
  c->r[0]=addc(c,c->r[30],0x00000EDCu,0); cr0(c,c->r[0]); // 801C1F74
  if (crb(c,2)) { goto L_801C1F88; } // 801C1F78
  c->r[3]=c->r[30]+0x00000F54u; // 801C1F7C
  c->r[4]=0u+0xFFFFFFFFu; // 801C1F80
  c->lr=0x801C1F88u; f_800A4EEC(c); // 801C1F84
L_801C1F88:;
  c->r[3]=addc(c,c->r[30],0x000008D0u,0); cr0(c,c->r[3]); // 801C1F88
  if (crb(c,2)) { goto L_801C2028; } // 801C1F8C
  c->r[0]=R32(c->r[30]+0x000008D8u); // 801C1F90
  c->r[4]=0u+0x80400000u; // 801C1F94
  c->r[4]=c->r[4]+0x000054F8u; // 801C1F98
  cmps(c,0,(int32_t)c->r[0],0); // 801C1F9C
  W32(c->r[30]+0x000008D0u,c->r[4]); // 801C1FA0
  if (crb(c,2)) { goto L_801C1FCC; } // 801C1FA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C1FA8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801C1FAC
  c->ctr=c->r[12]; // 801C1FB0
  if (true) { c->lr=0x801C1FB8u; dispatch(c,c->ctr); } // 801C1FB4
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C1FB8
  c->r[3]=c->r[30]+0x000008D0u; // 801C1FBC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801C1FC0
  c->ctr=c->r[12]; // 801C1FC4
  if (true) { c->lr=0x801C1FCCu; dispatch(c,c->ctr); } // 801C1FC8
L_801C1FCC:;
  c->r[3]=c->r[30]+0x00000C20u; // 801C1FCC
  c->r[4]=0u+0xFFFFFFFFu; // 801C1FD0
  c->lr=0x801C1FD8u; f_80164EA0(c); // 801C1FD4
  c->r[3]=c->r[30]+0x00000BE8u; // 801C1FD8
  c->r[4]=0u+0xFFFFFFFFu; // 801C1FDC
  c->lr=0x801C1FE4u; f_80164EA0(c); // 801C1FE0
  c->r[3]=c->r[30]+0x00000BB0u; // 801C1FE4
  c->r[4]=0u+0xFFFFFFFFu; // 801C1FE8
  c->lr=0x801C1FF0u; f_80164EA0(c); // 801C1FEC
  c->r[4]=0u+0x80070000u; // 801C1FF0
  c->r[3]=c->r[30]+0x00000AA8u; // 801C1FF4
  c->r[4]=c->r[4]+0x000059F8u; // 801C1FF8
  c->r[5]=0u+0x00000058u; // 801C1FFC
  c->r[6]=0u+0x00000003u; // 801C2000
  c->lr=0x801C2008u; f_80289C2C(c); // 801C2004
  c->r[0]=addc(c,c->r[30],0x000008D0u,0); cr0(c,c->r[0]); // 801C2008
  if (crb(c,2)) { goto L_801C2028; } // 801C200C
  c->r[3]=c->r[30]+0x000009F4u; // 801C2010
  c->r[4]=0u+0xFFFFFFFFu; // 801C2014
  c->lr=0x801C201Cu; f_80141D80(c); // 801C2018
  c->r[3]=c->r[30]+0x000008D0u; // 801C201C
  c->r[4]=0u+0x00000000u; // 801C2020
  c->lr=0x801C2028u; f_80030FCC(c); // 801C2024
L_801C2028:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C2028
  if (crb(c,2)) { goto L_801C20A4; } // 801C202C
  c->r[3]=c->r[30]+0x00000830u; // 801C2030
  c->r[4]=0u+0xFFFFFFFFu; // 801C2034
  c->lr=0x801C203Cu; f_80075650(c); // 801C2038
  c->r[3]=c->r[30]+0x00000800u; // 801C203C
  c->r[4]=0u+0xFFFFFFFFu; // 801C2040
  c->lr=0x801C2048u; f_800756A8(c); // 801C2044
  cmps(c,0,(int32_t)c->r[30],0); // 801C2048
  if (crb(c,2)) { goto L_801C20A4; } // 801C204C
  if (crb(c,2)) { goto L_801C20A4; } // 801C2050
  c->r[3]=c->r[30]+0x00000030u; // 801C2054
  c->r[4]=0u+0xFFFFFFFFu; // 801C2058
  c->lr=0x801C2060u; f_8003FD8C(c); // 801C205C
  c->r[3]=c->r[30]+0x00000008u; // 801C2060
  c->r[4]=0u+0xFFFFFFFFu; // 801C2064
  c->lr=0x801C206Cu; f_8003C9C8(c); // 801C2068
  cmps(c,0,(int32_t)c->r[30],0); // 801C206C
  if (crb(c,2)) { goto L_801C20A4; } // 801C2070
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C2074
  c->r[0]=R32(c->r[30]+0x00000004u); // 801C2078
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C207C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C2080
  c->lr=0x801C2088u; f_8003F2FC(c); // 801C2084
  c->lr=0x801C208Cu; f_8003F2FC(c); // 801C2088
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C208C
  c->r[0]=0u+0x00000000u; // 801C2090
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801C2094
  c->r[3]=c->r[3]+c->r[4]; // 801C2098
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C209C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C20A0
L_801C20A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C20A4
  if (!crb(c,1)) { goto L_801C20B4; } // 801C20A8
  c->r[3]=c->r[30]|c->r[30]; // 801C20AC
  c->lr=0x801C20B4u; f_802896EC(c); // 801C20B0
L_801C20B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801C20B4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C20B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C20BC
  c->lr=c->r[0]; // 801C20C0
  c->r[1]=c->r[1]+0x00000020u; // 801C20C4
  return; // 801C20C8
}

// fn_801C20CC
void f_801C20CC(Ctx* __restrict c) {
  trace_call(0x801C20CCu);
  {uint32_t ea=c->r[2]+0xFFFFB720u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C20CC
  c->r[3]=0u+0x80570000u; // 801C20D0
  {uint32_t ea=c->r[2]+0xFFFFB724u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C20D4
  c->r[3]=c->r[3]+0x00000088u; // 801C20D8
  c->f[3]=c->f[1]; // 801C20DC
  f_8003F588(c); return; // 801C20E0
}

// fn_801C20E4
void f_801C20E4(Ctx* __restrict c) {
  trace_call(0x801C20E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C20E4
  c->r[0]=c->lr; // 801C20E8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C20EC
  c->r[11]=c->r[1]+0x00000060u; // 801C20F0
  c->lr=0x801C20F8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C20F4
  c->r[31]=c->r[5]|c->r[5]; // 801C20F8
  c->r[29]=c->r[3]|c->r[3]; // 801C20FC
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C2100
  c->r[3]=c->r[31]|c->r[31]; // 801C2104
  c->r[30]=c->r[4]|c->r[4]; // 801C2108
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C210C
  c->ctr=c->r[12]; // 801C2110
  if (true) { c->lr=0x801C2118u; dispatch(c,c->ctr); } // 801C2114
  cmps(c,0,(int32_t)c->r[3],24); // 801C2118
  if (crb(c,2)) { goto L_801C2188; } // 801C211C
  if (!crb(c,0)) { goto L_801C213C; } // 801C2120
  cmps(c,0,(int32_t)c->r[3],14); // 801C2124
  if (crb(c,2)) { goto L_801C2178; } // 801C2128
  if (!crb(c,0)) { goto L_801C2150; } // 801C212C
  cmps(c,0,(int32_t)c->r[3],3); // 801C2130
  if (crb(c,2)) { goto L_801C2164; } // 801C2134
  goto L_801C2150; // 801C2138
L_801C213C:;
  cmps(c,0,(int32_t)c->r[3],1030); // 801C213C
  if (crb(c,2)) { goto L_801C2344; } // 801C2140
  if (!crb(c,0)) { goto L_801C2150; } // 801C2144
  cmps(c,0,(int32_t)c->r[3],1025); // 801C2148
  if (!crb(c,0)) { goto L_801C220C; } // 801C214C
L_801C2150:;
  c->r[3]=c->r[29]|c->r[29]; // 801C2150
  c->r[4]=c->r[30]|c->r[30]; // 801C2154
  c->r[5]=c->r[31]|c->r[31]; // 801C2158
  c->lr=0x801C2160u; f_800B5B1C(c); // 801C215C
  goto L_801C2354; // 801C2160
L_801C2164:;
  c->r[3]=c->r[29]|c->r[29]; // 801C2164
  c->r[4]=c->r[30]|c->r[30]; // 801C2168
  c->r[5]=c->r[31]|c->r[31]; // 801C216C
  c->lr=0x801C2174u; f_800B5B1C(c); // 801C2170
  goto L_801C2354; // 801C2174
L_801C2178:;
  c->r[3]=c->r[29]|c->r[29]; // 801C2178
  c->r[4]=c->r[31]|c->r[31]; // 801C217C
  c->lr=0x801C2184u; f_800B5864(c); // 801C2180
  goto L_801C2354; // 801C2184
L_801C2188:;
  c->r[0]=R16(c->r[29]+0x00001FA2u); // 801C2188
  cmps(c,0,(int32_t)c->r[0],20); // 801C218C
  if (crb(c,2)) { goto L_801C21F8; } // 801C2190
  if (!crb(c,0)) { goto L_801C21B0; } // 801C2194
  cmps(c,0,(int32_t)c->r[0],10); // 801C2198
  if (crb(c,2)) { goto L_801C21E4; } // 801C219C
  if (!crb(c,0)) { goto L_801C2354; } // 801C21A0
  cmps(c,0,(int32_t)c->r[0],0); // 801C21A4
  if (crb(c,2)) { goto L_801C21BC; } // 801C21A8
  goto L_801C2354; // 801C21AC
L_801C21B0:;
  cmps(c,0,(int32_t)c->r[0],30); // 801C21B0
  if (crb(c,2)) { goto L_801C21D0; } // 801C21B4
  goto L_801C2354; // 801C21B8
L_801C21BC:;
  c->r[0]=0u+0x00000000u; // 801C21BC
  c->r[3]=c->r[29]|c->r[29]; // 801C21C0
  W16(c->r[29]+0x00001FECu,c->r[0]); // 801C21C4
  c->lr=0x801C21CCu; f_800AC8F8(c); // 801C21C8
  goto L_801C2354; // 801C21CC
L_801C21D0:;
  c->r[0]=0u+0x0000001Eu; // 801C21D0
  c->r[3]=c->r[29]|c->r[29]; // 801C21D4
  W16(c->r[29]+0x00001FECu,c->r[0]); // 801C21D8
  c->lr=0x801C21E0u; f_800AC8F8(c); // 801C21DC
  goto L_801C2354; // 801C21E0
L_801C21E4:;
  c->r[0]=0u+0x0000000Au; // 801C21E4
  c->r[3]=c->r[29]|c->r[29]; // 801C21E8
  W16(c->r[29]+0x00001FECu,c->r[0]); // 801C21EC
  c->lr=0x801C21F4u; f_800AC668(c); // 801C21F0
  goto L_801C2354; // 801C21F4
L_801C21F8:;
  c->r[0]=0u+0x00000014u; // 801C21F8
  c->r[3]=c->r[29]|c->r[29]; // 801C21FC
  W16(c->r[29]+0x00001FECu,c->r[0]); // 801C2200
  c->lr=0x801C2208u; f_800AC668(c); // 801C2204
  goto L_801C2354; // 801C2208
L_801C220C:;
  c->r[0]=R8(c->r[29]+0x00002014u); // 801C220C
  cmps(c,0,(int32_t)c->r[0],0); // 801C2210
  if (!crb(c,2)) { goto L_801C22E8; } // 801C2214
  c->r[0]=R32(c->r[29]+0x000007E4u); // 801C2218
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C221C
  if (!crb(c,2)) { goto L_801C224C; } // 801C2220
  c->r[12]=R32(c->r[29]+0x00000010u); // 801C2224
  c->r[3]=c->r[29]|c->r[29]; // 801C2228
  c->r[4]=c->r[31]|c->r[31]; // 801C222C
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2230
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801C2234
  c->ctr=c->r[12]; // 801C2238
  if (true) { c->lr=0x801C2240u; dispatch(c,c->ctr); } // 801C223C
  {uint32_t ea=c->r[29]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2240
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C2244
  {uint32_t ea=c->r[29]+0x000003A4u; WF32(ea,c->f[0]);} // 801C2248
L_801C224C:;
  {uint32_t ea=c->r[29]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C224C
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2250
  fcmp(c,0,c->f[1],c->f[0]); // 801C2254
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2258
  if (!crb(c,2)) { goto L_801C227C; } // 801C225C
  c->r[3]=c->r[29]|c->r[29]; // 801C2260
  c->lr=0x801C2268u; f_800ACB54(c); // 801C2264
  c->r[3]=0u+0x00000001u; // 801C2268
  c->r[0]=0u+0x0000003Cu; // 801C226C
  W8(c->r[29]+0x00002014u,c->r[3]); // 801C2270
  W16(c->r[29]+0x00001FECu,c->r[0]); // 801C2274
  goto L_801C22D0; // 801C2278
L_801C227C:;
  {uint32_t ea=c->r[29]+0x00001FB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C227C
  fcmp(c,0,c->f[1],c->f[0]); // 801C2280
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2284
  if (!crb(c,2)) { goto L_801C22D0; } // 801C2288
  c->r[0]=R16(c->r[29]+0x00001FECu); // 801C228C
  cmpu(c,0,c->r[0],0x00000032u); // 801C2290
  if (crb(c,2)) { goto L_801C22D0; } // 801C2294
  c->r[3]=c->r[29]|c->r[29]; // 801C2298
  c->lr=0x801C22A0u; f_800ACB54(c); // 801C229C
  c->r[0]=0u+0x00000032u; // 801C22A0
  c->r[3]=c->r[31]|c->r[31]; // 801C22A4
  W16(c->r[29]+0x00001FECu,c->r[0]); // 801C22A8
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C22AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C22B0
  c->ctr=c->r[12]; // 801C22B4
  if (true) { c->lr=0x801C22BCu; dispatch(c,c->ctr); } // 801C22B8
  cmps(c,0,(int32_t)c->r[3],1026); // 801C22BC
  if (!crb(c,2)) { goto L_801C22D0; } // 801C22C0
  c->r[3]=c->r[29]+0x00002000u; // 801C22C4
  c->r[4]=c->r[31]+0x00000158u; // 801C22C8
  c->lr=0x801C22D0u; f_8003F468(c); // 801C22CC
L_801C22D0:;
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C22D0
  c->r[4]=c->r[31]|c->r[31]; // 801C22D4
  c->r[5]=c->r[29]|c->r[29]; // 801C22D8
  c->r[3]=c->r[29]+0x000008D0u; // 801C22DC
  c->lr=0x801C22E4u; f_80032454(c); // 801C22E0
  goto L_801C2354; // 801C22E4
L_801C22E8:;
  c->lr=0x801C22ECu; f_80061A4C(c); // 801C22E8
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801C22EC
  c->r[31]=c->r[3]|c->r[3]; // 801C22F0
  c->r[4]=c->r[29]+0x000008D0u; // 801C22F4
  c->r[3]=c->r[1]+0x00000020u; // 801C22F8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C22FC
  c->ctr=c->r[12]; // 801C2300
  if (true) { c->lr=0x801C2308u; dispatch(c,c->ctr); } // 801C2304
  c->r[3]=c->r[1]+0x00000008u; // 801C2308
  c->r[4]=c->r[1]+0x00000020u; // 801C230C
  c->lr=0x801C2314u; f_80032FD8(c); // 801C2310
  c->r[3]=c->r[1]+0x00000014u; // 801C2314
  c->r[4]=c->r[1]+0x00000008u; // 801C2318
  c->r[5]=c->r[31]+0x00000384u; // 801C231C
  c->lr=0x801C2324u; f_8007B8A4(c); // 801C2320
  c->r[3]=c->r[1]+0x00000014u; // 801C2324
  c->lr=0x801C232Cu; f_80065368(c); // 801C2328
  cmps(c,0,(int32_t)c->r[3],0); // 801C232C
  if (!crb(c,2)) { goto L_801C2354; } // 801C2330
  c->r[3]=c->r[1]+0x00000014u; // 801C2334
  c->r[4]=c->r[3]|c->r[3]; // 801C2338
  c->lr=0x801C2340u; f_80265750(c); // 801C233C
  goto L_801C2354; // 801C2340
L_801C2344:;
  c->r[3]=c->r[29]|c->r[29]; // 801C2344
  c->lr=0x801C234Cu; f_800ACB54(c); // 801C2348
  c->r[0]=0u+0x00000032u; // 801C234C
  W16(c->r[29]+0x00001FECu,c->r[0]); // 801C2350
L_801C2354:;
  c->r[11]=c->r[1]+0x00000060u; // 801C2354
  c->lr=0x801C235Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C2358
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C235C
  c->lr=c->r[0]; // 801C2360
  c->r[1]=c->r[1]+0x00000060u; // 801C2364
  return; // 801C2368
}

// fn_801C236C
void f_801C236C(Ctx* __restrict c) {
  trace_call(0x801C236Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C236C
  c->r[0]=c->lr; // 801C2370
  c->r[7]=0u+0x804D0000u; // 801C2374
  c->r[8]=0u+0x00000000u; // 801C2378
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C237C
  c->r[7]=c->r[7]+0x00003318u; // 801C2380
  {uint32_t ea=c->r[2]+0xFFFFB794u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2384
  c->r[6]=0u+0x00000014u; // 801C2388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C238C
  c->r[31]=0u+0x803E0000u; // 801C2390
  {uint32_t ea=c->r[2]+0xFFFFB798u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C2394
  c->r[5]=0u+0x00000001u; // 801C2398
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C239C
  c->r[0]=0u+0x00000028u; // 801C23A0
  {uint32_t ea=c->r[2]+0xFFFFB790u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C23A4
  c->r[30]=c->r[3]|c->r[3]; // 801C23A8
  W8(c->r[3]+0x00002014u,c->r[8]); // 801C23AC
  c->r[4]=c->r[31]+0x00000A08u; // 801C23B0
  {uint32_t ea=c->r[2]+0xFFFFB79Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C23B4
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C23B8
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C23BC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801C23C0
  {uint32_t ea=c->r[2]+0xFFFFB7A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C23C4
  {uint32_t ea=c->r[3]+0x00001FF4u; WF32(ea,c->f[0]);} // 801C23C8
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C23CC
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C23D0
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[5]); // 801C23D4
  {uint32_t ea=c->r[3]+0x00001FF8u; WF32(ea,c->f[5]);} // 801C23D8
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C23DC
  c->f[5]=c->ps1[5]=S(c->f[6]/c->f[5]); // 801C23E0
  W16(c->r[3]+0x00001FA2u,c->r[8]); // 801C23E4
  W16(c->r[3]+0x00001FA4u,c->r[6]); // 801C23E8
  W16(c->r[3]+0x00001FA6u,c->r[5]); // 801C23EC
  W16(c->r[3]+0x00001FA8u,c->r[6]); // 801C23F0
  W16(c->r[3]+0x00001FAAu,c->r[8]); // 801C23F4
  {uint32_t ea=c->r[3]+0x00001FFCu; WF32(ea,c->f[5]);} // 801C23F8
  W16(c->r[3]+0x00001FACu,c->r[8]); // 801C23FC
  W16(c->r[3]+0x00001FAEu,c->r[0]); // 801C2400
  W16(c->r[3]+0x00001FB0u,c->r[8]); // 801C2404
  W16(c->r[3]+0x00001FB4u,c->r[0]); // 801C2408
  {uint32_t ea=c->r[3]+0x00001FB8u; WF32(ea,c->f[4]);} // 801C240C
  {uint32_t ea=c->r[3]+0x00001FE0u; WF32(ea,c->f[3]);} // 801C2410
  {uint32_t ea=c->r[3]+0x00001FE4u; WF32(ea,c->f[2]);} // 801C2414
  {uint32_t ea=c->r[3]+0x00001FE8u; WF32(ea,c->f[1]);} // 801C2418
  {uint32_t ea=c->r[3]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C241C
  c->r[3]=c->r[3]+0x00001F15u; // 801C2420
  c->lr=0x801C2428u; f_802933D8(c); // 801C2424
  c->r[31]=c->r[31]+0x00000A08u; // 801C2428
  c->r[3]=c->r[30]+0x00001F29u; // 801C242C
  c->r[4]=c->r[31]+0x00000008u; // 801C2430
  c->lr=0x801C2438u; f_802933D8(c); // 801C2434
  c->r[3]=c->r[30]+0x00001F3Du; // 801C2438
  c->r[4]=c->r[31]+0x00000012u; // 801C243C
  c->lr=0x801C2444u; f_802933D8(c); // 801C2440
  c->r[3]=c->r[30]+0x00001F51u; // 801C2444
  c->r[4]=c->r[31]+0x00000018u; // 801C2448
  c->lr=0x801C2450u; f_802933D8(c); // 801C244C
  c->r[3]=c->r[30]+0x00001F65u; // 801C2450
  c->r[4]=c->r[31]+0x00000024u; // 801C2454
  c->lr=0x801C245Cu; f_802933D8(c); // 801C2458
  c->r[3]=c->r[30]+0x00001F79u; // 801C245C
  c->r[4]=c->r[31]+0x00000024u; // 801C2460
  c->lr=0x801C2468u; f_802933D8(c); // 801C2464
  c->r[3]=c->r[30]+0x00001F8Du; // 801C2468
  c->r[4]=c->r[31]+0x0000002Fu; // 801C246C
  c->lr=0x801C2474u; f_802933D8(c); // 801C2470
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2474
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2478
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C247C
  c->lr=c->r[0]; // 801C2480
  c->r[1]=c->r[1]+0x00000010u; // 801C2484
  return; // 801C2488
}

// fn_801C248C
void f_801C248C(Ctx* __restrict c) {
  trace_call(0x801C248Cu);
  f_800B5DFC(c); return; // 801C248C
}

// fn_801C2490
void f_801C2490(Ctx* __restrict c) {
  trace_call(0x801C2490u);
  return; // 801C2490
}

// fn_801C2494
void f_801C2494(Ctx* __restrict c) {
  trace_call(0x801C2494u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C2494
  cmps(c,0,(int32_t)c->r[0],30); // 801C2498
  if (crb(c,2)) return; // 801C249C
  if (!crb(c,0)) return; // 801C24A0
  cmps(c,0,(int32_t)c->r[0],0); // 801C24A4
  if (!crb(c,2)) return; // 801C24A8
  c->r[4]=c->r[5]|c->r[5]; // 801C24AC
  f_801C2670(c); return; // 801C24B0
  return; // 801C24B4
}

// fn_801C24B8
void f_801C24B8(Ctx* __restrict c) {
  trace_call(0x801C24B8u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C24B8
  cmps(c,0,(int32_t)c->r[0],30); // 801C24BC
  if (crb(c,2)) return; // 801C24C0
  if (!crb(c,0)) return; // 801C24C4
  cmps(c,0,(int32_t)c->r[0],0); // 801C24C8
  if (crb(c,2)) { goto L_801C24D4; } // 801C24CC
  return; // 801C24D0
L_801C24D4:;
  f_801C2758(c); return; // 801C24D4
  return; // 801C24D8
}

// fn_801C24DC
void f_801C24DC(Ctx* __restrict c) {
  trace_call(0x801C24DCu);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C24DC
  cmps(c,0,(int32_t)c->r[0],30); // 801C24E0
  if (crb(c,2)) return; // 801C24E4
  if (!crb(c,0)) return; // 801C24E8
  cmps(c,0,(int32_t)c->r[0],0); // 801C24EC
  if (crb(c,2)) { goto L_801C24F8; } // 801C24F0
  return; // 801C24F4
L_801C24F8:;
  f_801C28DC(c); return; // 801C24F8
  return; // 801C24FC
}

// fn_801C2500
void f_801C2500(Ctx* __restrict c) {
  trace_call(0x801C2500u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C2500
  cmps(c,0,(int32_t)c->r[0],20); // 801C2504
  if (crb(c,2)) { goto L_801C2530; } // 801C2508
  if (!crb(c,0)) { goto L_801C251C; } // 801C250C
  cmps(c,0,(int32_t)c->r[0],10); // 801C2510
  if (crb(c,2)) { goto L_801C2528; } // 801C2514
  return; // 801C2518
L_801C251C:;
  cmps(c,0,(int32_t)c->r[0],40); // 801C251C
  if (crb(c,2)) { goto L_801C2538; } // 801C2520
  return; // 801C2524
L_801C2528:;
  c->r[4]=c->r[5]|c->r[5]; // 801C2528
  f_801C29B4(c); return; // 801C252C
L_801C2530:;
  c->r[4]=c->r[5]|c->r[5]; // 801C2530
  f_801C2D04(c); return; // 801C2534
L_801C2538:;
  c->r[4]=c->r[5]|c->r[5]; // 801C2538
  f_801C3018(c); return; // 801C253C
  return; // 801C2540
}

// fn_801C2544
void f_801C2544(Ctx* __restrict c) {
  trace_call(0x801C2544u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C2544
  cmps(c,0,(int32_t)c->r[0],20); // 801C2548
  if (crb(c,2)) { goto L_801C2570; } // 801C254C
  if (!crb(c,0)) { goto L_801C2560; } // 801C2550
  cmps(c,0,(int32_t)c->r[0],10); // 801C2554
  if (crb(c,2)) { goto L_801C256C; } // 801C2558
  return; // 801C255C
L_801C2560:;
  cmps(c,0,(int32_t)c->r[0],40); // 801C2560
  if (crb(c,2)) { goto L_801C2574; } // 801C2564
  return; // 801C2568
L_801C256C:;
  f_801C2BE0(c); return; // 801C256C
L_801C2570:;
  f_801C2F0C(c); return; // 801C2570
L_801C2574:;
  f_801C3178(c); return; // 801C2574
  return; // 801C2578
}

// fn_801C257C
void f_801C257C(Ctx* __restrict c) {
  trace_call(0x801C257Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C257C
  c->r[0]=c->lr; // 801C2580
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2584
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2588
  c->r[31]=c->r[3]|c->r[3]; // 801C258C
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C2590
  cmps(c,0,(int32_t)c->r[0],20); // 801C2594
  if (crb(c,2)) { goto L_801C25C0; } // 801C2598
  if (!crb(c,0)) { goto L_801C25AC; } // 801C259C
  cmps(c,0,(int32_t)c->r[0],10); // 801C25A0
  if (crb(c,2)) { goto L_801C25B8; } // 801C25A4
  goto L_801C25FC; // 801C25A8
L_801C25AC:;
  cmps(c,0,(int32_t)c->r[0],40); // 801C25AC
  if (crb(c,2)) { goto L_801C25C8; } // 801C25B0
  goto L_801C25FC; // 801C25B4
L_801C25B8:;
  c->lr=0x801C25BCu; f_801C2C78(c); // 801C25B8
  goto L_801C25FC; // 801C25BC
L_801C25C0:;
  c->lr=0x801C25C4u; f_801C2FB4(c); // 801C25C0
  goto L_801C25FC; // 801C25C4
L_801C25C8:;
  c->r[3]=c->r[3]+0x00002108u; // 801C25C8
  c->lr=0x801C25D0u; f_801C4CF8(c); // 801C25CC
  cmps(c,0,(int32_t)c->r[3],0); // 801C25D0
  if (crb(c,2)) { goto L_801C25FC; } // 801C25D4
  c->r[3]=c->r[31]|c->r[31]; // 801C25D8
  c->r[4]=0u+0x00000000u; // 801C25DC
  c->r[5]=0u+0x00000001u; // 801C25E0
  c->lr=0x801C25E8u; f_80076080(c); // 801C25E4
  c->r[12]=R32(c->r[31]+0x00000010u); // 801C25E8
  c->r[3]=c->r[31]|c->r[31]; // 801C25EC
  c->r[12]=R32(c->r[12]+0x00000030u); // 801C25F0
  c->ctr=c->r[12]; // 801C25F4
  if (true) { c->lr=0x801C25FCu; dispatch(c,c->ctr); } // 801C25F8
L_801C25FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C25FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2600
  c->lr=c->r[0]; // 801C2604
  c->r[1]=c->r[1]+0x00000010u; // 801C2608
  return; // 801C260C
}

// fn_801C2610
void f_801C2610(Ctx* __restrict c) {
  trace_call(0x801C2610u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2610
  c->r[0]=c->lr; // 801C2614
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C261C
  c->r[31]=c->r[5]|c->r[5]; // 801C2620
  c->r[4]=c->r[31]|c->r[31]; // 801C2624
  c->lr=0x801C262Cu; f_801C3B78(c); // 801C2628
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C262C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 801C2630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2634
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2638
  c->lr=c->r[0]; // 801C263C
  c->r[1]=c->r[1]+0x00000010u; // 801C2640
  return; // 801C2644
}

// fn_801C2648
void f_801C2648(Ctx* __restrict c) {
  trace_call(0x801C2648u);
  return; // 801C2648
}

// fn_801C264C
void f_801C264C(Ctx* __restrict c) {
  trace_call(0x801C264Cu);
  return; // 801C264C
}

// fn_801C2650
void f_801C2650(Ctx* __restrict c) {
  trace_call(0x801C2650u);
  c->r[4]=c->r[5]|c->r[5]; // 801C2650
  f_801C3234(c); return; // 801C2654
}

// fn_801C2658
void f_801C2658(Ctx* __restrict c) {
  trace_call(0x801C2658u);
  f_801C32A8(c); return; // 801C2658
}

// fn_801C265C
void f_801C265C(Ctx* __restrict c) {
  trace_call(0x801C265Cu);
  f_801C3320(c); return; // 801C265C
}

// fn_801C2660
void f_801C2660(Ctx* __restrict c) {
  trace_call(0x801C2660u);
  c->r[4]=c->r[5]|c->r[5]; // 801C2660
  f_801C3358(c); return; // 801C2664
}

// fn_801C2668
void f_801C2668(Ctx* __restrict c) {
  trace_call(0x801C2668u);
  f_801C35BC(c); return; // 801C2668
}

// fn_801C266C
void f_801C266C(Ctx* __restrict c) {
  trace_call(0x801C266Cu);
  f_801C3794(c); return; // 801C266C
}

// fn_801C2670
void f_801C2670(Ctx* __restrict c) {
  trace_call(0x801C2670u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2670
  c->r[0]=c->lr; // 801C2674
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C2678
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801C267C
  c->r[31]=c->r[4]|c->r[4]; // 801C2680
  W32(c->r[1]+0x00000058u,c->r[30]); // 801C2684
  c->r[30]=c->r[3]|c->r[3]; // 801C2688
  c->r[3]=c->r[3]+0x000008ECu; // 801C268C
  c->r[4]=c->r[30]+0x00001F15u; // 801C2690
  c->lr=0x801C2698u; f_80075440(c); // 801C2694
  W32(c->r[31]+0x00000014u,c->r[3]); // 801C2698
  c->r[5]=c->r[3]|c->r[3]; // 801C269C
  {uint32_t ea=c->r[2]+0xFFFFB7A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C26A0
  c->r[3]=c->r[30]+0x00000C88u; // 801C26A4
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C26A8
  c->r[4]=c->r[30]+0x000008ECu; // 801C26AC
  c->r[6]=0u+0x00000000u; // 801C26B0
  c->r[7]=0u+0x00000000u; // 801C26B4
  c->lr=0x801C26BCu; f_800BB0C8(c); // 801C26B8
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C26BC
  c->r[0]=0u+0x00000000u; // 801C26C0
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C26C4
  c->r[3]=c->r[1]+0x00000014u; // 801C26C8
  c->f[2]=c->f[1]; // 801C26CC
  c->f[3]=c->f[1]; // 801C26D0
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[1]);} // 801C26D4
  c->lr=0x801C26DCu; f_800521A0(c); // 801C26D8
  c->r[4]=c->r[3]|c->r[3]; // 801C26DC
  c->r[3]=c->r[31]+0x00000024u; // 801C26E0
  c->lr=0x801C26E8u; f_8003F468(c); // 801C26E4
  {uint32_t ea=c->r[2]+0xFFFFB7A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C26E8
  c->r[4]=c->r[30]+0x000008D0u; // 801C26EC
  c->r[3]=c->r[1]+0x00000020u; // 801C26F0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801C26F4
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C26F8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C26FC
  c->ctr=c->r[12]; // 801C2700
  if (true) { c->lr=0x801C2708u; dispatch(c,c->ctr); } // 801C2704
  c->r[3]=c->r[1]+0x00000008u; // 801C2708
  c->r[4]=c->r[1]+0x00000020u; // 801C270C
  c->lr=0x801C2714u; f_80032FD8(c); // 801C2710
  c->r[3]=c->r[31]+0x00000038u; // 801C2714
  c->r[4]=c->r[1]+0x00000008u; // 801C2718
  c->lr=0x801C2720u; f_8003F468(c); // 801C271C
  c->r[3]=R32(c->r[30]+0x00000974u); // 801C2720
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C2724
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C2728
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801C272C
  c->r[3]=R32(c->r[30]+0x00000974u); // 801C2730
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C2734
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C2738
  W32(c->r[31]+0x00000018u,c->r[0]); // 801C273C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801C2740
  c->r[30]=R32(c->r[1]+0x00000058u); // 801C2744
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C2748
  c->lr=c->r[0]; // 801C274C
  c->r[1]=c->r[1]+0x00000060u; // 801C2750
  return; // 801C2754
}

// fn_801C2758
void f_801C2758(Ctx* __restrict c) {
  trace_call(0x801C2758u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2758
  c->r[0]=c->lr; // 801C275C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801C2760
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801C2764
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801C2768
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801C276C
  c->r[31]=c->r[3]|c->r[3]; // 801C2770
  c->r[3]=c->r[1]+0x0000005Cu; // 801C2774
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C2778
  c->r[4]=c->r[31]+0x000008D0u; // 801C277C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C2780
  c->ctr=c->r[12]; // 801C2784
  if (true) { c->lr=0x801C278Cu; dispatch(c,c->ctr); } // 801C2788
  c->lr=0x801C2790u; f_80061A4C(c); // 801C278C
  c->r[4]=c->r[3]|c->r[3]; // 801C2790
  c->r[3]=c->r[1]+0x00000050u; // 801C2794
  c->r[4]=c->r[4]+0x00000384u; // 801C2798
  c->lr=0x801C27A0u; f_8003F484(c); // 801C279C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C27A0
  c->r[3]=c->r[1]+0x00000044u; // 801C27A4
  {uint32_t ea=c->r[1]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C27A8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C27AC
  c->lr=0x801C27B4u; f_800521A0(c); // 801C27B0
  c->r[3]=c->r[1]+0x00000038u; // 801C27B4
  c->r[4]=c->r[1]+0x00000050u; // 801C27B8
  c->r[5]=c->r[1]+0x00000044u; // 801C27BC
  c->lr=0x801C27C4u; f_8007B8A4(c); // 801C27C0
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C27C4
  c->r[3]=c->r[1]+0x0000002Cu; // 801C27C8
  {uint32_t ea=c->r[1]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C27CC
  {uint32_t ea=c->r[1]+0x00000084u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C27D0
  c->lr=0x801C27D8u; f_800521A0(c); // 801C27D4
  c->r[3]=c->r[1]+0x00000020u; // 801C27D8
  c->r[4]=c->r[1]+0x00000038u; // 801C27DC
  c->r[5]=c->r[1]+0x0000002Cu; // 801C27E0
  c->lr=0x801C27E8u; f_8007B8A4(c); // 801C27E4
  goto L_801C27FC; // 801C27E8
L_801C27EC:;
  c->r[3]=c->r[1]+0x00000020u; // 801C27EC
  {uint32_t ea=c->r[2]+0xFFFFB7ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C27F0
  c->r[4]=c->r[3]|c->r[3]; // 801C27F4
  c->lr=0x801C27FCu; f_80064C58(c); // 801C27F8
L_801C27FC:;
  c->r[3]=c->r[1]+0x00000020u; // 801C27FC
  c->lr=0x801C2804u; f_80065368(c); // 801C2800
  cmps(c,0,(int32_t)c->r[3],0); // 801C2804
  if (!crb(c,2)) { IRQCHK(c); goto L_801C27EC; } // 801C2808
  c->r[3]=c->r[1]+0x00000020u; // 801C280C
  c->r[4]=c->r[1]+0x00000008u; // 801C2810
  c->lr=0x801C2818u; f_80265750(c); // 801C2814
  c->r[3]=c->r[1]+0x00000014u; // 801C2818
  c->r[4]=c->r[1]+0x00000008u; // 801C281C
  c->lr=0x801C2824u; f_8003F468(c); // 801C2820
  {uint32_t ea=c->r[2]+0xFFFFB7B0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C2824
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2828
  c->lr=0x801C2830u; f_8006BDA0(c); // 801C282C
  fcmp(c,0,c->f[1],c->f[31]); // 801C2830
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2834
  if (!crb(c,2)) { goto L_801C2848; } // 801C2838
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C283C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C2840
  goto L_801C2858; // 801C2844
L_801C2848:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2848
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C284C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[31],c->f[0])); // 801C2850
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C2854
L_801C2858:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2858
  c->lr=0x801C2860u; f_8006BDA0(c); // 801C285C
  fcmp(c,0,c->f[1],c->f[31]); // 801C2860
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2864
  if (!crb(c,2)) { goto L_801C2878; } // 801C2868
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C286C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801C2870
  goto L_801C2888; // 801C2874
L_801C2878:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2878
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C287C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[31],c->f[0])); // 801C2880
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801C2884
L_801C2888:;
  c->r[3]=c->r[1]+0x0000005Cu; // 801C2888
  c->lr=0x801C2890u; f_80264680(c); // 801C288C
  c->r[3]=c->r[1]+0x0000005Cu; // 801C2890
  c->r[4]=c->r[1]+0x0000002Cu; // 801C2894
  c->lr=0x801C289Cu; f_8007513C(c); // 801C2898
  c->r[3]=c->r[1]+0x0000005Cu; // 801C289C
  c->r[4]=c->r[1]+0x00000044u; // 801C28A0
  c->lr=0x801C28A8u; f_80032FF4(c); // 801C28A4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C28A8
  c->r[3]=c->r[31]+0x000008D0u; // 801C28AC
  c->r[4]=c->r[1]+0x0000005Cu; // 801C28B0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C28B4
  c->ctr=c->r[12]; // 801C28B8
  if (true) { c->lr=0x801C28C0u; dispatch(c,c->ctr); } // 801C28BC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 801C28C0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801C28C4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801C28C8
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801C28CC
  c->lr=c->r[0]; // 801C28D0
  c->r[1]=c->r[1]+0x000000B0u; // 801C28D4
  return; // 801C28D8
}

// fn_801C28DC
void f_801C28DC(Ctx* __restrict c) {
  trace_call(0x801C28DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C28DC
  c->r[0]=c->lr; // 801C28E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C28E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C28E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C28EC
  c->r[30]=c->r[3]|c->r[3]; // 801C28F0
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C28F4
  cmps(c,0,(int32_t)c->r[0],1); // 801C28F8
  if (crb(c,2)) { goto L_801C2988; } // 801C28FC
  if (!crb(c,0)) { goto L_801C299C; } // 801C2900
  cmps(c,0,(int32_t)c->r[0],0); // 801C2904
  if (!crb(c,0)) { goto L_801C2910; } // 801C2908
  goto L_801C299C; // 801C290C
L_801C2910:;
  c->r[0]=R16(c->r[3]+0x00001FA6u); // 801C2910
  c->r[31]=0u+0x00000000u; // 801C2914
  cmps(c,0,(int32_t)c->r[0],1); // 801C2918
  if (crb(c,2)) { goto L_801C294C; } // 801C291C
  if (!crb(c,0)) { goto L_801C2964; } // 801C2920
  cmps(c,0,(int32_t)c->r[0],0); // 801C2924
  if (!crb(c,0)) { goto L_801C2930; } // 801C2928
  goto L_801C2964; // 801C292C
L_801C2930:;
  c->lr=0x801C2934u; f_801C3C1C(c); // 801C2930
  {uint32_t ea=c->r[2]+0xFFFFB7B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2934
  fcmp(c,0,c->f[1],c->f[0]); // 801C2938
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C293C
  if (!crb(c,2)) { goto L_801C2964; } // 801C2940
  c->r[31]=0u+0x00000001u; // 801C2944
  goto L_801C2964; // 801C2948
L_801C294C:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801C294C
  c->r[4]=0u+0xFFFFFFFFu; // 801C2950
  c->lr=0x801C2958u; f_800F3BBC(c); // 801C2954
  c->r[0]=c->r[3]&0x90000000u; cr0(c,c->r[0]); // 801C2958
  if (crb(c,2)) { goto L_801C2964; } // 801C295C
  c->r[31]=0u+0x00000001u; // 801C2960
L_801C2964:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C2964
  if (crb(c,2)) { goto L_801C299C; } // 801C2968
  c->r[0]=R16(c->r[30]+0x00001FA4u); // 801C296C
  c->r[3]=c->r[30]|c->r[30]; // 801C2970
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2974
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801C2978
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C297C
  c->lr=0x801C2984u; f_800AC668(c); // 801C2980
  goto L_801C299C; // 801C2984
L_801C2988:;
  c->r[0]=R16(c->r[3]+0x00001FA4u); // 801C2988
  {uint32_t ea=c->r[3]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C298C
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C2990
  {uint32_t ea=c->r[3]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C2994
  c->lr=0x801C299Cu; f_800AC668(c); // 801C2998
L_801C299C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C299C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C29A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C29A4
  c->lr=c->r[0]; // 801C29A8
  c->r[1]=c->r[1]+0x00000010u; // 801C29AC
  return; // 801C29B0
}

// fn_801C29B4
void f_801C29B4(Ctx* __restrict c) {
  trace_call(0x801C29B4u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C29B4
  c->r[0]=c->lr; // 801C29B8
  W32(c->r[1]+0x00000194u,c->r[0]); // 801C29BC
  W32(c->r[1]+0x0000018Cu,c->r[31]); // 801C29C0
  c->r[31]=c->r[4]|c->r[4]; // 801C29C4
  W32(c->r[1]+0x00000188u,c->r[30]); // 801C29C8
  c->r[30]=c->r[3]|c->r[3]; // 801C29CC
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C29D0
  cmpu(c,0,c->r[0],0x0000000Du); // 801C29D4
  if (crb(c,2)) { goto L_801C2BC8; } // 801C29D8
  c->r[3]=c->r[3]+0x000008ECu; // 801C29DC
  c->r[4]=c->r[30]+0x00001F3Du; // 801C29E0
  c->lr=0x801C29E8u; f_80075440(c); // 801C29E4
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801C29E8
  c->r[5]=c->r[3]|c->r[3]; // 801C29EC
  {uint32_t ea=c->r[2]+0xFFFFB7A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C29F0
  c->r[3]=c->r[30]+0x00000C88u; // 801C29F4
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C29F8
  c->r[4]=c->r[30]+0x000008ECu; // 801C29FC
  c->r[6]=0u+0x00000000u; // 801C2A00
  c->r[7]=0u+0x00000000u; // 801C2A04
  c->lr=0x801C2A0Cu; f_800BB0C8(c); // 801C2A08
  c->r[0]=0u+0x0000000Bu; // 801C2A0C
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C2A10
  goto L_801C2B04; // 801C2A14
  if (true) { c->lr=0x801C2A1Cu; dispatch(c,c->ctr); } // 801C2A18
  c->r[3]=c->r[1]+0x00000080u; // 801C2A1C
  c->r[4]=c->r[1]+0x0000014Cu; // 801C2A20
  c->lr=0x801C2A28u; f_80032FD8(c); // 801C2A24
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C2A28
  c->r[4]=c->r[30]+0x000008D0u; // 801C2A2C
  c->r[3]=c->r[1]+0x000000ECu; // 801C2A30
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C2A34
  c->ctr=c->r[12]; // 801C2A38
  if (true) { c->lr=0x801C2A40u; dispatch(c,c->ctr); } // 801C2A3C
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2A40
  c->r[3]=c->r[1]+0x00000044u; // 801C2A44
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2A48
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2A4C
  c->lr=0x801C2A54u; f_800521A0(c); // 801C2A50
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C2A54
  c->r[4]=c->r[30]+0x000008D0u; // 801C2A58
  c->r[3]=c->r[1]+0x0000011Cu; // 801C2A5C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C2A60
  c->ctr=c->r[12]; // 801C2A64
  if (true) { c->lr=0x801C2A6Cu; dispatch(c,c->ctr); } // 801C2A68
  c->r[3]=c->r[1]+0x00000050u; // 801C2A6C
  c->r[4]=c->r[1]+0x0000011Cu; // 801C2A70
  c->lr=0x801C2A78u; f_800BC9F4(c); // 801C2A74
  c->r[4]=c->r[1]+0x00000050u; // 801C2A78
  c->r[3]=c->r[1]+0x00000074u; // 801C2A7C
  c->r[5]=c->r[1]+0x00000044u; // 801C2A80
  c->lr=0x801C2A88u; f_80064C34(c); // 801C2A84
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2A88
  c->r[3]=c->r[1]+0x00000074u; // 801C2A8C
  {uint32_t ea=c->r[2]+0xFFFFB7B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2A90
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C2A94
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 801C2A98
  c->lr=0x801C2AA0u; f_80065368(c); // 801C2A9C
  cmps(c,0,(int32_t)c->r[3],0); // 801C2AA0
  if (!crb(c,2)) { goto L_801C2AB4; } // 801C2AA4
  c->r[3]=c->r[1]+0x00000074u; // 801C2AA8
  c->r[4]=c->r[3]|c->r[3]; // 801C2AAC
  c->lr=0x801C2AB4u; f_80265750(c); // 801C2AB0
L_801C2AB4:;
  c->r[3]=c->r[1]+0x0000002Cu; // 801C2AB4
  c->r[4]=c->r[1]+0x00000074u; // 801C2AB8
  c->lr=0x801C2AC0u; f_8003F484(c); // 801C2ABC
  c->r[31]=c->r[3]|c->r[3]; // 801C2AC0
  c->r[3]=c->r[1]+0x00000038u; // 801C2AC4
  c->r[4]=c->r[1]+0x00000080u; // 801C2AC8
  c->lr=0x801C2AD0u; f_8003F484(c); // 801C2ACC
  c->r[7]=R16(c->r[30]+0x00001FACu); // 801C2AD0
  c->r[5]=c->r[3]|c->r[3]; // 801C2AD4
  c->r[6]=c->r[31]|c->r[31]; // 801C2AD8
  c->r[3]=c->r[30]+0x00002018u; // 801C2ADC
  c->r[4]=0u+0x00000001u; // 801C2AE0
  c->lr=0x801C2AE8u; f_801C1E14(c); // 801C2AE4
  c->r[3]=0u+0x804D0000u; // 801C2AE8
  {uint32_t ea=c->r[2]+0xFFFFB7BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2AEC
  c->r[3]=c->r[3]+0x00003318u; // 801C2AF0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2AF4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C2AF8
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C2AFC
  goto L_801C2BC8; // 801C2B00
L_801C2B04:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C2B04
  c->r[4]=c->r[30]+0x000008D0u; // 801C2B08
  c->r[3]=c->r[1]+0x000000BCu; // 801C2B0C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C2B10
  c->ctr=c->r[12]; // 801C2B14
  if (true) { c->lr=0x801C2B1Cu; dispatch(c,c->ctr); } // 801C2B18
  c->r[3]=c->r[1]+0x00000068u; // 801C2B1C
  c->r[4]=c->r[1]+0x000000BCu; // 801C2B20
  c->lr=0x801C2B28u; f_80032FD8(c); // 801C2B24
  c->r[3]=R32(c->r[30]+0x00002018u); // 801C2B28
  c->r[4]=c->r[1]+0x00000068u; // 801C2B2C
  c->lr=0x801C2B34u; f_801C4AD8(c); // 801C2B30
  cmps(c,0,(int32_t)c->r[3],0); // 801C2B34
  if (crb(c,2)) { goto L_801C2B70; } // 801C2B38
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2B3C
  c->r[3]=c->r[1]+0x00000020u; // 801C2B40
  c->f[2]=c->f[1]; // 801C2B44
  c->f[3]=c->f[1]; // 801C2B48
  c->lr=0x801C2B50u; f_800521A0(c); // 801C2B4C
  c->r[6]=c->r[3]|c->r[3]; // 801C2B50
  c->r[3]=c->r[30]+0x00002018u; // 801C2B54
  c->r[4]=0u+0x00000001u; // 801C2B58
  c->r[5]=0u+0xFFFFFFFFu; // 801C2B5C
  c->lr=0x801C2B64u; f_801C4C04(c); // 801C2B60
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2B64
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C2B68
  goto L_801C2BC8; // 801C2B6C
L_801C2B70:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C2B70
  c->r[4]=c->r[30]+0x000008D0u; // 801C2B74
  c->r[3]=c->r[1]+0x0000008Cu; // 801C2B78
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C2B7C
  c->ctr=c->r[12]; // 801C2B80
  if (true) { c->lr=0x801C2B88u; dispatch(c,c->ctr); } // 801C2B84
  c->r[3]=c->r[1]+0x0000005Cu; // 801C2B88
  c->r[4]=c->r[1]+0x0000008Cu; // 801C2B8C
  c->lr=0x801C2B94u; f_800BC9F4(c); // 801C2B90
  c->r[3]=c->r[1]+0x00000008u; // 801C2B94
  c->r[4]=c->r[1]+0x0000005Cu; // 801C2B98
  c->lr=0x801C2BA0u; f_8003F484(c); // 801C2B9C
  c->r[31]=c->r[3]|c->r[3]; // 801C2BA0
  c->r[3]=c->r[1]+0x00000014u; // 801C2BA4
  c->r[4]=c->r[1]+0x00000068u; // 801C2BA8
  c->lr=0x801C2BB0u; f_8003F484(c); // 801C2BAC
  c->r[5]=c->r[3]|c->r[3]; // 801C2BB0
  c->r[6]=c->r[31]|c->r[31]; // 801C2BB4
  c->r[3]=c->r[30]+0x00002018u; // 801C2BB8
  c->r[4]=0u+0x00000001u; // 801C2BBC
  c->r[7]=0u+0xFFFFFFFFu; // 801C2BC0
  c->lr=0x801C2BC8u; f_801C1E14(c); // 801C2BC4
L_801C2BC8:;
  c->r[0]=R32(c->r[1]+0x00000194u); // 801C2BC8
  c->r[31]=R32(c->r[1]+0x0000018Cu); // 801C2BCC
  c->r[30]=R32(c->r[1]+0x00000188u); // 801C2BD0
  c->lr=c->r[0]; // 801C2BD4
  c->r[1]=c->r[1]+0x00000190u; // 801C2BD8
  return; // 801C2BDC
}

// fn_801C2BE0
void f_801C2BE0(Ctx* __restrict c) {
  trace_call(0x801C2BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2BE0
  c->r[0]=c->lr; // 801C2BE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C2BE8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C2BEC
  c->r[31]=c->r[3]|c->r[3]; // 801C2BF0
  c->r[3]=c->r[1]+0x00000008u; // 801C2BF4
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2BF8
  c->r[4]=c->r[31]+0x00002018u; // 801C2BFC
  c->lr=0x801C2C04u; f_801C44B8(c); // 801C2C00
  c->r[3]=c->r[1]+0x00000008u; // 801C2C04
  c->lr=0x801C2C0Cu; f_801C4B60(c); // 801C2C08
  cmps(c,0,(int32_t)c->r[3],0); // 801C2C0C
  if (!crb(c,2)) { goto L_801C2C2C; } // 801C2C10
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C2C14
  c->r[3]=c->r[31]+0x000008D0u; // 801C2C18
  c->r[4]=c->r[1]+0x00000008u; // 801C2C1C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C2C20
  c->ctr=c->r[12]; // 801C2C24
  if (true) { c->lr=0x801C2C2Cu; dispatch(c,c->ctr); } // 801C2C28
L_801C2C2C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2C2C
  {uint32_t ea=c->r[31]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2C30
  fcmp(c,0,c->f[1],c->f[0]); // 801C2C34
  if (!crb(c,0)) { goto L_801C2C50; } // 801C2C38
  c->r[3]=0u+0x804D0000u; // 801C2C3C
  c->r[3]=c->r[3]+0x00003318u; // 801C2C40
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2C44
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C2C48
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C2C4C
L_801C2C50:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2C50
  {uint32_t ea=c->r[31]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2C54
  fcmp(c,0,c->f[1],c->f[0]); // 801C2C58
  if (!crb(c,1)) { goto L_801C2C64; } // 801C2C5C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C2C60
L_801C2C64:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C2C64
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C2C68
  c->lr=c->r[0]; // 801C2C6C
  c->r[1]=c->r[1]+0x00000040u; // 801C2C70
  return; // 801C2C74
}

// fn_801C2C78
void f_801C2C78(Ctx* __restrict c) {
  trace_call(0x801C2C78u);
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C2C78
  cmpu(c,0,c->r[0],0x0000000Du); // 801C2C7C
  if (!crb(c,2)) return; // 801C2C80
  c->r[7]=R16(c->r[3]+0x00001FAAu); // 801C2C84
  cmps(c,0,(int32_t)c->r[7],0); // 801C2C88
  if (!crb(c,2)) { goto L_801C2CC8; } // 801C2C8C
  c->r[0]=R8(c->r[3]+0x00002084u); // 801C2C90
  cmps(c,0,(int32_t)c->r[0],0); // 801C2C94
  if (crb(c,2)) { goto L_801C2CC8; } // 801C2C98
  c->r[4]=R32(c->r[3]+0x00002038u); // 801C2C9C
  c->r[6]=0u+0x00000000u; // 801C2CA0
  c->r[5]=R32(c->r[3]+0x0000208Cu); // 801C2CA4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C2CA8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801C2CAC
  if (!crb(c,2)) { goto L_801C2CEC; } // 801C2CB0
  c->r[0]=R32(c->r[3]+0x00002040u); // 801C2CB4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 801C2CB8
  if (!crb(c,2)) { goto L_801C2CEC; } // 801C2CBC
  c->r[6]=0u+0x00000001u; // 801C2CC0
  goto L_801C2CEC; // 801C2CC4
L_801C2CC8:;
  c->r[4]=R32(c->r[3]+0x0000208Cu); // 801C2CC8
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801C2CCC
  c->r[6]=0u+0x00000000u; // 801C2CD0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C2CD4
  if (!crb(c,2)) { goto L_801C2CEC; } // 801C2CD8
  c->r[0]=R32(c->r[3]+0x00002040u); // 801C2CDC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 801C2CE0
  if (!crb(c,2)) { goto L_801C2CEC; } // 801C2CE4
  c->r[6]=0u+0x00000001u; // 801C2CE8
L_801C2CEC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801C2CEC
  if (crb(c,2)) return; // 801C2CF0
  c->r[0]=R16(c->r[3]+0x00001FA8u); // 801C2CF4
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C2CF8
  f_800AC668(c); return; // 801C2CFC
  return; // 801C2D00
}

// fn_801C2D04
void f_801C2D04(Ctx* __restrict c) {
  trace_call(0x801C2D04u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2D04
  c->r[0]=c->lr; // 801C2D08
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801C2D0C
  c->r[11]=c->r[1]+0x000000D0u; // 801C2D10
  c->lr=0x801C2D18u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C2D14
  c->r[5]=R32(c->r[3]+0x00000974u); // 801C2D18
  c->r[31]=c->r[3]|c->r[3]; // 801C2D1C
  c->r[29]=c->r[4]|c->r[4]; // 801C2D20
  c->r[3]=c->r[3]+0x000008ECu; // 801C2D24
  c->r[5]=R32(c->r[5]+0x00000000u); // 801C2D28
  c->r[4]=c->r[31]+0x00001F3Du; // 801C2D2C
  c->r[30]=R32(c->r[5]+0x00000018u); // 801C2D30
  c->lr=0x801C2D38u; f_80075440(c); // 801C2D34
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801C2D38
  if (crb(c,2)) { goto L_801C2D70; } // 801C2D3C
  c->r[3]=c->r[31]+0x000008ECu; // 801C2D40
  c->r[4]=c->r[31]+0x00001F3Du; // 801C2D44
  c->lr=0x801C2D4Cu; f_80075440(c); // 801C2D48
  W32(c->r[29]+0x0000002Cu,c->r[3]); // 801C2D4C
  c->r[5]=c->r[3]|c->r[3]; // 801C2D50
  {uint32_t ea=c->r[2]+0xFFFFB7A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2D54
  c->r[3]=c->r[31]+0x00000C88u; // 801C2D58
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2D5C
  c->r[4]=c->r[31]+0x000008ECu; // 801C2D60
  c->r[6]=0u+0x00000000u; // 801C2D64
  c->r[7]=0u+0x00000000u; // 801C2D68
  c->lr=0x801C2D70u; f_800BB0C8(c); // 801C2D6C
L_801C2D70:;
  c->r[0]=0u+0x00000000u; // 801C2D70
  c->r[4]=c->r[31]+0x000008D0u; // 801C2D74
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C2D78
  c->r[3]=c->r[1]+0x0000008Cu; // 801C2D7C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C2D80
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C2D84
  c->ctr=c->r[12]; // 801C2D88
  if (true) { c->lr=0x801C2D90u; dispatch(c,c->ctr); } // 801C2D8C
  c->r[3]=c->r[1]+0x00000050u; // 801C2D90
  c->r[4]=c->r[1]+0x0000008Cu; // 801C2D94
  c->lr=0x801C2D9Cu; f_80032FD8(c); // 801C2D98
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C2D9C
  c->r[4]=c->r[31]+0x000008D0u; // 801C2DA0
  c->r[3]=c->r[1]+0x0000005Cu; // 801C2DA4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C2DA8
  c->ctr=c->r[12]; // 801C2DAC
  if (true) { c->lr=0x801C2DB4u; dispatch(c,c->ctr); } // 801C2DB0
  c->r[3]=c->r[1]+0x00000044u; // 801C2DB4
  c->r[4]=c->r[1]+0x0000005Cu; // 801C2DB8
  c->lr=0x801C2DC0u; f_800BC9F4(c); // 801C2DBC
  c->r[0]=R32(c->r[31]+0x000020B0u); // 801C2DC0
  cmps(c,0,(int32_t)c->r[0],0); // 801C2DC4
  if (crb(c,1)) { goto L_801C2DD8; } // 801C2DC8
  c->r[0]=0u+0x00000001u; // 801C2DCC
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C2DD0
  goto L_801C2ED4; // 801C2DD4
L_801C2DD8:;
  c->r[3]=R32(c->r[31]+0x00002090u); // 801C2DD8
  c->r[4]=c->r[1]+0x00000050u; // 801C2DDC
  c->lr=0x801C2DE4u; f_801C4AD8(c); // 801C2DE0
  cmps(c,0,(int32_t)c->r[3],0); // 801C2DE4
  if (crb(c,2)) { goto L_801C2E20; } // 801C2DE8
  c->r[3]=c->r[1]+0x00000038u; // 801C2DEC
  c->r[4]=c->r[1]+0x00000044u; // 801C2DF0
  c->lr=0x801C2DF8u; f_8003F484(c); // 801C2DF4
  c->r[6]=c->r[3]|c->r[3]; // 801C2DF8
  c->r[3]=c->r[31]+0x00002090u; // 801C2DFC
  c->r[4]=0u+0x00000000u; // 801C2E00
  c->r[5]=0u+0xFFFFFFFFu; // 801C2E04
  c->lr=0x801C2E0Cu; f_801C4C04(c); // 801C2E08
  cmps(c,0,(int32_t)c->r[3],0); // 801C2E0C
  if (!crb(c,2)) { goto L_801C2ED4; } // 801C2E10
  c->r[0]=0u+0x00000001u; // 801C2E14
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C2E18
  goto L_801C2ED4; // 801C2E1C
L_801C2E20:;
  c->r[3]=R32(c->r[31]+0x000008A4u); // 801C2E20
  c->r[0]=R32(c->r[31]+0x00002090u); // 801C2E24
  cmpu(c,0,c->r[3],c->r[0]); // 801C2E28
  if (!crb(c,2)) { goto L_801C2E90; } // 801C2E2C
  c->r[0]=R16(c->r[31]+0x00001FA2u); // 801C2E30
  cmps(c,0,(int32_t)c->r[0],0); // 801C2E34
  if (!crb(c,2)) { goto L_801C2E90; } // 801C2E38
  c->r[0]=R16(c->r[31]+0x00001FA4u); // 801C2E3C
  cmpu(c,0,c->r[0],0x00000014u); // 801C2E40
  if (!crb(c,2)) { goto L_801C2E90; } // 801C2E44
  c->r[3]=c->r[1]+0x00000020u; // 801C2E48
  c->r[4]=c->r[1]+0x00000044u; // 801C2E4C
  c->lr=0x801C2E54u; f_8003F484(c); // 801C2E50
  c->r[30]=c->r[3]|c->r[3]; // 801C2E54
  c->r[3]=c->r[1]+0x0000002Cu; // 801C2E58
  c->r[4]=c->r[1]+0x00000050u; // 801C2E5C
  c->lr=0x801C2E64u; f_8003F484(c); // 801C2E60
  c->r[5]=c->r[3]|c->r[3]; // 801C2E64
  c->r[6]=c->r[30]|c->r[30]; // 801C2E68
  c->r[3]=c->r[31]+0x00002090u; // 801C2E6C
  c->r[4]=0u+0x00000000u; // 801C2E70
  c->r[7]=0u+0x00000001u; // 801C2E74
  c->lr=0x801C2E7Cu; f_801C1E14(c); // 801C2E78
  cmps(c,0,(int32_t)c->r[3],0); // 801C2E7C
  if (!crb(c,2)) { goto L_801C2ED4; } // 801C2E80
  c->r[0]=0u+0x00000001u; // 801C2E84
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C2E88
  goto L_801C2ED4; // 801C2E8C
L_801C2E90:;
  c->r[3]=c->r[1]+0x00000008u; // 801C2E90
  c->r[4]=c->r[1]+0x00000044u; // 801C2E94
  c->lr=0x801C2E9Cu; f_8003F484(c); // 801C2E98
  c->r[30]=c->r[3]|c->r[3]; // 801C2E9C
  c->r[3]=c->r[1]+0x00000014u; // 801C2EA0
  c->r[4]=c->r[1]+0x00000050u; // 801C2EA4
  c->lr=0x801C2EACu; f_8003F484(c); // 801C2EA8
  c->r[5]=c->r[3]|c->r[3]; // 801C2EAC
  c->r[6]=c->r[30]|c->r[30]; // 801C2EB0
  c->r[3]=c->r[31]+0x00002090u; // 801C2EB4
  c->r[4]=0u+0x00000000u; // 801C2EB8
  c->r[7]=0u+0xFFFFFFFFu; // 801C2EBC
  c->lr=0x801C2EC4u; f_801C1E14(c); // 801C2EC0
  cmps(c,0,(int32_t)c->r[3],0); // 801C2EC4
  if (!crb(c,2)) { goto L_801C2ED4; } // 801C2EC8
  c->r[0]=0u+0x00000001u; // 801C2ECC
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C2ED0
L_801C2ED4:;
  c->r[0]=R8(c->r[31]+0x0000200Cu); // 801C2ED4
  cmps(c,0,(int32_t)c->r[0],0); // 801C2ED8
  if (crb(c,2)) { goto L_801C2EEC; } // 801C2EDC
  c->r[0]=0u+0x00000016u; // 801C2EE0
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C2EE4
  goto L_801C2EF4; // 801C2EE8
L_801C2EEC:;
  c->r[0]=0u+0x00000015u; // 801C2EEC
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C2EF0
L_801C2EF4:;
  c->r[11]=c->r[1]+0x000000D0u; // 801C2EF4
  c->lr=0x801C2EFCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C2EF8
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801C2EFC
  c->lr=c->r[0]; // 801C2F00
  c->r[1]=c->r[1]+0x000000D0u; // 801C2F04
  return; // 801C2F08
}

// fn_801C2F0C
void f_801C2F0C(Ctx* __restrict c) {
  trace_call(0x801C2F0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2F0C
  c->r[0]=c->lr; // 801C2F10
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C2F14
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C2F18
  c->r[31]=c->r[3]|c->r[3]; // 801C2F1C
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C2F20
  cmps(c,0,(int32_t)c->r[0],21); // 801C2F24
  if (crb(c,2)) { goto L_801C2F30; } // 801C2F28
  goto L_801C2FA0; // 801C2F2C
L_801C2F30:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2F30
  c->r[3]=c->r[1]+0x00000008u; // 801C2F34
  c->r[4]=c->r[31]+0x00002090u; // 801C2F38
  c->lr=0x801C2F40u; f_801C44B8(c); // 801C2F3C
  c->r[3]=c->r[1]+0x00000008u; // 801C2F40
  c->lr=0x801C2F48u; f_801C4B60(c); // 801C2F44
  cmps(c,0,(int32_t)c->r[3],0); // 801C2F48
  if (!crb(c,2)) { goto L_801C2F68; } // 801C2F4C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C2F50
  c->r[3]=c->r[31]+0x000008D0u; // 801C2F54
  c->r[4]=c->r[1]+0x00000008u; // 801C2F58
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C2F5C
  c->ctr=c->r[12]; // 801C2F60
  if (true) { c->lr=0x801C2F68u; dispatch(c,c->ctr); } // 801C2F64
L_801C2F68:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2F68
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2F6C
  fcmp(c,0,c->f[1],c->f[0]); // 801C2F70
  if (!crb(c,0)) { goto L_801C2F8C; } // 801C2F74
  c->r[3]=0u+0x804D0000u; // 801C2F78
  c->r[3]=c->r[3]+0x00003318u; // 801C2F7C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2F80
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C2F84
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C2F88
L_801C2F8C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2F8C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2F90
  fcmp(c,0,c->f[1],c->f[0]); // 801C2F94
  if (!crb(c,1)) { goto L_801C2FA0; } // 801C2F98
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C2F9C
L_801C2FA0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C2FA0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C2FA4
  c->lr=c->r[0]; // 801C2FA8
  c->r[1]=c->r[1]+0x00000040u; // 801C2FAC
  return; // 801C2FB0
}

// fn_801C2FB4
void f_801C2FB4(Ctx* __restrict c) {
  trace_call(0x801C2FB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2FB4
  c->r[0]=c->lr; // 801C2FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2FBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2FC0
  c->r[31]=c->r[3]|c->r[3]; // 801C2FC4
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C2FC8
  cmps(c,0,(int32_t)c->r[0],22); // 801C2FCC
  if (crb(c,2)) { goto L_801C3000; } // 801C2FD0
  if (!crb(c,0)) { goto L_801C3004; } // 801C2FD4
  cmps(c,0,(int32_t)c->r[0],21); // 801C2FD8
  if (!crb(c,0)) { goto L_801C2FE4; } // 801C2FDC
  goto L_801C3004; // 801C2FE0
L_801C2FE4:;
  c->r[3]=c->r[3]+0x00002090u; // 801C2FE4
  c->lr=0x801C2FECu; f_801C4CF8(c); // 801C2FE8
  cmps(c,0,(int32_t)c->r[3],0); // 801C2FEC
  if (crb(c,2)) { goto L_801C3004; } // 801C2FF0
  c->r[3]=c->r[31]|c->r[31]; // 801C2FF4
  c->lr=0x801C2FFCu; f_800AC3A4(c); // 801C2FF8
  goto L_801C3004; // 801C2FFC
L_801C3000:;
  c->lr=0x801C3004u; f_800AC3A4(c); // 801C3000
L_801C3004:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3008
  c->lr=c->r[0]; // 801C300C
  c->r[1]=c->r[1]+0x00000010u; // 801C3010
  return; // 801C3014
}

// fn_801C3018
void f_801C3018(Ctx* __restrict c) {
  trace_call(0x801C3018u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3018
  c->r[0]=c->lr; // 801C301C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801C3020
  c->r[11]=c->r[1]+0x000000F0u; // 801C3024
  c->lr=0x801C302Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3028
  {uint32_t ea=c->r[3]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C302C
  c->r[5]=0u+0x00000028u; // 801C3030
  c->r[0]=0u+0x00000000u; // 801C3034
  W16(c->r[3]+0x00001FEEu,c->r[5]); // 801C3038
  c->r[29]=c->r[3]|c->r[3]; // 801C303C
  c->r[30]=c->r[4]|c->r[4]; // 801C3040
  {uint32_t ea=c->r[3]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C3044
  c->r[4]=c->r[29]+0x000008D0u; // 801C3048
  W8(c->r[3]+0x0000200Cu,c->r[0]); // 801C304C
  c->r[3]=c->r[1]+0x000000B0u; // 801C3050
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801C3054
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C3058
  c->ctr=c->r[12]; // 801C305C
  if (true) { c->lr=0x801C3064u; dispatch(c,c->ctr); } // 801C3060
  c->r[3]=c->r[1]+0x00000044u; // 801C3064
  c->r[4]=c->r[1]+0x000000B0u; // 801C3068
  c->lr=0x801C3070u; f_80032FD8(c); // 801C306C
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801C3070
  c->r[4]=c->r[29]+0x000008D0u; // 801C3074
  c->r[3]=c->r[1]+0x00000050u; // 801C3078
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C307C
  c->ctr=c->r[12]; // 801C3080
  if (true) { c->lr=0x801C3088u; dispatch(c,c->ctr); } // 801C3084
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3088
  c->r[3]=c->r[1]+0x00000020u; // 801C308C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3090
  {uint32_t ea=c->r[1]+0x00000070u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3094
  c->lr=0x801C309Cu; f_800521A0(c); // 801C3098
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801C309C
  c->r[4]=c->r[29]+0x000008D0u; // 801C30A0
  c->r[3]=c->r[1]+0x00000080u; // 801C30A4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C30A8
  c->ctr=c->r[12]; // 801C30AC
  if (true) { c->lr=0x801C30B4u; dispatch(c,c->ctr); } // 801C30B0
  c->r[3]=c->r[1]+0x0000002Cu; // 801C30B4
  c->r[4]=c->r[1]+0x00000080u; // 801C30B8
  c->lr=0x801C30C0u; f_800BC9F4(c); // 801C30BC
  c->r[4]=c->r[1]+0x0000002Cu; // 801C30C0
  c->r[3]=c->r[1]+0x00000038u; // 801C30C4
  c->r[5]=c->r[1]+0x00000020u; // 801C30C8
  c->lr=0x801C30D0u; f_80064C34(c); // 801C30CC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C30D0
  c->r[3]=c->r[1]+0x00000038u; // 801C30D4
  {uint32_t ea=c->r[2]+0xFFFFB7A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C30D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C30DC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801C30E0
  c->lr=0x801C30E8u; f_80065368(c); // 801C30E4
  cmps(c,0,(int32_t)c->r[3],0); // 801C30E8
  if (!crb(c,2)) { goto L_801C30FC; } // 801C30EC
  c->r[3]=c->r[1]+0x00000038u; // 801C30F0
  c->r[4]=c->r[3]|c->r[3]; // 801C30F4
  c->lr=0x801C30FCu; f_80265750(c); // 801C30F8
L_801C30FC:;
  c->r[3]=c->r[1]+0x00000008u; // 801C30FC
  c->r[4]=c->r[1]+0x00000038u; // 801C3100
  c->lr=0x801C3108u; f_8003F484(c); // 801C3104
  c->r[31]=c->r[3]|c->r[3]; // 801C3108
  c->r[3]=c->r[1]+0x00000014u; // 801C310C
  c->r[4]=c->r[1]+0x00000044u; // 801C3110
  c->lr=0x801C3118u; f_8003F484(c); // 801C3114
  c->r[5]=c->r[3]|c->r[3]; // 801C3118
  c->r[6]=c->r[31]|c->r[31]; // 801C311C
  c->r[3]=c->r[29]+0x00002108u; // 801C3120
  c->r[4]=0u+0x00000000u; // 801C3124
  c->r[7]=0u+0xFFFFFFFFu; // 801C3128
  c->lr=0x801C3130u; f_801C1E14(c); // 801C312C
  c->r[3]=c->r[29]+0x000008ECu; // 801C3130
  c->r[4]=c->r[29]+0x00001F3Du; // 801C3134
  c->lr=0x801C313Cu; f_80075440(c); // 801C3138
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 801C313C
  c->r[5]=c->r[3]|c->r[3]; // 801C3140
  {uint32_t ea=c->r[2]+0xFFFFB7A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3144
  c->r[3]=c->r[29]+0x00000C88u; // 801C3148
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C314C
  c->r[4]=c->r[29]+0x000008ECu; // 801C3150
  c->r[6]=0u+0x00000000u; // 801C3154
  c->r[7]=0u+0x00000000u; // 801C3158
  c->lr=0x801C3160u; f_800BB0C8(c); // 801C315C
  c->r[11]=c->r[1]+0x000000F0u; // 801C3160
  c->lr=0x801C3168u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3164
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801C3168
  c->lr=c->r[0]; // 801C316C
  c->r[1]=c->r[1]+0x000000F0u; // 801C3170
  return; // 801C3174
}

// fn_801C3178
void f_801C3178(Ctx* __restrict c) {
  trace_call(0x801C3178u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3178
  c->r[0]=c->lr; // 801C317C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C3180
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C3184
  c->r[31]=c->r[3]|c->r[3]; // 801C3188
  c->r[3]=c->r[1]+0x00000008u; // 801C318C
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3190
  c->r[4]=c->r[31]+0x00002108u; // 801C3194
  c->lr=0x801C319Cu; f_801C44B8(c); // 801C3198
  c->r[3]=c->r[1]+0x00000008u; // 801C319C
  c->lr=0x801C31A4u; f_801C4B60(c); // 801C31A0
  cmps(c,0,(int32_t)c->r[3],0); // 801C31A4
  if (!crb(c,2)) { goto L_801C31C4; } // 801C31A8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C31AC
  c->r[3]=c->r[31]+0x000008D0u; // 801C31B0
  c->r[4]=c->r[1]+0x00000008u; // 801C31B4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C31B8
  c->ctr=c->r[12]; // 801C31BC
  if (true) { c->lr=0x801C31C4u; dispatch(c,c->ctr); } // 801C31C0
L_801C31C4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C31C4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C31C8
  c->lr=c->r[0]; // 801C31CC
  c->r[1]=c->r[1]+0x00000040u; // 801C31D0
  return; // 801C31D4
}

// fn_801C31D8
void f_801C31D8(Ctx* __restrict c) {
  trace_call(0x801C31D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C31D8
  c->r[0]=c->lr; // 801C31DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C31E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C31E4
  c->r[31]=c->r[3]|c->r[3]; // 801C31E8
  c->r[3]=c->r[3]+0x00002108u; // 801C31EC
  c->lr=0x801C31F4u; f_801C4CF8(c); // 801C31F0
  cmps(c,0,(int32_t)c->r[3],0); // 801C31F4
  if (crb(c,2)) { goto L_801C3220; } // 801C31F8
  c->r[3]=c->r[31]|c->r[31]; // 801C31FC
  c->r[4]=0u+0x00000000u; // 801C3200
  c->r[5]=0u+0x00000001u; // 801C3204
  c->lr=0x801C320Cu; f_80076080(c); // 801C3208
  c->r[12]=R32(c->r[31]+0x00000010u); // 801C320C
  c->r[3]=c->r[31]|c->r[31]; // 801C3210
  c->r[12]=R32(c->r[12]+0x00000030u); // 801C3214
  c->ctr=c->r[12]; // 801C3218
  if (true) { c->lr=0x801C3220u; dispatch(c,c->ctr); } // 801C321C
L_801C3220:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3224
  c->lr=c->r[0]; // 801C3228
  c->r[1]=c->r[1]+0x00000010u; // 801C322C
  return; // 801C3230
}

// fn_801C3234
void f_801C3234(Ctx* __restrict c) {
  trace_call(0x801C3234u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3234
  c->r[0]=c->lr; // 801C3238
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C323C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3240
  c->r[31]=c->r[4]|c->r[4]; // 801C3244
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C3248
  c->r[30]=c->r[3]|c->r[3]; // 801C324C
  c->r[3]=c->r[3]+0x000008ECu; // 801C3250
  c->r[4]=c->r[30]+0x00001F51u; // 801C3254
  c->lr=0x801C325Cu; f_80075440(c); // 801C3258
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801C325C
  c->r[5]=c->r[3]|c->r[3]; // 801C3260
  {uint32_t ea=c->r[2]+0xFFFFB7C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3264
  c->r[3]=c->r[30]+0x00000C88u; // 801C3268
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C326C
  c->r[4]=c->r[30]+0x000008ECu; // 801C3270
  c->r[6]=0u+0x00000000u; // 801C3274
  c->r[7]=0u+0x00000000u; // 801C3278
  c->lr=0x801C3280u; f_800BB0C8(c); // 801C327C
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3280
  c->r[0]=0u+0x00000032u; // 801C3284
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C3288
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C328C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3290
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C3294
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3298
  c->lr=c->r[0]; // 801C329C
  c->r[1]=c->r[1]+0x00000010u; // 801C32A0
  return; // 801C32A4
}

// fn_801C32A8
void f_801C32A8(Ctx* __restrict c) {
  trace_call(0x801C32A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C32A8
  c->r[0]=c->lr; // 801C32AC
  {uint32_t ea=c->r[2]+0xFFFFB7A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C32B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C32B4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C32B8
  c->r[31]=c->r[3]|c->r[3]; // 801C32BC
  c->r[4]=R32(c->r[3]+0x00000974u); // 801C32C0
  c->r[3]=R32(c->r[4]+0x00000000u); // 801C32C4
  c->lr=0x801C32CCu; f_80165B9C(c); // 801C32C8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C32CC
  c->r[4]=c->r[31]+0x000008D0u; // 801C32D0
  c->r[3]=c->r[1]+0x00000008u; // 801C32D4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C32D8
  c->ctr=c->r[12]; // 801C32DC
  if (true) { c->lr=0x801C32E4u; dispatch(c,c->ctr); } // 801C32E0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C32E4
  c->r[3]=c->r[31]+0x000008D0u; // 801C32E8
  {uint32_t ea=c->r[2]+0xFFFFB7B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C32EC
  c->r[4]=c->r[1]+0x00000008u; // 801C32F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C32F4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801C32F8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C32FC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C3300
  c->ctr=c->r[12]; // 801C3304
  if (true) { c->lr=0x801C330Cu; dispatch(c,c->ctr); } // 801C3308
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C330C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C3310
  c->lr=c->r[0]; // 801C3314
  c->r[1]=c->r[1]+0x00000040u; // 801C3318
  return; // 801C331C
}

// fn_801C3320
void f_801C3320(Ctx* __restrict c) {
  trace_call(0x801C3320u);
  c->r[4]=0u+0x804D0000u; // 801C3320
  {uint32_t ea=c->r[3]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3324
  c->r[4]=c->r[4]+0x00003318u; // 801C3328
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C332C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3330
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801C3334
  fcmp(c,0,c->f[1],c->f[0]); // 801C3338
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[1]);} // 801C333C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3340
  if (!crb(c,2)) return; // 801C3344
  c->r[0]=R16(c->r[3]+0x00001FB4u); // 801C3348
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C334C
  f_800AC668(c); return; // 801C3350
  return; // 801C3354
}

// fn_801C3358
void f_801C3358(Ctx* __restrict c) {
  trace_call(0x801C3358u);
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3358
  c->r[0]=c->lr; // 801C335C
  W32(c->r[1]+0x000001C4u,c->r[0]); // 801C3360
  W32(c->r[1]+0x000001BCu,c->r[31]); // 801C3364
  c->r[31]=c->r[4]|c->r[4]; // 801C3368
  W32(c->r[1]+0x000001B8u,c->r[30]); // 801C336C
  c->r[30]=c->r[3]|c->r[3]; // 801C3370
  c->r[3]=c->r[3]+0x000008ECu; // 801C3374
  c->r[4]=c->r[30]+0x00001F65u; // 801C3378
  c->lr=0x801C3380u; f_80075440(c); // 801C337C
  W32(c->r[31]+0x00000014u,c->r[3]); // 801C3380
  c->r[5]=c->r[3]|c->r[3]; // 801C3384
  {uint32_t ea=c->r[2]+0xFFFFB7A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3388
  c->r[3]=c->r[30]+0x00000C88u; // 801C338C
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3390
  c->r[4]=c->r[30]+0x000008ECu; // 801C3394
  c->r[6]=0u+0x00000000u; // 801C3398
  c->r[7]=0u+0x00000000u; // 801C339C
  c->lr=0x801C33A4u; f_800BB0C8(c); // 801C33A0
  c->r[0]=0u+0x0000003Du; // 801C33A4
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C33A8
  c->lr=0x801C33B0u; f_80061A4C(c); // 801C33AC
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C33B0
  c->r[31]=c->r[3]|c->r[3]; // 801C33B4
  c->r[4]=c->r[30]+0x000008D0u; // 801C33B8
  c->r[3]=c->r[1]+0x0000014Cu; // 801C33BC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C33C0
  c->ctr=c->r[12]; // 801C33C4
  if (true) { c->lr=0x801C33CCu; dispatch(c,c->ctr); } // 801C33C8
  c->r[3]=c->r[1]+0x00000074u; // 801C33CC
  c->r[4]=c->r[1]+0x0000014Cu; // 801C33D0
  c->lr=0x801C33D8u; f_80032FD8(c); // 801C33D4
  c->r[3]=c->r[1]+0x00000080u; // 801C33D8
  c->r[4]=c->r[1]+0x00000074u; // 801C33DC
  c->r[5]=c->r[31]+0x00000384u; // 801C33E0
  c->lr=0x801C33E8u; f_8007B8A4(c); // 801C33E4
  c->r[3]=c->r[1]+0x00000080u; // 801C33E8
  c->lr=0x801C33F0u; f_80065368(c); // 801C33EC
  cmps(c,0,(int32_t)c->r[3],0); // 801C33F0
  if (!crb(c,2)) { goto L_801C3404; } // 801C33F4
  c->r[3]=c->r[1]+0x00000080u; // 801C33F8
  c->r[4]=c->r[3]|c->r[3]; // 801C33FC
  c->lr=0x801C3404u; f_80265750(c); // 801C3400
L_801C3404:;
  c->r[3]=c->r[30]|c->r[30]; // 801C3404
  c->lr=0x801C340Cu; f_801C3C1C(c); // 801C3408
  {uint32_t ea=c->r[2]+0xFFFFB7C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C340C
  {uint32_t ea=c->r[2]+0xFFFFB7C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3410
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801C3414
  {uint32_t ea=c->r[30]+0x00001FE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3418
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C341C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 801C3420
  fcmp(c,0,c->f[1],c->f[0]); // 801C3424
  if (!crb(c,0)) { goto L_801C3430; } // 801C3428
  c->f[1]=c->f[0]; // 801C342C
L_801C3430:;
  c->r[3]=c->r[1]+0x00000050u; // 801C3430
  c->r[4]=c->r[1]+0x00000080u; // 801C3434
  c->lr=0x801C343Cu; f_80064C58(c); // 801C3438
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C343C
  c->r[3]=c->r[1]+0x0000005Cu; // 801C3440
  {uint32_t ea=c->r[2]+0xFFFFB7CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3444
  c->f[3]=c->f[1]; // 801C3448
  c->lr=0x801C3450u; f_800521A0(c); // 801C344C
  c->r[4]=c->r[3]|c->r[3]; // 801C3450
  c->r[3]=c->r[1]+0x00000068u; // 801C3454
  c->r[5]=c->r[1]+0x00000050u; // 801C3458
  c->lr=0x801C3460u; f_80064C34(c); // 801C345C
  c->r[3]=c->r[30]+0x00001FBCu; // 801C3460
  c->r[4]=c->r[1]+0x00000068u; // 801C3464
  c->lr=0x801C346Cu; f_8003F468(c); // 801C3468
  c->r[3]=c->r[30]+0x00001FD4u; // 801C346C
  c->r[4]=c->r[30]+0x00001FBCu; // 801C3470
  c->lr=0x801C3478u; f_8003F468(c); // 801C3474
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C3478
  c->r[4]=c->r[30]+0x000008D0u; // 801C347C
  c->r[3]=c->r[1]+0x0000011Cu; // 801C3480
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C3484
  c->ctr=c->r[12]; // 801C3488
  if (true) { c->lr=0x801C3490u; dispatch(c,c->ctr); } // 801C348C
  c->r[3]=c->r[1]+0x00000038u; // 801C3490
  c->r[4]=c->r[1]+0x0000011Cu; // 801C3494
  c->lr=0x801C349Cu; f_800BC9F4(c); // 801C3498
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C349C
  c->r[3]=c->r[1]+0x00000044u; // 801C34A0
  c->r[4]=c->r[1]+0x00000038u; // 801C34A4
  c->lr=0x801C34ACu; f_80064C58(c); // 801C34A8
  c->r[3]=c->r[30]+0x00001FC8u; // 801C34AC
  c->r[4]=c->r[1]+0x00000044u; // 801C34B0
  c->lr=0x801C34B8u; f_8003F468(c); // 801C34B4
  c->r[5]=0u+0x804D0000u; // 801C34B8
  c->r[3]=c->r[1]+0x0000002Cu; // 801C34BC
  c->r[5]=c->r[5]+0x00003318u; // 801C34C0
  c->r[4]=c->r[30]+0x00001FD4u; // 801C34C4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C34C8
  c->lr=0x801C34D0u; f_80064C58(c); // 801C34CC
  c->r[3]=c->r[30]+0x00001FC8u; // 801C34D0
  c->r[5]=c->r[1]+0x0000002Cu; // 801C34D4
  c->r[4]=c->r[3]|c->r[3]; // 801C34D8
  c->lr=0x801C34E0u; f_80064C34(c); // 801C34DC
  c->r[3]=c->r[1]+0x0000017Cu; // 801C34E0
  c->lr=0x801C34E8u; f_80264680(c); // 801C34E4
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C34E8
  c->r[4]=c->r[30]+0x000008D0u; // 801C34EC
  c->r[3]=c->r[1]+0x000000ECu; // 801C34F0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C34F4
  c->ctr=c->r[12]; // 801C34F8
  if (true) { c->lr=0x801C3500u; dispatch(c,c->ctr); } // 801C34FC
  c->r[3]=c->r[1]+0x00000020u; // 801C3500
  c->r[4]=c->r[1]+0x000000ECu; // 801C3504
  c->lr=0x801C350Cu; f_800BC9F4(c); // 801C3508
  c->r[3]=c->r[1]+0x00000080u; // 801C350C
  c->r[4]=c->r[1]+0x00000020u; // 801C3510
  c->lr=0x801C3518u; f_8003F468(c); // 801C3514
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3518
  c->r[3]=c->r[1]+0x0000017Cu; // 801C351C
  c->r[4]=c->r[1]+0x00000080u; // 801C3520
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 801C3524
  c->lr=0x801C352Cu; f_8007513C(c); // 801C3528
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C352C
  c->r[4]=c->r[30]+0x000008D0u; // 801C3530
  c->r[3]=c->r[1]+0x000000BCu; // 801C3534
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C3538
  c->ctr=c->r[12]; // 801C353C
  if (true) { c->lr=0x801C3544u; dispatch(c,c->ctr); } // 801C3540
  c->r[3]=c->r[1]+0x00000014u; // 801C3544
  c->r[4]=c->r[1]+0x000000BCu; // 801C3548
  c->lr=0x801C3550u; f_80032FD8(c); // 801C354C
  c->r[3]=c->r[1]+0x0000017Cu; // 801C3550
  c->r[4]=c->r[1]+0x00000014u; // 801C3554
  c->lr=0x801C355Cu; f_80032FF4(c); // 801C3558
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C355C
  c->r[3]=c->r[30]+0x000008D0u; // 801C3560
  c->r[4]=c->r[1]+0x0000017Cu; // 801C3564
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C3568
  c->ctr=c->r[12]; // 801C356C
  if (true) { c->lr=0x801C3574u; dispatch(c,c->ctr); } // 801C3570
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C3574
  c->r[4]=c->r[30]+0x000008D0u; // 801C3578
  c->r[3]=c->r[1]+0x0000008Cu; // 801C357C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C3580
  c->ctr=c->r[12]; // 801C3584
  if (true) { c->lr=0x801C358Cu; dispatch(c,c->ctr); } // 801C3588
  c->r[3]=c->r[1]+0x00000008u; // 801C358C
  c->r[4]=c->r[1]+0x0000008Cu; // 801C3590
  c->lr=0x801C3598u; f_80032FD8(c); // 801C3594
  c->r[3]=c->r[30]+0x00002000u; // 801C3598
  c->r[4]=c->r[1]+0x00000008u; // 801C359C
  c->lr=0x801C35A4u; f_8003F468(c); // 801C35A0
  c->r[0]=R32(c->r[1]+0x000001C4u); // 801C35A4
  c->r[31]=R32(c->r[1]+0x000001BCu); // 801C35A8
  c->r[30]=R32(c->r[1]+0x000001B8u); // 801C35AC
  c->lr=c->r[0]; // 801C35B0
  c->r[1]=c->r[1]+0x000001C0u; // 801C35B4
  return; // 801C35B8
}

// fn_801C35BC
void f_801C35BC(Ctx* __restrict c) {
  trace_call(0x801C35BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C35BC
  c->r[0]=c->lr; // 801C35C0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C35C4
  c->r[11]=c->r[1]+0x00000050u; // 801C35C8
  c->lr=0x801C35D0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C35CC
  c->r[31]=c->r[1]|c->r[1]; // 801C35D0
  c->r[5]=R32(c->r[3]+0x00000974u); // 801C35D4
  c->r[30]=c->r[3]|c->r[3]; // 801C35D8
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C35DC
  c->r[29]=c->r[4]|c->r[4]; // 801C35E0
  c->r[3]=R32(c->r[5]+0x00000000u); // 801C35E4
  c->lr=0x801C35ECu; f_8016498C(c); // 801C35E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C35EC
  if (crb(c,2)) { goto L_801C3684; } // 801C35F0
  c->r[0]=R16(c->r[30]+0x00001FEEu); // 801C35F4
  cmps(c,0,(int32_t)c->r[0],62); // 801C35F8
  if (crb(c,2)) { goto L_801C3684; } // 801C35FC
  if (!crb(c,0)) { goto L_801C3610; } // 801C3600
  cmps(c,0,(int32_t)c->r[0],61); // 801C3604
  if (!crb(c,0)) { goto L_801C361C; } // 801C3608
  goto L_801C3684; // 801C360C
L_801C3610:;
  cmps(c,0,(int32_t)c->r[0],64); // 801C3610
  if (!crb(c,0)) { goto L_801C3684; } // 801C3614
  goto L_801C3668; // 801C3618
L_801C361C:;
  c->r[3]=c->r[30]+0x000008ECu; // 801C361C
  c->r[4]=c->r[30]+0x00001F79u; // 801C3620
  c->lr=0x801C3628u; f_80075440(c); // 801C3624
  W32(c->r[29]+0x00000014u,c->r[3]); // 801C3628
  c->r[5]=c->r[3]|c->r[3]; // 801C362C
  {uint32_t ea=c->r[2]+0xFFFFB7A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3630
  c->r[3]=c->r[30]+0x00000C88u; // 801C3634
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3638
  c->r[4]=c->r[30]+0x000008ECu; // 801C363C
  c->r[6]=0u+0x00000000u; // 801C3640
  c->r[7]=0u+0x00000000u; // 801C3644
  c->lr=0x801C364Cu; f_800BB0C8(c); // 801C3648
  c->r[0]=0u+0x0000003Eu; // 801C364C
  c->r[3]=R32(c->r[30]+0x00000974u); // 801C3650
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C3654
  {uint32_t ea=c->r[2]+0xFFFFB7B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3658
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C365C
  c->lr=0x801C3664u; f_80165B9C(c); // 801C3660
  goto L_801C3684; // 801C3664
L_801C3668:;
  c->r[3]=c->r[30]|c->r[30]; // 801C3668
  c->r[4]=0u+0x00000000u; // 801C366C
  c->r[5]=0u+0x00000001u; // 801C3670
  c->lr=0x801C3678u; f_80076080(c); // 801C3674
  c->r[0]=0u+0x00000064u; // 801C3678
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C367C
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801C3680
L_801C3684:;
  c->r[0]=R16(c->r[30]+0x00001FEEu); // 801C3684
  cmpu(c,0,c->r[0],0x0000003Fu); // 801C3688
  if (!crb(c,2)) { goto L_801C3774; } // 801C368C
  c->r[0]=R16(c->r[30]+0x00001FECu); // 801C3690
  cmpu(c,0,c->r[0],0x00000032u); // 801C3694
  if (!crb(c,2)) { goto L_801C3774; } // 801C3698
  c->r[3]=R32(c->r[30]+0x00000974u); // 801C369C
  c->r[29]=R32(c->r[3]+0x00000000u); // 801C36A0
  c->r[3]=c->r[29]|c->r[29]; // 801C36A4
  c->lr=0x801C36ACu; f_80075320(c); // 801C36A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C36AC
  if (crb(c,2)) { goto L_801C36D0; } // 801C36B0
  c->r[3]=c->r[29]|c->r[29]; // 801C36B4
  c->lr=0x801C36BCu; f_80075320(c); // 801C36B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C36BC
  c->r[12]=R32(c->r[12]+0x00000020u); // 801C36C0
  c->ctr=c->r[12]; // 801C36C4
  if (true) { c->lr=0x801C36CCu; dispatch(c,c->ctr); } // 801C36C8
  goto L_801C36D4; // 801C36CC
L_801C36D0:;
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C36D0
L_801C36D4:;
  {uint32_t ea=c->r[2]+0xFFFFB7D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C36D4
  fcmp(c,0,c->f[1],c->f[0]); // 801C36D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C36DC
  if (!crb(c,2)) { goto L_801C3774; } // 801C36E0
  c->r[3]=R32(c->r[30]+0x00000054u); // 801C36E4
  cmps(c,0,(int32_t)c->r[3],0); // 801C36E8
  if (crb(c,2)) { goto L_801C373C; } // 801C36EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C36F0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C36F4
  c->ctr=c->r[12]; // 801C36F8
  if (true) { c->lr=0x801C3700u; dispatch(c,c->ctr); } // 801C36FC
  c->lr=0x801C3704u; f_8007A658(c); // 801C3700
  c->r[29]=c->r[3]|c->r[3]; // 801C3704
  c->r[3]=0u+0x00000006u; // 801C3708
  c->lr=0x801C3710u; f_8007A658(c); // 801C370C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801C3710
  if (!crb(c,1)) { goto L_801C3734; } // 801C3714
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801C3718
  if (crb(c,2)) { goto L_801C372C; } // 801C371C
  W32(c->r[31]+0x00000034u,c->r[1]); // 801C3720
  c->r[3]=c->r[29]|c->r[29]; // 801C3724
  c->lr=0x801C372Cu; f_800AC5F0(c); // 801C3728
L_801C372C:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801C372C
  goto L_801C3774; // 801C3730
L_801C3734:;
  c->r[0]=0u+0x00000000u; // 801C3734
  W32(c->r[30]+0x00000054u,c->r[0]); // 801C3738
L_801C373C:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801C373C
  c->r[0]=c->r[3]+0x00000001u; // 801C3740
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C3744
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801C3748
  c->r[0]=c->r[0]^c->r[3]; // 801C374C
  c->r[0]=c->r[0]-c->r[3]; // 801C3750
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801C3754
  c->r[0]=c->r[30]+c->r[0]; // 801C3758
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801C375C
  if (crb(c,2)) { goto L_801C3770; } // 801C3760
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801C3764
  c->r[3]=c->r[29]|c->r[29]; // 801C3768
  c->lr=0x801C3770u; f_800AC5F0(c); // 801C376C
L_801C3770:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801C3770
L_801C3774:;
  c->r[10]=c->r[31]|c->r[31]; // 801C3774
  c->r[11]=c->r[10]+0x00000050u; // 801C3778
  c->lr=0x801C3780u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C377C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801C3780
  c->r[0]=R32(c->r[10]+0x00000004u); // 801C3784
  c->r[1]=c->r[10]|c->r[10]; // 801C3788
  c->lr=c->r[0]; // 801C378C
  return; // 801C3790
}

// fn_801C3794
void f_801C3794(Ctx* __restrict c) {
  trace_call(0x801C3794u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3794
  c->r[0]=c->lr; // 801C3798
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C379C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801C37A0
  c->r[31]=c->r[4]|c->r[4]; // 801C37A4
  W32(c->r[1]+0x00000098u,c->r[30]); // 801C37A8
  c->r[30]=c->r[3]|c->r[3]; // 801C37AC
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C37B0
  cmps(c,0,(int32_t)c->r[0],63); // 801C37B4
  if (crb(c,2)) { goto L_801C38F4; } // 801C37B8
  if (!crb(c,0)) { goto L_801C38F4; } // 801C37BC
  cmps(c,0,(int32_t)c->r[0],61); // 801C37C0
  if (!crb(c,0)) { goto L_801C37CC; } // 801C37C4
  goto L_801C38F4; // 801C37C8
L_801C37CC:;
  c->r[4]=c->r[1]+0x0000005Cu; // 801C37CC
  c->lr=0x801C37D4u; f_801C4158(c); // 801C37D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C37D4
  if (crb(c,2)) { goto L_801C3834; } // 801C37D8
  c->r[3]=c->r[30]+0x000008ECu; // 801C37DC
  c->r[4]=c->r[30]+0x00001F8Du; // 801C37E0
  c->lr=0x801C37E8u; f_80075440(c); // 801C37E4
  W32(c->r[31]+0x00000014u,c->r[3]); // 801C37E8
  c->r[4]=c->r[3]|c->r[3]; // 801C37EC
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C37F0
  c->r[3]=c->r[30]+0x000008D0u; // 801C37F4
  {uint32_t ea=c->r[2]+0xFFFFB790u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C37F8
  c->r[5]=0u+0x00000000u; // 801C37FC
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3800
  c->r[6]=0u+0xFFFFFFFFu; // 801C3804
  c->r[7]=0u+0x00000000u; // 801C3808
  c->lr=0x801C3810u; f_8002D7B8(c); // 801C380C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C3810
  c->r[3]=c->r[30]+0x000008D0u; // 801C3814
  c->r[4]=c->r[1]+0x0000005Cu; // 801C3818
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C381C
  c->ctr=c->r[12]; // 801C3820
  if (true) { c->lr=0x801C3828u; dispatch(c,c->ctr); } // 801C3824
  c->r[0]=0u+0x0000003Fu; // 801C3828
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C382C
  goto L_801C38F4; // 801C3830
L_801C3834:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C3834
  c->r[4]=c->r[30]+0x000008D0u; // 801C3838
  c->r[3]=c->r[1]+0x0000002Cu; // 801C383C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C3840
  c->ctr=c->r[12]; // 801C3844
  if (true) { c->lr=0x801C384Cu; dispatch(c,c->ctr); } // 801C3848
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C384C
  c->r[3]=c->r[1]+0x00000020u; // 801C3850
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3854
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3858
  c->lr=0x801C3860u; f_800521A0(c); // 801C385C
  c->r[3]=c->r[30]+0x00002000u; // 801C3860
  c->r[4]=c->r[1]+0x00000020u; // 801C3864
  c->lr=0x801C386Cu; f_8003F468(c); // 801C3868
  c->r[3]=c->r[1]+0x00000020u; // 801C386C
  c->r[5]=c->r[30]+0x00001FC8u; // 801C3870
  c->r[4]=c->r[3]|c->r[3]; // 801C3874
  c->lr=0x801C387Cu; f_80064C34(c); // 801C3878
  c->r[3]=c->r[1]+0x0000002Cu; // 801C387C
  c->r[4]=c->r[1]+0x00000020u; // 801C3880
  c->lr=0x801C3888u; f_80032FF4(c); // 801C3884
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C3888
  c->r[3]=c->r[30]+0x000008D0u; // 801C388C
  c->r[4]=c->r[1]+0x0000002Cu; // 801C3890
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C3894
  c->ctr=c->r[12]; // 801C3898
  if (true) { c->lr=0x801C38A0u; dispatch(c,c->ctr); } // 801C389C
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C38A0
  c->r[3]=c->r[1]+0x00000014u; // 801C38A4
  {uint32_t ea=c->r[2]+0xFFFFB7CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C38A8
  c->f[3]=c->f[1]; // 801C38AC
  c->lr=0x801C38B4u; f_800521A0(c); // 801C38B0
  c->r[4]=c->r[3]|c->r[3]; // 801C38B4
  c->r[3]=c->r[30]+0x00001FBCu; // 801C38B8
  c->lr=0x801C38C0u; f_8003F468(c); // 801C38BC
  c->r[3]=c->r[30]+0x00001FD4u; // 801C38C0
  c->r[4]=c->r[30]+0x00001FBCu; // 801C38C4
  c->lr=0x801C38CCu; f_8003F468(c); // 801C38C8
  c->r[5]=0u+0x804D0000u; // 801C38CC
  c->r[3]=c->r[1]+0x00000008u; // 801C38D0
  c->r[5]=c->r[5]+0x00003318u; // 801C38D4
  c->r[4]=c->r[30]+0x00001FD4u; // 801C38D8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C38DC
  c->lr=0x801C38E4u; f_80064C58(c); // 801C38E0
  c->r[3]=c->r[30]+0x00001FC8u; // 801C38E4
  c->r[5]=c->r[1]+0x00000008u; // 801C38E8
  c->r[4]=c->r[3]|c->r[3]; // 801C38EC
  c->lr=0x801C38F4u; f_80064C34(c); // 801C38F0
L_801C38F4:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C38F4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801C38F8
  c->r[30]=R32(c->r[1]+0x00000098u); // 801C38FC
  c->lr=c->r[0]; // 801C3900
  c->r[1]=c->r[1]+0x000000A0u; // 801C3904
  return; // 801C3908
}

// fn_801C390C
void f_801C390C(Ctx* __restrict c) {
  trace_call(0x801C390Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C390C
  c->r[0]=c->lr; // 801C3910
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3914
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C3918
  c->r[31]=c->r[4]|c->r[4]; // 801C391C
  c->r[30]=c->r[3]|c->r[3]; // 801C3920
  c->r[4]=c->r[5]|c->r[5]; // 801C3924
  c->lr=0x801C392Cu; f_801C3A7C(c); // 801C3928
  cmps(c,0,(int32_t)c->r[31],20); // 801C392C
  W16(c->r[30]+0x00001FA2u,c->r[31]); // 801C3930
  if (crb(c,2)) { goto L_801C399C; } // 801C3934
  if (!crb(c,0)) { goto L_801C3954; } // 801C3938
  cmps(c,0,(int32_t)c->r[31],10); // 801C393C
  if (crb(c,2)) { goto L_801C3988; } // 801C3940
  if (!crb(c,0)) { goto L_801C39AC; } // 801C3944
  cmps(c,0,(int32_t)c->r[31],0); // 801C3948
  if (crb(c,2)) { goto L_801C3960; } // 801C394C
  goto L_801C39AC; // 801C3950
L_801C3954:;
  cmps(c,0,(int32_t)c->r[31],30); // 801C3954
  if (crb(c,2)) { goto L_801C3974; } // 801C3958
  goto L_801C39AC; // 801C395C
L_801C3960:;
  c->r[0]=0u+0x00000000u; // 801C3960
  c->r[3]=c->r[30]|c->r[30]; // 801C3964
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801C3968
  c->lr=0x801C3970u; f_800AC8F8(c); // 801C396C
  goto L_801C39AC; // 801C3970
L_801C3974:;
  c->r[0]=0u+0x0000001Eu; // 801C3974
  c->r[3]=c->r[30]|c->r[30]; // 801C3978
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801C397C
  c->lr=0x801C3984u; f_800AC8F8(c); // 801C3980
  goto L_801C39AC; // 801C3984
L_801C3988:;
  c->r[0]=0u+0x0000000Au; // 801C3988
  c->r[3]=c->r[30]|c->r[30]; // 801C398C
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801C3990
  c->lr=0x801C3998u; f_800AC668(c); // 801C3994
  goto L_801C39AC; // 801C3998
L_801C399C:;
  c->r[0]=0u+0x00000014u; // 801C399C
  c->r[3]=c->r[30]|c->r[30]; // 801C39A0
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801C39A4
  c->lr=0x801C39ACu; f_800AC668(c); // 801C39A8
L_801C39AC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C39AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C39B0
  c->lr=c->r[0]; // 801C39B4
  c->r[1]=c->r[1]+0x00000010u; // 801C39B8
  return; // 801C39BC
}

// fn_801C39C0
void f_801C39C0(Ctx* __restrict c) {
  trace_call(0x801C39C0u);
  {uint32_t ea=c->r[2]+0xFFFFB7BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C39C0
  c->r[4]=0u+0x804D0000u; // 801C39C4
  c->r[4]=c->r[4]+0x00003318u; // 801C39C8
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 801C39CC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C39D0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 801C39D4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 801C39D8
  c->f[2]=c->ps1[2]=S(c->f[4]/c->f[5]); // 801C39DC
  {uint32_t ea=c->r[3]+0x00001FF4u; WF32(ea,c->f[2]);} // 801C39E0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C39E4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801C39E8
  {uint32_t ea=c->r[3]+0x00001FF8u; WF32(ea,c->f[1]);} // 801C39EC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C39F0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801C39F4
  {uint32_t ea=c->r[3]+0x00001FFCu; WF32(ea,c->f[0]);} // 801C39F8
  return; // 801C39FC
}

// fn_801C3A00
void f_801C3A00(Ctx* __restrict c) {
  trace_call(0x801C3A00u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C3A00
  cmps(c,0,(int32_t)c->r[0],20); // 801C3A04
  if (crb(c,2)) { goto L_801C3A58; } // 801C3A08
  if (!crb(c,0)) { goto L_801C3A28; } // 801C3A0C
  cmps(c,0,(int32_t)c->r[0],10); // 801C3A10
  if (crb(c,2)) { goto L_801C3A4C; } // 801C3A14
  if (!crb(c,0)) return; // 801C3A18
  cmps(c,0,(int32_t)c->r[0],0); // 801C3A1C
  if (crb(c,2)) { goto L_801C3A40; } // 801C3A20
  return; // 801C3A24
L_801C3A28:;
  cmps(c,0,(int32_t)c->r[0],50); // 801C3A28
  if (crb(c,2)) { goto L_801C3A70; } // 801C3A2C
  if (!crb(c,0)) return; // 801C3A30
  cmps(c,0,(int32_t)c->r[0],30); // 801C3A34
  if (crb(c,2)) { goto L_801C3A64; } // 801C3A38
  return; // 801C3A3C
L_801C3A40:;
  c->r[0]=0u+0x00000001u; // 801C3A40
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C3A44
  return; // 801C3A48
L_801C3A4C:;
  c->r[0]=0u+0x0000000Du; // 801C3A4C
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C3A50
  return; // 801C3A54
L_801C3A58:;
  c->r[0]=R16(c->r[3]+0x00001FAEu); // 801C3A58
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C3A5C
  return; // 801C3A60
L_801C3A64:;
  c->r[0]=0u+0x00000014u; // 801C3A64
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C3A68
  f_800AC668(c); return; // 801C3A6C
L_801C3A70:;
  c->r[0]=R16(c->r[3]+0x00001FB4u); // 801C3A70
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C3A74
  return; // 801C3A78
}

// fn_801C3A7C
void f_801C3A7C(Ctx* __restrict c) {
  trace_call(0x801C3A7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3A7C
  c->r[0]=c->lr; // 801C3A80
  cmps(c,0,(int32_t)c->r[4],0); // 801C3A84
  W32(c->r[1]+0x00000074u,c->r[0]); // 801C3A88
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801C3A8C
  c->r[31]=c->r[3]|c->r[3]; // 801C3A90
  if (crb(c,2)) { goto L_801C3B0C; } // 801C3A94
  c->r[3]=c->r[3]+0x000008A4u; // 801C3A98
  c->lr=0x801C3AA0u; f_800B9BCC(c); // 801C3A9C
  c->r[0]=R32(c->r[31]+0x000008C4u); // 801C3AA0
  cmps(c,0,(int32_t)c->r[0],1); // 801C3AA4
  if (!crb(c,1)) { goto L_801C3ACC; } // 801C3AA8
  c->r[5]=R32(c->r[31]+0x000008A4u); // 801C3AAC
  c->r[3]=c->r[1]+0x00000008u; // 801C3AB0
  c->r[4]=c->r[5]+0x0000001Cu; // 801C3AB4
  c->lr=0x801C3ABCu; f_8007B8A4(c); // 801C3AB8
  c->r[3]=c->r[1]+0x00000014u; // 801C3ABC
  c->r[4]=c->r[1]+0x00000008u; // 801C3AC0
  c->lr=0x801C3AC8u; f_8003F468(c); // 801C3AC4
  goto L_801C3AE0; // 801C3AC8
L_801C3ACC:;
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3ACC
  c->r[3]=c->r[1]+0x00000014u; // 801C3AD0
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3AD4
  c->f[3]=c->f[2]; // 801C3AD8
  c->lr=0x801C3AE0u; f_80065358(c); // 801C3ADC
L_801C3AE0:;
  c->r[3]=c->r[1]+0x00000014u; // 801C3AE0
  c->lr=0x801C3AE8u; f_80065368(c); // 801C3AE4
  cmps(c,0,(int32_t)c->r[3],0); // 801C3AE8
  if (!crb(c,2)) { goto L_801C3AFC; } // 801C3AEC
  c->r[3]=c->r[1]+0x00000014u; // 801C3AF0
  c->r[4]=c->r[3]|c->r[3]; // 801C3AF4
  c->lr=0x801C3AFCu; f_80265750(c); // 801C3AF8
L_801C3AFC:;
  c->r[4]=R32(c->r[31]+0x000008A4u); // 801C3AFC
  c->r[3]=c->r[1]+0x00000020u; // 801C3B00
  c->lr=0x801C3B08u; f_8003F468(c); // 801C3B04
  goto L_801C3B34; // 801C3B08
L_801C3B0C:;
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3B0C
  c->r[3]=c->r[1]+0x00000020u; // 801C3B10
  c->f[2]=c->f[1]; // 801C3B14
  c->f[3]=c->f[1]; // 801C3B18
  c->lr=0x801C3B20u; f_80065358(c); // 801C3B1C
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3B20
  c->r[3]=c->r[1]+0x00000014u; // 801C3B24
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3B28
  c->f[3]=c->f[2]; // 801C3B2C
  c->lr=0x801C3B34u; f_80065358(c); // 801C3B30
L_801C3B34:;
  c->r[3]=c->r[1]+0x0000002Cu; // 801C3B34
  c->r[4]=c->r[1]+0x00000014u; // 801C3B38
  c->lr=0x801C3B40u; f_8007513C(c); // 801C3B3C
  c->r[3]=c->r[1]+0x0000002Cu; // 801C3B40
  c->r[4]=c->r[1]+0x00000020u; // 801C3B44
  c->lr=0x801C3B4Cu; f_80032FF4(c); // 801C3B48
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C3B4C
  c->r[3]=c->r[31]+0x000008D0u; // 801C3B50
  c->r[4]=c->r[1]+0x0000002Cu; // 801C3B54
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C3B58
  c->ctr=c->r[12]; // 801C3B5C
  if (true) { c->lr=0x801C3B64u; dispatch(c,c->ctr); } // 801C3B60
  c->r[0]=R32(c->r[1]+0x00000074u); // 801C3B64
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801C3B68
  c->lr=c->r[0]; // 801C3B6C
  c->r[1]=c->r[1]+0x00000070u; // 801C3B70
  return; // 801C3B74
}

// fn_801C3B78
void f_801C3B78(Ctx* __restrict c) {
  trace_call(0x801C3B78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3B78
  c->r[0]=c->lr; // 801C3B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3B80
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801C3B84
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C3B88
  c->r[30]=c->r[4]|c->r[4]; // 801C3B8C
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801C3B90
  c->lr=0x801C3B98u; f_80067C50(c); // 801C3B94
  cmps(c,0,(int32_t)c->r[3],1); // 801C3B98
  if (!crb(c,2)) { goto L_801C3BE8; } // 801C3B9C
  c->r[31]=c->r[13]+0xFFFF94B8u; // 801C3BA0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C3BA4
  c->lr=0x801C3BACu; f_80067C50(c); // 801C3BA8
  cmps(c,0,(int32_t)c->r[3],1); // 801C3BAC
  if (!crb(c,2)) { goto L_801C3BDC; } // 801C3BB0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C3BB4
  c->lr=0x801C3BBCu; f_80067C84(c); // 801C3BB8
  c->f[31]=c->f[1]; // 801C3BBC
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801C3BC0
  c->lr=0x801C3BC8u; f_80067C84(c); // 801C3BC4
  fcmp(c,0,c->f[1],c->f[31]); // 801C3BC8
  c->r[0]=c->cr; // 801C3BCC
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 801C3BD0
  W32(c->r[30]+0x00000024u,c->r[0]); // 801C3BD4
  goto L_801C3C04; // 801C3BD8
L_801C3BDC:;
  c->r[0]=0u+0x00000000u; // 801C3BDC
  W32(c->r[30]+0x00000024u,c->r[0]); // 801C3BE0
  goto L_801C3C04; // 801C3BE4
L_801C3BE8:;
  c->r[3]=c->r[13]+0xFFFF94B8u; // 801C3BE8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C3BEC
  c->lr=0x801C3BF4u; f_80067C50(c); // 801C3BF0
  cmps(c,0,(int32_t)c->r[3],1); // 801C3BF4
  if (!crb(c,2)) { goto L_801C3C04; } // 801C3BF8
  c->r[0]=0u+0x00000001u; // 801C3BFC
  W32(c->r[30]+0x00000024u,c->r[0]); // 801C3C00
L_801C3C04:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801C3C04
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C3C08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3C0C
  c->lr=c->r[0]; // 801C3C10
  c->r[1]=c->r[1]+0x00000020u; // 801C3C14
  return; // 801C3C18
}

// fn_801C3C1C
void f_801C3C1C(Ctx* __restrict c) {
  trace_call(0x801C3C1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3C1C
  c->r[0]=c->lr; // 801C3C20
  c->r[4]=c->r[3]|c->r[3]; // 801C3C24
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C3C28
  c->r[3]=c->r[1]+0x00000020u; // 801C3C2C
  {uint32_t ea=c->r[4]+0x000008D0u; c->r[12]=R32(ea); c->r[4]=ea;} // 801C3C30
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C3C34
  c->ctr=c->r[12]; // 801C3C38
  if (true) { c->lr=0x801C3C40u; dispatch(c,c->ctr); } // 801C3C3C
  c->r[3]=c->r[1]+0x00000014u; // 801C3C40
  c->r[4]=c->r[1]+0x00000020u; // 801C3C44
  c->lr=0x801C3C4Cu; f_80032FD8(c); // 801C3C48
  c->lr=0x801C3C50u; f_80061A4C(c); // 801C3C4C
  c->r[4]=c->r[3]|c->r[3]; // 801C3C50
  c->r[3]=c->r[1]+0x00000008u; // 801C3C54
  c->r[4]=c->r[4]+0x00000384u; // 801C3C58
  c->r[5]=c->r[1]+0x00000014u; // 801C3C5C
  c->lr=0x801C3C64u; f_8007B8A4(c); // 801C3C60
  c->r[3]=c->r[1]+0x00000008u; // 801C3C64
  c->lr=0x801C3C6Cu; f_802657AC(c); // 801C3C68
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C3C6C
  c->lr=c->r[0]; // 801C3C70
  c->r[1]=c->r[1]+0x00000050u; // 801C3C74
  return; // 801C3C78
}

// fn_801C3C7C
void f_801C3C7C(Ctx* __restrict c) {
  trace_call(0x801C3C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3C7C
  c->r[0]=c->lr; // 801C3C80
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801C3C84
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 801C3C88
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 801C3C8C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 801C3C90
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 801C3C94
  c->r[11]=c->r[1]+0x000000D0u; // 801C3C98
  c->lr=0x801C3CA0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3C9C
  c->r[12]=R32(c->r[4]+0x000008D0u); // 801C3CA0
  c->f[30]=c->f[1]; // 801C3CA4
  c->r[29]=c->r[3]|c->r[3]; // 801C3CA8
  c->r[30]=c->r[4]|c->r[4]; // 801C3CAC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C3CB0
  c->r[31]=c->r[5]|c->r[5]; // 801C3CB4
  c->ctr=c->r[12]; // 801C3CB8
  c->r[4]=c->r[4]+0x000008D0u; // 801C3CBC
  if (true) { c->lr=0x801C3CC4u; dispatch(c,c->ctr); } // 801C3CC0
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3CC4
  c->r[3]=c->r[1]+0x000000A8u; // 801C3CC8
  {uint32_t ea=c->r[29]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3CCC
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3CD0
  c->lr=0x801C3CD8u; f_800521A0(c); // 801C3CD4
  c->lr=0x801C3CDCu; f_80061A4C(c); // 801C3CD8
  c->r[4]=c->r[3]|c->r[3]; // 801C3CDC
  c->r[3]=c->r[1]+0x0000009Cu; // 801C3CE0
  c->r[4]=c->r[4]+0x00000384u; // 801C3CE4
  c->lr=0x801C3CECu; f_8003F484(c); // 801C3CE8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3CEC
  c->r[3]=c->r[1]+0x00000090u; // 801C3CF0
  {uint32_t ea=c->r[29]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3CF4
  {uint32_t ea=c->r[29]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3CF8
  c->lr=0x801C3D00u; f_800521A0(c); // 801C3CFC
  c->r[5]=c->r[31]|c->r[31]; // 801C3D00
  c->r[3]=c->r[1]+0x00000030u; // 801C3D04
  c->r[4]=c->r[1]+0x0000009Cu; // 801C3D08
  c->lr=0x801C3D10u; f_80064C34(c); // 801C3D0C
  c->r[3]=c->r[1]+0x00000084u; // 801C3D10
  c->r[4]=c->r[1]+0x00000030u; // 801C3D14
  c->r[5]=c->r[1]+0x000000A8u; // 801C3D18
  c->lr=0x801C3D20u; f_8007B8A4(c); // 801C3D1C
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801C3D20
  goto L_801C3D5C; // 801C3D24
L_801C3D28:;
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D28
  fcmp(c,0,c->f[31],c->f[0]); // 801C3D2C
  if (!crb(c,2)) { goto L_801C3D4C; } // 801C3D30
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D34
  fcmp(c,0,c->f[31],c->f[0]); // 801C3D38
  if (!crb(c,2)) { goto L_801C3D4C; } // 801C3D3C
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D40
  fcmp(c,0,c->f[31],c->f[0]); // 801C3D44
  if (crb(c,2)) { goto L_801C3D6C; } // 801C3D48
L_801C3D4C:;
  c->r[3]=c->r[1]+0x00000084u; // 801C3D4C
  {uint32_t ea=c->r[2]+0xFFFFB7ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3D50
  c->r[4]=c->r[3]|c->r[3]; // 801C3D54
  c->lr=0x801C3D5Cu; f_80064C58(c); // 801C3D58
L_801C3D5C:;
  c->r[3]=c->r[1]+0x00000084u; // 801C3D5C
  c->lr=0x801C3D64u; f_80065368(c); // 801C3D60
  cmps(c,0,(int32_t)c->r[3],0); // 801C3D64
  if (!crb(c,2)) { IRQCHK(c); goto L_801C3D28; } // 801C3D68
L_801C3D6C:;
  c->r[3]=c->r[1]+0x00000084u; // 801C3D6C
  c->lr=0x801C3D74u; f_80065368(c); // 801C3D70
  cmps(c,0,(int32_t)c->r[3],0); // 801C3D74
  if (!crb(c,2)) { goto L_801C3D88; } // 801C3D78
  c->r[3]=c->r[1]+0x00000084u; // 801C3D7C
  c->r[4]=c->r[3]|c->r[3]; // 801C3D80
  c->lr=0x801C3D88u; f_80265750(c); // 801C3D84
L_801C3D88:;
  {uint32_t ea=c->r[2]+0xFFFFB7D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3D88
  c->r[3]=c->r[1]+0x00000024u; // 801C3D8C
  c->r[4]=c->r[1]+0x00000090u; // 801C3D90
  c->lr=0x801C3D98u; f_80064C58(c); // 801C3D94
  c->r[3]=c->r[1]+0x00000078u; // 801C3D98
  c->r[4]=c->r[1]+0x00000024u; // 801C3D9C
  c->r[5]=c->r[1]+0x00000084u; // 801C3DA0
  c->lr=0x801C3DA8u; f_80064C34(c); // 801C3DA4
  c->r[3]=c->r[1]+0x00000078u; // 801C3DA8
  c->lr=0x801C3DB0u; f_80065368(c); // 801C3DAC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3DB0
  if (!crb(c,2)) { goto L_801C3DC4; } // 801C3DB4
  c->r[3]=c->r[1]+0x00000078u; // 801C3DB8
  c->r[4]=c->r[3]|c->r[3]; // 801C3DBC
  c->lr=0x801C3DC4u; f_80265750(c); // 801C3DC0
L_801C3DC4:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3DC4
  c->r[3]=c->r[30]|c->r[30]; // 801C3DC8
  c->r[4]=c->r[1]+0x00000008u; // 801C3DCC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C3DD0
  c->lr=0x801C3DD8u; f_801C4438(c); // 801C3DD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3DD8
  c->r[3]=c->r[1]+0x00000018u; // 801C3DDC
  c->r[4]=c->r[1]+0x00000078u; // 801C3DE0
  c->lr=0x801C3DE8u; f_80064C58(c); // 801C3DE4
  c->r[3]=c->r[1]+0x0000006Cu; // 801C3DE8
  c->r[4]=c->r[1]+0x000000A8u; // 801C3DEC
  c->r[5]=c->r[1]+0x00000018u; // 801C3DF0
  c->lr=0x801C3DF8u; f_80064C34(c); // 801C3DF4
  c->r[3]=c->r[1]+0x00000060u; // 801C3DF8
  c->r[4]=c->r[1]+0x000000A8u; // 801C3DFC
  c->r[5]=c->r[1]+0x0000009Cu; // 801C3E00
  c->lr=0x801C3E08u; f_8007B8A4(c); // 801C3E04
  c->r[3]=c->r[1]+0x00000054u; // 801C3E08
  c->r[4]=c->r[1]+0x000000A8u; // 801C3E0C
  c->r[5]=c->r[1]+0x0000006Cu; // 801C3E10
  c->lr=0x801C3E18u; f_8007B8A4(c); // 801C3E14
  c->r[3]=c->r[1]+0x00000054u; // 801C3E18
  c->lr=0x801C3E20u; f_802657AC(c); // 801C3E1C
  c->f[31]=c->f[1]; // 801C3E20
  c->r[3]=c->r[1]+0x00000060u; // 801C3E24
  c->lr=0x801C3E2Cu; f_802657AC(c); // 801C3E28
  fcmp(c,0,c->f[1],c->f[31]); // 801C3E2C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3E30
  if (!crb(c,2)) { goto L_801C3EB8; } // 801C3E34
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3E38
  fcmp(c,0,c->f[30],c->f[0]); // 801C3E3C
  if (!crb(c,0)) { goto L_801C3E48; } // 801C3E40
  goto L_801C3ED8; // 801C3E44
L_801C3E48:;
  c->r[3]=c->r[1]+0x00000048u; // 801C3E48
  c->r[4]=c->r[1]+0x000000A8u; // 801C3E4C
  c->r[5]=c->r[1]+0x00000078u; // 801C3E50
  c->lr=0x801C3E58u; f_80064C34(c); // 801C3E54
  c->r[3]=c->r[1]+0x0000003Cu; // 801C3E58
  c->r[4]=c->r[1]+0x0000009Cu; // 801C3E5C
  c->r[5]=c->r[1]+0x00000048u; // 801C3E60
  c->lr=0x801C3E68u; f_8007B8A4(c); // 801C3E64
  goto L_801C3E98; // 801C3E68
L_801C3E6C:;
  c->r[3]=c->r[1]+0x00000048u; // 801C3E6C
  c->r[5]=c->r[1]+0x00000078u; // 801C3E70
  c->r[4]=c->r[3]|c->r[3]; // 801C3E74
  c->lr=0x801C3E7Cu; f_80064C34(c); // 801C3E78
  c->r[3]=c->r[1]+0x0000000Cu; // 801C3E7C
  c->r[4]=c->r[1]+0x0000009Cu; // 801C3E80
  c->r[5]=c->r[1]+0x00000048u; // 801C3E84
  c->lr=0x801C3E8Cu; f_8007B8A4(c); // 801C3E88
  c->r[3]=c->r[1]+0x0000003Cu; // 801C3E8C
  c->r[4]=c->r[1]+0x0000000Cu; // 801C3E90
  c->lr=0x801C3E98u; f_8003F468(c); // 801C3E94
L_801C3E98:;
  c->r[3]=c->r[1]+0x0000003Cu; // 801C3E98
  c->lr=0x801C3EA0u; f_802657AC(c); // 801C3E9C
  fcmp(c,0,c->f[1],c->f[30]); // 801C3EA0
  if (crb(c,1)) { IRQCHK(c); goto L_801C3E6C; } // 801C3EA4
  c->r[3]=c->r[29]|c->r[29]; // 801C3EA8
  c->r[4]=c->r[1]+0x00000048u; // 801C3EAC
  c->lr=0x801C3EB4u; f_80032FF4(c); // 801C3EB0
  goto L_801C3ED8; // 801C3EB4
L_801C3EB8:;
  c->r[3]=c->r[29]|c->r[29]; // 801C3EB8
  c->lr=0x801C3EC0u; f_80264680(c); // 801C3EBC
  c->r[3]=c->r[29]|c->r[29]; // 801C3EC0
  c->r[4]=c->r[1]+0x00000078u; // 801C3EC4
  c->lr=0x801C3ECCu; f_8007513C(c); // 801C3EC8
  c->r[3]=c->r[29]|c->r[29]; // 801C3ECC
  c->r[4]=c->r[1]+0x0000006Cu; // 801C3ED0
  c->lr=0x801C3ED8u; f_80032FF4(c); // 801C3ED4
L_801C3ED8:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 801C3ED8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 801C3EDC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 801C3EE0
  c->r[11]=c->r[1]+0x000000D0u; // 801C3EE4
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 801C3EE8
  c->lr=0x801C3EF0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3EEC
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801C3EF0
  c->lr=c->r[0]; // 801C3EF4
  c->r[1]=c->r[1]+0x000000F0u; // 801C3EF8
  return; // 801C3EFC
}

// fn_801C3F00
void f_801C3F00(Ctx* __restrict c) {
  trace_call(0x801C3F00u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3F00
  c->r[0]=c->lr; // 801C3F04
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801C3F08
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 801C3F0C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 801C3F10
  c->r[11]=c->r[1]+0x000000D0u; // 801C3F14
  c->lr=0x801C3F1Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3F18
  c->r[12]=R32(c->r[3]+0x000008D0u); // 801C3F1C
  c->r[28]=c->r[3]|c->r[3]; // 801C3F20
  c->r[31]=c->r[4]|c->r[4]; // 801C3F24
  c->r[29]=c->r[5]|c->r[5]; // 801C3F28
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C3F2C
  c->r[4]=c->r[28]+0x000008D0u; // 801C3F30
  c->r[30]=c->r[6]|c->r[6]; // 801C3F34
  c->r[3]=c->r[1]+0x00000084u; // 801C3F38
  c->ctr=c->r[12]; // 801C3F3C
  if (true) { c->lr=0x801C3F44u; dispatch(c,c->ctr); } // 801C3F40
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3F44
  c->r[3]=c->r[1]+0x00000078u; // 801C3F48
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3F4C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3F50
  c->lr=0x801C3F58u; f_800521A0(c); // 801C3F54
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3F58
  c->r[3]=c->r[1]+0x0000006Cu; // 801C3F5C
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3F60
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3F64
  c->lr=0x801C3F6Cu; f_800521A0(c); // 801C3F68
  c->r[4]=c->r[31]|c->r[31]; // 801C3F6C
  c->r[3]=c->r[1]+0x00000060u; // 801C3F70
  c->r[5]=c->r[1]+0x00000078u; // 801C3F74
  c->lr=0x801C3F7Cu; f_8007B8A4(c); // 801C3F78
  c->r[3]=c->r[1]+0x00000060u; // 801C3F7C
  c->lr=0x801C3F84u; f_80065368(c); // 801C3F80
  cmps(c,0,(int32_t)c->r[3],0); // 801C3F84
  if (!crb(c,2)) { goto L_801C3F98; } // 801C3F88
  c->r[3]=c->r[1]+0x00000060u; // 801C3F8C
  c->r[4]=c->r[3]|c->r[3]; // 801C3F90
  c->lr=0x801C3F98u; f_80265750(c); // 801C3F94
L_801C3F98:;
  c->r[3]=c->r[1]+0x00000060u; // 801C3F98
  c->r[4]=c->r[1]+0x0000006Cu; // 801C3F9C
  c->lr=0x801C3FA4u; f_800653BC(c); // 801C3FA0
  {uint32_t ea=c->r[2]+0xFFFFB7D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3FA4
  fcmp(c,0,c->f[1],c->f[0]); // 801C3FA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3FAC
  if (!crb(c,2)) { goto L_801C3FC4; } // 801C3FB0
  c->r[3]=c->r[1]+0x00000054u; // 801C3FB4
  c->r[4]=c->r[1]+0x00000060u; // 801C3FB8
  c->lr=0x801C3FC0u; f_8003F468(c); // 801C3FBC
  goto L_801C4030; // 801C3FC0
L_801C3FC4:;
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3FC4
  fcmp(c,0,c->f[1],c->f[0]); // 801C3FC8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3FCC
  if (!crb(c,2)) { goto L_801C4004; } // 801C3FD0
  {uint32_t ea=c->r[2]+0xFFFFB7BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3FD4
  c->r[3]=c->r[1]+0x00000030u; // 801C3FD8
  c->r[4]=c->r[1]+0x0000006Cu; // 801C3FDC
  c->lr=0x801C3FE4u; f_80064C58(c); // 801C3FE0
  c->r[3]=c->r[1]+0x0000003Cu; // 801C3FE4
  c->r[4]=c->r[1]+0x00000030u; // 801C3FE8
  c->r[5]=c->r[1]+0x00000060u; // 801C3FEC
  c->lr=0x801C3FF4u; f_80064C34(c); // 801C3FF0
  c->r[3]=c->r[1]+0x00000054u; // 801C3FF4
  c->r[4]=c->r[1]+0x0000003Cu; // 801C3FF8
  c->lr=0x801C4000u; f_8003F468(c); // 801C3FFC
  goto L_801C4030; // 801C4000
L_801C4004:;
  {uint32_t ea=c->r[2]+0xFFFFB7D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4004
  c->r[3]=c->r[1]+0x00000018u; // 801C4008
  c->r[4]=c->r[1]+0x0000006Cu; // 801C400C
  c->lr=0x801C4014u; f_80064C58(c); // 801C4010
  c->r[3]=c->r[1]+0x00000024u; // 801C4014
  c->r[4]=c->r[1]+0x00000018u; // 801C4018
  c->r[5]=c->r[1]+0x00000060u; // 801C401C
  c->lr=0x801C4024u; f_80064C34(c); // 801C4020
  c->r[3]=c->r[1]+0x00000054u; // 801C4024
  c->r[4]=c->r[1]+0x00000024u; // 801C4028
  c->lr=0x801C4030u; f_8003F468(c); // 801C402C
L_801C4030:;
  c->r[3]=c->r[1]+0x00000054u; // 801C4030
  c->lr=0x801C4038u; f_80065368(c); // 801C4034
  cmps(c,0,(int32_t)c->r[3],0); // 801C4038
  if (!crb(c,2)) { goto L_801C404C; } // 801C403C
  c->r[3]=c->r[1]+0x00000054u; // 801C4040
  c->r[4]=c->r[3]|c->r[3]; // 801C4044
  c->lr=0x801C404Cu; f_80265750(c); // 801C4048
L_801C404C:;
  c->r[3]=c->r[1]+0x00000084u; // 801C404C
  c->lr=0x801C4054u; f_80264680(c); // 801C4050
  c->r[3]=c->r[1]+0x00000084u; // 801C4054
  c->r[4]=c->r[1]+0x00000054u; // 801C4058
  c->lr=0x801C4060u; f_8007513C(c); // 801C405C
  c->r[4]=c->r[31]|c->r[31]; // 801C4060
  c->r[3]=c->r[1]+0x0000000Cu; // 801C4064
  c->r[5]=c->r[1]+0x00000078u; // 801C4068
  c->lr=0x801C4070u; f_8007B8A4(c); // 801C406C
  c->r[3]=c->r[1]+0x00000060u; // 801C4070
  c->r[4]=c->r[1]+0x0000000Cu; // 801C4074
  c->lr=0x801C407Cu; f_8003F468(c); // 801C4078
  {uint32_t ea=c->r[28]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C407C
  c->r[3]=c->r[28]|c->r[28]; // 801C4080
  c->r[4]=c->r[1]+0x00000008u; // 801C4084
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C4088
  c->lr=0x801C4090u; f_801C4438(c); // 801C408C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4090
  c->r[3]=c->r[1]+0x00000048u; // 801C4094
  c->r[4]=c->r[1]+0x00000054u; // 801C4098
  c->lr=0x801C40A0u; f_80064C58(c); // 801C409C
  c->r[3]=c->r[1]+0x00000048u; // 801C40A0
  c->lr=0x801C40A8u; f_802657AC(c); // 801C40A4
  c->f[31]=c->f[1]; // 801C40A8
  c->r[3]=c->r[1]+0x00000060u; // 801C40AC
  c->lr=0x801C40B4u; f_802657AC(c); // 801C40B0
  fcmp(c,0,c->f[1],c->f[31]); // 801C40B4
  if (!crb(c,0)) { goto L_801C40D8; } // 801C40B8
  c->r[4]=c->r[31]|c->r[31]; // 801C40BC
  c->r[3]=c->r[1]+0x00000078u; // 801C40C0
  c->lr=0x801C40C8u; f_8003F468(c); // 801C40C4
  c->r[0]=0u+0x00000000u; // 801C40C8
  c->r[31]=0u+0x00000001u; // 801C40CC
  W8(c->r[30]+0x00000000u,c->r[0]); // 801C40D0
  goto L_801C4104; // 801C40D4
L_801C40D8:;
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C40D8
  {uint32_t ea=c->r[2]+0xFFFFB7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C40DC
  fcmp(c,0,c->f[1],c->f[0]); // 801C40E0
  c->r[0]=c->cr; // 801C40E4
  c->r[3]=c->r[1]+0x00000078u; // 801C40E8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C40EC
  c->r[5]=c->r[1]+0x00000048u; // 801C40F0
  W8(c->r[30]+0x00000000u,c->r[0]); // 801C40F4
  c->r[4]=c->r[3]|c->r[3]; // 801C40F8
  c->lr=0x801C4100u; f_80064C34(c); // 801C40FC
  c->r[31]=0u+0x00000000u; // 801C4100
L_801C4104:;
  c->r[3]=c->r[1]+0x00000084u; // 801C4104
  c->r[4]=c->r[1]+0x00000078u; // 801C4108
  c->lr=0x801C4110u; f_80032FF4(c); // 801C410C
  c->r[0]=0u+0x00000006u; // 801C4110
  c->r[5]=c->r[29]+0xFFFFFFFCu; // 801C4114
  c->r[4]=c->r[1]+0x00000080u; // 801C4118
  c->ctr=c->r[0]; // 801C411C
L_801C4120:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801C4120
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801C4124
  W32(c->r[5]+0x00000004u,c->r[3]); // 801C4128
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801C412C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4120; } // 801C4130
  c->r[3]=c->r[31]|c->r[31]; // 801C4134
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 801C4138
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 801C413C
  c->r[11]=c->r[1]+0x000000D0u; // 801C4140
  c->lr=0x801C4148u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C4144
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801C4148
  c->lr=c->r[0]; // 801C414C
  c->r[1]=c->r[1]+0x000000E0u; // 801C4150
  return; // 801C4154
}

// fn_801C4158
void f_801C4158(Ctx* __restrict c) {
  trace_call(0x801C4158u);
  {uint32_t ea=c->r[1]+0xFFFFF130u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4158
  c->r[0]=c->lr; // 801C415C
  W32(c->r[1]+0x00000ED4u,c->r[0]); // 801C4160
  c->r[11]=c->r[1]+0x00000ED0u; // 801C4164
  c->lr=0x801C416Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C4168
  c->r[27]=c->r[3]|c->r[3]; // 801C416C
  c->r[28]=c->r[4]|c->r[4]; // 801C4170
  c->r[3]=c->r[1]+0x00000050u; // 801C4174
  c->r[4]=c->r[27]+0x00002000u; // 801C4178
  c->lr=0x801C4180u; f_8003F484(c); // 801C417C
  c->r[12]=R32(c->r[27]+0x000008D0u); // 801C4180
  c->r[4]=c->r[27]+0x000008D0u; // 801C4184
  c->r[3]=c->r[1]+0x0000008Cu; // 801C4188
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C418C
  c->ctr=c->r[12]; // 801C4190
  if (true) { c->lr=0x801C4198u; dispatch(c,c->ctr); } // 801C4194
  c->r[3]=c->r[1]+0x00000044u; // 801C4198
  c->r[4]=c->r[1]+0x0000008Cu; // 801C419C
  c->lr=0x801C41A4u; f_80032FD8(c); // 801C41A0
  c->r[3]=c->r[1]+0x000000BCu; // 801C41A4
  c->lr=0x801C41ACu; f_800462E8(c); // 801C41A8
  c->r[3]=0u+0x80450000u; // 801C41AC
  c->r[4]=c->r[1]+0x000000BCu; // 801C41B0
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801C41B4
  c->r[5]=c->r[1]+0x00000050u; // 801C41B8
  c->r[6]=c->r[1]+0x00000044u; // 801C41BC
  c->r[7]=0u+0x00000001u; // 801C41C0
  c->lr=0x801C41C8u; f_80044D14(c); // 801C41C4
  cmps(c,0,(int32_t)c->r[3],0); // 801C41C8
  if (crb(c,2)) { goto L_801C4410; } // 801C41CC
  c->r[0]=R32(c->r[1]+0x000000C0u); // 801C41D0
  cmps(c,0,(int32_t)c->r[0],0); // 801C41D4
  if (!crb(c,2)) { goto L_801C41F0; } // 801C41D8
  c->r[3]=c->r[1]+0x000000BCu; // 801C41DC
  c->r[4]=0u+0xFFFFFFFFu; // 801C41E0
  c->lr=0x801C41E8u; f_80046394(c); // 801C41E4
  c->r[3]=0u+0x00000000u; // 801C41E8
  goto L_801C4420; // 801C41EC
L_801C41F0:;
  c->r[30]=0u+0x00000000u; // 801C41F0
  c->r[29]=0u+0x00000000u; // 801C41F4
  c->r[31]=0u+0x00000000u; // 801C41F8
  goto L_801C4250; // 801C41FC
L_801C4200:;
  c->r[4]=c->r[1]+0x000000C4u; // 801C4200
  c->r[3]=c->r[1]+0x0000002Cu; // 801C4204
  c->r[4]=c->r[4]+c->r[31]; // 801C4208
  c->lr=0x801C4210u; f_8003F484(c); // 801C420C
  cmps(c,0,(int32_t)c->r[29],0); // 801C4210
  if (!crb(c,2)) { goto L_801C4228; } // 801C4214
  c->r[3]=c->r[1]+0x00000038u; // 801C4218
  c->r[4]=c->r[1]+0x0000002Cu; // 801C421C
  c->lr=0x801C4224u; f_8003F468(c); // 801C4220
  goto L_801C4248; // 801C4224
L_801C4228:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4228
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C422C
  fcmp(c,0,c->f[1],c->f[0]); // 801C4230
  if (!crb(c,0)) { goto L_801C4248; } // 801C4234
  c->r[3]=c->r[1]+0x00000038u; // 801C4238
  c->r[4]=c->r[1]+0x0000002Cu; // 801C423C
  c->lr=0x801C4244u; f_8003F468(c); // 801C4240
  c->r[30]=c->r[29]|c->r[29]; // 801C4244
L_801C4248:;
  c->r[29]=c->r[29]+0x00000001u; // 801C4248
  c->r[31]=c->r[31]+0x0000006Cu; // 801C424C
L_801C4250:;
  c->r[0]=R32(c->r[1]+0x000000C0u); // 801C4250
  cmpu(c,0,c->r[29],c->r[0]); // 801C4254
  if (crb(c,0)) { IRQCHK(c); goto L_801C4200; } // 801C4258
  c->r[12]=R32(c->r[27]+0x000008D0u); // 801C425C
  c->r[4]=c->r[27]+0x000008D0u; // 801C4260
  c->r[3]=c->r[1]+0x0000005Cu; // 801C4264
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C4268
  c->ctr=c->r[12]; // 801C426C
  if (true) { c->lr=0x801C4274u; dispatch(c,c->ctr); } // 801C4270
  c->r[0]=0u+0x00000006u; // 801C4274
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 801C4278
  c->r[4]=c->r[1]+0x00000058u; // 801C427C
  c->ctr=c->r[0]; // 801C4280
L_801C4284:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801C4284
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801C4288
  W32(c->r[5]+0x00000004u,c->r[3]); // 801C428C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801C4290
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4284; } // 801C4294
  c->r[3]=c->r[28]|c->r[28]; // 801C4298
  c->r[4]=c->r[1]+0x00000038u; // 801C429C
  c->lr=0x801C42A4u; f_80032FF4(c); // 801C42A0
  c->r[5]=(uint32_t)((int32_t)c->r[30]*(int32_t)108); // 801C42A4
  c->r[3]=c->r[1]+0x000000E4u; // 801C42A8
  c->r[0]=R32(c->r[3]+c->r[5]); // 801C42AC
  cmpu(c,0,c->r[0],0x00000005u); // 801C42B0
  if (!crb(c,2)) { goto L_801C42CC; } // 801C42B4
  c->r[3]=c->r[1]+0x000000BCu; // 801C42B8
  c->r[4]=0u+0xFFFFFFFFu; // 801C42BC
  c->lr=0x801C42C4u; f_80046394(c); // 801C42C0
  c->r[3]=0u+0x00000000u; // 801C42C4
  goto L_801C4420; // 801C42C8
L_801C42CC:;
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C42CC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C42D0
  fcmp(c,0,c->f[1],c->f[0]); // 801C42D4
  if (!crb(c,0)) { goto L_801C4300; } // 801C42D8
  {uint32_t ea=c->r[27]+0x00001FCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C42DC
  c->r[3]=c->r[1]+0x000000BCu; // 801C42E0
  {uint32_t ea=c->r[2]+0xFFFFB790u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C42E4
  c->r[4]=0u+0xFFFFFFFFu; // 801C42E8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C42EC
  {uint32_t ea=c->r[27]+0x00001FCCu; WF32(ea,c->f[0]);} // 801C42F0
  c->lr=0x801C42F8u; f_80046394(c); // 801C42F4
  c->r[3]=0u+0x00000000u; // 801C42F8
  goto L_801C4420; // 801C42FC
L_801C4300:;
  c->r[4]=c->r[1]+0x000000D0u; // 801C4300
  c->r[3]=c->r[1]+0x00000020u; // 801C4304
  c->r[4]=c->r[4]+c->r[5]; // 801C4308
  c->lr=0x801C4310u; f_8003F484(c); // 801C430C
  c->r[3]=c->r[1]+0x00000020u; // 801C4310
  c->r[4]=c->r[3]|c->r[3]; // 801C4314
  c->lr=0x801C431Cu; f_80265750(c); // 801C4318
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C431C
  c->r[3]=c->r[1]+0x00000020u; // 801C4320
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801C4324
  c->lr=0x801C432Cu; f_802657AC(c); // 801C4328
  {uint32_t ea=c->r[2]+0xFFFFB7E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C432C
  fcmp(c,0,c->f[1],c->f[0]); // 801C4330
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4334
  if (!crb(c,2)) { goto L_801C43FC; } // 801C4338
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C433C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4340
  fcmp(c,0,c->f[1],c->f[0]); // 801C4344
  if (crb(c,2)) { goto L_801C435C; } // 801C4348
  {uint32_t ea=c->r[27]+0x00001FC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C434C
  {uint32_t ea=c->r[2]+0xFFFFB7E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4350
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4354
  {uint32_t ea=c->r[27]+0x00001FC8u; WF32(ea,c->f[0]);} // 801C4358
L_801C435C:;
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C435C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4360
  fcmp(c,0,c->f[1],c->f[0]); // 801C4364
  if (crb(c,2)) { goto L_801C437C; } // 801C4368
  {uint32_t ea=c->r[27]+0x00001FD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C436C
  {uint32_t ea=c->r[2]+0xFFFFB7E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4370
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4374
  {uint32_t ea=c->r[27]+0x00001FD0u; WF32(ea,c->f[0]);} // 801C4378
L_801C437C:;
  c->r[3]=c->r[1]+0x00000014u; // 801C437C
  c->r[4]=c->r[1]+0x00000050u; // 801C4380
  c->r[5]=c->r[1]+0x00000038u; // 801C4384
  c->lr=0x801C438Cu; f_8007B8A4(c); // 801C4388
  goto L_801C43A0; // 801C438C
L_801C4390:;
  c->r[3]=c->r[1]+0x00000014u; // 801C4390
  {uint32_t ea=c->r[2]+0xFFFFB7ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4394
  c->r[4]=c->r[3]|c->r[3]; // 801C4398
  c->lr=0x801C43A0u; f_80064C58(c); // 801C439C
L_801C43A0:;
  c->r[3]=c->r[1]+0x00000014u; // 801C43A0
  c->lr=0x801C43A8u; f_80065368(c); // 801C43A4
  cmps(c,0,(int32_t)c->r[3],0); // 801C43A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C4390; } // 801C43AC
  c->r[3]=c->r[1]+0x00000014u; // 801C43B0
  c->r[4]=c->r[3]|c->r[3]; // 801C43B4
  c->lr=0x801C43BCu; f_80265750(c); // 801C43B8
  {uint32_t ea=c->r[2]+0xFFFFB7E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C43BC
  c->r[3]=c->r[1]+0x00000008u; // 801C43C0
  c->r[4]=c->r[1]+0x00000014u; // 801C43C4
  c->lr=0x801C43CCu; f_80064C58(c); // 801C43C8
  c->r[3]=c->r[1]+0x00000038u; // 801C43CC
  c->r[5]=c->r[1]+0x00000008u; // 801C43D0
  c->r[4]=c->r[3]|c->r[3]; // 801C43D4
  c->lr=0x801C43DCu; f_80064C34(c); // 801C43D8
  c->r[3]=c->r[28]|c->r[28]; // 801C43DC
  c->r[4]=c->r[1]+0x00000038u; // 801C43E0
  c->lr=0x801C43E8u; f_80032FF4(c); // 801C43E4
  c->r[3]=c->r[1]+0x000000BCu; // 801C43E8
  c->r[4]=0u+0xFFFFFFFFu; // 801C43EC
  c->lr=0x801C43F4u; f_80046394(c); // 801C43F0
  c->r[3]=0u+0x00000000u; // 801C43F4
  goto L_801C4420; // 801C43F8
L_801C43FC:;
  c->r[3]=c->r[1]+0x000000BCu; // 801C43FC
  c->r[4]=0u+0xFFFFFFFFu; // 801C4400
  c->lr=0x801C4408u; f_80046394(c); // 801C4404
  c->r[3]=0u+0x00000001u; // 801C4408
  goto L_801C4420; // 801C440C
L_801C4410:;
  c->r[3]=c->r[1]+0x000000BCu; // 801C4410
  c->r[4]=0u+0xFFFFFFFFu; // 801C4414
  c->lr=0x801C441Cu; f_80046394(c); // 801C4418
  c->r[3]=0u+0x00000000u; // 801C441C
L_801C4420:;
  c->r[11]=c->r[1]+0x00000ED0u; // 801C4420
  c->lr=0x801C4428u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C4424
  c->r[0]=R32(c->r[1]+0x00000ED4u); // 801C4428
  c->lr=c->r[0]; // 801C442C
  c->r[1]=c->r[1]+0x00000ED0u; // 801C4430
  return; // 801C4434
}

// fn_801C4438
void f_801C4438(Ctx* __restrict c) {
  trace_call(0x801C4438u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4438
  c->r[0]=c->lr; // 801C443C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4444
  c->r[31]=0u+0x804B0000u; // 801C4448
  c->r[3]=c->r[31]+0x00005CC8u; // 801C444C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C4450
  c->r[30]=c->r[4]|c->r[4]; // 801C4454
  c->lr=0x801C445Cu; f_801490FC(c); // 801C4458
  cmps(c,0,(int32_t)c->r[3],16); // 801C445C
  if (crb(c,0)) { goto L_801C44A0; } // 801C4460
  c->r[3]=c->r[31]+0x00005CC8u; // 801C4464
  c->lr=0x801C446Cu; f_801490FC(c); // 801C4468
  cmps(c,0,(int32_t)c->r[3],20); // 801C446C
  if (crb(c,1)) { goto L_801C44A0; } // 801C4470
  c->r[3]=0u+0x804D0000u; // 801C4474
  {uint32_t ea=c->r[2]+0xFFFFB7ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4478
  c->r[3]=c->r[3]+0x00003318u; // 801C447C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4480
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4484
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801C4488
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C448C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C4490
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4494
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C4498
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801C449C
L_801C44A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C44A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C44A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C44A8
  c->lr=c->r[0]; // 801C44AC
  c->r[1]=c->r[1]+0x00000010u; // 801C44B0
  return; // 801C44B4
}

// fn_801C44B8
void f_801C44B8(Ctx* __restrict c) {
  trace_call(0x801C44B8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C44B8
  c->r[0]=c->lr; // 801C44BC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C44C0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801C44C4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801C44C8
  c->r[11]=c->r[1]+0x00000090u; // 801C44CC
  c->lr=0x801C44D4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C44D0
  c->f[31]=c->f[1]; // 801C44D4
  c->r[30]=0u+0x804B0000u; // 801C44D8
  c->r[29]=c->r[3]|c->r[3]; // 801C44DC
  c->r[31]=c->r[4]|c->r[4]; // 801C44E0
  c->r[3]=c->r[30]+0x00005CC8u; // 801C44E4
  c->lr=0x801C44ECu; f_801490FC(c); // 801C44E8
  cmps(c,0,(int32_t)c->r[3],16); // 801C44EC
  if (crb(c,0)) { goto L_801C4524; } // 801C44F0
  c->r[3]=c->r[30]+0x00005CC8u; // 801C44F4
  c->lr=0x801C44FCu; f_801490FC(c); // 801C44F8
  cmps(c,0,(int32_t)c->r[3],20); // 801C44FC
  if (crb(c,1)) { goto L_801C4524; } // 801C4500
  c->r[3]=0u+0x804D0000u; // 801C4504
  {uint32_t ea=c->r[2]+0xFFFFB7ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4508
  c->r[3]=c->r[3]+0x00003318u; // 801C450C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4510
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4514
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4518
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801C451C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 801C4520
L_801C4524:;
  c->r[0]=R8(c->r[31]+0x0000006Du); // 801C4524
  cmps(c,0,(int32_t)c->r[0],0); // 801C4528
  if (!crb(c,2)) { goto L_801C4608; } // 801C452C
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4530
  c->r[3]=c->r[1]+0x00000074u; // 801C4534
  c->r[4]=c->r[31]+0x00000050u; // 801C4538
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[0]); // 801C453C
  c->lr=0x801C4544u; f_80064C58(c); // 801C4540
  c->r[0]=R8(c->r[31]+0x0000006Eu); // 801C4544
  cmps(c,0,(int32_t)c->r[0],0); // 801C4548
  if (crb(c,2)) { goto L_801C4560; } // 801C454C
  c->r[3]=c->r[1]+0x00000074u; // 801C4550
  {uint32_t ea=c->r[2]+0xFFFFB7F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4554
  c->r[4]=c->r[3]|c->r[3]; // 801C4558
  c->lr=0x801C4560u; f_80064C58(c); // 801C455C
L_801C4560:;
  c->r[3]=c->r[1]+0x00000068u; // 801C4560
  c->r[4]=c->r[31]+0x00000044u; // 801C4564
  c->r[5]=c->r[1]+0x00000074u; // 801C4568
  c->lr=0x801C4570u; f_80064C34(c); // 801C456C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4570
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4574
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4578
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C457C
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4580
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C4584
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C4588
  fcmp(c,0,c->f[0],c->f[3]); // 801C458C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C4590
  if (!crb(c,2)) { goto L_801C45F8; } // 801C4594
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4598
  {uint32_t ea=c->r[31]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C459C
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C45A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C45A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C45A8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C45AC
  fcmp(c,0,c->f[0],c->f[3]); // 801C45B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C45B4
  if (!crb(c,2)) { goto L_801C45F8; } // 801C45B8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C45BC
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C45C0
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C45C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C45C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C45CC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C45D0
  fcmp(c,0,c->f[0],c->f[3]); // 801C45D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C45D8
  if (!crb(c,2)) { goto L_801C45F8; } // 801C45DC
  c->r[3]=c->r[31]+0x00000044u; // 801C45E0
  c->r[4]=c->r[31]+0x0000005Cu; // 801C45E4
  c->lr=0x801C45ECu; f_8003F468(c); // 801C45E8
  c->r[0]=0u+0x00000001u; // 801C45EC
  W8(c->r[31]+0x0000006Du,c->r[0]); // 801C45F0
  goto L_801C4608; // 801C45F4
L_801C45F8:;
  c->r[3]=c->r[31]+0x00000044u; // 801C45F8
  c->r[5]=c->r[1]+0x00000074u; // 801C45FC
  c->r[4]=c->r[3]|c->r[3]; // 801C4600
  c->lr=0x801C4608u; f_80064C34(c); // 801C4604
L_801C4608:;
  c->r[6]=R32(c->r[31]+0x00000028u); // 801C4608
  c->r[3]=c->r[1]+0x0000005Cu; // 801C460C
  c->r[4]=R32(c->r[31]+0x00000020u); // 801C4610
  c->r[5]=c->r[31]+0x0000002Cu; // 801C4614
  c->r[6]=c->r[6]+0x00000001u; // 801C4618
  c->r[0]=R32(c->r[31]+0x00000000u); // 801C461C
  c->r[4]=c->r[6]-c->r[4]; // 801C4620
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); // 801C4624
  c->r[4]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 801C4628
  c->r[4]=c->r[6]&~c->r[4]; // 801C462C
  c->r[30]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801C4630
  c->r[4]=c->r[0]+c->r[30]; // 801C4634
  c->lr=0x801C463Cu; f_8007B8A4(c); // 801C4638
  c->r[3]=c->r[1]+0x0000005Cu; // 801C463C
  c->lr=0x801C4644u; f_80065368(c); // 801C4640
  cmps(c,0,(int32_t)c->r[3],0); // 801C4644
  if (!crb(c,2)) { goto L_801C4694; } // 801C4648
  c->r[3]=c->r[1]+0x0000005Cu; // 801C464C
  c->r[4]=c->r[3]|c->r[3]; // 801C4650
  c->lr=0x801C4658u; f_80265750(c); // 801C4654
  {uint32_t ea=c->r[2]+0xFFFFB7F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4658
  c->r[3]=c->r[1]+0x0000002Cu; // 801C465C
  c->r[4]=c->r[1]+0x0000005Cu; // 801C4660
  c->lr=0x801C4668u; f_80064C58(c); // 801C4664
  c->f[1]=c->f[31]; // 801C4668
  c->r[3]=c->r[1]+0x00000038u; // 801C466C
  c->r[4]=c->r[1]+0x0000002Cu; // 801C4670
  c->lr=0x801C4678u; f_80064C58(c); // 801C4674
  c->r[3]=c->r[31]+0x00000044u; // 801C4678
  c->r[5]=c->r[1]+0x00000038u; // 801C467C
  c->r[4]=c->r[3]|c->r[3]; // 801C4680
  c->lr=0x801C4688u; f_80064C34(c); // 801C4684
  c->r[3]=c->r[31]+0x00000044u; // 801C4688
  c->r[4]=c->r[3]|c->r[3]; // 801C468C
  c->lr=0x801C4694u; f_80265750(c); // 801C4690
L_801C4694:;
  c->f[1]=c->f[31]; // 801C4694
  c->r[3]=c->r[1]+0x00000020u; // 801C4698
  c->r[4]=c->r[31]+0x00000044u; // 801C469C
  c->lr=0x801C46A4u; f_80064C58(c); // 801C46A0
  c->r[3]=c->r[31]+0x0000002Cu; // 801C46A4
  c->r[5]=c->r[1]+0x00000020u; // 801C46A8
  c->r[4]=c->r[3]|c->r[3]; // 801C46AC
  c->lr=0x801C46B4u; f_80064C34(c); // 801C46B0
  c->r[3]=c->r[29]|c->r[29]; // 801C46B4
  c->r[4]=c->r[31]+0x00000044u; // 801C46B8
  c->lr=0x801C46C0u; f_8007513C(c); // 801C46BC
  c->r[3]=c->r[29]|c->r[29]; // 801C46C0
  c->r[4]=c->r[31]+0x0000002Cu; // 801C46C4
  c->lr=0x801C46CCu; f_80032FF4(c); // 801C46C8
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C46CC
  c->f[1]=c->f[31]; // 801C46D0
  c->r[3]=c->r[1]+0x00000050u; // 801C46D4
  c->r[4]=c->r[31]+0x00000044u; // 801C46D8
  W32(c->r[31]+0x00000074u,c->r[0]); // 801C46DC
  c->lr=0x801C46E4u; f_80064C58(c); // 801C46E0
  c->r[0]=R32(c->r[31]+0x00000028u); // 801C46E4
  cmps(c,0,(int32_t)c->r[0],0); // 801C46E8
  if (!crb(c,0)) { goto L_801C4714; } // 801C46EC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801C46F0
  c->r[3]=c->r[1]+0x00000014u; // 801C46F4
  c->r[5]=c->r[31]+0x00000038u; // 801C46F8
  c->r[4]=c->r[0]+c->r[30]; // 801C46FC
  c->lr=0x801C4704u; f_8007B8A4(c); // 801C4700
  c->r[3]=c->r[1]+0x00000044u; // 801C4704
  c->r[4]=c->r[1]+0x00000014u; // 801C4708
  c->lr=0x801C4710u; f_8003F468(c); // 801C470C
  goto L_801C4738; // 801C4710
L_801C4714:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C4714
  c->r[5]=R32(c->r[31]+0x00000000u); // 801C4718
  c->r[3]=c->r[1]+0x00000008u; // 801C471C
  c->r[4]=c->r[5]+c->r[30]; // 801C4720
  c->r[5]=c->r[5]+c->r[0]; // 801C4724
  c->lr=0x801C472Cu; f_8007B8A4(c); // 801C4728
  c->r[3]=c->r[1]+0x00000044u; // 801C472C
  c->r[4]=c->r[1]+0x00000008u; // 801C4730
  c->lr=0x801C4738u; f_8003F468(c); // 801C4734
L_801C4738:;
  c->r[3]=c->r[1]+0x00000044u; // 801C4738
  c->lr=0x801C4740u; f_80065368(c); // 801C473C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4740
  if (!crb(c,2)) { goto L_801C4754; } // 801C4744
  c->r[3]=c->r[1]+0x00000044u; // 801C4748
  c->r[4]=c->r[3]|c->r[3]; // 801C474C
  c->lr=0x801C4754u; f_80265750(c); // 801C4750
L_801C4754:;
  c->r[3]=c->r[1]+0x00000050u; // 801C4754
  c->r[4]=c->r[1]+0x00000044u; // 801C4758
  c->lr=0x801C4760u; f_800653BC(c); // 801C475C
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4760
  fcmp(c,0,c->f[1],c->f[0]); // 801C4764
  if (!crb(c,0)) { goto L_801C4774; } // 801C4768
  {uint32_t ea=c->r[2]+0xFFFFB790u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C476C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801C4770
L_801C4774:;
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4774
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4778
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801C477C
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4780
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C4784
  fcmp(c,0,c->f[1],c->f[0]); // 801C4788
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 801C478C
  if (!crb(c,1)) { goto L_801C47A4; } // 801C4790
  c->r[3]=c->r[31]|c->r[31]; // 801C4794
  c->r[4]=0u+0xFFFFFFFFu; // 801C4798
  c->r[5]=0u+0x00000000u; // 801C479C
  c->lr=0x801C47A4u; f_801C47C4(c); // 801C47A0
L_801C47A4:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801C47A4
  c->r[11]=c->r[1]+0x00000090u; // 801C47A8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801C47AC
  c->lr=0x801C47B4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C47B0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C47B4
  c->lr=c->r[0]; // 801C47B8
  c->r[1]=c->r[1]+0x000000A0u; // 801C47BC
  return; // 801C47C0
}

// fn_801C47C4
void f_801C47C4(Ctx* __restrict c) {
  trace_call(0x801C47C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C47C4
  c->r[0]=c->lr; // 801C47C8
  W32(c->r[1]+0x00000094u,c->r[0]); // 801C47CC
  c->r[11]=c->r[1]+0x00000090u; // 801C47D0
  c->lr=0x801C47D8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C47D4
  cmps(c,0,(int32_t)c->r[4],0); // 801C47D8
  c->r[30]=c->r[3]|c->r[3]; // 801C47DC
  c->r[31]=c->r[5]|c->r[5]; // 801C47E0
  if (!crb(c,0)) { goto L_801C4828; } // 801C47E4
  c->r[4]=R32(c->r[3]+0x00000028u); // 801C47E8
  c->r[0]=R32(c->r[3]+0x00000020u); // 801C47EC
  c->r[4]=c->r[4]+0x00000001u; // 801C47F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C47F4
  W32(c->r[3]+0x00000028u,c->r[4]); // 801C47F8
  if (crb(c,0)) { goto L_801C4830; } // 801C47FC
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 801C4800
  cmps(c,0,(int32_t)c->r[0],0); // 801C4804
  if (crb(c,2)) { goto L_801C4AC0; } // 801C4808
  c->r[4]=R32(c->r[3]+0x00000070u); // 801C480C
  c->r[0]=0u+0x00000000u; // 801C4810
  W32(c->r[3]+0x00000028u,c->r[0]); // 801C4814
  c->r[0]=c->r[4]+0x00000001u; // 801C4818
  W32(c->r[3]+0x00000070u,c->r[0]); // 801C481C
  goto L_801C4830; // 801C4820
  goto L_801C4AC0; // 801C4824
L_801C4828:;
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C4828
  W32(c->r[3]+0x00000028u,c->r[0]); // 801C482C
L_801C4830:;
  c->r[4]=R32(c->r[3]+0x00000028u); // 801C4830
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4834
  cmps(c,0,(int32_t)c->r[4],0); // 801C4838
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801C483C
  if (!crb(c,0)) { goto L_801C4910; } // 801C4840
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 801C4844
  cmps(c,0,(int32_t)c->r[0],0); // 801C4848
  if (crb(c,2)) { goto L_801C48C8; } // 801C484C
  c->r[8]=R32(c->r[3]+0x00000020u); // 801C4850
  c->r[4]=c->r[4]+0x00000001u; // 801C4854
  c->r[6]=R32(c->r[30]+0x00000000u); // 801C4858
  c->r[3]=c->r[1]+0x0000005Cu; // 801C485C
  c->r[7]=c->r[8]^0x80000000u; // 801C4860
  c->r[0]=c->r[4]-c->r[8]; // 801C4864
  c->r[0]=addc(c,c->r[0],c->r[7],0); // 801C4868
  c->r[5]=c->r[30]+0x00000038u; // 801C486C
  c->r[0]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801C4870
  c->r[31]=c->r[4]&~c->r[0]; // 801C4874
  c->r[4]=c->r[31]+0x00000001u; // 801C4878
  c->r[0]=c->r[4]-c->r[8]; // 801C487C
  c->r[0]=addc(c,c->r[0],c->r[7],0); // 801C4880
  c->r[0]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801C4884
  c->r[0]=c->r[4]&~c->r[0]; // 801C4888
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C488C
  c->r[4]=c->r[6]+c->r[0]; // 801C4890
  c->lr=0x801C4898u; f_8007B8A4(c); // 801C4894
  c->r[3]=c->r[1]+0x00000074u; // 801C4898
  c->r[4]=c->r[1]+0x0000005Cu; // 801C489C
  c->lr=0x801C48A4u; f_8003F468(c); // 801C48A0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)28); // 801C48A4
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C48A8
  c->r[3]=c->r[1]+0x00000050u; // 801C48AC
  c->r[5]=c->r[30]+0x00000038u; // 801C48B0
  c->r[4]=c->r[4]+c->r[0]; // 801C48B4
  c->lr=0x801C48BCu; f_8007B8A4(c); // 801C48B8
  c->r[3]=c->r[1]+0x00000068u; // 801C48BC
  c->r[4]=c->r[1]+0x00000050u; // 801C48C0
  c->lr=0x801C48C8u; f_8003F468(c); // 801C48C4
L_801C48C8:;
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801C48C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C48CC
  if (!crb(c,2)) { goto L_801C4A2C; } // 801C48D0
  c->r[4]=R32(c->r[30]+0x00000028u); // 801C48D4
  c->r[3]=c->r[1]+0x00000044u; // 801C48D8
  c->r[6]=R32(c->r[30]+0x00000000u); // 801C48DC
  c->r[5]=c->r[30]+0x00000038u; // 801C48E0
  c->r[0]=c->r[4]+0x00000001u; // 801C48E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C48E8
  c->r[4]=c->r[6]+c->r[0]; // 801C48EC
  c->lr=0x801C48F4u; f_8007B8A4(c); // 801C48F0
  c->r[3]=c->r[1]+0x00000068u; // 801C48F4
  c->r[4]=c->r[1]+0x00000044u; // 801C48F8
  c->lr=0x801C4900u; f_8003F468(c); // 801C48FC
  c->r[4]=c->r[3]|c->r[3]; // 801C4900
  c->r[3]=c->r[1]+0x00000074u; // 801C4904
  c->lr=0x801C490Cu; f_8003F468(c); // 801C4908
  goto L_801C4A2C; // 801C490C
L_801C4910:;
  c->r[0]=R8(c->r[3]+0x0000006Cu); // 801C4910
  cmps(c,0,(int32_t)c->r[0],0); // 801C4914
  if (crb(c,2)) { goto L_801C49A0; } // 801C4918
  c->r[8]=R32(c->r[3]+0x00000020u); // 801C491C
  c->r[7]=c->r[4]+0x00000001u; // 801C4920
  c->r[9]=R32(c->r[3]+0x00000000u); // 801C4924
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801C4928
  c->r[6]=c->r[8]^0x80000000u; // 801C492C
  c->r[3]=c->r[7]-c->r[8]; // 801C4930
  c->r[4]=addc(c,c->r[3],c->r[6],0); // 801C4934
  c->r[4]=addc(c,~c->r[4],c->r[4],c->xer_ca); // 801C4938
  c->r[5]=c->r[9]+c->r[0]; // 801C493C
  c->r[29]=c->r[7]&~c->r[4]; // 801C4940
  c->r[3]=c->r[1]+0x00000038u; // 801C4944
  c->r[4]=c->r[29]+0x00000001u; // 801C4948
  c->r[0]=c->r[4]-c->r[8]; // 801C494C
  c->r[0]=addc(c,c->r[0],c->r[6],0); // 801C4950
  c->r[0]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801C4954
  c->r[0]=c->r[4]&~c->r[0]; // 801C4958
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C495C
  c->r[4]=c->r[9]+c->r[0]; // 801C4960
  c->lr=0x801C4968u; f_8007B8A4(c); // 801C4964
  c->r[3]=c->r[1]+0x00000074u; // 801C4968
  c->r[4]=c->r[1]+0x00000038u; // 801C496C
  c->lr=0x801C4974u; f_8003F468(c); // 801C4970
  c->r[0]=R32(c->r[30]+0x00000028u); // 801C4974
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)28); // 801C4978
  c->r[5]=R32(c->r[30]+0x00000000u); // 801C497C
  c->r[3]=c->r[1]+0x0000002Cu; // 801C4980
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C4984
  c->r[4]=c->r[5]+c->r[4]; // 801C4988
  c->r[5]=c->r[5]+c->r[0]; // 801C498C
  c->lr=0x801C4994u; f_8007B8A4(c); // 801C4990
  c->r[3]=c->r[1]+0x00000068u; // 801C4994
  c->r[4]=c->r[1]+0x0000002Cu; // 801C4998
  c->lr=0x801C49A0u; f_8003F468(c); // 801C499C
L_801C49A0:;
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801C49A0
  cmps(c,0,(int32_t)c->r[0],0); // 801C49A4
  if (!crb(c,2)) { goto L_801C4A2C; } // 801C49A8
  cmps(c,0,(int32_t)c->r[31],0); // 801C49AC
  if (crb(c,2)) { goto L_801C49F0; } // 801C49B0
  c->r[4]=R32(c->r[30]+0x00000028u); // 801C49B4
  c->r[3]=c->r[1]+0x00000020u; // 801C49B8
  c->r[6]=R32(c->r[30]+0x00000000u); // 801C49BC
  c->r[5]=c->r[30]+0x00000038u; // 801C49C0
  c->r[0]=c->r[4]+0x00000001u; // 801C49C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C49C8
  c->r[4]=c->r[6]+c->r[0]; // 801C49CC
  c->lr=0x801C49D4u; f_8007B8A4(c); // 801C49D0
  c->r[3]=c->r[1]+0x00000068u; // 801C49D4
  c->r[4]=c->r[1]+0x00000020u; // 801C49D8
  c->lr=0x801C49E0u; f_8003F468(c); // 801C49DC
  c->r[4]=c->r[3]|c->r[3]; // 801C49E0
  c->r[3]=c->r[1]+0x00000074u; // 801C49E4
  c->lr=0x801C49ECu; f_8003F468(c); // 801C49E8
  goto L_801C4A2C; // 801C49EC
L_801C49F0:;
  c->r[5]=R32(c->r[30]+0x00000028u); // 801C49F0
  c->r[3]=c->r[1]+0x00000014u; // 801C49F4
  c->r[6]=R32(c->r[30]+0x00000000u); // 801C49F8
  c->r[0]=c->r[5]+0x00000001u; // 801C49FC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C4A00
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 801C4A04
  c->r[4]=c->r[6]+c->r[4]; // 801C4A08
  c->r[5]=c->r[6]+c->r[0]; // 801C4A0C
  c->lr=0x801C4A14u; f_8007B8A4(c); // 801C4A10
  c->r[3]=c->r[1]+0x00000068u; // 801C4A14
  c->r[4]=c->r[1]+0x00000014u; // 801C4A18
  c->lr=0x801C4A20u; f_8003F468(c); // 801C4A1C
  c->r[4]=c->r[3]|c->r[3]; // 801C4A20
  c->r[3]=c->r[1]+0x00000074u; // 801C4A24
  c->lr=0x801C4A2Cu; f_8003F468(c); // 801C4A28
L_801C4A2C:;
  c->r[3]=c->r[1]+0x00000074u; // 801C4A2C
  c->lr=0x801C4A34u; f_80065368(c); // 801C4A30
  cmps(c,0,(int32_t)c->r[3],0); // 801C4A34
  if (!crb(c,2)) { goto L_801C4A48; } // 801C4A38
  c->r[3]=c->r[1]+0x00000074u; // 801C4A3C
  c->r[4]=c->r[3]|c->r[3]; // 801C4A40
  c->lr=0x801C4A48u; f_80265750(c); // 801C4A44
L_801C4A48:;
  c->r[3]=c->r[1]+0x00000068u; // 801C4A48
  c->lr=0x801C4A50u; f_802657AC(c); // 801C4A4C
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 801C4A50
  c->r[3]=c->r[30]+0x0000005Cu; // 801C4A54
  c->r[4]=c->r[1]+0x00000074u; // 801C4A58
  c->lr=0x801C4A60u; f_8003F468(c); // 801C4A5C
  c->r[3]=c->r[1]+0x00000008u; // 801C4A60
  c->r[4]=c->r[30]+0x0000005Cu; // 801C4A64
  c->r[5]=c->r[30]+0x00000044u; // 801C4A68
  c->lr=0x801C4A70u; f_8007B8A4(c); // 801C4A6C
  c->r[3]=c->r[30]+0x00000050u; // 801C4A70
  c->r[4]=c->r[1]+0x00000008u; // 801C4A74
  c->lr=0x801C4A7Cu; f_8003F468(c); // 801C4A78
  c->r[0]=0u+0x00000000u; // 801C4A7C
  c->r[3]=c->r[30]+0x00000044u; // 801C4A80
  W8(c->r[30]+0x0000006Du,c->r[0]); // 801C4A84
  c->r[4]=c->r[30]+0x0000005Cu; // 801C4A88
  W8(c->r[30]+0x0000006Eu,c->r[0]); // 801C4A8C
  c->lr=0x801C4A94u; f_800653BC(c); // 801C4A90
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4A94
  fcmp(c,0,c->f[1],c->f[0]); // 801C4A98
  if (!crb(c,0)) { goto L_801C4AC0; } // 801C4A9C
  {uint32_t ea=c->r[2]+0xFFFFB7B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4AA0
  c->r[0]=0u+0x00000001u; // 801C4AA4
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4AA8
  {uint32_t ea=c->r[30]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4AAC
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[1],c->f[3],-c->f[2])); // 801C4AB0
  W8(c->r[30]+0x0000006Eu,c->r[0]); // 801C4AB4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C4AB8
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 801C4ABC
L_801C4AC0:;
  c->r[11]=c->r[1]+0x00000090u; // 801C4AC0
  c->lr=0x801C4AC8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C4AC4
  c->r[0]=R32(c->r[1]+0x00000094u); // 801C4AC8
  c->lr=c->r[0]; // 801C4ACC
  c->r[1]=c->r[1]+0x00000090u; // 801C4AD0
  return; // 801C4AD4
}

// __eq__7Vector3CFRC7Vector3
void f_801C4AD8(Ctx* __restrict c) {
  trace_call(0x801C4AD8u);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4AD8
  c->r[0]=0u+0x00000000u; // 801C4ADC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4AE0
  fcmp(c,0,c->f[1],c->f[0]); // 801C4AE4
  if (!crb(c,2)) { goto L_801C4B10; } // 801C4AE8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4AEC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4AF0
  fcmp(c,0,c->f[1],c->f[0]); // 801C4AF4
  if (!crb(c,2)) { goto L_801C4B10; } // 801C4AF8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4AFC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4B00
  fcmp(c,0,c->f[1],c->f[0]); // 801C4B04
  if (!crb(c,2)) { goto L_801C4B10; } // 801C4B08
  c->r[0]=0u+0x00000001u; // 801C4B0C
L_801C4B10:;
  c->r[3]=c->r[0]|c->r[0]; // 801C4B10
  return; // 801C4B14
}

// fn_801C4B18
void f_801C4B18(Ctx* __restrict c) {
  trace_call(0x801C4B18u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B18
  f_801C2494(c); return; // 801C4B1C
}

// fn_801C4B20
void f_801C4B20(Ctx* __restrict c) {
  trace_call(0x801C4B20u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B20
  f_801C2500(c); return; // 801C4B24
}

// fn_801C4B28
void f_801C4B28(Ctx* __restrict c) {
  trace_call(0x801C4B28u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B28
  f_801C2610(c); return; // 801C4B2C
}

// fn_801C4B30
void f_801C4B30(Ctx* __restrict c) {
  trace_call(0x801C4B30u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B30
  f_801C24DC(c); return; // 801C4B34
}

// fn_801C4B38
void f_801C4B38(Ctx* __restrict c) {
  trace_call(0x801C4B38u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B38
  f_801C257C(c); return; // 801C4B3C
}

// fn_801C4B40
void f_801C4B40(Ctx* __restrict c) {
  trace_call(0x801C4B40u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B40
  f_801C264C(c); return; // 801C4B44
}

// fn_801C4B48
void f_801C4B48(Ctx* __restrict c) {
  trace_call(0x801C4B48u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B48
  f_801C24B8(c); return; // 801C4B4C
}

// fn_801C4B50
void f_801C4B50(Ctx* __restrict c) {
  trace_call(0x801C4B50u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B50
  f_801C2544(c); return; // 801C4B54
}

// fn_801C4B58
void f_801C4B58(Ctx* __restrict c) {
  trace_call(0x801C4B58u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C4B58
  f_801C2648(c); return; // 801C4B5C
}

// fn_801C4B60
void f_801C4B60(Ctx* __restrict c) {
  trace_call(0x801C4B60u);
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4B60
  c->r[0]=0u+0x00000000u; // 801C4B64
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4B68
  fcmp(c,0,c->f[1],c->f[0]); // 801C4B6C
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4B70
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4B74
  fcmp(c,0,c->f[1],c->f[0]); // 801C4B78
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4B7C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4B80
  fcmp(c,0,c->f[1],c->f[0]); // 801C4B84
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4B88
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4B8C
  fcmp(c,0,c->f[1],c->f[0]); // 801C4B90
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4B94
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4B98
  fcmp(c,0,c->f[1],c->f[0]); // 801C4B9C
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4BA0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BA4
  fcmp(c,0,c->f[1],c->f[0]); // 801C4BA8
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4BAC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BB0
  fcmp(c,0,c->f[1],c->f[0]); // 801C4BB4
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4BB8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BBC
  fcmp(c,0,c->f[1],c->f[0]); // 801C4BC0
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4BC4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BC8
  fcmp(c,0,c->f[1],c->f[0]); // 801C4BCC
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4BD0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BD4
  fcmp(c,0,c->f[1],c->f[0]); // 801C4BD8
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4BDC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BE0
  fcmp(c,0,c->f[1],c->f[0]); // 801C4BE4
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4BE8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BEC
  fcmp(c,0,c->f[1],c->f[0]); // 801C4BF0
  if (!crb(c,2)) { goto L_801C4BFC; } // 801C4BF4
  c->r[0]=0u+0x00000001u; // 801C4BF8
L_801C4BFC:;
  c->r[3]=c->r[0]|c->r[0]; // 801C4BFC
  return; // 801C4C00
}

// fn_801C4C04
void f_801C4C04(Ctx* __restrict c) {
  trace_call(0x801C4C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4C04
  c->r[0]=c->lr; // 801C4C08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4C0C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C4C10
  c->r[30]=c->r[3]|c->r[3]; // 801C4C14
  c->r[31]=c->r[5]|c->r[5]; // 801C4C18
  c->r[7]=R32(c->r[3]+0x00000020u); // 801C4C1C
  cmps(c,0,(int32_t)c->r[7],2); // 801C4C20
  if (!crb(c,0)) { goto L_801C4C30; } // 801C4C24
  c->r[3]=0u+0x00000000u; // 801C4C28
  goto L_801C4CC4; // 801C4C2C
L_801C4C30:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C4C30
  W8(c->r[3]+0x0000006Cu,c->r[4]); // 801C4C34
  if (crb(c,2)) { goto L_801C4C68; } // 801C4C38
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801C4C3C
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C4C40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C4C44
  c->r[3]=c->r[1]+0x00000008u; // 801C4C48
  c->r[4]=c->r[5]+0x0000001Cu; // 801C4C4C
  c->r[5]=c->r[5]+c->r[0]; // 801C4C50
  c->lr=0x801C4C58u; f_8007B8A4(c); // 801C4C54
  c->r[3]=c->r[30]+0x00000044u; // 801C4C58
  c->r[4]=c->r[1]+0x00000008u; // 801C4C5C
  c->lr=0x801C4C64u; f_8003F468(c); // 801C4C60
  goto L_801C4C74; // 801C4C64
L_801C4C68:;
  c->r[4]=c->r[6]|c->r[6]; // 801C4C68
  c->r[3]=c->r[3]+0x00000044u; // 801C4C6C
  c->lr=0x801C4C74u; f_8003F468(c); // 801C4C70
L_801C4C74:;
  c->r[3]=c->r[30]+0x00000044u; // 801C4C74
  c->lr=0x801C4C7Cu; f_80065368(c); // 801C4C78
  cmps(c,0,(int32_t)c->r[3],0); // 801C4C7C
  if (!crb(c,2)) { goto L_801C4C90; } // 801C4C80
  c->r[3]=c->r[30]+0x00000044u; // 801C4C84
  c->r[4]=c->r[3]|c->r[3]; // 801C4C88
  c->lr=0x801C4C90u; f_80265750(c); // 801C4C8C
L_801C4C90:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C4C90
  c->r[3]=c->r[30]+0x0000002Cu; // 801C4C94
  c->lr=0x801C4C9Cu; f_8003F468(c); // 801C4C98
  c->r[6]=0u+0xFFFFFFFFu; // 801C4C9C
  c->r[0]=0u+0x00000000u; // 801C4CA0
  W32(c->r[30]+0x00000074u,c->r[6]); // 801C4CA4
  c->r[3]=c->r[30]|c->r[30]; // 801C4CA8
  c->r[4]=c->r[31]|c->r[31]; // 801C4CAC
  c->r[5]=0u+0x00000000u; // 801C4CB0
  W32(c->r[30]+0x00000028u,c->r[6]); // 801C4CB4
  W32(c->r[30]+0x00000070u,c->r[0]); // 801C4CB8
  c->lr=0x801C4CC0u; f_801C47C4(c); // 801C4CBC
  c->r[3]=0u+0x00000001u; // 801C4CC0
L_801C4CC4:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C4CC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4CC8
  c->lr=c->r[0]; // 801C4CCC
  c->r[1]=c->r[1]+0x00000020u; // 801C4CD0
  return; // 801C4CD4
}

// fn_801C4CD8
void f_801C4CD8(Ctx* __restrict c) {
  trace_call(0x801C4CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4CD8
  c->r[4]=0u+0xC8800000u; // 801C4CDC
  c->r[0]=0u+0x00000004u; // 801C4CE0
  c->r[3]=0u+0x00000004u; // 801C4CE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C4CE8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801C4CEC
  c->r[1]=c->r[1]+0x00000010u; // 801C4CF0
  return; // 801C4CF4
}

// fn_801C4CF8
void f_801C4CF8(Ctx* __restrict c) {
  trace_call(0x801C4CF8u);
  c->r[5]=R32(c->r[3]+0x00000028u); // 801C4CF8
  c->r[3]=R32(c->r[3]+0x00000020u); // 801C4CFC
  c->r[4]=sraw(c,c->r[5],31); // 801C4D00
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C4D04
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C4D08
  c->r[0]=addc(c,~c->r[0],c->r[5],1); // 801C4D0C
  c->r[3]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801C4D10
  return; // 801C4D14
}

// fn_801C4D18
void f_801C4D18(Ctx* __restrict c) {
  trace_call(0x801C4D18u);
  {uint32_t ea=c->r[2]+0xFFFFB78Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4D18
  c->r[3]=0u+0x80570000u; // 801C4D1C
  {uint32_t ea=c->r[2]+0xFFFFB788u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4D20
  c->r[3]=c->r[3]+0x00000098u; // 801C4D24
  c->f[3]=c->f[1]; // 801C4D28
  f_8003F588(c); return; // 801C4D2C
}

// fn_801C4D30
void f_801C4D30(Ctx* __restrict c) {
  trace_call(0x801C4D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4D30
  c->r[0]=c->lr; // 801C4D34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C4D38
  c->r[11]=c->r[1]+0x00000030u; // 801C4D3C
  c->lr=0x801C4D44u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C4D40
  c->r[29]=c->r[3]|c->r[3]; // 801C4D44
  c->lr=0x801C4D4Cu; f_801C236C(c); // 801C4D48
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4D4C
  c->r[3]=0u+0x0000001Eu; // 801C4D50
  {uint32_t ea=c->r[2]+0xFFFFB7F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4D54
  c->r[0]=0u+0x00000014u; // 801C4D58
  {uint32_t ea=c->r[2]+0xFFFFB7FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4D5C
  {uint32_t ea=c->r[2]+0xFFFFB804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4D60
  W16(c->r[29]+0x00001FA2u,c->r[3]); // 801C4D64
  W16(c->r[29]+0x000021D4u,c->r[0]); // 801C4D68
  {uint32_t ea=c->r[29]+0x000021D8u; WF32(ea,c->f[3]);} // 801C4D6C
  {uint32_t ea=c->r[29]+0x000021DCu; WF32(ea,c->f[3]);} // 801C4D70
  {uint32_t ea=c->r[29]+0x00001FB8u; WF32(ea,c->f[2]);} // 801C4D74
  {uint32_t ea=c->r[29]+0x00001FE0u; WF32(ea,c->f[1]);} // 801C4D78
  {uint32_t ea=c->r[29]+0x00001FE4u; WF32(ea,c->f[1]);} // 801C4D7C
  {uint32_t ea=c->r[29]+0x000021D0u; WF32(ea,c->f[1]);} // 801C4D80
  {uint32_t ea=c->r[29]+0x000021C0u; WF32(ea,c->f[0]);} // 801C4D84
  c->lr=0x801C4D8Cu; f_80291D94(c); // 801C4D88
  c->r[0]=c->r[3]^0x80000000u; // 801C4D8C
  c->r[30]=0u+0x43300000u; // 801C4D90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C4D94
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[3]=RF64(ea);} // 801C4D98
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C4D9C
  {uint32_t ea=c->r[2]+0xFFFFB810u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4DA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C4DA4
  {uint32_t ea=c->r[2]+0xFFFFB80Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4DA8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801C4DAC
  {uint32_t ea=c->r[2]+0xFFFFB808u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4DB0
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801C4DB4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801C4DB8
  {uint32_t ea=c->r[29]+0x000021B0u; WF32(ea,c->f[0]);} // 801C4DBC
  c->lr=0x801C4DC4u; f_80291D94(c); // 801C4DC0
  c->r[0]=c->r[3]^0x80000000u; // 801C4DC4
  {uint32_t ea=c->r[2]+0xFFFFB814u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4DC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4DCC
  c->r[0]=0u+0x00000001u; // 801C4DD0
  {uint32_t ea=c->r[2]+0xFFFFB818u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4DD4
  c->r[31]=0u+0x803E0000u; // 801C4DD8
  W32(c->r[1]+0x00000010u,c->r[30]); // 801C4DDC
  c->r[3]=c->r[29]+0x00001F15u; // 801C4DE0
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[3]=RF64(ea);} // 801C4DE4
  c->r[4]=c->r[31]+0x00000A48u; // 801C4DE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801C4DEC
  {uint32_t ea=c->r[2]+0xFFFFB810u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C4DF0
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[3]); // 801C4DF4
  {uint32_t ea=c->r[29]+0x000021B8u; WF32(ea,c->f[1]);} // 801C4DF8
  {uint32_t ea=c->r[2]+0xFFFFB80Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4DFC
  {uint32_t ea=c->r[2]+0xFFFFB808u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4E00
  c->f[1]=c->ps1[1]=S(c->f[5]/c->f[4]); // 801C4E04
  {uint32_t ea=c->r[29]+0x000021BCu; WF32(ea,c->f[0]);} // 801C4E08
  W8(c->r[29]+0x00002208u,c->r[0]); // 801C4E0C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[1],c->f[2])); // 801C4E10
  {uint32_t ea=c->r[29]+0x000021B4u; WF32(ea,c->f[0]);} // 801C4E14
  c->lr=0x801C4E1Cu; f_802933D8(c); // 801C4E18
  c->r[31]=c->r[31]+0x00000A48u; // 801C4E1C
  c->r[3]=c->r[29]+0x00001F3Du; // 801C4E20
  c->r[4]=c->r[31]+0x0000000Cu; // 801C4E24
  c->lr=0x801C4E2Cu; f_802933D8(c); // 801C4E28
  c->r[3]=c->r[29]+0x00002180u; // 801C4E2C
  c->r[4]=c->r[31]+0x00000017u; // 801C4E30
  c->lr=0x801C4E38u; f_802933D8(c); // 801C4E34
  c->r[3]=c->r[29]+0x00001F51u; // 801C4E38
  c->r[4]=c->r[31]+0x00000020u; // 801C4E3C
  c->lr=0x801C4E44u; f_802933D8(c); // 801C4E40
  c->r[3]=c->r[29]+0x00002194u; // 801C4E44
  c->r[4]=c->r[31]+0x0000002Cu; // 801C4E48
  c->lr=0x801C4E50u; f_802933D8(c); // 801C4E4C
  c->r[11]=c->r[1]+0x00000030u; // 801C4E50
  c->lr=0x801C4E58u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C4E54
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C4E58
  c->lr=c->r[0]; // 801C4E5C
  c->r[1]=c->r[1]+0x00000030u; // 801C4E60
  return; // 801C4E64
}

// fn_801C4E68
void f_801C4E68(Ctx* __restrict c) {
  trace_call(0x801C4E68u);
  f_801C20E4(c); return; // 801C4E68
}

// fn_801C4E6C
void f_801C4E6C(Ctx* __restrict c) {
  trace_call(0x801C4E6Cu);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C4E6C
  cmps(c,0,(int32_t)c->r[0],30); // 801C4E70
  if (crb(c,2)) { goto L_801C4E8C; } // 801C4E74
  if (!crb(c,0)) return; // 801C4E78
  cmps(c,0,(int32_t)c->r[0],0); // 801C4E7C
  if (!crb(c,2)) return; // 801C4E80
  c->r[4]=c->r[5]|c->r[5]; // 801C4E84
  f_801C2670(c); return; // 801C4E88
L_801C4E8C:;
  c->r[4]=c->r[5]|c->r[5]; // 801C4E8C
  f_801C5494(c); return; // 801C4E90
  return; // 801C4E94
}

// fn_801C4E98
void f_801C4E98(Ctx* __restrict c) {
  trace_call(0x801C4E98u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C4E98
  cmps(c,0,(int32_t)c->r[0],30); // 801C4E9C
  if (crb(c,2)) { goto L_801C4EB8; } // 801C4EA0
  if (!crb(c,0)) return; // 801C4EA4
  cmps(c,0,(int32_t)c->r[0],0); // 801C4EA8
  if (crb(c,2)) { goto L_801C4EB4; } // 801C4EAC
  return; // 801C4EB0
L_801C4EB4:;
  f_801C2758(c); return; // 801C4EB4
L_801C4EB8:;
  f_801C5594(c); return; // 801C4EB8
  return; // 801C4EBC
}

// fn_801C4EC0
void f_801C4EC0(Ctx* __restrict c) {
  trace_call(0x801C4EC0u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C4EC0
  cmps(c,0,(int32_t)c->r[0],30); // 801C4EC4
  if (crb(c,2)) { goto L_801C4EE0; } // 801C4EC8
  if (!crb(c,0)) return; // 801C4ECC
  cmps(c,0,(int32_t)c->r[0],0); // 801C4ED0
  if (crb(c,2)) { goto L_801C4EDC; } // 801C4ED4
  return; // 801C4ED8
L_801C4EDC:;
  f_801C28DC(c); return; // 801C4EDC
L_801C4EE0:;
  f_801C56F0(c); return; // 801C4EE0
  return; // 801C4EE4
}

// fn_801C4EE8
void f_801C4EE8(Ctx* __restrict c) {
  trace_call(0x801C4EE8u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C4EE8
  cmps(c,0,(int32_t)c->r[0],40); // 801C4EEC
  if (crb(c,2)) { goto L_801C4F08; } // 801C4EF0
  if (!crb(c,0)) return; // 801C4EF4
  cmps(c,0,(int32_t)c->r[0],20); // 801C4EF8
  if (!crb(c,2)) return; // 801C4EFC
  c->r[4]=c->r[5]|c->r[5]; // 801C4F00
  f_801C53BC(c); return; // 801C4F04
L_801C4F08:;
  c->r[4]=c->r[5]|c->r[5]; // 801C4F08
  f_801C5A20(c); return; // 801C4F0C
  return; // 801C4F10
}

// fn_801C4F14
void f_801C4F14(Ctx* __restrict c) {
  trace_call(0x801C4F14u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C4F14
  cmps(c,0,(int32_t)c->r[0],40); // 801C4F18
  if (crb(c,2)) { goto L_801C4F34; } // 801C4F1C
  if (!crb(c,0)) return; // 801C4F20
  cmps(c,0,(int32_t)c->r[0],20); // 801C4F24
  if (crb(c,2)) { goto L_801C4F30; } // 801C4F28
  return; // 801C4F2C
L_801C4F30:;
  f_801C53EC(c); return; // 801C4F30
L_801C4F34:;
  f_801C5B48(c); return; // 801C4F34
  return; // 801C4F38
}

// fn_801C4F3C
void f_801C4F3C(Ctx* __restrict c) {
  trace_call(0x801C4F3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4F3C
  c->r[0]=c->lr; // 801C4F40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4F44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4F48
  c->r[31]=c->r[3]|c->r[3]; // 801C4F4C
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C4F50
  cmps(c,0,(int32_t)c->r[0],40); // 801C4F54
  if (crb(c,2)) { goto L_801C4F74; } // 801C4F58
  if (!crb(c,0)) { goto L_801C4FA0; } // 801C4F5C
  cmps(c,0,(int32_t)c->r[0],20); // 801C4F60
  if (crb(c,2)) { goto L_801C4F6C; } // 801C4F64
  goto L_801C4FA0; // 801C4F68
L_801C4F6C:;
  c->lr=0x801C4F70u; f_801C2FB4(c); // 801C4F6C
  goto L_801C4FA0; // 801C4F70
L_801C4F74:;
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C4F74
  cmpu(c,0,c->r[0],0x00000064u); // 801C4F78
  if (!crb(c,2)) { goto L_801C4FA0; } // 801C4F7C
  c->r[4]=0u+0x00000000u; // 801C4F80
  c->r[5]=0u+0x00000001u; // 801C4F84
  c->lr=0x801C4F8Cu; f_80076080(c); // 801C4F88
  c->r[12]=R32(c->r[31]+0x00000010u); // 801C4F8C
  c->r[3]=c->r[31]|c->r[31]; // 801C4F90
  c->r[12]=R32(c->r[12]+0x00000030u); // 801C4F94
  c->ctr=c->r[12]; // 801C4F98
  if (true) { c->lr=0x801C4FA0u; dispatch(c,c->ctr); } // 801C4F9C
L_801C4FA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4FA4
  c->lr=c->r[0]; // 801C4FA8
  c->r[1]=c->r[1]+0x00000010u; // 801C4FAC
  return; // 801C4FB0
}

// fn_801C4FB4
void f_801C4FB4(Ctx* __restrict c) {
  trace_call(0x801C4FB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4FB4
  c->r[0]=c->lr; // 801C4FB8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C4FBC
  c->r[11]=c->r[1]+0x00000060u; // 801C4FC0
  c->lr=0x801C4FC8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C4FC4
  c->r[30]=c->r[5]|c->r[5]; // 801C4FC8
  c->r[29]=c->r[3]|c->r[3]; // 801C4FCC
  c->r[4]=c->r[30]|c->r[30]; // 801C4FD0
  c->lr=0x801C4FD8u; f_801C3B78(c); // 801C4FD4
  c->r[3]=0u+0x803E0000u; // 801C4FD8
  c->r[3]=c->r[3]+0x00000A48u; // 801C4FDC
  c->r[31]=c->r[3]+0x00000039u; // 801C4FE0
  c->lr=0x801C4FE8u; f_80232150(c); // 801C4FE4
  {uint32_t ea=c->r[29]+0x00000398u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4FE8
  c->r[4]=c->r[31]|c->r[31]; // 801C4FEC
  c->lr=0x801C4FF4u; f_80232230(c); // 801C4FF0
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[1]);} // 801C4FF4
  c->r[3]=c->r[29]+0x000008ECu; // 801C4FF8
  c->r[4]=c->r[29]+0x00001F3Du; // 801C4FFC
  c->lr=0x801C5004u; f_80075440(c); // 801C5000
  W32(c->r[30]+0x00000034u,c->r[3]); // 801C5004
  c->r[5]=c->r[3]|c->r[3]; // 801C5008
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C500C
  c->r[3]=c->r[29]+0x00000C88u; // 801C5010
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5014
  c->r[4]=c->r[29]+0x000008ECu; // 801C5018
  c->r[6]=0u+0x00000000u; // 801C501C
  c->r[7]=0u+0x00000000u; // 801C5020
  c->lr=0x801C5028u; f_800BB0C8(c); // 801C5024
  c->r[0]=0u+0x00000017u; // 801C5028
  c->r[4]=c->r[29]+0x000008D0u; // 801C502C
  W16(c->r[29]+0x00001FEEu,c->r[0]); // 801C5030
  c->r[3]=c->r[1]+0x00000014u; // 801C5034
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801C5038
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C503C
  c->ctr=c->r[12]; // 801C5040
  if (true) { c->lr=0x801C5048u; dispatch(c,c->ctr); } // 801C5044
  c->r[3]=c->r[1]+0x00000008u; // 801C5048
  c->r[4]=c->r[1]+0x00000014u; // 801C504C
  c->lr=0x801C5054u; f_80032FD8(c); // 801C5050
  c->r[3]=c->r[29]+0x000021C4u; // 801C5054
  c->r[4]=c->r[1]+0x00000008u; // 801C5058
  c->lr=0x801C5060u; f_8003F468(c); // 801C505C
  {uint32_t ea=c->r[2]+0xFFFFB830u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5060
  c->r[0]=0u+0x00000000u; // 801C5064
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5068
  c->r[11]=c->r[1]+0x00000060u; // 801C506C
  {uint32_t ea=c->r[2]+0xFFFFB834u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5070
  {uint32_t ea=c->r[2]+0xFFFFB814u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5074
  W32(c->r[29]+0x000021A8u,c->r[0]); // 801C5078
  W32(c->r[29]+0x000021ACu,c->r[0]); // 801C507C
  {uint32_t ea=c->r[29]+0x000021B0u; WF32(ea,c->f[3]);} // 801C5080
  {uint32_t ea=c->r[29]+0x000021B4u; WF32(ea,c->f[2]);} // 801C5084
  {uint32_t ea=c->r[29]+0x000021B8u; WF32(ea,c->f[1]);} // 801C5088
  {uint32_t ea=c->r[29]+0x000021BCu; WF32(ea,c->f[0]);} // 801C508C
  c->lr=0x801C5094u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C5090
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C5094
  c->lr=c->r[0]; // 801C5098
  c->r[1]=c->r[1]+0x00000060u; // 801C509C
  return; // 801C50A0
}

// fn_801C50A4
void f_801C50A4(Ctx* __restrict c) {
  trace_call(0x801C50A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C50A4
  c->r[0]=c->lr; // 801C50A8
  c->r[5]=0u+0x00000000u; // 801C50AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C50B0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C50B4
  c->r[31]=c->r[3]|c->r[3]; // 801C50B8
  c->r[3]=c->r[1]+0x00000008u; // 801C50BC
  c->r[4]=c->r[31]|c->r[31]; // 801C50C0
  c->lr=0x801C50C8u; f_801C5CC0(c); // 801C50C4
  c->r[3]=c->r[1]+0x00000008u; // 801C50C8
  c->lr=0x801C50D0u; f_801C4B60(c); // 801C50CC
  cmps(c,0,(int32_t)c->r[3],0); // 801C50D0
  if (!crb(c,2)) { goto L_801C50F0; } // 801C50D4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C50D8
  c->r[3]=c->r[31]+0x000008D0u; // 801C50DC
  c->r[4]=c->r[1]+0x00000008u; // 801C50E0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C50E4
  c->ctr=c->r[12]; // 801C50E8
  if (true) { c->lr=0x801C50F0u; dispatch(c,c->ctr); } // 801C50EC
L_801C50F0:;
  c->r[0]=R16(c->r[31]+0x00001FEEu); // 801C50F0
  cmps(c,0,(int32_t)c->r[0],24); // 801C50F4
  if (crb(c,2)) { goto L_801C5188; } // 801C50F8
  if (!crb(c,0)) { goto L_801C510C; } // 801C50FC
  cmps(c,0,(int32_t)c->r[0],23); // 801C5100
  if (!crb(c,0)) { goto L_801C5114; } // 801C5104
  goto L_801C51C0; // 801C5108
L_801C510C:;
  cmps(c,0,(int32_t)c->r[0],26); // 801C510C
  if (!crb(c,0)) { goto L_801C51C0; } // 801C5110
L_801C5114:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5114
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5118
  fcmp(c,0,c->f[1],c->f[0]); // 801C511C
  if (!crb(c,0)) { goto L_801C5138; } // 801C5120
  c->r[3]=0u+0x804D0000u; // 801C5124
  c->r[3]=c->r[3]+0x00003318u; // 801C5128
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C512C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C5130
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C5134
L_801C5138:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5138
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C513C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5140
  if (!crb(c,1)) { goto L_801C514C; } // 801C5144
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C5148
L_801C514C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C514C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5150
  fcmp(c,0,c->f[1],c->f[0]); // 801C5154
  if (!crb(c,1)) { goto L_801C5170; } // 801C5158
  c->r[3]=0u+0x804D0000u; // 801C515C
  c->r[3]=c->r[3]+0x00003318u; // 801C5160
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5164
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C5168
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C516C
L_801C5170:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5170
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5174
  fcmp(c,0,c->f[1],c->f[0]); // 801C5178
  if (!crb(c,0)) { goto L_801C51C0; } // 801C517C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C5180
  goto L_801C51C0; // 801C5184
L_801C5188:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5188
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C518C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5190
  if (!crb(c,1)) { goto L_801C51AC; } // 801C5194
  c->r[3]=0u+0x804D0000u; // 801C5198
  c->r[3]=c->r[3]+0x00003318u; // 801C519C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C51A0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C51A4
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C51A8
L_801C51AC:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C51AC
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C51B0
  fcmp(c,0,c->f[1],c->f[0]); // 801C51B4
  if (!crb(c,0)) { goto L_801C51C0; } // 801C51B8
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C51BC
L_801C51C0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C51C0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C51C4
  c->lr=c->r[0]; // 801C51C8
  c->r[1]=c->r[1]+0x00000040u; // 801C51CC
  return; // 801C51D0
}

// fn_801C51D4
void f_801C51D4(Ctx* __restrict c) {
  trace_call(0x801C51D4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C51D4
  c->r[0]=c->lr; // 801C51D8
  W32(c->r[1]+0x00000094u,c->r[0]); // 801C51DC
  c->r[11]=c->r[1]+0x00000090u; // 801C51E0
  c->lr=0x801C51E8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C51E4
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C51E8
  c->r[31]=c->r[3]|c->r[3]; // 801C51EC
  c->r[29]=c->r[4]|c->r[4]; // 801C51F0
  cmps(c,0,(int32_t)c->r[0],24); // 801C51F4
  if (crb(c,2)) { goto L_801C5298; } // 801C51F8
  if (!crb(c,0)) { goto L_801C520C; } // 801C51FC
  cmps(c,0,(int32_t)c->r[0],23); // 801C5200
  if (!crb(c,0)) { goto L_801C5218; } // 801C5204
  goto L_801C53A4; // 801C5208
L_801C520C:;
  cmps(c,0,(int32_t)c->r[0],26); // 801C520C
  if (!crb(c,0)) { goto L_801C53A4; } // 801C5210
  goto L_801C5374; // 801C5214
L_801C5218:;
  c->r[4]=0u+0x804D0000u; // 801C5218
  c->r[4]=c->r[4]+0x00003318u; // 801C521C
  c->r[30]=R32(c->r[4]+0x00000028u); // 801C5220
  c->lr=0x801C5228u; f_801C3C1C(c); // 801C5224
  c->r[3]=c->r[30]^0x80000000u; // 801C5228
  c->r[0]=0u+0x43300000u; // 801C522C
  W32(c->r[1]+0x00000074u,c->r[3]); // 801C5230
  {uint32_t ea=c->r[2]+0xFFFFB838u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C5234
  W32(c->r[1]+0x00000070u,c->r[0]); // 801C5238
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C523C
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C5240
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 801C5244
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801C5248
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C524C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C5250
  fcmp(c,0,c->f[1],c->f[0]); // 801C5254
  if (!crb(c,0)) { goto L_801C53A4; } // 801C5258
  c->r[3]=c->r[31]+0x000008ECu; // 801C525C
  c->r[4]=c->r[31]+0x00002180u; // 801C5260
  c->lr=0x801C5268u; f_80075440(c); // 801C5264
  W32(c->r[29]+0x00000034u,c->r[3]); // 801C5268
  c->r[5]=c->r[3]|c->r[3]; // 801C526C
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5270
  c->r[3]=c->r[31]+0x00000C88u; // 801C5274
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5278
  c->r[4]=c->r[31]+0x000008ECu; // 801C527C
  c->r[6]=0u+0x00000000u; // 801C5280
  c->r[7]=0u+0x00000000u; // 801C5284
  c->lr=0x801C528Cu; f_800BB0C8(c); // 801C5288
  c->r[0]=0u+0x00000018u; // 801C528C
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C5290
  goto L_801C53A4; // 801C5294
L_801C5298:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C5298
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C529C
  c->lr=0x801C52A4u; f_800752CC(c); // 801C52A0
  {uint32_t ea=c->r[2]+0xFFFFB804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C52A4
  fcmp(c,0,c->f[1],c->f[0]); // 801C52A8
  if (!crb(c,1)) { goto L_801C53A4; } // 801C52AC
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C52B0
  c->r[4]=c->r[31]+0x000008D0u; // 801C52B4
  c->r[3]=c->r[1]+0x00000040u; // 801C52B8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C52BC
  c->ctr=c->r[12]; // 801C52C0
  if (true) { c->lr=0x801C52C8u; dispatch(c,c->ctr); } // 801C52C4
  c->r[3]=c->r[1]+0x00000010u; // 801C52C8
  c->r[4]=c->r[1]+0x00000040u; // 801C52CC
  c->lr=0x801C52D4u; f_80032FD8(c); // 801C52D0
  c->r[4]=0u+0x804D0000u; // 801C52D4
  c->r[3]=c->r[31]|c->r[31]; // 801C52D8
  c->r[4]=c->r[4]+0x00003318u; // 801C52DC
  c->r[30]=R32(c->r[4]+0x00000028u); // 801C52E0
  c->lr=0x801C52E8u; f_801C3C1C(c); // 801C52E4
  c->r[3]=c->r[30]^0x80000000u; // 801C52E8
  c->r[0]=0u+0x43300000u; // 801C52EC
  W32(c->r[1]+0x00000074u,c->r[3]); // 801C52F0
  {uint32_t ea=c->r[2]+0xFFFFB838u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C52F4
  W32(c->r[1]+0x00000070u,c->r[0]); // 801C52F8
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C52FC
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[3]=RF64(ea);} // 801C5300
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=RF64(ea);} // 801C5304
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801C5308
  {uint32_t ea=c->r[2]+0xFFFFB83Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C530C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C5310
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801C5314
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801C5318
  fcmp(c,0,c->f[1],c->f[0]); // 801C531C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C5320
  if (!crb(c,2)) { goto L_801C5368; } // 801C5324
  {uint32_t ea=c->r[29]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5328
  c->r[3]=c->r[1]+0x0000001Cu; // 801C532C
  c->r[4]=c->r[1]+0x00000010u; // 801C5330
  c->r[5]=0u+0xFFFFFFFFu; // 801C5334
  c->lr=0x801C533Cu; f_800BCD10(c); // 801C5338
  c->r[0]=R32(c->r[29]+0x00000024u); // 801C533C
  c->r[5]=c->r[13]+0xFFFF94B8u; // 801C5340
  c->r[3]=c->r[1]+0x00000008u; // 801C5344
  c->r[4]=c->r[1]+0x0000001Cu; // 801C5348
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C534C
  c->r[6]=R32(c->r[5]+c->r[0]); // 801C5350
  c->r[5]=R32(c->r[6]+0x00000000u); // 801C5354
  c->r[0]=R32(c->r[6]+0x00000004u); // 801C5358
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C535C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C5360
  c->lr=0x801C5368u; f_800BCDAC(c); // 801C5364
L_801C5368:;
  c->r[0]=0u+0x00000019u; // 801C5368
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C536C
  goto L_801C53A4; // 801C5370
L_801C5374:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C5374
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5378
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C537C
  c->lr=0x801C5384u; f_8016498C(c); // 801C5380
  cmps(c,0,(int32_t)c->r[3],0); // 801C5384
  if (crb(c,2)) { goto L_801C53A4; } // 801C5388
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C538C
  c->r[0]=0u+0x00000028u; // 801C5390
  W16(c->r[31]+0x00001FECu,c->r[0]); // 801C5394
  c->r[3]=c->r[31]|c->r[31]; // 801C5398
  {uint32_t ea=c->r[31]+0x00002010u; WF32(ea,c->f[0]);} // 801C539C
  c->lr=0x801C53A4u; f_800AC668(c); // 801C53A0
L_801C53A4:;
  c->r[11]=c->r[1]+0x00000090u; // 801C53A4
  c->lr=0x801C53ACu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C53A8
  c->r[0]=R32(c->r[1]+0x00000094u); // 801C53AC
  c->lr=c->r[0]; // 801C53B0
  c->r[1]=c->r[1]+0x00000090u; // 801C53B4
  return; // 801C53B8
}

// fn_801C53BC
void f_801C53BC(Ctx* __restrict c) {
  trace_call(0x801C53BCu);
  {uint32_t ea=c->r[2]+0xFFFFB830u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C53BC
  c->r[0]=0u+0x00000000u; // 801C53C0
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C53C4
  {uint32_t ea=c->r[2]+0xFFFFB834u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C53C8
  {uint32_t ea=c->r[2]+0xFFFFB814u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C53CC
  W32(c->r[3]+0x000021A8u,c->r[0]); // 801C53D0
  W32(c->r[3]+0x000021ACu,c->r[0]); // 801C53D4
  {uint32_t ea=c->r[3]+0x000021B0u; WF32(ea,c->f[3]);} // 801C53D8
  {uint32_t ea=c->r[3]+0x000021B4u; WF32(ea,c->f[2]);} // 801C53DC
  {uint32_t ea=c->r[3]+0x000021B8u; WF32(ea,c->f[1]);} // 801C53E0
  {uint32_t ea=c->r[3]+0x000021BCu; WF32(ea,c->f[0]);} // 801C53E4
  f_801C2D04(c); return; // 801C53E8
}

// fn_801C53EC
void f_801C53EC(Ctx* __restrict c) {
  trace_call(0x801C53ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C53EC
  c->r[0]=c->lr; // 801C53F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C53F4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C53F8
  c->r[31]=c->r[3]|c->r[3]; // 801C53FC
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C5400
  cmps(c,0,(int32_t)c->r[0],21); // 801C5404
  if (crb(c,2)) { goto L_801C5410; } // 801C5408
  goto L_801C5480; // 801C540C
L_801C5410:;
  c->r[4]=c->r[31]|c->r[31]; // 801C5410
  c->r[3]=c->r[1]+0x00000008u; // 801C5414
  c->r[5]=c->r[31]+0x00002090u; // 801C5418
  c->lr=0x801C5420u; f_801C5CC0(c); // 801C541C
  c->r[3]=c->r[1]+0x00000008u; // 801C5420
  c->lr=0x801C5428u; f_801C4B60(c); // 801C5424
  cmps(c,0,(int32_t)c->r[3],0); // 801C5428
  if (!crb(c,2)) { goto L_801C5448; } // 801C542C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C5430
  c->r[3]=c->r[31]+0x000008D0u; // 801C5434
  c->r[4]=c->r[1]+0x00000008u; // 801C5438
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C543C
  c->ctr=c->r[12]; // 801C5440
  if (true) { c->lr=0x801C5448u; dispatch(c,c->ctr); } // 801C5444
L_801C5448:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5448
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C544C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5450
  if (!crb(c,0)) { goto L_801C546C; } // 801C5454
  c->r[3]=0u+0x804D0000u; // 801C5458
  c->r[3]=c->r[3]+0x00003318u; // 801C545C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5460
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C5464
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C5468
L_801C546C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C546C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5470
  fcmp(c,0,c->f[1],c->f[0]); // 801C5474
  if (!crb(c,1)) { goto L_801C5480; } // 801C5478
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C547C
L_801C5480:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C5480
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C5484
  c->lr=c->r[0]; // 801C5488
  c->r[1]=c->r[1]+0x00000040u; // 801C548C
  return; // 801C5490
}

// fn_801C5494
void f_801C5494(Ctx* __restrict c) {
  trace_call(0x801C5494u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5494
  c->r[0]=c->lr; // 801C5498
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C549C
  c->r[11]=c->r[1]+0x00000060u; // 801C54A0
  c->lr=0x801C54A8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C54A4
  c->r[29]=c->r[3]|c->r[3]; // 801C54A8
  c->r[30]=c->r[4]|c->r[4]; // 801C54AC
  c->r[3]=c->r[3]+0x000008ECu; // 801C54B0
  c->r[4]=c->r[29]+0x00001F15u; // 801C54B4
  c->lr=0x801C54BCu; f_80075440(c); // 801C54B8
  W32(c->r[30]+0x00000014u,c->r[3]); // 801C54BC
  c->r[5]=c->r[3]|c->r[3]; // 801C54C0
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C54C4
  c->r[3]=c->r[29]+0x00000C88u; // 801C54C8
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C54CC
  c->r[4]=c->r[29]+0x000008ECu; // 801C54D0
  c->r[6]=0u+0x00000000u; // 801C54D4
  c->r[7]=0u+0x00000000u; // 801C54D8
  c->lr=0x801C54E0u; f_800BB0C8(c); // 801C54DC
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C54E0
  c->r[31]=0u+0x0000001Fu; // 801C54E4
  {uint32_t ea=c->r[29]+0x00001FFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C54E8
  c->r[3]=c->r[1]+0x00000014u; // 801C54EC
  c->f[2]=c->f[1]; // 801C54F0
  W16(c->r[29]+0x00001FEEu,c->r[31]); // 801C54F4
  c->f[3]=c->f[1]; // 801C54F8
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C54FC
  c->lr=0x801C5504u; f_800521A0(c); // 801C5500
  c->r[4]=c->r[3]|c->r[3]; // 801C5504
  c->r[3]=c->r[30]+0x00000024u; // 801C5508
  c->lr=0x801C5510u; f_8003F468(c); // 801C550C
  {uint32_t ea=c->r[2]+0xFFFFB830u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5510
  c->r[4]=c->r[29]+0x000008D0u; // 801C5514
  c->r[3]=c->r[1]+0x00000020u; // 801C5518
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 801C551C
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801C5520
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C5524
  c->ctr=c->r[12]; // 801C5528
  if (true) { c->lr=0x801C5530u; dispatch(c,c->ctr); } // 801C552C
  c->r[3]=c->r[1]+0x00000008u; // 801C5530
  c->r[4]=c->r[1]+0x00000020u; // 801C5534
  c->lr=0x801C553Cu; f_80032FD8(c); // 801C5538
  c->r[3]=c->r[30]+0x00000038u; // 801C553C
  c->r[4]=c->r[1]+0x00000008u; // 801C5540
  c->lr=0x801C5548u; f_8003F468(c); // 801C5544
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5548
  c->r[3]=c->r[29]|c->r[29]; // 801C554C
  {uint32_t ea=c->r[29]+0x000021E0u; WF32(ea,c->f[0]);} // 801C5550
  c->lr=0x801C5558u; f_801C5874(c); // 801C5554
  W16(c->r[29]+0x00001FEEu,c->r[31]); // 801C5558
  c->r[11]=c->r[1]+0x00000060u; // 801C555C
  c->r[3]=R32(c->r[29]+0x00000974u); // 801C5560
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C5564
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C5568
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C556C
  c->r[3]=R32(c->r[29]+0x00000974u); // 801C5570
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C5574
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C5578
  W32(c->r[30]+0x00000018u,c->r[0]); // 801C557C
  c->lr=0x801C5584u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C5580
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C5584
  c->lr=c->r[0]; // 801C5588
  c->r[1]=c->r[1]+0x00000060u; // 801C558C
  return; // 801C5590
}

// fn_801C5594
void f_801C5594(Ctx* __restrict c) {
  trace_call(0x801C5594u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5594
  c->r[0]=c->lr; // 801C5598
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C559C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801C55A0
  c->r[31]=c->r[3]|c->r[3]; // 801C55A4
  c->lr=0x801C55ACu; f_801C2758(c); // 801C55A8
  c->r[0]=R16(c->r[31]+0x00001FEEu); // 801C55AC
  cmps(c,0,(int32_t)c->r[0],33); // 801C55B0
  if (crb(c,2)) { goto L_801C56DC; } // 801C55B4
  if (!crb(c,0)) { goto L_801C55C8; } // 801C55B8
  cmps(c,0,(int32_t)c->r[0],32); // 801C55BC
  if (!crb(c,0)) { goto L_801C55D0; } // 801C55C0
  goto L_801C56DC; // 801C55C4
L_801C55C8:;
  cmps(c,0,(int32_t)c->r[0],35); // 801C55C8
  if (!crb(c,0)) { goto L_801C56DC; } // 801C55CC
L_801C55D0:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C55D0
  c->r[4]=c->r[31]+0x000008D0u; // 801C55D4
  c->r[3]=c->r[1]+0x00000024u; // 801C55D8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C55DC
  c->ctr=c->r[12]; // 801C55E0
  if (true) { c->lr=0x801C55E8u; dispatch(c,c->ctr); } // 801C55E4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C55E8
  c->r[3]=c->r[1]+0x00000018u; // 801C55EC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C55F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C55F4
  c->lr=0x801C55FCu; f_800521A0(c); // 801C55F8
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C55FC
  c->r[3]=c->r[31]|c->r[31]; // 801C5600
  c->r[4]=c->r[1]+0x00000008u; // 801C5604
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C5608
  c->lr=0x801C5610u; f_801C4438(c); // 801C560C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5610
  c->r[3]=c->r[1]+0x0000000Cu; // 801C5614
  c->r[4]=c->r[31]+0x000021ECu; // 801C5618
  c->lr=0x801C5620u; f_80064C58(c); // 801C561C
  c->r[3]=c->r[1]+0x00000018u; // 801C5620
  c->r[5]=c->r[1]+0x0000000Cu; // 801C5624
  c->r[4]=c->r[3]|c->r[3]; // 801C5628
  c->lr=0x801C5630u; f_80064C34(c); // 801C562C
  c->r[0]=R8(c->r[31]+0x00002204u); // 801C5630
  cmps(c,0,(int32_t)c->r[0],0); // 801C5634
  if (crb(c,2)) { goto L_801C567C; } // 801C5638
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C563C
  {uint32_t ea=c->r[31]+0x000021F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5640
  {uint32_t ea=c->r[31]+0x000021E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5644
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801C5648
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C564C
  {uint32_t ea=c->r[31]+0x000021E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5650
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801C5654
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801C5658
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C565C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C5660
  c->lr=0x801C5668u; f_8018C264(c); // 801C5664
  c->f[1]=-c->f[1]; // 801C5668
  {uint32_t ea=c->r[31]+0x000021FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C566C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C5670
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C5674
  goto L_801C56B8; // 801C5678
L_801C567C:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C567C
  {uint32_t ea=c->r[31]+0x00002200u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5680
  {uint32_t ea=c->r[31]+0x000021E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5684
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 801C5688
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C568C
  {uint32_t ea=c->r[31]+0x000021E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5690
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801C5694
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801C5698
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C569C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C56A0
  c->lr=0x801C56A8u; f_8018C264(c); // 801C56A4
  c->f[1]=-c->f[1]; // 801C56A8
  {uint32_t ea=c->r[31]+0x000021FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C56AC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C56B0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801C56B4
L_801C56B8:;
  c->r[3]=c->r[1]+0x00000024u; // 801C56B8
  c->r[4]=c->r[1]+0x00000018u; // 801C56BC
  c->lr=0x801C56C4u; f_80032FF4(c); // 801C56C0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C56C4
  c->r[3]=c->r[31]+0x000008D0u; // 801C56C8
  c->r[4]=c->r[1]+0x00000024u; // 801C56CC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C56D0
  c->ctr=c->r[12]; // 801C56D4
  if (true) { c->lr=0x801C56DCu; dispatch(c,c->ctr); } // 801C56D8
L_801C56DC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C56DC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801C56E0
  c->lr=c->r[0]; // 801C56E4
  c->r[1]=c->r[1]+0x00000060u; // 801C56E8
  return; // 801C56EC
}

// fn_801C56F0
void f_801C56F0(Ctx* __restrict c) {
  trace_call(0x801C56F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C56F0
  c->r[0]=c->lr; // 801C56F4
  c->r[4]=0u+0x804D0000u; // 801C56F8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801C56FC
  c->r[4]=c->r[4]+0x00003318u; // 801C5700
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801C5704
  c->r[31]=c->r[3]|c->r[3]; // 801C5708
  {uint32_t ea=c->r[3]+0x000021E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C570C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5710
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C5714
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C5718
  cmps(c,0,(int32_t)c->r[0],33); // 801C571C
  {uint32_t ea=c->r[3]+0x000021E0u; WF32(ea,c->f[0]);} // 801C5720
  if (crb(c,2)) { goto L_801C5748; } // 801C5724
  if (!crb(c,0)) { goto L_801C573C; } // 801C5728
  cmps(c,0,(int32_t)c->r[0],31); // 801C572C
  if (crb(c,2)) { goto L_801C5748; } // 801C5730
  if (!crb(c,0)) { goto L_801C57A4; } // 801C5734
  goto L_801C57F4; // 801C5738
L_801C573C:;
  cmps(c,0,(int32_t)c->r[0],35); // 801C573C
  if (!crb(c,0)) { goto L_801C57F4; } // 801C5740
  goto L_801C57A4; // 801C5744
L_801C5748:;
  {uint32_t ea=c->r[3]+0x000021E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5748
  {uint32_t ea=c->r[3]+0x000021D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C574C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5750
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5754
  if (!crb(c,2)) { goto L_801C5770; } // 801C5758
  c->r[0]=0u+0x00000014u; // 801C575C
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801C5760
  c->r[3]=c->r[31]|c->r[31]; // 801C5764
  c->lr=0x801C576Cu; f_800AC668(c); // 801C5768
  goto L_801C57F4; // 801C576C
L_801C5770:;
  c->r[4]=0u+0x804D0000u; // 801C5770
  {uint32_t ea=c->r[3]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5774
  c->r[4]=c->r[4]+0x00003318u; // 801C5778
  {uint32_t ea=c->r[2]+0xFFFFB830u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C577C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5780
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801C5784
  fcmp(c,0,c->f[1],c->f[0]); // 801C5788
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[1]);} // 801C578C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5790
  if (!crb(c,2)) { goto L_801C57F4; } // 801C5794
  c->r[3]=c->r[31]|c->r[31]; // 801C5798
  c->lr=0x801C57A0u; f_801C5874(c); // 801C579C
  goto L_801C57F4; // 801C57A0
L_801C57A4:;
  {uint32_t ea=c->r[3]+0x00002010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C57A4
  {uint32_t ea=c->r[3]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C57A8
  {uint32_t ea=c->r[3]+0x000021DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C57AC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C57B0
  fcmp(c,0,c->f[1],c->f[0]); // 801C57B4
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[1]);} // 801C57B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C57BC
  if (!crb(c,2)) { goto L_801C57F4; } // 801C57C0
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C57C4
  cmpu(c,0,c->r[0],0x00000020u); // 801C57C8
  if (!crb(c,2)) { goto L_801C57DC; } // 801C57CC
  c->r[0]=0u+0x0000001Fu; // 801C57D0
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C57D4
  goto L_801C57EC; // 801C57D8
L_801C57DC:;
  cmpu(c,0,c->r[0],0x00000022u); // 801C57DC
  if (!crb(c,2)) { goto L_801C57EC; } // 801C57E0
  c->r[0]=0u+0x00000021u; // 801C57E4
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C57E8
L_801C57EC:;
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C57EC
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[0]);} // 801C57F0
L_801C57F4:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C57F4
  c->r[4]=c->r[31]+0x000008D0u; // 801C57F8
  c->r[3]=c->r[1]+0x00000044u; // 801C57FC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C5800
  c->ctr=c->r[12]; // 801C5804
  if (true) { c->lr=0x801C580Cu; dispatch(c,c->ctr); } // 801C5808
  c->r[3]=c->r[1]+0x00000014u; // 801C580C
  c->lr=0x801C5814u; f_80264680(c); // 801C5810
  {uint32_t ea=c->r[2]+0xFFFFB840u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5814
  c->r[3]=c->r[1]+0x00000014u; // 801C5818
  c->r[4]=c->r[3]|c->r[3]; // 801C581C
  c->f[2]=c->f[1]; // 801C5820
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801C5824
  c->f[3]=c->f[1]; // 801C5828
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C582C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801C5830
  c->lr=0x801C5838u; f_80264E54(c); // 801C5834
  c->r[3]=c->r[1]+0x00000044u; // 801C5838
  c->r[4]=c->r[1]+0x00000014u; // 801C583C
  c->r[5]=c->r[3]|c->r[3]; // 801C5840
  c->lr=0x801C5848u; f_802646E0(c); // 801C5844
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C5848
  c->r[3]=c->r[31]+0x000008D0u; // 801C584C
  c->r[4]=c->r[1]+0x00000044u; // 801C5850
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C5854
  c->ctr=c->r[12]; // 801C5858
  if (true) { c->lr=0x801C5860u; dispatch(c,c->ctr); } // 801C585C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801C5860
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801C5864
  c->lr=c->r[0]; // 801C5868
  c->r[1]=c->r[1]+0x00000080u; // 801C586C
  return; // 801C5870
}

// fn_801C5874
void f_801C5874(Ctx* __restrict c) {
  trace_call(0x801C5874u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5874
  c->r[0]=c->lr; // 801C5878
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C587C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801C5880
  W32(c->r[1]+0x00000098u,c->r[30]); // 801C5884
  c->r[30]=c->r[3]|c->r[3]; // 801C5888
  c->lr=0x801C5890u; f_80061A4C(c); // 801C588C
  c->r[31]=c->r[3]|c->r[3]; // 801C5890
  c->r[3]=c->r[1]+0x00000014u; // 801C5894
  c->r[4]=c->r[31]+0x00000390u; // 801C5898
  c->r[5]=c->r[31]+0x00000384u; // 801C589C
  c->lr=0x801C58A4u; f_8007B8A4(c); // 801C58A0
  c->r[3]=c->r[1]+0x00000014u; // 801C58A4
  c->r[4]=c->r[1]+0x00000008u; // 801C58A8
  c->lr=0x801C58B0u; f_80265750(c); // 801C58AC
  c->r[3]=c->r[1]+0x00000008u; // 801C58B0
  c->r[4]=c->r[31]+0x0000039Cu; // 801C58B4
  c->r[5]=c->r[1]+0x00000038u; // 801C58B8
  c->lr=0x801C58C0u; f_80265810(c); // 801C58BC
  c->r[3]=c->r[30]+0x000021ECu; // 801C58C0
  c->r[4]=c->r[1]+0x00000038u; // 801C58C4
  c->lr=0x801C58CCu; f_8003F468(c); // 801C58C8
  c->r[0]=R16(c->r[30]+0x00001FEEu); // 801C58CC
  cmpu(c,0,c->r[0],0x00000021u); // 801C58D0
  if (!crb(c,2)) { goto L_801C58F4; } // 801C58D4
  c->r[3]=c->r[30]+0x000021ECu; // 801C58D8
  {uint32_t ea=c->r[2]+0xFFFFB7FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C58DC
  c->r[4]=c->r[3]|c->r[3]; // 801C58E0
  c->lr=0x801C58E8u; f_80064C58(c); // 801C58E4
  c->r[0]=0u+0x00000020u; // 801C58E8
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C58EC
  goto L_801C5904; // 801C58F0
L_801C58F4:;
  cmpu(c,0,c->r[0],0x0000001Fu); // 801C58F4
  if (!crb(c,2)) { goto L_801C5904; } // 801C58F8
  c->r[0]=0u+0x00000022u; // 801C58FC
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C5900
L_801C5904:;
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5904
  c->r[4]=c->r[30]+0x000008D0u; // 801C5908
  c->r[3]=c->r[1]+0x00000068u; // 801C590C
  {uint32_t ea=c->r[30]+0x000021F0u; WF32(ea,c->f[0]);} // 801C5910
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C5914
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C5918
  c->ctr=c->r[12]; // 801C591C
  if (true) { c->lr=0x801C5924u; dispatch(c,c->ctr); } // 801C5920
  c->r[3]=c->r[1]+0x0000005Cu; // 801C5924
  c->r[4]=c->r[1]+0x00000068u; // 801C5928
  c->lr=0x801C5930u; f_80032FD8(c); // 801C592C
  {uint32_t ea=c->r[30]+0x000021DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5930
  c->r[3]=c->r[1]+0x0000002Cu; // 801C5934
  c->r[4]=c->r[30]+0x000021ECu; // 801C5938
  c->lr=0x801C5940u; f_80064C58(c); // 801C593C
  c->r[3]=c->r[1]+0x00000050u; // 801C5940
  c->r[4]=c->r[1]+0x0000005Cu; // 801C5944
  c->r[5]=c->r[1]+0x0000002Cu; // 801C5948
  c->lr=0x801C5950u; f_80064C34(c); // 801C594C
  c->r[3]=c->r[1]+0x00000020u; // 801C5950
  c->r[4]=c->r[1]+0x0000005Cu; // 801C5954
  c->r[5]=c->r[1]+0x00000050u; // 801C5958
  c->lr=0x801C5960u; f_80064C34(c); // 801C595C
  {uint32_t ea=c->r[2]+0xFFFFB844u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5960
  c->r[3]=c->r[1]+0x00000044u; // 801C5964
  c->r[4]=c->r[1]+0x00000020u; // 801C5968
  c->lr=0x801C5970u; f_80064C58(c); // 801C596C
  c->r[3]=c->r[30]+0x000021F8u; // 801C5970
  c->r[4]=c->r[1]+0x00000044u; // 801C5974
  c->lr=0x801C597Cu; f_8003F468(c); // 801C5978
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C597C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5980
  {uint32_t ea=c->r[1]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5984
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5988
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 801C598C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C5990
  fcmp(c,0,c->f[2],c->f[0]); // 801C5994
  if (!crb(c,1)) { goto L_801C59A8; } // 801C5998
  c->r[0]=0u+0x00000001u; // 801C599C
  W8(c->r[30]+0x00002204u,c->r[0]); // 801C59A0
  goto L_801C59B0; // 801C59A4
L_801C59A8:;
  c->r[0]=0u+0x00000000u; // 801C59A8
  W8(c->r[30]+0x00002204u,c->r[0]); // 801C59AC
L_801C59B0:;
  c->r[0]=R8(c->r[30]+0x00002204u); // 801C59B0
  cmps(c,0,(int32_t)c->r[0],0); // 801C59B4
  if (crb(c,2)) { goto L_801C59DC; } // 801C59B8
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C59BC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C59C0
  {uint32_t ea=c->r[2]+0xFFFFB848u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C59C4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801C59C8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801C59CC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C59D0
  {uint32_t ea=c->r[30]+0x000021E4u; WF32(ea,c->f[0]);} // 801C59D4
  goto L_801C59F8; // 801C59D8
L_801C59DC:;
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C59DC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C59E0
  {uint32_t ea=c->r[2]+0xFFFFB848u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C59E4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801C59E8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 801C59EC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C59F0
  {uint32_t ea=c->r[30]+0x000021E4u; WF32(ea,c->f[0]);} // 801C59F4
L_801C59F8:;
  {uint32_t ea=c->r[2]+0xFFFFB80Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C59F8
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C59FC
  {uint32_t ea=c->r[30]+0x000021E8u; WF32(ea,c->f[1]);} // 801C5A00
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C5A04
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801C5A08
  c->r[30]=R32(c->r[1]+0x00000098u); // 801C5A0C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C5A10
  c->lr=c->r[0]; // 801C5A14
  c->r[1]=c->r[1]+0x000000A0u; // 801C5A18
  return; // 801C5A1C
}

// fn_801C5A20
void f_801C5A20(Ctx* __restrict c) {
  trace_call(0x801C5A20u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5A20
  c->r[0]=c->lr; // 801C5A24
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801C5A28
  c->r[0]=0u+0x00000028u; // 801C5A2C
  W32(c->r[1]+0x000000ECu,c->r[31]); // 801C5A30
  c->r[31]=c->r[4]|c->r[4]; // 801C5A34
  W32(c->r[1]+0x000000E8u,c->r[30]); // 801C5A38
  c->r[30]=c->r[3]|c->r[3]; // 801C5A3C
  c->r[4]=c->r[30]+0x000008D0u; // 801C5A40
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C5A44
  c->r[3]=c->r[1]+0x000000B0u; // 801C5A48
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C5A4C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C5A50
  c->ctr=c->r[12]; // 801C5A54
  if (true) { c->lr=0x801C5A5Cu; dispatch(c,c->ctr); } // 801C5A58
  c->r[3]=c->r[1]+0x00000044u; // 801C5A5C
  c->r[4]=c->r[1]+0x000000B0u; // 801C5A60
  c->lr=0x801C5A68u; f_80032FD8(c); // 801C5A64
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C5A68
  c->r[4]=c->r[30]+0x000008D0u; // 801C5A6C
  c->r[3]=c->r[1]+0x00000050u; // 801C5A70
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C5A74
  c->ctr=c->r[12]; // 801C5A78
  if (true) { c->lr=0x801C5A80u; dispatch(c,c->ctr); } // 801C5A7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5A80
  c->r[3]=c->r[1]+0x00000020u; // 801C5A84
  {uint32_t ea=c->r[1]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5A88
  {uint32_t ea=c->r[1]+0x00000070u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5A8C
  c->lr=0x801C5A94u; f_800521A0(c); // 801C5A90
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C5A94
  c->r[4]=c->r[30]+0x000008D0u; // 801C5A98
  c->r[3]=c->r[1]+0x00000080u; // 801C5A9C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C5AA0
  c->ctr=c->r[12]; // 801C5AA4
  if (true) { c->lr=0x801C5AACu; dispatch(c,c->ctr); } // 801C5AA8
  c->r[3]=c->r[1]+0x0000002Cu; // 801C5AAC
  c->r[4]=c->r[1]+0x00000080u; // 801C5AB0
  c->lr=0x801C5AB8u; f_800BC9F4(c); // 801C5AB4
  c->r[4]=c->r[1]+0x0000002Cu; // 801C5AB8
  c->r[3]=c->r[1]+0x00000038u; // 801C5ABC
  c->r[5]=c->r[1]+0x00000020u; // 801C5AC0
  c->lr=0x801C5AC8u; f_80064C34(c); // 801C5AC4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5AC8
  c->r[3]=c->r[1]+0x00000038u; // 801C5ACC
  {uint32_t ea=c->r[2]+0xFFFFB830u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5AD0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C5AD4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801C5AD8
  c->lr=0x801C5AE0u; f_80065368(c); // 801C5ADC
  cmps(c,0,(int32_t)c->r[3],0); // 801C5AE0
  if (!crb(c,2)) { goto L_801C5AF4; } // 801C5AE4
  c->r[3]=c->r[1]+0x00000038u; // 801C5AE8
  c->r[4]=c->r[3]|c->r[3]; // 801C5AEC
  c->lr=0x801C5AF4u; f_80265750(c); // 801C5AF0
L_801C5AF4:;
  {uint32_t ea=c->r[2]+0xFFFFB840u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5AF4
  c->r[3]=c->r[1]+0x00000008u; // 801C5AF8
  c->r[4]=c->r[1]+0x00000038u; // 801C5AFC
  c->lr=0x801C5B04u; f_80064C58(c); // 801C5B00
  c->r[3]=c->r[1]+0x00000014u; // 801C5B04
  c->r[4]=c->r[1]+0x00000044u; // 801C5B08
  c->r[5]=c->r[1]+0x00000008u; // 801C5B0C
  c->lr=0x801C5B14u; f_80064C34(c); // 801C5B10
  c->r[3]=c->r[31]+0x00000010u; // 801C5B14
  c->r[4]=c->r[1]+0x00000014u; // 801C5B18
  c->lr=0x801C5B20u; f_8003F468(c); // 801C5B1C
  {uint32_t ea=c->r[2]+0xFFFFB7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5B20
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5B24
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C5B28
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801C5B2C
  c->r[31]=R32(c->r[1]+0x000000ECu); // 801C5B30
  c->r[30]=R32(c->r[1]+0x000000E8u); // 801C5B34
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801C5B38
  c->lr=c->r[0]; // 801C5B3C
  c->r[1]=c->r[1]+0x000000F0u; // 801C5B40
  return; // 801C5B44
}

// fn_801C5B48
void f_801C5B48(Ctx* __restrict c) {
  trace_call(0x801C5B48u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5B48
  c->r[0]=c->lr; // 801C5B4C
  W32(c->r[1]+0x00000094u,c->r[0]); // 801C5B50
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801C5B54
  c->r[31]=c->r[4]|c->r[4]; // 801C5B58
  W32(c->r[1]+0x00000088u,c->r[30]); // 801C5B5C
  c->r[30]=c->r[3]|c->r[3]; // 801C5B60
  c->r[4]=c->r[30]+0x000008D0u; // 801C5B64
  c->r[3]=c->r[1]+0x00000054u; // 801C5B68
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C5B6C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C5B70
  c->ctr=c->r[12]; // 801C5B74
  if (true) { c->lr=0x801C5B7Cu; dispatch(c,c->ctr); } // 801C5B78
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5B7C
  c->r[3]=c->r[1]+0x00000048u; // 801C5B80
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5B84
  {uint32_t ea=c->r[1]+0x00000080u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5B88
  c->lr=0x801C5B90u; f_800521A0(c); // 801C5B8C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5B90
  c->r[3]=c->r[1]+0x0000003Cu; // 801C5B94
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5B98
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5B9C
  c->lr=0x801C5BA4u; f_800521A0(c); // 801C5BA0
  c->r[3]=c->r[1]+0x00000030u; // 801C5BA4
  c->r[4]=c->r[31]+0x00000010u; // 801C5BA8
  c->r[5]=c->r[1]+0x00000048u; // 801C5BAC
  c->lr=0x801C5BB4u; f_8007B8A4(c); // 801C5BB0
  c->r[3]=c->r[1]+0x00000030u; // 801C5BB4
  c->lr=0x801C5BBCu; f_80065368(c); // 801C5BB8
  cmps(c,0,(int32_t)c->r[3],0); // 801C5BBC
  if (!crb(c,2)) { goto L_801C5BD0; } // 801C5BC0
  c->r[3]=c->r[1]+0x00000030u; // 801C5BC4
  c->r[4]=c->r[3]|c->r[3]; // 801C5BC8
  c->lr=0x801C5BD0u; f_80265750(c); // 801C5BCC
L_801C5BD0:;
  {uint32_t ea=c->r[2]+0xFFFFB84Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5BD0
  c->r[3]=c->r[1]+0x00000018u; // 801C5BD4
  c->r[4]=c->r[1]+0x0000003Cu; // 801C5BD8
  c->lr=0x801C5BE0u; f_80064C58(c); // 801C5BDC
  c->r[3]=c->r[1]+0x00000024u; // 801C5BE0
  c->r[4]=c->r[1]+0x00000018u; // 801C5BE4
  c->r[5]=c->r[1]+0x00000030u; // 801C5BE8
  c->lr=0x801C5BF0u; f_80064C34(c); // 801C5BEC
  c->r[3]=c->r[1]+0x00000024u; // 801C5BF0
  c->lr=0x801C5BF8u; f_80065368(c); // 801C5BF4
  cmps(c,0,(int32_t)c->r[3],0); // 801C5BF8
  if (!crb(c,2)) { goto L_801C5C0C; } // 801C5BFC
  c->r[3]=c->r[1]+0x00000024u; // 801C5C00
  c->r[4]=c->r[3]|c->r[3]; // 801C5C04
  c->lr=0x801C5C0Cu; f_80265750(c); // 801C5C08
L_801C5C0C:;
  c->r[3]=c->r[1]+0x00000054u; // 801C5C0C
  c->lr=0x801C5C14u; f_80264680(c); // 801C5C10
  c->r[3]=c->r[1]+0x00000054u; // 801C5C14
  c->r[4]=c->r[1]+0x00000024u; // 801C5C18
  c->lr=0x801C5C20u; f_8007513C(c); // 801C5C1C
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5C20
  c->r[3]=c->r[30]|c->r[30]; // 801C5C24
  c->r[4]=c->r[1]+0x00000008u; // 801C5C28
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C5C2C
  c->lr=0x801C5C34u; f_801C4438(c); // 801C5C30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5C34
  c->r[3]=c->r[1]+0x0000000Cu; // 801C5C38
  c->r[4]=c->r[1]+0x00000024u; // 801C5C3C
  c->lr=0x801C5C44u; f_80064C58(c); // 801C5C40
  c->r[3]=c->r[1]+0x00000048u; // 801C5C44
  c->r[5]=c->r[1]+0x0000000Cu; // 801C5C48
  c->r[4]=c->r[3]|c->r[3]; // 801C5C4C
  c->lr=0x801C5C54u; f_80064C34(c); // 801C5C50
  c->r[3]=c->r[1]+0x00000054u; // 801C5C54
  c->r[4]=c->r[1]+0x00000048u; // 801C5C58
  c->lr=0x801C5C60u; f_80032FF4(c); // 801C5C5C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C5C60
  c->r[3]=c->r[30]+0x000008D0u; // 801C5C64
  c->r[4]=c->r[1]+0x00000054u; // 801C5C68
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C5C6C
  c->ctr=c->r[12]; // 801C5C70
  if (true) { c->lr=0x801C5C78u; dispatch(c,c->ctr); } // 801C5C74
  c->r[3]=c->r[1]+0x00000024u; // 801C5C78
  c->lr=0x801C5C80u; f_802657AC(c); // 801C5C7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5C80
  {uint32_t ea=c->r[30]+0x00002010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5C84
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5C88
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[3],c->f[1],-c->f[2])); // 801C5C8C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5C90
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[1]);} // 801C5C94
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C5C98
  if (!crb(c,2)) { goto L_801C5CA8; } // 801C5C9C
  c->r[0]=0u+0x00000064u; // 801C5CA0
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C5CA4
L_801C5CA8:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801C5CA8
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801C5CAC
  c->r[30]=R32(c->r[1]+0x00000088u); // 801C5CB0
  c->lr=c->r[0]; // 801C5CB4
  c->r[1]=c->r[1]+0x00000090u; // 801C5CB8
  return; // 801C5CBC
}

// fn_801C5CC0
void f_801C5CC0(Ctx* __restrict c) {
  trace_call(0x801C5CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5CC0
  c->r[0]=c->lr; // 801C5CC4
  W32(c->r[1]+0x00000174u,c->r[0]); // 801C5CC8
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[31]);} // 801C5CCC
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,31,ea,0,0);} // 801C5CD0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[30]);} // 801C5CD4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,30,ea,0,0);} // 801C5CD8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[29]);} // 801C5CDC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,29,ea,0,0);} // 801C5CE0
  c->r[0]=0u+0x43300000u; // 801C5CE4
  cmps(c,0,(int32_t)c->r[5],0); // 801C5CE8
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 801C5CEC
  c->r[31]=c->r[4]|c->r[4]; // 801C5CF0
  W32(c->r[1]+0x00000138u,c->r[30]); // 801C5CF4
  c->r[30]=c->r[3]|c->r[3]; // 801C5CF8
  W32(c->r[1]+0x00000120u,c->r[0]); // 801C5CFC
  W32(c->r[1]+0x00000128u,c->r[0]); // 801C5D00
  if (!crb(c,2)) { goto L_801C5DB0; } // 801C5D04
  {uint32_t ea=c->r[4]+0x000008D0u; c->r[12]=R32(ea); c->r[4]=ea;} // 801C5D08
  c->r[3]=c->r[1]+0x000000ECu; // 801C5D0C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C5D10
  c->ctr=c->r[12]; // 801C5D14
  if (true) { c->lr=0x801C5D1Cu; dispatch(c,c->ctr); } // 801C5D18
  c->r[3]=c->r[1]+0x000000ECu; // 801C5D1C
  c->r[4]=c->r[31]+0x000021C4u; // 801C5D20
  c->lr=0x801C5D28u; f_80032FF4(c); // 801C5D24
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C5D28
  c->r[3]=c->r[31]+0x000008D0u; // 801C5D2C
  c->r[4]=c->r[1]+0x000000ECu; // 801C5D30
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C5D34
  c->ctr=c->r[12]; // 801C5D38
  if (true) { c->lr=0x801C5D40u; dispatch(c,c->ctr); } // 801C5D3C
  {uint32_t ea=c->r[31]+0x000021D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5D40
  c->r[4]=c->r[31]|c->r[31]; // 801C5D44
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5D48
  c->r[3]=c->r[1]+0x000000BCu; // 801C5D4C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801C5D50
  c->r[5]=c->r[1]+0x0000005Cu; // 801C5D54
  {uint32_t ea=c->r[2]+0xFFFFB7FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5D58
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 801C5D5C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801C5D60
  c->lr=0x801C5D68u; f_801C3C7C(c); // 801C5D64
  c->r[0]=0u+0x00000006u; // 801C5D68
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 801C5D6C
  c->r[4]=c->r[1]+0x000000B8u; // 801C5D70
  c->ctr=c->r[0]; // 801C5D74
L_801C5D78:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801C5D78
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801C5D7C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801C5D80
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801C5D84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5D78; } // 801C5D88
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5D8C
  c->r[3]=c->r[1]+0x00000050u; // 801C5D90
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5D94
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5D98
  c->lr=0x801C5DA0u; f_800521A0(c); // 801C5D9C
  c->r[3]=c->r[31]+0x000021C4u; // 801C5DA0
  c->r[4]=c->r[1]+0x00000050u; // 801C5DA4
  c->lr=0x801C5DACu; f_8003F468(c); // 801C5DA8
  goto L_801C5DE4; // 801C5DAC
L_801C5DB0:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5DB0
  c->r[4]=c->r[5]|c->r[5]; // 801C5DB4
  c->r[3]=c->r[1]+0x0000008Cu; // 801C5DB8
  c->lr=0x801C5DC0u; f_801C44B8(c); // 801C5DBC
  c->r[0]=0u+0x00000006u; // 801C5DC0
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 801C5DC4
  c->r[4]=c->r[1]+0x00000088u; // 801C5DC8
  c->ctr=c->r[0]; // 801C5DCC
L_801C5DD0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801C5DD0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801C5DD4
  W32(c->r[5]+0x00000004u,c->r[3]); // 801C5DD8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801C5DDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5DD0; } // 801C5DE0
L_801C5DE4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C5DE4
  c->lr=0x801C5DECu; f_801C3C1C(c); // 801C5DE8
  {uint32_t ea=c->r[2]+0xFFFFB830u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5DEC
  {uint32_t ea=c->r[31]+0x000021C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5DF0
  {uint32_t ea=c->r[31]+0x000021B0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C5DF4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[2]); // 801C5DF8
  fcmp(c,0,c->f[1],c->f[0]); // 801C5DFC
  if (!crb(c,0)) { goto L_801C5E10; } // 801C5E00
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[2]); // 801C5E04
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 801C5E08
  c->f[31]=c->ps1[31]=S(-std::fma(c->f[31],c->f[0],-c->f[31])); // 801C5E0C
L_801C5E10:;
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5E10
  fcmp(c,0,c->f[31],c->f[0]); // 801C5E14
  if (!crb(c,0)) { goto L_801C5E20; } // 801C5E18
  c->f[31]=c->f[0]; // 801C5E1C
L_801C5E20:;
  {uint32_t ea=c->r[2]+0xFFFFB830u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5E20
  {uint32_t ea=c->r[31]+0x000021C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5E24
  {uint32_t ea=c->r[31]+0x000021B4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801C5E28
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[2]); // 801C5E2C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5E30
  if (!crb(c,0)) { goto L_801C5E48; } // 801C5E34
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801C5E38
  {uint32_t ea=c->r[31]+0x000021B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5E3C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801C5E40
  c->f[30]=c->ps1[30]=S(-std::fma(c->f[0],c->f[1],-c->f[30])); // 801C5E44
L_801C5E48:;
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5E48
  fcmp(c,0,c->f[30],c->f[0]); // 801C5E4C
  if (!crb(c,0)) { goto L_801C5E58; } // 801C5E50
  c->f[30]=c->f[0]; // 801C5E54
L_801C5E58:;
  c->r[0]=R32(c->r[31]+0x000021A8u); // 801C5E58
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C5E5C
  c->r[0]=c->r[0]^0x80000000u; // 801C5E60
  {uint32_t ea=c->r[2]+0xFFFFB850u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5E64
  W32(c->r[1]+0x00000124u,c->r[0]); // 801C5E68
  {uint32_t ea=c->r[1]+0x00000120u; c->f[1]=RF64(ea);} // 801C5E6C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C5E70
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C5E74
  c->lr=0x801C5E7Cu; f_803942AC(c); // 801C5E78
  c->f[29]=c->f[1]; // 801C5E7C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5E80
  {uint32_t ea=c->r[30]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5E84
  c->r[3]=c->r[1]+0x00000038u; // 801C5E88
  {uint32_t ea=c->r[30]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5E8C
  c->lr=0x801C5E94u; f_800521A0(c); // 801C5E90
  c->f[1]=c->f[31]; // 801C5E94
  c->r[3]=c->r[1]+0x00000044u; // 801C5E98
  c->r[4]=c->r[1]+0x00000038u; // 801C5E9C
  c->lr=0x801C5EA4u; f_80064C58(c); // 801C5EA0
  c->f[1]=c->f[29]; // 801C5EA4
  c->r[3]=c->r[1]+0x00000080u; // 801C5EA8
  c->r[4]=c->r[1]+0x00000044u; // 801C5EAC
  c->lr=0x801C5EB4u; f_80064C58(c); // 801C5EB0
  c->r[0]=R32(c->r[31]+0x000021ACu); // 801C5EB4
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C5EB8
  c->r[0]=c->r[0]^0x80000000u; // 801C5EBC
  {uint32_t ea=c->r[2]+0xFFFFB850u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5EC0
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 801C5EC4
  {uint32_t ea=c->r[1]+0x00000128u; c->f[1]=RF64(ea);} // 801C5EC8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C5ECC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C5ED0
  c->lr=0x801C5ED8u; f_803942AC(c); // 801C5ED4
  c->f[29]=c->f[1]; // 801C5ED8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5EDC
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5EE0
  c->r[3]=c->r[1]+0x00000020u; // 801C5EE4
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5EE8
  c->lr=0x801C5EF0u; f_800521A0(c); // 801C5EEC
  c->f[1]=c->f[30]; // 801C5EF0
  c->r[3]=c->r[1]+0x0000002Cu; // 801C5EF4
  c->r[4]=c->r[1]+0x00000020u; // 801C5EF8
  c->lr=0x801C5F00u; f_80064C58(c); // 801C5EFC
  c->f[1]=c->f[29]; // 801C5F00
  c->r[3]=c->r[1]+0x00000074u; // 801C5F04
  c->r[4]=c->r[1]+0x0000002Cu; // 801C5F08
  c->lr=0x801C5F10u; f_80064C58(c); // 801C5F0C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5F10
  c->r[3]=c->r[1]+0x00000008u; // 801C5F14
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5F18
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5F1C
  c->lr=0x801C5F24u; f_800521A0(c); // 801C5F20
  c->r[3]=c->r[1]+0x00000014u; // 801C5F24
  c->r[4]=c->r[1]+0x00000008u; // 801C5F28
  c->r[5]=c->r[1]+0x00000080u; // 801C5F2C
  c->lr=0x801C5F34u; f_80064C34(c); // 801C5F30
  c->r[3]=c->r[1]+0x00000068u; // 801C5F34
  c->r[4]=c->r[1]+0x00000014u; // 801C5F38
  c->r[5]=c->r[1]+0x00000074u; // 801C5F3C
  c->lr=0x801C5F44u; f_80064C34(c); // 801C5F40
  c->r[3]=c->r[30]|c->r[30]; // 801C5F44
  c->r[4]=c->r[1]+0x00000068u; // 801C5F48
  c->lr=0x801C5F50u; f_80032FF4(c); // 801C5F4C
  c->r[4]=0u+0x804D0000u; // 801C5F50
  {uint32_t ea=c->r[31]+0x000021B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5F54
  c->r[4]=c->r[4]+0x00003318u; // 801C5F58
  c->r[3]=R32(c->r[31]+0x000021A8u); // 801C5F5C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5F60
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C5F64
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C5F68
  {uint32_t ea=c->r[2]+0xFFFFB854u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5F6C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C5F70
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[0]);} // 801C5F74
  c->r[0]=R32(c->r[1]+0x00000134u); // 801C5F78
  c->r[0]=c->r[3]+c->r[0]; // 801C5F7C
  W32(c->r[31]+0x000021A8u,c->r[0]); // 801C5F80
  goto L_801C5FB0; // 801C5F84
L_801C5F88:;
  c->r[0]=R32(c->r[31]+0x000021A8u); // 801C5F88
  c->r[0]=c->r[0]^0x80000000u; // 801C5F8C
  W32(c->r[1]+0x00000124u,c->r[0]); // 801C5F90
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 801C5F94
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C5F98
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C5F9C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C5FA0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[0]);} // 801C5FA4
  c->r[0]=R32(c->r[1]+0x00000134u); // 801C5FA8
  W32(c->r[31]+0x000021A8u,c->r[0]); // 801C5FAC
L_801C5FB0:;
  c->r[0]=R32(c->r[31]+0x000021A8u); // 801C5FB0
  cmps(c,0,(int32_t)c->r[0],360); // 801C5FB4
  if (!crb(c,0)) { IRQCHK(c); goto L_801C5F88; } // 801C5FB8
  c->r[4]=0u+0x804D0000u; // 801C5FBC
  {uint32_t ea=c->r[31]+0x000021BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5FC0
  c->r[4]=c->r[4]+0x00003318u; // 801C5FC4
  c->r[3]=R32(c->r[31]+0x000021ACu); // 801C5FC8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5FCC
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C5FD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C5FD4
  {uint32_t ea=c->r[2]+0xFFFFB854u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5FD8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C5FDC
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[0]);} // 801C5FE0
  c->r[0]=R32(c->r[1]+0x00000134u); // 801C5FE4
  c->r[0]=c->r[3]+c->r[0]; // 801C5FE8
  W32(c->r[31]+0x000021ACu,c->r[0]); // 801C5FEC
  goto L_801C601C; // 801C5FF0
L_801C5FF4:;
  c->r[0]=R32(c->r[31]+0x000021ACu); // 801C5FF4
  c->r[0]=c->r[0]^0x80000000u; // 801C5FF8
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 801C5FFC
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 801C6000
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C6004
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C6008
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C600C
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[0]);} // 801C6010
  c->r[0]=R32(c->r[1]+0x00000134u); // 801C6014
  W32(c->r[31]+0x000021ACu,c->r[0]); // 801C6018
L_801C601C:;
  c->r[0]=R32(c->r[31]+0x000021ACu); // 801C601C
  cmps(c,0,(int32_t)c->r[0],360); // 801C6020
  if (!crb(c,0)) { IRQCHK(c); goto L_801C5FF4; } // 801C6024
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,31,ea,0,0);} // 801C6028
  {uint32_t ea=c->r[1]+0x00000160u; c->f[31]=RF64(ea);} // 801C602C
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,30,ea,0,0);} // 801C6030
  {uint32_t ea=c->r[1]+0x00000150u; c->f[30]=RF64(ea);} // 801C6034
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,29,ea,0,0);} // 801C6038
  {uint32_t ea=c->r[1]+0x00000140u; c->f[29]=RF64(ea);} // 801C603C
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 801C6040
  c->r[0]=R32(c->r[1]+0x00000174u); // 801C6044
  c->r[30]=R32(c->r[1]+0x00000138u); // 801C6048
  c->lr=c->r[0]; // 801C604C
  c->r[1]=c->r[1]+0x00000170u; // 801C6050
  return; // 801C6054
}

// fn_801C6058
void f_801C6058(Ctx* __restrict c) {
  trace_call(0x801C6058u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6058
  c->r[0]=c->lr; // 801C605C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6060
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6064
  c->r[31]=c->r[3]|c->r[3]; // 801C6068
  c->lr=0x801C6070u; f_801C4D30(c); // 801C606C
  c->r[4]=0u+0x803E0000u; // 801C6070
  c->r[3]=c->r[31]+0x00002209u; // 801C6074
  c->r[4]=c->r[4]+0x00000A48u; // 801C6078
  c->r[4]=c->r[4]+0x00000040u; // 801C607C
  c->lr=0x801C6084u; f_802933D8(c); // 801C6080
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6088
  c->lr=c->r[0]; // 801C608C
  c->r[1]=c->r[1]+0x00000010u; // 801C6090
  return; // 801C6094
}

// fn_801C6098
void f_801C6098(Ctx* __restrict c) {
  trace_call(0x801C6098u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C6098
  cmps(c,0,(int32_t)c->r[0],40); // 801C609C
  if (crb(c,2)) { goto L_801C60B8; } // 801C60A0
  if (!crb(c,0)) return; // 801C60A4
  cmps(c,0,(int32_t)c->r[0],20); // 801C60A8
  if (!crb(c,2)) return; // 801C60AC
  c->r[4]=c->r[5]|c->r[5]; // 801C60B0
  f_801C68B0(c); return; // 801C60B4
L_801C60B8:;
  c->r[4]=c->r[5]|c->r[5]; // 801C60B8
  f_801C5A20(c); return; // 801C60BC
  return; // 801C60C0
}

// fn_801C60C4
void f_801C60C4(Ctx* __restrict c) {
  trace_call(0x801C60C4u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C60C4
  cmps(c,0,(int32_t)c->r[0],40); // 801C60C8
  if (crb(c,2)) { goto L_801C60E4; } // 801C60CC
  if (!crb(c,0)) return; // 801C60D0
  cmps(c,0,(int32_t)c->r[0],20); // 801C60D4
  if (crb(c,2)) { goto L_801C60E0; } // 801C60D8
  return; // 801C60DC
L_801C60E0:;
  f_801C69FC(c); return; // 801C60E0
L_801C60E4:;
  f_801C5B48(c); return; // 801C60E4
  return; // 801C60E8
}

// fn_801C60EC
void f_801C60EC(Ctx* __restrict c) {
  trace_call(0x801C60ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C60EC
  c->r[0]=c->lr; // 801C60F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C60F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C60F8
  c->r[31]=c->r[3]|c->r[3]; // 801C60FC
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C6100
  cmps(c,0,(int32_t)c->r[0],40); // 801C6104
  if (crb(c,2)) { goto L_801C6124; } // 801C6108
  if (!crb(c,0)) { goto L_801C6150; } // 801C610C
  cmps(c,0,(int32_t)c->r[0],20); // 801C6110
  if (crb(c,2)) { goto L_801C611C; } // 801C6114
  goto L_801C6150; // 801C6118
L_801C611C:;
  c->lr=0x801C6120u; f_801C6C28(c); // 801C611C
  goto L_801C6150; // 801C6120
L_801C6124:;
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C6124
  cmpu(c,0,c->r[0],0x00000064u); // 801C6128
  if (!crb(c,2)) { goto L_801C6150; } // 801C612C
  c->r[4]=0u+0x00000000u; // 801C6130
  c->r[5]=0u+0x00000001u; // 801C6134
  c->lr=0x801C613Cu; f_80076080(c); // 801C6138
  c->r[12]=R32(c->r[31]+0x00000010u); // 801C613C
  c->r[3]=c->r[31]|c->r[31]; // 801C6140
  c->r[12]=R32(c->r[12]+0x00000030u); // 801C6144
  c->ctr=c->r[12]; // 801C6148
  if (true) { c->lr=0x801C6150u; dispatch(c,c->ctr); } // 801C614C
L_801C6150:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6154
  c->lr=c->r[0]; // 801C6158
  c->r[1]=c->r[1]+0x00000010u; // 801C615C
  return; // 801C6160
}

// fn_801C6164
void f_801C6164(Ctx* __restrict c) {
  trace_call(0x801C6164u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6164
  c->r[0]=c->lr; // 801C6168
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C616C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6170
  c->r[31]=c->r[3]|c->r[3]; // 801C6174
  c->r[0]=R8(c->r[3]+0x00002208u); // 801C6178
  cmps(c,0,(int32_t)c->r[0],0); // 801C617C
  if (!crb(c,2)) { goto L_801C61A8; } // 801C6180
  c->r[4]=0u+0x00000000u; // 801C6184
  c->r[5]=0u+0x00000001u; // 801C6188
  c->lr=0x801C6190u; f_80076080(c); // 801C618C
  c->r[12]=R32(c->r[31]+0x00000010u); // 801C6190
  c->r[3]=c->r[31]|c->r[31]; // 801C6194
  c->r[12]=R32(c->r[12]+0x00000030u); // 801C6198
  c->ctr=c->r[12]; // 801C619C
  if (true) { c->lr=0x801C61A4u; dispatch(c,c->ctr); } // 801C61A0
  goto L_801C61CC; // 801C61A4
L_801C61A8:;
  c->lr=0x801C61ACu; f_801C4FB4(c); // 801C61A8
  {uint32_t ea=c->r[2]+0xFFFFB814u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C61AC
  c->r[0]=0u+0x00000000u; // 801C61B0
  {uint32_t ea=c->r[2]+0xFFFFB818u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C61B4
  W32(c->r[31]+0x000021A8u,c->r[0]); // 801C61B8
  W32(c->r[31]+0x000021ACu,c->r[0]); // 801C61BC
  {uint32_t ea=c->r[31]+0x000021B8u; WF32(ea,c->f[1]);} // 801C61C0
  {uint32_t ea=c->r[31]+0x000021BCu; WF32(ea,c->f[0]);} // 801C61C4
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C61C8
L_801C61CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C61CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C61D0
  c->lr=c->r[0]; // 801C61D4
  c->r[1]=c->r[1]+0x00000010u; // 801C61D8
  return; // 801C61DC
}

// fn_801C61E0
void f_801C61E0(Ctx* __restrict c) {
  trace_call(0x801C61E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C61E0
  c->r[0]=c->lr; // 801C61E4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801C61E8
  W32(c->r[1]+0x000000BCu,c->r[31]); // 801C61EC
  c->r[31]=c->r[3]|c->r[3]; // 801C61F0
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C61F4
  cmps(c,0,(int32_t)c->r[0],25); // 801C61F8
  if (crb(c,2)) { goto L_801C646C; } // 801C61FC
  if (!crb(c,0)) { goto L_801C6214; } // 801C6200
  cmps(c,0,(int32_t)c->r[0],23); // 801C6204
  if (crb(c,2)) { goto L_801C6220; } // 801C6208
  if (!crb(c,0)) { goto L_801C62CC; } // 801C620C
  goto L_801C646C; // 801C6210
L_801C6214:;
  cmps(c,0,(int32_t)c->r[0],27); // 801C6214
  if (!crb(c,0)) { goto L_801C646C; } // 801C6218
  goto L_801C63A0; // 801C621C
L_801C6220:;
  c->r[4]=c->r[31]|c->r[31]; // 801C6220
  c->r[3]=c->r[1]+0x00000084u; // 801C6224
  c->r[5]=0u+0x00000000u; // 801C6228
  c->lr=0x801C6230u; f_801C5CC0(c); // 801C622C
  c->r[3]=c->r[1]+0x00000084u; // 801C6230
  c->lr=0x801C6238u; f_801C4B60(c); // 801C6234
  cmps(c,0,(int32_t)c->r[3],0); // 801C6238
  if (!crb(c,2)) { goto L_801C6258; } // 801C623C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C6240
  c->r[3]=c->r[31]+0x000008D0u; // 801C6244
  c->r[4]=c->r[1]+0x00000084u; // 801C6248
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C624C
  c->ctr=c->r[12]; // 801C6250
  if (true) { c->lr=0x801C6258u; dispatch(c,c->ctr); } // 801C6254
L_801C6258:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6258
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C625C
  fcmp(c,0,c->f[1],c->f[0]); // 801C6260
  if (!crb(c,0)) { goto L_801C627C; } // 801C6264
  c->r[3]=0u+0x804D0000u; // 801C6268
  c->r[3]=c->r[3]+0x00003318u; // 801C626C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6270
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C6274
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6278
L_801C627C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C627C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6280
  fcmp(c,0,c->f[1],c->f[0]); // 801C6284
  if (!crb(c,1)) { goto L_801C6290; } // 801C6288
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C628C
L_801C6290:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6290
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6294
  fcmp(c,0,c->f[1],c->f[0]); // 801C6298
  if (!crb(c,1)) { goto L_801C62B4; } // 801C629C
  c->r[3]=0u+0x804D0000u; // 801C62A0
  c->r[3]=c->r[3]+0x00003318u; // 801C62A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C62A8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C62AC
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C62B0
L_801C62B4:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C62B4
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C62B8
  fcmp(c,0,c->f[1],c->f[0]); // 801C62BC
  if (!crb(c,0)) { goto L_801C646C; } // 801C62C0
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C62C4
  goto L_801C646C; // 801C62C8
L_801C62CC:;
  c->r[4]=c->r[31]|c->r[31]; // 801C62CC
  c->r[3]=c->r[1]+0x00000054u; // 801C62D0
  c->r[5]=0u+0x00000000u; // 801C62D4
  c->lr=0x801C62DCu; f_801C5CC0(c); // 801C62D8
  c->r[3]=c->r[1]+0x00000054u; // 801C62DC
  c->lr=0x801C62E4u; f_801C4B60(c); // 801C62E0
  cmps(c,0,(int32_t)c->r[3],0); // 801C62E4
  if (!crb(c,2)) { goto L_801C6304; } // 801C62E8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C62EC
  c->r[3]=c->r[31]+0x000008D0u; // 801C62F0
  c->r[4]=c->r[1]+0x00000054u; // 801C62F4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C62F8
  c->ctr=c->r[12]; // 801C62FC
  if (true) { c->lr=0x801C6304u; dispatch(c,c->ctr); } // 801C6300
L_801C6304:;
  c->r[0]=R8(c->r[31]+0x0000200Cu); // 801C6304
  cmps(c,0,(int32_t)c->r[0],0); // 801C6308
  if (crb(c,2)) { goto L_801C6364; } // 801C630C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6310
  {uint32_t ea=c->r[2]+0xFFFFB858u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6314
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6318
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C631C
  fcmp(c,0,c->f[2],c->f[0]); // 801C6320
  if (!crb(c,0)) { goto L_801C6344; } // 801C6324
  c->r[3]=0u+0x804D0000u; // 801C6328
  {uint32_t ea=c->r[2]+0xFFFFB860u; c->f[0]=RF64(ea);} // 801C632C
  c->r[3]=c->r[3]+0x00003318u; // 801C6330
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6334
  c->f[0]=std::fma(c->f[0],c->f[1],c->f[2]); // 801C6338
  c->f[0]=c->ps1[0]=S(c->f[0]); // 801C633C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6340
L_801C6344:;
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6344
  {uint32_t ea=c->r[2]+0xFFFFB858u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6348
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C634C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C6350
  fcmp(c,0,c->f[2],c->f[0]); // 801C6354
  if (!crb(c,1)) { goto L_801C646C; } // 801C6358
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C635C
  goto L_801C646C; // 801C6360
L_801C6364:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6364
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6368
  fcmp(c,0,c->f[1],c->f[0]); // 801C636C
  if (!crb(c,0)) { goto L_801C6388; } // 801C6370
  c->r[3]=0u+0x804D0000u; // 801C6374
  c->r[3]=c->r[3]+0x00003318u; // 801C6378
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C637C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C6380
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6384
L_801C6388:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6388
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C638C
  fcmp(c,0,c->f[1],c->f[0]); // 801C6390
  if (!crb(c,1)) { goto L_801C646C; } // 801C6394
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6398
  goto L_801C646C; // 801C639C
L_801C63A0:;
  c->lr=0x801C63A4u; f_801C3C1C(c); // 801C63A0
  {uint32_t ea=c->r[2]+0xFFFFB7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C63A4
  fcmp(c,0,c->f[1],c->f[0]); // 801C63A8
  if (!crb(c,0)) { goto L_801C646C; } // 801C63AC
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C63B0
  c->r[4]=c->r[31]+0x000008D0u; // 801C63B4
  c->r[3]=c->r[1]+0x00000024u; // 801C63B8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C63BC
  c->ctr=c->r[12]; // 801C63C0
  if (true) { c->lr=0x801C63C8u; dispatch(c,c->ctr); } // 801C63C4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C63C8
  c->r[3]=c->r[1]+0x00000018u; // 801C63CC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C63D0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C63D4
  c->lr=0x801C63DCu; f_800521A0(c); // 801C63D8
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C63DC
  c->r[3]=c->r[31]|c->r[31]; // 801C63E0
  c->r[4]=c->r[1]+0x00000008u; // 801C63E4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C63E8
  c->lr=0x801C63F0u; f_801C4438(c); // 801C63EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C63F0
  c->r[3]=c->r[1]+0x0000000Cu; // 801C63F4
  c->r[4]=c->r[31]+0x00002000u; // 801C63F8
  c->lr=0x801C6400u; f_80064C58(c); // 801C63FC
  c->r[3]=c->r[1]+0x00000018u; // 801C6400
  c->r[5]=c->r[1]+0x0000000Cu; // 801C6404
  c->r[4]=c->r[3]|c->r[3]; // 801C6408
  c->lr=0x801C6410u; f_80064C34(c); // 801C640C
  c->r[3]=c->r[1]+0x00000024u; // 801C6410
  c->r[4]=c->r[1]+0x00000018u; // 801C6414
  c->lr=0x801C641Cu; f_80032FF4(c); // 801C6418
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C641C
  c->r[3]=c->r[31]+0x000008D0u; // 801C6420
  c->r[4]=c->r[1]+0x00000024u; // 801C6424
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C6428
  c->ctr=c->r[12]; // 801C642C
  if (true) { c->lr=0x801C6434u; dispatch(c,c->ctr); } // 801C6430
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6434
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6438
  fcmp(c,0,c->f[1],c->f[0]); // 801C643C
  if (!crb(c,1)) { goto L_801C6458; } // 801C6440
  c->r[3]=0u+0x804D0000u; // 801C6444
  c->r[3]=c->r[3]+0x00003318u; // 801C6448
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C644C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C6450
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6454
L_801C6458:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6458
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C645C
  fcmp(c,0,c->f[1],c->f[0]); // 801C6460
  if (!crb(c,0)) { goto L_801C646C; } // 801C6464
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6468
L_801C646C:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801C646C
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801C6470
  c->lr=c->r[0]; // 801C6474
  c->r[1]=c->r[1]+0x000000C0u; // 801C6478
  return; // 801C647C
}

// fn_801C6480
void f_801C6480(Ctx* __restrict c) {
  trace_call(0x801C6480u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6480
  c->r[0]=c->lr; // 801C6484
  W32(c->r[1]+0x00000174u,c->r[0]); // 801C6488
  c->r[11]=c->r[1]+0x00000170u; // 801C648C
  c->lr=0x801C6494u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6490
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C6494
  c->r[31]=c->r[3]|c->r[3]; // 801C6498
  c->r[29]=c->r[4]|c->r[4]; // 801C649C
  cmps(c,0,(int32_t)c->r[0],25); // 801C64A0
  if (crb(c,2)) { goto L_801C6898; } // 801C64A4
  if (!crb(c,0)) { goto L_801C64BC; } // 801C64A8
  cmps(c,0,(int32_t)c->r[0],23); // 801C64AC
  if (crb(c,2)) { goto L_801C64CC; } // 801C64B0
  if (!crb(c,0)) { goto L_801C6634; } // 801C64B4
  goto L_801C6898; // 801C64B8
L_801C64BC:;
  cmps(c,0,(int32_t)c->r[0],27); // 801C64BC
  if (crb(c,2)) { goto L_801C67F0; } // 801C64C0
  if (!crb(c,0)) { goto L_801C6898; } // 801C64C4
  goto L_801C678C; // 801C64C8
L_801C64CC:;
  c->r[0]=R8(c->r[3]+0x0000200Cu); // 801C64CC
  cmps(c,0,(int32_t)c->r[0],0); // 801C64D0
  if (crb(c,2)) { goto L_801C656C; } // 801C64D4
  c->lr=0x801C64DCu; f_801C3C1C(c); // 801C64D8
  {uint32_t ea=c->r[2]+0xFFFFB7F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C64DC
  fcmp(c,0,c->f[1],c->f[0]); // 801C64E0
  if (!crb(c,0)) { goto L_801C6898; } // 801C64E4
  c->r[3]=c->r[31]+0x000008ECu; // 801C64E8
  c->r[4]=c->r[31]+0x00002180u; // 801C64EC
  c->lr=0x801C64F4u; f_80075440(c); // 801C64F0
  W32(c->r[29]+0x00000034u,c->r[3]); // 801C64F4
  c->r[5]=c->r[3]|c->r[3]; // 801C64F8
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C64FC
  c->r[3]=c->r[31]+0x00000C88u; // 801C6500
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6504
  c->r[4]=c->r[31]+0x000008ECu; // 801C6508
  c->r[6]=0u+0x00000000u; // 801C650C
  c->r[7]=0u+0x00000000u; // 801C6510
  c->lr=0x801C6518u; f_800BB0C8(c); // 801C6514
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6518
  c->r[0]=0u+0x00000018u; // 801C651C
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C6520
  c->r[4]=c->r[31]+0x000008D0u; // 801C6524
  c->r[3]=c->r[1]+0x00000124u; // 801C6528
  {uint32_t ea=c->r[31]+0x000021BCu; WF32(ea,c->f[0]);} // 801C652C
  {uint32_t ea=c->r[31]+0x000021B8u; WF32(ea,c->f[0]);} // 801C6530
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C6534
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C6538
  c->ctr=c->r[12]; // 801C653C
  if (true) { c->lr=0x801C6544u; dispatch(c,c->ctr); } // 801C6540
  c->r[3]=c->r[1]+0x0000004Cu; // 801C6544
  c->r[4]=c->r[1]+0x00000124u; // 801C6548
  c->lr=0x801C6550u; f_800BC9F4(c); // 801C654C
  c->r[3]=c->r[1]+0x00000058u; // 801C6550
  c->r[4]=c->r[1]+0x0000004Cu; // 801C6554
  c->lr=0x801C655Cu; f_800521B0(c); // 801C6558
  c->r[3]=c->r[31]+0x00002000u; // 801C655C
  c->r[4]=c->r[1]+0x00000058u; // 801C6560
  c->lr=0x801C6568u; f_8003F468(c); // 801C6564
  goto L_801C6898; // 801C6568
L_801C656C:;
  c->r[4]=0u+0x804D0000u; // 801C656C
  c->r[4]=c->r[4]+0x00003318u; // 801C6570
  c->r[30]=R32(c->r[4]+0x00000028u); // 801C6574
  c->lr=0x801C657Cu; f_801C3C1C(c); // 801C6578
  c->r[3]=c->r[30]^0x80000000u; // 801C657C
  c->r[0]=0u+0x43300000u; // 801C6580
  W32(c->r[1]+0x0000015Cu,c->r[3]); // 801C6584
  {uint32_t ea=c->r[2]+0xFFFFB838u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C6588
  W32(c->r[1]+0x00000158u,c->r[0]); // 801C658C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C6590
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C6594
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 801C6598
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 801C659C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C65A0
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C65A4
  fcmp(c,0,c->f[1],c->f[0]); // 801C65A8
  if (!crb(c,0)) { goto L_801C6898; } // 801C65AC
  c->r[3]=c->r[31]+0x000008ECu; // 801C65B0
  c->r[4]=c->r[31]+0x00002180u; // 801C65B4
  c->lr=0x801C65BCu; f_80075440(c); // 801C65B8
  W32(c->r[29]+0x00000034u,c->r[3]); // 801C65BC
  c->r[5]=c->r[3]|c->r[3]; // 801C65C0
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C65C4
  c->r[3]=c->r[31]+0x00000C88u; // 801C65C8
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C65CC
  c->r[4]=c->r[31]+0x000008ECu; // 801C65D0
  c->r[6]=0u+0x00000000u; // 801C65D4
  c->r[7]=0u+0x00000000u; // 801C65D8
  c->lr=0x801C65E0u; f_800BB0C8(c); // 801C65DC
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C65E0
  c->r[0]=0u+0x00000018u; // 801C65E4
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C65E8
  c->r[4]=c->r[31]+0x000008D0u; // 801C65EC
  c->r[3]=c->r[1]+0x000000F4u; // 801C65F0
  {uint32_t ea=c->r[31]+0x000021BCu; WF32(ea,c->f[0]);} // 801C65F4
  {uint32_t ea=c->r[31]+0x000021B8u; WF32(ea,c->f[0]);} // 801C65F8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C65FC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C6600
  c->ctr=c->r[12]; // 801C6604
  if (true) { c->lr=0x801C660Cu; dispatch(c,c->ctr); } // 801C6608
  c->r[3]=c->r[1]+0x00000034u; // 801C660C
  c->r[4]=c->r[1]+0x000000F4u; // 801C6610
  c->lr=0x801C6618u; f_800BC9F4(c); // 801C6614
  c->r[3]=c->r[1]+0x00000040u; // 801C6618
  c->r[4]=c->r[1]+0x00000034u; // 801C661C
  c->lr=0x801C6624u; f_800521B0(c); // 801C6620
  c->r[3]=c->r[31]+0x00002000u; // 801C6624
  c->r[4]=c->r[1]+0x00000040u; // 801C6628
  c->lr=0x801C6630u; f_8003F468(c); // 801C662C
  goto L_801C6898; // 801C6630
L_801C6634:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C6634
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C6638
  c->lr=0x801C6640u; f_800752CC(c); // 801C663C
  {uint32_t ea=c->r[2]+0xFFFFB804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6640
  fcmp(c,0,c->f[1],c->f[0]); // 801C6644
  if (!crb(c,1)) { goto L_801C6898; } // 801C6648
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C664C
  c->r[4]=c->r[31]+0x000008D0u; // 801C6650
  c->r[3]=c->r[1]+0x000000C4u; // 801C6654
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C6658
  c->ctr=c->r[12]; // 801C665C
  if (true) { c->lr=0x801C6664u; dispatch(c,c->ctr); } // 801C6660
  c->r[3]=c->r[1]+0x00000064u; // 801C6664
  c->r[4]=c->r[1]+0x000000C4u; // 801C6668
  c->lr=0x801C6670u; f_80032FD8(c); // 801C666C
  c->r[4]=0u+0x804D0000u; // 801C6670
  c->r[3]=c->r[31]|c->r[31]; // 801C6674
  c->r[4]=c->r[4]+0x00003318u; // 801C6678
  c->r[30]=R32(c->r[4]+0x00000028u); // 801C667C
  c->lr=0x801C6684u; f_801C3C1C(c); // 801C6680
  c->r[3]=c->r[30]^0x80000000u; // 801C6684
  c->r[0]=0u+0x43300000u; // 801C6688
  W32(c->r[1]+0x0000015Cu,c->r[3]); // 801C668C
  {uint32_t ea=c->r[2]+0xFFFFB838u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C6690
  W32(c->r[1]+0x00000158u,c->r[0]); // 801C6694
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6698
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[3]=RF64(ea);} // 801C669C
  {uint32_t ea=c->r[1]+0x00000158u; c->f[2]=RF64(ea);} // 801C66A0
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801C66A4
  {uint32_t ea=c->r[2]+0xFFFFB83Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C66A8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C66AC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801C66B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801C66B4
  fcmp(c,0,c->f[1],c->f[0]); // 801C66B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C66BC
  if (!crb(c,2)) { goto L_801C6704; } // 801C66C0
  {uint32_t ea=c->r[29]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C66C4
  c->r[3]=c->r[1]+0x000000A0u; // 801C66C8
  c->r[4]=c->r[1]+0x00000064u; // 801C66CC
  c->r[5]=0u+0xFFFFFFFFu; // 801C66D0
  c->lr=0x801C66D8u; f_800BCD10(c); // 801C66D4
  c->r[0]=R32(c->r[29]+0x00000024u); // 801C66D8
  c->r[5]=c->r[13]+0xFFFF94B8u; // 801C66DC
  c->r[3]=c->r[1]+0x00000008u; // 801C66E0
  c->r[4]=c->r[1]+0x000000A0u; // 801C66E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C66E8
  c->r[6]=R32(c->r[5]+c->r[0]); // 801C66EC
  c->r[5]=R32(c->r[6]+0x00000000u); // 801C66F0
  c->r[0]=R32(c->r[6]+0x00000004u); // 801C66F4
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C66F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C66FC
  c->lr=0x801C6704u; f_800BCDAC(c); // 801C6700
L_801C6704:;
  c->r[0]=0u+0x0000001Au; // 801C6704
  c->r[3]=0u+0x804D0000u; // 801C6708
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C670C
  c->r[3]=c->r[3]+0x00003318u; // 801C6710
  c->r[0]=0u+0x43300000u; // 801C6714
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C6718
  c->r[3]=R32(c->r[3]+0x00000028u); // 801C671C
  W32(c->r[1]+0x00000158u,c->r[0]); // 801C6720
  c->r[0]=c->r[3]^0x80000000u; // 801C6724
  {uint32_t ea=c->r[2]+0xFFFFB808u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6728
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 801C672C
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=RF64(ea);} // 801C6730
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C6734
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801C6738
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C673C
  c->lr=0x801C6744u; f_80061A4C(c); // 801C6740
  c->r[5]=c->r[3]|c->r[3]; // 801C6744
  c->r[3]=c->r[1]+0x00000010u; // 801C6748
  c->r[4]=c->r[5]+0x00000390u; // 801C674C
  c->r[5]=c->r[5]+0x00000384u; // 801C6750
  c->lr=0x801C6758u; f_8007B8A4(c); // 801C6754
  c->r[3]=c->r[1]+0x00000010u; // 801C6758
  c->r[4]=c->r[1]+0x00000028u; // 801C675C
  c->lr=0x801C6764u; f_80265750(c); // 801C6760
  {uint32_t ea=c->r[31]+0x00002004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6764
  c->r[3]=c->r[31]+0x00002000u; // 801C6768
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C676C
  c->r[4]=c->r[3]|c->r[3]; // 801C6770
  {uint32_t ea=c->r[2]+0xFFFFB844u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6774
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 801C6778
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C677C
  {uint32_t ea=c->r[31]+0x00002004u; WF32(ea,c->f[0]);} // 801C6780
  c->lr=0x801C6788u; f_80265750(c); // 801C6784
  goto L_801C6898; // 801C6788
L_801C678C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C678C
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6790
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C6794
  c->lr=0x801C679Cu; f_8016498C(c); // 801C6798
  cmps(c,0,(int32_t)c->r[3],0); // 801C679C
  if (crb(c,2)) { goto L_801C6898; } // 801C67A0
  c->r[3]=c->r[31]+0x000008ECu; // 801C67A4
  c->r[4]=c->r[31]+0x00002209u; // 801C67A8
  c->lr=0x801C67B0u; f_80075440(c); // 801C67AC
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C67B0
  c->r[5]=c->r[3]|c->r[3]; // 801C67B4
  W32(c->r[29]+0x00000034u,c->r[3]); // 801C67B8
  c->r[3]=c->r[31]+0x00000C88u; // 801C67BC
  c->f[2]=c->f[1]; // 801C67C0
  c->r[4]=c->r[31]+0x000008ECu; // 801C67C4
  c->r[6]=0u+0x00000000u; // 801C67C8
  c->r[7]=0u+0x00000000u; // 801C67CC
  c->lr=0x801C67D4u; f_800BB0C8(c); // 801C67D0
  c->r[3]=R32(c->r[31]+0x00000974u); // 801C67D4
  {uint32_t ea=c->r[2]+0xFFFFB83Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C67D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C67DC
  c->lr=0x801C67E4u; f_80165B9C(c); // 801C67E0
  c->r[0]=0u+0x0000001Bu; // 801C67E4
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C67E8
  goto L_801C6898; // 801C67EC
L_801C67F0:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C67F0
  {uint32_t ea=c->r[2]+0xFFFFB868u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C67F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C67F8
  c->lr=0x801C6800u; f_8016498C(c); // 801C67FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C6800
  if (crb(c,2)) { goto L_801C6898; } // 801C6804
  c->r[3]=c->r[31]+0x000008ECu; // 801C6808
  c->r[4]=c->r[31]+0x00001F3Du; // 801C680C
  c->lr=0x801C6814u; f_80075440(c); // 801C6810
  W32(c->r[29]+0x00000034u,c->r[3]); // 801C6814
  c->r[5]=c->r[3]|c->r[3]; // 801C6818
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C681C
  c->r[3]=c->r[31]+0x00000C88u; // 801C6820
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6824
  c->r[4]=c->r[31]+0x000008ECu; // 801C6828
  c->r[6]=0u+0x00000000u; // 801C682C
  c->r[7]=0u+0x00000000u; // 801C6830
  c->lr=0x801C6838u; f_800BB0C8(c); // 801C6834
  c->r[3]=R32(c->r[31]+0x00000974u); // 801C6838
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C683C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C6840
  c->lr=0x801C6848u; f_80165B9C(c); // 801C6844
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6848
  c->r[0]=0u+0x00000017u; // 801C684C
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C6850
  c->r[4]=c->r[31]+0x000008D0u; // 801C6854
  c->r[3]=c->r[1]+0x00000070u; // 801C6858
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C685C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C6860
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C6864
  c->ctr=c->r[12]; // 801C6868
  if (true) { c->lr=0x801C6870u; dispatch(c,c->ctr); } // 801C686C
  c->r[3]=c->r[1]+0x0000001Cu; // 801C6870
  c->r[4]=c->r[1]+0x00000070u; // 801C6874
  c->lr=0x801C687Cu; f_80032FD8(c); // 801C6878
  c->r[3]=c->r[31]+0x000021C4u; // 801C687C
  c->r[4]=c->r[1]+0x0000001Cu; // 801C6880
  c->lr=0x801C6888u; f_8003F468(c); // 801C6884
  {uint32_t ea=c->r[2]+0xFFFFB83Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6888
  c->r[0]=0u+0x00000001u; // 801C688C
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C6890
  {uint32_t ea=c->r[31]+0x000021D0u; WF32(ea,c->f[0]);} // 801C6894
L_801C6898:;
  c->r[11]=c->r[1]+0x00000170u; // 801C6898
  c->lr=0x801C68A0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C689C
  c->r[0]=R32(c->r[1]+0x00000174u); // 801C68A0
  c->lr=c->r[0]; // 801C68A4
  c->r[1]=c->r[1]+0x00000170u; // 801C68A8
  return; // 801C68AC
}

// fn_801C68B0
void f_801C68B0(Ctx* __restrict c) {
  trace_call(0x801C68B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C68B0
  c->r[0]=c->lr; // 801C68B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801C68B8
  c->r[11]=c->r[1]+0x00000070u; // 801C68BC
  c->lr=0x801C68C4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C68C0
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C68C4
  c->r[29]=c->r[3]|c->r[3]; // 801C68C8
  {uint32_t ea=c->r[3]+0x000021B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C68CC
  c->r[30]=c->r[4]|c->r[4]; // 801C68D0
  fcmp(c,0,c->f[1],c->f[0]); // 801C68D4
  if (!crb(c,2)) { goto L_801C6948; } // 801C68D8
  c->lr=0x801C68E0u; f_80291D94(c); // 801C68DC
  c->r[0]=c->r[3]^0x80000000u; // 801C68E0
  c->r[31]=0u+0x43300000u; // 801C68E4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801C68E8
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[3]=RF64(ea);} // 801C68EC
  W32(c->r[1]+0x00000048u,c->r[31]); // 801C68F0
  {uint32_t ea=c->r[2]+0xFFFFB810u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C68F4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801C68F8
  {uint32_t ea=c->r[2]+0xFFFFB80Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C68FC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801C6900
  {uint32_t ea=c->r[2]+0xFFFFB808u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6904
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801C6908
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801C690C
  {uint32_t ea=c->r[29]+0x000021B0u; WF32(ea,c->f[0]);} // 801C6910
  c->lr=0x801C6918u; f_80291D94(c); // 801C6914
  c->r[0]=c->r[3]^0x80000000u; // 801C6918
  W32(c->r[1]+0x00000050u,c->r[31]); // 801C691C
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[3]=RF64(ea);} // 801C6920
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C6924
  {uint32_t ea=c->r[2]+0xFFFFB810u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6928
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801C692C
  {uint32_t ea=c->r[2]+0xFFFFB80Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6930
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801C6934
  {uint32_t ea=c->r[2]+0xFFFFB808u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6938
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801C693C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801C6940
  {uint32_t ea=c->r[29]+0x000021B4u; WF32(ea,c->f[0]);} // 801C6944
L_801C6948:;
  {uint32_t ea=c->r[2]+0xFFFFB86Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6948
  c->r[0]=0u+0x00000000u; // 801C694C
  {uint32_t ea=c->r[2]+0xFFFFB854u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6950
  c->r[3]=c->r[29]|c->r[29]; // 801C6954
  W32(c->r[29]+0x000021A8u,c->r[0]); // 801C6958
  c->r[4]=c->r[30]|c->r[30]; // 801C695C
  W32(c->r[29]+0x000021ACu,c->r[0]); // 801C6960
  {uint32_t ea=c->r[29]+0x000021B8u; WF32(ea,c->f[1]);} // 801C6964
  {uint32_t ea=c->r[29]+0x000021BCu; WF32(ea,c->f[0]);} // 801C6968
  W8(c->r[29]+0x0000200Cu,c->r[0]); // 801C696C
  c->lr=0x801C6974u; f_801C2D04(c); // 801C6970
  c->r[4]=R32(c->r[29]+0x000020B8u); // 801C6974
  c->r[0]=0u+0x43300000u; // 801C6978
  W32(c->r[1]+0x00000050u,c->r[0]); // 801C697C
  c->r[3]=c->r[29]+0x00002090u; // 801C6980
  c->r[0]=c->r[4]^0x80000000u; // 801C6984
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[1]=RF64(ea);} // 801C6988
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C698C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801C6990
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801C6994
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801C6998
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 801C699C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 801C69A0
  c->r[4]=R32(c->r[1]+0x0000004Cu); // 801C69A4
  c->r[4]=c->r[4]+0x00000001u; // 801C69A8
  c->lr=0x801C69B0u; f_801C76F4(c); // 801C69AC
  {uint32_t ea=c->r[29]+0x00002010u; WF32(ea,c->f[1]);} // 801C69B0
  c->r[4]=c->r[29]+0x000008D0u; // 801C69B4
  c->r[3]=c->r[1]+0x00000014u; // 801C69B8
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801C69BC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C69C0
  c->ctr=c->r[12]; // 801C69C4
  if (true) { c->lr=0x801C69CCu; dispatch(c,c->ctr); } // 801C69C8
  c->r[3]=c->r[1]+0x00000008u; // 801C69CC
  c->r[4]=c->r[1]+0x00000014u; // 801C69D0
  c->lr=0x801C69D8u; f_80032FD8(c); // 801C69D4
  c->r[3]=c->r[30]+0x00000010u; // 801C69D8
  c->r[4]=c->r[1]+0x00000008u; // 801C69DC
  c->lr=0x801C69E4u; f_8003F468(c); // 801C69E0
  c->r[11]=c->r[1]+0x00000070u; // 801C69E4
  c->lr=0x801C69ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C69E8
  c->r[0]=R32(c->r[1]+0x00000074u); // 801C69EC
  c->lr=c->r[0]; // 801C69F0
  c->r[1]=c->r[1]+0x00000070u; // 801C69F4
  return; // 801C69F8
}

// fn_801C69FC
void f_801C69FC(Ctx* __restrict c) {
  trace_call(0x801C69FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C69FC
  c->r[0]=c->lr; // 801C6A00
  W32(c->r[1]+0x00000084u,c->r[0]); // 801C6A04
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801C6A08
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801C6A0C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801C6A10
  c->r[31]=c->r[4]|c->r[4]; // 801C6A14
  W32(c->r[1]+0x00000068u,c->r[30]); // 801C6A18
  c->r[30]=c->r[3]|c->r[3]; // 801C6A1C
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C6A20
  cmps(c,0,(int32_t)c->r[0],27); // 801C6A24
  if (crb(c,2)) { goto L_801C6C08; } // 801C6A28
  if (!crb(c,0)) { goto L_801C6C08; } // 801C6A2C
  cmps(c,0,(int32_t)c->r[0],21); // 801C6A30
  if (crb(c,2)) { goto L_801C6A3C; } // 801C6A34
  goto L_801C6C08; // 801C6A38
L_801C6A3C:;
  c->r[4]=c->r[30]|c->r[30]; // 801C6A3C
  c->r[3]=c->r[1]+0x00000020u; // 801C6A40
  c->r[5]=c->r[30]+0x00002090u; // 801C6A44
  c->lr=0x801C6A4Cu; f_801C5CC0(c); // 801C6A48
  c->r[3]=c->r[1]+0x00000020u; // 801C6A4C
  c->lr=0x801C6A54u; f_801C4B60(c); // 801C6A50
  cmps(c,0,(int32_t)c->r[3],0); // 801C6A54
  if (!crb(c,2)) { goto L_801C6A74; } // 801C6A58
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C6A5C
  c->r[3]=c->r[30]+0x000008D0u; // 801C6A60
  c->r[4]=c->r[1]+0x00000020u; // 801C6A64
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C6A68
  c->ctr=c->r[12]; // 801C6A6C
  if (true) { c->lr=0x801C6A74u; dispatch(c,c->ctr); } // 801C6A70
L_801C6A74:;
  c->r[3]=c->r[1]+0x00000008u; // 801C6A74
  c->r[4]=c->r[30]+0x000020BCu; // 801C6A78
  c->lr=0x801C6A80u; f_8003F484(c); // 801C6A7C
  c->r[3]=c->r[1]+0x00000014u; // 801C6A80
  c->r[4]=c->r[1]+0x00000008u; // 801C6A84
  c->r[5]=c->r[31]+0x00000010u; // 801C6A88
  c->lr=0x801C6A90u; f_8007B8A4(c); // 801C6A8C
  c->r[3]=c->r[1]+0x00000014u; // 801C6A90
  c->lr=0x801C6A98u; f_802657AC(c); // 801C6A94
  {uint32_t ea=c->r[30]+0x00002010u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6A98
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6A9C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[2]); // 801C6AA0
  fcmp(c,0,c->f[31],c->f[0]); // 801C6AA4
  if (!crb(c,0)) { goto L_801C6AB0; } // 801C6AA8
  c->f[31]=c->f[0]; // 801C6AAC
L_801C6AB0:;
  {uint32_t ea=c->r[2]+0xFFFFB870u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6AB0
  fcmp(c,0,c->f[31],c->f[0]); // 801C6AB4
  if (!crb(c,1)) { goto L_801C6AC8; } // 801C6AB8
  c->r[0]=0u+0x00000001u; // 801C6ABC
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C6AC0
  W8(c->r[30]+0x0000200Cu,c->r[0]); // 801C6AC4
L_801C6AC8:;
  {uint32_t ea=c->r[2]+0xFFFFB874u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6AC8
  fcmp(c,0,c->f[31],c->f[0]); // 801C6ACC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C6AD0
  if (!crb(c,2)) { goto L_801C6B10; } // 801C6AD4
  {uint32_t ea=c->r[2]+0xFFFFB854u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6AD8
  {uint32_t ea=c->r[2]+0xFFFFB850u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6ADC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 801C6AE0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C6AE4
  c->lr=0x801C6AECu; f_803942AC(c); // 801C6AE8
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6AEC
  {uint32_t ea=c->r[2]+0xFFFFB878u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6AF0
  c->f[2]=-c->f[2]; // 801C6AF4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801C6AF8
  fcmp(c,0,c->f[1],c->f[0]); // 801C6AFC
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[1]);} // 801C6B00
  if (!crb(c,0)) { goto L_801C6B48; } // 801C6B04
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6B08
  goto L_801C6B48; // 801C6B0C
L_801C6B10:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6B10
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6B14
  fcmp(c,0,c->f[1],c->f[0]); // 801C6B18
  if (!crb(c,0)) { goto L_801C6B34; } // 801C6B1C
  c->r[3]=0u+0x804D0000u; // 801C6B20
  c->r[3]=c->r[3]+0x00003318u; // 801C6B24
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6B28
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C6B2C
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6B30
L_801C6B34:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6B34
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6B38
  fcmp(c,0,c->f[1],c->f[0]); // 801C6B3C
  if (!crb(c,1)) { goto L_801C6B48; } // 801C6B40
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C6B44
L_801C6B48:;
  {uint32_t ea=c->r[30]+0x000021B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6B48
  c->r[3]=0u+0x43300000u; // 801C6B4C
  {uint32_t ea=c->r[30]+0x000021BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6B50
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[31]); // 801C6B54
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C6B58
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801C6B5C
  {uint32_t ea=c->r[2]+0xFFFFB854u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6B60
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801C6B64
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C6B68
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[3]);} // 801C6B6C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 801C6B70
  c->r[4]=R32(c->r[1]+0x00000054u); // 801C6B74
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 801C6B78
  W32(c->r[30]+0x000021A8u,c->r[4]); // 801C6B7C
  W32(c->r[30]+0x000021ACu,c->r[0]); // 801C6B80
  goto L_801C6BB4; // 801C6B84
L_801C6B88:;
  c->r[0]=R32(c->r[30]+0x000021A8u); // 801C6B88
  W32(c->r[1]+0x00000058u,c->r[3]); // 801C6B8C
  c->r[0]=c->r[0]^0x80000000u; // 801C6B90
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801C6B94
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 801C6B98
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C6B9C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C6BA0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C6BA4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 801C6BA8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C6BAC
  W32(c->r[30]+0x000021A8u,c->r[0]); // 801C6BB0
L_801C6BB4:;
  c->r[0]=R32(c->r[30]+0x000021A8u); // 801C6BB4
  cmps(c,0,(int32_t)c->r[0],360); // 801C6BB8
  if (!crb(c,0)) { IRQCHK(c); goto L_801C6B88; } // 801C6BBC
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C6BC0
  c->r[3]=0u+0x43300000u; // 801C6BC4
  {uint32_t ea=c->r[2]+0xFFFFB854u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6BC8
  goto L_801C6BFC; // 801C6BCC
L_801C6BD0:;
  c->r[0]=R32(c->r[30]+0x000021ACu); // 801C6BD0
  W32(c->r[1]+0x00000058u,c->r[3]); // 801C6BD4
  c->r[0]=c->r[0]^0x80000000u; // 801C6BD8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801C6BDC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=RF64(ea);} // 801C6BE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C6BE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C6BE8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C6BEC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 801C6BF0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C6BF4
  W32(c->r[30]+0x000021ACu,c->r[0]); // 801C6BF8
L_801C6BFC:;
  c->r[0]=R32(c->r[30]+0x000021ACu); // 801C6BFC
  cmps(c,0,(int32_t)c->r[0],360); // 801C6C00
  if (!crb(c,0)) { IRQCHK(c); goto L_801C6BD0; } // 801C6C04
L_801C6C08:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801C6C08
  c->r[0]=R32(c->r[1]+0x00000084u); // 801C6C0C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801C6C10
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801C6C14
  c->r[30]=R32(c->r[1]+0x00000068u); // 801C6C18
  c->lr=c->r[0]; // 801C6C1C
  c->r[1]=c->r[1]+0x00000080u; // 801C6C20
  return; // 801C6C24
}

// fn_801C6C28
void f_801C6C28(Ctx* __restrict c) {
  trace_call(0x801C6C28u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6C28
  c->r[0]=c->lr; // 801C6C2C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C6C30
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801C6C34
  c->r[31]=c->r[4]|c->r[4]; // 801C6C38
  W32(c->r[1]+0x00000098u,c->r[30]); // 801C6C3C
  c->r[30]=c->r[3]|c->r[3]; // 801C6C40
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C6C44
  cmps(c,0,(int32_t)c->r[0],22); // 801C6C48
  if (crb(c,2)) { goto L_801C6E0C; } // 801C6C4C
  if (!crb(c,0)) { goto L_801C6C60; } // 801C6C50
  cmps(c,0,(int32_t)c->r[0],21); // 801C6C54
  if (!crb(c,0)) { goto L_801C6C6C; } // 801C6C58
  goto L_801C6E10; // 801C6C5C
L_801C6C60:;
  cmps(c,0,(int32_t)c->r[0],27); // 801C6C60
  if (crb(c,2)) { goto L_801C6CD0; } // 801C6C64
  goto L_801C6E10; // 801C6C68
L_801C6C6C:;
  c->r[4]=R32(c->r[3]+0x000020B0u); // 801C6C6C
  c->r[5]=R32(c->r[3]+0x000020B8u); // 801C6C70
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C6C74
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801C6C78
  if (crb(c,0)) { goto L_801C6C88; } // 801C6C7C
  c->lr=0x801C6C84u; f_800AC3A4(c); // 801C6C80
  goto L_801C6E10; // 801C6C84
L_801C6C88:;
  c->r[0]=R8(c->r[3]+0x0000200Cu); // 801C6C88
  cmps(c,0,(int32_t)c->r[0],0); // 801C6C8C
  if (crb(c,2)) { goto L_801C6E10; } // 801C6C90
  c->r[0]=0u+0x0000001Bu; // 801C6C94
  c->r[4]=c->r[30]+0x00001F51u; // 801C6C98
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801C6C9C
  c->r[3]=c->r[3]+0x000008ECu; // 801C6CA0
  c->lr=0x801C6CA8u; f_80075440(c); // 801C6CA4
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801C6CA8
  c->r[5]=c->r[3]|c->r[3]; // 801C6CAC
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6CB0
  c->r[3]=c->r[30]+0x00000C88u; // 801C6CB4
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6CB8
  c->r[4]=c->r[30]+0x000008ECu; // 801C6CBC
  c->r[6]=0u+0x00000000u; // 801C6CC0
  c->r[7]=0u+0x00000000u; // 801C6CC4
  c->lr=0x801C6CCCu; f_800BB0C8(c); // 801C6CC8
  goto L_801C6E10; // 801C6CCC
L_801C6CD0:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C6CD0
  {uint32_t ea=c->r[2]+0xFFFFB868u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6CD4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C6CD8
  c->lr=0x801C6CE0u; f_8016498C(c); // 801C6CDC
  cmps(c,0,(int32_t)c->r[3],0); // 801C6CE0
  if (crb(c,2)) { goto L_801C6E10; } // 801C6CE4
  c->r[0]=0u+0x00000015u; // 801C6CE8
  c->r[3]=c->r[30]+0x000008ECu; // 801C6CEC
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801C6CF0
  c->r[4]=c->r[30]+0x00001F3Du; // 801C6CF4
  c->lr=0x801C6CFCu; f_80075440(c); // 801C6CF8
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801C6CFC
  c->r[5]=c->r[3]|c->r[3]; // 801C6D00
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6D04
  c->r[3]=c->r[30]+0x00000C88u; // 801C6D08
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6D0C
  c->r[4]=c->r[30]+0x000008ECu; // 801C6D10
  c->r[6]=0u+0x00000000u; // 801C6D14
  c->r[7]=0u+0x00000000u; // 801C6D18
  c->lr=0x801C6D20u; f_800BB0C8(c); // 801C6D1C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6D20
  c->r[3]=R32(c->r[30]+0x000020B8u); // 801C6D24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C6D28
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[0]);} // 801C6D2C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801C6D30
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C6D34
  if (!crb(c,2)) { goto L_801C6D40; } // 801C6D38
  c->r[3]=c->r[3]+0x00000001u; // 801C6D3C
L_801C6D40:;
  c->r[3]=c->r[3]^0x80000000u; // 801C6D40
  c->r[0]=0u+0x43300000u; // 801C6D44
  W32(c->r[1]+0x0000008Cu,c->r[3]); // 801C6D48
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[1]=RF64(ea);} // 801C6D4C
  W32(c->r[1]+0x00000088u,c->r[0]); // 801C6D50
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 801C6D54
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801C6D58
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801C6D5C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 801C6D60
  c->r[3]=R32(c->r[30]+0x000020B0u); // 801C6D64
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[0]);} // 801C6D68
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C6D6C
  c->r[3]=R32(c->r[1]+0x00000094u); // 801C6D70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C6D74
  if (!crb(c,2)) { goto L_801C6D88; } // 801C6D78
  c->r[3]=c->r[30]|c->r[30]; // 801C6D7C
  c->lr=0x801C6D84u; f_800AC3A4(c); // 801C6D80
  goto L_801C6E10; // 801C6D84
L_801C6D88:;
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[0]);} // 801C6D88
  c->r[3]=c->r[30]+0x00002090u; // 801C6D8C
  c->r[4]=R32(c->r[1]+0x00000094u); // 801C6D90
  c->r[4]=c->r[4]+0x00000001u; // 801C6D94
  c->lr=0x801C6D9Cu; f_801C76F4(c); // 801C6D98
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[1]);} // 801C6D9C
  c->r[4]=c->r[30]+0x000008D0u; // 801C6DA0
  c->r[3]=c->r[1]+0x00000050u; // 801C6DA4
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C6DA8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C6DAC
  c->ctr=c->r[12]; // 801C6DB0
  if (true) { c->lr=0x801C6DB8u; dispatch(c,c->ctr); } // 801C6DB4
  c->r[3]=c->r[1]+0x00000014u; // 801C6DB8
  c->r[4]=c->r[1]+0x00000050u; // 801C6DBC
  c->lr=0x801C6DC4u; f_80032FD8(c); // 801C6DC0
  c->r[3]=c->r[31]+0x00000010u; // 801C6DC4
  c->r[4]=c->r[1]+0x00000014u; // 801C6DC8
  c->lr=0x801C6DD0u; f_8003F468(c); // 801C6DCC
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801C6DD0
  c->r[4]=c->r[30]+0x000008D0u; // 801C6DD4
  c->r[3]=c->r[1]+0x00000020u; // 801C6DD8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C6DDC
  c->ctr=c->r[12]; // 801C6DE0
  if (true) { c->lr=0x801C6DE8u; dispatch(c,c->ctr); } // 801C6DE4
  c->r[3]=c->r[1]+0x00000008u; // 801C6DE8
  c->r[4]=c->r[1]+0x00000020u; // 801C6DEC
  c->lr=0x801C6DF4u; f_80032FD8(c); // 801C6DF0
  c->r[3]=c->r[30]+0x000021C4u; // 801C6DF4
  c->r[4]=c->r[1]+0x00000008u; // 801C6DF8
  c->lr=0x801C6E00u; f_8003F468(c); // 801C6DFC
  c->r[0]=0u+0x00000000u; // 801C6E00
  W8(c->r[30]+0x0000200Cu,c->r[0]); // 801C6E04
  goto L_801C6E10; // 801C6E08
L_801C6E0C:;
  c->lr=0x801C6E10u; f_800AC3A4(c); // 801C6E0C
L_801C6E10:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C6E10
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801C6E14
  c->r[30]=R32(c->r[1]+0x00000098u); // 801C6E18
  c->lr=c->r[0]; // 801C6E1C
  c->r[1]=c->r[1]+0x000000A0u; // 801C6E20
  return; // 801C6E24
}

// fn_801C6E28
void f_801C6E28(Ctx* __restrict c) {
  trace_call(0x801C6E28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6E28
  c->r[0]=c->lr; // 801C6E2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6E30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6E34
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6E38
  c->r[30]=c->r[3]|c->r[3]; // 801C6E3C
  c->lr=0x801C6E44u; f_801C4D30(c); // 801C6E40
  c->r[31]=0u+0x803E0000u; // 801C6E44
  c->r[3]=c->r[30]+0x00002209u; // 801C6E48
  c->r[31]=c->r[31]+0x00000A48u; // 801C6E4C
  c->r[4]=c->r[31]+0x00000040u; // 801C6E50
  c->lr=0x801C6E58u; f_802933D8(c); // 801C6E54
  {uint32_t ea=c->r[2]+0xFFFFB7F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C6E58
  c->r[3]=c->r[30]+0x00001F15u; // 801C6E5C
  {uint32_t ea=c->r[2]+0xFFFFB87Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6E60
  c->r[4]=c->r[31]+0x00000040u; // 801C6E64
  {uint32_t ea=c->r[2]+0xFFFFB880u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6E68
  {uint32_t ea=c->r[2]+0xFFFFB884u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6E6C
  {uint32_t ea=c->r[30]+0x000021D0u; WF32(ea,c->f[3]);} // 801C6E70
  {uint32_t ea=c->r[30]+0x000021C0u; WF32(ea,c->f[2]);} // 801C6E74
  {uint32_t ea=c->r[30]+0x000021B8u; WF32(ea,c->f[1]);} // 801C6E78
  {uint32_t ea=c->r[30]+0x000021BCu; WF32(ea,c->f[0]);} // 801C6E7C
  c->lr=0x801C6E84u; f_802933D8(c); // 801C6E80
  c->r[3]=c->r[30]+0x00001F51u; // 801C6E84
  c->r[4]=c->r[31]+0x00000040u; // 801C6E88
  c->lr=0x801C6E90u; f_802933D8(c); // 801C6E8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6E90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6E94
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C6E98
  c->lr=c->r[0]; // 801C6E9C
  c->r[1]=c->r[1]+0x00000010u; // 801C6EA0
  return; // 801C6EA4
}

// fn_801C6EA8
void f_801C6EA8(Ctx* __restrict c) {
  trace_call(0x801C6EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6EA8
  c->r[0]=c->lr; // 801C6EAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C6EB0
  c->r[11]=c->r[1]+0x00000030u; // 801C6EB4
  c->lr=0x801C6EBCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6EB8
  c->r[31]=c->r[5]|c->r[5]; // 801C6EBC
  c->r[29]=c->r[3]|c->r[3]; // 801C6EC0
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C6EC4
  c->r[3]=c->r[31]|c->r[31]; // 801C6EC8
  c->r[30]=c->r[4]|c->r[4]; // 801C6ECC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6ED0
  c->ctr=c->r[12]; // 801C6ED4
  if (true) { c->lr=0x801C6EDCu; dispatch(c,c->ctr); } // 801C6ED8
  cmps(c,0,(int32_t)c->r[3],3); // 801C6EDC
  if (crb(c,2)) { goto L_801C6EE8; } // 801C6EE0
  goto L_801C6F28; // 801C6EE4
L_801C6EE8:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6EE8
  c->r[4]=c->r[30]|c->r[30]; // 801C6EEC
  c->r[5]=c->r[31]|c->r[31]; // 801C6EF0
  c->lr=0x801C6EF8u; f_800B5B1C(c); // 801C6EF4
  {uint32_t ea=c->r[2]+0xFFFFB7F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6EF8
  c->r[3]=c->r[1]+0x00000008u; // 801C6EFC
  c->f[2]=c->f[1]; // 801C6F00
  c->f[3]=c->f[1]; // 801C6F04
  c->lr=0x801C6F0Cu; f_800521A0(c); // 801C6F08
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801C6F0C
  c->r[4]=c->r[3]|c->r[3]; // 801C6F10
  c->r[3]=c->r[29]+0x000008D0u; // 801C6F14
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801C6F18
  c->ctr=c->r[12]; // 801C6F1C
  if (true) { c->lr=0x801C6F24u; dispatch(c,c->ctr); } // 801C6F20
  goto L_801C6F38; // 801C6F24
L_801C6F28:;
  c->r[3]=c->r[29]|c->r[29]; // 801C6F28
  c->r[4]=c->r[30]|c->r[30]; // 801C6F2C
  c->r[5]=c->r[31]|c->r[31]; // 801C6F30
  c->lr=0x801C6F38u; f_801C20E4(c); // 801C6F34
L_801C6F38:;
  c->r[11]=c->r[1]+0x00000030u; // 801C6F38
  c->lr=0x801C6F40u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6F3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C6F40
  c->lr=c->r[0]; // 801C6F44
  c->r[1]=c->r[1]+0x00000030u; // 801C6F48
  return; // 801C6F4C
}

// fn_801C6F50
void f_801C6F50(Ctx* __restrict c) {
  trace_call(0x801C6F50u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801C6F50
  cmps(c,0,(int32_t)c->r[0],40); // 801C6F54
  if (crb(c,2)) { goto L_801C6F70; } // 801C6F58
  if (!crb(c,0)) return; // 801C6F5C
  cmps(c,0,(int32_t)c->r[0],20); // 801C6F60
  if (!crb(c,2)) return; // 801C6F64
  c->r[4]=c->r[5]|c->r[5]; // 801C6F68
  f_801C7598(c); return; // 801C6F6C
L_801C6F70:;
  c->r[4]=c->r[5]|c->r[5]; // 801C6F70
  f_801C5A20(c); return; // 801C6F74
  return; // 801C6F78
}

// fn_801C6F7C
void f_801C6F7C(Ctx* __restrict c) {
  trace_call(0x801C6F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6F7C
  c->r[0]=c->lr; // 801C6F80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6F88
  c->r[31]=c->r[3]|c->r[3]; // 801C6F8C
  c->lr=0x801C6F94u; f_801C4FB4(c); // 801C6F90
  {uint32_t ea=c->r[2]+0xFFFFB814u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6F94
  c->r[0]=0u+0x00000000u; // 801C6F98
  {uint32_t ea=c->r[2]+0xFFFFB818u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6F9C
  W32(c->r[31]+0x000021A8u,c->r[0]); // 801C6FA0
  W32(c->r[31]+0x000021ACu,c->r[0]); // 801C6FA4
  {uint32_t ea=c->r[31]+0x000021B8u; WF32(ea,c->f[1]);} // 801C6FA8
  {uint32_t ea=c->r[31]+0x000021BCu; WF32(ea,c->f[0]);} // 801C6FAC
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C6FB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6FB8
  c->lr=c->r[0]; // 801C6FBC
  c->r[1]=c->r[1]+0x00000010u; // 801C6FC0
  return; // 801C6FC4
}

// fn_801C6FC8
void f_801C6FC8(Ctx* __restrict c) {
  trace_call(0x801C6FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6FC8
  c->r[0]=c->lr; // 801C6FCC
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801C6FD0
  W32(c->r[1]+0x000000BCu,c->r[31]); // 801C6FD4
  c->r[31]=c->r[3]|c->r[3]; // 801C6FD8
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C6FDC
  cmps(c,0,(int32_t)c->r[0],25); // 801C6FE0
  if (crb(c,2)) { goto L_801C7254; } // 801C6FE4
  if (!crb(c,0)) { goto L_801C6FFC; } // 801C6FE8
  cmps(c,0,(int32_t)c->r[0],23); // 801C6FEC
  if (crb(c,2)) { goto L_801C7008; } // 801C6FF0
  if (!crb(c,0)) { goto L_801C70B4; } // 801C6FF4
  goto L_801C7254; // 801C6FF8
L_801C6FFC:;
  cmps(c,0,(int32_t)c->r[0],27); // 801C6FFC
  if (!crb(c,0)) { goto L_801C7254; } // 801C7000
  goto L_801C7188; // 801C7004
L_801C7008:;
  c->r[4]=c->r[31]|c->r[31]; // 801C7008
  c->r[3]=c->r[1]+0x00000084u; // 801C700C
  c->r[5]=0u+0x00000000u; // 801C7010
  c->lr=0x801C7018u; f_801C5CC0(c); // 801C7014
  c->r[3]=c->r[1]+0x00000084u; // 801C7018
  c->lr=0x801C7020u; f_801C4B60(c); // 801C701C
  cmps(c,0,(int32_t)c->r[3],0); // 801C7020
  if (!crb(c,2)) { goto L_801C7040; } // 801C7024
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C7028
  c->r[3]=c->r[31]+0x000008D0u; // 801C702C
  c->r[4]=c->r[1]+0x00000084u; // 801C7030
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C7034
  c->ctr=c->r[12]; // 801C7038
  if (true) { c->lr=0x801C7040u; dispatch(c,c->ctr); } // 801C703C
L_801C7040:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7040
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7044
  fcmp(c,0,c->f[1],c->f[0]); // 801C7048
  if (!crb(c,0)) { goto L_801C7064; } // 801C704C
  c->r[3]=0u+0x804D0000u; // 801C7050
  c->r[3]=c->r[3]+0x00003318u; // 801C7054
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7058
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C705C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C7060
L_801C7064:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7064
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7068
  fcmp(c,0,c->f[1],c->f[0]); // 801C706C
  if (!crb(c,1)) { goto L_801C7078; } // 801C7070
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C7074
L_801C7078:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7078
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C707C
  fcmp(c,0,c->f[1],c->f[0]); // 801C7080
  if (!crb(c,1)) { goto L_801C709C; } // 801C7084
  c->r[3]=0u+0x804D0000u; // 801C7088
  c->r[3]=c->r[3]+0x00003318u; // 801C708C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7090
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C7094
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C7098
L_801C709C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C709C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C70A0
  fcmp(c,0,c->f[1],c->f[0]); // 801C70A4
  if (!crb(c,0)) { goto L_801C7254; } // 801C70A8
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C70AC
  goto L_801C7254; // 801C70B0
L_801C70B4:;
  c->r[4]=c->r[31]|c->r[31]; // 801C70B4
  c->r[3]=c->r[1]+0x00000054u; // 801C70B8
  c->r[5]=0u+0x00000000u; // 801C70BC
  c->lr=0x801C70C4u; f_801C5CC0(c); // 801C70C0
  c->r[3]=c->r[1]+0x00000054u; // 801C70C4
  c->lr=0x801C70CCu; f_801C4B60(c); // 801C70C8
  cmps(c,0,(int32_t)c->r[3],0); // 801C70CC
  if (!crb(c,2)) { goto L_801C70EC; } // 801C70D0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C70D4
  c->r[3]=c->r[31]+0x000008D0u; // 801C70D8
  c->r[4]=c->r[1]+0x00000054u; // 801C70DC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C70E0
  c->ctr=c->r[12]; // 801C70E4
  if (true) { c->lr=0x801C70ECu; dispatch(c,c->ctr); } // 801C70E8
L_801C70EC:;
  c->r[0]=R8(c->r[31]+0x0000200Cu); // 801C70EC
  cmps(c,0,(int32_t)c->r[0],0); // 801C70F0
  if (crb(c,2)) { goto L_801C714C; } // 801C70F4
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C70F8
  {uint32_t ea=c->r[2]+0xFFFFB808u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C70FC
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7100
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C7104
  fcmp(c,0,c->f[2],c->f[0]); // 801C7108
  if (!crb(c,0)) { goto L_801C712C; } // 801C710C
  c->r[3]=0u+0x804D0000u; // 801C7110
  {uint32_t ea=c->r[2]+0xFFFFB888u; c->f[0]=RF64(ea);} // 801C7114
  c->r[3]=c->r[3]+0x00003318u; // 801C7118
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C711C
  c->f[0]=std::fma(c->f[0],c->f[1],c->f[2]); // 801C7120
  c->f[0]=c->ps1[0]=S(c->f[0]); // 801C7124
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C7128
L_801C712C:;
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C712C
  {uint32_t ea=c->r[2]+0xFFFFB808u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7130
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7134
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C7138
  fcmp(c,0,c->f[2],c->f[0]); // 801C713C
  if (!crb(c,1)) { goto L_801C7254; } // 801C7140
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C7144
  goto L_801C7254; // 801C7148
L_801C714C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C714C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7150
  fcmp(c,0,c->f[1],c->f[0]); // 801C7154
  if (!crb(c,0)) { goto L_801C7170; } // 801C7158
  c->r[3]=0u+0x804D0000u; // 801C715C
  c->r[3]=c->r[3]+0x00003318u; // 801C7160
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7164
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C7168
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C716C
L_801C7170:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7170
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7174
  fcmp(c,0,c->f[1],c->f[0]); // 801C7178
  if (!crb(c,1)) { goto L_801C7254; } // 801C717C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C7180
  goto L_801C7254; // 801C7184
L_801C7188:;
  c->lr=0x801C718Cu; f_801C3C1C(c); // 801C7188
  {uint32_t ea=c->r[2]+0xFFFFB838u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C718C
  fcmp(c,0,c->f[1],c->f[0]); // 801C7190
  if (!crb(c,0)) { goto L_801C7254; } // 801C7194
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C7198
  c->r[4]=c->r[31]+0x000008D0u; // 801C719C
  c->r[3]=c->r[1]+0x00000024u; // 801C71A0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C71A4
  c->ctr=c->r[12]; // 801C71A8
  if (true) { c->lr=0x801C71B0u; dispatch(c,c->ctr); } // 801C71AC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C71B0
  c->r[3]=c->r[1]+0x00000018u; // 801C71B4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C71B8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C71BC
  c->lr=0x801C71C4u; f_800521A0(c); // 801C71C0
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C71C4
  c->r[3]=c->r[31]|c->r[31]; // 801C71C8
  c->r[4]=c->r[1]+0x00000008u; // 801C71CC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C71D0
  c->lr=0x801C71D8u; f_801C4438(c); // 801C71D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C71D8
  c->r[3]=c->r[1]+0x0000000Cu; // 801C71DC
  c->r[4]=c->r[31]+0x00002000u; // 801C71E0
  c->lr=0x801C71E8u; f_80064C58(c); // 801C71E4
  c->r[3]=c->r[1]+0x00000018u; // 801C71E8
  c->r[5]=c->r[1]+0x0000000Cu; // 801C71EC
  c->r[4]=c->r[3]|c->r[3]; // 801C71F0
  c->lr=0x801C71F8u; f_80064C34(c); // 801C71F4
  c->r[3]=c->r[1]+0x00000024u; // 801C71F8
  c->r[4]=c->r[1]+0x00000018u; // 801C71FC
  c->lr=0x801C7204u; f_80032FF4(c); // 801C7200
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C7204
  c->r[3]=c->r[31]+0x000008D0u; // 801C7208
  c->r[4]=c->r[1]+0x00000024u; // 801C720C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801C7210
  c->ctr=c->r[12]; // 801C7214
  if (true) { c->lr=0x801C721Cu; dispatch(c,c->ctr); } // 801C7218
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C721C
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7220
  fcmp(c,0,c->f[1],c->f[0]); // 801C7224
  if (!crb(c,1)) { goto L_801C7240; } // 801C7228
  c->r[3]=0u+0x804D0000u; // 801C722C
  c->r[3]=c->r[3]+0x00003318u; // 801C7230
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7234
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C7238
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C723C
L_801C7240:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7240
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7244
  fcmp(c,0,c->f[1],c->f[0]); // 801C7248
  if (!crb(c,0)) { goto L_801C7254; } // 801C724C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C7250
L_801C7254:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801C7254
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801C7258
  c->lr=c->r[0]; // 801C725C
  c->r[1]=c->r[1]+0x000000C0u; // 801C7260
  return; // 801C7264
}

// fn_801C7268
void f_801C7268(Ctx* __restrict c) {
  trace_call(0x801C7268u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7268
  c->r[0]=c->lr; // 801C726C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801C7270
  W32(c->r[1]+0x000000DCu,c->r[31]); // 801C7274
  c->r[31]=c->r[3]|c->r[3]; // 801C7278
  W32(c->r[1]+0x000000D8u,c->r[30]); // 801C727C
  c->r[30]=c->r[4]|c->r[4]; // 801C7280
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801C7284
  cmps(c,0,(int32_t)c->r[0],25); // 801C7288
  if (crb(c,2)) { goto L_801C7580; } // 801C728C
  if (!crb(c,0)) { goto L_801C72A4; } // 801C7290
  cmps(c,0,(int32_t)c->r[0],23); // 801C7294
  if (crb(c,2)) { goto L_801C72B4; } // 801C7298
  if (!crb(c,0)) { goto L_801C7370; } // 801C729C
  goto L_801C7580; // 801C72A0
L_801C72A4:;
  cmps(c,0,(int32_t)c->r[0],27); // 801C72A4
  if (crb(c,2)) { goto L_801C74D8; } // 801C72A8
  if (!crb(c,0)) { goto L_801C7580; } // 801C72AC
  goto L_801C7474; // 801C72B0
L_801C72B4:;
  c->r[0]=R8(c->r[3]+0x0000200Cu); // 801C72B4
  cmps(c,0,(int32_t)c->r[0],0); // 801C72B8
  if (crb(c,2)) { goto L_801C7318; } // 801C72BC
  c->lr=0x801C72C4u; f_801C3C1C(c); // 801C72C0
  {uint32_t ea=c->r[2]+0xFFFFB838u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C72C4
  fcmp(c,0,c->f[1],c->f[0]); // 801C72C8
  if (!crb(c,0)) { goto L_801C7580; } // 801C72CC
  c->r[3]=c->r[31]+0x000008ECu; // 801C72D0
  c->r[4]=c->r[31]+0x00002180u; // 801C72D4
  c->lr=0x801C72DCu; f_80075440(c); // 801C72D8
  W32(c->r[30]+0x00000034u,c->r[3]); // 801C72DC
  c->r[5]=c->r[3]|c->r[3]; // 801C72E0
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C72E4
  c->r[3]=c->r[31]+0x00000C88u; // 801C72E8
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C72EC
  c->r[4]=c->r[31]+0x000008ECu; // 801C72F0
  c->r[6]=0u+0x00000000u; // 801C72F4
  c->r[7]=0u+0x00000000u; // 801C72F8
  c->lr=0x801C7300u; f_800BB0C8(c); // 801C72FC
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7300
  c->r[0]=0u+0x00000018u; // 801C7304
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C7308
  {uint32_t ea=c->r[31]+0x000021BCu; WF32(ea,c->f[0]);} // 801C730C
  {uint32_t ea=c->r[31]+0x000021B8u; WF32(ea,c->f[0]);} // 801C7310
  goto L_801C7580; // 801C7314
L_801C7318:;
  c->lr=0x801C731Cu; f_801C3C1C(c); // 801C7318
  {uint32_t ea=c->r[2]+0xFFFFB838u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C731C
  fcmp(c,0,c->f[1],c->f[0]); // 801C7320
  if (!crb(c,0)) { goto L_801C7580; } // 801C7324
  c->r[3]=c->r[31]+0x000008ECu; // 801C7328
  c->r[4]=c->r[31]+0x00002180u; // 801C732C
  c->lr=0x801C7334u; f_80075440(c); // 801C7330
  W32(c->r[30]+0x00000034u,c->r[3]); // 801C7334
  c->r[5]=c->r[3]|c->r[3]; // 801C7338
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C733C
  c->r[3]=c->r[31]+0x00000C88u; // 801C7340
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7344
  c->r[4]=c->r[31]+0x000008ECu; // 801C7348
  c->r[6]=0u+0x00000000u; // 801C734C
  c->r[7]=0u+0x00000000u; // 801C7350
  c->lr=0x801C7358u; f_800BB0C8(c); // 801C7354
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7358
  c->r[0]=0u+0x00000018u; // 801C735C
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C7360
  {uint32_t ea=c->r[31]+0x000021BCu; WF32(ea,c->f[0]);} // 801C7364
  {uint32_t ea=c->r[31]+0x000021B8u; WF32(ea,c->f[0]);} // 801C7368
  goto L_801C7580; // 801C736C
L_801C7370:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C7370
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C7374
  c->lr=0x801C737Cu; f_800752CC(c); // 801C7378
  {uint32_t ea=c->r[2]+0xFFFFB804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C737C
  fcmp(c,0,c->f[1],c->f[0]); // 801C7380
  if (!crb(c,1)) { goto L_801C7580; } // 801C7384
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C7388
  c->r[4]=c->r[31]+0x000008D0u; // 801C738C
  c->r[3]=c->r[1]+0x00000094u; // 801C7390
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C7394
  c->ctr=c->r[12]; // 801C7398
  if (true) { c->lr=0x801C73A0u; dispatch(c,c->ctr); } // 801C739C
  c->r[3]=c->r[1]+0x00000034u; // 801C73A0
  c->r[4]=c->r[1]+0x00000094u; // 801C73A4
  c->lr=0x801C73ACu; f_80032FD8(c); // 801C73A8
  c->r[3]=c->r[31]|c->r[31]; // 801C73AC
  c->lr=0x801C73B4u; f_801C3C1C(c); // 801C73B0
  {uint32_t ea=c->r[2]+0xFFFFB838u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C73B4
  fcmp(c,0,c->f[1],c->f[0]); // 801C73B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C73BC
  if (!crb(c,2)) { goto L_801C7404; } // 801C73C0
  {uint32_t ea=c->r[30]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C73C4
  c->r[3]=c->r[1]+0x00000070u; // 801C73C8
  c->r[4]=c->r[1]+0x00000034u; // 801C73CC
  c->r[5]=0u+0xFFFFFFFFu; // 801C73D0
  c->lr=0x801C73D8u; f_800BCD10(c); // 801C73D4
  c->r[0]=R32(c->r[30]+0x00000024u); // 801C73D8
  c->r[5]=c->r[13]+0xFFFF94B8u; // 801C73DC
  c->r[3]=c->r[1]+0x00000008u; // 801C73E0
  c->r[4]=c->r[1]+0x00000070u; // 801C73E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C73E8
  c->r[6]=R32(c->r[5]+c->r[0]); // 801C73EC
  c->r[5]=R32(c->r[6]+0x00000000u); // 801C73F0
  c->r[0]=R32(c->r[6]+0x00000004u); // 801C73F4
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C73F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C73FC
  c->lr=0x801C7404u; f_800BCDAC(c); // 801C7400
L_801C7404:;
  c->r[0]=0u+0x0000001Au; // 801C7404
  c->r[3]=0u+0x804D0000u; // 801C7408
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C740C
  c->r[3]=c->r[3]+0x00003318u; // 801C7410
  c->r[0]=0u+0x43300000u; // 801C7414
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[2]=RF64(ea);} // 801C7418
  c->r[3]=R32(c->r[3]+0x00000028u); // 801C741C
  W32(c->r[1]+0x000000C8u,c->r[0]); // 801C7420
  c->r[0]=c->r[3]^0x80000000u; // 801C7424
  {uint32_t ea=c->r[2]+0xFFFFB80Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7428
  W32(c->r[1]+0x000000CCu,c->r[0]); // 801C742C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=RF64(ea);} // 801C7430
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C7434
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801C7438
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C743C
  c->lr=0x801C7444u; f_80061A4C(c); // 801C7440
  c->r[5]=c->r[3]|c->r[3]; // 801C7444
  c->r[3]=c->r[1]+0x00000010u; // 801C7448
  c->r[4]=c->r[5]+0x00000390u; // 801C744C
  c->r[5]=c->r[5]+0x00000384u; // 801C7450
  c->lr=0x801C7458u; f_8007B8A4(c); // 801C7454
  c->r[3]=c->r[1]+0x00000010u; // 801C7458
  c->r[4]=c->r[1]+0x00000028u; // 801C745C
  c->lr=0x801C7464u; f_80265750(c); // 801C7460
  c->r[3]=c->r[31]+0x00002000u; // 801C7464
  c->r[4]=c->r[1]+0x00000028u; // 801C7468
  c->lr=0x801C7470u; f_8003F468(c); // 801C746C
  goto L_801C7580; // 801C7470
L_801C7474:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C7474
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7478
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C747C
  c->lr=0x801C7484u; f_8016498C(c); // 801C7480
  cmps(c,0,(int32_t)c->r[3],0); // 801C7484
  if (crb(c,2)) { goto L_801C7580; } // 801C7488
  c->r[3]=c->r[31]+0x000008ECu; // 801C748C
  c->r[4]=c->r[31]+0x00002209u; // 801C7490
  c->lr=0x801C7498u; f_80075440(c); // 801C7494
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7498
  c->r[5]=c->r[3]|c->r[3]; // 801C749C
  W32(c->r[30]+0x00000034u,c->r[3]); // 801C74A0
  c->r[3]=c->r[31]+0x00000C88u; // 801C74A4
  c->f[2]=c->f[1]; // 801C74A8
  c->r[4]=c->r[31]+0x000008ECu; // 801C74AC
  c->r[6]=0u+0x00000000u; // 801C74B0
  c->r[7]=0u+0x00000000u; // 801C74B4
  c->lr=0x801C74BCu; f_800BB0C8(c); // 801C74B8
  c->r[3]=R32(c->r[31]+0x00000974u); // 801C74BC
  {uint32_t ea=c->r[2]+0xFFFFB83Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C74C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C74C4
  c->lr=0x801C74CCu; f_80165B9C(c); // 801C74C8
  c->r[0]=0u+0x0000001Bu; // 801C74CC
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C74D0
  goto L_801C7580; // 801C74D4
L_801C74D8:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C74D8
  {uint32_t ea=c->r[2]+0xFFFFB868u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C74DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C74E0
  c->lr=0x801C74E8u; f_8016498C(c); // 801C74E4
  cmps(c,0,(int32_t)c->r[3],0); // 801C74E8
  if (crb(c,2)) { goto L_801C7580; } // 801C74EC
  c->r[3]=c->r[31]+0x000008ECu; // 801C74F0
  c->r[4]=c->r[31]+0x00001F3Du; // 801C74F4
  c->lr=0x801C74FCu; f_80075440(c); // 801C74F8
  W32(c->r[30]+0x00000034u,c->r[3]); // 801C74FC
  c->r[5]=c->r[3]|c->r[3]; // 801C7500
  {uint32_t ea=c->r[2]+0xFFFFB828u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7504
  c->r[3]=c->r[31]+0x00000C88u; // 801C7508
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C750C
  c->r[4]=c->r[31]+0x000008ECu; // 801C7510
  c->r[6]=0u+0x00000000u; // 801C7514
  c->r[7]=0u+0x00000000u; // 801C7518
  c->lr=0x801C7520u; f_800BB0C8(c); // 801C751C
  c->r[3]=R32(c->r[31]+0x00000974u); // 801C7520
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7524
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C7528
  c->lr=0x801C7530u; f_80165B9C(c); // 801C752C
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7530
  c->r[0]=0u+0x00000017u; // 801C7534
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801C7538
  c->r[4]=c->r[31]+0x000008D0u; // 801C753C
  c->r[3]=c->r[1]+0x00000040u; // 801C7540
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801C7544
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801C7548
  c->r[12]=R32(c->r[12]+0x00000040u); // 801C754C
  c->ctr=c->r[12]; // 801C7550
  if (true) { c->lr=0x801C7558u; dispatch(c,c->ctr); } // 801C7554
  c->r[3]=c->r[1]+0x0000001Cu; // 801C7558
  c->r[4]=c->r[1]+0x00000040u; // 801C755C
  c->lr=0x801C7564u; f_80032FD8(c); // 801C7560
  c->r[3]=c->r[31]+0x000021C4u; // 801C7564
  c->r[4]=c->r[1]+0x0000001Cu; // 801C7568
  c->lr=0x801C7570u; f_8003F468(c); // 801C756C
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7570
  c->r[0]=0u+0x00000001u; // 801C7574
  W8(c->r[31]+0x0000200Cu,c->r[0]); // 801C7578
  {uint32_t ea=c->r[31]+0x000021D0u; WF32(ea,c->f[0]);} // 801C757C
L_801C7580:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801C7580
  c->r[31]=R32(c->r[1]+0x000000DCu); // 801C7584
  c->r[30]=R32(c->r[1]+0x000000D8u); // 801C7588
  c->lr=c->r[0]; // 801C758C
  c->r[1]=c->r[1]+0x000000E0u; // 801C7590
  return; // 801C7594
}

// fn_801C7598
void f_801C7598(Ctx* __restrict c) {
  trace_call(0x801C7598u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7598
  c->r[0]=c->lr; // 801C759C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C75A0
  c->r[11]=c->r[1]+0x00000030u; // 801C75A4
  c->lr=0x801C75ACu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C75A8
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C75AC
  c->r[29]=c->r[3]|c->r[3]; // 801C75B0
  {uint32_t ea=c->r[3]+0x000021B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C75B4
  c->r[30]=c->r[4]|c->r[4]; // 801C75B8
  fcmp(c,0,c->f[1],c->f[0]); // 801C75BC
  if (!crb(c,2)) { goto L_801C7628; } // 801C75C0
  c->lr=0x801C75C8u; f_80291D94(c); // 801C75C4
  c->r[0]=c->r[3]^0x80000000u; // 801C75C8
  c->r[31]=0u+0x43300000u; // 801C75CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C75D0
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[3]=RF64(ea);} // 801C75D4
  W32(c->r[1]+0x00000008u,c->r[31]); // 801C75D8
  {uint32_t ea=c->r[2]+0xFFFFB810u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C75DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801C75E0
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C75E4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C75E8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C75EC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C75F0
  {uint32_t ea=c->r[29]+0x000021B0u; WF32(ea,c->f[0]);} // 801C75F4
  c->lr=0x801C75FCu; f_80291D94(c); // 801C75F8
  c->r[0]=c->r[3]^0x80000000u; // 801C75FC
  W32(c->r[1]+0x00000010u,c->r[31]); // 801C7600
  {uint32_t ea=c->r[2]+0xFFFFB820u; c->f[3]=RF64(ea);} // 801C7604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7608
  {uint32_t ea=c->r[2]+0xFFFFB810u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C760C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801C7610
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7614
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C7618
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C761C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C7620
  {uint32_t ea=c->r[29]+0x000021B4u; WF32(ea,c->f[0]);} // 801C7624
L_801C7628:;
  c->r[3]=c->r[29]|c->r[29]; // 801C7628
  c->r[4]=c->r[30]|c->r[30]; // 801C762C
  c->lr=0x801C7634u; f_801C68B0(c); // 801C7630
  {uint32_t ea=c->r[2]+0xFFFFB854u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7634
  c->r[11]=c->r[1]+0x00000030u; // 801C7638
  {uint32_t ea=c->r[2]+0xFFFFB890u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C763C
  {uint32_t ea=c->r[29]+0x000021B8u; WF32(ea,c->f[1]);} // 801C7640
  {uint32_t ea=c->r[29]+0x000021BCu; WF32(ea,c->f[0]);} // 801C7644
  c->lr=0x801C764Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7648
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C764C
  c->lr=c->r[0]; // 801C7650
  c->r[1]=c->r[1]+0x00000030u; // 801C7654
  return; // 801C7658
}

// fn_801C765C
void f_801C765C(Ctx* __restrict c) {
  trace_call(0x801C765Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C765C
  f_801C4EE8(c); return; // 801C7660
}

// fn_801C7664
void f_801C7664(Ctx* __restrict c) {
  trace_call(0x801C7664u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C7664
  f_801C4FB4(c); return; // 801C7668
}

// fn_801C766C
void f_801C766C(Ctx* __restrict c) {
  trace_call(0x801C766Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C766C
  f_801C4F3C(c); return; // 801C7670
}

// fn_801C7674
void f_801C7674(Ctx* __restrict c) {
  trace_call(0x801C7674u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C7674
  f_801C51D4(c); return; // 801C7678
}

// fn_801C767C
void f_801C767C(Ctx* __restrict c) {
  trace_call(0x801C767Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C767C
  f_801C4F14(c); return; // 801C7680
}

// fn_801C7684
void f_801C7684(Ctx* __restrict c) {
  trace_call(0x801C7684u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C7684
  f_801C50A4(c); return; // 801C7688
}

// fn_801C768C
void f_801C768C(Ctx* __restrict c) {
  trace_call(0x801C768Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C768C
  f_801C6098(c); return; // 801C7690
}

// fn_801C7694
void f_801C7694(Ctx* __restrict c) {
  trace_call(0x801C7694u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C7694
  f_801C6164(c); return; // 801C7698
}

// fn_801C769C
void f_801C769C(Ctx* __restrict c) {
  trace_call(0x801C769Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C769C
  f_801C6480(c); return; // 801C76A0
}

// fn_801C76A4
void f_801C76A4(Ctx* __restrict c) {
  trace_call(0x801C76A4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76A4
  f_801C61E0(c); return; // 801C76A8
}

// fn_801C76AC
void f_801C76AC(Ctx* __restrict c) {
  trace_call(0x801C76ACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76AC
  f_801C4E6C(c); return; // 801C76B0
}

// fn_801C76B4
void f_801C76B4(Ctx* __restrict c) {
  trace_call(0x801C76B4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76B4
  f_801C6F50(c); return; // 801C76B8
}

// fn_801C76BC
void f_801C76BC(Ctx* __restrict c) {
  trace_call(0x801C76BCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76BC
  f_801C6F7C(c); return; // 801C76C0
}

// fn_801C76C4
void f_801C76C4(Ctx* __restrict c) {
  trace_call(0x801C76C4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76C4
  f_801C4EC0(c); return; // 801C76C8
}

// fn_801C76CC
void f_801C76CC(Ctx* __restrict c) {
  trace_call(0x801C76CCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76CC
  f_801C60EC(c); return; // 801C76D0
}

// fn_801C76D4
void f_801C76D4(Ctx* __restrict c) {
  trace_call(0x801C76D4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76D4
  f_801C7268(c); return; // 801C76D8
}

// fn_801C76DC
void f_801C76DC(Ctx* __restrict c) {
  trace_call(0x801C76DCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76DC
  f_801C4E98(c); return; // 801C76E0
}

// fn_801C76E4
void f_801C76E4(Ctx* __restrict c) {
  trace_call(0x801C76E4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76E4
  f_801C60C4(c); return; // 801C76E8
}

// fn_801C76EC
void f_801C76EC(Ctx* __restrict c) {
  trace_call(0x801C76ECu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801C76EC
  f_801C6FC8(c); return; // 801C76F0
}

// fn_801C76F4
void f_801C76F4(Ctx* __restrict c) {
  trace_call(0x801C76F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C76F4
  c->r[0]=c->lr; // 801C76F8
  c->r[5]=c->r[3]|c->r[3]; // 801C76FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7700
  c->r[0]=R32(c->r[3]+0x00000020u); // 801C7704
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C7708
  if (crb(c,0)) { goto L_801C7718; } // 801C770C
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7710
  goto L_801C7738; // 801C7714
L_801C7718:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801C7718
  c->r[4]=R32(c->r[5]+0x00000000u); // 801C771C
  c->r[3]=c->r[1]+0x00000008u; // 801C7720
  c->r[5]=c->r[5]+0x0000002Cu; // 801C7724
  c->r[4]=c->r[4]+c->r[0]; // 801C7728
  c->lr=0x801C7730u; f_8007B8A4(c); // 801C772C
  c->r[3]=c->r[1]+0x00000008u; // 801C7730
  c->lr=0x801C7738u; f_802657AC(c); // 801C7734
L_801C7738:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7738
  c->lr=c->r[0]; // 801C773C
  c->r[1]=c->r[1]+0x00000020u; // 801C7740
  return; // 801C7744
}

// fn_801C7748
void f_801C7748(Ctx* __restrict c) {
  trace_call(0x801C7748u);
  f_801C248C(c); return; // 801C7748
}

// fn_801C774C
void f_801C774C(Ctx* __restrict c) {
  trace_call(0x801C774Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C774C
  c->r[0]=c->lr; // 801C7750
  cmps(c,0,(int32_t)c->r[3],0); // 801C7754
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7758
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C775C
  c->r[30]=c->r[3]|c->r[3]; // 801C7760
  c->r[31]=c->r[4]|c->r[4]; // 801C7764
  if (crb(c,2)) { goto L_801C7788; } // 801C7768
  if (crb(c,2)) { goto L_801C7778; } // 801C776C
  c->r[4]=0u+0x00000000u; // 801C7770
  c->lr=0x801C7778u; f_800D9644(c); // 801C7774
L_801C7778:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C7778
  if (!crb(c,1)) { goto L_801C7788; } // 801C777C
  c->r[3]=c->r[30]|c->r[30]; // 801C7780
  c->lr=0x801C7788u; f_802896EC(c); // 801C7784
L_801C7788:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7788
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C778C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7790
  c->lr=c->r[0]; // 801C7794
  c->r[1]=c->r[1]+0x00000010u; // 801C7798
  return; // 801C779C
}

// fn_801C77A0
void f_801C77A0(Ctx* __restrict c) {
  trace_call(0x801C77A0u);
  {uint32_t ea=c->r[2]+0xFFFFB82Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C77A0
  c->r[3]=0u+0x80570000u; // 801C77A4
  {uint32_t ea=c->r[2]+0xFFFFB800u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C77A8
  c->r[3]=c->r[3]+0x000000A8u; // 801C77AC
  c->f[3]=c->f[1]; // 801C77B0
  f_8003F588(c); return; // 801C77B4
}

// fn_801C77B8
void f_801C77B8(Ctx* __restrict c) {
  trace_call(0x801C77B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C77B8
  c->r[0]=c->lr; // 801C77BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C77C0
  c->r[3]=R32(c->r[13]+0xFFFF94E8u); // 801C77C4
  c->lr=0x801C77CCu; f_800A32C0(c); // 801C77C8
  c->r[3]=0u+0x80450000u; // 801C77CC
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801C77D0
  c->lr=0x801C77D8u; f_800449B4(c); // 801C77D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C77D8
  c->lr=c->r[0]; // 801C77DC
  c->r[1]=c->r[1]+0x00000010u; // 801C77E0
  return; // 801C77E4
}

// fn_801C77E8
void f_801C77E8(Ctx* __restrict c) {
  trace_call(0x801C77E8u);
  c->r[3]=R32(c->r[13]+0xFFFF94E8u); // 801C77E8
  f_800A3BE8(c); return; // 801C77EC
}

// fn_801C77F0
void f_801C77F0(Ctx* __restrict c) {
  trace_call(0x801C77F0u);
  return; // 801C77F0
}

// fn_801C77F4
void f_801C77F4(Ctx* __restrict c) {
  trace_call(0x801C77F4u);
  return; // 801C77F4
}

// fn_801C77F8
void f_801C77F8(Ctx* __restrict c) {
  trace_call(0x801C77F8u);
  c->r[3]=R32(c->r[13]+0xFFFF94E8u); // 801C77F8
  f_800A3470(c); return; // 801C77FC
}

// fn_801C7800
void f_801C7800(Ctx* __restrict c) {
  trace_call(0x801C7800u);
  {uint32_t ea=c->r[1]+0xFFFFF060u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7800
  c->r[0]=c->lr; // 801C7804
  W32(c->r[1]+0x00000FA4u,c->r[0]); // 801C7808
  c->r[11]=c->r[1]+0x00000FA0u; // 801C780C
  c->lr=0x801C7814u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7810
  {uint32_t ea=c->r[2]+0xFFFFB898u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7814
  c->r[24]=c->r[3]|c->r[3]; // 801C7818
  c->r[30]=R32(c->r[1]+0x00000FA8u); // 801C781C
  c->r[25]=c->r[4]|c->r[4]; // 801C7820
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 801C7824
  c->r[23]=c->r[5]|c->r[5]; // 801C7828
  c->r[26]=c->r[6]|c->r[6]; // 801C782C
  c->r[27]=c->r[7]|c->r[7]; // 801C7830
  c->r[28]=c->r[8]|c->r[8]; // 801C7834
  c->r[29]=c->r[9]|c->r[9]; // 801C7838
  c->r[22]=c->r[10]|c->r[10]; // 801C783C
  c->r[3]=c->r[1]+0x00000174u; // 801C7840
  c->lr=0x801C7848u; f_800462E8(c); // 801C7844
  c->r[0]=0u+0x00000000u; // 801C7848
  c->r[4]=c->r[23]|c->r[23]; // 801C784C
  W32(c->r[1]+0x00000F6Cu,c->r[0]); // 801C7850
  c->r[3]=c->r[1]+0x00000070u; // 801C7854
  c->r[31]=0u+0x00000000u; // 801C7858
  c->lr=0x801C7860u; f_800F471C(c); // 801C785C
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 801C7860
  if (crb(c,2)) { goto L_801C78C0; } // 801C7864
  cmps(c,0,(int32_t)c->r[22],0); // 801C7868
  if (crb(c,2)) { goto L_801C78C0; } // 801C786C
  c->r[3]=c->r[1]+0x00000058u; // 801C7870
  c->r[4]=c->r[1]+0x00000070u; // 801C7874
  c->lr=0x801C787Cu; f_8012CBE4(c); // 801C7878
  c->r[23]=c->r[3]|c->r[3]; // 801C787C
  c->r[4]=c->r[25]|c->r[25]; // 801C7880
  c->r[3]=c->r[1]+0x00000064u; // 801C7884
  c->lr=0x801C788Cu; f_8012CBE4(c); // 801C7888
  c->r[7]=0u+0x80450000u; // 801C788C
  c->r[5]=c->r[3]|c->r[3]; // 801C7890
  c->r[3]=c->r[7]+0xFFFFC69Cu; // 801C7894
  c->r[4]=c->r[22]|c->r[22]; // 801C7898
  c->r[6]=c->r[23]|c->r[23]; // 801C789C
  c->r[7]=0u+0x00000001u; // 801C78A0
  c->lr=0x801C78A8u; f_80044D14(c); // 801C78A4
  cmps(c,0,(int32_t)c->r[3],0); // 801C78A8
  if (crb(c,2)) { goto L_801C78C0; } // 801C78AC
  c->r[31]=c->r[31]|0x00000001u; // 801C78B0
  c->r[3]=c->r[1]+0x00000070u; // 801C78B4
  c->r[4]=c->r[22]+0x00000008u; // 801C78B8
  c->lr=0x801C78C0u; f_800F471C(c); // 801C78BC
L_801C78C0:;
  c->r[0]=rotl(c->r[26],0)&0x00000002u; cr0(c,c->r[0]); // 801C78C0
  if (crb(c,2)) { goto L_801C7A28; } // 801C78C4
  cmps(c,0,(int32_t)c->r[28],0); // 801C78C8
  if (crb(c,2)) { goto L_801C7A28; } // 801C78CC
  cmps(c,0,(int32_t)c->r[29],0); // 801C78D0
  if (crb(c,2)) { goto L_801C7A28; } // 801C78D4
  c->r[0]=0u+0x00000000u; // 801C78D8
  c->r[5]=c->r[25]|c->r[25]; // 801C78DC
  W32(c->r[28]+0x00000000u,c->r[0]); // 801C78E0
  c->r[3]=c->r[1]+0x0000004Cu; // 801C78E4
  c->r[4]=c->r[1]+0x00000070u; // 801C78E8
  c->lr=0x801C78F0u; f_801C7C38(c); // 801C78EC
  c->r[3]=c->r[1]+0x0000007Cu; // 801C78F0
  c->r[4]=c->r[1]+0x0000004Cu; // 801C78F4
  c->lr=0x801C78FCu; f_8006BC38(c); // 801C78F8
  c->r[4]=c->r[25]|c->r[25]; // 801C78FC
  c->r[3]=c->r[1]+0x00000040u; // 801C7900
  c->lr=0x801C7908u; f_8012CBE4(c); // 801C7904
  c->r[3]=c->r[1]+0x00000100u; // 801C7908
  c->lr=0x801C7910u; f_80063ACC(c); // 801C790C
  c->r[5]=0u+0x803F0000u; // 801C7910
  c->r[3]=c->r[1]+0x00000124u; // 801C7914
  c->r[5]=c->r[5]+0x00001AC0u; // 801C7918
  c->r[4]=c->r[1]+0x00000040u; // 801C791C
  W32(c->r[1]+0x00000120u,c->r[5]); // 801C7920
  c->lr=0x801C7928u; f_8003F484(c); // 801C7924
  c->r[3]=c->r[1]+0x00000130u; // 801C7928
  c->r[4]=c->r[1]+0x0000007Cu; // 801C792C
  c->lr=0x801C7934u; f_8003F484(c); // 801C7930
  c->lr=0x801C7938u; f_8003DA30(c); // 801C7934
  c->r[5]=c->r[29]|c->r[29]; // 801C7938
  c->r[4]=c->r[1]+0x00000100u; // 801C793C
  c->lr=0x801C7944u; f_8003E7E4(c); // 801C7940
  cmps(c,0,(int32_t)c->r[3],0); // 801C7944
  W32(c->r[28]+0x00000000u,c->r[3]); // 801C7948
  if (crb(c,2)) { goto L_801C7A28; } // 801C794C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7950
  {uint32_t ea=c->r[2]+0xFFFFB89Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7954
  fcmp(c,0,c->f[1],c->f[0]); // 801C7958
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C795C
  c->r[0]=c->cr; // 801C7960
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 801C7964
  if (crb(c,2)) { goto L_801C7A28; } // 801C7968
  c->r[4]=c->r[29]|c->r[29]; // 801C796C
  c->r[31]=c->r[31]|0x00000002u; // 801C7970
  c->r[3]=c->r[1]+0x00000070u; // 801C7974
  c->lr=0x801C797Cu; f_800F471C(c); // 801C7978
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C797C
  c->r[4]=c->r[29]+0x00000038u; // 801C7980
  c->r[5]=R32(c->r[29]+0x00000E30u); // 801C7984
  c->r[3]=R32(c->r[3]+0x00000028u); // 801C7988
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C798C
  c->r[12]=R32(c->r[12]+0x00000020u); // 801C7990
  c->ctr=c->r[12]; // 801C7994
  if (true) { c->lr=0x801C799Cu; dispatch(c,c->ctr); } // 801C7998
  cmpu(c,0,c->r[3],0x00000001u); // 801C799C
  if (!crb(c,2)) { goto L_801C7A28; } // 801C79A0
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C79A4
  c->r[31]=c->r[31]|0x80000000u; // 801C79A8
  c->r[12]=R32(c->r[3]+0x00000010u); // 801C79AC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C79B0
  c->ctr=c->r[12]; // 801C79B4
  if (true) { c->lr=0x801C79BCu; dispatch(c,c->ctr); } // 801C79B8
  c->r[0]=c->r[4]+0x40000000u; // 801C79BC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801C79C0
  cmpu(c,0,c->r[0],0x00000000u); // 801C79C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C79C8
  if (!crb(c,2)) { goto L_801C79D8; } // 801C79CC
  c->r[0]=0u+0x00000001u; // 801C79D0
  goto L_801C7A04; // 801C79D4
L_801C79D8:;
  c->r[5]=rotl(c->r[4],0)&0xFFFF0000u; // 801C79D8
  c->r[4]=0u+0x00000000u; // 801C79DC
  c->r[3]=0u+0x00000001u; // 801C79E0
  goto L_801C79EC; // 801C79E4
L_801C79E8:;
  c->r[4]=c->r[4]+0x00000001u; // 801C79E8
L_801C79EC:;
  c->r[6]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 801C79EC
  c->r[0]=rotl(c->r[6],0)&0xC0000000u; cr0(c,c->r[0]); // 801C79F0
  if (crb(c,2)) { IRQCHK(c); goto L_801C79E8; } // 801C79F4
  c->r[3]=c->r[5]&c->r[6]; // 801C79F8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801C79FC
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801C7A00
L_801C7A04:;
  cmps(c,0,(int32_t)c->r[0],1); // 801C7A04
  if (!crb(c,2)) { goto L_801C7A28; } // 801C7A08
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C7A0C
  c->r[3]=c->r[3]+0x00000394u; // 801C7A10
  c->lr=0x801C7A18u; f_800CC2C4(c); // 801C7A14
  cmps(c,0,(int32_t)c->r[3],0); // 801C7A18
  if (crb(c,2)) { goto L_801C7A28; } // 801C7A1C
  c->r[31]=c->r[31]|0x40000000u; // 801C7A20
  c->r[31]=rotl(c->r[31],0)&0x7FFFFFFFu; // 801C7A24
L_801C7A28:;
  c->r[0]=rotl(c->r[26],0)&0x00000004u; cr0(c,c->r[0]); // 801C7A28
  c->r[28]=0u+0xFFFFFFFFu; // 801C7A2C
  if (crb(c,2)) { goto L_801C7A68; } // 801C7A30
  cmps(c,0,(int32_t)c->r[30],0); // 801C7A34
  if (crb(c,2)) { goto L_801C7A68; } // 801C7A38
  c->r[6]=c->r[1]+0x00000070u; // 801C7A3C
  c->r[3]=0u+0x80570000u; // 801C7A40
  c->r[4]=c->r[24]|c->r[24]; // 801C7A44
  c->r[5]=c->r[25]|c->r[25]; // 801C7A48
  c->r[7]=c->r[6]|c->r[6]; // 801C7A4C
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801C7A50
  c->lr=0x801C7A58u; f_801BC9B4(c); // 801C7A54
  cmps(c,0,(int32_t)c->r[3],0); // 801C7A58
  c->r[28]=c->r[3]|c->r[3]; // 801C7A5C
  if (crb(c,0)) { goto L_801C7A68; } // 801C7A60
  c->r[31]=c->r[31]|0x00000004u; // 801C7A64
L_801C7A68:;
  c->r[23]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[23]); // 801C7A68
  if (!crb(c,2)) { goto L_801C7A78; } // 801C7A6C
  c->r[0]=rotl(c->r[26],0)&0x00000010u; cr0(c,c->r[0]); // 801C7A70
  if (crb(c,2)) { goto L_801C7B48; } // 801C7A74
L_801C7A78:;
  c->r[5]=c->r[25]|c->r[25]; // 801C7A78
  c->r[3]=c->r[1]+0x00000034u; // 801C7A7C
  c->r[4]=c->r[1]+0x00000070u; // 801C7A80
  c->lr=0x801C7A88u; f_801C7C38(c); // 801C7A84
  c->r[3]=c->r[1]+0x0000007Cu; // 801C7A88
  c->r[4]=c->r[1]+0x00000034u; // 801C7A8C
  c->lr=0x801C7A94u; f_8006BC38(c); // 801C7A90
  c->r[4]=c->r[25]|c->r[25]; // 801C7A94
  c->r[3]=c->r[1]+0x00000028u; // 801C7A98
  c->lr=0x801C7AA0u; f_8012CBE4(c); // 801C7A9C
  c->r[3]=c->r[1]+0x000000C4u; // 801C7AA0
  c->lr=0x801C7AA8u; f_80063ACC(c); // 801C7AA4
  c->r[5]=0u+0x803F0000u; // 801C7AA8
  c->r[3]=c->r[1]+0x000000E8u; // 801C7AAC
  c->r[5]=c->r[5]+0x00001AC0u; // 801C7AB0
  c->r[4]=c->r[1]+0x00000028u; // 801C7AB4
  W32(c->r[1]+0x000000E4u,c->r[5]); // 801C7AB8
  c->lr=0x801C7AC0u; f_8003F484(c); // 801C7ABC
  c->r[3]=c->r[1]+0x000000F4u; // 801C7AC0
  c->r[4]=c->r[1]+0x0000007Cu; // 801C7AC4
  c->lr=0x801C7ACCu; f_8003F484(c); // 801C7AC8
  c->lr=0x801C7AD0u; f_8015D64C(c); // 801C7ACC
  {uint32_t ea=c->r[2]+0xFFFFB89Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7AD0
  c->r[4]=c->r[1]+0x0000013Cu; // 801C7AD4
  {uint32_t ea=c->r[2]+0xFFFFB8A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7AD8
  c->r[5]=c->r[1]+0x000000C4u; // 801C7ADC
  c->f[3]=c->f[1]; // 801C7AE0
  {uint32_t ea=c->r[2]+0xFFFFB8A4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C7AE4
  c->r[6]=0u+0xFFFFFFFFu; // 801C7AE8
  c->r[7]=0u+0x00000002u; // 801C7AEC
  c->r[8]=0u+0x00000001u; // 801C7AF0
  c->lr=0x801C7AF8u; f_8015FB98(c); // 801C7AF4
  {uint32_t ea=c->r[1]+0x00000148u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7AF8
  {uint32_t ea=c->r[2]+0xFFFFB89Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7AFC
  fcmp(c,0,c->f[1],c->f[0]); // 801C7B00
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C7B04
  c->r[0]=c->cr; // 801C7B08
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 801C7B0C
  if (crb(c,2)) { goto L_801C7B20; } // 801C7B10
  c->r[31]=c->r[31]|0x00000010u; // 801C7B14
  c->r[31]=rotl(c->r[31],0)&0xFFFFFFFBu; // 801C7B18
  goto L_801C7B48; // 801C7B1C
L_801C7B20:;
  cmps(c,0,(int32_t)c->r[23],0); // 801C7B20
  if (crb(c,2)) { goto L_801C7B48; } // 801C7B24
  cmps(c,0,(int32_t)c->r[30],0); // 801C7B28
  if (crb(c,2)) { goto L_801C7B48; } // 801C7B2C
  c->r[3]=0u+0x80570000u; // 801C7B30
  W32(c->r[30]+0x00000000u,c->r[28]); // 801C7B34
  c->r[4]=c->r[24]|c->r[24]; // 801C7B38
  c->r[5]=c->r[28]|c->r[28]; // 801C7B3C
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801C7B40
  c->lr=0x801C7B48u; f_801BCA14(c); // 801C7B44
L_801C7B48:;
  c->r[0]=rotl(c->r[26],0)&0x00000008u; cr0(c,c->r[0]); // 801C7B48
  if (crb(c,2)) { goto L_801C7BFC; } // 801C7B4C
  c->r[5]=c->r[25]|c->r[25]; // 801C7B50
  c->r[3]=c->r[1]+0x0000001Cu; // 801C7B54
  c->r[4]=c->r[1]+0x00000070u; // 801C7B58
  c->lr=0x801C7B60u; f_801C7C38(c); // 801C7B5C
  c->r[3]=c->r[1]+0x0000007Cu; // 801C7B60
  c->r[4]=c->r[1]+0x0000001Cu; // 801C7B64
  c->lr=0x801C7B6Cu; f_8006BC38(c); // 801C7B68
  c->r[4]=c->r[25]|c->r[25]; // 801C7B6C
  c->r[3]=c->r[1]+0x00000010u; // 801C7B70
  c->lr=0x801C7B78u; f_8012CBE4(c); // 801C7B74
  c->r[3]=c->r[1]+0x00000088u; // 801C7B78
  c->lr=0x801C7B80u; f_80063ACC(c); // 801C7B7C
  c->r[5]=0u+0x803F0000u; // 801C7B80
  c->r[3]=c->r[1]+0x000000ACu; // 801C7B84
  c->r[5]=c->r[5]+0x00001AC0u; // 801C7B88
  c->r[4]=c->r[1]+0x00000010u; // 801C7B8C
  W32(c->r[1]+0x000000A8u,c->r[5]); // 801C7B90
  c->lr=0x801C7B98u; f_8003F484(c); // 801C7B94
  c->r[3]=c->r[1]+0x000000B8u; // 801C7B98
  c->r[4]=c->r[1]+0x0000007Cu; // 801C7B9C
  c->lr=0x801C7BA4u; f_8003F484(c); // 801C7BA0
  c->lr=0x801C7BA8u; f_8015D64C(c); // 801C7BA4
  {uint32_t ea=c->r[2]+0xFFFFB89Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7BA8
  c->r[6]=c->r[24]|c->r[24]; // 801C7BAC
  {uint32_t ea=c->r[2]+0xFFFFB8A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7BB0
  c->r[4]=c->r[1]+0x0000013Cu; // 801C7BB4
  c->f[3]=c->f[1]; // 801C7BB8
  {uint32_t ea=c->r[2]+0xFFFFB8A4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C7BBC
  c->r[5]=c->r[1]+0x00000088u; // 801C7BC0
  c->r[7]=0u+0x00000002u; // 801C7BC4
  c->r[8]=0u+0x00000000u; // 801C7BC8
  c->lr=0x801C7BD0u; f_8015FB98(c); // 801C7BCC
  {uint32_t ea=c->r[1]+0x00000148u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7BD0
  {uint32_t ea=c->r[2]+0xFFFFB89Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7BD4
  fcmp(c,0,c->f[1],c->f[0]); // 801C7BD8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C7BDC
  c->r[0]=c->cr; // 801C7BE0
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 801C7BE4
  if (crb(c,2)) { goto L_801C7BFC; } // 801C7BE8
  c->r[31]=c->r[31]|0x00000008u; // 801C7BEC
  c->r[3]=c->r[1]+0x00000070u; // 801C7BF0
  c->r[4]=c->r[1]+0x0000013Cu; // 801C7BF4
  c->lr=0x801C7BFCu; f_800F471C(c); // 801C7BF8
L_801C7BFC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801C7BFC
  if (crb(c,2)) { goto L_801C7C10; } // 801C7C00
  c->r[3]=c->r[27]|c->r[27]; // 801C7C04
  c->r[4]=c->r[1]+0x00000070u; // 801C7C08
  c->lr=0x801C7C10u; f_800F471C(c); // 801C7C0C
L_801C7C10:;
  c->r[3]=c->r[1]+0x00000174u; // 801C7C10
  c->r[4]=0u+0xFFFFFFFFu; // 801C7C14
  c->lr=0x801C7C1Cu; f_80046394(c); // 801C7C18
  c->r[11]=c->r[1]+0x00000FA0u; // 801C7C1C
  c->r[3]=c->r[31]|c->r[31]; // 801C7C20
  c->lr=0x801C7C28u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7C24
  c->r[0]=R32(c->r[1]+0x00000FA4u); // 801C7C28
  c->lr=c->r[0]; // 801C7C2C
  c->r[1]=c->r[1]+0x00000FA0u; // 801C7C30
  return; // 801C7C34
}

// fn_801C7C38
void f_801C7C38(Ctx* __restrict c) {
  trace_call(0x801C7C38u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 801C7C38
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 801C7C3C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801C7C40
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801C7C44
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 801C7C48
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 801C7C4C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801C7C50
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 801C7C54
  return; // 801C7C58
}

// fn_801C7C5C
void f_801C7C5C(Ctx* __restrict c) {
  trace_call(0x801C7C5Cu);
  {uint32_t ea=c->r[2]+0xFFFFB89Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7C5C
  c->r[3]=0u+0x80570000u; // 801C7C60
  {uint32_t ea=c->r[2]+0xFFFFB8A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7C64
  c->r[3]=c->r[3]+0x000000B8u; // 801C7C68
  c->f[3]=c->f[1]; // 801C7C6C
  f_8003F588(c); return; // 801C7C70
}

// fn_801C7C74
void f_801C7C74(Ctx* __restrict c) {
  trace_call(0x801C7C74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7C74
  c->r[0]=c->lr; // 801C7C78
  cmps(c,0,(int32_t)c->r[5],0); // 801C7C7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7C80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7C84
  c->r[31]=c->r[5]|c->r[5]; // 801C7C88
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7C8C
  c->r[30]=c->r[4]|c->r[4]; // 801C7C90
  if (crb(c,0)) { goto L_801C7CA0; } // 801C7C94
  cmps(c,0,(int32_t)c->r[5],3); // 801C7C98
  if (crb(c,0)) { goto L_801C7CA4; } // 801C7C9C
L_801C7CA0:;
  c->r[31]=0u+0x00000000u; // 801C7CA0
L_801C7CA4:;
  c->r[3]=0u+0x80450000u; // 801C7CA4
  c->r[4]=c->r[30]|c->r[30]; // 801C7CA8
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801C7CAC
  c->lr=0x801C7CB4u; f_80045B08(c); // 801C7CB0
  cmpu(c,0,c->r[3],0x0000000Cu); // 801C7CB4
  if (crb(c,0)) { goto L_801C7CC0; } // 801C7CB8
  c->r[3]=0u+0x00000000u; // 801C7CBC
L_801C7CC0:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 801C7CC0
  c->r[4]=0u+0x80400000u; // 801C7CC4
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801C7CC8
  c->r[4]=c->r[4]+0x00003230u; // 801C7CCC
  c->r[0]=c->r[4]+c->r[0]; // 801C7CD0
  c->r[7]=c->r[30]+0x00000008u; // 801C7CD4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C7CD8
  cmps(c,0,(int32_t)c->r[3],0); // 801C7CDC
  if (crb(c,2)) { goto L_801C7D24; } // 801C7CE0
  cmps(c,0,(int32_t)c->r[7],0); // 801C7CE4
  if (crb(c,2)) { goto L_801C7D18; } // 801C7CE8
  c->r[6]=R32(c->r[7]+0x00000000u); // 801C7CEC
  c->r[4]=c->r[1]+0x00000008u; // 801C7CF0
  c->r[0]=R32(c->r[7]+0x00000004u); // 801C7CF4
  c->r[5]=0u+0xFFFFFFFFu; // 801C7CF8
  {uint32_t ea=c->r[2]+0xFFFFB978u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7CFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 801C7D00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C7D04
  c->r[0]=R32(c->r[7]+0x00000008u); // 801C7D08
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C7D0C
  c->lr=0x801C7D14u; f_80048BAC(c); // 801C7D10
  goto L_801C7D24; // 801C7D14
L_801C7D18:;
  {uint32_t ea=c->r[2]+0xFFFFB978u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7D18
  c->r[4]=0u+0xFFFFFFFFu; // 801C7D1C
  c->lr=0x801C7D24u; f_80048B94(c); // 801C7D20
L_801C7D24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7D24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7D28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7D2C
  c->lr=c->r[0]; // 801C7D30
  c->r[1]=c->r[1]+0x00000020u; // 801C7D34
  return; // 801C7D38
}

// fn_801C7D3C
void f_801C7D3C(Ctx* __restrict c) {
  trace_call(0x801C7D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7D3C
  c->r[0]=c->lr; // 801C7D40
  cmps(c,0,(int32_t)c->r[5],0); // 801C7D44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7D48
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801C7D4C
  c->f[31]=c->f[1]; // 801C7D50
  W32(c->r[1]+0x00000014u,c->r[31]); // 801C7D54
  c->r[31]=c->r[5]|c->r[5]; // 801C7D58
  if (crb(c,0)) { goto L_801C7D68; } // 801C7D5C
  cmps(c,0,(int32_t)c->r[5],3); // 801C7D60
  if (crb(c,0)) { goto L_801C7D6C; } // 801C7D64
L_801C7D68:;
  c->r[31]=0u+0x00000000u; // 801C7D68
L_801C7D6C:;
  c->r[3]=0u+0x80450000u; // 801C7D6C
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801C7D70
  c->lr=0x801C7D78u; f_80045B08(c); // 801C7D74
  cmpu(c,0,c->r[3],0x0000000Cu); // 801C7D78
  if (crb(c,0)) { goto L_801C7D84; } // 801C7D7C
  c->r[3]=0u+0x00000000u; // 801C7D80
L_801C7D84:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 801C7D84
  c->r[4]=0u+0x80400000u; // 801C7D88
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801C7D8C
  c->r[4]=c->r[4]+0x00003230u; // 801C7D90
  c->r[0]=c->r[4]+c->r[0]; // 801C7D94
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C7D98
  cmps(c,0,(int32_t)c->r[3],0); // 801C7D9C
  if (crb(c,2)) { goto L_801C7DB0; } // 801C7DA0
  c->f[1]=c->f[31]; // 801C7DA4
  c->r[4]=0u+0xFFFFFFFFu; // 801C7DA8
  c->lr=0x801C7DB0u; f_80048B94(c); // 801C7DAC
L_801C7DB0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7DB0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801C7DB4
  c->r[31]=R32(c->r[1]+0x00000014u); // 801C7DB8
  c->lr=c->r[0]; // 801C7DBC
  c->r[1]=c->r[1]+0x00000020u; // 801C7DC0
  return; // 801C7DC4
}

// fn_801C7DC8
void f_801C7DC8(Ctx* __restrict c) {
  trace_call(0x801C7DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7DC8
  c->r[0]=c->lr; // 801C7DCC
  cmps(c,0,(int32_t)c->r[5],0); // 801C7DD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7DD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7DD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7DDC
  c->r[30]=c->r[5]|c->r[5]; // 801C7DE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7DE4
  c->r[29]=c->r[4]|c->r[4]; // 801C7DE8
  if (crb(c,0)) { goto L_801C7DF8; } // 801C7DEC
  cmps(c,0,(int32_t)c->r[5],1); // 801C7DF0
  if (crb(c,0)) { goto L_801C7DFC; } // 801C7DF4
L_801C7DF8:;
  c->r[30]=0u+0x00000000u; // 801C7DF8
L_801C7DFC:;
  c->r[0]=R8(c->r[13]+0xFFFF93A0u); // 801C7DFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C7E00
  if (!crb(c,2)) { goto L_801C7E34; } // 801C7E04
  c->r[31]=0u+0x80450000u; // 801C7E08
  c->r[3]=c->r[31]+0xFFFFA1C0u; // 801C7E0C
  c->lr=0x801C7E14u; f_8013CA64(c); // 801C7E10
  c->r[4]=0u+0x80140000u; // 801C7E14
  c->r[5]=0u+0x80570000u; // 801C7E18
  c->r[3]=c->r[31]+0xFFFFA1C0u; // 801C7E1C
  c->r[4]=c->r[4]+0xFFFFCB04u; // 801C7E20
  c->r[5]=c->r[5]+0x000000D4u; // 801C7E24
  c->lr=0x801C7E2Cu; f_802895A4(c); // 801C7E28
  c->r[0]=0u+0x00000001u; // 801C7E2C
  W8(c->r[13]+0xFFFF93A0u,c->r[0]); // 801C7E30
L_801C7E34:;
  c->r[3]=0u+0x80450000u; // 801C7E34
  c->r[3]=c->r[3]+0xFFFFA1C0u; // 801C7E38
  c->lr=0x801C7E40u; f_8013E16C(c); // 801C7E3C
  {uint32_t ea=c->r[2]+0xFFFFB97Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7E40
  fcmp(c,0,c->f[1],c->f[0]); // 801C7E44
  if (!crb(c,0)) { goto L_801C7E94; } // 801C7E48
  c->r[3]=0u+0x80450000u; // 801C7E4C
  c->r[4]=c->r[29]|c->r[29]; // 801C7E50
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801C7E54
  c->lr=0x801C7E5Cu; f_80045B08(c); // 801C7E58
  cmpu(c,0,c->r[3],0x0000000Cu); // 801C7E5C
  if (crb(c,0)) { goto L_801C7E68; } // 801C7E60
  c->r[3]=0u+0x00000000u; // 801C7E64
L_801C7E68:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 801C7E68
  c->r[3]=0u+0x80400000u; // 801C7E6C
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801C7E70
  c->r[3]=c->r[3]+0x00003230u; // 801C7E74
  c->r[3]=c->r[3]+c->r[4]; // 801C7E78
  c->r[5]=c->r[29]+0x00000014u; // 801C7E7C
  c->r[3]=c->r[3]+c->r[0]; // 801C7E80
  c->r[4]=c->r[29]+0x00000008u; // 801C7E84
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801C7E88
  c->r[6]=0u+0x00000000u; // 801C7E8C
  c->lr=0x801C7E94u; f_801CC30C(c); // 801C7E90
L_801C7E94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7E94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7E98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7E9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7EA0
  c->lr=c->r[0]; // 801C7EA4
  c->r[1]=c->r[1]+0x00000020u; // 801C7EA8
  return; // 801C7EAC
}

// fn_801C7EB0
void f_801C7EB0(Ctx* __restrict c) {
  trace_call(0x801C7EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7EB0
  c->r[0]=c->lr; // 801C7EB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7EB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7EBC
  c->r[31]=0u+0x80450000u; // 801C7EC0
  c->r[3]=c->r[31]+0xFFFFC69Cu; // 801C7EC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7EC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7ECC
  c->r[29]=c->r[4]|c->r[4]; // 801C7ED0
  c->lr=0x801C7ED8u; f_80045B14(c); // 801C7ED4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801C7ED8
  cmpu(c,0,c->r[0],0x00000001u); // 801C7EDC
  if (!crb(c,1)) { goto L_801C7F80; } // 801C7EE0
  c->r[4]=c->r[29]|c->r[29]; // 801C7EE4
  c->r[3]=c->r[31]+0xFFFFC69Cu; // 801C7EE8
  c->lr=0x801C7EF0u; f_80045B08(c); // 801C7EEC
  cmpu(c,0,c->r[3],0x0000000Cu); // 801C7EF0
  if (crb(c,0)) { goto L_801C7EFC; } // 801C7EF4
  c->r[3]=0u+0x00000000u; // 801C7EF8
L_801C7EFC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 801C7EFC
  c->r[3]=0u+0x80400000u; // 801C7F00
  c->r[3]=c->r[3]+0x00003230u; // 801C7F04
  c->r[30]=c->r[3]+c->r[0]; // 801C7F08
  c->r[0]=R32(c->r[30]+0x00000010u); // 801C7F0C
  cmps(c,0,(int32_t)c->r[0],0); // 801C7F10
  if (crb(c,0)) { goto L_801C7F80; } // 801C7F14
  c->r[3]=0u+0x804B0000u; // 801C7F18
  c->r[4]=c->r[29]+0x00000008u; // 801C7F1C
  c->r[3]=c->r[3]+0x00000E90u; // 801C7F20
  c->lr=0x801C7F28u; f_80130AA8(c); // 801C7F24
  cmpu(c,0,c->r[3],0x00000001u); // 801C7F28
  if (crb(c,2)) { goto L_801C7F80; } // 801C7F2C
  c->r[0]=R8(c->r[13]+0xFFFF93A0u); // 801C7F30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C7F34
  if (!crb(c,2)) { goto L_801C7F68; } // 801C7F38
  c->r[31]=0u+0x80450000u; // 801C7F3C
  c->r[3]=c->r[31]+0xFFFFA1C0u; // 801C7F40
  c->lr=0x801C7F48u; f_8013CA64(c); // 801C7F44
  c->r[4]=0u+0x80140000u; // 801C7F48
  c->r[5]=0u+0x80570000u; // 801C7F4C
  c->r[3]=c->r[31]+0xFFFFA1C0u; // 801C7F50
  c->r[4]=c->r[4]+0xFFFFCB04u; // 801C7F54
  c->r[5]=c->r[5]+0x000000D4u; // 801C7F58
  c->lr=0x801C7F60u; f_802895A4(c); // 801C7F5C
  c->r[0]=0u+0x00000001u; // 801C7F60
  W8(c->r[13]+0xFFFF93A0u,c->r[0]); // 801C7F64
L_801C7F68:;
  c->r[3]=0u+0x80450000u; // 801C7F68
  c->r[4]=R32(c->r[30]+0x00000010u); // 801C7F6C
  c->r[3]=c->r[3]+0xFFFFA1C0u; // 801C7F70
  c->r[5]=c->r[29]+0x00000008u; // 801C7F74
  c->r[6]=c->r[29]+0x00000014u; // 801C7F78
  c->lr=0x801C7F80u; f_8013E220(c); // 801C7F7C
L_801C7F80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7F80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7F84
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7F88
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7F8C
  c->lr=c->r[0]; // 801C7F90
  c->r[1]=c->r[1]+0x00000020u; // 801C7F94
  return; // 801C7F98
}

// fn_801C7F9C
void f_801C7F9C(Ctx* __restrict c) {
  trace_call(0x801C7F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7F9C
  c->r[0]=c->lr; // 801C7FA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7FA4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801C7FA8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801C7FAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7FB0
  c->r[31]=0u+0x80450000u; // 801C7FB4
  c->r[3]=c->r[31]+0xFFFFC69Cu; // 801C7FB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7FBC
  c->r[30]=c->r[6]|c->r[6]; // 801C7FC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7FC4
  c->r[29]=c->r[5]|c->r[5]; // 801C7FC8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C7FCC
  c->r[28]=c->r[4]|c->r[4]; // 801C7FD0
  c->lr=0x801C7FD8u; f_80045B14(c); // 801C7FD4
  cmpu(c,0,c->r[3],0x00000001u); // 801C7FD8
  if (crb(c,2)) { goto L_801C80A4; } // 801C7FDC
  cmpu(c,0,c->r[3],0x00000003u); // 801C7FE0
  if (!crb(c,2)) { goto L_801C7FEC; } // 801C7FE4
  goto L_801C80A4; // 801C7FE8
L_801C7FEC:;
  c->r[4]=c->r[28]|c->r[28]; // 801C7FEC
  c->r[3]=c->r[31]+0xFFFFC69Cu; // 801C7FF0
  c->lr=0x801C7FF8u; f_80045B08(c); // 801C7FF4
  cmpu(c,0,c->r[3],0x0000000Cu); // 801C7FF8
  if (crb(c,0)) { goto L_801C8004; } // 801C7FFC
  c->r[3]=0u+0x00000000u; // 801C8000
L_801C8004:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 801C8004
  c->r[3]=0u+0x80400000u; // 801C8008
  c->r[3]=c->r[3]+0x00003230u; // 801C800C
  c->r[3]=c->r[3]+c->r[0]; // 801C8010
  c->r[4]=R32(c->r[3]+0x00000014u); // 801C8014
  cmps(c,0,(int32_t)c->r[4],0); // 801C8018
  if (crb(c,0)) { goto L_801C80A4; } // 801C801C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8020
  c->r[3]=0u+0x804B0000u; // 801C8024
  {uint32_t ea=c->r[2]+0xFFFFB978u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C8028
  c->r[3]=c->r[3]+0x00000E90u; // 801C802C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801C8030
  c->f[5]=c->f[4]; // 801C8034
  c->f[6]=c->f[4]; // 801C8038
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C803C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8040
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C8044
  {uint32_t ea=c->r[30]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8048
  {uint32_t ea=c->r[30]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C804C
  c->lr=0x801C8054u; f_801303AC(c); // 801C8050
  c->r[0]=R8(c->r[13]+0xFFFF93A0u); // 801C8054
  c->f[31]=c->f[1]; // 801C8058
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C805C
  if (!crb(c,2)) { goto L_801C8090; } // 801C8060
  c->r[31]=0u+0x80450000u; // 801C8064
  c->r[3]=c->r[31]+0xFFFFA1C0u; // 801C8068
  c->lr=0x801C8070u; f_8013CA64(c); // 801C806C
  c->r[4]=0u+0x80140000u; // 801C8070
  c->r[5]=0u+0x80570000u; // 801C8074
  c->r[3]=c->r[31]+0xFFFFA1C0u; // 801C8078
  c->r[4]=c->r[4]+0xFFFFCB04u; // 801C807C
  c->r[5]=c->r[5]+0x000000D4u; // 801C8080
  c->lr=0x801C8088u; f_802895A4(c); // 801C8084
  c->r[0]=0u+0x00000001u; // 801C8088
  W8(c->r[13]+0xFFFF93A0u,c->r[0]); // 801C808C
L_801C8090:;
  c->f[1]=c->f[31]; // 801C8090
  c->r[3]=0u+0x80450000u; // 801C8094
  c->r[4]=c->r[29]|c->r[29]; // 801C8098
  c->r[3]=c->r[3]+0xFFFFA1C0u; // 801C809C
  c->lr=0x801C80A4u; f_8013E3DC(c); // 801C80A0
L_801C80A4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801C80A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C80A8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801C80AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C80B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C80B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C80B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C80BC
  c->lr=c->r[0]; // 801C80C0
  c->r[1]=c->r[1]+0x00000030u; // 801C80C4
  return; // 801C80C8
}

// fn_801C80CC
void f_801C80CC(Ctx* __restrict c) {
  trace_call(0x801C80CCu);
  cmpu(c,0,c->r[4],0x0000000Cu); // 801C80CC
  if (crb(c,0)) { goto L_801C80D8; } // 801C80D0
  c->r[4]=0u+0x00000000u; // 801C80D4
L_801C80D8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 801C80D8
  c->r[3]=0u+0x80400000u; // 801C80DC
  c->r[3]=c->r[3]+0x00003230u; // 801C80E0
  c->r[3]=c->r[3]+c->r[0]; // 801C80E4
  return; // 801C80E8
}

// fn_801C80EC
void f_801C80EC(Ctx* __restrict c) {
  trace_call(0x801C80ECu);
  c->r[4]=0u+0x80570000u; // 801C80EC
  {uint32_t ea=c->r[2]+0xFFFFB980u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C80F0
  c->r[3]=c->r[4]+0x000000C8u; // 801C80F4
  {uint32_t ea=c->r[2]+0xFFFFB978u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C80F8
  {uint32_t ea=c->r[4]+0x000000C8u; WF32(ea,c->f[1]);} // 801C80FC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801C8100
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801C8104
  return; // 801C8108
}

// fn_801C810C
void f_801C810C(Ctx* __restrict c) {
  trace_call(0x801C810Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C810C
  c->r[0]=c->lr; // 801C8110
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C8114
  c->r[11]=c->r[1]+0x00000030u; // 801C8118
  c->lr=0x801C8120u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C811C
  c->r[29]=c->r[3]|c->r[3]; // 801C8120
  c->lr=0x801C8128u; f_801AFA04(c); // 801C8124
  c->r[4]=0u+0x80400000u; // 801C8128
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C812C
  c->r[4]=c->r[4]+0x00003730u; // 801C8130
  {uint32_t ea=c->r[2]+0xFFFFBA40u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8134
  c->r[31]=0u+0x00000000u; // 801C8138
  c->r[0]=0u+0x00000012u; // 801C813C
  c->r[3]=c->r[4]+0x00000040u; // 801C8140
  W32(c->r[29]+0x00000010u,c->r[4]); // 801C8144
  c->r[30]=0u+0x00000000u; // 801C8148
  W32(c->r[29]+0x00000048u,c->r[3]); // 801C814C
  W32(c->r[29]+0x00002724u,c->r[31]); // 801C8150
  {uint32_t ea=c->r[29]+0x00002718u; WF32(ea,c->f[1]);} // 801C8154
  {uint32_t ea=c->r[29]+0x00002720u; WF32(ea,c->f[0]);} // 801C8158
  {uint32_t ea=c->r[29]+0x0000271Cu; WF32(ea,c->f[0]);} // 801C815C
  W32(c->r[29]+0x000028A8u,c->r[31]); // 801C8160
  W32(c->r[29]+0x000028B0u,c->r[0]); // 801C8164
L_801C8168:;
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8168
  c->r[3]=c->r[1]+0x00000008u; // 801C816C
  c->f[2]=c->f[1]; // 801C8170
  c->f[3]=c->f[1]; // 801C8174
  c->lr=0x801C817Cu; f_800521A0(c); // 801C8178
  c->r[5]=c->r[29]+c->r[31]; // 801C817C
  c->r[4]=c->r[3]|c->r[3]; // 801C8180
  c->r[3]=c->r[5]+0x00002728u; // 801C8184
  c->lr=0x801C818Cu; f_8003F468(c); // 801C8188
  c->r[30]=c->r[30]+0x00000001u; // 801C818C
  c->r[31]=c->r[31]+0x0000000Cu; // 801C8190
  cmps(c,0,(int32_t)c->r[30],32); // 801C8194
  if (crb(c,0)) { IRQCHK(c); goto L_801C8168; } // 801C8198
  c->r[0]=0u+0x00000000u; // 801C819C
  c->r[11]=c->r[1]+0x00000030u; // 801C81A0
  W8(c->r[29]+0x000028ACu,c->r[0]); // 801C81A4
  c->r[3]=c->r[29]|c->r[29]; // 801C81A8
  c->lr=0x801C81B0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C81AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C81B0
  c->lr=c->r[0]; // 801C81B4
  c->r[1]=c->r[1]+0x00000030u; // 801C81B8
  return; // 801C81BC
}

// fn_801C81C0
void f_801C81C0(Ctx* __restrict c) {
  trace_call(0x801C81C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C81C0
  c->r[0]=c->lr; // 801C81C4
  cmps(c,0,(int32_t)c->r[3],0); // 801C81C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C81CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C81D0
  c->r[30]=c->r[3]|c->r[3]; // 801C81D4
  c->r[31]=c->r[4]|c->r[4]; // 801C81D8
  if (crb(c,2)) { goto L_801C81F8; } // 801C81DC
  c->r[4]=0u+0x00000000u; // 801C81E0
  c->lr=0x801C81E8u; f_80185EBC(c); // 801C81E4
  cmps(c,0,(int32_t)c->r[31],0); // 801C81E8
  if (!crb(c,1)) { goto L_801C81F8; } // 801C81EC
  c->r[3]=c->r[30]|c->r[30]; // 801C81F0
  c->lr=0x801C81F8u; f_802896EC(c); // 801C81F4
L_801C81F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801C81F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C81FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8200
  c->lr=c->r[0]; // 801C8204
  c->r[1]=c->r[1]+0x00000010u; // 801C8208
  return; // 801C820C
}

// fn_801C8210
void f_801C8210(Ctx* __restrict c) {
  trace_call(0x801C8210u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8210
  c->r[0]=0u+0x00000008u; // 801C8214
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8218
  c->r[7]=0u+0x00000000u; // 801C821C
  {uint32_t ea=c->r[3]+0x000026D8u; WF32(ea,c->f[1]);} // 801C8220
  c->r[5]=0u+0x00000000u; // 801C8224
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8228
  {uint32_t ea=c->r[3]+0x000026DCu; WF32(ea,c->f[1]);} // 801C822C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8230
  {uint32_t ea=c->r[3]+0x000026E0u; WF32(ea,c->f[1]);} // 801C8234
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8238
  {uint32_t ea=c->r[3]+0x000026E4u; WF32(ea,c->f[1]);} // 801C823C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8240
  {uint32_t ea=c->r[3]+0x000026E8u; WF32(ea,c->f[1]);} // 801C8244
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8248
  {uint32_t ea=c->r[3]+0x000026ECu; WF32(ea,c->f[1]);} // 801C824C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8250
  {uint32_t ea=c->r[3]+0x000026F0u; WF32(ea,c->f[1]);} // 801C8254
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 801C8258
  W32(c->r[3]+0x000026F4u,c->r[6]); // 801C825C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8260
  {uint32_t ea=c->r[3]+0x000026F8u; WF32(ea,c->f[1]);} // 801C8264
  c->r[6]=R32(c->r[4]+0x00000024u); // 801C8268
  W32(c->r[3]+0x000026FCu,c->r[6]); // 801C826C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8270
  {uint32_t ea=c->r[3]+0x00002700u; WF32(ea,c->f[1]);} // 801C8274
  c->ctr=c->r[0]; // 801C8278
L_801C827C:;
  c->r[6]=c->r[3]+c->r[5]; // 801C827C
  c->r[5]=c->r[5]+0x00000010u; // 801C8280
  W32(c->r[6]+0x0000257Cu,c->r[7]); // 801C8284
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8288
  {uint32_t ea=c->r[6]+0x00002580u; WF32(ea,c->f[1]);} // 801C828C
  {uint32_t ea=c->r[6]+0x00002584u; WF32(ea,c->f[1]);} // 801C8290
  {uint32_t ea=c->r[6]+0x00002588u; WF32(ea,c->f[0]);} // 801C8294
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C827C; } // 801C8298
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C829C
  {uint32_t ea=c->r[3]+0x000025FCu; WF32(ea,c->f[0]);} // 801C82A0
  return; // 801C82A4
}

// fn_801C82A8
void f_801C82A8(Ctx* __restrict c) {
  trace_call(0x801C82A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C82A8
  c->r[0]=c->lr; // 801C82AC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801C82B0
  c->r[11]=c->r[1]+0x00000070u; // 801C82B4
  c->lr=0x801C82BCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C82B8
  c->r[31]=c->r[1]|c->r[1]; // 801C82BC
  c->r[0]=0u+0x00000000u; // 801C82C0
  c->r[4]=R32(c->r[3]+0x000008D8u); // 801C82C4
  W8(c->r[3]+0x00001F5Eu,c->r[0]); // 801C82C8
  c->r[30]=c->r[3]|c->r[3]; // 801C82CC
  c->r[27]=0u+0x00000000u; // 801C82D0
  W8(c->r[3]+0x00001F62u,c->r[0]); // 801C82D4
  W8(c->r[3]+0x00001F61u,c->r[0]); // 801C82D8
  W8(c->r[3]+0x00001F63u,c->r[0]); // 801C82DC
  W8(c->r[3]+0x00001F64u,c->r[0]); // 801C82E0
  W8(c->r[3]+0x00001F65u,c->r[0]); // 801C82E4
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801C82E8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C82EC
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C82F0
  goto L_801C83D8; // 801C82F4
L_801C82F8:;
  c->r[28]=0u+0x80400000u; // 801C82F8
  c->r[29]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C82FC
  c->r[28]=c->r[28]+0x00003350u; // 801C8300
  c->r[26]=0u+0x00000000u; // 801C8304
  goto L_801C83C4; // 801C8308
L_801C830C:;
  c->r[4]=c->r[26]|c->r[26]; // 801C830C
  c->r[3]=c->r[31]+0x00000010u; // 801C8310
  c->lr=0x801C8318u; f_80365C28(c); // 801C8314
  cmps(c,0,(int32_t)c->r[3],0); // 801C8318
  W32(c->r[31]+0x00000008u,c->r[3]); // 801C831C
  if (!crb(c,2)) { goto L_801C8348; } // 801C8320
  c->r[3]=0u+0x803F0000u; // 801C8324
  c->r[5]=0u+0x803F0000u; // 801C8328
  c->r[3]=c->r[3]+0x000018B0u; // 801C832C
  c->r[4]=0u+0x00000029u; // 801C8330
  c->r[5]=c->r[5]+0x00001894u; // 801C8334
  c->r[6]=c->r[13]+0xFFFF8048u; // 801C8338
  c->r[7]=c->r[13]+0xFFFF8810u; // 801C833C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8340
  c->lr=0x801C8348u; f_803444BC(c); // 801C8344
L_801C8348:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801C8348
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C834C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8350
  if (crb(c,2)) { goto L_801C8360; } // 801C8354
  c->r[3]=c->r[3]+c->r[0]; // 801C8358
  goto L_801C8364; // 801C835C
L_801C8360:;
  c->r[3]=0u+0x00000000u; // 801C8360
L_801C8364:;
  c->r[4]=R32(c->r[28]+c->r[29]); // 801C8364
  c->lr=0x801C836Cu; f_80293554(c); // 801C8368
  cmps(c,0,(int32_t)c->r[3],0); // 801C836C
  if (!crb(c,2)) { goto L_801C83C0; } // 801C8370
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C8374
  cmps(c,0,(int32_t)c->r[0],0); // 801C8378
  if (!crb(c,2)) { goto L_801C839C; } // 801C837C
  c->r[3]=0u+0x803F0000u; // 801C8380
  c->r[5]=0u+0x803F0000u; // 801C8384
  c->r[3]=c->r[3]+0x000018E8u; // 801C8388
  c->r[4]=0u+0x00000035u; // 801C838C
  c->r[5]=c->r[5]+0x000018C8u; // 801C8390
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8394
  c->lr=0x801C839Cu; f_803444BC(c); // 801C8398
L_801C839C:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801C839C
  cmps(c,0,(int32_t)c->r[3],0); // 801C83A0
  if (crb(c,2)) { goto L_801C83B0; } // 801C83A4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C83A8
  goto L_801C83B4; // 801C83AC
L_801C83B0:;
  c->r[0]=0u+0x00000000u; // 801C83B0
L_801C83B4:;
  c->r[3]=c->r[30]+c->r[29]; // 801C83B4
  W32(c->r[3]+0x0000254Cu,c->r[0]); // 801C83B8
  goto L_801C83D4; // 801C83BC
L_801C83C0:;
  c->r[26]=c->r[26]+0x00000001u; // 801C83C0
L_801C83C4:;
  c->r[3]=c->r[31]+0x00000010u; // 801C83C4
  c->lr=0x801C83CCu; f_80365CD0(c); // 801C83C8
  cmpu(c,0,c->r[26],c->r[3]); // 801C83CC
  if (crb(c,0)) { IRQCHK(c); goto L_801C830C; } // 801C83D0
L_801C83D4:;
  c->r[27]=c->r[27]+0x00000001u; // 801C83D4
L_801C83D8:;
  cmps(c,0,(int32_t)c->r[27],12); // 801C83D8
  if (crb(c,0)) { IRQCHK(c); goto L_801C82F8; } // 801C83DC
  c->r[4]=0u+0x00000000u; // 801C83E0
  goto L_801C8400; // 801C83E4
L_801C83E8:;
  c->r[3]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801C83E8
  c->r[0]=0u+0x00000000u; // 801C83EC
  c->r[3]=c->r[30]+c->r[3]; // 801C83F0
  c->r[4]=c->r[4]+0x00000001u; // 801C83F4
  W32(c->r[3]+0x00002600u,c->r[0]); // 801C83F8
  W32(c->r[3]+0x00002604u,c->r[0]); // 801C83FC
L_801C8400:;
  cmps(c,0,(int32_t)c->r[4],6); // 801C8400
  if (crb(c,0)) { IRQCHK(c); goto L_801C83E8; } // 801C8404
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8408
  c->r[28]=0u+0x00000000u; // 801C840C
  c->r[0]=0u+0x00000001u; // 801C8410
  W32(c->r[30]+0x00002660u,c->r[28]); // 801C8414
  c->r[3]=c->r[30]|c->r[30]; // 801C8418
  W32(c->r[30]+0x0000266Cu,c->r[28]); // 801C841C
  W32(c->r[30]+0x00002670u,c->r[28]); // 801C8420
  W32(c->r[30]+0x00002690u,c->r[0]); // 801C8424
  W32(c->r[30]+0x00002694u,c->r[28]); // 801C8428
  {uint32_t ea=c->r[30]+0x000026D4u; WF32(ea,c->f[0]);} // 801C842C
  W32(c->r[30]+0x00002714u,c->r[28]); // 801C8430
  c->lr=0x801C8438u; f_801861D4(c); // 801C8434
  {uint32_t ea=c->r[2]+0xFFFFBA48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8438
  c->r[3]=R32(c->r[30]+0x00000054u); // 801C843C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 801C8440
  cmps(c,0,(int32_t)c->r[3],0); // 801C8444
  {uint32_t ea=c->r[30]+0x000026A4u; WF32(ea,c->f[0]);} // 801C8448
  if (crb(c,2)) { goto L_801C84A8; } // 801C844C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8450
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C8454
  c->ctr=c->r[12]; // 801C8458
  if (true) { c->lr=0x801C8460u; dispatch(c,c->ctr); } // 801C845C
  c->lr=0x801C8464u; f_8007A658(c); // 801C8460
  c->r[29]=c->r[3]|c->r[3]; // 801C8464
  c->r[3]=0u+0x00000001u; // 801C8468
  c->lr=0x801C8470u; f_8007A658(c); // 801C846C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801C8470
  if (!crb(c,1)) { goto L_801C84A4; } // 801C8474
  c->r[28]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[28]); // 801C8478
  if (crb(c,2)) { goto L_801C849C; } // 801C847C
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 801C8480
  c->r[3]=c->r[28]|c->r[28]; // 801C8484
  c->r[4]=c->r[13]+0xFFFF80C5u; // 801C8488
  c->lr=0x801C8490u; f_800761D8(c); // 801C848C
  c->r[3]=0u+0x803F0000u; // 801C8490
  c->r[3]=c->r[3]+0x00003224u; // 801C8494
  W32(c->r[28]+0x00000000u,c->r[3]); // 801C8498
L_801C849C:;
  W32(c->r[30]+0x00000058u,c->r[28]); // 801C849C
  goto L_801C84F0; // 801C84A0
L_801C84A4:;
  W32(c->r[30]+0x00000054u,c->r[28]); // 801C84A4
L_801C84A8:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801C84A8
  c->r[0]=c->r[3]+0x00000001u; // 801C84AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C84B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801C84B4
  c->r[0]=c->r[0]^c->r[3]; // 801C84B8
  c->r[0]=c->r[0]-c->r[3]; // 801C84BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801C84C0
  c->r[0]=c->r[30]+c->r[0]; // 801C84C4
  c->r[28]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[28]); // 801C84C8
  if (crb(c,2)) { goto L_801C84EC; } // 801C84CC
  W32(c->r[31]+0x00000034u,c->r[1]); // 801C84D0
  c->r[3]=c->r[28]|c->r[28]; // 801C84D4
  c->r[4]=c->r[13]+0xFFFF80C5u; // 801C84D8
  c->lr=0x801C84E0u; f_800761D8(c); // 801C84DC
  c->r[3]=0u+0x803F0000u; // 801C84E0
  c->r[3]=c->r[3]+0x00003224u; // 801C84E4
  W32(c->r[28]+0x00000000u,c->r[3]); // 801C84E8
L_801C84EC:;
  W32(c->r[30]+0x00000054u,c->r[28]); // 801C84EC
L_801C84F0:;
  c->r[3]=R32(c->r[30]+0x00000908u); // 801C84F0
  cmps(c,0,(int32_t)c->r[3],0); // 801C84F4
  if (crb(c,2)) { goto L_801C8508; } // 801C84F8
  c->r[4]=0u+0x00000008u; // 801C84FC
  c->r[5]=0u+0x00000001u; // 801C8500
  c->lr=0x801C8508u; f_80373CC0(c); // 801C8504
L_801C8508:;
  c->r[4]=0u+0x803E0000u; // 801C8508
  c->r[3]=c->r[13]+0xFFFF9568u; // 801C850C
  c->r[4]=c->r[4]+0x00000DB8u; // 801C8510
  c->lr=0x801C8518u; f_80104374(c); // 801C8514
  c->r[5]=R32(c->r[3]+0x00000010u); // 801C8518
  c->r[0]=0u+0x00000000u; // 801C851C
  c->r[3]=c->r[30]|c->r[30]; // 801C8520
  c->r[4]=0u+0x00000001u; // 801C8524
  W32(c->r[30]+0x00002AF4u,c->r[5]); // 801C8528
  W32(c->r[30]+0x0000270Cu,c->r[0]); // 801C852C
  c->lr=0x801C8534u; f_801CB0F0(c); // 801C8530
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8534
  c->r[3]=c->r[30]+0x00002718u; // 801C8538
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C853C
  {uint32_t ea=c->r[30]+0x00002708u; WF32(ea,c->f[0]);} // 801C8540
  {uint32_t ea=c->r[2]+0xFFFFBA50u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8544
  c->lr=0x801C854Cu; f_801860A8(c); // 801C8548
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C854C
  c->r[3]=c->r[30]+0x00002718u; // 801C8550
  c->r[4]=0u+0x00000000u; // 801C8554
  c->lr=0x801C855Cu; f_801860E8(c); // 801C8558
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C855C
  c->r[0]=0u+0x00000004u; // 801C8560
  W32(c->r[30]+0x000028B0u,c->r[0]); // 801C8564
  c->r[3]=c->r[31]+0x00000014u; // 801C8568
  c->f[2]=c->f[1]; // 801C856C
  c->f[3]=c->f[1]; // 801C8570
  c->lr=0x801C8578u; f_800521A0(c); // 801C8574
  c->r[4]=c->r[3]|c->r[3]; // 801C8578
  c->r[3]=c->r[30]+0x000028B4u; // 801C857C
  c->lr=0x801C8584u; f_8003F468(c); // 801C8580
  c->r[4]=0u+0x00000000u; // 801C8584
  goto L_801C85A0; // 801C8588
L_801C858C:;
  c->r[3]=c->r[30]+c->r[4]; // 801C858C
  c->r[0]=0u+0x00000000u; // 801C8590
  W8(c->r[3]+0x000028C0u,c->r[0]); // 801C8594
  c->r[4]=c->r[4]+0x00000001u; // 801C8598
  W8(c->r[3]+0x000029C0u,c->r[0]); // 801C859C
L_801C85A0:;
  cmps(c,0,(int32_t)c->r[4],256); // 801C85A0
  if (crb(c,0)) { IRQCHK(c); goto L_801C858C; } // 801C85A4
  c->r[0]=0u+0x00000000u; // 801C85A8
  c->r[10]=c->r[31]|c->r[31]; // 801C85AC
  W32(c->r[30]+0x00002AC0u,c->r[0]); // 801C85B0
  c->r[11]=c->r[10]+0x00000070u; // 801C85B4
  W32(c->r[30]+0x00002AC4u,c->r[0]); // 801C85B8
  c->lr=0x801C85C0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C85BC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801C85C0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801C85C4
  c->r[1]=c->r[10]|c->r[10]; // 801C85C8
  c->lr=c->r[0]; // 801C85CC
  return; // 801C85D0
}

// fn_801C85D4
void f_801C85D4(Ctx* __restrict c) {
  trace_call(0x801C85D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C85D4
  c->r[0]=c->lr; // 801C85D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C85DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C85E0
  c->r[31]=c->r[3]|c->r[3]; // 801C85E4
  c->r[3]=c->r[3]+0x000008ECu; // 801C85E8
  c->r[4]=R32(c->r[13]+0xFFFF8818u); // 801C85EC
  c->lr=0x801C85F4u; f_80075440(c); // 801C85F0
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C85F4
  c->r[4]=c->r[3]|c->r[3]; // 801C85F8
  {uint32_t ea=c->r[2]+0xFFFFBA58u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C85FC
  c->r[3]=c->r[31]+0x000008D0u; // 801C8600
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C8604
  c->r[5]=0u+0x00000000u; // 801C8608
  c->r[6]=0u+0xFFFFFFFFu; // 801C860C
  c->r[7]=0u+0x00000000u; // 801C8610
  c->lr=0x801C8618u; f_8002D7B8(c); // 801C8614
  c->r[4]=R32(c->r[13]+0xFFFF8818u); // 801C8618
  c->r[3]=c->r[31]|c->r[31]; // 801C861C
  c->r[6]=R32(c->r[31]+0x00002554u); // 801C8620
  c->r[5]=0u+0x0000000Bu; // 801C8624
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8628
  c->r[7]=0u+0x00000000u; // 801C862C
  c->lr=0x801C8634u; f_801CB754(c); // 801C8630
  c->r[4]=R32(c->r[13]+0xFFFF88E0u); // 801C8634
  c->r[3]=c->r[31]|c->r[31]; // 801C8638
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C863C
  c->r[5]=0u+0x00000001u; // 801C8640
  c->lr=0x801C8648u; f_801CB7EC(c); // 801C8644
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8648
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C864C
  c->lr=c->r[0]; // 801C8650
  c->r[1]=c->r[1]+0x00000010u; // 801C8654
  return; // 801C8658
}

// fn_801C865C
void f_801C865C(Ctx* __restrict c) {
  trace_call(0x801C865Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C865C
  c->r[0]=c->lr; // 801C8660
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C8664
  {uint32_t ea=c->r[1]+0x00000044u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C8668
  c->r[31]=c->r[1]|c->r[1]; // 801C866C
  c->r[29]=c->r[3]|c->r[3]; // 801C8670
  c->r[0]=R32(c->r[3]+0x00000054u); // 801C8674
  cmps(c,0,(int32_t)c->r[0],0); // 801C8678
  if (crb(c,2)) { goto L_801C86D0; } // 801C867C
  c->r[3]=c->r[0]|c->r[0]; // 801C8680
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8684
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C8688
  c->ctr=c->r[12]; // 801C868C
  if (true) { c->lr=0x801C8694u; dispatch(c,c->ctr); } // 801C8690
  c->lr=0x801C8698u; f_8007A658(c); // 801C8694
  c->r[30]=c->r[3]|c->r[3]; // 801C8698
  c->r[3]=0u+0x00000005u; // 801C869C
  c->lr=0x801C86A4u; f_8007A658(c); // 801C86A0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801C86A4
  if (!crb(c,1)) { goto L_801C86C8; } // 801C86A8
  c->r[30]=addc(c,c->r[29],0x00000280u,0); cr0(c,c->r[30]); // 801C86AC
  if (crb(c,2)) { goto L_801C86C0; } // 801C86B0
  W32(c->r[31]+0x00000034u,c->r[1]); // 801C86B4
  c->r[3]=c->r[30]|c->r[30]; // 801C86B8
  c->lr=0x801C86C0u; f_800AC890(c); // 801C86BC
L_801C86C0:;
  W32(c->r[29]+0x00000058u,c->r[30]); // 801C86C0
  goto L_801C8708; // 801C86C4
L_801C86C8:;
  c->r[0]=0u+0x00000000u; // 801C86C8
  W32(c->r[29]+0x00000054u,c->r[0]); // 801C86CC
L_801C86D0:;
  c->r[3]=R32(c->r[29]+0x0000005Cu); // 801C86D0
  c->r[0]=c->r[3]+0x00000001u; // 801C86D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C86D8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801C86DC
  c->r[0]=c->r[0]^c->r[3]; // 801C86E0
  c->r[0]=c->r[0]-c->r[3]; // 801C86E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801C86E8
  c->r[0]=c->r[29]+c->r[0]; // 801C86EC
  c->r[30]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[30]); // 801C86F0
  if (crb(c,2)) { goto L_801C8704; } // 801C86F4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801C86F8
  c->r[3]=c->r[30]|c->r[30]; // 801C86FC
  c->lr=0x801C8704u; f_800AC890(c); // 801C8700
L_801C8704:;
  W32(c->r[29]+0x00000054u,c->r[30]); // 801C8704
L_801C8708:;
  c->r[10]=c->r[31]|c->r[31]; // 801C8708
  {uint32_t ea=c->r[10]+0x00000044u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C870C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801C8710
  c->r[0]=R32(c->r[10]+0x00000004u); // 801C8714
  c->r[1]=c->r[10]|c->r[10]; // 801C8718
  c->lr=c->r[0]; // 801C871C
  return; // 801C8720
}

// fn_801C8724
void f_801C8724(Ctx* __restrict c) {
  trace_call(0x801C8724u);
  return; // 801C8724
}

// fn_801C8728
void f_801C8728(Ctx* __restrict c) {
  trace_call(0x801C8728u);
  return; // 801C8728
}

// fn_801C872C
void f_801C872C(Ctx* __restrict c) {
  trace_call(0x801C872Cu);
  c->r[0]=R32(c->r[3]+0x000007E4u); // 801C872C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801C8730
  W32(c->r[3]+0x000007E4u,c->r[0]); // 801C8734
  return; // 801C8738
}

// fn_801C873C
void f_801C873C(Ctx* __restrict c) {
  trace_call(0x801C873Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C873C
  c->r[0]=c->lr; // 801C8740
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8744
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C8748
  c->r[31]=c->r[3]|c->r[3]; // 801C874C
  c->lr=0x801C8754u; f_801C8D44(c); // 801C8750
  c->r[3]=c->r[31]|c->r[31]; // 801C8754
  c->lr=0x801C875Cu; f_801C98EC(c); // 801C8758
  c->r[3]=c->r[31]|c->r[31]; // 801C875C
  c->lr=0x801C8764u; f_801C8EFC(c); // 801C8760
  c->r[3]=c->r[31]|c->r[31]; // 801C8764
  c->lr=0x801C876Cu; f_801C9558(c); // 801C8768
  c->r[3]=c->r[1]+0x00000008u; // 801C876C
  c->r[4]=c->r[31]+0x000028B4u; // 801C8770
  c->lr=0x801C8778u; f_8003F484(c); // 801C8774
  c->r[4]=c->r[3]|c->r[3]; // 801C8778
  c->r[3]=c->r[31]+0x00002718u; // 801C877C
  c->lr=0x801C8784u; f_801B0AAC(c); // 801C8780
  c->r[0]=R32(c->r[31]+0x00002664u); // 801C8784
  cmps(c,0,(int32_t)c->r[0],0); // 801C8788
  if (crb(c,2)) { goto L_801C87AC; } // 801C878C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801C8790
  c->r[4]=0u+0x80400000u; // 801C8794
  c->r[3]=c->r[31]|c->r[31]; // 801C8798
  c->r[4]=c->r[4]+0x00003658u; // 801C879C
  c->r[12]=c->r[4]+c->r[0]; // 801C87A0
  c->lr=0x801C87A8u; f_80289CA4(c); // 801C87A4
  c->r[0]=c->r[0]|0x00000000u; // 801C87A8
L_801C87AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C87AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C87B0
  c->lr=c->r[0]; // 801C87B4
  c->r[1]=c->r[1]+0x00000020u; // 801C87B8
  return; // 801C87BC
}

// fn_801C87C0
void f_801C87C0(Ctx* __restrict c) {
  trace_call(0x801C87C0u);
  return; // 801C87C0
}

// fn_801C87C4
void f_801C87C4(Ctx* __restrict c) {
  trace_call(0x801C87C4u);
  return; // 801C87C4
}

// fn_801C87C8
void f_801C87C8(Ctx* __restrict c) {
  trace_call(0x801C87C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C87C8
  c->r[0]=c->lr; // 801C87CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C87D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C87D4
  c->r[31]=c->r[3]|c->r[3]; // 801C87D8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801C87DC
  c->lr=0x801C87E4u; f_800F39EC(c); // 801C87E0
  c->r[4]=0u+0xFFFFFFFFu; // 801C87E4
  c->lr=0x801C87ECu; f_800DB6F8(c); // 801C87E8
  c->r[3]=c->r[31]|c->r[31]; // 801C87EC
  c->lr=0x801C87F4u; f_801CB590(c); // 801C87F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C87F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C87F8
  c->lr=c->r[0]; // 801C87FC
  c->r[1]=c->r[1]+0x00000010u; // 801C8800
  return; // 801C8804
}

// fn_801C8808
void f_801C8808(Ctx* __restrict c) {
  trace_call(0x801C8808u);
  return; // 801C8808
}

// fn_801C880C
void f_801C880C(Ctx* __restrict c) {
  trace_call(0x801C880Cu);
  return; // 801C880C
}

// fn_801C8810
void f_801C8810(Ctx* __restrict c) {
  trace_call(0x801C8810u);
  return; // 801C8810
}

// fn_801C8814
void f_801C8814(Ctx* __restrict c) {
  trace_call(0x801C8814u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8814
  c->r[0]=c->lr; // 801C8818
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C881C
  c->r[11]=c->r[1]+0x00000020u; // 801C8820
  c->lr=0x801C8828u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8824
  c->r[31]=c->r[5]|c->r[5]; // 801C8828
  c->r[29]=c->r[3]|c->r[3]; // 801C882C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C8830
  c->r[3]=c->r[31]|c->r[31]; // 801C8834
  c->r[30]=c->r[4]|c->r[4]; // 801C8838
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C883C
  c->ctr=c->r[12]; // 801C8840
  if (true) { c->lr=0x801C8848u; dispatch(c,c->ctr); } // 801C8844
  cmps(c,0,(int32_t)c->r[3],20); // 801C8848
  if (crb(c,2)) { goto L_801C88A0; } // 801C884C
  if (!crb(c,0)) { goto L_801C8860; } // 801C8850
  cmps(c,0,(int32_t)c->r[3],3); // 801C8854
  if (crb(c,2)) { goto L_801C8884; } // 801C8858
  goto L_801C8870; // 801C885C
L_801C8860:;
  cmps(c,0,(int32_t)c->r[3],1030); // 801C8860
  if (!crb(c,0)) { goto L_801C8870; } // 801C8864
  cmps(c,0,(int32_t)c->r[3],1025); // 801C8868
  if (!crb(c,0)) { goto L_801C88CC; } // 801C886C
L_801C8870:;
  c->r[3]=c->r[29]|c->r[29]; // 801C8870
  c->r[4]=c->r[30]|c->r[30]; // 801C8874
  c->r[5]=c->r[31]|c->r[31]; // 801C8878
  c->lr=0x801C8880u; f_800B5B1C(c); // 801C887C
  goto L_801C8918; // 801C8880
L_801C8884:;
  c->r[3]=c->r[29]|c->r[29]; // 801C8884
  c->lr=0x801C888Cu; f_801C82A8(c); // 801C8888
  c->r[3]=c->r[29]|c->r[29]; // 801C888C
  c->r[4]=c->r[30]|c->r[30]; // 801C8890
  c->r[5]=c->r[31]|c->r[31]; // 801C8894
  c->lr=0x801C889Cu; f_800B5B1C(c); // 801C8898
  goto L_801C8918; // 801C889C
L_801C88A0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C88A0
  cmps(c,0,(int32_t)c->r[0],1); // 801C88A4
  if (crb(c,2)) { goto L_801C88B0; } // 801C88A8
  goto L_801C8918; // 801C88AC
L_801C88B0:;
  c->r[3]=R32(c->r[29]+0x00002714u); // 801C88B0
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801C88B4
  W32(c->r[29]+0x00002714u,c->r[0]); // 801C88B8
  if (!crb(c,0)) { goto L_801C8918; } // 801C88BC
  c->r[0]=0u+0x00000000u; // 801C88C0
  W32(c->r[29]+0x00002714u,c->r[0]); // 801C88C4
  goto L_801C8918; // 801C88C8
L_801C88CC:;
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C88CC
  c->r[4]=c->r[31]|c->r[31]; // 801C88D0
  c->r[5]=c->r[29]|c->r[29]; // 801C88D4
  c->r[3]=c->r[29]+0x000008D0u; // 801C88D8
  c->lr=0x801C88E0u; f_80032454(c); // 801C88DC
  c->r[0]=R32(c->r[29]+0x000007E4u); // 801C88E0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C88E4
  if (!crb(c,2)) { goto L_801C8918; } // 801C88E8
  c->r[12]=R32(c->r[29]+0x00000010u); // 801C88EC
  c->r[3]=c->r[29]|c->r[29]; // 801C88F0
  c->r[4]=c->r[31]|c->r[31]; // 801C88F4
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C88F8
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801C88FC
  c->ctr=c->r[12]; // 801C8900
  if (true) { c->lr=0x801C8908u; dispatch(c,c->ctr); } // 801C8904
  c->r[4]=R8(c->r[31]+0x00000034u); // 801C8908
  c->r[3]=c->r[29]|c->r[29]; // 801C890C
  c->r[5]=R32(c->r[31]+0x00000014u); // 801C8910
  c->lr=0x801C8918u; f_801C8930(c); // 801C8914
L_801C8918:;
  c->r[11]=c->r[1]+0x00000020u; // 801C8918
  c->lr=0x801C8920u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C891C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8920
  c->lr=c->r[0]; // 801C8924
  c->r[1]=c->r[1]+0x00000020u; // 801C8928
  return; // 801C892C
}

// fn_801C8930
void f_801C8930(Ctx* __restrict c) {
  trace_call(0x801C8930u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8930
  c->r[0]=c->lr; // 801C8934
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C8938
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801C893C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801C8940
  c->r[11]=c->r[1]+0x00000050u; // 801C8944
  c->lr=0x801C894Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8948
  c->r[31]=c->r[1]|c->r[1]; // 801C894C
  c->f[31]=c->f[1]; // 801C8950
  cmpu(c,0,c->r[4],0x00000003u); // 801C8954
  c->r[30]=c->r[3]|c->r[3]; // 801C8958
  c->r[28]=c->r[4]|c->r[4]; // 801C895C
  if (!crb(c,2)) { goto L_801C8970; } // 801C8960
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8964
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 801C8968
  goto L_801C89C0; // 801C896C
L_801C8970:;
  cmpu(c,0,c->r[4],0x00000014u); // 801C8970
  if (!crb(c,2)) { goto L_801C89A4; } // 801C8974
  c->r[0]=R32(c->r[3]+0x00002660u); // 801C8978
  cmps(c,0,(int32_t)c->r[0],0); // 801C897C
  if (!crb(c,2)) { goto L_801C89C0; } // 801C8980
  c->r[0]=R8(c->r[3]+0x00001F5Eu); // 801C8984
  cmpu(c,0,c->r[0],0x00000001u); // 801C8988
  if (!crb(c,2)) { goto L_801C89C0; } // 801C898C
  {uint32_t ea=c->r[3]+0x000026DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8990
  c->r[0]=0u+0x00000001u; // 801C8994
  W8(c->r[3]+0x00001F65u,c->r[0]); // 801C8998
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 801C899C
  goto L_801C89C0; // 801C89A0
L_801C89A4:;
  cmpu(c,0,c->r[4],0x00000015u); // 801C89A4
  if (!crb(c,2)) { goto L_801C89B8; } // 801C89A8
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C89AC
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 801C89B0
  goto L_801C89C0; // 801C89B4
L_801C89B8:;
  {uint32_t ea=c->r[2]+0xFFFFBA60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C89B8
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 801C89BC
L_801C89C0:;
  c->r[29]=0u+0x00000000u; // 801C89C0
  goto L_801C8A38; // 801C89C4
L_801C89C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801C89C8
  c->r[4]=c->r[29]|c->r[29]; // 801C89CC
  c->lr=0x801C89D4u; f_801C8E38(c); // 801C89D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C89D4
  if (crb(c,2)) { goto L_801C8A34; } // 801C89D8
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)28); // 801C89DC
  c->r[3]=0u+0x80400000u; // 801C89E0
  c->r[3]=c->r[3]+0x00003578u; // 801C89E4
  c->r[0]=R32(c->r[3]+c->r[0]); // 801C89E8
  cmpu(c,0,c->r[28],c->r[0]); // 801C89EC
  if (!crb(c,2)) { goto L_801C8A34; } // 801C89F0
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 801C89F4
  c->r[3]=c->r[30]+c->r[0]; // 801C89F8
  c->r[0]=R32(c->r[3]+0x0000257Cu); // 801C89FC
  cmps(c,0,(int32_t)c->r[0],0); // 801C8A00
  if (!crb(c,2)) { goto L_801C8A34; } // 801C8A04
  {uint32_t ea=c->r[3]+0x00002584u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8A08
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8A0C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 801C8A10
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801C8A14
  {uint32_t ea=c->r[3]+0x00002584u; WF32(ea,c->f[2]);} // 801C8A18
  fcmp(c,0,c->f[1],c->f[0]); // 801C8A1C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C8A20
  if (!crb(c,2)) { goto L_801C8A34; } // 801C8A24
  {uint32_t ea=c->r[3]+0x00002584u; WF32(ea,c->f[0]);} // 801C8A28
  c->r[0]=0u+0x00000001u; // 801C8A2C
  W32(c->r[3]+0x0000257Cu,c->r[0]); // 801C8A30
L_801C8A34:;
  c->r[29]=c->r[29]+0x00000001u; // 801C8A34
L_801C8A38:;
  cmps(c,0,(int32_t)c->r[29],8); // 801C8A38
  if (crb(c,0)) { IRQCHK(c); goto L_801C89C8; } // 801C8A3C
  {uint32_t ea=c->r[30]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8A40
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8A44
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 801C8A48
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801C8A4C
  {uint32_t ea=c->r[30]+0x000003A4u; WF32(ea,c->f[2]);} // 801C8A50
  fcmp(c,0,c->f[1],c->f[0]); // 801C8A54
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C8A58
  if (!crb(c,2)) { goto L_801C8B18; } // 801C8A5C
  c->r[3]=R32(c->r[30]+0x00000054u); // 801C8A60
  cmps(c,0,(int32_t)c->r[3],0); // 801C8A64
  if (crb(c,2)) { goto L_801C8ACC; } // 801C8A68
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8A6C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C8A70
  c->ctr=c->r[12]; // 801C8A74
  if (true) { c->lr=0x801C8A7Cu; dispatch(c,c->ctr); } // 801C8A78
  c->lr=0x801C8A80u; f_8007A658(c); // 801C8A7C
  c->r[29]=c->r[3]|c->r[3]; // 801C8A80
  c->r[3]=0u+0x00000002u; // 801C8A84
  c->lr=0x801C8A8Cu; f_8007A658(c); // 801C8A88
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801C8A8C
  if (!crb(c,1)) { goto L_801C8AC4; } // 801C8A90
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801C8A94
  if (crb(c,2)) { goto L_801C8ABC; } // 801C8A98
  W32(c->r[31]+0x00000034u,c->r[1]); // 801C8A9C
  c->r[3]=c->r[29]|c->r[29]; // 801C8AA0
  c->lr=0x801C8AA8u; f_8007614C(c); // 801C8AA4
  goto L_801C8ABC; // 801C8AA8
  c->r[3]=0u+0x00000000u; // 801C8AAC
  c->r[4]=0u+0x00000000u; // 801C8AB0
  c->r[5]=0u+0x00000000u; // 801C8AB4
  c->lr=0x801C8ABCu; f_8028BC3C(c); // 801C8AB8
L_801C8ABC:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801C8ABC
  goto L_801C8B18; // 801C8AC0
L_801C8AC4:;
  c->r[0]=0u+0x00000000u; // 801C8AC4
  W32(c->r[30]+0x00000054u,c->r[0]); // 801C8AC8
L_801C8ACC:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801C8ACC
  c->r[0]=c->r[3]+0x00000001u; // 801C8AD0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C8AD4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801C8AD8
  c->r[0]=c->r[0]^c->r[3]; // 801C8ADC
  c->r[0]=c->r[0]-c->r[3]; // 801C8AE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801C8AE4
  c->r[0]=c->r[30]+c->r[0]; // 801C8AE8
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801C8AEC
  if (crb(c,2)) { goto L_801C8B14; } // 801C8AF0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801C8AF4
  c->r[3]=c->r[29]|c->r[29]; // 801C8AF8
  c->lr=0x801C8B00u; f_8007614C(c); // 801C8AFC
  goto L_801C8B14; // 801C8B00
  c->r[3]=0u+0x00000000u; // 801C8B04
  c->r[4]=0u+0x00000000u; // 801C8B08
  c->r[5]=0u+0x00000000u; // 801C8B0C
  c->lr=0x801C8B14u; f_8028BC3C(c); // 801C8B10
L_801C8B14:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801C8B14
L_801C8B18:;
  c->r[10]=c->r[31]|c->r[31]; // 801C8B18
  {uint32_t ea=c->r[10]+0x00000058u; psq_load(c,31,ea,0,0);} // 801C8B1C
  c->r[11]=c->r[10]+0x00000050u; // 801C8B20
  {uint32_t ea=c->r[31]+0x00000050u; c->f[31]=RF64(ea);} // 801C8B24
  c->lr=0x801C8B2Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C8B28
  c->r[10]=R32(c->r[1]+0x00000000u); // 801C8B2C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801C8B30
  c->r[1]=c->r[10]|c->r[10]; // 801C8B34
  c->lr=c->r[0]; // 801C8B38
  return; // 801C8B3C
}

// fn_801C8B40
void f_801C8B40(Ctx* __restrict c) {
  trace_call(0x801C8B40u);
  cmps(c,0,(int32_t)c->r[4],8); // 801C8B40
  if (!crb(c,1)) { goto L_801C8B70; } // 801C8B44
  c->r[0]=c->r[4]+0xFFFFFFF8u; // 801C8B48
  c->r[4]=0u+0x80400000u; // 801C8B4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8B50
  c->r[4]=c->r[4]+0x000034A0u; // 801C8B54
  c->r[4]=c->r[4]+c->r[0]; // 801C8B58
  c->r[0]=R32(c->r[4]+0x00000020u); // 801C8B5C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C8B60
  c->r[3]=c->r[3]+c->r[0]; // 801C8B64
  c->r[3]=R32(c->r[3]+0x0000257Cu); // 801C8B68
  return; // 801C8B6C
L_801C8B70:;
  c->r[5]=0u+0x80400000u; // 801C8B70
  c->r[0]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801C8B74
  c->r[5]=c->r[5]+0x00003380u; // 801C8B78
  c->r[4]=c->r[5]+c->r[0]; // 801C8B7C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C8B80
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C8B84
  c->r[3]=c->r[3]+c->r[0]; // 801C8B88
  c->r[3]=R32(c->r[3]+0x0000257Cu); // 801C8B8C
  return; // 801C8B90
}

// fn_801C8B94
void f_801C8B94(Ctx* __restrict c) {
  trace_call(0x801C8B94u);
  cmps(c,0,(int32_t)c->r[4],8); // 801C8B94
  if (!crb(c,1)) { goto L_801C8BD0; } // 801C8B98
  c->r[0]=c->r[4]+0xFFFFFFF8u; // 801C8B9C
  c->r[4]=0u+0x80400000u; // 801C8BA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8BA4
  c->r[4]=c->r[4]+0x000034A0u; // 801C8BA8
  c->r[4]=c->r[4]+c->r[0]; // 801C8BAC
  c->r[0]=R32(c->r[4]+0x00000020u); // 801C8BB0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C8BB4
  c->r[3]=c->r[3]+c->r[0]; // 801C8BB8
  c->r[0]=R32(c->r[3]+0x0000257Cu); // 801C8BBC
  cmps(c,0,(int32_t)c->r[0],0); // 801C8BC0
  if (crb(c,2)) { goto L_801C8C00; } // 801C8BC4
  c->r[3]=0u+0x00000000u; // 801C8BC8
  return; // 801C8BCC
L_801C8BD0:;
  c->r[5]=0u+0x80400000u; // 801C8BD0
  c->r[0]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801C8BD4
  c->r[5]=c->r[5]+0x00003380u; // 801C8BD8
  c->r[4]=c->r[5]+c->r[0]; // 801C8BDC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C8BE0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C8BE4
  c->r[3]=c->r[3]+c->r[0]; // 801C8BE8
  c->r[0]=R32(c->r[3]+0x0000257Cu); // 801C8BEC
  cmps(c,0,(int32_t)c->r[0],0); // 801C8BF0
  if (crb(c,2)) { goto L_801C8C00; } // 801C8BF4
  c->r[3]=0u+0x00000000u; // 801C8BF8
  return; // 801C8BFC
L_801C8C00:;
  c->r[3]=0u+0x00000001u; // 801C8C00
  return; // 801C8C04
}

// fn_801C8C08
void f_801C8C08(Ctx* __restrict c) {
  trace_call(0x801C8C08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8C08
  c->r[0]=c->lr; // 801C8C0C
  c->r[8]=0u+0x00000000u; // 801C8C10
  c->r[9]=0u+0x00000000u; // 801C8C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8C18
  c->r[0]=0u+0x00000006u; // 801C8C1C
  c->r[6]=0u+0x00000000u; // 801C8C20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8C24
  c->r[31]=0u+0xFFFFFFFFu; // 801C8C28
  c->ctr=c->r[0]; // 801C8C2C
L_801C8C30:;
  c->r[7]=c->r[3]+c->r[6]; // 801C8C30
  c->r[0]=R32(c->r[7]+0x00002604u); // 801C8C34
  cmps(c,0,(int32_t)c->r[0],0); // 801C8C38
  if (crb(c,2)) { goto L_801C8C54; } // 801C8C3C
  c->r[0]=R32(c->r[7]+0x00002600u); // 801C8C40
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C8C44
  if (!crb(c,2)) { goto L_801C8C60; } // 801C8C48
  c->r[8]=0u+0x00000001u; // 801C8C4C
  goto L_801C8C60; // 801C8C50
L_801C8C54:;
  cmps(c,0,(int32_t)c->r[31],-1); // 801C8C54
  if (!crb(c,2)) { goto L_801C8C60; } // 801C8C58
  c->r[31]=c->r[9]|c->r[9]; // 801C8C5C
L_801C8C60:;
  c->r[9]=c->r[9]+0x00000001u; // 801C8C60
  c->r[6]=c->r[6]+0x00000010u; // 801C8C64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C8C30; } // 801C8C68
  cmps(c,0,(int32_t)c->r[8],0); // 801C8C6C
  if (crb(c,2)) { goto L_801C8C7C; } // 801C8C70
  c->r[3]=0u+0xFFFFFFFFu; // 801C8C74
  goto L_801C8D30; // 801C8C78
L_801C8C7C:;
  cmps(c,0,(int32_t)c->r[31],-1); // 801C8C7C
  if (crb(c,2)) { goto L_801C8D2C; } // 801C8C80
  cmps(c,0,(int32_t)c->r[4],8); // 801C8C84
  if (!crb(c,1)) { goto L_801C8CC0; } // 801C8C88
  c->r[0]=c->r[4]+0xFFFFFFF8u; // 801C8C8C
  c->r[6]=0u+0x80400000u; // 801C8C90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8C94
  c->r[6]=c->r[6]+0x000034A0u; // 801C8C98
  c->r[6]=c->r[6]+c->r[0]; // 801C8C9C
  c->r[0]=R32(c->r[6]+0x00000020u); // 801C8CA0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C8CA4
  c->r[6]=c->r[3]+c->r[0]; // 801C8CA8
  c->r[0]=R32(c->r[6]+0x0000257Cu); // 801C8CAC
  cmps(c,0,(int32_t)c->r[0],0); // 801C8CB0
  if (crb(c,2)) { goto L_801C8CF0; } // 801C8CB4
  c->r[3]=0u+0xFFFFFFFFu; // 801C8CB8
  goto L_801C8D30; // 801C8CBC
L_801C8CC0:;
  c->r[6]=0u+0x80400000u; // 801C8CC0
  c->r[0]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801C8CC4
  c->r[6]=c->r[6]+0x00003380u; // 801C8CC8
  c->r[6]=c->r[6]+c->r[0]; // 801C8CCC
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 801C8CD0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C8CD4
  c->r[6]=c->r[3]+c->r[0]; // 801C8CD8
  c->r[0]=R32(c->r[6]+0x0000257Cu); // 801C8CDC
  cmps(c,0,(int32_t)c->r[0],0); // 801C8CE0
  if (crb(c,2)) { goto L_801C8CF0; } // 801C8CE4
  c->r[3]=0u+0xFFFFFFFFu; // 801C8CE8
  goto L_801C8D30; // 801C8CEC
L_801C8CF0:;
  c->r[6]=rotl(c->r[31],4)&0xFFFFFFF0u; // 801C8CF0
  c->r[0]=0u+0x00000001u; // 801C8CF4
  c->r[3]=c->r[3]+c->r[6]; // 801C8CF8
  W32(c->r[3]+0x00002600u,c->r[4]); // 801C8CFC
  c->r[6]=0u+0x00000000u; // 801C8D00
  c->r[4]=0u+0x00000012u; // 801C8D04
  W32(c->r[3]+0x00002604u,c->r[0]); // 801C8D08
  {uint32_t ea=c->r[3]+0x00002608u; WF32(ea,c->f[1]);} // 801C8D0C
  W32(c->r[3]+0x0000260Cu,c->r[5]); // 801C8D10
  c->r[5]=0u+0x00000000u; // 801C8D14
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 801C8D18
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C8D1C
  c->r[12]=R32(c->r[12]+0x00000028u); // 801C8D20
  c->ctr=c->r[12]; // 801C8D24
  if (true) { c->lr=0x801C8D2Cu; dispatch(c,c->ctr); } // 801C8D28
L_801C8D2C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C8D2C
L_801C8D30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8D30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8D34
  c->lr=c->r[0]; // 801C8D38
  c->r[1]=c->r[1]+0x00000010u; // 801C8D3C
  return; // 801C8D40
}

// fn_801C8D44
void f_801C8D44(Ctx* __restrict c) {
  trace_call(0x801C8D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8D44
  c->r[0]=c->lr; // 801C8D48
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C8D4C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801C8D50
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801C8D54
  c->r[11]=c->r[1]+0x00000030u; // 801C8D58
  c->lr=0x801C8D60u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8D5C
  c->r[27]=0u+0x804D0000u; // 801C8D60
  c->r[26]=0u+0x00000000u; // 801C8D64
  c->r[29]=0u+0x80400000u; // 801C8D68
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C8D6C
  c->r[25]=c->r[3]|c->r[3]; // 801C8D70
  c->r[28]=c->r[26]|c->r[26]; // 801C8D74
  c->r[29]=c->r[29]+0x00003578u; // 801C8D78
  c->r[27]=c->r[27]+0x00003318u; // 801C8D7C
  c->r[31]=0u+0x00000000u; // 801C8D80
  c->r[30]=0u+0x00000000u; // 801C8D84
L_801C8D88:;
  c->r[5]=c->r[25]+c->r[30]; // 801C8D88
  c->r[0]=R32(c->r[5]+0x0000257Cu); // 801C8D8C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8D90
  if (!crb(c,2)) { goto L_801C8DC0; } // 801C8D94
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8D98
  {uint32_t ea=c->r[5]+0x00002584u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8D9C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801C8DA0
  {uint32_t ea=c->r[5]+0x00002584u; WF32(ea,c->f[1]);} // 801C8DA4
  {uint32_t ea=c->r[5]+0x00002580u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8DA8
  fcmp(c,0,c->f[0],c->f[1]); // 801C8DAC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C8DB0
  if (!crb(c,2)) { goto L_801C8E04; } // 801C8DB4
  {uint32_t ea=c->r[5]+0x00002584u; WF32(ea,c->f[0]);} // 801C8DB8
  goto L_801C8E04; // 801C8DBC
L_801C8DC0:;
  cmps(c,0,(int32_t)c->r[0],2); // 801C8DC0
  if (!crb(c,2)) { goto L_801C8E04; } // 801C8DC4
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8DC8
  {uint32_t ea=c->r[5]+0x00002588u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8DCC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C8DD0
  fcmp(c,0,c->f[0],c->f[31]); // 801C8DD4
  {uint32_t ea=c->r[5]+0x00002588u; WF32(ea,c->f[0]);} // 801C8DD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C8DDC
  if (!crb(c,2)) { goto L_801C8E04; } // 801C8DE0
  {uint32_t ea=c->r[5]+0x00002588u; WF32(ea,c->f[31]);} // 801C8DE4
  c->r[4]=c->r[29]+c->r[31]; // 801C8DE8
  c->r[3]=c->r[25]+0x000008D0u; // 801C8DEC
  {uint32_t ea=c->r[5]+0x00002580u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8DF0
  {uint32_t ea=c->r[5]+0x00002584u; WF32(ea,c->f[0]);} // 801C8DF4
  W32(c->r[5]+0x0000257Cu,c->r[28]); // 801C8DF8
  c->r[4]=R32(c->r[4]+0x00000014u); // 801C8DFC
  c->lr=0x801C8E04u; f_80032330(c); // 801C8E00
L_801C8E04:;
  c->r[26]=c->r[26]+0x00000001u; // 801C8E04
  c->r[30]=c->r[30]+0x00000010u; // 801C8E08
  cmps(c,0,(int32_t)c->r[26],8); // 801C8E0C
  c->r[31]=c->r[31]+0x0000001Cu; // 801C8E10
  if (crb(c,0)) { IRQCHK(c); goto L_801C8D88; } // 801C8E14
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801C8E18
  c->r[11]=c->r[1]+0x00000030u; // 801C8E1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801C8E20
  c->lr=0x801C8E28u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C8E24
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C8E28
  c->lr=c->r[0]; // 801C8E2C
  c->r[1]=c->r[1]+0x00000040u; // 801C8E30
  return; // 801C8E34
}

// fn_801C8E38
void f_801C8E38(Ctx* __restrict c) {
  trace_call(0x801C8E38u);
  c->r[7]=0u+0x80400000u; // 801C8E38
  c->r[8]=0u+0x80400000u; // 801C8E3C
  c->r[0]=0u+0x00000006u; // 801C8E40
  c->r[5]=0u+0x00000000u; // 801C8E44
  c->r[7]=c->r[7]+0x00003380u; // 801C8E48
  c->r[8]=c->r[8]+0x000034A0u; // 801C8E4C
  c->ctr=c->r[0]; // 801C8E50
L_801C8E54:;
  c->r[6]=c->r[3]+c->r[5]; // 801C8E54
  c->r[0]=R32(c->r[6]+0x00002604u); // 801C8E58
  cmps(c,0,(int32_t)c->r[0],2); // 801C8E5C
  if (!crb(c,1)) { goto L_801C8E9C; } // 801C8E60
  c->r[0]=R32(c->r[6]+0x00002600u); // 801C8E64
  cmps(c,0,(int32_t)c->r[0],8); // 801C8E68
  if (!crb(c,1)) { goto L_801C8E80; } // 801C8E6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8E70
  c->r[6]=c->r[8]+c->r[0]; // 801C8E74
  c->r[0]=R32(c->r[6]+0xFFFFFF00u); // 801C8E78
  goto L_801C8E8C; // 801C8E7C
L_801C8E80:;
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801C8E80
  c->r[6]=c->r[7]+c->r[0]; // 801C8E84
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 801C8E88
L_801C8E8C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C8E8C
  if (!crb(c,2)) { goto L_801C8E9C; } // 801C8E90
  c->r[3]=0u+0x00000001u; // 801C8E94
  return; // 801C8E98
L_801C8E9C:;
  c->r[5]=c->r[5]+0x00000010u; // 801C8E9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C8E54; } // 801C8EA0
  c->r[3]=0u+0x00000000u; // 801C8EA4
  return; // 801C8EA8
}

// fn_801C8EAC
void f_801C8EAC(Ctx* __restrict c) {
  trace_call(0x801C8EACu);
  cmps(c,0,(int32_t)c->r[4],0); // 801C8EAC
  if (!crb(c,0)) { goto L_801C8EBC; } // 801C8EB0
  c->r[3]=0u+0x00000001u; // 801C8EB4
  return; // 801C8EB8
L_801C8EBC:;
  c->r[0]=0u+0x00000006u; // 801C8EBC
  c->r[5]=0u+0x00000000u; // 801C8EC0
  c->ctr=c->r[0]; // 801C8EC4
L_801C8EC8:;
  c->r[6]=c->r[3]+c->r[5]; // 801C8EC8
  c->r[0]=R32(c->r[6]+0x00002604u); // 801C8ECC
  cmps(c,0,(int32_t)c->r[0],0); // 801C8ED0
  if (crb(c,2)) { goto L_801C8EEC; } // 801C8ED4
  c->r[0]=R32(c->r[6]+0x00002600u); // 801C8ED8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C8EDC
  if (!crb(c,2)) { goto L_801C8EEC; } // 801C8EE0
  c->r[3]=0u+0x00000000u; // 801C8EE4
  return; // 801C8EE8
L_801C8EEC:;
  c->r[5]=c->r[5]+0x00000010u; // 801C8EEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C8EC8; } // 801C8EF0
  c->r[3]=0u+0x00000001u; // 801C8EF4
  return; // 801C8EF8
}

// fn_801C8EFC
void f_801C8EFC(Ctx* __restrict c) {
  trace_call(0x801C8EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8EFC
  c->r[0]=c->lr; // 801C8F00
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8F04
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801C8F08
  c->r[29]=0u+0x80400000u; // 801C8F0C
  c->r[30]=0u+0x80400000u; // 801C8F10
  c->r[27]=c->r[3]|c->r[3]; // 801C8F14
  c->r[28]=0u+0x00000000u; // 801C8F18
  c->r[29]=c->r[29]+0x000034A0u; // 801C8F1C
  c->r[30]=c->r[30]+0x00003380u; // 801C8F20
  c->r[31]=0u+0x00000000u; // 801C8F24
L_801C8F28:;
  c->r[4]=c->r[27]+c->r[31]; // 801C8F28
  c->r[0]=R32(c->r[4]+0x00002604u); // 801C8F2C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8F30
  if (crb(c,2)) { goto L_801C8F78; } // 801C8F34
  c->r[3]=R32(c->r[4]+0x00002600u); // 801C8F38
  c->r[5]=c->r[28]+0x00000005u; // 801C8F3C
  cmps(c,0,(int32_t)c->r[3],8); // 801C8F40
  if (!crb(c,1)) { goto L_801C8F64; } // 801C8F44
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801C8F48
  c->r[3]=c->r[27]|c->r[27]; // 801C8F4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C8F50
  c->r[6]=c->r[4]+0x00002600u; // 801C8F54
  c->r[4]=c->r[29]+c->r[0]; // 801C8F58
  c->lr=0x801C8F60u; f_801C8F9C(c); // 801C8F5C
  goto L_801C8F78; // 801C8F60
L_801C8F64:;
  c->r[0]=rotl(c->r[3],5)&0xFFFFFFE0u; // 801C8F64
  c->r[6]=c->r[4]+0x00002600u; // 801C8F68
  c->r[3]=c->r[27]|c->r[27]; // 801C8F6C
  c->r[4]=c->r[30]+c->r[0]; // 801C8F70
  c->lr=0x801C8F78u; f_801C921C(c); // 801C8F74
L_801C8F78:;
  c->r[28]=c->r[28]+0x00000001u; // 801C8F78
  c->r[31]=c->r[31]+0x00000010u; // 801C8F7C
  cmps(c,0,(int32_t)c->r[28],6); // 801C8F80
  if (crb(c,0)) { IRQCHK(c); goto L_801C8F28; } // 801C8F84
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801C8F88
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8F8C
  c->lr=c->r[0]; // 801C8F90
  c->r[1]=c->r[1]+0x00000020u; // 801C8F94
  return; // 801C8F98
}

// fn_801C8F9C
void f_801C8F9C(Ctx* __restrict c) {
  trace_call(0x801C8F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8F9C
  c->r[0]=c->lr; // 801C8FA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8FA4
  c->r[11]=c->r[1]+0x00000020u; // 801C8FA8
  c->lr=0x801C8FB0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8FAC
  c->r[8]=R32(c->r[6]+0x00000004u); // 801C8FB0
  c->r[28]=c->r[3]|c->r[3]; // 801C8FB4
  c->r[29]=c->r[4]|c->r[4]; // 801C8FB8
  c->r[30]=c->r[5]|c->r[5]; // 801C8FBC
  cmpu(c,0,c->r[8],0x0000000Bu); // 801C8FC0
  c->r[31]=c->r[6]|c->r[6]; // 801C8FC4
  if (crb(c,1)) { goto L_801C9204; } // 801C8FC8
  c->r[7]=0u+0x80400000u; // 801C8FCC
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801C8FD0
  c->r[7]=c->r[7]+0x000036D0u; // 801C8FD4
  c->r[7]=R32(c->r[7]+c->r[0]); // 801C8FD8
  c->ctr=c->r[7]; // 801C8FDC
  if (true) { switch (c->ctr) { case 0x801C8FE4u: goto L_801C8FE4; case 0x801C901Cu: goto L_801C901C; case 0x801C9068u: goto L_801C9068; case 0x801C9160u: goto L_801C9160; case 0x801C9194u: goto L_801C9194; case 0x801C91BCu: goto L_801C91BC; case 0x801C9204u: goto L_801C9204; default: break; } dispatch(c,c->ctr); return; } // 801C8FE0
L_801C8FE4:;
  c->r[3]=0u+0x804D0000u; // 801C8FE4
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8FE8
  c->r[3]=c->r[3]+0x00003318u; // 801C8FEC
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8FF0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8FF4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C8FF8
  fcmp(c,0,c->f[1],c->f[0]); // 801C8FFC
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[1]);} // 801C9000
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C9004
  if (!crb(c,2)) { goto L_801C9204; } // 801C9008
  c->r[0]=c->r[8]+0x00000001u; // 801C900C
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 801C9010
  W32(c->r[6]+0x00000004u,c->r[0]); // 801C9014
  goto L_801C9204; // 801C9018
L_801C901C:;
  {uint32_t ea=c->r[2]+0xFFFFBA64u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C901C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9020
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C9024
  {uint32_t ea=c->r[3]+0x000026D4u; WF32(ea,c->f[0]);} // 801C9028
  c->lr=0x801C9030u; f_801CB08C(c); // 801C902C
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C9030
  c->r[3]=c->r[28]|c->r[28]; // 801C9034
  c->r[4]=R32(c->r[29]+0x00000004u); // 801C9038
  c->r[5]=c->r[30]|c->r[30]; // 801C903C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9040
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9044
  c->r[6]=c->r[28]+c->r[0]; // 801C9048
  c->r[7]=0u+0x00000000u; // 801C904C
  c->r[6]=R32(c->r[6]+0x0000254Cu); // 801C9050
  c->lr=0x801C9058u; f_801CB754(c); // 801C9054
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C9058
  c->r[0]=c->r[3]+0x00000001u; // 801C905C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C9060
  goto L_801C9204; // 801C9064
L_801C9068:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C9068
  c->r[27]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C906C
  c->r[3]=R32(c->r[3]+c->r[27]); // 801C9070
  c->lr=0x801C9078u; f_800752CC(c); // 801C9074
  {uint32_t ea=c->r[29]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9078
  fcmp(c,0,c->f[1],c->f[0]); // 801C907C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9080
  if (!crb(c,2)) { goto L_801C9098; } // 801C9084
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C9088
  c->r[0]=c->r[3]+0x00000001u; // 801C908C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C9090
  goto L_801C9204; // 801C9094
L_801C9098:;
  c->r[3]=R32(c->r[28]+0x00000974u); // 801C9098
  c->r[3]=R32(c->r[3]+c->r[27]); // 801C909C
  c->lr=0x801C90A4u; f_800752CC(c); // 801C90A0
  {uint32_t ea=c->r[28]+0x000026D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C90A4
  fcmp(c,0,c->f[1],c->f[0]); // 801C90A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C90AC
  if (!crb(c,2)) { goto L_801C90F0; } // 801C90B0
  c->r[4]=0u+0x803E0000u; // 801C90B4
  c->r[3]=c->r[28]+0x00000800u; // 801C90B8
  c->r[4]=c->r[4]+0x00000DB8u; // 801C90BC
  c->r[5]=0u+0x00000001u; // 801C90C0
  c->r[4]=c->r[4]+0x00000014u; // 801C90C4
  c->lr=0x801C90CCu; f_801CBD64(c); // 801C90C8
  {uint32_t ea=c->r[28]+0x000026E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C90CC
  c->r[3]=c->r[28]|c->r[28]; // 801C90D0
  c->r[4]=0u+0x00000004u; // 801C90D4
  c->r[5]=0u+0x30000000u; // 801C90D8
  c->lr=0x801C90E0u; f_801B07AC(c); // 801C90DC
  {uint32_t ea=c->r[28]+0x000026D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C90E0
  {uint32_t ea=c->r[2]+0xFFFFBA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C90E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C90E8
  {uint32_t ea=c->r[28]+0x000026D4u; WF32(ea,c->f[0]);} // 801C90EC
L_801C90F0:;
  c->r[3]=R32(c->r[28]+0x00000974u); // 801C90F0
  c->r[3]=R32(c->r[3]+c->r[27]); // 801C90F4
  c->lr=0x801C90FCu; f_800752CC(c); // 801C90F8
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C90FC
  fcmp(c,0,c->f[1],c->f[0]); // 801C9100
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9104
  if (!crb(c,2)) { goto L_801C9204; } // 801C9108
  c->r[0]=R32(c->r[29]+0x00000020u); // 801C910C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C9110
  c->r[3]=c->r[28]+c->r[0]; // 801C9114
  c->r[0]=R32(c->r[3]+0x0000257Cu); // 801C9118
  cmps(c,0,(int32_t)c->r[0],1); // 801C911C
  if (!crb(c,2)) { goto L_801C9204; } // 801C9120
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C9124
  c->r[3]=c->r[28]|c->r[28]; // 801C9128
  c->r[4]=R32(c->r[29]+0x00000008u); // 801C912C
  c->r[5]=c->r[30]|c->r[30]; // 801C9130
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9134
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9138
  c->r[6]=c->r[28]+c->r[0]; // 801C913C
  c->r[7]=0u+0x00000000u; // 801C9140
  c->r[6]=R32(c->r[6]+0x0000254Cu); // 801C9144
  c->lr=0x801C914Cu; f_801CB754(c); // 801C9148
  c->r[3]=0u+0x00000000u; // 801C914C
  c->r[0]=0u+0x0000000Au; // 801C9150
  W8(c->r[28]+0x00001F62u,c->r[3]); // 801C9154
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C9158
  goto L_801C9204; // 801C915C
L_801C9160:;
  {uint32_t ea=c->r[2]+0xFFFFBA6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9160
  c->r[4]=c->r[30]|c->r[30]; // 801C9164
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9168
  c->lr=0x801C9170u; f_801CAFD8(c); // 801C916C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9170
  if (crb(c,2)) { goto L_801C9204; } // 801C9174
  c->r[0]=R32(c->r[29]+0x00000020u); // 801C9178
  c->r[4]=0u+0x00000000u; // 801C917C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C9180
  c->r[3]=c->r[28]+c->r[0]; // 801C9184
  W32(c->r[3]+0x0000257Cu,c->r[4]); // 801C9188
  W32(c->r[31]+0x00000004u,c->r[4]); // 801C918C
  goto L_801C9204; // 801C9190
L_801C9194:;
  {uint32_t ea=c->r[2]+0xFFFFBA68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9194
  c->r[4]=c->r[30]|c->r[30]; // 801C9198
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C919C
  c->lr=0x801C91A4u; f_801CAFD8(c); // 801C91A0
  cmps(c,0,(int32_t)c->r[3],0); // 801C91A4
  if (crb(c,2)) { goto L_801C9204; } // 801C91A8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C91AC
  c->r[0]=c->r[3]+0x00000001u; // 801C91B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C91B4
  goto L_801C9204; // 801C91B8
L_801C91BC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C91BC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C91C0
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C91C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C91C8
  c->lr=0x801C91D0u; f_8016498C(c); // 801C91CC
  cmps(c,0,(int32_t)c->r[3],0); // 801C91D0
  if (crb(c,2)) { goto L_801C9204; } // 801C91D4
  c->r[0]=R32(c->r[29]+0x00000020u); // 801C91D8
  c->r[4]=0u+0x00000000u; // 801C91DC
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C91E0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C91E4
  c->r[3]=c->r[28]+c->r[0]; // 801C91E8
  W32(c->r[3]+0x0000257Cu,c->r[4]); // 801C91EC
  c->r[0]=R32(c->r[29]+0x00000020u); // 801C91F0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C91F4
  c->r[3]=c->r[28]+c->r[0]; // 801C91F8
  {uint32_t ea=c->r[3]+0x00002588u; WF32(ea,c->f[0]);} // 801C91FC
  W32(c->r[31]+0x00000004u,c->r[4]); // 801C9200
L_801C9204:;
  c->r[11]=c->r[1]+0x00000020u; // 801C9204
  c->lr=0x801C920Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C9208
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C920C
  c->lr=c->r[0]; // 801C9210
  c->r[1]=c->r[1]+0x00000020u; // 801C9214
  return; // 801C9218
}

// fn_801C921C
void f_801C921C(Ctx* __restrict c) {
  trace_call(0x801C921Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C921C
  c->r[0]=c->lr; // 801C9220
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C9224
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801C9228
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801C922C
  c->r[11]=c->r[1]+0x00000020u; // 801C9230
  c->lr=0x801C9238u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C9234
  c->r[8]=R32(c->r[6]+0x00000004u); // 801C9238
  c->r[28]=c->r[3]|c->r[3]; // 801C923C
  c->r[29]=c->r[4]|c->r[4]; // 801C9240
  c->r[30]=c->r[5]|c->r[5]; // 801C9244
  cmpu(c,0,c->r[8],0x0000000Bu); // 801C9248
  c->r[31]=c->r[6]|c->r[6]; // 801C924C
  if (crb(c,1)) { goto L_801C9538; } // 801C9250
  c->r[7]=0u+0x80400000u; // 801C9254
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801C9258
  c->r[7]=c->r[7]+0x00003700u; // 801C925C
  c->r[7]=R32(c->r[7]+c->r[0]); // 801C9260
  c->ctr=c->r[7]; // 801C9264
  if (true) { switch (c->ctr) { case 0x801C926Cu: goto L_801C926C; case 0x801C92A4u: goto L_801C92A4; case 0x801C930Cu: goto L_801C930C; case 0x801C9360u: goto L_801C9360; case 0x801C93FCu: goto L_801C93FC; case 0x801C9478u: goto L_801C9478; case 0x801C949Cu: goto L_801C949C; case 0x801C94CCu: goto L_801C94CC; case 0x801C9538u: goto L_801C9538; default: break; } dispatch(c,c->ctr); return; } // 801C9268
L_801C926C:;
  c->r[3]=0u+0x804D0000u; // 801C926C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9270
  c->r[3]=c->r[3]+0x00003318u; // 801C9274
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9278
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C927C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C9280
  fcmp(c,0,c->f[1],c->f[0]); // 801C9284
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[1]);} // 801C9288
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C928C
  if (!crb(c,2)) { goto L_801C9538; } // 801C9290
  c->r[0]=c->r[8]+0x00000001u; // 801C9294
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 801C9298
  W32(c->r[6]+0x00000004u,c->r[0]); // 801C929C
  goto L_801C9538; // 801C92A0
L_801C92A4:;
  c->lr=0x801C92A8u; f_801861D4(c); // 801C92A4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801C92A8
  {uint32_t ea=c->r[2]+0xFFFFBA70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C92AC
  {uint32_t ea=c->r[28]+0x00002704u; WF32(ea,c->f[1]);} // 801C92B0
  fcmp(c,0,c->f[2],c->f[0]); // 801C92B4
  if (!crb(c,0)) { goto L_801C92C0; } // 801C92B8
  {uint32_t ea=c->r[28]+0x00002704u; WF32(ea,c->f[0]);} // 801C92BC
L_801C92C0:;
  {uint32_t ea=c->r[28]+0x00002704u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C92C0
  {uint32_t ea=c->r[2]+0xFFFFBA74u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C92C4
  fcmp(c,0,c->f[1],c->f[0]); // 801C92C8
  if (!crb(c,1)) { goto L_801C92D4; } // 801C92CC
  {uint32_t ea=c->r[28]+0x00002704u; WF32(ea,c->f[0]);} // 801C92D0
L_801C92D4:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C92D4
  c->r[3]=c->r[28]|c->r[28]; // 801C92D8
  c->r[4]=R32(c->r[29]+0x00000004u); // 801C92DC
  c->r[5]=c->r[30]|c->r[30]; // 801C92E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C92E4
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C92E8
  c->r[6]=c->r[28]+c->r[0]; // 801C92EC
  c->r[7]=0u+0x00000000u; // 801C92F0
  c->r[6]=R32(c->r[6]+0x0000254Cu); // 801C92F4
  c->lr=0x801C92FCu; f_801CB754(c); // 801C92F8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C92FC
  c->r[0]=c->r[3]+0x00000001u; // 801C9300
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C9304
  goto L_801C9538; // 801C9308
L_801C930C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C930C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C9310
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9314
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C9318
  c->lr=0x801C9320u; f_8016498C(c); // 801C931C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9320
  if (crb(c,2)) { goto L_801C9538; } // 801C9324
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C9328
  c->r[3]=c->r[28]|c->r[28]; // 801C932C
  c->r[4]=R32(c->r[29]+0x00000008u); // 801C9330
  c->r[5]=c->r[30]|c->r[30]; // 801C9334
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9338
  {uint32_t ea=c->r[2]+0xFFFFBA78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C933C
  c->r[6]=c->r[28]+c->r[0]; // 801C9340
  c->r[7]=0u+0x00000000u; // 801C9344
  c->r[6]=R32(c->r[6]+0x0000254Cu); // 801C9348
  c->lr=0x801C9350u; f_801CB754(c); // 801C934C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C9350
  c->r[0]=c->r[3]+0x00000001u; // 801C9354
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C9358
  goto L_801C9538; // 801C935C
L_801C9360:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C9360
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C9364
  c->r[4]=c->r[3]+c->r[0]; // 801C9368
  c->r[0]=R32(c->r[4]+0x0000257Cu); // 801C936C
  cmps(c,0,(int32_t)c->r[0],1); // 801C9370
  if (!crb(c,2)) { goto L_801C9384; } // 801C9374
  c->r[0]=0u+0x0000000Au; // 801C9378
  W32(c->r[6]+0x00000004u,c->r[0]); // 801C937C
  goto L_801C9538; // 801C9380
L_801C9384:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C9384
  c->r[27]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C9388
  c->r[26]=0u+0x00000000u; // 801C938C
  c->r[3]=R32(c->r[3]+c->r[27]); // 801C9390
  c->lr=0x801C9398u; f_801652C0(c); // 801C9394
  {uint32_t ea=c->r[28]+0x00002704u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9398
  c->r[3]=R32(c->r[28]+0x00000974u); // 801C939C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 801C93A0
  c->r[3]=R32(c->r[3]+c->r[27]); // 801C93A4
  c->lr=0x801C93ACu; f_800752CC(c); // 801C93A8
  fcmp(c,0,c->f[1],c->f[31]); // 801C93AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C93B0
  if (!crb(c,2)) { goto L_801C93BC; } // 801C93B4
  c->r[26]=0u+0x00000001u; // 801C93B8
L_801C93BC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C93BC
  if (crb(c,2)) { goto L_801C9538; } // 801C93C0
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C93C4
  c->r[3]=c->r[28]|c->r[28]; // 801C93C8
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801C93CC
  c->r[5]=c->r[30]|c->r[30]; // 801C93D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C93D4
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C93D8
  c->r[6]=c->r[28]+c->r[0]; // 801C93DC
  c->r[7]=0u+0x00000000u; // 801C93E0
  c->r[6]=R32(c->r[6]+0x0000254Cu); // 801C93E4
  c->lr=0x801C93ECu; f_801CB754(c); // 801C93E8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C93EC
  c->r[0]=c->r[3]+0x00000001u; // 801C93F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C93F4
  goto L_801C9538; // 801C93F8
L_801C93FC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C93FC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C9400
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C9404
  c->lr=0x801C940Cu; f_800752CC(c); // 801C9408
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C940C
  fcmp(c,0,c->f[1],c->f[0]); // 801C9410
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9414
  if (!crb(c,2)) { goto L_801C9454; } // 801C9418
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C941C
  c->r[7]=0u+0x00000000u; // 801C9420
  c->r[3]=c->r[28]|c->r[28]; // 801C9424
  c->r[4]=0u+0x00000004u; // 801C9428
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C942C
  c->r[5]=0u+0x00000000u; // 801C9430
  c->r[6]=c->r[28]+c->r[0]; // 801C9434
  W32(c->r[6]+0x0000257Cu,c->r[7]); // 801C9438
  {uint32_t ea=c->r[28]+0x000026E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C943C
  c->lr=0x801C9444u; f_801B07AC(c); // 801C9440
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C9444
  c->r[0]=c->r[3]+0x00000001u; // 801C9448
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C944C
  goto L_801C9538; // 801C9450
L_801C9454:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C9454
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C9458
  c->r[3]=c->r[28]+c->r[0]; // 801C945C
  c->r[0]=R32(c->r[3]+0x0000257Cu); // 801C9460
  cmps(c,0,(int32_t)c->r[0],1); // 801C9464
  if (!crb(c,2)) { goto L_801C9538; } // 801C9468
  c->r[0]=0u+0x0000000Au; // 801C946C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C9470
  goto L_801C9538; // 801C9474
L_801C9478:;
  {uint32_t ea=c->r[2]+0xFFFFBA6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9478
  c->r[4]=c->r[30]|c->r[30]; // 801C947C
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9480
  c->lr=0x801C9488u; f_801CAFD8(c); // 801C9484
  cmps(c,0,(int32_t)c->r[3],0); // 801C9488
  if (crb(c,2)) { goto L_801C9538; } // 801C948C
  c->r[0]=0u+0x00000000u; // 801C9490
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C9494
  goto L_801C9538; // 801C9498
L_801C949C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C949C
  c->r[7]=0u+0x00000000u; // 801C94A0
  c->r[4]=R32(c->r[4]+0x00000010u); // 801C94A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C94A8
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C94AC
  c->r[6]=c->r[3]+c->r[0]; // 801C94B0
  c->r[6]=R32(c->r[6]+0x0000254Cu); // 801C94B4
  c->lr=0x801C94BCu; f_801CB754(c); // 801C94B8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C94BC
  c->r[0]=c->r[3]+0x00000001u; // 801C94C0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C94C4
  goto L_801C9538; // 801C94C8
L_801C94CC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C94CC
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C94D0
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C94D4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C94D8
  c->lr=0x801C94E0u; f_8016498C(c); // 801C94DC
  cmps(c,0,(int32_t)c->r[3],0); // 801C94E0
  if (crb(c,2)) { goto L_801C9538; } // 801C94E4
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C94E8
  c->r[4]=0u+0x80400000u; // 801C94EC
  c->r[6]=0u+0x00000002u; // 801C94F0
  {uint32_t ea=c->r[2]+0xFFFFBA48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C94F4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C94F8
  c->r[4]=c->r[4]+0x00003578u; // 801C94FC
  c->r[5]=c->r[28]+c->r[0]; // 801C9500
  c->r[3]=c->r[28]+0x000008D0u; // 801C9504
  W32(c->r[5]+0x0000257Cu,c->r[6]); // 801C9508
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C950C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C9510
  c->r[5]=c->r[28]+c->r[0]; // 801C9514
  {uint32_t ea=c->r[5]+0x00002588u; WF32(ea,c->f[0]);} // 801C9518
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C951C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801C9520
  c->r[4]=c->r[4]+c->r[0]; // 801C9524
  c->r[4]=R32(c->r[4]+0x00000014u); // 801C9528
  c->lr=0x801C9530u; f_80032310(c); // 801C952C
  c->r[0]=0u+0x00000000u; // 801C9530
  W32(c->r[31]+0x00000004u,c->r[0]); // 801C9534
L_801C9538:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801C9538
  c->r[11]=c->r[1]+0x00000020u; // 801C953C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801C9540
  c->lr=0x801C9548u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C9544
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C9548
  c->lr=c->r[0]; // 801C954C
  c->r[1]=c->r[1]+0x00000030u; // 801C9550
  return; // 801C9554
}

// fn_801C9558
void f_801C9558(Ctx* __restrict c) {
  trace_call(0x801C9558u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9558
  c->r[0]=c->lr; // 801C955C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9564
  c->r[31]=c->r[3]|c->r[3]; // 801C9568
  c->r[0]=R32(c->r[3]+0x00002660u); // 801C956C
  cmps(c,0,(int32_t)c->r[0],3); // 801C9570
  if (crb(c,2)) { goto L_801C96F0; } // 801C9574
  if (!crb(c,0)) { goto L_801C9594; } // 801C9578
  cmps(c,0,(int32_t)c->r[0],1); // 801C957C
  if (crb(c,2)) { goto L_801C95FC; } // 801C9580
  if (!crb(c,0)) { goto L_801C9650; } // 801C9584
  cmps(c,0,(int32_t)c->r[0],0); // 801C9588
  if (!crb(c,0)) { goto L_801C95A4; } // 801C958C
  goto L_801C9798; // 801C9590
L_801C9594:;
  cmps(c,0,(int32_t)c->r[0],5); // 801C9594
  if (crb(c,2)) { goto L_801C975C; } // 801C9598
  if (!crb(c,0)) { goto L_801C9798; } // 801C959C
  goto L_801C9734; // 801C95A0
L_801C95A4:;
  c->r[0]=R8(c->r[3]+0x00001F5Eu); // 801C95A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C95A8
  if (crb(c,2)) { goto L_801C9798; } // 801C95AC
  c->r[0]=R8(c->r[3]+0x00001F63u); // 801C95B0
  cmps(c,0,(int32_t)c->r[0],0); // 801C95B4
  if (crb(c,2)) { goto L_801C9798; } // 801C95B8
  {uint32_t ea=c->r[3]+0x000025FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C95BC
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C95C0
  fcmp(c,0,c->f[0],c->f[1]); // 801C95C4
  if (!crb(c,1)) { goto L_801C9798; } // 801C95C8
  c->r[4]=0u+0x804D0000u; // 801C95CC
  c->r[4]=c->r[4]+0x00003318u; // 801C95D0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C95D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C95D8
  fcmp(c,0,c->f[0],c->f[1]); // 801C95DC
  {uint32_t ea=c->r[3]+0x000025FCu; WF32(ea,c->f[0]);} // 801C95E0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C95E4
  if (!crb(c,2)) { goto L_801C9798; } // 801C95E8
  c->r[0]=0u+0x00000001u; // 801C95EC
  {uint32_t ea=c->r[3]+0x000025FCu; WF32(ea,c->f[1]);} // 801C95F0
  W8(c->r[3]+0x00001F65u,c->r[0]); // 801C95F4
  goto L_801C9798; // 801C95F8
L_801C95FC:;
  c->r[0]=0u+0x00000000u; // 801C95FC
  c->r[6]=R32(c->r[3]+0x00002550u); // 801C9600
  W8(c->r[3]+0x00001F65u,c->r[0]); // 801C9604
  c->r[5]=0u+0x00000001u; // 801C9608
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C960C
  c->r[7]=0u+0x00000000u; // 801C9610
  W8(c->r[3]+0x00001F63u,c->r[0]); // 801C9614
  W8(c->r[3]+0x00001F64u,c->r[0]); // 801C9618
  c->r[4]=R32(c->r[13]+0xFFFF881Cu); // 801C961C
  c->lr=0x801C9624u; f_801CB754(c); // 801C9620
  c->r[4]=R32(c->r[13]+0xFFFF881Cu); // 801C9624
  c->r[3]=c->r[31]|c->r[31]; // 801C9628
  c->r[6]=R32(c->r[31]+0x0000254Cu); // 801C962C
  c->r[5]=0u+0x00000004u; // 801C9630
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9634
  c->r[7]=0u+0x00000000u; // 801C9638
  c->lr=0x801C9640u; f_801CB754(c); // 801C963C
  c->r[3]=R32(c->r[31]+0x00002660u); // 801C9640
  c->r[0]=c->r[3]+0x00000001u; // 801C9644
  W32(c->r[31]+0x00002660u,c->r[0]); // 801C9648
  goto L_801C9798; // 801C964C
L_801C9650:;
  c->r[0]=R8(c->r[3]+0x00001F64u); // 801C9650
  cmps(c,0,(int32_t)c->r[0],0); // 801C9654
  if (!crb(c,2)) { goto L_801C9684; } // 801C9658
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C965C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C9660
  c->lr=0x801C9668u; f_800752CC(c); // 801C9664
  {uint32_t ea=c->r[2]+0xFFFFBA7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9668
  fcmp(c,0,c->f[1],c->f[0]); // 801C966C
  if (!crb(c,1)) { goto L_801C9684; } // 801C9670
  c->r[0]=0u+0x00000001u; // 801C9674
  c->r[3]=c->r[31]|c->r[31]; // 801C9678
  W8(c->r[31]+0x00001F64u,c->r[0]); // 801C967C
  c->lr=0x801C9684u; f_801CB3BC(c); // 801C9680
L_801C9684:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801C9684
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9688
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C968C
  c->lr=0x801C9694u; f_8016498C(c); // 801C9690
  cmps(c,0,(int32_t)c->r[3],0); // 801C9694
  if (crb(c,2)) { goto L_801C9798; } // 801C9698
  c->r[4]=R32(c->r[13]+0xFFFF8820u); // 801C969C
  c->r[3]=c->r[31]|c->r[31]; // 801C96A0
  c->r[6]=R32(c->r[31]+0x00002550u); // 801C96A4
  c->r[5]=0u+0x00000001u; // 801C96A8
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C96AC
  c->r[7]=0u+0x00000000u; // 801C96B0
  c->lr=0x801C96B8u; f_801CB754(c); // 801C96B4
  c->r[4]=R32(c->r[13]+0xFFFF8820u); // 801C96B8
  c->r[3]=c->r[31]|c->r[31]; // 801C96BC
  c->r[6]=R32(c->r[31]+0x0000254Cu); // 801C96C0
  c->r[5]=0u+0x00000004u; // 801C96C4
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C96C8
  c->r[7]=0u+0x00000000u; // 801C96CC
  c->lr=0x801C96D4u; f_801CB754(c); // 801C96D0
  {uint32_t ea=c->r[31]+0x000026D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C96D4
  c->r[3]=0u+0x00000001u; // 801C96D8
  c->r[0]=0u+0x00000000u; // 801C96DC
  W8(c->r[31]+0x00001F5Eu,c->r[3]); // 801C96E0
  {uint32_t ea=c->r[31]+0x000025FCu; WF32(ea,c->f[0]);} // 801C96E4
  W32(c->r[31]+0x00002660u,c->r[0]); // 801C96E8
  goto L_801C9798; // 801C96EC
L_801C96F0:;
  c->r[4]=R32(c->r[13]+0xFFFF8824u); // 801C96F0
  c->r[5]=0u+0x00000001u; // 801C96F4
  c->r[6]=R32(c->r[3]+0x00002550u); // 801C96F8
  c->r[7]=0u+0x00000000u; // 801C96FC
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9700
  c->lr=0x801C9708u; f_801CB754(c); // 801C9704
  c->r[4]=R32(c->r[13]+0xFFFF8824u); // 801C9708
  c->r[3]=c->r[31]|c->r[31]; // 801C970C
  c->r[6]=R32(c->r[31]+0x0000254Cu); // 801C9710
  c->r[5]=0u+0x00000004u; // 801C9714
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9718
  c->r[7]=0u+0x00000000u; // 801C971C
  c->lr=0x801C9724u; f_801CB754(c); // 801C9720
  c->r[3]=R32(c->r[31]+0x00002660u); // 801C9724
  c->r[0]=c->r[3]+0x00000001u; // 801C9728
  W32(c->r[31]+0x00002660u,c->r[0]); // 801C972C
  goto L_801C9798; // 801C9730
L_801C9734:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C9734
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9738
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C973C
  c->lr=0x801C9744u; f_8016498C(c); // 801C9740
  cmps(c,0,(int32_t)c->r[3],0); // 801C9744
  if (crb(c,2)) { goto L_801C9798; } // 801C9748
  c->r[0]=0u+0x00000000u; // 801C974C
  W8(c->r[31]+0x00001F5Eu,c->r[0]); // 801C9750
  W32(c->r[31]+0x00002660u,c->r[0]); // 801C9754
  goto L_801C9798; // 801C9758
L_801C975C:;
  c->r[4]=R32(c->r[13]+0xFFFF8828u); // 801C975C
  c->r[5]=0u+0x00000001u; // 801C9760
  c->r[6]=R32(c->r[3]+0x00002550u); // 801C9764
  c->r[7]=0u+0x00000000u; // 801C9768
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C976C
  c->lr=0x801C9774u; f_801CB754(c); // 801C9770
  c->r[4]=R32(c->r[13]+0xFFFF8828u); // 801C9774
  c->r[3]=c->r[31]|c->r[31]; // 801C9778
  c->r[6]=R32(c->r[31]+0x0000254Cu); // 801C977C
  c->r[5]=0u+0x00000004u; // 801C9780
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9784
  c->r[7]=0u+0x00000000u; // 801C9788
  c->lr=0x801C9790u; f_801CB754(c); // 801C978C
  c->r[0]=0u+0x00000004u; // 801C9790
  W32(c->r[31]+0x00002660u,c->r[0]); // 801C9794
L_801C9798:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9798
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C979C
  c->lr=c->r[0]; // 801C97A0
  c->r[1]=c->r[1]+0x00000010u; // 801C97A4
  return; // 801C97A8
}

// fn_801C97AC
void f_801C97AC(Ctx* __restrict c) {
  trace_call(0x801C97ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C97AC
  c->r[0]=c->lr; // 801C97B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C97B4
  c->r[11]=c->r[1]+0x00000040u; // 801C97B8
  c->lr=0x801C97C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C97BC
  c->r[0]=R32(c->r[3]+0x0000266Cu); // 801C97C0
  c->r[30]=c->r[3]|c->r[3]; // 801C97C4
  cmps(c,0,(int32_t)c->r[0],0); // 801C97C8
  if (!crb(c,2)) { goto L_801C98D4; } // 801C97CC
  c->r[31]=R32(c->r[4]+0x00000000u); // 801C97D0
  c->r[27]=c->r[4]+0x00000004u; // 801C97D4
  cmps(c,0,(int32_t)c->r[31],1); // 801C97D8
  if (!crb(c,1)) { goto L_801C9810; } // 801C97DC
  c->lr=0x801C97E4u; f_801861D4(c); // 801C97E0
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C97E4
  fcmp(c,0,c->f[1],c->f[0]); // 801C97E8
  if (!crb(c,0)) { goto L_801C97F8; } // 801C97EC
  W32(c->r[30]+0x0000266Cu,c->r[31]); // 801C97F0
  goto L_801C9810; // 801C97F4
L_801C97F8:;
  c->lr=0x801C97FCu; f_80291D94(c); // 801C97F8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 801C97FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801C9800
  c->r[3]=c->r[3]-c->r[0]; // 801C9804
  c->r[0]=c->r[3]+0x00000001u; // 801C9808
  W32(c->r[30]+0x0000266Cu,c->r[0]); // 801C980C
L_801C9810:;
  c->r[5]=c->r[1]+0x00000008u; // 801C9810
  c->r[3]=0u+0x00000000u; // 801C9814
  c->r[0]=0u+0xFFFFFFFFu; // 801C9818
  c->ctr=c->r[31]; // 801C981C
  cmps(c,0,(int32_t)c->r[31],0); // 801C9820
  if (!crb(c,1)) { goto L_801C9844; } // 801C9824
L_801C9828:;
  c->r[6]=R32(c->r[27]+0x00000000u); // 801C9828
  c->r[4]=c->r[30]+c->r[3]; // 801C982C
  c->r[27]=c->r[27]+0x00000004u; // 801C9830
  W32(c->r[5]+c->r[3],c->r[6]); // 801C9834
  c->r[3]=c->r[3]+0x00000004u; // 801C9838
  W32(c->r[4]+0x00002670u,c->r[0]); // 801C983C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C9828; } // 801C9840
L_801C9844:;
  c->r[28]=c->r[1]+0x00000008u; // 801C9844
  c->r[27]=0u+0x00000000u; // 801C9848
  c->r[29]=0u+0x00000000u; // 801C984C
  goto L_801C98A0; // 801C9850
L_801C9854:;
  c->lr=0x801C9858u; f_80291D94(c); // 801C9854
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 801C9858
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801C985C
  c->r[4]=c->r[3]-c->r[0]; // 801C9860
L_801C9864:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801C9864
  c->r[3]=c->r[30]+c->r[0]; // 801C9868
  c->r[0]=R32(c->r[3]+0x00002670u); // 801C986C
  cmps(c,0,(int32_t)c->r[0],-1); // 801C9870
  if (!crb(c,2)) { goto L_801C9884; } // 801C9874
  c->r[0]=R32(c->r[28]+c->r[29]); // 801C9878
  W32(c->r[3]+0x00002670u,c->r[0]); // 801C987C
  goto L_801C9898; // 801C9880
L_801C9884:;
  c->r[4]=c->r[4]+0x00000001u; // 801C9884
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[31]); // 801C9888
  if (crb(c,0)) { IRQCHK(c); goto L_801C9864; } // 801C988C
  c->r[4]=0u+0x00000000u; // 801C9890
  IRQCHK(c); goto L_801C9864; // 801C9894
L_801C9898:;
  c->r[27]=c->r[27]+0x00000001u; // 801C9898
  c->r[29]=c->r[29]+0x00000004u; // 801C989C
L_801C98A0:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[31]); // 801C98A0
  if (crb(c,0)) { IRQCHK(c); goto L_801C9854; } // 801C98A4
  c->r[0]=0u+0x00000000u; // 801C98A8
  c->r[3]=0u+0x00000001u; // 801C98AC
  W32(c->r[30]+0x00002690u,c->r[3]); // 801C98B0
  c->r[3]=c->r[30]|c->r[30]; // 801C98B4
  W32(c->r[30]+0x00002694u,c->r[0]); // 801C98B8
  W32(c->r[30]+0x000026A0u,c->r[0]); // 801C98BC
  W32(c->r[30]+0x0000269Cu,c->r[0]); // 801C98C0
  c->lr=0x801C98C8u; f_801861D4(c); // 801C98C4
  {uint32_t ea=c->r[2]+0xFFFFBA48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C98C8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 801C98CC
  {uint32_t ea=c->r[30]+0x000026A4u; WF32(ea,c->f[0]);} // 801C98D0
L_801C98D4:;
  c->r[11]=c->r[1]+0x00000040u; // 801C98D4
  c->lr=0x801C98DCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C98D8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C98DC
  c->lr=c->r[0]; // 801C98E0
  c->r[1]=c->r[1]+0x00000040u; // 801C98E4
  return; // 801C98E8
}

// fn_801C98EC
void f_801C98EC(Ctx* __restrict c) {
  trace_call(0x801C98ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C98EC
  c->r[0]=c->lr; // 801C98F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C98F4
  c->r[11]=c->r[1]+0x00000020u; // 801C98F8
  c->lr=0x801C9900u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C98FC
  c->r[0]=R32(c->r[3]+0x0000266Cu); // 801C9900
  c->r[31]=c->r[3]|c->r[3]; // 801C9904
  cmps(c,0,(int32_t)c->r[0],0); // 801C9908
  if (crb(c,2)) { goto L_801C9A98; } // 801C990C
  c->r[0]=R32(c->r[3]+0x00002690u); // 801C9910
  cmps(c,0,(int32_t)c->r[0],2); // 801C9914
  if (crb(c,2)) { goto L_801C99C8; } // 801C9918
  if (!crb(c,0)) { goto L_801C9A98; } // 801C991C
  cmps(c,0,(int32_t)c->r[0],1); // 801C9920
  if (!crb(c,0)) { goto L_801C992C; } // 801C9924
  goto L_801C9A98; // 801C9928
L_801C992C:;
  c->r[0]=R32(c->r[3]+0x00002694u); // 801C992C
  c->r[5]=0u+0x00000000u; // 801C9930
  {uint32_t ea=c->r[2]+0xFFFFBA58u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9934
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9938
  c->r[4]=c->r[3]+c->r[0]; // 801C993C
  c->r[4]=R32(c->r[4]+0x00002670u); // 801C9940
  c->lr=0x801C9948u; f_801C8C08(c); // 801C9944
  c->r[0]=R32(c->r[31]+0x000026A0u); // 801C9948
  W32(c->r[31]+0x00002698u,c->r[3]); // 801C994C
  cmps(c,0,(int32_t)c->r[0],1); // 801C9950
  if (!crb(c,1)) { goto L_801C99B8; } // 801C9954
  c->r[0]=R32(c->r[31]+0x00002694u); // 801C9958
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C995C
  c->r[3]=c->r[31]+c->r[0]; // 801C9960
  c->r[30]=R32(c->r[3]+0x00002670u); // 801C9964
  c->r[29]=c->r[30]|c->r[30]; // 801C9968
  goto L_801C99AC; // 801C996C
L_801C9970:;
  c->r[3]=R32(c->r[31]+0x0000269Cu); // 801C9970
  c->r[29]=c->r[29]+0x00000001u; // 801C9974
  c->r[0]=R32(c->r[31]+0x000026A0u); // 801C9978
  c->r[0]=c->r[3]+c->r[0]; // 801C997C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801C9980
  if (crb(c,0)) { goto L_801C998C; } // 801C9984
  c->r[29]=c->r[3]|c->r[3]; // 801C9988
L_801C998C:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[30]); // 801C998C
  if (crb(c,2)) { goto L_801C99B8; } // 801C9990
  {uint32_t ea=c->r[2]+0xFFFFBA58u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9994
  c->r[3]=c->r[31]|c->r[31]; // 801C9998
  c->r[4]=c->r[29]|c->r[29]; // 801C999C
  c->r[5]=0u+0x00000000u; // 801C99A0
  c->lr=0x801C99A8u; f_801C8C08(c); // 801C99A4
  W32(c->r[31]+0x00002698u,c->r[3]); // 801C99A8
L_801C99AC:;
  c->r[0]=R32(c->r[31]+0x00002698u); // 801C99AC
  cmps(c,0,(int32_t)c->r[0],0); // 801C99B0
  if (crb(c,0)) { IRQCHK(c); goto L_801C9970; } // 801C99B4
L_801C99B8:;
  c->r[3]=R32(c->r[31]+0x00002690u); // 801C99B8
  c->r[0]=c->r[3]+0x00000001u; // 801C99BC
  W32(c->r[31]+0x00002690u,c->r[0]); // 801C99C0
  goto L_801C9A98; // 801C99C4
L_801C99C8:;
  c->r[0]=R32(c->r[3]+0x00002698u); // 801C99C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C99CC
  if (crb(c,0)) { goto L_801C99F0; } // 801C99D0
  c->r[0]=R32(c->r[3]+0x00002694u); // 801C99D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C99D8
  c->r[4]=c->r[3]+c->r[0]; // 801C99DC
  c->r[4]=R32(c->r[4]+0x00002670u); // 801C99E0
  c->lr=0x801C99E8u; f_801C8EAC(c); // 801C99E4
  cmps(c,0,(int32_t)c->r[3],0); // 801C99E8
  if (crb(c,2)) { goto L_801C9A28; } // 801C99EC
L_801C99F0:;
  c->r[4]=R32(c->r[31]+0x00002694u); // 801C99F0
  c->r[3]=c->r[31]|c->r[31]; // 801C99F4
  c->r[0]=c->r[4]+0x00000001u; // 801C99F8
  W32(c->r[31]+0x00002694u,c->r[0]); // 801C99FC
  c->lr=0x801C9A04u; f_801861D4(c); // 801C9A00
  {uint32_t ea=c->r[2]+0xFFFFBA48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9A04
  c->r[0]=0u+0x00000001u; // 801C9A08
  c->r[3]=R32(c->r[31]+0x0000266Cu); // 801C9A0C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 801C9A10
  W32(c->r[31]+0x00002690u,c->r[0]); // 801C9A14
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C9A18
  W32(c->r[31]+0x0000266Cu,c->r[0]); // 801C9A1C
  {uint32_t ea=c->r[31]+0x000026A4u; WF32(ea,c->f[0]);} // 801C9A20
  goto L_801C9A98; // 801C9A24
L_801C9A28:;
  c->r[0]=R32(c->r[31]+0x0000266Cu); // 801C9A28
  cmps(c,0,(int32_t)c->r[0],2); // 801C9A2C
  if (!crb(c,0)) { goto L_801C9A40; } // 801C9A30
  c->r[0]=R32(c->r[31]+0x00002664u); // 801C9A34
  cmps(c,0,(int32_t)c->r[0],1); // 801C9A38
  if (crb(c,2)) { goto L_801C9A98; } // 801C9A3C
L_801C9A40:;
  c->r[3]=0u+0x804D0000u; // 801C9A40
  {uint32_t ea=c->r[31]+0x000026A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9A44
  c->r[3]=c->r[3]+0x00003318u; // 801C9A48
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9A4C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9A50
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C9A54
  fcmp(c,0,c->f[1],c->f[0]); // 801C9A58
  {uint32_t ea=c->r[31]+0x000026A4u; WF32(ea,c->f[1]);} // 801C9A5C
  if (!crb(c,0)) { goto L_801C9A98; } // 801C9A60
  c->r[4]=R32(c->r[31]+0x00002694u); // 801C9A64
  c->r[3]=c->r[31]|c->r[31]; // 801C9A68
  c->r[0]=c->r[4]+0x00000001u; // 801C9A6C
  W32(c->r[31]+0x00002694u,c->r[0]); // 801C9A70
  c->lr=0x801C9A78u; f_801861D4(c); // 801C9A74
  {uint32_t ea=c->r[2]+0xFFFFBA48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9A78
  c->r[0]=0u+0x00000001u; // 801C9A7C
  c->r[3]=R32(c->r[31]+0x0000266Cu); // 801C9A80
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],c->f[0])); // 801C9A84
  W32(c->r[31]+0x00002690u,c->r[0]); // 801C9A88
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C9A8C
  W32(c->r[31]+0x0000266Cu,c->r[0]); // 801C9A90
  {uint32_t ea=c->r[31]+0x000026A4u; WF32(ea,c->f[0]);} // 801C9A94
L_801C9A98:;
  c->r[11]=c->r[1]+0x00000020u; // 801C9A98
  c->lr=0x801C9AA0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C9A9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9AA0
  c->lr=c->r[0]; // 801C9AA4
  c->r[1]=c->r[1]+0x00000020u; // 801C9AA8
  return; // 801C9AAC
}

// fn_801C9AB0
void f_801C9AB0(Ctx* __restrict c) {
  trace_call(0x801C9AB0u);
  c->r[0]=R32(c->r[3]+0x0000266Cu); // 801C9AB0
  c->r[0]=cntlz(c->r[0]); // 801C9AB4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C9AB8
  return; // 801C9ABC
}

// fn_801C9AC0
void f_801C9AC0(Ctx* __restrict c) {
  trace_call(0x801C9AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9AC0
  c->r[0]=c->lr; // 801C9AC4
  c->r[7]=0u+0x803E0000u; // 801C9AC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9ACC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9AD0
  c->r[31]=c->r[3]|c->r[3]; // 801C9AD4
  {uint32_t ea=c->r[7]+0x00000D94u; c->r[6]=R32(ea); c->r[7]=ea;} // 801C9AD8
  c->r[5]=R32(c->r[7]+0x00000004u); // 801C9ADC
  c->r[4]=R32(c->r[7]+0x00000008u); // 801C9AE0
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801C9AE4
  W32(c->r[1]+0x00000008u,c->r[6]); // 801C9AE8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C9AEC
  W32(c->r[1]+0x00000010u,c->r[4]); // 801C9AF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9AF4
  c->r[0]=R32(c->r[3]+0x00002668u); // 801C9AF8
  cmps(c,0,(int32_t)c->r[0],2); // 801C9AFC
  if (crb(c,2)) { goto L_801C9B38; } // 801C9B00
  if (!crb(c,0)) { goto L_801C9B14; } // 801C9B04
  cmps(c,0,(int32_t)c->r[0],1); // 801C9B08
  if (!crb(c,0)) { goto L_801C9B20; } // 801C9B0C
  goto L_801C9B64; // 801C9B10
L_801C9B14:;
  cmps(c,0,(int32_t)c->r[0],4); // 801C9B14
  if (!crb(c,0)) { goto L_801C9B64; } // 801C9B18
  goto L_801C9B54; // 801C9B1C
L_801C9B20:;
  c->r[4]=c->r[1]+0x00000008u; // 801C9B20
  c->lr=0x801C9B28u; f_801C97AC(c); // 801C9B24
  c->r[3]=R32(c->r[31]+0x00002668u); // 801C9B28
  c->r[0]=c->r[3]+0x00000001u; // 801C9B2C
  W32(c->r[31]+0x00002668u,c->r[0]); // 801C9B30
  goto L_801C9B64; // 801C9B34
L_801C9B38:;
  c->lr=0x801C9B3Cu; f_801C9AB0(c); // 801C9B38
  cmps(c,0,(int32_t)c->r[3],0); // 801C9B3C
  if (crb(c,2)) { goto L_801C9B64; } // 801C9B40
  c->r[3]=R32(c->r[31]+0x00002668u); // 801C9B44
  c->r[0]=c->r[3]+0x00000001u; // 801C9B48
  W32(c->r[31]+0x00002668u,c->r[0]); // 801C9B4C
  goto L_801C9B64; // 801C9B50
L_801C9B54:;
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9B54
  c->r[4]=0u+0x00000002u; // 801C9B58
  {uint32_t ea=c->r[3]+0x00001F78u; WF32(ea,c->f[0]);} // 801C9B5C
  c->lr=0x801C9B64u; f_801CB0F0(c); // 801C9B60
L_801C9B64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9B64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9B68
  c->lr=c->r[0]; // 801C9B6C
  c->r[1]=c->r[1]+0x00000020u; // 801C9B70
  return; // 801C9B74
}

// fn_801C9B78
void f_801C9B78(Ctx* __restrict c) {
  trace_call(0x801C9B78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9B78
  c->r[0]=c->lr; // 801C9B7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9B80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9B84
  c->r[31]=c->r[3]|c->r[3]; // 801C9B88
  c->r[0]=R32(c->r[3]+0x00002668u); // 801C9B8C
  cmps(c,0,(int32_t)c->r[0],4); // 801C9B90
  if (crb(c,2)) { goto L_801C9D04; } // 801C9B94
  if (!crb(c,0)) { goto L_801C9BB4; } // 801C9B98
  cmps(c,0,(int32_t)c->r[0],2); // 801C9B9C
  if (crb(c,2)) { goto L_801C9C0C; } // 801C9BA0
  if (!crb(c,0)) { goto L_801C9C9C; } // 801C9BA4
  cmps(c,0,(int32_t)c->r[0],1); // 801C9BA8
  if (!crb(c,0)) { goto L_801C9BC4; } // 801C9BAC
  goto L_801C9E98; // 801C9BB0
L_801C9BB4:;
  cmps(c,0,(int32_t)c->r[0],6); // 801C9BB4
  if (crb(c,2)) { goto L_801C9E4C; } // 801C9BB8
  if (!crb(c,0)) { goto L_801C9E98; } // 801C9BBC
  goto L_801C9DC0; // 801C9BC0
L_801C9BC4:;
  c->r[0]=0u+0x00000000u; // 801C9BC4
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9BC8
  W8(c->r[3]+0x00001F60u,c->r[0]); // 801C9BCC
  c->r[5]=0u+0x00000000u; // 801C9BD0
  W8(c->r[3]+0x00001F5Fu,c->r[0]); // 801C9BD4
  c->r[4]=R32(c->r[13]+0xFFFF88E0u); // 801C9BD8
  c->lr=0x801C9BE0u; f_801CB7EC(c); // 801C9BDC
  c->r[3]=R32(c->r[31]+0x00002668u); // 801C9BE0
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9BE4
  {uint32_t ea=c->r[2]+0xFFFFBA88u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9BE8
  c->r[0]=c->r[3]+0x00000001u; // 801C9BEC
  {uint32_t ea=c->r[2]+0xFFFFBA8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9BF0
  {uint32_t ea=c->r[31]+0x000026A8u; WF32(ea,c->f[2]);} // 801C9BF4
  {uint32_t ea=c->r[31]+0x00002AE0u; WF32(ea,c->f[1]);} // 801C9BF8
  {uint32_t ea=c->r[31]+0x00002AF0u; WF32(ea,c->f[0]);} // 801C9BFC
  {uint32_t ea=c->r[31]+0x00001F78u; WF32(ea,c->f[0]);} // 801C9C00
  W32(c->r[31]+0x00002668u,c->r[0]); // 801C9C04
  goto L_801C9E98; // 801C9C08
L_801C9C0C:;
  {uint32_t ea=c->r[3]+0x00002AE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9C0C
  {uint32_t ea=c->r[2]+0xFFFFBA90u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C9C10
  fcmp(c,0,c->f[1],c->f[3]); // 801C9C14
  if (!crb(c,0)) { goto L_801C9C58; } // 801C9C18
  {uint32_t ea=c->r[3]+0x00001F78u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9C1C
  {uint32_t ea=c->r[3]+0x00002AF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9C20
  fcmp(c,0,c->f[2],c->f[0]); // 801C9C24
  if (!crb(c,1)) { goto L_801C9C58; } // 801C9C28
  {uint32_t ea=c->r[2]+0xFFFFBA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9C2C
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9C30
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801C9C34
  {uint32_t ea=c->r[2]+0xFFFFBA94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9C38
  {uint32_t ea=c->r[3]+0x00001F78u; WF32(ea,c->f[2]);} // 801C9C3C
  fcmp(c,0,c->f[0],c->f[3]); // 801C9C40
  {uint32_t ea=c->r[3]+0x00002AF0u; WF32(ea,c->f[1]);} // 801C9C44
  {uint32_t ea=c->r[3]+0x00002AE0u; WF32(ea,c->f[0]);} // 801C9C48
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9C4C
  if (!crb(c,2)) { goto L_801C9C58; } // 801C9C50
  {uint32_t ea=c->r[3]+0x00002AE0u; WF32(ea,c->f[3]);} // 801C9C54
L_801C9C58:;
  c->r[3]=c->r[3]+0x00001F44u; // 801C9C58
  c->lr=0x801C9C60u; f_80229B24(c); // 801C9C5C
  {uint32_t ea=c->r[31]+0x000026A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9C60
  fcmp(c,0,c->f[1],c->f[0]); // 801C9C64
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9C68
  if (!crb(c,2)) { goto L_801C9E98; } // 801C9C6C
  c->r[4]=R32(c->r[13]+0xFFFF886Cu); // 801C9C70
  c->r[3]=c->r[31]|c->r[31]; // 801C9C74
  c->r[6]=R32(c->r[31]+0x00002574u); // 801C9C78
  c->r[5]=0u+0x0000000Cu; // 801C9C7C
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9C80
  c->r[7]=0u+0x00000000u; // 801C9C84
  c->lr=0x801C9C8Cu; f_801CB754(c); // 801C9C88
  c->r[3]=R32(c->r[31]+0x00002668u); // 801C9C8C
  c->r[0]=c->r[3]+0x00000001u; // 801C9C90
  W32(c->r[31]+0x00002668u,c->r[0]); // 801C9C94
  goto L_801C9E98; // 801C9C98
L_801C9C9C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C9C9C
  c->r[3]=R32(c->r[3]+0x00000030u); // 801C9CA0
  c->lr=0x801C9CA8u; f_800752CC(c); // 801C9CA4
  {uint32_t ea=c->r[2]+0xFFFFBA98u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9CA8
  fcmp(c,0,c->f[1],c->f[0]); // 801C9CAC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9CB0
  if (!crb(c,2)) { goto L_801C9E98; } // 801C9CB4
  c->r[3]=R32(c->r[2]+0xFFFFBA80u); // 801C9CB8
  c->r[0]=R32(c->r[2]+0xFFFFBA84u); // 801C9CBC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C9CC0
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801C9CC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C9CC8
  c->lr=0x801C9CD0u; f_800F39EC(c); // 801C9CCC
  c->r[4]=0u+0x803E0000u; // 801C9CD0
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9CD4
  c->r[4]=c->r[4]+0xFFFFAA30u; // 801C9CD8
  {uint32_t ea=c->r[2]+0xFFFFBA9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9CDC
  c->r[4]=c->r[4]+0x00000008u; // 801C9CE0
  c->r[5]=c->r[1]+0x00000008u; // 801C9CE4
  c->r[6]=0u+0x00000004u; // 801C9CE8
  c->r[7]=0u+0x00000024u; // 801C9CEC
  c->lr=0x801C9CF4u; f_800DAD9C(c); // 801C9CF0
  c->r[3]=R32(c->r[31]+0x00002668u); // 801C9CF4
  c->r[0]=c->r[3]+0x00000001u; // 801C9CF8
  W32(c->r[31]+0x00002668u,c->r[0]); // 801C9CFC
  goto L_801C9E98; // 801C9D00
L_801C9D04:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801C9D04
  c->r[3]=R32(c->r[3]+0x00000030u); // 801C9D08
  c->lr=0x801C9D10u; f_800752CC(c); // 801C9D0C
  {uint32_t ea=c->r[2]+0xFFFFBAA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9D10
  fcmp(c,0,c->f[1],c->f[0]); // 801C9D14
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9D18
  if (!crb(c,2)) { goto L_801C9E98; } // 801C9D1C
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801C9D20
  c->lr=0x801C9D28u; f_800F39EC(c); // 801C9D24
  c->lr=0x801C9D2Cu; f_800DB6D4(c); // 801C9D28
  cmps(c,0,(int32_t)c->r[3],3); // 801C9D2C
  if (!crb(c,2)) { goto L_801C9D60; } // 801C9D30
  c->r[0]=0u+0x00000001u; // 801C9D34
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9D38
  W8(c->r[31]+0x00001F5Fu,c->r[0]); // 801C9D3C
  c->r[3]=c->r[31]|c->r[31]; // 801C9D40
  c->r[5]=0u+0x00000000u; // 801C9D44
  c->r[4]=R32(c->r[13]+0xFFFF88E4u); // 801C9D48
  c->lr=0x801C9D50u; f_801CB7EC(c); // 801C9D4C
  c->r[3]=R32(c->r[31]+0x00002668u); // 801C9D50
  c->r[0]=c->r[3]+0x00000002u; // 801C9D54
  W32(c->r[31]+0x00002668u,c->r[0]); // 801C9D58
  goto L_801C9DAC; // 801C9D5C
L_801C9D60:;
  c->r[4]=0u+0x803E0000u; // 801C9D60
  c->r[3]=c->r[31]+0x00000800u; // 801C9D64
  c->r[4]=c->r[4]+0x00000DB8u; // 801C9D68
  c->r[5]=0u+0x00000001u; // 801C9D6C
  c->r[4]=c->r[4]+0x0000001Bu; // 801C9D70
  c->lr=0x801C9D78u; f_801CBD64(c); // 801C9D74
  {uint32_t ea=c->r[31]+0x000026F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9D78
  c->r[3]=c->r[31]|c->r[31]; // 801C9D7C
  c->r[4]=0u+0x00000003u; // 801C9D80
  c->r[5]=0u+0x00000000u; // 801C9D84
  c->lr=0x801C9D8Cu; f_801B07AC(c); // 801C9D88
  c->r[4]=R32(c->r[13]+0xFFFF88E4u); // 801C9D8C
  c->r[3]=c->r[31]|c->r[31]; // 801C9D90
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9D94
  c->r[5]=0u+0x00000000u; // 801C9D98
  c->lr=0x801C9DA0u; f_801CB7EC(c); // 801C9D9C
  c->r[3]=R32(c->r[31]+0x00002668u); // 801C9DA0
  c->r[0]=c->r[3]+0x00000002u; // 801C9DA4
  W32(c->r[31]+0x00002668u,c->r[0]); // 801C9DA8
L_801C9DAC:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801C9DAC
  c->lr=0x801C9DB4u; f_800F39EC(c); // 801C9DB0
  c->r[4]=0u+0xFFFFFFFFu; // 801C9DB4
  c->lr=0x801C9DBCu; f_800DB6F8(c); // 801C9DB8
  goto L_801C9E98; // 801C9DBC
L_801C9DC0:;
  c->r[0]=R8(c->r[3]+0x00001F60u); // 801C9DC0
  cmps(c,0,(int32_t)c->r[0],0); // 801C9DC4
  if (!crb(c,2)) { goto L_801C9DEC; } // 801C9DC8
  {uint32_t ea=c->r[2]+0xFFFFBA6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9DCC
  c->r[4]=0u+0x0000000Cu; // 801C9DD0
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9DD4
  c->lr=0x801C9DDCu; f_801CAFD8(c); // 801C9DD8
  cmps(c,0,(int32_t)c->r[3],0); // 801C9DDC
  if (crb(c,2)) { goto L_801C9DEC; } // 801C9DE0
  c->r[0]=0u+0x00000001u; // 801C9DE4
  W8(c->r[31]+0x00001F60u,c->r[0]); // 801C9DE8
L_801C9DEC:;
  c->r[0]=R8(c->r[31]+0x00001F5Fu); // 801C9DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801C9DF0
  if (!crb(c,2)) { goto L_801C9E2C; } // 801C9DF4
  c->r[3]=c->r[31]+0x00001F44u; // 801C9DF8
  c->lr=0x801C9E00u; f_80229B24(c); // 801C9DFC
  {uint32_t ea=c->r[2]+0xFFFFBAA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9E00
  fcmp(c,0,c->f[1],c->f[0]); // 801C9E04
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9E08
  if (!crb(c,2)) { goto L_801C9E2C; } // 801C9E0C
  c->r[0]=0u+0x00000001u; // 801C9E10
  {uint32_t ea=c->r[31]+0x00002700u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9E14
  W8(c->r[31]+0x00001F5Fu,c->r[0]); // 801C9E18
  c->r[3]=c->r[31]|c->r[31]; // 801C9E1C
  c->r[4]=0u+0x00000003u; // 801C9E20
  c->r[5]=0u+0x00000000u; // 801C9E24
  c->lr=0x801C9E2Cu; f_801B07AC(c); // 801C9E28
L_801C9E2C:;
  c->r[3]=c->r[31]+0x00001F44u; // 801C9E2C
  c->lr=0x801C9E34u; f_80229B4C(c); // 801C9E30
  cmps(c,0,(int32_t)c->r[3],0); // 801C9E34
  if (crb(c,2)) { goto L_801C9E98; } // 801C9E38
  c->r[3]=c->r[31]|c->r[31]; // 801C9E3C
  c->r[4]=0u+0x00000001u; // 801C9E40
  c->lr=0x801C9E48u; f_801CB0F0(c); // 801C9E44
  goto L_801C9E98; // 801C9E48
L_801C9E4C:;
  c->r[0]=R8(c->r[3]+0x00001F65u); // 801C9E4C
  cmpu(c,0,c->r[0],0x00000001u); // 801C9E50
  if (!crb(c,2)) { goto L_801C9E7C; } // 801C9E54
  c->r[3]=c->r[3]+0x00001F44u; // 801C9E58
  c->lr=0x801C9E60u; f_80229B24(c); // 801C9E5C
  {uint32_t ea=c->r[2]+0xFFFFBAA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9E60
  fcmp(c,0,c->f[1],c->f[0]); // 801C9E64
  if (!crb(c,1)) { goto L_801C9E98; } // 801C9E68
  c->r[3]=c->r[31]|c->r[31]; // 801C9E6C
  c->r[4]=0u+0x00000003u; // 801C9E70
  c->lr=0x801C9E78u; f_801CB0F0(c); // 801C9E74
  goto L_801C9E98; // 801C9E78
L_801C9E7C:;
  c->r[3]=c->r[3]+0x00001F44u; // 801C9E7C
  c->lr=0x801C9E84u; f_80229B4C(c); // 801C9E80
  cmps(c,0,(int32_t)c->r[3],0); // 801C9E84
  if (crb(c,2)) { goto L_801C9E98; } // 801C9E88
  c->r[3]=c->r[31]|c->r[31]; // 801C9E8C
  c->r[4]=0u+0x00000003u; // 801C9E90
  c->lr=0x801C9E98u; f_801CB0F0(c); // 801C9E94
L_801C9E98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9E98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9E9C
  c->lr=c->r[0]; // 801C9EA0
  c->r[1]=c->r[1]+0x00000020u; // 801C9EA4
  return; // 801C9EA8
}

// fn_801C9EAC
void f_801C9EAC(Ctx* __restrict c) {
  trace_call(0x801C9EACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9EAC
  c->r[0]=c->lr; // 801C9EB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C9EB4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801C9EB8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801C9EBC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801C9EC0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801C9EC4
  c->r[11]=c->r[1]+0x00000020u; // 801C9EC8
  c->lr=0x801C9ED0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C9ECC
  c->r[0]=R32(c->r[3]+0x00002668u); // 801C9ED0
  c->r[31]=c->r[3]|c->r[3]; // 801C9ED4
  cmps(c,0,(int32_t)c->r[0],2); // 801C9ED8
  if (crb(c,2)) { goto L_801CA0FC; } // 801C9EDC
  if (!crb(c,0)) { goto L_801C9EF0; } // 801C9EE0
  cmps(c,0,(int32_t)c->r[0],1); // 801C9EE4
  if (!crb(c,0)) { goto L_801C9EFC; } // 801C9EE8
  goto L_801CA158; // 801C9EEC
L_801C9EF0:;
  cmps(c,0,(int32_t)c->r[0],4); // 801C9EF0
  if (!crb(c,0)) { goto L_801CA158; } // 801C9EF4
  goto L_801CA144; // 801C9EF8
L_801C9EFC:;
  c->r[0]=R8(c->r[3]+0x00001F65u); // 801C9EFC
  c->r[4]=0u+0x00000001u; // 801C9F00
  W8(c->r[3]+0x00001F63u,c->r[4]); // 801C9F04
  cmpu(c,0,c->r[0],0x00000001u); // 801C9F08
  if (!crb(c,2)) { goto L_801C9F2C; } // 801C9F0C
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9F10
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9F14
  c->lr=0x801C9F1Cu; f_801CBD10(c); // 801C9F18
  c->r[3]=c->r[31]|c->r[31]; // 801C9F1C
  c->r[4]=0u+0x00000005u; // 801C9F20
  c->lr=0x801C9F28u; f_801CB0F0(c); // 801C9F24
  goto L_801CA158; // 801C9F28
L_801C9F2C:;
  c->r[0]=R8(c->r[3]+0x00001F5Eu); // 801C9F2C
  cmps(c,0,(int32_t)c->r[0],0); // 801C9F30
  if (!crb(c,2)) { goto L_801C9F54; } // 801C9F34
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9F38
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9F3C
  c->lr=0x801C9F44u; f_801CBD10(c); // 801C9F40
  c->r[3]=c->r[31]|c->r[31]; // 801C9F44
  c->r[4]=0u+0x00000005u; // 801C9F48
  c->lr=0x801C9F50u; f_801CB0F0(c); // 801C9F4C
  goto L_801CA158; // 801C9F50
L_801C9F54:;
  c->lr=0x801C9F58u; f_80291D94(c); // 801C9F54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801C9F58
  cmps(c,0,(int32_t)c->r[0],127); // 801C9F5C
  if (!crb(c,1)) { goto L_801C9FD4; } // 801C9F60
  c->lr=0x801C9F68u; f_80291D94(c); // 801C9F64
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801C9F68
  if (crb(c,2)) { goto L_801C9F98; } // 801C9F6C
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9F70
  c->r[3]=c->r[31]|c->r[31]; // 801C9F74
  c->r[4]=0u+0x0000000Bu; // 801C9F78
  c->r[5]=0u+0x00000000u; // 801C9F7C
  c->lr=0x801C9F84u; f_801C8C08(c); // 801C9F80
  c->r[3]=c->r[31]|c->r[31]; // 801C9F84
  c->r[4]=0u+0x0000000Bu; // 801C9F88
  c->r[5]=0u+0x00000000u; // 801C9F8C
  c->lr=0x801C9F94u; f_801CB86C(c); // 801C9F90
  goto L_801C9FBC; // 801C9F94
L_801C9F98:;
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9F98
  c->r[3]=c->r[31]|c->r[31]; // 801C9F9C
  c->r[4]=0u+0x0000000Cu; // 801C9FA0
  c->r[5]=0u+0x00000000u; // 801C9FA4
  c->lr=0x801C9FACu; f_801C8C08(c); // 801C9FA8
  c->r[3]=c->r[31]|c->r[31]; // 801C9FAC
  c->r[4]=0u+0x0000000Cu; // 801C9FB0
  c->r[5]=0u+0x00000000u; // 801C9FB4
  c->lr=0x801C9FBCu; f_801CB86C(c); // 801C9FB8
L_801C9FBC:;
  c->r[3]=R32(c->r[31]+0x00002668u); // 801C9FBC
  c->r[0]=0u+0x00000000u; // 801C9FC0
  W8(c->r[31]+0x00001F62u,c->r[0]); // 801C9FC4
  c->r[0]=c->r[3]+0x00000001u; // 801C9FC8
  W32(c->r[31]+0x00002668u,c->r[0]); // 801C9FCC
  goto L_801CA158; // 801C9FD0
L_801C9FD4:;
  c->lr=0x801C9FD8u; f_80291D94(c); // 801C9FD4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801C9FD8
  if (crb(c,2)) { goto L_801CA01C; } // 801C9FDC
  c->lr=0x801C9FE4u; f_80291D94(c); // 801C9FE0
  c->r[3]=c->r[3]^0x80000000u; // 801C9FE4
  c->r[0]=0u+0x43300000u; // 801C9FE8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801C9FEC
  {uint32_t ea=c->r[2]+0xFFFFBAB0u; c->f[3]=RF64(ea);} // 801C9FF0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C9FF4
  {uint32_t ea=c->r[2]+0xFFFFBAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9FF8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C9FFC
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA000
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801CA004
  {uint32_t ea=c->r[2]+0xFFFFBA60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA008
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[30]=c->ps1[30]=RF32(ea);} // 801CA00C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801CA010
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801CA014
  goto L_801CA054; // 801CA018
L_801CA01C:;
  c->lr=0x801CA020u; f_80291D94(c); // 801CA01C
  c->r[3]=c->r[3]^0x80000000u; // 801CA020
  c->r[0]=0u+0x43300000u; // 801CA024
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CA028
  {uint32_t ea=c->r[2]+0xFFFFBAB0u; c->f[3]=RF64(ea);} // 801CA02C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CA030
  {uint32_t ea=c->r[2]+0xFFFFBAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA034
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CA038
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA03C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801CA040
  {uint32_t ea=c->r[2]+0xFFFFBA60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA044
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CA048
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801CA04C
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801CA050
L_801CA054:;
  fcmp(c,0,c->f[31],c->f[30]); // 801CA054
  c->r[30]=0u+0x00000001u; // 801CA058
  W8(c->r[31]+0x00001F62u,c->r[30]); // 801CA05C
  c->r[29]=0u+0x00000001u; // 801CA060
  c->r[0]=c->cr; // 801CA064
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 801CA068
  if (crb(c,2)) { goto L_801CA074; } // 801CA06C
  c->r[29]=0u+0x00000000u; // 801CA070
L_801CA074:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA074
  if (!crb(c,2)) { goto L_801CA080; } // 801CA078
  c->r[30]=0u+0x00000000u; // 801CA07C
L_801CA080:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA080
  c->r[4]=0u+0x0000000Bu; // 801CA084
  c->lr=0x801CA08Cu; f_801C8B94(c); // 801CA088
  cmps(c,0,(int32_t)c->r[3],0); // 801CA08C
  if (crb(c,2)) { goto L_801CA0A8; } // 801CA090
  c->r[3]=c->r[31]|c->r[31]; // 801CA094
  c->r[4]=0u+0x0000000Cu; // 801CA098
  c->lr=0x801CA0A0u; f_801C8B94(c); // 801CA09C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA0A0
  if (!crb(c,2)) { goto L_801CA0B4; } // 801CA0A4
L_801CA0A8:;
  c->r[30]=0u+0x00000000u; // 801CA0A8
  c->r[29]=0u+0x00000000u; // 801CA0AC
  W8(c->r[31]+0x00001F62u,c->r[30]); // 801CA0B0
L_801CA0B4:;
  c->f[1]=c->f[31]; // 801CA0B4
  c->r[3]=c->r[31]|c->r[31]; // 801CA0B8
  c->r[5]=c->r[30]|c->r[30]; // 801CA0BC
  c->r[4]=0u+0x0000000Bu; // 801CA0C0
  c->lr=0x801CA0C8u; f_801C8C08(c); // 801CA0C4
  c->f[1]=c->f[30]; // 801CA0C8
  c->r[3]=c->r[31]|c->r[31]; // 801CA0CC
  c->r[5]=c->r[29]|c->r[29]; // 801CA0D0
  c->r[4]=0u+0x0000000Cu; // 801CA0D4
  c->lr=0x801CA0DCu; f_801C8C08(c); // 801CA0D8
  c->r[3]=c->r[31]|c->r[31]; // 801CA0DC
  c->r[4]=0u+0x0000000Bu; // 801CA0E0
  c->r[5]=0u+0x0000000Cu; // 801CA0E4
  c->lr=0x801CA0ECu; f_801CB86C(c); // 801CA0E8
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA0EC
  c->r[0]=c->r[3]+0x00000001u; // 801CA0F0
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA0F4
  goto L_801CA158; // 801CA0F8
L_801CA0FC:;
  c->lr=0x801CA100u; f_801CBAE0(c); // 801CA0FC
  c->r[3]=c->r[31]|c->r[31]; // 801CA100
  c->r[4]=0u+0x0000000Bu; // 801CA104
  c->lr=0x801CA10Cu; f_801C8EAC(c); // 801CA108
  cmps(c,0,(int32_t)c->r[3],0); // 801CA10C
  if (crb(c,2)) { goto L_801CA158; } // 801CA110
  c->r[3]=c->r[31]|c->r[31]; // 801CA114
  c->r[4]=0u+0x0000000Cu; // 801CA118
  c->lr=0x801CA120u; f_801C8EAC(c); // 801CA11C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA120
  if (crb(c,2)) { goto L_801CA158; } // 801CA124
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA128
  c->r[3]=c->r[31]|c->r[31]; // 801CA12C
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA130
  c->lr=0x801CA138u; f_801CBD10(c); // 801CA134
  c->r[0]=0u+0x00000001u; // 801CA138
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA13C
  goto L_801CA158; // 801CA140
L_801CA144:;
  c->lr=0x801CA148u; f_801C9AB0(c); // 801CA144
  cmps(c,0,(int32_t)c->r[3],0); // 801CA148
  if (crb(c,2)) { goto L_801CA158; } // 801CA14C
  c->r[0]=0u+0x00000001u; // 801CA150
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA154
L_801CA158:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CA158
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CA15C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801CA160
  c->r[11]=c->r[1]+0x00000020u; // 801CA164
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801CA168
  c->lr=0x801CA170u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA16C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CA170
  c->lr=c->r[0]; // 801CA174
  c->r[1]=c->r[1]+0x00000040u; // 801CA178
  return; // 801CA17C
}

// fn_801CA180
void f_801CA180(Ctx* __restrict c) {
  trace_call(0x801CA180u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA180
  c->r[0]=c->lr; // 801CA184
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA18C
  c->r[31]=c->r[3]|c->r[3]; // 801CA190
  c->r[0]=R32(c->r[3]+0x00002668u); // 801CA194
  cmps(c,0,(int32_t)c->r[0],2); // 801CA198
  if (crb(c,2)) { goto L_801CA1E4; } // 801CA19C
  if (!crb(c,0)) { goto L_801CA1B0; } // 801CA1A0
  cmps(c,0,(int32_t)c->r[0],1); // 801CA1A4
  if (!crb(c,0)) { goto L_801CA1BC; } // 801CA1A8
  goto L_801CA254; // 801CA1AC
L_801CA1B0:;
  cmps(c,0,(int32_t)c->r[0],4); // 801CA1B0
  if (!crb(c,0)) { goto L_801CA254; } // 801CA1B4
  goto L_801CA208; // 801CA1B8
L_801CA1BC:;
  c->r[4]=R32(c->r[13]+0xFFFF88F0u); // 801CA1BC
  c->r[5]=0u+0x00000000u; // 801CA1C0
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA1C4
  c->lr=0x801CA1CCu; f_801CB7EC(c); // 801CA1C8
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA1CC
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA1D0
  c->r[0]=c->r[3]+0x00000001u; // 801CA1D4
  {uint32_t ea=c->r[31]+0x00001F78u; WF32(ea,c->f[0]);} // 801CA1D8
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA1DC
  goto L_801CA254; // 801CA1E0
L_801CA1E4:;
  c->r[3]=c->r[3]+0x00001F44u; // 801CA1E4
  c->lr=0x801CA1ECu; f_80229B24(c); // 801CA1E8
  {uint32_t ea=c->r[2]+0xFFFFBAB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA1EC
  fcmp(c,0,c->f[1],c->f[0]); // 801CA1F0
  if (!crb(c,1)) { goto L_801CA254; } // 801CA1F4
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA1F8
  c->r[0]=c->r[3]+0x00000001u; // 801CA1FC
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA200
  goto L_801CA254; // 801CA204
L_801CA208:;
  c->r[0]=R8(c->r[3]+0x00001F65u); // 801CA208
  cmpu(c,0,c->r[0],0x00000001u); // 801CA20C
  if (!crb(c,2)) { goto L_801CA238; } // 801CA210
  c->r[3]=c->r[3]+0x00001F44u; // 801CA214
  c->lr=0x801CA21Cu; f_80229B24(c); // 801CA218
  {uint32_t ea=c->r[2]+0xFFFFBABCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA21C
  fcmp(c,0,c->f[1],c->f[0]); // 801CA220
  if (!crb(c,1)) { goto L_801CA254; } // 801CA224
  c->r[3]=c->r[31]|c->r[31]; // 801CA228
  c->r[4]=0u+0x00000006u; // 801CA22C
  c->lr=0x801CA234u; f_801CB0F0(c); // 801CA230
  goto L_801CA254; // 801CA234
L_801CA238:;
  c->r[3]=c->r[3]+0x00001F44u; // 801CA238
  c->lr=0x801CA240u; f_80229B4C(c); // 801CA23C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA240
  if (crb(c,2)) { goto L_801CA254; } // 801CA244
  c->r[3]=c->r[31]|c->r[31]; // 801CA248
  c->r[4]=0u+0x00000006u; // 801CA24C
  c->lr=0x801CA254u; f_801CB0F0(c); // 801CA250
L_801CA254:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA254
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA258
  c->lr=c->r[0]; // 801CA25C
  c->r[1]=c->r[1]+0x00000010u; // 801CA260
  return; // 801CA264
}

// fn_801CA268
void f_801CA268(Ctx* __restrict c) {
  trace_call(0x801CA268u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA268
  c->r[0]=c->lr; // 801CA26C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA270
  c->r[11]=c->r[1]+0x00000020u; // 801CA274
  c->lr=0x801CA27Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CA278
  c->r[0]=R32(c->r[3]+0x00002668u); // 801CA27C
  c->r[31]=c->r[3]|c->r[3]; // 801CA280
  cmps(c,0,(int32_t)c->r[0],4); // 801CA284
  if (crb(c,2)) { goto L_801CA3A8; } // 801CA288
  if (!crb(c,0)) { goto L_801CA2A8; } // 801CA28C
  cmps(c,0,(int32_t)c->r[0],2); // 801CA290
  if (crb(c,2)) { goto L_801CA2EC; } // 801CA294
  if (!crb(c,0)) { goto L_801CA35C; } // 801CA298
  cmps(c,0,(int32_t)c->r[0],1); // 801CA29C
  if (!crb(c,0)) { goto L_801CA2B8; } // 801CA2A0
  goto L_801CA580; // 801CA2A4
L_801CA2A8:;
  cmps(c,0,(int32_t)c->r[0],6); // 801CA2A8
  if (crb(c,2)) { goto L_801CA488; } // 801CA2AC
  if (!crb(c,0)) { goto L_801CA580; } // 801CA2B0
  goto L_801CA418; // 801CA2B4
L_801CA2B8:;
  c->r[0]=0u+0x00000000u; // 801CA2B8
  c->r[6]=R32(c->r[3]+0x00002574u); // 801CA2BC
  W8(c->r[3]+0x00001F60u,c->r[0]); // 801CA2C0
  c->r[5]=0u+0x0000000Cu; // 801CA2C4
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA2C8
  c->r[7]=0u+0x00000000u; // 801CA2CC
  W8(c->r[3]+0x00001F5Fu,c->r[0]); // 801CA2D0
  c->r[4]=R32(c->r[13]+0xFFFF88B0u); // 801CA2D4
  c->lr=0x801CA2DCu; f_801CB754(c); // 801CA2D8
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA2DC
  c->r[0]=c->r[3]+0x00000001u; // 801CA2E0
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA2E4
  goto L_801CA580; // 801CA2E8
L_801CA2EC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801CA2EC
  c->r[3]=R32(c->r[3]+0x00000030u); // 801CA2F0
  c->lr=0x801CA2F8u; f_800752CC(c); // 801CA2F4
  {uint32_t ea=c->r[2]+0xFFFFBAC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA2F8
  fcmp(c,0,c->f[1],c->f[0]); // 801CA2FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA300
  if (!crb(c,2)) { goto L_801CA580; } // 801CA304
  c->r[4]=R32(c->r[13]+0xFFFF88E8u); // 801CA308
  c->r[3]=c->r[31]|c->r[31]; // 801CA30C
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA310
  c->r[5]=0u+0x00000000u; // 801CA314
  c->lr=0x801CA31Cu; f_801CB7EC(c); // 801CA318
  c->r[3]=R32(c->r[31]+0x00000974u); // 801CA31C
  c->r[29]=R32(c->r[3]+0x00000030u); // 801CA320
  c->lr=0x801CA328u; f_80061A4C(c); // 801CA324
  c->r[30]=c->r[3]|c->r[3]; // 801CA328
  c->r[3]=c->r[29]|c->r[29]; // 801CA32C
  c->lr=0x801CA334u; f_800752CC(c); // 801CA330
  c->r[3]=c->r[30]+0x000000ECu; // 801CA334
  c->lr=0x801CA33Cu; f_8012D2C8(c); // 801CA338
  c->lr=0x801CA340u; f_80061A4C(c); // 801CA33C
  c->r[4]=0u+0x00000000u; // 801CA340
  c->r[3]=c->r[3]+0x000000ECu; // 801CA344
  c->lr=0x801CA34Cu; f_8012D1D4(c); // 801CA348
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA34C
  c->r[0]=c->r[3]+0x00000001u; // 801CA350
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA354
  goto L_801CA580; // 801CA358
L_801CA35C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801CA35C
  c->r[3]=R32(c->r[3]+0x00000030u); // 801CA360
  c->lr=0x801CA368u; f_800752CC(c); // 801CA364
  {uint32_t ea=c->r[2]+0xFFFFBAA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA368
  fcmp(c,0,c->f[1],c->f[0]); // 801CA36C
  if (!crb(c,1)) { goto L_801CA580; } // 801CA370
  c->r[0]=R8(c->r[31]+0x00001F5Eu); // 801CA374
  cmpu(c,0,c->r[0],0x00000001u); // 801CA378
  if (!crb(c,2)) { goto L_801CA388; } // 801CA37C
  c->r[0]=0u+0x00000005u; // 801CA380
  W32(c->r[31]+0x00002660u,c->r[0]); // 801CA384
L_801CA388:;
  c->lr=0x801CA38Cu; f_80061A4C(c); // 801CA388
  c->r[4]=0u+0x00000000u; // 801CA38C
  c->r[3]=c->r[3]+0x0000064Cu; // 801CA390
  c->lr=0x801CA398u; f_80171C28(c); // 801CA394
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA398
  c->r[0]=c->r[3]+0x00000001u; // 801CA39C
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA3A0
  goto L_801CA580; // 801CA3A4
L_801CA3A8:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801CA3A8
  c->r[3]=R32(c->r[3]+0x00000030u); // 801CA3AC
  c->lr=0x801CA3B4u; f_800752CC(c); // 801CA3B0
  {uint32_t ea=c->r[2]+0xFFFFBAC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA3B4
  fcmp(c,0,c->f[1],c->f[0]); // 801CA3B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA3BC
  if (!crb(c,2)) { goto L_801CA580; } // 801CA3C0
  c->r[0]=R32(c->r[31]+0x000026FCu); // 801CA3C4
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801CA3C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CA3CC
  c->r[0]=R32(c->r[31]+0x000026FCu); // 801CA3D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CA3D4
  c->lr=0x801CA3DCu; f_800F39EC(c); // 801CA3D8
  c->r[4]=0u+0x803E0000u; // 801CA3DC
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA3E0
  c->r[4]=c->r[4]+0xFFFFAA30u; // 801CA3E4
  {uint32_t ea=c->r[2]+0xFFFFBAC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA3E8
  c->r[4]=c->r[4]+0x00000008u; // 801CA3EC
  c->r[5]=c->r[1]+0x00000008u; // 801CA3F0
  c->r[6]=0u+0x00000004u; // 801CA3F4
  c->r[7]=0u+0x0000000Bu; // 801CA3F8
  c->lr=0x801CA400u; f_800DAD9C(c); // 801CA3FC
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA400
  c->r[0]=0u+0x00000000u; // 801CA404
  W32(c->r[31]+0x00002AECu,c->r[0]); // 801CA408
  c->r[0]=c->r[3]+0x00000001u; // 801CA40C
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA410
  goto L_801CA580; // 801CA414
L_801CA418:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801CA418
  c->r[3]=R32(c->r[3]+0x00000030u); // 801CA41C
  c->lr=0x801CA424u; f_800752CC(c); // 801CA420
  {uint32_t ea=c->r[2]+0xFFFFBACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA424
  fcmp(c,0,c->f[1],c->f[0]); // 801CA428
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA42C
  if (!crb(c,2)) { goto L_801CA580; } // 801CA430
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801CA434
  c->lr=0x801CA43Cu; f_800F39EC(c); // 801CA438
  c->lr=0x801CA440u; f_800DB6D4(c); // 801CA43C
  cmps(c,0,(int32_t)c->r[3],3); // 801CA440
  if (!crb(c,2)) { goto L_801CA468; } // 801CA444
  c->r[30]=0u+0x00000001u; // 801CA448
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA44C
  W8(c->r[31]+0x00001F5Fu,c->r[30]); // 801CA450
  c->r[3]=c->r[31]|c->r[31]; // 801CA454
  c->r[5]=0u+0x00000000u; // 801CA458
  c->r[4]=R32(c->r[13]+0xFFFF88ECu); // 801CA45C
  c->lr=0x801CA464u; f_801CB7EC(c); // 801CA460
  W32(c->r[31]+0x00002AECu,c->r[30]); // 801CA464
L_801CA468:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801CA468
  c->lr=0x801CA470u; f_800F39EC(c); // 801CA46C
  c->r[4]=0u+0xFFFFFFFFu; // 801CA470
  c->lr=0x801CA478u; f_800DB6F8(c); // 801CA474
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA478
  c->r[0]=c->r[3]+0x00000001u; // 801CA47C
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA480
  goto L_801CA580; // 801CA484
L_801CA488:;
  c->r[0]=R8(c->r[3]+0x00001F60u); // 801CA488
  cmps(c,0,(int32_t)c->r[0],0); // 801CA48C
  if (!crb(c,2)) { goto L_801CA4B4; } // 801CA490
  {uint32_t ea=c->r[2]+0xFFFFBA6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA494
  c->r[4]=0u+0x0000000Cu; // 801CA498
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA49C
  c->lr=0x801CA4A4u; f_801CAFD8(c); // 801CA4A0
  cmps(c,0,(int32_t)c->r[3],0); // 801CA4A4
  if (crb(c,2)) { goto L_801CA4B4; } // 801CA4A8
  c->r[0]=0u+0x00000001u; // 801CA4AC
  W8(c->r[31]+0x00001F60u,c->r[0]); // 801CA4B0
L_801CA4B4:;
  c->r[0]=R8(c->r[31]+0x00001F5Fu); // 801CA4B4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA4B8
  if (!crb(c,2)) { goto L_801CA510; } // 801CA4BC
  c->r[3]=R32(c->r[31]+0x00000974u); // 801CA4C0
  c->r[3]=R32(c->r[3]+0x00000030u); // 801CA4C4
  c->lr=0x801CA4CCu; f_800752CC(c); // 801CA4C8
  {uint32_t ea=c->r[2]+0xFFFFBACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA4CC
  fcmp(c,0,c->f[1],c->f[0]); // 801CA4D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA4D4
  if (!crb(c,2)) { goto L_801CA510; } // 801CA4D8
  c->r[4]=0u+0x803E0000u; // 801CA4DC
  c->r[3]=c->r[31]+0x00000800u; // 801CA4E0
  c->r[4]=c->r[4]+0x00000DB8u; // 801CA4E4
  c->r[5]=0u+0x00000001u; // 801CA4E8
  c->r[4]=c->r[4]+0x00000022u; // 801CA4EC
  c->lr=0x801CA4F4u; f_801CBD64(c); // 801CA4F0
  {uint32_t ea=c->r[31]+0x00002700u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA4F4
  c->r[3]=c->r[31]|c->r[31]; // 801CA4F8
  c->r[4]=0u+0x00000003u; // 801CA4FC
  c->r[5]=0u+0x00000000u; // 801CA500
  c->lr=0x801CA508u; f_801B07AC(c); // 801CA504
  c->r[0]=0u+0x00000001u; // 801CA508
  W8(c->r[31]+0x00001F5Fu,c->r[0]); // 801CA50C
L_801CA510:;
  c->r[0]=R32(c->r[31]+0x00002AECu); // 801CA510
  cmps(c,0,(int32_t)c->r[0],1); // 801CA514
  if (!crb(c,2)) { goto L_801CA554; } // 801CA518
  c->r[3]=c->r[31]+0x00001F44u; // 801CA51C
  c->lr=0x801CA524u; f_80229B24(c); // 801CA520
  {uint32_t ea=c->r[2]+0xFFFFBAD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA524
  fcmp(c,0,c->f[1],c->f[0]); // 801CA528
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA52C
  if (!crb(c,2)) { goto L_801CA554; } // 801CA530
  c->r[4]=0u+0x803E0000u; // 801CA534
  c->r[3]=c->r[31]+0x00000800u; // 801CA538
  c->r[4]=c->r[4]+0x00000DB8u; // 801CA53C
  c->r[5]=0u+0x00000001u; // 801CA540
  c->r[4]=c->r[4]+0x00000029u; // 801CA544
  c->lr=0x801CA54Cu; f_801CBD64(c); // 801CA548
  c->r[0]=0u+0x00000002u; // 801CA54C
  W32(c->r[31]+0x00002AECu,c->r[0]); // 801CA550
L_801CA554:;
  c->r[3]=c->r[31]+0x00001F44u; // 801CA554
  c->lr=0x801CA55Cu; f_80229B4C(c); // 801CA558
  cmps(c,0,(int32_t)c->r[3],0); // 801CA55C
  if (crb(c,2)) { goto L_801CA580; } // 801CA560
  c->lr=0x801CA568u; f_80061A4C(c); // 801CA564
  c->r[4]=0u+0x00000001u; // 801CA568
  c->r[3]=c->r[3]+0x000000ECu; // 801CA56C
  c->lr=0x801CA574u; f_8012D1D4(c); // 801CA570
  c->r[3]=c->r[31]|c->r[31]; // 801CA574
  c->r[4]=0u+0x00000001u; // 801CA578
  c->lr=0x801CA580u; f_801CB0F0(c); // 801CA57C
L_801CA580:;
  c->r[11]=c->r[1]+0x00000020u; // 801CA580
  c->lr=0x801CA588u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA584
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA588
  c->lr=c->r[0]; // 801CA58C
  c->r[1]=c->r[1]+0x00000020u; // 801CA590
  return; // 801CA594
}

// fn_801CA598
void f_801CA598(Ctx* __restrict c) {
  trace_call(0x801CA598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA598
  c->r[0]=c->lr; // 801CA59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA5A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA5A4
  c->r[31]=c->r[3]|c->r[3]; // 801CA5A8
  c->r[0]=R32(c->r[3]+0x00002668u); // 801CA5AC
  cmps(c,0,(int32_t)c->r[0],2); // 801CA5B0
  if (crb(c,2)) { goto L_801CA660; } // 801CA5B4
  if (!crb(c,0)) { goto L_801CA5C8; } // 801CA5B8
  cmps(c,0,(int32_t)c->r[0],1); // 801CA5BC
  if (!crb(c,0)) { goto L_801CA5D4; } // 801CA5C0
  goto L_801CA6A8; // 801CA5C4
L_801CA5C8:;
  cmps(c,0,(int32_t)c->r[0],4); // 801CA5C8
  if (!crb(c,0)) { goto L_801CA6A8; } // 801CA5CC
  goto L_801CA678; // 801CA5D0
L_801CA5D4:;
  c->r[0]=R8(c->r[3]+0x00001F65u); // 801CA5D4
  c->r[4]=0u+0x00000001u; // 801CA5D8
  W8(c->r[3]+0x00001F63u,c->r[4]); // 801CA5DC
  cmpu(c,0,c->r[0],0x00000001u); // 801CA5E0
  if (!crb(c,2)) { goto L_801CA604; } // 801CA5E4
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA5E8
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA5EC
  c->lr=0x801CA5F4u; f_801CBD10(c); // 801CA5F0
  c->r[3]=c->r[31]|c->r[31]; // 801CA5F4
  c->r[4]=0u+0x00000007u; // 801CA5F8
  c->lr=0x801CA600u; f_801CB0F0(c); // 801CA5FC
  goto L_801CA6A8; // 801CA600
L_801CA604:;
  c->r[0]=R8(c->r[3]+0x00001F5Eu); // 801CA604
  cmps(c,0,(int32_t)c->r[0],0); // 801CA608
  if (!crb(c,2)) { goto L_801CA62C; } // 801CA60C
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA610
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA614
  c->lr=0x801CA61Cu; f_801CBD10(c); // 801CA618
  c->r[3]=c->r[31]|c->r[31]; // 801CA61C
  c->r[4]=0u+0x00000007u; // 801CA620
  c->lr=0x801CA628u; f_801CB0F0(c); // 801CA624
  goto L_801CA6A8; // 801CA628
L_801CA62C:;
  c->r[4]=0u+0x0000000Du; // 801CA62C
  c->r[5]=0u+0x00000000u; // 801CA630
  c->lr=0x801CA638u; f_801CB86C(c); // 801CA634
  c->r[0]=0u+0x00000000u; // 801CA638
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA63C
  W8(c->r[31]+0x00001F62u,c->r[0]); // 801CA640
  c->r[3]=c->r[31]|c->r[31]; // 801CA644
  c->r[4]=0u+0x0000000Du; // 801CA648
  c->r[5]=0u+0x00000000u; // 801CA64C
  c->lr=0x801CA654u; f_801C8C08(c); // 801CA650
  c->r[0]=0u+0x00000003u; // 801CA654
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA658
  goto L_801CA6A8; // 801CA65C
L_801CA660:;
  c->lr=0x801CA664u; f_801C9AB0(c); // 801CA660
  cmps(c,0,(int32_t)c->r[3],0); // 801CA664
  if (crb(c,2)) { goto L_801CA6A8; } // 801CA668
  c->r[0]=0u+0x00000001u; // 801CA66C
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA670
  goto L_801CA6A8; // 801CA674
L_801CA678:;
  c->lr=0x801CA67Cu; f_801CBAE0(c); // 801CA678
  c->r[3]=c->r[31]|c->r[31]; // 801CA67C
  c->r[4]=0u+0x0000000Du; // 801CA680
  c->lr=0x801CA688u; f_801C8EAC(c); // 801CA684
  cmps(c,0,(int32_t)c->r[3],0); // 801CA688
  if (crb(c,2)) { goto L_801CA6A8; } // 801CA68C
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA690
  c->r[3]=c->r[31]|c->r[31]; // 801CA694
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA698
  c->lr=0x801CA6A0u; f_801CBD10(c); // 801CA69C
  c->r[0]=0u+0x00000001u; // 801CA6A0
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA6A4
L_801CA6A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA6A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA6AC
  c->lr=c->r[0]; // 801CA6B0
  c->r[1]=c->r[1]+0x00000010u; // 801CA6B4
  return; // 801CA6B8
}

// fn_801CA6BC
void f_801CA6BC(Ctx* __restrict c) {
  trace_call(0x801CA6BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA6BC
  c->r[0]=c->lr; // 801CA6C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA6C4
  c->r[11]=c->r[1]+0x00000020u; // 801CA6C8
  c->lr=0x801CA6D0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CA6CC
  c->r[0]=R32(c->r[3]+0x00002668u); // 801CA6D0
  c->r[31]=c->r[3]|c->r[3]; // 801CA6D4
  cmps(c,0,(int32_t)c->r[0],4); // 801CA6D8
  if (crb(c,2)) { goto L_801CA804; } // 801CA6DC
  if (!crb(c,0)) { goto L_801CA6FC; } // 801CA6E0
  cmps(c,0,(int32_t)c->r[0],2); // 801CA6E4
  if (crb(c,2)) { goto L_801CA744; } // 801CA6E8
  if (!crb(c,0)) { goto L_801CA7B4; } // 801CA6EC
  cmps(c,0,(int32_t)c->r[0],1); // 801CA6F0
  if (!crb(c,0)) { goto L_801CA70C; } // 801CA6F4
  goto L_801CA9C4; // 801CA6F8
L_801CA6FC:;
  cmps(c,0,(int32_t)c->r[0],6); // 801CA6FC
  if (crb(c,2)) { goto L_801CA8D0; } // 801CA700
  if (!crb(c,0)) { goto L_801CA9C4; } // 801CA704
  goto L_801CA864; // 801CA708
L_801CA70C:;
  c->r[0]=0u+0x00000000u; // 801CA70C
  c->r[6]=R32(c->r[3]+0x00002564u); // 801CA710
  W32(c->r[3]+0x00002AECu,c->r[0]); // 801CA714
  c->r[5]=0u+0x0000000Cu; // 801CA718
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA71C
  c->r[7]=0u+0x00000000u; // 801CA720
  W8(c->r[3]+0x00001F60u,c->r[0]); // 801CA724
  W8(c->r[3]+0x00001F5Fu,c->r[0]); // 801CA728
  c->r[4]=R32(c->r[13]+0xFFFF88DCu); // 801CA72C
  c->lr=0x801CA734u; f_801CB754(c); // 801CA730
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA734
  c->r[0]=c->r[3]+0x00000001u; // 801CA738
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA73C
  goto L_801CA9C4; // 801CA740
L_801CA744:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801CA744
  c->r[3]=R32(c->r[3]+0x00000030u); // 801CA748
  c->lr=0x801CA750u; f_800752CC(c); // 801CA74C
  {uint32_t ea=c->r[2]+0xFFFFBA90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA750
  fcmp(c,0,c->f[1],c->f[0]); // 801CA754
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA758
  if (!crb(c,2)) { goto L_801CA9C4; } // 801CA75C
  c->r[4]=R32(c->r[13]+0xFFFF88F4u); // 801CA760
  c->r[3]=c->r[31]|c->r[31]; // 801CA764
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA768
  c->r[5]=0u+0x00000000u; // 801CA76C
  c->lr=0x801CA774u; f_801CB7EC(c); // 801CA770
  c->r[3]=R32(c->r[31]+0x00000974u); // 801CA774
  c->r[29]=R32(c->r[3]+0x00000030u); // 801CA778
  c->lr=0x801CA780u; f_80061A4C(c); // 801CA77C
  c->r[30]=c->r[3]|c->r[3]; // 801CA780
  c->r[3]=c->r[29]|c->r[29]; // 801CA784
  c->lr=0x801CA78Cu; f_800752CC(c); // 801CA788
  c->r[3]=c->r[30]+0x000000ECu; // 801CA78C
  c->lr=0x801CA794u; f_8012D2C8(c); // 801CA790
  c->lr=0x801CA798u; f_80061A4C(c); // 801CA794
  c->r[4]=0u+0x00000000u; // 801CA798
  c->r[3]=c->r[3]+0x000000ECu; // 801CA79C
  c->lr=0x801CA7A4u; f_8012D1D4(c); // 801CA7A0
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA7A4
  c->r[0]=c->r[3]+0x00000001u; // 801CA7A8
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA7AC
  goto L_801CA9C4; // 801CA7B0
L_801CA7B4:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801CA7B4
  c->r[3]=R32(c->r[3]+0x00000030u); // 801CA7B8
  c->lr=0x801CA7C0u; f_800752CC(c); // 801CA7BC
  {uint32_t ea=c->r[2]+0xFFFFBAD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA7C0
  fcmp(c,0,c->f[1],c->f[0]); // 801CA7C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA7C8
  if (!crb(c,2)) { goto L_801CA9C4; } // 801CA7CC
  c->r[0]=R8(c->r[31]+0x00001F5Eu); // 801CA7D0
  cmpu(c,0,c->r[0],0x00000001u); // 801CA7D4
  if (!crb(c,2)) { goto L_801CA7E4; } // 801CA7D8
  c->r[0]=0u+0x00000005u; // 801CA7DC
  W32(c->r[31]+0x00002660u,c->r[0]); // 801CA7E0
L_801CA7E4:;
  c->lr=0x801CA7E8u; f_80061A4C(c); // 801CA7E4
  c->r[4]=0u+0x00000000u; // 801CA7E8
  c->r[3]=c->r[3]+0x0000064Cu; // 801CA7EC
  c->lr=0x801CA7F4u; f_80171C28(c); // 801CA7F0
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA7F4
  c->r[0]=c->r[3]+0x00000001u; // 801CA7F8
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA7FC
  goto L_801CA9C4; // 801CA800
L_801CA804:;
  c->r[3]=c->r[3]+0x00001F44u; // 801CA804
  c->lr=0x801CA80Cu; f_80229B24(c); // 801CA808
  {uint32_t ea=c->r[2]+0xFFFFBAD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA80C
  fcmp(c,0,c->f[1],c->f[0]); // 801CA810
  if (!crb(c,1)) { goto L_801CA9C4; } // 801CA814
  c->r[0]=R32(c->r[31]+0x000026F4u); // 801CA818
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801CA81C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CA820
  c->r[0]=R32(c->r[31]+0x000026F4u); // 801CA824
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CA828
  c->lr=0x801CA830u; f_800F39EC(c); // 801CA82C
  c->r[4]=0u+0x803E0000u; // 801CA830
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA834
  c->r[4]=c->r[4]+0xFFFFAA30u; // 801CA838
  {uint32_t ea=c->r[2]+0xFFFFBADCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA83C
  c->r[4]=c->r[4]+0x00000008u; // 801CA840
  c->r[5]=c->r[1]+0x00000008u; // 801CA844
  c->r[6]=0u+0x00000004u; // 801CA848
  c->r[7]=0u+0x0000000Bu; // 801CA84C
  c->lr=0x801CA854u; f_800DAD9C(c); // 801CA850
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA854
  c->r[0]=c->r[3]+0x00000001u; // 801CA858
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA85C
  goto L_801CA9C4; // 801CA860
L_801CA864:;
  c->r[3]=c->r[3]+0x00001F44u; // 801CA864
  c->lr=0x801CA86Cu; f_80229B24(c); // 801CA868
  {uint32_t ea=c->r[2]+0xFFFFBAE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA86C
  fcmp(c,0,c->f[1],c->f[0]); // 801CA870
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA874
  if (!crb(c,2)) { goto L_801CA9C4; } // 801CA878
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801CA87C
  c->lr=0x801CA884u; f_800F39EC(c); // 801CA880
  c->lr=0x801CA888u; f_800DB6D4(c); // 801CA884
  cmps(c,0,(int32_t)c->r[3],3); // 801CA888
  if (!crb(c,2)) { goto L_801CA8B0; } // 801CA88C
  c->r[30]=0u+0x00000001u; // 801CA890
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA894
  W8(c->r[31]+0x00001F5Fu,c->r[30]); // 801CA898
  c->r[3]=c->r[31]|c->r[31]; // 801CA89C
  c->r[5]=0u+0x00000000u; // 801CA8A0
  c->r[4]=R32(c->r[13]+0xFFFF88F8u); // 801CA8A4
  c->lr=0x801CA8ACu; f_801CB7EC(c); // 801CA8A8
  W32(c->r[31]+0x00002AECu,c->r[30]); // 801CA8AC
L_801CA8B0:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801CA8B0
  c->lr=0x801CA8B8u; f_800F39EC(c); // 801CA8B4
  c->r[4]=0u+0xFFFFFFFFu; // 801CA8B8
  c->lr=0x801CA8C0u; f_800DB6F8(c); // 801CA8BC
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CA8C0
  c->r[0]=c->r[3]+0x00000001u; // 801CA8C4
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CA8C8
  goto L_801CA9C4; // 801CA8CC
L_801CA8D0:;
  c->r[0]=R8(c->r[3]+0x00001F60u); // 801CA8D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CA8D4
  if (!crb(c,2)) { goto L_801CA8FC; } // 801CA8D8
  {uint32_t ea=c->r[2]+0xFFFFBA6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA8DC
  c->r[4]=0u+0x0000000Cu; // 801CA8E0
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA8E4
  c->lr=0x801CA8ECu; f_801CAFD8(c); // 801CA8E8
  cmps(c,0,(int32_t)c->r[3],0); // 801CA8EC
  if (crb(c,2)) { goto L_801CA8FC; } // 801CA8F0
  c->r[0]=0u+0x00000001u; // 801CA8F4
  W8(c->r[31]+0x00001F60u,c->r[0]); // 801CA8F8
L_801CA8FC:;
  c->r[3]=c->r[31]+0x00001F44u; // 801CA8FC
  c->lr=0x801CA904u; f_80229B24(c); // 801CA900
  {uint32_t ea=c->r[2]+0xFFFFBAE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA904
  fcmp(c,0,c->f[1],c->f[0]); // 801CA908
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA90C
  if (!crb(c,2)) { goto L_801CA954; } // 801CA910
  c->r[0]=R8(c->r[31]+0x00001F5Fu); // 801CA914
  cmps(c,0,(int32_t)c->r[0],0); // 801CA918
  if (!crb(c,2)) { goto L_801CA954; } // 801CA91C
  c->r[4]=0u+0x803E0000u; // 801CA920
  c->r[3]=c->r[31]+0x00000800u; // 801CA924
  c->r[4]=c->r[4]+0x00000DB8u; // 801CA928
  c->r[5]=0u+0x00000001u; // 801CA92C
  c->r[4]=c->r[4]+0x00000022u; // 801CA930
  c->lr=0x801CA938u; f_801CBD64(c); // 801CA934
  {uint32_t ea=c->r[31]+0x000026F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA938
  c->r[3]=c->r[31]|c->r[31]; // 801CA93C
  c->r[4]=0u+0x00000003u; // 801CA940
  c->r[5]=0u+0x00000000u; // 801CA944
  c->lr=0x801CA94Cu; f_801B07AC(c); // 801CA948
  c->r[0]=0u+0x00000001u; // 801CA94C
  W8(c->r[31]+0x00001F5Fu,c->r[0]); // 801CA950
L_801CA954:;
  c->r[0]=R32(c->r[31]+0x00002AECu); // 801CA954
  cmps(c,0,(int32_t)c->r[0],1); // 801CA958
  if (!crb(c,2)) { goto L_801CA998; } // 801CA95C
  c->r[3]=c->r[31]+0x00001F44u; // 801CA960
  c->lr=0x801CA968u; f_80229B24(c); // 801CA964
  {uint32_t ea=c->r[2]+0xFFFFBAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA968
  fcmp(c,0,c->f[1],c->f[0]); // 801CA96C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA970
  if (!crb(c,2)) { goto L_801CA998; } // 801CA974
  c->r[4]=0u+0x803E0000u; // 801CA978
  c->r[3]=c->r[31]+0x00000800u; // 801CA97C
  c->r[4]=c->r[4]+0x00000DB8u; // 801CA980
  c->r[5]=0u+0x00000001u; // 801CA984
  c->r[4]=c->r[4]+0x00000029u; // 801CA988
  c->lr=0x801CA990u; f_801CBD64(c); // 801CA98C
  c->r[0]=0u+0x00000002u; // 801CA990
  W32(c->r[31]+0x00002AECu,c->r[0]); // 801CA994
L_801CA998:;
  c->r[3]=c->r[31]+0x00001F44u; // 801CA998
  c->lr=0x801CA9A0u; f_80229B4C(c); // 801CA99C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA9A0
  if (crb(c,2)) { goto L_801CA9C4; } // 801CA9A4
  c->lr=0x801CA9ACu; f_80061A4C(c); // 801CA9A8
  c->r[4]=0u+0x00000001u; // 801CA9AC
  c->r[3]=c->r[3]+0x000000ECu; // 801CA9B0
  c->lr=0x801CA9B8u; f_8012D1D4(c); // 801CA9B4
  c->r[3]=c->r[31]|c->r[31]; // 801CA9B8
  c->r[4]=0u+0x00000001u; // 801CA9BC
  c->lr=0x801CA9C4u; f_801CB0F0(c); // 801CA9C0
L_801CA9C4:;
  c->r[11]=c->r[1]+0x00000020u; // 801CA9C4
  c->lr=0x801CA9CCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA9C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA9CC
  c->lr=c->r[0]; // 801CA9D0
  c->r[1]=c->r[1]+0x00000020u; // 801CA9D4
  return; // 801CA9D8
}

// fn_801CA9DC
void f_801CA9DC(Ctx* __restrict c) {
  trace_call(0x801CA9DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA9DC
  c->r[0]=c->lr; // 801CA9E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA9E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CA9E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CA9EC
  c->r[30]=c->r[3]|c->r[3]; // 801CA9F0
  c->r[0]=R32(c->r[3]+0x00002668u); // 801CA9F4
  cmps(c,0,(int32_t)c->r[0],3); // 801CA9F8
  if (crb(c,2)) { goto L_801CAABC; } // 801CA9FC
  if (!crb(c,0)) { goto L_801CAA14; } // 801CAA00
  cmps(c,0,(int32_t)c->r[0],1); // 801CAA04
  if (crb(c,2)) { goto L_801CAA24; } // 801CAA08
  if (!crb(c,0)) { goto L_801CAA68; } // 801CAA0C
  goto L_801CAB70; // 801CAA10
L_801CAA14:;
  cmps(c,0,(int32_t)c->r[0],5); // 801CAA14
  if (crb(c,2)) { goto L_801CAB3C; } // 801CAA18
  if (!crb(c,0)) { goto L_801CAB70; } // 801CAA1C
  goto L_801CAB0C; // 801CAA20
L_801CAA24:;
  {uint32_t ea=c->r[2]+0xFFFFBA48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAA24
  c->r[6]=0u+0x00000001u; // 801CAA28
  c->r[0]=0u+0x00000000u; // 801CAA2C
  W32(c->r[3]+0x00002660u,c->r[6]); // 801CAA30
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAA34
  c->r[4]=0u+0x00000003u; // 801CAA38
  {uint32_t ea=c->r[3]+0x00002708u; WF32(ea,c->f[0]);} // 801CAA3C
  c->r[5]=0u+0x00000000u; // 801CAA40
  W32(c->r[3]+0x00002714u,c->r[0]); // 801CAA44
  W32(c->r[3]+0x00002710u,c->r[6]); // 801CAA48
  c->lr=0x801CAA50u; f_801CAB88(c); // 801CAA4C
  c->r[3]=R32(c->r[30]+0x00002668u); // 801CAA50
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAA54
  c->r[0]=c->r[3]+0x00000001u; // 801CAA58
  {uint32_t ea=c->r[30]+0x00001F78u; WF32(ea,c->f[0]);} // 801CAA5C
  W32(c->r[30]+0x00002668u,c->r[0]); // 801CAA60
  goto L_801CAB70; // 801CAA64
L_801CAA68:;
  {uint32_t ea=c->r[3]+0x00001F78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAA68
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAA6C
  fcmp(c,0,c->f[1],c->f[0]); // 801CAA70
  if (!crb(c,1)) { goto L_801CAB70; } // 801CAA74
  {uint32_t ea=c->r[3]+0x00002708u; WF32(ea,c->f[0]);} // 801CAA78
  c->lr=0x801CAA80u; f_80061A4C(c); // 801CAA7C
  c->r[31]=R32(c->r[3]+0x000008BCu); // 801CAA80
  c->r[3]=c->r[1]+0x00000008u; // 801CAA84
  {uint32_t ea=c->r[2]+0xFFFFBAECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAA88
  {uint32_t ea=c->r[2]+0xFFFFBAF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CAA8C
  {uint32_t ea=c->r[2]+0xFFFFBAF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CAA90
  c->lr=0x801CAA98u; f_800521A0(c); // 801CAA94
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAA98
  c->r[4]=c->r[3]|c->r[3]; // 801CAA9C
  c->r[3]=c->r[31]|c->r[31]; // 801CAAA0
  c->r[5]=0u+0x00000007u; // 801CAAA4
  c->lr=0x801CAAACu; f_801DB31C(c); // 801CAAA8
  c->r[3]=R32(c->r[30]+0x00002668u); // 801CAAAC
  c->r[0]=c->r[3]+0x00000001u; // 801CAAB0
  W32(c->r[30]+0x00002668u,c->r[0]); // 801CAAB4
  goto L_801CAB70; // 801CAAB8
L_801CAABC:;
  {uint32_t ea=c->r[3]+0x00001F78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAABC
  {uint32_t ea=c->r[2]+0xFFFFBAF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAAC0
  fcmp(c,0,c->f[1],c->f[0]); // 801CAAC4
  if (!crb(c,1)) { goto L_801CAB70; } // 801CAAC8
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAACC
  c->r[4]=0u+0x00000003u; // 801CAAD0
  c->r[5]=0u+0x00000000u; // 801CAAD4
  {uint32_t ea=c->r[3]+0x00001F78u; WF32(ea,c->f[1]);} // 801CAAD8
  c->lr=0x801CAAE0u; f_801CAB88(c); // 801CAADC
  c->r[0]=R8(c->r[30]+0x00001F61u); // 801CAAE0
  cmps(c,0,(int32_t)c->r[0],0); // 801CAAE4
  if (!crb(c,2)) { goto L_801CAAFC; } // 801CAAE8
  c->r[3]=R32(c->r[30]+0x00002668u); // 801CAAEC
  c->r[0]=c->r[3]+0x00000001u; // 801CAAF0
  W32(c->r[30]+0x00002668u,c->r[0]); // 801CAAF4
  goto L_801CAB70; // 801CAAF8
L_801CAAFC:;
  c->r[3]=R32(c->r[30]+0x00002668u); // 801CAAFC
  c->r[0]=c->r[3]+0x00000002u; // 801CAB00
  W32(c->r[30]+0x00002668u,c->r[0]); // 801CAB04
  goto L_801CAB70; // 801CAB08
L_801CAB0C:;
  {uint32_t ea=c->r[3]+0x00001F78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAB0C
  {uint32_t ea=c->r[2]+0xFFFFBA48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAB10
  fcmp(c,0,c->f[1],c->f[0]); // 801CAB14
  if (!crb(c,1)) { goto L_801CAB70; } // 801CAB18
  {uint32_t ea=c->r[2]+0xFFFFBA90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAB1C
  c->r[4]=0u+0x00000005u; // 801CAB20
  c->r[5]=0u+0x00000001u; // 801CAB24
  c->lr=0x801CAB2Cu; f_801CAB88(c); // 801CAB28
  c->r[3]=R32(c->r[30]+0x00002668u); // 801CAB2C
  c->r[0]=c->r[3]+0x00000001u; // 801CAB30
  W32(c->r[30]+0x00002668u,c->r[0]); // 801CAB34
  goto L_801CAB70; // 801CAB38
L_801CAB3C:;
  {uint32_t ea=c->r[3]+0x00001F78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAB3C
  {uint32_t ea=c->r[2]+0xFFFFBAFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAB40
  fcmp(c,0,c->f[1],c->f[0]); // 801CAB44
  if (!crb(c,1)) { goto L_801CAB70; } // 801CAB48
  c->lr=0x801CAB50u; f_80061A4C(c); // 801CAB4C
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801CAB50
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAB54
  c->lr=0x801CAB5Cu; f_801DB594(c); // 801CAB58
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAB5C
  c->r[3]=c->r[30]|c->r[30]; // 801CAB60
  c->r[4]=0u+0x00000002u; // 801CAB64
  {uint32_t ea=c->r[30]+0x00001F78u; WF32(ea,c->f[0]);} // 801CAB68
  c->lr=0x801CAB70u; f_801CB0F0(c); // 801CAB6C
L_801CAB70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CAB70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CAB74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CAB78
  c->lr=c->r[0]; // 801CAB7C
  c->r[1]=c->r[1]+0x00000020u; // 801CAB80
  return; // 801CAB84
}

// fn_801CAB88
void f_801CAB88(Ctx* __restrict c) {
  trace_call(0x801CAB88u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAB88
  c->r[0]=c->lr; // 801CAB8C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801CAB90
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 801CAB94
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 801CAB98
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 801CAB9C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 801CABA0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 801CABA4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 801CABA8
  c->r[11]=c->r[1]+0x00000090u; // 801CABAC
  c->lr=0x801CABB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CABB0
  c->r[12]=R32(c->r[3]+0x000008D0u); // 801CABB4
  c->r[0]=0u+0x43300000u; // 801CABB8
  c->r[27]=c->r[3]|c->r[3]; // 801CABBC
  c->r[28]=c->r[4]|c->r[4]; // 801CABC0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CABC4
  c->f[29]=c->f[1]; // 801CABC8
  c->r[4]=c->r[27]+0x000008D0u; // 801CABCC
  c->r[29]=c->r[5]|c->r[5]; // 801CABD0
  c->r[3]=c->r[1]+0x00000038u; // 801CABD4
  W32(c->r[1]+0x00000068u,c->r[0]); // 801CABD8
  W32(c->r[1]+0x00000070u,c->r[0]); // 801CABDC
  c->ctr=c->r[12]; // 801CABE0
  if (true) { c->lr=0x801CABE8u; dispatch(c,c->ctr); } // 801CABE4
  c->r[3]=c->r[1]+0x00000008u; // 801CABE8
  c->r[4]=c->r[1]+0x00000038u; // 801CABEC
  c->lr=0x801CABF4u; f_80032FD8(c); // 801CABF0
  c->lr=0x801CABF8u; f_80061A4C(c); // 801CABF4
  c->r[4]=c->r[1]+0x00000014u; // 801CABF8
  {uint32_t ea=c->r[3]+0x00000384u; psq_load(c,0,ea,0,0);} // 801CABFC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,1,ea,0,0);} // 801CAC00
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CAC04
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 801CAC08
  {uint32_t ea=c->r[3]+0x0000038Cu; psq_load(c,0,ea,1,0);} // 801CAC0C
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,1,ea,1,0);} // 801CAC10
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CAC14
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 801CAC18
  c->r[3]=c->r[1]+0x0000002Cu; // 801CAC1C
  c->lr=0x801CAC24u; f_8003F468(c); // 801CAC20
  c->r[3]=c->r[1]+0x0000002Cu; // 801CAC24
  c->r[4]=c->r[3]|c->r[3]; // 801CAC28
  c->lr=0x801CAC30u; f_80265750(c); // 801CAC2C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CAC30
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAC34
  c->lr=0x801CAC3Cu; f_80394548(c); // 801CAC38
  {uint32_t ea=c->r[2]+0xFFFFBB00u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAC3C
  c->r[0]=rotl(c->r[28],0)&0x000000FEu; // 801CAC40
  c->r[0]=sraw(c,c->r[0],1); // 801CAC44
  {uint32_t ea=c->r[2]+0xFFFFBAB0u; c->f[31]=RF64(ea);} // 801CAC48
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 801CAC4C
  c->r[31]=addc(c,c->r[0],0,c->xer_ca); // 801CAC50
  c->r[30]=0u+0x00000000u; // 801CAC54
  goto L_801CAD28; // 801CAC58
L_801CAC5C:;
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAC5C
  c->r[3]=c->r[1]+0x00000020u; // 801CAC60
  {uint32_t ea=c->r[2]+0xFFFFBA90u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CAC64
  c->f[3]=c->f[1]; // 801CAC68
  c->lr=0x801CAC70u; f_800521A0(c); // 801CAC6C
  cmps(c,0,(int32_t)c->r[29],0); // 801CAC70
  if (crb(c,2)) { goto L_801CACD0; } // 801CAC74
  c->lr=0x801CAC7Cu; f_80291D94(c); // 801CAC78
  c->r[3]=rotl(c->r[3],0)&0x00000003u; // 801CAC7C
  c->r[0]=c->r[30]+0x00000001u; // 801CAC80
  c->r[4]=c->r[3]+0x00000001u; // 801CAC84
  c->r[3]=c->r[30]-c->r[31]; // 801CAC88
  c->r[0]=c->r[0]^0x80000000u; // 801CAC8C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 801CAC90
  W32(c->r[1]+0x00000074u,c->r[0]); // 801CAC94
  c->r[0]=c->r[28]^0x80000000u; // 801CAC98
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 801CAC9C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 801CACA0
  c->r[3]=c->r[3]^0x80000000u; // 801CACA4
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 801CACA8
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801CACAC
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801CACB0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801CACB4
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801CACB8
  c->f[2]=c->ps1[2]=S(c->f[30]+c->f[2]); // 801CACBC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801CACC0
  c->f[0]=c->ps1[0]=S(c->f[29]/c->f[0]); // 801CACC4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[0],c->f[2])); // 801CACC8
  goto L_801CACFC; // 801CACCC
L_801CACD0:;
  c->lr=0x801CACD4u; f_80291D94(c); // 801CACD0
  c->r[3]=rotl(c->r[3],0)&0x00000003u; // 801CACD4
  c->r[0]=c->r[30]-c->r[31]; // 801CACD8
  c->r[3]=c->r[3]+0x00000002u; // 801CACDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801CACE0
  c->r[0]=c->r[0]^0x80000000u; // 801CACE4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801CACE8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=RF64(ea);} // 801CACEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801CACF0
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 801CACF4
  c->f[1]=c->ps1[1]=S(c->f[29]+c->f[0]); // 801CACF8
L_801CACFC:;
  c->r[3]=c->r[27]|c->r[27]; // 801CACFC
  c->r[5]=c->r[29]|c->r[29]; // 801CAD00
  c->r[6]=c->r[30]|c->r[30]; // 801CAD04
  c->r[4]=c->r[1]+0x00000020u; // 801CAD08
  c->lr=0x801CAD10u; f_801CB184(c); // 801CAD0C
  cmps(c,0,(int32_t)c->r[3],0); // 801CAD10
  if (crb(c,2)) { goto L_801CAD24; } // 801CAD14
  c->r[3]=R32(c->r[27]+0x00002714u); // 801CAD18
  c->r[0]=c->r[3]+0x00000001u; // 801CAD1C
  W32(c->r[27]+0x00002714u,c->r[0]); // 801CAD20
L_801CAD24:;
  c->r[30]=c->r[30]+0x00000001u; // 801CAD24
L_801CAD28:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[28]); // 801CAD28
  if (crb(c,0)) { IRQCHK(c); goto L_801CAC5C; } // 801CAD2C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 801CAD30
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 801CAD34
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 801CAD38
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 801CAD3C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 801CAD40
  c->r[11]=c->r[1]+0x00000090u; // 801CAD44
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 801CAD48
  c->lr=0x801CAD50u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CAD4C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801CAD50
  c->lr=c->r[0]; // 801CAD54
  c->r[1]=c->r[1]+0x000000C0u; // 801CAD58
  return; // 801CAD5C
}

// fn_801CAD60
void f_801CAD60(Ctx* __restrict c) {
  trace_call(0x801CAD60u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAD60
  c->r[0]=c->lr; // 801CAD64
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CAD68
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CAD6C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CAD70
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801CAD74
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801CAD78
  c->r[11]=c->r[1]+0x00000020u; // 801CAD7C
  c->lr=0x801CAD84u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CAD80
  c->r[0]=R32(c->r[3]+0x00002668u); // 801CAD84
  c->r[31]=c->r[3]|c->r[3]; // 801CAD88
  cmps(c,0,(int32_t)c->r[0],2); // 801CAD8C
  if (crb(c,2)) { goto L_801CAF54; } // 801CAD90
  if (!crb(c,0)) { goto L_801CADA4; } // 801CAD94
  cmps(c,0,(int32_t)c->r[0],1); // 801CAD98
  if (!crb(c,0)) { goto L_801CADB0; } // 801CAD9C
  goto L_801CAFB0; // 801CADA0
L_801CADA4:;
  cmps(c,0,(int32_t)c->r[0],4); // 801CADA4
  if (!crb(c,0)) { goto L_801CAFB0; } // 801CADA8
  goto L_801CAFA0; // 801CADAC
L_801CADB0:;
  c->lr=0x801CADB4u; f_80291D94(c); // 801CADB0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CADB4
  cmps(c,0,(int32_t)c->r[0],127); // 801CADB8
  if (!crb(c,1)) { goto L_801CAE28; } // 801CADBC
  c->lr=0x801CADC4u; f_80291D94(c); // 801CADC0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CADC4
  if (crb(c,2)) { goto L_801CADF4; } // 801CADC8
  c->r[3]=c->r[31]|c->r[31]; // 801CADCC
  c->r[4]=0u+0x00000009u; // 801CADD0
  c->r[5]=0u+0x00000000u; // 801CADD4
  c->lr=0x801CADDCu; f_801CB86C(c); // 801CADD8
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CADDC
  c->r[3]=c->r[31]|c->r[31]; // 801CADE0
  c->r[4]=0u+0x00000009u; // 801CADE4
  c->r[5]=0u+0x00000000u; // 801CADE8
  c->lr=0x801CADF0u; f_801C8C08(c); // 801CADEC
  goto L_801CAE18; // 801CADF0
L_801CADF4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CADF4
  c->r[4]=0u+0x0000000Au; // 801CADF8
  c->r[5]=0u+0x00000000u; // 801CADFC
  c->lr=0x801CAE04u; f_801CB86C(c); // 801CAE00
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAE04
  c->r[3]=c->r[31]|c->r[31]; // 801CAE08
  c->r[4]=0u+0x0000000Au; // 801CAE0C
  c->r[5]=0u+0x00000000u; // 801CAE10
  c->lr=0x801CAE18u; f_801C8C08(c); // 801CAE14
L_801CAE18:;
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CAE18
  c->r[0]=c->r[3]+0x00000001u; // 801CAE1C
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CAE20
  goto L_801CAFB0; // 801CAE24
L_801CAE28:;
  c->lr=0x801CAE2Cu; f_80291D94(c); // 801CAE28
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CAE2C
  if (crb(c,2)) { goto L_801CAE70; } // 801CAE30
  c->lr=0x801CAE38u; f_80291D94(c); // 801CAE34
  c->r[3]=c->r[3]^0x80000000u; // 801CAE38
  c->r[0]=0u+0x43300000u; // 801CAE3C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CAE40
  {uint32_t ea=c->r[2]+0xFFFFBAB0u; c->f[3]=RF64(ea);} // 801CAE44
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CAE48
  {uint32_t ea=c->r[2]+0xFFFFBAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CAE4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CAE50
  {uint32_t ea=c->r[2]+0xFFFFBA94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAE54
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801CAE58
  {uint32_t ea=c->r[2]+0xFFFFBA60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAE5C
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[30]=c->ps1[30]=RF32(ea);} // 801CAE60
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801CAE64
  c->f[31]=c->ps1[31]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801CAE68
  goto L_801CAEA8; // 801CAE6C
L_801CAE70:;
  c->lr=0x801CAE74u; f_80291D94(c); // 801CAE70
  c->r[3]=c->r[3]^0x80000000u; // 801CAE74
  c->r[0]=0u+0x43300000u; // 801CAE78
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CAE7C
  {uint32_t ea=c->r[2]+0xFFFFBAB0u; c->f[3]=RF64(ea);} // 801CAE80
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CAE84
  {uint32_t ea=c->r[2]+0xFFFFBAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CAE88
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CAE8C
  {uint32_t ea=c->r[2]+0xFFFFBA94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAE90
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801CAE94
  {uint32_t ea=c->r[2]+0xFFFFBA60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAE98
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CAE9C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801CAEA0
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801CAEA4
L_801CAEA8:;
  fcmp(c,0,c->f[31],c->f[30]); // 801CAEA8
  c->r[0]=0u+0x00000001u; // 801CAEAC
  W8(c->r[31]+0x00001F62u,c->r[0]); // 801CAEB0
  c->r[30]=0u+0x00000001u; // 801CAEB4
  c->r[29]=0u+0x00000001u; // 801CAEB8
  c->r[0]=c->cr; // 801CAEBC
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 801CAEC0
  if (crb(c,2)) { goto L_801CAECC; } // 801CAEC4
  c->r[29]=0u+0x00000000u; // 801CAEC8
L_801CAECC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CAECC
  if (!crb(c,2)) { goto L_801CAED8; } // 801CAED0
  c->r[30]=0u+0x00000000u; // 801CAED4
L_801CAED8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CAED8
  c->r[4]=0u+0x00000009u; // 801CAEDC
  c->lr=0x801CAEE4u; f_801C8B94(c); // 801CAEE0
  cmps(c,0,(int32_t)c->r[3],0); // 801CAEE4
  if (crb(c,2)) { goto L_801CAF00; } // 801CAEE8
  c->r[3]=c->r[31]|c->r[31]; // 801CAEEC
  c->r[4]=0u+0x0000000Au; // 801CAEF0
  c->lr=0x801CAEF8u; f_801C8B94(c); // 801CAEF4
  cmps(c,0,(int32_t)c->r[3],0); // 801CAEF8
  if (!crb(c,2)) { goto L_801CAF0C; } // 801CAEFC
L_801CAF00:;
  c->r[30]=0u+0x00000000u; // 801CAF00
  c->r[29]=0u+0x00000000u; // 801CAF04
  W8(c->r[31]+0x00001F62u,c->r[30]); // 801CAF08
L_801CAF0C:;
  c->f[1]=c->f[31]; // 801CAF0C
  c->r[3]=c->r[31]|c->r[31]; // 801CAF10
  c->r[5]=c->r[30]|c->r[30]; // 801CAF14
  c->r[4]=0u+0x00000009u; // 801CAF18
  c->lr=0x801CAF20u; f_801C8C08(c); // 801CAF1C
  c->f[1]=c->f[30]; // 801CAF20
  c->r[3]=c->r[31]|c->r[31]; // 801CAF24
  c->r[5]=c->r[29]|c->r[29]; // 801CAF28
  c->r[4]=0u+0x0000000Au; // 801CAF2C
  c->lr=0x801CAF34u; f_801C8C08(c); // 801CAF30
  c->r[3]=c->r[31]|c->r[31]; // 801CAF34
  c->r[4]=0u+0x00000009u; // 801CAF38
  c->r[5]=0u+0x0000000Au; // 801CAF3C
  c->lr=0x801CAF44u; f_801CB86C(c); // 801CAF40
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CAF44
  c->r[0]=c->r[3]+0x00000001u; // 801CAF48
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CAF4C
  goto L_801CAFB0; // 801CAF50
L_801CAF54:;
  c->lr=0x801CAF58u; f_801CBAE0(c); // 801CAF54
  c->r[3]=c->r[31]|c->r[31]; // 801CAF58
  c->r[4]=0u+0x00000009u; // 801CAF5C
  c->lr=0x801CAF64u; f_801C8EAC(c); // 801CAF60
  cmps(c,0,(int32_t)c->r[3],0); // 801CAF64
  if (crb(c,2)) { goto L_801CAFB0; } // 801CAF68
  c->r[3]=c->r[31]|c->r[31]; // 801CAF6C
  c->r[4]=0u+0x0000000Au; // 801CAF70
  c->lr=0x801CAF78u; f_801C8EAC(c); // 801CAF74
  cmps(c,0,(int32_t)c->r[3],0); // 801CAF78
  if (crb(c,2)) { goto L_801CAFB0; } // 801CAF7C
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAF80
  c->r[3]=c->r[31]|c->r[31]; // 801CAF84
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CAF88
  c->lr=0x801CAF90u; f_801CBD10(c); // 801CAF8C
  c->r[3]=R32(c->r[31]+0x00002668u); // 801CAF90
  c->r[0]=c->r[3]+0x00000001u; // 801CAF94
  W32(c->r[31]+0x00002668u,c->r[0]); // 801CAF98
  goto L_801CAFB0; // 801CAF9C
L_801CAFA0:;
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAFA0
  c->r[4]=0u+0x00000001u; // 801CAFA4
  {uint32_t ea=c->r[3]+0x00001F78u; WF32(ea,c->f[0]);} // 801CAFA8
  c->lr=0x801CAFB0u; f_801CB0F0(c); // 801CAFAC
L_801CAFB0:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CAFB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CAFB4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801CAFB8
  c->r[11]=c->r[1]+0x00000020u; // 801CAFBC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801CAFC0
  c->lr=0x801CAFC8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CAFC4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CAFC8
  c->lr=c->r[0]; // 801CAFCC
  c->r[1]=c->r[1]+0x00000040u; // 801CAFD0
  return; // 801CAFD4
}

// fn_801CAFD8
void f_801CAFD8(Ctx* __restrict c) {
  trace_call(0x801CAFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAFD8
  c->r[0]=c->lr; // 801CAFDC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CAFE0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CAFE4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CAFE8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801CAFEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801CAFF0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 801CAFF4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 801CAFF8
  c->f[29]=c->f[1]; // 801CAFFC
  c->f[30]=c->f[2]; // 801CB000
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB004
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CB008
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB00C
  c->r[30]=c->r[3]|c->r[3]; // 801CB010
  c->r[5]=R32(c->r[3]+0x00000974u); // 801CB014
  c->r[3]=R32(c->r[5]+c->r[31]); // 801CB018
  c->lr=0x801CB020u; f_800752CC(c); // 801CB01C
  c->r[3]=R32(c->r[30]+0x00000974u); // 801CB020
  c->f[31]=c->f[1]; // 801CB024
  c->r[3]=R32(c->r[3]+c->r[31]); // 801CB028
  c->lr=0x801CB030u; f_801652C0(c); // 801CB02C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[29]); // 801CB030
  fcmp(c,0,c->f[31],c->f[0]); // 801CB034
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CB038
  if (!crb(c,2)) { goto L_801CB058; } // 801CB03C
  c->r[3]=R32(c->r[30]+0x00000974u); // 801CB040
  c->f[1]=c->f[30]; // 801CB044
  c->r[3]=R32(c->r[3]+c->r[31]); // 801CB048
  c->lr=0x801CB050u; f_8016543C(c); // 801CB04C
  c->r[3]=0u+0x00000001u; // 801CB050
  goto L_801CB05C; // 801CB054
L_801CB058:;
  c->r[3]=0u+0x00000000u; // 801CB058
L_801CB05C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CB05C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CB060
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801CB064
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801CB068
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 801CB06C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 801CB070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB074
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CB078
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB07C
  c->lr=c->r[0]; // 801CB080
  c->r[1]=c->r[1]+0x00000040u; // 801CB084
  return; // 801CB088
}

// fn_801CB08C
void f_801CB08C(Ctx* __restrict c) {
  trace_call(0x801CB08Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB08C
  c->r[0]=c->lr; // 801CB090
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB098
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB09C
  c->r[30]=c->r[3]|c->r[3]; // 801CB0A0
  c->lr=0x801CB0A8u; f_80061A4C(c); // 801CB0A4
  c->r[31]=c->r[3]+0x00000384u; // 801CB0A8
  c->r[3]=c->r[30]+0x000026ACu; // 801CB0AC
  c->r[4]=c->r[31]|c->r[31]; // 801CB0B0
  c->lr=0x801CB0B8u; f_8003F468(c); // 801CB0B4
  c->r[3]=c->r[30]+0x000026B8u; // 801CB0B8
  c->r[4]=c->r[31]+0x0000000Cu; // 801CB0BC
  c->lr=0x801CB0C4u; f_8003F468(c); // 801CB0C0
  c->r[3]=c->r[30]+0x000026C4u; // 801CB0C4
  c->r[4]=c->r[31]+0x00000018u; // 801CB0C8
  c->lr=0x801CB0D0u; f_8003F468(c); // 801CB0CC
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB0D0
  {uint32_t ea=c->r[30]+0x000026D0u; WF32(ea,c->f[0]);} // 801CB0D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB0D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB0DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB0E0
  c->lr=c->r[0]; // 801CB0E4
  c->r[1]=c->r[1]+0x00000010u; // 801CB0E8
  return; // 801CB0EC
}

// fn_801CB0F0
void f_801CB0F0(Ctx* __restrict c) {
  trace_call(0x801CB0F0u);
  cmps(c,0,(int32_t)c->r[4],1); // 801CB0F0
  if (!crb(c,2)) { goto L_801CB144; } // 801CB0F4
  c->r[0]=R32(c->r[3]+0x0000270Cu); // 801CB0F8
  cmps(c,0,(int32_t)c->r[0],2); // 801CB0FC
  if (crb(c,2)) { goto L_801CB120; } // 801CB100
  if (!crb(c,0)) { goto L_801CB110; } // 801CB104
  cmps(c,0,(int32_t)c->r[0],1); // 801CB108
  if (!crb(c,0)) { goto L_801CB118; } // 801CB10C
L_801CB110:;
  c->r[4]=0u+0x00000009u; // 801CB110
  goto L_801CB124; // 801CB114
L_801CB118:;
  c->r[4]=0u+0x00000008u; // 801CB118
  goto L_801CB124; // 801CB11C
L_801CB120:;
  c->r[4]=0u+0x00000008u; // 801CB120
L_801CB124:;
  c->r[5]=R32(c->r[3]+0x0000270Cu); // 801CB124
  c->r[0]=c->r[5]+0x00000001u; // 801CB128
  cmps(c,0,(int32_t)c->r[0],1); // 801CB12C
  W32(c->r[3]+0x0000270Cu,c->r[0]); // 801CB130
  if (!crb(c,1)) { goto L_801CB170; } // 801CB134
  c->r[0]=0u+0x00000000u; // 801CB138
  W32(c->r[3]+0x0000270Cu,c->r[0]); // 801CB13C
  goto L_801CB170; // 801CB140
L_801CB144:;
  cmps(c,0,(int32_t)c->r[4],2); // 801CB144
  if (!crb(c,2)) { goto L_801CB170; } // 801CB148
  c->r[0]=R8(c->r[3]+0x00001F61u); // 801CB14C
  cmpu(c,0,c->r[0],0x00000001u); // 801CB150
  if (!crb(c,2)) { goto L_801CB168; } // 801CB154
  c->r[0]=0u+0x00000000u; // 801CB158
  c->r[4]=0u+0x00000004u; // 801CB15C
  W8(c->r[3]+0x00001F61u,c->r[0]); // 801CB160
  goto L_801CB170; // 801CB164
L_801CB168:;
  c->r[0]=0u+0x00000001u; // 801CB168
  W8(c->r[3]+0x00001F61u,c->r[0]); // 801CB16C
L_801CB170:;
  c->r[0]=0u+0x00000001u; // 801CB170
  W32(c->r[3]+0x00002664u,c->r[4]); // 801CB174
  W32(c->r[3]+0x00002668u,c->r[0]); // 801CB178
  return; // 801CB17C
}

// fn_801CB180
void f_801CB180(Ctx* __restrict c) {
  trace_call(0x801CB180u);
  return; // 801CB180
}

// fn_801CB184
void f_801CB184(Ctx* __restrict c) {
  trace_call(0x801CB184u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB184
  c->r[0]=c->lr; // 801CB188
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801CB18C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 801CB190
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 801CB194
  c->r[11]=c->r[1]+0x000000B0u; // 801CB198
  c->lr=0x801CB1A0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB19C
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CB1A0
  c->f[31]=c->f[1]; // 801CB1A4
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB1A8
  c->r[29]=c->r[3]|c->r[3]; // 801CB1AC
  c->r[28]=c->r[4]|c->r[4]; // 801CB1B0
  c->r[26]=c->r[5]|c->r[5]; // 801CB1B4
  fcmp(c,0,c->f[2],c->f[0]); // 801CB1B8
  c->r[25]=c->r[6]|c->r[6]; // 801CB1BC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CB1C0
  if (!crb(c,2)) { goto L_801CB1D0; } // 801CB1C4
  c->r[3]=0u+0x00000000u; // 801CB1C8
  goto L_801CB39C; // 801CB1CC
L_801CB1D0:;
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801CB1D0
  c->r[27]=0u+0x803E0000u; // 801CB1D4
  c->r[27]=c->r[27]+0x00000DB8u; // 801CB1D8
  c->r[4]=c->r[29]+0x000008D0u; // 801CB1DC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CB1E0
  c->r[24]=c->r[27]+0x00000030u; // 801CB1E4
  c->r[3]=c->r[1]+0x0000005Cu; // 801CB1E8
  c->ctr=c->r[12]; // 801CB1EC
  if (true) { c->lr=0x801CB1F4u; dispatch(c,c->ctr); } // 801CB1F0
  c->r[4]=c->r[28]|c->r[28]; // 801CB1F4
  c->r[3]=c->r[1]+0x0000005Cu; // 801CB1F8
  c->lr=0x801CB200u; f_80032FF4(c); // 801CB1FC
  c->r[0]=0u+0x00000000u; // 801CB200
  c->r[7]=c->r[24]|c->r[24]; // 801CB204
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CB208
  c->r[3]=c->r[27]+0x00000031u; // 801CB20C
  c->r[4]=c->r[27]+0x00000036u; // 801CB210
  c->r[5]=c->r[1]+0x0000005Cu; // 801CB214
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CB218
  c->r[8]=0u+0x00000000u; // 801CB21C
  c->r[9]=0u+0x00000000u; // 801CB220
  c->r[10]=0u+0x00000000u; // 801CB224
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CB228
  c->r[6]=R32(c->r[29]+0x00002AF4u); // 801CB22C
  c->lr=0x801CB234u; f_800D9954(c); // 801CB230
  cmps(c,0,(int32_t)c->r[3],0); // 801CB234
  c->r[24]=c->r[3]|c->r[3]; // 801CB238
  if (crb(c,2)) { goto L_801CB398; } // 801CB23C
  c->f[1]=c->f[31]; // 801CB240
  c->r[4]=R32(c->r[29]+0x000004C0u); // 801CB244
  {uint32_t ea=c->r[29]+0x000026E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CB248
  c->r[5]=c->r[26]|c->r[26]; // 801CB24C
  {uint32_t ea=c->r[29]+0x000026ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CB250
  c->r[6]=c->r[25]|c->r[25]; // 801CB254
  c->lr=0x801CB25Cu; f_8024D01C(c); // 801CB258
  c->r[3]=R32(c->r[29]+0x000004C0u); // 801CB25C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801CB260
  if (!crb(c,0)) { goto L_801CB26C; } // 801CB264
  c->r[0]=0u+0x00000000u; // 801CB268
L_801CB26C:;
  W32(c->r[24]+0x000004C0u,c->r[0]); // 801CB26C
  c->r[0]=0u+0x00000000u; // 801CB270
  W8(c->r[24]+0x000004ACu,c->r[0]); // 801CB274
  c->lr=0x801CB27Cu; f_8004FBE8(c); // 801CB278
  c->r[4]=c->r[3]+0x00010000u; // 801CB27C
  c->r[0]=R32(c->r[4]+0xFFFF8318u); // 801CB280
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6700); // 801CB284
  c->r[3]=c->r[3]+c->r[0]; // 801CB288
  c->r[3]=c->r[3]+0x00000008u; // 801CB28C
  c->lr=0x801CB294u; f_80051534(c); // 801CB290
  c->r[12]=R32(c->r[24]+0x00000010u); // 801CB294
  c->r[25]=c->r[3]|c->r[3]; // 801CB298
  c->r[3]=c->r[24]|c->r[24]; // 801CB29C
  c->r[12]=R32(c->r[12]+0x00000338u); // 801CB2A0
  c->ctr=c->r[12]; // 801CB2A4
  if (true) { c->lr=0x801CB2ACu; dispatch(c,c->ctr); } // 801CB2A8
  c->r[26]=R32(c->r[3]+0x00000008u); // 801CB2AC
  c->r[24]=0u+0x00000000u; // 801CB2B0
  c->r[28]=0u+0x803F0000u; // 801CB2B4
  c->r[29]=0u+0x803F0000u; // 801CB2B8
  c->r[30]=0u+0x803F0000u; // 801CB2BC
  c->r[31]=0u+0x803F0000u; // 801CB2C0
  goto L_801CB378; // 801CB2C4
L_801CB2C8:;
  c->r[4]=c->r[26]|c->r[26]; // 801CB2C8
  c->r[5]=c->r[24]|c->r[24]; // 801CB2CC
  c->r[3]=c->r[1]+0x00000028u; // 801CB2D0
  c->lr=0x801CB2D8u; f_80385274(c); // 801CB2D4
  c->r[3]=c->r[1]+0x00000028u; // 801CB2D8
  c->r[4]=0u+0x00000000u; // 801CB2DC
  c->lr=0x801CB2E4u; f_8038519C(c); // 801CB2E0
  W32(c->r[1]+0x00000018u,c->r[3]); // 801CB2E4
  c->r[4]=c->r[24]|c->r[24]; // 801CB2E8
  c->r[3]=c->r[1]+0x00000020u; // 801CB2EC
  c->r[0]=R32(c->r[26]+0x000000E8u); // 801CB2F0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CB2F4
  c->lr=0x801CB2FCu; f_803661F8(c); // 801CB2F8
  cmps(c,0,(int32_t)c->r[3],0); // 801CB2FC
  c->r[27]=c->r[3]|c->r[3]; // 801CB300
  if (!crb(c,2)) { goto L_801CB324; } // 801CB304
  c->r[3]=c->r[28]+0x000015B0u; // 801CB308
  c->r[5]=c->r[29]+0x00001594u; // 801CB30C
  c->r[4]=0u+0x00000239u; // 801CB310
  c->r[6]=c->r[13]+0xFFFF8038u; // 801CB314
  c->r[7]=c->r[13]+0xFFFF8814u; // 801CB318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB31C
  c->lr=0x801CB324u; f_803444BC(c); // 801CB320
L_801CB324:;
  c->r[27]=c->r[27]+0x0000001Cu; // 801CB324
  c->r[0]=rotl(c->r[27],0)&0x00000003u; cr0(c,c->r[0]); // 801CB328
  if (crb(c,2)) { goto L_801CB344; } // 801CB32C
  c->r[3]=c->r[30]+0x000039C0u; // 801CB330
  c->r[5]=c->r[31]+0x00003998u; // 801CB334
  c->r[4]=0u+0x000000F3u; // 801CB338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB33C
  c->lr=0x801CB344u; f_803444BC(c); // 801CB340
L_801CB344:;
  W32(c->r[1]+0x0000001Cu,c->r[27]); // 801CB344
  c->r[3]=c->r[1]+0x0000001Cu; // 801CB348
  c->lr=0x801CB350u; f_80367660(c); // 801CB34C
  cmps(c,0,(int32_t)c->r[3],0); // 801CB350
  if (crb(c,0)) { goto L_801CB368; } // 801CB354
  c->r[4]=c->r[25]|c->r[25]; // 801CB358
  c->r[3]=c->r[1]+0x00000018u; // 801CB35C
  c->lr=0x801CB364u; f_8036764C(c); // 801CB360
  goto L_801CB374; // 801CB364
L_801CB368:;
  c->r[4]=c->r[3]|c->r[3]; // 801CB368
  c->r[3]=c->r[1]+0x00000018u; // 801CB36C
  c->lr=0x801CB374u; f_8036764C(c); // 801CB370
L_801CB374:;
  c->r[24]=c->r[24]+0x00000001u; // 801CB374
L_801CB378:;
  c->r[0]=R32(c->r[26]+0x000000E8u); // 801CB378
  c->r[3]=c->r[1]+0x00000024u; // 801CB37C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB380
  c->lr=0x801CB388u; f_8036624C(c); // 801CB384
  cmpu(c,0,c->r[24],c->r[3]); // 801CB388
  if (crb(c,0)) { IRQCHK(c); goto L_801CB2C8; } // 801CB38C
  c->r[3]=0u+0x00000001u; // 801CB390
  goto L_801CB39C; // 801CB394
L_801CB398:;
  c->r[3]=0u+0x00000000u; // 801CB398
L_801CB39C:;
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 801CB39C
  c->r[11]=c->r[1]+0x000000B0u; // 801CB3A0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 801CB3A4
  c->lr=0x801CB3ACu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB3A8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801CB3AC
  c->lr=c->r[0]; // 801CB3B0
  c->r[1]=c->r[1]+0x000000C0u; // 801CB3B4
  return; // 801CB3B8
}

// fn_801CB3BC
void f_801CB3BC(Ctx* __restrict c) {
  trace_call(0x801CB3BCu);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB3BC
  c->r[0]=c->lr; // 801CB3C0
  W32(c->r[1]+0x00000174u,c->r[0]); // 801CB3C4
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[31]);} // 801CB3C8
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,31,ea,0,0);} // 801CB3CC
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[30]);} // 801CB3D0
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,30,ea,0,0);} // 801CB3D4
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[29]);} // 801CB3D8
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,29,ea,0,0);} // 801CB3DC
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[28]);} // 801CB3E0
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,28,ea,0,0);} // 801CB3E4
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[27]);} // 801CB3E8
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,27,ea,0,0);} // 801CB3EC
  c->r[11]=c->r[1]+0x00000120u; // 801CB3F0
  c->lr=0x801CB3F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB3F4
  c->r[26]=c->r[3]|c->r[3]; // 801CB3F8
  c->lr=0x801CB400u; f_80291D94(c); // 801CB3FC
  c->r[12]=R32(c->r[26]+0x000008D0u); // 801CB400
  c->r[28]=c->r[3]&0x0000000Au; cr0(c,c->r[28]); // 801CB404
  c->r[4]=c->r[26]+0x000008D0u; // 801CB408
  c->r[3]=c->r[1]+0x00000050u; // 801CB40C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801CB410
  c->ctr=c->r[12]; // 801CB414
  if (true) { c->lr=0x801CB41Cu; dispatch(c,c->ctr); } // 801CB418
  c->r[3]=c->r[1]+0x00000014u; // 801CB41C
  c->r[4]=c->r[1]+0x00000050u; // 801CB420
  c->lr=0x801CB428u; f_80032FD8(c); // 801CB424
  c->r[29]=0u+0x803E0000u; // 801CB428
  {uint32_t ea=c->r[2]+0xFFFFBAB0u; c->f[27]=RF64(ea);} // 801CB42C
  {uint32_t ea=c->r[2]+0xFFFFBAACu; c->f[28]=c->ps1[28]=RF32(ea);} // 801CB430
  c->r[29]=c->r[29]+0x00000DB8u; // 801CB434
  {uint32_t ea=c->r[2]+0xFFFFBB04u; c->f[29]=c->ps1[29]=RF32(ea);} // 801CB438
  c->r[27]=0u+0x00000000u; // 801CB43C
  {uint32_t ea=c->r[2]+0xFFFFBA6Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801CB440
  c->r[30]=0u+0x43300000u; // 801CB444
  {uint32_t ea=c->r[2]+0xFFFFBB08u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CB448
  c->r[31]=0u+0x00000006u; // 801CB44C
  goto L_801CB548; // 801CB450
L_801CB454:;
  c->lr=0x801CB458u; f_80051FF4(c); // 801CB454
  c->r[4]=c->r[3]|c->r[3]; // 801CB458
  c->r[3]=c->r[1]+0x000000B0u; // 801CB45C
  c->r[5]=c->r[29]+0x00000041u; // 801CB460
  c->r[6]=0u+0x00000001u; // 801CB464
  c->lr=0x801CB46Cu; f_8013DB40(c); // 801CB468
  c->r[3]=c->r[1]+0x00000080u; // 801CB46C
  c->lr=0x801CB474u; f_80264680(c); // 801CB470
  c->r[3]=c->r[1]+0x000000B0u; // 801CB474
  c->lr=0x801CB47Cu; f_80146F08(c); // 801CB478
  cmps(c,0,(int32_t)c->r[3],0); // 801CB47C
  if (crb(c,2)) { goto L_801CB544; } // 801CB480
  c->r[12]=R32(c->r[26]+0x000008D0u); // 801CB484
  c->r[4]=c->r[26]+0x000008D0u; // 801CB488
  c->r[3]=c->r[1]+0x00000020u; // 801CB48C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801CB490
  c->ctr=c->r[12]; // 801CB494
  if (true) { c->lr=0x801CB49Cu; dispatch(c,c->ctr); } // 801CB498
  c->r[3]=c->r[1]+0x00000008u; // 801CB49C
  c->r[4]=c->r[1]+0x00000020u; // 801CB4A0
  c->lr=0x801CB4A8u; f_80032FD8(c); // 801CB4A4
  c->r[3]=c->r[1]+0x00000014u; // 801CB4A8
  c->r[4]=c->r[1]+0x00000008u; // 801CB4AC
  c->lr=0x801CB4B4u; f_8003F468(c); // 801CB4B0
  c->lr=0x801CB4B8u; f_80291D94(c); // 801CB4B4
  c->r[0]=c->r[3]^0x80000000u; // 801CB4B8
  W32(c->r[1]+0x000000F8u,c->r[30]); // 801CB4BC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB4C0
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801CB4C4
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=RF64(ea);} // 801CB4C8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 801CB4CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[27]); // 801CB4D0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[28]); // 801CB4D4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[29],c->f[1],-c->f[30])); // 801CB4D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801CB4DC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801CB4E0
  c->lr=0x801CB4E8u; f_80291D94(c); // 801CB4E4
  c->r[0]=c->r[3]^0x80000000u; // 801CB4E8
  W32(c->r[1]+0x00000100u,c->r[30]); // 801CB4EC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB4F0
  c->r[3]=c->r[1]+0x00000080u; // 801CB4F4
  W32(c->r[1]+0x00000104u,c->r[0]); // 801CB4F8
  c->r[4]=c->r[1]+0x00000014u; // 801CB4FC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=RF64(ea);} // 801CB500
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[27]); // 801CB504
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[28]); // 801CB508
  c->f[1]=c->ps1[1]=S(std::fma(c->f[29],c->f[1],-c->f[30])); // 801CB50C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801CB510
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CB514
  c->lr=0x801CB51Cu; f_80032FF4(c); // 801CB518
  c->r[5]=c->r[1]+0x000000ACu; // 801CB51C
  c->r[4]=c->r[1]+0x0000007Cu; // 801CB520
  c->ctr=c->r[31]; // 801CB524
L_801CB528:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801CB528
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801CB52C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CB530
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801CB534
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB528; } // 801CB538
  c->r[3]=c->r[1]+0x000000B0u; // 801CB53C
  c->lr=0x801CB544u; f_80146A94(c); // 801CB540
L_801CB544:;
  c->r[27]=c->r[27]+0x00000001u; // 801CB544
L_801CB548:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 801CB548
  if (crb(c,0)) { IRQCHK(c); goto L_801CB454; } // 801CB54C
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,31,ea,0,0);} // 801CB550
  {uint32_t ea=c->r[1]+0x00000160u; c->f[31]=RF64(ea);} // 801CB554
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,30,ea,0,0);} // 801CB558
  {uint32_t ea=c->r[1]+0x00000150u; c->f[30]=RF64(ea);} // 801CB55C
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,29,ea,0,0);} // 801CB560
  {uint32_t ea=c->r[1]+0x00000140u; c->f[29]=RF64(ea);} // 801CB564
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,28,ea,0,0);} // 801CB568
  {uint32_t ea=c->r[1]+0x00000130u; c->f[28]=RF64(ea);} // 801CB56C
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,27,ea,0,0);} // 801CB570
  c->r[11]=c->r[1]+0x00000120u; // 801CB574
  {uint32_t ea=c->r[1]+0x00000120u; c->f[27]=RF64(ea);} // 801CB578
  c->lr=0x801CB580u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB57C
  c->r[0]=R32(c->r[1]+0x00000174u); // 801CB580
  c->lr=c->r[0]; // 801CB584
  c->r[1]=c->r[1]+0x00000170u; // 801CB588
  return; // 801CB58C
}

// fn_801CB590
void f_801CB590(Ctx* __restrict c) {
  trace_call(0x801CB590u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB590
  c->r[0]=c->lr; // 801CB594
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801CB598
  {uint32_t ea=c->r[1]+0x00000094u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801CB59C
  c->r[31]=c->r[1]|c->r[1]; // 801CB5A0
  c->lr=0x801CB5A8u; f_8003DA30(c); // 801CB5A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CB5A8
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801CB5AC
  W32(c->r[31]+0x00000028u,c->r[0]); // 801CB5B0
  W32(c->r[31]+0x00000024u,c->r[0]); // 801CB5B4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801CB5B8
  W32(c->r[31]+0x00000034u,c->r[0]); // 801CB5BC
  goto L_801CB708; // 801CB5C0
L_801CB5C4:;
  c->r[3]=R32(c->r[31]+0x00000034u); // 801CB5C4
  c->r[30]=c->r[3]+0xFFFFFFF8u; // 801CB5C8
  c->r[12]=R32(c->r[30]+0x00000010u); // 801CB5CC
  c->r[3]=c->r[30]|c->r[30]; // 801CB5D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CB5D4
  c->ctr=c->r[12]; // 801CB5D8
  if (true) { c->lr=0x801CB5E0u; dispatch(c,c->ctr); } // 801CB5DC
  c->r[0]=c->r[4]+0x20000000u; // 801CB5E0
  W32(c->r[31]+0x00000044u,c->r[4]); // 801CB5E4
  cmpu(c,0,c->r[0],0x00000033u); // 801CB5E8
  W32(c->r[31]+0x00000040u,c->r[3]); // 801CB5EC
  if (!crb(c,2)) { goto L_801CB5FC; } // 801CB5F0
  c->r[0]=0u+0x00000001u; // 801CB5F4
  goto L_801CB630; // 801CB5F8
L_801CB5FC:;
  c->r[5]=rotl(c->r[4],0)&0xFFFF0000u; // 801CB5FC
  c->r[4]=0u+0x00000000u; // 801CB600
  goto L_801CB60C; // 801CB604
L_801CB608:;
  c->r[4]=c->r[4]+0x00000001u; // 801CB608
L_801CB60C:;
  c->r[0]=0u+0x00000001u; // 801CB60C
  c->r[3]=0u+0xE0000000u; // 801CB610
  c->r[6]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 801CB614
  c->r[0]=c->r[3]+0x00000033u; // 801CB618
  c->r[0]=c->r[6]&c->r[0]; cr0(c,c->r[0]); // 801CB61C
  if (crb(c,2)) { IRQCHK(c); goto L_801CB608; } // 801CB620
  c->r[3]=c->r[5]&c->r[6]; // 801CB624
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801CB628
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801CB62C
L_801CB630:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CB630
  if (crb(c,2)) { goto L_801CB6FC; } // 801CB634
  c->r[3]=c->r[31]+0x00000048u; // 801CB638
  c->lr=0x801CB640u; f_800CDFD0(c); // 801CB63C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801CB640
  c->r[29]=0u+0x00000000u; // 801CB644
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CB648
  cmps(c,0,(int32_t)c->r[3],0); // 801CB64C
  W32(c->r[31]+0x00000038u,c->r[3]); // 801CB650
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 801CB654
  if (crb(c,2)) { goto L_801CB680; } // 801CB658
  c->lr=0x801CB660u; f_8003F2FC(c); // 801CB65C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801CB660
  c->r[4]=R32(c->r[31]+0x00000038u); // 801CB664
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CB668
  c->r[3]=c->r[3]+c->r[0]; // 801CB66C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CB670
  cmpu(c,0,c->r[4],c->r[0]); // 801CB674
  if (!crb(c,2)) { goto L_801CB680; } // 801CB678
  c->r[29]=0u+0x00000001u; // 801CB67C
L_801CB680:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CB680
  if (crb(c,2)) { goto L_801CB6FC; } // 801CB684
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 801CB688
  c->lr=0x801CB690u; f_802A6EE4(c); // 801CB68C
  cmps(c,0,(int32_t)c->r[3],0); // 801CB690
  c->r[29]=c->r[3]|c->r[3]; // 801CB694
  if (crb(c,2)) { goto L_801CB6FC; } // 801CB698
  if (crb(c,2)) { goto L_801CB6A8; } // 801CB69C
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 801CB6A0
  c->lr=0x801CB6A8u; f_800CDFD0(c); // 801CB6A4
L_801CB6A8:;
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 801CB6A8
  c->r[30]=addc(c,c->r[29],0x00000010u,0); cr0(c,c->r[30]); // 801CB6AC
  c->r[0]=R32(c->r[31]+0x00000050u); // 801CB6B0
  W32(c->r[29]+0x00000004u,c->r[3]); // 801CB6B4
  W32(c->r[29]+0x00000008u,c->r[0]); // 801CB6B8
  c->r[0]=R32(c->r[31]+0x00000054u); // 801CB6BC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801CB6C0
  if (crb(c,2)) { goto L_801CB6DC; } // 801CB6C4
  c->r[0]=0u+0x00000000u; // 801CB6C8
  W32(c->r[31]+0x00000084u,c->r[1]); // 801CB6CC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801CB6D0
  W32(c->r[30]+0x00000004u,c->r[0]); // 801CB6D4
  W32(c->r[30]+0x00000008u,c->r[29]); // 801CB6D8
L_801CB6DC:;
  c->lr=0x801CB6E0u; f_8003F2FC(c); // 801CB6DC
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801CB6E0
  c->r[4]=c->r[30]|c->r[30]; // 801CB6E4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CB6E8
  c->r[3]=c->r[3]+c->r[0]; // 801CB6EC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801CB6F0
  c->r[3]=c->r[3]+0x00000030u; // 801CB6F4
  c->lr=0x801CB6FCu; f_8003FD14(c); // 801CB6F8
L_801CB6FC:;
  c->r[3]=R32(c->r[31]+0x00000034u); // 801CB6FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CB700
  W32(c->r[31]+0x00000034u,c->r[0]); // 801CB704
L_801CB708:;
  c->lr=0x801CB70Cu; f_8003DA30(c); // 801CB708
  c->r[0]=R32(c->r[31]+0x00000034u); // 801CB70C
  c->r[3]=c->r[3]+0x00000004u; // 801CB710
  W32(c->r[31]+0x00000020u,c->r[3]); // 801CB714
  cmpu(c,0,c->r[0],c->r[3]); // 801CB718
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801CB71C
  W32(c->r[31]+0x00000018u,c->r[3]); // 801CB720
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801CB724
  W32(c->r[31]+0x00000008u,c->r[0]); // 801CB728
  W32(c->r[31]+0x00000010u,c->r[3]); // 801CB72C
  W32(c->r[31]+0x00000014u,c->r[0]); // 801CB730
  if (!crb(c,2)) { IRQCHK(c); goto L_801CB5C4; } // 801CB734
  c->r[10]=c->r[31]|c->r[31]; // 801CB738
  {uint32_t ea=c->r[10]+0x00000094u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801CB73C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801CB740
  c->r[0]=R32(c->r[10]+0x00000004u); // 801CB744
  c->r[1]=c->r[10]|c->r[10]; // 801CB748
  c->lr=c->r[0]; // 801CB74C
  return; // 801CB750
}

// fn_801CB754
void f_801CB754(Ctx* __restrict c) {
  trace_call(0x801CB754u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB754
  c->r[0]=c->lr; // 801CB758
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CB75C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801CB760
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801CB764
  c->r[11]=c->r[1]+0x00000020u; // 801CB768
  c->lr=0x801CB770u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB76C
  c->f[31]=c->f[1]; // 801CB770
  c->r[28]=c->r[3]|c->r[3]; // 801CB774
  c->r[29]=c->r[5]|c->r[5]; // 801CB778
  c->r[30]=c->r[6]|c->r[6]; // 801CB77C
  c->r[31]=c->r[7]|c->r[7]; // 801CB780
  c->r[3]=c->r[3]+0x000008ECu; // 801CB784
  c->lr=0x801CB78Cu; f_80075440(c); // 801CB788
  cmps(c,0,(int32_t)c->r[3],0); // 801CB78C
  if (crb(c,0)) { goto L_801CB7B8; } // 801CB790
  c->f[1]=c->f[31]; // 801CB794
  c->r[4]=c->r[3]|c->r[3]; // 801CB798
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CB79C
  c->r[5]=c->r[29]|c->r[29]; // 801CB7A0
  {uint32_t ea=c->r[2]+0xFFFFBAC4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CB7A4
  c->r[6]=c->r[30]|c->r[30]; // 801CB7A8
  c->r[7]=c->r[31]|c->r[31]; // 801CB7AC
  c->r[3]=c->r[28]+0x000008D0u; // 801CB7B0
  c->lr=0x801CB7B8u; f_8002D7B8(c); // 801CB7B4
L_801CB7B8:;
  c->r[3]=R32(c->r[28]+0x00000974u); // 801CB7B8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801CB7BC
  {uint32_t ea=c->r[2]+0xFFFFBA78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB7C0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CB7C4
  c->lr=0x801CB7CCu; f_80165B9C(c); // 801CB7C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801CB7CC
  c->r[11]=c->r[1]+0x00000020u; // 801CB7D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801CB7D4
  c->lr=0x801CB7DCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB7D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CB7DC
  c->lr=c->r[0]; // 801CB7E0
  c->r[1]=c->r[1]+0x00000030u; // 801CB7E4
  return; // 801CB7E8
}

// fn_801CB7EC
void f_801CB7EC(Ctx* __restrict c) {
  trace_call(0x801CB7ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB7EC
  c->r[0]=c->lr; // 801CB7F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB7F4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CB7F8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CB7FC
  c->f[31]=c->f[1]; // 801CB800
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB804
  c->r[3]=c->r[4]|c->r[4]; // 801CB808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB80C
  c->r[31]=c->r[5]|c->r[5]; // 801CB810
  c->lr=0x801CB818u; f_801138D4(c); // 801CB814
  c->lr=0x801CB81Cu; f_80061A4C(c); // 801CB818
  c->r[4]=c->r[31]|c->r[31]; // 801CB81C
  c->r[3]=c->r[3]+0x000000ECu; // 801CB820
  c->lr=0x801CB828u; f_8012D230(c); // 801CB824
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB828
  fcmp(c,0,c->f[31],c->f[0]); // 801CB82C
  if (crb(c,2)) { goto L_801CB840; } // 801CB830
  c->lr=0x801CB838u; f_80061A4C(c); // 801CB834
  c->f[1]=c->f[31]; // 801CB838
  c->lr=0x801CB840u; f_80063940(c); // 801CB83C
L_801CB840:;
  c->lr=0x801CB844u; f_80061A4C(c); // 801CB840
  {uint32_t ea=c->r[2]+0xFFFFBA78u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB844
  c->r[3]=c->r[3]+0x000000ECu; // 801CB848
  c->lr=0x801CB850u; f_8012D1D0(c); // 801CB84C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CB850
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB854
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CB858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB85C
  c->lr=c->r[0]; // 801CB860
  c->r[1]=c->r[1]+0x00000020u; // 801CB864
  return; // 801CB868
}

// fn_801CB86C
void f_801CB86C(Ctx* __restrict c) {
  trace_call(0x801CB86Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB86C
  c->r[0]=c->lr; // 801CB870
  W32(c->r[1]+0x00000124u,c->r[0]); // 801CB874
  c->r[11]=c->r[1]+0x00000120u; // 801CB878
  c->lr=0x801CB880u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB87C
  c->r[6]=0u+0x803E0000u; // 801CB880
  c->r[0]=0u+0x00000002u; // 801CB884
  c->r[6]=c->r[6]+0x00000DA4u; // 801CB888
  c->r[31]=c->r[3]|c->r[3]; // 801CB88C
  c->r[28]=c->r[4]|c->r[4]; // 801CB890
  c->r[29]=c->r[5]|c->r[5]; // 801CB894
  c->r[7]=c->r[1]+0x00000064u; // 801CB898
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 801CB89C
  c->ctr=c->r[0]; // 801CB8A0
L_801CB8A4:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 801CB8A4
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 801CB8A8
  W32(c->r[7]+0x00000004u,c->r[5]); // 801CB8AC
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 801CB8B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB8A4; } // 801CB8B4
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 801CB8B8
  c->r[4]=R32(c->r[6]+0x00000004u); // 801CB8BC
  cmpu(c,0,c->r[0],0x00000001u); // 801CB8C0
  W32(c->r[7]+0x00000004u,c->r[4]); // 801CB8C4
  if (crb(c,1)) { goto L_801CB8E0; } // 801CB8C8
  {uint32_t ea=c->r[2]+0xFFFFBB14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB8CC
  c->r[3]=c->r[3]+0x00002718u; // 801CB8D0
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CB8D4
  c->lr=0x801CB8DCu; f_801860A8(c); // 801CB8D8
  goto L_801CB8F0; // 801CB8DC
L_801CB8E0:;
  {uint32_t ea=c->r[2]+0xFFFFBB18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB8E0
  c->r[3]=c->r[3]+0x00002718u; // 801CB8E4
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CB8E8
  c->lr=0x801CB8F0u; f_801860A8(c); // 801CB8EC
L_801CB8F0:;
  c->r[0]=0u+0x00000000u; // 801CB8F0
  cmps(c,0,(int32_t)c->r[29],0); // 801CB8F4
  W8(c->r[31]+0x000029C0u,c->r[0]); // 801CB8F8
  W32(c->r[31]+0x00002AC0u,c->r[28]); // 801CB8FC
  W32(c->r[31]+0x00002AC4u,c->r[29]); // 801CB900
  if (crb(c,2)) { goto L_801CB9E4; } // 801CB904
  c->r[0]=c->r[28]+0xFFFFFFF7u; // 801CB908
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CB90C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CB910
  c->r[30]=c->r[1]+0x00000068u; // 801CB914
  c->r[28]=R32(c->r[30]+c->r[0]); // 801CB918
  c->r[4]=c->r[31]+0x000008D0u; // 801CB91C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CB920
  c->r[3]=c->r[1]+0x000000DCu; // 801CB924
  c->r[5]=c->r[28]|c->r[28]; // 801CB928
  c->ctr=c->r[12]; // 801CB92C
  if (true) { c->lr=0x801CB934u; dispatch(c,c->ctr); } // 801CB930
  c->r[3]=c->r[1]+0x00000044u; // 801CB934
  c->r[4]=c->r[1]+0x000000DCu; // 801CB938
  c->lr=0x801CB940u; f_80032FD8(c); // 801CB93C
  c->r[3]=c->r[1]+0x0000005Cu; // 801CB940
  c->r[4]=c->r[1]+0x00000044u; // 801CB944
  c->lr=0x801CB94Cu; f_8003F468(c); // 801CB948
  c->r[0]=c->r[29]+0xFFFFFFF7u; // 801CB94C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CB950
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CB954
  c->r[4]=c->r[31]+0x000008D0u; // 801CB958
  c->r[29]=R32(c->r[30]+c->r[0]); // 801CB95C
  c->r[3]=c->r[1]+0x000000ACu; // 801CB960
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CB964
  c->r[5]=c->r[29]|c->r[29]; // 801CB968
  c->ctr=c->r[12]; // 801CB96C
  if (true) { c->lr=0x801CB974u; dispatch(c,c->ctr); } // 801CB970
  c->r[3]=c->r[1]+0x00000038u; // 801CB974
  c->r[4]=c->r[1]+0x000000ACu; // 801CB978
  c->lr=0x801CB980u; f_80032FD8(c); // 801CB97C
  c->r[3]=c->r[1]+0x00000050u; // 801CB980
  c->r[4]=c->r[1]+0x00000038u; // 801CB984
  c->lr=0x801CB98Cu; f_8003F468(c); // 801CB988
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB98C
  c->r[3]=c->r[1]+0x00000020u; // 801CB990
  {uint32_t ea=c->r[2]+0xFFFFBB1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CB994
  c->r[4]=c->r[1]+0x0000005Cu; // 801CB998
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB99C
  c->r[5]=c->r[1]+0x00000050u; // 801CB9A0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801CB9A4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801CB9A8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801CB9AC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801CB9B0
  c->lr=0x801CB9B8u; f_801011E8(c); // 801CB9B4
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB9B8
  c->r[3]=c->r[1]+0x0000002Cu; // 801CB9BC
  c->r[4]=c->r[1]+0x00000020u; // 801CB9C0
  c->lr=0x801CB9C8u; f_800FACB4(c); // 801CB9C4
  c->r[3]=c->r[31]+0x000028B4u; // 801CB9C8
  c->r[4]=c->r[1]+0x0000002Cu; // 801CB9CC
  c->lr=0x801CB9D4u; f_8003F468(c); // 801CB9D0
  c->r[4]=c->r[29]|c->r[29]; // 801CB9D4
  c->r[3]=c->r[31]+0x000029C0u; // 801CB9D8
  c->lr=0x801CB9E0u; f_802933D8(c); // 801CB9DC
  goto L_801CBA38; // 801CB9E0
L_801CB9E4:;
  c->r[0]=c->r[28]+0xFFFFFFF7u; // 801CB9E4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CB9E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CB9EC
  c->r[5]=c->r[1]+0x00000068u; // 801CB9F0
  c->r[28]=R32(c->r[5]+c->r[0]); // 801CB9F4
  c->r[4]=c->r[31]+0x000008D0u; // 801CB9F8
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CB9FC
  c->r[3]=c->r[1]+0x0000007Cu; // 801CBA00
  c->r[5]=c->r[28]|c->r[28]; // 801CBA04
  c->ctr=c->r[12]; // 801CBA08
  if (true) { c->lr=0x801CBA10u; dispatch(c,c->ctr); } // 801CBA0C
  c->r[3]=c->r[1]+0x00000014u; // 801CBA10
  c->r[4]=c->r[1]+0x0000007Cu; // 801CBA14
  c->lr=0x801CBA1Cu; f_80032FD8(c); // 801CBA18
  c->r[3]=c->r[31]+0x000028B4u; // 801CBA1C
  c->r[4]=c->r[1]+0x00000014u; // 801CBA20
  c->lr=0x801CBA28u; f_8003F468(c); // 801CBA24
  {uint32_t ea=c->r[31]+0x000028B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBA28
  {uint32_t ea=c->r[2]+0xFFFFBB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBA2C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CBA30
  {uint32_t ea=c->r[31]+0x000028B8u; WF32(ea,c->f[0]);} // 801CBA34
L_801CBA38:;
  c->r[3]=R8(c->r[31]+0x000028ACu); // 801CBA38
  c->r[0]=0u+0x00000001u; // 801CBA3C
  cmpu(c,0,c->r[3],0x00000001u); // 801CBA40
  W8(c->r[31]+0x000028ACu,c->r[0]); // 801CBA44
  if (crb(c,2)) { goto L_801CBABC; } // 801CBA48
  c->r[3]=c->r[1]+0x00000008u; // 801CBA4C
  c->r[4]=c->r[31]+0x000028B4u; // 801CBA50
  c->lr=0x801CBA58u; f_8003F484(c); // 801CBA54
  c->r[0]=R8(c->r[31]+0x000028ACu); // 801CBA58
  cmps(c,0,(int32_t)c->r[0],0); // 801CBA5C
  if (crb(c,2)) { goto L_801CBA80; } // 801CBA60
  c->lr=0x801CBA68u; f_80061A4C(c); // 801CBA64
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801CBA68
  c->r[4]=c->r[1]+0x00000008u; // 801CBA6C
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBA70
  c->r[5]=0u+0x00000007u; // 801CBA74
  c->lr=0x801CBA7Cu; f_801DB31C(c); // 801CBA78
  goto L_801CBA94; // 801CBA7C
L_801CBA80:;
  c->lr=0x801CBA84u; f_80061A4C(c); // 801CBA80
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801CBA84
  c->r[4]=c->r[1]+0x00000008u; // 801CBA88
  {uint32_t ea=c->r[2]+0xFFFFBA58u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBA8C
  c->lr=0x801CBA94u; f_801DB780(c); // 801CBA90
L_801CBA94:;
  c->r[29]=0u+0x00000000u; // 801CBA94
  c->r[30]=0u+0x00000000u; // 801CBA98
L_801CBA9C:;
  c->r[3]=c->r[31]+c->r[30]; // 801CBA9C
  c->r[4]=c->r[1]+0x00000008u; // 801CBAA0
  c->r[3]=c->r[3]+0x00002728u; // 801CBAA4
  c->lr=0x801CBAACu; f_8003F468(c); // 801CBAA8
  c->r[29]=c->r[29]+0x00000001u; // 801CBAAC
  c->r[30]=c->r[30]+0x0000000Cu; // 801CBAB0
  cmps(c,0,(int32_t)c->r[29],32); // 801CBAB4
  if (crb(c,0)) { IRQCHK(c); goto L_801CBA9C; } // 801CBAB8
L_801CBABC:;
  c->r[4]=c->r[28]|c->r[28]; // 801CBABC
  c->r[3]=c->r[31]+0x000028C0u; // 801CBAC0
  c->lr=0x801CBAC8u; f_802933D8(c); // 801CBAC4
  c->r[11]=c->r[1]+0x00000120u; // 801CBAC8
  c->lr=0x801CBAD0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CBACC
  c->r[0]=R32(c->r[1]+0x00000124u); // 801CBAD0
  c->lr=c->r[0]; // 801CBAD4
  c->r[1]=c->r[1]+0x00000120u; // 801CBAD8
  return; // 801CBADC
}

// fn_801CBAE0
void f_801CBAE0(Ctx* __restrict c) {
  trace_call(0x801CBAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBAE0
  c->r[0]=c->lr; // 801CBAE4
  W32(c->r[1]+0x00000104u,c->r[0]); // 801CBAE8
  W32(c->r[1]+0x000000FCu,c->r[31]); // 801CBAEC
  c->r[31]=c->r[3]|c->r[3]; // 801CBAF0
  c->r[4]=R32(c->r[3]+0x00002AC0u); // 801CBAF4
  cmps(c,0,(int32_t)c->r[4],0); // 801CBAF8
  if (crb(c,2)) { goto L_801CBCFC; } // 801CBAFC
  c->r[0]=R8(c->r[3]+0x000029C0u); // 801CBB00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CBB04
  if (crb(c,2)) { goto L_801CBC80; } // 801CBB08
  c->lr=0x801CBB10u; f_801C8B40(c); // 801CBB0C
  cmps(c,0,(int32_t)c->r[3],0); // 801CBB10
  if (!crb(c,2)) { goto L_801CBBD0; } // 801CBB14
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CBB18
  c->r[4]=c->r[31]+0x000008D0u; // 801CBB1C
  c->r[3]=c->r[1]+0x000000BCu; // 801CBB20
  c->r[5]=c->r[31]+0x000028C0u; // 801CBB24
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CBB28
  c->ctr=c->r[12]; // 801CBB2C
  if (true) { c->lr=0x801CBB34u; dispatch(c,c->ctr); } // 801CBB30
  c->r[3]=c->r[1]+0x00000038u; // 801CBB34
  c->r[4]=c->r[1]+0x000000BCu; // 801CBB38
  c->lr=0x801CBB40u; f_80032FD8(c); // 801CBB3C
  c->r[3]=c->r[1]+0x00000050u; // 801CBB40
  c->r[4]=c->r[1]+0x00000038u; // 801CBB44
  c->lr=0x801CBB4Cu; f_8003F468(c); // 801CBB48
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBB4C
  c->r[3]=c->r[31]|c->r[31]; // 801CBB50
  {uint32_t ea=c->r[2]+0xFFFFBB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBB54
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CBB58
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801CBB5C
  c->r[4]=R32(c->r[31]+0x00002AC4u); // 801CBB60
  c->lr=0x801CBB68u; f_801C8B40(c); // 801CBB64
  cmps(c,0,(int32_t)c->r[3],0); // 801CBB68
  if (!crb(c,2)) { goto L_801CBBB8; } // 801CBB6C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CBB70
  c->r[4]=c->r[31]+0x000008D0u; // 801CBB74
  c->r[3]=c->r[1]+0x0000008Cu; // 801CBB78
  c->r[5]=c->r[31]+0x000029C0u; // 801CBB7C
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CBB80
  c->ctr=c->r[12]; // 801CBB84
  if (true) { c->lr=0x801CBB8Cu; dispatch(c,c->ctr); } // 801CBB88
  c->r[3]=c->r[1]+0x0000002Cu; // 801CBB8C
  c->r[4]=c->r[1]+0x0000008Cu; // 801CBB90
  c->lr=0x801CBB98u; f_80032FD8(c); // 801CBB94
  c->r[3]=c->r[1]+0x00000044u; // 801CBB98
  c->r[4]=c->r[1]+0x0000002Cu; // 801CBB9C
  c->lr=0x801CBBA4u; f_8003F468(c); // 801CBBA0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBBA4
  {uint32_t ea=c->r[2]+0xFFFFBB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBBA8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CBBAC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801CBBB0
  goto L_801CBC38; // 801CBBB4
L_801CBBB8:;
  c->r[0]=0u+0x00000000u; // 801CBBB8
  c->r[3]=c->r[1]+0x00000044u; // 801CBBBC
  W8(c->r[31]+0x000029C0u,c->r[0]); // 801CBBC0
  c->r[4]=c->r[31]+0x00002AD4u; // 801CBBC4
  c->lr=0x801CBBCCu; f_8003F468(c); // 801CBBC8
  goto L_801CBC38; // 801CBBCC
L_801CBBD0:;
  c->r[4]=R32(c->r[31]+0x00002AC4u); // 801CBBD0
  c->r[3]=c->r[31]|c->r[31]; // 801CBBD4
  c->lr=0x801CBBDCu; f_801C8B40(c); // 801CBBD8
  cmps(c,0,(int32_t)c->r[3],0); // 801CBBDC
  if (!crb(c,2)) { goto L_801CBC1C; } // 801CBBE0
  c->r[3]=c->r[31]+0x000028C0u; // 801CBBE4
  c->r[4]=c->r[31]+0x000029C0u; // 801CBBE8
  c->lr=0x801CBBF0u; f_802933D8(c); // 801CBBEC
  c->r[0]=R32(c->r[31]+0x00002AC4u); // 801CBBF0
  c->r[3]=0u+0x00000000u; // 801CBBF4
  W8(c->r[31]+0x000029C0u,c->r[3]); // 801CBBF8
  c->r[3]=c->r[1]+0x00000050u; // 801CBBFC
  c->r[4]=c->r[31]+0x00002AC8u; // 801CBC00
  W32(c->r[31]+0x00002AC0u,c->r[0]); // 801CBC04
  c->lr=0x801CBC0Cu; f_8003F468(c); // 801CBC08
  c->r[3]=c->r[1]+0x00000044u; // 801CBC0C
  c->r[4]=c->r[31]+0x00002AD4u; // 801CBC10
  c->lr=0x801CBC18u; f_8003F468(c); // 801CBC14
  goto L_801CBC38; // 801CBC18
L_801CBC1C:;
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBC1C
  c->r[3]=c->r[31]|c->r[31]; // 801CBC20
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CBC24
  c->lr=0x801CBC2Cu; f_801CBD10(c); // 801CBC28
  c->r[0]=0u+0x00000000u; // 801CBC2C
  W32(c->r[31]+0x00002AC0u,c->r[0]); // 801CBC30
  goto L_801CBCFC; // 801CBC34
L_801CBC38:;
  c->r[3]=c->r[31]+0x00002AC8u; // 801CBC38
  c->r[4]=c->r[1]+0x00000050u; // 801CBC3C
  c->lr=0x801CBC44u; f_8003F468(c); // 801CBC40
  c->r[3]=c->r[31]+0x00002AD4u; // 801CBC44
  c->r[4]=c->r[1]+0x00000044u; // 801CBC48
  c->lr=0x801CBC50u; f_8003F468(c); // 801CBC4C
  c->r[3]=c->r[1]+0x00000014u; // 801CBC50
  c->r[4]=c->r[1]+0x00000050u; // 801CBC54
  c->r[5]=c->r[1]+0x00000044u; // 801CBC58
  c->lr=0x801CBC60u; f_801011E8(c); // 801CBC5C
  {uint32_t ea=c->r[2]+0xFFFFBA54u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBC60
  c->r[3]=c->r[1]+0x00000020u; // 801CBC64
  c->r[4]=c->r[1]+0x00000014u; // 801CBC68
  c->lr=0x801CBC70u; f_800FACB4(c); // 801CBC6C
  c->r[3]=c->r[31]+0x000028B4u; // 801CBC70
  c->r[4]=c->r[1]+0x00000020u; // 801CBC74
  c->lr=0x801CBC7Cu; f_8003F468(c); // 801CBC78
  goto L_801CBCFC; // 801CBC7C
L_801CBC80:;
  c->lr=0x801CBC84u; f_801C8B40(c); // 801CBC80
  cmps(c,0,(int32_t)c->r[3],0); // 801CBC84
  if (!crb(c,2)) { goto L_801CBCD4; } // 801CBC88
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CBC8C
  c->r[4]=c->r[31]+0x000008D0u; // 801CBC90
  c->r[3]=c->r[1]+0x0000005Cu; // 801CBC94
  c->r[5]=c->r[31]+0x000028C0u; // 801CBC98
  c->r[12]=R32(c->r[12]+0x00000038u); // 801CBC9C
  c->ctr=c->r[12]; // 801CBCA0
  if (true) { c->lr=0x801CBCA8u; dispatch(c,c->ctr); } // 801CBCA4
  c->r[3]=c->r[1]+0x00000008u; // 801CBCA8
  c->r[4]=c->r[1]+0x0000005Cu; // 801CBCAC
  c->lr=0x801CBCB4u; f_80032FD8(c); // 801CBCB0
  c->r[3]=c->r[31]+0x000028B4u; // 801CBCB4
  c->r[4]=c->r[1]+0x00000008u; // 801CBCB8
  c->lr=0x801CBCC0u; f_8003F468(c); // 801CBCBC
  {uint32_t ea=c->r[31]+0x000028B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBCC0
  {uint32_t ea=c->r[2]+0xFFFFBB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBCC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CBCC8
  {uint32_t ea=c->r[31]+0x000028B8u; WF32(ea,c->f[0]);} // 801CBCCC
  goto L_801CBCF0; // 801CBCD0
L_801CBCD4:;
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBCD4
  c->r[3]=c->r[31]|c->r[31]; // 801CBCD8
  {uint32_t ea=c->r[2]+0xFFFFBA5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CBCDC
  c->lr=0x801CBCE4u; f_801CBD10(c); // 801CBCE0
  c->r[0]=0u+0x00000000u; // 801CBCE4
  W32(c->r[31]+0x00002AC0u,c->r[0]); // 801CBCE8
  goto L_801CBCFC; // 801CBCEC
L_801CBCF0:;
  c->r[3]=c->r[31]+0x00002AC8u; // 801CBCF0
  c->r[4]=c->r[31]+0x000028B4u; // 801CBCF4
  c->lr=0x801CBCFCu; f_8003F468(c); // 801CBCF8
L_801CBCFC:;
  c->r[0]=R32(c->r[1]+0x00000104u); // 801CBCFC
  c->r[31]=R32(c->r[1]+0x000000FCu); // 801CBD00
  c->lr=c->r[0]; // 801CBD04
  c->r[1]=c->r[1]+0x00000100u; // 801CBD08
  return; // 801CBD0C
}

// fn_801CBD10
void f_801CBD10(Ctx* __restrict c) {
  trace_call(0x801CBD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBD10
  c->r[0]=c->lr; // 801CBD14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBD18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBD1C
  c->r[31]=c->r[3]|c->r[3]; // 801CBD20
  c->r[0]=R8(c->r[3]+0x000028ACu); // 801CBD24
  cmpu(c,0,c->r[0],0x00000001u); // 801CBD28
  if (!crb(c,2)) { goto L_801CBD50; } // 801CBD2C
  {uint32_t ea=c->r[2]+0xFFFFBB20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBD30
  c->r[3]=c->r[3]+0x00002718u; // 801CBD34
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801CBD38
  c->lr=0x801CBD40u; f_801860A8(c); // 801CBD3C
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBD40
  c->r[3]=c->r[31]+0x00002718u; // 801CBD44
  c->r[4]=0u+0x00000000u; // 801CBD48
  c->lr=0x801CBD50u; f_801860E8(c); // 801CBD4C
L_801CBD50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBD50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBD54
  c->lr=c->r[0]; // 801CBD58
  c->r[1]=c->r[1]+0x00000010u; // 801CBD5C
  return; // 801CBD60
}

// fn_801CBD64
void f_801CBD64(Ctx* __restrict c) {
  trace_call(0x801CBD64u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBD64
  c->r[0]=c->lr; // 801CBD68
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CBD6C
  c->r[11]=c->r[1]+0x00000030u; // 801CBD70
  c->lr=0x801CBD78u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CBD74
  cmpu(c,0,c->r[5],0x00000001u); // 801CBD78
  c->r[31]=c->r[3]|c->r[3]; // 801CBD7C
  c->r[22]=c->r[4]|c->r[4]; // 801CBD80
  if (!crb(c,2)) { goto L_801CBDB0; } // 801CBD84
  c->r[27]=0u+0x80460000u; // 801CBD88
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBD8C
  c->r[3]=c->r[27]+0xFFFFD4F0u; // 801CBD90
  c->r[5]=0u+0xFFFFFFFFu; // 801CBD94
  c->lr=0x801CBD9Cu; f_8004ABF4(c); // 801CBD98
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBD9C
  c->r[4]=c->r[3]|c->r[3]; // 801CBDA0
  c->r[3]=c->r[27]+0xFFFFD4F0u; // 801CBDA4
  c->lr=0x801CBDACu; f_8004B4F8(c); // 801CBDA8
  goto L_801CBEBC; // 801CBDAC
L_801CBDB0:;
  c->r[27]=0u+0x80460000u; // 801CBDB0
  c->r[3]=c->r[27]+0xFFFFD4F0u; // 801CBDB4
  c->r[3]=c->r[3]+0x00001574u; // 801CBDB8
  c->lr=0x801CBDC0u; f_803A6794(c); // 801CBDBC
  c->r[25]=0u+0x00000000u; // 801CBDC0
  c->r[24]=c->r[3]|c->r[3]; // 801CBDC4
  c->r[28]=c->r[25]|c->r[25]; // 801CBDC8
  c->r[26]=0u+0xFFFFFFFFu; // 801CBDCC
  c->r[30]=0u+0x00000000u; // 801CBDD0
  c->r[29]=0u+0xFFFFFFFFu; // 801CBDD4
L_801CBDD8:;
  c->r[4]=R32(c->r[31]+c->r[30]); // 801CBDD8
  c->r[23]=c->r[31]+c->r[30]; // 801CBDDC
  cmps(c,0,(int32_t)c->r[4],-1); // 801CBDE0
  if (crb(c,2)) { goto L_801CBE20; } // 801CBDE4
  c->r[3]=c->r[27]+0xFFFFD4F0u; // 801CBDE8
  c->lr=0x801CBDF0u; f_8004B650(c); // 801CBDEC
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[3]); // 801CBDF0
  if (!crb(c,2)) { goto L_801CBE00; } // 801CBDF4
  c->r[26]=c->r[25]+0x00000100u; // 801CBDF8
  goto L_801CBE3C; // 801CBDFC
L_801CBE00:;
  cmps(c,0,(int32_t)c->r[3],-1); // 801CBE00
  if (!crb(c,2)) { goto L_801CBE2C; } // 801CBE04
  cmps(c,0,(int32_t)c->r[26],-1); // 801CBE08
  if (!crb(c,2)) { goto L_801CBE2C; } // 801CBE0C
  W8(c->r[23]+0x00000004u,c->r[28]); // 801CBE10
  c->r[26]=c->r[25]|c->r[25]; // 801CBE14
  W32(c->r[23]+0x00000000u,c->r[29]); // 801CBE18
  goto L_801CBE2C; // 801CBE1C
L_801CBE20:;
  cmps(c,0,(int32_t)c->r[26],-1); // 801CBE20
  if (!crb(c,2)) { goto L_801CBE2C; } // 801CBE24
  c->r[26]=c->r[25]|c->r[25]; // 801CBE28
L_801CBE2C:;
  c->r[25]=c->r[25]+0x00000001u; // 801CBE2C
  c->r[30]=c->r[30]+0x00000008u; // 801CBE30
  cmps(c,0,(int32_t)c->r[25],4); // 801CBE34
  if (crb(c,0)) { IRQCHK(c); goto L_801CBDD8; } // 801CBE38
L_801CBE3C:;
  cmps(c,0,(int32_t)c->r[26],-1); // 801CBE3C
  if (crb(c,2)) { goto L_801CBEBC; } // 801CBE40
  c->r[0]=rotl(c->r[26],0)&0x00000100u; cr0(c,c->r[0]); // 801CBE44
  if (crb(c,2)) { goto L_801CBE68; } // 801CBE48
  c->r[0]=rotl(c->r[26],0)&0xFFFFFEFFu; // 801CBE4C
  c->r[3]=0u+0x80460000u; // 801CBE50
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CBE54
  c->r[5]=0u+0x00000000u; // 801CBE58
  c->r[4]=R32(c->r[31]+c->r[0]); // 801CBE5C
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 801CBE60
  c->lr=0x801CBE68u; f_8004AF30(c); // 801CBE64
L_801CBE68:;
  c->r[0]=rotl(c->r[26],0)&0xFFFFFEFFu; // 801CBE68
  c->r[30]=0u+0x80460000u; // 801CBE6C
  c->r[23]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CBE70
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBE74
  c->r[5]=R32(c->r[31]+c->r[23]); // 801CBE78
  c->r[4]=c->r[22]|c->r[22]; // 801CBE7C
  c->r[3]=c->r[30]+0xFFFFD4F0u; // 801CBE80
  c->lr=0x801CBE88u; f_8004ABF4(c); // 801CBE84
  cmps(c,0,(int32_t)c->r[3],0); // 801CBE88
  W32(c->r[31]+c->r[23],c->r[3]); // 801CBE8C
  if (!crb(c,2)) { goto L_801CBEA0; } // 801CBE90
  c->r[0]=0u+0xFFFFFFFFu; // 801CBE94
  W32(c->r[31]+c->r[23],c->r[0]); // 801CBE98
  goto L_801CBEBC; // 801CBE9C
L_801CBEA0:;
  c->r[3]=c->r[31]+c->r[23]; // 801CBEA0
  c->r[0]=0u+0x00000000u; // 801CBEA4
  W8(c->r[3]+0x00000004u,c->r[0]); // 801CBEA8
  c->r[3]=c->r[30]+0xFFFFD4F0u; // 801CBEAC
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBEB0
  c->r[4]=R32(c->r[31]+c->r[23]); // 801CBEB4
  c->lr=0x801CBEBCu; f_8004B4F8(c); // 801CBEB8
L_801CBEBC:;
  c->r[11]=c->r[1]+0x00000030u; // 801CBEBC
  c->lr=0x801CBEC4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CBEC0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CBEC4
  c->lr=c->r[0]; // 801CBEC8
  c->r[1]=c->r[1]+0x00000030u; // 801CBECC
  return; // 801CBED0
}

// fn_801CBED4
void f_801CBED4(Ctx* __restrict c) {
  trace_call(0x801CBED4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBED4
  c->r[0]=c->lr; // 801CBED8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CBEDC
  c->r[11]=c->r[1]+0x00000080u; // 801CBEE0
  c->lr=0x801CBEE8u; f_80289DC0(c); // 801CBEE4
  {uint32_t ea=c->r[2]+0xFFFFBA44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBEE8
  c->r[31]=0u+0x80400000u; // 801CBEEC
  c->r[3]=0u+0x80570000u; // 801CBEF0
  {uint32_t ea=c->r[2]+0xFFFFBA4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CBEF4
  c->f[3]=c->f[1]; // 801CBEF8
  c->r[31]=c->r[31]+0x00003350u; // 801CBEFC
  c->r[3]=c->r[3]+0x000000E0u; // 801CBF00
  c->lr=0x801CBF08u; f_8003F588(c); // 801CBF04
  c->r[15]=R32(c->r[13]+0xFFFF88B8u); // 801CBF08
  c->r[17]=c->r[31]+0x00000030u; // 801CBF0C
  c->r[0]=R32(c->r[13]+0xFFFF889Cu); // 801CBF10
  c->r[3]=c->r[31]+0x00000150u; // 801CBF14
  W32(c->r[1]+0x00000028u,c->r[15]); // 801CBF18
  c->r[15]=R32(c->r[13]+0xFFFF88BCu); // 801CBF1C
  W32(c->r[17]+0x000000D0u,c->r[0]); // 801CBF20
  c->r[0]=R32(c->r[1]+0x00000028u); // 801CBF24
  W32(c->r[1]+0x00000008u,c->r[15]); // 801CBF28
  c->r[15]=R32(c->r[13]+0xFFFF88C0u); // 801CBF2C
  W32(c->r[17]+0x000000E8u,c->r[0]); // 801CBF30
  c->r[0]=R32(c->r[1]+0x00000008u); // 801CBF34
  W32(c->r[1]+0x0000000Cu,c->r[15]); // 801CBF38
  c->r[15]=R32(c->r[13]+0xFFFF88C4u); // 801CBF3C
  W32(c->r[17]+0x000000ECu,c->r[0]); // 801CBF40
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801CBF44
  W32(c->r[1]+0x00000010u,c->r[15]); // 801CBF48
  c->r[15]=R32(c->r[13]+0xFFFF88C8u); // 801CBF4C
  W32(c->r[17]+0x000000F0u,c->r[0]); // 801CBF50
  c->r[0]=R32(c->r[1]+0x00000010u); // 801CBF54
  W32(c->r[1]+0x00000014u,c->r[15]); // 801CBF58
  c->r[15]=R32(c->r[13]+0xFFFF88CCu); // 801CBF5C
  W32(c->r[17]+0x00000104u,c->r[0]); // 801CBF60
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBF64
  W32(c->r[1]+0x00000018u,c->r[15]); // 801CBF68
  c->r[15]=R32(c->r[13]+0xFFFF88D0u); // 801CBF6C
  W32(c->r[17]+0x00000108u,c->r[0]); // 801CBF70
  c->r[0]=R32(c->r[1]+0x00000018u); // 801CBF74
  W32(c->r[1]+0x0000001Cu,c->r[15]); // 801CBF78
  c->r[15]=R32(c->r[13]+0xFFFF885Cu); // 801CBF7C
  W32(c->r[17]+0x0000010Cu,c->r[0]); // 801CBF80
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CBF84
  W32(c->r[1]+0x00000020u,c->r[15]); // 801CBF88
  c->r[15]=R32(c->r[13]+0xFFFF8860u); // 801CBF8C
  W32(c->r[17]+0x00000110u,c->r[0]); // 801CBF90
  c->r[0]=R32(c->r[1]+0x00000020u); // 801CBF94
  c->r[16]=R32(c->r[13]+0xFFFF882Cu); // 801CBF98
  c->r[18]=R32(c->r[13]+0xFFFF8830u); // 801CBF9C
  c->r[19]=R32(c->r[13]+0xFFFF8834u); // 801CBFA0
  c->r[20]=R32(c->r[13]+0xFFFF8838u); // 801CBFA4
  c->r[21]=R32(c->r[13]+0xFFFF883Cu); // 801CBFA8
  c->r[22]=R32(c->r[13]+0xFFFF8840u); // 801CBFAC
  c->r[23]=R32(c->r[13]+0xFFFF8844u); // 801CBFB0
  c->r[24]=R32(c->r[13]+0xFFFF8848u); // 801CBFB4
  c->r[25]=R32(c->r[13]+0xFFFF884Cu); // 801CBFB8
  c->r[26]=R32(c->r[13]+0xFFFF8850u); // 801CBFBC
  c->r[27]=R32(c->r[13]+0xFFFF8854u); // 801CBFC0
  c->r[28]=R32(c->r[13]+0xFFFF8858u); // 801CBFC4
  c->r[29]=R32(c->r[13]+0xFFFF8870u); // 801CBFC8
  c->r[30]=R32(c->r[13]+0xFFFF8874u); // 801CBFCC
  c->r[12]=R32(c->r[13]+0xFFFF8878u); // 801CBFD0
  c->r[11]=R32(c->r[13]+0xFFFF887Cu); // 801CBFD4
  c->r[10]=R32(c->r[13]+0xFFFF8880u); // 801CBFD8
  c->r[9]=R32(c->r[13]+0xFFFF8884u); // 801CBFDC
  c->r[8]=R32(c->r[13]+0xFFFF8888u); // 801CBFE0
  c->r[7]=R32(c->r[13]+0xFFFF888Cu); // 801CBFE4
  c->r[6]=R32(c->r[13]+0xFFFF8890u); // 801CBFE8
  c->r[5]=R32(c->r[13]+0xFFFF8894u); // 801CBFEC
  c->r[4]=R32(c->r[13]+0xFFFF8898u); // 801CBFF0
  c->r[14]=R32(c->r[13]+0xFFFF88B4u); // 801CBFF4
  W32(c->r[3]+0x00000028u,c->r[0]); // 801CBFF8
  c->r[0]=c->r[15]|c->r[15]; // 801CBFFC
  W32(c->r[1]+0x00000024u,c->r[15]); // 801CC000
  W32(c->r[17]+0x00000024u,c->r[16]); // 801CC004
  W32(c->r[17]+0x00000028u,c->r[18]); // 801CC008
  W32(c->r[17]+0x0000002Cu,c->r[19]); // 801CC00C
  W32(c->r[17]+0x00000030u,c->r[20]); // 801CC010
  W32(c->r[17]+0x00000044u,c->r[21]); // 801CC014
  W32(c->r[17]+0x00000048u,c->r[22]); // 801CC018
  W32(c->r[17]+0x0000004Cu,c->r[23]); // 801CC01C
  W32(c->r[17]+0x00000050u,c->r[24]); // 801CC020
  W32(c->r[17]+0x00000064u,c->r[25]); // 801CC024
  W32(c->r[17]+0x00000068u,c->r[26]); // 801CC028
  W32(c->r[17]+0x0000006Cu,c->r[27]); // 801CC02C
  W32(c->r[17]+0x00000070u,c->r[28]); // 801CC030
  W32(c->r[17]+0x00000084u,c->r[29]); // 801CC034
  W32(c->r[17]+0x00000088u,c->r[30]); // 801CC038
  W32(c->r[17]+0x0000008Cu,c->r[12]); // 801CC03C
  W32(c->r[17]+0x00000090u,c->r[11]); // 801CC040
  W32(c->r[17]+0x000000A4u,c->r[10]); // 801CC044
  W32(c->r[17]+0x000000A8u,c->r[9]); // 801CC048
  W32(c->r[17]+0x000000ACu,c->r[8]); // 801CC04C
  W32(c->r[17]+0x000000B0u,c->r[7]); // 801CC050
  W32(c->r[17]+0x000000C4u,c->r[6]); // 801CC054
  W32(c->r[17]+0x000000C8u,c->r[5]); // 801CC058
  W32(c->r[17]+0x000000CCu,c->r[4]); // 801CC05C
  W32(c->r[17]+0x000000E4u,c->r[14]); // 801CC060
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801CC064
  c->r[7]=0u+0x803E0000u; // 801CC068
  {uint32_t ea=c->r[7]+0x00005A10u; c->r[6]=R32(ea); c->r[7]=ea;} // 801CC06C
  c->r[17]=R32(c->r[13]+0xFFFF88FCu); // 801CC070
  c->r[4]=c->r[31]+0x00000308u; // 801CC074
  c->r[5]=R32(c->r[7]+0x00000004u); // 801CC078
  c->r[0]=R32(c->r[7]+0x00000008u); // 801CC07C
  c->r[18]=R32(c->r[13]+0xFFFF8900u); // 801CC080
  c->r[11]=R32(c->r[13]+0xFFFF88A8u); // 801CC084
  c->r[16]=R32(c->r[13]+0xFFFF8864u); // 801CC088
  c->r[15]=R32(c->r[13]+0xFFFF8868u); // 801CC08C
  c->r[14]=R32(c->r[13]+0xFFFF88A0u); // 801CC090
  c->r[12]=R32(c->r[13]+0xFFFF88A4u); // 801CC094
  c->r[10]=R32(c->r[13]+0xFFFF88ACu); // 801CC098
  c->r[9]=R32(c->r[13]+0xFFFF88D4u); // 801CC09C
  c->r[8]=R32(c->r[13]+0xFFFF88D8u); // 801CC0A0
  W32(c->r[3]+0x00000094u,c->r[11]); // 801CC0A4
  c->r[11]=c->r[1]+0x00000080u; // 801CC0A8
  W32(c->r[31]+0x00000308u,c->r[6]); // 801CC0AC
  W32(c->r[4]+0x00000004u,c->r[5]); // 801CC0B0
  W32(c->r[4]+0x00000008u,c->r[0]); // 801CC0B4
  W32(c->r[3]+0x0000004Cu,c->r[16]); // 801CC0B8
  W32(c->r[3]+0x00000050u,c->r[15]); // 801CC0BC
  W32(c->r[3]+0x00000070u,c->r[14]); // 801CC0C0
  W32(c->r[3]+0x00000074u,c->r[12]); // 801CC0C4
  W32(c->r[3]+0x00000078u,c->r[17]); // 801CC0C8
  W32(c->r[3]+0x0000007Cu,c->r[17]); // 801CC0CC
  W32(c->r[3]+0x00000098u,c->r[10]); // 801CC0D0
  W32(c->r[3]+0x0000009Cu,c->r[17]); // 801CC0D4
  W32(c->r[3]+0x000000A0u,c->r[17]); // 801CC0D8
  W32(c->r[3]+0x000000B8u,c->r[9]); // 801CC0DC
  W32(c->r[3]+0x000000BCu,c->r[8]); // 801CC0E0
  W32(c->r[3]+0x000000C0u,c->r[18]); // 801CC0E4
  W32(c->r[3]+0x000000C4u,c->r[18]); // 801CC0E8
  c->lr=0x801CC0F0u; f_80289E0C(c); // 801CC0EC
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CC0F0
  c->lr=c->r[0]; // 801CC0F4
  c->r[1]=c->r[1]+0x00000080u; // 801CC0F8
  return; // 801CC0FC
}

// fn_801CC100
void f_801CC100(Ctx* __restrict c) {
  trace_call(0x801CC100u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC100
  f_801C8728(c); return; // 801CC104
}

// fn_801CC108
void f_801CC108(Ctx* __restrict c) {
  trace_call(0x801CC108u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC108
  f_801C8810(c); return; // 801CC10C
}

// fn_801CC110
void f_801CC110(Ctx* __restrict c) {
  trace_call(0x801CC110u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC110
  f_801C87C4(c); return; // 801CC114
}

// fn_801CC118
void f_801CC118(Ctx* __restrict c) {
  trace_call(0x801CC118u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC118
  f_801C85D4(c); return; // 801CC11C
}

// fn_801CC120
void f_801CC120(Ctx* __restrict c) {
  trace_call(0x801CC120u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC120
  f_801C87C8(c); return; // 801CC124
}

// fn_801CC128
void f_801CC128(Ctx* __restrict c) {
  trace_call(0x801CC128u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC128
  f_801C872C(c); return; // 801CC12C
}

// fn_801CC130
void f_801CC130(Ctx* __restrict c) {
  trace_call(0x801CC130u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC130
  f_801CB180(c); return; // 801CC134
}

// fn_801CC138
void f_801CC138(Ctx* __restrict c) {
  trace_call(0x801CC138u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC138
  f_801C8724(c); return; // 801CC13C
}

// fn_801CC140
void f_801CC140(Ctx* __restrict c) {
  trace_call(0x801CC140u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC140
  f_801C880C(c); return; // 801CC144
}

// fn_801CC148
void f_801CC148(Ctx* __restrict c) {
  trace_call(0x801CC148u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC148
  f_801C87C0(c); return; // 801CC14C
}

// fn_801CC150
void f_801CC150(Ctx* __restrict c) {
  trace_call(0x801CC150u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC150
  f_801C865C(c); return; // 801CC154
}

// fn_801CC158
void f_801CC158(Ctx* __restrict c) {
  trace_call(0x801CC158u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC158
  f_801C8808(c); return; // 801CC15C
}

// fn_801CC160
void f_801CC160(Ctx* __restrict c) {
  trace_call(0x801CC160u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801CC160
  f_801C873C(c); return; // 801CC164
}

// fn_801CC168
void f_801CC168(Ctx* __restrict c) {
  trace_call(0x801CC168u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC168
  c->r[0]=c->lr; // 801CC16C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC170
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801CC174
  c->r[30]=0u+0x80440000u; // 801CC178
  c->r[3]=c->r[30]+0xFFFFA69Cu; // 801CC17C
  c->lr=0x801CC184u; f_80029E88(c); // 801CC180
  c->r[29]=c->r[3]|c->r[3]; // 801CC184
  c->r[3]=c->r[30]+0xFFFFA69Cu; // 801CC188
  c->r[4]=0u+0x00000000u; // 801CC18C
  c->lr=0x801CC194u; f_80029E7C(c); // 801CC190
  c->r[30]=c->r[3]|c->r[3]; // 801CC194
  c->lr=0x801CC19Cu; f_803778E8(c); // 801CC198
  c->r[31]=c->r[3]|c->r[3]; // 801CC19C
  c->lr=0x801CC1A4u; f_80051FF4(c); // 801CC1A0
  c->r[4]=c->r[31]|c->r[31]; // 801CC1A4
  c->r[5]=c->r[30]|c->r[30]; // 801CC1A8
  c->r[6]=c->r[29]|c->r[29]; // 801CC1AC
  c->r[7]=0u+0x00000000u; // 801CC1B0
  c->r[8]=0u+0x00000000u; // 801CC1B4
  c->lr=0x801CC1BCu; f_8013CB44(c); // 801CC1B8
  c->lr=0x801CC1C0u; f_80066EFC(c); // 801CC1BC
  c->r[4]=0u+0x00000014u; // 801CC1C0
  c->r[5]=0u+0x00000001u; // 801CC1C4
  c->lr=0x801CC1CCu; f_80042D5C(c); // 801CC1C8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801CC1CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC1D0
  c->lr=c->r[0]; // 801CC1D4
  c->r[1]=c->r[1]+0x00000020u; // 801CC1D8
  return; // 801CC1DC
}

// fn_801CC1E0
void f_801CC1E0(Ctx* __restrict c) {
  trace_call(0x801CC1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC1E0
  c->r[0]=c->lr; // 801CC1E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC1E8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CC1EC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CC1F0
  c->r[3]=0u+0x804D0000u; // 801CC1F4
  c->r[3]=c->r[3]+0x00003318u; // 801CC1F8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CC1FC
  c->lr=0x801CC204u; f_80051FF4(c); // 801CC200
  {uint32_t ea=c->r[2]+0xFFFFBB28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CC204
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[31]); // 801CC208
  c->lr=0x801CC210u; f_8013DD10(c); // 801CC20C
  c->lr=0x801CC214u; f_80051FF4(c); // 801CC210
  c->lr=0x801CC218u; f_8013D300(c); // 801CC214
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CC218
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC21C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CC220
  c->lr=c->r[0]; // 801CC224
  c->r[1]=c->r[1]+0x00000020u; // 801CC228
  return; // 801CC22C
}

// fn_801CC230
void f_801CC230(Ctx* __restrict c) {
  trace_call(0x801CC230u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC230
  c->r[0]=c->lr; // 801CC234
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CC238
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CC23C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CC240
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801CC244
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801CC248
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 801CC24C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 801CC250
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC254
  c->r[31]=0u+0x80440000u; // 801CC258
  c->r[3]=c->r[31]+0xFFFFA720u; // 801CC25C
  c->lr=0x801CC264u; f_8003ADA4(c); // 801CC260
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CC264
  if (crb(c,2)) { goto L_801CC2BC; } // 801CC268
  c->lr=0x801CC270u; f_80066EFC(c); // 801CC26C
  {uint32_t ea=c->r[3]+0x000002A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801CC270
  c->lr=0x801CC278u; f_80066EFC(c); // 801CC274
  {uint32_t ea=c->r[3]+0x000000D8u; c->f[29]=c->ps1[29]=RF32(ea);} // 801CC278
  c->r[3]=c->r[31]+0xFFFFA720u; // 801CC27C
  c->lr=0x801CC284u; f_8003ADA4(c); // 801CC280
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 801CC284
  if (crb(c,2)) { goto L_801CC2A4; } // 801CC288
  {uint32_t ea=c->r[2]+0xFFFFBB2Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801CC28C
  c->lr=0x801CC294u; f_80066EFC(c); // 801CC290
  {uint32_t ea=c->r[3]+0x000002A0u; WF32(ea,c->f[31]);} // 801CC294
  {uint32_t ea=c->r[2]+0xFFFFBB2Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801CC298
  c->lr=0x801CC2A0u; f_80066EFC(c); // 801CC29C
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[31]);} // 801CC2A0
L_801CC2A4:;
  c->lr=0x801CC2A8u; f_80051FF4(c); // 801CC2A4
  c->lr=0x801CC2ACu; f_8013D35C(c); // 801CC2A8
  c->lr=0x801CC2B0u; f_80066EFC(c); // 801CC2AC
  {uint32_t ea=c->r[3]+0x000002A0u; WF32(ea,c->f[30]);} // 801CC2B0
  c->lr=0x801CC2B8u; f_80066EFC(c); // 801CC2B4
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[29]);} // 801CC2B8
L_801CC2BC:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CC2BC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CC2C0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801CC2C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801CC2C8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 801CC2CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 801CC2D0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CC2D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC2D8
  c->lr=c->r[0]; // 801CC2DC
  c->r[1]=c->r[1]+0x00000040u; // 801CC2E0
  return; // 801CC2E4
}

// fn_801CC2E8
void f_801CC2E8(Ctx* __restrict c) {
  trace_call(0x801CC2E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC2E8
  c->r[0]=c->lr; // 801CC2EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC2F0
  c->lr=0x801CC2F8u; f_80051FF4(c); // 801CC2F4
  c->lr=0x801CC2FCu; f_8013D038(c); // 801CC2F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC2FC
  c->lr=c->r[0]; // 801CC300
  c->r[1]=c->r[1]+0x00000010u; // 801CC304
  return; // 801CC308
}

// fn_801CC30C
void f_801CC30C(Ctx* __restrict c) {
  trace_call(0x801CC30Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC30C
  c->r[0]=c->lr; // 801CC310
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801CC314
  c->r[11]=c->r[1]+0x000000C0u; // 801CC318
  c->lr=0x801CC320u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CC31C
  c->r[28]=c->r[3]|c->r[3]; // 801CC320
  c->r[29]=c->r[4]|c->r[4]; // 801CC324
  c->r[30]=c->r[5]|c->r[5]; // 801CC328
  c->r[31]=c->r[6]|c->r[6]; // 801CC32C
  c->r[3]=c->r[1]+0x0000005Cu; // 801CC330
  c->lr=0x801CC338u; f_80146A34(c); // 801CC334
  cmps(c,0,(int32_t)c->r[28],0); // 801CC338
  if (crb(c,2)) { goto L_801CC404; } // 801CC33C
  cmps(c,0,(int32_t)c->r[31],0); // 801CC340
  if (!crb(c,2)) { goto L_801CC34C; } // 801CC344
  c->r[31]=c->r[1]+0x0000005Cu; // 801CC348
L_801CC34C:;
  c->lr=0x801CC350u; f_80051FF4(c); // 801CC34C
  c->r[4]=c->r[3]|c->r[3]; // 801CC350
  c->r[5]=c->r[28]|c->r[28]; // 801CC354
  c->r[3]=c->r[1]+0x00000014u; // 801CC358
  c->r[6]=0u+0x00000001u; // 801CC35C
  c->lr=0x801CC364u; f_8013DB40(c); // 801CC360
  c->r[0]=0u+0x00000006u; // 801CC364
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 801CC368
  c->r[4]=c->r[1]+0x00000010u; // 801CC36C
  c->ctr=c->r[0]; // 801CC370
L_801CC374:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801CC374
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801CC378
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CC37C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801CC380
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CC374; } // 801CC384
  c->r[0]=R32(c->r[1]+0x00000048u); // 801CC388
  c->r[3]=c->r[31]+0x00000038u; // 801CC38C
  c->r[4]=c->r[1]+0x0000004Cu; // 801CC390
  W32(c->r[31]+0x00000034u,c->r[0]); // 801CC394
  c->lr=0x801CC39Cu; f_80350B88(c); // 801CC398
  c->r[4]=R32(c->r[1]+0x00000054u); // 801CC39C
  c->r[3]=c->r[31]|c->r[31]; // 801CC3A0
  c->r[0]=R32(c->r[1]+0x00000058u); // 801CC3A4
  W32(c->r[31]+0x00000040u,c->r[4]); // 801CC3A8
  W32(c->r[31]+0x00000044u,c->r[0]); // 801CC3AC
  c->lr=0x801CC3B4u; f_80146F08(c); // 801CC3B0
  cmps(c,0,(int32_t)c->r[3],0); // 801CC3B4
  if (crb(c,2)) { goto L_801CC404; } // 801CC3B8
  cmps(c,0,(int32_t)c->r[29],0); // 801CC3BC
  if (crb(c,2)) { goto L_801CC3D8; } // 801CC3C0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CC3C4
  c->r[3]=c->r[31]|c->r[31]; // 801CC3C8
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CC3CC
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CC3D0
  c->lr=0x801CC3D8u; f_80146A14(c); // 801CC3D4
L_801CC3D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CC3D8
  if (crb(c,2)) { goto L_801CC404; } // 801CC3DC
  c->r[5]=R32(c->r[30]+0x00000000u); // 801CC3E0
  c->r[3]=c->r[31]|c->r[31]; // 801CC3E4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CC3E8
  c->r[4]=c->r[1]+0x00000008u; // 801CC3EC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CC3F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CC3F4
  c->r[0]=R32(c->r[30]+0x00000008u); // 801CC3F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CC3FC
  c->lr=0x801CC404u; f_80146DB8(c); // 801CC400
L_801CC404:;
  c->r[11]=c->r[1]+0x000000C0u; // 801CC404
  c->lr=0x801CC40Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CC408
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801CC40C
  c->lr=c->r[0]; // 801CC410
  c->r[1]=c->r[1]+0x000000C0u; // 801CC414
  return; // 801CC418
}

// fn_801CC41C
void f_801CC41C(Ctx* __restrict c) {
  trace_call(0x801CC41Cu);
  {uint32_t ea=c->r[2]+0xFFFFBB2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CC41C
  c->r[3]=0u+0x80570000u; // 801CC420
  {uint32_t ea=c->r[2]+0xFFFFBB28u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CC424
  c->r[3]=c->r[3]+0x000000F0u; // 801CC428
  c->f[3]=c->f[1]; // 801CC42C
  f_8003F588(c); return; // 801CC430
}

// fn_801CC434
void f_801CC434(Ctx* __restrict c) {
  trace_call(0x801CC434u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC434
  c->r[0]=c->lr; // 801CC438
  c->r[4]=0u+0x801D0000u; // 801CC43C
  c->r[5]=0u+0x801D0000u; // 801CC440
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC444
  c->r[6]=0u+0x00000018u; // 801CC448
  c->r[4]=c->r[4]+0xFFFFC9E4u; // 801CC44C
  c->r[5]=c->r[5]+0xFFFFC9F4u; // 801CC450
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC454
  c->r[31]=c->r[3]|c->r[3]; // 801CC458
  c->r[7]=0u+0x00000040u; // 801CC45C
  c->lr=0x801CC464u; f_80289B34(c); // 801CC460
  c->r[0]=0u+0x00000000u; // 801CC464
  c->r[4]=c->r[31]+0x00000604u; // 801CC468
  W32(c->r[31]+0x00000604u,c->r[0]); // 801CC46C
  c->r[5]=c->r[31]+0x00000610u; // 801CC470
  c->r[3]=c->r[31]|c->r[31]; // 801CC474
  W32(c->r[31]+0x00000608u,c->r[0]); // 801CC478
  W32(c->r[31]+0x00000610u,c->r[0]); // 801CC47C
  W32(c->r[31]+0x00000614u,c->r[0]); // 801CC480
  W32(c->r[31]+0x00000600u,c->r[0]); // 801CC484
  W32(c->r[31]+0x00000604u,c->r[4]); // 801CC488
  W32(c->r[31]+0x00000608u,c->r[4]); // 801CC48C
  W32(c->r[31]+0x0000060Cu,c->r[0]); // 801CC490
  W32(c->r[31]+0x00000610u,c->r[5]); // 801CC494
  W32(c->r[31]+0x00000614u,c->r[5]); // 801CC498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC49C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC4A0
  c->lr=c->r[0]; // 801CC4A4
  c->r[1]=c->r[1]+0x00000010u; // 801CC4A8
  return; // 801CC4AC
}

// fn_801CC4B0
void f_801CC4B0(Ctx* __restrict c) {
  trace_call(0x801CC4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC4B0
  c->r[0]=c->lr; // 801CC4B4
  cmps(c,0,(int32_t)c->r[3],0); // 801CC4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC4BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC4C0
  c->r[31]=c->r[4]|c->r[4]; // 801CC4C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC4C8
  c->r[30]=c->r[3]|c->r[3]; // 801CC4CC
  if (crb(c,2)) { goto L_801CC524; } // 801CC4D0
  c->r[3]=addc(c,c->r[3],0x0000060Cu,0); cr0(c,c->r[3]); // 801CC4D4
  if (crb(c,2)) { goto L_801CC4E8; } // 801CC4D8
  if (crb(c,2)) { goto L_801CC4E8; } // 801CC4DC
  c->r[4]=0u+0x00000000u; // 801CC4E0
  c->lr=0x801CC4E8u; f_803B4FA4(c); // 801CC4E4
L_801CC4E8:;
  c->r[3]=addc(c,c->r[30],0x00000600u,0); cr0(c,c->r[3]); // 801CC4E8
  if (crb(c,2)) { goto L_801CC4FC; } // 801CC4EC
  if (crb(c,2)) { goto L_801CC4FC; } // 801CC4F0
  c->r[4]=0u+0x00000000u; // 801CC4F4
  c->lr=0x801CC4FCu; f_803B4FA4(c); // 801CC4F8
L_801CC4FC:;
  c->r[4]=0u+0x801D0000u; // 801CC4FC
  c->r[3]=c->r[30]|c->r[30]; // 801CC500
  c->r[4]=c->r[4]+0xFFFFC9F4u; // 801CC504
  c->r[5]=0u+0x00000018u; // 801CC508
  c->r[6]=0u+0x00000040u; // 801CC50C
  c->lr=0x801CC514u; f_80289C2C(c); // 801CC510
  cmps(c,0,(int32_t)c->r[31],0); // 801CC514
  if (!crb(c,1)) { goto L_801CC524; } // 801CC518
  c->r[3]=c->r[30]|c->r[30]; // 801CC51C
  c->lr=0x801CC524u; f_802896EC(c); // 801CC520
L_801CC524:;
  c->r[3]=c->r[30]|c->r[30]; // 801CC524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC528
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC52C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC530
  c->lr=c->r[0]; // 801CC534
  c->r[1]=c->r[1]+0x00000010u; // 801CC538
  return; // 801CC53C
}

// fn_801CC540
void f_801CC540(Ctx* __restrict c) {
  trace_call(0x801CC540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC540
  c->r[0]=c->lr; // 801CC544
  c->r[5]=0u+0x00000000u; // 801CC548
  c->r[4]=0u+0xFFFFFFFFu; // 801CC54C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC550
  c->r[0]=0u+0x00000004u; // 801CC554
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC558
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC55C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC560
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CC564
  c->r[28]=c->r[3]|c->r[3]; // 801CC568
  c->r[6]=c->r[28]|c->r[28]; // 801CC56C
  c->ctr=c->r[0]; // 801CC570
L_801CC574:;
  W32(c->r[6]+0x00000008u,c->r[5]); // 801CC574
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801CC578
  W32(c->r[6]+0x00000010u,c->r[4]); // 801CC57C
  W32(c->r[6]+0x00000014u,c->r[5]); // 801CC580
  W32(c->r[6]+0x00000020u,c->r[5]); // 801CC584
  W32(c->r[6]+0x00000024u,c->r[5]); // 801CC588
  W32(c->r[6]+0x00000028u,c->r[4]); // 801CC58C
  W32(c->r[6]+0x0000002Cu,c->r[5]); // 801CC590
  W32(c->r[6]+0x00000038u,c->r[5]); // 801CC594
  W32(c->r[6]+0x0000003Cu,c->r[5]); // 801CC598
  W32(c->r[6]+0x00000040u,c->r[4]); // 801CC59C
  W32(c->r[6]+0x00000044u,c->r[5]); // 801CC5A0
  W32(c->r[6]+0x00000050u,c->r[5]); // 801CC5A4
  W32(c->r[6]+0x00000054u,c->r[5]); // 801CC5A8
  W32(c->r[6]+0x00000058u,c->r[4]); // 801CC5AC
  W32(c->r[6]+0x0000005Cu,c->r[5]); // 801CC5B0
  W32(c->r[6]+0x00000068u,c->r[5]); // 801CC5B4
  W32(c->r[6]+0x0000006Cu,c->r[5]); // 801CC5B8
  W32(c->r[6]+0x00000070u,c->r[4]); // 801CC5BC
  W32(c->r[6]+0x00000074u,c->r[5]); // 801CC5C0
  W32(c->r[6]+0x00000080u,c->r[5]); // 801CC5C4
  W32(c->r[6]+0x00000084u,c->r[5]); // 801CC5C8
  W32(c->r[6]+0x00000088u,c->r[4]); // 801CC5CC
  W32(c->r[6]+0x0000008Cu,c->r[5]); // 801CC5D0
  W32(c->r[6]+0x00000098u,c->r[5]); // 801CC5D4
  W32(c->r[6]+0x0000009Cu,c->r[5]); // 801CC5D8
  W32(c->r[6]+0x000000A0u,c->r[4]); // 801CC5DC
  W32(c->r[6]+0x000000A4u,c->r[5]); // 801CC5E0
  W32(c->r[6]+0x000000B0u,c->r[5]); // 801CC5E4
  W32(c->r[6]+0x000000B4u,c->r[5]); // 801CC5E8
  W32(c->r[6]+0x000000B8u,c->r[4]); // 801CC5EC
  W32(c->r[6]+0x000000BCu,c->r[5]); // 801CC5F0
  W32(c->r[6]+0x000000C8u,c->r[5]); // 801CC5F4
  W32(c->r[6]+0x000000CCu,c->r[5]); // 801CC5F8
  W32(c->r[6]+0x000000D0u,c->r[4]); // 801CC5FC
  W32(c->r[6]+0x000000D4u,c->r[5]); // 801CC600
  W32(c->r[6]+0x000000E0u,c->r[5]); // 801CC604
  W32(c->r[6]+0x000000E4u,c->r[5]); // 801CC608
  W32(c->r[6]+0x000000E8u,c->r[4]); // 801CC60C
  W32(c->r[6]+0x000000ECu,c->r[5]); // 801CC610
  W32(c->r[6]+0x000000F8u,c->r[5]); // 801CC614
  W32(c->r[6]+0x000000FCu,c->r[5]); // 801CC618
  W32(c->r[6]+0x00000100u,c->r[4]); // 801CC61C
  W32(c->r[6]+0x00000104u,c->r[5]); // 801CC620
  W32(c->r[6]+0x00000110u,c->r[5]); // 801CC624
  W32(c->r[6]+0x00000114u,c->r[5]); // 801CC628
  W32(c->r[6]+0x00000118u,c->r[4]); // 801CC62C
  W32(c->r[6]+0x0000011Cu,c->r[5]); // 801CC630
  W32(c->r[6]+0x00000128u,c->r[5]); // 801CC634
  W32(c->r[6]+0x0000012Cu,c->r[5]); // 801CC638
  W32(c->r[6]+0x00000130u,c->r[4]); // 801CC63C
  W32(c->r[6]+0x00000134u,c->r[5]); // 801CC640
  W32(c->r[6]+0x00000140u,c->r[5]); // 801CC644
  W32(c->r[6]+0x00000144u,c->r[5]); // 801CC648
  W32(c->r[6]+0x00000148u,c->r[4]); // 801CC64C
  W32(c->r[6]+0x0000014Cu,c->r[5]); // 801CC650
  W32(c->r[6]+0x00000158u,c->r[5]); // 801CC654
  W32(c->r[6]+0x0000015Cu,c->r[5]); // 801CC658
  W32(c->r[6]+0x00000160u,c->r[4]); // 801CC65C
  W32(c->r[6]+0x00000164u,c->r[5]); // 801CC660
  W32(c->r[6]+0x00000170u,c->r[5]); // 801CC664
  W32(c->r[6]+0x00000174u,c->r[5]); // 801CC668
  W32(c->r[6]+0x00000178u,c->r[4]); // 801CC66C
  W32(c->r[6]+0x0000017Cu,c->r[5]); // 801CC670
  c->r[6]=c->r[6]+0x00000180u; // 801CC674
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CC574; } // 801CC678
  c->r[3]=c->r[3]+0x00000600u; // 801CC67C
  c->lr=0x801CC684u; f_803B5070(c); // 801CC680
  c->r[3]=c->r[28]+0x0000060Cu; // 801CC684
  c->lr=0x801CC68Cu; f_803B5070(c); // 801CC688
  c->r[30]=c->r[28]|c->r[28]; // 801CC68C
  c->r[31]=c->r[28]+0x00000604u; // 801CC690
  c->r[29]=0u+0x00000000u; // 801CC694
L_801CC698:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801CC698
  c->r[5]=c->r[30]|c->r[30]; // 801CC69C
  c->r[3]=c->r[28]+0x00000600u; // 801CC6A0
  c->r[4]=c->r[1]+0x00000008u; // 801CC6A4
  c->lr=0x801CC6ACu; f_803B50B4(c); // 801CC6A8
  c->r[29]=c->r[29]+0x00000001u; // 801CC6AC
  c->r[30]=c->r[30]+0x00000018u; // 801CC6B0
  cmpu(c,0,c->r[29],0x00000040u); // 801CC6B4
  if (crb(c,0)) { IRQCHK(c); goto L_801CC698; } // 801CC6B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC6BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC6C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC6C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC6C8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CC6CC
  c->lr=c->r[0]; // 801CC6D0
  c->r[1]=c->r[1]+0x00000020u; // 801CC6D4
  return; // 801CC6D8
}

// fn_801CC6DC
void f_801CC6DC(Ctx* __restrict c) {
  trace_call(0x801CC6DCu);
  c->r[0]=0u+0x00000004u; // 801CC6DC
  c->r[5]=0u+0x00000000u; // 801CC6E0
  c->r[4]=0u+0xFFFFFFFFu; // 801CC6E4
  c->ctr=c->r[0]; // 801CC6E8
L_801CC6EC:;
  W32(c->r[3]+0x00000008u,c->r[5]); // 801CC6EC
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801CC6F0
  W32(c->r[3]+0x00000010u,c->r[4]); // 801CC6F4
  W32(c->r[3]+0x00000014u,c->r[5]); // 801CC6F8
  W32(c->r[3]+0x00000020u,c->r[5]); // 801CC6FC
  W32(c->r[3]+0x00000024u,c->r[5]); // 801CC700
  W32(c->r[3]+0x00000028u,c->r[4]); // 801CC704
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801CC708
  W32(c->r[3]+0x00000038u,c->r[5]); // 801CC70C
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 801CC710
  W32(c->r[3]+0x00000040u,c->r[4]); // 801CC714
  W32(c->r[3]+0x00000044u,c->r[5]); // 801CC718
  W32(c->r[3]+0x00000050u,c->r[5]); // 801CC71C
  W32(c->r[3]+0x00000054u,c->r[5]); // 801CC720
  W32(c->r[3]+0x00000058u,c->r[4]); // 801CC724
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 801CC728
  W32(c->r[3]+0x00000068u,c->r[5]); // 801CC72C
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 801CC730
  W32(c->r[3]+0x00000070u,c->r[4]); // 801CC734
  W32(c->r[3]+0x00000074u,c->r[5]); // 801CC738
  W32(c->r[3]+0x00000080u,c->r[5]); // 801CC73C
  W32(c->r[3]+0x00000084u,c->r[5]); // 801CC740
  W32(c->r[3]+0x00000088u,c->r[4]); // 801CC744
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 801CC748
  W32(c->r[3]+0x00000098u,c->r[5]); // 801CC74C
  W32(c->r[3]+0x0000009Cu,c->r[5]); // 801CC750
  W32(c->r[3]+0x000000A0u,c->r[4]); // 801CC754
  W32(c->r[3]+0x000000A4u,c->r[5]); // 801CC758
  W32(c->r[3]+0x000000B0u,c->r[5]); // 801CC75C
  W32(c->r[3]+0x000000B4u,c->r[5]); // 801CC760
  W32(c->r[3]+0x000000B8u,c->r[4]); // 801CC764
  W32(c->r[3]+0x000000BCu,c->r[5]); // 801CC768
  W32(c->r[3]+0x000000C8u,c->r[5]); // 801CC76C
  W32(c->r[3]+0x000000CCu,c->r[5]); // 801CC770
  W32(c->r[3]+0x000000D0u,c->r[4]); // 801CC774
  W32(c->r[3]+0x000000D4u,c->r[5]); // 801CC778
  W32(c->r[3]+0x000000E0u,c->r[5]); // 801CC77C
  W32(c->r[3]+0x000000E4u,c->r[5]); // 801CC780
  W32(c->r[3]+0x000000E8u,c->r[4]); // 801CC784
  W32(c->r[3]+0x000000ECu,c->r[5]); // 801CC788
  W32(c->r[3]+0x000000F8u,c->r[5]); // 801CC78C
  W32(c->r[3]+0x000000FCu,c->r[5]); // 801CC790
  W32(c->r[3]+0x00000100u,c->r[4]); // 801CC794
  W32(c->r[3]+0x00000104u,c->r[5]); // 801CC798
  W32(c->r[3]+0x00000110u,c->r[5]); // 801CC79C
  W32(c->r[3]+0x00000114u,c->r[5]); // 801CC7A0
  W32(c->r[3]+0x00000118u,c->r[4]); // 801CC7A4
  W32(c->r[3]+0x0000011Cu,c->r[5]); // 801CC7A8
  W32(c->r[3]+0x00000128u,c->r[5]); // 801CC7AC
  W32(c->r[3]+0x0000012Cu,c->r[5]); // 801CC7B0
  W32(c->r[3]+0x00000130u,c->r[4]); // 801CC7B4
  W32(c->r[3]+0x00000134u,c->r[5]); // 801CC7B8
  W32(c->r[3]+0x00000140u,c->r[5]); // 801CC7BC
  W32(c->r[3]+0x00000144u,c->r[5]); // 801CC7C0
  W32(c->r[3]+0x00000148u,c->r[4]); // 801CC7C4
  W32(c->r[3]+0x0000014Cu,c->r[5]); // 801CC7C8
  W32(c->r[3]+0x00000158u,c->r[5]); // 801CC7CC
  W32(c->r[3]+0x0000015Cu,c->r[5]); // 801CC7D0
  W32(c->r[3]+0x00000160u,c->r[4]); // 801CC7D4
  W32(c->r[3]+0x00000164u,c->r[5]); // 801CC7D8
  W32(c->r[3]+0x00000170u,c->r[5]); // 801CC7DC
  W32(c->r[3]+0x00000174u,c->r[5]); // 801CC7E0
  W32(c->r[3]+0x00000178u,c->r[4]); // 801CC7E4
  W32(c->r[3]+0x0000017Cu,c->r[5]); // 801CC7E8
  c->r[3]=c->r[3]+0x00000180u; // 801CC7EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CC6EC; } // 801CC7F0
  return; // 801CC7F4
}

// fn_801CC7F8
void f_801CC7F8(Ctx* __restrict c) {
  trace_call(0x801CC7F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC7F8
  c->r[0]=c->lr; // 801CC7FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CC800
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801CC804
  c->r[26]=c->r[3]|c->r[3]; // 801CC808
  c->r[27]=c->r[4]|c->r[4]; // 801CC80C
  c->r[28]=c->r[5]|c->r[5]; // 801CC810
  c->r[29]=c->r[6]|c->r[6]; // 801CC814
  c->r[30]=c->r[7]|c->r[7]; // 801CC818
  c->r[3]=c->r[1]+0x00000010u; // 801CC81C
  c->r[4]=0u+0x00000000u; // 801CC820
  c->r[5]=0u+0x00000004u; // 801CC824
  c->lr=0x801CC82Cu; f_800043EC(c); // 801CC828
  c->r[4]=R32(c->r[26]+0x00000610u); // 801CC82C
  c->r[0]=c->r[26]+0x00000610u; // 801CC830
  goto L_801CC84C; // 801CC834
L_801CC838:;
  c->r[3]=R32(c->r[4]+0x00000010u); // 801CC838
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 801CC83C
  if (!crb(c,2)) { goto L_801CC848; } // 801CC840
  goto L_801CC858; // 801CC844
L_801CC848:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801CC848
L_801CC84C:;
  cmpu(c,0,c->r[4],c->r[0]); // 801CC84C
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC838; } // 801CC850
  c->r[4]=0u+0x00000000u; // 801CC854
L_801CC858:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CC858
  if (crb(c,2)) { goto L_801CC868; } // 801CC85C
  c->r[3]=R32(c->r[1]+0x00000010u); // 801CC860
  goto L_801CC8BC; // 801CC864
L_801CC868:;
  c->r[0]=R32(c->r[26]+0x00000600u); // 801CC868
  cmps(c,0,(int32_t)c->r[0],0); // 801CC86C
  if (!crb(c,2)) { goto L_801CC87C; } // 801CC870
  c->r[3]=R32(c->r[1]+0x00000010u); // 801CC874
  goto L_801CC8BC; // 801CC878
L_801CC87C:;
  c->r[31]=R32(c->r[26]+0x00000604u); // 801CC87C
  c->r[3]=c->r[26]+0x00000600u; // 801CC880
  c->r[4]=c->r[1]+0x0000000Cu; // 801CC884
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC888
  c->lr=0x801CC890u; f_803B5028(c); // 801CC88C
  c->r[0]=c->r[26]+0x00000610u; // 801CC890
  c->r[5]=c->r[31]|c->r[31]; // 801CC894
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CC898
  c->r[3]=c->r[26]+0x0000060Cu; // 801CC89C
  c->r[4]=c->r[1]+0x00000008u; // 801CC8A0
  c->lr=0x801CC8A8u; f_803B50B4(c); // 801CC8A4
  W32(c->r[31]+0x00000008u,c->r[29]); // 801CC8A8
  c->r[3]=c->r[31]|c->r[31]; // 801CC8AC
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 801CC8B0
  W32(c->r[31]+0x00000010u,c->r[27]); // 801CC8B4
  W32(c->r[31]+0x00000014u,c->r[28]); // 801CC8B8
L_801CC8BC:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801CC8BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CC8C0
  c->lr=c->r[0]; // 801CC8C4
  c->r[1]=c->r[1]+0x00000030u; // 801CC8C8
  return; // 801CC8CC
}

// fn_801CC8D0
void f_801CC8D0(Ctx* __restrict c) {
  trace_call(0x801CC8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC8D0
  c->r[0]=c->lr; // 801CC8D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC8D8
  c->r[0]=c->r[3]+0x00000610u; // 801CC8DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC8E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC8E4
  c->r[30]=c->r[3]|c->r[3]; // 801CC8E8
  c->r[31]=R32(c->r[3]+0x00000610u); // 801CC8EC
  goto L_801CC934; // 801CC8F0
L_801CC8F4:;
  c->r[5]=R32(c->r[31]+0x00000010u); // 801CC8F4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801CC8F8
  if (!crb(c,2)) { goto L_801CC930; } // 801CC8FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC900
  c->r[3]=c->r[3]+0x0000060Cu; // 801CC904
  c->r[4]=c->r[1]+0x0000000Cu; // 801CC908
  c->lr=0x801CC910u; f_803B5028(c); // 801CC90C
  c->r[0]=c->r[30]+0x00000604u; // 801CC910
  c->r[5]=c->r[31]|c->r[31]; // 801CC914
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CC918
  c->r[3]=c->r[30]+0x00000600u; // 801CC91C
  c->r[4]=c->r[1]+0x00000008u; // 801CC920
  c->lr=0x801CC928u; f_803B50B4(c); // 801CC924
  c->r[3]=0u+0x00000001u; // 801CC928
  goto L_801CC940; // 801CC92C
L_801CC930:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CC930
L_801CC934:;
  cmpu(c,0,c->r[31],c->r[0]); // 801CC934
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC8F4; } // 801CC938
  c->r[3]=0u+0x00000000u; // 801CC93C
L_801CC940:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC940
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC944
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC948
  c->lr=c->r[0]; // 801CC94C
  c->r[1]=c->r[1]+0x00000020u; // 801CC950
  return; // 801CC954
}

