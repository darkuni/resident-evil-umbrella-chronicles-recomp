#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// Animate__Q36nw4hbm3lyt18AnimTransformBasicFUlPQ36nw4hbm3lyt8Material
void f_803C8BE4(Ctx* __restrict c) {
  trace_call(0x803C8BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C8BE4
  c->r[0]=c->lr; // 803C8BE8
  W32(c->r[1]+0x00000074u,c->r[0]); // 803C8BEC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 803C8BF0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 803C8BF4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 803C8BF8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 803C8BFC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 803C8C00
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 803C8C04
  c->r[11]=c->r[1]+0x00000040u; // 803C8C08
  c->lr=0x803C8C10u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803C8C0C
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 803C8C10
  c->r[6]=0u+0x803F0000u; // 803C8C14
  c->r[31]=0u+0x524C0000u; // 803C8C18
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803C8C1C
  c->r[0]=R32(c->r[7]+0x00000010u); // 803C8C20
  c->r[21]=c->r[3]|c->r[3]; // 803C8C24
  {uint32_t ea=c->r[6]+0x00000E2Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 803C8C28
  c->r[22]=c->r[5]|c->r[5]; // 803C8C2C
  c->r[0]=c->r[7]+c->r[0]; // 803C8C30
  c->r[30]=c->r[31]+0x00005450u; // 803C8C34
  c->r[0]=R32(c->r[4]+c->r[0]); // 803C8C38
  c->r[23]=0u+0x00000000u; // 803C8C3C
  c->r[28]=c->r[7]+c->r[0]; // 803C8C40
  c->r[26]=c->r[28]+0x00000018u; // 803C8C44
  goto L_803C8E98; // 803C8C48
L_803C8C4C:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 803C8C4C
  c->r[3]=R32(c->r[28]+c->r[0]); // 803C8C50
  c->r[27]=c->r[28]+c->r[0]; // 803C8C54
  c->r[25]=c->r[27]+0x00000008u; // 803C8C58
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 803C8C5C
  if (crb(c,2)) { goto L_803C8D9C; } // 803C8C60
  if (!crb(c,0)) { goto L_803C8C88; } // 803C8C64
  c->r[0]=c->r[31]+0x00004D43u; // 803C8C68
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803C8C6C
  if (crb(c,2)) { goto L_803C8C98; } // 803C8C70
  if (!crb(c,0)) { goto L_803C8E90; } // 803C8C74
  c->r[0]=c->r[31]+0x0000494Du; // 803C8C78
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803C8C7C
  if (crb(c,2)) { goto L_803C8E1C; } // 803C8C80
  goto L_803C8E90; // 803C8C84
L_803C8C88:;
  c->r[0]=c->r[31]+0x00005453u; // 803C8C88
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803C8C8C
  if (crb(c,2)) { goto L_803C8D24; } // 803C8C90
  goto L_803C8E90; // 803C8C94
L_803C8C98:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 803C8C98
  c->r[24]=0u+0x00000000u; // 803C8C9C
  {uint32_t ea=c->r[21]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 803C8CA0
  cmps(c,0,(int32_t)c->r[0],0); // 803C8CA4
  if (!crb(c,1)) { goto L_803C8E90; } // 803C8CA8
  goto L_803C8D14; // 803C8CAC
L_803C8CB0:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 803C8CB0
  c->f[1]=c->f[31]; // 803C8CB4
  c->r[20]=c->r[27]+c->r[0]; // 803C8CB8
  c->r[0]=R32(c->r[20]+0x00000008u); // 803C8CBC
  c->r[4]=R16(c->r[20]+0x00000004u); // 803C8CC0
  c->r[3]=c->r[20]+c->r[0]; // 803C8CC4
  c->lr=0x803C8CCCu; f_803C845C(c); // 803C8CC8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[30]); // 803C8CCC
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 803C8CD0
  c->r[6]=0u+0xFFFFFC00u; // 803C8CD4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 803C8CD8
  cmps(c,0,(int32_t)c->r[0],-1024); // 803C8CDC
  if (crb(c,0)) { goto L_803C8CE8; } // 803C8CE0
  c->r[6]=c->r[0]|c->r[0]; // 803C8CE4
L_803C8CE8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 803C8CE8
  c->r[4]=R8(c->r[20]+0x00000001u); // 803C8CEC
  cmps(c,0,(int32_t)c->r[0],1023); // 803C8CF0
  c->r[3]=c->r[22]|c->r[22]; // 803C8CF4
  c->r[5]=0u+0x000003FFu; // 803C8CF8
  if (crb(c,1)) { goto L_803C8D04; } // 803C8CFC
  c->r[5]=c->r[6]|c->r[6]; // 803C8D00
L_803C8D04:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 803C8D04
  c->lr=0x803C8D0Cu; f_803CD384(c); // 803C8D08
  c->r[25]=c->r[25]+0x00000004u; // 803C8D0C
  c->r[24]=c->r[24]+0x00000001u; // 803C8D10
L_803C8D14:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 803C8D14
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 803C8D18
  if (crb(c,0)) { IRQCHK(c); goto L_803C8CB0; } // 803C8D1C
  goto L_803C8E90; // 803C8D20
L_803C8D24:;
  {uint32_t ea=c->r[21]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 803C8D24
  c->r[29]=0u+0x00000000u; // 803C8D28
  goto L_803C8D8C; // 803C8D2C
L_803C8D30:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 803C8D30
  c->r[0]=R32(c->r[22]+0x0000004Cu); // 803C8D34
  c->r[20]=c->r[27]+c->r[3]; // 803C8D38
  c->r[3]=R8(c->r[27]+c->r[3]); // 803C8D3C
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 803C8D40
  cmpu(c,0,c->r[3],c->r[0]); // 803C8D44
  if (!crb(c,0)) { goto L_803C8D84; } // 803C8D48
  c->r[0]=R32(c->r[20]+0x00000008u); // 803C8D4C
  c->f[1]=c->f[29]; // 803C8D50
  c->r[4]=R16(c->r[20]+0x00000004u); // 803C8D54
  c->r[3]=c->r[20]+c->r[0]; // 803C8D58
  c->lr=0x803C8D60u; f_803C845C(c); // 803C8D5C
  c->f[31]=c->f[1]; // 803C8D60
  c->r[24]=R8(c->r[20]+0x00000001u); // 803C8D64
  c->r[20]=R8(c->r[20]+0x00000000u); // 803C8D68
  c->r[3]=c->r[22]|c->r[22]; // 803C8D6C
  c->lr=0x803C8D74u; f_803CD03C(c); // 803C8D70
  c->r[4]=(uint32_t)((int32_t)c->r[20]*(int32_t)20); // 803C8D74
  c->r[0]=rotl(c->r[24],2)&0xFFFFFFFCu; // 803C8D78
  c->r[3]=c->r[3]+c->r[4]; // 803C8D7C
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 803C8D80
L_803C8D84:;
  c->r[25]=c->r[25]+0x00000004u; // 803C8D84
  c->r[29]=c->r[29]+0x00000001u; // 803C8D88
L_803C8D8C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 803C8D8C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803C8D90
  if (crb(c,0)) { IRQCHK(c); goto L_803C8D30; } // 803C8D94
  goto L_803C8E90; // 803C8D98
L_803C8D9C:;
  c->r[24]=R32(c->r[21]+0x00000014u); // 803C8D9C
  cmps(c,0,(int32_t)c->r[24],0); // 803C8DA0
  if (crb(c,2)) { goto L_803C8E90; } // 803C8DA4
  {uint32_t ea=c->r[21]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 803C8DA8
  c->r[29]=0u+0x00000000u; // 803C8DAC
  goto L_803C8E0C; // 803C8DB0
L_803C8DB4:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 803C8DB4
  c->r[0]=R32(c->r[22]+0x00000050u); // 803C8DB8
  c->r[20]=c->r[27]+c->r[3]; // 803C8DBC
  c->r[3]=R8(c->r[27]+c->r[3]); // 803C8DC0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 803C8DC4
  cmpu(c,0,c->r[3],c->r[0]); // 803C8DC8
  if (!crb(c,0)) { goto L_803C8E04; } // 803C8DCC
  c->r[0]=R8(c->r[20]+0x00000001u); // 803C8DD0
  cmps(c,0,(int32_t)c->r[0],0); // 803C8DD4
  if (!crb(c,2)) { goto L_803C8E04; } // 803C8DD8
  c->r[0]=R32(c->r[20]+0x00000008u); // 803C8DDC
  c->f[1]=c->f[29]; // 803C8DE0
  c->r[4]=R16(c->r[20]+0x00000004u); // 803C8DE4
  c->r[3]=c->r[20]+c->r[0]; // 803C8DE8
  c->lr=0x803C8DF0u; f_803C836C(c); // 803C8DEC
  c->r[0]=rotl(c->r[3],2)&0x0003FFFCu; // 803C8DF0
  c->r[4]=R8(c->r[20]+0x00000000u); // 803C8DF4
  c->r[5]=R32(c->r[24]+c->r[0]); // 803C8DF8
  c->r[3]=c->r[22]|c->r[22]; // 803C8DFC
  c->lr=0x803C8E04u; f_803CD2AC(c); // 803C8E00
L_803C8E04:;
  c->r[25]=c->r[25]+0x00000004u; // 803C8E04
  c->r[29]=c->r[29]+0x00000001u; // 803C8E08
L_803C8E0C:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 803C8E0C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803C8E10
  if (crb(c,0)) { IRQCHK(c); goto L_803C8DB4; } // 803C8E14
  goto L_803C8E90; // 803C8E18
L_803C8E1C:;
  {uint32_t ea=c->r[21]+0x00000010u; c->f[29]=c->ps1[29]=RF32(ea);} // 803C8E1C
  c->r[29]=0u+0x00000000u; // 803C8E20
  goto L_803C8E84; // 803C8E24
L_803C8E28:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 803C8E28
  c->r[0]=R32(c->r[22]+0x0000004Cu); // 803C8E2C
  c->r[24]=c->r[27]+c->r[3]; // 803C8E30
  c->r[3]=R8(c->r[27]+c->r[3]); // 803C8E34
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 803C8E38
  cmpu(c,0,c->r[3],c->r[0]); // 803C8E3C
  if (!crb(c,0)) { goto L_803C8E7C; } // 803C8E40
  c->r[0]=R32(c->r[24]+0x00000008u); // 803C8E44
  c->f[1]=c->f[29]; // 803C8E48
  c->r[4]=R16(c->r[24]+0x00000004u); // 803C8E4C
  c->r[3]=c->r[24]+c->r[0]; // 803C8E50
  c->lr=0x803C8E58u; f_803C845C(c); // 803C8E54
  c->f[31]=c->f[1]; // 803C8E58
  c->r[20]=R8(c->r[24]+0x00000001u); // 803C8E5C
  c->r[24]=R8(c->r[24]+0x00000000u); // 803C8E60
  c->r[3]=c->r[22]|c->r[22]; // 803C8E64
  c->lr=0x803C8E6Cu; f_803CD070(c); // 803C8E68
  c->r[4]=(uint32_t)((int32_t)c->r[24]*(int32_t)20); // 803C8E6C
  c->r[0]=rotl(c->r[20],2)&0xFFFFFFFCu; // 803C8E70
  c->r[3]=c->r[3]+c->r[4]; // 803C8E74
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[31]);} // 803C8E78
L_803C8E7C:;
  c->r[25]=c->r[25]+0x00000004u; // 803C8E7C
  c->r[29]=c->r[29]+0x00000001u; // 803C8E80
L_803C8E84:;
  c->r[0]=R8(c->r[27]+0x00000004u); // 803C8E84
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803C8E88
  if (crb(c,0)) { IRQCHK(c); goto L_803C8E28; } // 803C8E8C
L_803C8E90:;
  c->r[26]=c->r[26]+0x00000004u; // 803C8E90
  c->r[23]=c->r[23]+0x00000001u; // 803C8E94
L_803C8E98:;
  c->r[0]=R8(c->r[28]+0x00000014u); // 803C8E98
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 803C8E9C
  if (crb(c,0)) { IRQCHK(c); goto L_803C8C4C; } // 803C8EA0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 803C8EA4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 803C8EA8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 803C8EAC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 803C8EB0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 803C8EB4
  c->r[11]=c->r[1]+0x00000040u; // 803C8EB8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 803C8EBC
  c->lr=0x803C8EC4u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803C8EC0
  c->r[0]=R32(c->r[1]+0x00000074u); // 803C8EC4
  c->lr=c->r[0]; // 803C8EC8
  c->r[1]=c->r[1]+0x00000070u; // 803C8ECC
  return; // 803C8ED0
}

// fn_803C8ED4
void f_803C8ED4(Ctx* __restrict c) {
  trace_call(0x803C8ED4u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 803C8ED4
  c->r[0]=c->r[3]+0x00000004u; // 803C8ED8
  goto L_803C8EF8; // 803C8EDC
L_803C8EE0:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 803C8EE0
  cmpu(c,0,c->r[4],c->r[3]); // 803C8EE4
  if (!crb(c,2)) { goto L_803C8EF4; } // 803C8EE8
  c->r[3]=c->r[5]|c->r[5]; // 803C8EEC
  return; // 803C8EF0
L_803C8EF4:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 803C8EF4
L_803C8EF8:;
  cmpu(c,0,c->r[5],c->r[0]); // 803C8EF8
  if (!crb(c,2)) { IRQCHK(c); goto L_803C8EE0; } // 803C8EFC
  c->r[3]=0u+0x00000000u; // 803C8F00
  return; // 803C8F04
}

// FindNameResource__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCc
void f_803C8F08(Ctx* __restrict c) {
  trace_call(0x803C8F08u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C8F08
  c->r[0]=c->lr; // 803C8F0C
  c->r[6]=0u+0x80440000u; // 803C8F10
  W32(c->r[1]+0x00000044u,c->r[0]); // 803C8F14
  c->r[5]=c->r[1]+0x00000018u; // 803C8F18
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803C8F1C
  W32(c->r[1]+0x00000038u,c->r[30]); // 803C8F20
  c->r[30]=0u+0xFFFFFFFFu; // 803C8F24
  W32(c->r[1]+0x00000034u,c->r[29]); // 803C8F28
  c->r[29]=c->r[4]|c->r[4]; // 803C8F2C
  c->r[4]=c->r[6]+0xFFFF8DA0u; // 803C8F30
  W32(c->r[1]+0x00000030u,c->r[28]); // 803C8F34
  c->r[28]=c->r[3]|c->r[3]; // 803C8F38
  c->lr=0x803C8F40u; f_802F3EC4(c); // 803C8F3C
  c->r[31]=0u+0x80440000u; // 803C8F40
  goto L_803C8FA4; // 803C8F44
L_803C8F48:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803C8F48
  cmps(c,0,(int32_t)c->r[0],0); // 803C8F4C
  if (crb(c,2)) { goto L_803C8F88; } // 803C8F50
  c->r[4]=R32(c->r[1]+0x00000014u); // 803C8F54
  c->r[3]=c->r[28]|c->r[28]; // 803C8F58
  c->lr=0x803C8F60u; f_802F3E6C(c); // 803C8F5C
  c->r[3]=c->r[28]|c->r[28]; // 803C8F60
  c->r[4]=c->r[29]|c->r[29]; // 803C8F64
  c->lr=0x803C8F6Cu; f_803C8F08(c); // 803C8F68
  c->r[30]=c->r[3]|c->r[3]; // 803C8F6C
  c->r[3]=c->r[28]|c->r[28]; // 803C8F70
  c->r[4]=c->r[31]+0xFFFF8DA4u; // 803C8F74
  c->lr=0x803C8F7Cu; f_802F3E6C(c); // 803C8F78
  cmps(c,0,(int32_t)c->r[30],-1); // 803C8F7C
  if (!crb(c,2)) { goto L_803C8FB8; } // 803C8F80
  goto L_803C8FA4; // 803C8F84
L_803C8F88:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 803C8F88
  c->r[3]=c->r[29]|c->r[29]; // 803C8F8C
  c->lr=0x803C8F94u; f_80298408(c); // 803C8F90
  cmps(c,0,(int32_t)c->r[3],0); // 803C8F94
  if (!crb(c,2)) { goto L_803C8FA4; } // 803C8F98
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 803C8F9C
  goto L_803C8FB8; // 803C8FA0
L_803C8FA4:;
  c->r[3]=c->r[1]+0x00000018u; // 803C8FA4
  c->r[4]=c->r[1]+0x00000008u; // 803C8FA8
  c->lr=0x803C8FB0u; f_802F3F40(c); // 803C8FAC
  cmps(c,0,(int32_t)c->r[3],0); // 803C8FB0
  if (!crb(c,2)) { IRQCHK(c); goto L_803C8F48; } // 803C8FB4
L_803C8FB8:;
  c->r[3]=c->r[1]+0x00000018u; // 803C8FB8
  c->lr=0x803C8FC0u; f_802F3FF8(c); // 803C8FBC
  c->r[3]=c->r[30]|c->r[30]; // 803C8FC0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803C8FC4
  c->r[30]=R32(c->r[1]+0x00000038u); // 803C8FC8
  c->r[29]=R32(c->r[1]+0x00000034u); // 803C8FCC
  c->r[28]=R32(c->r[1]+0x00000030u); // 803C8FD0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803C8FD4
  c->lr=c->r[0]; // 803C8FD8
  c->r[1]=c->r[1]+0x00000040u; // 803C8FDC
  return; // 803C8FE0
}

// GetResourceSub__37@unnamed@lyt_arcResourceAccessor_cpp@FP9ARCHandlePCcUlPCcPUl
void f_803C8FE4(Ctx* __restrict c) {
  trace_call(0x803C8FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C8FE4
  c->r[0]=c->lr; // 803C8FE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 803C8FEC
  c->r[11]=c->r[1]+0x00000040u; // 803C8FF0
  c->lr=0x803C8FF8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803C8FF4
  c->r[26]=c->r[3]|c->r[3]; // 803C8FF8
  c->r[27]=c->r[4]|c->r[4]; // 803C8FFC
  c->r[28]=c->r[5]|c->r[5]; // 803C9000
  c->r[29]=c->r[6]|c->r[6]; // 803C9004
  c->r[30]=c->r[7]|c->r[7]; // 803C9008
  c->r[31]=0u+0xFFFFFFFFu; // 803C900C
  c->lr=0x803C9014u; f_802F37E8(c); // 803C9010
  cmps(c,0,(int32_t)c->r[3],-1); // 803C9014
  if (crb(c,2)) { goto L_803C90C8; } // 803C9018
  c->r[3]=c->r[26]|c->r[26]; // 803C901C
  c->r[4]=c->r[27]|c->r[27]; // 803C9020
  c->lr=0x803C9028u; f_802F3E6C(c); // 803C9024
  cmps(c,0,(int32_t)c->r[3],0); // 803C9028
  if (crb(c,2)) { goto L_803C90C8; } // 803C902C
  cmps(c,0,(int32_t)c->r[28],0); // 803C9030
  if (!crb(c,2)) { goto L_803C904C; } // 803C9034
  c->r[3]=c->r[26]|c->r[26]; // 803C9038
  c->r[4]=c->r[29]|c->r[29]; // 803C903C
  c->lr=0x803C9044u; f_803C8F08(c); // 803C9040
  c->r[31]=c->r[3]|c->r[3]; // 803C9044
  goto L_803C90B8; // 803C9048
L_803C904C:;
  c->r[3]=rotl(c->r[28],8)&0x000000FFu; // 803C904C
  c->r[6]=rotl(c->r[28],16)&0x0000FFFFu; // 803C9050
  c->r[5]=rotl(c->r[28],24)&0x00FFFFFFu; // 803C9054
  c->r[0]=0u+0x00000000u; // 803C9058
  W8(c->r[1]+0x00000008u,c->r[3]); // 803C905C
  c->r[3]=c->r[26]|c->r[26]; // 803C9060
  c->r[4]=c->r[1]+0x00000008u; // 803C9064
  W8(c->r[1]+0x00000009u,c->r[6]); // 803C9068
  W8(c->r[1]+0x0000000Au,c->r[5]); // 803C906C
  W8(c->r[1]+0x0000000Bu,c->r[28]); // 803C9070
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 803C9074
  c->lr=0x803C907Cu; f_802F37E8(c); // 803C9078
  cmps(c,0,(int32_t)c->r[3],-1); // 803C907C
  if (crb(c,2)) { goto L_803C90B8; } // 803C9080
  c->r[3]=c->r[26]|c->r[26]; // 803C9084
  c->r[4]=c->r[1]+0x00000008u; // 803C9088
  c->lr=0x803C9090u; f_802F3E6C(c); // 803C908C
  cmps(c,0,(int32_t)c->r[3],0); // 803C9090
  if (crb(c,2)) { goto L_803C90B8; } // 803C9094
  c->r[3]=c->r[26]|c->r[26]; // 803C9098
  c->r[4]=c->r[29]|c->r[29]; // 803C909C
  c->lr=0x803C90A4u; f_802F37E8(c); // 803C90A0
  c->r[4]=0u+0x80440000u; // 803C90A4
  c->r[31]=c->r[3]|c->r[3]; // 803C90A8
  c->r[3]=c->r[26]|c->r[26]; // 803C90AC
  c->r[4]=c->r[4]+0xFFFF8DA4u; // 803C90B0
  c->lr=0x803C90B8u; f_802F3E6C(c); // 803C90B4
L_803C90B8:;
  c->r[4]=0u+0x80440000u; // 803C90B8
  c->r[3]=c->r[26]|c->r[26]; // 803C90BC
  c->r[4]=c->r[4]+0xFFFF8DA4u; // 803C90C0
  c->lr=0x803C90C8u; f_802F3E6C(c); // 803C90C4
L_803C90C8:;
  cmps(c,0,(int32_t)c->r[31],-1); // 803C90C8
  if (crb(c,2)) { goto L_803C9110; } // 803C90CC
  c->r[3]=c->r[26]|c->r[26]; // 803C90D0
  c->r[4]=c->r[31]|c->r[31]; // 803C90D4
  c->r[5]=c->r[1]+0x00000010u; // 803C90D8
  c->lr=0x803C90E0u; f_802F3798(c); // 803C90DC
  c->r[3]=c->r[1]+0x00000010u; // 803C90E0
  c->lr=0x803C90E8u; f_802F3E48(c); // 803C90E4
  cmps(c,0,(int32_t)c->r[30],0); // 803C90E8
  c->r[31]=c->r[3]|c->r[3]; // 803C90EC
  if (crb(c,2)) { goto L_803C9100; } // 803C90F0
  c->r[3]=c->r[1]+0x00000010u; // 803C90F4
  c->lr=0x803C90FCu; f_802F3E5C(c); // 803C90F8
  W32(c->r[30]+0x00000000u,c->r[3]); // 803C90FC
L_803C9100:;
  c->r[3]=c->r[1]+0x00000010u; // 803C9100
  c->lr=0x803C9108u; f_802F3E64(c); // 803C9104
  c->r[3]=c->r[31]|c->r[31]; // 803C9108
  goto L_803C9114; // 803C910C
L_803C9110:;
  c->r[3]=0u+0x00000000u; // 803C9110
L_803C9114:;
  c->r[11]=c->r[1]+0x00000040u; // 803C9114
  c->lr=0x803C911Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803C9118
  c->r[0]=R32(c->r[1]+0x00000044u); // 803C911C
  c->lr=c->r[0]; // 803C9120
  c->r[1]=c->r[1]+0x00000040u; // 803C9124
  return; // 803C9128
}

// __ct__Q36nw4hbm3lyt19ArcResourceAccessorFv
void f_803C912C(Ctx* __restrict c) {
  trace_call(0x803C912Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C912C
  c->r[0]=c->lr; // 803C9130
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C9134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803C9138
  c->r[31]=c->r[3]|c->r[3]; // 803C913C
  c->lr=0x803C9144u; f_803CFBC0(c); // 803C9140
  c->r[0]=0u+0x00000000u; // 803C9144
  c->r[4]=0u+0x80440000u; // 803C9148
  W32(c->r[31]+0x00000028u,c->r[0]); // 803C914C
  c->r[5]=c->r[31]+0x00000028u; // 803C9150
  c->r[4]=c->r[4]+0xFFFF8DA8u; // 803C9154
  c->r[3]=c->r[31]|c->r[31]; // 803C9158
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 803C915C
  W32(c->r[31]+0x00000000u,c->r[4]); // 803C9160
  W32(c->r[31]+0x00000020u,c->r[0]); // 803C9164
  W32(c->r[31]+0x00000024u,c->r[0]); // 803C9168
  W32(c->r[31]+0x00000028u,c->r[5]); // 803C916C
  W32(c->r[31]+0x0000002Cu,c->r[5]); // 803C9170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803C9174
  c->r[0]=R32(c->r[1]+0x00000014u); // 803C9178
  c->lr=c->r[0]; // 803C917C
  c->r[1]=c->r[1]+0x00000010u; // 803C9180
  return; // 803C9184
}

// Attach__Q36nw4hbm3lyt19ArcResourceAccessorFPvPCc
void f_803C9188(Ctx* __restrict c) {
  trace_call(0x803C9188u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9188
  c->r[0]=c->lr; // 803C918C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803C9190
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803C9194
  c->r[31]=c->r[5]|c->r[5]; // 803C9198
  W32(c->r[1]+0x00000018u,c->r[30]); // 803C919C
  c->r[30]=c->r[4]|c->r[4]; // 803C91A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803C91A4
  c->r[29]=c->r[3]|c->r[3]; // 803C91A8
  c->r[3]=c->r[30]|c->r[30]; // 803C91AC
  c->r[4]=c->r[29]+0x00000004u; // 803C91B0
  c->lr=0x803C91B8u; f_802F3454(c); // 803C91B4
  cmps(c,0,(int32_t)c->r[3],0); // 803C91B8
  if (!crb(c,2)) { goto L_803C91C8; } // 803C91BC
  c->r[3]=0u+0x00000000u; // 803C91C0
  goto L_803C91E8; // 803C91C4
L_803C91C8:;
  W32(c->r[29]+0x00000020u,c->r[30]); // 803C91C8
  c->r[4]=c->r[31]|c->r[31]; // 803C91CC
  c->r[3]=c->r[29]+0x00000030u; // 803C91D0
  c->r[5]=0u+0x0000007Fu; // 803C91D4
  c->lr=0x803C91DCu; f_80293498(c); // 803C91D8
  c->r[0]=0u+0x00000000u; // 803C91DC
  c->r[3]=0u+0x00000001u; // 803C91E0
  W8(c->r[29]+0x000000AFu,c->r[0]); // 803C91E4
L_803C91E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803C91E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803C91EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803C91F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803C91F4
  c->lr=c->r[0]; // 803C91F8
  c->r[1]=c->r[1]+0x00000020u; // 803C91FC
  return; // 803C9200
}

// GetResource__Q36nw4hbm3lyt19ArcResourceAccessorFUlPCcPUl
void f_803C9204(Ctx* __restrict c) {
  trace_call(0x803C9204u);
  c->r[8]=c->r[4]|c->r[4]; // 803C9204
  c->r[0]=c->r[5]|c->r[5]; // 803C9208
  c->r[7]=c->r[6]|c->r[6]; // 803C920C
  c->r[4]=c->r[3]+0x00000030u; // 803C9210
  c->r[5]=c->r[8]|c->r[8]; // 803C9214
  c->r[6]=c->r[0]|c->r[0]; // 803C9218
  c->r[3]=c->r[3]+0x00000004u; // 803C921C
  f_803C8FE4(c); return; // 803C9220
}

// fn_803C9224
void f_803C9224(Ctx* __restrict c) {
  trace_call(0x803C9224u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9224
  c->r[0]=c->lr; // 803C9228
  W32(c->r[1]+0x00000024u,c->r[0]); // 803C922C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803C9230
  W32(c->r[1]+0x00000018u,c->r[30]); // 803C9234
  c->r[30]=c->r[3]+0x00000028u; // 803C9238
  W32(c->r[1]+0x00000014u,c->r[29]); // 803C923C
  c->r[29]=c->r[4]|c->r[4]; // 803C9240
  c->r[31]=R32(c->r[3]+0x00000028u); // 803C9244
  goto L_803C926C; // 803C9248
L_803C924C:;
  c->r[3]=c->r[29]|c->r[29]; // 803C924C
  c->r[4]=c->r[31]+0x00000008u; // 803C9250
  c->lr=0x803C9258u; f_80293554(c); // 803C9254
  cmps(c,0,(int32_t)c->r[3],0); // 803C9258
  if (!crb(c,2)) { goto L_803C9268; } // 803C925C
  c->r[3]=R32(c->r[31]+0x00000088u); // 803C9260
  goto L_803C9278; // 803C9264
L_803C9268:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 803C9268
L_803C926C:;
  cmpu(c,0,c->r[31],c->r[30]); // 803C926C
  if (!crb(c,2)) { IRQCHK(c); goto L_803C924C; } // 803C9270
  c->r[3]=0u+0x00000000u; // 803C9274
L_803C9278:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803C9278
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803C927C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803C9280
  c->r[29]=R32(c->r[1]+0x00000014u); // 803C9284
  c->lr=c->r[0]; // 803C9288
  c->r[1]=c->r[1]+0x00000020u; // 803C928C
  return; // 803C9290
}

// __ct__Q36nw4hbm3lyt8BoundingFPCQ46nw4hbm3lyt3res8BoundingRCQ36nw4hbm3lyt11ResBlockSet
void f_803C9294(Ctx* __restrict c) {
  trace_call(0x803C9294u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9294
  c->r[0]=c->lr; // 803C9298
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C929C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803C92A0
  c->r[31]=c->r[3]|c->r[3]; // 803C92A4
  c->lr=0x803C92ACu; f_803CE6D4(c); // 803C92A8
  c->r[4]=0u+0x80440000u; // 803C92AC
  c->r[3]=c->r[31]|c->r[31]; // 803C92B0
  c->r[4]=c->r[4]+0xFFFF8E20u; // 803C92B4
  W32(c->r[31]+0x00000000u,c->r[4]); // 803C92B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803C92BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803C92C0
  c->lr=c->r[0]; // 803C92C4
  c->r[1]=c->r[1]+0x00000010u; // 803C92C8
  return; // 803C92CC
}

// fn_803C92D0
void f_803C92D0(Ctx* __restrict c) {
  trace_call(0x803C92D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C92D0
  c->r[0]=c->lr; // 803C92D4
  cmps(c,0,(int32_t)c->r[3],0); // 803C92D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C92DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803C92E0
  c->r[31]=c->r[4]|c->r[4]; // 803C92E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803C92E8
  c->r[30]=c->r[3]|c->r[3]; // 803C92EC
  if (crb(c,2)) { goto L_803C930C; } // 803C92F0
  c->r[4]=0u+0x00000000u; // 803C92F4
  c->lr=0x803C92FCu; f_803CE7FC(c); // 803C92F8
  cmps(c,0,(int32_t)c->r[31],0); // 803C92FC
  if (!crb(c,1)) { goto L_803C930C; } // 803C9300
  c->r[3]=c->r[30]|c->r[30]; // 803C9304
  c->lr=0x803C930Cu; f_802896EC(c); // 803C9308
L_803C930C:;
  c->r[3]=c->r[30]|c->r[30]; // 803C930C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803C9310
  c->r[30]=R32(c->r[1]+0x00000008u); // 803C9314
  c->r[0]=R32(c->r[1]+0x00000014u); // 803C9318
  c->lr=c->r[0]; // 803C931C
  c->r[1]=c->r[1]+0x00000010u; // 803C9320
  return; // 803C9324
}

// DrawSelf__Q36nw4hbm3lyt8BoundingFRCQ36nw4hbm3lyt8DrawInfo
void f_803C9328(Ctx* __restrict c) {
  trace_call(0x803C9328u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9328
  c->r[0]=c->lr; // 803C932C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803C9330
  c->r[0]=R8(c->r[4]+0x00000050u); // 803C9334
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803C9338
  c->r[31]=c->r[3]|c->r[3]; // 803C933C
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 803C9340
  if (crb(c,2)) { goto L_803C9384; } // 803C9344
  c->r[12]=R32(c->r[3]+0x00000000u); // 803C9348
  c->r[12]=R32(c->r[12]+0x00000060u); // 803C934C
  c->ctr=c->r[12]; // 803C9350
  if (true) { c->lr=0x803C9358u; dispatch(c,c->ctr); } // 803C9354
  c->r[4]=0u+0x00FF0000u; // 803C9358
  c->r[3]=c->r[31]|c->r[31]; // 803C935C
  c->r[0]=c->r[4]+0x000000FFu; // 803C9360
  W32(c->r[1]+0x00000008u,c->r[0]); // 803C9364
  c->lr=0x803C936Cu; f_803CF530(c); // 803C9368
  W32(c->r[1]+0x00000014u,c->r[4]); // 803C936C
  c->r[4]=c->r[31]+0x0000004Cu; // 803C9370
  c->r[5]=c->r[1]+0x00000008u; // 803C9374
  W32(c->r[1]+0x00000010u,c->r[3]); // 803C9378
  c->r[3]=c->r[1]+0x00000010u; // 803C937C
  c->lr=0x803C9384u; f_803C9F1C(c); // 803C9380
L_803C9384:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803C9384
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803C9388
  c->lr=c->r[0]; // 803C938C
  c->r[1]=c->r[1]+0x00000020u; // 803C9390
  return; // 803C9394
}

// fn_803C9398
void f_803C9398(Ctx* __restrict c) {
  trace_call(0x803C9398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9398
  c->r[0]=c->lr; // 803C939C
  cmps(c,0,(int32_t)c->r[3],0); // 803C93A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C93A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803C93A8
  c->r[31]=c->r[3]|c->r[3]; // 803C93AC
  if (crb(c,2)) { goto L_803C93C0; } // 803C93B0
  cmps(c,0,(int32_t)c->r[4],0); // 803C93B4
  if (!crb(c,1)) { goto L_803C93C0; } // 803C93B8
  c->lr=0x803C93C0u; f_802896EC(c); // 803C93BC
L_803C93C0:;
  c->r[3]=c->r[31]|c->r[31]; // 803C93C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803C93C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803C93C8
  c->lr=c->r[0]; // 803C93CC
  c->r[1]=c->r[1]+0x00000010u; // 803C93D0
  return; // 803C93D4
}

// fn_803C93D8
void f_803C93D8(Ctx* __restrict c) {
  trace_call(0x803C93D8u);
  c->r[3]=0u+0x806C0000u; // 803C93D8
  c->r[3]=c->r[3]+0x00002578u; // 803C93DC
  return; // 803C93E0
}

// fn_803C93E4
void f_803C93E4(Ctx* __restrict c) {
  trace_call(0x803C93E4u);
  c->r[4]=0u+0x806C0000u; // 803C93E4
  c->r[3]=0u+0x806C0000u; // 803C93E8
  c->r[4]=c->r[4]+0x000025B0u; // 803C93EC
  W32(c->r[3]+0x00002578u,c->r[4]); // 803C93F0
  return; // 803C93F4
}

// EqualsPaneName__Q36nw4hbm3lyt6detailFPCcPCc
void f_803C93F8(Ctx* __restrict c) {
  trace_call(0x803C93F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C93F8
  c->r[0]=c->lr; // 803C93FC
  c->r[5]=0u+0x00000010u; // 803C9400
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C9404
  c->lr=0x803C940Cu; f_80293670(c); // 803C9408
  c->r[0]=cntlz(c->r[3]); // 803C940C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 803C9410
  c->r[0]=R32(c->r[1]+0x00000014u); // 803C9414
  c->lr=c->r[0]; // 803C9418
  c->r[1]=c->r[1]+0x00000010u; // 803C941C
  return; // 803C9420
}

// fn_803C9424
void f_803C9424(Ctx* __restrict c) {
  trace_call(0x803C9424u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9424
  c->r[0]=c->lr; // 803C9428
  c->r[5]=0u+0x00000014u; // 803C942C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C9430
  c->lr=0x803C9438u; f_80293670(c); // 803C9434
  c->r[0]=cntlz(c->r[3]); // 803C9438
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 803C943C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803C9440
  c->lr=c->r[0]; // 803C9444
  c->r[1]=c->r[1]+0x00000010u; // 803C9448
  return; // 803C944C
}

// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeader
void f_803C9450(Ctx* __restrict c) {
  trace_call(0x803C9450u);
  c->r[0]=R16(c->r[3]+0x00000004u); // 803C9450
  c->r[4]=0u+0x00000000u; // 803C9454
  cmpu(c,0,c->r[0],0x0000FEFFu); // 803C9458
  if (!crb(c,2)) { goto L_803C9470; } // 803C945C
  c->r[0]=R16(c->r[3]+0x00000006u); // 803C9460
  cmpu(c,0,c->r[0],0x00000008u); // 803C9464
  if (!crb(c,2)) { goto L_803C9470; } // 803C9468
  c->r[4]=0u+0x00000001u; // 803C946C
L_803C9470:;
  c->r[3]=c->r[4]|c->r[4]; // 803C9470
  return; // 803C9474
}

// TestFileHeader__Q36nw4hbm3lyt6detailFRCQ46nw4hbm3lyt3res16BinaryFileHeaderUl
void f_803C9478(Ctx* __restrict c) {
  trace_call(0x803C9478u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 803C9478
  c->r[5]=0u+0x00000000u; // 803C947C
  cmpu(c,0,c->r[4],c->r[0]); // 803C9480
  if (!crb(c,2)) { goto L_803C94A4; } // 803C9484
  c->r[0]=R16(c->r[3]+0x00000004u); // 803C9488
  cmpu(c,0,c->r[0],0x0000FEFFu); // 803C948C
  if (!crb(c,2)) { goto L_803C94A4; } // 803C9490
  c->r[0]=R16(c->r[3]+0x00000006u); // 803C9494
  cmpu(c,0,c->r[0],0x00000008u); // 803C9498
  if (!crb(c,2)) { goto L_803C94A4; } // 803C949C
  c->r[5]=0u+0x00000001u; // 803C94A0
L_803C94A4:;
  c->r[3]=c->r[5]|c->r[5]; // 803C94A4
  return; // 803C94A8
}

// __ct__Q46nw4hbm3lyt6detail11TexCoordAryFv
void f_803C94AC(Ctx* __restrict c) {
  trace_call(0x803C94ACu);
  c->r[0]=0u+0x00000000u; // 803C94AC
  W8(c->r[3]+0x00000000u,c->r[0]); // 803C94B0
  W8(c->r[3]+0x00000001u,c->r[0]); // 803C94B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 803C94B8
  return; // 803C94BC
}

// Free__Q46nw4hbm3lyt6detail11TexCoordAryFv
void f_803C94C0(Ctx* __restrict c) {
  trace_call(0x803C94C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C94C0
  c->r[0]=c->lr; // 803C94C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C94C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803C94CC
  c->r[31]=c->r[3]|c->r[3]; // 803C94D0
  c->r[4]=R32(c->r[3]+0x00000004u); // 803C94D4
  cmps(c,0,(int32_t)c->r[4],0); // 803C94D8
  if (crb(c,2)) { goto L_803C94FC; } // 803C94DC
  c->r[3]=0u+0x806C0000u; // 803C94E0
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803C94E4
  c->lr=0x803C94ECu; f_802A704C(c); // 803C94E8
  c->r[0]=0u+0x00000000u; // 803C94EC
  W32(c->r[31]+0x00000004u,c->r[0]); // 803C94F0
  W8(c->r[31]+0x00000000u,c->r[0]); // 803C94F4
  W8(c->r[31]+0x00000001u,c->r[0]); // 803C94F8
L_803C94FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803C94FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803C9500
  c->lr=c->r[0]; // 803C9504
  c->r[1]=c->r[1]+0x00000010u; // 803C9508
  return; // 803C950C
}

// Reserve__Q46nw4hbm3lyt6detail11TexCoordAryFUc
void f_803C9510(Ctx* __restrict c) {
  trace_call(0x803C9510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9510
  c->r[0]=c->lr; // 803C9514
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C9518
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803C951C
  c->r[31]=c->r[4]|c->r[4]; // 803C9520
  W32(c->r[1]+0x00000008u,c->r[30]); // 803C9524
  c->r[30]=c->r[3]|c->r[3]; // 803C9528
  c->r[0]=R8(c->r[3]+0x00000000u); // 803C952C
  cmpu(c,0,c->r[0],c->r[4]); // 803C9530
  if (!crb(c,0)) { goto L_803C9580; } // 803C9534
  c->r[4]=R32(c->r[3]+0x00000004u); // 803C9538
  cmps(c,0,(int32_t)c->r[4],0); // 803C953C
  if (crb(c,2)) { goto L_803C9560; } // 803C9540
  c->r[3]=0u+0x806C0000u; // 803C9544
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803C9548
  c->lr=0x803C9550u; f_802A704C(c); // 803C954C
  c->r[0]=0u+0x00000000u; // 803C9550
  W32(c->r[30]+0x00000004u,c->r[0]); // 803C9554
  W8(c->r[30]+0x00000000u,c->r[0]); // 803C9558
  W8(c->r[30]+0x00000001u,c->r[0]); // 803C955C
L_803C9560:;
  c->r[3]=0u+0x806C0000u; // 803C9560
  c->r[4]=rotl(c->r[31],5)&0x00001FE0u; // 803C9564
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803C9568
  c->lr=0x803C9570u; f_802A703C(c); // 803C956C
  cmps(c,0,(int32_t)c->r[3],0); // 803C9570
  W32(c->r[30]+0x00000004u,c->r[3]); // 803C9574
  if (crb(c,2)) { goto L_803C9580; } // 803C9578
  W8(c->r[30]+0x00000000u,c->r[31]); // 803C957C
L_803C9580:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803C9580
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803C9584
  c->r[30]=R32(c->r[1]+0x00000008u); // 803C9588
  c->lr=c->r[0]; // 803C958C
  c->r[1]=c->r[1]+0x00000010u; // 803C9590
  return; // 803C9594
}

// SetSize__Q46nw4hbm3lyt6detail11TexCoordAryFUc
void f_803C9598(Ctx* __restrict c) {
  trace_call(0x803C9598u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C9598
  cmps(c,0,(int32_t)c->r[0],0); // 803C959C
  if (crb(c,2)) return; // 803C95A0
  c->r[0]=R8(c->r[3]+0x00000000u); // 803C95A4
  cmpu(c,0,c->r[4],c->r[0]); // 803C95A8
  if (crb(c,1)) return; // 803C95AC
  c->r[8]=0u+0x806C0000u; // 803C95B0
  c->r[0]=R8(c->r[8]+0x00002580u); // 803C95B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803C95B8
  if (!crb(c,2)) { goto L_803C9600; } // 803C95BC
  c->r[6]=0u+0x803F0000u; // 803C95C0
  c->r[5]=0u+0x803F0000u; // 803C95C4
  c->r[7]=0u+0x806C0000u; // 803C95C8
  {uint32_t ea=c->r[6]+0x00000E30u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C95CC
  c->r[6]=c->r[7]+0x00002588u; // 803C95D0
  {uint32_t ea=c->r[5]+0x00000E34u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C95D4
  c->r[0]=0u+0x00000001u; // 803C95D8
  {uint32_t ea=c->r[7]+0x00002588u; WF32(ea,c->f[1]);} // 803C95DC
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[1]);} // 803C95E0
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 803C95E4
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[1]);} // 803C95E8
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[1]);} // 803C95EC
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 803C95F0
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[0]);} // 803C95F4
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[0]);} // 803C95F8
  W8(c->r[8]+0x00002580u,c->r[0]); // 803C95FC
L_803C9600:;
  c->r[7]=R8(c->r[3]+0x00000001u); // 803C9600
  c->r[6]=0u+0x806C0000u; // 803C9604
  c->r[5]=c->r[6]+0x00002588u; // 803C9608
  {uint32_t ea=c->r[6]+0x00002588u; c->f[7]=c->ps1[7]=RF32(ea);} // 803C960C
  c->r[0]=c->r[4]-c->r[7]; // 803C9610
  c->r[6]=rotl(c->r[7],5)&0xFFFFFFE0u; // 803C9614
  {uint32_t ea=c->r[5]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 803C9618
  {uint32_t ea=c->r[5]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 803C961C
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 803C9620
  {uint32_t ea=c->r[5]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803C9624
  {uint32_t ea=c->r[5]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C9628
  {uint32_t ea=c->r[5]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C962C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9630
  c->ctr=c->r[0]; // 803C9634
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 803C9638
  if (!crb(c,0)) { goto L_803C9688; } // 803C963C
L_803C9640:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C9640
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[7]);} // 803C9644
  c->r[5]=c->r[0]+c->r[6]; // 803C9648
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 803C964C
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C9650
  c->r[5]=c->r[0]+c->r[6]; // 803C9654
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 803C9658
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 803C965C
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C9660
  c->r[5]=c->r[0]+c->r[6]; // 803C9664
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 803C9668
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 803C966C
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C9670
  c->r[5]=c->r[0]+c->r[6]; // 803C9674
  c->r[6]=c->r[6]+0x00000020u; // 803C9678
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 803C967C
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 803C9680
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9640; } // 803C9684
L_803C9688:;
  W8(c->r[3]+0x00000001u,c->r[4]); // 803C9688
  return; // 803C968C
}

// Copy__Q46nw4hbm3lyt6detail11TexCoordAryFPCvUc
void f_803C9690(Ctx* __restrict c) {
  trace_call(0x803C9690u);
  c->r[0]=R8(c->r[3]+0x00000001u); // 803C9690
  cmpu(c,0,c->r[0],c->r[5]); // 803C9694
  if (!crb(c,0)) { goto L_803C96A0; } // 803C9698
  c->r[0]=c->r[5]|c->r[5]; // 803C969C
L_803C96A0:;
  W8(c->r[3]+0x00000001u,c->r[0]); // 803C96A0
  c->r[6]=0u+0x00000000u; // 803C96A4
  c->ctr=c->r[5]; // 803C96A8
  cmps(c,0,(int32_t)c->r[5],0); // 803C96AC
  if (!crb(c,1)) return; // 803C96B0
L_803C96B4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C96B4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C96B8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C96BC
  c->r[5]=c->r[0]+c->r[6]; // 803C96C0
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[1]);} // 803C96C4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C96C8
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 803C96CC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C96D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C96D4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803C96D8
  c->r[5]=c->r[0]+c->r[6]; // 803C96DC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C96E0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 803C96E4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C96E8
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 803C96EC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C96F0
  c->r[4]=c->r[4]+0x00000020u; // 803C96F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C96F8
  c->r[5]=c->r[0]+c->r[6]; // 803C96FC
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 803C9700
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 803C9704
  c->r[0]=R32(c->r[3]+0x00000004u); // 803C9708
  c->r[5]=c->r[0]+c->r[6]; // 803C970C
  c->r[6]=c->r[6]+0x00000020u; // 803C9710
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 803C9714
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[0]);} // 803C9718
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C96B4; } // 803C971C
  return; // 803C9720
}

// IsModulateVertexColor__Q36nw4hbm3lyt6detailFPQ36nw4hbm2ut5ColorUc
void f_803C9724(Ctx* __restrict c) {
  trace_call(0x803C9724u);
  cmpu(c,0,c->r[4],0x000000FFu); // 803C9724
  if (crb(c,2)) { goto L_803C9734; } // 803C9728
  c->r[3]=0u+0x00000001u; // 803C972C
  return; // 803C9730
L_803C9734:;
  cmps(c,0,(int32_t)c->r[3],0); // 803C9734
  if (crb(c,2)) { goto L_803C9784; } // 803C9738
  c->r[4]=R32(c->r[3]+0x00000000u); // 803C973C
  c->r[0]=c->r[4]+0x00010000u; // 803C9740
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803C9744
  if (!crb(c,2)) { goto L_803C977C; } // 803C9748
  c->r[4]=R32(c->r[3]+0x00000004u); // 803C974C
  c->r[0]=c->r[4]+0x00010000u; // 803C9750
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803C9754
  if (!crb(c,2)) { goto L_803C977C; } // 803C9758
  c->r[4]=R32(c->r[3]+0x00000008u); // 803C975C
  c->r[0]=c->r[4]+0x00010000u; // 803C9760
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803C9764
  if (!crb(c,2)) { goto L_803C977C; } // 803C9768
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 803C976C
  c->r[0]=c->r[3]+0x00010000u; // 803C9770
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803C9774
  if (crb(c,2)) { goto L_803C9784; } // 803C9778
L_803C977C:;
  c->r[3]=0u+0x00000001u; // 803C977C
  return; // 803C9780
L_803C9784:;
  c->r[3]=0u+0x00000000u; // 803C9784
  return; // 803C9788
}

// MultipleAlpha__Q36nw4hbm3lyt6detailFQ36nw4hbm2ut5ColorUc
void f_803C978C(Ctx* __restrict c) {
  trace_call(0x803C978Cu);
  c->r[8]=R8(c->r[4]+0x00000000u); // 803C978C
  cmpu(c,0,c->r[5],0x000000FFu); // 803C9790
  c->r[7]=R8(c->r[4]+0x00000001u); // 803C9794
  c->r[6]=R8(c->r[4]+0x00000002u); // 803C9798
  c->r[0]=R8(c->r[4]+0x00000003u); // 803C979C
  W8(c->r[3]+0x00000000u,c->r[8]); // 803C97A0
  W8(c->r[3]+0x00000001u,c->r[7]); // 803C97A4
  W8(c->r[3]+0x00000002u,c->r[6]); // 803C97A8
  W8(c->r[3]+0x00000003u,c->r[0]); // 803C97AC
  if (crb(c,2)) return; // 803C97B0
  c->r[0]=R8(c->r[4]+0x00000003u); // 803C97B4
  c->r[4]=0u+0x80810000u; // 803C97B8
  c->r[4]=c->r[4]+0xFFFF8081u; // 803C97BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 803C97C0
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 803C97C4
  c->r[0]=c->r[4]+c->r[0]; // 803C97C8
  c->r[0]=sraw(c,c->r[0],7); // 803C97CC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 803C97D0
  c->r[0]=c->r[0]+c->r[4]; // 803C97D4
  W8(c->r[3]+0x00000003u,c->r[0]); // 803C97D8
  return; // 803C97DC
}

// SetVertexFormat__Q36nw4hbm3lyt6detailFbUc
void f_803C97E0(Ctx* __restrict c) {
  trace_call(0x803C97E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C97E0
  c->r[0]=c->lr; // 803C97E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803C97E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803C97EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803C97F0
  c->r[30]=c->r[4]|c->r[4]; // 803C97F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803C97F8
  c->r[29]=c->r[3]|c->r[3]; // 803C97FC
  c->lr=0x803C9804u; f_80283B58(c); // 803C9800
  c->r[3]=0u+0x00000009u; // 803C9804
  c->r[4]=0u+0x00000001u; // 803C9808
  c->lr=0x803C9810u; f_80283564(c); // 803C980C
  cmps(c,0,(int32_t)c->r[29],0); // 803C9810
  if (crb(c,2)) { goto L_803C9824; } // 803C9814
  c->r[3]=0u+0x0000000Bu; // 803C9818
  c->r[4]=0u+0x00000001u; // 803C981C
  c->lr=0x803C9824u; f_80283564(c); // 803C9820
L_803C9824:;
  c->r[31]=0u+0x00000000u; // 803C9824
  goto L_803C983C; // 803C9828
L_803C982C:;
  c->r[3]=c->r[31]+0x0000000Du; // 803C982C
  c->r[4]=0u+0x00000001u; // 803C9830
  c->lr=0x803C9838u; f_80283564(c); // 803C9834
  c->r[31]=c->r[31]+0x00000001u; // 803C9838
L_803C983C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 803C983C
  if (crb(c,0)) { IRQCHK(c); goto L_803C982C; } // 803C9840
  c->r[3]=0u+0x00000000u; // 803C9844
  c->r[4]=0u+0x00000009u; // 803C9848
  c->r[5]=0u+0x00000000u; // 803C984C
  c->r[6]=0u+0x00000004u; // 803C9850
  c->r[7]=0u+0x00000000u; // 803C9854
  c->lr=0x803C985Cu; f_80283B8C(c); // 803C9858
  cmps(c,0,(int32_t)c->r[29],0); // 803C985C
  if (crb(c,2)) { goto L_803C987C; } // 803C9860
  c->r[3]=0u+0x00000000u; // 803C9864
  c->r[4]=0u+0x0000000Bu; // 803C9868
  c->r[5]=0u+0x00000001u; // 803C986C
  c->r[6]=0u+0x00000005u; // 803C9870
  c->r[7]=0u+0x00000000u; // 803C9874
  c->lr=0x803C987Cu; f_80283B8C(c); // 803C9878
L_803C987C:;
  c->r[31]=0u+0x00000000u; // 803C987C
  goto L_803C98A0; // 803C9880
L_803C9884:;
  c->r[4]=c->r[31]+0x0000000Du; // 803C9884
  c->r[3]=0u+0x00000000u; // 803C9888
  c->r[5]=0u+0x00000001u; // 803C988C
  c->r[6]=0u+0x00000004u; // 803C9890
  c->r[7]=0u+0x00000000u; // 803C9894
  c->lr=0x803C989Cu; f_80283B8C(c); // 803C9898
  c->r[31]=c->r[31]+0x00000001u; // 803C989C
L_803C98A0:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 803C98A0
  if (crb(c,0)) { IRQCHK(c); goto L_803C9884; } // 803C98A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803C98A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803C98AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803C98B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803C98B4
  c->lr=c->r[0]; // 803C98B8
  c->r[1]=c->r[1]+0x00000020u; // 803C98BC
  return; // 803C98C0
}

// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5Color
void f_803C98C4(Ctx* __restrict c) {
  trace_call(0x803C98C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C98C4
  c->r[0]=c->lr; // 803C98C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803C98CC
  c->r[11]=c->r[1]+0x00000020u; // 803C98D0
  c->lr=0x803C98D8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803C98D4
  c->r[27]=c->r[3]|c->r[3]; // 803C98D8
  c->r[28]=c->r[4]|c->r[4]; // 803C98DC
  c->r[29]=c->r[5]|c->r[5]; // 803C98E0
  c->r[30]=c->r[6]|c->r[6]; // 803C98E4
  c->r[31]=c->r[7]|c->r[7]; // 803C98E8
  c->r[3]=0u+0x00000080u; // 803C98EC
  c->r[4]=0u+0x00000000u; // 803C98F0
  c->r[5]=0u+0x00000004u; // 803C98F4
  c->lr=0x803C98FCu; f_80284FD0(c); // 803C98F8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C98FC
  c->r[3]=0u+0xCC010000u; // 803C9900
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9904
  cmps(c,0,(int32_t)c->r[31],0); // 803C9908
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C990C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9910
  if (crb(c,2)) { goto L_803C9920; } // 803C9914
  c->r[0]=R32(c->r[31]+0x00000000u); // 803C9918
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 803C991C
L_803C9920:;
  cmps(c,1,(int32_t)c->r[29],0); // 803C9920
  c->r[6]=0u+0x00000000u; // 803C9924
  if (!crb(c,5)) { goto L_803C9A38; } // 803C9928
  cmps(c,0,(int32_t)c->r[29],8); // 803C992C
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 803C9930
  if (!crb(c,1)) { goto L_803C9A04; } // 803C9934
  c->r[5]=0u+0x00000000u; // 803C9938
  if (crb(c,4)) { goto L_803C9954; } // 803C993C
  c->r[3]=0u+0x80000000u; // 803C9940
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803C9944
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803C9948
  if (crb(c,1)) { goto L_803C9954; } // 803C994C
  c->r[5]=0u+0x00000001u; // 803C9950
L_803C9954:;
  cmps(c,0,(int32_t)c->r[5],0); // 803C9954
  if (crb(c,2)) { goto L_803C9A04; } // 803C9958
  c->r[0]=c->r[4]+0x00000007u; // 803C995C
  c->r[5]=c->r[30]|c->r[30]; // 803C9960
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803C9964
  c->r[3]=0u+0xCC010000u; // 803C9968
  c->ctr=c->r[0]; // 803C996C
  cmps(c,0,(int32_t)c->r[4],0); // 803C9970
  if (!crb(c,1)) { goto L_803C9A04; } // 803C9974
L_803C9978:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9978
  c->r[6]=c->r[6]+0x00000008u; // 803C997C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9980
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9984
  {uint32_t ea=c->r[5]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C9988
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C998C
  {uint32_t ea=c->r[5]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9990
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803C9994
  {uint32_t ea=c->r[5]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9998
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C999C
  {uint32_t ea=c->r[5]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C99A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C99A4
  {uint32_t ea=c->r[5]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C99A8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C99AC
  {uint32_t ea=c->r[5]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C99B0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C99B4
  {uint32_t ea=c->r[5]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C99B8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C99BC
  {uint32_t ea=c->r[5]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C99C0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C99C4
  {uint32_t ea=c->r[5]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C99C8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C99CC
  {uint32_t ea=c->r[5]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C99D0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C99D4
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C99D8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C99DC
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C99E0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C99E4
  {uint32_t ea=c->r[5]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C99E8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C99EC
  {uint32_t ea=c->r[5]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C99F0
  c->r[5]=c->r[5]+0x00000100u; // 803C99F4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C99F8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C99FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9978; } // 803C9A00
L_803C9A04:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 803C9A04
  c->r[0]=c->r[29]-c->r[6]; // 803C9A08
  c->r[4]=c->r[30]+c->r[3]; // 803C9A0C
  c->r[3]=0u+0xCC010000u; // 803C9A10
  c->ctr=c->r[0]; // 803C9A14
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 803C9A18
  if (!crb(c,0)) { goto L_803C9A38; } // 803C9A1C
L_803C9A20:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9A20
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9A24
  c->r[4]=c->r[4]+0x00000020u; // 803C9A28
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9A2C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9A30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9A20; } // 803C9A34
L_803C9A38:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9A38
  c->r[3]=0u+0xCC010000u; // 803C9A3C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9A40
  cmps(c,0,(int32_t)c->r[31],0); // 803C9A44
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C9A48
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803C9A4C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9A50
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803C9A54
  if (crb(c,2)) { goto L_803C9A64; } // 803C9A58
  c->r[0]=R32(c->r[31]+0x00000004u); // 803C9A5C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 803C9A60
L_803C9A64:;
  cmps(c,1,(int32_t)c->r[29],0); // 803C9A64
  c->r[6]=0u+0x00000000u; // 803C9A68
  if (!crb(c,5)) { goto L_803C9B7C; } // 803C9A6C
  cmps(c,0,(int32_t)c->r[29],8); // 803C9A70
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 803C9A74
  if (!crb(c,1)) { goto L_803C9B48; } // 803C9A78
  c->r[5]=0u+0x00000000u; // 803C9A7C
  if (crb(c,4)) { goto L_803C9A98; } // 803C9A80
  c->r[3]=0u+0x80000000u; // 803C9A84
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803C9A88
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803C9A8C
  if (crb(c,1)) { goto L_803C9A98; } // 803C9A90
  c->r[5]=0u+0x00000001u; // 803C9A94
L_803C9A98:;
  cmps(c,0,(int32_t)c->r[5],0); // 803C9A98
  if (crb(c,2)) { goto L_803C9B48; } // 803C9A9C
  c->r[0]=c->r[4]+0x00000007u; // 803C9AA0
  c->r[5]=c->r[30]|c->r[30]; // 803C9AA4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803C9AA8
  c->r[3]=0u+0xCC010000u; // 803C9AAC
  c->ctr=c->r[0]; // 803C9AB0
  cmps(c,0,(int32_t)c->r[4],0); // 803C9AB4
  if (!crb(c,1)) { goto L_803C9B48; } // 803C9AB8
L_803C9ABC:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9ABC
  c->r[6]=c->r[6]+0x00000008u; // 803C9AC0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9AC4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9AC8
  {uint32_t ea=c->r[5]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C9ACC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9AD0
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9AD4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803C9AD8
  {uint32_t ea=c->r[5]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9ADC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9AE0
  {uint32_t ea=c->r[5]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9AE4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9AE8
  {uint32_t ea=c->r[5]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9AEC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9AF0
  {uint32_t ea=c->r[5]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9AF4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9AF8
  {uint32_t ea=c->r[5]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9AFC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9B00
  {uint32_t ea=c->r[5]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9B04
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9B08
  {uint32_t ea=c->r[5]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9B0C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9B10
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9B14
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9B18
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9B1C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9B20
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9B24
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9B28
  {uint32_t ea=c->r[5]+0x000000E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9B2C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9B30
  {uint32_t ea=c->r[5]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9B34
  c->r[5]=c->r[5]+0x00000100u; // 803C9B38
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9B3C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9B40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9ABC; } // 803C9B44
L_803C9B48:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 803C9B48
  c->r[0]=c->r[29]-c->r[6]; // 803C9B4C
  c->r[4]=c->r[30]+c->r[3]; // 803C9B50
  c->r[3]=0u+0xCC010000u; // 803C9B54
  c->ctr=c->r[0]; // 803C9B58
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 803C9B5C
  if (!crb(c,0)) { goto L_803C9B7C; } // 803C9B60
L_803C9B64:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9B64
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9B68
  c->r[4]=c->r[4]+0x00000020u; // 803C9B6C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9B70
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9B74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9B64; } // 803C9B78
L_803C9B7C:;
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9B7C
  c->r[3]=0u+0xCC010000u; // 803C9B80
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9B84
  cmps(c,0,(int32_t)c->r[31],0); // 803C9B88
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C9B8C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803C9B90
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9B94
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803C9B98
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9B9C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9BA0
  if (crb(c,2)) { goto L_803C9BB0; } // 803C9BA4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 803C9BA8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 803C9BAC
L_803C9BB0:;
  cmps(c,1,(int32_t)c->r[29],0); // 803C9BB0
  c->r[6]=0u+0x00000000u; // 803C9BB4
  if (!crb(c,5)) { goto L_803C9CC8; } // 803C9BB8
  cmps(c,0,(int32_t)c->r[29],8); // 803C9BBC
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 803C9BC0
  if (!crb(c,1)) { goto L_803C9C94; } // 803C9BC4
  c->r[5]=0u+0x00000000u; // 803C9BC8
  if (crb(c,4)) { goto L_803C9BE4; } // 803C9BCC
  c->r[3]=0u+0x80000000u; // 803C9BD0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803C9BD4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803C9BD8
  if (crb(c,1)) { goto L_803C9BE4; } // 803C9BDC
  c->r[5]=0u+0x00000001u; // 803C9BE0
L_803C9BE4:;
  cmps(c,0,(int32_t)c->r[5],0); // 803C9BE4
  if (crb(c,2)) { goto L_803C9C94; } // 803C9BE8
  c->r[0]=c->r[4]+0x00000007u; // 803C9BEC
  c->r[5]=c->r[30]|c->r[30]; // 803C9BF0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803C9BF4
  c->r[3]=0u+0xCC010000u; // 803C9BF8
  c->ctr=c->r[0]; // 803C9BFC
  cmps(c,0,(int32_t)c->r[4],0); // 803C9C00
  if (!crb(c,1)) { goto L_803C9C94; } // 803C9C04
L_803C9C08:;
  {uint32_t ea=c->r[5]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9C08
  c->r[6]=c->r[6]+0x00000008u; // 803C9C0C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9C10
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9C14
  {uint32_t ea=c->r[5]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C9C18
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9C1C
  {uint32_t ea=c->r[5]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9C20
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803C9C24
  {uint32_t ea=c->r[5]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9C28
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9C2C
  {uint32_t ea=c->r[5]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9C30
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9C34
  {uint32_t ea=c->r[5]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9C38
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9C3C
  {uint32_t ea=c->r[5]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9C40
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9C44
  {uint32_t ea=c->r[5]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9C48
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9C4C
  {uint32_t ea=c->r[5]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9C50
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9C54
  {uint32_t ea=c->r[5]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9C58
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9C5C
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9C60
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9C64
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9C68
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9C6C
  {uint32_t ea=c->r[5]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9C70
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9C74
  {uint32_t ea=c->r[5]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9C78
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9C7C
  {uint32_t ea=c->r[5]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9C80
  c->r[5]=c->r[5]+0x00000100u; // 803C9C84
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9C88
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9C8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9C08; } // 803C9C90
L_803C9C94:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 803C9C94
  c->r[0]=c->r[29]-c->r[6]; // 803C9C98
  c->r[4]=c->r[30]+c->r[3]; // 803C9C9C
  c->r[3]=0u+0xCC010000u; // 803C9CA0
  c->ctr=c->r[0]; // 803C9CA4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 803C9CA8
  if (!crb(c,0)) { goto L_803C9CC8; } // 803C9CAC
L_803C9CB0:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9CB0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9CB4
  c->r[4]=c->r[4]+0x00000020u; // 803C9CB8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9CBC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9CC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9CB0; } // 803C9CC4
L_803C9CC8:;
  {uint32_t ea=c->r[27]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9CC8
  c->r[3]=0u+0xCC010000u; // 803C9CCC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9CD0
  cmps(c,0,(int32_t)c->r[31],0); // 803C9CD4
  {uint32_t ea=c->r[27]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C9CD8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803C9CDC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803C9CE0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9CE4
  if (crb(c,2)) { goto L_803C9CF4; } // 803C9CE8
  c->r[0]=R32(c->r[31]+0x00000008u); // 803C9CEC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 803C9CF0
L_803C9CF4:;
  cmps(c,1,(int32_t)c->r[29],0); // 803C9CF4
  c->r[6]=0u+0x00000000u; // 803C9CF8
  if (!crb(c,5)) { goto L_803C9E0C; } // 803C9CFC
  cmps(c,0,(int32_t)c->r[29],8); // 803C9D00
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 803C9D04
  if (!crb(c,1)) { goto L_803C9DD8; } // 803C9D08
  c->r[5]=0u+0x00000000u; // 803C9D0C
  if (crb(c,4)) { goto L_803C9D28; } // 803C9D10
  c->r[3]=0u+0x80000000u; // 803C9D14
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803C9D18
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803C9D1C
  if (crb(c,1)) { goto L_803C9D28; } // 803C9D20
  c->r[5]=0u+0x00000001u; // 803C9D24
L_803C9D28:;
  cmps(c,0,(int32_t)c->r[5],0); // 803C9D28
  if (crb(c,2)) { goto L_803C9DD8; } // 803C9D2C
  c->r[0]=c->r[4]+0x00000007u; // 803C9D30
  c->r[5]=c->r[30]|c->r[30]; // 803C9D34
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803C9D38
  c->r[3]=0u+0xCC010000u; // 803C9D3C
  c->ctr=c->r[0]; // 803C9D40
  cmps(c,0,(int32_t)c->r[4],0); // 803C9D44
  if (!crb(c,1)) { goto L_803C9DD8; } // 803C9D48
L_803C9D4C:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9D4C
  c->r[6]=c->r[6]+0x00000008u; // 803C9D50
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9D54
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9D58
  {uint32_t ea=c->r[5]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 803C9D5C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9D60
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9D64
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803C9D68
  {uint32_t ea=c->r[5]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9D6C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9D70
  {uint32_t ea=c->r[5]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9D74
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9D78
  {uint32_t ea=c->r[5]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9D7C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9D80
  {uint32_t ea=c->r[5]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9D84
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9D88
  {uint32_t ea=c->r[5]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9D8C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9D90
  {uint32_t ea=c->r[5]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9D94
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9D98
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9D9C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9DA0
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9DA4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9DA8
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9DAC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9DB0
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9DB4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9DB8
  {uint32_t ea=c->r[5]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9DBC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9DC0
  {uint32_t ea=c->r[5]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9DC4
  c->r[5]=c->r[5]+0x00000100u; // 803C9DC8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9DCC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9DD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9D4C; } // 803C9DD4
L_803C9DD8:;
  c->r[3]=rotl(c->r[6],5)&0xFFFFFFE0u; // 803C9DD8
  c->r[0]=c->r[29]-c->r[6]; // 803C9DDC
  c->r[4]=c->r[30]+c->r[3]; // 803C9DE0
  c->r[3]=0u+0xCC010000u; // 803C9DE4
  c->ctr=c->r[0]; // 803C9DE8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 803C9DEC
  if (!crb(c,0)) { goto L_803C9E0C; } // 803C9DF0
L_803C9DF4:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803C9DF4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803C9DF8
  c->r[4]=c->r[4]+0x00000020u; // 803C9DFC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803C9E00
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803C9E04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803C9DF4; } // 803C9E08
L_803C9E0C:;
  c->r[11]=c->r[1]+0x00000020u; // 803C9E0C
  c->lr=0x803C9E14u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803C9E10
  c->r[0]=R32(c->r[1]+0x00000024u); // 803C9E14
  c->lr=c->r[0]; // 803C9E18
  c->r[1]=c->r[1]+0x00000020u; // 803C9E1C
  return; // 803C9E20
}

// DrawQuad__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeUcPA4_CQ36nw4hbm4math4VEC2PCQ36nw4hbm2ut5ColorUc
void f_803C9E24(Ctx* __restrict c) {
  trace_call(0x803C9E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9E24
  c->r[0]=c->lr; // 803C9E28
  W32(c->r[1]+0x00000054u,c->r[0]); // 803C9E2C
  c->r[11]=c->r[1]+0x00000050u; // 803C9E30
  c->lr=0x803C9E38u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803C9E34
  c->r[0]=0u+0xFFFFFFFFu; // 803C9E38
  cmps(c,0,(int32_t)c->r[7],0); // 803C9E3C
  W32(c->r[1]+0x00000010u,c->r[0]); // 803C9E40
  c->r[26]=c->r[3]|c->r[3]; // 803C9E44
  c->r[27]=c->r[4]|c->r[4]; // 803C9E48
  c->r[28]=c->r[5]|c->r[5]; // 803C9E4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803C9E50
  c->r[29]=c->r[6]|c->r[6]; // 803C9E54
  c->r[30]=c->r[7]|c->r[7]; // 803C9E58
  c->r[31]=c->r[8]|c->r[8]; // 803C9E5C
  W32(c->r[1]+0x00000018u,c->r[0]); // 803C9E60
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803C9E64
  if (crb(c,2)) { goto L_803C9EDC; } // 803C9E68
  c->r[24]=c->r[30]|c->r[30]; // 803C9E6C
  c->r[23]=c->r[1]+0x00000010u; // 803C9E70
  c->r[25]=0u+0x00000000u; // 803C9E74
L_803C9E78:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 803C9E78
  c->r[5]=c->r[31]|c->r[31]; // 803C9E7C
  c->r[3]=c->r[1]+0x0000000Cu; // 803C9E80
  c->r[4]=c->r[1]+0x00000008u; // 803C9E84
  W8(c->r[1]+0x00000008u,c->r[0]); // 803C9E88
  c->r[0]=R8(c->r[24]+0x00000001u); // 803C9E8C
  W8(c->r[1]+0x00000009u,c->r[0]); // 803C9E90
  c->r[0]=R8(c->r[24]+0x00000002u); // 803C9E94
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803C9E98
  c->r[0]=R8(c->r[24]+0x00000003u); // 803C9E9C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803C9EA0
  c->lr=0x803C9EA8u; f_803C978C(c); // 803C9EA4
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 803C9EA8
  c->r[25]=c->r[25]+0x00000001u; // 803C9EAC
  c->r[0]=R8(c->r[1]+0x0000000Du); // 803C9EB0
  cmps(c,0,(int32_t)c->r[25],4); // 803C9EB4
  W8(c->r[23]+0x00000000u,c->r[3]); // 803C9EB8
  c->r[24]=c->r[24]+0x00000004u; // 803C9EBC
  c->r[3]=R8(c->r[1]+0x0000000Eu); // 803C9EC0
  W8(c->r[23]+0x00000001u,c->r[0]); // 803C9EC4
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 803C9EC8
  W8(c->r[23]+0x00000002u,c->r[3]); // 803C9ECC
  W8(c->r[23]+0x00000003u,c->r[0]); // 803C9ED0
  c->r[23]=c->r[23]+0x00000004u; // 803C9ED4
  if (crb(c,0)) { IRQCHK(c); goto L_803C9E78; } // 803C9ED8
L_803C9EDC:;
  c->r[3]=0u-c->r[30]; // 803C9EDC
  c->r[0]=c->r[1]+0x00000010u; // 803C9EE0
  c->r[4]=c->r[3]|c->r[30]; // 803C9EE4
  c->r[5]=c->r[28]|c->r[28]; // 803C9EE8
  c->r[7]=sraw(c,c->r[4],31); // 803C9EEC
  c->r[3]=c->r[26]|c->r[26]; // 803C9EF0
  c->r[4]=c->r[27]|c->r[27]; // 803C9EF4
  c->r[6]=c->r[29]|c->r[29]; // 803C9EF8
  c->r[7]=c->r[0]&c->r[7]; // 803C9EFC
  c->lr=0x803C9F04u; f_803C98C4(c); // 803C9F00
  c->r[11]=c->r[1]+0x00000050u; // 803C9F04
  c->lr=0x803C9F0Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803C9F08
  c->r[0]=R32(c->r[1]+0x00000054u); // 803C9F0C
  c->lr=c->r[0]; // 803C9F10
  c->r[1]=c->r[1]+0x00000050u; // 803C9F14
  return; // 803C9F18
}

// DrawLine__Q36nw4hbm3lyt6detailFRCQ36nw4hbm4math4VEC2RCQ36nw4hbm3lyt4SizeQ36nw4hbm2ut5Color
void f_803C9F1C(Ctx* __restrict c) {
  trace_call(0x803C9F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803C9F1C
  c->r[0]=c->lr; // 803C9F20
  W32(c->r[1]+0x00000024u,c->r[0]); // 803C9F24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803C9F28
  c->r[31]=c->r[5]|c->r[5]; // 803C9F2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803C9F30
  c->r[30]=c->r[4]|c->r[4]; // 803C9F34
  W32(c->r[1]+0x00000014u,c->r[29]); // 803C9F38
  c->r[29]=c->r[3]|c->r[3]; // 803C9F3C
  c->lr=0x803C9F44u; f_80283B58(c); // 803C9F40
  c->r[3]=0u+0x00000009u; // 803C9F44
  c->r[4]=0u+0x00000001u; // 803C9F48
  c->lr=0x803C9F50u; f_80283564(c); // 803C9F4C
  c->r[3]=0u+0x00000000u; // 803C9F50
  c->r[4]=0u+0x00000009u; // 803C9F54
  c->r[5]=0u+0x00000000u; // 803C9F58
  c->r[6]=0u+0x00000004u; // 803C9F5C
  c->r[7]=0u+0x00000000u; // 803C9F60
  c->lr=0x803C9F68u; f_80283B8C(c); // 803C9F64
  c->r[3]=0u+0x00000001u; // 803C9F68
  c->lr=0x803C9F70u; f_80286190(c); // 803C9F6C
  c->r[3]=0u+0x00000004u; // 803C9F70
  c->r[4]=0u+0x00000000u; // 803C9F74
  c->r[5]=0u+0x00000000u; // 803C9F78
  c->r[6]=0u+0x00000000u; // 803C9F7C
  c->r[7]=0u+0x00000000u; // 803C9F80
  c->r[8]=0u+0x00000000u; // 803C9F84
  c->r[9]=0u+0x00000002u; // 803C9F88
  c->lr=0x803C9F90u; f_802861B4(c); // 803C9F8C
  c->r[7]=R8(c->r[31]+0x00000000u); // 803C9F90
  c->r[4]=c->r[1]+0x00000008u; // 803C9F94
  c->r[6]=R8(c->r[31]+0x00000001u); // 803C9F98
  c->r[3]=0u+0x00000004u; // 803C9F9C
  c->r[5]=R8(c->r[31]+0x00000002u); // 803C9FA0
  c->r[0]=R8(c->r[31]+0x00000003u); // 803C9FA4
  W8(c->r[1]+0x00000008u,c->r[7]); // 803C9FA8
  W8(c->r[1]+0x00000009u,c->r[6]); // 803C9FAC
  W8(c->r[1]+0x0000000Au,c->r[5]); // 803C9FB0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803C9FB4
  c->lr=0x803C9FBCu; f_802860B8(c); // 803C9FB8
  c->r[3]=0u+0x00000000u; // 803C9FBC
  c->lr=0x803C9FC4u; f_80284454(c); // 803C9FC0
  c->r[3]=0u+0x00000001u; // 803C9FC4
  c->lr=0x803C9FCCu; f_80287DA0(c); // 803C9FC8
  c->r[3]=0u+0x00000000u; // 803C9FCC
  c->lr=0x803C9FD4u; f_80287630(c); // 803C9FD0
  c->r[3]=0u+0x00000000u; // 803C9FD4
  c->r[4]=0u+0x000000FFu; // 803C9FD8
  c->r[5]=0u+0x000000FFu; // 803C9FDC
  c->r[6]=0u+0x00000004u; // 803C9FE0
  c->lr=0x803C9FE8u; f_80287C44(c); // 803C9FE4
  c->r[3]=0u+0x00000000u; // 803C9FE8
  c->r[4]=0u+0x00000004u; // 803C9FEC
  c->lr=0x803C9FF4u; f_80287744(c); // 803C9FF0
  c->r[3]=0u+0x00000000u; // 803C9FF4
  c->lr=0x803C9FFCu; f_80287650(c); // 803C9FF8
  c->r[3]=0u+0x00000000u; // 803C9FFC
  c->r[4]=0u+0x00000000u; // 803CA000
  c->r[5]=0u+0x00000000u; // 803CA004
  c->lr=0x803CA00Cu; f_80287AC8(c); // 803CA008
  c->r[3]=0u+0x00000000u; // 803CA00C
  c->r[4]=0u+0x00000000u; // 803CA010
  c->r[5]=0u+0x00000001u; // 803CA014
  c->r[6]=0u+0x00000002u; // 803CA018
  c->r[7]=0u+0x00000003u; // 803CA01C
  c->lr=0x803CA024u; f_80287B04(c); // 803CA020
  c->r[3]=0u+0x00000007u; // 803CA024
  c->r[4]=0u+0x00000000u; // 803CA028
  c->r[5]=0u+0x00000000u; // 803CA02C
  c->r[6]=0u+0x00000007u; // 803CA030
  c->r[7]=0u+0x00000000u; // 803CA034
  c->lr=0x803CA03Cu; f_80287B80(c); // 803CA038
  c->r[3]=0u+0x00000001u; // 803CA03C
  c->r[4]=0u+0x00000004u; // 803CA040
  c->r[5]=0u+0x00000005u; // 803CA044
  c->r[6]=0u+0x0000000Fu; // 803CA048
  c->lr=0x803CA050u; f_80288274(c); // 803CA04C
  c->r[3]=0u+0x00000006u; // 803CA050
  c->r[4]=0u+0x00000000u; // 803CA054
  c->lr=0x803CA05Cu; f_802851F4(c); // 803CA058
  c->r[3]=0u+0x000000B0u; // 803CA05C
  c->r[4]=0u+0x00000000u; // 803CA060
  c->r[5]=0u+0x00000005u; // 803CA064
  c->lr=0x803CA06Cu; f_80284FD0(c); // 803CA068
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CA06C
  c->r[3]=0u+0xCC010000u; // 803CA070
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CA074
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803CA078
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CA07C
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 803CA080
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CA084
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803CA088
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803CA08C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 803CA090
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803CA094
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[3]);} // 803CA098
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803CA09C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803CA0A0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[0]);} // 803CA0A4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[1]);} // 803CA0A8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[2]);} // 803CA0AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CA0B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CA0B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CA0B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CA0BC
  c->lr=c->r[0]; // 803CA0C0
  c->r[1]=c->r[1]+0x00000020u; // 803CA0C4
  return; // 803CA0C8
}

// InitGXTexObjFromTPL__Q36nw4hbm3lyt6detailFP9_GXTexObjP10TPLPaletteUl
void f_803CA0CC(Ctx* __restrict c) {
  trace_call(0x803CA0CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA0CC
  c->r[0]=c->lr; // 803CA0D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CA0D4
  c->r[0]=0u+0x80000000u; // 803CA0D8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803CA0DC
  c->r[31]=c->r[3]|c->r[3]; // 803CA0E0
  W32(c->r[1]+0x00000028u,c->r[30]); // 803CA0E4
  c->r[30]=c->r[5]|c->r[5]; // 803CA0E8
  W32(c->r[1]+0x00000024u,c->r[29]); // 803CA0EC
  c->r[29]=c->r[4]|c->r[4]; // 803CA0F0
  c->r[6]=R32(c->r[4]+0x00000008u); // 803CA0F4
  cmpu(c,0,c->r[6],c->r[0]); // 803CA0F8
  if (!crb(c,0)) { goto L_803CA108; } // 803CA0FC
  c->r[3]=c->r[29]|c->r[29]; // 803CA100
  c->lr=0x803CA108u; f_802F3240(c); // 803CA104
L_803CA108:;
  c->r[3]=c->r[29]|c->r[29]; // 803CA108
  c->r[4]=c->r[30]|c->r[30]; // 803CA10C
  c->lr=0x803CA114u; f_802F3354(c); // 803CA110
  c->r[9]=R32(c->r[3]+0x00000000u); // 803CA114
  c->r[30]=c->r[3]|c->r[3]; // 803CA118
  c->r[0]=R32(c->r[3]+0x00000004u); // 803CA11C
  c->r[5]=R8(c->r[9]+0x00000021u); // 803CA120
  c->r[4]=R8(c->r[9]+0x00000022u); // 803CA124
  cmps(c,0,(int32_t)c->r[0],0); // 803CA128
  c->r[3]=c->r[4]-c->r[5]; // 803CA12C
  c->r[0]=c->r[5]-c->r[4]; // 803CA130
  c->r[0]=c->r[3]|c->r[0]; // 803CA134
  c->r[10]=rotl(c->r[0],1)&0x00000001u; // 803CA138
  if (crb(c,2)) { goto L_803CA178; } // 803CA13C
  c->r[0]=0u+0x00000000u; // 803CA140
  c->r[3]=c->r[31]|c->r[31]; // 803CA144
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CA148
  c->r[4]=R32(c->r[9]+0x00000008u); // 803CA14C
  c->r[5]=R16(c->r[9]+0x00000002u); // 803CA150
  c->r[6]=R16(c->r[9]+0x00000000u); // 803CA154
  c->r[7]=R32(c->r[9]+0x00000004u); // 803CA158
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 803CA15C
  c->r[9]=R32(c->r[9]+0x00000010u); // 803CA160
  c->lr=0x803CA168u; f_80286648(c); // 803CA164
  c->r[4]=R32(c->r[30]+0x00000004u); // 803CA168
  c->r[3]=c->r[31]|c->r[31]; // 803CA16C
  c->lr=0x803CA174u; f_80286850(c); // 803CA170
  goto L_803CA198; // 803CA174
L_803CA178:;
  c->r[4]=R32(c->r[9]+0x00000008u); // 803CA178
  c->r[3]=c->r[31]|c->r[31]; // 803CA17C
  c->r[5]=R16(c->r[9]+0x00000002u); // 803CA180
  c->r[6]=R16(c->r[9]+0x00000000u); // 803CA184
  c->r[7]=R32(c->r[9]+0x00000004u); // 803CA188
  c->r[8]=R32(c->r[9]+0x0000000Cu); // 803CA18C
  c->r[9]=R32(c->r[9]+0x00000010u); // 803CA190
  c->lr=0x803CA198u; f_8028643C(c); // 803CA194
L_803CA198:;
  c->r[9]=R32(c->r[30]+0x00000000u); // 803CA198
  c->r[5]=0u+0x43300000u; // 803CA19C
  c->r[4]=0u+0x803F0000u; // 803CA1A0
  W32(c->r[1]+0x00000010u,c->r[5]); // 803CA1A4
  c->r[7]=R8(c->r[9]+0x00000021u); // 803CA1A8
  c->r[3]=c->r[31]|c->r[31]; // 803CA1AC
  c->r[0]=R8(c->r[9]+0x00000022u); // 803CA1B0
  c->r[6]=0u+0x00000000u; // 803CA1B4
  W32(c->r[1]+0x00000014u,c->r[7]); // 803CA1B8
  c->r[8]=0u+0x00000000u; // 803CA1BC
  {uint32_t ea=c->r[4]+0x00000E38u; c->f[2]=RF64(ea);} // 803CA1C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803CA1C4
  W32(c->r[1]+0x00000018u,c->r[5]); // 803CA1C8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 803CA1CC
  c->r[4]=R32(c->r[9]+0x00000014u); // 803CA1D0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803CA1D4
  c->r[5]=R32(c->r[9]+0x00000018u); // 803CA1D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803CA1DC
  {uint32_t ea=c->r[9]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803CA1E0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 803CA1E4
  c->r[7]=R8(c->r[9]+0x00000020u); // 803CA1E8
  c->lr=0x803CA1F0u; f_80286690(c); // 803CA1EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CA1F0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803CA1F4
  c->r[30]=R32(c->r[1]+0x00000028u); // 803CA1F8
  c->r[29]=R32(c->r[1]+0x00000024u); // 803CA1FC
  c->lr=c->r[0]; // 803CA200
  c->r[1]=c->r[1]+0x00000030u; // 803CA204
  return; // 803CA208
}

// __ct__Q36nw4hbm3lyt8DrawInfoFv
void f_803CA20C(Ctx* __restrict c) {
  trace_call(0x803CA20Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA20C
  c->r[0]=c->lr; // 803CA210
  c->r[5]=0u+0x803F0000u; // 803CA214
  c->r[4]=0u+0x803F0000u; // 803CA218
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CA21C
  {uint32_t ea=c->r[5]+0x00000E40u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CA220
  c->r[5]=0u+0x80440000u; // 803CA224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CA228
  c->r[5]=c->r[5]+0xFFFF8F08u; // 803CA22C
  {uint32_t ea=c->r[4]+0x00000E44u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CA230
  c->r[31]=c->r[3]|c->r[3]; // 803CA234
  W32(c->r[3]+0x00000000u,c->r[5]); // 803CA238
  c->r[4]=0u+0x00000000u; // 803CA23C
  c->r[5]=0u+0x00000001u; // 803CA240
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 803CA244
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 803CA248
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 803CA24C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 803CA250
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 803CA254
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 803CA258
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 803CA25C
  c->r[3]=c->r[3]+0x00000050u; // 803CA260
  c->lr=0x803CA268u; f_800043EC(c); // 803CA264
  c->r[3]=c->r[31]+0x00000004u; // 803CA268
  c->lr=0x803CA270u; f_80264680(c); // 803CA26C
  c->r[3]=c->r[31]|c->r[31]; // 803CA270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CA274
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CA278
  c->lr=c->r[0]; // 803CA27C
  c->r[1]=c->r[1]+0x00000010u; // 803CA280
  return; // 803CA284
}

// fn_803CA288
void f_803CA288(Ctx* __restrict c) {
  trace_call(0x803CA288u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA288
  c->r[0]=c->lr; // 803CA28C
  cmps(c,0,(int32_t)c->r[3],0); // 803CA290
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CA294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CA298
  c->r[31]=c->r[3]|c->r[3]; // 803CA29C
  if (crb(c,2)) { goto L_803CA2B0; } // 803CA2A0
  cmps(c,0,(int32_t)c->r[4],0); // 803CA2A4
  if (!crb(c,1)) { goto L_803CA2B0; } // 803CA2A8
  c->lr=0x803CA2B0u; f_802896EC(c); // 803CA2AC
L_803CA2B0:;
  c->r[3]=c->r[31]|c->r[31]; // 803CA2B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CA2B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CA2B8
  c->lr=c->r[0]; // 803CA2BC
  c->r[1]=c->r[1]+0x00000010u; // 803CA2C0
  return; // 803CA2C4
}

// __ct__Q36nw4hbm3lyt5GroupFPCQ46nw4hbm3lyt3res5GroupPQ36nw4hbm3lyt4Pane
void f_803CA2C8(Ctx* __restrict c) {
  trace_call(0x803CA2C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA2C8
  c->r[0]=c->lr; // 803CA2CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803CA2D0
  c->r[11]=c->r[1]+0x00000040u; // 803CA2D4
  c->lr=0x803CA2DCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CA2D8
  c->r[29]=0u+0x00000000u; // 803CA2DC
  c->r[6]=0u+0x80440000u; // 803CA2E0
  W32(c->r[3]+0x00000010u,c->r[29]); // 803CA2E4
  c->r[7]=c->r[3]+0x00000010u; // 803CA2E8
  c->r[6]=c->r[6]+0xFFFF8F38u; // 803CA2EC
  c->r[24]=c->r[4]|c->r[4]; // 803CA2F0
  W32(c->r[3]+0x00000014u,c->r[29]); // 803CA2F4
  c->r[25]=c->r[5]|c->r[5]; // 803CA2F8
  c->r[23]=c->r[3]|c->r[3]; // 803CA2FC
  c->r[5]=0u+0x00000010u; // 803CA300
  W32(c->r[3]+0x00000000u,c->r[6]); // 803CA304
  c->r[4]=c->r[4]+0x00000008u; // 803CA308
  W32(c->r[3]+0x00000004u,c->r[29]); // 803CA30C
  W32(c->r[3]+0x00000008u,c->r[29]); // 803CA310
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 803CA314
  W32(c->r[3]+0x00000010u,c->r[7]); // 803CA318
  W32(c->r[3]+0x00000014u,c->r[7]); // 803CA31C
  W8(c->r[3]+0x00000028u,c->r[29]); // 803CA320
  c->r[3]=c->r[3]+0x00000018u; // 803CA324
  c->lr=0x803CA32Cu; f_80235294(c); // 803CA328
  c->r[27]=c->r[24]+0x0000001Cu; // 803CA32C
  c->r[26]=0u+0x00000000u; // 803CA330
  c->r[28]=0u+0x00000000u; // 803CA334
  c->r[31]=0u+0x806C0000u; // 803CA338
  goto L_803CA3AC; // 803CA33C
L_803CA340:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 803CA340
  c->r[3]=c->r[25]|c->r[25]; // 803CA344
  c->r[4]=c->r[27]+c->r[28]; // 803CA348
  c->r[5]=0u+0x00000001u; // 803CA34C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803CA350
  c->ctr=c->r[12]; // 803CA354
  if (true) { c->lr=0x803CA35Cu; dispatch(c,c->ctr); } // 803CA358
  cmps(c,0,(int32_t)c->r[3],0); // 803CA35C
  c->r[30]=c->r[3]|c->r[3]; // 803CA360
  if (crb(c,2)) { goto L_803CA3A4; } // 803CA364
  c->r[3]=R32(c->r[31]+0x000025A8u); // 803CA368
  c->r[4]=0u+0x0000000Cu; // 803CA36C
  c->lr=0x803CA374u; f_802A703C(c); // 803CA370
  cmps(c,0,(int32_t)c->r[3],0); // 803CA374
  if (crb(c,2)) { goto L_803CA3A4; } // 803CA378
  c->r[5]=c->r[3]|c->r[3]; // 803CA37C
  if (crb(c,2)) { goto L_803CA38C; } // 803CA380
  W32(c->r[3]+0x00000000u,c->r[29]); // 803CA384
  W32(c->r[3]+0x00000004u,c->r[29]); // 803CA388
L_803CA38C:;
  W32(c->r[3]+0x00000008u,c->r[30]); // 803CA38C
  c->r[0]=c->r[23]+0x00000010u; // 803CA390
  c->r[3]=c->r[23]+0x0000000Cu; // 803CA394
  c->r[4]=c->r[1]+0x00000008u; // 803CA398
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CA39C
  c->lr=0x803CA3A4u; f_803D5788(c); // 803CA3A0
L_803CA3A4:;
  c->r[28]=c->r[28]+0x00000010u; // 803CA3A4
  c->r[26]=c->r[26]+0x00000001u; // 803CA3A8
L_803CA3AC:;
  c->r[0]=R16(c->r[24]+0x00000018u); // 803CA3AC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 803CA3B0
  if (crb(c,0)) { IRQCHK(c); goto L_803CA340; } // 803CA3B4
  c->r[11]=c->r[1]+0x00000040u; // 803CA3B8
  c->r[3]=c->r[23]|c->r[23]; // 803CA3BC
  c->lr=0x803CA3C4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CA3C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803CA3C4
  c->lr=c->r[0]; // 803CA3C8
  c->r[1]=c->r[1]+0x00000040u; // 803CA3CC
  return; // 803CA3D0
}

// __dt__Q36nw4hbm3lyt5GroupFv
void f_803CA3D4(Ctx* __restrict c) {
  trace_call(0x803CA3D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA3D4
  c->r[0]=c->lr; // 803CA3D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CA3DC
  c->r[11]=c->r[1]+0x00000030u; // 803CA3E0
  c->lr=0x803CA3E8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CA3E4
  cmps(c,0,(int32_t)c->r[3],0); // 803CA3E8
  c->r[26]=c->r[3]|c->r[3]; // 803CA3EC
  c->r[27]=c->r[4]|c->r[4]; // 803CA3F0
  if (crb(c,2)) { goto L_803CA460; } // 803CA3F4
  c->r[4]=0u+0x80440000u; // 803CA3F8
  c->r[31]=R32(c->r[3]+0x00000010u); // 803CA3FC
  c->r[4]=c->r[4]+0xFFFF8F38u; // 803CA400
  c->r[30]=c->r[3]+0x00000010u; // 803CA404
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CA408
  c->r[29]=0u+0x806C0000u; // 803CA40C
  goto L_803CA438; // 803CA410
L_803CA414:;
  c->r[28]=c->r[31]|c->r[31]; // 803CA414
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CA418
  c->r[3]=c->r[26]+0x0000000Cu; // 803CA41C
  c->r[4]=c->r[1]+0x00000008u; // 803CA420
  W32(c->r[1]+0x00000008u,c->r[28]); // 803CA424
  c->lr=0x803CA42Cu; f_803D5740(c); // 803CA428
  c->r[3]=R32(c->r[29]+0x000025A8u); // 803CA42C
  c->r[4]=c->r[28]|c->r[28]; // 803CA430
  c->lr=0x803CA438u; f_802A704C(c); // 803CA434
L_803CA438:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CA438
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA414; } // 803CA43C
  c->r[3]=addc(c,c->r[26],0x0000000Cu,0); cr0(c,c->r[3]); // 803CA440
  if (crb(c,2)) { goto L_803CA450; } // 803CA444
  c->r[4]=0u+0x00000000u; // 803CA448
  c->lr=0x803CA450u; f_803D56BC(c); // 803CA44C
L_803CA450:;
  cmps(c,0,(int32_t)c->r[27],0); // 803CA450
  if (!crb(c,1)) { goto L_803CA460; } // 803CA454
  c->r[3]=c->r[26]|c->r[26]; // 803CA458
  c->lr=0x803CA460u; f_802896EC(c); // 803CA45C
L_803CA460:;
  c->r[11]=c->r[1]+0x00000030u; // 803CA460
  c->r[3]=c->r[26]|c->r[26]; // 803CA464
  c->lr=0x803CA46Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CA468
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CA46C
  c->lr=c->r[0]; // 803CA470
  c->r[1]=c->r[1]+0x00000030u; // 803CA474
  return; // 803CA478
}

// __dt__Q36nw4hbm3lyt14GroupContainerFv
void f_803CA47C(Ctx* __restrict c) {
  trace_call(0x803CA47Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA47C
  c->r[0]=c->lr; // 803CA480
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CA484
  c->r[11]=c->r[1]+0x00000030u; // 803CA488
  c->lr=0x803CA490u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CA48C
  cmps(c,0,(int32_t)c->r[3],0); // 803CA490
  c->r[26]=c->r[3]|c->r[3]; // 803CA494
  c->r[27]=c->r[4]|c->r[4]; // 803CA498
  if (crb(c,2)) { goto L_803CA528; } // 803CA49C
  c->r[31]=R32(c->r[3]+0x00000004u); // 803CA4A0
  c->r[30]=c->r[3]+0x00000004u; // 803CA4A4
  c->r[29]=0u+0x806C0000u; // 803CA4A8
  goto L_803CA4FC; // 803CA4AC
L_803CA4B0:;
  c->r[28]=c->r[31]|c->r[31]; // 803CA4B0
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CA4B4
  c->r[3]=c->r[26]|c->r[26]; // 803CA4B8
  c->r[4]=c->r[1]+0x00000008u; // 803CA4BC
  W32(c->r[1]+0x00000008u,c->r[28]); // 803CA4C0
  c->lr=0x803CA4C8u; f_803D5740(c); // 803CA4C4
  c->r[0]=R8(c->r[28]+0x00000024u); // 803CA4C8
  cmps(c,0,(int32_t)c->r[0],0); // 803CA4CC
  if (!crb(c,2)) { goto L_803CA4FC; } // 803CA4D0
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 803CA4D4
  c->r[4]=0u+0xFFFFFFFFu; // 803CA4D8
  c->r[12]=R32(c->r[28]+0x00000000u); // 803CA4DC
  c->r[3]=c->r[28]|c->r[28]; // 803CA4E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 803CA4E4
  c->ctr=c->r[12]; // 803CA4E8
  if (true) { c->lr=0x803CA4F0u; dispatch(c,c->ctr); } // 803CA4EC
  c->r[3]=R32(c->r[29]+0x000025A8u); // 803CA4F0
  c->r[4]=c->r[28]|c->r[28]; // 803CA4F4
  c->lr=0x803CA4FCu; f_802A704C(c); // 803CA4F8
L_803CA4FC:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CA4FC
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA4B0; } // 803CA500
  cmps(c,0,(int32_t)c->r[26],0); // 803CA504
  if (crb(c,2)) { goto L_803CA518; } // 803CA508
  c->r[3]=c->r[26]|c->r[26]; // 803CA50C
  c->r[4]=0u+0x00000000u; // 803CA510
  c->lr=0x803CA518u; f_803D56BC(c); // 803CA514
L_803CA518:;
  cmps(c,0,(int32_t)c->r[27],0); // 803CA518
  if (!crb(c,1)) { goto L_803CA528; } // 803CA51C
  c->r[3]=c->r[26]|c->r[26]; // 803CA520
  c->lr=0x803CA528u; f_802896EC(c); // 803CA524
L_803CA528:;
  c->r[11]=c->r[1]+0x00000030u; // 803CA528
  c->r[3]=c->r[26]|c->r[26]; // 803CA52C
  c->lr=0x803CA534u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CA530
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CA534
  c->lr=c->r[0]; // 803CA538
  c->r[1]=c->r[1]+0x00000030u; // 803CA53C
  return; // 803CA540
}

// AppendGroup__Q36nw4hbm3lyt14GroupContainerFPQ36nw4hbm3lyt5Group
void f_803CA544(Ctx* __restrict c) {
  trace_call(0x803CA544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA544
  c->r[0]=c->lr; // 803CA548
  c->r[5]=c->r[4]|c->r[4]; // 803CA54C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CA550
  c->r[0]=c->r[3]+0x00000004u; // 803CA554
  c->r[4]=c->r[1]+0x00000008u; // 803CA558
  c->r[5]=c->r[5]+0x00000004u; // 803CA55C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CA560
  c->lr=0x803CA568u; f_803D5788(c); // 803CA564
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CA568
  c->lr=c->r[0]; // 803CA56C
  c->r[1]=c->r[1]+0x00000010u; // 803CA570
  return; // 803CA574
}

// FindGroupByName__Q36nw4hbm3lyt14GroupContainerFPCc
void f_803CA578(Ctx* __restrict c) {
  trace_call(0x803CA578u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA578
  c->r[0]=c->lr; // 803CA57C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CA580
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CA584
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CA588
  c->r[30]=c->r[3]+0x00000004u; // 803CA58C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CA590
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CA594
  c->r[28]=c->r[4]|c->r[4]; // 803CA598
  c->r[31]=R32(c->r[3]+0x00000004u); // 803CA59C
  goto L_803CA5C8; // 803CA5A0
L_803CA5A4:;
  c->r[29]=c->r[31]+0xFFFFFFFCu; // 803CA5A4
  c->r[4]=c->r[28]|c->r[28]; // 803CA5A8
  c->r[3]=c->r[29]+0x00000018u; // 803CA5AC
  c->lr=0x803CA5B4u; f_803C93F8(c); // 803CA5B0
  cmps(c,0,(int32_t)c->r[3],0); // 803CA5B4
  if (crb(c,2)) { goto L_803CA5C4; } // 803CA5B8
  c->r[3]=c->r[29]|c->r[29]; // 803CA5BC
  goto L_803CA5D4; // 803CA5C0
L_803CA5C4:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CA5C4
L_803CA5C8:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CA5C8
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA5A4; } // 803CA5CC
  c->r[3]=0u+0x00000000u; // 803CA5D0
L_803CA5D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CA5D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CA5D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CA5DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CA5E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CA5E4
  c->lr=c->r[0]; // 803CA5E8
  c->r[1]=c->r[1]+0x00000020u; // 803CA5EC
  return; // 803CA5F0
}

// SetTagProcessorImpl__24@unnamed@lyt_layout_cpp@FPQ36nw4hbm3lyt4PanePQ36nw4hbm2ut19TagProcessorBase<w>
void f_803CA5F4(Ctx* __restrict c) {
  trace_call(0x803CA5F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA5F4
  c->r[0]=c->lr; // 803CA5F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CA5FC
  c->r[11]=c->r[1]+0x00000030u; // 803CA600
  c->lr=0x803CA608u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CA604
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CA608
  c->r[26]=0u+0x806C0000u; // 803CA60C
  c->r[27]=c->r[3]|c->r[3]; // 803CA610
  c->r[24]=c->r[4]|c->r[4]; // 803CA614
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CA618
  c->r[26]=c->r[26]+0x000025C0u; // 803CA61C
  c->ctr=c->r[12]; // 803CA620
  if (true) { c->lr=0x803CA628u; dispatch(c,c->ctr); } // 803CA624
  goto L_803CA640; // 803CA628
L_803CA62C:;
  cmpu(c,0,c->r[3],c->r[26]); // 803CA62C
  if (!crb(c,2)) { goto L_803CA63C; } // 803CA630
  c->r[0]=0u+0x00000001u; // 803CA634
  goto L_803CA64C; // 803CA638
L_803CA63C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803CA63C
L_803CA640:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CA640
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA62C; } // 803CA644
  c->r[0]=0u+0x00000000u; // 803CA648
L_803CA64C:;
  cmps(c,0,(int32_t)c->r[0],0); // 803CA64C
  if (crb(c,2)) { goto L_803CA65C; } // 803CA650
  c->r[3]=c->r[27]|c->r[27]; // 803CA654
  goto L_803CA660; // 803CA658
L_803CA65C:;
  c->r[3]=0u+0x00000000u; // 803CA65C
L_803CA660:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CA660
  if (crb(c,2)) { goto L_803CA66C; } // 803CA664
  W32(c->r[3]+0x000000F4u,c->r[24]); // 803CA668
L_803CA66C:;
  c->r[25]=0u+0x806C0000u; // 803CA66C
  c->r[31]=R32(c->r[27]+0x00000014u); // 803CA670
  c->r[28]=c->r[27]+0x00000014u; // 803CA674
  c->r[25]=c->r[25]+0x000025C0u; // 803CA678
  goto L_803CA774; // 803CA67C
L_803CA680:;
  c->r[26]=c->r[31]+0xFFFFFFFCu; // 803CA680
  c->r[12]=R32(c->r[26]+0x00000000u); // 803CA684
  c->r[3]=c->r[26]|c->r[26]; // 803CA688
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CA68C
  c->ctr=c->r[12]; // 803CA690
  if (true) { c->lr=0x803CA698u; dispatch(c,c->ctr); } // 803CA694
  goto L_803CA6B0; // 803CA698
L_803CA69C:;
  cmpu(c,0,c->r[3],c->r[25]); // 803CA69C
  if (!crb(c,2)) { goto L_803CA6AC; } // 803CA6A0
  c->r[0]=0u+0x00000001u; // 803CA6A4
  goto L_803CA6BC; // 803CA6A8
L_803CA6AC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803CA6AC
L_803CA6B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CA6B0
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA69C; } // 803CA6B4
  c->r[0]=0u+0x00000000u; // 803CA6B8
L_803CA6BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 803CA6BC
  if (crb(c,2)) { goto L_803CA6CC; } // 803CA6C0
  c->r[3]=c->r[26]|c->r[26]; // 803CA6C4
  goto L_803CA6D0; // 803CA6C8
L_803CA6CC:;
  c->r[3]=0u+0x00000000u; // 803CA6CC
L_803CA6D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CA6D0
  if (crb(c,2)) { goto L_803CA6DC; } // 803CA6D4
  W32(c->r[3]+0x000000F4u,c->r[24]); // 803CA6D8
L_803CA6DC:;
  c->r[30]=R32(c->r[26]+0x00000014u); // 803CA6DC
  c->r[27]=c->r[26]+0x00000014u; // 803CA6E0
  goto L_803CA768; // 803CA6E4
L_803CA6E8:;
  c->r[26]=c->r[30]+0xFFFFFFFCu; // 803CA6E8
  c->r[12]=R32(c->r[26]+0x00000000u); // 803CA6EC
  c->r[3]=c->r[26]|c->r[26]; // 803CA6F0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CA6F4
  c->ctr=c->r[12]; // 803CA6F8
  if (true) { c->lr=0x803CA700u; dispatch(c,c->ctr); } // 803CA6FC
  goto L_803CA718; // 803CA700
L_803CA704:;
  cmpu(c,0,c->r[3],c->r[25]); // 803CA704
  if (!crb(c,2)) { goto L_803CA714; } // 803CA708
  c->r[0]=0u+0x00000001u; // 803CA70C
  goto L_803CA724; // 803CA710
L_803CA714:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803CA714
L_803CA718:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CA718
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA704; } // 803CA71C
  c->r[0]=0u+0x00000000u; // 803CA720
L_803CA724:;
  cmps(c,0,(int32_t)c->r[0],0); // 803CA724
  if (crb(c,2)) { goto L_803CA734; } // 803CA728
  c->r[3]=c->r[26]|c->r[26]; // 803CA72C
  goto L_803CA738; // 803CA730
L_803CA734:;
  c->r[3]=0u+0x00000000u; // 803CA734
L_803CA738:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CA738
  if (crb(c,2)) { goto L_803CA744; } // 803CA73C
  W32(c->r[3]+0x000000F4u,c->r[24]); // 803CA740
L_803CA744:;
  {uint32_t ea=c->r[26]+0x00000014u; c->r[29]=R32(ea); c->r[26]=ea;} // 803CA744
  goto L_803CA75C; // 803CA748
L_803CA74C:;
  c->r[4]=c->r[24]|c->r[24]; // 803CA74C
  c->r[3]=c->r[29]+0xFFFFFFFCu; // 803CA750
  c->lr=0x803CA758u; f_803CA5F4(c); // 803CA754
  c->r[29]=R32(c->r[29]+0x00000000u); // 803CA758
L_803CA75C:;
  cmpu(c,0,c->r[29],c->r[26]); // 803CA75C
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA74C; } // 803CA760
  c->r[30]=R32(c->r[30]+0x00000000u); // 803CA764
L_803CA768:;
  cmpu(c,0,c->r[30],c->r[27]); // 803CA768
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA6E8; } // 803CA76C
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CA770
L_803CA774:;
  cmpu(c,0,c->r[31],c->r[28]); // 803CA774
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA680; } // 803CA778
  c->r[11]=c->r[1]+0x00000030u; // 803CA77C
  c->lr=0x803CA784u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CA780
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CA784
  c->lr=c->r[0]; // 803CA788
  c->r[1]=c->r[1]+0x00000030u; // 803CA78C
  return; // 803CA790
}

// __ct__Q36nw4hbm3lyt6LayoutFv
void f_803CA794(Ctx* __restrict c) {
  trace_call(0x803CA794u);
  c->r[0]=0u+0x00000000u; // 803CA794
  c->r[4]=0u+0x803F0000u; // 803CA798
  {uint32_t ea=c->r[4]+0x00000E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CA79C
  c->r[4]=0u+0x80440000u; // 803CA7A0
  c->r[4]=c->r[4]+0xFFFF8F60u; // 803CA7A4
  W32(c->r[3]+0x00000008u,c->r[0]); // 803CA7A8
  c->r[5]=c->r[3]+0x00000008u; // 803CA7AC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803CA7B0
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CA7B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 803CA7B8
  W32(c->r[3]+0x00000008u,c->r[5]); // 803CA7BC
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 803CA7C0
  W32(c->r[3]+0x00000010u,c->r[0]); // 803CA7C4
  W32(c->r[3]+0x00000014u,c->r[0]); // 803CA7C8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 803CA7CC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 803CA7D0
  W8(c->r[3]+0x00000020u,c->r[0]); // 803CA7D4
  return; // 803CA7D8
}

// __dt__Q36nw4hbm3lyt6LayoutFv
void f_803CA7DC(Ctx* __restrict c) {
  trace_call(0x803CA7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA7DC
  c->r[0]=c->lr; // 803CA7E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CA7E4
  c->r[11]=c->r[1]+0x00000030u; // 803CA7E8
  c->lr=0x803CA7F0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CA7EC
  cmps(c,0,(int32_t)c->r[3],0); // 803CA7F0
  c->r[26]=c->r[3]|c->r[3]; // 803CA7F4
  c->r[27]=c->r[4]|c->r[4]; // 803CA7F8
  if (crb(c,2)) { goto L_803CA8E8; } // 803CA7FC
  c->r[0]=R32(c->r[3]+0x00000014u); // 803CA800
  c->r[4]=0u+0x80440000u; // 803CA804
  c->r[4]=c->r[4]+0xFFFF8F60u; // 803CA808
  cmps(c,0,(int32_t)c->r[0],0); // 803CA80C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CA810
  if (crb(c,2)) { goto L_803CA834; } // 803CA814
  c->r[3]=c->r[0]|c->r[0]; // 803CA818
  c->r[4]=0u+0xFFFFFFFFu; // 803CA81C
  c->lr=0x803CA824u; f_803CA47C(c); // 803CA820
  c->r[3]=0u+0x806C0000u; // 803CA824
  c->r[4]=R32(c->r[26]+0x00000014u); // 803CA828
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CA82C
  c->lr=0x803CA834u; f_802A704C(c); // 803CA830
L_803CA834:;
  c->r[3]=R32(c->r[26]+0x00000010u); // 803CA834
  cmps(c,0,(int32_t)c->r[3],0); // 803CA838
  if (crb(c,2)) { goto L_803CA870; } // 803CA83C
  c->r[0]=R8(c->r[3]+0x000000D0u); // 803CA840
  cmps(c,0,(int32_t)c->r[0],0); // 803CA844
  if (!crb(c,2)) { goto L_803CA870; } // 803CA848
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CA84C
  c->r[4]=0u+0xFFFFFFFFu; // 803CA850
  c->r[12]=R32(c->r[12]+0x00000008u); // 803CA854
  c->ctr=c->r[12]; // 803CA858
  if (true) { c->lr=0x803CA860u; dispatch(c,c->ctr); } // 803CA85C
  c->r[3]=0u+0x806C0000u; // 803CA860
  c->r[4]=R32(c->r[26]+0x00000010u); // 803CA864
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CA868
  c->lr=0x803CA870u; f_802A704C(c); // 803CA86C
L_803CA870:;
  c->r[31]=R32(c->r[26]+0x00000008u); // 803CA870
  c->r[30]=c->r[26]+0x00000008u; // 803CA874
  c->r[29]=0u+0x806C0000u; // 803CA878
  goto L_803CA8C0; // 803CA87C
L_803CA880:;
  c->r[28]=c->r[31]|c->r[31]; // 803CA880
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CA884
  c->r[3]=c->r[26]+0x00000004u; // 803CA888
  c->r[4]=c->r[1]+0x00000008u; // 803CA88C
  W32(c->r[1]+0x00000008u,c->r[28]); // 803CA890
  c->lr=0x803CA898u; f_803D5740(c); // 803CA894
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 803CA898
  c->r[4]=0u+0xFFFFFFFFu; // 803CA89C
  c->r[12]=R32(c->r[28]+0x00000000u); // 803CA8A0
  c->r[3]=c->r[28]|c->r[28]; // 803CA8A4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803CA8A8
  c->ctr=c->r[12]; // 803CA8AC
  if (true) { c->lr=0x803CA8B4u; dispatch(c,c->ctr); } // 803CA8B0
  c->r[3]=R32(c->r[29]+0x000025A8u); // 803CA8B4
  c->r[4]=c->r[28]|c->r[28]; // 803CA8B8
  c->lr=0x803CA8C0u; f_802A704C(c); // 803CA8BC
L_803CA8C0:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CA8C0
  if (!crb(c,2)) { IRQCHK(c); goto L_803CA880; } // 803CA8C4
  c->r[3]=addc(c,c->r[26],0x00000004u,0); cr0(c,c->r[3]); // 803CA8C8
  if (crb(c,2)) { goto L_803CA8D8; } // 803CA8CC
  c->r[4]=0u+0x00000000u; // 803CA8D0
  c->lr=0x803CA8D8u; f_803D56BC(c); // 803CA8D4
L_803CA8D8:;
  cmps(c,0,(int32_t)c->r[27],0); // 803CA8D8
  if (!crb(c,1)) { goto L_803CA8E8; } // 803CA8DC
  c->r[3]=c->r[26]|c->r[26]; // 803CA8E0
  c->lr=0x803CA8E8u; f_802896EC(c); // 803CA8E4
L_803CA8E8:;
  c->r[11]=c->r[1]+0x00000030u; // 803CA8E8
  c->r[3]=c->r[26]|c->r[26]; // 803CA8EC
  c->lr=0x803CA8F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CA8F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CA8F4
  c->lr=c->r[0]; // 803CA8F8
  c->r[1]=c->r[1]+0x00000030u; // 803CA8FC
  return; // 803CA900
}

// Build__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor
void f_803CA904(Ctx* __restrict c) {
  trace_call(0x803CA904u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CA904
  c->r[0]=c->lr; // 803CA908
  W32(c->r[1]+0x00000064u,c->r[0]); // 803CA90C
  c->r[11]=c->r[1]+0x00000060u; // 803CA910
  c->lr=0x803CA918u; f_80289DC0(c); // 803CA914
  c->r[31]=c->r[4]|c->r[4]; // 803CA918
  c->r[4]=0u+0x524C0000u; // 803CA91C
  c->r[30]=c->r[3]|c->r[3]; // 803CA920
  c->r[14]=c->r[5]|c->r[5]; // 803CA924
  c->r[4]=c->r[4]+0x00005954u; // 803CA928
  c->r[3]=c->r[31]|c->r[31]; // 803CA92C
  c->lr=0x803CA934u; f_803C9478(c); // 803CA930
  cmps(c,0,(int32_t)c->r[3],0); // 803CA934
  if (!crb(c,2)) { goto L_803CA944; } // 803CA938
  c->r[3]=0u+0x00000000u; // 803CA93C
  goto L_803CABF0; // 803CA940
L_803CA944:;
  c->r[22]=0u+0x00000000u; // 803CA944
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 803CA948
  c->r[27]=0u+0x70610000u; // 803CA94C
  W32(c->r[1]+0x00000014u,c->r[14]); // 803CA950
  c->r[16]=c->r[31]+c->r[0]; // 803CA954
  c->r[20]=0u+0x00000000u; // 803CA958
  W32(c->r[1]+0x00000008u,c->r[22]); // 803CA95C
  c->r[23]=c->r[27]+0x00006531u; // 803CA960
  c->r[19]=0u+0x00000000u; // 803CA964
  c->r[18]=0u+0x00000000u; // 803CA968
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 803CA96C
  c->r[17]=0u+0x00000000u; // 803CA970
  c->r[15]=0u+0x00000000u; // 803CA974
  c->r[28]=0u+0x74780000u; // 803CA978
  W32(c->r[1]+0x00000010u,c->r[22]); // 803CA97C
  c->r[25]=0u+0x626E0000u; // 803CA980
  c->r[29]=0u+0x806C0000u; // 803CA984
  c->r[14]=0u+0x6C790000u; // 803CA988
  c->r[26]=0u+0x67720000u; // 803CA98C
  c->r[24]=0u+0x666E0000u; // 803CA990
  goto L_803CABE0; // 803CA994
L_803CA998:;
  c->r[3]=R32(c->r[16]+0x00000000u); // 803CA998
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[23]); // 803CA99C
  if (crb(c,2)) { goto L_803CAB10; } // 803CA9A0
  if (!crb(c,0)) { goto L_803CAA1C; } // 803CA9A4
  c->r[0]=c->r[26]+0x00007031u; // 803CA9A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CA9AC
  if (crb(c,2)) { goto L_803CAB1C; } // 803CA9B0
  if (!crb(c,0)) { goto L_803CA9E8; } // 803CA9B4
  c->r[0]=c->r[24]+0x00006C31u; // 803CA9B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CA9BC
  if (crb(c,2)) { goto L_803CAAB4; } // 803CA9C0
  if (!crb(c,0)) { goto L_803CA9D8; } // 803CA9C4
  c->r[0]=c->r[25]+0x00006431u; // 803CA9C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CA9CC
  if (crb(c,2)) { goto L_803CAAC4; } // 803CA9D0
  goto L_803CABD4; // 803CA9D4
L_803CA9D8:;
  c->r[0]=c->r[26]+0x00006531u; // 803CA9D8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CA9DC
  if (crb(c,2)) { goto L_803CABD0; } // 803CA9E0
  goto L_803CABD4; // 803CA9E4
L_803CA9E8:;
  c->r[0]=c->r[14]+0x00007431u; // 803CA9E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CA9EC
  if (crb(c,2)) { goto L_803CAA84; } // 803CA9F0
  if (!crb(c,0)) { goto L_803CAA08; } // 803CA9F4
  c->r[0]=c->r[26]+0x00007331u; // 803CA9F8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CA9FC
  if (crb(c,2)) { goto L_803CABC8; } // 803CAA00
  goto L_803CABD4; // 803CAA04
L_803CAA08:;
  c->r[4]=0u+0x6D610000u; // 803CAA08
  c->r[0]=c->r[4]+0x00007431u; // 803CAA0C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAA10
  if (crb(c,2)) { goto L_803CAABC; } // 803CAA14
  goto L_803CABD4; // 803CAA18
L_803CAA1C:;
  c->r[0]=c->r[28]+0x00006C31u; // 803CAA1C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAA20
  if (crb(c,2)) { goto L_803CAAAC; } // 803CAA24
  if (!crb(c,0)) { goto L_803CAA60; } // 803CAA28
  c->r[0]=c->r[27]+0x00007331u; // 803CAA2C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAA30
  if (crb(c,2)) { goto L_803CAB08; } // 803CAA34
  if (!crb(c,0)) { goto L_803CAA4C; } // 803CAA38
  c->r[0]=c->r[27]+0x00006E31u; // 803CAA3C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAA40
  if (crb(c,2)) { goto L_803CAAC4; } // 803CAA44
  goto L_803CABD4; // 803CAA48
L_803CAA4C:;
  c->r[4]=0u+0x70690000u; // 803CAA4C
  c->r[0]=c->r[4]+0x00006331u; // 803CAA50
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAA54
  if (crb(c,2)) { goto L_803CAAC4; } // 803CAA58
  goto L_803CABD4; // 803CAA5C
L_803CAA60:;
  c->r[4]=0u+0x776E0000u; // 803CAA60
  c->r[0]=c->r[4]+0x00006431u; // 803CAA64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAA68
  if (crb(c,2)) { goto L_803CAAC4; } // 803CAA6C
  if (!crb(c,0)) { goto L_803CABD4; } // 803CAA70
  c->r[0]=c->r[28]+0x00007431u; // 803CAA74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAA78
  if (crb(c,2)) { goto L_803CAAC4; } // 803CAA7C
  goto L_803CABD4; // 803CAA80
L_803CAA84:;
  c->r[3]=R8(c->r[16]+0x00000008u); // 803CAA84
  {uint32_t ea=c->r[16]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CAA88
  c->r[0]=0u-c->r[3]; // 803CAA8C
  {uint32_t ea=c->r[16]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CAA90
  c->r[0]=c->r[0]|c->r[3]; // 803CAA94
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 803CAA98
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803CAA9C
  W8(c->r[30]+0x00000020u,c->r[0]); // 803CAAA0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 803CAAA4
  goto L_803CABD4; // 803CAAA8
L_803CAAAC:;
  W32(c->r[1]+0x00000008u,c->r[16]); // 803CAAAC
  goto L_803CABD4; // 803CAAB0
L_803CAAB4:;
  W32(c->r[1]+0x0000000Cu,c->r[16]); // 803CAAB4
  goto L_803CABD4; // 803CAAB8
L_803CAABC:;
  W32(c->r[1]+0x00000010u,c->r[16]); // 803CAABC
  goto L_803CABD4; // 803CAAC0
L_803CAAC4:;
  c->r[4]=c->r[16]|c->r[16]; // 803CAAC4
  c->r[5]=c->r[1]+0x00000008u; // 803CAAC8
  c->lr=0x803CAAD0u; f_803CB080(c); // 803CAACC
  cmps(c,0,(int32_t)c->r[3],0); // 803CAAD0
  c->r[21]=c->r[3]|c->r[3]; // 803CAAD4
  if (crb(c,2)) { goto L_803CABD4; } // 803CAAD8
  c->r[0]=R32(c->r[30]+0x00000010u); // 803CAADC
  cmps(c,0,(int32_t)c->r[0],0); // 803CAAE0
  if (!crb(c,2)) { goto L_803CAAEC; } // 803CAAE4
  W32(c->r[30]+0x00000010u,c->r[3]); // 803CAAE8
L_803CAAEC:;
  cmps(c,0,(int32_t)c->r[20],0); // 803CAAEC
  if (crb(c,2)) { goto L_803CAB00; } // 803CAAF0
  c->r[3]=c->r[20]|c->r[20]; // 803CAAF4
  c->r[4]=c->r[21]|c->r[21]; // 803CAAF8
  c->lr=0x803CAB00u; f_803CE930(c); // 803CAAFC
L_803CAB00:;
  c->r[19]=c->r[21]|c->r[21]; // 803CAB00
  goto L_803CABD4; // 803CAB04
L_803CAB08:;
  c->r[20]=c->r[19]|c->r[19]; // 803CAB08
  goto L_803CABD4; // 803CAB0C
L_803CAB10:;
  c->r[19]=c->r[20]|c->r[20]; // 803CAB10
  c->r[20]=R32(c->r[20]+0x0000000Cu); // 803CAB14
  goto L_803CABD4; // 803CAB18
L_803CAB1C:;
  cmps(c,0,(int32_t)c->r[18],0); // 803CAB1C
  if (!crb(c,2)) { goto L_803CAB68; } // 803CAB20
  c->r[3]=R32(c->r[29]+0x000025A8u); // 803CAB24
  c->r[18]=0u+0x00000001u; // 803CAB28
  c->r[4]=0u+0x0000000Cu; // 803CAB2C
  c->lr=0x803CAB34u; f_802A703C(c); // 803CAB30
  cmps(c,0,(int32_t)c->r[3],0); // 803CAB34
  if (crb(c,2)) { goto L_803CAB5C; } // 803CAB38
  if (crb(c,2)) { goto L_803CAB60; } // 803CAB3C
  W32(c->r[3]+0x00000004u,c->r[22]); // 803CAB40
  c->r[4]=c->r[3]+0x00000004u; // 803CAB44
  W32(c->r[3]+0x00000008u,c->r[22]); // 803CAB48
  W32(c->r[3]+0x00000000u,c->r[22]); // 803CAB4C
  W32(c->r[3]+0x00000004u,c->r[4]); // 803CAB50
  W32(c->r[3]+0x00000008u,c->r[4]); // 803CAB54
  goto L_803CAB60; // 803CAB58
L_803CAB5C:;
  c->r[3]=0u+0x00000000u; // 803CAB5C
L_803CAB60:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 803CAB60
  goto L_803CABD4; // 803CAB64
L_803CAB68:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 803CAB68
  cmps(c,0,(int32_t)c->r[0],0); // 803CAB6C
  if (crb(c,2)) { goto L_803CABD4; } // 803CAB70
  cmps(c,0,(int32_t)c->r[17],1); // 803CAB74
  if (!crb(c,2)) { goto L_803CABD4; } // 803CAB78
  c->r[21]=R32(c->r[30]+0x00000010u); // 803CAB7C
  c->r[4]=0u+0x0000002Cu; // 803CAB80
  c->r[3]=R32(c->r[29]+0x000025A8u); // 803CAB84
  c->lr=0x803CAB8Cu; f_802A703C(c); // 803CAB88
  cmps(c,0,(int32_t)c->r[3],0); // 803CAB8C
  if (crb(c,2)) { goto L_803CABB0; } // 803CAB90
  c->r[4]=c->r[3]|c->r[3]; // 803CAB94
  if (crb(c,2)) { goto L_803CABB4; } // 803CAB98
  c->r[4]=c->r[16]|c->r[16]; // 803CAB9C
  c->r[5]=c->r[21]|c->r[21]; // 803CABA0
  c->lr=0x803CABA8u; f_803CA2C8(c); // 803CABA4
  c->r[4]=c->r[3]|c->r[3]; // 803CABA8
  goto L_803CABB4; // 803CABAC
L_803CABB0:;
  c->r[4]=0u+0x00000000u; // 803CABB0
L_803CABB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 803CABB4
  if (crb(c,2)) { goto L_803CABD4; } // 803CABB8
  c->r[3]=R32(c->r[30]+0x00000014u); // 803CABBC
  c->lr=0x803CABC4u; f_803CA544(c); // 803CABC0
  goto L_803CABD4; // 803CABC4
L_803CABC8:;
  c->r[17]=c->r[17]+0x00000001u; // 803CABC8
  goto L_803CABD4; // 803CABCC
L_803CABD0:;
  c->r[17]=c->r[17]+0xFFFFFFFFu; // 803CABD0
L_803CABD4:;
  c->r[0]=R32(c->r[16]+0x00000004u); // 803CABD4
  c->r[15]=c->r[15]+0x00000001u; // 803CABD8
  c->r[16]=c->r[16]+c->r[0]; // 803CABDC
L_803CABE0:;
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 803CABE0
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 803CABE4
  if (crb(c,0)) { IRQCHK(c); goto L_803CA998; } // 803CABE8
  c->r[3]=0u+0x00000001u; // 803CABEC
L_803CABF0:;
  c->r[11]=c->r[1]+0x00000060u; // 803CABF0
  c->lr=0x803CABF8u; f_80289E0C(c); // 803CABF4
  c->r[0]=R32(c->r[1]+0x00000064u); // 803CABF8
  c->lr=c->r[0]; // 803CABFC
  c->r[1]=c->r[1]+0x00000060u; // 803CAC00
  return; // 803CAC04
}

// CreateAnimTransform__Q36nw4hbm3lyt6LayoutFPCvPQ36nw4hbm3lyt16ResourceAccessor
void f_803CAC08(Ctx* __restrict c) {
  trace_call(0x803CAC08u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CAC08
  c->r[0]=c->lr; // 803CAC0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803CAC10
  c->r[11]=c->r[1]+0x00000040u; // 803CAC14
  c->lr=0x803CAC1Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CAC18
  c->r[30]=c->r[4]|c->r[4]; // 803CAC1C
  c->r[25]=c->r[3]|c->r[3]; // 803CAC20
  c->r[26]=c->r[5]|c->r[5]; // 803CAC24
  c->r[3]=c->r[30]|c->r[30]; // 803CAC28
  c->lr=0x803CAC30u; f_803C9450(c); // 803CAC2C
  cmps(c,0,(int32_t)c->r[3],0); // 803CAC30
  if (!crb(c,2)) { goto L_803CAC40; } // 803CAC34
  c->r[3]=0u+0x00000000u; // 803CAC38
  goto L_803CAD78; // 803CAC3C
L_803CAC40:;
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 803CAC40
  c->r[3]=0u+0x70610000u; // 803CAC44
  c->r[31]=c->r[3]+0x00006931u; // 803CAC48
  c->r[28]=0u+0x00000000u; // 803CAC4C
  c->r[29]=c->r[30]+c->r[0]; // 803CAC50
  c->r[27]=0u+0x00000000u; // 803CAC54
  c->r[23]=0u+0x524C0000u; // 803CAC58
  c->r[24]=0u+0x806C0000u; // 803CAC5C
  goto L_803CAD68; // 803CAC60
L_803CAC64:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 803CAC64
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 803CAC68
  if (crb(c,2)) { goto L_803CAC74; } // 803CAC6C
  goto L_803CAD5C; // 803CAC70
L_803CAC74:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 803CAC74
  c->r[0]=c->r[23]+0x00005450u; // 803CAC78
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAC7C
  if (crb(c,2)) { goto L_803CACE8; } // 803CAC80
  if (!crb(c,0)) { goto L_803CACB8; } // 803CAC84
  c->r[0]=c->r[23]+0x00004D43u; // 803CAC88
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAC8C
  if (crb(c,2)) { goto L_803CACE8; } // 803CAC90
  if (!crb(c,0)) { goto L_803CACA8; } // 803CAC94
  c->r[0]=c->r[23]+0x0000414Eu; // 803CAC98
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CAC9C
  if (crb(c,2)) { goto L_803CACE8; } // 803CACA0
  goto L_803CAD3C; // 803CACA4
L_803CACA8:;
  c->r[0]=c->r[23]+0x00005041u; // 803CACA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CACAC
  if (crb(c,2)) { goto L_803CACE8; } // 803CACB0
  goto L_803CAD3C; // 803CACB4
L_803CACB8:;
  c->r[0]=c->r[23]+0x00005643u; // 803CACB8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CACBC
  if (crb(c,2)) { goto L_803CACE8; } // 803CACC0
  if (!crb(c,0)) { goto L_803CACD8; } // 803CACC4
  c->r[0]=c->r[23]+0x00005453u; // 803CACC8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CACCC
  if (crb(c,2)) { goto L_803CACE8; } // 803CACD0
  goto L_803CAD3C; // 803CACD4
L_803CACD8:;
  c->r[0]=c->r[23]+0x00005649u; // 803CACD8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CACDC
  if (crb(c,2)) { goto L_803CACE8; } // 803CACE0
  goto L_803CAD3C; // 803CACE4
L_803CACE8:;
  c->r[3]=R32(c->r[24]+0x000025A8u); // 803CACE8
  c->r[4]=0u+0x00000020u; // 803CACEC
  c->lr=0x803CACF4u; f_802A703C(c); // 803CACF0
  cmps(c,0,(int32_t)c->r[3],0); // 803CACF4
  if (crb(c,2)) { goto L_803CAD10; } // 803CACF8
  c->r[22]=c->r[3]|c->r[3]; // 803CACFC
  if (crb(c,2)) { goto L_803CAD14; } // 803CAD00
  c->lr=0x803CAD08u; f_803C862C(c); // 803CAD04
  c->r[22]=c->r[3]|c->r[3]; // 803CAD08
  goto L_803CAD14; // 803CAD0C
L_803CAD10:;
  c->r[22]=0u+0x00000000u; // 803CAD10
L_803CAD14:;
  cmps(c,0,(int32_t)c->r[22],0); // 803CAD14
  if (crb(c,2)) { goto L_803CAD3C; } // 803CAD18
  c->r[12]=R32(c->r[22]+0x00000000u); // 803CAD1C
  c->r[3]=c->r[22]|c->r[22]; // 803CAD20
  c->r[4]=c->r[29]|c->r[29]; // 803CAD24
  c->r[5]=c->r[26]|c->r[26]; // 803CAD28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CAD2C
  c->ctr=c->r[12]; // 803CAD30
  if (true) { c->lr=0x803CAD38u; dispatch(c,c->ctr); } // 803CAD34
  c->r[28]=c->r[22]|c->r[22]; // 803CAD38
L_803CAD3C:;
  cmps(c,0,(int32_t)c->r[28],0); // 803CAD3C
  if (crb(c,2)) { goto L_803CAD5C; } // 803CAD40
  c->r[0]=c->r[25]+0x00000008u; // 803CAD44
  c->r[3]=c->r[25]+0x00000004u; // 803CAD48
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CAD4C
  c->r[4]=c->r[1]+0x00000008u; // 803CAD50
  c->r[5]=c->r[28]+0x00000004u; // 803CAD54
  c->lr=0x803CAD5Cu; f_803D5788(c); // 803CAD58
L_803CAD5C:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 803CAD5C
  c->r[27]=c->r[27]+0x00000001u; // 803CAD60
  c->r[29]=c->r[29]+c->r[0]; // 803CAD64
L_803CAD68:;
  c->r[0]=R16(c->r[30]+0x0000000Eu); // 803CAD68
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 803CAD6C
  if (crb(c,0)) { IRQCHK(c); goto L_803CAC64; } // 803CAD70
  c->r[3]=c->r[28]|c->r[28]; // 803CAD74
L_803CAD78:;
  c->r[11]=c->r[1]+0x00000040u; // 803CAD78
  c->lr=0x803CAD80u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CAD7C
  c->r[0]=R32(c->r[1]+0x00000044u); // 803CAD80
  c->lr=c->r[0]; // 803CAD84
  c->r[1]=c->r[1]+0x00000040u; // 803CAD88
  return; // 803CAD8C
}

// fn_803CAD90
void f_803CAD90(Ctx* __restrict c) {
  trace_call(0x803CAD90u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 803CAD90
  cmps(c,0,(int32_t)c->r[3],0); // 803CAD94
  if (crb(c,2)) return; // 803CAD98
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CAD9C
  c->r[5]=0u+0x00000001u; // 803CADA0
  c->r[12]=R32(c->r[12]+0x00000044u); // 803CADA4
  c->ctr=c->r[12]; // 803CADA8
  if (true) { dispatch(c,c->ctr); return; } // 803CADAC
  return; // 803CADB0
}

// fn_803CADB4
void f_803CADB4(Ctx* __restrict c) {
  trace_call(0x803CADB4u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 803CADB4
  cmps(c,0,(int32_t)c->r[3],0); // 803CADB8
  if (crb(c,2)) return; // 803CADBC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CADC0
  c->r[5]=0u+0x00000001u; // 803CADC4
  c->r[12]=R32(c->r[12]+0x00000048u); // 803CADC8
  c->ctr=c->r[12]; // 803CADCC
  if (true) { dispatch(c,c->ctr); return; } // 803CADD0
  return; // 803CADD4
}

// fn_803CADD8
void f_803CADD8(Ctx* __restrict c) {
  trace_call(0x803CADD8u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CADD8
  c->r[4]=0u+0x00000000u; // 803CADDC
  c->r[12]=R32(c->r[12]+0x00000018u); // 803CADE0
  c->ctr=c->r[12]; // 803CADE4
  if (true) { dispatch(c,c->ctr); return; } // 803CADE8
}

// fn_803CADEC
void f_803CADEC(Ctx* __restrict c) {
  trace_call(0x803CADECu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 803CADEC
  cmps(c,0,(int32_t)c->r[3],0); // 803CADF0
  if (crb(c,2)) return; // 803CADF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CADF8
  c->r[6]=0u+0x00000001u; // 803CADFC
  c->r[12]=R32(c->r[12]+0x00000058u); // 803CAE00
  c->ctr=c->r[12]; // 803CAE04
  if (true) { dispatch(c,c->ctr); return; } // 803CAE08
  return; // 803CAE0C
}

// fn_803CAE10
void f_803CAE10(Ctx* __restrict c) {
  trace_call(0x803CAE10u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 803CAE10
  cmps(c,0,(int32_t)c->r[3],0); // 803CAE14
  if (crb(c,2)) return; // 803CAE18
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CAE1C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803CAE20
  c->ctr=c->r[12]; // 803CAE24
  if (true) { dispatch(c,c->ctr); return; } // 803CAE28
  return; // 803CAE2C
}

// fn_803CAE30
void f_803CAE30(Ctx* __restrict c) {
  trace_call(0x803CAE30u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 803CAE30
  cmps(c,0,(int32_t)c->r[3],0); // 803CAE34
  if (crb(c,2)) return; // 803CAE38
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CAE3C
  c->r[12]=R32(c->r[12]+0x00000014u); // 803CAE40
  c->ctr=c->r[12]; // 803CAE44
  if (true) { dispatch(c,c->ctr); return; } // 803CAE48
  return; // 803CAE4C
}

// fn_803CAE50
void f_803CAE50(Ctx* __restrict c) {
  trace_call(0x803CAE50u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 803CAE50
  cmps(c,0,(int32_t)c->r[3],0); // 803CAE54
  if (crb(c,2)) return; // 803CAE58
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CAE5C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803CAE60
  c->ctr=c->r[12]; // 803CAE64
  if (true) { dispatch(c,c->ctr); return; } // 803CAE68
  return; // 803CAE6C
}

// GetLayoutRect__Q36nw4hbm3lyt6LayoutCFv
void f_803CAE70(Ctx* __restrict c) {
  trace_call(0x803CAE70u);
  c->r[0]=R8(c->r[4]+0x00000020u); // 803CAE70
  cmpu(c,0,c->r[0],0x00000001u); // 803CAE74
  if (!crb(c,2)) { goto L_803CAEB8; } // 803CAE78
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 803CAE7C
  c->r[5]=0u+0x803F0000u; // 803CAE80
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CAE84
  c->f[3]=-c->f[4]; // 803CAE88
  {uint32_t ea=c->r[5]+0x00000E4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803CAE8C
  c->f[0]=-c->f[1]; // 803CAE90
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 803CAE94
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 803CAE98
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[2]); // 803CAE9C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803CAEA0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 803CAEA4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803CAEA8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 803CAEAC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 803CAEB0
  return; // 803CAEB4
L_803CAEB8:;
  c->r[5]=0u+0x803F0000u; // 803CAEB8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803CAEBC
  {uint32_t ea=c->r[5]+0x00000E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CAEC0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CAEC4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 803CAEC8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 803CAECC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803CAED0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 803CAED4
  return; // 803CAED8
}

// SetTagProcessor__Q36nw4hbm3lyt6LayoutFPQ36nw4hbm2ut19TagProcessorBase<w>
void f_803CAEDC(Ctx* __restrict c) {
  trace_call(0x803CAEDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CAEDC
  c->r[0]=c->lr; // 803CAEE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CAEE4
  c->r[11]=c->r[1]+0x00000030u; // 803CAEE8
  c->lr=0x803CAEF0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CAEEC
  c->r[25]=R32(c->r[3]+0x00000010u); // 803CAEF0
  c->r[24]=0u+0x806C0000u; // 803CAEF4
  c->r[31]=c->r[4]|c->r[4]; // 803CAEF8
  c->r[12]=R32(c->r[25]+0x00000000u); // 803CAEFC
  c->r[3]=c->r[25]|c->r[25]; // 803CAF00
  c->r[24]=c->r[24]+0x000025C0u; // 803CAF04
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CAF08
  c->ctr=c->r[12]; // 803CAF0C
  if (true) { c->lr=0x803CAF14u; dispatch(c,c->ctr); } // 803CAF10
  goto L_803CAF2C; // 803CAF14
L_803CAF18:;
  cmpu(c,0,c->r[3],c->r[24]); // 803CAF18
  if (!crb(c,2)) { goto L_803CAF28; } // 803CAF1C
  c->r[0]=0u+0x00000001u; // 803CAF20
  goto L_803CAF38; // 803CAF24
L_803CAF28:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803CAF28
L_803CAF2C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CAF2C
  if (!crb(c,2)) { IRQCHK(c); goto L_803CAF18; } // 803CAF30
  c->r[0]=0u+0x00000000u; // 803CAF34
L_803CAF38:;
  cmps(c,0,(int32_t)c->r[0],0); // 803CAF38
  if (crb(c,2)) { goto L_803CAF48; } // 803CAF3C
  c->r[3]=c->r[25]|c->r[25]; // 803CAF40
  goto L_803CAF4C; // 803CAF44
L_803CAF48:;
  c->r[3]=0u+0x00000000u; // 803CAF48
L_803CAF4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CAF4C
  if (crb(c,2)) { goto L_803CAF58; } // 803CAF50
  W32(c->r[3]+0x000000F4u,c->r[31]); // 803CAF54
L_803CAF58:;
  c->r[24]=0u+0x806C0000u; // 803CAF58
  c->r[30]=R32(c->r[25]+0x00000014u); // 803CAF5C
  c->r[27]=c->r[25]+0x00000014u; // 803CAF60
  c->r[24]=c->r[24]+0x000025C0u; // 803CAF64
  goto L_803CB060; // 803CAF68
L_803CAF6C:;
  c->r[25]=c->r[30]+0xFFFFFFFCu; // 803CAF6C
  c->r[12]=R32(c->r[25]+0x00000000u); // 803CAF70
  c->r[3]=c->r[25]|c->r[25]; // 803CAF74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CAF78
  c->ctr=c->r[12]; // 803CAF7C
  if (true) { c->lr=0x803CAF84u; dispatch(c,c->ctr); } // 803CAF80
  goto L_803CAF9C; // 803CAF84
L_803CAF88:;
  cmpu(c,0,c->r[3],c->r[24]); // 803CAF88
  if (!crb(c,2)) { goto L_803CAF98; } // 803CAF8C
  c->r[0]=0u+0x00000001u; // 803CAF90
  goto L_803CAFA8; // 803CAF94
L_803CAF98:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803CAF98
L_803CAF9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CAF9C
  if (!crb(c,2)) { IRQCHK(c); goto L_803CAF88; } // 803CAFA0
  c->r[0]=0u+0x00000000u; // 803CAFA4
L_803CAFA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 803CAFA8
  if (crb(c,2)) { goto L_803CAFB8; } // 803CAFAC
  c->r[3]=c->r[25]|c->r[25]; // 803CAFB0
  goto L_803CAFBC; // 803CAFB4
L_803CAFB8:;
  c->r[3]=0u+0x00000000u; // 803CAFB8
L_803CAFBC:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CAFBC
  if (crb(c,2)) { goto L_803CAFC8; } // 803CAFC0
  W32(c->r[3]+0x000000F4u,c->r[31]); // 803CAFC4
L_803CAFC8:;
  c->r[29]=R32(c->r[25]+0x00000014u); // 803CAFC8
  c->r[26]=c->r[25]+0x00000014u; // 803CAFCC
  goto L_803CB054; // 803CAFD0
L_803CAFD4:;
  c->r[25]=c->r[29]+0xFFFFFFFCu; // 803CAFD4
  c->r[12]=R32(c->r[25]+0x00000000u); // 803CAFD8
  c->r[3]=c->r[25]|c->r[25]; // 803CAFDC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CAFE0
  c->ctr=c->r[12]; // 803CAFE4
  if (true) { c->lr=0x803CAFECu; dispatch(c,c->ctr); } // 803CAFE8
  goto L_803CB004; // 803CAFEC
L_803CAFF0:;
  cmpu(c,0,c->r[3],c->r[24]); // 803CAFF0
  if (!crb(c,2)) { goto L_803CB000; } // 803CAFF4
  c->r[0]=0u+0x00000001u; // 803CAFF8
  goto L_803CB010; // 803CAFFC
L_803CB000:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803CB000
L_803CB004:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CB004
  if (!crb(c,2)) { IRQCHK(c); goto L_803CAFF0; } // 803CB008
  c->r[0]=0u+0x00000000u; // 803CB00C
L_803CB010:;
  cmps(c,0,(int32_t)c->r[0],0); // 803CB010
  if (crb(c,2)) { goto L_803CB020; } // 803CB014
  c->r[3]=c->r[25]|c->r[25]; // 803CB018
  goto L_803CB024; // 803CB01C
L_803CB020:;
  c->r[3]=0u+0x00000000u; // 803CB020
L_803CB024:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CB024
  if (crb(c,2)) { goto L_803CB030; } // 803CB028
  W32(c->r[3]+0x000000F4u,c->r[31]); // 803CB02C
L_803CB030:;
  {uint32_t ea=c->r[25]+0x00000014u; c->r[28]=R32(ea); c->r[25]=ea;} // 803CB030
  goto L_803CB048; // 803CB034
L_803CB038:;
  c->r[4]=c->r[31]|c->r[31]; // 803CB038
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 803CB03C
  c->lr=0x803CB044u; f_803CA5F4(c); // 803CB040
  c->r[28]=R32(c->r[28]+0x00000000u); // 803CB044
L_803CB048:;
  cmpu(c,0,c->r[28],c->r[25]); // 803CB048
  if (!crb(c,2)) { IRQCHK(c); goto L_803CB038; } // 803CB04C
  c->r[29]=R32(c->r[29]+0x00000000u); // 803CB050
L_803CB054:;
  cmpu(c,0,c->r[29],c->r[26]); // 803CB054
  if (!crb(c,2)) { IRQCHK(c); goto L_803CAFD4; } // 803CB058
  c->r[30]=R32(c->r[30]+0x00000000u); // 803CB05C
L_803CB060:;
  cmpu(c,0,c->r[30],c->r[27]); // 803CB060
  if (!crb(c,2)) { IRQCHK(c); goto L_803CAF6C; } // 803CB064
  c->r[11]=c->r[1]+0x00000030u; // 803CB068
  c->lr=0x803CB070u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CB06C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CB070
  c->lr=c->r[0]; // 803CB074
  c->r[1]=c->r[1]+0x00000030u; // 803CB078
  return; // 803CB07C
}

// BuildPaneObj__Q36nw4hbm3lyt6LayoutFlPCvRCQ36nw4hbm3lyt11ResBlockSet
void f_803CB080(Ctx* __restrict c) {
  trace_call(0x803CB080u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CB080
  c->r[0]=c->lr; // 803CB084
  c->r[6]=0u+0x70690000u; // 803CB088
  W32(c->r[1]+0x00000054u,c->r[0]); // 803CB08C
  c->r[0]=c->r[6]+0x00006331u; // 803CB090
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CB094
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 803CB098
  if (crb(c,2)) { goto L_803CB128; } // 803CB09C
  if (!crb(c,0)) { goto L_803CB0CC; } // 803CB0A0
  c->r[6]=0u+0x70610000u; // 803CB0A4
  c->r[0]=c->r[6]+0x00006E31u; // 803CB0A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CB0AC
  if (crb(c,2)) { goto L_803CB0F4; } // 803CB0B0
  if (!crb(c,0)) { goto L_803CB288; } // 803CB0B4
  c->r[6]=0u+0x626E0000u; // 803CB0B8
  c->r[0]=c->r[6]+0x00006431u; // 803CB0BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CB0C0
  if (crb(c,2)) { goto L_803CB230; } // 803CB0C4
  goto L_803CB288; // 803CB0C8
L_803CB0CC:;
  c->r[6]=0u+0x776E0000u; // 803CB0CC
  c->r[0]=c->r[6]+0x00006431u; // 803CB0D0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CB0D4
  if (crb(c,2)) { goto L_803CB1D8; } // 803CB0D8
  if (!crb(c,0)) { goto L_803CB288; } // 803CB0DC
  c->r[6]=0u+0x74780000u; // 803CB0E0
  c->r[0]=c->r[6]+0x00007431u; // 803CB0E4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CB0E8
  if (crb(c,2)) { goto L_803CB180; } // 803CB0EC
  goto L_803CB288; // 803CB0F0
L_803CB0F4:;
  c->r[3]=0u+0x806C0000u; // 803CB0F4
  c->r[31]=c->r[4]|c->r[4]; // 803CB0F8
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CB0FC
  c->r[4]=0u+0x000000D4u; // 803CB100
  c->lr=0x803CB108u; f_802A703C(c); // 803CB104
  cmps(c,0,(int32_t)c->r[3],0); // 803CB108
  if (crb(c,2)) { goto L_803CB120; } // 803CB10C
  if (crb(c,2)) { goto L_803CB28C; } // 803CB110
  c->r[4]=c->r[31]|c->r[31]; // 803CB114
  c->lr=0x803CB11Cu; f_803CE6D4(c); // 803CB118
  goto L_803CB28C; // 803CB11C
L_803CB120:;
  c->r[3]=0u+0x00000000u; // 803CB120
  goto L_803CB28C; // 803CB124
L_803CB128:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 803CB128
  c->r[3]=0u+0x806C0000u; // 803CB12C
  c->r[7]=R32(c->r[5]+0x00000004u); // 803CB130
  c->r[31]=c->r[4]|c->r[4]; // 803CB134
  c->r[6]=R32(c->r[5]+0x00000008u); // 803CB138
  c->r[4]=0u+0x000000ECu; // 803CB13C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803CB140
  W32(c->r[1]+0x00000038u,c->r[8]); // 803CB144
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CB148
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 803CB14C
  W32(c->r[1]+0x00000040u,c->r[6]); // 803CB150
  W32(c->r[1]+0x00000044u,c->r[0]); // 803CB154
  c->lr=0x803CB15Cu; f_802A703C(c); // 803CB158
  cmps(c,0,(int32_t)c->r[3],0); // 803CB15C
  if (crb(c,2)) { goto L_803CB178; } // 803CB160
  if (crb(c,2)) { goto L_803CB28C; } // 803CB164
  c->r[4]=c->r[31]|c->r[31]; // 803CB168
  c->r[5]=c->r[1]+0x00000038u; // 803CB16C
  c->lr=0x803CB174u; f_803CF648(c); // 803CB170
  goto L_803CB28C; // 803CB174
L_803CB178:;
  c->r[3]=0u+0x00000000u; // 803CB178
  goto L_803CB28C; // 803CB17C
L_803CB180:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 803CB180
  c->r[3]=0u+0x806C0000u; // 803CB184
  c->r[7]=R32(c->r[5]+0x00000004u); // 803CB188
  c->r[31]=c->r[4]|c->r[4]; // 803CB18C
  c->r[6]=R32(c->r[5]+0x00000008u); // 803CB190
  c->r[4]=0u+0x00000100u; // 803CB194
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803CB198
  W32(c->r[1]+0x00000028u,c->r[8]); // 803CB19C
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CB1A0
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 803CB1A4
  W32(c->r[1]+0x00000030u,c->r[6]); // 803CB1A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CB1AC
  c->lr=0x803CB1B4u; f_802A703C(c); // 803CB1B0
  cmps(c,0,(int32_t)c->r[3],0); // 803CB1B4
  if (crb(c,2)) { goto L_803CB1D0; } // 803CB1B8
  if (crb(c,2)) { goto L_803CB28C; } // 803CB1BC
  c->r[4]=c->r[31]|c->r[31]; // 803CB1C0
  c->r[5]=c->r[1]+0x00000028u; // 803CB1C4
  c->lr=0x803CB1CCu; f_803CFC8C(c); // 803CB1C8
  goto L_803CB28C; // 803CB1CC
L_803CB1D0:;
  c->r[3]=0u+0x00000000u; // 803CB1D0
  goto L_803CB28C; // 803CB1D4
L_803CB1D8:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 803CB1D8
  c->r[3]=0u+0x806C0000u; // 803CB1DC
  c->r[7]=R32(c->r[5]+0x00000004u); // 803CB1E0
  c->r[31]=c->r[4]|c->r[4]; // 803CB1E4
  c->r[6]=R32(c->r[5]+0x00000008u); // 803CB1E8
  c->r[4]=0u+0x00000104u; // 803CB1EC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803CB1F0
  W32(c->r[1]+0x00000018u,c->r[8]); // 803CB1F4
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CB1F8
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 803CB1FC
  W32(c->r[1]+0x00000020u,c->r[6]); // 803CB200
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CB204
  c->lr=0x803CB20Cu; f_802A703C(c); // 803CB208
  cmps(c,0,(int32_t)c->r[3],0); // 803CB20C
  if (crb(c,2)) { goto L_803CB228; } // 803CB210
  if (crb(c,2)) { goto L_803CB28C; } // 803CB214
  c->r[4]=c->r[31]|c->r[31]; // 803CB218
  c->r[5]=c->r[1]+0x00000018u; // 803CB21C
  c->lr=0x803CB224u; f_803D126C(c); // 803CB220
  goto L_803CB28C; // 803CB224
L_803CB228:;
  c->r[3]=0u+0x00000000u; // 803CB228
  goto L_803CB28C; // 803CB22C
L_803CB230:;
  c->r[8]=R32(c->r[5]+0x00000000u); // 803CB230
  c->r[3]=0u+0x806C0000u; // 803CB234
  c->r[7]=R32(c->r[5]+0x00000004u); // 803CB238
  c->r[31]=c->r[4]|c->r[4]; // 803CB23C
  c->r[6]=R32(c->r[5]+0x00000008u); // 803CB240
  c->r[4]=0u+0x000000D4u; // 803CB244
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803CB248
  W32(c->r[1]+0x00000008u,c->r[8]); // 803CB24C
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CB250
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 803CB254
  W32(c->r[1]+0x00000010u,c->r[6]); // 803CB258
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CB25C
  c->lr=0x803CB264u; f_802A703C(c); // 803CB260
  cmps(c,0,(int32_t)c->r[3],0); // 803CB264
  if (crb(c,2)) { goto L_803CB280; } // 803CB268
  if (crb(c,2)) { goto L_803CB28C; } // 803CB26C
  c->r[4]=c->r[31]|c->r[31]; // 803CB270
  c->r[5]=c->r[1]+0x00000008u; // 803CB274
  c->lr=0x803CB27Cu; f_803C9294(c); // 803CB278
  goto L_803CB28C; // 803CB27C
L_803CB280:;
  c->r[3]=0u+0x00000000u; // 803CB280
  goto L_803CB28C; // 803CB284
L_803CB288:;
  c->r[3]=0u+0x00000000u; // 803CB288
L_803CB28C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 803CB28C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 803CB290
  c->lr=c->r[0]; // 803CB294
  c->r[1]=c->r[1]+0x00000050u; // 803CB298
  return; // 803CB29C
}

// CalcTextureMtx__26@unnamed@lyt_material_cpp@FPQ36nw4hbm4math5MTX34RCQ36nw4hbm3lyt6TexSRT
void f_803CB2A0(Ctx* __restrict c) {
  trace_call(0x803CB2A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CB2A0
  c->r[0]=c->lr; // 803CB2A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CB2A8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 803CB2AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 803CB2B0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB2B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CB2B8
  c->r[31]=0u+0x803F0000u; // 803CB2BC
  c->r[31]=c->r[31]+0x00000E50u; // 803CB2C0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB2C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CB2C8
  c->r[30]=c->r[4]|c->r[4]; // 803CB2CC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CB2D0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803CB2D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CB2D8
  c->r[29]=c->r[3]|c->r[3]; // 803CB2DC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803CB2E0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803CB2E4
  c->lr=0x803CB2ECu; f_803D3790(c); // 803CB2E8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CB2EC
  c->f[31]=c->f[1]; // 803CB2F0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB2F4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 803CB2F8
  c->lr=0x803CB300u; f_803D371C(c); // 803CB2FC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803CB300
  c->f[5]=-c->f[1]; // 803CB304
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CB308
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[3]); // 803CB30C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 803CB310
  c->f[11]=c->ps1[11]=S(c->f[31]*c->f[3]); // 803CB314
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB318
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 803CB31C
  c->f[4]=-c->f[2]; // 803CB320
  c->f[12]=c->ps1[12]=S(c->f[5]*c->f[0]); // 803CB324
  {uint32_t ea=c->r[30]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803CB328
  c->f[10]=c->ps1[10]=S(c->f[31]*c->f[0]); // 803CB32C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB330
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[2]); // 803CB334
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB338
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[6]); // 803CB33C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[11]);} // 803CB340
  c->f[7]=-c->f[6]; // 803CB344
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 803CB348
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[12]);} // 803CB34C
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[4]); // 803CB350
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[7]); // 803CB354
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[8]);} // 803CB358
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803CB35C
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[3]); // 803CB360
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[9]);} // 803CB364
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 803CB368
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[10]);} // 803CB36C
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[4]); // 803CB370
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803CB374
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[8]);} // 803CB378
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[2]);} // 803CB37C
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CB380
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[8]);} // 803CB384
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[8]);} // 803CB388
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 803CB38C
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[8]);} // 803CB390
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 803CB394
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 803CB398
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CB39C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CB3A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CB3A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CB3A8
  c->lr=c->r[0]; // 803CB3AC
  c->r[1]=c->r[1]+0x00000030u; // 803CB3B0
  return; // 803CB3B4
}

// SetIndTexMtx__26@unnamed@lyt_material_cpp@F14_GXIndTexMtxIDPA3_Cf
void f_803CB3B8(Ctx* __restrict c) {
  trace_call(0x803CB3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CB3B8
  c->r[0]=c->lr; // 803CB3BC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CB3C0
  c->r[5]=0u+0x803F0000u; // 803CB3C4
  c->r[5]=c->r[5]+0x00000E50u; // 803CB3C8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 803CB3CC
  c->f[8]=std::fabs(c->f[2]); // 803CB3D0
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB3D4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 803CB3D8
  c->f[9]=std::fabs(c->f[3]); // 803CB3DC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803CB3E0
  c->r[6]=0u+0x00000000u; // 803CB3E4
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 803CB3E8
  fcmp(c,0,c->f[8],c->f[0]); // 803CB3EC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 803CB3F0
  c->f[10]=std::fabs(c->f[4]); // 803CB3F4
  c->f[11]=std::fabs(c->f[5]); // 803CB3F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CB3FC
  c->f[12]=std::fabs(c->f[6]); // 803CB400
  c->f[13]=std::fabs(c->f[7]); // 803CB404
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB408
  if (crb(c,2)) { goto L_803CB44C; } // 803CB40C
  fcmp(c,0,c->f[9],c->f[0]); // 803CB410
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB414
  if (crb(c,2)) { goto L_803CB44C; } // 803CB418
  fcmp(c,0,c->f[10],c->f[0]); // 803CB41C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB420
  if (crb(c,2)) { goto L_803CB44C; } // 803CB424
  fcmp(c,0,c->f[11],c->f[0]); // 803CB428
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB42C
  if (crb(c,2)) { goto L_803CB44C; } // 803CB430
  fcmp(c,0,c->f[12],c->f[0]); // 803CB434
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB438
  if (crb(c,2)) { goto L_803CB44C; } // 803CB43C
  fcmp(c,0,c->f[13],c->f[0]); // 803CB440
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB444
  if (!crb(c,2)) { goto L_803CB4E0; } // 803CB448
L_803CB44C:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB44C
  {uint32_t ea=c->r[5]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB450
L_803CB454:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 803CB454
  cmps(c,0,(int32_t)c->r[0],46); // 803CB458
  if (!crb(c,0)) { goto L_803CB588; } // 803CB45C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 803CB460
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 803CB464
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 803CB468
  fcmp(c,0,c->f[8],c->f[0]); // 803CB46C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 803CB470
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 803CB474
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 803CB478
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 803CB47C
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 803CB480
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 803CB484
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 803CB488
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 803CB48C
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 803CB490
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB494
  c->r[6]=c->r[6]+0x00000001u; // 803CB498
  if (crb(c,2)) { IRQCHK(c); goto L_803CB454; } // 803CB49C
  fcmp(c,0,c->f[9],c->f[0]); // 803CB4A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB4A4
  if (crb(c,2)) { IRQCHK(c); goto L_803CB454; } // 803CB4A8
  fcmp(c,0,c->f[10],c->f[0]); // 803CB4AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB4B0
  if (crb(c,2)) { IRQCHK(c); goto L_803CB454; } // 803CB4B4
  fcmp(c,0,c->f[11],c->f[0]); // 803CB4B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB4BC
  if (crb(c,2)) { IRQCHK(c); goto L_803CB454; } // 803CB4C0
  fcmp(c,0,c->f[12],c->f[0]); // 803CB4C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB4C8
  if (crb(c,2)) { IRQCHK(c); goto L_803CB454; } // 803CB4CC
  fcmp(c,0,c->f[13],c->f[0]); // 803CB4D0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803CB4D4
  if (crb(c,2)) { IRQCHK(c); goto L_803CB454; } // 803CB4D8
  goto L_803CB588; // 803CB4DC
L_803CB4E0:;
  {uint32_t ea=c->r[5]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB4E0
  fcmp(c,0,c->f[8],c->f[1]); // 803CB4E4
  if (!crb(c,0)) { goto L_803CB588; } // 803CB4E8
  fcmp(c,0,c->f[9],c->f[1]); // 803CB4EC
  if (!crb(c,0)) { goto L_803CB588; } // 803CB4F0
  fcmp(c,0,c->f[10],c->f[1]); // 803CB4F4
  if (!crb(c,0)) { goto L_803CB588; } // 803CB4F8
  fcmp(c,0,c->f[11],c->f[1]); // 803CB4FC
  if (!crb(c,0)) { goto L_803CB588; } // 803CB500
  fcmp(c,0,c->f[12],c->f[1]); // 803CB504
  if (!crb(c,0)) { goto L_803CB588; } // 803CB508
  fcmp(c,0,c->f[13],c->f[1]); // 803CB50C
  if (!crb(c,0)) { goto L_803CB588; } // 803CB510
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB514
L_803CB518:;
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 803CB518
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 803CB51C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 803CB520
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 803CB524
  fcmp(c,0,c->f[8],c->f[1]); // 803CB528
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 803CB52C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 803CB530
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 803CB534
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 803CB538
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 803CB53C
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 803CB540
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 803CB544
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 803CB548
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 803CB54C
  if (!crb(c,0)) { goto L_803CB588; } // 803CB550
  fcmp(c,0,c->f[9],c->f[1]); // 803CB554
  if (!crb(c,0)) { goto L_803CB588; } // 803CB558
  fcmp(c,0,c->f[10],c->f[1]); // 803CB55C
  if (!crb(c,0)) { goto L_803CB588; } // 803CB560
  fcmp(c,0,c->f[11],c->f[1]); // 803CB564
  if (!crb(c,0)) { goto L_803CB588; } // 803CB568
  fcmp(c,0,c->f[12],c->f[1]); // 803CB56C
  if (!crb(c,0)) { goto L_803CB588; } // 803CB570
  fcmp(c,0,c->f[13],c->f[1]); // 803CB574
  if (!crb(c,0)) { goto L_803CB588; } // 803CB578
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 803CB57C
  cmps(c,0,(int32_t)c->r[0],-17); // 803CB580
  if (crb(c,1)) { IRQCHK(c); goto L_803CB518; } // 803CB584
L_803CB588:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803CB588
  c->r[4]=c->r[1]+0x00000008u; // 803CB58C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 803CB590
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 803CB594
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 803CB598
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 803CB59C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 803CB5A0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[7]);} // 803CB5A4
  c->lr=0x803CB5ACu; f_8028730C(c); // 803CB5A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CB5AC
  c->lr=c->r[0]; // 803CB5B0
  c->r[1]=c->r[1]+0x00000020u; // 803CB5B4
  return; // 803CB5B8
}

// fn_803CB5BC
void f_803CB5BC(Ctx* __restrict c) {
  trace_call(0x803CB5BCu);
  c->r[0]=0u+0xFFFFFFFFu; // 803CB5BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 803CB5C0
  return; // 803CB5C4
}

// __ct__Q36nw4hbm3lyt8MaterialFPCQ46nw4hbm3lyt3res8MaterialRCQ36nw4hbm3lyt11ResBlockSet
void f_803CB5C8(Ctx* __restrict c) {
  trace_call(0x803CB5C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CB5C8
  c->r[0]=c->lr; // 803CB5CC
  W32(c->r[1]+0x00000084u,c->r[0]); // 803CB5D0
  c->r[11]=c->r[1]+0x00000080u; // 803CB5D4
  c->lr=0x803CB5DCu; f_80289DC0(c); // 803CB5D8
  c->r[14]=0u+0x00000000u; // 803CB5DC
  c->r[8]=0u+0x80440000u; // 803CB5E0
  W32(c->r[3]+0x0000001Cu,c->r[14]); // 803CB5E4
  c->r[9]=c->r[3]+0x0000001Cu; // 803CB5E8
  c->r[8]=c->r[8]+0xFFFF8FF0u; // 803CB5EC
  c->r[7]=0u+0x803D0000u; // 803CB5F0
  W32(c->r[3]+0x00000020u,c->r[14]); // 803CB5F4
  c->r[6]=0u+0x803D0000u; // 803CB5F8
  c->r[16]=c->r[4]|c->r[4]; // 803CB5FC
  c->r[17]=c->r[5]|c->r[5]; // 803CB600
  c->r[4]=c->r[7]+0xFFFFB5BCu; // 803CB604
  c->r[5]=c->r[6]+0xFFFF9398u; // 803CB608
  W32(c->r[3]+0x00000000u,c->r[8]); // 803CB60C
  c->r[15]=c->r[3]|c->r[3]; // 803CB610
  c->r[6]=0u+0x00000004u; // 803CB614
  c->r[7]=0u+0x00000004u; // 803CB618
  W32(c->r[3]+0x00000018u,c->r[14]); // 803CB61C
  W32(c->r[3]+0x0000001Cu,c->r[9]); // 803CB620
  W32(c->r[3]+0x00000020u,c->r[9]); // 803CB624
  c->r[3]=c->r[3]+0x0000003Cu; // 803CB628
  c->lr=0x803CB630u; f_80289B34(c); // 803CB62C
  c->r[4]=0u+0x803F0000u; // 803CB630
  c->r[7]=0u+0x000000FFu; // 803CB634
  c->r[5]=c->r[4]+0x00000E50u; // 803CB638
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CB63C
  c->r[11]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000E50u); // 803CB640
  c->r[4]=c->r[16]|c->r[16]; // 803CB644
  c->r[3]=R32(c->r[15]+0x0000004Cu); // 803CB648
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 803CB64C
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 803CB650
  c->r[6]=rotl(c->r[3],0)&0x0000001Fu; // 803CB654
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 803CB658
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 803CB65C
  c->r[3]=c->r[15]+0x00000004u; // 803CB660
  W16(c->r[15]+0x00000024u,c->r[11]); // 803CB664
  c->r[5]=0u+0x00000014u; // 803CB668
  W16(c->r[15]+0x00000026u,c->r[10]); // 803CB66C
  W16(c->r[15]+0x00000028u,c->r[9]); // 803CB670
  W16(c->r[15]+0x0000002Au,c->r[8]); // 803CB674
  W16(c->r[15]+0x0000002Cu,c->r[7]); // 803CB678
  W16(c->r[15]+0x0000002Eu,c->r[7]); // 803CB67C
  W16(c->r[15]+0x00000030u,c->r[7]); // 803CB680
  W16(c->r[15]+0x00000032u,c->r[7]); // 803CB684
  W16(c->r[15]+0x00000034u,c->r[7]); // 803CB688
  W16(c->r[15]+0x00000036u,c->r[7]); // 803CB68C
  W16(c->r[15]+0x00000038u,c->r[7]); // 803CB690
  W16(c->r[15]+0x0000003Au,c->r[7]); // 803CB694
  W32(c->r[15]+0x0000004Cu,c->r[6]); // 803CB698
  W32(c->r[15]+0x00000050u,c->r[0]); // 803CB69C
  W8(c->r[15]+0x00000054u,c->r[14]); // 803CB6A0
  W32(c->r[15]+0x00000058u,c->r[14]); // 803CB6A4
  c->lr=0x803CB6ACu; f_80293498(c); // 803CB6A8
  c->r[20]=R32(c->r[16]+0x0000003Cu); // 803CB6AC
  c->r[23]=c->r[16]+0x00000040u; // 803CB6B0
  c->r[10]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000014u); // 803CB6B4
  c->r[18]=0u+0x00000008u; // 803CB6B8
  c->r[12]=rotl(c->r[20],28)&0x0000000Fu; // 803CB6BC
  c->r[3]=rotl(c->r[20],2)&0x0000003Cu; // 803CB6C0
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)20); // 803CB6C4
  c->r[11]=rotl(c->r[20],0)&0x0000000Fu; // 803CB6C8
  c->r[24]=c->r[3]+0x00000040u; // 803CB6CC
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000016u); // 803CB6D0
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000018u); // 803CB6D4
  c->r[14]=rotl(c->r[20],26)&0x0000003Cu; // 803CB6D8
  c->r[22]=c->r[16]+c->r[24]; // 803CB6DC
  c->r[24]=c->r[24]+c->r[0]; // 803CB6E0
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Au); // 803CB6E4
  c->r[21]=c->r[16]+c->r[24]; // 803CB6E8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Cu); // 803CB6EC
  c->r[24]=c->r[24]+c->r[14]; // 803CB6F0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000001Eu); // 803CB6F4
  cmpu(c,0,c->r[11],0x00000008u); // 803CB6F8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000020u); // 803CB6FC
  c->r[19]=rotl(c->r[20],24)&0x0000000Fu; // 803CB700
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000022u); // 803CB704
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000024u); // 803CB708
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000026u); // 803CB70C
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x00000028u); // 803CB710
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[16]+0x0000002Au); // 803CB714
  c->r[27]=R32(c->r[16]+0x0000002Cu); // 803CB718
  c->r[26]=R32(c->r[16]+0x00000030u); // 803CB71C
  c->r[25]=R32(c->r[16]+0x00000034u); // 803CB720
  c->r[14]=R32(c->r[16]+0x00000038u); // 803CB724
  W16(c->r[15]+0x00000024u,c->r[10]); // 803CB728
  W16(c->r[15]+0x00000026u,c->r[9]); // 803CB72C
  W16(c->r[15]+0x00000028u,c->r[8]); // 803CB730
  W16(c->r[15]+0x0000002Au,c->r[7]); // 803CB734
  W16(c->r[15]+0x0000002Cu,c->r[6]); // 803CB738
  W16(c->r[15]+0x0000002Eu,c->r[5]); // 803CB73C
  W16(c->r[15]+0x00000030u,c->r[4]); // 803CB740
  W16(c->r[15]+0x00000032u,c->r[3]); // 803CB744
  W16(c->r[15]+0x00000034u,c->r[0]); // 803CB748
  W16(c->r[15]+0x00000036u,c->r[30]); // 803CB74C
  W16(c->r[15]+0x00000038u,c->r[29]); // 803CB750
  W16(c->r[15]+0x0000003Au,c->r[28]); // 803CB754
  W32(c->r[15]+0x0000003Cu,c->r[27]); // 803CB758
  W32(c->r[15]+0x00000040u,c->r[26]); // 803CB75C
  W32(c->r[15]+0x00000044u,c->r[25]); // 803CB760
  W32(c->r[15]+0x00000048u,c->r[14]); // 803CB764
  if (crb(c,1)) { goto L_803CB770; } // 803CB768
  c->r[18]=c->r[11]|c->r[11]; // 803CB76C
L_803CB770:;
  cmpu(c,0,c->r[12],0x0000000Au); // 803CB770
  c->r[14]=0u+0x0000000Au; // 803CB774
  if (crb(c,1)) { goto L_803CB780; } // 803CB778
  c->r[14]=c->r[12]|c->r[12]; // 803CB77C
L_803CB780:;
  cmpu(c,0,c->r[19],0x00000008u); // 803CB780
  c->r[27]=0u+0x00000008u; // 803CB784
  if (crb(c,1)) { goto L_803CB790; } // 803CB788
  c->r[27]=c->r[19]|c->r[19]; // 803CB78C
L_803CB790:;
  c->r[5]=rotl(c->r[20],7)&0x00000001u; // 803CB790
  c->r[0]=rotl(c->r[20],20)&0x00000001u; // 803CB794
  c->r[4]=0u-c->r[5]; // 803CB798
  c->r[3]=rotl(c->r[20],5)&0x00000001u; // 803CB79C
  W8(c->r[1]+0x00000034u,c->r[0]); // 803CB7A0
  c->r[0]=0u-c->r[3]; // 803CB7A4
  c->r[3]=c->r[0]|c->r[3]; // 803CB7A8
  c->r[4]=c->r[4]|c->r[5]; // 803CB7AC
  c->r[0]=rotl(c->r[20],9)&0x00000001u; // 803CB7B0
  c->r[6]=rotl(c->r[20],19)&0x00000003u; // 803CB7B4
  W8(c->r[1]+0x00000033u,c->r[0]); // 803CB7B8
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 803CB7BC
  cmpu(c,0,c->r[6],0x00000003u); // 803CB7C0
  c->r[28]=0u+0x00000003u; // 803CB7C4
  W8(c->r[1]+0x00000031u,c->r[0]); // 803CB7C8
  c->r[0]=rotl(c->r[20],8)&0x00000001u; // 803CB7CC
  W8(c->r[1]+0x00000032u,c->r[0]); // 803CB7D0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803CB7D4
  W8(c->r[1]+0x00000030u,c->r[0]); // 803CB7D8
  if (crb(c,1)) { goto L_803CB7E4; } // 803CB7DC
  c->r[28]=c->r[6]|c->r[6]; // 803CB7E0
L_803CB7E4:;
  c->r[0]=rotl(c->r[20],17)&0x00000007u; // 803CB7E4
  c->r[29]=0u+0x00000004u; // 803CB7E8
  cmpu(c,0,c->r[0],0x00000004u); // 803CB7EC
  if (crb(c,1)) { goto L_803CB7F8; } // 803CB7F0
  c->r[29]=c->r[0]|c->r[0]; // 803CB7F4
L_803CB7F8:;
  c->r[0]=rotl(c->r[20],14)&0x0000001Fu; // 803CB7F8
  c->r[30]=0u+0x00000010u; // 803CB7FC
  cmpu(c,0,c->r[0],0x00000010u); // 803CB800
  if (crb(c,1)) { goto L_803CB80C; } // 803CB804
  c->r[30]=c->r[0]|c->r[0]; // 803CB808
L_803CB80C:;
  c->r[0]=R8(c->r[1]+0x00000031u); // 803CB80C
  c->r[3]=c->r[15]|c->r[15]; // 803CB810
  c->r[8]=R8(c->r[1]+0x00000034u); // 803CB814
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 803CB818
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CB81C
  c->r[5]=rotl(c->r[14],0)&0x000000FFu; // 803CB820
  c->r[0]=R8(c->r[1]+0x00000030u); // 803CB824
  c->r[6]=rotl(c->r[27],0)&0x000000FFu; // 803CB828
  c->r[7]=rotl(c->r[30],0)&0x000000FFu; // 803CB82C
  c->r[9]=rotl(c->r[29],0)&0x000000FFu; // 803CB830
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803CB834
  c->r[10]=rotl(c->r[28],0)&0x000000FFu; // 803CB838
  c->r[0]=R8(c->r[1]+0x00000033u); // 803CB83C
  W32(c->r[1]+0x00000010u,c->r[0]); // 803CB840
  c->r[0]=R8(c->r[1]+0x00000032u); // 803CB844
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CB848
  c->lr=0x803CB850u; f_803CC8C4(c); // 803CB84C
  c->r[4]=R32(c->r[15]+0x00000058u); // 803CB850
  cmps(c,0,(int32_t)c->r[4],0); // 803CB854
  if (crb(c,2)) { goto L_803CC7F8; } // 803CB858
  c->r[19]=rotl(c->r[18],0)&0x000000FFu; cr0(c,c->r[19]); // 803CB85C
  if (crb(c,2)) { goto L_803CB8A4; } // 803CB860
  c->r[3]=R32(c->r[15]+0x00000050u); // 803CB864
  c->r[0]=rotl(c->r[3],9)&0x000001E0u; // 803CB868
  c->r[20]=rotl(c->r[3],4)&0x0000000Fu; // 803CB86C
  c->r[25]=c->r[4]+c->r[0]; // 803CB870
  goto L_803CB890; // 803CB874
L_803CB878:;
  c->r[3]=c->r[25]|c->r[25]; // 803CB878
  c->r[4]=0u+0x00000000u; // 803CB87C
  c->r[5]=0u+0x00000020u; // 803CB880
  c->lr=0x803CB888u; f_800043EC(c); // 803CB884
  c->r[25]=c->r[25]+0x00000020u; // 803CB888
  c->r[20]=c->r[20]+0x00000001u; // 803CB88C
L_803CB890:;
  cmpu(c,0,c->r[20],c->r[19]); // 803CB890
  if (crb(c,0)) { IRQCHK(c); goto L_803CB878; } // 803CB894
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CB898
  c->r[0]=(rotl(c->r[18],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 803CB89C
  W32(c->r[15]+0x00000050u,c->r[0]); // 803CB8A0
L_803CB8A4:;
  c->r[0]=rotl(c->r[18],0)&0x000000FFu; cr0(c,c->r[0]); // 803CB8A4
  if (crb(c,2)) { goto L_803CB938; } // 803CB8A8
  c->r[3]=R32(c->r[17]+0x00000000u); // 803CB8AC
  c->r[18]=0u+0x00000000u; // 803CB8B0
  c->r[19]=R32(c->r[15]+0x00000058u); // 803CB8B4
  c->r[31]=0u+0x74690000u; // 803CB8B8
  c->r[20]=c->r[3]+0x0000000Cu; // 803CB8BC
  goto L_803CB924; // 803CB8C0
L_803CB8C4:;
  c->r[0]=rotl(c->r[18],2)&0x000003FCu; // 803CB8C4
  c->r[3]=R32(c->r[17]+0x0000000Cu); // 803CB8C8
  c->r[26]=c->r[23]+c->r[0]; // 803CB8CC
  c->r[0]=R16(c->r[23]+c->r[0]); // 803CB8D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CB8D4
  c->r[4]=c->r[31]+0x00006D67u; // 803CB8D8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 803CB8DC
  c->r[6]=0u+0x00000000u; // 803CB8E0
  c->r[0]=R32(c->r[20]+c->r[0]); // 803CB8E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CB8E8
  c->r[5]=c->r[20]+c->r[0]; // 803CB8EC
  c->ctr=c->r[12]; // 803CB8F0
  if (true) { c->lr=0x803CB8F8u; dispatch(c,c->ctr); } // 803CB8F4
  c->r[0]=R32(c->r[15]+0x00000058u); // 803CB8F8
  c->r[25]=rotl(c->r[18],5)&0x00001FE0u; // 803CB8FC
  c->r[4]=c->r[3]|c->r[3]; // 803CB900
  c->r[5]=0u+0x00000000u; // 803CB904
  c->r[3]=c->r[0]+c->r[25]; // 803CB908
  c->lr=0x803CB910u; f_803CA0CC(c); // 803CB90C
  c->r[4]=R8(c->r[26]+0x00000002u); // 803CB910
  c->r[3]=c->r[19]+c->r[25]; // 803CB914
  c->r[5]=R8(c->r[26]+0x00000003u); // 803CB918
  c->lr=0x803CB920u; f_80286794(c); // 803CB91C
  c->r[18]=c->r[18]+0x00000001u; // 803CB920
L_803CB924:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CB924
  c->r[3]=rotl(c->r[18],0)&0x000000FFu; // 803CB928
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 803CB92C
  cmpu(c,0,c->r[3],c->r[0]); // 803CB930
  if (crb(c,0)) { IRQCHK(c); goto L_803CB8C4; } // 803CB934
L_803CB938:;
  c->r[0]=R32(c->r[15]+0x0000004Cu); // 803CB938
  c->r[3]=rotl(c->r[14],0)&0x000000FFu; cr0(c,c->r[3]); // 803CB93C
  c->r[4]=R32(c->r[15]+0x00000058u); // 803CB940
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 803CB944
  c->r[4]=c->r[4]+c->r[0]; // 803CB948
  if (!crb(c,1)) { goto L_803CBA48; } // 803CB94C
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 803CB950
  c->ctr=c->r[0]; // 803CB954
  if (crb(c,2)) { goto L_803CBA10; } // 803CB958
L_803CB95C:;
  {uint32_t ea=c->r[22]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CB95C
  {uint32_t ea=c->r[22]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB960
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 803CB964
  {uint32_t ea=c->r[22]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB968
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 803CB96C
  {uint32_t ea=c->r[22]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB970
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 803CB974
  {uint32_t ea=c->r[22]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB978
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CB97C
  {uint32_t ea=c->r[22]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CB980
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 803CB984
  {uint32_t ea=c->r[22]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB988
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[2]);} // 803CB98C
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB990
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[1]);} // 803CB994
  {uint32_t ea=c->r[22]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB998
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 803CB99C
  {uint32_t ea=c->r[22]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB9A0
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[1]);} // 803CB9A4
  {uint32_t ea=c->r[22]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CB9A8
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 803CB9AC
  {uint32_t ea=c->r[22]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB9B0
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[2]);} // 803CB9B4
  {uint32_t ea=c->r[22]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB9B8
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[1]);} // 803CB9BC
  {uint32_t ea=c->r[22]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB9C0
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 803CB9C4
  {uint32_t ea=c->r[22]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB9C8
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[1]);} // 803CB9CC
  {uint32_t ea=c->r[22]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803CB9D0
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 803CB9D4
  {uint32_t ea=c->r[22]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB9D8
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[2]);} // 803CB9DC
  {uint32_t ea=c->r[22]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB9E0
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[1]);} // 803CB9E4
  {uint32_t ea=c->r[22]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CB9E8
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 803CB9EC
  {uint32_t ea=c->r[22]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CB9F0
  c->r[22]=c->r[22]+0x00000050u; // 803CB9F4
  {uint32_t ea=c->r[4]+0x00000048u; WF32(ea,c->f[1]);} // 803CB9F8
  {uint32_t ea=c->r[4]+0x0000004Cu; WF32(ea,c->f[0]);} // 803CB9FC
  c->r[4]=c->r[4]+0x00000050u; // 803CBA00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CB95C; } // 803CBA04
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 803CBA08
  if (crb(c,2)) { goto L_803CBA48; } // 803CBA0C
L_803CBA10:;
  c->ctr=c->r[3]; // 803CBA10
L_803CBA14:;
  {uint32_t ea=c->r[22]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CBA14
  {uint32_t ea=c->r[22]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CBA18
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 803CBA1C
  {uint32_t ea=c->r[22]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBA20
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 803CBA24
  {uint32_t ea=c->r[22]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CBA28
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 803CBA2C
  {uint32_t ea=c->r[22]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBA30
  c->r[22]=c->r[22]+0x00000014u; // 803CBA34
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CBA38
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 803CBA3C
  c->r[4]=c->r[4]+0x00000014u; // 803CBA40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CBA14; } // 803CBA44
L_803CBA48:;
  c->r[3]=R32(c->r[15]+0x0000004Cu); // 803CBA48
  c->r[5]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[5]); // 803CBA4C
  c->r[4]=R32(c->r[15]+0x00000058u); // 803CBA50
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 803CBA54
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 803CBA58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CBA5C
  c->r[0]=c->r[4]+c->r[0]; // 803CBA60
  c->r[3]=c->r[3]+c->r[0]; // 803CBA64
  if (crb(c,2)) { goto L_803CBB9C; } // 803CBA68
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CBA6C
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 803CBA70
  cmpu(c,1,c->r[4],c->r[5]); // 803CBA74
  if (!crb(c,4)) { goto L_803CBB90; } // 803CBA78
  c->r[0]=c->r[5]-c->r[4]; // 803CBA7C
  c->r[9]=c->r[5]+0xFFFFFFF8u; // 803CBA80
  cmpu(c,0,c->r[0],0x00000008u); // 803CBA84
  if (!crb(c,1)) { goto L_803CBB4C; } // 803CBA88
  if (crb(c,5)) { goto L_803CBB4C; } // 803CBA8C
  c->r[0]=c->r[9]+0x00000007u; // 803CBA90
  c->r[5]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803CBA94
  c->r[0]=c->r[0]-c->r[4]; // 803CBA98
  c->r[8]=0u+0x00000001u; // 803CBA9C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803CBAA0
  c->r[10]=c->r[3]+c->r[5]; // 803CBAA4
  c->r[7]=0u+0x00000004u; // 803CBAA8
  c->r[6]=0u+0x0000003Cu; // 803CBAAC
  c->r[5]=0u+0x00000000u; // 803CBAB0
  c->ctr=c->r[0]; // 803CBAB4
  cmpu(c,0,c->r[4],c->r[9]); // 803CBAB8
  if (!crb(c,0)) { goto L_803CBB4C; } // 803CBABC
L_803CBAC0:;
  W8(c->r[10]+0x00000000u,c->r[8]); // 803CBAC0
  c->r[4]=c->r[4]+0x00000008u; // 803CBAC4
  W8(c->r[10]+0x00000001u,c->r[7]); // 803CBAC8
  W8(c->r[10]+0x00000002u,c->r[6]); // 803CBACC
  W8(c->r[10]+0x00000003u,c->r[5]); // 803CBAD0
  W8(c->r[10]+0x00000004u,c->r[8]); // 803CBAD4
  W8(c->r[10]+0x00000005u,c->r[7]); // 803CBAD8
  W8(c->r[10]+0x00000006u,c->r[6]); // 803CBADC
  W8(c->r[10]+0x00000007u,c->r[5]); // 803CBAE0
  W8(c->r[10]+0x00000008u,c->r[8]); // 803CBAE4
  W8(c->r[10]+0x00000009u,c->r[7]); // 803CBAE8
  W8(c->r[10]+0x0000000Au,c->r[6]); // 803CBAEC
  W8(c->r[10]+0x0000000Bu,c->r[5]); // 803CBAF0
  W8(c->r[10]+0x0000000Cu,c->r[8]); // 803CBAF4
  W8(c->r[10]+0x0000000Du,c->r[7]); // 803CBAF8
  W8(c->r[10]+0x0000000Eu,c->r[6]); // 803CBAFC
  W8(c->r[10]+0x0000000Fu,c->r[5]); // 803CBB00
  W8(c->r[10]+0x00000010u,c->r[8]); // 803CBB04
  W8(c->r[10]+0x00000011u,c->r[7]); // 803CBB08
  W8(c->r[10]+0x00000012u,c->r[6]); // 803CBB0C
  W8(c->r[10]+0x00000013u,c->r[5]); // 803CBB10
  W8(c->r[10]+0x00000014u,c->r[8]); // 803CBB14
  W8(c->r[10]+0x00000015u,c->r[7]); // 803CBB18
  W8(c->r[10]+0x00000016u,c->r[6]); // 803CBB1C
  W8(c->r[10]+0x00000017u,c->r[5]); // 803CBB20
  W8(c->r[10]+0x00000018u,c->r[8]); // 803CBB24
  W8(c->r[10]+0x00000019u,c->r[7]); // 803CBB28
  W8(c->r[10]+0x0000001Au,c->r[6]); // 803CBB2C
  W8(c->r[10]+0x0000001Bu,c->r[5]); // 803CBB30
  W8(c->r[10]+0x0000001Cu,c->r[8]); // 803CBB34
  W8(c->r[10]+0x0000001Du,c->r[7]); // 803CBB38
  W8(c->r[10]+0x0000001Eu,c->r[6]); // 803CBB3C
  W8(c->r[10]+0x0000001Fu,c->r[5]); // 803CBB40
  c->r[10]=c->r[10]+0x00000020u; // 803CBB44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CBAC0; } // 803CBB48
L_803CBB4C:;
  c->r[5]=rotl(c->r[27],0)&0x000000FFu; // 803CBB4C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803CBB50
  c->r[0]=c->r[5]-c->r[4]; // 803CBB54
  c->r[9]=0u+0x00000001u; // 803CBB58
  c->r[10]=c->r[3]+c->r[6]; // 803CBB5C
  c->r[8]=0u+0x00000004u; // 803CBB60
  c->r[7]=0u+0x0000003Cu; // 803CBB64
  c->r[6]=0u+0x00000000u; // 803CBB68
  c->ctr=c->r[0]; // 803CBB6C
  cmpu(c,0,c->r[4],c->r[5]); // 803CBB70
  if (!crb(c,0)) { goto L_803CBB90; } // 803CBB74
L_803CBB78:;
  W8(c->r[10]+0x00000000u,c->r[9]); // 803CBB78
  W8(c->r[10]+0x00000001u,c->r[8]); // 803CBB7C
  W8(c->r[10]+0x00000002u,c->r[7]); // 803CBB80
  W8(c->r[10]+0x00000003u,c->r[6]); // 803CBB84
  c->r[10]=c->r[10]+0x00000004u; // 803CBB88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CBB78; } // 803CBB8C
L_803CBB90:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CBB90
  c->r[0]=(rotl(c->r[27],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 803CBB94
  W32(c->r[15]+0x00000050u,c->r[0]); // 803CBB98
L_803CBB9C:;
  c->r[5]=0u+0x00000000u; // 803CBB9C
  goto L_803CBBD0; // 803CBBA0
L_803CBBA4:;
  c->r[4]=R8(c->r[21]+0x00000000u); // 803CBBA4
  c->r[5]=c->r[5]+0x00000001u; // 803CBBA8
  c->r[0]=R8(c->r[21]+0x00000001u); // 803CBBAC
  W8(c->r[3]+0x00000000u,c->r[4]); // 803CBBB0
  c->r[4]=R8(c->r[21]+0x00000002u); // 803CBBB4
  W8(c->r[3]+0x00000001u,c->r[0]); // 803CBBB8
  c->r[0]=R8(c->r[21]+0x00000003u); // 803CBBBC
  c->r[21]=c->r[21]+0x00000004u; // 803CBBC0
  W8(c->r[3]+0x00000002u,c->r[4]); // 803CBBC4
  W8(c->r[3]+0x00000003u,c->r[0]); // 803CBBC8
  c->r[3]=c->r[3]+0x00000004u; // 803CBBCC
L_803CBBD0:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CBBD0
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 803CBBD4
  cmpu(c,0,c->r[5],c->r[0]); // 803CBBD8
  if (crb(c,0)) { IRQCHK(c); goto L_803CBBA4; } // 803CBBDC
  c->r[0]=R8(c->r[1]+0x00000031u); // 803CBBE0
  cmps(c,0,(int32_t)c->r[0],0); // 803CBBE4
  if (crb(c,2)) { goto L_803CBC38; } // 803CBBE8
  c->r[4]=R32(c->r[15]+0x0000004Cu); // 803CBBEC
  c->r[7]=c->r[16]+c->r[24]; // 803CBBF0
  c->r[6]=R32(c->r[15]+0x00000058u); // 803CBBF4
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 803CBBF8
  c->r[5]=rotl(c->r[4],14)&0x0000003Cu; // 803CBBFC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CBC00
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 803CBC04
  c->r[0]=R8(c->r[16]+c->r[24]); // 803CBC08
  c->r[24]=c->r[24]+0x00000004u; // 803CBC0C
  c->r[5]=c->r[5]+c->r[4]; // 803CBC10
  c->r[4]=R8(c->r[7]+0x00000001u); // 803CBC14
  c->r[3]=c->r[6]+c->r[3]; // 803CBC18
  c->r[5]=c->r[5]+c->r[3]; // 803CBC1C
  c->r[3]=R8(c->r[7]+0x00000002u); // 803CBC20
  W8(c->r[5]+0x00000000u,c->r[0]); // 803CBC24
  c->r[0]=R8(c->r[7]+0x00000003u); // 803CBC28
  W8(c->r[5]+0x00000001u,c->r[4]); // 803CBC2C
  W8(c->r[5]+0x00000002u,c->r[3]); // 803CBC30
  W8(c->r[5]+0x00000003u,c->r[0]); // 803CBC34
L_803CBC38:;
  c->r[0]=R8(c->r[1]+0x00000030u); // 803CBC38
  cmps(c,0,(int32_t)c->r[0],0); // 803CBC3C
  if (crb(c,2)) { goto L_803CBC98; } // 803CBC40
  c->r[6]=R32(c->r[15]+0x0000004Cu); // 803CBC44
  c->r[8]=c->r[16]+c->r[24]; // 803CBC48
  c->r[7]=R32(c->r[15]+0x00000058u); // 803CBC4C
  c->r[0]=rotl(c->r[6],8)&0x0000000Fu; // 803CBC50
  c->r[4]=rotl(c->r[6],14)&0x0000003Cu; // 803CBC54
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CBC58
  c->r[3]=rotl(c->r[6],9)&0x000001E0u; // 803CBC5C
  c->r[6]=rotl(c->r[6],26)&0x00000004u; // 803CBC60
  c->r[0]=R8(c->r[16]+c->r[24]); // 803CBC64
  c->r[3]=c->r[4]+c->r[3]; // 803CBC68
  c->r[4]=R8(c->r[8]+0x00000001u); // 803CBC6C
  c->r[5]=c->r[6]+c->r[5]; // 803CBC70
  c->r[3]=c->r[7]+c->r[3]; // 803CBC74
  c->r[5]=c->r[5]+c->r[3]; // 803CBC78
  c->r[3]=R8(c->r[8]+0x00000002u); // 803CBC7C
  W8(c->r[5]+0x00000000u,c->r[0]); // 803CBC80
  c->r[24]=c->r[24]+0x00000004u; // 803CBC84
  c->r[0]=R8(c->r[8]+0x00000003u); // 803CBC88
  W8(c->r[5]+0x00000001u,c->r[4]); // 803CBC8C
  W8(c->r[5]+0x00000002u,c->r[3]); // 803CBC90
  W8(c->r[5]+0x00000003u,c->r[0]); // 803CBC94
L_803CBC98:;
  c->r[0]=R8(c->r[1]+0x00000034u); // 803CBC98
  cmps(c,0,(int32_t)c->r[0],0); // 803CBC9C
  if (crb(c,2)) { goto L_803CBCFC; } // 803CBCA0
  c->r[4]=R32(c->r[15]+0x0000004Cu); // 803CBCA4
  c->r[10]=c->r[16]+c->r[24]; // 803CBCA8
  c->r[5]=R8(c->r[16]+c->r[24]); // 803CBCAC
  c->r[24]=c->r[24]+0x00000004u; // 803CBCB0
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 803CBCB4
  c->r[3]=rotl(c->r[4],14)&0x0000003Cu; // 803CBCB8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CBCBC
  c->r[9]=R32(c->r[15]+0x00000058u); // 803CBCC0
  c->r[0]=rotl(c->r[4],9)&0x000001E0u; // 803CBCC4
  c->r[8]=rotl(c->r[4],27)&0x00000004u; // 803CBCC8
  c->r[7]=rotl(c->r[4],26)&0x00000004u; // 803CBCCC
  c->r[3]=c->r[3]+c->r[0]; // 803CBCD0
  c->r[0]=c->r[8]+c->r[7]; // 803CBCD4
  c->r[4]=R8(c->r[10]+0x00000001u); // 803CBCD8
  c->r[7]=c->r[6]+c->r[3]; // 803CBCDC
  c->r[3]=R8(c->r[10]+0x00000002u); // 803CBCE0
  c->r[6]=c->r[9]+c->r[0]; // 803CBCE4
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 803CBCE8
  c->r[0]=R8(c->r[10]+0x00000003u); // 803CBCEC
  W8(c->r[6]+0x00000001u,c->r[4]); // 803CBCF0
  W8(c->r[6]+0x00000002u,c->r[3]); // 803CBCF4
  W8(c->r[6]+0x00000003u,c->r[0]); // 803CBCF8
L_803CBCFC:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 803CBCFC
  cmps(c,1,(int32_t)c->r[3],0); // 803CBD00
  if (crb(c,6)) { goto L_803CBF58; } // 803CBD04
  c->r[12]=R32(c->r[15]+0x0000004Cu); // 803CBD08
  c->r[5]=c->r[16]+c->r[24]; // 803CBD0C
  c->r[17]=R32(c->r[15]+0x00000058u); // 803CBD10
  c->r[6]=0u+0x00000000u; // 803CBD14
  c->r[0]=rotl(c->r[12],8)&0x0000000Fu; // 803CBD18
  c->r[11]=rotl(c->r[12],28)&0x00000004u; // 803CBD1C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CBD20
  c->r[9]=rotl(c->r[12],26)&0x00000004u; // 803CBD24
  c->r[10]=rotl(c->r[12],20)&0x00000004u; // 803CBD28
  c->r[8]=rotl(c->r[12],27)&0x00000004u; // 803CBD2C
  c->r[7]=rotl(c->r[12],14)&0x0000003Cu; // 803CBD30
  c->r[0]=rotl(c->r[12],9)&0x000001E0u; // 803CBD34
  c->r[0]=c->r[7]+c->r[0]; // 803CBD38
  c->r[14]=rotl(c->r[12],19)&0x0000001Cu; // 803CBD3C
  c->r[12]=rotl(c->r[12],29)&0x00000004u; // 803CBD40
  c->r[8]=c->r[10]+c->r[8]; // 803CBD44
  c->r[7]=c->r[11]+c->r[9]; // 803CBD48
  c->r[4]=c->r[4]+c->r[0]; // 803CBD4C
  c->r[7]=c->r[8]+c->r[7]; // 803CBD50
  c->r[0]=c->r[14]+c->r[12]; // 803CBD54
  c->r[4]=c->r[7]+c->r[4]; // 803CBD58
  c->r[0]=c->r[17]+c->r[0]; // 803CBD5C
  c->r[0]=c->r[4]+c->r[0]; // 803CBD60
  if (!crb(c,5)) { goto L_803CBF58; } // 803CBD64
  cmps(c,0,(int32_t)c->r[3],8); // 803CBD68
  c->r[8]=c->r[3]+0xFFFFFFF8u; // 803CBD6C
  if (!crb(c,1)) { goto L_803CBF04; } // 803CBD70
  c->r[7]=0u+0x00000000u; // 803CBD74
  if (crb(c,4)) { goto L_803CBD90; } // 803CBD78
  c->r[4]=0u+0x80000000u; // 803CBD7C
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 803CBD80
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 803CBD84
  if (crb(c,1)) { goto L_803CBD90; } // 803CBD88
  c->r[7]=0u+0x00000001u; // 803CBD8C
L_803CBD90:;
  cmps(c,0,(int32_t)c->r[7],0); // 803CBD90
  if (crb(c,2)) { goto L_803CBF04; } // 803CBD94
  c->r[7]=c->r[8]+0x00000007u; // 803CBD98
  c->r[3]=c->r[5]|c->r[5]; // 803CBD9C
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 803CBDA0
  c->r[4]=c->r[0]|c->r[0]; // 803CBDA4
  c->ctr=c->r[7]; // 803CBDA8
  cmps(c,0,(int32_t)c->r[8],0); // 803CBDAC
  if (!crb(c,1)) { goto L_803CBF04; } // 803CBDB0
L_803CBDB4:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 803CBDB4
  c->r[6]=c->r[6]+0x00000008u; // 803CBDB8
  c->r[7]=R32(c->r[3]+0x00000004u); // 803CBDBC
  W32(c->r[4]+0x00000000u,c->r[8]); // 803CBDC0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBDC4
  W32(c->r[4]+0x00000004u,c->r[7]); // 803CBDC8
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 803CBDCC
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 803CBDD0
  c->r[7]=R32(c->r[3]+0x00000010u); // 803CBDD4
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 803CBDD8
  c->r[8]=R32(c->r[3]+0x00000014u); // 803CBDDC
  W32(c->r[4]+0x00000010u,c->r[7]); // 803CBDE0
  c->r[7]=R32(c->r[3]+0x00000018u); // 803CBDE4
  W32(c->r[4]+0x00000014u,c->r[8]); // 803CBDE8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBDEC
  W32(c->r[4]+0x00000018u,c->r[7]); // 803CBDF0
  c->r[8]=R32(c->r[3]+0x00000020u); // 803CBDF4
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[0]);} // 803CBDF8
  c->r[7]=R32(c->r[3]+0x00000024u); // 803CBDFC
  W32(c->r[4]+0x00000020u,c->r[8]); // 803CBE00
  c->r[8]=R32(c->r[3]+0x00000028u); // 803CBE04
  W32(c->r[4]+0x00000024u,c->r[7]); // 803CBE08
  c->r[7]=R32(c->r[3]+0x0000002Cu); // 803CBE0C
  W32(c->r[4]+0x00000028u,c->r[8]); // 803CBE10
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBE14
  W32(c->r[4]+0x0000002Cu,c->r[7]); // 803CBE18
  c->r[8]=R32(c->r[3]+0x00000034u); // 803CBE1C
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 803CBE20
  c->r[7]=R32(c->r[3]+0x00000038u); // 803CBE24
  W32(c->r[4]+0x00000034u,c->r[8]); // 803CBE28
  c->r[8]=R32(c->r[3]+0x0000003Cu); // 803CBE2C
  W32(c->r[4]+0x00000038u,c->r[7]); // 803CBE30
  c->r[7]=R32(c->r[3]+0x00000040u); // 803CBE34
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 803CBE38
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBE3C
  W32(c->r[4]+0x00000040u,c->r[7]); // 803CBE40
  c->r[8]=R32(c->r[3]+0x00000048u); // 803CBE44
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[0]);} // 803CBE48
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 803CBE4C
  W32(c->r[4]+0x00000048u,c->r[8]); // 803CBE50
  c->r[8]=R32(c->r[3]+0x00000050u); // 803CBE54
  W32(c->r[4]+0x0000004Cu,c->r[7]); // 803CBE58
  c->r[7]=R32(c->r[3]+0x00000054u); // 803CBE5C
  W32(c->r[4]+0x00000050u,c->r[8]); // 803CBE60
  {uint32_t ea=c->r[3]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBE64
  W32(c->r[4]+0x00000054u,c->r[7]); // 803CBE68
  c->r[8]=R32(c->r[3]+0x0000005Cu); // 803CBE6C
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 803CBE70
  c->r[7]=R32(c->r[3]+0x00000060u); // 803CBE74
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 803CBE78
  c->r[8]=R32(c->r[3]+0x00000064u); // 803CBE7C
  W32(c->r[4]+0x00000060u,c->r[7]); // 803CBE80
  c->r[7]=R32(c->r[3]+0x00000068u); // 803CBE84
  W32(c->r[4]+0x00000064u,c->r[8]); // 803CBE88
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBE8C
  W32(c->r[4]+0x00000068u,c->r[7]); // 803CBE90
  c->r[8]=R32(c->r[3]+0x00000070u); // 803CBE94
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[0]);} // 803CBE98
  c->r[7]=R32(c->r[3]+0x00000074u); // 803CBE9C
  W32(c->r[4]+0x00000070u,c->r[8]); // 803CBEA0
  c->r[8]=R32(c->r[3]+0x00000078u); // 803CBEA4
  W32(c->r[4]+0x00000074u,c->r[7]); // 803CBEA8
  c->r[7]=R32(c->r[3]+0x0000007Cu); // 803CBEAC
  W32(c->r[4]+0x00000078u,c->r[8]); // 803CBEB0
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBEB4
  W32(c->r[4]+0x0000007Cu,c->r[7]); // 803CBEB8
  c->r[8]=R32(c->r[3]+0x00000084u); // 803CBEBC
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[0]);} // 803CBEC0
  c->r[7]=R32(c->r[3]+0x00000088u); // 803CBEC4
  W32(c->r[4]+0x00000084u,c->r[8]); // 803CBEC8
  c->r[8]=R32(c->r[3]+0x0000008Cu); // 803CBECC
  W32(c->r[4]+0x00000088u,c->r[7]); // 803CBED0
  c->r[7]=R32(c->r[3]+0x00000090u); // 803CBED4
  W32(c->r[4]+0x0000008Cu,c->r[8]); // 803CBED8
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBEDC
  W32(c->r[4]+0x00000090u,c->r[7]); // 803CBEE0
  c->r[8]=R32(c->r[3]+0x00000098u); // 803CBEE4
  {uint32_t ea=c->r[4]+0x00000094u; WF32(ea,c->f[0]);} // 803CBEE8
  c->r[7]=R32(c->r[3]+0x0000009Cu); // 803CBEEC
  c->r[3]=c->r[3]+0x000000A0u; // 803CBEF0
  W32(c->r[4]+0x00000098u,c->r[8]); // 803CBEF4
  W32(c->r[4]+0x0000009Cu,c->r[7]); // 803CBEF8
  c->r[4]=c->r[4]+0x000000A0u; // 803CBEFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CBDB4; } // 803CBF00
L_803CBF04:;
  c->r[7]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 803CBF04
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 803CBF08
  c->r[3]=c->r[4]-c->r[6]; // 803CBF0C
  c->r[5]=c->r[5]+c->r[7]; // 803CBF10
  c->r[7]=c->r[0]+c->r[7]; // 803CBF14
  c->ctr=c->r[3]; // 803CBF18
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 803CBF1C
  if (!crb(c,0)) { goto L_803CBF58; } // 803CBF20
L_803CBF24:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 803CBF24
  c->r[0]=R32(c->r[5]+0x00000004u); // 803CBF28
  W32(c->r[7]+0x00000000u,c->r[3]); // 803CBF2C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CBF30
  W32(c->r[7]+0x00000004u,c->r[0]); // 803CBF34
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 803CBF38
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 803CBF3C
  c->r[0]=R32(c->r[5]+0x00000010u); // 803CBF40
  c->r[5]=c->r[5]+0x00000014u; // 803CBF44
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 803CBF48
  W32(c->r[7]+0x00000010u,c->r[0]); // 803CBF4C
  c->r[7]=c->r[7]+0x00000014u; // 803CBF50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CBF24; } // 803CBF54
L_803CBF58:;
  c->r[0]=R32(c->r[16]+0x0000003Cu); // 803CBF58
  c->r[12]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[12]); // 803CBF5C
  c->r[0]=rotl(c->r[0],19)&0x00000003u; // 803CBF60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CBF64
  c->r[24]=c->r[24]+c->r[0]; // 803CBF68
  if (crb(c,2)) { goto L_803CC2E0; } // 803CBF6C
  if (crb(c,2)) { goto L_803CC0D8; } // 803CBF70
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 803CBF74
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CBF78
  c->r[3]=rotl(c->r[10],8)&0x0000000Fu; // 803CBF7C
  c->r[9]=rotl(c->r[10],28)&0x00000004u; // 803CBF80
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 803CBF84
  c->r[7]=rotl(c->r[10],26)&0x00000004u; // 803CBF88
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 803CBF8C
  c->r[11]=R32(c->r[15]+0x00000058u); // 803CBF90
  c->r[8]=rotl(c->r[10],20)&0x00000004u; // 803CBF94
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 803CBF98
  c->r[5]=rotl(c->r[10],14)&0x0000003Cu; // 803CBF9C
  c->r[0]=rotl(c->r[10],9)&0x000001E0u; // 803CBFA0
  c->r[0]=c->r[5]+c->r[0]; // 803CBFA4
  c->r[6]=c->r[8]+c->r[6]; // 803CBFA8
  c->r[5]=c->r[9]+c->r[7]; // 803CBFAC
  cmpu(c,1,c->r[3],c->r[12]); // 803CBFB0
  c->r[0]=c->r[4]+c->r[0]; // 803CBFB4
  c->r[7]=rotl(c->r[10],29)&0x00000004u; // 803CBFB8
  c->r[4]=c->r[6]+c->r[5]; // 803CBFBC
  c->r[4]=c->r[7]+c->r[4]; // 803CBFC0
  c->r[0]=c->r[11]+c->r[0]; // 803CBFC4
  c->r[7]=c->r[4]+c->r[0]; // 803CBFC8
  if (!crb(c,4)) { goto L_803CC0CC; } // 803CBFCC
  c->r[0]=c->r[12]-c->r[3]; // 803CBFD0
  c->r[6]=c->r[12]+0xFFFFFFF8u; // 803CBFD4
  cmpu(c,0,c->r[0],0x00000008u); // 803CBFD8
  if (!crb(c,1)) { goto L_803CC094; } // 803CBFDC
  if (crb(c,5)) { goto L_803CC094; } // 803CBFE0
  c->r[0]=c->r[6]+0x00000007u; // 803CBFE4
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803CBFE8
  c->r[0]=c->r[0]-c->r[3]; // 803CBFEC
  c->r[4]=0u+0x00000000u; // 803CBFF0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803CBFF4
  c->r[5]=c->r[7]+c->r[5]; // 803CBFF8
  c->ctr=c->r[0]; // 803CBFFC
  cmpu(c,0,c->r[3],c->r[6]); // 803CC000
  if (!crb(c,0)) { goto L_803CC094; } // 803CC004
L_803CC008:;
  W8(c->r[5]+0x00000000u,c->r[4]); // 803CC008
  c->r[3]=c->r[3]+0x00000008u; // 803CC00C
  W8(c->r[5]+0x00000001u,c->r[4]); // 803CC010
  W8(c->r[5]+0x00000002u,c->r[4]); // 803CC014
  W8(c->r[5]+0x00000003u,c->r[4]); // 803CC018
  W8(c->r[5]+0x00000004u,c->r[4]); // 803CC01C
  W8(c->r[5]+0x00000005u,c->r[4]); // 803CC020
  W8(c->r[5]+0x00000006u,c->r[4]); // 803CC024
  W8(c->r[5]+0x00000007u,c->r[4]); // 803CC028
  W8(c->r[5]+0x00000008u,c->r[4]); // 803CC02C
  W8(c->r[5]+0x00000009u,c->r[4]); // 803CC030
  W8(c->r[5]+0x0000000Au,c->r[4]); // 803CC034
  W8(c->r[5]+0x0000000Bu,c->r[4]); // 803CC038
  W8(c->r[5]+0x0000000Cu,c->r[4]); // 803CC03C
  W8(c->r[5]+0x0000000Du,c->r[4]); // 803CC040
  W8(c->r[5]+0x0000000Eu,c->r[4]); // 803CC044
  W8(c->r[5]+0x0000000Fu,c->r[4]); // 803CC048
  W8(c->r[5]+0x00000010u,c->r[4]); // 803CC04C
  W8(c->r[5]+0x00000011u,c->r[4]); // 803CC050
  W8(c->r[5]+0x00000012u,c->r[4]); // 803CC054
  W8(c->r[5]+0x00000013u,c->r[4]); // 803CC058
  W8(c->r[5]+0x00000014u,c->r[4]); // 803CC05C
  W8(c->r[5]+0x00000015u,c->r[4]); // 803CC060
  W8(c->r[5]+0x00000016u,c->r[4]); // 803CC064
  W8(c->r[5]+0x00000017u,c->r[4]); // 803CC068
  W8(c->r[5]+0x00000018u,c->r[4]); // 803CC06C
  W8(c->r[5]+0x00000019u,c->r[4]); // 803CC070
  W8(c->r[5]+0x0000001Au,c->r[4]); // 803CC074
  W8(c->r[5]+0x0000001Bu,c->r[4]); // 803CC078
  W8(c->r[5]+0x0000001Cu,c->r[4]); // 803CC07C
  W8(c->r[5]+0x0000001Du,c->r[4]); // 803CC080
  W8(c->r[5]+0x0000001Eu,c->r[4]); // 803CC084
  W8(c->r[5]+0x0000001Fu,c->r[4]); // 803CC088
  c->r[5]=c->r[5]+0x00000020u; // 803CC08C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CC008; } // 803CC090
L_803CC094:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 803CC094
  c->r[6]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803CC098
  c->r[0]=c->r[4]-c->r[3]; // 803CC09C
  c->r[5]=0u+0x00000000u; // 803CC0A0
  c->r[6]=c->r[7]+c->r[6]; // 803CC0A4
  c->ctr=c->r[0]; // 803CC0A8
  cmpu(c,0,c->r[3],c->r[4]); // 803CC0AC
  if (!crb(c,0)) { goto L_803CC0CC; } // 803CC0B0
L_803CC0B4:;
  W8(c->r[6]+0x00000000u,c->r[5]); // 803CC0B4
  W8(c->r[6]+0x00000001u,c->r[5]); // 803CC0B8
  W8(c->r[6]+0x00000002u,c->r[5]); // 803CC0BC
  W8(c->r[6]+0x00000003u,c->r[5]); // 803CC0C0
  c->r[6]=c->r[6]+0x00000004u; // 803CC0C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CC0B4; } // 803CC0C8
L_803CC0CC:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CC0CC
  c->r[0]=(rotl(c->r[29],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 803CC0D0
  W32(c->r[15]+0x00000050u,c->r[0]); // 803CC0D4
L_803CC0D8:;
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 803CC0D8
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 803CC0DC
  c->r[11]=R32(c->r[15]+0x00000058u); // 803CC0E0
  cmps(c,1,(int32_t)c->r[4],0); // 803CC0E4
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 803CC0E8
  c->r[9]=rotl(c->r[10],28)&0x00000004u; // 803CC0EC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CC0F0
  c->r[7]=rotl(c->r[10],26)&0x00000004u; // 803CC0F4
  c->r[8]=rotl(c->r[10],20)&0x00000004u; // 803CC0F8
  c->r[6]=rotl(c->r[10],27)&0x00000004u; // 803CC0FC
  c->r[3]=rotl(c->r[10],14)&0x0000003Cu; // 803CC100
  c->r[0]=rotl(c->r[10],9)&0x000001E0u; // 803CC104
  c->r[0]=c->r[3]+c->r[0]; // 803CC108
  c->r[6]=c->r[8]+c->r[6]; // 803CC10C
  c->r[3]=c->r[9]+c->r[7]; // 803CC110
  c->r[7]=rotl(c->r[10],29)&0x00000004u; // 803CC114
  c->r[3]=c->r[6]+c->r[3]; // 803CC118
  c->r[0]=c->r[5]+c->r[0]; // 803CC11C
  c->r[3]=c->r[7]+c->r[3]; // 803CC120
  c->r[5]=c->r[16]+c->r[24]; // 803CC124
  c->r[0]=c->r[11]+c->r[0]; // 803CC128
  c->r[6]=0u+0x00000000u; // 803CC12C
  c->r[0]=c->r[3]+c->r[0]; // 803CC130
  if (!crb(c,5)) { goto L_803CC2E0; } // 803CC134
  cmps(c,0,(int32_t)c->r[4],8); // 803CC138
  c->r[8]=c->r[4]+0xFFFFFFF8u; // 803CC13C
  if (!crb(c,1)) { goto L_803CC294; } // 803CC140
  c->r[7]=0u+0x00000000u; // 803CC144
  if (crb(c,4)) { goto L_803CC160; } // 803CC148
  c->r[3]=0u+0x80000000u; // 803CC14C
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 803CC150
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 803CC154
  if (crb(c,1)) { goto L_803CC160; } // 803CC158
  c->r[7]=0u+0x00000001u; // 803CC15C
L_803CC160:;
  cmps(c,0,(int32_t)c->r[7],0); // 803CC160
  if (crb(c,2)) { goto L_803CC294; } // 803CC164
  c->r[7]=c->r[8]+0x00000007u; // 803CC168
  c->r[3]=c->r[5]|c->r[5]; // 803CC16C
  c->r[7]=rotl(c->r[7],29)&0x1FFFFFFFu; // 803CC170
  c->r[4]=c->r[0]|c->r[0]; // 803CC174
  c->ctr=c->r[7]; // 803CC178
  cmps(c,0,(int32_t)c->r[8],0); // 803CC17C
  if (!crb(c,1)) { goto L_803CC294; } // 803CC180
L_803CC184:;
  c->r[8]=R8(c->r[3]+0x00000000u); // 803CC184
  c->r[6]=c->r[6]+0x00000008u; // 803CC188
  c->r[7]=R8(c->r[3]+0x00000001u); // 803CC18C
  W8(c->r[4]+0x00000000u,c->r[8]); // 803CC190
  c->r[8]=R8(c->r[3]+0x00000002u); // 803CC194
  W8(c->r[4]+0x00000001u,c->r[7]); // 803CC198
  c->r[7]=R8(c->r[3]+0x00000003u); // 803CC19C
  W8(c->r[4]+0x00000002u,c->r[8]); // 803CC1A0
  c->r[8]=R8(c->r[3]+0x00000004u); // 803CC1A4
  W8(c->r[4]+0x00000003u,c->r[7]); // 803CC1A8
  c->r[7]=R8(c->r[3]+0x00000005u); // 803CC1AC
  W8(c->r[4]+0x00000004u,c->r[8]); // 803CC1B0
  c->r[8]=R8(c->r[3]+0x00000006u); // 803CC1B4
  W8(c->r[4]+0x00000005u,c->r[7]); // 803CC1B8
  c->r[7]=R8(c->r[3]+0x00000007u); // 803CC1BC
  W8(c->r[4]+0x00000006u,c->r[8]); // 803CC1C0
  c->r[8]=R8(c->r[3]+0x00000008u); // 803CC1C4
  W8(c->r[4]+0x00000007u,c->r[7]); // 803CC1C8
  c->r[7]=R8(c->r[3]+0x00000009u); // 803CC1CC
  W8(c->r[4]+0x00000008u,c->r[8]); // 803CC1D0
  c->r[8]=R8(c->r[3]+0x0000000Au); // 803CC1D4
  W8(c->r[4]+0x00000009u,c->r[7]); // 803CC1D8
  c->r[7]=R8(c->r[3]+0x0000000Bu); // 803CC1DC
  W8(c->r[4]+0x0000000Au,c->r[8]); // 803CC1E0
  c->r[8]=R8(c->r[3]+0x0000000Cu); // 803CC1E4
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 803CC1E8
  c->r[7]=R8(c->r[3]+0x0000000Du); // 803CC1EC
  W8(c->r[4]+0x0000000Cu,c->r[8]); // 803CC1F0
  c->r[8]=R8(c->r[3]+0x0000000Eu); // 803CC1F4
  W8(c->r[4]+0x0000000Du,c->r[7]); // 803CC1F8
  c->r[7]=R8(c->r[3]+0x0000000Fu); // 803CC1FC
  W8(c->r[4]+0x0000000Eu,c->r[8]); // 803CC200
  c->r[8]=R8(c->r[3]+0x00000010u); // 803CC204
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 803CC208
  c->r[7]=R8(c->r[3]+0x00000011u); // 803CC20C
  W8(c->r[4]+0x00000010u,c->r[8]); // 803CC210
  c->r[8]=R8(c->r[3]+0x00000012u); // 803CC214
  W8(c->r[4]+0x00000011u,c->r[7]); // 803CC218
  c->r[7]=R8(c->r[3]+0x00000013u); // 803CC21C
  W8(c->r[4]+0x00000012u,c->r[8]); // 803CC220
  c->r[8]=R8(c->r[3]+0x00000014u); // 803CC224
  W8(c->r[4]+0x00000013u,c->r[7]); // 803CC228
  c->r[7]=R8(c->r[3]+0x00000015u); // 803CC22C
  W8(c->r[4]+0x00000014u,c->r[8]); // 803CC230
  c->r[8]=R8(c->r[3]+0x00000016u); // 803CC234
  W8(c->r[4]+0x00000015u,c->r[7]); // 803CC238
  c->r[7]=R8(c->r[3]+0x00000017u); // 803CC23C
  W8(c->r[4]+0x00000016u,c->r[8]); // 803CC240
  c->r[8]=R8(c->r[3]+0x00000018u); // 803CC244
  W8(c->r[4]+0x00000017u,c->r[7]); // 803CC248
  c->r[7]=R8(c->r[3]+0x00000019u); // 803CC24C
  W8(c->r[4]+0x00000018u,c->r[8]); // 803CC250
  c->r[8]=R8(c->r[3]+0x0000001Au); // 803CC254
  W8(c->r[4]+0x00000019u,c->r[7]); // 803CC258
  c->r[7]=R8(c->r[3]+0x0000001Bu); // 803CC25C
  W8(c->r[4]+0x0000001Au,c->r[8]); // 803CC260
  c->r[8]=R8(c->r[3]+0x0000001Cu); // 803CC264
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 803CC268
  c->r[7]=R8(c->r[3]+0x0000001Du); // 803CC26C
  W8(c->r[4]+0x0000001Cu,c->r[8]); // 803CC270
  c->r[8]=R8(c->r[3]+0x0000001Eu); // 803CC274
  W8(c->r[4]+0x0000001Du,c->r[7]); // 803CC278
  c->r[7]=R8(c->r[3]+0x0000001Fu); // 803CC27C
  c->r[3]=c->r[3]+0x00000020u; // 803CC280
  W8(c->r[4]+0x0000001Eu,c->r[8]); // 803CC284
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 803CC288
  c->r[4]=c->r[4]+0x00000020u; // 803CC28C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CC184; } // 803CC290
L_803CC294:;
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 803CC294
  c->r[7]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803CC298
  c->r[3]=c->r[4]-c->r[6]; // 803CC29C
  c->r[5]=c->r[5]+c->r[7]; // 803CC2A0
  c->r[7]=c->r[0]+c->r[7]; // 803CC2A4
  c->ctr=c->r[3]; // 803CC2A8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 803CC2AC
  if (!crb(c,0)) { goto L_803CC2E0; } // 803CC2B0
L_803CC2B4:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 803CC2B4
  c->r[0]=R8(c->r[5]+0x00000001u); // 803CC2B8
  W8(c->r[7]+0x00000000u,c->r[3]); // 803CC2BC
  c->r[3]=R8(c->r[5]+0x00000002u); // 803CC2C0
  W8(c->r[7]+0x00000001u,c->r[0]); // 803CC2C4
  c->r[0]=R8(c->r[5]+0x00000003u); // 803CC2C8
  c->r[5]=c->r[5]+0x00000004u; // 803CC2CC
  W8(c->r[7]+0x00000002u,c->r[3]); // 803CC2D0
  W8(c->r[7]+0x00000003u,c->r[0]); // 803CC2D4
  c->r[7]=c->r[7]+0x00000004u; // 803CC2D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CC2B4; } // 803CC2DC
L_803CC2E0:;
  c->r[3]=R32(c->r[16]+0x0000003Cu); // 803CC2E0
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[0]); // 803CC2E4
  c->r[3]=rotl(c->r[3],19)&0x0000001Cu; // 803CC2E8
  c->r[24]=c->r[24]+c->r[3]; // 803CC2EC
  if (crb(c,2)) { goto L_803CC710; } // 803CC2F0
  if (crb(c,2)) { goto L_803CC4F8; } // 803CC2F4
  c->r[11]=R32(c->r[15]+0x0000004Cu); // 803CC2F8
  c->r[3]=R32(c->r[15]+0x00000050u); // 803CC2FC
  c->r[5]=rotl(c->r[11],14)&0x00000003u; // 803CC300
  c->r[4]=rotl(c->r[11],8)&0x0000000Fu; // 803CC304
  c->r[4]=c->r[5]+c->r[4]; // 803CC308
  c->r[3]=rotl(c->r[3],23)&0x0000001Fu; // 803CC30C
  c->r[10]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 803CC310
  c->r[6]=rotl(c->r[11],27)&0x00000004u; // 803CC314
  c->r[4]=rotl(c->r[11],20)&0x00000004u; // 803CC318
  c->r[12]=R32(c->r[15]+0x00000058u); // 803CC31C
  c->r[7]=rotl(c->r[11],26)&0x00000004u; // 803CC320
  c->r[4]=c->r[6]+c->r[4]; // 803CC324
  c->r[5]=rotl(c->r[11],28)&0x00000004u; // 803CC328
  c->r[6]=c->r[10]+c->r[7]; // 803CC32C
  c->r[9]=rotl(c->r[11],9)&0x000001E0u; // 803CC330
  c->r[8]=rotl(c->r[11],14)&0x0000003Cu; // 803CC334
  c->r[8]=c->r[9]+c->r[8]; // 803CC338
  c->r[5]=c->r[5]+c->r[4]; // 803CC33C
  c->r[4]=c->r[8]+c->r[6]; // 803CC340
  c->r[7]=rotl(c->r[11],29)&0x00000004u; // 803CC344
  cmpu(c,0,c->r[3],c->r[0]); // 803CC348
  c->r[6]=rotl(c->r[11],19)&0x0000001Cu; // 803CC34C
  c->r[5]=c->r[7]+c->r[5]; // 803CC350
  c->r[4]=c->r[12]+c->r[4]; // 803CC354
  c->r[5]=c->r[6]+c->r[5]; // 803CC358
  c->r[10]=c->r[5]+c->r[4]; // 803CC35C
  if (!crb(c,0)) { goto L_803CC4EC; } // 803CC360
  c->r[12]=0u+0x00000000u; // 803CC364
  c->r[17]=0u+0x000000FFu; // 803CC368
  c->r[9]=0u+0x000000AFu; // 803CC36C
  c->r[6]=0u+0x00000061u; // 803CC370
  c->r[8]=0u+0x00000077u; // 803CC374
  c->r[7]=0u+0x00000057u; // 803CC378
  c->r[4]=rotl(c->r[3],4)&0xFFFFFFF0u; // 803CC37C
  c->r[5]=0u+0x00000081u; // 803CC380
  W8(c->r[1]+0x00000024u,c->r[17]); // 803CC384
  c->r[3]=c->r[0]-c->r[3]; // 803CC388
  c->r[14]=0u+0x00000004u; // 803CC38C
  c->r[18]=c->r[10]+c->r[4]; // 803CC390
  W8(c->r[1]+0x00000025u,c->r[9]); // 803CC394
  W8(c->r[1]+0x00000026u,c->r[12]); // 803CC398
  W8(c->r[1]+0x00000027u,c->r[6]); // 803CC39C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CC3A0
  W8(c->r[1]+0x00000028u,c->r[8]); // 803CC3A4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803CC3A8
  W8(c->r[1]+0x00000029u,c->r[7]); // 803CC3AC
  c->r[11]=R8(c->r[1]+0x0000001Cu); // 803CC3B0
  W8(c->r[1]+0x0000002Au,c->r[12]); // 803CC3B4
  c->r[10]=R8(c->r[1]+0x0000001Du); // 803CC3B8
  W8(c->r[1]+0x0000002Bu,c->r[5]); // 803CC3BC
  c->r[9]=R8(c->r[1]+0x0000001Eu); // 803CC3C0
  c->r[0]=R32(c->r[1]+0x00000028u); // 803CC3C4
  W8(c->r[1]+0x00000020u,c->r[17]); // 803CC3C8
  c->r[8]=R8(c->r[1]+0x0000001Fu); // 803CC3CC
  W32(c->r[1]+0x00000018u,c->r[0]); // 803CC3D0
  W8(c->r[1]+0x00000021u,c->r[14]); // 803CC3D4
  c->r[7]=R8(c->r[1]+0x00000018u); // 803CC3D8
  W8(c->r[1]+0x00000022u,c->r[17]); // 803CC3DC
  c->r[6]=R8(c->r[1]+0x00000019u); // 803CC3E0
  W8(c->r[1]+0x00000023u,c->r[12]); // 803CC3E4
  c->r[5]=R8(c->r[1]+0x0000001Au); // 803CC3E8
  W8(c->r[1]+0x0000002Cu,c->r[12]); // 803CC3EC
  c->r[4]=R8(c->r[1]+0x0000001Bu); // 803CC3F0
  W8(c->r[1]+0x0000002Du,c->r[12]); // 803CC3F4
  W8(c->r[1]+0x0000002Eu,c->r[12]); // 803CC3F8
  W8(c->r[1]+0x0000002Fu,c->r[12]); // 803CC3FC
  if (!crb(c,0)) { goto L_803CC4EC; } // 803CC400
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 803CC404
  c->ctr=c->r[0]; // 803CC408
  if (crb(c,2)) { goto L_803CC4A0; } // 803CC40C
L_803CC410:;
  W8(c->r[18]+0x00000000u,c->r[17]); // 803CC410
  W8(c->r[18]+0x00000001u,c->r[14]); // 803CC414
  W8(c->r[18]+0x00000002u,c->r[17]); // 803CC418
  W8(c->r[18]+0x00000003u,c->r[12]); // 803CC41C
  W8(c->r[18]+0x00000004u,c->r[11]); // 803CC420
  W8(c->r[18]+0x00000005u,c->r[10]); // 803CC424
  W8(c->r[18]+0x00000006u,c->r[9]); // 803CC428
  W8(c->r[18]+0x00000007u,c->r[8]); // 803CC42C
  W8(c->r[18]+0x00000008u,c->r[7]); // 803CC430
  W8(c->r[18]+0x00000009u,c->r[6]); // 803CC434
  W8(c->r[18]+0x0000000Au,c->r[5]); // 803CC438
  W8(c->r[18]+0x0000000Bu,c->r[4]); // 803CC43C
  W8(c->r[18]+0x0000000Cu,c->r[12]); // 803CC440
  W8(c->r[18]+0x0000000Du,c->r[12]); // 803CC444
  W8(c->r[18]+0x0000000Eu,c->r[12]); // 803CC448
  W8(c->r[18]+0x0000000Fu,c->r[12]); // 803CC44C
  W8(c->r[18]+0x00000010u,c->r[17]); // 803CC450
  W8(c->r[18]+0x00000011u,c->r[14]); // 803CC454
  W8(c->r[18]+0x00000012u,c->r[17]); // 803CC458
  W8(c->r[18]+0x00000013u,c->r[12]); // 803CC45C
  W8(c->r[18]+0x00000014u,c->r[11]); // 803CC460
  W8(c->r[18]+0x00000015u,c->r[10]); // 803CC464
  W8(c->r[18]+0x00000016u,c->r[9]); // 803CC468
  W8(c->r[18]+0x00000017u,c->r[8]); // 803CC46C
  W8(c->r[18]+0x00000018u,c->r[7]); // 803CC470
  W8(c->r[18]+0x00000019u,c->r[6]); // 803CC474
  W8(c->r[18]+0x0000001Au,c->r[5]); // 803CC478
  W8(c->r[18]+0x0000001Bu,c->r[4]); // 803CC47C
  W8(c->r[18]+0x0000001Cu,c->r[12]); // 803CC480
  W8(c->r[18]+0x0000001Du,c->r[12]); // 803CC484
  W8(c->r[18]+0x0000001Eu,c->r[12]); // 803CC488
  W8(c->r[18]+0x0000001Fu,c->r[12]); // 803CC48C
  c->r[18]=c->r[18]+0x00000020u; // 803CC490
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CC410; } // 803CC494
  c->r[3]=c->r[3]&0x00000001u; cr0(c,c->r[3]); // 803CC498
  if (crb(c,2)) { goto L_803CC4EC; } // 803CC49C
L_803CC4A0:;
  c->ctr=c->r[3]; // 803CC4A0
L_803CC4A4:;
  W8(c->r[18]+0x00000000u,c->r[17]); // 803CC4A4
  W8(c->r[18]+0x00000001u,c->r[14]); // 803CC4A8
  W8(c->r[18]+0x00000002u,c->r[17]); // 803CC4AC
  W8(c->r[18]+0x00000003u,c->r[12]); // 803CC4B0
  W8(c->r[18]+0x00000004u,c->r[11]); // 803CC4B4
  W8(c->r[18]+0x00000005u,c->r[10]); // 803CC4B8
  W8(c->r[18]+0x00000006u,c->r[9]); // 803CC4BC
  W8(c->r[18]+0x00000007u,c->r[8]); // 803CC4C0
  W8(c->r[18]+0x00000008u,c->r[7]); // 803CC4C4
  W8(c->r[18]+0x00000009u,c->r[6]); // 803CC4C8
  W8(c->r[18]+0x0000000Au,c->r[5]); // 803CC4CC
  W8(c->r[18]+0x0000000Bu,c->r[4]); // 803CC4D0
  W8(c->r[18]+0x0000000Cu,c->r[12]); // 803CC4D4
  W8(c->r[18]+0x0000000Du,c->r[12]); // 803CC4D8
  W8(c->r[18]+0x0000000Eu,c->r[12]); // 803CC4DC
  W8(c->r[18]+0x0000000Fu,c->r[12]); // 803CC4E0
  c->r[18]=c->r[18]+0x00000010u; // 803CC4E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CC4A4; } // 803CC4E8
L_803CC4EC:;
  c->r[0]=R32(c->r[15]+0x00000050u); // 803CC4EC
  c->r[0]=(rotl(c->r[30],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 803CC4F0
  W32(c->r[15]+0x00000050u,c->r[0]); // 803CC4F4
L_803CC4F8:;
  c->r[10]=R32(c->r[15]+0x0000004Cu); // 803CC4F8
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[3]); // 803CC4FC
  c->r[11]=R32(c->r[15]+0x00000058u); // 803CC500
  c->r[4]=rotl(c->r[10],14)&0x00000003u; // 803CC504
  c->r[0]=rotl(c->r[10],8)&0x0000000Fu; // 803CC508
  c->r[0]=c->r[4]+c->r[0]; // 803CC50C
  c->r[6]=rotl(c->r[10],26)&0x00000004u; // 803CC510
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CC514
  c->r[4]=rotl(c->r[10],27)&0x00000004u; // 803CC518
  c->r[0]=rotl(c->r[10],20)&0x00000004u; // 803CC51C
  c->r[8]=rotl(c->r[10],9)&0x000001E0u; // 803CC520
  c->r[7]=rotl(c->r[10],14)&0x0000003Cu; // 803CC524
  c->r[0]=c->r[4]+c->r[0]; // 803CC528
  c->r[5]=rotl(c->r[10],28)&0x00000004u; // 803CC52C
  c->r[6]=c->r[9]+c->r[6]; // 803CC530
  c->r[0]=c->r[5]+c->r[0]; // 803CC534
  c->r[4]=rotl(c->r[10],29)&0x00000004u; // 803CC538
  c->r[7]=c->r[8]+c->r[7]; // 803CC53C
  c->r[5]=rotl(c->r[10],19)&0x0000001Cu; // 803CC540
  c->r[4]=c->r[4]+c->r[0]; // 803CC544
  c->r[0]=c->r[7]+c->r[6]; // 803CC548
  c->r[4]=c->r[5]+c->r[4]; // 803CC54C
  c->r[5]=c->r[16]+c->r[24]; // 803CC550
  c->r[0]=c->r[11]+c->r[0]; // 803CC554
  c->r[6]=c->r[4]+c->r[0]; // 803CC558
  if (!crb(c,1)) { goto L_803CC710; } // 803CC55C
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 803CC560
  c->ctr=c->r[0]; // 803CC564
  if (crb(c,2)) { goto L_803CC680; } // 803CC568
L_803CC56C:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 803CC56C
  c->r[0]=R8(c->r[5]+0x00000001u); // 803CC570
  W8(c->r[6]+0x00000000u,c->r[4]); // 803CC574
  c->r[4]=R8(c->r[5]+0x00000002u); // 803CC578
  W8(c->r[6]+0x00000001u,c->r[0]); // 803CC57C
  c->r[0]=R8(c->r[5]+0x00000003u); // 803CC580
  W8(c->r[6]+0x00000002u,c->r[4]); // 803CC584
  c->r[4]=R8(c->r[5]+0x00000004u); // 803CC588
  W8(c->r[6]+0x00000003u,c->r[0]); // 803CC58C
  c->r[0]=R8(c->r[5]+0x00000005u); // 803CC590
  W8(c->r[6]+0x00000004u,c->r[4]); // 803CC594
  c->r[4]=R8(c->r[5]+0x00000006u); // 803CC598
  W8(c->r[6]+0x00000005u,c->r[0]); // 803CC59C
  c->r[0]=R8(c->r[5]+0x00000007u); // 803CC5A0
  W8(c->r[6]+0x00000006u,c->r[4]); // 803CC5A4
  c->r[4]=R8(c->r[5]+0x00000008u); // 803CC5A8
  W8(c->r[6]+0x00000007u,c->r[0]); // 803CC5AC
  c->r[0]=R8(c->r[5]+0x00000009u); // 803CC5B0
  W8(c->r[6]+0x00000008u,c->r[4]); // 803CC5B4
  c->r[4]=R8(c->r[5]+0x0000000Au); // 803CC5B8
  W8(c->r[6]+0x00000009u,c->r[0]); // 803CC5BC
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 803CC5C0
  W8(c->r[6]+0x0000000Au,c->r[4]); // 803CC5C4
  c->r[4]=R8(c->r[5]+0x0000000Cu); // 803CC5C8
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 803CC5CC
  c->r[0]=R8(c->r[5]+0x0000000Du); // 803CC5D0
  W8(c->r[6]+0x0000000Cu,c->r[4]); // 803CC5D4
  c->r[4]=R8(c->r[5]+0x0000000Eu); // 803CC5D8
  W8(c->r[6]+0x0000000Du,c->r[0]); // 803CC5DC
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 803CC5E0
  W8(c->r[6]+0x0000000Eu,c->r[4]); // 803CC5E4
  c->r[4]=R8(c->r[5]+0x00000010u); // 803CC5E8
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 803CC5EC
  c->r[0]=R8(c->r[5]+0x00000011u); // 803CC5F0
  W8(c->r[6]+0x00000010u,c->r[4]); // 803CC5F4
  c->r[4]=R8(c->r[5]+0x00000012u); // 803CC5F8
  W8(c->r[6]+0x00000011u,c->r[0]); // 803CC5FC
  c->r[0]=R8(c->r[5]+0x00000013u); // 803CC600
  W8(c->r[6]+0x00000012u,c->r[4]); // 803CC604
  c->r[4]=R8(c->r[5]+0x00000014u); // 803CC608
  W8(c->r[6]+0x00000013u,c->r[0]); // 803CC60C
  c->r[0]=R8(c->r[5]+0x00000015u); // 803CC610
  W8(c->r[6]+0x00000014u,c->r[4]); // 803CC614
  c->r[4]=R8(c->r[5]+0x00000016u); // 803CC618
  W8(c->r[6]+0x00000015u,c->r[0]); // 803CC61C
  c->r[0]=R8(c->r[5]+0x00000017u); // 803CC620
  W8(c->r[6]+0x00000016u,c->r[4]); // 803CC624
  c->r[4]=R8(c->r[5]+0x00000018u); // 803CC628
  W8(c->r[6]+0x00000017u,c->r[0]); // 803CC62C
  c->r[0]=R8(c->r[5]+0x00000019u); // 803CC630
  W8(c->r[6]+0x00000018u,c->r[4]); // 803CC634
  c->r[4]=R8(c->r[5]+0x0000001Au); // 803CC638
  W8(c->r[6]+0x00000019u,c->r[0]); // 803CC63C
  c->r[0]=R8(c->r[5]+0x0000001Bu); // 803CC640
  W8(c->r[6]+0x0000001Au,c->r[4]); // 803CC644
  c->r[4]=R8(c->r[5]+0x0000001Cu); // 803CC648
  W8(c->r[6]+0x0000001Bu,c->r[0]); // 803CC64C
  c->r[0]=R8(c->r[5]+0x0000001Du); // 803CC650
  W8(c->r[6]+0x0000001Cu,c->r[4]); // 803CC654
  c->r[4]=R8(c->r[5]+0x0000001Eu); // 803CC658
  W8(c->r[6]+0x0000001Du,c->r[0]); // 803CC65C
  c->r[0]=R8(c->r[5]+0x0000001Fu); // 803CC660
  c->r[5]=c->r[5]+0x00000020u; // 803CC664
  W8(c->r[6]+0x0000001Eu,c->r[4]); // 803CC668
  W8(c->r[6]+0x0000001Fu,c->r[0]); // 803CC66C
  c->r[6]=c->r[6]+0x00000020u; // 803CC670
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CC56C; } // 803CC674
  c->r[3]=c->r[3]&0x00000001u; cr0(c,c->r[3]); // 803CC678
  if (crb(c,2)) { goto L_803CC710; } // 803CC67C
L_803CC680:;
  c->ctr=c->r[3]; // 803CC680
L_803CC684:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 803CC684
  c->r[0]=R8(c->r[5]+0x00000001u); // 803CC688
  W8(c->r[6]+0x00000000u,c->r[4]); // 803CC68C
  c->r[4]=R8(c->r[5]+0x00000002u); // 803CC690
  W8(c->r[6]+0x00000001u,c->r[0]); // 803CC694
  c->r[0]=R8(c->r[5]+0x00000003u); // 803CC698
  W8(c->r[6]+0x00000002u,c->r[4]); // 803CC69C
  c->r[4]=R8(c->r[5]+0x00000004u); // 803CC6A0
  W8(c->r[6]+0x00000003u,c->r[0]); // 803CC6A4
  c->r[0]=R8(c->r[5]+0x00000005u); // 803CC6A8
  W8(c->r[6]+0x00000004u,c->r[4]); // 803CC6AC
  c->r[4]=R8(c->r[5]+0x00000006u); // 803CC6B0
  W8(c->r[6]+0x00000005u,c->r[0]); // 803CC6B4
  c->r[0]=R8(c->r[5]+0x00000007u); // 803CC6B8
  W8(c->r[6]+0x00000006u,c->r[4]); // 803CC6BC
  c->r[4]=R8(c->r[5]+0x00000008u); // 803CC6C0
  W8(c->r[6]+0x00000007u,c->r[0]); // 803CC6C4
  c->r[0]=R8(c->r[5]+0x00000009u); // 803CC6C8
  W8(c->r[6]+0x00000008u,c->r[4]); // 803CC6CC
  c->r[4]=R8(c->r[5]+0x0000000Au); // 803CC6D0
  W8(c->r[6]+0x00000009u,c->r[0]); // 803CC6D4
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 803CC6D8
  W8(c->r[6]+0x0000000Au,c->r[4]); // 803CC6DC
  c->r[4]=R8(c->r[5]+0x0000000Cu); // 803CC6E0
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 803CC6E4
  c->r[0]=R8(c->r[5]+0x0000000Du); // 803CC6E8
  W8(c->r[6]+0x0000000Cu,c->r[4]); // 803CC6EC
  c->r[4]=R8(c->r[5]+0x0000000Eu); // 803CC6F0
  W8(c->r[6]+0x0000000Du,c->r[0]); // 803CC6F4
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 803CC6F8
  c->r[5]=c->r[5]+0x00000010u; // 803CC6FC
  W8(c->r[6]+0x0000000Eu,c->r[4]); // 803CC700
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 803CC704
  c->r[6]=c->r[6]+0x00000010u; // 803CC708
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CC684; } // 803CC70C
L_803CC710:;
  c->r[0]=R8(c->r[1]+0x00000033u); // 803CC710
  c->r[3]=R32(c->r[16]+0x0000003Cu); // 803CC714
  cmps(c,0,(int32_t)c->r[0],0); // 803CC718
  c->r[0]=rotl(c->r[3],18)&0x000001F0u; // 803CC71C
  c->r[24]=c->r[24]+c->r[0]; // 803CC720
  if (crb(c,2)) { goto L_803CC788; } // 803CC724
  c->r[6]=R32(c->r[15]+0x0000004Cu); // 803CC728
  c->r[10]=c->r[16]+c->r[24]; // 803CC72C
  c->r[9]=R32(c->r[15]+0x00000058u); // 803CC730
  c->r[3]=rotl(c->r[6],8)&0x0000000Fu; // 803CC734
  c->r[5]=rotl(c->r[6],20)&0x00000004u; // 803CC738
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 803CC73C
  c->r[0]=rotl(c->r[6],27)&0x00000004u; // 803CC740
  c->r[4]=rotl(c->r[6],26)&0x00000004u; // 803CC744
  c->r[3]=R8(c->r[10]+0x00000002u); // 803CC748
  c->r[0]=c->r[5]+c->r[0]; // 803CC74C
  c->r[5]=R8(c->r[16]+c->r[24]); // 803CC750
  c->r[7]=rotl(c->r[6],14)&0x0000003Cu; // 803CC754
  c->r[6]=rotl(c->r[6],9)&0x000001E0u; // 803CC758
  c->r[7]=c->r[7]+c->r[6]; // 803CC75C
  c->r[0]=c->r[4]+c->r[0]; // 803CC760
  c->r[6]=c->r[9]+c->r[0]; // 803CC764
  c->r[4]=R8(c->r[10]+0x00000001u); // 803CC768
  c->r[7]=c->r[8]+c->r[7]; // 803CC76C
  c->r[0]=R8(c->r[10]+0x00000003u); // 803CC770
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 803CC774
  c->r[24]=c->r[24]+0x00000004u; // 803CC778
  W8(c->r[6]+0x00000001u,c->r[4]); // 803CC77C
  W8(c->r[6]+0x00000002u,c->r[3]); // 803CC780
  W8(c->r[6]+0x00000003u,c->r[0]); // 803CC784
L_803CC788:;
  c->r[0]=R8(c->r[1]+0x00000032u); // 803CC788
  cmps(c,0,(int32_t)c->r[0],0); // 803CC78C
  if (crb(c,2)) { goto L_803CC7F8; } // 803CC790
  c->r[4]=R32(c->r[15]+0x0000004Cu); // 803CC794
  c->r[10]=c->r[16]+c->r[24]; // 803CC798
  c->r[9]=R32(c->r[15]+0x00000058u); // 803CC79C
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 803CC7A0
  c->r[8]=rotl(c->r[4],28)&0x00000004u; // 803CC7A4
  c->r[0]=rotl(c->r[4],26)&0x00000004u; // 803CC7A8
  c->r[7]=rotl(c->r[4],20)&0x00000004u; // 803CC7AC
  c->r[5]=rotl(c->r[4],27)&0x00000004u; // 803CC7B0
  c->r[6]=rotl(c->r[4],14)&0x0000003Cu; // 803CC7B4
  c->r[0]=c->r[8]+c->r[0]; // 803CC7B8
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 803CC7BC
  c->r[7]=c->r[7]+c->r[5]; // 803CC7C0
  c->r[5]=R8(c->r[16]+c->r[24]); // 803CC7C4
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 803CC7C8
  c->r[3]=R8(c->r[10]+0x00000002u); // 803CC7CC
  c->r[0]=c->r[7]+c->r[0]; // 803CC7D0
  c->r[7]=c->r[6]+c->r[4]; // 803CC7D4
  c->r[4]=R8(c->r[10]+0x00000001u); // 803CC7D8
  c->r[6]=c->r[9]+c->r[0]; // 803CC7DC
  c->r[7]=c->r[8]+c->r[7]; // 803CC7E0
  c->r[0]=R8(c->r[10]+0x00000003u); // 803CC7E4
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 803CC7E8
  W8(c->r[6]+0x00000001u,c->r[4]); // 803CC7EC
  W8(c->r[6]+0x00000002u,c->r[3]); // 803CC7F0
  W8(c->r[6]+0x00000003u,c->r[0]); // 803CC7F4
L_803CC7F8:;
  c->r[11]=c->r[1]+0x00000080u; // 803CC7F8
  c->r[3]=c->r[15]|c->r[15]; // 803CC7FC
  c->lr=0x803CC804u; f_80289E0C(c); // 803CC800
  c->r[0]=R32(c->r[1]+0x00000084u); // 803CC804
  c->lr=c->r[0]; // 803CC808
  c->r[1]=c->r[1]+0x00000080u; // 803CC80C
  return; // 803CC810
}

// __dt__Q36nw4hbm3lyt8MaterialFv
void f_803CC814(Ctx* __restrict c) {
  trace_call(0x803CC814u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CC814
  c->r[0]=c->lr; // 803CC818
  cmps(c,0,(int32_t)c->r[3],0); // 803CC81C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CC820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CC824
  c->r[31]=c->r[4]|c->r[4]; // 803CC828
  W32(c->r[1]+0x00000008u,c->r[30]); // 803CC82C
  c->r[30]=c->r[3]|c->r[3]; // 803CC830
  if (crb(c,2)) { goto L_803CC8A8; } // 803CC834
  c->r[12]=0u+0x80440000u; // 803CC838
  c->r[12]=c->r[12]+0xFFFF8FF0u; // 803CC83C
  W32(c->r[3]+0x00000000u,c->r[12]); // 803CC840
  c->r[12]=R32(c->r[12]+0x00000018u); // 803CC844
  c->ctr=c->r[12]; // 803CC848
  if (true) { c->lr=0x803CC850u; dispatch(c,c->ctr); } // 803CC84C
  c->r[4]=R32(c->r[30]+0x00000058u); // 803CC850
  cmps(c,0,(int32_t)c->r[4],0); // 803CC854
  if (crb(c,2)) { goto L_803CC870; } // 803CC858
  c->r[3]=0u+0x806C0000u; // 803CC85C
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CC860
  c->lr=0x803CC868u; f_802A704C(c); // 803CC864
  c->r[0]=0u+0x00000000u; // 803CC868
  W32(c->r[30]+0x00000058u,c->r[0]); // 803CC86C
L_803CC870:;
  c->r[4]=0u+0x803D0000u; // 803CC870
  c->r[3]=c->r[30]+0x0000003Cu; // 803CC874
  c->r[4]=c->r[4]+0xFFFF9398u; // 803CC878
  c->r[5]=0u+0x00000004u; // 803CC87C
  c->r[6]=0u+0x00000004u; // 803CC880
  c->lr=0x803CC888u; f_80289C2C(c); // 803CC884
  c->r[3]=addc(c,c->r[30],0x00000018u,0); cr0(c,c->r[3]); // 803CC888
  if (crb(c,2)) { goto L_803CC898; } // 803CC88C
  c->r[4]=0u+0x00000000u; // 803CC890
  c->lr=0x803CC898u; f_803D56BC(c); // 803CC894
L_803CC898:;
  cmps(c,0,(int32_t)c->r[31],0); // 803CC898
  if (!crb(c,1)) { goto L_803CC8A8; } // 803CC89C
  c->r[3]=c->r[30]|c->r[30]; // 803CC8A0
  c->lr=0x803CC8A8u; f_802896EC(c); // 803CC8A4
L_803CC8A8:;
  c->r[3]=c->r[30]|c->r[30]; // 803CC8A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CC8AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803CC8B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CC8B4
  c->lr=c->r[0]; // 803CC8B8
  c->r[1]=c->r[1]+0x00000010u; // 803CC8BC
  return; // 803CC8C0
}

// ReserveGXMem__Q36nw4hbm3lyt8MaterialFUcUcUcUcbUcUcbbbb
void f_803CC8C4(Ctx* __restrict c) {
  trace_call(0x803CC8C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CC8C4
  c->r[0]=c->lr; // 803CC8C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 803CC8CC
  c->r[11]=c->r[1]+0x00000060u; // 803CC8D0
  c->lr=0x803CC8D8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CC8D4
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803CC8D8
  c->r[20]=c->r[3]|c->r[3]; // 803CC8DC
  c->r[28]=R8(c->r[1]+0x0000006Bu); // 803CC8E0
  c->r[21]=c->r[4]|c->r[4]; // 803CC8E4
  c->r[11]=rotl(c->r[0],4)&0x0000000Fu; // 803CC8E8
  c->r[29]=R8(c->r[1]+0x0000006Fu); // 803CC8EC
  cmpu(c,0,c->r[11],c->r[4]); // 803CC8F0
  c->r[30]=R8(c->r[1]+0x00000073u); // 803CC8F4
  c->r[31]=R8(c->r[1]+0x00000077u); // 803CC8F8
  c->r[22]=c->r[5]|c->r[5]; // 803CC8FC
  c->r[23]=c->r[6]|c->r[6]; // 803CC900
  c->r[24]=c->r[7]|c->r[7]; // 803CC904
  c->r[25]=c->r[8]|c->r[8]; // 803CC908
  c->r[26]=c->r[9]|c->r[9]; // 803CC90C
  c->r[27]=c->r[10]|c->r[10]; // 803CC910
  if (crb(c,0)) { goto L_803CC990; } // 803CC914
  c->r[4]=rotl(c->r[0],8)&0x0000000Fu; // 803CC918
  cmpu(c,0,c->r[4],c->r[5]); // 803CC91C
  if (crb(c,0)) { goto L_803CC990; } // 803CC920
  c->r[4]=rotl(c->r[0],12)&0x0000000Fu; // 803CC924
  cmpu(c,0,c->r[4],c->r[6]); // 803CC928
  if (crb(c,0)) { goto L_803CC990; } // 803CC92C
  c->r[4]=rotl(c->r[0],23)&0x0000001Fu; // 803CC930
  cmpu(c,0,c->r[4],c->r[7]); // 803CC934
  if (crb(c,0)) { goto L_803CC990; } // 803CC938
  c->r[4]=rotl(c->r[0],18)&0x00000001u; // 803CC93C
  cmpu(c,0,c->r[4],c->r[8]); // 803CC940
  if (crb(c,0)) { goto L_803CC990; } // 803CC944
  c->r[4]=rotl(c->r[0],17)&0x00000007u; // 803CC948
  cmpu(c,0,c->r[4],c->r[9]); // 803CC94C
  if (crb(c,0)) { goto L_803CC990; } // 803CC950
  c->r[4]=rotl(c->r[0],14)&0x00000003u; // 803CC954
  cmpu(c,0,c->r[4],c->r[10]); // 803CC958
  if (crb(c,0)) { goto L_803CC990; } // 803CC95C
  c->r[4]=rotl(c->r[0],24)&0x00000001u; // 803CC960
  cmpu(c,0,c->r[4],c->r[28]); // 803CC964
  if (crb(c,0)) { goto L_803CC990; } // 803CC968
  c->r[4]=rotl(c->r[0],25)&0x00000001u; // 803CC96C
  cmpu(c,0,c->r[4],c->r[29]); // 803CC970
  if (crb(c,0)) { goto L_803CC990; } // 803CC974
  c->r[4]=rotl(c->r[0],26)&0x00000001u; // 803CC978
  cmpu(c,0,c->r[4],c->r[30]); // 803CC97C
  if (crb(c,0)) { goto L_803CC990; } // 803CC980
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 803CC984
  cmpu(c,0,c->r[0],c->r[31]); // 803CC988
  if (!crb(c,0)) { goto L_803CD024; } // 803CC98C
L_803CC990:;
  c->r[4]=R32(c->r[3]+0x00000058u); // 803CC990
  cmps(c,0,(int32_t)c->r[4],0); // 803CC994
  if (crb(c,2)) { goto L_803CC9C8; } // 803CC998
  c->r[3]=0u+0x806C0000u; // 803CC99C
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CC9A0
  c->lr=0x803CC9A8u; f_802A704C(c); // 803CC9A4
  c->r[3]=R32(c->r[20]+0x0000004Cu); // 803CC9A8
  c->r[4]=0u+0x00000000u; // 803CC9AC
  c->r[0]=R32(c->r[20]+0x00000050u); // 803CC9B0
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 803CC9B4
  W32(c->r[20]+0x00000058u,c->r[4]); // 803CC9B8
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 803CC9BC
  W32(c->r[20]+0x0000004Cu,c->r[3]); // 803CC9C0
  W32(c->r[20]+0x00000050u,c->r[0]); // 803CC9C4
L_803CC9C8:;
  c->r[5]=c->r[27]+c->r[22]; // 803CC9C8
  c->r[0]=c->r[25]+c->r[28]; // 803CC9CC
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 803CC9D0
  c->r[4]=c->r[31]+c->r[29]; // 803CC9D4
  c->r[3]=c->r[26]+c->r[23]; // 803CC9D8
  c->r[0]=c->r[30]+c->r[0]; // 803CC9DC
  c->r[3]=c->r[4]+c->r[3]; // 803CC9E0
  c->r[7]=0u+0x806C0000u; // 803CC9E4
  c->r[0]=c->r[3]+c->r[0]; // 803CC9E8
  c->r[5]=rotl(c->r[21],5)&0x00001FE0u; // 803CC9EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803CC9F0
  c->r[4]=rotl(c->r[24],4)&0x00000FF0u; // 803CC9F4
  c->r[0]=c->r[6]+c->r[0]; // 803CC9F8
  c->r[3]=R32(c->r[7]+0x000025A8u); // 803CC9FC
  c->r[0]=c->r[5]+c->r[0]; // 803CCA00
  c->r[4]=c->r[4]+c->r[0]; // 803CCA04
  c->lr=0x803CCA0Cu; f_802A703C(c); // 803CCA08
  cmps(c,0,(int32_t)c->r[3],0); // 803CCA0C
  W32(c->r[20]+0x00000058u,c->r[3]); // 803CCA10
  if (crb(c,2)) { goto L_803CD024; } // 803CCA14
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 803CCA18
  c->r[0]=(rotl(c->r[21],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 803CCA1C
  c->r[0]=(rotl(c->r[22],24)&0x0F000000u)|(c->r[0]&~0x0F000000u); // 803CCA20
  c->r[4]=R32(c->r[20]+0x00000050u); // 803CCA24
  c->r[0]=(rotl(c->r[23],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 803CCA28
  c->r[7]=0u+0x00000000u; // 803CCA2C
  c->r[0]=(rotl(c->r[27],18)&0x000C0000u)|(c->r[0]&~0x000C0000u); // 803CCA30
  c->r[0]=(rotl(c->r[26],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 803CCA34
  c->r[0]=(rotl(c->r[25],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 803CCA38
  c->r[0]=(rotl(c->r[24],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 803CCA3C
  c->r[0]=(rotl(c->r[28],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 803CCA40
  c->r[0]=(rotl(c->r[29],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 803CCA44
  c->r[0]=(rotl(c->r[30],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 803CCA48
  c->r[0]=(rotl(c->r[31],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 803CCA4C
  c->r[4]=(rotl(c->r[0],0)&0x0F000000u)|(c->r[4]&~0x0F000000u); // 803CCA50
  W32(c->r[20]+0x0000004Cu,c->r[0]); // 803CCA54
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 803CCA58
  c->r[6]=rotl(c->r[4],8)&0x0000000Fu; cr0(c,c->r[6]); // 803CCA5C
  W32(c->r[20]+0x00000050u,c->r[4]); // 803CCA60
  c->r[8]=c->r[3]+c->r[0]; // 803CCA64
  if (crb(c,2)) { goto L_803CCC20; } // 803CCA68
  cmpu(c,0,c->r[6],0x00000008u); // 803CCA6C
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 803CCA70
  if (!crb(c,1)) { goto L_803CCBCC; } // 803CCA74
  c->r[0]=c->r[5]+0x00000007u; // 803CCA78
  c->r[4]=0u+0x803F0000u; // 803CCA7C
  c->r[3]=0u+0x803F0000u; // 803CCA80
  c->r[9]=c->r[8]|c->r[8]; // 803CCA84
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803CCA88
  {uint32_t ea=c->r[4]+0x00000E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CCA8C
  {uint32_t ea=c->r[3]+0x00000E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CCA90
  c->ctr=c->r[0]; // 803CCA94
  cmpu(c,0,c->r[5],0x00000000u); // 803CCA98
  if (!crb(c,1)) { goto L_803CCBCC; } // 803CCA9C
L_803CCAA0:;
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[1]);} // 803CCAA0
  c->r[7]=c->r[7]+0x00000008u; // 803CCAA4
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[1]);} // 803CCAA8
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[1]);} // 803CCAAC
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CCAB0
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 803CCAB4
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 803CCAB8
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[1]);} // 803CCABC
  {uint32_t ea=c->r[9]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCAC0
  {uint32_t ea=c->r[9]+0x00000020u; WF32(ea,c->f[0]);} // 803CCAC4
  {uint32_t ea=c->r[9]+0x00000024u; WF32(ea,c->f[0]);} // 803CCAC8
  {uint32_t ea=c->r[9]+0x00000028u; WF32(ea,c->f[1]);} // 803CCACC
  {uint32_t ea=c->r[9]+0x0000002Cu; WF32(ea,c->f[1]);} // 803CCAD0
  {uint32_t ea=c->r[9]+0x00000030u; WF32(ea,c->f[1]);} // 803CCAD4
  {uint32_t ea=c->r[9]+0x00000034u; WF32(ea,c->f[0]);} // 803CCAD8
  {uint32_t ea=c->r[9]+0x00000038u; WF32(ea,c->f[0]);} // 803CCADC
  {uint32_t ea=c->r[9]+0x0000003Cu; WF32(ea,c->f[1]);} // 803CCAE0
  {uint32_t ea=c->r[9]+0x00000040u; WF32(ea,c->f[1]);} // 803CCAE4
  {uint32_t ea=c->r[9]+0x00000044u; WF32(ea,c->f[1]);} // 803CCAE8
  {uint32_t ea=c->r[9]+0x00000048u; WF32(ea,c->f[0]);} // 803CCAEC
  {uint32_t ea=c->r[9]+0x0000004Cu; WF32(ea,c->f[0]);} // 803CCAF0
  {uint32_t ea=c->r[9]+0x00000050u; WF32(ea,c->f[1]);} // 803CCAF4
  {uint32_t ea=c->r[9]+0x00000054u; WF32(ea,c->f[1]);} // 803CCAF8
  {uint32_t ea=c->r[9]+0x00000058u; WF32(ea,c->f[1]);} // 803CCAFC
  {uint32_t ea=c->r[9]+0x0000005Cu; WF32(ea,c->f[0]);} // 803CCB00
  {uint32_t ea=c->r[9]+0x00000060u; WF32(ea,c->f[0]);} // 803CCB04
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[1]);} // 803CCB08
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[1]);} // 803CCB0C
  {uint32_t ea=c->r[9]+0x0000006Cu; WF32(ea,c->f[1]);} // 803CCB10
  {uint32_t ea=c->r[9]+0x00000070u; WF32(ea,c->f[0]);} // 803CCB14
  {uint32_t ea=c->r[9]+0x00000074u; WF32(ea,c->f[0]);} // 803CCB18
  {uint32_t ea=c->r[9]+0x00000078u; WF32(ea,c->f[1]);} // 803CCB1C
  {uint32_t ea=c->r[9]+0x0000007Cu; WF32(ea,c->f[1]);} // 803CCB20
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCB24
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCB28
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCB2C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCB30
  {uint32_t ea=c->r[9]+0x00000080u; WF32(ea,c->f[1]);} // 803CCB34
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCB38
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCB3C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCB40
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCB44
  {uint32_t ea=c->r[9]+0x00000084u; WF32(ea,c->f[0]);} // 803CCB48
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCB4C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCB50
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCB54
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCB58
  {uint32_t ea=c->r[9]+0x00000088u; WF32(ea,c->f[0]);} // 803CCB5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCB60
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCB64
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCB68
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCB6C
  {uint32_t ea=c->r[9]+0x0000008Cu; WF32(ea,c->f[1]);} // 803CCB70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCB74
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCB78
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCB7C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCB80
  {uint32_t ea=c->r[9]+0x00000090u; WF32(ea,c->f[1]);} // 803CCB84
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCB88
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCB8C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCB90
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCB94
  {uint32_t ea=c->r[9]+0x00000094u; WF32(ea,c->f[1]);} // 803CCB98
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCB9C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCBA0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCBA4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCBA8
  {uint32_t ea=c->r[9]+0x00000098u; WF32(ea,c->f[0]);} // 803CCBAC
  {uint32_t ea=c->r[9]+0x0000009Cu; WF32(ea,c->f[0]);} // 803CCBB0
  c->r[9]=c->r[9]+0x000000A0u; // 803CCBB4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCBB8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCBBC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCBC0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCBC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CCAA0; } // 803CCBC8
L_803CCBCC:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)20); // 803CCBCC
  c->r[4]=0u+0x803F0000u; // 803CCBD0
  c->r[3]=0u+0x803F0000u; // 803CCBD4
  {uint32_t ea=c->r[4]+0x00000E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CCBD8
  c->r[0]=c->r[6]-c->r[7]; // 803CCBDC
  {uint32_t ea=c->r[3]+0x00000E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CCBE0
  c->r[3]=c->r[8]+c->r[5]; // 803CCBE4
  c->ctr=c->r[0]; // 803CCBE8
  cmpu(c,0,c->r[7],c->r[6]); // 803CCBEC
  if (!crb(c,0)) { goto L_803CCC20; } // 803CCBF0
L_803CCBF4:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 803CCBF4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803CCBF8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803CCBFC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CCC00
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 803CCC04
  c->r[3]=c->r[3]+0x00000014u; // 803CCC08
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CCC0C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCC10
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803CCC14
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803CCC18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CCBF4; } // 803CCC1C
L_803CCC20:;
  c->r[11]=R32(c->r[20]+0x0000004Cu); // 803CCC20
  c->r[4]=0u+0x00000000u; // 803CCC24
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 803CCC28
  c->r[0]=rotl(c->r[11],8)&0x0000000Fu; // 803CCC2C
  c->r[3]=R32(c->r[20]+0x00000050u); // 803CCC30
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CCC34
  c->r[3]=(rotl(c->r[5],0)&0x000C0000u)|(c->r[3]&~0x000C0000u); // 803CCC38
  c->r[10]=rotl(c->r[11],28)&0x00000004u; // 803CCC3C
  W32(c->r[20]+0x00000050u,c->r[3]); // 803CCC40
  c->r[6]=rotl(c->r[11],26)&0x00000004u; // 803CCC44
  c->r[21]=R32(c->r[20]+0x00000058u); // 803CCC48
  c->r[9]=rotl(c->r[11],20)&0x00000004u; // 803CCC4C
  c->r[8]=rotl(c->r[11],27)&0x00000004u; // 803CCC50
  c->r[5]=rotl(c->r[11],14)&0x0000003Cu; // 803CCC54
  c->r[0]=rotl(c->r[11],9)&0x000001E0u; // 803CCC58
  c->r[12]=rotl(c->r[11],19)&0x0000001Cu; // 803CCC5C
  c->r[11]=rotl(c->r[11],29)&0x00000004u; // 803CCC60
  c->r[5]=c->r[5]+c->r[0]; // 803CCC64
  c->r[8]=c->r[9]+c->r[8]; // 803CCC68
  c->r[6]=c->r[10]+c->r[6]; // 803CCC6C
  c->r[0]=c->r[12]+c->r[11]; // 803CCC70
  c->r[3]=rotl(c->r[3],14)&0x00000003u; cr0(c,c->r[3]); // 803CCC74
  c->r[5]=c->r[7]+c->r[5]; // 803CCC78
  c->r[6]=c->r[8]+c->r[6]; // 803CCC7C
  c->r[0]=c->r[21]+c->r[0]; // 803CCC80
  c->r[5]=c->r[6]+c->r[5]; // 803CCC84
  c->r[8]=c->r[5]+c->r[0]; // 803CCC88
  if (crb(c,2)) { goto L_803CCE44; } // 803CCC8C
  cmpu(c,0,c->r[3],0x00000008u); // 803CCC90
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 803CCC94
  if (!crb(c,1)) { goto L_803CCDF0; } // 803CCC98
  c->r[0]=c->r[7]+0x00000007u; // 803CCC9C
  c->r[6]=0u+0x803F0000u; // 803CCCA0
  c->r[5]=0u+0x803F0000u; // 803CCCA4
  c->r[9]=c->r[8]|c->r[8]; // 803CCCA8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803CCCAC
  {uint32_t ea=c->r[6]+0x00000E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CCCB0
  {uint32_t ea=c->r[5]+0x00000E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CCCB4
  c->ctr=c->r[0]; // 803CCCB8
  cmpu(c,0,c->r[7],0x00000000u); // 803CCCBC
  if (!crb(c,1)) { goto L_803CCDF0; } // 803CCCC0
L_803CCCC4:;
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[1]);} // 803CCCC4
  c->r[4]=c->r[4]+0x00000008u; // 803CCCC8
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[1]);} // 803CCCCC
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[1]);} // 803CCCD0
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CCCD4
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 803CCCD8
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 803CCCDC
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[1]);} // 803CCCE0
  {uint32_t ea=c->r[9]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CCCE4
  {uint32_t ea=c->r[9]+0x00000020u; WF32(ea,c->f[0]);} // 803CCCE8
  {uint32_t ea=c->r[9]+0x00000024u; WF32(ea,c->f[0]);} // 803CCCEC
  {uint32_t ea=c->r[9]+0x00000028u; WF32(ea,c->f[1]);} // 803CCCF0
  {uint32_t ea=c->r[9]+0x0000002Cu; WF32(ea,c->f[1]);} // 803CCCF4
  {uint32_t ea=c->r[9]+0x00000030u; WF32(ea,c->f[1]);} // 803CCCF8
  {uint32_t ea=c->r[9]+0x00000034u; WF32(ea,c->f[0]);} // 803CCCFC
  {uint32_t ea=c->r[9]+0x00000038u; WF32(ea,c->f[0]);} // 803CCD00
  {uint32_t ea=c->r[9]+0x0000003Cu; WF32(ea,c->f[1]);} // 803CCD04
  {uint32_t ea=c->r[9]+0x00000040u; WF32(ea,c->f[1]);} // 803CCD08
  {uint32_t ea=c->r[9]+0x00000044u; WF32(ea,c->f[1]);} // 803CCD0C
  {uint32_t ea=c->r[9]+0x00000048u; WF32(ea,c->f[0]);} // 803CCD10
  {uint32_t ea=c->r[9]+0x0000004Cu; WF32(ea,c->f[0]);} // 803CCD14
  {uint32_t ea=c->r[9]+0x00000050u; WF32(ea,c->f[1]);} // 803CCD18
  {uint32_t ea=c->r[9]+0x00000054u; WF32(ea,c->f[1]);} // 803CCD1C
  {uint32_t ea=c->r[9]+0x00000058u; WF32(ea,c->f[1]);} // 803CCD20
  {uint32_t ea=c->r[9]+0x0000005Cu; WF32(ea,c->f[0]);} // 803CCD24
  {uint32_t ea=c->r[9]+0x00000060u; WF32(ea,c->f[0]);} // 803CCD28
  {uint32_t ea=c->r[9]+0x00000064u; WF32(ea,c->f[1]);} // 803CCD2C
  {uint32_t ea=c->r[9]+0x00000068u; WF32(ea,c->f[1]);} // 803CCD30
  {uint32_t ea=c->r[9]+0x0000006Cu; WF32(ea,c->f[1]);} // 803CCD34
  {uint32_t ea=c->r[9]+0x00000070u; WF32(ea,c->f[0]);} // 803CCD38
  {uint32_t ea=c->r[9]+0x00000074u; WF32(ea,c->f[0]);} // 803CCD3C
  {uint32_t ea=c->r[9]+0x00000078u; WF32(ea,c->f[1]);} // 803CCD40
  {uint32_t ea=c->r[9]+0x0000007Cu; WF32(ea,c->f[1]);} // 803CCD44
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCD48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCD4C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCD50
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCD54
  {uint32_t ea=c->r[9]+0x00000080u; WF32(ea,c->f[1]);} // 803CCD58
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCD5C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCD60
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCD64
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCD68
  {uint32_t ea=c->r[9]+0x00000084u; WF32(ea,c->f[0]);} // 803CCD6C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCD70
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCD74
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCD78
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCD7C
  {uint32_t ea=c->r[9]+0x00000088u; WF32(ea,c->f[0]);} // 803CCD80
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCD84
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCD88
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCD8C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCD90
  {uint32_t ea=c->r[9]+0x0000008Cu; WF32(ea,c->f[1]);} // 803CCD94
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCD98
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCD9C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCDA0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCDA4
  {uint32_t ea=c->r[9]+0x00000090u; WF32(ea,c->f[1]);} // 803CCDA8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCDAC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCDB0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCDB4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCDB8
  {uint32_t ea=c->r[9]+0x00000094u; WF32(ea,c->f[1]);} // 803CCDBC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCDC0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCDC4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCDC8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCDCC
  {uint32_t ea=c->r[9]+0x00000098u; WF32(ea,c->f[0]);} // 803CCDD0
  {uint32_t ea=c->r[9]+0x0000009Cu; WF32(ea,c->f[0]);} // 803CCDD4
  c->r[9]=c->r[9]+0x000000A0u; // 803CCDD8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCDDC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCDE0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCDE4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCDE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CCCC4; } // 803CCDEC
L_803CCDF0:;
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 803CCDF0
  c->r[6]=0u+0x803F0000u; // 803CCDF4
  c->r[5]=0u+0x803F0000u; // 803CCDF8
  {uint32_t ea=c->r[6]+0x00000E68u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CCDFC
  c->r[0]=c->r[3]-c->r[4]; // 803CCE00
  {uint32_t ea=c->r[5]+0x00000E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CCE04
  c->r[5]=c->r[8]+c->r[7]; // 803CCE08
  c->ctr=c->r[0]; // 803CCE0C
  cmpu(c,0,c->r[4],c->r[3]); // 803CCE10
  if (!crb(c,0)) { goto L_803CCE44; } // 803CCE14
L_803CCE18:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 803CCE18
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 803CCE1C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 803CCE20
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CCE24
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 803CCE28
  c->r[5]=c->r[5]+0x00000014u; // 803CCE2C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803CCE30
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803CCE34
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803CCE38
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803CCE3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CCE18; } // 803CCE40
L_803CCE44:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 803CCE44
  c->r[3]=R32(c->r[20]+0x00000050u); // 803CCE48
  c->r[3]=(rotl(c->r[0],0)&0x00000100u)|(c->r[3]&~0x00000100u); // 803CCE4C
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 803CCE50
  W32(c->r[20]+0x00000050u,c->r[3]); // 803CCE54
  if (crb(c,2)) { goto L_803CCE94; } // 803CCE58
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 803CCE5C
  c->r[3]=0u+0x00000001u; // 803CCE60
  c->r[7]=R32(c->r[20]+0x00000058u); // 803CCE64
  c->r[0]=0u+0x00000000u; // 803CCE68
  c->r[4]=rotl(c->r[5],8)&0x0000000Fu; // 803CCE6C
  c->r[6]=rotl(c->r[5],14)&0x0000003Cu; // 803CCE70
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 803CCE74
  c->r[5]=rotl(c->r[5],9)&0x000001E0u; // 803CCE78
  c->r[5]=c->r[6]+c->r[5]; // 803CCE7C
  c->r[4]=c->r[7]+c->r[4]; // 803CCE80
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 803CCE84
  W8(c->r[4]+0x00000001u,c->r[3]); // 803CCE88
  W8(c->r[4]+0x00000002u,c->r[0]); // 803CCE8C
  W8(c->r[4]+0x00000003u,c->r[0]); // 803CCE90
L_803CCE94:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 803CCE94
  c->r[3]=R32(c->r[20]+0x00000050u); // 803CCE98
  c->r[3]=(rotl(c->r[0],0)&0x00000080u)|(c->r[3]&~0x00000080u); // 803CCE9C
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 803CCEA0
  W32(c->r[20]+0x00000050u,c->r[3]); // 803CCEA4
  if (crb(c,2)) { goto L_803CCEDC; } // 803CCEA8
  c->r[5]=R32(c->r[20]+0x0000004Cu); // 803CCEAC
  c->r[7]=0u+0xFFFFFFFFu; // 803CCEB0
  c->r[6]=R32(c->r[20]+0x00000058u); // 803CCEB4
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 803CCEB8
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 803CCEBC
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CCEC0
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 803CCEC4
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 803CCEC8
  c->r[0]=c->r[4]+c->r[0]; // 803CCECC
  c->r[3]=c->r[5]+c->r[3]; // 803CCED0
  c->r[0]=c->r[6]+c->r[0]; // 803CCED4
  W32(c->r[3]+c->r[0],c->r[7]); // 803CCED8
L_803CCEDC:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 803CCEDC
  c->r[3]=R32(c->r[20]+0x00000050u); // 803CCEE0
  c->r[3]=(rotl(c->r[0],0)&0x00004000u)|(c->r[3]&~0x00004000u); // 803CCEE4
  c->r[0]=rotl(c->r[3],18)&0x00000001u; cr0(c,c->r[0]); // 803CCEE8
  W32(c->r[20]+0x00000050u,c->r[3]); // 803CCEEC
  if (crb(c,2)) { goto L_803CCF44; } // 803CCEF0
  c->r[9]=R32(c->r[20]+0x0000004Cu); // 803CCEF4
  c->r[5]=0u+0x000000E4u; // 803CCEF8
  c->r[10]=R32(c->r[20]+0x00000058u); // 803CCEFC
  c->r[4]=0u+0x000000C0u; // 803CCF00
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 803CCF04
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 803CCF08
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CCF0C
  c->r[8]=rotl(c->r[9],27)&0x00000004u; // 803CCF10
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 803CCF14
  c->r[7]=rotl(c->r[9],26)&0x00000004u; // 803CCF18
  c->r[3]=c->r[3]+c->r[0]; // 803CCF1C
  c->r[0]=c->r[8]+c->r[7]; // 803CCF20
  c->r[7]=c->r[6]+c->r[3]; // 803CCF24
  c->r[3]=0u+0x000000D5u; // 803CCF28
  c->r[6]=c->r[10]+c->r[0]; // 803CCF2C
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 803CCF30
  c->r[0]=0u+0x000000EAu; // 803CCF34
  W8(c->r[6]+0x00000001u,c->r[4]); // 803CCF38
  W8(c->r[6]+0x00000002u,c->r[3]); // 803CCF3C
  W8(c->r[6]+0x00000003u,c->r[0]); // 803CCF40
L_803CCF44:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 803CCF44
  c->r[3]=R32(c->r[20]+0x00000050u); // 803CCF48
  c->r[3]=(rotl(c->r[0],0)&0x00000040u)|(c->r[3]&~0x00000040u); // 803CCF4C
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 803CCF50
  W32(c->r[20]+0x00000050u,c->r[3]); // 803CCF54
  if (crb(c,2)) { goto L_803CCFAC; } // 803CCF58
  c->r[9]=R32(c->r[20]+0x0000004Cu); // 803CCF5C
  c->r[3]=0u+0x00000077u; // 803CCF60
  c->r[10]=R32(c->r[20]+0x00000058u); // 803CCF64
  c->r[0]=0u+0x00000000u; // 803CCF68
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 803CCF6C
  c->r[4]=rotl(c->r[9],27)&0x00000004u; // 803CCF70
  c->r[4]=c->r[7]+c->r[4]; // 803CCF74
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 803CCF78
  c->r[4]=c->r[6]+c->r[4]; // 803CCF7C
  c->r[5]=rotl(c->r[9],8)&0x0000000Fu; // 803CCF80
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 803CCF84
  c->r[8]=rotl(c->r[9],14)&0x0000003Cu; // 803CCF88
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 803CCF8C
  c->r[4]=c->r[10]+c->r[4]; // 803CCF90
  c->r[5]=c->r[8]+c->r[7]; // 803CCF94
  c->r[5]=c->r[6]+c->r[5]; // 803CCF98
  {uint32_t ea=c->r[4]+c->r[5]; W8(ea,c->r[3]); c->r[4]=ea;} // 803CCF9C
  W8(c->r[4]+0x00000001u,c->r[0]); // 803CCFA0
  W8(c->r[4]+0x00000002u,c->r[0]); // 803CCFA4
  W8(c->r[4]+0x00000003u,c->r[0]); // 803CCFA8
L_803CCFAC:;
  c->r[0]=R32(c->r[20]+0x0000004Cu); // 803CCFAC
  c->r[3]=R32(c->r[20]+0x00000050u); // 803CCFB0
  c->r[3]=(rotl(c->r[0],0)&0x00000020u)|(c->r[3]&~0x00000020u); // 803CCFB4
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 803CCFB8
  W32(c->r[20]+0x00000050u,c->r[3]); // 803CCFBC
  if (crb(c,2)) { goto L_803CD024; } // 803CCFC0
  c->r[7]=R32(c->r[20]+0x0000004Cu); // 803CCFC4
  c->r[5]=0u+0x00000001u; // 803CCFC8
  c->r[11]=R32(c->r[20]+0x00000058u); // 803CCFCC
  c->r[4]=0u+0x00000004u; // 803CCFD0
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 803CCFD4
  c->r[6]=rotl(c->r[7],28)&0x00000004u; // 803CCFD8
  c->r[3]=rotl(c->r[7],26)&0x00000004u; // 803CCFDC
  c->r[10]=rotl(c->r[7],20)&0x00000004u; // 803CCFE0
  c->r[9]=rotl(c->r[7],27)&0x00000004u; // 803CCFE4
  c->r[8]=rotl(c->r[7],14)&0x0000003Cu; // 803CCFE8
  c->r[7]=rotl(c->r[7],9)&0x000001E0u; // 803CCFEC
  c->r[6]=c->r[6]+c->r[3]; // 803CCFF0
  c->r[7]=c->r[8]+c->r[7]; // 803CCFF4
  c->r[9]=c->r[10]+c->r[9]; // 803CCFF8
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CCFFC
  c->r[3]=0u+0x00000005u; // 803CD000
  c->r[6]=c->r[9]+c->r[6]; // 803CD004
  c->r[0]=0u+0x0000000Fu; // 803CD008
  c->r[7]=c->r[8]+c->r[7]; // 803CD00C
  c->r[6]=c->r[11]+c->r[6]; // 803CD010
  {uint32_t ea=c->r[6]+c->r[7]; W8(ea,c->r[5]); c->r[6]=ea;} // 803CD014
  W8(c->r[6]+0x00000001u,c->r[4]); // 803CD018
  W8(c->r[6]+0x00000002u,c->r[3]); // 803CD01C
  W8(c->r[6]+0x00000003u,c->r[0]); // 803CD020
L_803CD024:;
  c->r[11]=c->r[1]+0x00000060u; // 803CD024
  c->lr=0x803CD02Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CD028
  c->r[0]=R32(c->r[1]+0x00000064u); // 803CD02C
  c->lr=c->r[0]; // 803CD030
  c->r[1]=c->r[1]+0x00000060u; // 803CD034
  return; // 803CD038
}

// GetTexSRTAry__Q36nw4hbm3lyt8MaterialFv
void f_803CD03C(Ctx* __restrict c) {
  trace_call(0x803CD03Cu);
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 803CD03C
  c->r[3]=R32(c->r[3]+0x00000058u); // 803CD040
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 803CD044
  c->r[3]=c->r[3]+c->r[0]; // 803CD048
  return; // 803CD04C
}

// GetTexCoordGenAry__Q36nw4hbm3lyt8MaterialFv
void f_803CD050(Ctx* __restrict c) {
  trace_call(0x803CD050u);
  c->r[4]=R32(c->r[3]+0x0000004Cu); // 803CD050
  c->r[5]=R32(c->r[3]+0x00000058u); // 803CD054
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 803CD058
  c->r[3]=rotl(c->r[4],9)&0x000001E0u; // 803CD05C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CD060
  c->r[0]=c->r[5]+c->r[0]; // 803CD064
  c->r[3]=c->r[3]+c->r[0]; // 803CD068
  return; // 803CD06C
}

// GetIndTexSRTAry__Q36nw4hbm3lyt8MaterialFv
void f_803CD070(Ctx* __restrict c) {
  trace_call(0x803CD070u);
  c->r[9]=R32(c->r[3]+0x0000004Cu); // 803CD070
  c->r[11]=R32(c->r[3]+0x00000058u); // 803CD074
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 803CD078
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 803CD07C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CD080
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 803CD084
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 803CD088
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 803CD08C
  c->r[4]=rotl(c->r[9],14)&0x0000003Cu; // 803CD090
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 803CD094
  c->r[0]=c->r[4]+c->r[0]; // 803CD098
  c->r[10]=rotl(c->r[9],19)&0x0000001Cu; // 803CD09C
  c->r[9]=rotl(c->r[9],29)&0x00000004u; // 803CD0A0
  c->r[5]=c->r[7]+c->r[5]; // 803CD0A4
  c->r[4]=c->r[8]+c->r[6]; // 803CD0A8
  c->r[3]=c->r[3]+c->r[0]; // 803CD0AC
  c->r[4]=c->r[5]+c->r[4]; // 803CD0B0
  c->r[0]=c->r[10]+c->r[9]; // 803CD0B4
  c->r[3]=c->r[4]+c->r[3]; // 803CD0B8
  c->r[0]=c->r[11]+c->r[0]; // 803CD0BC
  c->r[3]=c->r[3]+c->r[0]; // 803CD0C0
  return; // 803CD0C4
}

// SetTextureNum__Q36nw4hbm3lyt8MaterialFUc
void f_803CD0C8(Ctx* __restrict c) {
  trace_call(0x803CD0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CD0C8
  c->r[0]=c->lr; // 803CD0CC
  cmps(c,0,(int32_t)c->r[4],0); // 803CD0D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CD0D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CD0D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CD0DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CD0E0
  c->r[29]=c->r[4]|c->r[4]; // 803CD0E4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CD0E8
  c->r[28]=c->r[3]|c->r[3]; // 803CD0EC
  if (crb(c,2)) { goto L_803CD138; } // 803CD0F0
  c->r[4]=R32(c->r[3]+0x00000050u); // 803CD0F4
  c->r[3]=R32(c->r[3]+0x00000058u); // 803CD0F8
  c->r[0]=rotl(c->r[4],9)&0x000001E0u; // 803CD0FC
  c->r[30]=rotl(c->r[4],4)&0x0000000Fu; // 803CD100
  c->r[31]=c->r[3]+c->r[0]; // 803CD104
  goto L_803CD124; // 803CD108
L_803CD10C:;
  c->r[3]=c->r[31]|c->r[31]; // 803CD10C
  c->r[4]=0u+0x00000000u; // 803CD110
  c->r[5]=0u+0x00000020u; // 803CD114
  c->lr=0x803CD11Cu; f_800043EC(c); // 803CD118
  c->r[31]=c->r[31]+0x00000020u; // 803CD11C
  c->r[30]=c->r[30]+0x00000001u; // 803CD120
L_803CD124:;
  cmpu(c,0,c->r[30],c->r[29]); // 803CD124
  if (crb(c,0)) { IRQCHK(c); goto L_803CD10C; } // 803CD128
  c->r[0]=R32(c->r[28]+0x00000050u); // 803CD12C
  c->r[0]=(rotl(c->r[29],28)&0xF0000000u)|(c->r[0]&~0xF0000000u); // 803CD130
  W32(c->r[28]+0x00000050u,c->r[0]); // 803CD134
L_803CD138:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CD138
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CD13C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CD140
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CD144
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CD148
  c->lr=c->r[0]; // 803CD14C
  c->r[1]=c->r[1]+0x00000020u; // 803CD150
  return; // 803CD154
}

// SetTexCoordGenNum__Q36nw4hbm3lyt8MaterialFUc
void f_803CD158(Ctx* __restrict c) {
  trace_call(0x803CD158u);
  cmps(c,0,(int32_t)c->r[4],0); // 803CD158
  if (crb(c,2)) return; // 803CD15C
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 803CD160
  c->r[0]=R32(c->r[3]+0x00000050u); // 803CD164
  c->r[5]=rotl(c->r[7],8)&0x0000000Fu; // 803CD168
  c->r[8]=R32(c->r[3]+0x00000058u); // 803CD16C
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 803CD170
  c->r[12]=rotl(c->r[0],12)&0x0000000Fu; // 803CD174
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 803CD178
  cmpu(c,1,c->r[12],c->r[4]); // 803CD17C
  c->r[0]=c->r[8]+c->r[6]; // 803CD180
  c->r[11]=c->r[5]+c->r[0]; // 803CD184
  if (!crb(c,4)) { goto L_803CD29C; } // 803CD188
  c->r[0]=c->r[4]-c->r[12]; // 803CD18C
  c->r[9]=c->r[4]+0xFFFFFFF8u; // 803CD190
  cmpu(c,0,c->r[0],0x00000008u); // 803CD194
  if (!crb(c,1)) { goto L_803CD25C; } // 803CD198
  if (crb(c,5)) { goto L_803CD25C; } // 803CD19C
  c->r[0]=c->r[9]+0x00000007u; // 803CD1A0
  c->r[5]=rotl(c->r[12],2)&0xFFFFFFFCu; // 803CD1A4
  c->r[0]=c->r[0]-c->r[12]; // 803CD1A8
  c->r[8]=0u+0x00000001u; // 803CD1AC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803CD1B0
  c->r[10]=c->r[11]+c->r[5]; // 803CD1B4
  c->r[7]=0u+0x00000004u; // 803CD1B8
  c->r[6]=0u+0x0000003Cu; // 803CD1BC
  c->r[5]=0u+0x00000000u; // 803CD1C0
  c->ctr=c->r[0]; // 803CD1C4
  cmpu(c,0,c->r[12],c->r[9]); // 803CD1C8
  if (!crb(c,0)) { goto L_803CD25C; } // 803CD1CC
L_803CD1D0:;
  W8(c->r[10]+0x00000000u,c->r[8]); // 803CD1D0
  c->r[12]=c->r[12]+0x00000008u; // 803CD1D4
  W8(c->r[10]+0x00000001u,c->r[7]); // 803CD1D8
  W8(c->r[10]+0x00000002u,c->r[6]); // 803CD1DC
  W8(c->r[10]+0x00000003u,c->r[5]); // 803CD1E0
  W8(c->r[10]+0x00000004u,c->r[8]); // 803CD1E4
  W8(c->r[10]+0x00000005u,c->r[7]); // 803CD1E8
  W8(c->r[10]+0x00000006u,c->r[6]); // 803CD1EC
  W8(c->r[10]+0x00000007u,c->r[5]); // 803CD1F0
  W8(c->r[10]+0x00000008u,c->r[8]); // 803CD1F4
  W8(c->r[10]+0x00000009u,c->r[7]); // 803CD1F8
  W8(c->r[10]+0x0000000Au,c->r[6]); // 803CD1FC
  W8(c->r[10]+0x0000000Bu,c->r[5]); // 803CD200
  W8(c->r[10]+0x0000000Cu,c->r[8]); // 803CD204
  W8(c->r[10]+0x0000000Du,c->r[7]); // 803CD208
  W8(c->r[10]+0x0000000Eu,c->r[6]); // 803CD20C
  W8(c->r[10]+0x0000000Fu,c->r[5]); // 803CD210
  W8(c->r[10]+0x00000010u,c->r[8]); // 803CD214
  W8(c->r[10]+0x00000011u,c->r[7]); // 803CD218
  W8(c->r[10]+0x00000012u,c->r[6]); // 803CD21C
  W8(c->r[10]+0x00000013u,c->r[5]); // 803CD220
  W8(c->r[10]+0x00000014u,c->r[8]); // 803CD224
  W8(c->r[10]+0x00000015u,c->r[7]); // 803CD228
  W8(c->r[10]+0x00000016u,c->r[6]); // 803CD22C
  W8(c->r[10]+0x00000017u,c->r[5]); // 803CD230
  W8(c->r[10]+0x00000018u,c->r[8]); // 803CD234
  W8(c->r[10]+0x00000019u,c->r[7]); // 803CD238
  W8(c->r[10]+0x0000001Au,c->r[6]); // 803CD23C
  W8(c->r[10]+0x0000001Bu,c->r[5]); // 803CD240
  W8(c->r[10]+0x0000001Cu,c->r[8]); // 803CD244
  W8(c->r[10]+0x0000001Du,c->r[7]); // 803CD248
  W8(c->r[10]+0x0000001Eu,c->r[6]); // 803CD24C
  W8(c->r[10]+0x0000001Fu,c->r[5]); // 803CD250
  c->r[10]=c->r[10]+0x00000020u; // 803CD254
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CD1D0; } // 803CD258
L_803CD25C:;
  c->r[5]=rotl(c->r[12],2)&0xFFFFFFFCu; // 803CD25C
  c->r[0]=c->r[4]-c->r[12]; // 803CD260
  c->r[9]=c->r[11]+c->r[5]; // 803CD264
  c->r[8]=0u+0x00000001u; // 803CD268
  c->r[7]=0u+0x00000004u; // 803CD26C
  c->r[6]=0u+0x0000003Cu; // 803CD270
  c->r[5]=0u+0x00000000u; // 803CD274
  c->ctr=c->r[0]; // 803CD278
  cmpu(c,0,c->r[12],c->r[4]); // 803CD27C
  if (!crb(c,0)) { goto L_803CD29C; } // 803CD280
L_803CD284:;
  W8(c->r[9]+0x00000000u,c->r[8]); // 803CD284
  W8(c->r[9]+0x00000001u,c->r[7]); // 803CD288
  W8(c->r[9]+0x00000002u,c->r[6]); // 803CD28C
  W8(c->r[9]+0x00000003u,c->r[5]); // 803CD290
  c->r[9]=c->r[9]+0x00000004u; // 803CD294
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803CD284; } // 803CD298
L_803CD29C:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 803CD29C
  c->r[0]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 803CD2A0
  W32(c->r[3]+0x00000050u,c->r[0]); // 803CD2A4
  return; // 803CD2A8
}

// SetTextureNoWrap__Q36nw4hbm3lyt8MaterialFUcP10TPLPalette
void f_803CD2AC(Ctx* __restrict c) {
  trace_call(0x803CD2ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CD2AC
  c->r[0]=c->lr; // 803CD2B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CD2B4
  c->r[0]=rotl(c->r[4],5)&0x00001FE0u; // 803CD2B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CD2BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CD2C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CD2C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CD2C8
  c->r[28]=c->r[5]|c->r[5]; // 803CD2CC
  c->r[3]=R32(c->r[3]+0x00000058u); // 803CD2D0
  c->r[31]=c->r[3]+c->r[0]; // 803CD2D4
  c->r[3]=c->r[31]|c->r[31]; // 803CD2D8
  c->lr=0x803CD2E0u; f_80286890(c); // 803CD2DC
  c->r[30]=c->r[3]|c->r[3]; // 803CD2E0
  c->r[3]=c->r[31]|c->r[31]; // 803CD2E4
  c->lr=0x803CD2ECu; f_8028689C(c); // 803CD2E8
  c->r[29]=c->r[3]|c->r[3]; // 803CD2EC
  c->r[3]=c->r[31]|c->r[31]; // 803CD2F0
  c->r[4]=c->r[28]|c->r[28]; // 803CD2F4
  c->r[5]=0u+0x00000000u; // 803CD2F8
  c->lr=0x803CD300u; f_803CA0CC(c); // 803CD2FC
  c->r[3]=c->r[31]|c->r[31]; // 803CD300
  c->r[4]=c->r[30]|c->r[30]; // 803CD304
  c->r[5]=c->r[29]|c->r[29]; // 803CD308
  c->lr=0x803CD310u; f_80286794(c); // 803CD30C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CD310
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CD314
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CD318
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CD31C
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CD320
  c->lr=c->r[0]; // 803CD324
  c->r[1]=c->r[1]+0x00000020u; // 803CD328
  return; // 803CD32C
}

// SetTexture__Q36nw4hbm3lyt8MaterialFUcRC9_GXTexObj
void f_803CD330(Ctx* __restrict c) {
  trace_call(0x803CD330u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 803CD330
  c->r[0]=rotl(c->r[4],5)&0x00001FE0u; // 803CD334
  c->r[6]=R32(c->r[5]+0x00000000u); // 803CD338
  c->r[4]=0u+0x00000000u; // 803CD33C
  c->r[3]=c->r[3]+c->r[0]; // 803CD340
  c->r[0]=R32(c->r[5]+0x00000004u); // 803CD344
  W32(c->r[3]+0x00000000u,c->r[6]); // 803CD348
  c->r[6]=R32(c->r[5]+0x00000008u); // 803CD34C
  W32(c->r[3]+0x00000004u,c->r[0]); // 803CD350
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803CD354
  W32(c->r[3]+0x00000008u,c->r[6]); // 803CD358
  c->r[6]=R32(c->r[5]+0x00000010u); // 803CD35C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803CD360
  c->r[0]=R32(c->r[5]+0x00000014u); // 803CD364
  W32(c->r[3]+0x00000010u,c->r[6]); // 803CD368
  c->r[6]=R32(c->r[5]+0x00000018u); // 803CD36C
  W32(c->r[3]+0x00000014u,c->r[0]); // 803CD370
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 803CD374
  W32(c->r[3]+0x00000018u,c->r[6]); // 803CD378
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 803CD37C
  f_80286850(c); return; // 803CD380
}

// SetColorElement__Q36nw4hbm3lyt8MaterialFUls
void f_803CD384(Ctx* __restrict c) {
  trace_call(0x803CD384u);
  cmps(c,0,(int32_t)c->r[4],16); // 803CD384
  if (!crb(c,0)) { goto L_803CD3A0; } // 803CD388
  cmps(c,0,(int32_t)c->r[4],4); // 803CD38C
  if (!crb(c,0)) { goto L_803CD454; } // 803CD390
  cmps(c,0,(int32_t)c->r[4],0); // 803CD394
  if (!crb(c,0)) { goto L_803CD3AC; } // 803CD398
  return; // 803CD39C
L_803CD3A0:;
  cmps(c,0,(int32_t)c->r[4],32); // 803CD3A0
  if (!crb(c,0)) return; // 803CD3A4
  goto L_803CD4C8; // 803CD3A8
L_803CD3AC:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 803CD3AC
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 803CD3B0
  cmpu(c,0,c->r[0],0x00000001u); // 803CD3B4
  if (crb(c,0)) return; // 803CD3B8
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 803CD3BC
  c->r[0]=sraw(c,c->r[5],31); // 803CD3C0
  c->r[9]=c->r[5]&~c->r[0]; // 803CD3C4
  c->r[8]=R32(c->r[3]+0x00000058u); // 803CD3C8
  c->r[0]=rotl(c->r[7],8)&0x0000000Fu; // 803CD3CC
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 803CD3D0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CD3D4
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 803CD3D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[9]; // 803CD3DC
  c->r[7]=rotl(c->r[7],26)&0x00000004u; // 803CD3E0
  c->r[6]=c->r[6]+c->r[5]; // 803CD3E4
  cmps(c,0,(int32_t)c->r[0],255); // 803CD3E8
  c->r[5]=c->r[7]+c->r[3]; // 803CD3EC
  c->r[3]=0u+0x000000FFu; // 803CD3F0
  c->r[0]=c->r[8]+c->r[6]; // 803CD3F4
  c->r[5]=c->r[5]+c->r[0]; // 803CD3F8
  if (crb(c,1)) { goto L_803CD404; } // 803CD3FC
  c->r[3]=c->r[9]|c->r[9]; // 803CD400
L_803CD404:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803CD404
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 803CD408
  cmps(c,0,(int32_t)c->r[0],2); // 803CD40C
  if (crb(c,2)) { goto L_803CD444; } // 803CD410
  if (!crb(c,0)) { goto L_803CD428; } // 803CD414
  cmps(c,0,(int32_t)c->r[0],0); // 803CD418
  if (crb(c,2)) { goto L_803CD434; } // 803CD41C
  if (!crb(c,0)) { goto L_803CD43C; } // 803CD420
  return; // 803CD424
L_803CD428:;
  cmps(c,0,(int32_t)c->r[0],4); // 803CD428
  if (!crb(c,0)) return; // 803CD42C
  goto L_803CD44C; // 803CD430
L_803CD434:;
  W8(c->r[5]+0x00000000u,c->r[3]); // 803CD434
  return; // 803CD438
L_803CD43C:;
  W8(c->r[5]+0x00000001u,c->r[3]); // 803CD43C
  return; // 803CD440
L_803CD444:;
  W8(c->r[5]+0x00000002u,c->r[3]); // 803CD444
  return; // 803CD448
L_803CD44C:;
  W8(c->r[5]+0x00000003u,c->r[3]); // 803CD44C
  return; // 803CD450
L_803CD454:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 803CD454
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803CD458
  cmps(c,0,(int32_t)c->r[0],2); // 803CD45C
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 803CD460
  if (crb(c,2)) { goto L_803CD4A8; } // 803CD464
  if (!crb(c,0)) { goto L_803CD47C; } // 803CD468
  cmps(c,0,(int32_t)c->r[0],0); // 803CD46C
  if (crb(c,2)) { goto L_803CD488; } // 803CD470
  if (!crb(c,0)) { goto L_803CD498; } // 803CD474
  return; // 803CD478
L_803CD47C:;
  cmps(c,0,(int32_t)c->r[0],4); // 803CD47C
  if (!crb(c,0)) return; // 803CD480
  goto L_803CD4B8; // 803CD484
L_803CD488:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803CD488
  c->r[3]=c->r[3]+c->r[0]; // 803CD48C
  W16(c->r[3]+0x00000024u,c->r[5]); // 803CD490
  return; // 803CD494
L_803CD498:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803CD498
  c->r[3]=c->r[3]+c->r[0]; // 803CD49C
  W16(c->r[3]+0x00000026u,c->r[5]); // 803CD4A0
  return; // 803CD4A4
L_803CD4A8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803CD4A8
  c->r[3]=c->r[3]+c->r[0]; // 803CD4AC
  W16(c->r[3]+0x00000028u,c->r[5]); // 803CD4B0
  return; // 803CD4B4
L_803CD4B8:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803CD4B8
  c->r[3]=c->r[3]+c->r[0]; // 803CD4BC
  W16(c->r[3]+0x0000002Au,c->r[5]); // 803CD4C0
  return; // 803CD4C4
L_803CD4C8:;
  c->r[0]=sraw(c,c->r[5],31); // 803CD4C8
  c->r[6]=c->r[4]+0xFFFFFFF0u; // 803CD4CC
  c->r[7]=c->r[5]&~c->r[0]; // 803CD4D0
  c->r[5]=0u+0x000000FFu; // 803CD4D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 803CD4D8
  c->r[6]=rotl(c->r[6],30)&0x3FFFFFFFu; // 803CD4DC
  cmps(c,0,(int32_t)c->r[0],255); // 803CD4E0
  if (crb(c,1)) { goto L_803CD4EC; } // 803CD4E4
  c->r[5]=c->r[7]|c->r[7]; // 803CD4E8
L_803CD4EC:;
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 803CD4EC
  c->r[4]=rotl(c->r[5],0)&0x000000FFu; // 803CD4F0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 803CD4F4
  cmps(c,0,(int32_t)c->r[0],2); // 803CD4F8
  if (crb(c,2)) { goto L_803CD540; } // 803CD4FC
  if (!crb(c,0)) { goto L_803CD514; } // 803CD500
  cmps(c,0,(int32_t)c->r[0],0); // 803CD504
  if (crb(c,2)) { goto L_803CD520; } // 803CD508
  if (!crb(c,0)) { goto L_803CD530; } // 803CD50C
  return; // 803CD510
L_803CD514:;
  cmps(c,0,(int32_t)c->r[0],4); // 803CD514
  if (!crb(c,0)) return; // 803CD518
  goto L_803CD550; // 803CD51C
L_803CD520:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803CD520
  c->r[3]=c->r[3]+c->r[0]; // 803CD524
  W8(c->r[3]+0x0000003Cu,c->r[4]); // 803CD528
  return; // 803CD52C
L_803CD530:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803CD530
  c->r[3]=c->r[3]+c->r[0]; // 803CD534
  W8(c->r[3]+0x0000003Du,c->r[4]); // 803CD538
  return; // 803CD53C
L_803CD540:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803CD540
  c->r[3]=c->r[3]+c->r[0]; // 803CD544
  W8(c->r[3]+0x0000003Eu,c->r[4]); // 803CD548
  return; // 803CD54C
L_803CD550:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803CD550
  c->r[3]=c->r[3]+c->r[0]; // 803CD554
  W8(c->r[3]+0x0000003Fu,c->r[4]); // 803CD558
  return; // 803CD55C
}

// SetupGX__Q36nw4hbm3lyt8MaterialFbUc
void f_803CD560(Ctx* __restrict c) {
  trace_call(0x803CD560u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CD560
  c->r[0]=c->lr; // 803CD564
  W32(c->r[1]+0x00000124u,c->r[0]); // 803CD568
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 803CD56C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 803CD570
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 803CD574
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 803CD578
  c->r[11]=c->r[1]+0x00000100u; // 803CD57C
  c->lr=0x803CD584u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CD580
  c->r[26]=c->r[3]|c->r[3]; // 803CD584
  c->r[28]=c->r[4]|c->r[4]; // 803CD588
  c->r[27]=c->r[5]|c->r[5]; // 803CD58C
  c->r[30]=0u+0x00000001u; // 803CD590
  c->r[23]=0u+0x00000000u; // 803CD594
  c->r[3]=0u+0x00000001u; // 803CD598
  c->lr=0x803CD5A0u; f_80286190(c); // 803CD59C
  c->r[3]=R32(c->r[26]+0x0000004Cu); // 803CD5A0
  c->r[0]=rotl(c->r[3],24)&0x00000001u; cr0(c,c->r[0]); // 803CD5A4
  if (crb(c,2)) { goto L_803CD64C; } // 803CD5A8
  c->r[0]=rotl(c->r[3],8)&0x0000000Fu; // 803CD5AC
  c->r[7]=R32(c->r[26]+0x00000058u); // 803CD5B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CD5B4
  c->r[5]=rotl(c->r[3],14)&0x0000003Cu; // 803CD5B8
  c->r[4]=rotl(c->r[3],9)&0x000001E0u; // 803CD5BC
  c->r[3]=0u+0x00000000u; // 803CD5C0
  c->r[6]=c->r[5]+c->r[4]; // 803CD5C4
  c->r[4]=0u+0x00000000u; // 803CD5C8
  c->r[0]=c->r[7]+c->r[0]; // 803CD5CC
  c->r[5]=0u+0x00000000u; // 803CD5D0
  c->r[24]=c->r[6]+c->r[0]; // 803CD5D4
  c->r[6]=R8(c->r[6]+c->r[0]); // 803CD5D8
  c->r[7]=0u+0x00000000u; // 803CD5DC
  c->r[8]=0u+0x00000000u; // 803CD5E0
  c->r[9]=0u+0x00000002u; // 803CD5E4
  c->lr=0x803CD5ECu; f_802861B4(c); // 803CD5E8
  c->r[6]=R8(c->r[24]+0x00000001u); // 803CD5EC
  c->r[3]=0u+0x00000002u; // 803CD5F0
  c->r[4]=0u+0x00000000u; // 803CD5F4
  c->r[5]=0u+0x00000000u; // 803CD5F8
  c->r[7]=0u+0x00000000u; // 803CD5FC
  c->r[8]=0u+0x00000000u; // 803CD600
  c->r[9]=0u+0x00000002u; // 803CD604
  c->lr=0x803CD60Cu; f_802861B4(c); // 803CD608
  c->r[3]=R8(c->r[24]+0x00000000u); // 803CD60C
  c->r[30]=0u+0x00000001u; // 803CD610
  cmps(c,0,(int32_t)c->r[3],1); // 803CD614
  if (crb(c,2)) { goto L_803CD62C; } // 803CD618
  c->r[0]=R8(c->r[24]+0x00000001u); // 803CD61C
  cmps(c,0,(int32_t)c->r[0],1); // 803CD620
  if (crb(c,2)) { goto L_803CD62C; } // 803CD624
  c->r[30]=0u+0x00000000u; // 803CD628
L_803CD62C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CD62C
  c->r[23]=0u+0x00000000u; // 803CD630
  if (crb(c,2)) { goto L_803CD644; } // 803CD634
  c->r[0]=R8(c->r[24]+0x00000001u); // 803CD638
  cmps(c,0,(int32_t)c->r[0],0); // 803CD63C
  if (!crb(c,2)) { goto L_803CD66C; } // 803CD640
L_803CD644:;
  c->r[23]=0u+0x00000001u; // 803CD644
  goto L_803CD66C; // 803CD648
L_803CD64C:;
  c->r[3]=0u+0x00000004u; // 803CD64C
  c->r[4]=0u+0x00000000u; // 803CD650
  c->r[5]=0u+0x00000000u; // 803CD654
  c->r[6]=0u+0x00000001u; // 803CD658
  c->r[7]=0u+0x00000000u; // 803CD65C
  c->r[8]=0u+0x00000000u; // 803CD660
  c->r[9]=0u+0x00000002u; // 803CD664
  c->lr=0x803CD66Cu; f_802861B4(c); // 803CD668
L_803CD66C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803CD66C
  c->r[29]=0u+0x00000000u; // 803CD670
  if (crb(c,2)) { goto L_803CD688; } // 803CD674
  cmps(c,0,(int32_t)c->r[28],0); // 803CD678
  c->r[29]=0u+0x00000001u; // 803CD67C
  if (!crb(c,2)) { goto L_803CD688; } // 803CD680
  c->r[29]=0u+0x00000000u; // 803CD684
L_803CD688:;
  cmps(c,0,(int32_t)c->r[23],0); // 803CD688
  if (crb(c,2)) { goto L_803CD760; } // 803CD68C
  c->r[5]=R32(c->r[26]+0x0000004Cu); // 803CD690
  c->r[0]=0u+0xFFFFFFFFu; // 803CD694
  W32(c->r[1]+0x00000030u,c->r[0]); // 803CD698
  c->r[0]=rotl(c->r[5],25)&0x00000001u; cr0(c,c->r[0]); // 803CD69C
  if (crb(c,2)) { goto L_803CD6EC; } // 803CD6A0
  c->r[0]=rotl(c->r[5],8)&0x0000000Fu; // 803CD6A4
  c->r[4]=rotl(c->r[5],14)&0x0000003Cu; // 803CD6A8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CD6AC
  c->r[6]=R32(c->r[26]+0x00000058u); // 803CD6B0
  c->r[0]=rotl(c->r[5],9)&0x000001E0u; // 803CD6B4
  c->r[5]=rotl(c->r[5],26)&0x00000004u; // 803CD6B8
  c->r[0]=c->r[4]+c->r[0]; // 803CD6BC
  c->r[3]=c->r[5]+c->r[3]; // 803CD6C0
  c->r[0]=c->r[6]+c->r[0]; // 803CD6C4
  c->r[6]=c->r[3]+c->r[0]; // 803CD6C8
  c->r[5]=R8(c->r[3]+c->r[0]); // 803CD6CC
  c->r[4]=R8(c->r[6]+0x00000001u); // 803CD6D0
  c->r[3]=R8(c->r[6]+0x00000002u); // 803CD6D4
  c->r[0]=R8(c->r[6]+0x00000003u); // 803CD6D8
  W8(c->r[1]+0x00000030u,c->r[5]); // 803CD6DC
  W8(c->r[1]+0x00000031u,c->r[4]); // 803CD6E0
  W8(c->r[1]+0x00000032u,c->r[3]); // 803CD6E4
  W8(c->r[1]+0x00000033u,c->r[0]); // 803CD6E8
L_803CD6EC:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 803CD6EC
  c->r[5]=c->r[27]|c->r[27]; // 803CD6F0
  c->r[3]=c->r[1]+0x00000024u; // 803CD6F4
  c->r[4]=c->r[1]+0x00000028u; // 803CD6F8
  W32(c->r[1]+0x00000028u,c->r[0]); // 803CD6FC
  c->lr=0x803CD704u; f_803C978C(c); // 803CD700
  c->r[7]=R8(c->r[1]+0x00000024u); // 803CD704
  c->r[4]=c->r[1]+0x00000020u; // 803CD708
  c->r[6]=R8(c->r[1]+0x00000025u); // 803CD70C
  c->r[3]=0u+0x00000004u; // 803CD710
  c->r[5]=R8(c->r[1]+0x00000026u); // 803CD714
  c->r[0]=R8(c->r[1]+0x00000027u); // 803CD718
  W8(c->r[1]+0x00000030u,c->r[7]); // 803CD71C
  W8(c->r[1]+0x00000031u,c->r[6]); // 803CD720
  W8(c->r[1]+0x00000032u,c->r[5]); // 803CD724
  W8(c->r[1]+0x00000033u,c->r[0]); // 803CD728
  W8(c->r[1]+0x00000020u,c->r[7]); // 803CD72C
  W8(c->r[1]+0x00000021u,c->r[6]); // 803CD730
  W8(c->r[1]+0x00000022u,c->r[5]); // 803CD734
  W8(c->r[1]+0x00000023u,c->r[0]); // 803CD738
  c->lr=0x803CD740u; f_802860B8(c); // 803CD73C
  cmps(c,0,(int32_t)c->r[29],0); // 803CD740
  c->r[29]=0u+0x00000000u; // 803CD744
  if (!crb(c,2)) { goto L_803CD75C; } // 803CD748
  c->r[3]=R32(c->r[1]+0x00000030u); // 803CD74C
  c->r[0]=c->r[3]+0x00010000u; // 803CD750
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803CD754
  if (crb(c,2)) { goto L_803CD760; } // 803CD758
L_803CD75C:;
  c->r[29]=0u+0x00000001u; // 803CD75C
L_803CD760:;
  c->r[31]=0u+0x00000000u; // 803CD760
  W8(c->r[1]+0x0000005Cu,c->r[31]); // 803CD764
  W8(c->r[1]+0x0000005Du,c->r[31]); // 803CD768
  W8(c->r[1]+0x0000005Eu,c->r[31]); // 803CD76C
  W8(c->r[1]+0x0000005Fu,c->r[31]); // 803CD770
  W8(c->r[1]+0x00000060u,c->r[31]); // 803CD774
  W8(c->r[1]+0x00000061u,c->r[31]); // 803CD778
  W8(c->r[1]+0x00000062u,c->r[31]); // 803CD77C
  W8(c->r[1]+0x00000063u,c->r[31]); // 803CD780
  W8(c->r[1]+0x00000064u,c->r[31]); // 803CD784
  W8(c->r[1]+0x00000065u,c->r[31]); // 803CD788
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CD78C
  c->r[3]=rotl(c->r[0],12)&0x0000000Fu; // 803CD790
  c->lr=0x803CD798u; f_80284454(c); // 803CD794
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CD798
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; cr0(c,c->r[0]); // 803CD79C
  if (crb(c,2)) { goto L_803CD834; } // 803CD7A0
  c->r[4]=R32(c->r[26]+0x0000004Cu); // 803CD7A4
  c->r[3]=0u+0xAAAB0000u; // 803CD7A8
  c->r[5]=R32(c->r[26]+0x00000058u); // 803CD7AC
  c->r[27]=c->r[1]+0x0000005Cu; // 803CD7B0
  c->r[0]=rotl(c->r[4],8)&0x0000000Fu; // 803CD7B4
  c->r[4]=rotl(c->r[4],9)&0x000001E0u; // 803CD7B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CD7BC
  c->r[25]=c->r[3]+0xFFFFAAABu; // 803CD7C0
  c->r[28]=0u+0x00000000u; // 803CD7C4
  c->r[24]=0u+0x00000001u; // 803CD7C8
  c->r[0]=c->r[5]+c->r[0]; // 803CD7CC
  c->r[23]=c->r[4]+c->r[0]; // 803CD7D0
  goto L_803CD824; // 803CD7D4
L_803CD7D8:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 803CD7D8
  c->r[6]=R8(c->r[23]+0x00000002u); // 803CD7DC
  cmps(c,0,(int32_t)c->r[0],1); // 803CD7E0
  if (!crb(c,2)) { goto L_803CD804; } // 803CD7E4
  cmpu(c,0,c->r[6],0x0000003Cu); // 803CD7E8
  if (crb(c,2)) { goto L_803CD804; } // 803CD7EC
  c->r[0]=c->r[6]+0xFFFFFFE2u; // 803CD7F0
  c->r[31]=0u+0x00000001u; // 803CD7F4
  c->r[0]=(uint32_t)(((uint64_t)c->r[25]*(uint64_t)c->r[0])>>32); // 803CD7F8
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803CD7FC
  W8(c->r[27]+c->r[0],c->r[24]); // 803CD800
L_803CD804:;
  c->r[4]=R8(c->r[23]+0x00000000u); // 803CD804
  c->r[3]=c->r[28]|c->r[28]; // 803CD808
  c->r[5]=R8(c->r[23]+0x00000001u); // 803CD80C
  c->r[7]=0u+0x00000000u; // 803CD810
  c->r[8]=0u+0x0000007Du; // 803CD814
  c->lr=0x803CD81Cu; f_8028422C(c); // 803CD818
  c->r[23]=c->r[23]+0x00000004u; // 803CD81C
  c->r[28]=c->r[28]+0x00000001u; // 803CD820
L_803CD824:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CD824
  c->r[0]=rotl(c->r[0],12)&0x0000000Fu; // 803CD828
  cmpu(c,0,c->r[28],c->r[0]); // 803CD82C
  if (crb(c,0)) { IRQCHK(c); goto L_803CD7D8; } // 803CD830
L_803CD834:;
  cmps(c,0,(int32_t)c->r[31],0); // 803CD834
  if (crb(c,2)) { goto L_803CD8AC; } // 803CD838
  c->r[0]=R32(c->r[26]+0x0000004Cu); // 803CD83C
  c->r[27]=c->r[1]+0x0000005Cu; // 803CD840
  c->r[3]=R32(c->r[26]+0x00000058u); // 803CD844
  c->r[28]=0u+0x00000000u; // 803CD848
  c->r[0]=rotl(c->r[0],9)&0x000001E0u; // 803CD84C
  c->r[23]=c->r[3]+c->r[0]; // 803CD850
  goto L_803CD898; // 803CD854
L_803CD858:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 803CD858
  c->r[0]=R8(c->r[27]+c->r[3]); // 803CD85C
  cmps(c,0,(int32_t)c->r[0],0); // 803CD860
  if (crb(c,2)) { goto L_803CD894; } // 803CD864
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 803CD868
  c->r[3]=c->r[1]+0x000000A0u; // 803CD86C
  c->r[4]=c->r[23]+c->r[0]; // 803CD870
  c->lr=0x803CD878u; f_803CB2A0(c); // 803CD874
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 803CD878
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 803CD87C
  c->r[4]=c->r[0]-c->r[3]; // 803CD880
  c->r[5]=0u+0x00000001u; // 803CD884
  c->r[3]=c->r[1]+0x000000A0u; // 803CD888
  c->r[4]=c->r[4]+0x0000001Eu; // 803CD88C
  c->lr=0x803CD894u; f_80288954(c); // 803CD890
L_803CD894:;
  c->r[28]=c->r[28]+0x00000001u; // 803CD894
L_803CD898:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CD898
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 803CD89C
  c->r[0]=rotl(c->r[0],8)&0x0000000Fu; // 803CD8A0
  cmpu(c,0,c->r[3],c->r[0]); // 803CD8A4
  if (crb(c,0)) { IRQCHK(c); goto L_803CD858; } // 803CD8A8
L_803CD8AC:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CD8AC
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 803CD8B0
  if (crb(c,2)) { goto L_803CD984; } // 803CD8B4
  c->r[31]=R32(c->r[26]+0x00000058u); // 803CD8B8
  c->r[28]=0u+0x00000000u; // 803CD8BC
  c->r[27]=0u+0x00000000u; // 803CD8C0
  goto L_803CD974; // 803CD8C4
L_803CD8C8:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 803CD8C8
  c->r[3]=c->r[1]+0x00000080u; // 803CD8CC
  c->r[0]=R32(c->r[31]+0x00000004u); // 803CD8D0
  W32(c->r[1]+0x00000080u,c->r[4]); // 803CD8D4
  W32(c->r[1]+0x00000084u,c->r[0]); // 803CD8D8
  c->r[4]=R32(c->r[31]+0x00000008u); // 803CD8DC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 803CD8E0
  W32(c->r[1]+0x00000088u,c->r[4]); // 803CD8E4
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 803CD8E8
  c->r[4]=R32(c->r[31]+0x00000010u); // 803CD8EC
  c->r[0]=R32(c->r[31]+0x00000014u); // 803CD8F0
  W32(c->r[1]+0x00000090u,c->r[4]); // 803CD8F4
  W32(c->r[1]+0x00000094u,c->r[0]); // 803CD8F8
  c->r[4]=R32(c->r[31]+0x00000018u); // 803CD8FC
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 803CD900
  W32(c->r[1]+0x00000098u,c->r[4]); // 803CD904
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 803CD908
  c->lr=0x803CD910u; f_80286888(c); // 803CD90C
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 803CD910
  cmpu(c,0,c->r[0],0x00000001u); // 803CD914
  if (crb(c,1)) { goto L_803CD960; } // 803CD918
  c->r[3]=c->r[1]+0x00000080u; // 803CD91C
  c->lr=0x803CD924u; f_80286858(c); // 803CD920
  cmps(c,0,(int32_t)c->r[3],0); // 803CD924
  c->r[6]=c->r[3]|c->r[3]; // 803CD928
  if (crb(c,2)) { goto L_803CD960; } // 803CD92C
  c->r[4]=R32(c->r[6]+0x00000008u); // 803CD930
  c->r[3]=c->r[1]+0x00000050u; // 803CD934
  c->r[5]=R32(c->r[6]+0x00000004u); // 803CD938
  c->r[6]=R16(c->r[6]+0x00000000u); // 803CD93C
  c->lr=0x803CD944u; f_80286B58(c); // 803CD940
  c->r[4]=c->r[28]|c->r[28]; // 803CD944
  c->r[3]=c->r[1]+0x00000050u; // 803CD948
  c->lr=0x803CD950u; f_80286B80(c); // 803CD94C
  c->r[4]=c->r[28]|c->r[28]; // 803CD950
  c->r[3]=c->r[1]+0x00000080u; // 803CD954
  c->lr=0x803CD95Cu; f_802867A8(c); // 803CD958
  c->r[28]=c->r[28]+0x00000001u; // 803CD95C
L_803CD960:;
  c->r[4]=c->r[27]|c->r[27]; // 803CD960
  c->r[3]=c->r[1]+0x00000080u; // 803CD964
  c->lr=0x803CD96Cu; f_80286B04(c); // 803CD968
  c->r[31]=c->r[31]+0x00000020u; // 803CD96C
  c->r[27]=c->r[27]+0x00000001u; // 803CD970
L_803CD974:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CD974
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 803CD978
  cmpu(c,0,c->r[27],c->r[0]); // 803CD97C
  if (crb(c,0)) { IRQCHK(c); goto L_803CD8C8; } // 803CD980
L_803CD984:;
  c->r[5]=R16(c->r[26]+0x00000024u); // 803CD984
  c->r[4]=c->r[1]+0x00000048u; // 803CD988
  c->r[0]=R16(c->r[26]+0x00000026u); // 803CD98C
  c->r[3]=0u+0x00000001u; // 803CD990
  W16(c->r[1]+0x00000048u,c->r[5]); // 803CD994
  W16(c->r[1]+0x0000004Au,c->r[0]); // 803CD998
  c->r[5]=R16(c->r[26]+0x00000028u); // 803CD99C
  c->r[0]=R16(c->r[26]+0x0000002Au); // 803CD9A0
  W16(c->r[1]+0x0000004Cu,c->r[5]); // 803CD9A4
  W16(c->r[1]+0x0000004Eu,c->r[0]); // 803CD9A8
  c->lr=0x803CD9B0u; f_80287968(c); // 803CD9AC
  c->r[5]=R16(c->r[26]+0x0000002Cu); // 803CD9B0
  c->r[4]=c->r[1]+0x00000040u; // 803CD9B4
  c->r[0]=R16(c->r[26]+0x0000002Eu); // 803CD9B8
  c->r[3]=0u+0x00000002u; // 803CD9BC
  W16(c->r[1]+0x00000040u,c->r[5]); // 803CD9C0
  W16(c->r[1]+0x00000042u,c->r[0]); // 803CD9C4
  c->r[5]=R16(c->r[26]+0x00000030u); // 803CD9C8
  c->r[0]=R16(c->r[26]+0x00000032u); // 803CD9CC
  W16(c->r[1]+0x00000044u,c->r[5]); // 803CD9D0
  W16(c->r[1]+0x00000046u,c->r[0]); // 803CD9D4
  c->lr=0x803CD9DCu; f_80287968(c); // 803CD9D8
  c->r[5]=R16(c->r[26]+0x00000034u); // 803CD9DC
  c->r[4]=c->r[1]+0x00000038u; // 803CD9E0
  c->r[0]=R16(c->r[26]+0x00000036u); // 803CD9E4
  c->r[3]=0u+0x00000003u; // 803CD9E8
  W16(c->r[1]+0x00000038u,c->r[5]); // 803CD9EC
  W16(c->r[1]+0x0000003Au,c->r[0]); // 803CD9F0
  c->r[5]=R16(c->r[26]+0x00000038u); // 803CD9F4
  c->r[0]=R16(c->r[26]+0x0000003Au); // 803CD9F8
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 803CD9FC
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 803CDA00
  c->lr=0x803CDA08u; f_80287968(c); // 803CDA04
  c->r[0]=R8(c->r[26]+0x0000003Cu); // 803CDA08
  c->r[4]=c->r[1]+0x0000001Cu; // 803CDA0C
  c->r[3]=0u+0x00000000u; // 803CDA10
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 803CDA14
  c->r[0]=R8(c->r[26]+0x0000003Du); // 803CDA18
  W8(c->r[1]+0x0000001Du,c->r[0]); // 803CDA1C
  c->r[0]=R8(c->r[26]+0x0000003Eu); // 803CDA20
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 803CDA24
  c->r[0]=R8(c->r[26]+0x0000003Fu); // 803CDA28
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 803CDA2C
  c->lr=0x803CDA34u; f_802879CC(c); // 803CDA30
  c->r[0]=R8(c->r[26]+0x00000040u); // 803CDA34
  c->r[4]=c->r[1]+0x00000018u; // 803CDA38
  c->r[3]=0u+0x00000001u; // 803CDA3C
  W8(c->r[1]+0x00000018u,c->r[0]); // 803CDA40
  c->r[0]=R8(c->r[26]+0x00000041u); // 803CDA44
  W8(c->r[1]+0x00000019u,c->r[0]); // 803CDA48
  c->r[0]=R8(c->r[26]+0x00000042u); // 803CDA4C
  W8(c->r[1]+0x0000001Au,c->r[0]); // 803CDA50
  c->r[0]=R8(c->r[26]+0x00000043u); // 803CDA54
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 803CDA58
  c->lr=0x803CDA60u; f_802879CC(c); // 803CDA5C
  c->r[0]=R8(c->r[26]+0x00000044u); // 803CDA60
  c->r[4]=c->r[1]+0x00000014u; // 803CDA64
  c->r[3]=0u+0x00000002u; // 803CDA68
  W8(c->r[1]+0x00000014u,c->r[0]); // 803CDA6C
  c->r[0]=R8(c->r[26]+0x00000045u); // 803CDA70
  W8(c->r[1]+0x00000015u,c->r[0]); // 803CDA74
  c->r[0]=R8(c->r[26]+0x00000046u); // 803CDA78
  W8(c->r[1]+0x00000016u,c->r[0]); // 803CDA7C
  c->r[0]=R8(c->r[26]+0x00000047u); // 803CDA80
  W8(c->r[1]+0x00000017u,c->r[0]); // 803CDA84
  c->lr=0x803CDA8Cu; f_802879CC(c); // 803CDA88
  c->r[0]=R8(c->r[26]+0x00000048u); // 803CDA8C
  c->r[4]=c->r[1]+0x00000010u; // 803CDA90
  c->r[3]=0u+0x00000003u; // 803CDA94
  W8(c->r[1]+0x00000010u,c->r[0]); // 803CDA98
  c->r[0]=R8(c->r[26]+0x00000049u); // 803CDA9C
  W8(c->r[1]+0x00000011u,c->r[0]); // 803CDAA0
  c->r[0]=R8(c->r[26]+0x0000004Au); // 803CDAA4
  W8(c->r[1]+0x00000012u,c->r[0]); // 803CDAA8
  c->r[0]=R8(c->r[26]+0x0000004Bu); // 803CDAAC
  W8(c->r[1]+0x00000013u,c->r[0]); // 803CDAB0
  c->lr=0x803CDAB8u; f_802879CC(c); // 803CDAB4
  c->r[8]=R32(c->r[26]+0x0000004Cu); // 803CDAB8
  c->r[0]=rotl(c->r[8],18)&0x00000001u; cr0(c,c->r[0]); // 803CDABC
  if (crb(c,2)) { goto L_803CDB28; } // 803CDAC0
  c->r[0]=rotl(c->r[8],8)&0x0000000Fu; // 803CDAC4
  c->r[6]=rotl(c->r[8],27)&0x00000004u; // 803CDAC8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CDACC
  c->r[5]=rotl(c->r[8],26)&0x00000004u; // 803CDAD0
  c->r[3]=rotl(c->r[8],14)&0x0000003Cu; // 803CDAD4
  c->r[7]=R32(c->r[26]+0x00000058u); // 803CDAD8
  c->r[0]=rotl(c->r[8],9)&0x000001E0u; // 803CDADC
  c->r[3]=c->r[3]+c->r[0]; // 803CDAE0
  c->r[0]=c->r[6]+c->r[5]; // 803CDAE4
  c->r[23]=0u+0x00000000u; // 803CDAE8
  c->r[3]=c->r[4]+c->r[3]; // 803CDAEC
  c->r[0]=c->r[7]+c->r[0]; // 803CDAF0
  c->r[27]=c->r[3]+c->r[0]; // 803CDAF4
L_803CDAF8:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 803CDAF8
  c->r[3]=c->r[23]|c->r[23]; // 803CDAFC
  c->r[4]=rotl(c->r[0],0)&0x00000003u; // 803CDB00
  c->r[5]=rotl(c->r[0],30)&0x00000003u; // 803CDB04
  c->r[6]=rotl(c->r[0],28)&0x00000003u; // 803CDB08
  c->r[7]=rotl(c->r[0],26)&0x00000003u; // 803CDB0C
  c->lr=0x803CDB14u; f_80287B04(c); // 803CDB10
  c->r[23]=c->r[23]+0x00000001u; // 803CDB14
  c->r[27]=c->r[27]+0x00000001u; // 803CDB18
  cmps(c,0,(int32_t)c->r[23],4); // 803CDB1C
  if (crb(c,0)) { IRQCHK(c); goto L_803CDAF8; } // 803CDB20
  goto L_803CDB88; // 803CDB24
L_803CDB28:;
  c->r[3]=0u+0x00000000u; // 803CDB28
  c->r[4]=0u+0x00000000u; // 803CDB2C
  c->r[5]=0u+0x00000001u; // 803CDB30
  c->r[6]=0u+0x00000002u; // 803CDB34
  c->r[7]=0u+0x00000003u; // 803CDB38
  c->lr=0x803CDB40u; f_80287B04(c); // 803CDB3C
  c->r[3]=0u+0x00000001u; // 803CDB40
  c->r[4]=0u+0x00000000u; // 803CDB44
  c->r[5]=0u+0x00000000u; // 803CDB48
  c->r[6]=0u+0x00000000u; // 803CDB4C
  c->r[7]=0u+0x00000003u; // 803CDB50
  c->lr=0x803CDB58u; f_80287B04(c); // 803CDB54
  c->r[3]=0u+0x00000002u; // 803CDB58
  c->r[4]=0u+0x00000001u; // 803CDB5C
  c->r[5]=0u+0x00000001u; // 803CDB60
  c->r[6]=0u+0x00000001u; // 803CDB64
  c->r[7]=0u+0x00000003u; // 803CDB68
  c->lr=0x803CDB70u; f_80287B04(c); // 803CDB6C
  c->r[3]=0u+0x00000003u; // 803CDB70
  c->r[4]=0u+0x00000002u; // 803CDB74
  c->r[5]=0u+0x00000002u; // 803CDB78
  c->r[6]=0u+0x00000002u; // 803CDB7C
  c->r[7]=0u+0x00000003u; // 803CDB80
  c->lr=0x803CDB88u; f_80287B04(c); // 803CDB84
L_803CDB88:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CDB88
  c->r[27]=0u+0x00000000u; // 803CDB8C
  W8(c->r[1]+0x0000002Cu,c->r[27]); // 803CDB90
  c->r[3]=rotl(c->r[0],23)&0x0000001Fu; cr0(c,c->r[3]); // 803CDB94
  W8(c->r[1]+0x0000002Du,c->r[27]); // 803CDB98
  W8(c->r[1]+0x0000002Eu,c->r[27]); // 803CDB9C
  if (crb(c,2)) { goto L_803CDD6C; } // 803CDBA0
  c->lr=0x803CDBA8u; f_80287DA0(c); // 803CDBA4
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 803CDBA8
  c->r[29]=c->r[1]+0x0000002Cu; // 803CDBAC
  c->r[10]=R32(c->r[26]+0x00000058u); // 803CDBB0
  c->r[28]=0u+0x00000000u; // 803CDBB4
  c->r[3]=rotl(c->r[9],14)&0x00000003u; // 803CDBB8
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 803CDBBC
  c->r[0]=c->r[3]+c->r[0]; // 803CDBC0
  c->r[5]=rotl(c->r[9],26)&0x00000004u; // 803CDBC4
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CDBC8
  c->r[3]=rotl(c->r[9],27)&0x00000004u; // 803CDBCC
  c->r[0]=rotl(c->r[9],20)&0x00000004u; // 803CDBD0
  c->r[7]=rotl(c->r[9],9)&0x000001E0u; // 803CDBD4
  c->r[6]=rotl(c->r[9],14)&0x0000003Cu; // 803CDBD8
  c->r[0]=c->r[3]+c->r[0]; // 803CDBDC
  c->r[4]=rotl(c->r[9],28)&0x00000004u; // 803CDBE0
  c->r[5]=c->r[8]+c->r[5]; // 803CDBE4
  c->r[0]=c->r[4]+c->r[0]; // 803CDBE8
  c->r[3]=rotl(c->r[9],29)&0x00000004u; // 803CDBEC
  c->r[6]=c->r[7]+c->r[6]; // 803CDBF0
  c->r[4]=rotl(c->r[9],19)&0x0000001Cu; // 803CDBF4
  c->r[3]=c->r[3]+c->r[0]; // 803CDBF8
  c->r[31]=0u+0x00000001u; // 803CDBFC
  c->r[0]=c->r[6]+c->r[5]; // 803CDC00
  c->r[3]=c->r[4]+c->r[3]; // 803CDC04
  c->r[0]=c->r[10]+c->r[0]; // 803CDC08
  c->r[25]=c->r[3]+c->r[0]; // 803CDC0C
  goto L_803CDD54; // 803CDC10
L_803CDC14:;
  c->r[0]=R8(c->r[25]+0x00000003u); // 803CDC14
  c->r[3]=c->r[28]|c->r[28]; // 803CDC18
  c->r[5]=R8(c->r[25]+0x00000002u); // 803CDC1C
  c->r[4]=R8(c->r[25]+0x00000000u); // 803CDC20
  c->r[5]=(rotl(c->r[0],8)&0x00000100u)|(c->r[5]&~0x00000100u); // 803CDC24
  c->r[6]=R8(c->r[25]+0x00000001u); // 803CDC28
  c->lr=0x803CDC30u; f_80287C44(c); // 803CDC2C
  c->r[0]=R8(c->r[25]+0x00000003u); // 803CDC30
  c->r[3]=c->r[28]|c->r[28]; // 803CDC34
  c->r[4]=rotl(c->r[0],31)&0x00000003u; // 803CDC38
  c->r[5]=rotl(c->r[0],29)&0x00000003u; // 803CDC3C
  c->lr=0x803CDC44u; f_80287AC8(c); // 803CDC40
  c->r[0]=R8(c->r[25]+0x00000005u); // 803CDC44
  c->r[3]=c->r[28]|c->r[28]; // 803CDC48
  c->r[5]=R8(c->r[25]+0x00000004u); // 803CDC4C
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 803CDC50
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 803CDC54
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 803CDC58
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 803CDC5C
  c->lr=0x803CDC64u; f_802877D8(c); // 803CDC60
  c->r[6]=R8(c->r[25]+0x00000006u); // 803CDC64
  c->r[3]=c->r[28]|c->r[28]; // 803CDC68
  c->r[0]=R8(c->r[25]+0x00000007u); // 803CDC6C
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 803CDC70
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 803CDC74
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 803CDC78
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 803CDC7C
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 803CDC80
  c->lr=0x803CDC88u; f_80287858(c); // 803CDC84
  c->r[0]=R8(c->r[25]+0x00000007u); // 803CDC88
  c->r[3]=c->r[28]|c->r[28]; // 803CDC8C
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 803CDC90
  c->lr=0x803CDC98u; f_80287A28(c); // 803CDC94
  c->r[0]=R8(c->r[25]+0x00000009u); // 803CDC98
  c->r[3]=c->r[28]|c->r[28]; // 803CDC9C
  c->r[5]=R8(c->r[25]+0x00000008u); // 803CDCA0
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 803CDCA4
  c->r[7]=rotl(c->r[0],28)&0x0000000Fu; // 803CDCA8
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 803CDCAC
  c->r[5]=rotl(c->r[5],28)&0x0000000Fu; // 803CDCB0
  c->lr=0x803CDCB8u; f_80287818(c); // 803CDCB4
  c->r[6]=R8(c->r[25]+0x0000000Au); // 803CDCB8
  c->r[3]=c->r[28]|c->r[28]; // 803CDCBC
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 803CDCC0
  c->r[4]=rotl(c->r[6],0)&0x0000000Fu; // 803CDCC4
  c->r[5]=rotl(c->r[6],28)&0x00000003u; // 803CDCC8
  c->r[6]=rotl(c->r[6],26)&0x00000003u; // 803CDCCC
  c->r[7]=rotl(c->r[0],0)&0x00000001u; // 803CDCD0
  c->r[8]=rotl(c->r[0],31)&0x00000003u; // 803CDCD4
  c->lr=0x803CDCDCu; f_802878B0(c); // 803CDCD8
  c->r[0]=R8(c->r[25]+0x0000000Bu); // 803CDCDC
  c->r[3]=c->r[28]|c->r[28]; // 803CDCE0
  c->r[4]=rotl(c->r[0],29)&0x0000001Fu; // 803CDCE4
  c->lr=0x803CDCECu; f_80287A78(c); // 803CDCE8
  c->r[10]=R8(c->r[25]+0x0000000Fu); // 803CDCEC
  c->r[3]=c->r[28]|c->r[28]; // 803CDCF0
  c->r[6]=R8(c->r[25]+0x0000000Du); // 803CDCF4
  c->r[9]=R8(c->r[25]+0x0000000Eu); // 803CDCF8
  c->r[4]=rotl(c->r[10],29)&0x00000001u; // 803CDCFC
  c->r[24]=rotl(c->r[6],29)&0x0000000Fu; // 803CDD00
  c->r[0]=rotl(c->r[10],28)&0x00000003u; // 803CDD04
  W32(c->r[1]+0x00000008u,c->r[4]); // 803CDD08
  c->r[5]=rotl(c->r[10],0)&0x00000003u; // 803CDD0C
  c->r[8]=rotl(c->r[9],0)&0x00000007u; // 803CDD10
  c->r[7]=c->r[24]|c->r[24]; // 803CDD14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803CDD18
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 803CDD1C
  c->r[9]=rotl(c->r[9],29)&0x00000007u; // 803CDD20
  c->r[10]=rotl(c->r[10],30)&0x00000001u; // 803CDD24
  c->r[4]=R8(c->r[25]+0x0000000Cu); // 803CDD28
  c->lr=0x803CDD30u; f_802872A4(c); // 803CDD2C
  cmps(c,0,(int32_t)c->r[24],1); // 803CDD30
  if (crb(c,0)) { goto L_803CDD4C; } // 803CDD34
  cmps(c,0,(int32_t)c->r[24],3); // 803CDD38
  if (crb(c,1)) { goto L_803CDD4C; } // 803CDD3C
  c->r[3]=c->r[29]+c->r[24]; // 803CDD40
  c->r[27]=0u+0x00000001u; // 803CDD44
  W8(c->r[3]+0xFFFFFFFFu,c->r[31]); // 803CDD48
L_803CDD4C:;
  c->r[25]=c->r[25]+0x00000010u; // 803CDD4C
  c->r[28]=c->r[28]+0x00000001u; // 803CDD50
L_803CDD54:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CDD54
  c->r[0]=rotl(c->r[0],23)&0x0000001Fu; // 803CDD58
  cmpu(c,0,c->r[28],c->r[0]); // 803CDD5C
  if (crb(c,0)) { IRQCHK(c); goto L_803CDC14; } // 803CDD60
  c->r[29]=0u+0x00000001u; // 803CDD64
  goto L_803CE138; // 803CDD68
L_803CDD6C:;
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; cr0(c,c->r[0]); // 803CDD6C
  c->r[28]=0u+0x00000000u; // 803CDD70
  if (!crb(c,2)) { goto L_803CDDC8; } // 803CDD74
  c->r[3]=0u+0x00000000u; // 803CDD78
  c->r[4]=0u+0x000000FFu; // 803CDD7C
  c->r[5]=0u+0x000000FFu; // 803CDD80
  c->r[6]=0u+0x00000004u; // 803CDD84
  c->lr=0x803CDD8Cu; f_80287C44(c); // 803CDD88
  c->r[3]=0u+0x00000000u; // 803CDD8C
  c->r[4]=0u+0x0000000Fu; // 803CDD90
  c->r[5]=0u+0x00000004u; // 803CDD94
  c->r[6]=0u+0x0000000Au; // 803CDD98
  c->r[7]=0u+0x0000000Fu; // 803CDD9C
  c->lr=0x803CDDA4u; f_802877D8(c); // 803CDDA0
  c->r[3]=0u+0x00000000u; // 803CDDA4
  c->r[4]=0u+0x00000007u; // 803CDDA8
  c->r[5]=0u+0x00000002u; // 803CDDAC
  c->r[6]=0u+0x00000005u; // 803CDDB0
  c->r[7]=0u+0x00000007u; // 803CDDB4
  c->lr=0x803CDDBCu; f_80287818(c); // 803CDDB8
  c->r[29]=0u+0x00000001u; // 803CDDBC
  c->r[28]=0u+0x00000001u; // 803CDDC0
  goto L_803CE0C0; // 803CDDC4
L_803CDDC8:;
  cmpu(c,0,c->r[0],0x00000001u); // 803CDDC8
  if (!crb(c,2)) { goto L_803CDE1C; } // 803CDDCC
  c->r[3]=0u+0x00000000u; // 803CDDD0
  c->r[4]=0u+0x00000000u; // 803CDDD4
  c->r[5]=0u+0x00000000u; // 803CDDD8
  c->r[6]=0u+0x000000FFu; // 803CDDDC
  c->lr=0x803CDDE4u; f_80287C44(c); // 803CDDE0
  c->r[3]=0u+0x00000000u; // 803CDDE4
  c->r[4]=0u+0x00000002u; // 803CDDE8
  c->r[5]=0u+0x00000004u; // 803CDDEC
  c->r[6]=0u+0x00000008u; // 803CDDF0
  c->r[7]=0u+0x0000000Fu; // 803CDDF4
  c->lr=0x803CDDFCu; f_802877D8(c); // 803CDDF8
  c->r[3]=0u+0x00000000u; // 803CDDFC
  c->r[4]=0u+0x00000001u; // 803CDE00
  c->r[5]=0u+0x00000002u; // 803CDE04
  c->r[6]=0u+0x00000004u; // 803CDE08
  c->r[7]=0u+0x00000007u; // 803CDE0C
  c->lr=0x803CDE14u; f_80287818(c); // 803CDE10
  c->r[28]=0u+0x00000001u; // 803CDE14
  goto L_803CE06C; // 803CDE18
L_803CDE1C:;
  cmpu(c,0,c->r[0],0x00000002u); // 803CDE1C
  if (!crb(c,2)) { goto L_803CDED4; } // 803CDE20
  c->r[3]=0u+0x00000000u; // 803CDE24
  c->r[4]=0u+0x00000000u; // 803CDE28
  c->r[5]=0u+0x00000000u; // 803CDE2C
  c->r[6]=0u+0x000000FFu; // 803CDE30
  c->lr=0x803CDE38u; f_80287C44(c); // 803CDE34
  c->r[3]=0u+0x00000000u; // 803CDE38
  c->r[4]=0u+0x0000000Fu; // 803CDE3C
  c->r[5]=0u+0x0000000Fu; // 803CDE40
  c->r[6]=0u+0x0000000Fu; // 803CDE44
  c->r[7]=0u+0x00000008u; // 803CDE48
  c->lr=0x803CDE50u; f_802877D8(c); // 803CDE4C
  c->r[3]=0u+0x00000000u; // 803CDE50
  c->r[4]=0u+0x00000007u; // 803CDE54
  c->r[5]=0u+0x00000007u; // 803CDE58
  c->r[6]=0u+0x00000007u; // 803CDE5C
  c->r[7]=0u+0x00000004u; // 803CDE60
  c->lr=0x803CDE68u; f_80287818(c); // 803CDE64
  c->r[3]=0u+0x00000001u; // 803CDE68
  c->r[4]=0u+0x00000001u; // 803CDE6C
  c->r[5]=0u+0x00000001u; // 803CDE70
  c->r[6]=0u+0x000000FFu; // 803CDE74
  c->lr=0x803CDE7Cu; f_80287C44(c); // 803CDE78
  c->r[3]=0u+0x00000001u; // 803CDE7C
  c->r[4]=0u+0x00000008u; // 803CDE80
  c->r[5]=0u+0x00000000u; // 803CDE84
  c->r[6]=0u+0x0000000Eu; // 803CDE88
  c->r[7]=0u+0x0000000Fu; // 803CDE8C
  c->lr=0x803CDE94u; f_802877D8(c); // 803CDE90
  c->r[3]=0u+0x00000001u; // 803CDE94
  c->r[4]=0u+0x00000004u; // 803CDE98
  c->r[5]=0u+0x00000000u; // 803CDE9C
  c->r[6]=0u+0x00000006u; // 803CDEA0
  c->r[7]=0u+0x00000007u; // 803CDEA4
  c->lr=0x803CDEACu; f_80287818(c); // 803CDEA8
  c->r[4]=0u+0x80440000u; // 803CDEAC
  c->r[3]=0u+0x00000001u; // 803CDEB0
  c->r[4]=R32(c->r[4]+0xFFFF8FB0u); // 803CDEB4
  c->lr=0x803CDEBCu; f_80287A28(c); // 803CDEB8
  c->r[4]=0u+0x80440000u; // 803CDEBC
  c->r[3]=0u+0x00000001u; // 803CDEC0
  c->r[4]=R32(c->r[4]+0xFFFF8FD0u); // 803CDEC4
  c->lr=0x803CDECCu; f_80287A78(c); // 803CDEC8
  c->r[28]=0u+0x00000002u; // 803CDECC
  goto L_803CDF88; // 803CDED0
L_803CDED4:;
  c->r[24]=0u+0x80440000u; // 803CDED4
  c->r[25]=0u+0x80440000u; // 803CDED8
  c->r[24]=c->r[24]+0xFFFF8FB0u; // 803CDEDC
  c->r[23]=0u+0x00000000u; // 803CDEE0
  c->r[25]=c->r[25]+0xFFFF8FD0u; // 803CDEE4
  goto L_803CDF78; // 803CDEE8
L_803CDEEC:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 803CDEEC
  c->r[4]=c->r[23]|c->r[23]; // 803CDEF0
  c->r[3]=c->r[22]|c->r[22]; // 803CDEF4
  c->r[5]=c->r[23]|c->r[23]; // 803CDEF8
  c->r[6]=0u+0x000000FFu; // 803CDEFC
  c->lr=0x803CDF04u; f_80287C44(c); // 803CDF00
  cmps(c,0,(int32_t)c->r[23],0); // 803CDF04
  c->r[7]=0u+0x00000000u; // 803CDF08
  if (!crb(c,2)) { goto L_803CDF14; } // 803CDF0C
  c->r[7]=0u+0x0000000Fu; // 803CDF10
L_803CDF14:;
  cmps(c,0,(int32_t)c->r[23],0); // 803CDF14
  c->r[31]=0u+0x00000000u; // 803CDF18
  if (!crb(c,2)) { goto L_803CDF24; } // 803CDF1C
  c->r[31]=0u+0x00000007u; // 803CDF20
L_803CDF24:;
  c->r[3]=c->r[22]|c->r[22]; // 803CDF24
  c->r[4]=0u+0x0000000Fu; // 803CDF28
  c->r[5]=0u+0x00000008u; // 803CDF2C
  c->r[6]=0u+0x0000000Eu; // 803CDF30
  c->lr=0x803CDF38u; f_802877D8(c); // 803CDF34
  c->r[3]=c->r[22]|c->r[22]; // 803CDF38
  c->r[7]=c->r[31]|c->r[31]; // 803CDF3C
  c->r[4]=0u+0x00000007u; // 803CDF40
  c->r[5]=0u+0x00000004u; // 803CDF44
  c->r[6]=0u+0x00000006u; // 803CDF48
  c->lr=0x803CDF50u; f_80287818(c); // 803CDF4C
  c->r[4]=R32(c->r[24]+0x00000000u); // 803CDF50
  c->r[3]=c->r[22]|c->r[22]; // 803CDF54
  c->lr=0x803CDF5Cu; f_80287A28(c); // 803CDF58
  c->r[4]=R32(c->r[25]+0x00000000u); // 803CDF5C
  c->r[3]=c->r[22]|c->r[22]; // 803CDF60
  c->lr=0x803CDF68u; f_80287A78(c); // 803CDF64
  c->r[28]=c->r[28]+0x00000001u; // 803CDF68
  c->r[24]=c->r[24]+0x00000004u; // 803CDF6C
  c->r[25]=c->r[25]+0x00000004u; // 803CDF70
  c->r[23]=c->r[23]+0x00000001u; // 803CDF74
L_803CDF78:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CDF78
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 803CDF7C
  cmpu(c,0,c->r[23],c->r[0]); // 803CDF80
  if (crb(c,0)) { IRQCHK(c); goto L_803CDEEC; } // 803CDF84
L_803CDF88:;
  c->r[3]=0u+0x803F0000u; // 803CDF88
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000024u); // 803CDF8C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000E50u); // 803CDF90
  c->r[5]=0u+0x00000000u; // 803CDF94
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803CDF98
  if (!crb(c,2)) { goto L_803CDFD8; } // 803CDF9C
  c->r[4]=c->r[3]+0x00000E50u; // 803CDFA0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000026u); // 803CDFA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 803CDFA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CDFAC
  if (!crb(c,2)) { goto L_803CDFD8; } // 803CDFB0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000028u); // 803CDFB4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 803CDFB8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CDFBC
  if (!crb(c,2)) { goto L_803CDFD8; } // 803CDFC0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Au); // 803CDFC4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 803CDFC8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803CDFCC
  if (!crb(c,2)) { goto L_803CDFD8; } // 803CDFD0
  c->r[5]=0u+0x00000001u; // 803CDFD4
L_803CDFD8:;
  cmps(c,0,(int32_t)c->r[5],0); // 803CDFD8
  if (crb(c,2)) { goto L_803CE020; } // 803CDFDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Cu); // 803CDFE0
  c->r[3]=0u+0x00000000u; // 803CDFE4
  cmps(c,0,(int32_t)c->r[0],255); // 803CDFE8
  if (!crb(c,2)) { goto L_803CE018; } // 803CDFEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x0000002Eu); // 803CDFF0
  cmps(c,0,(int32_t)c->r[0],255); // 803CDFF4
  if (!crb(c,2)) { goto L_803CE018; } // 803CDFF8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000030u); // 803CDFFC
  cmps(c,0,(int32_t)c->r[0],255); // 803CE000
  if (!crb(c,2)) { goto L_803CE018; } // 803CE004
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[26]+0x00000032u); // 803CE008
  cmps(c,0,(int32_t)c->r[0],255); // 803CE00C
  if (!crb(c,2)) { goto L_803CE018; } // 803CE010
  c->r[3]=0u+0x00000001u; // 803CE014
L_803CE018:;
  cmps(c,0,(int32_t)c->r[3],0); // 803CE018
  if (!crb(c,2)) { goto L_803CE06C; } // 803CE01C
L_803CE020:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 803CE020
  c->r[4]=0u+0x000000FFu; // 803CE024
  c->r[3]=c->r[22]|c->r[22]; // 803CE028
  c->r[5]=0u+0x000000FFu; // 803CE02C
  c->r[6]=0u+0x000000FFu; // 803CE030
  c->lr=0x803CE038u; f_80287C44(c); // 803CE034
  c->r[3]=c->r[22]|c->r[22]; // 803CE038
  c->r[4]=0u+0x00000002u; // 803CE03C
  c->r[5]=0u+0x00000004u; // 803CE040
  c->r[6]=0u+0x00000000u; // 803CE044
  c->r[7]=0u+0x0000000Fu; // 803CE048
  c->lr=0x803CE050u; f_802877D8(c); // 803CE04C
  c->r[3]=c->r[22]|c->r[22]; // 803CE050
  c->r[4]=0u+0x00000001u; // 803CE054
  c->r[5]=0u+0x00000002u; // 803CE058
  c->r[6]=0u+0x00000000u; // 803CE05C
  c->r[7]=0u+0x00000007u; // 803CE060
  c->lr=0x803CE068u; f_80287818(c); // 803CE064
  c->r[28]=c->r[28]+0x00000001u; // 803CE068
L_803CE06C:;
  cmps(c,0,(int32_t)c->r[29],0); // 803CE06C
  if (crb(c,2)) { goto L_803CE0C0; } // 803CE070
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 803CE074
  c->r[4]=0u+0x000000FFu; // 803CE078
  c->r[3]=c->r[22]|c->r[22]; // 803CE07C
  c->r[5]=0u+0x000000FFu; // 803CE080
  c->r[6]=0u+0x00000004u; // 803CE084
  c->lr=0x803CE08Cu; f_80287C44(c); // 803CE088
  c->r[3]=c->r[22]|c->r[22]; // 803CE08C
  c->r[4]=0u+0x0000000Fu; // 803CE090
  c->r[5]=0u+0x00000000u; // 803CE094
  c->r[6]=0u+0x0000000Au; // 803CE098
  c->r[7]=0u+0x0000000Fu; // 803CE09C
  c->lr=0x803CE0A4u; f_802877D8(c); // 803CE0A0
  c->r[3]=c->r[22]|c->r[22]; // 803CE0A4
  c->r[4]=0u+0x00000007u; // 803CE0A8
  c->r[5]=0u+0x00000000u; // 803CE0AC
  c->r[6]=0u+0x00000005u; // 803CE0B0
  c->r[7]=0u+0x00000007u; // 803CE0B4
  c->lr=0x803CE0BCu; f_80287818(c); // 803CE0B8
  c->r[28]=c->r[28]+0x00000001u; // 803CE0BC
L_803CE0C0:;
  c->r[22]=rotl(c->r[28],0)&0x000000FFu; // 803CE0C0
  c->r[23]=0u+0x00000000u; // 803CE0C4
  goto L_803CE124; // 803CE0C8
L_803CE0CC:;
  c->r[24]=rotl(c->r[23],0)&0x000000FFu; // 803CE0CC
  c->r[4]=0u+0x00000000u; // 803CE0D0
  c->r[3]=c->r[24]|c->r[24]; // 803CE0D4
  c->r[5]=0u+0x00000000u; // 803CE0D8
  c->r[6]=0u+0x00000000u; // 803CE0DC
  c->r[7]=0u+0x00000001u; // 803CE0E0
  c->r[8]=0u+0x00000000u; // 803CE0E4
  c->lr=0x803CE0ECu; f_80287858(c); // 803CE0E8
  c->r[3]=c->r[24]|c->r[24]; // 803CE0EC
  c->r[4]=0u+0x00000000u; // 803CE0F0
  c->r[5]=0u+0x00000000u; // 803CE0F4
  c->r[6]=0u+0x00000000u; // 803CE0F8
  c->r[7]=0u+0x00000001u; // 803CE0FC
  c->r[8]=0u+0x00000000u; // 803CE100
  c->lr=0x803CE108u; f_802878B0(c); // 803CE104
  c->r[3]=c->r[24]|c->r[24]; // 803CE108
  c->lr=0x803CE110u; f_80287650(c); // 803CE10C
  c->r[3]=c->r[24]|c->r[24]; // 803CE110
  c->r[4]=0u+0x00000000u; // 803CE114
  c->r[5]=0u+0x00000000u; // 803CE118
  c->lr=0x803CE120u; f_80287AC8(c); // 803CE11C
  c->r[23]=c->r[23]+0x00000001u; // 803CE120
L_803CE124:;
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; // 803CE124
  cmpu(c,0,c->r[0],c->r[22]); // 803CE128
  if (crb(c,0)) { IRQCHK(c); goto L_803CE0CC; } // 803CE12C
  c->r[3]=c->r[22]|c->r[22]; // 803CE130
  c->lr=0x803CE138u; f_80287DA0(c); // 803CE134
L_803CE138:;
  cmps(c,0,(int32_t)c->r[27],0); // 803CE138
  if (crb(c,2)) { goto L_803CE23C; } // 803CE13C
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 803CE140
  c->r[3]=0u+0x803F0000u; // 803CE144
  {uint32_t ea=c->r[3]+0x00000E64u; c->f[30]=c->ps1[30]=RF32(ea);} // 803CE148
  c->r[31]=c->r[1]+0x0000002Cu; // 803CE14C
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 803CE150
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 803CE154
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CE158
  c->r[4]=rotl(c->r[9],26)&0x00000004u; // 803CE15C
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 803CE160
  c->r[11]=R32(c->r[26]+0x00000058u); // 803CE164
  c->r[6]=rotl(c->r[9],27)&0x00000004u; // 803CE168
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 803CE16C
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 803CE170
  c->r[10]=rotl(c->r[9],19)&0x0000001Cu; // 803CE174
  c->r[3]=c->r[3]+c->r[0]; // 803CE178
  c->r[9]=rotl(c->r[9],29)&0x00000004u; // 803CE17C
  c->r[0]=c->r[10]+c->r[9]; // 803CE180
  c->r[6]=c->r[7]+c->r[6]; // 803CE184
  c->r[4]=c->r[8]+c->r[4]; // 803CE188
  c->r[3]=c->r[5]+c->r[3]; // 803CE18C
  c->r[4]=c->r[6]+c->r[4]; // 803CE190
  c->r[0]=c->r[11]+c->r[0]; // 803CE194
  c->r[3]=c->r[4]+c->r[3]; // 803CE198
  c->r[27]=0u+0x00000000u; // 803CE19C
  c->r[24]=c->r[3]+c->r[0]; // 803CE1A0
  goto L_803CE22C; // 803CE1A4
L_803CE1A8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 803CE1A8
  cmps(c,0,(int32_t)c->r[0],0); // 803CE1AC
  if (crb(c,2)) { goto L_803CE220; } // 803CE1B0
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE1B4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 803CE1B8
  c->lr=0x803CE1C0u; f_803D3790(c); // 803CE1BC
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE1C0
  c->f[31]=c->f[1]; // 803CE1C4
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[0]); // 803CE1C8
  c->lr=0x803CE1D0u; f_803D371C(c); // 803CE1CC
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE1D0
  c->f[2]=-c->f[1]; // 803CE1D4
  c->r[3]=c->r[27]+0x00000001u; // 803CE1D8
  c->r[4]=c->r[1]+0x00000068u; // 803CE1DC
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 803CE1E0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 803CE1E4
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE1E8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803CE1EC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 803CE1F0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE1F4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 803CE1F8
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE1FC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803CE200
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 803CE204
  {uint32_t ea=c->r[24]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE208
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 803CE20C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 803CE210
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE214
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 803CE218
  c->lr=0x803CE220u; f_803CB3B8(c); // 803CE21C
L_803CE220:;
  c->r[31]=c->r[31]+0x00000001u; // 803CE220
  c->r[24]=c->r[24]+0x00000014u; // 803CE224
  c->r[27]=c->r[27]+0x00000001u; // 803CE228
L_803CE22C:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CE22C
  c->r[0]=rotl(c->r[0],14)&0x00000003u; // 803CE230
  cmpu(c,0,c->r[27],c->r[0]); // 803CE234
  if (crb(c,0)) { IRQCHK(c); goto L_803CE1A8; } // 803CE238
L_803CE23C:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CE23C
  c->r[3]=rotl(c->r[0],17)&0x00000007u; // 803CE240
  c->lr=0x803CE248u; f_80287630(c); // 803CE244
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CE248
  c->r[0]=rotl(c->r[0],17)&0x00000007u; cr0(c,c->r[0]); // 803CE24C
  if (crb(c,2)) { goto L_803CE2E0; } // 803CE250
  c->r[9]=R32(c->r[26]+0x0000004Cu); // 803CE254
  c->r[27]=0u+0x00000000u; // 803CE258
  c->r[10]=R32(c->r[26]+0x00000058u); // 803CE25C
  c->r[0]=rotl(c->r[9],8)&0x0000000Fu; // 803CE260
  c->r[8]=rotl(c->r[9],28)&0x00000004u; // 803CE264
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803CE268
  c->r[6]=rotl(c->r[9],26)&0x00000004u; // 803CE26C
  c->r[7]=rotl(c->r[9],20)&0x00000004u; // 803CE270
  c->r[5]=rotl(c->r[9],27)&0x00000004u; // 803CE274
  c->r[3]=rotl(c->r[9],14)&0x0000003Cu; // 803CE278
  c->r[0]=rotl(c->r[9],9)&0x000001E0u; // 803CE27C
  c->r[0]=c->r[3]+c->r[0]; // 803CE280
  c->r[5]=c->r[7]+c->r[5]; // 803CE284
  c->r[3]=c->r[8]+c->r[6]; // 803CE288
  c->r[6]=rotl(c->r[9],29)&0x00000004u; // 803CE28C
  c->r[3]=c->r[5]+c->r[3]; // 803CE290
  c->r[0]=c->r[4]+c->r[0]; // 803CE294
  c->r[3]=c->r[6]+c->r[3]; // 803CE298
  c->r[0]=c->r[10]+c->r[0]; // 803CE29C
  c->r[24]=c->r[3]+c->r[0]; // 803CE2A0
  goto L_803CE2D0; // 803CE2A4
L_803CE2A8:;
  c->r[4]=R8(c->r[24]+0x00000000u); // 803CE2A8
  c->r[3]=c->r[27]|c->r[27]; // 803CE2AC
  c->r[5]=R8(c->r[24]+0x00000001u); // 803CE2B0
  c->lr=0x803CE2B8u; f_80287564(c); // 803CE2B4
  c->r[4]=R8(c->r[24]+0x00000002u); // 803CE2B8
  c->r[3]=c->r[27]|c->r[27]; // 803CE2BC
  c->r[5]=R8(c->r[24]+0x00000003u); // 803CE2C0
  c->lr=0x803CE2C8u; f_80287460(c); // 803CE2C4
  c->r[24]=c->r[24]+0x00000004u; // 803CE2C8
  c->r[27]=c->r[27]+0x00000001u; // 803CE2CC
L_803CE2D0:;
  c->r[0]=R32(c->r[26]+0x00000050u); // 803CE2D0
  c->r[0]=rotl(c->r[0],17)&0x00000007u; // 803CE2D4
  cmpu(c,0,c->r[27],c->r[0]); // 803CE2D8
  if (crb(c,0)) { IRQCHK(c); goto L_803CE2A8; } // 803CE2DC
L_803CE2E0:;
  c->r[7]=R32(c->r[26]+0x0000004Cu); // 803CE2E0
  c->r[0]=rotl(c->r[7],26)&0x00000001u; cr0(c,c->r[0]); // 803CE2E4
  if (crb(c,2)) { goto L_803CE344; } // 803CE2E8
  c->r[5]=rotl(c->r[7],20)&0x00000004u; // 803CE2EC
  c->r[0]=rotl(c->r[7],27)&0x00000004u; // 803CE2F0
  c->r[0]=c->r[5]+c->r[0]; // 803CE2F4
  c->r[4]=rotl(c->r[7],26)&0x00000004u; // 803CE2F8
  c->r[3]=rotl(c->r[7],8)&0x0000000Fu; // 803CE2FC
  c->r[6]=rotl(c->r[7],14)&0x0000003Cu; // 803CE300
  c->r[0]=c->r[4]+c->r[0]; // 803CE304
  c->r[5]=rotl(c->r[7],9)&0x000001E0u; // 803CE308
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 803CE30C
  c->r[7]=R32(c->r[26]+0x00000058u); // 803CE310
  c->r[3]=c->r[6]+c->r[5]; // 803CE314
  c->r[0]=c->r[7]+c->r[0]; // 803CE318
  c->r[3]=c->r[4]+c->r[3]; // 803CE31C
  c->r[6]=c->r[3]+c->r[0]; // 803CE320
  c->r[0]=R8(c->r[3]+c->r[0]); // 803CE324
  c->r[4]=R8(c->r[6]+0x00000002u); // 803CE328
  c->r[5]=R8(c->r[6]+0x00000001u); // 803CE32C
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 803CE330
  c->r[7]=R8(c->r[6]+0x00000003u); // 803CE334
  c->r[6]=rotl(c->r[0],28)&0x0000000Fu; // 803CE338
  c->lr=0x803CE340u; f_80287B80(c); // 803CE33C
  goto L_803CE35C; // 803CE340
L_803CE344:;
  c->r[3]=0u+0x00000007u; // 803CE344
  c->r[4]=0u+0x00000000u; // 803CE348
  c->r[5]=0u+0x00000000u; // 803CE34C
  c->r[6]=0u+0x00000007u; // 803CE350
  c->r[7]=0u+0x00000000u; // 803CE354
  c->lr=0x803CE35Cu; f_80287B80(c); // 803CE358
L_803CE35C:;
  c->r[3]=R32(c->r[26]+0x0000004Cu); // 803CE35C
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 803CE360
  if (crb(c,2)) { goto L_803CE3C0; } // 803CE364
  c->r[4]=rotl(c->r[3],8)&0x0000000Fu; // 803CE368
  c->r[8]=rotl(c->r[3],28)&0x00000004u; // 803CE36C
  c->r[0]=rotl(c->r[3],26)&0x00000004u; // 803CE370
  c->r[7]=rotl(c->r[3],20)&0x00000004u; // 803CE374
  c->r[6]=rotl(c->r[3],27)&0x00000004u; // 803CE378
  c->r[5]=rotl(c->r[3],14)&0x0000003Cu; // 803CE37C
  c->r[3]=rotl(c->r[3],9)&0x000001E0u; // 803CE380
  c->r[0]=c->r[8]+c->r[0]; // 803CE384
  c->r[6]=c->r[7]+c->r[6]; // 803CE388
  c->r[7]=R32(c->r[26]+0x00000058u); // 803CE38C
  c->r[0]=c->r[6]+c->r[0]; // 803CE390
  c->r[3]=c->r[5]+c->r[3]; // 803CE394
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 803CE398
  c->r[0]=c->r[7]+c->r[0]; // 803CE39C
  c->r[3]=c->r[4]+c->r[3]; // 803CE3A0
  c->r[6]=c->r[3]+c->r[0]; // 803CE3A4
  c->r[3]=R8(c->r[3]+c->r[0]); // 803CE3A8
  c->r[4]=R8(c->r[6]+0x00000001u); // 803CE3AC
  c->r[5]=R8(c->r[6]+0x00000002u); // 803CE3B0
  c->r[6]=R8(c->r[6]+0x00000003u); // 803CE3B4
  c->lr=0x803CE3BCu; f_80288274(c); // 803CE3B8
  goto L_803CE3D4; // 803CE3BC
L_803CE3C0:;
  c->r[3]=0u+0x00000001u; // 803CE3C0
  c->r[4]=0u+0x00000004u; // 803CE3C4
  c->r[5]=0u+0x00000005u; // 803CE3C8
  c->r[6]=0u+0x0000000Fu; // 803CE3CC
  c->lr=0x803CE3D4u; f_80288274(c); // 803CE3D0
L_803CE3D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 803CE3D4
  c->r[3]=0u+0x00000000u; // 803CE3D8
  if (crb(c,2)) { goto L_803CE3EC; } // 803CE3DC
  cmps(c,0,(int32_t)c->r[30],0); // 803CE3E0
  if (crb(c,2)) { goto L_803CE3EC; } // 803CE3E4
  c->r[3]=0u+0x00000001u; // 803CE3E8
L_803CE3EC:;
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 803CE3EC
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 803CE3F0
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 803CE3F4
  c->r[11]=c->r[1]+0x00000100u; // 803CE3F8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 803CE3FC
  c->lr=0x803CE404u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CE400
  c->r[0]=R32(c->r[1]+0x00000124u); // 803CE404
  c->lr=c->r[0]; // 803CE408
  c->r[1]=c->r[1]+0x00000120u; // 803CE40C
  return; // 803CE410
}

// fn_803CE414
void f_803CE414(Ctx* __restrict c) {
  trace_call(0x803CE414u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 803CE414
  c->r[0]=c->r[3]|c->r[3]; // 803CE418
  c->r[3]=c->r[4]|c->r[4]; // 803CE41C
  c->r[12]=R32(c->r[12]+0x00000014u); // 803CE420
  c->r[4]=c->r[0]|c->r[0]; // 803CE424
  c->ctr=c->r[12]; // 803CE428
  if (true) { dispatch(c,c->ctr); return; } // 803CE42C
}

// fn_803CE430
void f_803CE430(Ctx* __restrict c) {
  trace_call(0x803CE430u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE430
  c->r[0]=c->lr; // 803CE434
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CE438
  c->r[11]=c->r[1]+0x00000030u; // 803CE43C
  c->lr=0x803CE444u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CE440
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 803CE444
  c->r[26]=c->r[3]|c->r[3]; // 803CE448
  c->r[27]=c->r[4]|c->r[4]; // 803CE44C
  c->r[30]=c->r[3]+0x0000001Cu; // 803CE450
  c->r[29]=0u+0x00000000u; // 803CE454
  goto L_803CE490; // 803CE458
L_803CE45C:;
  cmps(c,0,(int32_t)c->r[27],0); // 803CE45C
  c->r[28]=c->r[31]|c->r[31]; // 803CE460
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CE464
  if (crb(c,2)) { goto L_803CE478; } // 803CE468
  c->r[0]=R32(c->r[28]+0x00000008u); // 803CE46C
  cmpu(c,0,c->r[0],c->r[27]); // 803CE470
  if (!crb(c,2)) { goto L_803CE490; } // 803CE474
L_803CE478:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 803CE478
  c->r[3]=c->r[26]+0x00000018u; // 803CE47C
  c->r[4]=c->r[1]+0x00000008u; // 803CE480
  c->lr=0x803CE488u; f_803D5740(c); // 803CE484
  W32(c->r[28]+0x00000008u,c->r[29]); // 803CE488
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 803CE48C
L_803CE490:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CE490
  if (!crb(c,2)) { IRQCHK(c); goto L_803CE45C; } // 803CE494
  c->r[11]=c->r[1]+0x00000030u; // 803CE498
  c->lr=0x803CE4A0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CE49C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CE4A0
  c->lr=c->r[0]; // 803CE4A4
  c->r[1]=c->r[1]+0x00000030u; // 803CE4A8
  return; // 803CE4AC
}

// fn_803CE4B0
void f_803CE4B0(Ctx* __restrict c) {
  trace_call(0x803CE4B0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CE4B0
  c->r[4]=0u+0x00000000u; // 803CE4B4
  c->r[12]=R32(c->r[12]+0x00000014u); // 803CE4B8
  c->ctr=c->r[12]; // 803CE4BC
  if (true) { dispatch(c,c->ctr); return; } // 803CE4C0
}

// fn_803CE4C4
void f_803CE4C4(Ctx* __restrict c) {
  trace_call(0x803CE4C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE4C4
  c->r[0]=c->lr; // 803CE4C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CE4CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CE4D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CE4D4
  c->r[30]=c->r[3]+0x0000001Cu; // 803CE4D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CE4DC
  c->r[29]=c->r[3]|c->r[3]; // 803CE4E0
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 803CE4E4
  goto L_803CE518; // 803CE4E8
L_803CE4EC:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 803CE4EC
  cmps(c,0,(int32_t)c->r[0],0); // 803CE4F0
  if (!crb(c,2)) { goto L_803CE514; } // 803CE4F4
  c->r[3]=R32(c->r[31]+0x00000008u); // 803CE4F8
  c->r[5]=c->r[29]|c->r[29]; // 803CE4FC
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 803CE500
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CE504
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803CE508
  c->ctr=c->r[12]; // 803CE50C
  if (true) { c->lr=0x803CE514u; dispatch(c,c->ctr); } // 803CE510
L_803CE514:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CE514
L_803CE518:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CE518
  if (!crb(c,2)) { IRQCHK(c); goto L_803CE4EC; } // 803CE51C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CE520
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CE524
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CE528
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CE52C
  c->lr=c->r[0]; // 803CE530
  c->r[1]=c->r[1]+0x00000020u; // 803CE534
  return; // 803CE538
}

// fn_803CE53C
void f_803CE53C(Ctx* __restrict c) {
  trace_call(0x803CE53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE53C
  c->r[0]=c->lr; // 803CE540
  c->r[5]=c->r[4]|c->r[4]; // 803CE544
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CE548
  c->r[0]=c->r[3]+0x0000001Cu; // 803CE54C
  c->r[3]=c->r[3]+0x00000018u; // 803CE550
  c->r[4]=c->r[1]+0x00000008u; // 803CE554
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CE558
  c->lr=0x803CE560u; f_803D5788(c); // 803CE55C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CE560
  c->lr=c->r[0]; // 803CE564
  c->r[1]=c->r[1]+0x00000010u; // 803CE568
  return; // 803CE56C
}

// fn_803CE570
void f_803CE570(Ctx* __restrict c) {
  trace_call(0x803CE570u);
  c->r[3]=c->r[3]+0x00000018u; // 803CE570
  f_803C8ED4(c); return; // 803CE574
}

// fn_803CE578
void f_803CE578(Ctx* __restrict c) {
  trace_call(0x803CE578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE578
  c->r[0]=c->lr; // 803CE57C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CE580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CE584
  c->r[31]=c->r[5]|c->r[5]; // 803CE588
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CE58C
  c->r[12]=R32(c->r[12]+0x00000020u); // 803CE590
  c->ctr=c->r[12]; // 803CE594
  if (true) { c->lr=0x803CE59Cu; dispatch(c,c->ctr); } // 803CE598
  cmps(c,0,(int32_t)c->r[3],0); // 803CE59C
  if (crb(c,2)) { goto L_803CE5B0; } // 803CE5A0
  c->r[0]=cntlz(c->r[31]); // 803CE5A4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 803CE5A8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 803CE5AC
L_803CE5B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CE5B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CE5B4
  c->lr=c->r[0]; // 803CE5B8
  c->r[1]=c->r[1]+0x00000010u; // 803CE5BC
  return; // 803CE5C0
}

// GetTextureSize__Q36nw4hbm3lyt6detailFPQ36nw4hbm3lyt8MaterialUc
void f_803CE5C4(Ctx* __restrict c) {
  trace_call(0x803CE5C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE5C4
  c->r[0]=c->lr; // 803CE5C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 803CE5CC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803CE5D0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803CE5D4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 803CE5D8
  c->r[31]=c->r[3]|c->r[3]; // 803CE5DC
  W32(c->r[1]+0x00000048u,c->r[30]); // 803CE5E0
  W32(c->r[1]+0x00000044u,c->r[29]); // 803CE5E4
  c->r[0]=R32(c->r[4]+0x00000050u); // 803CE5E8
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 803CE5EC
  cmpu(c,0,c->r[5],c->r[0]); // 803CE5F0
  if (crb(c,0)) { goto L_803CE60C; } // 803CE5F4
  c->r[4]=0u+0x803F0000u; // 803CE5F8
  {uint32_t ea=c->r[4]+0x00000E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE5FC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 803CE600
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 803CE604
  goto L_803CE6B0; // 803CE608
L_803CE60C:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803CE60C
  c->r[6]=R32(c->r[4]+0x00000058u); // 803CE610
  {uint32_t ea=c->r[6]+c->r[0]; c->r[5]=R32(ea); c->r[6]=ea;} // 803CE614
  c->r[3]=c->r[1]+0x00000008u; // 803CE618
  c->r[4]=0u+0x00000000u; // 803CE61C
  c->r[0]=R32(c->r[6]+0x00000004u); // 803CE620
  W32(c->r[1]+0x00000008u,c->r[5]); // 803CE624
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803CE628
  c->r[5]=R32(c->r[6]+0x00000008u); // 803CE62C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 803CE630
  W32(c->r[1]+0x00000010u,c->r[5]); // 803CE634
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CE638
  c->r[5]=R32(c->r[6]+0x00000010u); // 803CE63C
  c->r[0]=R32(c->r[6]+0x00000014u); // 803CE640
  W32(c->r[1]+0x00000018u,c->r[5]); // 803CE644
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803CE648
  c->r[5]=R32(c->r[6]+0x00000018u); // 803CE64C
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 803CE650
  W32(c->r[1]+0x00000020u,c->r[5]); // 803CE654
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CE658
  c->lr=0x803CE660u; f_80286850(c); // 803CE65C
  c->r[3]=c->r[1]+0x00000008u; // 803CE660
  c->lr=0x803CE668u; f_80286874(c); // 803CE664
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 803CE668
  c->r[30]=0u+0x43300000u; // 803CE66C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 803CE670
  c->r[29]=0u+0x803F0000u; // 803CE674
  {uint32_t ea=c->r[29]+0x00000E78u; c->f[1]=RF64(ea);} // 803CE678
  c->r[3]=c->r[1]+0x00000008u; // 803CE67C
  W32(c->r[1]+0x00000028u,c->r[30]); // 803CE680
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 803CE684
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 803CE688
  c->lr=0x803CE690u; f_80286860(c); // 803CE68C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 803CE690
  W32(c->r[1]+0x00000030u,c->r[30]); // 803CE694
  {uint32_t ea=c->r[29]+0x00000E78u; c->f[1]=RF64(ea);} // 803CE698
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CE69C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803CE6A0
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[31]);} // 803CE6A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803CE6A8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 803CE6AC
L_803CE6B0:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 803CE6B0
  c->r[0]=R32(c->r[1]+0x00000064u); // 803CE6B4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 803CE6B8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 803CE6BC
  c->r[30]=R32(c->r[1]+0x00000048u); // 803CE6C0
  c->r[29]=R32(c->r[1]+0x00000044u); // 803CE6C4
  c->lr=c->r[0]; // 803CE6C8
  c->r[1]=c->r[1]+0x00000060u; // 803CE6CC
  return; // 803CE6D0
}

// __ct__Q36nw4hbm3lyt4PaneFPCQ46nw4hbm3lyt3res4Pane
void f_803CE6D4(Ctx* __restrict c) {
  trace_call(0x803CE6D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE6D4
  c->r[0]=c->lr; // 803CE6D8
  c->r[5]=0u+0x803F0000u; // 803CE6DC
  c->r[6]=0u+0x80440000u; // 803CE6E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CE6E4
  c->r[7]=0u+0x00000000u; // 803CE6E8
  {uint32_t ea=c->r[5]+0x00000E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE6EC
  c->r[8]=c->r[3]+0x00000014u; // 803CE6F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CE6F4
  c->r[9]=c->r[3]+0x00000020u; // 803CE6F8
  c->r[0]=R8(c->r[4]+0x00000009u); // 803CE6FC
  c->r[31]=c->r[4]|c->r[4]; // 803CE700
  W32(c->r[1]+0x00000008u,c->r[30]); // 803CE704
  c->r[6]=c->r[6]+0xFFFF9038u; // 803CE708
  c->r[30]=c->r[3]|c->r[3]; // 803CE70C
  c->r[5]=0u+0x00000010u; // 803CE710
  W32(c->r[3]+0x00000014u,c->r[7]); // 803CE714
  c->r[4]=c->r[4]+0x0000000Cu; // 803CE718
  W32(c->r[3]+0x00000018u,c->r[7]); // 803CE71C
  W32(c->r[3]+0x00000020u,c->r[7]); // 803CE720
  W32(c->r[3]+0x00000024u,c->r[7]); // 803CE724
  W32(c->r[3]+0x00000004u,c->r[7]); // 803CE728
  W32(c->r[3]+0x00000008u,c->r[7]); // 803CE72C
  W32(c->r[3]+0x00000000u,c->r[6]); // 803CE730
  W32(c->r[3]+0x00000010u,c->r[7]); // 803CE734
  W32(c->r[3]+0x00000014u,c->r[8]); // 803CE738
  W32(c->r[3]+0x00000018u,c->r[8]); // 803CE73C
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 803CE740
  W32(c->r[3]+0x00000020u,c->r[9]); // 803CE744
  W32(c->r[3]+0x00000024u,c->r[9]); // 803CE748
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 803CE74C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 803CE750
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 803CE754
  W32(c->r[3]+0x00000028u,c->r[7]); // 803CE758
  W8(c->r[3]+0x000000D0u,c->r[7]); // 803CE75C
  W8(c->r[3]+0x000000CCu,c->r[0]); // 803CE760
  c->r[3]=c->r[3]+0x000000B4u; // 803CE764
  c->lr=0x803CE76Cu; f_80293498(c); // 803CE768
  c->r[3]=c->r[30]+0x000000C4u; // 803CE76C
  c->r[4]=c->r[31]+0x0000001Cu; // 803CE770
  c->r[5]=0u+0x00000008u; // 803CE774
  c->lr=0x803CE77Cu; f_80293498(c); // 803CE778
  c->r[4]=R8(c->r[31]+0x0000000Au); // 803CE77C
  c->r[3]=c->r[30]|c->r[30]; // 803CE780
  {uint32_t ea=c->r[31]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 803CE784
  {uint32_t ea=c->r[31]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 803CE788
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 803CE78C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 803CE790
  {uint32_t ea=c->r[31]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 803CE794
  {uint32_t ea=c->r[31]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 803CE798
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803CE79C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CE7A0
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CE7A4
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE7A8
  c->r[0]=R8(c->r[31]+0x00000008u); // 803CE7AC
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[9]);} // 803CE7B0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[8]);} // 803CE7B4
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[7]);} // 803CE7B8
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[6]);} // 803CE7BC
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[5]);} // 803CE7C0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[4]);} // 803CE7C4
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[3]);} // 803CE7C8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 803CE7CC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 803CE7D0
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 803CE7D4
  W8(c->r[30]+0x000000CDu,c->r[4]); // 803CE7D8
  W8(c->r[30]+0x000000CEu,c->r[4]); // 803CE7DC
  W8(c->r[30]+0x000000CFu,c->r[0]); // 803CE7E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CE7E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803CE7E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CE7EC
  c->lr=c->r[0]; // 803CE7F0
  c->r[1]=c->r[1]+0x00000010u; // 803CE7F4
  return; // 803CE7F8
}

// __dt__Q36nw4hbm3lyt4PaneFv
void f_803CE7FC(Ctx* __restrict c) {
  trace_call(0x803CE7FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE7FC
  c->r[0]=c->lr; // 803CE800
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CE804
  c->r[11]=c->r[1]+0x00000030u; // 803CE808
  c->lr=0x803CE810u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CE80C
  cmps(c,0,(int32_t)c->r[3],0); // 803CE810
  c->r[26]=c->r[3]|c->r[3]; // 803CE814
  c->r[27]=c->r[4]|c->r[4]; // 803CE818
  if (crb(c,2)) { goto L_803CE914; } // 803CE81C
  c->r[4]=0u+0x80440000u; // 803CE820
  c->r[31]=R32(c->r[3]+0x00000014u); // 803CE824
  c->r[4]=c->r[4]+0xFFFF9038u; // 803CE828
  c->r[30]=c->r[3]+0x00000014u; // 803CE82C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CE830
  c->r[29]=0u+0x806C0000u; // 803CE834
  goto L_803CE888; // 803CE838
L_803CE83C:;
  c->r[28]=c->r[31]|c->r[31]; // 803CE83C
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CE840
  c->r[3]=c->r[26]+0x00000010u; // 803CE844
  c->r[4]=c->r[1]+0x00000008u; // 803CE848
  W32(c->r[1]+0x00000008u,c->r[28]); // 803CE84C
  c->lr=0x803CE854u; f_803D5740(c); // 803CE850
  c->r[0]=R8(c->r[28]+0x000000CCu); // 803CE854
  cmps(c,0,(int32_t)c->r[0],0); // 803CE858
  if (!crb(c,2)) { goto L_803CE888; } // 803CE85C
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 803CE860
  c->r[4]=0u+0xFFFFFFFFu; // 803CE864
  c->r[12]=R32(c->r[28]+0x00000000u); // 803CE868
  c->r[3]=c->r[28]|c->r[28]; // 803CE86C
  c->r[12]=R32(c->r[12]+0x00000008u); // 803CE870
  c->ctr=c->r[12]; // 803CE874
  if (true) { c->lr=0x803CE87Cu; dispatch(c,c->ctr); } // 803CE878
  c->r[3]=R32(c->r[29]+0x000025A8u); // 803CE87C
  c->r[4]=c->r[28]|c->r[28]; // 803CE880
  c->lr=0x803CE888u; f_802A704C(c); // 803CE884
L_803CE888:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CE888
  if (!crb(c,2)) { IRQCHK(c); goto L_803CE83C; } // 803CE88C
  c->r[12]=R32(c->r[26]+0x00000000u); // 803CE890
  c->r[3]=c->r[26]|c->r[26]; // 803CE894
  c->r[4]=0u+0x00000000u; // 803CE898
  c->r[12]=R32(c->r[12]+0x00000050u); // 803CE89C
  c->ctr=c->r[12]; // 803CE8A0
  if (true) { c->lr=0x803CE8A8u; dispatch(c,c->ctr); } // 803CE8A4
  c->r[3]=R32(c->r[26]+0x00000028u); // 803CE8A8
  cmps(c,0,(int32_t)c->r[3],0); // 803CE8AC
  if (crb(c,2)) { goto L_803CE8E4; } // 803CE8B0
  c->r[0]=R8(c->r[3]+0x00000054u); // 803CE8B4
  cmps(c,0,(int32_t)c->r[0],0); // 803CE8B8
  if (!crb(c,2)) { goto L_803CE8E4; } // 803CE8BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CE8C0
  c->r[4]=0u+0xFFFFFFFFu; // 803CE8C4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803CE8C8
  c->ctr=c->r[12]; // 803CE8CC
  if (true) { c->lr=0x803CE8D4u; dispatch(c,c->ctr); } // 803CE8D0
  c->r[3]=0u+0x806C0000u; // 803CE8D4
  c->r[4]=R32(c->r[26]+0x00000028u); // 803CE8D8
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CE8DC
  c->lr=0x803CE8E4u; f_802A704C(c); // 803CE8E0
L_803CE8E4:;
  c->r[3]=addc(c,c->r[26],0x0000001Cu,0); cr0(c,c->r[3]); // 803CE8E4
  if (crb(c,2)) { goto L_803CE8F4; } // 803CE8E8
  c->r[4]=0u+0x00000000u; // 803CE8EC
  c->lr=0x803CE8F4u; f_803D56BC(c); // 803CE8F0
L_803CE8F4:;
  c->r[3]=addc(c,c->r[26],0x00000010u,0); cr0(c,c->r[3]); // 803CE8F4
  if (crb(c,2)) { goto L_803CE904; } // 803CE8F8
  c->r[4]=0u+0x00000000u; // 803CE8FC
  c->lr=0x803CE904u; f_803D56BC(c); // 803CE900
L_803CE904:;
  cmps(c,0,(int32_t)c->r[27],0); // 803CE904
  if (!crb(c,1)) { goto L_803CE914; } // 803CE908
  c->r[3]=c->r[26]|c->r[26]; // 803CE90C
  c->lr=0x803CE914u; f_802896EC(c); // 803CE910
L_803CE914:;
  c->r[11]=c->r[1]+0x00000030u; // 803CE914
  c->r[3]=c->r[26]|c->r[26]; // 803CE918
  c->lr=0x803CE920u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CE91C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CE920
  c->lr=c->r[0]; // 803CE924
  c->r[1]=c->r[1]+0x00000030u; // 803CE928
  return; // 803CE92C
}

// AppendChild__Q36nw4hbm3lyt4PaneFPQ36nw4hbm3lyt4Pane
void f_803CE930(Ctx* __restrict c) {
  trace_call(0x803CE930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE930
  c->r[0]=c->lr; // 803CE934
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CE938
  c->r[0]=c->r[3]+0x00000014u; // 803CE93C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CE940
  c->r[31]=c->r[4]|c->r[4]; // 803CE944
  c->r[4]=c->r[1]+0x00000008u; // 803CE948
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CE94C
  c->r[30]=c->r[3]|c->r[3]; // 803CE950
  c->r[3]=c->r[3]+0x00000010u; // 803CE954
  c->r[5]=c->r[31]+0x00000004u; // 803CE958
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CE95C
  c->lr=0x803CE964u; f_803D5788(c); // 803CE960
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 803CE964
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CE968
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CE96C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CE970
  c->lr=c->r[0]; // 803CE974
  c->r[1]=c->r[1]+0x00000020u; // 803CE978
  return; // 803CE97C
}

// GetPaneRect__Q36nw4hbm3lyt4PaneCFRCQ36nw4hbm3lyt8DrawInfo
void f_803CE980(Ctx* __restrict c) {
  trace_call(0x803CE980u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CE980
  c->r[0]=c->lr; // 803CE984
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CE988
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803CE98C
  c->r[31]=0u+0x803F0000u; // 803CE990
  {uint32_t ea=c->r[31]+0x00000E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE994
  W32(c->r[1]+0x00000028u,c->r[30]); // 803CE998
  c->r[30]=c->r[5]|c->r[5]; // 803CE99C
  W32(c->r[1]+0x00000024u,c->r[29]); // 803CE9A0
  c->r[29]=c->r[4]|c->r[4]; // 803CE9A4
  W32(c->r[1]+0x00000020u,c->r[28]); // 803CE9A8
  c->r[28]=c->r[3]|c->r[3]; // 803CE9AC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 803CE9B0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 803CE9B4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 803CE9B8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CE9BC
  c->r[3]=c->r[29]|c->r[29]; // 803CE9C0
  c->lr=0x803CE9C8u; f_803CF530(c); // 803CE9C4
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CE9C8
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE9CC
  W32(c->r[1]+0x00000010u,c->r[3]); // 803CE9D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803CE9D4
  {uint32_t ea=c->r[31]+0x00000E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE9D8
  W32(c->r[1]+0x00000014u,c->r[4]); // 803CE9DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803CE9E0
  fcmp(c,0,c->f[1],c->f[0]); // 803CE9E4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CE9E8
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CE9EC
  {uint32_t ea=c->r[29]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CE9F0
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803CE9F4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803CE9F8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803CE9FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 803CEA00
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[3]);} // 803CEA04
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[2]);} // 803CEA08
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 803CEA0C
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CEA10
  c->r[0]=c->cr; // 803CEA14
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803CEA18
  if (crb(c,2)) { goto L_803CEA30; } // 803CEA1C
  c->f[1]=-c->f[2]; // 803CEA20
  c->f[0]=-c->f[0]; // 803CEA24
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 803CEA28
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CEA2C
L_803CEA30:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CEA30
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803CEA34
  c->r[30]=R32(c->r[1]+0x00000028u); // 803CEA38
  c->r[29]=R32(c->r[1]+0x00000024u); // 803CEA3C
  c->r[28]=R32(c->r[1]+0x00000020u); // 803CEA40
  c->lr=c->r[0]; // 803CEA44
  c->r[1]=c->r[1]+0x00000030u; // 803CEA48
  return; // 803CEA4C
}

// fn_803CEA50
void f_803CEA50(Ctx* __restrict c) {
  trace_call(0x803CEA50u);
  c->r[0]=0u+0xFFFFFFFFu; // 803CEA50
  W32(c->r[3]+0x00000000u,c->r[0]); // 803CEA54
  return; // 803CEA58
}

// fn_803CEA5C
void f_803CEA5C(Ctx* __restrict c) {
  trace_call(0x803CEA5Cu);
  return; // 803CEA5C
}

// fn_803CEA60
void f_803CEA60(Ctx* __restrict c) {
  trace_call(0x803CEA60u);
  cmps(c,0,(int32_t)c->r[4],16); // 803CEA60
  if (crb(c,2)) { goto L_803CEA6C; } // 803CEA64
  goto L_803CEA74; // 803CEA68
L_803CEA6C:;
  c->r[3]=R8(c->r[3]+0x000000CDu); // 803CEA6C
  return; // 803CEA70
L_803CEA74:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CEA74
  c->r[12]=R32(c->r[12]+0x00000034u); // 803CEA78
  c->ctr=c->r[12]; // 803CEA7C
  if (true) { dispatch(c,c->ctr); return; } // 803CEA80
}

// fn_803CEA84
void f_803CEA84(Ctx* __restrict c) {
  trace_call(0x803CEA84u);
  return; // 803CEA84
}

// fn_803CEA88
void f_803CEA88(Ctx* __restrict c) {
  trace_call(0x803CEA88u);
  cmps(c,0,(int32_t)c->r[4],16); // 803CEA88
  if (crb(c,2)) { goto L_803CEA94; } // 803CEA8C
  goto L_803CEA9C; // 803CEA90
L_803CEA94:;
  W8(c->r[3]+0x000000CDu,c->r[5]); // 803CEA94
  return; // 803CEA98
L_803CEA9C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CEA9C
  c->r[12]=R32(c->r[12]+0x00000038u); // 803CEAA0
  c->ctr=c->r[12]; // 803CEAA4
  if (true) { dispatch(c,c->ctr); return; } // 803CEAA8
}

// fn_803CEAAC
void f_803CEAAC(Ctx* __restrict c) {
  trace_call(0x803CEAACu);
  return; // 803CEAAC
}

// fn_803CEAB0
void f_803CEAB0(Ctx* __restrict c) {
  trace_call(0x803CEAB0u);
  c->r[3]=0u+0x000000FFu; // 803CEAB0
  return; // 803CEAB4
}

// fn_803CEAB8
void f_803CEAB8(Ctx* __restrict c) {
  trace_call(0x803CEAB8u);
  return; // 803CEAB8
}

// fn_803CEABC
void f_803CEABC(Ctx* __restrict c) {
  trace_call(0x803CEABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEABC
  c->r[0]=c->lr; // 803CEAC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CEAC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CEAC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CEACC
  c->r[30]=c->r[5]|c->r[5]; // 803CEAD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CEAD4
  c->r[29]=c->r[4]|c->r[4]; // 803CEAD8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CEADC
  c->r[28]=c->r[3]|c->r[3]; // 803CEAE0
  c->r[3]=c->r[3]+0x000000B4u; // 803CEAE4
  c->lr=0x803CEAECu; f_803C93F8(c); // 803CEAE8
  cmps(c,0,(int32_t)c->r[3],0); // 803CEAEC
  if (crb(c,2)) { goto L_803CEAFC; } // 803CEAF0
  c->r[3]=c->r[28]|c->r[28]; // 803CEAF4
  goto L_803CEB48; // 803CEAF8
L_803CEAFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 803CEAFC
  if (crb(c,2)) { goto L_803CEB44; } // 803CEB00
  c->r[31]=R32(c->r[28]+0x00000014u); // 803CEB04
  c->r[30]=c->r[28]+0x00000014u; // 803CEB08
  goto L_803CEB3C; // 803CEB0C
L_803CEB10:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803CEB10
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803CEB14
  c->r[4]=c->r[29]|c->r[29]; // 803CEB18
  c->r[5]=0u+0x00000001u; // 803CEB1C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 803CEB20
  c->ctr=c->r[12]; // 803CEB24
  if (true) { c->lr=0x803CEB2Cu; dispatch(c,c->ctr); } // 803CEB28
  cmps(c,0,(int32_t)c->r[3],0); // 803CEB2C
  if (crb(c,2)) { goto L_803CEB38; } // 803CEB30
  goto L_803CEB48; // 803CEB34
L_803CEB38:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CEB38
L_803CEB3C:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CEB3C
  if (!crb(c,2)) { IRQCHK(c); goto L_803CEB10; } // 803CEB40
L_803CEB44:;
  c->r[3]=0u+0x00000000u; // 803CEB44
L_803CEB48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CEB48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CEB4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CEB50
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CEB54
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CEB58
  c->lr=c->r[0]; // 803CEB5C
  c->r[1]=c->r[1]+0x00000020u; // 803CEB60
  return; // 803CEB64
}

// fn_803CEB68
void f_803CEB68(Ctx* __restrict c) {
  trace_call(0x803CEB68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEB68
  c->r[0]=c->lr; // 803CEB6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CEB70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CEB74
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CEB78
  c->r[30]=c->r[5]|c->r[5]; // 803CEB7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CEB80
  c->r[29]=c->r[4]|c->r[4]; // 803CEB84
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CEB88
  c->r[28]=c->r[3]|c->r[3]; // 803CEB8C
  c->r[6]=R32(c->r[3]+0x00000028u); // 803CEB90
  cmps(c,0,(int32_t)c->r[6],0); // 803CEB94
  if (crb(c,2)) { goto L_803CEBB4; } // 803CEB98
  c->r[3]=c->r[6]+0x00000004u; // 803CEB9C
  c->lr=0x803CEBA4u; f_803C9424(c); // 803CEBA0
  cmps(c,0,(int32_t)c->r[3],0); // 803CEBA4
  if (crb(c,2)) { goto L_803CEBB4; } // 803CEBA8
  c->r[3]=R32(c->r[28]+0x00000028u); // 803CEBAC
  goto L_803CEC00; // 803CEBB0
L_803CEBB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803CEBB4
  if (crb(c,2)) { goto L_803CEBFC; } // 803CEBB8
  c->r[31]=R32(c->r[28]+0x00000014u); // 803CEBBC
  c->r[30]=c->r[28]+0x00000014u; // 803CEBC0
  goto L_803CEBF4; // 803CEBC4
L_803CEBC8:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803CEBC8
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803CEBCC
  c->r[4]=c->r[29]|c->r[29]; // 803CEBD0
  c->r[5]=0u+0x00000001u; // 803CEBD4
  c->r[12]=R32(c->r[12]+0x00000040u); // 803CEBD8
  c->ctr=c->r[12]; // 803CEBDC
  if (true) { c->lr=0x803CEBE4u; dispatch(c,c->ctr); } // 803CEBE0
  cmps(c,0,(int32_t)c->r[3],0); // 803CEBE4
  if (crb(c,2)) { goto L_803CEBF0; } // 803CEBE8
  goto L_803CEC00; // 803CEBEC
L_803CEBF0:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CEBF0
L_803CEBF4:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CEBF4
  if (!crb(c,2)) { IRQCHK(c); goto L_803CEBC8; } // 803CEBF8
L_803CEBFC:;
  c->r[3]=0u+0x00000000u; // 803CEBFC
L_803CEC00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CEC00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CEC04
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CEC08
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CEC0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CEC10
  c->lr=c->r[0]; // 803CEC14
  c->r[1]=c->r[1]+0x00000020u; // 803CEC18
  return; // 803CEC1C
}

// CalculateMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_803CEC20(Ctx* __restrict c) {
  trace_call(0x803CEC20u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEC20
  c->r[0]=c->lr; // 803CEC24
  W32(c->r[1]+0x000000E4u,c->r[0]); // 803CEC28
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 803CEC2C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 803CEC30
  c->r[11]=c->r[1]+0x000000D0u; // 803CEC34
  c->lr=0x803CEC3Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CEC38
  c->r[6]=R8(c->r[3]+0x000000CFu); // 803CEC3C
  c->r[31]=0u+0x803F0000u; // 803CEC40
  c->r[29]=c->r[3]|c->r[3]; // 803CEC44
  c->r[30]=c->r[4]|c->r[4]; // 803CEC48
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 803CEC4C
  c->r[31]=c->r[31]+0x00000E80u; // 803CEC50
  if (!crb(c,2)) { goto L_803CEC64; } // 803CEC54
  c->r[0]=R8(c->r[4]+0x00000050u); // 803CEC58
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 803CEC5C
  if (crb(c,2)) { goto L_803CEF00; } // 803CEC60
L_803CEC64:;
  c->r[0]=R8(c->r[4]+0x00000050u); // 803CEC64
  c->r[5]=R32(c->r[3]+0x00000044u); // 803CEC68
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 803CEC6C
  c->r[0]=R32(c->r[3]+0x00000048u); // 803CEC70
  W32(c->r[1]+0x00000008u,c->r[5]); // 803CEC74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803CEC78
  if (crb(c,2)) { goto L_803CECA8; } // 803CEC7C
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 803CEC80
  if (crb(c,2)) { goto L_803CECA8; } // 803CEC84
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803CEC88
  {uint32_t ea=c->r[4]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CEC8C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CEC90
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CEC94
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803CEC98
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803CEC9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803CECA0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CECA4
L_803CECA8:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CECA8
  c->r[3]=c->r[1]+0x00000040u; // 803CECAC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803CECB0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 803CECB4
  c->lr=0x803CECBCu; f_80264E2C(c); // 803CECB8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CECBC
  c->r[3]=c->r[1]+0x00000010u; // 803CECC0
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CECC4
  c->r[4]=0u+0x00000078u; // 803CECC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803CECCC
  c->lr=0x803CECD4u; f_80264B54(c); // 803CECD0
  c->r[3]=c->r[1]+0x00000010u; // 803CECD4
  c->r[4]=c->r[1]+0x00000040u; // 803CECD8
  c->r[5]=c->r[1]+0x00000070u; // 803CECDC
  c->lr=0x803CECE4u; f_802646E0(c); // 803CECE0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CECE4
  c->r[3]=c->r[1]+0x00000010u; // 803CECE8
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CECEC
  c->r[4]=0u+0x00000079u; // 803CECF0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803CECF4
  c->lr=0x803CECFCu; f_80264B54(c); // 803CECF8
  c->r[3]=c->r[1]+0x00000010u; // 803CECFC
  c->r[4]=c->r[1]+0x00000070u; // 803CED00
  c->r[5]=c->r[1]+0x00000040u; // 803CED04
  c->lr=0x803CED0Cu; f_802646E0(c); // 803CED08
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CED0C
  c->r[3]=c->r[1]+0x00000010u; // 803CED10
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CED14
  c->r[4]=0u+0x0000007Au; // 803CED18
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803CED1C
  c->lr=0x803CED24u; f_80264B54(c); // 803CED20
  c->r[3]=c->r[1]+0x00000010u; // 803CED24
  c->r[4]=c->r[1]+0x00000040u; // 803CED28
  c->r[5]=c->r[1]+0x00000070u; // 803CED2C
  c->lr=0x803CED34u; f_802646E0(c); // 803CED30
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CED34
  c->r[3]=c->r[1]+0x00000070u; // 803CED38
  {uint32_t ea=c->r[29]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CED3C
  c->r[4]=c->r[29]+0x00000054u; // 803CED40
  {uint32_t ea=c->r[29]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 803CED44
  c->lr=0x803CED4Cu; f_80264DE0(c); // 803CED48
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 803CED4C
  cmps(c,0,(int32_t)c->r[3],0); // 803CED50
  if (crb(c,2)) { goto L_803CED6C; } // 803CED54
  c->r[3]=c->r[3]+0x00000084u; // 803CED58
  c->r[4]=c->r[29]+0x00000054u; // 803CED5C
  c->r[5]=c->r[29]+0x00000084u; // 803CED60
  c->lr=0x803CED68u; f_802646E0(c); // 803CED64
  goto L_803CEDEC; // 803CED68
L_803CED6C:;
  c->r[0]=R8(c->r[30]+0x00000050u); // 803CED6C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 803CED70
  if (crb(c,2)) { goto L_803CEDDC; } // 803CED74
  c->r[27]=R32(c->r[29]+0x00000054u); // 803CED78
  c->r[12]=R32(c->r[29]+0x00000058u); // 803CED7C
  c->r[11]=R32(c->r[29]+0x0000005Cu); // 803CED80
  c->r[10]=R32(c->r[29]+0x00000060u); // 803CED84
  c->r[9]=R32(c->r[29]+0x00000064u); // 803CED88
  c->r[8]=R32(c->r[29]+0x00000068u); // 803CED8C
  c->r[7]=R32(c->r[29]+0x0000006Cu); // 803CED90
  c->r[6]=R32(c->r[29]+0x00000070u); // 803CED94
  c->r[5]=R32(c->r[29]+0x00000074u); // 803CED98
  c->r[4]=R32(c->r[29]+0x00000078u); // 803CED9C
  c->r[3]=R32(c->r[29]+0x0000007Cu); // 803CEDA0
  c->r[0]=R32(c->r[29]+0x00000080u); // 803CEDA4
  W32(c->r[29]+0x00000084u,c->r[27]); // 803CEDA8
  W32(c->r[29]+0x00000088u,c->r[12]); // 803CEDAC
  W32(c->r[29]+0x0000008Cu,c->r[11]); // 803CEDB0
  W32(c->r[29]+0x00000090u,c->r[10]); // 803CEDB4
  W32(c->r[29]+0x00000094u,c->r[9]); // 803CEDB8
  W32(c->r[29]+0x00000098u,c->r[8]); // 803CEDBC
  W32(c->r[29]+0x0000009Cu,c->r[7]); // 803CEDC0
  W32(c->r[29]+0x000000A0u,c->r[6]); // 803CEDC4
  W32(c->r[29]+0x000000A4u,c->r[5]); // 803CEDC8
  W32(c->r[29]+0x000000A8u,c->r[4]); // 803CEDCC
  W32(c->r[29]+0x000000ACu,c->r[3]); // 803CEDD0
  W32(c->r[29]+0x000000B0u,c->r[0]); // 803CEDD4
  goto L_803CEDEC; // 803CEDD8
L_803CEDDC:;
  c->r[3]=c->r[30]+0x00000004u; // 803CEDDC
  c->r[4]=c->r[29]+0x00000054u; // 803CEDE0
  c->r[5]=c->r[29]+0x00000084u; // 803CEDE4
  c->lr=0x803CEDECu; f_802646E0(c); // 803CEDE8
L_803CEDEC:;
  c->r[0]=R8(c->r[30]+0x00000050u); // 803CEDEC
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 803CEDF0
  if (crb(c,2)) { goto L_803CEE3C; } // 803CEDF4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 803CEDF8
  cmps(c,0,(int32_t)c->r[0],0); // 803CEDFC
  if (crb(c,2)) { goto L_803CEE3C; } // 803CEE00
  c->r[3]=R8(c->r[29]+0x000000CDu); // 803CEE04
  c->r[0]=0u+0x43300000u; // 803CEE08
  W32(c->r[1]+0x000000A0u,c->r[0]); // 803CEE0C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=RF64(ea);} // 803CEE10
  W32(c->r[1]+0x000000A4u,c->r[3]); // 803CEE14
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803CEE18
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 803CEE1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803CEE20
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803CEE24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803CEE28
  {uint32_t ea=c->r[1]+0x000000A8u; WF64(ea,c->f[0]);} // 803CEE2C
  c->r[0]=R32(c->r[1]+0x000000ACu); // 803CEE30
  W8(c->r[29]+0x000000CEu,c->r[0]); // 803CEE34
  goto L_803CEE44; // 803CEE38
L_803CEE3C:;
  c->r[0]=R8(c->r[29]+0x000000CDu); // 803CEE3C
  W8(c->r[29]+0x000000CEu,c->r[0]); // 803CEE40
L_803CEE44:;
  c->r[0]=R8(c->r[29]+0x000000CFu); // 803CEE44
  c->r[28]=0u+0x00000000u; // 803CEE48
  c->r[3]=R8(c->r[30]+0x00000050u); // 803CEE4C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803CEE50
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 803CEE54
  c->r[3]=rotl(c->r[3],26)&0x00000001u; // 803CEE58
  c->r[0]=0u-c->r[3]; // 803CEE5C
  c->r[0]=c->r[0]|c->r[3]; // 803CEE60
  c->r[27]=rotl(c->r[0],1)&0x00000001u; // 803CEE64
  if (crb(c,2)) { goto L_803CEE7C; } // 803CEE68
  c->r[0]=R8(c->r[29]+0x000000CDu); // 803CEE6C
  cmpu(c,0,c->r[0],0x000000FFu); // 803CEE70
  if (crb(c,2)) { goto L_803CEE7C; } // 803CEE74
  c->r[28]=0u+0x00000001u; // 803CEE78
L_803CEE7C:;
  cmps(c,0,(int32_t)c->r[28],0); // 803CEE7C
  if (crb(c,2)) { goto L_803CEEBC; } // 803CEE80
  c->r[4]=R8(c->r[29]+0x000000CDu); // 803CEE84
  c->r[3]=0u+0x43300000u; // 803CEE88
  c->r[0]=R8(c->r[30]+0x00000050u); // 803CEE8C
  W32(c->r[1]+0x000000ACu,c->r[4]); // 803CEE90
  c->r[0]=c->r[0]|0x00000040u; // 803CEE94
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=RF64(ea);} // 803CEE98
  W32(c->r[1]+0x000000A8u,c->r[3]); // 803CEE9C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CEEA0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=RF64(ea);} // 803CEEA4
  W8(c->r[30]+0x00000050u,c->r[0]); // 803CEEA8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803CEEAC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803CEEB0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803CEEB4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 803CEEB8
L_803CEEBC:;
  {uint32_t ea=c->r[29]+0x00000014u; c->r[31]=R32(ea); c->r[29]=ea;} // 803CEEBC
  goto L_803CEEE0; // 803CEEC0
L_803CEEC4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803CEEC4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803CEEC8
  c->r[4]=c->r[30]|c->r[30]; // 803CEECC
  c->r[12]=R32(c->r[12]+0x00000010u); // 803CEED0
  c->ctr=c->r[12]; // 803CEED4
  if (true) { c->lr=0x803CEEDCu; dispatch(c,c->ctr); } // 803CEED8
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CEEDC
L_803CEEE0:;
  cmpu(c,0,c->r[31],c->r[29]); // 803CEEE0
  if (!crb(c,2)) { IRQCHK(c); goto L_803CEEC4; } // 803CEEE4
  cmps(c,0,(int32_t)c->r[28],0); // 803CEEE8
  if (crb(c,2)) { goto L_803CEF00; } // 803CEEEC
  c->r[0]=R8(c->r[30]+0x00000050u); // 803CEEF0
  c->r[0]=(rotl(c->r[27],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 803CEEF4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[31]);} // 803CEEF8
  W8(c->r[30]+0x00000050u,c->r[0]); // 803CEEFC
L_803CEF00:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 803CEF00
  c->r[11]=c->r[1]+0x000000D0u; // 803CEF04
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 803CEF08
  c->lr=0x803CEF10u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CEF0C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 803CEF10
  c->lr=c->r[0]; // 803CEF14
  c->r[1]=c->r[1]+0x000000E0u; // 803CEF18
  return; // 803CEF1C
}

// fn_803CEF20
void f_803CEF20(Ctx* __restrict c) {
  trace_call(0x803CEF20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEF20
  c->r[0]=c->lr; // 803CEF24
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CEF28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CEF2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CEF30
  c->r[30]=c->r[3]|c->r[3]; // 803CEF34
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CEF38
  c->r[29]=c->r[4]|c->r[4]; // 803CEF3C
  c->r[0]=R8(c->r[3]+0x000000CFu); // 803CEF40
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803CEF44
  if (crb(c,2)) { goto L_803CEF88; } // 803CEF48
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CEF4C
  c->r[12]=R32(c->r[12]+0x00000018u); // 803CEF50
  c->ctr=c->r[12]; // 803CEF54
  if (true) { c->lr=0x803CEF5Cu; dispatch(c,c->ctr); } // 803CEF58
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 803CEF5C
  goto L_803CEF80; // 803CEF60
L_803CEF64:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803CEF64
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803CEF68
  c->r[4]=c->r[29]|c->r[29]; // 803CEF6C
  c->r[12]=R32(c->r[12]+0x00000014u); // 803CEF70
  c->ctr=c->r[12]; // 803CEF74
  if (true) { c->lr=0x803CEF7Cu; dispatch(c,c->ctr); } // 803CEF78
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CEF7C
L_803CEF80:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CEF80
  if (!crb(c,2)) { IRQCHK(c); goto L_803CEF64; } // 803CEF84
L_803CEF88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CEF88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CEF8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CEF90
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CEF94
  c->lr=c->r[0]; // 803CEF98
  c->r[1]=c->r[1]+0x00000020u; // 803CEF9C
  return; // 803CEFA0
}

// DrawSelf__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_803CEFA4(Ctx* __restrict c) {
  trace_call(0x803CEFA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CEFA4
  c->r[0]=c->lr; // 803CEFA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CEFAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CEFB0
  c->r[31]=c->r[3]|c->r[3]; // 803CEFB4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803CEFB8
  cmps(c,0,(int32_t)c->r[0],0); // 803CEFBC
  if (crb(c,2)) { goto L_803CF00C; } // 803CEFC0
  c->r[0]=R8(c->r[4]+0x00000050u); // 803CEFC4
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 803CEFC8
  if (crb(c,2)) { goto L_803CF00C; } // 803CEFCC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CEFD0
  c->r[12]=R32(c->r[12]+0x00000060u); // 803CEFD4
  c->ctr=c->r[12]; // 803CEFD8
  if (true) { c->lr=0x803CEFE0u; dispatch(c,c->ctr); } // 803CEFDC
  c->r[4]=0u+0x00FF0000u; // 803CEFE0
  c->r[3]=c->r[31]|c->r[31]; // 803CEFE4
  c->r[0]=c->r[4]+0x000000FFu; // 803CEFE8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CEFEC
  c->lr=0x803CEFF4u; f_803CF530(c); // 803CEFF0
  W32(c->r[1]+0x00000014u,c->r[4]); // 803CEFF4
  c->r[4]=c->r[31]+0x0000004Cu; // 803CEFF8
  c->r[5]=c->r[1]+0x00000008u; // 803CEFFC
  W32(c->r[1]+0x00000010u,c->r[3]); // 803CF000
  c->r[3]=c->r[1]+0x00000010u; // 803CF004
  c->lr=0x803CF00Cu; f_803C9F1C(c); // 803CF008
L_803CF00C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF00C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CF010
  c->lr=c->r[0]; // 803CF014
  c->r[1]=c->r[1]+0x00000020u; // 803CF018
  return; // 803CF01C
}

// fn_803CF020
void f_803CF020(Ctx* __restrict c) {
  trace_call(0x803CF020u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF020
  c->r[0]=c->lr; // 803CF024
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF028
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CF02C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CF030
  c->r[30]=c->r[3]|c->r[3]; // 803CF034
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CF038
  c->r[29]=c->r[4]|c->r[4]; // 803CF03C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CF040
  c->r[12]=R32(c->r[12]+0x00000020u); // 803CF044
  c->ctr=c->r[12]; // 803CF048
  if (true) { c->lr=0x803CF050u; dispatch(c,c->ctr); } // 803CF04C
  c->r[0]=R8(c->r[30]+0x000000CFu); // 803CF050
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803CF054
  if (!crb(c,2)) { goto L_803CF064; } // 803CF058
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 803CF05C
  if (!crb(c,2)) { goto L_803CF090; } // 803CF060
L_803CF064:;
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 803CF064
  goto L_803CF088; // 803CF068
L_803CF06C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803CF06C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803CF070
  c->r[4]=c->r[29]|c->r[29]; // 803CF074
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803CF078
  c->ctr=c->r[12]; // 803CF07C
  if (true) { c->lr=0x803CF084u; dispatch(c,c->ctr); } // 803CF080
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CF084
L_803CF088:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CF088
  if (!crb(c,2)) { IRQCHK(c); goto L_803CF06C; } // 803CF08C
L_803CF090:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF090
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CF094
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CF098
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CF09C
  c->lr=c->r[0]; // 803CF0A0
  c->r[1]=c->r[1]+0x00000020u; // 803CF0A4
  return; // 803CF0A8
}

// fn_803CF0AC
void f_803CF0AC(Ctx* __restrict c) {
  trace_call(0x803CF0ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF0AC
  c->r[0]=c->lr; // 803CF0B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF0B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CF0B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CF0BC
  c->r[30]=c->r[3]+0x00000020u; // 803CF0C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CF0C4
  c->r[29]=c->r[4]|c->r[4]; // 803CF0C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CF0CC
  c->r[28]=c->r[3]|c->r[3]; // 803CF0D0
  c->r[31]=R32(c->r[3]+0x00000020u); // 803CF0D4
  goto L_803CF108; // 803CF0D8
L_803CF0DC:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 803CF0DC
  cmps(c,0,(int32_t)c->r[0],0); // 803CF0E0
  if (!crb(c,2)) { goto L_803CF104; } // 803CF0E4
  c->r[3]=R32(c->r[31]+0x00000008u); // 803CF0E8
  c->r[5]=c->r[28]|c->r[28]; // 803CF0EC
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 803CF0F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CF0F4
  c->r[12]=R32(c->r[12]+0x00000018u); // 803CF0F8
  c->ctr=c->r[12]; // 803CF0FC
  if (true) { c->lr=0x803CF104u; dispatch(c,c->ctr); } // 803CF100
L_803CF104:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CF104
L_803CF108:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CF108
  if (!crb(c,2)) { IRQCHK(c); goto L_803CF0DC; } // 803CF10C
  c->r[0]=R8(c->r[28]+0x000000CFu); // 803CF110
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803CF114
  if (!crb(c,2)) { goto L_803CF124; } // 803CF118
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 803CF11C
  if (!crb(c,2)) { goto L_803CF140; } // 803CF120
L_803CF124:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 803CF124
  cmps(c,0,(int32_t)c->r[3],0); // 803CF128
  if (crb(c,2)) { goto L_803CF140; } // 803CF12C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CF130
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803CF134
  c->ctr=c->r[12]; // 803CF138
  if (true) { c->lr=0x803CF140u; dispatch(c,c->ctr); } // 803CF13C
L_803CF140:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF140
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CF144
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CF148
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CF14C
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CF150
  c->lr=c->r[0]; // 803CF154
  c->r[1]=c->r[1]+0x00000020u; // 803CF158
  return; // 803CF15C
}

// fn_803CF160
void f_803CF160(Ctx* __restrict c) {
  trace_call(0x803CF160u);
  c->r[12]=R32(c->r[4]+0x00000000u); // 803CF160
  c->r[0]=c->r[3]|c->r[3]; // 803CF164
  c->r[3]=c->r[4]|c->r[4]; // 803CF168
  c->r[12]=R32(c->r[12]+0x00000010u); // 803CF16C
  c->r[4]=c->r[0]|c->r[0]; // 803CF170
  c->ctr=c->r[12]; // 803CF174
  if (true) { dispatch(c,c->ctr); return; } // 803CF178
}

// fn_803CF17C
void f_803CF17C(Ctx* __restrict c) {
  trace_call(0x803CF17Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF17C
  c->r[0]=c->lr; // 803CF180
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF184
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CF188
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CF18C
  c->r[30]=c->r[3]|c->r[3]; // 803CF190
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CF194
  c->r[29]=c->r[5]|c->r[5]; // 803CF198
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CF19C
  c->r[28]=c->r[4]|c->r[4]; // 803CF1A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CF1A4
  c->r[12]=R32(c->r[12]+0x00000050u); // 803CF1A8
  c->ctr=c->r[12]; // 803CF1AC
  if (true) { c->lr=0x803CF1B4u; dispatch(c,c->ctr); } // 803CF1B0
  cmps(c,0,(int32_t)c->r[29],0); // 803CF1B4
  if (crb(c,2)) { goto L_803CF1EC; } // 803CF1B8
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 803CF1BC
  goto L_803CF1E4; // 803CF1C0
L_803CF1C4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803CF1C4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803CF1C8
  c->r[4]=c->r[28]|c->r[28]; // 803CF1CC
  c->r[5]=c->r[29]|c->r[29]; // 803CF1D0
  c->r[12]=R32(c->r[12]+0x00000048u); // 803CF1D4
  c->ctr=c->r[12]; // 803CF1D8
  if (true) { c->lr=0x803CF1E0u; dispatch(c,c->ctr); } // 803CF1DC
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CF1E0
L_803CF1E4:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CF1E4
  if (!crb(c,2)) { IRQCHK(c); goto L_803CF1C4; } // 803CF1E8
L_803CF1EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF1EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CF1F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CF1F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CF1F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CF1FC
  c->lr=c->r[0]; // 803CF200
  c->r[1]=c->r[1]+0x00000020u; // 803CF204
  return; // 803CF208
}

// fn_803CF20C
void f_803CF20C(Ctx* __restrict c) {
  trace_call(0x803CF20Cu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CF20C
  c->r[5]=c->r[4]|c->r[4]; // 803CF210
  c->r[4]=0u+0x00000000u; // 803CF214
  c->r[12]=R32(c->r[12]+0x00000048u); // 803CF218
  c->ctr=c->r[12]; // 803CF21C
  if (true) { dispatch(c,c->ctr); return; } // 803CF220
}

// fn_803CF224
void f_803CF224(Ctx* __restrict c) {
  trace_call(0x803CF224u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF224
  c->r[0]=c->lr; // 803CF228
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CF22C
  c->r[11]=c->r[1]+0x00000030u; // 803CF230
  c->lr=0x803CF238u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CF234
  c->r[0]=R32(c->r[3]+0x00000028u); // 803CF238
  c->r[26]=c->r[3]|c->r[3]; // 803CF23C
  c->r[27]=c->r[4]|c->r[4]; // 803CF240
  cmps(c,0,(int32_t)c->r[0],0); // 803CF244
  if (crb(c,2)) { goto L_803CF260; } // 803CF248
  c->r[3]=c->r[0]|c->r[0]; // 803CF24C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CF250
  c->r[12]=R32(c->r[12]+0x00000014u); // 803CF254
  c->ctr=c->r[12]; // 803CF258
  if (true) { c->lr=0x803CF260u; dispatch(c,c->ctr); } // 803CF25C
L_803CF260:;
  c->r[31]=R32(c->r[26]+0x00000020u); // 803CF260
  c->r[30]=c->r[26]+0x00000020u; // 803CF264
  c->r[29]=0u+0x00000000u; // 803CF268
  goto L_803CF2A4; // 803CF26C
L_803CF270:;
  cmps(c,0,(int32_t)c->r[27],0); // 803CF270
  c->r[28]=c->r[31]|c->r[31]; // 803CF274
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CF278
  if (crb(c,2)) { goto L_803CF28C; } // 803CF27C
  c->r[0]=R32(c->r[28]+0x00000008u); // 803CF280
  cmpu(c,0,c->r[0],c->r[27]); // 803CF284
  if (!crb(c,2)) { goto L_803CF2A4; } // 803CF288
L_803CF28C:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 803CF28C
  c->r[3]=c->r[26]+0x0000001Cu; // 803CF290
  c->r[4]=c->r[1]+0x00000008u; // 803CF294
  c->lr=0x803CF29Cu; f_803D5740(c); // 803CF298
  W32(c->r[28]+0x00000008u,c->r[29]); // 803CF29C
  W16(c->r[28]+0x0000000Cu,c->r[29]); // 803CF2A0
L_803CF2A4:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CF2A4
  if (!crb(c,2)) { IRQCHK(c); goto L_803CF270; } // 803CF2A8
  c->r[11]=c->r[1]+0x00000030u; // 803CF2AC
  c->lr=0x803CF2B4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CF2B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CF2B4
  c->lr=c->r[0]; // 803CF2B8
  c->r[1]=c->r[1]+0x00000030u; // 803CF2BC
  return; // 803CF2C0
}

// fn_803CF2C4
void f_803CF2C4(Ctx* __restrict c) {
  trace_call(0x803CF2C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF2C4
  c->r[0]=c->lr; // 803CF2C8
  c->r[5]=c->r[4]|c->r[4]; // 803CF2CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CF2D0
  c->r[0]=c->r[3]+0x00000020u; // 803CF2D4
  c->r[3]=c->r[3]+0x0000001Cu; // 803CF2D8
  c->r[4]=c->r[1]+0x00000008u; // 803CF2DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803CF2E0
  c->lr=0x803CF2E8u; f_803D5788(c); // 803CF2E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CF2E8
  c->lr=c->r[0]; // 803CF2EC
  c->r[1]=c->r[1]+0x00000010u; // 803CF2F0
  return; // 803CF2F4
}

// fn_803CF2F8
void f_803CF2F8(Ctx* __restrict c) {
  trace_call(0x803CF2F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF2F8
  c->r[0]=c->lr; // 803CF2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CF300
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CF304
  c->r[31]=c->r[4]|c->r[4]; // 803CF308
  W32(c->r[1]+0x00000008u,c->r[30]); // 803CF30C
  c->r[30]=c->r[3]|c->r[3]; // 803CF310
  c->r[3]=c->r[3]+0x0000001Cu; // 803CF314
  c->lr=0x803CF31Cu; f_803C8ED4(c); // 803CF318
  cmps(c,0,(int32_t)c->r[3],0); // 803CF31C
  if (crb(c,2)) { goto L_803CF328; } // 803CF320
  goto L_803CF358; // 803CF324
L_803CF328:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 803CF328
  cmps(c,0,(int32_t)c->r[3],0); // 803CF32C
  if (crb(c,2)) { goto L_803CF354; } // 803CF330
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CF334
  c->r[4]=c->r[31]|c->r[31]; // 803CF338
  c->r[12]=R32(c->r[12]+0x00000020u); // 803CF33C
  c->ctr=c->r[12]; // 803CF340
  if (true) { c->lr=0x803CF348u; dispatch(c,c->ctr); } // 803CF344
  cmps(c,0,(int32_t)c->r[3],0); // 803CF348
  if (crb(c,2)) { goto L_803CF354; } // 803CF34C
  goto L_803CF358; // 803CF350
L_803CF354:;
  c->r[3]=0u+0x00000000u; // 803CF354
L_803CF358:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CF358
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CF35C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803CF360
  c->lr=c->r[0]; // 803CF364
  c->r[1]=c->r[1]+0x00000010u; // 803CF368
  return; // 803CF36C
}

// fn_803CF370
void f_803CF370(Ctx* __restrict c) {
  trace_call(0x803CF370u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF370
  c->r[0]=c->lr; // 803CF374
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF378
  c->r[11]=c->r[1]+0x00000020u; // 803CF37C
  c->lr=0x803CF384u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CF380
  c->r[30]=c->r[3]|c->r[3]; // 803CF384
  c->r[27]=c->r[4]|c->r[4]; // 803CF388
  c->r[28]=c->r[5]|c->r[5]; // 803CF38C
  c->r[29]=c->r[6]|c->r[6]; // 803CF390
  c->r[3]=c->r[3]+0x0000001Cu; // 803CF394
  c->lr=0x803CF39Cu; f_803C8ED4(c); // 803CF398
  cmps(c,0,(int32_t)c->r[3],0); // 803CF39C
  if (crb(c,2)) { goto L_803CF3B0; } // 803CF3A0
  c->r[0]=cntlz(c->r[28]); // 803CF3A4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 803CF3A8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 803CF3AC
L_803CF3B0:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 803CF3B0
  cmps(c,0,(int32_t)c->r[3],0); // 803CF3B4
  if (crb(c,2)) { goto L_803CF3D4; } // 803CF3B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CF3BC
  c->r[4]=c->r[27]|c->r[27]; // 803CF3C0
  c->r[5]=c->r[28]|c->r[28]; // 803CF3C4
  c->r[12]=R32(c->r[12]+0x00000024u); // 803CF3C8
  c->ctr=c->r[12]; // 803CF3CC
  if (true) { c->lr=0x803CF3D4u; dispatch(c,c->ctr); } // 803CF3D0
L_803CF3D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 803CF3D4
  if (crb(c,2)) { goto L_803CF410; } // 803CF3D8
  {uint32_t ea=c->r[30]+0x00000014u; c->r[31]=R32(ea); c->r[30]=ea;} // 803CF3DC
  goto L_803CF408; // 803CF3E0
L_803CF3E4:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803CF3E4
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803CF3E8
  c->r[4]=c->r[27]|c->r[27]; // 803CF3EC
  c->r[5]=c->r[28]|c->r[28]; // 803CF3F0
  c->r[12]=R32(c->r[12]+0x00000058u); // 803CF3F4
  c->r[6]=c->r[29]|c->r[29]; // 803CF3F8
  c->ctr=c->r[12]; // 803CF3FC
  if (true) { c->lr=0x803CF404u; dispatch(c,c->ctr); } // 803CF400
  c->r[31]=R32(c->r[31]+0x00000000u); // 803CF404
L_803CF408:;
  cmpu(c,0,c->r[31],c->r[30]); // 803CF408
  if (!crb(c,2)) { IRQCHK(c); goto L_803CF3E4; } // 803CF40C
L_803CF410:;
  c->r[11]=c->r[1]+0x00000020u; // 803CF410
  c->lr=0x803CF418u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CF414
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF418
  c->lr=c->r[0]; // 803CF41C
  c->r[1]=c->r[1]+0x00000020u; // 803CF420
  return; // 803CF424
}

// LoadMtx__Q36nw4hbm3lyt4PaneFRCQ36nw4hbm3lyt8DrawInfo
void f_803CF428(Ctx* __restrict c) {
  trace_call(0x803CF428u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF428
  c->r[0]=c->lr; // 803CF42C
  c->r[5]=c->r[3]|c->r[3]; // 803CF430
  W32(c->r[1]+0x00000044u,c->r[0]); // 803CF434
  c->r[0]=R8(c->r[4]+0x00000050u); // 803CF438
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803CF43C
  c->r[31]=c->r[4]|c->r[4]; // 803CF440
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 803CF444
  if (crb(c,2)) { goto L_803CF4AC; } // 803CF448
  c->r[3]=c->r[4]+0x00000004u; // 803CF44C
  c->r[4]=c->r[5]+0x00000084u; // 803CF450
  c->r[5]=c->r[1]+0x00000008u; // 803CF454
  c->lr=0x803CF45Cu; f_802646E0(c); // 803CF458
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CF45C
  c->r[3]=0u+0x803F0000u; // 803CF460
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CF464
  {uint32_t ea=c->r[3]+0x00000E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF468
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 803CF46C
  fcmp(c,0,c->f[1],c->f[0]); // 803CF470
  c->r[0]=c->cr; // 803CF474
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803CF478
  if (crb(c,2)) { goto L_803CF4A4; } // 803CF47C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803CF480
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CF484
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF488
  c->f[2]=-c->f[2]; // 803CF48C
  c->f[1]=-c->f[1]; // 803CF490
  c->f[0]=-c->f[0]; // 803CF494
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803CF498
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CF49C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803CF4A0
L_803CF4A4:;
  c->r[3]=c->r[1]+0x00000008u; // 803CF4A4
  goto L_803CF50C; // 803CF4A8
L_803CF4AC:;
  {uint32_t ea=c->r[4]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CF4AC
  c->r[5]=0u+0x803F0000u; // 803CF4B0
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CF4B4
  {uint32_t ea=c->r[5]+0x00000E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF4B8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 803CF4BC
  fcmp(c,0,c->f[1],c->f[0]); // 803CF4C0
  c->r[0]=c->cr; // 803CF4C4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803CF4C8
  if (crb(c,2)) { goto L_803CF508; } // 803CF4CC
  c->r[3]=c->r[3]+0x00000084u; // 803CF4D0
  c->r[4]=c->r[1]+0x00000008u; // 803CF4D4
  c->lr=0x803CF4DCu; f_802646AC(c); // 803CF4D8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803CF4DC
  c->r[3]=c->r[1]+0x00000008u; // 803CF4E0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CF4E4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF4E8
  c->f[2]=-c->f[2]; // 803CF4EC
  c->f[1]=-c->f[1]; // 803CF4F0
  c->f[0]=-c->f[0]; // 803CF4F4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803CF4F8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CF4FC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803CF500
  goto L_803CF50C; // 803CF504
L_803CF508:;
  c->r[3]=c->r[3]+0x00000084u; // 803CF508
L_803CF50C:;
  c->r[4]=0u+0x00000000u; // 803CF50C
  c->lr=0x803CF514u; f_8028882C(c); // 803CF510
  c->r[3]=0u+0x00000000u; // 803CF514
  c->lr=0x803CF51Cu; f_80288934(c); // 803CF518
  c->r[0]=R32(c->r[1]+0x00000044u); // 803CF51C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803CF520
  c->lr=c->r[0]; // 803CF524
  c->r[1]=c->r[1]+0x00000040u; // 803CF528
  return; // 803CF52C
}

// GetVtxPos__Q36nw4hbm3lyt4PaneCFv
void f_803CF530(Ctx* __restrict c) {
  trace_call(0x803CF530u);
  c->r[4]=0u+0x55550000u; // 803CF530
  c->r[6]=R8(c->r[3]+0x000000CCu); // 803CF534
  c->r[0]=c->r[4]+0x00005556u; // 803CF538
  c->r[5]=0u+0x803F0000u; // 803CF53C
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 803CF540
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF544
  {uint32_t ea=c->r[5]+0x00000E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF548
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803CF54C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 803CF550
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CF554
  c->r[0]=c->r[4]+c->r[0]; // 803CF558
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 803CF55C
  c->r[0]=c->r[6]-c->r[0]; // 803CF560
  cmps(c,0,(int32_t)c->r[0],1); // 803CF564
  if (crb(c,2)) { goto L_803CF590; } // 803CF568
  if (!crb(c,0)) { goto L_803CF574; } // 803CF56C
  goto L_803CF580; // 803CF570
L_803CF574:;
  cmps(c,0,(int32_t)c->r[0],3); // 803CF574
  if (!crb(c,0)) { goto L_803CF580; } // 803CF578
  goto L_803CF5AC; // 803CF57C
L_803CF580:;
  c->r[4]=0u+0x803F0000u; // 803CF580
  {uint32_t ea=c->r[4]+0x00000E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF584
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803CF588
  goto L_803CF5B8; // 803CF58C
L_803CF590:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CF590
  c->r[4]=0u+0x803F0000u; // 803CF594
  {uint32_t ea=c->r[4]+0x00000E98u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF598
  c->f[1]=-c->f[1]; // 803CF59C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803CF5A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803CF5A4
  goto L_803CF5B8; // 803CF5A8
L_803CF5AC:;
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF5AC
  c->f[0]=-c->f[0]; // 803CF5B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803CF5B4
L_803CF5B8:;
  c->r[4]=0u+0x55550000u; // 803CF5B8
  c->r[0]=c->r[4]+0x00005556u; // 803CF5BC
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 803CF5C0
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 803CF5C4
  c->r[0]=c->r[4]+c->r[0]; // 803CF5C8
  cmps(c,0,(int32_t)c->r[0],1); // 803CF5CC
  if (crb(c,2)) { goto L_803CF5F8; } // 803CF5D0
  if (!crb(c,0)) { goto L_803CF5DC; } // 803CF5D4
  goto L_803CF5E8; // 803CF5D8
L_803CF5DC:;
  cmps(c,0,(int32_t)c->r[0],3); // 803CF5DC
  if (!crb(c,0)) { goto L_803CF5E8; } // 803CF5E0
  goto L_803CF614; // 803CF5E4
L_803CF5E8:;
  c->r[3]=0u+0x803F0000u; // 803CF5E8
  {uint32_t ea=c->r[3]+0x00000E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF5EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CF5F0
  goto L_803CF620; // 803CF5F4
L_803CF5F8:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CF5F8
  c->r[3]=0u+0x803F0000u; // 803CF5FC
  {uint32_t ea=c->r[3]+0x00000E98u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF600
  c->f[1]=-c->f[1]; // 803CF604
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803CF608
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CF60C
  goto L_803CF620; // 803CF610
L_803CF614:;
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF614
  c->f[0]=-c->f[0]; // 803CF618
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CF61C
L_803CF620:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 803CF620
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803CF624
  c->r[1]=c->r[1]+0x00000010u; // 803CF628
  return; // 803CF62C
}

// fn_803CF630
void f_803CF630(Ctx* __restrict c) {
  trace_call(0x803CF630u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 803CF630
  return; // 803CF634
}

// fn_803CF638
void f_803CF638(Ctx* __restrict c) {
  trace_call(0x803CF638u);
  c->r[0]=0u+0x00000000u; // 803CF638
  c->r[3]=0u+0x806C0000u; // 803CF63C
  W32(c->r[3]+0x000025B0u,c->r[0]); // 803CF640
  return; // 803CF644
}

// __ct__Q36nw4hbm3lyt7PictureFPCQ46nw4hbm3lyt3res7PictureRCQ36nw4hbm3lyt11ResBlockSet
void f_803CF648(Ctx* __restrict c) {
  trace_call(0x803CF648u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF648
  c->r[0]=c->lr; // 803CF64C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CF650
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CF654
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CF658
  c->r[30]=c->r[5]|c->r[5]; // 803CF65C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CF660
  c->r[29]=c->r[4]|c->r[4]; // 803CF664
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CF668
  c->r[28]=c->r[3]|c->r[3]; // 803CF66C
  c->lr=0x803CF674u; f_803CE6D4(c); // 803CF670
  c->r[3]=0u+0x80440000u; // 803CF674
  c->r[4]=0u+0x803D0000u; // 803CF678
  c->r[3]=c->r[3]+0xFFFF90A0u; // 803CF67C
  c->r[5]=0u+0x803D0000u; // 803CF680
  W32(c->r[28]+0x00000000u,c->r[3]); // 803CF684
  c->r[3]=c->r[28]+0x000000D4u; // 803CF688
  c->r[4]=c->r[4]+0xFFFFB5BCu; // 803CF68C
  c->r[5]=c->r[5]+0xFFFF9398u; // 803CF690
  c->r[6]=0u+0x00000004u; // 803CF694
  c->r[7]=0u+0x00000004u; // 803CF698
  c->lr=0x803CF6A0u; f_80289B34(c); // 803CF69C
  c->r[3]=c->r[28]+0x000000E4u; // 803CF6A0
  c->lr=0x803CF6A8u; f_803C94AC(c); // 803CF6A4
  c->r[0]=R8(c->r[29]+0x0000005Eu); // 803CF6A8
  c->r[31]=0u+0x00000008u; // 803CF6AC
  cmpu(c,0,c->r[0],0x00000008u); // 803CF6B0
  if (crb(c,1)) { goto L_803CF6BC; } // 803CF6B4
  c->r[31]=c->r[0]|c->r[0]; // 803CF6B8
L_803CF6BC:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[4]); // 803CF6BC
  if (crb(c,2)) { goto L_803CF6CC; } // 803CF6C0
  c->r[3]=c->r[28]+0x000000E4u; // 803CF6C4
  c->lr=0x803CF6CCu; f_803C9510(c); // 803CF6C8
L_803CF6CC:;
  c->r[6]=R32(c->r[29]+0x0000004Cu); // 803CF6CC
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[5]); // 803CF6D0
  c->r[4]=R32(c->r[29]+0x00000050u); // 803CF6D4
  c->r[3]=R32(c->r[29]+0x00000054u); // 803CF6D8
  c->r[0]=R32(c->r[29]+0x00000058u); // 803CF6DC
  W32(c->r[28]+0x000000D4u,c->r[6]); // 803CF6E0
  W32(c->r[28]+0x000000D8u,c->r[4]); // 803CF6E4
  W32(c->r[28]+0x000000DCu,c->r[3]); // 803CF6E8
  W32(c->r[28]+0x000000E0u,c->r[0]); // 803CF6EC
  if (crb(c,2)) { goto L_803CF70C; } // 803CF6F0
  c->r[0]=R8(c->r[28]+0x000000E4u); // 803CF6F4
  cmps(c,0,(int32_t)c->r[0],0); // 803CF6F8
  if (crb(c,2)) { goto L_803CF70C; } // 803CF6FC
  c->r[3]=c->r[28]+0x000000E4u; // 803CF700
  c->r[4]=c->r[29]+0x00000060u; // 803CF704
  c->lr=0x803CF70Cu; f_803C9690(c); // 803CF708
L_803CF70C:;
  c->r[3]=0u+0x806C0000u; // 803CF70C
  c->r[4]=0u+0x0000005Cu; // 803CF710
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CF714
  c->lr=0x803CF71Cu; f_802A703C(c); // 803CF718
  cmps(c,0,(int32_t)c->r[3],0); // 803CF71C
  if (crb(c,2)) { goto L_803CF74C; } // 803CF720
  c->r[0]=R16(c->r[29]+0x0000005Cu); // 803CF724
  c->r[5]=R32(c->r[30]+0x00000008u); // 803CF728
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803CF72C
  c->r[4]=c->r[5]+c->r[0]; // 803CF730
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803CF734
  c->r[4]=c->r[5]+c->r[0]; // 803CF738
  if (crb(c,2)) { goto L_803CF748; } // 803CF73C
  c->r[5]=c->r[30]|c->r[30]; // 803CF740
  c->lr=0x803CF748u; f_803CB5C8(c); // 803CF744
L_803CF748:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 803CF748
L_803CF74C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CF74C
  c->r[3]=c->r[28]|c->r[28]; // 803CF750
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CF754
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CF758
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CF75C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CF760
  c->lr=c->r[0]; // 803CF764
  c->r[1]=c->r[1]+0x00000020u; // 803CF768
  return; // 803CF76C
}

// __dt__Q36nw4hbm3lyt7PictureFv
void f_803CF770(Ctx* __restrict c) {
  trace_call(0x803CF770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF770
  c->r[0]=c->lr; // 803CF774
  cmps(c,0,(int32_t)c->r[3],0); // 803CF778
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CF77C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CF780
  c->r[31]=c->r[4]|c->r[4]; // 803CF784
  W32(c->r[1]+0x00000008u,c->r[30]); // 803CF788
  c->r[30]=c->r[3]|c->r[3]; // 803CF78C
  if (crb(c,2)) { goto L_803CF824; } // 803CF790
  c->r[5]=R32(c->r[3]+0x00000028u); // 803CF794
  c->r[4]=0u+0x80440000u; // 803CF798
  c->r[4]=c->r[4]+0xFFFF90A0u; // 803CF79C
  cmps(c,0,(int32_t)c->r[5],0); // 803CF7A0
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CF7A4
  if (crb(c,2)) { goto L_803CF7E8; } // 803CF7A8
  c->r[0]=R8(c->r[5]+0x00000054u); // 803CF7AC
  cmps(c,0,(int32_t)c->r[0],0); // 803CF7B0
  if (!crb(c,2)) { goto L_803CF7E8; } // 803CF7B4
  c->r[12]=R32(c->r[5]+0x00000000u); // 803CF7B8
  c->r[3]=c->r[5]|c->r[5]; // 803CF7BC
  c->r[4]=0u+0xFFFFFFFFu; // 803CF7C0
  c->r[12]=R32(c->r[12]+0x00000008u); // 803CF7C4
  c->ctr=c->r[12]; // 803CF7C8
  if (true) { c->lr=0x803CF7D0u; dispatch(c,c->ctr); } // 803CF7CC
  c->r[3]=0u+0x806C0000u; // 803CF7D0
  c->r[4]=R32(c->r[30]+0x00000028u); // 803CF7D4
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CF7D8
  c->lr=0x803CF7E0u; f_802A704C(c); // 803CF7DC
  c->r[0]=0u+0x00000000u; // 803CF7E0
  W32(c->r[30]+0x00000028u,c->r[0]); // 803CF7E4
L_803CF7E8:;
  c->r[3]=c->r[30]+0x000000E4u; // 803CF7E8
  c->lr=0x803CF7F0u; f_803C94C0(c); // 803CF7EC
  c->r[4]=0u+0x803D0000u; // 803CF7F0
  c->r[3]=c->r[30]+0x000000D4u; // 803CF7F4
  c->r[4]=c->r[4]+0xFFFF9398u; // 803CF7F8
  c->r[5]=0u+0x00000004u; // 803CF7FC
  c->r[6]=0u+0x00000004u; // 803CF800
  c->lr=0x803CF808u; f_80289C2C(c); // 803CF804
  c->r[3]=c->r[30]|c->r[30]; // 803CF808
  c->r[4]=0u+0x00000000u; // 803CF80C
  c->lr=0x803CF814u; f_803CE7FC(c); // 803CF810
  cmps(c,0,(int32_t)c->r[31],0); // 803CF814
  if (!crb(c,1)) { goto L_803CF824; } // 803CF818
  c->r[3]=c->r[30]|c->r[30]; // 803CF81C
  c->lr=0x803CF824u; f_802896EC(c); // 803CF820
L_803CF824:;
  c->r[3]=c->r[30]|c->r[30]; // 803CF824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CF828
  c->r[30]=R32(c->r[1]+0x00000008u); // 803CF82C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CF830
  c->lr=c->r[0]; // 803CF834
  c->r[1]=c->r[1]+0x00000010u; // 803CF838
  return; // 803CF83C
}

// Append__Q36nw4hbm3lyt7PictureFP10TPLPalette
void f_803CF840(Ctx* __restrict c) {
  trace_call(0x803CF840u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF840
  c->r[0]=c->lr; // 803CF844
  c->r[5]=0u+0x00000000u; // 803CF848
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CF84C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803CF850
  c->r[31]=c->r[3]|c->r[3]; // 803CF854
  c->r[3]=c->r[1]+0x00000008u; // 803CF858
  c->lr=0x803CF860u; f_803CA0CC(c); // 803CF85C
  c->r[12]=R32(c->r[31]+0x00000000u); // 803CF860
  c->r[3]=c->r[31]|c->r[31]; // 803CF864
  c->r[4]=c->r[1]+0x00000008u; // 803CF868
  c->r[12]=R32(c->r[12]+0x00000068u); // 803CF86C
  c->ctr=c->r[12]; // 803CF870
  if (true) { c->lr=0x803CF878u; dispatch(c,c->ctr); } // 803CF874
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CF878
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803CF87C
  c->lr=c->r[0]; // 803CF880
  c->r[1]=c->r[1]+0x00000030u; // 803CF884
  return; // 803CF888
}

// Append__Q36nw4hbm3lyt7PictureFRC9_GXTexObj
void f_803CF88C(Ctx* __restrict c) {
  trace_call(0x803CF88Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CF88C
  c->r[0]=c->lr; // 803CF890
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CF894
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803CF898
  c->r[31]=c->r[3]|c->r[3]; // 803CF89C
  W32(c->r[1]+0x00000028u,c->r[30]); // 803CF8A0
  W32(c->r[1]+0x00000024u,c->r[29]); // 803CF8A4
  c->r[29]=c->r[4]|c->r[4]; // 803CF8A8
  W32(c->r[1]+0x00000020u,c->r[28]); // 803CF8AC
  c->r[5]=R32(c->r[3]+0x00000028u); // 803CF8B0
  c->r[0]=R32(c->r[5]+0x00000050u); // 803CF8B4
  c->r[3]=R32(c->r[5]+0x0000004Cu); // 803CF8B8
  c->r[28]=rotl(c->r[0],4)&0x0000000Fu; // 803CF8BC
  c->r[0]=rotl(c->r[3],4)&0x0000000Fu; // 803CF8C0
  cmpu(c,0,c->r[28],c->r[0]); // 803CF8C4
  if (!crb(c,0)) { goto L_803CF9DC; } // 803CF8C8
  c->r[0]=rotl(c->r[3],12)&0x0000000Fu; // 803CF8CC
  cmpu(c,0,c->r[28],c->r[0]); // 803CF8D0
  if (crb(c,0)) { goto L_803CF8DC; } // 803CF8D4
  goto L_803CF9DC; // 803CF8D8
L_803CF8DC:;
  c->r[0]=c->r[28]+0x00000001u; // 803CF8DC
  c->r[3]=c->r[5]|c->r[5]; // 803CF8E0
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 803CF8E4
  c->lr=0x803CF8ECu; f_803CD0C8(c); // 803CF8E8
  c->r[3]=R32(c->r[31]+0x00000028u); // 803CF8EC
  c->r[4]=c->r[28]|c->r[28]; // 803CF8F0
  c->r[5]=c->r[29]|c->r[29]; // 803CF8F4
  c->lr=0x803CF8FCu; f_803CD330(c); // 803CF8F8
  c->r[3]=R32(c->r[31]+0x00000028u); // 803CF8FC
  c->r[0]=R32(c->r[3]+0x00000050u); // 803CF900
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 803CF904
  c->lr=0x803CF90Cu; f_803CD158(c); // 803CF908
  c->r[29]=0u+0x00000000u; // 803CF90C
  c->r[30]=0u+0x00000001u; // 803CF910
  c->r[4]=0u+0x00000004u; // 803CF914
  c->r[0]=0u+0x0000003Cu; // 803CF918
  W8(c->r[1]+0x0000000Bu,c->r[29]); // 803CF91C
  c->r[3]=R32(c->r[31]+0x00000028u); // 803CF920
  W8(c->r[1]+0x00000008u,c->r[30]); // 803CF924
  W8(c->r[1]+0x00000009u,c->r[4]); // 803CF928
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803CF92C
  c->r[0]=R32(c->r[1]+0x00000008u); // 803CF930
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803CF934
  c->lr=0x803CF93Cu; f_803CD050(c); // 803CF938
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 803CF93C
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 803CF940
  c->r[5]=c->r[3]+c->r[0]; // 803CF944
  c->r[0]=R8(c->r[1]+0x0000000Du); // 803CF948
  W8(c->r[5]+0x00000000u,c->r[4]); // 803CF94C
  c->r[3]=c->r[31]+0x000000E4u; // 803CF950
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 803CF954
  W8(c->r[5]+0x00000001u,c->r[0]); // 803CF958
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 803CF95C
  W8(c->r[5]+0x00000002u,c->r[4]); // 803CF960
  W8(c->r[5]+0x00000003u,c->r[0]); // 803CF964
  c->r[4]=R32(c->r[31]+0x00000028u); // 803CF968
  c->r[0]=R32(c->r[4]+0x00000050u); // 803CF96C
  c->r[4]=rotl(c->r[0],4)&0x0000000Fu; // 803CF970
  c->lr=0x803CF978u; f_803C9598(c); // 803CF974
  c->r[3]=0u+0x803F0000u; // 803CF978
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF97C
  {uint32_t ea=c->r[3]+0x00000EA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803CF980
  fcmp(c,0,c->f[0],c->f[1]); // 803CF984
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803CF988
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803CF98C
  if (!crb(c,2)) { goto L_803CF9A4; } // 803CF990
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF994
  fcmp(c,0,c->f[0],c->f[1]); // 803CF998
  if (!crb(c,2)) { goto L_803CF9A4; } // 803CF99C
  c->r[29]=c->r[30]|c->r[30]; // 803CF9A0
L_803CF9A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 803CF9A4
  if (crb(c,2)) { goto L_803CF9DC; } // 803CF9A8
  c->r[4]=R32(c->r[31]+0x00000028u); // 803CF9AC
  c->r[0]=R32(c->r[4]+0x00000050u); // 803CF9B0
  c->r[0]=rotl(c->r[0],4)&0x0000000Fu; // 803CF9B4
  cmpu(c,0,c->r[0],0x00000001u); // 803CF9B8
  if (!crb(c,2)) { goto L_803CF9DC; } // 803CF9BC
  c->r[3]=c->r[1]+0x00000010u; // 803CF9C0
  c->r[5]=0u+0x00000000u; // 803CF9C4
  c->lr=0x803CF9CCu; f_803CE5C4(c); // 803CF9C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF9CC
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 803CF9D0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CF9D4
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 803CF9D8
L_803CF9DC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CF9DC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803CF9E0
  c->r[30]=R32(c->r[1]+0x00000028u); // 803CF9E4
  c->r[29]=R32(c->r[1]+0x00000024u); // 803CF9E8
  c->r[28]=R32(c->r[1]+0x00000020u); // 803CF9EC
  c->lr=c->r[0]; // 803CF9F0
  c->r[1]=c->r[1]+0x00000030u; // 803CF9F4
  return; // 803CF9F8
}

// fn_803CF9FC
void f_803CF9FC(Ctx* __restrict c) {
  trace_call(0x803CF9FCu);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803CF9FC
  c->r[7]=c->r[4]+c->r[0]; // 803CFA00
  c->r[6]=R8(c->r[7]+0x000000D4u); // 803CFA04
  c->r[5]=R8(c->r[7]+0x000000D5u); // 803CFA08
  c->r[4]=R8(c->r[7]+0x000000D6u); // 803CFA0C
  c->r[0]=R8(c->r[7]+0x000000D7u); // 803CFA10
  W8(c->r[3]+0x00000000u,c->r[6]); // 803CFA14
  W8(c->r[3]+0x00000001u,c->r[5]); // 803CFA18
  W8(c->r[3]+0x00000002u,c->r[4]); // 803CFA1C
  W8(c->r[3]+0x00000003u,c->r[0]); // 803CFA20
  return; // 803CFA24
}

// fn_803CFA28
void f_803CFA28(Ctx* __restrict c) {
  trace_call(0x803CFA28u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803CFA28
  c->r[6]=R8(c->r[5]+0x00000000u); // 803CFA2C
  c->r[4]=c->r[3]+c->r[0]; // 803CFA30
  c->r[0]=R8(c->r[5]+0x00000001u); // 803CFA34
  W8(c->r[4]+0x000000D4u,c->r[6]); // 803CFA38
  c->r[3]=R8(c->r[5]+0x00000002u); // 803CFA3C
  W8(c->r[4]+0x000000D5u,c->r[0]); // 803CFA40
  c->r[0]=R8(c->r[5]+0x00000003u); // 803CFA44
  W8(c->r[4]+0x000000D6u,c->r[3]); // 803CFA48
  W8(c->r[4]+0x000000D7u,c->r[0]); // 803CFA4C
  return; // 803CFA50
}

// fn_803CFA54
void f_803CFA54(Ctx* __restrict c) {
  trace_call(0x803CFA54u);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 803CFA54
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803CFA58
  c->r[3]=c->r[3]+c->r[5]; // 803CFA5C
  c->r[3]=c->r[3]+c->r[0]; // 803CFA60
  c->r[3]=R8(c->r[3]+0x000000D4u); // 803CFA64
  return; // 803CFA68
}

// fn_803CFA6C
void f_803CFA6C(Ctx* __restrict c) {
  trace_call(0x803CFA6Cu);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 803CFA6C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803CFA70
  c->r[3]=c->r[3]+c->r[6]; // 803CFA74
  c->r[3]=c->r[3]+c->r[0]; // 803CFA78
  W8(c->r[3]+0x000000D4u,c->r[5]); // 803CFA7C
  return; // 803CFA80
}

// fn_803CFA84
void f_803CFA84(Ctx* __restrict c) {
  trace_call(0x803CFA84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFA84
  c->r[0]=c->lr; // 803CFA88
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CFA8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803CFA90
  W32(c->r[1]+0x00000018u,c->r[30]); // 803CFA94
  W32(c->r[1]+0x00000014u,c->r[29]); // 803CFA98
  W32(c->r[1]+0x00000010u,c->r[28]); // 803CFA9C
  c->r[28]=c->r[3]|c->r[3]; // 803CFAA0
  c->r[0]=R32(c->r[3]+0x00000028u); // 803CFAA4
  cmps(c,0,(int32_t)c->r[0],0); // 803CFAA8
  if (crb(c,2)) { goto L_803CFB40; } // 803CFAAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CFAB0
  c->r[12]=R32(c->r[12]+0x00000060u); // 803CFAB4
  c->ctr=c->r[12]; // 803CFAB8
  if (true) { c->lr=0x803CFAC0u; dispatch(c,c->ctr); } // 803CFABC
  c->r[29]=R8(c->r[28]+0x000000CEu); // 803CFAC0
  c->r[3]=c->r[28]+0x000000D4u; // 803CFAC4
  c->r[4]=c->r[29]|c->r[29]; // 803CFAC8
  c->lr=0x803CFAD0u; f_803C9724(c); // 803CFACC
  c->r[4]=c->r[3]|c->r[3]; // 803CFAD0
  c->r[3]=R32(c->r[28]+0x00000028u); // 803CFAD4
  c->r[5]=c->r[29]|c->r[29]; // 803CFAD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CFADC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CFAE0
  c->ctr=c->r[12]; // 803CFAE4
  if (true) { c->lr=0x803CFAECu; dispatch(c,c->ctr); } // 803CFAE8
  c->r[4]=R8(c->r[28]+0x000000E5u); // 803CFAEC
  c->r[29]=c->r[3]|c->r[3]; // 803CFAF0
  c->lr=0x803CFAF8u; f_803C97E0(c); // 803CFAF4
  cmps(c,0,(int32_t)c->r[29],0); // 803CFAF8
  if (crb(c,2)) { goto L_803CFB08; } // 803CFAFC
  c->r[30]=c->r[28]+0x000000D4u; // 803CFB00
  goto L_803CFB0C; // 803CFB04
L_803CFB08:;
  c->r[30]=0u+0x00000000u; // 803CFB08
L_803CFB0C:;
  c->r[29]=R32(c->r[28]+0x000000E8u); // 803CFB0C
  c->r[3]=c->r[28]|c->r[28]; // 803CFB10
  c->r[31]=R8(c->r[28]+0x000000E5u); // 803CFB14
  c->lr=0x803CFB1Cu; f_803CF530(c); // 803CFB18
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803CFB1C
  c->r[5]=c->r[31]|c->r[31]; // 803CFB20
  c->r[6]=c->r[29]|c->r[29]; // 803CFB24
  c->r[7]=c->r[30]|c->r[30]; // 803CFB28
  W32(c->r[1]+0x00000008u,c->r[3]); // 803CFB2C
  c->r[3]=c->r[1]+0x00000008u; // 803CFB30
  c->r[4]=c->r[28]+0x0000004Cu; // 803CFB34
  c->r[8]=R8(c->r[28]+0x000000CEu); // 803CFB38
  c->lr=0x803CFB40u; f_803C9E24(c); // 803CFB3C
L_803CFB40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803CFB40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803CFB44
  c->r[30]=R32(c->r[1]+0x00000018u); // 803CFB48
  c->r[29]=R32(c->r[1]+0x00000014u); // 803CFB4C
  c->r[28]=R32(c->r[1]+0x00000010u); // 803CFB50
  c->lr=c->r[0]; // 803CFB54
  c->r[1]=c->r[1]+0x00000020u; // 803CFB58
  return; // 803CFB5C
}

// fn_803CFB60
void f_803CFB60(Ctx* __restrict c) {
  trace_call(0x803CFB60u);
  c->r[3]=0u+0x806C0000u; // 803CFB60
  c->r[3]=c->r[3]+0x000025B8u; // 803CFB64
  return; // 803CFB68
}

// fn_803CFB6C
void f_803CFB6C(Ctx* __restrict c) {
  trace_call(0x803CFB6Cu);
  c->r[4]=0u+0x806C0000u; // 803CFB6C
  c->r[3]=0u+0x806C0000u; // 803CFB70
  c->r[4]=c->r[4]+0x000025B0u; // 803CFB74
  W32(c->r[3]+0x000025B8u,c->r[4]); // 803CFB78
  return; // 803CFB7C
}

// fn_803CFB80
void f_803CFB80(Ctx* __restrict c) {
  trace_call(0x803CFB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFB80
  c->r[0]=c->lr; // 803CFB84
  cmps(c,0,(int32_t)c->r[3],0); // 803CFB88
  W32(c->r[1]+0x00000014u,c->r[0]); // 803CFB8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803CFB90
  c->r[31]=c->r[3]|c->r[3]; // 803CFB94
  if (crb(c,2)) { goto L_803CFBA8; } // 803CFB98
  cmps(c,0,(int32_t)c->r[4],0); // 803CFB9C
  if (!crb(c,1)) { goto L_803CFBA8; } // 803CFBA0
  c->lr=0x803CFBA8u; f_802896EC(c); // 803CFBA4
L_803CFBA8:;
  c->r[3]=c->r[31]|c->r[31]; // 803CFBA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803CFBAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803CFBB0
  c->lr=c->r[0]; // 803CFBB4
  c->r[1]=c->r[1]+0x00000010u; // 803CFBB8
  return; // 803CFBBC
}

// __ct__Q36nw4hbm3lyt16ResourceAccessorFv
void f_803CFBC0(Ctx* __restrict c) {
  trace_call(0x803CFBC0u);
  c->r[4]=0u+0x80440000u; // 803CFBC0
  c->r[4]=c->r[4]+0xFFFF9140u; // 803CFBC4
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CFBC8
  return; // 803CFBCC
}

// fn_803CFBD0
void f_803CFBD0(Ctx* __restrict c) {
  trace_call(0x803CFBD0u);
  c->r[3]=0u+0x00000000u; // 803CFBD0
  return; // 803CFBD4
}

// GetColor__25@unnamed@lyt_textBox_cpp@FRC11_GXColorS10
void f_803CFBD8(Ctx* __restrict c) {
  trace_call(0x803CFBD8u);
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 803CFBD8
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFBDC
  cmps(c,0,(int32_t)c->r[5],0); // 803CFBE0
  if (!crb(c,0)) { goto L_803CFBF0; } // 803CFBE4
  c->r[0]=0u+0x00000000u; // 803CFBE8
  goto L_803CFC00; // 803CFBEC
L_803CFBF0:;
  cmps(c,0,(int32_t)c->r[5],255); // 803CFBF0
  c->r[0]=0u+0x000000FFu; // 803CFBF4
  if (crb(c,1)) { goto L_803CFC00; } // 803CFBF8
  c->r[0]=c->r[5]|c->r[5]; // 803CFBFC
L_803CFC00:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 803CFC00
  W8(c->r[1]+0x00000008u,c->r[0]); // 803CFC04
  cmps(c,0,(int32_t)c->r[5],0); // 803CFC08
  if (!crb(c,0)) { goto L_803CFC18; } // 803CFC0C
  c->r[0]=0u+0x00000000u; // 803CFC10
  goto L_803CFC28; // 803CFC14
L_803CFC18:;
  cmps(c,0,(int32_t)c->r[5],255); // 803CFC18
  c->r[0]=0u+0x000000FFu; // 803CFC1C
  if (crb(c,1)) { goto L_803CFC28; } // 803CFC20
  c->r[0]=c->r[5]|c->r[5]; // 803CFC24
L_803CFC28:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 803CFC28
  W8(c->r[1]+0x00000009u,c->r[0]); // 803CFC2C
  cmps(c,0,(int32_t)c->r[5],0); // 803CFC30
  if (!crb(c,0)) { goto L_803CFC40; } // 803CFC34
  c->r[0]=0u+0x00000000u; // 803CFC38
  goto L_803CFC50; // 803CFC3C
L_803CFC40:;
  cmps(c,0,(int32_t)c->r[5],255); // 803CFC40
  c->r[0]=0u+0x000000FFu; // 803CFC44
  if (crb(c,1)) { goto L_803CFC50; } // 803CFC48
  c->r[0]=c->r[5]|c->r[5]; // 803CFC4C
L_803CFC50:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 803CFC50
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803CFC54
  cmps(c,0,(int32_t)c->r[4],0); // 803CFC58
  if (!crb(c,0)) { goto L_803CFC68; } // 803CFC5C
  c->r[0]=0u+0x00000000u; // 803CFC60
  goto L_803CFC78; // 803CFC64
L_803CFC68:;
  cmps(c,0,(int32_t)c->r[4],255); // 803CFC68
  c->r[0]=0u+0x000000FFu; // 803CFC6C
  if (crb(c,1)) { goto L_803CFC78; } // 803CFC70
  c->r[0]=c->r[4]|c->r[4]; // 803CFC74
L_803CFC78:;
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803CFC78
  c->r[0]=R32(c->r[1]+0x00000008u); // 803CFC7C
  W32(c->r[3]+0x00000000u,c->r[0]); // 803CFC80
  c->r[1]=c->r[1]+0x00000010u; // 803CFC84
  return; // 803CFC88
}

// __ct__Q36nw4hbm3lyt7TextBoxFPCQ46nw4hbm3lyt3res7TextBoxRCQ36nw4hbm3lyt11ResBlockSet
void f_803CFC8C(Ctx* __restrict c) {
  trace_call(0x803CFC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFC8C
  c->r[0]=c->lr; // 803CFC90
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CFC94
  c->r[11]=c->r[1]+0x00000030u; // 803CFC98
  c->lr=0x803CFCA0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803CFC9C
  c->r[28]=c->r[3]|c->r[3]; // 803CFCA0
  c->r[29]=c->r[4]|c->r[4]; // 803CFCA4
  c->r[30]=c->r[5]|c->r[5]; // 803CFCA8
  c->lr=0x803CFCB0u; f_803CE6D4(c); // 803CFCAC
  c->r[3]=0u+0x80440000u; // 803CFCB0
  c->r[4]=0u+0x803D0000u; // 803CFCB4
  c->r[3]=c->r[3]+0xFFFF915Cu; // 803CFCB8
  c->r[5]=0u+0x803D0000u; // 803CFCBC
  W32(c->r[28]+0x00000000u,c->r[3]); // 803CFCC0
  c->r[3]=c->r[28]+0x000000D8u; // 803CFCC4
  c->r[4]=c->r[4]+0xFFFFB5BCu; // 803CFCC8
  c->r[5]=c->r[5]+0xFFFF9398u; // 803CFCCC
  c->r[6]=0u+0x00000004u; // 803CFCD0
  c->r[7]=0u+0x00000002u; // 803CFCD4
  c->lr=0x803CFCDCu; f_80289B34(c); // 803CFCD8
  c->r[0]=R16(c->r[29]+0x0000004Cu); // 803CFCDC
  c->r[3]=0u+0x803F0000u; // 803CFCE0
  {uint32_t ea=c->r[3]+0x00000EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CFCE4
  c->r[31]=rotl(c->r[0],31)&0x0000FFFFu; cr0(c,c->r[31]); // 803CFCE8
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 803CFCEC
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 803CFCF0
  if (crb(c,2)) { goto L_803CFD00; } // 803CFCF4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 803CFCF8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 803CFCFC
L_803CFD00:;
  c->r[3]=0u+0x55550000u; // 803CFD00
  c->r[0]=R8(c->r[28]+0x000000FCu); // 803CFD04
  c->r[8]=c->r[3]+0x00005556u; // 803CFD08
  c->r[9]=0u+0x00000000u; // 803CFD0C
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[0])>>32); // 803CFD10
  c->r[3]=0u+0x803F0000u; // 803CFD14
  {uint32_t ea=c->r[3]+0x00000EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CFD18
  c->r[4]=0u+0x00000000u; // 803CFD1C
  W32(c->r[28]+0x000000D4u,c->r[9]); // 803CFD20
  c->r[3]=c->r[28]+0x000000FDu; // 803CFD24
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 803CFD28
  W16(c->r[28]+0x000000F8u,c->r[9]); // 803CFD2C
  c->r[0]=c->r[5]+c->r[0]; // 803CFD30
  c->r[5]=0u+0x00000001u; // 803CFD34
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 803CFD38
  W16(c->r[28]+0x000000FAu,c->r[9]); // 803CFD3C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803CFD40
  c->r[6]=c->r[0]-c->r[6]; // 803CFD44
  W32(c->r[28]+0x000000E0u,c->r[9]); // 803CFD48
  c->r[0]=c->r[6]+0x00000001u; // 803CFD4C
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 803CFD50
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803CFD54
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[7])>>32); // 803CFD58
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803CFD5C
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[0]);} // 803CFD60
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 803CFD64
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[0]);} // 803CFD68
  c->r[0]=c->r[6]+c->r[0]; // 803CFD6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 803CFD70
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 803CFD74
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[0]);} // 803CFD78
  c->r[0]=c->r[7]-c->r[0]; // 803CFD7C
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 803CFD80
  W32(c->r[28]+0x000000F4u,c->r[9]); // 803CFD84
  c->r[0]=c->r[6]+0x00000003u; // 803CFD88
  W8(c->r[28]+0x000000FCu,c->r[0]); // 803CFD8C
  c->lr=0x803CFD94u; f_800043EC(c); // 803CFD90
  cmps(c,0,(int32_t)c->r[31],0); // 803CFD94
  if (crb(c,2)) { goto L_803CFDB4; } // 803CFD98
  c->r[12]=R32(c->r[28]+0x00000000u); // 803CFD9C
  c->r[3]=c->r[28]|c->r[28]; // 803CFDA0
  c->r[4]=c->r[31]|c->r[31]; // 803CFDA4
  c->r[12]=R32(c->r[12]+0x00000064u); // 803CFDA8
  c->ctr=c->r[12]; // 803CFDAC
  if (true) { c->lr=0x803CFDB4u; dispatch(c,c->ctr); } // 803CFDB0
L_803CFDB4:;
  c->r[4]=R16(c->r[29]+0x0000004Eu); // 803CFDB4
  cmpu(c,0,c->r[4],0x00000002u); // 803CFDB8
  if (crb(c,0)) { goto L_803CFDF8; } // 803CFDBC
  c->r[0]=R32(c->r[28]+0x000000D4u); // 803CFDC0
  cmps(c,0,(int32_t)c->r[0],0); // 803CFDC4
  if (crb(c,2)) { goto L_803CFDF8; } // 803CFDC8
  c->r[12]=R32(c->r[28]+0x00000000u); // 803CFDCC
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 803CFDD0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803CFDD4
  c->r[4]=R32(c->r[29]+0x00000058u); // 803CFDD8
  c->r[12]=R32(c->r[12]+0x00000070u); // 803CFDDC
  c->r[3]=c->r[28]|c->r[28]; // 803CFDE0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 803CFDE4
  c->r[5]=0u+0x00000000u; // 803CFDE8
  c->r[4]=c->r[29]+c->r[4]; // 803CFDEC
  c->ctr=c->r[12]; // 803CFDF0
  if (true) { c->lr=0x803CFDF8u; dispatch(c,c->ctr); } // 803CFDF4
L_803CFDF8:;
  c->r[6]=R32(c->r[29]+0x0000005Cu); // 803CFDF8
  c->r[5]=R32(c->r[29]+0x00000060u); // 803CFDFC
  {uint32_t ea=c->r[29]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 803CFE00
  {uint32_t ea=c->r[29]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 803CFE04
  c->r[4]=R8(c->r[29]+0x00000054u); // 803CFE08
  {uint32_t ea=c->r[29]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803CFE0C
  {uint32_t ea=c->r[29]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 803CFE10
  c->r[0]=R16(c->r[29]+0x00000052u); // 803CFE14
  c->r[3]=R32(c->r[30]+0x00000004u); // 803CFE18
  W32(c->r[28]+0x000000D8u,c->r[6]); // 803CFE1C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 803CFE20
  c->r[6]=c->r[3]+0x0000000Cu; // 803CFE24
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 803CFE28
  W32(c->r[28]+0x000000DCu,c->r[5]); // 803CFE2C
  {uint32_t ea=c->r[28]+0x000000E4u; WF32(ea,c->f[3]);} // 803CFE30
  {uint32_t ea=c->r[28]+0x000000E8u; WF32(ea,c->f[2]);} // 803CFE34
  W8(c->r[28]+0x000000FCu,c->r[4]); // 803CFE38
  {uint32_t ea=c->r[28]+0x000000F0u; WF32(ea,c->f[1]);} // 803CFE3C
  {uint32_t ea=c->r[28]+0x000000ECu; WF32(ea,c->f[0]);} // 803CFE40
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CFE44
  c->r[0]=R32(c->r[6]+c->r[0]); // 803CFE48
  c->r[12]=R32(c->r[12]+0x00000010u); // 803CFE4C
  c->r[31]=c->r[6]+c->r[0]; // 803CFE50
  c->r[4]=c->r[31]|c->r[31]; // 803CFE54
  c->ctr=c->r[12]; // 803CFE58
  if (true) { c->lr=0x803CFE60u; dispatch(c,c->ctr); } // 803CFE5C
  cmps(c,0,(int32_t)c->r[3],0); // 803CFE60
  if (crb(c,2)) { goto L_803CFE70; } // 803CFE64
  W32(c->r[28]+0x000000E0u,c->r[3]); // 803CFE68
  goto L_803CFEE4; // 803CFE6C
L_803CFE70:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 803CFE70
  c->r[4]=0u+0x666F0000u; // 803CFE74
  c->r[5]=c->r[31]|c->r[31]; // 803CFE78
  c->r[6]=0u+0x00000000u; // 803CFE7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CFE80
  c->r[4]=c->r[4]+0x00006E74u; // 803CFE84
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CFE88
  c->ctr=c->r[12]; // 803CFE8C
  if (true) { c->lr=0x803CFE94u; dispatch(c,c->ctr); } // 803CFE90
  cmps(c,0,(int32_t)c->r[3],0); // 803CFE94
  c->r[27]=c->r[3]|c->r[3]; // 803CFE98
  if (crb(c,2)) { goto L_803CFEE4; } // 803CFE9C
  c->r[3]=0u+0x806C0000u; // 803CFEA0
  c->r[4]=0u+0x00000018u; // 803CFEA4
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CFEA8
  c->lr=0x803CFEB0u; f_802A703C(c); // 803CFEAC
  cmps(c,0,(int32_t)c->r[3],0); // 803CFEB0
  if (crb(c,2)) { goto L_803CFEE4; } // 803CFEB4
  c->r[31]=c->r[3]|c->r[3]; // 803CFEB8
  if (crb(c,2)) { goto L_803CFEC8; } // 803CFEBC
  c->lr=0x803CFEC4u; f_803D5914(c); // 803CFEC0
  c->r[31]=c->r[3]|c->r[3]; // 803CFEC4
L_803CFEC8:;
  c->r[3]=c->r[31]|c->r[31]; // 803CFEC8
  c->r[4]=c->r[27]|c->r[27]; // 803CFECC
  c->lr=0x803CFED4u; f_803D59A8(c); // 803CFED0
  c->r[0]=R8(c->r[28]+0x000000FDu); // 803CFED4
  W32(c->r[28]+0x000000E0u,c->r[31]); // 803CFED8
  c->r[0]=c->r[0]|0x00000080u; // 803CFEDC
  W8(c->r[28]+0x000000FDu,c->r[0]); // 803CFEE0
L_803CFEE4:;
  c->r[3]=0u+0x806C0000u; // 803CFEE4
  c->r[4]=0u+0x0000005Cu; // 803CFEE8
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CFEEC
  c->lr=0x803CFEF4u; f_802A703C(c); // 803CFEF0
  cmps(c,0,(int32_t)c->r[3],0); // 803CFEF4
  if (crb(c,2)) { goto L_803CFF24; } // 803CFEF8
  c->r[0]=R16(c->r[29]+0x00000050u); // 803CFEFC
  c->r[5]=R32(c->r[30]+0x00000008u); // 803CFF00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803CFF04
  c->r[4]=c->r[5]+c->r[0]; // 803CFF08
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803CFF0C
  c->r[4]=c->r[5]+c->r[0]; // 803CFF10
  if (crb(c,2)) { goto L_803CFF20; } // 803CFF14
  c->r[5]=c->r[30]|c->r[30]; // 803CFF18
  c->lr=0x803CFF20u; f_803CB5C8(c); // 803CFF1C
L_803CFF20:;
  W32(c->r[28]+0x00000028u,c->r[3]); // 803CFF20
L_803CFF24:;
  c->r[11]=c->r[1]+0x00000030u; // 803CFF24
  c->r[3]=c->r[28]|c->r[28]; // 803CFF28
  c->lr=0x803CFF30u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803CFF2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803CFF30
  c->lr=c->r[0]; // 803CFF34
  c->r[1]=c->r[1]+0x00000030u; // 803CFF38
  return; // 803CFF3C
}

// __dt__Q36nw4hbm3lyt7TextBoxFv
void f_803CFF40(Ctx* __restrict c) {
  trace_call(0x803CFF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803CFF40
  c->r[0]=c->lr; // 803CFF44
  cmps(c,0,(int32_t)c->r[3],0); // 803CFF48
  W32(c->r[1]+0x00000034u,c->r[0]); // 803CFF4C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803CFF50
  c->r[31]=c->r[4]|c->r[4]; // 803CFF54
  W32(c->r[1]+0x00000028u,c->r[30]); // 803CFF58
  c->r[30]=c->r[3]|c->r[3]; // 803CFF5C
  if (crb(c,2)) { goto L_803D00B4; } // 803CFF60
  c->r[0]=R8(c->r[3]+0x000000FDu); // 803CFF64
  c->r[4]=0u+0x80440000u; // 803CFF68
  c->r[4]=c->r[4]+0xFFFF915Cu; // 803CFF6C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 803CFF70
  W32(c->r[3]+0x00000000u,c->r[4]); // 803CFF74
  if (crb(c,2)) { goto L_803CFFB0; } // 803CFF78
  c->r[3]=R32(c->r[3]+0x000000E0u); // 803CFF7C
  c->r[4]=0u+0xFFFFFFFFu; // 803CFF80
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CFF84
  c->r[12]=R32(c->r[12]+0x00000008u); // 803CFF88
  c->ctr=c->r[12]; // 803CFF8C
  if (true) { c->lr=0x803CFF94u; dispatch(c,c->ctr); } // 803CFF90
  c->r[3]=0u+0x806C0000u; // 803CFF94
  c->r[4]=R32(c->r[30]+0x000000E0u); // 803CFF98
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803CFF9C
  c->lr=0x803CFFA4u; f_802A704C(c); // 803CFFA0
  c->r[0]=R8(c->r[30]+0x000000FDu); // 803CFFA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 803CFFA8
  W8(c->r[30]+0x000000FDu,c->r[0]); // 803CFFAC
L_803CFFB0:;
  c->r[0]=0u+0x00000000u; // 803CFFB0
  W32(c->r[30]+0x000000E0u,c->r[0]); // 803CFFB4
  goto L_803D0010; // 803CFFB8
  if (true) { c->lr=0x803CFFC0u; dispatch(c,c->ctr); } // 803CFFBC
  c->r[0]=c->r[3]^0x80000000u; // 803CFFC0
  c->r[3]=R32(c->r[30]+0x000000E0u); // 803CFFC4
  c->r[4]=0u+0x43300000u; // 803CFFC8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803CFFCC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803CFFD0
  W32(c->r[1]+0x00000018u,c->r[4]); // 803CFFD4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803CFFD8
  c->ctr=c->r[12]; // 803CFFDC
  if (true) { c->lr=0x803CFFE4u; dispatch(c,c->ctr); } // 803CFFE0
  c->r[0]=c->r[3]^0x80000000u; // 803CFFE4
  W32(c->r[1]+0x00000020u,c->r[4]); // 803CFFE8
  {uint32_t ea=c->r[3]+0x00000EB0u; c->f[1]=RF64(ea);} // 803CFFEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803CFFF0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 803CFFF4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803CFFF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803CFFFC
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[2]);} // 803D0000
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803D0004
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[0]);} // 803D0008
  goto L_803D0028; // 803D000C
L_803D0010:;
  c->r[3]=0u+0x803F0000u; // 803D0010
  {uint32_t ea=c->r[3]+0x00000EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0014
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803D0018
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803D001C
  {uint32_t ea=c->r[30]+0x000000E4u; WF32(ea,c->f[0]);} // 803D0020
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 803D0024
L_803D0028:;
  c->r[3]=R32(c->r[30]+0x00000028u); // 803D0028
  cmps(c,0,(int32_t)c->r[3],0); // 803D002C
  if (crb(c,2)) { goto L_803D006C; } // 803D0030
  c->r[0]=R8(c->r[3]+0x00000054u); // 803D0034
  cmps(c,0,(int32_t)c->r[0],0); // 803D0038
  if (!crb(c,2)) { goto L_803D006C; } // 803D003C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D0040
  c->r[4]=0u+0xFFFFFFFFu; // 803D0044
  c->r[12]=R32(c->r[12]+0x00000008u); // 803D0048
  c->ctr=c->r[12]; // 803D004C
  if (true) { c->lr=0x803D0054u; dispatch(c,c->ctr); } // 803D0050
  c->r[3]=0u+0x806C0000u; // 803D0054
  c->r[4]=R32(c->r[30]+0x00000028u); // 803D0058
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803D005C
  c->lr=0x803D0064u; f_802A704C(c); // 803D0060
  c->r[0]=0u+0x00000000u; // 803D0064
  W32(c->r[30]+0x00000028u,c->r[0]); // 803D0068
L_803D006C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803D006C
  c->r[3]=c->r[30]|c->r[30]; // 803D0070
  c->r[12]=R32(c->r[12]+0x00000068u); // 803D0074
  c->ctr=c->r[12]; // 803D0078
  if (true) { c->lr=0x803D0080u; dispatch(c,c->ctr); } // 803D007C
  c->r[4]=0u+0x803D0000u; // 803D0080
  c->r[3]=c->r[30]+0x000000D8u; // 803D0084
  c->r[4]=c->r[4]+0xFFFF9398u; // 803D0088
  c->r[5]=0u+0x00000004u; // 803D008C
  c->r[6]=0u+0x00000002u; // 803D0090
  c->lr=0x803D0098u; f_80289C2C(c); // 803D0094
  c->r[3]=c->r[30]|c->r[30]; // 803D0098
  c->r[4]=0u+0x00000000u; // 803D009C
  c->lr=0x803D00A4u; f_803CE7FC(c); // 803D00A0
  cmps(c,0,(int32_t)c->r[31],0); // 803D00A4
  if (!crb(c,1)) { goto L_803D00B4; } // 803D00A8
  c->r[3]=c->r[30]|c->r[30]; // 803D00AC
  c->lr=0x803D00B4u; f_802896EC(c); // 803D00B0
L_803D00B4:;
  c->r[3]=c->r[30]|c->r[30]; // 803D00B4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D00B8
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D00BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D00C0
  c->lr=c->r[0]; // 803D00C4
  c->r[1]=c->r[1]+0x00000030u; // 803D00C8
  return; // 803D00CC
}

// fn_803D00D0
void f_803D00D0(Ctx* __restrict c) {
  trace_call(0x803D00D0u);
  c->r[5]=rotl(c->r[5],31)&0x7FFFFFFFu; // 803D00D0
  goto L_803D00D8; // 803D00D4
L_803D00D8:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803D00D8
  c->r[7]=c->r[4]+c->r[0]; // 803D00DC
  c->r[6]=R8(c->r[7]+0x000000D8u); // 803D00E0
  c->r[5]=R8(c->r[7]+0x000000D9u); // 803D00E4
  c->r[4]=R8(c->r[7]+0x000000DAu); // 803D00E8
  c->r[0]=R8(c->r[7]+0x000000DBu); // 803D00EC
  W8(c->r[3]+0x00000000u,c->r[6]); // 803D00F0
  W8(c->r[3]+0x00000001u,c->r[5]); // 803D00F4
  W8(c->r[3]+0x00000002u,c->r[4]); // 803D00F8
  W8(c->r[3]+0x00000003u,c->r[0]); // 803D00FC
  return; // 803D0100
}

// fn_803D0104
void f_803D0104(Ctx* __restrict c) {
  trace_call(0x803D0104u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0104
  c->r[0]=c->lr; // 803D0108
  c->r[8]=R8(c->r[5]+0x00000000u); // 803D010C
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 803D0110
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0114
  c->r[7]=R8(c->r[5]+0x00000001u); // 803D0118
  c->r[6]=R8(c->r[5]+0x00000002u); // 803D011C
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D0120
  c->r[5]=c->r[1]+0x00000008u; // 803D0124
  W8(c->r[1]+0x00000008u,c->r[8]); // 803D0128
  W8(c->r[1]+0x00000009u,c->r[7]); // 803D012C
  W8(c->r[1]+0x0000000Au,c->r[6]); // 803D0130
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803D0134
  c->lr=0x803D013Cu; f_803D014C(c); // 803D0138
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D013C
  c->lr=c->r[0]; // 803D0140
  c->r[1]=c->r[1]+0x00000010u; // 803D0144
  return; // 803D0148
}

// fn_803D014C
void f_803D014C(Ctx* __restrict c) {
  trace_call(0x803D014Cu);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803D014C
  c->r[6]=R8(c->r[5]+0x00000000u); // 803D0150
  c->r[4]=c->r[3]+c->r[0]; // 803D0154
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D0158
  W8(c->r[4]+0x000000D8u,c->r[6]); // 803D015C
  c->r[3]=R8(c->r[5]+0x00000002u); // 803D0160
  W8(c->r[4]+0x000000D9u,c->r[0]); // 803D0164
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D0168
  W8(c->r[4]+0x000000DAu,c->r[3]); // 803D016C
  W8(c->r[4]+0x000000DBu,c->r[0]); // 803D0170
  return; // 803D0174
}

// fn_803D0178
void f_803D0178(Ctx* __restrict c) {
  trace_call(0x803D0178u);
  c->r[5]=rotl(c->r[4],31)&0x7FFFFFFCu; // 803D0178
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803D017C
  c->r[3]=c->r[3]+c->r[5]; // 803D0180
  c->r[3]=c->r[3]+c->r[0]; // 803D0184
  c->r[3]=R8(c->r[3]+0x000000D8u); // 803D0188
  return; // 803D018C
}

// fn_803D0190
void f_803D0190(Ctx* __restrict c) {
  trace_call(0x803D0190u);
  c->r[6]=rotl(c->r[4],31)&0x7FFFFFFCu; // 803D0190
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803D0194
  c->r[3]=c->r[3]+c->r[6]; // 803D0198
  c->r[3]=c->r[3]+c->r[0]; // 803D019C
  W8(c->r[3]+0x000000D8u,c->r[5]); // 803D01A0
  return; // 803D01A4
}

// DrawSelf__Q36nw4hbm3lyt7TextBoxFRCQ36nw4hbm3lyt8DrawInfo
void f_803D01A8(Ctx* __restrict c) {
  trace_call(0x803D01A8u);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D01A8
  c->r[0]=c->lr; // 803D01AC
  W32(c->r[1]+0x00000204u,c->r[0]); // 803D01B0
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 803D01B4
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 803D01B8
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[30]);} // 803D01BC
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,30,ea,0,0);} // 803D01C0
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[29]);} // 803D01C4
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,29,ea,0,0);} // 803D01C8
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[28]);} // 803D01CC
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,28,ea,0,0);} // 803D01D0
  c->r[11]=c->r[1]+0x000001C0u; // 803D01D4
  c->lr=0x803D01DCu; f_80289DC0(c); // 803D01D8
  c->r[0]=R32(c->r[3]+0x000000D4u); // 803D01DC
  c->r[14]=0u+0x803F0000u; // 803D01E0
  c->r[29]=c->r[3]|c->r[3]; // 803D01E4
  cmps(c,0,(int32_t)c->r[0],0); // 803D01E8
  c->r[14]=c->r[14]+0x00000EA8u; // 803D01EC
  if (crb(c,2)) { goto L_803D06D8; } // 803D01F0
  c->r[0]=R32(c->r[3]+0x000000E0u); // 803D01F4
  cmps(c,0,(int32_t)c->r[0],0); // 803D01F8
  if (crb(c,2)) { goto L_803D06D8; } // 803D01FC
  c->r[0]=R32(c->r[3]+0x00000028u); // 803D0200
  cmps(c,0,(int32_t)c->r[0],0); // 803D0204
  if (!crb(c,2)) { goto L_803D0210; } // 803D0208
  goto L_803D06D8; // 803D020C
L_803D0210:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D0210
  c->r[12]=R32(c->r[12]+0x00000060u); // 803D0214
  c->ctr=c->r[12]; // 803D0218
  if (true) { c->lr=0x803D0220u; dispatch(c,c->ctr); } // 803D021C
  c->r[3]=c->r[1]+0x000000C8u; // 803D0220
  c->lr=0x803D0228u; f_803D6A4C(c); // 803D0224
  c->r[4]=R32(c->r[29]+0x000000E0u); // 803D0228
  c->r[3]=c->r[1]+0x000000C8u; // 803D022C
  c->lr=0x803D0234u; f_803D3D90(c); // 803D0230
  {uint32_t ea=c->r[29]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0234
  c->r[3]=c->r[1]+0x000000C8u; // 803D0238
  {uint32_t ea=c->r[29]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D023C
  c->lr=0x803D0244u; f_803D4C9C(c); // 803D0240
  {uint32_t ea=c->r[29]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0244
  c->r[3]=c->r[1]+0x000000C8u; // 803D0248
  c->lr=0x803D0250u; f_803D6B8C(c); // 803D024C
  {uint32_t ea=c->r[29]+0x000000F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0250
  c->r[3]=c->r[1]+0x000000C8u; // 803D0254
  c->lr=0x803D025Cu; f_803D6B94(c); // 803D0258
  c->r[0]=R8(c->r[29]+0x000000D8u); // 803D025C
  c->r[3]=c->r[1]+0x00000030u; // 803D0260
  c->r[4]=c->r[1]+0x00000020u; // 803D0264
  W8(c->r[1]+0x00000020u,c->r[0]); // 803D0268
  c->r[0]=R8(c->r[29]+0x000000D9u); // 803D026C
  W8(c->r[1]+0x00000021u,c->r[0]); // 803D0270
  c->r[0]=R8(c->r[29]+0x000000DAu); // 803D0274
  W8(c->r[1]+0x00000022u,c->r[0]); // 803D0278
  c->r[0]=R8(c->r[29]+0x000000DBu); // 803D027C
  W8(c->r[1]+0x00000023u,c->r[0]); // 803D0280
  c->r[5]=R8(c->r[29]+0x000000CEu); // 803D0284
  c->lr=0x803D028Cu; f_803C978C(c); // 803D0288
  c->r[0]=R8(c->r[29]+0x000000DCu); // 803D028C
  c->r[3]=c->r[1]+0x0000002Cu; // 803D0290
  c->r[4]=c->r[1]+0x0000001Cu; // 803D0294
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 803D0298
  c->r[0]=R8(c->r[29]+0x000000DDu); // 803D029C
  W8(c->r[1]+0x0000001Du,c->r[0]); // 803D02A0
  c->r[0]=R8(c->r[29]+0x000000DEu); // 803D02A4
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 803D02A8
  c->r[0]=R8(c->r[29]+0x000000DFu); // 803D02AC
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 803D02B0
  c->r[5]=R8(c->r[29]+0x000000CEu); // 803D02B4
  c->lr=0x803D02BCu; f_803C978C(c); // 803D02B8
  c->r[5]=R32(c->r[1]+0x00000030u); // 803D02BC
  c->r[3]=c->r[1]+0x000000C8u; // 803D02C0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 803D02C4
  c->r[4]=0u+0x00000000u; // 803D02C8
  cmpu(c,0,c->r[5],c->r[0]); // 803D02CC
  if (crb(c,2)) { goto L_803D02D8; } // 803D02D0
  c->r[4]=0u+0x00000002u; // 803D02D4
L_803D02D8:;
  c->lr=0x803D02DCu; f_803D485C(c); // 803D02D8
  c->r[5]=R32(c->r[1]+0x00000030u); // 803D02DC
  c->r[3]=c->r[1]+0x000000C8u; // 803D02E0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 803D02E4
  c->r[4]=c->r[1]+0x00000018u; // 803D02E8
  W32(c->r[1]+0x00000018u,c->r[5]); // 803D02EC
  c->r[5]=c->r[1]+0x00000014u; // 803D02F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D02F4
  c->lr=0x803D02FCu; f_803D4B0C(c); // 803D02F8
  c->r[6]=R32(c->r[29]+0x00000028u); // 803D02FC
  c->r[3]=c->r[1]+0x00000028u; // 803D0300
  c->r[4]=c->r[1]+0x00000040u; // 803D0304
  c->r[5]=R16(c->r[6]+0x00000024u); // 803D0308
  c->r[0]=R16(c->r[6]+0x00000026u); // 803D030C
  W16(c->r[1]+0x00000040u,c->r[5]); // 803D0310
  W16(c->r[1]+0x00000042u,c->r[0]); // 803D0314
  c->r[5]=R16(c->r[6]+0x00000028u); // 803D0318
  c->r[0]=R16(c->r[6]+0x0000002Au); // 803D031C
  W16(c->r[1]+0x00000044u,c->r[5]); // 803D0320
  W16(c->r[1]+0x00000046u,c->r[0]); // 803D0324
  c->lr=0x803D032Cu; f_803CFBD8(c); // 803D0328
  c->r[6]=R32(c->r[29]+0x00000028u); // 803D032C
  c->r[3]=c->r[1]+0x00000024u; // 803D0330
  c->r[4]=c->r[1]+0x00000038u; // 803D0334
  c->r[5]=R16(c->r[6]+0x0000002Cu); // 803D0338
  c->r[0]=R16(c->r[6]+0x0000002Eu); // 803D033C
  W16(c->r[1]+0x00000038u,c->r[5]); // 803D0340
  W16(c->r[1]+0x0000003Au,c->r[0]); // 803D0344
  c->r[5]=R16(c->r[6]+0x00000030u); // 803D0348
  c->r[0]=R16(c->r[6]+0x00000032u); // 803D034C
  W16(c->r[1]+0x0000003Cu,c->r[5]); // 803D0350
  W16(c->r[1]+0x0000003Eu,c->r[0]); // 803D0354
  c->lr=0x803D035Cu; f_803CFBD8(c); // 803D0358
  c->r[5]=R32(c->r[1]+0x00000028u); // 803D035C
  c->r[3]=c->r[1]+0x000000C8u; // 803D0360
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D0364
  c->r[4]=c->r[1]+0x00000010u; // 803D0368
  W32(c->r[1]+0x00000010u,c->r[5]); // 803D036C
  c->r[5]=c->r[1]+0x0000000Cu; // 803D0370
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803D0374
  c->lr=0x803D037Cu; f_803D4818(c); // 803D0378
  c->r[4]=R32(c->r[29]+0x000000F4u); // 803D037C
  cmps(c,0,(int32_t)c->r[4],0); // 803D0380
  if (crb(c,2)) { goto L_803D0390; } // 803D0384
  c->r[3]=c->r[1]+0x000000C8u; // 803D0388
  c->lr=0x803D0390u; f_803D6BAC(c); // 803D038C
L_803D0390:;
  c->r[3]=c->r[1]+0x000000C8u; // 803D0390
  c->lr=0x803D0398u; f_803D3DA0(c); // 803D0394
  c->r[4]=c->r[29]|c->r[29]; // 803D0398
  c->r[3]=c->r[1]+0x00000058u; // 803D039C
  c->r[5]=c->r[1]+0x000000C8u; // 803D03A0
  c->lr=0x803D03A8u; f_803D0DAC(c); // 803D03A4
  c->r[3]=0u+0x55550000u; // 803D03A8
  c->r[4]=R8(c->r[29]+0x000000FCu); // 803D03AC
  c->r[0]=c->r[3]+0x00005556u; // 803D03B0
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 803D03B4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803D03B8
  c->r[0]=c->r[3]+c->r[0]; // 803D03BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 803D03C0
  c->r[0]=c->r[4]-c->r[0]; // 803D03C4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803D03C8
  cmps(c,0,(int32_t)c->r[0],1); // 803D03CC
  if (crb(c,2)) { goto L_803D03F0; } // 803D03D0
  if (!crb(c,0)) { goto L_803D03DC; } // 803D03D4
  goto L_803D03E8; // 803D03D8
L_803D03DC:;
  cmps(c,0,(int32_t)c->r[0],3); // 803D03DC
  if (!crb(c,0)) { goto L_803D03E8; } // 803D03E0
  goto L_803D03F8; // 803D03E4
L_803D03E8:;
  {uint32_t ea=c->r[14]+0x00000000u; c->f[28]=c->ps1[28]=RF32(ea);} // 803D03E8
  goto L_803D03FC; // 803D03EC
L_803D03F0:;
  {uint32_t ea=c->r[14]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 803D03F0
  goto L_803D03FC; // 803D03F4
L_803D03F8:;
  {uint32_t ea=c->r[14]+0x00000014u; c->f[28]=c->ps1[28]=RF32(ea);} // 803D03F8
L_803D03FC:;
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D03FC
  c->r[3]=c->r[1]+0x000000C8u; // 803D0400
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0404
  c->r[31]=R32(c->r[29]+0x000000D4u); // 803D0408
  c->f[29]=c->ps1[29]=S(c->f[1]-c->f[0]); // 803D040C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0410
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D0414
  c->lr=0x803D041Cu; f_803D4FE4(c); // 803D0418
  c->r[30]=R16(c->r[29]+0x000000FAu); // 803D041C
  cmps(c,0,(int32_t)c->r[30],0); // 803D0420
  if (!crb(c,1)) { goto L_803D06CC; } // 803D0424
  {uint32_t ea=c->r[14]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D0428
  goto L_803D06C4; // 803D042C
L_803D0430:;
  c->r[15]=R8(c->r[1]+0x000000E6u); // 803D0430
  c->f[1]=c->f[31]; // 803D0434
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 803D0438
  c->f[2]=c->f[31]; // 803D043C
  c->r[0]=R8(c->r[1]+0x000000E4u); // 803D0440
  c->r[3]=c->r[1]+0x00000068u; // 803D0444
  W32(c->r[1]+0x00000168u,c->r[15]); // 803D0448
  c->r[15]=R8(c->r[1]+0x000000E7u); // 803D044C
  W8(c->r[1]+0x00000084u,c->r[0]); // 803D0450
  c->r[0]=R32(c->r[1]+0x00000168u); // 803D0454
  W32(c->r[1]+0x00000128u,c->r[15]); // 803D0458
  c->r[15]=R32(c->r[1]+0x000000E8u); // 803D045C
  W8(c->r[1]+0x00000086u,c->r[0]); // 803D0460
  c->r[0]=R32(c->r[1]+0x00000128u); // 803D0464
  W32(c->r[1]+0x0000012Cu,c->r[15]); // 803D0468
  c->r[15]=R32(c->r[1]+0x000000ECu); // 803D046C
  W8(c->r[1]+0x00000087u,c->r[0]); // 803D0470
  c->r[0]=R32(c->r[1]+0x0000012Cu); // 803D0474
  W32(c->r[1]+0x00000130u,c->r[15]); // 803D0478
  c->r[15]=R32(c->r[1]+0x000000F0u); // 803D047C
  W32(c->r[1]+0x00000088u,c->r[0]); // 803D0480
  c->r[0]=R32(c->r[1]+0x00000130u); // 803D0484
  W32(c->r[1]+0x00000134u,c->r[15]); // 803D0488
  c->r[15]=R32(c->r[1]+0x000000F4u); // 803D048C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 803D0490
  c->r[0]=R32(c->r[1]+0x00000134u); // 803D0494
  W32(c->r[1]+0x00000138u,c->r[15]); // 803D0498
  c->r[15]=R32(c->r[1]+0x000000F8u); // 803D049C
  W32(c->r[1]+0x00000090u,c->r[0]); // 803D04A0
  c->r[0]=R32(c->r[1]+0x00000138u); // 803D04A4
  W32(c->r[1]+0x0000013Cu,c->r[15]); // 803D04A8
  c->r[15]=R32(c->r[1]+0x000000FCu); // 803D04AC
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D04B0
  c->r[0]=R32(c->r[1]+0x0000013Cu); // 803D04B4
  W32(c->r[1]+0x00000140u,c->r[15]); // 803D04B8
  c->r[15]=R32(c->r[1]+0x00000100u); // 803D04BC
  W32(c->r[1]+0x00000098u,c->r[0]); // 803D04C0
  c->r[0]=R32(c->r[1]+0x00000140u); // 803D04C4
  W32(c->r[1]+0x00000144u,c->r[15]); // 803D04C8
  c->r[15]=R32(c->r[1]+0x00000104u); // 803D04CC
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 803D04D0
  c->r[0]=R32(c->r[1]+0x00000144u); // 803D04D4
  W32(c->r[1]+0x00000148u,c->r[15]); // 803D04D8
  c->r[15]=R16(c->r[1]+0x00000108u); // 803D04DC
  W32(c->r[1]+0x000000A0u,c->r[0]); // 803D04E0
  c->r[0]=R32(c->r[1]+0x00000148u); // 803D04E4
  W32(c->r[1]+0x0000014Cu,c->r[15]); // 803D04E8
  c->r[15]=R8(c->r[1]+0x0000010Au); // 803D04EC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 803D04F0
  c->r[0]=R32(c->r[1]+0x0000014Cu); // 803D04F4
  W32(c->r[1]+0x00000150u,c->r[15]); // 803D04F8
  c->r[15]=R8(c->r[1]+0x0000010Bu); // 803D04FC
  W16(c->r[1]+0x000000A8u,c->r[0]); // 803D0500
  c->r[0]=R32(c->r[1]+0x00000150u); // 803D0504
  W32(c->r[1]+0x00000154u,c->r[15]); // 803D0508
  c->r[15]=R32(c->r[1]+0x00000110u); // 803D050C
  W8(c->r[1]+0x000000AAu,c->r[0]); // 803D0510
  c->r[0]=R32(c->r[1]+0x00000154u); // 803D0514
  W32(c->r[1]+0x00000158u,c->r[15]); // 803D0518
  c->r[15]=R32(c->r[1]+0x0000011Cu); // 803D051C
  W8(c->r[1]+0x000000ABu,c->r[0]); // 803D0520
  c->r[0]=R32(c->r[1]+0x00000158u); // 803D0524
  W32(c->r[1]+0x0000015Cu,c->r[15]); // 803D0528
  c->r[15]=R32(c->r[1]+0x00000120u); // 803D052C
  W32(c->r[1]+0x000000B0u,c->r[0]); // 803D0530
  c->r[0]=R32(c->r[1]+0x0000015Cu); // 803D0534
  W32(c->r[1]+0x00000160u,c->r[15]); // 803D0538
  c->r[15]=R32(c->r[1]+0x00000124u); // 803D053C
  W32(c->r[1]+0x000000BCu,c->r[0]); // 803D0540
  c->r[0]=R32(c->r[1]+0x00000160u); // 803D0544
  c->r[16]=R32(c->r[1]+0x000000C8u); // 803D0548
  c->r[17]=R32(c->r[1]+0x000000CCu); // 803D054C
  c->r[18]=R8(c->r[1]+0x000000D0u); // 803D0550
  c->r[19]=R8(c->r[1]+0x000000D1u); // 803D0554
  c->r[20]=R8(c->r[1]+0x000000D2u); // 803D0558
  c->r[21]=R8(c->r[1]+0x000000D3u); // 803D055C
  c->r[22]=R8(c->r[1]+0x000000D4u); // 803D0560
  c->r[23]=R8(c->r[1]+0x000000D5u); // 803D0564
  c->r[24]=R8(c->r[1]+0x000000D6u); // 803D0568
  c->r[25]=R8(c->r[1]+0x000000D7u); // 803D056C
  c->r[26]=R8(c->r[1]+0x000000D8u); // 803D0570
  c->r[27]=R8(c->r[1]+0x000000D9u); // 803D0574
  c->r[28]=R8(c->r[1]+0x000000DAu); // 803D0578
  c->r[12]=R8(c->r[1]+0x000000DBu); // 803D057C
  c->r[11]=R8(c->r[1]+0x000000DCu); // 803D0580
  c->r[10]=R8(c->r[1]+0x000000DDu); // 803D0584
  c->r[9]=R8(c->r[1]+0x000000DEu); // 803D0588
  c->r[8]=R8(c->r[1]+0x000000DFu); // 803D058C
  c->r[7]=R8(c->r[1]+0x000000E0u); // 803D0590
  c->r[6]=R8(c->r[1]+0x000000E1u); // 803D0594
  c->r[5]=R8(c->r[1]+0x000000E2u); // 803D0598
  c->r[4]=R8(c->r[1]+0x000000E3u); // 803D059C
  c->r[14]=R8(c->r[1]+0x000000E5u); // 803D05A0
  {uint32_t ea=c->r[1]+0x0000010Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 803D05A4
  {uint32_t ea=c->r[1]+0x00000114u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D05A8
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D05AC
  W32(c->r[1]+0x000000C0u,c->r[0]); // 803D05B0
  c->r[0]=c->r[15]|c->r[15]; // 803D05B4
  W32(c->r[1]+0x00000164u,c->r[15]); // 803D05B8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[31]);} // 803D05BC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[31]);} // 803D05C0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[31]);} // 803D05C4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[31]);} // 803D05C8
  W32(c->r[1]+0x00000068u,c->r[16]); // 803D05CC
  W32(c->r[1]+0x0000006Cu,c->r[17]); // 803D05D0
  W8(c->r[1]+0x00000070u,c->r[18]); // 803D05D4
  W8(c->r[1]+0x00000071u,c->r[19]); // 803D05D8
  W8(c->r[1]+0x00000072u,c->r[20]); // 803D05DC
  W8(c->r[1]+0x00000073u,c->r[21]); // 803D05E0
  W8(c->r[1]+0x00000074u,c->r[22]); // 803D05E4
  W8(c->r[1]+0x00000075u,c->r[23]); // 803D05E8
  W8(c->r[1]+0x00000076u,c->r[24]); // 803D05EC
  W8(c->r[1]+0x00000077u,c->r[25]); // 803D05F0
  W8(c->r[1]+0x00000078u,c->r[26]); // 803D05F4
  W8(c->r[1]+0x00000079u,c->r[27]); // 803D05F8
  W8(c->r[1]+0x0000007Au,c->r[28]); // 803D05FC
  W8(c->r[1]+0x0000007Bu,c->r[12]); // 803D0600
  W8(c->r[1]+0x0000007Cu,c->r[11]); // 803D0604
  W8(c->r[1]+0x0000007Du,c->r[10]); // 803D0608
  W8(c->r[1]+0x0000007Eu,c->r[9]); // 803D060C
  W8(c->r[1]+0x0000007Fu,c->r[8]); // 803D0610
  W8(c->r[1]+0x00000080u,c->r[7]); // 803D0614
  W8(c->r[1]+0x00000081u,c->r[6]); // 803D0618
  W8(c->r[1]+0x00000082u,c->r[5]); // 803D061C
  W8(c->r[1]+0x00000083u,c->r[4]); // 803D0620
  W8(c->r[1]+0x00000085u,c->r[14]); // 803D0624
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[4]);} // 803D0628
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[3]);} // 803D062C
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 803D0630
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803D0634
  c->lr=0x803D063Cu; f_803D4FE4(c); // 803D0638
  c->f[1]=c->f[30]; // 803D063C
  c->r[5]=c->r[31]|c->r[31]; // 803D0640
  c->r[6]=c->r[30]|c->r[30]; // 803D0644
  c->r[3]=c->r[1]+0x00000048u; // 803D0648
  c->r[4]=c->r[1]+0x00000068u; // 803D064C
  c->r[7]=c->r[1]+0x00000008u; // 803D0650
  c->lr=0x803D0658u; f_803D0710(c); // 803D0654
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0658
  c->r[14]=c->r[3]|c->r[3]; // 803D065C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0660
  c->r[3]=c->r[1]+0x00000068u; // 803D0664
  c->r[4]=0u+0xFFFFFFFFu; // 803D0668
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 803D066C
  c->lr=0x803D0674u; f_803D6AA8(c); // 803D0670
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[30]); // 803D0674
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0678
  c->r[3]=c->r[1]+0x000000C8u; // 803D067C
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 803D0680
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D0684
  c->lr=0x803D068Cu; f_803D4FF0(c); // 803D0688
  c->r[4]=c->r[31]|c->r[31]; // 803D068C
  c->r[5]=c->r[14]|c->r[14]; // 803D0690
  c->r[3]=c->r[1]+0x000000C8u; // 803D0694
  c->lr=0x803D069Cu; f_803D6BBC(c); // 803D0698
  c->r[0]=R8(c->r[1]+0x00000008u); // 803D069C
  cmps(c,0,(int32_t)c->r[0],0); // 803D06A0
  if (crb(c,2)) { goto L_803D06B8; } // 803D06A4
  c->r[4]=0u+0x80440000u; // 803D06A8
  c->r[3]=c->r[1]+0x000000C8u; // 803D06AC
  c->r[4]=c->r[4]+0xFFFF9158u; // 803D06B0
  c->lr=0x803D06B8u; f_803D6DD8(c); // 803D06B4
L_803D06B8:;
  c->r[0]=rotl(c->r[14],1)&0xFFFFFFFEu; // 803D06B8
  c->r[30]=c->r[30]-c->r[14]; // 803D06BC
  c->r[31]=c->r[31]+c->r[0]; // 803D06C0
L_803D06C4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D06C4
  if (crb(c,1)) { IRQCHK(c); goto L_803D0430; } // 803D06C8
L_803D06CC:;
  c->r[3]=c->r[1]+0x000000C8u; // 803D06CC
  c->r[4]=0u+0xFFFFFFFFu; // 803D06D0
  c->lr=0x803D06D8u; f_803D6AA8(c); // 803D06D4
L_803D06D8:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 803D06D8
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 803D06DC
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,30,ea,0,0);} // 803D06E0
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[30]=RF64(ea);} // 803D06E4
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,29,ea,0,0);} // 803D06E8
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[29]=RF64(ea);} // 803D06EC
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,28,ea,0,0);} // 803D06F0
  c->r[11]=c->r[1]+0x000001C0u; // 803D06F4
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[28]=RF64(ea);} // 803D06F8
  c->lr=0x803D0700u; f_80289E0C(c); // 803D06FC
  c->r[0]=R32(c->r[1]+0x00000204u); // 803D0700
  c->lr=c->r[0]; // 803D0704
  c->r[1]=c->r[1]+0x00000200u; // 803D0708
  return; // 803D070C
}

// CalcLineRectImpl<w>__25@unnamed@lyt_textBox_cpp@FPQ36nw4hbm2ut4RectPQ36nw4hbm2ut17TextWriterBase<w>PCwifPb_i
void f_803D0710(Ctx* __restrict c) {
  trace_call(0x803D0710u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0710
  c->r[0]=c->lr; // 803D0714
  W32(c->r[1]+0x000000D4u,c->r[0]); // 803D0718
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 803D071C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 803D0720
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 803D0724
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 803D0728
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 803D072C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 803D0730
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 803D0734
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 803D0738
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 803D073C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 803D0740
  c->r[11]=c->r[1]+0x00000080u; // 803D0744
  c->lr=0x803D074Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D0748
  c->r[0]=0u+0x00000000u; // 803D074C
  c->f[30]=c->f[1]; // 803D0750
  c->r[25]=c->r[4]|c->r[4]; // 803D0754
  W32(c->r[1]+0x00000040u,c->r[0]); // 803D0758
  c->r[24]=c->r[3]|c->r[3]; // 803D075C
  c->r[26]=c->r[5]|c->r[5]; // 803D0760
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D0764
  c->r[27]=c->r[6]|c->r[6]; // 803D0768
  c->r[28]=c->r[7]|c->r[7]; // 803D076C
  W32(c->r[1]+0x00000048u,c->r[0]); // 803D0770
  c->r[3]=c->r[25]|c->r[25]; // 803D0774
  W32(c->r[1]+0x00000038u,c->r[4]); // 803D0778
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 803D077C
  c->lr=0x803D0784u; f_803D3D98(c); // 803D0780
  c->r[23]=0u+0x803F0000u; // 803D0784
  c->r[4]=c->r[3]|c->r[3]; // 803D0788
  {uint32_t ea=c->r[23]+0x00000EA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D078C
  c->r[3]=c->r[1]+0x00000028u; // 803D0790
  c->r[31]=0u+0x00000000u; // 803D0794
  c->lr=0x803D079Cu; f_803D0B3C(c); // 803D0798
  c->f[0]=c->f[31]; // 803D079C
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D07A0
  c->r[3]=c->r[25]|c->r[25]; // 803D07A4
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 803D07A8
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[0]);} // 803D07AC
  c->lr=0x803D07B4u; f_803D6B00(c); // 803D07B0
  c->f[0]=c->f[31]; // 803D07B4
  fcmp(c,0,c->f[0],c->f[1]); // 803D07B8
  if (!crb(c,1)) { goto L_803D07C4; } // 803D07BC
  goto L_803D07C8; // 803D07C0
L_803D07C4:;
  c->f[1]=c->f[0]; // 803D07C4
L_803D07C8:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[1]);} // 803D07C8
  c->r[3]=c->r[25]|c->r[25]; // 803D07CC
  c->lr=0x803D07D4u; f_803D6B00(c); // 803D07D0
  c->r[3]=0u+0x803F0000u; // 803D07D4
  {uint32_t ea=c->r[3]+0x00000EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D07D8
  fcmp(c,0,c->f[0],c->f[1]); // 803D07DC
  if (!crb(c,0)) { goto L_803D07E8; } // 803D07E0
  goto L_803D07EC; // 803D07E4
L_803D07E8:;
  c->f[1]=c->f[0]; // 803D07E8
L_803D07EC:;
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D07EC
  c->r[0]=0u+0x00000000u; // 803D07F0
  c->r[3]=c->r[1]+0x00000028u; // 803D07F4
  c->r[12]=c->r[1]+0x0000002Cu; // 803D07F8
  W8(c->r[28]+0x00000000u,c->r[0]); // 803D07FC
  W32(c->r[1]+0x00000028u,c->r[26]); // 803D0800
  {uint32_t ea=c->r[24]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D0804
  {uint32_t ea=c->r[24]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D0808
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D080C
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0810
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803D0814
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803D0818
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803D081C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803D0820
  c->lr=0x803D0828u; f_80289CA4(c); // 803D0824
  c->r[0]=c->r[0]|0x00000000u; // 803D0828
  c->r[5]=0u+0x803F0000u; // 803D082C
  c->r[4]=0u+0x803F0000u; // 803D0830
  {uint32_t ea=c->r[5]+0x00000EA8u; c->f[27]=c->ps1[27]=RF32(ea);} // 803D0834
  c->r[29]=c->r[3]|c->r[3]; // 803D0838
  {uint32_t ea=c->r[4]+0x00000EB0u; c->f[29]=RF64(ea);} // 803D083C
  c->r[23]=0u+0x43300000u; // 803D0840
  goto L_803D0A84; // 803D0844
L_803D0848:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 803D0848
  cmps(c,0,(int32_t)c->r[0],32); // 803D084C
  if (!crb(c,0)) { goto L_803D0988; } // 803D0850
  c->r[0]=cntlz(c->r[31]); // 803D0854
  c->f[1]=c->f[31]; // 803D0858
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 803D085C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 803D0860
  c->r[3]=c->r[25]|c->r[25]; // 803D0864
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[27]);} // 803D0868
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[27]);} // 803D086C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[27]);} // 803D0870
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 803D0874
  W32(c->r[1]+0x00000048u,c->r[0]); // 803D0878
  c->lr=0x803D0880u; f_803D4FF0(c); // 803D087C
  c->r[3]=c->r[25]|c->r[25]; // 803D0880
  c->lr=0x803D0888u; f_803D6BB4(c); // 803D0884
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D0888
  c->r[4]=c->r[1]+0x00000008u; // 803D088C
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 803D0890
  c->r[6]=c->r[1]+0x00000038u; // 803D0894
  c->r[12]=R32(c->r[12]+0x00000010u); // 803D0898
  c->ctr=c->r[12]; // 803D089C
  if (true) { c->lr=0x803D08A4u; dispatch(c,c->ctr); } // 803D08A0
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 803D08A4
  c->r[29]=c->r[3]|c->r[3]; // 803D08A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D08AC
  W32(c->r[1]+0x00000028u,c->r[0]); // 803D08B0
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D08B4
  fcmp(c,0,c->f[0],c->f[1]); // 803D08B8
  if (!crb(c,1)) { goto L_803D08C4; } // 803D08BC
  goto L_803D08C8; // 803D08C0
L_803D08C4:;
  c->f[1]=c->f[0]; // 803D08C4
L_803D08C8:;
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[1]);} // 803D08C8
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D08CC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D08D0
  fcmp(c,0,c->f[0],c->f[1]); // 803D08D4
  if (!crb(c,1)) { goto L_803D08E0; } // 803D08D8
  goto L_803D08E4; // 803D08DC
L_803D08E0:;
  c->f[1]=c->f[0]; // 803D08E0
L_803D08E4:;
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[1]);} // 803D08E4
  {uint32_t ea=c->r[24]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D08E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D08EC
  fcmp(c,0,c->f[0],c->f[1]); // 803D08F0
  if (!crb(c,0)) { goto L_803D08FC; } // 803D08F4
  goto L_803D0900; // 803D08F8
L_803D08FC:;
  c->f[1]=c->f[0]; // 803D08FC
L_803D0900:;
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[1]);} // 803D0900
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0904
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0908
  fcmp(c,0,c->f[0],c->f[1]); // 803D090C
  if (!crb(c,0)) { goto L_803D0918; } // 803D0910
  goto L_803D091C; // 803D0914
L_803D0918:;
  c->f[1]=c->f[0]; // 803D0918
L_803D091C:;
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D091C
  c->r[3]=c->r[25]|c->r[25]; // 803D0920
  c->lr=0x803D0928u; f_803D5020(c); // 803D0924
  {uint32_t ea=c->r[24]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D0928
  c->f[31]=c->f[1]; // 803D092C
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0930
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 803D0934
  fcmp(c,0,c->f[0],c->f[30]); // 803D0938
  if (!crb(c,1)) { goto L_803D094C; } // 803D093C
  c->r[0]=0u+0x00000001u; // 803D0940
  W8(c->r[28]+0x00000000u,c->r[0]); // 803D0944
  goto L_803D0AA0; // 803D0948
L_803D094C:;
  cmps(c,0,(int32_t)c->r[29],4); // 803D094C
  if (!crb(c,2)) { goto L_803D095C; } // 803D0950
  c->r[3]=c->r[27]|c->r[27]; // 803D0954
  goto L_803D0AFC; // 803D0958
L_803D095C:;
  cmps(c,0,(int32_t)c->r[29],1); // 803D095C
  if (!crb(c,2)) { goto L_803D096C; } // 803D0960
  c->r[31]=0u+0x00000000u; // 803D0964
  goto L_803D0A4C; // 803D0968
L_803D096C:;
  cmps(c,0,(int32_t)c->r[29],2); // 803D096C
  if (!crb(c,2)) { goto L_803D097C; } // 803D0970
  c->r[31]=0u+0x00000001u; // 803D0974
  goto L_803D0A4C; // 803D0978
L_803D097C:;
  cmps(c,0,(int32_t)c->r[29],3); // 803D097C
  if (crb(c,2)) { goto L_803D0AA0; } // 803D0980
  goto L_803D0A4C; // 803D0984
L_803D0988:;
  cmps(c,0,(int32_t)c->r[31],0); // 803D0988
  if (crb(c,2)) { goto L_803D099C; } // 803D098C
  c->r[3]=c->r[25]|c->r[25]; // 803D0990
  c->lr=0x803D0998u; f_803D6B9C(c); // 803D0994
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 803D0998
L_803D099C:;
  c->r[3]=c->r[25]|c->r[25]; // 803D099C
  c->r[31]=0u+0x00000001u; // 803D09A0
  c->lr=0x803D09A8u; f_803D4E98(c); // 803D09A4
  cmps(c,0,(int32_t)c->r[3],0); // 803D09A8
  if (crb(c,2)) { goto L_803D09C0; } // 803D09AC
  c->r[3]=c->r[25]|c->r[25]; // 803D09B0
  c->lr=0x803D09B8u; f_803D4EA0(c); // 803D09B4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 803D09B8
  goto L_803D0A04; // 803D09BC
L_803D09C0:;
  c->r[3]=c->r[25]|c->r[25]; // 803D09C0
  c->lr=0x803D09C8u; f_803D4C8C(c); // 803D09C4
  c->f[28]=c->f[1]; // 803D09C8
  c->r[3]=c->r[25]|c->r[25]; // 803D09CC
  c->lr=0x803D09D4u; f_803D3D98(c); // 803D09D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D09D4
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 803D09D8
  c->r[12]=R32(c->r[12]+0x00000048u); // 803D09DC
  c->ctr=c->r[12]; // 803D09E0
  if (true) { c->lr=0x803D09E8u; dispatch(c,c->ctr); } // 803D09E4
  c->r[0]=c->r[3]^0x80000000u; // 803D09E8
  W32(c->r[1]+0x00000050u,c->r[23]); // 803D09EC
  W32(c->r[1]+0x00000054u,c->r[0]); // 803D09F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 803D09F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803D09F8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 803D09FC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 803D0A00
L_803D0A04:;
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0A04
  fcmp(c,0,c->f[0],c->f[31]); // 803D0A08
  if (!crb(c,1)) { goto L_803D0A14; } // 803D0A0C
  c->f[0]=c->f[31]; // 803D0A10
L_803D0A14:;
  {uint32_t ea=c->r[24]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D0A14
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 803D0A18
  fcmp(c,0,c->f[2],c->f[31]); // 803D0A1C
  if (!crb(c,0)) { goto L_803D0A28; } // 803D0A20
  c->f[2]=c->f[31]; // 803D0A24
L_803D0A28:;
  c->f[1]=c->ps1[1]=S(c->f[2]); // 803D0A28
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0A2C
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[2]);} // 803D0A30
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D0A34
  fcmp(c,0,c->f[0],c->f[30]); // 803D0A38
  if (!crb(c,1)) { goto L_803D0A4C; } // 803D0A3C
  c->r[0]=0u+0x00000001u; // 803D0A40
  W8(c->r[28]+0x00000000u,c->r[0]); // 803D0A44
  goto L_803D0AA0; // 803D0A48
L_803D0A4C:;
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D0A4C
  c->r[3]=c->r[1]+0x00000028u; // 803D0A50
  c->r[12]=c->r[1]+0x0000002Cu; // 803D0A54
  c->lr=0x803D0A5Cu; f_80289CA4(c); // 803D0A58
  c->r[0]=c->r[0]|0x00000000u; // 803D0A5C
  {uint32_t ea=c->r[24]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D0A60
  c->r[29]=c->r[3]|c->r[3]; // 803D0A64
  {uint32_t ea=c->r[24]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D0A68
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0A6C
  {uint32_t ea=c->r[24]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0A70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803D0A74
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803D0A78
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803D0A7C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803D0A80
L_803D0A84:;
  c->r[4]=R32(c->r[1]+0x00000028u); // 803D0A84
  c->r[3]=c->r[4]-c->r[26]; // 803D0A88
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803D0A8C
  c->r[0]=c->r[0]+c->r[3]; // 803D0A90
  c->r[0]=sraw(c,c->r[0],1); // 803D0A94
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 803D0A98
  if (!crb(c,1)) { IRQCHK(c); goto L_803D0848; } // 803D0A9C
L_803D0AA0:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 803D0AA0
  cmps(c,0,(int32_t)c->r[0],0); // 803D0AA4
  if (crb(c,2)) { goto L_803D0AE8; } // 803D0AA8
  cmps(c,0,(int32_t)c->r[30],0); // 803D0AAC
  if (crb(c,2)) { goto L_803D0AE8; } // 803D0AB0
  c->r[3]=c->r[30]-c->r[26]; // 803D0AB4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D0AB8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D0ABC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803D0AC0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0AC4
  c->r[0]=c->r[0]+c->r[3]; // 803D0AC8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0ACC
  c->r[3]=sraw(c,c->r[0],1); // 803D0AD0
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[3]);} // 803D0AD4
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[2]);} // 803D0AD8
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[1]);} // 803D0ADC
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[0]);} // 803D0AE0
  goto L_803D0AFC; // 803D0AE4
L_803D0AE8:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 803D0AE8
  c->r[3]=c->r[0]-c->r[26]; // 803D0AEC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803D0AF0
  c->r[0]=c->r[0]+c->r[3]; // 803D0AF4
  c->r[3]=sraw(c,c->r[0],1); // 803D0AF8
L_803D0AFC:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 803D0AFC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 803D0B00
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 803D0B04
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 803D0B08
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 803D0B0C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 803D0B10
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 803D0B14
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 803D0B18
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 803D0B1C
  c->r[11]=c->r[1]+0x00000080u; // 803D0B20
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 803D0B24
  c->lr=0x803D0B2Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D0B28
  c->r[0]=R32(c->r[1]+0x000000D4u); // 803D0B2C
  c->lr=c->r[0]; // 803D0B30
  c->r[1]=c->r[1]+0x000000D0u; // 803D0B34
  return; // 803D0B38
}

// GetCharStrmReader__Q36nw4hbm2ut4FontCFv
void f_803D0B3C(Ctx* __restrict c) {
  trace_call(0x803D0B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0B3C
  c->r[0]=0u+0x00000000u; // 803D0B40
  c->r[6]=R32(c->r[4]+0x00000004u); // 803D0B44
  c->r[5]=R32(c->r[4]+0x00000008u); // 803D0B48
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 803D0B4C
  W32(c->r[1]+0x00000008u,c->r[6]); // 803D0B50
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 803D0B54
  W32(c->r[1]+0x00000010u,c->r[4]); // 803D0B58
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D0B5C
  W32(c->r[3]+0x00000004u,c->r[6]); // 803D0B60
  W32(c->r[3]+0x00000008u,c->r[5]); // 803D0B64
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 803D0B68
  c->r[1]=c->r[1]+0x00000020u; // 803D0B6C
  return; // 803D0B70
}

// AllocStringBuffer__Q36nw4hbm3lyt7TextBoxFUs
void f_803D0B74(Ctx* __restrict c) {
  trace_call(0x803D0B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0B74
  c->r[0]=c->lr; // 803D0B78
  cmps(c,0,(int32_t)c->r[4],0); // 803D0B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0B80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D0B84
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D0B88
  c->r[30]=c->r[3]|c->r[3]; // 803D0B8C
  if (crb(c,2)) { goto L_803D0BD8; } // 803D0B90
  c->r[4]=c->r[4]+0x00000001u; // 803D0B94
  c->r[0]=R16(c->r[3]+0x000000F8u); // 803D0B98
  c->r[31]=rotl(c->r[4],1)&0x0000FFFEu; // 803D0B9C
  cmpu(c,0,c->r[31],c->r[0]); // 803D0BA0
  if (!crb(c,1)) { goto L_803D0BD8; } // 803D0BA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D0BA8
  c->r[12]=R32(c->r[12]+0x00000068u); // 803D0BAC
  c->ctr=c->r[12]; // 803D0BB0
  if (true) { c->lr=0x803D0BB8u; dispatch(c,c->ctr); } // 803D0BB4
  c->r[3]=0u+0x806C0000u; // 803D0BB8
  c->r[4]=c->r[31]|c->r[31]; // 803D0BBC
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803D0BC0
  c->lr=0x803D0BC8u; f_802A703C(c); // 803D0BC4
  cmps(c,0,(int32_t)c->r[3],0); // 803D0BC8
  W32(c->r[30]+0x000000D4u,c->r[3]); // 803D0BCC
  if (crb(c,2)) { goto L_803D0BD8; } // 803D0BD0
  W16(c->r[30]+0x000000F8u,c->r[31]); // 803D0BD4
L_803D0BD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D0BD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D0BDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D0BE0
  c->lr=c->r[0]; // 803D0BE4
  c->r[1]=c->r[1]+0x00000010u; // 803D0BE8
  return; // 803D0BEC
}

// FreeStringBuffer__Q36nw4hbm3lyt7TextBoxFv
void f_803D0BF0(Ctx* __restrict c) {
  trace_call(0x803D0BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0BF0
  c->r[0]=c->lr; // 803D0BF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0BF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D0BFC
  c->r[31]=c->r[3]|c->r[3]; // 803D0C00
  c->r[4]=R32(c->r[3]+0x000000D4u); // 803D0C04
  cmps(c,0,(int32_t)c->r[4],0); // 803D0C08
  if (crb(c,2)) { goto L_803D0C28; } // 803D0C0C
  c->r[3]=0u+0x806C0000u; // 803D0C10
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803D0C14
  c->lr=0x803D0C1Cu; f_802A704C(c); // 803D0C18
  c->r[0]=0u+0x00000000u; // 803D0C1C
  W32(c->r[31]+0x000000D4u,c->r[0]); // 803D0C20
  W16(c->r[31]+0x000000F8u,c->r[0]); // 803D0C24
L_803D0C28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D0C28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D0C2C
  c->lr=c->r[0]; // 803D0C30
  c->r[1]=c->r[1]+0x00000010u; // 803D0C34
  return; // 803D0C38
}

// fn_803D0C3C
void f_803D0C3C(Ctx* __restrict c) {
  trace_call(0x803D0C3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0C3C
  c->r[0]=c->lr; // 803D0C40
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D0C44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D0C48
  c->r[31]=c->r[5]|c->r[5]; // 803D0C4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D0C50
  c->r[30]=c->r[4]|c->r[4]; // 803D0C54
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D0C58
  c->r[29]=c->r[3]|c->r[3]; // 803D0C5C
  c->r[3]=c->r[30]|c->r[30]; // 803D0C60
  c->lr=0x803D0C68u; f_8029815C(c); // 803D0C64
  c->r[12]=R32(c->r[29]+0x00000000u); // 803D0C68
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 803D0C6C
  c->r[3]=c->r[29]|c->r[29]; // 803D0C70
  c->r[4]=c->r[30]|c->r[30]; // 803D0C74
  c->r[12]=R32(c->r[12]+0x00000070u); // 803D0C78
  c->r[5]=c->r[31]|c->r[31]; // 803D0C7C
  c->ctr=c->r[12]; // 803D0C80
  if (true) { c->lr=0x803D0C88u; dispatch(c,c->ctr); } // 803D0C84
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D0C88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D0C8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D0C90
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D0C94
  c->lr=c->r[0]; // 803D0C98
  c->r[1]=c->r[1]+0x00000020u; // 803D0C9C
  return; // 803D0CA0
}

// fn_803D0CA4
void f_803D0CA4(Ctx* __restrict c) {
  trace_call(0x803D0CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0CA4
  c->r[0]=c->lr; // 803D0CA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D0CAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D0CB0
  c->r[31]=c->r[3]|c->r[3]; // 803D0CB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D0CB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D0CBC
  c->r[29]=c->r[5]|c->r[5]; // 803D0CC0
  c->r[8]=R32(c->r[3]+0x000000D4u); // 803D0CC4
  cmps(c,0,(int32_t)c->r[8],0); // 803D0CC8
  if (!crb(c,2)) { goto L_803D0CD8; } // 803D0CCC
  c->r[3]=0u+0x00000000u; // 803D0CD0
  goto L_803D0D50; // 803D0CD4
L_803D0CD8:;
  c->r[3]=R16(c->r[3]+0x000000F8u); // 803D0CD8
  c->r[0]=cntlz(c->r[3]); // 803D0CDC
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 803D0CE0
  c->r[7]=rotl(c->r[0],27)&0x00000001u; // 803D0CE4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803D0CE8
  c->r[3]=0u-c->r[7]; // 803D0CEC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 803D0CF0
  c->r[0]=c->r[0]&~c->r[3]; // 803D0CF4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 803D0CF8
  cmpu(c,0,c->r[5],c->r[0]); // 803D0CFC
  if (crb(c,0)) { goto L_803D0D0C; } // 803D0D00
  c->r[3]=0u+0x00000000u; // 803D0D04
  goto L_803D0D50; // 803D0D08
L_803D0D0C:;
  c->r[0]=c->r[0]-c->r[5]; // 803D0D0C
  c->r[30]=c->r[6]|c->r[6]; // 803D0D10
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 803D0D14
  cmpu(c,0,c->r[6],c->r[0]); // 803D0D18
  if (!crb(c,1)) { goto L_803D0D24; } // 803D0D1C
  c->r[30]=c->r[0]|c->r[0]; // 803D0D20
L_803D0D24:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 803D0D24
  c->r[5]=rotl(c->r[30],1)&0x0001FFFEu; // 803D0D28
  c->r[3]=c->r[8]+c->r[0]; // 803D0D2C
  c->lr=0x803D0D34u; f_80235294(c); // 803D0D30
  c->r[0]=c->r[29]+c->r[30]; // 803D0D34
  c->r[4]=R32(c->r[31]+0x000000D4u); // 803D0D38
  W16(c->r[31]+0x000000FAu,c->r[0]); // 803D0D3C
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 803D0D40
  c->r[5]=0u+0x00000000u; // 803D0D44
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 803D0D48
  W16(c->r[4]+c->r[0],c->r[5]); // 803D0D4C
L_803D0D50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D0D50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D0D54
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D0D58
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D0D5C
  c->lr=c->r[0]; // 803D0D60
  c->r[1]=c->r[1]+0x00000020u; // 803D0D64
  return; // 803D0D68
}

// fn_803D0D6C
void f_803D0D6C(Ctx* __restrict c) {
  trace_call(0x803D0D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0D6C
  c->r[0]=c->lr; // 803D0D70
  cmps(c,0,(int32_t)c->r[3],0); // 803D0D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D0D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D0D7C
  c->r[31]=c->r[3]|c->r[3]; // 803D0D80
  if (crb(c,2)) { goto L_803D0D94; } // 803D0D84
  cmps(c,0,(int32_t)c->r[4],0); // 803D0D88
  if (!crb(c,1)) { goto L_803D0D94; } // 803D0D8C
  c->lr=0x803D0D94u; f_802896EC(c); // 803D0D90
L_803D0D94:;
  c->r[3]=c->r[31]|c->r[31]; // 803D0D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D0D98
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D0D9C
  c->lr=c->r[0]; // 803D0DA0
  c->r[1]=c->r[1]+0x00000010u; // 803D0DA4
  return; // 803D0DA8
}

// GetTextDrawRect__Q36nw4hbm3lyt7TextBoxCFPQ36nw4hbm2ut17TextWriterBase<w>
void f_803D0DAC(Ctx* __restrict c) {
  trace_call(0x803D0DACu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D0DAC
  c->r[0]=c->lr; // 803D0DB0
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D0DB4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 803D0DB8
  c->r[31]=0u+0x803F0000u; // 803D0DBC
  c->r[31]=c->r[31]+0x00000EA8u; // 803D0DC0
  W32(c->r[1]+0x00000088u,c->r[30]); // 803D0DC4
  c->r[30]=c->r[5]|c->r[5]; // 803D0DC8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0DCC
  W32(c->r[1]+0x00000084u,c->r[29]); // 803D0DD0
  c->r[29]=c->r[4]|c->r[4]; // 803D0DD4
  c->f[2]=c->f[1]; // 803D0DD8
  W32(c->r[1]+0x00000080u,c->r[28]); // 803D0DDC
  c->r[28]=c->r[3]|c->r[3]; // 803D0DE0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 803D0DE4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803D0DE8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803D0DEC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D0DF0
  c->r[3]=c->r[30]|c->r[30]; // 803D0DF4
  c->lr=0x803D0DFCu; f_803D4FE4(c); // 803D0DF8
  c->r[0]=R8(c->r[30]+0x00000000u); // 803D0DFC
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D0E00
  W8(c->r[1]+0x00000018u,c->r[0]); // 803D0E04
  c->r[6]=R16(c->r[29]+0x000000FAu); // 803D0E08
  c->r[0]=R8(c->r[30]+0x00000001u); // 803D0E0C
  c->r[5]=R32(c->r[29]+0x000000D4u); // 803D0E10
  W8(c->r[1]+0x00000019u,c->r[0]); // 803D0E14
  c->r[0]=R8(c->r[30]+0x00000002u); // 803D0E18
  W8(c->r[1]+0x0000001Au,c->r[0]); // 803D0E1C
  c->r[0]=R8(c->r[30]+0x00000003u); // 803D0E20
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 803D0E24
  c->r[0]=R8(c->r[30]+0x00000004u); // 803D0E28
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 803D0E2C
  c->r[0]=R8(c->r[30]+0x00000005u); // 803D0E30
  W8(c->r[1]+0x0000001Du,c->r[0]); // 803D0E34
  c->r[0]=R8(c->r[30]+0x00000006u); // 803D0E38
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 803D0E3C
  c->r[0]=R8(c->r[30]+0x00000007u); // 803D0E40
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 803D0E44
  c->r[0]=R8(c->r[30]+0x00000008u); // 803D0E48
  W8(c->r[1]+0x00000020u,c->r[0]); // 803D0E4C
  c->r[0]=R8(c->r[30]+0x00000009u); // 803D0E50
  W8(c->r[1]+0x00000021u,c->r[0]); // 803D0E54
  c->r[0]=R8(c->r[30]+0x0000000Au); // 803D0E58
  W8(c->r[1]+0x00000022u,c->r[0]); // 803D0E5C
  c->r[0]=R8(c->r[30]+0x0000000Bu); // 803D0E60
  W8(c->r[1]+0x00000023u,c->r[0]); // 803D0E64
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 803D0E68
  W8(c->r[1]+0x00000024u,c->r[0]); // 803D0E6C
  c->r[0]=R8(c->r[30]+0x0000000Du); // 803D0E70
  W8(c->r[1]+0x00000025u,c->r[0]); // 803D0E74
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 803D0E78
  W8(c->r[1]+0x00000026u,c->r[0]); // 803D0E7C
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 803D0E80
  W8(c->r[1]+0x00000027u,c->r[0]); // 803D0E84
  c->r[0]=R8(c->r[30]+0x00000010u); // 803D0E88
  W8(c->r[1]+0x00000028u,c->r[0]); // 803D0E8C
  c->r[0]=R8(c->r[30]+0x00000011u); // 803D0E90
  W8(c->r[1]+0x00000029u,c->r[0]); // 803D0E94
  c->r[0]=R8(c->r[30]+0x00000012u); // 803D0E98
  W8(c->r[1]+0x0000002Au,c->r[0]); // 803D0E9C
  c->r[0]=R8(c->r[30]+0x00000013u); // 803D0EA0
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 803D0EA4
  c->r[0]=R8(c->r[30]+0x00000014u); // 803D0EA8
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 803D0EAC
  c->r[0]=R8(c->r[30]+0x00000015u); // 803D0EB0
  W8(c->r[1]+0x0000002Du,c->r[0]); // 803D0EB4
  c->r[0]=R8(c->r[30]+0x00000016u); // 803D0EB8
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 803D0EBC
  c->r[0]=R8(c->r[30]+0x00000017u); // 803D0EC0
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 803D0EC4
  c->r[0]=R8(c->r[30]+0x00000018u); // 803D0EC8
  W8(c->r[1]+0x00000030u,c->r[0]); // 803D0ECC
  c->r[0]=R8(c->r[30]+0x00000019u); // 803D0ED0
  W8(c->r[1]+0x00000031u,c->r[0]); // 803D0ED4
  c->r[0]=R8(c->r[30]+0x0000001Au); // 803D0ED8
  W8(c->r[1]+0x00000032u,c->r[0]); // 803D0EDC
  c->r[0]=R8(c->r[30]+0x0000001Bu); // 803D0EE0
  W8(c->r[1]+0x00000033u,c->r[0]); // 803D0EE4
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 803D0EE8
  W8(c->r[1]+0x00000034u,c->r[0]); // 803D0EEC
  c->r[0]=R8(c->r[30]+0x0000001Du); // 803D0EF0
  W8(c->r[1]+0x00000035u,c->r[0]); // 803D0EF4
  c->r[0]=R8(c->r[30]+0x0000001Eu); // 803D0EF8
  W8(c->r[1]+0x00000036u,c->r[0]); // 803D0EFC
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 803D0F00
  W8(c->r[1]+0x00000037u,c->r[0]); // 803D0F04
  c->r[0]=R32(c->r[30]+0x00000020u); // 803D0F08
  W32(c->r[1]+0x00000038u,c->r[0]); // 803D0F0C
  c->r[3]=R32(c->r[30]+0x00000024u); // 803D0F10
  c->r[0]=R32(c->r[30]+0x00000028u); // 803D0F14
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 803D0F18
  W32(c->r[1]+0x00000040u,c->r[0]); // 803D0F1C
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 803D0F20
  c->r[0]=R32(c->r[30]+0x00000030u); // 803D0F24
  W32(c->r[1]+0x00000044u,c->r[3]); // 803D0F28
  W32(c->r[1]+0x00000048u,c->r[0]); // 803D0F2C
  c->r[0]=R32(c->r[30]+0x00000034u); // 803D0F30
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 803D0F34
  c->r[3]=R32(c->r[30]+0x00000038u); // 803D0F38
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 803D0F3C
  W32(c->r[1]+0x00000050u,c->r[3]); // 803D0F40
  W32(c->r[1]+0x00000054u,c->r[0]); // 803D0F44
  c->r[0]=R8(c->r[30]+0x00000040u); // 803D0F48
  W8(c->r[1]+0x00000058u,c->r[0]); // 803D0F4C
  c->r[0]=R8(c->r[30]+0x00000041u); // 803D0F50
  W8(c->r[1]+0x00000059u,c->r[0]); // 803D0F54
  c->r[0]=R8(c->r[30]+0x00000042u); // 803D0F58
  W8(c->r[1]+0x0000005Au,c->r[0]); // 803D0F5C
  c->r[0]=R8(c->r[30]+0x00000043u); // 803D0F60
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 803D0F64
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0F68
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 803D0F6C
  c->r[0]=R32(c->r[30]+0x00000048u); // 803D0F70
  W32(c->r[1]+0x00000060u,c->r[0]); // 803D0F74
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0F78
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 803D0F7C
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D0F80
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 803D0F84
  c->r[0]=R32(c->r[30]+0x00000054u); // 803D0F88
  c->r[3]=c->r[28]|c->r[28]; // 803D0F8C
  c->r[4]=c->r[1]+0x00000018u; // 803D0F90
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 803D0F94
  c->r[0]=R32(c->r[30]+0x00000058u); // 803D0F98
  W32(c->r[1]+0x00000070u,c->r[0]); // 803D0F9C
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 803D0FA0
  W32(c->r[1]+0x00000074u,c->r[0]); // 803D0FA4
  c->lr=0x803D0FACu; f_803D10E4(c); // 803D0FA8
  c->r[3]=c->r[1]+0x00000018u; // 803D0FAC
  c->r[4]=0u+0xFFFFFFFFu; // 803D0FB0
  c->lr=0x803D0FB8u; f_803D6AA8(c); // 803D0FB4
  c->r[3]=c->r[29]|c->r[29]; // 803D0FB8
  c->lr=0x803D0FC0u; f_803CF530(c); // 803D0FBC
  c->r[5]=0u+0x55550000u; // 803D0FC0
  c->r[6]=R8(c->r[29]+0x000000FCu); // 803D0FC4
  c->r[0]=c->r[5]+0x00005556u; // 803D0FC8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803D0FCC
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 803D0FD0
  W32(c->r[1]+0x00000008u,c->r[3]); // 803D0FD4
  W32(c->r[1]+0x00000010u,c->r[3]); // 803D0FD8
  c->r[0]=rotl(c->r[5],1)&0x00000001u; // 803D0FDC
  W32(c->r[1]+0x00000014u,c->r[4]); // 803D0FE0
  c->r[0]=c->r[5]+c->r[0]; // 803D0FE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 803D0FE8
  c->r[0]=c->r[6]-c->r[0]; // 803D0FEC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803D0FF0
  cmps(c,0,(int32_t)c->r[0],1); // 803D0FF4
  if (crb(c,2)) { goto L_803D1018; } // 803D0FF8
  if (!crb(c,0)) { goto L_803D1004; } // 803D0FFC
  goto L_803D1010; // 803D1000
L_803D1004:;
  cmps(c,0,(int32_t)c->r[0],3); // 803D1004
  if (!crb(c,0)) { goto L_803D1010; } // 803D1008
  goto L_803D1020; // 803D100C
L_803D1010:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D1010
  goto L_803D1024; // 803D1014
L_803D1018:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D1018
  goto L_803D1024; // 803D101C
L_803D1020:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D1020
L_803D1024:;
  c->r[3]=0u+0x55550000u; // 803D1024
  c->r[0]=c->r[3]+0x00005556u; // 803D1028
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 803D102C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803D1030
  c->r[0]=c->r[3]+c->r[0]; // 803D1034
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803D1038
  cmps(c,0,(int32_t)c->r[0],1); // 803D103C
  if (crb(c,2)) { goto L_803D1060; } // 803D1040
  if (!crb(c,0)) { goto L_803D104C; } // 803D1044
  goto L_803D1058; // 803D1048
L_803D104C:;
  cmps(c,0,(int32_t)c->r[0],3); // 803D104C
  if (!crb(c,0)) { goto L_803D1058; } // 803D1050
  goto L_803D1068; // 803D1054
L_803D1058:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 803D1058
  goto L_803D106C; // 803D105C
L_803D1060:;
  {uint32_t ea=c->r[31]+0x00000010u; c->f[7]=c->ps1[7]=RF32(ea);} // 803D1060
  goto L_803D106C; // 803D1064
L_803D1068:;
  {uint32_t ea=c->r[31]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 803D1068
L_803D106C:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803D106C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D1070
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1074
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1078
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 803D107C
  {uint32_t ea=c->r[29]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D1080
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 803D1084
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1088
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[4]); // 803D108C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D1090
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1094
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 803D1098
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[7]); // 803D109C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 803D10A0
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 803D10A4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 803D10A8
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[4]); // 803D10AC
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[3]);} // 803D10B0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[5]); // 803D10B4
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[2]);} // 803D10B8
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 803D10BC
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 803D10C0
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 803D10C4
  c->r[30]=R32(c->r[1]+0x00000088u); // 803D10C8
  c->r[29]=R32(c->r[1]+0x00000084u); // 803D10CC
  c->r[28]=R32(c->r[1]+0x00000080u); // 803D10D0
  c->r[0]=R32(c->r[1]+0x00000094u); // 803D10D4
  c->lr=c->r[0]; // 803D10D8
  c->r[1]=c->r[1]+0x00000090u; // 803D10DC
  return; // 803D10E0
}

// CalcStringRectImpl<w>__25@unnamed@lyt_textBox_cpp@FPQ36nw4hbm2ut4RectPQ36nw4hbm2ut17TextWriterBase<w>PCwif_v
void f_803D10E4(Ctx* __restrict c) {
  trace_call(0x803D10E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D10E4
  c->r[0]=c->lr; // 803D10E8
  W32(c->r[1]+0x00000064u,c->r[0]); // 803D10EC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803D10F0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803D10F4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 803D10F8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 803D10FC
  c->r[11]=c->r[1]+0x00000040u; // 803D1100
  c->lr=0x803D1108u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D1104
  c->r[30]=0u+0x803F0000u; // 803D1108
  c->f[30]=c->f[1]; // 803D110C
  {uint32_t ea=c->r[30]+0x00000EA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1110
  c->r[27]=c->r[4]|c->r[4]; // 803D1114
  c->r[26]=c->r[3]|c->r[3]; // 803D1118
  c->r[28]=c->r[5]|c->r[5]; // 803D111C
  c->f[2]=c->f[1]; // 803D1120
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 803D1124
  c->r[29]=c->r[6]|c->r[6]; // 803D1128
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803D112C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 803D1130
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D1134
  c->r[3]=c->r[27]|c->r[27]; // 803D1138
  c->lr=0x803D1140u; f_803D4FE4(c); // 803D113C
  {uint32_t ea=c->r[30]+0x00000EA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D1140
  c->r[31]=0u+0x80440000u; // 803D1144
L_803D1148:;
  c->f[1]=c->f[30]; // 803D1148
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 803D114C
  c->r[4]=c->r[27]|c->r[27]; // 803D1150
  c->r[5]=c->r[28]|c->r[28]; // 803D1154
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 803D1158
  c->r[6]=c->r[29]|c->r[29]; // 803D115C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 803D1160
  c->r[3]=c->r[1]+0x00000010u; // 803D1164
  c->r[7]=c->r[1]+0x00000008u; // 803D1168
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 803D116C
  c->lr=0x803D1174u; f_803D0710(c); // 803D1170
  c->r[0]=R8(c->r[1]+0x00000008u); // 803D1174
  c->r[30]=c->r[3]|c->r[3]; // 803D1178
  cmps(c,0,(int32_t)c->r[0],0); // 803D117C
  if (crb(c,2)) { goto L_803D11A0; } // 803D1180
  c->f[1]=c->f[30]; // 803D1184
  c->r[4]=c->r[27]|c->r[27]; // 803D1188
  c->r[3]=c->r[1]+0x00000010u; // 803D118C
  c->r[5]=c->r[31]+0xFFFF9158u; // 803D1190
  c->r[7]=c->r[1]+0x00000008u; // 803D1194
  c->r[6]=0u+0x00000001u; // 803D1198
  c->lr=0x803D11A0u; f_803D0710(c); // 803D119C
L_803D11A0:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D11A0
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 803D11A4
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D11A8
  c->r[28]=c->r[28]+c->r[0]; // 803D11AC
  c->r[29]=c->r[29]-c->r[30]; // 803D11B0
  fcmp(c,0,c->f[0],c->f[1]); // 803D11B4
  if (!crb(c,1)) { goto L_803D11C0; } // 803D11B8
  goto L_803D11C4; // 803D11BC
L_803D11C0:;
  c->f[1]=c->f[0]; // 803D11C0
L_803D11C4:;
  {uint32_t ea=c->r[26]+0x00000000u; WF32(ea,c->f[1]);} // 803D11C4
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D11C8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D11CC
  fcmp(c,0,c->f[0],c->f[1]); // 803D11D0
  if (!crb(c,1)) { goto L_803D11DC; } // 803D11D4
  goto L_803D11E0; // 803D11D8
L_803D11DC:;
  c->f[1]=c->f[0]; // 803D11DC
L_803D11E0:;
  {uint32_t ea=c->r[26]+0x00000004u; WF32(ea,c->f[1]);} // 803D11E0
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D11E4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D11E8
  fcmp(c,0,c->f[0],c->f[1]); // 803D11EC
  if (!crb(c,0)) { goto L_803D11F8; } // 803D11F0
  goto L_803D11FC; // 803D11F4
L_803D11F8:;
  c->f[1]=c->f[0]; // 803D11F8
L_803D11FC:;
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[1]);} // 803D11FC
  {uint32_t ea=c->r[26]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1200
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1204
  fcmp(c,0,c->f[0],c->f[1]); // 803D1208
  if (!crb(c,0)) { goto L_803D1214; } // 803D120C
  goto L_803D1218; // 803D1210
L_803D1214:;
  c->f[1]=c->f[0]; // 803D1214
L_803D1218:;
  cmps(c,0,(int32_t)c->r[29],0); // 803D1218
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D121C
  if (crb(c,1)) { IRQCHK(c); goto L_803D1148; } // 803D1220
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 803D1224
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 803D1228
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 803D122C
  c->r[11]=c->r[1]+0x00000040u; // 803D1230
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 803D1234
  c->lr=0x803D123Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D1238
  c->r[0]=R32(c->r[1]+0x00000064u); // 803D123C
  c->lr=c->r[0]; // 803D1240
  c->r[1]=c->r[1]+0x00000060u; // 803D1244
  return; // 803D1248
}

// fn_803D124C
void f_803D124C(Ctx* __restrict c) {
  trace_call(0x803D124Cu);
  c->r[3]=0u+0x806C0000u; // 803D124C
  c->r[3]=c->r[3]+0x000025C0u; // 803D1250
  return; // 803D1254
}

// fn_803D1258
void f_803D1258(Ctx* __restrict c) {
  trace_call(0x803D1258u);
  c->r[4]=0u+0x806C0000u; // 803D1258
  c->r[3]=0u+0x806C0000u; // 803D125C
  c->r[4]=c->r[4]+0x000025B0u; // 803D1260
  W32(c->r[3]+0x000025C0u,c->r[4]); // 803D1264
  return; // 803D1268
}

// __ct__Q36nw4hbm3lyt6WindowFPCQ46nw4hbm3lyt3res6WindowRCQ36nw4hbm3lyt11ResBlockSet
void f_803D126C(Ctx* __restrict c) {
  trace_call(0x803D126Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D126C
  c->r[0]=c->lr; // 803D1270
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D1274
  c->r[11]=c->r[1]+0x00000030u; // 803D1278
  c->lr=0x803D1280u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D127C
  c->r[23]=c->r[3]|c->r[3]; // 803D1280
  c->r[24]=c->r[4]|c->r[4]; // 803D1284
  c->r[25]=c->r[5]|c->r[5]; // 803D1288
  c->lr=0x803D1290u; f_803CE6D4(c); // 803D128C
  c->r[3]=0u+0x80440000u; // 803D1290
  c->r[4]=0u+0x803D0000u; // 803D1294
  c->r[3]=c->r[3]+0xFFFF9244u; // 803D1298
  c->r[5]=0u+0x803D0000u; // 803D129C
  c->r[26]=c->r[23]+0x000000E4u; // 803D12A0
  W32(c->r[23]+0x00000000u,c->r[3]); // 803D12A4
  c->r[3]=c->r[26]|c->r[26]; // 803D12A8
  c->r[4]=c->r[4]+0xFFFFB5BCu; // 803D12AC
  c->r[5]=c->r[5]+0xFFFF9398u; // 803D12B0
  c->r[6]=0u+0x00000004u; // 803D12B4
  c->r[7]=0u+0x00000004u; // 803D12B8
  c->lr=0x803D12C0u; f_80289B34(c); // 803D12BC
  c->r[3]=c->r[26]+0x00000010u; // 803D12C0
  c->lr=0x803D12C8u; f_803C94AC(c); // 803D12C4
  c->r[0]=R32(c->r[24]+0x00000060u); // 803D12C8
  {uint32_t ea=c->r[24]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803D12CC
  c->r[28]=c->r[24]+c->r[0]; // 803D12D0
  c->r[5]=R32(c->r[24]+c->r[0]); // 803D12D4
  c->r[7]=R8(c->r[28]+0x00000012u); // 803D12D8
  {uint32_t ea=c->r[24]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D12DC
  {uint32_t ea=c->r[24]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D12E0
  cmps(c,0,(int32_t)c->r[7],0); // 803D12E4
  {uint32_t ea=c->r[24]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D12E8
  c->r[4]=R32(c->r[28]+0x00000004u); // 803D12EC
  c->r[3]=R32(c->r[28]+0x00000008u); // 803D12F0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 803D12F4
  c->r[6]=R32(c->r[25]+0x00000008u); // 803D12F8
  {uint32_t ea=c->r[23]+0x000000D4u; WF32(ea,c->f[3]);} // 803D12FC
  c->r[27]=c->r[6]+0x0000000Cu; // 803D1300
  {uint32_t ea=c->r[23]+0x000000D8u; WF32(ea,c->f[2]);} // 803D1304
  {uint32_t ea=c->r[23]+0x000000DCu; WF32(ea,c->f[1]);} // 803D1308
  {uint32_t ea=c->r[23]+0x000000E0u; WF32(ea,c->f[0]);} // 803D130C
  W32(c->r[23]+0x000000E4u,c->r[5]); // 803D1310
  W32(c->r[23]+0x000000E8u,c->r[4]); // 803D1314
  W32(c->r[23]+0x000000ECu,c->r[3]); // 803D1318
  W32(c->r[23]+0x000000F0u,c->r[0]); // 803D131C
  if (crb(c,2)) { goto L_803D135C; } // 803D1320
  cmpu(c,0,c->r[7],0x00000008u); // 803D1324
  c->r[26]=0u+0x00000008u; // 803D1328
  if (crb(c,1)) { goto L_803D1334; } // 803D132C
  c->r[26]=c->r[7]|c->r[7]; // 803D1330
L_803D1334:;
  c->r[3]=c->r[23]+0x000000F4u; // 803D1334
  c->r[4]=rotl(c->r[26],0)&0x000000FFu; // 803D1338
  c->lr=0x803D1340u; f_803C9510(c); // 803D133C
  c->r[0]=R8(c->r[23]+0x000000F4u); // 803D1340
  cmps(c,0,(int32_t)c->r[0],0); // 803D1344
  if (crb(c,2)) { goto L_803D135C; } // 803D1348
  c->r[3]=c->r[23]+0x000000F4u; // 803D134C
  c->r[4]=c->r[28]+0x00000014u; // 803D1350
  c->r[5]=rotl(c->r[26],0)&0x000000FFu; // 803D1354
  c->lr=0x803D135Cu; f_803C9690(c); // 803D1358
L_803D135C:;
  c->r[3]=0u+0x806C0000u; // 803D135C
  c->r[4]=0u+0x0000005Cu; // 803D1360
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803D1364
  c->lr=0x803D136Cu; f_802A703C(c); // 803D1368
  cmps(c,0,(int32_t)c->r[3],0); // 803D136C
  if (crb(c,2)) { goto L_803D1398; } // 803D1370
  c->r[0]=R16(c->r[28]+0x00000010u); // 803D1374
  c->r[4]=R32(c->r[25]+0x00000008u); // 803D1378
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D137C
  c->r[0]=R32(c->r[27]+c->r[0]); // 803D1380
  c->r[4]=c->r[4]+c->r[0]; // 803D1384
  if (crb(c,2)) { goto L_803D1394; } // 803D1388
  c->r[5]=c->r[25]|c->r[25]; // 803D138C
  c->lr=0x803D1394u; f_803CB5C8(c); // 803D1390
L_803D1394:;
  W32(c->r[23]+0x00000028u,c->r[3]); // 803D1394
L_803D1398:;
  c->r[0]=R8(c->r[24]+0x0000005Cu); // 803D1398
  c->r[30]=0u+0x00000000u; // 803D139C
  W8(c->r[23]+0x00000100u,c->r[30]); // 803D13A0
  cmps(c,0,(int32_t)c->r[0],0); // 803D13A4
  W32(c->r[23]+0x000000FCu,c->r[30]); // 803D13A8
  if (crb(c,2)) { goto L_803D1460; } // 803D13AC
  c->r[31]=0u+0x806C0000u; // 803D13B0
  c->r[4]=rotl(c->r[0],3)&0x000007F8u; // 803D13B4
  c->r[3]=R32(c->r[31]+0x000025A8u); // 803D13B8
  c->lr=0x803D13C0u; f_802A703C(c); // 803D13BC
  cmps(c,0,(int32_t)c->r[3],0); // 803D13C0
  W32(c->r[23]+0x000000FCu,c->r[3]); // 803D13C4
  if (crb(c,2)) { goto L_803D1460; } // 803D13C8
  c->r[3]=R8(c->r[24]+0x0000005Cu); // 803D13CC
  c->r[26]=0u+0x00000000u; // 803D13D0
  c->r[0]=R32(c->r[24]+0x00000064u); // 803D13D4
  c->r[28]=0u+0x00000000u; // 803D13D8
  W8(c->r[23]+0x00000100u,c->r[3]); // 803D13DC
  c->r[29]=c->r[24]+c->r[0]; // 803D13E0
  goto L_803D1454; // 803D13E4
L_803D13E8:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 803D13E8
  c->r[4]=0u+0x0000005Cu; // 803D13EC
  c->r[3]=R32(c->r[23]+0x000000FCu); // 803D13F0
  c->r[22]=c->r[24]+c->r[0]; // 803D13F4
  c->r[0]=R8(c->r[22]+0x00000002u); // 803D13F8
  W8(c->r[3]+c->r[28],c->r[0]); // 803D13FC
  c->r[0]=R32(c->r[23]+0x000000FCu); // 803D1400
  c->r[3]=c->r[0]+c->r[28]; // 803D1404
  W32(c->r[3]+0x00000004u,c->r[30]); // 803D1408
  c->r[3]=R32(c->r[31]+0x000025A8u); // 803D140C
  c->lr=0x803D1414u; f_802A703C(c); // 803D1410
  cmps(c,0,(int32_t)c->r[3],0); // 803D1414
  if (crb(c,2)) { goto L_803D1448; } // 803D1418
  c->r[0]=R16(c->r[22]+0x00000000u); // 803D141C
  c->r[4]=R32(c->r[25]+0x00000008u); // 803D1420
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D1424
  c->r[0]=R32(c->r[27]+c->r[0]); // 803D1428
  c->r[4]=c->r[4]+c->r[0]; // 803D142C
  if (crb(c,2)) { goto L_803D143C; } // 803D1430
  c->r[5]=c->r[25]|c->r[25]; // 803D1434
  c->lr=0x803D143Cu; f_803CB5C8(c); // 803D1438
L_803D143C:;
  c->r[0]=R32(c->r[23]+0x000000FCu); // 803D143C
  c->r[4]=c->r[0]+c->r[28]; // 803D1440
  W32(c->r[4]+0x00000004u,c->r[3]); // 803D1444
L_803D1448:;
  c->r[29]=c->r[29]+0x00000004u; // 803D1448
  c->r[28]=c->r[28]+0x00000008u; // 803D144C
  c->r[26]=c->r[26]+0x00000001u; // 803D1450
L_803D1454:;
  c->r[0]=R8(c->r[23]+0x00000100u); // 803D1454
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 803D1458
  if (crb(c,0)) { IRQCHK(c); goto L_803D13E8; } // 803D145C
L_803D1460:;
  c->r[11]=c->r[1]+0x00000030u; // 803D1460
  c->r[3]=c->r[23]|c->r[23]; // 803D1464
  c->lr=0x803D146Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D1468
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D146C
  c->lr=c->r[0]; // 803D1470
  c->r[1]=c->r[1]+0x00000030u; // 803D1474
  return; // 803D1478
}

// __dt__Q36nw4hbm3lyt6WindowFv
void f_803D147C(Ctx* __restrict c) {
  trace_call(0x803D147Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D147C
  c->r[0]=c->lr; // 803D1480
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D1484
  c->r[11]=c->r[1]+0x00000020u; // 803D1488
  c->lr=0x803D1490u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D148C
  cmps(c,0,(int32_t)c->r[3],0); // 803D1490
  c->r[27]=c->r[3]|c->r[3]; // 803D1494
  c->r[28]=c->r[4]|c->r[4]; // 803D1498
  if (crb(c,2)) { goto L_803D15A4; } // 803D149C
  c->r[0]=R32(c->r[3]+0x000000FCu); // 803D14A0
  c->r[4]=0u+0x80440000u; // 803D14A4
  c->r[4]=c->r[4]+0xFFFF9244u; // 803D14A8
  cmps(c,0,(int32_t)c->r[0],0); // 803D14AC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803D14B0
  if (crb(c,2)) { goto L_803D1520; } // 803D14B4
  c->r[29]=0u+0x00000000u; // 803D14B8
  c->r[30]=0u+0x00000000u; // 803D14BC
  c->r[31]=0u+0x806C0000u; // 803D14C0
  goto L_803D1504; // 803D14C4
L_803D14C8:;
  c->r[0]=R32(c->r[27]+0x000000FCu); // 803D14C8
  c->r[4]=0u+0xFFFFFFFFu; // 803D14CC
  c->r[3]=c->r[0]+c->r[30]; // 803D14D0
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D14D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D14D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 803D14DC
  c->ctr=c->r[12]; // 803D14E0
  if (true) { c->lr=0x803D14E8u; dispatch(c,c->ctr); } // 803D14E4
  c->r[0]=R32(c->r[27]+0x000000FCu); // 803D14E8
  c->r[3]=R32(c->r[31]+0x000025A8u); // 803D14EC
  c->r[4]=c->r[0]+c->r[30]; // 803D14F0
  c->r[4]=R32(c->r[4]+0x00000004u); // 803D14F4
  c->lr=0x803D14FCu; f_802A704C(c); // 803D14F8
  c->r[30]=c->r[30]+0x00000008u; // 803D14FC
  c->r[29]=c->r[29]+0x00000001u; // 803D1500
L_803D1504:;
  c->r[0]=R8(c->r[27]+0x00000100u); // 803D1504
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803D1508
  if (crb(c,0)) { IRQCHK(c); goto L_803D14C8; } // 803D150C
  c->r[3]=0u+0x806C0000u; // 803D1510
  c->r[4]=R32(c->r[27]+0x000000FCu); // 803D1514
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803D1518
  c->lr=0x803D1520u; f_802A704C(c); // 803D151C
L_803D1520:;
  c->r[3]=R32(c->r[27]+0x00000028u); // 803D1520
  cmps(c,0,(int32_t)c->r[3],0); // 803D1524
  if (crb(c,2)) { goto L_803D1564; } // 803D1528
  c->r[0]=R8(c->r[3]+0x00000054u); // 803D152C
  cmps(c,0,(int32_t)c->r[0],0); // 803D1530
  if (!crb(c,2)) { goto L_803D1564; } // 803D1534
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D1538
  c->r[4]=0u+0xFFFFFFFFu; // 803D153C
  c->r[12]=R32(c->r[12]+0x00000008u); // 803D1540
  c->ctr=c->r[12]; // 803D1544
  if (true) { c->lr=0x803D154Cu; dispatch(c,c->ctr); } // 803D1548
  c->r[3]=0u+0x806C0000u; // 803D154C
  c->r[4]=R32(c->r[27]+0x00000028u); // 803D1550
  c->r[3]=R32(c->r[3]+0x000025A8u); // 803D1554
  c->lr=0x803D155Cu; f_802A704C(c); // 803D1558
  c->r[0]=0u+0x00000000u; // 803D155C
  W32(c->r[27]+0x00000028u,c->r[0]); // 803D1560
L_803D1564:;
  c->r[3]=c->r[27]+0x000000F4u; // 803D1564
  c->lr=0x803D156Cu; f_803C94C0(c); // 803D1568
  c->r[3]=addc(c,c->r[27],0x000000E4u,0); cr0(c,c->r[3]); // 803D156C
  if (crb(c,2)) { goto L_803D1588; } // 803D1570
  c->r[4]=0u+0x803D0000u; // 803D1574
  c->r[5]=0u+0x00000004u; // 803D1578
  c->r[4]=c->r[4]+0xFFFF9398u; // 803D157C
  c->r[6]=0u+0x00000004u; // 803D1580
  c->lr=0x803D1588u; f_80289C2C(c); // 803D1584
L_803D1588:;
  c->r[3]=c->r[27]|c->r[27]; // 803D1588
  c->r[4]=0u+0x00000000u; // 803D158C
  c->lr=0x803D1594u; f_803CE7FC(c); // 803D1590
  cmps(c,0,(int32_t)c->r[28],0); // 803D1594
  if (!crb(c,1)) { goto L_803D15A4; } // 803D1598
  c->r[3]=c->r[27]|c->r[27]; // 803D159C
  c->lr=0x803D15A4u; f_802896EC(c); // 803D15A0
L_803D15A4:;
  c->r[11]=c->r[1]+0x00000020u; // 803D15A4
  c->r[3]=c->r[27]|c->r[27]; // 803D15A8
  c->lr=0x803D15B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D15AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D15B0
  c->lr=c->r[0]; // 803D15B4
  c->r[1]=c->r[1]+0x00000020u; // 803D15B8
  return; // 803D15BC
}

// fn_803D15C0
void f_803D15C0(Ctx* __restrict c) {
  trace_call(0x803D15C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D15C0
  c->r[0]=c->lr; // 803D15C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D15C8
  c->r[11]=c->r[1]+0x00000020u; // 803D15CC
  c->lr=0x803D15D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D15D0
  c->r[6]=R32(c->r[3]+0x00000028u); // 803D15D4
  c->r[27]=c->r[3]|c->r[3]; // 803D15D8
  c->r[28]=c->r[4]|c->r[4]; // 803D15DC
  c->r[29]=c->r[5]|c->r[5]; // 803D15E0
  cmps(c,0,(int32_t)c->r[6],0); // 803D15E4
  if (crb(c,2)) { goto L_803D1604; } // 803D15E8
  c->r[3]=c->r[6]+0x00000004u; // 803D15EC
  c->lr=0x803D15F4u; f_803C9424(c); // 803D15F0
  cmps(c,0,(int32_t)c->r[3],0); // 803D15F4
  if (crb(c,2)) { goto L_803D1604; } // 803D15F8
  c->r[3]=R32(c->r[27]+0x00000028u); // 803D15FC
  goto L_803D16A4; // 803D1600
L_803D1604:;
  c->r[31]=0u+0x00000000u; // 803D1604
  c->r[30]=0u+0x00000000u; // 803D1608
  goto L_803D164C; // 803D160C
L_803D1610:;
  c->r[0]=R32(c->r[27]+0x000000FCu); // 803D1610
  c->r[4]=c->r[28]|c->r[28]; // 803D1614
  c->r[3]=c->r[0]+c->r[30]; // 803D1618
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D161C
  c->r[3]=c->r[3]+0x00000004u; // 803D1620
  c->lr=0x803D1628u; f_803C9424(c); // 803D1624
  cmps(c,0,(int32_t)c->r[3],0); // 803D1628
  if (crb(c,2)) { goto L_803D1644; } // 803D162C
  c->r[3]=R32(c->r[27]+0x000000FCu); // 803D1630
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803D1634
  c->r[3]=c->r[3]+c->r[0]; // 803D1638
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D163C
  goto L_803D16A4; // 803D1640
L_803D1644:;
  c->r[30]=c->r[30]+0x00000008u; // 803D1644
  c->r[31]=c->r[31]+0x00000001u; // 803D1648
L_803D164C:;
  c->r[0]=R8(c->r[27]+0x00000100u); // 803D164C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 803D1650
  if (crb(c,0)) { IRQCHK(c); goto L_803D1610; } // 803D1654
  cmps(c,0,(int32_t)c->r[29],0); // 803D1658
  if (crb(c,2)) { goto L_803D16A0; } // 803D165C
  c->r[31]=R32(c->r[27]+0x00000014u); // 803D1660
  c->r[30]=c->r[27]+0x00000014u; // 803D1664
  goto L_803D1698; // 803D1668
L_803D166C:;
  c->r[12]=R32(c->r[31]+0xFFFFFFFCu); // 803D166C
  c->r[3]=c->r[31]+0xFFFFFFFCu; // 803D1670
  c->r[4]=c->r[28]|c->r[28]; // 803D1674
  c->r[5]=0u+0x00000001u; // 803D1678
  c->r[12]=R32(c->r[12]+0x00000040u); // 803D167C
  c->ctr=c->r[12]; // 803D1680
  if (true) { c->lr=0x803D1688u; dispatch(c,c->ctr); } // 803D1684
  cmps(c,0,(int32_t)c->r[3],0); // 803D1688
  if (crb(c,2)) { goto L_803D1694; } // 803D168C
  goto L_803D16A4; // 803D1690
L_803D1694:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 803D1694
L_803D1698:;
  cmpu(c,0,c->r[31],c->r[30]); // 803D1698
  if (!crb(c,2)) { IRQCHK(c); goto L_803D166C; } // 803D169C
L_803D16A0:;
  c->r[3]=0u+0x00000000u; // 803D16A0
L_803D16A4:;
  c->r[11]=c->r[1]+0x00000020u; // 803D16A4
  c->lr=0x803D16ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D16A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D16AC
  c->lr=c->r[0]; // 803D16B0
  c->r[1]=c->r[1]+0x00000020u; // 803D16B4
  return; // 803D16B8
}

// fn_803D16BC
void f_803D16BC(Ctx* __restrict c) {
  trace_call(0x803D16BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D16BC
  c->r[0]=c->lr; // 803D16C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D16C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D16C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D16CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D16D0
  c->r[29]=c->r[4]|c->r[4]; // 803D16D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D16D8
  c->r[28]=c->r[3]|c->r[3]; // 803D16DC
  c->lr=0x803D16E4u; f_803CF2F8(c); // 803D16E0
  cmps(c,0,(int32_t)c->r[3],0); // 803D16E4
  if (crb(c,2)) { goto L_803D16F0; } // 803D16E8
  goto L_803D1740; // 803D16EC
L_803D16F0:;
  c->r[30]=0u+0x00000000u; // 803D16F0
  c->r[31]=0u+0x00000000u; // 803D16F4
  goto L_803D1730; // 803D16F8
L_803D16FC:;
  c->r[0]=R32(c->r[28]+0x000000FCu); // 803D16FC
  c->r[4]=c->r[29]|c->r[29]; // 803D1700
  c->r[3]=c->r[0]+c->r[31]; // 803D1704
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D1708
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D170C
  c->r[12]=R32(c->r[12]+0x00000020u); // 803D1710
  c->ctr=c->r[12]; // 803D1714
  if (true) { c->lr=0x803D171Cu; dispatch(c,c->ctr); } // 803D1718
  cmps(c,0,(int32_t)c->r[3],0); // 803D171C
  if (crb(c,2)) { goto L_803D1728; } // 803D1720
  goto L_803D1740; // 803D1724
L_803D1728:;
  c->r[31]=c->r[31]+0x00000008u; // 803D1728
  c->r[30]=c->r[30]+0x00000001u; // 803D172C
L_803D1730:;
  c->r[0]=R8(c->r[28]+0x00000100u); // 803D1730
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803D1734
  if (crb(c,0)) { IRQCHK(c); goto L_803D16FC; } // 803D1738
  c->r[3]=0u+0x00000000u; // 803D173C
L_803D1740:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D1740
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D1744
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D1748
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D174C
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D1750
  c->lr=c->r[0]; // 803D1754
  c->r[1]=c->r[1]+0x00000020u; // 803D1758
  return; // 803D175C
}

// fn_803D1760
void f_803D1760(Ctx* __restrict c) {
  trace_call(0x803D1760u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1760
  c->r[0]=c->lr; // 803D1764
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D1768
  c->r[11]=c->r[1]+0x00000020u; // 803D176C
  c->lr=0x803D1774u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D1770
  c->r[26]=c->r[3]|c->r[3]; // 803D1774
  c->r[27]=c->r[4]|c->r[4]; // 803D1778
  c->r[28]=c->r[5]|c->r[5]; // 803D177C
  c->r[29]=c->r[6]|c->r[6]; // 803D1780
  c->r[30]=0u+0x00000000u; // 803D1784
  c->r[31]=0u+0x00000000u; // 803D1788
  goto L_803D17BC; // 803D178C
L_803D1790:;
  c->r[0]=R32(c->r[26]+0x000000FCu); // 803D1790
  c->r[4]=c->r[27]|c->r[27]; // 803D1794
  c->r[5]=c->r[28]|c->r[28]; // 803D1798
  c->r[3]=c->r[0]+c->r[31]; // 803D179C
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D17A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D17A4
  c->r[12]=R32(c->r[12]+0x00000024u); // 803D17A8
  c->ctr=c->r[12]; // 803D17AC
  if (true) { c->lr=0x803D17B4u; dispatch(c,c->ctr); } // 803D17B0
  c->r[31]=c->r[31]+0x00000008u; // 803D17B4
  c->r[30]=c->r[30]+0x00000001u; // 803D17B8
L_803D17BC:;
  c->r[0]=R8(c->r[26]+0x00000100u); // 803D17BC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803D17C0
  if (crb(c,0)) { IRQCHK(c); goto L_803D1790; } // 803D17C4
  c->r[3]=c->r[26]|c->r[26]; // 803D17C8
  c->r[4]=c->r[27]|c->r[27]; // 803D17CC
  c->r[5]=c->r[28]|c->r[28]; // 803D17D0
  c->r[6]=c->r[29]|c->r[29]; // 803D17D4
  c->lr=0x803D17DCu; f_803CF370(c); // 803D17D8
  c->r[11]=c->r[1]+0x00000020u; // 803D17DC
  c->lr=0x803D17E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D17E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D17E4
  c->lr=c->r[0]; // 803D17E8
  c->r[1]=c->r[1]+0x00000020u; // 803D17EC
  return; // 803D17F0
}

// fn_803D17F4
void f_803D17F4(Ctx* __restrict c) {
  trace_call(0x803D17F4u);
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803D17F4
  c->r[7]=c->r[4]+c->r[0]; // 803D17F8
  c->r[6]=R8(c->r[7]+0x000000E4u); // 803D17FC
  c->r[5]=R8(c->r[7]+0x000000E5u); // 803D1800
  c->r[4]=R8(c->r[7]+0x000000E6u); // 803D1804
  c->r[0]=R8(c->r[7]+0x000000E7u); // 803D1808
  W8(c->r[3]+0x00000000u,c->r[6]); // 803D180C
  W8(c->r[3]+0x00000001u,c->r[5]); // 803D1810
  W8(c->r[3]+0x00000002u,c->r[4]); // 803D1814
  W8(c->r[3]+0x00000003u,c->r[0]); // 803D1818
  return; // 803D181C
}

// fn_803D1820
void f_803D1820(Ctx* __restrict c) {
  trace_call(0x803D1820u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803D1820
  c->r[6]=R8(c->r[5]+0x00000000u); // 803D1824
  c->r[4]=c->r[3]+c->r[0]; // 803D1828
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D182C
  W8(c->r[4]+0x000000E4u,c->r[6]); // 803D1830
  c->r[3]=R8(c->r[5]+0x00000002u); // 803D1834
  W8(c->r[4]+0x000000E5u,c->r[0]); // 803D1838
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D183C
  W8(c->r[4]+0x000000E6u,c->r[3]); // 803D1840
  W8(c->r[4]+0x000000E7u,c->r[0]); // 803D1844
  return; // 803D1848
}

// fn_803D184C
void f_803D184C(Ctx* __restrict c) {
  trace_call(0x803D184Cu);
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFCu; // 803D184C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803D1850
  c->r[3]=c->r[3]+c->r[5]; // 803D1854
  c->r[3]=c->r[3]+c->r[0]; // 803D1858
  c->r[3]=R8(c->r[3]+0x000000E4u); // 803D185C
  return; // 803D1860
}

// fn_803D1864
void f_803D1864(Ctx* __restrict c) {
  trace_call(0x803D1864u);
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 803D1864
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 803D1868
  c->r[3]=c->r[3]+c->r[6]; // 803D186C
  c->r[3]=c->r[3]+c->r[0]; // 803D1870
  W8(c->r[3]+0x000000E4u,c->r[5]); // 803D1874
  return; // 803D1878
}

// fn_803D187C
void f_803D187C(Ctx* __restrict c) {
  trace_call(0x803D187Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D187C
  c->r[0]=c->lr; // 803D1880
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D1884
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803D1888
  c->r[31]=c->r[3]|c->r[3]; // 803D188C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D1890
  c->r[12]=R32(c->r[12]+0x00000060u); // 803D1894
  c->ctr=c->r[12]; // 803D1898
  if (true) { c->lr=0x803D18A0u; dispatch(c,c->ctr); } // 803D189C
  c->r[5]=R8(c->r[31]+0x00000100u); // 803D18A0
  c->r[4]=c->r[31]|c->r[31]; // 803D18A4
  c->r[6]=R32(c->r[31]+0x000000FCu); // 803D18A8
  c->r[3]=c->r[1]+0x00000018u; // 803D18AC
  c->lr=0x803D18B4u; f_803D35C4(c); // 803D18B0
  c->r[6]=R32(c->r[1]+0x00000018u); // 803D18B4
  c->r[3]=c->r[31]|c->r[31]; // 803D18B8
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 803D18BC
  c->r[4]=R32(c->r[1]+0x00000020u); // 803D18C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D18C4
  W32(c->r[1]+0x00000028u,c->r[6]); // 803D18C8
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 803D18CC
  W32(c->r[1]+0x00000030u,c->r[4]); // 803D18D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D18D4
  c->lr=0x803D18DCu; f_803CF530(c); // 803D18D8
  W32(c->r[1]+0x00000010u,c->r[3]); // 803D18DC
  c->r[5]=c->r[1]+0x00000028u; // 803D18E0
  W32(c->r[1]+0x00000014u,c->r[4]); // 803D18E4
  c->r[12]=R32(c->r[31]+0x00000000u); // 803D18E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 803D18EC
  c->r[3]=c->r[31]|c->r[31]; // 803D18F0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 803D18F4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803D18F8
  c->r[4]=c->r[1]+0x00000010u; // 803D18FC
  c->r[6]=R8(c->r[31]+0x000000CEu); // 803D1900
  c->ctr=c->r[12]; // 803D1904
  if (true) { c->lr=0x803D190Cu; dispatch(c,c->ctr); } // 803D1908
  c->r[0]=R8(c->r[31]+0x00000100u); // 803D190C
  cmps(c,0,(int32_t)c->r[0],4); // 803D1910
  if (crb(c,2)) { goto L_803D195C; } // 803D1914
  if (!crb(c,0)) { goto L_803D1928; } // 803D1918
  cmps(c,0,(int32_t)c->r[0],1); // 803D191C
  if (crb(c,2)) { goto L_803D1934; } // 803D1920
  goto L_803D19A8; // 803D1924
L_803D1928:;
  cmps(c,0,(int32_t)c->r[0],8); // 803D1928
  if (crb(c,2)) { goto L_803D1984; } // 803D192C
  goto L_803D19A8; // 803D1930
L_803D1934:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 803D1934
  c->r[3]=c->r[31]|c->r[31]; // 803D1938
  c->r[4]=c->r[1]+0x00000010u; // 803D193C
  c->r[6]=c->r[1]+0x00000028u; // 803D1940
  c->r[12]=R32(c->r[12]+0x00000070u); // 803D1944
  c->r[5]=R32(c->r[31]+0x000000FCu); // 803D1948
  c->r[7]=R8(c->r[31]+0x000000CEu); // 803D194C
  c->ctr=c->r[12]; // 803D1950
  if (true) { c->lr=0x803D1958u; dispatch(c,c->ctr); } // 803D1954
  goto L_803D19A8; // 803D1958
L_803D195C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 803D195C
  c->r[3]=c->r[31]|c->r[31]; // 803D1960
  c->r[4]=c->r[1]+0x00000010u; // 803D1964
  c->r[6]=c->r[1]+0x00000028u; // 803D1968
  c->r[12]=R32(c->r[12]+0x00000074u); // 803D196C
  c->r[5]=R32(c->r[31]+0x000000FCu); // 803D1970
  c->r[7]=R8(c->r[31]+0x000000CEu); // 803D1974
  c->ctr=c->r[12]; // 803D1978
  if (true) { c->lr=0x803D1980u; dispatch(c,c->ctr); } // 803D197C
  goto L_803D19A8; // 803D1980
L_803D1984:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 803D1984
  c->r[3]=c->r[31]|c->r[31]; // 803D1988
  c->r[4]=c->r[1]+0x00000010u; // 803D198C
  c->r[6]=c->r[1]+0x00000028u; // 803D1990
  c->r[12]=R32(c->r[12]+0x00000078u); // 803D1994
  c->r[5]=R32(c->r[31]+0x000000FCu); // 803D1998
  c->r[7]=R8(c->r[31]+0x000000CEu); // 803D199C
  c->ctr=c->r[12]; // 803D19A0
  if (true) { c->lr=0x803D19A8u; dispatch(c,c->ctr); } // 803D19A4
L_803D19A8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D19A8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803D19AC
  c->lr=c->r[0]; // 803D19B0
  c->r[1]=c->r[1]+0x00000040u; // 803D19B4
  return; // 803D19B8
}

// fn_803D19BC
void f_803D19BC(Ctx* __restrict c) {
  trace_call(0x803D19BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D19BC
  c->r[0]=c->lr; // 803D19C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D19C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D19C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D19CC
  c->r[30]=c->r[4]|c->r[4]; // 803D19D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D19D4
  c->r[29]=c->r[3]|c->r[3]; // 803D19D8
  c->lr=0x803D19E0u; f_803CF0AC(c); // 803D19DC
  c->r[0]=R8(c->r[29]+0x000000CFu); // 803D19E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803D19E4
  if (!crb(c,2)) { goto L_803D19F4; } // 803D19E8
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 803D19EC
  if (!crb(c,2)) { goto L_803D1A30; } // 803D19F0
L_803D19F4:;
  c->r[30]=0u+0x00000000u; // 803D19F4
  c->r[31]=0u+0x00000000u; // 803D19F8
  goto L_803D1A24; // 803D19FC
L_803D1A00:;
  c->r[0]=R32(c->r[29]+0x000000FCu); // 803D1A00
  c->r[3]=c->r[0]+c->r[31]; // 803D1A04
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D1A08
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D1A0C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803D1A10
  c->ctr=c->r[12]; // 803D1A14
  if (true) { c->lr=0x803D1A1Cu; dispatch(c,c->ctr); } // 803D1A18
  c->r[31]=c->r[31]+0x00000008u; // 803D1A1C
  c->r[30]=c->r[30]+0x00000001u; // 803D1A20
L_803D1A24:;
  c->r[0]=R8(c->r[29]+0x00000100u); // 803D1A24
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803D1A28
  if (crb(c,0)) { IRQCHK(c); goto L_803D1A00; } // 803D1A2C
L_803D1A30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D1A30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D1A34
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D1A38
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D1A3C
  c->lr=c->r[0]; // 803D1A40
  c->r[1]=c->r[1]+0x00000020u; // 803D1A44
  return; // 803D1A48
}

// fn_803D1A4C
void f_803D1A4C(Ctx* __restrict c) {
  trace_call(0x803D1A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1A4C
  c->r[0]=c->lr; // 803D1A50
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D1A54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D1A58
  c->r[31]=0u+0x00000000u; // 803D1A5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D1A60
  c->r[30]=0u+0x00000000u; // 803D1A64
  W32(c->r[1]+0x00000014u,c->r[29]); // 803D1A68
  c->r[29]=c->r[4]|c->r[4]; // 803D1A6C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803D1A70
  c->r[28]=c->r[3]|c->r[3]; // 803D1A74
  goto L_803D1AA4; // 803D1A78
L_803D1A7C:;
  c->r[0]=R32(c->r[28]+0x000000FCu); // 803D1A7C
  c->r[4]=c->r[29]|c->r[29]; // 803D1A80
  c->r[3]=c->r[0]+c->r[31]; // 803D1A84
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D1A88
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D1A8C
  c->r[12]=R32(c->r[12]+0x00000014u); // 803D1A90
  c->ctr=c->r[12]; // 803D1A94
  if (true) { c->lr=0x803D1A9Cu; dispatch(c,c->ctr); } // 803D1A98
  c->r[31]=c->r[31]+0x00000008u; // 803D1A9C
  c->r[30]=c->r[30]+0x00000001u; // 803D1AA0
L_803D1AA4:;
  c->r[0]=R8(c->r[28]+0x00000100u); // 803D1AA4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803D1AA8
  if (crb(c,0)) { IRQCHK(c); goto L_803D1A7C; } // 803D1AAC
  c->r[3]=c->r[28]|c->r[28]; // 803D1AB0
  c->r[4]=c->r[29]|c->r[29]; // 803D1AB4
  c->lr=0x803D1ABCu; f_803CF224(c); // 803D1AB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D1ABC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D1AC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D1AC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803D1AC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 803D1ACC
  c->lr=c->r[0]; // 803D1AD0
  c->r[1]=c->r[1]+0x00000020u; // 803D1AD4
  return; // 803D1AD8
}

// fn_803D1ADC
void f_803D1ADC(Ctx* __restrict c) {
  trace_call(0x803D1ADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1ADC
  c->r[0]=c->lr; // 803D1AE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D1AE4
  c->r[11]=c->r[1]+0x00000030u; // 803D1AE8
  c->lr=0x803D1AF0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D1AEC
  c->r[30]=c->r[6]|c->r[6]; // 803D1AF0
  c->r[27]=c->r[3]|c->r[3]; // 803D1AF4
  c->r[28]=c->r[4]|c->r[4]; // 803D1AF8
  c->r[29]=c->r[5]|c->r[5]; // 803D1AFC
  c->r[4]=c->r[30]|c->r[30]; // 803D1B00
  c->r[3]=c->r[3]+0x000000E4u; // 803D1B04
  c->lr=0x803D1B0Cu; f_803C9724(c); // 803D1B08
  c->r[4]=c->r[3]|c->r[3]; // 803D1B0C
  c->r[3]=R32(c->r[27]+0x00000028u); // 803D1B10
  c->r[5]=c->r[30]|c->r[30]; // 803D1B14
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D1B18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D1B1C
  c->ctr=c->r[12]; // 803D1B20
  if (true) { c->lr=0x803D1B28u; dispatch(c,c->ctr); } // 803D1B24
  c->r[4]=R8(c->r[27]+0x000000F5u); // 803D1B28
  c->r[31]=c->r[3]|c->r[3]; // 803D1B2C
  c->lr=0x803D1B34u; f_803C97E0(c); // 803D1B30
  cmps(c,0,(int32_t)c->r[31],0); // 803D1B34
  if (crb(c,2)) { goto L_803D1B44; } // 803D1B38
  c->r[7]=c->r[27]+0x000000E4u; // 803D1B3C
  goto L_803D1B48; // 803D1B40
L_803D1B44:;
  c->r[7]=0u+0x00000000u; // 803D1B44
L_803D1B48:;
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1B48
  c->r[8]=c->r[30]|c->r[30]; // 803D1B4C
  {uint32_t ea=c->r[29]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D1B50
  c->r[3]=c->r[1]+0x00000010u; // 803D1B54
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1B58
  c->r[4]=c->r[1]+0x00000008u; // 803D1B5C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D1B60
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 803D1B64
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D1B68
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 803D1B6C
  {uint32_t ea=c->r[27]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1B70
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[3]); // 803D1B74
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803D1B78
  c->r[6]=R32(c->r[27]+0x000000F8u); // 803D1B7C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 803D1B80
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1B84
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[3]); // 803D1B88
  {uint32_t ea=c->r[27]+0x000000E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D1B8C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 803D1B90
  {uint32_t ea=c->r[27]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1B94
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 803D1B98
  c->r[5]=R8(c->r[27]+0x000000F5u); // 803D1B9C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 803D1BA0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1BA4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 803D1BA8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1BAC
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[6]); // 803D1BB0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803D1BB4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 803D1BB8
  {uint32_t ea=c->r[27]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D1BBC
  {uint32_t ea=c->r[27]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1BC0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 803D1BC4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D1BC8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 803D1BCC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803D1BD0
  c->lr=0x803D1BD8u; f_803C9E24(c); // 803D1BD4
  c->r[11]=c->r[1]+0x00000030u; // 803D1BD8
  c->lr=0x803D1BE0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D1BDC
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D1BE0
  c->lr=c->r[0]; // 803D1BE4
  c->r[1]=c->r[1]+0x00000030u; // 803D1BE8
  return; // 803D1BEC
}

// DrawFrame__Q36nw4hbm3lyt6WindowFRCQ36nw4hbm4math4VEC2RCQ46nw4hbm3lyt6Window5FrameRCQ36nw4hbm3lyt15WindowFrameSizeUc
void f_803D1BF0(Ctx* __restrict c) {
  trace_call(0x803D1BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D1BF0
  c->r[0]=c->lr; // 803D1BF4
  W32(c->r[1]+0x000000E4u,c->r[0]); // 803D1BF8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 803D1BFC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 803D1C00
  c->r[11]=c->r[1]+0x000000D0u; // 803D1C04
  c->lr=0x803D1C0Cu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D1C08
  c->r[0]=0u+0x43300000u; // 803D1C0C
  c->r[19]=c->r[3]|c->r[3]; // 803D1C10
  c->r[22]=c->r[7]|c->r[7]; // 803D1C14
  W32(c->r[1]+0x00000088u,c->r[0]); // 803D1C18
  c->r[20]=c->r[4]|c->r[4]; // 803D1C1C
  c->r[18]=c->r[5]|c->r[5]; // 803D1C20
  W32(c->r[1]+0x00000090u,c->r[0]); // 803D1C24
  c->r[21]=c->r[6]|c->r[6]; // 803D1C28
  c->r[4]=c->r[22]|c->r[22]; // 803D1C2C
  c->r[3]=0u+0x00000000u; // 803D1C30
  c->lr=0x803D1C38u; f_803C9724(c); // 803D1C34
  c->r[4]=c->r[3]|c->r[3]; // 803D1C38
  c->r[3]=R32(c->r[18]+0x00000004u); // 803D1C3C
  c->r[5]=c->r[22]|c->r[22]; // 803D1C40
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D1C44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D1C48
  c->ctr=c->r[12]; // 803D1C4C
  if (true) { c->lr=0x803D1C54u; dispatch(c,c->ctr); } // 803D1C50
  c->r[23]=c->r[3]|c->r[3]; // 803D1C54
  c->r[4]=0u+0x00000001u; // 803D1C58
  c->lr=0x803D1C60u; f_803C97E0(c); // 803D1C5C
  c->r[4]=R32(c->r[18]+0x00000004u); // 803D1C60
  c->r[3]=c->r[1]+0x00000050u; // 803D1C64
  c->r[5]=0u+0x00000000u; // 803D1C68
  c->lr=0x803D1C70u; f_803CE5C4(c); // 803D1C6C
  c->r[24]=0u+0x80440000u; // 803D1C70
  c->r[0]=0u+0xFFFFFFFFu; // 803D1C74
  c->r[24]=c->r[24]+0xFFFF9208u; // 803D1C78
  c->r[29]=0u+0x803F0000u; // 803D1C7C
  c->r[7]=R8(c->r[24]+0x00000009u); // 803D1C80
  c->r[25]=0u+0x803F0000u; // 803D1C84
  c->r[8]=R8(c->r[24]+0x00000008u); // 803D1C88
  c->r[3]=0u+0x803F0000u; // 803D1C8C
  c->r[10]=R8(c->r[24]+c->r[7]); // 803D1C90
  c->r[4]=c->r[24]+c->r[7]; // 803D1C94
  c->r[6]=c->r[24]+c->r[8]; // 803D1C98
  {uint32_t ea=c->r[3]+0x00000EC0u; c->f[12]=c->ps1[12]=RF32(ea);} // 803D1C9C
  W32(c->r[1]+0x00000094u,c->r[10]); // 803D1CA0
  c->r[3]=0u-c->r[23]; // 803D1CA4
  c->r[5]=R8(c->r[24]+c->r[8]); // 803D1CA8
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFFCu; // 803D1CAC
  c->r[6]=R8(c->r[6]+0x00000002u); // 803D1CB0
  c->r[11]=c->r[1]+0x00000038u; // 803D1CB4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 803D1CB8
  c->r[12]=rotl(c->r[7],2)&0xFFFFFFFCu; // 803D1CBC
  c->r[6]=c->r[6]-c->r[5]; // 803D1CC0
  c->r[4]=R8(c->r[4]+0x00000004u); // 803D1CC4
  c->r[6]=c->r[6]^0x80000000u; // 803D1CC8
  {uint32_t ea=c->r[25]+0x00000EC8u; c->f[3]=RF64(ea);} // 803D1CCC
  W32(c->r[1]+0x00000094u,c->r[6]); // 803D1CD0
  c->r[4]=c->r[4]-c->r[10]; // 803D1CD4
  c->r[4]=c->r[4]^0x80000000u; // 803D1CD8
  {uint32_t ea=c->r[20]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 803D1CDC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 803D1CE0
  c->r[27]=c->r[1]+0x00000068u; // 803D1CE4
  {uint32_t ea=c->r[29]+0x00000ED0u; c->f[1]=RF64(ea);} // 803D1CE8
  c->r[3]=c->r[3]|c->r[23]; // 803D1CEC
  W32(c->r[1]+0x00000094u,c->r[4]); // 803D1CF0
  c->r[7]=sraw(c,c->r[3],31); // 803D1CF4
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 803D1CF8
  {uint32_t ea=c->r[20]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 803D1CFC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 803D1D00
  c->r[31]=c->r[1]+0x00000058u; // 803D1D04
  W32(c->r[1]+0x0000008Cu,c->r[5]); // 803D1D08
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[3]); // 803D1D0C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 803D1D10
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 803D1D14
  {uint32_t ea=c->r[1]+0x00000054u; c->f[13]=c->ps1[13]=RF32(ea);} // 803D1D18
  c->r[26]=c->r[1]+0x00000078u; // 803D1D1C
  W32(c->r[1]+0x0000008Cu,c->r[5]); // 803D1D20
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[3]); // 803D1D24
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 803D1D28
  c->r[28]=c->r[1]+0x00000070u; // 803D1D2C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D1D30
  c->r[30]=c->r[1]+0x00000080u; // 803D1D34
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 803D1D38
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[3]); // 803D1D3C
  {uint32_t ea=c->r[21]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 803D1D40
  c->r[6]=c->r[27]|c->r[27]; // 803D1D44
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 803D1D48
  c->r[8]=c->r[22]|c->r[22]; // 803D1D4C
  W32(c->r[1]+0x00000058u,c->r[0]); // 803D1D50
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 803D1D54
  {uint32_t ea=c->r[21]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 803D1D58
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 803D1D5C
  c->r[3]=c->r[1]+0x00000048u; // 803D1D60
  c->r[4]=c->r[1]+0x00000040u; // 803D1D64
  c->r[7]=c->r[31]&c->r[7]; // 803D1D68
  W32(c->r[1]+0x00000060u,c->r[0]); // 803D1D6C
  c->r[5]=0u+0x00000001u; // 803D1D70
  W32(c->r[1]+0x00000064u,c->r[0]); // 803D1D74
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[12]);} // 803D1D78
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[12]);} // 803D1D7C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[11]);} // 803D1D80
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[10]);} // 803D1D84
  {uint32_t ea=c->r[19]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1D88
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[31]);} // 803D1D8C
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[9]); // 803D1D90
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[13]);} // 803D1D94
  {uint32_t ea=c->r[11]+c->r[9]; c->f[3]=c->ps1[3]=RF32(ea);} // 803D1D98
  {uint32_t ea=c->r[11]+c->r[12]; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1D9C
  {uint32_t ea=c->r[26]+c->r[9]; WF32(ea,c->f[7]);} // 803D1DA0
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803D1DA4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D1DA8
  {uint32_t ea=c->r[27]+c->r[9]; WF32(ea,c->f[7]);} // 803D1DAC
  c->f[1]=c->ps1[1]=S(c->f[9]/c->f[3]); // 803D1DB0
  {uint32_t ea=c->r[28]+c->r[12]; WF32(ea,c->f[6]);} // 803D1DB4
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[6]);} // 803D1DB8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 803D1DBC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 803D1DC0
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 803D1DC4
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 803D1DC8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D1DCC
  {uint32_t ea=c->r[28]+c->r[9]; WF32(ea,c->f[1]);} // 803D1DD0
  {uint32_t ea=c->r[30]+c->r[9]; WF32(ea,c->f[1]);} // 803D1DD4
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 803D1DD8
  {uint32_t ea=c->r[30]+c->r[12]; WF32(ea,c->f[0]);} // 803D1DDC
  c->lr=0x803D1DE4u; f_803C9E24(c); // 803D1DE0
  c->r[6]=R8(c->r[24]+0x00000013u); // 803D1DE4
  c->r[8]=c->r[24]+0x0000000Au; // 803D1DE8
  c->r[7]=R8(c->r[24]+0x00000012u); // 803D1DEC
  c->r[0]=0u-c->r[23]; // 803D1DF0
  c->r[4]=c->r[8]+c->r[6]; // 803D1DF4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D1DF8
  c->r[3]=c->r[0]|c->r[23]; // 803D1DFC
  c->r[0]=R8(c->r[4]+0x00000002u); // 803D1E00
  c->r[5]=c->r[8]+c->r[7]; // 803D1E04
  {uint32_t ea=c->r[1]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 803D1E08
  c->r[10]=R8(c->r[5]+0x00000002u); // 803D1E0C
  c->r[5]=sraw(c,c->r[3],31); // 803D1E10
  c->r[3]=R8(c->r[8]+c->r[7]); // 803D1E14
  c->r[11]=rotl(c->r[7],2)&0xFFFFFFFCu; // 803D1E18
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D1E1C
  c->r[12]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D1E20
  c->r[3]=c->r[3]-c->r[10]; // 803D1E24
  {uint32_t ea=c->r[20]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D1E28
  {uint32_t ea=c->r[19]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1E2C
  c->r[3]=c->r[3]^0x80000000u; // 803D1E30
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=RF64(ea);} // 803D1E34
  c->r[7]=c->r[31]&c->r[5]; // 803D1E38
  {uint32_t ea=c->r[21]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 803D1E3C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D1E40
  W32(c->r[1]+0x00000094u,c->r[3]); // 803D1E44
  c->r[9]=c->r[1]+0x00000028u; // 803D1E48
  c->r[3]=R8(c->r[4]+0x00000006u); // 803D1E4C
  c->r[6]=c->r[27]|c->r[27]; // 803D1E50
  c->f[10]=c->ps1[10]=S(c->f[0]-c->f[8]); // 803D1E54
  {uint32_t ea=c->r[20]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 803D1E58
  c->r[3]=c->r[3]-c->r[0]; // 803D1E5C
  c->r[18]=c->r[3]^0x80000000u; // 803D1E60
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 803D1E64
  {uint32_t ea=c->r[29]+0x00000ED0u; c->f[3]=RF64(ea);} // 803D1E68
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 803D1E6C
  c->r[8]=c->r[22]|c->r[22]; // 803D1E70
  {uint32_t ea=c->r[25]+0x00000EC8u; c->f[6]=RF64(ea);} // 803D1E74
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 803D1E78
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 803D1E7C
  c->r[3]=c->r[1]+0x00000048u; // 803D1E80
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[6]); // 803D1E84
  {uint32_t ea=c->r[21]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 803D1E88
  W32(c->r[1]+0x00000094u,c->r[18]); // 803D1E8C
  {uint32_t ea=c->r[9]+c->r[11]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1E90
  c->r[4]=c->r[1]+0x00000040u; // 803D1E94
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 803D1E98
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 803D1E9C
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 803D1EA0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 803D1EA4
  {uint32_t ea=c->r[9]+c->r[12]; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1EA8
  {uint32_t ea=c->r[1]+0x00000088u; c->f[5]=RF64(ea);} // 803D1EAC
  c->r[5]=0u+0x00000001u; // 803D1EB0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 803D1EB4
  c->f[2]=c->ps1[2]=S(c->f[8]/c->f[2]); // 803D1EB8
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 803D1EBC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 803D1EC0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 803D1EC4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 803D1EC8
  {uint32_t ea=c->r[19]+0x00000050u; c->f[8]=c->ps1[8]=RF32(ea);} // 803D1ECC
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 803D1ED0
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 803D1ED4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D1ED8
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[6]); // 803D1EDC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 803D1EE0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 803D1EE4
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 803D1EE8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[10]);} // 803D1EEC
  {uint32_t ea=c->r[30]+c->r[11]; WF32(ea,c->f[5]);} // 803D1EF0
  {uint32_t ea=c->r[28]+c->r[11]; WF32(ea,c->f[5]);} // 803D1EF4
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[4]);} // 803D1EF8
  {uint32_t ea=c->r[28]+c->r[12]; WF32(ea,c->f[4]);} // 803D1EFC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 803D1F00
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[9]);} // 803D1F04
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 803D1F08
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 803D1F0C
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[2]);} // 803D1F10
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D1F14
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 803D1F18
  {uint32_t ea=c->r[30]+c->r[12]; WF32(ea,c->f[0]);} // 803D1F1C
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[0]);} // 803D1F20
  c->lr=0x803D1F28u; f_803C9E24(c); // 803D1F24
  c->r[6]=R8(c->r[24]+0x00000031u); // 803D1F28
  c->r[4]=c->r[24]+0x00000028u; // 803D1F2C
  {uint32_t ea=c->r[20]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D1F30
  c->r[0]=0u-c->r[23]; // 803D1F34
  {uint32_t ea=c->r[19]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1F38
  c->r[7]=c->r[4]+c->r[6]; // 803D1F3C
  c->r[8]=R8(c->r[24]+0x00000030u); // 803D1F40
  c->r[3]=c->r[0]|c->r[23]; // 803D1F44
  c->r[0]=R8(c->r[7]+0x00000006u); // 803D1F48
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D1F4C
  c->r[4]=c->r[4]+c->r[8]; // 803D1F50
  {uint32_t ea=c->r[21]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 803D1F54
  c->r[5]=sraw(c,c->r[3],31); // 803D1F58
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D1F5C
  c->f[9]=c->ps1[9]=S(c->f[0]-c->f[8]); // 803D1F60
  c->r[10]=R8(c->r[4]+0x00000006u); // 803D1F64
  c->r[11]=rotl(c->r[8],2)&0xFFFFFFFCu; // 803D1F68
  c->r[3]=R8(c->r[4]+0x00000004u); // 803D1F6C
  c->r[12]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D1F70
  {uint32_t ea=c->r[20]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1F74
  c->r[4]=c->r[3]-c->r[10]; // 803D1F78
  c->r[3]=R8(c->r[7]+0x00000002u); // 803D1F7C
  {uint32_t ea=c->r[21]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 803D1F80
  c->r[4]=c->r[4]^0x80000000u; // 803D1F84
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 803D1F88
  c->r[3]=c->r[3]-c->r[0]; // 803D1F8C
  c->f[10]=c->ps1[10]=S(c->f[0]+c->f[5]); // 803D1F90
  {uint32_t ea=c->r[1]+0x00000054u; c->f[11]=c->ps1[11]=RF32(ea);} // 803D1F94
  W32(c->r[1]+0x00000094u,c->r[4]); // 803D1F98
  c->r[18]=c->r[3]^0x80000000u; // 803D1F9C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[12]=c->ps1[12]=RF32(ea);} // 803D1FA0
  c->r[9]=c->r[1]+0x00000018u; // 803D1FA4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 803D1FA8
  c->r[7]=c->r[31]&c->r[5]; // 803D1FAC
  {uint32_t ea=c->r[29]+0x00000ED0u; c->f[1]=RF64(ea);} // 803D1FB0
  c->r[6]=c->r[27]|c->r[27]; // 803D1FB4
  {uint32_t ea=c->r[25]+0x00000EC8u; c->f[6]=RF64(ea);} // 803D1FB8
  c->r[8]=c->r[22]|c->r[22]; // 803D1FBC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[10]);} // 803D1FC0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 803D1FC4
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 803D1FC8
  c->r[3]=c->r[1]+0x00000048u; // 803D1FCC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[9]);} // 803D1FD0
  c->r[4]=c->r[1]+0x00000040u; // 803D1FD4
  c->r[5]=0u+0x00000001u; // 803D1FD8
  {uint32_t ea=c->r[19]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D1FDC
  W32(c->r[1]+0x00000094u,c->r[18]); // 803D1FE0
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[5]); // 803D1FE4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 803D1FE8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[12]);} // 803D1FEC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 803D1FF0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[11]);} // 803D1FF4
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 803D1FF8
  {uint32_t ea=c->r[9]+c->r[11]; c->f[2]=c->ps1[2]=RF32(ea);} // 803D1FFC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 803D2000
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803D2004
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[10]);} // 803D2008
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 803D200C
  {uint32_t ea=c->r[9]+c->r[12]; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2010
  W32(c->r[1]+0x0000008Cu,c->r[10]); // 803D2014
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D2018
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 803D201C
  c->f[2]=c->ps1[2]=S(c->f[7]/c->f[2]); // 803D2020
  {uint32_t ea=c->r[28]+c->r[11]; WF32(ea,c->f[5]);} // 803D2024
  {uint32_t ea=c->r[30]+c->r[11]; WF32(ea,c->f[5]);} // 803D2028
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 803D202C
  {uint32_t ea=c->r[26]+c->r[12]; WF32(ea,c->f[4]);} // 803D2030
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 803D2034
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 803D2038
  {uint32_t ea=c->r[30]+c->r[12]; WF32(ea,c->f[4]);} // 803D203C
  c->f[0]=c->ps1[0]=S(c->f[8]/c->f[0]); // 803D2040
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[9]);} // 803D2044
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[7]);} // 803D2048
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 803D204C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 803D2050
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 803D2054
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[2]);} // 803D2058
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D205C
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[2]);} // 803D2060
  {uint32_t ea=c->r[28]+c->r[12]; WF32(ea,c->f[0]);} // 803D2064
  {uint32_t ea=c->r[27]+c->r[12]; WF32(ea,c->f[0]);} // 803D2068
  c->lr=0x803D2070u; f_803C9E24(c); // 803D206C
  c->r[6]=R8(c->r[24]+0x0000001Du); // 803D2070
  c->r[8]=c->r[24]+0x00000014u; // 803D2074
  {uint32_t ea=c->r[20]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 803D2078
  c->r[0]=0u-c->r[23]; // 803D207C
  c->r[7]=R8(c->r[24]+0x0000001Cu); // 803D2080
  c->r[4]=c->r[8]+c->r[6]; // 803D2084
  c->r[3]=c->r[0]|c->r[23]; // 803D2088
  c->r[0]=R8(c->r[4]+0x00000004u); // 803D208C
  c->r[4]=c->r[8]+c->r[7]; // 803D2090
  {uint32_t ea=c->r[1]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D2094
  c->r[9]=R8(c->r[4]+0x00000004u); // 803D2098
  c->r[5]=sraw(c,c->r[3],31); // 803D209C
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D20A0
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 803D20A4
  c->r[3]=R8(c->r[4]+0x00000006u); // 803D20A8
  c->r[7]=c->r[31]&c->r[5]; // 803D20AC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 803D20B0
  c->r[12]=c->r[1]+0x00000008u; // 803D20B4
  c->r[4]=c->r[3]-c->r[9]; // 803D20B8
  {uint32_t ea=c->r[20]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D20BC
  c->r[3]=R8(c->r[8]+c->r[6]); // 803D20C0
  c->r[4]=c->r[4]^0x80000000u; // 803D20C4
  W32(c->r[1]+0x00000094u,c->r[4]); // 803D20C8
  c->r[11]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D20CC
  {uint32_t ea=c->r[21]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 803D20D0
  c->r[3]=c->r[3]-c->r[0]; // 803D20D4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D20D8
  c->r[3]=c->r[3]^0x80000000u; // 803D20DC
  c->f[8]=c->ps1[8]=S(c->f[1]+c->f[7]); // 803D20E0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 803D20E4
  {uint32_t ea=c->r[29]+0x00000ED0u; c->f[1]=RF64(ea);} // 803D20E8
  c->r[6]=c->r[27]|c->r[27]; // 803D20EC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 803D20F0
  c->r[8]=c->r[22]|c->r[22]; // 803D20F4
  W32(c->r[1]+0x00000094u,c->r[3]); // 803D20F8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 803D20FC
  {uint32_t ea=c->r[21]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 803D2100
  c->r[3]=c->r[1]+0x00000048u; // 803D2104
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=RF64(ea);} // 803D2108
  c->r[4]=c->r[1]+0x00000040u; // 803D210C
  {uint32_t ea=c->r[25]+0x00000EC8u; c->f[6]=RF64(ea);} // 803D2110
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 803D2114
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 803D2118
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[6]); // 803D211C
  c->r[5]=0u+0x00000001u; // 803D2120
  {uint32_t ea=c->r[12]+c->r[10]; c->f[2]=c->ps1[2]=RF32(ea);} // 803D2124
  {uint32_t ea=c->r[12]+c->r[11]; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2128
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803D212C
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 803D2130
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D2134
  {uint32_t ea=c->r[1]+0x00000088u; c->f[3]=RF64(ea);} // 803D2138
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 803D213C
  c->f[2]=c->ps1[2]=S(c->f[5]/c->f[2]); // 803D2140
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 803D2144
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 803D2148
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[8]);} // 803D214C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 803D2150
  {uint32_t ea=c->r[19]+0x00000050u; c->f[5]=c->ps1[5]=RF32(ea);} // 803D2154
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[7]); // 803D2158
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 803D215C
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[6]); // 803D2160
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[6]); // 803D2164
  {uint32_t ea=c->r[1]+0x00000088u; c->f[1]=RF64(ea);} // 803D2168
  c->f[0]=c->ps1[0]=S(c->f[7]/c->f[0]); // 803D216C
  {uint32_t ea=c->r[27]+c->r[10]; WF32(ea,c->f[5]);} // 803D2170
  {uint32_t ea=c->r[26]+c->r[10]; WF32(ea,c->f[5]);} // 803D2174
  {uint32_t ea=c->r[30]+c->r[11]; WF32(ea,c->f[4]);} // 803D2178
  {uint32_t ea=c->r[26]+c->r[11]; WF32(ea,c->f[4]);} // 803D217C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[9]);} // 803D2180
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 803D2184
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 803D2188
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 803D218C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[7]);} // 803D2190
  {uint32_t ea=c->r[30]+c->r[10]; WF32(ea,c->f[2]);} // 803D2194
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D2198
  {uint32_t ea=c->r[28]+c->r[10]; WF32(ea,c->f[2]);} // 803D219C
  {uint32_t ea=c->r[27]+c->r[11]; WF32(ea,c->f[0]);} // 803D21A0
  {uint32_t ea=c->r[28]+c->r[11]; WF32(ea,c->f[0]);} // 803D21A4
  c->lr=0x803D21ACu; f_803C9E24(c); // 803D21A8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 803D21AC
  c->r[11]=c->r[1]+0x000000D0u; // 803D21B0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 803D21B4
  c->lr=0x803D21BCu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D21B8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 803D21BC
  c->lr=c->r[0]; // 803D21C0
  c->r[1]=c->r[1]+0x000000E0u; // 803D21C4
  return; // 803D21C8
}

// DrawFrame4__Q36nw4hbm3lyt6WindowFRCQ36nw4hbm4math4VEC2PCQ46nw4hbm3lyt6Window5FrameRCQ36nw4hbm3lyt15WindowFrameSizeUc
void f_803D21CC(Ctx* __restrict c) {
  trace_call(0x803D21CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D21CC
  c->r[0]=c->lr; // 803D21D0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 803D21D4
  c->r[11]=c->r[1]+0x000000F0u; // 803D21D8
  c->lr=0x803D21E0u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D21DC
  c->r[8]=0u+0x803F0000u; // 803D21E0
  c->r[0]=0u+0xFFFFFFFFu; // 803D21E4
  {uint32_t ea=c->r[8]+0x00000EC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D21E8
  c->r[8]=0u+0x43300000u; // 803D21EC
  c->r[17]=c->r[3]|c->r[3]; // 803D21F0
  c->r[21]=c->r[7]|c->r[7]; // 803D21F4
  W32(c->r[1]+0x000000A0u,c->r[8]); // 803D21F8
  c->r[18]=c->r[4]|c->r[4]; // 803D21FC
  c->r[19]=c->r[5]|c->r[5]; // 803D2200
  c->r[20]=c->r[6]|c->r[6]; // 803D2204
  W32(c->r[1]+0x000000A8u,c->r[8]); // 803D2208
  c->r[4]=c->r[21]|c->r[21]; // 803D220C
  c->r[3]=0u+0x00000000u; // 803D2210
  W32(c->r[1]+0x00000070u,c->r[0]); // 803D2214
  W32(c->r[1]+0x00000074u,c->r[0]); // 803D2218
  W32(c->r[1]+0x00000078u,c->r[0]); // 803D221C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 803D2220
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 803D2224
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 803D2228
  c->lr=0x803D2230u; f_803C9724(c); // 803D222C
  c->r[23]=c->r[3]|c->r[3]; // 803D2230
  c->r[3]=R32(c->r[19]+0x00000004u); // 803D2234
  c->r[4]=c->r[23]|c->r[23]; // 803D2238
  c->r[5]=c->r[21]|c->r[21]; // 803D223C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D2240
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D2244
  c->ctr=c->r[12]; // 803D2248
  if (true) { c->lr=0x803D2250u; dispatch(c,c->ctr); } // 803D224C
  {uint32_t ea=c->r[18]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2250
  c->r[22]=c->r[3]|c->r[3]; // 803D2254
  {uint32_t ea=c->r[18]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2258
  c->r[3]=c->r[1]+0x00000058u; // 803D225C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 803D2260
  c->r[5]=0u+0x00000000u; // 803D2264
  {uint32_t ea=c->r[20]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2268
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 803D226C
  {uint32_t ea=c->r[20]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2270
  {uint32_t ea=c->r[17]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D2274
  c->r[16]=R8(c->r[19]+0x00000000u); // 803D2278
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 803D227C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 803D2280
  c->r[4]=R32(c->r[19]+0x00000004u); // 803D2284
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 803D2288
  c->lr=0x803D2290u; f_803CE5C4(c); // 803D228C
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D2290
  c->r[24]=0u+0x80440000u; // 803D2294
  c->r[25]=0u+0x803F0000u; // 803D2298
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803D229C
  c->r[24]=c->r[24]+0xFFFF9208u; // 803D22A0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D22A4
  c->r[4]=c->r[24]+c->r[0]; // 803D22A8
  c->r[29]=0u+0x803F0000u; // 803D22AC
  c->r[0]=R8(c->r[4]+0x00000009u); // 803D22B0
  c->r[5]=c->r[1]+0x00000038u; // 803D22B4
  c->r[3]=R8(c->r[4]+0x00000008u); // 803D22B8
  c->r[26]=c->r[1]+0x00000090u; // 803D22BC
  c->r[6]=R8(c->r[4]+c->r[0]); // 803D22C0
  c->r[10]=c->r[4]+c->r[0]; // 803D22C4
  {uint32_t ea=c->r[4]+c->r[3]; c->r[7]=R8(ea); c->r[4]=ea;} // 803D22C8
  c->r[9]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D22CC
  W32(c->r[1]+0x000000ACu,c->r[6]); // 803D22D0
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803D22D4
  c->r[0]=R8(c->r[4]+0x00000002u); // 803D22D8
  c->r[27]=c->r[1]+0x00000080u; // 803D22DC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D22E0
  c->r[28]=c->r[1]+0x00000088u; // 803D22E4
  c->r[3]=c->r[0]-c->r[7]; // 803D22E8
  c->r[0]=R8(c->r[10]+0x00000004u); // 803D22EC
  c->r[3]=c->r[3]^0x80000000u; // 803D22F0
  {uint32_t ea=c->r[25]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D22F4
  W32(c->r[1]+0x000000ACu,c->r[3]); // 803D22F8
  c->r[0]=c->r[0]-c->r[6]; // 803D22FC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D2300
  {uint32_t ea=c->r[29]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D2304
  W32(c->r[1]+0x000000A4u,c->r[7]); // 803D2308
  c->r[0]=c->r[0]^0x80000000u; // 803D230C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D2310
  c->r[30]=c->r[1]+0x00000098u; // 803D2314
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 803D2318
  c->r[3]=c->r[22]|c->r[22]; // 803D231C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 803D2320
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2324
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 803D2328
  c->r[4]=0u+0x00000001u; // 803D232C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 803D2330
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D2334
  W32(c->r[1]+0x000000ACu,c->r[0]); // 803D2338
  {uint32_t ea=c->r[5]+c->r[8]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D233C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D2340
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D2344
  {uint32_t ea=c->r[5]+c->r[9]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2348
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D234C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2350
  {uint32_t ea=c->r[26]+c->r[8]; WF32(ea,c->f[7]);} // 803D2354
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D2358
  W32(c->r[1]+0x000000A4u,c->r[7]); // 803D235C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 803D2360
  {uint32_t ea=c->r[27]+c->r[8]; WF32(ea,c->f[7]);} // 803D2364
  W32(c->r[1]+0x000000A4u,c->r[6]); // 803D2368
  {uint32_t ea=c->r[28]+c->r[9]; WF32(ea,c->f[6]);} // 803D236C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D2370
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 803D2374
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D2378
  {uint32_t ea=c->r[27]+c->r[9]; WF32(ea,c->f[6]);} // 803D237C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D2380
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D2384
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D2388
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D238C
  {uint32_t ea=c->r[28]+c->r[8]; WF32(ea,c->f[1]);} // 803D2390
  {uint32_t ea=c->r[30]+c->r[8]; WF32(ea,c->f[1]);} // 803D2394
  {uint32_t ea=c->r[26]+c->r[9]; WF32(ea,c->f[0]);} // 803D2398
  {uint32_t ea=c->r[30]+c->r[9]; WF32(ea,c->f[0]);} // 803D239C
  c->lr=0x803D23A4u; f_803C97E0(c); // 803D23A0
  c->r[0]=0u-c->r[22]; // 803D23A4
  c->r[31]=c->r[1]+0x00000070u; // 803D23A8
  c->r[0]=c->r[0]|c->r[22]; // 803D23AC
  c->r[6]=c->r[27]|c->r[27]; // 803D23B0
  c->r[0]=sraw(c,c->r[0],31); // 803D23B4
  c->r[8]=c->r[21]|c->r[21]; // 803D23B8
  c->r[3]=c->r[1]+0x00000068u; // 803D23BC
  c->r[4]=c->r[1]+0x00000060u; // 803D23C0
  c->r[7]=c->r[31]&c->r[0]; // 803D23C4
  c->r[5]=0u+0x00000001u; // 803D23C8
  c->lr=0x803D23D0u; f_803C9E24(c); // 803D23CC
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 803D23D0
  c->r[4]=c->r[23]|c->r[23]; // 803D23D4
  c->r[5]=c->r[21]|c->r[21]; // 803D23D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D23DC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D23E0
  c->ctr=c->r[12]; // 803D23E4
  if (true) { c->lr=0x803D23ECu; dispatch(c,c->ctr); } // 803D23E8
  {uint32_t ea=c->r[18]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D23EC
  c->r[22]=c->r[3]|c->r[3]; // 803D23F0
  {uint32_t ea=c->r[17]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D23F4
  c->r[3]=c->r[1]+0x00000050u; // 803D23F8
  {uint32_t ea=c->r[18]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D23FC
  c->r[5]=0u+0x00000000u; // 803D2400
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 803D2404
  {uint32_t ea=c->r[20]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2408
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 803D240C
  {uint32_t ea=c->r[20]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2410
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 803D2414
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 803D2418
  c->r[16]=R8(c->r[19]+0x00000008u); // 803D241C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[3]);} // 803D2420
  c->r[4]=R32(c->r[19]+0x0000000Cu); // 803D2424
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 803D2428
  {uint32_t ea=c->r[17]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D242C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 803D2430
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D2434
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 803D2438
  c->lr=0x803D2440u; f_803CE5C4(c); // 803D243C
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D2440
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2444
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2448
  c->r[8]=c->r[1]+0x00000028u; // 803D244C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803D2450
  c->r[3]=c->r[22]|c->r[22]; // 803D2454
  c->r[9]=c->r[24]+c->r[0]; // 803D2458
  {uint32_t ea=c->r[25]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D245C
  c->r[6]=R8(c->r[9]+0x00000009u); // 803D2460
  c->r[4]=0u+0x00000001u; // 803D2464
  c->r[7]=R8(c->r[9]+0x00000008u); // 803D2468
  c->r[11]=c->r[9]+c->r[6]; // 803D246C
  {uint32_t ea=c->r[29]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D2470
  c->r[10]=R8(c->r[11]+0x00000002u); // 803D2474
  c->r[5]=c->r[9]+c->r[7]; // 803D2478
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D247C
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 803D2480
  W32(c->r[1]+0x000000ACu,c->r[10]); // 803D2484
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D2488
  c->r[7]=R8(c->r[9]+c->r[7]); // 803D248C
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D2490
  c->r[9]=c->r[7]-c->r[0]; // 803D2494
  c->r[7]=R8(c->r[11]+0x00000006u); // 803D2498
  c->r[9]=c->r[9]^0x80000000u; // 803D249C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 803D24A0
  c->r[7]=c->r[7]-c->r[10]; // 803D24A4
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D24A8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 803D24AC
  c->r[7]=c->r[7]^0x80000000u; // 803D24B0
  W32(c->r[1]+0x000000ACu,c->r[9]); // 803D24B4
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 803D24B8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D24BC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D24C0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 803D24C4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D24C8
  W32(c->r[1]+0x000000ACu,c->r[7]); // 803D24CC
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D24D0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D24D4
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D24D8
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D24DC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D24E0
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D24E4
  {uint32_t ea=c->r[30]+c->r[5]; WF32(ea,c->f[7]);} // 803D24E8
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D24EC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 803D24F0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 803D24F4
  {uint32_t ea=c->r[28]+c->r[5]; WF32(ea,c->f[7]);} // 803D24F8
  {uint32_t ea=c->r[27]+c->r[6]; WF32(ea,c->f[6]);} // 803D24FC
  W32(c->r[1]+0x000000A4u,c->r[10]); // 803D2500
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D2504
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 803D2508
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D250C
  {uint32_t ea=c->r[28]+c->r[6]; WF32(ea,c->f[6]);} // 803D2510
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D2514
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D2518
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D251C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D2520
  {uint32_t ea=c->r[27]+c->r[5]; WF32(ea,c->f[1]);} // 803D2524
  {uint32_t ea=c->r[26]+c->r[5]; WF32(ea,c->f[1]);} // 803D2528
  {uint32_t ea=c->r[30]+c->r[6]; WF32(ea,c->f[0]);} // 803D252C
  {uint32_t ea=c->r[26]+c->r[6]; WF32(ea,c->f[0]);} // 803D2530
  c->lr=0x803D2538u; f_803C97E0(c); // 803D2534
  c->r[0]=0u-c->r[22]; // 803D2538
  c->r[6]=c->r[27]|c->r[27]; // 803D253C
  c->r[0]=c->r[0]|c->r[22]; // 803D2540
  c->r[8]=c->r[21]|c->r[21]; // 803D2544
  c->r[0]=sraw(c,c->r[0],31); // 803D2548
  c->r[3]=c->r[1]+0x00000068u; // 803D254C
  c->r[4]=c->r[1]+0x00000060u; // 803D2550
  c->r[5]=0u+0x00000001u; // 803D2554
  c->r[7]=c->r[31]&c->r[0]; // 803D2558
  c->lr=0x803D2560u; f_803C9E24(c); // 803D255C
  c->r[3]=R32(c->r[19]+0x0000001Cu); // 803D2560
  c->r[4]=c->r[23]|c->r[23]; // 803D2564
  c->r[5]=c->r[21]|c->r[21]; // 803D2568
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D256C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D2570
  c->ctr=c->r[12]; // 803D2574
  if (true) { c->lr=0x803D257Cu; dispatch(c,c->ctr); } // 803D2578
  {uint32_t ea=c->r[18]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D257C
  c->r[22]=c->r[3]|c->r[3]; // 803D2580
  {uint32_t ea=c->r[17]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2584
  c->r[3]=c->r[1]+0x00000048u; // 803D2588
  {uint32_t ea=c->r[20]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D258C
  c->r[5]=0u+0x00000000u; // 803D2590
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 803D2594
  {uint32_t ea=c->r[18]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2598
  {uint32_t ea=c->r[20]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D259C
  c->r[16]=R8(c->r[19]+0x00000018u); // 803D25A0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 803D25A4
  c->r[4]=R32(c->r[19]+0x0000001Cu); // 803D25A8
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 803D25AC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 803D25B0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[4]);} // 803D25B4
  {uint32_t ea=c->r[17]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D25B8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 803D25BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803D25C0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 803D25C4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 803D25C8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 803D25CC
  c->lr=0x803D25D4u; f_803CE5C4(c); // 803D25D0
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D25D4
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D25D8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D25DC
  c->r[8]=c->r[1]+0x00000018u; // 803D25E0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803D25E4
  c->r[3]=c->r[22]|c->r[22]; // 803D25E8
  c->r[7]=c->r[24]+c->r[0]; // 803D25EC
  {uint32_t ea=c->r[25]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D25F0
  c->r[6]=R8(c->r[7]+0x00000009u); // 803D25F4
  c->r[4]=0u+0x00000001u; // 803D25F8
  c->r[5]=R8(c->r[7]+0x00000008u); // 803D25FC
  c->r[11]=c->r[7]+c->r[6]; // 803D2600
  {uint32_t ea=c->r[29]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D2604
  c->r[7]=c->r[7]+c->r[5]; // 803D2608
  c->r[10]=R8(c->r[11]+0x00000006u); // 803D260C
  c->r[0]=R8(c->r[7]+0x00000006u); // 803D2610
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803D2614
  W32(c->r[1]+0x000000ACu,c->r[10]); // 803D2618
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D261C
  c->r[7]=R8(c->r[7]+0x00000004u); // 803D2620
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D2624
  c->r[9]=c->r[7]-c->r[0]; // 803D2628
  c->r[7]=R8(c->r[11]+0x00000002u); // 803D262C
  c->r[9]=c->r[9]^0x80000000u; // 803D2630
  W32(c->r[1]+0x000000A4u,c->r[0]); // 803D2634
  c->r[7]=c->r[7]-c->r[10]; // 803D2638
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D263C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 803D2640
  c->r[7]=c->r[7]^0x80000000u; // 803D2644
  W32(c->r[1]+0x000000ACu,c->r[9]); // 803D2648
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 803D264C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D2650
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D2654
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803D2658
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D265C
  W32(c->r[1]+0x000000ACu,c->r[7]); // 803D2660
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2664
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D2668
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D266C
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2670
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2674
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2678
  {uint32_t ea=c->r[28]+c->r[5]; WF32(ea,c->f[7]);} // 803D267C
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D2680
  W32(c->r[1]+0x000000A4u,c->r[0]); // 803D2684
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 803D2688
  {uint32_t ea=c->r[30]+c->r[5]; WF32(ea,c->f[7]);} // 803D268C
  {uint32_t ea=c->r[26]+c->r[6]; WF32(ea,c->f[6]);} // 803D2690
  W32(c->r[1]+0x000000A4u,c->r[10]); // 803D2694
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D2698
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 803D269C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D26A0
  {uint32_t ea=c->r[30]+c->r[6]; WF32(ea,c->f[6]);} // 803D26A4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D26A8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D26AC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D26B0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D26B4
  {uint32_t ea=c->r[26]+c->r[5]; WF32(ea,c->f[1]);} // 803D26B8
  {uint32_t ea=c->r[27]+c->r[5]; WF32(ea,c->f[1]);} // 803D26BC
  {uint32_t ea=c->r[28]+c->r[6]; WF32(ea,c->f[0]);} // 803D26C0
  {uint32_t ea=c->r[27]+c->r[6]; WF32(ea,c->f[0]);} // 803D26C4
  c->lr=0x803D26CCu; f_803C97E0(c); // 803D26C8
  c->r[0]=0u-c->r[22]; // 803D26CC
  c->r[6]=c->r[27]|c->r[27]; // 803D26D0
  c->r[0]=c->r[0]|c->r[22]; // 803D26D4
  c->r[8]=c->r[21]|c->r[21]; // 803D26D8
  c->r[0]=sraw(c,c->r[0],31); // 803D26DC
  c->r[3]=c->r[1]+0x00000068u; // 803D26E0
  c->r[4]=c->r[1]+0x00000060u; // 803D26E4
  c->r[5]=0u+0x00000001u; // 803D26E8
  c->r[7]=c->r[31]&c->r[0]; // 803D26EC
  c->lr=0x803D26F4u; f_803C9E24(c); // 803D26F0
  c->r[3]=R32(c->r[19]+0x00000014u); // 803D26F4
  c->r[4]=c->r[23]|c->r[23]; // 803D26F8
  c->r[5]=c->r[21]|c->r[21]; // 803D26FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D2700
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D2704
  c->ctr=c->r[12]; // 803D2708
  if (true) { c->lr=0x803D2710u; dispatch(c,c->ctr); } // 803D270C
  {uint32_t ea=c->r[18]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2710
  c->r[22]=c->r[3]|c->r[3]; // 803D2714
  {uint32_t ea=c->r[20]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2718
  c->r[3]=c->r[1]+0x00000040u; // 803D271C
  {uint32_t ea=c->r[18]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D2720
  c->r[5]=0u+0x00000000u; // 803D2724
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 803D2728
  {uint32_t ea=c->r[20]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D272C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[3]);} // 803D2730
  c->r[18]=R8(c->r[19]+0x00000010u); // 803D2734
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[2]);} // 803D2738
  c->r[4]=R32(c->r[19]+0x00000014u); // 803D273C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 803D2740
  {uint32_t ea=c->r[17]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2744
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 803D2748
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803D274C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 803D2750
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 803D2754
  c->lr=0x803D275Cu; f_803CE5C4(c); // 803D2758
  c->r[0]=(uint32_t)((int32_t)c->r[18]*(int32_t)10); // 803D275C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2760
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2764
  c->r[5]=c->r[1]+0x00000008u; // 803D2768
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803D276C
  c->r[3]=c->r[22]|c->r[22]; // 803D2770
  c->r[8]=c->r[24]+c->r[0]; // 803D2774
  {uint32_t ea=c->r[25]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D2778
  c->r[9]=R8(c->r[8]+0x00000009u); // 803D277C
  c->r[4]=0u+0x00000001u; // 803D2780
  c->r[10]=R8(c->r[8]+0x00000008u); // 803D2784
  c->r[6]=c->r[8]+c->r[9]; // 803D2788
  c->r[0]=R8(c->r[8]+c->r[9]); // 803D278C
  c->r[7]=R8(c->r[6]+0x00000004u); // 803D2790
  c->r[6]=c->r[8]+c->r[10]; // 803D2794
  c->r[8]=R8(c->r[6]+0x00000004u); // 803D2798
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 803D279C
  W32(c->r[1]+0x000000ACu,c->r[7]); // 803D27A0
  c->r[0]=c->r[0]-c->r[7]; // 803D27A4
  c->r[6]=R8(c->r[6]+0x00000006u); // 803D27A8
  c->r[0]=c->r[0]^0x80000000u; // 803D27AC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D27B0
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 803D27B4
  c->r[6]=c->r[6]-c->r[8]; // 803D27B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D27BC
  c->r[6]=c->r[6]^0x80000000u; // 803D27C0
  {uint32_t ea=c->r[29]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D27C4
  W32(c->r[1]+0x000000ACu,c->r[6]); // 803D27C8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D27CC
  {uint32_t ea=c->r[5]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D27D0
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D27D4
  W32(c->r[1]+0x000000A4u,c->r[8]); // 803D27D8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D27DC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D27E0
  W32(c->r[1]+0x000000ACu,c->r[0]); // 803D27E4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[7]=RF64(ea);} // 803D27E8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D27EC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 803D27F0
  {uint32_t ea=c->r[5]+c->r[9]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D27F4
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 803D27F8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D27FC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2800
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D2804
  W32(c->r[1]+0x000000A4u,c->r[8]); // 803D2808
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[4]=RF64(ea);} // 803D280C
  {uint32_t ea=c->r[27]+c->r[10]; WF32(ea,c->f[7]);} // 803D2810
  {uint32_t ea=c->r[26]+c->r[10]; WF32(ea,c->f[7]);} // 803D2814
  {uint32_t ea=c->r[30]+c->r[9]; WF32(ea,c->f[6]);} // 803D2818
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D281C
  W32(c->r[1]+0x000000A4u,c->r[7]); // 803D2820
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D2824
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=RF64(ea);} // 803D2828
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D282C
  {uint32_t ea=c->r[26]+c->r[9]; WF32(ea,c->f[6]);} // 803D2830
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 803D2834
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[8]); // 803D2838
  {uint32_t ea=c->r[30]+c->r[10]; WF32(ea,c->f[3]);} // 803D283C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D2840
  {uint32_t ea=c->r[28]+c->r[10]; WF32(ea,c->f[3]);} // 803D2844
  {uint32_t ea=c->r[27]+c->r[9]; WF32(ea,c->f[0]);} // 803D2848
  {uint32_t ea=c->r[28]+c->r[9]; WF32(ea,c->f[0]);} // 803D284C
  c->lr=0x803D2854u; f_803C97E0(c); // 803D2850
  c->r[0]=0u-c->r[22]; // 803D2854
  c->r[6]=c->r[27]|c->r[27]; // 803D2858
  c->r[0]=c->r[0]|c->r[22]; // 803D285C
  c->r[8]=c->r[21]|c->r[21]; // 803D2860
  c->r[0]=sraw(c,c->r[0],31); // 803D2864
  c->r[3]=c->r[1]+0x00000068u; // 803D2868
  c->r[4]=c->r[1]+0x00000060u; // 803D286C
  c->r[5]=0u+0x00000001u; // 803D2870
  c->r[7]=c->r[31]&c->r[0]; // 803D2874
  c->lr=0x803D287Cu; f_803C9E24(c); // 803D2878
  c->r[11]=c->r[1]+0x000000F0u; // 803D287C
  c->lr=0x803D2884u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D2880
  c->r[0]=R32(c->r[1]+0x000000F4u); // 803D2884
  c->lr=c->r[0]; // 803D2888
  c->r[1]=c->r[1]+0x000000F0u; // 803D288C
  return; // 803D2890
}

// DrawFrame8__Q36nw4hbm3lyt6WindowFRCQ36nw4hbm4math4VEC2PCQ46nw4hbm3lyt6Window5FrameRCQ36nw4hbm3lyt15WindowFrameSizeUc
void f_803D2894(Ctx* __restrict c) {
  trace_call(0x803D2894u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D2894
  c->r[0]=c->lr; // 803D2898
  W32(c->r[1]+0x00000194u,c->r[0]); // 803D289C
  c->r[11]=c->r[1]+0x00000190u; // 803D28A0
  c->lr=0x803D28A8u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D28A4
  c->r[8]=0u+0x803F0000u; // 803D28A8
  c->r[0]=0u+0xFFFFFFFFu; // 803D28AC
  {uint32_t ea=c->r[8]+0x00000EC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D28B0
  c->r[8]=0u+0x43300000u; // 803D28B4
  c->r[27]=c->r[3]|c->r[3]; // 803D28B8
  c->r[31]=c->r[7]|c->r[7]; // 803D28BC
  W32(c->r[1]+0x00000138u,c->r[8]); // 803D28C0
  c->r[28]=c->r[4]|c->r[4]; // 803D28C4
  c->r[29]=c->r[5]|c->r[5]; // 803D28C8
  c->r[30]=c->r[6]|c->r[6]; // 803D28CC
  W32(c->r[1]+0x00000140u,c->r[8]); // 803D28D0
  c->r[4]=c->r[31]|c->r[31]; // 803D28D4
  c->r[3]=0u+0x00000000u; // 803D28D8
  W32(c->r[1]+0x00000108u,c->r[0]); // 803D28DC
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 803D28E0
  W32(c->r[1]+0x00000110u,c->r[0]); // 803D28E4
  W32(c->r[1]+0x00000114u,c->r[0]); // 803D28E8
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 803D28EC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 803D28F0
  c->lr=0x803D28F8u; f_803C9724(c); // 803D28F4
  c->r[18]=c->r[3]|c->r[3]; // 803D28F8
  c->r[3]=R32(c->r[29]+0x00000004u); // 803D28FC
  c->r[4]=c->r[18]|c->r[18]; // 803D2900
  c->r[5]=c->r[31]|c->r[31]; // 803D2904
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D2908
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D290C
  c->ctr=c->r[12]; // 803D2910
  if (true) { c->lr=0x803D2918u; dispatch(c,c->ctr); } // 803D2914
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2918
  c->r[17]=c->r[3]|c->r[3]; // 803D291C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2920
  c->r[3]=c->r[1]+0x000000F0u; // 803D2924
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[1]);} // 803D2928
  c->r[5]=0u+0x00000000u; // 803D292C
  c->r[16]=R8(c->r[29]+0x00000000u); // 803D2930
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 803D2934
  c->r[4]=R32(c->r[29]+0x00000004u); // 803D2938
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 803D293C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 803D2940
  c->lr=0x803D2948u; f_803CE5C4(c); // 803D2944
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D2948
  c->r[19]=0u+0x80440000u; // 803D294C
  c->r[20]=0u+0x803F0000u; // 803D2950
  {uint32_t ea=c->r[1]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D2954
  c->r[19]=c->r[19]+0xFFFF9208u; // 803D2958
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D295C
  c->r[4]=c->r[19]+c->r[0]; // 803D2960
  c->r[24]=0u+0x803F0000u; // 803D2964
  c->r[0]=R8(c->r[4]+0x00000009u); // 803D2968
  c->r[5]=c->r[1]+0x00000040u; // 803D296C
  c->r[3]=R8(c->r[4]+0x00000008u); // 803D2970
  c->r[21]=c->r[1]+0x00000128u; // 803D2974
  c->r[6]=R8(c->r[4]+c->r[0]); // 803D2978
  c->r[10]=c->r[4]+c->r[0]; // 803D297C
  {uint32_t ea=c->r[4]+c->r[3]; c->r[7]=R8(ea); c->r[4]=ea;} // 803D2980
  c->r[9]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D2984
  W32(c->r[1]+0x00000144u,c->r[6]); // 803D2988
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803D298C
  c->r[0]=R8(c->r[4]+0x00000002u); // 803D2990
  c->r[22]=c->r[1]+0x00000118u; // 803D2994
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2998
  c->r[23]=c->r[1]+0x00000120u; // 803D299C
  c->r[3]=c->r[0]-c->r[7]; // 803D29A0
  c->r[0]=R8(c->r[10]+0x00000004u); // 803D29A4
  c->r[3]=c->r[3]^0x80000000u; // 803D29A8
  {uint32_t ea=c->r[20]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D29AC
  W32(c->r[1]+0x00000144u,c->r[3]); // 803D29B0
  c->r[0]=c->r[0]-c->r[6]; // 803D29B4
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D29B8
  {uint32_t ea=c->r[24]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D29BC
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 803D29C0
  c->r[0]=c->r[0]^0x80000000u; // 803D29C4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D29C8
  c->r[25]=c->r[1]+0x00000130u; // 803D29CC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[1]=RF64(ea);} // 803D29D0
  c->r[3]=c->r[17]|c->r[17]; // 803D29D4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 803D29D8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D29DC
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[8]); // 803D29E0
  c->r[4]=0u+0x00000001u; // 803D29E4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 803D29E8
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D29EC
  W32(c->r[1]+0x00000144u,c->r[0]); // 803D29F0
  {uint32_t ea=c->r[5]+c->r[8]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D29F4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D29F8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D29FC
  {uint32_t ea=c->r[5]+c->r[9]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2A00
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2A04
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2A08
  {uint32_t ea=c->r[21]+c->r[8]; WF32(ea,c->f[7]);} // 803D2A0C
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D2A10
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 803D2A14
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 803D2A18
  {uint32_t ea=c->r[22]+c->r[8]; WF32(ea,c->f[7]);} // 803D2A1C
  W32(c->r[1]+0x0000013Cu,c->r[6]); // 803D2A20
  {uint32_t ea=c->r[23]+c->r[9]; WF32(ea,c->f[6]);} // 803D2A24
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D2A28
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D2A2C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D2A30
  {uint32_t ea=c->r[22]+c->r[9]; WF32(ea,c->f[6]);} // 803D2A34
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D2A38
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D2A3C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D2A40
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D2A44
  {uint32_t ea=c->r[23]+c->r[8]; WF32(ea,c->f[1]);} // 803D2A48
  {uint32_t ea=c->r[25]+c->r[8]; WF32(ea,c->f[1]);} // 803D2A4C
  {uint32_t ea=c->r[21]+c->r[9]; WF32(ea,c->f[0]);} // 803D2A50
  {uint32_t ea=c->r[25]+c->r[9]; WF32(ea,c->f[0]);} // 803D2A54
  c->lr=0x803D2A5Cu; f_803C97E0(c); // 803D2A58
  c->r[0]=0u-c->r[17]; // 803D2A5C
  c->r[26]=c->r[1]+0x00000108u; // 803D2A60
  c->r[0]=c->r[0]|c->r[17]; // 803D2A64
  c->r[3]=c->r[28]|c->r[28]; // 803D2A68
  c->r[0]=sraw(c,c->r[0],31); // 803D2A6C
  c->r[6]=c->r[22]|c->r[22]; // 803D2A70
  c->r[8]=c->r[31]|c->r[31]; // 803D2A74
  c->r[4]=c->r[1]+0x00000100u; // 803D2A78
  c->r[7]=c->r[26]&c->r[0]; // 803D2A7C
  c->r[5]=0u+0x00000001u; // 803D2A80
  c->lr=0x803D2A88u; f_803C9E24(c); // 803D2A84
  c->r[3]=R32(c->r[29]+0x00000034u); // 803D2A88
  c->r[4]=c->r[18]|c->r[18]; // 803D2A8C
  c->r[5]=c->r[31]|c->r[31]; // 803D2A90
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D2A94
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D2A98
  c->ctr=c->r[12]; // 803D2A9C
  if (true) { c->lr=0x803D2AA4u; dispatch(c,c->ctr); } // 803D2AA0
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2AA4
  c->r[17]=c->r[3]|c->r[3]; // 803D2AA8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2AAC
  c->r[3]=c->r[1]+0x000000E0u; // 803D2AB0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D2AB4
  c->r[5]=0u+0x00000000u; // 803D2AB8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803D2ABC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2AC0
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[2]);} // 803D2AC4
  c->r[16]=R8(c->r[29]+0x00000030u); // 803D2AC8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D2ACC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 803D2AD0
  c->r[4]=R32(c->r[29]+0x00000034u); // 803D2AD4
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 803D2AD8
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 803D2ADC
  c->lr=0x803D2AE4u; f_803CE5C4(c); // 803D2AE0
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D2AE4
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2AE8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2AEC
  c->r[9]=c->r[1]+0x00000038u; // 803D2AF0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 803D2AF4
  c->r[3]=c->r[17]|c->r[17]; // 803D2AF8
  c->r[5]=c->r[19]+c->r[0]; // 803D2AFC
  {uint32_t ea=c->r[20]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D2B00
  c->r[7]=R8(c->r[5]+0x00000009u); // 803D2B04
  c->r[4]=0u+0x00000001u; // 803D2B08
  c->r[6]=R8(c->r[5]+0x00000008u); // 803D2B0C
  c->r[0]=R8(c->r[5]+c->r[7]); // 803D2B10
  c->r[8]=c->r[5]+c->r[7]; // 803D2B14
  c->r[10]=c->r[5]+c->r[6]; // 803D2B18
  c->r[5]=R8(c->r[5]+c->r[6]); // 803D2B1C
  W32(c->r[1]+0x00000144u,c->r[0]); // 803D2B20
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D2B24
  c->r[10]=R8(c->r[10]+0x00000002u); // 803D2B28
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 803D2B2C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2B30
  c->r[10]=c->r[10]-c->r[5]; // 803D2B34
  c->r[8]=R8(c->r[8]+0x00000004u); // 803D2B38
  c->r[10]=c->r[10]^0x80000000u; // 803D2B3C
  W32(c->r[1]+0x0000013Cu,c->r[5]); // 803D2B40
  c->r[8]=c->r[8]-c->r[0]; // 803D2B44
  {uint32_t ea=c->r[24]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D2B48
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D2B4C
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D2B50
  W32(c->r[1]+0x00000144u,c->r[10]); // 803D2B54
  c->r[8]=c->r[8]^0x80000000u; // 803D2B58
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 803D2B5C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D2B60
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2B64
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 803D2B68
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2B6C
  W32(c->r[1]+0x00000144u,c->r[8]); // 803D2B70
  {uint32_t ea=c->r[9]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2B74
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2B78
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D2B7C
  {uint32_t ea=c->r[9]+c->r[7]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2B80
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2B84
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2B88
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[7]);} // 803D2B8C
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D2B90
  W32(c->r[1]+0x0000013Cu,c->r[5]); // 803D2B94
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 803D2B98
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[7]);} // 803D2B9C
  {uint32_t ea=c->r[23]+c->r[7]; WF32(ea,c->f[6]);} // 803D2BA0
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D2BA4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D2BA8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D2BAC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D2BB0
  {uint32_t ea=c->r[22]+c->r[7]; WF32(ea,c->f[6]);} // 803D2BB4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D2BB8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D2BBC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D2BC0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D2BC4
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[1]);} // 803D2BC8
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[1]);} // 803D2BCC
  {uint32_t ea=c->r[21]+c->r[7]; WF32(ea,c->f[0]);} // 803D2BD0
  {uint32_t ea=c->r[25]+c->r[7]; WF32(ea,c->f[0]);} // 803D2BD4
  c->lr=0x803D2BDCu; f_803C97E0(c); // 803D2BD8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2BDC
  c->r[0]=0u-c->r[17]; // 803D2BE0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2BE4
  c->r[0]=c->r[0]|c->r[17]; // 803D2BE8
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D2BEC
  c->r[0]=sraw(c,c->r[0],31); // 803D2BF0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D2BF4
  c->r[6]=c->r[22]|c->r[22]; // 803D2BF8
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[2]);} // 803D2BFC
  c->r[8]=c->r[31]|c->r[31]; // 803D2C00
  c->r[7]=c->r[26]&c->r[0]; // 803D2C04
  c->r[3]=c->r[1]+0x000000D8u; // 803D2C08
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 803D2C0C
  c->r[4]=c->r[1]+0x00000100u; // 803D2C10
  c->r[5]=0u+0x00000001u; // 803D2C14
  c->lr=0x803D2C1Cu; f_803C9E24(c); // 803D2C18
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 803D2C1C
  c->r[4]=c->r[18]|c->r[18]; // 803D2C20
  c->r[5]=c->r[31]|c->r[31]; // 803D2C24
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D2C28
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D2C2C
  c->ctr=c->r[12]; // 803D2C30
  if (true) { c->lr=0x803D2C38u; dispatch(c,c->ctr); } // 803D2C34
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2C38
  c->r[17]=c->r[3]|c->r[3]; // 803D2C3C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2C40
  c->r[3]=c->r[1]+0x000000C8u; // 803D2C44
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 803D2C48
  c->r[5]=0u+0x00000000u; // 803D2C4C
  c->r[16]=R8(c->r[29]+0x00000008u); // 803D2C50
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 803D2C54
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 803D2C58
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 803D2C5C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 803D2C60
  c->lr=0x803D2C68u; f_803CE5C4(c); // 803D2C64
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D2C68
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2C6C
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2C70
  c->r[8]=c->r[1]+0x00000030u; // 803D2C74
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 803D2C78
  c->r[3]=c->r[17]|c->r[17]; // 803D2C7C
  c->r[9]=c->r[19]+c->r[0]; // 803D2C80
  {uint32_t ea=c->r[20]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D2C84
  c->r[6]=R8(c->r[9]+0x00000009u); // 803D2C88
  c->r[4]=0u+0x00000001u; // 803D2C8C
  c->r[7]=R8(c->r[9]+0x00000008u); // 803D2C90
  c->r[11]=c->r[9]+c->r[6]; // 803D2C94
  {uint32_t ea=c->r[24]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D2C98
  c->r[10]=R8(c->r[11]+0x00000002u); // 803D2C9C
  c->r[5]=c->r[9]+c->r[7]; // 803D2CA0
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D2CA4
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 803D2CA8
  W32(c->r[1]+0x00000144u,c->r[10]); // 803D2CAC
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D2CB0
  c->r[7]=R8(c->r[9]+c->r[7]); // 803D2CB4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2CB8
  c->r[9]=c->r[7]-c->r[0]; // 803D2CBC
  c->r[7]=R8(c->r[11]+0x00000006u); // 803D2CC0
  c->r[9]=c->r[9]^0x80000000u; // 803D2CC4
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D2CC8
  c->r[7]=c->r[7]-c->r[10]; // 803D2CCC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D2CD0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D2CD4
  c->r[7]=c->r[7]^0x80000000u; // 803D2CD8
  W32(c->r[1]+0x00000144u,c->r[9]); // 803D2CDC
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 803D2CE0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D2CE4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2CE8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 803D2CEC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2CF0
  W32(c->r[1]+0x00000144u,c->r[7]); // 803D2CF4
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2CF8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2CFC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D2D00
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2D04
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2D08
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2D0C
  {uint32_t ea=c->r[25]+c->r[5]; WF32(ea,c->f[7]);} // 803D2D10
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D2D14
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D2D18
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 803D2D1C
  {uint32_t ea=c->r[23]+c->r[5]; WF32(ea,c->f[7]);} // 803D2D20
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[6]);} // 803D2D24
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 803D2D28
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D2D2C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D2D30
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D2D34
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[6]);} // 803D2D38
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D2D3C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D2D40
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D2D44
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D2D48
  {uint32_t ea=c->r[22]+c->r[5]; WF32(ea,c->f[1]);} // 803D2D4C
  {uint32_t ea=c->r[21]+c->r[5]; WF32(ea,c->f[1]);} // 803D2D50
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[0]);} // 803D2D54
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[0]);} // 803D2D58
  c->lr=0x803D2D60u; f_803C97E0(c); // 803D2D5C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2D60
  c->r[0]=0u-c->r[17]; // 803D2D64
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2D68
  c->r[0]=c->r[0]|c->r[17]; // 803D2D6C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D2D70
  c->r[0]=sraw(c,c->r[0],31); // 803D2D74
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803D2D78
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2D7C
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[2]);} // 803D2D80
  c->r[6]=c->r[22]|c->r[22]; // 803D2D84
  c->r[8]=c->r[31]|c->r[31]; // 803D2D88
  c->r[7]=c->r[26]&c->r[0]; // 803D2D8C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D2D90
  c->r[3]=c->r[1]+0x000000C0u; // 803D2D94
  c->r[4]=c->r[1]+0x00000100u; // 803D2D98
  c->r[5]=0u+0x00000001u; // 803D2D9C
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 803D2DA0
  c->lr=0x803D2DA8u; f_803C9E24(c); // 803D2DA4
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 803D2DA8
  c->r[4]=c->r[18]|c->r[18]; // 803D2DAC
  c->r[5]=c->r[31]|c->r[31]; // 803D2DB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D2DB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D2DB8
  c->ctr=c->r[12]; // 803D2DBC
  if (true) { c->lr=0x803D2DC4u; dispatch(c,c->ctr); } // 803D2DC0
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2DC4
  c->r[17]=c->r[3]|c->r[3]; // 803D2DC8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2DCC
  c->r[3]=c->r[1]+0x000000B0u; // 803D2DD0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D2DD4
  c->r[5]=0u+0x00000000u; // 803D2DD8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803D2DDC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2DE0
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[2]);} // 803D2DE4
  c->r[16]=R8(c->r[29]+0x00000028u); // 803D2DE8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D2DEC
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 803D2DF0
  c->r[4]=R32(c->r[29]+0x0000002Cu); // 803D2DF4
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 803D2DF8
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 803D2DFC
  c->lr=0x803D2E04u; f_803CE5C4(c); // 803D2E00
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D2E04
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2E08
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2E0C
  c->r[8]=c->r[1]+0x00000028u; // 803D2E10
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803D2E14
  c->r[3]=c->r[17]|c->r[17]; // 803D2E18
  c->r[9]=c->r[19]+c->r[0]; // 803D2E1C
  {uint32_t ea=c->r[20]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D2E20
  c->r[6]=R8(c->r[9]+0x00000009u); // 803D2E24
  c->r[4]=0u+0x00000001u; // 803D2E28
  c->r[7]=R8(c->r[9]+0x00000008u); // 803D2E2C
  c->r[11]=c->r[9]+c->r[6]; // 803D2E30
  {uint32_t ea=c->r[24]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D2E34
  c->r[10]=R8(c->r[11]+0x00000002u); // 803D2E38
  c->r[5]=c->r[9]+c->r[7]; // 803D2E3C
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D2E40
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 803D2E44
  W32(c->r[1]+0x00000144u,c->r[10]); // 803D2E48
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D2E4C
  c->r[7]=R8(c->r[9]+c->r[7]); // 803D2E50
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2E54
  c->r[9]=c->r[7]-c->r[0]; // 803D2E58
  c->r[7]=R8(c->r[11]+0x00000006u); // 803D2E5C
  c->r[9]=c->r[9]^0x80000000u; // 803D2E60
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D2E64
  c->r[7]=c->r[7]-c->r[10]; // 803D2E68
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D2E6C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D2E70
  c->r[7]=c->r[7]^0x80000000u; // 803D2E74
  W32(c->r[1]+0x00000144u,c->r[9]); // 803D2E78
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 803D2E7C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D2E80
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2E84
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 803D2E88
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2E8C
  W32(c->r[1]+0x00000144u,c->r[7]); // 803D2E90
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2E94
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2E98
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D2E9C
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2EA0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D2EA4
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2EA8
  {uint32_t ea=c->r[25]+c->r[5]; WF32(ea,c->f[7]);} // 803D2EAC
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D2EB0
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D2EB4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 803D2EB8
  {uint32_t ea=c->r[23]+c->r[5]; WF32(ea,c->f[7]);} // 803D2EBC
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[6]);} // 803D2EC0
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 803D2EC4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D2EC8
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D2ECC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D2ED0
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[6]);} // 803D2ED4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D2ED8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D2EDC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D2EE0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D2EE4
  {uint32_t ea=c->r[22]+c->r[5]; WF32(ea,c->f[1]);} // 803D2EE8
  {uint32_t ea=c->r[21]+c->r[5]; WF32(ea,c->f[1]);} // 803D2EEC
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[0]);} // 803D2EF0
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[0]);} // 803D2EF4
  c->lr=0x803D2EFCu; f_803C97E0(c); // 803D2EF8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2EFC
  c->r[0]=0u-c->r[17]; // 803D2F00
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2F04
  c->r[0]=c->r[0]|c->r[17]; // 803D2F08
  c->r[0]=sraw(c,c->r[0],31); // 803D2F0C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D2F10
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803D2F14
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D2F18
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2F1C
  c->r[6]=c->r[22]|c->r[22]; // 803D2F20
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 803D2F24
  c->r[8]=c->r[31]|c->r[31]; // 803D2F28
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D2F2C
  c->r[7]=c->r[26]&c->r[0]; // 803D2F30
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 803D2F34
  c->r[3]=c->r[1]+0x000000A8u; // 803D2F38
  c->r[4]=c->r[1]+0x00000100u; // 803D2F3C
  c->r[5]=0u+0x00000001u; // 803D2F40
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 803D2F44
  c->lr=0x803D2F4Cu; f_803C9E24(c); // 803D2F48
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 803D2F4C
  c->r[4]=c->r[18]|c->r[18]; // 803D2F50
  c->r[5]=c->r[31]|c->r[31]; // 803D2F54
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D2F58
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D2F5C
  c->ctr=c->r[12]; // 803D2F60
  if (true) { c->lr=0x803D2F68u; dispatch(c,c->ctr); } // 803D2F64
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2F68
  c->r[17]=c->r[3]|c->r[3]; // 803D2F6C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2F70
  c->r[3]=c->r[1]+0x00000098u; // 803D2F74
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[1]);} // 803D2F78
  c->r[5]=0u+0x00000000u; // 803D2F7C
  c->r[16]=R8(c->r[29]+0x00000018u); // 803D2F80
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 803D2F84
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 803D2F88
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 803D2F8C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 803D2F90
  c->lr=0x803D2F98u; f_803CE5C4(c); // 803D2F94
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D2F98
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D2F9C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D2FA0
  c->r[8]=c->r[1]+0x00000020u; // 803D2FA4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803D2FA8
  c->r[3]=c->r[17]|c->r[17]; // 803D2FAC
  c->r[7]=c->r[19]+c->r[0]; // 803D2FB0
  {uint32_t ea=c->r[20]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D2FB4
  c->r[6]=R8(c->r[7]+0x00000009u); // 803D2FB8
  c->r[4]=0u+0x00000001u; // 803D2FBC
  c->r[5]=R8(c->r[7]+0x00000008u); // 803D2FC0
  c->r[11]=c->r[7]+c->r[6]; // 803D2FC4
  {uint32_t ea=c->r[24]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D2FC8
  c->r[7]=c->r[7]+c->r[5]; // 803D2FCC
  c->r[10]=R8(c->r[11]+0x00000006u); // 803D2FD0
  c->r[0]=R8(c->r[7]+0x00000006u); // 803D2FD4
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803D2FD8
  W32(c->r[1]+0x00000144u,c->r[10]); // 803D2FDC
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D2FE0
  c->r[7]=R8(c->r[7]+0x00000004u); // 803D2FE4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D2FE8
  c->r[9]=c->r[7]-c->r[0]; // 803D2FEC
  c->r[7]=R8(c->r[11]+0x00000002u); // 803D2FF0
  c->r[9]=c->r[9]^0x80000000u; // 803D2FF4
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D2FF8
  c->r[7]=c->r[7]-c->r[10]; // 803D2FFC
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D3000
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D3004
  c->r[7]=c->r[7]^0x80000000u; // 803D3008
  W32(c->r[1]+0x00000144u,c->r[9]); // 803D300C
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 803D3010
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D3014
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D3018
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803D301C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D3020
  W32(c->r[1]+0x00000144u,c->r[7]); // 803D3024
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3028
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D302C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D3030
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3034
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D3038
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D303C
  {uint32_t ea=c->r[23]+c->r[5]; WF32(ea,c->f[7]);} // 803D3040
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D3044
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D3048
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 803D304C
  {uint32_t ea=c->r[25]+c->r[5]; WF32(ea,c->f[7]);} // 803D3050
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[6]);} // 803D3054
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 803D3058
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D305C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D3060
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D3064
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[6]);} // 803D3068
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D306C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D3070
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D3074
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D3078
  {uint32_t ea=c->r[21]+c->r[5]; WF32(ea,c->f[1]);} // 803D307C
  {uint32_t ea=c->r[22]+c->r[5]; WF32(ea,c->f[1]);} // 803D3080
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[0]);} // 803D3084
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[0]);} // 803D3088
  c->lr=0x803D3090u; f_803C97E0(c); // 803D308C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D3090
  c->r[0]=0u-c->r[17]; // 803D3094
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D3098
  c->r[0]=c->r[0]|c->r[17]; // 803D309C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D30A0
  c->r[0]=sraw(c,c->r[0],31); // 803D30A4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D30A8
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 803D30AC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D30B0
  c->r[6]=c->r[22]|c->r[22]; // 803D30B4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803D30B8
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D30BC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 803D30C0
  c->r[8]=c->r[31]|c->r[31]; // 803D30C4
  c->r[7]=c->r[26]&c->r[0]; // 803D30C8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D30CC
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 803D30D0
  c->r[3]=c->r[1]+0x00000090u; // 803D30D4
  c->r[4]=c->r[1]+0x00000100u; // 803D30D8
  c->r[5]=0u+0x00000001u; // 803D30DC
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 803D30E0
  c->lr=0x803D30E8u; f_803C9E24(c); // 803D30E4
  c->r[3]=R32(c->r[29]+0x0000003Cu); // 803D30E8
  c->r[4]=c->r[18]|c->r[18]; // 803D30EC
  c->r[5]=c->r[31]|c->r[31]; // 803D30F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D30F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D30F8
  c->ctr=c->r[12]; // 803D30FC
  if (true) { c->lr=0x803D3104u; dispatch(c,c->ctr); } // 803D3100
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3104
  c->r[17]=c->r[3]|c->r[3]; // 803D3108
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D310C
  c->r[3]=c->r[1]+0x00000080u; // 803D3110
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D3114
  c->r[5]=0u+0x00000000u; // 803D3118
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803D311C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3120
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 803D3124
  c->r[16]=R8(c->r[29]+0x00000038u); // 803D3128
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D312C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[2]);} // 803D3130
  c->r[4]=R32(c->r[29]+0x0000003Cu); // 803D3134
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 803D3138
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 803D313C
  c->lr=0x803D3144u; f_803CE5C4(c); // 803D3140
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D3144
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3148
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D314C
  c->r[8]=c->r[1]+0x00000018u; // 803D3150
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803D3154
  c->r[3]=c->r[17]|c->r[17]; // 803D3158
  c->r[7]=c->r[19]+c->r[0]; // 803D315C
  {uint32_t ea=c->r[20]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D3160
  c->r[6]=R8(c->r[7]+0x00000009u); // 803D3164
  c->r[4]=0u+0x00000001u; // 803D3168
  c->r[5]=R8(c->r[7]+0x00000008u); // 803D316C
  c->r[11]=c->r[7]+c->r[6]; // 803D3170
  {uint32_t ea=c->r[24]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D3174
  c->r[7]=c->r[7]+c->r[5]; // 803D3178
  c->r[10]=R8(c->r[11]+0x00000006u); // 803D317C
  c->r[0]=R8(c->r[7]+0x00000006u); // 803D3180
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803D3184
  W32(c->r[1]+0x00000144u,c->r[10]); // 803D3188
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803D318C
  c->r[7]=R8(c->r[7]+0x00000004u); // 803D3190
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D3194
  c->r[9]=c->r[7]-c->r[0]; // 803D3198
  c->r[7]=R8(c->r[11]+0x00000002u); // 803D319C
  c->r[9]=c->r[9]^0x80000000u; // 803D31A0
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D31A4
  c->r[7]=c->r[7]-c->r[10]; // 803D31A8
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D31AC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D31B0
  c->r[7]=c->r[7]^0x80000000u; // 803D31B4
  W32(c->r[1]+0x00000144u,c->r[9]); // 803D31B8
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[8]); // 803D31BC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D31C0
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D31C4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803D31C8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D31CC
  W32(c->r[1]+0x00000144u,c->r[7]); // 803D31D0
  {uint32_t ea=c->r[8]+c->r[5]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D31D4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D31D8
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D31DC
  {uint32_t ea=c->r[8]+c->r[6]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D31E0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D31E4
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D31E8
  {uint32_t ea=c->r[23]+c->r[5]; WF32(ea,c->f[7]);} // 803D31EC
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D31F0
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 803D31F4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 803D31F8
  {uint32_t ea=c->r[25]+c->r[5]; WF32(ea,c->f[7]);} // 803D31FC
  {uint32_t ea=c->r[21]+c->r[6]; WF32(ea,c->f[6]);} // 803D3200
  W32(c->r[1]+0x0000013Cu,c->r[10]); // 803D3204
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D3208
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D320C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D3210
  {uint32_t ea=c->r[25]+c->r[6]; WF32(ea,c->f[6]);} // 803D3214
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 803D3218
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D321C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 803D3220
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803D3224
  {uint32_t ea=c->r[21]+c->r[5]; WF32(ea,c->f[1]);} // 803D3228
  {uint32_t ea=c->r[22]+c->r[5]; WF32(ea,c->f[1]);} // 803D322C
  {uint32_t ea=c->r[23]+c->r[6]; WF32(ea,c->f[0]);} // 803D3230
  {uint32_t ea=c->r[22]+c->r[6]; WF32(ea,c->f[0]);} // 803D3234
  c->lr=0x803D323Cu; f_803C97E0(c); // 803D3238
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D323C
  c->r[0]=0u-c->r[17]; // 803D3240
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3244
  c->r[0]=c->r[0]|c->r[17]; // 803D3248
  c->r[0]=sraw(c,c->r[0],31); // 803D324C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D3250
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 803D3254
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3258
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D325C
  c->r[6]=c->r[22]|c->r[22]; // 803D3260
  c->r[8]=c->r[31]|c->r[31]; // 803D3264
  c->r[7]=c->r[26]&c->r[0]; // 803D3268
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 803D326C
  c->r[3]=c->r[1]+0x00000078u; // 803D3270
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D3274
  c->r[4]=c->r[1]+0x00000100u; // 803D3278
  c->r[5]=0u+0x00000001u; // 803D327C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 803D3280
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 803D3284
  c->lr=0x803D328Cu; f_803C9E24(c); // 803D3288
  c->r[3]=R32(c->r[29]+0x00000014u); // 803D328C
  c->r[4]=c->r[18]|c->r[18]; // 803D3290
  c->r[5]=c->r[31]|c->r[31]; // 803D3294
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D3298
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D329C
  c->ctr=c->r[12]; // 803D32A0
  if (true) { c->lr=0x803D32A8u; dispatch(c,c->ctr); } // 803D32A4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D32A8
  c->r[17]=c->r[3]|c->r[3]; // 803D32AC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D32B0
  c->r[3]=c->r[1]+0x00000068u; // 803D32B4
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 803D32B8
  c->r[5]=0u+0x00000000u; // 803D32BC
  c->r[16]=R8(c->r[29]+0x00000010u); // 803D32C0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 803D32C4
  c->r[4]=R32(c->r[29]+0x00000014u); // 803D32C8
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 803D32CC
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 803D32D0
  c->lr=0x803D32D8u; f_803CE5C4(c); // 803D32D4
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)10); // 803D32D8
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D32DC
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D32E0
  c->r[6]=c->r[1]+0x00000010u; // 803D32E4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803D32E8
  c->r[3]=c->r[17]|c->r[17]; // 803D32EC
  c->r[9]=c->r[19]+c->r[0]; // 803D32F0
  {uint32_t ea=c->r[20]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D32F4
  c->r[10]=R8(c->r[9]+0x00000009u); // 803D32F8
  c->r[4]=0u+0x00000001u; // 803D32FC
  c->r[0]=R8(c->r[9]+0x00000008u); // 803D3300
  c->r[7]=c->r[9]+c->r[10]; // 803D3304
  c->r[5]=R8(c->r[9]+c->r[10]); // 803D3308
  c->r[8]=R8(c->r[7]+0x00000004u); // 803D330C
  c->r[7]=c->r[9]+c->r[0]; // 803D3310
  c->r[9]=R8(c->r[7]+0x00000004u); // 803D3314
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D3318
  W32(c->r[1]+0x00000144u,c->r[8]); // 803D331C
  c->r[5]=c->r[5]-c->r[8]; // 803D3320
  c->r[7]=R8(c->r[7]+0x00000006u); // 803D3324
  c->r[5]=c->r[5]^0x80000000u; // 803D3328
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D332C
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 803D3330
  c->r[7]=c->r[7]-c->r[9]; // 803D3334
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803D3338
  c->r[7]=c->r[7]^0x80000000u; // 803D333C
  {uint32_t ea=c->r[24]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D3340
  W32(c->r[1]+0x00000144u,c->r[7]); // 803D3344
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D3348
  {uint32_t ea=c->r[6]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D334C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D3350
  W32(c->r[1]+0x0000013Cu,c->r[9]); // 803D3354
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D3358
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D335C
  W32(c->r[1]+0x00000144u,c->r[5]); // 803D3360
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 803D3364
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D3368
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D336C
  {uint32_t ea=c->r[6]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3370
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 803D3374
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D3378
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D337C
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D3380
  W32(c->r[1]+0x0000013Cu,c->r[9]); // 803D3384
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 803D3388
  {uint32_t ea=c->r[22]+c->r[0]; WF32(ea,c->f[7]);} // 803D338C
  {uint32_t ea=c->r[21]+c->r[0]; WF32(ea,c->f[7]);} // 803D3390
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[6]);} // 803D3394
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D3398
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 803D339C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D33A0
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D33A4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D33A8
  {uint32_t ea=c->r[21]+c->r[10]; WF32(ea,c->f[6]);} // 803D33AC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 803D33B0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[8]); // 803D33B4
  {uint32_t ea=c->r[25]+c->r[0]; WF32(ea,c->f[3]);} // 803D33B8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D33BC
  {uint32_t ea=c->r[23]+c->r[0]; WF32(ea,c->f[3]);} // 803D33C0
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[0]);} // 803D33C4
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[0]);} // 803D33C8
  c->lr=0x803D33D0u; f_803C97E0(c); // 803D33CC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D33D0
  c->r[0]=0u-c->r[17]; // 803D33D4
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D33D8
  c->r[0]=c->r[0]|c->r[17]; // 803D33DC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D33E0
  c->r[0]=sraw(c,c->r[0],31); // 803D33E4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803D33E8
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D33EC
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[2]);} // 803D33F0
  c->r[6]=c->r[22]|c->r[22]; // 803D33F4
  c->r[8]=c->r[31]|c->r[31]; // 803D33F8
  c->r[7]=c->r[26]&c->r[0]; // 803D33FC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D3400
  c->r[3]=c->r[1]+0x00000060u; // 803D3404
  c->r[4]=c->r[1]+0x00000100u; // 803D3408
  c->r[5]=0u+0x00000001u; // 803D340C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 803D3410
  c->lr=0x803D3418u; f_803C9E24(c); // 803D3414
  c->r[3]=R32(c->r[29]+0x00000024u); // 803D3418
  c->r[4]=c->r[18]|c->r[18]; // 803D341C
  c->r[5]=c->r[31]|c->r[31]; // 803D3420
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D3424
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D3428
  c->ctr=c->r[12]; // 803D342C
  if (true) { c->lr=0x803D3434u; dispatch(c,c->ctr); } // 803D3430
  {uint32_t ea=c->r[27]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3434
  c->r[17]=c->r[3]|c->r[3]; // 803D3438
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D343C
  c->r[3]=c->r[1]+0x00000050u; // 803D3440
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D3444
  c->r[5]=0u+0x00000000u; // 803D3448
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803D344C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3450
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 803D3454
  c->r[18]=R8(c->r[29]+0x00000020u); // 803D3458
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D345C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[2]);} // 803D3460
  c->r[4]=R32(c->r[29]+0x00000024u); // 803D3464
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 803D3468
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 803D346C
  c->lr=0x803D3474u; f_803CE5C4(c); // 803D3470
  c->r[0]=(uint32_t)((int32_t)c->r[18]*(int32_t)10); // 803D3474
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3478
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D347C
  c->r[5]=c->r[1]+0x00000008u; // 803D3480
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803D3484
  c->r[3]=c->r[17]|c->r[17]; // 803D3488
  c->r[8]=c->r[19]+c->r[0]; // 803D348C
  {uint32_t ea=c->r[20]+0x00000EC8u; c->f[8]=RF64(ea);} // 803D3490
  c->r[9]=R8(c->r[8]+0x00000009u); // 803D3494
  c->r[4]=0u+0x00000001u; // 803D3498
  c->r[10]=R8(c->r[8]+0x00000008u); // 803D349C
  c->r[6]=c->r[8]+c->r[9]; // 803D34A0
  c->r[0]=R8(c->r[8]+c->r[9]); // 803D34A4
  c->r[7]=R8(c->r[6]+0x00000004u); // 803D34A8
  c->r[6]=c->r[8]+c->r[10]; // 803D34AC
  c->r[8]=R8(c->r[6]+0x00000004u); // 803D34B0
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 803D34B4
  W32(c->r[1]+0x00000144u,c->r[7]); // 803D34B8
  c->r[0]=c->r[0]-c->r[7]; // 803D34BC
  c->r[6]=R8(c->r[6]+0x00000006u); // 803D34C0
  c->r[0]=c->r[0]^0x80000000u; // 803D34C4
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D34C8
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 803D34CC
  c->r[6]=c->r[6]-c->r[8]; // 803D34D0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D34D4
  c->r[6]=c->r[6]^0x80000000u; // 803D34D8
  {uint32_t ea=c->r[24]+0x00000ED0u; c->f[5]=RF64(ea);} // 803D34DC
  W32(c->r[1]+0x00000144u,c->r[6]); // 803D34E0
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[8]); // 803D34E4
  {uint32_t ea=c->r[5]+c->r[10]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D34E8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D34EC
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 803D34F0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D34F4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D34F8
  W32(c->r[1]+0x00000144u,c->r[0]); // 803D34FC
  {uint32_t ea=c->r[1]+0x00000138u; c->f[7]=RF64(ea);} // 803D3500
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 803D3504
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 803D3508
  {uint32_t ea=c->r[5]+c->r[9]; c->f[1]=c->ps1[1]=RF32(ea);} // 803D350C
  c->f[7]=c->ps1[7]=S(c->f[7]-c->f[8]); // 803D3510
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 803D3514
  {uint32_t ea=c->r[1]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3518
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 803D351C
  W32(c->r[1]+0x0000013Cu,c->r[8]); // 803D3520
  {uint32_t ea=c->r[1]+0x00000138u; c->f[4]=RF64(ea);} // 803D3524
  {uint32_t ea=c->r[22]+c->r[10]; WF32(ea,c->f[7]);} // 803D3528
  {uint32_t ea=c->r[21]+c->r[10]; WF32(ea,c->f[7]);} // 803D352C
  {uint32_t ea=c->r[25]+c->r[9]; WF32(ea,c->f[6]);} // 803D3530
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D3534
  W32(c->r[1]+0x0000013Cu,c->r[7]); // 803D3538
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[8]); // 803D353C
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=RF64(ea);} // 803D3540
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 803D3544
  {uint32_t ea=c->r[21]+c->r[9]; WF32(ea,c->f[6]);} // 803D3548
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 803D354C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[8]); // 803D3550
  {uint32_t ea=c->r[25]+c->r[10]; WF32(ea,c->f[3]);} // 803D3554
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D3558
  {uint32_t ea=c->r[23]+c->r[10]; WF32(ea,c->f[3]);} // 803D355C
  {uint32_t ea=c->r[22]+c->r[9]; WF32(ea,c->f[0]);} // 803D3560
  {uint32_t ea=c->r[23]+c->r[9]; WF32(ea,c->f[0]);} // 803D3564
  c->lr=0x803D356Cu; f_803C97E0(c); // 803D3568
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D356C
  c->r[0]=0u-c->r[17]; // 803D3570
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3574
  c->r[0]=c->r[0]|c->r[17]; // 803D3578
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D357C
  c->r[0]=sraw(c,c->r[0],31); // 803D3580
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803D3584
  c->r[6]=c->r[22]|c->r[22]; // 803D3588
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 803D358C
  c->r[8]=c->r[31]|c->r[31]; // 803D3590
  c->r[7]=c->r[26]&c->r[0]; // 803D3594
  c->r[3]=c->r[1]+0x00000048u; // 803D3598
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 803D359C
  c->r[4]=c->r[1]+0x00000100u; // 803D35A0
  c->r[5]=0u+0x00000001u; // 803D35A4
  c->lr=0x803D35ACu; f_803C9E24(c); // 803D35A8
  c->r[11]=c->r[1]+0x00000190u; // 803D35AC
  c->lr=0x803D35B4u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D35B0
  c->r[0]=R32(c->r[1]+0x00000194u); // 803D35B4
  c->lr=c->r[0]; // 803D35B8
  c->r[1]=c->r[1]+0x00000190u; // 803D35BC
  return; // 803D35C0
}

// fn_803D35C4
void f_803D35C4(Ctx* __restrict c) {
  trace_call(0x803D35C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D35C4
  c->r[0]=c->lr; // 803D35C8
  cmps(c,0,(int32_t)c->r[5],4); // 803D35CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D35D0
  c->r[0]=0u+0x00000000u; // 803D35D4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803D35D8
  c->r[31]=c->r[6]|c->r[6]; // 803D35DC
  W32(c->r[1]+0x00000038u,c->r[30]); // 803D35E0
  c->r[30]=c->r[3]|c->r[3]; // 803D35E4
  W32(c->r[1]+0x00000020u,c->r[0]); // 803D35E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D35EC
  W32(c->r[1]+0x00000028u,c->r[0]); // 803D35F0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 803D35F4
  if (crb(c,2)) { goto L_803D3644; } // 803D35F8
  if (!crb(c,0)) { goto L_803D360C; } // 803D35FC
  cmps(c,0,(int32_t)c->r[5],1); // 803D3600
  if (crb(c,2)) { goto L_803D3618; } // 803D3604
  goto L_803D368C; // 803D3608
L_803D360C:;
  cmps(c,0,(int32_t)c->r[5],8); // 803D360C
  if (crb(c,2)) { goto L_803D3644; } // 803D3610
  goto L_803D368C; // 803D3614
L_803D3618:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 803D3618
  c->r[3]=c->r[1]+0x00000018u; // 803D361C
  c->r[5]=0u+0x00000000u; // 803D3620
  c->lr=0x803D3628u; f_803CE5C4(c); // 803D3624
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3628
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D362C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803D3630
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803D3634
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803D3638
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803D363C
  goto L_803D368C; // 803D3640
L_803D3644:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 803D3644
  c->r[3]=c->r[1]+0x00000010u; // 803D3648
  c->r[5]=0u+0x00000000u; // 803D364C
  c->lr=0x803D3654u; f_803CE5C4(c); // 803D3650
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3654
  c->r[3]=c->r[1]+0x00000008u; // 803D3658
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D365C
  c->r[5]=0u+0x00000000u; // 803D3660
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803D3664
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 803D3668
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 803D366C
  c->lr=0x803D3674u; f_803CE5C4(c); // 803D3670
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3674
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3678
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803D367C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803D3680
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803D3684
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 803D3688
L_803D368C:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 803D368C
  c->r[4]=R32(c->r[1]+0x00000024u); // 803D3690
  c->r[3]=R32(c->r[1]+0x00000028u); // 803D3694
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 803D3698
  W32(c->r[30]+0x00000000u,c->r[5]); // 803D369C
  W32(c->r[30]+0x00000004u,c->r[4]); // 803D36A0
  W32(c->r[30]+0x00000008u,c->r[3]); // 803D36A4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 803D36A8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803D36AC
  c->r[30]=R32(c->r[1]+0x00000038u); // 803D36B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D36B4
  c->lr=c->r[0]; // 803D36B8
  c->r[1]=c->r[1]+0x00000040u; // 803D36BC
  return; // 803D36C0
}

// fn_803D36C4
void f_803D36C4(Ctx* __restrict c) {
  trace_call(0x803D36C4u);
  c->r[0]=R8(c->r[3]+0x00000100u); // 803D36C4
  cmpu(c,0,c->r[4],c->r[0]); // 803D36C8
  if (crb(c,0)) { goto L_803D36D8; } // 803D36CC
  c->r[3]=0u+0x00000000u; // 803D36D0
  return; // 803D36D4
L_803D36D8:;
  c->r[3]=R32(c->r[3]+0x000000FCu); // 803D36D8
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803D36DC
  c->r[3]=c->r[3]+c->r[0]; // 803D36E0
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D36E4
  return; // 803D36E8
}

// fn_803D36EC
void f_803D36EC(Ctx* __restrict c) {
  trace_call(0x803D36ECu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D36EC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 803D36F0
  c->ctr=c->r[12]; // 803D36F4
  if (true) { dispatch(c,c->ctr); return; } // 803D36F8
}

// fn_803D36FC
void f_803D36FC(Ctx* __restrict c) {
  trace_call(0x803D36FCu);
  c->r[3]=0u+0x806C0000u; // 803D36FC
  c->r[3]=c->r[3]+0x000025C8u; // 803D3700
  return; // 803D3704
}

// fn_803D3708
void f_803D3708(Ctx* __restrict c) {
  trace_call(0x803D3708u);
  c->r[4]=0u+0x806C0000u; // 803D3708
  c->r[3]=0u+0x806C0000u; // 803D370C
  c->r[4]=c->r[4]+0x000025B0u; // 803D3710
  W32(c->r[3]+0x000025C8u,c->r[4]); // 803D3714
  return; // 803D3718
}

// SinFIdx__Q26nw4hbm4mathFf
void f_803D371C(Ctx* __restrict c) {
  trace_call(0x803D371Cu);
  c->r[3]=0u+0x803F0000u; // 803D371C
  c->f[2]=std::fabs(c->f[1]); // 803D3720
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3724
  {uint32_t ea=c->r[3]+0x00000ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3728
  goto L_803D3734; // 803D372C
L_803D3730:;
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 803D3730
L_803D3734:;
  fcmp(c,0,c->f[2],c->f[0]); // 803D3734
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D3738
  if (crb(c,2)) { IRQCHK(c); goto L_803D3730; } // 803D373C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,2,ea,1,3);} // 803D3740
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 803D3744
  W16(c->r[1]+0x00000008u,c->r[0]); // 803D3748
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 803D374C
  c->r[5]=0u+0x80440000u; // 803D3750
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 803D3754
  c->r[3]=0u+0x803F0000u; // 803D3758
  c->r[5]=c->r[5]+0xFFFF92F0u; // 803D375C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[0]); // 803D3760
  c->r[4]=c->r[5]+c->r[0]; // 803D3764
  {uint32_t ea=c->r[3]+0x00000EDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3768
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D376C
  fcmp(c,0,c->f[1],c->f[0]); // 803D3770
  {uint32_t ea=c->r[5]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 803D3774
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[3]); // 803D3778
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 803D377C
  if (!crb(c,0)) { goto L_803D3788; } // 803D3780
  c->f[1]=-c->f[1]; // 803D3784
L_803D3788:;
  c->r[1]=c->r[1]+0x00000010u; // 803D3788
  return; // 803D378C
}

// CosFIdx__Q26nw4hbm4mathFf
void f_803D3790(Ctx* __restrict c) {
  trace_call(0x803D3790u);
  c->r[3]=0u+0x803F0000u; // 803D3790
  c->f[1]=std::fabs(c->f[1]); // 803D3794
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3798
  {uint32_t ea=c->r[3]+0x00000ED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D379C
  goto L_803D37A8; // 803D37A0
L_803D37A4:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803D37A4
L_803D37A8:;
  fcmp(c,0,c->f[1],c->f[0]); // 803D37A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D37AC
  if (crb(c,2)) { IRQCHK(c); goto L_803D37A4; } // 803D37B0
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 803D37B4
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 803D37B8
  W16(c->r[1]+0x00000008u,c->r[0]); // 803D37BC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 803D37C0
  c->r[3]=0u+0x80440000u; // 803D37C4
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 803D37C8
  c->r[3]=c->r[3]+0xFFFF92F0u; // 803D37CC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 803D37D0
  c->r[3]=c->r[3]+c->r[0]; // 803D37D4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D37D8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D37DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D37E0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D37E4
  c->r[1]=c->r[1]+0x00000010u; // 803D37E8
  return; // 803D37EC
}

// Atan2FIdx__Q26nw4hbm4mathFff
void f_803D37F0(Ctx* __restrict c) {
  trace_call(0x803D37F0u);
  c->r[3]=0u+0x803F0000u; // 803D37F0
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D37F4
  c->r[3]=c->r[3]+0x00000ED8u; // 803D37F8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D37FC
  fcmp(c,0,c->f[0],c->f[2]); // 803D3800
  if (!crb(c,2)) { goto L_803D3818; } // 803D3804
  fcmp(c,0,c->f[0],c->f[1]); // 803D3808
  if (!crb(c,2)) { goto L_803D3818; } // 803D380C
  c->f[1]=c->f[0]; // 803D3810
  goto L_803D3998; // 803D3814
L_803D3818:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D3818
  fcmp(c,0,c->f[2],c->f[4]); // 803D381C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D3820
  if (!crb(c,2)) { goto L_803D3890; } // 803D3824
  fcmp(c,0,c->f[1],c->f[4]); // 803D3828
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D382C
  if (!crb(c,2)) { goto L_803D3860; } // 803D3830
  fcmp(c,0,c->f[2],c->f[1]); // 803D3834
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D3838
  if (!crb(c,2)) { goto L_803D384C; } // 803D383C
  c->f[3]=c->f[2]; // 803D3840
  c->r[0]=0u+0x00000000u; // 803D3844
  goto L_803D3904; // 803D3848
L_803D384C:;
  c->f[3]=c->f[1]; // 803D384C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D3850
  c->f[1]=c->f[2]; // 803D3854
  c->r[0]=0u+0x00000001u; // 803D3858
  goto L_803D3904; // 803D385C
L_803D3860:;
  c->f[1]=-c->f[1]; // 803D3860
  fcmp(c,0,c->f[2],c->f[1]); // 803D3864
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D3868
  if (!crb(c,2)) { goto L_803D387C; } // 803D386C
  c->f[3]=c->f[2]; // 803D3870
  c->r[0]=0u+0x00000001u; // 803D3874
  goto L_803D3904; // 803D3878
L_803D387C:;
  c->f[3]=c->f[1]; // 803D387C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D3880
  c->f[1]=c->f[2]; // 803D3884
  c->r[0]=0u+0x00000000u; // 803D3888
  goto L_803D3904; // 803D388C
L_803D3890:;
  fcmp(c,0,c->f[1],c->f[4]); // 803D3890
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D3894
  if (!crb(c,2)) { goto L_803D38D0; } // 803D3898
  c->f[0]=-c->f[2]; // 803D389C
  fcmp(c,0,c->f[0],c->f[1]); // 803D38A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D38A4
  if (!crb(c,2)) { goto L_803D38BC; } // 803D38A8
  c->f[3]=c->f[0]; // 803D38AC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 803D38B0
  c->r[0]=0u+0x00000001u; // 803D38B4
  goto L_803D3904; // 803D38B8
L_803D38BC:;
  c->f[3]=c->f[1]; // 803D38BC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D38C0
  c->f[1]=c->f[0]; // 803D38C4
  c->r[0]=0u+0x00000000u; // 803D38C8
  goto L_803D3904; // 803D38CC
L_803D38D0:;
  c->f[0]=-c->f[2]; // 803D38D0
  c->f[1]=-c->f[1]; // 803D38D4
  fcmp(c,0,c->f[0],c->f[1]); // 803D38D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803D38DC
  if (!crb(c,2)) { goto L_803D38F4; } // 803D38E0
  c->f[3]=c->f[0]; // 803D38E4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D38E8
  c->r[0]=0u+0x00000000u; // 803D38EC
  goto L_803D3904; // 803D38F0
L_803D38F4:;
  c->f[3]=c->f[1]; // 803D38F4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D38F8
  c->f[1]=c->f[0]; // 803D38FC
  c->r[0]=0u+0x00000001u; // 803D3900
L_803D3904:;
  cmps(c,0,(int32_t)c->r[0],0); // 803D3904
  if (crb(c,2)) { goto L_803D3954; } // 803D3908
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 803D390C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3910
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803D3914
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,1,3);} // 803D3918
  c->r[0]=R16(c->r[1]+0x00000010u); // 803D391C
  W16(c->r[1]+0x0000000Au,c->r[0]); // 803D3920
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,0,ea,1,3);} // 803D3924
  c->r[4]=0u+0x80440000u; // 803D3928
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 803D392C
  c->r[4]=c->r[4]+0xFFFFA300u; // 803D3930
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 803D3934
  c->r[3]=c->r[4]+c->r[0]; // 803D3938
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 803D393C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3940
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D3944
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803D3948
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[0]); // 803D394C
  goto L_803D3998; // 803D3950
L_803D3954:;
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[3]); // 803D3954
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3958
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803D395C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 803D3960
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 803D3964
  W16(c->r[1]+0x00000008u,c->r[0]); // 803D3968
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,0,ea,1,3);} // 803D396C
  c->r[4]=0u+0x80440000u; // 803D3970
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 803D3974
  c->r[4]=c->r[4]+0xFFFFA300u; // 803D3978
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 803D397C
  c->r[3]=c->r[4]+c->r[0]; // 803D3980
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3984
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3988
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D398C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803D3990
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 803D3994
L_803D3998:;
  c->r[1]=c->r[1]+0x00000020u; // 803D3998
  return; // 803D399C
}

// IsValidBinaryFile__Q26nw4hbm2utFPCQ36nw4hbm2ut16BinaryFileHeaderUlUsUs
void f_803D39A0(Ctx* __restrict c) {
  trace_call(0x803D39A0u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 803D39A0
  cmpu(c,0,c->r[0],c->r[4]); // 803D39A4
  if (crb(c,2)) { goto L_803D39B4; } // 803D39A8
  c->r[3]=0u+0x00000000u; // 803D39AC
  return; // 803D39B0
L_803D39B4:;
  c->r[0]=R16(c->r[3]+0x00000004u); // 803D39B4
  cmpu(c,0,c->r[0],0x0000FEFFu); // 803D39B8
  if (crb(c,2)) { goto L_803D39C8; } // 803D39BC
  c->r[3]=0u+0x00000000u; // 803D39C0
  return; // 803D39C4
L_803D39C8:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 803D39C8
  cmpu(c,0,c->r[0],c->r[5]); // 803D39CC
  if (crb(c,2)) { goto L_803D39DC; } // 803D39D0
  c->r[3]=0u+0x00000000u; // 803D39D4
  return; // 803D39D8
L_803D39DC:;
  c->r[4]=rotl(c->r[6],3)&0x0007FFF8u; // 803D39DC
  c->r[5]=R32(c->r[3]+0x00000008u); // 803D39E0
  c->r[0]=c->r[4]+0x00000010u; // 803D39E4
  cmpu(c,0,c->r[5],c->r[0]); // 803D39E8
  if (!crb(c,0)) { goto L_803D39F8; } // 803D39EC
  c->r[3]=0u+0x00000000u; // 803D39F0
  return; // 803D39F4
L_803D39F8:;
  c->r[3]=R16(c->r[3]+0x0000000Eu); // 803D39F8
  c->r[0]=c->r[3]-c->r[6]; // 803D39FC
  c->r[3]=c->r[3]|~c->r[6]; // 803D3A00
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803D3A04
  c->r[0]=c->r[3]-c->r[0]; // 803D3A08
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803D3A0C
  return; // 803D3A10
}

// fn_803D3A14
void f_803D3A14(Ctx* __restrict c) {
  trace_call(0x803D3A14u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 803D3A14
  c->r[6]=R8(c->r[7]+0x00000000u); // 803D3A18
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 803D3A1C
  if (!crb(c,2)) { goto L_803D3A34; } // 803D3A20
  c->r[4]=R32(c->r[3]+0x00000000u); // 803D3A24
  c->r[0]=c->r[4]+0x00000001u; // 803D3A28
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D3A2C
  goto L_803D3A84; // 803D3A30
L_803D3A34:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 803D3A34
  cmps(c,0,(int32_t)c->r[0],192); // 803D3A38
  if (!crb(c,2)) { goto L_803D3A60; } // 803D3A3C
  c->r[4]=R32(c->r[3]+0x00000000u); // 803D3A40
  c->r[5]=R8(c->r[7]+0x00000001u); // 803D3A44
  c->r[0]=c->r[4]+0x00000002u; // 803D3A48
  c->r[4]=rotl(c->r[5],0)&0x0000003Fu; // 803D3A4C
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D3A50
  c->r[4]=(rotl(c->r[6],6)&0x000007C0u)|(c->r[4]&~0x000007C0u); // 803D3A54
  c->r[6]=c->r[4]|c->r[4]; // 803D3A58
  goto L_803D3A84; // 803D3A5C
L_803D3A60:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 803D3A60
  c->r[5]=rotl(c->r[6],12)&0x0001F000u; // 803D3A64
  c->r[6]=R8(c->r[7]+0x00000001u); // 803D3A68
  c->r[7]=R8(c->r[7]+0x00000002u); // 803D3A6C
  c->r[0]=c->r[4]+0x00000003u; // 803D3A70
  c->r[5]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[5]&~0x00000FC0u); // 803D3A74
  c->r[5]=(rotl(c->r[7],0)&0x0000003Fu)|(c->r[5]&~0x0000003Fu); // 803D3A78
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D3A7C
  c->r[6]=rotl(c->r[5],0)&0x0000FFFFu; // 803D3A80
L_803D3A84:;
  c->r[3]=c->r[6]|c->r[6]; // 803D3A84
  return; // 803D3A88
}

// fn_803D3A8C
void f_803D3A8C(Ctx* __restrict c) {
  trace_call(0x803D3A8Cu);
  c->r[5]=c->r[3]|c->r[3]; // 803D3A8C
  c->r[3]=R32(c->r[3]+0x00000000u); // 803D3A90
  c->r[4]=R32(c->r[5]+0x00000000u); // 803D3A94
  c->r[3]=R16(c->r[3]+0x00000000u); // 803D3A98
  c->r[0]=c->r[4]+0x00000002u; // 803D3A9C
  W32(c->r[5]+0x00000000u,c->r[0]); // 803D3AA0
  return; // 803D3AA4
}

// fn_803D3AA8
void f_803D3AA8(Ctx* __restrict c) {
  trace_call(0x803D3AA8u);
  c->r[5]=c->r[3]|c->r[3]; // 803D3AA8
  c->r[3]=R32(c->r[3]+0x00000000u); // 803D3AAC
  c->r[4]=R32(c->r[5]+0x00000000u); // 803D3AB0
  c->r[3]=R8(c->r[3]+0x00000000u); // 803D3AB4
  c->r[0]=c->r[4]+0x00000001u; // 803D3AB8
  W32(c->r[5]+0x00000000u,c->r[0]); // 803D3ABC
  return; // 803D3AC0
}

// fn_803D3AC4
void f_803D3AC4(Ctx* __restrict c) {
  trace_call(0x803D3AC4u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 803D3AC4
  c->r[0]=0u+0x00000000u; // 803D3AC8
  c->r[5]=R8(c->r[6]+0x00000000u); // 803D3ACC
  cmpu(c,0,c->r[5],0x00000081u); // 803D3AD0
  if (crb(c,0)) { goto L_803D3AE0; } // 803D3AD4
  cmpu(c,0,c->r[5],0x000000A0u); // 803D3AD8
  if (crb(c,0)) { goto L_803D3AE8; } // 803D3ADC
L_803D3AE0:;
  cmpu(c,0,c->r[5],0x000000E0u); // 803D3AE0
  if (crb(c,0)) { goto L_803D3AEC; } // 803D3AE4
L_803D3AE8:;
  c->r[0]=0u+0x00000001u; // 803D3AE8
L_803D3AEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 803D3AEC
  if (crb(c,2)) { goto L_803D3B0C; } // 803D3AF0
  c->r[4]=R32(c->r[3]+0x00000000u); // 803D3AF4
  c->r[6]=R8(c->r[6]+0x00000001u); // 803D3AF8
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 803D3AFC
  c->r[0]=c->r[4]+0x00000002u; // 803D3B00
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D3B04
  goto L_803D3B1C; // 803D3B08
L_803D3B0C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 803D3B0C
  c->r[6]=c->r[5]|c->r[5]; // 803D3B10
  c->r[0]=c->r[4]+0x00000001u; // 803D3B14
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D3B18
L_803D3B1C:;
  c->r[3]=c->r[6]|c->r[6]; // 803D3B1C
  return; // 803D3B20
}

// __ct__Q36nw4hbm2ut10CharWriterFv
void f_803D3B24(Ctx* __restrict c) {
  trace_call(0x803D3B24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3B24
  c->r[0]=c->lr; // 803D3B28
  c->r[4]=0u+0x803F0000u; // 803D3B2C
  c->r[7]=0u+0x806C0000u; // 803D3B30
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D3B34
  c->r[8]=0u+0xFFFFFFFFu; // 803D3B38
  {uint32_t ea=c->r[4]+0x00000F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3B3C
  c->r[0]=0u+0x000000FFu; // 803D3B40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D3B44
  c->r[6]=c->r[7]+0x000025E8u; // 803D3B48
  c->r[31]=c->r[3]|c->r[3]; // 803D3B4C
  c->r[4]=c->r[1]+0x00000008u; // 803D3B50
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D3B54
  c->r[30]=0u+0x00000000u; // 803D3B58
  c->r[5]=c->r[1]+0x0000000Cu; // 803D3B5C
  W32(c->r[3]+0x00000000u,c->r[8]); // 803D3B60
  W32(c->r[3]+0x00000004u,c->r[8]); // 803D3B64
  W32(c->r[3]+0x00000008u,c->r[8]); // 803D3B68
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 803D3B6C
  W32(c->r[3]+0x00000010u,c->r[8]); // 803D3B70
  W32(c->r[3]+0x00000014u,c->r[8]); // 803D3B74
  W32(c->r[3]+0x00000018u,c->r[8]); // 803D3B78
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 803D3B7C
  W8(c->r[3]+0x00000042u,c->r[0]); // 803D3B80
  W8(c->r[3]+0x00000043u,c->r[30]); // 803D3B84
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 803D3B88
  W32(c->r[3]+0x00000048u,c->r[30]); // 803D3B8C
  W32(c->r[7]+0x000025E8u,c->r[0]); // 803D3B90
  W32(c->r[6]+0x00000004u,c->r[30]); // 803D3B94
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D3B98
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 803D3B9C
  c->lr=0x803D3BA4u; f_803D4818(c); // 803D3BA0
  c->r[5]=R8(c->r[31]+0x00000018u); // 803D3BA4
  cmps(c,0,(int32_t)c->r[30],1); // 803D3BA8
  c->r[4]=R8(c->r[31]+0x00000019u); // 803D3BAC
  c->r[3]=R8(c->r[31]+0x0000001Au); // 803D3BB0
  c->r[0]=R8(c->r[31]+0x0000001Bu); // 803D3BB4
  W32(c->r[31]+0x00000020u,c->r[30]); // 803D3BB8
  W8(c->r[31]+0x00000008u,c->r[5]); // 803D3BBC
  W8(c->r[31]+0x00000009u,c->r[4]); // 803D3BC0
  W8(c->r[31]+0x0000000Au,c->r[3]); // 803D3BC4
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 803D3BC8
  if (crb(c,2)) { goto L_803D3BD8; } // 803D3BCC
  c->r[4]=c->r[31]+0x00000018u; // 803D3BD0
  goto L_803D3BDC; // 803D3BD4
L_803D3BD8:;
  c->r[4]=c->r[31]+0x0000001Cu; // 803D3BD8
L_803D3BDC:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 803D3BDC
  c->r[0]=R32(c->r[31]+0x00000020u); // 803D3BE0
  W8(c->r[31]+0x0000000Cu,c->r[3]); // 803D3BE4
  cmps(c,0,(int32_t)c->r[0],2); // 803D3BE8
  c->r[0]=R8(c->r[4]+0x00000001u); // 803D3BEC
  W8(c->r[31]+0x0000000Du,c->r[0]); // 803D3BF0
  c->r[0]=R8(c->r[4]+0x00000002u); // 803D3BF4
  W8(c->r[31]+0x0000000Eu,c->r[0]); // 803D3BF8
  c->r[0]=R8(c->r[4]+0x00000003u); // 803D3BFC
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 803D3C00
  if (crb(c,2)) { goto L_803D3C10; } // 803D3C04
  c->r[4]=c->r[31]+0x00000018u; // 803D3C08
  goto L_803D3C14; // 803D3C0C
L_803D3C10:;
  c->r[4]=c->r[31]+0x0000001Cu; // 803D3C10
L_803D3C14:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 803D3C14
  c->r[0]=R32(c->r[31]+0x00000020u); // 803D3C18
  W8(c->r[31]+0x00000010u,c->r[3]); // 803D3C1C
  cmps(c,0,(int32_t)c->r[0],0); // 803D3C20
  c->r[0]=R8(c->r[4]+0x00000001u); // 803D3C24
  W8(c->r[31]+0x00000011u,c->r[0]); // 803D3C28
  c->r[0]=R8(c->r[4]+0x00000002u); // 803D3C2C
  W8(c->r[31]+0x00000012u,c->r[0]); // 803D3C30
  c->r[0]=R8(c->r[4]+0x00000003u); // 803D3C34
  W8(c->r[31]+0x00000013u,c->r[0]); // 803D3C38
  if (!crb(c,2)) { goto L_803D3C48; } // 803D3C3C
  c->r[10]=c->r[31]+0x00000018u; // 803D3C40
  goto L_803D3C4C; // 803D3C44
L_803D3C48:;
  c->r[10]=c->r[31]+0x0000001Cu; // 803D3C48
L_803D3C4C:;
  c->r[0]=R8(c->r[10]+0x00000000u); // 803D3C4C
  c->r[3]=0u+0x80810000u; // 803D3C50
  c->r[12]=c->r[3]+0xFFFF8081u; // 803D3C54
  c->r[5]=R8(c->r[31]+0x0000000Bu); // 803D3C58
  W8(c->r[31]+0x00000014u,c->r[0]); // 803D3C5C
  c->r[0]=0u+0xFFFFFFFFu; // 803D3C60
  c->r[9]=R8(c->r[31]+0x00000042u); // 803D3C64
  c->r[3]=c->r[31]|c->r[31]; // 803D3C68
  c->r[7]=R8(c->r[10]+0x00000001u); // 803D3C6C
  c->r[4]=c->r[1]+0x00000010u; // 803D3C70
  c->r[6]=R8(c->r[31]+0x0000000Fu); // 803D3C74
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 803D3C78
  W8(c->r[31]+0x00000015u,c->r[7]); // 803D3C7C
  c->r[5]=R8(c->r[31]+0x00000013u); // 803D3C80
  c->r[7]=R8(c->r[10]+0x00000002u); // 803D3C84
  W8(c->r[31]+0x00000016u,c->r[7]); // 803D3C88
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 803D3C8C
  c->r[10]=R8(c->r[10]+0x00000003u); // 803D3C90
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 803D3C94
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 803D3C98
  c->r[10]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[8])>>32); // 803D3C9C
  c->r[9]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[6])>>32); // 803D3CA0
  c->r[8]=c->r[10]+c->r[8]; // 803D3CA4
  c->r[10]=sraw(c,c->r[8],7); // 803D3CA8
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[7])>>32); // 803D3CAC
  c->r[11]=rotl(c->r[10],1)&0x00000001u; // 803D3CB0
  c->r[6]=c->r[9]+c->r[6]; // 803D3CB4
  c->r[10]=c->r[10]+c->r[11]; // 803D3CB8
  c->r[9]=sraw(c,c->r[6],7); // 803D3CBC
  W8(c->r[31]+0x0000000Bu,c->r[10]); // 803D3CC0
  c->r[7]=c->r[8]+c->r[7]; // 803D3CC4
  c->r[8]=rotl(c->r[9],1)&0x00000001u; // 803D3CC8
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[12]*(int64_t)(int32_t)c->r[5])>>32); // 803D3CCC
  c->r[9]=c->r[9]+c->r[8]; // 803D3CD0
  c->r[7]=sraw(c,c->r[7],7); // 803D3CD4
  W8(c->r[31]+0x0000000Fu,c->r[9]); // 803D3CD8
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 803D3CDC
  c->r[5]=c->r[6]+c->r[5]; // 803D3CE0
  c->r[5]=sraw(c,c->r[5],7); // 803D3CE4
  c->r[7]=c->r[7]+c->r[8]; // 803D3CE8
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 803D3CEC
  W8(c->r[31]+0x00000013u,c->r[7]); // 803D3CF0
  c->r[5]=c->r[5]+c->r[6]; // 803D3CF4
  W8(c->r[31]+0x00000017u,c->r[5]); // 803D3CF8
  W32(c->r[1]+0x00000010u,c->r[0]); // 803D3CFC
  c->lr=0x803D3D04u; f_803D49AC(c); // 803D3D00
  c->r[4]=0u+0x803F0000u; // 803D3D04
  c->r[3]=0u+0x803F0000u; // 803D3D08
  {uint32_t ea=c->r[3]+0x00000F00u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D3D0C
  c->r[0]=0u+0x00000001u; // 803D3D10
  {uint32_t ea=c->r[4]+0x00000F04u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3D14
  c->r[3]=c->r[31]|c->r[31]; // 803D3D18
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 803D3D1C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 803D3D20
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[1]);} // 803D3D24
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 803D3D28
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 803D3D2C
  W32(c->r[31]+0x00000038u,c->r[0]); // 803D3D30
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 803D3D34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D3D38
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D3D3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D3D40
  c->lr=c->r[0]; // 803D3D44
  c->r[1]=c->r[1]+0x00000020u; // 803D3D48
  return; // 803D3D4C
}

// __dt__Q36nw4hbm2ut10CharWriterFv
void f_803D3D50(Ctx* __restrict c) {
  trace_call(0x803D3D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3D50
  c->r[0]=c->lr; // 803D3D54
  cmps(c,0,(int32_t)c->r[3],0); // 803D3D58
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D3D5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D3D60
  c->r[31]=c->r[3]|c->r[3]; // 803D3D64
  if (crb(c,2)) { goto L_803D3D78; } // 803D3D68
  cmps(c,0,(int32_t)c->r[4],0); // 803D3D6C
  if (!crb(c,1)) { goto L_803D3D78; } // 803D3D70
  c->lr=0x803D3D78u; f_802896EC(c); // 803D3D74
L_803D3D78:;
  c->r[3]=c->r[31]|c->r[31]; // 803D3D78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D3D7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D3D80
  c->lr=c->r[0]; // 803D3D84
  c->r[1]=c->r[1]+0x00000010u; // 803D3D88
  return; // 803D3D8C
}

// SetFont__Q36nw4hbm2ut10CharWriterFRCQ36nw4hbm2ut4Font
void f_803D3D90(Ctx* __restrict c) {
  trace_call(0x803D3D90u);
  W32(c->r[3]+0x00000048u,c->r[4]); // 803D3D90
  return; // 803D3D94
}

// GetFont__Q36nw4hbm2ut10CharWriterCFv
void f_803D3D98(Ctx* __restrict c) {
  trace_call(0x803D3D98u);
  c->r[3]=R32(c->r[3]+0x00000048u); // 803D3D98
  return; // 803D3D9C
}

// SetupGX__Q36nw4hbm2ut10CharWriterFv
void f_803D3DA0(Ctx* __restrict c) {
  trace_call(0x803D3DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D3DA0
  c->r[0]=c->lr; // 803D3DA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D3DA8
  c->r[0]=0u+0x000000FFu; // 803D3DAC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D3DB0
  c->r[31]=0u+0x806C0000u; // 803D3DB4
  c->r[31]=c->r[31]+0x000025D0u; // 803D3DB8
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D3DBC
  c->r[30]=0u+0x00000000u; // 803D3DC0
  c->r[4]=c->r[31]+0x00000018u; // 803D3DC4
  W32(c->r[31]+0x00000018u,c->r[0]); // 803D3DC8
  W32(c->r[4]+0x00000004u,c->r[30]); // 803D3DCC
  c->r[0]=R32(c->r[3]+0x00000000u); // 803D3DD0
  cmps(c,0,(int32_t)c->r[0],0); // 803D3DD4
  if (!crb(c,2)) { goto L_803D3DEC; } // 803D3DD8
  c->r[4]=R32(c->r[3]+0x00000004u); // 803D3DDC
  c->r[0]=c->r[4]+0x00010000u; // 803D3DE0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803D3DE4
  if (crb(c,2)) { goto L_803D3E3C; } // 803D3DE8
L_803D3DEC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D3DEC
  c->r[4]=c->r[1]+0x0000001Cu; // 803D3DF0
  W8(c->r[1]+0x00000020u,c->r[0]); // 803D3DF4
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D3DF8
  W8(c->r[1]+0x00000021u,c->r[0]); // 803D3DFC
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D3E00
  W8(c->r[1]+0x00000022u,c->r[0]); // 803D3E04
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D3E08
  W8(c->r[1]+0x00000023u,c->r[0]); // 803D3E0C
  c->r[0]=R8(c->r[3]+0x00000004u); // 803D3E10
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 803D3E14
  c->r[0]=R8(c->r[3]+0x00000005u); // 803D3E18
  W8(c->r[1]+0x0000001Du,c->r[0]); // 803D3E1C
  c->r[0]=R8(c->r[3]+0x00000006u); // 803D3E20
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 803D3E24
  c->r[0]=R8(c->r[3]+0x00000007u); // 803D3E28
  c->r[3]=c->r[1]+0x00000020u; // 803D3E2C
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 803D3E30
  c->lr=0x803D3E38u; f_803D52B4(c); // 803D3E34
  goto L_803D4800; // 803D3E38
L_803D3E3C:;
  c->r[3]=R32(c->r[3]+0x00000048u); // 803D3E3C
  cmps(c,0,(int32_t)c->r[3],0); // 803D3E40
  if (crb(c,2)) { goto L_803D4630; } // 803D3E44
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D3E48
  c->r[12]=R32(c->r[12]+0x00000030u); // 803D3E4C
  c->ctr=c->r[12]; // 803D3E50
  if (true) { c->lr=0x803D3E58u; dispatch(c,c->ctr); } // 803D3E54
  cmps(c,0,(int32_t)c->r[3],4); // 803D3E58
  if (!crb(c,0)) { goto L_803D3E74; } // 803D3E5C
  cmps(c,0,(int32_t)c->r[3],2); // 803D3E60
  if (!crb(c,0)) { goto L_803D40B0; } // 803D3E64
  cmps(c,0,(int32_t)c->r[3],0); // 803D3E68
  if (!crb(c,0)) { goto L_803D3E80; } // 803D3E6C
  goto L_803D4458; // 803D3E70
L_803D3E74:;
  cmps(c,0,(int32_t)c->r[3],7); // 803D3E74
  if (!crb(c,0)) { goto L_803D4458; } // 803D3E78
  goto L_803D4284; // 803D3E7C
L_803D3E80:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 803D3E80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D3E84
  if (!crb(c,2)) { goto L_803D3EAC; } // 803D3E88
  c->r[4]=0u+0x803D0000u; // 803D3E8C
  W32(c->r[31]+0x00000010u,c->r[30]); // 803D3E90
  c->r[3]=c->r[31]+0x00000010u; // 803D3E94
  c->r[5]=c->r[31]+0x00000004u; // 803D3E98
  c->r[4]=c->r[4]+0xFFFF9398u; // 803D3E9C
  c->lr=0x803D3EA4u; f_802895A4(c); // 803D3EA0
  c->r[0]=0u+0x00000001u; // 803D3EA4
  W8(c->r[31]+0x00000000u,c->r[0]); // 803D3EA8
L_803D3EAC:;
  c->r[3]=0u+0x803F0000u; // 803D3EAC
  c->r[6]=c->r[31]+0x00000010u; // 803D3EB0
  {uint32_t ea=c->r[3]+0x00000F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D3EB4
  c->r[4]=c->r[1]+0x00000018u; // 803D3EB8
  c->r[3]=R8(c->r[31]+0x00000010u); // 803D3EBC
  c->r[7]=R8(c->r[6]+0x00000001u); // 803D3EC0
  c->f[2]=c->f[1]; // 803D3EC4
  c->r[5]=R8(c->r[6]+0x00000002u); // 803D3EC8
  c->f[3]=c->f[1]; // 803D3ECC
  c->r[0]=R8(c->r[6]+0x00000003u); // 803D3ED0
  c->f[4]=c->f[1]; // 803D3ED4
  W8(c->r[1]+0x00000018u,c->r[3]); // 803D3ED8
  c->r[3]=0u+0x00000000u; // 803D3EDC
  W8(c->r[1]+0x00000019u,c->r[7]); // 803D3EE0
  W8(c->r[1]+0x0000001Au,c->r[5]); // 803D3EE4
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 803D3EE8
  c->lr=0x803D3EF0u; f_80287DC4(c); // 803D3EEC
  c->r[3]=0u+0x00000000u; // 803D3EF0
  c->r[4]=0u+0x00000000u; // 803D3EF4
  c->r[5]=0u+0x00000001u; // 803D3EF8
  c->r[6]=0u+0x00000002u; // 803D3EFC
  c->r[7]=0u+0x00000003u; // 803D3F00
  c->lr=0x803D3F08u; f_80287B04(c); // 803D3F04
  c->r[3]=0u+0x00000000u; // 803D3F08
  c->r[4]=0u+0x00000011u; // 803D3F0C
  c->r[5]=0u+0x00000000u; // 803D3F10
  c->lr=0x803D3F18u; f_80287BB8(c); // 803D3F14
  c->r[3]=0u+0x00000001u; // 803D3F18
  c->lr=0x803D3F20u; f_80286190(c); // 803D3F1C
  c->r[3]=0u+0x00000004u; // 803D3F20
  c->r[4]=0u+0x00000000u; // 803D3F24
  c->r[5]=0u+0x00000000u; // 803D3F28
  c->r[6]=0u+0x00000001u; // 803D3F2C
  c->r[7]=0u+0x00000000u; // 803D3F30
  c->r[8]=0u+0x00000000u; // 803D3F34
  c->r[9]=0u+0x00000002u; // 803D3F38
  c->lr=0x803D3F40u; f_802861B4(c); // 803D3F3C
  c->r[3]=0u+0x00000005u; // 803D3F40
  c->r[4]=0u+0x00000000u; // 803D3F44
  c->r[5]=0u+0x00000000u; // 803D3F48
  c->r[6]=0u+0x00000000u; // 803D3F4C
  c->r[7]=0u+0x00000000u; // 803D3F50
  c->r[8]=0u+0x00000000u; // 803D3F54
  c->r[9]=0u+0x00000002u; // 803D3F58
  c->lr=0x803D3F60u; f_802861B4(c); // 803D3F5C
  c->r[3]=0u+0x00000001u; // 803D3F60
  c->lr=0x803D3F68u; f_80284454(c); // 803D3F64
  c->r[3]=0u+0x00000000u; // 803D3F68
  c->r[4]=0u+0x00000001u; // 803D3F6C
  c->r[5]=0u+0x00000004u; // 803D3F70
  c->r[6]=0u+0x0000003Cu; // 803D3F74
  c->r[7]=0u+0x00000000u; // 803D3F78
  c->r[8]=0u+0x0000007Du; // 803D3F7C
  c->lr=0x803D3F84u; f_8028422C(c); // 803D3F80
  c->r[3]=0u+0x00000000u; // 803D3F84
  c->lr=0x803D3F8Cu; f_80287630(c); // 803D3F88
  c->r[3]=0u+0x00000001u; // 803D3F8C
  c->r[4]=0u+0x00000004u; // 803D3F90
  c->r[5]=0u+0x00000005u; // 803D3F94
  c->r[6]=0u+0x0000000Fu; // 803D3F98
  c->lr=0x803D3FA0u; f_80288274(c); // 803D3F9C
  c->r[3]=0u+0x00000001u; // 803D3FA0
  c->lr=0x803D3FA8u; f_80287DA0(c); // 803D3FA4
  c->r[3]=0u+0x00000000u; // 803D3FA8
  c->lr=0x803D3FB0u; f_80287650(c); // 803D3FAC
  c->r[3]=0u+0x00000000u; // 803D3FB0
  c->r[4]=0u+0x00000000u; // 803D3FB4
  c->r[5]=0u+0x00000000u; // 803D3FB8
  c->lr=0x803D3FC0u; f_80287AC8(c); // 803D3FBC
  c->r[3]=0u+0x00000000u; // 803D3FC0
  c->r[4]=0u+0x00000000u; // 803D3FC4
  c->r[5]=0u+0x00000000u; // 803D3FC8
  c->r[6]=0u+0x00000004u; // 803D3FCC
  c->lr=0x803D3FD4u; f_80287C44(c); // 803D3FD0
  c->r[3]=0u+0x00000000u; // 803D3FD4
  c->r[4]=0u+0x0000000Fu; // 803D3FD8
  c->r[5]=0u+0x0000000Fu; // 803D3FDC
  c->r[6]=0u+0x0000000Fu; // 803D3FE0
  c->r[7]=0u+0x0000000Au; // 803D3FE4
  c->lr=0x803D3FECu; f_802877D8(c); // 803D3FE8
  c->r[3]=0u+0x00000000u; // 803D3FEC
  c->r[4]=0u+0x00000007u; // 803D3FF0
  c->r[5]=0u+0x00000004u; // 803D3FF4
  c->r[6]=0u+0x00000005u; // 803D3FF8
  c->r[7]=0u+0x00000007u; // 803D3FFC
  c->lr=0x803D4004u; f_80287818(c); // 803D4000
  c->r[3]=0u+0x00000000u; // 803D4004
  c->r[4]=0u+0x00000000u; // 803D4008
  c->r[5]=0u+0x00000000u; // 803D400C
  c->r[6]=0u+0x00000000u; // 803D4010
  c->r[7]=0u+0x00000001u; // 803D4014
  c->r[8]=0u+0x00000000u; // 803D4018
  c->lr=0x803D4020u; f_80287858(c); // 803D401C
  c->r[3]=0u+0x00000000u; // 803D4020
  c->r[4]=0u+0x00000000u; // 803D4024
  c->r[5]=0u+0x00000000u; // 803D4028
  c->r[6]=0u+0x00000000u; // 803D402C
  c->r[7]=0u+0x00000001u; // 803D4030
  c->r[8]=0u+0x00000000u; // 803D4034
  c->lr=0x803D403Cu; f_802878B0(c); // 803D4038
  c->r[3]=0u+0x00000000u; // 803D403C
  c->r[4]=0u+0x00000009u; // 803D4040
  c->r[5]=0u+0x00000001u; // 803D4044
  c->r[6]=0u+0x00000004u; // 803D4048
  c->r[7]=0u+0x00000000u; // 803D404C
  c->lr=0x803D4054u; f_80283B8C(c); // 803D4050
  c->r[3]=0u+0x00000000u; // 803D4054
  c->r[4]=0u+0x0000000Bu; // 803D4058
  c->r[5]=0u+0x00000001u; // 803D405C
  c->r[6]=0u+0x00000005u; // 803D4060
  c->r[7]=0u+0x00000000u; // 803D4064
  c->lr=0x803D406Cu; f_80283B8C(c); // 803D4068
  c->r[3]=0u+0x00000000u; // 803D406C
  c->r[4]=0u+0x0000000Du; // 803D4070
  c->r[5]=0u+0x00000001u; // 803D4074
  c->r[6]=0u+0x00000002u; // 803D4078
  c->r[7]=0u+0x0000000Fu; // 803D407C
  c->lr=0x803D4084u; f_80283B8C(c); // 803D4080
  c->lr=0x803D4088u; f_80283B58(c); // 803D4084
  c->r[3]=0u+0x00000009u; // 803D4088
  c->r[4]=0u+0x00000001u; // 803D408C
  c->lr=0x803D4094u; f_80283564(c); // 803D4090
  c->r[3]=0u+0x0000000Bu; // 803D4094
  c->r[4]=0u+0x00000001u; // 803D4098
  c->lr=0x803D40A0u; f_80283564(c); // 803D409C
  c->r[3]=0u+0x0000000Du; // 803D40A0
  c->r[4]=0u+0x00000001u; // 803D40A4
  c->lr=0x803D40ACu; f_80283564(c); // 803D40A8
  goto L_803D4800; // 803D40AC
L_803D40B0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 803D40B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D40B4
  if (!crb(c,2)) { goto L_803D40DC; } // 803D40B8
  c->r[4]=0u+0x803D0000u; // 803D40BC
  W32(c->r[31]+0x00000010u,c->r[30]); // 803D40C0
  c->r[3]=c->r[31]+0x00000010u; // 803D40C4
  c->r[5]=c->r[31]+0x00000004u; // 803D40C8
  c->r[4]=c->r[4]+0xFFFF9398u; // 803D40CC
  c->lr=0x803D40D4u; f_802895A4(c); // 803D40D0
  c->r[0]=0u+0x00000001u; // 803D40D4
  W8(c->r[31]+0x00000000u,c->r[0]); // 803D40D8
L_803D40DC:;
  c->r[3]=0u+0x803F0000u; // 803D40DC
  c->r[6]=c->r[31]+0x00000010u; // 803D40E0
  {uint32_t ea=c->r[3]+0x00000F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D40E4
  c->r[4]=c->r[1]+0x00000014u; // 803D40E8
  c->r[3]=R8(c->r[31]+0x00000010u); // 803D40EC
  c->r[7]=R8(c->r[6]+0x00000001u); // 803D40F0
  c->f[2]=c->f[1]; // 803D40F4
  c->r[5]=R8(c->r[6]+0x00000002u); // 803D40F8
  c->f[3]=c->f[1]; // 803D40FC
  c->r[0]=R8(c->r[6]+0x00000003u); // 803D4100
  c->f[4]=c->f[1]; // 803D4104
  W8(c->r[1]+0x00000014u,c->r[3]); // 803D4108
  c->r[3]=0u+0x00000000u; // 803D410C
  W8(c->r[1]+0x00000015u,c->r[7]); // 803D4110
  W8(c->r[1]+0x00000016u,c->r[5]); // 803D4114
  W8(c->r[1]+0x00000017u,c->r[0]); // 803D4118
  c->lr=0x803D4120u; f_80287DC4(c); // 803D411C
  c->r[3]=0u+0x00000000u; // 803D4120
  c->r[4]=0u+0x00000000u; // 803D4124
  c->r[5]=0u+0x00000001u; // 803D4128
  c->r[6]=0u+0x00000002u; // 803D412C
  c->r[7]=0u+0x00000003u; // 803D4130
  c->lr=0x803D4138u; f_80287B04(c); // 803D4134
  c->r[3]=0u+0x00000000u; // 803D4138
  c->r[4]=0u+0x00000011u; // 803D413C
  c->r[5]=0u+0x00000000u; // 803D4140
  c->lr=0x803D4148u; f_80287BB8(c); // 803D4144
  c->r[3]=0u+0x00000001u; // 803D4148
  c->lr=0x803D4150u; f_80286190(c); // 803D414C
  c->r[3]=0u+0x00000004u; // 803D4150
  c->r[4]=0u+0x00000000u; // 803D4154
  c->r[5]=0u+0x00000000u; // 803D4158
  c->r[6]=0u+0x00000001u; // 803D415C
  c->r[7]=0u+0x00000000u; // 803D4160
  c->r[8]=0u+0x00000000u; // 803D4164
  c->r[9]=0u+0x00000002u; // 803D4168
  c->lr=0x803D4170u; f_802861B4(c); // 803D416C
  c->r[3]=0u+0x00000005u; // 803D4170
  c->r[4]=0u+0x00000000u; // 803D4174
  c->r[5]=0u+0x00000000u; // 803D4178
  c->r[6]=0u+0x00000000u; // 803D417C
  c->r[7]=0u+0x00000000u; // 803D4180
  c->r[8]=0u+0x00000000u; // 803D4184
  c->r[9]=0u+0x00000002u; // 803D4188
  c->lr=0x803D4190u; f_802861B4(c); // 803D418C
  c->r[3]=0u+0x00000001u; // 803D4190
  c->lr=0x803D4198u; f_80284454(c); // 803D4194
  c->r[3]=0u+0x00000000u; // 803D4198
  c->r[4]=0u+0x00000001u; // 803D419C
  c->r[5]=0u+0x00000004u; // 803D41A0
  c->r[6]=0u+0x0000003Cu; // 803D41A4
  c->r[7]=0u+0x00000000u; // 803D41A8
  c->r[8]=0u+0x0000007Du; // 803D41AC
  c->lr=0x803D41B4u; f_8028422C(c); // 803D41B0
  c->r[3]=0u+0x00000000u; // 803D41B4
  c->lr=0x803D41BCu; f_80287630(c); // 803D41B8
  c->r[3]=0u+0x00000001u; // 803D41BC
  c->r[4]=0u+0x00000004u; // 803D41C0
  c->r[5]=0u+0x00000005u; // 803D41C4
  c->r[6]=0u+0x0000000Fu; // 803D41C8
  c->lr=0x803D41D0u; f_80288274(c); // 803D41CC
  c->r[3]=0u+0x00000001u; // 803D41D0
  c->lr=0x803D41D8u; f_80287DA0(c); // 803D41D4
  c->r[3]=0u+0x00000000u; // 803D41D8
  c->lr=0x803D41E0u; f_80287650(c); // 803D41DC
  c->r[3]=0u+0x00000000u; // 803D41E0
  c->r[4]=0u+0x00000000u; // 803D41E4
  c->r[5]=0u+0x00000000u; // 803D41E8
  c->lr=0x803D41F0u; f_80287AC8(c); // 803D41EC
  c->r[3]=0u+0x00000000u; // 803D41F0
  c->r[4]=0u+0x00000000u; // 803D41F4
  c->r[5]=0u+0x00000000u; // 803D41F8
  c->r[6]=0u+0x00000004u; // 803D41FC
  c->lr=0x803D4204u; f_80287C44(c); // 803D4200
  c->r[3]=0u+0x00000000u; // 803D4204
  c->r[4]=0u+0x00000000u; // 803D4208
  c->lr=0x803D4210u; f_80287744(c); // 803D420C
  c->r[3]=0u+0x00000000u; // 803D4210
  c->r[4]=0u+0x00000009u; // 803D4214
  c->r[5]=0u+0x00000001u; // 803D4218
  c->r[6]=0u+0x00000004u; // 803D421C
  c->r[7]=0u+0x00000000u; // 803D4220
  c->lr=0x803D4228u; f_80283B8C(c); // 803D4224
  c->r[3]=0u+0x00000000u; // 803D4228
  c->r[4]=0u+0x0000000Bu; // 803D422C
  c->r[5]=0u+0x00000001u; // 803D4230
  c->r[6]=0u+0x00000005u; // 803D4234
  c->r[7]=0u+0x00000000u; // 803D4238
  c->lr=0x803D4240u; f_80283B8C(c); // 803D423C
  c->r[3]=0u+0x00000000u; // 803D4240
  c->r[4]=0u+0x0000000Du; // 803D4244
  c->r[5]=0u+0x00000001u; // 803D4248
  c->r[6]=0u+0x00000002u; // 803D424C
  c->r[7]=0u+0x0000000Fu; // 803D4250
  c->lr=0x803D4258u; f_80283B8C(c); // 803D4254
  c->lr=0x803D425Cu; f_80283B58(c); // 803D4258
  c->r[3]=0u+0x00000009u; // 803D425C
  c->r[4]=0u+0x00000001u; // 803D4260
  c->lr=0x803D4268u; f_80283564(c); // 803D4264
  c->r[3]=0u+0x0000000Bu; // 803D4268
  c->r[4]=0u+0x00000001u; // 803D426C
  c->lr=0x803D4274u; f_80283564(c); // 803D4270
  c->r[3]=0u+0x0000000Du; // 803D4274
  c->r[4]=0u+0x00000001u; // 803D4278
  c->lr=0x803D4280u; f_80283564(c); // 803D427C
  goto L_803D4800; // 803D4280
L_803D4284:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 803D4284
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D4288
  if (!crb(c,2)) { goto L_803D42B0; } // 803D428C
  c->r[4]=0u+0x803D0000u; // 803D4290
  W32(c->r[31]+0x00000010u,c->r[30]); // 803D4294
  c->r[3]=c->r[31]+0x00000010u; // 803D4298
  c->r[5]=c->r[31]+0x00000004u; // 803D429C
  c->r[4]=c->r[4]+0xFFFF9398u; // 803D42A0
  c->lr=0x803D42A8u; f_802895A4(c); // 803D42A4
  c->r[0]=0u+0x00000001u; // 803D42A8
  W8(c->r[31]+0x00000000u,c->r[0]); // 803D42AC
L_803D42B0:;
  c->r[3]=0u+0x803F0000u; // 803D42B0
  c->r[6]=c->r[31]+0x00000010u; // 803D42B4
  {uint32_t ea=c->r[3]+0x00000F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D42B8
  c->r[4]=c->r[1]+0x00000010u; // 803D42BC
  c->r[3]=R8(c->r[31]+0x00000010u); // 803D42C0
  c->r[7]=R8(c->r[6]+0x00000001u); // 803D42C4
  c->f[2]=c->f[1]; // 803D42C8
  c->r[5]=R8(c->r[6]+0x00000002u); // 803D42CC
  c->f[3]=c->f[1]; // 803D42D0
  c->r[0]=R8(c->r[6]+0x00000003u); // 803D42D4
  c->f[4]=c->f[1]; // 803D42D8
  W8(c->r[1]+0x00000010u,c->r[3]); // 803D42DC
  c->r[3]=0u+0x00000000u; // 803D42E0
  W8(c->r[1]+0x00000011u,c->r[7]); // 803D42E4
  W8(c->r[1]+0x00000012u,c->r[5]); // 803D42E8
  W8(c->r[1]+0x00000013u,c->r[0]); // 803D42EC
  c->lr=0x803D42F4u; f_80287DC4(c); // 803D42F0
  c->r[3]=0u+0x00000000u; // 803D42F4
  c->r[4]=0u+0x00000000u; // 803D42F8
  c->r[5]=0u+0x00000001u; // 803D42FC
  c->r[6]=0u+0x00000002u; // 803D4300
  c->r[7]=0u+0x00000003u; // 803D4304
  c->lr=0x803D430Cu; f_80287B04(c); // 803D4308
  c->r[3]=0u+0x00000000u; // 803D430C
  c->r[4]=0u+0x00000011u; // 803D4310
  c->r[5]=0u+0x00000000u; // 803D4314
  c->lr=0x803D431Cu; f_80287BB8(c); // 803D4318
  c->r[3]=0u+0x00000001u; // 803D431C
  c->lr=0x803D4324u; f_80286190(c); // 803D4320
  c->r[3]=0u+0x00000004u; // 803D4324
  c->r[4]=0u+0x00000000u; // 803D4328
  c->r[5]=0u+0x00000000u; // 803D432C
  c->r[6]=0u+0x00000001u; // 803D4330
  c->r[7]=0u+0x00000000u; // 803D4334
  c->r[8]=0u+0x00000000u; // 803D4338
  c->r[9]=0u+0x00000002u; // 803D433C
  c->lr=0x803D4344u; f_802861B4(c); // 803D4340
  c->r[3]=0u+0x00000005u; // 803D4344
  c->r[4]=0u+0x00000000u; // 803D4348
  c->r[5]=0u+0x00000000u; // 803D434C
  c->r[6]=0u+0x00000000u; // 803D4350
  c->r[7]=0u+0x00000000u; // 803D4354
  c->r[8]=0u+0x00000000u; // 803D4358
  c->r[9]=0u+0x00000002u; // 803D435C
  c->lr=0x803D4364u; f_802861B4(c); // 803D4360
  c->r[3]=0u+0x00000001u; // 803D4364
  c->lr=0x803D436Cu; f_80284454(c); // 803D4368
  c->r[3]=0u+0x00000000u; // 803D436C
  c->r[4]=0u+0x00000001u; // 803D4370
  c->r[5]=0u+0x00000004u; // 803D4374
  c->r[6]=0u+0x0000003Cu; // 803D4378
  c->r[7]=0u+0x00000000u; // 803D437C
  c->r[8]=0u+0x0000007Du; // 803D4380
  c->lr=0x803D4388u; f_8028422C(c); // 803D4384
  c->r[3]=0u+0x00000000u; // 803D4388
  c->lr=0x803D4390u; f_80287630(c); // 803D438C
  c->r[3]=0u+0x00000001u; // 803D4390
  c->r[4]=0u+0x00000004u; // 803D4394
  c->r[5]=0u+0x00000005u; // 803D4398
  c->r[6]=0u+0x0000000Fu; // 803D439C
  c->lr=0x803D43A4u; f_80288274(c); // 803D43A0
  c->r[3]=0u+0x00000001u; // 803D43A4
  c->lr=0x803D43ACu; f_80287DA0(c); // 803D43A8
  c->r[3]=0u+0x00000000u; // 803D43AC
  c->lr=0x803D43B4u; f_80287650(c); // 803D43B0
  c->r[3]=0u+0x00000000u; // 803D43B4
  c->r[4]=0u+0x00000000u; // 803D43B8
  c->r[5]=0u+0x00000000u; // 803D43BC
  c->lr=0x803D43C4u; f_80287AC8(c); // 803D43C0
  c->r[3]=0u+0x00000000u; // 803D43C4
  c->r[4]=0u+0x00000000u; // 803D43C8
  c->r[5]=0u+0x00000000u; // 803D43CC
  c->r[6]=0u+0x00000004u; // 803D43D0
  c->lr=0x803D43D8u; f_80287C44(c); // 803D43D4
  c->r[3]=0u+0x00000000u; // 803D43D8
  c->r[4]=0u+0x00000000u; // 803D43DC
  c->lr=0x803D43E4u; f_80287744(c); // 803D43E0
  c->r[3]=0u+0x00000000u; // 803D43E4
  c->r[4]=0u+0x00000009u; // 803D43E8
  c->r[5]=0u+0x00000001u; // 803D43EC
  c->r[6]=0u+0x00000004u; // 803D43F0
  c->r[7]=0u+0x00000000u; // 803D43F4
  c->lr=0x803D43FCu; f_80283B8C(c); // 803D43F8
  c->r[3]=0u+0x00000000u; // 803D43FC
  c->r[4]=0u+0x0000000Bu; // 803D4400
  c->r[5]=0u+0x00000001u; // 803D4404
  c->r[6]=0u+0x00000005u; // 803D4408
  c->r[7]=0u+0x00000000u; // 803D440C
  c->lr=0x803D4414u; f_80283B8C(c); // 803D4410
  c->r[3]=0u+0x00000000u; // 803D4414
  c->r[4]=0u+0x0000000Du; // 803D4418
  c->r[5]=0u+0x00000001u; // 803D441C
  c->r[6]=0u+0x00000002u; // 803D4420
  c->r[7]=0u+0x0000000Fu; // 803D4424
  c->lr=0x803D442Cu; f_80283B8C(c); // 803D4428
  c->lr=0x803D4430u; f_80283B58(c); // 803D442C
  c->r[3]=0u+0x00000009u; // 803D4430
  c->r[4]=0u+0x00000001u; // 803D4434
  c->lr=0x803D443Cu; f_80283564(c); // 803D4438
  c->r[3]=0u+0x0000000Bu; // 803D443C
  c->r[4]=0u+0x00000001u; // 803D4440
  c->lr=0x803D4448u; f_80283564(c); // 803D4444
  c->r[3]=0u+0x0000000Du; // 803D4448
  c->r[4]=0u+0x00000001u; // 803D444C
  c->lr=0x803D4454u; f_80283564(c); // 803D4450
  goto L_803D4800; // 803D4454
L_803D4458:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 803D4458
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D445C
  if (!crb(c,2)) { goto L_803D4488; } // 803D4460
  c->r[0]=0u+0x00000000u; // 803D4464
  c->r[4]=0u+0x803D0000u; // 803D4468
  W32(c->r[31]+0x00000010u,c->r[0]); // 803D446C
  c->r[3]=c->r[31]+0x00000010u; // 803D4470
  c->r[4]=c->r[4]+0xFFFF9398u; // 803D4474
  c->r[5]=c->r[31]+0x00000004u; // 803D4478
  c->lr=0x803D4480u; f_802895A4(c); // 803D447C
  c->r[0]=0u+0x00000001u; // 803D4480
  W8(c->r[31]+0x00000000u,c->r[0]); // 803D4484
L_803D4488:;
  c->r[3]=0u+0x803F0000u; // 803D4488
  c->r[6]=c->r[31]+0x00000010u; // 803D448C
  {uint32_t ea=c->r[3]+0x00000F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D4490
  c->r[4]=c->r[1]+0x0000000Cu; // 803D4494
  c->r[3]=R8(c->r[31]+0x00000010u); // 803D4498
  c->r[7]=R8(c->r[6]+0x00000001u); // 803D449C
  c->f[2]=c->f[1]; // 803D44A0
  c->r[5]=R8(c->r[6]+0x00000002u); // 803D44A4
  c->f[3]=c->f[1]; // 803D44A8
  c->r[0]=R8(c->r[6]+0x00000003u); // 803D44AC
  c->f[4]=c->f[1]; // 803D44B0
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 803D44B4
  c->r[3]=0u+0x00000000u; // 803D44B8
  W8(c->r[1]+0x0000000Du,c->r[7]); // 803D44BC
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 803D44C0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D44C4
  c->lr=0x803D44CCu; f_80287DC4(c); // 803D44C8
  c->r[3]=0u+0x00000000u; // 803D44CC
  c->r[4]=0u+0x00000000u; // 803D44D0
  c->r[5]=0u+0x00000001u; // 803D44D4
  c->r[6]=0u+0x00000002u; // 803D44D8
  c->r[7]=0u+0x00000003u; // 803D44DC
  c->lr=0x803D44E4u; f_80287B04(c); // 803D44E0
  c->r[3]=0u+0x00000000u; // 803D44E4
  c->r[4]=0u+0x00000011u; // 803D44E8
  c->r[5]=0u+0x00000000u; // 803D44EC
  c->lr=0x803D44F4u; f_80287BB8(c); // 803D44F0
  c->r[3]=0u+0x00000001u; // 803D44F4
  c->lr=0x803D44FCu; f_80286190(c); // 803D44F8
  c->r[3]=0u+0x00000004u; // 803D44FC
  c->r[4]=0u+0x00000000u; // 803D4500
  c->r[5]=0u+0x00000000u; // 803D4504
  c->r[6]=0u+0x00000001u; // 803D4508
  c->r[7]=0u+0x00000000u; // 803D450C
  c->r[8]=0u+0x00000000u; // 803D4510
  c->r[9]=0u+0x00000002u; // 803D4514
  c->lr=0x803D451Cu; f_802861B4(c); // 803D4518
  c->r[3]=0u+0x00000005u; // 803D451C
  c->r[4]=0u+0x00000000u; // 803D4520
  c->r[5]=0u+0x00000000u; // 803D4524
  c->r[6]=0u+0x00000000u; // 803D4528
  c->r[7]=0u+0x00000000u; // 803D452C
  c->r[8]=0u+0x00000000u; // 803D4530
  c->r[9]=0u+0x00000002u; // 803D4534
  c->lr=0x803D453Cu; f_802861B4(c); // 803D4538
  c->r[3]=0u+0x00000001u; // 803D453C
  c->lr=0x803D4544u; f_80284454(c); // 803D4540
  c->r[3]=0u+0x00000000u; // 803D4544
  c->r[4]=0u+0x00000001u; // 803D4548
  c->r[5]=0u+0x00000004u; // 803D454C
  c->r[6]=0u+0x0000003Cu; // 803D4550
  c->r[7]=0u+0x00000000u; // 803D4554
  c->r[8]=0u+0x0000007Du; // 803D4558
  c->lr=0x803D4560u; f_8028422C(c); // 803D455C
  c->r[3]=0u+0x00000000u; // 803D4560
  c->lr=0x803D4568u; f_80287630(c); // 803D4564
  c->r[3]=0u+0x00000001u; // 803D4568
  c->r[4]=0u+0x00000004u; // 803D456C
  c->r[5]=0u+0x00000005u; // 803D4570
  c->r[6]=0u+0x0000000Fu; // 803D4574
  c->lr=0x803D457Cu; f_80288274(c); // 803D4578
  c->r[3]=0u+0x00000001u; // 803D457C
  c->lr=0x803D4584u; f_80287DA0(c); // 803D4580
  c->r[3]=0u+0x00000000u; // 803D4584
  c->lr=0x803D458Cu; f_80287650(c); // 803D4588
  c->r[3]=0u+0x00000000u; // 803D458C
  c->r[4]=0u+0x00000000u; // 803D4590
  c->r[5]=0u+0x00000000u; // 803D4594
  c->lr=0x803D459Cu; f_80287AC8(c); // 803D4598
  c->r[3]=0u+0x00000000u; // 803D459C
  c->r[4]=0u+0x00000000u; // 803D45A0
  c->r[5]=0u+0x00000000u; // 803D45A4
  c->r[6]=0u+0x00000004u; // 803D45A8
  c->lr=0x803D45B0u; f_80287C44(c); // 803D45AC
  c->r[3]=0u+0x00000000u; // 803D45B0
  c->r[4]=0u+0x00000000u; // 803D45B4
  c->lr=0x803D45BCu; f_80287744(c); // 803D45B8
  c->r[3]=0u+0x00000000u; // 803D45BC
  c->r[4]=0u+0x00000009u; // 803D45C0
  c->r[5]=0u+0x00000001u; // 803D45C4
  c->r[6]=0u+0x00000004u; // 803D45C8
  c->r[7]=0u+0x00000000u; // 803D45CC
  c->lr=0x803D45D4u; f_80283B8C(c); // 803D45D0
  c->r[3]=0u+0x00000000u; // 803D45D4
  c->r[4]=0u+0x0000000Bu; // 803D45D8
  c->r[5]=0u+0x00000001u; // 803D45DC
  c->r[6]=0u+0x00000005u; // 803D45E0
  c->r[7]=0u+0x00000000u; // 803D45E4
  c->lr=0x803D45ECu; f_80283B8C(c); // 803D45E8
  c->r[3]=0u+0x00000000u; // 803D45EC
  c->r[4]=0u+0x0000000Du; // 803D45F0
  c->r[5]=0u+0x00000001u; // 803D45F4
  c->r[6]=0u+0x00000002u; // 803D45F8
  c->r[7]=0u+0x0000000Fu; // 803D45FC
  c->lr=0x803D4604u; f_80283B8C(c); // 803D4600
  c->lr=0x803D4608u; f_80283B58(c); // 803D4604
  c->r[3]=0u+0x00000009u; // 803D4608
  c->r[4]=0u+0x00000001u; // 803D460C
  c->lr=0x803D4614u; f_80283564(c); // 803D4610
  c->r[3]=0u+0x0000000Bu; // 803D4614
  c->r[4]=0u+0x00000001u; // 803D4618
  c->lr=0x803D4620u; f_80283564(c); // 803D461C
  c->r[3]=0u+0x0000000Du; // 803D4620
  c->r[4]=0u+0x00000001u; // 803D4624
  c->lr=0x803D462Cu; f_80283564(c); // 803D4628
  goto L_803D4800; // 803D462C
L_803D4630:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 803D4630
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D4634
  if (!crb(c,2)) { goto L_803D465C; } // 803D4638
  c->r[4]=0u+0x803D0000u; // 803D463C
  W32(c->r[31]+0x00000010u,c->r[30]); // 803D4640
  c->r[3]=c->r[31]+0x00000010u; // 803D4644
  c->r[5]=c->r[31]+0x00000004u; // 803D4648
  c->r[4]=c->r[4]+0xFFFF9398u; // 803D464C
  c->lr=0x803D4654u; f_802895A4(c); // 803D4650
  c->r[0]=0u+0x00000001u; // 803D4654
  W8(c->r[31]+0x00000000u,c->r[0]); // 803D4658
L_803D465C:;
  c->r[3]=0u+0x803F0000u; // 803D465C
  c->r[6]=c->r[31]+0x00000010u; // 803D4660
  {uint32_t ea=c->r[3]+0x00000F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D4664
  c->r[4]=c->r[1]+0x00000008u; // 803D4668
  c->r[3]=R8(c->r[31]+0x00000010u); // 803D466C
  c->r[7]=R8(c->r[6]+0x00000001u); // 803D4670
  c->f[2]=c->f[1]; // 803D4674
  c->r[5]=R8(c->r[6]+0x00000002u); // 803D4678
  c->f[3]=c->f[1]; // 803D467C
  c->r[0]=R8(c->r[6]+0x00000003u); // 803D4680
  c->f[4]=c->f[1]; // 803D4684
  W8(c->r[1]+0x00000008u,c->r[3]); // 803D4688
  c->r[3]=0u+0x00000000u; // 803D468C
  W8(c->r[1]+0x00000009u,c->r[7]); // 803D4690
  W8(c->r[1]+0x0000000Au,c->r[5]); // 803D4694
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803D4698
  c->lr=0x803D46A0u; f_80287DC4(c); // 803D469C
  c->r[3]=0u+0x00000000u; // 803D46A0
  c->r[4]=0u+0x00000000u; // 803D46A4
  c->r[5]=0u+0x00000001u; // 803D46A8
  c->r[6]=0u+0x00000002u; // 803D46AC
  c->r[7]=0u+0x00000003u; // 803D46B0
  c->lr=0x803D46B8u; f_80287B04(c); // 803D46B4
  c->r[3]=0u+0x00000000u; // 803D46B8
  c->r[4]=0u+0x00000011u; // 803D46BC
  c->r[5]=0u+0x00000000u; // 803D46C0
  c->lr=0x803D46C8u; f_80287BB8(c); // 803D46C4
  c->r[3]=0u+0x00000001u; // 803D46C8
  c->lr=0x803D46D0u; f_80286190(c); // 803D46CC
  c->r[3]=0u+0x00000004u; // 803D46D0
  c->r[4]=0u+0x00000000u; // 803D46D4
  c->r[5]=0u+0x00000000u; // 803D46D8
  c->r[6]=0u+0x00000001u; // 803D46DC
  c->r[7]=0u+0x00000000u; // 803D46E0
  c->r[8]=0u+0x00000000u; // 803D46E4
  c->r[9]=0u+0x00000002u; // 803D46E8
  c->lr=0x803D46F0u; f_802861B4(c); // 803D46EC
  c->r[3]=0u+0x00000005u; // 803D46F0
  c->r[4]=0u+0x00000000u; // 803D46F4
  c->r[5]=0u+0x00000000u; // 803D46F8
  c->r[6]=0u+0x00000000u; // 803D46FC
  c->r[7]=0u+0x00000000u; // 803D4700
  c->r[8]=0u+0x00000000u; // 803D4704
  c->r[9]=0u+0x00000002u; // 803D4708
  c->lr=0x803D4710u; f_802861B4(c); // 803D470C
  c->r[3]=0u+0x00000001u; // 803D4710
  c->lr=0x803D4718u; f_80284454(c); // 803D4714
  c->r[3]=0u+0x00000000u; // 803D4718
  c->r[4]=0u+0x00000001u; // 803D471C
  c->r[5]=0u+0x00000004u; // 803D4720
  c->r[6]=0u+0x0000003Cu; // 803D4724
  c->r[7]=0u+0x00000000u; // 803D4728
  c->r[8]=0u+0x0000007Du; // 803D472C
  c->lr=0x803D4734u; f_8028422C(c); // 803D4730
  c->r[3]=0u+0x00000000u; // 803D4734
  c->lr=0x803D473Cu; f_80287630(c); // 803D4738
  c->r[3]=0u+0x00000001u; // 803D473C
  c->r[4]=0u+0x00000004u; // 803D4740
  c->r[5]=0u+0x00000005u; // 803D4744
  c->r[6]=0u+0x0000000Fu; // 803D4748
  c->lr=0x803D4750u; f_80288274(c); // 803D474C
  c->r[3]=0u+0x00000001u; // 803D4750
  c->lr=0x803D4758u; f_80287DA0(c); // 803D4754
  c->r[3]=0u+0x00000000u; // 803D4758
  c->lr=0x803D4760u; f_80287650(c); // 803D475C
  c->r[3]=0u+0x00000000u; // 803D4760
  c->r[4]=0u+0x00000000u; // 803D4764
  c->r[5]=0u+0x00000000u; // 803D4768
  c->lr=0x803D4770u; f_80287AC8(c); // 803D476C
  c->r[3]=0u+0x00000000u; // 803D4770
  c->r[4]=0u+0x00000000u; // 803D4774
  c->r[5]=0u+0x00000000u; // 803D4778
  c->r[6]=0u+0x00000004u; // 803D477C
  c->lr=0x803D4784u; f_80287C44(c); // 803D4780
  c->r[3]=0u+0x00000000u; // 803D4784
  c->r[4]=0u+0x00000000u; // 803D4788
  c->lr=0x803D4790u; f_80287744(c); // 803D478C
  c->r[3]=0u+0x00000000u; // 803D4790
  c->r[4]=0u+0x00000009u; // 803D4794
  c->r[5]=0u+0x00000001u; // 803D4798
  c->r[6]=0u+0x00000004u; // 803D479C
  c->r[7]=0u+0x00000000u; // 803D47A0
  c->lr=0x803D47A8u; f_80283B8C(c); // 803D47A4
  c->r[3]=0u+0x00000000u; // 803D47A8
  c->r[4]=0u+0x0000000Bu; // 803D47AC
  c->r[5]=0u+0x00000001u; // 803D47B0
  c->r[6]=0u+0x00000005u; // 803D47B4
  c->r[7]=0u+0x00000000u; // 803D47B8
  c->lr=0x803D47C0u; f_80283B8C(c); // 803D47BC
  c->r[3]=0u+0x00000000u; // 803D47C0
  c->r[4]=0u+0x0000000Du; // 803D47C4
  c->r[5]=0u+0x00000001u; // 803D47C8
  c->r[6]=0u+0x00000002u; // 803D47CC
  c->r[7]=0u+0x0000000Fu; // 803D47D0
  c->lr=0x803D47D8u; f_80283B8C(c); // 803D47D4
  c->lr=0x803D47DCu; f_80283B58(c); // 803D47D8
  c->r[3]=0u+0x00000009u; // 803D47DC
  c->r[4]=0u+0x00000001u; // 803D47E0
  c->lr=0x803D47E8u; f_80283564(c); // 803D47E4
  c->r[3]=0u+0x0000000Bu; // 803D47E8
  c->r[4]=0u+0x00000001u; // 803D47EC
  c->lr=0x803D47F4u; f_80283564(c); // 803D47F0
  c->r[3]=0u+0x0000000Du; // 803D47F4
  c->r[4]=0u+0x00000001u; // 803D47F8
  c->lr=0x803D4800u; f_80283564(c); // 803D47FC
L_803D4800:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D4800
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D4804
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D4808
  c->lr=c->r[0]; // 803D480C
  c->r[1]=c->r[1]+0x00000030u; // 803D4810
  return; // 803D4814
}

// SetColorMapping__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5ColorQ36nw4hbm2ut5Color
void f_803D4818(Ctx* __restrict c) {
  trace_call(0x803D4818u);
  c->r[11]=R8(c->r[4]+0x00000000u); // 803D4818
  c->r[10]=R8(c->r[4]+0x00000001u); // 803D481C
  c->r[9]=R8(c->r[4]+0x00000002u); // 803D4820
  c->r[8]=R8(c->r[4]+0x00000003u); // 803D4824
  c->r[7]=R8(c->r[5]+0x00000000u); // 803D4828
  c->r[6]=R8(c->r[5]+0x00000001u); // 803D482C
  c->r[4]=R8(c->r[5]+0x00000002u); // 803D4830
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D4834
  W8(c->r[3]+0x00000000u,c->r[11]); // 803D4838
  W8(c->r[3]+0x00000001u,c->r[10]); // 803D483C
  W8(c->r[3]+0x00000002u,c->r[9]); // 803D4840
  W8(c->r[3]+0x00000003u,c->r[8]); // 803D4844
  W8(c->r[3]+0x00000004u,c->r[7]); // 803D4848
  W8(c->r[3]+0x00000005u,c->r[6]); // 803D484C
  W8(c->r[3]+0x00000006u,c->r[4]); // 803D4850
  W8(c->r[3]+0x00000007u,c->r[0]); // 803D4854
  return; // 803D4858
}

// SetGradationMode__Q36nw4hbm2ut10CharWriterFQ46nw4hbm2ut10CharWriter13GradationMode
void f_803D485C(Ctx* __restrict c) {
  trace_call(0x803D485Cu);
  c->r[7]=R8(c->r[3]+0x00000018u); // 803D485C
  cmps(c,0,(int32_t)c->r[4],1); // 803D4860
  c->r[6]=R8(c->r[3]+0x00000019u); // 803D4864
  c->r[5]=R8(c->r[3]+0x0000001Au); // 803D4868
  c->r[0]=R8(c->r[3]+0x0000001Bu); // 803D486C
  W32(c->r[3]+0x00000020u,c->r[4]); // 803D4870
  W8(c->r[3]+0x00000008u,c->r[7]); // 803D4874
  W8(c->r[3]+0x00000009u,c->r[6]); // 803D4878
  W8(c->r[3]+0x0000000Au,c->r[5]); // 803D487C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 803D4880
  if (crb(c,2)) { goto L_803D4890; } // 803D4884
  c->r[5]=c->r[3]+0x00000018u; // 803D4888
  goto L_803D4894; // 803D488C
L_803D4890:;
  c->r[5]=c->r[3]+0x0000001Cu; // 803D4890
L_803D4894:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 803D4894
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D4898
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 803D489C
  cmps(c,0,(int32_t)c->r[0],2); // 803D48A0
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D48A4
  W8(c->r[3]+0x0000000Du,c->r[0]); // 803D48A8
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D48AC
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 803D48B0
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D48B4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 803D48B8
  if (crb(c,2)) { goto L_803D48C8; } // 803D48BC
  c->r[5]=c->r[3]+0x00000018u; // 803D48C0
  goto L_803D48CC; // 803D48C4
L_803D48C8:;
  c->r[5]=c->r[3]+0x0000001Cu; // 803D48C8
L_803D48CC:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 803D48CC
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D48D0
  W8(c->r[3]+0x00000010u,c->r[4]); // 803D48D4
  cmps(c,0,(int32_t)c->r[0],0); // 803D48D8
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D48DC
  W8(c->r[3]+0x00000011u,c->r[0]); // 803D48E0
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D48E4
  W8(c->r[3]+0x00000012u,c->r[0]); // 803D48E8
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D48EC
  W8(c->r[3]+0x00000013u,c->r[0]); // 803D48F0
  if (!crb(c,2)) { goto L_803D4900; } // 803D48F4
  c->r[8]=c->r[3]+0x00000018u; // 803D48F8
  goto L_803D4904; // 803D48FC
L_803D4900:;
  c->r[8]=c->r[3]+0x0000001Cu; // 803D4900
L_803D4904:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 803D4904
  c->r[4]=0u+0x80810000u; // 803D4908
  c->r[10]=c->r[4]+0xFFFF8081u; // 803D490C
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 803D4910
  W8(c->r[3]+0x00000014u,c->r[5]); // 803D4914
  c->r[7]=R8(c->r[3]+0x00000042u); // 803D4918
  c->r[5]=R8(c->r[8]+0x00000001u); // 803D491C
  c->r[4]=R8(c->r[3]+0x0000000Fu); // 803D4920
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 803D4924
  W8(c->r[3]+0x00000015u,c->r[5]); // 803D4928
  c->r[0]=R8(c->r[3]+0x00000013u); // 803D492C
  c->r[5]=R8(c->r[8]+0x00000002u); // 803D4930
  W8(c->r[3]+0x00000016u,c->r[5]); // 803D4934
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 803D4938
  c->r[8]=R8(c->r[8]+0x00000003u); // 803D493C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 803D4940
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 803D4944
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 803D4948
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 803D494C
  c->r[6]=c->r[8]+c->r[6]; // 803D4950
  c->r[8]=sraw(c,c->r[6],7); // 803D4954
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 803D4958
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 803D495C
  c->r[4]=c->r[7]+c->r[4]; // 803D4960
  c->r[8]=c->r[8]+c->r[9]; // 803D4964
  c->r[7]=sraw(c,c->r[4],7); // 803D4968
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 803D496C
  c->r[5]=c->r[6]+c->r[5]; // 803D4970
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 803D4974
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 803D4978
  c->r[7]=c->r[7]+c->r[6]; // 803D497C
  c->r[5]=sraw(c,c->r[5],7); // 803D4980
  W8(c->r[3]+0x0000000Fu,c->r[7]); // 803D4984
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 803D4988
  c->r[0]=c->r[4]+c->r[0]; // 803D498C
  c->r[0]=sraw(c,c->r[0],7); // 803D4990
  c->r[5]=c->r[5]+c->r[6]; // 803D4994
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 803D4998
  W8(c->r[3]+0x00000013u,c->r[5]); // 803D499C
  c->r[0]=c->r[0]+c->r[4]; // 803D49A0
  W8(c->r[3]+0x00000017u,c->r[0]); // 803D49A4
  return; // 803D49A8
}

// SetTextColor__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5Color
void f_803D49AC(Ctx* __restrict c) {
  trace_call(0x803D49ACu);
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D49AC
  c->r[7]=R8(c->r[4]+0x00000000u); // 803D49B0
  c->r[6]=R8(c->r[4]+0x00000001u); // 803D49B4
  cmps(c,0,(int32_t)c->r[0],1); // 803D49B8
  c->r[5]=R8(c->r[4]+0x00000002u); // 803D49BC
  c->r[0]=R8(c->r[4]+0x00000003u); // 803D49C0
  W8(c->r[3]+0x00000018u,c->r[7]); // 803D49C4
  W8(c->r[3]+0x00000019u,c->r[6]); // 803D49C8
  W8(c->r[3]+0x0000001Au,c->r[5]); // 803D49CC
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 803D49D0
  W8(c->r[3]+0x00000008u,c->r[7]); // 803D49D4
  W8(c->r[3]+0x00000009u,c->r[6]); // 803D49D8
  W8(c->r[3]+0x0000000Au,c->r[5]); // 803D49DC
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 803D49E0
  if (crb(c,2)) { goto L_803D49F0; } // 803D49E4
  c->r[5]=c->r[3]+0x00000018u; // 803D49E8
  goto L_803D49F4; // 803D49EC
L_803D49F0:;
  c->r[5]=c->r[3]+0x0000001Cu; // 803D49F0
L_803D49F4:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 803D49F4
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D49F8
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 803D49FC
  cmps(c,0,(int32_t)c->r[0],2); // 803D4A00
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D4A04
  W8(c->r[3]+0x0000000Du,c->r[0]); // 803D4A08
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D4A0C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 803D4A10
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D4A14
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 803D4A18
  if (crb(c,2)) { goto L_803D4A28; } // 803D4A1C
  c->r[5]=c->r[3]+0x00000018u; // 803D4A20
  goto L_803D4A2C; // 803D4A24
L_803D4A28:;
  c->r[5]=c->r[3]+0x0000001Cu; // 803D4A28
L_803D4A2C:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 803D4A2C
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D4A30
  W8(c->r[3]+0x00000010u,c->r[4]); // 803D4A34
  cmps(c,0,(int32_t)c->r[0],0); // 803D4A38
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D4A3C
  W8(c->r[3]+0x00000011u,c->r[0]); // 803D4A40
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D4A44
  W8(c->r[3]+0x00000012u,c->r[0]); // 803D4A48
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D4A4C
  W8(c->r[3]+0x00000013u,c->r[0]); // 803D4A50
  if (!crb(c,2)) { goto L_803D4A60; } // 803D4A54
  c->r[8]=c->r[3]+0x00000018u; // 803D4A58
  goto L_803D4A64; // 803D4A5C
L_803D4A60:;
  c->r[8]=c->r[3]+0x0000001Cu; // 803D4A60
L_803D4A64:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 803D4A64
  c->r[4]=0u+0x80810000u; // 803D4A68
  c->r[10]=c->r[4]+0xFFFF8081u; // 803D4A6C
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 803D4A70
  W8(c->r[3]+0x00000014u,c->r[5]); // 803D4A74
  c->r[7]=R8(c->r[3]+0x00000042u); // 803D4A78
  c->r[5]=R8(c->r[8]+0x00000001u); // 803D4A7C
  c->r[4]=R8(c->r[3]+0x0000000Fu); // 803D4A80
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 803D4A84
  W8(c->r[3]+0x00000015u,c->r[5]); // 803D4A88
  c->r[0]=R8(c->r[3]+0x00000013u); // 803D4A8C
  c->r[5]=R8(c->r[8]+0x00000002u); // 803D4A90
  W8(c->r[3]+0x00000016u,c->r[5]); // 803D4A94
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 803D4A98
  c->r[8]=R8(c->r[8]+0x00000003u); // 803D4A9C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 803D4AA0
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 803D4AA4
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 803D4AA8
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 803D4AAC
  c->r[6]=c->r[8]+c->r[6]; // 803D4AB0
  c->r[8]=sraw(c,c->r[6],7); // 803D4AB4
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 803D4AB8
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 803D4ABC
  c->r[4]=c->r[7]+c->r[4]; // 803D4AC0
  c->r[8]=c->r[8]+c->r[9]; // 803D4AC4
  c->r[7]=sraw(c,c->r[4],7); // 803D4AC8
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 803D4ACC
  c->r[5]=c->r[6]+c->r[5]; // 803D4AD0
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 803D4AD4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 803D4AD8
  c->r[7]=c->r[7]+c->r[6]; // 803D4ADC
  c->r[5]=sraw(c,c->r[5],7); // 803D4AE0
  W8(c->r[3]+0x0000000Fu,c->r[7]); // 803D4AE4
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 803D4AE8
  c->r[0]=c->r[4]+c->r[0]; // 803D4AEC
  c->r[0]=sraw(c,c->r[0],7); // 803D4AF0
  c->r[5]=c->r[5]+c->r[6]; // 803D4AF4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 803D4AF8
  W8(c->r[3]+0x00000013u,c->r[5]); // 803D4AFC
  c->r[0]=c->r[0]+c->r[4]; // 803D4B00
  W8(c->r[3]+0x00000017u,c->r[0]); // 803D4B04
  return; // 803D4B08
}

// SetTextColor__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5ColorQ36nw4hbm2ut5Color
void f_803D4B0C(Ctx* __restrict c) {
  trace_call(0x803D4B0Cu);
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D4B0C
  c->r[11]=R8(c->r[4]+0x00000000u); // 803D4B10
  c->r[10]=R8(c->r[4]+0x00000001u); // 803D4B14
  cmps(c,0,(int32_t)c->r[0],1); // 803D4B18
  c->r[9]=R8(c->r[4]+0x00000002u); // 803D4B1C
  c->r[8]=R8(c->r[4]+0x00000003u); // 803D4B20
  c->r[7]=R8(c->r[5]+0x00000000u); // 803D4B24
  c->r[6]=R8(c->r[5]+0x00000001u); // 803D4B28
  c->r[4]=R8(c->r[5]+0x00000002u); // 803D4B2C
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D4B30
  W8(c->r[3]+0x00000018u,c->r[11]); // 803D4B34
  W8(c->r[3]+0x00000019u,c->r[10]); // 803D4B38
  W8(c->r[3]+0x0000001Au,c->r[9]); // 803D4B3C
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 803D4B40
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 803D4B44
  W8(c->r[3]+0x0000001Du,c->r[6]); // 803D4B48
  W8(c->r[3]+0x0000001Eu,c->r[4]); // 803D4B4C
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 803D4B50
  W8(c->r[3]+0x00000008u,c->r[11]); // 803D4B54
  W8(c->r[3]+0x00000009u,c->r[10]); // 803D4B58
  W8(c->r[3]+0x0000000Au,c->r[9]); // 803D4B5C
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 803D4B60
  if (crb(c,2)) { goto L_803D4B70; } // 803D4B64
  c->r[5]=c->r[3]+0x00000018u; // 803D4B68
  goto L_803D4B74; // 803D4B6C
L_803D4B70:;
  c->r[5]=c->r[3]+0x0000001Cu; // 803D4B70
L_803D4B74:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 803D4B74
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D4B78
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 803D4B7C
  cmps(c,0,(int32_t)c->r[0],2); // 803D4B80
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D4B84
  W8(c->r[3]+0x0000000Du,c->r[0]); // 803D4B88
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D4B8C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 803D4B90
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D4B94
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 803D4B98
  if (crb(c,2)) { goto L_803D4BA8; } // 803D4B9C
  c->r[5]=c->r[3]+0x00000018u; // 803D4BA0
  goto L_803D4BAC; // 803D4BA4
L_803D4BA8:;
  c->r[5]=c->r[3]+0x0000001Cu; // 803D4BA8
L_803D4BAC:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 803D4BAC
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D4BB0
  W8(c->r[3]+0x00000010u,c->r[4]); // 803D4BB4
  cmps(c,0,(int32_t)c->r[0],0); // 803D4BB8
  c->r[0]=R8(c->r[5]+0x00000001u); // 803D4BBC
  W8(c->r[3]+0x00000011u,c->r[0]); // 803D4BC0
  c->r[0]=R8(c->r[5]+0x00000002u); // 803D4BC4
  W8(c->r[3]+0x00000012u,c->r[0]); // 803D4BC8
  c->r[0]=R8(c->r[5]+0x00000003u); // 803D4BCC
  W8(c->r[3]+0x00000013u,c->r[0]); // 803D4BD0
  if (!crb(c,2)) { goto L_803D4BE0; } // 803D4BD4
  c->r[8]=c->r[3]+0x00000018u; // 803D4BD8
  goto L_803D4BE4; // 803D4BDC
L_803D4BE0:;
  c->r[8]=c->r[3]+0x0000001Cu; // 803D4BE0
L_803D4BE4:;
  c->r[5]=R8(c->r[8]+0x00000000u); // 803D4BE4
  c->r[4]=0u+0x80810000u; // 803D4BE8
  c->r[10]=c->r[4]+0xFFFF8081u; // 803D4BEC
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 803D4BF0
  W8(c->r[3]+0x00000014u,c->r[5]); // 803D4BF4
  c->r[7]=R8(c->r[3]+0x00000042u); // 803D4BF8
  c->r[5]=R8(c->r[8]+0x00000001u); // 803D4BFC
  c->r[4]=R8(c->r[3]+0x0000000Fu); // 803D4C00
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 803D4C04
  W8(c->r[3]+0x00000015u,c->r[5]); // 803D4C08
  c->r[0]=R8(c->r[3]+0x00000013u); // 803D4C0C
  c->r[5]=R8(c->r[8]+0x00000002u); // 803D4C10
  W8(c->r[3]+0x00000016u,c->r[5]); // 803D4C14
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 803D4C18
  c->r[8]=R8(c->r[8]+0x00000003u); // 803D4C1C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 803D4C20
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 803D4C24
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 803D4C28
  c->r[7]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[4])>>32); // 803D4C2C
  c->r[6]=c->r[8]+c->r[6]; // 803D4C30
  c->r[8]=sraw(c,c->r[6],7); // 803D4C34
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[5])>>32); // 803D4C38
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 803D4C3C
  c->r[4]=c->r[7]+c->r[4]; // 803D4C40
  c->r[8]=c->r[8]+c->r[9]; // 803D4C44
  c->r[7]=sraw(c,c->r[4],7); // 803D4C48
  W8(c->r[3]+0x0000000Bu,c->r[8]); // 803D4C4C
  c->r[5]=c->r[6]+c->r[5]; // 803D4C50
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 803D4C54
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[0])>>32); // 803D4C58
  c->r[7]=c->r[7]+c->r[6]; // 803D4C5C
  c->r[5]=sraw(c,c->r[5],7); // 803D4C60
  W8(c->r[3]+0x0000000Fu,c->r[7]); // 803D4C64
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 803D4C68
  c->r[0]=c->r[4]+c->r[0]; // 803D4C6C
  c->r[0]=sraw(c,c->r[0],7); // 803D4C70
  c->r[5]=c->r[5]+c->r[6]; // 803D4C74
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 803D4C78
  W8(c->r[3]+0x00000013u,c->r[5]); // 803D4C7C
  c->r[0]=c->r[0]+c->r[4]; // 803D4C80
  W8(c->r[3]+0x00000017u,c->r[0]); // 803D4C84
  return; // 803D4C88
}

// GetScaleH__Q36nw4hbm2ut10CharWriterCFv
void f_803D4C8C(Ctx* __restrict c) {
  trace_call(0x803D4C8Cu);
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D4C8C
  return; // 803D4C90
}

// GetScaleV__Q36nw4hbm2ut10CharWriterCFv
void f_803D4C94(Ctx* __restrict c) {
  trace_call(0x803D4C94u);
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D4C94
  return; // 803D4C98
}

// SetFontSize__Q36nw4hbm2ut10CharWriterFff
void f_803D4C9C(Ctx* __restrict c) {
  trace_call(0x803D4C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4C9C
  c->r[0]=c->lr; // 803D4CA0
  W32(c->r[1]+0x00000054u,c->r[0]); // 803D4CA4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803D4CA8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803D4CAC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803D4CB0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803D4CB4
  c->f[30]=c->f[1]; // 803D4CB8
  c->f[31]=c->f[2]; // 803D4CBC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D4CC0
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D4CC4
  W32(c->r[1]+0x00000024u,c->r[29]); // 803D4CC8
  c->r[29]=c->r[3]|c->r[3]; // 803D4CCC
  c->r[3]=R32(c->r[3]+0x00000048u); // 803D4CD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D4CD4
  c->r[12]=R32(c->r[12]+0x00000010u); // 803D4CD8
  c->ctr=c->r[12]; // 803D4CDC
  if (true) { c->lr=0x803D4CE4u; dispatch(c,c->ctr); } // 803D4CE0
  c->r[0]=c->r[3]^0x80000000u; // 803D4CE4
  c->r[31]=0u+0x43300000u; // 803D4CE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803D4CEC
  c->r[30]=0u+0x803F0000u; // 803D4CF0
  c->r[3]=R32(c->r[29]+0x00000048u); // 803D4CF4
  W32(c->r[1]+0x00000008u,c->r[31]); // 803D4CF8
  {uint32_t ea=c->r[30]+0x00000F08u; c->f[1]=RF64(ea);} // 803D4CFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803D4D00
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D4D04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803D4D08
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D4D0C
  c->f[31]=c->ps1[31]=S(c->f[31]/c->f[0]); // 803D4D10
  c->ctr=c->r[12]; // 803D4D14
  if (true) { c->lr=0x803D4D1Cu; dispatch(c,c->ctr); } // 803D4D18
  c->r[0]=c->r[3]^0x80000000u; // 803D4D1C
  W32(c->r[1]+0x00000010u,c->r[31]); // 803D4D20
  {uint32_t ea=c->r[30]+0x00000F08u; c->f[1]=RF64(ea);} // 803D4D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D4D28
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803D4D2C
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[31]);} // 803D4D30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803D4D34
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[0]); // 803D4D38
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 803D4D3C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803D4D40
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803D4D44
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 803D4D48
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 803D4D4C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D4D50
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D4D54
  c->r[29]=R32(c->r[1]+0x00000024u); // 803D4D58
  c->r[0]=R32(c->r[1]+0x00000054u); // 803D4D5C
  c->lr=c->r[0]; // 803D4D60
  c->r[1]=c->r[1]+0x00000050u; // 803D4D64
  return; // 803D4D68
}

// fn_803D4D6C
void f_803D4D6C(Ctx* __restrict c) {
  trace_call(0x803D4D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4D6C
  c->r[0]=c->lr; // 803D4D70
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4D74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D4D78
  c->r[31]=c->r[3]|c->r[3]; // 803D4D7C
  c->r[3]=R32(c->r[3]+0x00000048u); // 803D4D80
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D4D84
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D4D88
  c->ctr=c->r[12]; // 803D4D8C
  if (true) { c->lr=0x803D4D94u; dispatch(c,c->ctr); } // 803D4D90
  c->r[3]=c->r[3]^0x80000000u; // 803D4D94
  c->r[0]=0u+0x43300000u; // 803D4D98
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D4D9C
  c->r[3]=0u+0x803F0000u; // 803D4DA0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D4DA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D4DA8
  {uint32_t ea=c->r[3]+0x00000F08u; c->f[2]=RF64(ea);} // 803D4DAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803D4DB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4DB4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803D4DB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4DBC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803D4DC0
  c->lr=c->r[0]; // 803D4DC4
  c->r[1]=c->r[1]+0x00000020u; // 803D4DC8
  return; // 803D4DCC
}

// fn_803D4DD0
void f_803D4DD0(Ctx* __restrict c) {
  trace_call(0x803D4DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4DD0
  c->r[0]=c->lr; // 803D4DD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4DD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D4DDC
  c->r[31]=c->r[3]|c->r[3]; // 803D4DE0
  c->r[3]=R32(c->r[3]+0x00000048u); // 803D4DE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D4DE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 803D4DEC
  c->ctr=c->r[12]; // 803D4DF0
  if (true) { c->lr=0x803D4DF8u; dispatch(c,c->ctr); } // 803D4DF4
  c->r[3]=c->r[3]^0x80000000u; // 803D4DF8
  c->r[0]=0u+0x43300000u; // 803D4DFC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D4E00
  c->r[3]=0u+0x803F0000u; // 803D4E04
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D4E08
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D4E0C
  {uint32_t ea=c->r[3]+0x00000F08u; c->f[2]=RF64(ea);} // 803D4E10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803D4E14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4E18
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803D4E1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4E20
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803D4E24
  c->lr=c->r[0]; // 803D4E28
  c->r[1]=c->r[1]+0x00000020u; // 803D4E2C
  return; // 803D4E30
}

// GetFontAscent__Q36nw4hbm2ut10CharWriterCFv
void f_803D4E34(Ctx* __restrict c) {
  trace_call(0x803D4E34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4E34
  c->r[0]=c->lr; // 803D4E38
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D4E3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D4E40
  c->r[31]=c->r[3]|c->r[3]; // 803D4E44
  c->r[3]=R32(c->r[3]+0x00000048u); // 803D4E48
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D4E4C
  c->r[12]=R32(c->r[12]+0x00000014u); // 803D4E50
  c->ctr=c->r[12]; // 803D4E54
  if (true) { c->lr=0x803D4E5Cu; dispatch(c,c->ctr); } // 803D4E58
  c->r[3]=c->r[3]^0x80000000u; // 803D4E5C
  c->r[0]=0u+0x43300000u; // 803D4E60
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D4E64
  c->r[3]=0u+0x803F0000u; // 803D4E68
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D4E6C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D4E70
  {uint32_t ea=c->r[3]+0x00000F08u; c->f[2]=RF64(ea);} // 803D4E74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803D4E78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D4E7C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803D4E80
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D4E84
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803D4E88
  c->lr=c->r[0]; // 803D4E8C
  c->r[1]=c->r[1]+0x00000020u; // 803D4E90
  return; // 803D4E94
}

// IsWidthFixed__Q36nw4hbm2ut10CharWriterCFv
void f_803D4E98(Ctx* __restrict c) {
  trace_call(0x803D4E98u);
  c->r[3]=R8(c->r[3]+0x00000043u); // 803D4E98
  return; // 803D4E9C
}

// GetFixedWidth__Q36nw4hbm2ut10CharWriterCFv
void f_803D4EA0(Ctx* __restrict c) {
  trace_call(0x803D4EA0u);
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D4EA0
  return; // 803D4EA4
}

// Print__Q36nw4hbm2ut10CharWriterFUs
void f_803D4EA8(Ctx* __restrict c) {
  trace_call(0x803D4EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D4EA8
  c->r[0]=c->lr; // 803D4EAC
  W32(c->r[1]+0x00000054u,c->r[0]); // 803D4EB0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803D4EB4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803D4EB8
  c->r[0]=0u+0x43300000u; // 803D4EBC
  c->r[5]=c->r[4]|c->r[4]; // 803D4EC0
  c->r[4]=c->r[1]+0x00000008u; // 803D4EC4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803D4EC8
  c->r[31]=c->r[3]|c->r[3]; // 803D4ECC
  c->r[3]=R32(c->r[3]+0x00000048u); // 803D4ED0
  W32(c->r[1]+0x00000020u,c->r[0]); // 803D4ED4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D4ED8
  W32(c->r[1]+0x00000028u,c->r[0]); // 803D4EDC
  c->r[12]=R32(c->r[12]+0x00000050u); // 803D4EE0
  c->ctr=c->r[12]; // 803D4EE4
  if (true) { c->lr=0x803D4EECu; dispatch(c,c->ctr); } // 803D4EE8
  c->r[0]=R8(c->r[31]+0x00000043u); // 803D4EEC
  cmps(c,0,(int32_t)c->r[0],0); // 803D4EF0
  if (crb(c,2)) { goto L_803D4F58; } // 803D4EF4
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 803D4EF8
  c->r[5]=0u+0x803F0000u; // 803D4EFC
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 803D4F00
  c->r[3]=0u+0x803F0000u; // 803D4F04
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 803D4F08
  {uint32_t ea=c->r[5]+0x00000F08u; c->f[4]=RF64(ea);} // 803D4F0C
  c->r[4]=c->r[4]^0x80000000u; // 803D4F10
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803D4F14
  W32(c->r[1]+0x00000024u,c->r[4]); // 803D4F18
  c->r[0]=c->r[0]^0x80000000u; // 803D4F1C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D4F20
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 803D4F24
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 803D4F28
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 803D4F2C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D4F30
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 803D4F34
  {uint32_t ea=c->r[3]+0x00000F10u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D4F38
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 803D4F3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 803D4F40
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[2]); // 803D4F44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803D4F48
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D4F4C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803D4F50
  goto L_803D4F9C; // 803D4F54
L_803D4F58:;
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 803D4F58
  c->r[3]=0u+0x803F0000u; // 803D4F5C
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 803D4F60
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 803D4F64
  {uint32_t ea=c->r[3]+0x00000F08u; c->f[3]=RF64(ea);} // 803D4F68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803D4F6C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D4F70
  c->r[3]=c->r[4]^0x80000000u; // 803D4F74
  c->r[0]=c->r[0]^0x80000000u; // 803D4F78
  W32(c->r[1]+0x00000024u,c->r[3]); // 803D4F7C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 803D4F80
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 803D4F84
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 803D4F88
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 803D4F8C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 803D4F90
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[1]); // 803D4F94
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 803D4F98
L_803D4F9C:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D4F9C
  c->r[3]=c->r[31]|c->r[31]; // 803D4FA0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D4FA4
  c->r[4]=c->r[1]+0x00000008u; // 803D4FA8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D4FAC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D4FB0
  c->lr=0x803D4FB8u; f_803D5030(c); // 803D4FB4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D4FB8
  c->f[1]=c->f[31]; // 803D4FBC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 803D4FC0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 803D4FC4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803D4FC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803D4FCC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803D4FD0
  c->r[0]=R32(c->r[1]+0x00000054u); // 803D4FD4
  c->lr=c->r[0]; // 803D4FD8
  c->r[1]=c->r[1]+0x00000050u; // 803D4FDC
  return; // 803D4FE0
}

// SetCursor__Q36nw4hbm2ut10CharWriterFff
void f_803D4FE4(Ctx* __restrict c) {
  trace_call(0x803D4FE4u);
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 803D4FE4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 803D4FE8
  return; // 803D4FEC
}

// SetCursorX__Q36nw4hbm2ut10CharWriterFf
void f_803D4FF0(Ctx* __restrict c) {
  trace_call(0x803D4FF0u);
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 803D4FF0
  return; // 803D4FF4
}

// SetCursorY__Q36nw4hbm2ut10CharWriterFf
void f_803D4FF8(Ctx* __restrict c) {
  trace_call(0x803D4FF8u);
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 803D4FF8
  return; // 803D4FFC
}

// MoveCursorX__Q36nw4hbm2ut10CharWriterFf
void f_803D5000(Ctx* __restrict c) {
  trace_call(0x803D5000u);
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D5000
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803D5004
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 803D5008
  return; // 803D500C
}

// MoveCursorY__Q36nw4hbm2ut10CharWriterFf
void f_803D5010(Ctx* __restrict c) {
  trace_call(0x803D5010u);
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D5010
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803D5014
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 803D5018
  return; // 803D501C
}

// GetCursorX__Q36nw4hbm2ut10CharWriterCFv
void f_803D5020(Ctx* __restrict c) {
  trace_call(0x803D5020u);
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D5020
  return; // 803D5024
}

// GetCursorY__Q36nw4hbm2ut10CharWriterCFv
void f_803D5028(Ctx* __restrict c) {
  trace_call(0x803D5028u);
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D5028
  return; // 803D502C
}

// PrintGlyph__Q36nw4hbm2ut10CharWriterFfffRCQ36nw4hbm2ut5Glyph
void f_803D5030(Ctx* __restrict c) {
  trace_call(0x803D5030u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5030
  c->r[0]=c->lr; // 803D5034
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803D5038
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 803D503C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 803D5040
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 803D5044
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 803D5048
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 803D504C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 803D5050
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 803D5054
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 803D5058
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 803D505C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 803D5060
  c->r[11]=c->r[1]+0x00000070u; // 803D5064
  c->lr=0x803D506Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D5068
  c->r[25]=R8(c->r[4]+0x00000005u); // 803D506C
  c->r[31]=0u+0x43300000u; // 803D5070
  c->r[6]=R16(c->r[4]+0x00000010u); // 803D5074
  c->r[11]=0u+0x00000000u; // 803D5078
  c->r[24]=R8(c->r[4]+0x00000007u); // 803D507C
  c->r[26]=0u+0x803F0000u; // 803D5080
  c->r[0]=c->r[6]+c->r[25]; // 803D5084
  c->r[8]=R16(c->r[4]+0x00000012u); // 803D5088
  c->r[5]=R16(c->r[4]+0x0000000Cu); // 803D508C
  c->r[6]=rotl(c->r[6],15)&0xFFFF8000u; // 803D5090
  c->r[7]=c->r[8]+c->r[24]; // 803D5094
  c->r[8]=rotl(c->r[8],15)&0xFFFF8000u; // 803D5098
  c->r[30]=divwu(c->r[6],c->r[5]); // 803D509C
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 803D50A0
  c->r[27]=rotl(c->r[0],15)&0xFFFF8000u; // 803D50A4
  c->r[0]=R32(c->r[4]+0x00000000u); // 803D50A8
  c->r[12]=rotl(c->r[7],15)&0xFFFF8000u; // 803D50AC
  c->r[10]=R32(c->r[3]+0x00000038u); // 803D50B0
  c->r[29]=divwu(c->r[8],c->r[6]); // 803D50B4
  c->r[8]=0u+0x806C0000u; // 803D50B8
  c->r[7]=R32(c->r[8]+0x000025E8u); // 803D50BC
  c->f[29]=c->f[3]; // 803D50C0
  c->r[9]=R32(c->r[3]+0x0000003Cu); // 803D50C4
  c->f[27]=c->f[1]; // 803D50C8
  c->r[28]=divwu(c->r[27],c->r[5]); // 803D50CC
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[7]); // 803D50D0
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 803D50D4
  c->f[28]=c->f[2]; // 803D50D8
  {uint32_t ea=c->r[26]+0x00000F18u; c->f[5]=RF64(ea);} // 803D50DC
  c->r[27]=c->r[3]|c->r[3]; // 803D50E0
  W32(c->r[1]+0x00000038u,c->r[31]); // 803D50E4
  c->r[7]=divwu(c->r[12],c->r[6]); // 803D50E8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803D50EC
  W32(c->r[1]+0x00000040u,c->r[31]); // 803D50F0
  c->r[31]=rotl(c->r[30],0)&0x0000FFFFu; // 803D50F4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[5]); // 803D50F8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D50FC
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[0]); // 803D5100
  W32(c->r[1]+0x00000044u,c->r[24]); // 803D5104
  c->r[30]=rotl(c->r[29],0)&0x0000FFFFu; // 803D5108
  c->r[29]=rotl(c->r[28],0)&0x0000FFFFu; // 803D510C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 803D5110
  c->r[28]=rotl(c->r[7],0)&0x0000FFFFu; // 803D5114
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[4]); // 803D5118
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D511C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[5]); // 803D5120
  W32(c->r[1]+0x00000008u,c->r[11]); // 803D5124
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803D5128
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D512C
  W32(c->r[1]+0x00000010u,c->r[10]); // 803D5130
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 803D5134
  W32(c->r[1]+0x00000014u,c->r[9]); // 803D5138
  if (!crb(c,2)) { goto L_803D5168; } // 803D513C
  c->r[7]=c->r[8]+0x000025E8u; // 803D5140
  c->r[3]=R32(c->r[7]+0x00000004u); // 803D5144
  cmpu(c,0,c->r[0],c->r[3]); // 803D5148
  if (!crb(c,2)) { goto L_803D5168; } // 803D514C
  c->r[3]=R32(c->r[7]+0x00000008u); // 803D5150
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[3]); // 803D5154
  if (!crb(c,2)) { goto L_803D5168; } // 803D5158
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 803D515C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[3]); // 803D5160
  if (crb(c,2)) { goto L_803D516C; } // 803D5164
L_803D5168:;
  c->r[11]=0u+0x00000001u; // 803D5168
L_803D516C:;
  cmps(c,0,(int32_t)c->r[11],0); // 803D516C
  if (crb(c,2)) { goto L_803D51F0; } // 803D5170
  c->r[7]=R32(c->r[4]+0x00000008u); // 803D5174
  c->r[4]=c->r[0]|c->r[0]; // 803D5178
  c->r[3]=c->r[1]+0x00000018u; // 803D517C
  c->r[8]=0u+0x00000000u; // 803D5180
  c->r[9]=0u+0x00000000u; // 803D5184
  c->r[10]=0u+0x00000000u; // 803D5188
  c->lr=0x803D5190u; f_8028643C(c); // 803D518C
  c->r[3]=0u+0x803F0000u; // 803D5190
  c->r[4]=R32(c->r[27]+0x00000038u); // 803D5194
  {uint32_t ea=c->r[3]+0x00000F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D5198
  c->r[3]=c->r[1]+0x00000018u; // 803D519C
  c->r[5]=R32(c->r[27]+0x0000003Cu); // 803D51A0
  c->r[6]=0u+0x00000000u; // 803D51A4
  c->f[2]=c->f[1]; // 803D51A8
  c->r[7]=0u+0x00000000u; // 803D51AC
  c->f[3]=c->f[1]; // 803D51B0
  c->r[8]=0u+0x00000000u; // 803D51B4
  c->lr=0x803D51BCu; f_80286690(c); // 803D51B8
  c->r[3]=c->r[1]+0x00000018u; // 803D51BC
  c->r[4]=0u+0x00000000u; // 803D51C0
  c->lr=0x803D51C8u; f_80286B04(c); // 803D51C4
  c->r[6]=0u+0x806C0000u; // 803D51C8
  c->r[7]=R32(c->r[1]+0x00000008u); // 803D51CC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 803D51D0
  c->r[4]=c->r[6]+0x000025E8u; // 803D51D4
  c->r[3]=R32(c->r[1]+0x00000010u); // 803D51D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D51DC
  W32(c->r[6]+0x000025E8u,c->r[7]); // 803D51E0
  W32(c->r[4]+0x00000004u,c->r[5]); // 803D51E4
  W32(c->r[4]+0x00000008u,c->r[3]); // 803D51E8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803D51EC
L_803D51F0:;
  c->r[3]=0u+0x00000080u; // 803D51F0
  c->r[4]=0u+0x00000000u; // 803D51F4
  c->r[5]=0u+0x00000004u; // 803D51F8
  c->lr=0x803D5200u; f_80284FD0(c); // 803D51FC
  c->r[3]=0u+0xCC010000u; // 803D5200
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 803D5204
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 803D5208
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 803D520C
  c->r[0]=R32(c->r[27]+0x00000008u); // 803D5210
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 803D5214
  W16(c->r[3]+0xFFFF8000u,c->r[31]); // 803D5218
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 803D521C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 803D5220
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 803D5224
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 803D5228
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 803D522C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 803D5230
  W16(c->r[3]+0xFFFF8000u,c->r[29]); // 803D5234
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 803D5238
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 803D523C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 803D5240
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 803D5244
  c->r[0]=R32(c->r[27]+0x00000014u); // 803D5248
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 803D524C
  W16(c->r[3]+0xFFFF8000u,c->r[29]); // 803D5250
  W16(c->r[3]+0xFFFF8000u,c->r[28]); // 803D5254
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 803D5258
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 803D525C
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 803D5260
  c->r[0]=R32(c->r[27]+0x00000010u); // 803D5264
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 803D5268
  W16(c->r[3]+0xFFFF8000u,c->r[31]); // 803D526C
  W16(c->r[3]+0xFFFF8000u,c->r[28]); // 803D5270
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 803D5274
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 803D5278
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 803D527C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 803D5280
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 803D5284
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 803D5288
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 803D528C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 803D5290
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 803D5294
  c->r[11]=c->r[1]+0x00000070u; // 803D5298
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 803D529C
  c->lr=0x803D52A4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D52A0
  c->r[0]=R32(c->r[1]+0x000000C4u); // 803D52A4
  c->lr=c->r[0]; // 803D52A8
  c->r[1]=c->r[1]+0x000000C0u; // 803D52AC
  return; // 803D52B0
}

// SetupGXWithColorMapping__Q36nw4hbm2ut10CharWriterFQ36nw4hbm2ut5ColorQ36nw4hbm2ut5Color
void f_803D52B4(Ctx* __restrict c) {
  trace_call(0x803D52B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D52B4
  c->r[0]=c->lr; // 803D52B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803D52BC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D52C0
  c->r[31]=c->r[4]|c->r[4]; // 803D52C4
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D52C8
  c->r[30]=0u+0x806C0000u; // 803D52CC
  c->r[30]=c->r[30]+0x000025D0u; // 803D52D0
  W32(c->r[1]+0x00000024u,c->r[29]); // 803D52D4
  c->r[29]=c->r[3]|c->r[3]; // 803D52D8
  c->r[0]=R8(c->r[30]+0x00000000u); // 803D52DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D52E0
  if (!crb(c,2)) { goto L_803D530C; } // 803D52E4
  c->r[0]=0u+0x00000000u; // 803D52E8
  c->r[4]=0u+0x803D0000u; // 803D52EC
  W32(c->r[30]+0x00000010u,c->r[0]); // 803D52F0
  c->r[3]=c->r[30]+0x00000010u; // 803D52F4
  c->r[4]=c->r[4]+0xFFFF9398u; // 803D52F8
  c->r[5]=c->r[30]+0x00000004u; // 803D52FC
  c->lr=0x803D5304u; f_802895A4(c); // 803D5300
  c->r[0]=0u+0x00000001u; // 803D5304
  W8(c->r[30]+0x00000000u,c->r[0]); // 803D5308
L_803D530C:;
  c->r[3]=0u+0x803F0000u; // 803D530C
  c->r[6]=c->r[30]+0x00000010u; // 803D5310
  {uint32_t ea=c->r[3]+0x00000F00u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D5314
  c->r[4]=c->r[1]+0x00000008u; // 803D5318
  c->r[3]=R8(c->r[30]+0x00000010u); // 803D531C
  c->r[7]=R8(c->r[6]+0x00000001u); // 803D5320
  c->f[2]=c->f[1]; // 803D5324
  c->r[5]=R8(c->r[6]+0x00000002u); // 803D5328
  c->f[3]=c->f[1]; // 803D532C
  c->r[0]=R8(c->r[6]+0x00000003u); // 803D5330
  c->f[4]=c->f[1]; // 803D5334
  W8(c->r[1]+0x00000008u,c->r[3]); // 803D5338
  c->r[3]=0u+0x00000000u; // 803D533C
  W8(c->r[1]+0x00000009u,c->r[7]); // 803D5340
  W8(c->r[1]+0x0000000Au,c->r[5]); // 803D5344
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803D5348
  c->lr=0x803D5350u; f_80287DC4(c); // 803D534C
  c->r[3]=0u+0x00000000u; // 803D5350
  c->r[4]=0u+0x00000000u; // 803D5354
  c->r[5]=0u+0x00000001u; // 803D5358
  c->r[6]=0u+0x00000002u; // 803D535C
  c->r[7]=0u+0x00000003u; // 803D5360
  c->lr=0x803D5368u; f_80287B04(c); // 803D5364
  c->r[3]=0u+0x00000000u; // 803D5368
  c->r[4]=0u+0x00000011u; // 803D536C
  c->r[5]=0u+0x00000000u; // 803D5370
  c->lr=0x803D5378u; f_80287BB8(c); // 803D5374
  c->r[3]=0u+0x00000001u; // 803D5378
  c->lr=0x803D5380u; f_80286190(c); // 803D537C
  c->r[3]=0u+0x00000004u; // 803D5380
  c->r[4]=0u+0x00000000u; // 803D5384
  c->r[5]=0u+0x00000000u; // 803D5388
  c->r[6]=0u+0x00000001u; // 803D538C
  c->r[7]=0u+0x00000000u; // 803D5390
  c->r[8]=0u+0x00000000u; // 803D5394
  c->r[9]=0u+0x00000002u; // 803D5398
  c->lr=0x803D53A0u; f_802861B4(c); // 803D539C
  c->r[3]=0u+0x00000005u; // 803D53A0
  c->r[4]=0u+0x00000000u; // 803D53A4
  c->r[5]=0u+0x00000000u; // 803D53A8
  c->r[6]=0u+0x00000000u; // 803D53AC
  c->r[7]=0u+0x00000000u; // 803D53B0
  c->r[8]=0u+0x00000000u; // 803D53B4
  c->r[9]=0u+0x00000002u; // 803D53B8
  c->lr=0x803D53C0u; f_802861B4(c); // 803D53BC
  c->r[3]=0u+0x00000001u; // 803D53C0
  c->lr=0x803D53C8u; f_80284454(c); // 803D53C4
  c->r[3]=0u+0x00000000u; // 803D53C8
  c->r[4]=0u+0x00000001u; // 803D53CC
  c->r[5]=0u+0x00000004u; // 803D53D0
  c->r[6]=0u+0x0000003Cu; // 803D53D4
  c->r[7]=0u+0x00000000u; // 803D53D8
  c->r[8]=0u+0x0000007Du; // 803D53DC
  c->lr=0x803D53E4u; f_8028422C(c); // 803D53E0
  c->r[3]=0u+0x00000000u; // 803D53E4
  c->lr=0x803D53ECu; f_80287630(c); // 803D53E8
  c->r[3]=0u+0x00000001u; // 803D53EC
  c->r[4]=0u+0x00000004u; // 803D53F0
  c->r[5]=0u+0x00000005u; // 803D53F4
  c->r[6]=0u+0x0000000Fu; // 803D53F8
  c->lr=0x803D5400u; f_80288274(c); // 803D53FC
  c->r[3]=0u+0x00000002u; // 803D5400
  c->lr=0x803D5408u; f_80287DA0(c); // 803D5404
  c->r[3]=0u+0x00000000u; // 803D5408
  c->lr=0x803D5410u; f_80287650(c); // 803D540C
  c->r[3]=0u+0x00000001u; // 803D5410
  c->lr=0x803D5418u; f_80287650(c); // 803D5414
  c->r[3]=0u+0x00000000u; // 803D5418
  c->r[4]=0u+0x00000000u; // 803D541C
  c->r[5]=0u+0x00000000u; // 803D5420
  c->lr=0x803D5428u; f_80287AC8(c); // 803D5424
  c->r[3]=0u+0x00000001u; // 803D5428
  c->r[4]=0u+0x00000000u; // 803D542C
  c->r[5]=0u+0x00000000u; // 803D5430
  c->lr=0x803D5438u; f_80287AC8(c); // 803D5434
  c->r[3]=0u+0x00000000u; // 803D5438
  c->r[4]=0u+0x00000000u; // 803D543C
  c->r[5]=0u+0x00000000u; // 803D5440
  c->r[6]=0u+0x000000FFu; // 803D5444
  c->lr=0x803D544Cu; f_80287C44(c); // 803D5448
  c->r[7]=R8(c->r[29]+0x00000000u); // 803D544C
  c->r[4]=c->r[1]+0x00000010u; // 803D5450
  c->r[6]=R8(c->r[29]+0x00000001u); // 803D5454
  c->r[3]=0u+0x00000001u; // 803D5458
  c->r[5]=R8(c->r[29]+0x00000002u); // 803D545C
  c->r[0]=R8(c->r[29]+0x00000003u); // 803D5460
  W8(c->r[1]+0x00000010u,c->r[7]); // 803D5464
  W8(c->r[1]+0x00000011u,c->r[6]); // 803D5468
  W8(c->r[1]+0x00000012u,c->r[5]); // 803D546C
  W8(c->r[1]+0x00000013u,c->r[0]); // 803D5470
  c->lr=0x803D5478u; f_80287908(c); // 803D5474
  c->r[7]=R8(c->r[31]+0x00000000u); // 803D5478
  c->r[4]=c->r[1]+0x0000000Cu; // 803D547C
  c->r[6]=R8(c->r[31]+0x00000001u); // 803D5480
  c->r[3]=0u+0x00000002u; // 803D5484
  c->r[5]=R8(c->r[31]+0x00000002u); // 803D5488
  c->r[0]=R8(c->r[31]+0x00000003u); // 803D548C
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 803D5490
  W8(c->r[1]+0x0000000Du,c->r[6]); // 803D5494
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 803D5498
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D549C
  c->lr=0x803D54A4u; f_80287908(c); // 803D54A0
  c->r[3]=0u+0x00000000u; // 803D54A4
  c->r[4]=0u+0x00000002u; // 803D54A8
  c->r[5]=0u+0x00000004u; // 803D54AC
  c->r[6]=0u+0x00000008u; // 803D54B0
  c->r[7]=0u+0x0000000Fu; // 803D54B4
  c->lr=0x803D54BCu; f_802877D8(c); // 803D54B8
  c->r[3]=0u+0x00000000u; // 803D54BC
  c->r[4]=0u+0x00000001u; // 803D54C0
  c->r[5]=0u+0x00000002u; // 803D54C4
  c->r[6]=0u+0x00000004u; // 803D54C8
  c->r[7]=0u+0x00000007u; // 803D54CC
  c->lr=0x803D54D4u; f_80287818(c); // 803D54D0
  c->r[3]=0u+0x00000000u; // 803D54D4
  c->r[4]=0u+0x00000000u; // 803D54D8
  c->r[5]=0u+0x00000000u; // 803D54DC
  c->r[6]=0u+0x00000000u; // 803D54E0
  c->r[7]=0u+0x00000001u; // 803D54E4
  c->r[8]=0u+0x00000000u; // 803D54E8
  c->lr=0x803D54F0u; f_80287858(c); // 803D54EC
  c->r[3]=0u+0x00000000u; // 803D54F0
  c->r[4]=0u+0x00000000u; // 803D54F4
  c->r[5]=0u+0x00000000u; // 803D54F8
  c->r[6]=0u+0x00000000u; // 803D54FC
  c->r[7]=0u+0x00000001u; // 803D5500
  c->r[8]=0u+0x00000000u; // 803D5504
  c->lr=0x803D550Cu; f_802878B0(c); // 803D5508
  c->r[3]=0u+0x00000001u; // 803D550C
  c->r[4]=0u+0x000000FFu; // 803D5510
  c->r[5]=0u+0x000000FFu; // 803D5514
  c->r[6]=0u+0x00000004u; // 803D5518
  c->lr=0x803D5520u; f_80287C44(c); // 803D551C
  c->r[3]=0u+0x00000001u; // 803D5520
  c->r[4]=0u+0x0000000Fu; // 803D5524
  c->r[5]=0u+0x00000000u; // 803D5528
  c->r[6]=0u+0x0000000Au; // 803D552C
  c->r[7]=0u+0x0000000Fu; // 803D5530
  c->lr=0x803D5538u; f_802877D8(c); // 803D5534
  c->r[3]=0u+0x00000001u; // 803D5538
  c->r[4]=0u+0x00000007u; // 803D553C
  c->r[5]=0u+0x00000000u; // 803D5540
  c->r[6]=0u+0x00000005u; // 803D5544
  c->r[7]=0u+0x00000007u; // 803D5548
  c->lr=0x803D5550u; f_80287818(c); // 803D554C
  c->r[3]=0u+0x00000001u; // 803D5550
  c->r[4]=0u+0x00000000u; // 803D5554
  c->r[5]=0u+0x00000000u; // 803D5558
  c->r[6]=0u+0x00000000u; // 803D555C
  c->r[7]=0u+0x00000001u; // 803D5560
  c->r[8]=0u+0x00000000u; // 803D5564
  c->lr=0x803D556Cu; f_80287858(c); // 803D5568
  c->r[3]=0u+0x00000001u; // 803D556C
  c->r[4]=0u+0x00000000u; // 803D5570
  c->r[5]=0u+0x00000000u; // 803D5574
  c->r[6]=0u+0x00000000u; // 803D5578
  c->r[7]=0u+0x00000001u; // 803D557C
  c->r[8]=0u+0x00000000u; // 803D5580
  c->lr=0x803D5588u; f_802878B0(c); // 803D5584
  c->r[3]=0u+0x00000000u; // 803D5588
  c->r[4]=0u+0x00000009u; // 803D558C
  c->r[5]=0u+0x00000001u; // 803D5590
  c->r[6]=0u+0x00000004u; // 803D5594
  c->r[7]=0u+0x00000000u; // 803D5598
  c->lr=0x803D55A0u; f_80283B8C(c); // 803D559C
  c->r[3]=0u+0x00000000u; // 803D55A0
  c->r[4]=0u+0x0000000Bu; // 803D55A4
  c->r[5]=0u+0x00000001u; // 803D55A8
  c->r[6]=0u+0x00000005u; // 803D55AC
  c->r[7]=0u+0x00000000u; // 803D55B0
  c->lr=0x803D55B8u; f_80283B8C(c); // 803D55B4
  c->r[3]=0u+0x00000000u; // 803D55B8
  c->r[4]=0u+0x0000000Du; // 803D55BC
  c->r[5]=0u+0x00000001u; // 803D55C0
  c->r[6]=0u+0x00000002u; // 803D55C4
  c->r[7]=0u+0x0000000Fu; // 803D55C8
  c->lr=0x803D55D0u; f_80283B8C(c); // 803D55CC
  c->lr=0x803D55D4u; f_80283B58(c); // 803D55D0
  c->r[3]=0u+0x00000009u; // 803D55D4
  c->r[4]=0u+0x00000001u; // 803D55D8
  c->lr=0x803D55E0u; f_80283564(c); // 803D55DC
  c->r[3]=0u+0x0000000Bu; // 803D55E0
  c->r[4]=0u+0x00000001u; // 803D55E4
  c->lr=0x803D55ECu; f_80283564(c); // 803D55E8
  c->r[3]=0u+0x0000000Du; // 803D55EC
  c->r[4]=0u+0x00000001u; // 803D55F0
  c->lr=0x803D55F8u; f_80283564(c); // 803D55F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803D55F8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D55FC
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D5600
  c->r[29]=R32(c->r[1]+0x00000024u); // 803D5604
  c->lr=c->r[0]; // 803D5608
  c->r[1]=c->r[1]+0x00000030u; // 803D560C
  return; // 803D5610
}

// InitReaderFunc__Q36nw4hbm2ut4FontFQ36nw4hbm2ut12FontEncoding
void f_803D5614(Ctx* __restrict c) {
  trace_call(0x803D5614u);
  cmps(c,0,(int32_t)c->r[4],2); // 803D5614
  c->r[5]=0u+0x80440000u; // 803D5618
  c->r[5]=c->r[5]+0xFFFFA408u; // 803D561C
  if (crb(c,2)) { goto L_803D567C; } // 803D5620
  if (!crb(c,0)) { goto L_803D569C; } // 803D5624
  cmps(c,0,(int32_t)c->r[4],0); // 803D5628
  if (crb(c,2)) { goto L_803D563C; } // 803D562C
  if (!crb(c,0)) { goto L_803D565C; } // 803D5630
  goto L_803D569C; // 803D5634
  goto L_803D569C; // 803D5638
L_803D563C:;
  c->r[4]=c->r[5]+0x00000000u; // 803D563C
  c->r[5]=R32(c->r[5]+0x00000000u); // 803D5640
  c->r[0]=R32(c->r[4]+0x00000004u); // 803D5644
  W32(c->r[3]+0x00000004u,c->r[5]); // 803D5648
  W32(c->r[3]+0x00000008u,c->r[0]); // 803D564C
  c->r[0]=R32(c->r[4]+0x00000008u); // 803D5650
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803D5654
  return; // 803D5658
L_803D565C:;
  c->r[4]=c->r[5]+0x0000000Cu; // 803D565C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 803D5660
  c->r[0]=R32(c->r[4]+0x00000004u); // 803D5664
  W32(c->r[3]+0x00000004u,c->r[5]); // 803D5668
  W32(c->r[3]+0x00000008u,c->r[0]); // 803D566C
  c->r[0]=R32(c->r[4]+0x00000008u); // 803D5670
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803D5674
  return; // 803D5678
L_803D567C:;
  c->r[4]=c->r[5]+0x00000018u; // 803D567C
  c->r[5]=R32(c->r[5]+0x00000018u); // 803D5680
  c->r[0]=R32(c->r[4]+0x00000004u); // 803D5684
  W32(c->r[3]+0x00000004u,c->r[5]); // 803D5688
  W32(c->r[3]+0x00000008u,c->r[0]); // 803D568C
  c->r[0]=R32(c->r[4]+0x00000008u); // 803D5690
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803D5694
  return; // 803D5698
L_803D569C:;
  c->r[4]=c->r[5]+0x00000024u; // 803D569C
  c->r[5]=R32(c->r[5]+0x00000024u); // 803D56A0
  c->r[0]=R32(c->r[4]+0x00000004u); // 803D56A4
  W32(c->r[3]+0x00000004u,c->r[5]); // 803D56A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 803D56AC
  c->r[0]=R32(c->r[4]+0x00000008u); // 803D56B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803D56B4
  return; // 803D56B8
}

// __dt__Q46nw4hbm2ut6detail12LinkListImplFv
void f_803D56BC(Ctx* __restrict c) {
  trace_call(0x803D56BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D56BC
  c->r[0]=c->lr; // 803D56C0
  cmps(c,0,(int32_t)c->r[3],0); // 803D56C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D56C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D56CC
  c->r[31]=c->r[3]|c->r[3]; // 803D56D0
  if (crb(c,2)) { goto L_803D5728; } // 803D56D4
  c->r[7]=R32(c->r[3]+0x00000004u); // 803D56D8
  c->r[6]=c->r[3]+0x00000004u; // 803D56DC
  c->r[0]=0u+0x00000000u; // 803D56E0
  goto L_803D5710; // 803D56E4
L_803D56E8:;
  c->r[8]=R32(c->r[7]+0x00000000u); // 803D56E8
  c->r[5]=R32(c->r[7]+0x00000004u); // 803D56EC
  W32(c->r[8]+0x00000004u,c->r[5]); // 803D56F0
  W32(c->r[5]+0x00000000u,c->r[8]); // 803D56F4
  c->r[5]=R32(c->r[3]+0x00000000u); // 803D56F8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 803D56FC
  W32(c->r[3]+0x00000000u,c->r[5]); // 803D5700
  W32(c->r[7]+0x00000000u,c->r[0]); // 803D5704
  W32(c->r[7]+0x00000004u,c->r[0]); // 803D5708
  c->r[7]=c->r[8]|c->r[8]; // 803D570C
L_803D5710:;
  cmpu(c,0,c->r[7],c->r[6]); // 803D5710
  if (!crb(c,2)) { IRQCHK(c); goto L_803D56E8; } // 803D5714
  cmps(c,0,(int32_t)c->r[4],0); // 803D5718
  if (!crb(c,1)) { goto L_803D5728; } // 803D571C
  c->r[3]=c->r[31]|c->r[31]; // 803D5720
  c->lr=0x803D5728u; f_802896EC(c); // 803D5724
L_803D5728:;
  c->r[3]=c->r[31]|c->r[31]; // 803D5728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D572C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5730
  c->lr=c->r[0]; // 803D5734
  c->r[1]=c->r[1]+0x00000010u; // 803D5738
  return; // 803D573C
}

// Erase__Q46nw4hbm2ut6detail12LinkListImplFQ56nw4hbm2ut6detail12LinkListImpl8Iterator
void f_803D5740(Ctx* __restrict c) {
  trace_call(0x803D5740u);
  c->r[6]=R32(c->r[4]+0x00000000u); // 803D5740
  c->r[0]=0u+0x00000000u; // 803D5744
  c->r[5]=R32(c->r[6]+0x00000000u); // 803D5748
  goto L_803D5778; // 803D574C
L_803D5750:;
  c->r[7]=R32(c->r[6]+0x00000000u); // 803D5750
  c->r[4]=R32(c->r[6]+0x00000004u); // 803D5754
  W32(c->r[7]+0x00000004u,c->r[4]); // 803D5758
  W32(c->r[4]+0x00000000u,c->r[7]); // 803D575C
  c->r[4]=R32(c->r[3]+0x00000000u); // 803D5760
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 803D5764
  W32(c->r[3]+0x00000000u,c->r[4]); // 803D5768
  W32(c->r[6]+0x00000000u,c->r[0]); // 803D576C
  W32(c->r[6]+0x00000004u,c->r[0]); // 803D5770
  c->r[6]=c->r[7]|c->r[7]; // 803D5774
L_803D5778:;
  cmpu(c,0,c->r[6],c->r[5]); // 803D5778
  if (!crb(c,2)) { IRQCHK(c); goto L_803D5750; } // 803D577C
  c->r[3]=c->r[5]|c->r[5]; // 803D5780
  return; // 803D5784
}

// Insert__Q46nw4hbm2ut6detail12LinkListImplFQ56nw4hbm2ut6detail12LinkListImpl8IteratorPQ36nw4hbm2ut12LinkListNode
void f_803D5788(Ctx* __restrict c) {
  trace_call(0x803D5788u);
  c->r[4]=R32(c->r[4]+0x00000000u); // 803D5788
  c->r[6]=R32(c->r[4]+0x00000004u); // 803D578C
  W32(c->r[5]+0x00000000u,c->r[4]); // 803D5790
  W32(c->r[5]+0x00000004u,c->r[6]); // 803D5794
  W32(c->r[4]+0x00000004u,c->r[5]); // 803D5798
  W32(c->r[6]+0x00000000u,c->r[5]); // 803D579C
  c->r[4]=R32(c->r[3]+0x00000000u); // 803D57A0
  c->r[0]=c->r[4]+0x00000001u; // 803D57A4
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D57A8
  c->r[3]=c->r[5]|c->r[5]; // 803D57AC
  return; // 803D57B0
}

// fn_803D57B4
void f_803D57B4(Ctx* __restrict c) {
  trace_call(0x803D57B4u);
  c->r[0]=0u+0x00000000u; // 803D57B4
  W16(c->r[3]+0x0000000Au,c->r[4]); // 803D57B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D57BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 803D57C0
  W16(c->r[3]+0x00000008u,c->r[0]); // 803D57C4
  return; // 803D57C8
}

// List_Append__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
void f_803D57CC(Ctx* __restrict c) {
  trace_call(0x803D57CCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 803D57CC
  cmps(c,0,(int32_t)c->r[0],0); // 803D57D0
  if (!crb(c,2)) { goto L_803D5804; } // 803D57D4
  c->r[5]=R16(c->r[3]+0x0000000Au); // 803D57D8
  c->r[0]=0u+0x00000000u; // 803D57DC
  c->r[5]=c->r[4]+c->r[5]; // 803D57E0
  W32(c->r[5]+0x00000004u,c->r[0]); // 803D57E4
  W32(c->r[5]+0x00000000u,c->r[0]); // 803D57E8
  c->r[5]=R16(c->r[3]+0x00000008u); // 803D57EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803D57F0
  c->r[0]=c->r[5]+0x00000001u; // 803D57F4
  W32(c->r[3]+0x00000004u,c->r[4]); // 803D57F8
  W16(c->r[3]+0x00000008u,c->r[0]); // 803D57FC
  return; // 803D5800
L_803D5804:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 803D5804
  c->r[0]=0u+0x00000000u; // 803D5808
  c->r[5]=R32(c->r[3]+0x00000004u); // 803D580C
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 803D5810
  W32(c->r[6]+0x00000004u,c->r[0]); // 803D5814
  c->r[5]=R32(c->r[3]+0x00000004u); // 803D5818
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803D581C
  c->r[5]=c->r[5]+c->r[0]; // 803D5820
  W32(c->r[5]+0x00000004u,c->r[4]); // 803D5824
  c->r[5]=R16(c->r[3]+0x00000008u); // 803D5828
  W32(c->r[3]+0x00000004u,c->r[4]); // 803D582C
  c->r[0]=c->r[5]+0x00000001u; // 803D5830
  W16(c->r[3]+0x00000008u,c->r[0]); // 803D5834
  return; // 803D5838
}

// List_Remove__Q26nw4hbm2utFPQ36nw4hbm2ut4ListPv
void f_803D583C(Ctx* __restrict c) {
  trace_call(0x803D583Cu);
  c->r[5]=R16(c->r[3]+0x0000000Au); // 803D583C
  c->r[6]=c->r[4]+c->r[5]; // 803D5840
  c->r[4]=R32(c->r[4]+c->r[5]); // 803D5844
  cmps(c,0,(int32_t)c->r[4],0); // 803D5848
  if (!crb(c,2)) { goto L_803D585C; } // 803D584C
  c->r[0]=R32(c->r[6]+0x00000004u); // 803D5850
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D5854
  goto L_803D5868; // 803D5858
L_803D585C:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 803D585C
  c->r[4]=c->r[4]+c->r[5]; // 803D5860
  W32(c->r[4]+0x00000004u,c->r[0]); // 803D5864
L_803D5868:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 803D5868
  cmps(c,0,(int32_t)c->r[5],0); // 803D586C
  if (!crb(c,2)) { goto L_803D5880; } // 803D5870
  c->r[0]=R32(c->r[6]+0x00000000u); // 803D5874
  W32(c->r[3]+0x00000004u,c->r[0]); // 803D5878
  goto L_803D588C; // 803D587C
L_803D5880:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 803D5880
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803D5884
  W32(c->r[5]+c->r[0],c->r[4]); // 803D5888
L_803D588C:;
  c->r[0]=0u+0x00000000u; // 803D588C
  W32(c->r[6]+0x00000000u,c->r[0]); // 803D5890
  W32(c->r[6]+0x00000004u,c->r[0]); // 803D5894
  c->r[4]=R16(c->r[3]+0x00000008u); // 803D5898
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803D589C
  W16(c->r[3]+0x00000008u,c->r[0]); // 803D58A0
  return; // 803D58A4
}

// List_GetNext__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListPCv
void f_803D58A8(Ctx* __restrict c) {
  trace_call(0x803D58A8u);
  cmps(c,0,(int32_t)c->r[4],0); // 803D58A8
  if (!crb(c,2)) { goto L_803D58B8; } // 803D58AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 803D58B0
  return; // 803D58B4
L_803D58B8:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803D58B8
  c->r[3]=c->r[4]+c->r[0]; // 803D58BC
  c->r[3]=R32(c->r[3]+0x00000004u); // 803D58C0
  return; // 803D58C4
}

// List_GetNth__Q26nw4hbm2utFPCQ36nw4hbm2ut4ListUs
void f_803D58C8(Ctx* __restrict c) {
  trace_call(0x803D58C8u);
  c->r[6]=0u+0x00000000u; // 803D58C8
  c->r[5]=0u+0x00000000u; // 803D58CC
  goto L_803D58E8; // 803D58D0
L_803D58D4:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 803D58D4
  if (!crb(c,2)) { goto L_803D58E4; } // 803D58D8
  c->r[3]=c->r[5]|c->r[5]; // 803D58DC
  return; // 803D58E0
L_803D58E4:;
  c->r[6]=c->r[6]+0x00000001u; // 803D58E4
L_803D58E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 803D58E8
  if (crb(c,2)) { goto L_803D5900; } // 803D58EC
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803D58F0
  c->r[5]=c->r[5]+c->r[0]; // 803D58F4
  c->r[5]=R32(c->r[5]+0x00000004u); // 803D58F8
  goto L_803D5904; // 803D58FC
L_803D5900:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 803D5900
L_803D5904:;
  cmps(c,0,(int32_t)c->r[5],0); // 803D5904
  if (!crb(c,2)) { IRQCHK(c); goto L_803D58D4; } // 803D5908
  c->r[3]=0u+0x00000000u; // 803D590C
  return; // 803D5910
}

// __ct__Q36nw4hbm2ut7ResFontFv
void f_803D5914(Ctx* __restrict c) {
  trace_call(0x803D5914u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5914
  c->r[0]=c->lr; // 803D5918
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D591C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D5920
  c->r[31]=c->r[3]|c->r[3]; // 803D5924
  c->lr=0x803D592Cu; f_803D5C18(c); // 803D5928
  c->r[4]=0u+0x80440000u; // 803D592C
  c->r[3]=c->r[31]|c->r[31]; // 803D5930
  c->r[4]=c->r[4]+0xFFFFA438u; // 803D5934
  W32(c->r[31]+0x00000000u,c->r[4]); // 803D5938
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D593C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5940
  c->lr=c->r[0]; // 803D5944
  c->r[1]=c->r[1]+0x00000010u; // 803D5948
  return; // 803D594C
}

// fn_803D5950
void f_803D5950(Ctx* __restrict c) {
  trace_call(0x803D5950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5950
  c->r[0]=c->lr; // 803D5954
  cmps(c,0,(int32_t)c->r[3],0); // 803D5958
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D595C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D5960
  c->r[31]=c->r[4]|c->r[4]; // 803D5964
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D5968
  c->r[30]=c->r[3]|c->r[3]; // 803D596C
  if (crb(c,2)) { goto L_803D598C; } // 803D5970
  c->r[4]=0u+0x00000000u; // 803D5974
  c->lr=0x803D597Cu; f_803D5C5C(c); // 803D5978
  cmps(c,0,(int32_t)c->r[31],0); // 803D597C
  if (!crb(c,1)) { goto L_803D598C; } // 803D5980
  c->r[3]=c->r[30]|c->r[30]; // 803D5984
  c->lr=0x803D598Cu; f_802896EC(c); // 803D5988
L_803D598C:;
  c->r[3]=c->r[30]|c->r[30]; // 803D598C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D5990
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D5994
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5998
  c->lr=c->r[0]; // 803D599C
  c->r[1]=c->r[1]+0x00000010u; // 803D59A0
  return; // 803D59A4
}

// SetResource__Q36nw4hbm2ut7ResFontFPv
void f_803D59A8(Ctx* __restrict c) {
  trace_call(0x803D59A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D59A8
  c->r[0]=c->lr; // 803D59AC
  c->r[5]=0u+0x00000000u; // 803D59B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D59B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D59B8
  c->r[31]=c->r[4]|c->r[4]; // 803D59BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D59C0
  c->r[30]=c->r[3]|c->r[3]; // 803D59C4
  c->r[0]=R32(c->r[3]+0x00000010u); // 803D59C8
  cmps(c,0,(int32_t)c->r[0],0); // 803D59CC
  if (crb(c,2)) { goto L_803D59DC; } // 803D59D0
  c->r[3]=0u+0x00000000u; // 803D59D4
  goto L_803D5AD4; // 803D59D8
L_803D59DC:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 803D59DC
  c->r[0]=c->r[3]+0xADBA0000u; // 803D59E0
  cmpu(c,0,c->r[0],0x00004E55u); // 803D59E4
  if (!crb(c,2)) { goto L_803D5A2C; } // 803D59E8
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 803D59EC
  c->r[3]=R16(c->r[4]+0x0000000Eu); // 803D59F0
  c->r[4]=c->r[4]+c->r[0]; // 803D59F4
  c->ctr=c->r[3]; // 803D59F8
  cmps(c,0,(int32_t)c->r[3],0); // 803D59FC
  if (!crb(c,1)) { goto L_803D5A94; } // 803D5A00
L_803D5A04:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 803D5A04
  c->r[0]=c->r[3]+0xB9B70000u; // 803D5A08
  cmpu(c,0,c->r[0],0x00004E46u); // 803D5A0C
  if (!crb(c,2)) { goto L_803D5A1C; } // 803D5A10
  c->r[5]=c->r[4]+0x00000008u; // 803D5A14
  goto L_803D5A94; // 803D5A18
L_803D5A1C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 803D5A1C
  c->r[4]=c->r[4]+c->r[0]; // 803D5A20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803D5A04; } // 803D5A24
  goto L_803D5A94; // 803D5A28
L_803D5A2C:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 803D5A2C
  cmpu(c,0,c->r[0],0x00000104u); // 803D5A30
  if (!crb(c,2)) { goto L_803D5A60; } // 803D5A34
  c->r[4]=0u+0x52460000u; // 803D5A38
  c->r[3]=c->r[31]|c->r[31]; // 803D5A3C
  c->r[4]=c->r[4]+0x00004E54u; // 803D5A40
  c->r[5]=0u+0x00000104u; // 803D5A44
  c->r[6]=0u+0x00000002u; // 803D5A48
  c->lr=0x803D5A50u; f_803D39A0(c); // 803D5A4C
  cmps(c,0,(int32_t)c->r[3],0); // 803D5A50
  if (!crb(c,2)) { goto L_803D5A88; } // 803D5A54
  c->r[3]=0u+0x00000000u; // 803D5A58
  goto L_803D5AD4; // 803D5A5C
L_803D5A60:;
  c->r[4]=0u+0x52460000u; // 803D5A60
  c->r[3]=c->r[31]|c->r[31]; // 803D5A64
  c->r[4]=c->r[4]+0x00004E54u; // 803D5A68
  c->r[5]=0u+0x00000102u; // 803D5A6C
  c->r[6]=0u+0x00000002u; // 803D5A70
  c->lr=0x803D5A78u; f_803D39A0(c); // 803D5A74
  cmps(c,0,(int32_t)c->r[3],0); // 803D5A78
  if (!crb(c,2)) { goto L_803D5A88; } // 803D5A7C
  c->r[3]=0u+0x00000000u; // 803D5A80
  goto L_803D5AD4; // 803D5A84
L_803D5A88:;
  c->r[3]=c->r[31]|c->r[31]; // 803D5A88
  c->lr=0x803D5A90u; f_803D5AEC(c); // 803D5A8C
  c->r[5]=c->r[3]|c->r[3]; // 803D5A90
L_803D5A94:;
  cmps(c,0,(int32_t)c->r[5],0); // 803D5A94
  if (!crb(c,2)) { goto L_803D5AA4; } // 803D5A98
  c->r[3]=0u+0x00000000u; // 803D5A9C
  goto L_803D5AD4; // 803D5AA0
L_803D5AA4:;
  c->r[3]=c->r[30]|c->r[30]; // 803D5AA4
  c->r[4]=c->r[31]|c->r[31]; // 803D5AA8
  c->lr=0x803D5AB0u; f_803D5C9C(c); // 803D5AAC
  c->r[12]=R32(c->r[30]+0x00000000u); // 803D5AB0
  c->r[3]=c->r[30]|c->r[30]; // 803D5AB4
  c->r[12]=R32(c->r[12]+0x00000054u); // 803D5AB8
  c->ctr=c->r[12]; // 803D5ABC
  if (true) { c->lr=0x803D5AC4u; dispatch(c,c->ctr); } // 803D5AC0
  c->r[4]=c->r[3]|c->r[3]; // 803D5AC4
  c->r[3]=c->r[30]|c->r[30]; // 803D5AC8
  c->lr=0x803D5AD0u; f_803D5614(c); // 803D5ACC
  c->r[3]=0u+0x00000001u; // 803D5AD0
L_803D5AD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5AD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D5AD8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D5ADC
  c->lr=c->r[0]; // 803D5AE0
  c->r[1]=c->r[1]+0x00000010u; // 803D5AE4
  return; // 803D5AE8
}

// Rebuild__Q36nw4hbm2ut7ResFontFPQ36nw4hbm2ut16BinaryFileHeader
void f_803D5AEC(Ctx* __restrict c) {
  trace_call(0x803D5AECu);
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 803D5AEC
  c->r[4]=0u+0x46490000u; // 803D5AF0
  c->r[11]=c->r[4]+0x00004E46u; // 803D5AF4
  c->r[5]=0u+0x00000000u; // 803D5AF8
  c->r[4]=c->r[3]+c->r[0]; // 803D5AFC
  c->r[6]=0u+0x00000000u; // 803D5B00
  c->r[8]=0u+0x54470000u; // 803D5B04
  c->r[10]=0u+0x43570000u; // 803D5B08
  c->r[9]=0u+0x434D0000u; // 803D5B0C
  c->r[7]=0u+0x474C0000u; // 803D5B10
  goto L_803D5BF8; // 803D5B14
L_803D5B18:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 803D5B18
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 803D5B1C
  if (crb(c,2)) { goto L_803D5B68; } // 803D5B20
  if (!crb(c,0)) { goto L_803D5B48; } // 803D5B24
  c->r[0]=c->r[10]+0x00004448u; // 803D5B28
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 803D5B2C
  if (crb(c,2)) { goto L_803D5BB4; } // 803D5B30
  if (!crb(c,0)) { goto L_803D5BE4; } // 803D5B34
  c->r[0]=c->r[9]+0x00004150u; // 803D5B38
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 803D5B3C
  if (crb(c,2)) { goto L_803D5BCC; } // 803D5B40
  goto L_803D5BE4; // 803D5B44
L_803D5B48:;
  c->r[0]=c->r[8]+0x00004C50u; // 803D5B48
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 803D5B4C
  if (crb(c,2)) { goto L_803D5BA4; } // 803D5B50
  if (!crb(c,0)) { goto L_803D5BE4; } // 803D5B54
  c->r[0]=c->r[7]+0x00004752u; // 803D5B58
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[0]); // 803D5B5C
  if (crb(c,2)) { goto L_803D5BEC; } // 803D5B60
  goto L_803D5BE4; // 803D5B64
L_803D5B68:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 803D5B68
  c->r[5]=c->r[4]+0x00000008u; // 803D5B6C
  c->r[0]=c->r[3]+c->r[0]; // 803D5B70
  W32(c->r[4]+0x00000010u,c->r[0]); // 803D5B74
  c->r[0]=R32(c->r[4]+0x00000014u); // 803D5B78
  cmps(c,0,(int32_t)c->r[0],0); // 803D5B7C
  if (crb(c,2)) { goto L_803D5B8C; } // 803D5B80
  c->r[0]=c->r[3]+c->r[0]; // 803D5B84
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 803D5B88
L_803D5B8C:;
  c->r[0]=R32(c->r[5]+0x00000010u); // 803D5B8C
  cmps(c,0,(int32_t)c->r[0],0); // 803D5B90
  if (crb(c,2)) { goto L_803D5BEC; } // 803D5B94
  c->r[0]=c->r[3]+c->r[0]; // 803D5B98
  W32(c->r[5]+0x00000010u,c->r[0]); // 803D5B9C
  goto L_803D5BEC; // 803D5BA0
L_803D5BA4:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 803D5BA4
  c->r[0]=c->r[3]+c->r[0]; // 803D5BA8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 803D5BAC
  goto L_803D5BEC; // 803D5BB0
L_803D5BB4:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803D5BB4
  cmps(c,0,(int32_t)c->r[0],0); // 803D5BB8
  if (crb(c,2)) { goto L_803D5BEC; } // 803D5BBC
  c->r[0]=c->r[3]+c->r[0]; // 803D5BC0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803D5BC4
  goto L_803D5BEC; // 803D5BC8
L_803D5BCC:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 803D5BCC
  cmps(c,0,(int32_t)c->r[0],0); // 803D5BD0
  if (crb(c,2)) { goto L_803D5BEC; } // 803D5BD4
  c->r[0]=c->r[3]+c->r[0]; // 803D5BD8
  W32(c->r[4]+0x00000010u,c->r[0]); // 803D5BDC
  goto L_803D5BEC; // 803D5BE0
L_803D5BE4:;
  c->r[3]=0u+0x00000000u; // 803D5BE4
  return; // 803D5BE8
L_803D5BEC:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 803D5BEC
  c->r[6]=c->r[6]+0x00000001u; // 803D5BF0
  c->r[4]=c->r[4]+c->r[0]; // 803D5BF4
L_803D5BF8:;
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 803D5BF8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803D5BFC
  if (crb(c,0)) { IRQCHK(c); goto L_803D5B18; } // 803D5C00
  c->r[4]=0u+0x52460000u; // 803D5C04
  c->r[0]=c->r[4]+0x00004E55u; // 803D5C08
  W32(c->r[3]+0x00000000u,c->r[0]); // 803D5C0C
  c->r[3]=c->r[5]|c->r[5]; // 803D5C10
  return; // 803D5C14
}

// __ct__Q46nw4hbm2ut6detail11ResFontBaseFv
void f_803D5C18(Ctx* __restrict c) {
  trace_call(0x803D5C18u);
  c->r[5]=0u+0x80440000u; // 803D5C18
  c->r[4]=0u+0x80440000u; // 803D5C1C
  c->r[5]=c->r[5]+0xFFFFA580u; // 803D5C20
  c->r[7]=0u+0x80440000u; // 803D5C24
  W32(c->r[3]+0x00000000u,c->r[5]); // 803D5C28
  c->r[4]=c->r[4]+0xFFFFA528u; // 803D5C2C
  c->r[0]=0u+0x00000000u; // 803D5C30
  {uint32_t ea=c->r[7]+0xFFFFA518u; c->r[6]=R32(ea); c->r[7]=ea;} // 803D5C34
  c->r[5]=R32(c->r[7]+0x00000004u); // 803D5C38
  W32(c->r[3]+0x00000004u,c->r[6]); // 803D5C3C
  W32(c->r[3]+0x00000008u,c->r[5]); // 803D5C40
  c->r[5]=R32(c->r[7]+0x00000008u); // 803D5C44
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 803D5C48
  W32(c->r[3]+0x00000000u,c->r[4]); // 803D5C4C
  W32(c->r[3]+0x00000010u,c->r[0]); // 803D5C50
  W32(c->r[3]+0x00000014u,c->r[0]); // 803D5C54
  return; // 803D5C58
}

// fn_803D5C5C
void f_803D5C5C(Ctx* __restrict c) {
  trace_call(0x803D5C5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5C5C
  c->r[0]=c->lr; // 803D5C60
  cmps(c,0,(int32_t)c->r[3],0); // 803D5C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D5C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D5C6C
  c->r[31]=c->r[3]|c->r[3]; // 803D5C70
  if (crb(c,2)) { goto L_803D5C84; } // 803D5C74
  cmps(c,0,(int32_t)c->r[4],0); // 803D5C78
  if (!crb(c,1)) { goto L_803D5C84; } // 803D5C7C
  c->lr=0x803D5C84u; f_802896EC(c); // 803D5C80
L_803D5C84:;
  c->r[3]=c->r[31]|c->r[31]; // 803D5C84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D5C88
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5C8C
  c->lr=c->r[0]; // 803D5C90
  c->r[1]=c->r[1]+0x00000010u; // 803D5C94
  return; // 803D5C98
}

// SetResourceBuffer__Q46nw4hbm2ut6detail11ResFontBaseFPvPQ36nw4hbm2ut15FontInformation
void f_803D5C9C(Ctx* __restrict c) {
  trace_call(0x803D5C9Cu);
  W32(c->r[3]+0x00000010u,c->r[4]); // 803D5C9C
  W32(c->r[3]+0x00000014u,c->r[5]); // 803D5CA0
  return; // 803D5CA4
}

// fn_803D5CA8
void f_803D5CA8(Ctx* __restrict c) {
  trace_call(0x803D5CA8u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5CA8
  c->r[3]=R8(c->r[3]+0x00000015u); // 803D5CAC
  return; // 803D5CB0
}

// fn_803D5CB4
void f_803D5CB4(Ctx* __restrict c) {
  trace_call(0x803D5CB4u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5CB4
  c->r[3]=R8(c->r[3]+0x00000014u); // 803D5CB8
  return; // 803D5CBC
}

// fn_803D5CC0
void f_803D5CC0(Ctx* __restrict c) {
  trace_call(0x803D5CC0u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5CC0
  c->r[3]=R8(c->r[3]+0x00000016u); // 803D5CC4
  return; // 803D5CC8
}

// fn_803D5CCC
void f_803D5CCC(Ctx* __restrict c) {
  trace_call(0x803D5CCCu);
  c->r[4]=R32(c->r[3]+0x00000014u); // 803D5CCC
  c->r[3]=R8(c->r[4]+0x00000016u); // 803D5CD0
  c->r[0]=R8(c->r[4]+0x00000014u); // 803D5CD4
  c->r[3]=c->r[0]-c->r[3]; // 803D5CD8
  return; // 803D5CDC
}

// fn_803D5CE0
void f_803D5CE0(Ctx* __restrict c) {
  trace_call(0x803D5CE0u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5CE0
  c->r[3]=R32(c->r[3]+0x00000008u); // 803D5CE4
  c->r[3]=R8(c->r[3]+0x00000002u); // 803D5CE8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 803D5CEC
  return; // 803D5CF0
}

// fn_803D5CF4
void f_803D5CF4(Ctx* __restrict c) {
  trace_call(0x803D5CF4u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5CF4
  c->r[3]=R32(c->r[3]+0x00000008u); // 803D5CF8
  c->r[3]=R8(c->r[3]+0x00000001u); // 803D5CFC
  return; // 803D5D00
}

// fn_803D5D04
void f_803D5D04(Ctx* __restrict c) {
  trace_call(0x803D5D04u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5D04
  c->r[3]=R32(c->r[3]+0x00000008u); // 803D5D08
  c->r[3]=R8(c->r[3]+0x00000000u); // 803D5D0C
  return; // 803D5D10
}

// fn_803D5D14
void f_803D5D14(Ctx* __restrict c) {
  trace_call(0x803D5D14u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5D14
  c->r[3]=R32(c->r[3]+0x00000008u); // 803D5D18
  c->r[3]=R8(c->r[3]+0x00000003u); // 803D5D1C
  return; // 803D5D20
}

// fn_803D5D24
void f_803D5D24(Ctx* __restrict c) {
  trace_call(0x803D5D24u);
  c->r[3]=0u+0x00000002u; // 803D5D24
  return; // 803D5D28
}

// fn_803D5D2C
void f_803D5D2C(Ctx* __restrict c) {
  trace_call(0x803D5D2Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5D2C
  c->r[3]=R32(c->r[3]+0x00000008u); // 803D5D30
  c->r[3]=R16(c->r[3]+0x0000000Au); // 803D5D34
  return; // 803D5D38
}

// fn_803D5D3C
void f_803D5D3C(Ctx* __restrict c) {
  trace_call(0x803D5D3Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5D3C
  c->r[3]=R8(c->r[3]+0x00000001u); // 803D5D40
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 803D5D44
  return; // 803D5D48
}

// fn_803D5D4C
void f_803D5D4C(Ctx* __restrict c) {
  trace_call(0x803D5D4Cu);
  c->r[4]=R32(c->r[3]+0x00000014u); // 803D5D4C
  c->r[0]=R16(c->r[4]+0x00000004u); // 803D5D50
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 803D5D54
  c->r[0]=R8(c->r[4]+0x00000006u); // 803D5D58
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 803D5D5C
  return; // 803D5D60
}

// fn_803D5D64
void f_803D5D64(Ctx* __restrict c) {
  trace_call(0x803D5D64u);
  c->r[5]=R32(c->r[3]+0x00000014u); // 803D5D64
  c->r[0]=R8(c->r[4]+0x00000000u); // 803D5D68
  c->r[3]=R8(c->r[4]+0x00000001u); // 803D5D6C
  W8(c->r[5]+0x00000004u,c->r[0]); // 803D5D70
  c->r[0]=R8(c->r[4]+0x00000002u); // 803D5D74
  W8(c->r[5]+0x00000005u,c->r[3]); // 803D5D78
  W8(c->r[5]+0x00000006u,c->r[0]); // 803D5D7C
  return; // 803D5D80
}

// fn_803D5D84
void f_803D5D84(Ctx* __restrict c) {
  trace_call(0x803D5D84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5D84
  c->r[0]=c->lr; // 803D5D88
  c->r[5]=c->r[4]|c->r[4]; // 803D5D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D5D90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D5D94
  c->r[31]=c->r[3]|c->r[3]; // 803D5D98
  c->r[6]=R32(c->r[3]+0x00000014u); // 803D5D9C
  c->r[6]=R32(c->r[6]+0x00000010u); // 803D5DA0
  goto L_803D5DD8; // 803D5DA4
L_803D5DA8:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 803D5DA8
  cmpu(c,0,c->r[0],c->r[4]); // 803D5DAC
  if (crb(c,1)) { goto L_803D5DD4; } // 803D5DB0
  c->r[0]=R16(c->r[6]+0x00000002u); // 803D5DB4
  cmpu(c,0,c->r[4],c->r[0]); // 803D5DB8
  if (crb(c,1)) { goto L_803D5DD4; } // 803D5DBC
  c->r[3]=c->r[31]|c->r[31]; // 803D5DC0
  c->r[4]=c->r[6]|c->r[6]; // 803D5DC4
  c->lr=0x803D5DCCu; f_803D6010(c); // 803D5DC8
  c->r[5]=c->r[3]|c->r[3]; // 803D5DCC
  goto L_803D5DE8; // 803D5DD0
L_803D5DD4:;
  c->r[6]=R32(c->r[6]+0x00000008u); // 803D5DD4
L_803D5DD8:;
  cmps(c,0,(int32_t)c->r[6],0); // 803D5DD8
  if (!crb(c,2)) { IRQCHK(c); goto L_803D5DA8; } // 803D5DDC
  c->r[3]=0u+0x00010000u; // 803D5DE0
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 803D5DE4
L_803D5DE8:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 803D5DE8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803D5DEC
  if (crb(c,2)) { goto L_803D5E04; } // 803D5DF0
  c->r[4]=R32(c->r[31]+0x00000014u); // 803D5DF4
  c->r[3]=0u+0x00000001u; // 803D5DF8
  W16(c->r[4]+0x00000002u,c->r[5]); // 803D5DFC
  goto L_803D5E08; // 803D5E00
L_803D5E04:;
  c->r[3]=0u+0x00000000u; // 803D5E04
L_803D5E08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5E08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D5E0C
  c->lr=c->r[0]; // 803D5E10
  c->r[1]=c->r[1]+0x00000010u; // 803D5E14
  return; // 803D5E18
}

// fn_803D5E1C
void f_803D5E1C(Ctx* __restrict c) {
  trace_call(0x803D5E1Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D5E1C
  W8(c->r[3]+0x00000001u,c->r[4]); // 803D5E20
  return; // 803D5E24
}

// fn_803D5E28
void f_803D5E28(Ctx* __restrict c) {
  trace_call(0x803D5E28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5E28
  c->r[0]=c->lr; // 803D5E2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D5E30
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D5E34
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 803D5E38
  c->ctr=c->r[12]; // 803D5E3C
  if (true) { c->lr=0x803D5E44u; dispatch(c,c->ctr); } // 803D5E40
  c->r[0]=rotl(c->r[3],8)&0x000000FFu; // 803D5E44
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D5E48
  c->r[0]=rotl(c->r[3],16)&0x000000FFu; // 803D5E4C
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D5E50
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 803D5E54
  c->r[3]=c->r[0]|c->r[0]; // 803D5E58
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803D5E5C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 803D5E60
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5E64
  c->lr=c->r[0]; // 803D5E68
  c->r[1]=c->r[1]+0x00000010u; // 803D5E6C
  return; // 803D5E70
}

// fn_803D5E74
void f_803D5E74(Ctx* __restrict c) {
  trace_call(0x803D5E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5E74
  c->r[0]=c->lr; // 803D5E78
  c->r[6]=R32(c->r[3]+0x00000014u); // 803D5E7C
  c->r[5]=c->r[4]|c->r[4]; // 803D5E80
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D5E84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D5E88
  c->r[31]=c->r[3]|c->r[3]; // 803D5E8C
  c->r[6]=R32(c->r[6]+0x00000010u); // 803D5E90
  goto L_803D5EC4; // 803D5E94
L_803D5E98:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 803D5E98
  cmpu(c,0,c->r[0],c->r[4]); // 803D5E9C
  if (crb(c,1)) { goto L_803D5EC0; } // 803D5EA0
  c->r[0]=R16(c->r[6]+0x00000002u); // 803D5EA4
  cmpu(c,0,c->r[4],c->r[0]); // 803D5EA8
  if (crb(c,1)) { goto L_803D5EC0; } // 803D5EAC
  c->r[3]=c->r[31]|c->r[31]; // 803D5EB0
  c->r[4]=c->r[6]|c->r[6]; // 803D5EB4
  c->lr=0x803D5EBCu; f_803D6010(c); // 803D5EB8
  goto L_803D5ED4; // 803D5EBC
L_803D5EC0:;
  c->r[6]=R32(c->r[6]+0x00000008u); // 803D5EC0
L_803D5EC4:;
  cmps(c,0,(int32_t)c->r[6],0); // 803D5EC4
  if (!crb(c,2)) { IRQCHK(c); goto L_803D5E98; } // 803D5EC8
  c->r[3]=0u+0x00010000u; // 803D5ECC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D5ED0
L_803D5ED4:;
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 803D5ED4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803D5ED8
  if (crb(c,2)) { goto L_803D5EE4; } // 803D5EDC
  goto L_803D5EEC; // 803D5EE0
L_803D5EE4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 803D5EE4
  c->r[3]=R16(c->r[3]+0x00000002u); // 803D5EE8
L_803D5EEC:;
  c->r[6]=R32(c->r[31]+0x00000014u); // 803D5EEC
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 803D5EF0
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 803D5EF4
  goto L_803D5F30; // 803D5EF8
L_803D5EFC:;
  c->r[5]=R16(c->r[4]+0x00000000u); // 803D5EFC
  cmpu(c,0,c->r[5],c->r[3]); // 803D5F00
  if (crb(c,1)) { goto L_803D5F2C; } // 803D5F04
  c->r[0]=R16(c->r[4]+0x00000002u); // 803D5F08
  cmpu(c,0,c->r[3],c->r[0]); // 803D5F0C
  if (crb(c,1)) { goto L_803D5F2C; } // 803D5F10
  c->r[3]=c->r[3]-c->r[5]; // 803D5F14
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803D5F18
  c->r[0]=c->r[0]-c->r[3]; // 803D5F1C
  c->r[3]=c->r[4]+c->r[0]; // 803D5F20
  c->r[4]=c->r[3]+0x00000008u; // 803D5F24
  goto L_803D5F3C; // 803D5F28
L_803D5F2C:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 803D5F2C
L_803D5F30:;
  cmps(c,0,(int32_t)c->r[4],0); // 803D5F30
  if (!crb(c,2)) { IRQCHK(c); goto L_803D5EFC; } // 803D5F34
  c->r[4]=c->r[6]+0x00000004u; // 803D5F38
L_803D5F3C:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 803D5F3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D5F40
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 803D5F44
  c->r[0]=R8(c->r[4]+0x00000002u); // 803D5F48
  c->r[3]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 803D5F4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5F50
  c->lr=c->r[0]; // 803D5F54
  c->r[1]=c->r[1]+0x00000010u; // 803D5F58
  return; // 803D5F5C
}

// fn_803D5F60
void f_803D5F60(Ctx* __restrict c) {
  trace_call(0x803D5F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D5F60
  c->r[0]=c->lr; // 803D5F64
  c->r[6]=R32(c->r[3]+0x00000014u); // 803D5F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D5F6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D5F70
  c->r[31]=c->r[4]|c->r[4]; // 803D5F74
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D5F78
  c->r[30]=c->r[3]|c->r[3]; // 803D5F7C
  c->r[4]=R32(c->r[6]+0x00000010u); // 803D5F80
  goto L_803D5FB4; // 803D5F84
L_803D5F88:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 803D5F88
  cmpu(c,0,c->r[0],c->r[5]); // 803D5F8C
  if (crb(c,1)) { goto L_803D5FB0; } // 803D5F90
  c->r[0]=R16(c->r[4]+0x00000002u); // 803D5F94
  cmpu(c,0,c->r[5],c->r[0]); // 803D5F98
  if (crb(c,1)) { goto L_803D5FB0; } // 803D5F9C
  c->r[3]=c->r[30]|c->r[30]; // 803D5FA0
  c->lr=0x803D5FA8u; f_803D6010(c); // 803D5FA4
  c->r[5]=c->r[3]|c->r[3]; // 803D5FA8
  goto L_803D5FC4; // 803D5FAC
L_803D5FB0:;
  c->r[4]=R32(c->r[4]+0x00000008u); // 803D5FB0
L_803D5FB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 803D5FB4
  if (!crb(c,2)) { IRQCHK(c); goto L_803D5F88; } // 803D5FB8
  c->r[3]=0u+0x00010000u; // 803D5FBC
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 803D5FC0
L_803D5FC4:;
  c->r[0]=rotl(c->r[5],0)&0x0000FFFFu; // 803D5FC4
  c->r[3]=c->r[30]|c->r[30]; // 803D5FC8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803D5FCC
  c->r[4]=c->r[31]|c->r[31]; // 803D5FD0
  if (crb(c,2)) { goto L_803D5FDC; } // 803D5FD4
  goto L_803D5FE4; // 803D5FD8
L_803D5FDC:;
  c->r[5]=R32(c->r[30]+0x00000014u); // 803D5FDC
  c->r[5]=R16(c->r[5]+0x00000002u); // 803D5FE0
L_803D5FE4:;
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 803D5FE4
  c->lr=0x803D5FECu; f_803D60E4(c); // 803D5FE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D5FEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D5FF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D5FF4
  c->lr=c->r[0]; // 803D5FF8
  c->r[1]=c->r[1]+0x00000010u; // 803D5FFC
  return; // 803D6000
}

// fn_803D6004
void f_803D6004(Ctx* __restrict c) {
  trace_call(0x803D6004u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 803D6004
  c->r[3]=R8(c->r[3]+0x00000007u); // 803D6008
  return; // 803D600C
}

// fn_803D6010
void f_803D6010(Ctx* __restrict c) {
  trace_call(0x803D6010u);
  c->r[0]=R16(c->r[4]+0x00000004u); // 803D6010
  c->r[3]=0u+0x00010000u; // 803D6014
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803D6018
  cmps(c,0,(int32_t)c->r[0],1); // 803D601C
  if (crb(c,2)) { goto L_803D6058; } // 803D6020
  if (!crb(c,0)) { goto L_803D6034; } // 803D6024
  cmps(c,0,(int32_t)c->r[0],0); // 803D6028
  if (!crb(c,0)) { goto L_803D6040; } // 803D602C
  return; // 803D6030
L_803D6034:;
  cmps(c,0,(int32_t)c->r[0],3); // 803D6034
  if (!crb(c,0)) return; // 803D6038
  goto L_803D6070; // 803D603C
L_803D6040:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 803D6040
  c->r[3]=R16(c->r[4]+0x0000000Cu); // 803D6044
  c->r[0]=c->r[5]-c->r[0]; // 803D6048
  c->r[0]=c->r[3]+c->r[0]; // 803D604C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 803D6050
  return; // 803D6054
L_803D6058:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 803D6058
  c->r[0]=c->r[5]-c->r[0]; // 803D605C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803D6060
  c->r[3]=c->r[4]+c->r[0]; // 803D6064
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 803D6068
  return; // 803D606C
L_803D6070:;
  c->r[6]=c->r[4]+0x0000000Cu; // 803D6070
  c->r[4]=R16(c->r[4]+0x0000000Cu); // 803D6074
  c->r[7]=c->r[6]+0x00000002u; // 803D6078
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803D607C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803D6080
  c->r[4]=c->r[6]+c->r[0]; // 803D6084
  c->r[6]=c->r[4]+0x00000002u; // 803D6088
  goto L_803D60D8; // 803D608C
L_803D6090:;
  c->r[0]=c->r[6]-c->r[7]; // 803D6090
  c->r[0]=sraw(c,c->r[0],2); // 803D6094
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 803D6098
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 803D609C
  c->r[0]=c->r[0]+c->r[4]; // 803D60A0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 803D60A4
  c->r[4]=c->r[7]+c->r[0]; // 803D60A8
  c->r[0]=R16(c->r[7]+c->r[0]); // 803D60AC
  cmpu(c,0,c->r[0],c->r[5]); // 803D60B0
  if (!crb(c,0)) { goto L_803D60C0; } // 803D60B4
  c->r[7]=c->r[4]+0x00000004u; // 803D60B8
  goto L_803D60D8; // 803D60BC
L_803D60C0:;
  cmpu(c,0,c->r[5],c->r[0]); // 803D60C0
  if (!crb(c,0)) { goto L_803D60D0; } // 803D60C4
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 803D60C8
  goto L_803D60D8; // 803D60CC
L_803D60D0:;
  c->r[3]=R16(c->r[4]+0x00000002u); // 803D60D0
  return; // 803D60D4
L_803D60D8:;
  cmpu(c,0,c->r[7],c->r[6]); // 803D60D8
  if (!crb(c,1)) { IRQCHK(c); goto L_803D6090; } // 803D60DC
  return; // 803D60E0
}

// fn_803D60E4
void f_803D60E4(Ctx* __restrict c) {
  trace_call(0x803D60E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D60E4
  c->r[12]=R32(c->r[3]+0x00000014u); // 803D60E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D60EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D60F0
  c->r[3]=R32(c->r[12]+0x00000008u); // 803D60F4
  c->r[31]=R16(c->r[3]+0x0000000Cu); // 803D60F8
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 803D60FC
  c->r[6]=R8(c->r[3]+0x00000000u); // 803D6100
  c->r[9]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 803D6104
  c->r[7]=R8(c->r[3]+0x00000001u); // 803D6108
  c->r[8]=c->r[6]+0x00000001u; // 803D610C
  c->r[0]=R32(c->r[3]+0x00000004u); // 803D6110
  c->r[6]=R32(c->r[3]+0x00000014u); // 803D6114
  c->r[7]=c->r[7]+0x00000001u; // 803D6118
  c->r[11]=divwu(c->r[5],c->r[9]); // 803D611C
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 803D6120
  c->r[30]=c->r[5]-c->r[9]; // 803D6124
  c->r[10]=divwu(c->r[30],c->r[31]); // 803D6128
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[31]); // 803D612C
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[0]); // 803D6130
  c->r[9]=c->r[30]-c->r[9]; // 803D6134
  c->r[0]=c->r[6]+c->r[0]; // 803D6138
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[8]); // 803D613C
  W32(c->r[4]+0x00000000u,c->r[0]); // 803D6140
  c->r[6]=R32(c->r[12]+0x0000000Cu); // 803D6144
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 803D6148
  goto L_803D6184; // 803D614C
L_803D6150:;
  c->r[7]=R16(c->r[6]+0x00000000u); // 803D6150
  cmpu(c,0,c->r[7],c->r[5]); // 803D6154
  if (crb(c,1)) { goto L_803D6180; } // 803D6158
  c->r[0]=R16(c->r[6]+0x00000002u); // 803D615C
  cmpu(c,0,c->r[5],c->r[0]); // 803D6160
  if (crb(c,1)) { goto L_803D6180; } // 803D6164
  c->r[5]=c->r[5]-c->r[7]; // 803D6168
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803D616C
  c->r[0]=c->r[0]-c->r[5]; // 803D6170
  c->r[5]=c->r[6]+c->r[0]; // 803D6174
  c->r[7]=c->r[5]+0x00000008u; // 803D6178
  goto L_803D6190; // 803D617C
L_803D6180:;
  c->r[6]=R32(c->r[6]+0x00000004u); // 803D6180
L_803D6184:;
  cmps(c,0,(int32_t)c->r[6],0); // 803D6184
  if (!crb(c,2)) { IRQCHK(c); goto L_803D6150; } // 803D6188
  c->r[7]=c->r[12]+0x00000004u; // 803D618C
L_803D6190:;
  c->r[6]=R8(c->r[7]+0x00000000u); // 803D6190
  c->r[5]=c->r[8]+0x00000001u; // 803D6194
  c->r[0]=c->r[9]+0x00000001u; // 803D6198
  W8(c->r[4]+0x00000004u,c->r[6]); // 803D619C
  c->r[6]=R8(c->r[7]+0x00000001u); // 803D61A0
  W8(c->r[4]+0x00000005u,c->r[6]); // 803D61A4
  c->r[6]=R8(c->r[7]+0x00000002u); // 803D61A8
  W8(c->r[4]+0x00000006u,c->r[6]); // 803D61AC
  c->r[6]=R8(c->r[3]+0x00000001u); // 803D61B0
  W8(c->r[4]+0x00000007u,c->r[6]); // 803D61B4
  c->r[6]=R16(c->r[3]+0x0000000Au); // 803D61B8
  W32(c->r[4]+0x00000008u,c->r[6]); // 803D61BC
  c->r[6]=R16(c->r[3]+0x00000010u); // 803D61C0
  W16(c->r[4]+0x0000000Cu,c->r[6]); // 803D61C4
  c->r[3]=R16(c->r[3]+0x00000012u); // 803D61C8
  W16(c->r[4]+0x0000000Eu,c->r[3]); // 803D61CC
  W16(c->r[4]+0x00000010u,c->r[5]); // 803D61D0
  W16(c->r[4]+0x00000012u,c->r[0]); // 803D61D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D61D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D61DC
  c->r[1]=c->r[1]+0x00000010u; // 803D61E0
  return; // 803D61E4
}

// __ct__Q36nw4hbm2ut19TagProcessorBase<c>Fv
void f_803D61E8(Ctx* __restrict c) {
  trace_call(0x803D61E8u);
  c->r[4]=0u+0x80440000u; // 803D61E8
  c->r[4]=c->r[4]+0xFFFFA620u; // 803D61EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803D61F0
  return; // 803D61F4
}

// fn_803D61F8
void f_803D61F8(Ctx* __restrict c) {
  trace_call(0x803D61F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D61F8
  c->r[0]=c->lr; // 803D61FC
  cmps(c,0,(int32_t)c->r[3],0); // 803D6200
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D6204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D6208
  c->r[31]=c->r[3]|c->r[3]; // 803D620C
  if (crb(c,2)) { goto L_803D6220; } // 803D6210
  cmps(c,0,(int32_t)c->r[4],0); // 803D6214
  if (!crb(c,1)) { goto L_803D6220; } // 803D6218
  c->lr=0x803D6220u; f_802896EC(c); // 803D621C
L_803D6220:;
  c->r[3]=c->r[31]|c->r[31]; // 803D6220
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D6224
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D6228
  c->lr=c->r[0]; // 803D622C
  c->r[1]=c->r[1]+0x00000010u; // 803D6230
  return; // 803D6234
}

// fn_803D6238
void f_803D6238(Ctx* __restrict c) {
  trace_call(0x803D6238u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6238
  c->r[0]=c->lr; // 803D623C
  W32(c->r[1]+0x00000054u,c->r[0]); // 803D6240
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803D6244
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803D6248
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803D624C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803D6250
  cmps(c,0,(int32_t)c->r[4],10); // 803D6254
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D6258
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D625C
  W32(c->r[1]+0x00000024u,c->r[29]); // 803D6260
  c->r[29]=c->r[5]|c->r[5]; // 803D6264
  if (crb(c,2)) { goto L_803D627C; } // 803D6268
  if (!crb(c,0)) { goto L_803D6368; } // 803D626C
  cmps(c,0,(int32_t)c->r[4],9); // 803D6270
  if (!crb(c,0)) { goto L_803D62B0; } // 803D6274
  goto L_803D6368; // 803D6278
L_803D627C:;
  c->r[31]=R32(c->r[5]+0x00000000u); // 803D627C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 803D6280
  c->r[3]=c->r[31]|c->r[31]; // 803D6284
  c->lr=0x803D628Cu; f_803D69B8(c); // 803D6288
  c->f[31]=c->f[1]; // 803D628C
  c->r[3]=c->r[31]|c->r[31]; // 803D6290
  c->lr=0x803D6298u; f_803D5028(c); // 803D6294
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 803D6298
  c->r[3]=c->r[31]|c->r[31]; // 803D629C
  c->f[1]=c->f[30]; // 803D62A0
  c->lr=0x803D62A8u; f_803D4FE4(c); // 803D62A4
  c->r[3]=0u+0x00000003u; // 803D62A8
  goto L_803D636C; // 803D62AC
L_803D62B0:;
  c->r[30]=R32(c->r[5]+0x00000000u); // 803D62B0
  c->r[3]=c->r[30]|c->r[30]; // 803D62B4
  c->lr=0x803D62BCu; f_803D6A44(c); // 803D62B8
  cmps(c,0,(int32_t)c->r[3],0); // 803D62BC
  c->r[31]=c->r[3]|c->r[3]; // 803D62C0
  if (!crb(c,1)) { goto L_803D6360; } // 803D62C4
  c->r[3]=c->r[30]|c->r[30]; // 803D62C8
  c->lr=0x803D62D0u; f_803D4E98(c); // 803D62CC
  cmps(c,0,(int32_t)c->r[3],0); // 803D62D0
  if (crb(c,2)) { goto L_803D62E8; } // 803D62D4
  c->r[3]=c->r[30]|c->r[30]; // 803D62D8
  c->lr=0x803D62E0u; f_803D4EA0(c); // 803D62DC
  c->f[31]=c->f[1]; // 803D62E0
  goto L_803D62F4; // 803D62E4
L_803D62E8:;
  c->r[3]=c->r[30]|c->r[30]; // 803D62E8
  c->lr=0x803D62F0u; f_803D4D6C(c); // 803D62EC
  c->f[31]=c->f[1]; // 803D62F0
L_803D62F4:;
  c->r[3]=c->r[30]|c->r[30]; // 803D62F4
  c->lr=0x803D62FCu; f_803D5020(c); // 803D62F8
  c->r[0]=0u+0x43300000u; // 803D62FC
  c->r[3]=c->r[31]^0x80000000u; // 803D6300
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D6304
  c->r[4]=0u+0x803F0000u; // 803D6308
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D630C
  c->r[3]=c->r[30]|c->r[30]; // 803D6310
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D6314
  {uint32_t ea=c->r[4]+0x00000F20u; c->f[2]=RF64(ea);} // 803D6318
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 803D631C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803D6320
  W32(c->r[1]+0x00000018u,c->r[0]); // 803D6324
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D6328
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 803D632C
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 803D6330
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803D6334
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803D6338
  c->r[4]=R32(c->r[1]+0x00000014u); // 803D633C
  c->r[0]=c->r[4]+0x00000001u; // 803D6340
  c->r[0]=c->r[0]^0x80000000u; // 803D6344
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803D6348
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803D634C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D6350
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D6354
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 803D6358
  c->lr=0x803D6360u; f_803D4FF0(c); // 803D635C
L_803D6360:;
  c->r[3]=0u+0x00000001u; // 803D6360
  goto L_803D636C; // 803D6364
L_803D6368:;
  c->r[3]=0u+0x00000000u; // 803D6368
L_803D636C:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803D636C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803D6370
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 803D6374
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 803D6378
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D637C
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D6380
  c->r[0]=R32(c->r[1]+0x00000054u); // 803D6384
  c->r[29]=R32(c->r[1]+0x00000024u); // 803D6388
  c->lr=c->r[0]; // 803D638C
  c->r[1]=c->r[1]+0x00000050u; // 803D6390
  return; // 803D6394
}

// fn_803D6398
void f_803D6398(Ctx* __restrict c) {
  trace_call(0x803D6398u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6398
  c->r[0]=c->lr; // 803D639C
  W32(c->r[1]+0x00000064u,c->r[0]); // 803D63A0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803D63A4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803D63A8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 803D63AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 803D63B0
  c->r[11]=c->r[1]+0x00000040u; // 803D63B4
  c->lr=0x803D63BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D63B8
  cmps(c,0,(int32_t)c->r[5],10); // 803D63BC
  c->r[27]=c->r[4]|c->r[4]; // 803D63C0
  c->r[28]=c->r[6]|c->r[6]; // 803D63C4
  if (crb(c,2)) { goto L_803D63DC; } // 803D63C8
  if (!crb(c,0)) { goto L_803D65A4; } // 803D63CC
  cmps(c,0,(int32_t)c->r[5],9); // 803D63D0
  if (!crb(c,0)) { goto L_803D6484; } // 803D63D4
  goto L_803D65A4; // 803D63D8
L_803D63DC:;
  c->r[30]=R32(c->r[6]+0x00000000u); // 803D63DC
  c->r[3]=c->r[30]|c->r[30]; // 803D63E0
  c->lr=0x803D63E8u; f_803D5020(c); // 803D63E4
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 803D63E8
  c->r[3]=c->r[30]|c->r[30]; // 803D63EC
  c->lr=0x803D63F4u; f_803D5028(c); // 803D63F0
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803D63F4
  c->r[31]=R32(c->r[28]+0x00000000u); // 803D63F8
  {uint32_t ea=c->r[28]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 803D63FC
  c->r[3]=c->r[31]|c->r[31]; // 803D6400
  c->lr=0x803D6408u; f_803D69B8(c); // 803D6404
  c->f[31]=c->f[1]; // 803D6408
  c->r[3]=c->r[31]|c->r[31]; // 803D640C
  c->lr=0x803D6414u; f_803D5028(c); // 803D6410
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 803D6414
  c->r[3]=c->r[31]|c->r[31]; // 803D6418
  c->f[1]=c->f[30]; // 803D641C
  c->lr=0x803D6424u; f_803D4FE4(c); // 803D6420
  c->r[3]=c->r[30]|c->r[30]; // 803D6424
  c->lr=0x803D642Cu; f_803D5020(c); // 803D6428
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 803D642C
  c->r[3]=R32(c->r[28]+0x00000000u); // 803D6430
  c->lr=0x803D6438u; f_803D4DD0(c); // 803D6434
  c->f[31]=c->f[1]; // 803D6438
  c->r[3]=c->r[30]|c->r[30]; // 803D643C
  c->lr=0x803D6444u; f_803D5028(c); // 803D6440
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 803D6444
  {uint32_t ea=c->r[27]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D6448
  {uint32_t ea=c->r[27]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 803D644C
  c->r[3]=0u+0x00000003u; // 803D6450
  {uint32_t ea=c->r[27]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 803D6454
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 803D6458
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[7]); // 803D645C
  c->f[1]=(c->f[2]>=0.0)?c->f[6]:c->f[0]; // 803D6460
  c->f[4]=(c->f[3]>=0.0)?c->f[7]:c->f[5]; // 803D6464
  c->f[3]=(c->f[3]>=0.0)?c->f[5]:c->f[7]; // 803D6468
  c->f[0]=(c->f[2]>=0.0)?c->f[0]:c->f[6]; // 803D646C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803D6470
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[4]);} // 803D6474
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 803D6478
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 803D647C
  goto L_803D65A8; // 803D6480
L_803D6484:;
  c->r[29]=R32(c->r[6]+0x00000000u); // 803D6484
  c->r[3]=c->r[29]|c->r[29]; // 803D6488
  c->lr=0x803D6490u; f_803D5020(c); // 803D648C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 803D6490
  c->r[30]=R32(c->r[28]+0x00000000u); // 803D6494
  c->r[3]=c->r[30]|c->r[30]; // 803D6498
  c->lr=0x803D64A0u; f_803D6A44(c); // 803D649C
  cmps(c,0,(int32_t)c->r[3],0); // 803D64A0
  c->r[31]=c->r[3]|c->r[3]; // 803D64A4
  if (!crb(c,1)) { goto L_803D6544; } // 803D64A8
  c->r[3]=c->r[30]|c->r[30]; // 803D64AC
  c->lr=0x803D64B4u; f_803D4E98(c); // 803D64B0
  cmps(c,0,(int32_t)c->r[3],0); // 803D64B4
  if (crb(c,2)) { goto L_803D64CC; } // 803D64B8
  c->r[3]=c->r[30]|c->r[30]; // 803D64BC
  c->lr=0x803D64C4u; f_803D4EA0(c); // 803D64C0
  c->f[31]=c->f[1]; // 803D64C4
  goto L_803D64D8; // 803D64C8
L_803D64CC:;
  c->r[3]=c->r[30]|c->r[30]; // 803D64CC
  c->lr=0x803D64D4u; f_803D4D6C(c); // 803D64D0
  c->f[31]=c->f[1]; // 803D64D4
L_803D64D8:;
  c->r[3]=c->r[30]|c->r[30]; // 803D64D8
  c->lr=0x803D64E0u; f_803D5020(c); // 803D64DC
  c->r[0]=0u+0x43300000u; // 803D64E0
  c->r[3]=c->r[31]^0x80000000u; // 803D64E4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D64E8
  c->r[4]=0u+0x803F0000u; // 803D64EC
  {uint32_t ea=c->r[28]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D64F0
  c->r[3]=c->r[30]|c->r[30]; // 803D64F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D64F8
  {uint32_t ea=c->r[4]+0x00000F20u; c->f[2]=RF64(ea);} // 803D64FC
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 803D6500
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803D6504
  W32(c->r[1]+0x00000018u,c->r[0]); // 803D6508
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D650C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 803D6510
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 803D6514
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803D6518
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803D651C
  c->r[4]=R32(c->r[1]+0x00000014u); // 803D6520
  c->r[0]=c->r[4]+0x00000001u; // 803D6524
  c->r[0]=c->r[0]^0x80000000u; // 803D6528
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803D652C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803D6530
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D6534
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D6538
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 803D653C
  c->lr=0x803D6544u; f_803D4FF0(c); // 803D6540
L_803D6544:;
  c->r[3]=c->r[29]|c->r[29]; // 803D6544
  c->lr=0x803D654Cu; f_803D5020(c); // 803D6548
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 803D654C
  c->r[3]=c->r[29]|c->r[29]; // 803D6550
  c->lr=0x803D6558u; f_803D5028(c); // 803D6554
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803D6558
  c->r[3]=c->r[29]|c->r[29]; // 803D655C
  c->lr=0x803D6564u; f_803D4DD0(c); // 803D6560
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D6564
  c->r[3]=0u+0x00000001u; // 803D6568
  {uint32_t ea=c->r[27]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D656C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 803D6570
  {uint32_t ea=c->r[27]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D6574
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[6]); // 803D6578
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[2]); // 803D657C
  c->f[5]=(c->f[1]>=0.0)?c->f[6]:c->f[4]; // 803D6580
  c->f[4]=(c->f[1]>=0.0)?c->f[4]:c->f[6]; // 803D6584
  c->f[1]=(c->f[3]>=0.0)?c->f[2]:c->f[0]; // 803D6588
  c->f[0]=(c->f[3]>=0.0)?c->f[0]:c->f[2]; // 803D658C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[5]);} // 803D6590
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[4]);} // 803D6594
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803D6598
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 803D659C
  goto L_803D65A8; // 803D65A0
L_803D65A4:;
  c->r[3]=0u+0x00000000u; // 803D65A4
L_803D65A8:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 803D65A8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 803D65AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 803D65B0
  c->r[11]=c->r[1]+0x00000040u; // 803D65B4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 803D65B8
  c->lr=0x803D65C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D65BC
  c->r[0]=R32(c->r[1]+0x00000064u); // 803D65C0
  c->lr=c->r[0]; // 803D65C4
  c->r[1]=c->r[1]+0x00000060u; // 803D65C8
  return; // 803D65CC
}

// __ct__Q36nw4hbm2ut19TagProcessorBase<w>Fv
void f_803D65D0(Ctx* __restrict c) {
  trace_call(0x803D65D0u);
  c->r[4]=0u+0x80440000u; // 803D65D0
  c->r[4]=c->r[4]+0xFFFFA5D8u; // 803D65D4
  W32(c->r[3]+0x00000000u,c->r[4]); // 803D65D8
  return; // 803D65DC
}

// fn_803D65E0
void f_803D65E0(Ctx* __restrict c) {
  trace_call(0x803D65E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D65E0
  c->r[0]=c->lr; // 803D65E4
  cmps(c,0,(int32_t)c->r[3],0); // 803D65E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D65EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D65F0
  c->r[31]=c->r[3]|c->r[3]; // 803D65F4
  if (crb(c,2)) { goto L_803D6608; } // 803D65F8
  cmps(c,0,(int32_t)c->r[4],0); // 803D65FC
  if (!crb(c,1)) { goto L_803D6608; } // 803D6600
  c->lr=0x803D6608u; f_802896EC(c); // 803D6604
L_803D6608:;
  c->r[3]=c->r[31]|c->r[31]; // 803D6608
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D660C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D6610
  c->lr=c->r[0]; // 803D6614
  c->r[1]=c->r[1]+0x00000010u; // 803D6618
  return; // 803D661C
}

// fn_803D6620
void f_803D6620(Ctx* __restrict c) {
  trace_call(0x803D6620u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6620
  c->r[0]=c->lr; // 803D6624
  W32(c->r[1]+0x00000054u,c->r[0]); // 803D6628
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803D662C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803D6630
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803D6634
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803D6638
  cmps(c,0,(int32_t)c->r[4],10); // 803D663C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803D6640
  W32(c->r[1]+0x00000028u,c->r[30]); // 803D6644
  W32(c->r[1]+0x00000024u,c->r[29]); // 803D6648
  c->r[29]=c->r[5]|c->r[5]; // 803D664C
  if (crb(c,2)) { goto L_803D6664; } // 803D6650
  if (!crb(c,0)) { goto L_803D6750; } // 803D6654
  cmps(c,0,(int32_t)c->r[4],9); // 803D6658
  if (!crb(c,0)) { goto L_803D6698; } // 803D665C
  goto L_803D6750; // 803D6660
L_803D6664:;
  c->r[31]=R32(c->r[5]+0x00000000u); // 803D6664
  {uint32_t ea=c->r[5]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 803D6668
  c->r[3]=c->r[31]|c->r[31]; // 803D666C
  c->lr=0x803D6674u; f_803D6B00(c); // 803D6670
  c->f[31]=c->f[1]; // 803D6674
  c->r[3]=c->r[31]|c->r[31]; // 803D6678
  c->lr=0x803D6680u; f_803D5028(c); // 803D667C
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 803D6680
  c->r[3]=c->r[31]|c->r[31]; // 803D6684
  c->f[1]=c->f[30]; // 803D6688
  c->lr=0x803D6690u; f_803D4FE4(c); // 803D668C
  c->r[3]=0u+0x00000003u; // 803D6690
  goto L_803D6754; // 803D6694
L_803D6698:;
  c->r[30]=R32(c->r[5]+0x00000000u); // 803D6698
  c->r[3]=c->r[30]|c->r[30]; // 803D669C
  c->lr=0x803D66A4u; f_803D6BA4(c); // 803D66A0
  cmps(c,0,(int32_t)c->r[3],0); // 803D66A4
  c->r[31]=c->r[3]|c->r[3]; // 803D66A8
  if (!crb(c,1)) { goto L_803D6748; } // 803D66AC
  c->r[3]=c->r[30]|c->r[30]; // 803D66B0
  c->lr=0x803D66B8u; f_803D4E98(c); // 803D66B4
  cmps(c,0,(int32_t)c->r[3],0); // 803D66B8
  if (crb(c,2)) { goto L_803D66D0; } // 803D66BC
  c->r[3]=c->r[30]|c->r[30]; // 803D66C0
  c->lr=0x803D66C8u; f_803D4EA0(c); // 803D66C4
  c->f[31]=c->f[1]; // 803D66C8
  goto L_803D66DC; // 803D66CC
L_803D66D0:;
  c->r[3]=c->r[30]|c->r[30]; // 803D66D0
  c->lr=0x803D66D8u; f_803D4D6C(c); // 803D66D4
  c->f[31]=c->f[1]; // 803D66D8
L_803D66DC:;
  c->r[3]=c->r[30]|c->r[30]; // 803D66DC
  c->lr=0x803D66E4u; f_803D5020(c); // 803D66E0
  c->r[0]=0u+0x43300000u; // 803D66E4
  c->r[3]=c->r[31]^0x80000000u; // 803D66E8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D66EC
  c->r[4]=0u+0x803F0000u; // 803D66F0
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D66F4
  c->r[3]=c->r[30]|c->r[30]; // 803D66F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D66FC
  {uint32_t ea=c->r[4]+0x00000F20u; c->f[2]=RF64(ea);} // 803D6700
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 803D6704
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803D6708
  W32(c->r[1]+0x00000018u,c->r[0]); // 803D670C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D6710
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 803D6714
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 803D6718
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803D671C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803D6720
  c->r[4]=R32(c->r[1]+0x00000014u); // 803D6724
  c->r[0]=c->r[4]+0x00000001u; // 803D6728
  c->r[0]=c->r[0]^0x80000000u; // 803D672C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803D6730
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803D6734
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D6738
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D673C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 803D6740
  c->lr=0x803D6748u; f_803D4FF0(c); // 803D6744
L_803D6748:;
  c->r[3]=0u+0x00000001u; // 803D6748
  goto L_803D6754; // 803D674C
L_803D6750:;
  c->r[3]=0u+0x00000000u; // 803D6750
L_803D6754:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803D6754
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803D6758
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 803D675C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 803D6760
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803D6764
  c->r[30]=R32(c->r[1]+0x00000028u); // 803D6768
  c->r[0]=R32(c->r[1]+0x00000054u); // 803D676C
  c->r[29]=R32(c->r[1]+0x00000024u); // 803D6770
  c->lr=c->r[0]; // 803D6774
  c->r[1]=c->r[1]+0x00000050u; // 803D6778
  return; // 803D677C
}

// fn_803D6780
void f_803D6780(Ctx* __restrict c) {
  trace_call(0x803D6780u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6780
  c->r[0]=c->lr; // 803D6784
  W32(c->r[1]+0x00000064u,c->r[0]); // 803D6788
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803D678C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803D6790
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 803D6794
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 803D6798
  c->r[11]=c->r[1]+0x00000040u; // 803D679C
  c->lr=0x803D67A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D67A0
  cmps(c,0,(int32_t)c->r[5],10); // 803D67A4
  c->r[27]=c->r[4]|c->r[4]; // 803D67A8
  c->r[28]=c->r[6]|c->r[6]; // 803D67AC
  if (crb(c,2)) { goto L_803D67C4; } // 803D67B0
  if (!crb(c,0)) { goto L_803D698C; } // 803D67B4
  cmps(c,0,(int32_t)c->r[5],9); // 803D67B8
  if (!crb(c,0)) { goto L_803D686C; } // 803D67BC
  goto L_803D698C; // 803D67C0
L_803D67C4:;
  c->r[30]=R32(c->r[6]+0x00000000u); // 803D67C4
  c->r[3]=c->r[30]|c->r[30]; // 803D67C8
  c->lr=0x803D67D0u; f_803D5020(c); // 803D67CC
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 803D67D0
  c->r[3]=c->r[30]|c->r[30]; // 803D67D4
  c->lr=0x803D67DCu; f_803D5028(c); // 803D67D8
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803D67DC
  c->r[31]=R32(c->r[28]+0x00000000u); // 803D67E0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 803D67E4
  c->r[3]=c->r[31]|c->r[31]; // 803D67E8
  c->lr=0x803D67F0u; f_803D6B00(c); // 803D67EC
  c->f[31]=c->f[1]; // 803D67F0
  c->r[3]=c->r[31]|c->r[31]; // 803D67F4
  c->lr=0x803D67FCu; f_803D5028(c); // 803D67F8
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[31]); // 803D67FC
  c->r[3]=c->r[31]|c->r[31]; // 803D6800
  c->f[1]=c->f[30]; // 803D6804
  c->lr=0x803D680Cu; f_803D4FE4(c); // 803D6808
  c->r[3]=c->r[30]|c->r[30]; // 803D680C
  c->lr=0x803D6814u; f_803D5020(c); // 803D6810
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 803D6814
  c->r[3]=R32(c->r[28]+0x00000000u); // 803D6818
  c->lr=0x803D6820u; f_803D4DD0(c); // 803D681C
  c->f[31]=c->f[1]; // 803D6820
  c->r[3]=c->r[30]|c->r[30]; // 803D6824
  c->lr=0x803D682Cu; f_803D5028(c); // 803D6828
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[31]); // 803D682C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D6830
  {uint32_t ea=c->r[27]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 803D6834
  c->r[3]=0u+0x00000003u; // 803D6838
  {uint32_t ea=c->r[27]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 803D683C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 803D6840
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[7]); // 803D6844
  c->f[1]=(c->f[2]>=0.0)?c->f[6]:c->f[0]; // 803D6848
  c->f[4]=(c->f[3]>=0.0)?c->f[7]:c->f[5]; // 803D684C
  c->f[3]=(c->f[3]>=0.0)?c->f[5]:c->f[7]; // 803D6850
  c->f[0]=(c->f[2]>=0.0)?c->f[0]:c->f[6]; // 803D6854
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803D6858
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[4]);} // 803D685C
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 803D6860
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 803D6864
  goto L_803D6990; // 803D6868
L_803D686C:;
  c->r[29]=R32(c->r[6]+0x00000000u); // 803D686C
  c->r[3]=c->r[29]|c->r[29]; // 803D6870
  c->lr=0x803D6878u; f_803D5020(c); // 803D6874
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 803D6878
  c->r[30]=R32(c->r[28]+0x00000000u); // 803D687C
  c->r[3]=c->r[30]|c->r[30]; // 803D6880
  c->lr=0x803D6888u; f_803D6BA4(c); // 803D6884
  cmps(c,0,(int32_t)c->r[3],0); // 803D6888
  c->r[31]=c->r[3]|c->r[3]; // 803D688C
  if (!crb(c,1)) { goto L_803D692C; } // 803D6890
  c->r[3]=c->r[30]|c->r[30]; // 803D6894
  c->lr=0x803D689Cu; f_803D4E98(c); // 803D6898
  cmps(c,0,(int32_t)c->r[3],0); // 803D689C
  if (crb(c,2)) { goto L_803D68B4; } // 803D68A0
  c->r[3]=c->r[30]|c->r[30]; // 803D68A4
  c->lr=0x803D68ACu; f_803D4EA0(c); // 803D68A8
  c->f[31]=c->f[1]; // 803D68AC
  goto L_803D68C0; // 803D68B0
L_803D68B4:;
  c->r[3]=c->r[30]|c->r[30]; // 803D68B4
  c->lr=0x803D68BCu; f_803D4D6C(c); // 803D68B8
  c->f[31]=c->f[1]; // 803D68BC
L_803D68C0:;
  c->r[3]=c->r[30]|c->r[30]; // 803D68C0
  c->lr=0x803D68C8u; f_803D5020(c); // 803D68C4
  c->r[0]=0u+0x43300000u; // 803D68C8
  c->r[3]=c->r[31]^0x80000000u; // 803D68CC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D68D0
  c->r[4]=0u+0x803F0000u; // 803D68D4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D68D8
  c->r[3]=c->r[30]|c->r[30]; // 803D68DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D68E0
  {uint32_t ea=c->r[4]+0x00000F20u; c->f[2]=RF64(ea);} // 803D68E4
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 803D68E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803D68EC
  W32(c->r[1]+0x00000018u,c->r[0]); // 803D68F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D68F4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 803D68F8
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[1]); // 803D68FC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803D6900
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803D6904
  c->r[4]=R32(c->r[1]+0x00000014u); // 803D6908
  c->r[0]=c->r[4]+0x00000001u; // 803D690C
  c->r[0]=c->r[0]^0x80000000u; // 803D6910
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803D6914
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803D6918
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D691C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803D6920
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 803D6924
  c->lr=0x803D692Cu; f_803D4FF0(c); // 803D6928
L_803D692C:;
  c->r[3]=c->r[29]|c->r[29]; // 803D692C
  c->lr=0x803D6934u; f_803D5020(c); // 803D6930
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 803D6934
  c->r[3]=c->r[29]|c->r[29]; // 803D6938
  c->lr=0x803D6940u; f_803D5028(c); // 803D693C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803D6940
  c->r[3]=c->r[29]|c->r[29]; // 803D6944
  c->lr=0x803D694Cu; f_803D4DD0(c); // 803D6948
  {uint32_t ea=c->r[27]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D694C
  c->r[3]=0u+0x00000001u; // 803D6950
  {uint32_t ea=c->r[27]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 803D6954
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 803D6958
  {uint32_t ea=c->r[27]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 803D695C
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[6]); // 803D6960
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[2]); // 803D6964
  c->f[5]=(c->f[1]>=0.0)?c->f[6]:c->f[4]; // 803D6968
  c->f[4]=(c->f[1]>=0.0)?c->f[4]:c->f[6]; // 803D696C
  c->f[1]=(c->f[3]>=0.0)?c->f[2]:c->f[0]; // 803D6970
  c->f[0]=(c->f[3]>=0.0)?c->f[0]:c->f[2]; // 803D6974
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[5]);} // 803D6978
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[4]);} // 803D697C
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 803D6980
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 803D6984
  goto L_803D6990; // 803D6988
L_803D698C:;
  c->r[3]=0u+0x00000000u; // 803D698C
L_803D6990:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 803D6990
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 803D6994
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 803D6998
  c->r[11]=c->r[1]+0x00000040u; // 803D699C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 803D69A0
  c->lr=0x803D69A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D69A4
  c->r[0]=R32(c->r[1]+0x00000064u); // 803D69A8
  c->lr=c->r[0]; // 803D69AC
  c->r[1]=c->r[1]+0x00000060u; // 803D69B0
  return; // 803D69B4
}

// fn_803D69B8
void f_803D69B8(Ctx* __restrict c) {
  trace_call(0x803D69B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D69B8
  c->r[0]=c->lr; // 803D69BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D69C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D69C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D69C8
  c->r[30]=c->r[3]|c->r[3]; // 803D69CC
  c->lr=0x803D69D4u; f_803D3D98(c); // 803D69D0
  cmps(c,0,(int32_t)c->r[3],0); // 803D69D4
  if (crb(c,2)) { goto L_803D69F4; } // 803D69D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D69DC
  c->r[12]=R32(c->r[12]+0x00000034u); // 803D69E0
  c->ctr=c->r[12]; // 803D69E4
  if (true) { c->lr=0x803D69ECu; dispatch(c,c->ctr); } // 803D69E8
  c->r[31]=c->r[3]|c->r[3]; // 803D69EC
  goto L_803D69F8; // 803D69F0
L_803D69F4:;
  c->r[31]=0u+0x00000000u; // 803D69F4
L_803D69F8:;
  c->r[3]=c->r[30]|c->r[30]; // 803D69F8
  c->lr=0x803D6A00u; f_803D4C94(c); // 803D69FC
  c->r[3]=c->r[31]^0x80000000u; // 803D6A00
  c->r[0]=0u+0x43300000u; // 803D6A04
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D6A08
  c->r[3]=0u+0x803F0000u; // 803D6A0C
  {uint32_t ea=c->r[3]+0x00000F30u; c->f[3]=RF64(ea);} // 803D6A10
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D6A14
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6A18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 803D6A1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D6A20
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 803D6A24
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D6A28
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D6A2C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D6A30
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D6A34
  c->lr=c->r[0]; // 803D6A38
  c->r[1]=c->r[1]+0x00000020u; // 803D6A3C
  return; // 803D6A40
}

// fn_803D6A44
void f_803D6A44(Ctx* __restrict c) {
  trace_call(0x803D6A44u);
  c->r[3]=R32(c->r[3]+0x00000054u); // 803D6A44
  return; // 803D6A48
}

// __ct__Q36nw4hbm2ut17TextWriterBase<w>Fv
void f_803D6A4C(Ctx* __restrict c) {
  trace_call(0x803D6A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6A4C
  c->r[0]=c->lr; // 803D6A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D6A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D6A58
  c->r[31]=c->r[3]|c->r[3]; // 803D6A5C
  c->lr=0x803D6A64u; f_803D3B24(c); // 803D6A60
  c->r[3]=0u+0x803F0000u; // 803D6A64
  c->r[4]=0u+0x806C0000u; // 803D6A68
  {uint32_t ea=c->r[3]+0x00000F28u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6A6C
  c->r[4]=c->r[4]+0x00002614u; // 803D6A70
  c->r[5]=0u+0x00000004u; // 803D6A74
  c->r[0]=0u+0x00000000u; // 803D6A78
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 803D6A7C
  c->r[3]=c->r[31]|c->r[31]; // 803D6A80
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 803D6A84
  W32(c->r[31]+0x00000054u,c->r[5]); // 803D6A88
  W32(c->r[31]+0x00000058u,c->r[0]); // 803D6A8C
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 803D6A90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D6A94
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D6A98
  c->lr=c->r[0]; // 803D6A9C
  c->r[1]=c->r[1]+0x00000010u; // 803D6AA0
  return; // 803D6AA4
}

// __dt__Q36nw4hbm2ut17TextWriterBase<w>Fv
void f_803D6AA8(Ctx* __restrict c) {
  trace_call(0x803D6AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6AA8
  c->r[0]=c->lr; // 803D6AAC
  cmps(c,0,(int32_t)c->r[3],0); // 803D6AB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D6AB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D6AB8
  c->r[31]=c->r[4]|c->r[4]; // 803D6ABC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D6AC0
  c->r[30]=c->r[3]|c->r[3]; // 803D6AC4
  if (crb(c,2)) { goto L_803D6AE4; } // 803D6AC8
  c->r[4]=0u+0x00000000u; // 803D6ACC
  c->lr=0x803D6AD4u; f_803D3D50(c); // 803D6AD0
  cmps(c,0,(int32_t)c->r[31],0); // 803D6AD4
  if (!crb(c,1)) { goto L_803D6AE4; } // 803D6AD8
  c->r[3]=c->r[30]|c->r[30]; // 803D6ADC
  c->lr=0x803D6AE4u; f_802896EC(c); // 803D6AE0
L_803D6AE4:;
  c->r[3]=c->r[30]|c->r[30]; // 803D6AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D6AE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D6AEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D6AF0
  c->lr=c->r[0]; // 803D6AF4
  c->r[1]=c->r[1]+0x00000010u; // 803D6AF8
  return; // 803D6AFC
}

// GetLineHeight__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_803D6B00(Ctx* __restrict c) {
  trace_call(0x803D6B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6B00
  c->r[0]=c->lr; // 803D6B04
  W32(c->r[1]+0x00000024u,c->r[0]); // 803D6B08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803D6B0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803D6B10
  c->r[30]=c->r[3]|c->r[3]; // 803D6B14
  c->lr=0x803D6B1Cu; f_803D3D98(c); // 803D6B18
  cmps(c,0,(int32_t)c->r[3],0); // 803D6B1C
  if (crb(c,2)) { goto L_803D6B3C; } // 803D6B20
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D6B24
  c->r[12]=R32(c->r[12]+0x00000034u); // 803D6B28
  c->ctr=c->r[12]; // 803D6B2C
  if (true) { c->lr=0x803D6B34u; dispatch(c,c->ctr); } // 803D6B30
  c->r[31]=c->r[3]|c->r[3]; // 803D6B34
  goto L_803D6B40; // 803D6B38
L_803D6B3C:;
  c->r[31]=0u+0x00000000u; // 803D6B3C
L_803D6B40:;
  c->r[3]=c->r[30]|c->r[30]; // 803D6B40
  c->lr=0x803D6B48u; f_803D4C94(c); // 803D6B44
  c->r[3]=c->r[31]^0x80000000u; // 803D6B48
  c->r[0]=0u+0x43300000u; // 803D6B4C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803D6B50
  c->r[3]=0u+0x803F0000u; // 803D6B54
  {uint32_t ea=c->r[3]+0x00000F30u; c->f[3]=RF64(ea);} // 803D6B58
  W32(c->r[1]+0x00000008u,c->r[0]); // 803D6B5C
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6B60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 803D6B64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803D6B68
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 803D6B6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803D6B70
  c->r[0]=R32(c->r[1]+0x00000024u); // 803D6B74
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D6B78
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D6B7C
  c->lr=c->r[0]; // 803D6B80
  c->r[1]=c->r[1]+0x00000020u; // 803D6B84
  return; // 803D6B88
}

// SetLineSpace__Q36nw4hbm2ut17TextWriterBase<w>Ff
void f_803D6B8C(Ctx* __restrict c) {
  trace_call(0x803D6B8Cu);
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 803D6B8C
  return; // 803D6B90
}

// SetCharSpace__Q36nw4hbm2ut17TextWriterBase<w>Ff
void f_803D6B94(Ctx* __restrict c) {
  trace_call(0x803D6B94u);
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 803D6B94
  return; // 803D6B98
}

// GetCharSpace__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_803D6B9C(Ctx* __restrict c) {
  trace_call(0x803D6B9Cu);
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D6B9C
  return; // 803D6BA0
}

// fn_803D6BA4
void f_803D6BA4(Ctx* __restrict c) {
  trace_call(0x803D6BA4u);
  c->r[3]=R32(c->r[3]+0x00000054u); // 803D6BA4
  return; // 803D6BA8
}

// SetTagProcessor__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut19TagProcessorBase<w>
void f_803D6BAC(Ctx* __restrict c) {
  trace_call(0x803D6BACu);
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 803D6BAC
  return; // 803D6BB0
}

// GetTagProcessor__Q36nw4hbm2ut17TextWriterBase<w>CFv
void f_803D6BB4(Ctx* __restrict c) {
  trace_call(0x803D6BB4u);
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 803D6BB4
  return; // 803D6BB8
}

// Print__Q36nw4hbm2ut17TextWriterBase<w>FPCwi
void f_803D6BBC(Ctx* __restrict c) {
  trace_call(0x803D6BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6BBC
  c->r[0]=c->lr; // 803D6BC0
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D6BC4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 803D6BC8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 803D6BCC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 803D6BD0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 803D6BD4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 803D6BD8
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D6BDC
  c->r[31]=c->r[3]|c->r[3]; // 803D6BE0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D6BE4
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D6BE8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D6BEC
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D6BF0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803D6BF4
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D6BF8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803D6BFC
  c->r[0]=R8(c->r[3]+0x00000004u); // 803D6C00
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 803D6C04
  c->r[0]=R8(c->r[3]+0x00000005u); // 803D6C08
  W8(c->r[1]+0x0000000Du,c->r[0]); // 803D6C0C
  c->r[0]=R8(c->r[3]+0x00000006u); // 803D6C10
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D6C14
  c->r[0]=R8(c->r[3]+0x00000007u); // 803D6C18
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D6C1C
  c->r[0]=R8(c->r[3]+0x00000008u); // 803D6C20
  W8(c->r[1]+0x00000010u,c->r[0]); // 803D6C24
  c->r[0]=R8(c->r[3]+0x00000009u); // 803D6C28
  W8(c->r[1]+0x00000011u,c->r[0]); // 803D6C2C
  c->r[0]=R8(c->r[3]+0x0000000Au); // 803D6C30
  W8(c->r[1]+0x00000012u,c->r[0]); // 803D6C34
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 803D6C38
  W8(c->r[1]+0x00000013u,c->r[0]); // 803D6C3C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803D6C40
  W8(c->r[1]+0x00000014u,c->r[0]); // 803D6C44
  c->r[0]=R8(c->r[3]+0x0000000Du); // 803D6C48
  W8(c->r[1]+0x00000015u,c->r[0]); // 803D6C4C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 803D6C50
  W8(c->r[1]+0x00000016u,c->r[0]); // 803D6C54
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 803D6C58
  W8(c->r[1]+0x00000017u,c->r[0]); // 803D6C5C
  c->r[0]=R8(c->r[3]+0x00000010u); // 803D6C60
  W8(c->r[1]+0x00000018u,c->r[0]); // 803D6C64
  c->r[0]=R8(c->r[3]+0x00000011u); // 803D6C68
  W8(c->r[1]+0x00000019u,c->r[0]); // 803D6C6C
  c->r[0]=R8(c->r[3]+0x00000012u); // 803D6C70
  W8(c->r[1]+0x0000001Au,c->r[0]); // 803D6C74
  c->r[0]=R8(c->r[3]+0x00000013u); // 803D6C78
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 803D6C7C
  c->r[0]=R8(c->r[3]+0x00000014u); // 803D6C80
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 803D6C84
  c->r[0]=R8(c->r[3]+0x00000015u); // 803D6C88
  W8(c->r[1]+0x0000001Du,c->r[0]); // 803D6C8C
  c->r[0]=R8(c->r[3]+0x00000016u); // 803D6C90
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 803D6C94
  c->r[0]=R8(c->r[3]+0x00000017u); // 803D6C98
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 803D6C9C
  c->r[0]=R8(c->r[3]+0x00000018u); // 803D6CA0
  W8(c->r[1]+0x00000020u,c->r[0]); // 803D6CA4
  c->r[0]=R8(c->r[3]+0x00000019u); // 803D6CA8
  W8(c->r[1]+0x00000021u,c->r[0]); // 803D6CAC
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803D6CB0
  W8(c->r[1]+0x00000022u,c->r[0]); // 803D6CB4
  c->r[0]=R8(c->r[3]+0x0000001Bu); // 803D6CB8
  W8(c->r[1]+0x00000023u,c->r[0]); // 803D6CBC
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 803D6CC0
  W8(c->r[1]+0x00000024u,c->r[0]); // 803D6CC4
  c->r[0]=R8(c->r[3]+0x0000001Du); // 803D6CC8
  W8(c->r[1]+0x00000025u,c->r[0]); // 803D6CCC
  c->r[0]=R8(c->r[3]+0x0000001Eu); // 803D6CD0
  W8(c->r[1]+0x00000026u,c->r[0]); // 803D6CD4
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 803D6CD8
  W8(c->r[1]+0x00000027u,c->r[0]); // 803D6CDC
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D6CE0
  W32(c->r[1]+0x00000028u,c->r[0]); // 803D6CE4
  c->r[6]=R32(c->r[3]+0x00000024u); // 803D6CE8
  c->r[0]=R32(c->r[3]+0x00000028u); // 803D6CEC
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 803D6CF0
  W32(c->r[1]+0x00000030u,c->r[0]); // 803D6CF4
  c->r[6]=R32(c->r[3]+0x0000002Cu); // 803D6CF8
  c->r[0]=R32(c->r[3]+0x00000030u); // 803D6CFC
  W32(c->r[1]+0x00000034u,c->r[6]); // 803D6D00
  W32(c->r[1]+0x00000038u,c->r[0]); // 803D6D04
  c->r[0]=R32(c->r[3]+0x00000034u); // 803D6D08
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803D6D0C
  c->r[6]=R32(c->r[3]+0x00000038u); // 803D6D10
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 803D6D14
  W32(c->r[1]+0x00000040u,c->r[6]); // 803D6D18
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D6D1C
  c->r[0]=R8(c->r[3]+0x00000040u); // 803D6D20
  W8(c->r[1]+0x00000048u,c->r[0]); // 803D6D24
  c->r[0]=R8(c->r[3]+0x00000041u); // 803D6D28
  W8(c->r[1]+0x00000049u,c->r[0]); // 803D6D2C
  c->r[0]=R8(c->r[3]+0x00000042u); // 803D6D30
  W8(c->r[1]+0x0000004Au,c->r[0]); // 803D6D34
  c->r[0]=R8(c->r[3]+0x00000043u); // 803D6D38
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 803D6D3C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6D40
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 803D6D44
  c->r[0]=R32(c->r[3]+0x00000048u); // 803D6D48
  W32(c->r[1]+0x00000050u,c->r[0]); // 803D6D4C
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6D50
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 803D6D54
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6D58
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 803D6D5C
  c->r[0]=R32(c->r[3]+0x00000054u); // 803D6D60
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 803D6D64
  c->r[0]=R32(c->r[3]+0x00000058u); // 803D6D68
  W32(c->r[1]+0x00000060u,c->r[0]); // 803D6D6C
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 803D6D70
  c->r[3]=c->r[1]+0x00000008u; // 803D6D74
  W32(c->r[1]+0x00000064u,c->r[0]); // 803D6D78
  c->lr=0x803D6D80u; f_803D7504(c); // 803D6D7C
  c->f[30]=c->f[1]; // 803D6D80
  c->r[3]=c->r[1]+0x00000008u; // 803D6D84
  c->lr=0x803D6D8Cu; f_803D5028(c); // 803D6D88
  c->f[31]=c->f[1]; // 803D6D8C
  c->r[3]=c->r[1]+0x00000008u; // 803D6D90
  c->lr=0x803D6D98u; f_803D5020(c); // 803D6D94
  c->f[2]=c->f[31]; // 803D6D98
  c->r[3]=c->r[31]|c->r[31]; // 803D6D9C
  c->lr=0x803D6DA4u; f_803D4FE4(c); // 803D6DA0
  c->r[3]=c->r[1]+0x00000008u; // 803D6DA4
  c->r[4]=0u+0x00000000u; // 803D6DA8
  c->lr=0x803D6DB0u; f_803D3D50(c); // 803D6DAC
  c->f[1]=c->f[30]; // 803D6DB0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 803D6DB4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 803D6DB8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 803D6DBC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 803D6DC0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 803D6DC4
  c->r[0]=R32(c->r[1]+0x00000094u); // 803D6DC8
  c->lr=c->r[0]; // 803D6DCC
  c->r[1]=c->r[1]+0x00000090u; // 803D6DD0
  return; // 803D6DD4
}

// Print__Q36nw4hbm2ut17TextWriterBase<w>FPCw
void f_803D6DD8(Ctx* __restrict c) {
  trace_call(0x803D6DD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D6DD8
  c->r[0]=c->lr; // 803D6DDC
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D6DE0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 803D6DE4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 803D6DE8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 803D6DEC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 803D6DF0
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 803D6DF4
  c->r[31]=c->r[4]|c->r[4]; // 803D6DF8
  W32(c->r[1]+0x00000068u,c->r[30]); // 803D6DFC
  c->r[30]=c->r[3]|c->r[3]; // 803D6E00
  c->r[3]=c->r[31]|c->r[31]; // 803D6E04
  c->lr=0x803D6E0Cu; f_8029815C(c); // 803D6E08
  c->r[0]=R8(c->r[30]+0x00000000u); // 803D6E0C
  W8(c->r[1]+0x00000008u,c->r[0]); // 803D6E10
  c->r[0]=R8(c->r[30]+0x00000001u); // 803D6E14
  W8(c->r[1]+0x00000009u,c->r[0]); // 803D6E18
  c->r[0]=R8(c->r[30]+0x00000002u); // 803D6E1C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803D6E20
  c->r[0]=R8(c->r[30]+0x00000003u); // 803D6E24
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 803D6E28
  c->r[0]=R8(c->r[30]+0x00000004u); // 803D6E2C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 803D6E30
  c->r[0]=R8(c->r[30]+0x00000005u); // 803D6E34
  W8(c->r[1]+0x0000000Du,c->r[0]); // 803D6E38
  c->r[0]=R8(c->r[30]+0x00000006u); // 803D6E3C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803D6E40
  c->r[0]=R8(c->r[30]+0x00000007u); // 803D6E44
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 803D6E48
  c->r[0]=R8(c->r[30]+0x00000008u); // 803D6E4C
  W8(c->r[1]+0x00000010u,c->r[0]); // 803D6E50
  c->r[0]=R8(c->r[30]+0x00000009u); // 803D6E54
  W8(c->r[1]+0x00000011u,c->r[0]); // 803D6E58
  c->r[0]=R8(c->r[30]+0x0000000Au); // 803D6E5C
  W8(c->r[1]+0x00000012u,c->r[0]); // 803D6E60
  c->r[0]=R8(c->r[30]+0x0000000Bu); // 803D6E64
  W8(c->r[1]+0x00000013u,c->r[0]); // 803D6E68
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 803D6E6C
  W8(c->r[1]+0x00000014u,c->r[0]); // 803D6E70
  c->r[0]=R8(c->r[30]+0x0000000Du); // 803D6E74
  W8(c->r[1]+0x00000015u,c->r[0]); // 803D6E78
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 803D6E7C
  W8(c->r[1]+0x00000016u,c->r[0]); // 803D6E80
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 803D6E84
  W8(c->r[1]+0x00000017u,c->r[0]); // 803D6E88
  c->r[0]=R8(c->r[30]+0x00000010u); // 803D6E8C
  W8(c->r[1]+0x00000018u,c->r[0]); // 803D6E90
  c->r[0]=R8(c->r[30]+0x00000011u); // 803D6E94
  W8(c->r[1]+0x00000019u,c->r[0]); // 803D6E98
  c->r[0]=R8(c->r[30]+0x00000012u); // 803D6E9C
  W8(c->r[1]+0x0000001Au,c->r[0]); // 803D6EA0
  c->r[0]=R8(c->r[30]+0x00000013u); // 803D6EA4
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 803D6EA8
  c->r[0]=R8(c->r[30]+0x00000014u); // 803D6EAC
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 803D6EB0
  c->r[0]=R8(c->r[30]+0x00000015u); // 803D6EB4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 803D6EB8
  c->r[0]=R8(c->r[30]+0x00000016u); // 803D6EBC
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 803D6EC0
  c->r[0]=R8(c->r[30]+0x00000017u); // 803D6EC4
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 803D6EC8
  c->r[0]=R8(c->r[30]+0x00000018u); // 803D6ECC
  W8(c->r[1]+0x00000020u,c->r[0]); // 803D6ED0
  c->r[0]=R8(c->r[30]+0x00000019u); // 803D6ED4
  W8(c->r[1]+0x00000021u,c->r[0]); // 803D6ED8
  c->r[0]=R8(c->r[30]+0x0000001Au); // 803D6EDC
  W8(c->r[1]+0x00000022u,c->r[0]); // 803D6EE0
  c->r[0]=R8(c->r[30]+0x0000001Bu); // 803D6EE4
  W8(c->r[1]+0x00000023u,c->r[0]); // 803D6EE8
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 803D6EEC
  W8(c->r[1]+0x00000024u,c->r[0]); // 803D6EF0
  c->r[0]=R8(c->r[30]+0x0000001Du); // 803D6EF4
  W8(c->r[1]+0x00000025u,c->r[0]); // 803D6EF8
  c->r[0]=R8(c->r[30]+0x0000001Eu); // 803D6EFC
  W8(c->r[1]+0x00000026u,c->r[0]); // 803D6F00
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 803D6F04
  W8(c->r[1]+0x00000027u,c->r[0]); // 803D6F08
  c->r[0]=R32(c->r[30]+0x00000020u); // 803D6F0C
  W32(c->r[1]+0x00000028u,c->r[0]); // 803D6F10
  c->r[4]=R32(c->r[30]+0x00000024u); // 803D6F14
  c->r[0]=R32(c->r[30]+0x00000028u); // 803D6F18
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 803D6F1C
  W32(c->r[1]+0x00000030u,c->r[0]); // 803D6F20
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 803D6F24
  c->r[0]=R32(c->r[30]+0x00000030u); // 803D6F28
  W32(c->r[1]+0x00000034u,c->r[4]); // 803D6F2C
  W32(c->r[1]+0x00000038u,c->r[0]); // 803D6F30
  c->r[0]=R32(c->r[30]+0x00000034u); // 803D6F34
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803D6F38
  c->r[4]=R32(c->r[30]+0x00000038u); // 803D6F3C
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 803D6F40
  W32(c->r[1]+0x00000040u,c->r[4]); // 803D6F44
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D6F48
  c->r[0]=R8(c->r[30]+0x00000040u); // 803D6F4C
  W8(c->r[1]+0x00000048u,c->r[0]); // 803D6F50
  c->r[0]=R8(c->r[30]+0x00000041u); // 803D6F54
  W8(c->r[1]+0x00000049u,c->r[0]); // 803D6F58
  c->r[0]=R8(c->r[30]+0x00000042u); // 803D6F5C
  W8(c->r[1]+0x0000004Au,c->r[0]); // 803D6F60
  c->r[0]=R8(c->r[30]+0x00000043u); // 803D6F64
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 803D6F68
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6F6C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 803D6F70
  c->r[0]=R32(c->r[30]+0x00000048u); // 803D6F74
  W32(c->r[1]+0x00000050u,c->r[0]); // 803D6F78
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6F7C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 803D6F80
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D6F84
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 803D6F88
  c->r[0]=R32(c->r[30]+0x00000054u); // 803D6F8C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 803D6F90
  c->r[0]=R32(c->r[30]+0x00000058u); // 803D6F94
  c->r[5]=c->r[3]|c->r[3]; // 803D6F98
  c->r[4]=c->r[31]|c->r[31]; // 803D6F9C
  c->r[3]=c->r[1]+0x00000008u; // 803D6FA0
  W32(c->r[1]+0x00000060u,c->r[0]); // 803D6FA4
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 803D6FA8
  W32(c->r[1]+0x00000064u,c->r[0]); // 803D6FAC
  c->lr=0x803D6FB4u; f_803D7504(c); // 803D6FB0
  c->f[30]=c->f[1]; // 803D6FB4
  c->r[3]=c->r[1]+0x00000008u; // 803D6FB8
  c->lr=0x803D6FC0u; f_803D5028(c); // 803D6FBC
  c->f[31]=c->f[1]; // 803D6FC0
  c->r[3]=c->r[1]+0x00000008u; // 803D6FC4
  c->lr=0x803D6FCCu; f_803D5020(c); // 803D6FC8
  c->f[2]=c->f[31]; // 803D6FCC
  c->r[3]=c->r[30]|c->r[30]; // 803D6FD0
  c->lr=0x803D6FD8u; f_803D4FE4(c); // 803D6FD4
  c->r[3]=c->r[1]+0x00000008u; // 803D6FD8
  c->r[4]=0u+0x00000000u; // 803D6FDC
  c->lr=0x803D6FE4u; f_803D3D50(c); // 803D6FE0
  c->f[1]=c->f[30]; // 803D6FE4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 803D6FE8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 803D6FEC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 803D6FF0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 803D6FF4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 803D6FF8
  c->r[30]=R32(c->r[1]+0x00000068u); // 803D6FFC
  c->r[0]=R32(c->r[1]+0x00000094u); // 803D7000
  c->lr=c->r[0]; // 803D7004
  c->r[1]=c->r[1]+0x00000090u; // 803D7008
  return; // 803D700C
}

// CalcLineRectImpl__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut4RectPCwi
void f_803D7010(Ctx* __restrict c) {
  trace_call(0x803D7010u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7010
  c->r[0]=c->lr; // 803D7014
  W32(c->r[1]+0x000000B4u,c->r[0]); // 803D7018
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 803D701C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 803D7020
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 803D7024
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 803D7028
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 803D702C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 803D7030
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[28]);} // 803D7034
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,28,ea,0,0);} // 803D7038
  c->r[11]=c->r[1]+0x00000070u; // 803D703C
  c->lr=0x803D7044u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D7040
  c->r[26]=0u+0x00000000u; // 803D7044
  W32(c->r[1]+0x00000028u,c->r[3]); // 803D7048
  c->r[27]=c->r[3]|c->r[3]; // 803D704C
  c->r[28]=c->r[4]|c->r[4]; // 803D7050
  W32(c->r[1]+0x00000030u,c->r[26]); // 803D7054
  c->r[29]=c->r[5]|c->r[5]; // 803D7058
  c->r[30]=c->r[6]|c->r[6]; // 803D705C
  W32(c->r[1]+0x00000034u,c->r[26]); // 803D7060
  W32(c->r[1]+0x00000038u,c->r[26]); // 803D7064
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 803D7068
  c->lr=0x803D7070u; f_803D3D98(c); // 803D706C
  c->r[25]=0u+0x803F0000u; // 803D7070
  c->r[4]=c->r[3]|c->r[3]; // 803D7074
  {uint32_t ea=c->r[25]+0x00000F28u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D7078
  c->r[3]=c->r[1]+0x00000018u; // 803D707C
  c->r[31]=0u+0x00000000u; // 803D7080
  c->lr=0x803D7088u; f_803D0B3C(c); // 803D7084
  c->f[0]=c->f[31]; // 803D7088
  c->r[3]=c->r[27]|c->r[27]; // 803D708C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 803D7090
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 803D7094
  c->lr=0x803D709Cu; f_803D3D98(c); // 803D7098
  cmps(c,0,(int32_t)c->r[3],0); // 803D709C
  if (crb(c,2)) { goto L_803D70B8; } // 803D70A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D70A4
  c->r[12]=R32(c->r[12]+0x00000034u); // 803D70A8
  c->ctr=c->r[12]; // 803D70AC
  if (true) { c->lr=0x803D70B4u; dispatch(c,c->ctr); } // 803D70B0
  c->r[26]=c->r[3]|c->r[3]; // 803D70B4
L_803D70B8:;
  c->r[3]=c->r[27]|c->r[27]; // 803D70B8
  c->lr=0x803D70C0u; f_803D4C94(c); // 803D70BC
  c->r[3]=c->r[26]^0x80000000u; // 803D70C0
  c->r[0]=0u+0x43300000u; // 803D70C4
  W32(c->r[1]+0x00000044u,c->r[3]); // 803D70C8
  c->r[4]=0u+0x803F0000u; // 803D70CC
  c->r[3]=0u+0x803F0000u; // 803D70D0
  {uint32_t ea=c->r[4]+0x00000F30u; c->f[4]=RF64(ea);} // 803D70D4
  W32(c->r[1]+0x00000040u,c->r[0]); // 803D70D8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D70DC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 803D70E0
  {uint32_t ea=c->r[3]+0x00000F28u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D70E4
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803D70E8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803D70EC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803D70F0
  fcmp(c,0,c->f[0],c->f[1]); // 803D70F4
  if (!crb(c,1)) { goto L_803D7100; } // 803D70F8
  goto L_803D7104; // 803D70FC
L_803D7100:;
  c->f[1]=c->f[0]; // 803D7100
L_803D7104:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 803D7104
  c->r[3]=c->r[27]|c->r[27]; // 803D7108
  c->lr=0x803D7110u; f_803D3D98(c); // 803D710C
  cmps(c,0,(int32_t)c->r[3],0); // 803D7110
  if (crb(c,2)) { goto L_803D7130; } // 803D7114
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D7118
  c->r[12]=R32(c->r[12]+0x00000034u); // 803D711C
  c->ctr=c->r[12]; // 803D7120
  if (true) { c->lr=0x803D7128u; dispatch(c,c->ctr); } // 803D7124
  c->r[25]=c->r[3]|c->r[3]; // 803D7128
  goto L_803D7134; // 803D712C
L_803D7130:;
  c->r[25]=0u+0x00000000u; // 803D7130
L_803D7134:;
  c->r[3]=c->r[27]|c->r[27]; // 803D7134
  c->lr=0x803D713Cu; f_803D4C94(c); // 803D7138
  c->r[3]=c->r[25]^0x80000000u; // 803D713C
  c->r[0]=0u+0x43300000u; // 803D7140
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 803D7144
  c->r[4]=0u+0x803F0000u; // 803D7148
  c->r[3]=0u+0x803F0000u; // 803D714C
  {uint32_t ea=c->r[4]+0x00000F30u; c->f[4]=RF64(ea);} // 803D7150
  W32(c->r[1]+0x00000048u,c->r[0]); // 803D7154
  {uint32_t ea=c->r[27]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D7158
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=RF64(ea);} // 803D715C
  {uint32_t ea=c->r[3]+0x00000F28u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7160
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803D7164
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803D7168
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803D716C
  fcmp(c,0,c->f[0],c->f[1]); // 803D7170
  if (!crb(c,0)) { goto L_803D717C; } // 803D7174
  goto L_803D7180; // 803D7178
L_803D717C:;
  c->f[1]=c->f[0]; // 803D717C
L_803D7180:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D7180
  c->r[3]=c->r[1]+0x00000018u; // 803D7184
  c->r[12]=c->r[1]+0x0000001Cu; // 803D7188
  W32(c->r[1]+0x00000018u,c->r[29]); // 803D718C
  c->lr=0x803D7194u; f_80289CA4(c); // 803D7190
  c->r[0]=c->r[0]|0x00000000u; // 803D7194
  c->r[5]=0u+0x803F0000u; // 803D7198
  c->r[4]=0u+0x803F0000u; // 803D719C
  {uint32_t ea=c->r[5]+0x00000F28u; c->f[28]=c->ps1[28]=RF32(ea);} // 803D71A0
  c->r[25]=c->r[3]|c->r[3]; // 803D71A4
  {uint32_t ea=c->r[4]+0x00000F30u; c->f[30]=RF64(ea);} // 803D71A8
  c->r[26]=0u+0x43300000u; // 803D71AC
  goto L_803D7384; // 803D71B0
L_803D71B4:;
  c->r[0]=rotl(c->r[25],0)&0x0000FFFFu; // 803D71B4
  cmps(c,0,(int32_t)c->r[0],32); // 803D71B8
  if (!crb(c,0)) { goto L_803D72D0; } // 803D71BC
  c->r[0]=cntlz(c->r[31]); // 803D71C0
  c->f[1]=c->f[31]; // 803D71C4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 803D71C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 803D71CC
  c->r[3]=c->r[27]|c->r[27]; // 803D71D0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[28]);} // 803D71D4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[28]);} // 803D71D8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[28]);} // 803D71DC
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 803D71E0
  W32(c->r[1]+0x00000038u,c->r[0]); // 803D71E4
  c->lr=0x803D71ECu; f_803D4FF0(c); // 803D71E8
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 803D71EC
  c->r[4]=c->r[1]+0x00000008u; // 803D71F0
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 803D71F4
  c->r[6]=c->r[1]+0x00000028u; // 803D71F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D71FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 803D7200
  c->ctr=c->r[12]; // 803D7204
  if (true) { c->lr=0x803D720Cu; dispatch(c,c->ctr); } // 803D7208
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 803D720C
  c->r[25]=c->r[3]|c->r[3]; // 803D7210
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7214
  W32(c->r[1]+0x00000018u,c->r[0]); // 803D7218
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D721C
  fcmp(c,0,c->f[0],c->f[1]); // 803D7220
  if (!crb(c,1)) { goto L_803D722C; } // 803D7224
  goto L_803D7230; // 803D7228
L_803D722C:;
  c->f[1]=c->f[0]; // 803D722C
L_803D7230:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 803D7230
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7234
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7238
  fcmp(c,0,c->f[0],c->f[1]); // 803D723C
  if (!crb(c,1)) { goto L_803D7248; } // 803D7240
  goto L_803D724C; // 803D7244
L_803D7248:;
  c->f[1]=c->f[0]; // 803D7248
L_803D724C:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 803D724C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7250
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7254
  fcmp(c,0,c->f[0],c->f[1]); // 803D7258
  if (!crb(c,0)) { goto L_803D7264; } // 803D725C
  goto L_803D7268; // 803D7260
L_803D7264:;
  c->f[1]=c->f[0]; // 803D7264
L_803D7268:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 803D7268
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D726C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7270
  fcmp(c,0,c->f[0],c->f[1]); // 803D7274
  if (!crb(c,0)) { goto L_803D7280; } // 803D7278
  goto L_803D7284; // 803D727C
L_803D7280:;
  c->f[1]=c->f[0]; // 803D7280
L_803D7284:;
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D7284
  c->r[3]=c->r[27]|c->r[27]; // 803D7288
  c->lr=0x803D7290u; f_803D5020(c); // 803D728C
  cmps(c,0,(int32_t)c->r[25],4); // 803D7290
  c->f[31]=c->f[1]; // 803D7294
  if (!crb(c,2)) { goto L_803D72A4; } // 803D7298
  c->r[3]=c->r[30]|c->r[30]; // 803D729C
  goto L_803D73B4; // 803D72A0
L_803D72A4:;
  cmps(c,0,(int32_t)c->r[25],1); // 803D72A4
  if (!crb(c,2)) { goto L_803D72B4; } // 803D72A8
  c->r[31]=0u+0x00000000u; // 803D72AC
  goto L_803D7370; // 803D72B0
L_803D72B4:;
  cmps(c,0,(int32_t)c->r[25],2); // 803D72B4
  if (!crb(c,2)) { goto L_803D72C4; } // 803D72B8
  c->r[31]=0u+0x00000001u; // 803D72BC
  goto L_803D7370; // 803D72C0
L_803D72C4:;
  cmps(c,0,(int32_t)c->r[25],3); // 803D72C4
  if (crb(c,2)) { goto L_803D73A0; } // 803D72C8
  goto L_803D7370; // 803D72CC
L_803D72D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803D72D0
  if (crb(c,2)) { goto L_803D72E0; } // 803D72D4
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D72D8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 803D72DC
L_803D72E0:;
  c->r[3]=c->r[27]|c->r[27]; // 803D72E0
  c->r[31]=0u+0x00000001u; // 803D72E4
  c->lr=0x803D72ECu; f_803D4E98(c); // 803D72E8
  cmps(c,0,(int32_t)c->r[3],0); // 803D72EC
  if (crb(c,2)) { goto L_803D7304; } // 803D72F0
  c->r[3]=c->r[27]|c->r[27]; // 803D72F4
  c->lr=0x803D72FCu; f_803D4EA0(c); // 803D72F8
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 803D72FC
  goto L_803D7348; // 803D7300
L_803D7304:;
  c->r[3]=c->r[27]|c->r[27]; // 803D7304
  c->lr=0x803D730Cu; f_803D4C8C(c); // 803D7308
  c->f[29]=c->f[1]; // 803D730C
  c->r[3]=c->r[27]|c->r[27]; // 803D7310
  c->lr=0x803D7318u; f_803D3D98(c); // 803D7314
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D7318
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 803D731C
  c->r[12]=R32(c->r[12]+0x00000048u); // 803D7320
  c->ctr=c->r[12]; // 803D7324
  if (true) { c->lr=0x803D732Cu; dispatch(c,c->ctr); } // 803D7328
  c->r[0]=c->r[3]^0x80000000u; // 803D732C
  W32(c->r[1]+0x00000048u,c->r[26]); // 803D7330
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 803D7334
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 803D7338
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 803D733C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 803D7340
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 803D7344
L_803D7348:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7348
  fcmp(c,0,c->f[0],c->f[31]); // 803D734C
  if (!crb(c,1)) { goto L_803D7358; } // 803D7350
  c->f[0]=c->f[31]; // 803D7354
L_803D7358:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7358
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 803D735C
  fcmp(c,0,c->f[1],c->f[31]); // 803D7360
  if (!crb(c,0)) { goto L_803D736C; } // 803D7364
  c->f[1]=c->f[31]; // 803D7368
L_803D736C:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 803D736C
L_803D7370:;
  c->r[3]=c->r[1]+0x00000018u; // 803D7370
  c->r[12]=c->r[1]+0x0000001Cu; // 803D7374
  c->lr=0x803D737Cu; f_80289CA4(c); // 803D7378
  c->r[0]=c->r[0]|0x00000000u; // 803D737C
  c->r[25]=c->r[3]|c->r[3]; // 803D7380
L_803D7384:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 803D7384
  c->r[3]=c->r[4]-c->r[29]; // 803D7388
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803D738C
  c->r[0]=c->r[0]+c->r[3]; // 803D7390
  c->r[0]=sraw(c,c->r[0],1); // 803D7394
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 803D7398
  if (!crb(c,1)) { IRQCHK(c); goto L_803D71B4; } // 803D739C
L_803D73A0:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 803D73A0
  c->r[3]=c->r[0]-c->r[29]; // 803D73A4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803D73A8
  c->r[0]=c->r[0]+c->r[3]; // 803D73AC
  c->r[3]=sraw(c,c->r[0],1); // 803D73B0
L_803D73B4:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 803D73B4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 803D73B8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 803D73BC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 803D73C0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 803D73C4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 803D73C8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,28,ea,0,0);} // 803D73CC
  c->r[11]=c->r[1]+0x00000070u; // 803D73D0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[28]=RF64(ea);} // 803D73D4
  c->lr=0x803D73DCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D73D8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 803D73DC
  c->lr=c->r[0]; // 803D73E0
  c->r[1]=c->r[1]+0x000000B0u; // 803D73E4
  return; // 803D73E8
}

// CalcStringRectImpl__Q36nw4hbm2ut17TextWriterBase<w>FPQ36nw4hbm2ut4RectPCwi
void f_803D73EC(Ctx* __restrict c) {
  trace_call(0x803D73ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D73EC
  c->r[0]=c->lr; // 803D73F0
  W32(c->r[1]+0x00000044u,c->r[0]); // 803D73F4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 803D73F8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 803D73FC
  c->r[11]=c->r[1]+0x00000030u; // 803D7400
  c->lr=0x803D7408u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D7404
  c->r[31]=0u+0x803F0000u; // 803D7408
  c->r[27]=c->r[3]|c->r[3]; // 803D740C
  {uint32_t ea=c->r[31]+0x00000F28u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7410
  c->r[28]=c->r[4]|c->r[4]; // 803D7414
  c->r[29]=c->r[5]|c->r[5]; // 803D7418
  c->r[30]=c->r[6]|c->r[6]; // 803D741C
  c->f[2]=c->f[1]; // 803D7420
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 803D7424
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 803D7428
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 803D742C
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D7430
  c->lr=0x803D7438u; f_803D4FE4(c); // 803D7434
  {uint32_t ea=c->r[31]+0x00000F28u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D7438
L_803D743C:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 803D743C
  c->r[3]=c->r[27]|c->r[27]; // 803D7440
  c->r[5]=c->r[29]|c->r[29]; // 803D7444
  c->r[6]=c->r[30]|c->r[30]; // 803D7448
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 803D744C
  c->r[4]=c->r[1]+0x00000008u; // 803D7450
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 803D7454
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 803D7458
  c->lr=0x803D7460u; f_803D7010(c); // 803D745C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7460
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 803D7464
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7468
  c->r[29]=c->r[29]+c->r[0]; // 803D746C
  c->r[30]=c->r[30]-c->r[3]; // 803D7470
  fcmp(c,0,c->f[0],c->f[1]); // 803D7474
  if (!crb(c,1)) { goto L_803D7480; } // 803D7478
  goto L_803D7484; // 803D747C
L_803D7480:;
  c->f[1]=c->f[0]; // 803D7480
L_803D7484:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[1]);} // 803D7484
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7488
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D748C
  fcmp(c,0,c->f[0],c->f[1]); // 803D7490
  if (!crb(c,1)) { goto L_803D749C; } // 803D7494
  goto L_803D74A0; // 803D7498
L_803D749C:;
  c->f[1]=c->f[0]; // 803D749C
L_803D74A0:;
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 803D74A0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D74A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D74A8
  fcmp(c,0,c->f[0],c->f[1]); // 803D74AC
  if (!crb(c,0)) { goto L_803D74B8; } // 803D74B0
  goto L_803D74BC; // 803D74B4
L_803D74B8:;
  c->f[1]=c->f[0]; // 803D74B8
L_803D74BC:;
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 803D74BC
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D74C0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D74C4
  fcmp(c,0,c->f[0],c->f[1]); // 803D74C8
  if (!crb(c,0)) { goto L_803D74D4; } // 803D74CC
  goto L_803D74D8; // 803D74D0
L_803D74D4:;
  c->f[1]=c->f[0]; // 803D74D4
L_803D74D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803D74D8
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D74DC
  if (crb(c,1)) { IRQCHK(c); goto L_803D743C; } // 803D74E0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 803D74E4
  c->r[11]=c->r[1]+0x00000030u; // 803D74E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 803D74EC
  c->lr=0x803D74F4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D74F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D74F4
  c->lr=c->r[0]; // 803D74F8
  c->r[1]=c->r[1]+0x00000040u; // 803D74FC
  return; // 803D7500
}

// PrintImpl__Q36nw4hbm2ut17TextWriterBase<w>FPCwi
void f_803D7504(Ctx* __restrict c) {
  trace_call(0x803D7504u);
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7504
  c->r[0]=c->lr; // 803D7508
  W32(c->r[1]+0x000001C4u,c->r[0]); // 803D750C
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[31]);} // 803D7510
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,31,ea,0,0);} // 803D7514
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[30]);} // 803D7518
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,30,ea,0,0);} // 803D751C
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[29]);} // 803D7520
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,29,ea,0,0);} // 803D7524
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[28]);} // 803D7528
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,28,ea,0,0);} // 803D752C
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[27]);} // 803D7530
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,27,ea,0,0);} // 803D7534
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[26]);} // 803D7538
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,26,ea,0,0);} // 803D753C
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[25]);} // 803D7540
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,25,ea,0,0);} // 803D7544
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[24]);} // 803D7548
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,24,ea,0,0);} // 803D754C
  c->r[11]=c->r[1]+0x00000140u; // 803D7550
  c->lr=0x803D7558u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D7554
  c->r[28]=c->r[3]|c->r[3]; // 803D7558
  c->r[29]=c->r[4]|c->r[4]; // 803D755C
  c->r[30]=c->r[5]|c->r[5]; // 803D7560
  c->lr=0x803D7568u; f_803D5020(c); // 803D7564
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D7568
  c->r[3]=c->r[28]|c->r[28]; // 803D756C
  c->lr=0x803D7574u; f_803D5028(c); // 803D7570
  c->f[28]=c->ps1[28]=S(c->f[1]); // 803D7574
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803D7578
  c->r[3]=c->r[28]|c->r[28]; // 803D757C
  c->r[6]=c->r[29]|c->r[29]; // 803D7580
  c->r[7]=c->r[30]|c->r[30]; // 803D7584
  c->r[4]=c->r[1]+0x0000000Cu; // 803D7588
  c->r[5]=c->r[1]+0x00000008u; // 803D758C
  c->r[31]=0u+0x00000000u; // 803D7590
  c->lr=0x803D7598u; f_803D7C54(c); // 803D7594
  c->f[29]=c->f[1]; // 803D7598
  c->r[3]=c->r[28]|c->r[28]; // 803D759C
  c->lr=0x803D75A4u; f_803D5020(c); // 803D75A0
  c->r[3]=c->r[28]|c->r[28]; // 803D75A4
  c->lr=0x803D75ACu; f_803D5028(c); // 803D75A8
  c->r[0]=0u+0x00000000u; // 803D75AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803D75B0
  W32(c->r[1]+0x00000048u,c->r[0]); // 803D75B4
  c->f[30]=c->ps1[30]=S(c->f[28]-c->f[1]); // 803D75B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D75BC
  c->r[3]=c->r[28]|c->r[28]; // 803D75C0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 803D75C4
  W32(c->r[1]+0x00000050u,c->r[0]); // 803D75C8
  W32(c->r[1]+0x00000040u,c->r[28]); // 803D75CC
  W32(c->r[1]+0x00000044u,c->r[29]); // 803D75D0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 803D75D4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 803D75D8
  c->lr=0x803D75E0u; f_803D3D98(c); // 803D75DC
  c->r[4]=c->r[3]|c->r[3]; // 803D75E0
  c->r[3]=c->r[1]+0x00000030u; // 803D75E4
  c->lr=0x803D75ECu; f_803D0B3C(c); // 803D75E8
  W32(c->r[1]+0x00000030u,c->r[29]); // 803D75EC
  c->r[3]=c->r[1]+0x00000030u; // 803D75F0
  c->r[12]=c->r[1]+0x00000034u; // 803D75F4
  c->lr=0x803D75FCu; f_80289CA4(c); // 803D75F8
  c->r[0]=c->r[0]|0x00000000u; // 803D75FC
  c->r[4]=0u+0x803F0000u; // 803D7600
  c->r[5]=0u+0x803F0000u; // 803D7604
  {uint32_t ea=c->r[4]+0x00000F28u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D7608
  c->r[4]=0u+0x803F0000u; // 803D760C
  {uint32_t ea=c->r[5]+0x00000F38u; c->f[25]=c->ps1[25]=RF32(ea);} // 803D7610
  c->r[26]=c->r[3]|c->r[3]; // 803D7614
  {uint32_t ea=c->r[4]+0x00000F30u; c->f[27]=RF64(ea);} // 803D7618
  c->r[27]=0u+0x43300000u; // 803D761C
  goto L_803D7BA8; // 803D7620
L_803D7624:;
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 803D7624
  cmps(c,0,(int32_t)c->r[4],32); // 803D7628
  if (!crb(c,0)) { goto L_803D7B08; } // 803D762C
  c->r[0]=cntlz(c->r[31]); // 803D7630
  W32(c->r[1]+0x00000044u,c->r[5]); // 803D7634
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 803D7638
  c->r[5]=c->r[1]+0x00000040u; // 803D763C
  W32(c->r[1]+0x00000050u,c->r[0]); // 803D7640
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 803D7644
  c->r[12]=R32(c->r[3]+0x00000000u); // 803D7648
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803D764C
  c->ctr=c->r[12]; // 803D7650
  if (true) { c->lr=0x803D7658u; dispatch(c,c->ctr); } // 803D7654
  cmps(c,0,(int32_t)c->r[3],3); // 803D7658
  if (!crb(c,2)) { goto L_803D7AD4; } // 803D765C
  c->r[0]=R32(c->r[28]+0x00000058u); // 803D7660
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 803D7664
  cmpu(c,0,c->r[0],0x00000001u); // 803D7668
  if (!crb(c,2)) { goto L_803D7884; } // 803D766C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[31]);} // 803D7670
  c->r[31]=R32(c->r[1]+0x00000044u); // 803D7674
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 803D7678
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 803D767C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 803D7680
  c->r[0]=R8(c->r[28]+0x00000000u); // 803D7684
  W8(c->r[1]+0x000000B8u,c->r[0]); // 803D7688
  c->r[0]=R8(c->r[28]+0x00000001u); // 803D768C
  W8(c->r[1]+0x000000B9u,c->r[0]); // 803D7690
  c->r[0]=R8(c->r[28]+0x00000002u); // 803D7694
  W8(c->r[1]+0x000000BAu,c->r[0]); // 803D7698
  c->r[0]=R8(c->r[28]+0x00000003u); // 803D769C
  W8(c->r[1]+0x000000BBu,c->r[0]); // 803D76A0
  c->r[0]=R8(c->r[28]+0x00000004u); // 803D76A4
  W8(c->r[1]+0x000000BCu,c->r[0]); // 803D76A8
  c->r[0]=R8(c->r[28]+0x00000005u); // 803D76AC
  W8(c->r[1]+0x000000BDu,c->r[0]); // 803D76B0
  c->r[0]=R8(c->r[28]+0x00000006u); // 803D76B4
  W8(c->r[1]+0x000000BEu,c->r[0]); // 803D76B8
  c->r[0]=R8(c->r[28]+0x00000007u); // 803D76BC
  W8(c->r[1]+0x000000BFu,c->r[0]); // 803D76C0
  c->r[0]=R8(c->r[28]+0x00000008u); // 803D76C4
  W8(c->r[1]+0x000000C0u,c->r[0]); // 803D76C8
  c->r[0]=R8(c->r[28]+0x00000009u); // 803D76CC
  W8(c->r[1]+0x000000C1u,c->r[0]); // 803D76D0
  c->r[0]=R8(c->r[28]+0x0000000Au); // 803D76D4
  W8(c->r[1]+0x000000C2u,c->r[0]); // 803D76D8
  c->r[0]=R8(c->r[28]+0x0000000Bu); // 803D76DC
  W8(c->r[1]+0x000000C3u,c->r[0]); // 803D76E0
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 803D76E4
  W8(c->r[1]+0x000000C4u,c->r[0]); // 803D76E8
  c->r[0]=R8(c->r[28]+0x0000000Du); // 803D76EC
  W8(c->r[1]+0x000000C5u,c->r[0]); // 803D76F0
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 803D76F4
  W8(c->r[1]+0x000000C6u,c->r[0]); // 803D76F8
  c->r[0]=R8(c->r[28]+0x0000000Fu); // 803D76FC
  W8(c->r[1]+0x000000C7u,c->r[0]); // 803D7700
  c->r[0]=R8(c->r[28]+0x00000010u); // 803D7704
  W8(c->r[1]+0x000000C8u,c->r[0]); // 803D7708
  c->r[0]=R8(c->r[28]+0x00000011u); // 803D770C
  W8(c->r[1]+0x000000C9u,c->r[0]); // 803D7710
  c->r[0]=R8(c->r[28]+0x00000012u); // 803D7714
  W8(c->r[1]+0x000000CAu,c->r[0]); // 803D7718
  c->r[0]=R8(c->r[28]+0x00000013u); // 803D771C
  W8(c->r[1]+0x000000CBu,c->r[0]); // 803D7720
  c->r[0]=R8(c->r[28]+0x00000014u); // 803D7724
  W8(c->r[1]+0x000000CCu,c->r[0]); // 803D7728
  c->r[0]=R8(c->r[28]+0x00000015u); // 803D772C
  W8(c->r[1]+0x000000CDu,c->r[0]); // 803D7730
  c->r[0]=R8(c->r[28]+0x00000016u); // 803D7734
  W8(c->r[1]+0x000000CEu,c->r[0]); // 803D7738
  c->r[0]=R8(c->r[28]+0x00000017u); // 803D773C
  W8(c->r[1]+0x000000CFu,c->r[0]); // 803D7740
  c->r[0]=R8(c->r[28]+0x00000018u); // 803D7744
  W8(c->r[1]+0x000000D0u,c->r[0]); // 803D7748
  c->r[0]=R8(c->r[28]+0x00000019u); // 803D774C
  W8(c->r[1]+0x000000D1u,c->r[0]); // 803D7750
  c->r[0]=R8(c->r[28]+0x0000001Au); // 803D7754
  W8(c->r[1]+0x000000D2u,c->r[0]); // 803D7758
  c->r[0]=R8(c->r[28]+0x0000001Bu); // 803D775C
  W8(c->r[1]+0x000000D3u,c->r[0]); // 803D7760
  c->r[0]=R8(c->r[28]+0x0000001Cu); // 803D7764
  W8(c->r[1]+0x000000D4u,c->r[0]); // 803D7768
  c->r[0]=R8(c->r[28]+0x0000001Du); // 803D776C
  W8(c->r[1]+0x000000D5u,c->r[0]); // 803D7770
  c->r[0]=R8(c->r[28]+0x0000001Eu); // 803D7774
  W8(c->r[1]+0x000000D6u,c->r[0]); // 803D7778
  c->r[0]=R8(c->r[28]+0x0000001Fu); // 803D777C
  W8(c->r[1]+0x000000D7u,c->r[0]); // 803D7780
  c->r[0]=R32(c->r[28]+0x00000020u); // 803D7784
  W32(c->r[1]+0x000000D8u,c->r[0]); // 803D7788
  c->r[3]=R32(c->r[28]+0x00000024u); // 803D778C
  c->r[0]=R32(c->r[28]+0x00000028u); // 803D7790
  W32(c->r[1]+0x000000DCu,c->r[3]); // 803D7794
  W32(c->r[1]+0x000000E0u,c->r[0]); // 803D7798
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 803D779C
  c->r[0]=R32(c->r[28]+0x00000030u); // 803D77A0
  W32(c->r[1]+0x000000E4u,c->r[3]); // 803D77A4
  W32(c->r[1]+0x000000E8u,c->r[0]); // 803D77A8
  c->r[0]=R32(c->r[28]+0x00000034u); // 803D77AC
  W32(c->r[1]+0x000000ECu,c->r[0]); // 803D77B0
  c->r[3]=R32(c->r[28]+0x00000038u); // 803D77B4
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 803D77B8
  W32(c->r[1]+0x000000F0u,c->r[3]); // 803D77BC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 803D77C0
  c->r[0]=R8(c->r[28]+0x00000040u); // 803D77C4
  W8(c->r[1]+0x000000F8u,c->r[0]); // 803D77C8
  c->r[0]=R8(c->r[28]+0x00000041u); // 803D77CC
  W8(c->r[1]+0x000000F9u,c->r[0]); // 803D77D0
  c->r[0]=R8(c->r[28]+0x00000042u); // 803D77D4
  W8(c->r[1]+0x000000FAu,c->r[0]); // 803D77D8
  c->r[0]=R8(c->r[28]+0x00000043u); // 803D77DC
  c->f[1]=c->f[31]; // 803D77E0
  c->f[2]=c->f[31]; // 803D77E4
  c->r[3]=c->r[1]+0x000000B8u; // 803D77E8
  W8(c->r[1]+0x000000FBu,c->r[0]); // 803D77EC
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D77F0
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 803D77F4
  c->r[0]=R32(c->r[28]+0x00000048u); // 803D77F8
  W32(c->r[1]+0x00000100u,c->r[0]); // 803D77FC
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7800
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 803D7804
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7808
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 803D780C
  c->r[0]=R32(c->r[28]+0x00000054u); // 803D7810
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 803D7814
  c->r[0]=R32(c->r[28]+0x00000058u); // 803D7818
  W32(c->r[1]+0x00000110u,c->r[0]); // 803D781C
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 803D7820
  W32(c->r[1]+0x00000114u,c->r[0]); // 803D7824
  c->lr=0x803D782Cu; f_803D4FE4(c); // 803D7828
  c->r[4]=c->r[31]-c->r[29]; // 803D782C
  c->r[5]=c->r[31]|c->r[31]; // 803D7830
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 803D7834
  c->r[3]=c->r[1]+0x000000B8u; // 803D7838
  c->r[0]=c->r[0]+c->r[4]; // 803D783C
  c->r[4]=c->r[1]+0x00000020u; // 803D7840
  c->r[0]=sraw(c,c->r[0],1); // 803D7844
  c->r[6]=c->r[30]-c->r[0]; // 803D7848
  c->lr=0x803D7850u; f_803D7010(c); // 803D784C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7850
  c->r[3]=c->r[1]+0x000000B8u; // 803D7854
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7858
  c->r[4]=0u+0x00000000u; // 803D785C
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 803D7860
  c->lr=0x803D7868u; f_803D3D50(c); // 803D7864
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[26]); // 803D7868
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D786C
  c->r[3]=c->r[28]|c->r[28]; // 803D7870
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[25]); // 803D7874
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D7878
  c->lr=0x803D7880u; f_803D4FF0(c); // 803D787C
  goto L_803D7ACC; // 803D7880
L_803D7884:;
  cmpu(c,0,c->r[0],0x00000002u); // 803D7884
  if (!crb(c,2)) { goto L_803D7A9C; } // 803D7888
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 803D788C
  c->r[31]=R32(c->r[1]+0x00000044u); // 803D7890
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[31]);} // 803D7894
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 803D7898
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[31]);} // 803D789C
  c->r[0]=R8(c->r[28]+0x00000000u); // 803D78A0
  W8(c->r[1]+0x00000058u,c->r[0]); // 803D78A4
  c->r[0]=R8(c->r[28]+0x00000001u); // 803D78A8
  W8(c->r[1]+0x00000059u,c->r[0]); // 803D78AC
  c->r[0]=R8(c->r[28]+0x00000002u); // 803D78B0
  W8(c->r[1]+0x0000005Au,c->r[0]); // 803D78B4
  c->r[0]=R8(c->r[28]+0x00000003u); // 803D78B8
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 803D78BC
  c->r[0]=R8(c->r[28]+0x00000004u); // 803D78C0
  W8(c->r[1]+0x0000005Cu,c->r[0]); // 803D78C4
  c->r[0]=R8(c->r[28]+0x00000005u); // 803D78C8
  W8(c->r[1]+0x0000005Du,c->r[0]); // 803D78CC
  c->r[0]=R8(c->r[28]+0x00000006u); // 803D78D0
  W8(c->r[1]+0x0000005Eu,c->r[0]); // 803D78D4
  c->r[0]=R8(c->r[28]+0x00000007u); // 803D78D8
  W8(c->r[1]+0x0000005Fu,c->r[0]); // 803D78DC
  c->r[0]=R8(c->r[28]+0x00000008u); // 803D78E0
  W8(c->r[1]+0x00000060u,c->r[0]); // 803D78E4
  c->r[0]=R8(c->r[28]+0x00000009u); // 803D78E8
  W8(c->r[1]+0x00000061u,c->r[0]); // 803D78EC
  c->r[0]=R8(c->r[28]+0x0000000Au); // 803D78F0
  W8(c->r[1]+0x00000062u,c->r[0]); // 803D78F4
  c->r[0]=R8(c->r[28]+0x0000000Bu); // 803D78F8
  W8(c->r[1]+0x00000063u,c->r[0]); // 803D78FC
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 803D7900
  W8(c->r[1]+0x00000064u,c->r[0]); // 803D7904
  c->r[0]=R8(c->r[28]+0x0000000Du); // 803D7908
  W8(c->r[1]+0x00000065u,c->r[0]); // 803D790C
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 803D7910
  W8(c->r[1]+0x00000066u,c->r[0]); // 803D7914
  c->r[0]=R8(c->r[28]+0x0000000Fu); // 803D7918
  W8(c->r[1]+0x00000067u,c->r[0]); // 803D791C
  c->r[0]=R8(c->r[28]+0x00000010u); // 803D7920
  W8(c->r[1]+0x00000068u,c->r[0]); // 803D7924
  c->r[0]=R8(c->r[28]+0x00000011u); // 803D7928
  W8(c->r[1]+0x00000069u,c->r[0]); // 803D792C
  c->r[0]=R8(c->r[28]+0x00000012u); // 803D7930
  W8(c->r[1]+0x0000006Au,c->r[0]); // 803D7934
  c->r[0]=R8(c->r[28]+0x00000013u); // 803D7938
  W8(c->r[1]+0x0000006Bu,c->r[0]); // 803D793C
  c->r[0]=R8(c->r[28]+0x00000014u); // 803D7940
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 803D7944
  c->r[0]=R8(c->r[28]+0x00000015u); // 803D7948
  W8(c->r[1]+0x0000006Du,c->r[0]); // 803D794C
  c->r[0]=R8(c->r[28]+0x00000016u); // 803D7950
  W8(c->r[1]+0x0000006Eu,c->r[0]); // 803D7954
  c->r[0]=R8(c->r[28]+0x00000017u); // 803D7958
  W8(c->r[1]+0x0000006Fu,c->r[0]); // 803D795C
  c->r[0]=R8(c->r[28]+0x00000018u); // 803D7960
  W8(c->r[1]+0x00000070u,c->r[0]); // 803D7964
  c->r[0]=R8(c->r[28]+0x00000019u); // 803D7968
  W8(c->r[1]+0x00000071u,c->r[0]); // 803D796C
  c->r[0]=R8(c->r[28]+0x0000001Au); // 803D7970
  W8(c->r[1]+0x00000072u,c->r[0]); // 803D7974
  c->r[0]=R8(c->r[28]+0x0000001Bu); // 803D7978
  W8(c->r[1]+0x00000073u,c->r[0]); // 803D797C
  c->r[0]=R8(c->r[28]+0x0000001Cu); // 803D7980
  W8(c->r[1]+0x00000074u,c->r[0]); // 803D7984
  c->r[0]=R8(c->r[28]+0x0000001Du); // 803D7988
  W8(c->r[1]+0x00000075u,c->r[0]); // 803D798C
  c->r[0]=R8(c->r[28]+0x0000001Eu); // 803D7990
  W8(c->r[1]+0x00000076u,c->r[0]); // 803D7994
  c->r[0]=R8(c->r[28]+0x0000001Fu); // 803D7998
  W8(c->r[1]+0x00000077u,c->r[0]); // 803D799C
  c->r[0]=R32(c->r[28]+0x00000020u); // 803D79A0
  W32(c->r[1]+0x00000078u,c->r[0]); // 803D79A4
  c->r[3]=R32(c->r[28]+0x00000024u); // 803D79A8
  c->r[0]=R32(c->r[28]+0x00000028u); // 803D79AC
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 803D79B0
  W32(c->r[1]+0x00000080u,c->r[0]); // 803D79B4
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 803D79B8
  c->r[0]=R32(c->r[28]+0x00000030u); // 803D79BC
  W32(c->r[1]+0x00000084u,c->r[3]); // 803D79C0
  W32(c->r[1]+0x00000088u,c->r[0]); // 803D79C4
  c->r[0]=R32(c->r[28]+0x00000034u); // 803D79C8
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 803D79CC
  c->r[3]=R32(c->r[28]+0x00000038u); // 803D79D0
  c->r[0]=R32(c->r[28]+0x0000003Cu); // 803D79D4
  W32(c->r[1]+0x00000090u,c->r[3]); // 803D79D8
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D79DC
  c->r[0]=R8(c->r[28]+0x00000040u); // 803D79E0
  W8(c->r[1]+0x00000098u,c->r[0]); // 803D79E4
  c->r[0]=R8(c->r[28]+0x00000041u); // 803D79E8
  W8(c->r[1]+0x00000099u,c->r[0]); // 803D79EC
  c->r[0]=R8(c->r[28]+0x00000042u); // 803D79F0
  W8(c->r[1]+0x0000009Au,c->r[0]); // 803D79F4
  c->r[0]=R8(c->r[28]+0x00000043u); // 803D79F8
  c->f[1]=c->f[31]; // 803D79FC
  c->f[2]=c->f[31]; // 803D7A00
  c->r[3]=c->r[1]+0x00000058u; // 803D7A04
  W8(c->r[1]+0x0000009Bu,c->r[0]); // 803D7A08
  {uint32_t ea=c->r[28]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7A0C
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 803D7A10
  c->r[0]=R32(c->r[28]+0x00000048u); // 803D7A14
  W32(c->r[1]+0x000000A0u,c->r[0]); // 803D7A18
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7A1C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 803D7A20
  {uint32_t ea=c->r[28]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7A24
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 803D7A28
  c->r[0]=R32(c->r[28]+0x00000054u); // 803D7A2C
  W32(c->r[1]+0x000000ACu,c->r[0]); // 803D7A30
  c->r[0]=R32(c->r[28]+0x00000058u); // 803D7A34
  W32(c->r[1]+0x000000B0u,c->r[0]); // 803D7A38
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 803D7A3C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 803D7A40
  c->lr=0x803D7A48u; f_803D4FE4(c); // 803D7A44
  c->r[4]=c->r[31]-c->r[29]; // 803D7A48
  c->r[5]=c->r[31]|c->r[31]; // 803D7A4C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 803D7A50
  c->r[3]=c->r[1]+0x00000058u; // 803D7A54
  c->r[0]=c->r[0]+c->r[4]; // 803D7A58
  c->r[4]=c->r[1]+0x00000010u; // 803D7A5C
  c->r[0]=sraw(c,c->r[0],1); // 803D7A60
  c->r[6]=c->r[30]-c->r[0]; // 803D7A64
  c->lr=0x803D7A6Cu; f_803D7010(c); // 803D7A68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7A6C
  c->r[3]=c->r[1]+0x00000058u; // 803D7A70
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7A74
  c->r[4]=0u+0x00000000u; // 803D7A78
  c->f[26]=c->ps1[26]=S(c->f[1]-c->f[0]); // 803D7A7C
  c->lr=0x803D7A84u; f_803D3D50(c); // 803D7A80
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[26]); // 803D7A84
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7A88
  c->r[3]=c->r[28]|c->r[28]; // 803D7A8C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D7A90
  c->lr=0x803D7A98u; f_803D4FF0(c); // 803D7A94
  goto L_803D7ACC; // 803D7A98
L_803D7A9C:;
  c->r[3]=c->r[28]|c->r[28]; // 803D7A9C
  c->lr=0x803D7AA4u; f_803D5020(c); // 803D7AA0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7AA4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803D7AA8
  fcmp(c,0,c->f[29],c->f[0]); // 803D7AAC
  if (!crb(c,0)) { goto L_803D7AB8; } // 803D7AB0
  goto L_803D7ABC; // 803D7AB4
L_803D7AB8:;
  c->f[0]=c->f[29]; // 803D7AB8
L_803D7ABC:;
  c->f[29]=c->f[0]; // 803D7ABC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7AC0
  c->r[3]=c->r[28]|c->r[28]; // 803D7AC4
  c->lr=0x803D7ACCu; f_803D4FF0(c); // 803D7AC8
L_803D7ACC:;
  c->r[31]=0u+0x00000000u; // 803D7ACC
  goto L_803D7AFC; // 803D7AD0
L_803D7AD4:;
  cmps(c,0,(int32_t)c->r[3],1); // 803D7AD4
  if (!crb(c,2)) { goto L_803D7AE4; } // 803D7AD8
  c->r[31]=0u+0x00000000u; // 803D7ADC
  goto L_803D7AFC; // 803D7AE0
L_803D7AE4:;
  cmps(c,0,(int32_t)c->r[3],2); // 803D7AE4
  if (!crb(c,2)) { goto L_803D7AF4; } // 803D7AE8
  c->r[31]=0u+0x00000001u; // 803D7AEC
  goto L_803D7AFC; // 803D7AF0
L_803D7AF4:;
  cmps(c,0,(int32_t)c->r[3],4); // 803D7AF4
  if (crb(c,2)) { goto L_803D7BC4; } // 803D7AF8
L_803D7AFC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 803D7AFC
  W32(c->r[1]+0x00000030u,c->r[0]); // 803D7B00
  goto L_803D7B94; // 803D7B04
L_803D7B08:;
  c->r[3]=c->r[28]|c->r[28]; // 803D7B08
  c->lr=0x803D7B10u; f_803D5028(c); // 803D7B0C
  cmps(c,0,(int32_t)c->r[31],0); // 803D7B10
  c->f[24]=c->f[1]; // 803D7B14
  if (crb(c,2)) { goto L_803D7B28; } // 803D7B18
  {uint32_t ea=c->r[28]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7B1C
  c->r[3]=c->r[28]|c->r[28]; // 803D7B20
  c->lr=0x803D7B28u; f_803D5000(c); // 803D7B24
L_803D7B28:;
  c->r[3]=c->r[28]|c->r[28]; // 803D7B28
  c->r[31]=0u+0x00000001u; // 803D7B2C
  c->lr=0x803D7B34u; f_803D3D98(c); // 803D7B30
  c->r[25]=c->r[3]|c->r[3]; // 803D7B34
  c->r[3]=c->r[28]|c->r[28]; // 803D7B38
  c->lr=0x803D7B40u; f_803D4C94(c); // 803D7B3C
  c->r[12]=R32(c->r[25]+0x00000000u); // 803D7B40
  c->f[26]=c->f[1]; // 803D7B44
  c->r[3]=c->r[25]|c->r[25]; // 803D7B48
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803D7B4C
  c->ctr=c->r[12]; // 803D7B50
  if (true) { c->lr=0x803D7B58u; dispatch(c,c->ctr); } // 803D7B54
  c->r[0]=0u-c->r[3]; // 803D7B58
  W32(c->r[1]+0x00000118u,c->r[27]); // 803D7B5C
  c->r[0]=c->r[0]^0x80000000u; // 803D7B60
  c->r[3]=c->r[28]|c->r[28]; // 803D7B64
  W32(c->r[1]+0x0000011Cu,c->r[0]); // 803D7B68
  {uint32_t ea=c->r[1]+0x00000118u; c->f[0]=RF64(ea);} // 803D7B6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 803D7B70
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[26]); // 803D7B74
  c->lr=0x803D7B7Cu; f_803D5010(c); // 803D7B78
  c->r[3]=c->r[28]|c->r[28]; // 803D7B7C
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 803D7B80
  c->lr=0x803D7B88u; f_803D4EA8(c); // 803D7B84
  c->f[1]=c->f[24]; // 803D7B88
  c->r[3]=c->r[28]|c->r[28]; // 803D7B8C
  c->lr=0x803D7B94u; f_803D4FF8(c); // 803D7B90
L_803D7B94:;
  c->r[3]=c->r[1]+0x00000030u; // 803D7B94
  c->r[12]=c->r[1]+0x00000034u; // 803D7B98
  c->lr=0x803D7BA0u; f_80289CA4(c); // 803D7B9C
  c->r[0]=c->r[0]|0x00000000u; // 803D7BA0
  c->r[26]=c->r[3]|c->r[3]; // 803D7BA4
L_803D7BA8:;
  c->r[5]=R32(c->r[1]+0x00000030u); // 803D7BA8
  c->r[3]=c->r[5]-c->r[29]; // 803D7BAC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803D7BB0
  c->r[0]=c->r[0]+c->r[3]; // 803D7BB4
  c->r[0]=sraw(c,c->r[0],1); // 803D7BB8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 803D7BBC
  if (!crb(c,1)) { IRQCHK(c); goto L_803D7624; } // 803D7BC0
L_803D7BC4:;
  c->r[0]=R32(c->r[28]+0x00000058u); // 803D7BC4
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 803D7BC8
  cmpu(c,0,c->r[0],0x00000100u); // 803D7BCC
  if (crb(c,2)) { goto L_803D7BDC; } // 803D7BD0
  cmpu(c,0,c->r[0],0x00000200u); // 803D7BD4
  if (!crb(c,2)) { goto L_803D7BEC; } // 803D7BD8
L_803D7BDC:;
  c->f[1]=c->f[28]; // 803D7BDC
  c->r[3]=c->r[28]|c->r[28]; // 803D7BE0
  c->lr=0x803D7BE8u; f_803D4FF8(c); // 803D7BE4
  goto L_803D7BF8; // 803D7BE8
L_803D7BEC:;
  c->f[1]=c->f[30]; // 803D7BEC
  c->r[3]=c->r[28]|c->r[28]; // 803D7BF0
  c->lr=0x803D7BF8u; f_803D5010(c); // 803D7BF4
L_803D7BF8:;
  c->f[1]=c->f[29]; // 803D7BF8
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,31,ea,0,0);} // 803D7BFC
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[31]=RF64(ea);} // 803D7C00
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,30,ea,0,0);} // 803D7C04
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[30]=RF64(ea);} // 803D7C08
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,29,ea,0,0);} // 803D7C0C
  {uint32_t ea=c->r[1]+0x00000190u; c->f[29]=RF64(ea);} // 803D7C10
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,28,ea,0,0);} // 803D7C14
  {uint32_t ea=c->r[1]+0x00000180u; c->f[28]=RF64(ea);} // 803D7C18
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,27,ea,0,0);} // 803D7C1C
  {uint32_t ea=c->r[1]+0x00000170u; c->f[27]=RF64(ea);} // 803D7C20
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,26,ea,0,0);} // 803D7C24
  {uint32_t ea=c->r[1]+0x00000160u; c->f[26]=RF64(ea);} // 803D7C28
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,25,ea,0,0);} // 803D7C2C
  {uint32_t ea=c->r[1]+0x00000150u; c->f[25]=RF64(ea);} // 803D7C30
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,24,ea,0,0);} // 803D7C34
  {uint32_t ea=c->r[1]+0x00000140u; c->f[24]=RF64(ea);} // 803D7C38
  c->r[11]=c->r[1]+0x00000140u; // 803D7C3C
  c->lr=0x803D7C44u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D7C40
  c->r[0]=R32(c->r[1]+0x000001C4u); // 803D7C44
  c->lr=c->r[0]; // 803D7C48
  c->r[1]=c->r[1]+0x000001C0u; // 803D7C4C
  return; // 803D7C50
}

// AdjustCursor__Q36nw4hbm2ut17TextWriterBase<w>FPfPfPCwi
void f_803D7C54(Ctx* __restrict c) {
  trace_call(0x803D7C54u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D7C54
  c->r[0]=c->lr; // 803D7C58
  W32(c->r[1]+0x00000194u,c->r[0]); // 803D7C5C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 803D7C60
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 803D7C64
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 803D7C68
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 803D7C6C
  c->r[11]=c->r[1]+0x00000170u; // 803D7C70
  c->lr=0x803D7C78u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803D7C74
  c->r[0]=R32(c->r[3]+0x00000058u); // 803D7C78
  c->r[8]=0u+0x803F0000u; // 803D7C7C
  {uint32_t ea=c->r[8]+0x00000F28u; c->f[31]=c->ps1[31]=RF32(ea);} // 803D7C80
  c->r[27]=c->r[3]|c->r[3]; // 803D7C84
  c->r[0]=c->r[0]&0x00000333u; cr0(c,c->r[0]); // 803D7C88
  c->r[28]=c->r[4]|c->r[4]; // 803D7C8C
  c->f[2]=c->f[31]; // 803D7C90
  c->r[29]=c->r[5]|c->r[5]; // 803D7C94
  c->r[30]=c->r[6]|c->r[6]; // 803D7C98
  c->r[31]=c->r[7]|c->r[7]; // 803D7C9C
  cmpu(c,0,c->r[0],0x00000300u); // 803D7CA0
  if (crb(c,2)) { goto L_803D7E90; } // 803D7CA4
  cmps(c,0,(int32_t)c->r[0],0); // 803D7CA8
  if (crb(c,2)) { goto L_803D7E90; } // 803D7CAC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[31]);} // 803D7CB0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[31]);} // 803D7CB4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[31]);} // 803D7CB8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 803D7CBC
  c->r[0]=R8(c->r[3]+0x00000000u); // 803D7CC0
  W8(c->r[1]+0x000000F8u,c->r[0]); // 803D7CC4
  c->r[0]=R8(c->r[3]+0x00000001u); // 803D7CC8
  W8(c->r[1]+0x000000F9u,c->r[0]); // 803D7CCC
  c->r[0]=R8(c->r[3]+0x00000002u); // 803D7CD0
  W8(c->r[1]+0x000000FAu,c->r[0]); // 803D7CD4
  c->r[0]=R8(c->r[3]+0x00000003u); // 803D7CD8
  W8(c->r[1]+0x000000FBu,c->r[0]); // 803D7CDC
  c->r[0]=R8(c->r[3]+0x00000004u); // 803D7CE0
  W8(c->r[1]+0x000000FCu,c->r[0]); // 803D7CE4
  c->r[0]=R8(c->r[3]+0x00000005u); // 803D7CE8
  W8(c->r[1]+0x000000FDu,c->r[0]); // 803D7CEC
  c->r[0]=R8(c->r[3]+0x00000006u); // 803D7CF0
  W8(c->r[1]+0x000000FEu,c->r[0]); // 803D7CF4
  c->r[0]=R8(c->r[3]+0x00000007u); // 803D7CF8
  W8(c->r[1]+0x000000FFu,c->r[0]); // 803D7CFC
  c->r[0]=R8(c->r[3]+0x00000008u); // 803D7D00
  W8(c->r[1]+0x00000100u,c->r[0]); // 803D7D04
  c->r[0]=R8(c->r[3]+0x00000009u); // 803D7D08
  W8(c->r[1]+0x00000101u,c->r[0]); // 803D7D0C
  c->r[0]=R8(c->r[3]+0x0000000Au); // 803D7D10
  W8(c->r[1]+0x00000102u,c->r[0]); // 803D7D14
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 803D7D18
  W8(c->r[1]+0x00000103u,c->r[0]); // 803D7D1C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803D7D20
  W8(c->r[1]+0x00000104u,c->r[0]); // 803D7D24
  c->r[0]=R8(c->r[3]+0x0000000Du); // 803D7D28
  W8(c->r[1]+0x00000105u,c->r[0]); // 803D7D2C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 803D7D30
  W8(c->r[1]+0x00000106u,c->r[0]); // 803D7D34
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 803D7D38
  W8(c->r[1]+0x00000107u,c->r[0]); // 803D7D3C
  c->r[0]=R8(c->r[3]+0x00000010u); // 803D7D40
  W8(c->r[1]+0x00000108u,c->r[0]); // 803D7D44
  c->r[0]=R8(c->r[3]+0x00000011u); // 803D7D48
  W8(c->r[1]+0x00000109u,c->r[0]); // 803D7D4C
  c->r[0]=R8(c->r[3]+0x00000012u); // 803D7D50
  W8(c->r[1]+0x0000010Au,c->r[0]); // 803D7D54
  c->r[0]=R8(c->r[3]+0x00000013u); // 803D7D58
  W8(c->r[1]+0x0000010Bu,c->r[0]); // 803D7D5C
  c->r[0]=R8(c->r[3]+0x00000014u); // 803D7D60
  W8(c->r[1]+0x0000010Cu,c->r[0]); // 803D7D64
  c->r[0]=R8(c->r[3]+0x00000015u); // 803D7D68
  W8(c->r[1]+0x0000010Du,c->r[0]); // 803D7D6C
  c->r[0]=R8(c->r[3]+0x00000016u); // 803D7D70
  W8(c->r[1]+0x0000010Eu,c->r[0]); // 803D7D74
  c->r[0]=R8(c->r[3]+0x00000017u); // 803D7D78
  W8(c->r[1]+0x0000010Fu,c->r[0]); // 803D7D7C
  c->r[0]=R8(c->r[3]+0x00000018u); // 803D7D80
  W8(c->r[1]+0x00000110u,c->r[0]); // 803D7D84
  c->r[0]=R8(c->r[3]+0x00000019u); // 803D7D88
  W8(c->r[1]+0x00000111u,c->r[0]); // 803D7D8C
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803D7D90
  W8(c->r[1]+0x00000112u,c->r[0]); // 803D7D94
  c->r[0]=R8(c->r[3]+0x0000001Bu); // 803D7D98
  W8(c->r[1]+0x00000113u,c->r[0]); // 803D7D9C
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 803D7DA0
  W8(c->r[1]+0x00000114u,c->r[0]); // 803D7DA4
  c->r[0]=R8(c->r[3]+0x0000001Du); // 803D7DA8
  W8(c->r[1]+0x00000115u,c->r[0]); // 803D7DAC
  c->r[0]=R8(c->r[3]+0x0000001Eu); // 803D7DB0
  W8(c->r[1]+0x00000116u,c->r[0]); // 803D7DB4
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 803D7DB8
  W8(c->r[1]+0x00000117u,c->r[0]); // 803D7DBC
  c->r[0]=R32(c->r[3]+0x00000020u); // 803D7DC0
  W32(c->r[1]+0x00000118u,c->r[0]); // 803D7DC4
  c->r[4]=R32(c->r[3]+0x00000024u); // 803D7DC8
  c->r[0]=R32(c->r[3]+0x00000028u); // 803D7DCC
  W32(c->r[1]+0x0000011Cu,c->r[4]); // 803D7DD0
  W32(c->r[1]+0x00000120u,c->r[0]); // 803D7DD4
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 803D7DD8
  c->r[0]=R32(c->r[3]+0x00000030u); // 803D7DDC
  W32(c->r[1]+0x00000124u,c->r[4]); // 803D7DE0
  W32(c->r[1]+0x00000128u,c->r[0]); // 803D7DE4
  c->r[0]=R32(c->r[3]+0x00000034u); // 803D7DE8
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 803D7DEC
  c->r[4]=R32(c->r[3]+0x00000038u); // 803D7DF0
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 803D7DF4
  W32(c->r[1]+0x00000130u,c->r[4]); // 803D7DF8
  W32(c->r[1]+0x00000134u,c->r[0]); // 803D7DFC
  c->r[0]=R8(c->r[3]+0x00000040u); // 803D7E00
  W8(c->r[1]+0x00000138u,c->r[0]); // 803D7E04
  c->r[0]=R8(c->r[3]+0x00000041u); // 803D7E08
  W8(c->r[1]+0x00000139u,c->r[0]); // 803D7E0C
  c->r[0]=R8(c->r[3]+0x00000042u); // 803D7E10
  W8(c->r[1]+0x0000013Au,c->r[0]); // 803D7E14
  c->r[0]=R8(c->r[3]+0x00000043u); // 803D7E18
  W8(c->r[1]+0x0000013Bu,c->r[0]); // 803D7E1C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7E20
  c->r[5]=c->r[30]|c->r[30]; // 803D7E24
  c->r[6]=c->r[31]|c->r[31]; // 803D7E28
  c->r[4]=c->r[1]+0x00000028u; // 803D7E2C
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 803D7E30
  c->r[0]=R32(c->r[3]+0x00000048u); // 803D7E34
  W32(c->r[1]+0x00000140u,c->r[0]); // 803D7E38
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7E3C
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 803D7E40
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7E44
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 803D7E48
  c->r[0]=R32(c->r[3]+0x00000054u); // 803D7E4C
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 803D7E50
  c->r[0]=R32(c->r[3]+0x00000058u); // 803D7E54
  W32(c->r[1]+0x00000150u,c->r[0]); // 803D7E58
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 803D7E5C
  c->r[3]=c->r[1]+0x000000F8u; // 803D7E60
  W32(c->r[1]+0x00000154u,c->r[0]); // 803D7E64
  c->lr=0x803D7E6Cu; f_803D73EC(c); // 803D7E68
  c->r[3]=c->r[1]+0x000000F8u; // 803D7E6C
  c->r[4]=0u+0x00000000u; // 803D7E70
  c->lr=0x803D7E78u; f_803D3D50(c); // 803D7E74
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 803D7E78
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 803D7E7C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7E80
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7E84
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[2]); // 803D7E88
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 803D7E8C
L_803D7E90:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 803D7E90
  c->r[0]=rotl(c->r[0],0)&0x00000030u; // 803D7E94
  cmpu(c,0,c->r[0],0x00000010u); // 803D7E98
  if (!crb(c,2)) { goto L_803D7EBC; } // 803D7E9C
  c->r[3]=0u+0x803F0000u; // 803D7EA0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7EA4
  {uint32_t ea=c->r[3]+0x00000F38u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7EA8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803D7EAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803D7EB0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 803D7EB4
  goto L_803D7ED0; // 803D7EB8
L_803D7EBC:;
  cmpu(c,0,c->r[0],0x00000020u); // 803D7EBC
  if (!crb(c,2)) { goto L_803D7ED0; } // 803D7EC0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7EC4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 803D7EC8
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 803D7ECC
L_803D7ED0:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 803D7ED0
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 803D7ED4
  cmpu(c,0,c->r[0],0x00000100u); // 803D7ED8
  if (!crb(c,2)) { goto L_803D7EFC; } // 803D7EDC
  c->r[3]=0u+0x803F0000u; // 803D7EE0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7EE4
  {uint32_t ea=c->r[3]+0x00000F38u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7EE8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D7EEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803D7EF0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 803D7EF4
  goto L_803D7F10; // 803D7EF8
L_803D7EFC:;
  cmpu(c,0,c->r[0],0x00000200u); // 803D7EFC
  if (!crb(c,2)) { goto L_803D7F10; } // 803D7F00
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D7F04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803D7F08
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 803D7F0C
L_803D7F10:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 803D7F10
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 803D7F14
  cmpu(c,0,c->r[0],0x00000001u); // 803D7F18
  if (!crb(c,2)) { goto L_803D812C; } // 803D7F1C
  c->r[3]=0u+0x803F0000u; // 803D7F20
  {uint32_t ea=c->r[3]+0x00000F28u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D7F24
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803D7F28
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803D7F2C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 803D7F30
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 803D7F34
  c->r[0]=R8(c->r[27]+0x00000000u); // 803D7F38
  W8(c->r[1]+0x00000098u,c->r[0]); // 803D7F3C
  c->r[0]=R8(c->r[27]+0x00000001u); // 803D7F40
  W8(c->r[1]+0x00000099u,c->r[0]); // 803D7F44
  c->r[0]=R8(c->r[27]+0x00000002u); // 803D7F48
  W8(c->r[1]+0x0000009Au,c->r[0]); // 803D7F4C
  c->r[0]=R8(c->r[27]+0x00000003u); // 803D7F50
  W8(c->r[1]+0x0000009Bu,c->r[0]); // 803D7F54
  c->r[0]=R8(c->r[27]+0x00000004u); // 803D7F58
  W8(c->r[1]+0x0000009Cu,c->r[0]); // 803D7F5C
  c->r[0]=R8(c->r[27]+0x00000005u); // 803D7F60
  W8(c->r[1]+0x0000009Du,c->r[0]); // 803D7F64
  c->r[0]=R8(c->r[27]+0x00000006u); // 803D7F68
  W8(c->r[1]+0x0000009Eu,c->r[0]); // 803D7F6C
  c->r[0]=R8(c->r[27]+0x00000007u); // 803D7F70
  W8(c->r[1]+0x0000009Fu,c->r[0]); // 803D7F74
  c->r[0]=R8(c->r[27]+0x00000008u); // 803D7F78
  W8(c->r[1]+0x000000A0u,c->r[0]); // 803D7F7C
  c->r[0]=R8(c->r[27]+0x00000009u); // 803D7F80
  W8(c->r[1]+0x000000A1u,c->r[0]); // 803D7F84
  c->r[0]=R8(c->r[27]+0x0000000Au); // 803D7F88
  W8(c->r[1]+0x000000A2u,c->r[0]); // 803D7F8C
  c->r[0]=R8(c->r[27]+0x0000000Bu); // 803D7F90
  W8(c->r[1]+0x000000A3u,c->r[0]); // 803D7F94
  c->r[0]=R8(c->r[27]+0x0000000Cu); // 803D7F98
  W8(c->r[1]+0x000000A4u,c->r[0]); // 803D7F9C
  c->r[0]=R8(c->r[27]+0x0000000Du); // 803D7FA0
  W8(c->r[1]+0x000000A5u,c->r[0]); // 803D7FA4
  c->r[0]=R8(c->r[27]+0x0000000Eu); // 803D7FA8
  W8(c->r[1]+0x000000A6u,c->r[0]); // 803D7FAC
  c->r[0]=R8(c->r[27]+0x0000000Fu); // 803D7FB0
  W8(c->r[1]+0x000000A7u,c->r[0]); // 803D7FB4
  c->r[0]=R8(c->r[27]+0x00000010u); // 803D7FB8
  W8(c->r[1]+0x000000A8u,c->r[0]); // 803D7FBC
  c->r[0]=R8(c->r[27]+0x00000011u); // 803D7FC0
  W8(c->r[1]+0x000000A9u,c->r[0]); // 803D7FC4
  c->r[0]=R8(c->r[27]+0x00000012u); // 803D7FC8
  W8(c->r[1]+0x000000AAu,c->r[0]); // 803D7FCC
  c->r[0]=R8(c->r[27]+0x00000013u); // 803D7FD0
  W8(c->r[1]+0x000000ABu,c->r[0]); // 803D7FD4
  c->r[0]=R8(c->r[27]+0x00000014u); // 803D7FD8
  W8(c->r[1]+0x000000ACu,c->r[0]); // 803D7FDC
  c->r[0]=R8(c->r[27]+0x00000015u); // 803D7FE0
  W8(c->r[1]+0x000000ADu,c->r[0]); // 803D7FE4
  c->r[0]=R8(c->r[27]+0x00000016u); // 803D7FE8
  W8(c->r[1]+0x000000AEu,c->r[0]); // 803D7FEC
  c->r[0]=R8(c->r[27]+0x00000017u); // 803D7FF0
  W8(c->r[1]+0x000000AFu,c->r[0]); // 803D7FF4
  c->r[0]=R8(c->r[27]+0x00000018u); // 803D7FF8
  W8(c->r[1]+0x000000B0u,c->r[0]); // 803D7FFC
  c->r[0]=R8(c->r[27]+0x00000019u); // 803D8000
  W8(c->r[1]+0x000000B1u,c->r[0]); // 803D8004
  c->r[0]=R8(c->r[27]+0x0000001Au); // 803D8008
  W8(c->r[1]+0x000000B2u,c->r[0]); // 803D800C
  c->r[0]=R8(c->r[27]+0x0000001Bu); // 803D8010
  W8(c->r[1]+0x000000B3u,c->r[0]); // 803D8014
  c->r[0]=R8(c->r[27]+0x0000001Cu); // 803D8018
  W8(c->r[1]+0x000000B4u,c->r[0]); // 803D801C
  c->r[0]=R8(c->r[27]+0x0000001Du); // 803D8020
  W8(c->r[1]+0x000000B5u,c->r[0]); // 803D8024
  c->r[0]=R8(c->r[27]+0x0000001Eu); // 803D8028
  W8(c->r[1]+0x000000B6u,c->r[0]); // 803D802C
  c->r[0]=R8(c->r[27]+0x0000001Fu); // 803D8030
  W8(c->r[1]+0x000000B7u,c->r[0]); // 803D8034
  c->r[0]=R32(c->r[27]+0x00000020u); // 803D8038
  W32(c->r[1]+0x000000B8u,c->r[0]); // 803D803C
  c->r[3]=R32(c->r[27]+0x00000024u); // 803D8040
  c->r[0]=R32(c->r[27]+0x00000028u); // 803D8044
  W32(c->r[1]+0x000000BCu,c->r[3]); // 803D8048
  W32(c->r[1]+0x000000C0u,c->r[0]); // 803D804C
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 803D8050
  c->r[0]=R32(c->r[27]+0x00000030u); // 803D8054
  W32(c->r[1]+0x000000C4u,c->r[3]); // 803D8058
  W32(c->r[1]+0x000000C8u,c->r[0]); // 803D805C
  c->r[0]=R32(c->r[27]+0x00000034u); // 803D8060
  W32(c->r[1]+0x000000CCu,c->r[0]); // 803D8064
  c->r[3]=R32(c->r[27]+0x00000038u); // 803D8068
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 803D806C
  W32(c->r[1]+0x000000D0u,c->r[3]); // 803D8070
  W32(c->r[1]+0x000000D4u,c->r[0]); // 803D8074
  c->r[0]=R8(c->r[27]+0x00000040u); // 803D8078
  W8(c->r[1]+0x000000D8u,c->r[0]); // 803D807C
  c->r[0]=R8(c->r[27]+0x00000041u); // 803D8080
  W8(c->r[1]+0x000000D9u,c->r[0]); // 803D8084
  c->r[0]=R8(c->r[27]+0x00000042u); // 803D8088
  W8(c->r[1]+0x000000DAu,c->r[0]); // 803D808C
  c->r[0]=R8(c->r[27]+0x00000043u); // 803D8090
  W8(c->r[1]+0x000000DBu,c->r[0]); // 803D8094
  {uint32_t ea=c->r[27]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D8098
  c->f[2]=c->f[1]; // 803D809C
  c->r[3]=c->r[1]+0x00000098u; // 803D80A0
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 803D80A4
  c->r[0]=R32(c->r[27]+0x00000048u); // 803D80A8
  W32(c->r[1]+0x000000E0u,c->r[0]); // 803D80AC
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D80B0
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 803D80B4
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D80B8
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 803D80BC
  c->r[0]=R32(c->r[27]+0x00000054u); // 803D80C0
  W32(c->r[1]+0x000000ECu,c->r[0]); // 803D80C4
  c->r[0]=R32(c->r[27]+0x00000058u); // 803D80C8
  W32(c->r[1]+0x000000F0u,c->r[0]); // 803D80CC
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 803D80D0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 803D80D4
  c->lr=0x803D80DCu; f_803D4FE4(c); // 803D80D8
  c->r[5]=c->r[30]|c->r[30]; // 803D80DC
  c->r[6]=c->r[31]|c->r[31]; // 803D80E0
  c->r[3]=c->r[1]+0x00000098u; // 803D80E4
  c->r[4]=c->r[1]+0x00000018u; // 803D80E8
  c->lr=0x803D80F0u; f_803D7010(c); // 803D80EC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D80F0
  c->r[3]=c->r[1]+0x00000098u; // 803D80F4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D80F8
  c->r[4]=0u+0x00000000u; // 803D80FC
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 803D8100
  c->lr=0x803D8108u; f_803D3D50(c); // 803D8104
  c->r[3]=0u+0x803F0000u; // 803D8108
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[30]); // 803D810C
  {uint32_t ea=c->r[3]+0x00000F38u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D8110
  c->r[3]=c->r[27]|c->r[27]; // 803D8114
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D8118
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803D811C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D8120
  c->lr=0x803D8128u; f_803D4FF0(c); // 803D8124
  goto L_803D8340; // 803D8128
L_803D812C:;
  cmpu(c,0,c->r[0],0x00000002u); // 803D812C
  if (!crb(c,2)) { goto L_803D8334; } // 803D8130
  c->r[3]=0u+0x803F0000u; // 803D8134
  {uint32_t ea=c->r[3]+0x00000F28u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D8138
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803D813C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803D8140
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803D8144
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803D8148
  c->r[0]=R8(c->r[27]+0x00000000u); // 803D814C
  W8(c->r[1]+0x00000038u,c->r[0]); // 803D8150
  c->r[0]=R8(c->r[27]+0x00000001u); // 803D8154
  W8(c->r[1]+0x00000039u,c->r[0]); // 803D8158
  c->r[0]=R8(c->r[27]+0x00000002u); // 803D815C
  W8(c->r[1]+0x0000003Au,c->r[0]); // 803D8160
  c->r[0]=R8(c->r[27]+0x00000003u); // 803D8164
  W8(c->r[1]+0x0000003Bu,c->r[0]); // 803D8168
  c->r[0]=R8(c->r[27]+0x00000004u); // 803D816C
  W8(c->r[1]+0x0000003Cu,c->r[0]); // 803D8170
  c->r[0]=R8(c->r[27]+0x00000005u); // 803D8174
  W8(c->r[1]+0x0000003Du,c->r[0]); // 803D8178
  c->r[0]=R8(c->r[27]+0x00000006u); // 803D817C
  W8(c->r[1]+0x0000003Eu,c->r[0]); // 803D8180
  c->r[0]=R8(c->r[27]+0x00000007u); // 803D8184
  W8(c->r[1]+0x0000003Fu,c->r[0]); // 803D8188
  c->r[0]=R8(c->r[27]+0x00000008u); // 803D818C
  W8(c->r[1]+0x00000040u,c->r[0]); // 803D8190
  c->r[0]=R8(c->r[27]+0x00000009u); // 803D8194
  W8(c->r[1]+0x00000041u,c->r[0]); // 803D8198
  c->r[0]=R8(c->r[27]+0x0000000Au); // 803D819C
  W8(c->r[1]+0x00000042u,c->r[0]); // 803D81A0
  c->r[0]=R8(c->r[27]+0x0000000Bu); // 803D81A4
  W8(c->r[1]+0x00000043u,c->r[0]); // 803D81A8
  c->r[0]=R8(c->r[27]+0x0000000Cu); // 803D81AC
  W8(c->r[1]+0x00000044u,c->r[0]); // 803D81B0
  c->r[0]=R8(c->r[27]+0x0000000Du); // 803D81B4
  W8(c->r[1]+0x00000045u,c->r[0]); // 803D81B8
  c->r[0]=R8(c->r[27]+0x0000000Eu); // 803D81BC
  W8(c->r[1]+0x00000046u,c->r[0]); // 803D81C0
  c->r[0]=R8(c->r[27]+0x0000000Fu); // 803D81C4
  W8(c->r[1]+0x00000047u,c->r[0]); // 803D81C8
  c->r[0]=R8(c->r[27]+0x00000010u); // 803D81CC
  W8(c->r[1]+0x00000048u,c->r[0]); // 803D81D0
  c->r[0]=R8(c->r[27]+0x00000011u); // 803D81D4
  W8(c->r[1]+0x00000049u,c->r[0]); // 803D81D8
  c->r[0]=R8(c->r[27]+0x00000012u); // 803D81DC
  W8(c->r[1]+0x0000004Au,c->r[0]); // 803D81E0
  c->r[0]=R8(c->r[27]+0x00000013u); // 803D81E4
  W8(c->r[1]+0x0000004Bu,c->r[0]); // 803D81E8
  c->r[0]=R8(c->r[27]+0x00000014u); // 803D81EC
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 803D81F0
  c->r[0]=R8(c->r[27]+0x00000015u); // 803D81F4
  W8(c->r[1]+0x0000004Du,c->r[0]); // 803D81F8
  c->r[0]=R8(c->r[27]+0x00000016u); // 803D81FC
  W8(c->r[1]+0x0000004Eu,c->r[0]); // 803D8200
  c->r[0]=R8(c->r[27]+0x00000017u); // 803D8204
  W8(c->r[1]+0x0000004Fu,c->r[0]); // 803D8208
  c->r[0]=R8(c->r[27]+0x00000018u); // 803D820C
  W8(c->r[1]+0x00000050u,c->r[0]); // 803D8210
  c->r[0]=R8(c->r[27]+0x00000019u); // 803D8214
  W8(c->r[1]+0x00000051u,c->r[0]); // 803D8218
  c->r[0]=R8(c->r[27]+0x0000001Au); // 803D821C
  W8(c->r[1]+0x00000052u,c->r[0]); // 803D8220
  c->r[0]=R8(c->r[27]+0x0000001Bu); // 803D8224
  W8(c->r[1]+0x00000053u,c->r[0]); // 803D8228
  c->r[0]=R8(c->r[27]+0x0000001Cu); // 803D822C
  W8(c->r[1]+0x00000054u,c->r[0]); // 803D8230
  c->r[0]=R8(c->r[27]+0x0000001Du); // 803D8234
  W8(c->r[1]+0x00000055u,c->r[0]); // 803D8238
  c->r[0]=R8(c->r[27]+0x0000001Eu); // 803D823C
  W8(c->r[1]+0x00000056u,c->r[0]); // 803D8240
  c->r[0]=R8(c->r[27]+0x0000001Fu); // 803D8244
  W8(c->r[1]+0x00000057u,c->r[0]); // 803D8248
  c->r[0]=R32(c->r[27]+0x00000020u); // 803D824C
  W32(c->r[1]+0x00000058u,c->r[0]); // 803D8250
  c->r[3]=R32(c->r[27]+0x00000024u); // 803D8254
  c->r[0]=R32(c->r[27]+0x00000028u); // 803D8258
  W32(c->r[1]+0x0000005Cu,c->r[3]); // 803D825C
  W32(c->r[1]+0x00000060u,c->r[0]); // 803D8260
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 803D8264
  c->r[0]=R32(c->r[27]+0x00000030u); // 803D8268
  W32(c->r[1]+0x00000064u,c->r[3]); // 803D826C
  W32(c->r[1]+0x00000068u,c->r[0]); // 803D8270
  c->r[0]=R32(c->r[27]+0x00000034u); // 803D8274
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 803D8278
  c->r[3]=R32(c->r[27]+0x00000038u); // 803D827C
  c->r[0]=R32(c->r[27]+0x0000003Cu); // 803D8280
  W32(c->r[1]+0x00000070u,c->r[3]); // 803D8284
  W32(c->r[1]+0x00000074u,c->r[0]); // 803D8288
  c->r[0]=R8(c->r[27]+0x00000040u); // 803D828C
  W8(c->r[1]+0x00000078u,c->r[0]); // 803D8290
  c->r[0]=R8(c->r[27]+0x00000041u); // 803D8294
  W8(c->r[1]+0x00000079u,c->r[0]); // 803D8298
  c->r[0]=R8(c->r[27]+0x00000042u); // 803D829C
  W8(c->r[1]+0x0000007Au,c->r[0]); // 803D82A0
  c->r[0]=R8(c->r[27]+0x00000043u); // 803D82A4
  W8(c->r[1]+0x0000007Bu,c->r[0]); // 803D82A8
  {uint32_t ea=c->r[27]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D82AC
  c->f[2]=c->f[1]; // 803D82B0
  c->r[3]=c->r[1]+0x00000038u; // 803D82B4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 803D82B8
  c->r[0]=R32(c->r[27]+0x00000048u); // 803D82BC
  W32(c->r[1]+0x00000080u,c->r[0]); // 803D82C0
  {uint32_t ea=c->r[27]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803D82C4
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 803D82C8
  {uint32_t ea=c->r[27]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D82CC
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 803D82D0
  c->r[0]=R32(c->r[27]+0x00000054u); // 803D82D4
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 803D82D8
  c->r[0]=R32(c->r[27]+0x00000058u); // 803D82DC
  W32(c->r[1]+0x00000090u,c->r[0]); // 803D82E0
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 803D82E4
  W32(c->r[1]+0x00000094u,c->r[0]); // 803D82E8
  c->lr=0x803D82F0u; f_803D4FE4(c); // 803D82EC
  c->r[5]=c->r[30]|c->r[30]; // 803D82F0
  c->r[6]=c->r[31]|c->r[31]; // 803D82F4
  c->r[3]=c->r[1]+0x00000038u; // 803D82F8
  c->r[4]=c->r[1]+0x00000008u; // 803D82FC
  c->lr=0x803D8304u; f_803D7010(c); // 803D8300
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D8304
  c->r[3]=c->r[1]+0x00000038u; // 803D8308
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D830C
  c->r[4]=0u+0x00000000u; // 803D8310
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[0]); // 803D8314
  c->lr=0x803D831Cu; f_803D3D50(c); // 803D8318
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[30]); // 803D831C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D8320
  c->r[3]=c->r[27]|c->r[27]; // 803D8324
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D8328
  c->lr=0x803D8330u; f_803D4FF0(c); // 803D832C
  goto L_803D8340; // 803D8330
L_803D8334:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D8334
  c->r[3]=c->r[27]|c->r[27]; // 803D8338
  c->lr=0x803D8340u; f_803D4FF0(c); // 803D833C
L_803D8340:;
  c->r[0]=R32(c->r[27]+0x00000058u); // 803D8340
  c->r[0]=rotl(c->r[0],0)&0x00000300u; // 803D8344
  cmpu(c,0,c->r[0],0x00000300u); // 803D8348
  if (!crb(c,2)) { goto L_803D8360; } // 803D834C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803D8350
  c->r[3]=c->r[27]|c->r[27]; // 803D8354
  c->lr=0x803D835Cu; f_803D4FF8(c); // 803D8358
  goto L_803D8378; // 803D835C
L_803D8360:;
  c->r[3]=c->r[27]|c->r[27]; // 803D8360
  c->lr=0x803D8368u; f_803D4E34(c); // 803D8364
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803D8368
  c->r[3]=c->r[27]|c->r[27]; // 803D836C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803D8370
  c->lr=0x803D8378u; f_803D4FF8(c); // 803D8374
L_803D8378:;
  c->f[1]=c->f[31]; // 803D8378
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 803D837C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 803D8380
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,30,ea,0,0);} // 803D8384
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 803D8388
  c->r[11]=c->r[1]+0x00000170u; // 803D838C
  c->lr=0x803D8394u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803D8390
  c->r[0]=R32(c->r[1]+0x00000194u); // 803D8394
  c->lr=c->r[0]; // 803D8398
  c->r[1]=c->r[1]+0x00000190u; // 803D839C
  return; // 803D83A0
}

// fn_803D83A4
void f_803D83A4(Ctx* __restrict c) {
  trace_call(0x803D83A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803D83A4
  c->r[0]=c->lr; // 803D83A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803D83AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803D83B0
  c->r[31]=0u+0x806C0000u; // 803D83B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803D83B8
  c->r[0]=R8(c->r[31]+0x00002618u); // 803D83BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D83C0
  if (!crb(c,2)) { goto L_803D83F4; } // 803D83C4
  c->r[30]=0u+0x806C0000u; // 803D83C8
  c->r[3]=c->r[30]+0x00002610u; // 803D83CC
  c->lr=0x803D83D4u; f_803D61E8(c); // 803D83D0
  c->r[4]=0u+0x803D0000u; // 803D83D4
  c->r[5]=0u+0x806C0000u; // 803D83D8
  c->r[3]=c->r[30]+0x00002610u; // 803D83DC
  c->r[4]=c->r[4]+0x000061F8u; // 803D83E0
  c->r[5]=c->r[5]+0x000025F8u; // 803D83E4
  c->lr=0x803D83ECu; f_802895A4(c); // 803D83E8
  c->r[0]=0u+0x00000001u; // 803D83EC
  W8(c->r[31]+0x00002618u,c->r[0]); // 803D83F0
L_803D83F4:;
  c->r[30]=0u+0x806C0000u; // 803D83F4
  c->r[0]=R8(c->r[30]+0x00002619u); // 803D83F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803D83FC
  if (!crb(c,2)) { goto L_803D8430; } // 803D8400
  c->r[31]=0u+0x806C0000u; // 803D8404
  c->r[3]=c->r[31]+0x00002614u; // 803D8408
  c->lr=0x803D8410u; f_803D65D0(c); // 803D840C
  c->r[4]=0u+0x803D0000u; // 803D8410
  c->r[5]=0u+0x806C0000u; // 803D8414
  c->r[3]=c->r[31]+0x00002614u; // 803D8418
  c->r[4]=c->r[4]+0x000065E0u; // 803D841C
  c->r[5]=c->r[5]+0x00002604u; // 803D8420
  c->lr=0x803D8428u; f_802895A4(c); // 803D8424
  c->r[0]=0u+0x00000001u; // 803D8428
  W8(c->r[30]+0x00002619u,c->r[0]); // 803D842C
L_803D8430:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803D8430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803D8434
  c->r[30]=R32(c->r[1]+0x00000008u); // 803D8438
  c->lr=c->r[0]; // 803D843C
  c->r[1]=c->r[1]+0x00000010u; // 803D8440
  return; // 803D8444
}

