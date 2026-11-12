#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801CC958
void f_801CC958(Ctx* __restrict c) {
  trace_call(0x801CC958u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC958
  c->r[0]=c->lr; // 801CC95C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC960
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC964
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC968
  c->r[30]=c->r[3]+0x00000610u; // 801CC96C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC970
  c->r[29]=c->r[5]|c->r[5]; // 801CC974
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CC978
  c->r[28]=c->r[4]|c->r[4]; // 801CC97C
  c->r[31]=R32(c->r[3]+0x00000610u); // 801CC980
  goto L_801CC9B8; // 801CC984
L_801CC988:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC988
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CC98C
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CC990
  c->r[0]=c->r[0]&c->r[29]; cr0(c,c->r[0]); // 801CC994
  if (crb(c,2)) { goto L_801CC9B8; } // 801CC998
  c->r[4]=R32(c->r[3]+0x00000010u); // 801CC99C
  c->r[3]=c->r[28]|c->r[28]; // 801CC9A0
  c->lr=0x801CC9A8u; f_8012162C(c); // 801CC9A4
  cmps(c,0,(int32_t)c->r[3],0); // 801CC9A8
  if (!crb(c,2)) { goto L_801CC9B8; } // 801CC9AC
  c->r[3]=0u+0x00000000u; // 801CC9B0
  goto L_801CC9C4; // 801CC9B4
L_801CC9B8:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CC9B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC988; } // 801CC9BC
  c->r[3]=0u+0x00000001u; // 801CC9C0
L_801CC9C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC9C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC9C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC9CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC9D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CC9D4
  c->lr=c->r[0]; // 801CC9D8
  c->r[1]=c->r[1]+0x00000020u; // 801CC9DC
  return; // 801CC9E0
}

// fn_801CC9E4
void f_801CC9E4(Ctx* __restrict c) {
  trace_call(0x801CC9E4u);
  c->r[0]=0u+0x00000000u; // 801CC9E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CC9E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801CC9EC
  return; // 801CC9F0
}

// fn_801CC9F4
void f_801CC9F4(Ctx* __restrict c) {
  trace_call(0x801CC9F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC9F4
  c->r[0]=c->lr; // 801CC9F8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC9FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCA00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCA04
  c->r[31]=c->r[3]|c->r[3]; // 801CCA08
  if (crb(c,2)) { goto L_801CCA1C; } // 801CCA0C
  cmps(c,0,(int32_t)c->r[4],0); // 801CCA10
  if (!crb(c,1)) { goto L_801CCA1C; } // 801CCA14
  c->lr=0x801CCA1Cu; f_802896EC(c); // 801CCA18
L_801CCA1C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CCA1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCA20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCA24
  c->lr=c->r[0]; // 801CCA28
  c->r[1]=c->r[1]+0x00000010u; // 801CCA2C
  return; // 801CCA30
}

// fn_801CCA34
void f_801CCA34(Ctx* __restrict c) {
  trace_call(0x801CCA34u);
  return; // 801CCA34
}

// fn_801CCA38
void f_801CCA38(Ctx* __restrict c) {
  trace_call(0x801CCA38u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCA38
  if (!crb(c,6)) { goto L_801CCA60; } // 801CCA3C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801CCA40
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801CCA44
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801CCA48
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801CCA4C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801CCA50
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801CCA54
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801CCA58
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801CCA5C
L_801CCA60:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CCA60
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CCA64
  W32(c->r[1]+0x00000010u,c->r[5]); // 801CCA68
  W32(c->r[1]+0x00000014u,c->r[6]); // 801CCA6C
  W32(c->r[1]+0x00000018u,c->r[7]); // 801CCA70
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801CCA74
  W32(c->r[1]+0x00000020u,c->r[9]); // 801CCA78
  W32(c->r[1]+0x00000024u,c->r[10]); // 801CCA7C
  c->r[1]=c->r[1]+0x00000070u; // 801CCA80
  return; // 801CCA84
}

// fn_801CCA88
void f_801CCA88(Ctx* __restrict c) {
  trace_call(0x801CCA88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCA88
  c->r[0]=c->lr; // 801CCA8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCA90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCA94
  c->r[31]=c->r[3]|c->r[3]; // 801CCA98
  c->lr=0x801CCAA0u; f_801E2A78(c); // 801CCA9C
  c->r[5]=0u+0x80400000u; // 801CCAA0
  c->r[3]=c->r[31]+0x00002168u; // 801CCAA4
  c->r[5]=c->r[5]+0x00003FCCu; // 801CCAA8
  c->r[4]=c->r[5]+0x00000040u; // 801CCAAC
  W32(c->r[31]+0x00000010u,c->r[5]); // 801CCAB0
  c->r[0]=c->r[5]+0x0000041Cu; // 801CCAB4
  W32(c->r[31]+0x00000048u,c->r[4]); // 801CCAB8
  W32(c->r[31]+0x00001F6Cu,c->r[0]); // 801CCABC
  c->lr=0x801CCAC4u; f_80123B54(c); // 801CCAC0
  c->r[3]=c->r[31]+0x000021A8u; // 801CCAC4
  c->lr=0x801CCACCu; f_8006EB38(c); // 801CCAC8
  c->r[0]=R32(c->r[31]+0x00002150u); // 801CCACC
  c->r[3]=0u+0x00000002u; // 801CCAD0
  W32(c->r[31]+0x0000215Cu,c->r[3]); // 801CCAD4
  c->r[3]=c->r[31]|c->r[31]; // 801CCAD8
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 801CCADC
  W32(c->r[31]+0x00002150u,c->r[0]); // 801CCAE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCAE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCAE8
  c->lr=c->r[0]; // 801CCAEC
  c->r[1]=c->r[1]+0x00000010u; // 801CCAF0
  return; // 801CCAF4
}

// dtor_801CCAF8
void f_801CCAF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCAF8
  c->r[0]=c->lr; // 801CCAFC
  cmps(c,0,(int32_t)c->r[3],0); // 801CCB00
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCB04
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801CCB08
  c->r[30]=c->r[3]|c->r[3]; // 801CCB0C
  c->r[31]=c->r[4]|c->r[4]; // 801CCB10
  if (crb(c,2)) { goto L_801CCC68; } // 801CCB14
  if (crb(c,2)) { goto L_801CCC58; } // 801CCB18
  if (crb(c,2)) { goto L_801CCC58; } // 801CCB1C
  c->r[0]=addc(c,c->r[3],0x00001054u,0); cr0(c,c->r[0]); // 801CCB20
  if (crb(c,2)) { goto L_801CCB34; } // 801CCB24
  c->r[4]=0u+0xFFFFFFFFu; // 801CCB28
  c->r[3]=c->r[3]+0x00001060u; // 801CCB2C
  c->lr=0x801CCB34u; f_80046394(c); // 801CCB30
L_801CCB34:;
  c->r[0]=addc(c,c->r[30],0x00000EDCu,0); cr0(c,c->r[0]); // 801CCB34
  if (crb(c,2)) { goto L_801CCB48; } // 801CCB38
  c->r[3]=c->r[30]+0x00000F54u; // 801CCB3C
  c->r[4]=0u+0xFFFFFFFFu; // 801CCB40
  c->lr=0x801CCB48u; f_800A4EEC(c); // 801CCB44
L_801CCB48:;
  c->r[3]=addc(c,c->r[30],0x000008D0u,0); cr0(c,c->r[3]); // 801CCB48
  if (crb(c,2)) { goto L_801CCBE8; } // 801CCB4C
  c->r[0]=R32(c->r[30]+0x000008D8u); // 801CCB50
  c->r[4]=0u+0x80400000u; // 801CCB54
  c->r[4]=c->r[4]+0x000054F8u; // 801CCB58
  cmps(c,0,(int32_t)c->r[0],0); // 801CCB5C
  W32(c->r[30]+0x000008D0u,c->r[4]); // 801CCB60
  if (crb(c,2)) { goto L_801CCB8C; } // 801CCB64
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CCB68
  c->r[12]=R32(c->r[12]+0x00000020u); // 801CCB6C
  c->ctr=c->r[12]; // 801CCB70
  if (true) { c->lr=0x801CCB78u; dispatch(c,c->ctr); } // 801CCB74
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801CCB78
  c->r[3]=c->r[30]+0x000008D0u; // 801CCB7C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CCB80
  c->ctr=c->r[12]; // 801CCB84
  if (true) { c->lr=0x801CCB8Cu; dispatch(c,c->ctr); } // 801CCB88
L_801CCB8C:;
  c->r[3]=c->r[30]+0x00000C20u; // 801CCB8C
  c->r[4]=0u+0xFFFFFFFFu; // 801CCB90
  c->lr=0x801CCB98u; f_80164EA0(c); // 801CCB94
  c->r[3]=c->r[30]+0x00000BE8u; // 801CCB98
  c->r[4]=0u+0xFFFFFFFFu; // 801CCB9C
  c->lr=0x801CCBA4u; f_80164EA0(c); // 801CCBA0
  c->r[3]=c->r[30]+0x00000BB0u; // 801CCBA4
  c->r[4]=0u+0xFFFFFFFFu; // 801CCBA8
  c->lr=0x801CCBB0u; f_80164EA0(c); // 801CCBAC
  c->r[4]=0u+0x80070000u; // 801CCBB0
  c->r[3]=c->r[30]+0x00000AA8u; // 801CCBB4
  c->r[4]=c->r[4]+0x000059F8u; // 801CCBB8
  c->r[5]=0u+0x00000058u; // 801CCBBC
  c->r[6]=0u+0x00000003u; // 801CCBC0
  c->lr=0x801CCBC8u; f_80289C2C(c); // 801CCBC4
  c->r[0]=addc(c,c->r[30],0x000008D0u,0); cr0(c,c->r[0]); // 801CCBC8
  if (crb(c,2)) { goto L_801CCBE8; } // 801CCBCC
  c->r[3]=c->r[30]+0x000009F4u; // 801CCBD0
  c->r[4]=0u+0xFFFFFFFFu; // 801CCBD4
  c->lr=0x801CCBDCu; f_80141D80(c); // 801CCBD8
  c->r[3]=c->r[30]+0x000008D0u; // 801CCBDC
  c->r[4]=0u+0x00000000u; // 801CCBE0
  c->lr=0x801CCBE8u; f_80030FCC(c); // 801CCBE4
L_801CCBE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CCBE8
  if (crb(c,2)) { goto L_801CCC58; } // 801CCBEC
  c->r[3]=c->r[30]+0x00000830u; // 801CCBF0
  c->r[4]=0u+0xFFFFFFFFu; // 801CCBF4
  c->lr=0x801CCBFCu; f_80075650(c); // 801CCBF8
  c->r[3]=c->r[30]+0x00000800u; // 801CCBFC
  c->r[4]=0u+0xFFFFFFFFu; // 801CCC00
  c->lr=0x801CCC08u; f_800756A8(c); // 801CCC04
  cmps(c,0,(int32_t)c->r[30],0); // 801CCC08
  if (crb(c,2)) { goto L_801CCC58; } // 801CCC0C
  if (crb(c,2)) { goto L_801CCC58; } // 801CCC10
  c->r[3]=c->r[30]+0x00000030u; // 801CCC14
  c->r[4]=0u+0xFFFFFFFFu; // 801CCC18
  c->lr=0x801CCC20u; f_8003FD8C(c); // 801CCC1C
  cmps(c,0,(int32_t)c->r[30],0); // 801CCC20
  if (crb(c,2)) { goto L_801CCC58; } // 801CCC24
  c->r[3]=R32(c->r[30]+0x00000000u); // 801CCC28
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CCC2C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CCC30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CCC34
  c->lr=0x801CCC3Cu; f_8003F2FC(c); // 801CCC38
  c->lr=0x801CCC40u; f_8003F2FC(c); // 801CCC3C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801CCC40
  c->r[0]=0u+0x00000000u; // 801CCC44
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801CCC48
  c->r[3]=c->r[3]+c->r[4]; // 801CCC4C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CCC50
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801CCC54
L_801CCC58:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CCC58
  if (!crb(c,1)) { goto L_801CCC68; } // 801CCC5C
  c->r[3]=c->r[30]|c->r[30]; // 801CCC60
  c->lr=0x801CCC68u; f_802896EC(c); // 801CCC64
L_801CCC68:;
  c->r[3]=c->r[30]|c->r[30]; // 801CCC68
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801CCC6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CCC70
  c->lr=c->r[0]; // 801CCC74
  c->r[1]=c->r[1]+0x00000020u; // 801CCC78
  return; // 801CCC7C
}

// fn_801CCC80
void f_801CCC80(Ctx* __restrict c) {
  trace_call(0x801CCC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCC80
  c->r[0]=c->lr; // 801CCC84
  cmps(c,0,(int32_t)c->r[3],0); // 801CCC88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCC8C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801CCC90
  c->r[30]=c->r[3]|c->r[3]; // 801CCC94
  c->r[31]=c->r[4]|c->r[4]; // 801CCC98
  if (crb(c,2)) { goto L_801CCCB8; } // 801CCC9C
  c->r[4]=0u+0x00000000u; // 801CCCA0
  c->lr=0x801CCCA8u; f_801CCAF8(c); // 801CCCA4
  cmps(c,0,(int32_t)c->r[31],0); // 801CCCA8
  if (!crb(c,1)) { goto L_801CCCB8; } // 801CCCAC
  c->r[3]=c->r[30]|c->r[30]; // 801CCCB0
  c->lr=0x801CCCB8u; f_802896EC(c); // 801CCCB4
L_801CCCB8:;
  c->r[3]=c->r[30]|c->r[30]; // 801CCCB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801CCCBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCCC0
  c->lr=c->r[0]; // 801CCCC4
  c->r[1]=c->r[1]+0x00000010u; // 801CCCC8
  return; // 801CCCCC
}

// fn_801CCCD0
void f_801CCCD0(Ctx* __restrict c) {
  trace_call(0x801CCCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCCD0
  c->r[0]=c->lr; // 801CCCD4
  c->r[4]=c->r[3]+0x00000FF8u; // 801CCCD8
  c->r[5]=0u+0x00000001u; // 801CCCDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCCE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CCCE4
  c->r[31]=c->r[3]|c->r[3]; // 801CCCE8
  c->lr=0x801CCCF0u; f_80076080(c); // 801CCCEC
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 801CCCF0
  c->r[3]=c->r[31]+0x00000FF8u; // 801CCCF4
  c->r[4]=0u+0x00000000u; // 801CCCF8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CCCFC
  c->ctr=c->r[12]; // 801CCD00
  if (true) { c->lr=0x801CCD08u; dispatch(c,c->ctr); } // 801CCD04
  c->r[12]=R32(c->r[31]+0x00000010u); // 801CCD08
  c->r[3]=c->r[31]|c->r[31]; // 801CCD0C
  c->r[12]=R32(c->r[12]+0x00000338u); // 801CCD10
  c->ctr=c->r[12]; // 801CCD14
  if (true) { c->lr=0x801CCD1Cu; dispatch(c,c->ctr); } // 801CCD18
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 801CCD1C
  c->r[4]=c->r[3]|c->r[3]; // 801CCD20
  c->r[3]=c->r[31]+0x00000FF8u; // 801CCD24
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CCD28
  c->ctr=c->r[12]; // 801CCD2C
  if (true) { c->lr=0x801CCD34u; dispatch(c,c->ctr); } // 801CCD30
  c->r[3]=c->r[31]+0x00001F18u; // 801CCD34
  c->lr=0x801CCD3Cu; f_801E24C0(c); // 801CCD38
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCD3C
  c->r[4]=0u+0x00000000u; // 801CCD40
  c->r[0]=0u+0x00000002u; // 801CCD44
  W32(c->r[31]+0x00002158u,c->r[4]); // 801CCD48
  c->f[3]=c->f[1]; // 801CCD4C
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CCD50
  {uint32_t ea=c->r[31]+0x00002154u; WF32(ea,c->f[1]);} // 801CCD54
  c->r[3]=c->r[1]+0x00000008u; // 801CCD58
  W32(c->r[31]+0x0000215Cu,c->r[0]); // 801CCD5C
  W32(c->r[31]+0x00002164u,c->r[4]); // 801CCD60
  c->lr=0x801CCD68u; f_800521A0(c); // 801CCD64
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCD68
  c->r[3]=c->r[31]+0x00002168u; // 801CCD6C
  c->r[4]=c->r[1]+0x00000008u; // 801CCD70
  c->lr=0x801CCD78u; f_80123C84(c); // 801CCD74
  c->r[3]=R32(c->r[31]+0x00002288u); // 801CCD78
  c->r[5]=0u+0x00000032u; // 801CCD7C
  c->r[4]=R32(c->r[31]+0x00002150u); // 801CCD80
  c->r[0]=0u+0x00000008u; // 801CCD84
  c->r[3]=c->r[3]|0x20000000u; // 801CCD88
  W32(c->r[31]+0x000021A4u,c->r[5]); // 801CCD8C
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 801CCD90
  c->r[4]=rotl(c->r[4],0)&0xBFFFFFFFu; // 801CCD94
  c->r[3]=rotl(c->r[3],0)&0xE3FFFFFFu; // 801CCD98
  W32(c->r[31]+0x00002150u,c->r[4]); // 801CCD9C
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801CCDA0
  c->r[5]=0u+0x00000000u; // 801CCDA4
  W32(c->r[31]+0x00002288u,c->r[3]); // 801CCDA8
  c->r[4]=0u+0x00000001u; // 801CCDAC
  c->ctr=c->r[0]; // 801CCDB0
L_801CCDB4:;
  c->r[3]=c->r[31]+c->r[5]; // 801CCDB4
  c->r[5]=c->r[5]+0x00000001u; // 801CCDB8
  W8(c->r[3]+0x00002280u,c->r[4]); // 801CCDBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CCDB4; } // 801CCDC0
  {uint32_t ea=c->r[2]+0xFFFFBB64u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCDC4
  {uint32_t ea=c->r[31]+0x0000214Cu; WF32(ea,c->f[0]);} // 801CCDC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CCDCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CCDD0
  c->lr=c->r[0]; // 801CCDD4
  c->r[1]=c->r[1]+0x00000020u; // 801CCDD8
  return; // 801CCDDC
}

// fn_801CCDE0
void f_801CCDE0(Ctx* __restrict c) {
  trace_call(0x801CCDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCDE0
  c->r[0]=c->lr; // 801CCDE4
  cmps(c,0,(int32_t)c->r[4],2); // 801CCDE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CCDEC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CCDF0
  c->r[31]=c->r[6]|c->r[6]; // 801CCDF4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CCDF8
  c->r[30]=c->r[3]|c->r[3]; // 801CCDFC
  c->r[0]=R32(c->r[3]+0x00002288u); // 801CCE00
  c->r[0]=(rotl(c->r[7],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 801CCE04
  W32(c->r[3]+0x00002158u,c->r[4]); // 801CCE08
  W32(c->r[3]+0x0000215Cu,c->r[5]); // 801CCE0C
  W32(c->r[3]+0x00002288u,c->r[0]); // 801CCE10
  if (!crb(c,2)) { goto L_801CCE40; } // 801CCE14
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCE18
  c->r[3]=c->r[1]+0x00000010u; // 801CCE1C
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CCE20
  c->f[3]=c->f[1]; // 801CCE24
  c->lr=0x801CCE2Cu; f_800521A0(c); // 801CCE28
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCE2C
  c->r[3]=c->r[30]+0x00002168u; // 801CCE30
  c->r[4]=c->r[1]+0x00000010u; // 801CCE34
  c->lr=0x801CCE3Cu; f_80123C84(c); // 801CCE38
  goto L_801CCE50; // 801CCE3C
L_801CCE40:;
  cmps(c,0,(int32_t)c->r[4],1); // 801CCE40
  if (!crb(c,2)) { goto L_801CCE50; } // 801CCE44
  c->r[0]=0u+0x00000001u; // 801CCE48
  W32(c->r[3]+0x0000215Cu,c->r[0]); // 801CCE4C
L_801CCE50:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CCE50
  if (crb(c,2)) { goto L_801CCE60; } // 801CCE54
  c->r[0]=0u+0x00000001u; // 801CCE58
  W32(c->r[30]+0x0000215Cu,c->r[0]); // 801CCE5C
L_801CCE60:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801CCE60
  c->r[3]=c->r[30]|c->r[30]; // 801CCE64
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CCE68
  c->ctr=c->r[12]; // 801CCE6C
  if (true) { c->lr=0x801CCE74u; dispatch(c,c->ctr); } // 801CCE70
  c->r[0]=c->r[4]+0x38000000u; // 801CCE74
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CCE78
  cmpu(c,0,c->r[0],0x00000014u); // 801CCE7C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CCE80
  if (!crb(c,2)) { goto L_801CCE90; } // 801CCE84
  c->r[0]=0u+0x00000001u; // 801CCE88
  goto L_801CCEC4; // 801CCE8C
L_801CCE90:;
  c->r[3]=0u+0xC8000000u; // 801CCE90
  c->r[6]=rotl(c->r[4],0)&0xFFFF0000u; // 801CCE94
  c->r[3]=c->r[3]+0x00000014u; // 801CCE98
  c->r[5]=0u+0x00000000u; // 801CCE9C
  c->r[4]=0u+0x00000001u; // 801CCEA0
  goto L_801CCEAC; // 801CCEA4
L_801CCEA8:;
  c->r[5]=c->r[5]+0x00000001u; // 801CCEA8
L_801CCEAC:;
  c->r[7]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 801CCEAC
  c->r[0]=c->r[7]&c->r[3]; cr0(c,c->r[0]); // 801CCEB0
  if (crb(c,2)) { IRQCHK(c); goto L_801CCEA8; } // 801CCEB4
  c->r[3]=c->r[6]&c->r[7]; // 801CCEB8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801CCEBC
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801CCEC0
L_801CCEC4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CCEC4
  if (crb(c,2)) { goto L_801CCEE0; } // 801CCEC8
  {uint32_t ea=c->r[2]+0xFFFFBB6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCECC
  {uint32_t ea=c->r[2]+0xFFFFBB70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCED0
  {uint32_t ea=c->r[30]+0x00002160u; WF32(ea,c->f[1]);} // 801CCED4
  {uint32_t ea=c->r[30]+0x00001048u; WF32(ea,c->f[0]);} // 801CCED8
  goto L_801CCEF0; // 801CCEDC
L_801CCEE0:;
  {uint32_t ea=c->r[2]+0xFFFFBB74u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCEE0
  {uint32_t ea=c->r[2]+0xFFFFBB78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCEE4
  {uint32_t ea=c->r[30]+0x00002160u; WF32(ea,c->f[1]);} // 801CCEE8
  {uint32_t ea=c->r[30]+0x00001048u; WF32(ea,c->f[0]);} // 801CCEEC
L_801CCEF0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CCEF0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CCEF4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CCEF8
  c->lr=c->r[0]; // 801CCEFC
  c->r[1]=c->r[1]+0x00000030u; // 801CCF00
  return; // 801CCF04
}

// fn_801CCF08
void f_801CCF08(Ctx* __restrict c) {
  trace_call(0x801CCF08u);
  c->r[4]=R32(c->r[3]+0x0000215Cu); // 801CCF08
  c->r[0]=c->r[4]+0xFFFFFFFDu; // 801CCF0C
  cmpu(c,0,c->r[0],0x00000001u); // 801CCF10
  if (crb(c,1)) { goto L_801CCF44; } // 801CCF14
  c->r[4]=0u+0x80570000u; // 801CCF18
  c->r[0]=R32(c->r[3]+0x00001F18u); // 801CCF1C
  c->r[4]=c->r[4]+0x000002C4u; // 801CCF20
  cmpu(c,0,c->r[0],c->r[4]); // 801CCF24
  if (crb(c,2)) { goto L_801CCF44; } // 801CCF28
  c->r[3]=0u+0x80570000u; // 801CCF2C
  c->r[3]=c->r[3]+0x000002ECu; // 801CCF30
  cmpu(c,0,c->r[0],c->r[3]); // 801CCF34
  if (crb(c,2)) { goto L_801CCF44; } // 801CCF38
  c->r[3]=0u+0x00000001u; // 801CCF3C
  return; // 801CCF40
L_801CCF44:;
  c->r[3]=0u+0x00000000u; // 801CCF44
  return; // 801CCF48
}

// fn_801CCF4C
void f_801CCF4C(Ctx* __restrict c) {
  trace_call(0x801CCF4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCF4C
  c->r[0]=c->lr; // 801CCF50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCF54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801CCF58
  c->r[30]=c->r[3]|c->r[3]; // 801CCF5C
  c->r[31]=c->r[4]|c->r[4]; // 801CCF60
  c->r[3]=c->r[3]+0x00001F70u; // 801CCF64
  c->lr=0x801CCF6Cu; f_801E4BF8(c); // 801CCF68
  c->r[3]=c->r[30]|c->r[30]; // 801CCF6C
  c->r[4]=0u+0x00000005u; // 801CCF70
  c->lr=0x801CCF78u; f_801E3330(c); // 801CCF74
  cmps(c,0,(int32_t)c->r[31],0); // 801CCF78
  c->r[3]=0u+0x00000003u; // 801CCF7C
  if (crb(c,2)) { goto L_801CCF88; } // 801CCF80
  c->r[3]=0u+0x00000004u; // 801CCF84
L_801CCF88:;
  c->r[0]=R32(c->r[30]+0x00002150u); // 801CCF88
  W32(c->r[30]+0x0000215Cu,c->r[3]); // 801CCF8C
  c->r[0]=c->r[0]|0x40000000u; // 801CCF90
  W32(c->r[30]+0x00002150u,c->r[0]); // 801CCF94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801CCF98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCF9C
  c->lr=c->r[0]; // 801CCFA0
  c->r[1]=c->r[1]+0x00000010u; // 801CCFA4
  return; // 801CCFA8
}

// fn_801CCFAC
void f_801CCFAC(Ctx* __restrict c) {
  trace_call(0x801CCFACu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCFAC
  c->r[0]=c->lr; // 801CCFB0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801CCFB4
  W32(c->r[1]+0x000000DCu,c->r[31]); // 801CCFB8
  c->r[31]=c->r[3]|c->r[3]; // 801CCFBC
  c->r[3]=c->r[1]+0x00000074u; // 801CCFC0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CCFC4
  c->r[4]=c->r[31]+0x000008D0u; // 801CCFC8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CCFCC
  c->ctr=c->r[12]; // 801CCFD0
  if (true) { c->lr=0x801CCFD8u; dispatch(c,c->ctr); } // 801CCFD4
  c->r[3]=c->r[1]+0x00000020u; // 801CCFD8
  c->r[4]=c->r[1]+0x00000074u; // 801CCFDC
  c->lr=0x801CCFE4u; f_80032FD8(c); // 801CCFE0
  c->r[3]=c->r[31]+0x00001FB0u; // 801CCFE4
  c->r[4]=c->r[1]+0x00000020u; // 801CCFE8
  c->lr=0x801CCFF0u; f_8003F468(c); // 801CCFEC
  c->r[3]=c->r[31]+0x00001F70u; // 801CCFF0
  c->lr=0x801CCFF8u; f_801E4524(c); // 801CCFF4
  c->r[3]=c->r[31]|c->r[31]; // 801CCFF8
  c->lr=0x801CD000u; f_801E2D68(c); // 801CCFFC
  c->r[3]=c->r[31]+0x00001F70u; // 801CD000
  c->lr=0x801CD008u; f_801E44C0(c); // 801CD004
  c->r[0]=R32(c->r[31]+0x0000215Cu); // 801CD008
  cmps(c,0,(int32_t)c->r[0],1); // 801CD00C
  if (crb(c,2)) { goto L_801CD058; } // 801CD010
  {uint32_t ea=c->r[31]+0x00001FC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD014
  c->r[3]=c->r[1]+0x00000038u; // 801CD018
  {uint32_t ea=c->r[31]+0x00001FBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD01C
  c->lr=0x801CD024u; f_80124134(c); // 801CD020
  c->r[3]=c->r[1]+0x000000A4u; // 801CD024
  c->r[4]=c->r[1]+0x00000038u; // 801CD028
  c->r[5]=c->r[31]+0x00002168u; // 801CD02C
  c->lr=0x801CD034u; f_80074DF8(c); // 801CD030
  c->r[3]=c->r[1]+0x000000A4u; // 801CD034
  c->r[4]=c->r[31]+0x00001FB0u; // 801CD038
  c->lr=0x801CD040u; f_80032FF4(c); // 801CD03C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CD040
  c->r[3]=c->r[31]+0x000008D0u; // 801CD044
  c->r[4]=c->r[1]+0x000000A4u; // 801CD048
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CD04C
  c->ctr=c->r[12]; // 801CD050
  if (true) { c->lr=0x801CD058u; dispatch(c,c->ctr); } // 801CD054
L_801CD058:;
  c->r[0]=R32(c->r[31]+0x0000215Cu); // 801CD058
  cmps(c,0,(int32_t)c->r[0],1); // 801CD05C
  if (crb(c,2)) { goto L_801CD0E0; } // 801CD060
  c->r[0]=R32(c->r[31]+0x00002158u); // 801CD064
  cmps(c,0,(int32_t)c->r[0],2); // 801CD068
  if (!crb(c,2)) { goto L_801CD088; } // 801CD06C
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD070
  c->r[3]=c->r[1]+0x0000002Cu; // 801CD074
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD078
  c->f[3]=c->f[1]; // 801CD07C
  c->lr=0x801CD084u; f_80065358(c); // 801CD080
  goto L_801CD0D4; // 801CD084
L_801CD088:;
  cmps(c,0,(int32_t)c->r[0],1); // 801CD088
  if (!crb(c,2)) { goto L_801CD0C0; } // 801CD08C
  {uint32_t ea=c->r[31]+0x00002168u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD090
  c->r[3]=c->r[1]+0x00000014u; // 801CD094
  {uint32_t ea=c->r[31]+0x0000216Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD098
  {uint32_t ea=c->r[31]+0x00002170u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD09C
  c->f[1]=-c->f[1]; // 801CD0A0
  c->f[2]=-c->f[2]; // 801CD0A4
  c->f[3]=-c->f[0]; // 801CD0A8
  c->lr=0x801CD0B0u; f_800521A0(c); // 801CD0AC
  c->r[3]=c->r[1]+0x0000002Cu; // 801CD0B0
  c->r[4]=c->r[1]+0x00000014u; // 801CD0B4
  c->lr=0x801CD0BCu; f_8003F468(c); // 801CD0B8
  goto L_801CD0D4; // 801CD0BC
L_801CD0C0:;
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD0C0
  c->r[3]=c->r[1]+0x0000002Cu; // 801CD0C4
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD0C8
  c->f[3]=c->f[1]; // 801CD0CC
  c->lr=0x801CD0D4u; f_80065358(c); // 801CD0D0
L_801CD0D4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD0D4
  c->r[4]=c->r[1]+0x0000002Cu; // 801CD0D8
  c->lr=0x801CD0E0u; f_801E3480(c); // 801CD0DC
L_801CD0E0:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CD0E0
  c->r[4]=c->r[31]+0x000008D0u; // 801CD0E4
  c->r[3]=c->r[1]+0x00000044u; // 801CD0E8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CD0EC
  c->ctr=c->r[12]; // 801CD0F0
  if (true) { c->lr=0x801CD0F8u; dispatch(c,c->ctr); } // 801CD0F4
  c->r[3]=c->r[1]+0x00000008u; // 801CD0F8
  c->r[4]=c->r[1]+0x00000044u; // 801CD0FC
  c->lr=0x801CD104u; f_80032FD8(c); // 801CD100
  c->r[3]=c->r[31]+0x00001FB0u; // 801CD104
  c->r[4]=c->r[1]+0x00000008u; // 801CD108
  c->lr=0x801CD110u; f_8003F468(c); // 801CD10C
  c->r[3]=c->r[31]+0x00001F70u; // 801CD110
  c->lr=0x801CD118u; f_801E4524(c); // 801CD114
  c->r[4]=0u+0x804D0000u; // 801CD118
  c->r[3]=c->r[31]+0x00002168u; // 801CD11C
  c->r[4]=c->r[4]+0x00003318u; // 801CD120
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD124
  c->lr=0x801CD12Cu; f_80123B88(c); // 801CD128
  c->r[3]=R32(c->r[31]+0x00002288u); // 801CD12C
  c->r[0]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[0]); // 801CD130
  if (crb(c,2)) { goto L_801CD178; } // 801CD134
  c->r[0]=rotl(c->r[3],5)&0x00000001u; cr0(c,c->r[0]); // 801CD138
  if (crb(c,2)) { goto L_801CD178; } // 801CD13C
  c->r[0]=rotl(c->r[3],6)&0x00000001u; // 801CD140
  c->r[0]=cntlz(c->r[0]); // 801CD144
  c->r[3]=(rotl(c->r[0],21)&0x04000000u)|(c->r[3]&~0x04000000u); // 801CD148
  c->r[0]=rotl(c->r[3],6)&0x00000001u; cr0(c,c->r[0]); // 801CD14C
  c->r[0]=rotl(c->r[3],0)&0xF7FFFFFFu; // 801CD150
  W32(c->r[31]+0x00002288u,c->r[0]); // 801CD154
  if (crb(c,2)) { goto L_801CD16C; } // 801CD158
  c->r[3]=c->r[31]|c->r[31]; // 801CD15C
  c->r[4]=0u+0x00000003u; // 801CD160
  c->lr=0x801CD168u; f_801E3330(c); // 801CD164
  goto L_801CD178; // 801CD168
L_801CD16C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD16C
  c->r[4]=0u+0x0000000Cu; // 801CD170
  c->lr=0x801CD178u; f_801E3330(c); // 801CD174
L_801CD178:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801CD178
  c->r[31]=R32(c->r[1]+0x000000DCu); // 801CD17C
  c->lr=c->r[0]; // 801CD180
  c->r[1]=c->r[1]+0x000000E0u; // 801CD184
  return; // 801CD188
}

// fn_801CD18C
void f_801CD18C(Ctx* __restrict c) {
  trace_call(0x801CD18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD18C
  c->r[0]=c->lr; // 801CD190
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CD194
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801CD198
  c->r[31]=c->r[3]|c->r[3]; // 801CD19C
  c->lr=0x801CD1A4u; f_800ADCD8(c); // 801CD1A0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CD1A4
  c->r[4]=c->r[31]+0x000008D0u; // 801CD1A8
  c->r[3]=c->r[1]+0x00000014u; // 801CD1AC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CD1B0
  c->ctr=c->r[12]; // 801CD1B4
  if (true) { c->lr=0x801CD1BCu; dispatch(c,c->ctr); } // 801CD1B8
  c->r[3]=c->r[1]+0x00000008u; // 801CD1BC
  c->r[4]=c->r[1]+0x00000014u; // 801CD1C0
  c->lr=0x801CD1C8u; f_80032FD8(c); // 801CD1C4
  c->r[3]=c->r[31]+0x00001FB0u; // 801CD1C8
  c->r[4]=c->r[1]+0x00000008u; // 801CD1CC
  c->lr=0x801CD1D4u; f_8003F468(c); // 801CD1D0
  c->r[3]=c->r[31]+0x00001F70u; // 801CD1D4
  c->lr=0x801CD1DCu; f_801E4524(c); // 801CD1D8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801CD1DC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801CD1E0
  c->lr=c->r[0]; // 801CD1E4
  c->r[1]=c->r[1]+0x00000050u; // 801CD1E8
  return; // 801CD1EC
}

// fn_801CD1F0
void f_801CD1F0(Ctx* __restrict c) {
  trace_call(0x801CD1F0u);
  return; // 801CD1F0
}

// fn_801CD1F4
void f_801CD1F4(Ctx* __restrict c) {
  trace_call(0x801CD1F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD1F4
  c->r[0]=c->lr; // 801CD1F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD1FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD200
  c->r[31]=0u+0x80570000u; // 801CD204
  c->r[31]=c->r[31]+0x00000100u; // 801CD208
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD20C
  c->r[30]=c->r[3]|c->r[3]; // 801CD210
  c->lr=0x801CD218u; f_80291D94(c); // 801CD214
  c->r[4]=0u+0x00000064u; // 801CD218
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 801CD21C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801CD220
  c->r[3]=c->r[3]-c->r[0]; // 801CD224
  c->r[0]=c->r[3]+0x00000001u; // 801CD228
  cmps(c,0,(int32_t)c->r[0],48); // 801CD22C
  if (!crb(c,0)) { goto L_801CD244; } // 801CD230
  c->r[3]=c->r[30]+0x00001F18u; // 801CD234
  c->r[4]=c->r[31]+0x0000000Cu; // 801CD238
  c->lr=0x801CD240u; f_801E2514(c); // 801CD23C
  goto L_801CD268; // 801CD240
L_801CD244:;
  cmps(c,0,(int32_t)c->r[0],96); // 801CD244
  if (!crb(c,0)) { goto L_801CD25C; } // 801CD248
  c->r[3]=c->r[30]+0x00001F18u; // 801CD24C
  c->r[4]=c->r[31]+0x00000034u; // 801CD250
  c->lr=0x801CD258u; f_801E2514(c); // 801CD254
  goto L_801CD268; // 801CD258
L_801CD25C:;
  c->r[3]=c->r[30]+0x00001F18u; // 801CD25C
  c->r[4]=c->r[31]+0x0000005Cu; // 801CD260
  c->lr=0x801CD268u; f_801E2514(c); // 801CD264
L_801CD268:;
  c->r[3]=c->r[30]+0x00001F70u; // 801CD268
  c->lr=0x801CD270u; f_801E4BF8(c); // 801CD26C
  c->lr=0x801CD274u; f_80291D94(c); // 801CD270
  c->r[3]=c->r[3]^0x80000000u; // 801CD274
  c->r[0]=0u+0x43300000u; // 801CD278
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CD27C
  {uint32_t ea=c->r[2]+0xFFFFBB88u; c->f[3]=RF64(ea);} // 801CD280
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CD284
  {uint32_t ea=c->r[2]+0xFFFFBB7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD288
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CD28C
  {uint32_t ea=c->r[2]+0xFFFFBB80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD290
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801CD294
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD298
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801CD29C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801CD2A0
  {uint32_t ea=c->r[30]+0x00002154u; WF32(ea,c->f[0]);} // 801CD2A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD2A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD2AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD2B0
  c->lr=c->r[0]; // 801CD2B4
  c->r[1]=c->r[1]+0x00000020u; // 801CD2B8
  return; // 801CD2BC
}

// fn_801CD2C0
void f_801CD2C0(Ctx* __restrict c) {
  trace_call(0x801CD2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD2C0
  c->r[0]=c->lr; // 801CD2C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CD2C8
  c->r[11]=c->r[1]+0x00000050u; // 801CD2CC
  c->lr=0x801CD2D4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD2D0
  c->r[31]=c->r[1]|c->r[1]; // 801CD2D4
  c->r[0]=R32(c->r[3]+0x00001F28u); // 801CD2D8
  c->r[30]=c->r[3]|c->r[3]; // 801CD2DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801CD2E0
  if (!crb(c,2)) { goto L_801CD400; } // 801CD2E4
  {uint32_t ea=c->r[3]+0x00002154u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD2E8
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD2EC
  fcmp(c,0,c->f[1],c->f[0]); // 801CD2F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CD2F4
  if (!crb(c,2)) { goto L_801CD400; } // 801CD2F8
  c->r[0]=R32(c->r[3]+0x00002288u); // 801CD2FC
  c->r[0]=rotl(c->r[0],6)&0x00000001u; cr0(c,c->r[0]); // 801CD300
  if (!crb(c,2)) { goto L_801CD314; } // 801CD304
  c->lr=0x801CD30Cu; f_80291D94(c); // 801CD308
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CD30C
  if (crb(c,2)) { goto L_801CD3D8; } // 801CD310
L_801CD314:;
  c->r[3]=R32(c->r[30]+0x00000054u); // 801CD314
  cmps(c,0,(int32_t)c->r[3],0); // 801CD318
  if (crb(c,2)) { goto L_801CD384; } // 801CD31C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD320
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CD324
  c->ctr=c->r[12]; // 801CD328
  if (true) { c->lr=0x801CD330u; dispatch(c,c->ctr); } // 801CD32C
  c->lr=0x801CD334u; f_8007A658(c); // 801CD330
  c->r[29]=c->r[3]|c->r[3]; // 801CD334
  c->r[3]=0u+0x00000003u; // 801CD338
  c->lr=0x801CD340u; f_8007A658(c); // 801CD33C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801CD340
  if (!crb(c,1)) { goto L_801CD37C; } // 801CD344
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801CD348
  if (crb(c,2)) { goto L_801CD374; } // 801CD34C
  W32(c->r[31]+0x00000034u,c->r[1]); // 801CD350
  c->r[3]=c->r[29]|c->r[29]; // 801CD354
  c->r[4]=c->r[13]+0xFFFF815Eu; // 801CD358
  c->lr=0x801CD360u; f_800761D8(c); // 801CD35C
  c->r[3]=0u+0x803F0000u; // 801CD360
  c->r[0]=0u+0x00000001u; // 801CD364
  c->r[3]=c->r[3]+0x00006794u; // 801CD368
  W32(c->r[29]+0x00000010u,c->r[0]); // 801CD36C
  W32(c->r[29]+0x00000000u,c->r[3]); // 801CD370
L_801CD374:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801CD374
  goto L_801CD400; // 801CD378
L_801CD37C:;
  c->r[0]=0u+0x00000000u; // 801CD37C
  W32(c->r[30]+0x00000054u,c->r[0]); // 801CD380
L_801CD384:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801CD384
  c->r[0]=c->r[3]+0x00000001u; // 801CD388
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CD38C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801CD390
  c->r[0]=c->r[0]^c->r[3]; // 801CD394
  c->r[0]=c->r[0]-c->r[3]; // 801CD398
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801CD39C
  c->r[0]=c->r[30]+c->r[0]; // 801CD3A0
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801CD3A4
  if (crb(c,2)) { goto L_801CD3D0; } // 801CD3A8
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801CD3AC
  c->r[3]=c->r[29]|c->r[29]; // 801CD3B0
  c->r[4]=c->r[13]+0xFFFF815Eu; // 801CD3B4
  c->lr=0x801CD3BCu; f_800761D8(c); // 801CD3B8
  c->r[3]=0u+0x803F0000u; // 801CD3BC
  c->r[0]=0u+0x00000001u; // 801CD3C0
  c->r[3]=c->r[3]+0x00006794u; // 801CD3C4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801CD3C8
  W32(c->r[29]+0x00000010u,c->r[0]); // 801CD3CC
L_801CD3D0:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801CD3D0
  goto L_801CD400; // 801CD3D4
L_801CD3D8:;
  c->r[0]=R32(c->r[30]+0x00002288u); // 801CD3D8
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 801CD3DC
  if (crb(c,2)) { goto L_801CD3F4; } // 801CD3E0
  c->r[3]=c->r[30]|c->r[30]; // 801CD3E4
  c->r[4]=0u+0x00000008u; // 801CD3E8
  c->lr=0x801CD3F0u; f_801E3330(c); // 801CD3EC
  goto L_801CD400; // 801CD3F0
L_801CD3F4:;
  c->r[3]=c->r[30]|c->r[30]; // 801CD3F4
  c->r[4]=0u+0x0000000Cu; // 801CD3F8
  c->lr=0x801CD400u; f_801E3330(c); // 801CD3FC
L_801CD400:;
  c->r[3]=0u+0x804D0000u; // 801CD400
  c->r[10]=c->r[31]|c->r[31]; // 801CD404
  c->r[3]=c->r[3]+0x00003318u; // 801CD408
  {uint32_t ea=c->r[30]+0x00002154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD40C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD410
  c->r[11]=c->r[10]+0x00000050u; // 801CD414
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CD418
  {uint32_t ea=c->r[30]+0x00002154u; WF32(ea,c->f[0]);} // 801CD41C
  c->lr=0x801CD424u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CD420
  c->r[10]=R32(c->r[1]+0x00000000u); // 801CD424
  c->r[0]=R32(c->r[10]+0x00000004u); // 801CD428
  c->r[1]=c->r[10]|c->r[10]; // 801CD42C
  c->lr=c->r[0]; // 801CD430
  return; // 801CD434
}

// fn_801CD438
void f_801CD438(Ctx* __restrict c) {
  trace_call(0x801CD438u);
  return; // 801CD438
}

// fn_801CD43C
void f_801CD43C(Ctx* __restrict c) {
  trace_call(0x801CD43Cu);
  return; // 801CD43C
}

// fn_801CD440
void f_801CD440(Ctx* __restrict c) {
  trace_call(0x801CD440u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD440
  c->r[0]=c->lr; // 801CD444
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801CD448
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801CD44C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801CD450
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 801CD454
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 801CD458
  c->r[11]=c->r[1]+0x00000090u; // 801CD45C
  c->lr=0x801CD464u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD460
  c->r[0]=R32(c->r[3]+0x0000215Cu); // 801CD464
  c->r[28]=c->r[3]|c->r[3]; // 801CD468
  {uint32_t ea=c->r[2]+0xFFFFBB90u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CD46C
  c->r[31]=c->r[5]|c->r[5]; // 801CD470
  cmps(c,0,(int32_t)c->r[0],2); // 801CD474
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801CD478
  c->r[30]=0u+0x00000000u; // 801CD47C
  c->r[29]=0u+0x00000000u; // 801CD480
  if (crb(c,2)) { goto L_801CD52C; } // 801CD484
  if (!crb(c,0)) { goto L_801CD49C; } // 801CD488
  cmps(c,0,(int32_t)c->r[0],0); // 801CD48C
  if (crb(c,2)) { goto L_801CD4AC; } // 801CD490
  if (!crb(c,0)) { goto L_801CD4D8; } // 801CD494
  goto L_801CD5F4; // 801CD498
L_801CD49C:;
  cmps(c,0,(int32_t)c->r[0],4); // 801CD49C
  if (crb(c,2)) { goto L_801CD5CC; } // 801CD4A0
  if (!crb(c,0)) { goto L_801CD5F4; } // 801CD4A4
  goto L_801CD598; // 801CD4A8
L_801CD4AC:;
  c->f[1]=c->f[30]; // 801CD4AC
  {uint32_t ea=c->r[2]+0xFFFFBB94u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CD4B0
  c->f[2]=c->f[30]; // 801CD4B4
  c->r[3]=c->r[3]+0x00001F70u; // 801CD4B8
  c->f[3]=c->f[31]; // 801CD4BC
  c->lr=0x801CD4C4u; f_801AC6C4(c); // 801CD4C0
  c->r[0]=0u+0x00000000u; // 801CD4C4
  c->r[29]=0u+0x00000001u; // 801CD4C8
  W32(c->r[28]+0x00002058u,c->r[0]); // 801CD4CC
  W32(c->r[28]+0x000008CCu,c->r[0]); // 801CD4D0
  goto L_801CD5F4; // 801CD4D4
L_801CD4D8:;
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD4D8
  c->r[4]=c->r[28]+0x000008A4u; // 801CD4DC
  {uint32_t ea=c->r[3]+0x000008C8u; WF32(ea,c->f[0]);} // 801CD4E0
  c->r[3]=c->r[1]+0x00000038u; // 801CD4E4
  c->lr=0x801CD4ECu; f_800B83D4(c); // 801CD4E8
  c->r[3]=c->r[31]+0x00000010u; // 801CD4EC
  c->r[4]=c->r[1]+0x00000038u; // 801CD4F0
  c->lr=0x801CD4F8u; f_8003F468(c); // 801CD4F4
  {uint32_t ea=c->r[2]+0xFFFFBB98u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD4F8
  c->r[4]=c->r[28]+0x000008D0u; // 801CD4FC
  c->r[3]=c->r[1]+0x00000044u; // 801CD500
  {uint32_t ea=c->r[28]+0x000021D8u; WF32(ea,c->f[0]);} // 801CD504
  c->r[12]=R32(c->r[28]+0x000008D0u); // 801CD508
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CD50C
  c->ctr=c->r[12]; // 801CD510
  if (true) { c->lr=0x801CD518u; dispatch(c,c->ctr); } // 801CD514
  c->r[3]=c->r[28]+0x000021A8u; // 801CD518
  c->r[4]=c->r[1]+0x00000044u; // 801CD51C
  c->lr=0x801CD524u; f_8006EB9C(c); // 801CD520
  c->r[29]=0u+0x00000001u; // 801CD524
  goto L_801CD5F4; // 801CD528
L_801CD52C:;
  c->lr=0x801CD530u; f_80061A4C(c); // 801CD52C
  c->r[5]=c->r[3]|c->r[3]; // 801CD530
  c->r[3]=c->r[1]+0x00000008u; // 801CD534
  c->r[4]=c->r[5]+0x00000390u; // 801CD538
  c->r[5]=c->r[5]+0x00000384u; // 801CD53C
  c->lr=0x801CD544u; f_8007B8A4(c); // 801CD540
  c->r[3]=c->r[1]+0x00000008u; // 801CD544
  c->r[4]=c->r[1]+0x00000014u; // 801CD548
  c->lr=0x801CD550u; f_80265750(c); // 801CD54C
  c->lr=0x801CD554u; f_80061A4C(c); // 801CD550
  {uint32_t ea=c->r[28]+0x00002160u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD554
  c->r[31]=c->r[3]|c->r[3]; // 801CD558
  c->r[3]=c->r[1]+0x00000020u; // 801CD55C
  c->r[4]=c->r[1]+0x00000014u; // 801CD560
  c->lr=0x801CD568u; f_800FACB4(c); // 801CD564
  c->r[3]=c->r[1]+0x0000002Cu; // 801CD568
  c->r[4]=c->r[31]+0x00000384u; // 801CD56C
  c->r[5]=c->r[1]+0x00000020u; // 801CD570
  c->lr=0x801CD578u; f_801011E8(c); // 801CD574
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD578
  c->f[2]=c->f[30]; // 801CD57C
  c->f[3]=c->f[31]; // 801CD580
  c->r[3]=c->r[28]+0x00001F70u; // 801CD584
  c->f[4]=c->f[1]; // 801CD588
  c->r[4]=c->r[1]+0x0000002Cu; // 801CD58C
  c->lr=0x801CD594u; f_801AC5E8(c); // 801CD590
  goto L_801CD5F4; // 801CD594
L_801CD598:;
  c->r[0]=R32(c->r[3]+0x00002150u); // 801CD598
  c->r[4]=0u+0x00000000u; // 801CD59C
  {uint32_t ea=c->r[2]+0xFFFFBB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD5A0
  c->r[30]=0u+0x00000001u; // 801CD5A4
  c->r[0]=c->r[0]|0x60000000u; // 801CD5A8
  W32(c->r[3]+0x00002158u,c->r[4]); // 801CD5AC
  {uint32_t ea=c->r[3]+0x000021A0u; WF32(ea,c->f[30]);} // 801CD5B0
  W32(c->r[3]+0x00002150u,c->r[0]); // 801CD5B4
  W32(c->r[3]+0x0000219Cu,c->r[4]); // 801CD5B8
  {uint32_t ea=c->r[3]+0x00002154u; WF32(ea,c->f[0]);} // 801CD5BC
  c->r[3]=c->r[3]+0x00001F70u; // 801CD5C0
  c->lr=0x801CD5C8u; f_801E4BF8(c); // 801CD5C4
  goto L_801CD5F4; // 801CD5C8
L_801CD5CC:;
  c->r[0]=R32(c->r[3]+0x00002150u); // 801CD5CC
  c->r[4]=0u+0x00000000u; // 801CD5D0
  W32(c->r[3]+0x00002158u,c->r[4]); // 801CD5D4
  c->r[30]=0u+0x00000001u; // 801CD5D8
  c->r[0]=c->r[0]|0x60000000u; // 801CD5DC
  {uint32_t ea=c->r[3]+0x000021A0u; WF32(ea,c->f[30]);} // 801CD5E0
  W32(c->r[3]+0x00002150u,c->r[0]); // 801CD5E4
  W32(c->r[3]+0x0000219Cu,c->r[4]); // 801CD5E8
  c->r[3]=c->r[3]+0x00001F70u; // 801CD5EC
  c->lr=0x801CD5F4u; f_801E4BF8(c); // 801CD5F0
L_801CD5F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CD5F4
  if (crb(c,2)) { goto L_801CD608; } // 801CD5F8
  c->r[3]=c->r[28]|c->r[28]; // 801CD5FC
  c->lr=0x801CD604u; f_801CED48(c); // 801CD600
  goto L_801CD64C; // 801CD604
L_801CD608:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CD608
  if (crb(c,2)) { goto L_801CD630; } // 801CD60C
  c->r[4]=0u+0x80570000u; // 801CD610
  c->r[0]=R32(c->r[28]+0x00001F18u); // 801CD614
  c->r[4]=c->r[4]+0x00000134u; // 801CD618
  cmpu(c,0,c->r[0],c->r[4]); // 801CD61C
  if (crb(c,2)) { goto L_801CD64C; } // 801CD620
  c->r[3]=c->r[28]+0x00001F18u; // 801CD624
  c->lr=0x801CD62Cu; f_801E2514(c); // 801CD628
  goto L_801CD64C; // 801CD62C
L_801CD630:;
  c->r[4]=0u+0x80570000u; // 801CD630
  c->r[0]=R32(c->r[28]+0x00001F18u); // 801CD634
  c->r[4]=c->r[4]+0x000001ACu; // 801CD638
  cmpu(c,0,c->r[0],c->r[4]); // 801CD63C
  if (crb(c,2)) { goto L_801CD64C; } // 801CD640
  c->r[3]=c->r[28]+0x00001F18u; // 801CD644
  c->lr=0x801CD64Cu; f_801E2514(c); // 801CD648
L_801CD64C:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 801CD64C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801CD650
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 801CD654
  c->r[11]=c->r[1]+0x00000090u; // 801CD658
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 801CD65C
  c->lr=0x801CD664u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CD660
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801CD664
  c->lr=c->r[0]; // 801CD668
  c->r[1]=c->r[1]+0x000000B0u; // 801CD66C
  return; // 801CD670
}

// fn_801CD674
void f_801CD674(Ctx* __restrict c) {
  trace_call(0x801CD674u);
  {uint32_t ea=c->r[1]+0xFFFFE280u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD674
  c->r[0]=c->lr; // 801CD678
  W32(c->r[1]+0x00001D84u,c->r[0]); // 801CD67C
  c->r[11]=c->r[1]+0x00001D80u; // 801CD680
  c->lr=0x801CD688u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD684
  c->r[0]=R32(c->r[3]+0x0000215Cu); // 801CD688
  c->r[30]=c->r[3]|c->r[3]; // 801CD68C
  c->r[28]=c->r[4]|c->r[4]; // 801CD690
  c->r[31]=0u+0xFFFFFFFFu; // 801CD694
  cmps(c,0,(int32_t)c->r[0],2); // 801CD698
  if (crb(c,2)) { goto L_801CD870; } // 801CD69C
  if (!crb(c,0)) { goto L_801CD6B4; } // 801CD6A0
  cmps(c,0,(int32_t)c->r[0],0); // 801CD6A4
  if (crb(c,2)) { goto L_801CD6C4; } // 801CD6A8
  if (!crb(c,0)) { goto L_801CD70C; } // 801CD6AC
  goto L_801CDE04; // 801CD6B0
L_801CD6B4:;
  cmps(c,0,(int32_t)c->r[0],4); // 801CD6B4
  if (crb(c,2)) { goto L_801CDB30; } // 801CD6B8
  if (!crb(c,0)) { goto L_801CDE04; } // 801CD6BC
  goto L_801CD87C; // 801CD6C0
L_801CD6C4:;
  c->r[31]=R32(c->r[3]+0x00002058u); // 801CD6C4
  c->r[0]=R32(c->r[3]+0x000008CCu); // 801CD6C8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801CD6CC
  W32(c->r[3]+0x000008CCu,c->r[31]); // 801CD6D0
  if (crb(c,2)) { goto L_801CD6DC; } // 801CD6D4
  c->lr=0x801CD6DCu; f_801CED48(c); // 801CD6D8
L_801CD6DC:;
  c->r[4]=R32(c->r[30]+0x000008C4u); // 801CD6DC
  c->r[3]=c->r[30]+0x00001F70u; // 801CD6E0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801CD6E4
  c->lr=0x801CD6ECu; f_801AC1AC(c); // 801CD6E8
  cmps(c,0,(int32_t)c->r[3],0); // 801CD6EC
  if (crb(c,2)) { goto L_801CDE04; } // 801CD6F0
  c->r[0]=0u+0x00000002u; // 801CD6F4
  c->r[3]=c->r[30]|c->r[30]; // 801CD6F8
  W32(c->r[30]+0x0000215Cu,c->r[0]); // 801CD6FC
  c->r[4]=0u+0x0000000Cu; // 801CD700
  c->lr=0x801CD708u; f_801E3330(c); // 801CD704
  goto L_801CDE04; // 801CD708
L_801CD70C:;
  c->r[0]=0u+0x00000006u; // 801CD70C
  c->r[5]=c->r[1]+0x0000014Cu; // 801CD710
  c->r[4]=c->r[3]+0x00000940u; // 801CD714
  c->ctr=c->r[0]; // 801CD718
L_801CD71C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801CD71C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801CD720
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CD724
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801CD728
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CD71C; } // 801CD72C
  c->r[12]=R32(c->r[30]+0x00000010u); // 801CD730
  c->r[3]=c->r[30]|c->r[30]; // 801CD734
  c->r[12]=R32(c->r[12]+0x00000304u); // 801CD738
  c->ctr=c->r[12]; // 801CD73C
  if (true) { c->lr=0x801CD744u; dispatch(c,c->ctr); } // 801CD740
  c->r[3]=c->r[30]+0x000021A8u; // 801CD744
  c->r[4]=c->r[1]+0x00000150u; // 801CD748
  c->r[5]=c->r[28]+0x00000010u; // 801CD74C
  c->lr=0x801CD754u; f_8006EC8C(c); // 801CD750
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801CD754
  c->r[3]=c->r[30]+0x000008D0u; // 801CD758
  c->r[4]=c->r[30]+0x000021A8u; // 801CD75C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CD760
  c->ctr=c->r[12]; // 801CD764
  if (true) { c->lr=0x801CD76Cu; dispatch(c,c->ctr); } // 801CD768
  c->r[3]=c->r[1]+0x00000084u; // 801CD76C
  c->r[4]=c->r[30]+0x000021A8u; // 801CD770
  c->lr=0x801CD778u; f_80032FD8(c); // 801CD774
  c->r[3]=c->r[1]+0x00000084u; // 801CD778
  c->r[4]=c->r[28]+0x00000010u; // 801CD77C
  c->lr=0x801CD784u; f_80265924(c); // 801CD780
  {uint32_t ea=c->r[2]+0xFFFFBBA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD784
  fcmp(c,0,c->f[1],c->f[0]); // 801CD788
  if (!crb(c,0)) { goto L_801CD7DC; } // 801CD78C
  c->r[7]=R32(c->r[30]+0x00000000u); // 801CD790
  c->r[3]=c->r[30]+0x000008A4u; // 801CD794
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CD798
  c->r[4]=c->r[1]+0x00000010u; // 801CD79C
  c->r[5]=0u+0x00000001u; // 801CD7A0
  c->r[6]=0u+0x00000000u; // 801CD7A4
  W32(c->r[1]+0x00000010u,c->r[7]); // 801CD7A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD7AC
  c->lr=0x801CD7B4u; f_800B8C4C(c); // 801CD7B0
  c->r[29]=c->r[3]|c->r[3]; // 801CD7B4
  c->r[3]=c->r[30]|c->r[30]; // 801CD7B8
  c->lr=0x801CD7C0u; f_801CED48(c); // 801CD7BC
  cmps(c,0,(int32_t)c->r[29],0); // 801CD7C0
  if (crb(c,2)) { goto L_801CD7DC; } // 801CD7C4
  c->r[3]=c->r[30]|c->r[30]; // 801CD7C8
  c->lr=0x801CD7D0u; f_801CEBD0(c); // 801CD7CC
  c->r[3]=c->r[30]|c->r[30]; // 801CD7D0
  c->r[4]=0u+0x0000000Cu; // 801CD7D4
  c->lr=0x801CD7DCu; f_801E3330(c); // 801CD7D8
L_801CD7DC:;
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD7DC
  c->r[3]=c->r[1]+0x00000078u; // 801CD7E0
  c->r[4]=c->r[30]+0x000008A4u; // 801CD7E4
  {uint32_t ea=c->r[30]+0x000008C8u; WF32(ea,c->f[0]);} // 801CD7E8
  c->lr=0x801CD7F0u; f_800B83D4(c); // 801CD7EC
  c->r[3]=c->r[28]+0x00000010u; // 801CD7F0
  c->r[4]=c->r[1]+0x00000078u; // 801CD7F4
  c->lr=0x801CD7FCu; f_8003F468(c); // 801CD7F8
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801CD7FC
  c->r[4]=c->r[30]+0x000008D0u; // 801CD800
  c->r[3]=c->r[1]+0x00000120u; // 801CD804
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CD808
  c->ctr=c->r[12]; // 801CD80C
  if (true) { c->lr=0x801CD814u; dispatch(c,c->ctr); } // 801CD810
  c->r[3]=c->r[30]+0x00001F70u; // 801CD814
  c->r[4]=c->r[1]+0x00000120u; // 801CD818
  c->lr=0x801CD820u; f_801E457C(c); // 801CD81C
  {uint32_t ea=c->r[30]+0x00001FBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD820
  c->r[3]=c->r[30]+0x00001F70u; // 801CD824
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD828
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801CD82C
  {uint32_t ea=c->r[30]+0x00001FBCu; WF32(ea,c->f[0]);} // 801CD830
  c->lr=0x801CD838u; f_801E4524(c); // 801CD834
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801CD838
  c->r[4]=c->r[30]+0x000008D0u; // 801CD83C
  c->r[3]=c->r[1]+0x000000F0u; // 801CD840
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CD844
  c->ctr=c->r[12]; // 801CD848
  if (true) { c->lr=0x801CD850u; dispatch(c,c->ctr); } // 801CD84C
  c->r[3]=c->r[1]+0x0000006Cu; // 801CD850
  c->r[4]=c->r[1]+0x000000F0u; // 801CD854
  c->lr=0x801CD85Cu; f_800C5524(c); // 801CD858
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD85C
  c->r[3]=c->r[30]+0x00002168u; // 801CD860
  c->r[4]=c->r[1]+0x0000006Cu; // 801CD864
  c->lr=0x801CD86Cu; f_80123C84(c); // 801CD868
  goto L_801CDE04; // 801CD86C
L_801CD870:;
  c->r[4]=0u+0x0000000Cu; // 801CD870
  c->lr=0x801CD878u; f_801E3330(c); // 801CD874
  goto L_801CDE04; // 801CD878
L_801CD87C:;
  c->r[0]=R32(c->r[3]+0x0000219Cu); // 801CD87C
  cmps(c,0,(int32_t)c->r[0],256); // 801CD880
  if (crb(c,2)) { goto L_801CDB08; } // 801CD884
  if (!crb(c,0)) { goto L_801CDE04; } // 801CD888
  cmps(c,0,(int32_t)c->r[0],0); // 801CD88C
  if (crb(c,2)) { goto L_801CD898; } // 801CD890
  goto L_801CDE04; // 801CD894
L_801CD898:;
  c->r[4]=0u+0x804D0000u; // 801CD898
  {uint32_t ea=c->r[13]+0xFFFF8918u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD89C
  c->r[4]=c->r[4]+0x00003318u; // 801CD8A0
  {uint32_t ea=c->r[3]+0x000021A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD8A4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD8A8
  c->r[4]=c->r[30]+0x00001FB0u; // 801CD8AC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801CD8B0
  {uint32_t ea=c->r[3]+0x000021A0u; WF32(ea,c->f[0]);} // 801CD8B4
  c->r[3]=c->r[1]+0x000000E4u; // 801CD8B8
  c->lr=0x801CD8C0u; f_8003F484(c); // 801CD8BC
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD8C0
  c->r[3]=c->r[1]+0x00000054u; // 801CD8C4
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD8C8
  c->f[3]=c->f[1]; // 801CD8CC
  c->lr=0x801CD8D4u; f_800521A0(c); // 801CD8D0
  {uint32_t ea=c->r[30]+0x000021A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD8D4
  c->r[4]=c->r[3]|c->r[3]; // 801CD8D8
  c->r[3]=c->r[1]+0x00000060u; // 801CD8DC
  c->lr=0x801CD8E4u; f_800FACB4(c); // 801CD8E0
  c->r[3]=c->r[1]+0x000000D8u; // 801CD8E4
  c->r[4]=c->r[1]+0x000000E4u; // 801CD8E8
  c->r[5]=c->r[1]+0x00000060u; // 801CD8EC
  c->lr=0x801CD8F4u; f_801011E8(c); // 801CD8F0
  {uint32_t ea=c->r[1]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD8F4
  c->r[3]=c->r[1]+0x00000F78u; // 801CD8F8
  {uint32_t ea=c->r[13]+0xFFFF891Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD8FC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CD900
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 801CD904
  {uint32_t ea=c->r[30]+0x00001FBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD908
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CD90C
  c->lr=0x801CD914u; f_800462E8(c); // 801CD910
  c->r[3]=0u+0x80450000u; // 801CD914
  c->r[4]=c->r[1]+0x00000F78u; // 801CD918
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801CD91C
  c->r[5]=c->r[1]+0x000000E4u; // 801CD920
  c->r[6]=c->r[1]+0x000000D8u; // 801CD924
  c->r[29]=0u+0x00000000u; // 801CD928
  c->r[7]=0u+0x00000000u; // 801CD92C
  c->lr=0x801CD934u; f_80044D14(c); // 801CD930
  cmps(c,0,(int32_t)c->r[3],0); // 801CD934
  if (crb(c,2)) { goto L_801CD9F8; } // 801CD938
  c->r[3]=c->r[1]+0x000000C0u; // 801CD93C
  c->r[4]=c->r[1]+0x00000F8Cu; // 801CD940
  c->lr=0x801CD948u; f_8003F484(c); // 801CD944
  c->r[3]=c->r[1]+0x000000C0u; // 801CD948
  c->lr=0x801CD950u; f_8018122C(c); // 801CD94C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD950
  if (!crb(c,2)) { goto L_801CD9F8; } // 801CD954
  c->r[3]=c->r[1]+0x000000CCu; // 801CD958
  c->r[4]=c->r[1]+0x00000F80u; // 801CD95C
  c->lr=0x801CD964u; f_8003F468(c); // 801CD960
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD964
  c->r[3]=c->r[1]+0x00000048u; // 801CD968
  {uint32_t ea=c->r[13]+0xFFFF891Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD96C
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD970
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801CD974
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD978
  c->f[3]=c->f[1]; // 801CD97C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801CD980
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 801CD984
  c->lr=0x801CD98Cu; f_800521A0(c); // 801CD988
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD98C
  c->r[4]=c->r[3]|c->r[3]; // 801CD990
  c->r[3]=c->r[30]+0x00002168u; // 801CD994
  c->lr=0x801CD99Cu; f_80123C84(c); // 801CD998
  c->r[0]=R32(c->r[30]+0x00002150u); // 801CD99C
  c->r[4]=0u+0x80570000u; // 801CD9A0
  c->r[3]=c->r[30]+0x00001F18u; // 801CD9A4
  c->r[0]=rotl(c->r[0],0)&0x9FFFFFFFu; // 801CD9A8
  c->r[4]=c->r[4]+0x000002C4u; // 801CD9AC
  W32(c->r[30]+0x00002150u,c->r[0]); // 801CD9B0
  c->lr=0x801CD9B8u; f_801E2514(c); // 801CD9B4
  c->r[3]=R32(c->r[30]+0x00002288u); // 801CD9B8
  c->r[0]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[0]); // 801CD9BC
  if (crb(c,2)) { goto L_801CD9D8; } // 801CD9C0
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 801CD9C4
  c->r[0]=0u+0x00000100u; // 801CD9C8
  W32(c->r[30]+0x00002288u,c->r[3]); // 801CD9CC
  W32(c->r[30]+0x0000219Cu,c->r[0]); // 801CD9D0
  goto L_801CD9F4; // 801CD9D4
L_801CD9D8:;
  c->r[3]=c->r[3]|0x40000000u; // 801CD9D8
  c->r[0]=0u+0x00000002u; // 801CD9DC
  W32(c->r[30]+0x00002288u,c->r[3]); // 801CD9E0
  c->r[3]=c->r[30]|c->r[30]; // 801CD9E4
  c->r[4]=0u+0x00000002u; // 801CD9E8
  W32(c->r[30]+0x0000215Cu,c->r[0]); // 801CD9EC
  c->lr=0x801CD9F4u; f_801E3330(c); // 801CD9F0
L_801CD9F4:;
  c->r[29]=0u+0x00000001u; // 801CD9F4
L_801CD9F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CD9F8
  if (!crb(c,2)) { goto L_801CDA9C; } // 801CD9FC
  c->r[3]=c->r[1]+0x000000CCu; // 801CDA00
  c->r[4]=c->r[1]+0x000000D8u; // 801CDA04
  c->lr=0x801CDA0Cu; f_8003F468(c); // 801CDA08
  {uint32_t ea=c->r[13]+0xFFFF8920u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CDA0C
  c->r[3]=0u+0x804D0000u; // 801CDA10
  {uint32_t ea=c->r[2]+0xFFFFBBA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDA14
  c->r[3]=c->r[3]+0x00003318u; // 801CDA18
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDA1C
  {uint32_t ea=c->r[13]+0xFFFF891Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDA20
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801CDA24
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDA28
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 801CDA2C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDA30
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDA34
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 801CDA38
  fcmp(c,0,c->f[1],c->f[0]); // 801CDA3C
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[2]);} // 801CDA40
  if (!crb(c,1)) { goto L_801CDA74; } // 801CDA44
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 801CDA48
  {uint32_t ea=c->r[13]+0xFFFF8924u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDA4C
  fcmp(c,0,c->f[1],c->f[0]); // 801CDA50
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801CDA54
  if (!crb(c,0)) { goto L_801CDA64; } // 801CDA58
  c->r[3]=c->r[13]+0xFFFF8924u; // 801CDA5C
  goto L_801CDA68; // 801CDA60
L_801CDA64:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801CDA64
L_801CDA68:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDA68
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CDA6C
  goto L_801CDA9C; // 801CDA70
L_801CDA74:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 801CDA74
  {uint32_t ea=c->r[13]+0xFFFF8928u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDA78
  fcmp(c,0,c->f[0],c->f[1]); // 801CDA7C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801CDA80
  if (!crb(c,0)) { goto L_801CDA90; } // 801CDA84
  c->r[3]=c->r[13]+0xFFFF8928u; // 801CDA88
  goto L_801CDA94; // 801CDA8C
L_801CDA90:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801CDA90
L_801CDA94:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDA94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CDA98
L_801CDA9C:;
  {uint32_t ea=c->r[30]+0x00002154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDA9C
  c->r[3]=c->r[1]+0x000000CCu; // 801CDAA0
  {uint32_t ea=c->r[2]+0xFFFFBB90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDAA4
  c->r[5]=c->r[3]|c->r[3]; // 801CDAA8
  c->r[4]=c->r[1]+0x000000E4u; // 801CDAAC
  fcmp(c,0,c->f[0],c->f[1]); // 801CDAB0
  if (!crb(c,1)) { goto L_801CDABC; } // 801CDAB4
  goto L_801CDAC0; // 801CDAB8
L_801CDABC:;
  c->f[1]=c->f[0]; // 801CDABC
L_801CDAC0:;
  c->lr=0x801CDAC4u; f_801CEFA8(c); // 801CDAC0
  c->r[3]=c->r[30]+0x00001FB0u; // 801CDAC4
  c->r[4]=c->r[1]+0x000000CCu; // 801CDAC8
  c->lr=0x801CDAD0u; f_8003F468(c); // 801CDACC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDAD0
  c->r[3]=c->r[30]+0x00001F70u; // 801CDAD4
  {uint32_t ea=c->r[30]+0x00001FBCu; WF32(ea,c->f[0]);} // 801CDAD8
  c->lr=0x801CDAE0u; f_801E4524(c); // 801CDADC
  c->r[4]=0u+0x804D0000u; // 801CDAE0
  {uint32_t ea=c->r[30]+0x00002154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDAE4
  c->r[4]=c->r[4]+0x00003318u; // 801CDAE8
  c->r[3]=c->r[1]+0x00000F78u; // 801CDAEC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDAF0
  c->r[4]=0u+0xFFFFFFFFu; // 801CDAF4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801CDAF8
  {uint32_t ea=c->r[30]+0x00002154u; WF32(ea,c->f[0]);} // 801CDAFC
  c->lr=0x801CDB04u; f_80046394(c); // 801CDB00
  goto L_801CDE04; // 801CDB04
L_801CDB08:;
  c->r[3]=c->r[3]+0x00001F18u; // 801CDB08
  c->lr=0x801CDB10u; f_801E25C8(c); // 801CDB0C
  cmps(c,0,(int32_t)c->r[3],0); // 801CDB10
  if (crb(c,2)) { goto L_801CDE04; } // 801CDB14
  c->r[0]=0u+0x00000002u; // 801CDB18
  c->r[3]=c->r[30]|c->r[30]; // 801CDB1C
  W32(c->r[30]+0x0000215Cu,c->r[0]); // 801CDB20
  c->r[4]=0u+0x00000003u; // 801CDB24
  c->lr=0x801CDB2Cu; f_801E3330(c); // 801CDB28
  goto L_801CDE04; // 801CDB2C
L_801CDB30:;
  c->r[0]=R32(c->r[3]+0x0000219Cu); // 801CDB30
  cmps(c,0,(int32_t)c->r[0],1); // 801CDB34
  if (crb(c,2)) { goto L_801CDB90; } // 801CDB38
  if (!crb(c,0)) { goto L_801CDB4C; } // 801CDB3C
  cmps(c,0,(int32_t)c->r[0],0); // 801CDB40
  if (!crb(c,0)) { goto L_801CDB58; } // 801CDB44
  goto L_801CDE04; // 801CDB48
L_801CDB4C:;
  cmps(c,0,(int32_t)c->r[0],256); // 801CDB4C
  if (crb(c,2)) { goto L_801CDDE0; } // 801CDB50
  goto L_801CDE04; // 801CDB54
L_801CDB58:;
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDB58
  c->r[3]=c->r[1]+0x0000003Cu; // 801CDB5C
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDB60
  c->f[3]=c->f[1]; // 801CDB64
  c->lr=0x801CDB6Cu; f_800521A0(c); // 801CDB68
  {uint32_t ea=c->r[13]+0xFFFF892Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDB6C
  c->r[4]=c->r[3]|c->r[3]; // 801CDB70
  c->r[3]=c->r[30]+0x00002168u; // 801CDB74
  c->lr=0x801CDB7Cu; f_80123C84(c); // 801CDB78
  c->r[3]=R32(c->r[30]+0x0000219Cu); // 801CDB7C
  c->r[0]=0u+0x00000001u; // 801CDB80
  W32(c->r[30]+0x00002188u,c->r[0]); // 801CDB84
  c->r[0]=c->r[3]+0x00000001u; // 801CDB88
  W32(c->r[30]+0x0000219Cu,c->r[0]); // 801CDB8C
L_801CDB90:;
  c->r[3]=0u+0x804D0000u; // 801CDB90
  {uint32_t ea=c->r[13]+0xFFFF8930u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDB94
  c->r[3]=c->r[3]+0x00003318u; // 801CDB98
  {uint32_t ea=c->r[30]+0x000021A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDB9C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDBA0
  c->r[3]=c->r[1]+0x000000B4u; // 801CDBA4
  c->r[4]=c->r[30]+0x00001FB0u; // 801CDBA8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801CDBAC
  {uint32_t ea=c->r[30]+0x000021A0u; WF32(ea,c->f[0]);} // 801CDBB0
  c->lr=0x801CDBB8u; f_8003F484(c); // 801CDBB4
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDBB8
  c->r[3]=c->r[1]+0x00000024u; // 801CDBBC
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDBC0
  c->f[3]=c->f[1]; // 801CDBC4
  c->lr=0x801CDBCCu; f_800521A0(c); // 801CDBC8
  {uint32_t ea=c->r[30]+0x000021A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDBCC
  c->r[4]=c->r[3]|c->r[3]; // 801CDBD0
  c->r[3]=c->r[1]+0x00000030u; // 801CDBD4
  c->lr=0x801CDBDCu; f_800FACB4(c); // 801CDBD8
  c->r[3]=c->r[1]+0x000000A8u; // 801CDBDC
  c->r[4]=c->r[1]+0x000000B4u; // 801CDBE0
  c->r[5]=c->r[1]+0x00000030u; // 801CDBE4
  c->lr=0x801CDBECu; f_801011E8(c); // 801CDBE8
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDBEC
  c->r[3]=c->r[1]+0x00000180u; // 801CDBF0
  {uint32_t ea=c->r[13]+0xFFFF8934u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDBF4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CDBF8
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 801CDBFC
  {uint32_t ea=c->r[30]+0x00001FBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDC00
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801CDC04
  c->lr=0x801CDC0Cu; f_800462E8(c); // 801CDC08
  c->r[3]=0u+0x80450000u; // 801CDC0C
  c->r[4]=c->r[1]+0x00000180u; // 801CDC10
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801CDC14
  c->r[5]=c->r[1]+0x000000B4u; // 801CDC18
  c->r[6]=c->r[1]+0x000000A8u; // 801CDC1C
  c->r[29]=0u+0x00000000u; // 801CDC20
  c->r[7]=0u+0x00000000u; // 801CDC24
  c->lr=0x801CDC2Cu; f_80044D14(c); // 801CDC28
  cmps(c,0,(int32_t)c->r[3],0); // 801CDC2C
  if (crb(c,2)) { goto L_801CDCFC; } // 801CDC30
  c->r[3]=c->r[1]+0x00000090u; // 801CDC34
  c->r[4]=c->r[1]+0x00000194u; // 801CDC38
  c->lr=0x801CDC40u; f_8003F484(c); // 801CDC3C
  c->r[3]=c->r[1]+0x00000090u; // 801CDC40
  c->lr=0x801CDC48u; f_8018122C(c); // 801CDC44
  cmps(c,0,(int32_t)c->r[3],0); // 801CDC48
  if (!crb(c,2)) { goto L_801CDCFC; } // 801CDC4C
  c->r[3]=c->r[1]+0x0000009Cu; // 801CDC50
  c->r[4]=c->r[1]+0x00000188u; // 801CDC54
  c->lr=0x801CDC5Cu; f_8003F468(c); // 801CDC58
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDC5C
  c->r[3]=c->r[1]+0x00000018u; // 801CDC60
  {uint32_t ea=c->r[13]+0xFFFF8934u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDC64
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDC68
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801CDC6C
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDC70
  c->f[3]=c->f[1]; // 801CDC74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CDC78
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 801CDC7C
  c->lr=0x801CDC84u; f_800521A0(c); // 801CDC80
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDC84
  c->r[4]=c->r[3]|c->r[3]; // 801CDC88
  c->r[3]=c->r[30]+0x00002168u; // 801CDC8C
  c->lr=0x801CDC94u; f_80123C84(c); // 801CDC90
  c->r[3]=R32(c->r[30]+0x00002288u); // 801CDC94
  c->r[5]=0u+0x00000000u; // 801CDC98
  c->r[4]=R32(c->r[30]+0x00002150u); // 801CDC9C
  c->r[0]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[0]); // 801CDCA0
  W32(c->r[30]+0x00002188u,c->r[5]); // 801CDCA4
  c->r[0]=rotl(c->r[4],0)&0x9FFFFFFFu; // 801CDCA8
  W32(c->r[30]+0x00002150u,c->r[0]); // 801CDCAC
  if (crb(c,2)) { goto L_801CDCDC; } // 801CDCB0
  c->r[4]=0u+0x80570000u; // 801CDCB4
  c->r[3]=c->r[30]+0x00001F18u; // 801CDCB8
  c->r[4]=c->r[4]+0x000002ECu; // 801CDCBC
  c->lr=0x801CDCC4u; f_801E2514(c); // 801CDCC0
  c->r[3]=R32(c->r[30]+0x00002288u); // 801CDCC4
  c->r[0]=0u+0x00000100u; // 801CDCC8
  W32(c->r[30]+0x0000219Cu,c->r[0]); // 801CDCCC
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 801CDCD0
  W32(c->r[30]+0x00002288u,c->r[3]); // 801CDCD4
  goto L_801CDCF8; // 801CDCD8
L_801CDCDC:;
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 801CDCDC
  c->r[0]=0u+0x00000002u; // 801CDCE0
  W32(c->r[30]+0x00002288u,c->r[3]); // 801CDCE4
  c->r[3]=c->r[30]|c->r[30]; // 801CDCE8
  c->r[4]=0u+0x00000002u; // 801CDCEC
  W32(c->r[30]+0x0000215Cu,c->r[0]); // 801CDCF0
  c->lr=0x801CDCF8u; f_801E3330(c); // 801CDCF4
L_801CDCF8:;
  c->r[29]=0u+0x00000001u; // 801CDCF8
L_801CDCFC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CDCFC
  if (!crb(c,2)) { goto L_801CDDA0; } // 801CDD00
  c->r[3]=c->r[1]+0x0000009Cu; // 801CDD04
  c->r[4]=c->r[1]+0x000000A8u; // 801CDD08
  c->lr=0x801CDD10u; f_8003F468(c); // 801CDD0C
  {uint32_t ea=c->r[13]+0xFFFF8938u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CDD10
  c->r[3]=0u+0x804D0000u; // 801CDD14
  {uint32_t ea=c->r[2]+0xFFFFBBA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDD18
  c->r[3]=c->r[3]+0x00003318u; // 801CDD1C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDD20
  {uint32_t ea=c->r[13]+0xFFFF8934u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD24
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801CDD28
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CDD2C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 801CDD30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD34
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDD38
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 801CDD3C
  fcmp(c,0,c->f[1],c->f[0]); // 801CDD40
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[2]);} // 801CDD44
  if (!crb(c,1)) { goto L_801CDD78; } // 801CDD48
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 801CDD4C
  {uint32_t ea=c->r[13]+0xFFFF893Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDD50
  fcmp(c,0,c->f[1],c->f[0]); // 801CDD54
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CDD58
  if (!crb(c,0)) { goto L_801CDD68; } // 801CDD5C
  c->r[3]=c->r[13]+0xFFFF893Cu; // 801CDD60
  goto L_801CDD6C; // 801CDD64
L_801CDD68:;
  c->r[3]=c->r[1]+0x00000008u; // 801CDD68
L_801CDD6C:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDD6C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801CDD70
  goto L_801CDDA0; // 801CDD74
L_801CDD78:;
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 801CDD78
  {uint32_t ea=c->r[13]+0xFFFF8940u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDD7C
  fcmp(c,0,c->f[0],c->f[1]); // 801CDD80
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CDD84
  if (!crb(c,0)) { goto L_801CDD94; } // 801CDD88
  c->r[3]=c->r[13]+0xFFFF8940u; // 801CDD8C
  goto L_801CDD98; // 801CDD90
L_801CDD94:;
  c->r[3]=c->r[1]+0x00000008u; // 801CDD94
L_801CDD98:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDD98
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801CDD9C
L_801CDDA0:;
  c->r[3]=c->r[1]+0x0000009Cu; // 801CDDA0
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDDA4
  c->r[5]=c->r[3]|c->r[3]; // 801CDDA8
  c->r[4]=c->r[1]+0x000000B4u; // 801CDDAC
  c->lr=0x801CDDB4u; f_801CEFA8(c); // 801CDDB0
  c->r[3]=c->r[30]+0x00001FB0u; // 801CDDB4
  c->r[4]=c->r[1]+0x0000009Cu; // 801CDDB8
  c->lr=0x801CDDC0u; f_8003F468(c); // 801CDDBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDDC0
  c->r[3]=c->r[30]+0x00001F70u; // 801CDDC4
  {uint32_t ea=c->r[30]+0x00001FBCu; WF32(ea,c->f[0]);} // 801CDDC8
  c->lr=0x801CDDD0u; f_801E4524(c); // 801CDDCC
  c->r[3]=c->r[1]+0x00000180u; // 801CDDD0
  c->r[4]=0u+0xFFFFFFFFu; // 801CDDD4
  c->lr=0x801CDDDCu; f_80046394(c); // 801CDDD8
  goto L_801CDE04; // 801CDDDC
L_801CDDE0:;
  c->r[3]=c->r[3]+0x00001F18u; // 801CDDE0
  c->lr=0x801CDDE8u; f_801E25C8(c); // 801CDDE4
  cmps(c,0,(int32_t)c->r[3],0); // 801CDDE8
  if (crb(c,2)) { goto L_801CDE04; } // 801CDDEC
  c->r[0]=0u+0x00000002u; // 801CDDF0
  c->r[3]=c->r[30]|c->r[30]; // 801CDDF4
  W32(c->r[30]+0x0000215Cu,c->r[0]); // 801CDDF8
  c->r[4]=0u+0x0000000Cu; // 801CDDFC
  c->lr=0x801CDE04u; f_801E3330(c); // 801CDE00
L_801CDE04:;
  cmps(c,0,(int32_t)c->r[31],-1); // 801CDE04
  if (crb(c,2)) { goto L_801CDE1C; } // 801CDE08
  c->r[3]=c->r[30]|c->r[30]; // 801CDE0C
  c->r[4]=c->r[31]|c->r[31]; // 801CDE10
  c->r[5]=0u+0x00000000u; // 801CDE14
  c->lr=0x801CDE1Cu; f_801CEE28(c); // 801CDE18
L_801CDE1C:;
  c->r[11]=c->r[1]+0x00001D80u; // 801CDE1C
  c->lr=0x801CDE24u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CDE20
  c->r[0]=R32(c->r[1]+0x00001D84u); // 801CDE24
  c->lr=c->r[0]; // 801CDE28
  c->r[1]=c->r[1]+0x00001D80u; // 801CDE2C
  return; // 801CDE30
}

// fn_801CDE34
void f_801CDE34(Ctx* __restrict c) {
  trace_call(0x801CDE34u);
  return; // 801CDE34
}

// fn_801CDE38
void f_801CDE38(Ctx* __restrict c) {
  trace_call(0x801CDE38u);
  c->r[0]=0u+0x00000000u; // 801CDE38
  W32(c->r[3]+0x0000219Cu,c->r[0]); // 801CDE3C
  c->r[3]=c->r[3]+0x00001F70u; // 801CDE40
  f_801E4BF8(c); return; // 801CDE44
}

// fn_801CDE48
void f_801CDE48(Ctx* __restrict c) {
  trace_call(0x801CDE48u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDE48
  c->r[0]=c->lr; // 801CDE4C
  W32(c->r[1]+0x00000094u,c->r[0]); // 801CDE50
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801CDE54
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801CDE58
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 801CDE5C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 801CDE60
  c->r[11]=c->r[1]+0x00000070u; // 801CDE64
  c->lr=0x801CDE6Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CDE68
  c->r[0]=R8(c->r[13]+0xFFFF9728u); // 801CDE6C
  c->r[31]=0u+0x80570000u; // 801CDE70
  c->r[29]=c->r[3]|c->r[3]; // 801CDE74
  c->r[30]=c->r[5]|c->r[5]; // 801CDE78
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CDE7C
  c->r[31]=c->r[31]+0x00000100u; // 801CDE80
  if (!crb(c,2)) { goto L_801CDEA4; } // 801CDE84
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDE88
  c->r[3]=c->r[31]+0x00000214u; // 801CDE8C
  c->f[2]=c->f[1]; // 801CDE90
  c->f[3]=c->f[1]; // 801CDE94
  c->lr=0x801CDE9Cu; f_800521A0(c); // 801CDE98
  c->r[0]=0u+0x00000001u; // 801CDE9C
  W8(c->r[13]+0xFFFF9728u,c->r[0]); // 801CDEA0
L_801CDEA4:;
  {uint32_t ea=c->r[29]+0x00002160u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDEA4
  c->r[0]=0u+0xFFFFFFFFu; // 801CDEA8
  c->r[3]=c->r[30]+0x00000020u; // 801CDEAC
  c->r[4]=c->r[31]+0x00000214u; // 801CDEB0
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 801CDEB4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CDEB8
  c->lr=0x801CDEC0u; f_8003F468(c); // 801CDEBC
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDEC0
  c->r[4]=c->r[29]|c->r[29]; // 801CDEC4
  c->r[3]=c->r[1]+0x00000038u; // 801CDEC8
  c->lr=0x801CDED0u; f_801E3A28(c); // 801CDECC
  c->r[3]=c->r[30]+0x00000010u; // 801CDED0
  c->r[4]=c->r[1]+0x00000038u; // 801CDED4
  c->lr=0x801CDEDCu; f_8003F468(c); // 801CDED8
  c->r[3]=c->r[1]+0x0000002Cu; // 801CDEDC
  c->r[4]=c->r[29]+0x00001F80u; // 801CDEE0
  c->lr=0x801CDEE8u; f_80032FD8(c); // 801CDEE4
  c->r[3]=c->r[1]+0x00000044u; // 801CDEE8
  c->r[4]=c->r[30]+0x00000010u; // 801CDEEC
  c->r[5]=c->r[1]+0x0000002Cu; // 801CDEF0
  c->lr=0x801CDEF8u; f_8007B8A4(c); // 801CDEF4
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDEF8
  c->r[3]=c->r[1]+0x00000020u; // 801CDEFC
  c->r[4]=c->r[29]+0x00001FBCu; // 801CDF00
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801CDF04
  c->lr=0x801CDF0Cu; f_8003F484(c); // 801CDF08
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDF0C
  {uint32_t ea=c->r[2]+0xFFFFBBA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDF10
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDF14
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[2]); // 801CDF18
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDF1C
  c->lr=0x801CDF24u; f_801CF114(c); // 801CDF20
  c->f[2]=c->f[1]; // 801CDF24
  c->f[1]=c->f[31]; // 801CDF28
  c->lr=0x801CDF30u; f_801CF18C(c); // 801CDF2C
  c->f[30]=c->f[1]; // 801CDF30
  c->r[3]=c->r[1]+0x00000044u; // 801CDF34
  c->lr=0x801CDF3Cu; f_801CF0FC(c); // 801CDF38
  c->r[0]=0u+0x00000000u; // 801CDF3C
  c->f[31]=c->f[1]; // 801CDF40
  W32(c->r[29]+0x00002164u,c->r[0]); // 801CDF44
  c->lr=0x801CDF4Cu; f_80291D94(c); // 801CDF48
  c->r[3]=c->r[3]^0x80000000u; // 801CDF4C
  c->r[0]=0u+0x43300000u; // 801CDF50
  {uint32_t ea=c->r[2]+0xFFFFBBA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDF54
  W32(c->r[1]+0x00000054u,c->r[3]); // 801CDF58
  {uint32_t ea=c->r[2]+0xFFFFBB88u; c->f[1]=RF64(ea);} // 801CDF5C
  fcmp(c,0,c->f[31],c->f[0]); // 801CDF60
  W32(c->r[1]+0x00000050u,c->r[0]); // 801CDF64
  {uint32_t ea=c->r[2]+0xFFFFBB7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDF68
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801CDF6C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801CDF70
  {uint32_t ea=c->r[2]+0xFFFFBBB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDF74
  {uint32_t ea=c->r[2]+0xFFFFBBACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDF78
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801CDF7C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801CDF80
  {uint32_t ea=c->r[29]+0x00002154u; WF32(ea,c->f[0]);} // 801CDF84
  if (!crb(c,0)) { goto L_801CDFA4; } // 801CDF88
  c->r[3]=c->r[29]+0x00001F70u; // 801CDF8C
  c->lr=0x801CDF94u; f_801E4BF8(c); // 801CDF90
  c->r[3]=c->r[29]+0x00001F18u; // 801CDF94
  c->r[4]=c->r[31]+0x000000ACu; // 801CDF98
  c->lr=0x801CDFA0u; f_801E2514(c); // 801CDF9C
  goto L_801CE070; // 801CDFA0
L_801CDFA4:;
  if (!crb(c,1)) { goto L_801CE030; } // 801CDFA4
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDFA8
  fcmp(c,0,c->f[30],c->f[0]); // 801CDFAC
  if (!crb(c,0)) { goto L_801CDFB8; } // 801CDFB0
  c->f[30]=-c->f[30]; // 801CDFB4
L_801CDFB8:;
  {uint32_t ea=c->r[2]+0xFFFFBBB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDFB8
  fcmp(c,0,c->f[30],c->f[0]); // 801CDFBC
  if (!crb(c,0)) { goto L_801CE030; } // 801CDFC0
  c->lr=0x801CDFC8u; f_80291D94(c); // 801CDFC4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CDFC8
  if (crb(c,2)) { goto L_801CDFF0; } // 801CDFCC
  {uint32_t ea=c->r[2]+0xFFFFBBB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDFD0
  c->r[3]=c->r[29]+0x00001F18u; // 801CDFD4
  {uint32_t ea=c->r[13]+0xFFFF972Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDFD8
  c->r[4]=c->r[31]+0x000000D4u; // 801CDFDC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801CDFE0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 801CDFE4
  c->lr=0x801CDFECu; f_801E2514(c); // 801CDFE8
  goto L_801CE004; // 801CDFEC
L_801CDFF0:;
  {uint32_t ea=c->r[13]+0xFFFF972Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDFF0
  c->r[3]=c->r[29]+0x00001F18u; // 801CDFF4
  c->r[4]=c->r[31]+0x000000ACu; // 801CDFF8
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 801CDFFC
  c->lr=0x801CE004u; f_801E2514(c); // 801CE000
L_801CE004:;
  c->r[3]=c->r[1]+0x00000014u; // 801CE004
  c->r[4]=c->r[30]+0x00000010u; // 801CE008
  c->lr=0x801CE010u; f_8003F484(c); // 801CE00C
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE010
  c->r[4]=c->r[3]|c->r[3]; // 801CE014
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE018
  c->r[3]=c->r[29]+0x00001F70u; // 801CE01C
  c->f[4]=c->f[2]; // 801CE020
  {uint32_t ea=c->r[2]+0xFFFFBB90u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE024
  c->lr=0x801CE02Cu; f_801AC5E8(c); // 801CE028
  goto L_801CE070; // 801CE02C
L_801CE030:;
  c->r[0]=R32(c->r[29]+0x00001F18u); // 801CE030
  c->r[4]=c->r[31]+0x000000ACu; // 801CE034
  cmpu(c,0,c->r[0],c->r[4]); // 801CE038
  if (crb(c,2)) { goto L_801CE048; } // 801CE03C
  c->r[3]=c->r[29]+0x00001F18u; // 801CE040
  c->lr=0x801CE048u; f_801E2514(c); // 801CE044
L_801CE048:;
  c->r[3]=c->r[1]+0x00000008u; // 801CE048
  c->r[4]=c->r[30]+0x00000010u; // 801CE04C
  c->lr=0x801CE054u; f_8003F484(c); // 801CE050
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE054
  c->r[4]=c->r[3]|c->r[3]; // 801CE058
  {uint32_t ea=c->r[2]+0xFFFFBBB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE05C
  c->r[3]=c->r[29]+0x00001F70u; // 801CE060
  c->lr=0x801CE068u; f_801ACA00(c); // 801CE064
  c->r[0]=0u+0x00000001u; // 801CE068
  W32(c->r[29]+0x00002164u,c->r[0]); // 801CE06C
L_801CE070:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801CE070
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801CE074
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 801CE078
  c->r[11]=c->r[1]+0x00000070u; // 801CE07C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 801CE080
  c->lr=0x801CE088u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE084
  c->r[0]=R32(c->r[1]+0x00000094u); // 801CE088
  c->lr=c->r[0]; // 801CE08C
  c->r[1]=c->r[1]+0x00000090u; // 801CE090
  return; // 801CE094
}

// fn_801CE098
void f_801CE098(Ctx* __restrict c) {
  trace_call(0x801CE098u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE098
  c->r[0]=c->lr; // 801CE09C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CE0A0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801CE0A4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801CE0A8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801CE0AC
  c->r[31]=c->r[4]|c->r[4]; // 801CE0B0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801CE0B4
  c->r[30]=c->r[3]|c->r[3]; // 801CE0B8
  c->r[3]=c->r[1]+0x00000014u; // 801CE0BC
  c->r[4]=c->r[30]+0x00001F80u; // 801CE0C0
  c->lr=0x801CE0C8u; f_80032FD8(c); // 801CE0C4
  c->r[3]=c->r[1]+0x00000020u; // 801CE0C8
  c->r[4]=c->r[31]+0x00000010u; // 801CE0CC
  c->r[5]=c->r[1]+0x00000014u; // 801CE0D0
  c->lr=0x801CE0D8u; f_8007B8A4(c); // 801CE0D4
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE0D8
  c->r[3]=c->r[1]+0x00000008u; // 801CE0DC
  c->r[4]=c->r[30]+0x00001FBCu; // 801CE0E0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801CE0E4
  c->lr=0x801CE0ECu; f_8003F484(c); // 801CE0E8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE0EC
  {uint32_t ea=c->r[2]+0xFFFFBBA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE0F0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE0F4
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[2]); // 801CE0F8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE0FC
  c->lr=0x801CE104u; f_801CF114(c); // 801CE100
  c->f[2]=c->f[1]; // 801CE104
  c->f[1]=c->f[31]; // 801CE108
  c->lr=0x801CE110u; f_801CF18C(c); // 801CE10C
  c->f[31]=c->f[1]; // 801CE110
  c->r[3]=c->r[1]+0x00000020u; // 801CE114
  c->lr=0x801CE11Cu; f_801CF0FC(c); // 801CE118
  c->r[0]=R32(c->r[30]+0x00002164u); // 801CE11C
  c->r[4]=0u+0xFFFFFFFFu; // 801CE120
  cmps(c,0,(int32_t)c->r[0],0); // 801CE124
  if (crb(c,2)) { goto L_801CE170; } // 801CE128
  c->r[0]=R32(c->r[30]+0x00001F70u); // 801CE12C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801CE130
  if (crb(c,2)) { goto L_801CE154; } // 801CE134
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE138
  fcmp(c,0,c->f[31],c->f[0]); // 801CE13C
  if (!crb(c,0)) { goto L_801CE148; } // 801CE140
  c->f[31]=-c->f[31]; // 801CE144
L_801CE148:;
  {uint32_t ea=c->r[2]+0xFFFFBB94u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE148
  fcmp(c,0,c->f[31],c->f[0]); // 801CE14C
  if (!crb(c,0)) { goto L_801CE18C; } // 801CE150
L_801CE154:;
  {uint32_t ea=c->r[2]+0xFFFFBBA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE154
  fcmp(c,0,c->f[1],c->f[0]); // 801CE158
  if (!crb(c,0)) { goto L_801CE168; } // 801CE15C
  c->r[4]=0u+0x00000008u; // 801CE160
  goto L_801CE18C; // 801CE164
L_801CE168:;
  c->r[4]=0u+0x0000000Cu; // 801CE168
  goto L_801CE18C; // 801CE16C
L_801CE170:;
  {uint32_t ea=c->r[2]+0xFFFFBBA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE170
  fcmp(c,0,c->f[1],c->f[0]); // 801CE174
  if (crb(c,0)) { goto L_801CE188; } // 801CE178
  c->r[0]=R32(c->r[30]+0x00001F70u); // 801CE17C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801CE180
  if (!crb(c,2)) { goto L_801CE18C; } // 801CE184
L_801CE188:;
  c->r[4]=0u+0x00000008u; // 801CE188
L_801CE18C:;
  {uint32_t ea=c->r[30]+0x00002154u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE18C
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE190
  fcmp(c,0,c->f[1],c->f[0]); // 801CE194
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE198
  if (crb(c,2)) { goto L_801CE1B4; } // 801CE19C
  c->r[3]=R32(c->r[30]+0x00002288u); // 801CE1A0
  c->r[0]=rotl(c->r[3],4)&0x00000001u; cr0(c,c->r[0]); // 801CE1A4
  if (!crb(c,2)) { goto L_801CE1B4; } // 801CE1A8
  c->r[0]=rotl(c->r[3],6)&0x00000001u; cr0(c,c->r[0]); // 801CE1AC
  if (crb(c,2)) { goto L_801CE1B8; } // 801CE1B0
L_801CE1B4:;
  c->r[4]=0u+0x00000003u; // 801CE1B4
L_801CE1B8:;
  cmps(c,0,(int32_t)c->r[4],-1); // 801CE1B8
  if (crb(c,2)) { goto L_801CE1C8; } // 801CE1BC
  c->r[3]=c->r[30]|c->r[30]; // 801CE1C0
  c->lr=0x801CE1C8u; f_801E3330(c); // 801CE1C4
L_801CE1C8:;
  c->r[3]=0u+0x804D0000u; // 801CE1C8
  {uint32_t ea=c->r[30]+0x00002154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE1CC
  c->r[3]=c->r[3]+0x00003318u; // 801CE1D0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE1D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CE1D8
  {uint32_t ea=c->r[30]+0x00002154u; WF32(ea,c->f[0]);} // 801CE1DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801CE1E0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801CE1E4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801CE1E8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801CE1EC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801CE1F0
  c->lr=c->r[0]; // 801CE1F4
  c->r[1]=c->r[1]+0x00000050u; // 801CE1F8
  return; // 801CE1FC
}

// fn_801CE200
void f_801CE200(Ctx* __restrict c) {
  trace_call(0x801CE200u);
  return; // 801CE200
}

// fn_801CE204
void f_801CE204(Ctx* __restrict c) {
  trace_call(0x801CE204u);
  c->r[0]=0u+0x00000000u; // 801CE204
  W32(c->r[3]+0x00002164u,c->r[0]); // 801CE208
  c->r[3]=c->r[3]+0x00001F70u; // 801CE20C
  f_801E4BF8(c); return; // 801CE210
}

// fn_801CE214
void f_801CE214(Ctx* __restrict c) {
  trace_call(0x801CE214u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE214
  c->r[0]=c->lr; // 801CE218
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE21C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE220
  c->r[31]=c->r[3]|c->r[3]; // 801CE224
  c->r[4]=R32(c->r[3]+0x00002288u); // 801CE228
  c->r[4]=rotl(c->r[4],0)&0xDFFFFFFFu; // 801CE22C
  c->r[0]=rotl(c->r[4],2)&0x00000001u; cr0(c,c->r[0]); // 801CE230
  W32(c->r[3]+0x00002288u,c->r[4]); // 801CE234
  if (crb(c,2)) { goto L_801CE250; } // 801CE238
  c->r[4]=0u+0x80570000u; // 801CE23C
  c->r[3]=c->r[3]+0x00001F18u; // 801CE240
  c->r[4]=c->r[4]+0x0000029Cu; // 801CE244
  c->lr=0x801CE24Cu; f_801E2514(c); // 801CE248
  goto L_801CE260; // 801CE24C
L_801CE250:;
  c->r[4]=0u+0x80570000u; // 801CE250
  c->r[3]=c->r[3]+0x00001F18u; // 801CE254
  c->r[4]=c->r[4]+0x00000274u; // 801CE258
  c->lr=0x801CE260u; f_801E2514(c); // 801CE25C
L_801CE260:;
  c->r[3]=c->r[31]+0x00001F70u; // 801CE260
  c->lr=0x801CE268u; f_801E4BF8(c); // 801CE264
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE268
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE26C
  c->lr=c->r[0]; // 801CE270
  c->r[1]=c->r[1]+0x00000010u; // 801CE274
  return; // 801CE278
}

// fn_801CE27C
void f_801CE27C(Ctx* __restrict c) {
  trace_call(0x801CE27Cu);
  return; // 801CE27C
}

// fn_801CE280
void f_801CE280(Ctx* __restrict c) {
  trace_call(0x801CE280u);
  return; // 801CE280
}

// fn_801CE284
void f_801CE284(Ctx* __restrict c) {
  trace_call(0x801CE284u);
  return; // 801CE284
}

// fn_801CE288
void f_801CE288(Ctx* __restrict c) {
  trace_call(0x801CE288u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE288
  c->r[0]=c->lr; // 801CE28C
  W32(c->r[1]+0x00000074u,c->r[0]); // 801CE290
  c->r[11]=c->r[1]+0x00000070u; // 801CE294
  c->lr=0x801CE29Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CE298
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE29C
  c->r[29]=0u+0x80570000u; // 801CE2A0
  c->r[30]=c->r[3]|c->r[3]; // 801CE2A4
  c->r[31]=c->r[5]|c->r[5]; // 801CE2A8
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 801CE2AC
  c->r[29]=c->r[29]+0x00000100u; // 801CE2B0
  c->lr=0x801CE2B8u; f_80291D94(c); // 801CE2B4
  c->r[6]=0u+0x00000064u; // 801CE2B8
  c->r[0]=R32(c->r[30]+0x000021A4u); // 801CE2BC
  c->r[4]=divw((int32_t)c->r[3],(int32_t)c->r[6]); // 801CE2C0
  c->r[5]=sraw(c,c->r[0],31); // 801CE2C4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 801CE2C8
  c->r[4]=c->r[3]-c->r[4]; // 801CE2CC
  c->r[3]=c->r[30]|c->r[30]; // 801CE2D0
  c->r[6]=c->r[4]+0x00000001u; // 801CE2D4
  c->r[4]=rotl(c->r[6],1)&0x00000001u; // 801CE2D8
  c->r[0]=addc(c,~c->r[6],c->r[0],1); // 801CE2DC
  c->r[28]=addc(c,c->r[5],c->r[4],c->xer_ca); // 801CE2E0
  c->lr=0x801CE2E8u; f_801E3300(c); // 801CE2E4
  {uint32_t ea=c->r[30]+0x00002160u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE2E8
  {uint32_t ea=c->r[2]+0xFFFFBBE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE2EC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[2],c->f[0])); // 801CE2F0
  fcmp(c,0,c->f[1],c->f[0]); // 801CE2F4
  if (!crb(c,1)) { goto L_801CE300; } // 801CE2F8
  c->r[28]=0u+0x00000001u; // 801CE2FC
L_801CE300:;
  c->r[3]=R32(c->r[30]+0x00002158u); // 801CE300
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CE304
  cmpu(c,0,c->r[0],0x00000001u); // 801CE308
  if (crb(c,1)) { goto L_801CE314; } // 801CE30C
  c->r[28]=0u+0x00000001u; // 801CE310
L_801CE314:;
  cmps(c,0,(int32_t)c->r[28],1); // 801CE314
  if (crb(c,2)) { goto L_801CE3D0; } // 801CE318
  if (!crb(c,0)) { goto L_801CE3F8; } // 801CE31C
  cmps(c,0,(int32_t)c->r[28],0); // 801CE320
  if (!crb(c,0)) { goto L_801CE32C; } // 801CE324
  goto L_801CE3F8; // 801CE328
L_801CE32C:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801CE32C
  c->r[4]=c->r[30]+0x000008D0u; // 801CE330
  c->r[3]=c->r[1]+0x0000002Cu; // 801CE334
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CE338
  c->ctr=c->r[12]; // 801CE33C
  if (true) { c->lr=0x801CE344u; dispatch(c,c->ctr); } // 801CE340
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE344
  c->r[3]=c->r[1]+0x00000008u; // 801CE348
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE34C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE350
  c->lr=0x801CE358u; f_800521A0(c); // 801CE354
  c->lr=0x801CE35Cu; f_80061A4C(c); // 801CE358
  c->r[4]=c->r[3]|c->r[3]; // 801CE35C
  c->r[3]=c->r[1]+0x00000020u; // 801CE360
  c->r[4]=c->r[4]+0x00000384u; // 801CE364
  c->r[5]=c->r[1]+0x00000008u; // 801CE368
  c->lr=0x801CE370u; f_8007B8A4(c); // 801CE36C
  c->r[3]=c->r[1]+0x00000020u; // 801CE370
  c->lr=0x801CE378u; f_80065368(c); // 801CE374
  cmps(c,0,(int32_t)c->r[3],0); // 801CE378
  if (!crb(c,2)) { goto L_801CE3C0; } // 801CE37C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE380
  c->r[3]=c->r[1]+0x00000014u; // 801CE384
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE388
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE38C
  c->lr=0x801CE394u; f_800521A0(c); // 801CE390
  c->r[3]=c->r[1]+0x00000014u; // 801CE394
  c->r[4]=c->r[1]+0x00000020u; // 801CE398
  c->lr=0x801CE3A0u; f_801CF2D0(c); // 801CE39C
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE3A0
  fcmp(c,0,c->f[1],c->f[0]); // 801CE3A4
  if (!crb(c,0)) { goto L_801CE3B0; } // 801CE3A8
  c->f[1]=-c->f[1]; // 801CE3AC
L_801CE3B0:;
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE3B0
  fcmp(c,0,c->f[1],c->f[0]); // 801CE3B4
  if (!crb(c,1)) { goto L_801CE3C0; } // 801CE3B8
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801CE3BC
L_801CE3C0:;
  c->r[3]=c->r[30]+0x00001F18u; // 801CE3C0
  c->r[4]=c->r[29]+0x0000014Cu; // 801CE3C4
  c->lr=0x801CE3CCu; f_801E2514(c); // 801CE3C8
  goto L_801CE3F8; // 801CE3CC
L_801CE3D0:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CE3D0
  cmpu(c,0,c->r[0],0x00000001u); // 801CE3D4
  if (crb(c,1)) { goto L_801CE3EC; } // 801CE3D8
  c->r[3]=c->r[30]+0x00001F18u; // 801CE3DC
  c->r[4]=c->r[29]+0x00000124u; // 801CE3E0
  c->lr=0x801CE3E8u; f_801E2514(c); // 801CE3E4
  goto L_801CE3F8; // 801CE3E8
L_801CE3EC:;
  c->r[3]=c->r[30]+0x00001F18u; // 801CE3EC
  c->r[4]=c->r[29]+0x000000FCu; // 801CE3F0
  c->lr=0x801CE3F8u; f_801E2514(c); // 801CE3F4
L_801CE3F8:;
  c->r[0]=0u+0x00000000u; // 801CE3F8
  c->r[3]=c->r[30]+0x00001F70u; // 801CE3FC
  W32(c->r[31]+0x00000024u,c->r[0]); // 801CE400
  c->lr=0x801CE408u; f_801E4BF8(c); // 801CE404
  c->lr=0x801CE40Cu; f_801E4C90(c); // 801CE408
  W32(c->r[30]+0x00000894u,c->r[3]); // 801CE40C
  c->r[11]=c->r[1]+0x00000070u; // 801CE410
  c->lr=0x801CE418u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE414
  c->r[0]=R32(c->r[1]+0x00000074u); // 801CE418
  c->lr=c->r[0]; // 801CE41C
  c->r[1]=c->r[1]+0x00000070u; // 801CE420
  return; // 801CE424
}

// fn_801CE428
void f_801CE428(Ctx* __restrict c) {
  trace_call(0x801CE428u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE428
  c->r[0]=c->lr; // 801CE42C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801CE430
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801CE434
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801CE438
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801CE43C
  W32(c->r[1]+0x00000098u,c->r[30]); // 801CE440
  c->r[30]=c->r[3]|c->r[3]; // 801CE444
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE448
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE44C
  fcmp(c,0,c->f[1],c->f[0]); // 801CE450
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE454
  if (!crb(c,2)) { goto L_801CE58C; } // 801CE458
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801CE45C
  c->r[4]=c->r[30]+0x000008D0u; // 801CE460
  c->r[3]=c->r[1]+0x00000068u; // 801CE464
  c->r[31]=0u+0x00000001u; // 801CE468
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CE46C
  c->ctr=c->r[12]; // 801CE470
  if (true) { c->lr=0x801CE478u; dispatch(c,c->ctr); } // 801CE474
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE478
  c->r[3]=c->r[1]+0x00000014u; // 801CE47C
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE480
  {uint32_t ea=c->r[1]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE484
  c->lr=0x801CE48Cu; f_800521A0(c); // 801CE488
  c->lr=0x801CE490u; f_80061A4C(c); // 801CE48C
  c->r[4]=c->r[3]|c->r[3]; // 801CE490
  c->r[3]=c->r[1]+0x0000002Cu; // 801CE494
  c->r[4]=c->r[4]+0x00000384u; // 801CE498
  c->r[5]=c->r[1]+0x00000014u; // 801CE49C
  c->lr=0x801CE4A4u; f_8007B8A4(c); // 801CE4A0
  c->r[3]=c->r[1]+0x0000002Cu; // 801CE4A4
  c->lr=0x801CE4ACu; f_80065368(c); // 801CE4A8
  cmps(c,0,(int32_t)c->r[3],0); // 801CE4AC
  if (crb(c,2)) { goto L_801CE4BC; } // 801CE4B0
  c->r[31]=0u+0x00000000u; // 801CE4B4
  goto L_801CE53C; // 801CE4B8
L_801CE4BC:;
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE4BC
  c->r[3]=c->r[1]+0x00000020u; // 801CE4C0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE4C4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE4C8
  c->lr=0x801CE4D0u; f_800521A0(c); // 801CE4CC
  c->r[3]=c->r[1]+0x00000020u; // 801CE4D0
  c->r[4]=c->r[1]+0x0000002Cu; // 801CE4D4
  c->lr=0x801CE4DCu; f_801CF2D0(c); // 801CE4D8
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE4DC
  c->f[31]=c->f[1]; // 801CE4E0
  fcmp(c,0,c->f[1],c->f[0]); // 801CE4E4
  if (!crb(c,0)) { goto L_801CE4F0; } // 801CE4E8
  c->f[31]=-c->f[1]; // 801CE4EC
L_801CE4F0:;
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE4F0
  fcmp(c,0,c->f[31],c->f[0]); // 801CE4F4
  if (!crb(c,0)) { goto L_801CE504; } // 801CE4F8
  c->r[31]=0u+0x00000000u; // 801CE4FC
  goto L_801CE53C; // 801CE500
L_801CE504:;
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE504
  c->r[3]=c->r[1]+0x00000008u; // 801CE508
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE50C
  {uint32_t ea=c->r[1]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE510
  c->lr=0x801CE518u; f_800521A0(c); // 801CE514
  c->lr=0x801CE51Cu; f_80061A4C(c); // 801CE518
  c->r[4]=c->r[1]+0x00000008u; // 801CE51C
  c->lr=0x801CE524u; f_800639B4(c); // 801CE520
  cmps(c,0,(int32_t)c->r[3],0); // 801CE524
  if (crb(c,2)) { goto L_801CE53C; } // 801CE528
  {uint32_t ea=c->r[2]+0xFFFFBBECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE52C
  fcmp(c,0,c->f[31],c->f[0]); // 801CE530
  if (!crb(c,1)) { goto L_801CE53C; } // 801CE534
  c->r[31]=0u+0x00000000u; // 801CE538
L_801CE53C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CE53C
  if (crb(c,2)) { goto L_801CE58C; } // 801CE540
  {uint32_t ea=c->r[2]+0xFFFFBBECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE544
  c->r[3]=c->r[30]|c->r[30]; // 801CE548
  c->lr=0x801CE550u; f_801E41C0(c); // 801CE54C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801CE550
  c->r[4]=c->r[30]+0x000008D0u; // 801CE554
  c->r[3]=c->r[1]+0x00000038u; // 801CE558
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CE55C
  c->ctr=c->r[12]; // 801CE560
  if (true) { c->lr=0x801CE568u; dispatch(c,c->ctr); } // 801CE564
  c->r[3]=c->r[30]+0x00001F70u; // 801CE568
  c->r[4]=c->r[1]+0x00000038u; // 801CE56C
  c->lr=0x801CE574u; f_801E457C(c); // 801CE570
  {uint32_t ea=c->r[30]+0x00001FBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE574
  c->r[3]=c->r[30]+0x00001F70u; // 801CE578
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE57C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801CE580
  {uint32_t ea=c->r[30]+0x00001FBCu; WF32(ea,c->f[0]);} // 801CE584
  c->lr=0x801CE58Cu; f_801E4524(c); // 801CE588
L_801CE58C:;
  c->r[0]=R32(c->r[30]+0x00001F5Cu); // 801CE58C
  cmps(c,0,(int32_t)c->r[0],0); // 801CE590
  if (crb(c,2)) { goto L_801CE5B0; } // 801CE594
  c->lr=0x801CE59Cu; f_801E4D0C(c); // 801CE598
  cmps(c,0,(int32_t)c->r[3],0); // 801CE59C
  if (crb(c,2)) { goto L_801CE5B0; } // 801CE5A0
  c->r[3]=c->r[30]|c->r[30]; // 801CE5A4
  c->r[4]=0u+0x00000003u; // 801CE5A8
  c->lr=0x801CE5B0u; f_801E3330(c); // 801CE5AC
L_801CE5B0:;
  c->r[3]=c->r[30]+0x00001F18u; // 801CE5B0
  c->lr=0x801CE5B8u; f_801E25C8(c); // 801CE5B4
  cmps(c,0,(int32_t)c->r[3],0); // 801CE5B8
  if (crb(c,2)) { goto L_801CE5CC; } // 801CE5BC
  c->r[3]=c->r[30]|c->r[30]; // 801CE5C0
  c->r[4]=0u+0x00000003u; // 801CE5C4
  c->lr=0x801CE5CCu; f_801E3330(c); // 801CE5C8
L_801CE5CC:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 801CE5CC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801CE5D0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801CE5D4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801CE5D8
  c->r[30]=R32(c->r[1]+0x00000098u); // 801CE5DC
  c->lr=c->r[0]; // 801CE5E0
  c->r[1]=c->r[1]+0x000000B0u; // 801CE5E4
  return; // 801CE5E8
}

// fn_801CE5EC
void f_801CE5EC(Ctx* __restrict c) {
  trace_call(0x801CE5ECu);
  return; // 801CE5EC
}

// fn_801CE5F0
void f_801CE5F0(Ctx* __restrict c) {
  trace_call(0x801CE5F0u);
  return; // 801CE5F0
}

// fn_801CE5F4
void f_801CE5F4(Ctx* __restrict c) {
  trace_call(0x801CE5F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE5F4
  c->r[0]=c->lr; // 801CE5F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CE5FC
  c->r[11]=c->r[1]+0x00000040u; // 801CE600
  c->lr=0x801CE608u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CE604
  c->r[0]=R32(c->r[3]+0x000007E4u); // 801CE608
  c->r[27]=c->r[3]|c->r[3]; // 801CE60C
  c->r[28]=c->r[4]|c->r[4]; // 801CE610
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801CE614
  if (!crb(c,2)) { goto L_801CE63C; } // 801CE618
  c->r[12]=R32(c->r[3]+0x00000010u); // 801CE61C
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE620
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801CE624
  c->ctr=c->r[12]; // 801CE628
  if (true) { c->lr=0x801CE630u; dispatch(c,c->ctr); } // 801CE62C
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE630
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CE634
  {uint32_t ea=c->r[27]+0x000003A4u; WF32(ea,c->f[0]);} // 801CE638
L_801CE63C:;
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE63C
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE640
  c->r[3]=R32(c->r[27]+0x00000874u); // 801CE644
  fcmp(c,0,c->f[0],c->f[1]); // 801CE648
  {uint32_t ea=c->r[27]+0x00000870u; WF32(ea,c->f[1]);} // 801CE64C
  c->r[0]=c->r[3]+0x00000001u; // 801CE650
  W32(c->r[27]+0x00000874u,c->r[0]); // 801CE654
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE658
  if (!crb(c,2)) { goto L_801CE6B4; } // 801CE65C
  c->r[3]=R32(c->r[27]+0x00002288u); // 801CE660
  c->r[0]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[0]); // 801CE664
  if (crb(c,2)) { goto L_801CE6EC; } // 801CE668
  c->r[0]=rotl(c->r[3],0)&0xDFFFFFFFu; // 801CE66C
  c->r[3]=c->r[27]|c->r[27]; // 801CE670
  W32(c->r[27]+0x00002288u,c->r[0]); // 801CE674
  c->lr=0x801CE67Cu; f_801CCF08(c); // 801CE678
  cmps(c,0,(int32_t)c->r[3],0); // 801CE67C
  if (!crb(c,2)) { goto L_801CE6EC; } // 801CE680
  c->r[3]=R32(c->r[27]+0x00002158u); // 801CE684
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CE688
  cmpu(c,0,c->r[0],0x00000001u); // 801CE68C
  if (crb(c,1)) { goto L_801CE6A4; } // 801CE690
  c->r[3]=c->r[27]|c->r[27]; // 801CE694
  c->r[4]=0u+0x00000000u; // 801CE698
  c->lr=0x801CE6A0u; f_801CCF4C(c); // 801CE69C
  goto L_801CE6EC; // 801CE6A0
L_801CE6A4:;
  c->r[3]=c->r[27]|c->r[27]; // 801CE6A4
  c->r[4]=0u+0x00000002u; // 801CE6A8
  c->lr=0x801CE6B0u; f_801E3330(c); // 801CE6AC
  goto L_801CE6EC; // 801CE6B0
L_801CE6B4:;
  c->r[0]=R32(c->r[27]+0x00002288u); // 801CE6B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801CE6B8
  if (!crb(c,2)) { goto L_801CE6EC; } // 801CE6BC
  c->r[3]=R32(c->r[27]+0x00002158u); // 801CE6C0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CE6C4
  cmpu(c,0,c->r[0],0x00000001u); // 801CE6C8
  if (crb(c,1)) { goto L_801CE6EC; } // 801CE6CC
  {uint32_t ea=c->r[27]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE6D0
  fcmp(c,0,c->f[0],c->f[1]); // 801CE6D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE6D8
  if (!crb(c,2)) { goto L_801CE6EC; } // 801CE6DC
  c->r[3]=c->r[27]|c->r[27]; // 801CE6E0
  c->r[4]=0u+0x00000000u; // 801CE6E4
  c->lr=0x801CE6ECu; f_801CCF4C(c); // 801CE6E8
L_801CE6EC:;
  c->r[0]=R32(c->r[27]+0x00002288u); // 801CE6EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801CE6F0
  if (!crb(c,2)) { goto L_801CE89C; } // 801CE6F4
  c->r[4]=R32(c->r[27]+0x000008D8u); // 801CE6F8
  c->r[3]=0u+0x80400000u; // 801CE6FC
  c->r[31]=0u+0x00000000u; // 801CE700
  c->r[30]=0u+0xFFFFFFFFu; // 801CE704
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801CE708
  c->r[24]=c->r[3]+0x00003F8Au; // 801CE70C
  c->r[29]=0u+0x00000000u; // 801CE710
  c->r[25]=0u+0x00000000u; // 801CE714
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CE718
  c->r[22]=0u+0x803F0000u; // 801CE71C
  c->r[23]=0u+0x803F0000u; // 801CE720
  c->r[26]=0u+0x00000003u; // 801CE724
  goto L_801CE7E0; // 801CE728
L_801CE72C:;
  c->r[4]=c->r[28]+c->r[25]; // 801CE72C
  c->r[3]=c->r[1]+0x00000008u; // 801CE730
  c->r[4]=R32(c->r[4]+0x00000014u); // 801CE734
  c->lr=0x801CE73Cu; f_80365C7C(c); // 801CE738
  cmps(c,0,(int32_t)c->r[3],0); // 801CE73C
  c->r[21]=c->r[3]|c->r[3]; // 801CE740
  if (!crb(c,2)) { goto L_801CE764; } // 801CE744
  c->r[3]=c->r[22]+0x000018B0u; // 801CE748
  c->r[5]=c->r[23]+0x00001894u; // 801CE74C
  c->r[4]=0u+0x00000029u; // 801CE750
  c->r[6]=c->r[13]+0xFFFF8048u; // 801CE754
  c->r[7]=c->r[13]+0xFFFF8908u; // 801CE758
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CE75C
  c->lr=0x801CE764u; f_803444BC(c); // 801CE760
L_801CE764:;
  c->r[0]=R32(c->r[21]+0x00000008u); // 801CE764
  cmps(c,0,(int32_t)c->r[0],0); // 801CE768
  if (crb(c,2)) { goto L_801CE778; } // 801CE76C
  c->r[3]=c->r[21]+c->r[0]; // 801CE770
  goto L_801CE77C; // 801CE774
L_801CE778:;
  c->r[3]=0u+0x00000000u; // 801CE778
L_801CE77C:;
  c->r[3]=c->r[3]+0x00000001u; // 801CE77C
  c->lr=0x801CE784u; f_80295EAC(c); // 801CE780
  c->r[7]=0u+0x00000000u; // 801CE784
  c->r[4]=0u+0x00000000u; // 801CE788
L_801CE78C:;
  c->r[6]=c->r[24]+c->r[4]; // 801CE78C
  c->r[5]=0u+0x00000000u; // 801CE790
  c->ctr=c->r[26]; // 801CE794
L_801CE798:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+c->r[5]); // 801CE798
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CE79C
  if (!crb(c,2)) { goto L_801CE7B0; } // 801CE7A0
  c->r[30]=c->r[7]|c->r[7]; // 801CE7A4
  c->r[31]=c->r[24]+c->r[4]; // 801CE7A8
  goto L_801CE7B8; // 801CE7AC
L_801CE7B0:;
  c->r[5]=c->r[5]+0x00000002u; // 801CE7B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CE798; } // 801CE7B4
L_801CE7B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CE7B8
  if (!crb(c,2)) { goto L_801CE7D0; } // 801CE7BC
  c->r[7]=c->r[7]+0x00000001u; // 801CE7C0
  c->r[4]=c->r[4]+0x00000008u; // 801CE7C4
  cmpu(c,0,c->r[7],0x00000008u); // 801CE7C8
  if (crb(c,0)) { IRQCHK(c); goto L_801CE78C; } // 801CE7CC
L_801CE7D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CE7D0
  if (!crb(c,2)) { goto L_801CE7EC; } // 801CE7D4
  c->r[29]=c->r[29]+0x00000001u; // 801CE7D8
  c->r[25]=c->r[25]+0x00000028u; // 801CE7DC
L_801CE7E0:;
  c->r[0]=R32(c->r[28]+0x00000150u); // 801CE7E0
  cmpu(c,0,c->r[29],c->r[0]); // 801CE7E4
  if (crb(c,0)) { IRQCHK(c); goto L_801CE72C; } // 801CE7E8
L_801CE7EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CE7EC
  if (crb(c,2)) { goto L_801CE89C; } // 801CE7F0
  c->r[0]=R32(c->r[27]+0x00002288u); // 801CE7F4
  c->r[5]=0u+0x00000001u; // 801CE7F8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 801CE7FC
  if (crb(c,2)) { goto L_801CE87C; } // 801CE800
  c->r[3]=sraw(c,c->r[30],31); // 801CE804
  c->r[0]=0u+0x00000004u; // 801CE808
  c->r[0]=addc(c,~c->r[0],c->r[30],1); // 801CE80C
  c->r[6]=0u+0x00000000u; // 801CE810
  c->r[0]=0u+0x00000000u; // 801CE814
  c->r[0]=addc(c,c->r[3],c->r[0],c->xer_ca); cr0(c,c->r[0]); // 801CE818
  if (crb(c,2)) { goto L_801CE848; } // 801CE81C
  c->r[4]=0u+0x00000004u; // 801CE820
  c->ctr=c->r[4]; // 801CE824
L_801CE828:;
  c->r[3]=c->r[27]+c->r[4]; // 801CE828
  c->r[0]=R8(c->r[3]+0x00002280u); // 801CE82C
  cmps(c,0,(int32_t)c->r[0],0); // 801CE830
  if (crb(c,2)) { goto L_801CE83C; } // 801CE834
  c->r[6]=c->r[6]+0x00000001u; // 801CE838
L_801CE83C:;
  c->r[4]=c->r[4]+0x00000001u; // 801CE83C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CE828; } // 801CE840
  goto L_801CE870; // 801CE844
L_801CE848:;
  c->r[0]=0u+0x00000004u; // 801CE848
  c->r[4]=0u+0x00000000u; // 801CE84C
  c->ctr=c->r[0]; // 801CE850
L_801CE854:;
  c->r[3]=c->r[27]+c->r[4]; // 801CE854
  c->r[0]=R8(c->r[3]+0x00002280u); // 801CE858
  cmps(c,0,(int32_t)c->r[0],0); // 801CE85C
  if (crb(c,2)) { goto L_801CE868; } // 801CE860
  c->r[6]=c->r[6]+0x00000001u; // 801CE864
L_801CE868:;
  c->r[4]=c->r[4]+0x00000001u; // 801CE868
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CE854; } // 801CE86C
L_801CE870:;
  cmps(c,0,(int32_t)c->r[6],3); // 801CE870
  if (!crb(c,0)) { goto L_801CE87C; } // 801CE874
  c->r[5]=0u+0x00000000u; // 801CE878
L_801CE87C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CE87C
  if (crb(c,2)) { goto L_801CE89C; } // 801CE880
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000006u); // 801CE884
  c->r[3]=c->r[27]+0x000008D0u; // 801CE888
  c->lr=0x801CE890u; f_80032310(c); // 801CE88C
  c->r[3]=c->r[27]+c->r[30]; // 801CE890
  c->r[0]=0u+0x00000000u; // 801CE894
  W8(c->r[3]+0x00002280u,c->r[0]); // 801CE898
L_801CE89C:;
  c->r[11]=c->r[1]+0x00000040u; // 801CE89C
  c->lr=0x801CE8A4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE8A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CE8A4
  c->lr=c->r[0]; // 801CE8A8
  c->r[1]=c->r[1]+0x00000040u; // 801CE8AC
  return; // 801CE8B0
}

// fn_801CE8B4
void f_801CE8B4(Ctx* __restrict c) {
  trace_call(0x801CE8B4u);
  {uint32_t ea=c->r[1]+0xFFFFF0D0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE8B4
  c->r[0]=c->lr; // 801CE8B8
  W32(c->r[1]+0x00000F34u,c->r[0]); // 801CE8BC
  c->r[11]=c->r[1]+0x00000F30u; // 801CE8C0
  c->lr=0x801CE8C8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CE8C4
  c->r[30]=c->r[5]|c->r[5]; // 801CE8C8
  c->r[28]=c->r[3]|c->r[3]; // 801CE8CC
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CE8D0
  c->r[3]=c->r[30]|c->r[30]; // 801CE8D4
  c->r[29]=c->r[4]|c->r[4]; // 801CE8D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CE8DC
  c->ctr=c->r[12]; // 801CE8E0
  if (true) { c->lr=0x801CE8E8u; dispatch(c,c->ctr); } // 801CE8E4
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CE8E8
  c->r[3]=c->r[30]|c->r[30]; // 801CE8EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CE8F0
  c->ctr=c->r[12]; // 801CE8F4
  if (true) { c->lr=0x801CE8FCu; dispatch(c,c->ctr); } // 801CE8F8
  cmps(c,0,(int32_t)c->r[3],24); // 801CE8FC
  if (crb(c,2)) { goto L_801CEB58; } // 801CE900
  if (!crb(c,0)) { goto L_801CE920; } // 801CE904
  cmps(c,0,(int32_t)c->r[3],14); // 801CE908
  if (crb(c,2)) { goto L_801CEB10; } // 801CE90C
  if (!crb(c,0)) { goto L_801CEBA8; } // 801CE910
  cmps(c,0,(int32_t)c->r[3],3); // 801CE914
  if (crb(c,2)) { goto L_801CE934; } // 801CE918
  goto L_801CEBA8; // 801CE91C
L_801CE920:;
  cmps(c,0,(int32_t)c->r[3],1032); // 801CE920
  if (!crb(c,0)) { goto L_801CEBA8; } // 801CE924
  cmps(c,0,(int32_t)c->r[3],1025); // 801CE928
  if (!crb(c,0)) { goto L_801CEB48; } // 801CE92C
  goto L_801CEBA8; // 801CE930
L_801CE934:;
  c->r[3]=R32(c->r[28]+0x000008C4u); // 801CE934
  c->r[0]=0u-c->r[3]; // 801CE938
  c->r[0]=c->r[0]&~c->r[3]; // 801CE93C
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 801CE940
  if (crb(c,2)) { goto L_801CE960; } // 801CE944
  c->r[12]=R32(c->r[28]+0x00000010u); // 801CE948
  c->r[3]=c->r[28]|c->r[28]; // 801CE94C
  c->r[4]=R32(c->r[28]+0x000008A4u); // 801CE950
  c->r[12]=R32(c->r[12]+0x00000334u); // 801CE954
  c->ctr=c->r[12]; // 801CE958
  if (true) { c->lr=0x801CE960u; dispatch(c,c->ctr); } // 801CE95C
L_801CE960:;
  c->r[0]=R32(c->r[28]+0x00002158u); // 801CE960
  cmps(c,0,(int32_t)c->r[0],1); // 801CE964
  if (!crb(c,2)) { goto L_801CEA90; } // 801CE968
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE96C
  c->r[3]=c->r[1]+0x00000008u; // 801CE970
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE974
  c->f[3]=c->f[1]; // 801CE978
  c->lr=0x801CE980u; f_800521A0(c); // 801CE97C
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE980
  c->r[3]=c->r[28]+0x00002168u; // 801CE984
  c->r[4]=c->r[1]+0x00000008u; // 801CE988
  c->lr=0x801CE990u; f_80123C84(c); // 801CE98C
  c->r[12]=R32(c->r[28]+0x000008D0u); // 801CE990
  c->r[4]=c->r[28]+0x000008D0u; // 801CE994
  c->r[3]=c->r[1]+0x000000C8u; // 801CE998
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CE99C
  c->ctr=c->r[12]; // 801CE9A0
  if (true) { c->lr=0x801CE9A8u; dispatch(c,c->ctr); } // 801CE9A4
  c->r[3]=c->r[1]+0x0000002Cu; // 801CE9A8
  c->r[4]=c->r[1]+0x000000C8u; // 801CE9AC
  c->lr=0x801CE9B4u; f_80032FD8(c); // 801CE9B0
  c->r[3]=c->r[1]+0x00000128u; // 801CE9B4
  c->lr=0x801CE9BCu; f_800462E8(c); // 801CE9B8
  c->r[3]=0u+0x80450000u; // 801CE9BC
  {uint32_t ea=c->r[13]+0xFFFF8944u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE9C0
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801CE9C4
  c->r[4]=c->r[1]+0x00000128u; // 801CE9C8
  c->r[5]=c->r[1]+0x0000002Cu; // 801CE9CC
  c->r[6]=0u+0x00000000u; // 801CE9D0
  c->lr=0x801CE9D8u; f_80044E70(c); // 801CE9D4
  cmps(c,0,(int32_t)c->r[3],0); // 801CE9D8
  if (crb(c,2)) { goto L_801CEA24; } // 801CE9DC
  c->r[4]=c->r[1]+0x0000002Cu; // 801CE9E0
  {uint32_t ea=c->r[13]+0xFFFF8944u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE9E4
  c->r[5]=c->r[4]|c->r[4]; // 801CE9E8
  c->r[3]=c->r[1]+0x00000128u; // 801CE9EC
  c->lr=0x801CE9F4u; f_80046E64(c); // 801CE9F0
  c->r[3]=c->r[1]+0x00000020u; // 801CE9F4
  c->r[4]=c->r[1]+0x0000013Cu; // 801CE9F8
  c->lr=0x801CEA00u; f_8003F484(c); // 801CE9FC
  c->r[3]=c->r[1]+0x00000020u; // 801CEA00
  c->lr=0x801CEA08u; f_801CF0FC(c); // 801CEA04
  {uint32_t ea=c->r[2]+0xFFFFBBF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA08
  fcmp(c,0,c->f[1],c->f[0]); // 801CEA0C
  if (!crb(c,1)) { goto L_801CEA24; } // 801CEA10
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEA14
  c->r[3]=c->r[28]+0x00002168u; // 801CEA18
  c->r[4]=c->r[1]+0x00000020u; // 801CEA1C
  c->lr=0x801CEA24u; f_80123C84(c); // 801CEA20
L_801CEA24:;
  c->r[3]=c->r[1]+0x00000128u; // 801CEA24
  c->r[4]=0u+0xFFFFFFFFu; // 801CEA28
  c->lr=0x801CEA30u; f_80046394(c); // 801CEA2C
  c->r[12]=R32(c->r[28]+0x000008D0u); // 801CEA30
  c->r[4]=c->r[28]+0x000008D0u; // 801CEA34
  c->r[3]=c->r[1]+0x00000098u; // 801CEA38
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CEA3C
  c->ctr=c->r[12]; // 801CEA40
  if (true) { c->lr=0x801CEA48u; dispatch(c,c->ctr); } // 801CEA44
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEA48
  c->r[3]=c->r[1]+0x00000014u; // 801CEA4C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEA50
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CEA54
  c->lr=0x801CEA5Cu; f_800521A0(c); // 801CEA58
  c->r[3]=c->r[1]+0x000000F8u; // 801CEA5C
  c->r[4]=c->r[1]+0x00000014u; // 801CEA60
  c->r[5]=c->r[28]+0x00002168u; // 801CEA64
  c->lr=0x801CEA6Cu; f_80074DF8(c); // 801CEA68
  c->r[3]=c->r[1]+0x000000F8u; // 801CEA6C
  c->r[4]=c->r[1]+0x0000002Cu; // 801CEA70
  c->lr=0x801CEA78u; f_80032FF4(c); // 801CEA74
  c->r[12]=R32(c->r[28]+0x000008D0u); // 801CEA78
  c->r[3]=c->r[28]+0x000008D0u; // 801CEA7C
  c->r[4]=c->r[1]+0x000000F8u; // 801CEA80
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CEA84
  c->ctr=c->r[12]; // 801CEA88
  if (true) { c->lr=0x801CEA90u; dispatch(c,c->ctr); } // 801CEA8C
L_801CEA90:;
  c->r[3]=c->r[28]+0x00001F70u; // 801CEA90
  c->r[4]=c->r[28]+0x000008A4u; // 801CEA94
  c->lr=0x801CEA9Cu; f_801AC0C8(c); // 801CEA98
  c->r[12]=R32(c->r[28]+0x000008D0u); // 801CEA9C
  c->r[4]=c->r[28]+0x000008D0u; // 801CEAA0
  c->r[3]=c->r[1]+0x00000068u; // 801CEAA4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CEAA8
  c->ctr=c->r[12]; // 801CEAAC
  if (true) { c->lr=0x801CEAB4u; dispatch(c,c->ctr); } // 801CEAB0
  c->r[3]=c->r[28]+0x00001F70u; // 801CEAB4
  c->r[4]=c->r[1]+0x00000068u; // 801CEAB8
  c->lr=0x801CEAC0u; f_801E457C(c); // 801CEABC
  c->r[12]=R32(c->r[28]+0x00000FF8u); // 801CEAC0
  c->r[3]=c->r[28]+0x00000FF8u; // 801CEAC4
  c->r[4]=0u+0x00000001u; // 801CEAC8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CEACC
  c->ctr=c->r[12]; // 801CEAD0
  if (true) { c->lr=0x801CEAD8u; dispatch(c,c->ctr); } // 801CEAD4
  cmps(c,0,(int32_t)c->r[31],0); // 801CEAD8
  if (crb(c,2)) { goto L_801CEAF0; } // 801CEADC
  c->r[3]=c->r[28]|c->r[28]; // 801CEAE0
  c->r[4]=0u+0x00000005u; // 801CEAE4
  c->lr=0x801CEAECu; f_801E3330(c); // 801CEAE8
  goto L_801CEAFC; // 801CEAEC
L_801CEAF0:;
  c->r[3]=c->r[28]|c->r[28]; // 801CEAF0
  c->r[4]=0u+0x0000000Cu; // 801CEAF4
  c->lr=0x801CEAFCu; f_801E3330(c); // 801CEAF8
L_801CEAFC:;
  c->r[3]=c->r[28]|c->r[28]; // 801CEAFC
  c->r[4]=c->r[29]|c->r[29]; // 801CEB00
  c->r[5]=c->r[30]|c->r[30]; // 801CEB04
  c->lr=0x801CEB0Cu; f_800B5B1C(c); // 801CEB08
  goto L_801CEBB8; // 801CEB0C
L_801CEB10:;
  c->r[3]=c->r[28]|c->r[28]; // 801CEB10
  c->r[4]=c->r[29]|c->r[29]; // 801CEB14
  c->r[5]=c->r[30]|c->r[30]; // 801CEB18
  c->lr=0x801CEB20u; f_800B5B1C(c); // 801CEB1C
  c->r[12]=R32(c->r[28]+0x000008D0u); // 801CEB20
  c->r[4]=c->r[28]+0x000008D0u; // 801CEB24
  c->r[3]=c->r[1]+0x00000038u; // 801CEB28
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CEB2C
  c->ctr=c->r[12]; // 801CEB30
  if (true) { c->lr=0x801CEB38u; dispatch(c,c->ctr); } // 801CEB34
  c->r[3]=c->r[28]+0x00001F70u; // 801CEB38
  c->r[4]=c->r[1]+0x00000038u; // 801CEB3C
  c->lr=0x801CEB44u; f_801E457C(c); // 801CEB40
  goto L_801CEBB8; // 801CEB44
L_801CEB48:;
  c->r[3]=c->r[28]|c->r[28]; // 801CEB48
  c->r[4]=c->r[30]|c->r[30]; // 801CEB4C
  c->lr=0x801CEB54u; f_801CE5F4(c); // 801CEB50
  goto L_801CEBB8; // 801CEB54
L_801CEB58:;
  c->r[12]=R32(c->r[28]+0x00000FF8u); // 801CEB58
  c->r[3]=c->r[28]+0x00000FF8u; // 801CEB5C
  c->r[4]=0u+0x00000001u; // 801CEB60
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CEB64
  c->ctr=c->r[12]; // 801CEB68
  if (true) { c->lr=0x801CEB70u; dispatch(c,c->ctr); } // 801CEB6C
  c->r[0]=R32(c->r[28]+0x000008C4u); // 801CEB70
  cmps(c,0,(int32_t)c->r[0],0); // 801CEB74
  if (!crb(c,1)) { goto L_801CEB98; } // 801CEB78
  c->r[3]=c->r[28]+0x00001F70u; // 801CEB7C
  c->r[4]=c->r[28]+0x000008A4u; // 801CEB80
  c->lr=0x801CEB88u; f_801AC0C8(c); // 801CEB84
  c->r[3]=c->r[28]|c->r[28]; // 801CEB88
  c->r[4]=0u+0x00000005u; // 801CEB8C
  c->lr=0x801CEB94u; f_801E3330(c); // 801CEB90
  goto L_801CEBB8; // 801CEB94
L_801CEB98:;
  c->r[3]=c->r[28]|c->r[28]; // 801CEB98
  c->r[4]=0u+0x0000000Cu; // 801CEB9C
  c->lr=0x801CEBA4u; f_801E3330(c); // 801CEBA0
  goto L_801CEBB8; // 801CEBA4
L_801CEBA8:;
  c->r[3]=c->r[28]|c->r[28]; // 801CEBA8
  c->r[4]=c->r[29]|c->r[29]; // 801CEBAC
  c->r[5]=c->r[30]|c->r[30]; // 801CEBB0
  c->lr=0x801CEBB8u; f_800B5B1C(c); // 801CEBB4
L_801CEBB8:;
  c->r[11]=c->r[1]+0x00000F30u; // 801CEBB8
  c->lr=0x801CEBC0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CEBBC
  c->r[0]=R32(c->r[1]+0x00000F34u); // 801CEBC0
  c->lr=c->r[0]; // 801CEBC4
  c->r[1]=c->r[1]+0x00000F30u; // 801CEBC8
  return; // 801CEBCC
}

// fn_801CEBD0
void f_801CEBD0(Ctx* __restrict c) {
  trace_call(0x801CEBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEBD0
  c->r[0]=c->lr; // 801CEBD4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CEBD8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801CEBDC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801CEBE0
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801CEBE4
  c->r[31]=c->r[3]|c->r[3]; // 801CEBE8
  c->r[3]=c->r[1]+0x00000038u; // 801CEBEC
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CEBF0
  c->r[4]=c->r[31]+0x000008D0u; // 801CEBF4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CEBF8
  c->ctr=c->r[12]; // 801CEBFC
  if (true) { c->lr=0x801CEC04u; dispatch(c,c->ctr); } // 801CEC00
  c->r[3]=c->r[1]+0x0000002Cu; // 801CEC04
  c->r[4]=c->r[1]+0x00000038u; // 801CEC08
  c->lr=0x801CEC10u; f_800C5524(c); // 801CEC0C
  c->r[3]=c->r[1]+0x0000002Cu; // 801CEC10
  c->r[4]=c->r[1]+0x00000008u; // 801CEC14
  c->lr=0x801CEC1Cu; f_80265750(c); // 801CEC18
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801CEC1C
  c->r[0]=0u+0x00000000u; // 801CEC20
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEC24
  fcmp(c,0,c->f[31],c->f[0]); // 801CEC28
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CEC2C
  if (!crb(c,2)) { goto L_801CEC48; } // 801CEC30
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEC34
  fcmp(c,0,c->f[31],c->f[0]); // 801CEC38
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CEC3C
  if (!crb(c,2)) { goto L_801CEC48; } // 801CEC40
  c->r[0]=0u+0x00000001u; // 801CEC44
L_801CEC48:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CEC48
  if (!crb(c,2)) { goto L_801CEC6C; } // 801CEC4C
  c->r[3]=0u+0x803F0000u; // 801CEC50
  c->r[5]=0u+0x803F0000u; // 801CEC54
  c->r[3]=c->r[3]+0x000021E8u; // 801CEC58
  c->r[4]=0u+0x000000D4u; // 801CEC5C
  c->r[5]=c->r[5]+0x000021C0u; // 801CEC60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEC64
  c->lr=0x801CEC6Cu; f_80344550(c); // 801CEC68
L_801CEC6C:;
  c->f[1]=c->f[31]; // 801CEC6C
  c->lr=0x801CEC74u; f_8029C494(c); // 801CEC70
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801CEC74
  {uint32_t ea=c->r[2]+0xFFFFBBA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEC78
  {uint32_t ea=c->r[2]+0xFFFFBBF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEC7C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801CEC80
  fcmp(c,0,c->f[1],c->f[0]); // 801CEC84
  if (!crb(c,0)) { goto L_801CECBC; } // 801CEC88
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEC8C
  c->r[3]=c->r[1]+0x00000020u; // 801CEC90
  {uint32_t ea=c->r[2]+0xFFFFBB68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEC94
  c->f[3]=c->f[1]; // 801CEC98
  c->lr=0x801CECA0u; f_800521A0(c); // 801CEC9C
  {uint32_t ea=c->r[2]+0xFFFFBB90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CECA0
  c->r[4]=c->r[3]|c->r[3]; // 801CECA4
  c->r[3]=c->r[31]+0x00002168u; // 801CECA8
  c->lr=0x801CECB0u; f_80123C84(c); // 801CECAC
  c->r[0]=0u+0x00000002u; // 801CECB0
  W32(c->r[31]+0x00002158u,c->r[0]); // 801CECB4
  goto L_801CED24; // 801CECB8
L_801CECBC:;
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CECBC
  fcmp(c,0,c->f[1],c->f[0]); // 801CECC0
  if (!crb(c,0)) { goto L_801CECCC; } // 801CECC4
  c->f[1]=-c->f[1]; // 801CECC8
L_801CECCC:;
  {uint32_t ea=c->r[2]+0xFFFFBBF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CECCC
  fcmp(c,0,c->f[1],c->f[0]); // 801CECD0
  if (!crb(c,0)) { goto L_801CECF8; } // 801CECD4
  c->r[3]=R32(c->r[31]+0x00002288u); // 801CECD8
  c->r[4]=0u+0x00000001u; // 801CECDC
  c->r[0]=0u+0x00000064u; // 801CECE0
  W32(c->r[31]+0x00002158u,c->r[4]); // 801CECE4
  c->r[3]=c->r[3]|0x10000000u; // 801CECE8
  W32(c->r[31]+0x00002288u,c->r[3]); // 801CECEC
  W32(c->r[31]+0x000021A4u,c->r[0]); // 801CECF0
  goto L_801CED24; // 801CECF4
L_801CECF8:;
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CECF8
  c->r[3]=c->r[1]+0x00000014u; // 801CECFC
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CED00
  c->f[3]=c->f[1]; // 801CED04
  c->lr=0x801CED0Cu; f_800521A0(c); // 801CED08
  {uint32_t ea=c->r[2]+0xFFFFBB90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CED0C
  c->r[4]=c->r[3]|c->r[3]; // 801CED10
  c->r[3]=c->r[31]+0x00002168u; // 801CED14
  c->lr=0x801CED1Cu; f_80123C84(c); // 801CED18
  c->r[0]=0u+0x00000000u; // 801CED1C
  W32(c->r[31]+0x00002158u,c->r[0]); // 801CED20
L_801CED24:;
  c->r[0]=0u+0x00000002u; // 801CED24
  W32(c->r[31]+0x0000215Cu,c->r[0]); // 801CED28
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801CED2C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801CED30
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801CED34
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CED38
  c->lr=c->r[0]; // 801CED3C
  c->r[1]=c->r[1]+0x00000080u; // 801CED40
  return; // 801CED44
}

// fn_801CED48
void f_801CED48(Ctx* __restrict c) {
  trace_call(0x801CED48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CED48
  c->r[0]=c->lr; // 801CED4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CED50
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801CED54
  c->r[30]=c->r[3]|c->r[3]; // 801CED58
  c->r[31]=0u+0x00000000u; // 801CED5C
  c->r[4]=R32(c->r[3]+0x000008C4u); // 801CED60
  cmps(c,0,(int32_t)c->r[4],0); // 801CED64
  if (!crb(c,1)) { goto L_801CEDD0; } // 801CED68
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801CED6C
  c->r[4]=c->r[1]+0x0000000Cu; // 801CED70
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CED74
  c->r[0]=R32(c->r[3]+0x000008CCu); // 801CED78
  c->r[3]=c->r[3]+0x000008A4u; // 801CED7C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801CED80
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CED84
  if (!crb(c,0)) { goto L_801CED90; } // 801CED88
  c->r[4]=c->r[1]+0x00000008u; // 801CED8C
L_801CED90:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801CED90
  c->lr=0x801CED98u; f_800772A8(c); // 801CED94
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CED98
  cmps(c,0,(int32_t)c->r[0],6); // 801CED9C
  if (crb(c,2)) { goto L_801CEDBC; } // 801CEDA0
  if (!crb(c,0)) { goto L_801CEDD0; } // 801CEDA4
  cmps(c,0,(int32_t)c->r[0],2); // 801CEDA8
  if (crb(c,2)) { goto L_801CEDB4; } // 801CEDAC
  goto L_801CEDD0; // 801CEDB0
L_801CEDB4:;
  c->r[31]=0u+0x00000001u; // 801CEDB4
  goto L_801CEDD0; // 801CEDB8
L_801CEDBC:;
  c->r[3]=R32(c->r[30]+0x00002288u); // 801CEDBC
  c->r[0]=rotl(c->r[3],6)&0x00000001u; cr0(c,c->r[0]); // 801CEDC0
  if (!crb(c,2)) { goto L_801CEDD0; } // 801CEDC4
  c->r[0]=c->r[3]|0x08000000u; // 801CEDC8
  W32(c->r[30]+0x00002288u,c->r[0]); // 801CEDCC
L_801CEDD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CEDD0
  if (crb(c,2)) { goto L_801CEDF8; } // 801CEDD4
  c->r[4]=0u+0x80570000u; // 801CEDD8
  c->r[0]=R32(c->r[30]+0x00001F18u); // 801CEDDC
  c->r[4]=c->r[4]+0x000001D4u; // 801CEDE0
  cmpu(c,0,c->r[0],c->r[4]); // 801CEDE4
  if (crb(c,2)) { goto L_801CEE14; } // 801CEDE8
  c->r[3]=c->r[30]+0x00001F18u; // 801CEDEC
  c->lr=0x801CEDF4u; f_801E2514(c); // 801CEDF0
  goto L_801CEE14; // 801CEDF4
L_801CEDF8:;
  c->r[4]=0u+0x80570000u; // 801CEDF8
  c->r[0]=R32(c->r[30]+0x00001F18u); // 801CEDFC
  c->r[4]=c->r[4]+0x000001ACu; // 801CEE00
  cmpu(c,0,c->r[0],c->r[4]); // 801CEE04
  if (crb(c,2)) { goto L_801CEE14; } // 801CEE08
  c->r[3]=c->r[30]+0x00001F18u; // 801CEE0C
  c->lr=0x801CEE14u; f_801E2514(c); // 801CEE10
L_801CEE14:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801CEE14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CEE18
  c->lr=c->r[0]; // 801CEE1C
  c->r[1]=c->r[1]+0x00000020u; // 801CEE20
  return; // 801CEE24
}

// fn_801CEE28
void f_801CEE28(Ctx* __restrict c) {
  trace_call(0x801CEE28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEE28
  c->r[0]=c->lr; // 801CEE2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CEE30
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801CEE34
  c->r[28]=c->r[3]|c->r[3]; // 801CEE38
  c->r[29]=c->r[4]|c->r[4]; // 801CEE3C
  c->r[30]=c->r[5]|c->r[5]; // 801CEE40
  c->r[3]=R32(c->r[3]+0x00001F7Cu); // 801CEE44
  c->lr=0x801CEE4Cu; f_800772A8(c); // 801CEE48
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CEE4C
  c->r[31]=0u+0xFFFFFFFFu; // 801CEE50
  cmps(c,0,(int32_t)c->r[0],4); // 801CEE54
  if (crb(c,2)) { goto L_801CEED0; } // 801CEE58
  if (!crb(c,0)) { goto L_801CEE78; } // 801CEE5C
  cmps(c,0,(int32_t)c->r[0],2); // 801CEE60
  if (crb(c,2)) { goto L_801CEF1C; } // 801CEE64
  if (!crb(c,0)) { goto L_801CEEB4; } // 801CEE68
  cmps(c,0,(int32_t)c->r[0],1); // 801CEE6C
  if (!crb(c,0)) { goto L_801CEE88; } // 801CEE70
  goto L_801CEF1C; // 801CEE74
L_801CEE78:;
  cmps(c,0,(int32_t)c->r[0],6); // 801CEE78
  if (crb(c,2)) { goto L_801CEF08; } // 801CEE7C
  if (!crb(c,0)) { goto L_801CEF1C; } // 801CEE80
  goto L_801CEEEC; // 801CEE84
L_801CEE88:;
  c->r[3]=c->r[28]|c->r[28]; // 801CEE88
  c->r[4]=0u+0x00000001u; // 801CEE8C
  c->lr=0x801CEE94u; f_801CCF4C(c); // 801CEE90
  c->r[0]=R32(c->r[28]+0x000008C4u); // 801CEE94
  c->r[4]=c->r[29]+0x00000001u; // 801CEE98
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801CEE9C
  if (!crb(c,0)) { goto L_801CEF1C; } // 801CEEA0
  c->r[3]=c->r[28]|c->r[28]; // 801CEEA4
  c->r[5]=0u+0x00000001u; // 801CEEA8
  c->lr=0x801CEEB0u; f_801CEE28(c); // 801CEEAC
  goto L_801CEF1C; // 801CEEB0
L_801CEEB4:;
  c->r[3]=R32(c->r[28]+0x00002288u); // 801CEEB4
  c->r[0]=0u+0x00000064u; // 801CEEB8
  W32(c->r[28]+0x000021A4u,c->r[0]); // 801CEEBC
  c->r[31]=0u+0x00000008u; // 801CEEC0
  c->r[3]=c->r[3]|0x10000000u; // 801CEEC4
  W32(c->r[28]+0x00002288u,c->r[3]); // 801CEEC8
  goto L_801CEF1C; // 801CEECC
L_801CEED0:;
  c->r[3]=R32(c->r[28]+0x00002288u); // 801CEED0
  c->r[0]=0u+0x00000000u; // 801CEED4
  W32(c->r[28]+0x000021A4u,c->r[0]); // 801CEED8
  c->r[31]=0u+0x00000008u; // 801CEEDC
  c->r[3]=c->r[3]|0x10000000u; // 801CEEE0
  W32(c->r[28]+0x00002288u,c->r[3]); // 801CEEE4
  goto L_801CEF1C; // 801CEEE8
L_801CEEEC:;
  c->r[3]=R32(c->r[28]+0x00002288u); // 801CEEEC
  c->r[0]=0u+0x00000032u; // 801CEEF0
  W32(c->r[28]+0x000021A4u,c->r[0]); // 801CEEF4
  c->r[31]=0u+0x00000008u; // 801CEEF8
  c->r[3]=c->r[3]|0x10000000u; // 801CEEFC
  W32(c->r[28]+0x00002288u,c->r[3]); // 801CEF00
  goto L_801CEF1C; // 801CEF04
L_801CEF08:;
  c->r[3]=R32(c->r[28]+0x00002288u); // 801CEF08
  c->r[0]=rotl(c->r[3],6)&0x00000001u; cr0(c,c->r[0]); // 801CEF0C
  if (!crb(c,2)) { goto L_801CEF1C; } // 801CEF10
  c->r[0]=c->r[3]|0x08000000u; // 801CEF14
  W32(c->r[28]+0x00002288u,c->r[0]); // 801CEF18
L_801CEF1C:;
  cmps(c,0,(int32_t)c->r[31],-1); // 801CEF1C
  if (crb(c,2)) { goto L_801CEF38; } // 801CEF20
  cmps(c,0,(int32_t)c->r[30],0); // 801CEF24
  if (!crb(c,2)) { goto L_801CEF38; } // 801CEF28
  c->r[3]=c->r[28]|c->r[28]; // 801CEF2C
  c->r[4]=c->r[31]|c->r[31]; // 801CEF30
  c->lr=0x801CEF38u; f_801E3330(c); // 801CEF34
L_801CEF38:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801CEF38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CEF3C
  c->lr=c->r[0]; // 801CEF40
  c->r[1]=c->r[1]+0x00000020u; // 801CEF44
  return; // 801CEF48
}

// fn_801CEF4C
void f_801CEF4C(Ctx* __restrict c) {
  trace_call(0x801CEF4Cu);
  cmps(c,0,(int32_t)c->r[4],1000); // 801CEF4C
  c->r[5]=c->r[4]|c->r[4]; // 801CEF50
  if (crb(c,0)) { goto L_801CEF6C; } // 801CEF54
  c->r[0]=0u+0x000003E8u; // 801CEF58
  c->r[5]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 801CEF5C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801CEF60
  c->r[0]=c->r[4]-c->r[0]; // 801CEF64
  goto L_801CEF74; // 801CEF68
L_801CEF6C:;
  c->r[0]=c->r[5]|c->r[5]; // 801CEF6C
  c->r[5]=0u+0x00000000u; // 801CEF70
L_801CEF74:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CEF74
  if (crb(c,2)) { goto L_801CEF80; } // 801CEF78
  goto L_801CEF98; // 801CEF7C
L_801CEF80:;
  cmps(c,0,(int32_t)c->r[0],1); // 801CEF80
  if (!crb(c,2)) { goto L_801CEFA0; } // 801CEF84
  c->r[0]=R32(c->r[3]+0x00002288u); // 801CEF88
  c->r[0]=c->r[0]|0x08000000u; // 801CEF8C
  W32(c->r[3]+0x00002288u,c->r[0]); // 801CEF90
  goto L_801CEFA0; // 801CEF94
L_801CEF98:;
  c->r[3]=0u+0x00000000u; // 801CEF98
  return; // 801CEF9C
L_801CEFA0:;
  c->r[3]=0u+0x00000001u; // 801CEFA0
  return; // 801CEFA4
}

// fn_801CEFA8
void f_801CEFA8(Ctx* __restrict c) {
  trace_call(0x801CEFA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEFA8
  c->r[0]=c->lr; // 801CEFAC
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CEFB0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801CEFB4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801CEFB8
  c->r[11]=c->r[1]+0x00000050u; // 801CEFBC
  c->lr=0x801CEFC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CEFC0
  c->r[31]=c->r[1]|c->r[1]; // 801CEFC4
  c->f[31]=c->f[1]; // 801CEFC8
  c->r[27]=c->r[3]|c->r[3]; // 801CEFCC
  c->r[29]=c->r[5]|c->r[5]; // 801CEFD0
  c->r[28]=c->r[4]|c->r[4]; // 801CEFD4
  c->r[4]=c->r[29]|c->r[29]; // 801CEFD8
  c->r[3]=c->r[31]+0x00000008u; // 801CEFDC
  c->lr=0x801CEFE4u; f_8003F484(c); // 801CEFE0
  c->r[0]=R8(c->r[13]+0xFFFF9730u); // 801CEFE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CEFE8
  if (!crb(c,2)) { goto L_801CF01C; } // 801CEFEC
  c->r[30]=0u+0x80570000u; // 801CEFF0
  c->r[3]=c->r[30]+0x0000032Cu; // 801CEFF4
  c->lr=0x801CEFFCu; f_800462E8(c); // 801CEFF8
  c->r[4]=0u+0x80040000u; // 801CEFFC
  c->r[5]=0u+0x80570000u; // 801CF000
  c->r[3]=c->r[30]+0x0000032Cu; // 801CF004
  c->r[4]=c->r[4]+0x00006394u; // 801CF008
  c->r[5]=c->r[5]+0x00000320u; // 801CF00C
  c->lr=0x801CF014u; f_802895A4(c); // 801CF010
  c->r[0]=0u+0x00000001u; // 801CF014
  W8(c->r[13]+0xFFFF9730u,c->r[0]); // 801CF018
L_801CF01C:;
  c->r[0]=0u+0x80570000u; // 801CF01C
  c->r[30]=addc(c,c->r[0],0x0000032Cu,0); cr0(c,c->r[30]); // 801CF020
  if (crb(c,2)) { goto L_801CF048; } // 801CF024
  W32(c->r[31]+0x00000028u,c->r[1]); // 801CF028
  c->r[3]=c->r[30]|c->r[30]; // 801CF02C
  c->lr=0x801CF034u; f_800462E8(c); // 801CF030
  goto L_801CF048; // 801CF034
  c->r[3]=0u+0x00000000u; // 801CF038
  c->r[4]=0u+0x00000000u; // 801CF03C
  c->r[5]=0u+0x00000000u; // 801CF040
  c->lr=0x801CF048u; f_8028BC3C(c); // 801CF044
L_801CF048:;
  c->r[3]=0u+0x80450000u; // 801CF048
  c->r[4]=c->r[30]|c->r[30]; // 801CF04C
  c->r[5]=c->r[28]|c->r[28]; // 801CF050
  c->r[6]=c->r[29]|c->r[29]; // 801CF054
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801CF058
  c->r[7]=0u+0x00000000u; // 801CF05C
  c->lr=0x801CF064u; f_80044D14(c); // 801CF060
  cmps(c,0,(int32_t)c->r[3],0); // 801CF064
  if (crb(c,2)) { goto L_801CF084; } // 801CF068
  c->r[4]=c->r[28]|c->r[28]; // 801CF06C
  c->r[5]=c->r[29]|c->r[29]; // 801CF070
  c->r[3]=c->r[31]+0x00000008u; // 801CF074
  c->r[6]=c->r[30]+0x00000008u; // 801CF078
  c->r[7]=c->r[30]+0x00000014u; // 801CF07C
  c->lr=0x801CF084u; f_801243D4(c); // 801CF080
L_801CF084:;
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF084
  fcmp(c,0,c->f[31],c->f[0]); // 801CF088
  if (!crb(c,1)) { goto L_801CF0C8; } // 801CF08C
  c->f[1]=c->f[31]; // 801CF090
  c->r[3]=0u+0x80450000u; // 801CF094
  c->r[4]=c->r[30]|c->r[30]; // 801CF098
  c->r[5]=c->r[31]+0x00000008u; // 801CF09C
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 801CF0A0
  c->r[6]=0u+0x00000000u; // 801CF0A4
  c->lr=0x801CF0ACu; f_80044E70(c); // 801CF0A8
  cmps(c,0,(int32_t)c->r[3],0); // 801CF0AC
  if (crb(c,2)) { goto L_801CF0C8; } // 801CF0B0
  c->f[1]=c->f[31]; // 801CF0B4
  c->r[4]=c->r[31]+0x00000008u; // 801CF0B8
  c->r[3]=c->r[30]|c->r[30]; // 801CF0BC
  c->r[5]=c->r[4]|c->r[4]; // 801CF0C0
  c->lr=0x801CF0C8u; f_80046E64(c); // 801CF0C4
L_801CF0C8:;
  c->r[3]=c->r[27]|c->r[27]; // 801CF0C8
  c->r[4]=c->r[31]+0x00000008u; // 801CF0CC
  c->lr=0x801CF0D4u; f_8003F468(c); // 801CF0D0
  c->r[10]=c->r[31]|c->r[31]; // 801CF0D4
  {uint32_t ea=c->r[10]+0x00000058u; psq_load(c,31,ea,0,0);} // 801CF0D8
  c->r[11]=c->r[10]+0x00000050u; // 801CF0DC
  {uint32_t ea=c->r[31]+0x00000050u; c->f[31]=RF64(ea);} // 801CF0E0
  c->lr=0x801CF0E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF0E4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801CF0E8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801CF0EC
  c->r[1]=c->r[10]|c->r[10]; // 801CF0F0
  c->lr=c->r[0]; // 801CF0F4
  return; // 801CF0F8
}

// fn_801CF0FC
void f_801CF0FC(Ctx* __restrict c) {
  trace_call(0x801CF0FCu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 801CF0FC
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801CF100
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF104
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 801CF108
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801CF10C
  return; // 801CF110
}

// fn_801CF114
void f_801CF114(Ctx* __restrict c) {
  trace_call(0x801CF114u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF114
  c->r[0]=c->lr; // 801CF118
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF11C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF120
  fcmp(c,0,c->f[1],c->f[3]); // 801CF124
  if (!crb(c,1)) { goto L_801CF148; } // 801CF128
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801CF12C
  c->lr=0x801CF134u; f_8029BA8C(c); // 801CF130
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801CF134
  {uint32_t ea=c->r[2]+0xFFFFBBB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF138
  c->f[1]=-c->f[1]; // 801CF13C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[1]); // 801CF140
  goto L_801CF174; // 801CF144
L_801CF148:;
  if (!crb(c,0)) { goto L_801CF168; } // 801CF148
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801CF14C
  c->lr=0x801CF154u; f_8029BA8C(c); // 801CF150
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801CF154
  {uint32_t ea=c->r[2]+0xFFFFBBBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF158
  c->f[1]=-c->f[1]; // 801CF15C
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[1]); // 801CF160
  goto L_801CF174; // 801CF164
L_801CF168:;
  fcmp(c,0,c->f[2],c->f[3]); // 801CF168
  if (!crb(c,0)) { goto L_801CF174; } // 801CF16C
  {uint32_t ea=c->r[2]+0xFFFFBBC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF170
L_801CF174:;
  {uint32_t ea=c->r[2]+0xFFFFBBA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF174
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF178
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[3]); // 801CF17C
  c->lr=c->r[0]; // 801CF180
  c->r[1]=c->r[1]+0x00000010u; // 801CF184
  return; // 801CF188
}

// fn_801CF18C
void f_801CF18C(Ctx* __restrict c) {
  trace_call(0x801CF18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF18C
  c->r[0]=c->lr; // 801CF190
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF194
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CF198
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CF19C
  {uint32_t ea=c->r[2]+0xFFFFBBA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1A0
  c->f[31]=c->f[2]; // 801CF1A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801CF1A8
  c->lr=0x801CF1B0u; f_801CF21C(c); // 801CF1AC
  {uint32_t ea=c->r[2]+0xFFFFBBA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1B0
  {uint32_t ea=c->r[2]+0xFFFFBBA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF1B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801CF1B8
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[1]); // 801CF1BC
  c->f[1]=c->f[0]; // 801CF1C0
  c->lr=0x801CF1C8u; f_801CF21C(c); // 801CF1C4
  {uint32_t ea=c->r[2]+0xFFFFBBA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF1C8
  {uint32_t ea=c->r[2]+0xFFFFBBC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1CC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CF1D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801CF1D4
  fcmp(c,0,c->f[1],c->f[0]); // 801CF1D8
  if (!crb(c,0)) { goto L_801CF1EC; } // 801CF1DC
  {uint32_t ea=c->r[2]+0xFFFFBBC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1E0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801CF1E4
  goto L_801CF204; // 801CF1E8
L_801CF1EC:;
  {uint32_t ea=c->r[2]+0xFFFFBBCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1EC
  fcmp(c,0,c->f[1],c->f[0]); // 801CF1F0
  if (!crb(c,1)) { goto L_801CF204; } // 801CF1F4
  {uint32_t ea=c->r[2]+0xFFFFBBC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF1F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CF1FC
  c->f[1]=-c->f[0]; // 801CF200
L_801CF204:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CF204
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF208
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CF20C
  c->lr=c->r[0]; // 801CF210
  c->r[1]=c->r[1]+0x00000020u; // 801CF214
  return; // 801CF218
}

// fn_801CF21C
void f_801CF21C(Ctx* __restrict c) {
  trace_call(0x801CF21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF21C
  c->r[0]=c->lr; // 801CF220
  {uint32_t ea=c->r[2]+0xFFFFBBD0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF224
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF228
  fcmp(c,0,c->f[1],c->f[3]); // 801CF22C
  if (!crb(c,0)) { goto L_801CF278; } // 801CF230
  {uint32_t ea=c->r[2]+0xFFFFBBD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF234
  fcmp(c,0,c->f[1],c->f[0]); // 801CF238
  if (!crb(c,1)) { goto L_801CF250; } // 801CF23C
  {uint32_t ea=c->r[2]+0xFFFFBBC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF240
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 801CF244
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801CF248
  goto L_801CF2C0; // 801CF24C
L_801CF250:;
  {uint32_t ea=c->r[2]+0xFFFFBBD8u; c->f[2]=RF64(ea);} // 801CF250
  c->lr=0x801CF258u; f_8029C49C(c); // 801CF254
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801CF258
  {uint32_t ea=c->r[2]+0xFFFFBBD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF25C
  fcmp(c,0,c->f[1],c->f[2]); // 801CF260
  if (!crb(c,0)) { goto L_801CF2C0; } // 801CF264
  {uint32_t ea=c->r[2]+0xFFFFBBC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF268
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801CF26C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 801CF270
  goto L_801CF2C0; // 801CF274
L_801CF278:;
  {uint32_t ea=c->r[2]+0xFFFFBBC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF278
  fcmp(c,0,c->f[1],c->f[2]); // 801CF27C
  if (!crb(c,1)) { goto L_801CF2C0; } // 801CF280
  {uint32_t ea=c->r[2]+0xFFFFBBE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF284
  fcmp(c,0,c->f[1],c->f[0]); // 801CF288
  if (!crb(c,1)) { goto L_801CF2B8; } // 801CF28C
  {uint32_t ea=c->r[2]+0xFFFFBBD8u; c->f[2]=RF64(ea);} // 801CF290
  c->lr=0x801CF298u; f_8029C49C(c); // 801CF294
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801CF298
  {uint32_t ea=c->r[2]+0xFFFFBBC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF29C
  fcmp(c,0,c->f[1],c->f[0]); // 801CF2A0
  if (!crb(c,1)) { goto L_801CF2C0; } // 801CF2A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801CF2A8
  {uint32_t ea=c->r[2]+0xFFFFBBD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF2AC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801CF2B0
  goto L_801CF2C0; // 801CF2B4
L_801CF2B8:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 801CF2B8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 801CF2BC
L_801CF2C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF2C0
  c->lr=c->r[0]; // 801CF2C4
  c->r[1]=c->r[1]+0x00000010u; // 801CF2C8
  return; // 801CF2CC
}

// fn_801CF2D0
void f_801CF2D0(Ctx* __restrict c) {
  trace_call(0x801CF2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF2D0
  c->r[0]=c->lr; // 801CF2D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CF2D8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801CF2DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801CF2E0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801CF2E4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801CF2E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF2EC
  c->r[31]=c->r[3]|c->r[3]; // 801CF2F0
  c->r[3]=c->r[4]|c->r[4]; // 801CF2F4
  c->lr=0x801CF2FCu; f_801CF378(c); // 801CF2F8
  c->f[30]=c->f[1]; // 801CF2FC
  c->r[3]=c->r[31]|c->r[31]; // 801CF300
  c->lr=0x801CF308u; f_801CF378(c); // 801CF304
  c->lr=0x801CF30Cu; f_801CF21C(c); // 801CF308
  c->f[31]=c->f[1]; // 801CF30C
  c->f[1]=c->f[30]; // 801CF310
  c->lr=0x801CF318u; f_801CF21C(c); // 801CF314
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801CF318
  {uint32_t ea=c->r[2]+0xFFFFBBD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF31C
  fcmp(c,0,c->f[1],c->f[0]); // 801CF320
  if (!crb(c,0)) { goto L_801CF334; } // 801CF324
  {uint32_t ea=c->r[2]+0xFFFFBBE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF328
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801CF32C
  goto L_801CF34C; // 801CF330
L_801CF334:;
  {uint32_t ea=c->r[2]+0xFFFFBBC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF334
  fcmp(c,0,c->f[1],c->f[0]); // 801CF338
  if (!crb(c,1)) { goto L_801CF34C; } // 801CF33C
  {uint32_t ea=c->r[2]+0xFFFFBBE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF340
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CF344
  c->f[1]=-c->f[0]; // 801CF348
L_801CF34C:;
  {uint32_t ea=c->r[2]+0xFFFFBBA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF34C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801CF350
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801CF354
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801CF358
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 801CF35C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801CF360
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF364
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CF368
  c->lr=c->r[0]; // 801CF36C
  c->r[1]=c->r[1]+0x00000030u; // 801CF370
  return; // 801CF374
}

// fn_801CF378
void f_801CF378(Ctx* __restrict c) {
  trace_call(0x801CF378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF378
  c->r[0]=c->lr; // 801CF37C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF380
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF384
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF388
  c->lr=0x801CF390u; f_80394548(c); // 801CF38C
  {uint32_t ea=c->r[2]+0xFFFFBBE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF390
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF394
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801CF398
  c->lr=c->r[0]; // 801CF39C
  c->r[1]=c->r[1]+0x00000010u; // 801CF3A0
  return; // 801CF3A4
}

// fn_801CF3A8
void f_801CF3A8(Ctx* __restrict c) {
  trace_call(0x801CF3A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF3A8
  c->r[0]=c->lr; // 801CF3AC
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CF3B0
  c->r[11]=c->r[1]+0x00000080u; // 801CF3B4
  c->lr=0x801CF3BCu; f_80289DC0(c); // 801CF3B8
  {uint32_t ea=c->r[2]+0xFFFFBB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF3BC
  c->r[31]=0u+0x80570000u; // 801CF3C0
  c->r[31]=c->r[31]+0x00000100u; // 801CF3C4
  c->r[30]=0u+0x80400000u; // 801CF3C8
  c->f[3]=c->f[1]; // 801CF3CC
  {uint32_t ea=c->r[2]+0xFFFFBB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF3D0
  c->r[30]=c->r[30]+0x00003D70u; // 801CF3D4
  c->r[3]=c->r[31]+0x00000000u; // 801CF3D8
  c->lr=0x801CF3E0u; f_8003F588(c); // 801CF3DC
  c->r[22]=c->r[30]+0x00000000u; // 801CF3E0
  c->r[17]=c->r[30]+0x00000050u; // 801CF3E4
  c->r[0]=R32(c->r[22]+0x00000008u); // 801CF3E8
  c->r[16]=c->r[31]+0x0000000Cu; // 801CF3EC
  c->r[15]=c->r[17]-c->r[16]; // 801CF3F0
  c->r[3]=R32(c->r[22]+0x0000000Cu); // 801CF3F4
  c->r[18]=c->r[0]-c->r[17]; // 801CF3F8
  c->r[0]=R32(c->r[22]+0x00000010u); // 801CF3FC
  c->r[8]=c->r[30]+0x000000A4u; // 801CF400
  c->r[12]=c->r[30]+0x00000080u; // 801CF404
  c->r[21]=c->r[0]-c->r[8]; // 801CF408
  c->r[0]=c->r[30]+0x00000066u; // 801CF40C
  c->r[19]=c->r[3]-c->r[12]; // 801CF410
  c->r[3]=sraw(c,c->r[18],16); // 801CF414
  c->r[20]=sraw(c,c->r[19],16); // 801CF418
  c->r[14]=c->r[0]-c->r[16]; // 801CF41C
  c->r[25]=sraw(c,c->r[21],16); // 801CF420
  c->r[11]=c->r[31]+0x00000034u; // 801CF424
  c->r[23]=c->r[13]+0xFFFF890Cu; // 801CF428
  c->r[7]=c->r[31]+0x0000005Cu; // 801CF42C
  c->r[10]=c->r[12]-c->r[11]; // 801CF430
  c->r[0]=R32(c->r[30]+0x00000000u); // 801CF434
  c->r[4]=c->r[30]+0x000000C8u; // 801CF438
  c->r[9]=c->r[23]-c->r[11]; // 801CF43C
  c->r[26]=c->r[0]-c->r[4]; // 801CF440
  c->r[6]=c->r[8]-c->r[7]; // 801CF444
  c->r[27]=sraw(c,c->r[26],16); // 801CF448
  c->r[5]=c->r[23]-c->r[7]; // 801CF44C
  c->r[24]=c->r[31]+0x00000084u; // 801CF450
  W16(c->r[17]+0x00000006u,c->r[3]); // 801CF454
  c->r[3]=c->r[4]-c->r[24]; // 801CF458
  W16(c->r[17]+0x00000008u,c->r[18]); // 801CF45C
  W32(c->r[16]+0x00000004u,c->r[15]); // 801CF460
  W32(c->r[16]+0x0000000Cu,c->r[14]); // 801CF464
  W16(c->r[12]+0x00000002u,c->r[20]); // 801CF468
  W16(c->r[12]+0x00000004u,c->r[19]); // 801CF46C
  W16(c->r[12]+0x00000014u,c->r[20]); // 801CF470
  W16(c->r[12]+0x00000016u,c->r[19]); // 801CF474
  W32(c->r[11]+0x00000004u,c->r[10]); // 801CF478
  W32(c->r[11]+0x0000000Cu,c->r[9]); // 801CF47C
  W16(c->r[8]+0x00000002u,c->r[25]); // 801CF480
  W16(c->r[8]+0x00000004u,c->r[21]); // 801CF484
  W16(c->r[8]+0x00000014u,c->r[25]); // 801CF488
  W16(c->r[8]+0x00000016u,c->r[21]); // 801CF48C
  W32(c->r[7]+0x00000004u,c->r[6]); // 801CF490
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 801CF494
  W16(c->r[4]+0x00000002u,c->r[27]); // 801CF498
  W16(c->r[4]+0x00000004u,c->r[26]); // 801CF49C
  W16(c->r[4]+0x00000014u,c->r[27]); // 801CF4A0
  W16(c->r[4]+0x00000016u,c->r[26]); // 801CF4A4
  W32(c->r[24]+0x00000004u,c->r[3]); // 801CF4A8
  c->r[26]=c->r[30]+0x00000104u; // 801CF4AC
  c->r[3]=R32(c->r[22]+0x00000004u); // 801CF4B0
  c->r[21]=c->r[0]-c->r[26]; // 801CF4B4
  c->r[12]=c->r[30]+0x00000128u; // 801CF4B8
  c->r[19]=c->r[3]-c->r[12]; // 801CF4BC
  c->r[4]=R32(c->r[22]+0x00000020u); // 801CF4C0
  c->r[20]=sraw(c,c->r[21],16); // 801CF4C4
  c->r[8]=c->r[30]+0x0000014Cu; // 801CF4C8
  c->r[18]=sraw(c,c->r[19],16); // 801CF4CC
  c->r[0]=R32(c->r[22]+0x0000001Cu); // 801CF4D0
  c->r[17]=c->r[4]-c->r[8]; // 801CF4D4
  c->r[27]=c->r[31]+0x000000ACu; // 801CF4D8
  c->r[16]=c->r[0]-c->r[8]; // 801CF4DC
  c->r[11]=c->r[31]+0x000000D4u; // 801CF4E0
  c->r[7]=sraw(c,c->r[17],16); // 801CF4E4
  c->r[3]=c->r[30]+0x0000017Eu; // 801CF4E8
  c->r[15]=c->r[4]-c->r[3]; // 801CF4EC
  c->r[6]=sraw(c,c->r[16],16); // 801CF4F0
  c->r[4]=c->r[30]+0x000000ECu; // 801CF4F4
  c->r[28]=c->r[26]-c->r[27]; // 801CF4F8
  c->r[25]=c->r[4]-c->r[24]; // 801CF4FC
  c->r[5]=c->r[31]+0x000000FCu; // 801CF500
  c->r[0]=c->r[30]+0x00000168u; // 801CF504
  c->r[29]=c->r[23]-c->r[27]; // 801CF508
  c->r[10]=c->r[12]-c->r[11]; // 801CF50C
  c->r[9]=c->r[23]-c->r[11]; // 801CF510
  c->r[4]=c->r[8]-c->r[5]; // 801CF514
  c->r[0]=c->r[0]-c->r[5]; // 801CF518
  c->r[14]=sraw(c,c->r[15],16); // 801CF51C
  W32(c->r[24]+0x0000000Cu,c->r[25]); // 801CF520
  W16(c->r[26]+0x00000002u,c->r[20]); // 801CF524
  W16(c->r[26]+0x00000004u,c->r[21]); // 801CF528
  W16(c->r[26]+0x00000014u,c->r[20]); // 801CF52C
  W16(c->r[26]+0x00000016u,c->r[21]); // 801CF530
  W32(c->r[27]+0x00000004u,c->r[28]); // 801CF534
  W32(c->r[27]+0x0000000Cu,c->r[29]); // 801CF538
  W16(c->r[12]+0x00000002u,c->r[18]); // 801CF53C
  W16(c->r[12]+0x00000004u,c->r[19]); // 801CF540
  W16(c->r[12]+0x00000014u,c->r[18]); // 801CF544
  W16(c->r[12]+0x00000016u,c->r[19]); // 801CF548
  W32(c->r[11]+0x00000004u,c->r[10]); // 801CF54C
  W32(c->r[11]+0x0000000Cu,c->r[9]); // 801CF550
  W16(c->r[8]+0x00000002u,c->r[7]); // 801CF554
  W16(c->r[8]+0x00000004u,c->r[17]); // 801CF558
  W16(c->r[8]+0x00000010u,c->r[6]); // 801CF55C
  W16(c->r[8]+0x00000012u,c->r[16]); // 801CF560
  W32(c->r[5]+0x00000004u,c->r[4]); // 801CF564
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801CF568
  W16(c->r[3]+0x00000002u,c->r[14]); // 801CF56C
  W16(c->r[3]+0x00000004u,c->r[15]); // 801CF570
  c->r[4]=R32(c->r[22]+0x00000018u); // 801CF574
  c->r[17]=c->r[31]+0x00000124u; // 801CF578
  c->r[16]=c->r[3]-c->r[17]; // 801CF57C
  c->r[0]=R32(c->r[22]+0x00000014u); // 801CF580
  c->r[19]=c->r[4]-c->r[3]; // 801CF584
  c->r[4]=R32(c->r[22]+0x00000024u); // 801CF588
  c->r[14]=c->r[30]+0x000001B0u; // 801CF58C
  c->r[9]=c->r[30]+0x000001BEu; // 801CF590
  c->r[20]=c->r[0]-c->r[14]; // 801CF594
  c->r[18]=sraw(c,c->r[19],16); // 801CF598
  c->r[21]=c->r[4]-c->r[9]; // 801CF59C
  c->r[0]=R32(c->r[22]+0x00000044u); // 801CF5A0
  c->r[12]=sraw(c,c->r[20],16); // 801CF5A4
  c->r[4]=R32(c->r[22]+0x00000030u); // 801CF5A8
  c->r[24]=c->r[0]-c->r[9]; // 801CF5AC
  c->r[7]=c->r[30]+0x000001E2u; // 801CF5B0
  c->r[25]=c->r[4]-c->r[7]; // 801CF5B4
  c->r[0]=sraw(c,c->r[21],16); // 801CF5B8
  c->r[4]=R32(c->r[22]+0x0000004Cu); // 801CF5BC
  c->r[11]=c->r[31]+0x0000014Cu; // 801CF5C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CF5C4
  c->r[0]=sraw(c,c->r[24],16); // 801CF5C8
  c->r[26]=c->r[4]-c->r[7]; // 801CF5CC
  c->r[8]=c->r[31]+0x00000174u; // 801CF5D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CF5D4
  c->r[0]=sraw(c,c->r[25],16); // 801CF5D8
  c->r[6]=c->r[31]+0x0000019Cu; // 801CF5DC
  c->r[15]=R32(c->r[22]+0x00000034u); // 801CF5E0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CF5E4
  c->r[0]=sraw(c,c->r[26],16); // 801CF5E8
  c->r[5]=c->r[30]+0x000001FEu; // 801CF5EC
  c->r[4]=c->r[31]+0x000001C4u; // 801CF5F0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CF5F4
  c->r[0]=c->r[13]+0xFFFF890Eu; // 801CF5F8
  c->r[0]=c->r[0]-c->r[11]; // 801CF5FC
  c->r[27]=c->r[15]-c->r[5]; // 801CF600
  W32(c->r[1]+0x00000008u,c->r[0]); // 801CF604
  c->r[0]=c->r[9]-c->r[8]; // 801CF608
  c->r[15]=sraw(c,c->r[27],16); // 801CF60C
  c->r[28]=c->r[30]+0x0000020Cu; // 801CF610
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF614
  c->r[0]=c->r[23]-c->r[8]; // 801CF618
  c->r[10]=c->r[30]+0x0000019Au; // 801CF61C
  c->r[29]=c->r[13]+0xFFFF8910u; // 801CF620
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CF624
  c->r[0]=c->r[7]-c->r[6]; // 801CF628
  W16(c->r[3]+0x00000010u,c->r[18]); // 801CF62C
  W16(c->r[3]+0x00000012u,c->r[19]); // 801CF630
  c->r[3]=R32(c->r[1]+0x00000008u); // 801CF634
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF638
  c->r[0]=c->r[23]-c->r[6]; // 801CF63C
  W32(c->r[11]+0x0000000Cu,c->r[3]); // 801CF640
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801CF644
  W32(c->r[1]+0x00000028u,c->r[0]); // 801CF648
  c->r[0]=c->r[5]-c->r[4]; // 801CF64C
  W16(c->r[9]+0x00000002u,c->r[3]); // 801CF650
  c->r[3]=R32(c->r[1]+0x00000010u); // 801CF654
  W32(c->r[1]+0x0000002Cu,c->r[15]); // 801CF658
  c->r[15]=c->r[10]-c->r[17]; // 801CF65C
  c->r[10]=c->r[14]-c->r[11]; // 801CF660
  W16(c->r[9]+0x00000014u,c->r[3]); // 801CF664
  c->r[3]=R32(c->r[1]+0x00000014u); // 801CF668
  W32(c->r[1]+0x00000030u,c->r[0]); // 801CF66C
  c->r[0]=c->r[23]-c->r[4]; // 801CF670
  c->r[23]=R32(c->r[22]+0x00000040u); // 801CF674
  c->r[22]=c->r[31]+0x000001ECu; // 801CF678
  W32(c->r[8]+0x00000004u,c->r[3]); // 801CF67C
  c->r[18]=c->r[28]-c->r[22]; // 801CF680
  c->r[23]=c->r[23]-c->r[28]; // 801CF684
  c->r[3]=R32(c->r[1]+0x00000018u); // 801CF688
  c->r[30]=sraw(c,c->r[23],16); // 801CF68C
  c->r[29]=c->r[29]-c->r[22]; // 801CF690
  W32(c->r[8]+0x0000000Cu,c->r[3]); // 801CF694
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801CF698
  W32(c->r[17]+0x00000004u,c->r[16]); // 801CF69C
  W16(c->r[7]+0x00000002u,c->r[3]); // 801CF6A0
  c->r[3]=R32(c->r[1]+0x00000020u); // 801CF6A4
  W32(c->r[17]+0x0000000Cu,c->r[15]); // 801CF6A8
  W16(c->r[7]+0x00000010u,c->r[3]); // 801CF6AC
  c->r[3]=R32(c->r[1]+0x00000024u); // 801CF6B0
  W16(c->r[14]+0x00000002u,c->r[12]); // 801CF6B4
  W32(c->r[6]+0x00000004u,c->r[3]); // 801CF6B8
  c->r[3]=R32(c->r[1]+0x00000028u); // 801CF6BC
  W16(c->r[14]+0x00000004u,c->r[20]); // 801CF6C0
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 801CF6C4
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 801CF6C8
  W32(c->r[11]+0x00000004u,c->r[10]); // 801CF6CC
  W16(c->r[5]+0x00000002u,c->r[3]); // 801CF6D0
  c->r[3]=R32(c->r[1]+0x00000030u); // 801CF6D4
  W16(c->r[9]+0x00000004u,c->r[21]); // 801CF6D8
  W16(c->r[9]+0x00000016u,c->r[24]); // 801CF6DC
  W16(c->r[7]+0x00000004u,c->r[25]); // 801CF6E0
  W16(c->r[7]+0x00000012u,c->r[26]); // 801CF6E4
  W16(c->r[5]+0x00000004u,c->r[27]); // 801CF6E8
  W32(c->r[4]+0x00000004u,c->r[3]); // 801CF6EC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CF6F0
  W16(c->r[28]+0x00000002u,c->r[30]); // 801CF6F4
  W16(c->r[28]+0x00000004u,c->r[23]); // 801CF6F8
  W32(c->r[22]+0x00000004u,c->r[18]); // 801CF6FC
  W32(c->r[22]+0x0000000Cu,c->r[29]); // 801CF700
  c->r[11]=c->r[1]+0x00000080u; // 801CF704
  c->lr=0x801CF70Cu; f_80289E0C(c); // 801CF708
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CF70C
  c->lr=c->r[0]; // 801CF710
  c->r[1]=c->r[1]+0x00000080u; // 801CF714
  return; // 801CF718
}

// fn_801CF71C
void f_801CF71C(Ctx* __restrict c) {
  trace_call(0x801CF71Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF71C
  c->r[0]=c->lr; // 801CF720
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF728
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF72C
  c->r[30]=c->r[3]|c->r[3]; // 801CF730
  c->lr=0x801CF738u; f_801C236C(c); // 801CF734
  {uint32_t ea=c->r[2]+0xFFFFBC00u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF738
  c->r[4]=0u+0x0000001Eu; // 801CF73C
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF740
  c->r[0]=0u+0x00000014u; // 801CF744
  {uint32_t ea=c->r[2]+0xFFFFBC08u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF748
  c->r[31]=0u+0x803E0000u; // 801CF74C
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF750
  c->r[3]=c->r[30]+0x00002180u; // 801CF754
  W16(c->r[30]+0x00001FA2u,c->r[4]); // 801CF758
  c->r[4]=c->r[31]+0x00000EE0u; // 801CF75C
  W16(c->r[30]+0x00002194u,c->r[0]); // 801CF760
  {uint32_t ea=c->r[30]+0x00001FB8u; WF32(ea,c->f[3]);} // 801CF764
  {uint32_t ea=c->r[30]+0x00001FE0u; WF32(ea,c->f[2]);} // 801CF768
  {uint32_t ea=c->r[30]+0x00001FE4u; WF32(ea,c->f[2]);} // 801CF76C
  {uint32_t ea=c->r[30]+0x00001FE8u; WF32(ea,c->f[1]);} // 801CF770
  {uint32_t ea=c->r[30]+0x000021ACu; WF32(ea,c->f[3]);} // 801CF774
  {uint32_t ea=c->r[30]+0x000021E0u; WF32(ea,c->f[0]);} // 801CF778
  {uint32_t ea=c->r[30]+0x000021DCu; WF32(ea,c->f[3]);} // 801CF77C
  {uint32_t ea=c->r[30]+0x000021E4u; WF32(ea,c->f[3]);} // 801CF780
  c->lr=0x801CF788u; f_802933D8(c); // 801CF784
  c->r[31]=c->r[31]+0x00000EE0u; // 801CF788
  c->r[3]=c->r[30]+0x00001F65u; // 801CF78C
  c->r[4]=c->r[31]+0x0000000Au; // 801CF790
  c->lr=0x801CF798u; f_802933D8(c); // 801CF794
  c->r[3]=c->r[30]+0x00001F79u; // 801CF798
  c->r[4]=c->r[31]+0x00000017u; // 801CF79C
  c->lr=0x801CF7A4u; f_802933D8(c); // 801CF7A0
  c->r[3]=c->r[30]+0x00001F8Du; // 801CF7A4
  c->r[4]=c->r[31]+0x00000026u; // 801CF7A8
  c->lr=0x801CF7B0u; f_802933D8(c); // 801CF7AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF7B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF7B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF7B8
  c->lr=c->r[0]; // 801CF7BC
  c->r[1]=c->r[1]+0x00000010u; // 801CF7C0
  return; // 801CF7C4
}

// fn_801CF7C8
void f_801CF7C8(Ctx* __restrict c) {
  trace_call(0x801CF7C8u);
  f_801C20E4(c); return; // 801CF7C8
}

// fn_801CF7CC
void f_801CF7CC(Ctx* __restrict c) {
  trace_call(0x801CF7CCu);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801CF7CC
  cmps(c,0,(int32_t)c->r[0],30); // 801CF7D0
  if (!crb(c,2)) return; // 801CF7D4
  c->r[4]=c->r[5]|c->r[5]; // 801CF7D8
  f_801D027C(c); return; // 801CF7DC
  return; // 801CF7E0
}

// fn_801CF7E4
void f_801CF7E4(Ctx* __restrict c) {
  trace_call(0x801CF7E4u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801CF7E4
  cmps(c,0,(int32_t)c->r[0],30); // 801CF7E8
  if (crb(c,2)) { goto L_801CF7F4; } // 801CF7EC
  return; // 801CF7F0
L_801CF7F4:;
  f_801C2758(c); return; // 801CF7F4
  return; // 801CF7F8
}

// fn_801CF7FC
void f_801CF7FC(Ctx* __restrict c) {
  trace_call(0x801CF7FCu);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801CF7FC
  cmps(c,0,(int32_t)c->r[0],30); // 801CF800
  if (crb(c,2)) { goto L_801CF80C; } // 801CF804
  return; // 801CF808
L_801CF80C:;
  f_801D0378(c); return; // 801CF80C
  return; // 801CF810
}

// fn_801CF814
void f_801CF814(Ctx* __restrict c) {
  trace_call(0x801CF814u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801CF814
  cmps(c,0,(int32_t)c->r[0],20); // 801CF818
  if (crb(c,2)) { goto L_801CF844; } // 801CF81C
  if (!crb(c,0)) { goto L_801CF830; } // 801CF820
  cmps(c,0,(int32_t)c->r[0],10); // 801CF824
  if (crb(c,2)) { goto L_801CF83C; } // 801CF828
  return; // 801CF82C
L_801CF830:;
  cmps(c,0,(int32_t)c->r[0],40); // 801CF830
  if (crb(c,2)) { goto L_801CF84C; } // 801CF834
  return; // 801CF838
L_801CF83C:;
  c->r[4]=c->r[5]|c->r[5]; // 801CF83C
  f_801C29B4(c); return; // 801CF840
L_801CF844:;
  c->r[4]=c->r[5]|c->r[5]; // 801CF844
  f_801D014C(c); return; // 801CF848
L_801CF84C:;
  c->r[4]=c->r[5]|c->r[5]; // 801CF84C
  f_801C3018(c); return; // 801CF850
  return; // 801CF854
}

// fn_801CF858
void f_801CF858(Ctx* __restrict c) {
  trace_call(0x801CF858u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801CF858
  cmps(c,0,(int32_t)c->r[0],20); // 801CF85C
  if (crb(c,2)) { goto L_801CF884; } // 801CF860
  if (!crb(c,0)) { goto L_801CF874; } // 801CF864
  cmps(c,0,(int32_t)c->r[0],10); // 801CF868
  if (crb(c,2)) { goto L_801CF880; } // 801CF86C
  return; // 801CF870
L_801CF874:;
  cmps(c,0,(int32_t)c->r[0],40); // 801CF874
  if (crb(c,2)) { goto L_801CF888; } // 801CF878
  return; // 801CF87C
L_801CF880:;
  f_801C2BE0(c); return; // 801CF880
L_801CF884:;
  f_801D01D4(c); return; // 801CF884
L_801CF888:;
  f_801C3178(c); return; // 801CF888
  return; // 801CF88C
}

// fn_801CF890
void f_801CF890(Ctx* __restrict c) {
  trace_call(0x801CF890u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801CF890
  cmps(c,0,(int32_t)c->r[0],20); // 801CF894
  if (crb(c,2)) { goto L_801CF8BC; } // 801CF898
  if (!crb(c,0)) { goto L_801CF8AC; } // 801CF89C
  cmps(c,0,(int32_t)c->r[0],10); // 801CF8A0
  if (crb(c,2)) { goto L_801CF8B8; } // 801CF8A4
  return; // 801CF8A8
L_801CF8AC:;
  cmps(c,0,(int32_t)c->r[0],40); // 801CF8AC
  if (crb(c,2)) { goto L_801CF8C0; } // 801CF8B0
  return; // 801CF8B4
L_801CF8B8:;
  f_801C2C78(c); return; // 801CF8B8
L_801CF8BC:;
  f_801C2FB4(c); return; // 801CF8BC
L_801CF8C0:;
  f_801C31D8(c); return; // 801CF8C0
  return; // 801CF8C4
}

// fn_801CF8C8
void f_801CF8C8(Ctx* __restrict c) {
  trace_call(0x801CF8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF8C8
  c->r[0]=c->lr; // 801CF8CC
  W32(c->r[1]+0x00000094u,c->r[0]); // 801CF8D0
  c->r[11]=c->r[1]+0x00000090u; // 801CF8D4
  c->lr=0x801CF8DCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CF8D8
  c->r[30]=c->r[5]|c->r[5]; // 801CF8DC
  c->r[29]=c->r[3]|c->r[3]; // 801CF8E0
  c->r[4]=c->r[30]|c->r[30]; // 801CF8E4
  c->lr=0x801CF8ECu; f_801C3B78(c); // 801CF8E8
  c->lr=0x801CF8F0u; f_80232150(c); // 801CF8EC
  c->r[4]=0u+0x803E0000u; // 801CF8F0
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF8F4
  c->r[4]=c->r[4]+0x00000EE0u; // 801CF8F8
  c->r[4]=c->r[4]+0x00000034u; // 801CF8FC
  c->lr=0x801CF904u; f_80232230(c); // 801CF900
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[1]);} // 801CF904
  c->r[0]=R16(c->r[29]+0x00001FECu); // 801CF908
  cmpu(c,0,c->r[0],0x0000000Au); // 801CF90C
  if (!crb(c,2)) { goto L_801CF9E0; } // 801CF910
  c->r[5]=R32(c->r[29]+0x00000974u); // 801CF914
  c->r[3]=c->r[29]+0x000008ECu; // 801CF918
  c->r[4]=c->r[29]+0x00001F3Du; // 801CF91C
  c->r[5]=R32(c->r[5]+0x00000000u); // 801CF920
  c->r[31]=R32(c->r[5]+0x00000018u); // 801CF924
  c->lr=0x801CF92Cu; f_80075440(c); // 801CF928
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801CF92C
  if (crb(c,2)) { goto L_801CF944; } // 801CF930
  c->r[3]=c->r[29]+0x000008ECu; // 801CF934
  c->r[4]=c->r[29]+0x00001F3Du; // 801CF938
  c->lr=0x801CF940u; f_80075440(c); // 801CF93C
  W32(c->r[30]+0x00000034u,c->r[3]); // 801CF940
L_801CF944:;
  c->r[5]=R32(c->r[30]+0x00000034u); // 801CF944
  c->r[3]=c->r[29]+0x00000C88u; // 801CF948
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF94C
  c->r[4]=c->r[29]+0x000008ECu; // 801CF950
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF954
  c->r[6]=0u+0x00000000u; // 801CF958
  c->r[7]=0u+0x00000000u; // 801CF95C
  c->lr=0x801CF964u; f_800BB0C8(c); // 801CF960
  c->r[0]=0u+0x0000000Bu; // 801CF964
  c->r[3]=R32(c->r[29]+0x00000974u); // 801CF968
  W16(c->r[29]+0x00001FEEu,c->r[0]); // 801CF96C
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF970
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CF974
  c->lr=0x801CF97Cu; f_80165B9C(c); // 801CF978
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801CF97C
  c->r[3]=c->r[29]+0x000008D0u; // 801CF980
  c->r[4]=c->r[29]+0x000021ACu; // 801CF984
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CF988
  c->ctr=c->r[12]; // 801CF98C
  if (true) { c->lr=0x801CF994u; dispatch(c,c->ctr); } // 801CF990
  {uint32_t ea=c->r[29]+0x000021E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF994
  c->r[4]=c->r[29]+0x000008D0u; // 801CF998
  {uint32_t ea=c->r[29]+0x000021E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF99C
  c->r[3]=c->r[1]+0x00000050u; // 801CF9A0
  {uint32_t ea=c->r[29]+0x00001FF4u; WF32(ea,c->f[1]);} // 801CF9A4
  {uint32_t ea=c->r[29]+0x00002010u; WF32(ea,c->f[0]);} // 801CF9A8
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801CF9AC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CF9B0
  c->ctr=c->r[12]; // 801CF9B4
  if (true) { c->lr=0x801CF9BCu; dispatch(c,c->ctr); } // 801CF9B8
  c->r[3]=c->r[1]+0x00000014u; // 801CF9BC
  c->r[4]=c->r[1]+0x00000050u; // 801CF9C0
  c->lr=0x801CF9C8u; f_80032FD8(c); // 801CF9C4
  c->r[3]=c->r[29]+0x000021A0u; // 801CF9C8
  c->r[4]=c->r[1]+0x00000014u; // 801CF9CC
  c->lr=0x801CF9D4u; f_8003F468(c); // 801CF9D0
  c->r[0]=0u+0x00000000u; // 801CF9D4
  W32(c->r[29]+0x0000219Cu,c->r[0]); // 801CF9D8
  goto L_801CFA80; // 801CF9DC
L_801CF9E0:;
  c->r[5]=R32(c->r[29]+0x00000974u); // 801CF9E0
  c->r[3]=c->r[29]+0x000008ECu; // 801CF9E4
  c->r[4]=c->r[29]+0x00001F3Du; // 801CF9E8
  c->r[5]=R32(c->r[5]+0x00000000u); // 801CF9EC
  c->r[31]=R32(c->r[5]+0x00000018u); // 801CF9F0
  c->lr=0x801CF9F8u; f_80075440(c); // 801CF9F4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801CF9F8
  if (crb(c,2)) { goto L_801CFA10; } // 801CF9FC
  c->r[3]=c->r[29]+0x000008ECu; // 801CFA00
  c->r[4]=c->r[29]+0x00001F3Du; // 801CFA04
  c->lr=0x801CFA0Cu; f_80075440(c); // 801CFA08
  W32(c->r[30]+0x00000034u,c->r[3]); // 801CFA0C
L_801CFA10:;
  c->r[5]=R32(c->r[30]+0x00000034u); // 801CFA10
  c->r[3]=c->r[29]+0x00000C88u; // 801CFA14
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFA18
  c->r[4]=c->r[29]+0x000008ECu; // 801CFA1C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CFA20
  c->r[6]=0u+0x00000000u; // 801CFA24
  c->r[7]=0u+0x00000000u; // 801CFA28
  c->lr=0x801CFA30u; f_800BB0C8(c); // 801CFA2C
  c->r[0]=0u+0x00000017u; // 801CFA30
  c->r[3]=R32(c->r[29]+0x00000974u); // 801CFA34
  W16(c->r[29]+0x00001FEEu,c->r[0]); // 801CFA38
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFA3C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CFA40
  c->lr=0x801CFA48u; f_80165B9C(c); // 801CFA44
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801CFA48
  c->r[4]=c->r[29]+0x000008D0u; // 801CFA4C
  c->r[3]=c->r[1]+0x00000020u; // 801CFA50
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CFA54
  c->ctr=c->r[12]; // 801CFA58
  if (true) { c->lr=0x801CFA60u; dispatch(c,c->ctr); } // 801CFA5C
  c->r[3]=c->r[1]+0x00000008u; // 801CFA60
  c->r[4]=c->r[1]+0x00000020u; // 801CFA64
  c->lr=0x801CFA6Cu; f_80032FD8(c); // 801CFA68
  c->r[3]=c->r[29]+0x000021A0u; // 801CFA6C
  c->r[4]=c->r[1]+0x00000008u; // 801CFA70
  c->lr=0x801CFA78u; f_8003F468(c); // 801CFA74
  c->r[0]=0u+0x00000000u; // 801CFA78
  W32(c->r[29]+0x0000219Cu,c->r[0]); // 801CFA7C
L_801CFA80:;
  c->r[11]=c->r[1]+0x00000090u; // 801CFA80
  c->lr=0x801CFA88u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFA84
  c->r[0]=R32(c->r[1]+0x00000094u); // 801CFA88
  c->lr=c->r[0]; // 801CFA8C
  c->r[1]=c->r[1]+0x00000090u; // 801CFA90
  return; // 801CFA94
}

// fn_801CFA98
void f_801CFA98(Ctx* __restrict c) {
  trace_call(0x801CFA98u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFA98
  c->r[0]=c->lr; // 801CFA9C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801CFAA0
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801CFAA4
  c->r[31]=c->r[3]|c->r[3]; // 801CFAA8
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801CFAAC
  cmps(c,0,(int32_t)c->r[0],23); // 801CFAB0
  if (crb(c,2)) { goto L_801CFAD4; } // 801CFAB4
  if (!crb(c,0)) { goto L_801CFAC8; } // 801CFAB8
  cmps(c,0,(int32_t)c->r[0],12); // 801CFABC
  if (crb(c,2)) { goto L_801CFB80; } // 801CFAC0
  goto L_801CFCE0; // 801CFAC4
L_801CFAC8:;
  cmps(c,0,(int32_t)c->r[0],26); // 801CFAC8
  if (crb(c,2)) { goto L_801CFC28; } // 801CFACC
  goto L_801CFCE0; // 801CFAD0
L_801CFAD4:;
  c->r[4]=c->r[31]|c->r[31]; // 801CFAD4
  c->r[3]=c->r[1]+0x00000078u; // 801CFAD8
  c->r[5]=0u+0x00000000u; // 801CFADC
  c->lr=0x801CFAE4u; f_801D042C(c); // 801CFAE0
  c->r[3]=c->r[1]+0x00000078u; // 801CFAE4
  c->lr=0x801CFAECu; f_801C4B60(c); // 801CFAE8
  cmps(c,0,(int32_t)c->r[3],0); // 801CFAEC
  if (!crb(c,2)) { goto L_801CFB0C; } // 801CFAF0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CFAF4
  c->r[3]=c->r[31]+0x000008D0u; // 801CFAF8
  c->r[4]=c->r[1]+0x00000078u; // 801CFAFC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CFB00
  c->ctr=c->r[12]; // 801CFB04
  if (true) { c->lr=0x801CFB0Cu; dispatch(c,c->ctr); } // 801CFB08
L_801CFB0C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFB0C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFB10
  fcmp(c,0,c->f[1],c->f[0]); // 801CFB14
  if (!crb(c,0)) { goto L_801CFB30; } // 801CFB18
  c->r[3]=0u+0x804D0000u; // 801CFB1C
  c->r[3]=c->r[3]+0x00003318u; // 801CFB20
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFB24
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CFB28
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFB2C
L_801CFB30:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFB30
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFB34
  fcmp(c,0,c->f[1],c->f[0]); // 801CFB38
  if (!crb(c,1)) { goto L_801CFB44; } // 801CFB3C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFB40
L_801CFB44:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFB44
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFB48
  fcmp(c,0,c->f[1],c->f[0]); // 801CFB4C
  if (!crb(c,1)) { goto L_801CFB68; } // 801CFB50
  c->r[3]=0u+0x804D0000u; // 801CFB54
  c->r[3]=c->r[3]+0x00003318u; // 801CFB58
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFB5C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CFB60
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFB64
L_801CFB68:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFB68
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFB6C
  fcmp(c,0,c->f[1],c->f[0]); // 801CFB70
  if (!crb(c,0)) { goto L_801CFCE0; } // 801CFB74
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFB78
  goto L_801CFCE0; // 801CFB7C
L_801CFB80:;
  c->r[4]=c->r[31]|c->r[31]; // 801CFB80
  c->r[3]=c->r[1]+0x00000048u; // 801CFB84
  c->lr=0x801CFB8Cu; f_801D0714(c); // 801CFB88
  c->r[3]=c->r[1]+0x00000048u; // 801CFB8C
  c->lr=0x801CFB94u; f_801C4B60(c); // 801CFB90
  cmps(c,0,(int32_t)c->r[3],0); // 801CFB94
  if (!crb(c,2)) { goto L_801CFBB4; } // 801CFB98
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CFB9C
  c->r[3]=c->r[31]+0x000008D0u; // 801CFBA0
  c->r[4]=c->r[1]+0x00000048u; // 801CFBA4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CFBA8
  c->ctr=c->r[12]; // 801CFBAC
  if (true) { c->lr=0x801CFBB4u; dispatch(c,c->ctr); } // 801CFBB0
L_801CFBB4:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFBB4
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFBB8
  fcmp(c,0,c->f[1],c->f[0]); // 801CFBBC
  if (!crb(c,0)) { goto L_801CFBD8; } // 801CFBC0
  c->r[3]=0u+0x804D0000u; // 801CFBC4
  c->r[3]=c->r[3]+0x00003318u; // 801CFBC8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFBCC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CFBD0
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFBD4
L_801CFBD8:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFBD8
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFBDC
  fcmp(c,0,c->f[1],c->f[0]); // 801CFBE0
  if (!crb(c,1)) { goto L_801CFBEC; } // 801CFBE4
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFBE8
L_801CFBEC:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFBEC
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFBF0
  fcmp(c,0,c->f[1],c->f[0]); // 801CFBF4
  if (!crb(c,1)) { goto L_801CFC10; } // 801CFBF8
  c->r[3]=0u+0x804D0000u; // 801CFBFC
  c->r[3]=c->r[3]+0x00003318u; // 801CFC00
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFC04
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CFC08
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFC0C
L_801CFC10:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFC10
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFC14
  fcmp(c,0,c->f[1],c->f[0]); // 801CFC18
  if (!crb(c,0)) { goto L_801CFCE0; } // 801CFC1C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFC20
  goto L_801CFCE0; // 801CFC24
L_801CFC28:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801CFC28
  c->r[4]=c->r[31]+0x00002000u; // 801CFC2C
  c->lr=0x801CFC34u; f_8003F484(c); // 801CFC30
  c->r[4]=c->r[3]|c->r[3]; // 801CFC34
  c->r[3]=c->r[31]|c->r[31]; // 801CFC38
  c->r[5]=c->r[1]+0x00000018u; // 801CFC3C
  c->r[6]=c->r[1]+0x00000008u; // 801CFC40
  c->lr=0x801CFC48u; f_801C3F00(c); // 801CFC44
  c->r[3]=c->r[1]+0x00000018u; // 801CFC48
  c->lr=0x801CFC50u; f_801C4B60(c); // 801CFC4C
  cmps(c,0,(int32_t)c->r[3],0); // 801CFC50
  if (!crb(c,2)) { goto L_801CFC70; } // 801CFC54
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CFC58
  c->r[3]=c->r[31]+0x000008D0u; // 801CFC5C
  c->r[4]=c->r[1]+0x00000018u; // 801CFC60
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CFC64
  c->ctr=c->r[12]; // 801CFC68
  if (true) { c->lr=0x801CFC70u; dispatch(c,c->ctr); } // 801CFC6C
L_801CFC70:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFC70
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFC74
  fcmp(c,0,c->f[1],c->f[0]); // 801CFC78
  if (!crb(c,0)) { goto L_801CFC94; } // 801CFC7C
  c->r[3]=0u+0x804D0000u; // 801CFC80
  c->r[3]=c->r[3]+0x00003318u; // 801CFC84
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFC88
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CFC8C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFC90
L_801CFC94:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFC94
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFC98
  fcmp(c,0,c->f[1],c->f[0]); // 801CFC9C
  if (!crb(c,1)) { goto L_801CFCA8; } // 801CFCA0
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFCA4
L_801CFCA8:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFCA8
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFCAC
  fcmp(c,0,c->f[1],c->f[0]); // 801CFCB0
  if (!crb(c,1)) { goto L_801CFCCC; } // 801CFCB4
  c->r[3]=0u+0x804D0000u; // 801CFCB8
  c->r[3]=c->r[3]+0x00003318u; // 801CFCBC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFCC0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CFCC4
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFCC8
L_801CFCCC:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFCCC
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFCD0
  fcmp(c,0,c->f[1],c->f[0]); // 801CFCD4
  if (!crb(c,0)) { goto L_801CFCE0; } // 801CFCD8
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFCDC
L_801CFCE0:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801CFCE0
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801CFCE4
  c->lr=c->r[0]; // 801CFCE8
  c->r[1]=c->r[1]+0x000000B0u; // 801CFCEC
  return; // 801CFCF0
}

// fn_801CFCF4
void f_801CFCF4(Ctx* __restrict c) {
  trace_call(0x801CFCF4u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFCF4
  c->r[0]=c->lr; // 801CFCF8
  W32(c->r[1]+0x00000194u,c->r[0]); // 801CFCFC
  W32(c->r[1]+0x0000018Cu,c->r[31]); // 801CFD00
  c->r[31]=c->r[3]|c->r[3]; // 801CFD04
  W32(c->r[1]+0x00000188u,c->r[30]); // 801CFD08
  c->r[30]=c->r[4]|c->r[4]; // 801CFD0C
  c->r[5]=R16(c->r[3]+0x00001FEEu); // 801CFD10
  c->r[0]=c->r[5]+0xFFFFFFF5u; // 801CFD14
  cmpu(c,0,c->r[0],0x00000010u); // 801CFD18
  if (crb(c,1)) { goto L_801D0134; } // 801CFD1C
  c->r[4]=0u+0x80400000u; // 801CFD20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CFD24
  c->r[4]=c->r[4]+0x00004578u; // 801CFD28
  c->r[4]=R32(c->r[4]+c->r[0]); // 801CFD2C
  c->ctr=c->r[4]; // 801CFD30
  if (true) { switch (c->ctr) { case 0x801CFD38u: goto L_801CFD38; case 0x801CFD98u: goto L_801CFD98; case 0x801CFEC8u: goto L_801CFEC8; case 0x801CFF24u: goto L_801CFF24; case 0x801D0004u: goto L_801D0004; case 0x801D003Cu: goto L_801D003C; case 0x801D009Cu: goto L_801D009C; case 0x801D0134u: goto L_801D0134; default: break; } dispatch(c,c->ctr); return; } // 801CFD34
L_801CFD38:;
  c->lr=0x801CFD3Cu; f_801C3C1C(c); // 801CFD38
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFD3C
  fcmp(c,0,c->f[1],c->f[0]); // 801CFD40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CFD44
  if (!crb(c,2)) { goto L_801D0134; } // 801CFD48
  c->r[3]=c->r[31]+0x000008ECu; // 801CFD4C
  c->r[4]=c->r[31]+0x00002180u; // 801CFD50
  c->lr=0x801CFD58u; f_80075440(c); // 801CFD54
  W32(c->r[30]+0x00000034u,c->r[3]); // 801CFD58
  c->r[5]=c->r[3]|c->r[3]; // 801CFD5C
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFD60
  c->r[3]=c->r[31]+0x00000C88u; // 801CFD64
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CFD68
  c->r[4]=c->r[31]+0x000008ECu; // 801CFD6C
  c->r[6]=0u+0x00000000u; // 801CFD70
  c->r[7]=0u+0x00000000u; // 801CFD74
  c->lr=0x801CFD7Cu; f_800BB0C8(c); // 801CFD78
  c->r[0]=0u+0x00000018u; // 801CFD7C
  c->r[3]=R32(c->r[31]+0x00000974u); // 801CFD80
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801CFD84
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFD88
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CFD8C
  c->lr=0x801CFD94u; f_80165B9C(c); // 801CFD90
  goto L_801D0134; // 801CFD94
L_801CFD98:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801CFD98
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CFD9C
  c->lr=0x801CFDA4u; f_800752CC(c); // 801CFDA0
  {uint32_t ea=c->r[2]+0xFFFFBC1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFDA4
  fcmp(c,0,c->f[1],c->f[0]); // 801CFDA8
  if (!crb(c,1)) { goto L_801D0134; } // 801CFDAC
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CFDB0
  c->r[4]=c->r[31]+0x000008D0u; // 801CFDB4
  c->r[3]=c->r[1]+0x00000124u; // 801CFDB8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CFDBC
  c->ctr=c->r[12]; // 801CFDC0
  if (true) { c->lr=0x801CFDC8u; dispatch(c,c->ctr); } // 801CFDC4
  c->r[3]=c->r[1]+0x00000094u; // 801CFDC8
  c->r[4]=c->r[1]+0x00000124u; // 801CFDCC
  c->lr=0x801CFDD4u; f_80032FD8(c); // 801CFDD0
  c->r[3]=c->r[31]|c->r[31]; // 801CFDD4
  c->lr=0x801CFDDCu; f_801C3C1C(c); // 801CFDD8
  {uint32_t ea=c->r[2]+0xFFFFBC20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFDDC
  fcmp(c,0,c->f[1],c->f[0]); // 801CFDE0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CFDE4
  if (!crb(c,2)) { goto L_801CFE34; } // 801CFDE8
  {uint32_t ea=c->r[30]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFDEC
  c->r[3]=c->r[1]+0x00000100u; // 801CFDF0
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFDF4
  c->r[4]=c->r[1]+0x00000094u; // 801CFDF8
  c->r[5]=0u+0xFFFFFFFFu; // 801CFDFC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801CFE00
  c->lr=0x801CFE08u; f_800BCD10(c); // 801CFE04
  c->r[0]=R32(c->r[30]+0x00000024u); // 801CFE08
  c->r[5]=c->r[13]+0xFFFF94B8u; // 801CFE0C
  c->r[3]=c->r[1]+0x00000008u; // 801CFE10
  c->r[4]=c->r[1]+0x00000100u; // 801CFE14
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CFE18
  c->r[6]=R32(c->r[5]+c->r[0]); // 801CFE1C
  c->r[5]=R32(c->r[6]+0x00000000u); // 801CFE20
  c->r[0]=R32(c->r[6]+0x00000004u); // 801CFE24
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CFE28
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CFE2C
  c->lr=0x801CFE34u; f_800BCDAC(c); // 801CFE30
L_801CFE34:;
  c->r[0]=0u+0x00000019u; // 801CFE34
  c->r[4]=c->r[31]+0x000008D0u; // 801CFE38
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801CFE3C
  c->r[3]=c->r[1]+0x00000154u; // 801CFE40
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CFE44
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CFE48
  c->ctr=c->r[12]; // 801CFE4C
  if (true) { c->lr=0x801CFE54u; dispatch(c,c->ctr); } // 801CFE50
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFE54
  c->r[3]=c->r[1]+0x00000088u; // 801CFE58
  {uint32_t ea=c->r[1]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CFE5C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CFE60
  c->lr=0x801CFE68u; f_800521A0(c); // 801CFE64
  c->lr=0x801CFE6Cu; f_80061A4C(c); // 801CFE68
  c->r[4]=c->r[3]|c->r[3]; // 801CFE6C
  c->r[3]=c->r[1]+0x0000007Cu; // 801CFE70
  c->r[4]=c->r[4]+0x00000384u; // 801CFE74
  c->r[5]=c->r[1]+0x00000088u; // 801CFE78
  c->lr=0x801CFE80u; f_80064C74(c); // 801CFE7C
  c->r[3]=c->r[1]+0x0000007Cu; // 801CFE80
  c->r[4]=c->r[3]|c->r[3]; // 801CFE84
  c->lr=0x801CFE8Cu; f_80265750(c); // 801CFE88
  c->r[3]=c->r[1]+0x00000154u; // 801CFE8C
  c->lr=0x801CFE94u; f_80264680(c); // 801CFE90
  c->r[3]=c->r[1]+0x00000154u; // 801CFE94
  c->r[4]=c->r[1]+0x0000007Cu; // 801CFE98
  c->lr=0x801CFEA0u; f_8007513C(c); // 801CFE9C
  c->r[3]=c->r[1]+0x00000154u; // 801CFEA0
  c->r[4]=c->r[1]+0x00000088u; // 801CFEA4
  c->lr=0x801CFEACu; f_80032FF4(c); // 801CFEA8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CFEAC
  c->r[3]=c->r[31]+0x000008D0u; // 801CFEB0
  c->r[4]=c->r[1]+0x00000154u; // 801CFEB4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801CFEB8
  c->ctr=c->r[12]; // 801CFEBC
  if (true) { c->lr=0x801CFEC4u; dispatch(c,c->ctr); } // 801CFEC0
  goto L_801D0134; // 801CFEC4
L_801CFEC8:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801CFEC8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CFECC
  c->lr=0x801CFED4u; f_800752CC(c); // 801CFED0
  {uint32_t ea=c->r[2]+0xFFFFBC24u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFED4
  fcmp(c,0,c->f[1],c->f[0]); // 801CFED8
  if (!crb(c,1)) { goto L_801D0134; } // 801CFEDC
  c->r[3]=c->r[31]+0x000008ECu; // 801CFEE0
  c->r[4]=c->r[31]+0x00001F51u; // 801CFEE4
  c->lr=0x801CFEECu; f_80075440(c); // 801CFEE8
  W32(c->r[30]+0x00000034u,c->r[3]); // 801CFEEC
  c->r[5]=c->r[3]|c->r[3]; // 801CFEF0
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFEF4
  c->r[3]=c->r[31]+0x00000C88u; // 801CFEF8
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CFEFC
  c->r[4]=c->r[31]+0x000008ECu; // 801CFF00
  c->r[6]=0u+0x00000000u; // 801CFF04
  c->r[7]=0u+0x00000000u; // 801CFF08
  c->lr=0x801CFF10u; f_800BB0C8(c); // 801CFF0C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFF10
  c->r[0]=0u+0x0000001Bu; // 801CFF14
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801CFF18
  {uint32_t ea=c->r[31]+0x00002010u; WF32(ea,c->f[0]);} // 801CFF1C
  goto L_801D0134; // 801CFF20
L_801CFF24:;
  c->r[4]=0u+0x804D0000u; // 801CFF24
  {uint32_t ea=c->r[3]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFF28
  c->r[4]=c->r[4]+0x00003318u; // 801CFF2C
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFF30
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CFF34
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801CFF38
  fcmp(c,0,c->f[1],c->f[0]); // 801CFF3C
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[1]);} // 801CFF40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CFF44
  if (!crb(c,2)) { goto L_801D0134; } // 801CFF48
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801CFF4C
  cmpu(c,0,c->r[0],0x0000000Au); // 801CFF50
  if (!crb(c,2)) { goto L_801CFFF4; } // 801CFF54
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CFF58
  c->r[0]=0u+0x0000001Au; // 801CFF5C
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801CFF60
  {uint32_t ea=c->r[3]+0x00001FF0u; WF32(ea,c->f[0]);} // 801CFF64
  c->lr=0x801CFF6Cu; f_80061A4C(c); // 801CFF68
  c->r[4]=c->r[3]|c->r[3]; // 801CFF6C
  c->r[3]=c->r[1]+0x00000070u; // 801CFF70
  c->r[4]=c->r[4]+0x00000384u; // 801CFF74
  c->lr=0x801CFF7Cu; f_8003F484(c); // 801CFF78
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801CFF7C
  c->r[4]=c->r[31]+0x000008D0u; // 801CFF80
  c->r[3]=c->r[1]+0x000000D0u; // 801CFF84
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CFF88
  c->ctr=c->r[12]; // 801CFF8C
  if (true) { c->lr=0x801CFF94u; dispatch(c,c->ctr); } // 801CFF90
  c->r[3]=c->r[1]+0x00000064u; // 801CFF94
  c->r[4]=c->r[1]+0x000000D0u; // 801CFF98
  c->lr=0x801CFFA0u; f_800BC9F4(c); // 801CFF9C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFFA0
  c->r[3]=c->r[1]+0x0000001Cu; // 801CFFA4
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CFFA8
  c->f[3]=c->f[1]; // 801CFFAC
  c->lr=0x801CFFB4u; f_800521A0(c); // 801CFFB0
  {uint32_t ea=c->r[2]+0xFFFFBC2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CFFB4
  c->r[3]=c->r[1]+0x00000028u; // 801CFFB8
  c->r[4]=c->r[1]+0x00000064u; // 801CFFBC
  c->lr=0x801CFFC4u; f_800FACB4(c); // 801CFFC0
  c->r[3]=c->r[1]+0x00000034u; // 801CFFC4
  c->r[4]=c->r[1]+0x00000070u; // 801CFFC8
  c->r[5]=c->r[1]+0x00000028u; // 801CFFCC
  c->lr=0x801CFFD4u; f_80064C74(c); // 801CFFD0
  c->r[3]=c->r[1]+0x00000040u; // 801CFFD4
  c->r[4]=c->r[1]+0x00000034u; // 801CFFD8
  c->r[5]=c->r[1]+0x0000001Cu; // 801CFFDC
  c->lr=0x801CFFE4u; f_80064C34(c); // 801CFFE0
  c->r[3]=c->r[31]+0x00002000u; // 801CFFE4
  c->r[4]=c->r[1]+0x00000040u; // 801CFFE8
  c->lr=0x801CFFF0u; f_8003F468(c); // 801CFFEC
  goto L_801D0134; // 801CFFF0
L_801CFFF4:;
  c->r[0]=0u+0x00000028u; // 801CFFF4
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801CFFF8
  c->lr=0x801D0000u; f_800AC668(c); // 801CFFFC
  goto L_801D0134; // 801D0000
L_801D0004:;
  c->r[4]=0u+0x804D0000u; // 801D0004
  {uint32_t ea=c->r[3]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0008
  c->r[4]=c->r[4]+0x00003318u; // 801D000C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0010
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0014
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D0018
  fcmp(c,0,c->f[1],c->f[0]); // 801D001C
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[1]);} // 801D0020
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D0024
  if (!crb(c,2)) { goto L_801D0134; } // 801D0028
  c->r[0]=0u+0x0000000Cu; // 801D002C
  {uint32_t ea=c->r[3]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D0030
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801D0034
  goto L_801D0134; // 801D0038
L_801D003C:;
  c->lr=0x801D0040u; f_801C3C1C(c); // 801D003C
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0040
  fcmp(c,0,c->f[1],c->f[0]); // 801D0044
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D0048
  if (!crb(c,2)) { goto L_801D0134; } // 801D004C
  c->r[3]=c->r[31]+0x000008ECu; // 801D0050
  c->r[4]=c->r[31]+0x00002180u; // 801D0054
  c->lr=0x801D005Cu; f_80075440(c); // 801D0058
  W32(c->r[30]+0x00000034u,c->r[3]); // 801D005C
  c->r[5]=c->r[3]|c->r[3]; // 801D0060
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0064
  c->r[3]=c->r[31]+0x00000C88u; // 801D0068
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D006C
  c->r[4]=c->r[31]+0x000008ECu; // 801D0070
  c->r[6]=0u+0x00000000u; // 801D0074
  c->r[7]=0u+0x00000000u; // 801D0078
  c->lr=0x801D0080u; f_800BB0C8(c); // 801D007C
  c->r[0]=0u+0x00000018u; // 801D0080
  c->r[3]=R32(c->r[31]+0x00000974u); // 801D0084
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801D0088
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D008C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D0090
  c->lr=0x801D0098u; f_80165B9C(c); // 801D0094
  goto L_801D0134; // 801D0098
L_801D009C:;
  c->lr=0x801D00A0u; f_801C3C1C(c); // 801D009C
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D00A0
  fcmp(c,0,c->f[1],c->f[0]); // 801D00A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D00A8
  if (!crb(c,2)) { goto L_801D0134; } // 801D00AC
  c->lr=0x801D00B4u; f_80061A4C(c); // 801D00B0
  c->r[5]=c->r[3]|c->r[3]; // 801D00B4
  c->r[3]=c->r[1]+0x00000010u; // 801D00B8
  c->r[4]=c->r[5]+0x00000390u; // 801D00BC
  c->r[5]=c->r[5]+0x00000384u; // 801D00C0
  c->lr=0x801D00C8u; f_80064C74(c); // 801D00C4
  c->r[3]=c->r[1]+0x00000010u; // 801D00C8
  c->r[4]=c->r[1]+0x00000058u; // 801D00CC
  c->lr=0x801D00D4u; f_80265750(c); // 801D00D0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D00D4
  c->r[4]=c->r[31]+0x000008D0u; // 801D00D8
  c->r[3]=c->r[1]+0x000000A0u; // 801D00DC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D00E0
  c->ctr=c->r[12]; // 801D00E4
  if (true) { c->lr=0x801D00ECu; dispatch(c,c->ctr); } // 801D00E8
  c->r[3]=c->r[1]+0x0000004Cu; // 801D00EC
  c->r[4]=c->r[1]+0x000000A0u; // 801D00F0
  c->lr=0x801D00F8u; f_800BC9F4(c); // 801D00F4
  c->r[3]=c->r[1]+0x00000058u; // 801D00F8
  c->r[4]=c->r[1]+0x0000004Cu; // 801D00FC
  c->lr=0x801D0104u; f_800653BC(c); // 801D0100
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0104
  fcmp(c,0,c->f[1],c->f[0]); // 801D0108
  if (!crb(c,1)) { goto L_801D0134; } // 801D010C
  c->r[3]=c->r[31]|c->r[31]; // 801D0110
  c->r[4]=0u+0x00000000u; // 801D0114
  c->r[5]=0u+0x00000001u; // 801D0118
  c->lr=0x801D0120u; f_80076080(c); // 801D011C
  c->r[12]=R32(c->r[31]+0x00000010u); // 801D0120
  c->r[3]=c->r[31]|c->r[31]; // 801D0124
  c->r[12]=R32(c->r[12]+0x00000030u); // 801D0128
  c->ctr=c->r[12]; // 801D012C
  if (true) { c->lr=0x801D0134u; dispatch(c,c->ctr); } // 801D0130
L_801D0134:;
  c->r[0]=R32(c->r[1]+0x00000194u); // 801D0134
  c->r[31]=R32(c->r[1]+0x0000018Cu); // 801D0138
  c->r[30]=R32(c->r[1]+0x00000188u); // 801D013C
  c->lr=c->r[0]; // 801D0140
  c->r[1]=c->r[1]+0x00000190u; // 801D0144
  return; // 801D0148
}

// fn_801D014C
void f_801D014C(Ctx* __restrict c) {
  trace_call(0x801D014Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D014C
  c->r[0]=c->lr; // 801D0150
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D0154
  c->r[0]=0u+0x00000000u; // 801D0158
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801D015C
  c->r[31]=c->r[4]|c->r[4]; // 801D0160
  W32(c->r[1]+0x00000048u,c->r[30]); // 801D0164
  c->r[30]=c->r[3]|c->r[3]; // 801D0168
  c->r[4]=c->r[30]+0x000008D0u; // 801D016C
  W32(c->r[3]+0x0000219Cu,c->r[0]); // 801D0170
  c->r[3]=c->r[1]+0x00000014u; // 801D0174
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D0178
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D017C
  c->ctr=c->r[12]; // 801D0180
  if (true) { c->lr=0x801D0188u; dispatch(c,c->ctr); } // 801D0184
  c->r[3]=c->r[1]+0x00000008u; // 801D0188
  c->r[4]=c->r[1]+0x00000014u; // 801D018C
  c->lr=0x801D0194u; f_80032FD8(c); // 801D0190
  c->r[3]=c->r[30]+0x000021A0u; // 801D0194
  c->r[4]=c->r[1]+0x00000008u; // 801D0198
  c->lr=0x801D01A0u; f_8003F468(c); // 801D019C
  c->r[3]=R32(c->r[30]+0x00000974u); // 801D01A0
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D01A4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D01A8
  c->lr=0x801D01B0u; f_80165B9C(c); // 801D01AC
  c->r[3]=c->r[30]|c->r[30]; // 801D01B0
  c->r[4]=c->r[31]|c->r[31]; // 801D01B4
  c->lr=0x801D01BCu; f_801C2D04(c); // 801D01B8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D01BC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801D01C0
  c->r[30]=R32(c->r[1]+0x00000048u); // 801D01C4
  c->lr=c->r[0]; // 801D01C8
  c->r[1]=c->r[1]+0x00000050u; // 801D01CC
  return; // 801D01D0
}

// fn_801D01D4
void f_801D01D4(Ctx* __restrict c) {
  trace_call(0x801D01D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D01D4
  c->r[0]=c->lr; // 801D01D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D01DC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D01E0
  c->r[31]=c->r[3]|c->r[3]; // 801D01E4
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D01E8
  cmps(c,0,(int32_t)c->r[0],21); // 801D01EC
  if (crb(c,2)) { goto L_801D01F8; } // 801D01F0
  goto L_801D0268; // 801D01F4
L_801D01F8:;
  c->r[4]=c->r[31]|c->r[31]; // 801D01F8
  c->r[3]=c->r[1]+0x00000008u; // 801D01FC
  c->r[5]=c->r[31]+0x00002090u; // 801D0200
  c->lr=0x801D0208u; f_801D042C(c); // 801D0204
  c->r[3]=c->r[1]+0x00000008u; // 801D0208
  c->lr=0x801D0210u; f_801C4B60(c); // 801D020C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0210
  if (!crb(c,2)) { goto L_801D0230; } // 801D0214
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D0218
  c->r[3]=c->r[31]+0x000008D0u; // 801D021C
  c->r[4]=c->r[1]+0x00000008u; // 801D0220
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D0224
  c->ctr=c->r[12]; // 801D0228
  if (true) { c->lr=0x801D0230u; dispatch(c,c->ctr); } // 801D022C
L_801D0230:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0230
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0234
  fcmp(c,0,c->f[1],c->f[0]); // 801D0238
  if (!crb(c,0)) { goto L_801D0254; } // 801D023C
  c->r[3]=0u+0x804D0000u; // 801D0240
  c->r[3]=c->r[3]+0x00003318u; // 801D0244
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0248
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D024C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D0250
L_801D0254:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0254
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0258
  fcmp(c,0,c->f[1],c->f[0]); // 801D025C
  if (!crb(c,1)) { goto L_801D0268; } // 801D0260
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D0264
L_801D0268:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D0268
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D026C
  c->lr=c->r[0]; // 801D0270
  c->r[1]=c->r[1]+0x00000040u; // 801D0274
  return; // 801D0278
}

// fn_801D027C
void f_801D027C(Ctx* __restrict c) {
  trace_call(0x801D027Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D027C
  c->r[0]=c->lr; // 801D0280
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D0284
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801D0288
  c->r[31]=c->r[4]|c->r[4]; // 801D028C
  W32(c->r[1]+0x00000058u,c->r[30]); // 801D0290
  c->r[30]=c->r[3]|c->r[3]; // 801D0294
  c->r[3]=c->r[3]+0x000008ECu; // 801D0298
  c->r[4]=c->r[30]+0x00001F51u; // 801D029C
  c->lr=0x801D02A4u; f_80075440(c); // 801D02A0
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D02A4
  c->r[5]=c->r[3]|c->r[3]; // 801D02A8
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D02AC
  c->r[3]=c->r[30]+0x00000C88u; // 801D02B0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D02B4
  c->r[4]=c->r[30]+0x000008ECu; // 801D02B8
  c->r[6]=0u+0x00000000u; // 801D02BC
  c->r[7]=0u+0x00000000u; // 801D02C0
  c->lr=0x801D02C8u; f_800BB0C8(c); // 801D02C4
  {uint32_t ea=c->r[30]+0x00001FFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D02C8
  c->r[0]=0u+0x0000001Eu; // 801D02CC
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801D02D0
  c->r[3]=R32(c->r[30]+0x00000974u); // 801D02D4
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D02D8
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D02DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D02E0
  c->lr=0x801D02E8u; f_80165B9C(c); // 801D02E4
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D02E8
  c->r[3]=c->r[1]+0x00000014u; // 801D02EC
  c->f[2]=c->f[1]; // 801D02F0
  c->f[3]=c->f[1]; // 801D02F4
  c->lr=0x801D02FCu; f_800521A0(c); // 801D02F8
  c->r[4]=c->r[3]|c->r[3]; // 801D02FC
  c->r[3]=c->r[31]+0x00000024u; // 801D0300
  c->lr=0x801D0308u; f_8003F468(c); // 801D0304
  {uint32_t ea=c->r[2]+0xFFFFBC30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0308
  c->r[4]=c->r[30]+0x000008D0u; // 801D030C
  c->r[3]=c->r[1]+0x00000020u; // 801D0310
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801D0314
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D0318
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D031C
  c->ctr=c->r[12]; // 801D0320
  if (true) { c->lr=0x801D0328u; dispatch(c,c->ctr); } // 801D0324
  c->r[3]=c->r[1]+0x00000008u; // 801D0328
  c->r[4]=c->r[1]+0x00000020u; // 801D032C
  c->lr=0x801D0334u; f_80032FD8(c); // 801D0330
  c->r[3]=c->r[31]+0x00000038u; // 801D0334
  c->r[4]=c->r[1]+0x00000008u; // 801D0338
  c->lr=0x801D0340u; f_8003F468(c); // 801D033C
  c->r[3]=R32(c->r[30]+0x00000974u); // 801D0340
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D0344
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D0348
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801D034C
  c->r[3]=R32(c->r[30]+0x00000974u); // 801D0350
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D0354
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D0358
  W32(c->r[31]+0x00000018u,c->r[0]); // 801D035C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801D0360
  c->r[30]=R32(c->r[1]+0x00000058u); // 801D0364
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D0368
  c->lr=c->r[0]; // 801D036C
  c->r[1]=c->r[1]+0x00000060u; // 801D0370
  return; // 801D0374
}

// fn_801D0378
void f_801D0378(Ctx* __restrict c) {
  trace_call(0x801D0378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0378
  c->r[0]=c->lr; // 801D037C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0384
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0388
  c->r[30]=c->r[3]|c->r[3]; // 801D038C
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D0390
  cmps(c,0,(int32_t)c->r[0],30); // 801D0394
  if (crb(c,2)) { goto L_801D03A0; } // 801D0398
  goto L_801D0414; // 801D039C
L_801D03A0:;
  c->r[0]=R16(c->r[3]+0x00002196u); // 801D03A0
  c->r[31]=0u+0x00000000u; // 801D03A4
  cmps(c,0,(int32_t)c->r[0],1); // 801D03A8
  if (crb(c,2)) { goto L_801D03DC; } // 801D03AC
  if (!crb(c,0)) { goto L_801D03F4; } // 801D03B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D03B4
  if (!crb(c,0)) { goto L_801D03C0; } // 801D03B8
  goto L_801D03F4; // 801D03BC
L_801D03C0:;
  c->lr=0x801D03C4u; f_801C3C1C(c); // 801D03C0
  {uint32_t ea=c->r[2]+0xFFFFBC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D03C4
  fcmp(c,0,c->f[1],c->f[0]); // 801D03C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D03CC
  if (!crb(c,2)) { goto L_801D03F4; } // 801D03D0
  c->r[31]=0u+0x00000001u; // 801D03D4
  goto L_801D03F4; // 801D03D8
L_801D03DC:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801D03DC
  c->r[4]=0u+0xFFFFFFFFu; // 801D03E0
  c->lr=0x801D03E8u; f_800F3BBC(c); // 801D03E4
  c->r[0]=c->r[3]&0x90000000u; cr0(c,c->r[0]); // 801D03E8
  if (crb(c,2)) { goto L_801D03F4; } // 801D03EC
  c->r[31]=0u+0x00000001u; // 801D03F0
L_801D03F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D03F4
  if (crb(c,2)) { goto L_801D0414; } // 801D03F8
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D03FC
  c->r[0]=0u+0x00000014u; // 801D0400
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801D0404
  c->r[3]=c->r[30]|c->r[30]; // 801D0408
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D040C
  c->lr=0x801D0414u; f_800AC668(c); // 801D0410
L_801D0414:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0414
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0418
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D041C
  c->lr=c->r[0]; // 801D0420
  c->r[1]=c->r[1]+0x00000010u; // 801D0424
  return; // 801D0428
}

// fn_801D042C
void f_801D042C(Ctx* __restrict c) {
  trace_call(0x801D042Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D042C
  c->r[0]=c->lr; // 801D0430
  W32(c->r[1]+0x00000134u,c->r[0]); // 801D0434
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 801D0438
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 801D043C
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 801D0440
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 801D0444
  c->r[0]=0u+0x43300000u; // 801D0448
  cmps(c,0,(int32_t)c->r[5],0); // 801D044C
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801D0450
  c->r[31]=c->r[4]|c->r[4]; // 801D0454
  W32(c->r[1]+0x00000108u,c->r[30]); // 801D0458
  c->r[30]=c->r[3]|c->r[3]; // 801D045C
  W32(c->r[1]+0x000000F0u,c->r[0]); // 801D0460
  W32(c->r[1]+0x000000F8u,c->r[0]); // 801D0464
  if (!crb(c,2)) { goto L_801D0514; } // 801D0468
  {uint32_t ea=c->r[4]+0x000008D0u; c->r[12]=R32(ea); c->r[4]=ea;} // 801D046C
  c->r[3]=c->r[1]+0x000000BCu; // 801D0470
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D0474
  c->ctr=c->r[12]; // 801D0478
  if (true) { c->lr=0x801D0480u; dispatch(c,c->ctr); } // 801D047C
  c->r[3]=c->r[1]+0x000000BCu; // 801D0480
  c->r[4]=c->r[31]+0x000021A0u; // 801D0484
  c->lr=0x801D048Cu; f_80032FF4(c); // 801D0488
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D048C
  c->r[3]=c->r[31]+0x000008D0u; // 801D0490
  c->r[4]=c->r[1]+0x000000BCu; // 801D0494
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D0498
  c->ctr=c->r[12]; // 801D049C
  if (true) { c->lr=0x801D04A4u; dispatch(c,c->ctr); } // 801D04A0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D04A4
  c->r[3]=c->r[1]+0x00000038u; // 801D04A8
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D04AC
  c->f[3]=c->f[1]; // 801D04B0
  c->lr=0x801D04B8u; f_800521A0(c); // 801D04B4
  {uint32_t ea=c->r[2]+0xFFFFBC00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D04B8
  c->r[5]=c->r[3]|c->r[3]; // 801D04BC
  c->r[4]=c->r[31]|c->r[31]; // 801D04C0
  c->r[3]=c->r[1]+0x0000008Cu; // 801D04C4
  c->lr=0x801D04CCu; f_801C3C7C(c); // 801D04C8
  c->r[0]=0u+0x00000006u; // 801D04CC
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 801D04D0
  c->r[4]=c->r[1]+0x00000088u; // 801D04D4
  c->ctr=c->r[0]; // 801D04D8
L_801D04DC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D04DC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D04E0
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D04E4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D04E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D04DC; } // 801D04EC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D04F0
  c->r[3]=c->r[1]+0x0000002Cu; // 801D04F4
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D04F8
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D04FC
  c->lr=0x801D0504u; f_800521A0(c); // 801D0500
  c->r[3]=c->r[31]+0x000021A0u; // 801D0504
  c->r[4]=c->r[1]+0x0000002Cu; // 801D0508
  c->lr=0x801D0510u; f_8003F468(c); // 801D050C
  goto L_801D0548; // 801D0510
L_801D0514:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0514
  c->r[4]=c->r[5]|c->r[5]; // 801D0518
  c->r[3]=c->r[1]+0x0000005Cu; // 801D051C
  c->lr=0x801D0524u; f_801C44B8(c); // 801D0520
  c->r[0]=0u+0x00000006u; // 801D0524
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 801D0528
  c->r[4]=c->r[1]+0x00000058u; // 801D052C
  c->ctr=c->r[0]; // 801D0530
L_801D0534:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D0534
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D0538
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D053C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D0540
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D0534; } // 801D0544
L_801D0548:;
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D0548
  c->r[3]=c->r[31]|c->r[31]; // 801D054C
  c->lr=0x801D0554u; f_801C3C1C(c); // 801D0550
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0554
  fcmp(c,0,c->f[1],c->f[0]); // 801D0558
  if (!crb(c,0)) { goto L_801D0568; } // 801D055C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801D0560
  goto L_801D0584; // 801D0564
L_801D0568:;
  {uint32_t ea=c->r[2]+0xFFFFBC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0568
  fcmp(c,0,c->f[1],c->f[0]); // 801D056C
  if (!crb(c,0)) { goto L_801D0584; } // 801D0570
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0574
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0578
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801D057C
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 801D0580
L_801D0584:;
  c->r[0]=R32(c->r[31]+0x0000219Cu); // 801D0584
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[2]=RF64(ea);} // 801D0588
  c->r[0]=c->r[0]^0x80000000u; // 801D058C
  {uint32_t ea=c->r[2]+0xFFFFBC3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0590
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801D0594
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[1]=RF64(ea);} // 801D0598
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D059C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801D05A0
  c->lr=0x801D05A8u; f_803942AC(c); // 801D05A4
  c->f[31]=c->f[1]; // 801D05A8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D05AC
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D05B0
  c->r[3]=c->r[1]+0x00000014u; // 801D05B4
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D05B8
  c->lr=0x801D05C0u; f_800521A0(c); // 801D05BC
  c->f[1]=c->f[30]; // 801D05C0
  c->r[3]=c->r[1]+0x00000020u; // 801D05C4
  c->r[4]=c->r[1]+0x00000014u; // 801D05C8
  c->lr=0x801D05D0u; f_800FACB4(c); // 801D05CC
  c->f[1]=c->f[31]; // 801D05D0
  c->r[3]=c->r[1]+0x00000050u; // 801D05D4
  c->r[4]=c->r[1]+0x00000020u; // 801D05D8
  c->lr=0x801D05E0u; f_800FACB4(c); // 801D05DC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D05E0
  c->r[3]=c->r[1]+0x00000008u; // 801D05E4
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D05E8
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D05EC
  c->lr=0x801D05F4u; f_800521A0(c); // 801D05F0
  c->r[3]=c->r[1]+0x00000044u; // 801D05F4
  c->r[4]=c->r[1]+0x00000008u; // 801D05F8
  c->r[5]=c->r[1]+0x00000050u; // 801D05FC
  c->lr=0x801D0604u; f_80064C34(c); // 801D0600
  c->r[3]=c->r[30]|c->r[30]; // 801D0604
  c->r[4]=c->r[1]+0x00000044u; // 801D0608
  c->lr=0x801D0610u; f_80032FF4(c); // 801D060C
  c->r[4]=R32(c->r[31]+0x0000219Cu); // 801D0610
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[2]=RF64(ea);} // 801D0614
  c->r[0]=c->r[4]^0x80000000u; // 801D0618
  {uint32_t ea=c->r[2]+0xFFFFBC40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D061C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801D0620
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=RF64(ea);} // 801D0624
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D0628
  fcmp(c,0,c->f[1],c->f[0]); // 801D062C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D0630
  if (!crb(c,2)) { goto L_801D0680; } // 801D0634
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801D0638
  {uint32_t ea=c->r[2]+0xFFFFBC44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D063C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[1]=RF64(ea);} // 801D0640
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D0644
  fcmp(c,0,c->f[1],c->f[0]); // 801D0648
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D064C
  if (!crb(c,2)) { goto L_801D0680; } // 801D0650
  c->r[3]=0u+0x804D0000u; // 801D0654
  {uint32_t ea=c->r[2]+0xFFFFBC48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0658
  c->r[3]=c->r[3]+0x00003318u; // 801D065C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0660
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D0664
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0668
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[0]);} // 801D066C
  c->r[0]=R32(c->r[1]+0x00000104u); // 801D0670
  c->r[0]=c->r[4]+c->r[0]; // 801D0674
  W32(c->r[31]+0x0000219Cu,c->r[0]); // 801D0678
  goto L_801D06AC; // 801D067C
L_801D0680:;
  c->r[4]=0u+0x804D0000u; // 801D0680
  {uint32_t ea=c->r[2]+0xFFFFBC4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0684
  c->r[4]=c->r[4]+0x00003318u; // 801D0688
  c->r[3]=R32(c->r[31]+0x0000219Cu); // 801D068C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0690
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D0694
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0698
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[0]);} // 801D069C
  c->r[0]=R32(c->r[1]+0x00000104u); // 801D06A0
  c->r[0]=c->r[3]+c->r[0]; // 801D06A4
  W32(c->r[31]+0x0000219Cu,c->r[0]); // 801D06A8
L_801D06AC:;
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[2]=RF64(ea);} // 801D06AC
  {uint32_t ea=c->r[2]+0xFFFFBC50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D06B0
  goto L_801D06E0; // 801D06B4
L_801D06B8:;
  c->r[0]=R32(c->r[31]+0x0000219Cu); // 801D06B8
  c->r[0]=c->r[0]^0x80000000u; // 801D06BC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801D06C0
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[0]=RF64(ea);} // 801D06C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D06C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D06CC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D06D0
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[0]);} // 801D06D4
  c->r[0]=R32(c->r[1]+0x00000104u); // 801D06D8
  W32(c->r[31]+0x0000219Cu,c->r[0]); // 801D06DC
L_801D06E0:;
  c->r[0]=R32(c->r[31]+0x0000219Cu); // 801D06E0
  cmps(c,0,(int32_t)c->r[0],360); // 801D06E4
  if (!crb(c,0)) { IRQCHK(c); goto L_801D06B8; } // 801D06E8
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 801D06EC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 801D06F0
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 801D06F4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 801D06F8
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801D06FC
  c->r[0]=R32(c->r[1]+0x00000134u); // 801D0700
  c->r[30]=R32(c->r[1]+0x00000108u); // 801D0704
  c->lr=c->r[0]; // 801D0708
  c->r[1]=c->r[1]+0x00000130u; // 801D070C
  return; // 801D0710
}

// fn_801D0714
void f_801D0714(Ctx* __restrict c) {
  trace_call(0x801D0714u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0714
  c->r[0]=c->lr; // 801D0718
  W32(c->r[1]+0x00000104u,c->r[0]); // 801D071C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 801D0720
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 801D0724
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 801D0728
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 801D072C
  c->r[0]=0u+0x43300000u; // 801D0730
  W32(c->r[1]+0x000000DCu,c->r[31]); // 801D0734
  c->r[31]=c->r[4]|c->r[4]; // 801D0738
  W32(c->r[1]+0x000000D8u,c->r[30]); // 801D073C
  c->r[30]=c->r[3]|c->r[3]; // 801D0740
  c->r[12]=R32(c->r[4]+0x000008D0u); // 801D0744
  W32(c->r[1]+0x000000C0u,c->r[0]); // 801D0748
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D074C
  W32(c->r[1]+0x000000C8u,c->r[0]); // 801D0750
  c->ctr=c->r[12]; // 801D0754
  c->r[4]=c->r[4]+0x000008D0u; // 801D0758
  if (true) { c->lr=0x801D0760u; dispatch(c,c->ctr); } // 801D075C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0760
  c->r[3]=c->r[1]+0x00000084u; // 801D0764
  {uint32_t ea=c->r[30]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0768
  {uint32_t ea=c->r[30]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D076C
  c->lr=0x801D0774u; f_800521A0(c); // 801D0770
  c->lr=0x801D0778u; f_80061A4C(c); // 801D0774
  c->r[4]=c->r[3]|c->r[3]; // 801D0778
  c->r[3]=c->r[1]+0x00000078u; // 801D077C
  c->r[4]=c->r[4]+0x00000384u; // 801D0780
  c->r[5]=c->r[31]+0x000021A0u; // 801D0784
  c->lr=0x801D078Cu; f_80064C74(c); // 801D0788
  c->r[3]=c->r[1]+0x00000078u; // 801D078C
  c->lr=0x801D0794u; f_80065368(c); // 801D0790
  cmps(c,0,(int32_t)c->r[3],0); // 801D0794
  if (!crb(c,2)) { goto L_801D07A8; } // 801D0798
  c->r[3]=c->r[1]+0x00000078u; // 801D079C
  c->r[4]=c->r[3]|c->r[3]; // 801D07A0
  c->lr=0x801D07A8u; f_80265750(c); // 801D07A4
L_801D07A8:;
  c->r[3]=c->r[1]+0x00000084u; // 801D07A8
  c->r[4]=c->r[1]+0x00000078u; // 801D07AC
  c->r[5]=c->r[1]+0x0000006Cu; // 801D07B0
  c->lr=0x801D07B8u; f_80265810(c); // 801D07B4
  c->r[3]=c->r[1]+0x0000006Cu; // 801D07B8
  c->lr=0x801D07C0u; f_80065368(c); // 801D07BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D07C0
  if (!crb(c,2)) { goto L_801D07D4; } // 801D07C4
  c->r[3]=c->r[1]+0x0000006Cu; // 801D07C8
  c->r[4]=c->r[3]|c->r[3]; // 801D07CC
  c->lr=0x801D07D4u; f_80265750(c); // 801D07D0
L_801D07D4:;
  {uint32_t ea=c->r[2]+0xFFFFBC60u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D07D4
  c->r[3]=c->r[1]+0x00000090u; // 801D07D8
  {uint32_t ea=c->r[31]+0x000021DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D07DC
  c->r[4]=c->r[1]+0x0000006Cu; // 801D07E0
  {uint32_t ea=c->r[2]+0xFFFFBC64u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D07E4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801D07E8
  {uint32_t ea=c->r[2]+0xFFFFBC68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D07EC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801D07F0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801D07F4
  c->lr=0x801D07FCu; f_80394980(c); // 801D07F8
  c->r[3]=c->r[1]+0x00000084u; // 801D07FC
  c->r[4]=c->r[1]+0x00000090u; // 801D0800
  c->r[5]=c->r[3]|c->r[3]; // 801D0804
  c->lr=0x801D080Cu; f_80394B04(c); // 801D0808
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D080C
  c->r[3]=c->r[31]|c->r[31]; // 801D0810
  c->r[4]=c->r[1]+0x00000008u; // 801D0814
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801D0818
  c->lr=0x801D0820u; f_801C4438(c); // 801D081C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0820
  c->r[3]=c->r[1]+0x0000003Cu; // 801D0824
  c->r[4]=c->r[1]+0x00000084u; // 801D0828
  c->lr=0x801D0830u; f_800FACB4(c); // 801D082C
  c->r[3]=c->r[1]+0x00000060u; // 801D0830
  c->r[4]=c->r[31]+0x000021A0u; // 801D0834
  c->r[5]=c->r[1]+0x0000003Cu; // 801D0838
  c->lr=0x801D0840u; f_80064C34(c); // 801D083C
  c->r[3]=c->r[30]|c->r[30]; // 801D0840
  c->lr=0x801D0848u; f_80264680(c); // 801D0844
  c->r[3]=c->r[30]|c->r[30]; // 801D0848
  c->r[4]=c->r[1]+0x00000084u; // 801D084C
  c->lr=0x801D0854u; f_8007513C(c); // 801D0850
  c->r[3]=c->r[30]|c->r[30]; // 801D0854
  c->r[4]=c->r[1]+0x00000060u; // 801D0858
  c->lr=0x801D0860u; f_80032FF4(c); // 801D085C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D0860
  c->r[3]=c->r[31]+0x000008D0u; // 801D0864
  c->r[4]=c->r[30]|c->r[30]; // 801D0868
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D086C
  c->ctr=c->r[12]; // 801D0870
  if (true) { c->lr=0x801D0878u; dispatch(c,c->ctr); } // 801D0874
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0878
  c->r[3]=c->r[1]+0x00000030u; // 801D087C
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0880
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D0884
  c->lr=0x801D088Cu; f_800521A0(c); // 801D0888
  c->r[3]=c->r[31]+0x000021A0u; // 801D088C
  c->r[4]=c->r[1]+0x00000030u; // 801D0890
  c->lr=0x801D0898u; f_8003F468(c); // 801D0894
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D0898
  c->r[3]=c->r[31]|c->r[31]; // 801D089C
  c->lr=0x801D08A4u; f_801C3C1C(c); // 801D08A0
  {uint32_t ea=c->r[2]+0xFFFFBC18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D08A4
  fcmp(c,0,c->f[1],c->f[0]); // 801D08A8
  if (!crb(c,0)) { goto L_801D08B8; } // 801D08AC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801D08B0
  goto L_801D08D4; // 801D08B4
L_801D08B8:;
  {uint32_t ea=c->r[2]+0xFFFFBC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D08B8
  fcmp(c,0,c->f[1],c->f[0]); // 801D08BC
  if (!crb(c,0)) { goto L_801D08D4; } // 801D08C0
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D08C4
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D08C8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801D08CC
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 801D08D0
L_801D08D4:;
  c->r[0]=R32(c->r[31]+0x0000219Cu); // 801D08D4
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[2]=RF64(ea);} // 801D08D8
  c->r[0]=c->r[0]^0x80000000u; // 801D08DC
  {uint32_t ea=c->r[2]+0xFFFFBC3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D08E0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801D08E4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=RF64(ea);} // 801D08E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D08EC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801D08F0
  c->lr=0x801D08F8u; f_803942AC(c); // 801D08F4
  c->f[31]=c->f[1]; // 801D08F8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D08FC
  {uint32_t ea=c->r[30]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0900
  c->r[3]=c->r[1]+0x00000018u; // 801D0904
  {uint32_t ea=c->r[30]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D0908
  c->lr=0x801D0910u; f_800521A0(c); // 801D090C
  c->f[1]=c->f[30]; // 801D0910
  c->r[3]=c->r[1]+0x00000024u; // 801D0914
  c->r[4]=c->r[1]+0x00000018u; // 801D0918
  c->lr=0x801D0920u; f_800FACB4(c); // 801D091C
  c->f[1]=c->f[31]; // 801D0920
  c->r[3]=c->r[1]+0x00000054u; // 801D0924
  c->r[4]=c->r[1]+0x00000024u; // 801D0928
  c->lr=0x801D0930u; f_800FACB4(c); // 801D092C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0930
  c->r[3]=c->r[1]+0x0000000Cu; // 801D0934
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0938
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D093C
  c->lr=0x801D0944u; f_800521A0(c); // 801D0940
  c->r[3]=c->r[1]+0x00000048u; // 801D0944
  c->r[4]=c->r[1]+0x0000000Cu; // 801D0948
  c->r[5]=c->r[1]+0x00000054u; // 801D094C
  c->lr=0x801D0954u; f_80064C34(c); // 801D0950
  c->r[3]=c->r[30]|c->r[30]; // 801D0954
  c->r[4]=c->r[1]+0x00000048u; // 801D0958
  c->lr=0x801D0960u; f_80032FF4(c); // 801D095C
  c->r[4]=R32(c->r[31]+0x0000219Cu); // 801D0960
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[2]=RF64(ea);} // 801D0964
  c->r[0]=c->r[4]^0x80000000u; // 801D0968
  {uint32_t ea=c->r[2]+0xFFFFBC40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D096C
  W32(c->r[1]+0x000000CCu,c->r[0]); // 801D0970
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=RF64(ea);} // 801D0974
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D0978
  fcmp(c,0,c->f[1],c->f[0]); // 801D097C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D0980
  if (!crb(c,2)) { goto L_801D09D0; } // 801D0984
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801D0988
  {uint32_t ea=c->r[2]+0xFFFFBC44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D098C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=RF64(ea);} // 801D0990
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D0994
  fcmp(c,0,c->f[1],c->f[0]); // 801D0998
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D099C
  if (!crb(c,2)) { goto L_801D09D0; } // 801D09A0
  c->r[3]=0u+0x804D0000u; // 801D09A4
  {uint32_t ea=c->r[2]+0xFFFFBC48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D09A8
  c->r[3]=c->r[3]+0x00003318u; // 801D09AC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D09B0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D09B4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D09B8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[0]);} // 801D09BC
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801D09C0
  c->r[0]=c->r[4]+c->r[0]; // 801D09C4
  W32(c->r[31]+0x0000219Cu,c->r[0]); // 801D09C8
  goto L_801D09FC; // 801D09CC
L_801D09D0:;
  c->r[4]=0u+0x804D0000u; // 801D09D0
  {uint32_t ea=c->r[2]+0xFFFFBC4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D09D4
  c->r[4]=c->r[4]+0x00003318u; // 801D09D8
  c->r[3]=R32(c->r[31]+0x0000219Cu); // 801D09DC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D09E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D09E4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D09E8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[0]);} // 801D09EC
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801D09F0
  c->r[0]=c->r[3]+c->r[0]; // 801D09F4
  W32(c->r[31]+0x0000219Cu,c->r[0]); // 801D09F8
L_801D09FC:;
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[2]=RF64(ea);} // 801D09FC
  {uint32_t ea=c->r[2]+0xFFFFBC50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0A00
  goto L_801D0A30; // 801D0A04
L_801D0A08:;
  c->r[0]=R32(c->r[31]+0x0000219Cu); // 801D0A08
  c->r[0]=c->r[0]^0x80000000u; // 801D0A0C
  W32(c->r[1]+0x000000CCu,c->r[0]); // 801D0A10
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 801D0A14
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D0A18
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D0A1C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0A20
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[0]);} // 801D0A24
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801D0A28
  W32(c->r[31]+0x0000219Cu,c->r[0]); // 801D0A2C
L_801D0A30:;
  c->r[0]=R32(c->r[31]+0x0000219Cu); // 801D0A30
  cmps(c,0,(int32_t)c->r[0],360); // 801D0A34
  if (!crb(c,0)) { IRQCHK(c); goto L_801D0A08; } // 801D0A38
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 801D0A3C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 801D0A40
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 801D0A44
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 801D0A48
  c->r[31]=R32(c->r[1]+0x000000DCu); // 801D0A4C
  c->r[0]=R32(c->r[1]+0x00000104u); // 801D0A50
  c->r[30]=R32(c->r[1]+0x000000D8u); // 801D0A54
  c->lr=c->r[0]; // 801D0A58
  c->r[1]=c->r[1]+0x00000100u; // 801D0A5C
  return; // 801D0A60
}

// fn_801D0A64
void f_801D0A64(Ctx* __restrict c) {
  trace_call(0x801D0A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0A64
  c->r[0]=c->lr; // 801D0A68
  c->r[4]=0u+0x00000000u; // 801D0A6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0A70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0A74
  c->r[31]=c->r[3]|c->r[3]; // 801D0A78
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D0A7C
  cmps(c,0,(int32_t)c->r[0],30); // 801D0A80
  if (crb(c,2)) { goto L_801D0ABC; } // 801D0A84
  if (!crb(c,0)) { goto L_801D0AA4; } // 801D0A88
  cmps(c,0,(int32_t)c->r[0],20); // 801D0A8C
  if (crb(c,2)) { goto L_801D0AC4; } // 801D0A90
  if (!crb(c,0)) { goto L_801D0AD8; } // 801D0A94
  cmps(c,0,(int32_t)c->r[0],10); // 801D0A98
  if (crb(c,2)) { goto L_801D0ABC; } // 801D0A9C
  goto L_801D0AD8; // 801D0AA0
L_801D0AA4:;
  cmps(c,0,(int32_t)c->r[0],50); // 801D0AA4
  if (crb(c,2)) { goto L_801D0AD8; } // 801D0AA8
  if (!crb(c,0)) { goto L_801D0AD8; } // 801D0AAC
  cmps(c,0,(int32_t)c->r[0],40); // 801D0AB0
  if (crb(c,2)) { goto L_801D0ABC; } // 801D0AB4
  goto L_801D0AD8; // 801D0AB8
L_801D0ABC:;
  c->r[4]=0u+0x00000001u; // 801D0ABC
  goto L_801D0AD8; // 801D0AC0
L_801D0AC4:;
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D0AC4
  cmps(c,0,(int32_t)c->r[0],21); // 801D0AC8
  if (crb(c,2)) { goto L_801D0AD4; } // 801D0ACC
  goto L_801D0AD8; // 801D0AD0
L_801D0AD4:;
  c->r[4]=0u+0x00000001u; // 801D0AD4
L_801D0AD8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D0AD8
  if (crb(c,2)) { goto L_801D0B08; } // 801D0ADC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0AE0
  c->r[3]=c->r[1]+0x00000008u; // 801D0AE4
  c->f[2]=c->f[1]; // 801D0AE8
  c->f[3]=c->f[1]; // 801D0AEC
  c->lr=0x801D0AF4u; f_800521A0(c); // 801D0AF0
  c->r[5]=c->r[3]|c->r[3]; // 801D0AF4
  c->r[3]=c->r[31]+0x000008D0u; // 801D0AF8
  c->r[4]=0u+0x00000001u; // 801D0AFC
  c->lr=0x801D0B04u; f_80032208(c); // 801D0B00
  goto L_801D0B10; // 801D0B04
L_801D0B08:;
  c->r[3]=c->r[3]+0x000008D0u; // 801D0B08
  c->lr=0x801D0B10u; f_800322B0(c); // 801D0B0C
L_801D0B10:;
  c->r[3]=c->r[31]|c->r[31]; // 801D0B10
  c->lr=0x801D0B18u; f_801C248C(c); // 801D0B14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0B18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0B1C
  c->lr=c->r[0]; // 801D0B20
  c->r[1]=c->r[1]+0x00000020u; // 801D0B24
  return; // 801D0B28
}

// fn_801D0B2C
void f_801D0B2C(Ctx* __restrict c) {
  trace_call(0x801D0B2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0B2C
  c->r[0]=c->lr; // 801D0B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0B34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0B38
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0B3C
  c->r[30]=c->r[3]|c->r[3]; // 801D0B40
  c->lr=0x801D0B48u; f_801CF71C(c); // 801D0B44
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0B48
  c->r[0]=0u+0x00000000u; // 801D0B4C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0B50
  c->r[31]=0u+0x803E0000u; // 801D0B54
  c->r[31]=c->r[31]+0x00000EE0u; // 801D0B58
  {uint32_t ea=c->r[30]+0x00001FE0u; WF32(ea,c->f[1]);} // 801D0B5C
  c->r[3]=c->r[30]+0x00001F3Du; // 801D0B60
  {uint32_t ea=c->r[30]+0x00001FE4u; WF32(ea,c->f[1]);} // 801D0B64
  c->r[4]=c->r[31]+0x0000003Cu; // 801D0B68
  {uint32_t ea=c->r[30]+0x00001FB8u; WF32(ea,c->f[0]);} // 801D0B6C
  W8(c->r[30]+0x00002278u,c->r[0]); // 801D0B70
  c->lr=0x801D0B78u; f_802933D8(c); // 801D0B74
  c->r[3]=c->r[30]+0x00001F51u; // 801D0B78
  c->r[4]=c->r[31]+0x0000003Cu; // 801D0B7C
  c->lr=0x801D0B84u; f_802933D8(c); // 801D0B80
  c->r[3]=c->r[30]+0x000021E8u; // 801D0B84
  c->r[4]=c->r[31]+0x00000044u; // 801D0B88
  c->lr=0x801D0B90u; f_802933D8(c); // 801D0B8C
  c->r[3]=c->r[30]+0x000021FCu; // 801D0B90
  c->r[4]=c->r[31]+0x0000004Eu; // 801D0B94
  c->lr=0x801D0B9Cu; f_802933D8(c); // 801D0B98
  c->r[3]=c->r[30]+0x00002210u; // 801D0B9C
  c->r[4]=c->r[31]+0x0000005Au; // 801D0BA0
  c->lr=0x801D0BA8u; f_802933D8(c); // 801D0BA4
  c->r[3]=c->r[30]+0x00002224u; // 801D0BA8
  c->r[4]=c->r[31]+0x00000065u; // 801D0BAC
  c->lr=0x801D0BB4u; f_802933D8(c); // 801D0BB0
  c->r[3]=c->r[30]+0x00002238u; // 801D0BB4
  c->r[4]=c->r[31]+0x00000068u; // 801D0BB8
  c->lr=0x801D0BC0u; f_802933D8(c); // 801D0BBC
  c->r[3]=c->r[30]+0x00001F65u; // 801D0BC0
  c->r[4]=c->r[31]+0x0000006Fu; // 801D0BC4
  c->lr=0x801D0BCCu; f_802933D8(c); // 801D0BC8
  c->r[3]=c->r[30]+0x00001F79u; // 801D0BCC
  c->r[4]=c->r[31]+0x00000076u; // 801D0BD0
  c->lr=0x801D0BD8u; f_802933D8(c); // 801D0BD4
  c->r[3]=c->r[30]+0x00001F8Du; // 801D0BD8
  c->r[4]=c->r[31]+0x0000007Fu; // 801D0BDC
  c->lr=0x801D0BE4u; f_802933D8(c); // 801D0BE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0BE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0BEC
  c->lr=c->r[0]; // 801D0BF0
  c->r[1]=c->r[1]+0x00000010u; // 801D0BF4
  return; // 801D0BF8
}

// fn_801D0BFC
void f_801D0BFC(Ctx* __restrict c) {
  trace_call(0x801D0BFCu);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D0BFC
  cmpu(c,0,c->r[0],0x0000001Eu); // 801D0C00
  if (!crb(c,2)) return; // 801D0C04
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D0C08
  cmpu(c,0,c->r[0],0x0000001Eu); // 801D0C0C
  if (!crb(c,2)) return; // 801D0C10
  c->r[0]=0u+0x00000001u; // 801D0C14
  W8(c->r[3]+0x00002278u,c->r[0]); // 801D0C18
  return; // 801D0C1C
}

// fn_801D0C20
void f_801D0C20(Ctx* __restrict c) {
  trace_call(0x801D0C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0C20
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D0C24
  cmpu(c,0,c->r[0],0x0000001Eu); // 801D0C28
  if (!crb(c,2)) { goto L_801D0C64; } // 801D0C2C
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D0C30
  cmpu(c,0,c->r[0],0x0000001Eu); // 801D0C34
  if (!crb(c,2)) { goto L_801D0C64; } // 801D0C38
  c->r[4]=c->r[4]^0x80000000u; // 801D0C3C
  c->r[0]=0u+0x43300000u; // 801D0C40
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D0C44
  c->r[4]=0u+0x0000000Au; // 801D0C48
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[1]=RF64(ea);} // 801D0C4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D0C50
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D0C54
  W16(c->r[3]+0x00001FECu,c->r[4]); // 801D0C58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D0C5C
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[0]);} // 801D0C60
L_801D0C64:;
  c->r[1]=c->r[1]+0x00000010u; // 801D0C64
  return; // 801D0C68
}

// fn_801D0C6C
void f_801D0C6C(Ctx* __restrict c) {
  trace_call(0x801D0C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0C6C
  c->r[0]=c->lr; // 801D0C70
  W32(c->r[1]+0x00000224u,c->r[0]); // 801D0C74
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[31]);} // 801D0C78
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,31,ea,0,0);} // 801D0C7C
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[30]);} // 801D0C80
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,30,ea,0,0);} // 801D0C84
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[29]);} // 801D0C88
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,29,ea,0,0);} // 801D0C8C
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[28]);} // 801D0C90
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,28,ea,0,0);} // 801D0C94
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[27]);} // 801D0C98
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,27,ea,0,0);} // 801D0C9C
  c->r[11]=c->r[1]+0x000001D0u; // 801D0CA0
  c->lr=0x801D0CA8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0CA4
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D0CA8
  c->r[7]=0u+0x43300000u; // 801D0CAC
  W32(c->r[1]+0x00000188u,c->r[7]); // 801D0CB0
  c->r[29]=c->r[3]|c->r[3]; // 801D0CB4
  cmpu(c,0,c->r[0],0x0000001Eu); // 801D0CB8
  c->r[30]=c->r[4]|c->r[4]; // 801D0CBC
  W32(c->r[1]+0x00000190u,c->r[7]); // 801D0CC0
  c->r[31]=c->r[6]|c->r[6]; // 801D0CC4
  if (!crb(c,2)) { goto L_801D11B8; } // 801D0CC8
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D0CCC
  cmpu(c,0,c->r[0],0x0000001Eu); // 801D0CD0
  if (crb(c,2)) { goto L_801D0CDC; } // 801D0CD4
  goto L_801D11B8; // 801D0CD8
L_801D0CDC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D0CDC
  if (crb(c,2)) { goto L_801D11B8; } // 801D0CE0
  c->r[4]=c->r[5]-c->r[4]; // 801D0CE4
  c->r[0]=0u+0x00000001u; // 801D0CE8
  c->r[4]=c->r[4]+0x00000001u; // 801D0CEC
  W8(c->r[3]+0x00002278u,c->r[0]); // 801D0CF0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 801D0CF4
  if (!crb(c,1)) { goto L_801D0D00; } // 801D0CF8
  c->r[31]=c->r[4]|c->r[4]; // 801D0CFC
L_801D0D00:;
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[28]=RF64(ea);} // 801D0D00
  c->r[26]=c->r[1]+0x00000104u; // 801D0D04
  {uint32_t ea=c->r[2]+0xFFFFBC6Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 801D0D08
  c->r[25]=c->r[4]^0x80000000u; // 801D0D0C
  c->r[24]=0u+0x00000000u; // 801D0D10
  c->r[28]=0u+0x00000000u; // 801D0D14
  goto L_801D0DD8; // 801D0D18
L_801D0D1C:;
  c->lr=0x801D0D20u; f_80291D94(c); // 801D0D1C
  c->r[0]=c->r[3]^0x80000000u; // 801D0D20
  W32(c->r[1]+0x00000194u,c->r[25]); // 801D0D24
  W32(c->r[1]+0x0000018Cu,c->r[0]); // 801D0D28
  {uint32_t ea=c->r[1]+0x00000190u; c->f[0]=RF64(ea);} // 801D0D2C
  {uint32_t ea=c->r[1]+0x00000188u; c->f[1]=RF64(ea);} // 801D0D30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 801D0D34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 801D0D38
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[27]); // 801D0D3C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D0D40
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0D44
  {uint32_t ea=c->r[1]+0x00000198u; WF64(ea,c->f[0]);} // 801D0D48
  c->r[0]=R32(c->r[1]+0x0000019Cu); // 801D0D4C
  c->r[0]=c->r[30]+c->r[0]; // 801D0D50
  W32(c->r[26]+c->r[28],c->r[0]); // 801D0D54
L_801D0D58:;
  c->r[4]=0u+0x00000001u; // 801D0D58
  c->r[23]=0u+0x00000000u; // 801D0D5C
  c->r[27]=0u+0x00000000u; // 801D0D60
  goto L_801D0DC0; // 801D0D64
L_801D0D68:;
  c->r[3]=R32(c->r[26]+c->r[28]); // 801D0D68
  c->r[0]=R32(c->r[26]+c->r[27]); // 801D0D6C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D0D70
  if (!crb(c,2)) { goto L_801D0DB8; } // 801D0D74
  c->lr=0x801D0D7Cu; f_80291D94(c); // 801D0D78
  c->r[0]=c->r[3]^0x80000000u; // 801D0D7C
  W32(c->r[1]+0x00000194u,c->r[25]); // 801D0D80
  c->r[4]=0u+0x00000000u; // 801D0D84
  W32(c->r[1]+0x0000018Cu,c->r[0]); // 801D0D88
  {uint32_t ea=c->r[1]+0x00000190u; c->f[0]=RF64(ea);} // 801D0D8C
  {uint32_t ea=c->r[1]+0x00000188u; c->f[1]=RF64(ea);} // 801D0D90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 801D0D94
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 801D0D98
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[27]); // 801D0D9C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D0DA0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0DA4
  {uint32_t ea=c->r[1]+0x00000198u; WF64(ea,c->f[0]);} // 801D0DA8
  c->r[0]=R32(c->r[1]+0x0000019Cu); // 801D0DAC
  c->r[0]=c->r[30]+c->r[0]; // 801D0DB0
  W32(c->r[26]+c->r[28],c->r[0]); // 801D0DB4
L_801D0DB8:;
  c->r[23]=c->r[23]+0x00000001u; // 801D0DB8
  c->r[27]=c->r[27]+0x00000004u; // 801D0DBC
L_801D0DC0:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[24]); // 801D0DC0
  if (crb(c,0)) { IRQCHK(c); goto L_801D0D68; } // 801D0DC4
  cmps(c,0,(int32_t)c->r[4],0); // 801D0DC8
  if (crb(c,2)) { IRQCHK(c); goto L_801D0D58; } // 801D0DCC
  c->r[24]=c->r[24]+0x00000001u; // 801D0DD0
  c->r[28]=c->r[28]+0x00000004u; // 801D0DD4
L_801D0DD8:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[31]); // 801D0DD8
  if (crb(c,0)) { IRQCHK(c); goto L_801D0D1C; } // 801D0DDC
  c->r[26]=c->r[1]+0x00000144u; // 801D0DE0
  c->r[27]=c->r[1]+0x00000104u; // 801D0DE4
  c->r[23]=0u+0x00000000u; // 801D0DE8
  goto L_801D0E5C; // 801D0DEC
L_801D0DF0:;
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 801D0DF0
  c->r[25]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801D0DF4
  c->r[4]=R32(c->r[27]+c->r[25]); // 801D0DF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D0DFC
  c->r[12]=R32(c->r[12]+0x00000020u); // 801D0E00
  c->ctr=c->r[12]; // 801D0E04
  if (true) { c->lr=0x801D0E0Cu; dispatch(c,c->ctr); } // 801D0E08
  cmps(c,0,(int32_t)c->r[3],0); // 801D0E0C
  W32(c->r[26]+c->r[25],c->r[3]); // 801D0E10
  if (!crb(c,2)) { goto L_801D0E58; } // 801D0E14
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 801D0E18
  c->r[5]=c->r[23]|c->r[23]; // 801D0E1C
  c->r[0]=c->r[4]-c->r[23]; // 801D0E20
  c->r[3]=c->r[25]|c->r[25]; // 801D0E24
  c->ctr=c->r[0]; // 801D0E28
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[4]); // 801D0E2C
  if (!crb(c,0)) { goto L_801D0E50; } // 801D0E30
L_801D0E34:;
  c->r[4]=c->r[1]+0x00000104u; // 801D0E34
  c->r[5]=c->r[5]+0x00000001u; // 801D0E38
  c->r[4]=c->r[4]+c->r[3]; // 801D0E3C
  c->r[3]=c->r[3]+0x00000004u; // 801D0E40
  c->r[0]=R32(c->r[4]+0x00000004u); // 801D0E44
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D0E48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D0E34; } // 801D0E4C
L_801D0E50:;
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 801D0E50
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801D0E54
L_801D0E58:;
  c->r[23]=c->r[23]+0x00000001u; // 801D0E58
L_801D0E5C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[23]); // 801D0E5C
  if (crb(c,1)) { IRQCHK(c); goto L_801D0DF0; } // 801D0E60
  cmps(c,1,(int32_t)c->r[31],0); // 801D0E64
  if (crb(c,6)) { goto L_801D11B8; } // 801D0E68
  c->r[3]=R32(c->r[1]+0x00000144u); // 801D0E6C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0E70
  {uint32_t ea=c->r[3]+0x000021ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0E74
  fcmp(c,0,c->f[1],c->f[0]); // 801D0E78
  if (!crb(c,0)) { goto L_801D0F38; } // 801D0E7C
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[29]=RF64(ea);} // 801D0E80
  c->r[28]=c->r[31]^0x80000000u; // 801D0E84
  {uint32_t ea=c->r[2]+0xFFFFBC64u; c->f[28]=c->ps1[28]=RF32(ea);} // 801D0E88
  c->r[27]=c->r[1]+0x00000144u; // 801D0E8C
  {uint32_t ea=c->r[2]+0xFFFFBC6Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 801D0E90
  c->r[23]=0u+0x00000000u; // 801D0E94
  c->r[30]=0u+0x00000000u; // 801D0E98
  goto L_801D0F2C; // 801D0E9C
L_801D0EA0:;
  W32(c->r[1]+0x0000018Cu,c->r[28]); // 801D0EA0
  {uint32_t ea=c->r[1]+0x00000188u; c->f[0]=RF64(ea);} // 801D0EA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801D0EA8
  c->f[0]=c->ps1[0]=S(c->f[28]/c->f[0]); // 801D0EAC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0EB0
  {uint32_t ea=c->r[1]+0x00000198u; WF64(ea,c->f[0]);} // 801D0EB4
  c->r[24]=R32(c->r[1]+0x0000019Cu); // 801D0EB8
  c->lr=0x801D0EC0u; f_80291D94(c); // 801D0EBC
  c->r[0]=c->r[3]^0x80000000u; // 801D0EC0
  c->r[3]=c->r[24]^0x80000000u; // 801D0EC4
  W32(c->r[1]+0x00000194u,c->r[0]); // 801D0EC8
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[23]); // 801D0ECC
  {uint32_t ea=c->r[1]+0x00000190u; c->f[0]=RF64(ea);} // 801D0ED0
  W32(c->r[1]+0x0000018Cu,c->r[3]); // 801D0ED4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[29]); // 801D0ED8
  {uint32_t ea=c->r[1]+0x00000188u; c->f[0]=RF64(ea);} // 801D0EDC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[27]); // 801D0EE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801D0EE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D0EE8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D0EEC
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[0]);} // 801D0EF0
  c->r[3]=R32(c->r[1]+0x000001A4u); // 801D0EF4
  c->r[3]=c->r[0]+c->r[3]; // 801D0EF8
  c->r[3]=c->r[3]+0xFFFFFFD3u; // 801D0EFC
  cmps(c,0,(int32_t)c->r[3],45); // 801D0F00
  if (!crb(c,1)) { goto L_801D0F0C; } // 801D0F04
  c->r[3]=c->r[3]+0x0000005Au; // 801D0F08
L_801D0F0C:;
  c->r[0]=c->r[3]^0x80000000u; // 801D0F0C
  c->r[3]=R32(c->r[27]+c->r[30]); // 801D0F10
  W32(c->r[1]+0x00000194u,c->r[0]); // 801D0F14
  c->r[23]=c->r[23]+0x00000001u; // 801D0F18
  c->r[30]=c->r[30]+0x00000004u; // 801D0F1C
  {uint32_t ea=c->r[1]+0x00000190u; c->f[0]=RF64(ea);} // 801D0F20
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801D0F24
  {uint32_t ea=c->r[3]+0x000021ACu; WF32(ea,c->f[0]);} // 801D0F28
L_801D0F2C:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[31]); // 801D0F2C
  if (crb(c,0)) { IRQCHK(c); goto L_801D0EA0; } // 801D0F30
  goto L_801D0F7C; // 801D0F34
L_801D0F38:;
  c->r[5]=c->r[1]+0x00000144u; // 801D0F38
  {uint32_t ea=c->r[2]+0xFFFFBC40u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0F3C
  {uint32_t ea=c->r[2]+0xFFFFBC70u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D0F40
  c->r[3]=0u+0x00000000u; // 801D0F44
  c->ctr=c->r[31]; // 801D0F48
  if (!crb(c,5)) { goto L_801D0F7C; } // 801D0F4C
L_801D0F50:;
  c->r[4]=R32(c->r[5]+c->r[3]); // 801D0F50
  {uint32_t ea=c->r[4]+0x000021ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0F54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801D0F58
  fcmp(c,0,c->f[0],c->f[2]); // 801D0F5C
  {uint32_t ea=c->r[4]+0x000021ACu; WF32(ea,c->f[0]);} // 801D0F60
  if (!crb(c,1)) { goto L_801D0F74; } // 801D0F64
  {uint32_t ea=c->r[4]+0x000021ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0F68
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801D0F6C
  {uint32_t ea=c->r[4]+0x000021ACu; WF32(ea,c->f[0]);} // 801D0F70
L_801D0F74:;
  c->r[3]=c->r[3]+0x00000004u; // 801D0F74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D0F50; } // 801D0F78
L_801D0F7C:;
  {uint32_t ea=c->r[2]+0xFFFFBC60u; c->f[29]=c->ps1[29]=RF32(ea);} // 801D0F7C
  c->r[27]=c->r[1]+0x00000144u; // 801D0F80
  {uint32_t ea=c->r[2]+0xFFFFBC64u; c->f[28]=c->ps1[28]=RF32(ea);} // 801D0F84
  c->r[23]=0u+0x00000000u; // 801D0F88
  {uint32_t ea=c->r[2]+0xFFFFBC68u; c->f[27]=c->ps1[27]=RF32(ea);} // 801D0F8C
  c->r[30]=0u+0x00000000u; // 801D0F90
  goto L_801D10B4; // 801D0F94
L_801D0F98:;
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801D0F98
  c->r[4]=c->r[29]+0x000008D0u; // 801D0F9C
  c->r[3]=c->r[1]+0x000000A4u; // 801D0FA0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D0FA4
  c->ctr=c->r[12]; // 801D0FA8
  if (true) { c->lr=0x801D0FB0u; dispatch(c,c->ctr); } // 801D0FAC
  c->r[3]=c->r[1]+0x00000038u; // 801D0FB0
  c->r[4]=c->r[1]+0x000000A4u; // 801D0FB4
  c->lr=0x801D0FBCu; f_800BC9F4(c); // 801D0FB8
  c->r[5]=R32(c->r[27]+c->r[30]); // 801D0FBC
  c->r[3]=c->r[1]+0x000000D4u; // 801D0FC0
  c->r[4]=c->r[1]+0x00000038u; // 801D0FC4
  {uint32_t ea=c->r[5]+0x000021ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D0FC8
  c->r[25]=c->r[5]+0x000021ACu; // 801D0FCC
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 801D0FD0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 801D0FD4
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[0]); // 801D0FD8
  c->lr=0x801D0FE0u; f_80394980(c); // 801D0FDC
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801D0FE0
  c->r[4]=c->r[29]+0x000008D0u; // 801D0FE4
  c->r[3]=c->r[1]+0x00000074u; // 801D0FE8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D0FEC
  c->ctr=c->r[12]; // 801D0FF0
  if (true) { c->lr=0x801D0FF8u; dispatch(c,c->ctr); } // 801D0FF4
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D0FF8
  c->r[3]=c->r[1]+0x0000002Cu; // 801D0FFC
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1000
  {uint32_t ea=c->r[1]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D1004
  c->lr=0x801D100Cu; f_800521A0(c); // 801D1008
  c->r[3]=c->r[1]+0x0000002Cu; // 801D100C
  c->r[4]=c->r[1]+0x000000D4u; // 801D1010
  c->r[5]=c->r[3]|c->r[3]; // 801D1014
  c->lr=0x801D101Cu; f_80394B04(c); // 801D1018
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801D101C
  c->r[4]=c->r[29]+0x000008D0u; // 801D1020
  c->r[3]=c->r[1]+0x00000044u; // 801D1024
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D1028
  c->ctr=c->r[12]; // 801D102C
  if (true) { c->lr=0x801D1034u; dispatch(c,c->ctr); } // 801D1030
  c->r[3]=c->r[1]+0x00000020u; // 801D1034
  c->r[4]=c->r[1]+0x00000044u; // 801D1038
  c->lr=0x801D1040u; f_80032FD8(c); // 801D103C
  c->lr=0x801D1044u; f_80061A4C(c); // 801D1040
  c->r[5]=c->r[3]|c->r[3]; // 801D1044
  c->r[3]=c->r[1]+0x00000014u; // 801D1048
  c->r[4]=c->r[1]+0x00000020u; // 801D104C
  c->r[5]=c->r[5]+0x00000384u; // 801D1050
  c->lr=0x801D1058u; f_80064C74(c); // 801D1054
  c->r[3]=c->r[1]+0x00000014u; // 801D1058
  c->lr=0x801D1060u; f_80065368(c); // 801D105C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1060
  if (!crb(c,2)) { goto L_801D1074; } // 801D1064
  c->r[3]=c->r[1]+0x00000014u; // 801D1068
  c->r[4]=c->r[3]|c->r[3]; // 801D106C
  c->lr=0x801D1074u; f_80265750(c); // 801D1070
L_801D1074:;
  {uint32_t ea=c->r[2]+0xFFFFBC74u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1074
  c->r[3]=c->r[1]+0x00000008u; // 801D1078
  c->r[4]=c->r[1]+0x00000014u; // 801D107C
  c->lr=0x801D1084u; f_800FACB4(c); // 801D1080
  c->r[3]=c->r[1]+0x00000020u; // 801D1084
  c->r[5]=c->r[1]+0x00000008u; // 801D1088
  c->r[4]=c->r[3]|c->r[3]; // 801D108C
  c->lr=0x801D1094u; f_80064C34(c); // 801D1090
  c->r[3]=c->r[25]|c->r[25]; // 801D1094
  c->r[4]=c->r[1]+0x0000002Cu; // 801D1098
  c->lr=0x801D10A0u; f_8007513C(c); // 801D109C
  c->r[3]=c->r[25]|c->r[25]; // 801D10A0
  c->r[4]=c->r[1]+0x00000020u; // 801D10A4
  c->lr=0x801D10ACu; f_80032FF4(c); // 801D10A8
  c->r[23]=c->r[23]+0x00000001u; // 801D10AC
  c->r[30]=c->r[30]+0x00000004u; // 801D10B0
L_801D10B4:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[31]); // 801D10B4
  if (crb(c,0)) { IRQCHK(c); goto L_801D0F98; } // 801D10B8
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[29]=RF64(ea);} // 801D10BC
  c->r[28]=c->r[1]+0x00000144u; // 801D10C0
  {uint32_t ea=c->r[2]+0xFFFFBC7Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801D10C4
  c->r[23]=0u+0x00000000u; // 801D10C8
  {uint32_t ea=c->r[2]+0xFFFFBC78u; c->f[27]=c->ps1[27]=RF32(ea);} // 801D10CC
  c->r[29]=0u+0x00000000u; // 801D10D0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801D10D4
  goto L_801D1114; // 801D10D8
L_801D10DC:;
  c->r[27]=R32(c->r[28]+c->r[29]); // 801D10DC
  {uint32_t ea=c->r[27]+0x000021E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D10E0
  fcmp(c,0,c->f[0],c->f[30]); // 801D10E4
  if (!crb(c,0)) { goto L_801D110C; } // 801D10E8
  c->lr=0x801D10F0u; f_80291D94(c); // 801D10EC
  c->r[0]=c->r[3]^0x80000000u; // 801D10F0
  W32(c->r[1]+0x0000018Cu,c->r[0]); // 801D10F4
  {uint32_t ea=c->r[1]+0x00000188u; c->f[0]=RF64(ea);} // 801D10F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801D10FC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 801D1100
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 801D1104
  {uint32_t ea=c->r[27]+0x000021E4u; WF32(ea,c->f[0]);} // 801D1108
L_801D110C:;
  c->r[23]=c->r[23]+0x00000001u; // 801D110C
  c->r[29]=c->r[29]+0x00000004u; // 801D1110
L_801D1114:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[31]); // 801D1114
  if (crb(c,0)) { IRQCHK(c); goto L_801D10DC; } // 801D1118
  {uint32_t ea=c->r[2]+0xFFFFBC14u; c->f[27]=c->ps1[27]=RF32(ea);} // 801D111C
  c->r[28]=c->r[1]+0x00000144u; // 801D1120
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[29]=RF64(ea);} // 801D1124
  c->r[23]=0u+0x00000000u; // 801D1128
  {uint32_t ea=c->r[2]+0xFFFFBC6Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801D112C
  c->r[29]=0u+0x00000000u; // 801D1130
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D1134
  {uint32_t ea=c->r[2]+0xFFFFBC78u; c->f[28]=c->ps1[28]=RF32(ea);} // 801D1138
  goto L_801D1180; // 801D113C
L_801D1140:;
  c->r[27]=R32(c->r[28]+c->r[29]); // 801D1140
  {uint32_t ea=c->r[27]+0x000021DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1144
  fcmp(c,0,c->f[0],c->f[27]); // 801D1148
  if (crb(c,0)) { goto L_801D1158; } // 801D114C
  fcmp(c,0,c->f[0],c->f[28]); // 801D1150
  if (!crb(c,1)) { goto L_801D1178; } // 801D1154
L_801D1158:;
  c->lr=0x801D115Cu; f_80291D94(c); // 801D1158
  c->r[0]=c->r[3]^0x80000000u; // 801D115C
  W32(c->r[1]+0x00000194u,c->r[0]); // 801D1160
  {uint32_t ea=c->r[1]+0x00000190u; c->f[0]=RF64(ea);} // 801D1164
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801D1168
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 801D116C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[27])); // 801D1170
  {uint32_t ea=c->r[27]+0x000021DCu; WF32(ea,c->f[0]);} // 801D1174
L_801D1178:;
  c->r[23]=c->r[23]+0x00000001u; // 801D1178
  c->r[29]=c->r[29]+0x00000004u; // 801D117C
L_801D1180:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[31]); // 801D1180
  if (crb(c,0)) { IRQCHK(c); goto L_801D1140; } // 801D1184
  c->r[28]=c->r[1]+0x00000144u; // 801D1188
  c->r[23]=0u+0x00000000u; // 801D118C
  c->r[29]=0u+0x00000000u; // 801D1190
  c->r[27]=0u+0x0000000Au; // 801D1194
  goto L_801D11B0; // 801D1198
L_801D119C:;
  c->r[3]=R32(c->r[28]+c->r[29]); // 801D119C
  W16(c->r[3]+0x00001FECu,c->r[27]); // 801D11A0
  c->lr=0x801D11A8u; f_800AC3A4(c); // 801D11A4
  c->r[23]=c->r[23]+0x00000001u; // 801D11A8
  c->r[29]=c->r[29]+0x00000004u; // 801D11AC
L_801D11B0:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[31]); // 801D11B0
  if (crb(c,0)) { IRQCHK(c); goto L_801D119C; } // 801D11B4
L_801D11B8:;
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,31,ea,0,0);} // 801D11B8
  {uint32_t ea=c->r[1]+0x00000210u; c->f[31]=RF64(ea);} // 801D11BC
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,30,ea,0,0);} // 801D11C0
  {uint32_t ea=c->r[1]+0x00000200u; c->f[30]=RF64(ea);} // 801D11C4
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,29,ea,0,0);} // 801D11C8
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[29]=RF64(ea);} // 801D11CC
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,28,ea,0,0);} // 801D11D0
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[28]=RF64(ea);} // 801D11D4
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,27,ea,0,0);} // 801D11D8
  c->r[11]=c->r[1]+0x000001D0u; // 801D11DC
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[27]=RF64(ea);} // 801D11E0
  c->lr=0x801D11E8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D11E4
  c->r[0]=R32(c->r[1]+0x00000224u); // 801D11E8
  c->lr=c->r[0]; // 801D11EC
  c->r[1]=c->r[1]+0x00000220u; // 801D11F0
  return; // 801D11F4
}

// fn_801D11F8
void f_801D11F8(Ctx* __restrict c) {
  trace_call(0x801D11F8u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D11F8
  cmps(c,0,(int32_t)c->r[0],30); // 801D11FC
  if (!crb(c,2)) return; // 801D1200
  c->r[4]=c->r[5]|c->r[5]; // 801D1204
  f_801D027C(c); return; // 801D1208
  return; // 801D120C
}

// fn_801D1210
void f_801D1210(Ctx* __restrict c) {
  trace_call(0x801D1210u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D1210
  cmps(c,0,(int32_t)c->r[0],30); // 801D1214
  if (crb(c,2)) { goto L_801D1220; } // 801D1218
  return; // 801D121C
L_801D1220:;
  f_801D28F4(c); return; // 801D1220
  return; // 801D1224
}

// fn_801D1228
void f_801D1228(Ctx* __restrict c) {
  trace_call(0x801D1228u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D1228
  cmps(c,0,(int32_t)c->r[0],30); // 801D122C
  if (crb(c,2)) { goto L_801D1244; } // 801D1230
  if (!crb(c,0)) return; // 801D1234
  cmps(c,0,(int32_t)c->r[0],10); // 801D1238
  if (crb(c,2)) { goto L_801D1248; } // 801D123C
  return; // 801D1240
L_801D1244:;
  f_801D0378(c); return; // 801D1244
L_801D1248:;
  f_800AC668(c); return; // 801D1248
  return; // 801D124C
}

// fn_801D1250
void f_801D1250(Ctx* __restrict c) {
  trace_call(0x801D1250u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D1250
  cmps(c,0,(int32_t)c->r[0],20); // 801D1254
  if (crb(c,2)) { goto L_801D1280; } // 801D1258
  if (!crb(c,0)) { goto L_801D126C; } // 801D125C
  cmps(c,0,(int32_t)c->r[0],10); // 801D1260
  if (crb(c,2)) { goto L_801D1278; } // 801D1264
  return; // 801D1268
L_801D126C:;
  cmps(c,0,(int32_t)c->r[0],40); // 801D126C
  if (crb(c,2)) { goto L_801D1288; } // 801D1270
  return; // 801D1274
L_801D1278:;
  c->r[4]=c->r[5]|c->r[5]; // 801D1278
  f_801D1DD4(c); return; // 801D127C
L_801D1280:;
  c->r[4]=c->r[5]|c->r[5]; // 801D1280
  f_801D21F4(c); return; // 801D1284
L_801D1288:;
  c->r[4]=c->r[5]|c->r[5]; // 801D1288
  f_801D2AE0(c); return; // 801D128C
  return; // 801D1290
}

// fn_801D1294
void f_801D1294(Ctx* __restrict c) {
  trace_call(0x801D1294u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D1294
  cmps(c,0,(int32_t)c->r[0],20); // 801D1298
  if (crb(c,2)) { goto L_801D12BC; } // 801D129C
  if (!crb(c,0)) { goto L_801D12B0; } // 801D12A0
  cmps(c,0,(int32_t)c->r[0],10); // 801D12A4
  if (crb(c,2)) return; // 801D12A8
  return; // 801D12AC
L_801D12B0:;
  cmps(c,0,(int32_t)c->r[0],40); // 801D12B0
  if (crb(c,2)) { goto L_801D12C0; } // 801D12B4
  return; // 801D12B8
L_801D12BC:;
  f_801D2230(c); return; // 801D12BC
L_801D12C0:;
  f_801D2C50(c); return; // 801D12C0
  return; // 801D12C4
}

// fn_801D12C8
void f_801D12C8(Ctx* __restrict c) {
  trace_call(0x801D12C8u);
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D12C8
  cmps(c,0,(int32_t)c->r[0],20); // 801D12CC
  if (crb(c,2)) { goto L_801D12F4; } // 801D12D0
  if (!crb(c,0)) { goto L_801D12E4; } // 801D12D4
  cmps(c,0,(int32_t)c->r[0],10); // 801D12D8
  if (crb(c,2)) { goto L_801D12F0; } // 801D12DC
  return; // 801D12E0
L_801D12E4:;
  cmps(c,0,(int32_t)c->r[0],40); // 801D12E4
  if (crb(c,2)) { goto L_801D12F8; } // 801D12E8
  return; // 801D12EC
L_801D12F0:;
  f_801D1F68(c); return; // 801D12F0
L_801D12F4:;
  f_801D22D8(c); return; // 801D12F4
L_801D12F8:;
  f_801D2F34(c); return; // 801D12F8
  return; // 801D12FC
}

// fn_801D1300
void f_801D1300(Ctx* __restrict c) {
  trace_call(0x801D1300u);
  c->r[4]=c->r[5]|c->r[5]; // 801D1300
  f_801D233C(c); return; // 801D1304
}

// fn_801D1308
void f_801D1308(Ctx* __restrict c) {
  trace_call(0x801D1308u);
  f_801D246C(c); return; // 801D1308
}

// fn_801D130C
void f_801D130C(Ctx* __restrict c) {
  trace_call(0x801D130Cu);
  f_801D2588(c); return; // 801D130C
}

// fn_801D1310
void f_801D1310(Ctx* __restrict c) {
  trace_call(0x801D1310u);
  c->r[4]=c->r[5]|c->r[5]; // 801D1310
  f_801D2614(c); return; // 801D1314
}

// fn_801D1318
void f_801D1318(Ctx* __restrict c) {
  trace_call(0x801D1318u);
  f_801D2744(c); return; // 801D1318
}

// fn_801D131C
void f_801D131C(Ctx* __restrict c) {
  trace_call(0x801D131Cu);
  f_801D2860(c); return; // 801D131C
}

// fn_801D1320
void f_801D1320(Ctx* __restrict c) {
  trace_call(0x801D1320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1320
  c->r[0]=c->lr; // 801D1324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D132C
  c->r[31]=c->r[5]|c->r[5]; // 801D1330
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D1334
  c->r[30]=c->r[3]|c->r[3]; // 801D1338
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D133C
  cmpu(c,0,c->r[0],0x00000032u); // 801D1340
  if (!crb(c,2)) { goto L_801D135C; } // 801D1344
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1348
  c->r[0]=0u+0x0000001Au; // 801D134C
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801D1350
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[0]);} // 801D1354
  goto L_801D13A4; // 801D1358
L_801D135C:;
  c->r[4]=c->r[31]|c->r[31]; // 801D135C
  c->lr=0x801D1364u; f_801C3B78(c); // 801D1360
  c->lr=0x801D1368u; f_80232150(c); // 801D1364
  c->r[4]=0u+0x803E0000u; // 801D1368
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D136C
  c->r[4]=c->r[4]+0x00000EE0u; // 801D1370
  c->r[4]=c->r[4]+0x00000087u; // 801D1374
  c->lr=0x801D137Cu; f_80232230(c); // 801D1378
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 801D137C
  c->r[0]=R16(c->r[30]+0x00001FEEu); // 801D1380
  cmpu(c,0,c->r[0],0x00000017u); // 801D1384
  if (crb(c,2)) { goto L_801D1394; } // 801D1388
  c->r[0]=0u+0x00000015u; // 801D138C
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801D1390
L_801D1394:;
  {uint32_t ea=c->r[30]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1394
  {uint32_t ea=c->r[30]+0x00002280u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1398
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D139C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 801D13A0
L_801D13A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D13A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D13A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D13AC
  c->lr=c->r[0]; // 801D13B0
  c->r[1]=c->r[1]+0x00000010u; // 801D13B4
  return; // 801D13B8
}

// fn_801D13BC
void f_801D13BC(Ctx* __restrict c) {
  trace_call(0x801D13BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D13BC
  c->r[0]=c->lr; // 801D13C0
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D13C4
  c->r[11]=c->r[1]+0x00000090u; // 801D13C8
  c->lr=0x801D13D0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D13CC
  c->r[31]=c->r[1]|c->r[1]; // 801D13D0
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D13D4
  c->r[29]=c->r[3]|c->r[3]; // 801D13D8
  c->r[30]=c->r[4]|c->r[4]; // 801D13DC
  cmps(c,0,(int32_t)c->r[0],26); // 801D13E0
  if (!crb(c,0)) { goto L_801D18E0; } // 801D13E4
  cmps(c,0,(int32_t)c->r[0],21); // 801D13E8
  if (!crb(c,0)) { goto L_801D13F4; } // 801D13EC
  goto L_801D18E0; // 801D13F0
L_801D13F4:;
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D13F4
  c->r[3]=c->r[31]+0x00000008u; // 801D13F8
  {uint32_t ea=c->r[2]+0xFFFFBC84u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D13FC
  c->f[3]=c->f[1]; // 801D1400
  c->lr=0x801D1408u; f_800521A0(c); // 801D1404
  {uint32_t ea=c->r[2]+0xFFFFBC00u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1408
  c->r[5]=c->r[3]|c->r[3]; // 801D140C
  c->r[4]=c->r[29]|c->r[29]; // 801D1410
  c->r[3]=c->r[31]+0x00000044u; // 801D1414
  c->lr=0x801D141Cu; f_801C3C7C(c); // 801D1418
  c->r[3]=c->r[31]+0x00000044u; // 801D141C
  c->lr=0x801D1424u; f_801C4B60(c); // 801D1420
  cmps(c,0,(int32_t)c->r[3],0); // 801D1424
  if (!crb(c,2)) { goto L_801D1444; } // 801D1428
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801D142C
  c->r[3]=c->r[29]+0x000008D0u; // 801D1430
  c->r[4]=c->r[31]+0x00000044u; // 801D1434
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D1438
  c->ctr=c->r[12]; // 801D143C
  if (true) { c->lr=0x801D1444u; dispatch(c,c->ctr); } // 801D1440
L_801D1444:;
  c->r[3]=c->r[29]|c->r[29]; // 801D1444
  c->lr=0x801D144Cu; f_801C3C1C(c); // 801D1448
  c->r[0]=R16(c->r[29]+0x00001FEEu); // 801D144C
  cmpu(c,0,c->r[0],0x00000015u); // 801D1450
  if (!crb(c,2)) { goto L_801D1538; } // 801D1454
  {uint32_t ea=c->r[2]+0xFFFFBC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1458
  fcmp(c,0,c->f[1],c->f[0]); // 801D145C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D1460
  if (!crb(c,2)) { goto L_801D14A8; } // 801D1464
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1468
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D146C
  fcmp(c,0,c->f[1],c->f[0]); // 801D1470
  if (!crb(c,0)) { goto L_801D1490; } // 801D1474
  c->r[3]=0u+0x804D0000u; // 801D1478
  {uint32_t ea=c->r[2]+0xFFFFBC88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D147C
  c->r[3]=c->r[3]+0x00003318u; // 801D1480
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1484
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801D1488
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D148C
L_801D1490:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1490
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1494
  fcmp(c,0,c->f[1],c->f[0]); // 801D1498
  if (!crb(c,1)) { goto L_801D1824; } // 801D149C
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D14A0
  goto L_801D1824; // 801D14A4
L_801D14A8:;
  {uint32_t ea=c->r[2]+0xFFFFBC8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D14A8
  fcmp(c,0,c->f[1],c->f[0]); // 801D14AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D14B0
  if (!crb(c,2)) { goto L_801D14F8; } // 801D14B4
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D14B8
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D14BC
  fcmp(c,0,c->f[1],c->f[0]); // 801D14C0
  if (!crb(c,0)) { goto L_801D14E0; } // 801D14C4
  c->r[3]=0u+0x804D0000u; // 801D14C8
  {uint32_t ea=c->r[2]+0xFFFFBC90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D14CC
  c->r[3]=c->r[3]+0x00003318u; // 801D14D0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D14D4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801D14D8
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D14DC
L_801D14E0:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D14E0
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D14E4
  fcmp(c,0,c->f[1],c->f[0]); // 801D14E8
  if (!crb(c,1)) { goto L_801D1824; } // 801D14EC
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D14F0
  goto L_801D1824; // 801D14F4
L_801D14F8:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D14F8
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D14FC
  fcmp(c,0,c->f[1],c->f[0]); // 801D1500
  if (!crb(c,0)) { goto L_801D1520; } // 801D1504
  c->r[3]=0u+0x804D0000u; // 801D1508
  {uint32_t ea=c->r[2]+0xFFFFBC90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D150C
  c->r[3]=c->r[3]+0x00003318u; // 801D1510
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1514
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801D1518
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D151C
L_801D1520:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1520
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1524
  fcmp(c,0,c->f[1],c->f[0]); // 801D1528
  if (!crb(c,1)) { goto L_801D1824; } // 801D152C
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1530
  goto L_801D1824; // 801D1534
L_801D1538:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D1538
  cmpu(c,0,c->r[0],0x00000016u); // 801D153C
  if (!crb(c,2)) { goto L_801D161C; } // 801D1540
  {uint32_t ea=c->r[2]+0xFFFFBC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1544
  fcmp(c,0,c->f[1],c->f[0]); // 801D1548
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D154C
  if (!crb(c,2)) { goto L_801D1594; } // 801D1550
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1554
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1558
  fcmp(c,0,c->f[1],c->f[0]); // 801D155C
  if (!crb(c,0)) { goto L_801D157C; } // 801D1560
  c->r[3]=0u+0x804D0000u; // 801D1564
  {uint32_t ea=c->r[2]+0xFFFFBC88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1568
  c->r[3]=c->r[3]+0x00003318u; // 801D156C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1570
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801D1574
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1578
L_801D157C:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D157C
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1580
  fcmp(c,0,c->f[1],c->f[0]); // 801D1584
  if (!crb(c,1)) { goto L_801D1824; } // 801D1588
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D158C
  goto L_801D1824; // 801D1590
L_801D1594:;
  {uint32_t ea=c->r[2]+0xFFFFBC8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1594
  fcmp(c,0,c->f[1],c->f[0]); // 801D1598
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D159C
  if (!crb(c,2)) { goto L_801D15E0; } // 801D15A0
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D15A4
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D15A8
  fcmp(c,0,c->f[1],c->f[0]); // 801D15AC
  if (!crb(c,0)) { goto L_801D15C8; } // 801D15B0
  c->r[3]=0u+0x804D0000u; // 801D15B4
  c->r[3]=c->r[3]+0x00003318u; // 801D15B8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D15BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D15C0
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D15C4
L_801D15C8:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D15C8
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D15CC
  fcmp(c,0,c->f[1],c->f[0]); // 801D15D0
  if (!crb(c,1)) { goto L_801D1824; } // 801D15D4
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D15D8
  goto L_801D1824; // 801D15DC
L_801D15E0:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D15E0
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D15E4
  fcmp(c,0,c->f[1],c->f[0]); // 801D15E8
  if (!crb(c,0)) { goto L_801D1604; } // 801D15EC
  c->r[3]=0u+0x804D0000u; // 801D15F0
  c->r[3]=c->r[3]+0x00003318u; // 801D15F4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D15F8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D15FC
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1600
L_801D1604:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1604
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1608
  fcmp(c,0,c->f[1],c->f[0]); // 801D160C
  if (!crb(c,1)) { goto L_801D1824; } // 801D1610
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1614
  goto L_801D1824; // 801D1618
L_801D161C:;
  cmpu(c,0,c->r[0],0x00000017u); // 801D161C
  if (!crb(c,2)) { goto L_801D1700; } // 801D1620
  {uint32_t ea=c->r[2]+0xFFFFBC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1624
  fcmp(c,0,c->f[1],c->f[0]); // 801D1628
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D162C
  if (!crb(c,2)) { goto L_801D1674; } // 801D1630
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1634
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1638
  fcmp(c,0,c->f[1],c->f[0]); // 801D163C
  if (!crb(c,0)) { goto L_801D165C; } // 801D1640
  c->r[3]=0u+0x804D0000u; // 801D1644
  {uint32_t ea=c->r[2]+0xFFFFBC88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1648
  c->r[3]=c->r[3]+0x00003318u; // 801D164C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1650
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801D1654
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1658
L_801D165C:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D165C
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1660
  fcmp(c,0,c->f[1],c->f[0]); // 801D1664
  if (!crb(c,1)) { goto L_801D1824; } // 801D1668
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D166C
  goto L_801D1824; // 801D1670
L_801D1674:;
  {uint32_t ea=c->r[2]+0xFFFFBC8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1674
  fcmp(c,0,c->f[1],c->f[0]); // 801D1678
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D167C
  if (!crb(c,2)) { goto L_801D16C0; } // 801D1680
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1684
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1688
  fcmp(c,0,c->f[1],c->f[0]); // 801D168C
  if (!crb(c,0)) { goto L_801D16A8; } // 801D1690
  c->r[3]=0u+0x804D0000u; // 801D1694
  c->r[3]=c->r[3]+0x00003318u; // 801D1698
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D169C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D16A0
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D16A4
L_801D16A8:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D16A8
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D16AC
  fcmp(c,0,c->f[1],c->f[0]); // 801D16B0
  if (!crb(c,1)) { goto L_801D1824; } // 801D16B4
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D16B8
  goto L_801D1824; // 801D16BC
L_801D16C0:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D16C0
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D16C4
  fcmp(c,0,c->f[1],c->f[0]); // 801D16C8
  if (!crb(c,0)) { goto L_801D16E8; } // 801D16CC
  c->r[3]=0u+0x804D0000u; // 801D16D0
  {uint32_t ea=c->r[2]+0xFFFFBC90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D16D4
  c->r[3]=c->r[3]+0x00003318u; // 801D16D8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D16DC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801D16E0
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D16E4
L_801D16E8:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D16E8
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D16EC
  fcmp(c,0,c->f[1],c->f[0]); // 801D16F0
  if (!crb(c,1)) { goto L_801D1824; } // 801D16F4
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D16F8
  goto L_801D1824; // 801D16FC
L_801D1700:;
  cmpu(c,0,c->r[0],0x00000018u); // 801D1700
  if (!crb(c,2)) { goto L_801D17E0; } // 801D1704
  {uint32_t ea=c->r[2]+0xFFFFBC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1708
  fcmp(c,0,c->f[1],c->f[0]); // 801D170C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D1710
  if (!crb(c,2)) { goto L_801D1754; } // 801D1714
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1718
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D171C
  fcmp(c,0,c->f[1],c->f[0]); // 801D1720
  if (!crb(c,0)) { goto L_801D173C; } // 801D1724
  c->r[3]=0u+0x804D0000u; // 801D1728
  c->r[3]=c->r[3]+0x00003318u; // 801D172C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1730
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D1734
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1738
L_801D173C:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D173C
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1740
  fcmp(c,0,c->f[1],c->f[0]); // 801D1744
  if (!crb(c,1)) { goto L_801D1824; } // 801D1748
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D174C
  goto L_801D1824; // 801D1750
L_801D1754:;
  {uint32_t ea=c->r[2]+0xFFFFBC8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1754
  fcmp(c,0,c->f[1],c->f[0]); // 801D1758
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D175C
  if (!crb(c,2)) { goto L_801D17A0; } // 801D1760
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1764
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1768
  fcmp(c,0,c->f[1],c->f[0]); // 801D176C
  if (!crb(c,0)) { goto L_801D1788; } // 801D1770
  c->r[3]=0u+0x804D0000u; // 801D1774
  c->r[3]=c->r[3]+0x00003318u; // 801D1778
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D177C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D1780
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1784
L_801D1788:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1788
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D178C
  fcmp(c,0,c->f[1],c->f[0]); // 801D1790
  if (!crb(c,1)) { goto L_801D1824; } // 801D1794
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1798
  goto L_801D1824; // 801D179C
L_801D17A0:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D17A0
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D17A4
  fcmp(c,0,c->f[1],c->f[0]); // 801D17A8
  if (!crb(c,0)) { goto L_801D17C8; } // 801D17AC
  c->r[3]=0u+0x804D0000u; // 801D17B0
  {uint32_t ea=c->r[2]+0xFFFFBC90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D17B4
  c->r[3]=c->r[3]+0x00003318u; // 801D17B8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D17BC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801D17C0
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D17C4
L_801D17C8:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D17C8
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D17CC
  fcmp(c,0,c->f[1],c->f[0]); // 801D17D0
  if (!crb(c,1)) { goto L_801D1824; } // 801D17D4
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D17D8
  goto L_801D1824; // 801D17DC
L_801D17E0:;
  cmpu(c,0,c->r[0],0x0000001Au); // 801D17E0
  if (!crb(c,2)) { goto L_801D1824; } // 801D17E4
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D17E8
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D17EC
  fcmp(c,0,c->f[1],c->f[0]); // 801D17F0
  if (!crb(c,1)) { goto L_801D1810; } // 801D17F4
  c->r[3]=0u+0x804D0000u; // 801D17F8
  {uint32_t ea=c->r[2]+0xFFFFBC90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D17FC
  c->r[3]=c->r[3]+0x00003318u; // 801D1800
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1804
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[0],c->f[2],-c->f[1])); // 801D1808
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D180C
L_801D1810:;
  {uint32_t ea=c->r[29]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1810
  {uint32_t ea=c->r[29]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1814
  fcmp(c,0,c->f[1],c->f[0]); // 801D1818
  if (!crb(c,0)) { goto L_801D1824; } // 801D181C
  {uint32_t ea=c->r[29]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1820
L_801D1824:;
  c->r[0]=R16(c->r[29]+0x00001FEEu); // 801D1824
  cmpu(c,0,c->r[0],0x00000016u); // 801D1828
  if (crb(c,0)) { goto L_801D18E0; } // 801D182C
  {uint32_t ea=c->r[29]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1830
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1834
  fcmp(c,0,c->f[1],c->f[0]); // 801D1838
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D183C
  if (!crb(c,2)) { goto L_801D18E0; } // 801D1840
  c->r[3]=R32(c->r[29]+0x00000054u); // 801D1844
  c->r[0]=0u+0x00000032u; // 801D1848
  W16(c->r[29]+0x00001FECu,c->r[0]); // 801D184C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1850
  W16(c->r[29]+0x00001FEEu,c->r[0]); // 801D1854
  if (crb(c,2)) { goto L_801D18A8; } // 801D1858
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D185C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D1860
  c->ctr=c->r[12]; // 801D1864
  if (true) { c->lr=0x801D186Cu; dispatch(c,c->ctr); } // 801D1868
  c->lr=0x801D1870u; f_8007A658(c); // 801D186C
  c->r[30]=c->r[3]|c->r[3]; // 801D1870
  c->r[3]=0u+0x00000006u; // 801D1874
  c->lr=0x801D187Cu; f_8007A658(c); // 801D1878
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801D187C
  if (!crb(c,1)) { goto L_801D18A0; } // 801D1880
  c->r[30]=addc(c,c->r[29],0x00000280u,0); cr0(c,c->r[30]); // 801D1884
  if (crb(c,2)) { goto L_801D1898; } // 801D1888
  W32(c->r[31]+0x00000040u,c->r[1]); // 801D188C
  c->r[3]=c->r[30]|c->r[30]; // 801D1890
  c->lr=0x801D1898u; f_800AC5F0(c); // 801D1894
L_801D1898:;
  W32(c->r[29]+0x00000058u,c->r[30]); // 801D1898
  goto L_801D18E0; // 801D189C
L_801D18A0:;
  c->r[0]=0u+0x00000000u; // 801D18A0
  W32(c->r[29]+0x00000054u,c->r[0]); // 801D18A4
L_801D18A8:;
  c->r[3]=R32(c->r[29]+0x0000005Cu); // 801D18A8
  c->r[0]=c->r[3]+0x00000001u; // 801D18AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D18B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D18B4
  c->r[0]=c->r[0]^c->r[3]; // 801D18B8
  c->r[0]=c->r[0]-c->r[3]; // 801D18BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801D18C0
  c->r[0]=c->r[29]+c->r[0]; // 801D18C4
  c->r[30]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[30]); // 801D18C8
  if (crb(c,2)) { goto L_801D18DC; } // 801D18CC
  W32(c->r[31]+0x00000028u,c->r[1]); // 801D18D0
  c->r[3]=c->r[30]|c->r[30]; // 801D18D4
  c->lr=0x801D18DCu; f_800AC5F0(c); // 801D18D8
L_801D18DC:;
  W32(c->r[29]+0x00000054u,c->r[30]); // 801D18DC
L_801D18E0:;
  c->r[10]=c->r[31]|c->r[31]; // 801D18E0
  c->r[11]=c->r[10]+0x00000090u; // 801D18E4
  c->lr=0x801D18ECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D18E8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801D18EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D18F0
  c->r[1]=c->r[10]|c->r[10]; // 801D18F4
  c->lr=c->r[0]; // 801D18F8
  return; // 801D18FC
}

// fn_801D1900
void f_801D1900(Ctx* __restrict c) {
  trace_call(0x801D1900u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1900
  c->r[0]=c->lr; // 801D1904
  W32(c->r[1]+0x00000134u,c->r[0]); // 801D1908
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 801D190C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 801D1910
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801D1914
  c->r[31]=c->r[3]|c->r[3]; // 801D1918
  W32(c->r[1]+0x00000118u,c->r[30]); // 801D191C
  c->r[30]=c->r[4]|c->r[4]; // 801D1920
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D1924
  cmps(c,0,(int32_t)c->r[0],24); // 801D1928
  if (crb(c,2)) { goto L_801D1B58; } // 801D192C
  if (!crb(c,0)) { goto L_801D194C; } // 801D1930
  cmps(c,0,(int32_t)c->r[0],22); // 801D1934
  if (crb(c,2)) { goto L_801D19DC; } // 801D1938
  if (!crb(c,0)) { goto L_801D1A48; } // 801D193C
  cmps(c,0,(int32_t)c->r[0],21); // 801D1940
  if (!crb(c,0)) { goto L_801D195C; } // 801D1944
  goto L_801D1DB4; // 801D1948
L_801D194C:;
  cmps(c,0,(int32_t)c->r[0],26); // 801D194C
  if (crb(c,2)) { goto L_801D1D7C; } // 801D1950
  if (!crb(c,0)) { goto L_801D1DB4; } // 801D1954
  goto L_801D1D20; // 801D1958
L_801D195C:;
  c->lr=0x801D1960u; f_801C3C1C(c); // 801D195C
  {uint32_t ea=c->r[2]+0xFFFFBC94u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1960
  c->f[31]=c->f[1]; // 801D1964
  fcmp(c,0,c->f[1],c->f[0]); // 801D1968
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D196C
  if (!crb(c,2)) { goto L_801D1DB4; } // 801D1970
  c->r[3]=c->r[31]+0x000008ECu; // 801D1974
  c->r[4]=c->r[31]+0x000021E8u; // 801D1978
  c->lr=0x801D1980u; f_80075440(c); // 801D197C
  W32(c->r[30]+0x00000034u,c->r[3]); // 801D1980
  c->r[5]=c->r[3]|c->r[3]; // 801D1984
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1988
  c->r[3]=c->r[31]+0x00000C88u; // 801D198C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1990
  c->r[4]=c->r[31]+0x000008ECu; // 801D1994
  c->r[6]=0u+0x00000000u; // 801D1998
  c->r[7]=0u+0x00000000u; // 801D199C
  c->lr=0x801D19A4u; f_800BB0C8(c); // 801D19A0
  {uint32_t ea=c->r[2]+0xFFFFBC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D19A4
  c->r[0]=0u+0x00000016u; // 801D19A8
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801D19AC
  fcmp(c,0,c->f[31],c->f[0]); // 801D19B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D19B4
  if (!crb(c,2)) { goto L_801D19C8; } // 801D19B8
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D19BC
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D19C0
  goto L_801D1DB4; // 801D19C4
L_801D19C8:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D19C8
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D19CC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D19D0
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D19D4
  goto L_801D1DB4; // 801D19D8
L_801D19DC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801D19DC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D19E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D19E4
  c->lr=0x801D19ECu; f_8016498C(c); // 801D19E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D19EC
  if (crb(c,2)) { goto L_801D1DB4; } // 801D19F0
  c->r[3]=c->r[31]|c->r[31]; // 801D19F4
  c->lr=0x801D19FCu; f_801C3C1C(c); // 801D19F8
  {uint32_t ea=c->r[2]+0xFFFFBC8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D19FC
  fcmp(c,0,c->f[1],c->f[0]); // 801D1A00
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D1A04
  if (crb(c,2)) { goto L_801D1A48; } // 801D1A08
  c->r[3]=c->r[31]+0x000008ECu; // 801D1A0C
  c->r[4]=c->r[31]+0x000021FCu; // 801D1A10
  c->lr=0x801D1A18u; f_80075440(c); // 801D1A14
  W32(c->r[30]+0x00000034u,c->r[3]); // 801D1A18
  c->r[5]=c->r[3]|c->r[3]; // 801D1A1C
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1A20
  c->r[3]=c->r[31]+0x00000C88u; // 801D1A24
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1A28
  c->r[4]=c->r[31]+0x000008ECu; // 801D1A2C
  c->r[6]=0u+0x00000000u; // 801D1A30
  c->r[7]=0u+0x00000000u; // 801D1A34
  c->lr=0x801D1A3Cu; f_800BB0C8(c); // 801D1A38
  c->r[0]=0u+0x00000017u; // 801D1A3C
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801D1A40
  goto L_801D1DB4; // 801D1A44
L_801D1A48:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1A48
  c->lr=0x801D1A50u; f_801C3C1C(c); // 801D1A4C
  {uint32_t ea=c->r[2]+0xFFFFBC8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1A50
  fcmp(c,0,c->f[1],c->f[0]); // 801D1A54
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D1A58
  if (!crb(c,2)) { goto L_801D1DB4; } // 801D1A5C
  c->r[3]=c->r[31]+0x000008ECu; // 801D1A60
  c->r[4]=c->r[31]+0x00002210u; // 801D1A64
  c->lr=0x801D1A6Cu; f_80075440(c); // 801D1A68
  W32(c->r[30]+0x00000034u,c->r[3]); // 801D1A6C
  c->r[5]=c->r[3]|c->r[3]; // 801D1A70
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1A74
  c->r[3]=c->r[31]+0x00000C88u; // 801D1A78
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1A7C
  c->r[4]=c->r[31]+0x000008ECu; // 801D1A80
  c->r[6]=0u+0x00000000u; // 801D1A84
  c->r[7]=0u+0x00000000u; // 801D1A88
  c->lr=0x801D1A90u; f_800BB0C8(c); // 801D1A8C
  c->r[0]=0u+0x00000018u; // 801D1A90
  c->r[4]=c->r[31]+0x000008D0u; // 801D1A94
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801D1A98
  c->r[3]=c->r[1]+0x000000B8u; // 801D1A9C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D1AA0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D1AA4
  c->ctr=c->r[12]; // 801D1AA8
  if (true) { c->lr=0x801D1AB0u; dispatch(c,c->ctr); } // 801D1AAC
  c->r[3]=c->r[1]+0x00000028u; // 801D1AB0
  c->r[4]=c->r[1]+0x000000B8u; // 801D1AB4
  c->lr=0x801D1ABCu; f_800BC9F4(c); // 801D1AB8
  c->r[3]=c->r[31]+0x00002000u; // 801D1ABC
  c->r[4]=c->r[1]+0x00000028u; // 801D1AC0
  c->lr=0x801D1AC8u; f_8003F468(c); // 801D1AC4
  {uint32_t ea=c->r[31]+0x00002000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1AC8
  c->r[3]=c->r[1]+0x00000058u; // 801D1ACC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1AD0
  {uint32_t ea=c->r[31]+0x00002008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D1AD4
  c->lr=0x801D1ADCu; f_800521A0(c); // 801D1AD8
  c->r[3]=c->r[1]+0x00000058u; // 801D1ADC
  c->lr=0x801D1AE4u; f_802657AC(c); // 801D1AE0
  {uint32_t ea=c->r[2]+0xFFFFBC98u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1AE4
  fcmp(c,0,c->f[1],c->f[0]); // 801D1AE8
  if (!crb(c,0)) { goto L_801D1DB4; } // 801D1AEC
  c->r[3]=c->r[1]+0x00000058u; // 801D1AF0
  c->lr=0x801D1AF8u; f_80065368(c); // 801D1AF4
  cmps(c,0,(int32_t)c->r[3],0); // 801D1AF8
  if (!crb(c,2)) { goto L_801D1B0C; } // 801D1AFC
  c->r[3]=c->r[1]+0x00000058u; // 801D1B00
  c->r[4]=c->r[3]|c->r[3]; // 801D1B04
  c->lr=0x801D1B0Cu; f_80265750(c); // 801D1B08
L_801D1B0C:;
  {uint32_t ea=c->r[31]+0x00002004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1B0C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1B10
  fcmp(c,0,c->f[1],c->f[0]); // 801D1B14
  if (!crb(c,0)) { goto L_801D1B24; } // 801D1B18
  {uint32_t ea=c->r[2]+0xFFFFBC9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1B1C
  goto L_801D1B28; // 801D1B20
L_801D1B24:;
  {uint32_t ea=c->r[2]+0xFFFFBCA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1B24
L_801D1B28:;
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D1B28
  c->r[3]=c->r[1]+0x00000058u; // 801D1B2C
  c->lr=0x801D1B34u; f_80065368(c); // 801D1B30
  cmps(c,0,(int32_t)c->r[3],0); // 801D1B34
  if (!crb(c,2)) { goto L_801D1B48; } // 801D1B38
  c->r[3]=c->r[1]+0x00000058u; // 801D1B3C
  c->r[4]=c->r[3]|c->r[3]; // 801D1B40
  c->lr=0x801D1B48u; f_80265750(c); // 801D1B44
L_801D1B48:;
  c->r[3]=c->r[31]+0x00002000u; // 801D1B48
  c->r[4]=c->r[1]+0x00000058u; // 801D1B4C
  c->lr=0x801D1B54u; f_8003F468(c); // 801D1B50
  goto L_801D1DB4; // 801D1B54
L_801D1B58:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801D1B58
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1B5C
  c->lr=0x801D1B64u; f_800752CC(c); // 801D1B60
  {uint32_t ea=c->r[2]+0xFFFFBCA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1B64
  fcmp(c,0,c->f[1],c->f[0]); // 801D1B68
  if (!crb(c,1)) { goto L_801D1DB4; } // 801D1B6C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D1B70
  c->r[4]=c->r[31]+0x000008D0u; // 801D1B74
  c->r[3]=c->r[1]+0x00000088u; // 801D1B78
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D1B7C
  c->ctr=c->r[12]; // 801D1B80
  if (true) { c->lr=0x801D1B88u; dispatch(c,c->ctr); } // 801D1B84
  c->r[3]=c->r[1]+0x0000004Cu; // 801D1B88
  c->r[4]=c->r[1]+0x00000088u; // 801D1B8C
  c->lr=0x801D1B94u; f_80032FD8(c); // 801D1B90
  c->r[3]=c->r[31]|c->r[31]; // 801D1B94
  c->lr=0x801D1B9Cu; f_801C3C1C(c); // 801D1B98
  {uint32_t ea=c->r[2]+0xFFFFBCA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1B9C
  fcmp(c,0,c->f[1],c->f[0]); // 801D1BA0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D1BA4
  if (!crb(c,2)) { goto L_801D1BF4; } // 801D1BA8
  {uint32_t ea=c->r[30]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1BAC
  c->r[3]=c->r[1]+0x00000064u; // 801D1BB0
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1BB4
  c->r[4]=c->r[1]+0x0000004Cu; // 801D1BB8
  c->r[5]=0u+0xFFFFFFFFu; // 801D1BBC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801D1BC0
  c->lr=0x801D1BC8u; f_800BCD10(c); // 801D1BC4
  c->r[0]=R32(c->r[30]+0x00000024u); // 801D1BC8
  c->r[5]=c->r[13]+0xFFFF94B8u; // 801D1BCC
  c->r[3]=c->r[1]+0x00000008u; // 801D1BD0
  c->r[4]=c->r[1]+0x00000064u; // 801D1BD4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D1BD8
  c->r[6]=R32(c->r[5]+c->r[0]); // 801D1BDC
  c->r[5]=R32(c->r[6]+0x00000000u); // 801D1BE0
  c->r[0]=R32(c->r[6]+0x00000004u); // 801D1BE4
  W32(c->r[1]+0x00000008u,c->r[5]); // 801D1BE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D1BEC
  c->lr=0x801D1BF4u; f_800BCDAC(c); // 801D1BF0
L_801D1BF4:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1BF4
  c->r[0]=0u+0x00000019u; // 801D1BF8
  {uint32_t ea=c->r[2]+0xFFFFBCACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1BFC
  c->r[4]=c->r[31]+0x000008D0u; // 801D1C00
  c->f[1]=-c->f[1]; // 801D1C04
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801D1C08
  c->r[3]=c->r[1]+0x000000E8u; // 801D1C0C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801D1C10
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D1C14
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D1C18
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D1C1C
  c->ctr=c->r[12]; // 801D1C20
  if (true) { c->lr=0x801D1C28u; dispatch(c,c->ctr); } // 801D1C24
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1C28
  c->r[3]=c->r[1]+0x00000040u; // 801D1C2C
  {uint32_t ea=c->r[1]+0x00000104u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1C30
  {uint32_t ea=c->r[1]+0x00000114u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D1C34
  c->lr=0x801D1C3Cu; f_800521A0(c); // 801D1C38
  c->lr=0x801D1C40u; f_80061A4C(c); // 801D1C3C
  c->r[4]=c->r[3]|c->r[3]; // 801D1C40
  c->r[3]=c->r[1]+0x00000034u; // 801D1C44
  c->r[4]=c->r[4]+0x00000384u; // 801D1C48
  c->r[5]=c->r[1]+0x00000040u; // 801D1C4C
  c->lr=0x801D1C54u; f_80064C74(c); // 801D1C50
  c->r[3]=c->r[1]+0x00000034u; // 801D1C54
  c->r[4]=c->r[3]|c->r[3]; // 801D1C58
  c->lr=0x801D1C60u; f_80265750(c); // 801D1C5C
  c->r[3]=c->r[1]+0x000000E8u; // 801D1C60
  c->lr=0x801D1C68u; f_80264680(c); // 801D1C64
  c->r[3]=c->r[31]+0x00002000u; // 801D1C68
  c->r[4]=c->r[1]+0x00000034u; // 801D1C6C
  c->lr=0x801D1C74u; f_800653BC(c); // 801D1C70
  {uint32_t ea=c->r[2]+0xFFFFBCB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1C74
  fcmp(c,0,c->f[1],c->f[0]); // 801D1C78
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D1C7C
  if (!crb(c,2)) { goto L_801D1C94; } // 801D1C80
  c->r[3]=c->r[1]+0x000000E8u; // 801D1C84
  c->r[4]=c->r[31]+0x00002000u; // 801D1C88
  c->lr=0x801D1C90u; f_8007513C(c); // 801D1C8C
  goto L_801D1CF8; // 801D1C90
L_801D1C94:;
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1C94
  fcmp(c,0,c->f[1],c->f[0]); // 801D1C98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D1C9C
  if (!crb(c,2)) { goto L_801D1CB4; } // 801D1CA0
  c->r[3]=c->r[1]+0x000000E8u; // 801D1CA4
  c->r[4]=c->r[31]+0x00002000u; // 801D1CA8
  c->lr=0x801D1CB0u; f_8007513C(c); // 801D1CAC
  goto L_801D1CF8; // 801D1CB0
L_801D1CB4:;
  {uint32_t ea=c->r[2]+0xFFFFBCB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1CB4
  fcmp(c,0,c->f[1],c->f[0]); // 801D1CB8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D1CBC
  if (!crb(c,2)) { goto L_801D1CE0; } // 801D1CC0
  c->r[3]=c->r[1]+0x0000001Cu; // 801D1CC4
  c->r[4]=c->r[31]+0x00002000u; // 801D1CC8
  c->lr=0x801D1CD0u; f_800521B0(c); // 801D1CCC
  c->r[3]=c->r[1]+0x000000E8u; // 801D1CD0
  c->r[4]=c->r[1]+0x0000001Cu; // 801D1CD4
  c->lr=0x801D1CDCu; f_8007513C(c); // 801D1CD8
  goto L_801D1CF8; // 801D1CDC
L_801D1CE0:;
  c->r[3]=c->r[1]+0x00000010u; // 801D1CE0
  c->r[4]=c->r[31]+0x00002000u; // 801D1CE4
  c->lr=0x801D1CECu; f_800521B0(c); // 801D1CE8
  c->r[3]=c->r[1]+0x000000E8u; // 801D1CEC
  c->r[4]=c->r[1]+0x00000010u; // 801D1CF0
  c->lr=0x801D1CF8u; f_8007513C(c); // 801D1CF4
L_801D1CF8:;
  c->r[3]=c->r[1]+0x000000E8u; // 801D1CF8
  c->r[4]=c->r[1]+0x00000040u; // 801D1CFC
  c->lr=0x801D1D04u; f_80032FF4(c); // 801D1D00
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D1D04
  c->r[3]=c->r[31]+0x000008D0u; // 801D1D08
  c->r[4]=c->r[1]+0x000000E8u; // 801D1D0C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D1D10
  c->ctr=c->r[12]; // 801D1D14
  if (true) { c->lr=0x801D1D1Cu; dispatch(c,c->ctr); } // 801D1D18
  goto L_801D1DB4; // 801D1D1C
L_801D1D20:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801D1D20
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1D24
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1D28
  c->lr=0x801D1D30u; f_8016498C(c); // 801D1D2C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1D30
  if (crb(c,2)) { goto L_801D1DB4; } // 801D1D34
  c->r[3]=c->r[31]+0x000008ECu; // 801D1D38
  c->r[4]=c->r[31]+0x00001F51u; // 801D1D3C
  c->lr=0x801D1D44u; f_80075440(c); // 801D1D40
  W32(c->r[30]+0x00000034u,c->r[3]); // 801D1D44
  c->r[5]=c->r[3]|c->r[3]; // 801D1D48
  {uint32_t ea=c->r[2]+0xFFFFBCB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1D4C
  c->r[3]=c->r[31]+0x00000C88u; // 801D1D50
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1D54
  c->r[4]=c->r[31]+0x000008ECu; // 801D1D58
  c->r[6]=0u+0x00000000u; // 801D1D5C
  c->r[7]=0u+0x00000000u; // 801D1D60
  c->lr=0x801D1D68u; f_800BB0C8(c); // 801D1D64
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1D68
  c->r[0]=0u+0x0000001Au; // 801D1D6C
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801D1D70
  {uint32_t ea=c->r[31]+0x00002010u; WF32(ea,c->f[0]);} // 801D1D74
  goto L_801D1DB4; // 801D1D78
L_801D1D7C:;
  c->r[4]=0u+0x804D0000u; // 801D1D7C
  {uint32_t ea=c->r[3]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1D80
  c->r[4]=c->r[4]+0x00003318u; // 801D1D84
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1D88
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D1D8C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801D1D90
  fcmp(c,0,c->f[1],c->f[0]); // 801D1D94
  {uint32_t ea=c->r[3]+0x00002010u; WF32(ea,c->f[1]);} // 801D1D98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D1D9C
  if (!crb(c,2)) { goto L_801D1DB4; } // 801D1DA0
  c->r[0]=0u+0x00000028u; // 801D1DA4
  W16(c->r[3]+0x00001FECu,c->r[0]); // 801D1DA8
  W16(c->r[3]+0x00001FEEu,c->r[0]); // 801D1DAC
  c->lr=0x801D1DB4u; f_800AC668(c); // 801D1DB0
L_801D1DB4:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 801D1DB4
  c->r[0]=R32(c->r[1]+0x00000134u); // 801D1DB8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 801D1DBC
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801D1DC0
  c->r[30]=R32(c->r[1]+0x00000118u); // 801D1DC4
  c->lr=c->r[0]; // 801D1DC8
  c->r[1]=c->r[1]+0x00000130u; // 801D1DCC
  return; // 801D1DD0
}

// fn_801D1DD4
void f_801D1DD4(Ctx* __restrict c) {
  trace_call(0x801D1DD4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1DD4
  c->r[0]=c->lr; // 801D1DD8
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D1DDC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801D1DE0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801D1DE4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 801D1DE8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 801D1DEC
  c->r[11]=c->r[1]+0x00000070u; // 801D1DF0
  c->lr=0x801D1DF8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1DF4
  {uint32_t ea=c->r[3]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1DF8
  c->r[0]=0u+0x43300000u; // 801D1DFC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1E00
  c->r[29]=c->r[3]|c->r[3]; // 801D1E04
  W32(c->r[1]+0x00000048u,c->r[0]); // 801D1E08
  fcmp(c,0,c->f[1],c->f[0]); // 801D1E0C
  W32(c->r[1]+0x00000050u,c->r[0]); // 801D1E10
  if (!crb(c,0)) { goto L_801D1F20; } // 801D1E14
  c->lr=0x801D1E1Cu; f_80291D94(c); // 801D1E18
  c->r[3]=c->r[3]^0x80000000u; // 801D1E1C
  c->r[0]=R32(c->r[29]+0x0000226Cu); // 801D1E20
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801D1E24
  c->r[0]=c->r[0]^0x80000000u; // 801D1E28
  {uint32_t ea=c->r[2]+0xFFFFBC58u; c->f[30]=RF64(ea);} // 801D1E2C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801D1E30
  {uint32_t ea=c->r[2]+0xFFFFBC6Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801D1E34
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 801D1E38
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D1E3C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801D1E40
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 801D1E44
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801D1E48
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D1E4C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D1E50
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 801D1E54
  c->r[30]=R32(c->r[1]+0x0000005Cu); // 801D1E58
  goto L_801D1E9C; // 801D1E5C
L_801D1E60:;
  c->lr=0x801D1E64u; f_80291D94(c); // 801D1E60
  c->r[3]=c->r[3]^0x80000000u; // 801D1E64
  c->r[0]=R32(c->r[29]+0x0000226Cu); // 801D1E68
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801D1E6C
  c->r[0]=c->r[0]^0x80000000u; // 801D1E70
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801D1E74
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D1E78
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 801D1E7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801D1E80
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 801D1E84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801D1E88
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801D1E8C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801D1E90
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 801D1E94
  c->r[30]=R32(c->r[1]+0x0000005Cu); // 801D1E98
L_801D1E9C:;
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801D1E9C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)28); // 801D1EA0
  c->r[5]=R32(c->r[29]+0x0000224Cu); // 801D1EA4
  c->r[4]=c->r[29]+0x000008D0u; // 801D1EA8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D1EAC
  c->r[3]=c->r[1]+0x00000014u; // 801D1EB0
  c->r[31]=c->r[5]+c->r[0]; // 801D1EB4
  c->ctr=c->r[12]; // 801D1EB8
  if (true) { c->lr=0x801D1EC0u; dispatch(c,c->ctr); } // 801D1EBC
  c->r[3]=c->r[1]+0x00000008u; // 801D1EC0
  c->r[4]=c->r[1]+0x00000014u; // 801D1EC4
  c->lr=0x801D1ECCu; f_80032FD8(c); // 801D1EC8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1ECC
  c->r[0]=0u+0x00000000u; // 801D1ED0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1ED4
  c->r[3]=0u+0x00000000u; // 801D1ED8
  fcmp(c,0,c->f[1],c->f[0]); // 801D1EDC
  if (!crb(c,2)) { goto L_801D1EF8; } // 801D1EE0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1EE4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1EE8
  fcmp(c,0,c->f[1],c->f[0]); // 801D1EEC
  if (!crb(c,2)) { goto L_801D1EF8; } // 801D1EF0
  c->r[3]=0u+0x00000001u; // 801D1EF4
L_801D1EF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D1EF8
  if (crb(c,2)) { goto L_801D1F14; } // 801D1EFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D1F00
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D1F04
  fcmp(c,0,c->f[1],c->f[0]); // 801D1F08
  if (!crb(c,2)) { goto L_801D1F14; } // 801D1F0C
  c->r[0]=0u+0x00000001u; // 801D1F10
L_801D1F14:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D1F14
  if (!crb(c,2)) { IRQCHK(c); goto L_801D1E60; } // 801D1F18
  goto L_801D1F2C; // 801D1F1C
L_801D1F20:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801D1F20
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 801D1F24
  c->r[30]=R32(c->r[1]+0x0000005Cu); // 801D1F28
L_801D1F2C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)28); // 801D1F2C
  c->r[4]=R32(c->r[29]+0x0000224Cu); // 801D1F30
  c->r[3]=c->r[29]+0x00002000u; // 801D1F34
  c->r[4]=c->r[4]+c->r[0]; // 801D1F38
  c->lr=0x801D1F40u; f_8003F468(c); // 801D1F3C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801D1F40
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801D1F44
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 801D1F48
  c->r[11]=c->r[1]+0x00000070u; // 801D1F4C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 801D1F50
  c->lr=0x801D1F58u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1F54
  c->r[0]=R32(c->r[1]+0x00000094u); // 801D1F58
  c->lr=c->r[0]; // 801D1F5C
  c->r[1]=c->r[1]+0x00000090u; // 801D1F60
  return; // 801D1F64
}

// fn_801D1F68
void f_801D1F68(Ctx* __restrict c) {
  trace_call(0x801D1F68u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1F68
  c->r[0]=c->lr; // 801D1F6C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801D1F70
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801D1F74
  c->r[31]=c->r[4]|c->r[4]; // 801D1F78
  W32(c->r[1]+0x00000098u,c->r[30]); // 801D1F7C
  c->r[30]=c->r[3]|c->r[3]; // 801D1F80
  c->r[3]=c->r[1]+0x00000018u; // 801D1F84
  c->r[4]=c->r[30]+0x00002000u; // 801D1F88
  c->lr=0x801D1F90u; f_8003F484(c); // 801D1F8C
  c->r[4]=c->r[3]|c->r[3]; // 801D1F90
  c->r[3]=c->r[30]|c->r[30]; // 801D1F94
  c->r[5]=c->r[1]+0x00000060u; // 801D1F98
  c->r[6]=c->r[1]+0x00000008u; // 801D1F9C
  c->lr=0x801D1FA4u; f_801C3F00(c); // 801D1FA0
  cmps(c,0,(int32_t)c->r[3],0); // 801D1FA4
  if (crb(c,2)) { goto L_801D2008; } // 801D1FA8
  c->r[3]=c->r[1]+0x00000060u; // 801D1FAC
  c->lr=0x801D1FB4u; f_801C4B60(c); // 801D1FB0
  cmps(c,0,(int32_t)c->r[3],0); // 801D1FB4
  if (!crb(c,2)) { goto L_801D1FD4; } // 801D1FB8
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D1FBC
  c->r[3]=c->r[30]+0x000008D0u; // 801D1FC0
  c->r[4]=c->r[1]+0x00000060u; // 801D1FC4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D1FC8
  c->ctr=c->r[12]; // 801D1FCC
  if (true) { c->lr=0x801D1FD4u; dispatch(c,c->ctr); } // 801D1FD0
L_801D1FD4:;
  c->r[0]=0u+0x0000001Eu; // 801D1FD4
  c->r[3]=c->r[30]|c->r[30]; // 801D1FD8
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801D1FDC
  c->lr=0x801D1FE4u; f_800AC8F8(c); // 801D1FE0
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 801D1FE4
  c->r[4]=0u+0x00000008u; // 801D1FE8
  c->r[5]=0u+0x00000000u; // 801D1FEC
  c->r[6]=0u+0x00000000u; // 801D1FF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D1FF4
  c->r[12]=R32(c->r[12]+0x00000028u); // 801D1FF8
  c->ctr=c->r[12]; // 801D1FFC
  if (true) { c->lr=0x801D2004u; dispatch(c,c->ctr); } // 801D2000
  goto L_801D2030; // 801D2004
L_801D2008:;
  c->r[3]=c->r[1]+0x00000060u; // 801D2008
  c->lr=0x801D2010u; f_801C4B60(c); // 801D200C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2010
  if (!crb(c,2)) { goto L_801D2030; } // 801D2014
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2018
  c->r[3]=c->r[30]+0x000008D0u; // 801D201C
  c->r[4]=c->r[1]+0x00000060u; // 801D2020
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2024
  c->ctr=c->r[12]; // 801D2028
  if (true) { c->lr=0x801D2030u; dispatch(c,c->ctr); } // 801D202C
L_801D2030:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D2030
  cmps(c,0,(int32_t)c->r[0],0); // 801D2034
  if (crb(c,2)) { goto L_801D20B8; } // 801D2038
  c->r[0]=R8(c->r[30]+0x0000200Cu); // 801D203C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2040
  if (!crb(c,2)) { goto L_801D2118; } // 801D2044
  {uint32_t ea=c->r[30]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2048
  {uint32_t ea=c->r[2]+0xFFFFBCACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D204C
  fcmp(c,0,c->f[1],c->f[0]); // 801D2050
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D2054
  if (!crb(c,2)) { goto L_801D2118; } // 801D2058
  c->r[3]=R32(c->r[30]+0x00000974u); // 801D205C
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2060
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D2064
  c->lr=0x801D206Cu; f_800C57C4(c); // 801D2068
  cmps(c,0,(int32_t)c->r[3],0); // 801D206C
  if (crb(c,2)) { goto L_801D2118; } // 801D2070
  c->r[3]=c->r[30]+0x000008ECu; // 801D2074
  c->r[4]=c->r[30]+0x000021FCu; // 801D2078
  c->lr=0x801D2080u; f_80075440(c); // 801D207C
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D2080
  c->r[5]=c->r[3]|c->r[3]; // 801D2084
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2088
  c->r[3]=c->r[30]+0x00000C88u; // 801D208C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2090
  c->r[4]=c->r[30]+0x000008ECu; // 801D2094
  c->r[6]=0u+0x00000000u; // 801D2098
  c->r[7]=0u+0x00000000u; // 801D209C
  c->lr=0x801D20A4u; f_800BB0C8(c); // 801D20A0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D20A4
  c->r[0]=0u+0x00000001u; // 801D20A8
  W8(c->r[30]+0x0000200Cu,c->r[0]); // 801D20AC
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801D20B0
  goto L_801D2118; // 801D20B4
L_801D20B8:;
  c->r[0]=R8(c->r[30]+0x0000200Cu); // 801D20B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D20BC
  if (crb(c,2)) { goto L_801D2118; } // 801D20C0
  {uint32_t ea=c->r[30]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D20C4
  {uint32_t ea=c->r[2]+0xFFFFBCACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D20C8
  fcmp(c,0,c->f[1],c->f[0]); // 801D20CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D20D0
  if (!crb(c,2)) { goto L_801D2118; } // 801D20D4
  c->r[3]=c->r[30]+0x000008ECu; // 801D20D8
  c->r[4]=c->r[30]+0x00001F51u; // 801D20DC
  c->lr=0x801D20E4u; f_80075440(c); // 801D20E0
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D20E4
  c->r[5]=c->r[3]|c->r[3]; // 801D20E8
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D20EC
  c->r[3]=c->r[30]+0x00000C88u; // 801D20F0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D20F4
  c->r[4]=c->r[30]+0x000008ECu; // 801D20F8
  c->r[6]=0u+0x00000000u; // 801D20FC
  c->r[7]=0u+0x00000000u; // 801D2100
  c->lr=0x801D2108u; f_800BB0C8(c); // 801D2104
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2108
  c->r[0]=0u+0x00000000u; // 801D210C
  W8(c->r[30]+0x0000200Cu,c->r[0]); // 801D2110
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801D2114
L_801D2118:;
  c->r[31]=0u+0x804D0000u; // 801D2118
  {uint32_t ea=c->r[30]+0x00002010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D211C
  c->r[31]=c->r[31]+0x00003318u; // 801D2120
  c->r[4]=c->r[30]+0x000008D0u; // 801D2124
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2128
  c->r[3]=c->r[1]+0x00000030u; // 801D212C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801D2130
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801D2134
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2138
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D213C
  c->ctr=c->r[12]; // 801D2140
  if (true) { c->lr=0x801D2148u; dispatch(c,c->ctr); } // 801D2144
  c->r[3]=c->r[1]+0x0000000Cu; // 801D2148
  c->r[4]=c->r[1]+0x00000030u; // 801D214C
  c->lr=0x801D2154u; f_80032FD8(c); // 801D2150
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2154
  c->r[3]=c->r[1]+0x00000024u; // 801D2158
  c->r[5]=c->r[30]+0x00002000u; // 801D215C
  c->lr=0x801D2164u; f_80064C74(c); // 801D2160
  c->r[3]=c->r[1]+0x00000024u; // 801D2164
  c->lr=0x801D216Cu; f_802657AC(c); // 801D2168
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D216C
  fcmp(c,0,c->f[1],c->f[0]); // 801D2170
  if (!crb(c,0)) { goto L_801D21AC; } // 801D2174
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2178
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D217C
  fcmp(c,0,c->f[1],c->f[0]); // 801D2180
  if (!crb(c,1)) { goto L_801D2194; } // 801D2184
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2188
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D218C
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2190
L_801D2194:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2194
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2198
  fcmp(c,0,c->f[1],c->f[0]); // 801D219C
  if (!crb(c,0)) { goto L_801D21DC; } // 801D21A0
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D21A4
  goto L_801D21DC; // 801D21A8
L_801D21AC:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D21AC
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D21B0
  fcmp(c,0,c->f[1],c->f[0]); // 801D21B4
  if (!crb(c,0)) { goto L_801D21C8; } // 801D21B8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D21BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D21C0
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D21C4
L_801D21C8:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D21C8
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D21CC
  fcmp(c,0,c->f[1],c->f[0]); // 801D21D0
  if (!crb(c,1)) { goto L_801D21DC; } // 801D21D4
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D21D8
L_801D21DC:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801D21DC
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801D21E0
  c->r[30]=R32(c->r[1]+0x00000098u); // 801D21E4
  c->lr=c->r[0]; // 801D21E8
  c->r[1]=c->r[1]+0x000000A0u; // 801D21EC
  return; // 801D21F0
}

// fn_801D21F4
void f_801D21F4(Ctx* __restrict c) {
  trace_call(0x801D21F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D21F4
  c->r[0]=c->lr; // 801D21F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D21FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2200
  c->r[31]=c->r[3]|c->r[3]; // 801D2204
  c->lr=0x801D220Cu; f_801D014C(c); // 801D2208
  c->r[3]=R32(c->r[31]+0x00000974u); // 801D220C
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2210
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D2214
  c->lr=0x801D221Cu; f_80165B9C(c); // 801D2218
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D221C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2220
  c->lr=c->r[0]; // 801D2224
  c->r[1]=c->r[1]+0x00000010u; // 801D2228
  return; // 801D222C
}

// fn_801D2230
void f_801D2230(Ctx* __restrict c) {
  trace_call(0x801D2230u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2230
  c->r[0]=c->lr; // 801D2234
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D2238
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D223C
  c->r[31]=c->r[3]|c->r[3]; // 801D2240
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D2244
  cmps(c,0,(int32_t)c->r[0],21); // 801D2248
  if (crb(c,2)) { goto L_801D2254; } // 801D224C
  goto L_801D22C4; // 801D2250
L_801D2254:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2254
  c->r[3]=c->r[1]+0x00000008u; // 801D2258
  c->r[4]=c->r[31]+0x00002090u; // 801D225C
  c->lr=0x801D2264u; f_801C44B8(c); // 801D2260
  c->r[3]=c->r[1]+0x00000008u; // 801D2264
  c->lr=0x801D226Cu; f_801C4B60(c); // 801D2268
  cmps(c,0,(int32_t)c->r[3],0); // 801D226C
  if (!crb(c,2)) { goto L_801D228C; } // 801D2270
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D2274
  c->r[3]=c->r[31]+0x000008D0u; // 801D2278
  c->r[4]=c->r[1]+0x00000008u; // 801D227C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2280
  c->ctr=c->r[12]; // 801D2284
  if (true) { c->lr=0x801D228Cu; dispatch(c,c->ctr); } // 801D2288
L_801D228C:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D228C
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2290
  fcmp(c,0,c->f[1],c->f[0]); // 801D2294
  if (!crb(c,0)) { goto L_801D22B0; } // 801D2298
  c->r[3]=0u+0x804D0000u; // 801D229C
  c->r[3]=c->r[3]+0x00003318u; // 801D22A0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D22A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D22A8
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D22AC
L_801D22B0:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D22B0
  {uint32_t ea=c->r[31]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D22B4
  fcmp(c,0,c->f[1],c->f[0]); // 801D22B8
  if (!crb(c,1)) { goto L_801D22C4; } // 801D22BC
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D22C0
L_801D22C4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D22C4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D22C8
  c->lr=c->r[0]; // 801D22CC
  c->r[1]=c->r[1]+0x00000040u; // 801D22D0
  return; // 801D22D4
}

// fn_801D22D8
void f_801D22D8(Ctx* __restrict c) {
  trace_call(0x801D22D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D22D8
  c->r[0]=c->lr; // 801D22DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D22E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D22E4
  c->r[31]=c->r[3]|c->r[3]; // 801D22E8
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D22EC
  cmps(c,0,(int32_t)c->r[0],22); // 801D22F0
  if (crb(c,2)) { goto L_801D2324; } // 801D22F4
  if (!crb(c,0)) { goto L_801D2328; } // 801D22F8
  cmps(c,0,(int32_t)c->r[0],21); // 801D22FC
  if (!crb(c,0)) { goto L_801D2308; } // 801D2300
  goto L_801D2328; // 801D2304
L_801D2308:;
  c->r[3]=c->r[3]+0x00002090u; // 801D2308
  c->lr=0x801D2310u; f_801C4CF8(c); // 801D230C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2310
  if (crb(c,2)) { goto L_801D2328; } // 801D2314
  c->r[3]=c->r[31]|c->r[31]; // 801D2318
  c->lr=0x801D2320u; f_800AC3A4(c); // 801D231C
  goto L_801D2328; // 801D2320
L_801D2324:;
  c->lr=0x801D2328u; f_800AC3A4(c); // 801D2324
L_801D2328:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2328
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D232C
  c->lr=c->r[0]; // 801D2330
  c->r[1]=c->r[1]+0x00000010u; // 801D2334
  return; // 801D2338
}

// fn_801D233C
void f_801D233C(Ctx* __restrict c) {
  trace_call(0x801D233Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D233C
  c->r[0]=c->lr; // 801D2340
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D2344
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801D2348
  c->r[31]=c->r[4]|c->r[4]; // 801D234C
  W32(c->r[1]+0x00000058u,c->r[30]); // 801D2350
  c->r[30]=c->r[3]|c->r[3]; // 801D2354
  c->r[3]=c->r[3]+0x000008ECu; // 801D2358
  c->r[4]=c->r[30]+0x00002224u; // 801D235C
  c->lr=0x801D2364u; f_80075440(c); // 801D2360
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801D2364
  c->r[5]=c->r[3]|c->r[3]; // 801D2368
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D236C
  c->r[3]=c->r[30]+0x00000C88u; // 801D2370
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2374
  c->r[4]=c->r[30]+0x000008ECu; // 801D2378
  c->r[6]=0u+0x00000000u; // 801D237C
  c->r[7]=0u+0x00000000u; // 801D2380
  c->lr=0x801D2388u; f_800BB0C8(c); // 801D2384
  c->r[0]=0u+0x00000032u; // 801D2388
  c->r[4]=c->r[30]+0x000008D0u; // 801D238C
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801D2390
  c->r[3]=c->r[1]+0x00000020u; // 801D2394
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2398
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D239C
  c->ctr=c->r[12]; // 801D23A0
  if (true) { c->lr=0x801D23A8u; dispatch(c,c->ctr); } // 801D23A4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D23A8
  c->r[3]=c->r[1]+0x00000014u; // 801D23AC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D23B0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D23B4
  c->lr=0x801D23BCu; f_800521A0(c); // 801D23B8
  c->lr=0x801D23C0u; f_80061A4C(c); // 801D23BC
  c->r[4]=c->r[3]|c->r[3]; // 801D23C0
  c->r[3]=c->r[1]+0x00000008u; // 801D23C4
  c->r[4]=c->r[4]+0x00000384u; // 801D23C8
  c->r[5]=c->r[1]+0x00000014u; // 801D23CC
  c->lr=0x801D23D4u; f_80064C74(c); // 801D23D0
  c->r[3]=c->r[1]+0x00000008u; // 801D23D4
  c->lr=0x801D23DCu; f_80065368(c); // 801D23D8
  cmps(c,0,(int32_t)c->r[3],0); // 801D23DC
  if (!crb(c,2)) { goto L_801D23F0; } // 801D23E0
  c->r[3]=c->r[1]+0x00000008u; // 801D23E4
  c->r[4]=c->r[3]|c->r[3]; // 801D23E8
  c->lr=0x801D23F0u; f_80265750(c); // 801D23EC
L_801D23F0:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D23F0
  c->r[3]=c->r[1]+0x00000008u; // 801D23F4
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D23F8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D23FC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D2400
  c->lr=0x801D2408u; f_80065368(c); // 801D2404
  cmps(c,0,(int32_t)c->r[3],0); // 801D2408
  if (!crb(c,2)) { goto L_801D241C; } // 801D240C
  c->r[3]=c->r[1]+0x00000008u; // 801D2410
  c->r[4]=c->r[3]|c->r[3]; // 801D2414
  c->lr=0x801D241Cu; f_80265750(c); // 801D2418
L_801D241C:;
  c->r[3]=c->r[1]+0x00000020u; // 801D241C
  c->lr=0x801D2424u; f_80264680(c); // 801D2420
  c->r[3]=c->r[1]+0x00000020u; // 801D2424
  c->r[4]=c->r[1]+0x00000008u; // 801D2428
  c->lr=0x801D2430u; f_8007513C(c); // 801D242C
  c->r[3]=c->r[1]+0x00000020u; // 801D2430
  c->r[4]=c->r[1]+0x00000014u; // 801D2434
  c->lr=0x801D243Cu; f_80032FF4(c); // 801D2438
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D243C
  c->r[3]=c->r[30]+0x000008D0u; // 801D2440
  c->r[4]=c->r[1]+0x00000020u; // 801D2444
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2448
  c->ctr=c->r[12]; // 801D244C
  if (true) { c->lr=0x801D2454u; dispatch(c,c->ctr); } // 801D2450
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D2454
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801D2458
  c->r[30]=R32(c->r[1]+0x00000058u); // 801D245C
  c->lr=c->r[0]; // 801D2460
  c->r[1]=c->r[1]+0x00000060u; // 801D2464
  return; // 801D2468
}

// fn_801D246C
void f_801D246C(Ctx* __restrict c) {
  trace_call(0x801D246Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D246C
  c->r[0]=c->lr; // 801D2470
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D2474
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801D2478
  c->r[31]=c->r[3]|c->r[3]; // 801D247C
  c->r[3]=c->r[1]+0x00000030u; // 801D2480
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D2484
  c->r[4]=c->r[31]+0x000008D0u; // 801D2488
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D248C
  c->ctr=c->r[12]; // 801D2490
  if (true) { c->lr=0x801D2498u; dispatch(c,c->ctr); } // 801D2494
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2498
  c->r[3]=c->r[1]+0x00000024u; // 801D249C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D24A0
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D24A4
  c->lr=0x801D24ACu; f_800521A0(c); // 801D24A8
  c->lr=0x801D24B0u; f_80061A4C(c); // 801D24AC
  c->r[4]=c->r[3]|c->r[3]; // 801D24B0
  c->r[3]=c->r[1]+0x00000018u; // 801D24B4
  c->r[4]=c->r[4]+0x00000384u; // 801D24B8
  c->r[5]=c->r[1]+0x00000024u; // 801D24BC
  c->lr=0x801D24C4u; f_80064C74(c); // 801D24C0
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D24C4
  c->r[3]=c->r[31]|c->r[31]; // 801D24C8
  c->r[4]=c->r[1]+0x00000008u; // 801D24CC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801D24D0
  c->lr=0x801D24D8u; f_801C4438(c); // 801D24D4
  c->r[3]=c->r[1]+0x00000018u; // 801D24D8
  c->lr=0x801D24E0u; f_80065368(c); // 801D24DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D24E0
  if (!crb(c,2)) { goto L_801D24F4; } // 801D24E4
  c->r[3]=c->r[1]+0x00000018u; // 801D24E8
  c->r[4]=c->r[3]|c->r[3]; // 801D24EC
  c->lr=0x801D24F4u; f_80265750(c); // 801D24F0
L_801D24F4:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D24F4
  c->r[3]=c->r[1]+0x0000000Cu; // 801D24F8
  c->r[4]=c->r[1]+0x00000018u; // 801D24FC
  c->lr=0x801D2504u; f_800FACB4(c); // 801D2500
  c->r[3]=c->r[1]+0x00000024u; // 801D2504
  c->r[5]=c->r[1]+0x0000000Cu; // 801D2508
  c->r[4]=c->r[3]|c->r[3]; // 801D250C
  c->lr=0x801D2514u; f_80064C74(c); // 801D2510
  c->r[3]=c->r[1]+0x00000030u; // 801D2514
  c->r[4]=c->r[1]+0x00000024u; // 801D2518
  c->lr=0x801D2520u; f_80032FF4(c); // 801D251C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D2520
  c->r[3]=c->r[31]+0x000008D0u; // 801D2524
  c->r[4]=c->r[1]+0x00000030u; // 801D2528
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D252C
  c->ctr=c->r[12]; // 801D2530
  if (true) { c->lr=0x801D2538u; dispatch(c,c->ctr); } // 801D2534
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2538
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D253C
  fcmp(c,0,c->f[1],c->f[0]); // 801D2540
  if (!crb(c,1)) { goto L_801D2560; } // 801D2544
  c->r[3]=0u+0x804D0000u; // 801D2548
  {uint32_t ea=c->r[2]+0xFFFFBC90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D254C
  c->r[3]=c->r[3]+0x00003318u; // 801D2550
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2554
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[0],c->f[2],-c->f[1])); // 801D2558
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D255C
L_801D2560:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2560
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2564
  fcmp(c,0,c->f[1],c->f[0]); // 801D2568
  if (!crb(c,0)) { goto L_801D2574; } // 801D256C
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2570
L_801D2574:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D2574
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801D2578
  c->lr=c->r[0]; // 801D257C
  c->r[1]=c->r[1]+0x00000070u; // 801D2580
  return; // 801D2584
}

// fn_801D2588
void f_801D2588(Ctx* __restrict c) {
  trace_call(0x801D2588u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2588
  c->r[0]=c->lr; // 801D258C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2590
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2594
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2598
  c->r[31]=c->r[4]|c->r[4]; // 801D259C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D25A0
  c->r[30]=c->r[3]|c->r[3]; // 801D25A4
  c->r[5]=R32(c->r[3]+0x00000974u); // 801D25A8
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D25AC
  c->lr=0x801D25B4u; f_8016498C(c); // 801D25B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D25B4
  if (crb(c,2)) { goto L_801D25FC; } // 801D25B8
  c->r[3]=c->r[30]+0x000008ECu; // 801D25BC
  c->r[4]=c->r[30]+0x00001F51u; // 801D25C0
  c->lr=0x801D25C8u; f_80075440(c); // 801D25C4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801D25C8
  c->r[5]=c->r[3]|c->r[3]; // 801D25CC
  {uint32_t ea=c->r[2]+0xFFFFBCB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D25D0
  c->r[3]=c->r[30]+0x00000C88u; // 801D25D4
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D25D8
  c->r[4]=c->r[30]+0x000008ECu; // 801D25DC
  c->r[6]=0u+0x00000000u; // 801D25E0
  c->r[7]=0u+0x00000000u; // 801D25E4
  c->lr=0x801D25ECu; f_800BB0C8(c); // 801D25E8
  c->r[0]=0u+0x00000014u; // 801D25EC
  c->r[3]=c->r[30]|c->r[30]; // 801D25F0
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801D25F4
  c->lr=0x801D25FCu; f_800AC3A4(c); // 801D25F8
L_801D25FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D25FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2600
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2604
  c->lr=c->r[0]; // 801D2608
  c->r[1]=c->r[1]+0x00000010u; // 801D260C
  return; // 801D2610
}

// fn_801D2614
void f_801D2614(Ctx* __restrict c) {
  trace_call(0x801D2614u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2614
  c->r[0]=c->lr; // 801D2618
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D261C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801D2620
  c->r[31]=c->r[4]|c->r[4]; // 801D2624
  W32(c->r[1]+0x00000058u,c->r[30]); // 801D2628
  c->r[30]=c->r[3]|c->r[3]; // 801D262C
  c->r[3]=c->r[3]+0x000008ECu; // 801D2630
  c->r[4]=c->r[30]+0x00002224u; // 801D2634
  c->lr=0x801D263Cu; f_80075440(c); // 801D2638
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D263C
  c->r[5]=c->r[3]|c->r[3]; // 801D2640
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2644
  c->r[3]=c->r[30]+0x00000C88u; // 801D2648
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D264C
  c->r[4]=c->r[30]+0x000008ECu; // 801D2650
  c->r[6]=0u+0x00000000u; // 801D2654
  c->r[7]=0u+0x00000000u; // 801D2658
  c->lr=0x801D2660u; f_800BB0C8(c); // 801D265C
  c->r[0]=0u+0x00000032u; // 801D2660
  c->r[4]=c->r[30]+0x000008D0u; // 801D2664
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801D2668
  c->r[3]=c->r[1]+0x00000020u; // 801D266C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2670
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D2674
  c->ctr=c->r[12]; // 801D2678
  if (true) { c->lr=0x801D2680u; dispatch(c,c->ctr); } // 801D267C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2680
  c->r[3]=c->r[1]+0x00000014u; // 801D2684
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2688
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D268C
  c->lr=0x801D2694u; f_800521A0(c); // 801D2690
  c->lr=0x801D2698u; f_80061A4C(c); // 801D2694
  c->r[4]=c->r[3]|c->r[3]; // 801D2698
  c->r[3]=c->r[1]+0x00000008u; // 801D269C
  c->r[4]=c->r[4]+0x00000384u; // 801D26A0
  c->r[5]=c->r[1]+0x00000014u; // 801D26A4
  c->lr=0x801D26ACu; f_80064C74(c); // 801D26A8
  c->r[3]=c->r[1]+0x00000008u; // 801D26AC
  c->lr=0x801D26B4u; f_80065368(c); // 801D26B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D26B4
  if (!crb(c,2)) { goto L_801D26C8; } // 801D26B8
  c->r[3]=c->r[1]+0x00000008u; // 801D26BC
  c->r[4]=c->r[3]|c->r[3]; // 801D26C0
  c->lr=0x801D26C8u; f_80265750(c); // 801D26C4
L_801D26C8:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D26C8
  c->r[3]=c->r[1]+0x00000008u; // 801D26CC
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D26D0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D26D4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D26D8
  c->lr=0x801D26E0u; f_80065368(c); // 801D26DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D26E0
  if (!crb(c,2)) { goto L_801D26F4; } // 801D26E4
  c->r[3]=c->r[1]+0x00000008u; // 801D26E8
  c->r[4]=c->r[3]|c->r[3]; // 801D26EC
  c->lr=0x801D26F4u; f_80265750(c); // 801D26F0
L_801D26F4:;
  c->r[3]=c->r[1]+0x00000020u; // 801D26F4
  c->lr=0x801D26FCu; f_80264680(c); // 801D26F8
  c->r[3]=c->r[1]+0x00000020u; // 801D26FC
  c->r[4]=c->r[1]+0x00000008u; // 801D2700
  c->lr=0x801D2708u; f_8007513C(c); // 801D2704
  c->r[3]=c->r[1]+0x00000020u; // 801D2708
  c->r[4]=c->r[1]+0x00000014u; // 801D270C
  c->lr=0x801D2714u; f_80032FF4(c); // 801D2710
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2714
  c->r[3]=c->r[30]+0x000008D0u; // 801D2718
  c->r[4]=c->r[1]+0x00000020u; // 801D271C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2720
  c->ctr=c->r[12]; // 801D2724
  if (true) { c->lr=0x801D272Cu; dispatch(c,c->ctr); } // 801D2728
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D272C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801D2730
  c->r[30]=R32(c->r[1]+0x00000058u); // 801D2734
  c->lr=c->r[0]; // 801D2738
  c->r[1]=c->r[1]+0x00000060u; // 801D273C
  return; // 801D2740
}

// fn_801D2744
void f_801D2744(Ctx* __restrict c) {
  trace_call(0x801D2744u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2744
  c->r[0]=c->lr; // 801D2748
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D274C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801D2750
  c->r[31]=c->r[3]|c->r[3]; // 801D2754
  c->r[3]=c->r[1]+0x00000030u; // 801D2758
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D275C
  c->r[4]=c->r[31]+0x000008D0u; // 801D2760
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D2764
  c->ctr=c->r[12]; // 801D2768
  if (true) { c->lr=0x801D2770u; dispatch(c,c->ctr); } // 801D276C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2770
  c->r[3]=c->r[1]+0x00000024u; // 801D2774
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2778
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D277C
  c->lr=0x801D2784u; f_800521A0(c); // 801D2780
  c->lr=0x801D2788u; f_80061A4C(c); // 801D2784
  c->r[4]=c->r[3]|c->r[3]; // 801D2788
  c->r[3]=c->r[1]+0x00000018u; // 801D278C
  c->r[4]=c->r[4]+0x00000384u; // 801D2790
  c->r[5]=c->r[1]+0x00000024u; // 801D2794
  c->lr=0x801D279Cu; f_80064C74(c); // 801D2798
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D279C
  c->r[3]=c->r[31]|c->r[31]; // 801D27A0
  c->r[4]=c->r[1]+0x00000008u; // 801D27A4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801D27A8
  c->lr=0x801D27B0u; f_801C4438(c); // 801D27AC
  c->r[3]=c->r[1]+0x00000018u; // 801D27B0
  c->lr=0x801D27B8u; f_80065368(c); // 801D27B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D27B8
  if (!crb(c,2)) { goto L_801D27CC; } // 801D27BC
  c->r[3]=c->r[1]+0x00000018u; // 801D27C0
  c->r[4]=c->r[3]|c->r[3]; // 801D27C4
  c->lr=0x801D27CCu; f_80265750(c); // 801D27C8
L_801D27CC:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D27CC
  c->r[3]=c->r[1]+0x0000000Cu; // 801D27D0
  c->r[4]=c->r[1]+0x00000018u; // 801D27D4
  c->lr=0x801D27DCu; f_800FACB4(c); // 801D27D8
  c->r[3]=c->r[1]+0x00000024u; // 801D27DC
  c->r[5]=c->r[1]+0x0000000Cu; // 801D27E0
  c->r[4]=c->r[3]|c->r[3]; // 801D27E4
  c->lr=0x801D27ECu; f_80064C74(c); // 801D27E8
  c->r[3]=c->r[1]+0x00000030u; // 801D27EC
  c->r[4]=c->r[1]+0x00000024u; // 801D27F0
  c->lr=0x801D27F8u; f_80032FF4(c); // 801D27F4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D27F8
  c->r[3]=c->r[31]+0x000008D0u; // 801D27FC
  c->r[4]=c->r[1]+0x00000030u; // 801D2800
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2804
  c->ctr=c->r[12]; // 801D2808
  if (true) { c->lr=0x801D2810u; dispatch(c,c->ctr); } // 801D280C
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2810
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2814
  fcmp(c,0,c->f[1],c->f[0]); // 801D2818
  if (!crb(c,1)) { goto L_801D2838; } // 801D281C
  c->r[3]=0u+0x804D0000u; // 801D2820
  {uint32_t ea=c->r[2]+0xFFFFBC90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2824
  c->r[3]=c->r[3]+0x00003318u; // 801D2828
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D282C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[0],c->f[2],-c->f[1])); // 801D2830
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2834
L_801D2838:;
  {uint32_t ea=c->r[31]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2838
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D283C
  fcmp(c,0,c->f[1],c->f[0]); // 801D2840
  if (!crb(c,0)) { goto L_801D284C; } // 801D2844
  {uint32_t ea=c->r[31]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2848
L_801D284C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D284C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801D2850
  c->lr=c->r[0]; // 801D2854
  c->r[1]=c->r[1]+0x00000070u; // 801D2858
  return; // 801D285C
}

// fn_801D2860
void f_801D2860(Ctx* __restrict c) {
  trace_call(0x801D2860u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2860
  c->r[0]=c->lr; // 801D2864
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2868
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D286C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2870
  c->r[31]=c->r[4]|c->r[4]; // 801D2874
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2878
  c->r[30]=c->r[3]|c->r[3]; // 801D287C
  c->r[5]=R32(c->r[3]+0x00000974u); // 801D2880
  c->r[3]=R32(c->r[5]+0x00000000u); // 801D2884
  c->lr=0x801D288Cu; f_8016498C(c); // 801D2888
  cmps(c,0,(int32_t)c->r[3],0); // 801D288C
  if (crb(c,2)) { goto L_801D28DC; } // 801D2890
  c->r[3]=c->r[30]+0x000008ECu; // 801D2894
  c->r[4]=c->r[30]+0x00001F51u; // 801D2898
  c->lr=0x801D28A0u; f_80075440(c); // 801D289C
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D28A0
  c->r[5]=c->r[3]|c->r[3]; // 801D28A4
  {uint32_t ea=c->r[2]+0xFFFFBCB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D28A8
  c->r[3]=c->r[30]+0x00000C88u; // 801D28AC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D28B0
  c->r[4]=c->r[30]+0x000008ECu; // 801D28B4
  c->r[6]=0u+0x00000000u; // 801D28B8
  c->r[7]=0u+0x00000000u; // 801D28BC
  c->lr=0x801D28C4u; f_800BB0C8(c); // 801D28C0
  c->r[0]=0u+0x00000064u; // 801D28C4
  c->r[3]=c->r[30]|c->r[30]; // 801D28C8
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801D28CC
  c->r[4]=0u+0x00000000u; // 801D28D0
  c->r[5]=0u+0x00000001u; // 801D28D4
  c->lr=0x801D28DCu; f_80076080(c); // 801D28D8
L_801D28DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D28DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D28E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D28E4
  c->lr=c->r[0]; // 801D28E8
  c->r[1]=c->r[1]+0x00000010u; // 801D28EC
  return; // 801D28F0
}

// fn_801D28F4
void f_801D28F4(Ctx* __restrict c) {
  trace_call(0x801D28F4u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D28F4
  c->r[0]=c->lr; // 801D28F8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801D28FC
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801D2900
  c->r[31]=c->r[4]|c->r[4]; // 801D2904
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801D2908
  c->r[30]=c->r[3]|c->r[3]; // 801D290C
  c->r[0]=R16(c->r[3]+0x00001FECu); // 801D2910
  cmps(c,0,(int32_t)c->r[0],30); // 801D2914
  if (crb(c,2)) { goto L_801D2920; } // 801D2918
  goto L_801D2924; // 801D291C
L_801D2920:;
  c->lr=0x801D2924u; f_801C2758(c); // 801D2920
L_801D2924:;
  c->r[0]=R8(c->r[30]+0x00002278u); // 801D2924
  cmps(c,0,(int32_t)c->r[0],0); // 801D2928
  if (crb(c,2)) { goto L_801D2970; } // 801D292C
  c->r[3]=c->r[30]+0x000008ECu; // 801D2930
  c->r[4]=c->r[30]+0x00002238u; // 801D2934
  c->lr=0x801D293Cu; f_80075440(c); // 801D2938
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D293C
  c->r[5]=c->r[3]|c->r[3]; // 801D2940
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2944
  c->r[3]=c->r[30]+0x00000C88u; // 801D2948
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D294C
  c->r[4]=c->r[30]+0x000008ECu; // 801D2950
  c->r[6]=0u+0x00000000u; // 801D2954
  c->r[7]=0u+0x00000000u; // 801D2958
  c->lr=0x801D2960u; f_800BB0C8(c); // 801D295C
  c->r[3]=0u+0x00000046u; // 801D2960
  c->r[0]=0u+0x00000000u; // 801D2964
  W16(c->r[30]+0x00001FEEu,c->r[3]); // 801D2968
  W8(c->r[30]+0x00002278u,c->r[0]); // 801D296C
L_801D2970:;
  c->r[0]=R16(c->r[30]+0x00001FEEu); // 801D2970
  cmps(c,0,(int32_t)c->r[0],70); // 801D2974
  if (crb(c,2)) { goto L_801D2A78; } // 801D2978
  if (!crb(c,0)) { goto L_801D2AC8; } // 801D297C
  cmps(c,0,(int32_t)c->r[0],30); // 801D2980
  if (crb(c,2)) { goto L_801D298C; } // 801D2984
  goto L_801D2AC8; // 801D2988
L_801D298C:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D298C
  c->r[4]=c->r[30]+0x000008D0u; // 801D2990
  c->r[3]=c->r[1]+0x00000074u; // 801D2994
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D2998
  c->ctr=c->r[12]; // 801D299C
  if (true) { c->lr=0x801D29A4u; dispatch(c,c->ctr); } // 801D29A0
  c->r[3]=c->r[1]+0x00000008u; // 801D29A4
  c->r[4]=c->r[1]+0x00000074u; // 801D29A8
  c->lr=0x801D29B0u; f_80029EC4(c); // 801D29AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D29B0
  {uint32_t ea=c->r[2]+0xFFFFBCBCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D29B4
  fcmp(c,0,c->f[1],c->f[3]); // 801D29B8
  if (!crb(c,0)) { goto L_801D2A18; } // 801D29BC
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[3]); // 801D29C0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D29C4
  fcmp(c,0,c->f[2],c->f[0]); // 801D29C8
  if (!crb(c,1)) { goto L_801D29D4; } // 801D29CC
  c->f[3]=-c->f[1]; // 801D29D0
L_801D29D4:;
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D29D4
  c->r[3]=c->r[1]+0x00000044u; // 801D29D8
  {uint32_t ea=c->r[2]+0xFFFFBC68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D29DC
  c->f[2]=c->f[1]; // 801D29E0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801D29E4
  c->lr=0x801D29ECu; f_803949B8(c); // 801D29E8
  c->r[3]=c->r[1]+0x00000074u; // 801D29EC
  c->r[4]=c->r[1]+0x00000044u; // 801D29F0
  c->r[5]=c->r[3]|c->r[3]; // 801D29F4
  c->lr=0x801D29FCu; f_802646E0(c); // 801D29F8
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D29FC
  c->r[3]=c->r[30]+0x000008D0u; // 801D2A00
  c->r[4]=c->r[1]+0x00000074u; // 801D2A04
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2A08
  c->ctr=c->r[12]; // 801D2A0C
  if (true) { c->lr=0x801D2A14u; dispatch(c,c->ctr); } // 801D2A10
  goto L_801D2AC8; // 801D2A14
L_801D2A18:;
  if (!crb(c,1)) { goto L_801D2AC8; } // 801D2A18
  {uint32_t ea=c->r[2]+0xFFFFBCC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D2A1C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2A20
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[3]); // 801D2A24
  fcmp(c,0,c->f[2],c->f[0]); // 801D2A28
  if (!crb(c,0)) { goto L_801D2A34; } // 801D2A2C
  c->f[3]=-c->f[1]; // 801D2A30
L_801D2A34:;
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2A34
  c->r[3]=c->r[1]+0x00000014u; // 801D2A38
  {uint32_t ea=c->r[2]+0xFFFFBC68u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2A3C
  c->f[2]=c->f[1]; // 801D2A40
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801D2A44
  c->lr=0x801D2A4Cu; f_803949B8(c); // 801D2A48
  c->r[3]=c->r[1]+0x00000074u; // 801D2A4C
  c->r[4]=c->r[1]+0x00000014u; // 801D2A50
  c->r[5]=c->r[3]|c->r[3]; // 801D2A54
  c->lr=0x801D2A5Cu; f_802646E0(c); // 801D2A58
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2A5C
  c->r[3]=c->r[30]+0x000008D0u; // 801D2A60
  c->r[4]=c->r[1]+0x00000074u; // 801D2A64
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2A68
  c->ctr=c->r[12]; // 801D2A6C
  if (true) { c->lr=0x801D2A74u; dispatch(c,c->ctr); } // 801D2A70
  goto L_801D2AC8; // 801D2A74
L_801D2A78:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 801D2A78
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2A7C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D2A80
  c->lr=0x801D2A88u; f_8016498C(c); // 801D2A84
  cmps(c,0,(int32_t)c->r[3],0); // 801D2A88
  if (crb(c,2)) { goto L_801D2AC8; } // 801D2A8C
  c->r[3]=c->r[30]+0x000008ECu; // 801D2A90
  c->r[4]=c->r[30]+0x00001F51u; // 801D2A94
  c->lr=0x801D2A9Cu; f_80075440(c); // 801D2A98
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2A9C
  c->r[5]=c->r[3]|c->r[3]; // 801D2AA0
  W32(c->r[31]+0x00000014u,c->r[3]); // 801D2AA4
  c->r[3]=c->r[30]+0x00000C88u; // 801D2AA8
  c->f[2]=c->f[1]; // 801D2AAC
  c->r[4]=c->r[30]+0x000008ECu; // 801D2AB0
  c->r[6]=0u+0x00000000u; // 801D2AB4
  c->r[7]=0u+0x00000000u; // 801D2AB8
  c->lr=0x801D2AC0u; f_800BB0C8(c); // 801D2ABC
  c->r[0]=0u+0x0000001Eu; // 801D2AC0
  W16(c->r[30]+0x00001FEEu,c->r[0]); // 801D2AC4
L_801D2AC8:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801D2AC8
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801D2ACC
  c->r[30]=R32(c->r[1]+0x000000A8u); // 801D2AD0
  c->lr=c->r[0]; // 801D2AD4
  c->r[1]=c->r[1]+0x000000B0u; // 801D2AD8
  return; // 801D2ADC
}

// fn_801D2AE0
void f_801D2AE0(Ctx* __restrict c) {
  trace_call(0x801D2AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2AE0
  c->r[0]=c->lr; // 801D2AE4
  c->r[5]=0u+0x00000028u; // 801D2AE8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801D2AEC
  c->r[0]=0u+0x00000000u; // 801D2AF0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801D2AF4
  c->r[31]=c->r[4]|c->r[4]; // 801D2AF8
  W32(c->r[1]+0x00000098u,c->r[30]); // 801D2AFC
  c->r[30]=c->r[3]|c->r[3]; // 801D2B00
  c->r[4]=c->r[30]+0x000008D0u; // 801D2B04
  {uint32_t ea=c->r[3]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2B08
  W16(c->r[3]+0x00001FEEu,c->r[5]); // 801D2B0C
  {uint32_t ea=c->r[3]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2B10
  W8(c->r[3]+0x0000200Cu,c->r[0]); // 801D2B14
  c->r[3]=c->r[1]+0x00000068u; // 801D2B18
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2B1C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D2B20
  c->ctr=c->r[12]; // 801D2B24
  if (true) { c->lr=0x801D2B2Cu; dispatch(c,c->ctr); } // 801D2B28
  c->r[3]=c->r[1]+0x0000002Cu; // 801D2B2C
  c->r[4]=c->r[1]+0x00000068u; // 801D2B30
  c->lr=0x801D2B38u; f_80032FD8(c); // 801D2B34
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2B38
  c->r[4]=c->r[30]+0x000008D0u; // 801D2B3C
  c->r[3]=c->r[1]+0x00000038u; // 801D2B40
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D2B44
  c->ctr=c->r[12]; // 801D2B48
  if (true) { c->lr=0x801D2B50u; dispatch(c,c->ctr); } // 801D2B4C
  c->r[3]=c->r[1]+0x00000020u; // 801D2B50
  c->r[4]=c->r[1]+0x00000038u; // 801D2B54
  c->lr=0x801D2B5Cu; f_800BC9F4(c); // 801D2B58
  c->r[3]=c->r[1]+0x00000020u; // 801D2B5C
  c->lr=0x801D2B64u; f_80065368(c); // 801D2B60
  cmps(c,0,(int32_t)c->r[3],0); // 801D2B64
  if (!crb(c,2)) { goto L_801D2B78; } // 801D2B68
  c->r[3]=c->r[1]+0x00000020u; // 801D2B6C
  c->r[4]=c->r[3]|c->r[3]; // 801D2B70
  c->lr=0x801D2B78u; f_80265750(c); // 801D2B74
L_801D2B78:;
  c->r[3]=c->r[1]+0x00000008u; // 801D2B78
  c->r[4]=c->r[1]+0x00000020u; // 801D2B7C
  c->lr=0x801D2B84u; f_8003F484(c); // 801D2B80
  c->r[3]=c->r[1]+0x00000014u; // 801D2B84
  c->r[4]=c->r[1]+0x0000002Cu; // 801D2B88
  c->lr=0x801D2B90u; f_8003F484(c); // 801D2B8C
  c->r[0]=R32(c->r[30]+0x00002128u); // 801D2B90
  cmps(c,0,(int32_t)c->r[0],1); // 801D2B94
  if (crb(c,0)) { goto L_801D2C08; } // 801D2B98
  c->r[0]=0u+0x00000000u; // 801D2B9C
  c->r[3]=c->r[30]+0x0000214Cu; // 801D2BA0
  W8(c->r[30]+0x00002174u,c->r[0]); // 801D2BA4
  c->r[4]=c->r[1]+0x00000008u; // 801D2BA8
  c->lr=0x801D2BB0u; f_8003F468(c); // 801D2BAC
  c->r[3]=c->r[30]+0x0000214Cu; // 801D2BB0
  c->lr=0x801D2BB8u; f_80065368(c); // 801D2BB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D2BB8
  if (!crb(c,2)) { goto L_801D2BCC; } // 801D2BBC
  c->r[3]=c->r[30]+0x0000214Cu; // 801D2BC0
  c->r[4]=c->r[3]|c->r[3]; // 801D2BC4
  c->lr=0x801D2BCCu; f_80265750(c); // 801D2BC8
L_801D2BCC:;
  c->r[3]=c->r[30]+0x00002134u; // 801D2BCC
  c->r[4]=c->r[1]+0x00000014u; // 801D2BD0
  c->lr=0x801D2BD8u; f_8003F468(c); // 801D2BD4
  c->r[3]=c->r[30]+0x00002140u; // 801D2BD8
  c->r[4]=c->r[1]+0x00000014u; // 801D2BDC
  c->lr=0x801D2BE4u; f_8003F468(c); // 801D2BE0
  c->r[6]=0u+0xFFFFFFFEu; // 801D2BE4
  c->r[0]=0u+0x00000000u; // 801D2BE8
  W32(c->r[30]+0x0000217Cu,c->r[6]); // 801D2BEC
  c->r[3]=c->r[30]+0x00002108u; // 801D2BF0
  c->r[4]=0u+0xFFFFFFFFu; // 801D2BF4
  c->r[5]=0u+0x00000001u; // 801D2BF8
  W32(c->r[30]+0x00002130u,c->r[6]); // 801D2BFC
  W32(c->r[30]+0x00002178u,c->r[0]); // 801D2C00
  c->lr=0x801D2C08u; f_801C47C4(c); // 801D2C04
L_801D2C08:;
  c->r[3]=c->r[30]+0x000008ECu; // 801D2C08
  c->r[4]=c->r[30]+0x00001F51u; // 801D2C0C
  c->lr=0x801D2C14u; f_80075440(c); // 801D2C10
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D2C14
  c->r[5]=c->r[3]|c->r[3]; // 801D2C18
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2C1C
  c->r[3]=c->r[30]+0x00000C88u; // 801D2C20
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2C24
  c->r[4]=c->r[30]+0x000008ECu; // 801D2C28
  c->r[6]=0u+0x00000000u; // 801D2C2C
  c->r[7]=0u+0x00000000u; // 801D2C30
  c->lr=0x801D2C38u; f_800BB0C8(c); // 801D2C34
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801D2C38
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801D2C3C
  c->r[30]=R32(c->r[1]+0x00000098u); // 801D2C40
  c->lr=c->r[0]; // 801D2C44
  c->r[1]=c->r[1]+0x000000A0u; // 801D2C48
  return; // 801D2C4C
}

// fn_801D2C50
void f_801D2C50(Ctx* __restrict c) {
  trace_call(0x801D2C50u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2C50
  c->r[0]=c->lr; // 801D2C54
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801D2C58
  W32(c->r[1]+0x000000CCu,c->r[31]); // 801D2C5C
  c->r[31]=c->r[4]|c->r[4]; // 801D2C60
  W32(c->r[1]+0x000000C8u,c->r[30]); // 801D2C64
  c->r[30]=c->r[3]|c->r[3]; // 801D2C68
  c->r[0]=R16(c->r[3]+0x00001FEEu); // 801D2C6C
  cmps(c,0,(int32_t)c->r[0],40); // 801D2C70
  if (crb(c,2)) { goto L_801D2C88; } // 801D2C74
  if (!crb(c,0)) { goto L_801D2F1C; } // 801D2C78
  cmps(c,0,(int32_t)c->r[0],27); // 801D2C7C
  if (crb(c,2)) { goto L_801D2CC4; } // 801D2C80
  goto L_801D2F1C; // 801D2C84
L_801D2C88:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2C88
  c->r[3]=c->r[1]+0x00000090u; // 801D2C8C
  c->r[4]=c->r[30]+0x00002108u; // 801D2C90
  c->lr=0x801D2C98u; f_801C44B8(c); // 801D2C94
  c->r[3]=c->r[1]+0x00000090u; // 801D2C98
  c->lr=0x801D2CA0u; f_801C4B60(c); // 801D2C9C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2CA0
  if (!crb(c,2)) { goto L_801D2F1C; } // 801D2CA4
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2CA8
  c->r[3]=c->r[30]+0x000008D0u; // 801D2CAC
  c->r[4]=c->r[1]+0x00000090u; // 801D2CB0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2CB4
  c->ctr=c->r[12]; // 801D2CB8
  if (true) { c->lr=0x801D2CC0u; dispatch(c,c->ctr); } // 801D2CBC
  goto L_801D2F1C; // 801D2CC0
L_801D2CC4:;
  c->r[3]=c->r[1]+0x00000018u; // 801D2CC4
  c->r[4]=c->r[30]+0x00002000u; // 801D2CC8
  c->lr=0x801D2CD0u; f_8003F484(c); // 801D2CCC
  c->r[4]=c->r[3]|c->r[3]; // 801D2CD0
  c->r[3]=c->r[30]|c->r[30]; // 801D2CD4
  c->r[5]=c->r[1]+0x00000060u; // 801D2CD8
  c->r[6]=c->r[1]+0x00000008u; // 801D2CDC
  c->lr=0x801D2CE4u; f_801C3F00(c); // 801D2CE0
  cmps(c,0,(int32_t)c->r[3],0); // 801D2CE4
  if (crb(c,2)) { goto L_801D2D48; } // 801D2CE8
  c->r[3]=c->r[1]+0x00000060u; // 801D2CEC
  c->lr=0x801D2CF4u; f_801C4B60(c); // 801D2CF0
  cmps(c,0,(int32_t)c->r[3],0); // 801D2CF4
  if (!crb(c,2)) { goto L_801D2D14; } // 801D2CF8
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2CFC
  c->r[3]=c->r[30]+0x000008D0u; // 801D2D00
  c->r[4]=c->r[1]+0x00000060u; // 801D2D04
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2D08
  c->ctr=c->r[12]; // 801D2D0C
  if (true) { c->lr=0x801D2D14u; dispatch(c,c->ctr); } // 801D2D10
L_801D2D14:;
  c->r[0]=0u+0x0000001Eu; // 801D2D14
  c->r[3]=c->r[30]|c->r[30]; // 801D2D18
  W16(c->r[30]+0x00001FECu,c->r[0]); // 801D2D1C
  c->lr=0x801D2D24u; f_800AC8F8(c); // 801D2D20
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 801D2D24
  c->r[4]=0u+0x00000008u; // 801D2D28
  c->r[5]=0u+0x00000000u; // 801D2D2C
  c->r[6]=0u+0x00000000u; // 801D2D30
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2D34
  c->r[12]=R32(c->r[12]+0x00000028u); // 801D2D38
  c->ctr=c->r[12]; // 801D2D3C
  if (true) { c->lr=0x801D2D44u; dispatch(c,c->ctr); } // 801D2D40
  goto L_801D2D70; // 801D2D44
L_801D2D48:;
  c->r[3]=c->r[1]+0x00000060u; // 801D2D48
  c->lr=0x801D2D50u; f_801C4B60(c); // 801D2D4C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2D50
  if (!crb(c,2)) { goto L_801D2D70; } // 801D2D54
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2D58
  c->r[3]=c->r[30]+0x000008D0u; // 801D2D5C
  c->r[4]=c->r[1]+0x00000060u; // 801D2D60
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D2D64
  c->ctr=c->r[12]; // 801D2D68
  if (true) { c->lr=0x801D2D70u; dispatch(c,c->ctr); } // 801D2D6C
L_801D2D70:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D2D70
  cmps(c,0,(int32_t)c->r[0],0); // 801D2D74
  if (crb(c,2)) { goto L_801D2DF8; } // 801D2D78
  c->r[0]=R8(c->r[30]+0x0000200Cu); // 801D2D7C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2D80
  if (!crb(c,2)) { goto L_801D2E58; } // 801D2D84
  {uint32_t ea=c->r[30]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2D88
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2D8C
  fcmp(c,0,c->f[1],c->f[0]); // 801D2D90
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D2D94
  if (!crb(c,2)) { goto L_801D2E58; } // 801D2D98
  c->r[3]=R32(c->r[30]+0x00000974u); // 801D2D9C
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2DA0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D2DA4
  c->lr=0x801D2DACu; f_800C57C4(c); // 801D2DA8
  cmps(c,0,(int32_t)c->r[3],0); // 801D2DAC
  if (crb(c,2)) { goto L_801D2E58; } // 801D2DB0
  c->r[3]=c->r[30]+0x000008ECu; // 801D2DB4
  c->r[4]=c->r[30]+0x000021FCu; // 801D2DB8
  c->lr=0x801D2DC0u; f_80075440(c); // 801D2DBC
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D2DC0
  c->r[5]=c->r[3]|c->r[3]; // 801D2DC4
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2DC8
  c->r[3]=c->r[30]+0x00000C88u; // 801D2DCC
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2DD0
  c->r[4]=c->r[30]+0x000008ECu; // 801D2DD4
  c->r[6]=0u+0x00000000u; // 801D2DD8
  c->r[7]=0u+0x00000000u; // 801D2DDC
  c->lr=0x801D2DE4u; f_800BB0C8(c); // 801D2DE0
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2DE4
  c->r[0]=0u+0x00000001u; // 801D2DE8
  W8(c->r[30]+0x0000200Cu,c->r[0]); // 801D2DEC
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801D2DF0
  goto L_801D2E58; // 801D2DF4
L_801D2DF8:;
  c->r[0]=R8(c->r[30]+0x0000200Cu); // 801D2DF8
  cmps(c,0,(int32_t)c->r[0],0); // 801D2DFC
  if (crb(c,2)) { goto L_801D2E58; } // 801D2E00
  {uint32_t ea=c->r[30]+0x00002010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2E04
  {uint32_t ea=c->r[2]+0xFFFFBC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2E08
  fcmp(c,0,c->f[1],c->f[0]); // 801D2E0C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D2E10
  if (!crb(c,2)) { goto L_801D2E58; } // 801D2E14
  c->r[3]=c->r[30]+0x000008ECu; // 801D2E18
  c->r[4]=c->r[30]+0x00001F51u; // 801D2E1C
  c->lr=0x801D2E24u; f_80075440(c); // 801D2E20
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801D2E24
  c->r[5]=c->r[3]|c->r[3]; // 801D2E28
  {uint32_t ea=c->r[2]+0xFFFFBC10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2E2C
  c->r[3]=c->r[30]+0x00000C88u; // 801D2E30
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D2E34
  c->r[4]=c->r[30]+0x000008ECu; // 801D2E38
  c->r[6]=0u+0x00000000u; // 801D2E3C
  c->r[7]=0u+0x00000000u; // 801D2E40
  c->lr=0x801D2E48u; f_800BB0C8(c); // 801D2E44
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2E48
  c->r[0]=0u+0x00000000u; // 801D2E4C
  W8(c->r[30]+0x0000200Cu,c->r[0]); // 801D2E50
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801D2E54
L_801D2E58:;
  c->r[31]=0u+0x804D0000u; // 801D2E58
  {uint32_t ea=c->r[30]+0x00002010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2E5C
  c->r[31]=c->r[31]+0x00003318u; // 801D2E60
  c->r[4]=c->r[30]+0x000008D0u; // 801D2E64
  {uint32_t ea=c->r[31]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2E68
  c->r[3]=c->r[1]+0x00000030u; // 801D2E6C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801D2E70
  {uint32_t ea=c->r[30]+0x00002010u; WF32(ea,c->f[0]);} // 801D2E74
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801D2E78
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D2E7C
  c->ctr=c->r[12]; // 801D2E80
  if (true) { c->lr=0x801D2E88u; dispatch(c,c->ctr); } // 801D2E84
  c->r[3]=c->r[1]+0x0000000Cu; // 801D2E88
  c->r[4]=c->r[1]+0x00000030u; // 801D2E8C
  c->lr=0x801D2E94u; f_80032FD8(c); // 801D2E90
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2E94
  c->r[3]=c->r[1]+0x00000024u; // 801D2E98
  c->r[5]=c->r[30]+0x00002000u; // 801D2E9C
  c->lr=0x801D2EA4u; f_80064C74(c); // 801D2EA0
  c->r[3]=c->r[1]+0x00000024u; // 801D2EA4
  c->lr=0x801D2EACu; f_802657AC(c); // 801D2EA8
  {uint32_t ea=c->r[2]+0xFFFFBC28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2EAC
  fcmp(c,0,c->f[1],c->f[0]); // 801D2EB0
  if (!crb(c,0)) { goto L_801D2EEC; } // 801D2EB4
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2EB8
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2EBC
  fcmp(c,0,c->f[1],c->f[0]); // 801D2EC0
  if (!crb(c,1)) { goto L_801D2ED4; } // 801D2EC4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2EC8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D2ECC
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2ED0
L_801D2ED4:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2ED4
  {uint32_t ea=c->r[30]+0x00001FF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2ED8
  fcmp(c,0,c->f[1],c->f[0]); // 801D2EDC
  if (!crb(c,0)) { goto L_801D2F1C; } // 801D2EE0
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2EE4
  goto L_801D2F1C; // 801D2EE8
L_801D2EEC:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2EEC
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2EF0
  fcmp(c,0,c->f[1],c->f[0]); // 801D2EF4
  if (!crb(c,0)) { goto L_801D2F08; } // 801D2EF8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2EFC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801D2F00
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2F04
L_801D2F08:;
  {uint32_t ea=c->r[30]+0x00001FF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D2F08
  {uint32_t ea=c->r[30]+0x00001FF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2F0C
  fcmp(c,0,c->f[1],c->f[0]); // 801D2F10
  if (!crb(c,1)) { goto L_801D2F1C; } // 801D2F14
  {uint32_t ea=c->r[30]+0x00001FF0u; WF32(ea,c->f[0]);} // 801D2F18
L_801D2F1C:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801D2F1C
  c->r[31]=R32(c->r[1]+0x000000CCu); // 801D2F20
  c->r[30]=R32(c->r[1]+0x000000C8u); // 801D2F24
  c->lr=c->r[0]; // 801D2F28
  c->r[1]=c->r[1]+0x000000D0u; // 801D2F2C
  return; // 801D2F30
}

// fn_801D2F34
void f_801D2F34(Ctx* __restrict c) {
  trace_call(0x801D2F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2F34
  c->r[0]=c->lr; // 801D2F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2F3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2F40
  c->r[31]=c->r[3]|c->r[3]; // 801D2F44
  c->r[3]=c->r[3]+0x00002108u; // 801D2F48
  c->lr=0x801D2F50u; f_801C4CF8(c); // 801D2F4C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2F50
  if (crb(c,2)) { goto L_801D2F80; } // 801D2F54
  c->r[0]=R16(c->r[31]+0x0000227Cu); // 801D2F58
  c->r[3]=c->r[31]+0x00002000u; // 801D2F5C
  c->r[4]=R32(c->r[31]+0x0000224Cu); // 801D2F60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801D2F64
  c->r[4]=c->r[4]+c->r[0]; // 801D2F68
  c->lr=0x801D2F70u; f_8003F468(c); // 801D2F6C
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D2F70
  c->r[0]=0u+0x0000001Bu; // 801D2F74
  W16(c->r[31]+0x00001FEEu,c->r[0]); // 801D2F78
  {uint32_t ea=c->r[31]+0x00002010u; WF32(ea,c->f[0]);} // 801D2F7C
L_801D2F80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2F80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2F84
  c->lr=c->r[0]; // 801D2F88
  c->r[1]=c->r[1]+0x00000010u; // 801D2F8C
  return; // 801D2F90
}

// fn_801D2F94
void f_801D2F94(Ctx* __restrict c) {
  trace_call(0x801D2F94u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2F94
  f_801CF7CC(c); return; // 801D2F98
}

// fn_801D2F9C
void f_801D2F9C(Ctx* __restrict c) {
  trace_call(0x801D2F9Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2F9C
  f_801CF814(c); return; // 801D2FA0
}

// fn_801D2FA4
void f_801D2FA4(Ctx* __restrict c) {
  trace_call(0x801D2FA4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FA4
  f_801CF8C8(c); return; // 801D2FA8
}

// fn_801D2FAC
void f_801D2FAC(Ctx* __restrict c) {
  trace_call(0x801D2FACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FAC
  f_801CF7FC(c); return; // 801D2FB0
}

// fn_801D2FB4
void f_801D2FB4(Ctx* __restrict c) {
  trace_call(0x801D2FB4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FB4
  f_801CF890(c); return; // 801D2FB8
}

// fn_801D2FBC
void f_801D2FBC(Ctx* __restrict c) {
  trace_call(0x801D2FBCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FBC
  f_801CFCF4(c); return; // 801D2FC0
}

// fn_801D2FC4
void f_801D2FC4(Ctx* __restrict c) {
  trace_call(0x801D2FC4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FC4
  f_801CF7E4(c); return; // 801D2FC8
}

// fn_801D2FCC
void f_801D2FCC(Ctx* __restrict c) {
  trace_call(0x801D2FCCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FCC
  f_801CF858(c); return; // 801D2FD0
}

// fn_801D2FD4
void f_801D2FD4(Ctx* __restrict c) {
  trace_call(0x801D2FD4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FD4
  f_801CFA98(c); return; // 801D2FD8
}

// fn_801D2FDC
void f_801D2FDC(Ctx* __restrict c) {
  trace_call(0x801D2FDCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FDC
  f_801D1310(c); return; // 801D2FE0
}

// fn_801D2FE4
void f_801D2FE4(Ctx* __restrict c) {
  trace_call(0x801D2FE4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FE4
  f_801D11F8(c); return; // 801D2FE8
}

// fn_801D2FEC
void f_801D2FEC(Ctx* __restrict c) {
  trace_call(0x801D2FECu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FEC
  f_801D1250(c); return; // 801D2FF0
}

// fn_801D2FF4
void f_801D2FF4(Ctx* __restrict c) {
  trace_call(0x801D2FF4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FF4
  f_801D1300(c); return; // 801D2FF8
}

// fn_801D2FFC
void f_801D2FFC(Ctx* __restrict c) {
  trace_call(0x801D2FFCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D2FFC
  f_801D1320(c); return; // 801D3000
}

// fn_801D3004
void f_801D3004(Ctx* __restrict c) {
  trace_call(0x801D3004u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D3004
  f_801D131C(c); return; // 801D3008
}

// fn_801D300C
void f_801D300C(Ctx* __restrict c) {
  trace_call(0x801D300Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D300C
  f_801D1228(c); return; // 801D3010
}

// fn_801D3014
void f_801D3014(Ctx* __restrict c) {
  trace_call(0x801D3014u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D3014
  f_801D12C8(c); return; // 801D3018
}

// fn_801D301C
void f_801D301C(Ctx* __restrict c) {
  trace_call(0x801D301Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D301C
  f_801D130C(c); return; // 801D3020
}

// fn_801D3024
void f_801D3024(Ctx* __restrict c) {
  trace_call(0x801D3024u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D3024
  f_801D1900(c); return; // 801D3028
}

// fn_801D302C
void f_801D302C(Ctx* __restrict c) {
  trace_call(0x801D302Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D302C
  f_801D1318(c); return; // 801D3030
}

// fn_801D3034
void f_801D3034(Ctx* __restrict c) {
  trace_call(0x801D3034u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D3034
  f_801D1210(c); return; // 801D3038
}

// fn_801D303C
void f_801D303C(Ctx* __restrict c) {
  trace_call(0x801D303Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D303C
  f_801D1294(c); return; // 801D3040
}

// fn_801D3044
void f_801D3044(Ctx* __restrict c) {
  trace_call(0x801D3044u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D3044
  f_801D1308(c); return; // 801D3048
}

// fn_801D304C
void f_801D304C(Ctx* __restrict c) {
  trace_call(0x801D304Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D304C
  f_801D13BC(c); return; // 801D3050
}

// fn_801D3054
void f_801D3054(Ctx* __restrict c) {
  trace_call(0x801D3054u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3054
  c->r[0]=c->lr; // 801D3058
  cmps(c,0,(int32_t)c->r[3],0); // 801D305C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3060
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D3064
  c->r[30]=c->r[3]|c->r[3]; // 801D3068
  c->r[31]=c->r[4]|c->r[4]; // 801D306C
  if (crb(c,2)) { goto L_801D308C; } // 801D3070
  c->r[4]=0u+0x00000000u; // 801D3074
  c->lr=0x801D307Cu; f_800D9524(c); // 801D3078
  cmps(c,0,(int32_t)c->r[31],0); // 801D307C
  if (!crb(c,1)) { goto L_801D308C; } // 801D3080
  c->r[3]=c->r[30]|c->r[30]; // 801D3084
  c->lr=0x801D308Cu; f_802896EC(c); // 801D3088
L_801D308C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D308C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D3090
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3094
  c->lr=c->r[0]; // 801D3098
  c->r[1]=c->r[1]+0x00000010u; // 801D309C
  return; // 801D30A0
}

// fn_801D30A4
void f_801D30A4(Ctx* __restrict c) {
  trace_call(0x801D30A4u);
  {uint32_t ea=c->r[2]+0xFFFFBC0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D30A4
  c->r[3]=0u+0x80580000u; // 801D30A8
  {uint32_t ea=c->r[2]+0xFFFFBC04u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D30AC
  c->r[3]=c->r[3]+0xFFFF9130u; // 801D30B0
  c->f[3]=c->f[1]; // 801D30B4
  f_8003F588(c); return; // 801D30B8
}

// fn_801D30BC
void f_801D30BC(Ctx* __restrict c) {
  trace_call(0x801D30BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D30BC
  c->r[0]=c->lr; // 801D30C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D30C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D30C8
  c->r[31]=c->r[3]|c->r[3]; // 801D30CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D30D0
  c->r[30]=c->r[4]|c->r[4]; // 801D30D4
  goto L_801D3124; // 801D30D8
L_801D30DC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D30DC
  cmps(c,0,(int32_t)c->r[0],0); // 801D30E0
  if (crb(c,2)) { goto L_801D30F0; } // 801D30E4
  c->r[3]=c->r[31]+c->r[0]; // 801D30E8
  goto L_801D30F4; // 801D30EC
L_801D30F0:;
  c->r[3]=0u+0x00000000u; // 801D30F0
L_801D30F4:;
  c->r[4]=c->r[30]|c->r[30]; // 801D30F4
  c->lr=0x801D30FCu; f_80293554(c); // 801D30F8
  cmps(c,0,(int32_t)c->r[3],0); // 801D30FC
  if (!crb(c,2)) { goto L_801D310C; } // 801D3100
  c->r[3]=c->r[31]|c->r[31]; // 801D3104
  goto L_801D3130; // 801D3108
L_801D310C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801D310C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3110
  if (crb(c,2)) { goto L_801D3120; } // 801D3114
  c->r[31]=c->r[31]+c->r[0]; // 801D3118
  goto L_801D3124; // 801D311C
L_801D3120:;
  c->r[31]=0u+0x00000000u; // 801D3120
L_801D3124:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D3124
  if (!crb(c,2)) { IRQCHK(c); goto L_801D30DC; } // 801D3128
  c->r[3]=0u+0x00000000u; // 801D312C
L_801D3130:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3130
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3134
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D3138
  c->lr=c->r[0]; // 801D313C
  c->r[1]=c->r[1]+0x00000010u; // 801D3140
  return; // 801D3144
}

// fn_801D3148
void f_801D3148(Ctx* __restrict c) {
  trace_call(0x801D3148u);
  c->r[0]=0u+0x00000000u; // 801D3148
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D314C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D3150
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D3154
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D3158
  return; // 801D315C
}

// dtor_801D3160
void f_801D3160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3160
  c->r[0]=c->lr; // 801D3164
  cmps(c,0,(int32_t)c->r[3],0); // 801D3168
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D316C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3170
  c->r[31]=c->r[4]|c->r[4]; // 801D3174
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D3178
  c->r[30]=c->r[3]|c->r[3]; // 801D317C
  if (crb(c,2)) { goto L_801D31C0; } // 801D3180
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D3184
  cmps(c,0,(int32_t)c->r[4],0); // 801D3188
  if (crb(c,2)) { goto L_801D31A0; } // 801D318C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D3190
  cmps(c,0,(int32_t)c->r[3],0); // 801D3194
  if (crb(c,2)) { goto L_801D31A0; } // 801D3198
  c->lr=0x801D31A0u; f_802A704C(c); // 801D319C
L_801D31A0:;
  c->r[0]=0u+0x00000000u; // 801D31A0
  cmps(c,0,(int32_t)c->r[31],0); // 801D31A4
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D31A8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D31AC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D31B0
  if (!crb(c,1)) { goto L_801D31C0; } // 801D31B4
  c->r[3]=c->r[30]|c->r[30]; // 801D31B8
  c->lr=0x801D31C0u; f_802896EC(c); // 801D31BC
L_801D31C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801D31C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D31C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D31C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D31CC
  c->lr=c->r[0]; // 801D31D0
  c->r[1]=c->r[1]+0x00000010u; // 801D31D4
  return; // 801D31D8
}

// fn_801D31DC
void f_801D31DC(Ctx* __restrict c) {
  trace_call(0x801D31DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D31DC
  c->r[0]=c->lr; // 801D31E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D31E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D31E8
  c->r[31]=c->r[6]|c->r[6]; // 801D31EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D31F0
  c->r[30]=c->r[4]|c->r[4]; // 801D31F4
  c->r[4]=c->r[31]|c->r[31]; // 801D31F8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D31FC
  c->r[29]=c->r[3]|c->r[3]; // 801D3200
  W32(c->r[3]+0x00000000u,c->r[5]); // 801D3204
  c->r[3]=c->r[5]|c->r[5]; // 801D3208
  c->lr=0x801D3210u; f_802A703C(c); // 801D320C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801D3210
  c->r[5]=c->r[31]|c->r[31]; // 801D3214
  c->r[4]=0u+0x00000000u; // 801D3218
  c->lr=0x801D3220u; f_800043EC(c); // 801D321C
  c->r[4]=R32(c->r[29]+0x00000004u); // 801D3220
  c->r[5]=c->r[31]|c->r[31]; // 801D3224
  c->r[3]=c->r[1]+0x00000010u; // 801D3228
  c->lr=0x801D3230u; f_8009FE74(c); // 801D322C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D3230
  c->r[3]=c->r[29]|c->r[29]; // 801D3234
  c->r[6]=c->r[1]+0x00000010u; // 801D3238
  c->r[7]=c->r[1]+0x00000008u; // 801D323C
  c->r[4]=0u+0x00000000u; // 801D3240
  c->r[5]=0u+0x00000000u; // 801D3244
  c->lr=0x801D324Cu; f_801D32F8(c); // 801D3248
  goto L_801D3280; // 801D324C
L_801D3250:;
  c->r[31]=c->r[3]|c->r[3]; // 801D3250
  c->r[3]=c->r[29]|c->r[29]; // 801D3254
  c->r[6]=c->r[1]+0x00000010u; // 801D3258
  c->r[7]=c->r[1]+0x00000008u; // 801D325C
  c->r[4]=0u+0x00000000u; // 801D3260
  c->r[5]=0u+0x00000000u; // 801D3264
  c->lr=0x801D326Cu; f_801D32F8(c); // 801D3268
  cmps(c,0,(int32_t)c->r[3],0); // 801D326C
  if (crb(c,2)) { goto L_801D3280; } // 801D3270
  W32(c->r[31]+0x00000020u,c->r[3]); // 801D3274
  c->r[0]=c->r[3]-c->r[31]; // 801D3278
  W32(c->r[31]+0x00000010u,c->r[0]); // 801D327C
L_801D3280:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D3280
  if (!crb(c,2)) { IRQCHK(c); goto L_801D3250; } // 801D3284
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D3288
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D328C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D3290
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D3294
  c->lr=c->r[0]; // 801D3298
  c->r[1]=c->r[1]+0x00000030u; // 801D329C
  return; // 801D32A0
}

// fn_801D32A4
void f_801D32A4(Ctx* __restrict c) {
  trace_call(0x801D32A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D32A4
  c->r[0]=c->lr; // 801D32A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D32AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D32B0
  c->r[31]=c->r[3]|c->r[3]; // 801D32B4
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D32B8
  cmps(c,0,(int32_t)c->r[4],0); // 801D32BC
  if (crb(c,2)) { goto L_801D32D4; } // 801D32C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D32C4
  cmps(c,0,(int32_t)c->r[3],0); // 801D32C8
  if (crb(c,2)) { goto L_801D32D4; } // 801D32CC
  c->lr=0x801D32D4u; f_802A704C(c); // 801D32D0
L_801D32D4:;
  c->r[0]=0u+0x00000000u; // 801D32D4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D32D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D32DC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801D32E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D32E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D32E8
  c->lr=c->r[0]; // 801D32EC
  c->r[1]=c->r[1]+0x00000010u; // 801D32F0
  return; // 801D32F4
}

// fn_801D32F8
void f_801D32F8(Ctx* __restrict c) {
  trace_call(0x801D32F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D32F8
  c->r[0]=c->lr; // 801D32FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3300
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D3304
  c->r[28]=c->r[3]|c->r[3]; // 801D3308
  c->r[25]=c->r[4]|c->r[4]; // 801D330C
  c->r[24]=c->r[5]|c->r[5]; // 801D3310
  c->r[29]=c->r[6]|c->r[6]; // 801D3314
  c->r[30]=c->r[7]|c->r[7]; // 801D3318
  c->r[4]=0u+0x0000003Cu; // 801D331C
  c->r[3]=R32(c->r[7]+0x00000000u); // 801D3320
  c->lr=0x801D3328u; f_802936B0(c); // 801D3324
  cmps(c,0,(int32_t)c->r[3],0); // 801D3328
  c->r[26]=c->r[3]|c->r[3]; // 801D332C
  if (crb(c,2)) { goto L_801D34C4; } // 801D3330
  c->r[4]=0u+0x0000003Eu; // 801D3334
  c->lr=0x801D333Cu; f_802936B0(c); // 801D3338
  c->r[27]=c->r[3]|c->r[3]; // 801D333C
  c->r[3]=c->r[29]|c->r[29]; // 801D3340
  c->r[4]=0u+0x00000024u; // 801D3344
  c->lr=0x801D334Cu; f_8009FE8C(c); // 801D3348
  c->r[31]=c->r[3]|c->r[3]; // 801D334C
  c->r[4]=0u+0x00000000u; // 801D3350
  c->r[5]=0u+0x00000024u; // 801D3354
  c->lr=0x801D335Cu; f_800043EC(c); // 801D3358
  cmps(c,0,(int32_t)c->r[25],0); // 801D335C
  if (crb(c,2)) { goto L_801D33A0; } // 801D3360
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 801D3364
  cmps(c,0,(int32_t)c->r[3],0); // 801D3368
  if (!crb(c,2)) { goto L_801D3388; } // 801D336C
  c->r[0]=c->r[31]-c->r[25]; // 801D3370
  W32(c->r[25]+0x0000001Cu,c->r[31]); // 801D3374
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 801D3378
  goto L_801D33A0; // 801D337C
  goto L_801D3388; // 801D3380
L_801D3384:;
  c->r[3]=c->r[0]|c->r[0]; // 801D3384
L_801D3388:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 801D3388
  cmps(c,0,(int32_t)c->r[0],0); // 801D338C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D3384; } // 801D3390
  W32(c->r[3]+0x00000020u,c->r[31]); // 801D3394
  c->r[0]=c->r[31]-c->r[3]; // 801D3398
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D339C
L_801D33A0:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D33A0
  if (crb(c,2)) { goto L_801D33B4; } // 801D33A4
  c->r[0]=c->r[31]-c->r[24]; // 801D33A8
  W32(c->r[24]+0x00000020u,c->r[31]); // 801D33AC
  W32(c->r[24]+0x00000010u,c->r[0]); // 801D33B0
L_801D33B4:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801D33B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D33B8
  if (!crb(c,2)) { goto L_801D33C4; } // 801D33BC
  W32(c->r[28]+0x0000000Cu,c->r[31]); // 801D33C0
L_801D33C4:;
  c->r[4]=c->r[27]-c->r[26]; // 801D33C4
  c->r[3]=c->r[29]|c->r[29]; // 801D33C8
  c->r[25]=c->r[4]+0xFFFFFFFFu; // 801D33CC
  c->r[4]=c->r[25]+0x00000001u; // 801D33D0
  c->lr=0x801D33D8u; f_8009FE8C(c); // 801D33D4
  c->r[24]=c->r[3]|c->r[3]; // 801D33D8
  c->r[5]=c->r[25]|c->r[25]; // 801D33DC
  c->r[4]=c->r[26]+0x00000001u; // 801D33E0
  c->lr=0x801D33E8u; f_80235294(c); // 801D33E4
  c->r[0]=0u+0x00000000u; // 801D33E8
  c->r[7]=c->r[24]-c->r[31]; // 801D33EC
  W8(c->r[24]+c->r[25],c->r[0]); // 801D33F0
  c->r[0]=c->r[27]+0x00000001u; // 801D33F4
  c->r[3]=c->r[28]|c->r[28]; // 801D33F8
  c->r[4]=c->r[31]|c->r[31]; // 801D33FC
  W32(c->r[31]+0x00000014u,c->r[24]); // 801D3400
  c->r[5]=c->r[29]|c->r[29]; // 801D3404
  c->r[6]=c->r[30]|c->r[30]; // 801D3408
  W32(c->r[31]+0x00000000u,c->r[7]); // 801D340C
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D3410
  c->lr=0x801D3418u; f_801D34DC(c); // 801D3414
L_801D3418:;
  c->r[27]=R32(c->r[30]+0x00000000u); // 801D3418
L_801D341C:;
  c->r[3]=R8(c->r[27]+0x00000000u); // 801D341C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D3420
  cmps(c,0,(int32_t)c->r[0],13); // 801D3424
  if (crb(c,2)) { goto L_801D3468; } // 801D3428
  if (!crb(c,0)) { goto L_801D3450; } // 801D342C
  cmps(c,0,(int32_t)c->r[0],9); // 801D3430
  if (!crb(c,0)) { goto L_801D3444; } // 801D3434
  cmps(c,0,(int32_t)c->r[0],0); // 801D3438
  if (crb(c,2)) { goto L_801D3468; } // 801D343C
  goto L_801D3470; // 801D3440
L_801D3444:;
  cmps(c,0,(int32_t)c->r[0],11); // 801D3444
  if (!crb(c,0)) { goto L_801D3470; } // 801D3448
  goto L_801D3468; // 801D344C
L_801D3450:;
  cmps(c,0,(int32_t)c->r[0],44); // 801D3450
  if (crb(c,2)) { goto L_801D3468; } // 801D3454
  if (!crb(c,0)) { goto L_801D3470; } // 801D3458
  cmps(c,0,(int32_t)c->r[0],32); // 801D345C
  if (crb(c,2)) { goto L_801D3468; } // 801D3460
  goto L_801D3470; // 801D3464
L_801D3468:;
  c->r[27]=c->r[27]+0x00000001u; // 801D3468
  IRQCHK(c); goto L_801D341C; // 801D346C
L_801D3470:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D3470
  cmps(c,0,(int32_t)c->r[0],60); // 801D3474
  if (!crb(c,2)) { goto L_801D34BC; } // 801D3478
  c->r[3]=c->r[27]|c->r[27]; // 801D347C
  c->r[4]=0u+0x0000003Eu; // 801D3480
  c->lr=0x801D3488u; f_802936B0(c); // 801D3484
  c->r[0]=R8(c->r[27]+0x00000001u); // 801D3488
  cmps(c,0,(int32_t)c->r[0],47); // 801D348C
  if (!crb(c,2)) { goto L_801D34A0; } // 801D3490
  c->r[0]=c->r[3]+0x00000001u; // 801D3494
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D3498
  goto L_801D34BC; // 801D349C
L_801D34A0:;
  c->r[3]=c->r[28]|c->r[28]; // 801D34A0
  c->r[4]=c->r[31]|c->r[31]; // 801D34A4
  c->r[6]=c->r[29]|c->r[29]; // 801D34A8
  c->r[7]=c->r[30]|c->r[30]; // 801D34AC
  c->r[5]=0u+0x00000000u; // 801D34B0
  c->lr=0x801D34B8u; f_801D32F8(c); // 801D34B4
  IRQCHK(c); goto L_801D3418; // 801D34B8
L_801D34BC:;
  c->r[3]=c->r[31]|c->r[31]; // 801D34BC
  goto L_801D34C8; // 801D34C0
L_801D34C4:;
  c->r[3]=0u+0x00000000u; // 801D34C4
L_801D34C8:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D34C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D34CC
  c->lr=c->r[0]; // 801D34D0
  c->r[1]=c->r[1]+0x00000030u; // 801D34D4
  return; // 801D34D8
}

// fn_801D34DC
void f_801D34DC(Ctx* __restrict c) {
  trace_call(0x801D34DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D34DC
  c->r[0]=c->lr; // 801D34E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D34E4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D34E8
  c->r[28]=c->r[4]|c->r[4]; // 801D34EC
  c->r[29]=c->r[5]|c->r[5]; // 801D34F0
  c->r[30]=c->r[6]|c->r[6]; // 801D34F4
  c->r[26]=0u+0x00000000u; // 801D34F8
  c->r[31]=R32(c->r[6]+0x00000000u); // 801D34FC
  c->r[3]=c->r[31]|c->r[31]; // 801D3500
L_801D3504:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D3504
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D3508
  cmps(c,0,(int32_t)c->r[0],13); // 801D350C
  if (crb(c,2)) { goto L_801D3550; } // 801D3510
  if (!crb(c,0)) { goto L_801D3538; } // 801D3514
  cmps(c,0,(int32_t)c->r[0],9); // 801D3518
  if (!crb(c,0)) { goto L_801D352C; } // 801D351C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3520
  if (crb(c,2)) { goto L_801D3550; } // 801D3524
  goto L_801D3558; // 801D3528
L_801D352C:;
  cmps(c,0,(int32_t)c->r[0],11); // 801D352C
  if (!crb(c,0)) { goto L_801D3558; } // 801D3530
  goto L_801D3550; // 801D3534
L_801D3538:;
  cmps(c,0,(int32_t)c->r[0],44); // 801D3538
  if (crb(c,2)) { goto L_801D3550; } // 801D353C
  if (!crb(c,0)) { goto L_801D3558; } // 801D3540
  cmps(c,0,(int32_t)c->r[0],32); // 801D3544
  if (crb(c,2)) { goto L_801D3550; } // 801D3548
  goto L_801D3558; // 801D354C
L_801D3550:;
  c->r[3]=c->r[3]+0x00000001u; // 801D3550
  IRQCHK(c); goto L_801D3504; // 801D3554
L_801D3558:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 801D3558
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801D355C
  cmps(c,0,(int32_t)c->r[0],32); // 801D3560
  if (crb(c,2)) { goto L_801D35B4; } // 801D3564
  if (!crb(c,0)) { goto L_801D3598; } // 801D3568
  cmps(c,0,(int32_t)c->r[0],11); // 801D356C
  if (!crb(c,0)) { goto L_801D358C; } // 801D3570
  cmps(c,0,(int32_t)c->r[0],0); // 801D3574
  if (crb(c,2)) { goto L_801D35B4; } // 801D3578
  if (crb(c,0)) { goto L_801D35AC; } // 801D357C
  cmps(c,0,(int32_t)c->r[0],9); // 801D3580
  if (!crb(c,0)) { goto L_801D35B4; } // 801D3584
  goto L_801D35AC; // 801D3588
L_801D358C:;
  cmps(c,0,(int32_t)c->r[0],13); // 801D358C
  if (crb(c,2)) { goto L_801D35B4; } // 801D3590
  goto L_801D35AC; // 801D3594
L_801D3598:;
  cmps(c,0,(int32_t)c->r[0],60); // 801D3598
  if (crb(c,2)) { goto L_801D35B4; } // 801D359C
  if (!crb(c,0)) { goto L_801D35AC; } // 801D35A0
  cmps(c,0,(int32_t)c->r[0],44); // 801D35A4
  if (crb(c,2)) { goto L_801D35B4; } // 801D35A8
L_801D35AC:;
  c->r[3]=c->r[3]+0x00000001u; // 801D35AC
  IRQCHK(c); goto L_801D3558; // 801D35B0
L_801D35B4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801D35B4
  cmps(c,0,(int32_t)c->r[0],60); // 801D35B8
  if (crb(c,2)) { goto L_801D35D4; } // 801D35BC
  if (!crb(c,0)) { goto L_801D35CC; } // 801D35C0
  cmps(c,0,(int32_t)c->r[0],0); // 801D35C4
  if (crb(c,2)) { goto L_801D35D4; } // 801D35C8
L_801D35CC:;
  c->r[26]=c->r[26]+0x00000001u; // 801D35CC
  IRQCHK(c); goto L_801D3504; // 801D35D0
L_801D35D4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D35D4
  if (!crb(c,2)) { goto L_801D35E4; } // 801D35D8
  c->r[3]=0u+0x00000000u; // 801D35DC
  goto L_801D3710; // 801D35E0
L_801D35E4:;
  c->r[3]=c->r[29]|c->r[29]; // 801D35E4
  c->r[4]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801D35E8
  c->lr=0x801D35F0u; f_8009FE8C(c); // 801D35EC
  c->r[23]=c->r[3]|c->r[3]; // 801D35F0
  c->r[22]=0u+0x00000000u; // 801D35F4
  c->r[24]=c->r[23]|c->r[23]; // 801D35F8
  c->r[27]=0u+0x00000000u; // 801D35FC
  goto L_801D36F0; // 801D3600
L_801D3604:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801D3604
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D3608
  cmps(c,0,(int32_t)c->r[0],13); // 801D360C
  if (crb(c,2)) { goto L_801D3650; } // 801D3610
  if (!crb(c,0)) { goto L_801D3638; } // 801D3614
  cmps(c,0,(int32_t)c->r[0],9); // 801D3618
  if (!crb(c,0)) { goto L_801D362C; } // 801D361C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3620
  if (crb(c,2)) { goto L_801D3650; } // 801D3624
  goto L_801D3658; // 801D3628
L_801D362C:;
  cmps(c,0,(int32_t)c->r[0],11); // 801D362C
  if (!crb(c,0)) { goto L_801D3658; } // 801D3630
  goto L_801D3650; // 801D3634
L_801D3638:;
  cmps(c,0,(int32_t)c->r[0],44); // 801D3638
  if (crb(c,2)) { goto L_801D3650; } // 801D363C
  if (!crb(c,0)) { goto L_801D3658; } // 801D3640
  cmps(c,0,(int32_t)c->r[0],32); // 801D3644
  if (crb(c,2)) { goto L_801D3650; } // 801D3648
  goto L_801D3658; // 801D364C
L_801D3650:;
  c->r[31]=c->r[31]+0x00000001u; // 801D3650
  IRQCHK(c); goto L_801D3604; // 801D3654
L_801D3658:;
  c->r[25]=c->r[31]|c->r[31]; // 801D3658
L_801D365C:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 801D365C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D3660
  cmps(c,0,(int32_t)c->r[0],32); // 801D3664
  if (crb(c,2)) { goto L_801D36B8; } // 801D3668
  if (!crb(c,0)) { goto L_801D369C; } // 801D366C
  cmps(c,0,(int32_t)c->r[0],11); // 801D3670
  if (!crb(c,0)) { goto L_801D3690; } // 801D3674
  cmps(c,0,(int32_t)c->r[0],0); // 801D3678
  if (crb(c,2)) { goto L_801D36B8; } // 801D367C
  if (crb(c,0)) { goto L_801D36B0; } // 801D3680
  cmps(c,0,(int32_t)c->r[0],9); // 801D3684
  if (!crb(c,0)) { goto L_801D36B8; } // 801D3688
  goto L_801D36B0; // 801D368C
L_801D3690:;
  cmps(c,0,(int32_t)c->r[0],13); // 801D3690
  if (crb(c,2)) { goto L_801D36B8; } // 801D3694
  goto L_801D36B0; // 801D3698
L_801D369C:;
  cmps(c,0,(int32_t)c->r[0],60); // 801D369C
  if (crb(c,2)) { goto L_801D36B8; } // 801D36A0
  if (!crb(c,0)) { goto L_801D36B0; } // 801D36A4
  cmps(c,0,(int32_t)c->r[0],44); // 801D36A8
  if (crb(c,2)) { goto L_801D36B8; } // 801D36AC
L_801D36B0:;
  c->r[25]=c->r[25]+0x00000001u; // 801D36B0
  IRQCHK(c); goto L_801D365C; // 801D36B4
L_801D36B8:;
  c->r[21]=c->r[25]-c->r[31]; // 801D36B8
  c->r[3]=c->r[29]|c->r[29]; // 801D36BC
  c->r[4]=c->r[21]+0x00000001u; // 801D36C0
  c->lr=0x801D36C8u; f_8009FE8C(c); // 801D36C4
  c->r[20]=c->r[3]|c->r[3]; // 801D36C8
  c->r[4]=c->r[31]|c->r[31]; // 801D36CC
  c->r[5]=c->r[21]|c->r[21]; // 801D36D0
  c->lr=0x801D36D8u; f_80235294(c); // 801D36D4
  W8(c->r[20]+c->r[21],c->r[27]); // 801D36D8
  c->r[0]=c->r[20]-c->r[24]; // 801D36DC
  c->r[31]=c->r[25]|c->r[25]; // 801D36E0
  c->r[22]=c->r[22]+0x00000001u; // 801D36E4
  W32(c->r[24]+0x00000000u,c->r[0]); // 801D36E8
  c->r[24]=c->r[24]+0x00000004u; // 801D36EC
L_801D36F0:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[26]); // 801D36F0
  if (crb(c,0)) { IRQCHK(c); goto L_801D3604; } // 801D36F4
  c->r[0]=c->r[23]-c->r[28]; // 801D36F8
  W32(c->r[28]+0x00000004u,c->r[26]); // 801D36FC
  c->r[3]=0u+0x00000001u; // 801D3700
  W32(c->r[28]+0x00000018u,c->r[23]); // 801D3704
  W32(c->r[28]+0x00000008u,c->r[0]); // 801D3708
  W32(c->r[30]+0x00000000u,c->r[31]); // 801D370C
L_801D3710:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D3710
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D3714
  c->lr=c->r[0]; // 801D3718
  c->r[1]=c->r[1]+0x00000040u; // 801D371C
  return; // 801D3720
}

// fn_801D3724
void f_801D3724(Ctx* __restrict c) {
  trace_call(0x801D3724u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3724
  c->r[0]=c->lr; // 801D3728
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D372C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3730
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D3734
  c->r[30]=c->r[3]|c->r[3]; // 801D3738
  c->r[3]=0u+0x80570000u; // 801D373C
  c->r[4]=c->r[30]|c->r[30]; // 801D3740
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D3744
  c->lr=0x801D374Cu; f_801BD240(c); // 801D3748
  c->r[31]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[31]); // 801D374C
  if (!crb(c,1)) { goto L_801D376C; } // 801D3750
  c->r[3]=c->r[30]|c->r[30]; // 801D3754
  c->lr=0x801D375Cu; f_801BD430(c); // 801D3758
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D375C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D3760
  if (crb(c,2)) { goto L_801D376C; } // 801D3764
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801D3768
L_801D376C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D376C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3770
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D3774
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3778
  c->lr=c->r[0]; // 801D377C
  c->r[1]=c->r[1]+0x00000010u; // 801D3780
  return; // 801D3784
}

// fn_801D3788
void f_801D3788(Ctx* __restrict c) {
  trace_call(0x801D3788u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3788
  c->r[0]=c->lr; // 801D378C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3790
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3794
  c->r[31]=c->r[3]|c->r[3]; // 801D3798
  c->lr=0x801D37A0u; f_801BD430(c); // 801D379C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D37A0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D37A4
  if (!crb(c,2)) { goto L_801D37B4; } // 801D37A8
  c->r[3]=0u+0x00000000u; // 801D37AC
  goto L_801D37D4; // 801D37B0
L_801D37B4:;
  c->r[3]=0u+0x80570000u; // 801D37B4
  c->r[4]=c->r[31]|c->r[31]; // 801D37B8
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D37BC
  c->lr=0x801D37C4u; f_801BD240(c); // 801D37C0
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D37C4
  c->r[0]=0u-c->r[3]; // 801D37C8
  c->r[0]=c->r[0]|c->r[3]; // 801D37CC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D37D0
L_801D37D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D37D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D37D8
  c->lr=c->r[0]; // 801D37DC
  c->r[1]=c->r[1]+0x00000010u; // 801D37E0
  return; // 801D37E4
}

// fn_801D37E8
void f_801D37E8(Ctx* __restrict c) {
  trace_call(0x801D37E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D37E8
  c->r[0]=c->lr; // 801D37EC
  cmps(c,0,(int32_t)c->r[3],0); // 801D37F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D37F4
  if (crb(c,0)) { goto L_801D3804; } // 801D37F8
  cmps(c,0,(int32_t)c->r[3],4); // 801D37FC
  if (crb(c,0)) { goto L_801D3808; } // 801D3800
L_801D3804:;
  c->r[3]=0u+0x00000000u; // 801D3804
L_801D3808:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D3808
  if (crb(c,0)) { goto L_801D3818; } // 801D380C
  cmps(c,0,(int32_t)c->r[4],48); // 801D3810
  if (crb(c,0)) { goto L_801D381C; } // 801D3814
L_801D3818:;
  c->r[4]=0u+0x00000000u; // 801D3818
L_801D381C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801D381C
  c->r[3]=0u+0x80570000u; // 801D3820
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D3824
  c->r[4]=c->r[4]+c->r[0]; // 801D3828
  c->lr=0x801D3830u; f_801BD2E4(c); // 801D382C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3830
  if (crb(c,2)) { goto L_801D3840; } // 801D3834
  c->r[3]=0u+0x00000001u; // 801D3838
  goto L_801D3844; // 801D383C
L_801D3840:;
  c->r[3]=0u+0x00000000u; // 801D3840
L_801D3844:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3844
  c->lr=c->r[0]; // 801D3848
  c->r[1]=c->r[1]+0x00000010u; // 801D384C
  return; // 801D3850
}

// fn_801D3854
void f_801D3854(Ctx* __restrict c) {
  trace_call(0x801D3854u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3854
  c->r[0]=c->lr; // 801D3858
  cmps(c,0,(int32_t)c->r[3],0); // 801D385C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3860
  if (crb(c,0)) { goto L_801D3870; } // 801D3864
  cmps(c,0,(int32_t)c->r[3],4); // 801D3868
  if (crb(c,0)) { goto L_801D3874; } // 801D386C
L_801D3870:;
  c->r[3]=0u+0x00000000u; // 801D3870
L_801D3874:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D3874
  if (crb(c,0)) { goto L_801D3884; } // 801D3878
  cmps(c,0,(int32_t)c->r[4],16); // 801D387C
  if (crb(c,0)) { goto L_801D3888; } // 801D3880
L_801D3884:;
  c->r[4]=0u+0x00000000u; // 801D3884
L_801D3888:;
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 801D3888
  c->r[3]=0u+0x80570000u; // 801D388C
  c->r[4]=c->r[4]+c->r[0]; // 801D3890
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D3894
  c->r[4]=c->r[4]+0x000000C0u; // 801D3898
  c->lr=0x801D38A0u; f_801BD2E4(c); // 801D389C
  cmps(c,0,(int32_t)c->r[3],0); // 801D38A0
  if (crb(c,2)) { goto L_801D38B0; } // 801D38A4
  c->r[3]=0u+0x00000001u; // 801D38A8
  goto L_801D38B4; // 801D38AC
L_801D38B0:;
  c->r[3]=0u+0x00000000u; // 801D38B0
L_801D38B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D38B4
  c->lr=c->r[0]; // 801D38B8
  c->r[1]=c->r[1]+0x00000010u; // 801D38BC
  return; // 801D38C0
}

// fn_801D38C4
void f_801D38C4(Ctx* __restrict c) {
  trace_call(0x801D38C4u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D38C4
  if (crb(c,0)) { goto L_801D38D4; } // 801D38C8
  cmps(c,0,(int32_t)c->r[3],4); // 801D38CC
  if (crb(c,0)) { goto L_801D38D8; } // 801D38D0
L_801D38D4:;
  c->r[3]=0u+0x00000000u; // 801D38D4
L_801D38D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D38D8
  if (crb(c,0)) { goto L_801D38E8; } // 801D38DC
  cmps(c,0,(int32_t)c->r[4],48); // 801D38E0
  if (crb(c,0)) { goto L_801D38EC; } // 801D38E4
L_801D38E8:;
  c->r[4]=0u+0x00000000u; // 801D38E8
L_801D38EC:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801D38EC
  c->r[3]=0u+0x80570000u; // 801D38F0
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D38F4
  c->r[4]=c->r[4]+c->r[0]; // 801D38F8
  f_801BD2AC(c); return; // 801D38FC
}

// fn_801D3900
void f_801D3900(Ctx* __restrict c) {
  trace_call(0x801D3900u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D3900
  if (crb(c,0)) { goto L_801D3910; } // 801D3904
  cmps(c,0,(int32_t)c->r[3],4); // 801D3908
  if (crb(c,0)) { goto L_801D3914; } // 801D390C
L_801D3910:;
  c->r[3]=0u+0x00000000u; // 801D3910
L_801D3914:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D3914
  if (crb(c,0)) { goto L_801D3924; } // 801D3918
  cmps(c,0,(int32_t)c->r[4],16); // 801D391C
  if (crb(c,0)) { goto L_801D3928; } // 801D3920
L_801D3924:;
  c->r[4]=0u+0x00000000u; // 801D3924
L_801D3928:;
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 801D3928
  c->r[3]=0u+0x80570000u; // 801D392C
  c->r[4]=c->r[4]+c->r[0]; // 801D3930
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D3934
  c->r[4]=c->r[4]+0x000000C0u; // 801D3938
  f_801BD2AC(c); return; // 801D393C
}

// fn_801D3940
void f_801D3940(Ctx* __restrict c) {
  trace_call(0x801D3940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3940
  c->r[0]=c->lr; // 801D3944
  cmps(c,0,(int32_t)c->r[3],0); // 801D3948
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D394C
  if (crb(c,0)) { goto L_801D395C; } // 801D3950
  cmps(c,0,(int32_t)c->r[3],4); // 801D3954
  if (crb(c,0)) { goto L_801D3960; } // 801D3958
L_801D395C:;
  c->r[3]=0u+0x00000000u; // 801D395C
L_801D3960:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D3960
  if (crb(c,0)) { goto L_801D3970; } // 801D3964
  cmps(c,0,(int32_t)c->r[4],48); // 801D3968
  if (crb(c,0)) { goto L_801D3974; } // 801D396C
L_801D3970:;
  c->r[4]=0u+0x00000000u; // 801D3970
L_801D3974:;
  c->r[5]=R32(c->r[13]+0xFFFF9750u); // 801D3974
  cmps(c,0,(int32_t)c->r[5],0); // 801D3978
  if (crb(c,2)) { goto L_801D39A0; } // 801D397C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801D3980
  c->r[3]=c->r[5]|c->r[5]; // 801D3984
  c->r[4]=c->r[4]+c->r[0]; // 801D3988
  c->lr=0x801D3990u; f_801F7FE4(c); // 801D398C
  c->r[0]=0u-c->r[3]; // 801D3990
  c->r[0]=c->r[0]|c->r[3]; // 801D3994
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D3998
  goto L_801D39A4; // 801D399C
L_801D39A0:;
  c->r[3]=0u+0x00000000u; // 801D39A0
L_801D39A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D39A4
  c->lr=c->r[0]; // 801D39A8
  c->r[1]=c->r[1]+0x00000010u; // 801D39AC
  return; // 801D39B0
}

// fn_801D39B4
void f_801D39B4(Ctx* __restrict c) {
  trace_call(0x801D39B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D39B4
  c->r[0]=c->lr; // 801D39B8
  cmps(c,0,(int32_t)c->r[3],0); // 801D39BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D39C0
  if (crb(c,0)) { goto L_801D39D0; } // 801D39C4
  cmps(c,0,(int32_t)c->r[3],4); // 801D39C8
  if (crb(c,0)) { goto L_801D39D4; } // 801D39CC
L_801D39D0:;
  c->r[3]=0u+0x00000000u; // 801D39D0
L_801D39D4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D39D4
  if (crb(c,0)) { goto L_801D39E4; } // 801D39D8
  cmps(c,0,(int32_t)c->r[4],16); // 801D39DC
  if (crb(c,0)) { goto L_801D39E8; } // 801D39E0
L_801D39E4:;
  c->r[4]=0u+0x00000000u; // 801D39E4
L_801D39E8:;
  c->r[5]=R32(c->r[13]+0xFFFF9750u); // 801D39E8
  cmps(c,0,(int32_t)c->r[5],0); // 801D39EC
  if (crb(c,2)) { goto L_801D3A18; } // 801D39F0
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 801D39F4
  c->r[3]=c->r[5]|c->r[5]; // 801D39F8
  c->r[4]=c->r[4]+c->r[0]; // 801D39FC
  c->r[4]=c->r[4]+0x000000C0u; // 801D3A00
  c->lr=0x801D3A08u; f_801F7FE4(c); // 801D3A04
  c->r[0]=0u-c->r[3]; // 801D3A08
  c->r[0]=c->r[0]|c->r[3]; // 801D3A0C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D3A10
  goto L_801D3A1C; // 801D3A14
L_801D3A18:;
  c->r[3]=0u+0x00000000u; // 801D3A18
L_801D3A1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3A1C
  c->lr=c->r[0]; // 801D3A20
  c->r[1]=c->r[1]+0x00000010u; // 801D3A24
  return; // 801D3A28
}

// fn_801D3A2C
void f_801D3A2C(Ctx* __restrict c) {
  trace_call(0x801D3A2Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 801D3A2C
  if (crb(c,0)) { goto L_801D3A3C; } // 801D3A30
  cmps(c,0,(int32_t)c->r[3],4); // 801D3A34
  if (crb(c,0)) { goto L_801D3A40; } // 801D3A38
L_801D3A3C:;
  c->r[3]=0u+0x00000000u; // 801D3A3C
L_801D3A40:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D3A40
  if (crb(c,0)) { goto L_801D3A50; } // 801D3A44
  cmps(c,0,(int32_t)c->r[4],48); // 801D3A48
  if (crb(c,0)) { goto L_801D3A54; } // 801D3A4C
L_801D3A50:;
  c->r[4]=0u+0x00000000u; // 801D3A50
L_801D3A54:;
  c->r[5]=R32(c->r[13]+0xFFFF9750u); // 801D3A54
  cmps(c,0,(int32_t)c->r[5],0); // 801D3A58
  if (crb(c,2)) return; // 801D3A5C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801D3A60
  c->r[3]=c->r[5]|c->r[5]; // 801D3A64
  c->r[4]=c->r[4]+c->r[0]; // 801D3A68
  f_801F7FAC(c); return; // 801D3A6C
  return; // 801D3A70
}

// fn_801D3A74
void f_801D3A74(Ctx* __restrict c) {
  trace_call(0x801D3A74u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D3A74
  if (crb(c,0)) { goto L_801D3A84; } // 801D3A78
  cmps(c,0,(int32_t)c->r[3],4); // 801D3A7C
  if (crb(c,0)) { goto L_801D3A88; } // 801D3A80
L_801D3A84:;
  c->r[3]=0u+0x00000000u; // 801D3A84
L_801D3A88:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D3A88
  if (crb(c,0)) { goto L_801D3A98; } // 801D3A8C
  cmps(c,0,(int32_t)c->r[4],16); // 801D3A90
  if (crb(c,0)) { goto L_801D3A9C; } // 801D3A94
L_801D3A98:;
  c->r[4]=0u+0x00000000u; // 801D3A98
L_801D3A9C:;
  c->r[5]=R32(c->r[13]+0xFFFF9750u); // 801D3A9C
  cmps(c,0,(int32_t)c->r[5],0); // 801D3AA0
  if (crb(c,2)) return; // 801D3AA4
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 801D3AA8
  c->r[3]=c->r[5]|c->r[5]; // 801D3AAC
  c->r[4]=c->r[4]+c->r[0]; // 801D3AB0
  c->r[4]=c->r[4]+0x000000C0u; // 801D3AB4
  f_801F7FAC(c); return; // 801D3AB8
  return; // 801D3ABC
}

// fn_801D3AC0
void f_801D3AC0(Ctx* __restrict c) {
  trace_call(0x801D3AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3AC0
  c->r[0]=c->lr; // 801D3AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3ACC
  c->r[31]=c->r[3]|c->r[3]; // 801D3AD0
  c->lr=0x801D3AD8u; f_801BD430(c); // 801D3AD4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3AD8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D3ADC
  if (!crb(c,2)) { goto L_801D3AEC; } // 801D3AE0
  c->r[3]=0u+0x00000000u; // 801D3AE4
  goto L_801D3B34; // 801D3AE8
L_801D3AEC:;
  c->r[3]=0u+0x80570000u; // 801D3AEC
  c->r[4]=c->r[31]|c->r[31]; // 801D3AF0
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D3AF4
  c->lr=0x801D3AFCu; f_801BD288(c); // 801D3AF8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D3AFC
  if (crb(c,2)) { goto L_801D3B0C; } // 801D3B00
  c->r[3]=0u+0x00000000u; // 801D3B04
  goto L_801D3B34; // 801D3B08
L_801D3B0C:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D3B0C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3B10
  if (crb(c,2)) { goto L_801D3B30; } // 801D3B14
  c->r[4]=c->r[31]|c->r[31]; // 801D3B18
  c->lr=0x801D3B20u; f_801F7F68(c); // 801D3B1C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D3B20
  if (crb(c,2)) { goto L_801D3B30; } // 801D3B24
  c->r[3]=0u+0x00000001u; // 801D3B28
  goto L_801D3B34; // 801D3B2C
L_801D3B30:;
  c->r[3]=0u+0x00000000u; // 801D3B30
L_801D3B34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3B34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3B38
  c->lr=c->r[0]; // 801D3B3C
  c->r[1]=c->r[1]+0x00000010u; // 801D3B40
  return; // 801D3B44
}

// fn_801D3B48
void f_801D3B48(Ctx* __restrict c) {
  trace_call(0x801D3B48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3B48
  c->r[0]=c->lr; // 801D3B4C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3B54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3B58
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D3B5C
  if (crb(c,0)) { goto L_801D3B6C; } // 801D3B60
  cmps(c,0,(int32_t)c->r[3],4); // 801D3B64
  if (crb(c,0)) { goto L_801D3B70; } // 801D3B68
L_801D3B6C:;
  c->r[3]=0u+0x00000000u; // 801D3B6C
L_801D3B70:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D3B70
  if (crb(c,0)) { goto L_801D3B80; } // 801D3B74
  cmps(c,0,(int32_t)c->r[4],48); // 801D3B78
  if (crb(c,0)) { goto L_801D3B84; } // 801D3B7C
L_801D3B80:;
  c->r[4]=0u+0x00000000u; // 801D3B80
L_801D3B84:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801D3B84
  c->r[31]=0u+0x80570000u; // 801D3B88
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D3B8C
  c->r[30]=c->r[4]+c->r[0]; // 801D3B90
  c->r[4]=c->r[30]|c->r[30]; // 801D3B94
  c->lr=0x801D3B9Cu; f_801BD318(c); // 801D3B98
  cmps(c,0,(int32_t)c->r[3],0); // 801D3B9C
  if (crb(c,2)) { goto L_801D3BAC; } // 801D3BA0
  c->r[3]=0u+0x00000000u; // 801D3BA4
  goto L_801D3BC4; // 801D3BA8
L_801D3BAC:;
  c->r[4]=c->r[30]|c->r[30]; // 801D3BAC
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D3BB0
  c->lr=0x801D3BB8u; f_801BD2E4(c); // 801D3BB4
  c->r[0]=0u-c->r[3]; // 801D3BB8
  c->r[0]=c->r[0]|c->r[3]; // 801D3BBC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D3BC0
L_801D3BC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3BC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3BC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D3BCC
  c->lr=c->r[0]; // 801D3BD0
  c->r[1]=c->r[1]+0x00000010u; // 801D3BD4
  return; // 801D3BD8
}

// fn_801D3BDC
void f_801D3BDC(Ctx* __restrict c) {
  trace_call(0x801D3BDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3BDC
  c->r[0]=c->lr; // 801D3BE0
  cmps(c,0,(int32_t)c->r[3],0); // 801D3BE4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D3BE8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801D3BEC
  c->r[31]=c->r[4]|c->r[4]; // 801D3BF0
  W32(c->r[1]+0x00000058u,c->r[30]); // 801D3BF4
  c->r[30]=c->r[3]|c->r[3]; // 801D3BF8
  W32(c->r[1]+0x00000054u,c->r[29]); // 801D3BFC
  W32(c->r[1]+0x00000050u,c->r[28]); // 801D3C00
  if (crb(c,0)) { goto L_801D3C10; } // 801D3C04
  cmps(c,0,(int32_t)c->r[3],2); // 801D3C08
  if (crb(c,0)) { goto L_801D3C14; } // 801D3C0C
L_801D3C10:;
  c->r[30]=0u+0x00000000u; // 801D3C10
L_801D3C14:;
  c->r[3]=c->r[31]|c->r[31]; // 801D3C14
  c->lr=0x801D3C1Cu; f_801BD430(c); // 801D3C18
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3C1C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D3C20
  if (crb(c,2)) { goto L_801D3DD0; } // 801D3C24
  c->r[28]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801D3C28
  c->r[29]=c->r[13]+0xFFFF94B8u; // 801D3C2C
  c->r[0]=R32(c->r[29]+c->r[28]); // 801D3C30
  cmps(c,0,(int32_t)c->r[0],0); // 801D3C34
  if (crb(c,2)) { goto L_801D3CF0; } // 801D3C38
  c->r[3]=c->r[31]|c->r[31]; // 801D3C3C
  c->lr=0x801D3C44u; f_801BD430(c); // 801D3C40
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3C44
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D3C48
  if (!crb(c,2)) { goto L_801D3C58; } // 801D3C4C
  c->r[0]=0u+0x00000000u; // 801D3C50
  goto L_801D3C7C; // 801D3C54
L_801D3C58:;
  c->r[3]=0u+0x80570000u; // 801D3C58
  c->r[4]=c->r[30]|c->r[30]; // 801D3C5C
  c->r[5]=c->r[31]|c->r[31]; // 801D3C60
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D3C64
  c->lr=0x801D3C6Cu; f_801BD014(c); // 801D3C68
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D3C6C
  c->r[0]=0u-c->r[3]; // 801D3C70
  c->r[0]=c->r[0]|c->r[3]; // 801D3C74
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D3C78
L_801D3C7C:;
  cmpu(c,0,c->r[0],0x00000001u); // 801D3C7C
  if (!crb(c,2)) { goto L_801D3DD0; } // 801D3C80
  c->r[3]=R32(c->r[29]+c->r[28]); // 801D3C84
  c->r[5]=c->r[31]|c->r[31]; // 801D3C88
  c->r[4]=0u+0x00000001u; // 801D3C8C
  c->lr=0x801D3C94u; f_80067AC0(c); // 801D3C90
  c->r[0]=0u+0x803E0000u; // 801D3C94
  c->r[3]=addc(c,c->r[0],0x00000F70u,0); cr0(c,c->r[3]); // 801D3C98
  if (crb(c,2)) { goto L_801D3CAC; } // 801D3C9C
  {uint32_t ea=c->r[2]+0xFFFFBCC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3CA0
  c->r[4]=0u+0xFFFFFFFFu; // 801D3CA4
  c->lr=0x801D3CACu; f_80048B94(c); // 801D3CA8
L_801D3CAC:;
  c->r[3]=0u+0x803E0000u; // 801D3CAC
  c->r[3]=c->r[3]+0x00000F70u; // 801D3CB0
  c->r[4]=addc(c,c->r[3],0x00000007u,0); cr0(c,c->r[4]); // 801D3CB4
  if (crb(c,2)) { goto L_801D3DD0; } // 801D3CB8
  cmps(c,0,(int32_t)c->r[30],0); // 801D3CBC
  if (!crb(c,0)) { goto L_801D3CD8; } // 801D3CC0
  {uint32_t ea=c->r[2]+0xFFFFBCC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D3CC4
  c->r[3]=c->r[4]|c->r[4]; // 801D3CC8
  c->r[4]=0u+0xFFFFFFFFu; // 801D3CCC
  c->lr=0x801D3CD4u; f_80048B94(c); // 801D3CD0
  goto L_801D3DD0; // 801D3CD4
L_801D3CD8:;
  c->r[3]=0u+0x80460000u; // 801D3CD8
  c->r[5]=c->r[30]|c->r[30]; // 801D3CDC
  c->r[6]=0u+0xFFFFFFFFu; // 801D3CE0
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 801D3CE4
  c->lr=0x801D3CECu; f_8004AE4C(c); // 801D3CE8
  goto L_801D3DD0; // 801D3CEC
L_801D3CF0:;
  c->r[3]=c->r[31]|c->r[31]; // 801D3CF0
  c->lr=0x801D3CF8u; f_801BD430(c); // 801D3CF4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3CF8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D3CFC
  if (!crb(c,2)) { goto L_801D3D0C; } // 801D3D00
  c->r[0]=0u+0x00000000u; // 801D3D04
  goto L_801D3D2C; // 801D3D08
L_801D3D0C:;
  c->r[3]=0u+0x80570000u; // 801D3D0C
  c->r[4]=c->r[31]|c->r[31]; // 801D3D10
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 801D3D14
  c->lr=0x801D3D1Cu; f_801BD240(c); // 801D3D18
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D3D1C
  c->r[0]=0u-c->r[3]; // 801D3D20
  c->r[0]=c->r[0]|c->r[3]; // 801D3D24
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D3D28
L_801D3D2C:;
  cmpu(c,0,c->r[0],0x00000001u); // 801D3D2C
  if (!crb(c,2)) { goto L_801D3DD0; } // 801D3D30
  c->r[29]=0u+0x80570000u; // 801D3D34
  c->r[4]=c->r[30]|c->r[30]; // 801D3D38
  c->r[3]=c->r[29]+0xFFFFA2D0u; // 801D3D3C
  c->r[5]=0u+0x00000008u; // 801D3D40
  c->lr=0x801D3D48u; f_801BD0D4(c); // 801D3D44
  c->r[4]=c->r[31]|c->r[31]; // 801D3D48
  c->r[3]=c->r[29]+0xFFFFA2D0u; // 801D3D4C
  c->lr=0x801D3D54u; f_801BD240(c); // 801D3D50
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 801D3D54
  c->r[4]=c->r[30]|c->r[30]; // 801D3D58
  c->r[5]=c->r[31]|c->r[31]; // 801D3D5C
  c->r[3]=c->r[29]+0xFFFFA2D0u; // 801D3D60
  c->lr=0x801D3D68u; f_801BD054(c); // 801D3D64
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801D3D68
  c->r[4]=c->r[30]|c->r[30]; // 801D3D6C
  c->r[5]=c->r[31]|c->r[31]; // 801D3D70
  c->lr=0x801D3D78u; f_800F498C(c); // 801D3D74
  c->r[0]=0u+0x00000000u; // 801D3D78
  c->r[3]=0u+0x805C0000u; // 801D3D7C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D3D80
  c->r[4]=c->r[30]|c->r[30]; // 801D3D84
  c->r[3]=c->r[3]+0x00005B94u; // 801D3D88
  c->r[5]=c->r[1]+0x00000008u; // 801D3D8C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D3D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3D94
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D3D98
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D3D9C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801D3DA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3DA4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D3DA8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D3DAC
  W32(c->r[1]+0x00000030u,c->r[0]); // 801D3DB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3DB4
  W32(c->r[1]+0x00000038u,c->r[0]); // 801D3DB8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801D3DBC
  W32(c->r[1]+0x00000040u,c->r[0]); // 801D3DC0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D3DC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3DC8
  c->lr=0x801D3DD0u; f_80213998(c); // 801D3DCC
L_801D3DD0:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D3DD0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801D3DD4
  c->r[30]=R32(c->r[1]+0x00000058u); // 801D3DD8
  c->r[29]=R32(c->r[1]+0x00000054u); // 801D3DDC
  c->r[28]=R32(c->r[1]+0x00000050u); // 801D3DE0
  c->lr=c->r[0]; // 801D3DE4
  c->r[1]=c->r[1]+0x00000060u; // 801D3DE8
  return; // 801D3DEC
}

// fn_801D3DF0
void f_801D3DF0(Ctx* __restrict c) {
  trace_call(0x801D3DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3DF0
  c->r[0]=c->lr; // 801D3DF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3DF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3DFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3E00
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3E04
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D3E08
  c->r[0]=R32(c->r[13]+0xFFFF9750u); // 801D3E0C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3E10
  if (crb(c,2)) { goto L_801D3F90; } // 801D3E14
  c->r[29]=0u+0x00000000u; // 801D3E18
  c->r[31]=0u+0x80570000u; // 801D3E1C
L_801D3E20:;
  c->r[4]=c->r[29]|c->r[29]; // 801D3E20
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D3E24
  c->lr=0x801D3E2Cu; f_801BD240(c); // 801D3E28
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801D3E2C
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D3E30
  c->r[4]=c->r[29]|c->r[29]; // 801D3E34
  c->lr=0x801D3E3Cu; f_801F7E00(c); // 801D3E38
  c->r[29]=c->r[29]+0x00000001u; // 801D3E3C
  cmps(c,0,(int32_t)c->r[29],21); // 801D3E40
  if (crb(c,0)) { IRQCHK(c); goto L_801D3E20; } // 801D3E44
  c->r[31]=0u+0x80570000u; // 801D3E48
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D3E4C
  c->lr=0x801D3E54u; f_801BD1B0(c); // 801D3E50
  c->r[30]=0u+0x00000000u; // 801D3E54
L_801D3E58:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801D3E58
  c->r[4]=c->r[30]|c->r[30]; // 801D3E5C
  c->lr=0x801D3E64u; f_800F4838(c); // 801D3E60
  cmps(c,0,(int32_t)c->r[3],0); // 801D3E64
  if (crb(c,2)) { goto L_801D3F18; } // 801D3E68
  c->r[28]=0u+0x00000000u; // 801D3E6C
L_801D3E70:;
  c->r[3]=c->r[28]|c->r[28]; // 801D3E70
  c->lr=0x801D3E78u; f_801BD430(c); // 801D3E74
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3E78
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D3E7C
  if (!crb(c,2)) { goto L_801D3E8C; } // 801D3E80
  c->r[0]=0u+0x00000000u; // 801D3E84
  goto L_801D3EAC; // 801D3E88
L_801D3E8C:;
  c->r[4]=c->r[30]|c->r[30]; // 801D3E8C
  c->r[5]=c->r[28]|c->r[28]; // 801D3E90
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D3E94
  c->lr=0x801D3E9Cu; f_801BD014(c); // 801D3E98
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D3E9C
  c->r[0]=0u-c->r[3]; // 801D3EA0
  c->r[0]=c->r[0]|c->r[3]; // 801D3EA4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D3EA8
L_801D3EAC:;
  cmpu(c,0,c->r[0],0x00000001u); // 801D3EAC
  if (!crb(c,2)) { goto L_801D3F0C; } // 801D3EB0
  c->r[4]=c->r[30]|c->r[30]; // 801D3EB4
  c->r[5]=c->r[28]|c->r[28]; // 801D3EB8
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D3EBC
  c->lr=0x801D3EC4u; f_801BD014(c); // 801D3EC0
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[29]); // 801D3EC4
  if (!crb(c,1)) { goto L_801D3EE4; } // 801D3EC8
  c->r[3]=c->r[28]|c->r[28]; // 801D3ECC
  c->lr=0x801D3ED4u; f_801BD430(c); // 801D3ED0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3ED4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D3ED8
  if (crb(c,2)) { goto L_801D3EE4; } // 801D3EDC
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 801D3EE0
L_801D3EE4:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D3EE4
  c->r[4]=c->r[28]|c->r[28]; // 801D3EE8
  c->lr=0x801D3EF0u; f_801F7F68(c); // 801D3EEC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D3EF0
  if (!crb(c,2)) { goto L_801D3EFC; } // 801D3EF4
  c->r[29]=c->r[29]+0x00000001u; // 801D3EF8
L_801D3EFC:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D3EFC
  c->r[4]=c->r[28]|c->r[28]; // 801D3F00
  c->r[5]=c->r[29]|c->r[29]; // 801D3F04
  c->lr=0x801D3F0Cu; f_801F7EB4(c); // 801D3F08
L_801D3F0C:;
  c->r[28]=c->r[28]+0x00000001u; // 801D3F0C
  cmps(c,0,(int32_t)c->r[28],21); // 801D3F10
  if (crb(c,0)) { IRQCHK(c); goto L_801D3E70; } // 801D3F14
L_801D3F18:;
  c->r[30]=c->r[30]+0x00000001u; // 801D3F18
  cmps(c,0,(int32_t)c->r[30],2); // 801D3F1C
  if (crb(c,0)) { IRQCHK(c); goto L_801D3E58; } // 801D3F20
  c->r[31]=0u+0x00000000u; // 801D3F24
L_801D3F28:;
  c->r[3]=c->r[31]|c->r[31]; // 801D3F28
  c->lr=0x801D3F30u; f_801BD430(c); // 801D3F2C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3F30
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D3F34
  if (crb(c,2)) { goto L_801D3F84; } // 801D3F38
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D3F3C
  c->r[4]=c->r[31]|c->r[31]; // 801D3F40
  c->lr=0x801D3F48u; f_801F7F68(c); // 801D3F44
  c->r[30]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[30]); // 801D3F48
  if (!crb(c,1)) { goto L_801D3F84; } // 801D3F4C
  c->r[3]=c->r[31]|c->r[31]; // 801D3F50
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801D3F54
  c->lr=0x801D3F5Cu; f_801BD354(c); // 801D3F58
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D3F5C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D3F60
  if (!crb(c,0)) { goto L_801D3F74; } // 801D3F64
  c->r[3]=c->r[31]|c->r[31]; // 801D3F68
  c->lr=0x801D3F70u; f_801BD354(c); // 801D3F6C
  c->r[30]=R32(c->r[3]+0x00000010u); // 801D3F70
L_801D3F74:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D3F74
  c->r[4]=c->r[31]|c->r[31]; // 801D3F78
  c->r[5]=c->r[30]+0x00000001u; // 801D3F7C
  c->lr=0x801D3F84u; f_801F7E00(c); // 801D3F80
L_801D3F84:;
  c->r[31]=c->r[31]+0x00000001u; // 801D3F84
  cmps(c,0,(int32_t)c->r[31],21); // 801D3F88
  if (crb(c,0)) { IRQCHK(c); goto L_801D3F28; } // 801D3F8C
L_801D3F90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3F90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3F94
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3F98
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3F9C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D3FA0
  c->lr=c->r[0]; // 801D3FA4
  c->r[1]=c->r[1]+0x00000020u; // 801D3FA8
  return; // 801D3FAC
}

// fn_801D3FB0
void f_801D3FB0(Ctx* __restrict c) {
  trace_call(0x801D3FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3FB0
  c->r[0]=c->lr; // 801D3FB4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D3FB8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801D3FBC
  W32(c->r[1]+0x00000058u,c->r[30]); // 801D3FC0
  W32(c->r[1]+0x00000054u,c->r[29]); // 801D3FC4
  W32(c->r[1]+0x00000050u,c->r[28]); // 801D3FC8
  c->r[28]=c->r[3]|c->r[3]; // 801D3FCC
  c->r[0]=R32(c->r[13]+0xFFFF9750u); // 801D3FD0
  cmps(c,0,(int32_t)c->r[0],0); // 801D3FD4
  if (crb(c,2)) { goto L_801D400C; } // 801D3FD8
  c->r[29]=0u+0x00000000u; // 801D3FDC
  c->r[31]=0u+0x80570000u; // 801D3FE0
L_801D3FE4:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D3FE4
  c->r[4]=c->r[29]|c->r[29]; // 801D3FE8
  c->lr=0x801D3FF0u; f_801F7F68(c); // 801D3FEC
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801D3FF0
  c->r[4]=c->r[29]|c->r[29]; // 801D3FF4
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D3FF8
  c->lr=0x801D4000u; f_801BD21C(c); // 801D3FFC
  c->r[29]=c->r[29]+0x00000001u; // 801D4000
  cmps(c,0,(int32_t)c->r[29],21); // 801D4004
  if (crb(c,0)) { IRQCHK(c); goto L_801D3FE4; } // 801D4008
L_801D400C:;
  c->r[31]=0u+0x80570000u; // 801D400C
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D4010
  c->lr=0x801D4018u; f_801BD158(c); // 801D4014
  c->r[30]=c->r[28]|c->r[28]; // 801D4018
  c->r[29]=0u+0x00000000u; // 801D401C
L_801D4020:;
  c->r[4]=c->r[29]|c->r[29]; // 801D4020
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D4024
  c->r[5]=0u+0x00000000u; // 801D4028
  c->lr=0x801D4030u; f_801BD0D4(c); // 801D402C
  c->r[4]=c->r[29]|c->r[29]; // 801D4030
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D4034
  c->r[5]=0u+0x00000003u; // 801D4038
  c->r[6]=0u+0x00000003u; // 801D403C
  c->lr=0x801D4044u; f_801BD054(c); // 801D4040
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D4044
  cmps(c,0,(int32_t)c->r[4],0); // 801D4048
  if (!crb(c,1)) { goto L_801D407C; } // 801D404C
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D4050
  c->lr=0x801D4058u; f_801BD240(c); // 801D4054
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D4058
  if (!crb(c,2)) { goto L_801D407C; } // 801D405C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D4060
  c->lr=0x801D4068u; f_801BD354(c); // 801D4064
  c->r[5]=R32(c->r[3]+0x00000010u); // 801D4068
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D406C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801D4070
  c->r[5]=c->r[5]+0x00000001u; // 801D4074
  c->lr=0x801D407Cu; f_801BD21C(c); // 801D4078
L_801D407C:;
  c->r[29]=c->r[29]+0x00000001u; // 801D407C
  c->r[30]=c->r[30]+0x00000004u; // 801D4080
  cmps(c,0,(int32_t)c->r[29],2); // 801D4084
  if (crb(c,0)) { IRQCHK(c); goto L_801D4020; } // 801D4088
  c->r[30]=0u+0x00000000u; // 801D408C
  c->r[31]=0u+0x80570000u; // 801D4090
L_801D4094:;
  c->r[4]=c->r[30]|c->r[30]; // 801D4094
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D4098
  c->lr=0x801D40A0u; f_801BD240(c); // 801D409C
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801D40A0
  c->r[4]=c->r[30]|c->r[30]; // 801D40A4
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D40A8
  c->lr=0x801D40B0u; f_801BD264(c); // 801D40AC
  c->r[30]=c->r[30]+0x00000001u; // 801D40B0
  cmps(c,0,(int32_t)c->r[30],21); // 801D40B4
  if (crb(c,0)) { IRQCHK(c); goto L_801D4094; } // 801D40B8
  c->r[31]=c->r[28]|c->r[28]; // 801D40BC
  c->r[30]=0u+0x00000000u; // 801D40C0
L_801D40C4:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801D40C4
  c->r[4]=c->r[30]|c->r[30]; // 801D40C8
  c->r[5]=R32(c->r[31]+0x00000000u); // 801D40CC
  c->lr=0x801D40D4u; f_800F4930(c); // 801D40D0
  c->r[30]=c->r[30]+0x00000001u; // 801D40D4
  c->r[31]=c->r[31]+0x00000004u; // 801D40D8
  cmps(c,0,(int32_t)c->r[30],2); // 801D40DC
  if (crb(c,0)) { IRQCHK(c); goto L_801D40C4; } // 801D40E0
  c->r[0]=0u+0x00000000u; // 801D40E4
  c->r[30]=0u+0x00000000u; // 801D40E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D40EC
  c->r[31]=0u+0x805C0000u; // 801D40F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D40F4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D40F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D40FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D4100
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D4104
  W32(c->r[1]+0x00000020u,c->r[0]); // 801D4108
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D410C
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D4110
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D4114
  W32(c->r[1]+0x00000030u,c->r[0]); // 801D4118
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D411C
  W32(c->r[1]+0x00000038u,c->r[0]); // 801D4120
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801D4124
  W32(c->r[1]+0x00000040u,c->r[0]); // 801D4128
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D412C
L_801D4130:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801D4130
  c->r[4]=c->r[30]|c->r[30]; // 801D4134
  c->r[3]=c->r[31]+0x00005B94u; // 801D4138
  c->r[5]=c->r[1]+0x00000008u; // 801D413C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D4140
  c->lr=0x801D4148u; f_80213998(c); // 801D4144
  c->r[30]=c->r[30]+0x00000001u; // 801D4148
  c->r[28]=c->r[28]+0x00000004u; // 801D414C
  cmps(c,0,(int32_t)c->r[30],2); // 801D4150
  if (crb(c,0)) { IRQCHK(c); goto L_801D4130; } // 801D4154
  c->r[4]=0u+0x805D0000u; // 801D4158
  c->r[3]=0u+0x80470000u; // 801D415C
  c->r[4]=c->r[4]+0xFFFFE410u; // 801D4160
  c->r[0]=0u+0x00000000u; // 801D4164
  W32(c->r[4]+0x0000012Cu,c->r[0]); // 801D4168
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801D416C
  c->lr=0x801D4174u; f_80066D90(c); // 801D4170
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D4174
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801D4178
  c->r[30]=R32(c->r[1]+0x00000058u); // 801D417C
  c->r[29]=R32(c->r[1]+0x00000054u); // 801D4180
  c->r[28]=R32(c->r[1]+0x00000050u); // 801D4184
  c->lr=c->r[0]; // 801D4188
  c->r[1]=c->r[1]+0x00000060u; // 801D418C
  return; // 801D4190
}

// fn_801D4194
void f_801D4194(Ctx* __restrict c) {
  trace_call(0x801D4194u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4194
  c->r[0]=c->lr; // 801D4198
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D419C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D41A0
  c->r[31]=0u+0x80570000u; // 801D41A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D41A8
  c->r[30]=0u+0x00000000u; // 801D41AC
L_801D41B0:;
  c->r[4]=c->r[30]|c->r[30]; // 801D41B0
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D41B4
  c->r[5]=0u+0x00000000u; // 801D41B8
  c->lr=0x801D41C0u; f_801BD21C(c); // 801D41BC
  c->r[30]=c->r[30]+0x00000001u; // 801D41C0
  cmps(c,0,(int32_t)c->r[30],21); // 801D41C4
  if (crb(c,0)) { IRQCHK(c); goto L_801D41B0; } // 801D41C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D41CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D41D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D41D4
  c->lr=c->r[0]; // 801D41D8
  c->r[1]=c->r[1]+0x00000010u; // 801D41DC
  return; // 801D41E0
}

// fn_801D41E4
void f_801D41E4(Ctx* __restrict c) {
  trace_call(0x801D41E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D41E4
  c->r[0]=c->lr; // 801D41E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D41EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D41F0
  c->r[31]=0u+0x80570000u; // 801D41F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D41F8
  c->r[30]=0u+0x00000000u; // 801D41FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4200
L_801D4204:;
  c->r[29]=0u+0x00000000u; // 801D4204
L_801D4208:;
  c->r[4]=c->r[29]|c->r[29]; // 801D4208
  c->r[5]=c->r[30]|c->r[30]; // 801D420C
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D4210
  c->lr=0x801D4218u; f_801BD094(c); // 801D4214
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D4218
  if (crb(c,2)) { goto L_801D4230; } // 801D421C
  c->r[4]=c->r[30]|c->r[30]; // 801D4220
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801D4224
  c->r[5]=0u+0x00000000u; // 801D4228
  c->lr=0x801D4230u; f_801BD21C(c); // 801D422C
L_801D4230:;
  c->r[29]=c->r[29]+0x00000001u; // 801D4230
  cmps(c,0,(int32_t)c->r[29],2); // 801D4234
  if (crb(c,0)) { IRQCHK(c); goto L_801D4208; } // 801D4238
  c->r[30]=c->r[30]+0x00000001u; // 801D423C
  cmps(c,0,(int32_t)c->r[30],21); // 801D4240
  if (crb(c,0)) { IRQCHK(c); goto L_801D4204; } // 801D4244
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4248
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D424C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4250
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4254
  c->lr=c->r[0]; // 801D4258
  c->r[1]=c->r[1]+0x00000020u; // 801D425C
  return; // 801D4260
}

// fn_801D4264
void f_801D4264(Ctx* __restrict c) {
  trace_call(0x801D4264u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4264
  c->r[0]=c->lr; // 801D4268
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D426C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4270
  c->r[31]=0u+0x00000000u; // 801D4274
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4278
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D427C
  c->r[29]=c->r[3]|c->r[3]; // 801D4280
  c->r[0]=R32(c->r[13]+0xFFFF9750u); // 801D4284
  cmps(c,0,(int32_t)c->r[0],0); // 801D4288
  if (crb(c,2)) { goto L_801D42FC; } // 801D428C
  c->r[3]=c->r[0]|c->r[0]; // 801D4290
  c->r[4]=c->r[29]|c->r[29]; // 801D4294
  c->lr=0x801D429Cu; f_801F8B60(c); // 801D4298
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D429C
  if (crb(c,2)) { goto L_801D42B4; } // 801D42A0
  c->r[3]=c->r[29]|c->r[29]; // 801D42A4
  c->lr=0x801D42ACu; f_8006C8C8(c); // 801D42A8
  c->r[31]=R32(c->r[3]+0x00000040u); // 801D42AC
  goto L_801D42FC; // 801D42B0
L_801D42B4:;
  c->r[30]=0u+0x00000000u; // 801D42B4
L_801D42B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D42B8
  c->lr=0x801D42C0u; f_801BD430(c); // 801D42BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D42C0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D42C4
  if (crb(c,2)) { goto L_801D42F0; } // 801D42C8
  c->r[3]=c->r[30]|c->r[30]; // 801D42CC
  c->lr=0x801D42D4u; f_801BD430(c); // 801D42D0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D42D4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D42D8
  if (!crb(c,2)) { goto L_801D42F0; } // 801D42DC
  c->r[3]=c->r[30]|c->r[30]; // 801D42E0
  c->lr=0x801D42E8u; f_801BD354(c); // 801D42E4
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 801D42E8
  goto L_801D42FC; // 801D42EC
L_801D42F0:;
  c->r[30]=c->r[30]+0x00000001u; // 801D42F0
  cmps(c,0,(int32_t)c->r[30],21); // 801D42F4
  if (crb(c,0)) { IRQCHK(c); goto L_801D42B8; } // 801D42F8
L_801D42FC:;
  c->r[3]=c->r[31]|c->r[31]; // 801D42FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4300
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4304
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4308
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D430C
  c->lr=c->r[0]; // 801D4310
  c->r[1]=c->r[1]+0x00000020u; // 801D4314
  return; // 801D4318
}

// fn_801D431C
void f_801D431C(Ctx* __restrict c) {
  trace_call(0x801D431Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D431C
  c->r[0]=c->lr; // 801D4320
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4324
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4328
  c->r[31]=c->r[3]|c->r[3]; // 801D432C
  c->r[3]=0u+0x00000000u; // 801D4330
  c->r[0]=R32(c->r[13]+0xFFFF9750u); // 801D4334
  cmps(c,0,(int32_t)c->r[0],0); // 801D4338
  if (crb(c,2)) { goto L_801D4374; } // 801D433C
  c->r[3]=c->r[0]|c->r[0]; // 801D4340
  c->r[4]=c->r[31]|c->r[31]; // 801D4344
  c->lr=0x801D434Cu; f_801F8B60(c); // 801D4348
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D434C
  cmpu(c,0,c->r[0],0x00000001u); // 801D4350
  if (!crb(c,1)) { goto L_801D4368; } // 801D4354
  c->r[3]=c->r[31]|c->r[31]; // 801D4358
  c->lr=0x801D4360u; f_8006C8C8(c); // 801D435C
  c->r[3]=R32(c->r[3]+0x00000044u); // 801D4360
  goto L_801D4374; // 801D4364
L_801D4368:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4368
  c->lr=0x801D4370u; f_8006C8C8(c); // 801D436C
  c->r[3]=R32(c->r[3]+0x00000014u); // 801D4370
L_801D4374:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4378
  c->lr=c->r[0]; // 801D437C
  c->r[1]=c->r[1]+0x00000010u; // 801D4380
  return; // 801D4384
}

// fn_801D4388
void f_801D4388(Ctx* __restrict c) {
  trace_call(0x801D4388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4388
  c->r[0]=c->lr; // 801D438C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4390
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4394
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4398
  c->r[30]=c->r[3]|c->r[3]; // 801D439C
  c->r[4]=c->r[30]|c->r[30]; // 801D43A0
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D43A4
  c->lr=0x801D43ACu; f_801F8B60(c); // 801D43A8
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[31]); // 801D43AC
  if (crb(c,0)) { goto L_801D43BC; } // 801D43B0
  cmps(c,0,(int32_t)c->r[31],8); // 801D43B4
  if (crb(c,0)) { goto L_801D43C0; } // 801D43B8
L_801D43BC:;
  c->r[31]=0u+0x00000000u; // 801D43BC
L_801D43C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801D43C0
  c->lr=0x801D43C8u; f_8006C8C8(c); // 801D43C4
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D43C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D43CC
  c->r[3]=c->r[3]+c->r[0]; // 801D43D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D43D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D43D8
  c->r[3]=R32(c->r[3]+0x00000068u); // 801D43DC
  c->lr=c->r[0]; // 801D43E0
  c->r[1]=c->r[1]+0x00000010u; // 801D43E4
  return; // 801D43E8
}

// fn_801D43EC
void f_801D43EC(Ctx* __restrict c) {
  trace_call(0x801D43ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D43EC
  c->r[0]=c->lr; // 801D43F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D43F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D43F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D43FC
  c->r[30]=c->r[3]|c->r[3]; // 801D4400
  c->r[4]=c->r[30]|c->r[30]; // 801D4404
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801D4408
  c->lr=0x801D4410u; f_801F8B60(c); // 801D440C
  c->r[31]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[31]); // 801D4410
  if (crb(c,0)) { goto L_801D4420; } // 801D4414
  cmps(c,0,(int32_t)c->r[31],8); // 801D4418
  if (crb(c,0)) { goto L_801D4424; } // 801D441C
L_801D4420:;
  c->r[31]=0u+0x00000000u; // 801D4420
L_801D4424:;
  c->r[3]=c->r[30]|c->r[30]; // 801D4424
  c->lr=0x801D442Cu; f_8006C8C8(c); // 801D4428
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D442C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4430
  c->r[3]=c->r[3]+c->r[0]; // 801D4434
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4438
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D443C
  c->r[3]=R32(c->r[3]+0x00000088u); // 801D4440
  c->lr=c->r[0]; // 801D4444
  c->r[1]=c->r[1]+0x00000010u; // 801D4448
  return; // 801D444C
}

// fn_801D4450
void f_801D4450(Ctx* __restrict c) {
  trace_call(0x801D4450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4450
  c->r[0]=c->lr; // 801D4454
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D445C
  c->r[31]=0u+0xFFFFFFFFu; // 801D4460
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4464
  c->r[30]=c->r[3]|c->r[3]; // 801D4468
  c->lr=0x801D4470u; f_801BD430(c); // 801D446C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D4470
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D4474
  if (crb(c,2)) { goto L_801D4488; } // 801D4478
  c->r[3]=c->r[30]|c->r[30]; // 801D447C
  c->lr=0x801D4484u; f_801BD430(c); // 801D4480
  c->r[31]=R32(c->r[3]+0x00000008u); // 801D4484
L_801D4488:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4488
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D448C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4490
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4494
  c->lr=c->r[0]; // 801D4498
  c->r[1]=c->r[1]+0x00000010u; // 801D449C
  return; // 801D44A0
}

// fn_801D44A4
void f_801D44A4(Ctx* __restrict c) {
  trace_call(0x801D44A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D44A4
  c->r[0]=c->lr; // 801D44A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D44AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D44B0
  c->r[31]=0u+0xFFFFFFFFu; // 801D44B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D44B8
  c->r[30]=0u+0x00000000u; // 801D44BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D44C0
  c->r[29]=c->r[3]|c->r[3]; // 801D44C4
L_801D44C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D44C8
  c->lr=0x801D44D0u; f_801BD430(c); // 801D44CC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D44D0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801D44D4
  if (crb(c,2)) { goto L_801D44F8; } // 801D44D8
  c->r[3]=c->r[30]|c->r[30]; // 801D44DC
  c->lr=0x801D44E4u; f_801BD430(c); // 801D44E0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D44E4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D44E8
  if (!crb(c,2)) { goto L_801D44F8; } // 801D44EC
  c->r[31]=c->r[30]|c->r[30]; // 801D44F0
  goto L_801D4504; // 801D44F4
L_801D44F8:;
  c->r[30]=c->r[30]+0x00000001u; // 801D44F8
  cmps(c,0,(int32_t)c->r[30],21); // 801D44FC
  if (crb(c,0)) { IRQCHK(c); goto L_801D44C8; } // 801D4500
L_801D4504:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4504
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4508
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D450C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4510
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4514
  c->lr=c->r[0]; // 801D4518
  c->r[1]=c->r[1]+0x00000020u; // 801D451C
  return; // 801D4520
}

// fn_801D4524
void f_801D4524(Ctx* __restrict c) {
  trace_call(0x801D4524u);
  c->r[4]=0u+0x80580000u; // 801D4524
  {uint32_t ea=c->r[2]+0xFFFFBCCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4528
  c->r[3]=c->r[4]+0xFFFF9140u; // 801D452C
  {uint32_t ea=c->r[2]+0xFFFFBCC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4530
  {uint32_t ea=c->r[4]+0xFFFF9140u; WF32(ea,c->f[1]);} // 801D4534
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801D4538
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801D453C
  return; // 801D4540
}

// fn_801D4544
void f_801D4544(Ctx* __restrict c) {
  trace_call(0x801D4544u);
  {uint32_t ea=c->r[1]+0xFFFFFE60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4544
  c->r[0]=c->lr; // 801D4548
  c->r[6]=R32(c->r[5]+0x0000006Cu); // 801D454C
  W32(c->r[1]+0x000001A4u,c->r[0]); // 801D4550
  {uint32_t ea=c->r[1]+0x00000174u; for(int i=21;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D4554
  c->r[27]=c->r[3]|c->r[3]; // 801D4558
  c->r[28]=c->r[4]|c->r[4]; // 801D455C
  c->r[29]=c->r[5]|c->r[5]; // 801D4560
  c->r[3]=c->r[1]+0x00000038u; // 801D4564
  c->r[4]=c->r[6]+0x00000018u; // 801D4568
  c->lr=0x801D4570u; f_8013939C(c); // 801D456C
  c->r[5]=R32(c->r[29]+0x00000068u); // 801D4570
  c->r[4]=c->r[28]|c->r[28]; // 801D4574
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D4578
  c->r[3]=c->r[1]+0x00000098u; // 801D457C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801D4580
  c->r[5]=R32(c->r[29]+0x0000006Cu); // 801D4584
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)472); // 801D4588
  c->r[12]=R32(c->r[12]+0x00000034u); // 801D458C
  c->r[6]=0u+0x00000001u; // 801D4590
  c->r[5]=c->r[5]+c->r[0]; // 801D4594
  c->r[5]=R32(c->r[5]+0x00000008u); // 801D4598
  c->ctr=c->r[12]; // 801D459C
  if (true) { c->lr=0x801D45A4u; dispatch(c,c->ctr); } // 801D45A0
  c->r[3]=c->r[1]+0x00000018u; // 801D45A4
  c->r[4]=c->r[1]+0x00000098u; // 801D45A8
  c->lr=0x801D45B0u; f_80138AB8(c); // 801D45AC
  c->r[3]=c->r[1]+0x00000048u; // 801D45B0
  c->r[4]=c->r[1]+0x00000018u; // 801D45B4
  c->lr=0x801D45BCu; f_8013939C(c); // 801D45B8
  c->r[3]=c->r[27]+0x00000018u; // 801D45BC
  c->r[4]=c->r[1]+0x00000038u; // 801D45C0
  c->r[5]=c->r[1]+0x00000048u; // 801D45C4
  c->lr=0x801D45CCu; f_80056074(c); // 801D45C8
  c->r[3]=c->r[27]|c->r[27]; // 801D45CC
  c->r[4]=c->r[1]+0x000000D8u; // 801D45D0
  c->r[5]=c->r[27]+0x00000018u; // 801D45D4
  c->lr=0x801D45DCu; f_801D54E8(c); // 801D45D8
  c->r[0]=R32(c->r[27]+0x00000008u); // 801D45DC
  c->r[31]=c->r[3]|c->r[3]; // 801D45E0
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 801D45E4
  c->r[4]=0u+0x00000000u; // 801D45E8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D45EC
  c->lr=0x801D45F4u; f_800043EC(c); // 801D45F0
  cmps(c,0,(int32_t)c->r[31],0); // 801D45F4
  if (!crb(c,1)) { goto L_801D46D0; } // 801D45F8
  c->r[3]=R32(c->r[29]+0x00000068u); // 801D45FC
  c->r[30]=0u+0x00000000u; // 801D4600
  c->r[24]=0u+0x00000000u; // 801D4604
  c->r[23]=0u+0x00000000u; // 801D4608
  c->r[21]=c->r[3]+0xFFFFFFFFu; // 801D460C
  c->r[22]=0u+0x00000000u; // 801D4610
  goto L_801D46C4; // 801D4614
L_801D4618:;
  c->r[4]=R32(c->r[29]+0x0000006Cu); // 801D4618
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[21]); // 801D461C
  c->r[25]=c->r[4]+c->r[24]; // 801D4620
  if (!crb(c,2)) { goto L_801D4664; } // 801D4624
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D4628
  c->r[4]=c->r[28]|c->r[28]; // 801D462C
  c->r[3]=c->r[1]+0x00000058u; // 801D4630
  c->r[6]=0u+0x00000001u; // 801D4634
  c->r[12]=R32(c->r[12]+0x00000034u); // 801D4638
  c->r[5]=R32(c->r[25]+0x00000008u); // 801D463C
  c->ctr=c->r[12]; // 801D4640
  if (true) { c->lr=0x801D4648u; dispatch(c,c->ctr); } // 801D4644
  c->r[3]=c->r[1]+0x00000008u; // 801D4648
  c->r[4]=c->r[1]+0x00000058u; // 801D464C
  c->lr=0x801D4654u; f_80138AB8(c); // 801D4650
  c->r[3]=c->r[1]+0x00000028u; // 801D4654
  c->r[4]=c->r[1]+0x00000008u; // 801D4658
  c->lr=0x801D4660u; f_8013939C(c); // 801D465C
  goto L_801D467C; // 801D4660
L_801D4664:;
  c->r[0]=c->r[30]+0x00000001u; // 801D4664
  c->r[3]=c->r[1]+0x00000028u; // 801D4668
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)472); // 801D466C
  c->r[4]=c->r[4]+c->r[0]; // 801D4670
  c->r[4]=c->r[4]+0x00000018u; // 801D4674
  c->lr=0x801D467Cu; f_8013939C(c); // 801D4678
L_801D467C:;
  c->r[0]=R32(c->r[27]+0x00000038u); // 801D467C
  c->r[4]=c->r[25]+0x00000018u; // 801D4680
  c->r[5]=c->r[1]+0x00000028u; // 801D4684
  c->r[3]=c->r[0]+c->r[23]; // 801D4688
  c->lr=0x801D4690u; f_80056074(c); // 801D468C
  c->r[0]=R32(c->r[27]+0x00000038u); // 801D4690
  c->r[3]=c->r[27]|c->r[27]; // 801D4694
  c->r[26]=R32(c->r[27]+0x0000000Cu); // 801D4698
  c->r[5]=c->r[25]|c->r[25]; // 801D469C
  c->r[6]=c->r[31]|c->r[31]; // 801D46A0
  c->r[4]=c->r[0]+c->r[23]; // 801D46A4
  c->r[7]=c->r[1]+0x000000D8u; // 801D46A8
  c->lr=0x801D46B0u; f_801D556C(c); // 801D46AC
  W32(c->r[26]+c->r[22],c->r[3]); // 801D46B0
  c->r[24]=c->r[24]+0x000001D8u; // 801D46B4
  c->r[23]=c->r[23]+0x00000018u; // 801D46B8
  c->r[22]=c->r[22]+0x00000004u; // 801D46BC
  c->r[30]=c->r[30]+0x00000001u; // 801D46C0
L_801D46C4:;
  c->r[0]=R32(c->r[29]+0x00000068u); // 801D46C4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D46C8
  if (crb(c,0)) { IRQCHK(c); goto L_801D4618; } // 801D46CC
L_801D46D0:;
  c->r[3]=c->r[27]|c->r[27]; // 801D46D0
  c->r[4]=c->r[28]|c->r[28]; // 801D46D4
  c->r[5]=c->r[29]|c->r[29]; // 801D46D8
  c->lr=0x801D46E0u; f_801D54DC(c); // 801D46DC
  {uint32_t ea=c->r[1]+0x00000174u; for(int i=21;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D46E0
  c->r[0]=R32(c->r[1]+0x000001A4u); // 801D46E4
  c->lr=c->r[0]; // 801D46E8
  c->r[1]=c->r[1]+0x000001A0u; // 801D46EC
  return; // 801D46F0
}

// fn_801D46F4
void f_801D46F4(Ctx* __restrict c) {
  trace_call(0x801D46F4u);
  c->r[3]=0u+0x00000000u; // 801D46F4
  return; // 801D46F8
}

// fn_801D46FC
void f_801D46FC(Ctx* __restrict c) {
  trace_call(0x801D46FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D46FC
  c->r[0]=c->lr; // 801D4700
  cmps(c,0,(int32_t)c->r[3],0); // 801D4704
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D470C
  c->r[31]=c->r[3]|c->r[3]; // 801D4710
  if (crb(c,2)) { goto L_801D477C; } // 801D4714
  if (crb(c,2)) { goto L_801D476C; } // 801D4718
  c->r[0]=addc(c,c->r[3],0x00000030u,0); cr0(c,c->r[0]); // 801D471C
  if (crb(c,2)) { goto L_801D4744; } // 801D4720
  c->r[0]=R32(c->r[3]+0x00000038u); // 801D4724
  cmps(c,0,(int32_t)c->r[0],0); // 801D4728
  if (crb(c,2)) { goto L_801D4738; } // 801D472C
  c->r[0]=0u+0x00000000u; // 801D4730
  W32(c->r[3]+0x00000038u,c->r[0]); // 801D4734
L_801D4738:;
  c->r[0]=0u+0x00000000u; // 801D4738
  W32(c->r[3]+0x00000034u,c->r[0]); // 801D473C
  W32(c->r[3]+0x00000030u,c->r[0]); // 801D4740
L_801D4744:;
  c->r[0]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[0]); // 801D4744
  if (crb(c,2)) { goto L_801D476C; } // 801D4748
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801D474C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4750
  if (crb(c,2)) { goto L_801D4760; } // 801D4754
  c->r[0]=0u+0x00000000u; // 801D4758
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D475C
L_801D4760:;
  c->r[0]=0u+0x00000000u; // 801D4760
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D4764
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D4768
L_801D476C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D476C
  if (!crb(c,1)) { goto L_801D477C; } // 801D4770
  c->r[3]=c->r[31]|c->r[31]; // 801D4774
  c->lr=0x801D477Cu; f_802896EC(c); // 801D4778
L_801D477C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D477C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4780
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4784
  c->lr=c->r[0]; // 801D4788
  c->r[1]=c->r[1]+0x00000010u; // 801D478C
  return; // 801D4790
}

// fn_801D4794
void f_801D4794(Ctx* __restrict c) {
  trace_call(0x801D4794u);
  c->r[3]=0u+0x00000009u; // 801D4794
  return; // 801D4798
}

// fn_801D479C
void f_801D479C(Ctx* __restrict c) {
  trace_call(0x801D479Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D479C
  if (!crb(c,6)) { goto L_801D47C4; } // 801D47A0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801D47A4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801D47A8
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801D47AC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801D47B0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801D47B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801D47B8
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801D47BC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801D47C0
L_801D47C4:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D47C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D47C8
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D47CC
  W32(c->r[1]+0x00000014u,c->r[6]); // 801D47D0
  W32(c->r[1]+0x00000018u,c->r[7]); // 801D47D4
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801D47D8
  W32(c->r[1]+0x00000020u,c->r[9]); // 801D47DC
  W32(c->r[1]+0x00000024u,c->r[10]); // 801D47E0
  c->r[1]=c->r[1]+0x00000070u; // 801D47E4
  return; // 801D47E8
}

// fn_801D47EC
void f_801D47EC(Ctx* __restrict c) {
  trace_call(0x801D47ECu);
  W8(c->r[3]+0x000017B4u,c->r[4]); // 801D47EC
  return; // 801D47F0
}

// fn_801D47F4
void f_801D47F4(Ctx* __restrict c) {
  trace_call(0x801D47F4u);
  c->r[0]=R8(c->r[3]+0x00001798u); // 801D47F4
  c->r[4]=0u+0x00000000u; // 801D47F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D47FC
  if (!crb(c,2)) { goto L_801D481C; } // 801D4800
  c->r[0]=R32(c->r[3]+0x00001790u); // 801D4804
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4808
  c->r[3]=c->r[3]+c->r[0]; // 801D480C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D4810
  cmps(c,0,(int32_t)c->r[0],0); // 801D4814
  if (crb(c,2)) { goto L_801D4820; } // 801D4818
L_801D481C:;
  c->r[4]=0u+0x00000001u; // 801D481C
L_801D4820:;
  c->r[3]=c->r[4]|c->r[4]; // 801D4820
  return; // 801D4824
}

// fn_801D4828
void f_801D4828(Ctx* __restrict c) {
  trace_call(0x801D4828u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4828
  c->r[0]=c->lr; // 801D482C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4830
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801D4834
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801D4838
  c->r[5]=0u+0x00000001u; // 801D483C
  c->r[0]=0u+0x00000000u; // 801D4840
  c->f[31]=c->f[1]; // 801D4844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4848
  cmps(c,0,(int32_t)c->r[4],0); // 801D484C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D4850
  c->r[30]=c->r[3]|c->r[3]; // 801D4854
  c->r[6]=R32(c->r[3]+0x0000178Cu); // 801D4858
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)376); // 801D485C
  c->r[31]=c->r[3]+c->r[6]; // 801D4860
  W8(c->r[31]+0x0000000Cu,c->r[5]); // 801D4864
  W8(c->r[31]+0x0000000Du,c->r[0]); // 801D4868
  W8(c->r[31]+0x00000060u,c->r[0]); // 801D486C
  if (!crb(c,0)) { goto L_801D4890; } // 801D4870
  W32(c->r[31]+0x00000010u,c->r[0]); // 801D4874
  c->r[0]=c->r[13]+0xFFFF8950u; // 801D4878
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D487C
  W32(c->r[31]+0x00000014u,c->r[5]); // 801D4880
  W32(c->r[31]+0x00000018u,c->r[0]); // 801D4884
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D4888
  goto L_801D48B0; // 801D488C
L_801D4890:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801D4890
  c->r[5]=c->r[31]+0x00000010u; // 801D4894
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4898
  c->r[12]=R32(c->r[12]+0x000000A8u); // 801D489C
  c->ctr=c->r[12]; // 801D48A0
  if (true) { c->lr=0x801D48A8u; dispatch(c,c->ctr); } // 801D48A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D48A8
  if (crb(c,2)) { goto L_801D48E8; } // 801D48AC
L_801D48B0:;
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D48B0
  fcmp(c,0,c->f[0],c->f[31]); // 801D48B4
  if (!crb(c,2)) { goto L_801D48C8; } // 801D48B8
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D48BC
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D48C0
  goto L_801D48CC; // 801D48C4
L_801D48C8:;
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[31]);} // 801D48C8
L_801D48CC:;
  c->r[3]=R32(c->r[30]+0x0000178Cu); // 801D48CC
  c->r[0]=c->r[3]+0x00000001u; // 801D48D0
  cmps(c,0,(int32_t)c->r[0],16); // 801D48D4
  W32(c->r[30]+0x0000178Cu,c->r[0]); // 801D48D8
  if (crb(c,0)) { goto L_801D48E8; } // 801D48DC
  c->r[0]=0u+0x00000000u; // 801D48E0
  W32(c->r[30]+0x0000178Cu,c->r[0]); // 801D48E4
L_801D48E8:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801D48E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D48EC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801D48F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D48F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D48F8
  c->lr=c->r[0]; // 801D48FC
  c->r[1]=c->r[1]+0x00000020u; // 801D4900
  return; // 801D4904
}

// fn_801D4908
void f_801D4908(Ctx* __restrict c) {
  trace_call(0x801D4908u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4908
  c->r[0]=c->lr; // 801D490C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4910
  c->r[11]=c->r[1]+0x00000020u; // 801D4914
  c->lr=0x801D491Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D4918
  c->r[6]=R32(c->r[3]+0x0000178Cu); // 801D491C
  c->r[29]=c->r[5]|c->r[5]; // 801D4920
  c->r[0]=0u+0x00000001u; // 801D4924
  c->r[31]=0u+0x00000000u; // 801D4928
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)376); // 801D492C
  {uint32_t ea=c->r[2]+0xFFFFBCD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4930
  c->r[28]=c->r[3]|c->r[3]; // 801D4934
  c->r[5]=0u+0x00000020u; // 801D4938
  c->r[30]=c->r[3]+c->r[6]; // 801D493C
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801D4940
  c->r[3]=c->r[30]+0x00000061u; // 801D4944
  W8(c->r[30]+0x0000000Du,c->r[31]); // 801D4948
  W8(c->r[30]+0x00000060u,c->r[0]); // 801D494C
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D4950
  c->lr=0x801D4958u; f_80293498(c); // 801D4954
  c->r[4]=c->r[29]|c->r[29]; // 801D4958
  c->r[3]=c->r[30]+0x00000081u; // 801D495C
  c->r[5]=0u+0x00000100u; // 801D4960
  c->lr=0x801D4968u; f_80293498(c); // 801D4964
  c->r[3]=R32(c->r[28]+0x0000178Cu); // 801D4968
  c->r[0]=c->r[3]+0x00000001u; // 801D496C
  cmps(c,0,(int32_t)c->r[0],16); // 801D4970
  W32(c->r[28]+0x0000178Cu,c->r[0]); // 801D4974
  if (crb(c,0)) { goto L_801D4980; } // 801D4978
  W32(c->r[28]+0x0000178Cu,c->r[31]); // 801D497C
L_801D4980:;
  c->r[11]=c->r[1]+0x00000020u; // 801D4980
  c->lr=0x801D4988u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D4984
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4988
  c->lr=c->r[0]; // 801D498C
  c->r[1]=c->r[1]+0x00000020u; // 801D4990
  return; // 801D4994
}

// fn_801D4998
void f_801D4998(Ctx* __restrict c) {
  trace_call(0x801D4998u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4998
  c->r[0]=c->lr; // 801D499C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D49A0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801D49A4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801D49A8
  c->r[5]=0u+0x00000001u; // 801D49AC
  c->r[0]=0u+0x00000000u; // 801D49B0
  c->f[31]=c->f[1]; // 801D49B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D49B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D49BC
  c->r[30]=c->r[3]|c->r[3]; // 801D49C0
  c->r[6]=R32(c->r[3]+0x0000178Cu); // 801D49C4
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)376); // 801D49C8
  c->r[31]=c->r[3]+c->r[6]; // 801D49CC
  W8(c->r[31]+0x0000000Cu,c->r[5]); // 801D49D0
  c->r[5]=c->r[31]+0x00000010u; // 801D49D4
  W8(c->r[31]+0x0000000Du,c->r[0]); // 801D49D8
  W8(c->r[31]+0x00000060u,c->r[0]); // 801D49DC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801D49E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D49E4
  c->r[12]=R32(c->r[12]+0x000000A8u); // 801D49E8
  c->ctr=c->r[12]; // 801D49EC
  if (true) { c->lr=0x801D49F4u; dispatch(c,c->ctr); } // 801D49F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D49F4
  if (crb(c,2)) { goto L_801D4A34; } // 801D49F8
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D49FC
  fcmp(c,0,c->f[0],c->f[31]); // 801D4A00
  if (!crb(c,2)) { goto L_801D4A14; } // 801D4A04
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4A08
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D4A0C
  goto L_801D4A18; // 801D4A10
L_801D4A14:;
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[31]);} // 801D4A14
L_801D4A18:;
  c->r[3]=R32(c->r[30]+0x0000178Cu); // 801D4A18
  c->r[0]=c->r[3]+0x00000001u; // 801D4A1C
  cmps(c,0,(int32_t)c->r[0],16); // 801D4A20
  W32(c->r[30]+0x0000178Cu,c->r[0]); // 801D4A24
  if (crb(c,0)) { goto L_801D4A34; } // 801D4A28
  c->r[0]=0u+0x00000000u; // 801D4A2C
  W32(c->r[30]+0x0000178Cu,c->r[0]); // 801D4A30
L_801D4A34:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801D4A34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4A38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801D4A3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4A40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D4A44
  c->lr=c->r[0]; // 801D4A48
  c->r[1]=c->r[1]+0x00000020u; // 801D4A4C
  return; // 801D4A50
}

// fn_801D4A54
void f_801D4A54(Ctx* __restrict c) {
  trace_call(0x801D4A54u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4A54
  c->r[0]=c->lr; // 801D4A58
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D4A5C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801D4A60
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801D4A64
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801D4A68
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801D4A6C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801D4A70
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801D4A74
  c->r[11]=c->r[1]+0x00000040u; // 801D4A78
  c->lr=0x801D4A80u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D4A7C
  c->r[0]=R32(c->r[3]+0x00001790u); // 801D4A80
  c->r[23]=c->r[3]|c->r[3]; // 801D4A84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4A88
  c->r[3]=c->r[3]+c->r[0]; // 801D4A8C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D4A90
  c->r[31]=c->r[3]+0x0000000Cu; // 801D4A94
  cmps(c,0,(int32_t)c->r[0],0); // 801D4A98
  if (crb(c,2)) { goto L_801D4C20; } // 801D4A9C
  c->r[0]=R8(c->r[31]+0x00000001u); // 801D4AA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4AA4
  if (crb(c,2)) { goto L_801D4C20; } // 801D4AA8
  c->r[3]=0u+0x80470000u; // 801D4AAC
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801D4AB0
  c->lr=0x801D4AB8u; f_80066D04(c); // 801D4AB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D4AB8
  if (crb(c,2)) { goto L_801D4C20; } // 801D4ABC
  c->r[0]=R8(c->r[23]+0x000017B4u); // 801D4AC0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4AC4
  if (crb(c,2)) { goto L_801D4AD8; } // 801D4AC8
  c->r[0]=R8(c->r[23]+0x000017A0u); // 801D4ACC
  cmps(c,0,(int32_t)c->r[0],0); // 801D4AD0
  if (!crb(c,2)) { goto L_801D4C20; } // 801D4AD4
L_801D4AD8:;
  c->r[0]=R8(c->r[31]+0x00000054u); // 801D4AD8
  cmps(c,0,(int32_t)c->r[0],0); // 801D4ADC
  if (!crb(c,2)) { goto L_801D4BE4; } // 801D4AE0
  c->r[3]=R32(c->r[31]+0x00000008u); // 801D4AE4
  c->r[0]=R8(c->r[23]+0x000017A0u); // 801D4AE8
  c->r[3]=0u-c->r[3]; // 801D4AEC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)28); // 801D4AF0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4AF4
  c->r[24]=c->r[3]+0x000001A8u; // 801D4AF8
  if (crb(c,2)) { goto L_801D4B08; } // 801D4AFC
  c->r[24]=c->r[24]+0x00000014u; // 801D4B00
  goto L_801D4B34; // 801D4B04
L_801D4B08:;
  c->r[3]=0u+0x804B0000u; // 801D4B08
  c->r[3]=c->r[3]+0x00005CC8u; // 801D4B0C
  c->r[0]=R8(c->r[3]+0x00002118u); // 801D4B10
  cmps(c,0,(int32_t)c->r[0],0); // 801D4B14
  if (crb(c,2)) { goto L_801D4B24; } // 801D4B18
  c->r[0]=R32(c->r[3]+0x000022BCu); // 801D4B1C
  goto L_801D4B28; // 801D4B20
L_801D4B24:;
  c->r[0]=0u+0x00000000u; // 801D4B24
L_801D4B28:;
  cmps(c,0,(int32_t)c->r[0],2); // 801D4B28
  if (crb(c,0)) { goto L_801D4B34; } // 801D4B2C
  c->r[24]=c->r[24]+0xFFFFFFF2u; // 801D4B30
L_801D4B34:;
  c->r[0]=0u+0x0000001Cu; // 801D4B34
  c->r[29]=0u+0x43300000u; // 801D4B38
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D4B3C
  c->r[28]=0u+0x80540000u; // 801D4B40
  {uint32_t ea=c->r[2]+0xFFFFBCE0u; c->f[1]=RF64(ea);} // 801D4B44
  c->r[3]=c->r[28]+0xFFFFC2B0u; // 801D4B48
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D4B4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D4B50
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801D4B54
  c->lr=0x801D4B5Cu; f_801B15C4(c); // 801D4B58
  {uint32_t ea=c->r[2]+0xFFFFBCDCu; c->f[29]=c->ps1[29]=RF32(ea);} // 801D4B5C
  c->r[23]=0u+0x00000000u; // 801D4B60
  {uint32_t ea=c->r[2]+0xFFFFBCD8u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D4B64
  c->r[30]=0u+0x00000000u; // 801D4B68
  {uint32_t ea=c->r[2]+0xFFFFBCE0u; c->f[31]=RF64(ea);} // 801D4B6C
  goto L_801D4BD4; // 801D4B70
L_801D4B74:;
  c->r[25]=c->r[31]+c->r[30]; // 801D4B74
  c->r[3]=c->r[28]+0xFFFFC2B0u; // 801D4B78
  c->r[26]=R32(c->r[25]+0x0000000Cu); // 801D4B7C
  c->lr=0x801D4B84u; f_801B18A4(c); // 801D4B80
  c->r[27]=c->r[3]|c->r[3]; // 801D4B84
  c->r[3]=c->r[26]|c->r[26]; // 801D4B88
  c->lr=0x801D4B90u; f_802894C0(c); // 801D4B8C
  c->r[5]=c->r[3]|c->r[3]; // 801D4B90
  c->r[3]=c->r[27]|c->r[27]; // 801D4B94
  c->r[4]=c->r[26]|c->r[26]; // 801D4B98
  c->lr=0x801D4BA0u; f_803B89C8(c); // 801D4B9C
  W32(c->r[1]+0x0000000Cu,c->r[24]); // 801D4BA0
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[29],c->f[1],-c->f[30])); // 801D4BA4
  c->r[5]=R32(c->r[25]+0x0000000Cu); // 801D4BA8
  c->r[3]=c->r[28]+0xFFFFC2B0u; // 801D4BAC
  W32(c->r[1]+0x00000008u,c->r[29]); // 801D4BB0
  c->r[4]=0u+0xFFFFFFFFu; // 801D4BB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801D4BB8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801D4BBC
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801D4BC0
  c->lr=0x801D4BC8u; f_801B1660(c); // 801D4BC4
  c->r[24]=c->r[24]+0x0000001Cu; // 801D4BC8
  c->r[23]=c->r[23]+0x00000001u; // 801D4BCC
  c->r[30]=c->r[30]+0x00000004u; // 801D4BD0
L_801D4BD4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D4BD4
  cmpu(c,0,c->r[23],c->r[0]); // 801D4BD8
  if (crb(c,0)) { IRQCHK(c); goto L_801D4B74; } // 801D4BDC
  goto L_801D4C20; // 801D4BE0
L_801D4BE4:;
  c->r[3]=c->r[31]+0x00000075u; // 801D4BE4
  c->lr=0x801D4BECu; f_802894C0(c); // 801D4BE8
  c->r[3]=sraw(c,c->r[3],2); // 801D4BEC
  c->r[0]=0u+0x43300000u; // 801D4BF0
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801D4BF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D4BF8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)25); // 801D4BFC
  {uint32_t ea=c->r[2]+0xFFFFBCE8u; c->f[2]=RF64(ea);} // 801D4C00
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4C04
  c->r[0]=addc(c,~c->r[0],0x00000140u,1); // 801D4C08
  c->r[0]=c->r[0]^0x80000000u; // 801D4C0C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D4C10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D4C14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D4C18
  fcmp(c,0,c->f[1],c->f[0]); // 801D4C1C
L_801D4C20:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801D4C20
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801D4C24
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801D4C28
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801D4C2C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801D4C30
  c->r[11]=c->r[1]+0x00000040u; // 801D4C34
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801D4C38
  c->lr=0x801D4C40u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D4C3C
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D4C40
  c->lr=c->r[0]; // 801D4C44
  c->r[1]=c->r[1]+0x00000070u; // 801D4C48
  return; // 801D4C4C
}

// fn_801D4C50
void f_801D4C50(Ctx* __restrict c) {
  trace_call(0x801D4C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4C50
  c->r[0]=c->lr; // 801D4C54
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D4C58
  c->r[11]=c->r[1]+0x00000050u; // 801D4C5C
  c->lr=0x801D4C64u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D4C60
  c->r[0]=R32(c->r[3]+0x0000179Cu); // 801D4C64
  c->r[4]=0u+0x43300000u; // 801D4C68
  W32(c->r[1]+0x00000030u,c->r[4]); // 801D4C6C
  c->r[30]=c->r[3]|c->r[3]; // 801D4C70
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C74
  W32(c->r[1]+0x00000038u,c->r[4]); // 801D4C78
  if (crb(c,2)) { goto L_801D4DA0; } // 801D4C7C
  c->r[0]=R8(c->r[3]+0x000017A0u); // 801D4C80
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C84
  if (crb(c,2)) { goto L_801D4DA0; } // 801D4C88
  c->r[28]=R32(c->r[3]+0x000017A8u); // 801D4C8C
  c->r[3]=c->r[3]+0x000017ACu; // 801D4C90
  c->lr=0x801D4C98u; f_80173018(c); // 801D4C94
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801D4C98
  if (!crb(c,0)) { goto L_801D4DA0; } // 801D4C9C
  c->r[5]=c->r[28]|c->r[28]; // 801D4CA0
  c->r[3]=c->r[1]+0x00000020u; // 801D4CA4
  c->r[4]=c->r[30]+0x000017ACu; // 801D4CA8
  c->lr=0x801D4CB0u; f_80173034(c); // 801D4CAC
  c->r[3]=c->r[1]+0x00000020u; // 801D4CB0
  c->r[4]=0u+0x00000000u; // 801D4CB4
  c->lr=0x801D4CBCu; f_80173314(c); // 801D4CB8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D4CBC
  c->r[3]=c->r[1]+0x00000008u; // 801D4CC0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D4CC4
  c->lr=0x801D4CCCu; f_80173604(c); // 801D4CC8
  c->r[28]=c->r[3]|c->r[3]; // 801D4CCC
  c->r[3]=c->r[1]+0x00000020u; // 801D4CD0
  c->r[4]=0u+0x00000001u; // 801D4CD4
  c->lr=0x801D4CDCu; f_80173314(c); // 801D4CD8
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D4CDC
  c->r[3]=c->r[1]+0x00000010u; // 801D4CE0
  W32(c->r[1]+0x00000014u,c->r[4]); // 801D4CE4
  c->lr=0x801D4CECu; f_801735D4(c); // 801D4CE8
  c->r[29]=c->r[3]|c->r[3]; // 801D4CEC
  c->r[3]=c->r[1]+0x00000020u; // 801D4CF0
  c->r[4]=0u+0x00000002u; // 801D4CF4
  c->lr=0x801D4CFCu; f_80173314(c); // 801D4CF8
  W32(c->r[1]+0x00000018u,c->r[3]); // 801D4CFC
  c->r[3]=c->r[1]+0x00000018u; // 801D4D00
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 801D4D04
  c->lr=0x801D4D0Cu; f_801735D4(c); // 801D4D08
  c->r[0]=c->r[29]^0x80000000u; // 801D4D0C
  {uint32_t ea=c->r[2]+0xFFFFBCE8u; c->f[2]=RF64(ea);} // 801D4D10
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D4D14
  c->r[31]=c->r[3]|c->r[3]; // 801D4D18
  {uint32_t ea=c->r[30]+0x000017A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4D1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 801D4D20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D4D24
  fcmp(c,0,c->f[1],c->f[0]); // 801D4D28
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D4D2C
  if (!crb(c,2)) { goto L_801D4DA0; } // 801D4D30
  c->r[3]=c->r[28]|c->r[28]; // 801D4D34
  c->lr=0x801D4D3Cu; f_802894C0(c); // 801D4D38
  cmpu(c,0,c->r[3],0x00000004u); // 801D4D3C
  if (!crb(c,1)) { goto L_801D4DA0; } // 801D4D40
  c->r[3]=c->r[28]+0x00000003u; // 801D4D44
  c->lr=0x801D4D4Cu; f_80295EAC(c); // 801D4D48
  c->r[4]=c->r[31]^0x80000000u; // 801D4D4C
  c->r[0]=c->r[29]^0x80000000u; // 801D4D50
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 801D4D54
  c->r[4]=c->r[3]|c->r[3]; // 801D4D58
  c->r[12]=R32(c->r[30]+0x00000000u); // 801D4D5C
  c->r[3]=c->r[30]|c->r[30]; // 801D4D60
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D4D64
  {uint32_t ea=c->r[2]+0xFFFFBCE8u; c->f[3]=RF64(ea);} // 801D4D68
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 801D4D6C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801D4D70
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801D4D74
  c->r[12]=R32(c->r[12]+0x00000028u); // 801D4D78
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 801D4D7C
  {uint32_t ea=c->r[2]+0xFFFFBCF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4D80
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801D4D84
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801D4D88
  c->ctr=c->r[12]; // 801D4D8C
  if (true) { c->lr=0x801D4D94u; dispatch(c,c->ctr); } // 801D4D90
  c->r[3]=R32(c->r[30]+0x000017A8u); // 801D4D94
  c->r[0]=c->r[3]+0x00000001u; // 801D4D98
  W32(c->r[30]+0x000017A8u,c->r[0]); // 801D4D9C
L_801D4DA0:;
  c->r[3]=0u+0x80510000u; // 801D4DA0
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D4DA4
  c->r[3]=c->r[3]+0x00003428u; // 801D4DA8
  {uint32_t ea=c->r[2]+0xFFFFBCE8u; c->f[1]=RF64(ea);} // 801D4DAC
  c->r[3]=R32(c->r[3]+0x0000008Cu); // 801D4DB0
  cmps(c,0,(int32_t)c->r[0],211); // 801D4DB4
  c->r[3]=c->r[3]^0x80000000u; // 801D4DB8
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 801D4DBC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 801D4DC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D4DC4
  {uint32_t ea=c->r[30]+0x000017A4u; WF32(ea,c->f[0]);} // 801D4DC8
  if (crb(c,2)) { goto L_801D4F2C; } // 801D4DCC
  if (!crb(c,0)) { goto L_801D4DEC; } // 801D4DD0
  cmps(c,0,(int32_t)c->r[0],174); // 801D4DD4
  if (crb(c,2)) { goto L_801D4E0C; } // 801D4DD8
  if (!crb(c,0)) { goto L_801D5068; } // 801D4DDC
  cmps(c,0,(int32_t)c->r[0],0); // 801D4DE0
  if (crb(c,2)) { goto L_801D4E04; } // 801D4DE4
  goto L_801D5068; // 801D4DE8
L_801D4DEC:;
  cmps(c,0,(int32_t)c->r[0],230); // 801D4DEC
  if (crb(c,2)) { goto L_801D500C; } // 801D4DF0
  if (!crb(c,0)) { goto L_801D5068; } // 801D4DF4
  cmps(c,0,(int32_t)c->r[0],220); // 801D4DF8
  if (crb(c,2)) { goto L_801D4F90; } // 801D4DFC
  goto L_801D5068; // 801D4E00
L_801D4E04:;
  c->r[0]=0u+0x00000000u; // 801D4E04
  W8(c->r[30]+0x00001798u,c->r[0]); // 801D4E08
L_801D4E0C:;
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D4E0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4E10
  c->r[3]=c->r[30]+c->r[0]; // 801D4E14
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D4E18
  cmps(c,0,(int32_t)c->r[0],0); // 801D4E1C
  if (!crb(c,2)) { goto L_801D4E30; } // 801D4E20
  c->r[0]=0u+0x000000AEu; // 801D4E24
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D4E28
  goto L_801D5068; // 801D4E2C
L_801D4E30:;
  c->r[5]=R32(c->r[2]+0xFFFF83F0u); // 801D4E30
  c->r[31]=0u+0x00000001u; // 801D4E34
  c->r[3]=R32(c->r[2]+0xFFFF83ECu); // 801D4E38
  c->r[4]=R32(c->r[2]+0xFFFF83E8u); // 801D4E3C
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 801D4E40
  c->r[5]=c->r[5]|c->r[3]; // 801D4E44
  c->r[6]=R32(c->r[2]+0xFFFF83F4u); // 801D4E48
  c->r[4]=c->r[4]|c->r[0]; // 801D4E4C
  c->r[3]=R32(c->r[2]+0xFFFF83D8u); // 801D4E50
  c->r[0]=R32(c->r[2]+0xFFFF83DCu); // 801D4E54
  c->r[5]=c->r[6]|c->r[5]; // 801D4E58
  W8(c->r[30]+0x00001798u,c->r[31]); // 801D4E5C
  c->r[0]=c->r[3]|c->r[0]; // 801D4E60
  {uint32_t ea=c->r[2]+0xFFFFBCDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4E64
  c->r[0]=c->r[4]|c->r[0]; // 801D4E68
  {uint32_t ea=c->r[2]+0xFFFFBCF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4E6C
  c->r[3]=c->r[5]|c->r[0]; // 801D4E70
  c->lr=0x801D4E78u; f_80049240(c); // 801D4E74
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D4E78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4E7C
  c->r[4]=c->r[30]+c->r[0]; // 801D4E80
  c->r[0]=R8(c->r[4]+0x00000060u); // 801D4E84
  cmps(c,0,(int32_t)c->r[0],0); // 801D4E88
  if (!crb(c,2)) { goto L_801D4EFC; } // 801D4E8C
  c->r[3]=R32(c->r[4]+0x00000010u); // 801D4E90
  cmps(c,0,(int32_t)c->r[3],0); // 801D4E94
  if (!crb(c,2)) { goto L_801D4ED0; } // 801D4E98
  W8(c->r[4]+0x0000000Du,c->r[31]); // 801D4E9C
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4EA0
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D4EA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4EA8
  c->r[3]=c->r[30]+c->r[0]; // 801D4EAC
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4EB0
  fcmp(c,0,c->f[1],c->f[0]); // 801D4EB4
  {uint32_t ea=c->r[30]+0x00001794u; WF32(ea,c->f[1]);} // 801D4EB8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D4EBC
  if (!crb(c,2)) { goto L_801D4FEC; } // 801D4EC0
  {uint32_t ea=c->r[2]+0xFFFFBCD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4EC4
  {uint32_t ea=c->r[30]+0x00001794u; WF32(ea,c->f[0]);} // 801D4EC8
  goto L_801D4FEC; // 801D4ECC
L_801D4ED0:;
  c->r[4]=0u+0x00000000u; // 801D4ED0
  c->lr=0x801D4ED8u; f_80048FB0(c); // 801D4ED4
  cmps(c,0,(int32_t)c->r[3],0); // 801D4ED8
  if (!crb(c,0)) { goto L_801D4F2C; } // 801D4EDC
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D4EE0
  {uint32_t ea=c->r[2]+0xFFFFBCD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4EE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4EE8
  c->r[3]=c->r[30]+c->r[0]; // 801D4EEC
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801D4EF0
  {uint32_t ea=c->r[30]+0x00001794u; WF32(ea,c->f[0]);} // 801D4EF4
  goto L_801D4FEC; // 801D4EF8
L_801D4EFC:;
  c->r[3]=c->r[4]+0x00000061u; // 801D4EFC
  c->r[4]=0u+0x00000000u; // 801D4F00
  c->lr=0x801D4F08u; f_80048FB0(c); // 801D4F04
  cmps(c,0,(int32_t)c->r[3],0); // 801D4F08
  if (!crb(c,0)) { goto L_801D4F2C; } // 801D4F0C
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D4F10
  {uint32_t ea=c->r[2]+0xFFFFBCD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4F14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4F18
  c->r[3]=c->r[30]+c->r[0]; // 801D4F1C
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801D4F20
  {uint32_t ea=c->r[30]+0x00001794u; WF32(ea,c->f[0]);} // 801D4F24
  goto L_801D4FEC; // 801D4F28
L_801D4F2C:;
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4F2C
  c->r[3]=0u+0x00000000u; // 801D4F30
  c->lr=0x801D4F38u; f_80049000(c); // 801D4F34
  cmps(c,0,(int32_t)c->r[3],0); // 801D4F38
  if (crb(c,2)) { goto L_801D4F4C; } // 801D4F3C
  c->r[0]=0u+0x000000D3u; // 801D4F40
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D4F44
  goto L_801D5068; // 801D4F48
L_801D4F4C:;
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D4F4C
  c->r[4]=0u+0x00000001u; // 801D4F50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4F54
  c->r[3]=c->r[30]+c->r[0]; // 801D4F58
  W8(c->r[3]+0x0000000Du,c->r[4]); // 801D4F5C
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D4F60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D4F64
  c->r[3]=c->r[30]+c->r[0]; // 801D4F68
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4F6C
  {uint32_t ea=c->r[30]+0x00001794u; WF32(ea,c->f[0]);} // 801D4F70
L_801D4F74:;
  c->r[3]=0u+0x00000000u; // 801D4F74
  c->lr=0x801D4F7Cu; f_800490A0(c); // 801D4F78
  cmps(c,0,(int32_t)c->r[3],0); // 801D4F7C
  if (crb(c,2)) { goto L_801D4FAC; } // 801D4F80
  c->r[0]=0u+0x000000DCu; // 801D4F84
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D4F88
  goto L_801D5068; // 801D4F8C
L_801D4F90:;
  c->r[3]=0u+0x804D0000u; // 801D4F90
  {uint32_t ea=c->r[30]+0x00001794u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4F94
  c->r[3]=c->r[3]+0x00003318u; // 801D4F98
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4F9C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D4FA0
  {uint32_t ea=c->r[30]+0x00001794u; WF32(ea,c->f[0]);} // 801D4FA4
  IRQCHK(c); goto L_801D4F74; // 801D4FA8
L_801D4FAC:;
  c->r[5]=R32(c->r[2]+0xFFFF83F0u); // 801D4FAC
  c->r[3]=R32(c->r[2]+0xFFFF83ECu); // 801D4FB0
  c->r[4]=R32(c->r[2]+0xFFFF83E8u); // 801D4FB4
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 801D4FB8
  c->r[5]=c->r[5]|c->r[3]; // 801D4FBC
  c->r[6]=R32(c->r[2]+0xFFFF83F4u); // 801D4FC0
  c->r[4]=c->r[4]|c->r[0]; // 801D4FC4
  c->r[3]=R32(c->r[2]+0xFFFF83D8u); // 801D4FC8
  c->r[0]=R32(c->r[2]+0xFFFF83DCu); // 801D4FCC
  c->r[5]=c->r[6]|c->r[5]; // 801D4FD0
  {uint32_t ea=c->r[2]+0xFFFFBCF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4FD4
  c->r[0]=c->r[3]|c->r[0]; // 801D4FD8
  {uint32_t ea=c->r[2]+0xFFFFBCF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D4FDC
  c->r[0]=c->r[4]|c->r[0]; // 801D4FE0
  c->r[3]=c->r[5]|c->r[0]; // 801D4FE4
  c->lr=0x801D4FECu; f_80049240(c); // 801D4FE8
L_801D4FEC:;
  {uint32_t ea=c->r[30]+0x00001794u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D4FEC
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D4FF0
  fcmp(c,0,c->f[1],c->f[0]); // 801D4FF4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D4FF8
  if (crb(c,2)) { goto L_801D5028; } // 801D4FFC
  c->r[0]=0u+0x000000E6u; // 801D5000
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D5004
  goto L_801D5068; // 801D5008
L_801D500C:;
  c->r[3]=0u+0x804D0000u; // 801D500C
  {uint32_t ea=c->r[30]+0x00001794u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5010
  c->r[3]=c->r[3]+0x00003318u; // 801D5014
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5018
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D501C
  {uint32_t ea=c->r[30]+0x00001794u; WF32(ea,c->f[0]);} // 801D5020
  IRQCHK(c); goto L_801D4FEC; // 801D5024
L_801D5028:;
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D5028
  c->r[4]=0u+0x00000000u; // 801D502C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D5030
  c->r[3]=c->r[30]+c->r[0]; // 801D5034
  W8(c->r[3]+0x0000000Du,c->r[4]); // 801D5038
  c->r[0]=R32(c->r[30]+0x00001790u); // 801D503C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)376); // 801D5040
  c->r[3]=c->r[30]+c->r[0]; // 801D5044
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801D5048
  c->r[3]=R32(c->r[30]+0x00001790u); // 801D504C
  c->r[0]=c->r[3]+0x00000001u; // 801D5050
  cmps(c,0,(int32_t)c->r[0],16); // 801D5054
  W32(c->r[30]+0x00001790u,c->r[0]); // 801D5058
  if (crb(c,0)) { IRQCHK(c); goto L_801D4E04; } // 801D505C
  W32(c->r[30]+0x00001790u,c->r[4]); // 801D5060
  IRQCHK(c); goto L_801D4E04; // 801D5064
L_801D5068:;
  c->r[11]=c->r[1]+0x00000050u; // 801D5068
  c->lr=0x801D5070u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D506C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D5070
  c->lr=c->r[0]; // 801D5074
  c->r[1]=c->r[1]+0x00000050u; // 801D5078
  return; // 801D507C
}

// fn_801D5080
void f_801D5080(Ctx* __restrict c) {
  trace_call(0x801D5080u);
  {uint32_t ea=c->r[3]+0x000017A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5080
  return; // 801D5084
}

// fn_801D5088
void f_801D5088(Ctx* __restrict c) {
  trace_call(0x801D5088u);
  c->r[0]=0u+0x00000000u; // 801D5088
  W8(c->r[3]+0x000017A0u,c->r[0]); // 801D508C
  return; // 801D5090
}

// fn_801D5094
void f_801D5094(Ctx* __restrict c) {
  trace_call(0x801D5094u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5094
  c->r[0]=c->lr; // 801D5098
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D509C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D50A0
  c->r[31]=c->r[4]|c->r[4]; // 801D50A4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D50A8
  c->r[30]=c->r[3]|c->r[3]; // 801D50AC
  c->r[0]=R32(c->r[3]+0x0000179Cu); // 801D50B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D50B4
  if (crb(c,2)) { goto L_801D5110; } // 801D50B8
  c->r[4]=c->r[0]|c->r[0]; // 801D50BC
  c->r[3]=c->r[1]+0x00000010u; // 801D50C0
  c->lr=0x801D50C8u; f_80172DDC(c); // 801D50C4
  c->r[4]=c->r[31]|c->r[31]; // 801D50C8
  c->r[3]=c->r[1]+0x00000010u; // 801D50CC
  c->lr=0x801D50D4u; f_80172EC8(c); // 801D50D0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D50D4
  c->r[4]=c->r[1]+0x00000008u; // 801D50D8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D50DC
  c->r[3]=c->r[30]+0x000017ACu; // 801D50E0
  c->lr=0x801D50E8u; f_80172FE0(c); // 801D50E4
  c->r[3]=c->r[30]+0x000017ACu; // 801D50E8
  c->lr=0x801D50F0u; f_80172FF4(c); // 801D50EC
  cmps(c,0,(int32_t)c->r[3],0); // 801D50F0
  if (!crb(c,2)) { goto L_801D5110; } // 801D50F4
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D50F8
  c->r[3]=0u+0x00000001u; // 801D50FC
  c->r[0]=0u+0x00000000u; // 801D5100
  W8(c->r[30]+0x000017A0u,c->r[3]); // 801D5104
  {uint32_t ea=c->r[30]+0x000017A4u; WF32(ea,c->f[0]);} // 801D5108
  W32(c->r[30]+0x000017A8u,c->r[0]); // 801D510C
L_801D5110:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D5110
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D5114
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D5118
  c->lr=c->r[0]; // 801D511C
  c->r[1]=c->r[1]+0x00000030u; // 801D5120
  return; // 801D5124
}

// fn_801D5128
void f_801D5128(Ctx* __restrict c) {
  trace_call(0x801D5128u);
  W32(c->r[3]+0x0000179Cu,c->r[4]); // 801D5128
  return; // 801D512C
}

// fn_801D5130
void f_801D5130(Ctx* __restrict c) {
  trace_call(0x801D5130u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D5130
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D5134
  c->ctr=c->r[12]; // 801D5138
  if (true) { dispatch(c,c->ctr); return; } // 801D513C
}

// fn_801D5140
void f_801D5140(Ctx* __restrict c) {
  trace_call(0x801D5140u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5140
  c->r[0]=c->lr; // 801D5144
  c->r[6]=0u+0x00000000u; // 801D5148
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D514C
  c->r[0]=0u+0x00000010u; // 801D5150
  c->r[4]=c->r[6]|c->r[6]; // 801D5154
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801D5158
  c->r[31]=c->r[3]|c->r[3]; // 801D515C
  W32(c->r[3]+0x00000008u,c->r[6]); // 801D5160
  W32(c->r[3]+0x0000178Cu,c->r[6]); // 801D5164
  W32(c->r[3]+0x00001790u,c->r[6]); // 801D5168
  W8(c->r[3]+0x00001798u,c->r[6]); // 801D516C
  c->ctr=c->r[0]; // 801D5170
L_801D5174:;
  c->r[5]=c->r[3]+c->r[4]; // 801D5174
  c->r[4]=c->r[4]+0x00000178u; // 801D5178
  W8(c->r[5]+0x0000000Cu,c->r[6]); // 801D517C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5174; } // 801D5180
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5184
  c->r[0]=0u+0x00000000u; // 801D5188
  c->r[4]=0u+0x80400000u; // 801D518C
  W8(c->r[3]+0x000017A0u,c->r[0]); // 801D5190
  c->r[4]=c->r[4]+0x00004E94u; // 801D5194
  c->r[5]=c->r[13]+0xFFFF8948u; // 801D5198
  {uint32_t ea=c->r[3]+0x000017A4u; WF32(ea,c->f[0]);} // 801D519C
  c->r[3]=c->r[1]+0x00000008u; // 801D51A0
  c->lr=0x801D51A8u; f_802560D8(c); // 801D51A4
  c->r[3]=0u+0x80490000u; // 801D51A8
  c->r[4]=c->r[1]+0x00000008u; // 801D51AC
  c->r[3]=c->r[3]+0xFFFFE878u; // 801D51B0
  c->lr=0x801D51B8u; f_80103094(c); // 801D51B4
  c->r[5]=R32(c->r[2]+0xFFFF83F0u); // 801D51B8
  c->r[0]=R32(c->r[2]+0xFFFF83ECu); // 801D51BC
  c->r[4]=R32(c->r[2]+0xFFFF83E8u); // 801D51C0
  c->r[5]=c->r[5]|c->r[0]; // 801D51C4
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 801D51C8
  c->r[7]=R32(c->r[3]+0x00000010u); // 801D51CC
  c->r[4]=c->r[4]|c->r[0]; // 801D51D0
  c->r[6]=R32(c->r[2]+0xFFFF83F4u); // 801D51D4
  c->r[3]=R32(c->r[2]+0xFFFF83D8u); // 801D51D8
  c->r[0]=R32(c->r[2]+0xFFFF83DCu); // 801D51DC
  c->r[5]=c->r[6]|c->r[5]; // 801D51E0
  W32(c->r[31]+0x0000179Cu,c->r[7]); // 801D51E4
  c->r[0]=c->r[3]|c->r[0]; // 801D51E8
  {uint32_t ea=c->r[2]+0xFFFFBCF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D51EC
  c->r[0]=c->r[4]|c->r[0]; // 801D51F0
  {uint32_t ea=c->r[2]+0xFFFFBCFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D51F4
  c->r[3]=c->r[5]|c->r[0]; // 801D51F8
  c->lr=0x801D5200u; f_80049240(c); // 801D51FC
  c->r[0]=R32(c->r[1]+0x00000094u); // 801D5200
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801D5204
  c->lr=c->r[0]; // 801D5208
  c->r[1]=c->r[1]+0x00000090u; // 801D520C
  return; // 801D5210
}

// fn_801D5214
void f_801D5214(Ctx* __restrict c) {
  trace_call(0x801D5214u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5214
  c->r[0]=c->lr; // 801D5218
  c->r[5]=0u+0x80400000u; // 801D521C
  c->r[4]=0u+0x803F0000u; // 801D5220
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5224
  c->r[5]=c->r[5]+0x00004E58u; // 801D5228
  c->r[4]=c->r[4]+0x000038D0u; // 801D522C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D5230
  c->r[31]=0u+0x00000000u; // 801D5234
  c->r[30]=c->r[3]|c->r[3]; // 801D5238
  W32(c->r[3]+0x00000000u,c->r[5]); // 801D523C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D5240
  W32(c->r[3]+0x00000008u,c->r[31]); // 801D5244
  c->r[3]=c->r[3]+0x000017ACu; // 801D5248
  c->lr=0x801D5250u; f_80172FD0(c); // 801D524C
  W32(c->r[13]+0xFFFF9738u,c->r[30]); // 801D5250
  c->r[3]=c->r[30]|c->r[30]; // 801D5254
  W8(c->r[30]+0x000017B4u,c->r[31]); // 801D5258
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D525C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5260
  c->lr=c->r[0]; // 801D5264
  c->r[1]=c->r[1]+0x00000010u; // 801D5268
  return; // 801D526C
}

// fn_801D5270
void f_801D5270(Ctx* __restrict c) {
  trace_call(0x801D5270u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5270
  c->r[0]=c->lr; // 801D5274
  cmps(c,0,(int32_t)c->r[3],0); // 801D5278
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D527C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D5280
  c->r[30]=c->r[3]|c->r[3]; // 801D5284
  c->r[31]=c->r[4]|c->r[4]; // 801D5288
  if (crb(c,2)) { goto L_801D52B4; } // 801D528C
  c->r[0]=0u+0x00000000u; // 801D5290
  c->r[4]=0u+0xFFFFFFFFu; // 801D5294
  W32(c->r[13]+0xFFFF9738u,c->r[0]); // 801D5298
  c->r[3]=c->r[3]+0x00000004u; // 801D529C
  c->lr=0x801D52A4u; f_8009E538(c); // 801D52A0
  cmps(c,0,(int32_t)c->r[31],0); // 801D52A4
  if (!crb(c,1)) { goto L_801D52B4; } // 801D52A8
  c->r[3]=c->r[30]|c->r[30]; // 801D52AC
  c->lr=0x801D52B4u; f_802896EC(c); // 801D52B0
L_801D52B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D52B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D52B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D52BC
  c->lr=c->r[0]; // 801D52C0
  c->r[1]=c->r[1]+0x00000010u; // 801D52C4
  return; // 801D52C8
}

// fn_801D52CC
void f_801D52CC(Ctx* __restrict c) {
  trace_call(0x801D52CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D52CC
  c->r[0]=c->lr; // 801D52D0
  {uint32_t ea=c->r[2]+0xFFFFBCD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D52D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D52D8
  c->f[3]=c->f[1]; // 801D52DC
  {uint32_t ea=c->r[2]+0xFFFFBCF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D52E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D52E4
  c->r[31]=0u+0x80580000u; // 801D52E8
  c->r[31]=c->r[31]+0xFFFF9150u; // 801D52EC
  c->r[3]=c->r[31]+0x00000000u; // 801D52F0
  c->lr=0x801D52F8u; f_8003F588(c); // 801D52F4
  c->r[3]=c->r[31]+0x00000018u; // 801D52F8
  c->lr=0x801D5300u; f_801D5214(c); // 801D52FC
  c->r[4]=0u+0x801D0000u; // 801D5300
  c->r[3]=c->r[31]+0x00000018u; // 801D5304
  c->r[4]=c->r[4]+0x00005270u; // 801D5308
  c->r[5]=c->r[31]+0x0000000Cu; // 801D530C
  c->lr=0x801D5314u; f_802895A4(c); // 801D5310
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5318
  c->lr=c->r[0]; // 801D531C
  c->r[1]=c->r[1]+0x00000010u; // 801D5320
  return; // 801D5324
}

// fn_801D5328
void f_801D5328(Ctx* __restrict c) {
  trace_call(0x801D5328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5328
  c->r[0]=c->lr; // 801D532C
  c->r[4]=0u+0x80400000u; // 801D5330
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5334
  c->r[4]=c->r[4]+0x00004EB0u; // 801D5338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D533C
  c->r[31]=0u+0x00000000u; // 801D5340
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5344
  c->r[30]=c->r[3]|c->r[3]; // 801D5348
  W32(c->r[3]+0x00000004u,c->r[31]); // 801D534C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D5350
  W32(c->r[3]+0x00000008u,c->r[31]); // 801D5354
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801D5358
  W32(c->r[3]+0x00000010u,c->r[31]); // 801D535C
  c->r[3]=c->r[3]+0x00000018u; // 801D5360
  c->lr=0x801D5368u; f_80055FDC(c); // 801D5364
  W32(c->r[30]+0x00000030u,c->r[31]); // 801D5368
  c->r[3]=c->r[30]|c->r[30]; // 801D536C
  W32(c->r[30]+0x00000034u,c->r[31]); // 801D5370
  W32(c->r[30]+0x00000038u,c->r[31]); // 801D5374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5378
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D537C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5380
  c->lr=c->r[0]; // 801D5384
  c->r[1]=c->r[1]+0x00000010u; // 801D5388
  return; // 801D538C
}

// fn_801D5390
void f_801D5390(Ctx* __restrict c) {
  trace_call(0x801D5390u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5390
  c->r[0]=c->lr; // 801D5394
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5398
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D539C
  c->r[31]=c->r[3]|c->r[3]; // 801D53A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D53A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D53A8
  c->r[29]=R32(c->r[4]+0x00000068u); // 801D53AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D53B0
  c->r[28]=c->r[4]|c->r[4]; // 801D53B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D53B8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D53BC
  if (crb(c,2)) { goto L_801D540C; } // 801D53C0
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 801D53C4
  c->r[3]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801D53C8
  c->r[4]=0u+0x00000000u; // 801D53CC
  c->r[5]=0u+0x00000000u; // 801D53D0
  c->r[6]=0u+0x00000000u; // 801D53D4
  c->lr=0x801D53DCu; f_80137AA0(c); // 801D53D8
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D53DC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801D53E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801D53E4
  if (!crb(c,1)) { goto L_801D53F0; } // 801D53E8
  W32(c->r[31]+0x00000008u,c->r[29]); // 801D53EC
L_801D53F0:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D53F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D53F4
  if (crb(c,2)) { goto L_801D540C; } // 801D53F8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801D53FC
  c->r[4]=c->r[30]|c->r[30]; // 801D5400
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D5404
  c->lr=0x801D540Cu; f_80235294(c); // 801D5408
L_801D540C:;
  W32(c->r[31]+0x00000004u,c->r[29]); // 801D540C
  c->r[5]=0u+0x00000000u; // 801D5410
  c->r[6]=0u+0x00000000u; // 801D5414
  c->r[4]=0u+0x00000000u; // 801D5418
  W32(c->r[31]+0x00000008u,c->r[29]); // 801D541C
  goto L_801D5434; // 801D5420
L_801D5424:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801D5424
  c->r[5]=c->r[5]+0x00000001u; // 801D5428
  W32(c->r[3]+c->r[6],c->r[4]); // 801D542C
  c->r[6]=c->r[6]+0x00000004u; // 801D5430
L_801D5434:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D5434
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801D5438
  if (crb(c,0)) { IRQCHK(c); goto L_801D5424; } // 801D543C
  c->r[29]=R32(c->r[28]+0x00000068u); // 801D5440
  c->r[0]=R32(c->r[31]+0x00000030u); // 801D5444
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D5448
  if (crb(c,2)) { goto L_801D54B4; } // 801D544C
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)24); // 801D5450
  c->r[30]=R32(c->r[31]+0x00000038u); // 801D5454
  c->r[4]=0u+0x00000000u; // 801D5458
  c->r[5]=0u+0x00000000u; // 801D545C
  c->r[3]=c->r[3]+0x00000010u; // 801D5460
  c->r[6]=0u+0x00000000u; // 801D5464
  c->lr=0x801D546Cu; f_80137AA0(c); // 801D5468
  c->r[4]=0u+0x80050000u; // 801D546C
  c->r[7]=c->r[29]|c->r[29]; // 801D5470
  c->r[4]=c->r[4]+0x00005FDCu; // 801D5474
  c->r[5]=0u+0x00000000u; // 801D5478
  c->r[6]=0u+0x00000018u; // 801D547C
  c->lr=0x801D5484u; f_80289974(c); // 801D5480
  c->r[0]=R32(c->r[31]+0x00000034u); // 801D5484
  W32(c->r[31]+0x00000038u,c->r[3]); // 801D5488
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801D548C
  if (!crb(c,1)) { goto L_801D5498; } // 801D5490
  W32(c->r[31]+0x00000034u,c->r[29]); // 801D5494
L_801D5498:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 801D5498
  cmps(c,0,(int32_t)c->r[0],0); // 801D549C
  if (crb(c,2)) { goto L_801D54B4; } // 801D54A0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801D54A4
  c->r[3]=R32(c->r[31]+0x00000038u); // 801D54A8
  c->r[4]=c->r[30]|c->r[30]; // 801D54AC
  c->lr=0x801D54B4u; f_80235294(c); // 801D54B0
L_801D54B4:;
  W32(c->r[31]+0x00000030u,c->r[29]); // 801D54B4
  W32(c->r[31]+0x00000034u,c->r[29]); // 801D54B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D54BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D54C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D54C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D54C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D54CC
  c->lr=c->r[0]; // 801D54D0
  c->r[1]=c->r[1]+0x00000020u; // 801D54D4
  return; // 801D54D8
}

// fn_801D54DC
void f_801D54DC(Ctx* __restrict c) {
  trace_call(0x801D54DCu);
  W32(c->r[3]+0x00000010u,c->r[5]); // 801D54DC
  return; // 801D54E0
}

// fn_801D54E4
void f_801D54E4(Ctx* __restrict c) {
  trace_call(0x801D54E4u);
  return; // 801D54E4
}

// fn_801D54E8
void f_801D54E8(Ctx* __restrict c) {
  trace_call(0x801D54E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D54E8
  c->r[0]=c->lr; // 801D54EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D54F0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D54F4
  c->r[29]=c->r[4]|c->r[4]; // 801D54F8
  c->r[25]=c->r[5]|c->r[5]; // 801D54FC
  c->r[27]=0u+0x00000000u; // 801D5500
  c->r[26]=0u+0x00000000u; // 801D5504
  c->r[30]=0u+0x00000000u; // 801D5508
  c->r[28]=R32(c->r[13]+0xFFFF96DCu); // 801D550C
  goto L_801D5548; // 801D5510
L_801D5514:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801D5514
  c->r[4]=c->r[25]|c->r[25]; // 801D5518
  c->r[5]=0u+0x00000000u; // 801D551C
  c->r[31]=c->r[0]+c->r[30]; // 801D5520
  c->r[3]=c->r[31]+0x00000008u; // 801D5524
  c->lr=0x801D552Cu; f_800560FC(c); // 801D5528
  cmpu(c,0,c->r[3],0x00000001u); // 801D552C
  if (!crb(c,2)) { goto L_801D5540; } // 801D5530
  W32(c->r[29]+0x00000000u,c->r[31]); // 801D5534
  c->r[29]=c->r[29]+0x00000004u; // 801D5538
  c->r[27]=c->r[27]+0x00000001u; // 801D553C
L_801D5540:;
  c->r[30]=c->r[30]+0x00000020u; // 801D5540
  c->r[26]=c->r[26]+0x00000001u; // 801D5544
L_801D5548:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801D5548
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801D554C
  if (crb(c,0)) { IRQCHK(c); goto L_801D5514; } // 801D5550
  c->r[3]=c->r[27]|c->r[27]; // 801D5554
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D5558
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D555C
  c->lr=c->r[0]; // 801D5560
  c->r[1]=c->r[1]+0x00000030u; // 801D5564
  return; // 801D5568
}

// fn_801D556C
void f_801D556C(Ctx* __restrict c) {
  trace_call(0x801D556Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D556C
  c->r[0]=c->lr; // 801D5570
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D5574
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801D5578
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801D557C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 801D5580
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 801D5584
  c->r[11]=c->r[1]+0x00000070u; // 801D5588
  c->lr=0x801D5590u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D558C
  {uint32_t ea=c->r[2]+0xFFFFBD00u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D5590
  c->r[22]=c->r[4]|c->r[4]; // 801D5594
  c->r[23]=c->r[5]|c->r[5]; // 801D5598
  c->r[24]=c->r[6]|c->r[6]; // 801D559C
  c->f[31]=c->f[30]; // 801D55A0
  c->r[29]=c->r[7]|c->r[7]; // 801D55A4
  c->r[28]=0u+0x00000000u; // 801D55A8
  c->r[27]=0u+0x00000000u; // 801D55AC
  c->r[26]=0u+0x00000000u; // 801D55B0
  goto L_801D5654; // 801D55B4
L_801D55B8:;
  c->r[25]=R32(c->r[29]+0x00000000u); // 801D55B8
  c->r[31]=R32(c->r[25]+0x00000000u); // 801D55BC
  c->r[30]=c->r[25]+0x00000008u; // 801D55C0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[27]); // 801D55C4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 801D55C8
  if (crb(c,0)) { goto L_801D564C; } // 801D55CC
  c->r[3]=c->r[30]|c->r[30]; // 801D55D0
  c->r[4]=c->r[22]|c->r[22]; // 801D55D4
  c->r[5]=c->r[1]+0x00000008u; // 801D55D8
  c->lr=0x801D55E0u; f_800560FC(c); // 801D55DC
  cmpu(c,0,c->r[3],0x00000001u); // 801D55E0
  if (!crb(c,2)) { goto L_801D564C; } // 801D55E4
  c->r[3]=c->r[1]+0x00000010u; // 801D55E8
  c->r[4]=c->r[23]+0x00000108u; // 801D55EC
  c->lr=0x801D55F4u; f_80138AA8(c); // 801D55F0
  c->r[5]=c->r[30]|c->r[30]; // 801D55F4
  c->r[3]=c->r[1]+0x00000020u; // 801D55F8
  c->r[4]=c->r[23]+0x00000018u; // 801D55FC
  c->lr=0x801D5604u; f_8013951C(c); // 801D5600
  c->r[3]=c->r[1]+0x00000030u; // 801D5604
  c->r[4]=c->r[1]+0x00000020u; // 801D5608
  c->lr=0x801D5610u; f_8013932C(c); // 801D560C
  c->r[4]=c->r[1]+0x00000010u; // 801D5610
  c->lr=0x801D5618u; f_800593E4(c); // 801D5614
  c->f[0]=std::fabs(c->f[1]); // 801D5618
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D561C
  fcmp(c,0,c->f[0],c->f[1]); // 801D5620
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D5624
  if (!crb(c,2)) { goto L_801D564C; } // 801D5628
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[27]); // 801D562C
  if (crb(c,1)) { goto L_801D5640; } // 801D5630
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5634
  fcmp(c,0,c->f[0],c->f[30]); // 801D5638
  if (!crb(c,0)) { goto L_801D564C; } // 801D563C
L_801D5640:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 801D5640
  c->r[27]=c->r[31]|c->r[31]; // 801D5644
  c->r[28]=c->r[25]|c->r[25]; // 801D5648
L_801D564C:;
  c->r[29]=c->r[29]+0x00000004u; // 801D564C
  c->r[26]=c->r[26]+0x00000001u; // 801D5650
L_801D5654:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[24]); // 801D5654
  if (crb(c,0)) { IRQCHK(c); goto L_801D55B8; } // 801D5658
  c->r[3]=c->r[28]|c->r[28]; // 801D565C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801D5660
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801D5664
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 801D5668
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 801D566C
  c->r[11]=c->r[1]+0x00000070u; // 801D5670
  c->lr=0x801D5678u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5674
  c->r[0]=R32(c->r[1]+0x00000094u); // 801D5678
  c->lr=c->r[0]; // 801D567C
  c->r[1]=c->r[1]+0x00000090u; // 801D5680
  return; // 801D5684
}

// dtor_801D5688
void f_801D5688(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5688
  c->r[0]=c->lr; // 801D568C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5690
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5698
  c->r[31]=c->r[3]|c->r[3]; // 801D569C
  if (crb(c,2)) { goto L_801D56D4; } // 801D56A0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D56A4
  cmps(c,0,(int32_t)c->r[0],0); // 801D56A8
  if (crb(c,2)) { goto L_801D56B8; } // 801D56AC
  c->r[0]=0u+0x00000000u; // 801D56B0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D56B4
L_801D56B8:;
  c->r[0]=0u+0x00000000u; // 801D56B8
  cmps(c,0,(int32_t)c->r[4],0); // 801D56BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D56C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D56C4
  if (!crb(c,1)) { goto L_801D56D4; } // 801D56C8
  c->r[3]=c->r[31]|c->r[31]; // 801D56CC
  c->lr=0x801D56D4u; f_802896EC(c); // 801D56D0
L_801D56D4:;
  c->r[3]=c->r[31]|c->r[31]; // 801D56D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D56D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D56DC
  c->lr=c->r[0]; // 801D56E0
  c->r[1]=c->r[1]+0x00000010u; // 801D56E4
  return; // 801D56E8
}

// fn_801D56EC
void f_801D56EC(Ctx* __restrict c) {
  trace_call(0x801D56ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D56EC
  c->r[0]=c->lr; // 801D56F0
  c->r[5]=0u+0x80400000u; // 801D56F4
  c->r[4]=0u+0x804B0000u; // 801D56F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D56FC
  c->r[0]=0u+0xFFFFFFFFu; // 801D5700
  c->r[5]=c->r[5]+0x00004ED0u; // 801D5704
  c->r[4]=c->r[4]+0x00003988u; // 801D5708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D570C
  c->r[31]=c->r[3]|c->r[3]; // 801D5710
  W32(c->r[3]+0x00000000u,c->r[5]); // 801D5714
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D5718
  c->r[3]=c->r[3]+0x00000008u; // 801D571C
  c->lr=0x801D5724u; f_8013932C(c); // 801D5720
  c->r[4]=0u+0x804B0000u; // 801D5724
  c->r[3]=c->r[31]+0x00000018u; // 801D5728
  c->r[4]=c->r[4]+0x00003928u; // 801D572C
  c->lr=0x801D5734u; f_8013932C(c); // 801D5730
  {uint32_t ea=c->r[2]+0xFFFFBD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5734
  c->r[0]=0u+0x00000000u; // 801D5738
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801D573C
  c->r[3]=c->r[31]|c->r[31]; // 801D5740
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 801D5744
  W32(c->r[31]+0x00000030u,c->r[0]); // 801D5748
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 801D574C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 801D5750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5754
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5758
  c->lr=c->r[0]; // 801D575C
  c->r[1]=c->r[1]+0x00000010u; // 801D5760
  return; // 801D5764
}

// fn_801D5768
void f_801D5768(Ctx* __restrict c) {
  trace_call(0x801D5768u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5768
  c->r[0]=c->lr; // 801D576C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801D5770
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801D5774
  c->r[31]=c->r[4]|c->r[4]; // 801D5778
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801D577C
  c->r[30]=c->r[3]|c->r[3]; // 801D5780
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D5784
  cmps(c,0,(int32_t)c->r[0],0); // 801D5788
  if (!crb(c,0)) { goto L_801D57AC; } // 801D578C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D5790
  c->r[3]=c->r[31]|c->r[31]; // 801D5794
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 801D5798
  c->r[12]=R32(c->r[12]+0x00000024u); // 801D579C
  c->ctr=c->r[12]; // 801D57A0
  if (true) { c->lr=0x801D57A8u; dispatch(c,c->ctr); } // 801D57A4
  W32(c->r[30]+0x00000004u,c->r[3]); // 801D57A8
L_801D57AC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D57AC
  c->r[4]=c->r[31]|c->r[31]; // 801D57B0
  c->r[3]=c->r[1]+0x00000028u; // 801D57B4
  c->r[6]=0u+0x00000001u; // 801D57B8
  c->r[12]=R32(c->r[12]+0x00000034u); // 801D57BC
  c->r[5]=R32(c->r[30]+0x00000004u); // 801D57C0
  c->ctr=c->r[12]; // 801D57C4
  if (true) { c->lr=0x801D57CCu; dispatch(c,c->ctr); } // 801D57C8
  c->r[5]=R32(c->r[30]+0x00000030u); // 801D57CC
  c->r[3]=c->r[1]+0x00000068u; // 801D57D0
  c->r[4]=c->r[1]+0x00000028u; // 801D57D4
  c->r[6]=0u+0x00000001u; // 801D57D8
  c->r[7]=0u+0x00000000u; // 801D57DC
  c->lr=0x801D57E4u; f_800581A8(c); // 801D57E0
  c->r[3]=c->r[1]+0x00000018u; // 801D57E4
  c->r[4]=c->r[1]+0x00000068u; // 801D57E8
  c->lr=0x801D57F0u; f_80138AB8(c); // 801D57EC
  c->r[3]=c->r[30]+0x00000008u; // 801D57F0
  c->r[4]=c->r[1]+0x00000018u; // 801D57F4
  c->lr=0x801D57FCu; f_8013939C(c); // 801D57F8
  c->r[3]=c->r[1]+0x00000008u; // 801D57FC
  c->r[4]=c->r[1]+0x00000068u; // 801D5800
  c->lr=0x801D5808u; f_80138AA8(c); // 801D5804
  c->r[3]=c->r[30]+0x00000018u; // 801D5808
  c->r[4]=c->r[1]+0x00000008u; // 801D580C
  c->lr=0x801D5814u; f_8013939C(c); // 801D5810
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801D5814
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801D5818
  c->r[30]=R32(c->r[1]+0x000000A8u); // 801D581C
  c->lr=c->r[0]; // 801D5820
  c->r[1]=c->r[1]+0x000000B0u; // 801D5824
  return; // 801D5828
}

// fn_801D582C
void f_801D582C(Ctx* __restrict c) {
  trace_call(0x801D582Cu);
  return; // 801D582C
}

// fn_801D5830
void f_801D5830(Ctx* __restrict c) {
  trace_call(0x801D5830u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5830
  c->r[0]=c->lr; // 801D5834
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801D5838
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801D583C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801D5840
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801D5844
  c->r[31]=c->r[6]|c->r[6]; // 801D5848
  W32(c->r[1]+0x00000098u,c->r[30]); // 801D584C
  c->r[30]=c->r[4]|c->r[4]; // 801D5850
  c->r[4]=c->r[31]|c->r[31]; // 801D5854
  W32(c->r[1]+0x00000094u,c->r[29]); // 801D5858
  c->r[29]=c->r[3]|c->r[3]; // 801D585C
  c->r[3]=c->r[1]+0x00000038u; // 801D5860
  c->r[5]=c->r[29]+0x00000008u; // 801D5864
  c->lr=0x801D586Cu; f_8013951C(c); // 801D5868
  c->r[3]=c->r[1]+0x00000048u; // 801D586C
  c->r[4]=c->r[1]+0x00000038u; // 801D5870
  c->lr=0x801D5878u; f_8013932C(c); // 801D5874
  c->r[4]=c->r[29]+0x00000018u; // 801D5878
  c->lr=0x801D5880u; f_800593E4(c); // 801D587C
  c->f[31]=c->f[1]; // 801D5880
  c->r[3]=c->r[1]+0x00000058u; // 801D5884
  c->r[4]=c->r[29]+0x00000018u; // 801D5888
  c->lr=0x801D5890u; f_8013939C(c); // 801D588C
  c->f[1]=c->f[31]; // 801D5890
  c->r[3]=c->r[1]+0x00000058u; // 801D5894
  c->lr=0x801D589Cu; f_80139448(c); // 801D5898
  c->r[3]=c->r[1]+0x00000078u; // 801D589C
  c->r[4]=c->r[29]+0x00000008u; // 801D58A0
  c->r[5]=c->r[1]+0x00000058u; // 801D58A4
  c->lr=0x801D58ACu; f_801394B8(c); // 801D58A8
  c->r[4]=c->r[31]|c->r[31]; // 801D58AC
  c->r[3]=c->r[1]+0x00000068u; // 801D58B0
  c->r[5]=c->r[1]+0x00000078u; // 801D58B4
  c->lr=0x801D58BCu; f_8013951C(c); // 801D58B8
  c->r[3]=c->r[1]+0x00000028u; // 801D58BC
  c->r[4]=c->r[1]+0x00000068u; // 801D58C0
  c->lr=0x801D58C8u; f_801397B4(c); // 801D58C4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=c->ps1[31]=RF32(ea);} // 801D58C8
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D58CC
  fcmp(c,0,c->f[31],c->f[0]); // 801D58D0
  if (!crb(c,0)) { goto L_801D5968; } // 801D58D4
  {uint32_t ea=c->r[2]+0xFFFFBD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D58D8
  fcmp(c,0,c->f[31],c->f[0]); // 801D58DC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D58E0
  if (crb(c,2)) { goto L_801D5904; } // 801D58E4
  c->r[3]=0u+0x803F0000u; // 801D58E8
  c->r[5]=0u+0x803F0000u; // 801D58EC
  c->r[3]=c->r[3]+0x00001C38u; // 801D58F0
  c->r[4]=0u+0x00000273u; // 801D58F4
  c->r[5]=c->r[5]+0x00001C14u; // 801D58F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D58FC
  c->lr=0x801D5904u; f_80344550(c); // 801D5900
L_801D5904:;
  {uint32_t ea=c->r[2]+0xFFFFBD08u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5904
  fcmp(c,0,c->f[31],c->f[1]); // 801D5908
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D590C
  if (!crb(c,2)) { goto L_801D5918; } // 801D5910
  goto L_801D5924; // 801D5914
L_801D5918:;
  c->f[1]=c->f[31]; // 801D5918
  c->lr=0x801D5920u; f_80394248(c); // 801D591C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801D5920
L_801D5924:;
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5924
  c->r[3]=c->r[1]+0x00000008u; // 801D5928
  c->r[4]=c->r[1]+0x00000068u; // 801D592C
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[1]); // 801D5930
  c->lr=0x801D5938u; f_8013939C(c); // 801D5934
  c->f[1]=c->f[31]; // 801D5938
  c->r[3]=c->r[1]+0x00000008u; // 801D593C
  c->lr=0x801D5944u; f_80139448(c); // 801D5940
  c->r[3]=c->r[1]+0x00000018u; // 801D5944
  c->r[4]=c->r[1]+0x00000078u; // 801D5948
  c->r[5]=c->r[1]+0x00000008u; // 801D594C
  c->lr=0x801D5954u; f_801394B8(c); // 801D5950
  c->r[3]=c->r[30]|c->r[30]; // 801D5954
  c->r[4]=c->r[1]+0x00000018u; // 801D5958
  c->lr=0x801D5960u; f_8013939C(c); // 801D595C
  c->r[3]=0u+0x00000001u; // 801D5960
  goto L_801D596C; // 801D5964
L_801D5968:;
  c->r[3]=0u+0x00000000u; // 801D5968
L_801D596C:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 801D596C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801D5970
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801D5974
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801D5978
  c->r[30]=R32(c->r[1]+0x00000098u); // 801D597C
  c->r[29]=R32(c->r[1]+0x00000094u); // 801D5980
  c->lr=c->r[0]; // 801D5984
  c->r[1]=c->r[1]+0x000000B0u; // 801D5988
  return; // 801D598C
}

// fn_801D5990
void f_801D5990(Ctx* __restrict c) {
  trace_call(0x801D5990u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5990
  c->r[0]=c->lr; // 801D5994
  cmps(c,0,(int32_t)c->r[3],0); // 801D5998
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D599C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D59A0
  c->r[31]=c->r[3]|c->r[3]; // 801D59A4
  if (crb(c,2)) { goto L_801D59B8; } // 801D59A8
  cmps(c,0,(int32_t)c->r[4],0); // 801D59AC
  if (!crb(c,1)) { goto L_801D59B8; } // 801D59B0
  c->lr=0x801D59B8u; f_802896EC(c); // 801D59B4
L_801D59B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D59B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D59BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D59C0
  c->lr=c->r[0]; // 801D59C4
  c->r[1]=c->r[1]+0x00000010u; // 801D59C8
  return; // 801D59CC
}

// fn_801D59D0
void f_801D59D0(Ctx* __restrict c) {
  trace_call(0x801D59D0u);
  c->r[3]=0u+0x00000006u; // 801D59D0
  return; // 801D59D4
}

// fn_801D59D8
void f_801D59D8(Ctx* __restrict c) {
  trace_call(0x801D59D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D59D8
  c->r[0]=c->lr; // 801D59DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D59E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D59E4
  c->r[31]=c->r[3]|c->r[3]; // 801D59E8
  c->lr=0x801D59F0u; f_801D5D20(c); // 801D59EC
  c->r[3]=c->r[31]|c->r[31]; // 801D59F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D59F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D59F8
  c->lr=c->r[0]; // 801D59FC
  c->r[1]=c->r[1]+0x00000010u; // 801D5A00
  return; // 801D5A04
}

// fn_801D5A08
void f_801D5A08(Ctx* __restrict c) {
  trace_call(0x801D5A08u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D5A08
  if (crb(c,0)) { goto L_801D5A18; } // 801D5A0C
  cmps(c,0,(int32_t)c->r[4],2); // 801D5A10
  if (crb(c,0)) { goto L_801D5A1C; } // 801D5A14
L_801D5A18:;
  c->r[4]=0u+0x00000000u; // 801D5A18
L_801D5A1C:;
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)44); // 801D5A1C
  c->r[0]=0u+0x00000020u; // 801D5A20
  c->r[4]=c->r[3]+c->r[7]; // 801D5A24
  c->ctr=c->r[0]; // 801D5A28
L_801D5A2C:;
  c->r[6]=R8(c->r[5]+0x00000000u); // 801D5A2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 801D5A30
  W8(c->r[4]+0x00000000u,c->r[6]); // 801D5A34
  if (crb(c,2)) { goto L_801D5A48; } // 801D5A38
  c->r[4]=c->r[4]+0x00000001u; // 801D5A3C
  c->r[5]=c->r[5]+0x00000001u; // 801D5A40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5A2C; } // 801D5A44
L_801D5A48:;
  c->r[3]=c->r[3]+c->r[7]; // 801D5A48
  c->r[0]=0u+0x00000000u; // 801D5A4C
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801D5A50
  return; // 801D5A54
}

// fn_801D5A58
void f_801D5A58(Ctx* __restrict c) {
  trace_call(0x801D5A58u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D5A58
  if (crb(c,0)) { goto L_801D5A68; } // 801D5A5C
  cmps(c,0,(int32_t)c->r[4],2); // 801D5A60
  if (crb(c,0)) { goto L_801D5A6C; } // 801D5A64
L_801D5A68:;
  c->r[4]=0u+0x00000000u; // 801D5A68
L_801D5A6C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)44); // 801D5A6C
  c->r[3]=c->r[3]+c->r[0]; // 801D5A70
  W32(c->r[3]+0x00000020u,c->r[5]); // 801D5A74
  W32(c->r[3]+0x00000024u,c->r[6]); // 801D5A78
  return; // 801D5A7C
}

// fn_801D5A80
void f_801D5A80(Ctx* __restrict c) {
  trace_call(0x801D5A80u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D5A80
  if (crb(c,0)) { goto L_801D5A90; } // 801D5A84
  cmps(c,0,(int32_t)c->r[4],2); // 801D5A88
  if (crb(c,0)) { goto L_801D5A94; } // 801D5A8C
L_801D5A90:;
  c->r[4]=0u+0x00000000u; // 801D5A90
L_801D5A94:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D5A94
  if (crb(c,0)) { goto L_801D5AA4; } // 801D5A98
  cmps(c,0,(int32_t)c->r[5],2); // 801D5A9C
  if (crb(c,0)) { goto L_801D5AA8; } // 801D5AA0
L_801D5AA4:;
  c->r[5]=0u+0x00000000u; // 801D5AA4
L_801D5AA8:;
  c->r[0]=0u+0x00000002u; // 801D5AA8
  c->r[6]=0u+0x00000000u; // 801D5AAC
  c->ctr=c->r[0]; // 801D5AB0
L_801D5AB4:;
  c->r[7]=c->r[3]+c->r[6]; // 801D5AB4
  c->r[0]=R32(c->r[7]+0x00000028u); // 801D5AB8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D5ABC
  if (!crb(c,2)) { goto L_801D5AD8; } // 801D5AC0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)44); // 801D5AC4
  c->r[6]=c->r[3]+c->r[0]; // 801D5AC8
  c->r[0]=R32(c->r[6]+0x00000028u); // 801D5ACC
  W32(c->r[7]+0x00000028u,c->r[0]); // 801D5AD0
  goto L_801D5AE0; // 801D5AD4
L_801D5AD8:;
  c->r[6]=c->r[6]+0x0000002Cu; // 801D5AD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5AB4; } // 801D5ADC
L_801D5AE0:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)44); // 801D5AE0
  c->r[3]=c->r[3]+c->r[0]; // 801D5AE4
  W32(c->r[3]+0x00000028u,c->r[4]); // 801D5AE8
  return; // 801D5AEC
}

// fn_801D5AF0
void f_801D5AF0(Ctx* __restrict c) {
  trace_call(0x801D5AF0u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D5AF0
  if (crb(c,0)) { goto L_801D5B00; } // 801D5AF4
  cmps(c,0,(int32_t)c->r[4],2); // 801D5AF8
  if (crb(c,0)) { goto L_801D5B04; } // 801D5AFC
L_801D5B00:;
  c->r[4]=0u+0x00000000u; // 801D5B00
L_801D5B04:;
  c->r[0]=0u+0x00000002u; // 801D5B04
  c->r[7]=0u+0x00000000u; // 801D5B08
  c->r[5]=0u+0x00000000u; // 801D5B0C
  c->ctr=c->r[0]; // 801D5B10
L_801D5B14:;
  c->r[6]=c->r[3]+c->r[5]; // 801D5B14
  c->r[0]=R32(c->r[6]+0x00000028u); // 801D5B18
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D5B1C
  if (crb(c,2)) { goto L_801D5B30; } // 801D5B20
  c->r[7]=c->r[7]+0x00000001u; // 801D5B24
  c->r[5]=c->r[5]+0x0000002Cu; // 801D5B28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5B14; } // 801D5B2C
L_801D5B30:;
  cmps(c,0,(int32_t)c->r[7],2); // 801D5B30
  if (!crb(c,0)) { goto L_801D5B44; } // 801D5B34
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)44); // 801D5B38
  c->r[3]=c->r[3]+c->r[0]; // 801D5B3C
  return; // 801D5B40
L_801D5B44:;
  c->r[3]=0u+0x00000000u; // 801D5B44
  return; // 801D5B48
}

// fn_801D5B4C
void f_801D5B4C(Ctx* __restrict c) {
  trace_call(0x801D5B4Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 801D5B4C
  if (crb(c,0)) { goto L_801D5B5C; } // 801D5B50
  cmps(c,0,(int32_t)c->r[4],2); // 801D5B54
  if (crb(c,0)) { goto L_801D5B60; } // 801D5B58
L_801D5B5C:;
  c->r[4]=0u+0x00000000u; // 801D5B5C
L_801D5B60:;
  c->r[0]=0u+0x00000002u; // 801D5B60
  c->r[7]=0u+0x00000000u; // 801D5B64
  c->r[5]=0u+0x00000000u; // 801D5B68
  c->ctr=c->r[0]; // 801D5B6C
L_801D5B70:;
  c->r[6]=c->r[3]+c->r[5]; // 801D5B70
  c->r[0]=R32(c->r[6]+0x00000028u); // 801D5B74
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D5B78
  if (crb(c,2)) { goto L_801D5B8C; } // 801D5B7C
  c->r[7]=c->r[7]+0x00000001u; // 801D5B80
  c->r[5]=c->r[5]+0x0000002Cu; // 801D5B84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5B70; } // 801D5B88
L_801D5B8C:;
  cmps(c,0,(int32_t)c->r[7],2); // 801D5B8C
  if (!crb(c,0)) { goto L_801D5BA4; } // 801D5B90
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)44); // 801D5B94
  c->r[3]=c->r[3]+c->r[0]; // 801D5B98
  c->r[3]=R32(c->r[3]+0x00000024u); // 801D5B9C
  return; // 801D5BA0
L_801D5BA4:;
  c->r[3]=0u+0x00000000u; // 801D5BA4
  return; // 801D5BA8
}

// fn_801D5BAC
void f_801D5BAC(Ctx* __restrict c) {
  trace_call(0x801D5BACu);
  cmps(c,0,(int32_t)c->r[4],0); // 801D5BAC
  if (crb(c,0)) { goto L_801D5BBC; } // 801D5BB0
  cmps(c,0,(int32_t)c->r[4],2); // 801D5BB4
  if (crb(c,0)) { goto L_801D5BC0; } // 801D5BB8
L_801D5BBC:;
  c->r[4]=0u+0x00000000u; // 801D5BBC
L_801D5BC0:;
  c->r[0]=0u+0x00000002u; // 801D5BC0
  c->r[7]=0u+0x00000000u; // 801D5BC4
  c->r[5]=0u+0x00000000u; // 801D5BC8
  c->ctr=c->r[0]; // 801D5BCC
L_801D5BD0:;
  c->r[6]=c->r[3]+c->r[5]; // 801D5BD0
  c->r[0]=R32(c->r[6]+0x00000028u); // 801D5BD4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D5BD8
  if (crb(c,2)) { goto L_801D5BEC; } // 801D5BDC
  c->r[7]=c->r[7]+0x00000001u; // 801D5BE0
  c->r[5]=c->r[5]+0x0000002Cu; // 801D5BE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5BD0; } // 801D5BE8
L_801D5BEC:;
  cmps(c,0,(int32_t)c->r[7],2); // 801D5BEC
  if (!crb(c,0)) { goto L_801D5BFC; } // 801D5BF0
  c->r[3]=c->r[7]|c->r[7]; // 801D5BF4
  return; // 801D5BF8
L_801D5BFC:;
  c->r[3]=0u+0x00000000u; // 801D5BFC
  return; // 801D5C00
}

// fn_801D5C04
void f_801D5C04(Ctx* __restrict c) {
  trace_call(0x801D5C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5C04
  c->r[0]=c->lr; // 801D5C08
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D5C0C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801D5C10
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801D5C14
  c->f[31]=c->f[1]; // 801D5C18
  cmps(c,0,(int32_t)c->r[4],0); // 801D5C1C
  c->r[8]=c->r[5]|c->r[5]; // 801D5C20
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D5C24
  c->r[31]=c->r[7]|c->r[7]; // 801D5C28
  W32(c->r[1]+0x00000038u,c->r[30]); // 801D5C2C
  c->r[30]=c->r[6]|c->r[6]; // 801D5C30
  if (crb(c,0)) { goto L_801D5C40; } // 801D5C34
  cmps(c,0,(int32_t)c->r[4],2); // 801D5C38
  if (crb(c,0)) { goto L_801D5C44; } // 801D5C3C
L_801D5C40:;
  c->r[4]=0u+0x00000000u; // 801D5C40
L_801D5C44:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D5C44
  if (crb(c,0)) { goto L_801D5D00; } // 801D5C48
  c->r[0]=0u+0x00000002u; // 801D5C4C
  c->r[5]=0u+0x00000000u; // 801D5C50
  c->ctr=c->r[0]; // 801D5C54
L_801D5C58:;
  c->r[6]=c->r[3]+c->r[5]; // 801D5C58
  c->r[0]=R32(c->r[6]+0x00000028u); // 801D5C5C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D5C60
  if (!crb(c,2)) { goto L_801D5CF8; } // 801D5C64
  c->r[4]=0u+0x803E0000u; // 801D5C68
  c->r[5]=R32(c->r[6]+0x00000020u); // 801D5C6C
  c->r[6]=c->r[8]|c->r[8]; // 801D5C70
  c->r[3]=c->r[1]+0x00000014u; // 801D5C74
  c->r[4]=c->r[4]+0x00000F80u; // 801D5C78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5C7C
  c->lr=0x801D5C84u; f_80291CC4(c); // 801D5C80
  c->r[4]=addc(c,c->r[1],0x00000014u,0); cr0(c,c->r[4]); // 801D5C84
  if (crb(c,2)) { goto L_801D5D00; } // 801D5C88
  cmps(c,0,(int32_t)c->r[31],0); // 801D5C8C
  if (!crb(c,0)) { goto L_801D5CE0; } // 801D5C90
  cmps(c,0,(int32_t)c->r[30],0); // 801D5C94
  if (crb(c,2)) { goto L_801D5CCC; } // 801D5C98
  c->r[6]=R32(c->r[30]+0x00000000u); // 801D5C9C
  c->r[3]=c->r[4]|c->r[4]; // 801D5CA0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D5CA4
  c->r[4]=c->r[1]+0x00000008u; // 801D5CA8
  {uint32_t ea=c->r[2]+0xFFFFBD10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5CAC
  c->r[5]=0u+0xFFFFFFFFu; // 801D5CB0
  W32(c->r[1]+0x00000008u,c->r[6]); // 801D5CB4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D5CB8
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D5CBC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D5CC0
  c->lr=0x801D5CC8u; f_80048BAC(c); // 801D5CC4
  goto L_801D5D00; // 801D5CC8
L_801D5CCC:;
  c->f[1]=c->f[31]; // 801D5CCC
  c->r[3]=c->r[4]|c->r[4]; // 801D5CD0
  c->r[4]=0u+0xFFFFFFFFu; // 801D5CD4
  c->lr=0x801D5CDCu; f_80048B94(c); // 801D5CD8
  goto L_801D5D00; // 801D5CDC
L_801D5CE0:;
  c->r[3]=0u+0x80460000u; // 801D5CE0
  c->r[5]=c->r[31]|c->r[31]; // 801D5CE4
  c->r[6]=0u+0xFFFFFFFFu; // 801D5CE8
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 801D5CEC
  c->lr=0x801D5CF4u; f_8004AE4C(c); // 801D5CF0
  goto L_801D5D00; // 801D5CF4
L_801D5CF8:;
  c->r[5]=c->r[5]+0x0000002Cu; // 801D5CF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5C58; } // 801D5CFC
L_801D5D00:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801D5D00
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D5D04
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801D5D08
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D5D0C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801D5D10
  c->lr=c->r[0]; // 801D5D14
  c->r[1]=c->r[1]+0x00000050u; // 801D5D18
  return; // 801D5D1C
}

// fn_801D5D20
void f_801D5D20(Ctx* __restrict c) {
  trace_call(0x801D5D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5D20
  c->r[0]=c->lr; // 801D5D24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5D28
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D5D2C
  c->r[27]=c->r[3]|c->r[3]; // 801D5D30
  c->r[28]=0u+0x00000000u; // 801D5D34
  c->r[31]=0u+0x00000000u; // 801D5D38
  c->r[30]=0u+0xFFFFFFFFu; // 801D5D3C
L_801D5D40:;
  c->r[29]=c->r[27]+c->r[31]; // 801D5D40
  c->r[4]=0u+0x00000000u; // 801D5D44
  c->r[3]=c->r[29]|c->r[29]; // 801D5D48
  c->r[5]=0u+0x00000020u; // 801D5D4C
  c->lr=0x801D5D54u; f_800043EC(c); // 801D5D50
  W32(c->r[29]+0x00000020u,c->r[30]); // 801D5D54
  c->r[31]=c->r[31]+0x0000002Cu; // 801D5D58
  W32(c->r[29]+0x00000024u,c->r[30]); // 801D5D5C
  W32(c->r[29]+0x00000028u,c->r[28]); // 801D5D60
  c->r[28]=c->r[28]+0x00000001u; // 801D5D64
  cmps(c,0,(int32_t)c->r[28],2); // 801D5D68
  if (crb(c,0)) { IRQCHK(c); goto L_801D5D40; } // 801D5D6C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D5D70
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5D74
  c->lr=c->r[0]; // 801D5D78
  c->r[1]=c->r[1]+0x00000020u; // 801D5D7C
  return; // 801D5D80
}

// fn_801D5D84
void f_801D5D84(Ctx* __restrict c) {
  trace_call(0x801D5D84u);
  {uint32_t ea=c->r[2]+0xFFFFBD14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5D84
  c->r[3]=0u+0x80580000u; // 801D5D88
  {uint32_t ea=c->r[2]+0xFFFFBD10u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5D8C
  c->r[3]=c->r[3]+0xFFFFA920u; // 801D5D90
  c->f[3]=c->f[1]; // 801D5D94
  f_8003F588(c); return; // 801D5D98
}

// fn_801D5D9C
void f_801D5D9C(Ctx* __restrict c) {
  trace_call(0x801D5D9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5D9C
  c->r[0]=c->lr; // 801D5DA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5DA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5DA8
  c->r[31]=c->r[3]|c->r[3]; // 801D5DAC
  c->lr=0x801D5DB4u; f_800A5E28(c); // 801D5DB0
  c->r[3]=c->r[31]|c->r[31]; // 801D5DB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5DB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5DBC
  c->lr=c->r[0]; // 801D5DC0
  c->r[1]=c->r[1]+0x00000010u; // 801D5DC4
  return; // 801D5DC8
}

// fn_801D5DCC
void f_801D5DCC(Ctx* __restrict c) {
  trace_call(0x801D5DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5DCC
  c->r[0]=c->lr; // 801D5DD0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D5DD4
  c->r[11]=c->r[1]+0x00000040u; // 801D5DD8
  c->lr=0x801D5DE0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5DDC
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D5DE0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801D5DE4
  c->r[0]=0u+0x00000000u; // 801D5DE8
  c->r[27]=c->r[3]|c->r[3]; // 801D5DEC
  c->r[28]=c->r[5]|c->r[5]; // 801D5DF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D5DF4
  if (crb(c,2)) { goto L_801D5E18; } // 801D5DF8
  c->r[3]=0u+0x803F0000u; // 801D5DFC
  c->r[5]=0u+0x803F0000u; // 801D5E00
  c->r[3]=c->r[3]+0x00001D4Fu; // 801D5E04
  c->r[4]=0u+0x0000003Cu; // 801D5E08
  c->r[5]=c->r[5]+0x00001D28u; // 801D5E0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5E10
  c->lr=0x801D5E18u; f_803444BC(c); // 801D5E14
L_801D5E18:;
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 801D5E18
  c->r[3]=c->r[1]+0x0000000Cu; // 801D5E1C
  c->lr=0x801D5E24u; f_80364F00(c); // 801D5E20
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D5E24
  c->r[3]=c->r[1]+0x0000000Cu; // 801D5E28
  c->r[4]=c->r[1]+0x00000008u; // 801D5E2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D5E30
  c->lr=0x801D5E38u; f_80364CCC(c); // 801D5E34
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801D5E38
  c->r[3]=c->r[27]|c->r[27]; // 801D5E3C
  c->r[5]=c->r[1]+0x0000000Cu; // 801D5E40
  c->r[6]=0u+0x00000000u; // 801D5E44
  c->r[7]=0u+0x00000000u; // 801D5E48
  c->r[8]=0u+0x00000000u; // 801D5E4C
  c->lr=0x801D5E54u; f_800A5EE0(c); // 801D5E50
  c->r[28]=0u+0x00000000u; // 801D5E54
  c->r[29]=0u+0x00000000u; // 801D5E58
  c->r[31]=0u+0x00010000u; // 801D5E5C
  goto L_801D5EB8; // 801D5E60
L_801D5E64:;
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 801D5E64
  c->r[4]=0u+0x00000002u; // 801D5E68
  c->r[3]=c->r[0]+c->r[29]; // 801D5E6C
  c->r[30]=R32(c->r[3]+0x00000004u); // 801D5E70
  c->r[3]=c->r[30]|c->r[30]; // 801D5E74
  c->lr=0x801D5E7Cu; f_803805B4(c); // 801D5E78
  c->r[3]=c->r[30]|c->r[30]; // 801D5E7C
  c->r[4]=0u+0x00000002u; // 801D5E80
  c->lr=0x801D5E88u; f_803805D8(c); // 801D5E84
  c->r[4]=c->r[30]|c->r[30]; // 801D5E88
  c->r[6]=c->r[31]+0xFFFFFFFFu; // 801D5E8C
  c->r[3]=c->r[13]+0xFFFF9600u; // 801D5E90
  c->r[5]=0u+0xFFFFFFFFu; // 801D5E94
  c->lr=0x801D5E9Cu; f_800A74A0(c); // 801D5E98
  c->r[4]=c->r[30]|c->r[30]; // 801D5E9C
  c->r[3]=c->r[13]+0xFFFF9600u; // 801D5EA0
  c->r[5]=0u+0xFFFFFFFFu; // 801D5EA4
  c->r[6]=0u+0x00000000u; // 801D5EA8
  c->lr=0x801D5EB0u; f_800A7378(c); // 801D5EAC
  c->r[29]=c->r[29]+0x00000050u; // 801D5EB0
  c->r[28]=c->r[28]+0x00000001u; // 801D5EB4
L_801D5EB8:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 801D5EB8
  cmpu(c,0,c->r[28],c->r[0]); // 801D5EBC
  if (crb(c,0)) { IRQCHK(c); goto L_801D5E64; } // 801D5EC0
  {uint32_t ea=c->r[2]+0xFFFFBD18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5EC4
  c->r[0]=0u+0x00000001u; // 801D5EC8
  W32(c->r[27]+0x00000060u,c->r[0]); // 801D5ECC
  c->r[11]=c->r[1]+0x00000040u; // 801D5ED0
  {uint32_t ea=c->r[27]+0x00000064u; WF32(ea,c->f[0]);} // 801D5ED4
  {uint32_t ea=c->r[27]+0x00000068u; WF32(ea,c->f[0]);} // 801D5ED8
  {uint32_t ea=c->r[27]+0x0000006Cu; WF32(ea,c->f[0]);} // 801D5EDC
  {uint32_t ea=c->r[27]+0x00000070u; WF32(ea,c->f[0]);} // 801D5EE0
  {uint32_t ea=c->r[27]+0x00000074u; WF32(ea,c->f[0]);} // 801D5EE4
  {uint32_t ea=c->r[27]+0x00000078u; WF32(ea,c->f[0]);} // 801D5EE8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D5EEC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801D5EF0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801D5EF4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D5EF8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801D5EFC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D5F00
  c->lr=0x801D5F08u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5F04
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D5F08
  c->lr=c->r[0]; // 801D5F0C
  c->r[1]=c->r[1]+0x00000040u; // 801D5F10
  return; // 801D5F14
}

// fn_801D5F18
void f_801D5F18(Ctx* __restrict c) {
  trace_call(0x801D5F18u);
  f_800A6CD0(c); return; // 801D5F18
}

// fn_801D5F1C
void f_801D5F1C(Ctx* __restrict c) {
  trace_call(0x801D5F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5F1C
  c->r[0]=c->lr; // 801D5F20
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D5F24
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801D5F28
  c->r[31]=c->r[3]|c->r[3]; // 801D5F2C
  c->r[0]=R32(c->r[3]+0x00000060u); // 801D5F30
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D5F34
  if (crb(c,2)) { goto L_801D5F5C; } // 801D5F38
  c->lr=0x801D5F40u; f_80061A4C(c); // 801D5F3C
  {uint32_t ea=c->r[3]+0x00000384u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5F40
  {uint32_t ea=c->r[3]+0x00000388u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5F44
  {uint32_t ea=c->r[3]+0x0000038Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5F48
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801D5F4C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D5F50
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D5F54
  goto L_801D5F74; // 801D5F58
L_801D5F5C:;
  {uint32_t ea=c->r[3]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5F5C
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5F60
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5F64
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801D5F68
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801D5F6C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801D5F70
L_801D5F74:;
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5F74
  c->r[3]=c->r[1]+0x00000018u; // 801D5F78
  {uint32_t ea=c->r[2]+0xFFFFBD1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5F7C
  {uint32_t ea=c->r[31]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5F80
  {uint32_t ea=c->r[31]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D5F84
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 801D5F88
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801D5F8C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801D5F90
  c->lr=0x801D5F98u; f_803949B8(c); // 801D5F94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D5F98
  c->r[3]=c->r[31]|c->r[31]; // 801D5F9C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5FA0
  c->r[4]=c->r[1]+0x00000018u; // 801D5FA4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5FA8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 801D5FAC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801D5FB0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801D5FB4
  c->lr=0x801D5FBCu; f_800A72F4(c); // 801D5FB8
  c->r[3]=c->r[31]|c->r[31]; // 801D5FBC
  c->lr=0x801D5FC4u; f_800A6E4C(c); // 801D5FC0
  c->r[3]=R32(c->r[31]+0x00000020u); // 801D5FC4
  c->lr=0x801D5FCCu; f_80381F70(c); // 801D5FC8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D5FCC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801D5FD0
  c->lr=c->r[0]; // 801D5FD4
  c->r[1]=c->r[1]+0x00000050u; // 801D5FD8
  return; // 801D5FDC
}

// fn_801D5FE0
void f_801D5FE0(Ctx* __restrict c) {
  trace_call(0x801D5FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5FE0
  c->r[0]=c->lr; // 801D5FE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D5FE8
  c->r[11]=c->r[1]+0x00000030u; // 801D5FEC
  c->lr=0x801D5FF4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5FF0
  c->r[31]=c->r[3]|c->r[3]; // 801D5FF4
  c->lr=0x801D5FFCu; f_800CEA18(c); // 801D5FF8
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D5FFC
  c->r[3]=0u+0x803F0000u; // 801D6000
  c->r[3]=c->r[3]+0x000059F8u; // 801D6004
  c->r[28]=0u+0x00000000u; // 801D6008
  c->r[0]=c->r[3]+0x00000040u; // 801D600C
  c->f[2]=c->f[1]; // 801D6010
  W32(c->r[31]+0x00000010u,c->r[3]); // 801D6014
  c->f[3]=c->f[1]; // 801D6018
  c->r[3]=c->r[31]+0x000008ACu; // 801D601C
  W32(c->r[31]+0x00000048u,c->r[0]); // 801D6020
  W32(c->r[31]+0x000008A4u,c->r[28]); // 801D6024
  W32(c->r[31]+0x000008A8u,c->r[28]); // 801D6028
  c->lr=0x801D6030u; f_800521A0(c); // 801D602C
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6030
  c->r[3]=c->r[31]+0x000008B8u; // 801D6034
  c->f[2]=c->f[1]; // 801D6038
  c->f[3]=c->f[1]; // 801D603C
  c->lr=0x801D6044u; f_800521A0(c); // 801D6040
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6044
  c->r[27]=c->r[31]+0x000008D0u; // 801D6048
  W32(c->r[31]+0x000008C4u,c->r[28]); // 801D604C
  c->r[24]=c->r[27]|c->r[27]; // 801D6050
  c->r[25]=c->r[27]|c->r[27]; // 801D6054
  c->r[3]=c->r[27]|c->r[27]; // 801D6058
  {uint32_t ea=c->r[31]+0x000008C8u; WF32(ea,c->f[0]);} // 801D605C
  W32(c->r[31]+0x000008CCu,c->r[28]); // 801D6060
  c->lr=0x801D6068u; f_8002A0C4(c); // 801D6064
  c->r[4]=0u+0x803F0000u; // 801D6068
  c->r[3]=c->r[27]+0x0000001Cu; // 801D606C
  c->r[4]=c->r[4]+0x00001290u; // 801D6070
  W32(c->r[27]+0x00000000u,c->r[4]); // 801D6074
  c->lr=0x801D607Cu; f_80166A74(c); // 801D6078
  c->r[3]=0u+0x803F0000u; // 801D607C
  c->r[4]=0u+0x803F0000u; // 801D6080
  c->r[25]=c->r[27]+0x000000D8u; // 801D6084
  c->r[29]=0u+0xFFFFFFFFu; // 801D6088
  c->r[3]=c->r[3]+0x00001150u; // 801D608C
  c->r[4]=c->r[4]+0x000011B8u; // 801D6090
  c->r[30]=0u+0x00000001u; // 801D6094
  c->r[26]=c->r[25]+0x00000020u; // 801D6098
  W32(c->r[27]+0x00000000u,c->r[3]); // 801D609C
  c->r[3]=c->r[26]|c->r[26]; // 801D60A0
  W32(c->r[27]+0x000000D8u,c->r[4]); // 801D60A4
  W32(c->r[27]+0x000000DCu,c->r[29]); // 801D60A8
  W32(c->r[27]+0x000000E0u,c->r[28]); // 801D60AC
  W32(c->r[27]+0x000000E4u,c->r[28]); // 801D60B0
  W32(c->r[27]+0x000000E8u,c->r[28]); // 801D60B4
  W32(c->r[27]+0x000000ECu,c->r[30]); // 801D60B8
  W32(c->r[27]+0x000000F0u,c->r[28]); // 801D60BC
  W32(c->r[27]+0x000000F4u,c->r[28]); // 801D60C0
  c->lr=0x801D60C8u; f_8002D9F4(c); // 801D60C4
  c->r[3]=0u+0x803F0000u; // 801D60C8
  c->r[4]=0u+0x803F0000u; // 801D60CC
  c->r[3]=c->r[3]+0x000011D0u; // 801D60D0
  W32(c->r[27]+0x00000114u,c->r[28]); // 801D60D4
  c->r[4]=c->r[4]+0x00003028u; // 801D60D8
  W32(c->r[26]+0x00000000u,c->r[3]); // 801D60DC
  c->r[3]=c->r[27]+0x00000124u; // 801D60E0
  W32(c->r[27]+0x00000118u,c->r[28]); // 801D60E4
  W32(c->r[27]+0x0000011Cu,c->r[28]); // 801D60E8
  W32(c->r[27]+0x00000120u,c->r[28]); // 801D60EC
  W32(c->r[27]+0x00000000u,c->r[4]); // 801D60F0
  c->lr=0x801D60F8u; f_80141D50(c); // 801D60F4
  c->r[6]=0u+0x80400000u; // 801D60F8
  c->r[8]=0u+0x80400000u; // 801D60FC
  c->r[6]=c->r[6]+0x000054F8u; // 801D6100
  c->r[4]=0u+0x80070000u; // 801D6104
  c->r[8]=c->r[8]+0x00005560u; // 801D6108
  c->r[5]=0u+0x80070000u; // 801D610C
  W32(c->r[27]+0x00000000u,c->r[6]); // 801D6110
  c->r[3]=c->r[27]+0x000001D8u; // 801D6114
  c->r[4]=c->r[4]+0x000058C4u; // 801D6118
  c->r[5]=c->r[5]+0x000059F8u; // 801D611C
  W8(c->r[27]+0x000001BCu,c->r[28]); // 801D6120
  c->r[6]=0u+0x00000058u; // 801D6124
  c->r[7]=0u+0x00000003u; // 801D6128
  W32(c->r[27]+0x000001C0u,c->r[28]); // 801D612C
  W32(c->r[27]+0x000001C8u,c->r[28]); // 801D6130
  W32(c->r[27]+0x000001CCu,c->r[28]); // 801D6134
  W32(c->r[27]+0x000001D0u,c->r[28]); // 801D6138
  W32(c->r[27]+0x000001C4u,c->r[8]); // 801D613C
  c->lr=0x801D6144u; f_80289B34(c); // 801D6140
  c->r[3]=c->r[27]+0x000002E0u; // 801D6144
  c->r[4]=0u+0x00000000u; // 801D6148
  c->r[5]=0u+0x00000002u; // 801D614C
  c->lr=0x801D6154u; f_80075338(c); // 801D6150
  c->r[3]=c->r[27]+0x00000318u; // 801D6154
  c->r[4]=0u+0x00000003u; // 801D6158
  c->r[5]=0u+0x00000004u; // 801D615C
  c->lr=0x801D6164u; f_80075338(c); // 801D6160
  c->r[3]=c->r[27]+0x00000350u; // 801D6164
  c->r[4]=0u+0x00000005u; // 801D6168
  c->r[5]=0u+0x00000006u; // 801D616C
  c->lr=0x801D6174u; f_80075338(c); // 801D6170
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6174
  c->r[24]=c->r[31]+0x00000EDCu; // 801D6178
  W32(c->r[27]+0x00000388u,c->r[28]); // 801D617C
  c->r[3]=c->r[24]|c->r[24]; // 801D6180
  W32(c->r[27]+0x000003B0u,c->r[29]); // 801D6184
  W32(c->r[31]+0x00000C88u,c->r[28]); // 801D6188
  W32(c->r[31]+0x00000C8Cu,c->r[28]); // 801D618C
  W32(c->r[31]+0x00000C90u,c->r[29]); // 801D6190
  W32(c->r[31]+0x00000C94u,c->r[28]); // 801D6194
  W32(c->r[31]+0x00000C98u,c->r[28]); // 801D6198
  W32(c->r[31]+0x00000C9Cu,c->r[28]); // 801D619C
  W8(c->r[31]+0x00000CA0u,c->r[30]); // 801D61A0
  {uint32_t ea=c->r[31]+0x00000CA4u; WF32(ea,c->f[0]);} // 801D61A4
  W32(c->r[31]+0x00000ED8u,c->r[28]); // 801D61A8
  c->lr=0x801D61B0u; f_80063A84(c); // 801D61AC
  c->r[4]=0u+0x803F0000u; // 801D61B0
  c->r[3]=c->r[24]+0x00000078u; // 801D61B4
  c->r[4]=c->r[4]+0x000021F8u; // 801D61B8
  W32(c->r[24]+0x00000000u,c->r[4]); // 801D61BC
  c->lr=0x801D61C4u; f_800A4E78(c); // 801D61C0
  W8(c->r[24]+0x000000BCu,c->r[28]); // 801D61C4
  c->r[3]=c->r[24]+0x000000C0u; // 801D61C8
  c->lr=0x801D61D0u; f_80063CC0(c); // 801D61CC
  {uint32_t ea=c->r[2]+0xFFFFBD28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D61D0
  c->r[0]=0u+0x00000007u; // 801D61D4
  W8(c->r[24]+0x00000118u,c->r[30]); // 801D61D8
  {uint32_t ea=c->r[24]+0x0000010Cu; WF32(ea,c->f[0]);} // 801D61DC
  c->ctr=c->r[0]; // 801D61E0
L_801D61E4:;
  c->r[3]=c->r[24]+c->r[28]; // 801D61E4
  c->r[28]=c->r[28]+0x00000008u; // 801D61E8
  W32(c->r[3]+0x00000034u,c->r[29]); // 801D61EC
  W32(c->r[3]+0x00000038u,c->r[29]); // 801D61F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D61E4; } // 801D61F4
  c->r[3]=c->r[31]+0x00000FF8u; // 801D61F8
  c->lr=0x801D6200u; f_80063CC0(c); // 801D61FC
  c->r[30]=0u+0xFFFFFFFFu; // 801D6200
  c->r[3]=c->r[31]+0x00001054u; // 801D6204
  W32(c->r[31]+0x00001050u,c->r[30]); // 801D6208
  c->lr=0x801D6210u; f_801811B4(c); // 801D620C
  {uint32_t ea=c->r[2]+0xFFFFBD2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6210
  c->r[3]=0u+0x00000000u; // 801D6214
  W8(c->r[31]+0x00001E80u,c->r[3]); // 801D6218
  c->r[4]=c->r[31]+0x00001E84u; // 801D621C
  c->r[0]=c->r[31]+0x00001F14u; // 801D6220
  {uint32_t ea=c->r[31]+0x00001E7Cu; WF32(ea,c->f[0]);} // 801D6224
L_801D6228:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D6228
  W32(c->r[4]+0x00000004u,c->r[30]); // 801D622C
  c->r[4]=c->r[4]+0x0000000Cu; // 801D6230
  cmpu(c,0,c->r[4],c->r[0]); // 801D6234
  if (crb(c,0)) { IRQCHK(c); goto L_801D6228; } // 801D6238
  c->r[4]=0u+0x80400000u; // 801D623C
  c->r[0]=0u+0x00000000u; // 801D6240
  c->r[4]=c->r[4]+0x00004EF0u; // 801D6244
  W8(c->r[31]+0x00001F14u,c->r[0]); // 801D6248
  c->r[0]=c->r[4]+0x00000040u; // 801D624C
  c->r[3]=c->r[31]+0x00001F24u; // 801D6250
  W32(c->r[31]+0x00000010u,c->r[4]); // 801D6254
  W32(c->r[31]+0x00000048u,c->r[0]); // 801D6258
  c->lr=0x801D6260u; f_801ABEE0(c); // 801D625C
  c->r[0]=0u+0x00000001u; // 801D6260
  W8(c->r[31]+0x00001F2Cu,c->r[0]); // 801D6264
  c->lr=0x801D626Cu; f_80232150(c); // 801D6268
  c->r[4]=0u+0x803E0000u; // 801D626C
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6270
  c->r[4]=c->r[4]+0x00000F90u; // 801D6274
  c->lr=0x801D627Cu; f_80232230(c); // 801D6278
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D627C
  c->r[11]=c->r[1]+0x00000030u; // 801D6280
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6284
  c->r[3]=c->r[31]|c->r[31]; // 801D6288
  {uint32_t ea=c->r[31]+0x00001F18u; WF32(ea,c->f[1]);} // 801D628C
  {uint32_t ea=c->r[31]+0x00001F20u; WF32(ea,c->f[2]);} // 801D6290
  {uint32_t ea=c->r[31]+0x00001F1Cu; WF32(ea,c->f[0]);} // 801D6294
  c->lr=0x801D629Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6298
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D629C
  c->lr=c->r[0]; // 801D62A0
  c->r[1]=c->r[1]+0x00000030u; // 801D62A4
  return; // 801D62A8
}

// fn_801D62AC
void f_801D62AC(Ctx* __restrict c) {
  trace_call(0x801D62ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D62AC
  c->r[0]=c->lr; // 801D62B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D62B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D62B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D62BC
  c->r[30]=c->r[3]|c->r[3]; // 801D62C0
  c->r[31]=c->r[4]|c->r[4]; // 801D62C4
  if (crb(c,2)) { goto L_801D62E8; } // 801D62C8
  if (crb(c,2)) { goto L_801D62D8; } // 801D62CC
  c->r[4]=0u+0x00000000u; // 801D62D0
  c->lr=0x801D62D8u; f_80075DAC(c); // 801D62D4
L_801D62D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D62D8
  if (!crb(c,1)) { goto L_801D62E8; } // 801D62DC
  c->r[3]=c->r[30]|c->r[30]; // 801D62E0
  c->lr=0x801D62E8u; f_802896EC(c); // 801D62E4
L_801D62E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D62E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D62EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D62F0
  c->lr=c->r[0]; // 801D62F4
  c->r[1]=c->r[1]+0x00000010u; // 801D62F8
  return; // 801D62FC
}

// fn_801D6300
void f_801D6300(Ctx* __restrict c) {
  trace_call(0x801D6300u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6300
  c->r[0]=c->lr; // 801D6304
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6308
  c->r[4]=0u+0x00000001u; // 801D630C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6310
  c->r[0]=0u+0x00000000u; // 801D6314
  {uint32_t ea=c->r[2]+0xFFFFBD30u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6318
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D631C
  c->r[31]=c->r[3]|c->r[3]; // 801D6320
  W8(c->r[3]+0x000020E0u,c->r[0]); // 801D6324
  {uint32_t ea=c->r[3]+0x000020DCu; WF32(ea,c->f[0]);} // 801D6328
  c->r[3]=c->r[3]+0x00001F24u; // 801D632C
  c->lr=0x801D6334u; f_801AC204(c); // 801D6330
  {uint32_t ea=c->r[31]+0x00001F1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6334
  c->r[3]=c->r[1]+0x00000014u; // 801D6338
  c->f[2]=c->f[1]; // 801D633C
  c->f[3]=c->f[1]; // 801D6340
  c->lr=0x801D6348u; f_800521A0(c); // 801D6344
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D6348
  c->r[4]=c->r[3]|c->r[3]; // 801D634C
  c->r[3]=c->r[31]+0x000008D0u; // 801D6350
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801D6354
  c->ctr=c->r[12]; // 801D6358
  if (true) { c->lr=0x801D6360u; dispatch(c,c->ctr); } // 801D635C
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6360
  c->r[3]=c->r[1]+0x00000008u; // 801D6364
  {uint32_t ea=c->r[2]+0xFFFFBD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6368
  c->f[3]=c->f[1]; // 801D636C
  c->lr=0x801D6374u; f_800521A0(c); // 801D6370
  {uint32_t ea=c->r[2]+0xFFFFBD34u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6374
  c->r[5]=c->r[3]|c->r[3]; // 801D6378
  c->r[3]=c->r[31]+0x00001F24u; // 801D637C
  c->r[4]=0u+0x00000001u; // 801D6380
  c->lr=0x801D6388u; f_801AC23C(c); // 801D6384
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D6388
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D638C
  c->lr=c->r[0]; // 801D6390
  c->r[1]=c->r[1]+0x00000030u; // 801D6394
  return; // 801D6398
}

// fn_801D639C
void f_801D639C(Ctx* __restrict c) {
  trace_call(0x801D639Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D639C
  c->r[0]=c->lr; // 801D63A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D63A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D63A8
  c->r[31]=c->r[3]|c->r[3]; // 801D63AC
  c->lr=0x801D63B4u; f_800B5DFC(c); // 801D63B0
  c->r[3]=c->r[31]|c->r[31]; // 801D63B4
  c->r[4]=0u+0x00000007u; // 801D63B8
  c->lr=0x801D63C0u; f_800760EC(c); // 801D63BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D63C0
  if (!crb(c,2)) { goto L_801D63E8; } // 801D63C4
  c->r[3]=c->r[31]+0x00001F24u; // 801D63C8
  c->lr=0x801D63D0u; f_801AC25C(c); // 801D63CC
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D63D0
  c->r[3]=c->r[31]+0x000008D0u; // 801D63D4
  c->r[4]=c->r[31]+0x00001F34u; // 801D63D8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D63DC
  c->ctr=c->r[12]; // 801D63E0
  if (true) { c->lr=0x801D63E8u; dispatch(c,c->ctr); } // 801D63E4
L_801D63E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D63E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D63EC
  c->lr=c->r[0]; // 801D63F0
  c->r[1]=c->r[1]+0x00000010u; // 801D63F4
  return; // 801D63F8
}

// fn_801D63FC
void f_801D63FC(Ctx* __restrict c) {
  trace_call(0x801D63FCu);
  f_800ADCD8(c); return; // 801D63FC
}

// fn_801D6400
void f_801D6400(Ctx* __restrict c) {
  trace_call(0x801D6400u);
  return; // 801D6400
}

// fn_801D6404
void f_801D6404(Ctx* __restrict c) {
  trace_call(0x801D6404u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6404
  c->r[0]=c->lr; // 801D6408
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D640C
  c->r[11]=c->r[1]+0x00000050u; // 801D6410
  c->lr=0x801D6418u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6414
  c->r[31]=c->r[1]|c->r[1]; // 801D6418
  c->r[29]=c->r[5]|c->r[5]; // 801D641C
  c->r[30]=c->r[3]|c->r[3]; // 801D6420
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D6424
  c->r[3]=c->r[29]|c->r[29]; // 801D6428
  c->r[28]=c->r[4]|c->r[4]; // 801D642C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D6430
  c->ctr=c->r[12]; // 801D6434
  if (true) { c->lr=0x801D643Cu; dispatch(c,c->ctr); } // 801D6438
  cmps(c,0,(int32_t)c->r[3],1025); // 801D643C
  if (!crb(c,0)) { goto L_801D6450; } // 801D6440
  cmps(c,0,(int32_t)c->r[3],3); // 801D6444
  if (crb(c,2)) { goto L_801D645C; } // 801D6448
  goto L_801D65D8; // 801D644C
L_801D6450:;
  cmps(c,0,(int32_t)c->r[3],1030); // 801D6450
  if (!crb(c,0)) { goto L_801D65D8; } // 801D6454
  goto L_801D6478; // 801D6458
L_801D645C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D645C
  c->lr=0x801D6464u; f_801A6F34(c); // 801D6460
  c->r[3]=c->r[30]|c->r[30]; // 801D6464
  c->r[4]=c->r[28]|c->r[28]; // 801D6468
  c->r[5]=c->r[29]|c->r[29]; // 801D646C
  c->lr=0x801D6474u; f_800B5B1C(c); // 801D6470
  goto L_801D65E8; // 801D6474
L_801D6478:;
  c->r[0]=R8(c->r[29]+0x00000036u); // 801D6478
  cmps(c,0,(int32_t)c->r[0],0); // 801D647C
  if (crb(c,2)) { goto L_801D6554; } // 801D6480
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6484
  c->r[4]=0u+0x803E0000u; // 801D6488
  c->r[4]=c->r[4]+0x00000F90u; // 801D648C
  c->r[3]=c->r[30]+0x000008ECu; // 801D6490
  {uint32_t ea=c->r[30]+0x000003A4u; WF32(ea,c->f[0]);} // 801D6494
  c->r[4]=c->r[4]+0x00000006u; // 801D6498
  c->lr=0x801D64A0u; f_80075440(c); // 801D649C
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D64A0
  c->r[5]=c->r[3]|c->r[3]; // 801D64A4
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D64A8
  c->r[3]=c->r[30]+0x00000C88u; // 801D64AC
  c->r[4]=c->r[30]+0x000008ECu; // 801D64B0
  c->r[6]=0u+0x00000000u; // 801D64B4
  c->r[7]=0u+0x00000000u; // 801D64B8
  c->lr=0x801D64C0u; f_800BB0C8(c); // 801D64BC
  c->r[3]=R32(c->r[30]+0x00000054u); // 801D64C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D64C4
  if (crb(c,2)) { goto L_801D6518; } // 801D64C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D64CC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D64D0
  c->ctr=c->r[12]; // 801D64D4
  if (true) { c->lr=0x801D64DCu; dispatch(c,c->ctr); } // 801D64D8
  c->lr=0x801D64E0u; f_8007A658(c); // 801D64DC
  c->r[29]=c->r[3]|c->r[3]; // 801D64E0
  c->r[3]=0u+0x00000006u; // 801D64E4
  c->lr=0x801D64ECu; f_8007A658(c); // 801D64E8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801D64EC
  if (!crb(c,1)) { goto L_801D6510; } // 801D64F0
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801D64F4
  if (crb(c,2)) { goto L_801D6508; } // 801D64F8
  W32(c->r[31]+0x00000034u,c->r[1]); // 801D64FC
  c->r[3]=c->r[29]|c->r[29]; // 801D6500
  c->lr=0x801D6508u; f_800AC5F0(c); // 801D6504
L_801D6508:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801D6508
  goto L_801D65E8; // 801D650C
L_801D6510:;
  c->r[0]=0u+0x00000000u; // 801D6510
  W32(c->r[30]+0x00000054u,c->r[0]); // 801D6514
L_801D6518:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801D6518
  c->r[0]=c->r[3]+0x00000001u; // 801D651C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D6520
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D6524
  c->r[0]=c->r[0]^c->r[3]; // 801D6528
  c->r[0]=c->r[0]-c->r[3]; // 801D652C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801D6530
  c->r[0]=c->r[30]+c->r[0]; // 801D6534
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801D6538
  if (crb(c,2)) { goto L_801D654C; } // 801D653C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801D6540
  c->r[3]=c->r[29]|c->r[29]; // 801D6544
  c->lr=0x801D654Cu; f_800AC5F0(c); // 801D6548
L_801D654C:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801D654C
  goto L_801D65E8; // 801D6550
L_801D6554:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801D6554
  c->r[3]=c->r[30]|c->r[30]; // 801D6558
  c->r[4]=c->r[29]|c->r[29]; // 801D655C
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6560
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801D6564
  c->ctr=c->r[12]; // 801D6568
  if (true) { c->lr=0x801D6570u; dispatch(c,c->ctr); } // 801D656C
  {uint32_t ea=c->r[30]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6570
  c->r[3]=c->r[30]|c->r[30]; // 801D6574
  c->r[4]=0u+0x00000002u; // 801D6578
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801D657C
  {uint32_t ea=c->r[30]+0x000003A4u; WF32(ea,c->f[0]);} // 801D6580
  c->lr=0x801D6588u; f_800760EC(c); // 801D6584
  cmps(c,0,(int32_t)c->r[3],0); // 801D6588
  if (!crb(c,2)) { goto L_801D65E8; } // 801D658C
  c->r[3]=c->r[30]|c->r[30]; // 801D6590
  c->r[4]=0u+0x00000006u; // 801D6594
  c->lr=0x801D659Cu; f_800760EC(c); // 801D6598
  cmps(c,0,(int32_t)c->r[3],0); // 801D659C
  if (!crb(c,2)) { goto L_801D65E8; } // 801D65A0
  c->r[3]=c->r[30]|c->r[30]; // 801D65A4
  c->r[4]=0u+0x00000013u; // 801D65A8
  c->lr=0x801D65B0u; f_800760EC(c); // 801D65AC
  cmps(c,0,(int32_t)c->r[3],0); // 801D65B0
  if (!crb(c,2)) { goto L_801D65E8; } // 801D65B4
  {uint32_t ea=c->r[30]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D65B8
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D65BC
  fcmp(c,0,c->f[1],c->f[0]); // 801D65C0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D65C4
  if (!crb(c,2)) { goto L_801D65E8; } // 801D65C8
  c->r[3]=c->r[30]|c->r[30]; // 801D65CC
  c->lr=0x801D65D4u; f_800ACB54(c); // 801D65D0
  goto L_801D65E8; // 801D65D4
L_801D65D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D65D8
  c->r[4]=c->r[28]|c->r[28]; // 801D65DC
  c->r[5]=c->r[29]|c->r[29]; // 801D65E0
  c->lr=0x801D65E8u; f_800B5B1C(c); // 801D65E4
L_801D65E8:;
  c->r[10]=c->r[31]|c->r[31]; // 801D65E8
  c->r[11]=c->r[10]+0x00000050u; // 801D65EC
  c->lr=0x801D65F4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D65F0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801D65F4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D65F8
  c->r[1]=c->r[10]|c->r[10]; // 801D65FC
  c->lr=c->r[0]; // 801D6600
  return; // 801D6604
}

// fn_801D6608
void f_801D6608(Ctx* __restrict c) {
  trace_call(0x801D6608u);
  f_800B07FC(c); return; // 801D6608
}

// fn_801D660C
void f_801D660C(Ctx* __restrict c) {
  trace_call(0x801D660Cu);
  f_800B0848(c); return; // 801D660C
}

// fn_801D6610
void f_801D6610(Ctx* __restrict c) {
  trace_call(0x801D6610u);
  return; // 801D6610
}

// fn_801D6614
void f_801D6614(Ctx* __restrict c) {
  trace_call(0x801D6614u);
  f_801A6F34(c); return; // 801D6614
}

// fn_801D6618
void f_801D6618(Ctx* __restrict c) {
  trace_call(0x801D6618u);
  c->r[4]=0u+0x00000000u; // 801D6618
  c->r[3]=c->r[3]+0x000008D0u; // 801D661C
  f_8002B91C(c); return; // 801D6620
}

// fn_801D6624
void f_801D6624(Ctx* __restrict c) {
  trace_call(0x801D6624u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6624
  c->r[0]=c->lr; // 801D6628
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D662C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D6630
  c->r[31]=c->r[3]|c->r[3]; // 801D6634
  c->r[0]=R32(c->r[3]+0x000008C4u); // 801D6638
  cmps(c,0,(int32_t)c->r[0],0); // 801D663C
  if (crb(c,2)) { goto L_801D66A8; } // 801D6640
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D6644
  c->r[4]=c->r[31]+0x000008D0u; // 801D6648
  c->r[3]=c->r[1]+0x00000008u; // 801D664C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D6650
  c->ctr=c->r[12]; // 801D6654
  if (true) { c->lr=0x801D665Cu; dispatch(c,c->ctr); } // 801D6658
  c->r[3]=c->r[31]+0x00001F24u; // 801D665C
  c->r[4]=c->r[1]+0x00000008u; // 801D6660
  c->lr=0x801D6668u; f_801ABF6C(c); // 801D6664
  c->r[3]=c->r[31]+0x00001F24u; // 801D6668
  c->r[4]=c->r[31]+0x000008A4u; // 801D666C
  c->lr=0x801D6674u; f_801AC0C8(c); // 801D6670
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6674
  c->r[3]=c->r[31]+0x000008D0u; // 801D6678
  c->r[4]=0u+0x00000001u; // 801D667C
  {uint32_t ea=c->r[31]+0x00001F70u; WF32(ea,c->f[0]);} // 801D6680
  c->lr=0x801D6688u; f_8002B91C(c); // 801D6684
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D6688
  c->r[3]=c->r[31]+0x000008D0u; // 801D668C
  c->r[4]=c->r[31]+0x00001F34u; // 801D6690
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D6694
  c->ctr=c->r[12]; // 801D6698
  if (true) { c->lr=0x801D66A0u; dispatch(c,c->ctr); } // 801D669C
  c->r[3]=c->r[31]|c->r[31]; // 801D66A0
  c->lr=0x801D66A8u; f_800AC7C4(c); // 801D66A4
L_801D66A8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D66A8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D66AC
  c->lr=c->r[0]; // 801D66B0
  c->r[1]=c->r[1]+0x00000040u; // 801D66B4
  return; // 801D66B8
}

// fn_801D66BC
void f_801D66BC(Ctx* __restrict c) {
  trace_call(0x801D66BCu);
  return; // 801D66BC
}

// fn_801D66C0
void f_801D66C0(Ctx* __restrict c) {
  trace_call(0x801D66C0u);
  return; // 801D66C0
}

// fn_801D66C4
void f_801D66C4(Ctx* __restrict c) {
  trace_call(0x801D66C4u);
  return; // 801D66C4
}

// fn_801D66C8
void f_801D66C8(Ctx* __restrict c) {
  trace_call(0x801D66C8u);
  return; // 801D66C8
}

// fn_801D66CC
void f_801D66CC(Ctx* __restrict c) {
  trace_call(0x801D66CCu);
  return; // 801D66CC
}

// fn_801D66D0
void f_801D66D0(Ctx* __restrict c) {
  trace_call(0x801D66D0u);
  return; // 801D66D0
}

// fn_801D66D4
void f_801D66D4(Ctx* __restrict c) {
  trace_call(0x801D66D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D66D4
  c->r[0]=c->lr; // 801D66D8
  c->r[4]=0u+0x803E0000u; // 801D66DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D66E0
  c->r[4]=c->r[4]+0x00000F90u; // 801D66E4
  c->r[4]=c->r[4]+0x00000011u; // 801D66E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D66EC
  c->r[31]=c->r[5]|c->r[5]; // 801D66F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D66F4
  c->r[30]=c->r[3]|c->r[3]; // 801D66F8
  c->r[3]=c->r[3]+0x000008ECu; // 801D66FC
  c->lr=0x801D6704u; f_80075440(c); // 801D6700
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6704
  c->r[5]=c->r[3]|c->r[3]; // 801D6708
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D670C
  c->r[3]=c->r[30]+0x00000C88u; // 801D6710
  c->r[4]=c->r[30]+0x000008ECu; // 801D6714
  c->r[6]=0u+0x00000000u; // 801D6718
  c->r[7]=0u+0x00000000u; // 801D671C
  c->lr=0x801D6724u; f_800BB0C8(c); // 801D6720
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6724
  c->r[3]=c->r[30]+0x00001F24u; // 801D6728
  {uint32_t ea=c->r[2]+0xFFFFBD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D672C
  {uint32_t ea=c->r[30]+0x00001F1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6730
  c->f[2]=c->f[1]; // 801D6734
  c->f[4]=c->f[1]; // 801D6738
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801D673C
  c->lr=0x801D6744u; f_801AC6C4(c); // 801D6740
  c->r[0]=R8(c->r[30]+0x000020E0u); // 801D6744
  cmps(c,0,(int32_t)c->r[0],0); // 801D6748
  if (crb(c,2)) { goto L_801D675C; } // 801D674C
  c->r[0]=0u+0x00000000u; // 801D6750
  W8(c->r[30]+0x000020E0u,c->r[0]); // 801D6754
  W32(c->r[30]+0x00001FE8u,c->r[0]); // 801D6758
L_801D675C:;
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D675C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 801D6760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6764
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6768
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D676C
  c->lr=c->r[0]; // 801D6770
  c->r[1]=c->r[1]+0x00000010u; // 801D6774
  return; // 801D6778
}

// fn_801D677C
void f_801D677C(Ctx* __restrict c) {
  trace_call(0x801D677Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D677C
  c->r[0]=c->lr; // 801D6780
  W32(c->r[1]+0x00000134u,c->r[0]); // 801D6784
  c->r[11]=c->r[1]+0x00000130u; // 801D6788
  c->lr=0x801D6790u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D678C
  c->r[31]=c->r[1]|c->r[1]; // 801D6790
  c->r[0]=R32(c->r[3]+0x00002094u); // 801D6794
  c->r[29]=c->r[3]|c->r[3]; // 801D6798
  c->r[30]=c->r[4]|c->r[4]; // 801D679C
  cmps(c,0,(int32_t)c->r[0],0); // 801D67A0
  if (!crb(c,2)) { goto L_801D6838; } // 801D67A4
  c->r[3]=R32(c->r[3]+0x00000054u); // 801D67A8
  cmps(c,0,(int32_t)c->r[3],0); // 801D67AC
  if (crb(c,2)) { goto L_801D6800; } // 801D67B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D67B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D67B8
  c->ctr=c->r[12]; // 801D67BC
  if (true) { c->lr=0x801D67C4u; dispatch(c,c->ctr); } // 801D67C0
  c->lr=0x801D67C8u; f_8007A658(c); // 801D67C4
  c->r[28]=c->r[3]|c->r[3]; // 801D67C8
  c->r[3]=0u+0x00000013u; // 801D67CC
  c->lr=0x801D67D4u; f_8007A658(c); // 801D67D0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801D67D4
  if (!crb(c,1)) { goto L_801D67F8; } // 801D67D8
  c->r[28]=addc(c,c->r[29],0x00000280u,0); cr0(c,c->r[28]); // 801D67DC
  if (crb(c,2)) { goto L_801D67F0; } // 801D67E0
  W32(c->r[31]+0x00000040u,c->r[1]); // 801D67E4
  c->r[3]=c->r[28]|c->r[28]; // 801D67E8
  c->lr=0x801D67F0u; f_800B5708(c); // 801D67EC
L_801D67F0:;
  W32(c->r[29]+0x00000058u,c->r[28]); // 801D67F0
  goto L_801D6838; // 801D67F4
L_801D67F8:;
  c->r[0]=0u+0x00000000u; // 801D67F8
  W32(c->r[29]+0x00000054u,c->r[0]); // 801D67FC
L_801D6800:;
  c->r[3]=R32(c->r[29]+0x0000005Cu); // 801D6800
  c->r[0]=c->r[3]+0x00000001u; // 801D6804
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D6808
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D680C
  c->r[0]=c->r[0]^c->r[3]; // 801D6810
  c->r[0]=c->r[0]-c->r[3]; // 801D6814
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801D6818
  c->r[0]=c->r[29]+c->r[0]; // 801D681C
  c->r[28]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[28]); // 801D6820
  if (crb(c,2)) { goto L_801D6834; } // 801D6824
  W32(c->r[31]+0x00000028u,c->r[1]); // 801D6828
  c->r[3]=c->r[28]|c->r[28]; // 801D682C
  c->lr=0x801D6834u; f_800B5708(c); // 801D6830
L_801D6834:;
  W32(c->r[29]+0x00000054u,c->r[28]); // 801D6834
L_801D6838:;
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801D6838
  c->r[4]=c->r[29]+0x000008D0u; // 801D683C
  c->r[3]=c->r[31]+0x00000074u; // 801D6840
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D6844
  c->ctr=c->r[12]; // 801D6848
  if (true) { c->lr=0x801D6850u; dispatch(c,c->ctr); } // 801D684C
  c->r[3]=c->r[29]+0x00001F24u; // 801D6850
  c->r[4]=c->r[31]+0x00000074u; // 801D6854
  c->lr=0x801D685Cu; f_801ABF6C(c); // 801D6858
  c->lr=0x801D6860u; f_80061A4C(c); // 801D685C
  c->r[5]=c->r[3]|c->r[3]; // 801D6860
  c->r[3]=c->r[31]+0x00000008u; // 801D6864
  c->r[4]=c->r[29]+0x00001F64u; // 801D6868
  c->r[5]=c->r[5]+0x00000384u; // 801D686C
  c->lr=0x801D6874u; f_8007B8A4(c); // 801D6870
  c->r[3]=c->r[31]+0x00000008u; // 801D6874
  c->lr=0x801D687Cu; f_802657AC(c); // 801D6878
  {uint32_t ea=c->r[2]+0xFFFFBD44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D687C
  fcmp(c,0,c->f[1],c->f[0]); // 801D6880
  if (!crb(c,0)) { goto L_801D68A4; } // 801D6884
  {uint32_t ea=c->r[29]+0x000020DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6888
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D688C
  fcmp(c,0,c->f[1],c->f[0]); // 801D6890
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D6894
  if (!crb(c,2)) { goto L_801D68A4; } // 801D6898
  c->r[3]=c->r[29]|c->r[29]; // 801D689C
  c->lr=0x801D68A4u; f_800AC3A4(c); // 801D68A0
L_801D68A4:;
  {uint32_t ea=c->r[29]+0x000020DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D68A4
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D68A8
  fcmp(c,0,c->f[1],c->f[0]); // 801D68AC
  if (!crb(c,1)) { goto L_801D68C8; } // 801D68B0
  c->r[3]=0u+0x804D0000u; // 801D68B4
  c->r[3]=c->r[3]+0x00003318u; // 801D68B8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D68BC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D68C0
  {uint32_t ea=c->r[29]+0x000020DCu; WF32(ea,c->f[0]);} // 801D68C4
L_801D68C8:;
  {uint32_t ea=c->r[29]+0x00001F88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D68C8
  {uint32_t ea=c->r[2]+0xFFFFBD48u; c->f[0]=RF64(ea);} // 801D68CC
  c->f[1]=std::fabs(c->f[1]); // 801D68D0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801D68D4
  fcmp(c,0,c->f[1],c->f[0]); // 801D68D8
  if (!crb(c,1)) { goto L_801D68EC; } // 801D68DC
  c->r[3]=c->r[29]|c->r[29]; // 801D68E0
  c->lr=0x801D68E8u; f_8019CE28(c); // 801D68E4
  goto L_801D6A4C; // 801D68E8
L_801D68EC:;
  c->r[3]=0u+0x804D0000u; // 801D68EC
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D68F0
  c->r[3]=c->r[3]+0x00003318u; // 801D68F4
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D68F8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D68FC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 801D6900
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801D6904
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[2]);} // 801D6908
  fcmp(c,0,c->f[1],c->f[0]); // 801D690C
  if (!crb(c,0)) { goto L_801D6918; } // 801D6910
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 801D6914
L_801D6918:;
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6918
  {uint32_t ea=c->r[30]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D691C
  fcmp(c,0,c->f[1],c->f[0]); // 801D6920
  if (!crb(c,2)) { goto L_801D6958; } // 801D6924
  c->r[0]=R32(c->r[29]+0x000020A4u); // 801D6928
  cmps(c,0,(int32_t)c->r[0],0); // 801D692C
  if (crb(c,2)) { goto L_801D6958; } // 801D6930
  c->r[3]=c->r[29]+0x000020B8u; // 801D6934
  c->lr=0x801D693Cu; f_802657AC(c); // 801D6938
  {uint32_t ea=c->r[2]+0xFFFFBD50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D693C
  fcmp(c,0,c->f[1],c->f[0]); // 801D6940
  if (!crb(c,0)) { goto L_801D6958; } // 801D6944
  c->r[3]=c->r[29]+0x00001F24u; // 801D6948
  c->lr=0x801D6950u; f_801AC1D4(c); // 801D694C
  {uint32_t ea=c->r[2]+0xFFFFBD34u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6950
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 801D6954
L_801D6958:;
  c->r[3]=0u+0x804D0000u; // 801D6958
  {uint32_t ea=c->r[29]+0x00001F20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D695C
  c->r[3]=c->r[3]+0x00003318u; // 801D6960
  {uint32_t ea=c->r[2]+0xFFFFBD54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6964
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6968
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 801D696C
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801D6970
  {uint32_t ea=c->r[29]+0x00001F20u; WF32(ea,c->f[2]);} // 801D6974
  fcmp(c,0,c->f[1],c->f[0]); // 801D6978
  if (!crb(c,1)) { goto L_801D6A4C; } // 801D697C
  c->r[0]=R32(c->r[29]+0x00002094u); // 801D6980
  cmpu(c,0,c->r[0],0x00000005u); // 801D6984
  if (!crb(c,2)) { goto L_801D6A4C; } // 801D6988
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D698C
  c->r[3]=c->r[31]+0x000000A4u; // 801D6990
  {uint32_t ea=c->r[29]+0x00001F20u; WF32(ea,c->f[0]);} // 801D6994
  c->lr=0x801D699Cu; f_80264680(c); // 801D6998
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D699C
  c->r[3]=c->r[31]+0x00000044u; // 801D69A0
  {uint32_t ea=c->r[29]+0x00001F74u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D69A4
  {uint32_t ea=c->r[2]+0xFFFFBD58u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D69A8
  c->f[3]=c->f[1]; // 801D69AC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801D69B0
  c->lr=0x801D69B8u; f_803949B8(c); // 801D69B4
  c->r[3]=c->r[31]+0x000000A4u; // 801D69B8
  c->r[4]=c->r[31]+0x00000044u; // 801D69BC
  c->r[5]=c->r[3]|c->r[3]; // 801D69C0
  c->lr=0x801D69C8u; f_802646E0(c); // 801D69C4
  c->r[3]=c->r[31]+0x000000A4u; // 801D69C8
  c->r[4]=c->r[29]+0x00001F64u; // 801D69CC
  c->lr=0x801D69D4u; f_80032FF4(c); // 801D69D0
  c->lr=0x801D69D8u; f_80051FF4(c); // 801D69D4
  c->r[5]=0u+0x803E0000u; // 801D69D8
  c->r[4]=c->r[3]|c->r[3]; // 801D69DC
  c->r[5]=c->r[5]+0x00000F90u; // 801D69E0
  c->r[3]=c->r[31]+0x000000D4u; // 801D69E4
  c->r[5]=c->r[5]+0x00000018u; // 801D69E8
  c->r[6]=0u+0x00000001u; // 801D69EC
  c->lr=0x801D69F4u; f_8013DB40(c); // 801D69F0
  c->r[3]=c->r[31]+0x000000D4u; // 801D69F4
  c->lr=0x801D69FCu; f_80146F08(c); // 801D69F8
  cmps(c,0,(int32_t)c->r[3],0); // 801D69FC
  if (crb(c,2)) { goto L_801D6A4C; } // 801D6A00
  c->r[3]=c->r[31]+0x000000D4u; // 801D6A04
  c->r[4]=0u+0x00000006u; // 801D6A08
  c->r[5]=0u+0x00000000u; // 801D6A0C
  c->lr=0x801D6A14u; f_8014763C(c); // 801D6A10
  c->r[0]=0u+0x00000006u; // 801D6A14
  c->r[5]=c->r[31]+0x000000D0u; // 801D6A18
  c->r[4]=c->r[31]+0x000000A0u; // 801D6A1C
  c->ctr=c->r[0]; // 801D6A20
L_801D6A24:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D6A24
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D6A28
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D6A2C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D6A30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6A24; } // 801D6A34
  c->r[12]=R32(c->r[31]+0x00000104u); // 801D6A38
  c->r[3]=c->r[31]+0x000000D4u; // 801D6A3C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D6A40
  c->ctr=c->r[12]; // 801D6A44
  if (true) { c->lr=0x801D6A4Cu; dispatch(c,c->ctr); } // 801D6A48
L_801D6A4C:;
  c->r[10]=c->r[31]|c->r[31]; // 801D6A4C
  c->r[11]=c->r[10]+0x00000130u; // 801D6A50
  c->lr=0x801D6A58u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6A54
  c->r[10]=R32(c->r[1]+0x00000000u); // 801D6A58
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D6A5C
  c->r[1]=c->r[10]|c->r[10]; // 801D6A60
  c->lr=c->r[0]; // 801D6A64
  return; // 801D6A68
}

// fn_801D6A6C
void f_801D6A6C(Ctx* __restrict c) {
  trace_call(0x801D6A6Cu);
  return; // 801D6A6C
}

// fn_801D6A70
void f_801D6A70(Ctx* __restrict c) {
  trace_call(0x801D6A70u);
  c->r[0]=R32(c->r[3]+0x00001F24u); // 801D6A70
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801D6A74
  W32(c->r[3]+0x00001F24u,c->r[0]); // 801D6A78
  return; // 801D6A7C
}

// fn_801D6A80
void f_801D6A80(Ctx* __restrict c) {
  trace_call(0x801D6A80u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6A80
  c->r[0]=c->lr; // 801D6A84
  c->r[4]=0u+0x803E0000u; // 801D6A88
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6A8C
  c->r[4]=c->r[4]+0x00000F90u; // 801D6A90
  c->r[4]=c->r[4]+0x00000021u; // 801D6A94
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D6A98
  c->r[31]=c->r[3]|c->r[3]; // 801D6A9C
  c->r[3]=c->r[3]+0x000008ECu; // 801D6AA0
  c->lr=0x801D6AA8u; f_80075440(c); // 801D6AA4
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6AA8
  c->r[5]=c->r[3]|c->r[3]; // 801D6AAC
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6AB0
  c->r[3]=c->r[31]+0x00000C88u; // 801D6AB4
  c->r[4]=c->r[31]+0x000008ECu; // 801D6AB8
  c->r[6]=0u+0x00000000u; // 801D6ABC
  c->r[7]=0u+0x00000000u; // 801D6AC0
  c->lr=0x801D6AC8u; f_800BB0C8(c); // 801D6AC4
  c->r[3]=c->r[1]+0x00000014u; // 801D6AC8
  c->r[4]=c->r[31]+0x00001F64u; // 801D6ACC
  c->lr=0x801D6AD4u; f_8003F484(c); // 801D6AD0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6AD4
  c->r[3]=c->r[1]+0x00000008u; // 801D6AD8
  {uint32_t ea=c->r[2]+0xFFFFBD5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6ADC
  c->r[4]=c->r[1]+0x00000014u; // 801D6AE0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D6AE4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D6AE8
  c->lr=0x801D6AF0u; f_8003F484(c); // 801D6AEC
  {uint32_t ea=c->r[2]+0xFFFFBD60u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6AF0
  c->r[4]=c->r[3]|c->r[3]; // 801D6AF4
  {uint32_t ea=c->r[2]+0xFFFFBD34u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6AF8
  c->r[3]=c->r[31]+0x00001F24u; // 801D6AFC
  c->lr=0x801D6B04u; f_801AC448(c); // 801D6B00
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6B04
  c->r[3]=c->r[31]+0x00001F24u; // 801D6B08
  {uint32_t ea=c->r[2]+0xFFFFBD28u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D6B0C
  c->f[2]=c->f[1]; // 801D6B10
  c->f[3]=c->f[1]; // 801D6B14
  c->lr=0x801D6B1Cu; f_801AC6C4(c); // 801D6B18
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6B1C
  c->r[0]=0u+0x00000001u; // 801D6B20
  W8(c->r[31]+0x000020D8u,c->r[0]); // 801D6B24
  {uint32_t ea=c->r[31]+0x000020D4u; WF32(ea,c->f[0]);} // 801D6B28
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D6B2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D6B30
  c->lr=c->r[0]; // 801D6B34
  c->r[1]=c->r[1]+0x00000030u; // 801D6B38
  return; // 801D6B3C
}

// fn_801D6B40
void f_801D6B40(Ctx* __restrict c) {
  trace_call(0x801D6B40u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6B40
  c->r[0]=c->lr; // 801D6B44
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D6B48
  c->r[11]=c->r[1]+0x00000070u; // 801D6B4C
  c->lr=0x801D6B54u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6B50
  c->r[4]=R32(c->r[3]+0x00000974u); // 801D6B54
  c->r[30]=0u+0x803E0000u; // 801D6B58
  c->r[29]=c->r[3]|c->r[3]; // 801D6B5C
  c->r[3]=c->r[3]+0x000008ECu; // 801D6B60
  c->r[5]=R32(c->r[4]+0x00000000u); // 801D6B64
  c->r[30]=c->r[30]+0x00000F90u; // 801D6B68
  c->r[4]=c->r[30]+0x00000021u; // 801D6B6C
  c->r[31]=R32(c->r[5]+0x00000018u); // 801D6B70
  c->lr=0x801D6B78u; f_80075440(c); // 801D6B74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 801D6B78
  if (!crb(c,2)) { goto L_801D6BC0; } // 801D6B7C
  {uint32_t ea=c->r[29]+0x0000209Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6B80
  {uint32_t ea=c->r[2]+0xFFFFBD28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6B84
  fcmp(c,0,c->f[1],c->f[0]); // 801D6B88
  if (!crb(c,0)) { goto L_801D6C98; } // 801D6B8C
  c->r[3]=c->r[29]+0x000008ECu; // 801D6B90
  c->r[4]=c->r[30]+0x00000028u; // 801D6B94
  c->lr=0x801D6B9Cu; f_80075440(c); // 801D6B98
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6B9C
  c->r[5]=c->r[3]|c->r[3]; // 801D6BA0
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6BA4
  c->r[3]=c->r[29]+0x00000C88u; // 801D6BA8
  c->r[4]=c->r[29]+0x000008ECu; // 801D6BAC
  c->r[6]=0u+0x00000000u; // 801D6BB0
  c->r[7]=0u+0x00000000u; // 801D6BB4
  c->lr=0x801D6BBCu; f_800BB0C8(c); // 801D6BB8
  goto L_801D6C98; // 801D6BBC
L_801D6BC0:;
  {uint32_t ea=c->r[29]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6BC0
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6BC4
  fcmp(c,0,c->f[1],c->f[0]); // 801D6BC8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D6BCC
  if (!crb(c,2)) { goto L_801D6BE0; } // 801D6BD0
  c->r[3]=c->r[29]|c->r[29]; // 801D6BD4
  c->lr=0x801D6BDCu; f_800ACB54(c); // 801D6BD8
  goto L_801D6CC4; // 801D6BDC
L_801D6BE0:;
  c->r[3]=R32(c->r[29]+0x00002094u); // 801D6BE0
  cmps(c,0,(int32_t)c->r[3],0); // 801D6BE4
  if (crb(c,2)) { goto L_801D6C6C; } // 801D6BE8
  c->r[0]=R8(c->r[29]+0x000020D8u); // 801D6BEC
  cmps(c,0,(int32_t)c->r[0],0); // 801D6BF0
  if (crb(c,2)) { goto L_801D6C6C; } // 801D6BF4
  c->r[31]=0u+0x00000000u; // 801D6BF8
  cmpu(c,0,c->r[3],0x00000005u); // 801D6BFC
  W32(c->r[29]+0x00001F24u,c->r[31]); // 801D6C00
  if (!crb(c,2)) { goto L_801D6C6C; } // 801D6C04
  c->lr=0x801D6C0Cu; f_80051FF4(c); // 801D6C08
  c->r[4]=c->r[3]|c->r[3]; // 801D6C0C
  c->r[3]=c->r[1]+0x00000014u; // 801D6C10
  c->r[5]=c->r[30]+0x0000002Du; // 801D6C14
  c->r[6]=0u+0x00000001u; // 801D6C18
  c->lr=0x801D6C20u; f_8013DB40(c); // 801D6C1C
  {uint32_t ea=c->r[29]+0x00001F64u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6C20
  c->r[3]=c->r[1]+0x00000014u; // 801D6C24
  {uint32_t ea=c->r[29]+0x00001F68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6C28
  {uint32_t ea=c->r[29]+0x00001F6Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801D6C2C
  c->lr=0x801D6C34u; f_80146A14(c); // 801D6C30
  c->r[6]=R32(c->r[29]+0x00001F64u); // 801D6C34
  c->r[3]=c->r[29]+0x00000800u; // 801D6C38
  c->r[0]=R32(c->r[29]+0x00001F68u); // 801D6C3C
  c->r[4]=c->r[30]+0x00000038u; // 801D6C40
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6C44
  c->r[5]=c->r[1]+0x00000008u; // 801D6C48
  W32(c->r[1]+0x00000008u,c->r[6]); // 801D6C4C
  c->r[6]=0u+0x00000001u; // 801D6C50
  c->f[2]=c->f[1]; // 801D6C54
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D6C58
  c->r[0]=R32(c->r[29]+0x00001F6Cu); // 801D6C5C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D6C60
  c->lr=0x801D6C68u; f_800C1BA0(c); // 801D6C64
  W8(c->r[29]+0x000020D8u,c->r[31]); // 801D6C68
L_801D6C6C:;
  c->r[3]=R32(c->r[29]+0x00000974u); // 801D6C6C
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6C70
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D6C74
  c->lr=0x801D6C7Cu; f_8016498C(c); // 801D6C78
  cmps(c,0,(int32_t)c->r[3],0); // 801D6C7C
  if (crb(c,2)) { goto L_801D6C98; } // 801D6C80
  c->r[0]=R32(c->r[29]+0x00001F24u); // 801D6C84
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 801D6C88
  if (!crb(c,2)) { goto L_801D6C98; } // 801D6C8C
  c->r[3]=c->r[29]|c->r[29]; // 801D6C90
  c->lr=0x801D6C98u; f_800AC7C4(c); // 801D6C94
L_801D6C98:;
  c->r[3]=0u+0x804D0000u; // 801D6C98
  {uint32_t ea=c->r[29]+0x000020D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6C9C
  c->r[3]=c->r[3]+0x00003318u; // 801D6CA0
  {uint32_t ea=c->r[2]+0xFFFFBD64u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6CA4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6CA8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801D6CAC
  fcmp(c,0,c->f[1],c->f[0]); // 801D6CB0
  {uint32_t ea=c->r[29]+0x000020D4u; WF32(ea,c->f[1]);} // 801D6CB4
  if (!crb(c,1)) { goto L_801D6CC4; } // 801D6CB8
  c->r[3]=c->r[29]|c->r[29]; // 801D6CBC
  c->lr=0x801D6CC4u; f_800ACB54(c); // 801D6CC0
L_801D6CC4:;
  c->r[11]=c->r[1]+0x00000070u; // 801D6CC4
  c->lr=0x801D6CCCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6CC8
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D6CCC
  c->lr=c->r[0]; // 801D6CD0
  c->r[1]=c->r[1]+0x00000070u; // 801D6CD4
  return; // 801D6CD8
}

// fn_801D6CDC
void f_801D6CDC(Ctx* __restrict c) {
  trace_call(0x801D6CDCu);
  return; // 801D6CDC
}

// fn_801D6CE0
void f_801D6CE0(Ctx* __restrict c) {
  trace_call(0x801D6CE0u);
  c->r[0]=0u+0x00000000u; // 801D6CE0
  W32(c->r[3]+0x00001F24u,c->r[0]); // 801D6CE4
  return; // 801D6CE8
}

// fn_801D6CEC
void f_801D6CEC(Ctx* __restrict c) {
  trace_call(0x801D6CECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6CEC
  c->r[0]=c->lr; // 801D6CF0
  c->r[4]=0u+0x803E0000u; // 801D6CF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6CF8
  c->r[4]=c->r[4]+0x00000F90u; // 801D6CFC
  c->r[4]=c->r[4]+0x0000003Fu; // 801D6D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6D04
  c->r[31]=c->r[3]|c->r[3]; // 801D6D08
  c->r[3]=c->r[3]+0x000008ECu; // 801D6D0C
  c->lr=0x801D6D14u; f_80075440(c); // 801D6D10
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6D14
  c->r[5]=c->r[3]|c->r[3]; // 801D6D18
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6D1C
  c->r[3]=c->r[31]+0x00000C88u; // 801D6D20
  c->r[4]=c->r[31]+0x000008ECu; // 801D6D24
  c->r[6]=0u+0x00000000u; // 801D6D28
  c->r[7]=0u+0x00000000u; // 801D6D2C
  c->lr=0x801D6D34u; f_800BB0C8(c); // 801D6D30
  c->r[3]=R32(c->r[31]+0x00000974u); // 801D6D34
  {uint32_t ea=c->r[2]+0xFFFFBD68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6D38
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D6D3C
  c->lr=0x801D6D44u; f_80165B9C(c); // 801D6D40
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6D44
  c->r[0]=0u+0x00000000u; // 801D6D48
  W32(c->r[31]+0x00001F24u,c->r[0]); // 801D6D4C
  c->r[3]=c->r[31]+0x00001F24u; // 801D6D50
  c->f[2]=c->f[1]; // 801D6D54
  c->f[3]=c->f[1]; // 801D6D58
  c->f[4]=c->f[1]; // 801D6D5C
  c->lr=0x801D6D64u; f_801AC6C4(c); // 801D6D60
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6D64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6D68
  c->lr=c->r[0]; // 801D6D6C
  c->r[1]=c->r[1]+0x00000010u; // 801D6D70
  return; // 801D6D74
}

// fn_801D6D78
void f_801D6D78(Ctx* __restrict c) {
  trace_call(0x801D6D78u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6D78
  c->r[0]=c->lr; // 801D6D7C
  W32(c->r[1]+0x00000104u,c->r[0]); // 801D6D80
  W32(c->r[1]+0x000000FCu,c->r[31]); // 801D6D84
  c->r[31]=c->r[3]|c->r[3]; // 801D6D88
  c->r[3]=c->r[1]+0x00000044u; // 801D6D8C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D6D90
  c->r[4]=c->r[31]+0x000008D0u; // 801D6D94
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D6D98
  c->ctr=c->r[12]; // 801D6D9C
  if (true) { c->lr=0x801D6DA4u; dispatch(c,c->ctr); } // 801D6DA0
  c->r[3]=c->r[31]+0x00001F24u; // 801D6DA4
  c->r[4]=c->r[1]+0x00000044u; // 801D6DA8
  c->lr=0x801D6DB0u; f_801ABF6C(c); // 801D6DAC
  c->lr=0x801D6DB4u; f_80061A4C(c); // 801D6DB0
  c->r[5]=c->r[3]|c->r[3]; // 801D6DB4
  c->r[3]=c->r[1]+0x00000008u; // 801D6DB8
  c->r[4]=c->r[31]+0x00001F64u; // 801D6DBC
  c->r[5]=c->r[5]+0x00000384u; // 801D6DC0
  c->lr=0x801D6DC8u; f_8007B8A4(c); // 801D6DC4
  c->r[3]=c->r[1]+0x00000008u; // 801D6DC8
  c->lr=0x801D6DD0u; f_802657AC(c); // 801D6DCC
  {uint32_t ea=c->r[2]+0xFFFFBD44u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6DD0
  fcmp(c,0,c->f[1],c->f[0]); // 801D6DD4
  if (!crb(c,0)) { goto L_801D6DF8; } // 801D6DD8
  {uint32_t ea=c->r[31]+0x000020DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6DDC
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6DE0
  fcmp(c,0,c->f[1],c->f[0]); // 801D6DE4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D6DE8
  if (!crb(c,2)) { goto L_801D6DF8; } // 801D6DEC
  c->r[3]=c->r[31]|c->r[31]; // 801D6DF0
  c->lr=0x801D6DF8u; f_800AC3A4(c); // 801D6DF4
L_801D6DF8:;
  {uint32_t ea=c->r[31]+0x000020DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6DF8
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6DFC
  fcmp(c,0,c->f[1],c->f[0]); // 801D6E00
  if (!crb(c,1)) { goto L_801D6E1C; } // 801D6E04
  c->r[3]=0u+0x804D0000u; // 801D6E08
  c->r[3]=c->r[3]+0x00003318u; // 801D6E0C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6E10
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D6E14
  {uint32_t ea=c->r[31]+0x000020DCu; WF32(ea,c->f[0]);} // 801D6E18
L_801D6E1C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801D6E1C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D6E20
  c->lr=0x801D6E28u; f_800752CC(c); // 801D6E24
  {uint32_t ea=c->r[2]+0xFFFFBD6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6E28
  fcmp(c,0,c->f[1],c->f[0]); // 801D6E2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801D6E30
  if (!crb(c,2)) { goto L_801D6E68; } // 801D6E34
  {uint32_t ea=c->r[31]+0x00001F88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6E38
  {uint32_t ea=c->r[2]+0xFFFFBD70u; c->f[0]=RF64(ea);} // 801D6E3C
  c->f[1]=std::fabs(c->f[1]); // 801D6E40
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801D6E44
  fcmp(c,0,c->f[1],c->f[0]); // 801D6E48
  if (!crb(c,1)) { goto L_801D6E5C; } // 801D6E4C
  c->r[3]=c->r[31]|c->r[31]; // 801D6E50
  c->lr=0x801D6E58u; f_8019CE28(c); // 801D6E54
  goto L_801D6EA0; // 801D6E58
L_801D6E5C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D6E5C
  c->lr=0x801D6E64u; f_800AC7C4(c); // 801D6E60
  goto L_801D6EA0; // 801D6E64
L_801D6E68:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801D6E68
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D6E6C
  c->lr=0x801D6E74u; f_800752CC(c); // 801D6E70
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6E74
  fcmp(c,0,c->f[1],c->f[0]); // 801D6E78
  if (!crb(c,1)) { goto L_801D6EA0; } // 801D6E7C
  {uint32_t ea=c->r[31]+0x00001F88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6E80
  {uint32_t ea=c->r[2]+0xFFFFBD78u; c->f[0]=RF64(ea);} // 801D6E84
  c->f[1]=std::fabs(c->f[1]); // 801D6E88
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801D6E8C
  fcmp(c,0,c->f[1],c->f[0]); // 801D6E90
  if (!crb(c,0)) { goto L_801D6EA0; } // 801D6E94
  c->r[3]=c->r[31]|c->r[31]; // 801D6E98
  c->lr=0x801D6EA0u; f_800AC7C4(c); // 801D6E9C
L_801D6EA0:;
  c->r[3]=0u+0x804D0000u; // 801D6EA0
  {uint32_t ea=c->r[31]+0x00001F20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6EA4
  c->r[3]=c->r[3]+0x00003318u; // 801D6EA8
  {uint32_t ea=c->r[2]+0xFFFFBD54u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6EAC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6EB0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801D6EB4
  fcmp(c,0,c->f[1],c->f[0]); // 801D6EB8
  {uint32_t ea=c->r[31]+0x00001F20u; WF32(ea,c->f[1]);} // 801D6EBC
  if (!crb(c,1)) { goto L_801D6F90; } // 801D6EC0
  c->r[0]=R32(c->r[31]+0x00002094u); // 801D6EC4
  cmpu(c,0,c->r[0],0x00000005u); // 801D6EC8
  if (!crb(c,2)) { goto L_801D6F90; } // 801D6ECC
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6ED0
  c->r[3]=c->r[1]+0x00000074u; // 801D6ED4
  {uint32_t ea=c->r[31]+0x00001F20u; WF32(ea,c->f[0]);} // 801D6ED8
  c->lr=0x801D6EE0u; f_80264680(c); // 801D6EDC
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6EE0
  c->r[3]=c->r[1]+0x00000014u; // 801D6EE4
  {uint32_t ea=c->r[31]+0x00001F74u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D6EE8
  {uint32_t ea=c->r[2]+0xFFFFBD58u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6EEC
  c->f[3]=c->f[1]; // 801D6EF0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801D6EF4
  c->lr=0x801D6EFCu; f_803949B8(c); // 801D6EF8
  c->r[3]=c->r[1]+0x00000074u; // 801D6EFC
  c->r[4]=c->r[1]+0x00000014u; // 801D6F00
  c->r[5]=c->r[3]|c->r[3]; // 801D6F04
  c->lr=0x801D6F0Cu; f_802646E0(c); // 801D6F08
  c->r[3]=c->r[1]+0x00000074u; // 801D6F0C
  c->r[4]=c->r[31]+0x00001F64u; // 801D6F10
  c->lr=0x801D6F18u; f_80032FF4(c); // 801D6F14
  c->lr=0x801D6F1Cu; f_80051FF4(c); // 801D6F18
  c->r[5]=0u+0x803E0000u; // 801D6F1C
  c->r[4]=c->r[3]|c->r[3]; // 801D6F20
  c->r[5]=c->r[5]+0x00000F90u; // 801D6F24
  c->r[3]=c->r[1]+0x000000A4u; // 801D6F28
  c->r[5]=c->r[5]+0x00000018u; // 801D6F2C
  c->r[6]=0u+0x00000001u; // 801D6F30
  c->lr=0x801D6F38u; f_8013DB40(c); // 801D6F34
  c->r[3]=c->r[1]+0x000000A4u; // 801D6F38
  c->lr=0x801D6F40u; f_80146F08(c); // 801D6F3C
  cmps(c,0,(int32_t)c->r[3],0); // 801D6F40
  if (crb(c,2)) { goto L_801D6F90; } // 801D6F44
  c->r[3]=c->r[1]+0x000000A4u; // 801D6F48
  c->r[4]=0u+0x00000006u; // 801D6F4C
  c->r[5]=0u+0x00000000u; // 801D6F50
  c->lr=0x801D6F58u; f_8014763C(c); // 801D6F54
  c->r[0]=0u+0x00000006u; // 801D6F58
  c->r[5]=c->r[1]+0x000000A0u; // 801D6F5C
  c->r[4]=c->r[1]+0x00000070u; // 801D6F60
  c->ctr=c->r[0]; // 801D6F64
L_801D6F68:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D6F68
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D6F6C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D6F70
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D6F74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6F68; } // 801D6F78
  c->r[12]=R32(c->r[1]+0x000000D4u); // 801D6F7C
  c->r[3]=c->r[1]+0x000000A4u; // 801D6F80
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D6F84
  c->ctr=c->r[12]; // 801D6F88
  if (true) { c->lr=0x801D6F90u; dispatch(c,c->ctr); } // 801D6F8C
L_801D6F90:;
  c->r[0]=R32(c->r[1]+0x00000104u); // 801D6F90
  c->r[31]=R32(c->r[1]+0x000000FCu); // 801D6F94
  c->lr=c->r[0]; // 801D6F98
  c->r[1]=c->r[1]+0x00000100u; // 801D6F9C
  return; // 801D6FA0
}

// fn_801D6FA4
void f_801D6FA4(Ctx* __restrict c) {
  trace_call(0x801D6FA4u);
  return; // 801D6FA4
}

// fn_801D6FA8
void f_801D6FA8(Ctx* __restrict c) {
  trace_call(0x801D6FA8u);
  c->r[3]=R32(c->r[3]+0x00000974u); // 801D6FA8
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6FAC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D6FB0
  f_80165B9C(c); return; // 801D6FB4
}

// fn_801D6FB8
void f_801D6FB8(Ctx* __restrict c) {
  trace_call(0x801D6FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6FB8
  c->r[0]=c->lr; // 801D6FBC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801D6FC0
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 801D6FC4
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 801D6FC8
  c->r[0]=0u+0x00000000u; // 801D6FCC
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6FD0
  c->r[4]=0u+0x00000001u; // 801D6FD4
  W32(c->r[1]+0x000000CCu,c->r[31]); // 801D6FD8
  c->r[31]=c->r[3]|c->r[3]; // 801D6FDC
  W32(c->r[1]+0x000000C8u,c->r[30]); // 801D6FE0
  W8(c->r[3]+0x00001F2Cu,c->r[0]); // 801D6FE4
  c->r[3]=c->r[3]+0x00001F24u; // 801D6FE8
  c->lr=0x801D6FF0u; f_801AC204(c); // 801D6FEC
  c->r[3]=0u+0x80440000u; // 801D6FF0
  c->r[3]=c->r[3]+0xFFFFA720u; // 801D6FF4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D6FF8
  c->lr=0x801D7000u; f_80381A54(c); // 801D6FFC
  cmps(c,0,(int32_t)c->r[3],0); // 801D7000
  c->r[30]=c->r[3]|c->r[3]; // 801D7004
  if (!crb(c,2)) { goto L_801D7028; } // 801D7008
  c->r[3]=0u+0x803F0000u; // 801D700C
  c->r[5]=0u+0x803F0000u; // 801D7010
  c->r[3]=c->r[3]+0x00001C00u; // 801D7014
  c->r[4]=0u+0x0000008Cu; // 801D7018
  c->r[5]=c->r[5]+0x00001BD8u; // 801D701C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7020
  c->lr=0x801D7028u; f_803444BC(c); // 801D7024
L_801D7028:;
  c->r[0]=0u+0x00000006u; // 801D7028
  c->r[5]=c->r[1]+0x00000094u; // 801D702C
  c->r[4]=c->r[30]+0xFFFFFFFCu; // 801D7030
  c->ctr=c->r[0]; // 801D7034
L_801D7038:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D7038
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D703C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801D7040
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801D7044
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D7038; } // 801D7048
  c->lr=0x801D7050u; f_80061A4C(c); // 801D704C
  c->r[30]=c->r[3]|c->r[3]; // 801D7050
  c->lr=0x801D7058u; f_80061A4C(c); // 801D7054
  c->r[4]=c->r[3]|c->r[3]; // 801D7058
  c->r[3]=c->r[1]+0x0000005Cu; // 801D705C
  c->r[4]=c->r[4]+0x00000390u; // 801D7060
  c->r[5]=c->r[30]+0x00000384u; // 801D7064
  c->lr=0x801D706Cu; f_8007B8A4(c); // 801D7068
  c->r[3]=c->r[1]+0x0000005Cu; // 801D706C
  c->r[4]=c->r[1]+0x0000008Cu; // 801D7070
  c->lr=0x801D7078u; f_80265750(c); // 801D7074
  c->r[30]=c->r[1]+0x00000050u; // 801D7078
  {uint32_t ea=c->r[2]+0xFFFFBD80u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D707C
  {uint32_t ea=c->r[1]+0x0000008Cu; psq_load(c,1,ea,0,0);} // 801D7080
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801D7084
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,1,ea,0,0);} // 801D7088
  {uint32_t ea=c->r[1]+0x00000094u; psq_load(c,1,ea,1,0);} // 801D708C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801D7090
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,1,ea,1,0);} // 801D7094
  c->lr=0x801D709Cu; f_80061A4C(c); // 801D7098
  c->r[4]=c->r[3]|c->r[3]; // 801D709C
  c->r[5]=c->r[30]|c->r[30]; // 801D70A0
  c->r[3]=c->r[1]+0x00000080u; // 801D70A4
  c->r[4]=c->r[4]+0x00000384u; // 801D70A8
  c->lr=0x801D70B0u; f_801011E8(c); // 801D70AC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D70B0
  c->r[3]=c->r[1]+0x00000038u; // 801D70B4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D70B8
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D70BC
  c->lr=0x801D70C4u; f_800521A0(c); // 801D70C0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D70C4
  c->r[3]=c->r[1]+0x00000044u; // 801D70C8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801D70CC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D70D0
  c->f[1]=-c->f[1]; // 801D70D4
  c->f[2]=-c->f[2]; // 801D70D8
  c->f[3]=-c->f[0]; // 801D70DC
  c->lr=0x801D70E4u; f_800521A0(c); // 801D70E0
  c->r[3]=c->r[1]+0x00000074u; // 801D70E4
  c->r[4]=c->r[1]+0x00000044u; // 801D70E8
  c->r[5]=c->r[1]+0x00000080u; // 801D70EC
  c->lr=0x801D70F4u; f_801011E8(c); // 801D70F0
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D70F4
  c->r[3]=c->r[1]+0x0000002Cu; // 801D70F8
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D70FC
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801D7100
  c->lr=0x801D7108u; f_800521A0(c); // 801D7104
  c->r[3]=c->r[1]+0x00000068u; // 801D7108
  c->r[4]=c->r[1]+0x0000002Cu; // 801D710C
  c->r[5]=c->r[1]+0x00000080u; // 801D7110
  c->lr=0x801D7118u; f_801011E8(c); // 801D7114
  c->r[30]=0u+0x00000000u; // 801D7118
  W32(c->r[31]+0x000020C4u,c->r[30]); // 801D711C
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801D7120
  c->lr=0x801D7128u; f_80067C50(c); // 801D7124
  cmps(c,0,(int32_t)c->r[3],1); // 801D7128
  if (!crb(c,2)) { goto L_801D71BC; } // 801D712C
  c->r[3]=c->r[13]+0xFFFF94B8u; // 801D7130
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D7134
  c->lr=0x801D713Cu; f_80067C50(c); // 801D7138
  cmps(c,0,(int32_t)c->r[3],1); // 801D713C
  if (!crb(c,2)) { goto L_801D71BC; } // 801D7140
  c->r[3]=c->r[1]+0x00000014u; // 801D7144
  c->r[4]=c->r[1]+0x00000068u; // 801D7148
  c->r[5]=c->r[31]+0x00001F64u; // 801D714C
  c->lr=0x801D7154u; f_8007B8A4(c); // 801D7150
  c->r[3]=c->r[1]+0x00000014u; // 801D7154
  c->lr=0x801D715Cu; f_802657AC(c); // 801D7158
  c->f[31]=c->f[1]; // 801D715C
  c->r[3]=c->r[1]+0x00000020u; // 801D7160
  c->r[4]=c->r[1]+0x00000074u; // 801D7164
  c->r[5]=c->r[31]+0x00001F64u; // 801D7168
  c->lr=0x801D7170u; f_8007B8A4(c); // 801D716C
  c->r[3]=c->r[1]+0x00000020u; // 801D7170
  c->lr=0x801D7178u; f_802657AC(c); // 801D7174
  fcmp(c,0,c->f[1],c->f[31]); // 801D7178
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801D717C
  if (!crb(c,2)) { goto L_801D7198; } // 801D7180
  c->r[3]=c->r[31]+0x000020C8u; // 801D7184
  c->r[4]=c->r[1]+0x00000074u; // 801D7188
  c->lr=0x801D7190u; f_8003F468(c); // 801D718C
  W32(c->r[31]+0x000020C4u,c->r[30]); // 801D7190
  goto L_801D71AC; // 801D7194
L_801D7198:;
  c->r[3]=c->r[31]+0x000020C8u; // 801D7198
  c->r[4]=c->r[1]+0x00000068u; // 801D719C
  c->lr=0x801D71A4u; f_8003F468(c); // 801D71A0
  c->r[0]=0u+0x00000001u; // 801D71A4
  W32(c->r[31]+0x000020C4u,c->r[0]); // 801D71A8
L_801D71AC:;
  c->r[3]=c->r[31]+0x000020C8u; // 801D71AC
  c->r[4]=c->r[1]+0x00000080u; // 801D71B0
  c->lr=0x801D71B8u; f_8003F468(c); // 801D71B4
  goto L_801D720C; // 801D71B8
L_801D71BC:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801D71BC
  c->lr=0x801D71C4u; f_80067C50(c); // 801D71C0
  cmps(c,0,(int32_t)c->r[3],1); // 801D71C4
  if (!crb(c,2)) { goto L_801D71E4; } // 801D71C8
  c->r[3]=c->r[31]+0x000020C8u; // 801D71CC
  c->r[4]=c->r[1]+0x00000080u; // 801D71D0
  c->lr=0x801D71D8u; f_8003F468(c); // 801D71D4
  c->r[0]=0u+0x00000000u; // 801D71D8
  W32(c->r[31]+0x000020C4u,c->r[0]); // 801D71DC
  goto L_801D720C; // 801D71E0
L_801D71E4:;
  c->r[3]=c->r[13]+0xFFFF94B8u; // 801D71E4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D71E8
  c->lr=0x801D71F0u; f_80067C50(c); // 801D71EC
  cmps(c,0,(int32_t)c->r[3],1); // 801D71F0
  if (!crb(c,2)) { goto L_801D720C; } // 801D71F4
  c->r[3]=c->r[31]+0x000020C8u; // 801D71F8
  c->r[4]=c->r[1]+0x00000080u; // 801D71FC
  c->lr=0x801D7204u; f_8003F468(c); // 801D7200
  c->r[0]=0u+0x00000001u; // 801D7204
  W32(c->r[31]+0x000020C4u,c->r[0]); // 801D7208
L_801D720C:;
  c->r[3]=c->r[1]+0x00000008u; // 801D720C
  c->r[4]=c->r[31]+0x000020C8u; // 801D7210
  c->lr=0x801D7218u; f_8003F484(c); // 801D7214
  c->r[4]=c->r[3]|c->r[3]; // 801D7218
  c->r[3]=c->r[31]+0x00001F24u; // 801D721C
  c->lr=0x801D7224u; f_801AC11C(c); // 801D7220
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7224
  c->r[3]=c->r[31]+0x00001F24u; // 801D7228
  {uint32_t ea=c->r[31]+0x00001F70u; WF32(ea,c->f[0]);} // 801D722C
  c->lr=0x801D7234u; f_801AC25C(c); // 801D7230
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D7234
  c->r[3]=c->r[31]+0x000008D0u; // 801D7238
  c->r[4]=c->r[31]+0x00001F34u; // 801D723C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801D7240
  c->ctr=c->r[12]; // 801D7244
  if (true) { c->lr=0x801D724Cu; dispatch(c,c->ctr); } // 801D7248
  c->r[4]=0u+0x803E0000u; // 801D724C
  c->r[3]=c->r[31]+0x000008ECu; // 801D7250
  c->r[4]=c->r[4]+0x00000F90u; // 801D7254
  c->r[4]=c->r[4]+0x00000048u; // 801D7258
  c->lr=0x801D7260u; f_80075440(c); // 801D725C
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7260
  c->r[5]=c->r[3]|c->r[3]; // 801D7264
  c->r[3]=c->r[31]+0x00000C88u; // 801D7268
  c->r[4]=c->r[31]+0x000008ECu; // 801D726C
  c->f[2]=c->f[1]; // 801D7270
  c->r[6]=0u+0x00000000u; // 801D7274
  c->r[7]=0u+0x00000000u; // 801D7278
  c->lr=0x801D7280u; f_800BB0C8(c); // 801D727C
  c->r[3]=c->r[31]+0x000020E4u; // 801D7280
  c->r[4]=c->r[31]+0x00001F64u; // 801D7284
  c->lr=0x801D728Cu; f_8003F468(c); // 801D7288
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 801D728C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801D7290
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 801D7294
  c->r[31]=R32(c->r[1]+0x000000CCu); // 801D7298
  c->r[30]=R32(c->r[1]+0x000000C8u); // 801D729C
  c->lr=c->r[0]; // 801D72A0
  c->r[1]=c->r[1]+0x000000E0u; // 801D72A4
  return; // 801D72A8
}

// fn_801D72AC
void f_801D72AC(Ctx* __restrict c) {
  trace_call(0x801D72ACu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D72AC
  c->r[0]=c->lr; // 801D72B0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801D72B4
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 801D72B8
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 801D72BC
  c->r[11]=c->r[1]+0x000000E0u; // 801D72C0
  c->lr=0x801D72C8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D72C4
  c->r[31]=c->r[1]|c->r[1]; // 801D72C8
  c->r[4]=R32(c->r[3]+0x00000974u); // 801D72CC
  c->r[29]=0u+0x803E0000u; // 801D72D0
  c->r[30]=c->r[3]|c->r[3]; // 801D72D4
  c->r[3]=c->r[3]+0x000008ECu; // 801D72D8
  c->r[5]=R32(c->r[4]+0x00000000u); // 801D72DC
  c->r[29]=c->r[29]+0x00000F90u; // 801D72E0
  c->r[4]=c->r[29]+0x00000048u; // 801D72E4
  c->r[28]=R32(c->r[5]+0x00000018u); // 801D72E8
  c->lr=0x801D72F0u; f_80075440(c); // 801D72EC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801D72F0
  if (!crb(c,2)) { goto L_801D7368; } // 801D72F4
  c->r[3]=R32(c->r[30]+0x00000974u); // 801D72F8
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D72FC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D7300
  c->lr=0x801D7308u; f_8016498C(c); // 801D7304
  cmps(c,0,(int32_t)c->r[3],0); // 801D7308
  if (crb(c,2)) { goto L_801D7604; } // 801D730C
  c->r[3]=c->r[30]+0x000008ECu; // 801D7310
  c->r[4]=c->r[29]+0x00000051u; // 801D7314
  c->lr=0x801D731Cu; f_80075440(c); // 801D7318
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D731C
  c->r[5]=c->r[3]|c->r[3]; // 801D7320
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7324
  c->r[3]=c->r[30]+0x00000C88u; // 801D7328
  c->r[4]=c->r[30]+0x000008ECu; // 801D732C
  c->r[6]=0u+0x00000000u; // 801D7330
  c->r[7]=0u+0x00000000u; // 801D7334
  c->lr=0x801D733Cu; f_800BB0C8(c); // 801D7338
  c->r[0]=0u+0x00000000u; // 801D733C
  c->r[3]=c->r[31]+0x0000003Cu; // 801D7340
  W32(c->r[30]+0x00001F24u,c->r[0]); // 801D7344
  c->r[4]=c->r[30]+0x000020C8u; // 801D7348
  c->lr=0x801D7350u; f_8003F484(c); // 801D734C
  {uint32_t ea=c->r[2]+0xFFFFBD84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7350
  c->r[4]=c->r[3]|c->r[3]; // 801D7354
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7358
  c->r[3]=c->r[30]+0x00001F24u; // 801D735C
  c->lr=0x801D7364u; f_801AC518(c); // 801D7360
  goto L_801D7604; // 801D7364
L_801D7368:;
  c->r[5]=R32(c->r[30]+0x00000974u); // 801D7368
  c->r[3]=c->r[30]+0x000008ECu; // 801D736C
  c->r[4]=c->r[29]+0x00000051u; // 801D7370
  c->r[5]=R32(c->r[5]+0x00000000u); // 801D7374
  c->r[28]=R32(c->r[5]+0x00000018u); // 801D7378
  c->lr=0x801D7380u; f_80075440(c); // 801D737C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801D7380
  if (!crb(c,2)) { goto L_801D7604; } // 801D7384
  c->r[0]=R32(c->r[30]+0x00001F24u); // 801D7388
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801D738C
  if (!crb(c,2)) { goto L_801D7604; } // 801D7390
  {uint32_t ea=c->r[30]+0x00001F18u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7394
  c->r[29]=0u+0x00000000u; // 801D7398
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D739C
  c->r[3]=c->r[31]+0x000000A8u; // 801D73A0
  W32(c->r[31]+0x00000020u,c->r[29]); // 801D73A4
  c->r[4]=c->r[31]+0x00000018u; // 801D73A8
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 801D73AC
  c->r[5]=0u+0x00000000u; // 801D73B0
  W32(c->r[31]+0x00000024u,c->r[29]); // 801D73B4
  W32(c->r[31]+0x00000018u,c->r[29]); // 801D73B8
  W32(c->r[31]+0x0000001Cu,c->r[29]); // 801D73BC
  c->lr=0x801D73C4u; f_80068BE0(c); // 801D73C0
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D73C4
  c->r[4]=0u+0x803F0000u; // 801D73C8
  c->r[4]=c->r[4]+0x00007644u; // 801D73CC
  c->r[3]=c->r[31]+0x000000B8u; // 801D73D0
  c->f[2]=c->f[1]; // 801D73D4
  W32(c->r[31]+0x000000A8u,c->r[4]); // 801D73D8
  c->f[3]=c->f[1]; // 801D73DC
  c->lr=0x801D73E4u; f_80065358(c); // 801D73E0
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[31]);} // 801D73E4
  c->r[3]=c->r[13]+0xFFFF94B8u; // 801D73E8
  c->r[28]=0u+0x00000000u; // 801D73EC
  W32(c->r[31]+0x000000C8u,c->r[29]); // 801D73F0
  c->r[0]=R32(c->r[30]+0x000020C4u); // 801D73F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D73F8
  c->r[4]=R32(c->r[3]+c->r[0]); // 801D73FC
  c->r[3]=R32(c->r[4]+0x00000000u); // 801D7400
  c->r[0]=R32(c->r[4]+0x00000004u); // 801D7404
  cmps(c,0,(int32_t)c->r[3],0); // 801D7408
  W32(c->r[31]+0x00000028u,c->r[3]); // 801D740C
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801D7410
  if (crb(c,2)) { goto L_801D743C; } // 801D7414
  c->lr=0x801D741Cu; f_8003F2FC(c); // 801D7418
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801D741C
  c->r[4]=R32(c->r[31]+0x00000028u); // 801D7420
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D7424
  c->r[3]=c->r[3]+c->r[0]; // 801D7428
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D742C
  cmpu(c,0,c->r[4],c->r[0]); // 801D7430
  if (!crb(c,2)) { goto L_801D743C; } // 801D7434
  c->r[28]=0u+0x00000001u; // 801D7438
L_801D743C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D743C
  if (crb(c,2)) { goto L_801D751C; } // 801D7440
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 801D7444
  c->lr=0x801D744Cu; f_802A6EE4(c); // 801D7448
  cmps(c,0,(int32_t)c->r[3],0); // 801D744C
  c->r[28]=c->r[3]|c->r[3]; // 801D7450
  if (crb(c,2)) { goto L_801D751C; } // 801D7454
  if (crb(c,2)) { goto L_801D74AC; } // 801D7458
  c->r[29]=0u+0x00000000u; // 801D745C
  W32(c->r[31]+0x0000008Cu,c->r[1]); // 801D7460
  c->r[4]=c->r[31]+0x00000010u; // 801D7464
  c->r[5]=0u+0x00000000u; // 801D7468
  W32(c->r[31]+0x00000008u,c->r[29]); // 801D746C
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 801D7470
  W32(c->r[31]+0x00000010u,c->r[29]); // 801D7474
  W32(c->r[31]+0x00000014u,c->r[29]); // 801D7478
  c->lr=0x801D7480u; f_80068BE0(c); // 801D747C
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7480
  c->r[4]=0u+0x803F0000u; // 801D7484
  c->r[4]=c->r[4]+0x00007644u; // 801D7488
  c->r[3]=c->r[28]+0x00000010u; // 801D748C
  c->f[2]=c->f[1]; // 801D7490
  W32(c->r[28]+0x00000000u,c->r[4]); // 801D7494
  c->f[3]=c->f[1]; // 801D7498
  c->lr=0x801D74A0u; f_80065358(c); // 801D749C
  {uint32_t ea=c->r[2]+0xFFFFBD28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D74A0
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D74A4
  W32(c->r[28]+0x00000020u,c->r[29]); // 801D74A8
L_801D74AC:;
  c->r[5]=R32(c->r[31]+0x000000ACu); // 801D74AC
  c->r[3]=c->r[28]+0x00000010u; // 801D74B0
  c->r[0]=R32(c->r[31]+0x000000B0u); // 801D74B4
  c->r[4]=c->r[31]+0x000000B8u; // 801D74B8
  W32(c->r[28]+0x00000004u,c->r[5]); // 801D74BC
  W32(c->r[28]+0x00000008u,c->r[0]); // 801D74C0
  c->r[0]=R32(c->r[31]+0x000000B4u); // 801D74C4
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801D74C8
  c->lr=0x801D74D0u; f_8003F468(c); // 801D74CC
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D74D0
  c->r[29]=addc(c,c->r[28],0x00000024u,0); cr0(c,c->r[29]); // 801D74D4
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D74D8
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801D74DC
  W32(c->r[28]+0x00000020u,c->r[0]); // 801D74E0
  if (crb(c,2)) { goto L_801D74FC; } // 801D74E4
  c->r[0]=0u+0x00000000u; // 801D74E8
  W32(c->r[31]+0x000000A4u,c->r[1]); // 801D74EC
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D74F0
  W32(c->r[29]+0x00000004u,c->r[0]); // 801D74F4
  W32(c->r[29]+0x00000008u,c->r[28]); // 801D74F8
L_801D74FC:;
  c->lr=0x801D7500u; f_8003F2FC(c); // 801D74FC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801D7500
  c->r[4]=c->r[29]|c->r[29]; // 801D7504
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D7508
  c->r[3]=c->r[3]+c->r[0]; // 801D750C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801D7510
  c->r[3]=c->r[3]+0x00000030u; // 801D7514
  c->lr=0x801D751Cu; f_8003FD14(c); // 801D7518
L_801D751C:;
  c->r[5]=R32(c->r[30]+0x00001F64u); // 801D751C
  c->r[4]=0u+0x803E0000u; // 801D7520
  c->r[0]=R32(c->r[30]+0x00001F68u); // 801D7524
  c->r[4]=c->r[4]+0x00000F90u; // 801D7528
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D752C
  c->r[3]=c->r[30]+0x00000800u; // 801D7530
  W32(c->r[31]+0x00000030u,c->r[5]); // 801D7534
  c->r[4]=c->r[4]+0x00000054u; // 801D7538
  c->f[2]=c->f[1]; // 801D753C
  c->r[5]=c->r[31]+0x00000030u; // 801D7540
  W32(c->r[31]+0x00000034u,c->r[0]); // 801D7544
  c->r[6]=0u+0x00000001u; // 801D7548
  c->r[0]=R32(c->r[30]+0x00001F6Cu); // 801D754C
  W32(c->r[31]+0x00000038u,c->r[0]); // 801D7550
  c->lr=0x801D7558u; f_800C1BA0(c); // 801D7554
  c->r[0]=R32(c->r[30]+0x00001F28u); // 801D7558
  c->r[3]=R32(c->r[30]+0x00000054u); // 801D755C
  c->r[0]=c->r[0]|0x00000001u; // 801D7560
  cmps(c,0,(int32_t)c->r[3],0); // 801D7564
  W32(c->r[30]+0x00001F28u,c->r[0]); // 801D7568
  if (crb(c,2)) { goto L_801D75BC; } // 801D756C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D7570
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D7574
  c->ctr=c->r[12]; // 801D7578
  if (true) { c->lr=0x801D7580u; dispatch(c,c->ctr); } // 801D757C
  c->lr=0x801D7584u; f_8007A658(c); // 801D7580
  c->r[29]=c->r[3]|c->r[3]; // 801D7584
  c->r[3]=0u+0x00000014u; // 801D7588
  c->lr=0x801D7590u; f_8007A658(c); // 801D758C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801D7590
  if (!crb(c,1)) { goto L_801D75B4; } // 801D7594
  c->r[28]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[28]); // 801D7598
  if (crb(c,2)) { goto L_801D75AC; } // 801D759C
  W32(c->r[31]+0x00000074u,c->r[1]); // 801D75A0
  c->r[3]=c->r[28]|c->r[28]; // 801D75A4
  c->lr=0x801D75ACu; f_800B5668(c); // 801D75A8
L_801D75AC:;
  W32(c->r[30]+0x00000058u,c->r[28]); // 801D75AC
  goto L_801D75F4; // 801D75B0
L_801D75B4:;
  c->r[0]=0u+0x00000000u; // 801D75B4
  W32(c->r[30]+0x00000054u,c->r[0]); // 801D75B8
L_801D75BC:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801D75BC
  c->r[0]=c->r[3]+0x00000001u; // 801D75C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D75C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801D75C8
  c->r[0]=c->r[0]^c->r[3]; // 801D75CC
  c->r[0]=c->r[0]-c->r[3]; // 801D75D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801D75D4
  c->r[0]=c->r[30]+c->r[0]; // 801D75D8
  c->r[28]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[28]); // 801D75DC
  if (crb(c,2)) { goto L_801D75F0; } // 801D75E0
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 801D75E4
  c->r[3]=c->r[28]|c->r[28]; // 801D75E8
  c->lr=0x801D75F0u; f_800B5668(c); // 801D75EC
L_801D75F0:;
  W32(c->r[30]+0x00000054u,c->r[28]); // 801D75F0
L_801D75F4:;
  {uint32_t ea=c->r[2]+0xFFFFBD28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D75F4
  c->r[0]=0u+0x00000001u; // 801D75F8
  W8(c->r[30]+0x000020E0u,c->r[0]); // 801D75FC
  {uint32_t ea=c->r[30]+0x000020DCu; WF32(ea,c->f[0]);} // 801D7600
L_801D7604:;
  c->r[10]=c->r[31]|c->r[31]; // 801D7604
  {uint32_t ea=c->r[10]+0x000000E8u; psq_load(c,31,ea,0,0);} // 801D7608
  c->r[11]=c->r[10]+0x000000E0u; // 801D760C
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[31]=RF64(ea);} // 801D7610
  c->lr=0x801D7618u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7614
  c->r[10]=R32(c->r[1]+0x00000000u); // 801D7618
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D761C
  c->r[1]=c->r[10]|c->r[10]; // 801D7620
  c->lr=c->r[0]; // 801D7624
  return; // 801D7628
}

// fn_801D762C
void f_801D762C(Ctx* __restrict c) {
  trace_call(0x801D762Cu);
  return; // 801D762C
}

// fn_801D7630
void f_801D7630(Ctx* __restrict c) {
  trace_call(0x801D7630u);
  c->r[0]=0u+0x00000001u; // 801D7630
  {uint32_t ea=c->r[2]+0xFFFFBD30u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7634
  W8(c->r[3]+0x00001F2Cu,c->r[0]); // 801D7638
  c->r[4]=0u+0x00000001u; // 801D763C
  c->r[3]=c->r[3]+0x00001F24u; // 801D7640
  f_801AC204(c); return; // 801D7644
}

// fn_801D7648
void f_801D7648(Ctx* __restrict c) {
  trace_call(0x801D7648u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7648
  c->r[0]=c->lr; // 801D764C
  c->r[4]=0u+0x803E0000u; // 801D7650
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D7654
  c->r[4]=c->r[4]+0x00000F90u; // 801D7658
  c->r[4]=c->r[4]+0x0000003Fu; // 801D765C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D7660
  c->r[31]=c->r[3]|c->r[3]; // 801D7664
  c->r[3]=c->r[3]+0x000008ECu; // 801D7668
  c->lr=0x801D7670u; f_80075440(c); // 801D766C
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7670
  c->r[5]=c->r[3]|c->r[3]; // 801D7674
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7678
  c->r[3]=c->r[31]+0x00000C88u; // 801D767C
  c->r[4]=c->r[31]+0x000008ECu; // 801D7680
  c->r[6]=0u+0x00000000u; // 801D7684
  c->r[7]=0u+0x00000000u; // 801D7688
  c->lr=0x801D7690u; f_800BB0C8(c); // 801D768C
  c->r[3]=c->r[1]+0x00000014u; // 801D7690
  c->r[4]=c->r[31]+0x000020E4u; // 801D7694
  c->lr=0x801D769Cu; f_8003F484(c); // 801D7698
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D769C
  c->r[3]=c->r[1]+0x00000008u; // 801D76A0
  {uint32_t ea=c->r[2]+0xFFFFBD5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D76A4
  c->r[4]=c->r[1]+0x00000014u; // 801D76A8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D76AC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D76B0
  c->lr=0x801D76B8u; f_8003F484(c); // 801D76B4
  {uint32_t ea=c->r[2]+0xFFFFBD88u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D76B8
  c->r[4]=c->r[3]|c->r[3]; // 801D76BC
  {uint32_t ea=c->r[2]+0xFFFFBD34u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D76C0
  c->r[3]=c->r[31]+0x00001F24u; // 801D76C4
  c->lr=0x801D76CCu; f_801AC448(c); // 801D76C8
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D76CC
  c->r[3]=c->r[31]+0x00001F24u; // 801D76D0
  {uint32_t ea=c->r[2]+0xFFFFBD28u; c->f[4]=c->ps1[4]=RF32(ea);} // 801D76D4
  c->f[2]=c->f[1]; // 801D76D8
  c->f[3]=c->f[1]; // 801D76DC
  c->lr=0x801D76E4u; f_801AC6C4(c); // 801D76E0
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D76E4
  {uint32_t ea=c->r[31]+0x000020D4u; WF32(ea,c->f[0]);} // 801D76E8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D76EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D76F0
  c->lr=c->r[0]; // 801D76F4
  c->r[1]=c->r[1]+0x00000030u; // 801D76F8
  return; // 801D76FC
}

// fn_801D7700
void f_801D7700(Ctx* __restrict c) {
  trace_call(0x801D7700u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7700
  c->r[0]=c->lr; // 801D7704
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D7708
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D770C
  c->r[31]=c->r[3]|c->r[3]; // 801D7710
  c->r[3]=c->r[1]+0x00000008u; // 801D7714
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D7718
  c->r[4]=c->r[31]+0x000008D0u; // 801D771C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D7720
  c->ctr=c->r[12]; // 801D7724
  if (true) { c->lr=0x801D772Cu; dispatch(c,c->ctr); } // 801D7728
  c->r[3]=c->r[31]+0x00001F24u; // 801D772C
  c->r[4]=c->r[1]+0x00000008u; // 801D7730
  c->lr=0x801D7738u; f_801ABF6C(c); // 801D7734
  c->r[0]=R32(c->r[31]+0x00002094u); // 801D7738
  cmps(c,0,(int32_t)c->r[0],0); // 801D773C
  if (crb(c,2)) { goto L_801D7754; } // 801D7740
  c->r[0]=0u+0x00000000u; // 801D7744
  c->r[3]=c->r[31]|c->r[31]; // 801D7748
  W32(c->r[31]+0x00001F24u,c->r[0]); // 801D774C
  c->lr=0x801D7754u; f_800AC7C4(c); // 801D7750
L_801D7754:;
  c->r[3]=0u+0x804D0000u; // 801D7754
  {uint32_t ea=c->r[31]+0x000020D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7758
  c->r[3]=c->r[3]+0x00003318u; // 801D775C
  {uint32_t ea=c->r[2]+0xFFFFBD8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7760
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7764
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801D7768
  fcmp(c,0,c->f[1],c->f[0]); // 801D776C
  {uint32_t ea=c->r[31]+0x000020D4u; WF32(ea,c->f[1]);} // 801D7770
  if (!crb(c,1)) { goto L_801D7780; } // 801D7774
  c->r[3]=c->r[31]|c->r[31]; // 801D7778
  c->lr=0x801D7780u; f_800ACB54(c); // 801D777C
L_801D7780:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D7780
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D7784
  c->lr=c->r[0]; // 801D7788
  c->r[1]=c->r[1]+0x00000040u; // 801D778C
  return; // 801D7790
}

// fn_801D7794
void f_801D7794(Ctx* __restrict c) {
  trace_call(0x801D7794u);
  return; // 801D7794
}

// fn_801D7798
void f_801D7798(Ctx* __restrict c) {
  trace_call(0x801D7798u);
  c->r[0]=0u+0x00000000u; // 801D7798
  W32(c->r[3]+0x00001F24u,c->r[0]); // 801D779C
  return; // 801D77A0
}

// fn_801D77A4
void f_801D77A4(Ctx* __restrict c) {
  trace_call(0x801D77A4u);
  return; // 801D77A4
}

// fn_801D77A8
void f_801D77A8(Ctx* __restrict c) {
  trace_call(0x801D77A8u);
  return; // 801D77A8
}

// fn_801D77AC
void f_801D77AC(Ctx* __restrict c) {
  trace_call(0x801D77ACu);
  return; // 801D77AC
}

// fn_801D77B0
void f_801D77B0(Ctx* __restrict c) {
  trace_call(0x801D77B0u);
  return; // 801D77B0
}

// fn_801D77B4
void f_801D77B4(Ctx* __restrict c) {
  trace_call(0x801D77B4u);
  return; // 801D77B4
}

// fn_801D77B8
void f_801D77B8(Ctx* __restrict c) {
  trace_call(0x801D77B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D77B8
  c->r[0]=c->lr; // 801D77BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D77C0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D77C4
  c->r[31]=c->r[3]|c->r[3]; // 801D77C8
  c->r[3]=c->r[1]+0x00000008u; // 801D77CC
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801D77D0
  c->r[4]=c->r[31]+0x000008D0u; // 801D77D4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D77D8
  c->ctr=c->r[12]; // 801D77DC
  if (true) { c->lr=0x801D77E4u; dispatch(c,c->ctr); } // 801D77E0
  c->r[3]=c->r[31]+0x00001F24u; // 801D77E4
  c->r[4]=c->r[1]+0x00000008u; // 801D77E8
  c->lr=0x801D77F0u; f_801ABF6C(c); // 801D77EC
  c->r[3]=R32(c->r[31]+0x00000974u); // 801D77F0
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D77F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D77F8
  c->lr=0x801D7800u; f_8016498C(c); // 801D77FC
  cmps(c,0,(int32_t)c->r[3],0); // 801D7800
  if (crb(c,2)) { goto L_801D7810; } // 801D7804
  c->r[3]=c->r[31]|c->r[31]; // 801D7808
  c->lr=0x801D7810u; f_800ACB54(c); // 801D780C
L_801D7810:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D7810
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D7814
  c->lr=c->r[0]; // 801D7818
  c->r[1]=c->r[1]+0x00000040u; // 801D781C
  return; // 801D7820
}

// fn_801D7824
void f_801D7824(Ctx* __restrict c) {
  trace_call(0x801D7824u);
  return; // 801D7824
}

// fn_801D7828
void f_801D7828(Ctx* __restrict c) {
  trace_call(0x801D7828u);
  return; // 801D7828
}

// fn_801D782C
void f_801D782C(Ctx* __restrict c) {
  trace_call(0x801D782Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D782C
  c->r[0]=c->lr; // 801D7830
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7834
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D7838
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D783C
  c->r[31]=c->r[3]|c->r[3]; // 801D7840
  c->r[0]=R32(c->r[3]+0x00002094u); // 801D7844
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[0]);} // 801D7848
  cmps(c,0,(int32_t)c->r[0],0); // 801D784C
  if (!crb(c,2)) { goto L_801D7890; } // 801D7850
  c->r[3]=c->r[1]+0x00000014u; // 801D7854
  c->r[4]=c->r[31]+0x00001F64u; // 801D7858
  c->lr=0x801D7860u; f_8003F484(c); // 801D785C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D7860
  c->r[3]=c->r[1]+0x00000008u; // 801D7864
  {uint32_t ea=c->r[2]+0xFFFFBD5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D7868
  c->r[4]=c->r[1]+0x00000014u; // 801D786C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801D7870
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801D7874
  c->lr=0x801D787Cu; f_8003F484(c); // 801D7878
  {uint32_t ea=c->r[2]+0xFFFFBD68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D787C
  c->r[4]=c->r[3]|c->r[3]; // 801D7880
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7884
  c->r[3]=c->r[31]+0x00001F24u; // 801D7888
  c->lr=0x801D7890u; f_801AC448(c); // 801D788C
L_801D7890:;
  c->r[0]=R32(c->r[31]+0x00002094u); // 801D7890
  cmpu(c,0,c->r[0],0x00000005u); // 801D7894
  if (!crb(c,2)) { goto L_801D78D4; } // 801D7898
  c->r[4]=0u+0x803E0000u; // 801D789C
  c->r[3]=c->r[31]+0x000008ECu; // 801D78A0
  c->r[4]=c->r[4]+0x00000F90u; // 801D78A4
  c->r[4]=c->r[4]+0x0000005Bu; // 801D78A8
  c->lr=0x801D78B0u; f_80075440(c); // 801D78AC
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D78B0
  c->r[5]=c->r[3]|c->r[3]; // 801D78B4
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D78B8
  c->r[3]=c->r[31]+0x00000C88u; // 801D78BC
  c->r[4]=c->r[31]+0x000008ECu; // 801D78C0
  c->r[6]=0u+0x00000000u; // 801D78C4
  c->r[7]=0u+0x00000000u; // 801D78C8
  c->lr=0x801D78D0u; f_800BB0C8(c); // 801D78CC
  goto L_801D7908; // 801D78D0
L_801D78D4:;
  c->r[4]=0u+0x803E0000u; // 801D78D4
  c->r[3]=c->r[31]+0x000008ECu; // 801D78D8
  c->r[4]=c->r[4]+0x00000F90u; // 801D78DC
  c->r[4]=c->r[4]+0x00000066u; // 801D78E0
  c->lr=0x801D78E8u; f_80075440(c); // 801D78E4
  {uint32_t ea=c->r[2]+0xFFFFBD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801D78E8
  c->r[5]=c->r[3]|c->r[3]; // 801D78EC
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D78F0
  c->r[3]=c->r[31]+0x00000C88u; // 801D78F4
  c->r[4]=c->r[31]+0x000008ECu; // 801D78F8
  c->r[6]=0u+0x00000000u; // 801D78FC
  c->r[7]=0u+0x00000000u; // 801D7900
  c->lr=0x801D7908u; f_800BB0C8(c); // 801D7904
L_801D7908:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7908
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D790C
  c->lr=c->r[0]; // 801D7910
  c->r[1]=c->r[1]+0x00000030u; // 801D7914
  return; // 801D7918
}

// fn_801D791C
void f_801D791C(Ctx* __restrict c) {
  trace_call(0x801D791Cu);
  c->r[0]=R32(c->r[3]+0x00002094u); // 801D791C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7920
  if (crb(c,2)) return; // 801D7924
  c->r[0]=0u+0x00000000u; // 801D7928
  W32(c->r[3]+0x00001F24u,c->r[0]); // 801D792C
  return; // 801D7930
}

// fn_801D7934
void f_801D7934(Ctx* __restrict c) {
  trace_call(0x801D7934u);
  return; // 801D7934
}

// fn_801D7938
void f_801D7938(Ctx* __restrict c) {
  trace_call(0x801D7938u);
  return; // 801D7938
}

// fn_801D793C
void f_801D793C(Ctx* __restrict c) {
  trace_call(0x801D793Cu);
  {uint32_t ea=c->r[2]+0xFFFFBD20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D793C
  c->r[3]=0u+0x80580000u; // 801D7940
  {uint32_t ea=c->r[2]+0xFFFFBD24u; c->f[2]=c->ps1[2]=RF32(ea);} // 801D7944
  c->r[3]=c->r[3]+0xFFFFA930u; // 801D7948
  c->f[3]=c->f[1]; // 801D794C
  f_8003F588(c); return; // 801D7950
}

// fn_801D7954
void f_801D7954(Ctx* __restrict c) {
  trace_call(0x801D7954u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7954
  f_801D66C0(c); return; // 801D7958
}

// fn_801D795C
void f_801D795C(Ctx* __restrict c) {
  trace_call(0x801D795Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D795C
  f_801D7938(c); return; // 801D7960
}

// fn_801D7964
void f_801D7964(Ctx* __restrict c) {
  trace_call(0x801D7964u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7964
  f_801D66D0(c); return; // 801D7968
}

// fn_801D796C
void f_801D796C(Ctx* __restrict c) {
  trace_call(0x801D796Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D796C
  f_801D6A70(c); return; // 801D7970
}

// fn_801D7974
void f_801D7974(Ctx* __restrict c) {
  trace_call(0x801D7974u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7974
  f_801D77B0(c); return; // 801D7978
}

// fn_801D797C
void f_801D797C(Ctx* __restrict c) {
  trace_call(0x801D797Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D797C
  f_801D7828(c); return; // 801D7980
}

// fn_801D7984
void f_801D7984(Ctx* __restrict c) {
  trace_call(0x801D7984u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7984
  f_801D6614(c); return; // 801D7988
}

// fn_801D798C
void f_801D798C(Ctx* __restrict c) {
  trace_call(0x801D798Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D798C
  f_801D7630(c); return; // 801D7990
}

// fn_801D7994
void f_801D7994(Ctx* __restrict c) {
  trace_call(0x801D7994u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7994
  f_801D6FA8(c); return; // 801D7998
}

// fn_801D799C
void f_801D799C(Ctx* __restrict c) {
  trace_call(0x801D799Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D799C
  f_801D6CE0(c); return; // 801D79A0
}

// fn_801D79A4
void f_801D79A4(Ctx* __restrict c) {
  trace_call(0x801D79A4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79A4
  f_801D7798(c); return; // 801D79A8
}

// fn_801D79AC
void f_801D79AC(Ctx* __restrict c) {
  trace_call(0x801D79ACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79AC
  f_801D6618(c); return; // 801D79B0
}

// fn_801D79B4
void f_801D79B4(Ctx* __restrict c) {
  trace_call(0x801D79B4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79B4
  f_801D782C(c); return; // 801D79B8
}

// fn_801D79BC
void f_801D79BC(Ctx* __restrict c) {
  trace_call(0x801D79BCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79BC
  f_801D66C4(c); return; // 801D79C0
}

// fn_801D79C4
void f_801D79C4(Ctx* __restrict c) {
  trace_call(0x801D79C4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79C4
  f_801D66D4(c); return; // 801D79C8
}

// fn_801D79CC
void f_801D79CC(Ctx* __restrict c) {
  trace_call(0x801D79CCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79CC
  f_801D77A4(c); return; // 801D79D0
}

// fn_801D79D4
void f_801D79D4(Ctx* __restrict c) {
  trace_call(0x801D79D4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79D4
  f_801D77B4(c); return; // 801D79D8
}

// fn_801D79DC
void f_801D79DC(Ctx* __restrict c) {
  trace_call(0x801D79DCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79DC
  f_801D6608(c); return; // 801D79E0
}

// fn_801D79E4
void f_801D79E4(Ctx* __restrict c) {
  trace_call(0x801D79E4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79E4
  f_801D6FB8(c); return; // 801D79E8
}

// fn_801D79EC
void f_801D79EC(Ctx* __restrict c) {
  trace_call(0x801D79ECu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79EC
  f_801D6CEC(c); return; // 801D79F0
}

// fn_801D79F4
void f_801D79F4(Ctx* __restrict c) {
  trace_call(0x801D79F4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79F4
  f_801D6A80(c); return; // 801D79F8
}

// fn_801D79FC
void f_801D79FC(Ctx* __restrict c) {
  trace_call(0x801D79FCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D79FC
  f_801D7648(c); return; // 801D7A00
}

// fn_801D7A04
void f_801D7A04(Ctx* __restrict c) {
  trace_call(0x801D7A04u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A04
  f_801D6400(c); return; // 801D7A08
}

// fn_801D7A0C
void f_801D7A0C(Ctx* __restrict c) {
  trace_call(0x801D7A0Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A0C
  f_801D66BC(c); return; // 801D7A10
}

// fn_801D7A14
void f_801D7A14(Ctx* __restrict c) {
  trace_call(0x801D7A14u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A14
  f_801D7934(c); return; // 801D7A18
}

// fn_801D7A1C
void f_801D7A1C(Ctx* __restrict c) {
  trace_call(0x801D7A1Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A1C
  f_801D66CC(c); return; // 801D7A20
}

// fn_801D7A24
void f_801D7A24(Ctx* __restrict c) {
  trace_call(0x801D7A24u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A24
  f_801D6A6C(c); return; // 801D7A28
}

// fn_801D7A2C
void f_801D7A2C(Ctx* __restrict c) {
  trace_call(0x801D7A2Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A2C
  f_801D77AC(c); return; // 801D7A30
}

// fn_801D7A34
void f_801D7A34(Ctx* __restrict c) {
  trace_call(0x801D7A34u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A34
  f_801D7824(c); return; // 801D7A38
}

// fn_801D7A3C
void f_801D7A3C(Ctx* __restrict c) {
  trace_call(0x801D7A3Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A3C
  f_801D6610(c); return; // 801D7A40
}

// fn_801D7A44
void f_801D7A44(Ctx* __restrict c) {
  trace_call(0x801D7A44u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A44
  f_801D762C(c); return; // 801D7A48
}

// fn_801D7A4C
void f_801D7A4C(Ctx* __restrict c) {
  trace_call(0x801D7A4Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A4C
  f_801D6FA4(c); return; // 801D7A50
}

// fn_801D7A54
void f_801D7A54(Ctx* __restrict c) {
  trace_call(0x801D7A54u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A54
  f_801D6CDC(c); return; // 801D7A58
}

// fn_801D7A5C
void f_801D7A5C(Ctx* __restrict c) {
  trace_call(0x801D7A5Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A5C
  f_801D7794(c); return; // 801D7A60
}

// fn_801D7A64
void f_801D7A64(Ctx* __restrict c) {
  trace_call(0x801D7A64u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A64
  f_801D6624(c); return; // 801D7A68
}

// fn_801D7A6C
void f_801D7A6C(Ctx* __restrict c) {
  trace_call(0x801D7A6Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A6C
  f_801D791C(c); return; // 801D7A70
}

// fn_801D7A74
void f_801D7A74(Ctx* __restrict c) {
  trace_call(0x801D7A74u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A74
  f_801D66C8(c); return; // 801D7A78
}

// fn_801D7A7C
void f_801D7A7C(Ctx* __restrict c) {
  trace_call(0x801D7A7Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A7C
  f_801D677C(c); return; // 801D7A80
}

// fn_801D7A84
void f_801D7A84(Ctx* __restrict c) {
  trace_call(0x801D7A84u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A84
  f_801D77A8(c); return; // 801D7A88
}

// fn_801D7A8C
void f_801D7A8C(Ctx* __restrict c) {
  trace_call(0x801D7A8Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A8C
  f_801D77B8(c); return; // 801D7A90
}

// fn_801D7A94
void f_801D7A94(Ctx* __restrict c) {
  trace_call(0x801D7A94u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A94
  f_801D660C(c); return; // 801D7A98
}

// fn_801D7A9C
void f_801D7A9C(Ctx* __restrict c) {
  trace_call(0x801D7A9Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801D7A9C
  f_801D72AC(c); return; // 801D7AA0
}

