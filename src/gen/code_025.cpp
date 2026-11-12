#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801E9D74
void f_801E9D74(Ctx* __restrict c) {
  trace_call(0x801E9D74u);
  return; // 801E9D74
}

// fn_801E9D78
void f_801E9D78(Ctx* __restrict c) {
  trace_call(0x801E9D78u);
  return; // 801E9D78
}

// fn_801E9D7C
void f_801E9D7C(Ctx* __restrict c) {
  trace_call(0x801E9D7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9D7C
  c->r[0]=c->lr; // 801E9D80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9D84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9D88
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9D8C
  c->r[30]=c->r[3]|c->r[3]; // 801E9D90
  c->r[0]=R32(c->r[3]+0x0000254Cu); // 801E9D94
  cmps(c,0,(int32_t)c->r[0],22); // 801E9D98
  if (crb(c,2)) { goto L_801E9DE0; } // 801E9D9C
  if (!crb(c,0)) { goto L_801E9DB0; } // 801E9DA0
  cmps(c,0,(int32_t)c->r[0],20); // 801E9DA4
  if (crb(c,2)) { goto L_801E9DBC; } // 801E9DA8
  goto L_801E9E7C; // 801E9DAC
L_801E9DB0:;
  cmps(c,0,(int32_t)c->r[0],24); // 801E9DB0
  if (!crb(c,0)) { goto L_801E9E7C; } // 801E9DB4
  goto L_801E9E30; // 801E9DB8
L_801E9DBC:;
  c->r[4]=0u+0x803E0000u; // 801E9DBC
  c->r[3]=0u+0x80580000u; // 801E9DC0
  c->r[4]=c->r[4]+0x000011D8u; // 801E9DC4
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9DC8
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801E9DCC
  c->r[5]=0u+0x00000000u; // 801E9DD0
  c->r[4]=c->r[4]+0x00000286u; // 801E9DD4
  c->lr=0x801E9DDCu; f_801AE4A4(c); // 801E9DD8
  goto L_801E9E7C; // 801E9DDC
L_801E9DE0:;
  c->r[31]=0u+0x803E0000u; // 801E9DE0
  c->r[3]=c->r[3]+0x000008ECu; // 801E9DE4
  c->r[31]=c->r[31]+0x000011D8u; // 801E9DE8
  c->r[4]=c->r[31]+0x000000A3u; // 801E9DEC
  c->lr=0x801E9DF4u; f_80075440(c); // 801E9DF0
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9DF4
  c->r[5]=c->r[3]|c->r[3]; // 801E9DF8
  c->r[3]=c->r[30]+0x00000C88u; // 801E9DFC
  c->r[4]=c->r[30]+0x000008ECu; // 801E9E00
  c->f[2]=c->f[1]; // 801E9E04
  c->r[6]=0u+0x00000000u; // 801E9E08
  c->r[7]=0u+0x00000000u; // 801E9E0C
  c->lr=0x801E9E14u; f_800BB0C8(c); // 801E9E10
  c->r[3]=0u+0x80580000u; // 801E9E14
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9E18
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801E9E1C
  c->r[4]=c->r[31]+0x00000292u; // 801E9E20
  c->r[5]=0u+0x00000000u; // 801E9E24
  c->lr=0x801E9E2Cu; f_801AE4A4(c); // 801E9E28
  goto L_801E9E7C; // 801E9E2C
L_801E9E30:;
  c->r[31]=0u+0x803E0000u; // 801E9E30
  c->r[3]=c->r[3]+0x000008ECu; // 801E9E34
  c->r[31]=c->r[31]+0x000011D8u; // 801E9E38
  c->r[4]=c->r[31]+0x000000A3u; // 801E9E3C
  c->lr=0x801E9E44u; f_80075440(c); // 801E9E40
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9E44
  c->r[5]=c->r[3]|c->r[3]; // 801E9E48
  c->r[3]=c->r[30]+0x00000C88u; // 801E9E4C
  c->r[4]=c->r[30]+0x000008ECu; // 801E9E50
  c->f[2]=c->f[1]; // 801E9E54
  c->r[6]=0u+0x00000000u; // 801E9E58
  c->r[7]=0u+0x00000000u; // 801E9E5C
  c->lr=0x801E9E64u; f_800BB0C8(c); // 801E9E60
  c->r[3]=0u+0x80580000u; // 801E9E64
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9E68
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801E9E6C
  c->r[4]=c->r[31]+0x0000029Eu; // 801E9E70
  c->r[5]=0u+0x00000000u; // 801E9E74
  c->lr=0x801E9E7Cu; f_801AE4A4(c); // 801E9E78
L_801E9E7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9E7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9E80
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9E84
  c->lr=c->r[0]; // 801E9E88
  c->r[1]=c->r[1]+0x00000010u; // 801E9E8C
  return; // 801E9E90
}

// fn_801E9E94
void f_801E9E94(Ctx* __restrict c) {
  trace_call(0x801E9E94u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9E94
  c->r[0]=c->lr; // 801E9E98
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E9E9C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801E9EA0
  c->r[31]=c->r[3]|c->r[3]; // 801E9EA4
  c->r[0]=R32(c->r[3]+0x0000254Cu); // 801E9EA8
  cmpu(c,0,c->r[0],0x00000017u); // 801E9EAC
  if (crb(c,1)) { goto L_801EA124; } // 801E9EB0
  c->r[4]=0u+0x80400000u; // 801E9EB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E9EB8
  c->r[4]=c->r[4]+0x00006310u; // 801E9EBC
  c->r[4]=R32(c->r[4]+c->r[0]); // 801E9EC0
  c->ctr=c->r[4]; // 801E9EC4
  if (true) { switch (c->ctr) { case 0x801E9ECCu: goto L_801E9ECC; case 0x801E9F18u: goto L_801E9F18; case 0x801E9F4Cu: goto L_801E9F4C; case 0x801E9F78u: goto L_801E9F78; case 0x801E9FA4u: goto L_801E9FA4; case 0x801EA0D8u: goto L_801EA0D8; case 0x801EA100u: goto L_801EA100; case 0x801EA124u: goto L_801EA124; default: break; } dispatch(c,c->ctr); return; } // 801E9EC8
L_801E9ECC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801E9ECC
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9ED0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E9ED4
  c->lr=0x801E9EDCu; f_8016498C(c); // 801E9ED8
  cmps(c,0,(int32_t)c->r[3],0); // 801E9EDC
  if (crb(c,2)) { goto L_801EA124; } // 801E9EE0
  c->r[0]=R32(c->r[31]+0x00002550u); // 801E9EE4
  cmps(c,0,(int32_t)c->r[0],2); // 801E9EE8
  if (crb(c,2)) { goto L_801E9F0C; } // 801E9EEC
  c->r[3]=0u+0x80580000u; // 801E9EF0
  c->r[4]=0u+0x803E0000u; // 801E9EF4
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9EF8
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801E9EFC
  c->r[4]=c->r[4]+0x000011D8u; // 801E9F00
  c->r[5]=0u+0x00000000u; // 801E9F04
  c->lr=0x801E9F0Cu; f_801AE4A4(c); // 801E9F08
L_801E9F0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E9F0C
  c->lr=0x801E9F14u; f_800AC7C4(c); // 801E9F10
  goto L_801EA124; // 801E9F14
L_801E9F18:;
  c->r[0]=R32(c->r[3]+0x00002550u); // 801E9F18
  cmps(c,0,(int32_t)c->r[0],0); // 801E9F1C
  if (!crb(c,2)) { goto L_801E9F2C; } // 801E9F20
  c->r[0]=0u+0x00000004u; // 801E9F24
  W32(c->r[3]+0x0000254Cu,c->r[0]); // 801E9F28
L_801E9F2C:;
  c->r[0]=R32(c->r[3]+0x00002550u); // 801E9F2C
  cmps(c,0,(int32_t)c->r[0],1); // 801E9F30
  if (!crb(c,2)) { goto L_801E9F40; } // 801E9F34
  c->r[0]=0u+0x0000000Eu; // 801E9F38
  W32(c->r[3]+0x0000254Cu,c->r[0]); // 801E9F3C
L_801E9F40:;
  c->r[3]=c->r[31]|c->r[31]; // 801E9F40
  c->lr=0x801E9F48u; f_800AC7C4(c); // 801E9F44
  goto L_801EA124; // 801E9F48
L_801E9F4C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801E9F4C
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9F50
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E9F54
  c->lr=0x801E9F5Cu; f_8016498C(c); // 801E9F58
  cmps(c,0,(int32_t)c->r[3],0); // 801E9F5C
  if (crb(c,2)) { goto L_801EA124; } // 801E9F60
  c->r[0]=0u+0x00000006u; // 801E9F64
  c->r[3]=c->r[31]|c->r[31]; // 801E9F68
  W32(c->r[31]+0x0000254Cu,c->r[0]); // 801E9F6C
  c->lr=0x801E9F74u; f_800AC7C4(c); // 801E9F70
  goto L_801EA124; // 801E9F74
L_801E9F78:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801E9F78
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9F7C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E9F80
  c->lr=0x801E9F88u; f_8016498C(c); // 801E9F84
  cmps(c,0,(int32_t)c->r[3],0); // 801E9F88
  if (crb(c,2)) { goto L_801EA124; } // 801E9F8C
  c->r[0]=0u+0x00000011u; // 801E9F90
  c->r[3]=c->r[31]|c->r[31]; // 801E9F94
  W32(c->r[31]+0x0000254Cu,c->r[0]); // 801E9F98
  c->lr=0x801E9FA0u; f_800AC7C4(c); // 801E9F9C
  goto L_801EA124; // 801E9FA0
L_801E9FA4:;
  c->r[3]=0u+0x80580000u; // 801E9FA4
  {uint32_t ea=c->r[2]+0xFFFFC0B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9FA8
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801E9FAC
  c->lr=0x801E9FB4u; f_801AE760(c); // 801E9FB0
  cmps(c,0,(int32_t)c->r[3],0); // 801E9FB4
  if (crb(c,2)) { goto L_801E9FE8; } // 801E9FB8
  {uint32_t ea=c->r[2]+0xFFFFBFD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9FBC
  c->r[3]=c->r[1]+0x0000002Cu; // 801E9FC0
  {uint32_t ea=c->r[2]+0xFFFFC0B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801E9FC4
  {uint32_t ea=c->r[2]+0xFFFFBFD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E9FC8
  c->lr=0x801E9FD0u; f_800521A0(c); // 801E9FCC
  c->r[4]=0u+0x803E0000u; // 801E9FD0
  c->r[5]=c->r[3]|c->r[3]; // 801E9FD4
  c->r[4]=c->r[4]+0x000011D8u; // 801E9FD8
  c->r[3]=R32(c->r[31]+0x000025B4u); // 801E9FDC
  c->r[4]=c->r[4]+0x0000018Eu; // 801E9FE0
  c->lr=0x801E9FE8u; f_801EA240(c); // 801E9FE4
L_801E9FE8:;
  c->r[3]=0u+0x80580000u; // 801E9FE8
  {uint32_t ea=c->r[2]+0xFFFFC0BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9FEC
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801E9FF0
  c->lr=0x801E9FF8u; f_801AE760(c); // 801E9FF4
  cmps(c,0,(int32_t)c->r[3],0); // 801E9FF8
  if (crb(c,2)) { goto L_801EA084; } // 801E9FFC
  {uint32_t ea=c->r[2]+0xFFFFBF80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA000
  c->r[3]=c->r[1]+0x00000020u; // 801EA004
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA008
  {uint32_t ea=c->r[2]+0xFFFFBF88u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA00C
  c->lr=0x801EA014u; f_800521A0(c); // 801EA010
  c->r[4]=c->r[3]|c->r[3]; // 801EA014
  c->r[3]=c->r[31]+0x000025C8u; // 801EA018
  c->lr=0x801EA020u; f_801AC10C(c); // 801EA01C
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA020
  c->r[3]=c->r[1]+0x00000014u; // 801EA024
  {uint32_t ea=c->r[2]+0xFFFFBF90u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA028
  c->f[3]=c->f[1]; // 801EA02C
  c->lr=0x801EA034u; f_800521A0(c); // 801EA030
  c->r[4]=c->r[3]|c->r[3]; // 801EA034
  c->r[3]=c->r[31]+0x000025C8u; // 801EA038
  c->lr=0x801EA040u; f_801AC114(c); // 801EA03C
  c->r[4]=0u+0x803E0000u; // 801EA040
  c->r[3]=c->r[31]+0x000008ECu; // 801EA044
  c->r[4]=c->r[4]+0x000011D8u; // 801EA048
  c->r[4]=c->r[4]+0x0000019Fu; // 801EA04C
  c->lr=0x801EA054u; f_80075440(c); // 801EA050
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA054
  c->r[5]=c->r[3]|c->r[3]; // 801EA058
  c->r[3]=c->r[31]+0x00000C88u; // 801EA05C
  c->r[4]=c->r[31]+0x000008ECu; // 801EA060
  c->f[2]=c->f[1]; // 801EA064
  c->r[6]=0u+0x00000000u; // 801EA068
  c->r[7]=0u+0x00000000u; // 801EA06C
  c->lr=0x801EA074u; f_800BB0C8(c); // 801EA070
  c->r[3]=R32(c->r[31]+0x000025C4u); // 801EA074
  c->r[4]=0u+0x00000000u; // 801EA078
  {uint32_t ea=c->r[31]+0x000025ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA07C
  c->lr=0x801EA084u; f_801EB768(c); // 801EA080
L_801EA084:;
  c->r[3]=0u+0x80580000u; // 801EA084
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801EA088
  c->lr=0x801EA090u; f_801AE730(c); // 801EA08C
  cmps(c,0,(int32_t)c->r[3],0); // 801EA090
  if (crb(c,2)) { goto L_801EA124; } // 801EA094
  {uint32_t ea=c->r[2]+0xFFFFBFD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA098
  c->r[3]=c->r[1]+0x00000008u; // 801EA09C
  {uint32_t ea=c->r[2]+0xFFFFBFD4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA0A0
  {uint32_t ea=c->r[2]+0xFFFFBFD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA0A4
  c->lr=0x801EA0ACu; f_800521A0(c); // 801EA0A8
  c->r[4]=0u+0x803E0000u; // 801EA0AC
  c->r[5]=c->r[3]|c->r[3]; // 801EA0B0
  c->r[4]=c->r[4]+0x000011D8u; // 801EA0B4
  c->r[3]=R32(c->r[31]+0x000025B4u); // 801EA0B8
  c->r[4]=c->r[4]+0x000000C3u; // 801EA0BC
  c->lr=0x801EA0C4u; f_801EA240(c); // 801EA0C0
  c->r[3]=c->r[31]|c->r[31]; // 801EA0C4
  c->lr=0x801EA0CCu; f_800AC3A4(c); // 801EA0C8
  c->r[0]=0u+0x00000015u; // 801EA0CC
  W32(c->r[31]+0x0000254Cu,c->r[0]); // 801EA0D0
  goto L_801EA124; // 801EA0D4
L_801EA0D8:;
  c->r[3]=0u+0x80580000u; // 801EA0D8
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801EA0DC
  c->lr=0x801EA0E4u; f_801AE730(c); // 801EA0E0
  cmps(c,0,(int32_t)c->r[3],0); // 801EA0E4
  if (crb(c,2)) { goto L_801EA124; } // 801EA0E8
  c->r[0]=R32(c->r[31]+0x00002590u); // 801EA0EC
  c->r[3]=c->r[31]|c->r[31]; // 801EA0F0
  W32(c->r[31]+0x0000254Cu,c->r[0]); // 801EA0F4
  c->lr=0x801EA0FCu; f_800AC7C4(c); // 801EA0F8
  goto L_801EA124; // 801EA0FC
L_801EA100:;
  c->r[3]=0u+0x80580000u; // 801EA100
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801EA104
  c->lr=0x801EA10Cu; f_801AE730(c); // 801EA108
  cmps(c,0,(int32_t)c->r[3],0); // 801EA10C
  if (crb(c,2)) { goto L_801EA124; } // 801EA110
  c->r[0]=R32(c->r[31]+0x00002590u); // 801EA114
  c->r[3]=c->r[31]|c->r[31]; // 801EA118
  W32(c->r[31]+0x0000254Cu,c->r[0]); // 801EA11C
  c->lr=0x801EA124u; f_800AC7C4(c); // 801EA120
L_801EA124:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EA124
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801EA128
  c->lr=c->r[0]; // 801EA12C
  c->r[1]=c->r[1]+0x00000040u; // 801EA130
  return; // 801EA134
}

// fn_801EA138
void f_801EA138(Ctx* __restrict c) {
  trace_call(0x801EA138u);
  return; // 801EA138
}

// fn_801EA13C
void f_801EA13C(Ctx* __restrict c) {
  trace_call(0x801EA13Cu);
  return; // 801EA13C
}

// fn_801EA140
void f_801EA140(Ctx* __restrict c) {
  trace_call(0x801EA140u);
  return; // 801EA140
}

// fn_801EA144
void f_801EA144(Ctx* __restrict c) {
  trace_call(0x801EA144u);
  return; // 801EA144
}

// fn_801EA148
void f_801EA148(Ctx* __restrict c) {
  trace_call(0x801EA148u);
  return; // 801EA148
}

// fn_801EA14C
void f_801EA14C(Ctx* __restrict c) {
  trace_call(0x801EA14Cu);
  return; // 801EA14C
}

// fn_801EA150
void f_801EA150(Ctx* __restrict c) {
  trace_call(0x801EA150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA150
  c->r[0]=c->lr; // 801EA154
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA158
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801EA15C
  c->lr=0x801EA164u; f_800F39EC(c); // 801EA160
  c->r[4]=0u+0xFFFFFFFFu; // 801EA164
  c->lr=0x801EA16Cu; f_800DB6F8(c); // 801EA168
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA16C
  c->lr=c->r[0]; // 801EA170
  c->r[1]=c->r[1]+0x00000010u; // 801EA174
  return; // 801EA178
}

// fn_801EA17C
void f_801EA17C(Ctx* __restrict c) {
  trace_call(0x801EA17Cu);
  return; // 801EA17C
}

// fn_801EA180
void f_801EA180(Ctx* __restrict c) {
  trace_call(0x801EA180u);
  return; // 801EA180
}

// fn_801EA184
void f_801EA184(Ctx* __restrict c) {
  trace_call(0x801EA184u);
  return; // 801EA184
}

// fn_801EA188
void f_801EA188(Ctx* __restrict c) {
  trace_call(0x801EA188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA188
  c->r[0]=c->lr; // 801EA18C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA194
  c->r[31]=c->r[3]|c->r[3]; // 801EA198
  c->lr=0x801EA1A0u; f_800D8A54(c); // 801EA19C
  c->r[4]=0u+0x80400000u; // 801EA1A0
  c->r[3]=c->r[31]+0x00001F18u; // 801EA1A4
  c->r[4]=c->r[4]+0x00007068u; // 801EA1A8
  c->r[0]=c->r[4]+0x00000040u; // 801EA1AC
  W32(c->r[31]+0x00000010u,c->r[4]); // 801EA1B0
  W32(c->r[31]+0x00000048u,c->r[0]); // 801EA1B4
  c->lr=0x801EA1BCu; f_801ABEE0(c); // 801EA1B8
  c->r[3]=c->r[31]|c->r[31]; // 801EA1BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA1C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA1C4
  c->lr=c->r[0]; // 801EA1C8
  c->r[1]=c->r[1]+0x00000010u; // 801EA1CC
  return; // 801EA1D0
}

// fn_801EA1D4
void f_801EA1D4(Ctx* __restrict c) {
  trace_call(0x801EA1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA1D4
  c->r[0]=c->lr; // 801EA1D8
  cmps(c,0,(int32_t)c->r[3],0); // 801EA1DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA1E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EA1E4
  c->r[30]=c->r[3]|c->r[3]; // 801EA1E8
  c->r[31]=c->r[4]|c->r[4]; // 801EA1EC
  if (crb(c,2)) { goto L_801EA210; } // 801EA1F0
  if (crb(c,2)) { goto L_801EA200; } // 801EA1F4
  c->r[4]=0u+0x00000000u; // 801EA1F8
  c->lr=0x801EA200u; f_80075DAC(c); // 801EA1FC
L_801EA200:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EA200
  if (!crb(c,1)) { goto L_801EA210; } // 801EA204
  c->r[3]=c->r[30]|c->r[30]; // 801EA208
  c->lr=0x801EA210u; f_802896EC(c); // 801EA20C
L_801EA210:;
  c->r[3]=c->r[30]|c->r[30]; // 801EA210
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EA214
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA218
  c->lr=c->r[0]; // 801EA21C
  c->r[1]=c->r[1]+0x00000010u; // 801EA220
  return; // 801EA224
}

// fn_801EA228
void f_801EA228(Ctx* __restrict c) {
  trace_call(0x801EA228u);
  c->r[4]=0u+0x00000018u; // 801EA228
  c->r[5]=0u+0x00000001u; // 801EA22C
  c->r[3]=c->r[3]+0x00000394u; // 801EA230
  f_800B16D0(c); return; // 801EA234
}

// fn_801EA238
void f_801EA238(Ctx* __restrict c) {
  trace_call(0x801EA238u);
  f_800B5DFC(c); return; // 801EA238
}

// fn_801EA23C
void f_801EA23C(Ctx* __restrict c) {
  trace_call(0x801EA23Cu);
  return; // 801EA23C
}

// fn_801EA240
void f_801EA240(Ctx* __restrict c) {
  trace_call(0x801EA240u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA240
  c->r[0]=c->lr; // 801EA244
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EA248
  c->r[11]=c->r[1]+0x00000030u; // 801EA24C
  c->lr=0x801EA254u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA250
  c->r[29]=c->r[3]|c->r[3]; // 801EA254
  c->r[30]=c->r[4]|c->r[4]; // 801EA258
  c->r[31]=c->r[5]|c->r[5]; // 801EA25C
  c->r[4]=0u+0x00000001u; // 801EA260
  c->r[3]=c->r[3]+0x000008D0u; // 801EA264
  c->lr=0x801EA26Cu; f_8002B91C(c); // 801EA268
  c->r[4]=c->r[30]|c->r[30]; // 801EA26C
  c->r[3]=c->r[29]+0x000008ECu; // 801EA270
  c->lr=0x801EA278u; f_80075440(c); // 801EA274
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA278
  c->r[5]=c->r[3]|c->r[3]; // 801EA27C
  c->r[3]=c->r[29]+0x00000C88u; // 801EA280
  c->r[4]=c->r[29]+0x000008ECu; // 801EA284
  c->f[2]=c->f[1]; // 801EA288
  c->r[6]=0u+0x00000000u; // 801EA28C
  c->r[7]=0u+0x00000000u; // 801EA290
  c->lr=0x801EA298u; f_800BB0C8(c); // 801EA294
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA298
  c->r[3]=c->r[1]+0x00000014u; // 801EA29C
  c->f[2]=c->f[1]; // 801EA2A0
  c->f[3]=c->f[1]; // 801EA2A4
  c->lr=0x801EA2ACu; f_800521A0(c); // 801EA2A8
  c->r[4]=c->r[3]|c->r[3]; // 801EA2AC
  c->r[3]=c->r[29]+0x00001F18u; // 801EA2B0
  c->lr=0x801EA2B8u; f_801AC114(c); // 801EA2B4
  c->r[4]=c->r[31]|c->r[31]; // 801EA2B8
  c->r[3]=c->r[1]+0x00000008u; // 801EA2BC
  c->lr=0x801EA2C4u; f_8003F484(c); // 801EA2C0
  c->r[4]=c->r[3]|c->r[3]; // 801EA2C4
  c->r[3]=c->r[29]+0x00001F18u; // 801EA2C8
  c->lr=0x801EA2D0u; f_801AC10C(c); // 801EA2CC
  c->r[3]=c->r[29]|c->r[29]; // 801EA2D0
  c->lr=0x801EA2D8u; f_800AC7C4(c); // 801EA2D4
  c->r[3]=c->r[29]+0x00001F18u; // 801EA2D8
  c->lr=0x801EA2E0u; f_801AC25C(c); // 801EA2DC
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801EA2E0
  c->r[3]=c->r[29]+0x000008D0u; // 801EA2E4
  c->r[4]=c->r[29]+0x00001F28u; // 801EA2E8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801EA2EC
  c->ctr=c->r[12]; // 801EA2F0
  if (true) { c->lr=0x801EA2F8u; dispatch(c,c->ctr); } // 801EA2F4
  c->r[11]=c->r[1]+0x00000030u; // 801EA2F8
  c->lr=0x801EA300u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA2FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EA300
  c->lr=c->r[0]; // 801EA304
  c->r[1]=c->r[1]+0x00000030u; // 801EA308
  return; // 801EA30C
}

// fn_801EA310
void f_801EA310(Ctx* __restrict c) {
  trace_call(0x801EA310u);
  return; // 801EA310
}

// fn_801EA314
void f_801EA314(Ctx* __restrict c) {
  trace_call(0x801EA314u);
  return; // 801EA314
}

// fn_801EA318
void f_801EA318(Ctx* __restrict c) {
  trace_call(0x801EA318u);
  return; // 801EA318
}

// fn_801EA31C
void f_801EA31C(Ctx* __restrict c) {
  trace_call(0x801EA31Cu);
  return; // 801EA31C
}

// fn_801EA320
void f_801EA320(Ctx* __restrict c) {
  trace_call(0x801EA320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA320
  c->r[0]=c->lr; // 801EA324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA32C
  c->r[31]=c->r[3]|c->r[3]; // 801EA330
  c->lr=0x801EA338u; f_800D8A54(c); // 801EA334
  c->r[4]=0u+0x80400000u; // 801EA338
  c->r[3]=c->r[31]|c->r[31]; // 801EA33C
  c->r[4]=c->r[4]+0x00006C2Cu; // 801EA340
  c->r[0]=c->r[4]+0x00000040u; // 801EA344
  W32(c->r[31]+0x00000010u,c->r[4]); // 801EA348
  W32(c->r[31]+0x00000048u,c->r[0]); // 801EA34C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA350
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA354
  c->lr=c->r[0]; // 801EA358
  c->r[1]=c->r[1]+0x00000010u; // 801EA35C
  return; // 801EA360
}

// fn_801EA364
void f_801EA364(Ctx* __restrict c) {
  trace_call(0x801EA364u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA364
  c->r[0]=c->lr; // 801EA368
  cmps(c,0,(int32_t)c->r[3],0); // 801EA36C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA370
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EA374
  c->r[30]=c->r[3]|c->r[3]; // 801EA378
  c->r[31]=c->r[4]|c->r[4]; // 801EA37C
  if (crb(c,2)) { goto L_801EA3A0; } // 801EA380
  if (crb(c,2)) { goto L_801EA390; } // 801EA384
  c->r[4]=0u+0x00000000u; // 801EA388
  c->lr=0x801EA390u; f_80075DAC(c); // 801EA38C
L_801EA390:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EA390
  if (!crb(c,1)) { goto L_801EA3A0; } // 801EA394
  c->r[3]=c->r[30]|c->r[30]; // 801EA398
  c->lr=0x801EA3A0u; f_802896EC(c); // 801EA39C
L_801EA3A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801EA3A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EA3A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA3A8
  c->lr=c->r[0]; // 801EA3AC
  c->r[1]=c->r[1]+0x00000010u; // 801EA3B0
  return; // 801EA3B4
}

// fn_801EA3B8
void f_801EA3B8(Ctx* __restrict c) {
  trace_call(0x801EA3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA3B8
  c->r[0]=c->lr; // 801EA3BC
  c->r[4]=0u+0x00000018u; // 801EA3C0
  c->r[5]=0u+0x00000001u; // 801EA3C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA3C8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EA3CC
  c->r[29]=c->r[3]|c->r[3]; // 801EA3D0
  c->r[3]=c->r[3]+0x00000394u; // 801EA3D4
  c->lr=0x801EA3DCu; f_800B16D0(c); // 801EA3D8
  c->r[3]=R32(c->r[29]+0x000008D8u); // 801EA3DC
  c->r[31]=0u+0x803E0000u; // 801EA3E0
  c->r[31]=c->r[31]+0x000011D8u; // 801EA3E4
  c->r[30]=0u+0x00000000u; // 801EA3E8
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801EA3EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EA3F0
  goto L_801EA430; // 801EA3F4
L_801EA3F8:;
  c->r[4]=c->r[30]|c->r[30]; // 801EA3F8
  c->r[3]=c->r[1]+0x0000000Cu; // 801EA3FC
  c->lr=0x801EA404u; f_80365C28(c); // 801EA400
  W32(c->r[1]+0x00000008u,c->r[3]); // 801EA404
  c->r[3]=c->r[1]+0x00000008u; // 801EA408
  c->lr=0x801EA410u; f_800B5D88(c); // 801EA40C
  c->r[4]=c->r[31]+0x000002AAu; // 801EA410
  c->lr=0x801EA418u; f_80293554(c); // 801EA414
  cmps(c,0,(int32_t)c->r[3],0); // 801EA418
  if (!crb(c,2)) { goto L_801EA42C; } // 801EA41C
  c->r[3]=c->r[1]+0x00000008u; // 801EA420
  c->lr=0x801EA428u; f_800772D8(c); // 801EA424
  W32(c->r[29]+0x00001F18u,c->r[3]); // 801EA428
L_801EA42C:;
  c->r[30]=c->r[30]+0x00000001u; // 801EA42C
L_801EA430:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801EA430
  c->lr=0x801EA438u; f_80365CD0(c); // 801EA434
  cmpu(c,0,c->r[30],c->r[3]); // 801EA438
  if (crb(c,0)) { IRQCHK(c); goto L_801EA3F8; } // 801EA43C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EA440
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA444
  c->lr=c->r[0]; // 801EA448
  c->r[1]=c->r[1]+0x00000020u; // 801EA44C
  return; // 801EA450
}

// fn_801EA454
void f_801EA454(Ctx* __restrict c) {
  trace_call(0x801EA454u);
  f_800B5DFC(c); return; // 801EA454
}

// fn_801EA458
void f_801EA458(Ctx* __restrict c) {
  trace_call(0x801EA458u);
  return; // 801EA458
}

// fn_801EA45C
void f_801EA45C(Ctx* __restrict c) {
  trace_call(0x801EA45Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA45C
  c->r[0]=c->lr; // 801EA460
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA468
  c->r[31]=c->r[3]|c->r[3]; // 801EA46C
  c->r[3]=c->r[3]+0x000008ECu; // 801EA470
  c->lr=0x801EA478u; f_80075440(c); // 801EA474
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA478
  c->r[5]=c->r[3]|c->r[3]; // 801EA47C
  c->r[3]=c->r[31]+0x00000C88u; // 801EA480
  c->r[4]=c->r[31]+0x000008ECu; // 801EA484
  c->f[2]=c->f[1]; // 801EA488
  c->r[6]=0u+0x00000000u; // 801EA48C
  c->r[7]=0u+0x00000000u; // 801EA490
  c->lr=0x801EA498u; f_800BB0C8(c); // 801EA494
  c->r[3]=c->r[31]|c->r[31]; // 801EA498
  c->lr=0x801EA4A0u; f_800AC7C4(c); // 801EA49C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA4A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA4A4
  c->lr=c->r[0]; // 801EA4A8
  c->r[1]=c->r[1]+0x00000010u; // 801EA4AC
  return; // 801EA4B0
}

// fn_801EA4B4
void f_801EA4B4(Ctx* __restrict c) {
  trace_call(0x801EA4B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA4B4
  c->r[0]=c->lr; // 801EA4B8
  c->r[4]=0u+0x00000001u; // 801EA4BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EA4C0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801EA4C4
  c->r[31]=c->r[3]|c->r[3]; // 801EA4C8
  c->r[3]=c->r[3]+0x000008D0u; // 801EA4CC
  c->lr=0x801EA4D4u; f_8002B91C(c); // 801EA4D0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EA4D4
  c->r[4]=c->r[31]+0x000008D0u; // 801EA4D8
  c->r[3]=c->r[1]+0x00000008u; // 801EA4DC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EA4E0
  c->ctr=c->r[12]; // 801EA4E4
  if (true) { c->lr=0x801EA4ECu; dispatch(c,c->ctr); } // 801EA4E8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EA4EC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801EA4F0
  c->lr=c->r[0]; // 801EA4F4
  c->r[1]=c->r[1]+0x00000040u; // 801EA4F8
  return; // 801EA4FC
}

// fn_801EA500
void f_801EA500(Ctx* __restrict c) {
  trace_call(0x801EA500u);
  return; // 801EA500
}

// fn_801EA504
void f_801EA504(Ctx* __restrict c) {
  trace_call(0x801EA504u);
  return; // 801EA504
}

// fn_801EA508
void f_801EA508(Ctx* __restrict c) {
  trace_call(0x801EA508u);
  return; // 801EA508
}

// fn_801EA50C
void f_801EA50C(Ctx* __restrict c) {
  trace_call(0x801EA50Cu);
  return; // 801EA50C
}

// fn_801EA510
void f_801EA510(Ctx* __restrict c) {
  trace_call(0x801EA510u);
  return; // 801EA510
}

// fn_801EA514
void f_801EA514(Ctx* __restrict c) {
  trace_call(0x801EA514u);
  return; // 801EA514
}

// fn_801EA518
void f_801EA518(Ctx* __restrict c) {
  trace_call(0x801EA518u);
  return; // 801EA518
}

// fn_801EA51C
void f_801EA51C(Ctx* __restrict c) {
  trace_call(0x801EA51Cu);
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA51C
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[0]);} // 801EA520
  return; // 801EA524
}

// fn_801EA528
void f_801EA528(Ctx* __restrict c) {
  trace_call(0x801EA528u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA528
  c->r[0]=c->lr; // 801EA52C
  c->r[5]=0u+0x804D0000u; // 801EA530
  {uint32_t ea=c->r[2]+0xFFFFC0C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA534
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801EA538
  c->r[5]=c->r[5]+0x00003318u; // 801EA53C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801EA540
  c->r[31]=c->r[3]|c->r[3]; // 801EA544
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA548
  {uint32_t ea=c->r[5]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA54C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 801EA550
  fcmp(c,0,c->f[1],c->f[0]); // 801EA554
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[1]);} // 801EA558
  if (!crb(c,1)) { goto L_801EA63C; } // 801EA55C
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA560
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[0]);} // 801EA564
  c->lr=0x801EA56Cu; f_80051FF4(c); // 801EA568
  c->r[5]=0u+0x803E0000u; // 801EA56C
  c->r[4]=c->r[3]|c->r[3]; // 801EA570
  c->r[5]=c->r[5]+0x000011D8u; // 801EA574
  c->r[3]=c->r[1]+0x00000050u; // 801EA578
  c->r[5]=c->r[5]+0x000002B6u; // 801EA57C
  c->r[6]=0u+0x00000001u; // 801EA580
  c->lr=0x801EA588u; f_8013DB40(c); // 801EA584
  c->r[3]=c->r[1]+0x00000050u; // 801EA588
  c->lr=0x801EA590u; f_80146F08(c); // 801EA58C
  cmps(c,0,(int32_t)c->r[3],0); // 801EA590
  if (crb(c,2)) { goto L_801EA63C; } // 801EA594
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EA598
  c->r[4]=c->r[31]+0x000008D0u; // 801EA59C
  c->r[3]=c->r[1]+0x00000020u; // 801EA5A0
  c->r[5]=R32(c->r[31]+0x00001F18u); // 801EA5A4
  c->r[12]=R32(c->r[12]+0x00000034u); // 801EA5A8
  c->ctr=c->r[12]; // 801EA5AC
  if (true) { c->lr=0x801EA5B4u; dispatch(c,c->ctr); } // 801EA5B0
  c->r[0]=0u+0x00000006u; // 801EA5B4
  c->r[5]=c->r[1]+0x0000004Cu; // 801EA5B8
  c->r[4]=c->r[1]+0x0000001Cu; // 801EA5BC
  c->ctr=c->r[0]; // 801EA5C0
L_801EA5C4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801EA5C4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801EA5C8
  W32(c->r[5]+0x00000004u,c->r[3]); // 801EA5CC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801EA5D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EA5C4; } // 801EA5D4
  c->r[12]=R32(c->r[1]+0x00000080u); // 801EA5D8
  c->r[3]=c->r[1]+0x00000050u; // 801EA5DC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EA5E0
  c->ctr=c->r[12]; // 801EA5E4
  if (true) { c->lr=0x801EA5ECu; dispatch(c,c->ctr); } // 801EA5E8
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA5EC
  c->r[3]=c->r[1]+0x00000008u; // 801EA5F0
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA5F4
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA5F8
  c->lr=0x801EA600u; f_800521A0(c); // 801EA5FC
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA600
  c->r[4]=0u+0x803E0000u; // 801EA604
  c->r[5]=R32(c->r[1]+0x00000008u); // 801EA608
  c->r[4]=c->r[4]+0x000011D8u; // 801EA60C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801EA610
  c->f[2]=c->f[1]; // 801EA614
  c->r[0]=R32(c->r[1]+0x00000010u); // 801EA618
  c->r[3]=c->r[31]+0x00000800u; // 801EA61C
  W32(c->r[1]+0x00000014u,c->r[5]); // 801EA620
  c->r[4]=c->r[4]+0x000002BDu; // 801EA624
  c->r[5]=c->r[1]+0x00000014u; // 801EA628
  W32(c->r[1]+0x00000018u,c->r[6]); // 801EA62C
  c->r[6]=0u+0x00000001u; // 801EA630
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801EA634
  c->lr=0x801EA63Cu; f_800C1BA0(c); // 801EA638
L_801EA63C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EA63C
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA640
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EA644
  c->lr=0x801EA64Cu; f_8016498C(c); // 801EA648
  cmps(c,0,(int32_t)c->r[3],0); // 801EA64C
  if (crb(c,2)) { goto L_801EA65C; } // 801EA650
  c->r[3]=c->r[31]|c->r[31]; // 801EA654
  c->lr=0x801EA65Cu; f_801A6F34(c); // 801EA658
L_801EA65C:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801EA65C
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801EA660
  c->lr=c->r[0]; // 801EA664
  c->r[1]=c->r[1]+0x000000A0u; // 801EA668
  return; // 801EA66C
}

// fn_801EA670
void f_801EA670(Ctx* __restrict c) {
  trace_call(0x801EA670u);
  return; // 801EA670
}

// fn_801EA674
void f_801EA674(Ctx* __restrict c) {
  trace_call(0x801EA674u);
  return; // 801EA674
}

// fn_801EA678
void f_801EA678(Ctx* __restrict c) {
  trace_call(0x801EA678u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA678
  c->r[0]=c->lr; // 801EA67C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA680
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA684
  c->r[31]=c->r[3]|c->r[3]; // 801EA688
  c->lr=0x801EA690u; f_800D8A54(c); // 801EA68C
  c->r[4]=0u+0x80400000u; // 801EA690
  c->r[3]=c->r[31]|c->r[31]; // 801EA694
  c->r[4]=c->r[4]+0x000067E4u; // 801EA698
  c->r[0]=c->r[4]+0x00000040u; // 801EA69C
  W32(c->r[31]+0x00000010u,c->r[4]); // 801EA6A0
  W32(c->r[31]+0x00000048u,c->r[0]); // 801EA6A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA6A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA6AC
  c->lr=c->r[0]; // 801EA6B0
  c->r[1]=c->r[1]+0x00000010u; // 801EA6B4
  return; // 801EA6B8
}

// fn_801EA6BC
void f_801EA6BC(Ctx* __restrict c) {
  trace_call(0x801EA6BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA6BC
  c->r[0]=c->lr; // 801EA6C0
  cmps(c,0,(int32_t)c->r[3],0); // 801EA6C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA6C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EA6CC
  c->r[30]=c->r[3]|c->r[3]; // 801EA6D0
  c->r[31]=c->r[4]|c->r[4]; // 801EA6D4
  if (crb(c,2)) { goto L_801EA6F8; } // 801EA6D8
  if (crb(c,2)) { goto L_801EA6E8; } // 801EA6DC
  c->r[4]=0u+0x00000000u; // 801EA6E0
  c->lr=0x801EA6E8u; f_80075DAC(c); // 801EA6E4
L_801EA6E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EA6E8
  if (!crb(c,1)) { goto L_801EA6F8; } // 801EA6EC
  c->r[3]=c->r[30]|c->r[30]; // 801EA6F0
  c->lr=0x801EA6F8u; f_802896EC(c); // 801EA6F4
L_801EA6F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801EA6F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EA6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA700
  c->lr=c->r[0]; // 801EA704
  c->r[1]=c->r[1]+0x00000010u; // 801EA708
  return; // 801EA70C
}

// fn_801EA710
void f_801EA710(Ctx* __restrict c) {
  trace_call(0x801EA710u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA710
  c->r[0]=c->lr; // 801EA714
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA718
  c->r[11]=c->r[1]+0x00000020u; // 801EA71C
  c->lr=0x801EA724u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA720
  c->r[29]=c->r[3]|c->r[3]; // 801EA724
  c->r[4]=0u+0x00000018u; // 801EA728
  c->r[5]=0u+0x00000001u; // 801EA72C
  c->r[3]=c->r[3]+0x00000394u; // 801EA730
  c->lr=0x801EA738u; f_800B16D0(c); // 801EA734
  {uint32_t ea=c->r[2]+0xFFFFC048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA738
  c->r[3]=0u+0xFFFFFFFFu; // 801EA73C
  c->r[0]=0u+0x00000000u; // 801EA740
  W32(c->r[29]+0x00001F18u,c->r[3]); // 801EA744
  c->r[3]=c->r[29]+0x000008D0u; // 801EA748
  c->r[4]=0u+0x00000000u; // 801EA74C
  W8(c->r[29]+0x00001F44u,c->r[0]); // 801EA750
  {uint32_t ea=c->r[29]+0x000003A4u; WF32(ea,c->f[0]);} // 801EA754
  c->lr=0x801EA75Cu; f_8002B91C(c); // 801EA758
  c->r[4]=R32(c->r[29]+0x000008D8u); // 801EA75C
  c->r[3]=0u+0x803E0000u; // 801EA760
  c->r[30]=0u+0x00000000u; // 801EA764
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801EA768
  c->r[31]=c->r[3]+0x000011D8u; // 801EA76C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EA770
  goto L_801EA8AC; // 801EA774
L_801EA778:;
  c->r[4]=c->r[30]|c->r[30]; // 801EA778
  c->r[3]=c->r[1]+0x0000000Cu; // 801EA77C
  c->lr=0x801EA784u; f_80365C28(c); // 801EA780
  W32(c->r[1]+0x00000008u,c->r[3]); // 801EA784
  c->r[3]=c->r[1]+0x00000008u; // 801EA788
  c->lr=0x801EA790u; f_800B5D88(c); // 801EA78C
  c->r[4]=c->r[31]+0x000002C4u; // 801EA790
  c->lr=0x801EA798u; f_80293554(c); // 801EA794
  cmps(c,0,(int32_t)c->r[3],0); // 801EA798
  if (!crb(c,2)) { goto L_801EA7AC; } // 801EA79C
  c->r[3]=c->r[1]+0x00000008u; // 801EA7A0
  c->lr=0x801EA7A8u; f_800772D8(c); // 801EA7A4
  W32(c->r[29]+0x00001F24u,c->r[3]); // 801EA7A8
L_801EA7AC:;
  c->r[3]=c->r[1]+0x00000008u; // 801EA7AC
  c->lr=0x801EA7B4u; f_800B5D88(c); // 801EA7B0
  c->r[4]=c->r[31]+0x000002C6u; // 801EA7B4
  c->lr=0x801EA7BCu; f_80293554(c); // 801EA7B8
  cmps(c,0,(int32_t)c->r[3],0); // 801EA7BC
  if (!crb(c,2)) { goto L_801EA7D0; } // 801EA7C0
  c->r[3]=c->r[1]+0x00000008u; // 801EA7C4
  c->lr=0x801EA7CCu; f_800772D8(c); // 801EA7C8
  W32(c->r[29]+0x00001F28u,c->r[3]); // 801EA7CC
L_801EA7D0:;
  c->r[3]=c->r[1]+0x00000008u; // 801EA7D0
  c->lr=0x801EA7D8u; f_800B5D88(c); // 801EA7D4
  c->r[4]=c->r[31]+0x000002C8u; // 801EA7D8
  c->lr=0x801EA7E0u; f_80293554(c); // 801EA7DC
  cmps(c,0,(int32_t)c->r[3],0); // 801EA7E0
  if (!crb(c,2)) { goto L_801EA7F4; } // 801EA7E4
  c->r[3]=c->r[1]+0x00000008u; // 801EA7E8
  c->lr=0x801EA7F0u; f_800772D8(c); // 801EA7EC
  W32(c->r[29]+0x00001F2Cu,c->r[3]); // 801EA7F0
L_801EA7F4:;
  c->r[3]=c->r[1]+0x00000008u; // 801EA7F4
  c->lr=0x801EA7FCu; f_800B5D88(c); // 801EA7F8
  c->r[4]=c->r[31]+0x000002CAu; // 801EA7FC
  c->lr=0x801EA804u; f_80293554(c); // 801EA800
  cmps(c,0,(int32_t)c->r[3],0); // 801EA804
  if (!crb(c,2)) { goto L_801EA818; } // 801EA808
  c->r[3]=c->r[1]+0x00000008u; // 801EA80C
  c->lr=0x801EA814u; f_800772D8(c); // 801EA810
  W32(c->r[29]+0x00001F30u,c->r[3]); // 801EA814
L_801EA818:;
  c->r[3]=c->r[1]+0x00000008u; // 801EA818
  c->lr=0x801EA820u; f_800B5D88(c); // 801EA81C
  c->r[4]=c->r[31]+0x000002CCu; // 801EA820
  c->lr=0x801EA828u; f_80293554(c); // 801EA824
  cmps(c,0,(int32_t)c->r[3],0); // 801EA828
  if (!crb(c,2)) { goto L_801EA83C; } // 801EA82C
  c->r[3]=c->r[1]+0x00000008u; // 801EA830
  c->lr=0x801EA838u; f_800772D8(c); // 801EA834
  W32(c->r[29]+0x00001F34u,c->r[3]); // 801EA838
L_801EA83C:;
  c->r[3]=c->r[1]+0x00000008u; // 801EA83C
  c->lr=0x801EA844u; f_800B5D88(c); // 801EA840
  c->r[4]=c->r[31]+0x000002CEu; // 801EA844
  c->lr=0x801EA84Cu; f_80293554(c); // 801EA848
  cmps(c,0,(int32_t)c->r[3],0); // 801EA84C
  if (!crb(c,2)) { goto L_801EA860; } // 801EA850
  c->r[3]=c->r[1]+0x00000008u; // 801EA854
  c->lr=0x801EA85Cu; f_800772D8(c); // 801EA858
  W32(c->r[29]+0x00001F38u,c->r[3]); // 801EA85C
L_801EA860:;
  c->r[3]=c->r[1]+0x00000008u; // 801EA860
  c->lr=0x801EA868u; f_800B5D88(c); // 801EA864
  c->r[4]=c->r[31]+0x000002D0u; // 801EA868
  c->lr=0x801EA870u; f_80293554(c); // 801EA86C
  cmps(c,0,(int32_t)c->r[3],0); // 801EA870
  if (!crb(c,2)) { goto L_801EA884; } // 801EA874
  c->r[3]=c->r[1]+0x00000008u; // 801EA878
  c->lr=0x801EA880u; f_800772D8(c); // 801EA87C
  W32(c->r[29]+0x00001F3Cu,c->r[3]); // 801EA880
L_801EA884:;
  c->r[3]=c->r[1]+0x00000008u; // 801EA884
  c->lr=0x801EA88Cu; f_800B5D88(c); // 801EA888
  c->r[4]=c->r[31]+0x000002D2u; // 801EA88C
  c->lr=0x801EA894u; f_80293554(c); // 801EA890
  cmps(c,0,(int32_t)c->r[3],0); // 801EA894
  if (!crb(c,2)) { goto L_801EA8A8; } // 801EA898
  c->r[3]=c->r[1]+0x00000008u; // 801EA89C
  c->lr=0x801EA8A4u; f_800772D8(c); // 801EA8A0
  W32(c->r[29]+0x00001F40u,c->r[3]); // 801EA8A4
L_801EA8A8:;
  c->r[30]=c->r[30]+0x00000001u; // 801EA8A8
L_801EA8AC:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801EA8AC
  c->lr=0x801EA8B4u; f_80365CD0(c); // 801EA8B0
  cmpu(c,0,c->r[30],c->r[3]); // 801EA8B4
  if (crb(c,0)) { IRQCHK(c); goto L_801EA778; } // 801EA8B8
  c->r[3]=0u+0x80400000u; // 801EA8BC
  c->r[0]=c->r[13]+0xFFFF89A0u; // 801EA8C0
  c->r[3]=c->r[3]+0x00006370u; // 801EA8C4
  W32(c->r[29]+0x000004F8u,c->r[0]); // 801EA8C8
  c->r[11]=c->r[1]+0x00000020u; // 801EA8CC
  W32(c->r[29]+0x000004E4u,c->r[3]); // 801EA8D0
  W32(c->r[29]+0x000004ECu,c->r[3]); // 801EA8D4
  W32(c->r[29]+0x000004F4u,c->r[3]); // 801EA8D8
  c->lr=0x801EA8E0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA8DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA8E0
  c->lr=c->r[0]; // 801EA8E4
  c->r[1]=c->r[1]+0x00000020u; // 801EA8E8
  return; // 801EA8EC
}

// fn_801EA8F0
void f_801EA8F0(Ctx* __restrict c) {
  trace_call(0x801EA8F0u);
  f_800B5DFC(c); return; // 801EA8F0
}

// fn_801EA8F4
void f_801EA8F4(Ctx* __restrict c) {
  trace_call(0x801EA8F4u);
  return; // 801EA8F4
}

// fn_801EA8F8
void f_801EA8F8(Ctx* __restrict c) {
  trace_call(0x801EA8F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA8F8
  c->r[0]=c->lr; // 801EA8FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA900
  c->r[11]=c->r[1]+0x00000020u; // 801EA904
  c->lr=0x801EA90Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA908
  c->r[31]=c->r[5]|c->r[5]; // 801EA90C
  c->r[29]=c->r[3]|c->r[3]; // 801EA910
  c->r[12]=R32(c->r[31]+0x00000000u); // 801EA914
  c->r[3]=c->r[31]|c->r[31]; // 801EA918
  c->r[30]=c->r[4]|c->r[4]; // 801EA91C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EA920
  c->ctr=c->r[12]; // 801EA924
  if (true) { c->lr=0x801EA92Cu; dispatch(c,c->ctr); } // 801EA928
  cmps(c,0,(int32_t)c->r[3],1025); // 801EA92C
  if (!crb(c,0)) { goto L_801EA940; } // 801EA930
  cmps(c,0,(int32_t)c->r[3],3); // 801EA934
  if (crb(c,2)) { goto L_801EA94C; } // 801EA938
  goto L_801EA9E4; // 801EA93C
L_801EA940:;
  cmps(c,0,(int32_t)c->r[3],1029); // 801EA940
  if (!crb(c,0)) { goto L_801EA9E4; } // 801EA944
  goto L_801EA968; // 801EA948
L_801EA94C:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA94C
  c->lr=0x801EA954u; f_800ACA58(c); // 801EA950
  c->r[3]=c->r[29]|c->r[29]; // 801EA954
  c->r[4]=c->r[30]|c->r[30]; // 801EA958
  c->r[5]=c->r[31]|c->r[31]; // 801EA95C
  c->lr=0x801EA964u; f_800B5B1C(c); // 801EA960
  goto L_801EA9F4; // 801EA964
L_801EA968:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA968
  c->r[4]=0u+0x00000002u; // 801EA96C
  c->lr=0x801EA974u; f_800760EC(c); // 801EA970
  cmps(c,0,(int32_t)c->r[3],0); // 801EA974
  if (!crb(c,2)) { goto L_801EA9F4; } // 801EA978
  c->r[12]=R32(c->r[29]+0x00000010u); // 801EA97C
  c->r[3]=c->r[29]|c->r[29]; // 801EA980
  c->r[4]=c->r[31]|c->r[31]; // 801EA984
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA988
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801EA98C
  c->ctr=c->r[12]; // 801EA990
  if (true) { c->lr=0x801EA998u; dispatch(c,c->ctr); } // 801EA994
  {uint32_t ea=c->r[29]+0x000003A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA998
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA99C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801EA9A0
  fcmp(c,0,c->f[1],c->f[0]); // 801EA9A4
  {uint32_t ea=c->r[29]+0x000003A4u; WF32(ea,c->f[1]);} // 801EA9A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EA9AC
  if (!crb(c,2)) { goto L_801EA9F4; } // 801EA9B0
  c->r[3]=R32(c->r[29]+0x00000974u); // 801EA9B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EA9B8
  c->lr=0x801EA9C0u; f_800752CC(c); // 801EA9BC
  {uint32_t ea=c->r[2]+0xFFFFC0C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA9C0
  fcmp(c,0,c->f[1],c->f[0]); // 801EA9C4
  if (!crb(c,0)) { goto L_801EA9D8; } // 801EA9C8
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA9CC
  {uint32_t ea=c->r[29]+0x000003A4u; WF32(ea,c->f[0]);} // 801EA9D0
  goto L_801EA9F4; // 801EA9D4
L_801EA9D8:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA9D8
  c->lr=0x801EA9E0u; f_800ACB54(c); // 801EA9DC
  goto L_801EA9F4; // 801EA9E0
L_801EA9E4:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA9E4
  c->r[4]=c->r[30]|c->r[30]; // 801EA9E8
  c->r[5]=c->r[31]|c->r[31]; // 801EA9EC
  c->lr=0x801EA9F4u; f_800B5B1C(c); // 801EA9F0
L_801EA9F4:;
  c->r[11]=c->r[1]+0x00000020u; // 801EA9F4
  c->lr=0x801EA9FCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA9F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EA9FC
  c->lr=c->r[0]; // 801EAA00
  c->r[1]=c->r[1]+0x00000020u; // 801EAA04
  return; // 801EAA08
}

// fn_801EAA0C
void f_801EAA0C(Ctx* __restrict c) {
  trace_call(0x801EAA0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAA0C
  c->r[0]=c->lr; // 801EAA10
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EAA14
  c->r[4]=R32(c->r[3]+0x00001F18u); // 801EAA18
  c->r[0]=c->r[4]+0x00000001u; // 801EAA1C
  cmps(c,0,(int32_t)c->r[0],7); // 801EAA20
  W32(c->r[3]+0x00001F18u,c->r[0]); // 801EAA24
  if (!crb(c,1)) { goto L_801EAA34; } // 801EAA28
  c->r[0]=0u+0x00000000u; // 801EAA2C
  W32(c->r[3]+0x00001F18u,c->r[0]); // 801EAA30
L_801EAA34:;
  c->r[4]=0u+0x803E0000u; // 801EAA34
  c->r[0]=0u+0x00000004u; // 801EAA38
  c->r[4]=c->r[4]+0x00001198u; // 801EAA3C
  c->r[6]=c->r[1]+0x00000024u; // 801EAA40
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801EAA44
  c->ctr=c->r[0]; // 801EAA48
L_801EAA4C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801EAA4C
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801EAA50
  W32(c->r[6]+0x00000004u,c->r[4]); // 801EAA54
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801EAA58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAA4C; } // 801EAA5C
  c->r[4]=0u+0x803E0000u; // 801EAA60
  c->r[0]=0u+0x00000004u; // 801EAA64
  c->r[4]=c->r[4]+0x000011B8u; // 801EAA68
  c->r[6]=c->r[1]+0x00000004u; // 801EAA6C
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801EAA70
  c->ctr=c->r[0]; // 801EAA74
L_801EAA78:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801EAA78
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801EAA7C
  W32(c->r[6]+0x00000004u,c->r[4]); // 801EAA80
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801EAA84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAA78; } // 801EAA88
  c->r[6]=R32(c->r[3]+0x00001F18u); // 801EAA8C
  c->r[5]=c->r[1]+0x00000008u; // 801EAA90
  c->r[4]=c->r[1]+0x00000028u; // 801EAA94
  c->r[0]=0u+0x00000001u; // 801EAA98
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801EAA9C
  {uint32_t ea=c->r[5]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 801EAAA0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801EAAA4
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[0]);} // 801EAAA8
  {uint32_t ea=c->r[5]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 801EAAAC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801EAAB0
  {uint32_t ea=c->r[3]+0x000003A8u; WF32(ea,c->f[0]);} // 801EAAB4
  {uint32_t ea=c->r[4]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 801EAAB8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801EAABC
  W8(c->r[3]+0x00001F44u,c->r[0]); // 801EAAC0
  {uint32_t ea=c->r[3]+0x00001F20u; WF32(ea,c->f[0]);} // 801EAAC4
  c->lr=0x801EAACCu; f_800AC3A4(c); // 801EAAC8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801EAACC
  c->lr=c->r[0]; // 801EAAD0
  c->r[1]=c->r[1]+0x00000050u; // 801EAAD4
  return; // 801EAAD8
}

// fn_801EAADC
void f_801EAADC(Ctx* __restrict c) {
  trace_call(0x801EAADCu);
  c->r[4]=0u+0x00000000u; // 801EAADC
  c->r[3]=c->r[3]+0x000008D0u; // 801EAAE0
  f_8002B91C(c); return; // 801EAAE4
}

// fn_801EAAE8
void f_801EAAE8(Ctx* __restrict c) {
  trace_call(0x801EAAE8u);
  return; // 801EAAE8
}

// fn_801EAAEC
void f_801EAAEC(Ctx* __restrict c) {
  trace_call(0x801EAAECu);
  return; // 801EAAEC
}

// fn_801EAAF0
void f_801EAAF0(Ctx* __restrict c) {
  trace_call(0x801EAAF0u);
  return; // 801EAAF0
}

// fn_801EAAF4
void f_801EAAF4(Ctx* __restrict c) {
  trace_call(0x801EAAF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAAF4
  c->r[0]=c->lr; // 801EAAF8
  c->r[4]=0u+0x00000001u; // 801EAAFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EAB00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EAB04
  c->r[31]=c->r[3]|c->r[3]; // 801EAB08
  c->r[3]=c->r[3]+0x000008D0u; // 801EAB0C
  c->lr=0x801EAB14u; f_8002B91C(c); // 801EAB10
  c->r[3]=R32(c->r[31]+0x00000028u); // 801EAB14
  c->r[4]=0u+0x00000001u; // 801EAB18
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EAB1C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EAB20
  c->ctr=c->r[12]; // 801EAB24
  if (true) { c->lr=0x801EAB2Cu; dispatch(c,c->ctr); } // 801EAB28
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EAB2C
  cmps(c,0,(int32_t)c->r[0],0); // 801EAB30
  if (!crb(c,2)) { goto L_801EAB6C; } // 801EAB34
  c->r[4]=0u+0x803E0000u; // 801EAB38
  c->r[3]=c->r[31]+0x000008ECu; // 801EAB3C
  c->r[4]=c->r[4]+0x000011D8u; // 801EAB40
  c->r[4]=c->r[4]+0x000002D4u; // 801EAB44
  c->lr=0x801EAB4Cu; f_80075440(c); // 801EAB48
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAB4C
  c->r[5]=c->r[3]|c->r[3]; // 801EAB50
  c->r[3]=c->r[31]+0x00000C88u; // 801EAB54
  c->r[4]=c->r[31]+0x000008ECu; // 801EAB58
  c->f[2]=c->f[1]; // 801EAB5C
  c->r[6]=0u+0x00000000u; // 801EAB60
  c->r[7]=0u+0x00000000u; // 801EAB64
  c->lr=0x801EAB6Cu; f_800BB0C8(c); // 801EAB68
L_801EAB6C:;
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EAB6C
  cmps(c,0,(int32_t)c->r[0],1); // 801EAB70
  if (!crb(c,2)) { goto L_801EABAC; } // 801EAB74
  c->r[4]=0u+0x803E0000u; // 801EAB78
  c->r[3]=c->r[31]+0x000008ECu; // 801EAB7C
  c->r[4]=c->r[4]+0x000011D8u; // 801EAB80
  c->r[4]=c->r[4]+0x000002DDu; // 801EAB84
  c->lr=0x801EAB8Cu; f_80075440(c); // 801EAB88
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAB8C
  c->r[5]=c->r[3]|c->r[3]; // 801EAB90
  c->r[3]=c->r[31]+0x00000C88u; // 801EAB94
  c->r[4]=c->r[31]+0x000008ECu; // 801EAB98
  c->f[2]=c->f[1]; // 801EAB9C
  c->r[6]=0u+0x00000000u; // 801EABA0
  c->r[7]=0u+0x00000000u; // 801EABA4
  c->lr=0x801EABACu; f_800BB0C8(c); // 801EABA8
L_801EABAC:;
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EABAC
  cmps(c,0,(int32_t)c->r[0],2); // 801EABB0
  if (!crb(c,2)) { goto L_801EABEC; } // 801EABB4
  c->r[4]=0u+0x803E0000u; // 801EABB8
  c->r[3]=c->r[31]+0x000008ECu; // 801EABBC
  c->r[4]=c->r[4]+0x000011D8u; // 801EABC0
  c->r[4]=c->r[4]+0x000002E6u; // 801EABC4
  c->lr=0x801EABCCu; f_80075440(c); // 801EABC8
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EABCC
  c->r[5]=c->r[3]|c->r[3]; // 801EABD0
  c->r[3]=c->r[31]+0x00000C88u; // 801EABD4
  c->r[4]=c->r[31]+0x000008ECu; // 801EABD8
  c->f[2]=c->f[1]; // 801EABDC
  c->r[6]=0u+0x00000000u; // 801EABE0
  c->r[7]=0u+0x00000000u; // 801EABE4
  c->lr=0x801EABECu; f_800BB0C8(c); // 801EABE8
L_801EABEC:;
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EABEC
  cmps(c,0,(int32_t)c->r[0],3); // 801EABF0
  if (!crb(c,2)) { goto L_801EAC2C; } // 801EABF4
  c->r[4]=0u+0x803E0000u; // 801EABF8
  c->r[3]=c->r[31]+0x000008ECu; // 801EABFC
  c->r[4]=c->r[4]+0x000011D8u; // 801EAC00
  c->r[4]=c->r[4]+0x000002EFu; // 801EAC04
  c->lr=0x801EAC0Cu; f_80075440(c); // 801EAC08
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAC0C
  c->r[5]=c->r[3]|c->r[3]; // 801EAC10
  c->r[3]=c->r[31]+0x00000C88u; // 801EAC14
  c->r[4]=c->r[31]+0x000008ECu; // 801EAC18
  c->f[2]=c->f[1]; // 801EAC1C
  c->r[6]=0u+0x00000000u; // 801EAC20
  c->r[7]=0u+0x00000000u; // 801EAC24
  c->lr=0x801EAC2Cu; f_800BB0C8(c); // 801EAC28
L_801EAC2C:;
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EAC2C
  cmps(c,0,(int32_t)c->r[0],4); // 801EAC30
  if (!crb(c,2)) { goto L_801EAC6C; } // 801EAC34
  c->r[4]=0u+0x803E0000u; // 801EAC38
  c->r[3]=c->r[31]+0x000008ECu; // 801EAC3C
  c->r[4]=c->r[4]+0x000011D8u; // 801EAC40
  c->r[4]=c->r[4]+0x000002F8u; // 801EAC44
  c->lr=0x801EAC4Cu; f_80075440(c); // 801EAC48
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAC4C
  c->r[5]=c->r[3]|c->r[3]; // 801EAC50
  c->r[3]=c->r[31]+0x00000C88u; // 801EAC54
  c->r[4]=c->r[31]+0x000008ECu; // 801EAC58
  c->f[2]=c->f[1]; // 801EAC5C
  c->r[6]=0u+0x00000000u; // 801EAC60
  c->r[7]=0u+0x00000000u; // 801EAC64
  c->lr=0x801EAC6Cu; f_800BB0C8(c); // 801EAC68
L_801EAC6C:;
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EAC6C
  cmps(c,0,(int32_t)c->r[0],5); // 801EAC70
  if (!crb(c,2)) { goto L_801EACAC; } // 801EAC74
  c->r[4]=0u+0x803E0000u; // 801EAC78
  c->r[3]=c->r[31]+0x000008ECu; // 801EAC7C
  c->r[4]=c->r[4]+0x000011D8u; // 801EAC80
  c->r[4]=c->r[4]+0x00000301u; // 801EAC84
  c->lr=0x801EAC8Cu; f_80075440(c); // 801EAC88
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAC8C
  c->r[5]=c->r[3]|c->r[3]; // 801EAC90
  c->r[3]=c->r[31]+0x00000C88u; // 801EAC94
  c->r[4]=c->r[31]+0x000008ECu; // 801EAC98
  c->f[2]=c->f[1]; // 801EAC9C
  c->r[6]=0u+0x00000000u; // 801EACA0
  c->r[7]=0u+0x00000000u; // 801EACA4
  c->lr=0x801EACACu; f_800BB0C8(c); // 801EACA8
L_801EACAC:;
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EACAC
  cmps(c,0,(int32_t)c->r[0],6); // 801EACB0
  if (!crb(c,2)) { goto L_801EACEC; } // 801EACB4
  c->r[4]=0u+0x803E0000u; // 801EACB8
  c->r[3]=c->r[31]+0x000008ECu; // 801EACBC
  c->r[4]=c->r[4]+0x000011D8u; // 801EACC0
  c->r[4]=c->r[4]+0x0000030Au; // 801EACC4
  c->lr=0x801EACCCu; f_80075440(c); // 801EACC8
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EACCC
  c->r[5]=c->r[3]|c->r[3]; // 801EACD0
  c->r[3]=c->r[31]+0x00000C88u; // 801EACD4
  c->r[4]=c->r[31]+0x000008ECu; // 801EACD8
  c->f[2]=c->f[1]; // 801EACDC
  c->r[6]=0u+0x00000000u; // 801EACE0
  c->r[7]=0u+0x00000000u; // 801EACE4
  c->lr=0x801EACECu; f_800BB0C8(c); // 801EACE8
L_801EACEC:;
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EACEC
  cmps(c,0,(int32_t)c->r[0],7); // 801EACF0
  if (!crb(c,2)) { goto L_801EAD2C; } // 801EACF4
  c->r[4]=0u+0x803E0000u; // 801EACF8
  c->r[3]=c->r[31]+0x000008ECu; // 801EACFC
  c->r[4]=c->r[4]+0x000011D8u; // 801EAD00
  c->r[4]=c->r[4]+0x00000313u; // 801EAD04
  c->lr=0x801EAD0Cu; f_80075440(c); // 801EAD08
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAD0C
  c->r[5]=c->r[3]|c->r[3]; // 801EAD10
  c->r[3]=c->r[31]+0x00000C88u; // 801EAD14
  c->r[4]=c->r[31]+0x000008ECu; // 801EAD18
  c->f[2]=c->f[1]; // 801EAD1C
  c->r[6]=0u+0x00000000u; // 801EAD20
  c->r[7]=0u+0x00000000u; // 801EAD24
  c->lr=0x801EAD2Cu; f_800BB0C8(c); // 801EAD28
L_801EAD2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EAD2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EAD30
  c->lr=c->r[0]; // 801EAD34
  c->r[1]=c->r[1]+0x00000010u; // 801EAD38
  return; // 801EAD3C
}

// fn_801EAD40
void f_801EAD40(Ctx* __restrict c) {
  trace_call(0x801EAD40u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAD40
  c->r[0]=c->lr; // 801EAD44
  {uint32_t ea=c->r[2]+0xFFFFC0C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAD48
  W32(c->r[1]+0x00000084u,c->r[0]); // 801EAD4C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801EAD50
  c->r[31]=c->r[3]|c->r[3]; // 801EAD54
  c->r[4]=R32(c->r[3]+0x00000974u); // 801EAD58
  c->r[3]=R32(c->r[4]+0x00000000u); // 801EAD5C
  c->lr=0x801EAD64u; f_800C57C4(c); // 801EAD60
  cmps(c,0,(int32_t)c->r[3],0); // 801EAD64
  if (crb(c,2)) { goto L_801EAE2C; } // 801EAD68
  {uint32_t ea=c->r[31]+0x00001F20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAD6C
  c->r[3]=c->r[1]+0x00000054u; // 801EAD70
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EAD74
  c->r[4]=0u+0x00000000u; // 801EAD78
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EAD7C
  c->lr=0x801EAD84u; f_8010541C(c); // 801EAD80
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 801EAD84
  c->r[3]=c->r[1]+0x00000010u; // 801EAD88
  c->r[4]=c->r[1]+0x00000054u; // 801EAD8C
  c->r[5]=R32(c->r[6]+0x00000000u); // 801EAD90
  c->r[0]=R32(c->r[6]+0x00000004u); // 801EAD94
  W32(c->r[1]+0x00000010u,c->r[5]); // 801EAD98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EAD9C
  c->lr=0x801EADA4u; f_800BCDAC(c); // 801EADA0
  {uint32_t ea=c->r[31]+0x00001F20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EADA4
  c->r[3]=c->r[1]+0x00000030u; // 801EADA8
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EADAC
  c->r[4]=0u+0x00000000u; // 801EADB0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EADB4
  c->lr=0x801EADBCu; f_8010541C(c); // 801EADB8
  c->r[4]=c->r[13]+0xFFFF94B8u; // 801EADBC
  c->r[3]=c->r[1]+0x00000008u; // 801EADC0
  c->r[6]=R32(c->r[4]+0x00000004u); // 801EADC4
  c->r[4]=c->r[1]+0x00000030u; // 801EADC8
  c->r[5]=R32(c->r[6]+0x00000000u); // 801EADCC
  c->r[0]=R32(c->r[6]+0x00000004u); // 801EADD0
  W32(c->r[1]+0x00000008u,c->r[5]); // 801EADD4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EADD8
  c->lr=0x801EADE0u; f_800BCDAC(c); // 801EADDC
  c->r[4]=0u+0x80580000u; // 801EADE0
  c->r[3]=c->r[1]+0x00000018u; // 801EADE4
  c->r[4]=c->r[4]+0xFFFFB7ACu; // 801EADE8
  c->lr=0x801EADF0u; f_801AE7A4(c); // 801EADEC
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EADF0
  c->r[4]=0u+0x803E0000u; // 801EADF4
  c->r[5]=R32(c->r[1]+0x00000018u); // 801EADF8
  c->r[4]=c->r[4]+0x000011D8u; // 801EADFC
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 801EAE00
  c->f[2]=c->f[1]; // 801EAE04
  c->r[0]=R32(c->r[1]+0x00000020u); // 801EAE08
  c->r[3]=c->r[31]+0x00000800u; // 801EAE0C
  W32(c->r[1]+0x00000024u,c->r[5]); // 801EAE10
  c->r[4]=c->r[4]+0x0000031Cu; // 801EAE14
  c->r[5]=c->r[1]+0x00000024u; // 801EAE18
  W32(c->r[1]+0x00000028u,c->r[6]); // 801EAE1C
  c->r[6]=0u+0x00000001u; // 801EAE20
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801EAE24
  c->lr=0x801EAE2Cu; f_800C1BA0(c); // 801EAE28
L_801EAE2C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EAE2C
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAE30
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EAE34
  c->lr=0x801EAE3Cu; f_8016498C(c); // 801EAE38
  cmps(c,0,(int32_t)c->r[3],0); // 801EAE3C
  if (crb(c,2)) { goto L_801EAE58; } // 801EAE40
  c->r[3]=c->r[31]+0x000008D0u; // 801EAE44
  c->r[4]=0u+0x00000000u; // 801EAE48
  c->lr=0x801EAE50u; f_8002B91C(c); // 801EAE4C
  c->r[3]=c->r[31]|c->r[31]; // 801EAE50
  c->lr=0x801EAE58u; f_800ACA58(c); // 801EAE54
L_801EAE58:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801EAE58
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801EAE5C
  c->lr=c->r[0]; // 801EAE60
  c->r[1]=c->r[1]+0x00000080u; // 801EAE64
  return; // 801EAE68
}

// fn_801EAE6C
void f_801EAE6C(Ctx* __restrict c) {
  trace_call(0x801EAE6Cu);
  return; // 801EAE6C
}

// fn_801EAE70
void f_801EAE70(Ctx* __restrict c) {
  trace_call(0x801EAE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAE70
  c->r[0]=c->lr; // 801EAE74
  c->r[4]=0u+0x00000000u; // 801EAE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EAE7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EAE80
  c->r[31]=c->r[3]|c->r[3]; // 801EAE84
  c->r[3]=R32(c->r[3]+0x00000028u); // 801EAE88
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EAE8C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EAE90
  c->ctr=c->r[12]; // 801EAE94
  if (true) { c->lr=0x801EAE9Cu; dispatch(c,c->ctr); } // 801EAE98
  c->r[3]=c->r[31]+0x000008D0u; // 801EAE9C
  c->r[4]=0u+0x00000000u; // 801EAEA0
  c->lr=0x801EAEA8u; f_8002B91C(c); // 801EAEA4
  c->r[0]=0u+0x00000000u; // 801EAEA8
  W8(c->r[31]+0x00001F44u,c->r[0]); // 801EAEAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EAEB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EAEB4
  c->lr=c->r[0]; // 801EAEB8
  c->r[1]=c->r[1]+0x00000010u; // 801EAEBC
  return; // 801EAEC0
}

// fn_801EAEC4
void f_801EAEC4(Ctx* __restrict c) {
  trace_call(0x801EAEC4u);
  {uint32_t ea=c->r[1]+0xFFFFFD80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAEC4
  c->r[0]=c->lr; // 801EAEC8
  c->r[4]=0u+0x00000000u; // 801EAECC
  W32(c->r[1]+0x00000284u,c->r[0]); // 801EAED0
  W32(c->r[1]+0x0000027Cu,c->r[31]); // 801EAED4
  c->r[31]=c->r[3]|c->r[3]; // 801EAED8
  W32(c->r[1]+0x00000278u,c->r[30]); // 801EAEDC
  c->r[3]=R32(c->r[3]+0x00000028u); // 801EAEE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EAEE4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EAEE8
  c->ctr=c->r[12]; // 801EAEEC
  if (true) { c->lr=0x801EAEF4u; dispatch(c,c->ctr); } // 801EAEF0
  c->r[3]=c->r[31]+0x000008D0u; // 801EAEF4
  c->r[4]=0u+0x00000000u; // 801EAEF8
  c->lr=0x801EAF00u; f_8002B91C(c); // 801EAEFC
  c->r[0]=0u+0x00000000u; // 801EAF00
  W8(c->r[31]+0x00001F44u,c->r[0]); // 801EAF04
  c->lr=0x801EAF0Cu; f_80051FF4(c); // 801EAF08
  c->r[5]=0u+0x803E0000u; // 801EAF0C
  c->r[4]=c->r[3]|c->r[3]; // 801EAF10
  c->r[5]=c->r[5]+0x000011D8u; // 801EAF14
  c->r[3]=c->r[1]+0x00000230u; // 801EAF18
  c->r[5]=c->r[5]+0x00000323u; // 801EAF1C
  c->r[6]=0u+0x00000001u; // 801EAF20
  c->lr=0x801EAF28u; f_8013DB40(c); // 801EAF24
  c->r[3]=c->r[1]+0x00000230u; // 801EAF28
  c->lr=0x801EAF30u; f_80146F08(c); // 801EAF2C
  cmps(c,0,(int32_t)c->r[3],0); // 801EAF30
  if (crb(c,2)) { goto L_801EAFE8; } // 801EAF34
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EAF38
  c->r[4]=c->r[31]+0x000008D0u; // 801EAF3C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EAF40
  c->r[3]=c->r[1]+0x00000140u; // 801EAF44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EAF48
  c->r[5]=c->r[31]+c->r[0]; // 801EAF4C
  c->r[12]=R32(c->r[12]+0x00000034u); // 801EAF50
  c->r[5]=R32(c->r[5]+0x00001F24u); // 801EAF54
  c->ctr=c->r[12]; // 801EAF58
  if (true) { c->lr=0x801EAF60u; dispatch(c,c->ctr); } // 801EAF5C
  c->r[0]=0u+0x00000006u; // 801EAF60
  c->r[5]=c->r[1]+0x0000022Cu; // 801EAF64
  c->r[4]=c->r[1]+0x0000013Cu; // 801EAF68
  c->ctr=c->r[0]; // 801EAF6C
L_801EAF70:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801EAF70
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801EAF74
  W32(c->r[5]+0x00000004u,c->r[3]); // 801EAF78
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801EAF7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EAF70; } // 801EAF80
  c->r[12]=R32(c->r[1]+0x00000260u); // 801EAF84
  c->r[3]=c->r[1]+0x00000230u; // 801EAF88
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EAF8C
  c->ctr=c->r[12]; // 801EAF90
  if (true) { c->lr=0x801EAF98u; dispatch(c,c->ctr); } // 801EAF94
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAF98
  c->r[3]=c->r[1]+0x0000008Cu; // 801EAF9C
  {uint32_t ea=c->r[1]+0x0000024Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EAFA0
  {uint32_t ea=c->r[1]+0x0000025Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EAFA4
  c->lr=0x801EAFACu; f_800521A0(c); // 801EAFA8
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAFAC
  c->r[4]=0u+0x803E0000u; // 801EAFB0
  c->r[5]=R32(c->r[1]+0x0000008Cu); // 801EAFB4
  c->r[4]=c->r[4]+0x000011D8u; // 801EAFB8
  c->r[6]=R32(c->r[1]+0x00000090u); // 801EAFBC
  c->f[2]=c->f[1]; // 801EAFC0
  c->r[0]=R32(c->r[1]+0x00000094u); // 801EAFC4
  c->r[3]=c->r[31]+0x00000800u; // 801EAFC8
  W32(c->r[1]+0x00000098u,c->r[5]); // 801EAFCC
  c->r[4]=c->r[4]+0x0000032Du; // 801EAFD0
  c->r[5]=c->r[1]+0x00000098u; // 801EAFD4
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 801EAFD8
  c->r[6]=0u+0x00000001u; // 801EAFDC
  W32(c->r[1]+0x000000A0u,c->r[0]); // 801EAFE0
  c->lr=0x801EAFE8u; f_800C1BA0(c); // 801EAFE4
L_801EAFE8:;
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EAFE8
  cmps(c,0,(int32_t)c->r[0],2); // 801EAFEC
  if (crb(c,2)) { goto L_801EAFFC; } // 801EAFF0
  cmps(c,0,(int32_t)c->r[0],7); // 801EAFF4
  if (!crb(c,2)) { goto L_801EB25C; } // 801EAFF8
L_801EAFFC:;
  c->lr=0x801EB000u; f_80051FF4(c); // 801EAFFC
  c->r[30]=0u+0x803E0000u; // 801EB000
  c->r[4]=c->r[3]|c->r[3]; // 801EB004
  c->r[30]=c->r[30]+0x000011D8u; // 801EB008
  c->r[3]=c->r[1]+0x000001E8u; // 801EB00C
  c->r[5]=c->r[30]+0x00000323u; // 801EB010
  c->r[6]=0u+0x00000001u; // 801EB014
  c->lr=0x801EB01Cu; f_8013DB40(c); // 801EB018
  c->r[3]=c->r[1]+0x00000230u; // 801EB01C
  c->r[4]=c->r[1]+0x000001E8u; // 801EB020
  c->lr=0x801EB028u; f_800CC5EC(c); // 801EB024
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EB028
  c->r[4]=c->r[31]+0x000008D0u; // 801EB02C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EB030
  c->r[3]=c->r[1]+0x00000170u; // 801EB034
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EB038
  c->r[5]=c->r[31]+c->r[0]; // 801EB03C
  c->r[12]=R32(c->r[12]+0x00000034u); // 801EB040
  c->r[5]=R32(c->r[5]+0x00001F24u); // 801EB044
  c->ctr=c->r[12]; // 801EB048
  if (true) { c->lr=0x801EB050u; dispatch(c,c->ctr); } // 801EB04C
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB050
  c->r[3]=c->r[1]+0x00000068u; // 801EB054
  {uint32_t ea=c->r[1]+0x00000188u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB058
  {uint32_t ea=c->r[1]+0x00000198u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB05C
  c->lr=0x801EB064u; f_800521A0(c); // 801EB060
  {uint32_t ea=c->r[2]+0xFFFFC0CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB064
  c->r[3]=c->r[1]+0x00000074u; // 801EB068
  c->r[4]=c->r[1]+0x00000068u; // 801EB06C
  c->lr=0x801EB074u; f_800FACB4(c); // 801EB070
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EB074
  c->r[4]=c->r[31]+0x000008D0u; // 801EB078
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EB07C
  c->r[3]=c->r[1]+0x00000110u; // 801EB080
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EB084
  c->r[5]=c->r[31]+c->r[0]; // 801EB088
  c->r[12]=R32(c->r[12]+0x00000034u); // 801EB08C
  c->r[5]=R32(c->r[5]+0x00001F24u); // 801EB090
  c->ctr=c->r[12]; // 801EB094
  if (true) { c->lr=0x801EB09Cu; dispatch(c,c->ctr); } // 801EB098
  c->r[3]=c->r[1]+0x00000080u; // 801EB09C
  c->r[4]=c->r[1]+0x00000110u; // 801EB0A0
  c->lr=0x801EB0A8u; f_80032FD8(c); // 801EB0A4
  c->r[3]=c->r[1]+0x000000A4u; // 801EB0A8
  c->r[4]=c->r[1]+0x00000080u; // 801EB0AC
  c->r[5]=c->r[1]+0x00000074u; // 801EB0B0
  c->lr=0x801EB0B8u; f_801011E8(c); // 801EB0B4
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB0B8
  c->r[3]=c->r[1]+0x00000230u; // 801EB0BC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB0C0
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB0C4
  c->lr=0x801EB0CCu; f_80146A14(c); // 801EB0C8
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB0CC
  c->r[3]=c->r[1]+0x00000050u; // 801EB0D0
  {uint32_t ea=c->r[1]+0x0000024Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB0D4
  {uint32_t ea=c->r[1]+0x0000025Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB0D8
  c->lr=0x801EB0E0u; f_800521A0(c); // 801EB0DC
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB0E0
  c->r[3]=c->r[31]+0x00000800u; // 801EB0E4
  c->r[6]=R32(c->r[1]+0x00000050u); // 801EB0E8
  c->r[4]=c->r[30]+0x00000333u; // 801EB0EC
  c->r[7]=R32(c->r[1]+0x00000054u); // 801EB0F0
  c->f[2]=c->f[1]; // 801EB0F4
  c->r[0]=R32(c->r[1]+0x00000058u); // 801EB0F8
  c->r[5]=c->r[1]+0x0000005Cu; // 801EB0FC
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 801EB100
  c->r[6]=0u+0x00000001u; // 801EB104
  W32(c->r[1]+0x00000060u,c->r[7]); // 801EB108
  W32(c->r[1]+0x00000064u,c->r[0]); // 801EB10C
  c->lr=0x801EB114u; f_800C1BA0(c); // 801EB110
  c->lr=0x801EB118u; f_80051FF4(c); // 801EB114
  c->r[4]=c->r[3]|c->r[3]; // 801EB118
  c->r[3]=c->r[1]+0x000001A0u; // 801EB11C
  c->r[5]=c->r[30]+0x00000323u; // 801EB120
  c->r[6]=0u+0x00000001u; // 801EB124
  c->lr=0x801EB12Cu; f_8013DB40(c); // 801EB128
  c->r[3]=c->r[1]+0x00000230u; // 801EB12C
  c->r[4]=c->r[1]+0x000001A0u; // 801EB130
  c->lr=0x801EB138u; f_800CC5EC(c); // 801EB134
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EB138
  c->r[4]=c->r[31]+0x000008D0u; // 801EB13C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EB140
  c->r[3]=c->r[1]+0x000000E0u; // 801EB144
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EB148
  c->r[5]=c->r[31]+c->r[0]; // 801EB14C
  c->r[12]=R32(c->r[12]+0x00000034u); // 801EB150
  c->r[5]=R32(c->r[5]+0x00001F24u); // 801EB154
  c->ctr=c->r[12]; // 801EB158
  if (true) { c->lr=0x801EB160u; dispatch(c,c->ctr); } // 801EB15C
  c->r[0]=0u+0x00000006u; // 801EB160
  c->r[5]=c->r[1]+0x0000016Cu; // 801EB164
  c->r[4]=c->r[1]+0x000000DCu; // 801EB168
  c->ctr=c->r[0]; // 801EB16C
L_801EB170:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801EB170
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801EB174
  W32(c->r[5]+0x00000004u,c->r[3]); // 801EB178
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801EB17C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB170; } // 801EB180
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB184
  c->r[3]=c->r[1]+0x00000020u; // 801EB188
  {uint32_t ea=c->r[1]+0x00000188u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB18C
  {uint32_t ea=c->r[1]+0x00000198u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB190
  c->lr=0x801EB198u; f_800521A0(c); // 801EB194
  {uint32_t ea=c->r[2]+0xFFFFC0D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB198
  c->r[3]=c->r[1]+0x0000002Cu; // 801EB19C
  c->r[4]=c->r[1]+0x00000020u; // 801EB1A0
  c->lr=0x801EB1A8u; f_800FACB4(c); // 801EB1A4
  c->r[0]=R32(c->r[31]+0x00001F18u); // 801EB1A8
  c->r[4]=c->r[31]+0x000008D0u; // 801EB1AC
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EB1B0
  c->r[3]=c->r[1]+0x000000B0u; // 801EB1B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EB1B8
  c->r[5]=c->r[31]+c->r[0]; // 801EB1BC
  c->r[12]=R32(c->r[12]+0x00000034u); // 801EB1C0
  c->r[5]=R32(c->r[5]+0x00001F24u); // 801EB1C4
  c->ctr=c->r[12]; // 801EB1C8
  if (true) { c->lr=0x801EB1D0u; dispatch(c,c->ctr); } // 801EB1CC
  c->r[3]=c->r[1]+0x00000038u; // 801EB1D0
  c->r[4]=c->r[1]+0x000000B0u; // 801EB1D4
  c->lr=0x801EB1DCu; f_80032FD8(c); // 801EB1D8
  c->r[3]=c->r[1]+0x00000044u; // 801EB1DC
  c->r[4]=c->r[1]+0x00000038u; // 801EB1E0
  c->r[5]=c->r[1]+0x0000002Cu; // 801EB1E4
  c->lr=0x801EB1ECu; f_801011E8(c); // 801EB1E8
  c->r[3]=c->r[1]+0x000000A4u; // 801EB1EC
  c->r[4]=c->r[1]+0x00000044u; // 801EB1F0
  c->lr=0x801EB1F8u; f_8003F468(c); // 801EB1F4
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB1F8
  c->r[3]=c->r[1]+0x00000230u; // 801EB1FC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB200
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB204
  c->lr=0x801EB20Cu; f_80146A14(c); // 801EB208
  {uint32_t ea=c->r[1]+0x0000023Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB20C
  c->r[3]=c->r[1]+0x00000008u; // 801EB210
  {uint32_t ea=c->r[1]+0x0000024Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB214
  {uint32_t ea=c->r[1]+0x0000025Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB218
  c->lr=0x801EB220u; f_800521A0(c); // 801EB21C
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB220
  c->r[4]=0u+0x803E0000u; // 801EB224
  c->r[5]=R32(c->r[1]+0x00000008u); // 801EB228
  c->r[4]=c->r[4]+0x000011D8u; // 801EB22C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801EB230
  c->f[2]=c->f[1]; // 801EB234
  c->r[0]=R32(c->r[1]+0x00000010u); // 801EB238
  c->r[3]=c->r[31]+0x00000800u; // 801EB23C
  W32(c->r[1]+0x00000014u,c->r[5]); // 801EB240
  c->r[4]=c->r[4]+0x00000333u; // 801EB244
  c->r[5]=c->r[1]+0x00000014u; // 801EB248
  W32(c->r[1]+0x00000018u,c->r[6]); // 801EB24C
  c->r[6]=0u+0x00000001u; // 801EB250
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801EB254
  c->lr=0x801EB25Cu; f_800C1BA0(c); // 801EB258
L_801EB25C:;
  c->r[0]=R32(c->r[1]+0x00000284u); // 801EB25C
  c->r[31]=R32(c->r[1]+0x0000027Cu); // 801EB260
  c->r[30]=R32(c->r[1]+0x00000278u); // 801EB264
  c->lr=c->r[0]; // 801EB268
  c->r[1]=c->r[1]+0x00000280u; // 801EB26C
  return; // 801EB270
}

// fn_801EB274
void f_801EB274(Ctx* __restrict c) {
  trace_call(0x801EB274u);
  f_800ACA58(c); return; // 801EB274
}

// fn_801EB278
void f_801EB278(Ctx* __restrict c) {
  trace_call(0x801EB278u);
  return; // 801EB278
}

// fn_801EB27C
void f_801EB27C(Ctx* __restrict c) {
  trace_call(0x801EB27Cu);
  return; // 801EB27C
}

// fn_801EB280
void f_801EB280(Ctx* __restrict c) {
  trace_call(0x801EB280u);
  c->r[6]=c->r[3]|c->r[3]; // 801EB280
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801EB284
  c->r[5]=0u+0x00000001u; // 801EB288
  W32(c->r[3]+0x00000008u,c->r[3]); // 801EB28C
  c->r[3]=c->r[4]+0x000008D0u; // 801EB290
  c->r[4]=c->r[6]+0x00000008u; // 801EB294
  f_800315E4(c); return; // 801EB298
}

// fn_801EB29C
void f_801EB29C(Ctx* __restrict c) {
  trace_call(0x801EB29Cu);
  return; // 801EB29C
}

// fn_801EB2A0
void f_801EB2A0(Ctx* __restrict c) {
  trace_call(0x801EB2A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB2A0
  c->r[0]=c->lr; // 801EB2A4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801EB2A8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 801EB2AC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 801EB2B0
  c->r[11]=c->r[1]+0x000000B0u; // 801EB2B4
  c->lr=0x801EB2BCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB2B8
  c->r[25]=c->r[3]|c->r[3]; // 801EB2BC
  c->r[26]=c->r[4]|c->r[4]; // 801EB2C0
  c->r[3]=c->r[1]+0x00000048u; // 801EB2C4
  c->lr=0x801EB2CCu; f_80137AAC(c); // 801EB2C8
  c->r[29]=0u+0x803E0000u; // 801EB2CC
  {uint32_t ea=c->r[2]+0xFFFFBF98u; c->f[31]=c->ps1[31]=RF32(ea);} // 801EB2D0
  c->r[29]=c->r[29]+0x000011D8u; // 801EB2D4
  c->r[28]=0u+0x00000000u; // 801EB2D8
  c->r[31]=0u+0x00000000u; // 801EB2DC
  c->r[27]=0u+0x00000000u; // 801EB2E0
  c->r[30]=0u+0x804B0000u; // 801EB2E4
  goto L_801EB398; // 801EB2E8
L_801EB2EC:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801EB2EC
  c->r[3]=c->r[26]|c->r[26]; // 801EB2F0
  c->r[4]=c->r[27]|c->r[27]; // 801EB2F4
  c->r[12]=R32(c->r[12]+0x00000028u); // 801EB2F8
  c->ctr=c->r[12]; // 801EB2FC
  if (true) { c->lr=0x801EB304u; dispatch(c,c->ctr); } // 801EB300
  c->r[4]=c->r[29]+0x00000339u; // 801EB304
  c->r[5]=0u+0x00000004u; // 801EB308
  c->lr=0x801EB310u; f_80293670(c); // 801EB30C
  cmps(c,0,(int32_t)c->r[3],0); // 801EB310
  if (!crb(c,2)) { goto L_801EB394; } // 801EB314
  cmps(c,0,(int32_t)c->r[28],5); // 801EB318
  if (!crb(c,0)) { goto L_801EB394; } // 801EB31C
  c->r[0]=R32(c->r[25]+0x0000000Cu); // 801EB320
  c->r[3]=c->r[1]+0x00000008u; // 801EB324
  c->r[5]=0u+0x00000030u; // 801EB328
  c->r[4]=c->r[0]+c->r[31]; // 801EB32C
  c->r[4]=c->r[4]+0x00001F54u; // 801EB330
  c->lr=0x801EB338u; f_80235294(c); // 801EB334
  c->r[3]=c->r[1]+0x00000008u; // 801EB338
  c->r[4]=c->r[30]+0x00003988u; // 801EB33C
  c->lr=0x801EB344u; f_80138B1C(c); // 801EB340
  c->r[3]=c->r[1]+0x00000008u; // 801EB344
  c->lr=0x801EB34Cu; f_80137F78(c); // 801EB348
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB34C
  c->r[3]=c->r[26]|c->r[26]; // 801EB350
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB354
  c->r[4]=c->r[27]|c->r[27]; // 801EB358
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB35C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 801EB360
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 801EB364
  c->r[5]=c->r[1]+0x00000008u; // 801EB368
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801EB36C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 801EB370
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801EB374
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801EB378
  c->r[12]=R32(c->r[26]+0x00000000u); // 801EB37C
  c->r[12]=R32(c->r[12]+0x00000050u); // 801EB380
  c->ctr=c->r[12]; // 801EB384
  if (true) { c->lr=0x801EB38Cu; dispatch(c,c->ctr); } // 801EB388
  c->r[28]=c->r[28]+0x00000001u; // 801EB38C
  c->r[31]=c->r[31]+0x000001A0u; // 801EB390
L_801EB394:;
  c->r[27]=c->r[27]+0x00000001u; // 801EB394
L_801EB398:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801EB398
  c->r[3]=c->r[26]|c->r[26]; // 801EB39C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801EB3A0
  c->ctr=c->r[12]; // 801EB3A4
  if (true) { c->lr=0x801EB3ACu; dispatch(c,c->ctr); } // 801EB3A8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 801EB3AC
  if (crb(c,0)) { IRQCHK(c); goto L_801EB2EC; } // 801EB3B0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 801EB3B4
  c->r[11]=c->r[1]+0x000000B0u; // 801EB3B8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 801EB3BC
  c->lr=0x801EB3C4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB3C0
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801EB3C4
  c->lr=c->r[0]; // 801EB3C8
  c->r[1]=c->r[1]+0x000000C0u; // 801EB3CC
  return; // 801EB3D0
}

// fn_801EB3D4
void f_801EB3D4(Ctx* __restrict c) {
  trace_call(0x801EB3D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB3D4
  c->r[0]=c->lr; // 801EB3D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB3DC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EB3E0
  c->r[29]=c->r[3]|c->r[3]; // 801EB3E4
  c->lr=0x801EB3ECu; f_800D8A54(c); // 801EB3E8
  c->r[4]=0u+0x80400000u; // 801EB3EC
  c->r[3]=0u+0x80400000u; // 801EB3F0
  c->r[4]=c->r[4]+0x00006390u; // 801EB3F4
  c->r[30]=c->r[29]+0x00001F44u; // 801EB3F8
  c->r[0]=c->r[4]+0x00000040u; // 801EB3FC
  c->r[3]=c->r[3]+0x000067D4u; // 801EB400
  W32(c->r[29]+0x00000010u,c->r[4]); // 801EB404
  c->r[31]=c->r[29]+0x00002764u; // 801EB408
  W32(c->r[29]+0x00000048u,c->r[0]); // 801EB40C
  W32(c->r[29]+0x00001F1Cu,c->r[3]); // 801EB410
L_801EB414:;
  c->r[3]=c->r[30]|c->r[30]; // 801EB414
  c->lr=0x801EB41Cu; f_801ABEE0(c); // 801EB418
  c->r[30]=c->r[30]+0x000001A0u; // 801EB41C
  cmpu(c,0,c->r[30],c->r[31]); // 801EB420
  if (crb(c,0)) { IRQCHK(c); goto L_801EB414; } // 801EB424
  c->r[3]=c->r[29]|c->r[29]; // 801EB428
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EB42C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EB430
  c->lr=c->r[0]; // 801EB434
  c->r[1]=c->r[1]+0x00000020u; // 801EB438
  return; // 801EB43C
}

// fn_801EB440
void f_801EB440(Ctx* __restrict c) {
  trace_call(0x801EB440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB440
  c->r[0]=c->lr; // 801EB444
  cmps(c,0,(int32_t)c->r[3],0); // 801EB448
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB44C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EB450
  c->r[30]=c->r[3]|c->r[3]; // 801EB454
  c->r[31]=c->r[4]|c->r[4]; // 801EB458
  if (crb(c,2)) { goto L_801EB47C; } // 801EB45C
  if (crb(c,2)) { goto L_801EB46C; } // 801EB460
  c->r[4]=0u+0x00000000u; // 801EB464
  c->lr=0x801EB46Cu; f_80075DAC(c); // 801EB468
L_801EB46C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EB46C
  if (!crb(c,1)) { goto L_801EB47C; } // 801EB470
  c->r[3]=c->r[30]|c->r[30]; // 801EB474
  c->lr=0x801EB47Cu; f_802896EC(c); // 801EB478
L_801EB47C:;
  c->r[3]=c->r[30]|c->r[30]; // 801EB47C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EB480
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB484
  c->lr=c->r[0]; // 801EB488
  c->r[1]=c->r[1]+0x00000010u; // 801EB48C
  return; // 801EB490
}

// fn_801EB494
void f_801EB494(Ctx* __restrict c) {
  trace_call(0x801EB494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB494
  c->r[0]=c->lr; // 801EB498
  c->r[4]=0u+0x00000018u; // 801EB49C
  c->r[5]=0u+0x00000001u; // 801EB4A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB4A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB4A8
  c->r[31]=c->r[3]|c->r[3]; // 801EB4AC
  c->r[3]=c->r[3]+0x00000394u; // 801EB4B0
  c->lr=0x801EB4B8u; f_800B16D0(c); // 801EB4B4
  {uint32_t ea=c->r[2]+0xFFFFC048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB4B8
  c->r[0]=0u+0x00000000u; // 801EB4BC
  W8(c->r[31]+0x00002764u,c->r[0]); // 801EB4C0
  c->r[3]=c->r[31]+0x000008D0u; // 801EB4C4
  c->r[4]=0u+0x00000000u; // 801EB4C8
  {uint32_t ea=c->r[31]+0x000003A4u; WF32(ea,c->f[0]);} // 801EB4CC
  c->lr=0x801EB4D4u; f_8002B91C(c); // 801EB4D0
  c->r[3]=0u+0x80400000u; // 801EB4D4
  c->r[0]=c->r[13]+0xFFFF89A7u; // 801EB4D8
  c->r[3]=c->r[3]+0x0000637Du; // 801EB4DC
  W32(c->r[31]+0x000004F8u,c->r[0]); // 801EB4E0
  W32(c->r[31]+0x000004E4u,c->r[3]); // 801EB4E4
  W32(c->r[31]+0x000004ECu,c->r[3]); // 801EB4E8
  W32(c->r[31]+0x000004F4u,c->r[3]); // 801EB4EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB4F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB4F4
  c->lr=c->r[0]; // 801EB4F8
  c->r[1]=c->r[1]+0x00000010u; // 801EB4FC
  return; // 801EB500
}

// fn_801EB504
void f_801EB504(Ctx* __restrict c) {
  trace_call(0x801EB504u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB504
  c->r[0]=c->lr; // 801EB508
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801EB50C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801EB510
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801EB514
  c->r[11]=c->r[1]+0x000000A0u; // 801EB518
  c->lr=0x801EB520u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB51C
  c->r[30]=c->r[3]|c->r[3]; // 801EB520
  c->lr=0x801EB528u; f_800B5DFC(c); // 801EB524
  c->r[3]=0u+0x803E0000u; // 801EB528
  c->r[31]=0u+0x00000000u; // 801EB52C
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801EB530
  c->r[27]=c->r[31]|c->r[31]; // 801EB534
  c->r[25]=c->r[3]+0x000011D8u; // 801EB538
  c->r[29]=0u+0x00000000u; // 801EB53C
  c->r[28]=0u+0x00000000u; // 801EB540
  c->r[26]=0u+0x00000006u; // 801EB544
L_801EB548:;
  c->r[3]=c->r[30]+c->r[29]; // 801EB548
  c->r[24]=c->r[3]+0x00001F44u; // 801EB54C
  c->r[3]=c->r[24]|c->r[24]; // 801EB550
  c->lr=0x801EB558u; f_801AC25C(c); // 801EB554
  c->r[3]=c->r[30]+c->r[28]; // 801EB558
  {uint32_t ea=c->r[3]+0x00001F2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB55C
  fcmp(c,0,c->f[0],c->f[31]); // 801EB560
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EB564
  if (!crb(c,2)) { goto L_801EB64C; } // 801EB568
  c->r[0]=R32(c->r[24]+0x00000000u); // 801EB56C
  c->r[24]=c->r[30]+c->r[29]; // 801EB570
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801EB574
  if (crb(c,2)) { goto L_801EB64C; } // 801EB578
  c->lr=0x801EB580u; f_80051FF4(c); // 801EB57C
  c->r[4]=c->r[3]|c->r[3]; // 801EB580
  c->r[3]=c->r[1]+0x0000002Cu; // 801EB584
  c->r[5]=c->r[25]+0x0000033Fu; // 801EB588
  c->r[6]=0u+0x00000001u; // 801EB58C
  c->lr=0x801EB594u; f_8013DB40(c); // 801EB590
  c->r[3]=c->r[1]+0x0000002Cu; // 801EB594
  c->lr=0x801EB59Cu; f_80146F08(c); // 801EB598
  cmps(c,0,(int32_t)c->r[3],0); // 801EB59C
  if (crb(c,2)) { goto L_801EB5D8; } // 801EB5A0
  c->r[5]=c->r[1]+0x00000028u; // 801EB5A4
  c->r[4]=c->r[24]+0x00001F50u; // 801EB5A8
  c->ctr=c->r[26]; // 801EB5AC
L_801EB5B0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801EB5B0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801EB5B4
  W32(c->r[5]+0x00000004u,c->r[3]); // 801EB5B8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801EB5BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EB5B0; } // 801EB5C0
  c->r[12]=R32(c->r[1]+0x0000005Cu); // 801EB5C4
  c->r[3]=c->r[1]+0x0000002Cu; // 801EB5C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EB5CC
  c->ctr=c->r[12]; // 801EB5D0
  if (true) { c->lr=0x801EB5D8u; dispatch(c,c->ctr); } // 801EB5D4
L_801EB5D8:;
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB5D8
  c->r[3]=c->r[30]+c->r[29]; // 801EB5DC
  c->r[24]=c->r[3]+0x00001F44u; // 801EB5E0
  c->f[2]=c->f[1]; // 801EB5E4
  c->r[3]=c->r[1]+0x00000020u; // 801EB5E8
  c->f[3]=c->f[1]; // 801EB5EC
  c->lr=0x801EB5F4u; f_800521A0(c); // 801EB5F0
  c->r[4]=c->r[3]|c->r[3]; // 801EB5F4
  c->r[3]=c->r[24]|c->r[24]; // 801EB5F8
  c->lr=0x801EB600u; f_801AC10C(c); // 801EB5FC
  W32(c->r[24]+0x00000000u,c->r[27]); // 801EB600
  c->r[3]=c->r[1]+0x00000008u; // 801EB604
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB608
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB60C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB610
  c->lr=0x801EB618u; f_800521A0(c); // 801EB614
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB618
  c->r[3]=c->r[30]+0x00000800u; // 801EB61C
  c->r[6]=R32(c->r[1]+0x00000008u); // 801EB620
  c->r[4]=c->r[25]+0x00000349u; // 801EB624
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 801EB628
  c->f[2]=c->f[1]; // 801EB62C
  c->r[0]=R32(c->r[1]+0x00000010u); // 801EB630
  c->r[5]=c->r[1]+0x00000014u; // 801EB634
  W32(c->r[1]+0x00000014u,c->r[6]); // 801EB638
  c->r[6]=0u+0x00000001u; // 801EB63C
  W32(c->r[1]+0x00000018u,c->r[7]); // 801EB640
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801EB644
  c->lr=0x801EB64Cu; f_800C1BA0(c); // 801EB648
L_801EB64C:;
  c->r[31]=c->r[31]+0x00000001u; // 801EB64C
  c->r[28]=c->r[28]+0x00000004u; // 801EB650
  cmps(c,0,(int32_t)c->r[31],5); // 801EB654
  c->r[29]=c->r[29]+0x000001A0u; // 801EB658
  if (crb(c,0)) { IRQCHK(c); goto L_801EB548; } // 801EB65C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 801EB660
  c->r[11]=c->r[1]+0x000000A0u; // 801EB664
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801EB668
  c->lr=0x801EB670u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB66C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801EB670
  c->lr=c->r[0]; // 801EB674
  c->r[1]=c->r[1]+0x000000B0u; // 801EB678
  return; // 801EB67C
}

// fn_801EB680
void f_801EB680(Ctx* __restrict c) {
  trace_call(0x801EB680u);
  return; // 801EB680
}

// fn_801EB684
void f_801EB684(Ctx* __restrict c) {
  trace_call(0x801EB684u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB684
  c->r[0]=c->lr; // 801EB688
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EB68C
  c->r[11]=c->r[1]+0x00000020u; // 801EB690
  c->lr=0x801EB698u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB694
  c->r[30]=c->r[5]|c->r[5]; // 801EB698
  c->r[29]=c->r[3]|c->r[3]; // 801EB69C
  c->r[12]=R32(c->r[30]+0x00000000u); // 801EB6A0
  c->r[3]=c->r[30]|c->r[30]; // 801EB6A4
  c->r[31]=c->r[4]|c->r[4]; // 801EB6A8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EB6AC
  c->ctr=c->r[12]; // 801EB6B0
  if (true) { c->lr=0x801EB6B8u; dispatch(c,c->ctr); } // 801EB6B4
  cmps(c,0,(int32_t)c->r[3],1025); // 801EB6B8
  if (!crb(c,0)) { goto L_801EB6CC; } // 801EB6BC
  cmps(c,0,(int32_t)c->r[3],3); // 801EB6C0
  if (crb(c,2)) { goto L_801EB6D8; } // 801EB6C4
  goto L_801EB740; // 801EB6C8
L_801EB6CC:;
  cmps(c,0,(int32_t)c->r[3],1029); // 801EB6CC
  if (!crb(c,0)) { goto L_801EB740; } // 801EB6D0
  goto L_801EB6F8; // 801EB6D4
L_801EB6D8:;
  c->r[4]=c->r[29]|c->r[29]; // 801EB6D8
  c->r[3]=c->r[29]+0x00001F18u; // 801EB6DC
  c->lr=0x801EB6E4u; f_801EB280(c); // 801EB6E0
  c->r[3]=c->r[29]|c->r[29]; // 801EB6E4
  c->r[4]=c->r[31]|c->r[31]; // 801EB6E8
  c->r[5]=c->r[30]|c->r[30]; // 801EB6EC
  c->lr=0x801EB6F4u; f_800B5B1C(c); // 801EB6F0
  goto L_801EB750; // 801EB6F4
L_801EB6F8:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801EB6F8
  c->r[31]=addc(c,c->r[3],0xFFFFFFF4u,0); cr0(c,c->r[31]); // 801EB6FC
  if (crb(c,0)) { goto L_801EB750; } // 801EB700
  cmps(c,0,(int32_t)c->r[31],5); // 801EB704
  if (!crb(c,0)) { goto L_801EB750; } // 801EB708
  c->r[12]=R32(c->r[29]+0x00000010u); // 801EB70C
  c->r[3]=c->r[29]|c->r[29]; // 801EB710
  c->r[4]=c->r[30]|c->r[30]; // 801EB714
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB718
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801EB71C
  c->ctr=c->r[12]; // 801EB720
  if (true) { c->lr=0x801EB728u; dispatch(c,c->ctr); } // 801EB724
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801EB728
  c->r[3]=c->r[29]+c->r[0]; // 801EB72C
  {uint32_t ea=c->r[3]+0x00001F2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB730
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801EB734
  {uint32_t ea=c->r[3]+0x00001F2Cu; WF32(ea,c->f[0]);} // 801EB738
  goto L_801EB750; // 801EB73C
L_801EB740:;
  c->r[3]=c->r[29]|c->r[29]; // 801EB740
  c->r[4]=c->r[31]|c->r[31]; // 801EB744
  c->r[5]=c->r[30]|c->r[30]; // 801EB748
  c->lr=0x801EB750u; f_800B5B1C(c); // 801EB74C
L_801EB750:;
  c->r[11]=c->r[1]+0x00000020u; // 801EB750
  c->lr=0x801EB758u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB754
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EB758
  c->lr=c->r[0]; // 801EB75C
  c->r[1]=c->r[1]+0x00000020u; // 801EB760
  return; // 801EB764
}

// fn_801EB768
void f_801EB768(Ctx* __restrict c) {
  trace_call(0x801EB768u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB768
  c->r[0]=c->lr; // 801EB76C
  W32(c->r[1]+0x00000194u,c->r[0]); // 801EB770
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 801EB774
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 801EB778
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 801EB77C
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 801EB780
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[29]);} // 801EB784
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,29,ea,0,0);} // 801EB788
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[28]);} // 801EB78C
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,28,ea,0,0);} // 801EB790
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[27]);} // 801EB794
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,27,ea,0,0);} // 801EB798
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[26]);} // 801EB79C
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,26,ea,0,0);} // 801EB7A0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[25]);} // 801EB7A4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,25,ea,0,0);} // 801EB7A8
  c->r[11]=c->r[1]+0x00000120u; // 801EB7AC
  c->lr=0x801EB7B4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB7B0
  c->r[0]=R8(c->r[13]+0xFFFF9748u); // 801EB7B4
  c->r[5]=0u+0x43300000u; // 801EB7B8
  c->f[30]=c->f[1]; // 801EB7BC
  W32(c->r[1]+0x000000E0u,c->r[5]); // 801EB7C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EB7C4
  c->r[26]=c->r[3]|c->r[3]; // 801EB7C8
  W32(c->r[1]+0x000000E8u,c->r[5]); // 801EB7CC
  c->r[27]=c->r[4]|c->r[4]; // 801EB7D0
  if (!crb(c,2)) { goto L_801EB838; } // 801EB7D4
  c->r[23]=0u+0x80580000u; // 801EB7D8
  {uint32_t ea=c->r[2]+0xFFFFC0D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB7DC
  {uint32_t ea=c->r[2]+0xFFFFC0D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB7E0
  c->r[3]=c->r[23]+0xFFFFB98Cu; // 801EB7E4
  {uint32_t ea=c->r[2]+0xFFFFC0DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB7E8
  c->lr=0x801EB7F0u; f_800521A0(c); // 801EB7EC
  c->r[23]=c->r[23]+0xFFFFB98Cu; // 801EB7F0
  {uint32_t ea=c->r[2]+0xFFFFC0E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB7F4
  {uint32_t ea=c->r[2]+0xFFFFC0D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB7F8
  c->r[3]=c->r[23]+0x0000000Cu; // 801EB7FC
  {uint32_t ea=c->r[2]+0xFFFFC0E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB800
  c->lr=0x801EB808u; f_800521A0(c); // 801EB804
  {uint32_t ea=c->r[2]+0xFFFFC0E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB808
  c->r[3]=c->r[23]+0x00000018u; // 801EB80C
  {uint32_t ea=c->r[2]+0xFFFFC0D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB810
  {uint32_t ea=c->r[2]+0xFFFFC0ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB814
  c->lr=0x801EB81Cu; f_800521A0(c); // 801EB818
  {uint32_t ea=c->r[2]+0xFFFFC0D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB81C
  c->r[3]=c->r[23]+0x00000024u; // 801EB820
  {uint32_t ea=c->r[2]+0xFFFFC0D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB824
  {uint32_t ea=c->r[2]+0xFFFFC0F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB828
  c->lr=0x801EB830u; f_800521A0(c); // 801EB82C
  c->r[0]=0u+0x00000001u; // 801EB830
  W8(c->r[13]+0xFFFF9748u,c->r[0]); // 801EB834
L_801EB838:;
  c->r[0]=R8(c->r[13]+0xFFFF9749u); // 801EB838
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801EB83C
  if (!crb(c,2)) { goto L_801EB8A4; } // 801EB840
  c->r[23]=0u+0x80580000u; // 801EB844
  {uint32_t ea=c->r[2]+0xFFFFC0F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB848
  {uint32_t ea=c->r[2]+0xFFFFC0F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB84C
  c->r[3]=c->r[23]+0xFFFFB9BCu; // 801EB850
  {uint32_t ea=c->r[2]+0xFFFFC0FCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB854
  c->lr=0x801EB85Cu; f_800521A0(c); // 801EB858
  c->r[23]=c->r[23]+0xFFFFB9BCu; // 801EB85C
  {uint32_t ea=c->r[2]+0xFFFFC100u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB860
  {uint32_t ea=c->r[2]+0xFFFFC104u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB864
  c->r[3]=c->r[23]+0x0000000Cu; // 801EB868
  {uint32_t ea=c->r[2]+0xFFFFC108u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB86C
  c->lr=0x801EB874u; f_800521A0(c); // 801EB870
  {uint32_t ea=c->r[2]+0xFFFFC10Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB874
  c->r[3]=c->r[23]+0x00000018u; // 801EB878
  {uint32_t ea=c->r[2]+0xFFFFC104u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB87C
  {uint32_t ea=c->r[2]+0xFFFFC110u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB880
  c->lr=0x801EB888u; f_800521A0(c); // 801EB884
  {uint32_t ea=c->r[2]+0xFFFFC114u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB888
  c->r[3]=c->r[23]+0x00000024u; // 801EB88C
  {uint32_t ea=c->r[2]+0xFFFFC104u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB890
  {uint32_t ea=c->r[2]+0xFFFFC118u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB894
  c->lr=0x801EB89Cu; f_800521A0(c); // 801EB898
  c->r[0]=0u+0x00000001u; // 801EB89C
  W8(c->r[13]+0xFFFF9749u,c->r[0]); // 801EB8A0
L_801EB8A4:;
  c->r[3]=c->r[26]|c->r[26]; // 801EB8A4
  c->lr=0x801EB8ACu; f_800AC7C4(c); // 801EB8A8
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB8AC
  c->r[3]=c->r[1]+0x000000C8u; // 801EB8B0
  c->f[2]=c->f[1]; // 801EB8B4
  c->f[3]=c->f[1]; // 801EB8B8
  c->lr=0x801EB8C0u; f_800521A0(c); // 801EB8BC
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 801EB8C0
  c->r[4]=0u+0x80580000u; // 801EB8C4
  c->r[3]=0u+0x80580000u; // 801EB8C8
  {uint32_t ea=c->r[2]+0xFFFFC130u; c->f[31]=RF64(ea);} // 801EB8CC
  c->r[4]=c->r[4]+0xFFFFB98Cu; // 801EB8D0
  {uint32_t ea=c->r[2]+0xFFFFC08Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 801EB8D4
  c->r[3]=c->r[3]+0xFFFFB9BCu; // 801EB8D8
  {uint32_t ea=c->r[2]+0xFFFFC128u; c->f[26]=c->ps1[26]=RF32(ea);} // 801EB8DC
  {uint32_t ea=c->r[2]+0xFFFFC124u; c->f[27]=c->ps1[27]=RF32(ea);} // 801EB8E0
  c->r[30]=c->r[4]+c->r[0]; // 801EB8E4
  {uint32_t ea=c->r[2]+0xFFFFC12Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801EB8E8
  c->r[29]=c->r[3]+c->r[0]; // 801EB8EC
  c->r[28]=0u+0x00000000u; // 801EB8F0
  c->r[25]=0u+0x00000000u; // 801EB8F4
  c->r[24]=0u+0x00000000u; // 801EB8F8
  c->r[23]=0u+0x00000000u; // 801EB8FC
  c->r[31]=0u+0x00000064u; // 801EB900
L_801EB904:;
  c->r[0]=c->r[24]+0x00000064u; // 801EB904
  c->r[3]=c->r[26]+c->r[23]; // 801EB908
  c->r[0]=c->r[0]^0x80000000u; // 801EB90C
  {uint32_t ea=c->r[3]+0x00001F2Cu; WF32(ea,c->f[30]);} // 801EB910
  c->r[4]=c->r[29]|c->r[29]; // 801EB914
  c->r[3]=c->r[1]+0x000000B0u; // 801EB918
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801EB91C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=RF64(ea);} // 801EB920
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 801EB924
  c->lr=0x801EB92Cu; f_800FACB4(c); // 801EB928
  c->r[5]=c->r[30]|c->r[30]; // 801EB92C
  c->r[3]=c->r[1]+0x000000BCu; // 801EB930
  c->r[4]=c->r[1]+0x000000B0u; // 801EB934
  c->lr=0x801EB93Cu; f_801011E8(c); // 801EB938
  c->r[3]=c->r[1]+0x000000D4u; // 801EB93C
  c->r[4]=c->r[1]+0x000000BCu; // 801EB940
  c->lr=0x801EB948u; f_8003F468(c); // 801EB944
  c->lr=0x801EB94Cu; f_80291D94(c); // 801EB948
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 801EB94C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801EB950
  c->r[0]=c->r[3]-c->r[0]; // 801EB954
  c->r[0]=c->r[0]^0x80000000u; // 801EB958
  W32(c->r[1]+0x000000ECu,c->r[0]); // 801EB95C
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=RF64(ea);} // 801EB960
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EB964
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[25]); // 801EB968
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 801EB96C
  c->lr=0x801EB974u; f_80291D94(c); // 801EB970
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[31]); // 801EB974
  cmps(c,0,(int32_t)c->r[27],2); // 801EB978
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801EB97C
  c->r[0]=c->r[3]-c->r[0]; // 801EB980
  c->r[0]=c->r[0]^0x80000000u; // 801EB984
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801EB988
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=RF64(ea);} // 801EB98C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EB990
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[25]); // 801EB994
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 801EB998
  if (crb(c,2)) { goto L_801EBA50; } // 801EB99C
  if (!crb(c,0)) { goto L_801EB9B4; } // 801EB9A0
  cmps(c,0,(int32_t)c->r[27],0); // 801EB9A4
  if (crb(c,2)) { goto L_801EB9C0; } // 801EB9A8
  if (!crb(c,0)) { goto L_801EBA08; } // 801EB9AC
  goto L_801EBADC; // 801EB9B0
L_801EB9B4:;
  cmps(c,0,(int32_t)c->r[27],4); // 801EB9B4
  if (!crb(c,0)) { goto L_801EBADC; } // 801EB9B8
  goto L_801EBA98; // 801EB9BC
L_801EB9C0:;
  {uint32_t ea=c->r[2]+0xFFFFC11Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB9C0
  c->r[3]=c->r[1]+0x0000008Cu; // 801EB9C4
  c->r[4]=c->r[1]+0x000000C8u; // 801EB9C8
  c->lr=0x801EB9D0u; f_800FACB4(c); // 801EB9CC
  {uint32_t ea=c->r[2]+0xFFFFBF80u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB9D0
  c->r[3]=c->r[1]+0x00000098u; // 801EB9D4
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB9D8
  {uint32_t ea=c->r[2]+0xFFFFBF88u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB9DC
  c->lr=0x801EB9E4u; f_800521A0(c); // 801EB9E0
  c->r[4]=c->r[3]|c->r[3]; // 801EB9E4
  c->r[3]=c->r[1]+0x000000A4u; // 801EB9E8
  c->r[5]=c->r[1]+0x0000008Cu; // 801EB9EC
  c->lr=0x801EB9F4u; f_801011E8(c); // 801EB9F0
  c->r[3]=c->r[26]+c->r[25]; // 801EB9F4
  c->r[4]=c->r[1]+0x000000A4u; // 801EB9F8
  c->r[3]=c->r[3]+0x00001F44u; // 801EB9FC
  c->lr=0x801EBA04u; f_801AC10C(c); // 801EBA00
  goto L_801EBADC; // 801EBA04
L_801EBA08:;
  {uint32_t ea=c->r[2]+0xFFFFC11Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBA08
  c->r[3]=c->r[1]+0x00000068u; // 801EBA0C
  c->r[4]=c->r[1]+0x000000C8u; // 801EBA10
  c->lr=0x801EBA18u; f_800FACB4(c); // 801EBA14
  {uint32_t ea=c->r[2]+0xFFFFBFDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBA18
  c->r[3]=c->r[1]+0x00000074u; // 801EBA1C
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EBA20
  {uint32_t ea=c->r[2]+0xFFFFBFE0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EBA24
  c->lr=0x801EBA2Cu; f_800521A0(c); // 801EBA28
  c->r[4]=c->r[3]|c->r[3]; // 801EBA2C
  c->r[3]=c->r[1]+0x00000080u; // 801EBA30
  c->r[5]=c->r[1]+0x00000068u; // 801EBA34
  c->lr=0x801EBA3Cu; f_801011E8(c); // 801EBA38
  c->r[3]=c->r[26]+c->r[25]; // 801EBA3C
  c->r[4]=c->r[1]+0x00000080u; // 801EBA40
  c->r[3]=c->r[3]+0x00001F44u; // 801EBA44
  c->lr=0x801EBA4Cu; f_801AC10C(c); // 801EBA48
  goto L_801EBADC; // 801EBA4C
L_801EBA50:;
  {uint32_t ea=c->r[2]+0xFFFFC11Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBA50
  c->r[3]=c->r[1]+0x00000044u; // 801EBA54
  c->r[4]=c->r[1]+0x000000C8u; // 801EBA58
  c->lr=0x801EBA60u; f_800FACB4(c); // 801EBA5C
  {uint32_t ea=c->r[2]+0xFFFFC00Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBA60
  c->r[3]=c->r[1]+0x00000050u; // 801EBA64
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EBA68
  {uint32_t ea=c->r[2]+0xFFFFC010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EBA6C
  c->lr=0x801EBA74u; f_800521A0(c); // 801EBA70
  c->r[4]=c->r[3]|c->r[3]; // 801EBA74
  c->r[3]=c->r[1]+0x0000005Cu; // 801EBA78
  c->r[5]=c->r[1]+0x00000044u; // 801EBA7C
  c->lr=0x801EBA84u; f_801011E8(c); // 801EBA80
  c->r[3]=c->r[26]+c->r[25]; // 801EBA84
  c->r[4]=c->r[1]+0x0000005Cu; // 801EBA88
  c->r[3]=c->r[3]+0x00001F44u; // 801EBA8C
  c->lr=0x801EBA94u; f_801AC10C(c); // 801EBA90
  goto L_801EBADC; // 801EBA94
L_801EBA98:;
  {uint32_t ea=c->r[2]+0xFFFFC11Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBA98
  c->r[3]=c->r[1]+0x00000020u; // 801EBA9C
  c->r[4]=c->r[1]+0x000000C8u; // 801EBAA0
  c->lr=0x801EBAA8u; f_800FACB4(c); // 801EBAA4
  {uint32_t ea=c->r[2]+0xFFFFC038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBAA8
  c->r[3]=c->r[1]+0x0000002Cu; // 801EBAAC
  {uint32_t ea=c->r[2]+0xFFFFBF84u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EBAB0
  {uint32_t ea=c->r[2]+0xFFFFC03Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EBAB4
  c->lr=0x801EBABCu; f_800521A0(c); // 801EBAB8
  c->r[4]=c->r[3]|c->r[3]; // 801EBABC
  c->r[3]=c->r[1]+0x00000038u; // 801EBAC0
  c->r[5]=c->r[1]+0x00000020u; // 801EBAC4
  c->lr=0x801EBACCu; f_801011E8(c); // 801EBAC8
  c->r[3]=c->r[26]+c->r[25]; // 801EBACC
  c->r[4]=c->r[1]+0x00000038u; // 801EBAD0
  c->r[3]=c->r[3]+0x00001F44u; // 801EBAD4
  c->lr=0x801EBADCu; f_801AC10C(c); // 801EBAD8
L_801EBADC:;
  c->r[4]=c->r[26]+c->r[25]; // 801EBADC
  c->r[3]=c->r[1]+0x00000014u; // 801EBAE0
  c->r[22]=c->r[4]+0x00001F44u; // 801EBAE4
  c->r[5]=c->r[1]+0x000000C8u; // 801EBAE8
  c->r[4]=c->r[1]+0x000000D4u; // 801EBAEC
  c->lr=0x801EBAF4u; f_801011E8(c); // 801EBAF0
  {uint32_t ea=c->r[2]+0xFFFFC120u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBAF4
  c->r[3]=c->r[22]|c->r[22]; // 801EBAF8
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EBAFC
  c->r[4]=c->r[1]+0x00000014u; // 801EBB00
  c->lr=0x801EBB08u; f_801AC518(c); // 801EBB04
  c->lr=0x801EBB0Cu; f_80291D94(c); // 801EBB08
  c->r[0]=c->r[3]^0x80000000u; // 801EBB0C
  W32(c->r[1]+0x000000ECu,c->r[0]); // 801EBB10
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=RF64(ea);} // 801EBB14
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EBB18
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 801EBB1C
  c->f[29]=c->ps1[29]=S(std::fma(c->f[27],c->f[0],-c->f[28])); // 801EBB20
  c->lr=0x801EBB28u; f_80291D94(c); // 801EBB24
  c->r[0]=c->r[3]^0x80000000u; // 801EBB28
  c->f[2]=c->f[29]; // 801EBB2C
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801EBB30
  c->r[3]=c->r[1]+0x00000008u; // 801EBB34
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EBB38
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=RF64(ea);} // 801EBB3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EBB40
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[26]); // 801EBB44
  c->f[1]=c->ps1[1]=S(std::fma(c->f[27],c->f[0],-c->f[28])); // 801EBB48
  c->lr=0x801EBB50u; f_800521A0(c); // 801EBB4C
  c->r[4]=c->r[3]|c->r[3]; // 801EBB50
  c->r[3]=c->r[22]|c->r[22]; // 801EBB54
  c->lr=0x801EBB5Cu; f_801ACAD0(c); // 801EBB58
  c->r[28]=c->r[28]+0x00000001u; // 801EBB5C
  c->r[24]=c->r[24]+0x0000000Au; // 801EBB60
  cmps(c,0,(int32_t)c->r[28],5); // 801EBB64
  c->r[23]=c->r[23]+0x00000004u; // 801EBB68
  c->r[25]=c->r[25]+0x000001A0u; // 801EBB6C
  if (crb(c,0)) { IRQCHK(c); goto L_801EB904; } // 801EBB70
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 801EBB74
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 801EBB78
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,30,ea,0,0);} // 801EBB7C
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 801EBB80
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,29,ea,0,0);} // 801EBB84
  {uint32_t ea=c->r[1]+0x00000160u; c->f[29]=RF64(ea);} // 801EBB88
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,28,ea,0,0);} // 801EBB8C
  {uint32_t ea=c->r[1]+0x00000150u; c->f[28]=RF64(ea);} // 801EBB90
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,27,ea,0,0);} // 801EBB94
  {uint32_t ea=c->r[1]+0x00000140u; c->f[27]=RF64(ea);} // 801EBB98
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,26,ea,0,0);} // 801EBB9C
  {uint32_t ea=c->r[1]+0x00000130u; c->f[26]=RF64(ea);} // 801EBBA0
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,25,ea,0,0);} // 801EBBA4
  c->r[11]=c->r[1]+0x00000120u; // 801EBBA8
  {uint32_t ea=c->r[1]+0x00000120u; c->f[25]=RF64(ea);} // 801EBBAC
  c->lr=0x801EBBB4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EBBB0
  c->r[0]=R32(c->r[1]+0x00000194u); // 801EBBB4
  c->lr=c->r[0]; // 801EBBB8
  c->r[1]=c->r[1]+0x00000190u; // 801EBBBC
  return; // 801EBBC0
}

// fn_801EBBC4
void f_801EBBC4(Ctx* __restrict c) {
  trace_call(0x801EBBC4u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBBC4
  c->r[0]=c->lr; // 801EBBC8
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801EBBCC
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 801EBBD0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 801EBBD4
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 801EBBD8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 801EBBDC
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[29]);} // 801EBBE0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,29,ea,0,0);} // 801EBBE4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[28]);} // 801EBBE8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,28,ea,0,0);} // 801EBBEC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[27]);} // 801EBBF0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,27,ea,0,0);} // 801EBBF4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[26]);} // 801EBBF8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,26,ea,0,0);} // 801EBBFC
  c->r[11]=c->r[1]+0x00000080u; // 801EBC00
  c->lr=0x801EBC08u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EBC04
  c->r[4]=0u+0x43300000u; // 801EBC08
  c->r[0]=0u+0x00000001u; // 801EBC0C
  W32(c->r[1]+0x00000048u,c->r[4]); // 801EBC10
  c->r[29]=c->r[3]|c->r[3]; // 801EBC14
  W32(c->r[1]+0x00000050u,c->r[4]); // 801EBC18
  {uint32_t ea=c->r[3]+0x00001F40u; WF32(ea,c->f[2]);} // 801EBC1C
  W8(c->r[3]+0x00002764u,c->r[0]); // 801EBC20
  c->lr=0x801EBC28u; f_800AC3A4(c); // 801EBC24
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBC28
  c->r[3]=c->r[1]+0x0000002Cu; // 801EBC2C
  c->f[2]=c->f[1]; // 801EBC30
  c->f[3]=c->f[1]; // 801EBC34
  c->lr=0x801EBC3Cu; f_800521A0(c); // 801EBC38
  {uint32_t ea=c->r[2]+0xFFFFC130u; c->f[31]=RF64(ea);} // 801EBC3C
  c->r[30]=0u+0x00000000u; // 801EBC40
  {uint32_t ea=c->r[2]+0xFFFFC138u; c->f[26]=c->ps1[26]=RF32(ea);} // 801EBC44
  c->r[28]=0u+0x00000000u; // 801EBC48
  {uint32_t ea=c->r[2]+0xFFFFC128u; c->f[27]=c->ps1[27]=RF32(ea);} // 801EBC4C
  c->r[27]=0u+0x00000000u; // 801EBC50
  {uint32_t ea=c->r[2]+0xFFFFC12Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801EBC54
  c->r[31]=0u+0x80580000u; // 801EBC58
  {uint32_t ea=c->r[2]+0xFFFFBFE8u; c->f[29]=c->ps1[29]=RF32(ea);} // 801EBC5C
  c->r[26]=0u+0x00000064u; // 801EBC60
L_801EBC64:;
  c->r[0]=c->r[27]+0x00000064u; // 801EBC64
  c->r[3]=c->r[1]+0x00000020u; // 801EBC68
  c->r[0]=c->r[0]^0x80000000u; // 801EBC6C
  c->r[4]=c->r[31]+0xFFFFB7ACu; // 801EBC70
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801EBC74
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801EBC78
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 801EBC7C
  c->lr=0x801EBC84u; f_801AE7E0(c); // 801EBC80
  c->r[3]=c->r[1]+0x00000038u; // 801EBC84
  c->r[4]=c->r[1]+0x00000020u; // 801EBC88
  c->lr=0x801EBC90u; f_8003F468(c); // 801EBC8C
  c->lr=0x801EBC94u; f_80291D94(c); // 801EBC90
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[26]); // 801EBC94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[26]); // 801EBC98
  c->r[0]=c->r[3]-c->r[0]; // 801EBC9C
  c->r[0]=c->r[0]^0x80000000u; // 801EBCA0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EBCA4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801EBCA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EBCAC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 801EBCB0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801EBCB4
  c->lr=0x801EBCBCu; f_80291D94(c); // 801EBCB8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[26]); // 801EBCBC
  c->r[5]=c->r[29]+c->r[28]; // 801EBCC0
  c->r[4]=c->r[31]+0xFFFFB7ACu; // 801EBCC4
  c->r[25]=c->r[5]+0x00001F44u; // 801EBCC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[26]); // 801EBCCC
  c->r[0]=c->r[3]-c->r[0]; // 801EBCD0
  c->r[3]=c->r[1]+0x00000014u; // 801EBCD4
  c->r[0]=c->r[0]^0x80000000u; // 801EBCD8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801EBCDC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801EBCE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EBCE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[26]); // 801EBCE8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801EBCEC
  c->lr=0x801EBCF4u; f_801AE7A4(c); // 801EBCF0
  {uint32_t ea=c->r[2]+0xFFFFC084u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBCF4
  c->r[3]=c->r[25]|c->r[25]; // 801EBCF8
  {uint32_t ea=c->r[2]+0xFFFFBFCCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EBCFC
  c->r[4]=c->r[1]+0x00000014u; // 801EBD00
  c->lr=0x801EBD08u; f_801AC518(c); // 801EBD04
  c->lr=0x801EBD0Cu; f_80291D94(c); // 801EBD08
  c->r[0]=c->r[3]^0x80000000u; // 801EBD0C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EBD10
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801EBD14
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EBD18
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[27]); // 801EBD1C
  c->f[30]=c->ps1[30]=S(std::fma(c->f[28],c->f[0],-c->f[29])); // 801EBD20
  c->lr=0x801EBD28u; f_80291D94(c); // 801EBD24
  c->r[0]=c->r[3]^0x80000000u; // 801EBD28
  c->f[2]=c->f[30]; // 801EBD2C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801EBD30
  c->r[3]=c->r[1]+0x00000008u; // 801EBD34
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EBD38
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801EBD3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801EBD40
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[27]); // 801EBD44
  c->f[1]=c->ps1[1]=S(std::fma(c->f[28],c->f[0],-c->f[29])); // 801EBD48
  c->lr=0x801EBD50u; f_800521A0(c); // 801EBD4C
  c->r[4]=c->r[3]|c->r[3]; // 801EBD50
  c->r[3]=c->r[25]|c->r[25]; // 801EBD54
  c->lr=0x801EBD5Cu; f_801ACAD0(c); // 801EBD58
  c->r[30]=c->r[30]+0x00000001u; // 801EBD5C
  c->r[27]=c->r[27]+0x0000000Au; // 801EBD60
  cmps(c,0,(int32_t)c->r[30],5); // 801EBD64
  c->r[28]=c->r[28]+0x000001A0u; // 801EBD68
  if (crb(c,0)) { IRQCHK(c); goto L_801EBC64; } // 801EBD6C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 801EBD70
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 801EBD74
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 801EBD78
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 801EBD7C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,29,ea,0,0);} // 801EBD80
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[29]=RF64(ea);} // 801EBD84
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,28,ea,0,0);} // 801EBD88
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[28]=RF64(ea);} // 801EBD8C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,27,ea,0,0);} // 801EBD90
  {uint32_t ea=c->r[1]+0x00000090u; c->f[27]=RF64(ea);} // 801EBD94
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,26,ea,0,0);} // 801EBD98
  c->r[11]=c->r[1]+0x00000080u; // 801EBD9C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[26]=RF64(ea);} // 801EBDA0
  c->lr=0x801EBDA8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EBDA4
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801EBDA8
  c->lr=c->r[0]; // 801EBDAC
  c->r[1]=c->r[1]+0x000000E0u; // 801EBDB0
  return; // 801EBDB4
}

// fn_801EBDB8
void f_801EBDB8(Ctx* __restrict c) {
  trace_call(0x801EBDB8u);
  c->r[4]=0u+0x00000000u; // 801EBDB8
  c->r[3]=c->r[3]+0x000008D0u; // 801EBDBC
  f_8002B91C(c); return; // 801EBDC0
}

// fn_801EBDC4
void f_801EBDC4(Ctx* __restrict c) {
  trace_call(0x801EBDC4u);
  return; // 801EBDC4
}

// fn_801EBDC8
void f_801EBDC8(Ctx* __restrict c) {
  trace_call(0x801EBDC8u);
  return; // 801EBDC8
}

// fn_801EBDCC
void f_801EBDCC(Ctx* __restrict c) {
  trace_call(0x801EBDCCu);
  return; // 801EBDCC
}

// fn_801EBDD0
void f_801EBDD0(Ctx* __restrict c) {
  trace_call(0x801EBDD0u);
  c->r[4]=0u+0x00000001u; // 801EBDD0
  c->r[3]=c->r[3]+0x000008D0u; // 801EBDD4
  f_8002B91C(c); return; // 801EBDD8
}

// fn_801EBDDC
void f_801EBDDC(Ctx* __restrict c) {
  trace_call(0x801EBDDCu);
  return; // 801EBDDC
}

// fn_801EBDE0
void f_801EBDE0(Ctx* __restrict c) {
  trace_call(0x801EBDE0u);
  return; // 801EBDE0
}

// fn_801EBDE4
void f_801EBDE4(Ctx* __restrict c) {
  trace_call(0x801EBDE4u);
  return; // 801EBDE4
}

// fn_801EBDE8
void f_801EBDE8(Ctx* __restrict c) {
  trace_call(0x801EBDE8u);
  c->r[4]=0u+0x00000001u; // 801EBDE8
  c->r[3]=c->r[3]+0x000008D0u; // 801EBDEC
  f_8002B91C(c); return; // 801EBDF0
}

// fn_801EBDF4
void f_801EBDF4(Ctx* __restrict c) {
  trace_call(0x801EBDF4u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBDF4
  c->r[0]=c->lr; // 801EBDF8
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801EBDFC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 801EBE00
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 801EBE04
  c->r[11]=c->r[1]+0x000000E0u; // 801EBE08
  c->lr=0x801EBE10u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EBE0C
  c->r[26]=0u+0x803E0000u; // 801EBE10
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801EBE14
  c->r[29]=c->r[3]|c->r[3]; // 801EBE18
  c->r[31]=0u+0x00000000u; // 801EBE1C
  c->r[26]=c->r[26]+0x000011D8u; // 801EBE20
  c->r[30]=0u+0x00000000u; // 801EBE24
  c->r[28]=0u+0x00000000u; // 801EBE28
  c->r[27]=c->r[13]+0xFFFF94B8u; // 801EBE2C
L_801EBE30:;
  c->r[25]=c->r[29]+c->r[28]; // 801EBE30
  c->r[0]=R32(c->r[25]+0x00001F44u); // 801EBE34
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801EBE38
  if (!crb(c,2)) { goto L_801EBF5C; } // 801EBE3C
  {uint32_t ea=c->r[25]+0x00001F8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EBE40
  fcmp(c,0,c->f[31],c->f[0]); // 801EBE44
  if (crb(c,2)) { goto L_801EBF60; } // 801EBE48
  c->lr=0x801EBE50u; f_80051FF4(c); // 801EBE4C
  c->r[4]=c->r[3]|c->r[3]; // 801EBE50
  c->r[3]=c->r[1]+0x00000078u; // 801EBE54
  c->r[5]=c->r[26]+0x000002B6u; // 801EBE58
  c->r[6]=0u+0x00000001u; // 801EBE5C
  c->lr=0x801EBE64u; f_8013DB40(c); // 801EBE60
  c->r[3]=c->r[1]+0x00000078u; // 801EBE64
  c->lr=0x801EBE6Cu; f_80146F08(c); // 801EBE68
  cmps(c,0,(int32_t)c->r[3],0); // 801EBE6C
  if (crb(c,2)) { goto L_801EBF40; } // 801EBE70
  {uint32_t ea=c->r[2]+0xFFFFBFB4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EBE74
  c->r[3]=c->r[1]+0x00000078u; // 801EBE78
  {uint32_t ea=c->r[25]+0x00001F84u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBE7C
  {uint32_t ea=c->r[25]+0x00001F8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EBE80
  c->lr=0x801EBE88u; f_80146A14(c); // 801EBE84
  {uint32_t ea=c->r[29]+0x00001F40u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBE88
  c->r[3]=c->r[1]+0x00000054u; // 801EBE8C
  {uint32_t ea=c->r[29]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EBE90
  c->r[4]=0u+0x00000000u; // 801EBE94
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EBE98
  c->lr=0x801EBEA0u; f_8010541C(c); // 801EBE9C
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 801EBEA0
  c->r[3]=c->r[1]+0x00000010u; // 801EBEA4
  c->r[4]=c->r[1]+0x00000054u; // 801EBEA8
  c->r[5]=R32(c->r[6]+0x00000000u); // 801EBEAC
  c->r[0]=R32(c->r[6]+0x00000004u); // 801EBEB0
  W32(c->r[1]+0x00000010u,c->r[5]); // 801EBEB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBEB8
  c->lr=0x801EBEC0u; f_800BCDAC(c); // 801EBEBC
  {uint32_t ea=c->r[29]+0x00001F40u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBEC0
  c->r[3]=c->r[1]+0x00000030u; // 801EBEC4
  {uint32_t ea=c->r[29]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EBEC8
  c->r[4]=0u+0x00000000u; // 801EBECC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EBED0
  c->lr=0x801EBED8u; f_8010541C(c); // 801EBED4
  c->r[6]=R32(c->r[27]+0x00000004u); // 801EBED8
  c->r[3]=c->r[1]+0x00000008u; // 801EBEDC
  c->r[4]=c->r[1]+0x00000030u; // 801EBEE0
  c->r[5]=R32(c->r[6]+0x00000000u); // 801EBEE4
  c->r[0]=R32(c->r[6]+0x00000004u); // 801EBEE8
  W32(c->r[1]+0x00000008u,c->r[5]); // 801EBEEC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EBEF0
  c->lr=0x801EBEF8u; f_800BCDAC(c); // 801EBEF4
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBEF8
  c->r[3]=c->r[1]+0x00000018u; // 801EBEFC
  {uint32_t ea=c->r[1]+0x00000094u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EBF00
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EBF04
  c->lr=0x801EBF0Cu; f_800521A0(c); // 801EBF08
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBF0C
  c->r[3]=c->r[29]+0x00000800u; // 801EBF10
  c->r[6]=R32(c->r[1]+0x00000018u); // 801EBF14
  c->r[4]=c->r[26]+0x00000349u; // 801EBF18
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 801EBF1C
  c->f[2]=c->f[1]; // 801EBF20
  c->r[0]=R32(c->r[1]+0x00000020u); // 801EBF24
  c->r[5]=c->r[1]+0x00000024u; // 801EBF28
  W32(c->r[1]+0x00000024u,c->r[6]); // 801EBF2C
  c->r[6]=0u+0x00000001u; // 801EBF30
  W32(c->r[1]+0x00000028u,c->r[7]); // 801EBF34
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801EBF38
  c->lr=0x801EBF40u; f_800C1BA0(c); // 801EBF3C
L_801EBF40:;
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EBF40
  c->r[3]=c->r[29]+c->r[28]; // 801EBF44
  c->r[3]=c->r[3]+0x00001F84u; // 801EBF48
  c->f[2]=c->f[1]; // 801EBF4C
  c->f[3]=c->f[1]; // 801EBF50
  c->lr=0x801EBF58u; f_80065358(c); // 801EBF54
  goto L_801EBF60; // 801EBF58
L_801EBF5C:;
  c->r[31]=0u+0x00000001u; // 801EBF5C
L_801EBF60:;
  c->r[30]=c->r[30]+0x00000001u; // 801EBF60
  c->r[28]=c->r[28]+0x000001A0u; // 801EBF64
  cmps(c,0,(int32_t)c->r[30],5); // 801EBF68
  if (crb(c,0)) { IRQCHK(c); goto L_801EBE30; } // 801EBF6C
  cmps(c,0,(int32_t)c->r[31],0); // 801EBF70
  if (!crb(c,2)) { goto L_801EBF80; } // 801EBF74
  c->r[3]=c->r[29]|c->r[29]; // 801EBF78
  c->lr=0x801EBF80u; f_801A6F34(c); // 801EBF7C
L_801EBF80:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 801EBF80
  c->r[11]=c->r[1]+0x000000E0u; // 801EBF84
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 801EBF88
  c->lr=0x801EBF90u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EBF8C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801EBF90
  c->lr=c->r[0]; // 801EBF94
  c->r[1]=c->r[1]+0x000000F0u; // 801EBF98
  return; // 801EBF9C
}

// fn_801EBFA0
void f_801EBFA0(Ctx* __restrict c) {
  trace_call(0x801EBFA0u);
  return; // 801EBFA0
}

// fn_801EBFA4
void f_801EBFA4(Ctx* __restrict c) {
  trace_call(0x801EBFA4u);
  c->r[0]=0u+0x00000000u; // 801EBFA4
  W8(c->r[3]+0x00002764u,c->r[0]); // 801EBFA8
  return; // 801EBFAC
}

// fn_801EBFB0
void f_801EBFB0(Ctx* __restrict c) {
  trace_call(0x801EBFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBFB0
  c->r[0]=c->lr; // 801EBFB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EBFB8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801EBFBC
  c->f[31]=c->f[1]; // 801EBFC0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EBFC4
  c->r[30]=c->r[3]|c->r[3]; // 801EBFC8
  c->r[31]=c->r[5]|c->r[5]; // 801EBFCC
  c->lr=0x801EBFD4u; f_800C1CF8(c); // 801EBFD0
  cmps(c,0,(int32_t)c->r[3],-1); // 801EBFD4
  if (crb(c,2)) { goto L_801EBFFC; } // 801EBFD8
  c->r[0]=rotl(c->r[3],0)&0xFFFFFEFFu; // 801EBFDC
  c->r[3]=0u+0x80460000u; // 801EBFE0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801EBFE4
  c->f[1]=c->f[31]; // 801EBFE8
  c->r[4]=R32(c->r[30]+c->r[0]); // 801EBFEC
  c->r[5]=c->r[31]|c->r[31]; // 801EBFF0
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 801EBFF4
  c->lr=0x801EBFFCu; f_8004B6C4(c); // 801EBFF8
L_801EBFFC:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801EBFFC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EC000
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC004
  c->lr=c->r[0]; // 801EC008
  c->r[1]=c->r[1]+0x00000020u; // 801EC00C
  return; // 801EC010
}

// fn_801EC014
void f_801EC014(Ctx* __restrict c) {
  trace_call(0x801EC014u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC014
  c->r[0]=c->lr; // 801EC018
  {uint32_t ea=c->r[2]+0xFFFFBF8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC01C
  c->r[3]=0u+0x80580000u; // 801EC020
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC024
  c->r[3]=c->r[3]+0xFFFFB7A0u; // 801EC028
  c->f[3]=c->f[1]; // 801EC02C
  {uint32_t ea=c->r[2]+0xFFFFBF94u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EC030
  c->lr=0x801EC038u; f_8003F588(c); // 801EC034
  c->r[3]=0u+0x80580000u; // 801EC038
  c->r[3]=c->r[3]+0xFFFFB7ACu; // 801EC03C
  c->lr=0x801EC044u; f_801AE334(c); // 801EC040
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC044
  c->lr=c->r[0]; // 801EC048
  c->r[1]=c->r[1]+0x00000010u; // 801EC04C
  return; // 801EC050
}

// fn_801EC054
void f_801EC054(Ctx* __restrict c) {
  trace_call(0x801EC054u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC054
  f_801E7E24(c); return; // 801EC058
}

// fn_801EC05C
void f_801EC05C(Ctx* __restrict c) {
  trace_call(0x801EC05Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC05C
  f_801EA184(c); return; // 801EC060
}

// fn_801EC064
void f_801EC064(Ctx* __restrict c) {
  trace_call(0x801EC064u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC064
  f_801E7F30(c); return; // 801EC068
}

// fn_801EC06C
void f_801EC06C(Ctx* __restrict c) {
  trace_call(0x801EC06Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC06C
  f_801E8D00(c); return; // 801EC070
}

// fn_801EC074
void f_801EC074(Ctx* __restrict c) {
  trace_call(0x801EC074u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC074
  f_801EA14C(c); return; // 801EC078
}

// fn_801EC07C
void f_801EC07C(Ctx* __restrict c) {
  trace_call(0x801EC07Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC07C
  f_801EA13C(c); return; // 801EC080
}

// fn_801EC084
void f_801EC084(Ctx* __restrict c) {
  trace_call(0x801EC084u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC084
  f_801E9D78(c); return; // 801EC088
}

// fn_801EC08C
void f_801EC08C(Ctx* __restrict c) {
  trace_call(0x801EC08Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC08C
  f_801E8D20(c); return; // 801EC090
}

// fn_801EC094
void f_801EC094(Ctx* __restrict c) {
  trace_call(0x801EC094u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC094
  f_801E8D10(c); return; // 801EC098
}

// fn_801EC09C
void f_801EC09C(Ctx* __restrict c) {
  trace_call(0x801EC09Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC09C
  f_801E7DD8(c); return; // 801EC0A0
}

// fn_801EC0A4
void f_801EC0A4(Ctx* __restrict c) {
  trace_call(0x801EC0A4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0A4
  f_801EA150(c); return; // 801EC0A8
}

// fn_801EC0AC
void f_801EC0AC(Ctx* __restrict c) {
  trace_call(0x801EC0ACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0AC
  f_801E7E28(c); return; // 801EC0B0
}

// fn_801EC0B4
void f_801EC0B4(Ctx* __restrict c) {
  trace_call(0x801EC0B4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0B4
  f_801E7F34(c); return; // 801EC0B8
}

// fn_801EC0BC
void f_801EC0BC(Ctx* __restrict c) {
  trace_call(0x801EC0BCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0BC
  f_801EA140(c); return; // 801EC0C0
}

// fn_801EC0C4
void f_801EC0C4(Ctx* __restrict c) {
  trace_call(0x801EC0C4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0C4
  f_801E9D7C(c); return; // 801EC0C8
}

// fn_801EC0CC
void f_801EC0CC(Ctx* __restrict c) {
  trace_call(0x801EC0CCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0CC
  f_801E8D94(c); return; // 801EC0D0
}

// fn_801EC0D4
void f_801EC0D4(Ctx* __restrict c) {
  trace_call(0x801EC0D4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0D4
  f_801E8D14(c); return; // 801EC0D8
}

// fn_801EC0DC
void f_801EC0DC(Ctx* __restrict c) {
  trace_call(0x801EC0DCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0DC
  f_801E8D04(c); return; // 801EC0E0
}

// fn_801EC0E4
void f_801EC0E4(Ctx* __restrict c) {
  trace_call(0x801EC0E4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0E4
  f_801E7624(c); return; // 801EC0E8
}

// fn_801EC0EC
void f_801EC0EC(Ctx* __restrict c) {
  trace_call(0x801EC0ECu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0EC
  f_801E7E20(c); return; // 801EC0F0
}

// fn_801EC0F4
void f_801EC0F4(Ctx* __restrict c) {
  trace_call(0x801EC0F4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0F4
  f_801EA180(c); return; // 801EC0F8
}

// fn_801EC0FC
void f_801EC0FC(Ctx* __restrict c) {
  trace_call(0x801EC0FCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC0FC
  f_801E7F2C(c); return; // 801EC100
}

// fn_801EC104
void f_801EC104(Ctx* __restrict c) {
  trace_call(0x801EC104u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC104
  f_801E8CFC(c); return; // 801EC108
}

// fn_801EC10C
void f_801EC10C(Ctx* __restrict c) {
  trace_call(0x801EC10Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC10C
  f_801EA148(c); return; // 801EC110
}

// fn_801EC114
void f_801EC114(Ctx* __restrict c) {
  trace_call(0x801EC114u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC114
  f_801EA138(c); return; // 801EC118
}

// fn_801EC11C
void f_801EC11C(Ctx* __restrict c) {
  trace_call(0x801EC11Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC11C
  f_801E9D74(c); return; // 801EC120
}

// fn_801EC124
void f_801EC124(Ctx* __restrict c) {
  trace_call(0x801EC124u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC124
  f_801E8D1C(c); return; // 801EC128
}

// fn_801EC12C
void f_801EC12C(Ctx* __restrict c) {
  trace_call(0x801EC12Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC12C
  f_801E8D0C(c); return; // 801EC130
}

// fn_801EC134
void f_801EC134(Ctx* __restrict c) {
  trace_call(0x801EC134u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC134
  f_801E7DE4(c); return; // 801EC138
}

// fn_801EC13C
void f_801EC13C(Ctx* __restrict c) {
  trace_call(0x801EC13Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC13C
  f_801EA17C(c); return; // 801EC140
}

// fn_801EC144
void f_801EC144(Ctx* __restrict c) {
  trace_call(0x801EC144u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC144
  f_801E7F18(c); return; // 801EC148
}

// fn_801EC14C
void f_801EC14C(Ctx* __restrict c) {
  trace_call(0x801EC14Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC14C
  f_801E8198(c); return; // 801EC150
}

// fn_801EC154
void f_801EC154(Ctx* __restrict c) {
  trace_call(0x801EC154u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC154
  f_801EA144(c); return; // 801EC158
}

// fn_801EC15C
void f_801EC15C(Ctx* __restrict c) {
  trace_call(0x801EC15Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC15C
  f_801E9E94(c); return; // 801EC160
}

// fn_801EC164
void f_801EC164(Ctx* __restrict c) {
  trace_call(0x801EC164u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC164
  f_801E93B8(c); return; // 801EC168
}

// fn_801EC16C
void f_801EC16C(Ctx* __restrict c) {
  trace_call(0x801EC16Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC16C
  f_801E8D18(c); return; // 801EC170
}

// fn_801EC174
void f_801EC174(Ctx* __restrict c) {
  trace_call(0x801EC174u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC174
  f_801E8D08(c); return; // 801EC178
}

// fn_801EC17C
void f_801EC17C(Ctx* __restrict c) {
  trace_call(0x801EC17Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC17C
  f_801EA31C(c); return; // 801EC180
}

// fn_801EC184
void f_801EC184(Ctx* __restrict c) {
  trace_call(0x801EC184u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC184
  f_801EA310(c); return; // 801EC188
}

// fn_801EC18C
void f_801EC18C(Ctx* __restrict c) {
  trace_call(0x801EC18Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC18C
  f_801EA23C(c); return; // 801EC190
}

// fn_801EC194
void f_801EC194(Ctx* __restrict c) {
  trace_call(0x801EC194u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC194
  f_801EA318(c); return; // 801EC198
}

// fn_801EC19C
void f_801EC19C(Ctx* __restrict c) {
  trace_call(0x801EC19Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC19C
  f_801EA314(c); return; // 801EC1A0
}

// fn_801EC1A4
void f_801EC1A4(Ctx* __restrict c) {
  trace_call(0x801EC1A4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1A4
  f_801EA508(c); return; // 801EC1A8
}

// fn_801EC1AC
void f_801EC1AC(Ctx* __restrict c) {
  trace_call(0x801EC1ACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1AC
  f_801EA518(c); return; // 801EC1B0
}

// fn_801EC1B4
void f_801EC1B4(Ctx* __restrict c) {
  trace_call(0x801EC1B4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1B4
  f_801EA674(c); return; // 801EC1B8
}

// fn_801EC1BC
void f_801EC1BC(Ctx* __restrict c) {
  trace_call(0x801EC1BCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1BC
  f_801EA4B4(c); return; // 801EC1C0
}

// fn_801EC1C4
void f_801EC1C4(Ctx* __restrict c) {
  trace_call(0x801EC1C4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1C4
  f_801EA50C(c); return; // 801EC1C8
}

// fn_801EC1CC
void f_801EC1CC(Ctx* __restrict c) {
  trace_call(0x801EC1CCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1CC
  f_801EA51C(c); return; // 801EC1D0
}

// fn_801EC1D4
void f_801EC1D4(Ctx* __restrict c) {
  trace_call(0x801EC1D4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1D4
  f_801EA458(c); return; // 801EC1D8
}

// fn_801EC1DC
void f_801EC1DC(Ctx* __restrict c) {
  trace_call(0x801EC1DCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1DC
  f_801EA504(c); return; // 801EC1E0
}

// fn_801EC1E4
void f_801EC1E4(Ctx* __restrict c) {
  trace_call(0x801EC1E4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1E4
  f_801EA514(c); return; // 801EC1E8
}

// fn_801EC1EC
void f_801EC1EC(Ctx* __restrict c) {
  trace_call(0x801EC1ECu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1EC
  f_801EA670(c); return; // 801EC1F0
}

// fn_801EC1F4
void f_801EC1F4(Ctx* __restrict c) {
  trace_call(0x801EC1F4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1F4
  f_801EA500(c); return; // 801EC1F8
}

// fn_801EC1FC
void f_801EC1FC(Ctx* __restrict c) {
  trace_call(0x801EC1FCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC1FC
  f_801EA510(c); return; // 801EC200
}

// fn_801EC204
void f_801EC204(Ctx* __restrict c) {
  trace_call(0x801EC204u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC204
  f_801EA528(c); return; // 801EC208
}

// fn_801EC20C
void f_801EC20C(Ctx* __restrict c) {
  trace_call(0x801EC20Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC20C
  f_801EB27C(c); return; // 801EC210
}

// fn_801EC214
void f_801EC214(Ctx* __restrict c) {
  trace_call(0x801EC214u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC214
  f_801EAAF0(c); return; // 801EC218
}

// fn_801EC21C
void f_801EC21C(Ctx* __restrict c) {
  trace_call(0x801EC21Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC21C
  f_801EAE70(c); return; // 801EC220
}

// fn_801EC224
void f_801EC224(Ctx* __restrict c) {
  trace_call(0x801EC224u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC224
  f_801EAEC4(c); return; // 801EC228
}

// fn_801EC22C
void f_801EC22C(Ctx* __restrict c) {
  trace_call(0x801EC22Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC22C
  f_801EAADC(c); return; // 801EC230
}

// fn_801EC234
void f_801EC234(Ctx* __restrict c) {
  trace_call(0x801EC234u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC234
  f_801EAAF4(c); return; // 801EC238
}

// fn_801EC23C
void f_801EC23C(Ctx* __restrict c) {
  trace_call(0x801EC23Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC23C
  f_801EA8F4(c); return; // 801EC240
}

// fn_801EC244
void f_801EC244(Ctx* __restrict c) {
  trace_call(0x801EC244u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC244
  f_801EB278(c); return; // 801EC248
}

// fn_801EC24C
void f_801EC24C(Ctx* __restrict c) {
  trace_call(0x801EC24Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC24C
  f_801EAAEC(c); return; // 801EC250
}

// fn_801EC254
void f_801EC254(Ctx* __restrict c) {
  trace_call(0x801EC254u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC254
  f_801EAE6C(c); return; // 801EC258
}

// fn_801EC25C
void f_801EC25C(Ctx* __restrict c) {
  trace_call(0x801EC25Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC25C
  f_801EB274(c); return; // 801EC260
}

// fn_801EC264
void f_801EC264(Ctx* __restrict c) {
  trace_call(0x801EC264u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC264
  f_801EAAE8(c); return; // 801EC268
}

// fn_801EC26C
void f_801EC26C(Ctx* __restrict c) {
  trace_call(0x801EC26Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC26C
  f_801EAD40(c); return; // 801EC270
}

// fn_801EC274
void f_801EC274(Ctx* __restrict c) {
  trace_call(0x801EC274u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC274
  f_801EBDCC(c); return; // 801EC278
}

// fn_801EC27C
void f_801EC27C(Ctx* __restrict c) {
  trace_call(0x801EC27Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC27C
  f_801EBDE4(c); return; // 801EC280
}

// fn_801EC284
void f_801EC284(Ctx* __restrict c) {
  trace_call(0x801EC284u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC284
  f_801EBFA4(c); return; // 801EC288
}

// fn_801EC28C
void f_801EC28C(Ctx* __restrict c) {
  trace_call(0x801EC28Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC28C
  f_801EBDB8(c); return; // 801EC290
}

// fn_801EC294
void f_801EC294(Ctx* __restrict c) {
  trace_call(0x801EC294u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC294
  f_801EBDD0(c); return; // 801EC298
}

// fn_801EC29C
void f_801EC29C(Ctx* __restrict c) {
  trace_call(0x801EC29Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC29C
  f_801EBDE8(c); return; // 801EC2A0
}

// fn_801EC2A4
void f_801EC2A4(Ctx* __restrict c) {
  trace_call(0x801EC2A4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC2A4
  f_801EB680(c); return; // 801EC2A8
}

// fn_801EC2AC
void f_801EC2AC(Ctx* __restrict c) {
  trace_call(0x801EC2ACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC2AC
  f_801EBDC8(c); return; // 801EC2B0
}

// fn_801EC2B4
void f_801EC2B4(Ctx* __restrict c) {
  trace_call(0x801EC2B4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC2B4
  f_801EBDE0(c); return; // 801EC2B8
}

// fn_801EC2BC
void f_801EC2BC(Ctx* __restrict c) {
  trace_call(0x801EC2BCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC2BC
  f_801EBFA0(c); return; // 801EC2C0
}

// fn_801EC2C4
void f_801EC2C4(Ctx* __restrict c) {
  trace_call(0x801EC2C4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC2C4
  f_801EBDC4(c); return; // 801EC2C8
}

// fn_801EC2CC
void f_801EC2CC(Ctx* __restrict c) {
  trace_call(0x801EC2CCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC2CC
  f_801EBDDC(c); return; // 801EC2D0
}

// fn_801EC2D4
void f_801EC2D4(Ctx* __restrict c) {
  trace_call(0x801EC2D4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EC2D4
  f_801EBDF4(c); return; // 801EC2D8
}

// fn_801EC2DC
void f_801EC2DC(Ctx* __restrict c) {
  trace_call(0x801EC2DCu);
  c->r[4]=0u+0x80400000u; // 801EC2DC
  c->r[0]=0u+0x00000000u; // 801EC2E0
  c->r[4]=c->r[4]+0x00007918u; // 801EC2E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EC2E8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801EC2EC
  return; // 801EC2F0
}

// fn_801EC2F4
void f_801EC2F4(Ctx* __restrict c) {
  trace_call(0x801EC2F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC2F4
  c->r[0]=c->lr; // 801EC2F8
  cmps(c,0,(int32_t)c->r[3],0); // 801EC2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC300
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC304
  c->r[31]=c->r[3]|c->r[3]; // 801EC308
  if (crb(c,2)) { goto L_801EC31C; } // 801EC30C
  cmps(c,0,(int32_t)c->r[4],0); // 801EC310
  if (!crb(c,1)) { goto L_801EC31C; } // 801EC314
  c->lr=0x801EC31Cu; f_802896EC(c); // 801EC318
L_801EC31C:;
  c->r[3]=c->r[31]|c->r[31]; // 801EC31C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC320
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC324
  c->lr=c->r[0]; // 801EC328
  c->r[1]=c->r[1]+0x00000010u; // 801EC32C
  return; // 801EC330
}

// fn_801EC334
void f_801EC334(Ctx* __restrict c) {
  trace_call(0x801EC334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC334
  c->r[0]=c->lr; // 801EC338
  cmps(c,0,(int32_t)c->r[4],0); // 801EC33C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC340
  c->r[0]=0u+0x00000000u; // 801EC344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC348
  c->r[31]=c->r[4]|c->r[4]; // 801EC34C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EC350
  c->r[30]=c->r[3]|c->r[3]; // 801EC354
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EC358
  if (!crb(c,2)) { goto L_801EC368; } // 801EC35C
  c->r[3]=0u+0x00000000u; // 801EC360
  goto L_801EC394; // 801EC364
L_801EC368:;
  c->r[4]=0u+0x803E0000u; // 801EC368
  c->r[3]=c->r[31]|c->r[31]; // 801EC36C
  c->r[4]=c->r[4]+0x00001528u; // 801EC370
  c->r[5]=0u+0x00000004u; // 801EC374
  c->lr=0x801EC37Cu; f_80293670(c); // 801EC378
  cmps(c,0,(int32_t)c->r[3],0); // 801EC37C
  if (crb(c,2)) { goto L_801EC38C; } // 801EC380
  c->r[3]=0u+0x00000000u; // 801EC384
  goto L_801EC394; // 801EC388
L_801EC38C:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 801EC38C
  c->r[3]=0u+0x00000001u; // 801EC390
L_801EC394:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC398
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EC39C
  c->lr=c->r[0]; // 801EC3A0
  c->r[1]=c->r[1]+0x00000010u; // 801EC3A4
  return; // 801EC3A8
}

// fn_801EC3AC
void f_801EC3AC(Ctx* __restrict c) {
  trace_call(0x801EC3ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC3AC
  c->r[0]=c->lr; // 801EC3B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC3B4
  c->r[11]=c->r[1]+0x00000020u; // 801EC3B8
  c->lr=0x801EC3C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC3BC
  c->r[7]=R32(c->r[3]+0x00000004u); // 801EC3C0
  c->r[31]=c->r[5]|c->r[5]; // 801EC3C4
  cmps(c,0,(int32_t)c->r[7],0); // 801EC3C8
  if (!crb(c,2)) { goto L_801EC3D8; } // 801EC3CC
  c->r[3]=0u+0x00000000u; // 801EC3D0
  goto L_801EC524; // 801EC3D4
L_801EC3D8:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801EC3D8
  c->r[11]=R32(c->r[7]+0x00000008u); // 801EC3DC
  cmps(c,0,(int32_t)c->r[0],0); // 801EC3E0
  if (crb(c,2)) { goto L_801EC3F0; } // 801EC3E4
  c->r[9]=c->r[7]+c->r[0]; // 801EC3E8
  goto L_801EC3F4; // 801EC3EC
L_801EC3F0:;
  c->r[9]=0u+0x00000000u; // 801EC3F0
L_801EC3F4:;
  c->r[10]=0u+0x00000000u; // 801EC3F4
  goto L_801EC45C; // 801EC3F8
L_801EC3FC:;
  c->r[6]=c->r[10]+c->r[11]; // 801EC3FC
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFCu; // 801EC400
  c->r[8]=R32(c->r[9]+c->r[0]); // 801EC404
  c->r[12]=sraw(c,c->r[6],1); // 801EC408
  cmps(c,0,(int32_t)c->r[8],0); // 801EC40C
  if (crb(c,2)) { goto L_801EC420; } // 801EC410
  c->r[0]=R32(c->r[3]+0x00000004u); // 801EC414
  c->r[6]=c->r[0]+c->r[8]; // 801EC418
  goto L_801EC424; // 801EC41C
L_801EC420:;
  c->r[6]=0u+0x00000000u; // 801EC420
L_801EC424:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801EC424
  cmpu(c,0,c->r[0],c->r[4]); // 801EC428
  if (crb(c,1)) { goto L_801EC434; } // 801EC42C
  c->r[10]=c->r[12]+0x00000001u; // 801EC430
L_801EC434:;
  cmps(c,0,(int32_t)c->r[8],0); // 801EC434
  if (crb(c,2)) { goto L_801EC448; } // 801EC438
  c->r[0]=R32(c->r[3]+0x00000004u); // 801EC43C
  c->r[6]=c->r[0]+c->r[8]; // 801EC440
  goto L_801EC44C; // 801EC444
L_801EC448:;
  c->r[6]=0u+0x00000000u; // 801EC448
L_801EC44C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801EC44C
  cmpu(c,0,c->r[0],c->r[4]); // 801EC450
  if (!crb(c,1)) { goto L_801EC45C; } // 801EC454
  c->r[11]=c->r[12]|c->r[12]; // 801EC458
L_801EC45C:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[11]); // 801EC45C
  if (crb(c,0)) { IRQCHK(c); goto L_801EC3FC; } // 801EC460
  c->r[0]=addc(c,c->r[10],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801EC464
  if (!crb(c,0)) { goto L_801EC470; } // 801EC468
  c->r[0]=0u+0x00000000u; // 801EC46C
L_801EC470:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EC470
  c->r[0]=R32(c->r[9]+c->r[0]); // 801EC474
  cmps(c,0,(int32_t)c->r[0],0); // 801EC478
  if (crb(c,2)) { goto L_801EC488; } // 801EC47C
  c->r[29]=c->r[7]+c->r[0]; // 801EC480
  goto L_801EC48C; // 801EC484
L_801EC488:;
  c->r[29]=0u+0x00000000u; // 801EC488
L_801EC48C:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801EC48C
  cmps(c,0,(int32_t)c->r[0],0); // 801EC490
  if (crb(c,2)) { goto L_801EC4A0; } // 801EC494
  c->r[0]=c->r[7]+c->r[0]; // 801EC498
  goto L_801EC4A4; // 801EC49C
L_801EC4A0:;
  c->r[0]=0u+0x00000000u; // 801EC4A0
L_801EC4A4:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 801EC4A4
  c->r[0]=0u+0x00000010u; // 801EC4A8
  c->r[4]=R32(c->r[29]+0x00000008u); // 801EC4AC
  cmpu(c,0,c->r[4],0x00000010u); // 801EC4B0
  if (crb(c,1)) { goto L_801EC4BC; } // 801EC4B4
  c->r[0]=c->r[4]|c->r[4]; // 801EC4B8
L_801EC4BC:;
  W32(c->r[5]+0x00000004u,c->r[0]); // 801EC4BC
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801EC4C0
  cmps(c,0,(int32_t)c->r[4],0); // 801EC4C4
  if (crb(c,2)) { goto L_801EC4D8; } // 801EC4C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801EC4CC
  c->r[28]=c->r[0]+c->r[4]; // 801EC4D0
  goto L_801EC4DC; // 801EC4D4
L_801EC4D8:;
  c->r[28]=0u+0x00000000u; // 801EC4D8
L_801EC4DC:;
  c->r[30]=c->r[31]|c->r[31]; // 801EC4DC
  c->r[27]=0u+0x00000000u; // 801EC4E0
  goto L_801EC504; // 801EC4E4
L_801EC4E8:;
  W32(c->r[30]+0x00000008u,c->r[28]); // 801EC4E8
  c->r[3]=c->r[28]|c->r[28]; // 801EC4EC
  c->lr=0x801EC4F4u; f_802894C0(c); // 801EC4F0
  c->r[3]=c->r[3]+c->r[28]; // 801EC4F4
  c->r[30]=c->r[30]+0x00000004u; // 801EC4F8
  c->r[28]=c->r[3]+0x00000001u; // 801EC4FC
  c->r[27]=c->r[27]+0x00000001u; // 801EC500
L_801EC504:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801EC504
  cmpu(c,0,c->r[27],c->r[0]); // 801EC508
  if (!crb(c,0)) { goto L_801EC518; } // 801EC50C
  cmpu(c,0,c->r[27],0x00000010u); // 801EC510
  if (crb(c,0)) { IRQCHK(c); goto L_801EC4E8; } // 801EC514
L_801EC518:;
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC518
  c->r[3]=0u+0x00000001u; // 801EC51C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 801EC520
L_801EC524:;
  c->r[11]=c->r[1]+0x00000020u; // 801EC524
  c->lr=0x801EC52Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC528
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC52C
  c->lr=c->r[0]; // 801EC530
  c->r[1]=c->r[1]+0x00000020u; // 801EC534
  return; // 801EC538
}

// fn_801EC53C
void f_801EC53C(Ctx* __restrict c) {
  trace_call(0x801EC53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC53C
  c->r[0]=c->lr; // 801EC540
  c->r[6]=0u+0x80400000u; // 801EC544
  c->r[4]=0u+0x801F0000u; // 801EC548
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC54C
  c->r[5]=0u+0x801F0000u; // 801EC550
  c->r[6]=c->r[6]+0x00007928u; // 801EC554
  c->r[4]=c->r[4]+0xFFFFC59Cu; // 801EC558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC55C
  c->r[31]=c->r[3]|c->r[3]; // 801EC560
  c->r[5]=c->r[5]+0xFFFFC5CCu; // 801EC564
  c->r[7]=0u+0x00000002u; // 801EC568
  W32(c->r[3]+0x00000000u,c->r[6]); // 801EC56C
  c->r[6]=0u+0x00000E10u; // 801EC570
  c->r[3]=c->r[3]+0x00000004u; // 801EC574
  c->lr=0x801EC57Cu; f_80289B34(c); // 801EC578
  c->r[3]=c->r[31]|c->r[31]; // 801EC57C
  c->lr=0x801EC584u; f_801EC904(c); // 801EC580
  c->r[3]=c->r[31]|c->r[31]; // 801EC584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC588
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC58C
  c->lr=c->r[0]; // 801EC590
  c->r[1]=c->r[1]+0x00000010u; // 801EC594
  return; // 801EC598
}

// fn_801EC59C
void f_801EC59C(Ctx* __restrict c) {
  trace_call(0x801EC59Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC59C
  c->r[0]=c->lr; // 801EC5A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC5A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC5A8
  c->r[31]=c->r[3]|c->r[3]; // 801EC5AC
  c->lr=0x801EC5B4u; f_800462E8(c); // 801EC5B0
  c->r[3]=c->r[31]|c->r[31]; // 801EC5B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC5B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC5BC
  c->lr=c->r[0]; // 801EC5C0
  c->r[1]=c->r[1]+0x00000010u; // 801EC5C4
  return; // 801EC5C8
}

// fn_801EC5CC
void f_801EC5CC(Ctx* __restrict c) {
  trace_call(0x801EC5CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC5CC
  c->r[0]=c->lr; // 801EC5D0
  cmps(c,0,(int32_t)c->r[3],0); // 801EC5D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC5D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EC5DC
  c->r[30]=c->r[3]|c->r[3]; // 801EC5E0
  c->r[31]=c->r[4]|c->r[4]; // 801EC5E4
  if (crb(c,2)) { goto L_801EC604; } // 801EC5E8
  c->r[4]=0u+0xFFFFFFFFu; // 801EC5EC
  c->lr=0x801EC5F4u; f_80046394(c); // 801EC5F0
  cmps(c,0,(int32_t)c->r[31],0); // 801EC5F4
  if (!crb(c,1)) { goto L_801EC604; } // 801EC5F8
  c->r[3]=c->r[30]|c->r[30]; // 801EC5FC
  c->lr=0x801EC604u; f_802896EC(c); // 801EC600
L_801EC604:;
  c->r[3]=c->r[30]|c->r[30]; // 801EC604
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EC608
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC60C
  c->lr=c->r[0]; // 801EC610
  c->r[1]=c->r[1]+0x00000010u; // 801EC614
  return; // 801EC618
}

// dtor_801EC61C
void f_801EC61C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC61C
  c->r[0]=c->lr; // 801EC620
  cmps(c,0,(int32_t)c->r[3],0); // 801EC624
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC628
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EC62C
  c->r[30]=c->r[3]|c->r[3]; // 801EC630
  c->r[31]=c->r[4]|c->r[4]; // 801EC634
  if (crb(c,2)) { goto L_801EC664; } // 801EC638
  c->r[4]=0u+0x801F0000u; // 801EC63C
  c->r[5]=0u+0x00000E10u; // 801EC640
  c->r[4]=c->r[4]+0xFFFFC5CCu; // 801EC644
  c->r[6]=0u+0x00000002u; // 801EC648
  c->r[3]=c->r[3]+0x00000004u; // 801EC64C
  c->lr=0x801EC654u; f_80289C2C(c); // 801EC650
  cmps(c,0,(int32_t)c->r[31],0); // 801EC654
  if (!crb(c,1)) { goto L_801EC664; } // 801EC658
  c->r[3]=c->r[30]|c->r[30]; // 801EC65C
  c->lr=0x801EC664u; f_802896EC(c); // 801EC660
L_801EC664:;
  c->r[3]=c->r[30]|c->r[30]; // 801EC664
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EC668
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC66C
  c->lr=c->r[0]; // 801EC670
  c->r[1]=c->r[1]+0x00000010u; // 801EC674
  return; // 801EC678
}

// fn_801EC67C
void f_801EC67C(Ctx* __restrict c) {
  trace_call(0x801EC67Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC67C
  c->r[0]=c->lr; // 801EC680
  W32(c->r[1]+0x00000074u,c->r[0]); // 801EC684
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801EC688
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801EC68C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801EC690
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801EC694
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801EC698
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801EC69C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 801EC6A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 801EC6A4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[27]);} // 801EC6A8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,27,ea,0,0);} // 801EC6AC
  c->r[11]=c->r[1]+0x00000020u; // 801EC6B0
  c->lr=0x801EC6B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC6B4
  c->r[30]=0u+0x804D0000u; // 801EC6B8
  {uint32_t ea=c->r[2]+0xFFFFC144u; c->f[27]=c->ps1[27]=RF32(ea);} // 801EC6BC
  {uint32_t ea=c->r[2]+0xFFFFC14Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801EC6C0
  c->r[27]=c->r[3]|c->r[3]; // 801EC6C4
  {uint32_t ea=c->r[2]+0xFFFFC150u; c->f[31]=c->ps1[31]=RF32(ea);} // 801EC6C8
  c->r[30]=c->r[30]+0x00003318u; // 801EC6CC
  {uint32_t ea=c->r[2]+0xFFFFC148u; c->f[28]=c->ps1[28]=RF32(ea);} // 801EC6D0
  c->r[28]=0u+0x00000000u; // 801EC6D4
  {uint32_t ea=c->r[2]+0xFFFFC140u; c->f[29]=c->ps1[29]=RF32(ea);} // 801EC6D8
  c->r[31]=0u+0x00000000u; // 801EC6DC
L_801EC6E0:;
  c->r[29]=c->r[27]+c->r[31]; // 801EC6E0
  {uint32_t ea=c->r[29]+0x00000E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC6E4
  fcmp(c,0,c->f[0],c->f[29]); // 801EC6E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EC6EC
  if (!crb(c,2)) { goto L_801EC76C; } // 801EC6F0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC6F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801EC6F8
  fcmp(c,0,c->f[0],c->f[29]); // 801EC6FC
  {uint32_t ea=c->r[29]+0x00000E08u; WF32(ea,c->f[0]);} // 801EC700
  if (!crb(c,0)) { goto L_801EC76C; } // 801EC704
  {uint32_t ea=c->r[29]+0x00000E0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC708
  c->r[4]=c->r[29]+0x00000004u; // 801EC70C
  c->r[3]=c->r[13]+0xFFFF9720u; // 801EC710
  c->r[5]=0u+0x00000002u; // 801EC714
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 801EC718
  {uint32_t ea=c->r[29]+0x00000E08u; WF32(ea,c->f[0]);} // 801EC71C
  {uint32_t ea=c->r[29]+0x00000E0Cu; WF32(ea,c->f[0]);} // 801EC720
  {uint32_t ea=c->r[29]+0x00000E10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC724
  c->lr=0x801EC72Cu; f_801C7D3C(c); // 801EC728
  {uint32_t ea=c->r[29]+0x00000E10u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC72C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 801EC730
  {uint32_t ea=c->r[29]+0x00000E10u; WF32(ea,c->f[0]);} // 801EC734
  {uint32_t ea=c->r[29]+0x00000E08u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC738
  fcmp(c,0,c->f[0],c->f[29]); // 801EC73C
  if (!crb(c,0)) { goto L_801EC76C; } // 801EC740
  c->f[1]=c->f[29]; // 801EC744
  c->r[3]=c->r[29]|c->r[29]; // 801EC748
  c->f[2]=c->f[29]; // 801EC74C
  c->r[3]=c->r[3]+0x00000DFCu; // 801EC750
  c->f[3]=c->f[29]; // 801EC754
  c->lr=0x801EC75Cu; f_80065358(c); // 801EC758
  c->f[0]=c->ps1[0]=S(c->f[30]); // 801EC75C
  {uint32_t ea=c->r[29]+0x00000E08u; WF32(ea,c->f[30]);} // 801EC760
  {uint32_t ea=c->r[29]+0x00000E0Cu; WF32(ea,c->f[0]);} // 801EC764
  {uint32_t ea=c->r[29]+0x00000E10u; WF32(ea,c->f[31]);} // 801EC768
L_801EC76C:;
  c->r[28]=c->r[28]+0x00000001u; // 801EC76C
  c->r[31]=c->r[31]+0x00000E10u; // 801EC770
  cmps(c,0,(int32_t)c->r[28],2); // 801EC774
  if (crb(c,0)) { IRQCHK(c); goto L_801EC6E0; } // 801EC778
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801EC77C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801EC780
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801EC784
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801EC788
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801EC78C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801EC790
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801EC794
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801EC798
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,27,ea,0,0);} // 801EC79C
  c->r[11]=c->r[1]+0x00000020u; // 801EC7A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[27]=RF64(ea);} // 801EC7A4
  c->lr=0x801EC7ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC7A8
  c->r[0]=R32(c->r[1]+0x00000074u); // 801EC7AC
  c->lr=c->r[0]; // 801EC7B0
  c->r[1]=c->r[1]+0x00000070u; // 801EC7B4
  return; // 801EC7B8
}

// fn_801EC7BC
void f_801EC7BC(Ctx* __restrict c) {
  trace_call(0x801EC7BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC7BC
  c->r[0]=c->lr; // 801EC7C0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EC7C4
  c->r[11]=c->r[1]+0x00000050u; // 801EC7C8
  c->lr=0x801EC7D0u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC7CC
  c->r[6]=0u+0x80440000u; // 801EC7D0
  c->r[30]=c->r[3]|c->r[3]; // 801EC7D4
  c->r[6]=c->r[6]+0xFFFFA720u; // 801EC7D8
  c->r[28]=c->r[4]|c->r[4]; // 801EC7DC
  c->r[3]=R32(c->r[6]+0x00000004u); // 801EC7E0
  c->r[29]=c->r[5]|c->r[5]; // 801EC7E4
  c->lr=0x801EC7ECu; f_80381A54(c); // 801EC7E8
  W32(c->r[1]+0x00000010u,c->r[3]); // 801EC7EC
  c->r[3]=c->r[1]+0x00000010u; // 801EC7F0
  c->r[4]=c->r[1]+0x00000020u; // 801EC7F4
  c->lr=0x801EC7FCu; f_8037CE54(c); // 801EC7F8
  c->r[3]=c->r[1]+0x00000014u; // 801EC7FC
  c->r[4]=c->r[1]+0x00000020u; // 801EC800
  c->lr=0x801EC808u; f_8003F468(c); // 801EC804
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC808
  c->r[31]=0u+0x00000000u; // 801EC80C
  {uint32_t ea=c->r[2]+0xFFFFC154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC810
  c->r[3]=c->r[28]|c->r[28]; // 801EC814
  c->r[4]=c->r[1]+0x00000020u; // 801EC818
  c->r[5]=c->r[1]+0x00000014u; // 801EC81C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801EC820
  c->r[6]=0u+0x00000001u; // 801EC824
  c->r[7]=0u+0x00000000u; // 801EC828
  c->r[8]=0u+0x00000000u; // 801EC82C
  c->r[9]=0u+0x00000000u; // 801EC830
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801EC834
  W32(c->r[1]+0x00000008u,c->r[31]); // 801EC838
  c->r[0]=R32(c->r[30]+0x00001C24u); // 801EC83C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3600); // 801EC840
  c->r[10]=c->r[30]+c->r[0]; // 801EC844
  c->r[10]=c->r[10]+0x00000004u; // 801EC848
  c->lr=0x801EC850u; f_801C7800(c); // 801EC84C
  cmps(c,0,(int32_t)c->r[3],1); // 801EC850
  if (!crb(c,2)) { goto L_801EC8EC; } // 801EC854
  c->r[0]=R32(c->r[30]+0x00001C24u); // 801EC858
  c->r[4]=c->r[29]|c->r[29]; // 801EC85C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3600); // 801EC860
  c->r[3]=c->r[30]+c->r[0]; // 801EC864
  c->r[3]=c->r[3]+0x00000DFCu; // 801EC868
  c->lr=0x801EC870u; f_8003F468(c); // 801EC86C
  c->lr=0x801EC874u; f_80291D94(c); // 801EC870
  c->r[0]=c->r[3]^0x80000000u; // 801EC874
  c->r[3]=0u+0x43300000u; // 801EC878
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EC87C
  c->r[0]=R32(c->r[30]+0x00001C24u); // 801EC880
  W32(c->r[1]+0x00000030u,c->r[3]); // 801EC884
  {uint32_t ea=c->r[2]+0xFFFFC160u; c->f[1]=RF64(ea);} // 801EC888
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3600); // 801EC88C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801EC890
  {uint32_t ea=c->r[2]+0xFFFFC15Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EC894
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801EC898
  {uint32_t ea=c->r[2]+0xFFFFC158u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC89C
  c->r[3]=c->r[30]+c->r[0]; // 801EC8A0
  {uint32_t ea=c->r[2]+0xFFFFC150u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC8A4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 801EC8A8
  {uint32_t ea=c->r[3]+0x00000E08u; WF32(ea,c->f[1]);} // 801EC8AC
  c->r[0]=R32(c->r[30]+0x00001C24u); // 801EC8B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3600); // 801EC8B4
  c->r[3]=c->r[30]+c->r[0]; // 801EC8B8
  {uint32_t ea=c->r[3]+0x00000E08u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC8BC
  {uint32_t ea=c->r[3]+0x00000E0Cu; WF32(ea,c->f[1]);} // 801EC8C0
  c->r[0]=R32(c->r[30]+0x00001C24u); // 801EC8C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3600); // 801EC8C8
  c->r[3]=c->r[30]+c->r[0]; // 801EC8CC
  {uint32_t ea=c->r[3]+0x00000E10u; WF32(ea,c->f[0]);} // 801EC8D0
  c->r[3]=R32(c->r[30]+0x00001C24u); // 801EC8D4
  c->r[0]=c->r[3]+0x00000001u; // 801EC8D8
  cmps(c,0,(int32_t)c->r[0],2); // 801EC8DC
  W32(c->r[30]+0x00001C24u,c->r[0]); // 801EC8E0
  if (crb(c,0)) { goto L_801EC8EC; } // 801EC8E4
  W32(c->r[30]+0x00001C24u,c->r[31]); // 801EC8E8
L_801EC8EC:;
  c->r[11]=c->r[1]+0x00000050u; // 801EC8EC
  c->lr=0x801EC8F4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC8F0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801EC8F4
  c->lr=c->r[0]; // 801EC8F8
  c->r[1]=c->r[1]+0x00000050u; // 801EC8FC
  return; // 801EC900
}

// fn_801EC904
void f_801EC904(Ctx* __restrict c) {
  trace_call(0x801EC904u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC904
  c->r[0]=c->lr; // 801EC908
  W32(c->r[1]+0x00000044u,c->r[0]); // 801EC90C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801EC910
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801EC914
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801EC918
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801EC91C
  c->r[11]=c->r[1]+0x00000020u; // 801EC920
  c->lr=0x801EC928u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC924
  {uint32_t ea=c->r[2]+0xFFFFC14Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801EC928
  c->r[29]=c->r[3]|c->r[3]; // 801EC92C
  {uint32_t ea=c->r[2]+0xFFFFC150u; c->f[31]=c->ps1[31]=RF32(ea);} // 801EC930
  c->r[30]=0u+0x00000000u; // 801EC934
  c->r[31]=0u+0x00000000u; // 801EC938
L_801EC93C:;
  {uint32_t ea=c->r[2]+0xFFFFC140u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC93C
  c->r[3]=c->r[29]+c->r[31]; // 801EC940
  c->r[3]=c->r[3]+0x00000DFCu; // 801EC944
  c->f[2]=c->f[1]; // 801EC948
  c->f[3]=c->f[1]; // 801EC94C
  c->lr=0x801EC954u; f_80065358(c); // 801EC950
  c->r[3]=c->r[29]+c->r[31]; // 801EC954
  c->r[30]=c->r[30]+0x00000001u; // 801EC958
  {uint32_t ea=c->r[3]+0x00000E08u; WF32(ea,c->f[30]);} // 801EC95C
  cmps(c,0,(int32_t)c->r[30],2); // 801EC960
  c->r[31]=c->r[31]+0x00000E10u; // 801EC964
  {uint32_t ea=c->r[3]+0x00000E0Cu; WF32(ea,c->f[30]);} // 801EC968
  {uint32_t ea=c->r[3]+0x00000E10u; WF32(ea,c->f[31]);} // 801EC96C
  if (crb(c,0)) { IRQCHK(c); goto L_801EC93C; } // 801EC970
  c->r[0]=0u+0x00000000u; // 801EC974
  W32(c->r[29]+0x00001C24u,c->r[0]); // 801EC978
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801EC97C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801EC980
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801EC984
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801EC988
  c->r[11]=c->r[1]+0x00000020u; // 801EC98C
  c->lr=0x801EC994u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC990
  c->r[0]=R32(c->r[1]+0x00000044u); // 801EC994
  c->lr=c->r[0]; // 801EC998
  c->r[1]=c->r[1]+0x00000040u; // 801EC99C
  return; // 801EC9A0
}

// fn_801EC9A4
void f_801EC9A4(Ctx* __restrict c) {
  trace_call(0x801EC9A4u);
  {uint32_t ea=c->r[2]+0xFFFFC140u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC9A4
  c->r[3]=0u+0x80580000u; // 801EC9A8
  {uint32_t ea=c->r[2]+0xFFFFC150u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EC9AC
  c->r[3]=c->r[3]+0xFFFFB9F0u; // 801EC9B0
  c->f[3]=c->f[1]; // 801EC9B4
  f_8003F588(c); return; // 801EC9B8
}

// fn_801EC9BC
void f_801EC9BC(Ctx* __restrict c) {
  trace_call(0x801EC9BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC9BC
  c->r[0]=c->lr; // 801EC9C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC9C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC9C8
  c->r[31]=c->r[3]|c->r[3]; // 801EC9CC
  c->lr=0x801EC9D4u; f_801AFA04(c); // 801EC9D0
  c->r[4]=0u+0x80400000u; // 801EC9D4
  c->r[3]=c->r[31]+0x0000254Cu; // 801EC9D8
  c->r[4]=c->r[4]+0x000079FCu; // 801EC9DC
  c->r[0]=c->r[4]+0x00000040u; // 801EC9E0
  W32(c->r[31]+0x00000010u,c->r[4]); // 801EC9E4
  W32(c->r[31]+0x00000048u,c->r[0]); // 801EC9E8
  c->lr=0x801EC9F0u; f_801ABEE0(c); // 801EC9EC
  c->r[0]=0u+0x00000001u; // 801EC9F0
  c->r[3]=c->r[31]|c->r[31]; // 801EC9F4
  W8(c->r[31]+0x00002554u,c->r[0]); // 801EC9F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC9FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECA00
  c->lr=c->r[0]; // 801ECA04
  c->r[1]=c->r[1]+0x00000010u; // 801ECA08
  return; // 801ECA0C
}

// fn_801ECA10
void f_801ECA10(Ctx* __restrict c) {
  trace_call(0x801ECA10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECA10
  c->r[0]=c->lr; // 801ECA14
  cmps(c,0,(int32_t)c->r[3],0); // 801ECA18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECA1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801ECA20
  c->r[30]=c->r[3]|c->r[3]; // 801ECA24
  c->r[31]=c->r[4]|c->r[4]; // 801ECA28
  if (crb(c,2)) { goto L_801ECA48; } // 801ECA2C
  c->r[4]=0u+0x00000000u; // 801ECA30
  c->lr=0x801ECA38u; f_80185EBC(c); // 801ECA34
  cmps(c,0,(int32_t)c->r[31],0); // 801ECA38
  if (!crb(c,1)) { goto L_801ECA48; } // 801ECA3C
  c->r[3]=c->r[30]|c->r[30]; // 801ECA40
  c->lr=0x801ECA48u; f_802896EC(c); // 801ECA44
L_801ECA48:;
  c->r[3]=c->r[30]|c->r[30]; // 801ECA48
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801ECA4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECA50
  c->lr=c->r[0]; // 801ECA54
  c->r[1]=c->r[1]+0x00000010u; // 801ECA58
  return; // 801ECA5C
}

// fn_801ECA60
void f_801ECA60(Ctx* __restrict c) {
  trace_call(0x801ECA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECA60
  c->r[5]=0u+0x803E0000u; // 801ECA64
  c->r[5]=c->r[5]+0x00001624u; // 801ECA68
  c->r[0]=0u+0x00000003u; // 801ECA6C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801ECA70
  c->r[8]=c->r[1]+0x00000004u; // 801ECA74
  c->r[6]=c->r[5]+0xFFFFFFFCu; // 801ECA78
  W32(c->r[1]+0x00000028u,c->r[30]); // 801ECA7C
  c->ctr=c->r[0]; // 801ECA80
L_801ECA84:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 801ECA84
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 801ECA88
  W32(c->r[8]+0x00000004u,c->r[5]); // 801ECA8C
  {uint32_t ea=c->r[8]+0x00000008u; W32(ea,c->r[0]); c->r[8]=ea;} // 801ECA90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801ECA84; } // 801ECA94
  c->r[0]=R32(c->r[6]+0x00000004u); // 801ECA98
  c->r[31]=0u+0x803E0000u; // 801ECA9C
  {uint32_t ea=c->r[31]+0x00001650u; c->r[12]=R32(ea); c->r[31]=ea;} // 801ECAA0
  c->r[7]=c->r[1]+0x00000008u; // 801ECAA4
  W32(c->r[8]+0x00000004u,c->r[0]); // 801ECAA8
  c->r[30]=0u+0x00000000u; // 801ECAAC
  c->r[11]=R32(c->r[31]+0x00000004u); // 801ECAB0
  c->r[5]=0u+0x00000000u; // 801ECAB4
  c->r[10]=R32(c->r[31]+0x00000008u); // 801ECAB8
  c->r[6]=0u+0x00000000u; // 801ECABC
  c->r[9]=R32(c->r[31]+0x0000000Cu); // 801ECAC0
  c->r[8]=R32(c->r[31]+0x00000010u); // 801ECAC4
  c->r[0]=R32(c->r[31]+0x00000014u); // 801ECAC8
  W32(c->r[3]+0x0000061Cu,c->r[12]); // 801ECACC
  W32(c->r[3]+0x00000620u,c->r[11]); // 801ECAD0
  W32(c->r[3]+0x00000624u,c->r[10]); // 801ECAD4
  W32(c->r[3]+0x00000628u,c->r[9]); // 801ECAD8
  W32(c->r[3]+0x0000062Cu,c->r[8]); // 801ECADC
  W32(c->r[3]+0x00000630u,c->r[0]); // 801ECAE0
  goto L_801ECB08; // 801ECAE4
L_801ECAE8:;
  c->r[9]=c->r[3]+c->r[5]; // 801ECAE8
  c->r[8]=c->r[4]+c->r[6]; // 801ECAEC
  W32(c->r[9]+0x00002714u,c->r[0]); // 801ECAF0
  c->r[30]=c->r[30]+0x00000001u; // 801ECAF4
  c->r[5]=c->r[5]+0x00000008u; // 801ECAF8
  c->r[6]=c->r[6]+0x00000004u; // 801ECAFC
  {uint32_t ea=c->r[8]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECB00
  {uint32_t ea=c->r[9]+0x00002718u; WF32(ea,c->f[0]);} // 801ECB04
L_801ECB08:;
  c->r[0]=R32(c->r[7]+c->r[6]); // 801ECB08
  cmps(c,0,(int32_t)c->r[0],0); // 801ECB0C
  if (!crb(c,0)) { IRQCHK(c); goto L_801ECAE8; } // 801ECB10
  c->r[5]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801ECB14
  c->r[0]=c->r[30]+0x00000001u; // 801ECB18
  c->r[6]=c->r[3]+c->r[5]; // 801ECB1C
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECB20
  c->r[5]=0u+0x00000007u; // 801ECB24
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801ECB28
  W32(c->r[6]+0x00002714u,c->r[5]); // 801ECB2C
  c->r[5]=c->r[3]+c->r[0]; // 801ECB30
  c->r[0]=0u+0xFFFFFFFFu; // 801ECB34
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB38
  {uint32_t ea=c->r[6]+0x00002718u; WF32(ea,c->f[1]);} // 801ECB3C
  W32(c->r[5]+0x00002714u,c->r[0]); // 801ECB40
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ECB44
  {uint32_t ea=c->r[3]+0x00002754u; WF32(ea,c->f[2]);} // 801ECB48
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB4C
  {uint32_t ea=c->r[3]+0x00002758u; WF32(ea,c->f[1]);} // 801ECB50
  {uint32_t ea=c->r[3]+0x0000275Cu; WF32(ea,c->f[2]);} // 801ECB54
  {uint32_t ea=c->r[3]+0x00002760u; WF32(ea,c->f[1]);} // 801ECB58
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB5C
  {uint32_t ea=c->r[3]+0x00002764u; WF32(ea,c->f[1]);} // 801ECB60
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB64
  {uint32_t ea=c->r[3]+0x00002768u; WF32(ea,c->f[1]);} // 801ECB68
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB6C
  {uint32_t ea=c->r[3]+0x0000276Cu; WF32(ea,c->f[1]);} // 801ECB70
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB74
  {uint32_t ea=c->r[3]+0x00002778u; WF32(ea,c->f[1]);} // 801ECB78
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB7C
  {uint32_t ea=c->r[3]+0x0000277Cu; WF32(ea,c->f[1]);} // 801ECB80
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB84
  {uint32_t ea=c->r[3]+0x00002780u; WF32(ea,c->f[1]);} // 801ECB88
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECB8C
  fcmp(c,0,c->f[1],c->f[0]); // 801ECB90
  {uint32_t ea=c->r[3]+0x00002784u; WF32(ea,c->f[1]);} // 801ECB94
  if (crb(c,0)) { goto L_801ECBA8; } // 801ECB98
  {uint32_t ea=c->r[2]+0xFFFFC1C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECB9C
  fcmp(c,0,c->f[1],c->f[0]); // 801ECBA0
  if (!crb(c,1)) { goto L_801ECBB0; } // 801ECBA4
L_801ECBA8:;
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECBA8
  {uint32_t ea=c->r[3]+0x00002784u; WF32(ea,c->f[0]);} // 801ECBAC
L_801ECBB0:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801ECBB0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801ECBB4
  c->r[1]=c->r[1]+0x00000030u; // 801ECBB8
  return; // 801ECBBC
}

// fn_801ECBC0
void f_801ECBC0(Ctx* __restrict c) {
  trace_call(0x801ECBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECBC0
  c->r[0]=c->lr; // 801ECBC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECBC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801ECBCC
  c->r[30]=c->r[3]|c->r[3]; // 801ECBD0
  c->r[31]=0u+0x00000000u; // 801ECBD4
  c->lr=0x801ECBDCu; f_801AFF98(c); // 801ECBD8
  c->r[0]=R32(c->r[30]+0x0000254Cu); // 801ECBDC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801ECBE0
  if (crb(c,2)) { goto L_801ECBEC; } // 801ECBE4
  c->r[31]=0u+0x00000001u; // 801ECBE8
L_801ECBEC:;
  c->r[3]=c->r[30]+0x0000254Cu; // 801ECBEC
  c->lr=0x801ECBF4u; f_801AC25C(c); // 801ECBF0
  c->r[0]=R32(c->r[30]+0x0000254Cu); // 801ECBF4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801ECBF8
  if (!crb(c,2)) { goto L_801ECC10; } // 801ECBFC
  cmpu(c,0,c->r[31],0x00000001u); // 801ECC00
  if (!crb(c,2)) { goto L_801ECC10; } // 801ECC04
  c->r[3]=c->r[30]|c->r[30]; // 801ECC08
  c->lr=0x801ECC10u; f_8018615C(c); // 801ECC0C
L_801ECC10:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801ECC10
  c->r[3]=c->r[30]+0x000008D0u; // 801ECC14
  c->r[4]=c->r[30]+0x0000255Cu; // 801ECC18
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801ECC1C
  c->ctr=c->r[12]; // 801ECC20
  if (true) { c->lr=0x801ECC28u; dispatch(c,c->ctr); } // 801ECC24
  c->r[3]=c->r[30]|c->r[30]; // 801ECC28
  c->lr=0x801ECC30u; f_801EE0EC(c); // 801ECC2C
  c->r[3]=c->r[30]|c->r[30]; // 801ECC30
  c->lr=0x801ECC38u; f_801EE864(c); // 801ECC34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801ECC38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECC3C
  c->lr=c->r[0]; // 801ECC40
  c->r[1]=c->r[1]+0x00000010u; // 801ECC44
  return; // 801ECC48
}

// fn_801ECC4C
void f_801ECC4C(Ctx* __restrict c) {
  trace_call(0x801ECC4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECC4C
  c->r[0]=c->lr; // 801ECC50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECC54
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801ECC58
  c->r[30]=c->r[3]|c->r[3]; // 801ECC5C
  c->r[3]=c->r[3]+0x000008ECu; // 801ECC60
  c->r[4]=R32(c->r[13]+0xFFFF89CCu); // 801ECC64
  c->lr=0x801ECC6Cu; f_80075440(c); // 801ECC68
  W32(c->r[30]+0x00002700u,c->r[3]); // 801ECC6C
  c->r[3]=c->r[30]+0x000008ECu; // 801ECC70
  c->r[4]=R32(c->r[13]+0xFFFF89C4u); // 801ECC74
  c->lr=0x801ECC7Cu; f_80075440(c); // 801ECC78
  W32(c->r[30]+0x00002704u,c->r[3]); // 801ECC7C
  c->r[3]=c->r[30]+0x000008ECu; // 801ECC80
  c->r[4]=R32(c->r[13]+0xFFFF89D0u); // 801ECC84
  c->lr=0x801ECC8Cu; f_80075440(c); // 801ECC88
  W32(c->r[30]+0x00002708u,c->r[3]); // 801ECC8C
  c->r[3]=c->r[30]+0x000008ECu; // 801ECC90
  c->r[4]=R32(c->r[13]+0xFFFF89C8u); // 801ECC94
  c->lr=0x801ECC9Cu; f_80075440(c); // 801ECC98
  W32(c->r[30]+0x0000270Cu,c->r[3]); // 801ECC9C
  c->r[31]=0u+0x00000000u; // 801ECCA0
  c->r[0]=R32(c->r[30]+0x000007E4u); // 801ECCA4
  c->r[3]=R32(c->r[13]+0xFFFF89B4u); // 801ECCA8
  c->r[0]=c->r[0]|0x00000001u; // 801ECCAC
  W32(c->r[30]+0x000026F8u,c->r[3]); // 801ECCB0
  c->r[3]=R32(c->r[13]+0xFFFF89B8u); // 801ECCB4
  W32(c->r[30]+0x000026FCu,c->r[3]); // 801ECCB8
  W8(c->r[30]+0x00001F61u,c->r[31]); // 801ECCBC
  W8(c->r[30]+0x00001F63u,c->r[31]); // 801ECCC0
  W8(c->r[30]+0x00001F62u,c->r[31]); // 801ECCC4
  W8(c->r[30]+0x00001F64u,c->r[31]); // 801ECCC8
  W32(c->r[30]+0x000007E4u,c->r[0]); // 801ECCCC
  c->lr=0x801ECCD4u; f_80127CC0(c); // 801ECCD0
  c->r[6]=R32(c->r[3]+0x00000000u); // 801ECCD4
  c->r[4]=0u+0x00030000u; // 801ECCD8
  c->r[4]=c->r[4]+0x00000D40u; // 801ECCDC
  c->r[5]=c->r[6]+0x00000001u; // 801ECCE0
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[4]); // 801ECCE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801ECCE8
  c->r[0]=c->r[5]-c->r[0]; // 801ECCEC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801ECCF0
  W32(c->r[30]+0x000008A0u,c->r[6]); // 801ECCF4
  W32(c->r[30]+0x00002770u,c->r[31]); // 801ECCF8
  W32(c->r[30]+0x00002774u,c->r[31]); // 801ECCFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801ECD00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECD04
  c->lr=c->r[0]; // 801ECD08
  c->r[1]=c->r[1]+0x00000010u; // 801ECD0C
  return; // 801ECD10
}

// fn_801ECD14
void f_801ECD14(Ctx* __restrict c) {
  trace_call(0x801ECD14u);
  c->r[4]=0u+0x00000000u; // 801ECD14
  c->r[3]=c->r[3]+0x000008D0u; // 801ECD18
  f_8002B91C(c); return; // 801ECD1C
}

// fn_801ECD20
void f_801ECD20(Ctx* __restrict c) {
  trace_call(0x801ECD20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECD20
  c->r[0]=c->lr; // 801ECD24
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ECD28
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801ECD2C
  c->r[31]=c->r[3]|c->r[3]; // 801ECD30
  c->lr=0x801ECD38u; f_801ECC4C(c); // 801ECD34
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801ECD38
  c->r[4]=c->r[31]+0x000008D0u; // 801ECD3C
  c->r[3]=c->r[1]+0x00000008u; // 801ECD40
  c->r[12]=R32(c->r[12]+0x00000040u); // 801ECD44
  c->ctr=c->r[12]; // 801ECD48
  if (true) { c->lr=0x801ECD50u; dispatch(c,c->ctr); } // 801ECD4C
  c->r[3]=c->r[31]+0x0000254Cu; // 801ECD50
  c->r[4]=c->r[1]+0x00000008u; // 801ECD54
  c->lr=0x801ECD5Cu; f_801ABF6C(c); // 801ECD58
  c->r[3]=R32(c->r[13]+0xFFFF89B0u); // 801ECD5C
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECD60
  c->lr=0x801ECD68u; f_801138D4(c); // 801ECD64
  c->r[4]=R32(c->r[13]+0xFFFF89E0u); // 801ECD68
  c->r[3]=c->r[31]+0x000008ECu; // 801ECD6C
  c->lr=0x801ECD74u; f_80075440(c); // 801ECD70
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECD74
  c->r[4]=c->r[3]|c->r[3]; // 801ECD78
  {uint32_t ea=c->r[2]+0xFFFFC1D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ECD7C
  c->r[3]=c->r[31]+0x000008D0u; // 801ECD80
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ECD84
  c->r[5]=0u+0x00000000u; // 801ECD88
  c->r[6]=0u+0xFFFFFFFFu; // 801ECD8C
  c->r[7]=0u+0x00000000u; // 801ECD90
  c->lr=0x801ECD98u; f_8002D7B8(c); // 801ECD94
  c->r[3]=c->r[31]+0x000008D0u; // 801ECD98
  c->r[4]=0u+0x00000001u; // 801ECD9C
  c->lr=0x801ECDA4u; f_8002B91C(c); // 801ECDA0
  c->r[3]=0u+0x00000002u; // 801ECDA4
  c->r[4]=0u+0x00000000u; // 801ECDA8
  c->r[0]=0u+0x00000001u; // 801ECDAC
  W32(c->r[31]+0x00002710u,c->r[3]); // 801ECDB0
  c->r[3]=c->r[31]|c->r[31]; // 801ECDB4
  W32(c->r[31]+0x000026ECu,c->r[4]); // 801ECDB8
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ECDBC
  c->lr=0x801ECDC4u; f_800AC7C4(c); // 801ECDC0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801ECDC4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801ECDC8
  c->lr=c->r[0]; // 801ECDCC
  c->r[1]=c->r[1]+0x00000040u; // 801ECDD0
  return; // 801ECDD4
}

// fn_801ECDD8
void f_801ECDD8(Ctx* __restrict c) {
  trace_call(0x801ECDD8u);
  return; // 801ECDD8
}

// fn_801ECDDC
void f_801ECDDC(Ctx* __restrict c) {
  trace_call(0x801ECDDCu);
  return; // 801ECDDC
}

// fn_801ECDE0
void f_801ECDE0(Ctx* __restrict c) {
  trace_call(0x801ECDE0u);
  return; // 801ECDE0
}

// fn_801ECDE4
void f_801ECDE4(Ctx* __restrict c) {
  trace_call(0x801ECDE4u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECDE4
  c->r[0]=c->lr; // 801ECDE8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801ECDEC
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801ECDF0
  c->r[31]=c->r[3]|c->r[3]; // 801ECDF4
  c->r[3]=c->r[1]+0x0000005Cu; // 801ECDF8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801ECDFC
  c->r[4]=c->r[31]+0x000008D0u; // 801ECE00
  c->r[12]=R32(c->r[12]+0x00000040u); // 801ECE04
  c->ctr=c->r[12]; // 801ECE08
  if (true) { c->lr=0x801ECE10u; dispatch(c,c->ctr); } // 801ECE0C
  c->r[0]=0u+0x00000006u; // 801ECE10
  c->r[5]=c->r[1]+0x00000028u; // 801ECE14
  c->r[4]=c->r[1]+0x00000058u; // 801ECE18
  c->ctr=c->r[0]; // 801ECE1C
L_801ECE20:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801ECE20
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801ECE24
  W32(c->r[5]+0x00000004u,c->r[3]); // 801ECE28
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801ECE2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801ECE20; } // 801ECE30
  c->r[3]=c->r[31]+0x0000254Cu; // 801ECE34
  c->r[4]=c->r[1]+0x0000002Cu; // 801ECE38
  c->lr=0x801ECE40u; f_801ABF6C(c); // 801ECE3C
  c->r[0]=R32(c->r[31]+0x000026ECu); // 801ECE40
  cmps(c,0,(int32_t)c->r[0],1); // 801ECE44
  if (crb(c,2)) { goto L_801ECED8; } // 801ECE48
  if (!crb(c,0)) { goto L_801ECE5C; } // 801ECE4C
  cmps(c,0,(int32_t)c->r[0],0); // 801ECE50
  if (!crb(c,0)) { goto L_801ECE68; } // 801ECE54
  goto L_801ED018; // 801ECE58
L_801ECE5C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801ECE5C
  if (!crb(c,0)) { goto L_801ED018; } // 801ECE60
  goto L_801ECF4C; // 801ECE64
L_801ECE68:;
  c->r[4]=0u+0x80580000u; // 801ECE68
  c->r[3]=c->r[1]+0x00000020u; // 801ECE6C
  c->r[4]=c->r[4]+0xFFFFBA0Cu; // 801ECE70
  c->lr=0x801ECE78u; f_8003F484(c); // 801ECE74
  c->r[4]=R32(c->r[13]+0xFFFF89E4u); // 801ECE78
  c->r[3]=c->r[31]+0x000008ECu; // 801ECE7C
  c->lr=0x801ECE84u; f_80075440(c); // 801ECE80
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECE84
  c->r[5]=c->r[3]|c->r[3]; // 801ECE88
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ECE8C
  c->r[3]=c->r[31]+0x00000C88u; // 801ECE90
  c->r[4]=c->r[31]+0x000008ECu; // 801ECE94
  c->r[6]=0u+0x00000000u; // 801ECE98
  c->r[7]=0u+0x00000004u; // 801ECE9C
  c->lr=0x801ECEA4u; f_800BB0C8(c); // 801ECEA0
  c->r[3]=c->r[1]+0x00000014u; // 801ECEA4
  c->r[4]=c->r[1]+0x00000020u; // 801ECEA8
  c->lr=0x801ECEB0u; f_8003F484(c); // 801ECEAC
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECEB0
  c->r[4]=c->r[3]|c->r[3]; // 801ECEB4
  {uint32_t ea=c->r[2]+0xFFFFC1D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ECEB8
  c->r[3]=c->r[31]+0x0000254Cu; // 801ECEBC
  c->f[2]=c->f[1]; // 801ECEC0
  c->f[4]=c->f[1]; // 801ECEC4
  c->lr=0x801ECECCu; f_801AC5E8(c); // 801ECEC8
  c->r[0]=0u+0x00000001u; // 801ECECC
  W32(c->r[31]+0x000026ECu,c->r[0]); // 801ECED0
  goto L_801ED018; // 801ECED4
L_801ECED8:;
  c->r[3]=c->r[31]|c->r[31]; // 801ECED8
  c->r[4]=0u+0x00000000u; // 801ECEDC
  c->lr=0x801ECEE4u; f_801EE070(c); // 801ECEE0
  c->r[0]=R32(c->r[31]+0x0000254Cu); // 801ECEE4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801ECEE8
  if (!crb(c,2)) { goto L_801ED018; } // 801ECEEC
  c->r[3]=c->r[31]|c->r[31]; // 801ECEF0
  c->lr=0x801ECEF8u; f_8018615C(c); // 801ECEF4
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ECEF8
  c->r[3]=c->r[1]+0x00000008u; // 801ECEFC
  {uint32_t ea=c->r[2]+0xFFFFC1DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECF00
  c->f[3]=c->f[2]; // 801ECF04
  c->lr=0x801ECF0Cu; f_800521A0(c); // 801ECF08
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECF0C
  c->r[4]=c->r[3]|c->r[3]; // 801ECF10
  {uint32_t ea=c->r[2]+0xFFFFC1D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ECF14
  c->r[3]=c->r[31]+0x0000254Cu; // 801ECF18
  c->lr=0x801ECF20u; f_801ACA00(c); // 801ECF1C
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ECF20
  c->r[4]=0u+0x80400000u; // 801ECF24
  c->r[4]=c->r[4]+0x00007938u; // 801ECF28
  c->r[3]=c->r[31]|c->r[31]; // 801ECF2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801ECF30
  c->r[12]=c->r[4]+c->r[0]; // 801ECF34
  c->lr=0x801ECF3Cu; f_80289CA4(c); // 801ECF38
  c->r[0]=c->r[0]|0x00000000u; // 801ECF3C
  c->r[0]=0u+0x00000002u; // 801ECF40
  W32(c->r[31]+0x000026ECu,c->r[0]); // 801ECF44
  goto L_801ED018; // 801ECF48
L_801ECF4C:;
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ECF4C
  c->r[4]=0u+0x80400000u; // 801ECF50
  c->r[4]=c->r[4]+0x00007938u; // 801ECF54
  c->r[3]=c->r[31]|c->r[31]; // 801ECF58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801ECF5C
  c->r[12]=c->r[4]+c->r[0]; // 801ECF60
  c->lr=0x801ECF68u; f_80289CA4(c); // 801ECF64
  c->r[0]=c->r[0]|0x00000000u; // 801ECF68
  cmpu(c,0,c->r[3],0x00000001u); // 801ECF6C
  if (!crb(c,2)) { goto L_801ED018; } // 801ECF70
  c->r[3]=R32(c->r[31]+0x00002710u); // 801ECF74
  c->r[0]=0u+0x00000001u; // 801ECF78
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ECF7C
  c->r[0]=c->r[3]+0x00000001u; // 801ECF80
  cmps(c,0,(int32_t)c->r[0],3); // 801ECF84
  W32(c->r[31]+0x00002710u,c->r[0]); // 801ECF88
  if (crb(c,0)) { goto L_801ECF98; } // 801ECF8C
  c->r[0]=0u+0x00000000u; // 801ECF90
  W32(c->r[31]+0x00002710u,c->r[0]); // 801ECF94
L_801ECF98:;
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ECF98
  cmps(c,0,(int32_t)c->r[0],2); // 801ECF9C
  if (!crb(c,2)) { goto L_801ECFF8; } // 801ECFA0
  c->r[0]=R8(c->r[31]+0x00001F5Fu); // 801ECFA4
  cmps(c,0,(int32_t)c->r[0],0); // 801ECFA8
  if (!crb(c,2)) { goto L_801ECFBC; } // 801ECFAC
  c->r[0]=0u+0x00000000u; // 801ECFB0
  W32(c->r[31]+0x00002710u,c->r[0]); // 801ECFB4
  goto L_801ECFF8; // 801ECFB8
L_801ECFBC:;
  c->lr=0x801ECFC0u; f_80291D94(c); // 801ECFBC
  c->r[3]=c->r[3]^0x80000000u; // 801ECFC0
  c->r[0]=0u+0x43300000u; // 801ECFC4
  W32(c->r[1]+0x00000094u,c->r[3]); // 801ECFC8
  {uint32_t ea=c->r[2]+0xFFFFC1E8u; c->f[3]=RF64(ea);} // 801ECFCC
  W32(c->r[1]+0x00000090u,c->r[0]); // 801ECFD0
  {uint32_t ea=c->r[2]+0xFFFFC1E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ECFD4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[2]=RF64(ea);} // 801ECFD8
  {uint32_t ea=c->r[2]+0xFFFFC1E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ECFDC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801ECFE0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801ECFE4
  fcmp(c,0,c->f[1],c->f[0]); // 801ECFE8
  if (!crb(c,1)) { goto L_801ECFF8; } // 801ECFEC
  c->r[0]=0u+0x00000003u; // 801ECFF0
  W32(c->r[31]+0x00002710u,c->r[0]); // 801ECFF4
L_801ECFF8:;
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ECFF8
  c->r[4]=0u+0x80400000u; // 801ECFFC
  c->r[4]=c->r[4]+0x00007938u; // 801ED000
  c->r[3]=c->r[31]|c->r[31]; // 801ED004
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801ED008
  c->r[12]=c->r[4]+c->r[0]; // 801ED00C
  c->lr=0x801ED014u; f_80289CA4(c); // 801ED010
  c->r[0]=c->r[0]|0x00000000u; // 801ED014
L_801ED018:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801ED018
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801ED01C
  c->lr=c->r[0]; // 801ED020
  c->r[1]=c->r[1]+0x000000A0u; // 801ED024
  return; // 801ED028
}

// fn_801ED02C
void f_801ED02C(Ctx* __restrict c) {
  trace_call(0x801ED02Cu);
  return; // 801ED02C
}

// fn_801ED030
void f_801ED030(Ctx* __restrict c) {
  trace_call(0x801ED030u);
  return; // 801ED030
}

// fn_801ED034
void f_801ED034(Ctx* __restrict c) {
  trace_call(0x801ED034u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED034
  c->r[0]=c->lr; // 801ED038
  W32(c->r[1]+0x00000084u,c->r[0]); // 801ED03C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801ED040
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801ED044
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801ED048
  c->r[31]=c->r[3]|c->r[3]; // 801ED04C
  c->r[3]=c->r[1]+0x00000030u; // 801ED050
  W32(c->r[1]+0x00000068u,c->r[30]); // 801ED054
  c->r[4]=c->r[31]+0x000008D0u; // 801ED058
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801ED05C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801ED060
  c->ctr=c->r[12]; // 801ED064
  if (true) { c->lr=0x801ED06Cu; dispatch(c,c->ctr); } // 801ED068
  c->r[0]=R32(c->r[31]+0x000026F4u); // 801ED06C
  cmpu(c,0,c->r[0],0x00000010u); // 801ED070
  if (crb(c,1)) { goto L_801ED6B8; } // 801ED074
  c->r[3]=0u+0x80400000u; // 801ED078
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ED07C
  c->r[3]=c->r[3]+0x00007974u; // 801ED080
  c->r[3]=R32(c->r[3]+c->r[0]); // 801ED084
  c->ctr=c->r[3]; // 801ED088
  if (true) { switch (c->ctr) { case 0x801ED090u: goto L_801ED090; case 0x801ED118u: goto L_801ED118; case 0x801ED220u: goto L_801ED220; case 0x801ED2A8u: goto L_801ED2A8; case 0x801ED2E8u: goto L_801ED2E8; case 0x801ED3D8u: goto L_801ED3D8; case 0x801ED454u: goto L_801ED454; case 0x801ED4C4u: goto L_801ED4C4; case 0x801ED4F8u: goto L_801ED4F8; case 0x801ED574u: goto L_801ED574; case 0x801ED5B4u: goto L_801ED5B4; case 0x801ED60Cu: goto L_801ED60C; case 0x801ED63Cu: goto L_801ED63C; case 0x801ED6B8u: goto L_801ED6B8; default: break; } dispatch(c,c->ctr); return; } // 801ED08C
L_801ED090:;
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ED090
  c->r[3]=c->r[31]+0x00000C88u; // 801ED094
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED098
  c->r[4]=c->r[31]+0x000008ECu; // 801ED09C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ED0A0
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED0A4
  c->r[5]=c->r[31]+c->r[0]; // 801ED0A8
  c->r[6]=0u+0x00000000u; // 801ED0AC
  c->r[5]=R32(c->r[5]+0x00002700u); // 801ED0B0
  c->r[7]=0u+0x00000004u; // 801ED0B4
  c->lr=0x801ED0BCu; f_800BB0C8(c); // 801ED0B8
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED0BC
  c->r[30]=R32(c->r[3]+0x00000000u); // 801ED0C0
  c->lr=0x801ED0C8u; f_80291D94(c); // 801ED0C4
  c->r[3]=c->r[3]^0x80000000u; // 801ED0C8
  c->r[0]=0u+0x43300000u; // 801ED0CC
  W32(c->r[1]+0x00000064u,c->r[3]); // 801ED0D0
  c->r[3]=c->r[30]|c->r[30]; // 801ED0D4
  {uint32_t ea=c->r[2]+0xFFFFC1E8u; c->f[2]=RF64(ea);} // 801ED0D8
  W32(c->r[1]+0x00000060u,c->r[0]); // 801ED0DC
  {uint32_t ea=c->r[2]+0xFFFFC1E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED0E0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=RF64(ea);} // 801ED0E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801ED0E8
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801ED0EC
  c->lr=0x801ED0F4u; f_801652C0(c); // 801ED0F0
  {uint32_t ea=c->r[2]+0xFFFFC204u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED0F4
  {uint32_t ea=c->r[2]+0xFFFFC200u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED0F8
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED0FC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[1],-c->f[2])); // 801ED100
  c->r[0]=c->r[3]+0x00000001u; // 801ED104
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED108
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[2])); // 801ED10C
  {uint32_t ea=c->r[31]+0x000026F0u; WF32(ea,c->f[0]);} // 801ED110
  goto L_801ED6B8; // 801ED114
L_801ED118:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED118
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED11C
  c->lr=0x801ED124u; f_800752CC(c); // 801ED120
  {uint32_t ea=c->r[31]+0x000026F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED124
  fcmp(c,0,c->f[1],c->f[0]); // 801ED128
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED12C
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED130
  c->r[0]=0u+0x00000000u; // 801ED134
  W8(c->r[31]+0x00001F60u,c->r[0]); // 801ED138
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801ED13C
  c->lr=0x801ED144u; f_801F821C(c); // 801ED140
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801ED144
  cmps(c,0,(int32_t)c->r[0],3); // 801ED148
  if (!crb(c,2)) { goto L_801ED158; } // 801ED14C
  {uint32_t ea=c->r[2]+0xFFFFC208u; c->f[31]=c->ps1[31]=RF32(ea);} // 801ED150
  goto L_801ED15C; // 801ED154
L_801ED158:;
  {uint32_t ea=c->r[2]+0xFFFFC20Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801ED158
L_801ED15C:;
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ED15C
  cmps(c,0,(int32_t)c->r[0],0); // 801ED160
  if (!crb(c,2)) { goto L_801ED1A8; } // 801ED164
  c->r[3]=R32(c->r[2]+0xFFFFC1F0u); // 801ED168
  c->r[0]=R32(c->r[2]+0xFFFFC1F4u); // 801ED16C
  W32(c->r[1]+0x00000010u,c->r[3]); // 801ED170
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801ED174
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ED178
  c->lr=0x801ED180u; f_800F39EC(c); // 801ED17C
  c->r[4]=0u+0x803E0000u; // 801ED180
  c->f[2]=c->f[31]; // 801ED184
  c->r[4]=c->r[4]+0xFFFFAA30u; // 801ED188
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED18C
  c->r[4]=c->r[4]+0x00000008u; // 801ED190
  c->r[5]=c->r[1]+0x00000010u; // 801ED194
  c->r[6]=0u+0x00000004u; // 801ED198
  c->r[7]=0u+0x00000005u; // 801ED19C
  c->lr=0x801ED1A4u; f_800DAD9C(c); // 801ED1A0
  goto L_801ED1E4; // 801ED1A4
L_801ED1A8:;
  c->r[3]=R32(c->r[2]+0xFFFFC1F8u); // 801ED1A8
  c->r[0]=R32(c->r[2]+0xFFFFC1FCu); // 801ED1AC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801ED1B0
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801ED1B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801ED1B8
  c->lr=0x801ED1C0u; f_800F39EC(c); // 801ED1BC
  c->r[4]=0u+0x803E0000u; // 801ED1C0
  c->f[2]=c->f[31]; // 801ED1C4
  c->r[4]=c->r[4]+0xFFFFAA30u; // 801ED1C8
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED1CC
  c->r[4]=c->r[4]+0x00000008u; // 801ED1D0
  c->r[5]=c->r[1]+0x00000008u; // 801ED1D4
  c->r[6]=0u+0x00000004u; // 801ED1D8
  c->r[7]=0u+0x00000005u; // 801ED1DC
  c->lr=0x801ED1E4u; f_800DAD9C(c); // 801ED1E0
L_801ED1E4:;
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ED1E4
  c->r[3]=c->r[31]+0x00000C88u; // 801ED1E8
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED1EC
  c->r[4]=c->r[31]+0x000008ECu; // 801ED1F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ED1F4
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED1F8
  c->r[5]=c->r[31]+c->r[0]; // 801ED1FC
  c->r[6]=0u+0x00000000u; // 801ED200
  c->r[5]=R32(c->r[5]+0x00002708u); // 801ED204
  c->r[7]=0u+0x00000004u; // 801ED208
  c->lr=0x801ED210u; f_800BB0C8(c); // 801ED20C
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED210
  c->r[0]=c->r[3]+0x00000001u; // 801ED214
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED218
  goto L_801ED6B8; // 801ED21C
L_801ED220:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED220
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED224
  c->lr=0x801ED22Cu; f_800752CC(c); // 801ED228
  {uint32_t ea=c->r[2]+0xFFFFC210u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED22C
  fcmp(c,0,c->f[1],c->f[0]); // 801ED230
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED234
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED238
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801ED23C
  c->lr=0x801ED244u; f_800F39EC(c); // 801ED240
  c->lr=0x801ED248u; f_800DB6D4(c); // 801ED244
  cmps(c,0,(int32_t)c->r[3],3); // 801ED248
  if (!crb(c,2)) { goto L_801ED288; } // 801ED24C
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ED250
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED254
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ED258
  c->r[3]=c->r[31]+c->r[0]; // 801ED25C
  c->r[3]=R32(c->r[3]+0x000026F8u); // 801ED260
  c->lr=0x801ED268u; f_801138D4(c); // 801ED264
  c->lr=0x801ED26Cu; f_80061A4C(c); // 801ED268
  c->r[4]=0u+0x00000000u; // 801ED26C
  c->r[3]=c->r[3]+0x000000ECu; // 801ED270
  c->lr=0x801ED278u; f_8012D230(c); // 801ED274
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED278
  c->r[0]=c->r[3]+0x00000002u; // 801ED27C
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED280
  goto L_801ED294; // 801ED284
L_801ED288:;
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED288
  c->r[0]=c->r[3]+0x00000001u; // 801ED28C
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED290
L_801ED294:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801ED294
  c->lr=0x801ED29Cu; f_800F39EC(c); // 801ED298
  c->r[4]=0u+0xFFFFFFFFu; // 801ED29C
  c->lr=0x801ED2A4u; f_800DB6F8(c); // 801ED2A0
  goto L_801ED6B8; // 801ED2A4
L_801ED2A8:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED2A8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED2AC
  c->lr=0x801ED2B4u; f_800752CC(c); // 801ED2B0
  {uint32_t ea=c->r[2]+0xFFFFC214u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED2B4
  fcmp(c,0,c->f[1],c->f[0]); // 801ED2B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED2BC
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED2C0
  {uint32_t ea=c->r[31]+0x00002778u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED2C4
  c->r[3]=c->r[31]|c->r[31]; // 801ED2C8
  c->r[4]=0u+0x00000004u; // 801ED2CC
  c->r[5]=0u+0x00000000u; // 801ED2D0
  c->lr=0x801ED2D8u; f_801B07AC(c); // 801ED2D4
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED2D8
  c->r[0]=c->r[3]+0x00000001u; // 801ED2DC
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED2E0
  goto L_801ED6B8; // 801ED2E4
L_801ED2E8:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED2E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED2EC
  c->lr=0x801ED2F4u; f_800752CC(c); // 801ED2F0
  {uint32_t ea=c->r[2]+0xFFFFC218u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED2F4
  fcmp(c,0,c->f[1],c->f[0]); // 801ED2F8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED2FC
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED300
  {uint32_t ea=c->r[31]+0x00002784u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED304
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED308
  fcmp(c,0,c->f[1],c->f[0]); // 801ED30C
  if (crb(c,2)) { goto L_801ED370; } // 801ED310
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801ED314
  c->lr=0x801ED31Cu; f_801F821C(c); // 801ED318
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801ED31C
  cmps(c,0,(int32_t)c->r[0],3); // 801ED320
  if (!crb(c,2)) { goto L_801ED370; } // 801ED324
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED328
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED32C
  fcmp(c,0,c->f[1],c->f[2]); // 801ED330
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801ED334
  if (!crb(c,2)) { goto L_801ED340; } // 801ED338
  goto L_801ED348; // 801ED33C
L_801ED340:;
  {uint32_t ea=c->r[31]+0x000003A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED340
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 801ED344
L_801ED348:;
  {uint32_t ea=c->r[2]+0xFFFFC220u; c->f[0]=RF64(ea);} // 801ED348
  fcmp(c,0,c->f[2],c->f[0]); // 801ED34C
  if (!crb(c,0)) { goto L_801ED370; } // 801ED350
  c->lr=0x801ED358u; f_80291D94(c); // 801ED354
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801ED358
  cmps(c,0,(int32_t)c->r[0],127); // 801ED35C
  if (!crb(c,1)) { goto L_801ED370; } // 801ED360
  c->r[0]=0u+0x0000000Au; // 801ED364
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED368
  goto L_801ED6B8; // 801ED36C
L_801ED370:;
  c->r[0]=0u+0x00000001u; // 801ED370
  c->r[3]=c->r[31]+0x000008ECu; // 801ED374
  W8(c->r[31]+0x00001F60u,c->r[0]); // 801ED378
  c->r[4]=R32(c->r[13]+0xFFFF89DCu); // 801ED37C
  c->lr=0x801ED384u; f_80075440(c); // 801ED380
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED384
  c->r[5]=c->r[3]|c->r[3]; // 801ED388
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED38C
  c->r[3]=c->r[31]+0x00000C88u; // 801ED390
  c->r[4]=c->r[31]+0x000008ECu; // 801ED394
  c->r[6]=0u+0x00000000u; // 801ED398
  c->r[7]=0u+0x00000004u; // 801ED39C
  c->lr=0x801ED3A4u; f_800BB0C8(c); // 801ED3A0
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801ED3A4
  c->lr=0x801ED3ACu; f_801F821C(c); // 801ED3A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801ED3AC
  cmps(c,0,(int32_t)c->r[0],3); // 801ED3B0
  if (!crb(c,2)) { goto L_801ED3C8; } // 801ED3B4
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED3B8
  {uint32_t ea=c->r[2]+0xFFFFC228u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED3BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED3C0
  c->lr=0x801ED3C8u; f_80165B9C(c); // 801ED3C4
L_801ED3C8:;
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED3C8
  c->r[0]=c->r[3]+0x00000001u; // 801ED3CC
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED3D0
  goto L_801ED6B8; // 801ED3D4
L_801ED3D8:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED3D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED3DC
  c->lr=0x801ED3E4u; f_800752CC(c); // 801ED3E0
  {uint32_t ea=c->r[2]+0xFFFFC200u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED3E4
  fcmp(c,0,c->f[1],c->f[0]); // 801ED3E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED3EC
  if (!crb(c,2)) { goto L_801ED400; } // 801ED3F0
  c->r[3]=c->r[31]|c->r[31]; // 801ED3F4
  c->r[4]=0u+0x00000000u; // 801ED3F8
  c->lr=0x801ED400u; f_801EE070(c); // 801ED3FC
L_801ED400:;
  c->r[3]=0u+0x80580000u; // 801ED400
  {uint32_t ea=c->r[31]+0x0000258Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED404
  {uint32_t ea=c->r[3]+0xFFFFBA0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED408
  fcmp(c,0,c->f[1],c->f[0]); // 801ED40C
  if (!crb(c,1)) { goto L_801ED6B8; } // 801ED410
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED414
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED418
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED41C
  c->lr=0x801ED424u; f_80165B9C(c); // 801ED420
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED424
  c->r[3]=c->r[1]+0x00000024u; // 801ED428
  {uint32_t ea=c->r[2]+0xFFFFC1DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED42C
  c->f[3]=c->f[2]; // 801ED430
  c->lr=0x801ED438u; f_800521A0(c); // 801ED434
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED438
  c->r[4]=c->r[3]|c->r[3]; // 801ED43C
  {uint32_t ea=c->r[2]+0xFFFFC1D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED440
  c->r[3]=c->r[31]+0x0000254Cu; // 801ED444
  c->lr=0x801ED44Cu; f_801ACA00(c); // 801ED448
  c->r[3]=0u+0x00000001u; // 801ED44C
  goto L_801ED6BC; // 801ED450
L_801ED454:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED454
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED458
  c->lr=0x801ED460u; f_800752CC(c); // 801ED45C
  {uint32_t ea=c->r[2]+0xFFFFC218u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED460
  fcmp(c,0,c->f[1],c->f[0]); // 801ED464
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED468
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED46C
  c->r[3]=c->r[31]|c->r[31]; // 801ED470
  c->r[4]=0u+0x00000001u; // 801ED474
  c->lr=0x801ED47Cu; f_801EE5DC(c); // 801ED478
  c->r[0]=R32(c->r[31]+0x00002710u); // 801ED47C
  c->r[3]=0u+0x00000001u; // 801ED480
  W8(c->r[31]+0x00001F63u,c->r[3]); // 801ED484
  c->r[3]=c->r[31]+0x00000C88u; // 801ED488
  c->r[0]=c->r[0]^0x00000001u; // 801ED48C
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED490
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ED494
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED498
  c->r[5]=c->r[31]+c->r[0]; // 801ED49C
  c->r[4]=c->r[31]+0x000008ECu; // 801ED4A0
  c->r[5]=R32(c->r[5]+0x00002708u); // 801ED4A4
  c->r[6]=0u+0x00000000u; // 801ED4A8
  c->r[7]=0u+0x00000004u; // 801ED4AC
  c->lr=0x801ED4B4u; f_800BB0C8(c); // 801ED4B0
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED4B4
  c->r[0]=c->r[3]+0x00000001u; // 801ED4B8
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED4BC
  goto L_801ED6B8; // 801ED4C0
L_801ED4C4:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED4C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED4C8
  c->lr=0x801ED4D0u; f_800752CC(c); // 801ED4CC
  {uint32_t ea=c->r[2]+0xFFFFC22Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED4D0
  fcmp(c,0,c->f[1],c->f[0]); // 801ED4D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED4D8
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED4DC
  c->r[3]=c->r[31]|c->r[31]; // 801ED4E0
  c->lr=0x801ED4E8u; f_801EEDEC(c); // 801ED4E4
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED4E8
  c->r[0]=c->r[3]+0x00000001u; // 801ED4EC
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED4F0
  goto L_801ED6B8; // 801ED4F4
L_801ED4F8:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED4F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED4FC
  c->lr=0x801ED504u; f_800752CC(c); // 801ED500
  {uint32_t ea=c->r[2]+0xFFFFC230u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED504
  fcmp(c,0,c->f[1],c->f[0]); // 801ED508
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED50C
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED510
  c->r[0]=R8(c->r[31]+0x00001F62u); // 801ED514
  cmpu(c,0,c->r[0],0x00000001u); // 801ED518
  if (!crb(c,2)) { goto L_801ED558; } // 801ED51C
  c->r[4]=R32(c->r[13]+0xFFFF89D8u); // 801ED520
  c->r[3]=c->r[31]+0x000008ECu; // 801ED524
  c->lr=0x801ED52Cu; f_80075440(c); // 801ED528
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED52C
  c->r[5]=c->r[3]|c->r[3]; // 801ED530
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED534
  c->r[3]=c->r[31]+0x00000C88u; // 801ED538
  c->r[4]=c->r[31]+0x000008ECu; // 801ED53C
  c->r[6]=0u+0x00000000u; // 801ED540
  c->r[7]=0u+0x00000004u; // 801ED544
  c->lr=0x801ED54Cu; f_800BB0C8(c); // 801ED548
  c->r[0]=0u+0x0000000Fu; // 801ED54C
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED550
  goto L_801ED564; // 801ED554
L_801ED558:;
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED558
  c->r[0]=c->r[3]+0x00000001u; // 801ED55C
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED560
L_801ED564:;
  c->r[3]=c->r[31]|c->r[31]; // 801ED564
  c->r[4]=0u+0xFFFFFFFFu; // 801ED568
  c->lr=0x801ED570u; f_801EE5DC(c); // 801ED56C
  goto L_801ED6B8; // 801ED570
L_801ED574:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED574
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED578
  c->lr=0x801ED580u; f_800752CC(c); // 801ED57C
  {uint32_t ea=c->r[2]+0xFFFFC214u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED580
  fcmp(c,0,c->f[1],c->f[0]); // 801ED584
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED588
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED58C
  {uint32_t ea=c->r[31]+0x00002778u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED590
  c->r[3]=c->r[31]|c->r[31]; // 801ED594
  c->r[4]=0u+0x00000004u; // 801ED598
  c->r[5]=0u+0x00000000u; // 801ED59C
  c->lr=0x801ED5A4u; f_801B07AC(c); // 801ED5A0
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED5A4
  c->r[0]=c->r[3]+0x00000001u; // 801ED5A8
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED5AC
  goto L_801ED6B8; // 801ED5B0
L_801ED5B4:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED5B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED5B8
  c->lr=0x801ED5C0u; f_800752CC(c); // 801ED5BC
  {uint32_t ea=c->r[2]+0xFFFFC218u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED5C0
  fcmp(c,0,c->f[1],c->f[0]); // 801ED5C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED5C8
  if (!crb(c,2)) { goto L_801ED6B8; } // 801ED5CC
  c->r[4]=R32(c->r[13]+0xFFFF89DCu); // 801ED5D0
  c->r[3]=c->r[31]+0x000008ECu; // 801ED5D4
  c->lr=0x801ED5DCu; f_80075440(c); // 801ED5D8
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED5DC
  c->r[5]=c->r[3]|c->r[3]; // 801ED5E0
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED5E4
  c->r[3]=c->r[31]+0x00000C88u; // 801ED5E8
  c->r[4]=c->r[31]+0x000008ECu; // 801ED5EC
  c->r[6]=0u+0x00000000u; // 801ED5F0
  c->r[7]=0u+0x00000004u; // 801ED5F4
  c->lr=0x801ED5FCu; f_800BB0C8(c); // 801ED5F8
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED5FC
  c->r[0]=c->r[3]+0x00000001u; // 801ED600
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED604
  goto L_801ED6B8; // 801ED608
L_801ED60C:;
  c->r[0]=0u+0x00000001u; // 801ED60C
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED610
  W8(c->r[31]+0x00001F60u,c->r[0]); // 801ED614
  {uint32_t ea=c->r[2]+0xFFFFC228u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED618
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED61C
  c->lr=0x801ED624u; f_80165B9C(c); // 801ED620
  c->r[3]=c->r[31]|c->r[31]; // 801ED624
  c->lr=0x801ED62Cu; f_801EED90(c); // 801ED628
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED62C
  c->r[0]=c->r[3]+0x00000001u; // 801ED630
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED634
  goto L_801ED6B8; // 801ED638
L_801ED63C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED63C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED640
  c->lr=0x801ED648u; f_800752CC(c); // 801ED644
  {uint32_t ea=c->r[2]+0xFFFFC200u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED648
  fcmp(c,0,c->f[1],c->f[0]); // 801ED64C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED650
  if (!crb(c,2)) { goto L_801ED664; } // 801ED654
  c->r[3]=c->r[31]|c->r[31]; // 801ED658
  c->r[4]=0u+0x00000000u; // 801ED65C
  c->lr=0x801ED664u; f_801EE070(c); // 801ED660
L_801ED664:;
  c->r[3]=0u+0x80580000u; // 801ED664
  {uint32_t ea=c->r[31]+0x0000258Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED668
  {uint32_t ea=c->r[3]+0xFFFFBA0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED66C
  fcmp(c,0,c->f[1],c->f[0]); // 801ED670
  if (!crb(c,1)) { goto L_801ED6B8; } // 801ED674
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED678
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED67C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED680
  c->lr=0x801ED688u; f_80165B9C(c); // 801ED684
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED688
  c->r[3]=c->r[1]+0x00000018u; // 801ED68C
  {uint32_t ea=c->r[2]+0xFFFFC1DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED690
  c->f[3]=c->f[2]; // 801ED694
  c->lr=0x801ED69Cu; f_800521A0(c); // 801ED698
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED69C
  c->r[4]=c->r[3]|c->r[3]; // 801ED6A0
  {uint32_t ea=c->r[2]+0xFFFFC1D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED6A4
  c->r[3]=c->r[31]+0x0000254Cu; // 801ED6A8
  c->lr=0x801ED6B0u; f_801ACA00(c); // 801ED6AC
  c->r[3]=0u+0x00000001u; // 801ED6B0
  goto L_801ED6BC; // 801ED6B4
L_801ED6B8:;
  c->r[3]=0u+0x00000000u; // 801ED6B8
L_801ED6BC:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801ED6BC
  c->r[0]=R32(c->r[1]+0x00000084u); // 801ED6C0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801ED6C4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801ED6C8
  c->r[30]=R32(c->r[1]+0x00000068u); // 801ED6CC
  c->lr=c->r[0]; // 801ED6D0
  c->r[1]=c->r[1]+0x00000080u; // 801ED6D4
  return; // 801ED6D8
}

// fn_801ED6DC
void f_801ED6DC(Ctx* __restrict c) {
  trace_call(0x801ED6DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED6DC
  c->r[0]=c->lr; // 801ED6E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ED6E4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801ED6E8
  c->r[31]=c->r[3]|c->r[3]; // 801ED6EC
  c->r[3]=c->r[1]+0x00000008u; // 801ED6F0
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801ED6F4
  c->r[4]=c->r[31]+0x000008D0u; // 801ED6F8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801ED6FC
  c->ctr=c->r[12]; // 801ED700
  if (true) { c->lr=0x801ED708u; dispatch(c,c->ctr); } // 801ED704
  c->r[0]=R32(c->r[31]+0x000026F4u); // 801ED708
  cmps(c,0,(int32_t)c->r[0],4); // 801ED70C
  if (crb(c,2)) { goto L_801ED85C; } // 801ED710
  if (!crb(c,0)) { goto L_801ED730; } // 801ED714
  cmps(c,0,(int32_t)c->r[0],2); // 801ED718
  if (crb(c,2)) { goto L_801ED788; } // 801ED71C
  if (!crb(c,0)) { goto L_801ED7BC; } // 801ED720
  cmps(c,0,(int32_t)c->r[0],1); // 801ED724
  if (!crb(c,0)) { goto L_801ED740; } // 801ED728
  goto L_801ED8D8; // 801ED72C
L_801ED730:;
  cmps(c,0,(int32_t)c->r[0],6); // 801ED730
  if (crb(c,2)) { goto L_801ED8BC; } // 801ED734
  if (!crb(c,0)) { goto L_801ED8D8; } // 801ED738
  goto L_801ED880; // 801ED73C
L_801ED740:;
  c->r[4]=R32(c->r[31]+0x00002710u); // 801ED740
  c->r[3]=c->r[31]|c->r[31]; // 801ED744
  c->lr=0x801ED74Cu; f_801EE5DC(c); // 801ED748
  c->r[4]=R32(c->r[13]+0xFFFF89C0u); // 801ED74C
  c->r[3]=c->r[31]+0x000008ECu; // 801ED750
  c->lr=0x801ED758u; f_80075440(c); // 801ED754
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED758
  c->r[5]=c->r[3]|c->r[3]; // 801ED75C
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED760
  c->r[3]=c->r[31]+0x00000C88u; // 801ED764
  c->r[4]=c->r[31]+0x000008ECu; // 801ED768
  c->r[6]=0u+0x00000000u; // 801ED76C
  c->r[7]=0u+0x00000004u; // 801ED770
  c->lr=0x801ED778u; f_800BB0C8(c); // 801ED774
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED778
  c->r[0]=c->r[3]+0x00000001u; // 801ED77C
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED780
  goto L_801ED8D8; // 801ED784
L_801ED788:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED788
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED78C
  c->lr=0x801ED794u; f_800752CC(c); // 801ED790
  {uint32_t ea=c->r[2]+0xFFFFC234u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED794
  fcmp(c,0,c->f[1],c->f[0]); // 801ED798
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED79C
  if (!crb(c,2)) { goto L_801ED8D8; } // 801ED7A0
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED7A4
  c->r[0]=0u+0x00000001u; // 801ED7A8
  W8(c->r[31]+0x00001F63u,c->r[0]); // 801ED7AC
  c->r[0]=c->r[3]+0x00000001u; // 801ED7B0
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED7B4
  goto L_801ED8D8; // 801ED7B8
L_801ED7BC:;
  c->r[0]=R8(c->r[31]+0x00001F62u); // 801ED7BC
  cmpu(c,0,c->r[0],0x00000001u); // 801ED7C0
  if (!crb(c,2)) { goto L_801ED810; } // 801ED7C4
  c->r[4]=R32(c->r[13]+0xFFFF89D4u); // 801ED7C8
  c->r[3]=c->r[31]+0x000008ECu; // 801ED7CC
  c->lr=0x801ED7D4u; f_80075440(c); // 801ED7D0
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED7D4
  c->r[5]=c->r[3]|c->r[3]; // 801ED7D8
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED7DC
  c->r[3]=c->r[31]+0x00000C88u; // 801ED7E0
  c->r[4]=c->r[31]+0x000008ECu; // 801ED7E4
  c->r[6]=0u+0x00000000u; // 801ED7E8
  c->r[7]=0u+0x00000004u; // 801ED7EC
  c->lr=0x801ED7F4u; f_800BB0C8(c); // 801ED7F0
  c->r[3]=c->r[31]|c->r[31]; // 801ED7F4
  c->r[4]=0u+0xFFFFFFFFu; // 801ED7F8
  c->lr=0x801ED800u; f_801EE5DC(c); // 801ED7FC
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED800
  c->r[0]=c->r[3]+0x00000002u; // 801ED804
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED808
  goto L_801ED8D8; // 801ED80C
L_801ED810:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED810
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED814
  c->lr=0x801ED81Cu; f_800752CC(c); // 801ED818
  {uint32_t ea=c->r[2]+0xFFFFC238u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED81C
  fcmp(c,0,c->f[1],c->f[0]); // 801ED820
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED824
  if (!crb(c,2)) { goto L_801ED8D8; } // 801ED828
  c->r[3]=c->r[31]|c->r[31]; // 801ED82C
  c->r[4]=0u+0xFFFFFFFFu; // 801ED830
  c->lr=0x801ED838u; f_801EE5DC(c); // 801ED834
  {uint32_t ea=c->r[31]+0x0000277Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED838
  c->r[3]=c->r[31]|c->r[31]; // 801ED83C
  c->r[4]=0u+0x00000004u; // 801ED840
  c->r[5]=0u+0x00000000u; // 801ED844
  c->lr=0x801ED84Cu; f_801B07AC(c); // 801ED848
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED84C
  c->r[0]=c->r[3]+0x00000001u; // 801ED850
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED854
  goto L_801ED8D8; // 801ED858
L_801ED85C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED85C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED860
  c->lr=0x801ED868u; f_800752CC(c); // 801ED864
  {uint32_t ea=c->r[2]+0xFFFFC23Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED868
  fcmp(c,0,c->f[1],c->f[0]); // 801ED86C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801ED870
  if (!crb(c,2)) { goto L_801ED8D8; } // 801ED874
  c->r[3]=0u+0x00000001u; // 801ED878
  goto L_801ED8DC; // 801ED87C
L_801ED880:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED880
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED884
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED888
  c->lr=0x801ED890u; f_8016498C(c); // 801ED88C
  cmps(c,0,(int32_t)c->r[3],0); // 801ED890
  if (crb(c,2)) { goto L_801ED8D8; } // 801ED894
  c->r[0]=0u+0x00000000u; // 801ED898
  c->r[3]=c->r[31]|c->r[31]; // 801ED89C
  W32(c->r[31]+0x00002770u,c->r[0]); // 801ED8A0
  c->r[4]=0u+0x00000000u; // 801ED8A4
  c->lr=0x801ED8ACu; f_801EE668(c); // 801ED8A8
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED8AC
  c->r[0]=c->r[3]+0x00000001u; // 801ED8B0
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED8B4
  goto L_801ED8D8; // 801ED8B8
L_801ED8BC:;
  c->r[3]=c->r[31]|c->r[31]; // 801ED8BC
  c->r[4]=0u+0x00000000u; // 801ED8C0
  c->lr=0x801ED8C8u; f_801EE668(c); // 801ED8C4
  cmpu(c,0,c->r[3],0x00000001u); // 801ED8C8
  if (!crb(c,2)) { goto L_801ED8D8; } // 801ED8CC
  c->r[3]=0u+0x00000001u; // 801ED8D0
  goto L_801ED8DC; // 801ED8D4
L_801ED8D8:;
  c->r[3]=0u+0x00000000u; // 801ED8D8
L_801ED8DC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801ED8DC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801ED8E0
  c->lr=c->r[0]; // 801ED8E4
  c->r[1]=c->r[1]+0x00000040u; // 801ED8E8
  return; // 801ED8EC
}

// fn_801ED8F0
void f_801ED8F0(Ctx* __restrict c) {
  trace_call(0x801ED8F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED8F0
  c->r[0]=c->lr; // 801ED8F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801ED8F8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801ED8FC
  c->r[31]=c->r[3]|c->r[3]; // 801ED900
  c->r[3]=c->r[1]+0x00000014u; // 801ED904
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801ED908
  c->r[4]=c->r[31]+0x000008D0u; // 801ED90C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801ED910
  c->ctr=c->r[12]; // 801ED914
  if (true) { c->lr=0x801ED91Cu; dispatch(c,c->ctr); } // 801ED918
  c->r[0]=R32(c->r[31]+0x000026F4u); // 801ED91C
  cmpu(c,0,c->r[0],0x00000008u); // 801ED920
  if (crb(c,1)) { goto L_801EDBD4; } // 801ED924
  c->r[3]=0u+0x80400000u; // 801ED928
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ED92C
  c->r[3]=c->r[3]+0x000079B8u; // 801ED930
  c->r[3]=R32(c->r[3]+c->r[0]); // 801ED934
  c->ctr=c->r[3]; // 801ED938
  if (true) { switch (c->ctr) { case 0x801ED940u: goto L_801ED940; case 0x801ED9A0u: goto L_801ED9A0; case 0x801EDA30u: goto L_801EDA30; case 0x801EDA84u: goto L_801EDA84; case 0x801EDAB8u: goto L_801EDAB8; case 0x801EDB58u: goto L_801EDB58; case 0x801EDB7Cu: goto L_801EDB7C; case 0x801EDBB8u: goto L_801EDBB8; case 0x801EDBD4u: goto L_801EDBD4; default: break; } dispatch(c,c->ctr); return; } // 801ED93C
L_801ED940:;
  c->r[4]=R32(c->r[13]+0xFFFF89DCu); // 801ED940
  c->r[3]=c->r[31]+0x000008ECu; // 801ED944
  c->lr=0x801ED94Cu; f_80075440(c); // 801ED948
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED94C
  c->r[5]=c->r[3]|c->r[3]; // 801ED950
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED954
  c->r[3]=c->r[31]+0x00000C88u; // 801ED958
  c->r[4]=c->r[31]+0x000008ECu; // 801ED95C
  c->r[6]=0u+0x00000000u; // 801ED960
  c->r[7]=0u+0x00000004u; // 801ED964
  c->lr=0x801ED96Cu; f_800BB0C8(c); // 801ED968
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801ED96C
  c->lr=0x801ED974u; f_801F821C(c); // 801ED970
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801ED974
  cmps(c,0,(int32_t)c->r[0],3); // 801ED978
  if (!crb(c,2)) { goto L_801ED990; } // 801ED97C
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED980
  {uint32_t ea=c->r[2]+0xFFFFC228u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED984
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED988
  c->lr=0x801ED990u; f_80165B9C(c); // 801ED98C
L_801ED990:;
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801ED990
  c->r[0]=c->r[3]+0x00000001u; // 801ED994
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801ED998
  goto L_801EDBD4; // 801ED99C
L_801ED9A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801ED9A0
  c->r[4]=0u+0x00000001u; // 801ED9A4
  c->lr=0x801ED9ACu; f_801EE070(c); // 801ED9A8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED9AC
  c->r[3]=c->r[1]+0x00000008u; // 801ED9B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801ED9B4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 801ED9B8
  c->lr=0x801ED9C0u; f_800521A0(c); // 801ED9BC
  c->r[3]=0u+0x80580000u; // 801ED9C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED9C4
  c->r[3]=c->r[3]+0xFFFFBA0Cu; // 801ED9C8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED9CC
  fcmp(c,0,c->f[1],c->f[0]); // 801ED9D0
  if (!crb(c,1)) { goto L_801EDBD4; } // 801ED9D4
  c->r[3]=R32(c->r[31]+0x00000974u); // 801ED9D8
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801ED9DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801ED9E0
  c->lr=0x801ED9E8u; f_80165B9C(c); // 801ED9E4
  c->r[4]=R32(c->r[31]+0x00002710u); // 801ED9E8
  c->r[3]=c->r[31]|c->r[31]; // 801ED9EC
  c->lr=0x801ED9F4u; f_801EE5DC(c); // 801ED9F0
  c->r[4]=R32(c->r[13]+0xFFFF89BCu); // 801ED9F4
  c->r[3]=c->r[31]+0x000008ECu; // 801ED9F8
  c->lr=0x801EDA00u; f_80075440(c); // 801ED9FC
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDA00
  c->r[5]=c->r[3]|c->r[3]; // 801EDA04
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDA08
  c->r[3]=c->r[31]+0x00000C88u; // 801EDA0C
  c->r[4]=c->r[31]+0x000008ECu; // 801EDA10
  c->r[6]=0u+0x00000000u; // 801EDA14
  c->r[7]=0u+0x00000004u; // 801EDA18
  c->lr=0x801EDA20u; f_800BB0C8(c); // 801EDA1C
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDA20
  c->r[0]=c->r[3]+0x00000002u; // 801EDA24
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDA28
  goto L_801EDBD4; // 801EDA2C
L_801EDA30:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDA30
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDA34
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDA38
  c->lr=0x801EDA40u; f_8016498C(c); // 801EDA3C
  cmps(c,0,(int32_t)c->r[3],0); // 801EDA40
  if (crb(c,2)) { goto L_801EDBD4; } // 801EDA44
  c->r[4]=R32(c->r[13]+0xFFFF89BCu); // 801EDA48
  c->r[3]=c->r[31]+0x000008ECu; // 801EDA4C
  c->lr=0x801EDA54u; f_80075440(c); // 801EDA50
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDA54
  c->r[5]=c->r[3]|c->r[3]; // 801EDA58
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDA5C
  c->r[3]=c->r[31]+0x00000C88u; // 801EDA60
  c->r[4]=c->r[31]+0x000008ECu; // 801EDA64
  c->r[6]=0u+0x00000000u; // 801EDA68
  c->r[7]=0u+0x00000004u; // 801EDA6C
  c->lr=0x801EDA74u; f_800BB0C8(c); // 801EDA70
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDA74
  c->r[0]=c->r[3]+0x00000001u; // 801EDA78
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDA7C
  goto L_801EDBD4; // 801EDA80
L_801EDA84:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDA84
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDA88
  c->lr=0x801EDA90u; f_800752CC(c); // 801EDA8C
  {uint32_t ea=c->r[2]+0xFFFFC240u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDA90
  fcmp(c,0,c->f[1],c->f[0]); // 801EDA94
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EDA98
  if (!crb(c,2)) { goto L_801EDBD4; } // 801EDA9C
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDAA0
  c->r[0]=0u+0x00000001u; // 801EDAA4
  W8(c->r[31]+0x00001F63u,c->r[0]); // 801EDAA8
  c->r[0]=c->r[3]+0x00000001u; // 801EDAAC
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDAB0
  goto L_801EDBD4; // 801EDAB4
L_801EDAB8:;
  c->r[0]=R8(c->r[31]+0x00001F62u); // 801EDAB8
  cmpu(c,0,c->r[0],0x00000001u); // 801EDABC
  if (!crb(c,2)) { goto L_801EDB0C; } // 801EDAC0
  c->r[4]=R32(c->r[13]+0xFFFF89D4u); // 801EDAC4
  c->r[3]=c->r[31]+0x000008ECu; // 801EDAC8
  c->lr=0x801EDAD0u; f_80075440(c); // 801EDACC
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDAD0
  c->r[5]=c->r[3]|c->r[3]; // 801EDAD4
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDAD8
  c->r[3]=c->r[31]+0x00000C88u; // 801EDADC
  c->r[4]=c->r[31]+0x000008ECu; // 801EDAE0
  c->r[6]=0u+0x00000000u; // 801EDAE4
  c->r[7]=0u+0x00000004u; // 801EDAE8
  c->lr=0x801EDAF0u; f_800BB0C8(c); // 801EDAEC
  c->r[3]=c->r[31]|c->r[31]; // 801EDAF0
  c->r[4]=0u+0xFFFFFFFFu; // 801EDAF4
  c->lr=0x801EDAFCu; f_801EE5DC(c); // 801EDAF8
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDAFC
  c->r[0]=c->r[3]+0x00000002u; // 801EDB00
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDB04
  goto L_801EDBD4; // 801EDB08
L_801EDB0C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDB0C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDB10
  c->lr=0x801EDB18u; f_800752CC(c); // 801EDB14
  {uint32_t ea=c->r[2]+0xFFFFC244u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDB18
  fcmp(c,0,c->f[1],c->f[0]); // 801EDB1C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EDB20
  if (!crb(c,2)) { goto L_801EDBD4; } // 801EDB24
  c->r[3]=c->r[31]|c->r[31]; // 801EDB28
  c->r[4]=0u+0xFFFFFFFFu; // 801EDB2C
  c->lr=0x801EDB34u; f_801EE5DC(c); // 801EDB30
  {uint32_t ea=c->r[31]+0x00002780u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDB34
  c->r[3]=c->r[31]|c->r[31]; // 801EDB38
  c->r[4]=0u+0x00000004u; // 801EDB3C
  c->r[5]=0u+0x00000000u; // 801EDB40
  c->lr=0x801EDB48u; f_801B07AC(c); // 801EDB44
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDB48
  c->r[0]=c->r[3]+0x00000001u; // 801EDB4C
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDB50
  goto L_801EDBD4; // 801EDB54
L_801EDB58:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDB58
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDB5C
  c->lr=0x801EDB64u; f_800752CC(c); // 801EDB60
  {uint32_t ea=c->r[2]+0xFFFFC23Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDB64
  fcmp(c,0,c->f[1],c->f[0]); // 801EDB68
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EDB6C
  if (!crb(c,2)) { goto L_801EDBD4; } // 801EDB70
  c->r[3]=0u+0x00000001u; // 801EDB74
  goto L_801EDBD8; // 801EDB78
L_801EDB7C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDB7C
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDB80
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDB84
  c->lr=0x801EDB8Cu; f_8016498C(c); // 801EDB88
  cmps(c,0,(int32_t)c->r[3],0); // 801EDB8C
  if (crb(c,2)) { goto L_801EDBD4; } // 801EDB90
  c->r[0]=0u+0x00000000u; // 801EDB94
  c->r[3]=c->r[31]|c->r[31]; // 801EDB98
  W32(c->r[31]+0x00002770u,c->r[0]); // 801EDB9C
  c->r[4]=0u+0x00000000u; // 801EDBA0
  c->lr=0x801EDBA8u; f_801EE668(c); // 801EDBA4
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDBA8
  c->r[0]=c->r[3]+0x00000001u; // 801EDBAC
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDBB0
  goto L_801EDBD4; // 801EDBB4
L_801EDBB8:;
  c->r[3]=c->r[31]|c->r[31]; // 801EDBB8
  c->r[4]=0u+0x00000000u; // 801EDBBC
  c->lr=0x801EDBC4u; f_801EE668(c); // 801EDBC0
  cmpu(c,0,c->r[3],0x00000001u); // 801EDBC4
  if (!crb(c,2)) { goto L_801EDBD4; } // 801EDBC8
  c->r[3]=0u+0x00000001u; // 801EDBCC
  goto L_801EDBD8; // 801EDBD0
L_801EDBD4:;
  c->r[3]=0u+0x00000000u; // 801EDBD4
L_801EDBD8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801EDBD8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801EDBDC
  c->lr=c->r[0]; // 801EDBE0
  c->r[1]=c->r[1]+0x00000050u; // 801EDBE4
  return; // 801EDBE8
}

// fn_801EDBEC
void f_801EDBEC(Ctx* __restrict c) {
  trace_call(0x801EDBECu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDBEC
  c->r[0]=c->lr; // 801EDBF0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EDBF4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801EDBF8
  c->r[31]=c->r[3]|c->r[3]; // 801EDBFC
  c->r[3]=c->r[1]+0x00000014u; // 801EDC00
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EDC04
  c->r[4]=c->r[31]+0x000008D0u; // 801EDC08
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EDC0C
  c->ctr=c->r[12]; // 801EDC10
  if (true) { c->lr=0x801EDC18u; dispatch(c,c->ctr); } // 801EDC14
  c->r[0]=R32(c->r[31]+0x000026F4u); // 801EDC18
  cmpu(c,0,c->r[0],0x00000007u); // 801EDC1C
  if (crb(c,1)) { goto L_801EDE5C; } // 801EDC20
  c->r[3]=0u+0x80400000u; // 801EDC24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EDC28
  c->r[3]=c->r[3]+0x000079DCu; // 801EDC2C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801EDC30
  c->ctr=c->r[3]; // 801EDC34
  if (true) { switch (c->ctr) { case 0x801EDC3Cu: goto L_801EDC3C; case 0x801EDC78u: goto L_801EDC78; case 0x801EDD10u: goto L_801EDD10; case 0x801EDD44u: goto L_801EDD44; case 0x801EDDE4u: goto L_801EDDE4; case 0x801EDE04u: goto L_801EDE04; case 0x801EDE40u: goto L_801EDE40; case 0x801EDE5Cu: goto L_801EDE5C; default: break; } dispatch(c,c->ctr); return; } // 801EDC38
L_801EDC3C:;
  c->r[4]=R32(c->r[13]+0xFFFF89D8u); // 801EDC3C
  c->r[3]=c->r[31]+0x000008ECu; // 801EDC40
  c->lr=0x801EDC48u; f_80075440(c); // 801EDC44
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDC48
  c->r[5]=c->r[3]|c->r[3]; // 801EDC4C
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDC50
  c->r[3]=c->r[31]+0x00000C88u; // 801EDC54
  c->r[4]=c->r[31]+0x000008ECu; // 801EDC58
  c->r[6]=0u+0x00000000u; // 801EDC5C
  c->r[7]=0u+0x00000004u; // 801EDC60
  c->lr=0x801EDC68u; f_800BB0C8(c); // 801EDC64
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDC68
  c->r[0]=c->r[3]+0x00000001u; // 801EDC6C
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDC70
  goto L_801EDE5C; // 801EDC74
L_801EDC78:;
  c->r[3]=c->r[31]|c->r[31]; // 801EDC78
  c->r[4]=0u+0x00000001u; // 801EDC7C
  c->lr=0x801EDC84u; f_801EE070(c); // 801EDC80
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDC84
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDC88
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDC8C
  c->lr=0x801EDC94u; f_8016498C(c); // 801EDC90
  cmps(c,0,(int32_t)c->r[3],0); // 801EDC94
  if (!crb(c,2)) { goto L_801EDCC8; } // 801EDC98
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDC9C
  c->r[3]=c->r[1]+0x00000008u; // 801EDCA0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDCA4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EDCA8
  c->lr=0x801EDCB0u; f_800521A0(c); // 801EDCAC
  c->r[3]=0u+0x80580000u; // 801EDCB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDCB4
  c->r[3]=c->r[3]+0xFFFFBA0Cu; // 801EDCB8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDCBC
  fcmp(c,0,c->f[1],c->f[0]); // 801EDCC0
  if (!crb(c,1)) { goto L_801EDE5C; } // 801EDCC4
L_801EDCC8:;
  c->r[4]=R32(c->r[31]+0x00002710u); // 801EDCC8
  c->r[3]=c->r[31]|c->r[31]; // 801EDCCC
  c->lr=0x801EDCD4u; f_801EE5DC(c); // 801EDCD0
  c->r[4]=R32(c->r[13]+0xFFFF89BCu); // 801EDCD4
  c->r[3]=c->r[31]+0x000008ECu; // 801EDCD8
  c->lr=0x801EDCE0u; f_80075440(c); // 801EDCDC
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDCE0
  c->r[5]=c->r[3]|c->r[3]; // 801EDCE4
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDCE8
  c->r[3]=c->r[31]+0x00000C88u; // 801EDCEC
  c->r[4]=c->r[31]+0x000008ECu; // 801EDCF0
  c->r[6]=0u+0x00000000u; // 801EDCF4
  c->r[7]=0u+0x00000004u; // 801EDCF8
  c->lr=0x801EDD00u; f_800BB0C8(c); // 801EDCFC
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDD00
  c->r[0]=c->r[3]+0x00000001u; // 801EDD04
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDD08
  goto L_801EDE5C; // 801EDD0C
L_801EDD10:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDD10
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDD14
  c->lr=0x801EDD1Cu; f_800752CC(c); // 801EDD18
  {uint32_t ea=c->r[2]+0xFFFFC240u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDD1C
  fcmp(c,0,c->f[1],c->f[0]); // 801EDD20
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EDD24
  if (!crb(c,2)) { goto L_801EDE5C; } // 801EDD28
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDD2C
  c->r[0]=0u+0x00000001u; // 801EDD30
  W8(c->r[31]+0x00001F63u,c->r[0]); // 801EDD34
  c->r[0]=c->r[3]+0x00000001u; // 801EDD38
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDD3C
  goto L_801EDE5C; // 801EDD40
L_801EDD44:;
  c->r[0]=R8(c->r[31]+0x00001F62u); // 801EDD44
  cmpu(c,0,c->r[0],0x00000001u); // 801EDD48
  if (!crb(c,2)) { goto L_801EDD98; } // 801EDD4C
  c->r[4]=R32(c->r[13]+0xFFFF89D4u); // 801EDD50
  c->r[3]=c->r[31]+0x000008ECu; // 801EDD54
  c->lr=0x801EDD5Cu; f_80075440(c); // 801EDD58
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDD5C
  c->r[5]=c->r[3]|c->r[3]; // 801EDD60
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDD64
  c->r[3]=c->r[31]+0x00000C88u; // 801EDD68
  c->r[4]=c->r[31]+0x000008ECu; // 801EDD6C
  c->r[6]=0u+0x00000000u; // 801EDD70
  c->r[7]=0u+0x00000004u; // 801EDD74
  c->lr=0x801EDD7Cu; f_800BB0C8(c); // 801EDD78
  c->r[3]=c->r[31]|c->r[31]; // 801EDD7C
  c->r[4]=0u+0xFFFFFFFFu; // 801EDD80
  c->lr=0x801EDD88u; f_801EE5DC(c); // 801EDD84
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDD88
  c->r[0]=c->r[3]+0x00000002u; // 801EDD8C
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDD90
  goto L_801EDE5C; // 801EDD94
L_801EDD98:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDD98
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDD9C
  c->lr=0x801EDDA4u; f_800752CC(c); // 801EDDA0
  {uint32_t ea=c->r[2]+0xFFFFC244u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDDA4
  fcmp(c,0,c->f[1],c->f[0]); // 801EDDA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EDDAC
  if (!crb(c,2)) { goto L_801EDE5C; } // 801EDDB0
  {uint32_t ea=c->r[31]+0x00002780u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDDB4
  c->r[3]=c->r[31]|c->r[31]; // 801EDDB8
  c->r[4]=0u+0x00000004u; // 801EDDBC
  c->r[5]=0u+0x00000000u; // 801EDDC0
  c->lr=0x801EDDC8u; f_801B07AC(c); // 801EDDC4
  c->r[3]=c->r[31]|c->r[31]; // 801EDDC8
  c->r[4]=0u+0xFFFFFFFFu; // 801EDDCC
  c->lr=0x801EDDD4u; f_801EE5DC(c); // 801EDDD0
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDDD4
  c->r[0]=c->r[3]+0x00000001u; // 801EDDD8
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDDDC
  goto L_801EDE5C; // 801EDDE0
L_801EDDE4:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDDE4
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDDE8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDDEC
  c->lr=0x801EDDF4u; f_8016498C(c); // 801EDDF0
  cmps(c,0,(int32_t)c->r[3],0); // 801EDDF4
  if (crb(c,2)) { goto L_801EDE5C; } // 801EDDF8
  c->r[3]=0u+0x00000001u; // 801EDDFC
  goto L_801EDE60; // 801EDE00
L_801EDE04:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDE04
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDE08
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDE0C
  c->lr=0x801EDE14u; f_8016498C(c); // 801EDE10
  cmps(c,0,(int32_t)c->r[3],0); // 801EDE14
  if (crb(c,2)) { goto L_801EDE5C; } // 801EDE18
  c->r[0]=0u+0x00000000u; // 801EDE1C
  c->r[3]=c->r[31]|c->r[31]; // 801EDE20
  W32(c->r[31]+0x00002770u,c->r[0]); // 801EDE24
  c->r[4]=0u+0x00000000u; // 801EDE28
  c->lr=0x801EDE30u; f_801EE668(c); // 801EDE2C
  c->r[3]=R32(c->r[31]+0x000026F4u); // 801EDE30
  c->r[0]=c->r[3]+0x00000001u; // 801EDE34
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDE38
  goto L_801EDE5C; // 801EDE3C
L_801EDE40:;
  c->r[3]=c->r[31]|c->r[31]; // 801EDE40
  c->r[4]=0u+0x00000000u; // 801EDE44
  c->lr=0x801EDE4Cu; f_801EE668(c); // 801EDE48
  cmpu(c,0,c->r[3],0x00000001u); // 801EDE4C
  if (!crb(c,2)) { goto L_801EDE5C; } // 801EDE50
  c->r[3]=0u+0x00000001u; // 801EDE54
  goto L_801EDE60; // 801EDE58
L_801EDE5C:;
  c->r[3]=0u+0x00000000u; // 801EDE5C
L_801EDE60:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801EDE60
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801EDE64
  c->lr=c->r[0]; // 801EDE68
  c->r[1]=c->r[1]+0x00000050u; // 801EDE6C
  return; // 801EDE70
}

// fn_801EDE74
void f_801EDE74(Ctx* __restrict c) {
  trace_call(0x801EDE74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDE74
  c->r[0]=c->lr; // 801EDE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EDE7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EDE80
  c->r[31]=c->r[3]|c->r[3]; // 801EDE84
  c->r[3]=c->r[3]+0x000008D0u; // 801EDE88
  c->lr=0x801EDE90u; f_80032620(c); // 801EDE8C
  c->r[4]=0u+0x00000000u; // 801EDE90
  c->r[0]=0u+0x00000001u; // 801EDE94
  W8(c->r[31]+0x00001F5Fu,c->r[4]); // 801EDE98
  c->r[3]=c->r[31]+0x000008ECu; // 801EDE9C
  W32(c->r[31]+0x00002710u,c->r[4]); // 801EDEA0
  W32(c->r[31]+0x000026F4u,c->r[0]); // 801EDEA4
  W32(c->r[31]+0x00002770u,c->r[4]); // 801EDEA8
  W32(c->r[31]+0x00002774u,c->r[4]); // 801EDEAC
  c->r[4]=R32(c->r[13]+0xFFFF89E8u); // 801EDEB0
  c->lr=0x801EDEB8u; f_80075440(c); // 801EDEB4
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EDEB8
  c->r[5]=c->r[3]|c->r[3]; // 801EDEBC
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EDEC0
  c->r[3]=c->r[31]+0x00000C88u; // 801EDEC4
  c->r[4]=c->r[31]+0x000008ECu; // 801EDEC8
  c->r[6]=0u+0x00000000u; // 801EDECC
  c->r[7]=0u+0x00000004u; // 801EDED0
  c->lr=0x801EDED8u; f_800BB0C8(c); // 801EDED4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EDED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EDEDC
  c->lr=c->r[0]; // 801EDEE0
  c->r[1]=c->r[1]+0x00000010u; // 801EDEE4
  return; // 801EDEE8
}

// fn_801EDEEC
void f_801EDEEC(Ctx* __restrict c) {
  trace_call(0x801EDEECu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDEEC
  c->r[0]=c->lr; // 801EDEF0
  W32(c->r[1]+0x00000074u,c->r[0]); // 801EDEF4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801EDEF8
  c->r[31]=c->r[3]|c->r[3]; // 801EDEFC
  c->r[3]=c->r[1]+0x00000038u; // 801EDF00
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EDF04
  c->r[4]=c->r[31]+0x000008D0u; // 801EDF08
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EDF0C
  c->ctr=c->r[12]; // 801EDF10
  if (true) { c->lr=0x801EDF18u; dispatch(c,c->ctr); } // 801EDF14
  c->r[0]=0u+0x00000006u; // 801EDF18
  c->r[5]=c->r[1]+0x00000004u; // 801EDF1C
  c->r[4]=c->r[1]+0x00000034u; // 801EDF20
  c->ctr=c->r[0]; // 801EDF24
L_801EDF28:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801EDF28
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801EDF2C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801EDF30
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801EDF34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EDF28; } // 801EDF38
  c->r[3]=c->r[31]+0x0000254Cu; // 801EDF3C
  c->r[4]=c->r[1]+0x00000008u; // 801EDF40
  c->lr=0x801EDF48u; f_801ABF6C(c); // 801EDF44
  c->r[0]=R32(c->r[31]+0x00002774u); // 801EDF48
  cmps(c,0,(int32_t)c->r[0],1); // 801EDF4C
  if (crb(c,2)) { goto L_801EDF9C; } // 801EDF50
  if (!crb(c,0)) { goto L_801EDFB8; } // 801EDF54
  cmps(c,0,(int32_t)c->r[0],0); // 801EDF58
  if (!crb(c,0)) { goto L_801EDF64; } // 801EDF5C
  goto L_801EDFB8; // 801EDF60
L_801EDF64:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801EDF64
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EDF68
  c->lr=0x801EDF70u; f_800752CC(c); // 801EDF6C
  {uint32_t ea=c->r[2]+0xFFFFC248u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EDF70
  fcmp(c,0,c->f[1],c->f[0]); // 801EDF74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EDF78
  if (!crb(c,2)) { goto L_801EDFB8; } // 801EDF7C
  c->r[5]=R32(c->r[31]+0x00002774u); // 801EDF80
  c->r[3]=c->r[31]|c->r[31]; // 801EDF84
  c->r[4]=0u+0x00000000u; // 801EDF88
  c->r[0]=c->r[5]+0x00000001u; // 801EDF8C
  W32(c->r[31]+0x00002774u,c->r[0]); // 801EDF90
  c->lr=0x801EDF98u; f_801EE668(c); // 801EDF94
  goto L_801EDFB8; // 801EDF98
L_801EDF9C:;
  c->r[3]=c->r[31]|c->r[31]; // 801EDF9C
  c->r[4]=0u+0x00000000u; // 801EDFA0
  c->lr=0x801EDFA8u; f_801EE668(c); // 801EDFA4
  cmpu(c,0,c->r[3],0x00000001u); // 801EDFA8
  if (!crb(c,2)) { goto L_801EDFB8; } // 801EDFAC
  c->r[3]=c->r[31]|c->r[31]; // 801EDFB0
  c->lr=0x801EDFB8u; f_800AC7C4(c); // 801EDFB4
L_801EDFB8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801EDFB8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801EDFBC
  c->lr=c->r[0]; // 801EDFC0
  c->r[1]=c->r[1]+0x00000070u; // 801EDFC4
  return; // 801EDFC8
}

// fn_801EDFCC
void f_801EDFCC(Ctx* __restrict c) {
  trace_call(0x801EDFCCu);
  return; // 801EDFCC
}

// fn_801EDFD0
void f_801EDFD0(Ctx* __restrict c) {
  trace_call(0x801EDFD0u);
  return; // 801EDFD0
}

// fn_801EDFD4
void f_801EDFD4(Ctx* __restrict c) {
  trace_call(0x801EDFD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDFD4
  c->r[0]=c->lr; // 801EDFD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EDFDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EDFE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EDFE4
  c->r[30]=c->r[3]|c->r[3]; // 801EDFE8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801EDFEC
  c->lr=0x801EDFF4u; f_800F39EC(c); // 801EDFF0
  c->r[4]=0u+0xFFFFFFFFu; // 801EDFF4
  c->lr=0x801EDFFCu; f_800DB6F8(c); // 801EDFF8
  c->r[5]=R32(c->r[30]+0x00000974u); // 801EDFFC
  c->r[3]=c->r[30]+0x000008ECu; // 801EE000
  c->r[4]=R32(c->r[13]+0xFFFF89D8u); // 801EE004
  c->r[5]=R32(c->r[5]+0x00000000u); // 801EE008
  c->r[31]=R32(c->r[5]+0x00000018u); // 801EE00C
  c->lr=0x801EE014u; f_80075440(c); // 801EE010
  cmpu(c,0,c->r[31],c->r[3]); // 801EE014
  if (crb(c,2)) { goto L_801EE048; } // 801EE018
  c->r[4]=R32(c->r[13]+0xFFFF89D8u); // 801EE01C
  c->r[3]=c->r[30]+0x000008ECu; // 801EE020
  c->lr=0x801EE028u; f_80075440(c); // 801EE024
  {uint32_t ea=c->r[2]+0xFFFFC24Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE028
  c->r[5]=c->r[3]|c->r[3]; // 801EE02C
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE030
  c->r[3]=c->r[30]+0x00000C88u; // 801EE034
  c->r[4]=c->r[30]+0x000008ECu; // 801EE038
  c->r[6]=0u+0x00000000u; // 801EE03C
  c->r[7]=0u+0x00000000u; // 801EE040
  c->lr=0x801EE048u; f_800BB0C8(c); // 801EE044
L_801EE048:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE048
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EE04C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EE050
  c->lr=c->r[0]; // 801EE054
  c->r[1]=c->r[1]+0x00000010u; // 801EE058
  return; // 801EE05C
}

// fn_801EE060
void f_801EE060(Ctx* __restrict c) {
  trace_call(0x801EE060u);
  return; // 801EE060
}

// fn_801EE064
void f_801EE064(Ctx* __restrict c) {
  trace_call(0x801EE064u);
  return; // 801EE064
}

// fn_801EE068
void f_801EE068(Ctx* __restrict c) {
  trace_call(0x801EE068u);
  return; // 801EE068
}

// fn_801EE06C
void f_801EE06C(Ctx* __restrict c) {
  trace_call(0x801EE06Cu);
  return; // 801EE06C
}

// fn_801EE070
void f_801EE070(Ctx* __restrict c) {
  trace_call(0x801EE070u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801EE070
  c->r[4]=0u+0x80580000u; // 801EE074
  {uint32_t ea=c->r[3]+0x00002594u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE078
  c->r[4]=c->r[4]+0xFFFFBA0Cu; // 801EE07C
  c->r[5]=c->r[4]+c->r[0]; // 801EE080
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE084
  fcmp(c,0,c->f[0],c->f[1]); // 801EE088
  if (!crb(c,1)) { goto L_801EE0BC; } // 801EE08C
  c->r[4]=0u+0x804D0000u; // 801EE090
  {uint32_t ea=c->r[2]+0xFFFFC250u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE094
  c->r[4]=c->r[4]+0x00003318u; // 801EE098
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE09C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[0],c->f[2],c->f[1])); // 801EE0A0
  {uint32_t ea=c->r[3]+0x00002594u; WF32(ea,c->f[1]);} // 801EE0A4
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE0A8
  fcmp(c,0,c->f[0],c->f[1]); // 801EE0AC
  if (!crb(c,0)) return; // 801EE0B0
  {uint32_t ea=c->r[3]+0x00002594u; WF32(ea,c->f[0]);} // 801EE0B4
  return; // 801EE0B8
L_801EE0BC:;
  if (!crb(c,0)) return; // 801EE0BC
  c->r[4]=0u+0x804D0000u; // 801EE0C0
  {uint32_t ea=c->r[2]+0xFFFFC250u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE0C4
  c->r[4]=c->r[4]+0x00003318u; // 801EE0C8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE0CC
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[0],c->f[2],-c->f[1])); // 801EE0D0
  {uint32_t ea=c->r[3]+0x00002594u; WF32(ea,c->f[1]);} // 801EE0D4
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE0D8
  fcmp(c,0,c->f[0],c->f[1]); // 801EE0DC
  if (!crb(c,1)) return; // 801EE0E0
  {uint32_t ea=c->r[3]+0x00002594u; WF32(ea,c->f[0]);} // 801EE0E4
  return; // 801EE0E8
}

// fn_801EE0EC
void f_801EE0EC(Ctx* __restrict c) {
  trace_call(0x801EE0ECu);
  c->r[0]=R8(c->r[3]+0x00001F5Fu); // 801EE0EC
  cmps(c,0,(int32_t)c->r[0],0); // 801EE0F0
  if (!crb(c,2)) return; // 801EE0F4
  {uint32_t ea=c->r[3]+0x00002758u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE0F8
  c->r[4]=0u+0x804D0000u; // 801EE0FC
  {uint32_t ea=c->r[3]+0x0000276Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE100
  c->r[4]=c->r[4]+0x00003318u; // 801EE104
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EE108
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[0]); // 801EE10C
  {uint32_t ea=c->r[3]+0x00002760u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE110
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[3],c->f[0])); // 801EE114
  fcmp(c,0,c->f[0],c->f[2]); // 801EE118
  {uint32_t ea=c->r[3]+0x00002760u; WF32(ea,c->f[0]);} // 801EE11C
  if (!crb(c,1)) return; // 801EE120
  f_801EE12C(c); return; // 801EE124
  return; // 801EE128
}

// fn_801EE12C
void f_801EE12C(Ctx* __restrict c) {
  trace_call(0x801EE12Cu);
  {uint32_t ea=c->r[3]+0x00002758u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE12C
  c->r[0]=0u+0x00000001u; // 801EE130
  W8(c->r[3]+0x00001F5Fu,c->r[0]); // 801EE134
  {uint32_t ea=c->r[3]+0x00002760u; WF32(ea,c->f[0]);} // 801EE138
  c->r[3]=c->r[3]+0x000008D0u; // 801EE13C
  f_800327CC(c); return; // 801EE140
}

// fn_801EE144
void f_801EE144(Ctx* __restrict c) {
  trace_call(0x801EE144u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE144
  c->r[0]=c->lr; // 801EE148
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EE14C
  c->r[11]=c->r[1]+0x00000050u; // 801EE150
  c->lr=0x801EE158u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE154
  c->r[31]=c->r[1]|c->r[1]; // 801EE158
  c->r[30]=c->r[5]|c->r[5]; // 801EE15C
  c->r[28]=c->r[3]|c->r[3]; // 801EE160
  c->r[12]=R32(c->r[30]+0x00000000u); // 801EE164
  c->r[3]=c->r[30]|c->r[30]; // 801EE168
  c->r[29]=c->r[4]|c->r[4]; // 801EE16C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EE170
  c->ctr=c->r[12]; // 801EE174
  if (true) { c->lr=0x801EE17Cu; dispatch(c,c->ctr); } // 801EE178
  cmps(c,0,(int32_t)c->r[3],20); // 801EE17C
  if (crb(c,2)) { goto L_801EE2D4; } // 801EE180
  if (!crb(c,0)) { goto L_801EE194; } // 801EE184
  cmps(c,0,(int32_t)c->r[3],3); // 801EE188
  if (crb(c,2)) { goto L_801EE1A8; } // 801EE18C
  goto L_801EE2C4; // 801EE190
L_801EE194:;
  cmps(c,0,(int32_t)c->r[3],1030); // 801EE194
  if (!crb(c,0)) { goto L_801EE2C4; } // 801EE198
  cmps(c,0,(int32_t)c->r[3],1025); // 801EE19C
  if (!crb(c,0)) { goto L_801EE26C; } // 801EE1A0
  goto L_801EE2C4; // 801EE1A4
L_801EE1A8:;
  c->r[3]=R32(c->r[28]+0x00000054u); // 801EE1A8
  cmps(c,0,(int32_t)c->r[3],0); // 801EE1AC
  if (crb(c,2)) { goto L_801EE210; } // 801EE1B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EE1B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EE1B8
  c->ctr=c->r[12]; // 801EE1BC
  if (true) { c->lr=0x801EE1C4u; dispatch(c,c->ctr); } // 801EE1C0
  c->lr=0x801EE1C8u; f_8007A658(c); // 801EE1C4
  c->r[27]=c->r[3]|c->r[3]; // 801EE1C8
  c->r[3]=0u+0x00000001u; // 801EE1CC
  c->lr=0x801EE1D4u; f_8007A658(c); // 801EE1D0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 801EE1D4
  if (!crb(c,1)) { goto L_801EE208; } // 801EE1D8
  c->r[27]=addc(c,c->r[28],0x00000280u,0); cr0(c,c->r[27]); // 801EE1DC
  if (crb(c,2)) { goto L_801EE200; } // 801EE1E0
  W32(c->r[31]+0x00000034u,c->r[1]); // 801EE1E4
  c->r[3]=c->r[27]|c->r[27]; // 801EE1E8
  c->r[4]=c->r[13]+0xFFFF80C5u; // 801EE1EC
  c->lr=0x801EE1F4u; f_800761D8(c); // 801EE1F0
  c->r[3]=0u+0x803F0000u; // 801EE1F4
  c->r[3]=c->r[3]+0x00003224u; // 801EE1F8
  W32(c->r[27]+0x00000000u,c->r[3]); // 801EE1FC
L_801EE200:;
  W32(c->r[28]+0x00000058u,c->r[27]); // 801EE200
  goto L_801EE258; // 801EE204
L_801EE208:;
  c->r[0]=0u+0x00000000u; // 801EE208
  W32(c->r[28]+0x00000054u,c->r[0]); // 801EE20C
L_801EE210:;
  c->r[3]=R32(c->r[28]+0x0000005Cu); // 801EE210
  c->r[0]=c->r[3]+0x00000001u; // 801EE214
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EE218
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801EE21C
  c->r[0]=c->r[0]^c->r[3]; // 801EE220
  c->r[0]=c->r[0]-c->r[3]; // 801EE224
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801EE228
  c->r[0]=c->r[28]+c->r[0]; // 801EE22C
  c->r[27]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[27]); // 801EE230
  if (crb(c,2)) { goto L_801EE254; } // 801EE234
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801EE238
  c->r[3]=c->r[27]|c->r[27]; // 801EE23C
  c->r[4]=c->r[13]+0xFFFF80C5u; // 801EE240
  c->lr=0x801EE248u; f_800761D8(c); // 801EE244
  c->r[3]=0u+0x803F0000u; // 801EE248
  c->r[3]=c->r[3]+0x00003224u; // 801EE24C
  W32(c->r[27]+0x00000000u,c->r[3]); // 801EE250
L_801EE254:;
  W32(c->r[28]+0x00000054u,c->r[27]); // 801EE254
L_801EE258:;
  c->r[3]=c->r[28]|c->r[28]; // 801EE258
  c->r[4]=c->r[29]|c->r[29]; // 801EE25C
  c->r[5]=c->r[30]|c->r[30]; // 801EE260
  c->lr=0x801EE268u; f_800B5B1C(c); // 801EE264
  goto L_801EE2D4; // 801EE268
L_801EE26C:;
  c->r[0]=R32(c->r[28]+0x000007E4u); // 801EE26C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801EE270
  if (!crb(c,2)) { goto L_801EE2D4; } // 801EE274
  c->r[0]=R32(c->r[30]+0x00000168u); // 801EE278
  cmps(c,0,(int32_t)c->r[0],22); // 801EE27C
  if (crb(c,2)) { goto L_801EE2D4; } // 801EE280
  c->r[12]=R32(c->r[28]+0x00000010u); // 801EE284
  c->r[3]=c->r[28]|c->r[28]; // 801EE288
  c->r[4]=c->r[30]|c->r[30]; // 801EE28C
  c->r[27]=R8(c->r[30]+0x00000034u); // 801EE290
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801EE294
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE298
  c->ctr=c->r[12]; // 801EE29C
  if (true) { c->lr=0x801EE2A4u; dispatch(c,c->ctr); } // 801EE2A0
  c->r[3]=c->r[28]|c->r[28]; // 801EE2A4
  c->r[4]=c->r[27]|c->r[27]; // 801EE2A8
  c->lr=0x801EE2B0u; f_801EE2F4(c); // 801EE2AC
  c->r[4]=c->r[30]|c->r[30]; // 801EE2B0
  c->r[5]=c->r[28]|c->r[28]; // 801EE2B4
  c->r[3]=c->r[28]+0x000008D0u; // 801EE2B8
  c->lr=0x801EE2C0u; f_80032370(c); // 801EE2BC
  goto L_801EE2D4; // 801EE2C0
L_801EE2C4:;
  c->r[3]=c->r[28]|c->r[28]; // 801EE2C4
  c->r[4]=c->r[29]|c->r[29]; // 801EE2C8
  c->r[5]=c->r[30]|c->r[30]; // 801EE2CC
  c->lr=0x801EE2D4u; f_800B5B1C(c); // 801EE2D0
L_801EE2D4:;
  c->r[10]=c->r[31]|c->r[31]; // 801EE2D4
  c->r[11]=c->r[10]+0x00000050u; // 801EE2D8
  c->lr=0x801EE2E0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE2DC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801EE2E0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801EE2E4
  c->r[1]=c->r[10]|c->r[10]; // 801EE2E8
  c->lr=c->r[0]; // 801EE2EC
  return; // 801EE2F0
}

// fn_801EE2F4
void f_801EE2F4(Ctx* __restrict c) {
  trace_call(0x801EE2F4u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE2F4
  c->r[0]=c->lr; // 801EE2F8
  W32(c->r[1]+0x00000084u,c->r[0]); // 801EE2FC
  c->r[11]=c->r[1]+0x00000080u; // 801EE300
  c->lr=0x801EE308u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE304
  c->r[31]=c->r[1]|c->r[1]; // 801EE308
  {uint32_t ea=c->r[2]+0xFFFFC204u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE30C
  c->r[30]=c->r[3]|c->r[3]; // 801EE310
  c->r[6]=0u+0x00000000u; // 801EE314
  goto L_801EE334; // 801EE318
L_801EE31C:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801EE31C
  if (!crb(c,2)) { goto L_801EE330; } // 801EE320
  c->r[5]=c->r[3]+c->r[0]; // 801EE324
  {uint32_t ea=c->r[5]+0x00002718u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE328
  goto L_801EE348; // 801EE32C
L_801EE330:;
  c->r[6]=c->r[6]+0x00000001u; // 801EE330
L_801EE334:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801EE334
  c->r[5]=c->r[3]+c->r[0]; // 801EE338
  c->r[5]=R32(c->r[5]+0x00002714u); // 801EE33C
  cmps(c,0,(int32_t)c->r[5],0); // 801EE340
  if (!crb(c,0)) { IRQCHK(c); goto L_801EE31C; } // 801EE344
L_801EE348:;
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 801EE348
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE34C
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE350
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801EE354
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801EE358
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[2]);} // 801EE35C
  fcmp(c,0,c->f[1],c->f[0]); // 801EE360
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE364
  if (!crb(c,2)) { goto L_801EE430; } // 801EE368
  c->r[0]=R32(c->r[3]+0x00000054u); // 801EE36C
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[0]);} // 801EE370
  cmps(c,0,(int32_t)c->r[0],0); // 801EE374
  if (crb(c,2)) { goto L_801EE3E0; } // 801EE378
  c->r[3]=c->r[0]|c->r[0]; // 801EE37C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EE380
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EE384
  c->ctr=c->r[12]; // 801EE388
  if (true) { c->lr=0x801EE390u; dispatch(c,c->ctr); } // 801EE38C
  c->lr=0x801EE394u; f_8007A658(c); // 801EE390
  c->r[29]=c->r[3]|c->r[3]; // 801EE394
  c->r[3]=0u+0x00000002u; // 801EE398
  c->lr=0x801EE3A0u; f_8007A658(c); // 801EE39C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801EE3A0
  if (!crb(c,1)) { goto L_801EE3D8; } // 801EE3A4
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801EE3A8
  if (crb(c,2)) { goto L_801EE3D0; } // 801EE3AC
  W32(c->r[31]+0x00000064u,c->r[1]); // 801EE3B0
  c->r[3]=c->r[29]|c->r[29]; // 801EE3B4
  c->lr=0x801EE3BCu; f_8007614C(c); // 801EE3B8
  goto L_801EE3D0; // 801EE3BC
  c->r[3]=0u+0x00000000u; // 801EE3C0
  c->r[4]=0u+0x00000000u; // 801EE3C4
  c->r[5]=0u+0x00000000u; // 801EE3C8
  c->lr=0x801EE3D0u; f_8028BC3C(c); // 801EE3CC
L_801EE3D0:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801EE3D0
  goto L_801EE5BC; // 801EE3D4
L_801EE3D8:;
  c->r[0]=0u+0x00000000u; // 801EE3D8
  W32(c->r[30]+0x00000054u,c->r[0]); // 801EE3DC
L_801EE3E0:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801EE3E0
  c->r[0]=c->r[3]+0x00000001u; // 801EE3E4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EE3E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801EE3EC
  c->r[0]=c->r[0]^c->r[3]; // 801EE3F0
  c->r[0]=c->r[0]-c->r[3]; // 801EE3F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801EE3F8
  c->r[0]=c->r[30]+c->r[0]; // 801EE3FC
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801EE400
  if (crb(c,2)) { goto L_801EE428; } // 801EE404
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 801EE408
  c->r[3]=c->r[29]|c->r[29]; // 801EE40C
  c->lr=0x801EE414u; f_8007614C(c); // 801EE410
  goto L_801EE428; // 801EE414
  c->r[3]=0u+0x00000000u; // 801EE418
  c->r[4]=0u+0x00000000u; // 801EE41C
  c->r[5]=0u+0x00000000u; // 801EE420
  c->lr=0x801EE428u; f_8028BC3C(c); // 801EE424
L_801EE428:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801EE428
  goto L_801EE5BC; // 801EE42C
L_801EE430:;
  c->r[0]=R8(c->r[3]+0x00001F61u); // 801EE430
  cmpu(c,0,c->r[0],0x00000001u); // 801EE434
  if (!crb(c,2)) { goto L_801EE47C; } // 801EE438
  {uint32_t ea=c->r[3]+0x00001F68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE43C
  fcmp(c,0,c->f[1],c->f[0]); // 801EE440
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EE444
  if (!crb(c,2)) { goto L_801EE47C; } // 801EE448
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 801EE44C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801EE450
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[1]);} // 801EE454
  fcmp(c,0,c->f[2],c->f[0]); // 801EE458
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE45C
  if (!crb(c,2)) { goto L_801EE468; } // 801EE460
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 801EE464
L_801EE468:;
  c->r[0]=R8(c->r[3]+0x00001F63u); // 801EE468
  cmpu(c,0,c->r[0],0x00000001u); // 801EE46C
  if (!crb(c,2)) { goto L_801EE47C; } // 801EE470
  c->r[0]=0u+0x00000001u; // 801EE474
  W8(c->r[3]+0x00001F62u,c->r[0]); // 801EE478
L_801EE47C:;
  cmps(c,0,(int32_t)c->r[4],2); // 801EE47C
  if (!crb(c,2)) { goto L_801EE4E8; } // 801EE480
  {uint32_t ea=c->r[3]+0x0000275Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE484
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE488
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801EE48C
  c->f[0]=c->ps1[0]=S(c->f[2]); // 801EE490
  {uint32_t ea=c->r[3]+0x0000275Cu; WF32(ea,c->f[2]);} // 801EE494
  fcmp(c,0,c->f[0],c->f[1]); // 801EE498
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE49C
  if (!crb(c,2)) { goto L_801EE5BC; } // 801EE4A0
  c->r[0]=R32(c->r[3]+0x00002710u); // 801EE4A4
  {uint32_t ea=c->r[3]+0x00002754u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE4A8
  cmps(c,0,(int32_t)c->r[0],2); // 801EE4AC
  {uint32_t ea=c->r[3]+0x0000275Cu; WF32(ea,c->f[0]);} // 801EE4B0
  if (!crb(c,0)) { goto L_801EE5BC; } // 801EE4B4
  c->r[0]=R8(c->r[3]+0x00001F60u); // 801EE4B8
  cmps(c,0,(int32_t)c->r[0],0); // 801EE4BC
  if (!crb(c,2)) { goto L_801EE4CC; } // 801EE4C0
  {uint32_t ea=c->r[3]+0x0000275Cu; WF32(ea,c->f[1]);} // 801EE4C4
  goto L_801EE5BC; // 801EE4C8
L_801EE4CC:;
  c->r[4]=0u+0x00000001u; // 801EE4CC
  c->r[0]=0u+0x00000004u; // 801EE4D0
  W32(c->r[3]+0x000026F4u,c->r[4]); // 801EE4D4
  W32(c->r[3]+0x00002710u,c->r[0]); // 801EE4D8
  c->r[3]=c->r[30]|c->r[30]; // 801EE4DC
  c->lr=0x801EE4E4u; f_801EE12C(c); // 801EE4E0
  goto L_801EE5BC; // 801EE4E4
L_801EE4E8:;
  cmps(c,0,(int32_t)c->r[4],17); // 801EE4E8
  if (!crb(c,2)) { goto L_801EE5BC; } // 801EE4EC
  c->r[0]=R8(c->r[3]+0x00001F5Fu); // 801EE4F0
  cmpu(c,0,c->r[0],0x00000001u); // 801EE4F4
  if (!crb(c,2)) { goto L_801EE5BC; } // 801EE4F8
  {uint32_t ea=c->r[3]+0x00002760u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE4FC
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE500
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801EE504
  c->f[1]=c->ps1[1]=S(c->f[2]); // 801EE508
  {uint32_t ea=c->r[3]+0x00002760u; WF32(ea,c->f[2]);} // 801EE50C
  fcmp(c,0,c->f[1],c->f[0]); // 801EE510
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EE514
  if (!crb(c,2)) { goto L_801EE5BC; } // 801EE518
  c->r[0]=R8(c->r[3]+0x00001F60u); // 801EE51C
  {uint32_t ea=c->r[3]+0x00002760u; WF32(ea,c->f[0]);} // 801EE520
  cmpu(c,0,c->r[0],0x00000001u); // 801EE524
  if (!crb(c,2)) { goto L_801EE5BC; } // 801EE528
  c->r[3]=R32(c->r[3]+0x00000054u); // 801EE52C
  cmps(c,0,(int32_t)c->r[3],0); // 801EE530
  if (crb(c,2)) { goto L_801EE584; } // 801EE534
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EE538
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EE53C
  c->ctr=c->r[12]; // 801EE540
  if (true) { c->lr=0x801EE548u; dispatch(c,c->ctr); } // 801EE544
  c->lr=0x801EE54Cu; f_8007A658(c); // 801EE548
  c->r[29]=c->r[3]|c->r[3]; // 801EE54C
  c->r[3]=0u+0x00000006u; // 801EE550
  c->lr=0x801EE558u; f_8007A658(c); // 801EE554
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801EE558
  if (!crb(c,1)) { goto L_801EE57C; } // 801EE55C
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801EE560
  if (crb(c,2)) { goto L_801EE574; } // 801EE564
  W32(c->r[31]+0x00000034u,c->r[1]); // 801EE568
  c->r[3]=c->r[29]|c->r[29]; // 801EE56C
  c->lr=0x801EE574u; f_800AC5F0(c); // 801EE570
L_801EE574:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801EE574
  goto L_801EE5BC; // 801EE578
L_801EE57C:;
  c->r[0]=0u+0x00000000u; // 801EE57C
  W32(c->r[30]+0x00000054u,c->r[0]); // 801EE580
L_801EE584:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801EE584
  c->r[0]=c->r[3]+0x00000001u; // 801EE588
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EE58C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801EE590
  c->r[0]=c->r[0]^c->r[3]; // 801EE594
  c->r[0]=c->r[0]-c->r[3]; // 801EE598
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801EE59C
  c->r[0]=c->r[30]+c->r[0]; // 801EE5A0
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801EE5A4
  if (crb(c,2)) { goto L_801EE5B8; } // 801EE5A8
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801EE5AC
  c->r[3]=c->r[29]|c->r[29]; // 801EE5B0
  c->lr=0x801EE5B8u; f_800AC5F0(c); // 801EE5B4
L_801EE5B8:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801EE5B8
L_801EE5BC:;
  c->r[10]=c->r[31]|c->r[31]; // 801EE5BC
  c->r[11]=c->r[10]+0x00000080u; // 801EE5C0
  c->lr=0x801EE5C8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE5C4
  c->r[10]=R32(c->r[1]+0x00000000u); // 801EE5C8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801EE5CC
  c->r[1]=c->r[10]|c->r[10]; // 801EE5D0
  c->lr=c->r[0]; // 801EE5D4
  return; // 801EE5D8
}

// fn_801EE5DC
void f_801EE5DC(Ctx* __restrict c) {
  trace_call(0x801EE5DCu);
  c->r[0]=0u+0x00000000u; // 801EE5DC
  cmps(c,0,(int32_t)c->r[4],2); // 801EE5E0
  W8(c->r[3]+0x00001F61u,c->r[0]); // 801EE5E4
  W8(c->r[3]+0x00001F63u,c->r[0]); // 801EE5E8
  W8(c->r[3]+0x00001F62u,c->r[0]); // 801EE5EC
  if (crb(c,2)) { goto L_801EE618; } // 801EE5F0
  if (!crb(c,0)) { goto L_801EE608; } // 801EE5F4
  cmps(c,0,(int32_t)c->r[4],0); // 801EE5F8
  if (crb(c,2)) return; // 801EE5FC
  if (!crb(c,0)) { goto L_801EE654; } // 801EE600
  return; // 801EE604
L_801EE608:;
  cmps(c,0,(int32_t)c->r[4],4); // 801EE608
  if (crb(c,2)) { goto L_801EE640; } // 801EE60C
  if (!crb(c,0)) return; // 801EE610
  goto L_801EE62C; // 801EE614
L_801EE618:;
  {uint32_t ea=c->r[3]+0x00002764u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE618
  c->r[0]=0u+0x00000001u; // 801EE61C
  W8(c->r[3]+0x00001F61u,c->r[0]); // 801EE620
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 801EE624
  return; // 801EE628
L_801EE62C:;
  {uint32_t ea=c->r[3]+0x00002768u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE62C
  c->r[0]=0u+0x00000001u; // 801EE630
  W8(c->r[3]+0x00001F61u,c->r[0]); // 801EE634
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 801EE638
  return; // 801EE63C
L_801EE640:;
  {uint32_t ea=c->r[3]+0x00002768u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE640
  c->r[0]=0u+0x00000001u; // 801EE644
  W8(c->r[3]+0x00001F61u,c->r[0]); // 801EE648
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 801EE64C
  return; // 801EE650
L_801EE654:;
  {uint32_t ea=c->r[3]+0x00002784u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE654
  c->r[0]=0u+0x00000001u; // 801EE658
  W8(c->r[3]+0x00001F61u,c->r[0]); // 801EE65C
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 801EE660
  return; // 801EE664
}

// fn_801EE668
void f_801EE668(Ctx* __restrict c) {
  trace_call(0x801EE668u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE668
  c->r[0]=c->lr; // 801EE66C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EE670
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801EE674
  c->r[31]=c->r[4]|c->r[4]; // 801EE678
  W32(c->r[1]+0x00000028u,c->r[30]); // 801EE67C
  c->r[30]=c->r[3]|c->r[3]; // 801EE680
  c->r[0]=R32(c->r[3]+0x00002770u); // 801EE684
  cmps(c,0,(int32_t)c->r[0],1); // 801EE688
  if (crb(c,2)) { goto L_801EE748; } // 801EE68C
  if (!crb(c,0)) { goto L_801EE6A0; } // 801EE690
  cmps(c,0,(int32_t)c->r[0],0); // 801EE694
  if (!crb(c,0)) { goto L_801EE6AC; } // 801EE698
  goto L_801EE848; // 801EE69C
L_801EE6A0:;
  cmps(c,0,(int32_t)c->r[0],3); // 801EE6A0
  if (!crb(c,0)) { goto L_801EE848; } // 801EE6A4
  goto L_801EE7C8; // 801EE6A8
L_801EE6AC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801EE6AC
  c->r[4]=0u+0x80580000u; // 801EE6B0
  {uint32_t ea=c->r[3]+0x0000258Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE6B4
  c->r[4]=c->r[4]+0xFFFFBA0Cu; // 801EE6B8
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE6BC
  fcmp(c,0,c->f[1],c->f[0]); // 801EE6C0
  if (!crb(c,2)) { goto L_801EE6D0; } // 801EE6C4
  c->r[3]=0u+0x00000001u; // 801EE6C8
  goto L_801EE84C; // 801EE6CC
L_801EE6D0:;
  fcmp(c,0,c->f[0],c->f[1]); // 801EE6D0
  if (!crb(c,1)) { goto L_801EE710; } // 801EE6D4
  c->r[4]=R32(c->r[13]+0xFFFF89E4u); // 801EE6D8
  c->r[3]=c->r[3]+0x000008ECu; // 801EE6DC
  c->lr=0x801EE6E4u; f_80075440(c); // 801EE6E0
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE6E4
  c->r[5]=c->r[3]|c->r[3]; // 801EE6E8
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE6EC
  c->r[3]=c->r[30]+0x00000C88u; // 801EE6F0
  c->r[4]=c->r[30]+0x000008ECu; // 801EE6F4
  c->r[6]=0u+0x00000000u; // 801EE6F8
  c->r[7]=0u+0x00000004u; // 801EE6FC
  c->lr=0x801EE704u; f_800BB0C8(c); // 801EE700
  c->r[0]=0u+0x00000001u; // 801EE704
  W32(c->r[30]+0x00002770u,c->r[0]); // 801EE708
  goto L_801EE848; // 801EE70C
L_801EE710:;
  c->r[4]=R32(c->r[13]+0xFFFF89DCu); // 801EE710
  c->r[3]=c->r[3]+0x000008ECu; // 801EE714
  c->lr=0x801EE71Cu; f_80075440(c); // 801EE718
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE71C
  c->r[5]=c->r[3]|c->r[3]; // 801EE720
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE724
  c->r[3]=c->r[30]+0x00000C88u; // 801EE728
  c->r[4]=c->r[30]+0x000008ECu; // 801EE72C
  c->r[6]=0u+0x00000000u; // 801EE730
  c->r[7]=0u+0x00000004u; // 801EE734
  c->lr=0x801EE73Cu; f_800BB0C8(c); // 801EE738
  c->r[0]=0u+0x00000002u; // 801EE73C
  W32(c->r[30]+0x00002770u,c->r[0]); // 801EE740
  goto L_801EE848; // 801EE744
L_801EE748:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801EE748
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EE74C
  c->lr=0x801EE754u; f_800752CC(c); // 801EE750
  {uint32_t ea=c->r[2]+0xFFFFC200u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE754
  fcmp(c,0,c->f[1],c->f[0]); // 801EE758
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EE75C
  if (!crb(c,2)) { goto L_801EE770; } // 801EE760
  c->r[3]=c->r[30]|c->r[30]; // 801EE764
  c->r[4]=c->r[31]|c->r[31]; // 801EE768
  c->lr=0x801EE770u; f_801EE070(c); // 801EE76C
L_801EE770:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801EE770
  c->r[3]=0u+0x80580000u; // 801EE774
  {uint32_t ea=c->r[30]+0x0000258Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE778
  c->r[3]=c->r[3]+0xFFFFBA0Cu; // 801EE77C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE780
  fcmp(c,0,c->f[1],c->f[0]); // 801EE784
  if (!crb(c,0)) { goto L_801EE848; } // 801EE788
  {uint32_t ea=c->r[30]+0x0000258Cu; WF32(ea,c->f[1]);} // 801EE78C
  c->r[3]=c->r[30]|c->r[30]; // 801EE790
  c->lr=0x801EE798u; f_8018615C(c); // 801EE794
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE798
  c->r[3]=c->r[1]+0x00000014u; // 801EE79C
  {uint32_t ea=c->r[2]+0xFFFFC1DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE7A0
  c->f[3]=c->f[2]; // 801EE7A4
  c->lr=0x801EE7ACu; f_800521A0(c); // 801EE7A8
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE7AC
  c->r[4]=c->r[3]|c->r[3]; // 801EE7B0
  {uint32_t ea=c->r[2]+0xFFFFC1D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE7B4
  c->r[3]=c->r[30]+0x0000254Cu; // 801EE7B8
  c->lr=0x801EE7C0u; f_801ACA00(c); // 801EE7BC
  c->r[3]=0u+0x00000001u; // 801EE7C0
  goto L_801EE84C; // 801EE7C4
L_801EE7C8:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 801EE7C8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801EE7CC
  c->lr=0x801EE7D4u; f_800752CC(c); // 801EE7D0
  {uint32_t ea=c->r[2]+0xFFFFC200u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE7D4
  fcmp(c,0,c->f[1],c->f[0]); // 801EE7D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EE7DC
  if (!crb(c,2)) { goto L_801EE7F0; } // 801EE7E0
  c->r[3]=c->r[30]|c->r[30]; // 801EE7E4
  c->r[4]=c->r[31]|c->r[31]; // 801EE7E8
  c->lr=0x801EE7F0u; f_801EE070(c); // 801EE7EC
L_801EE7F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801EE7F0
  c->r[3]=0u+0x80580000u; // 801EE7F4
  {uint32_t ea=c->r[30]+0x0000258Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE7F8
  c->r[3]=c->r[3]+0xFFFFBA0Cu; // 801EE7FC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE800
  fcmp(c,0,c->f[1],c->f[0]); // 801EE804
  if (!crb(c,1)) { goto L_801EE848; } // 801EE808
  {uint32_t ea=c->r[30]+0x0000258Cu; WF32(ea,c->f[1]);} // 801EE80C
  c->r[3]=c->r[30]|c->r[30]; // 801EE810
  c->lr=0x801EE818u; f_8018615C(c); // 801EE814
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE818
  c->r[3]=c->r[1]+0x00000008u; // 801EE81C
  {uint32_t ea=c->r[2]+0xFFFFC1DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE820
  c->f[3]=c->f[2]; // 801EE824
  c->lr=0x801EE82Cu; f_800521A0(c); // 801EE828
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE82C
  c->r[4]=c->r[3]|c->r[3]; // 801EE830
  {uint32_t ea=c->r[2]+0xFFFFC1D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE834
  c->r[3]=c->r[30]+0x0000254Cu; // 801EE838
  c->lr=0x801EE840u; f_801ACA00(c); // 801EE83C
  c->r[3]=0u+0x00000001u; // 801EE840
  goto L_801EE84C; // 801EE844
L_801EE848:;
  c->r[3]=0u+0x00000000u; // 801EE848
L_801EE84C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EE84C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801EE850
  c->r[30]=R32(c->r[1]+0x00000028u); // 801EE854
  c->lr=c->r[0]; // 801EE858
  c->r[1]=c->r[1]+0x00000030u; // 801EE85C
  return; // 801EE860
}

// fn_801EE864
void f_801EE864(Ctx* __restrict c) {
  trace_call(0x801EE864u);
  {uint32_t ea=c->r[1]+0xFFFFEEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE864
  c->r[0]=c->lr; // 801EE868
  W32(c->r[1]+0x00001164u,c->r[0]); // 801EE86C
  c->r[0]=0u+0x00001158u; // 801EE870
  {uint32_t ea=c->r[1]+0x00001150u; WF64(ea,c->f[31]);} // 801EE874
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 801EE878
  c->r[11]=c->r[1]+0x00001150u; // 801EE87C
  c->lr=0x801EE884u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE880
  c->r[31]=c->r[1]|c->r[1]; // 801EE884
  {uint32_t ea=c->r[2]+0xFFFFC1D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE888
  c->r[25]=c->r[3]|c->r[3]; // 801EE88C
  c->r[3]=c->r[31]+0x00000328u; // 801EE890
  {uint32_t ea=c->r[31]+0x000002FCu; WF32(ea,c->f[0]);} // 801EE894
  c->lr=0x801EE89Cu; f_800462E8(c); // 801EE898
  c->r[0]=0u+0x00000000u; // 801EE89C
  c->r[3]=c->r[31]+0x00000134u; // 801EE8A0
  W32(c->r[31]+0x00001120u,c->r[0]); // 801EE8A4
  c->r[26]=0u+0x00000000u; // 801EE8A8
  c->lr=0x801EE8B0u; f_80063ACC(c); // 801EE8AC
  c->r[3]=0u+0x803F0000u; // 801EE8B0
  c->r[3]=c->r[3]+0x000022C4u; // 801EE8B4
  W32(c->r[31]+0x00000154u,c->r[3]); // 801EE8B8
  goto L_801EED38; // 801EE8BC
L_801EE8C0:;
  c->r[12]=R32(c->r[25]+0x000008D0u); // 801EE8C0
  c->r[4]=c->r[25]+0x000008D0u; // 801EE8C4
  c->r[5]=c->r[27]|c->r[27]; // 801EE8C8
  c->r[3]=c->r[31]+0x00000104u; // 801EE8CC
  c->r[12]=R32(c->r[12]+0x00000038u); // 801EE8D0
  c->ctr=c->r[12]; // 801EE8D4
  if (true) { c->lr=0x801EE8DCu; dispatch(c,c->ctr); } // 801EE8D8
  c->r[3]=c->r[31]+0x00000098u; // 801EE8DC
  c->r[4]=c->r[31]+0x00000104u; // 801EE8E0
  c->lr=0x801EE8E8u; f_80032FD8(c); // 801EE8E4
  c->r[3]=c->r[31]+0x00000158u; // 801EE8E8
  c->r[4]=c->r[31]+0x00000098u; // 801EE8EC
  c->lr=0x801EE8F4u; f_8003F468(c); // 801EE8F0
  {uint32_t ea=c->r[28]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 801EE8F4
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE8F8
  fcmp(c,0,c->f[31],c->f[0]); // 801EE8FC
  if (crb(c,2)) { goto L_801EE96C; } // 801EE900
  c->r[12]=R32(c->r[25]+0x000008D0u); // 801EE904
  c->r[4]=c->r[25]+0x000008D0u; // 801EE908
  c->r[5]=c->r[27]|c->r[27]; // 801EE90C
  c->r[3]=c->r[31]+0x000000D4u; // 801EE910
  c->r[12]=R32(c->r[12]+0x00000038u); // 801EE914
  c->ctr=c->r[12]; // 801EE918
  if (true) { c->lr=0x801EE920u; dispatch(c,c->ctr); } // 801EE91C
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE920
  c->r[3]=c->r[31]+0x00000080u; // 801EE924
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE928
  {uint32_t ea=c->r[31]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EE92C
  c->lr=0x801EE934u; f_800521A0(c); // 801EE930
  {uint32_t ea=c->r[31]+0x00000080u; psq_load(c,0,ea,0,0);} // 801EE934
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 801EE938
  {uint32_t ea=c->r[31]+0x0000008Cu; psq_store(c,0,ea,0,0);} // 801EE93C
  {uint32_t ea=c->r[31]+0x00000088u; psq_load(c,0,ea,1,0);} // 801EE940
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 801EE944
  {uint32_t ea=c->r[31]+0x00000094u; psq_store(c,0,ea,1,0);} // 801EE948
  {uint32_t ea=c->r[31]+0x00000158u; psq_load(c,0,ea,0,0);} // 801EE94C
  {uint32_t ea=c->r[31]+0x0000008Cu; psq_load(c,1,ea,0,0);} // 801EE950
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801EE954
  {uint32_t ea=c->r[31]+0x00000158u; psq_store(c,0,ea,0,0);} // 801EE958
  {uint32_t ea=c->r[31]+0x00000160u; psq_load(c,0,ea,1,0);} // 801EE95C
  {uint32_t ea=c->r[31]+0x00000094u; psq_load(c,1,ea,1,0);} // 801EE960
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801EE964
  {uint32_t ea=c->r[31]+0x00000160u; psq_store(c,0,ea,1,0);} // 801EE968
L_801EE96C:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE96C
  {uint32_t ea=c->r[31]+0x00000164u; WF32(ea,c->f[0]);} // 801EE970
  c->r[0]=R32(c->r[25]+0x000008A0u); // 801EE974
  W32(c->r[31]+0x00000150u,c->r[0]); // 801EE978
  c->r[3]=R32(c->r[25]+0x00000000u); // 801EE97C
  c->r[0]=R32(c->r[25]+0x00000004u); // 801EE980
  W32(c->r[31]+0x00000078u,c->r[3]); // 801EE984
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 801EE988
  W32(c->r[31]+0x00000140u,c->r[3]); // 801EE98C
  W32(c->r[31]+0x00000144u,c->r[0]); // 801EE990
  c->lr=0x801EE998u; f_8003DA30(c); // 801EE994
  c->r[0]=R32(c->r[3]+0x00000004u); // 801EE998
  W32(c->r[31]+0x00000034u,c->r[0]); // 801EE99C
  W32(c->r[31]+0x00000030u,c->r[0]); // 801EE9A0
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801EE9A4
  W32(c->r[31]+0x00000048u,c->r[0]); // 801EE9A8
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 801EE9AC
  W32(c->r[31]+0x00000040u,c->r[0]); // 801EE9B0
  c->lr=0x801EE9B8u; f_8003DA30(c); // 801EE9B4
  c->r[4]=c->r[31]+0x00000134u; // 801EE9B8
  c->r[5]=c->r[31]+0x00000040u; // 801EE9BC
  c->r[6]=c->r[31]+0x000002F0u; // 801EE9C0
  c->lr=0x801EE9C8u; f_8003E788(c); // 801EE9C4
  W32(c->r[31]+0x00000044u,c->r[3]); // 801EE9C8
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801EE9CC
  goto L_801EED04; // 801EE9D0
L_801EE9D4:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801EE9D4
  c->r[27]=c->r[3]+0xFFFFFFF8u; // 801EE9D8
  c->r[12]=R32(c->r[27]+0x00000010u); // 801EE9DC
  c->r[3]=c->r[27]|c->r[27]; // 801EE9E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EE9E4
  c->ctr=c->r[12]; // 801EE9E8
  if (true) { c->lr=0x801EE9F0u; dispatch(c,c->ctr); } // 801EE9EC
  c->r[0]=c->r[4]+0x20000000u; // 801EE9F0
  W32(c->r[31]+0x00000074u,c->r[4]); // 801EE9F4
  cmpu(c,0,c->r[0],0x00000002u); // 801EE9F8
  W32(c->r[31]+0x00000070u,c->r[3]); // 801EE9FC
  if (!crb(c,2)) { goto L_801EEA0C; } // 801EEA00
  c->r[0]=0u+0x00000001u; // 801EEA04
  goto L_801EEA3C; // 801EEA08
L_801EEA0C:;
  c->r[4]=rotl(c->r[4],0)&0xFFFF0000u; // 801EEA0C
  c->r[3]=0u+0x00000000u; // 801EEA10
  goto L_801EEA1C; // 801EEA14
L_801EEA18:;
  c->r[3]=c->r[3]+0x00000001u; // 801EEA18
L_801EEA1C:;
  c->r[0]=0u+0x00000001u; // 801EEA1C
  c->r[5]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 801EEA20
  c->r[0]=rotl(c->r[5],0)&0xE0000000u; // 801EEA24
  c->r[0]=(rotl(c->r[5],0)&0x00000002u)|(c->r[0]&~0x00000002u); cr0(c,c->r[0]); // 801EEA28
  if (crb(c,2)) { IRQCHK(c); goto L_801EEA18; } // 801EEA2C
  c->r[3]=c->r[4]&c->r[5]; // 801EEA30
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801EEA34
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801EEA38
L_801EEA3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801EEA3C
  if (crb(c,2)) { goto L_801EECD8; } // 801EEA40
  c->r[28]=R32(c->r[31]+0x0000000Cu); // 801EEA44
  c->r[3]=c->r[31]+0x0000016Cu; // 801EEA48
  {uint32_t ea=c->r[2]+0xFFFFC254u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEA4C
  c->r[4]=c->r[31]+0x00000158u; // 801EEA50
  c->r[8]=R32(c->r[28]+0xFFFFFFF8u); // 801EEA54
  c->r[5]=c->r[31]+0x00000328u; // 801EEA58
  c->r[0]=R32(c->r[28]+0xFFFFFFFCu); // 801EEA5C
  c->r[6]=c->r[31]+0x00000060u; // 801EEA60
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEA64
  c->r[7]=0u+0x00000008u; // 801EEA68
  W32(c->r[31]+0x00000060u,c->r[8]); // 801EEA6C
  c->r[8]=0u+0xFFFFFFFFu; // 801EEA70
  W32(c->r[31]+0x00000064u,c->r[0]); // 801EEA74
  c->lr=0x801EEA7Cu; f_8003FF2C(c); // 801EEA78
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEA7C
  c->r[3]=0u+0x803F0000u; // 801EEA80
  c->r[3]=c->r[3]+0x0000244Cu; // 801EEA84
  c->r[29]=0u+0x00000000u; // 801EEA88
  W32(c->r[31]+0x0000016Cu,c->r[3]); // 801EEA8C
  {uint32_t ea=c->r[31]+0x000002E4u; WF32(ea,c->f[0]);} // 801EEA90
  {uint32_t ea=c->r[31]+0x000002E8u; WF32(ea,c->f[0]);} // 801EEA94
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[0]);} // 801EEA98
  c->r[3]=R32(c->r[28]+0xFFFFFFF8u); // 801EEA9C
  c->r[0]=R32(c->r[28]+0xFFFFFFFCu); // 801EEAA0
  cmps(c,0,(int32_t)c->r[3],0); // 801EEAA4
  W32(c->r[31]+0x00000068u,c->r[3]); // 801EEAA8
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 801EEAAC
  if (crb(c,2)) { goto L_801EEAD8; } // 801EEAB0
  c->lr=0x801EEAB8u; f_8003F2FC(c); // 801EEAB4
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 801EEAB8
  c->r[4]=R32(c->r[31]+0x00000068u); // 801EEABC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801EEAC0
  c->r[3]=c->r[3]+c->r[0]; // 801EEAC4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801EEAC8
  cmpu(c,0,c->r[4],c->r[0]); // 801EEACC
  if (!crb(c,2)) { goto L_801EEAD8; } // 801EEAD0
  c->r[29]=0u+0x00000001u; // 801EEAD4
L_801EEAD8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801EEAD8
  if (crb(c,2)) { goto L_801EECB4; } // 801EEADC
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 801EEAE0
  c->lr=0x801EEAE8u; f_802A6EE4(c); // 801EEAE4
  cmps(c,0,(int32_t)c->r[3],0); // 801EEAE8
  c->r[30]=c->r[3]|c->r[3]; // 801EEAEC
  if (crb(c,2)) { goto L_801EECB4; } // 801EEAF0
  if (crb(c,2)) { goto L_801EEB98; } // 801EEAF4
  c->r[0]=0u+0x00000000u; // 801EEAF8
  c->r[4]=0u+0x803F0000u; // 801EEAFC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801EEB00
  c->r[4]=c->r[4]+0x00001AF8u; // 801EEB04
  c->r[28]=c->r[3]+0x00000010u; // 801EEB08
  W32(c->r[3]+0x00000008u,c->r[0]); // 801EEB0C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801EEB10
  W32(c->r[31]+0x000000B8u,c->r[1]); // 801EEB14
  W32(c->r[31]+0x00000058u,c->r[0]); // 801EEB18
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 801EEB1C
  W32(c->r[31]+0x00000050u,c->r[0]); // 801EEB20
  W32(c->r[31]+0x00000054u,c->r[0]); // 801EEB24
  W32(c->r[3]+0x00000000u,c->r[4]); // 801EEB28
L_801EEB2C:;
  c->r[3]=c->r[28]|c->r[28]; // 801EEB2C
  c->lr=0x801EEB34u; f_8006BF9C(c); // 801EEB30
  c->r[28]=c->r[28]+0x00000028u; // 801EEB34
  c->r[0]=c->r[30]+0x00000150u; // 801EEB38
  cmpu(c,0,c->r[28],c->r[0]); // 801EEB3C
  if (crb(c,0)) { IRQCHK(c); goto L_801EEB2C; } // 801EEB40
  c->r[3]=c->r[30]+0x00000010u; // 801EEB44
  c->lr=0x801EEB4Cu; f_8006BFDC(c); // 801EEB48
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEB4C
  c->r[4]=0u+0x00000001u; // 801EEB50
  c->r[0]=0u+0x00000000u; // 801EEB54
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEB58
  {uint32_t ea=c->r[30]+0x00000154u; WF32(ea,c->f[1]);} // 801EEB5C
  c->r[3]=c->r[30]+0x00000010u; // 801EEB60
  W8(c->r[30]+0x00000164u,c->r[4]); // 801EEB64
  W32(c->r[30]+0x00000168u,c->r[4]); // 801EEB68
  W32(c->r[30]+0x0000016Cu,c->r[0]); // 801EEB6C
  W8(c->r[30]+0x00000170u,c->r[0]); // 801EEB70
  {uint32_t ea=c->r[30]+0x00000174u; WF32(ea,c->f[0]);} // 801EEB74
  c->lr=0x801EEB7Cu; f_8006BFDC(c); // 801EEB78
  c->r[3]=0u+0x803F0000u; // 801EEB7C
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEB80
  c->r[3]=c->r[3]+0x0000244Cu; // 801EEB84
  W32(c->r[30]+0x00000000u,c->r[3]); // 801EEB88
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[0]);} // 801EEB8C
  {uint32_t ea=c->r[30]+0x0000017Cu; WF32(ea,c->f[0]);} // 801EEB90
  {uint32_t ea=c->r[30]+0x00000180u; WF32(ea,c->f[0]);} // 801EEB94
L_801EEB98:;
  c->r[3]=R32(c->r[31]+0x00000170u); // 801EEB98
  c->r[29]=c->r[30]+0x00000010u; // 801EEB9C
  c->r[0]=R32(c->r[31]+0x00000174u); // 801EEBA0
  c->r[28]=c->r[31]+0x0000017Cu; // 801EEBA4
  W32(c->r[30]+0x00000004u,c->r[3]); // 801EEBA8
  W32(c->r[30]+0x00000008u,c->r[0]); // 801EEBAC
  c->r[0]=R32(c->r[31]+0x00000178u); // 801EEBB0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801EEBB4
L_801EEBB8:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEBB8
  c->r[3]=c->r[29]+0x00000008u; // 801EEBBC
  c->r[4]=c->r[28]+0x00000008u; // 801EEBC0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801EEBC4
  c->r[0]=R32(c->r[28]+0x00000004u); // 801EEBC8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801EEBCC
  c->lr=0x801EEBD4u; f_8003F468(c); // 801EEBD0
  c->r[3]=c->r[29]+0x00000014u; // 801EEBD4
  c->r[4]=c->r[28]+0x00000014u; // 801EEBD8
  c->lr=0x801EEBE0u; f_8003F468(c); // 801EEBDC
  c->r[3]=R32(c->r[28]+0x00000020u); // 801EEBE0
  c->r[0]=c->r[30]+0x00000150u; // 801EEBE4
  W32(c->r[29]+0x00000020u,c->r[3]); // 801EEBE8
  c->r[3]=R8(c->r[28]+0x00000024u); // 801EEBEC
  W8(c->r[29]+0x00000024u,c->r[3]); // 801EEBF0
  c->r[3]=R8(c->r[28]+0x00000025u); // 801EEBF4
  W8(c->r[29]+0x00000025u,c->r[3]); // 801EEBF8
  c->r[3]=R8(c->r[28]+0x00000026u); // 801EEBFC
  W8(c->r[29]+0x00000026u,c->r[3]); // 801EEC00
  c->r[3]=R8(c->r[28]+0x00000027u); // 801EEC04
  c->r[28]=c->r[28]+0x00000028u; // 801EEC08
  W8(c->r[29]+0x00000027u,c->r[3]); // 801EEC0C
  c->r[29]=c->r[29]+0x00000028u; // 801EEC10
  cmpu(c,0,c->r[29],c->r[0]); // 801EEC14
  if (crb(c,0)) { IRQCHK(c); goto L_801EEBB8; } // 801EEC18
  c->r[0]=R32(c->r[31]+0x000002BCu); // 801EEC1C
  c->r[3]=c->r[30]+0x00000158u; // 801EEC20
  c->r[4]=c->r[31]+0x000002C4u; // 801EEC24
  W32(c->r[30]+0x00000150u,c->r[0]); // 801EEC28
  {uint32_t ea=c->r[31]+0x000002C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEC2C
  {uint32_t ea=c->r[30]+0x00000154u; WF32(ea,c->f[0]);} // 801EEC30
  c->lr=0x801EEC38u; f_8003F468(c); // 801EEC34
  c->r[0]=R8(c->r[31]+0x000002D0u); // 801EEC38
  c->r[28]=addc(c,c->r[30],0x00000184u,0); cr0(c,c->r[28]); // 801EEC3C
  W8(c->r[30]+0x00000164u,c->r[0]); // 801EEC40
  c->r[0]=R32(c->r[31]+0x000002D4u); // 801EEC44
  W32(c->r[30]+0x00000168u,c->r[0]); // 801EEC48
  c->r[0]=R32(c->r[31]+0x000002D8u); // 801EEC4C
  W32(c->r[30]+0x0000016Cu,c->r[0]); // 801EEC50
  c->r[0]=R8(c->r[31]+0x000002DCu); // 801EEC54
  W8(c->r[30]+0x00000170u,c->r[0]); // 801EEC58
  {uint32_t ea=c->r[31]+0x000002E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEC5C
  {uint32_t ea=c->r[30]+0x00000174u; WF32(ea,c->f[0]);} // 801EEC60
  {uint32_t ea=c->r[31]+0x000002E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEC64
  {uint32_t ea=c->r[30]+0x00000178u; WF32(ea,c->f[0]);} // 801EEC68
  {uint32_t ea=c->r[31]+0x000002E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEC6C
  {uint32_t ea=c->r[30]+0x0000017Cu; WF32(ea,c->f[0]);} // 801EEC70
  {uint32_t ea=c->r[31]+0x000002ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEC74
  {uint32_t ea=c->r[30]+0x00000180u; WF32(ea,c->f[0]);} // 801EEC78
  if (crb(c,2)) { goto L_801EEC94; } // 801EEC7C
  c->r[0]=0u+0x00000000u; // 801EEC80
  W32(c->r[31]+0x000000D0u,c->r[1]); // 801EEC84
  W32(c->r[28]+0x00000000u,c->r[0]); // 801EEC88
  W32(c->r[28]+0x00000004u,c->r[0]); // 801EEC8C
  W32(c->r[28]+0x00000008u,c->r[30]); // 801EEC90
L_801EEC94:;
  c->lr=0x801EEC98u; f_8003F2FC(c); // 801EEC94
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 801EEC98
  c->r[4]=c->r[28]|c->r[28]; // 801EEC9C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801EECA0
  c->r[3]=c->r[3]+c->r[0]; // 801EECA4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801EECA8
  c->r[3]=c->r[3]+0x00000030u; // 801EECAC
  c->lr=0x801EECB4u; f_8003FD14(c); // 801EECB0
L_801EECB4:;
  c->r[0]=R32(c->r[31]+0x00000150u); // 801EECB4
  cmps(c,0,(int32_t)c->r[0],0); // 801EECB8
  if (crb(c,0)) { goto L_801EECC8; } // 801EECBC
  c->r[3]=R32(c->r[27]+0x00000028u); // 801EECC0
  W32(c->r[3]+0x00000018u,c->r[0]); // 801EECC4
L_801EECC8:;
  c->r[0]=0u+0xFFFFFFFFu; // 801EECC8
  c->r[3]=c->r[31]+0x0000016Cu; // 801EECCC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801EECD0
  c->lr=0x801EECD8u; f_8006BCB4(c); // 801EECD4
L_801EECD8:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801EECD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EECDC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801EECE0
  W32(c->r[31]+0x00000038u,c->r[0]); // 801EECE4
  c->lr=0x801EECECu; f_8003DA30(c); // 801EECE8
  c->r[4]=c->r[31]+0x00000134u; // 801EECEC
  c->r[5]=c->r[31]+0x00000038u; // 801EECF0
  c->r[6]=c->r[31]+0x000002F0u; // 801EECF4
  c->lr=0x801EECFCu; f_8003E788(c); // 801EECF8
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 801EECFC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801EED00
L_801EED04:;
  c->lr=0x801EED08u; f_8003DA30(c); // 801EED04
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801EED08
  c->r[3]=c->r[3]+0x00000004u; // 801EED0C
  W32(c->r[31]+0x00000028u,c->r[3]); // 801EED10
  cmpu(c,0,c->r[0],c->r[3]); // 801EED14
  W32(c->r[31]+0x00000024u,c->r[3]); // 801EED18
  W32(c->r[31]+0x00000020u,c->r[3]); // 801EED1C
  W32(c->r[31]+0x00000014u,c->r[3]); // 801EED20
  W32(c->r[31]+0x00000010u,c->r[0]); // 801EED24
  W32(c->r[31]+0x00000018u,c->r[3]); // 801EED28
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801EED2C
  if (!crb(c,2)) { IRQCHK(c); goto L_801EE9D4; } // 801EED30
  c->r[26]=c->r[26]+0x00000001u; // 801EED34
L_801EED38:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 801EED38
  c->r[3]=0u+0x803E0000u; // 801EED3C
  c->r[3]=c->r[3]+0x000015C4u; // 801EED40
  c->r[27]=R32(c->r[3]+c->r[0]); // 801EED44
  c->r[28]=c->r[3]+c->r[0]; // 801EED48
  cmps(c,0,(int32_t)c->r[27],0); // 801EED4C
  if (!crb(c,2)) { IRQCHK(c); goto L_801EE8C0; } // 801EED50
  c->r[0]=0u+0xFFFFFFFFu; // 801EED54
  c->r[3]=c->r[31]+0x00000328u; // 801EED58
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801EED5C
  c->lr=0x801EED64u; f_80046394(c); // 801EED60
  c->r[10]=c->r[31]|c->r[31]; // 801EED64
  c->r[0]=0u+0x00001158u; // 801EED68
  {uint32_t ea=c->r[10]+c->r[0]; psq_load(c,31,ea,0,0);} // 801EED6C
  c->r[11]=c->r[10]+0x00001150u; // 801EED70
  {uint32_t ea=c->r[31]+0x00001150u; c->f[31]=RF64(ea);} // 801EED74
  c->lr=0x801EED7Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EED78
  c->r[10]=R32(c->r[1]+0x00000000u); // 801EED7C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801EED80
  c->r[1]=c->r[10]|c->r[10]; // 801EED84
  c->lr=c->r[0]; // 801EED88
  return; // 801EED8C
}

// fn_801EED90
void f_801EED90(Ctx* __restrict c) {
  trace_call(0x801EED90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EED90
  c->r[0]=c->lr; // 801EED94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EED98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EED9C
  c->r[31]=c->r[3]|c->r[3]; // 801EEDA0
  c->lr=0x801EEDA8u; f_80061A4C(c); // 801EEDA4
  c->r[4]=0u+0x00000001u; // 801EEDA8
  c->r[3]=c->r[3]+0x000000ECu; // 801EEDAC
  c->lr=0x801EEDB4u; f_8012D230(c); // 801EEDB0
  c->lr=0x801EEDB8u; f_80061A4C(c); // 801EEDB4
  c->r[4]=c->r[31]+0x00002794u; // 801EEDB8
  c->lr=0x801EEDC0u; f_80062B34(c); // 801EEDBC
  c->lr=0x801EEDC4u; f_80061A4C(c); // 801EEDC0
  c->r[4]=0u+0x00000005u; // 801EEDC4
  c->lr=0x801EEDCCu; f_80062AC4(c); // 801EEDC8
  c->lr=0x801EEDD0u; f_80061A4C(c); // 801EEDCC
  {uint32_t ea=c->r[2]+0xFFFFC258u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEDD0
  c->lr=0x801EEDD8u; f_80063940(c); // 801EEDD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EEDD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EEDDC
  c->lr=c->r[0]; // 801EEDE0
  c->r[1]=c->r[1]+0x00000010u; // 801EEDE4
  return; // 801EEDE8
}

// fn_801EEDEC
void f_801EEDEC(Ctx* __restrict c) {
  trace_call(0x801EEDECu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEDEC
  c->r[0]=c->lr; // 801EEDF0
  W32(c->r[1]+0x00000084u,c->r[0]); // 801EEDF4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801EEDF8
  W32(c->r[1]+0x00000078u,c->r[30]); // 801EEDFC
  c->r[30]=c->r[3]|c->r[3]; // 801EEE00
  c->lr=0x801EEE08u; f_80061A4C(c); // 801EEE04
  c->r[31]=c->r[3]+0x0000035Cu; // 801EEE08
  c->r[3]=c->r[1]+0x00000050u; // 801EEE0C
  c->r[4]=c->r[31]|c->r[31]; // 801EEE10
  c->lr=0x801EEE18u; f_8003F484(c); // 801EEE14
  c->r[3]=c->r[1]+0x0000005Cu; // 801EEE18
  c->r[4]=c->r[31]+0x0000000Cu; // 801EEE1C
  c->lr=0x801EEE24u; f_8003F484(c); // 801EEE20
  c->r[3]=c->r[1]+0x00000068u; // 801EEE24
  c->r[4]=c->r[31]+0x00000018u; // 801EEE28
  c->lr=0x801EEE30u; f_8003F484(c); // 801EEE2C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEE30
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 801EEE34
  c->r[0]=R8(c->r[30]+0x00001F64u); // 801EEE38
  cmps(c,0,(int32_t)c->r[0],0); // 801EEE3C
  if (!crb(c,2)) { goto L_801EEE78; } // 801EEE40
  c->r[0]=0u+0x00000001u; // 801EEE44
  c->r[3]=c->r[30]+0x00002794u; // 801EEE48
  W8(c->r[30]+0x00001F64u,c->r[0]); // 801EEE4C
  c->r[4]=c->r[1]+0x00000050u; // 801EEE50
  c->lr=0x801EEE58u; f_8003F468(c); // 801EEE54
  c->r[3]=c->r[30]+0x000027A0u; // 801EEE58
  c->r[4]=c->r[1]+0x0000005Cu; // 801EEE5C
  c->lr=0x801EEE64u; f_8003F468(c); // 801EEE60
  c->r[3]=c->r[30]+0x000027ACu; // 801EEE64
  c->r[4]=c->r[1]+0x00000068u; // 801EEE68
  c->lr=0x801EEE70u; f_8003F468(c); // 801EEE6C
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEE70
  {uint32_t ea=c->r[30]+0x000027B8u; WF32(ea,c->f[0]);} // 801EEE74
L_801EEE78:;
  c->r[3]=c->r[1]+0x00000014u; // 801EEE78
  c->r[4]=c->r[1]+0x00000050u; // 801EEE7C
  c->lr=0x801EEE84u; f_8003F484(c); // 801EEE80
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEE84
  c->r[3]=c->r[1]+0x00000050u; // 801EEE88
  {uint32_t ea=c->r[2]+0xFFFFC250u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EEE8C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEE90
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801EEE94
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801EEE98
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801EEE9C
  c->lr=0x801EEEA4u; f_80065358(c); // 801EEEA0
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801EEEA4
  c->r[4]=c->r[30]+0x000008D0u; // 801EEEA8
  c->r[3]=c->r[1]+0x00000020u; // 801EEEAC
  c->r[12]=R32(c->r[12]+0x00000030u); // 801EEEB0
  c->ctr=c->r[12]; // 801EEEB4
  if (true) { c->lr=0x801EEEBCu; dispatch(c,c->ctr); } // 801EEEB8
  c->r[3]=c->r[1]+0x00000008u; // 801EEEBC
  c->r[4]=c->r[1]+0x00000020u; // 801EEEC0
  c->lr=0x801EEEC8u; f_80032FD8(c); // 801EEEC4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEEC8
  c->r[3]=c->r[1]+0x0000005Cu; // 801EEECC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEED0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EEED4
  c->lr=0x801EEEDCu; f_80065358(c); // 801EEED8
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEEDC
  c->r[3]=c->r[1]+0x00000068u; // 801EEEE0
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEEE4
  c->f[3]=c->f[1]; // 801EEEE8
  c->lr=0x801EEEF0u; f_80065358(c); // 801EEEEC
  c->lr=0x801EEEF4u; f_80061A4C(c); // 801EEEF0
  c->r[4]=0u+0x00000001u; // 801EEEF4
  c->r[3]=c->r[3]+0x000000ECu; // 801EEEF8
  c->lr=0x801EEF00u; f_8012D230(c); // 801EEEFC
  c->lr=0x801EEF04u; f_80061A4C(c); // 801EEF00
  c->r[4]=c->r[1]+0x00000050u; // 801EEF04
  c->lr=0x801EEF0Cu; f_80062B34(c); // 801EEF08
  c->lr=0x801EEF10u; f_80061A4C(c); // 801EEF0C
  c->r[4]=0u+0x00000005u; // 801EEF10
  c->lr=0x801EEF18u; f_80062AC4(c); // 801EEF14
  c->lr=0x801EEF1Cu; f_80061A4C(c); // 801EEF18
  {uint32_t ea=c->r[2]+0xFFFFC25Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEF1C
  c->lr=0x801EEF24u; f_80063940(c); // 801EEF20
  c->r[0]=R32(c->r[1]+0x00000084u); // 801EEF24
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801EEF28
  c->r[30]=R32(c->r[1]+0x00000078u); // 801EEF2C
  c->lr=c->r[0]; // 801EEF30
  c->r[1]=c->r[1]+0x00000080u; // 801EEF34
  return; // 801EEF38
}

// fn_801EEF3C
void f_801EEF3C(Ctx* __restrict c) {
  trace_call(0x801EEF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEF3C
  c->r[0]=c->lr; // 801EEF40
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEF44
  c->r[3]=0u+0x80580000u; // 801EEF48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EEF4C
  c->r[3]=c->r[3]+0xFFFFBA00u; // 801EEF50
  c->f[3]=c->f[1]; // 801EEF54
  {uint32_t ea=c->r[2]+0xFFFFC1C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEF58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EEF5C
  c->lr=0x801EEF64u; f_8003F588(c); // 801EEF60
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEF64
  c->r[31]=0u+0x80580000u; // 801EEF68
  {uint32_t ea=c->r[2]+0xFFFFC260u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEF6C
  c->r[3]=c->r[31]+0xFFFFBA0Cu; // 801EEF70
  c->f[3]=c->f[2]; // 801EEF74
  c->lr=0x801EEF7Cu; f_800521A0(c); // 801EEF78
  {uint32_t ea=c->r[2]+0xFFFFC1CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEF7C
  c->r[3]=c->r[31]+0xFFFFBA0Cu; // 801EEF80
  {uint32_t ea=c->r[2]+0xFFFFC264u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEF84
  c->r[3]=c->r[3]+0x0000000Cu; // 801EEF88
  c->f[3]=c->f[2]; // 801EEF8C
  c->lr=0x801EEF94u; f_800521A0(c); // 801EEF90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EEF94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EEF98
  c->lr=c->r[0]; // 801EEF9C
  c->r[1]=c->r[1]+0x00000010u; // 801EEFA0
  return; // 801EEFA4
}

// fn_801EEFA8
void f_801EEFA8(Ctx* __restrict c) {
  trace_call(0x801EEFA8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFA8
  f_801ECDDC(c); return; // 801EEFAC
}

// fn_801EEFB0
void f_801EEFB0(Ctx* __restrict c) {
  trace_call(0x801EEFB0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFB0
  f_801EE068(c); return; // 801EEFB4
}

// fn_801EEFB8
void f_801EEFB8(Ctx* __restrict c) {
  trace_call(0x801EEFB8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFB8
  f_801ED030(c); return; // 801EEFBC
}

// fn_801EEFC0
void f_801EEFC0(Ctx* __restrict c) {
  trace_call(0x801EEFC0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFC0
  f_801EDFD0(c); return; // 801EEFC4
}

// fn_801EEFC8
void f_801EEFC8(Ctx* __restrict c) {
  trace_call(0x801EEFC8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFC8
  f_801ECD14(c); return; // 801EEFCC
}

// fn_801EEFD0
void f_801EEFD0(Ctx* __restrict c) {
  trace_call(0x801EEFD0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFD0
  f_801EDFD4(c); return; // 801EEFD4
}

// fn_801EEFD8
void f_801EEFD8(Ctx* __restrict c) {
  trace_call(0x801EEFD8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFD8
  f_801ECDE0(c); return; // 801EEFDC
}

// fn_801EEFE0
void f_801EEFE0(Ctx* __restrict c) {
  trace_call(0x801EEFE0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFE0
  f_801EDE74(c); return; // 801EEFE4
}

// fn_801EEFE8
void f_801EEFE8(Ctx* __restrict c) {
  trace_call(0x801EEFE8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFE8
  f_801EE06C(c); return; // 801EEFEC
}

// fn_801EEFF0
void f_801EEFF0(Ctx* __restrict c) {
  trace_call(0x801EEFF0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFF0
  f_801ECDD8(c); return; // 801EEFF4
}

// fn_801EEFF8
void f_801EEFF8(Ctx* __restrict c) {
  trace_call(0x801EEFF8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EEFF8
  f_801EE064(c); return; // 801EEFFC
}

// fn_801EF000
void f_801EF000(Ctx* __restrict c) {
  trace_call(0x801EF000u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EF000
  f_801ED02C(c); return; // 801EF004
}

// fn_801EF008
void f_801EF008(Ctx* __restrict c) {
  trace_call(0x801EF008u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EF008
  f_801EDFCC(c); return; // 801EF00C
}

// fn_801EF010
void f_801EF010(Ctx* __restrict c) {
  trace_call(0x801EF010u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EF010
  f_801ECD20(c); return; // 801EF014
}

// fn_801EF018
void f_801EF018(Ctx* __restrict c) {
  trace_call(0x801EF018u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EF018
  f_801EE060(c); return; // 801EF01C
}

// fn_801EF020
void f_801EF020(Ctx* __restrict c) {
  trace_call(0x801EF020u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EF020
  f_801ECDE4(c); return; // 801EF024
}

// fn_801EF028
void f_801EF028(Ctx* __restrict c) {
  trace_call(0x801EF028u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801EF028
  f_801EDEEC(c); return; // 801EF02C
}

// fn_801EF030
void f_801EF030(Ctx* __restrict c) {
  trace_call(0x801EF030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF030
  c->r[0]=c->lr; // 801EF034
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF038
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF03C
  c->r[31]=c->r[3]|c->r[3]; // 801EF040
  c->lr=0x801EF048u; f_801E2A78(c); // 801EF044
  c->r[0]=R32(c->r[31]+0x00002150u); // 801EF048
  c->r[3]=0u+0x80400000u; // 801EF04C
  c->r[3]=c->r[3]+0x00007F48u; // 801EF050
  c->r[4]=0u+0x00000002u; // 801EF054
  c->r[6]=c->r[3]+0x00000040u; // 801EF058
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 801EF05C
  c->r[5]=c->r[3]+0x0000041Cu; // 801EF060
  W32(c->r[31]+0x00000010u,c->r[3]); // 801EF064
  c->r[3]=c->r[31]|c->r[31]; // 801EF068
  W32(c->r[31]+0x00000048u,c->r[6]); // 801EF06C
  W32(c->r[31]+0x00001F6Cu,c->r[5]); // 801EF070
  W32(c->r[31]+0x0000215Cu,c->r[4]); // 801EF074
  W32(c->r[31]+0x00002150u,c->r[0]); // 801EF078
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF07C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF080
  c->lr=c->r[0]; // 801EF084
  c->r[1]=c->r[1]+0x00000010u; // 801EF088
  return; // 801EF08C
}

// fn_801EF090
void f_801EF090(Ctx* __restrict c) {
  trace_call(0x801EF090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF090
  c->r[0]=c->lr; // 801EF094
  cmps(c,0,(int32_t)c->r[3],0); // 801EF098
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF09C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801EF0A0
  c->r[30]=c->r[3]|c->r[3]; // 801EF0A4
  c->r[31]=c->r[4]|c->r[4]; // 801EF0A8
  if (crb(c,2)) { goto L_801EF0C8; } // 801EF0AC
  c->r[4]=0u+0x00000000u; // 801EF0B0
  c->lr=0x801EF0B8u; f_801CCAF8(c); // 801EF0B4
  cmps(c,0,(int32_t)c->r[31],0); // 801EF0B8
  if (!crb(c,1)) { goto L_801EF0C8; } // 801EF0BC
  c->r[3]=c->r[30]|c->r[30]; // 801EF0C0
  c->lr=0x801EF0C8u; f_802896EC(c); // 801EF0C4
L_801EF0C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801EF0C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801EF0CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF0D0
  c->lr=c->r[0]; // 801EF0D4
  c->r[1]=c->r[1]+0x00000010u; // 801EF0D8
  return; // 801EF0DC
}

// fn_801EF0E0
void f_801EF0E0(Ctx* __restrict c) {
  trace_call(0x801EF0E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF0E0
  c->r[0]=c->lr; // 801EF0E4
  c->r[4]=c->r[3]+0x00000FF8u; // 801EF0E8
  c->r[5]=0u+0x00000001u; // 801EF0EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF0F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF0F4
  c->r[31]=c->r[3]|c->r[3]; // 801EF0F8
  c->lr=0x801EF100u; f_80076080(c); // 801EF0FC
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 801EF100
  c->r[3]=c->r[31]+0x00000FF8u; // 801EF104
  c->r[4]=0u+0x00000000u; // 801EF108
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EF10C
  c->ctr=c->r[12]; // 801EF110
  if (true) { c->lr=0x801EF118u; dispatch(c,c->ctr); } // 801EF114
  c->r[12]=R32(c->r[31]+0x00000010u); // 801EF118
  c->r[3]=c->r[31]|c->r[31]; // 801EF11C
  c->r[12]=R32(c->r[12]+0x00000338u); // 801EF120
  c->ctr=c->r[12]; // 801EF124
  if (true) { c->lr=0x801EF12Cu; dispatch(c,c->ctr); } // 801EF128
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 801EF12C
  c->r[4]=c->r[3]|c->r[3]; // 801EF130
  c->r[3]=c->r[31]+0x00000FF8u; // 801EF134
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EF138
  c->ctr=c->r[12]; // 801EF13C
  if (true) { c->lr=0x801EF144u; dispatch(c,c->ctr); } // 801EF140
  c->r[3]=c->r[31]+0x00001F18u; // 801EF144
  c->lr=0x801EF14Cu; f_801E24C0(c); // 801EF148
  c->r[0]=R32(c->r[31]+0x00002180u); // 801EF14C
  c->r[5]=0u+0x00000002u; // 801EF150
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF154
  c->r[4]=0u+0x00000000u; // 801EF158
  c->r[0]=c->r[0]|0x00800000u; // 801EF15C
  c->r[3]=R32(c->r[31]+0x00002150u); // 801EF160
  W32(c->r[31]+0x00002180u,c->r[0]); // 801EF164
  {uint32_t ea=c->r[2]+0xFFFFC28Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF168
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 801EF16C
  W8(c->r[31]+0x00002180u,c->r[4]); // 801EF170
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF174
  c->r[0]=R32(c->r[31]+0x00002180u); // 801EF178
  {uint32_t ea=c->r[31]+0x00002158u; WF32(ea,c->f[2]);} // 801EF17C
  c->r[0]=rotl(c->r[0],0)&0xFF83FFFFu; // 801EF180
  W32(c->r[31]+0x0000215Cu,c->r[5]); // 801EF184
  {uint32_t ea=c->r[31]+0x0000217Cu; WF32(ea,c->f[1]);} // 801EF188
  W32(c->r[31]+0x00002150u,c->r[3]); // 801EF18C
  {uint32_t ea=c->r[31]+0x00002174u; WF32(ea,c->f[2]);} // 801EF190
  W32(c->r[31]+0x00002180u,c->r[0]); // 801EF194
  {uint32_t ea=c->r[31]+0x00002154u; WF32(ea,c->f[0]);} // 801EF198
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF19C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF1A0
  c->lr=c->r[0]; // 801EF1A4
  c->r[1]=c->r[1]+0x00000010u; // 801EF1A8
  return; // 801EF1AC
}

// fn_801EF1B0
void f_801EF1B0(Ctx* __restrict c) {
  trace_call(0x801EF1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF1B0
  c->r[0]=c->lr; // 801EF1B4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801EF1B8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801EF1BC
  c->r[31]=c->r[3]|c->r[3]; // 801EF1C0
  c->r[3]=c->r[1]+0x00000020u; // 801EF1C4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EF1C8
  c->r[4]=c->r[31]+0x000008D0u; // 801EF1CC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EF1D0
  c->ctr=c->r[12]; // 801EF1D4
  if (true) { c->lr=0x801EF1DCu; dispatch(c,c->ctr); } // 801EF1D8
  c->r[3]=c->r[1]+0x00000008u; // 801EF1DC
  c->r[4]=c->r[1]+0x00000020u; // 801EF1E0
  c->lr=0x801EF1E8u; f_800C5524(c); // 801EF1E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF1E8
  c->r[3]=c->r[1]+0x00000014u; // 801EF1EC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF1F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF1F4
  c->f[1]=-c->f[1]; // 801EF1F8
  c->f[2]=-c->f[2]; // 801EF1FC
  c->f[3]=-c->f[0]; // 801EF200
  c->lr=0x801EF208u; f_800521A0(c); // 801EF204
  c->r[3]=c->r[31]|c->r[31]; // 801EF208
  c->r[4]=c->r[1]+0x00000014u; // 801EF20C
  c->lr=0x801EF214u; f_801E3480(c); // 801EF210
  c->r[3]=c->r[31]|c->r[31]; // 801EF214
  c->lr=0x801EF21Cu; f_801E2D68(c); // 801EF218
  c->r[3]=c->r[31]|c->r[31]; // 801EF21C
  c->lr=0x801EF224u; f_801EF27C(c); // 801EF220
  c->r[3]=c->r[31]|c->r[31]; // 801EF224
  c->lr=0x801EF22Cu; f_801EF330(c); // 801EF228
  c->r[0]=R32(c->r[31]+0x00002180u); // 801EF22C
  c->r[3]=c->r[31]|c->r[31]; // 801EF230
  c->r[5]=R8(c->r[31]+0x00002180u); // 801EF234
  c->r[4]=rotl(c->r[0],10)&0x00000001u; // 801EF238
  c->lr=0x801EF240u; f_800B5EB4(c); // 801EF23C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801EF240
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801EF244
  c->lr=c->r[0]; // 801EF248
  c->r[1]=c->r[1]+0x00000060u; // 801EF24C
  return; // 801EF250
}

// fn_801EF254
void f_801EF254(Ctx* __restrict c) {
  trace_call(0x801EF254u);
  f_800ADCD8(c); return; // 801EF254
}

// fn_801EF258
void f_801EF258(Ctx* __restrict c) {
  trace_call(0x801EF258u);
  return; // 801EF258
}

// fn_801EF25C
void f_801EF25C(Ctx* __restrict c) {
  trace_call(0x801EF25Cu);
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF25C
  fcmp(c,0,c->f[1],c->f[0]); // 801EF260
  if (!crb(c,1)) { goto L_801EF26C; } // 801EF264
  {uint32_t ea=c->r[3]+0x00002154u; WF32(ea,c->f[1]);} // 801EF268
L_801EF26C:;
  {uint32_t ea=c->r[3]+0x00002154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF26C
  W32(c->r[3]+0x0000215Cu,c->r[4]); // 801EF270
  {uint32_t ea=c->r[3]+0x00002178u; WF32(ea,c->f[0]);} // 801EF274
  return; // 801EF278
}

// fn_801EF27C
void f_801EF27C(Ctx* __restrict c) {
  trace_call(0x801EF27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF27C
  c->r[0]=c->lr; // 801EF280
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF284
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF288
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EF28C
  c->r[30]=c->r[3]|c->r[3]; // 801EF290
  c->r[0]=R32(c->r[3]+0x00002180u); // 801EF294
  c->r[31]=rotl(c->r[0],12)&0x00000001u; cr0(c,c->r[31]); // 801EF298
  if (crb(c,2)) { goto L_801EF2F0; } // 801EF29C
  c->r[0]=R32(c->r[3]+0x00000054u); // 801EF2A0
  cmps(c,0,(int32_t)c->r[0],0); // 801EF2A4
  if (!crb(c,2)) { goto L_801EF2E0; } // 801EF2A8
  c->r[3]=R32(c->r[3]+0x00000050u); // 801EF2AC
  c->r[31]=0u+0x00000000u; // 801EF2B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EF2B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EF2B8
  c->ctr=c->r[12]; // 801EF2BC
  if (true) { c->lr=0x801EF2C4u; dispatch(c,c->ctr); } // 801EF2C0
  cmps(c,0,(int32_t)c->r[3],12); // 801EF2C4
  if (crb(c,2)) { goto L_801EF2DC; } // 801EF2C8
  if (!crb(c,0)) { goto L_801EF2E0; } // 801EF2CC
  cmps(c,0,(int32_t)c->r[3],3); // 801EF2D0
  if (crb(c,2)) { goto L_801EF2DC; } // 801EF2D4
  goto L_801EF2E0; // 801EF2D8
L_801EF2DC:;
  c->r[31]=0u+0x00000001u; // 801EF2DC
L_801EF2E0:;
  c->r[0]=R8(c->r[30]+0x00002180u); // 801EF2E0
  cmps(c,0,(int32_t)c->r[0],0); // 801EF2E4
  if (crb(c,2)) { goto L_801EF2F0; } // 801EF2E8
  c->r[31]=0u+0x00000000u; // 801EF2EC
L_801EF2F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EF2F0
  if (crb(c,2)) { goto L_801EF30C; } // 801EF2F4
  {uint32_t ea=c->r[30]+0x0000217Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF2F8
  c->r[3]=c->r[30]|c->r[30]; // 801EF2FC
  c->r[4]=0u+0x00000006u; // 801EF300
  {uint32_t ea=c->r[30]+0x000003D0u; WF32(ea,c->f[0]);} // 801EF304
  c->lr=0x801EF30Cu; f_801E3330(c); // 801EF308
L_801EF30C:;
  c->r[0]=R32(c->r[30]+0x00002180u); // 801EF30C
  c->r[0]=rotl(c->r[0],0)&0xFFEFFFFFu; // 801EF310
  W32(c->r[30]+0x00002180u,c->r[0]); // 801EF314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF318
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EF31C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF320
  c->lr=c->r[0]; // 801EF324
  c->r[1]=c->r[1]+0x00000010u; // 801EF328
  return; // 801EF32C
}

// fn_801EF330
void f_801EF330(Ctx* __restrict c) {
  trace_call(0x801EF330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF330
  c->r[0]=c->lr; // 801EF334
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF33C
  c->r[31]=c->r[3]|c->r[3]; // 801EF340
  c->r[4]=R32(c->r[3]+0x00002180u); // 801EF344
  c->r[0]=rotl(c->r[4],9)&0x00000001u; cr0(c,c->r[0]); // 801EF348
  if (crb(c,2)) { goto L_801EF384; } // 801EF34C
  c->r[0]=R8(c->r[3]+0x00002180u); // 801EF350
  cmps(c,0,(int32_t)c->r[0],0); // 801EF354
  if (crb(c,2)) { goto L_801EF384; } // 801EF358
  c->r[0]=R32(c->r[3]+0x00000054u); // 801EF35C
  cmps(c,0,(int32_t)c->r[0],0); // 801EF360
  if (!crb(c,2)) { goto L_801EF384; } // 801EF364
  c->r[0]=rotl(c->r[4],14)&0x00000001u; cr0(c,c->r[0]); // 801EF368
  if (!crb(c,2)) { goto L_801EF384; } // 801EF36C
  c->lr=0x801EF374u; f_800B5F40(c); // 801EF370
  c->r[0]=0u+0x00000001u; // 801EF374
  c->r[3]=c->r[31]|c->r[31]; // 801EF378
  W32(c->r[31]+0x0000215Cu,c->r[0]); // 801EF37C
  c->lr=0x801EF384u; f_800AC7C4(c); // 801EF380
L_801EF384:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF384
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF388
  c->lr=c->r[0]; // 801EF38C
  c->r[1]=c->r[1]+0x00000010u; // 801EF390
  return; // 801EF394
}

// fn_801EF398
void f_801EF398(Ctx* __restrict c) {
  trace_call(0x801EF398u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF398
  c->r[0]=c->lr; // 801EF39C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EF3A0
  c->r[11]=c->r[1]+0x00000050u; // 801EF3A4
  c->lr=0x801EF3ACu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF3A8
  c->r[31]=c->r[1]|c->r[1]; // 801EF3AC
  c->r[0]=R32(c->r[3]+0x00002180u); // 801EF3B0
  c->r[30]=c->r[3]|c->r[3]; // 801EF3B4
  c->r[29]=c->r[4]|c->r[4]; // 801EF3B8
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 801EF3BC
  if (!crb(c,2)) { goto L_801EF578; } // 801EF3C0
  c->r[5]=R8(c->r[3]+0x00002180u); // 801EF3C4
  c->lr=0x801EF3CCu; f_800B5F1C(c); // 801EF3C8
  c->r[0]=R32(c->r[30]+0x000007E4u); // 801EF3CC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801EF3D0
  if (!crb(c,2)) { goto L_801EF40C; } // 801EF3D4
  c->r[12]=R32(c->r[30]+0x00000010u); // 801EF3D8
  c->r[3]=c->r[30]|c->r[30]; // 801EF3DC
  c->r[4]=c->r[29]|c->r[29]; // 801EF3E0
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF3E4
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801EF3E8
  c->ctr=c->r[12]; // 801EF3EC
  if (true) { c->lr=0x801EF3F4u; dispatch(c,c->ctr); } // 801EF3F0
  {uint32_t ea=c->r[30]+0x000003A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF3F4
  {uint32_t ea=c->r[30]+0x00002178u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF3F8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 801EF3FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801EF400
  {uint32_t ea=c->r[30]+0x000003A4u; WF32(ea,c->f[2]);} // 801EF404
  {uint32_t ea=c->r[30]+0x00002178u; WF32(ea,c->f[0]);} // 801EF408
L_801EF40C:;
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF40C
  c->r[4]=0u+0x00000000u; // 801EF410
  {uint32_t ea=c->r[30]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF414
  c->r[3]=R32(c->r[30]+0x00000874u); // 801EF418
  fcmp(c,0,c->f[0],c->f[1]); // 801EF41C
  {uint32_t ea=c->r[30]+0x00000870u; WF32(ea,c->f[1]);} // 801EF420
  c->r[0]=c->r[3]+0x00000001u; // 801EF424
  W32(c->r[30]+0x00000874u,c->r[0]); // 801EF428
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EF42C
  if (!crb(c,2)) { goto L_801EF440; } // 801EF430
  c->r[0]=R32(c->r[30]+0x00002180u); // 801EF434
  c->r[0]=c->r[0]|0x00100000u; // 801EF438
  W32(c->r[30]+0x00002180u,c->r[0]); // 801EF43C
L_801EF440:;
  {uint32_t ea=c->r[30]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF440
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF444
  fcmp(c,0,c->f[1],c->f[0]); // 801EF448
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EF44C
  if (!crb(c,2)) { goto L_801EF458; } // 801EF450
  c->r[4]=0u+0x00000001u; // 801EF454
L_801EF458:;
  cmps(c,0,(int32_t)c->r[4],0); // 801EF458
  if (crb(c,2)) { goto L_801EF530; } // 801EF45C
  c->r[4]=R32(c->r[30]+0x00002180u); // 801EF460
  c->r[0]=rotl(c->r[4],9)&0x00000001u; cr0(c,c->r[0]); // 801EF464
  if (crb(c,2)) { goto L_801EF578; } // 801EF468
  c->r[3]=R32(c->r[30]+0x00000054u); // 801EF46C
  c->r[0]=rotl(c->r[4],0)&0xFF7FFFFFu; // 801EF470
  W32(c->r[30]+0x00002180u,c->r[0]); // 801EF474
  cmps(c,0,(int32_t)c->r[3],0); // 801EF478
  if (crb(c,2)) { goto L_801EF4E0; } // 801EF47C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EF480
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EF484
  c->ctr=c->r[12]; // 801EF488
  if (true) { c->lr=0x801EF490u; dispatch(c,c->ctr); } // 801EF48C
  c->lr=0x801EF494u; f_8007A658(c); // 801EF490
  c->r[29]=c->r[3]|c->r[3]; // 801EF494
  c->r[3]=0u+0x00000002u; // 801EF498
  c->lr=0x801EF4A0u; f_8007A658(c); // 801EF49C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801EF4A0
  if (!crb(c,1)) { goto L_801EF4D8; } // 801EF4A4
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801EF4A8
  if (crb(c,2)) { goto L_801EF4D0; } // 801EF4AC
  W32(c->r[31]+0x00000034u,c->r[1]); // 801EF4B0
  c->r[3]=c->r[29]|c->r[29]; // 801EF4B4
  c->lr=0x801EF4BCu; f_8007614C(c); // 801EF4B8
  goto L_801EF4D0; // 801EF4BC
  c->r[3]=0u+0x00000000u; // 801EF4C0
  c->r[4]=0u+0x00000000u; // 801EF4C4
  c->r[5]=0u+0x00000000u; // 801EF4C8
  c->lr=0x801EF4D0u; f_8028BC3C(c); // 801EF4CC
L_801EF4D0:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801EF4D0
  goto L_801EF578; // 801EF4D4
L_801EF4D8:;
  c->r[0]=0u+0x00000000u; // 801EF4D8
  W32(c->r[30]+0x00000054u,c->r[0]); // 801EF4DC
L_801EF4E0:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801EF4E0
  c->r[0]=c->r[3]+0x00000001u; // 801EF4E4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EF4E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801EF4EC
  c->r[0]=c->r[0]^c->r[3]; // 801EF4F0
  c->r[0]=c->r[0]-c->r[3]; // 801EF4F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801EF4F8
  c->r[0]=c->r[30]+c->r[0]; // 801EF4FC
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801EF500
  if (crb(c,2)) { goto L_801EF528; } // 801EF504
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801EF508
  c->r[3]=c->r[29]|c->r[29]; // 801EF50C
  c->lr=0x801EF514u; f_8007614C(c); // 801EF510
  goto L_801EF528; // 801EF514
  c->r[3]=0u+0x00000000u; // 801EF518
  c->r[4]=0u+0x00000000u; // 801EF51C
  c->r[5]=0u+0x00000000u; // 801EF520
  c->lr=0x801EF528u; f_8028BC3C(c); // 801EF524
L_801EF528:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801EF528
  goto L_801EF578; // 801EF52C
L_801EF530:;
  c->r[0]=R32(c->r[30]+0x00002180u); // 801EF530
  c->r[0]=rotl(c->r[0],9)&0x00000001u; cr0(c,c->r[0]); // 801EF534
  if (crb(c,2)) { goto L_801EF578; } // 801EF538
  c->r[0]=R8(c->r[30]+0x00002180u); // 801EF53C
  cmps(c,0,(int32_t)c->r[0],0); // 801EF540
  if (!crb(c,2)) { goto L_801EF578; } // 801EF544
  {uint32_t ea=c->r[30]+0x000003B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF548
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF54C
  fcmp(c,0,c->f[1],c->f[0]); // 801EF550
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EF554
  if (!crb(c,2)) { goto L_801EF578; } // 801EF558
  c->r[29]=0u+0x00000001u; // 801EF55C
  c->r[3]=c->r[30]|c->r[30]; // 801EF560
  W8(c->r[30]+0x00002180u,c->r[29]); // 801EF564
  c->lr=0x801EF56Cu; f_800B5F40(c); // 801EF568
  W32(c->r[30]+0x0000215Cu,c->r[29]); // 801EF56C
  c->r[3]=c->r[30]|c->r[30]; // 801EF570
  c->lr=0x801EF578u; f_800AC7C4(c); // 801EF574
L_801EF578:;
  c->r[10]=c->r[31]|c->r[31]; // 801EF578
  c->r[11]=c->r[10]+0x00000050u; // 801EF57C
  c->lr=0x801EF584u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EF580
  c->r[10]=R32(c->r[1]+0x00000000u); // 801EF584
  c->r[0]=R32(c->r[10]+0x00000004u); // 801EF588
  c->r[1]=c->r[10]|c->r[10]; // 801EF58C
  c->lr=c->r[0]; // 801EF590
  return; // 801EF594
}

// fn_801EF598
void f_801EF598(Ctx* __restrict c) {
  trace_call(0x801EF598u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF598
  c->r[0]=c->lr; // 801EF59C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF5A0
  c->r[11]=c->r[1]+0x00000020u; // 801EF5A4
  c->lr=0x801EF5ACu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF5A8
  c->r[31]=c->r[5]|c->r[5]; // 801EF5AC
  c->r[29]=c->r[3]|c->r[3]; // 801EF5B0
  c->r[12]=R32(c->r[31]+0x00000000u); // 801EF5B4
  c->r[3]=c->r[31]|c->r[31]; // 801EF5B8
  c->r[30]=c->r[4]|c->r[4]; // 801EF5BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EF5C0
  c->ctr=c->r[12]; // 801EF5C4
  if (true) { c->lr=0x801EF5CCu; dispatch(c,c->ctr); } // 801EF5C8
  c->r[12]=R32(c->r[31]+0x00000000u); // 801EF5CC
  c->r[3]=c->r[31]|c->r[31]; // 801EF5D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EF5D4
  c->ctr=c->r[12]; // 801EF5D8
  if (true) { c->lr=0x801EF5E0u; dispatch(c,c->ctr); } // 801EF5DC
  cmps(c,0,(int32_t)c->r[3],23); // 801EF5E0
  if (crb(c,2)) { goto L_801EF708; } // 801EF5E4
  if (!crb(c,0)) { goto L_801EF604; } // 801EF5E8
  cmps(c,0,(int32_t)c->r[3],3); // 801EF5EC
  if (crb(c,2)) { goto L_801EF624; } // 801EF5F0
  if (crb(c,0)) { goto L_801EF708; } // 801EF5F4
  cmps(c,0,(int32_t)c->r[3],22); // 801EF5F8
  if (!crb(c,0)) { goto L_801EF718; } // 801EF5FC
  goto L_801EF708; // 801EF600
L_801EF604:;
  cmps(c,0,(int32_t)c->r[3],1025); // 801EF604
  if (!crb(c,0)) { goto L_801EF618; } // 801EF608
  cmps(c,0,(int32_t)c->r[3],25); // 801EF60C
  if (!crb(c,0)) { goto L_801EF708; } // 801EF610
  goto L_801EF6F8; // 801EF614
L_801EF618:;
  cmps(c,0,(int32_t)c->r[3],1032); // 801EF618
  if (!crb(c,0)) { goto L_801EF708; } // 801EF61C
  goto L_801EF6E8; // 801EF620
L_801EF624:;
  c->r[3]=R32(c->r[29]+0x00002180u); // 801EF624
  c->r[0]=rotl(c->r[3],9)&0x00000001u; cr0(c,c->r[0]); // 801EF628
  if (crb(c,2)) { goto L_801EF6B4; } // 801EF62C
  c->r[0]=rotl(c->r[3],11)&0x00000001u; cr0(c,c->r[0]); // 801EF630
  if (crb(c,2)) { goto L_801EF654; } // 801EF634
  c->r[0]=c->r[3]|0x00080000u; // 801EF638
  c->r[3]=c->r[29]|c->r[29]; // 801EF63C
  c->r[0]=rotl(c->r[0],0)&0xFFBFFFFFu; // 801EF640
  c->r[4]=0u+0x0000001Bu; // 801EF644
  W32(c->r[29]+0x00002180u,c->r[0]); // 801EF648
  c->lr=0x801EF650u; f_801E3330(c); // 801EF64C
  goto L_801EF6B4; // 801EF650
L_801EF654:;
  c->r[0]=R32(c->r[29]+0x000008C4u); // 801EF654
  cmps(c,0,(int32_t)c->r[0],0); // 801EF658
  if (!crb(c,1)) { goto L_801EF6A0; } // 801EF65C
  c->r[0]=R32(c->r[29]+0x00002150u); // 801EF660
  c->r[3]=c->r[3]|0x00400000u; // 801EF664
  W32(c->r[29]+0x00002180u,c->r[3]); // 801EF668
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 801EF66C
  if (!crb(c,2)) { goto L_801EF68C; } // 801EF670
  c->r[12]=R32(c->r[29]+0x00000010u); // 801EF674
  c->r[3]=c->r[29]|c->r[29]; // 801EF678
  c->r[4]=R32(c->r[29]+0x000008A4u); // 801EF67C
  c->r[12]=R32(c->r[12]+0x00000334u); // 801EF680
  c->ctr=c->r[12]; // 801EF684
  if (true) { c->lr=0x801EF68Cu; dispatch(c,c->ctr); } // 801EF688
L_801EF68C:;
  c->r[0]=0u+0x00000000u; // 801EF68C
  c->r[3]=c->r[29]|c->r[29]; // 801EF690
  W32(c->r[29]+0x0000215Cu,c->r[0]); // 801EF694
  c->lr=0x801EF69Cu; f_800AC7C4(c); // 801EF698
  goto L_801EF6B4; // 801EF69C
L_801EF6A0:;
  c->r[0]=c->r[3]|0x00400000u; // 801EF6A0
  c->r[3]=c->r[29]|c->r[29]; // 801EF6A4
  W32(c->r[29]+0x00002180u,c->r[0]); // 801EF6A8
  c->r[4]=0u+0x0000000Cu; // 801EF6AC
  c->lr=0x801EF6B4u; f_801E3330(c); // 801EF6B0
L_801EF6B4:;
  {uint32_t ea=c->r[29]+0x000003D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF6B4
  c->r[3]=c->r[29]+0x00000FF8u; // 801EF6B8
  c->r[4]=0u+0x00000001u; // 801EF6BC
  {uint32_t ea=c->r[29]+0x0000217Cu; WF32(ea,c->f[0]);} // 801EF6C0
  c->r[12]=R32(c->r[29]+0x00000FF8u); // 801EF6C4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EF6C8
  c->ctr=c->r[12]; // 801EF6CC
  if (true) { c->lr=0x801EF6D4u; dispatch(c,c->ctr); } // 801EF6D0
  c->r[3]=c->r[29]|c->r[29]; // 801EF6D4
  c->r[4]=c->r[30]|c->r[30]; // 801EF6D8
  c->r[5]=c->r[31]|c->r[31]; // 801EF6DC
  c->lr=0x801EF6E4u; f_800B5B1C(c); // 801EF6E0
  goto L_801EF718; // 801EF6E4
L_801EF6E8:;
  c->r[3]=c->r[29]|c->r[29]; // 801EF6E8
  c->r[4]=c->r[31]|c->r[31]; // 801EF6EC
  c->lr=0x801EF6F4u; f_801EF398(c); // 801EF6F0
  goto L_801EF718; // 801EF6F4
L_801EF6F8:;
  c->r[0]=R32(c->r[29]+0x00002150u); // 801EF6F8
  c->r[0]=c->r[0]|0x10000000u; // 801EF6FC
  W32(c->r[29]+0x00002150u,c->r[0]); // 801EF700
  IRQCHK(c); goto L_801EF624; // 801EF704
L_801EF708:;
  c->r[3]=c->r[29]|c->r[29]; // 801EF708
  c->r[4]=c->r[30]|c->r[30]; // 801EF70C
  c->r[5]=c->r[31]|c->r[31]; // 801EF710
  c->lr=0x801EF718u; f_800B5B1C(c); // 801EF714
L_801EF718:;
  c->r[11]=c->r[1]+0x00000020u; // 801EF718
  c->lr=0x801EF720u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EF71C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF720
  c->lr=c->r[0]; // 801EF724
  c->r[1]=c->r[1]+0x00000020u; // 801EF728
  return; // 801EF72C
}

// fn_801EF730
void f_801EF730(Ctx* __restrict c) {
  trace_call(0x801EF730u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF730
  c->r[0]=c->lr; // 801EF734
  c->r[4]=0u+0x80580000u; // 801EF738
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF73C
  c->r[4]=c->r[4]+0xFFFFBA40u; // 801EF740
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF744
  c->r[31]=c->r[3]|c->r[3]; // 801EF748
  c->r[3]=c->r[3]+0x00001F18u; // 801EF74C
  c->lr=0x801EF754u; f_801E2514(c); // 801EF750
  c->lr=0x801EF758u; f_80291D94(c); // 801EF754
  c->r[3]=c->r[3]^0x80000000u; // 801EF758
  c->r[0]=0u+0x43300000u; // 801EF75C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801EF760
  {uint32_t ea=c->r[2]+0xFFFFC2A0u; c->f[3]=RF64(ea);} // 801EF764
  W32(c->r[1]+0x00000008u,c->r[0]); // 801EF768
  {uint32_t ea=c->r[2]+0xFFFFC290u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF76C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801EF770
  {uint32_t ea=c->r[2]+0xFFFFC298u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF774
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801EF778
  {uint32_t ea=c->r[2]+0xFFFFC294u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF77C
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801EF780
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801EF784
  {uint32_t ea=c->r[31]+0x00002158u; WF32(ea,c->f[0]);} // 801EF788
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF78C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF790
  c->lr=c->r[0]; // 801EF794
  c->r[1]=c->r[1]+0x00000020u; // 801EF798
  return; // 801EF79C
}

// fn_801EF7A0
void f_801EF7A0(Ctx* __restrict c) {
  trace_call(0x801EF7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF7A0
  c->r[0]=c->lr; // 801EF7A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EF7A8
  c->r[11]=c->r[1]+0x00000050u; // 801EF7AC
  c->lr=0x801EF7B4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF7B0
  c->r[31]=c->r[1]|c->r[1]; // 801EF7B4
  c->r[0]=R32(c->r[3]+0x00001F28u); // 801EF7B8
  c->r[30]=c->r[3]|c->r[3]; // 801EF7BC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801EF7C0
  if (!crb(c,2)) { goto L_801EF8C0; } // 801EF7C4
  {uint32_t ea=c->r[3]+0x00002158u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF7C8
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF7CC
  fcmp(c,0,c->f[1],c->f[0]); // 801EF7D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801EF7D4
  if (!crb(c,2)) { goto L_801EF8C0; } // 801EF7D8
  c->r[0]=R32(c->r[3]+0x00002150u); // 801EF7DC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801EF7E0
  if (crb(c,2)) { goto L_801EF7F4; } // 801EF7E4
  c->lr=0x801EF7ECu; f_80291D94(c); // 801EF7E8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801EF7EC
  if (crb(c,2)) { goto L_801EF8B8; } // 801EF7F0
L_801EF7F4:;
  c->r[3]=R32(c->r[30]+0x00000054u); // 801EF7F4
  cmps(c,0,(int32_t)c->r[3],0); // 801EF7F8
  if (crb(c,2)) { goto L_801EF864; } // 801EF7FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801EF800
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EF804
  c->ctr=c->r[12]; // 801EF808
  if (true) { c->lr=0x801EF810u; dispatch(c,c->ctr); } // 801EF80C
  c->lr=0x801EF814u; f_8007A658(c); // 801EF810
  c->r[29]=c->r[3]|c->r[3]; // 801EF814
  c->r[3]=0u+0x00000003u; // 801EF818
  c->lr=0x801EF820u; f_8007A658(c); // 801EF81C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801EF820
  if (!crb(c,1)) { goto L_801EF85C; } // 801EF824
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801EF828
  if (crb(c,2)) { goto L_801EF854; } // 801EF82C
  W32(c->r[31]+0x00000034u,c->r[1]); // 801EF830
  c->r[3]=c->r[29]|c->r[29]; // 801EF834
  c->r[4]=c->r[13]+0xFFFF815Eu; // 801EF838
  c->lr=0x801EF840u; f_800761D8(c); // 801EF83C
  c->r[3]=0u+0x803F0000u; // 801EF840
  c->r[0]=0u+0x00000001u; // 801EF844
  c->r[3]=c->r[3]+0x00006794u; // 801EF848
  W32(c->r[29]+0x00000010u,c->r[0]); // 801EF84C
  W32(c->r[29]+0x00000000u,c->r[3]); // 801EF850
L_801EF854:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801EF854
  goto L_801EF8C0; // 801EF858
L_801EF85C:;
  c->r[0]=0u+0x00000000u; // 801EF85C
  W32(c->r[30]+0x00000054u,c->r[0]); // 801EF860
L_801EF864:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801EF864
  c->r[0]=c->r[3]+0x00000001u; // 801EF868
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EF86C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801EF870
  c->r[0]=c->r[0]^c->r[3]; // 801EF874
  c->r[0]=c->r[0]-c->r[3]; // 801EF878
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801EF87C
  c->r[0]=c->r[30]+c->r[0]; // 801EF880
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801EF884
  if (crb(c,2)) { goto L_801EF8B0; } // 801EF888
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801EF88C
  c->r[3]=c->r[29]|c->r[29]; // 801EF890
  c->r[4]=c->r[13]+0xFFFF815Eu; // 801EF894
  c->lr=0x801EF89Cu; f_800761D8(c); // 801EF898
  c->r[3]=0u+0x803F0000u; // 801EF89C
  c->r[0]=0u+0x00000001u; // 801EF8A0
  c->r[3]=c->r[3]+0x00006794u; // 801EF8A4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801EF8A8
  W32(c->r[29]+0x00000010u,c->r[0]); // 801EF8AC
L_801EF8B0:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801EF8B0
  goto L_801EF8C0; // 801EF8B4
L_801EF8B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801EF8B8
  c->lr=0x801EF8C0u; f_800AC668(c); // 801EF8BC
L_801EF8C0:;
  c->r[3]=0u+0x804D0000u; // 801EF8C0
  c->r[10]=c->r[31]|c->r[31]; // 801EF8C4
  c->r[3]=c->r[3]+0x00003318u; // 801EF8C8
  {uint32_t ea=c->r[30]+0x00002158u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EF8CC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF8D0
  c->r[11]=c->r[10]+0x00000050u; // 801EF8D4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801EF8D8
  {uint32_t ea=c->r[30]+0x00002158u; WF32(ea,c->f[0]);} // 801EF8DC
  c->lr=0x801EF8E4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EF8E0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801EF8E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801EF8E8
  c->r[1]=c->r[10]|c->r[10]; // 801EF8EC
  c->lr=c->r[0]; // 801EF8F0
  return; // 801EF8F4
}

// fn_801EF8F8
void f_801EF8F8(Ctx* __restrict c) {
  trace_call(0x801EF8F8u);
  c->r[0]=R32(c->r[3]+0x0000215Cu); // 801EF8F8
  cmps(c,0,(int32_t)c->r[0],1); // 801EF8FC
  if (crb(c,2)) { goto L_801EF918; } // 801EF900
  if (!crb(c,0)) return; // 801EF904
  cmps(c,0,(int32_t)c->r[0],0); // 801EF908
  if (crb(c,0)) return; // 801EF90C
  c->r[4]=c->r[5]|c->r[5]; // 801EF910
  f_801EF95C(c); return; // 801EF914
L_801EF918:;
  c->r[4]=c->r[5]|c->r[5]; // 801EF918
  f_801EFBCC(c); return; // 801EF91C
  return; // 801EF920
}

// fn_801EF924
void f_801EF924(Ctx* __restrict c) {
  trace_call(0x801EF924u);
  c->r[0]=R32(c->r[3]+0x0000215Cu); // 801EF924
  cmps(c,0,(int32_t)c->r[0],1); // 801EF928
  if (crb(c,2)) { goto L_801EF944; } // 801EF92C
  if (!crb(c,0)) return; // 801EF930
  cmps(c,0,(int32_t)c->r[0],0); // 801EF934
  if (!crb(c,0)) { goto L_801EF940; } // 801EF938
  return; // 801EF93C
L_801EF940:;
  f_801EFA74(c); return; // 801EF940
L_801EF944:;
  f_801EFBEC(c); return; // 801EF944
  return; // 801EF948
}

// fn_801EF94C
void f_801EF94C(Ctx* __restrict c) {
  trace_call(0x801EF94Cu);
  c->r[0]=R32(c->r[3]+0x00002180u); // 801EF94C
  c->r[0]=rotl(c->r[0],0)&0xFFFBFFFFu; // 801EF950
  W32(c->r[3]+0x00002180u,c->r[0]); // 801EF954
  return; // 801EF958
}

// fn_801EF95C
void f_801EF95C(Ctx* __restrict c) {
  trace_call(0x801EF95Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF95C
  c->r[0]=c->lr; // 801EF960
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EF964
  c->r[11]=c->r[1]+0x00000030u; // 801EF968
  c->lr=0x801EF970u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF96C
  c->r[0]=R32(c->r[3]+0x000008C4u); // 801EF970
  c->r[29]=c->r[3]|c->r[3]; // 801EF974
  c->r[30]=c->r[4]|c->r[4]; // 801EF978
  c->r[31]=0u+0x00000000u; // 801EF97C
  cmps(c,0,(int32_t)c->r[0],0); // 801EF980
  if (!crb(c,1)) { goto L_801EFA08; } // 801EF984
  c->r[3]=c->r[1]+0x00000010u; // 801EF988
  c->r[4]=c->r[29]+0x000008A4u; // 801EF98C
  c->lr=0x801EF994u; f_800B83D4(c); // 801EF990
  c->r[3]=c->r[30]+0x00000010u; // 801EF994
  c->r[4]=c->r[1]+0x00000010u; // 801EF998
  c->lr=0x801EF9A0u; f_8003F468(c); // 801EF99C
  c->r[4]=R32(c->r[29]+0x000008C4u); // 801EF9A0
  c->r[3]=c->r[1]+0x0000000Cu; // 801EF9A4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801EF9A8
  W32(c->r[1]+0x00000008u,c->r[4]); // 801EF9AC
  c->r[0]=R32(c->r[29]+0x000008CCu); // 801EF9B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801EF9B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EF9B8
  if (!crb(c,0)) { goto L_801EF9C4; } // 801EF9BC
  c->r[3]=c->r[1]+0x00000008u; // 801EF9C0
L_801EF9C4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801EF9C4
  cmps(c,0,(int32_t)c->r[0],0); // 801EF9C8
  if (!crb(c,0)) { goto L_801EF9D4; } // 801EF9CC
  c->r[0]=R32(c->r[29]+0x000008CCu); // 801EF9D0
L_801EF9D4:;
  c->r[3]=R32(c->r[29]+0x000008A8u); // 801EF9D4
  cmps(c,0,(int32_t)c->r[3],0); // 801EF9D8
  if (crb(c,2)) { goto L_801EF9EC; } // 801EF9DC
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801EF9E0
  c->r[3]=c->r[3]+c->r[0]; // 801EF9E4
  goto L_801EF9F4; // 801EF9E8
L_801EF9EC:;
  c->r[3]=0u+0x80470000u; // 801EF9EC
  c->r[3]=c->r[3]+0xFFFFDFA4u; // 801EF9F0
L_801EF9F4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801EF9F4
  cmps(c,0,(int32_t)c->r[0],1); // 801EF9F8
  if (crb(c,2)) { goto L_801EFA04; } // 801EF9FC
  goto L_801EFA08; // 801EFA00
L_801EFA04:;
  c->r[31]=0u+0x00000001u; // 801EFA04
L_801EFA08:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EFA08
  if (crb(c,2)) { goto L_801EFA38; } // 801EFA0C
  c->r[4]=0u+0x80580000u; // 801EFA10
  c->r[0]=R32(c->r[29]+0x00001F18u); // 801EFA14
  c->r[4]=c->r[4]+0xFFFFBA90u; // 801EFA18
  cmpu(c,0,c->r[0],c->r[4]); // 801EFA1C
  if (crb(c,2)) { goto L_801EFA2C; } // 801EFA20
  c->r[3]=c->r[29]+0x00001F18u; // 801EFA24
  c->lr=0x801EFA2Cu; f_801E2514(c); // 801EFA28
L_801EFA2C:;
  {uint32_t ea=c->r[2]+0xFFFFC2A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EFA2C
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 801EFA30
  goto L_801EFA5C; // 801EFA34
L_801EFA38:;
  c->r[4]=0u+0x80580000u; // 801EFA38
  c->r[0]=R32(c->r[29]+0x00001F18u); // 801EFA3C
  c->r[4]=c->r[4]+0xFFFFBA68u; // 801EFA40
  cmpu(c,0,c->r[0],c->r[4]); // 801EFA44
  if (crb(c,2)) { goto L_801EFA54; } // 801EFA48
  c->r[3]=c->r[29]+0x00001F18u; // 801EFA4C
  c->lr=0x801EFA54u; f_801E2514(c); // 801EFA50
L_801EFA54:;
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EFA54
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 801EFA58
L_801EFA5C:;
  c->r[11]=c->r[1]+0x00000030u; // 801EFA5C
  c->lr=0x801EFA64u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EFA60
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EFA64
  c->lr=c->r[0]; // 801EFA68
  c->r[1]=c->r[1]+0x00000030u; // 801EFA6C
  return; // 801EFA70
}

// fn_801EFA74
void f_801EFA74(Ctx* __restrict c) {
  trace_call(0x801EFA74u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFA74
  c->r[0]=c->lr; // 801EFA78
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801EFA7C
  c->r[11]=c->r[1]+0x000000E0u; // 801EFA80
  c->lr=0x801EFA88u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EFA84
  c->r[0]=0u+0x00000000u; // 801EFA88
  {uint32_t ea=c->r[2]+0xFFFFC2ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFA8C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801EFA90
  c->r[29]=c->r[3]|c->r[3]; // 801EFA94
  {uint32_t ea=c->r[2]+0xFFFFC2B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EFA98
  c->r[30]=c->r[4]|c->r[4]; // 801EFA9C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EFAA0
  c->r[5]=c->r[1]+0x00000008u; // 801EFAA4
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[4]=c->ps1[4]=RF32(ea);} // 801EFAA8
  c->r[31]=0u+0x00000000u; // 801EFAAC
  c->r[4]=c->r[4]+0x00000010u; // 801EFAB0
  c->lr=0x801EFAB8u; f_800B02B4(c); // 801EFAB4
  c->r[5]=R32(c->r[29]+0x00000000u); // 801EFAB8
  c->r[4]=c->r[29]+0x000008D0u; // 801EFABC
  c->r[0]=R32(c->r[29]+0x00000004u); // 801EFAC0
  c->r[3]=c->r[1]+0x00000098u; // 801EFAC4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801EFAC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801EFACC
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801EFAD0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFAD4
  c->ctr=c->r[12]; // 801EFAD8
  if (true) { c->lr=0x801EFAE0u; dispatch(c,c->ctr); } // 801EFADC
  {uint32_t ea=c->r[2]+0xFFFFC2B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFAE0
  c->r[3]=c->r[29]+0x000008A4u; // 801EFAE4
  {uint32_t ea=c->r[2]+0xFFFFC2B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EFAE8
  c->r[4]=c->r[1]+0x00000098u; // 801EFAEC
  c->r[5]=c->r[1]+0x0000000Cu; // 801EFAF0
  c->lr=0x801EFAF8u; f_800B9434(c); // 801EFAF4
  cmpu(c,0,c->r[3],0x00000001u); // 801EFAF8
  if (!crb(c,2)) { goto L_801EFB04; } // 801EFAFC
  c->r[31]=0u+0x00000001u; // 801EFB00
L_801EFB04:;
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801EFB04
  c->r[4]=c->r[29]+0x000008D0u; // 801EFB08
  c->r[3]=c->r[1]+0x00000038u; // 801EFB0C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFB10
  c->ctr=c->r[12]; // 801EFB14
  if (true) { c->lr=0x801EFB1Cu; dispatch(c,c->ctr); } // 801EFB18
  c->r[3]=c->r[1]+0x00000020u; // 801EFB1C
  c->r[4]=c->r[1]+0x00000038u; // 801EFB20
  c->lr=0x801EFB28u; f_800C5524(c); // 801EFB24
  c->r[12]=R32(c->r[29]+0x000008D0u); // 801EFB28
  c->r[4]=c->r[29]+0x000008D0u; // 801EFB2C
  c->r[3]=c->r[1]+0x00000068u; // 801EFB30
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFB34
  c->ctr=c->r[12]; // 801EFB38
  if (true) { c->lr=0x801EFB40u; dispatch(c,c->ctr); } // 801EFB3C
  c->r[3]=c->r[1]+0x0000002Cu; // 801EFB40
  c->r[4]=c->r[1]+0x00000068u; // 801EFB44
  c->lr=0x801EFB4Cu; f_80032FD8(c); // 801EFB48
  {uint32_t ea=c->r[2]+0xFFFFC2B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFB4C
  c->r[3]=c->r[1]+0x0000002Cu; // 801EFB50
  c->r[4]=c->r[30]+0x00000010u; // 801EFB54
  c->r[5]=c->r[1]+0x00000020u; // 801EFB58
  c->lr=0x801EFB60u; f_801E4C48(c); // 801EFB5C
  cmps(c,0,(int32_t)c->r[3],0); // 801EFB60
  if (crb(c,2)) { goto L_801EFB6C; } // 801EFB64
  c->r[31]=0u+0x00000001u; // 801EFB68
L_801EFB6C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EFB6C
  if (crb(c,2)) { goto L_801EFB9C; } // 801EFB70
  c->r[3]=R32(c->r[29]+0x000008C4u); // 801EFB74
  c->r[4]=R32(c->r[29]+0x000008CCu); // 801EFB78
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801EFB7C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801EFB80
  if (crb(c,0)) { goto L_801EFB94; } // 801EFB84
  c->r[3]=c->r[29]|c->r[29]; // 801EFB88
  c->lr=0x801EFB90u; f_800AC668(c); // 801EFB8C
  goto L_801EFB9C; // 801EFB90
L_801EFB94:;
  c->r[3]=c->r[29]|c->r[29]; // 801EFB94
  c->lr=0x801EFB9Cu; f_800AC7C4(c); // 801EFB98
L_801EFB9C:;
  c->r[3]=c->r[1]+0x00000014u; // 801EFB9C
  c->r[4]=c->r[29]+0x000008A4u; // 801EFBA0
  c->lr=0x801EFBA8u; f_800B83D4(c); // 801EFBA4
  c->r[3]=c->r[30]+0x00000010u; // 801EFBA8
  c->r[4]=c->r[1]+0x00000014u; // 801EFBAC
  c->lr=0x801EFBB4u; f_8003F468(c); // 801EFBB0
  c->r[11]=c->r[1]+0x000000E0u; // 801EFBB4
  c->lr=0x801EFBBCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EFBB8
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801EFBBC
  c->lr=c->r[0]; // 801EFBC0
  c->r[1]=c->r[1]+0x000000E0u; // 801EFBC4
  return; // 801EFBC8
}

// fn_801EFBCC
void f_801EFBCC(Ctx* __restrict c) {
  trace_call(0x801EFBCCu);
  c->r[0]=R32(c->r[3]+0x00002180u); // 801EFBCC
  c->r[4]=0u+0x00000000u; // 801EFBD0
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EFBD4
  c->r[0]=c->r[0]|0x00040000u; // 801EFBD8
  W32(c->r[3]+0x00002170u,c->r[4]); // 801EFBDC
  {uint32_t ea=c->r[3]+0x00002174u; WF32(ea,c->f[0]);} // 801EFBE0
  W32(c->r[3]+0x00002180u,c->r[0]); // 801EFBE4
  return; // 801EFBE8
}

// fn_801EFBEC
void f_801EFBEC(Ctx* __restrict c) {
  trace_call(0x801EFBECu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFBEC
  c->r[0]=c->lr; // 801EFBF0
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801EFBF4
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801EFBF8
  c->r[31]=c->r[3]|c->r[3]; // 801EFBFC
  W32(c->r[1]+0x000002D8u,c->r[30]); // 801EFC00
  c->r[30]=c->r[4]|c->r[4]; // 801EFC04
  c->r[0]=R32(c->r[3]+0x00002170u); // 801EFC08
  cmps(c,0,(int32_t)c->r[0],16); // 801EFC0C
  if (crb(c,2)) { goto L_801EFD04; } // 801EFC10
  if (!crb(c,0)) { goto L_801EFD7C; } // 801EFC14
  cmps(c,0,(int32_t)c->r[0],1); // 801EFC18
  if (crb(c,2)) { goto L_801EFC70; } // 801EFC1C
  if (!crb(c,0)) { goto L_801EFD7C; } // 801EFC20
  cmps(c,0,(int32_t)c->r[0],0); // 801EFC24
  if (!crb(c,0)) { goto L_801EFC34; } // 801EFC28
  goto L_801EFD7C; // 801EFC2C
  goto L_801EFD7C; // 801EFC30
L_801EFC34:;
  c->r[4]=0u+0x80580000u; // 801EFC34
  c->r[3]=c->r[3]+0x00001F18u; // 801EFC38
  c->r[4]=c->r[4]+0xFFFFBB30u; // 801EFC3C
  c->lr=0x801EFC44u; f_801E2514(c); // 801EFC40
  {uint32_t ea=c->r[2]+0xFFFFC2B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFC44
  c->r[4]=c->r[31]|c->r[31]; // 801EFC48
  c->r[3]=c->r[1]+0x00000094u; // 801EFC4C
  c->lr=0x801EFC54u; f_801E3A28(c); // 801EFC50
  c->r[3]=c->r[30]+0x00000010u; // 801EFC54
  c->r[4]=c->r[1]+0x00000094u; // 801EFC58
  c->lr=0x801EFC60u; f_8003F468(c); // 801EFC5C
  c->r[3]=R32(c->r[31]+0x00002170u); // 801EFC60
  c->r[0]=c->r[3]+0x00000001u; // 801EFC64
  W32(c->r[31]+0x00002170u,c->r[0]); // 801EFC68
  goto L_801EFD7C; // 801EFC6C
L_801EFC70:;
  c->r[0]=0u+0x00000000u; // 801EFC70
  {uint32_t ea=c->r[2]+0xFFFFC2BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFC74
  W32(c->r[1]+0x00000008u,c->r[0]); // 801EFC78
  c->r[5]=c->r[1]+0x00000008u; // 801EFC7C
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EFC80
  {uint32_t ea=c->r[4]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EFC84
  c->r[4]=c->r[4]+0x00000010u; // 801EFC88
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[4]=c->ps1[4]=RF32(ea);} // 801EFC8C
  c->lr=0x801EFC94u; f_800B02B4(c); // 801EFC90
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EFC94
  c->r[4]=c->r[31]+0x000008D0u; // 801EFC98
  c->r[3]=c->r[1]+0x000001E4u; // 801EFC9C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFCA0
  c->ctr=c->r[12]; // 801EFCA4
  if (true) { c->lr=0x801EFCACu; dispatch(c,c->ctr); } // 801EFCA8
  c->r[3]=c->r[1]+0x0000007Cu; // 801EFCAC
  c->r[4]=c->r[1]+0x000001E4u; // 801EFCB0
  c->lr=0x801EFCB8u; f_800C5524(c); // 801EFCB4
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EFCB8
  c->r[4]=c->r[31]+0x000008D0u; // 801EFCBC
  c->r[3]=c->r[1]+0x00000214u; // 801EFCC0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFCC4
  c->ctr=c->r[12]; // 801EFCC8
  if (true) { c->lr=0x801EFCD0u; dispatch(c,c->ctr); } // 801EFCCC
  c->r[3]=c->r[1]+0x00000088u; // 801EFCD0
  c->r[4]=c->r[1]+0x00000214u; // 801EFCD4
  c->lr=0x801EFCDCu; f_80032FD8(c); // 801EFCD8
  {uint32_t ea=c->r[2]+0xFFFFC28Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFCDC
  c->r[3]=c->r[1]+0x00000088u; // 801EFCE0
  c->r[4]=c->r[30]+0x00000010u; // 801EFCE4
  c->r[5]=c->r[1]+0x0000007Cu; // 801EFCE8
  c->lr=0x801EFCF0u; f_801E4C48(c); // 801EFCEC
  cmps(c,0,(int32_t)c->r[3],0); // 801EFCF0
  if (crb(c,2)) { goto L_801EFD7C; } // 801EFCF4
  c->r[0]=0u+0x00000010u; // 801EFCF8
  W32(c->r[31]+0x00002170u,c->r[0]); // 801EFCFC
  goto L_801EFD7C; // 801EFD00
L_801EFD04:;
  c->r[4]=0u+0x80580000u; // 801EFD04
  c->r[3]=c->r[3]+0x00001F18u; // 801EFD08
  c->r[4]=c->r[4]+0xFFFFBB58u; // 801EFD0C
  c->lr=0x801EFD14u; f_801E2514(c); // 801EFD10
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EFD14
  c->r[4]=c->r[31]+0x000008D0u; // 801EFD18
  c->r[3]=c->r[1]+0x000001B4u; // 801EFD1C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFD20
  c->ctr=c->r[12]; // 801EFD24
  if (true) { c->lr=0x801EFD2Cu; dispatch(c,c->ctr); } // 801EFD28
  c->r[3]=c->r[1]+0x00000064u; // 801EFD2C
  c->r[4]=c->r[1]+0x000001B4u; // 801EFD30
  c->lr=0x801EFD38u; f_80032FD8(c); // 801EFD34
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFD38
  c->r[4]=0u+0x803E0000u; // 801EFD3C
  c->r[5]=R32(c->r[1]+0x00000064u); // 801EFD40
  c->r[3]=c->r[31]+0x00000800u; // 801EFD44
  c->r[7]=R32(c->r[1]+0x00000068u); // 801EFD48
  c->f[2]=c->f[1]; // 801EFD4C
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 801EFD50
  c->r[4]=c->r[4]+0x000016ACu; // 801EFD54
  W32(c->r[1]+0x00000070u,c->r[5]); // 801EFD58
  c->r[5]=c->r[1]+0x00000070u; // 801EFD5C
  c->r[6]=0u+0x00000001u; // 801EFD60
  W32(c->r[1]+0x00000074u,c->r[7]); // 801EFD64
  W32(c->r[1]+0x00000078u,c->r[0]); // 801EFD68
  c->lr=0x801EFD70u; f_800C1BA0(c); // 801EFD6C
  c->r[3]=R32(c->r[31]+0x00002170u); // 801EFD70
  c->r[0]=c->r[3]+0x00000001u; // 801EFD74
  W32(c->r[31]+0x00002170u,c->r[0]); // 801EFD78
L_801EFD7C:;
  {uint32_t ea=c->r[31]+0x00002174u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFD7C
  {uint32_t ea=c->r[2]+0xFFFFC2B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EFD80
  fcmp(c,0,c->f[1],c->f[0]); // 801EFD84
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801EFD88
  if (!crb(c,2)) { goto L_801EFFCC; } // 801EFD8C
  c->lr=0x801EFD94u; f_80051FF4(c); // 801EFD90
  c->r[30]=0u+0x803E0000u; // 801EFD94
  c->r[4]=c->r[3]|c->r[3]; // 801EFD98
  c->r[30]=c->r[30]+0x000016ACu; // 801EFD9C
  c->r[3]=c->r[1]+0x0000028Cu; // 801EFDA0
  c->r[5]=c->r[30]+0x00000007u; // 801EFDA4
  c->r[6]=0u+0x00000001u; // 801EFDA8
  c->lr=0x801EFDB0u; f_8013DB40(c); // 801EFDAC
  c->r[3]=c->r[1]+0x0000028Cu; // 801EFDB0
  c->lr=0x801EFDB8u; f_80146F08(c); // 801EFDB4
  cmps(c,0,(int32_t)c->r[3],0); // 801EFDB8
  if (!crb(c,2)) { goto L_801EFDE4; } // 801EFDBC
  c->lr=0x801EFDC4u; f_80051FF4(c); // 801EFDC0
  c->r[4]=c->r[3]|c->r[3]; // 801EFDC4
  c->r[3]=c->r[1]+0x00000244u; // 801EFDC8
  c->r[5]=c->r[30]+0x0000000Fu; // 801EFDCC
  c->r[6]=0u+0x00000001u; // 801EFDD0
  c->lr=0x801EFDD8u; f_8013DB40(c); // 801EFDD4
  c->r[3]=c->r[1]+0x0000028Cu; // 801EFDD8
  c->r[4]=c->r[1]+0x00000244u; // 801EFDDC
  c->lr=0x801EFDE4u; f_800CC5EC(c); // 801EFDE0
L_801EFDE4:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EFDE4
  c->r[4]=c->r[31]+0x000008D0u; // 801EFDE8
  c->r[3]=c->r[1]+0x00000184u; // 801EFDEC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFDF0
  c->ctr=c->r[12]; // 801EFDF4
  if (true) { c->lr=0x801EFDFCu; dispatch(c,c->ctr); } // 801EFDF8
  c->r[0]=0u+0x00000006u; // 801EFDFC
  c->r[5]=c->r[1]+0x00000288u; // 801EFE00
  c->r[4]=c->r[1]+0x00000180u; // 801EFE04
  c->ctr=c->r[0]; // 801EFE08
L_801EFE0C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801EFE0C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801EFE10
  W32(c->r[5]+0x00000004u,c->r[3]); // 801EFE14
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801EFE18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801EFE0C; } // 801EFE1C
  c->r[12]=R32(c->r[1]+0x000002BCu); // 801EFE20
  c->r[3]=c->r[1]+0x0000028Cu; // 801EFE24
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EFE28
  c->ctr=c->r[12]; // 801EFE2C
  if (true) { c->lr=0x801EFE34u; dispatch(c,c->ctr); } // 801EFE30
  c->r[3]=c->r[1]+0x0000028Cu; // 801EFE34
  c->lr=0x801EFE3Cu; f_80146A94(c); // 801EFE38
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EFE3C
  c->r[4]=c->r[31]+0x000008D0u; // 801EFE40
  c->r[3]=c->r[1]+0x00000154u; // 801EFE44
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFE48
  c->ctr=c->r[12]; // 801EFE4C
  if (true) { c->lr=0x801EFE54u; dispatch(c,c->ctr); } // 801EFE50
  c->r[3]=c->r[1]+0x0000004Cu; // 801EFE54
  c->r[4]=c->r[1]+0x00000154u; // 801EFE58
  c->lr=0x801EFE60u; f_80032FD8(c); // 801EFE5C
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFE60
  c->r[4]=0u+0x803E0000u; // 801EFE64
  c->r[5]=R32(c->r[1]+0x0000004Cu); // 801EFE68
  c->r[4]=c->r[4]+0x000016ACu; // 801EFE6C
  c->r[6]=R32(c->r[1]+0x00000050u); // 801EFE70
  c->f[2]=c->f[1]; // 801EFE74
  c->r[0]=R32(c->r[1]+0x00000054u); // 801EFE78
  c->r[3]=c->r[31]+0x00000800u; // 801EFE7C
  W32(c->r[1]+0x00000058u,c->r[5]); // 801EFE80
  c->r[4]=c->r[4]+0x0000001Au; // 801EFE84
  c->r[5]=c->r[1]+0x00000058u; // 801EFE88
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 801EFE8C
  c->r[6]=0u+0x00000001u; // 801EFE90
  W32(c->r[1]+0x00000060u,c->r[0]); // 801EFE94
  c->lr=0x801EFE9Cu; f_800C1BA0(c); // 801EFE98
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EFE9C
  c->r[4]=c->r[31]+0x000008D0u; // 801EFEA0
  c->r[3]=c->r[1]+0x00000124u; // 801EFEA4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFEA8
  c->ctr=c->r[12]; // 801EFEAC
  if (true) { c->lr=0x801EFEB4u; dispatch(c,c->ctr); } // 801EFEB0
  c->r[3]=c->r[1]+0x00000040u; // 801EFEB4
  c->r[4]=c->r[1]+0x00000124u; // 801EFEB8
  c->lr=0x801EFEC0u; f_80032FD8(c); // 801EFEBC
  c->lr=0x801EFEC4u; f_80061A4C(c); // 801EFEC0
  c->r[4]=c->r[3]|c->r[3]; // 801EFEC4
  c->r[3]=c->r[1]+0x00000024u; // 801EFEC8
  c->r[4]=c->r[4]+0x00000384u; // 801EFECC
  c->lr=0x801EFED4u; f_8003F484(c); // 801EFED0
  c->r[3]=c->r[1]+0x00000024u; // 801EFED4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 801EFED8
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,0,ea,0,0);} // 801EFEDC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801EFEE0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801EFEE4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 801EFEE8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,0,ea,1,0);} // 801EFEEC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801EFEF0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 801EFEF4
  c->lr=0x801EFEFCu; f_802657AC(c); // 801EFEF8
  {uint32_t ea=c->r[2]+0xFFFFC2C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EFEFC
  fcmp(c,0,c->f[1],c->f[0]); // 801EFF00
  if (!crb(c,0)) { goto L_801EFFA8; } // 801EFF04
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801EFF08
  c->r[4]=c->r[31]+0x000008D0u; // 801EFF0C
  c->r[3]=c->r[1]+0x000000F4u; // 801EFF10
  c->r[12]=R32(c->r[12]+0x00000040u); // 801EFF14
  c->ctr=c->r[12]; // 801EFF18
  if (true) { c->lr=0x801EFF20u; dispatch(c,c->ctr); } // 801EFF1C
  c->r[3]=c->r[1]+0x000000A0u; // 801EFF20
  c->r[4]=c->r[1]+0x000000F4u; // 801EFF24
  c->lr=0x801EFF2Cu; f_80032FD8(c); // 801EFF28
  {uint32_t ea=c->r[2]+0xFFFFC2B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFF2C
  c->r[3]=c->r[1]+0x000000D0u; // 801EFF30
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EFF34
  c->r[4]=c->r[1]+0x000000A0u; // 801EFF38
  c->r[5]=0u+0xFFFFFFFFu; // 801EFF3C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EFF40
  c->lr=0x801EFF48u; f_800BCD10(c); // 801EFF44
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 801EFF48
  c->r[3]=c->r[1]+0x0000001Cu; // 801EFF4C
  c->r[4]=c->r[1]+0x000000D0u; // 801EFF50
  c->r[5]=R32(c->r[6]+0x00000000u); // 801EFF54
  c->r[0]=R32(c->r[6]+0x00000004u); // 801EFF58
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801EFF5C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801EFF60
  c->lr=0x801EFF68u; f_800BCDAC(c); // 801EFF64
  {uint32_t ea=c->r[2]+0xFFFFC2B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFF68
  c->r[3]=c->r[1]+0x000000ACu; // 801EFF6C
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EFF70
  c->r[4]=c->r[1]+0x000000A0u; // 801EFF74
  c->r[5]=0u+0xFFFFFFFFu; // 801EFF78
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801EFF7C
  c->lr=0x801EFF84u; f_800BCD10(c); // 801EFF80
  c->r[4]=c->r[13]+0xFFFF94B8u; // 801EFF84
  c->r[3]=c->r[1]+0x00000014u; // 801EFF88
  c->r[6]=R32(c->r[4]+0x00000004u); // 801EFF8C
  c->r[4]=c->r[1]+0x000000ACu; // 801EFF90
  c->r[5]=R32(c->r[6]+0x00000000u); // 801EFF94
  c->r[0]=R32(c->r[6]+0x00000004u); // 801EFF98
  W32(c->r[1]+0x00000014u,c->r[5]); // 801EFF9C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801EFFA0
  c->lr=0x801EFFA8u; f_800BCDAC(c); // 801EFFA4
L_801EFFA8:;
  c->r[3]=c->r[1]+0x00000030u; // 801EFFA8
  c->lr=0x801EFFB0u; f_800CDFD0(c); // 801EFFAC
  c->r[5]=R32(c->r[31]+0x00000000u); // 801EFFB0
  c->r[3]=c->r[1]+0x0000000Cu; // 801EFFB4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801EFFB8
  c->r[4]=c->r[1]+0x00000030u; // 801EFFBC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801EFFC0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801EFFC4
  c->lr=0x801EFFCCu; f_800CE040(c); // 801EFFC8
L_801EFFCC:;
  c->r[3]=0u+0x804D0000u; // 801EFFCC
  {uint32_t ea=c->r[31]+0x00002174u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EFFD0
  c->r[3]=c->r[3]+0x00003318u; // 801EFFD4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EFFD8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801EFFDC
  {uint32_t ea=c->r[31]+0x00002174u; WF32(ea,c->f[0]);} // 801EFFE0
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801EFFE4
  c->r[30]=R32(c->r[1]+0x000002D8u); // 801EFFE8
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801EFFEC
  c->lr=c->r[0]; // 801EFFF0
  c->r[1]=c->r[1]+0x000002E0u; // 801EFFF4
  return; // 801EFFF8
}

// fn_801EFFFC
void f_801EFFFC(Ctx* __restrict c) {
  trace_call(0x801EFFFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFFFC
  c->r[0]=c->lr; // 801F0000
  c->r[4]=0u+0x80580000u; // 801F0004
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F0008
  c->r[4]=c->r[4]+0xFFFFBA68u; // 801F000C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801F0010
  c->r[31]=c->r[5]|c->r[5]; // 801F0014
  W32(c->r[1]+0x00000028u,c->r[30]); // 801F0018
  c->r[30]=c->r[3]|c->r[3]; // 801F001C
  c->r[0]=R32(c->r[3]+0x00001F18u); // 801F0020
  cmpu(c,0,c->r[0],c->r[4]); // 801F0024
  if (crb(c,2)) { goto L_801F0034; } // 801F0028
  c->r[3]=c->r[3]+0x00001F18u; // 801F002C
  c->lr=0x801F0034u; f_801E2514(c); // 801F0030
L_801F0034:;
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0034
  c->r[3]=c->r[1]+0x00000014u; // 801F0038
  {uint32_t ea=c->r[2]+0xFFFFC2B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F003C
  c->f[2]=c->f[1]; // 801F0040
  c->f[3]=c->f[1]; // 801F0044
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801F0048
  c->lr=0x801F0050u; f_800521A0(c); // 801F004C
  c->r[4]=c->r[3]|c->r[3]; // 801F0050
  c->r[3]=c->r[31]+0x00000020u; // 801F0054
  c->lr=0x801F005Cu; f_8003F468(c); // 801F0058
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F005C
  c->r[4]=c->r[30]|c->r[30]; // 801F0060
  c->r[3]=c->r[1]+0x00000008u; // 801F0064
  c->lr=0x801F006Cu; f_801E3A28(c); // 801F0068
  c->r[3]=c->r[31]+0x00000010u; // 801F006C
  c->r[4]=c->r[1]+0x00000008u; // 801F0070
  c->lr=0x801F0078u; f_8003F468(c); // 801F0074
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F0078
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801F007C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801F0080
  c->lr=c->r[0]; // 801F0084
  c->r[1]=c->r[1]+0x00000030u; // 801F0088
  return; // 801F008C
}

// fn_801F0090
void f_801F0090(Ctx* __restrict c) {
  trace_call(0x801F0090u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0090
  c->r[0]=c->lr; // 801F0094
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801F0098
  c->r[0]=0u+0x00000000u; // 801F009C
  W32(c->r[1]+0x000000CCu,c->r[31]); // 801F00A0
  c->r[31]=c->r[4]|c->r[4]; // 801F00A4
  c->r[4]=c->r[4]+0x00000020u; // 801F00A8
  W32(c->r[1]+0x000000C8u,c->r[30]); // 801F00AC
  c->r[30]=c->r[3]|c->r[3]; // 801F00B0
  c->r[3]=c->r[1]+0x00000024u; // 801F00B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801F00B8
  c->lr=0x801F00C0u; f_8003F484(c); // 801F00BC
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801F00C0
  c->r[4]=c->r[30]+0x000008D0u; // 801F00C4
  c->r[3]=c->r[1]+0x00000090u; // 801F00C8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801F00CC
  c->ctr=c->r[12]; // 801F00D0
  if (true) { c->lr=0x801F00D8u; dispatch(c,c->ctr); } // 801F00D4
  c->r[3]=c->r[1]+0x00000024u; // 801F00D8
  c->r[4]=c->r[1]+0x00000090u; // 801F00DC
  c->r[5]=c->r[3]|c->r[3]; // 801F00E0
  c->lr=0x801F00E8u; f_80394B04(c); // 801F00E4
  {uint32_t ea=c->r[2]+0xFFFFC2ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F00E8
  c->r[3]=c->r[30]|c->r[30]; // 801F00EC
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F00F0
  c->r[4]=c->r[31]+0x00000010u; // 801F00F4
  {uint32_t ea=c->r[2]+0xFFFFC2A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F00F8
  c->r[5]=c->r[1]+0x00000008u; // 801F00FC
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[4]=c->ps1[4]=RF32(ea);} // 801F0100
  c->lr=0x801F0108u; f_800B02B4(c); // 801F0104
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801F0108
  c->r[4]=c->r[30]+0x000008D0u; // 801F010C
  c->r[3]=c->r[1]+0x00000030u; // 801F0110
  c->r[12]=R32(c->r[12]+0x00000040u); // 801F0114
  c->ctr=c->r[12]; // 801F0118
  if (true) { c->lr=0x801F0120u; dispatch(c,c->ctr); } // 801F011C
  c->r[3]=c->r[1]+0x0000000Cu; // 801F0120
  c->r[4]=c->r[1]+0x00000030u; // 801F0124
  c->lr=0x801F012Cu; f_800C5524(c); // 801F0128
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801F012C
  c->r[4]=c->r[30]+0x000008D0u; // 801F0130
  c->r[3]=c->r[1]+0x00000060u; // 801F0134
  c->r[12]=R32(c->r[12]+0x00000040u); // 801F0138
  c->ctr=c->r[12]; // 801F013C
  if (true) { c->lr=0x801F0144u; dispatch(c,c->ctr); } // 801F0140
  c->r[3]=c->r[1]+0x00000018u; // 801F0144
  c->r[4]=c->r[1]+0x00000060u; // 801F0148
  c->lr=0x801F0150u; f_80032FD8(c); // 801F014C
  {uint32_t ea=c->r[2]+0xFFFFC2ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0150
  c->r[3]=c->r[1]+0x00000018u; // 801F0154
  c->r[4]=c->r[31]+0x00000010u; // 801F0158
  c->r[5]=c->r[1]+0x0000000Cu; // 801F015C
  c->lr=0x801F0164u; f_801E4C48(c); // 801F0160
  cmps(c,0,(int32_t)c->r[3],0); // 801F0164
  if (crb(c,2)) { goto L_801F0178; } // 801F0168
  c->r[3]=c->r[30]|c->r[30]; // 801F016C
  c->r[4]=0u+0x00000008u; // 801F0170
  c->lr=0x801F0178u; f_801E3330(c); // 801F0174
L_801F0178:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801F0178
  c->r[31]=R32(c->r[1]+0x000000CCu); // 801F017C
  c->r[30]=R32(c->r[1]+0x000000C8u); // 801F0180
  c->lr=c->r[0]; // 801F0184
  c->r[1]=c->r[1]+0x000000D0u; // 801F0188
  return; // 801F018C
}

// fn_801F0190
void f_801F0190(Ctx* __restrict c) {
  trace_call(0x801F0190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0190
  c->r[0]=c->lr; // 801F0194
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F019C
  c->r[31]=c->r[5]|c->r[5]; // 801F01A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F01A4
  c->r[30]=c->r[3]|c->r[3]; // 801F01A8
  c->r[6]=R32(c->r[3]+0x00002180u); // 801F01AC
  c->r[4]=R32(c->r[3]+0x00000000u); // 801F01B0
  c->r[6]=rotl(c->r[6],0)&0xFFBFFFFFu; // 801F01B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801F01B8
  W32(c->r[3]+0x00002180u,c->r[6]); // 801F01BC
  W32(c->r[1]+0x00000008u,c->r[4]); // 801F01C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F01C4
  c->lr=0x801F01CCu; f_80128960(c); // 801F01C8
  c->r[4]=c->r[1]+0x00000008u; // 801F01CC
  c->lr=0x801F01D4u; f_80127EA8(c); // 801F01D0
  c->lr=0x801F01D8u; f_80291D94(c); // 801F01D4
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801F01D8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 801F01DC
  c->r[0]=c->r[0]^c->r[4]; // 801F01E0
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 801F01E4
  if (!crb(c,2)) { goto L_801F0200; } // 801F01E8
  c->r[4]=0u+0x80580000u; // 801F01EC
  c->r[3]=c->r[30]+0x00001F18u; // 801F01F0
  c->r[4]=c->r[4]+0xFFFFBAB8u; // 801F01F4
  c->lr=0x801F01FCu; f_801E2514(c); // 801F01F8
  goto L_801F0210; // 801F01FC
L_801F0200:;
  c->r[4]=0u+0x80580000u; // 801F0200
  c->r[3]=c->r[30]+0x00001F18u; // 801F0204
  c->r[4]=c->r[4]+0xFFFFBAE0u; // 801F0208
  c->lr=0x801F0210u; f_801E2514(c); // 801F020C
L_801F0210:;
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0210
  c->r[0]=0u+0x00000000u; // 801F0214
  W32(c->r[31]+0x00000024u,c->r[0]); // 801F0218
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 801F021C
  {uint32_t ea=c->r[30]+0x00002154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0220
  {uint32_t ea=c->r[30]+0x00002178u; WF32(ea,c->f[0]);} // 801F0224
  c->lr=0x801F022Cu; f_801E4C90(c); // 801F0228
  W32(c->r[30]+0x00000894u,c->r[3]); // 801F022C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F0230
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F0234
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0238
  c->lr=c->r[0]; // 801F023C
  c->r[1]=c->r[1]+0x00000020u; // 801F0240
  return; // 801F0244
}

// fn_801F0248
void f_801F0248(Ctx* __restrict c) {
  trace_call(0x801F0248u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0248
  c->r[0]=c->lr; // 801F024C
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0250
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0254
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F0258
  c->r[31]=c->r[3]|c->r[3]; // 801F025C
  {uint32_t ea=c->r[3]+0x00002178u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0260
  fcmp(c,0,c->f[0],c->f[1]); // 801F0264
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801F0268
  if (!crb(c,2)) { goto L_801F027C; } // 801F026C
  c->r[4]=0u+0x00000006u; // 801F0270
  c->lr=0x801F0278u; f_801E3330(c); // 801F0274
  goto L_801F02D4; // 801F0278
L_801F027C:;
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F027C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0280
  fcmp(c,0,c->f[2],c->f[0]); // 801F0284
  if (!crb(c,1)) { goto L_801F02B8; } // 801F0288
  c->f[2]=c->f[1]; // 801F028C
  c->r[3]=c->r[1]+0x00000008u; // 801F0290
  c->f[3]=c->f[1]; // 801F0294
  c->lr=0x801F029Cu; f_800521A0(c); // 801F0298
  {uint32_t ea=c->r[2]+0xFFFFC2C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F029C
  c->r[4]=c->r[3]|c->r[3]; // 801F02A0
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F02A4
  c->r[3]=c->r[31]|c->r[31]; // 801F02A8
  c->r[5]=0u+0x00000000u; // 801F02AC
  c->r[6]=0u+0xFFFFFFFFu; // 801F02B0
  c->lr=0x801F02B8u; f_800AEBF8(c); // 801F02B4
L_801F02B8:;
  c->r[3]=c->r[31]+0x00001F18u; // 801F02B8
  c->lr=0x801F02C0u; f_801E25C8(c); // 801F02BC
  cmps(c,0,(int32_t)c->r[3],0); // 801F02C0
  if (crb(c,2)) { goto L_801F02D4; } // 801F02C4
  c->r[3]=c->r[31]|c->r[31]; // 801F02C8
  c->r[4]=0u+0x00000003u; // 801F02CC
  c->lr=0x801F02D4u; f_801E3330(c); // 801F02D0
L_801F02D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F02D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F02D8
  c->lr=c->r[0]; // 801F02DC
  c->r[1]=c->r[1]+0x00000020u; // 801F02E0
  return; // 801F02E4
}

// fn_801F02E8
void f_801F02E8(Ctx* __restrict c) {
  trace_call(0x801F02E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F02E8
  c->r[0]=c->lr; // 801F02EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F02F0
  c->r[5]=R32(c->r[3]+0x00002180u); // 801F02F4
  c->r[4]=R32(c->r[3]+0x00000000u); // 801F02F8
  c->r[5]=c->r[5]|0x00400000u; // 801F02FC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801F0300
  W32(c->r[3]+0x00002180u,c->r[5]); // 801F0304
  W32(c->r[1]+0x00000008u,c->r[4]); // 801F0308
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F030C
  c->lr=0x801F0314u; f_80128960(c); // 801F0310
  c->r[4]=c->r[1]+0x00000008u; // 801F0314
  c->lr=0x801F031Cu; f_80127EC0(c); // 801F0318
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F031C
  c->lr=c->r[0]; // 801F0320
  c->r[1]=c->r[1]+0x00000010u; // 801F0324
  return; // 801F0328
}

// fn_801F032C
void f_801F032C(Ctx* __restrict c) {
  trace_call(0x801F032Cu);
  c->r[4]=0u+0x80580000u; // 801F032C
  c->r[3]=c->r[3]+0x00001F18u; // 801F0330
  c->r[4]=c->r[4]+0xFFFFBBA8u; // 801F0334
  f_801E2514(c); return; // 801F0338
}

// fn_801F033C
void f_801F033C(Ctx* __restrict c) {
  trace_call(0x801F033Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F033C
  c->r[0]=c->lr; // 801F0340
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0348
  c->r[31]=c->r[3]|c->r[3]; // 801F034C
  c->r[3]=c->r[3]+0x00001F18u; // 801F0350
  c->lr=0x801F0358u; f_801E25C8(c); // 801F0354
  cmps(c,0,(int32_t)c->r[3],0); // 801F0358
  if (crb(c,2)) { goto L_801F036C; } // 801F035C
  c->r[3]=c->r[31]|c->r[31]; // 801F0360
  c->r[4]=0u+0x0000000Cu; // 801F0364
  c->lr=0x801F036Cu; f_801E3330(c); // 801F0368
L_801F036C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F036C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0370
  c->lr=c->r[0]; // 801F0374
  c->r[1]=c->r[1]+0x00000010u; // 801F0378
  return; // 801F037C
}

// fn_801F0380
void f_801F0380(Ctx* __restrict c) {
  trace_call(0x801F0380u);
  return; // 801F0380
}

// fn_801F0384
void f_801F0384(Ctx* __restrict c) {
  trace_call(0x801F0384u);
  c->r[4]=0u+0x80580000u; // 801F0384
  c->r[3]=c->r[3]+0x00001F18u; // 801F0388
  c->r[4]=c->r[4]+0xFFFFBB08u; // 801F038C
  f_801E2514(c); return; // 801F0390
}

// fn_801F0394
void f_801F0394(Ctx* __restrict c) {
  trace_call(0x801F0394u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0394
  c->r[0]=c->lr; // 801F0398
  W32(c->r[1]+0x00000134u,c->r[0]); // 801F039C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801F03A0
  W32(c->r[1]+0x00000128u,c->r[30]); // 801F03A4
  c->r[30]=c->r[3]|c->r[3]; // 801F03A8
  c->r[3]=c->r[3]+0x00001F18u; // 801F03AC
  c->lr=0x801F03B4u; f_801E25C8(c); // 801F03B0
  cmps(c,0,(int32_t)c->r[3],0); // 801F03B4
  if (crb(c,2)) { goto L_801F04EC; } // 801F03B8
  c->lr=0x801F03C0u; f_80051FF4(c); // 801F03BC
  c->r[31]=0u+0x803E0000u; // 801F03C0
  c->r[4]=c->r[3]|c->r[3]; // 801F03C4
  c->r[31]=c->r[31]+0x000016ACu; // 801F03C8
  c->r[3]=c->r[1]+0x000000E0u; // 801F03CC
  c->r[5]=c->r[31]+0x00000021u; // 801F03D0
  c->r[6]=0u+0x00000001u; // 801F03D4
  c->lr=0x801F03DCu; f_8013DB40(c); // 801F03D8
  c->r[3]=c->r[1]+0x000000E0u; // 801F03DC
  c->lr=0x801F03E4u; f_80146F08(c); // 801F03E0
  cmps(c,0,(int32_t)c->r[3],0); // 801F03E4
  if (!crb(c,2)) { goto L_801F0410; } // 801F03E8
  c->lr=0x801F03F0u; f_80051FF4(c); // 801F03EC
  c->r[4]=c->r[3]|c->r[3]; // 801F03F0
  c->r[3]=c->r[1]+0x00000098u; // 801F03F4
  c->r[5]=c->r[31]+0x00000029u; // 801F03F8
  c->r[6]=0u+0x00000001u; // 801F03FC
  c->lr=0x801F0404u; f_8013DB40(c); // 801F0400
  c->r[3]=c->r[1]+0x000000E0u; // 801F0404
  c->r[4]=c->r[1]+0x00000098u; // 801F0408
  c->lr=0x801F0410u; f_800CC5EC(c); // 801F040C
L_801F0410:;
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801F0410
  c->r[4]=c->r[30]+0x000008D0u; // 801F0414
  c->r[3]=c->r[1]+0x00000068u; // 801F0418
  c->r[12]=R32(c->r[12]+0x00000040u); // 801F041C
  c->ctr=c->r[12]; // 801F0420
  if (true) { c->lr=0x801F0428u; dispatch(c,c->ctr); } // 801F0424
  c->r[0]=0u+0x00000006u; // 801F0428
  c->r[5]=c->r[1]+0x000000DCu; // 801F042C
  c->r[4]=c->r[1]+0x00000064u; // 801F0430
  c->ctr=c->r[0]; // 801F0434
L_801F0438:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801F0438
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801F043C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801F0440
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801F0444
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F0438; } // 801F0448
  c->r[12]=R32(c->r[1]+0x00000110u); // 801F044C
  c->r[3]=c->r[1]+0x000000E0u; // 801F0450
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F0454
  c->ctr=c->r[12]; // 801F0458
  if (true) { c->lr=0x801F0460u; dispatch(c,c->ctr); } // 801F045C
  c->r[3]=c->r[1]+0x000000E0u; // 801F0460
  c->lr=0x801F0468u; f_80146A94(c); // 801F0464
  c->r[12]=R32(c->r[30]+0x000008D0u); // 801F0468
  c->r[4]=c->r[30]+0x000008D0u; // 801F046C
  c->r[3]=c->r[1]+0x00000038u; // 801F0470
  c->r[12]=R32(c->r[12]+0x00000040u); // 801F0474
  c->ctr=c->r[12]; // 801F0478
  if (true) { c->lr=0x801F0480u; dispatch(c,c->ctr); } // 801F047C
  c->r[3]=c->r[1]+0x00000020u; // 801F0480
  c->r[4]=c->r[1]+0x00000038u; // 801F0484
  c->lr=0x801F048Cu; f_80032FD8(c); // 801F0488
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F048C
  c->r[4]=0u+0x803E0000u; // 801F0490
  c->r[5]=R32(c->r[1]+0x00000020u); // 801F0494
  c->r[4]=c->r[4]+0x000016ACu; // 801F0498
  c->r[6]=R32(c->r[1]+0x00000024u); // 801F049C
  c->f[2]=c->f[1]; // 801F04A0
  c->r[0]=R32(c->r[1]+0x00000028u); // 801F04A4
  c->r[3]=c->r[30]+0x00000800u; // 801F04A8
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801F04AC
  c->r[4]=c->r[4]+0x00000034u; // 801F04B0
  c->r[5]=c->r[1]+0x0000002Cu; // 801F04B4
  W32(c->r[1]+0x00000030u,c->r[6]); // 801F04B8
  c->r[6]=0u+0x00000001u; // 801F04BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F04C0
  c->lr=0x801F04C8u; f_800C1BA0(c); // 801F04C4
  c->r[3]=c->r[1]+0x00000010u; // 801F04C8
  c->lr=0x801F04D0u; f_800CDFD0(c); // 801F04CC
  c->r[5]=R32(c->r[30]+0x00000000u); // 801F04D0
  c->r[3]=c->r[1]+0x00000008u; // 801F04D4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801F04D8
  c->r[4]=c->r[1]+0x00000010u; // 801F04DC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801F04E0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F04E4
  c->lr=0x801F04ECu; f_800CE040(c); // 801F04E8
L_801F04EC:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801F04EC
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801F04F0
  c->r[30]=R32(c->r[1]+0x00000128u); // 801F04F4
  c->lr=c->r[0]; // 801F04F8
  c->r[1]=c->r[1]+0x00000130u; // 801F04FC
  return; // 801F0500
}

// fn_801F0504
void f_801F0504(Ctx* __restrict c) {
  trace_call(0x801F0504u);
  c->r[0]=0u+0x00000000u; // 801F0504
  c->r[4]=0u+0x80580000u; // 801F0508
  W32(c->r[3]+0x00002170u,c->r[0]); // 801F050C
  c->r[4]=c->r[4]+0xFFFFBB80u; // 801F0510
  c->r[3]=c->r[3]+0x00001F18u; // 801F0514
  f_801E2514(c); return; // 801F0518
}

// fn_801F051C
void f_801F051C(Ctx* __restrict c) {
  trace_call(0x801F051Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F051C
  c->r[0]=c->lr; // 801F0520
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0528
  c->r[31]=c->r[3]|c->r[3]; // 801F052C
  c->r[3]=c->r[3]+0x00001F18u; // 801F0530
  c->lr=0x801F0538u; f_801E25C8(c); // 801F0534
  cmps(c,0,(int32_t)c->r[3],0); // 801F0538
  if (!crb(c,2)) { goto L_801F054C; } // 801F053C
  c->r[0]=R32(c->r[31]+0x00002170u); // 801F0540
  cmps(c,0,(int32_t)c->r[0],1); // 801F0544
  if (!crb(c,2)) { goto L_801F0564; } // 801F0548
L_801F054C:;
  c->r[0]=R32(c->r[31]+0x00002180u); // 801F054C
  c->r[3]=c->r[31]+0x000008D0u; // 801F0550
  c->r[4]=0u+0x00000001u; // 801F0554
  c->r[0]=rotl(c->r[0],0)&0xFFF7FFFFu; // 801F0558
  W32(c->r[31]+0x00002180u,c->r[0]); // 801F055C
  c->lr=0x801F0564u; f_8002B91C(c); // 801F0560
L_801F0564:;
  c->r[3]=c->r[31]+0x00001F18u; // 801F0564
  c->lr=0x801F056Cu; f_801E25C8(c); // 801F0568
  cmps(c,0,(int32_t)c->r[3],0); // 801F056C
  if (crb(c,2)) { goto L_801F058C; } // 801F0570
  c->r[0]=R32(c->r[31]+0x00002180u); // 801F0574
  c->r[3]=c->r[31]|c->r[31]; // 801F0578
  c->r[4]=0u+0x00000003u; // 801F057C
  c->r[0]=c->r[0]|0x00400000u; // 801F0580
  W32(c->r[31]+0x00002180u,c->r[0]); // 801F0584
  c->lr=0x801F058Cu; f_801E3330(c); // 801F0588
L_801F058C:;
  c->r[3]=R32(c->r[31]+0x00002170u); // 801F058C
  c->r[0]=c->r[3]+0x00000001u; // 801F0590
  W32(c->r[31]+0x00002170u,c->r[0]); // 801F0594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0598
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F059C
  c->lr=c->r[0]; // 801F05A0
  c->r[1]=c->r[1]+0x00000010u; // 801F05A4
  return; // 801F05A8
}

// fn_801F05AC
void f_801F05AC(Ctx* __restrict c) {
  trace_call(0x801F05ACu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F05AC
  c->r[0]=c->lr; // 801F05B0
  W32(c->r[1]+0x00000084u,c->r[0]); // 801F05B4
  c->r[11]=c->r[1]+0x00000080u; // 801F05B8
  c->lr=0x801F05C0u; f_80289DC0(c); // 801F05BC
  {uint32_t ea=c->r[2]+0xFFFFC288u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F05C0
  c->r[30]=0u+0x80580000u; // 801F05C4
  c->r[30]=c->r[30]+0xFFFFBA28u; // 801F05C8
  c->r[31]=0u+0x80400000u; // 801F05CC
  c->f[3]=c->f[1]; // 801F05D0
  {uint32_t ea=c->r[2]+0xFFFFC284u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F05D4
  c->r[31]=c->r[31]+0x00007E50u; // 801F05D8
  c->r[3]=c->r[30]+0x00000000u; // 801F05DC
  c->lr=0x801F05E4u; f_8003F588(c); // 801F05E0
  c->r[28]=c->r[31]+0x00000000u; // 801F05E4
  c->r[15]=R32(c->r[31]+0x00000000u); // 801F05E8
  c->r[22]=c->r[31]+0x00000024u; // 801F05EC
  c->r[20]=R32(c->r[28]+0x00000004u); // 801F05F0
  c->r[21]=c->r[15]-c->r[22]; // 801F05F4
  c->r[29]=c->r[31]+0x0000003Au; // 801F05F8
  c->r[19]=c->r[20]-c->r[29]; // 801F05FC
  c->r[3]=R32(c->r[28]+0x00000008u); // 801F0600
  c->r[23]=sraw(c,c->r[21],16); // 801F0604
  c->r[9]=c->r[31]+0x0000005Eu; // 801F0608
  c->r[17]=c->r[3]-c->r[9]; // 801F060C
  c->r[18]=sraw(c,c->r[19],16); // 801F0610
  c->r[8]=sraw(c,c->r[17],16); // 801F0614
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801F0618
  c->r[4]=c->r[31]+0x00000074u; // 801F061C
  c->r[3]=c->r[30]+0x00000090u; // 801F0620
  c->r[16]=c->r[0]-c->r[4]; // 801F0624
  W16(c->r[22]+0x00000006u,c->r[23]); // 801F0628
  c->r[0]=c->r[4]-c->r[3]; // 801F062C
  c->r[24]=c->r[30]+0x00000018u; // 801F0630
  c->r[26]=c->r[13]+0xFFFF89F0u; // 801F0634
  c->r[12]=c->r[30]+0x00000040u; // 801F0638
  c->r[7]=c->r[30]+0x00000068u; // 801F063C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F0640
  c->r[14]=sraw(c,c->r[16],16); // 801F0644
  c->r[0]=c->r[26]-c->r[3]; // 801F0648
  W32(c->r[1]+0x00000010u,c->r[0]); // 801F064C
  c->r[25]=c->r[22]-c->r[24]; // 801F0650
  c->r[27]=c->r[26]-c->r[24]; // 801F0654
  c->r[11]=c->r[29]-c->r[12]; // 801F0658
  c->r[10]=c->r[26]-c->r[12]; // 801F065C
  c->r[6]=c->r[9]-c->r[7]; // 801F0660
  c->r[5]=c->r[26]-c->r[7]; // 801F0664
  c->r[0]=R32(c->r[28]+0x00000010u); // 801F0668
  c->r[23]=c->r[31]+0x00000082u; // 801F066C
  W16(c->r[4]+0x00000002u,c->r[14]); // 801F0670
  c->r[0]=c->r[0]-c->r[23]; // 801F0674
  W16(c->r[4]+0x00000004u,c->r[16]); // 801F0678
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801F067C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801F0680
  c->r[0]=sraw(c,c->r[0],16); // 801F0684
  W32(c->r[3]+0x00000004u,c->r[4]); // 801F0688
  c->r[4]=R32(c->r[1]+0x00000010u); // 801F068C
  W16(c->r[22]+0x00000008u,c->r[21]); // 801F0690
  W32(c->r[24]+0x00000004u,c->r[25]); // 801F0694
  W32(c->r[24]+0x0000000Cu,c->r[27]); // 801F0698
  W16(c->r[29]+0x00000002u,c->r[18]); // 801F069C
  W16(c->r[29]+0x00000004u,c->r[19]); // 801F06A0
  W16(c->r[29]+0x00000014u,c->r[18]); // 801F06A4
  W16(c->r[29]+0x00000016u,c->r[19]); // 801F06A8
  W32(c->r[12]+0x00000004u,c->r[11]); // 801F06AC
  W32(c->r[12]+0x0000000Cu,c->r[10]); // 801F06B0
  W16(c->r[9]+0x00000006u,c->r[8]); // 801F06B4
  W16(c->r[9]+0x00000008u,c->r[17]); // 801F06B8
  W32(c->r[7]+0x00000004u,c->r[6]); // 801F06BC
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 801F06C0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801F06C4
  W16(c->r[23]+0x00000002u,c->r[0]); // 801F06C8
  c->r[0]=R32(c->r[28]+0x00000014u); // 801F06CC
  c->r[19]=c->r[31]+0x00000090u; // 801F06D0
  c->r[16]=c->r[31]+0x0000009Eu; // 801F06D4
  c->r[10]=c->r[31]+0x000000B4u; // 801F06D8
  c->r[23]=c->r[0]-c->r[19]; // 801F06DC
  c->r[18]=c->r[30]+0x000000E0u; // 801F06E0
  c->r[24]=c->r[20]-c->r[16]; // 801F06E4
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801F06E8
  c->r[25]=c->r[15]-c->r[10]; // 801F06EC
  c->r[0]=sraw(c,c->r[23],16); // 801F06F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F06F4
  c->r[0]=sraw(c,c->r[24],16); // 801F06F8
  c->r[6]=c->r[31]+0x000000CAu; // 801F06FC
  c->r[22]=c->r[30]+0x000000B8u; // 801F0700
  c->r[27]=c->r[3]-c->r[6]; // 801F0704
  W32(c->r[1]+0x00000018u,c->r[0]); // 801F0708
  c->r[0]=sraw(c,c->r[25],16); // 801F070C
  c->r[4]=c->r[31]+0x000000D8u; // 801F0710
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801F0714
  c->r[0]=sraw(c,c->r[27],16); // 801F0718
  c->r[14]=c->r[30]+0x00000108u; // 801F071C
  c->r[20]=c->r[26]-c->r[22]; // 801F0720
  W32(c->r[1]+0x00000020u,c->r[0]); // 801F0724
  c->r[5]=c->r[30]+0x00000158u; // 801F0728
  c->r[0]=R32(c->r[28]+0x00000020u); // 801F072C
  c->r[3]=c->r[30]+0x00000180u; // 801F0730
  c->r[9]=c->r[30]+0x00000130u; // 801F0734
  c->r[15]=c->r[26]-c->r[18]; // 801F0738
  c->r[28]=c->r[0]-c->r[4]; // 801F073C
  c->r[30]=c->r[26]-c->r[5]; // 801F0740
  c->r[29]=sraw(c,c->r[28],16); // 801F0744
  c->r[0]=c->r[31]+0x00000082u; // 801F0748
  c->r[21]=c->r[0]-c->r[22]; // 801F074C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801F0750
  c->r[0]=c->r[6]-c->r[5]; // 801F0754
  c->r[29]=c->r[4]-c->r[3]; // 801F0758
  W32(c->r[1]+0x00000028u,c->r[29]); // 801F075C
  c->r[26]=c->r[26]-c->r[3]; // 801F0760
  c->r[8]=c->r[13]+0xFFFF89F2u; // 801F0764
  c->r[7]=c->r[13]+0xFFFF89F8u; // 801F0768
  c->r[11]=c->r[8]-c->r[14]; // 801F076C
  W32(c->r[5]+0x00000004u,c->r[0]); // 801F0770
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0774
  c->r[7]=c->r[7]-c->r[9]; // 801F0778
  W32(c->r[1]+0x0000002Cu,c->r[26]); // 801F077C
  c->r[17]=c->r[19]-c->r[18]; // 801F0780
  c->r[12]=c->r[16]-c->r[14]; // 801F0784
  c->r[8]=c->r[10]-c->r[9]; // 801F0788
  W16(c->r[4]+0x00000002u,c->r[0]); // 801F078C
  c->r[26]=c->r[31]+0x00000082u; // 801F0790
  c->r[0]=R32(c->r[1]+0x00000028u); // 801F0794
  c->r[29]=R32(c->r[1]+0x00000008u); // 801F0798
  W32(c->r[22]+0x0000000Cu,c->r[20]); // 801F079C
  c->r[20]=R32(c->r[1]+0x00000014u); // 801F07A0
  W32(c->r[18]+0x0000000Cu,c->r[15]); // 801F07A4
  c->r[15]=R32(c->r[1]+0x00000018u); // 801F07A8
  W32(c->r[14]+0x0000000Cu,c->r[11]); // 801F07AC
  c->r[11]=R32(c->r[1]+0x0000001Cu); // 801F07B0
  W32(c->r[9]+0x0000000Cu,c->r[7]); // 801F07B4
  c->r[7]=R32(c->r[1]+0x00000020u); // 801F07B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801F07BC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801F07C0
  W16(c->r[10]+0x00000006u,c->r[11]); // 801F07C4
  c->r[11]=c->r[1]+0x00000080u; // 801F07C8
  W16(c->r[26]+0x00000004u,c->r[29]); // 801F07CC
  W32(c->r[22]+0x00000004u,c->r[21]); // 801F07D0
  W16(c->r[19]+0x00000002u,c->r[20]); // 801F07D4
  W16(c->r[19]+0x00000004u,c->r[23]); // 801F07D8
  W32(c->r[18]+0x00000004u,c->r[17]); // 801F07DC
  W16(c->r[16]+0x00000006u,c->r[15]); // 801F07E0
  W16(c->r[16]+0x00000008u,c->r[24]); // 801F07E4
  W32(c->r[14]+0x00000004u,c->r[12]); // 801F07E8
  W16(c->r[10]+0x00000008u,c->r[25]); // 801F07EC
  W32(c->r[9]+0x00000004u,c->r[8]); // 801F07F0
  W16(c->r[6]+0x00000002u,c->r[7]); // 801F07F4
  W16(c->r[6]+0x00000004u,c->r[27]); // 801F07F8
  W32(c->r[5]+0x0000000Cu,c->r[30]); // 801F07FC
  W16(c->r[4]+0x00000004u,c->r[28]); // 801F0800
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801F0804
  c->lr=0x801F080Cu; f_80289E0C(c); // 801F0808
  c->r[0]=R32(c->r[1]+0x00000084u); // 801F080C
  c->lr=c->r[0]; // 801F0810
  c->r[1]=c->r[1]+0x00000080u; // 801F0814
  return; // 801F0818
}

// fn_801F081C
void f_801F081C(Ctx* __restrict c) {
  trace_call(0x801F081Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F081C
  f_801EF94C(c); return; // 801F0820
}

// fn_801F0824
void f_801F0824(Ctx* __restrict c) {
  trace_call(0x801F0824u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F0824
  f_801F02E8(c); return; // 801F0828
}

// fn_801F082C
void f_801F082C(Ctx* __restrict c) {
  trace_call(0x801F082Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F082C
  f_801F0384(c); return; // 801F0830
}

// fn_801F0834
void f_801F0834(Ctx* __restrict c) {
  trace_call(0x801F0834u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F0834
  f_801EF730(c); return; // 801F0838
}

// fn_801F083C
void f_801F083C(Ctx* __restrict c) {
  trace_call(0x801F083Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F083C
  f_801EF8F8(c); return; // 801F0840
}

// fn_801F0844
void f_801F0844(Ctx* __restrict c) {
  trace_call(0x801F0844u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F0844
  f_801EFFFC(c); return; // 801F0848
}

// fn_801F084C
void f_801F084C(Ctx* __restrict c) {
  trace_call(0x801F084Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F084C
  f_801F032C(c); return; // 801F0850
}

// fn_801F0854
void f_801F0854(Ctx* __restrict c) {
  trace_call(0x801F0854u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F0854
  f_801F0190(c); return; // 801F0858
}

// fn_801F085C
void f_801F085C(Ctx* __restrict c) {
  trace_call(0x801F085Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F085C
  f_801F0504(c); return; // 801F0860
}

// fn_801F0864
void f_801F0864(Ctx* __restrict c) {
  trace_call(0x801F0864u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F0864
  f_801EF258(c); return; // 801F0868
}

// fn_801F086C
void f_801F086C(Ctx* __restrict c) {
  trace_call(0x801F086Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F086C
  f_801F0380(c); return; // 801F0870
}

// fn_801F0874
void f_801F0874(Ctx* __restrict c) {
  trace_call(0x801F0874u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F0874
  f_801F0248(c); return; // 801F0878
}

// fn_801F087C
void f_801F087C(Ctx* __restrict c) {
  trace_call(0x801F087Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F087C
  f_801F0394(c); return; // 801F0880
}

// fn_801F0884
void f_801F0884(Ctx* __restrict c) {
  trace_call(0x801F0884u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F0884
  f_801EF7A0(c); return; // 801F0888
}

// fn_801F088C
void f_801F088C(Ctx* __restrict c) {
  trace_call(0x801F088Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F088C
  f_801EF924(c); return; // 801F0890
}

// fn_801F0894
void f_801F0894(Ctx* __restrict c) {
  trace_call(0x801F0894u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F0894
  f_801F0090(c); return; // 801F0898
}

// fn_801F089C
void f_801F089C(Ctx* __restrict c) {
  trace_call(0x801F089Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F089C
  f_801F033C(c); return; // 801F08A0
}

// fn_801F08A4
void f_801F08A4(Ctx* __restrict c) {
  trace_call(0x801F08A4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 801F08A4
  f_801F051C(c); return; // 801F08A8
}

// fn_801F08AC
void f_801F08AC(Ctx* __restrict c) {
  trace_call(0x801F08ACu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F08AC
  c->r[0]=c->lr; // 801F08B0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801F08B4
  c->r[11]=c->r[1]+0x000000A0u; // 801F08B8
  c->lr=0x801F08C0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F08BC
  c->r[27]=c->r[4]|c->r[4]; // 801F08C0
  c->r[31]=0u+0x803E0000u; // 801F08C4
  c->r[26]=c->r[3]|c->r[3]; // 801F08C8
  c->r[28]=c->r[5]|c->r[5]; // 801F08CC
  c->r[29]=c->r[6]|c->r[6]; // 801F08D0
  c->r[5]=c->r[27]|c->r[27]; // 801F08D4
  c->r[3]=c->r[1]+0x00000048u; // 801F08D8
  c->r[4]=c->r[31]+0x000016F4u; // 801F08DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F08E0
  c->lr=0x801F08E8u; f_80291CC4(c); // 801F08E4
  c->r[4]=c->r[1]+0x00000048u; // 801F08E8
  c->r[3]=c->r[13]+0xFFFF9568u; // 801F08EC
  c->lr=0x801F08F4u; f_80104374(c); // 801F08F0
  c->r[30]=R32(c->r[3]+0x00000010u); // 801F08F4
  cmps(c,0,(int32_t)c->r[30],0); // 801F08F8
  if (!crb(c,2)) { goto L_801F0908; } // 801F08FC
  c->r[3]=0u+0x00000000u; // 801F0900
  goto L_801F09A0; // 801F0904
L_801F0908:;
  c->r[3]=c->r[1]+0x00000018u; // 801F0908
  c->lr=0x801F0910u; f_80264680(c); // 801F090C
  c->r[0]=0u+0x00000000u; // 801F0910
  c->r[31]=c->r[31]+0x000016F4u; // 801F0914
  W32(c->r[1]+0x00000008u,c->r[0]); // 801F0918
  c->r[3]=c->r[26]|c->r[26]; // 801F091C
  c->r[4]=c->r[27]|c->r[27]; // 801F0920
  c->r[6]=c->r[30]|c->r[30]; // 801F0924
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F0928
  c->r[5]=c->r[1]+0x00000018u; // 801F092C
  c->r[7]=c->r[31]+0x00000012u; // 801F0930
  c->r[8]=0u+0x00000000u; // 801F0934
  W32(c->r[1]+0x00000010u,c->r[0]); // 801F0938
  c->r[9]=0u+0x00000000u; // 801F093C
  c->r[10]=0u+0x00000000u; // 801F0940
  c->lr=0x801F0948u; f_800D9954(c); // 801F0944
  {uint32_t ea=c->r[2]+0xFFFFC2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0948
  c->r[30]=c->r[3]|c->r[3]; // 801F094C
  c->r[4]=c->r[29]|c->r[29]; // 801F0950
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[0]);} // 801F0954
  {uint32_t ea=c->r[3]+0x000003A8u; WF32(ea,c->f[0]);} // 801F0958
  W32(c->r[3]+0x000004C0u,c->r[28]); // 801F095C
  c->r[3]=c->r[3]+0x000004ACu; // 801F0960
  c->lr=0x801F0968u; f_802933D8(c); // 801F0964
  c->r[5]=c->r[26]|c->r[26]; // 801F0968
  c->r[3]=c->r[1]+0x00000048u; // 801F096C
  c->r[4]=c->r[31]+0x00000013u; // 801F0970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0974
  c->lr=0x801F097Cu; f_80291CC4(c); // 801F0978
  c->r[4]=c->r[1]+0x00000048u; // 801F097C
  c->r[3]=c->r[13]+0xFFFF9568u; // 801F0980
  c->lr=0x801F0988u; f_80104374(c); // 801F0984
  c->r[4]=R32(c->r[3]+0x00000010u); // 801F0988
  cmps(c,0,(int32_t)c->r[4],0); // 801F098C
  if (crb(c,2)) { goto L_801F099C; } // 801F0990
  c->r[3]=c->r[30]|c->r[30]; // 801F0994
  c->lr=0x801F099Cu; f_800D9C78(c); // 801F0998
L_801F099C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F099C
L_801F09A0:;
  c->r[11]=c->r[1]+0x000000A0u; // 801F09A0
  c->lr=0x801F09A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F09A4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801F09A8
  c->lr=c->r[0]; // 801F09AC
  c->r[1]=c->r[1]+0x000000A0u; // 801F09B0
  return; // 801F09B4
}

// fn_801F09B8
void f_801F09B8(Ctx* __restrict c) {
  trace_call(0x801F09B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F09B8
  c->r[0]=c->lr; // 801F09BC
  c->r[6]=0u+0x803E0000u; // 801F09C0
  c->r[5]=c->r[4]+0x00000001u; // 801F09C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F09C8
  c->r[6]=c->r[6]+0x000016F4u; // 801F09CC
  c->r[4]=c->r[6]+0x00000029u; // 801F09D0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801F09D4
  c->r[31]=c->r[3]|c->r[3]; // 801F09D8
  c->r[3]=c->r[1]+0x0000000Cu; // 801F09DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F09E0
  c->lr=0x801F09E8u; f_80291CC4(c); // 801F09E4
  c->r[5]=R32(c->r[31]+0x00000008u); // 801F09E8
  c->r[3]=c->r[1]+0x00000008u; // 801F09EC
  c->r[4]=c->r[1]+0x0000000Cu; // 801F09F0
  c->r[0]=R32(c->r[5]+0x000000E8u); // 801F09F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801F09F8
  c->lr=0x801F0A00u; f_80366110(c); // 801F09FC
  cmps(c,0,(int32_t)c->r[3],0); // 801F0A00
  c->r[31]=c->r[3]|c->r[3]; // 801F0A04
  if (crb(c,2)) { goto L_801F0A3C; } // 801F0A08
  if (!crb(c,2)) { goto L_801F0A34; } // 801F0A0C
  c->r[3]=0u+0x803F0000u; // 801F0A10
  c->r[5]=0u+0x803F0000u; // 801F0A14
  c->r[3]=c->r[3]+0x000015E0u; // 801F0A18
  c->r[4]=0u+0x00000239u; // 801F0A1C
  c->r[5]=c->r[5]+0x000015C0u; // 801F0A20
  c->r[6]=c->r[13]+0xFFFF8038u; // 801F0A24
  c->r[7]=c->r[13]+0xFFFF8A00u; // 801F0A28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F0A2C
  c->lr=0x801F0A34u; f_803444BC(c); // 801F0A30
L_801F0A34:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801F0A34
  goto L_801F0A40; // 801F0A38
L_801F0A3C:;
  c->r[3]=0u+0x00000000u; // 801F0A3C
L_801F0A40:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F0A40
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801F0A44
  c->lr=c->r[0]; // 801F0A48
  c->r[1]=c->r[1]+0x00000040u; // 801F0A4C
  return; // 801F0A50
}

// fn_801F0A54
void f_801F0A54(Ctx* __restrict c) {
  trace_call(0x801F0A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0A54
  c->r[0]=c->lr; // 801F0A58
  c->r[5]=c->r[4]|c->r[4]; // 801F0A5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F0A60
  c->r[4]=R32(c->r[3]+0x00000008u); // 801F0A64
  c->r[3]=c->r[1]+0x0000000Cu; // 801F0A68
  c->lr=0x801F0A70u; f_80385274(c); // 801F0A6C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801F0A70
  cmps(c,0,(int32_t)c->r[0],0); // 801F0A74
  if (crb(c,2)) { goto L_801F0AAC; } // 801F0A78
  c->r[3]=c->r[1]+0x0000000Cu; // 801F0A7C
  c->r[4]=0u+0x00000000u; // 801F0A80
  c->lr=0x801F0A88u; f_803851E4(c); // 801F0A84
  W32(c->r[1]+0x00000008u,c->r[3]); // 801F0A88
  c->r[3]=c->r[1]+0x00000008u; // 801F0A8C
  c->r[4]=0u+0x00000001u; // 801F0A90
  c->r[5]=0u+0x00000000u; // 801F0A94
  c->r[6]=0u+0x00000000u; // 801F0A98
  c->lr=0x801F0AA0u; f_803676DC(c); // 801F0A9C
  c->r[3]=c->r[1]+0x00000008u; // 801F0AA0
  c->r[4]=0u+0x00000000u; // 801F0AA4
  c->lr=0x801F0AACu; f_80366F6C(c); // 801F0AA8
L_801F0AAC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F0AAC
  c->lr=c->r[0]; // 801F0AB0
  c->r[1]=c->r[1]+0x00000040u; // 801F0AB4
  return; // 801F0AB8
}

// fn_801F0ABC
void f_801F0ABC(Ctx* __restrict c) {
  trace_call(0x801F0ABCu);
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[2]); // 801F0ABC
  {uint32_t ea=c->r[2]+0xFFFFC2CCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F0AC0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 801F0AC4
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0AC8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 801F0ACC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801F0AD0
  fcmp(c,0,c->f[1],c->f[0]); // 801F0AD4
  if (!crb(c,0)) { goto L_801F0AE0; } // 801F0AD8
  c->f[1]=-c->f[1]; // 801F0ADC
L_801F0AE0:;
  {uint32_t ea=c->r[2]+0xFFFFC2D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0AE0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F0AE4
  return; // 801F0AE8
}

// fn_801F0AEC
void f_801F0AEC(Ctx* __restrict c) {
  trace_call(0x801F0AECu);
  {uint32_t ea=c->r[2]+0xFFFFC2C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0AEC
  c->r[4]=0u+0x0000000Fu; // 801F0AF0
  {uint32_t ea=c->r[2]+0xFFFFC2D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F0AF4
  c->r[0]=0u+0x00000000u; // 801F0AF8
  {uint32_t ea=c->r[2]+0xFFFFC2DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F0AFC
  {uint32_t ea=c->r[2]+0xFFFFC2E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0B00
  W32(c->r[3]+0x00000000u,c->r[4]); // 801F0B04
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 801F0B08
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801F0B0C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801F0B10
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801F0B14
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801F0B18
  W8(c->r[3]+0x00000018u,c->r[0]); // 801F0B1C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 801F0B20
  return; // 801F0B24
}

// fn_801F0B28
void f_801F0B28(Ctx* __restrict c) {
  trace_call(0x801F0B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0B28
  c->r[0]=c->lr; // 801F0B2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0B30
  c->r[11]=c->r[1]+0x00000020u; // 801F0B34
  c->lr=0x801F0B3Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0B38
  c->r[31]=c->r[3]|c->r[3]; // 801F0B3C
  c->lr=0x801F0B44u; f_800CEA18(c); // 801F0B40
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0B44
  c->r[3]=0u+0x803F0000u; // 801F0B48
  c->r[3]=c->r[3]+0x00005E14u; // 801F0B4C
  c->r[30]=0u+0x00000000u; // 801F0B50
  c->r[0]=c->r[3]+0x00000040u; // 801F0B54
  c->f[2]=c->f[1]; // 801F0B58
  W32(c->r[31]+0x00000010u,c->r[3]); // 801F0B5C
  c->f[3]=c->f[1]; // 801F0B60
  c->r[3]=c->r[31]+0x000008ACu; // 801F0B64
  W32(c->r[31]+0x00000048u,c->r[0]); // 801F0B68
  W32(c->r[31]+0x000008A4u,c->r[30]); // 801F0B6C
  W32(c->r[31]+0x000008A8u,c->r[30]); // 801F0B70
  c->lr=0x801F0B78u; f_800521A0(c); // 801F0B74
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0B78
  c->r[3]=c->r[31]+0x000008B8u; // 801F0B7C
  c->f[2]=c->f[1]; // 801F0B80
  c->f[3]=c->f[1]; // 801F0B84
  c->lr=0x801F0B8Cu; f_800521A0(c); // 801F0B88
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0B8C
  c->r[28]=c->r[31]+0x000008D0u; // 801F0B90
  W32(c->r[31]+0x000008C4u,c->r[30]); // 801F0B94
  c->r[3]=c->r[28]|c->r[28]; // 801F0B98
  {uint32_t ea=c->r[31]+0x000008C8u; WF32(ea,c->f[0]);} // 801F0B9C
  W32(c->r[31]+0x000008CCu,c->r[30]); // 801F0BA0
  c->lr=0x801F0BA8u; f_80063A84(c); // 801F0BA4
  c->r[4]=0u+0x803F0000u; // 801F0BA8
  c->r[3]=c->r[28]+0x00000078u; // 801F0BAC
  c->r[4]=c->r[4]+0x000021F8u; // 801F0BB0
  W32(c->r[28]+0x00000000u,c->r[4]); // 801F0BB4
  c->lr=0x801F0BBCu; f_800A4E78(c); // 801F0BB8
  W8(c->r[28]+0x000000BCu,c->r[30]); // 801F0BBC
  c->r[3]=c->r[28]+0x000000C0u; // 801F0BC0
  c->lr=0x801F0BC8u; f_80063CC0(c); // 801F0BC4
  {uint32_t ea=c->r[2]+0xFFFFC2E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0BC8
  c->r[3]=0u+0x00000001u; // 801F0BCC
  c->r[0]=0u+0x00000007u; // 801F0BD0
  W8(c->r[28]+0x00000118u,c->r[3]); // 801F0BD4
  c->r[3]=0u+0xFFFFFFFFu; // 801F0BD8
  {uint32_t ea=c->r[28]+0x0000010Cu; WF32(ea,c->f[0]);} // 801F0BDC
  c->ctr=c->r[0]; // 801F0BE0
L_801F0BE4:;
  c->r[4]=c->r[28]+c->r[30]; // 801F0BE4
  c->r[30]=c->r[30]+0x00000008u; // 801F0BE8
  W32(c->r[4]+0x00000034u,c->r[3]); // 801F0BEC
  W32(c->r[4]+0x00000038u,c->r[3]); // 801F0BF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F0BE4; } // 801F0BF4
  c->r[3]=c->r[31]+0x000009ECu; // 801F0BF8
  c->lr=0x801F0C00u; f_80063CC0(c); // 801F0BFC
  c->r[28]=c->r[31]+0x00000A44u; // 801F0C00
  c->r[30]=c->r[28]|c->r[28]; // 801F0C04
  c->r[29]=c->r[28]|c->r[28]; // 801F0C08
  c->r[3]=c->r[28]|c->r[28]; // 801F0C0C
  c->lr=0x801F0C14u; f_8002A0C4(c); // 801F0C10
  c->r[4]=0u+0x803F0000u; // 801F0C14
  c->r[3]=c->r[28]+0x0000001Cu; // 801F0C18
  c->r[4]=c->r[4]+0x00001290u; // 801F0C1C
  W32(c->r[28]+0x00000000u,c->r[4]); // 801F0C20
  c->lr=0x801F0C28u; f_80166A74(c); // 801F0C24
  c->r[4]=0u+0x80400000u; // 801F0C28
  c->r[3]=c->r[28]+0x000000D8u; // 801F0C2C
  c->r[4]=c->r[4]+0xFFFFC328u; // 801F0C30
  W32(c->r[28]+0x00000000u,c->r[4]); // 801F0C34
  c->lr=0x801F0C3Cu; f_80141D50(c); // 801F0C38
  c->r[5]=0u+0x80400000u; // 801F0C3C
  c->r[4]=0u+0x80400000u; // 801F0C40
  c->r[30]=0u+0x00000000u; // 801F0C44
  c->r[29]=c->r[28]+0x00000188u; // 801F0C48
  c->r[5]=c->r[5]+0x00005580u; // 801F0C4C
  c->r[4]=c->r[4]+0x000055D8u; // 801F0C50
  W8(c->r[28]+0x00000170u,c->r[30]); // 801F0C54
  c->r[3]=c->r[29]|c->r[29]; // 801F0C58
  W32(c->r[28]+0x00000000u,c->r[5]); // 801F0C5C
  W32(c->r[28]+0x00000178u,c->r[30]); // 801F0C60
  W32(c->r[28]+0x0000017Cu,c->r[30]); // 801F0C64
  W32(c->r[28]+0x00000180u,c->r[30]); // 801F0C68
  W32(c->r[28]+0x00000174u,c->r[4]); // 801F0C6C
  c->lr=0x801F0C74u; f_80161D5C(c); // 801F0C70
  c->r[6]=0u+0xFFFFFFFFu; // 801F0C74
  c->r[4]=0u+0x80410000u; // 801F0C78
  c->r[4]=c->r[4]+0xFFFF8534u; // 801F0C7C
  {uint32_t ea=c->r[2]+0xFFFFC2C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0C80
  {uint32_t ea=c->r[2]+0xFFFFC2E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0C84
  c->r[3]=0u+0x803F0000u; // 801F0C88
  W32(c->r[28]+0x0000020Cu,c->r[6]); // 801F0C8C
  c->r[9]=0u+0x803F0000u; // 801F0C90
  c->r[8]=0u+0x803F0000u; // 801F0C94
  c->r[7]=0u+0x80400000u; // 801F0C98
  c->r[3]=c->r[3]+0x000030C8u; // 801F0C9C
  c->r[9]=c->r[9]+0x00003098u; // 801F0CA0
  c->r[8]=c->r[8]+0x000030ACu; // 801F0CA4
  c->r[7]=c->r[7]+0xFFFFA8ECu; // 801F0CA8
  c->r[0]=c->r[4]+0x00000040u; // 801F0CAC
  W32(c->r[29]+0x00000038u,c->r[3]); // 801F0CB0
  c->r[5]=addc(c,~c->r[30],0x00000002u,1); // 801F0CB4
  c->r[3]=c->r[31]+0x00000C80u; // 801F0CB8
  W32(c->r[28]+0x00000210u,c->r[30]); // 801F0CBC
  W32(c->r[29]+0x0000003Cu,c->r[30]); // 801F0CC0
  W32(c->r[29]+0x0000000Cu,c->r[9]); // 801F0CC4
  W32(c->r[29]+0x00000040u,c->r[8]); // 801F0CC8
  W32(c->r[29]+0x00000048u,c->r[30]); // 801F0CCC
  W32(c->r[29]+0x0000004Cu,c->r[30]); // 801F0CD0
  W32(c->r[29]+0x00000050u,c->r[30]); // 801F0CD4
  W32(c->r[29]+0x00000054u,c->r[30]); // 801F0CD8
  W32(c->r[29]+0x00000044u,c->r[30]); // 801F0CDC
  W32(c->r[28]+0x000001E0u,c->r[7]); // 801F0CE0
  W32(c->r[28]+0x000001E4u,c->r[30]); // 801F0CE4
  W32(c->r[28]+0x000001E8u,c->r[6]); // 801F0CE8
  {uint32_t ea=c->r[28]+0x000001ECu; WF32(ea,c->f[1]);} // 801F0CEC
  {uint32_t ea=c->r[28]+0x000001F0u; WF32(ea,c->f[1]);} // 801F0CF0
  W32(c->r[28]+0x000001F4u,c->r[30]); // 801F0CF4
  W32(c->r[28]+0x000001F8u,c->r[6]); // 801F0CF8
  W32(c->r[28]+0x00000204u,c->r[30]); // 801F0CFC
  W32(c->r[28]+0x00000208u,c->r[30]); // 801F0D00
  W32(c->r[28]+0x00000214u,c->r[30]); // 801F0D04
  {uint32_t ea=c->r[28]+0x000001FCu; WF32(ea,c->f[0]);} // 801F0D08
  {uint32_t ea=c->r[28]+0x00000200u; WF32(ea,c->f[0]);} // 801F0D0C
  W32(c->r[28]+0x0000020Cu,c->r[30]); // 801F0D10
  W32(c->r[28]+0x00000210u,c->r[5]); // 801F0D14
  W32(c->r[28]+0x00000218u,c->r[30]); // 801F0D18
  W32(c->r[31]+0x00000010u,c->r[4]); // 801F0D1C
  W32(c->r[31]+0x00000048u,c->r[0]); // 801F0D20
  c->lr=0x801F0D28u; f_801F30A0(c); // 801F0D24
  c->r[3]=c->r[31]+0x00000C60u; // 801F0D28
  c->lr=0x801F0D30u; f_801F0AEC(c); // 801F0D2C
  c->r[11]=c->r[1]+0x00000020u; // 801F0D30
  c->r[3]=c->r[31]|c->r[31]; // 801F0D34
  c->lr=0x801F0D3Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F0D38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0D3C
  c->lr=c->r[0]; // 801F0D40
  c->r[1]=c->r[1]+0x00000020u; // 801F0D44
  return; // 801F0D48
}

// fn_801F0D4C
void f_801F0D4C(Ctx* __restrict c) {
  trace_call(0x801F0D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0D4C
  c->r[0]=c->lr; // 801F0D50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0D54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0D58
  c->r[31]=c->r[3]|c->r[3]; // 801F0D5C
  c->lr=0x801F0D64u; f_800AD0A8(c); // 801F0D60
  c->r[0]=R32(c->r[31]+0x0000303Cu); // 801F0D64
  c->r[4]=0u+0xFFFFFFFFu; // 801F0D68
  c->r[3]=0u+0x00000000u; // 801F0D6C
  W32(c->r[31]+0x00003030u,c->r[4]); // 801F0D70
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 801F0D74
  W32(c->r[31]+0x00003034u,c->r[3]); // 801F0D78
  W32(c->r[31]+0x0000303Cu,c->r[0]); // 801F0D7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0D84
  c->lr=c->r[0]; // 801F0D88
  c->r[1]=c->r[1]+0x00000010u; // 801F0D8C
  return; // 801F0D90
}

// fn_801F0D94
void f_801F0D94(Ctx* __restrict c) {
  trace_call(0x801F0D94u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0D94
  c->r[0]=c->lr; // 801F0D98
  W32(c->r[1]+0x00000084u,c->r[0]); // 801F0D9C
  c->r[11]=c->r[1]+0x00000080u; // 801F0DA0
  c->lr=0x801F0DA8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0DA4
  c->r[31]=c->r[1]|c->r[1]; // 801F0DA8
  c->r[30]=c->r[3]|c->r[3]; // 801F0DAC
  c->lr=0x801F0DB4u; f_800CEE48(c); // 801F0DB0
  c->r[29]=0u+0x00000000u; // 801F0DB4
  goto L_801F0DE8; // 801F0DB8
L_801F0DBC:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)324); // 801F0DBC
  c->r[5]=0u+0x80410000u; // 801F0DC0
  c->r[4]=c->r[30]+0x00000A44u; // 801F0DC4
  c->r[5]=c->r[5]+0xFFFF84A0u; // 801F0DC8
  c->r[3]=c->r[30]+c->r[0]; // 801F0DCC
  c->r[3]=c->r[3]+0x000016E0u; // 801F0DD0
  c->r[12]=R32(c->r[3]+0x00000004u); // 801F0DD4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801F0DD8
  c->ctr=c->r[12]; // 801F0DDC
  if (true) { c->lr=0x801F0DE4u; dispatch(c,c->ctr); } // 801F0DE0
  c->r[29]=c->r[29]+0x00000001u; // 801F0DE4
L_801F0DE8:;
  c->r[0]=R32(c->r[30]+0x00000CB8u); // 801F0DE8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F0DEC
  if (crb(c,0)) { IRQCHK(c); goto L_801F0DBC; } // 801F0DF0
  c->r[3]=c->r[30]|c->r[30]; // 801F0DF4
  c->r[29]=0u+0x00000000u; // 801F0DF8
  c->lr=0x801F0E00u; f_801F27E4(c); // 801F0DFC
  cmps(c,0,(int32_t)c->r[3],0); // 801F0E00
  if (crb(c,2)) { goto L_801F0EE0; } // 801F0E04
  c->r[3]=R32(c->r[30]+0x00000054u); // 801F0E08
  cmps(c,0,(int32_t)c->r[3],0); // 801F0E0C
  if (crb(c,2)) { goto L_801F0E70; } // 801F0E10
  c->r[12]=R32(c->r[3]+0x00000000u); // 801F0E14
  c->r[12]=R32(c->r[12]+0x00000010u); // 801F0E18
  c->ctr=c->r[12]; // 801F0E1C
  if (true) { c->lr=0x801F0E24u; dispatch(c,c->ctr); } // 801F0E20
  c->lr=0x801F0E28u; f_8007A658(c); // 801F0E24
  c->r[29]=c->r[3]|c->r[3]; // 801F0E28
  c->r[3]=0u+0x00000001u; // 801F0E2C
  c->lr=0x801F0E34u; f_8007A658(c); // 801F0E30
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801F0E34
  if (!crb(c,1)) { goto L_801F0E68; } // 801F0E38
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 801F0E3C
  if (crb(c,2)) { goto L_801F0E60; } // 801F0E40
  W32(c->r[31]+0x00000064u,c->r[1]); // 801F0E44
  c->r[3]=c->r[29]|c->r[29]; // 801F0E48
  c->r[4]=c->r[13]+0xFFFF80C5u; // 801F0E4C
  c->lr=0x801F0E54u; f_800761D8(c); // 801F0E50
  c->r[3]=0u+0x803F0000u; // 801F0E54
  c->r[3]=c->r[3]+0x00003224u; // 801F0E58
  W32(c->r[29]+0x00000000u,c->r[3]); // 801F0E5C
L_801F0E60:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 801F0E60
  goto L_801F0EB8; // 801F0E64
L_801F0E68:;
  c->r[0]=0u+0x00000000u; // 801F0E68
  W32(c->r[30]+0x00000054u,c->r[0]); // 801F0E6C
L_801F0E70:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 801F0E70
  c->r[0]=c->r[3]+0x00000001u; // 801F0E74
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F0E78
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801F0E7C
  c->r[0]=c->r[0]^c->r[3]; // 801F0E80
  c->r[0]=c->r[0]-c->r[3]; // 801F0E84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801F0E88
  c->r[0]=c->r[30]+c->r[0]; // 801F0E8C
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 801F0E90
  if (crb(c,2)) { goto L_801F0EB4; } // 801F0E94
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 801F0E98
  c->r[3]=c->r[29]|c->r[29]; // 801F0E9C
  c->r[4]=c->r[13]+0xFFFF80C5u; // 801F0EA0
  c->lr=0x801F0EA8u; f_800761D8(c); // 801F0EA4
  c->r[3]=0u+0x803F0000u; // 801F0EA8
  c->r[3]=c->r[3]+0x00003224u; // 801F0EAC
  W32(c->r[29]+0x00000000u,c->r[3]); // 801F0EB0
L_801F0EB4:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 801F0EB4
L_801F0EB8:;
  c->r[3]=c->r[31]+0x00000028u; // 801F0EB8
  c->lr=0x801F0EC0u; f_800CDFD0(c); // 801F0EBC
  c->r[5]=R32(c->r[30]+0x00000000u); // 801F0EC0
  c->r[3]=c->r[31]+0x00000008u; // 801F0EC4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801F0EC8
  c->r[4]=c->r[31]+0x00000028u; // 801F0ECC
  W32(c->r[31]+0x00000008u,c->r[5]); // 801F0ED0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801F0ED4
  c->lr=0x801F0EDCu; f_800CE040(c); // 801F0ED8
  c->r[29]=0u+0x00000001u; // 801F0EDC
L_801F0EE0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F0EE0
  if (!crb(c,2)) { goto L_801F0EF4; } // 801F0EE4
  c->r[3]=c->r[30]|c->r[30]; // 801F0EE8
  c->lr=0x801F0EF0u; f_801F2820(c); // 801F0EEC
  c->r[29]=c->r[3]|c->r[3]; // 801F0EF0
L_801F0EF4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F0EF4
  if (!crb(c,2)) { goto L_801F1040; } // 801F0EF8
  c->r[0]=R32(c->r[30]+0x00003034u); // 801F0EFC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0F00
  if (crb(c,2)) { goto L_801F1040; } // 801F0F04
  {uint32_t ea=c->r[30]+0x00003038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0F08
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F0F0C
  fcmp(c,0,c->f[1],c->f[0]); // 801F0F10
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801F0F14
  if (!crb(c,2)) { goto L_801F1028; } // 801F0F18
  c->r[29]=0u+0x00000000u; // 801F0F1C
  goto L_801F101C; // 801F0F20
L_801F0F24:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)324); // 801F0F24
  c->r[3]=c->r[30]+c->r[0]; // 801F0F28
  c->r[28]=c->r[3]+0x000016E0u; // 801F0F2C
  c->r[3]=c->r[28]|c->r[28]; // 801F0F30
  c->lr=0x801F0F38u; f_801F4BB4(c); // 801F0F34
  cmps(c,0,(int32_t)c->r[3],0); // 801F0F38
  if (crb(c,2)) { goto L_801F1018; } // 801F0F3C
  c->r[4]=0u+0x803E0000u; // 801F0F40
  c->r[5]=R32(c->r[30]+0x000004C0u); // 801F0F44
  c->r[4]=c->r[4]+0x000016F4u; // 801F0F48
  c->r[6]=c->r[30]+0x000004ACu; // 801F0F4C
  c->r[3]=c->r[4]+0x0000002Eu; // 801F0F50
  c->r[4]=c->r[4]+0x00000033u; // 801F0F54
  c->lr=0x801F0F5Cu; f_801F08AC(c); // 801F0F58
  cmps(c,0,(int32_t)c->r[3],0); // 801F0F5C
  c->r[29]=c->r[3]|c->r[3]; // 801F0F60
  if (crb(c,2)) { goto L_801F0FA0; } // 801F0F64
  {uint32_t ea=c->r[30]+0x000016D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0F68
  {uint32_t ea=c->r[30]+0x00000C68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F0F6C
  {uint32_t ea=c->r[30]+0x000003A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F0F70
  c->lr=0x801F0F78u; f_80250DA0(c); // 801F0F74
  c->r[3]=c->r[31]+0x00000010u; // 801F0F78
  c->r[4]=c->r[28]+0x00000044u; // 801F0F7C
  c->lr=0x801F0F84u; f_800C5524(c); // 801F0F80
  c->r[3]=c->r[31]+0x0000001Cu; // 801F0F84
  c->r[4]=c->r[28]+0x00000044u; // 801F0F88
  c->lr=0x801F0F90u; f_80032FD8(c); // 801F0F8C
  c->r[3]=c->r[29]|c->r[29]; // 801F0F90
  c->r[4]=c->r[31]+0x0000001Cu; // 801F0F94
  c->r[5]=c->r[31]+0x00000010u; // 801F0F98
  c->lr=0x801F0FA0u; f_80250E18(c); // 801F0F9C
L_801F0FA0:;
  c->r[4]=R32(c->r[28]+0x00000040u); // 801F0FA0
  c->r[3]=c->r[30]+0x00000A44u; // 801F0FA4
  c->lr=0x801F0FACu; f_801F0A54(c); // 801F0FA8
  c->r[12]=R32(c->r[28]+0x00000004u); // 801F0FAC
  c->r[3]=c->r[28]|c->r[28]; // 801F0FB0
  c->r[5]=R32(c->r[28]+0x00000000u); // 801F0FB4
  c->r[4]=0u+0x0000000Du; // 801F0FB8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F0FBC
  c->ctr=c->r[12]; // 801F0FC0
  if (true) { c->lr=0x801F0FC8u; dispatch(c,c->ctr); } // 801F0FC4
  c->r[0]=0u+0x0000000Du; // 801F0FC8
  W32(c->r[28]+0x00000000u,c->r[0]); // 801F0FCC
  c->r[3]=R32(c->r[30]+0x00003034u); // 801F0FD0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801F0FD4
  W32(c->r[30]+0x00003034u,c->r[0]); // 801F0FD8
  c->lr=0x801F0FE0u; f_80291D94(c); // 801F0FDC
  c->r[3]=c->r[3]^0x80000000u; // 801F0FE0
  c->r[0]=0u+0x43300000u; // 801F0FE4
  W32(c->r[31]+0x0000006Cu,c->r[3]); // 801F0FE8
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[3]=RF64(ea);} // 801F0FEC
  W32(c->r[31]+0x00000068u,c->r[0]); // 801F0FF0
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F0FF4
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=RF64(ea);} // 801F0FF8
  {uint32_t ea=c->r[2]+0xFFFFC2F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F0FFC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 801F1000
  {uint32_t ea=c->r[2]+0xFFFFC2ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1004
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 801F1008
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801F100C
  {uint32_t ea=c->r[30]+0x00003038u; WF32(ea,c->f[0]);} // 801F1010
  goto L_801F1028; // 801F1014
L_801F1018:;
  c->r[29]=c->r[29]+0x00000001u; // 801F1018
L_801F101C:;
  c->r[0]=R32(c->r[30]+0x00000CB8u); // 801F101C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F1020
  if (crb(c,0)) { IRQCHK(c); goto L_801F0F24; } // 801F1024
L_801F1028:;
  c->r[3]=0u+0x804D0000u; // 801F1028
  {uint32_t ea=c->r[30]+0x00003038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F102C
  c->r[3]=c->r[3]+0x00003318u; // 801F1030
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1034
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801F1038
  {uint32_t ea=c->r[30]+0x00003038u; WF32(ea,c->f[0]);} // 801F103C
L_801F1040:;
  c->r[10]=c->r[31]|c->r[31]; // 801F1040
  c->r[11]=c->r[10]+0x00000080u; // 801F1044
  c->lr=0x801F104Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F1048
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F104C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F1050
  c->r[1]=c->r[10]|c->r[10]; // 801F1054
  c->lr=c->r[0]; // 801F1058
  return; // 801F105C
}

// fn_801F1060
void f_801F1060(Ctx* __restrict c) {
  trace_call(0x801F1060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1060
  c->r[0]=c->lr; // 801F1064
  c->r[4]=c->r[3]+0x00000A44u; // 801F1068
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F106C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1070
  c->r[31]=c->r[3]|c->r[3]; // 801F1074
  c->r[12]=R32(c->r[3]+0x000008D0u); // 801F1078
  c->r[12]=R32(c->r[12]+0x00000040u); // 801F107C
  c->ctr=c->r[12]; // 801F1080
  c->r[3]=c->r[3]+0x000008D0u; // 801F1084
  if (true) { c->lr=0x801F108Cu; dispatch(c,c->ctr); } // 801F1088
  c->r[3]=c->r[31]|c->r[31]; // 801F108C
  c->lr=0x801F1094u; f_800AD284(c); // 801F1090
  c->r[12]=R32(c->r[31]+0x00000A44u); // 801F1094
  c->r[3]=c->r[31]+0x00000A44u; // 801F1098
  c->r[4]=c->r[31]+0x00000C84u; // 801F109C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801F10A0
  c->ctr=c->r[12]; // 801F10A4
  if (true) { c->lr=0x801F10ACu; dispatch(c,c->ctr); } // 801F10A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F10AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F10B0
  c->lr=c->r[0]; // 801F10B4
  c->r[1]=c->r[1]+0x00000010u; // 801F10B8
  return; // 801F10BC
}

// fn_801F10C0
void f_801F10C0(Ctx* __restrict c) {
  trace_call(0x801F10C0u);
  return; // 801F10C0
}

// fn_801F10C4
void f_801F10C4(Ctx* __restrict c) {
  trace_call(0x801F10C4u);
  {uint32_t ea=c->r[1]+0xFFFFF0E0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F10C4
  c->r[0]=c->lr; // 801F10C8
  W32(c->r[1]+0x00000F24u,c->r[0]); // 801F10CC
  c->r[11]=c->r[1]+0x00000F20u; // 801F10D0
  c->lr=0x801F10D8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F10D4
  c->r[31]=c->r[1]|c->r[1]; // 801F10D8
  c->r[27]=c->r[5]|c->r[5]; // 801F10DC
  c->r[0]=0u+0x43300000u; // 801F10E0
  c->r[12]=R32(c->r[27]+0x00000000u); // 801F10E4
  c->r[26]=c->r[3]|c->r[3]; // 801F10E8
  c->r[24]=c->r[4]|c->r[4]; // 801F10EC
  c->r[3]=c->r[27]|c->r[27]; // 801F10F0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801F10F4
  W32(c->r[31]+0x00000EE8u,c->r[0]); // 801F10F8
  W32(c->r[31]+0x00000EF0u,c->r[0]); // 801F10FC
  c->ctr=c->r[12]; // 801F1100
  if (true) { c->lr=0x801F1108u; dispatch(c,c->ctr); } // 801F1104
  cmps(c,0,(int32_t)c->r[3],1025); // 801F1108
  if (!crb(c,0)) { goto L_801F111C; } // 801F110C
  cmps(c,0,(int32_t)c->r[3],3); // 801F1110
  if (crb(c,2)) { goto L_801F1128; } // 801F1114
  goto L_801F1958; // 801F1118
L_801F111C:;
  cmps(c,0,(int32_t)c->r[3],1032); // 801F111C
  if (!crb(c,0)) { goto L_801F1958; } // 801F1120
  goto L_801F17E4; // 801F1124
L_801F1128:;
  c->r[0]=R8(c->r[26]+0x000016DDu); // 801F1128
  cmps(c,0,(int32_t)c->r[0],0); // 801F112C
  if (crb(c,2)) { goto L_801F1968; } // 801F1130
  c->r[3]=c->r[26]|c->r[26]; // 801F1134
  c->lr=0x801F113Cu; f_801F2A34(c); // 801F1138
  c->r[0]=0u+0x00000000u; // 801F113C
  c->r[4]=c->r[26]+0x00000A44u; // 801F1140
  W8(c->r[26]+0x000016DDu,c->r[0]); // 801F1144
  c->r[3]=c->r[31]+0x000000C0u; // 801F1148
  c->r[12]=R32(c->r[26]+0x00000A44u); // 801F114C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801F1150
  c->ctr=c->r[12]; // 801F1154
  if (true) { c->lr=0x801F115Cu; dispatch(c,c->ctr); } // 801F1158
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F115C
  c->r[3]=c->r[31]+0x00000084u; // 801F1160
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F1164
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801F1168
  c->lr=0x801F1170u; f_800521A0(c); // 801F116C
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1170
  c->r[3]=c->r[31]+0x00000078u; // 801F1174
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F1178
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F117C
  c->lr=0x801F1184u; f_800521A0(c); // 801F1180
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1184
  c->r[3]=c->r[31]+0x0000006Cu; // 801F1188
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F118C
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F1190
  c->lr=0x801F1198u; f_800521A0(c); // 801F1194
  c->r[3]=c->r[31]+0x000000F0u; // 801F1198
  c->lr=0x801F11A0u; f_800462E8(c); // 801F119C
  c->r[27]=0u+0x80450000u; // 801F11A0
  {uint32_t ea=c->r[2]+0xFFFFC300u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F11A4
  c->r[3]=c->r[27]+0xFFFFC69Cu; // 801F11A8
  c->r[4]=c->r[31]+0x000000F0u; // 801F11AC
  c->r[5]=c->r[31]+0x00000084u; // 801F11B0
  c->r[6]=0u+0x00000000u; // 801F11B4
  c->lr=0x801F11BCu; f_80044E70(c); // 801F11B8
  cmps(c,0,(int32_t)c->r[3],0); // 801F11BC
  if (crb(c,2)) { goto L_801F125C; } // 801F11C0
  c->r[4]=c->r[31]+0x00000084u; // 801F11C4
  {uint32_t ea=c->r[2]+0xFFFFC300u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F11C8
  c->r[5]=c->r[4]|c->r[4]; // 801F11CC
  c->r[3]=c->r[31]+0x000000F0u; // 801F11D0
  c->lr=0x801F11D8u; f_80046E64(c); // 801F11D4
  c->r[3]=c->r[31]+0x00000060u; // 801F11D8
  c->r[4]=c->r[31]+0x00000104u; // 801F11DC
  c->lr=0x801F11E4u; f_8003F484(c); // 801F11E0
  c->r[3]=c->r[31]+0x00000060u; // 801F11E4
  c->lr=0x801F11ECu; f_801CF0FC(c); // 801F11E8
  {uint32_t ea=c->r[2]+0xFFFFC304u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F11EC
  fcmp(c,0,c->f[1],c->f[0]); // 801F11F0
  if (!crb(c,1)) { goto L_801F125C; } // 801F11F4
  c->r[3]=c->r[31]+0x00000078u; // 801F11F8
  c->r[4]=c->r[31]+0x00000060u; // 801F11FC
  c->lr=0x801F1204u; f_8003F468(c); // 801F1200
  {uint32_t ea=c->r[2]+0xFFFFC308u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1204
  c->r[3]=c->r[31]+0x00000048u; // 801F1208
  c->r[4]=c->r[31]+0x00000060u; // 801F120C
  c->lr=0x801F1214u; f_80064C58(c); // 801F1210
  c->r[3]=c->r[31]+0x00000054u; // 801F1214
  c->r[4]=c->r[31]+0x00000084u; // 801F1218
  c->r[5]=c->r[31]+0x00000048u; // 801F121C
  c->lr=0x801F1224u; f_80064C34(c); // 801F1220
  c->r[3]=c->r[27]+0xFFFFC69Cu; // 801F1224
  c->r[4]=c->r[31]+0x000000F0u; // 801F1228
  c->r[5]=c->r[31]+0x00000084u; // 801F122C
  c->r[6]=c->r[31]+0x00000054u; // 801F1230
  c->r[7]=0u+0x00000000u; // 801F1234
  c->lr=0x801F123Cu; f_80044D14(c); // 801F1238
  cmps(c,0,(int32_t)c->r[3],0); // 801F123C
  if (crb(c,2)) { goto L_801F125C; } // 801F1240
  c->r[3]=c->r[31]+0x00000084u; // 801F1244
  c->r[4]=c->r[31]+0x000000F8u; // 801F1248
  c->lr=0x801F1250u; f_8003F468(c); // 801F124C
  c->r[3]=c->r[31]+0x00000078u; // 801F1250
  c->r[4]=c->r[31]+0x00000104u; // 801F1254
  c->lr=0x801F125Cu; f_8003F468(c); // 801F1258
L_801F125C:;
  c->r[0]=0u+0xFFFFFFFFu; // 801F125C
  c->r[3]=c->r[31]+0x000000F0u; // 801F1260
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801F1264
  c->lr=0x801F126Cu; f_80046394(c); // 801F1268
  c->r[3]=c->r[31]+0x000000C0u; // 801F126C
  c->r[4]=c->r[31]+0x0000006Cu; // 801F1270
  c->r[5]=c->r[31]+0x00000078u; // 801F1274
  c->lr=0x801F127Cu; f_80074DF8(c); // 801F1278
  c->r[3]=c->r[31]+0x000000C0u; // 801F127C
  c->r[4]=c->r[31]+0x00000084u; // 801F1280
  c->lr=0x801F1288u; f_80032FF4(c); // 801F1284
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1288
  c->r[3]=c->r[31]+0x00000030u; // 801F128C
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F1290
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 801F1294
  c->lr=0x801F129Cu; f_800521A0(c); // 801F1298
  {uint32_t ea=c->r[2]+0xFFFFC2C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F129C
  c->r[4]=0u+0x803E0000u; // 801F12A0
  c->r[5]=R32(c->r[31]+0x00000030u); // 801F12A4
  c->r[4]=c->r[4]+0x000016F4u; // 801F12A8
  c->r[6]=R32(c->r[31]+0x00000034u); // 801F12AC
  c->f[2]=c->f[1]; // 801F12B0
  c->r[0]=R32(c->r[31]+0x00000038u); // 801F12B4
  c->r[3]=c->r[26]+0x00000800u; // 801F12B8
  W32(c->r[31]+0x0000003Cu,c->r[5]); // 801F12BC
  c->r[4]=c->r[4]+0x00000038u; // 801F12C0
  c->r[5]=c->r[31]+0x0000003Cu; // 801F12C4
  W32(c->r[31]+0x00000040u,c->r[6]); // 801F12C8
  c->r[6]=0u+0x00000001u; // 801F12CC
  W32(c->r[31]+0x00000044u,c->r[0]); // 801F12D0
  c->lr=0x801F12D8u; f_800C1BA0(c); // 801F12D4
  c->r[28]=0u+0x00000000u; // 801F12D8
  goto L_801F135C; // 801F12DC
L_801F12E0:;
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)676); // 801F12E0
  {uint32_t ea=c->r[2]+0xFFFFC300u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F12E4
  c->r[0]=0u+0x00000006u; // 801F12E8
  c->r[4]=c->r[31]+0x000000BCu; // 801F12EC
  c->r[29]=c->r[26]+c->r[3]; // 801F12F0
  c->r[30]=c->r[29]+0x00000CBCu; // 801F12F4
  {uint32_t ea=c->r[29]+0x00000CBCu; WF32(ea,c->f[0]);} // 801F12F8
  c->r[5]=c->r[30]|c->r[30]; // 801F12FC
  c->ctr=c->r[0]; // 801F1300
L_801F1304:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801F1304
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801F1308
  W32(c->r[5]+0x00000004u,c->r[3]); // 801F130C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801F1310
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F1304; } // 801F1314
  c->r[27]=0u+0x00000005u; // 801F1318
  goto L_801F1348; // 801F131C
L_801F1320:;
  c->r[25]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 801F1320
  c->r[4]=c->r[31]+0x000000C0u; // 801F1324
  c->r[3]=c->r[30]+c->r[25]; // 801F1328
  c->r[3]=c->r[3]+0x00000060u; // 801F132C
  c->lr=0x801F1334u; f_80196444(c); // 801F1330
  c->r[3]=c->r[30]+c->r[25]; // 801F1334
  c->r[4]=c->r[31]+0x000000C0u; // 801F1338
  c->r[3]=c->r[3]+0x00000184u; // 801F133C
  c->lr=0x801F1344u; f_80196444(c); // 801F1340
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 801F1344
L_801F1348:;
  cmps(c,0,(int32_t)c->r[27],0); // 801F1348
  if (!crb(c,0)) { IRQCHK(c); goto L_801F1320; } // 801F134C
  {uint32_t ea=c->r[2]+0xFFFFC2C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1350
  c->r[28]=c->r[28]+0x00000001u; // 801F1354
  {uint32_t ea=c->r[29]+0x00000E3Cu; WF32(ea,c->f[0]);} // 801F1358
L_801F135C:;
  cmps(c,0,(int32_t)c->r[28],3); // 801F135C
  if (crb(c,0)) { IRQCHK(c); goto L_801F12E0; } // 801F1360
  c->r[30]=0u+0x00000000u; // 801F1364
  goto L_801F14C8; // 801F1368
L_801F136C:;
  c->r[0]=sraw(c,c->r[30],2); // 801F136C
  c->r[3]=0u+0x00000005u; // 801F1370
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 801F1374
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 801F1378
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801F137C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801F1380
  c->r[27]=c->r[4]-c->r[3]; // 801F1384
  c->r[25]=c->r[26]+c->r[0]; // 801F1388
  W32(c->r[25]+0x000014A8u,c->r[27]); // 801F138C
  c->lr=0x801F1394u; f_80291D94(c); // 801F1390
  c->r[0]=c->r[3]^0x80000000u; // 801F1394
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F1398
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F139C
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F13A0
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[1]=RF64(ea);} // 801F13A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F13A8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F13AC
  {uint32_t ea=c->r[25]+0x000014ACu; WF32(ea,c->f[0]);} // 801F13B0
  c->lr=0x801F13B8u; f_80291D94(c); // 801F13B4
  c->r[0]=c->r[3]^0x80000000u; // 801F13B8
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F13BC
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F13C0
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F13C4
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[1]=RF64(ea);} // 801F13C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F13CC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F13D0
  c->f[0]=-c->f[0]; // 801F13D4
  {uint32_t ea=c->r[25]+0x000014B0u; WF32(ea,c->f[0]);} // 801F13D8
  W32(c->r[25]+0x000014B4u,c->r[27]); // 801F13DC
  c->lr=0x801F13E4u; f_80291D94(c); // 801F13E0
  c->r[0]=c->r[3]^0x80000000u; // 801F13E4
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F13E8
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F13EC
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F13F0
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[1]=RF64(ea);} // 801F13F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F13F8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F13FC
  {uint32_t ea=c->r[25]+0x000014B8u; WF32(ea,c->f[0]);} // 801F1400
  c->lr=0x801F1408u; f_80291D94(c); // 801F1404
  c->r[0]=c->r[3]^0x80000000u; // 801F1408
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F140C
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F1410
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1414
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[1]=RF64(ea);} // 801F1418
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F141C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1420
  c->f[0]=-c->f[0]; // 801F1424
  {uint32_t ea=c->r[25]+0x000014BCu; WF32(ea,c->f[0]);} // 801F1428
  W32(c->r[25]+0x000014C0u,c->r[27]); // 801F142C
  c->lr=0x801F1434u; f_80291D94(c); // 801F1430
  c->r[0]=c->r[3]^0x80000000u; // 801F1434
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F1438
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F143C
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1440
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[1]=RF64(ea);} // 801F1444
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F1448
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F144C
  {uint32_t ea=c->r[25]+0x000014C4u; WF32(ea,c->f[0]);} // 801F1450
  c->lr=0x801F1458u; f_80291D94(c); // 801F1454
  c->r[0]=c->r[3]^0x80000000u; // 801F1458
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F145C
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F1460
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1464
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[1]=RF64(ea);} // 801F1468
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F146C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1470
  {uint32_t ea=c->r[25]+0x000014C8u; WF32(ea,c->f[0]);} // 801F1474
  W32(c->r[25]+0x000014CCu,c->r[27]); // 801F1478
  c->lr=0x801F1480u; f_80291D94(c); // 801F147C
  c->r[0]=c->r[3]^0x80000000u; // 801F1480
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F1484
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F1488
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F148C
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[1]=RF64(ea);} // 801F1490
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F1494
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1498
  {uint32_t ea=c->r[25]+0x000014D0u; WF32(ea,c->f[0]);} // 801F149C
  c->lr=0x801F14A4u; f_80291D94(c); // 801F14A0
  c->r[0]=c->r[3]^0x80000000u; // 801F14A4
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F14A8
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F14AC
  c->r[30]=c->r[30]+0x00000004u; // 801F14B0
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F14B4
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[1]=RF64(ea);} // 801F14B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F14BC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F14C0
  {uint32_t ea=c->r[25]+0x000014D4u; WF32(ea,c->f[0]);} // 801F14C4
L_801F14C8:;
  cmps(c,0,(int32_t)c->r[30],20); // 801F14C8
  if (crb(c,0)) { IRQCHK(c); goto L_801F136C; } // 801F14CC
  c->r[30]=0u+0x00000000u; // 801F14D0
  goto L_801F16EC; // 801F14D4
L_801F14D8:;
  c->r[0]=sraw(c,c->r[30],2); // 801F14D8
  c->r[3]=0u+0x00000005u; // 801F14DC
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 801F14E0
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 801F14E4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801F14E8
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801F14EC
  c->r[27]=c->r[4]-c->r[3]; // 801F14F0
  c->r[29]=c->r[26]+c->r[0]; // 801F14F4
  W32(c->r[29]+0x00001598u,c->r[27]); // 801F14F8
  c->lr=0x801F1500u; f_80291D94(c); // 801F14FC
  c->r[0]=c->r[3]^0x80000000u; // 801F1500
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F1504
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F1508
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F150C
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[1]=RF64(ea);} // 801F1510
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F1514
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1518
  {uint32_t ea=c->r[29]+0x0000159Cu; WF32(ea,c->f[0]);} // 801F151C
  c->lr=0x801F1524u; f_80291D94(c); // 801F1520
  c->r[3]=c->r[3]^0x80000000u; // 801F1524
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801F1528
  W32(c->r[31]+0x00000EF4u,c->r[3]); // 801F152C
  c->r[25]=c->r[26]+c->r[0]; // 801F1530
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F1534
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[1]=RF64(ea);} // 801F1538
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F153C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F1540
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1544
  c->f[0]=-c->f[0]; // 801F1548
  {uint32_t ea=c->r[29]+0x000015A0u; WF32(ea,c->f[0]);} // 801F154C
  c->lr=0x801F1554u; f_80291D94(c); // 801F1550
  c->r[0]=c->r[3]^0x80000000u; // 801F1554
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[3]=RF64(ea);} // 801F1558
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F155C
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1560
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[2]=RF64(ea);} // 801F1564
  {uint32_t ea=c->r[2]+0xFFFFC2CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1568
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801F156C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801F1570
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F1574
  {uint32_t ea=c->r[25]+0x00001688u; WF32(ea,c->f[0]);} // 801F1578
  W32(c->r[29]+0x000015A4u,c->r[27]); // 801F157C
  c->lr=0x801F1584u; f_80291D94(c); // 801F1580
  c->r[0]=c->r[3]^0x80000000u; // 801F1584
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F1588
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F158C
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1590
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[1]=RF64(ea);} // 801F1594
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F1598
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F159C
  {uint32_t ea=c->r[29]+0x000015A8u; WF32(ea,c->f[0]);} // 801F15A0
  c->lr=0x801F15A8u; f_80291D94(c); // 801F15A4
  c->r[0]=c->r[3]^0x80000000u; // 801F15A8
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F15AC
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F15B0
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F15B4
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[1]=RF64(ea);} // 801F15B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F15BC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F15C0
  c->f[0]=-c->f[0]; // 801F15C4
  {uint32_t ea=c->r[29]+0x000015ACu; WF32(ea,c->f[0]);} // 801F15C8
  c->lr=0x801F15D0u; f_80291D94(c); // 801F15CC
  c->r[0]=c->r[3]^0x80000000u; // 801F15D0
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[3]=RF64(ea);} // 801F15D4
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F15D8
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F15DC
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[2]=RF64(ea);} // 801F15E0
  {uint32_t ea=c->r[2]+0xFFFFC2CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F15E4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801F15E8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801F15EC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F15F0
  {uint32_t ea=c->r[25]+0x0000168Cu; WF32(ea,c->f[0]);} // 801F15F4
  W32(c->r[29]+0x000015B0u,c->r[27]); // 801F15F8
  c->lr=0x801F1600u; f_80291D94(c); // 801F15FC
  c->r[0]=c->r[3]^0x80000000u; // 801F1600
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F1604
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F1608
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F160C
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[1]=RF64(ea);} // 801F1610
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F1614
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1618
  {uint32_t ea=c->r[29]+0x000015B4u; WF32(ea,c->f[0]);} // 801F161C
  c->lr=0x801F1624u; f_80291D94(c); // 801F1620
  c->r[0]=c->r[3]^0x80000000u; // 801F1624
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F1628
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F162C
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1630
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[1]=RF64(ea);} // 801F1634
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F1638
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F163C
  {uint32_t ea=c->r[29]+0x000015B8u; WF32(ea,c->f[0]);} // 801F1640
  c->lr=0x801F1648u; f_80291D94(c); // 801F1644
  c->r[0]=c->r[3]^0x80000000u; // 801F1648
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[3]=RF64(ea);} // 801F164C
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F1650
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1654
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[2]=RF64(ea);} // 801F1658
  {uint32_t ea=c->r[2]+0xFFFFC2CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F165C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801F1660
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801F1664
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F1668
  {uint32_t ea=c->r[25]+0x00001690u; WF32(ea,c->f[0]);} // 801F166C
  W32(c->r[29]+0x000015BCu,c->r[27]); // 801F1670
  c->lr=0x801F1678u; f_80291D94(c); // 801F1674
  c->r[0]=c->r[3]^0x80000000u; // 801F1678
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F167C
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F1680
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F1684
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[1]=RF64(ea);} // 801F1688
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F168C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F1690
  {uint32_t ea=c->r[29]+0x000015C0u; WF32(ea,c->f[0]);} // 801F1694
  c->lr=0x801F169Cu; f_80291D94(c); // 801F1698
  c->r[0]=c->r[3]^0x80000000u; // 801F169C
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[2]=RF64(ea);} // 801F16A0
  W32(c->r[31]+0x00000EECu,c->r[0]); // 801F16A4
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F16A8
  {uint32_t ea=c->r[31]+0x00000EE8u; c->f[1]=RF64(ea);} // 801F16AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801F16B0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F16B4
  {uint32_t ea=c->r[29]+0x000015C4u; WF32(ea,c->f[0]);} // 801F16B8
  c->lr=0x801F16C0u; f_80291D94(c); // 801F16BC
  c->r[0]=c->r[3]^0x80000000u; // 801F16C0
  {uint32_t ea=c->r[2]+0xFFFFC2F8u; c->f[3]=RF64(ea);} // 801F16C4
  W32(c->r[31]+0x00000EF4u,c->r[0]); // 801F16C8
  c->r[30]=c->r[30]+0x00000004u; // 801F16CC
  {uint32_t ea=c->r[2]+0xFFFFC2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F16D0
  {uint32_t ea=c->r[31]+0x00000EF0u; c->f[2]=RF64(ea);} // 801F16D4
  {uint32_t ea=c->r[2]+0xFFFFC2CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F16D8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801F16DC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801F16E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F16E4
  {uint32_t ea=c->r[25]+0x00001694u; WF32(ea,c->f[0]);} // 801F16E8
L_801F16EC:;
  cmps(c,0,(int32_t)c->r[30],20); // 801F16EC
  if (crb(c,0)) { IRQCHK(c); goto L_801F14D8; } // 801F16F0
  c->r[3]=R32(c->r[26]+0x00000054u); // 801F16F4
  c->r[28]=0u+0x00000000u; // 801F16F8
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F16FC
  cmps(c,0,(int32_t)c->r[3],0); // 801F1700
  W32(c->r[26]+0x000008CCu,c->r[28]); // 801F1704
  {uint32_t ea=c->r[26]+0x000008C8u; WF32(ea,c->f[0]);} // 801F1708
  if (crb(c,2)) { goto L_801F1758; } // 801F170C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801F1710
  c->r[12]=R32(c->r[12]+0x00000010u); // 801F1714
  c->ctr=c->r[12]; // 801F1718
  if (true) { c->lr=0x801F1720u; dispatch(c,c->ctr); } // 801F171C
  c->lr=0x801F1724u; f_8007A658(c); // 801F1720
  c->r[27]=c->r[3]|c->r[3]; // 801F1724
  c->r[3]=0u+0x00000005u; // 801F1728
  c->lr=0x801F1730u; f_8007A658(c); // 801F172C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 801F1730
  if (!crb(c,1)) { goto L_801F1754; } // 801F1734
  c->r[27]=addc(c,c->r[26],0x00000280u,0); cr0(c,c->r[27]); // 801F1738
  if (crb(c,2)) { goto L_801F174C; } // 801F173C
  W32(c->r[31]+0x000000BCu,c->r[1]); // 801F1740
  c->r[3]=c->r[27]|c->r[27]; // 801F1744
  c->lr=0x801F174Cu; f_800AC890(c); // 801F1748
L_801F174C:;
  W32(c->r[26]+0x00000058u,c->r[27]); // 801F174C
  goto L_801F1790; // 801F1750
L_801F1754:;
  W32(c->r[26]+0x00000054u,c->r[28]); // 801F1754
L_801F1758:;
  c->r[3]=R32(c->r[26]+0x0000005Cu); // 801F1758
  c->r[0]=c->r[3]+0x00000001u; // 801F175C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F1760
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801F1764
  c->r[0]=c->r[0]^c->r[3]; // 801F1768
  c->r[0]=c->r[0]-c->r[3]; // 801F176C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 801F1770
  c->r[0]=c->r[26]+c->r[0]; // 801F1774
  c->r[27]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[27]); // 801F1778
  if (crb(c,2)) { goto L_801F178C; } // 801F177C
  W32(c->r[31]+0x000000A4u,c->r[1]); // 801F1780
  c->r[3]=c->r[27]|c->r[27]; // 801F1784
  c->lr=0x801F178Cu; f_800AC890(c); // 801F1788
L_801F178C:;
  W32(c->r[26]+0x00000054u,c->r[27]); // 801F178C
L_801F1790:;
  c->r[3]=0u+0x803E0000u; // 801F1790
  c->r[3]=c->r[3]+0x000016F4u; // 801F1794
  c->r[27]=c->r[3]+0x0000003Fu; // 801F1798
  c->lr=0x801F17A0u; f_80232150(c); // 801F179C
  {uint32_t ea=c->r[26]+0x00000398u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F17A0
  c->r[4]=c->r[27]|c->r[27]; // 801F17A4
  c->lr=0x801F17ACu; f_80232230(c); // 801F17A8
  c->r[4]=0u+0x00000000u; // 801F17AC
  goto L_801F17C4; // 801F17B0
L_801F17B4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)324); // 801F17B4
  c->r[4]=c->r[4]+0x00000001u; // 801F17B8
  c->r[3]=c->r[26]+c->r[0]; // 801F17BC
  {uint32_t ea=c->r[3]+0x00001818u; WF32(ea,c->f[1]);} // 801F17C0
L_801F17C4:;
  c->r[0]=R32(c->r[26]+0x00000CB8u); // 801F17C4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801F17C8
  if (crb(c,0)) { IRQCHK(c); goto L_801F17B4; } // 801F17CC
  c->r[3]=c->r[26]|c->r[26]; // 801F17D0
  c->r[4]=0u+0x00000000u; // 801F17D4
  c->r[5]=0u+0x00000000u; // 801F17D8
  c->lr=0x801F17E0u; f_80076080(c); // 801F17DC
  goto L_801F1968; // 801F17E0
L_801F17E4:;
  c->r[0]=R32(c->r[26]+0x000007E4u); // 801F17E4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801F17E8
  if (!crb(c,2)) { goto L_801F1968; } // 801F17EC
  c->r[0]=R8(c->r[27]+0x00000164u); // 801F17F0
  cmps(c,0,(int32_t)c->r[0],0); // 801F17F4
  if (!crb(c,2)) { goto L_801F1968; } // 801F17F8
  c->r[3]=R32(c->r[26]+0x00000A4Cu); // 801F17FC
  c->r[30]=0u+0x00000000u; // 801F1800
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801F1804
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801F1808
  W32(c->r[31]+0x00000014u,c->r[0]); // 801F180C
  goto L_801F1928; // 801F1810
L_801F1814:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)40); // 801F1814
  c->r[3]=c->r[31]+0x00000014u; // 801F1818
  c->r[4]=c->r[27]+c->r[0]; // 801F181C
  c->r[4]=R32(c->r[4]+0x00000014u); // 801F1820
  c->lr=0x801F1828u; f_80365C7C(c); // 801F1824
  W32(c->r[31]+0x00000008u,c->r[3]); // 801F1828
  c->r[28]=0u+0x00000000u; // 801F182C
  W32(c->r[31]+0x00000010u,c->r[3]); // 801F1830
  goto L_801F1918; // 801F1834
L_801F1838:;
  c->r[29]=(uint32_t)((int32_t)c->r[28]*(int32_t)324); // 801F1838
  c->r[3]=c->r[31]+0x00000010u; // 801F183C
  c->r[25]=c->r[26]+c->r[29]; // 801F1840
  c->lr=0x801F1848u; f_80197550(c); // 801F1844
  c->r[0]=R32(c->r[25]+0x0000171Cu); // 801F1848
  cmpu(c,0,c->r[0],c->r[3]); // 801F184C
  if (!crb(c,2)) { goto L_801F1914; } // 801F1850
  c->r[4]=c->r[25]|c->r[25]; // 801F1854
  c->r[3]=c->r[31]+0x00000018u; // 801F1858
  c->r[4]=c->r[4]+0x00001724u; // 801F185C
  c->lr=0x801F1864u; f_80032FD8(c); // 801F1860
  {uint32_t ea=c->r[2]+0xFFFFC2C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1864
  c->r[4]=0u+0x803E0000u; // 801F1868
  c->r[5]=R32(c->r[31]+0x00000018u); // 801F186C
  c->r[4]=c->r[4]+0x000016F4u; // 801F1870
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801F1874
  c->f[2]=c->f[1]; // 801F1878
  c->r[0]=R32(c->r[31]+0x00000020u); // 801F187C
  c->r[3]=c->r[26]+0x00000800u; // 801F1880
  W32(c->r[31]+0x00000024u,c->r[5]); // 801F1884
  c->r[4]=c->r[4]+0x00000046u; // 801F1888
  c->r[5]=c->r[31]+0x00000024u; // 801F188C
  W32(c->r[31]+0x00000028u,c->r[6]); // 801F1890
  c->r[6]=0u+0x00000001u; // 801F1894
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801F1898
  c->lr=0x801F18A0u; f_800C1BA0(c); // 801F189C
  c->r[3]=R32(c->r[26]+0x00000874u); // 801F18A0
  c->r[24]=c->r[25]+0x000016E0u; // 801F18A4
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F18A8
  c->r[0]=c->r[3]+0x00000001u; // 801F18AC
  W32(c->r[26]+0x00000874u,c->r[0]); // 801F18B0
  {uint32_t ea=c->r[26]+0x00000870u; WF32(ea,c->f[0]);} // 801F18B4
  c->r[0]=R32(c->r[25]+0x000016E0u); // 801F18B8
  cmps(c,0,(int32_t)c->r[0],11); // 801F18BC
  if (!crb(c,0)) { goto L_801F1908; } // 801F18C0
  c->r[3]=c->r[25]|c->r[25]; // 801F18C4
  c->r[25]=c->r[3]+0x0000181Cu; // 801F18C8
  c->r[3]=c->r[25]|c->r[25]; // 801F18CC
  c->lr=0x801F18D4u; f_8003F1D4(c); // 801F18D0
  cmps(c,0,(int32_t)c->r[3],0); // 801F18D4
  if (crb(c,2)) { goto L_801F1908; } // 801F18D8
  c->r[3]=c->r[25]|c->r[25]; // 801F18DC
  c->lr=0x801F18E4u; f_80068A78(c); // 801F18E0
  c->r[3]=R32(c->r[3]+0x00000044u); // 801F18E4
  c->r[0]=0u-c->r[3]; // 801F18E8
  c->r[0]=c->r[0]&~c->r[3]; // 801F18EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801F18F0
  if (!crb(c,2)) { goto L_801F1908; } // 801F18F4
  c->r[3]=0u+0x805C0000u; // 801F18F8
  c->r[4]=R32(c->r[27]+0x0000016Cu); // 801F18FC
  c->r[3]=c->r[3]+0x00005B94u; // 801F1900
  c->lr=0x801F1908u; f_80213880(c); // 801F1904
L_801F1908:;
  c->r[3]=c->r[24]|c->r[24]; // 801F1908
  c->r[4]=0u+0x0000000Bu; // 801F190C
  c->lr=0x801F1914u; f_80196BEC(c); // 801F1910
L_801F1914:;
  c->r[28]=c->r[28]+0x00000001u; // 801F1914
L_801F1918:;
  c->r[0]=R32(c->r[26]+0x00000CB8u); // 801F1918
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801F191C
  if (crb(c,0)) { IRQCHK(c); goto L_801F1838; } // 801F1920
  c->r[30]=c->r[30]+0x00000001u; // 801F1924
L_801F1928:;
  c->r[0]=R32(c->r[27]+0x00000150u); // 801F1928
  cmpu(c,0,c->r[30],c->r[0]); // 801F192C
  if (crb(c,0)) { IRQCHK(c); goto L_801F1814; } // 801F1930
  c->r[3]=c->r[26]|c->r[26]; // 801F1934
  c->lr=0x801F193Cu; f_801F3038(c); // 801F1938
  c->r[0]=0u-c->r[3]; // 801F193C
  c->r[0]=c->r[0]&~c->r[3]; // 801F1940
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801F1944
  if (!crb(c,2)) { goto L_801F1968; } // 801F1948
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F194C
  {uint32_t ea=c->r[26]+0x000003A4u; WF32(ea,c->f[0]);} // 801F1950
  goto L_801F1968; // 801F1954
L_801F1958:;
  c->r[3]=c->r[26]|c->r[26]; // 801F1958
  c->r[4]=c->r[24]|c->r[24]; // 801F195C
  c->r[5]=c->r[27]|c->r[27]; // 801F1960
  c->lr=0x801F1968u; f_800CFFB0(c); // 801F1964
L_801F1968:;
  c->r[10]=c->r[31]|c->r[31]; // 801F1968
  c->r[11]=c->r[10]+0x00000F20u; // 801F196C
  c->lr=0x801F1974u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F1970
  c->r[10]=R32(c->r[1]+0x00000000u); // 801F1974
  c->r[0]=R32(c->r[10]+0x00000004u); // 801F1978
  c->r[1]=c->r[10]|c->r[10]; // 801F197C
  c->lr=c->r[0]; // 801F1980
  return; // 801F1984
}

// fn_801F1988
void f_801F1988(Ctx* __restrict c) {
  trace_call(0x801F1988u);
  cmps(c,0,(int32_t)c->r[4],1000); // 801F1988
  c->r[5]=c->r[4]|c->r[4]; // 801F198C
  if (crb(c,0)) { goto L_801F19A8; } // 801F1990
  c->r[0]=0u+0x000003E8u; // 801F1994
  c->r[5]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 801F1998
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801F199C
  c->r[0]=c->r[4]-c->r[0]; // 801F19A0
  goto L_801F19B0; // 801F19A4
L_801F19A8:;
  c->r[0]=c->r[5]|c->r[5]; // 801F19A8
  c->r[5]=0u+0x00000000u; // 801F19AC
L_801F19B0:;
  cmps(c,0,(int32_t)c->r[5],1); // 801F19B0
  if (crb(c,2)) { goto L_801F19E0; } // 801F19B4
  if (!crb(c,0)) { goto L_801F19F0; } // 801F19B8
  cmps(c,0,(int32_t)c->r[5],0); // 801F19BC
  if (!crb(c,0)) { goto L_801F19C8; } // 801F19C0
  goto L_801F19F0; // 801F19C4
L_801F19C8:;
  cmps(c,0,(int32_t)c->r[0],1); // 801F19C8
  if (!crb(c,2)) { goto L_801F19F8; } // 801F19CC
  c->r[0]=R32(c->r[3]+0x0000303Cu); // 801F19D0
  c->r[0]=c->r[0]|0x40000000u; // 801F19D4
  W32(c->r[3]+0x0000303Cu,c->r[0]); // 801F19D8
  goto L_801F19F8; // 801F19DC
L_801F19E0:;
  {uint32_t ea=c->r[2]+0xFFFFC2D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F19E0
  W32(c->r[3]+0x00003034u,c->r[0]); // 801F19E4
  {uint32_t ea=c->r[3]+0x00003038u; WF32(ea,c->f[0]);} // 801F19E8
  goto L_801F19F8; // 801F19EC
L_801F19F0:;
  c->r[3]=0u+0x00000000u; // 801F19F0
  return; // 801F19F4
L_801F19F8:;
  c->r[3]=0u+0x00000001u; // 801F19F8
  return; // 801F19FC
}

// fn_801F1A00
void f_801F1A00(Ctx* __restrict c) {
  trace_call(0x801F1A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1A00
  c->r[0]=c->lr; // 801F1A04
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F1A08
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801F1A0C
  c->r[31]=c->r[3]|c->r[3]; // 801F1A10
  c->r[0]=R32(c->r[3]+0x0000303Cu); // 801F1A14
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801F1A18
  if (crb(c,2)) { goto L_801F1A68; } // 801F1A1C
  c->r[27]=0u+0x00000000u; // 801F1A20
  c->r[30]=0u+0x00000000u; // 801F1A24
  goto L_801F1A58; // 801F1A28
L_801F1A2C:;
  c->r[3]=c->r[31]+c->r[30]; // 801F1A2C
  c->r[28]=c->r[3]+0x000016E0u; // 801F1A30
  c->r[3]=c->r[28]|c->r[28]; // 801F1A34
  c->lr=0x801F1A3Cu; f_801F4BB4(c); // 801F1A38
  cmps(c,0,(int32_t)c->r[3],0); // 801F1A3C
  if (crb(c,2)) { goto L_801F1A50; } // 801F1A40
  c->r[3]=c->r[28]|c->r[28]; // 801F1A44
  c->r[4]=0u+0x00000001u; // 801F1A48
  c->lr=0x801F1A50u; f_80196BEC(c); // 801F1A4C
L_801F1A50:;
  c->r[27]=c->r[27]+0x00000001u; // 801F1A50
  c->r[30]=c->r[30]+0x00000144u; // 801F1A54
L_801F1A58:;
  c->r[0]=R32(c->r[31]+0x00000CB8u); // 801F1A58
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801F1A5C
  if (crb(c,0)) { IRQCHK(c); goto L_801F1A2C; } // 801F1A60
  goto L_801F1AE8; // 801F1A64
L_801F1A68:;
  c->r[5]=0u+0x803E0000u; // 801F1A68
  {uint32_t ea=c->r[5]+0x000016E8u; c->r[4]=R32(ea); c->r[5]=ea;} // 801F1A6C
  c->r[29]=c->r[1]+0x00000008u; // 801F1A70
  c->r[26]=0u+0x00000000u; // 801F1A74
  c->r[3]=R32(c->r[5]+0x00000004u); // 801F1A78
  c->r[30]=0u+0x00000000u; // 801F1A7C
  c->r[0]=R32(c->r[5]+0x00000008u); // 801F1A80
  c->r[28]=0u+0x00000003u; // 801F1A84
  W32(c->r[1]+0x00000008u,c->r[4]); // 801F1A88
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801F1A8C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801F1A90
  goto L_801F1ADC; // 801F1A94
L_801F1A98:;
  c->r[3]=c->r[31]+c->r[30]; // 801F1A98
  c->r[27]=c->r[3]+0x000016E0u; // 801F1A9C
  c->r[3]=c->r[27]|c->r[27]; // 801F1AA0
  c->lr=0x801F1AA8u; f_801F4BB4(c); // 801F1AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801F1AA8
  if (crb(c,2)) { goto L_801F1AD4; } // 801F1AAC
  c->lr=0x801F1AB4u; f_80291D94(c); // 801F1AB0
  c->r[4]=c->r[3]|c->r[3]; // 801F1AB4
  c->r[3]=c->r[27]|c->r[27]; // 801F1AB8
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[28]); // 801F1ABC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 801F1AC0
  c->r[0]=c->r[4]-c->r[0]; // 801F1AC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F1AC8
  c->r[4]=R32(c->r[29]+c->r[0]); // 801F1ACC
  c->lr=0x801F1AD4u; f_80196BEC(c); // 801F1AD0
L_801F1AD4:;
  c->r[26]=c->r[26]+0x00000001u; // 801F1AD4
  c->r[30]=c->r[30]+0x00000144u; // 801F1AD8
L_801F1ADC:;
  c->r[0]=R32(c->r[31]+0x00000CB8u); // 801F1ADC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801F1AE0
  if (crb(c,0)) { IRQCHK(c); goto L_801F1A98; } // 801F1AE4
L_801F1AE8:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801F1AE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F1AEC
  c->lr=c->r[0]; // 801F1AF0
  c->r[1]=c->r[1]+0x00000030u; // 801F1AF4
  return; // 801F1AF8
}

// fn_801F1AFC
void f_801F1AFC(Ctx* __restrict c) {
  trace_call(0x801F1AFCu);
  return; // 801F1AFC
}

// fn_801F1B00
void f_801F1B00(Ctx* __restrict c) {
  trace_call(0x801F1B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1B00
  c->r[0]=c->lr; // 801F1B04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1B08
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801F1B0C
  c->r[28]=c->r[3]|c->r[3]; // 801F1B10
  c->r[3]=c->r[3]+0x00000048u; // 801F1B14
  c->lr=0x801F1B1Cu; f_80079D78(c); // 801F1B18
  c->r[0]=0u+0x00000001u; // 801F1B1C
  c->r[29]=0u+0x00000000u; // 801F1B20
  W8(c->r[28]+0x000016DCu,c->r[0]); // 801F1B24
  c->r[31]=0u+0x00000000u; // 801F1B28
  goto L_801F1B5C; // 801F1B2C
L_801F1B30:;
  c->r[3]=c->r[28]+c->r[31]; // 801F1B30
  c->r[30]=c->r[3]+0x000016E0u; // 801F1B34
  c->r[3]=c->r[30]|c->r[30]; // 801F1B38
  c->lr=0x801F1B40u; f_801F4BB4(c); // 801F1B3C
  cmps(c,0,(int32_t)c->r[3],0); // 801F1B40
  if (crb(c,2)) { goto L_801F1B54; } // 801F1B44
  c->r[3]=c->r[30]|c->r[30]; // 801F1B48
  c->r[4]=0u+0x00000000u; // 801F1B4C
  c->lr=0x801F1B54u; f_80196BEC(c); // 801F1B50
L_801F1B54:;
  c->r[29]=c->r[29]+0x00000001u; // 801F1B54
  c->r[31]=c->r[31]+0x00000144u; // 801F1B58
L_801F1B5C:;
  c->r[0]=R32(c->r[28]+0x00000CB8u); // 801F1B5C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801F1B60
  if (crb(c,0)) { IRQCHK(c); goto L_801F1B30; } // 801F1B64
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801F1B68
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F1B6C
  c->lr=c->r[0]; // 801F1B70
  c->r[1]=c->r[1]+0x00000020u; // 801F1B74
  return; // 801F1B78
}

// fn_801F1B7C
void f_801F1B7C(Ctx* __restrict c) {
  trace_call(0x801F1B7Cu);
  c->r[0]=0u+0x00000000u; // 801F1B7C
  W8(c->r[3]+0x000016DCu,c->r[0]); // 801F1B80
  return; // 801F1B84
}

