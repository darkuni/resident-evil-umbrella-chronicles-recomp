#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8039B87C
void f_8039B87C(Ctx* __restrict c) {
  trace_call(0x8039B87Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039B87C
  c->r[0]=c->lr; // 8039B880
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039B884
  c->r[0]=R32(c->r[3]+0x00000000u); // 8039B888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039B88C
  c->r[31]=c->r[6]|c->r[6]; // 8039B890
  cmps(c,0,(int32_t)c->r[0],0); // 8039B894
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039B898
  c->r[30]=c->r[4]|c->r[4]; // 8039B89C
  if (!crb(c,2)) { goto L_8039B8AC; } // 8039B8A0
  c->r[3]=0u+0x00000000u; // 8039B8A4
  goto L_8039B91C; // 8039B8A8
L_8039B8AC:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8039B8AC
  cmps(c,0,(int32_t)c->r[4],0); // 8039B8B0
  if (!crb(c,2)) { goto L_8039B8C0; } // 8039B8B4
  c->r[3]=0u+0x00000000u; // 8039B8B8
  goto L_8039B91C; // 8039B8BC
L_8039B8C0:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 8039B8C0
  c->r[3]=c->r[4]+0x00000008u; // 8039B8C4
  cmpu(c,0,c->r[5],c->r[0]); // 8039B8C8
  if (crb(c,0)) { goto L_8039B8D8; } // 8039B8CC
  c->r[3]=0u+0x00000000u; // 8039B8D0
  goto L_8039B91C; // 8039B8D4
L_8039B8D8:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 8039B8D8
  c->r[5]=c->r[3]|c->r[3]; // 8039B8DC
  c->r[4]=c->r[4]+c->r[0]; // 8039B8E0
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 8039B8E4
  c->r[4]=R32(c->r[4]+0x00000010u); // 8039B8E8
  c->lr=0x8039B8F0u; f_803B3154(c); // 8039B8EC
  cmps(c,0,(int32_t)c->r[3],0); // 8039B8F0
  if (!crb(c,2)) { goto L_8039B900; } // 8039B8F4
  c->r[3]=0u+0x00000000u; // 8039B8F8
  goto L_8039B91C; // 8039B8FC
L_8039B900:;
  c->r[4]=c->r[3]|c->r[3]; // 8039B900
  c->r[3]=c->r[1]+0x00000008u; // 8039B904
  c->lr=0x8039B90Cu; f_803B3178(c); // 8039B908
  c->r[4]=c->r[30]|c->r[30]; // 8039B90C
  c->r[5]=c->r[31]|c->r[31]; // 8039B910
  c->r[3]=c->r[1]+0x00000008u; // 8039B914
  c->lr=0x8039B91Cu; f_803B3180(c); // 8039B918
L_8039B91C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039B91C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039B920
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039B924
  c->lr=c->r[0]; // 8039B928
  c->r[1]=c->r[1]+0x00000020u; // 8039B92C
  return; // 8039B930
}

// fn_8039B934
void f_8039B934(Ctx* __restrict c) {
  trace_call(0x8039B934u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039B934
  c->r[0]=c->lr; // 8039B938
  c->r[4]=0u+0x80430000u; // 8039B93C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039B940
  c->r[0]=0u+0xFFFFFFFFu; // 8039B944
  c->r[4]=c->r[4]+0x00006F50u; // 8039B948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039B94C
  c->r[31]=c->r[3]|c->r[3]; // 8039B950
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039B954
  W32(c->r[3]+0x00000000u,c->r[4]); // 8039B958
  c->lr=0x8039B960u; f_8039B978(c); // 8039B95C
  c->r[3]=c->r[31]|c->r[31]; // 8039B960
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039B964
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039B968
  c->lr=c->r[0]; // 8039B96C
  c->r[1]=c->r[1]+0x00000010u; // 8039B970
  return; // 8039B974
}

// fn_8039B978
void f_8039B978(Ctx* __restrict c) {
  trace_call(0x8039B978u);
  {uint32_t ea=c->r[2]+0xFFFFEDA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039B978
  c->r[4]=0u+0x00000000u; // 8039B97C
  {uint32_t ea=c->r[2]+0xFFFFEDA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039B980
  c->r[0]=0u+0x00000001u; // 8039B984
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8039B988
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8039B98C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8039B990
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8039B994
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8039B998
  W8(c->r[3]+0x00000068u,c->r[4]); // 8039B99C
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 8039B9A0
  W32(c->r[3]+0x00000070u,c->r[4]); // 8039B9A4
  W32(c->r[3]+0x00000020u,c->r[0]); // 8039B9A8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8039B9AC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 8039B9B0
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8039B9B4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8039B9B8
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8039B9BC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8039B9C0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8039B9C4
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 8039B9C8
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 8039B9CC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 8039B9D0
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 8039B9D4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 8039B9D8
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 8039B9DC
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 8039B9E0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8039B9E4
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 8039B9E8
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8039B9EC
  return; // 8039B9F0
}

// fn_8039B9F4
void f_8039B9F4(Ctx* __restrict c) {
  trace_call(0x8039B9F4u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8039B9F4
  c->r[3]=c->r[3]+c->r[0]; // 8039B9F8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 8039B9FC
  return; // 8039BA00
}

// fn_8039BA04
void f_8039BA04(Ctx* __restrict c) {
  trace_call(0x8039BA04u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8039BA04
  c->r[3]=c->r[3]+c->r[0]; // 8039BA08
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BA0C
  return; // 8039BA10
}

// fn_8039BA14
void f_8039BA14(Ctx* __restrict c) {
  trace_call(0x8039BA14u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8039BA14
  c->r[3]=c->r[3]+c->r[0]; // 8039BA18
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8039BA1C
  return; // 8039BA20
}

// fn_8039BA24
void f_8039BA24(Ctx* __restrict c) {
  trace_call(0x8039BA24u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8039BA24
  c->r[3]=c->r[3]+c->r[0]; // 8039BA28
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BA2C
  return; // 8039BA30
}

// fn_8039BA34
void f_8039BA34(Ctx* __restrict c) {
  trace_call(0x8039BA34u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8039BA34
  c->r[3]=c->r[3]+c->r[0]; // 8039BA38
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BA3C
  return; // 8039BA40
}

// fn_8039BA44
void f_8039BA44(Ctx* __restrict c) {
  trace_call(0x8039BA44u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8039BA44
  c->r[3]=c->r[3]+c->r[0]; // 8039BA48
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BA4C
  return; // 8039BA50
}

// fn_8039BA54
void f_8039BA54(Ctx* __restrict c) {
  trace_call(0x8039BA54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039BA54
  c->r[0]=c->lr; // 8039BA58
  cmps(c,0,(int32_t)c->r[3],0); // 8039BA5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039BA60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039BA64
  c->r[31]=c->r[3]|c->r[3]; // 8039BA68
  if (crb(c,2)) { goto L_8039BA7C; } // 8039BA6C
  cmps(c,0,(int32_t)c->r[4],0); // 8039BA70
  if (!crb(c,1)) { goto L_8039BA7C; } // 8039BA74
  c->lr=0x8039BA7Cu; f_802896EC(c); // 8039BA78
L_8039BA7C:;
  c->r[3]=c->r[31]|c->r[31]; // 8039BA7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039BA80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039BA84
  c->lr=c->r[0]; // 8039BA88
  c->r[1]=c->r[1]+0x00000010u; // 8039BA8C
  return; // 8039BA90
}

// fn_8039BA94
void f_8039BA94(Ctx* __restrict c) {
  trace_call(0x8039BA94u);
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039BA94
  c->r[5]=0u+0x80430000u; // 8039BA98
  c->r[4]=0u+0x00000000u; // 8039BA9C
  c->r[0]=0u+0xFFFFFFFFu; // 8039BAA0
  c->r[5]=c->r[5]+0x00006F78u; // 8039BAA4
  W32(c->r[3]+0x00000004u,c->r[4]); // 8039BAA8
  W32(c->r[3]+0x00000000u,c->r[5]); // 8039BAAC
  W32(c->r[3]+0x00000008u,c->r[4]); // 8039BAB0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8039BAB4
  W32(c->r[3]+0x00000010u,c->r[4]); // 8039BAB8
  W32(c->r[3]+0x00000014u,c->r[4]); // 8039BABC
  W32(c->r[3]+0x00000018u,c->r[4]); // 8039BAC0
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8039BAC4
  W32(c->r[3]+0x00000020u,c->r[4]); // 8039BAC8
  W32(c->r[3]+0x00000024u,c->r[4]); // 8039BACC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8039BAD0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8039BAD4
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 8039BAD8
  W32(c->r[3]+0x00000050u,c->r[4]); // 8039BADC
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 8039BAE0
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 8039BAE4
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8039BAE8
  W32(c->r[3]+0x00000060u,c->r[4]); // 8039BAEC
  W32(c->r[3]+0x00000078u,c->r[0]); // 8039BAF0
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 8039BAF4
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 8039BAF8
  W32(c->r[3]+0x00000084u,c->r[4]); // 8039BAFC
  W32(c->r[3]+0x00000088u,c->r[4]); // 8039BB00
  W32(c->r[3]+0x000000B8u,c->r[4]); // 8039BB04
  W32(c->r[3]+0x000000BCu,c->r[4]); // 8039BB08
  W32(c->r[3]+0x000000C0u,c->r[4]); // 8039BB0C
  W32(c->r[3]+0x000000C4u,c->r[4]); // 8039BB10
  W32(c->r[3]+0x000000C8u,c->r[4]); // 8039BB14
  W32(c->r[3]+0x000000CCu,c->r[4]); // 8039BB18
  W32(c->r[3]+0x000000D0u,c->r[4]); // 8039BB1C
  W32(c->r[3]+0x000000D4u,c->r[4]); // 8039BB20
  return; // 8039BB24
}

// fn_8039BB28
void f_8039BB28(Ctx* __restrict c) {
  trace_call(0x8039BB28u);
  c->r[0]=0u+0x00000000u; // 8039BB28
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039BB2C
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8039BB30
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[0]); // 8039BB34
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039BB38
  W8(c->r[3]+0x00000067u,c->r[0]); // 8039BB3C
  W8(c->r[3]+0x00000068u,c->r[0]); // 8039BB40
  W8(c->r[3]+0x00000064u,c->r[0]); // 8039BB44
  W8(c->r[3]+0x00000065u,c->r[0]); // 8039BB48
  W8(c->r[3]+0x00000066u,c->r[0]); // 8039BB4C
  W8(c->r[3]+0x00000069u,c->r[0]); // 8039BB50
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 8039BB54
  W32(c->r[3]+0x00000070u,c->r[0]); // 8039BB58
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[4]);} // 8039BB5C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[4]);} // 8039BB60
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8039BB64
  W32(c->r[3]+0x00000050u,c->r[0]); // 8039BB68
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 8039BB6C
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 8039BB70
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 8039BB74
  W32(c->r[3]+0x00000060u,c->r[0]); // 8039BB78
  if (crb(c,0)) { goto L_8039BB84; } // 8039BB7C
  goto L_8039BBC0; // 8039BB80
L_8039BB84:;
  c->r[4]=c->r[0]^0x80000000u; // 8039BB84
  c->r[0]=0u+0x43300000u; // 8039BB88
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8039BB8C
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[4]); // 8039BB90
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[3]=RF64(ea);} // 8039BB94
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039BB98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039BB9C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8039BBA0
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8039BBA4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039BBA8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039BBAC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8039BBB0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8039BBB4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039BBB8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 8039BBBC
L_8039BBC0:;
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BBC0
  c->r[0]=0u+0x00000000u; // 8039BBC4
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039BBC8
  c->r[4]=0u+0x00000001u; // 8039BBCC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[4]);} // 8039BBD0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 8039BBD4
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 8039BBD8
  W32(c->r[3]+0x00000050u,c->r[0]); // 8039BBDC
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[1]);} // 8039BBE0
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[1]);} // 8039BBE4
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 8039BBE8
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 8039BBEC
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 8039BBF0
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 8039BBF4
  W32(c->r[3]+0x00000084u,c->r[0]); // 8039BBF8
  W32(c->r[3]+0x00000088u,c->r[0]); // 8039BBFC
  W32(c->r[3]+0x000000A0u,c->r[4]); // 8039BC00
  W8(c->r[3]+0x0000009Cu,c->r[0]); // 8039BC04
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 8039BC08
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[1]);} // 8039BC0C
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 8039BC10
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[1]);} // 8039BC14
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 8039BC18
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 8039BC1C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 8039BC20
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8039BC24
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8039BC28
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 8039BC2C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 8039BC30
  W32(c->r[3]+0x00000040u,c->r[0]); // 8039BC34
  c->r[1]=c->r[1]+0x00000020u; // 8039BC38
  return; // 8039BC3C
}

// StartPrepared__Q44nw4r3snd6detail10BasicSoundFv
void f_8039BC40(Ctx* __restrict c) {
  trace_call(0x8039BC40u);
  c->r[0]=R8(c->r[3]+0x00000065u); // 8039BC40
  cmps(c,0,(int32_t)c->r[0],0); // 8039BC44
  if (!crb(c,2)) return; // 8039BC48
  c->r[0]=0u+0x00000001u; // 8039BC4C
  W8(c->r[3]+0x00000064u,c->r[0]); // 8039BC50
  return; // 8039BC54
}

// fn_8039BC58
void f_8039BC58(Ctx* __restrict c) {
  trace_call(0x8039BC58u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039BC58
  c->r[0]=c->lr; // 8039BC5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8039BC60
  c->r[0]=0u+0x43300000u; // 8039BC64
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8039BC68
  W32(c->r[1]+0x00000028u,c->r[30]); // 8039BC6C
  c->r[30]=c->r[4]|c->r[4]; // 8039BC70
  W32(c->r[1]+0x00000024u,c->r[29]); // 8039BC74
  c->r[29]=c->r[3]|c->r[3]; // 8039BC78
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039BC7C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039BC80
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039BC84
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039BC88
  c->ctr=c->r[12]; // 8039BC8C
  if (true) { c->lr=0x8039BC94u; dispatch(c,c->ctr); } // 8039BC90
  cmps(c,0,(int32_t)c->r[30],0); // 8039BC94
  c->r[31]=c->r[3]|c->r[3]; // 8039BC98
  if (crb(c,2)) { goto L_8039BCF0; } // 8039BC9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039BCA0
  c->r[12]=R32(c->r[12]+0x00000018u); // 8039BCA4
  c->ctr=c->r[12]; // 8039BCA8
  if (true) { c->lr=0x8039BCB0u; dispatch(c,c->ctr); } // 8039BCAC
  cmps(c,0,(int32_t)c->r[3],0); // 8039BCB0
  if (crb(c,2)) { goto L_8039BCF0; } // 8039BCB4
  c->r[12]=R32(c->r[31]+0x00000000u); // 8039BCB8
  c->r[3]=c->r[31]|c->r[31]; // 8039BCBC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8039BCC0
  c->ctr=c->r[12]; // 8039BCC4
  if (true) { c->lr=0x8039BCCCu; dispatch(c,c->ctr); } // 8039BCC8
  cmps(c,0,(int32_t)c->r[3],0); // 8039BCCC
  if (crb(c,2)) { goto L_8039BCF0; } // 8039BCD0
  c->r[12]=R32(c->r[31]+0x00000000u); // 8039BCD4
  c->r[3]=c->r[31]|c->r[31]; // 8039BCD8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8039BCDC
  c->ctr=c->r[12]; // 8039BCE0
  if (true) { c->lr=0x8039BCE8u; dispatch(c,c->ctr); } // 8039BCE4
  cmps(c,0,(int32_t)c->r[3],0); // 8039BCE8
  if (crb(c,2)) { goto L_8039BD08; } // 8039BCEC
L_8039BCF0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8039BCF0
  c->r[3]=c->r[29]|c->r[29]; // 8039BCF4
  c->r[12]=R32(c->r[12]+0x00000028u); // 8039BCF8
  c->ctr=c->r[12]; // 8039BCFC
  if (true) { c->lr=0x8039BD04u; dispatch(c,c->ctr); } // 8039BD00
  goto L_8039BE0C; // 8039BD04
L_8039BD08:;
  c->r[5]=R32(c->r[29]+0x0000004Cu); // 8039BD08
  c->r[4]=R32(c->r[29]+0x00000050u); // 8039BD0C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8039BD10
  if (crb(c,0)) { goto L_8039BD20; } // 8039BD14
  {uint32_t ea=c->r[29]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BD18
  goto L_8039BD5C; // 8039BD1C
L_8039BD20:;
  c->r[3]=c->r[4]^0x80000000u; // 8039BD20
  c->r[0]=c->r[5]^0x80000000u; // 8039BD24
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8039BD28
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039BD2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039BD30
  {uint32_t ea=c->r[29]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BD34
  {uint32_t ea=c->r[29]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039BD38
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039BD3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039BD40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039BD44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039BD48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039BD4C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039BD50
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039BD54
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8039BD58
L_8039BD5C:;
  c->r[0]=c->r[30]^0x80000000u; // 8039BD5C
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039BD60
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039BD64
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8039BD68
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039BD6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039BD70
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8039BD74
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8039BD78
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8039BD7C
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 8039BD80
  if (crb(c,0)) { goto L_8039BD90; } // 8039BD84
  {uint32_t ea=c->r[29]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BD88
  goto L_8039BDC8; // 8039BD8C
L_8039BD90:;
  c->r[3]=c->r[4]^0x80000000u; // 8039BD90
  c->r[0]=c->r[5]^0x80000000u; // 8039BD94
  W32(c->r[1]+0x00000014u,c->r[3]); // 8039BD98
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039BD9C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8039BDA0
  {uint32_t ea=c->r[29]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039BDA4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 8039BDA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039BDAC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8039BDB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039BDB4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039BDB8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039BDBC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039BDC0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8039BDC4
L_8039BDC8:;
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039BDC8
  c->r[31]=0u+0x00000000u; // 8039BDCC
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[1]);} // 8039BDD0
  c->r[3]=c->r[29]|c->r[29]; // 8039BDD4
  c->r[4]=0u+0x00000000u; // 8039BDD8
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 8039BDDC
  W32(c->r[29]+0x0000004Cu,c->r[6]); // 8039BDE0
  W32(c->r[29]+0x00000050u,c->r[31]); // 8039BDE4
  c->r[12]=R32(c->r[29]+0x00000000u); // 8039BDE8
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8039BDEC
  c->ctr=c->r[12]; // 8039BDF0
  if (true) { c->lr=0x8039BDF8u; dispatch(c,c->ctr); } // 8039BDF4
  c->r[0]=0u+0x00000001u; // 8039BDF8
  W8(c->r[29]+0x00000066u,c->r[31]); // 8039BDFC
  W8(c->r[29]+0x00000067u,c->r[31]); // 8039BE00
  W8(c->r[29]+0x00000068u,c->r[31]); // 8039BE04
  W8(c->r[29]+0x00000069u,c->r[0]); // 8039BE08
L_8039BE0C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8039BE0C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8039BE10
  c->r[30]=R32(c->r[1]+0x00000028u); // 8039BE14
  c->r[29]=R32(c->r[1]+0x00000024u); // 8039BE18
  c->lr=c->r[0]; // 8039BE1C
  c->r[1]=c->r[1]+0x00000030u; // 8039BE20
  return; // 8039BE24
}

// fn_8039BE28
void f_8039BE28(Ctx* __restrict c) {
  trace_call(0x8039BE28u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039BE28
  c->r[0]=c->lr; // 8039BE2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8039BE30
  c->r[0]=0u+0x43300000u; // 8039BE34
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8039BE38
  c->r[31]=c->r[4]|c->r[4]; // 8039BE3C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8039BE40
  c->r[30]=c->r[3]|c->r[3]; // 8039BE44
  W32(c->r[1]+0x00000024u,c->r[29]); // 8039BE48
  c->r[29]=c->r[5]|c->r[5]; // 8039BE4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039BE50
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039BE54
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039BE58
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039BE5C
  c->ctr=c->r[12]; // 8039BE60
  if (true) { c->lr=0x8039BE68u; dispatch(c,c->ctr); } // 8039BE64
  cmps(c,0,(int32_t)c->r[31],0); // 8039BE68
  if (crb(c,2)) { goto L_8039BF6C; } // 8039BE6C
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 8039BE70
  c->r[0]=R32(c->r[30]+0x00000060u); // 8039BE74
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8039BE78
  if (crb(c,0)) { goto L_8039BE88; } // 8039BE7C
  {uint32_t ea=c->r[30]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039BE80
  goto L_8039BEC4; // 8039BE84
L_8039BE88:;
  c->r[3]=c->r[0]^0x80000000u; // 8039BE88
  c->r[0]=c->r[4]^0x80000000u; // 8039BE8C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8039BE90
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039BE94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039BE98
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BE9C
  {uint32_t ea=c->r[30]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039BEA0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039BEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039BEA8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039BEAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039BEB0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039BEB4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039BEB8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039BEBC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8039BEC0
L_8039BEC4:;
  c->r[3]=c->r[29]^0x80000000u; // 8039BEC4
  c->r[0]=0u+0x00000001u; // 8039BEC8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8039BECC
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[1]=RF64(ea);} // 8039BED0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039BED4
  W8(c->r[30]+0x00000068u,c->r[0]); // 8039BED8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8039BEDC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8039BEE0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8039BEE4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8039BEE8
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8039BEEC
  cmps(c,0,(int32_t)c->r[5],0); // 8039BEF0
  if (crb(c,1)) { goto L_8039BEFC; } // 8039BEF4
  c->r[5]=0u+0x00000001u; // 8039BEF8
L_8039BEFC:;
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 8039BEFC
  c->r[0]=R32(c->r[30]+0x00000060u); // 8039BF00
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8039BF04
  if (crb(c,0)) { goto L_8039BF14; } // 8039BF08
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BF0C
  goto L_8039BF50; // 8039BF10
L_8039BF14:;
  c->r[3]=c->r[0]^0x80000000u; // 8039BF14
  c->r[0]=c->r[4]^0x80000000u; // 8039BF18
  W32(c->r[1]+0x00000014u,c->r[3]); // 8039BF1C
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039BF20
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039BF24
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BF28
  {uint32_t ea=c->r[30]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039BF2C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039BF30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039BF34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039BF38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039BF3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039BF40
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039BF44
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039BF48
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8039BF4C
L_8039BF50:;
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039BF50
  c->r[0]=0u+0x00000000u; // 8039BF54
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 8039BF58
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 8039BF5C
  W32(c->r[30]+0x0000005Cu,c->r[5]); // 8039BF60
  W32(c->r[30]+0x00000060u,c->r[0]); // 8039BF64
  goto L_8039C08C; // 8039BF68
L_8039BF6C:;
  c->r[0]=R8(c->r[30]+0x00000067u); // 8039BF6C
  cmpu(c,0,c->r[0],c->r[31]); // 8039BF70
  if (crb(c,2)) { goto L_8039BF8C; } // 8039BF74
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039BF78
  c->r[4]=0u+0x00000000u; // 8039BF7C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8039BF80
  c->ctr=c->r[12]; // 8039BF84
  if (true) { c->lr=0x8039BF8Cu; dispatch(c,c->ctr); } // 8039BF88
L_8039BF8C:;
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 8039BF8C
  c->r[0]=R32(c->r[30]+0x00000060u); // 8039BF90
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8039BF94
  if (crb(c,0)) { goto L_8039BFA4; } // 8039BF98
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BF9C
  goto L_8039BFE0; // 8039BFA0
L_8039BFA4:;
  c->r[3]=c->r[0]^0x80000000u; // 8039BFA4
  c->r[0]=c->r[4]^0x80000000u; // 8039BFA8
  W32(c->r[1]+0x00000014u,c->r[3]); // 8039BFAC
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039BFB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039BFB4
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039BFB8
  {uint32_t ea=c->r[30]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039BFBC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039BFC0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039BFC4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039BFC8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039BFCC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039BFD0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039BFD4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039BFD8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8039BFDC
L_8039BFE0:;
  c->r[0]=c->r[29]^0x80000000u; // 8039BFE0
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039BFE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039BFE8
  c->r[0]=0u+0x00000001u; // 8039BFEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8039BFF0
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[2]=RF64(ea);} // 8039BFF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8039BFF8
  W8(c->r[30]+0x00000068u,c->r[0]); // 8039BFFC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039C000
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8039C004
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8039C008
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8039C00C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8039C010
  cmps(c,0,(int32_t)c->r[5],0); // 8039C014
  if (crb(c,1)) { goto L_8039C020; } // 8039C018
  c->r[5]=0u+0x00000001u; // 8039C01C
L_8039C020:;
  c->r[4]=R32(c->r[30]+0x0000005Cu); // 8039C020
  c->r[0]=R32(c->r[30]+0x00000060u); // 8039C024
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8039C028
  if (crb(c,0)) { goto L_8039C038; } // 8039C02C
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C030
  goto L_8039C074; // 8039C034
L_8039C038:;
  c->r[3]=c->r[0]^0x80000000u; // 8039C038
  c->r[0]=c->r[4]^0x80000000u; // 8039C03C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8039C040
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039C044
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039C048
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C04C
  {uint32_t ea=c->r[30]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C050
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039C054
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039C058
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039C05C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039C060
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039C064
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039C068
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039C06C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8039C070
L_8039C074:;
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C074
  c->r[0]=0u+0x00000000u; // 8039C078
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 8039C07C
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 8039C080
  W32(c->r[30]+0x0000005Cu,c->r[5]); // 8039C084
  W32(c->r[30]+0x00000060u,c->r[0]); // 8039C088
L_8039C08C:;
  W8(c->r[30]+0x00000067u,c->r[31]); // 8039C08C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8039C090
  c->r[30]=R32(c->r[1]+0x00000028u); // 8039C094
  c->r[29]=R32(c->r[1]+0x00000024u); // 8039C098
  c->r[0]=R32(c->r[1]+0x00000034u); // 8039C09C
  c->lr=c->r[0]; // 8039C0A0
  c->r[1]=c->r[1]+0x00000030u; // 8039C0A4
  return; // 8039C0A8
}

// fn_8039C0AC
void f_8039C0AC(Ctx* __restrict c) {
  trace_call(0x8039C0ACu);
  c->r[0]=0u-c->r[4]; // 8039C0AC
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 8039C0B0
  c->r[0]=c->r[0]&~c->r[4]; // 8039C0B4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8039C0B8
  W8(c->r[3]+0x00000066u,c->r[0]); // 8039C0BC
  return; // 8039C0C0
}

// fn_8039C0C4
void f_8039C0C4(Ctx* __restrict c) {
  trace_call(0x8039C0C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039C0C4
  c->r[5]=0u+0x43300000u; // 8039C0C8
  c->r[0]=R8(c->r[3]+0x00000069u); // 8039C0CC
  W32(c->r[1]+0x00000008u,c->r[5]); // 8039C0D0
  cmps(c,0,(int32_t)c->r[0],0); // 8039C0D4
  W32(c->r[1]+0x00000010u,c->r[5]); // 8039C0D8
  if (!crb(c,2)) { goto L_8039C1C0; } // 8039C0DC
  c->r[7]=R32(c->r[3]+0x0000004Cu); // 8039C0E0
  c->r[6]=R32(c->r[3]+0x00000050u); // 8039C0E4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 8039C0E8
  if (crb(c,0)) { goto L_8039C0F8; } // 8039C0EC
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C0F0
  goto L_8039C134; // 8039C0F4
L_8039C0F8:;
  c->r[5]=c->r[6]^0x80000000u; // 8039C0F8
  c->r[0]=c->r[7]^0x80000000u; // 8039C0FC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8039C100
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039C104
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039C108
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C10C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C110
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039C114
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039C118
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039C11C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039C120
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039C124
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039C128
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039C12C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8039C130
L_8039C134:;
  c->r[0]=c->r[4]^0x80000000u; // 8039C134
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C138
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039C13C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 8039C140
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8039C144
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039C148
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8039C14C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 8039C150
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8039C154
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8039C158
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 8039C15C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8039C160
  if (crb(c,0)) { goto L_8039C170; } // 8039C164
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C168
  goto L_8039C1A8; // 8039C16C
L_8039C170:;
  c->r[4]=c->r[6]^0x80000000u; // 8039C170
  c->r[0]=c->r[7]^0x80000000u; // 8039C174
  W32(c->r[1]+0x00000014u,c->r[4]); // 8039C178
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C17C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8039C180
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C184
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 8039C188
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039C18C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8039C190
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8039C194
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039C198
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039C19C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039C1A0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 8039C1A4
L_8039C1A8:;
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C1A8
  c->r[0]=0u+0x00000000u; // 8039C1AC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 8039C1B0
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8039C1B4
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 8039C1B8
  W32(c->r[3]+0x00000050u,c->r[0]); // 8039C1BC
L_8039C1C0:;
  c->r[1]=c->r[1]+0x00000020u; // 8039C1C0
  return; // 8039C1C4
}

// fn_8039C1C8
void f_8039C1C8(Ctx* __restrict c) {
  trace_call(0x8039C1C8u);
  c->r[3]=R8(c->r[3]+0x00000067u); // 8039C1C8
  return; // 8039C1CC
}

// fn_8039C1D0
void f_8039C1D0(Ctx* __restrict c) {
  trace_call(0x8039C1D0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039C1D0
  c->r[0]=c->lr; // 8039C1D4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8039C1D8
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 8039C1DC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 8039C1E0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 8039C1E4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 8039C1E8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 8039C1EC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 8039C1F0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[28]);} // 8039C1F4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,28,ea,0,0);} // 8039C1F8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[27]);} // 8039C1FC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,27,ea,0,0);} // 8039C200
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[26]);} // 8039C204
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,26,ea,0,0);} // 8039C208
  c->r[11]=c->r[1]+0x00000050u; // 8039C20C
  c->lr=0x8039C214u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8039C210
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039C214
  c->r[0]=0u+0x43300000u; // 8039C218
  c->r[29]=c->r[3]|c->r[3]; // 8039C21C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8039C220
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039C224
  W32(c->r[1]+0x00000020u,c->r[0]); // 8039C228
  c->ctr=c->r[12]; // 8039C22C
  if (true) { c->lr=0x8039C234u; dispatch(c,c->ctr); } // 8039C230
  c->r[0]=R8(c->r[29]+0x00000066u); // 8039C234
  c->r[31]=c->r[3]|c->r[3]; // 8039C238
  cmps(c,0,(int32_t)c->r[0],0); // 8039C23C
  if (crb(c,2)) { goto L_8039C28C; } // 8039C240
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039C244
  c->r[12]=R32(c->r[12]+0x00000018u); // 8039C248
  c->ctr=c->r[12]; // 8039C24C
  if (true) { c->lr=0x8039C254u; dispatch(c,c->ctr); } // 8039C250
  cmps(c,0,(int32_t)c->r[3],0); // 8039C254
  if (crb(c,2)) { goto L_8039C28C; } // 8039C258
  c->r[3]=R32(c->r[29]+0x0000006Cu); // 8039C25C
  cmps(c,0,(int32_t)c->r[3],0); // 8039C260
  if (!crb(c,2)) { goto L_8039C284; } // 8039C264
  c->r[12]=R32(c->r[29]+0x00000000u); // 8039C268
  c->r[3]=c->r[29]|c->r[29]; // 8039C26C
  c->r[4]=0u+0x00000000u; // 8039C270
  c->r[12]=R32(c->r[12]+0x00000018u); // 8039C274
  c->ctr=c->r[12]; // 8039C278
  if (true) { c->lr=0x8039C280u; dispatch(c,c->ctr); } // 8039C27C
  goto L_8039C6E4; // 8039C280
L_8039C284:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8039C284
  W32(c->r[29]+0x0000006Cu,c->r[0]); // 8039C288
L_8039C28C:;
  c->r[0]=R8(c->r[29]+0x00000065u); // 8039C28C
  c->r[30]=0u+0x00000000u; // 8039C290
  cmps(c,0,(int32_t)c->r[0],0); // 8039C294
  if (!crb(c,2)) { goto L_8039C2C8; } // 8039C298
  c->r[0]=R8(c->r[29]+0x00000064u); // 8039C29C
  cmps(c,0,(int32_t)c->r[0],0); // 8039C2A0
  if (crb(c,2)) { goto L_8039C6E4; } // 8039C2A4
  c->r[12]=R32(c->r[29]+0x00000000u); // 8039C2A8
  c->r[3]=c->r[29]|c->r[29]; // 8039C2AC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8039C2B0
  c->ctr=c->r[12]; // 8039C2B4
  if (true) { c->lr=0x8039C2BCu; dispatch(c,c->ctr); } // 8039C2B8
  cmps(c,0,(int32_t)c->r[3],0); // 8039C2BC
  if (crb(c,2)) { goto L_8039C6E4; } // 8039C2C0
  c->r[30]=0u+0x00000001u; // 8039C2C4
L_8039C2C8:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8039C2C8
  c->r[3]=c->r[31]|c->r[31]; // 8039C2CC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8039C2D0
  c->ctr=c->r[12]; // 8039C2D4
  if (true) { c->lr=0x8039C2DCu; dispatch(c,c->ctr); } // 8039C2D8
  cmps(c,0,(int32_t)c->r[3],0); // 8039C2DC
  if (crb(c,2)) { goto L_8039C2FC; } // 8039C2E0
  c->r[3]=R32(c->r[29]+0x00000070u); // 8039C2E4
  c->r[0]=0u+0xFFFFFFFFu; // 8039C2E8
  cmpu(c,0,c->r[3],c->r[0]); // 8039C2EC
  if (!crb(c,0)) { goto L_8039C2FC; } // 8039C2F0
  c->r[0]=c->r[3]+0x00000001u; // 8039C2F4
  W32(c->r[29]+0x00000070u,c->r[0]); // 8039C2F8
L_8039C2FC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8039C2FC
  c->r[3]=c->r[31]|c->r[31]; // 8039C300
  c->r[12]=R32(c->r[12]+0x00000018u); // 8039C304
  c->ctr=c->r[12]; // 8039C308
  if (true) { c->lr=0x8039C310u; dispatch(c,c->ctr); } // 8039C30C
  cmps(c,0,(int32_t)c->r[3],0); // 8039C310
  if (!crb(c,2)) { goto L_8039C330; } // 8039C314
  c->r[12]=R32(c->r[29]+0x00000000u); // 8039C318
  c->r[3]=c->r[29]|c->r[29]; // 8039C31C
  c->r[12]=R32(c->r[12]+0x00000028u); // 8039C320
  c->ctr=c->r[12]; // 8039C324
  if (true) { c->lr=0x8039C32Cu; dispatch(c,c->ctr); } // 8039C328
  goto L_8039C6E4; // 8039C32C
L_8039C330:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8039C330
  c->r[3]=c->r[31]|c->r[31]; // 8039C334
  c->r[12]=R32(c->r[12]+0x00000020u); // 8039C338
  c->ctr=c->r[12]; // 8039C33C
  if (true) { c->lr=0x8039C344u; dispatch(c,c->ctr); } // 8039C340
  cmps(c,0,(int32_t)c->r[3],0); // 8039C344
  if (!crb(c,2)) { goto L_8039C6E4; } // 8039C348
  c->r[0]=R8(c->r[29]+0x00000068u); // 8039C34C
  cmps(c,0,(int32_t)c->r[0],0); // 8039C350
  if (crb(c,2)) { goto L_8039C374; } // 8039C354
  c->r[3]=R32(c->r[29]+0x00000060u); // 8039C358
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 8039C35C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8039C360
  if (!crb(c,0)) { goto L_8039C3A4; } // 8039C364
  c->r[0]=c->r[3]+0x00000001u; // 8039C368
  W32(c->r[29]+0x00000060u,c->r[0]); // 8039C36C
  goto L_8039C3A4; // 8039C370
L_8039C374:;
  c->r[3]=R32(c->r[29]+0x00000050u); // 8039C374
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 8039C378
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8039C37C
  if (!crb(c,0)) { goto L_8039C38C; } // 8039C380
  c->r[0]=c->r[3]+0x00000001u; // 8039C384
  W32(c->r[29]+0x00000050u,c->r[0]); // 8039C388
L_8039C38C:;
  c->r[3]=R32(c->r[29]+0x00000088u); // 8039C38C
  c->r[0]=R32(c->r[29]+0x00000084u); // 8039C390
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8039C394
  if (!crb(c,0)) { goto L_8039C3A4; } // 8039C398
  c->r[0]=c->r[3]+0x00000001u; // 8039C39C
  W32(c->r[29]+0x00000088u,c->r[0]); // 8039C3A0
L_8039C3A4:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 8039C3A4
  cmps(c,0,(int32_t)c->r[3],0); // 8039C3A8
  if (crb(c,2)) { goto L_8039C3C8; } // 8039C3AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039C3B0
  c->r[5]=c->r[29]|c->r[29]; // 8039C3B4
  c->r[4]=R32(c->r[29]+0x00000024u); // 8039C3B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8039C3BC
  c->ctr=c->r[12]; // 8039C3C0
  if (true) { c->lr=0x8039C3C8u; dispatch(c,c->ctr); } // 8039C3C4
L_8039C3C8:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 8039C3C8
  cmps(c,0,(int32_t)c->r[3],0); // 8039C3CC
  if (crb(c,2)) { goto L_8039C3F8; } // 8039C3D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039C3D4
  c->r[6]=c->r[29]|c->r[29]; // 8039C3D8
  c->r[4]=c->r[29]+0x00000028u; // 8039C3DC
  c->r[5]=R32(c->r[29]+0x00000078u); // 8039C3E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8039C3E4
  c->r[8]=0u+0xFFFFFFFFu; // 8039C3E8
  c->r[7]=R32(c->r[29]+0x00000024u); // 8039C3EC
  c->ctr=c->r[12]; // 8039C3F0
  if (true) { c->lr=0x8039C3F8u; dispatch(c,c->ctr); } // 8039C3F4
L_8039C3F8:;
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[31]=c->ps1[31]=RF32(ea);} // 8039C3F8
  {uint32_t ea=c->r[29]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C3FC
  c->r[3]=R32(c->r[29]+0x00000010u); // 8039C400
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8039C404
  c->r[4]=R32(c->r[29]+0x00000014u); // 8039C408
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C40C
  cmps(c,0,(int32_t)c->r[4],0); // 8039C410
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8039C414
  if (crb(c,2)) { goto L_8039C424; } // 8039C418
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C41C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8039C420
L_8039C424:;
  c->r[5]=R32(c->r[29]+0x00000084u); // 8039C424
  c->r[0]=R32(c->r[29]+0x00000088u); // 8039C428
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8039C42C
  if (crb(c,0)) { goto L_8039C43C; } // 8039C430
  {uint32_t ea=c->r[29]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C434
  goto L_8039C478; // 8039C438
L_8039C43C:;
  c->r[4]=c->r[0]^0x80000000u; // 8039C43C
  c->r[0]=c->r[5]^0x80000000u; // 8039C440
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8039C444
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039C448
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8039C44C
  {uint32_t ea=c->r[29]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C450
  {uint32_t ea=c->r[29]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C454
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039C458
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039C45C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039C460
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8039C464
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039C468
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039C46C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039C470
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8039C474
L_8039C478:;
  c->r[5]=R32(c->r[29]+0x0000004Cu); // 8039C478
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8039C47C
  c->r[0]=R32(c->r[29]+0x00000050u); // 8039C480
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8039C484
  if (crb(c,0)) { goto L_8039C494; } // 8039C488
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C48C
  goto L_8039C4D0; // 8039C490
L_8039C494:;
  c->r[4]=c->r[0]^0x80000000u; // 8039C494
  c->r[0]=c->r[5]^0x80000000u; // 8039C498
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8039C49C
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039C4A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8039C4A4
  {uint32_t ea=c->r[29]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C4A8
  {uint32_t ea=c->r[29]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C4AC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039C4B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039C4B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039C4B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8039C4BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039C4C0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039C4C4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039C4C8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8039C4CC
L_8039C4D0:;
  c->r[5]=R32(c->r[29]+0x0000005Cu); // 8039C4D0
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8039C4D4
  c->r[0]=R32(c->r[29]+0x00000060u); // 8039C4D8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8039C4DC
  if (crb(c,0)) { goto L_8039C4EC; } // 8039C4E0
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C4E4
  goto L_8039C528; // 8039C4E8
L_8039C4EC:;
  c->r[4]=c->r[0]^0x80000000u; // 8039C4EC
  c->r[0]=c->r[5]^0x80000000u; // 8039C4F0
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8039C4F4
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039C4F8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8039C4FC
  {uint32_t ea=c->r[29]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C500
  {uint32_t ea=c->r[29]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C504
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 8039C508
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039C50C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039C510
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8039C514
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039C518
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039C51C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039C520
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8039C524
L_8039C528:;
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[29]=c->ps1[29]=RF32(ea);} // 8039C528
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 8039C52C
  {uint32_t ea=c->r[29]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C530
  c->r[26]=0u+0x00000001u; // 8039C534
  c->f[28]=c->f[29]; // 8039C538
  {uint32_t ea=c->r[29]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C53C
  {uint32_t ea=c->r[29]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 8039C540
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 8039C544
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[26]=c->ps1[26]=RF32(ea);} // 8039C548
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 8039C54C
  {uint32_t ea=c->r[29]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C550
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[3]); // 8039C554
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C558
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[1]); // 8039C55C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C560
  c->f[27]=c->f[26]; // 8039C564
  {uint32_t ea=c->r[29]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C568
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[2]); // 8039C56C
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 8039C570
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C574
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[1]); // 8039C578
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 8039C57C
  c->lr=0x8039C584u; f_803AA8F0(c); // 8039C580
  cmps(c,0,(int32_t)c->r[3],0); // 8039C584
  if (crb(c,2)) { goto L_8039C598; } // 8039C588
  c->r[3]=R32(c->r[29]+0x00000010u); // 8039C58C
  c->lr=0x8039C594u; f_803AA8E8(c); // 8039C590
  c->r[26]=c->r[3]|c->r[3]; // 8039C594
L_8039C598:;
  c->r[0]=R8(c->r[29]+0x0000009Cu); // 8039C598
  cmps(c,0,(int32_t)c->r[0],0); // 8039C59C
  if (crb(c,2)) { goto L_8039C5A8; } // 8039C5A0
  c->r[26]=R32(c->r[29]+0x000000A0u); // 8039C5A4
L_8039C5A8:;
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[30]=c->ps1[30]=RF32(ea);} // 8039C5A8
  c->r[27]=c->r[29]|c->r[29]; // 8039C5AC
  c->r[28]=c->r[1]+0x00000008u; // 8039C5B0
  c->r[25]=0u+0x00000000u; // 8039C5B4
L_8039C5B8:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[30]);} // 8039C5B8
  c->r[4]=c->r[25]|c->r[25]; // 8039C5BC
  c->r[3]=R32(c->r[29]+0x00000010u); // 8039C5C0
  c->lr=0x8039C5C8u; f_803AA8F8(c); // 8039C5C4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C5C8
  c->r[25]=c->r[25]+0x00000001u; // 8039C5CC
  {uint32_t ea=c->r[27]+0x000000A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C5D0
  cmps(c,0,(int32_t)c->r[25],4); // 8039C5D4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8039C5D8
  c->r[27]=c->r[27]+0x00000004u; // 8039C5DC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8039C5E0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 8039C5E4
  c->r[28]=c->r[28]+0x00000004u; // 8039C5E8
  if (crb(c,0)) { IRQCHK(c); goto L_8039C5B8; } // 8039C5EC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[31]);} // 8039C5F0
  c->r[28]=c->r[1]+0x00000008u; // 8039C5F4
  c->r[25]=0u+0x00000000u; // 8039C5F8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[29]);} // 8039C5FC
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[28]);} // 8039C600
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[27]);} // 8039C604
  W32(c->r[31]+0x00000020u,c->r[26]); // 8039C608
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[26]);} // 8039C60C
L_8039C610:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039C610
  c->r[3]=c->r[31]|c->r[31]; // 8039C614
  c->r[4]=c->r[25]|c->r[25]; // 8039C618
  c->lr=0x8039C620u; f_8039BA14(c); // 8039C61C
  c->r[25]=c->r[25]+0x00000001u; // 8039C620
  c->r[28]=c->r[28]+0x00000004u; // 8039C624
  cmps(c,0,(int32_t)c->r[25],4); // 8039C628
  if (crb(c,0)) { IRQCHK(c); goto L_8039C610; } // 8039C62C
  c->r[0]=R8(c->r[29]+0x00000069u); // 8039C630
  cmps(c,0,(int32_t)c->r[0],0); // 8039C634
  if (crb(c,2)) { goto L_8039C66C; } // 8039C638
  c->r[3]=R32(c->r[29]+0x00000050u); // 8039C63C
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 8039C640
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8039C644
  if (crb(c,0)) { goto L_8039C66C; } // 8039C648
  c->r[0]=0u+0x00000000u; // 8039C64C
  c->r[3]=c->r[29]|c->r[29]; // 8039C650
  W8(c->r[29]+0x00000069u,c->r[0]); // 8039C654
  c->r[12]=R32(c->r[29]+0x00000000u); // 8039C658
  c->r[12]=R32(c->r[12]+0x00000028u); // 8039C65C
  c->ctr=c->r[12]; // 8039C660
  if (true) { c->lr=0x8039C668u; dispatch(c,c->ctr); } // 8039C664
  goto L_8039C6E4; // 8039C668
L_8039C66C:;
  c->r[0]=R8(c->r[29]+0x00000068u); // 8039C66C
  cmps(c,0,(int32_t)c->r[0],0); // 8039C670
  if (crb(c,2)) { goto L_8039C6B0; } // 8039C674
  c->r[3]=R32(c->r[29]+0x00000060u); // 8039C678
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 8039C67C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8039C680
  if (crb(c,0)) { goto L_8039C6B0; } // 8039C684
  c->r[4]=R8(c->r[29]+0x00000067u); // 8039C688
  c->r[0]=0u+0x00000000u; // 8039C68C
  W8(c->r[29]+0x00000068u,c->r[0]); // 8039C690
  cmps(c,0,(int32_t)c->r[4],0); // 8039C694
  if (crb(c,2)) { goto L_8039C6B0; } // 8039C698
  c->r[12]=R32(c->r[31]+0x00000000u); // 8039C69C
  c->r[3]=c->r[31]|c->r[31]; // 8039C6A0
  c->r[12]=R32(c->r[12]+0x00000014u); // 8039C6A4
  c->ctr=c->r[12]; // 8039C6A8
  if (true) { c->lr=0x8039C6B0u; dispatch(c,c->ctr); } // 8039C6AC
L_8039C6B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8039C6B0
  if (crb(c,2)) { goto L_8039C6E4; } // 8039C6B4
  c->r[12]=R32(c->r[31]+0x00000000u); // 8039C6B8
  c->r[3]=c->r[31]|c->r[31]; // 8039C6BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8039C6C0
  c->ctr=c->r[12]; // 8039C6C4
  if (true) { c->lr=0x8039C6CCu; dispatch(c,c->ctr); } // 8039C6C8
  cmps(c,0,(int32_t)c->r[3],0); // 8039C6CC
  if (crb(c,2)) { goto L_8039C6E4; } // 8039C6D0
  c->r[3]=0u+0x00000001u; // 8039C6D4
  c->r[0]=0u+0x00000000u; // 8039C6D8
  W8(c->r[29]+0x00000065u,c->r[3]); // 8039C6DC
  W8(c->r[29]+0x00000064u,c->r[0]); // 8039C6E0
L_8039C6E4:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 8039C6E4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 8039C6E8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 8039C6EC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 8039C6F0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 8039C6F4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 8039C6F8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,28,ea,0,0);} // 8039C6FC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[28]=RF64(ea);} // 8039C700
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,27,ea,0,0);} // 8039C704
  {uint32_t ea=c->r[1]+0x00000060u; c->f[27]=RF64(ea);} // 8039C708
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,26,ea,0,0);} // 8039C70C
  c->r[11]=c->r[1]+0x00000050u; // 8039C710
  {uint32_t ea=c->r[1]+0x00000050u; c->f[26]=RF64(ea);} // 8039C714
  c->lr=0x8039C71Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8039C718
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8039C71C
  c->lr=c->r[0]; // 8039C720
  c->r[1]=c->r[1]+0x000000B0u; // 8039C724
  return; // 8039C728
}

// fn_8039C72C
void f_8039C72C(Ctx* __restrict c) {
  trace_call(0x8039C72Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039C72C
  c->r[0]=c->lr; // 8039C730
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039C734
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039C738
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039C73C
  c->r[30]=c->r[3]|c->r[3]; // 8039C740
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039C744
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039C748
  c->ctr=c->r[12]; // 8039C74C
  if (true) { c->lr=0x8039C754u; dispatch(c,c->ctr); } // 8039C750
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039C754
  c->r[31]=c->r[3]|c->r[3]; // 8039C758
  c->r[12]=R32(c->r[12]+0x00000018u); // 8039C75C
  c->ctr=c->r[12]; // 8039C760
  if (true) { c->lr=0x8039C768u; dispatch(c,c->ctr); } // 8039C764
  cmps(c,0,(int32_t)c->r[3],0); // 8039C768
  if (crb(c,2)) { goto L_8039C798; } // 8039C76C
  c->r[0]=R8(c->r[30]+0x00000069u); // 8039C770
  cmps(c,0,(int32_t)c->r[0],0); // 8039C774
  if (crb(c,2)) { goto L_8039C784; } // 8039C778
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C77C
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 8039C780
L_8039C784:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8039C784
  c->r[3]=c->r[31]|c->r[31]; // 8039C788
  c->r[12]=R32(c->r[12]+0x00000010u); // 8039C78C
  c->ctr=c->r[12]; // 8039C790
  if (true) { c->lr=0x8039C798u; dispatch(c,c->ctr); } // 8039C794
L_8039C798:;
  c->r[31]=0u+0xFFFFFFFFu; // 8039C798
  c->r[3]=c->r[30]|c->r[30]; // 8039C79C
  W32(c->r[30]+0x00000078u,c->r[31]); // 8039C7A0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8039C7A4
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039C7A8
  c->ctr=c->r[12]; // 8039C7AC
  if (true) { c->lr=0x8039C7B4u; dispatch(c,c->ctr); } // 8039C7B0
  W32(c->r[3]+0x00000004u,c->r[31]); // 8039C7B4
  c->r[3]=R32(c->r[30]+0x00000008u); // 8039C7B8
  cmps(c,0,(int32_t)c->r[3],0); // 8039C7BC
  if (crb(c,2)) { goto L_8039C7C8; } // 8039C7C0
  c->lr=0x8039C7C8u; f_803AA360(c); // 8039C7C4
L_8039C7C8:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8039C7C8
  cmps(c,0,(int32_t)c->r[3],0); // 8039C7CC
  if (crb(c,2)) { goto L_8039C7D8; } // 8039C7D0
  c->lr=0x8039C7D8u; f_803AA360(c); // 8039C7D4
L_8039C7D8:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8039C7D8
  c->r[3]=c->r[30]|c->r[30]; // 8039C7DC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8039C7E0
  c->ctr=c->r[12]; // 8039C7E4
  if (true) { c->lr=0x8039C7ECu; dispatch(c,c->ctr); } // 8039C7E8
  cmps(c,0,(int32_t)c->r[3],0); // 8039C7EC
  if (crb(c,2)) { goto L_8039C808; } // 8039C7F0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8039C7F4
  c->r[3]=c->r[30]|c->r[30]; // 8039C7F8
  c->r[12]=R32(c->r[12]+0x00000060u); // 8039C7FC
  c->ctr=c->r[12]; // 8039C800
  if (true) { c->lr=0x8039C808u; dispatch(c,c->ctr); } // 8039C804
L_8039C808:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 8039C808
  cmps(c,0,(int32_t)c->r[0],0); // 8039C80C
  if (crb(c,2)) { goto L_8039C820; } // 8039C810
  c->r[3]=R32(c->r[30]+0x00000010u); // 8039C814
  c->r[4]=c->r[30]|c->r[30]; // 8039C818
  c->lr=0x8039C820u; f_803AB9B8(c); // 8039C81C
L_8039C820:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 8039C820
  c->r[4]=c->r[30]|c->r[30]; // 8039C824
  c->lr=0x8039C82Cu; f_803AAA38(c); // 8039C828
  c->r[3]=R32(c->r[30]+0x00000010u); // 8039C82C
  c->r[4]=c->r[30]|c->r[30]; // 8039C830
  c->lr=0x8039C838u; f_803AA908(c); // 8039C834
  c->r[3]=R32(c->r[30]+0x00000014u); // 8039C838
  cmps(c,0,(int32_t)c->r[3],0); // 8039C83C
  if (crb(c,2)) { goto L_8039C84C; } // 8039C840
  c->r[4]=c->r[30]|c->r[30]; // 8039C844
  c->lr=0x8039C84Cu; f_8039EAE4(c); // 8039C848
L_8039C84C:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 8039C84C
  cmps(c,0,(int32_t)c->r[3],0); // 8039C850
  if (crb(c,2)) { goto L_8039C878; } // 8039C854
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039C858
  c->r[5]=c->r[30]|c->r[30]; // 8039C85C
  c->r[4]=R32(c->r[30]+0x00000024u); // 8039C860
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8039C864
  c->ctr=c->r[12]; // 8039C868
  if (true) { c->lr=0x8039C870u; dispatch(c,c->ctr); } // 8039C86C
  c->r[0]=0u+0x00000000u; // 8039C870
  W32(c->r[30]+0x00000024u,c->r[0]); // 8039C874
L_8039C878:;
  c->r[0]=0u+0x00000000u; // 8039C878
  W8(c->r[30]+0x00000065u,c->r[0]); // 8039C87C
  W8(c->r[30]+0x00000069u,c->r[0]); // 8039C880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039C884
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039C888
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039C88C
  c->lr=c->r[0]; // 8039C890
  c->r[1]=c->r[1]+0x00000010u; // 8039C894
  return; // 8039C898
}

// fn_8039C89C
void f_8039C89C(Ctx* __restrict c) {
  trace_call(0x8039C89Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039C89C
  c->r[0]=c->lr; // 8039C8A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039C8A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039C8A8
  c->r[31]=c->r[3]|c->r[3]; // 8039C8AC
  c->r[0]=R32(c->r[3]+0x00000010u); // 8039C8B0
  W8(c->r[3]+0x00000074u,c->r[4]); // 8039C8B4
  cmps(c,0,(int32_t)c->r[0],0); // 8039C8B8
  if (crb(c,2)) { goto L_8039C8D8; } // 8039C8BC
  c->r[3]=c->r[0]|c->r[0]; // 8039C8C0
  c->r[4]=c->r[31]|c->r[31]; // 8039C8C4
  c->lr=0x8039C8CCu; f_803AAA38(c); // 8039C8C8
  c->r[3]=R32(c->r[31]+0x00000010u); // 8039C8CC
  c->r[4]=c->r[31]|c->r[31]; // 8039C8D0
  c->lr=0x8039C8D8u; f_803AA96C(c); // 8039C8D4
L_8039C8D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039C8D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039C8DC
  c->lr=c->r[0]; // 8039C8E0
  c->r[1]=c->r[1]+0x00000010u; // 8039C8E4
  return; // 8039C8E8
}

// fn_8039C8EC
void f_8039C8EC(Ctx* __restrict c) {
  trace_call(0x8039C8ECu);
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C8EC
  fcmp(c,0,c->f[1],c->f[0]); // 8039C8F0
  if (!crb(c,1)) { goto L_8039C8FC; } // 8039C8F4
  goto L_8039C910; // 8039C8F8
L_8039C8FC:;
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C8FC
  fcmp(c,0,c->f[1],c->f[0]); // 8039C900
  if (!crb(c,0)) { goto L_8039C90C; } // 8039C904
  goto L_8039C910; // 8039C908
L_8039C90C:;
  c->f[0]=c->f[1]; // 8039C90C
L_8039C910:;
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 8039C910
  return; // 8039C914
}

// fn_8039C918
void f_8039C918(Ctx* __restrict c) {
  trace_call(0x8039C918u);
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[5]=c->ps1[5]=RF32(ea);} // 8039C918
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039C91C
  fcmp(c,0,c->f[1],c->f[5]); // 8039C920
  if (!crb(c,1)) { goto L_8039C92C; } // 8039C924
  goto L_8039C940; // 8039C928
L_8039C92C:;
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8039C92C
  fcmp(c,0,c->f[1],c->f[5]); // 8039C930
  if (!crb(c,0)) { goto L_8039C93C; } // 8039C934
  goto L_8039C940; // 8039C938
L_8039C93C:;
  c->f[5]=c->f[1]; // 8039C93C
L_8039C940:;
  c->r[6]=R32(c->r[3]+0x00000084u); // 8039C940
  c->r[0]=R32(c->r[3]+0x00000088u); // 8039C944
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 8039C948
  if (crb(c,0)) { goto L_8039C958; } // 8039C94C
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C950
  goto L_8039C9A0; // 8039C954
L_8039C958:;
  c->r[5]=0u+0x43300000u; // 8039C958
  c->r[0]=c->r[0]^0x80000000u; // 8039C95C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039C960
  c->r[0]=c->r[6]^0x80000000u; // 8039C964
  {uint32_t ea=c->r[2]+0xFFFFEDB0u; c->f[4]=RF64(ea);} // 8039C968
  W32(c->r[1]+0x00000008u,c->r[5]); // 8039C96C
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039C970
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8039C974
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8039C978
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 8039C97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039C980
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8039C984
  W32(c->r[1]+0x00000010u,c->r[5]); // 8039C988
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039C98C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8039C990
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 8039C994
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039C998
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8039C99C
L_8039C9A0:;
  c->r[0]=0u+0x00000000u; // 8039C9A0
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 8039C9A4
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[5]);} // 8039C9A8
  W32(c->r[3]+0x00000084u,c->r[4]); // 8039C9AC
  W32(c->r[3]+0x00000088u,c->r[0]); // 8039C9B0
  c->r[1]=c->r[1]+0x00000020u; // 8039C9B4
  return; // 8039C9B8
}

// fn_8039C9BC
void f_8039C9BC(Ctx* __restrict c) {
  trace_call(0x8039C9BCu);
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[1]);} // 8039C9BC
  return; // 8039C9C0
}

// fn_8039C9C4
void f_8039C9C4(Ctx* __restrict c) {
  trace_call(0x8039C9C4u);
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 8039C9C4
  return; // 8039C9C8
}

// fn_8039C9CC
void f_8039C9CC(Ctx* __restrict c) {
  trace_call(0x8039C9CCu);
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 8039C9CC
  return; // 8039C9D0
}

// fn_8039C9D4
void f_8039C9D4(Ctx* __restrict c) {
  trace_call(0x8039C9D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039C9D4
  c->r[0]=c->lr; // 8039C9D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039C9DC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8039C9E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039C9E4
  c->f[31]=c->f[1]; // 8039C9E8
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039C9EC
  c->ctr=c->r[12]; // 8039C9F0
  if (true) { c->lr=0x8039C9F8u; dispatch(c,c->ctr); } // 8039C9F4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[31]);} // 8039C9F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8039C9FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CA00
  c->lr=c->r[0]; // 8039CA04
  c->r[1]=c->r[1]+0x00000010u; // 8039CA08
  return; // 8039CA0C
}

// fn_8039CA10
void f_8039CA10(Ctx* __restrict c) {
  trace_call(0x8039CA10u);
  c->r[0]=0u+0x00000001u; // 8039CA10
  W32(c->r[3]+0x000000A0u,c->r[4]); // 8039CA14
  W8(c->r[3]+0x0000009Cu,c->r[0]); // 8039CA18
  return; // 8039CA1C
}

// fn_8039CA20
void f_8039CA20(Ctx* __restrict c) {
  trace_call(0x8039CA20u);
  c->r[4]=0u+0x00000001u; // 8039CA20
  c->r[0]=0u+0x00000000u; // 8039CA24
  W32(c->r[3]+0x000000A0u,c->r[4]); // 8039CA28
  W8(c->r[3]+0x0000009Cu,c->r[0]); // 8039CA2C
  return; // 8039CA30
}

// fn_8039CA34
void f_8039CA34(Ctx* __restrict c) {
  trace_call(0x8039CA34u);
  {uint32_t ea=c->r[2]+0xFFFFEDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039CA34
  fcmp(c,0,c->f[1],c->f[0]); // 8039CA38
  if (!crb(c,1)) { goto L_8039CA44; } // 8039CA3C
  goto L_8039CA58; // 8039CA40
L_8039CA44:;
  {uint32_t ea=c->r[2]+0xFFFFEDA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039CA44
  fcmp(c,0,c->f[1],c->f[0]); // 8039CA48
  if (!crb(c,0)) { goto L_8039CA54; } // 8039CA4C
  goto L_8039CA58; // 8039CA50
L_8039CA54:;
  c->f[0]=c->f[1]; // 8039CA54
L_8039CA58:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8039CA58
  c->r[3]=c->r[3]+c->r[0]; // 8039CA5C
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 8039CA60
  return; // 8039CA64
}

// fn_8039CA68
void f_8039CA68(Ctx* __restrict c) {
  trace_call(0x8039CA68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CA68
  c->r[0]=c->lr; // 8039CA6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039CA70
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8039CA74
  c->f[31]=c->f[1]; // 8039CA78
  W32(c->r[1]+0x00000014u,c->r[31]); // 8039CA7C
  c->r[31]=c->r[4]|c->r[4]; // 8039CA80
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039CA84
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039CA88
  c->ctr=c->r[12]; // 8039CA8C
  if (true) { c->lr=0x8039CA94u; dispatch(c,c->ctr); } // 8039CA90
  c->f[1]=c->f[31]; // 8039CA94
  c->r[4]=c->r[31]|c->r[31]; // 8039CA98
  c->lr=0x8039CAA0u; f_8039B9F4(c); // 8039CA9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039CAA0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8039CAA4
  c->r[31]=R32(c->r[1]+0x00000014u); // 8039CAA8
  c->lr=c->r[0]; // 8039CAAC
  c->r[1]=c->r[1]+0x00000020u; // 8039CAB0
  return; // 8039CAB4
}

// fn_8039CAB8
void f_8039CAB8(Ctx* __restrict c) {
  trace_call(0x8039CAB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CAB8
  c->r[0]=c->lr; // 8039CABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CAC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039CAC4
  c->r[31]=c->r[4]|c->r[4]; // 8039CAC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039CACC
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039CAD0
  c->ctr=c->r[12]; // 8039CAD4
  if (true) { c->lr=0x8039CADCu; dispatch(c,c->ctr); } // 8039CAD8
  cmps(c,0,(int32_t)c->r[31],127); // 8039CADC
  if (!crb(c,1)) { goto L_8039CAEC; } // 8039CAE0
  c->r[0]=0u+0x0000007Fu; // 8039CAE4
  goto L_8039CAF4; // 8039CAE8
L_8039CAEC:;
  c->r[0]=sraw(c,c->r[31],31); // 8039CAEC
  c->r[0]=c->r[31]&~c->r[0]; // 8039CAF0
L_8039CAF4:;
  W8(c->r[3]+0x00000068u,c->r[0]); // 8039CAF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039CAF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CAFC
  c->lr=c->r[0]; // 8039CB00
  c->r[1]=c->r[1]+0x00000010u; // 8039CB04
  return; // 8039CB08
}

// fn_8039CB0C
void f_8039CB0C(Ctx* __restrict c) {
  trace_call(0x8039CB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CB0C
  c->r[0]=c->lr; // 8039CB10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CB14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039CB18
  c->r[31]=c->r[4]|c->r[4]; // 8039CB1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039CB20
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039CB24
  c->ctr=c->r[12]; // 8039CB28
  if (true) { c->lr=0x8039CB30u; dispatch(c,c->ctr); } // 8039CB2C
  W32(c->r[3]+0x0000006Cu,c->r[31]); // 8039CB30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039CB34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CB38
  c->lr=c->r[0]; // 8039CB3C
  c->r[1]=c->r[1]+0x00000010u; // 8039CB40
  return; // 8039CB44
}

// fn_8039CB48
void f_8039CB48(Ctx* __restrict c) {
  trace_call(0x8039CB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CB48
  c->r[0]=c->lr; // 8039CB4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CB50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039CB54
  c->r[31]=c->r[4]|c->r[4]; // 8039CB58
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039CB5C
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039CB60
  c->ctr=c->r[12]; // 8039CB64
  if (true) { c->lr=0x8039CB6Cu; dispatch(c,c->ctr); } // 8039CB68
  W32(c->r[3]+0x00000070u,c->r[31]); // 8039CB6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039CB70
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CB74
  c->lr=c->r[0]; // 8039CB78
  c->r[1]=c->r[1]+0x00000010u; // 8039CB7C
  return; // 8039CB80
}

// fn_8039CB84
void f_8039CB84(Ctx* __restrict c) {
  trace_call(0x8039CB84u);
  W32(c->r[3]+0x00000018u,c->r[4]); // 8039CB84
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8039CB88
  W32(c->r[3]+0x00000020u,c->r[6]); // 8039CB8C
  W32(c->r[3]+0x00000024u,c->r[7]); // 8039CB90
  return; // 8039CB94
}

// fn_8039CB98
void f_8039CB98(Ctx* __restrict c) {
  trace_call(0x8039CB98u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8039CB98
  c->r[0]=0u-c->r[3]; // 8039CB9C
  c->r[0]=c->r[0]|c->r[3]; // 8039CBA0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8039CBA4
  return; // 8039CBA8
}

// fn_8039CBAC
void f_8039CBAC(Ctx* __restrict c) {
  trace_call(0x8039CBACu);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8039CBAC
  c->r[0]=0u-c->r[3]; // 8039CBB0
  c->r[0]=c->r[0]|c->r[3]; // 8039CBB4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8039CBB8
  return; // 8039CBBC
}

// fn_8039CBC0
void f_8039CBC0(Ctx* __restrict c) {
  trace_call(0x8039CBC0u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8039CBC0
  f_803AA360(c); return; // 8039CBC4
}

// fn_8039CBC8
void f_8039CBC8(Ctx* __restrict c) {
  trace_call(0x8039CBC8u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8039CBC8
  f_803AA360(c); return; // 8039CBCC
}

// SetId__Q44nw4r3snd6detail10BasicSoundFUl
void f_8039CBD0(Ctx* __restrict c) {
  trace_call(0x8039CBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CBD0
  c->r[0]=c->lr; // 8039CBD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CBD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039CBDC
  c->r[31]=c->r[4]|c->r[4]; // 8039CBE0
  W32(c->r[3]+0x00000078u,c->r[4]); // 8039CBE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039CBE8
  c->r[12]=R32(c->r[12]+0x00000068u); // 8039CBEC
  c->ctr=c->r[12]; // 8039CBF0
  if (true) { c->lr=0x8039CBF8u; dispatch(c,c->ctr); } // 8039CBF4
  W32(c->r[3]+0x00000004u,c->r[31]); // 8039CBF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039CBFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CC00
  c->lr=c->r[0]; // 8039CC04
  c->r[1]=c->r[1]+0x00000010u; // 8039CC08
  return; // 8039CC0C
}

// fn_8039CC10
void f_8039CC10(Ctx* __restrict c) {
  trace_call(0x8039CC10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CC10
  c->r[0]=c->lr; // 8039CC14
  cmps(c,0,(int32_t)c->r[3],0); // 8039CC18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CC1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039CC20
  c->r[31]=c->r[3]|c->r[3]; // 8039CC24
  if (crb(c,2)) { goto L_8039CC38; } // 8039CC28
  cmps(c,0,(int32_t)c->r[4],0); // 8039CC2C
  if (!crb(c,1)) { goto L_8039CC38; } // 8039CC30
  c->lr=0x8039CC38u; f_802896EC(c); // 8039CC34
L_8039CC38:;
  c->r[3]=c->r[31]|c->r[31]; // 8039CC38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039CC3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CC40
  c->lr=c->r[0]; // 8039CC44
  c->r[1]=c->r[1]+0x00000010u; // 8039CC48
  return; // 8039CC4C
}

// fn_8039CC50
void f_8039CC50(Ctx* __restrict c) {
  trace_call(0x8039CC50u);
  c->r[3]=c->r[13]+0xFFFF9FE0u; // 8039CC50
  return; // 8039CC54
}

// fn_8039CC58
void f_8039CC58(Ctx* __restrict c) {
  trace_call(0x8039CC58u);
  c->r[0]=0u+0x00000000u; // 8039CC58
  W32(c->r[13]+0xFFFF9FE0u,c->r[0]); // 8039CC5C
  return; // 8039CC60
}

// fn_8039CC64
void f_8039CC64(Ctx* __restrict c) {
  trace_call(0x8039CC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CC64
  c->r[0]=c->lr; // 8039CC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CC6C
  c->r[0]=R8(c->r[13]+0xFFFF9FE8u); // 8039CC70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039CC74
  if (!crb(c,2)) { goto L_8039CCC8; } // 8039CC78
  c->r[6]=0u+0x806C0000u; // 8039CC7C
  c->r[0]=0u+0x00000000u; // 8039CC80
  c->r[3]=c->r[6]+0xFFFFD868u; // 8039CC84
  c->r[4]=0u+0x803A0000u; // 8039CC88
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039CC8C
  c->r[7]=c->r[3]+0x00000008u; // 8039CC90
  c->r[5]=0u+0x806C0000u; // 8039CC94
  c->r[4]=c->r[4]+0xFFFFCCE0u; // 8039CC98
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039CC9C
  c->r[5]=c->r[5]+0xFFFFD858u; // 8039CCA0
  W32(c->r[6]+0xFFFFD868u,c->r[0]); // 8039CCA4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039CCA8
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039CCAC
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8039CCB0
  W8(c->r[3]+0x00000010u,c->r[0]); // 8039CCB4
  W32(c->r[3]+0x00000014u,c->r[0]); // 8039CCB8
  c->lr=0x8039CCC0u; f_802895A4(c); // 8039CCBC
  c->r[0]=0u+0x00000001u; // 8039CCC0
  W8(c->r[13]+0xFFFF9FE8u,c->r[0]); // 8039CCC4
L_8039CCC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CCC8
  c->r[3]=0u+0x806C0000u; // 8039CCCC
  c->r[3]=c->r[3]+0xFFFFD868u; // 8039CCD0
  c->lr=c->r[0]; // 8039CCD4
  c->r[1]=c->r[1]+0x00000010u; // 8039CCD8
  return; // 8039CCDC
}

// fn_8039CCE0
void f_8039CCE0(Ctx* __restrict c) {
  trace_call(0x8039CCE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CCE0
  c->r[0]=c->lr; // 8039CCE4
  cmps(c,0,(int32_t)c->r[3],0); // 8039CCE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CCEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039CCF0
  c->r[31]=c->r[4]|c->r[4]; // 8039CCF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039CCF8
  c->r[30]=c->r[3]|c->r[3]; // 8039CCFC
  if (crb(c,2)) { goto L_8039CD24; } // 8039CD00
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 8039CD04
  if (crb(c,2)) { goto L_8039CD14; } // 8039CD08
  c->r[4]=0u+0x00000000u; // 8039CD0C
  c->lr=0x8039CD14u; f_803B4FA4(c); // 8039CD10
L_8039CD14:;
  cmps(c,0,(int32_t)c->r[31],0); // 8039CD14
  if (!crb(c,1)) { goto L_8039CD24; } // 8039CD18
  c->r[3]=c->r[30]|c->r[30]; // 8039CD1C
  c->lr=0x8039CD24u; f_802896EC(c); // 8039CD20
L_8039CD24:;
  c->r[3]=c->r[30]|c->r[30]; // 8039CD24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039CD28
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039CD2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CD30
  c->lr=c->r[0]; // 8039CD34
  c->r[1]=c->r[1]+0x00000010u; // 8039CD38
  return; // 8039CD3C
}

// fn_8039CD40
void f_8039CD40(Ctx* __restrict c) {
  trace_call(0x8039CD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CD40
  c->r[0]=c->lr; // 8039CD44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CD48
  c->lr=0x8039CD50u; f_802768B4(c); // 8039CD4C
  c->r[0]=c->r[3]+0x00000001u; // 8039CD50
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)236); // 8039CD54
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CD58
  c->lr=c->r[0]; // 8039CD5C
  c->r[1]=c->r[1]+0x00000010u; // 8039CD60
  return; // 8039CD64
}

// fn_8039CD68
void f_8039CD68(Ctx* __restrict c) {
  trace_call(0x8039CD68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CD68
  c->r[0]=c->lr; // 8039CD6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039CD70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039CD74
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039CD78
  c->r[30]=c->r[5]|c->r[5]; // 8039CD7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039CD80
  c->r[29]=c->r[4]|c->r[4]; // 8039CD84
  W32(c->r[1]+0x00000010u,c->r[28]); // 8039CD88
  c->r[28]=c->r[3]|c->r[3]; // 8039CD8C
  c->lr=0x8039CD94u; f_8025EA10(c); // 8039CD90
  c->r[0]=R8(c->r[28]+0x00000010u); // 8039CD94
  c->r[31]=c->r[3]|c->r[3]; // 8039CD98
  cmps(c,0,(int32_t)c->r[0],0); // 8039CD9C
  if (crb(c,2)) { goto L_8039CDAC; } // 8039CDA0
  c->lr=0x8039CDA8u; f_8025EA38(c); // 8039CDA4
  goto L_8039CDDC; // 8039CDA8
L_8039CDAC:;
  c->r[3]=c->r[28]|c->r[28]; // 8039CDAC
  c->r[4]=c->r[29]|c->r[29]; // 8039CDB0
  c->r[5]=c->r[30]|c->r[30]; // 8039CDB4
  c->r[6]=0u+0x000000ECu; // 8039CDB8
  c->lr=0x8039CDC0u; f_803A082C(c); // 8039CDBC
  c->r[0]=0u+0x00000001u; // 8039CDC0
  W32(c->r[28]+0x00000014u,c->r[3]); // 8039CDC4
  c->r[3]=c->r[31]|c->r[31]; // 8039CDC8
  W32(c->r[28]+0x00000018u,c->r[29]); // 8039CDCC
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 8039CDD0
  W8(c->r[28]+0x00000010u,c->r[0]); // 8039CDD4
  c->lr=0x8039CDDCu; f_8025EA38(c); // 8039CDD8
L_8039CDDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039CDDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039CDE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039CDE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039CDE8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8039CDEC
  c->lr=c->r[0]; // 8039CDF0
  c->r[1]=c->r[1]+0x00000020u; // 8039CDF4
  return; // 8039CDF8
}

// fn_8039CDFC
void f_8039CDFC(Ctx* __restrict c) {
  trace_call(0x8039CDFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CDFC
  c->r[0]=c->lr; // 8039CE00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CE04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039CE08
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039CE0C
  c->r[30]=c->r[3]+0x00000008u; // 8039CE10
  c->r[31]=R32(c->r[3]+0x00000008u); // 8039CE14
  goto L_8039CE30; // 8039CE18
L_8039CE1C:;
  c->r[3]=c->r[31]|c->r[31]; // 8039CE1C
  c->r[31]=R32(c->r[31]+0x00000000u); // 8039CE20
  c->r[3]=c->r[3]+0xFFFFFF1Cu; // 8039CE24
  c->r[4]=0u+0x00000001u; // 8039CE28
  c->lr=0x8039CE30u; f_8039CF68(c); // 8039CE2C
L_8039CE30:;
  cmpu(c,0,c->r[31],c->r[30]); // 8039CE30
  if (!crb(c,2)) { IRQCHK(c); goto L_8039CE1C; } // 8039CE34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CE38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039CE3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039CE40
  c->lr=c->r[0]; // 8039CE44
  c->r[1]=c->r[1]+0x00000010u; // 8039CE48
  return; // 8039CE4C
}

// fn_8039CE50
void f_8039CE50(Ctx* __restrict c) {
  trace_call(0x8039CE50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CE50
  c->r[0]=c->lr; // 8039CE54
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039CE58
  c->r[7]=0u+0x00000001u; // 8039CE5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039CE60
  c->r[6]=0u+0x0000003Cu; // 8039CE64
  {uint32_t ea=c->r[2]+0xFFFFEDBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8039CE68
  c->r[0]=0u+0x000000FFu; // 8039CE6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039CE70
  c->r[31]=0u+0x00000000u; // 8039CE74
  {uint32_t ea=c->r[2]+0xFFFFEDE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039CE78
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039CE7C
  c->r[30]=c->r[3]|c->r[3]; // 8039CE80
  W32(c->r[3]+0x000000E0u,c->r[31]); // 8039CE84
  W32(c->r[3]+0x000000D4u,c->r[4]); // 8039CE88
  W32(c->r[3]+0x000000D8u,c->r[5]); // 8039CE8C
  W8(c->r[3]+0x00000031u,c->r[31]); // 8039CE90
  W8(c->r[3]+0x00000034u,c->r[7]); // 8039CE94
  W8(c->r[3]+0x00000035u,c->r[31]); // 8039CE98
  W32(c->r[3]+0x000000C8u,c->r[31]); // 8039CE9C
  W32(c->r[3]+0x000000C0u,c->r[6]); // 8039CEA0
  W32(c->r[3]+0x000000C4u,c->r[6]); // 8039CEA4
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[2]);} // 8039CEA8
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 8039CEAC
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 8039CEB0
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[2]);} // 8039CEB4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 8039CEB8
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 8039CEBC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 8039CEC0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 8039CEC4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8039CEC8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 8039CECC
  W32(c->r[3]+0x0000004Cu,c->r[31]); // 8039CED0
  W32(c->r[3]+0x00000050u,c->r[7]); // 8039CED4
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[2]);} // 8039CED8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 8039CEDC
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 8039CEE0
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 8039CEE4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 8039CEE8
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[2]);} // 8039CEEC
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 8039CEF0
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 8039CEF4
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[2]);} // 8039CEF8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 8039CEFC
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 8039CF00
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 8039CF04
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 8039CF08
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 8039CF0C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[2]);} // 8039CF10
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 8039CF14
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 8039CF18
  W8(c->r[3]+0x000000B8u,c->r[0]); // 8039CF1C
  W8(c->r[3]+0x000000B9u,c->r[0]); // 8039CF20
  W16(c->r[3]+0x000000BAu,c->r[31]); // 8039CF24
  W16(c->r[3]+0x000000BCu,c->r[31]); // 8039CF28
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8039CF2C
  W32(c->r[3]+0x000000A4u,c->r[31]); // 8039CF30
  W32(c->r[3]+0x000000A0u,c->r[31]); // 8039CF34
  c->lr=0x8039CF3Cu; f_8039E61C(c); // 8039CF38
  c->r[3]=c->r[30]+0x00000018u; // 8039CF3C
  c->lr=0x8039CF44u; f_803A0AE4(c); // 8039CF40
  W8(c->r[30]+0x00000030u,c->r[31]); // 8039CF44
  W32(c->r[30]+0x000000CCu,c->r[31]); // 8039CF48
  W32(c->r[30]+0x000000D0u,c->r[31]); // 8039CF4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039CF50
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039CF54
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039CF58
  c->lr=c->r[0]; // 8039CF5C
  c->r[1]=c->r[1]+0x00000010u; // 8039CF60
  return; // 8039CF64
}

// fn_8039CF68
void f_8039CF68(Ctx* __restrict c) {
  trace_call(0x8039CF68u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039CF68
  c->r[0]=c->lr; // 8039CF6C
  W32(c->r[1]+0x00000134u,c->r[0]); // 8039CF70
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 8039CF74
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 8039CF78
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 8039CF7C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 8039CF80
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 8039CF84
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 8039CF88
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[28]);} // 8039CF8C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,28,ea,0,0);} // 8039CF90
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[27]);} // 8039CF94
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,27,ea,0,0);} // 8039CF98
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[26]);} // 8039CF9C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,26,ea,0,0);} // 8039CFA0
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[25]);} // 8039CFA4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,25,ea,0,0);} // 8039CFA8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[24]);} // 8039CFAC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,24,ea,0,0);} // 8039CFB0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[23]);} // 8039CFB4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,23,ea,0,0);} // 8039CFB8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[22]);} // 8039CFBC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,22,ea,0,0);} // 8039CFC0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[21]);} // 8039CFC4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,21,ea,0,0);} // 8039CFC8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[20]);} // 8039CFCC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,20,ea,0,0);} // 8039CFD0
  c->r[5]=0u+0x43300000u; // 8039CFD4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8039CFD8
  c->r[31]=c->r[4]|c->r[4]; // 8039CFDC
  W32(c->r[1]+0x00000068u,c->r[30]); // 8039CFE0
  c->r[30]=c->r[3]|c->r[3]; // 8039CFE4
  W32(c->r[1]+0x00000064u,c->r[29]); // 8039CFE8
  W32(c->r[1]+0x00000060u,c->r[28]); // 8039CFEC
  c->r[0]=R8(c->r[3]+0x00000032u); // 8039CFF0
  W32(c->r[1]+0x00000048u,c->r[5]); // 8039CFF4
  cmps(c,0,(int32_t)c->r[0],0); // 8039CFF8
  W32(c->r[1]+0x00000050u,c->r[5]); // 8039CFFC
  if (crb(c,2)) { goto L_8039D63C; } // 8039D000
  c->r[0]=R8(c->r[3]+0x00000031u); // 8039D004
  cmps(c,0,(int32_t)c->r[0],0); // 8039D008
  if (crb(c,2)) { goto L_8039D014; } // 8039D00C
  c->r[31]=0u+0x00000000u; // 8039D010
L_8039D014:;
  c->r[3]=c->r[3]+0x00000018u; // 8039D014
  c->lr=0x8039D01Cu; f_803A0BB8(c); // 8039D018
  c->r[3]=R16(c->r[30]+0x000000BCu); // 8039D01C
  c->f[31]=c->f[1]; // 8039D020
  c->r[0]=R16(c->r[30]+0x000000BAu); // 8039D024
  cmpu(c,0,c->r[3],c->r[0]); // 8039D028
  if (!crb(c,0)) { goto L_8039D038; } // 8039D02C
  c->r[0]=c->r[3]+0x00000001u; // 8039D030
  W16(c->r[30]+0x000000BCu,c->r[0]); // 8039D034
L_8039D038:;
  {uint32_t ea=c->r[2]+0xFFFFEDBCu; c->f[30]=c->ps1[30]=RF32(ea);} // 8039D038
  {uint32_t ea=c->r[30]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D03C
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D040
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 8039D044
  c->r[4]=R16(c->r[30]+0x000000BAu); // 8039D048
  c->r[3]=R16(c->r[30]+0x000000BCu); // 8039D04C
  cmpu(c,0,c->r[3],c->r[4]); // 8039D050
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 8039D054
  if (crb(c,0)) { goto L_8039D064; } // 8039D058
  c->r[0]=R8(c->r[30]+0x000000B9u); // 8039D05C
  goto L_8039D080; // 8039D060
L_8039D064:;
  c->r[5]=R8(c->r[30]+0x000000B8u); // 8039D064
  c->r[0]=R8(c->r[30]+0x000000B9u); // 8039D068
  c->r[0]=c->r[0]-c->r[5]; // 8039D06C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 8039D070
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 8039D074
  c->r[0]=c->r[5]+c->r[0]; // 8039D078
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8039D07C
L_8039D080:;
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8039D080
  c->r[3]=c->r[30]|c->r[30]; // 8039D084
  {uint32_t ea=c->r[2]+0xFFFFEDD0u; c->f[2]=RF64(ea);} // 8039D088
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 8039D08C
  {uint32_t ea=c->r[2]+0xFFFFEDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D090
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8039D094
  {uint32_t ea=c->r[2]+0xFFFFEDBCu; c->f[29]=c->ps1[29]=RF32(ea);} // 8039D098
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039D09C
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 8039D0A0
  c->lr=0x8039D0A8u; f_8039E670(c); // 8039D0A4
  c->lr=0x8039D0ACu; f_803B2EA4(c); // 8039D0A8
  c->r[0]=R8(c->r[30]+0x00000030u); // 8039D0AC
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 8039D0B0
  cmpu(c,0,c->r[0],0x00000001u); // 8039D0B4
  if (!crb(c,2)) { goto L_8039D0CC; } // 8039D0B8
  {uint32_t ea=c->r[2]+0xFFFFEDC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D0BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 8039D0C0
  c->lr=0x8039D0C8u; f_803B2EA4(c); // 8039D0C4
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 8039D0C8
L_8039D0CC:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8039D0CC
  cmps(c,0,(int32_t)c->r[0],3); // 8039D0D0
  if (!crb(c,2)) { goto L_8039D2B0; } // 8039D0D4
  c->r[0]=R32(c->r[30]+0x000000D4u); // 8039D0D8
  cmps(c,0,(int32_t)c->r[0],0); // 8039D0DC
  if (crb(c,2)) { goto L_8039D1C8; } // 8039D0E0
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D0E4
  fcmp(c,0,c->f[0],c->f[29]); // 8039D0E8
  if (!crb(c,2)) { goto L_8039D2B0; } // 8039D0EC
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D0F0
  cmps(c,0,(int32_t)c->r[3],0); // 8039D0F4
  if (crb(c,2)) { goto L_8039D63C; } // 8039D0F8
  c->lr=0x8039D100u; f_803B0CDC(c); // 8039D0FC
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D100
  c->lr=0x8039D108u; f_803B0940(c); // 8039D104
  c->r[0]=R8(c->r[30]+0x00000033u); // 8039D108
  c->r[7]=0u+0x00000000u; // 8039D10C
  W32(c->r[30]+0x000000DCu,c->r[7]); // 8039D110
  cmps(c,0,(int32_t)c->r[0],0); // 8039D114
  W8(c->r[30]+0x00000031u,c->r[7]); // 8039D118
  W8(c->r[30]+0x00000032u,c->r[7]); // 8039D11C
  if (crb(c,2)) { goto L_8039D1A4; } // 8039D120
  W8(c->r[30]+0x00000033u,c->r[7]); // 8039D124
  c->r[0]=R8(c->r[13]+0xFFFF9FE8u); // 8039D128
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039D12C
  if (!crb(c,2)) { goto L_8039D17C; } // 8039D130
  c->r[6]=0u+0x806C0000u; // 8039D134
  c->r[4]=0u+0x803A0000u; // 8039D138
  c->r[3]=c->r[6]+0xFFFFD868u; // 8039D13C
  c->r[5]=0u+0x806C0000u; // 8039D140
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039D144
  c->r[8]=c->r[3]+0x00000008u; // 8039D148
  c->r[4]=c->r[4]+0xFFFFCCE0u; // 8039D14C
  c->r[5]=c->r[5]+0xFFFFD858u; // 8039D150
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8039D154
  W32(c->r[6]+0xFFFFD868u,c->r[7]); // 8039D158
  W32(c->r[3]+0x00000004u,c->r[7]); // 8039D15C
  W32(c->r[3]+0x00000008u,c->r[8]); // 8039D160
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 8039D164
  W8(c->r[3]+0x00000010u,c->r[7]); // 8039D168
  W32(c->r[3]+0x00000014u,c->r[7]); // 8039D16C
  c->lr=0x8039D174u; f_802895A4(c); // 8039D170
  c->r[0]=0u+0x00000001u; // 8039D174
  W8(c->r[13]+0xFFFF9FE8u,c->r[0]); // 8039D178
L_8039D17C:;
  c->r[31]=0u+0x806C0000u; // 8039D17C
  c->r[4]=c->r[30]+0x000000E4u; // 8039D180
  c->r[31]=c->r[31]+0xFFFFD868u; // 8039D184
  c->r[3]=c->r[31]+0x00000004u; // 8039D188
  c->lr=0x8039D190u; f_803B50E0(c); // 8039D18C
  cmps(c,0,(int32_t)c->r[30],0); // 8039D190
  if (crb(c,2)) { goto L_8039D1A4; } // 8039D194
  c->r[3]=c->r[31]|c->r[31]; // 8039D198
  c->r[4]=c->r[30]|c->r[30]; // 8039D19C
  c->lr=0x8039D1A4u; f_803A0A9C(c); // 8039D1A0
L_8039D1A4:;
  c->r[12]=R32(c->r[30]+0x000000D4u); // 8039D1A4
  cmps(c,0,(int32_t)c->r[12],0); // 8039D1A8
  if (crb(c,2)) { goto L_8039D63C; } // 8039D1AC
  c->r[3]=c->r[30]|c->r[30]; // 8039D1B0
  c->r[5]=R32(c->r[30]+0x000000D8u); // 8039D1B4
  c->r[4]=0u+0x00000000u; // 8039D1B8
  c->ctr=c->r[12]; // 8039D1BC
  if (true) { c->lr=0x8039D1C4u; dispatch(c,c->ctr); } // 8039D1C0
  goto L_8039D63C; // 8039D1C4
L_8039D1C8:;
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[29]); // 8039D1C8
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D1CC
  fcmp(c,0,c->f[1],c->f[0]); // 8039D1D0
  if (!crb(c,2)) { goto L_8039D2B0; } // 8039D1D4
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D1D8
  cmps(c,0,(int32_t)c->r[3],0); // 8039D1DC
  if (crb(c,2)) { goto L_8039D63C; } // 8039D1E0
  c->lr=0x8039D1E8u; f_803B0CDC(c); // 8039D1E4
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D1E8
  c->lr=0x8039D1F0u; f_803B0940(c); // 8039D1EC
  c->r[0]=R8(c->r[30]+0x00000033u); // 8039D1F0
  c->r[7]=0u+0x00000000u; // 8039D1F4
  W32(c->r[30]+0x000000DCu,c->r[7]); // 8039D1F8
  cmps(c,0,(int32_t)c->r[0],0); // 8039D1FC
  W8(c->r[30]+0x00000031u,c->r[7]); // 8039D200
  W8(c->r[30]+0x00000032u,c->r[7]); // 8039D204
  if (crb(c,2)) { goto L_8039D28C; } // 8039D208
  W8(c->r[30]+0x00000033u,c->r[7]); // 8039D20C
  c->r[0]=R8(c->r[13]+0xFFFF9FE8u); // 8039D210
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039D214
  if (!crb(c,2)) { goto L_8039D264; } // 8039D218
  c->r[6]=0u+0x806C0000u; // 8039D21C
  c->r[4]=0u+0x803A0000u; // 8039D220
  c->r[3]=c->r[6]+0xFFFFD868u; // 8039D224
  c->r[5]=0u+0x806C0000u; // 8039D228
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039D22C
  c->r[8]=c->r[3]+0x00000008u; // 8039D230
  c->r[4]=c->r[4]+0xFFFFCCE0u; // 8039D234
  c->r[5]=c->r[5]+0xFFFFD858u; // 8039D238
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8039D23C
  W32(c->r[6]+0xFFFFD868u,c->r[7]); // 8039D240
  W32(c->r[3]+0x00000004u,c->r[7]); // 8039D244
  W32(c->r[3]+0x00000008u,c->r[8]); // 8039D248
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 8039D24C
  W8(c->r[3]+0x00000010u,c->r[7]); // 8039D250
  W32(c->r[3]+0x00000014u,c->r[7]); // 8039D254
  c->lr=0x8039D25Cu; f_802895A4(c); // 8039D258
  c->r[0]=0u+0x00000001u; // 8039D25C
  W8(c->r[13]+0xFFFF9FE8u,c->r[0]); // 8039D260
L_8039D264:;
  c->r[31]=0u+0x806C0000u; // 8039D264
  c->r[4]=c->r[30]+0x000000E4u; // 8039D268
  c->r[31]=c->r[31]+0xFFFFD868u; // 8039D26C
  c->r[3]=c->r[31]+0x00000004u; // 8039D270
  c->lr=0x8039D278u; f_803B50E0(c); // 8039D274
  cmps(c,0,(int32_t)c->r[30],0); // 8039D278
  if (crb(c,2)) { goto L_8039D28C; } // 8039D27C
  c->r[3]=c->r[31]|c->r[31]; // 8039D280
  c->r[4]=c->r[30]|c->r[30]; // 8039D284
  c->lr=0x8039D28Cu; f_803A0A9C(c); // 8039D288
L_8039D28C:;
  c->r[12]=R32(c->r[30]+0x000000D4u); // 8039D28C
  cmps(c,0,(int32_t)c->r[12],0); // 8039D290
  if (crb(c,2)) { goto L_8039D63C; } // 8039D294
  c->r[3]=c->r[30]|c->r[30]; // 8039D298
  c->r[5]=R32(c->r[30]+0x000000D8u); // 8039D29C
  c->r[4]=0u+0x00000000u; // 8039D2A0
  c->ctr=c->r[12]; // 8039D2A4
  if (true) { c->lr=0x8039D2ACu; dispatch(c,c->ctr); } // 8039D2A8
  goto L_8039D63C; // 8039D2AC
L_8039D2B0:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 8039D2B0
  c->r[0]=R32(c->r[30]+0x000000C0u); // 8039D2B4
  {uint32_t ea=c->r[2]+0xFFFFEDD8u; c->f[3]=RF64(ea);} // 8039D2B8
  c->r[0]=c->r[0]-c->r[3]; // 8039D2BC
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8039D2C0
  c->r[0]=c->r[0]^0x80000000u; // 8039D2C4
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D2C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8039D2CC
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8039D2D0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 8039D2D4
  fcmp(c,0,c->f[1],c->f[2]); // 8039D2D8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8039D2DC
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 8039D2E0
  if (!crb(c,2)) { goto L_8039D2EC; } // 8039D2E4
  goto L_8039D32C; // 8039D2E8
L_8039D2EC:;
  c->r[0]=R32(c->r[30]+0x000000A0u); // 8039D2EC
  c->r[4]=R32(c->r[30]+0x000000A4u); // 8039D2F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8039D2F4
  if (crb(c,0)) { goto L_8039D300; } // 8039D2F8
  goto L_8039D32C; // 8039D2FC
L_8039D300:;
  c->r[3]=c->r[4]-c->r[0]; // 8039D300
  c->r[0]=c->r[4]^0x80000000u; // 8039D304
  c->r[3]=c->r[3]^0x80000000u; // 8039D308
  W32(c->r[1]+0x00000054u,c->r[0]); // 8039D30C
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 8039D310
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 8039D314
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 8039D318
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8039D31C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8039D320
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8039D324
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8039D328
L_8039D32C:;
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[1]); // 8039D32C
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D330
  c->r[0]=R8(c->r[30]+0x00000030u); // 8039D334
  cmps(c,0,(int32_t)c->r[0],0); // 8039D338
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 8039D33C
  if (!crb(c,2)) { goto L_8039D348; } // 8039D340
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[31]); // 8039D344
L_8039D348:;
  {uint32_t ea=c->r[2]+0xFFFFEDC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D348
  {uint32_t ea=c->r[2]+0xFFFFEDBCu; c->f[20]=c->ps1[20]=RF32(ea);} // 8039D34C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 8039D350
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039D354
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D358
  c->f[20]=c->ps1[20]=S(c->f[20]*c->f[2]); // 8039D35C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8039D360
  c->f[20]=c->ps1[20]=S(c->f[20]*c->f[1]); // 8039D364
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 8039D368
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 8039D36C
  c->lr=0x8039D374u; f_803B2D14(c); // 8039D370
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[27]=c->ps1[27]=RF32(ea);} // 8039D374
  c->f[28]=c->ps1[28]=S(c->f[1]*c->f[20]); // 8039D378
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D37C
  c->r[0]=R8(c->r[30]+0x00000030u); // 8039D380
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 8039D384
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D388
  cmpu(c,0,c->r[0],0x00000002u); // 8039D38C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 8039D390
  if (!crb(c,2)) { goto L_8039D39C; } // 8039D394
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[31]); // 8039D398
L_8039D39C:;
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8039D39C
  cmps(c,0,(int32_t)c->r[31],0); // 8039D3A0
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D3A4
  c->f[8]=c->f[31]; // 8039D3A8
  {uint32_t ea=c->r[2]+0xFFFFEDBCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8039D3AC
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8039D3B0
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8039D3B4
  {uint32_t ea=c->r[30]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D3B8
  c->f[26]=c->f[4]; // 8039D3BC
  {uint32_t ea=c->r[30]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D3C0
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[2]); // 8039D3C4
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 8039D3C8
  c->f[6]=c->ps1[6]=S(c->f[8]+c->f[1]); // 8039D3CC
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 8039D3D0
  c->f[5]=c->ps1[5]=S(c->f[8]+c->f[0]); // 8039D3D4
  c->f[21]=c->ps1[21]=S(c->f[8]+c->f[10]); // 8039D3D8
  c->f[22]=c->ps1[22]=S(c->f[8]+c->f[9]); // 8039D3DC
  {uint32_t ea=c->r[30]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 8039D3E0
  {uint32_t ea=c->r[30]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039D3E4
  c->f[25]=c->f[4]; // 8039D3E8
  {uint32_t ea=c->r[30]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D3EC
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D3F0
  {uint32_t ea=c->r[30]+0x00000070u; c->f[23]=c->ps1[23]=RF32(ea);} // 8039D3F4
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 8039D3F8
  {uint32_t ea=c->r[30]+0x00000080u; c->f[13]=c->ps1[13]=RF32(ea);} // 8039D3FC
  c->f[1]=c->ps1[1]=S(c->f[8]+c->f[1]); // 8039D400
  {uint32_t ea=c->r[30]+0x00000090u; c->f[12]=c->ps1[12]=RF32(ea);} // 8039D404
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 8039D408
  {uint32_t ea=c->r[30]+0x00000074u; c->f[11]=c->ps1[11]=RF32(ea);} // 8039D40C
  {uint32_t ea=c->r[30]+0x00000084u; c->f[10]=c->ps1[10]=RF32(ea);} // 8039D410
  c->f[23]=c->ps1[23]=S(c->f[4]*c->f[23]); // 8039D414
  {uint32_t ea=c->r[30]+0x00000048u; c->f[24]=c->ps1[24]=RF32(ea);} // 8039D418
  c->f[13]=c->ps1[13]=S(c->f[8]+c->f[13]); // 8039D41C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[20]=c->ps1[20]=RF32(ea);} // 8039D420
  c->f[12]=c->ps1[12]=S(c->f[8]+c->f[12]); // 8039D424
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[8]);} // 8039D428
  c->f[11]=c->ps1[11]=S(c->f[4]*c->f[11]); // 8039D42C
  {uint32_t ea=c->r[30]+0x00000094u; c->f[9]=c->ps1[9]=RF32(ea);} // 8039D430
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[8]);} // 8039D434
  c->f[10]=c->ps1[10]=S(c->f[8]+c->f[10]); // 8039D438
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[24]); // 8039D43C
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[24]=c->ps1[24]=RF32(ea);} // 8039D440
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[8]);} // 8039D444
  c->f[8]=c->ps1[8]=S(c->f[8]+c->f[9]); // 8039D448
  {uint32_t ea=c->r[30]+0x00000054u; c->f[9]=c->ps1[9]=RF32(ea);} // 8039D44C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 8039D450
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[4]);} // 8039D454
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[20]); // 8039D458
  {uint32_t ea=c->r[30]+0x00000058u; c->f[4]=c->ps1[4]=RF32(ea);} // 8039D45C
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[9]); // 8039D460
  c->r[29]=R32(c->r[30]+0x0000004Cu); // 8039D464
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 8039D468
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[7]);} // 8039D46C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[6]);} // 8039D470
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[5]);} // 8039D474
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 8039D478
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 8039D47C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8039D480
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8039D484
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[21]);} // 8039D488
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[22]);} // 8039D48C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[23]);} // 8039D490
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[13]);} // 8039D494
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[12]);} // 8039D498
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[11]);} // 8039D49C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[10]);} // 8039D4A0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[8]);} // 8039D4A4
  if (crb(c,2)) { goto L_8039D4EC; } // 8039D4A8
  c->r[0]=R8(c->r[30]+0x00000034u); // 8039D4AC
  cmps(c,0,(int32_t)c->r[0],0); // 8039D4B0
  if (crb(c,2)) { goto L_8039D4D4; } // 8039D4B4
  c->r[3]=R32(c->r[30]+0x000000A0u); // 8039D4B8
  c->r[4]=R32(c->r[30]+0x000000A4u); // 8039D4BC
  c->r[0]=c->r[3]+0x00000003u; // 8039D4C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8039D4C4
  W32(c->r[30]+0x000000A0u,c->r[0]); // 8039D4C8
  if (!crb(c,1)) { goto L_8039D4D4; } // 8039D4CC
  W32(c->r[30]+0x000000A0u,c->r[4]); // 8039D4D0
L_8039D4D4:;
  c->r[3]=c->r[30]+0x00000018u; // 8039D4D4
  c->r[4]=0u+0x00000003u; // 8039D4D8
  c->lr=0x8039D4E0u; f_803A0B1C(c); // 8039D4DC
  c->r[3]=c->r[30]|c->r[30]; // 8039D4E0
  c->r[4]=0u+0x00000003u; // 8039D4E4
  c->lr=0x8039D4ECu; f_8039E69C(c); // 8039D4E8
L_8039D4EC:;
  c->r[3]=c->r[30]+0x00000018u; // 8039D4EC
  c->lr=0x8039D4F4u; f_803A0BB8(c); // 8039D4F0
  c->f[23]=c->f[1]; // 8039D4F4
  {uint32_t ea=c->r[2]+0xFFFFEDBCu; c->f[20]=c->ps1[20]=RF32(ea);} // 8039D4F8
  c->r[3]=c->r[30]|c->r[30]; // 8039D4FC
  c->lr=0x8039D504u; f_8039E670(c); // 8039D500
  c->lr=0x8039D508u; f_803B2EA4(c); // 8039D504
  c->r[0]=R8(c->r[30]+0x00000030u); // 8039D508
  c->f[20]=c->ps1[20]=S(c->f[20]*c->f[1]); // 8039D50C
  cmpu(c,0,c->r[0],0x00000001u); // 8039D510
  if (!crb(c,2)) { goto L_8039D528; } // 8039D514
  {uint32_t ea=c->r[2]+0xFFFFEDC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039D518
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[23]); // 8039D51C
  c->lr=0x8039D524u; f_803B2EA4(c); // 8039D520
  c->f[20]=c->ps1[20]=S(c->f[20]*c->f[1]); // 8039D524
L_8039D528:;
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D528
  cmps(c,0,(int32_t)c->r[3],0); // 8039D52C
  if (crb(c,2)) { goto L_8039D63C; } // 8039D530
  c->r[4]=R32(c->r[30]+0x000000CCu); // 8039D534
  c->lr=0x8039D53Cu; f_803B0EF0(c); // 8039D538
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D53C
  c->r[4]=R32(c->r[30]+0x000000D0u); // 8039D540
  c->lr=0x8039D548u; f_803B0F10(c); // 8039D544
  c->f[1]=c->f[30]; // 8039D548
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D54C
  c->lr=0x8039D554u; f_803B0DE8(c); // 8039D550
  c->f[1]=c->f[20]; // 8039D554
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D558
  c->f[2]=c->f[29]; // 8039D55C
  c->lr=0x8039D564u; f_803B0E2C(c); // 8039D560
  c->f[1]=c->f[28]; // 8039D564
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D568
  c->lr=0x8039D570u; f_803B0ED0(c); // 8039D56C
  c->f[1]=c->f[27]; // 8039D570
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D574
  c->lr=0x8039D57Cu; f_803B0F30(c); // 8039D578
  c->f[1]=c->f[31]; // 8039D57C
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D580
  c->lr=0x8039D588u; f_803B0F50(c); // 8039D584
  c->f[1]=c->f[26]; // 8039D588
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D58C
  c->lr=0x8039D594u; f_803B0F70(c); // 8039D590
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D594
  c->r[4]=c->r[29]|c->r[29]; // 8039D598
  c->lr=0x8039D5A0u; f_803B0FB4(c); // 8039D59C
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D5A0
  c->r[4]=R32(c->r[30]+0x00000050u); // 8039D5A4
  c->lr=0x8039D5ACu; f_803B0FEC(c); // 8039D5A8
  c->f[1]=c->f[25]; // 8039D5AC
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D5B0
  c->lr=0x8039D5B8u; f_803B100C(c); // 8039D5B4
  c->f[1]=c->f[24]; // 8039D5B8
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D5BC
  c->lr=0x8039D5C4u; f_803B1050(c); // 8039D5C0
  c->r[29]=c->r[1]+0x00000038u; // 8039D5C4
  c->r[31]=0u+0x00000000u; // 8039D5C8
L_8039D5CC:;
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D5CC
  c->r[4]=c->r[31]|c->r[31]; // 8039D5D0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D5D4
  c->lr=0x8039D5DCu; f_803B1098(c); // 8039D5D8
  c->r[31]=c->r[31]+0x00000001u; // 8039D5DC
  c->r[29]=c->r[29]+0x00000004u; // 8039D5E0
  cmps(c,0,(int32_t)c->r[31],3); // 8039D5E4
  if (crb(c,0)) { IRQCHK(c); goto L_8039D5CC; } // 8039D5E8
  c->r[31]=c->r[1]+0x00000028u; // 8039D5EC
  c->r[29]=c->r[1]+0x00000018u; // 8039D5F0
  c->r[28]=0u+0x00000000u; // 8039D5F4
L_8039D5F8:;
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D5F8
  c->r[4]=c->r[28]|c->r[28]; // 8039D5FC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D600
  c->lr=0x8039D608u; f_803B10E4(c); // 8039D604
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D608
  c->r[4]=c->r[28]|c->r[28]; // 8039D60C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D610
  c->lr=0x8039D618u; f_803B1130(c); // 8039D614
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D618
  c->r[4]=c->r[28]|c->r[28]; // 8039D61C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D620
  c->lr=0x8039D628u; f_803B1180(c); // 8039D624
  c->r[28]=c->r[28]+0x00000001u; // 8039D628
  c->r[29]=c->r[29]+0x00000004u; // 8039D62C
  cmps(c,0,(int32_t)c->r[28],4); // 8039D630
  c->r[31]=c->r[31]+0x00000004u; // 8039D634
  if (crb(c,0)) { IRQCHK(c); goto L_8039D5F8; } // 8039D638
L_8039D63C:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 8039D63C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 8039D640
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 8039D644
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 8039D648
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 8039D64C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 8039D650
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,28,ea,0,0);} // 8039D654
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[28]=RF64(ea);} // 8039D658
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,27,ea,0,0);} // 8039D65C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[27]=RF64(ea);} // 8039D660
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,26,ea,0,0);} // 8039D664
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[26]=RF64(ea);} // 8039D668
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,25,ea,0,0);} // 8039D66C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[25]=RF64(ea);} // 8039D670
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,24,ea,0,0);} // 8039D674
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[24]=RF64(ea);} // 8039D678
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,23,ea,0,0);} // 8039D67C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[23]=RF64(ea);} // 8039D680
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,22,ea,0,0);} // 8039D684
  {uint32_t ea=c->r[1]+0x00000090u; c->f[22]=RF64(ea);} // 8039D688
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,21,ea,0,0);} // 8039D68C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[21]=RF64(ea);} // 8039D690
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,20,ea,0,0);} // 8039D694
  {uint32_t ea=c->r[1]+0x00000070u; c->f[20]=RF64(ea);} // 8039D698
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8039D69C
  c->r[30]=R32(c->r[1]+0x00000068u); // 8039D6A0
  c->r[29]=R32(c->r[1]+0x00000064u); // 8039D6A4
  c->r[0]=R32(c->r[1]+0x00000134u); // 8039D6A8
  c->r[28]=R32(c->r[1]+0x00000060u); // 8039D6AC
  c->lr=c->r[0]; // 8039D6B0
  c->r[1]=c->r[1]+0x00000130u; // 8039D6B4
  return; // 8039D6B8
}

// fn_8039D6BC
void f_8039D6BC(Ctx* __restrict c) {
  trace_call(0x8039D6BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039D6BC
  c->r[0]=c->lr; // 8039D6C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039D6C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039D6C8
  c->r[31]=c->r[6]|c->r[6]; // 8039D6CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039D6D0
  c->r[30]=c->r[4]|c->r[4]; // 8039D6D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039D6D8
  c->r[29]=c->r[3]|c->r[3]; // 8039D6DC
  W32(c->r[3]+0x000000C8u,c->r[5]); // 8039D6E0
  c->r[3]=c->r[3]+0x00000018u; // 8039D6E4
  c->lr=0x8039D6ECu; f_803A0B08(c); // 8039D6E8
  {uint32_t ea=c->r[2]+0xFFFFEDE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039D6EC
  c->r[3]=c->r[29]|c->r[29]; // 8039D6F0
  c->lr=0x8039D6F8u; f_8039E658(c); // 8039D6F4
  c->r[0]=0u+0x00000000u; // 8039D6F8
  c->r[3]=R32(c->r[29]+0x000000DCu); // 8039D6FC
  W32(c->r[29]+0x000000A0u,c->r[0]); // 8039D700
  c->r[4]=c->r[30]|c->r[30]; // 8039D704
  c->r[5]=c->r[31]|c->r[31]; // 8039D708
  c->lr=0x8039D710u; f_803B0A0C(c); // 8039D70C
  c->r[3]=R32(c->r[29]+0x000000DCu); // 8039D710
  c->lr=0x8039D718u; f_803B0CBC(c); // 8039D714
  c->r[0]=0u+0x00000001u; // 8039D718
  W8(c->r[29]+0x00000032u,c->r[0]); // 8039D71C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039D720
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039D724
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039D728
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039D72C
  c->lr=c->r[0]; // 8039D730
  c->r[1]=c->r[1]+0x00000020u; // 8039D734
  return; // 8039D738
}

// Release__Q44nw4r3snd6detail7ChannelFv
void f_8039D73C(Ctx* __restrict c) {
  trace_call(0x8039D73Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039D73C
  c->r[0]=c->lr; // 8039D740
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039D744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039D748
  c->r[31]=c->r[3]|c->r[3]; // 8039D74C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8039D750
  cmps(c,0,(int32_t)c->r[0],3); // 8039D754
  if (crb(c,2)) { goto L_8039D788; } // 8039D758
  c->r[4]=R32(c->r[3]+0x000000DCu); // 8039D75C
  cmps(c,0,(int32_t)c->r[4],0); // 8039D760
  if (crb(c,2)) { goto L_8039D780; } // 8039D764
  c->r[0]=R8(c->r[3]+0x00000035u); // 8039D768
  cmps(c,0,(int32_t)c->r[0],0); // 8039D76C
  if (!crb(c,2)) { goto L_8039D780; } // 8039D770
  c->r[3]=c->r[4]|c->r[4]; // 8039D774
  c->r[4]=0u+0x00000001u; // 8039D778
  c->lr=0x8039D780u; f_803B11CC(c); // 8039D77C
L_8039D780:;
  c->r[0]=0u+0x00000003u; // 8039D780
  W32(c->r[31]+0x00000000u,c->r[0]); // 8039D784
L_8039D788:;
  c->r[0]=0u+0x00000000u; // 8039D788
  W8(c->r[31]+0x00000031u,c->r[0]); // 8039D78C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039D790
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039D794
  c->lr=c->r[0]; // 8039D798
  c->r[1]=c->r[1]+0x00000010u; // 8039D79C
  return; // 8039D7A0
}

// fn_8039D7A4
void f_8039D7A4(Ctx* __restrict c) {
  trace_call(0x8039D7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039D7A4
  c->r[0]=c->lr; // 8039D7A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039D7AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039D7B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039D7B4
  c->r[30]=c->r[3]|c->r[3]; // 8039D7B8
  c->r[0]=R32(c->r[3]+0x000000DCu); // 8039D7BC
  cmps(c,0,(int32_t)c->r[0],0); // 8039D7C0
  if (crb(c,2)) { goto L_8039D894; } // 8039D7C4
  c->r[3]=c->r[0]|c->r[0]; // 8039D7C8
  c->lr=0x8039D7D0u; f_803B0CDC(c); // 8039D7CC
  c->r[3]=R32(c->r[30]+0x000000DCu); // 8039D7D0
  c->lr=0x8039D7D8u; f_803B0940(c); // 8039D7D4
  c->r[0]=R8(c->r[30]+0x00000033u); // 8039D7D8
  c->r[7]=0u+0x00000000u; // 8039D7DC
  W32(c->r[30]+0x000000DCu,c->r[7]); // 8039D7E0
  cmps(c,0,(int32_t)c->r[0],0); // 8039D7E4
  W8(c->r[30]+0x00000031u,c->r[7]); // 8039D7E8
  W8(c->r[30]+0x00000032u,c->r[7]); // 8039D7EC
  if (crb(c,2)) { goto L_8039D874; } // 8039D7F0
  W8(c->r[30]+0x00000033u,c->r[7]); // 8039D7F4
  c->r[0]=R8(c->r[13]+0xFFFF9FE8u); // 8039D7F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039D7FC
  if (!crb(c,2)) { goto L_8039D84C; } // 8039D800
  c->r[6]=0u+0x806C0000u; // 8039D804
  c->r[4]=0u+0x803A0000u; // 8039D808
  c->r[3]=c->r[6]+0xFFFFD868u; // 8039D80C
  c->r[5]=0u+0x806C0000u; // 8039D810
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039D814
  c->r[8]=c->r[3]+0x00000008u; // 8039D818
  c->r[4]=c->r[4]+0xFFFFCCE0u; // 8039D81C
  c->r[5]=c->r[5]+0xFFFFD858u; // 8039D820
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8039D824
  W32(c->r[6]+0xFFFFD868u,c->r[7]); // 8039D828
  W32(c->r[3]+0x00000004u,c->r[7]); // 8039D82C
  W32(c->r[3]+0x00000008u,c->r[8]); // 8039D830
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 8039D834
  W8(c->r[3]+0x00000010u,c->r[7]); // 8039D838
  W32(c->r[3]+0x00000014u,c->r[7]); // 8039D83C
  c->lr=0x8039D844u; f_802895A4(c); // 8039D840
  c->r[0]=0u+0x00000001u; // 8039D844
  W8(c->r[13]+0xFFFF9FE8u,c->r[0]); // 8039D848
L_8039D84C:;
  c->r[31]=0u+0x806C0000u; // 8039D84C
  c->r[4]=c->r[30]+0x000000E4u; // 8039D850
  c->r[31]=c->r[31]+0xFFFFD868u; // 8039D854
  c->r[3]=c->r[31]+0x00000004u; // 8039D858
  c->lr=0x8039D860u; f_803B50E0(c); // 8039D85C
  cmps(c,0,(int32_t)c->r[30],0); // 8039D860
  if (crb(c,2)) { goto L_8039D874; } // 8039D864
  c->r[3]=c->r[31]|c->r[31]; // 8039D868
  c->r[4]=c->r[30]|c->r[30]; // 8039D86C
  c->lr=0x8039D874u; f_803A0A9C(c); // 8039D870
L_8039D874:;
  c->r[12]=R32(c->r[30]+0x000000D4u); // 8039D874
  cmps(c,0,(int32_t)c->r[12],0); // 8039D878
  if (crb(c,2)) { goto L_8039D894; } // 8039D87C
  c->r[3]=c->r[30]|c->r[30]; // 8039D880
  c->r[5]=R32(c->r[30]+0x000000D8u); // 8039D884
  c->r[4]=0u+0x00000000u; // 8039D888
  c->ctr=c->r[12]; // 8039D88C
  if (true) { c->lr=0x8039D894u; dispatch(c,c->ctr); } // 8039D890
L_8039D894:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039D894
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039D898
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039D89C
  c->lr=c->r[0]; // 8039D8A0
  c->r[1]=c->r[1]+0x00000010u; // 8039D8A4
  return; // 8039D8A8
}

// UpdateSweep__Q44nw4r3snd6detail7ChannelFi
void f_8039D8AC(Ctx* __restrict c) {
  trace_call(0x8039D8ACu);
  c->r[0]=R32(c->r[3]+0x000000A0u); // 8039D8AC
  c->r[5]=R32(c->r[3]+0x000000A4u); // 8039D8B0
  c->r[0]=c->r[0]+c->r[4]; // 8039D8B4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8039D8B8
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8039D8BC
  if (!crb(c,1)) return; // 8039D8C0
  W32(c->r[3]+0x000000A0u,c->r[5]); // 8039D8C4
  return; // 8039D8C8
}

// SetSweepParam__Q44nw4r3snd6detail7ChannelFfib
void f_8039D8CC(Ctx* __restrict c) {
  trace_call(0x8039D8CCu);
  c->r[0]=0u+0x00000000u; // 8039D8CC
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 8039D8D0
  W32(c->r[3]+0x000000A4u,c->r[4]); // 8039D8D4
  W8(c->r[3]+0x00000034u,c->r[5]); // 8039D8D8
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8039D8DC
  return; // 8039D8E0
}

// fn_8039D8E4
void f_8039D8E4(Ctx* __restrict c) {
  trace_call(0x8039D8E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039D8E4
  c->r[0]=c->lr; // 8039D8E8
  cmps(c,0,(int32_t)c->r[4],2); // 8039D8EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039D8F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039D8F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039D8F8
  c->r[30]=c->r[5]|c->r[5]; // 8039D8FC
  if (crb(c,2)) { goto L_8039D93C; } // 8039D900
  if (!crb(c,0)) { goto L_8039D918; } // 8039D904
  cmps(c,0,(int32_t)c->r[4],0); // 8039D908
  if (crb(c,2)) { goto L_8039D924; } // 8039D90C
  if (!crb(c,0)) { goto L_8039D930; } // 8039D910
  goto L_8039D948; // 8039D914
L_8039D918:;
  cmps(c,0,(int32_t)c->r[4],4); // 8039D918
  if (!crb(c,0)) { goto L_8039D948; } // 8039D91C
  goto L_8039D944; // 8039D920
L_8039D924:;
  c->r[31]=0u+0x00000002u; // 8039D924
  c->lr=0x8039D92Cu; f_803B0940(c); // 8039D928
  goto L_8039D948; // 8039D92C
L_8039D930:;
  c->r[31]=0u+0x00000003u; // 8039D930
  c->lr=0x8039D938u; f_803B0940(c); // 8039D934
  goto L_8039D948; // 8039D938
L_8039D93C:;
  c->r[31]=0u+0x00000001u; // 8039D93C
  goto L_8039D948; // 8039D940
L_8039D944:;
  c->r[31]=0u+0x00000001u; // 8039D944
L_8039D948:;
  c->r[12]=R32(c->r[30]+0x000000D4u); // 8039D948
  cmps(c,0,(int32_t)c->r[12],0); // 8039D94C
  if (crb(c,2)) { goto L_8039D968; } // 8039D950
  c->r[3]=c->r[30]|c->r[30]; // 8039D954
  c->r[4]=c->r[31]|c->r[31]; // 8039D958
  c->r[5]=R32(c->r[30]+0x000000D8u); // 8039D95C
  c->ctr=c->r[12]; // 8039D960
  if (true) { c->lr=0x8039D968u; dispatch(c,c->ctr); } // 8039D964
L_8039D968:;
  c->r[7]=0u+0x00000000u; // 8039D968
  W32(c->r[30]+0x000000DCu,c->r[7]); // 8039D96C
  W8(c->r[30]+0x00000031u,c->r[7]); // 8039D970
  W8(c->r[30]+0x00000032u,c->r[7]); // 8039D974
  W8(c->r[30]+0x00000033u,c->r[7]); // 8039D978
  c->r[0]=R8(c->r[13]+0xFFFF9FE8u); // 8039D97C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039D980
  if (!crb(c,2)) { goto L_8039D9D0; } // 8039D984
  c->r[6]=0u+0x806C0000u; // 8039D988
  c->r[4]=0u+0x803A0000u; // 8039D98C
  c->r[3]=c->r[6]+0xFFFFD868u; // 8039D990
  c->r[5]=0u+0x806C0000u; // 8039D994
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039D998
  c->r[8]=c->r[3]+0x00000008u; // 8039D99C
  c->r[4]=c->r[4]+0xFFFFCCE0u; // 8039D9A0
  c->r[5]=c->r[5]+0xFFFFD858u; // 8039D9A4
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8039D9A8
  W32(c->r[6]+0xFFFFD868u,c->r[7]); // 8039D9AC
  W32(c->r[3]+0x00000004u,c->r[7]); // 8039D9B0
  W32(c->r[3]+0x00000008u,c->r[8]); // 8039D9B4
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 8039D9B8
  W8(c->r[3]+0x00000010u,c->r[7]); // 8039D9BC
  W32(c->r[3]+0x00000014u,c->r[7]); // 8039D9C0
  c->lr=0x8039D9C8u; f_802895A4(c); // 8039D9C4
  c->r[0]=0u+0x00000001u; // 8039D9C8
  W8(c->r[13]+0xFFFF9FE8u,c->r[0]); // 8039D9CC
L_8039D9D0:;
  c->r[31]=0u+0x806C0000u; // 8039D9D0
  c->r[4]=c->r[30]+0x000000E4u; // 8039D9D4
  c->r[31]=c->r[31]+0xFFFFD868u; // 8039D9D8
  c->r[3]=c->r[31]+0x00000004u; // 8039D9DC
  c->lr=0x8039D9E4u; f_803B50E0(c); // 8039D9E0
  cmps(c,0,(int32_t)c->r[30],0); // 8039D9E4
  if (crb(c,2)) { goto L_8039D9F8; } // 8039D9E8
  c->r[3]=c->r[31]|c->r[31]; // 8039D9EC
  c->r[4]=c->r[30]|c->r[30]; // 8039D9F0
  c->lr=0x8039D9F8u; f_803A0A9C(c); // 8039D9F4
L_8039D9F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039D9F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039D9FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039DA00
  c->lr=c->r[0]; // 8039DA04
  c->r[1]=c->r[1]+0x00000010u; // 8039DA08
  return; // 8039DA0C
}

// AllocChannel__Q44nw4r3snd6detail7ChannelFiiiPFPQ44nw4r3snd6detail7ChannelQ54nw4r3snd6detail7Channel21ChannelCallbackStatusUl_vUl
void f_8039DA10(Ctx* __restrict c) {
  trace_call(0x8039DA10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039DA10
  c->r[0]=c->lr; // 8039DA14
  W32(c->r[1]+0x00000034u,c->r[0]); // 8039DA18
  c->r[11]=c->r[1]+0x00000030u; // 8039DA1C
  c->lr=0x8039DA24u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8039DA20
  c->r[0]=R8(c->r[13]+0xFFFF9FE8u); // 8039DA24
  c->r[24]=c->r[3]|c->r[3]; // 8039DA28
  c->r[25]=c->r[4]|c->r[4]; // 8039DA2C
  c->r[26]=c->r[5]|c->r[5]; // 8039DA30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039DA34
  c->r[27]=c->r[6]|c->r[6]; // 8039DA38
  c->r[28]=c->r[7]|c->r[7]; // 8039DA3C
  if (!crb(c,2)) { goto L_8039DA90; } // 8039DA40
  c->r[6]=0u+0x806C0000u; // 8039DA44
  c->r[0]=0u+0x00000000u; // 8039DA48
  c->r[3]=c->r[6]+0xFFFFD868u; // 8039DA4C
  c->r[4]=0u+0x803A0000u; // 8039DA50
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039DA54
  c->r[7]=c->r[3]+0x00000008u; // 8039DA58
  c->r[5]=0u+0x806C0000u; // 8039DA5C
  c->r[4]=c->r[4]+0xFFFFCCE0u; // 8039DA60
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039DA64
  c->r[5]=c->r[5]+0xFFFFD858u; // 8039DA68
  W32(c->r[6]+0xFFFFD868u,c->r[0]); // 8039DA6C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039DA70
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039DA74
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8039DA78
  W8(c->r[3]+0x00000010u,c->r[0]); // 8039DA7C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8039DA80
  c->lr=0x8039DA88u; f_802895A4(c); // 8039DA84
  c->r[0]=0u+0x00000001u; // 8039DA88
  W8(c->r[13]+0xFFFF9FE8u,c->r[0]); // 8039DA8C
L_8039DA90:;
  c->r[31]=0u+0x806C0000u; // 8039DA90
  c->r[31]=c->r[31]+0xFFFFD868u; // 8039DA94
  c->r[3]=c->r[31]|c->r[31]; // 8039DA98
  c->lr=0x8039DAA0u; f_803A0A40(c); // 8039DA9C
  cmps(c,0,(int32_t)c->r[3],0); // 8039DAA0
  c->r[30]=c->r[3]|c->r[3]; // 8039DAA4
  if (!crb(c,2)) { goto L_8039DAB4; } // 8039DAA8
  c->r[30]=0u+0x00000000u; // 8039DAAC
  goto L_8039DAFC; // 8039DAB0
L_8039DAB4:;
  if (crb(c,2)) { goto L_8039DAFC; } // 8039DAB4
  c->lr=0x8039DABCu; f_8039E5DC(c); // 8039DAB8
  c->r[3]=c->r[30]+0x00000018u; // 8039DABC
  c->lr=0x8039DAC4u; f_803A0AE4(c); // 8039DAC0
  c->r[0]=0u+0x00000000u; // 8039DAC4
  {uint32_t ea=c->r[2]+0xFFFFEDB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039DAC8
  W32(c->r[30]+0x00000028u,c->r[0]); // 8039DACC
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 8039DAD0
  W8(c->r[30]+0x00000031u,c->r[0]); // 8039DAD4
  W8(c->r[30]+0x00000032u,c->r[0]); // 8039DAD8
  W8(c->r[30]+0x00000033u,c->r[0]); // 8039DADC
  W8(c->r[30]+0x000000B8u,c->r[0]); // 8039DAE0
  W8(c->r[30]+0x000000B9u,c->r[0]); // 8039DAE4
  W16(c->r[30]+0x000000BAu,c->r[0]); // 8039DAE8
  W16(c->r[30]+0x000000BCu,c->r[0]); // 8039DAEC
  W32(c->r[30]+0x000000DCu,c->r[0]); // 8039DAF0
  W32(c->r[30]+0x000000E4u,c->r[0]); // 8039DAF4
  W32(c->r[30]+0x000000E8u,c->r[0]); // 8039DAF8
L_8039DAFC:;
  c->r[0]=c->r[31]+0x00000008u; // 8039DAFC
  c->r[29]=c->r[30]+0x000000E4u; // 8039DB00
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039DB04
  c->r[5]=c->r[29]|c->r[29]; // 8039DB08
  c->r[3]=c->r[31]+0x00000004u; // 8039DB0C
  c->r[4]=c->r[1]+0x00000008u; // 8039DB10
  c->lr=0x8039DB18u; f_803B50B4(c); // 8039DB14
  cmps(c,0,(int32_t)c->r[30],0); // 8039DB18
  if (!crb(c,2)) { goto L_8039DB28; } // 8039DB1C
  c->r[3]=0u+0x00000000u; // 8039DB20
  goto L_8039DBF4; // 8039DB24
L_8039DB28:;
  c->r[31]=0u+0x00000001u; // 8039DB28
  W8(c->r[30]+0x00000033u,c->r[31]); // 8039DB2C
  c->lr=0x8039DB34u; f_803B266C(c); // 8039DB30
  c->r[7]=0u+0x803A0000u; // 8039DB34
  c->r[4]=c->r[24]|c->r[24]; // 8039DB38
  c->r[5]=c->r[25]|c->r[25]; // 8039DB3C
  c->r[6]=c->r[26]|c->r[26]; // 8039DB40
  c->r[8]=c->r[30]|c->r[30]; // 8039DB44
  c->r[7]=c->r[7]+0xFFFFD8E4u; // 8039DB48
  c->lr=0x8039DB50u; f_803B2830(c); // 8039DB4C
  cmps(c,0,(int32_t)c->r[3],0); // 8039DB50
  if (!crb(c,2)) { goto L_8039DBDC; } // 8039DB54
  c->r[0]=R8(c->r[13]+0xFFFF9FE8u); // 8039DB58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039DB5C
  if (!crb(c,2)) { goto L_8039DBAC; } // 8039DB60
  c->r[6]=0u+0x806C0000u; // 8039DB64
  c->r[0]=0u+0x00000000u; // 8039DB68
  c->r[3]=c->r[6]+0xFFFFD868u; // 8039DB6C
  c->r[4]=0u+0x803A0000u; // 8039DB70
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039DB74
  c->r[7]=c->r[3]+0x00000008u; // 8039DB78
  c->r[5]=0u+0x806C0000u; // 8039DB7C
  c->r[4]=c->r[4]+0xFFFFCCE0u; // 8039DB80
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039DB84
  c->r[5]=c->r[5]+0xFFFFD858u; // 8039DB88
  W32(c->r[6]+0xFFFFD868u,c->r[0]); // 8039DB8C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039DB90
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039DB94
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8039DB98
  W8(c->r[3]+0x00000010u,c->r[0]); // 8039DB9C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8039DBA0
  c->lr=0x8039DBA8u; f_802895A4(c); // 8039DBA4
  W8(c->r[13]+0xFFFF9FE8u,c->r[31]); // 8039DBA8
L_8039DBAC:;
  c->r[31]=0u+0x806C0000u; // 8039DBAC
  c->r[4]=c->r[29]|c->r[29]; // 8039DBB0
  c->r[31]=c->r[31]+0xFFFFD868u; // 8039DBB4
  c->r[3]=c->r[31]+0x00000004u; // 8039DBB8
  c->lr=0x8039DBC0u; f_803B50E0(c); // 8039DBBC
  cmps(c,0,(int32_t)c->r[30],0); // 8039DBC0
  if (crb(c,2)) { goto L_8039DBD4; } // 8039DBC4
  c->r[3]=c->r[31]|c->r[31]; // 8039DBC8
  c->r[4]=c->r[30]|c->r[30]; // 8039DBCC
  c->lr=0x8039DBD4u; f_803A0A9C(c); // 8039DBD0
L_8039DBD4:;
  c->r[3]=0u+0x00000000u; // 8039DBD4
  goto L_8039DBF4; // 8039DBD8
L_8039DBDC:;
  W32(c->r[30]+0x000000DCu,c->r[3]); // 8039DBDC
  c->r[3]=c->r[30]|c->r[30]; // 8039DBE0
  c->r[4]=c->r[27]|c->r[27]; // 8039DBE4
  c->r[5]=c->r[28]|c->r[28]; // 8039DBE8
  c->lr=0x8039DBF0u; f_8039CE50(c); // 8039DBEC
  c->r[3]=c->r[30]|c->r[30]; // 8039DBF0
L_8039DBF4:;
  c->r[11]=c->r[1]+0x00000030u; // 8039DBF4
  c->lr=0x8039DBFCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8039DBF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8039DBFC
  c->lr=c->r[0]; // 8039DC00
  c->r[1]=c->r[1]+0x00000030u; // 8039DC04
  return; // 8039DC08
}

// FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
void f_8039DC0C(Ctx* __restrict c) {
  trace_call(0x8039DC0Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 8039DC0C
  if (crb(c,2)) return; // 8039DC10
  c->r[0]=0u+0x00000000u; // 8039DC14
  W32(c->r[3]+0x000000D4u,c->r[0]); // 8039DC18
  W32(c->r[3]+0x000000D8u,c->r[0]); // 8039DC1C
  return; // 8039DC20
}

// GetInstance__Q44nw4r3snd6detail22DisposeCallbackManagerFv
void f_8039DC24(Ctx* __restrict c) {
  trace_call(0x8039DC24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039DC24
  c->r[0]=c->lr; // 8039DC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039DC2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039DC30
  c->lr=0x8039DC38u; f_8025EA10(c); // 8039DC34
  c->r[0]=R8(c->r[13]+0xFFFF9FF0u); // 8039DC38
  c->r[31]=c->r[3]|c->r[3]; // 8039DC3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039DC40
  if (!crb(c,2)) { goto L_8039DC88; } // 8039DC44
  c->r[6]=0u+0x806C0000u; // 8039DC48
  c->r[0]=0u+0x00000000u; // 8039DC4C
  c->r[3]=c->r[6]+0xFFFFD894u; // 8039DC50
  c->r[4]=0u+0x803A0000u; // 8039DC54
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039DC58
  c->r[7]=c->r[3]+0x00000004u; // 8039DC5C
  c->r[5]=0u+0x806C0000u; // 8039DC60
  c->r[4]=c->r[4]+0xFFFFDCACu; // 8039DC64
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039DC68
  c->r[5]=c->r[5]+0xFFFFD888u; // 8039DC6C
  W32(c->r[6]+0xFFFFD894u,c->r[0]); // 8039DC70
  W32(c->r[3]+0x00000004u,c->r[7]); // 8039DC74
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039DC78
  c->lr=0x8039DC80u; f_802895A4(c); // 8039DC7C
  c->r[0]=0u+0x00000001u; // 8039DC80
  W8(c->r[13]+0xFFFF9FF0u,c->r[0]); // 8039DC84
L_8039DC88:;
  c->r[3]=c->r[31]|c->r[31]; // 8039DC88
  c->lr=0x8039DC90u; f_8025EA38(c); // 8039DC8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039DC90
  c->r[3]=0u+0x806C0000u; // 8039DC94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039DC98
  c->r[3]=c->r[3]+0xFFFFD894u; // 8039DC9C
  c->lr=c->r[0]; // 8039DCA0
  c->r[1]=c->r[1]+0x00000010u; // 8039DCA4
  return; // 8039DCA8
}

// fn_8039DCAC
void f_8039DCAC(Ctx* __restrict c) {
  trace_call(0x8039DCACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039DCAC
  c->r[0]=c->lr; // 8039DCB0
  cmps(c,0,(int32_t)c->r[3],0); // 8039DCB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039DCB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039DCBC
  c->r[31]=c->r[4]|c->r[4]; // 8039DCC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039DCC4
  c->r[30]=c->r[3]|c->r[3]; // 8039DCC8
  if (crb(c,2)) { goto L_8039DCEC; } // 8039DCCC
  if (crb(c,2)) { goto L_8039DCDC; } // 8039DCD0
  c->r[4]=0u+0x00000000u; // 8039DCD4
  c->lr=0x8039DCDCu; f_803B4FA4(c); // 8039DCD8
L_8039DCDC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8039DCDC
  if (!crb(c,1)) { goto L_8039DCEC; } // 8039DCE0
  c->r[3]=c->r[30]|c->r[30]; // 8039DCE4
  c->lr=0x8039DCECu; f_802896EC(c); // 8039DCE8
L_8039DCEC:;
  c->r[3]=c->r[30]|c->r[30]; // 8039DCEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039DCF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039DCF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039DCF8
  c->lr=c->r[0]; // 8039DCFC
  c->r[1]=c->r[1]+0x00000010u; // 8039DD00
  return; // 8039DD04
}

// RegisterDisposeCallback__Q44nw4r3snd6detail22DisposeCallbackManagerFPQ44nw4r3snd6detail15DisposeCallback
void f_8039DD08(Ctx* __restrict c) {
  trace_call(0x8039DD08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039DD08
  c->r[0]=c->lr; // 8039DD0C
  c->r[5]=c->r[4]|c->r[4]; // 8039DD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039DD14
  c->r[0]=c->r[3]+0x00000004u; // 8039DD18
  c->r[4]=c->r[1]+0x00000008u; // 8039DD1C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039DD20
  c->lr=0x8039DD28u; f_803B50B4(c); // 8039DD24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039DD28
  c->lr=c->r[0]; // 8039DD2C
  c->r[1]=c->r[1]+0x00000010u; // 8039DD30
  return; // 8039DD34
}

// fn_8039DD38
void f_8039DD38(Ctx* __restrict c) {
  trace_call(0x8039DD38u);
  f_803B50E0(c); return; // 8039DD38
}

// fn_8039DD3C
void f_8039DD3C(Ctx* __restrict c) {
  trace_call(0x8039DD3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039DD3C
  c->r[0]=c->lr; // 8039DD40
  W32(c->r[1]+0x00000044u,c->r[0]); // 8039DD44
  c->r[11]=c->r[1]+0x00000040u; // 8039DD48
  c->lr=0x8039DD50u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8039DD4C
  c->r[31]=c->r[4]|c->r[4]; // 8039DD50
  c->r[30]=c->r[4]+c->r[5]; // 8039DD54
  c->lr=0x8039DD5Cu; f_8025EA10(c); // 8039DD58
  c->r[0]=R8(c->r[13]+0xFFFF9FF0u); // 8039DD5C
  c->r[29]=c->r[3]|c->r[3]; // 8039DD60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039DD64
  if (!crb(c,2)) { goto L_8039DDAC; } // 8039DD68
  c->r[6]=0u+0x806C0000u; // 8039DD6C
  c->r[0]=0u+0x00000000u; // 8039DD70
  c->r[3]=c->r[6]+0xFFFFD894u; // 8039DD74
  c->r[4]=0u+0x803A0000u; // 8039DD78
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039DD7C
  c->r[7]=c->r[3]+0x00000004u; // 8039DD80
  c->r[5]=0u+0x806C0000u; // 8039DD84
  c->r[4]=c->r[4]+0xFFFFDCACu; // 8039DD88
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039DD8C
  c->r[5]=c->r[5]+0xFFFFD888u; // 8039DD90
  W32(c->r[6]+0xFFFFD894u,c->r[0]); // 8039DD94
  W32(c->r[3]+0x00000004u,c->r[7]); // 8039DD98
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039DD9C
  c->lr=0x8039DDA4u; f_802895A4(c); // 8039DDA0
  c->r[0]=0u+0x00000001u; // 8039DDA4
  W8(c->r[13]+0xFFFF9FF0u,c->r[0]); // 8039DDA8
L_8039DDAC:;
  c->r[3]=c->r[29]|c->r[29]; // 8039DDAC
  c->lr=0x8039DDB4u; f_8025EA38(c); // 8039DDB0
  c->r[21]=0u+0x806C0000u; // 8039DDB4
  c->r[23]=0u+0x00000000u; // 8039DDB8
  c->r[22]=c->r[21]+0xFFFFD894u; // 8039DDBC
  c->r[24]=0u+0x803A0000u; // 8039DDC0
  c->r[29]=R32(c->r[22]+0x00000004u); // 8039DDC4
  c->r[27]=c->r[22]+0x00000004u; // 8039DDC8
  c->r[25]=0u+0x806C0000u; // 8039DDCC
  c->r[26]=0u+0x00000001u; // 8039DDD0
  goto L_8039DDF8; // 8039DDD4
L_8039DDD8:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 8039DDD8
  c->r[3]=c->r[29]|c->r[29]; // 8039DDDC
  c->r[4]=c->r[31]|c->r[31]; // 8039DDE0
  c->r[5]=c->r[30]|c->r[30]; // 8039DDE4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8039DDE8
  c->r[29]=R32(c->r[29]+0x00000000u); // 8039DDEC
  c->ctr=c->r[12]; // 8039DDF0
  if (true) { c->lr=0x8039DDF8u; dispatch(c,c->ctr); } // 8039DDF4
L_8039DDF8:;
  c->lr=0x8039DDFCu; f_8025EA10(c); // 8039DDF8
  c->r[0]=R8(c->r[13]+0xFFFF9FF0u); // 8039DDFC
  c->r[28]=c->r[3]|c->r[3]; // 8039DE00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039DE04
  if (!crb(c,2)) { goto L_8039DE38; } // 8039DE08
  W32(c->r[22]+0x00000004u,c->r[23]); // 8039DE0C
  c->r[6]=c->r[22]+0x00000004u; // 8039DE10
  c->r[3]=c->r[22]|c->r[22]; // 8039DE14
  c->r[4]=c->r[24]+0xFFFFDCACu; // 8039DE18
  W32(c->r[22]+0x00000008u,c->r[23]); // 8039DE1C
  c->r[5]=c->r[25]+0xFFFFD888u; // 8039DE20
  W32(c->r[21]+0xFFFFD894u,c->r[23]); // 8039DE24
  W32(c->r[22]+0x00000004u,c->r[6]); // 8039DE28
  W32(c->r[22]+0x00000008u,c->r[6]); // 8039DE2C
  c->lr=0x8039DE34u; f_802895A4(c); // 8039DE30
  W8(c->r[13]+0xFFFF9FF0u,c->r[26]); // 8039DE34
L_8039DE38:;
  c->r[3]=c->r[28]|c->r[28]; // 8039DE38
  c->lr=0x8039DE40u; f_8025EA38(c); // 8039DE3C
  cmpu(c,0,c->r[29],c->r[27]); // 8039DE40
  if (!crb(c,2)) { IRQCHK(c); goto L_8039DDD8; } // 8039DE44
  c->r[11]=c->r[1]+0x00000040u; // 8039DE48
  c->lr=0x8039DE50u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8039DE4C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8039DE50
  c->lr=c->r[0]; // 8039DE54
  c->r[1]=c->r[1]+0x00000040u; // 8039DE58
  return; // 8039DE5C
}

// fn_8039DE60
void f_8039DE60(Ctx* __restrict c) {
  trace_call(0x8039DE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039DE60
  c->r[0]=c->lr; // 8039DE64
  W32(c->r[1]+0x00000044u,c->r[0]); // 8039DE68
  c->r[11]=c->r[1]+0x00000040u; // 8039DE6C
  c->lr=0x8039DE74u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8039DE70
  c->r[31]=c->r[4]|c->r[4]; // 8039DE74
  c->r[30]=c->r[4]+c->r[5]; // 8039DE78
  c->lr=0x8039DE80u; f_8025EA10(c); // 8039DE7C
  c->r[0]=R8(c->r[13]+0xFFFF9FF0u); // 8039DE80
  c->r[29]=c->r[3]|c->r[3]; // 8039DE84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039DE88
  if (!crb(c,2)) { goto L_8039DED0; } // 8039DE8C
  c->r[6]=0u+0x806C0000u; // 8039DE90
  c->r[0]=0u+0x00000000u; // 8039DE94
  c->r[3]=c->r[6]+0xFFFFD894u; // 8039DE98
  c->r[4]=0u+0x803A0000u; // 8039DE9C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039DEA0
  c->r[7]=c->r[3]+0x00000004u; // 8039DEA4
  c->r[5]=0u+0x806C0000u; // 8039DEA8
  c->r[4]=c->r[4]+0xFFFFDCACu; // 8039DEAC
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039DEB0
  c->r[5]=c->r[5]+0xFFFFD888u; // 8039DEB4
  W32(c->r[6]+0xFFFFD894u,c->r[0]); // 8039DEB8
  W32(c->r[3]+0x00000004u,c->r[7]); // 8039DEBC
  W32(c->r[3]+0x00000008u,c->r[7]); // 8039DEC0
  c->lr=0x8039DEC8u; f_802895A4(c); // 8039DEC4
  c->r[0]=0u+0x00000001u; // 8039DEC8
  W8(c->r[13]+0xFFFF9FF0u,c->r[0]); // 8039DECC
L_8039DED0:;
  c->r[3]=c->r[29]|c->r[29]; // 8039DED0
  c->lr=0x8039DED8u; f_8025EA38(c); // 8039DED4
  c->r[21]=0u+0x806C0000u; // 8039DED8
  c->r[23]=0u+0x00000000u; // 8039DEDC
  c->r[22]=c->r[21]+0xFFFFD894u; // 8039DEE0
  c->r[24]=0u+0x803A0000u; // 8039DEE4
  c->r[29]=R32(c->r[22]+0x00000004u); // 8039DEE8
  c->r[27]=c->r[22]+0x00000004u; // 8039DEEC
  c->r[25]=0u+0x806C0000u; // 8039DEF0
  c->r[26]=0u+0x00000001u; // 8039DEF4
  goto L_8039DF1C; // 8039DEF8
L_8039DEFC:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 8039DEFC
  c->r[3]=c->r[29]|c->r[29]; // 8039DF00
  c->r[4]=c->r[31]|c->r[31]; // 8039DF04
  c->r[5]=c->r[30]|c->r[30]; // 8039DF08
  c->r[12]=R32(c->r[12]+0x00000010u); // 8039DF0C
  c->r[29]=R32(c->r[29]+0x00000000u); // 8039DF10
  c->ctr=c->r[12]; // 8039DF14
  if (true) { c->lr=0x8039DF1Cu; dispatch(c,c->ctr); } // 8039DF18
L_8039DF1C:;
  c->lr=0x8039DF20u; f_8025EA10(c); // 8039DF1C
  c->r[0]=R8(c->r[13]+0xFFFF9FF0u); // 8039DF20
  c->r[28]=c->r[3]|c->r[3]; // 8039DF24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039DF28
  if (!crb(c,2)) { goto L_8039DF5C; } // 8039DF2C
  W32(c->r[22]+0x00000004u,c->r[23]); // 8039DF30
  c->r[6]=c->r[22]+0x00000004u; // 8039DF34
  c->r[3]=c->r[22]|c->r[22]; // 8039DF38
  c->r[4]=c->r[24]+0xFFFFDCACu; // 8039DF3C
  W32(c->r[22]+0x00000008u,c->r[23]); // 8039DF40
  c->r[5]=c->r[25]+0xFFFFD888u; // 8039DF44
  W32(c->r[21]+0xFFFFD894u,c->r[23]); // 8039DF48
  W32(c->r[22]+0x00000004u,c->r[6]); // 8039DF4C
  W32(c->r[22]+0x00000008u,c->r[6]); // 8039DF50
  c->lr=0x8039DF58u; f_802895A4(c); // 8039DF54
  W8(c->r[13]+0xFFFF9FF0u,c->r[26]); // 8039DF58
L_8039DF5C:;
  c->r[3]=c->r[28]|c->r[28]; // 8039DF5C
  c->lr=0x8039DF64u; f_8025EA38(c); // 8039DF60
  cmpu(c,0,c->r[29],c->r[27]); // 8039DF64
  if (!crb(c,2)) { IRQCHK(c); goto L_8039DEFC; } // 8039DF68
  c->r[11]=c->r[1]+0x00000040u; // 8039DF6C
  c->lr=0x8039DF74u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8039DF70
  c->r[0]=R32(c->r[1]+0x00000044u); // 8039DF74
  c->lr=c->r[0]; // 8039DF78
  c->r[1]=c->r[1]+0x00000040u; // 8039DF7C
  return; // 8039DF80
}

// fn_8039DF84
void f_8039DF84(Ctx* __restrict c) {
  trace_call(0x8039DF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039DF84
  c->r[0]=c->lr; // 8039DF88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039DF8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039DF90
  c->r[31]=c->r[3]|c->r[3]; // 8039DF94
  c->lr=0x8039DF9Cu; f_803A66E4(c); // 8039DF98
  c->r[4]=0u+0x80430000u; // 8039DF9C
  c->r[3]=c->r[31]+0x00000108u; // 8039DFA0
  c->r[4]=c->r[4]+0x00007050u; // 8039DFA4
  W32(c->r[31]+0x00000000u,c->r[4]); // 8039DFA8
  c->lr=0x8039DFB0u; f_803A6CE4(c); // 8039DFAC
  c->r[0]=0u+0x00000000u; // 8039DFB0
  c->r[3]=c->r[31]|c->r[31]; // 8039DFB4
  W8(c->r[31]+0x00000188u,c->r[0]); // 8039DFB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039DFBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039DFC0
  c->lr=c->r[0]; // 8039DFC4
  c->r[1]=c->r[1]+0x00000010u; // 8039DFC8
  return; // 8039DFCC
}

// dtor_8039DFD0
void f_8039DFD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039DFD0
  c->r[0]=c->lr; // 8039DFD4
  cmps(c,0,(int32_t)c->r[3],0); // 8039DFD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039DFDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039DFE0
  c->r[31]=c->r[4]|c->r[4]; // 8039DFE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039DFE8
  c->r[30]=c->r[3]|c->r[3]; // 8039DFEC
  if (crb(c,2)) { goto L_8039E034; } // 8039DFF0
  c->r[4]=0u+0x80430000u; // 8039DFF4
  c->r[4]=c->r[4]+0x00007050u; // 8039DFF8
  W32(c->r[3]+0x00000000u,c->r[4]); // 8039DFFC
  c->r[3]=c->r[3]+0x0000014Cu; // 8039E000
  c->lr=0x8039E008u; f_80266454(c); // 8039E004
  c->r[0]=0u+0x00000000u; // 8039E008
  c->r[3]=c->r[30]|c->r[30]; // 8039E00C
  W8(c->r[30]+0x00000188u,c->r[0]); // 8039E010
  c->lr=0x8039E018u; f_803A6764(c); // 8039E014
  c->r[3]=c->r[30]|c->r[30]; // 8039E018
  c->r[4]=0u+0x00000000u; // 8039E01C
  c->lr=0x8039E024u; f_803A6708(c); // 8039E020
  cmps(c,0,(int32_t)c->r[31],0); // 8039E024
  if (!crb(c,1)) { goto L_8039E034; } // 8039E028
  c->r[3]=c->r[30]|c->r[30]; // 8039E02C
  c->lr=0x8039E034u; f_802896EC(c); // 8039E030
L_8039E034:;
  c->r[3]=c->r[30]|c->r[30]; // 8039E034
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039E038
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039E03C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039E040
  c->lr=c->r[0]; // 8039E044
  c->r[1]=c->r[1]+0x00000010u; // 8039E048
  return; // 8039E04C
}

// fn_8039E050
void f_8039E050(Ctx* __restrict c) {
  trace_call(0x8039E050u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E050
  c->r[0]=c->lr; // 8039E054
  W32(c->r[1]+0x00000184u,c->r[0]); // 8039E058
  W32(c->r[1]+0x0000017Cu,c->r[31]); // 8039E05C
  W32(c->r[1]+0x00000178u,c->r[30]); // 8039E060
  W32(c->r[1]+0x00000174u,c->r[29]); // 8039E064
  c->r[29]=c->r[4]|c->r[4]; // 8039E068
  W32(c->r[1]+0x00000170u,c->r[28]); // 8039E06C
  c->r[28]=c->r[3]|c->r[3]; // 8039E070
  c->r[3]=c->r[29]|c->r[29]; // 8039E074
  c->lr=0x8039E07Cu; f_80265E38(c); // 8039E078
  cmps(c,0,(int32_t)c->r[3],0); // 8039E07C
  if (!crb(c,0)) { goto L_8039E08C; } // 8039E080
  c->r[3]=0u+0x00000000u; // 8039E084
  goto L_8039E190; // 8039E088
L_8039E08C:;
  c->r[4]=c->r[28]+0x0000014Cu; // 8039E08C
  c->lr=0x8039E094u; f_80266140(c); // 8039E090
  cmps(c,0,(int32_t)c->r[3],0); // 8039E094
  if (!crb(c,2)) { goto L_8039E0A4; } // 8039E098
  c->r[0]=0u+0x00000000u; // 8039E09C
  goto L_8039E114; // 8039E0A0
L_8039E0A4:;
  c->r[3]=0u+0x00000001u; // 8039E0A4
  W8(c->r[28]+0x00000188u,c->r[3]); // 8039E0A8
  c->r[0]=R8(c->r[13]+0xFFFF9FF8u); // 8039E0AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8039E0B0
  if (!crb(c,2)) { goto L_8039E0C4; } // 8039E0B4
  c->r[0]=0u+0x00000040u; // 8039E0B8
  W8(c->r[13]+0xFFFF9FF8u,c->r[3]); // 8039E0BC
  W32(c->r[2]+0xFFFFF078u,c->r[0]); // 8039E0C0
L_8039E0C4:;
  c->r[0]=c->r[1]+0x00000027u; // 8039E0C4
  c->r[30]=R32(c->r[2]+0xFFFFF078u); // 8039E0C8
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039E0CC
  c->r[3]=c->r[28]+0x0000014Cu; // 8039E0D0
  c->r[4]=c->r[31]|c->r[31]; // 8039E0D4
  c->r[5]=c->r[30]|c->r[30]; // 8039E0D8
  c->r[6]=0u+0x00000000u; // 8039E0DC
  c->r[7]=0u+0x00000002u; // 8039E0E0
  c->lr=0x8039E0E8u; f_80266720(c); // 8039E0E4
  cmpu(c,0,c->r[3],c->r[30]); // 8039E0E8
  if (crb(c,2)) { goto L_8039E0F8; } // 8039E0EC
  c->r[0]=0u+0x00000000u; // 8039E0F0
  goto L_8039E114; // 8039E0F4
L_8039E0F8:;
  c->r[4]=c->r[31]|c->r[31]; // 8039E0F8
  c->r[3]=c->r[28]+0x00000108u; // 8039E0FC
  c->lr=0x8039E104u; f_803A6D08(c); // 8039E100
  c->r[3]=c->r[28]|c->r[28]; // 8039E104
  c->r[4]=c->r[28]+0x00000108u; // 8039E108
  c->lr=0x8039E110u; f_803A675C(c); // 8039E10C
  c->r[0]=0u+0x00000001u; // 8039E110
L_8039E114:;
  cmps(c,0,(int32_t)c->r[0],0); // 8039E114
  if (!crb(c,2)) { goto L_8039E124; } // 8039E118
  c->r[3]=0u+0x00000000u; // 8039E11C
  goto L_8039E190; // 8039E120
L_8039E124:;
  c->r[3]=c->r[29]|c->r[29]; // 8039E124
  c->lr=0x8039E12Cu; f_802894C0(c); // 8039E128
  c->r[30]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 8039E12C
  c->r[0]=c->r[30]+0x00000001u; // 8039E130
  c->r[3]=c->r[29]+c->r[30]; // 8039E134
  c->ctr=c->r[0]; // 8039E138
  if (crb(c,0)) { goto L_8039E18C; } // 8039E13C
L_8039E140:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8039E140
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8039E144
  cmps(c,0,(int32_t)c->r[0],47); // 8039E148
  if (crb(c,2)) { goto L_8039E158; } // 8039E14C
  cmps(c,0,(int32_t)c->r[0],92); // 8039E150
  if (!crb(c,2)) { goto L_8039E180; } // 8039E154
L_8039E158:;
  c->r[4]=c->r[29]|c->r[29]; // 8039E158
  c->r[5]=c->r[30]|c->r[30]; // 8039E15C
  c->r[3]=c->r[1]+0x00000070u; // 8039E160
  c->lr=0x8039E168u; f_80293498(c); // 8039E164
  c->r[4]=c->r[1]+0x00000070u; // 8039E168
  c->r[0]=0u+0x00000000u; // 8039E16C
  W8(c->r[4]+c->r[30],c->r[0]); // 8039E170
  c->r[3]=c->r[28]|c->r[28]; // 8039E174
  c->lr=0x8039E17Cu; f_803A6C68(c); // 8039E178
  goto L_8039E18C; // 8039E17C
L_8039E180:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8039E180
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8039E184
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8039E140; } // 8039E188
L_8039E18C:;
  c->r[3]=0u+0x00000001u; // 8039E18C
L_8039E190:;
  c->r[0]=R32(c->r[1]+0x00000184u); // 8039E190
  c->r[31]=R32(c->r[1]+0x0000017Cu); // 8039E194
  c->r[30]=R32(c->r[1]+0x00000178u); // 8039E198
  c->r[29]=R32(c->r[1]+0x00000174u); // 8039E19C
  c->r[28]=R32(c->r[1]+0x00000170u); // 8039E1A0
  c->lr=c->r[0]; // 8039E1A4
  c->r[1]=c->r[1]+0x00000180u; // 8039E1A8
  return; // 8039E1AC
}

// fn_8039E1B0
void f_8039E1B0(Ctx* __restrict c) {
  trace_call(0x8039E1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E1B0
  c->r[0]=c->lr; // 8039E1B4
  c->r[8]=c->r[3]|c->r[3]; // 8039E1B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039E1BC
  c->r[0]=R8(c->r[3]+0x00000188u); // 8039E1C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039E1C4
  c->r[31]=c->r[7]|c->r[7]; // 8039E1C8
  cmps(c,0,(int32_t)c->r[0],0); // 8039E1CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039E1D0
  c->r[30]=c->r[6]|c->r[6]; // 8039E1D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039E1D8
  c->r[29]=c->r[4]|c->r[4]; // 8039E1DC
  if (!crb(c,2)) { goto L_8039E1EC; } // 8039E1E0
  c->r[3]=0u+0x00000000u; // 8039E1E4
  goto L_8039E24C; // 8039E1E8
L_8039E1EC:;
  cmpu(c,0,c->r[5],0x00000078u); // 8039E1EC
  if (!crb(c,0)) { goto L_8039E1FC; } // 8039E1F0
  c->r[3]=0u+0x00000000u; // 8039E1F4
  goto L_8039E24C; // 8039E1F8
L_8039E1FC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8039E1FC
  if (crb(c,2)) { goto L_8039E248; } // 8039E200
  c->r[3]=c->r[29]|c->r[29]; // 8039E204
  c->r[4]=c->r[8]+0x0000014Cu; // 8039E208
  c->r[5]=0u+0x00000000u; // 8039E20C
  c->lr=0x8039E214u; f_803B60D0(c); // 8039E210
  c->r[3]=0u+0x80430000u; // 8039E214
  cmps(c,0,(int32_t)c->r[31],0); // 8039E218
  c->r[3]=c->r[3]+0x00006FE8u; // 8039E21C
  W32(c->r[29]+0x00000070u,c->r[30]); // 8039E220
  W32(c->r[29]+0x00000000u,c->r[3]); // 8039E224
  W32(c->r[29]+0x00000074u,c->r[31]); // 8039E228
  if (!crb(c,2)) { goto L_8039E238; } // 8039E22C
  c->r[0]=R32(c->r[29]+0x00000014u); // 8039E230
  W32(c->r[29]+0x00000074u,c->r[0]); // 8039E234
L_8039E238:;
  c->r[4]=R32(c->r[29]+0x00000070u); // 8039E238
  c->r[3]=c->r[29]|c->r[29]; // 8039E23C
  c->r[5]=0u+0x00000000u; // 8039E240
  c->lr=0x8039E248u; f_803B5FC4(c); // 8039E244
L_8039E248:;
  c->r[3]=c->r[29]|c->r[29]; // 8039E248
L_8039E24C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039E24C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039E250
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039E254
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039E258
  c->lr=c->r[0]; // 8039E25C
  c->r[1]=c->r[1]+0x00000020u; // 8039E260
  return; // 8039E264
}

// fn_8039E268
void f_8039E268(Ctx* __restrict c) {
  trace_call(0x8039E268u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E268
  c->r[0]=c->lr; // 8039E26C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039E270
  c->r[0]=R8(c->r[3]+0x00000188u); // 8039E274
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039E278
  c->r[31]=c->r[8]|c->r[8]; // 8039E27C
  cmps(c,0,(int32_t)c->r[0],0); // 8039E280
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039E284
  c->r[30]=c->r[7]|c->r[7]; // 8039E288
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039E28C
  c->r[29]=c->r[4]|c->r[4]; // 8039E290
  if (!crb(c,2)) { goto L_8039E2A0; } // 8039E294
  c->r[3]=0u+0x00000000u; // 8039E298
  goto L_8039E314; // 8039E29C
L_8039E2A0:;
  cmpu(c,0,c->r[5],0x00000078u); // 8039E2A0
  if (!crb(c,0)) { goto L_8039E2B0; } // 8039E2A4
  c->r[3]=0u+0x00000000u; // 8039E2A8
  goto L_8039E314; // 8039E2AC
L_8039E2B0:;
  c->r[3]=c->r[6]|c->r[6]; // 8039E2B0
  c->lr=0x8039E2B8u; f_80265E38(c); // 8039E2B4
  cmps(c,0,(int32_t)c->r[3],0); // 8039E2B8
  c->r[4]=c->r[3]|c->r[3]; // 8039E2BC
  if (!crb(c,0)) { goto L_8039E2CC; } // 8039E2C0
  c->r[3]=0u+0x00000000u; // 8039E2C4
  goto L_8039E314; // 8039E2C8
L_8039E2CC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8039E2CC
  if (crb(c,2)) { goto L_8039E310; } // 8039E2D0
  c->r[3]=c->r[29]|c->r[29]; // 8039E2D4
  c->lr=0x8039E2DCu; f_803B605C(c); // 8039E2D8
  c->r[3]=0u+0x80430000u; // 8039E2DC
  cmps(c,0,(int32_t)c->r[31],0); // 8039E2E0
  c->r[3]=c->r[3]+0x00006FE8u; // 8039E2E4
  W32(c->r[29]+0x00000070u,c->r[30]); // 8039E2E8
  W32(c->r[29]+0x00000000u,c->r[3]); // 8039E2EC
  W32(c->r[29]+0x00000074u,c->r[31]); // 8039E2F0
  if (!crb(c,2)) { goto L_8039E300; } // 8039E2F4
  c->r[0]=R32(c->r[29]+0x00000014u); // 8039E2F8
  W32(c->r[29]+0x00000074u,c->r[0]); // 8039E2FC
L_8039E300:;
  c->r[4]=R32(c->r[29]+0x00000070u); // 8039E300
  c->r[3]=c->r[29]|c->r[29]; // 8039E304
  c->r[5]=0u+0x00000000u; // 8039E308
  c->lr=0x8039E310u; f_803B5FC4(c); // 8039E30C
L_8039E310:;
  c->r[3]=c->r[29]|c->r[29]; // 8039E310
L_8039E314:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039E314
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039E318
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039E31C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039E320
  c->lr=c->r[0]; // 8039E324
  c->r[1]=c->r[1]+0x00000020u; // 8039E328
  return; // 8039E32C
}

// fn_8039E330
void f_8039E330(Ctx* __restrict c) {
  trace_call(0x8039E330u);
  c->r[3]=0u+0x00000078u; // 8039E330
  return; // 8039E334
}

// fn_8039E338
void f_8039E338(Ctx* __restrict c) {
  trace_call(0x8039E338u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E338
  c->r[0]=c->lr; // 8039E33C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039E340
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039E344
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039E348
  c->r[30]=c->r[4]|c->r[4]; // 8039E34C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039E350
  c->r[29]=c->r[3]|c->r[3]; // 8039E354
  c->r[31]=R32(c->r[3]+0x00000124u); // 8039E358
  c->r[6]=R32(c->r[3]+0x00000120u); // 8039E35C
  cmpu(c,0,c->r[5],c->r[31]); // 8039E360
  if (!crb(c,0)) { goto L_8039E370; } // 8039E364
  c->r[3]=0u+0x00000000u; // 8039E368
  goto L_8039E3A4; // 8039E36C
L_8039E370:;
  c->r[5]=c->r[31]|c->r[31]; // 8039E370
  c->r[7]=0u+0x00000002u; // 8039E374
  c->r[3]=c->r[3]+0x0000014Cu; // 8039E378
  c->lr=0x8039E380u; f_80266720(c); // 8039E37C
  cmpu(c,0,c->r[3],c->r[31]); // 8039E380
  if (crb(c,2)) { goto L_8039E390; } // 8039E384
  c->r[3]=0u+0x00000000u; // 8039E388
  goto L_8039E3A4; // 8039E38C
L_8039E390:;
  c->r[4]=c->r[30]|c->r[30]; // 8039E390
  c->r[5]=c->r[31]|c->r[31]; // 8039E394
  c->r[3]=c->r[29]+0x00000108u; // 8039E398
  c->lr=0x8039E3A0u; f_803A6E60(c); // 8039E39C
  c->r[3]=0u+0x00000001u; // 8039E3A0
L_8039E3A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039E3A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039E3A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039E3AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039E3B0
  c->lr=c->r[0]; // 8039E3B4
  c->r[1]=c->r[1]+0x00000020u; // 8039E3B8
  return; // 8039E3BC
}

// fn_8039E3C0
void f_8039E3C0(Ctx* __restrict c) {
  trace_call(0x8039E3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E3C0
  c->r[0]=c->lr; // 8039E3C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039E3C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039E3CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039E3D0
  c->r[30]=c->r[4]|c->r[4]; // 8039E3D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039E3D8
  c->r[29]=c->r[3]|c->r[3]; // 8039E3DC
  c->r[31]=R32(c->r[3]+0x0000011Cu); // 8039E3E0
  c->r[6]=R32(c->r[3]+0x00000118u); // 8039E3E4
  cmpu(c,0,c->r[5],c->r[31]); // 8039E3E8
  if (!crb(c,0)) { goto L_8039E3F8; } // 8039E3EC
  c->r[3]=0u+0x00000000u; // 8039E3F0
  goto L_8039E42C; // 8039E3F4
L_8039E3F8:;
  c->r[5]=c->r[31]|c->r[31]; // 8039E3F8
  c->r[7]=0u+0x00000002u; // 8039E3FC
  c->r[3]=c->r[3]+0x0000014Cu; // 8039E400
  c->lr=0x8039E408u; f_80266720(c); // 8039E404
  cmpu(c,0,c->r[3],c->r[31]); // 8039E408
  if (crb(c,2)) { goto L_8039E418; } // 8039E40C
  c->r[3]=0u+0x00000000u; // 8039E410
  goto L_8039E42C; // 8039E414
L_8039E418:;
  c->r[4]=c->r[30]|c->r[30]; // 8039E418
  c->r[5]=c->r[31]|c->r[31]; // 8039E41C
  c->r[3]=c->r[29]+0x00000108u; // 8039E420
  c->lr=0x8039E428u; f_803A6DB8(c); // 8039E424
  c->r[3]=0u+0x00000001u; // 8039E428
L_8039E42C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039E42C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039E430
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039E434
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039E438
  c->lr=c->r[0]; // 8039E43C
  c->r[1]=c->r[1]+0x00000020u; // 8039E440
  return; // 8039E444
}

// fn_8039E448
void f_8039E448(Ctx* __restrict c) {
  trace_call(0x8039E448u);
  c->r[8]=R32(c->r[3]+0x00000018u); // 8039E448
  c->r[7]=R32(c->r[3]+0x00000070u); // 8039E44C
  c->r[6]=R32(c->r[3]+0x00000074u); // 8039E450
  c->r[0]=c->r[8]+c->r[5]; // 8039E454
  c->r[6]=c->r[7]+c->r[6]; // 8039E458
  cmpu(c,0,c->r[0],c->r[6]); // 8039E45C
  if (!crb(c,1)) { goto L_8039E470; } // 8039E460
  c->r[5]=c->r[6]-c->r[8]; // 8039E464
  c->r[0]=c->r[5]+0x0000001Fu; // 8039E468
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039E46C
L_8039E470:;
  f_803B619C(c); return; // 8039E470
}

// fn_8039E474
void f_8039E474(Ctx* __restrict c) {
  trace_call(0x8039E474u);
  cmps(c,0,(int32_t)c->r[5],1); // 8039E474
  if (crb(c,2)) { goto L_8039E4A4; } // 8039E478
  if (!crb(c,0)) { goto L_8039E48C; } // 8039E47C
  cmps(c,0,(int32_t)c->r[5],0); // 8039E480
  if (!crb(c,0)) { goto L_8039E498; } // 8039E484
  return; // 8039E488
L_8039E48C:;
  cmps(c,0,(int32_t)c->r[5],3); // 8039E48C
  if (!crb(c,0)) return; // 8039E490
  goto L_8039E4B0; // 8039E494
L_8039E498:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 8039E498
  c->r[4]=c->r[4]+c->r[0]; // 8039E49C
  goto L_8039E4C8; // 8039E4A0
L_8039E4A4:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8039E4A4
  c->r[4]=c->r[4]+c->r[0]; // 8039E4A8
  goto L_8039E4C8; // 8039E4AC
L_8039E4B0:;
  c->r[5]=R32(c->r[3]+0x00000070u); // 8039E4B0
  c->r[0]=R32(c->r[3]+0x00000074u); // 8039E4B4
  c->r[0]=c->r[5]+c->r[0]; // 8039E4B8
  c->r[4]=c->r[0]-c->r[4]; // 8039E4BC
  goto L_8039E4C8; // 8039E4C0
  return; // 8039E4C4
L_8039E4C8:;
  c->r[5]=R32(c->r[3]+0x00000070u); // 8039E4C8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8039E4CC
  if (!crb(c,0)) { goto L_8039E4DC; } // 8039E4D0
  c->r[4]=c->r[5]|c->r[5]; // 8039E4D4
  goto L_8039E4F0; // 8039E4D8
L_8039E4DC:;
  c->r[0]=R32(c->r[3]+0x00000074u); // 8039E4DC
  c->r[0]=c->r[5]+c->r[0]; // 8039E4E0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8039E4E4
  if (!crb(c,1)) { goto L_8039E4F0; } // 8039E4E8
  c->r[4]=c->r[0]|c->r[0]; // 8039E4EC
L_8039E4F0:;
  c->r[5]=0u+0x00000000u; // 8039E4F0
  f_803B5FC4(c); return; // 8039E4F4
  return; // 8039E4F8
}

// fn_8039E4FC
void f_8039E4FC(Ctx* __restrict c) {
  trace_call(0x8039E4FCu);
  c->r[3]=0u+0x00000020u; // 8039E4FC
  return; // 8039E500
}

// fn_8039E504
void f_8039E504(Ctx* __restrict c) {
  trace_call(0x8039E504u);
  c->r[3]=0u+0x00000020u; // 8039E504
  return; // 8039E508
}

// fn_8039E50C
void f_8039E50C(Ctx* __restrict c) {
  trace_call(0x8039E50Cu);
  c->r[3]=0u+0x00000004u; // 8039E50C
  return; // 8039E510
}

// fn_8039E514
void f_8039E514(Ctx* __restrict c) {
  trace_call(0x8039E514u);
  c->r[3]=0u+0x00000001u; // 8039E514
  return; // 8039E518
}

// fn_8039E51C
void f_8039E51C(Ctx* __restrict c) {
  trace_call(0x8039E51Cu);
  c->r[3]=0u+0x00000000u; // 8039E51C
  return; // 8039E520
}

// fn_8039E524
void f_8039E524(Ctx* __restrict c) {
  trace_call(0x8039E524u);
  c->r[3]=0u+0x00000001u; // 8039E524
  return; // 8039E528
}

// fn_8039E52C
void f_8039E52C(Ctx* __restrict c) {
  trace_call(0x8039E52Cu);
  c->r[3]=0u+0x00000001u; // 8039E52C
  return; // 8039E530
}

// fn_8039E534
void f_8039E534(Ctx* __restrict c) {
  trace_call(0x8039E534u);
  c->r[3]=R8(c->r[3]+0x0000006Cu); // 8039E534
  return; // 8039E538
}

// fn_8039E53C
void f_8039E53C(Ctx* __restrict c) {
  trace_call(0x8039E53Cu);
  c->r[3]=0u+0x00000000u; // 8039E53C
  return; // 8039E540
}

// fn_8039E544
void f_8039E544(Ctx* __restrict c) {
  trace_call(0x8039E544u);
  c->r[3]=0u+0x00000000u; // 8039E544
  return; // 8039E548
}

// fn_8039E54C
void f_8039E54C(Ctx* __restrict c) {
  trace_call(0x8039E54Cu);
  c->r[3]=0u+0x00000000u; // 8039E54C
  return; // 8039E550
}

// fn_8039E554
void f_8039E554(Ctx* __restrict c) {
  trace_call(0x8039E554u);
  c->r[3]=c->r[13]+0xFFFFA0B0u; // 8039E554
  return; // 8039E558
}

// fn_8039E55C
void f_8039E55C(Ctx* __restrict c) {
  trace_call(0x8039E55Cu);
  c->r[3]=R32(c->r[3]+0x00000074u); // 8039E55C
  return; // 8039E560
}

// Tell__Q44nw4r3snd15DvdSoundArchive13DvdFileStreamCFv
void f_8039E564(Ctx* __restrict c) {
  trace_call(0x8039E564u);
  c->r[4]=R32(c->r[3]+0x00000070u); // 8039E564
  c->r[0]=R32(c->r[3]+0x00000018u); // 8039E568
  c->r[3]=c->r[0]-c->r[4]; // 8039E56C
  return; // 8039E570
}

// fn_8039E574
void f_8039E574(Ctx* __restrict c) {
  trace_call(0x8039E574u);
  c->r[3]=0u+0x00000000u; // 8039E574
  return; // 8039E578
}

// fn_8039E57C
void f_8039E57C(Ctx* __restrict c) {
  trace_call(0x8039E57Cu);
  c->r[3]=0u+0x00000000u; // 8039E57C
  return; // 8039E580
}

// fn_8039E584
void f_8039E584(Ctx* __restrict c) {
  trace_call(0x8039E584u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E584
  c->r[0]=c->lr; // 8039E588
  cmps(c,0,(int32_t)c->r[3],0); // 8039E58C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039E590
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039E594
  c->r[31]=c->r[4]|c->r[4]; // 8039E598
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039E59C
  c->r[30]=c->r[3]|c->r[3]; // 8039E5A0
  if (crb(c,2)) { goto L_8039E5C0; } // 8039E5A4
  c->r[4]=0u+0x00000000u; // 8039E5A8
  c->lr=0x8039E5B0u; f_803B6144(c); // 8039E5AC
  cmps(c,0,(int32_t)c->r[31],0); // 8039E5B0
  if (!crb(c,1)) { goto L_8039E5C0; } // 8039E5B4
  c->r[3]=c->r[30]|c->r[30]; // 8039E5B8
  c->lr=0x8039E5C0u; f_802896EC(c); // 8039E5BC
L_8039E5C0:;
  c->r[3]=c->r[30]|c->r[30]; // 8039E5C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039E5C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039E5C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039E5CC
  c->lr=c->r[0]; // 8039E5D0
  c->r[1]=c->r[1]+0x00000010u; // 8039E5D4
  return; // 8039E5D8
}

// fn_8039E5DC
void f_8039E5DC(Ctx* __restrict c) {
  trace_call(0x8039E5DCu);
  {uint32_t ea=c->r[2]+0xFFFFEDE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E5DC
  c->r[5]=0u+0x803F0000u; // 8039E5E0
  {uint32_t ea=c->r[2]+0xFFFFEDE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E5E4
  c->r[4]=0u+0x0000007Fu; // 8039E5E8
  c->r[5]=c->r[5]+0xFFFFE330u; // 8039E5EC
  {uint32_t ea=c->r[2]+0xFFFFEDE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039E5F0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8039E5F4
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E5F8
  c->r[0]=0u+0x00000000u; // 8039E5FC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8039E600
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 8039E604
  W8(c->r[3]+0x00000014u,c->r[4]); // 8039E608
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8039E60C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8039E610
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039E614
  return; // 8039E618
}

// fn_8039E61C
void f_8039E61C(Ctx* __restrict c) {
  trace_call(0x8039E61Cu);
  {uint32_t ea=c->r[2]+0xFFFFEDE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E61C
  c->r[4]=0u+0x803F0000u; // 8039E620
  {uint32_t ea=c->r[2]+0xFFFFEDE4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039E624
  c->r[0]=0u+0x00000000u; // 8039E628
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8039E62C
  c->r[4]=c->r[4]+0xFFFFE330u; // 8039E630
  {uint32_t ea=c->r[4]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E634
  c->r[4]=0u+0x0000007Fu; // 8039E638
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8039E63C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 8039E640
  W8(c->r[3]+0x00000014u,c->r[4]); // 8039E644
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 8039E648
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8039E64C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039E650
  return; // 8039E654
}

// Reset__Q44nw4r3snd6detail12EnvGeneratorFf
void f_8039E658(Ctx* __restrict c) {
  trace_call(0x8039E658u);
  {uint32_t ea=c->r[2]+0xFFFFEDE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E658
  c->r[0]=0u+0x00000000u; // 8039E65C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039E660
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8039E664
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8039E668
  return; // 8039E66C
}

// GetValue__Q44nw4r3snd6detail12EnvGeneratorCFv
void f_8039E670(Ctx* __restrict c) {
  trace_call(0x8039E670u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8039E670
  cmps(c,0,(int32_t)c->r[0],0); // 8039E674
  if (!crb(c,2)) { goto L_8039E68C; } // 8039E678
  {uint32_t ea=c->r[2]+0xFFFFEDECu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E67C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E680
  fcmp(c,0,c->f[1],c->f[0]); // 8039E684
  if (crb(c,2)) return; // 8039E688
L_8039E68C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E68C
  {uint32_t ea=c->r[2]+0xFFFFEDE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E690
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8039E694
  return; // 8039E698
}

// fn_8039E69C
void f_8039E69C(Ctx* __restrict c) {
  trace_call(0x8039E69Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E69C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8039E6A0
  cmps(c,0,(int32_t)c->r[0],2); // 8039E6A4
  if (crb(c,2)) { goto L_8039E7B8; } // 8039E6A8
  if (!crb(c,0)) { goto L_8039E6C0; } // 8039E6AC
  cmps(c,0,(int32_t)c->r[0],0); // 8039E6B0
  if (crb(c,2)) { goto L_8039E6CC; } // 8039E6B4
  if (!crb(c,0)) { goto L_8039E718; } // 8039E6B8
  goto L_8039E7B8; // 8039E6BC
L_8039E6C0:;
  cmps(c,0,(int32_t)c->r[0],4); // 8039E6C0
  if (!crb(c,0)) { goto L_8039E7B8; } // 8039E6C4
  goto L_8039E788; // 8039E6C8
L_8039E6CC:;
  {uint32_t ea=c->r[2]+0xFFFFEDECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E6CC
  c->r[0]=0u+0x00000001u; // 8039E6D0
  {uint32_t ea=c->r[2]+0xFFFFEDF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E6D4
  c->ctr=c->r[4]; // 8039E6D8
  cmps(c,0,(int32_t)c->r[4],0); // 8039E6DC
  if (!crb(c,1)) { goto L_8039E70C; } // 8039E6E0
L_8039E6E4:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8039E6E4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8039E6E8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039E6EC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 8039E6F0
  fcmp(c,0,c->f[2],c->f[1]); // 8039E6F4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8039E6F8
  if (!crb(c,1)) { goto L_8039E708; } // 8039E6FC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8039E700
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039E704
L_8039E708:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8039E6E4; } // 8039E708
L_8039E70C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8039E70C
  cmps(c,0,(int32_t)c->r[0],1); // 8039E710
  if (!crb(c,2)) { goto L_8039E7B8; } // 8039E714
L_8039E718:;
  c->r[5]=0u+0x43300000u; // 8039E718
  c->r[0]=c->r[4]^0x80000000u; // 8039E71C
  c->r[6]=R8(c->r[3]+0x00000014u); // 8039E720
  c->r[4]=0u+0x803F0000u; // 8039E724
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039E728
  c->r[4]=c->r[4]+0xFFFFE230u; // 8039E72C
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8039E730
  {uint32_t ea=c->r[2]+0xFFFFEDF8u; c->f[3]=RF64(ea);} // 8039E734
  W32(c->r[1]+0x00000010u,c->r[5]); // 8039E738
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[0]); // 8039E73C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8039E740
  c->r[0]=c->r[0]^0x80000000u; // 8039E744
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E748
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8039E74C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039E750
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E754
  W32(c->r[1]+0x00000008u,c->r[5]); // 8039E758
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8039E75C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8039E760
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8039E764
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8039E768
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8039E76C
  fcmp(c,0,c->f[0],c->f[1]); // 8039E770
  if (crb(c,1)) { goto L_8039E7B8; } // 8039E774
  c->r[0]=0u+0x00000002u; // 8039E778
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8039E77C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039E780
  goto L_8039E7B8; // 8039E784
L_8039E788:;
  c->r[4]=c->r[4]^0x80000000u; // 8039E788
  c->r[0]=0u+0x43300000u; // 8039E78C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8039E790
  {uint32_t ea=c->r[2]+0xFFFFEDF8u; c->f[3]=RF64(ea);} // 8039E794
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039E798
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E79C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8039E7A0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E7A4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8039E7A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8039E7AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8039E7B0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8039E7B4
L_8039E7B8:;
  c->r[1]=c->r[1]+0x00000020u; // 8039E7B8
  return; // 8039E7BC
}

// SetAttack__Q44nw4r3snd6detail12EnvGeneratorFi
void f_8039E7C0(Ctx* __restrict c) {
  trace_call(0x8039E7C0u);
  c->r[5]=0u+0x803F0000u; // 8039E7C0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8039E7C4
  c->r[5]=c->r[5]+0xFFFFE330u; // 8039E7C8
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E7CC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8039E7D0
  return; // 8039E7D4
}

// fn_8039E7D8
void f_8039E7D8(Ctx* __restrict c) {
  trace_call(0x8039E7D8u);
  cmps(c,0,(int32_t)c->r[4],127); // 8039E7D8
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E7DC
  if (!crb(c,2)) { goto L_8039E7EC; } // 8039E7E0
  {uint32_t ea=c->r[2]+0xFFFFEDE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E7E4
  goto L_8039E86C; // 8039E7E8
L_8039E7EC:;
  cmps(c,0,(int32_t)c->r[4],126); // 8039E7EC
  if (!crb(c,2)) { goto L_8039E7FC; } // 8039E7F0
  {uint32_t ea=c->r[2]+0xFFFFEE00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E7F4
  goto L_8039E86C; // 8039E7F8
L_8039E7FC:;
  cmps(c,0,(int32_t)c->r[4],50); // 8039E7FC
  if (!crb(c,0)) { goto L_8039E83C; } // 8039E800
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8039E804
  c->r[0]=0u+0x43300000u; // 8039E808
  c->r[4]=c->r[4]+0x00000001u; // 8039E80C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039E810
  c->r[0]=c->r[4]^0x80000000u; // 8039E814
  {uint32_t ea=c->r[2]+0xFFFFEDF8u; c->f[3]=RF64(ea);} // 8039E818
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039E81C
  {uint32_t ea=c->r[2]+0xFFFFEE04u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E820
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8039E824
  {uint32_t ea=c->r[2]+0xFFFFEE08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E828
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8039E82C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8039E830
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039E834
  goto L_8039E86C; // 8039E838
L_8039E83C:;
  c->r[4]=addc(c,~c->r[4],0x0000007Eu,1); // 8039E83C
  c->r[0]=0u+0x43300000u; // 8039E840
  c->r[4]=c->r[4]^0x80000000u; // 8039E844
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039E848
  {uint32_t ea=c->r[2]+0xFFFFEDF8u; c->f[3]=RF64(ea);} // 8039E84C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8039E850
  {uint32_t ea=c->r[2]+0xFFFFEE0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E854
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8039E858
  {uint32_t ea=c->r[2]+0xFFFFEE08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E85C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8039E860
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8039E864
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039E868
L_8039E86C:;
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8039E86C
  c->r[1]=c->r[1]+0x00000020u; // 8039E870
  return; // 8039E874
}

// fn_8039E878
void f_8039E878(Ctx* __restrict c) {
  trace_call(0x8039E878u);
  W8(c->r[3]+0x00000014u,c->r[4]); // 8039E878
  return; // 8039E87C
}

// SetRelease__Q44nw4r3snd6detail12EnvGeneratorFi
void f_8039E880(Ctx* __restrict c) {
  trace_call(0x8039E880u);
  cmps(c,0,(int32_t)c->r[4],127); // 8039E880
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E884
  if (!crb(c,2)) { goto L_8039E894; } // 8039E888
  {uint32_t ea=c->r[2]+0xFFFFEDE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E88C
  goto L_8039E914; // 8039E890
L_8039E894:;
  cmps(c,0,(int32_t)c->r[4],126); // 8039E894
  if (!crb(c,2)) { goto L_8039E8A4; } // 8039E898
  {uint32_t ea=c->r[2]+0xFFFFEE00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E89C
  goto L_8039E914; // 8039E8A0
L_8039E8A4:;
  cmps(c,0,(int32_t)c->r[4],50); // 8039E8A4
  if (!crb(c,0)) { goto L_8039E8E4; } // 8039E8A8
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8039E8AC
  c->r[0]=0u+0x43300000u; // 8039E8B0
  c->r[4]=c->r[4]+0x00000001u; // 8039E8B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039E8B8
  c->r[0]=c->r[4]^0x80000000u; // 8039E8BC
  {uint32_t ea=c->r[2]+0xFFFFEDF8u; c->f[3]=RF64(ea);} // 8039E8C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039E8C4
  {uint32_t ea=c->r[2]+0xFFFFEE04u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E8C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 8039E8CC
  {uint32_t ea=c->r[2]+0xFFFFEE08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E8D0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8039E8D4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8039E8D8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039E8DC
  goto L_8039E914; // 8039E8E0
L_8039E8E4:;
  c->r[4]=addc(c,~c->r[4],0x0000007Eu,1); // 8039E8E4
  c->r[0]=0u+0x43300000u; // 8039E8E8
  c->r[4]=c->r[4]^0x80000000u; // 8039E8EC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039E8F0
  {uint32_t ea=c->r[2]+0xFFFFEDF8u; c->f[3]=RF64(ea);} // 8039E8F4
  W32(c->r[1]+0x00000014u,c->r[4]); // 8039E8F8
  {uint32_t ea=c->r[2]+0xFFFFEE0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039E8FC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8039E900
  {uint32_t ea=c->r[2]+0xFFFFEE08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E904
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8039E908
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8039E90C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8039E910
L_8039E914:;
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8039E914
  c->r[1]=c->r[1]+0x00000020u; // 8039E918
  return; // 8039E91C
}

// fn_8039E920
void f_8039E920(Ctx* __restrict c) {
  trace_call(0x8039E920u);
  c->r[4]=0u+0x00000000u; // 8039E920
  {uint32_t ea=c->r[2]+0xFFFFEE10u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039E924
  W32(c->r[3]+0x00000004u,c->r[4]); // 8039E928
  c->r[5]=c->r[3]+0x00000004u; // 8039E92C
  c->r[0]=0u+0x00000001u; // 8039E930
  W32(c->r[3]+0x00000008u,c->r[4]); // 8039E934
  W32(c->r[3]+0x00000000u,c->r[4]); // 8039E938
  W32(c->r[3]+0x00000004u,c->r[5]); // 8039E93C
  W32(c->r[3]+0x00000008u,c->r[5]); // 8039E940
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 8039E944
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8039E948
  return; // 8039E94C
}

// fn_8039E950
void f_8039E950(Ctx* __restrict c) {
  trace_call(0x8039E950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E950
  c->r[0]=c->lr; // 8039E954
  cmps(c,0,(int32_t)c->r[3],0); // 8039E958
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039E95C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039E960
  c->r[31]=c->r[4]|c->r[4]; // 8039E964
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039E968
  c->r[30]=c->r[3]|c->r[3]; // 8039E96C
  if (crb(c,2)) { goto L_8039E9BC; } // 8039E970
  c->r[4]=R32(c->r[3]+0x00000004u); // 8039E974
  c->r[0]=c->r[3]+0x00000004u; // 8039E978
  c->r[5]=0u+0x00000000u; // 8039E97C
  goto L_8039E990; // 8039E980
L_8039E984:;
  c->r[6]=c->r[4]|c->r[4]; // 8039E984
  c->r[4]=R32(c->r[4]+0x00000000u); // 8039E988
  W32(c->r[6]+0xFFFFFF44u,c->r[5]); // 8039E98C
L_8039E990:;
  cmpu(c,0,c->r[4],c->r[0]); // 8039E990
  if (!crb(c,2)) { IRQCHK(c); goto L_8039E984; } // 8039E994
  cmps(c,0,(int32_t)c->r[3],0); // 8039E998
  if (crb(c,2)) { goto L_8039E9AC; } // 8039E99C
  c->r[3]=c->r[30]|c->r[30]; // 8039E9A0
  c->r[4]=0u+0x00000000u; // 8039E9A4
  c->lr=0x8039E9ACu; f_803B4FA4(c); // 8039E9A8
L_8039E9AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8039E9AC
  if (!crb(c,1)) { goto L_8039E9BC; } // 8039E9B0
  c->r[3]=c->r[30]|c->r[30]; // 8039E9B4
  c->lr=0x8039E9BCu; f_802896EC(c); // 8039E9B8
L_8039E9BC:;
  c->r[3]=c->r[30]|c->r[30]; // 8039E9BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039E9C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039E9C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039E9C8
  c->lr=c->r[0]; // 8039E9CC
  c->r[1]=c->r[1]+0x00000010u; // 8039E9D0
  return; // 8039E9D4
}

// fn_8039E9D8
void f_8039E9D8(Ctx* __restrict c) {
  trace_call(0x8039E9D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039E9D8
  c->r[0]=c->lr; // 8039E9DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039E9E0
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 8039E9E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039E9E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8039E9EC
  c->r[30]=c->r[3]|c->r[3]; // 8039E9F0
  c->r[5]=R32(c->r[3]+0x00000000u); // 8039E9F4
  W16(c->r[3]+0x0000000Cu,c->r[4]); // 8039E9F8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8039E9FC
  if (!crb(c,1)) { goto L_8039EA80; } // 8039EA00
  c->r[31]=c->r[3]+0x00000004u; // 8039EA04
  goto L_8039EA70; // 8039EA08
L_8039EA0C:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 8039EA0C
  c->r[6]=0u+0x00000080u; // 8039EA10
  c->r[3]=0u+0x00000000u; // 8039EA14
  goto L_8039EA58; // 8039EA18
L_8039EA1C:;
  c->r[5]=R8(c->r[4]+0xFFFFFFA4u); // 8039EA1C
  c->r[7]=c->r[4]+0xFFFFFF30u; // 8039EA20
  c->r[0]=R32(c->r[4]+0xFFFFFF70u); // 8039EA24
  c->r[5]=c->r[5]+c->r[0]; // 8039EA28
  cmps(c,0,(int32_t)c->r[5],127); // 8039EA2C
  if (!crb(c,1)) { goto L_8039EA3C; } // 8039EA30
  c->r[0]=0u+0x0000007Fu; // 8039EA34
  goto L_8039EA44; // 8039EA38
L_8039EA3C:;
  c->r[0]=sraw(c,c->r[5],31); // 8039EA3C
  c->r[0]=c->r[5]&~c->r[0]; // 8039EA40
L_8039EA44:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8039EA44
  if (!crb(c,1)) { goto L_8039EA54; } // 8039EA48
  c->r[3]=c->r[7]|c->r[7]; // 8039EA4C
  c->r[6]=c->r[0]|c->r[0]; // 8039EA50
L_8039EA54:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 8039EA54
L_8039EA58:;
  cmpu(c,0,c->r[4],c->r[31]); // 8039EA58
  if (!crb(c,2)) { IRQCHK(c); goto L_8039EA1C; } // 8039EA5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8039EA60
  c->r[12]=R32(c->r[12]+0x00000028u); // 8039EA64
  c->ctr=c->r[12]; // 8039EA68
  if (true) { c->lr=0x8039EA70u; dispatch(c,c->ctr); } // 8039EA6C
L_8039EA70:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8039EA70
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 8039EA74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8039EA78
  if (crb(c,1)) { IRQCHK(c); goto L_8039EA0C; } // 8039EA7C
L_8039EA80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039EA80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039EA84
  c->r[30]=R32(c->r[1]+0x00000008u); // 8039EA88
  c->lr=c->r[0]; // 8039EA8C
  c->r[1]=c->r[1]+0x00000010u; // 8039EA90
  return; // 8039EA94
}

// fn_8039EA98
void f_8039EA98(Ctx* __restrict c) {
  trace_call(0x8039EA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039EA98
  c->r[0]=c->lr; // 8039EA9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039EAA0
  c->r[0]=c->r[3]+0x00000004u; // 8039EAA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039EAA8
  c->r[31]=c->r[4]|c->r[4]; // 8039EAAC
  c->r[4]=c->r[1]+0x00000008u; // 8039EAB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039EAB4
  c->r[30]=c->r[3]|c->r[3]; // 8039EAB8
  c->r[5]=c->r[31]+0x000000D0u; // 8039EABC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039EAC0
  c->lr=0x8039EAC8u; f_803B50B4(c); // 8039EAC4
  W32(c->r[31]+0x00000014u,c->r[30]); // 8039EAC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039EACC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039EAD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039EAD4
  c->lr=c->r[0]; // 8039EAD8
  c->r[1]=c->r[1]+0x00000020u; // 8039EADC
  return; // 8039EAE0
}

// fn_8039EAE4
void f_8039EAE4(Ctx* __restrict c) {
  trace_call(0x8039EAE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039EAE4
  c->r[0]=c->lr; // 8039EAE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039EAEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8039EAF0
  c->r[31]=c->r[4]|c->r[4]; // 8039EAF4
  c->r[4]=c->r[4]+0x000000D0u; // 8039EAF8
  c->lr=0x8039EB00u; f_803B50E0(c); // 8039EAFC
  c->r[0]=0u+0x00000000u; // 8039EB00
  W32(c->r[31]+0x00000014u,c->r[0]); // 8039EB04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8039EB08
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039EB0C
  c->lr=c->r[0]; // 8039EB10
  c->r[1]=c->r[1]+0x00000010u; // 8039EB14
  return; // 8039EB18
}

// fn_8039EB1C
void f_8039EB1C(Ctx* __restrict c) {
  trace_call(0x8039EB1Cu);
  c->r[4]=R32(c->r[3]+0x00000004u); // 8039EB1C
  c->r[0]=c->r[3]+0x00000004u; // 8039EB20
  c->r[8]=0u+0x00000080u; // 8039EB24
  c->r[3]=0u+0x00000000u; // 8039EB28
  goto L_8039EB6C; // 8039EB2C
L_8039EB30:;
  c->r[6]=R8(c->r[4]+0xFFFFFFA4u); // 8039EB30
  c->r[7]=c->r[4]+0xFFFFFF30u; // 8039EB34
  c->r[5]=R32(c->r[4]+0xFFFFFF70u); // 8039EB38
  c->r[6]=c->r[6]+c->r[5]; // 8039EB3C
  cmps(c,0,(int32_t)c->r[6],127); // 8039EB40
  if (!crb(c,1)) { goto L_8039EB50; } // 8039EB44
  c->r[5]=0u+0x0000007Fu; // 8039EB48
  goto L_8039EB58; // 8039EB4C
L_8039EB50:;
  c->r[5]=sraw(c,c->r[6],31); // 8039EB50
  c->r[5]=c->r[6]&~c->r[5]; // 8039EB54
L_8039EB58:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 8039EB58
  if (!crb(c,1)) { goto L_8039EB68; } // 8039EB5C
  c->r[3]=c->r[7]|c->r[7]; // 8039EB60
  c->r[8]=c->r[5]|c->r[5]; // 8039EB64
L_8039EB68:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 8039EB68
L_8039EB6C:;
  cmpu(c,0,c->r[4],c->r[0]); // 8039EB6C
  if (!crb(c,2)) { IRQCHK(c); goto L_8039EB30; } // 8039EB70
  return; // 8039EB74
}

// __ct__Q44nw4r3snd6detail9FrameHeapFv
void f_8039EB78(Ctx* __restrict c) {
  trace_call(0x8039EB78u);
  c->r[0]=0u+0x00000000u; // 8039EB78
  c->r[4]=c->r[3]+0x00000008u; // 8039EB7C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039EB80
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039EB84
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039EB88
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039EB8C
  W32(c->r[3]+0x00000008u,c->r[4]); // 8039EB90
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8039EB94
  return; // 8039EB98
}

// fn_8039EB9C
void f_8039EB9C(Ctx* __restrict c) {
  trace_call(0x8039EB9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039EB9C
  c->r[0]=c->lr; // 8039EBA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039EBA4
  c->r[11]=c->r[1]+0x00000020u; // 8039EBA8
  c->lr=0x8039EBB0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8039EBAC
  cmps(c,0,(int32_t)c->r[3],0); // 8039EBB0
  c->r[27]=c->r[3]|c->r[3]; // 8039EBB4
  c->r[28]=c->r[4]|c->r[4]; // 8039EBB8
  if (crb(c,2)) { goto L_8039EC94; } // 8039EBBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8039EBC0
  cmps(c,0,(int32_t)c->r[0],0); // 8039EBC4
  if (crb(c,2)) { goto L_8039EC74; } // 8039EBC8
  if (crb(c,2)) { goto L_8039EC74; } // 8039EBCC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8039EBD0
  cmps(c,0,(int32_t)c->r[0],0); // 8039EBD4
  if (crb(c,2)) { goto L_8039EC58; } // 8039EBD8
  c->r[31]=c->r[3]+0x00000008u; // 8039EBDC
  goto L_8039EC4C; // 8039EBE0
L_8039EBE4:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 8039EBE4
  cmps(c,0,(int32_t)c->r[29],0); // 8039EBE8
  if (crb(c,2)) { goto L_8039EC40; } // 8039EBEC
  c->r[30]=c->r[29]+0x0000000Cu; // 8039EBF0
  goto L_8039EC24; // 8039EBF4
L_8039EBF8:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 8039EBF8
  cmps(c,0,(int32_t)c->r[30],0); // 8039EBFC
  if (crb(c,2)) { goto L_8039EC24; } // 8039EC00
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8039EC04
  cmps(c,0,(int32_t)c->r[12],0); // 8039EC08
  if (crb(c,2)) { goto L_8039EC24; } // 8039EC0C
  c->r[3]=c->r[30]+0x00000020u; // 8039EC10
  c->r[4]=R32(c->r[30]+0x00000008u); // 8039EC14
  c->r[5]=R32(c->r[30]+0x00000010u); // 8039EC18
  c->ctr=c->r[12]; // 8039EC1C
  if (true) { c->lr=0x8039EC24u; dispatch(c,c->ctr); } // 8039EC20
L_8039EC24:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8039EC24
  cmpu(c,0,c->r[30],c->r[0]); // 8039EC28
  if (!crb(c,2)) { IRQCHK(c); goto L_8039EBF8; } // 8039EC2C
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 8039EC30
  if (crb(c,2)) { goto L_8039EC40; } // 8039EC34
  c->r[4]=0u+0x00000000u; // 8039EC38
  c->lr=0x8039EC40u; f_803B4FA4(c); // 8039EC3C
L_8039EC40:;
  c->r[4]=c->r[29]|c->r[29]; // 8039EC40
  c->r[3]=c->r[27]+0x00000004u; // 8039EC44
  c->lr=0x8039EC4Cu; f_803B50E0(c); // 8039EC48
L_8039EC4C:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 8039EC4C
  cmps(c,0,(int32_t)c->r[0],0); // 8039EC50
  if (!crb(c,2)) { IRQCHK(c); goto L_8039EBE4; } // 8039EC54
L_8039EC58:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 8039EC58
  c->r[4]=0u+0x00000003u; // 8039EC5C
  c->lr=0x8039EC64u; f_802A6AB8(c); // 8039EC60
  c->r[3]=R32(c->r[27]+0x00000000u); // 8039EC64
  c->lr=0x8039EC6Cu; f_802A6968(c); // 8039EC68
  c->r[0]=0u+0x00000000u; // 8039EC6C
  W32(c->r[27]+0x00000000u,c->r[0]); // 8039EC70
L_8039EC74:;
  c->r[3]=addc(c,c->r[27],0x00000004u,0); cr0(c,c->r[3]); // 8039EC74
  if (crb(c,2)) { goto L_8039EC84; } // 8039EC78
  c->r[4]=0u+0x00000000u; // 8039EC7C
  c->lr=0x8039EC84u; f_803B4FA4(c); // 8039EC80
L_8039EC84:;
  cmps(c,0,(int32_t)c->r[28],0); // 8039EC84
  if (!crb(c,1)) { goto L_8039EC94; } // 8039EC88
  c->r[3]=c->r[27]|c->r[27]; // 8039EC8C
  c->lr=0x8039EC94u; f_802896EC(c); // 8039EC90
L_8039EC94:;
  c->r[11]=c->r[1]+0x00000020u; // 8039EC94
  c->r[3]=c->r[27]|c->r[27]; // 8039EC98
  c->lr=0x8039ECA0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8039EC9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039ECA0
  c->lr=c->r[0]; // 8039ECA4
  c->r[1]=c->r[1]+0x00000020u; // 8039ECA8
  return; // 8039ECAC
}

// fn_8039ECB0
void f_8039ECB0(Ctx* __restrict c) {
  trace_call(0x8039ECB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039ECB0
  c->r[0]=c->lr; // 8039ECB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8039ECB8
  c->r[11]=c->r[1]+0x00000030u; // 8039ECBC
  c->lr=0x8039ECC4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8039ECC0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8039ECC4
  c->r[26]=c->r[3]|c->r[3]; // 8039ECC8
  c->r[27]=c->r[4]|c->r[4]; // 8039ECCC
  c->r[28]=c->r[5]|c->r[5]; // 8039ECD0
  cmps(c,0,(int32_t)c->r[0],0); // 8039ECD4
  if (crb(c,2)) { goto L_8039ED84; } // 8039ECD8
  if (crb(c,2)) { goto L_8039ED84; } // 8039ECDC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8039ECE0
  cmps(c,0,(int32_t)c->r[0],0); // 8039ECE4
  if (crb(c,2)) { goto L_8039ED68; } // 8039ECE8
  c->r[31]=c->r[3]+0x00000008u; // 8039ECEC
  goto L_8039ED5C; // 8039ECF0
L_8039ECF4:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 8039ECF4
  cmps(c,0,(int32_t)c->r[29],0); // 8039ECF8
  if (crb(c,2)) { goto L_8039ED50; } // 8039ECFC
  c->r[30]=c->r[29]+0x0000000Cu; // 8039ED00
  goto L_8039ED34; // 8039ED04
L_8039ED08:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 8039ED08
  cmps(c,0,(int32_t)c->r[30],0); // 8039ED0C
  if (crb(c,2)) { goto L_8039ED34; } // 8039ED10
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8039ED14
  cmps(c,0,(int32_t)c->r[12],0); // 8039ED18
  if (crb(c,2)) { goto L_8039ED34; } // 8039ED1C
  c->r[3]=c->r[30]+0x00000020u; // 8039ED20
  c->r[4]=R32(c->r[30]+0x00000008u); // 8039ED24
  c->r[5]=R32(c->r[30]+0x00000010u); // 8039ED28
  c->ctr=c->r[12]; // 8039ED2C
  if (true) { c->lr=0x8039ED34u; dispatch(c,c->ctr); } // 8039ED30
L_8039ED34:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8039ED34
  cmpu(c,0,c->r[30],c->r[0]); // 8039ED38
  if (!crb(c,2)) { IRQCHK(c); goto L_8039ED08; } // 8039ED3C
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 8039ED40
  if (crb(c,2)) { goto L_8039ED50; } // 8039ED44
  c->r[4]=0u+0x00000000u; // 8039ED48
  c->lr=0x8039ED50u; f_803B4FA4(c); // 8039ED4C
L_8039ED50:;
  c->r[4]=c->r[29]|c->r[29]; // 8039ED50
  c->r[3]=c->r[26]+0x00000004u; // 8039ED54
  c->lr=0x8039ED5Cu; f_803B50E0(c); // 8039ED58
L_8039ED5C:;
  c->r[0]=R32(c->r[26]+0x00000004u); // 8039ED5C
  cmps(c,0,(int32_t)c->r[0],0); // 8039ED60
  if (!crb(c,2)) { IRQCHK(c); goto L_8039ECF4; } // 8039ED64
L_8039ED68:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 8039ED68
  c->r[4]=0u+0x00000003u; // 8039ED6C
  c->lr=0x8039ED74u; f_802A6AB8(c); // 8039ED70
  c->r[3]=R32(c->r[26]+0x00000000u); // 8039ED74
  c->lr=0x8039ED7Cu; f_802A6968(c); // 8039ED78
  c->r[0]=0u+0x00000000u; // 8039ED7C
  W32(c->r[26]+0x00000000u,c->r[0]); // 8039ED80
L_8039ED84:;
  c->r[0]=c->r[27]+0x00000003u; // 8039ED84
  c->r[4]=c->r[27]+c->r[28]; // 8039ED88
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8039ED8C
  cmpu(c,0,c->r[3],c->r[4]); // 8039ED90
  if (!crb(c,1)) { goto L_8039EDA0; } // 8039ED94
  c->r[3]=0u+0x00000000u; // 8039ED98
  goto L_8039EE34; // 8039ED9C
L_8039EDA0:;
  c->r[4]=c->r[4]-c->r[3]; // 8039EDA0
  c->r[5]=0u+0x00000000u; // 8039EDA4
  c->lr=0x8039EDACu; f_802A68E4(c); // 8039EDA8
  cmps(c,0,(int32_t)c->r[3],0); // 8039EDAC
  W32(c->r[26]+0x00000000u,c->r[3]); // 8039EDB0
  if (!crb(c,2)) { goto L_8039EDC0; } // 8039EDB4
  c->r[3]=0u+0x00000000u; // 8039EDB8
  goto L_8039EE34; // 8039EDBC
L_8039EDC0:;
  c->r[4]=0u+0x00000014u; // 8039EDC0
  c->r[5]=0u+0x00000004u; // 8039EDC4
  c->lr=0x8039EDCCu; f_802A6998(c); // 8039EDC8
  cmps(c,0,(int32_t)c->r[3],0); // 8039EDCC
  if (!crb(c,2)) { goto L_8039EDDC; } // 8039EDD0
  c->r[0]=0u+0x00000000u; // 8039EDD4
  goto L_8039EE20; // 8039EDD8
L_8039EDDC:;
  c->r[5]=c->r[3]|c->r[3]; // 8039EDDC
  if (crb(c,2)) { goto L_8039EE08; } // 8039EDE0
  c->r[0]=0u+0x00000000u; // 8039EDE4
  c->r[4]=c->r[3]+0x0000000Cu; // 8039EDE8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039EDEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039EDF0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039EDF4
  W32(c->r[3]+0x00000010u,c->r[0]); // 8039EDF8
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039EDFC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8039EE00
  W32(c->r[3]+0x00000010u,c->r[4]); // 8039EE04
L_8039EE08:;
  c->r[0]=c->r[26]+0x00000008u; // 8039EE08
  c->r[3]=c->r[26]+0x00000004u; // 8039EE0C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039EE10
  c->r[4]=c->r[1]+0x00000008u; // 8039EE14
  c->lr=0x8039EE1Cu; f_803B50B4(c); // 8039EE18
  c->r[0]=0u+0x00000001u; // 8039EE1C
L_8039EE20:;
  cmps(c,0,(int32_t)c->r[0],0); // 8039EE20
  if (!crb(c,2)) { goto L_8039EE30; } // 8039EE24
  c->r[3]=0u+0x00000000u; // 8039EE28
  goto L_8039EE34; // 8039EE2C
L_8039EE30:;
  c->r[3]=0u+0x00000001u; // 8039EE30
L_8039EE34:;
  c->r[11]=c->r[1]+0x00000030u; // 8039EE34
  c->lr=0x8039EE3Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8039EE38
  c->r[0]=R32(c->r[1]+0x00000034u); // 8039EE3C
  c->lr=c->r[0]; // 8039EE40
  c->r[1]=c->r[1]+0x00000030u; // 8039EE44
  return; // 8039EE48
}

// fn_8039EE4C
void f_8039EE4C(Ctx* __restrict c) {
  trace_call(0x8039EE4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039EE4C
  c->r[0]=c->lr; // 8039EE50
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039EE54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039EE58
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039EE5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039EE60
  W32(c->r[1]+0x00000010u,c->r[28]); // 8039EE64
  c->r[28]=c->r[3]|c->r[3]; // 8039EE68
  c->r[0]=R32(c->r[3]+0x00000000u); // 8039EE6C
  cmps(c,0,(int32_t)c->r[0],0); // 8039EE70
  if (crb(c,2)) { goto L_8039EF1C; } // 8039EE74
  c->r[0]=R32(c->r[3]+0x00000004u); // 8039EE78
  cmps(c,0,(int32_t)c->r[0],0); // 8039EE7C
  if (crb(c,2)) { goto L_8039EF00; } // 8039EE80
  c->r[31]=c->r[3]+0x00000008u; // 8039EE84
  goto L_8039EEF4; // 8039EE88
L_8039EE8C:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 8039EE8C
  cmps(c,0,(int32_t)c->r[29],0); // 8039EE90
  if (crb(c,2)) { goto L_8039EEE8; } // 8039EE94
  c->r[30]=c->r[29]+0x0000000Cu; // 8039EE98
  goto L_8039EECC; // 8039EE9C
L_8039EEA0:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 8039EEA0
  cmps(c,0,(int32_t)c->r[30],0); // 8039EEA4
  if (crb(c,2)) { goto L_8039EECC; } // 8039EEA8
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8039EEAC
  cmps(c,0,(int32_t)c->r[12],0); // 8039EEB0
  if (crb(c,2)) { goto L_8039EECC; } // 8039EEB4
  c->r[3]=c->r[30]+0x00000020u; // 8039EEB8
  c->r[4]=R32(c->r[30]+0x00000008u); // 8039EEBC
  c->r[5]=R32(c->r[30]+0x00000010u); // 8039EEC0
  c->ctr=c->r[12]; // 8039EEC4
  if (true) { c->lr=0x8039EECCu; dispatch(c,c->ctr); } // 8039EEC8
L_8039EECC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8039EECC
  cmpu(c,0,c->r[30],c->r[0]); // 8039EED0
  if (!crb(c,2)) { IRQCHK(c); goto L_8039EEA0; } // 8039EED4
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 8039EED8
  if (crb(c,2)) { goto L_8039EEE8; } // 8039EEDC
  c->r[4]=0u+0x00000000u; // 8039EEE0
  c->lr=0x8039EEE8u; f_803B4FA4(c); // 8039EEE4
L_8039EEE8:;
  c->r[4]=c->r[29]|c->r[29]; // 8039EEE8
  c->r[3]=c->r[28]+0x00000004u; // 8039EEEC
  c->lr=0x8039EEF4u; f_803B50E0(c); // 8039EEF0
L_8039EEF4:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8039EEF4
  cmps(c,0,(int32_t)c->r[0],0); // 8039EEF8
  if (!crb(c,2)) { IRQCHK(c); goto L_8039EE8C; } // 8039EEFC
L_8039EF00:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8039EF00
  c->r[4]=0u+0x00000003u; // 8039EF04
  c->lr=0x8039EF0Cu; f_802A6AB8(c); // 8039EF08
  c->r[3]=R32(c->r[28]+0x00000000u); // 8039EF0C
  c->lr=0x8039EF14u; f_802A6968(c); // 8039EF10
  c->r[0]=0u+0x00000000u; // 8039EF14
  W32(c->r[28]+0x00000000u,c->r[0]); // 8039EF18
L_8039EF1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039EF1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039EF20
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039EF24
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039EF28
  c->r[28]=R32(c->r[1]+0x00000010u); // 8039EF2C
  c->lr=c->r[0]; // 8039EF30
  c->r[1]=c->r[1]+0x00000020u; // 8039EF34
  return; // 8039EF38
}

// fn_8039EF3C
void f_8039EF3C(Ctx* __restrict c) {
  trace_call(0x8039EF3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039EF3C
  c->r[0]=c->lr; // 8039EF40
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039EF44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039EF48
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039EF4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039EF50
  W32(c->r[1]+0x00000010u,c->r[28]); // 8039EF54
  c->r[28]=c->r[3]|c->r[3]; // 8039EF58
  c->r[0]=R32(c->r[3]+0x00000004u); // 8039EF5C
  cmps(c,0,(int32_t)c->r[0],0); // 8039EF60
  if (crb(c,2)) { goto L_8039EFE4; } // 8039EF64
  c->r[31]=c->r[3]+0x00000008u; // 8039EF68
  goto L_8039EFD8; // 8039EF6C
L_8039EF70:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 8039EF70
  cmps(c,0,(int32_t)c->r[29],0); // 8039EF74
  if (crb(c,2)) { goto L_8039EFCC; } // 8039EF78
  c->r[30]=c->r[29]+0x0000000Cu; // 8039EF7C
  goto L_8039EFB0; // 8039EF80
L_8039EF84:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 8039EF84
  cmps(c,0,(int32_t)c->r[30],0); // 8039EF88
  if (crb(c,2)) { goto L_8039EFB0; } // 8039EF8C
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8039EF90
  cmps(c,0,(int32_t)c->r[12],0); // 8039EF94
  if (crb(c,2)) { goto L_8039EFB0; } // 8039EF98
  c->r[3]=c->r[30]+0x00000020u; // 8039EF9C
  c->r[4]=R32(c->r[30]+0x00000008u); // 8039EFA0
  c->r[5]=R32(c->r[30]+0x00000010u); // 8039EFA4
  c->ctr=c->r[12]; // 8039EFA8
  if (true) { c->lr=0x8039EFB0u; dispatch(c,c->ctr); } // 8039EFAC
L_8039EFB0:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8039EFB0
  cmpu(c,0,c->r[30],c->r[0]); // 8039EFB4
  if (!crb(c,2)) { IRQCHK(c); goto L_8039EF84; } // 8039EFB8
  c->r[3]=addc(c,c->r[29],0x00000008u,0); cr0(c,c->r[3]); // 8039EFBC
  if (crb(c,2)) { goto L_8039EFCC; } // 8039EFC0
  c->r[4]=0u+0x00000000u; // 8039EFC4
  c->lr=0x8039EFCCu; f_803B4FA4(c); // 8039EFC8
L_8039EFCC:;
  c->r[4]=c->r[29]|c->r[29]; // 8039EFCC
  c->r[3]=c->r[28]+0x00000004u; // 8039EFD0
  c->lr=0x8039EFD8u; f_803B50E0(c); // 8039EFD4
L_8039EFD8:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8039EFD8
  cmps(c,0,(int32_t)c->r[0],0); // 8039EFDC
  if (!crb(c,2)) { IRQCHK(c); goto L_8039EF70; } // 8039EFE0
L_8039EFE4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8039EFE4
  c->r[4]=0u+0x00000003u; // 8039EFE8
  c->lr=0x8039EFF0u; f_802A6AB8(c); // 8039EFEC
  c->r[3]=R32(c->r[28]+0x00000000u); // 8039EFF0
  c->r[4]=0u+0x00000014u; // 8039EFF4
  c->r[5]=0u+0x00000004u; // 8039EFF8
  c->lr=0x8039F000u; f_802A6998(c); // 8039EFFC
  cmps(c,0,(int32_t)c->r[3],0); // 8039F000
  if (crb(c,2)) { goto L_8039F048; } // 8039F004
  c->r[5]=c->r[3]|c->r[3]; // 8039F008
  if (crb(c,2)) { goto L_8039F034; } // 8039F00C
  c->r[0]=0u+0x00000000u; // 8039F010
  c->r[4]=c->r[3]+0x0000000Cu; // 8039F014
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039F018
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039F01C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039F020
  W32(c->r[3]+0x00000010u,c->r[0]); // 8039F024
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039F028
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8039F02C
  W32(c->r[3]+0x00000010u,c->r[4]); // 8039F030
L_8039F034:;
  c->r[0]=c->r[28]+0x00000008u; // 8039F034
  c->r[3]=c->r[28]+0x00000004u; // 8039F038
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039F03C
  c->r[4]=c->r[1]+0x00000008u; // 8039F040
  c->lr=0x8039F048u; f_803B50B4(c); // 8039F044
L_8039F048:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039F048
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039F04C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039F050
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039F054
  c->r[28]=R32(c->r[1]+0x00000010u); // 8039F058
  c->lr=c->r[0]; // 8039F05C
  c->r[1]=c->r[1]+0x00000020u; // 8039F060
  return; // 8039F064
}

// fn_8039F068
void f_8039F068(Ctx* __restrict c) {
  trace_call(0x8039F068u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F068
  c->r[0]=c->lr; // 8039F06C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8039F070
  c->r[11]=c->r[1]+0x00000030u; // 8039F074
  c->lr=0x8039F07Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8039F078
  c->r[0]=c->r[4]+0x0000001Fu; // 8039F07C
  c->r[27]=c->r[3]|c->r[3]; // 8039F080
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039F084
  c->r[3]=R32(c->r[3]+0x00000000u); // 8039F088
  c->r[28]=c->r[4]|c->r[4]; // 8039F08C
  c->r[29]=c->r[5]|c->r[5]; // 8039F090
  c->r[30]=c->r[6]|c->r[6]; // 8039F094
  c->r[4]=c->r[7]+0x00000020u; // 8039F098
  c->r[5]=0u+0x00000020u; // 8039F09C
  c->lr=0x8039F0A4u; f_802A6998(c); // 8039F0A0
  cmps(c,0,(int32_t)c->r[3],0); // 8039F0A4
  c->r[31]=c->r[3]|c->r[3]; // 8039F0A8
  if (!crb(c,2)) { goto L_8039F0B8; } // 8039F0AC
  c->r[3]=0u+0x00000000u; // 8039F0B0
  goto L_8039F0F4; // 8039F0B4
L_8039F0B8:;
  if (crb(c,2)) { goto L_8039F0D4; } // 8039F0B8
  c->r[0]=0u+0x00000000u; // 8039F0BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039F0C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039F0C4
  W32(c->r[3]+0x00000008u,c->r[28]); // 8039F0C8
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 8039F0CC
  W32(c->r[3]+0x00000010u,c->r[30]); // 8039F0D0
L_8039F0D4:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 8039F0D4
  c->r[5]=c->r[31]|c->r[31]; // 8039F0D8
  c->r[4]=c->r[1]+0x00000008u; // 8039F0DC
  c->r[0]=c->r[3]+0x0000000Cu; // 8039F0E0
  c->r[3]=c->r[3]+0x00000008u; // 8039F0E4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039F0E8
  c->lr=0x8039F0F0u; f_803B50B4(c); // 8039F0EC
  c->r[3]=c->r[31]+0x00000020u; // 8039F0F0
L_8039F0F4:;
  c->r[11]=c->r[1]+0x00000030u; // 8039F0F4
  c->lr=0x8039F0FCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8039F0F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8039F0FC
  c->lr=c->r[0]; // 8039F100
  c->r[1]=c->r[1]+0x00000030u; // 8039F104
  return; // 8039F108
}

// fn_8039F10C
void f_8039F10C(Ctx* __restrict c) {
  trace_call(0x8039F10Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F10C
  c->r[0]=c->lr; // 8039F110
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039F114
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039F118
  c->r[31]=c->r[3]|c->r[3]; // 8039F11C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8039F120
  c->r[4]=R32(c->r[31]+0x00000004u); // 8039F124
  c->lr=0x8039F12Cu; f_802A6BD0(c); // 8039F128
  cmps(c,0,(int32_t)c->r[3],0); // 8039F12C
  if (!crb(c,2)) { goto L_8039F13C; } // 8039F130
  c->r[3]=0u+0xFFFFFFFFu; // 8039F134
  goto L_8039F1C4; // 8039F138
L_8039F13C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8039F13C
  c->r[4]=0u+0x00000014u; // 8039F140
  c->r[5]=0u+0x00000004u; // 8039F144
  c->lr=0x8039F14Cu; f_802A6998(c); // 8039F148
  cmps(c,0,(int32_t)c->r[3],0); // 8039F14C
  if (!crb(c,2)) { goto L_8039F15C; } // 8039F150
  c->r[0]=0u+0x00000000u; // 8039F154
  goto L_8039F1A0; // 8039F158
L_8039F15C:;
  c->r[5]=c->r[3]|c->r[3]; // 8039F15C
  if (crb(c,2)) { goto L_8039F188; } // 8039F160
  c->r[0]=0u+0x00000000u; // 8039F164
  c->r[4]=c->r[3]+0x0000000Cu; // 8039F168
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039F16C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039F170
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039F174
  W32(c->r[3]+0x00000010u,c->r[0]); // 8039F178
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039F17C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8039F180
  W32(c->r[3]+0x00000010u,c->r[4]); // 8039F184
L_8039F188:;
  c->r[0]=c->r[31]+0x00000008u; // 8039F188
  c->r[3]=c->r[31]+0x00000004u; // 8039F18C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039F190
  c->r[4]=c->r[1]+0x00000008u; // 8039F194
  c->lr=0x8039F19Cu; f_803B50B4(c); // 8039F198
  c->r[0]=0u+0x00000001u; // 8039F19C
L_8039F1A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8039F1A0
  if (!crb(c,2)) { goto L_8039F1BC; } // 8039F1A4
  c->r[3]=R32(c->r[31]+0x00000000u); // 8039F1A8
  c->r[4]=0u+0x00000000u; // 8039F1AC
  c->lr=0x8039F1B4u; f_802A6CA4(c); // 8039F1B0
  c->r[3]=0u+0xFFFFFFFFu; // 8039F1B4
  goto L_8039F1C4; // 8039F1B8
L_8039F1BC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8039F1BC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8039F1C0
L_8039F1C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039F1C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039F1C8
  c->lr=c->r[0]; // 8039F1CC
  c->r[1]=c->r[1]+0x00000020u; // 8039F1D0
  return; // 8039F1D4
}

// fn_8039F1D8
void f_8039F1D8(Ctx* __restrict c) {
  trace_call(0x8039F1D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F1D8
  c->r[0]=c->lr; // 8039F1DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8039F1E0
  c->r[11]=c->r[1]+0x00000030u; // 8039F1E4
  c->lr=0x8039F1ECu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8039F1E8
  cmps(c,0,(int32_t)c->r[4],0); // 8039F1EC
  c->r[31]=c->r[3]|c->r[3]; // 8039F1F0
  c->r[27]=c->r[4]|c->r[4]; // 8039F1F4
  if (!crb(c,2)) { goto L_8039F2EC; } // 8039F1F8
  c->r[0]=R32(c->r[3]+0x00000004u); // 8039F1FC
  cmps(c,0,(int32_t)c->r[0],0); // 8039F200
  if (crb(c,2)) { goto L_8039F284; } // 8039F204
  c->r[30]=c->r[3]+0x00000008u; // 8039F208
  goto L_8039F278; // 8039F20C
L_8039F210:;
  c->r[28]=R32(c->r[30]+0x00000004u); // 8039F210
  cmps(c,0,(int32_t)c->r[28],0); // 8039F214
  if (crb(c,2)) { goto L_8039F26C; } // 8039F218
  c->r[29]=c->r[28]+0x0000000Cu; // 8039F21C
  goto L_8039F250; // 8039F220
L_8039F224:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 8039F224
  cmps(c,0,(int32_t)c->r[29],0); // 8039F228
  if (crb(c,2)) { goto L_8039F250; } // 8039F22C
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 8039F230
  cmps(c,0,(int32_t)c->r[12],0); // 8039F234
  if (crb(c,2)) { goto L_8039F250; } // 8039F238
  c->r[3]=c->r[29]+0x00000020u; // 8039F23C
  c->r[4]=R32(c->r[29]+0x00000008u); // 8039F240
  c->r[5]=R32(c->r[29]+0x00000010u); // 8039F244
  c->ctr=c->r[12]; // 8039F248
  if (true) { c->lr=0x8039F250u; dispatch(c,c->ctr); } // 8039F24C
L_8039F250:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 8039F250
  cmpu(c,0,c->r[29],c->r[0]); // 8039F254
  if (!crb(c,2)) { IRQCHK(c); goto L_8039F224; } // 8039F258
  c->r[3]=addc(c,c->r[28],0x00000008u,0); cr0(c,c->r[3]); // 8039F25C
  if (crb(c,2)) { goto L_8039F26C; } // 8039F260
  c->r[4]=0u+0x00000000u; // 8039F264
  c->lr=0x8039F26Cu; f_803B4FA4(c); // 8039F268
L_8039F26C:;
  c->r[4]=c->r[28]|c->r[28]; // 8039F26C
  c->r[3]=c->r[31]+0x00000004u; // 8039F270
  c->lr=0x8039F278u; f_803B50E0(c); // 8039F274
L_8039F278:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8039F278
  cmps(c,0,(int32_t)c->r[0],0); // 8039F27C
  if (!crb(c,2)) { IRQCHK(c); goto L_8039F210; } // 8039F280
L_8039F284:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8039F284
  c->r[4]=0u+0x00000003u; // 8039F288
  c->lr=0x8039F290u; f_802A6AB8(c); // 8039F28C
  c->r[3]=R32(c->r[31]+0x00000000u); // 8039F290
  c->r[4]=0u+0x00000014u; // 8039F294
  c->r[5]=0u+0x00000004u; // 8039F298
  c->lr=0x8039F2A0u; f_802A6998(c); // 8039F29C
  cmps(c,0,(int32_t)c->r[3],0); // 8039F2A0
  if (crb(c,2)) { goto L_8039F3E4; } // 8039F2A4
  c->r[5]=c->r[3]|c->r[3]; // 8039F2A8
  if (crb(c,2)) { goto L_8039F2D4; } // 8039F2AC
  c->r[0]=0u+0x00000000u; // 8039F2B0
  c->r[4]=c->r[3]+0x0000000Cu; // 8039F2B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039F2B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039F2BC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039F2C0
  W32(c->r[3]+0x00000010u,c->r[0]); // 8039F2C4
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039F2C8
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8039F2CC
  W32(c->r[3]+0x00000010u,c->r[4]); // 8039F2D0
L_8039F2D4:;
  c->r[0]=c->r[31]+0x00000008u; // 8039F2D4
  c->r[3]=c->r[31]+0x00000004u; // 8039F2D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039F2DC
  c->r[4]=c->r[1]+0x0000000Cu; // 8039F2E0
  c->lr=0x8039F2E8u; f_803B50B4(c); // 8039F2E4
  goto L_8039F3E4; // 8039F2E8
L_8039F2EC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8039F2EC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8039F2F0
  if (!crb(c,0)) { goto L_8039F374; } // 8039F2F4
  c->r[30]=c->r[3]+0x00000008u; // 8039F2F8
  goto L_8039F368; // 8039F2FC
L_8039F300:;
  c->r[28]=R32(c->r[30]+0x00000004u); // 8039F300
  cmps(c,0,(int32_t)c->r[28],0); // 8039F304
  if (crb(c,2)) { goto L_8039F35C; } // 8039F308
  c->r[29]=c->r[28]+0x0000000Cu; // 8039F30C
  goto L_8039F340; // 8039F310
L_8039F314:;
  c->r[29]=R32(c->r[29]+0x00000004u); // 8039F314
  cmps(c,0,(int32_t)c->r[29],0); // 8039F318
  if (crb(c,2)) { goto L_8039F340; } // 8039F31C
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 8039F320
  cmps(c,0,(int32_t)c->r[12],0); // 8039F324
  if (crb(c,2)) { goto L_8039F340; } // 8039F328
  c->r[3]=c->r[29]+0x00000020u; // 8039F32C
  c->r[4]=R32(c->r[29]+0x00000008u); // 8039F330
  c->r[5]=R32(c->r[29]+0x00000010u); // 8039F334
  c->ctr=c->r[12]; // 8039F338
  if (true) { c->lr=0x8039F340u; dispatch(c,c->ctr); } // 8039F33C
L_8039F340:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 8039F340
  cmpu(c,0,c->r[29],c->r[0]); // 8039F344
  if (!crb(c,2)) { IRQCHK(c); goto L_8039F314; } // 8039F348
  c->r[3]=addc(c,c->r[28],0x00000008u,0); cr0(c,c->r[3]); // 8039F34C
  if (crb(c,2)) { goto L_8039F35C; } // 8039F350
  c->r[4]=0u+0x00000000u; // 8039F354
  c->lr=0x8039F35Cu; f_803B4FA4(c); // 8039F358
L_8039F35C:;
  c->r[4]=c->r[28]|c->r[28]; // 8039F35C
  c->r[3]=c->r[31]+0x00000004u; // 8039F360
  c->lr=0x8039F368u; f_803B50E0(c); // 8039F364
L_8039F368:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8039F368
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 8039F36C
  if (crb(c,0)) { IRQCHK(c); goto L_8039F300; } // 8039F370
L_8039F374:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8039F374
  c->r[4]=c->r[27]|c->r[27]; // 8039F378
  c->lr=0x8039F380u; f_802A6CA4(c); // 8039F37C
  c->r[3]=R32(c->r[31]+0x00000000u); // 8039F380
  c->r[4]=R32(c->r[31]+0x00000004u); // 8039F384
  c->lr=0x8039F38Cu; f_802A6BD0(c); // 8039F388
  c->r[3]=R32(c->r[31]+0x00000000u); // 8039F38C
  c->r[4]=0u+0x00000014u; // 8039F390
  c->r[5]=0u+0x00000004u; // 8039F394
  c->lr=0x8039F39Cu; f_802A6998(c); // 8039F398
  cmps(c,0,(int32_t)c->r[3],0); // 8039F39C
  if (crb(c,2)) { goto L_8039F3E4; } // 8039F3A0
  c->r[5]=c->r[3]|c->r[3]; // 8039F3A4
  if (crb(c,2)) { goto L_8039F3D0; } // 8039F3A8
  c->r[0]=0u+0x00000000u; // 8039F3AC
  c->r[4]=c->r[3]+0x0000000Cu; // 8039F3B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8039F3B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039F3B8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8039F3BC
  W32(c->r[3]+0x00000010u,c->r[0]); // 8039F3C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039F3C4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8039F3C8
  W32(c->r[3]+0x00000010u,c->r[4]); // 8039F3CC
L_8039F3D0:;
  c->r[0]=c->r[31]+0x00000008u; // 8039F3D0
  c->r[3]=c->r[31]+0x00000004u; // 8039F3D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039F3D8
  c->r[4]=c->r[1]+0x00000008u; // 8039F3DC
  c->lr=0x8039F3E4u; f_803B50B4(c); // 8039F3E0
L_8039F3E4:;
  c->r[11]=c->r[1]+0x00000030u; // 8039F3E4
  c->lr=0x8039F3ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8039F3E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8039F3EC
  c->lr=c->r[0]; // 8039F3F0
  c->r[1]=c->r[1]+0x00000030u; // 8039F3F4
  return; // 8039F3F8
}

// fn_8039F3FC
void f_8039F3FC(Ctx* __restrict c) {
  trace_call(0x8039F3FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F3FC
  c->r[0]=c->lr; // 8039F400
  c->r[3]=R32(c->r[3]+0x00000000u); // 8039F404
  c->r[4]=0u+0x00000020u; // 8039F408
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039F40C
  c->lr=0x8039F414u; f_802A6B58(c); // 8039F410
  c->r[4]=0u+0x00000020u; // 8039F414
  c->r[0]=c->r[3]+0xFFFFFFE0u; // 8039F418
  c->r[3]=addc(c,~c->r[4],c->r[3],1); // 8039F41C
  c->r[3]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 8039F420
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039F424
  c->r[3]=c->r[0]&~c->r[3]; // 8039F428
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039F42C
  c->lr=c->r[0]; // 8039F430
  c->r[1]=c->r[1]+0x00000010u; // 8039F434
  return; // 8039F438
}

// fn_8039F43C
void f_8039F43C(Ctx* __restrict c) {
  trace_call(0x8039F43Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F43C
  c->r[0]=c->lr; // 8039F440
  c->r[5]=0u+0x80430000u; // 8039F444
  c->r[7]=0u+0x803F0000u; // 8039F448
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039F44C
  c->r[0]=0u+0x00000000u; // 8039F450
  c->r[5]=c->r[5]+0x00007070u; // 8039F454
  c->r[4]=c->r[1]+0x00000008u; // 8039F458
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039F45C
  c->r[31]=c->r[3]|c->r[3]; // 8039F460
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039F464
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039F468
  W32(c->r[3]+0x00000000u,c->r[5]); // 8039F46C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8039F470
  W32(c->r[3]+0x00000010u,c->r[0]); // 8039F474
  W32(c->r[3]+0x00000014u,c->r[0]); // 8039F478
  {uint32_t ea=c->r[7]+0xFFFFE530u; c->r[6]=R32(ea); c->r[7]=ea;} // 8039F47C
  c->r[5]=R32(c->r[7]+0x00000004u); // 8039F480
  c->r[0]=R32(c->r[7]+0x00000008u); // 8039F484
  W32(c->r[1]+0x00000008u,c->r[6]); // 8039F488
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8039F48C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039F490
  c->lr=0x8039F498u; f_8039F608(c); // 8039F494
  c->r[3]=c->r[31]|c->r[31]; // 8039F498
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039F49C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039F4A0
  c->lr=c->r[0]; // 8039F4A4
  c->r[1]=c->r[1]+0x00000020u; // 8039F4A8
  return; // 8039F4AC
}

// fn_8039F4B0
void f_8039F4B0(Ctx* __restrict c) {
  trace_call(0x8039F4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F4B0
  c->r[0]=c->lr; // 8039F4B4
  c->r[3]=c->r[3]+0x00000024u; // 8039F4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039F4BC
  c->lr=0x8039F4C4u; f_80279E2C(c); // 8039F4C0
  c->r[0]=c->r[3]+0x00000087u; // 8039F4C4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039F4C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039F4CC
  c->lr=c->r[0]; // 8039F4D0
  c->r[1]=c->r[1]+0x00000010u; // 8039F4D4
  return; // 8039F4D8
}

// fn_8039F4DC
void f_8039F4DC(Ctx* __restrict c) {
  trace_call(0x8039F4DCu);
  c->r[3]=c->r[3]+0x0000000Cu; // 8039F4DC
  f_8039B194(c); return; // 8039F4E0
}

// fn_8039F4E4
void f_8039F4E4(Ctx* __restrict c) {
  trace_call(0x8039F4E4u);
  c->r[3]=c->r[3]+0x0000000Cu; // 8039F4E4
  f_8039B1DC(c); return; // 8039F4E8
}

// fn_8039F4EC
void f_8039F4EC(Ctx* __restrict c) {
  trace_call(0x8039F4ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F4EC
  c->r[0]=c->lr; // 8039F4F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039F4F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039F4F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039F4FC
  c->r[30]=c->r[3]|c->r[3]; // 8039F500
  c->r[3]=c->r[3]+0x00000024u; // 8039F504
  c->lr=0x8039F50Cu; f_80279E2C(c); // 8039F508
  c->r[4]=R32(c->r[30]+0x00000010u); // 8039F50C
  c->r[0]=c->r[3]+0x00000087u; // 8039F510
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039F514
  cmps(c,0,(int32_t)c->r[4],0); // 8039F518
  if (!crb(c,2)) { goto L_8039F528; } // 8039F51C
  c->r[0]=0u+0x00000000u; // 8039F520
  goto L_8039F530; // 8039F524
L_8039F528:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8039F528
  c->r[0]=c->r[0]-c->r[4]; // 8039F52C
L_8039F530:;
  cmpu(c,0,c->r[3],c->r[0]); // 8039F530
  if (!crb(c,1)) { goto L_8039F540; } // 8039F534
  c->r[3]=0u+0x00000000u; // 8039F538
  goto L_8039F590; // 8039F53C
L_8039F540:;
  c->r[3]=c->r[30]+0x0000000Cu; // 8039F540
  c->r[4]=c->r[1]+0x0000000Cu; // 8039F544
  c->r[5]=c->r[1]+0x00000008u; // 8039F548
  c->lr=0x8039F550u; f_8039B1F0(c); // 8039F54C
  c->r[0]=0u+0x00000000u; // 8039F550
  c->r[3]=c->r[30]+0x00000024u; // 8039F554
  W32(c->r[13]+0xFFFF9FDCu,c->r[0]); // 8039F558
  c->lr=0x8039F560u; f_80279E30(c); // 8039F55C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039F560
  c->r[31]=c->r[3]|c->r[3]; // 8039F564
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039F568
  c->r[3]=c->r[30]+0x0000000Cu; // 8039F56C
  c->lr=0x8039F574u; f_8039B23C(c); // 8039F570
  c->r[3]=c->r[30]+0x00000024u; // 8039F574
  c->lr=0x8039F57Cu; f_80279E2C(c); // 8039F578
  c->r[0]=0u-c->r[31]; // 8039F57C
  c->r[3]=0u+0x00000001u; // 8039F580
  c->r[0]=c->r[0]|c->r[31]; // 8039F584
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 8039F588
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8039F58C
L_8039F590:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039F590
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039F594
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039F598
  c->lr=c->r[0]; // 8039F59C
  c->r[1]=c->r[1]+0x00000020u; // 8039F5A0
  return; // 8039F5A4
}

// fn_8039F5A8
void f_8039F5A8(Ctx* __restrict c) {
  trace_call(0x8039F5A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F5A8
  c->r[0]=c->lr; // 8039F5AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039F5B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039F5B4
  c->r[31]=c->r[3]|c->r[3]; // 8039F5B8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8039F5BC
  cmps(c,0,(int32_t)c->r[0],0); // 8039F5C0
  if (crb(c,2)) { goto L_8039F5F4; } // 8039F5C4
  c->r[0]=0u+0x00000000u; // 8039F5C8
  c->r[4]=c->r[1]+0x0000000Cu; // 8039F5CC
  {uint32_t ea=c->r[3]+0x0000000Cu; W8(ea,c->r[0]); c->r[3]=ea;} // 8039F5D0
  c->r[5]=c->r[1]+0x00000008u; // 8039F5D4
  c->lr=0x8039F5DCu; f_8039B1F0(c); // 8039F5D8
  c->r[3]=c->r[31]+0x00000024u; // 8039F5DC
  c->lr=0x8039F5E4u; f_80279ECC(c); // 8039F5E0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039F5E4
  c->r[3]=c->r[31]+0x0000000Cu; // 8039F5E8
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039F5EC
  c->lr=0x8039F5F4u; f_8039B23C(c); // 8039F5F0
L_8039F5F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039F5F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039F5F8
  c->lr=c->r[0]; // 8039F5FC
  c->r[1]=c->r[1]+0x00000020u; // 8039F600
  return; // 8039F604
}

// fn_8039F608
void f_8039F608(Ctx* __restrict c) {
  trace_call(0x8039F608u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F608
  c->r[0]=c->lr; // 8039F60C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039F610
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039F614
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039F618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039F61C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039F620
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039F624
  W32(c->r[1]+0x00000014u,c->r[29]); // 8039F628
  c->r[29]=c->r[4]|c->r[4]; // 8039F62C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8039F630
  c->r[28]=c->r[3]|c->r[3]; // 8039F634
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8039F638
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 8039F63C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8039F640
  c->lr=0x8039F648u; f_80289CCC(c); // 8039F644
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039F648
  c->r[31]=c->r[3]|c->r[3]; // 8039F64C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039F650
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8039F654
  c->lr=0x8039F65Cu; f_80289CCC(c); // 8039F658
  {uint32_t ea=c->r[2]+0xFFFFEE18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039F65C
  c->r[30]=c->r[3]|c->r[3]; // 8039F660
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039F664
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8039F668
  c->lr=0x8039F670u; f_80289CCC(c); // 8039F66C
  cmpu(c,0,c->r[31],0x00000032u); // 8039F670
  if (!crb(c,1)) { goto L_8039F680; } // 8039F674
  c->r[0]=0u+0x00000032u; // 8039F678
  goto L_8039F690; // 8039F67C
L_8039F680:;
  cmpu(c,0,c->r[31],0x00000001u); // 8039F680
  c->r[0]=0u+0x00000001u; // 8039F684
  if (crb(c,0)) { goto L_8039F690; } // 8039F688
  c->r[0]=c->r[31]|c->r[31]; // 8039F68C
L_8039F690:;
  cmpu(c,0,c->r[30],0x00000032u); // 8039F690
  W32(c->r[28]+0x000000C4u,c->r[0]); // 8039F694
  c->r[0]=0u+0x00000032u; // 8039F698
  if (crb(c,1)) { goto L_8039F6A4; } // 8039F69C
  c->r[0]=c->r[30]|c->r[30]; // 8039F6A0
L_8039F6A4:;
  cmpu(c,0,c->r[3],0x00002710u); // 8039F6A4
  W32(c->r[28]+0x000000C8u,c->r[0]); // 8039F6A8
  if (!crb(c,1)) { goto L_8039F6B8; } // 8039F6AC
  c->r[4]=0u+0x00002710u; // 8039F6B0
  goto L_8039F6C8; // 8039F6B4
L_8039F6B8:;
  cmpu(c,0,c->r[3],0x000001F4u); // 8039F6B8
  c->r[4]=0u+0x000001F4u; // 8039F6BC
  if (crb(c,0)) { goto L_8039F6C8; } // 8039F6C0
  c->r[4]=c->r[3]|c->r[3]; // 8039F6C4
L_8039F6C8:;
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 8039F6C8
  W32(c->r[28]+0x000000CCu,c->r[4]); // 8039F6CC
  cmps(c,0,(int32_t)c->r[0],0); // 8039F6D0
  if (!crb(c,2)) { goto L_8039F6E0; } // 8039F6D4
  c->r[3]=0u+0x00000001u; // 8039F6D8
  goto L_8039F754; // 8039F6DC
L_8039F6E0:;
  c->r[3]=c->r[28]+0x00000024u; // 8039F6E0
  c->lr=0x8039F6E8u; f_80279E2C(c); // 8039F6E4
  c->r[4]=R32(c->r[28]+0x00000010u); // 8039F6E8
  c->r[0]=c->r[3]+0x00000087u; // 8039F6EC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039F6F0
  cmps(c,0,(int32_t)c->r[4],0); // 8039F6F4
  if (!crb(c,2)) { goto L_8039F704; } // 8039F6F8
  c->r[0]=0u+0x00000000u; // 8039F6FC
  goto L_8039F70C; // 8039F700
L_8039F704:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8039F704
  c->r[0]=c->r[0]-c->r[4]; // 8039F708
L_8039F70C:;
  cmpu(c,0,c->r[3],c->r[0]); // 8039F70C
  if (!crb(c,1)) { goto L_8039F71C; } // 8039F710
  c->r[3]=0u+0x00000000u; // 8039F714
  goto L_8039F754; // 8039F718
L_8039F71C:;
  c->r[3]=c->r[28]+0x0000000Cu; // 8039F71C
  c->r[4]=c->r[1]+0x0000000Cu; // 8039F720
  c->r[5]=c->r[1]+0x00000008u; // 8039F724
  c->lr=0x8039F72Cu; f_8039B1F0(c); // 8039F728
  c->r[3]=c->r[28]+0x00000024u; // 8039F72C
  c->lr=0x8039F734u; f_80279EF0(c); // 8039F730
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039F734
  c->r[31]=c->r[3]|c->r[3]; // 8039F738
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039F73C
  c->r[3]=c->r[28]+0x0000000Cu; // 8039F740
  c->lr=0x8039F748u; f_8039B23C(c); // 8039F744
  c->r[0]=0u-c->r[31]; // 8039F748
  c->r[0]=c->r[0]|c->r[31]; // 8039F74C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8039F750
L_8039F754:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039F754
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039F758
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039F75C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8039F760
  c->r[28]=R32(c->r[1]+0x00000010u); // 8039F764
  c->lr=c->r[0]; // 8039F768
  c->r[1]=c->r[1]+0x00000020u; // 8039F76C
  return; // 8039F770
}

// fn_8039F774
void f_8039F774(Ctx* __restrict c) {
  trace_call(0x8039F774u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F774
  c->r[0]=c->lr; // 8039F778
  c->r[4]=c->r[3]|c->r[3]; // 8039F77C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039F780
  c->r[3]=c->r[1]+0x00000008u; // 8039F784
  c->r[4]=c->r[4]+0x00000024u; // 8039F788
  c->r[0]=R32(c->r[5]+0x00000000u); // 8039F78C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039F790
  c->r[0]=R32(c->r[5]+0x00000004u); // 8039F794
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039F798
  c->r[0]=R32(c->r[5]+0x00000008u); // 8039F79C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039F7A0
  c->lr=0x8039F7A8u; f_80279F8C(c); // 8039F7A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039F7A8
  c->lr=c->r[0]; // 8039F7AC
  c->r[1]=c->r[1]+0x00000020u; // 8039F7B0
  return; // 8039F7B4
}

// fn_8039F7B8
void f_8039F7B8(Ctx* __restrict c) {
  trace_call(0x8039F7B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F7B8
  c->r[0]=c->lr; // 8039F7BC
  c->r[4]=0u+0x80430000u; // 8039F7C0
  c->r[6]=0u+0x803F0000u; // 8039F7C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8039F7C8
  c->r[0]=0u+0x00000000u; // 8039F7CC
  c->r[4]=c->r[4]+0x00007090u; // 8039F7D0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8039F7D4
  c->r[31]=c->r[3]|c->r[3]; // 8039F7D8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039F7DC
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039F7E0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8039F7E4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8039F7E8
  W32(c->r[3]+0x00000010u,c->r[0]); // 8039F7EC
  W32(c->r[3]+0x00000014u,c->r[0]); // 8039F7F0
  {uint32_t ea=c->r[6]+0xFFFFE540u; c->r[5]=R32(ea); c->r[6]=ea;} // 8039F7F4
  c->r[4]=R32(c->r[6]+0x00000004u); // 8039F7F8
  c->r[0]=R32(c->r[6]+0x00000008u); // 8039F7FC
  W32(c->r[1]+0x00000010u,c->r[5]); // 8039F800
  W32(c->r[1]+0x00000014u,c->r[4]); // 8039F804
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039F808
  W32(c->r[1]+0x00000018u,c->r[0]); // 8039F80C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039F810
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039F814
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8039F818
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 8039F81C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8039F820
  c->lr=0x8039F828u; f_80289CCC(c); // 8039F824
  cmpu(c,0,c->r[3],0x00001388u); // 8039F828
  if (!crb(c,1)) { goto L_8039F838; } // 8039F82C
  c->r[0]=0u+0x00001388u; // 8039F830
  goto L_8039F848; // 8039F834
L_8039F838:;
  cmpu(c,0,c->r[3],0x00000001u); // 8039F838
  c->r[0]=0u+0x00000001u; // 8039F83C
  if (crb(c,0)) { goto L_8039F848; } // 8039F840
  c->r[0]=c->r[3]|c->r[3]; // 8039F844
L_8039F848:;
  {uint32_t ea=c->r[2]+0xFFFFEE20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039F848
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039F84C
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 8039F850
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8039F854
  W32(c->r[31]+0x00000068u,c->r[0]); // 8039F858
  W32(c->r[31]+0x00000064u,c->r[0]); // 8039F85C
  c->lr=0x8039F864u; f_80289CCC(c); // 8039F860
  cmpu(c,0,c->r[3],0x00000063u); // 8039F864
  c->r[0]=0u+0x00000063u; // 8039F868
  if (crb(c,1)) { goto L_8039F874; } // 8039F86C
  c->r[0]=c->r[3]|c->r[3]; // 8039F870
L_8039F874:;
  {uint32_t ea=c->r[2]+0xFFFFEE20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039F874
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039F878
  W32(c->r[31]+0x00000078u,c->r[0]); // 8039F87C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8039F880
  W32(c->r[31]+0x00000074u,c->r[0]); // 8039F884
  W32(c->r[31]+0x00000070u,c->r[0]); // 8039F888
  c->lr=0x8039F890u; f_80289CCC(c); // 8039F88C
  cmpu(c,0,c->r[3],0x00000064u); // 8039F890
  c->r[4]=0u+0x00000064u; // 8039F894
  if (crb(c,1)) { goto L_8039F8A0; } // 8039F898
  c->r[4]=c->r[3]|c->r[3]; // 8039F89C
L_8039F8A0:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 8039F8A0
  W32(c->r[31]+0x00000084u,c->r[4]); // 8039F8A4
  cmps(c,0,(int32_t)c->r[0],0); // 8039F8A8
  W32(c->r[31]+0x00000080u,c->r[4]); // 8039F8AC
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 8039F8B0
  if (crb(c,2)) { goto L_8039F914; } // 8039F8B4
  c->r[3]=c->r[31]+0x00000024u; // 8039F8B8
  c->lr=0x8039F8C0u; f_80278A60(c); // 8039F8BC
  c->r[4]=R32(c->r[31]+0x00000010u); // 8039F8C0
  c->r[0]=c->r[3]+0x00000087u; // 8039F8C4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039F8C8
  cmps(c,0,(int32_t)c->r[4],0); // 8039F8CC
  if (!crb(c,2)) { goto L_8039F8DC; } // 8039F8D0
  c->r[0]=0u+0x00000000u; // 8039F8D4
  goto L_8039F8E4; // 8039F8D8
L_8039F8DC:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8039F8DC
  c->r[0]=c->r[0]-c->r[4]; // 8039F8E0
L_8039F8E4:;
  cmpu(c,0,c->r[3],c->r[0]); // 8039F8E4
  if (crb(c,1)) { goto L_8039F914; } // 8039F8E8
  c->r[3]=c->r[31]+0x0000000Cu; // 8039F8EC
  c->r[4]=c->r[1]+0x00000008u; // 8039F8F0
  c->r[5]=c->r[1]+0x0000000Cu; // 8039F8F4
  c->lr=0x8039F8FCu; f_8039B1F0(c); // 8039F8F8
  c->r[3]=c->r[31]+0x00000024u; // 8039F8FC
  c->lr=0x8039F904u; f_80278C7C(c); // 8039F900
  c->r[4]=R32(c->r[1]+0x00000008u); // 8039F904
  c->r[3]=c->r[31]+0x0000000Cu; // 8039F908
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8039F90C
  c->lr=0x8039F914u; f_8039B23C(c); // 8039F910
L_8039F914:;
  c->r[3]=c->r[31]|c->r[31]; // 8039F914
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8039F918
  c->r[0]=R32(c->r[1]+0x00000034u); // 8039F91C
  c->lr=c->r[0]; // 8039F920
  c->r[1]=c->r[1]+0x00000030u; // 8039F924
  return; // 8039F928
}

// fn_8039F92C
void f_8039F92C(Ctx* __restrict c) {
  trace_call(0x8039F92Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F92C
  c->r[0]=c->lr; // 8039F930
  c->r[3]=c->r[3]+0x00000024u; // 8039F934
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039F938
  c->lr=0x8039F940u; f_80278A60(c); // 8039F93C
  c->r[0]=c->r[3]+0x00000087u; // 8039F940
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039F944
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039F948
  c->lr=c->r[0]; // 8039F94C
  c->r[1]=c->r[1]+0x00000010u; // 8039F950
  return; // 8039F954
}

// fn_8039F958
void f_8039F958(Ctx* __restrict c) {
  trace_call(0x8039F958u);
  c->r[3]=c->r[3]+0x0000000Cu; // 8039F958
  f_8039B194(c); return; // 8039F95C
}

// fn_8039F960
void f_8039F960(Ctx* __restrict c) {
  trace_call(0x8039F960u);
  c->r[3]=c->r[3]+0x0000000Cu; // 8039F960
  f_8039B1DC(c); return; // 8039F964
}

// fn_8039F968
void f_8039F968(Ctx* __restrict c) {
  trace_call(0x8039F968u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039F968
  c->r[0]=c->lr; // 8039F96C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039F970
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039F974
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039F978
  c->r[30]=c->r[3]|c->r[3]; // 8039F97C
  c->r[3]=c->r[3]+0x00000024u; // 8039F980
  c->lr=0x8039F988u; f_80278A60(c); // 8039F984
  c->r[4]=R32(c->r[30]+0x00000010u); // 8039F988
  c->r[0]=c->r[3]+0x00000087u; // 8039F98C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039F990
  cmps(c,0,(int32_t)c->r[4],0); // 8039F994
  if (!crb(c,2)) { goto L_8039F9A4; } // 8039F998
  c->r[0]=0u+0x00000000u; // 8039F99C
  goto L_8039F9AC; // 8039F9A0
L_8039F9A4:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8039F9A4
  c->r[0]=c->r[0]-c->r[4]; // 8039F9A8
L_8039F9AC:;
  cmpu(c,0,c->r[3],c->r[0]); // 8039F9AC
  if (!crb(c,1)) { goto L_8039F9BC; } // 8039F9B0
  c->r[3]=0u+0x00000000u; // 8039F9B4
  goto L_8039FA0C; // 8039F9B8
L_8039F9BC:;
  c->r[3]=c->r[30]+0x0000000Cu; // 8039F9BC
  c->r[4]=c->r[1]+0x0000000Cu; // 8039F9C0
  c->r[5]=c->r[1]+0x00000008u; // 8039F9C4
  c->lr=0x8039F9CCu; f_8039B1F0(c); // 8039F9C8
  c->r[0]=0u+0x00000000u; // 8039F9CC
  c->r[3]=c->r[30]+0x00000024u; // 8039F9D0
  W32(c->r[13]+0xFFFF9FDCu,c->r[0]); // 8039F9D4
  c->lr=0x8039F9DCu; f_80278A7C(c); // 8039F9D8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039F9DC
  c->r[31]=c->r[3]|c->r[3]; // 8039F9E0
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039F9E4
  c->r[3]=c->r[30]+0x0000000Cu; // 8039F9E8
  c->lr=0x8039F9F0u; f_8039B23C(c); // 8039F9EC
  c->r[3]=c->r[30]+0x00000024u; // 8039F9F0
  c->lr=0x8039F9F8u; f_80278A60(c); // 8039F9F4
  c->r[0]=0u-c->r[31]; // 8039F9F8
  c->r[3]=0u+0x00000001u; // 8039F9FC
  c->r[0]=c->r[0]|c->r[31]; // 8039FA00
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 8039FA04
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8039FA08
L_8039FA0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039FA0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039FA10
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039FA14
  c->lr=c->r[0]; // 8039FA18
  c->r[1]=c->r[1]+0x00000020u; // 8039FA1C
  return; // 8039FA20
}

// fn_8039FA24
void f_8039FA24(Ctx* __restrict c) {
  trace_call(0x8039FA24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FA24
  c->r[0]=c->lr; // 8039FA28
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039FA2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039FA30
  c->r[31]=c->r[3]|c->r[3]; // 8039FA34
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8039FA38
  cmps(c,0,(int32_t)c->r[0],0); // 8039FA3C
  if (crb(c,2)) { goto L_8039FA70; } // 8039FA40
  c->r[0]=0u+0x00000000u; // 8039FA44
  c->r[4]=c->r[1]+0x0000000Cu; // 8039FA48
  {uint32_t ea=c->r[3]+0x0000000Cu; W8(ea,c->r[0]); c->r[3]=ea;} // 8039FA4C
  c->r[5]=c->r[1]+0x00000008u; // 8039FA50
  c->lr=0x8039FA58u; f_8039B1F0(c); // 8039FA54
  c->r[3]=c->r[31]+0x00000024u; // 8039FA58
  c->lr=0x8039FA60u; f_80278DA0(c); // 8039FA5C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039FA60
  c->r[3]=c->r[31]+0x0000000Cu; // 8039FA64
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039FA68
  c->lr=0x8039FA70u; f_8039B23C(c); // 8039FA6C
L_8039FA70:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039FA70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039FA74
  c->lr=c->r[0]; // 8039FA78
  c->r[1]=c->r[1]+0x00000020u; // 8039FA7C
  return; // 8039FA80
}

// fn_8039FA84
void f_8039FA84(Ctx* __restrict c) {
  trace_call(0x8039FA84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FA84
  c->r[0]=c->lr; // 8039FA88
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FA8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039FA90
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039FA94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039FA98
  c->r[31]=c->r[4]|c->r[4]; // 8039FA9C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FAA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039FAA4
  c->r[30]=c->r[3]|c->r[3]; // 8039FAA8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8039FAAC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 8039FAB0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8039FAB4
  c->lr=0x8039FABCu; f_80289CCC(c); // 8039FAB8
  cmpu(c,0,c->r[3],0x00001388u); // 8039FABC
  if (!crb(c,1)) { goto L_8039FACC; } // 8039FAC0
  c->r[0]=0u+0x00001388u; // 8039FAC4
  goto L_8039FADC; // 8039FAC8
L_8039FACC:;
  cmpu(c,0,c->r[3],0x00000001u); // 8039FACC
  c->r[0]=0u+0x00000001u; // 8039FAD0
  if (crb(c,0)) { goto L_8039FADC; } // 8039FAD4
  c->r[0]=c->r[3]|c->r[3]; // 8039FAD8
L_8039FADC:;
  {uint32_t ea=c->r[2]+0xFFFFEE20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FADC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FAE0
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 8039FAE4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8039FAE8
  W32(c->r[30]+0x00000068u,c->r[0]); // 8039FAEC
  W32(c->r[30]+0x00000064u,c->r[0]); // 8039FAF0
  c->lr=0x8039FAF8u; f_80289CCC(c); // 8039FAF4
  cmpu(c,0,c->r[3],0x00000063u); // 8039FAF8
  c->r[0]=0u+0x00000063u; // 8039FAFC
  if (crb(c,1)) { goto L_8039FB08; } // 8039FB00
  c->r[0]=c->r[3]|c->r[3]; // 8039FB04
L_8039FB08:;
  {uint32_t ea=c->r[2]+0xFFFFEE20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FB08
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FB0C
  W32(c->r[30]+0x00000078u,c->r[0]); // 8039FB10
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8039FB14
  W32(c->r[30]+0x00000074u,c->r[0]); // 8039FB18
  W32(c->r[30]+0x00000070u,c->r[0]); // 8039FB1C
  c->lr=0x8039FB24u; f_80289CCC(c); // 8039FB20
  cmpu(c,0,c->r[3],0x00000064u); // 8039FB24
  c->r[4]=0u+0x00000064u; // 8039FB28
  if (crb(c,1)) { goto L_8039FB34; } // 8039FB2C
  c->r[4]=c->r[3]|c->r[3]; // 8039FB30
L_8039FB34:;
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 8039FB34
  W32(c->r[30]+0x00000084u,c->r[4]); // 8039FB38
  cmps(c,0,(int32_t)c->r[0],0); // 8039FB3C
  W32(c->r[30]+0x00000080u,c->r[4]); // 8039FB40
  W32(c->r[30]+0x0000007Cu,c->r[4]); // 8039FB44
  if (!crb(c,2)) { goto L_8039FB54; } // 8039FB48
  c->r[3]=0u+0x00000001u; // 8039FB4C
  goto L_8039FBC8; // 8039FB50
L_8039FB54:;
  c->r[3]=c->r[30]+0x00000024u; // 8039FB54
  c->lr=0x8039FB5Cu; f_80278A60(c); // 8039FB58
  c->r[4]=R32(c->r[30]+0x00000010u); // 8039FB5C
  c->r[0]=c->r[3]+0x00000087u; // 8039FB60
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039FB64
  cmps(c,0,(int32_t)c->r[4],0); // 8039FB68
  if (!crb(c,2)) { goto L_8039FB78; } // 8039FB6C
  c->r[0]=0u+0x00000000u; // 8039FB70
  goto L_8039FB80; // 8039FB74
L_8039FB78:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8039FB78
  c->r[0]=c->r[0]-c->r[4]; // 8039FB7C
L_8039FB80:;
  cmpu(c,0,c->r[3],c->r[0]); // 8039FB80
  if (!crb(c,1)) { goto L_8039FB90; } // 8039FB84
  c->r[3]=0u+0x00000000u; // 8039FB88
  goto L_8039FBC8; // 8039FB8C
L_8039FB90:;
  c->r[3]=c->r[30]+0x0000000Cu; // 8039FB90
  c->r[4]=c->r[1]+0x0000000Cu; // 8039FB94
  c->r[5]=c->r[1]+0x00000008u; // 8039FB98
  c->lr=0x8039FBA0u; f_8039B1F0(c); // 8039FB9C
  c->r[3]=c->r[30]+0x00000024u; // 8039FBA0
  c->lr=0x8039FBA8u; f_80278C7C(c); // 8039FBA4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039FBA8
  c->r[31]=c->r[3]|c->r[3]; // 8039FBAC
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039FBB0
  c->r[3]=c->r[30]+0x0000000Cu; // 8039FBB4
  c->lr=0x8039FBBCu; f_8039B23C(c); // 8039FBB8
  c->r[0]=0u-c->r[31]; // 8039FBBC
  c->r[0]=c->r[0]|c->r[31]; // 8039FBC0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8039FBC4
L_8039FBC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039FBC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039FBCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039FBD0
  c->lr=c->r[0]; // 8039FBD4
  c->r[1]=c->r[1]+0x00000020u; // 8039FBD8
  return; // 8039FBDC
}

// fn_8039FBE0
void f_8039FBE0(Ctx* __restrict c) {
  trace_call(0x8039FBE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FBE0
  c->r[0]=c->lr; // 8039FBE4
  c->r[4]=c->r[3]|c->r[3]; // 8039FBE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039FBEC
  c->r[3]=c->r[1]+0x00000008u; // 8039FBF0
  c->r[4]=c->r[4]+0x00000024u; // 8039FBF4
  c->r[0]=R32(c->r[5]+0x00000000u); // 8039FBF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 8039FBFC
  c->r[0]=R32(c->r[5]+0x00000004u); // 8039FC00
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8039FC04
  c->r[0]=R32(c->r[5]+0x00000008u); // 8039FC08
  W32(c->r[1]+0x00000010u,c->r[0]); // 8039FC0C
  c->lr=0x8039FC14u; f_80278E30(c); // 8039FC10
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039FC14
  c->lr=c->r[0]; // 8039FC18
  c->r[1]=c->r[1]+0x00000020u; // 8039FC1C
  return; // 8039FC20
}

// fn_8039FC24
void f_8039FC24(Ctx* __restrict c) {
  trace_call(0x8039FC24u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FC24
  c->r[0]=c->lr; // 8039FC28
  c->r[5]=0u+0x80430000u; // 8039FC2C
  c->r[10]=0u+0x803F0000u; // 8039FC30
  W32(c->r[1]+0x00000034u,c->r[0]); // 8039FC34
  c->r[0]=0u+0x00000000u; // 8039FC38
  c->r[5]=c->r[5]+0x000070B0u; // 8039FC3C
  c->r[4]=c->r[1]+0x00000008u; // 8039FC40
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8039FC44
  c->r[31]=c->r[3]|c->r[3]; // 8039FC48
  W32(c->r[3]+0x00000004u,c->r[0]); // 8039FC4C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8039FC50
  W32(c->r[3]+0x00000000u,c->r[5]); // 8039FC54
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8039FC58
  W32(c->r[3]+0x00000010u,c->r[0]); // 8039FC5C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8039FC60
  {uint32_t ea=c->r[10]+0xFFFFE550u; c->r[9]=R32(ea); c->r[10]=ea;} // 8039FC64
  c->r[8]=R32(c->r[10]+0x00000004u); // 8039FC68
  c->r[7]=R32(c->r[10]+0x00000008u); // 8039FC6C
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 8039FC70
  c->r[5]=R32(c->r[10]+0x00000010u); // 8039FC74
  c->r[0]=R32(c->r[10]+0x00000014u); // 8039FC78
  W32(c->r[1]+0x00000008u,c->r[9]); // 8039FC7C
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 8039FC80
  W32(c->r[1]+0x00000010u,c->r[7]); // 8039FC84
  W32(c->r[1]+0x00000014u,c->r[6]); // 8039FC88
  W32(c->r[1]+0x00000018u,c->r[5]); // 8039FC8C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8039FC90
  c->lr=0x8039FC98u; f_8039FE08(c); // 8039FC94
  c->r[3]=c->r[31]|c->r[31]; // 8039FC98
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8039FC9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8039FCA0
  c->lr=c->r[0]; // 8039FCA4
  c->r[1]=c->r[1]+0x00000030u; // 8039FCA8
  return; // 8039FCAC
}

// fn_8039FCB0
void f_8039FCB0(Ctx* __restrict c) {
  trace_call(0x8039FCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FCB0
  c->r[0]=c->lr; // 8039FCB4
  c->r[3]=c->r[3]+0x00000030u; // 8039FCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8039FCBC
  c->lr=0x8039FCC4u; f_802768FC(c); // 8039FCC0
  c->r[0]=c->r[3]+0x00000087u; // 8039FCC4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039FCC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8039FCCC
  c->lr=c->r[0]; // 8039FCD0
  c->r[1]=c->r[1]+0x00000010u; // 8039FCD4
  return; // 8039FCD8
}

// fn_8039FCDC
void f_8039FCDC(Ctx* __restrict c) {
  trace_call(0x8039FCDCu);
  c->r[3]=c->r[3]+0x0000000Cu; // 8039FCDC
  f_8039B194(c); return; // 8039FCE0
}

// fn_8039FCE4
void f_8039FCE4(Ctx* __restrict c) {
  trace_call(0x8039FCE4u);
  c->r[3]=c->r[3]+0x0000000Cu; // 8039FCE4
  f_8039B1DC(c); return; // 8039FCE8
}

// fn_8039FCEC
void f_8039FCEC(Ctx* __restrict c) {
  trace_call(0x8039FCECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FCEC
  c->r[0]=c->lr; // 8039FCF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039FCF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039FCF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039FCFC
  c->r[30]=c->r[3]|c->r[3]; // 8039FD00
  c->r[3]=c->r[3]+0x00000030u; // 8039FD04
  c->lr=0x8039FD0Cu; f_802768FC(c); // 8039FD08
  c->r[4]=R32(c->r[30]+0x00000010u); // 8039FD0C
  c->r[0]=c->r[3]+0x00000087u; // 8039FD10
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039FD14
  cmps(c,0,(int32_t)c->r[4],0); // 8039FD18
  if (!crb(c,2)) { goto L_8039FD28; } // 8039FD1C
  c->r[0]=0u+0x00000000u; // 8039FD20
  goto L_8039FD30; // 8039FD24
L_8039FD28:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8039FD28
  c->r[0]=c->r[0]-c->r[4]; // 8039FD2C
L_8039FD30:;
  cmpu(c,0,c->r[3],c->r[0]); // 8039FD30
  if (!crb(c,1)) { goto L_8039FD40; } // 8039FD34
  c->r[3]=0u+0x00000000u; // 8039FD38
  goto L_8039FD90; // 8039FD3C
L_8039FD40:;
  c->r[3]=c->r[30]+0x0000000Cu; // 8039FD40
  c->r[4]=c->r[1]+0x0000000Cu; // 8039FD44
  c->r[5]=c->r[1]+0x00000008u; // 8039FD48
  c->lr=0x8039FD50u; f_8039B1F0(c); // 8039FD4C
  c->r[0]=0u+0x00000000u; // 8039FD50
  c->r[3]=c->r[30]+0x00000030u; // 8039FD54
  W32(c->r[13]+0xFFFF9FDCu,c->r[0]); // 8039FD58
  c->lr=0x8039FD60u; f_80276908(c); // 8039FD5C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039FD60
  c->r[31]=c->r[3]|c->r[3]; // 8039FD64
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039FD68
  c->r[3]=c->r[30]+0x0000000Cu; // 8039FD6C
  c->lr=0x8039FD74u; f_8039B23C(c); // 8039FD70
  c->r[3]=c->r[30]+0x00000030u; // 8039FD74
  c->lr=0x8039FD7Cu; f_802768FC(c); // 8039FD78
  c->r[0]=0u-c->r[31]; // 8039FD7C
  c->r[3]=0u+0x00000001u; // 8039FD80
  c->r[0]=c->r[0]|c->r[31]; // 8039FD84
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 8039FD88
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8039FD8C
L_8039FD90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039FD90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039FD94
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039FD98
  c->lr=c->r[0]; // 8039FD9C
  c->r[1]=c->r[1]+0x00000020u; // 8039FDA0
  return; // 8039FDA4
}

// fn_8039FDA8
void f_8039FDA8(Ctx* __restrict c) {
  trace_call(0x8039FDA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FDA8
  c->r[0]=c->lr; // 8039FDAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039FDB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039FDB4
  c->r[31]=c->r[3]|c->r[3]; // 8039FDB8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8039FDBC
  cmps(c,0,(int32_t)c->r[0],0); // 8039FDC0
  if (crb(c,2)) { goto L_8039FDF4; } // 8039FDC4
  c->r[0]=0u+0x00000000u; // 8039FDC8
  c->r[4]=c->r[1]+0x0000000Cu; // 8039FDCC
  {uint32_t ea=c->r[3]+0x0000000Cu; W8(ea,c->r[0]); c->r[3]=ea;} // 8039FDD0
  c->r[5]=c->r[1]+0x00000008u; // 8039FDD4
  c->lr=0x8039FDDCu; f_8039B1F0(c); // 8039FDD8
  c->r[3]=c->r[31]+0x00000030u; // 8039FDDC
  c->lr=0x8039FDE4u; f_8027696C(c); // 8039FDE0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039FDE4
  c->r[3]=c->r[31]+0x0000000Cu; // 8039FDE8
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039FDEC
  c->lr=0x8039FDF4u; f_8039B23C(c); // 8039FDF0
L_8039FDF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039FDF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039FDF8
  c->lr=c->r[0]; // 8039FDFC
  c->r[1]=c->r[1]+0x00000020u; // 8039FE00
  return; // 8039FE04
}

// fn_8039FE08
void f_8039FE08(Ctx* __restrict c) {
  trace_call(0x8039FE08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FE08
  c->r[0]=c->lr; // 8039FE0C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 8039FE10
  W32(c->r[1]+0x00000024u,c->r[0]); // 8039FE14
  {uint32_t ea=c->r[2]+0xFFFFEE28u; c->f[6]=c->ps1[6]=RF32(ea);} // 8039FE18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8039FE1C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 8039FE20
  fcmp(c,0,c->f[5],c->f[6]); // 8039FE24
  W32(c->r[1]+0x00000018u,c->r[30]); // 8039FE28
  c->r[30]=c->r[3]|c->r[3]; // 8039FE2C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8039FE30
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8039FE34
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FE38
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FE3C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 8039FE40
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 8039FE44
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 8039FE48
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 8039FE4C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 8039FE50
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8039FE54
  if (!crb(c,1)) { goto L_8039FE60; } // 8039FE58
  goto L_8039FE74; // 8039FE5C
L_8039FE60:;
  {uint32_t ea=c->r[2]+0xFFFFEE2Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8039FE60
  fcmp(c,0,c->f[5],c->f[6]); // 8039FE64
  if (!crb(c,0)) { goto L_8039FE70; } // 8039FE68
  goto L_8039FE74; // 8039FE6C
L_8039FE70:;
  c->f[6]=c->f[5]; // 8039FE70
L_8039FE74:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FE74
  {uint32_t ea=c->r[2]+0xFFFFEE30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FE78
  {uint32_t ea=c->r[3]+0x00000188u; WF32(ea,c->f[6]);} // 8039FE7C
  fcmp(c,0,c->f[0],c->f[1]); // 8039FE80
  if (!crb(c,1)) { goto L_8039FE8C; } // 8039FE84
  goto L_8039FEA0; // 8039FE88
L_8039FE8C:;
  {uint32_t ea=c->r[2]+0xFFFFEE2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FE8C
  fcmp(c,0,c->f[0],c->f[1]); // 8039FE90
  if (!crb(c,0)) { goto L_8039FE9C; } // 8039FE94
  goto L_8039FEA0; // 8039FE98
L_8039FE9C:;
  c->f[1]=c->f[0]; // 8039FE9C
L_8039FEA0:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FEA0
  {uint32_t ea=c->r[2]+0xFFFFEE34u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039FEA4
  {uint32_t ea=c->r[3]+0x00000180u; WF32(ea,c->f[1]);} // 8039FEA8
  fcmp(c,0,c->f[0],c->f[2]); // 8039FEAC
  if (!crb(c,1)) { goto L_8039FEB8; } // 8039FEB0
  goto L_8039FECC; // 8039FEB4
L_8039FEB8:;
  {uint32_t ea=c->r[2]+0xFFFFEE2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8039FEB8
  fcmp(c,0,c->f[0],c->f[2]); // 8039FEBC
  if (!crb(c,0)) { goto L_8039FEC8; } // 8039FEC0
  goto L_8039FECC; // 8039FEC4
L_8039FEC8:;
  c->f[2]=c->f[0]; // 8039FEC8
L_8039FECC:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FECC
  {uint32_t ea=c->r[2]+0xFFFFEE34u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FED0
  {uint32_t ea=c->r[3]+0x00000178u; WF32(ea,c->f[2]);} // 8039FED4
  fcmp(c,0,c->f[0],c->f[1]); // 8039FED8
  if (!crb(c,1)) { goto L_8039FEE4; } // 8039FEDC
  goto L_8039FEF8; // 8039FEE0
L_8039FEE4:;
  {uint32_t ea=c->r[2]+0xFFFFEE2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FEE4
  fcmp(c,0,c->f[0],c->f[1]); // 8039FEE8
  if (!crb(c,0)) { goto L_8039FEF4; } // 8039FEEC
  goto L_8039FEF8; // 8039FEF0
L_8039FEF4:;
  c->f[1]=c->f[0]; // 8039FEF4
L_8039FEF8:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FEF8
  {uint32_t ea=c->r[2]+0xFFFFEE34u; c->f[2]=c->ps1[2]=RF32(ea);} // 8039FEFC
  {uint32_t ea=c->r[3]+0x00000184u; WF32(ea,c->f[1]);} // 8039FF00
  fcmp(c,0,c->f[0],c->f[2]); // 8039FF04
  if (!crb(c,1)) { goto L_8039FF10; } // 8039FF08
  goto L_8039FF24; // 8039FF0C
L_8039FF10:;
  {uint32_t ea=c->r[2]+0xFFFFEE2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8039FF10
  fcmp(c,0,c->f[0],c->f[2]); // 8039FF14
  if (!crb(c,0)) { goto L_8039FF20; } // 8039FF18
  goto L_8039FF24; // 8039FF1C
L_8039FF20:;
  c->f[2]=c->f[0]; // 8039FF20
L_8039FF24:;
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8039FF24
  {uint32_t ea=c->r[2]+0xFFFFEE34u; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FF28
  {uint32_t ea=c->r[3]+0x0000018Cu; WF32(ea,c->f[2]);} // 8039FF2C
  fcmp(c,0,c->f[0],c->f[1]); // 8039FF30
  if (!crb(c,1)) { goto L_8039FF3C; } // 8039FF34
  goto L_8039FF50; // 8039FF38
L_8039FF3C:;
  {uint32_t ea=c->r[2]+0xFFFFEE2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8039FF3C
  fcmp(c,0,c->f[0],c->f[1]); // 8039FF40
  if (!crb(c,0)) { goto L_8039FF4C; } // 8039FF44
  goto L_8039FF50; // 8039FF48
L_8039FF4C:;
  c->f[1]=c->f[0]; // 8039FF4C
L_8039FF50:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8039FF50
  {uint32_t ea=c->r[3]+0x0000017Cu; WF32(ea,c->f[1]);} // 8039FF54
  cmps(c,0,(int32_t)c->r[0],0); // 8039FF58
  if (!crb(c,2)) { goto L_8039FF68; } // 8039FF5C
  c->r[3]=0u+0x00000001u; // 8039FF60
  goto L_8039FFDC; // 8039FF64
L_8039FF68:;
  c->r[3]=c->r[3]+0x00000030u; // 8039FF68
  c->lr=0x8039FF70u; f_802768FC(c); // 8039FF6C
  c->r[4]=R32(c->r[30]+0x00000010u); // 8039FF70
  c->r[0]=c->r[3]+0x00000087u; // 8039FF74
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8039FF78
  cmps(c,0,(int32_t)c->r[4],0); // 8039FF7C
  if (!crb(c,2)) { goto L_8039FF8C; } // 8039FF80
  c->r[0]=0u+0x00000000u; // 8039FF84
  goto L_8039FF94; // 8039FF88
L_8039FF8C:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8039FF8C
  c->r[0]=c->r[0]-c->r[4]; // 8039FF90
L_8039FF94:;
  cmpu(c,0,c->r[3],c->r[0]); // 8039FF94
  if (!crb(c,1)) { goto L_8039FFA4; } // 8039FF98
  c->r[3]=0u+0x00000000u; // 8039FF9C
  goto L_8039FFDC; // 8039FFA0
L_8039FFA4:;
  c->r[3]=c->r[30]+0x0000000Cu; // 8039FFA4
  c->r[4]=c->r[1]+0x0000000Cu; // 8039FFA8
  c->r[5]=c->r[1]+0x00000008u; // 8039FFAC
  c->lr=0x8039FFB4u; f_8039B1F0(c); // 8039FFB0
  c->r[3]=c->r[30]+0x00000030u; // 8039FFB4
  c->lr=0x8039FFBCu; f_80276990(c); // 8039FFB8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8039FFBC
  c->r[31]=c->r[3]|c->r[3]; // 8039FFC0
  c->r[5]=R32(c->r[1]+0x00000008u); // 8039FFC4
  c->r[3]=c->r[30]+0x0000000Cu; // 8039FFC8
  c->lr=0x8039FFD0u; f_8039B23C(c); // 8039FFCC
  c->r[0]=0u-c->r[31]; // 8039FFD0
  c->r[0]=c->r[0]|c->r[31]; // 8039FFD4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8039FFD8
L_8039FFDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8039FFDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8039FFE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8039FFE4
  c->lr=c->r[0]; // 8039FFE8
  c->r[1]=c->r[1]+0x00000020u; // 8039FFEC
  return; // 8039FFF0
}

// fn_8039FFF4
void f_8039FFF4(Ctx* __restrict c) {
  trace_call(0x8039FFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8039FFF4
  c->r[0]=c->lr; // 8039FFF8
  c->r[4]=c->r[3]|c->r[3]; // 8039FFFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A0000
  c->r[3]=c->r[1]+0x00000008u; // 803A0004
  c->r[4]=c->r[4]+0x00000030u; // 803A0008
  c->r[0]=R32(c->r[5]+0x00000000u); // 803A000C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A0010
  c->r[0]=R32(c->r[5]+0x00000004u); // 803A0014
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803A0018
  c->r[0]=R32(c->r[5]+0x00000008u); // 803A001C
  W32(c->r[1]+0x00000010u,c->r[0]); // 803A0020
  c->lr=0x803A0028u; f_802769F4(c); // 803A0024
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A0028
  c->lr=c->r[0]; // 803A002C
  c->r[1]=c->r[1]+0x00000020u; // 803A0030
  return; // 803A0034
}

// fn_803A0038
void f_803A0038(Ctx* __restrict c) {
  trace_call(0x803A0038u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0038
  c->r[0]=c->lr; // 803A003C
  c->r[5]=0u+0x80430000u; // 803A0040
  c->r[10]=0u+0x803F0000u; // 803A0044
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A0048
  c->r[0]=0u+0x00000000u; // 803A004C
  c->r[5]=c->r[5]+0x000070D0u; // 803A0050
  c->r[4]=c->r[1]+0x00000008u; // 803A0054
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803A0058
  c->r[31]=c->r[3]|c->r[3]; // 803A005C
  W32(c->r[3]+0x00000004u,c->r[0]); // 803A0060
  W32(c->r[3]+0x00000008u,c->r[0]); // 803A0064
  W32(c->r[3]+0x00000000u,c->r[5]); // 803A0068
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 803A006C
  W32(c->r[3]+0x00000010u,c->r[0]); // 803A0070
  W32(c->r[3]+0x00000014u,c->r[0]); // 803A0074
  {uint32_t ea=c->r[10]+0xFFFFE568u; c->r[9]=R32(ea); c->r[10]=ea;} // 803A0078
  c->r[8]=R32(c->r[10]+0x00000004u); // 803A007C
  c->r[7]=R32(c->r[10]+0x00000008u); // 803A0080
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 803A0084
  c->r[5]=R32(c->r[10]+0x00000010u); // 803A0088
  c->r[0]=R32(c->r[10]+0x00000014u); // 803A008C
  W32(c->r[1]+0x00000008u,c->r[9]); // 803A0090
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 803A0094
  W32(c->r[1]+0x00000010u,c->r[7]); // 803A0098
  W32(c->r[1]+0x00000014u,c->r[6]); // 803A009C
  W32(c->r[1]+0x00000018u,c->r[5]); // 803A00A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803A00A4
  c->lr=0x803A00ACu; f_803A021C(c); // 803A00A8
  c->r[3]=c->r[31]|c->r[31]; // 803A00AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803A00B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A00B4
  c->lr=c->r[0]; // 803A00B8
  c->r[1]=c->r[1]+0x00000030u; // 803A00BC
  return; // 803A00C0
}

// fn_803A00C4
void f_803A00C4(Ctx* __restrict c) {
  trace_call(0x803A00C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A00C4
  c->r[0]=c->lr; // 803A00C8
  c->r[3]=c->r[3]+0x00000030u; // 803A00CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A00D0
  c->lr=0x803A00D8u; f_802769F8(c); // 803A00D4
  c->r[0]=c->r[3]+0x00000087u; // 803A00D8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803A00DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A00E0
  c->lr=c->r[0]; // 803A00E4
  c->r[1]=c->r[1]+0x00000010u; // 803A00E8
  return; // 803A00EC
}

// fn_803A00F0
void f_803A00F0(Ctx* __restrict c) {
  trace_call(0x803A00F0u);
  c->r[3]=c->r[3]+0x0000000Cu; // 803A00F0
  f_8039B194(c); return; // 803A00F4
}

// fn_803A00F8
void f_803A00F8(Ctx* __restrict c) {
  trace_call(0x803A00F8u);
  c->r[3]=c->r[3]+0x0000000Cu; // 803A00F8
  f_8039B1DC(c); return; // 803A00FC
}

// fn_803A0100
void f_803A0100(Ctx* __restrict c) {
  trace_call(0x803A0100u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0100
  c->r[0]=c->lr; // 803A0104
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A0108
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A010C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A0110
  c->r[30]=c->r[3]|c->r[3]; // 803A0114
  c->r[3]=c->r[3]+0x00000030u; // 803A0118
  c->lr=0x803A0120u; f_802769F8(c); // 803A011C
  c->r[4]=R32(c->r[30]+0x00000010u); // 803A0120
  c->r[0]=c->r[3]+0x00000087u; // 803A0124
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803A0128
  cmps(c,0,(int32_t)c->r[4],0); // 803A012C
  if (!crb(c,2)) { goto L_803A013C; } // 803A0130
  c->r[0]=0u+0x00000000u; // 803A0134
  goto L_803A0144; // 803A0138
L_803A013C:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 803A013C
  c->r[0]=c->r[0]-c->r[4]; // 803A0140
L_803A0144:;
  cmpu(c,0,c->r[3],c->r[0]); // 803A0144
  if (!crb(c,1)) { goto L_803A0154; } // 803A0148
  c->r[3]=0u+0x00000000u; // 803A014C
  goto L_803A01A4; // 803A0150
L_803A0154:;
  c->r[3]=c->r[30]+0x0000000Cu; // 803A0154
  c->r[4]=c->r[1]+0x0000000Cu; // 803A0158
  c->r[5]=c->r[1]+0x00000008u; // 803A015C
  c->lr=0x803A0164u; f_8039B1F0(c); // 803A0160
  c->r[0]=0u+0x00000000u; // 803A0164
  c->r[3]=c->r[30]+0x00000030u; // 803A0168
  W32(c->r[13]+0xFFFF9FDCu,c->r[0]); // 803A016C
  c->lr=0x803A0174u; f_80276A04(c); // 803A0170
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803A0174
  c->r[31]=c->r[3]|c->r[3]; // 803A0178
  c->r[5]=R32(c->r[1]+0x00000008u); // 803A017C
  c->r[3]=c->r[30]+0x0000000Cu; // 803A0180
  c->lr=0x803A0188u; f_8039B23C(c); // 803A0184
  c->r[3]=c->r[30]+0x00000030u; // 803A0188
  c->lr=0x803A0190u; f_802769F8(c); // 803A018C
  c->r[0]=0u-c->r[31]; // 803A0190
  c->r[3]=0u+0x00000001u; // 803A0194
  c->r[0]=c->r[0]|c->r[31]; // 803A0198
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 803A019C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A01A0
L_803A01A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A01A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A01A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A01AC
  c->lr=c->r[0]; // 803A01B0
  c->r[1]=c->r[1]+0x00000020u; // 803A01B4
  return; // 803A01B8
}

// fn_803A01BC
void f_803A01BC(Ctx* __restrict c) {
  trace_call(0x803A01BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A01BC
  c->r[0]=c->lr; // 803A01C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A01C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A01C8
  c->r[31]=c->r[3]|c->r[3]; // 803A01CC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803A01D0
  cmps(c,0,(int32_t)c->r[0],0); // 803A01D4
  if (crb(c,2)) { goto L_803A0208; } // 803A01D8
  c->r[0]=0u+0x00000000u; // 803A01DC
  c->r[4]=c->r[1]+0x0000000Cu; // 803A01E0
  {uint32_t ea=c->r[3]+0x0000000Cu; W8(ea,c->r[0]); c->r[3]=ea;} // 803A01E4
  c->r[5]=c->r[1]+0x00000008u; // 803A01E8
  c->lr=0x803A01F0u; f_8039B1F0(c); // 803A01EC
  c->r[3]=c->r[31]+0x00000030u; // 803A01F0
  c->lr=0x803A01F8u; f_80276AA8(c); // 803A01F4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803A01F8
  c->r[3]=c->r[31]+0x0000000Cu; // 803A01FC
  c->r[5]=R32(c->r[1]+0x00000008u); // 803A0200
  c->lr=0x803A0208u; f_8039B23C(c); // 803A0204
L_803A0208:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A0208
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A020C
  c->lr=c->r[0]; // 803A0210
  c->r[1]=c->r[1]+0x00000020u; // 803A0214
  return; // 803A0218
}

// fn_803A021C
void f_803A021C(Ctx* __restrict c) {
  trace_call(0x803A021Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A021C
  c->r[0]=c->lr; // 803A0220
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 803A0224
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A0228
  {uint32_t ea=c->r[2]+0xFFFFEE38u; c->f[6]=c->ps1[6]=RF32(ea);} // 803A022C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A0230
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 803A0234
  fcmp(c,0,c->f[5],c->f[6]); // 803A0238
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A023C
  c->r[30]=c->r[3]|c->r[3]; // 803A0240
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A0244
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A0248
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A024C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0250
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 803A0254
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 803A0258
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 803A025C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 803A0260
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 803A0264
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 803A0268
  if (!crb(c,1)) { goto L_803A0274; } // 803A026C
  goto L_803A0288; // 803A0270
L_803A0274:;
  {uint32_t ea=c->r[2]+0xFFFFEE3Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 803A0274
  fcmp(c,0,c->f[5],c->f[6]); // 803A0278
  if (!crb(c,0)) { goto L_803A0284; } // 803A027C
  goto L_803A0288; // 803A0280
L_803A0284:;
  c->f[6]=c->f[5]; // 803A0284
L_803A0288:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0288
  {uint32_t ea=c->r[2]+0xFFFFEE40u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A028C
  {uint32_t ea=c->r[3]+0x000001B8u; WF32(ea,c->f[6]);} // 803A0290
  fcmp(c,0,c->f[0],c->f[1]); // 803A0294
  if (!crb(c,1)) { goto L_803A02A0; } // 803A0298
  goto L_803A02B4; // 803A029C
L_803A02A0:;
  {uint32_t ea=c->r[2]+0xFFFFEE3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A02A0
  fcmp(c,0,c->f[0],c->f[1]); // 803A02A4
  if (!crb(c,0)) { goto L_803A02B0; } // 803A02A8
  goto L_803A02B4; // 803A02AC
L_803A02B0:;
  c->f[1]=c->f[0]; // 803A02B0
L_803A02B4:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A02B4
  {uint32_t ea=c->r[2]+0xFFFFEE44u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A02B8
  {uint32_t ea=c->r[3]+0x000001B0u; WF32(ea,c->f[1]);} // 803A02BC
  fcmp(c,0,c->f[0],c->f[2]); // 803A02C0
  if (!crb(c,1)) { goto L_803A02CC; } // 803A02C4
  goto L_803A02E0; // 803A02C8
L_803A02CC:;
  {uint32_t ea=c->r[2]+0xFFFFEE3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A02CC
  fcmp(c,0,c->f[0],c->f[2]); // 803A02D0
  if (!crb(c,0)) { goto L_803A02DC; } // 803A02D4
  goto L_803A02E0; // 803A02D8
L_803A02DC:;
  c->f[2]=c->f[0]; // 803A02DC
L_803A02E0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A02E0
  {uint32_t ea=c->r[2]+0xFFFFEE44u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A02E4
  {uint32_t ea=c->r[3]+0x000001A8u; WF32(ea,c->f[2]);} // 803A02E8
  fcmp(c,0,c->f[0],c->f[1]); // 803A02EC
  if (!crb(c,1)) { goto L_803A02F8; } // 803A02F0
  goto L_803A030C; // 803A02F4
L_803A02F8:;
  {uint32_t ea=c->r[2]+0xFFFFEE3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A02F8
  fcmp(c,0,c->f[0],c->f[1]); // 803A02FC
  if (!crb(c,0)) { goto L_803A0308; } // 803A0300
  goto L_803A030C; // 803A0304
L_803A0308:;
  c->f[1]=c->f[0]; // 803A0308
L_803A030C:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A030C
  {uint32_t ea=c->r[2]+0xFFFFEE44u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A0310
  {uint32_t ea=c->r[3]+0x000001B4u; WF32(ea,c->f[1]);} // 803A0314
  fcmp(c,0,c->f[0],c->f[2]); // 803A0318
  if (!crb(c,1)) { goto L_803A0324; } // 803A031C
  goto L_803A0338; // 803A0320
L_803A0324:;
  {uint32_t ea=c->r[2]+0xFFFFEE3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A0324
  fcmp(c,0,c->f[0],c->f[2]); // 803A0328
  if (!crb(c,0)) { goto L_803A0334; } // 803A032C
  goto L_803A0338; // 803A0330
L_803A0334:;
  c->f[2]=c->f[0]; // 803A0334
L_803A0338:;
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0338
  {uint32_t ea=c->r[2]+0xFFFFEE44u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A033C
  {uint32_t ea=c->r[3]+0x000001BCu; WF32(ea,c->f[2]);} // 803A0340
  fcmp(c,0,c->f[0],c->f[1]); // 803A0344
  if (!crb(c,1)) { goto L_803A0350; } // 803A0348
  goto L_803A0364; // 803A034C
L_803A0350:;
  {uint32_t ea=c->r[2]+0xFFFFEE3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A0350
  fcmp(c,0,c->f[0],c->f[1]); // 803A0354
  if (!crb(c,0)) { goto L_803A0360; } // 803A0358
  goto L_803A0364; // 803A035C
L_803A0360:;
  c->f[1]=c->f[0]; // 803A0360
L_803A0364:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803A0364
  {uint32_t ea=c->r[3]+0x000001ACu; WF32(ea,c->f[1]);} // 803A0368
  cmps(c,0,(int32_t)c->r[0],0); // 803A036C
  if (!crb(c,2)) { goto L_803A037C; } // 803A0370
  c->r[3]=0u+0x00000001u; // 803A0374
  goto L_803A03F0; // 803A0378
L_803A037C:;
  c->r[3]=c->r[3]+0x00000030u; // 803A037C
  c->lr=0x803A0384u; f_802769F8(c); // 803A0380
  c->r[4]=R32(c->r[30]+0x00000010u); // 803A0384
  c->r[0]=c->r[3]+0x00000087u; // 803A0388
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803A038C
  cmps(c,0,(int32_t)c->r[4],0); // 803A0390
  if (!crb(c,2)) { goto L_803A03A0; } // 803A0394
  c->r[0]=0u+0x00000000u; // 803A0398
  goto L_803A03A8; // 803A039C
L_803A03A0:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 803A03A0
  c->r[0]=c->r[0]-c->r[4]; // 803A03A4
L_803A03A8:;
  cmpu(c,0,c->r[3],c->r[0]); // 803A03A8
  if (!crb(c,1)) { goto L_803A03B8; } // 803A03AC
  c->r[3]=0u+0x00000000u; // 803A03B0
  goto L_803A03F0; // 803A03B4
L_803A03B8:;
  c->r[3]=c->r[30]+0x0000000Cu; // 803A03B8
  c->r[4]=c->r[1]+0x0000000Cu; // 803A03BC
  c->r[5]=c->r[1]+0x00000008u; // 803A03C0
  c->lr=0x803A03C8u; f_8039B1F0(c); // 803A03C4
  c->r[3]=c->r[30]+0x00000030u; // 803A03C8
  c->lr=0x803A03D0u; f_80276ACC(c); // 803A03CC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803A03D0
  c->r[31]=c->r[3]|c->r[3]; // 803A03D4
  c->r[5]=R32(c->r[1]+0x00000008u); // 803A03D8
  c->r[3]=c->r[30]+0x0000000Cu; // 803A03DC
  c->lr=0x803A03E4u; f_8039B23C(c); // 803A03E0
  c->r[0]=0u-c->r[31]; // 803A03E4
  c->r[0]=c->r[0]|c->r[31]; // 803A03E8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A03EC
L_803A03F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A03F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A03F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A03F8
  c->lr=c->r[0]; // 803A03FC
  c->r[1]=c->r[1]+0x00000020u; // 803A0400
  return; // 803A0404
}

// fn_803A0408
void f_803A0408(Ctx* __restrict c) {
  trace_call(0x803A0408u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0408
  c->r[0]=c->lr; // 803A040C
  c->r[4]=c->r[3]|c->r[3]; // 803A0410
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A0414
  c->r[3]=c->r[1]+0x00000008u; // 803A0418
  c->r[4]=c->r[4]+0x00000030u; // 803A041C
  c->r[0]=R32(c->r[5]+0x00000000u); // 803A0420
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A0424
  c->r[0]=R32(c->r[5]+0x00000004u); // 803A0428
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803A042C
  c->r[0]=R32(c->r[5]+0x00000008u); // 803A0430
  W32(c->r[1]+0x00000010u,c->r[0]); // 803A0434
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803A0438
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A043C
  c->lr=0x803A0444u; f_80276B30(c); // 803A0440
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A0444
  c->lr=c->r[0]; // 803A0448
  c->r[1]=c->r[1]+0x00000020u; // 803A044C
  return; // 803A0450
}

// fn_803A0454
void f_803A0454(Ctx* __restrict c) {
  trace_call(0x803A0454u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0454
  c->r[0]=c->lr; // 803A0458
  c->r[5]=0u+0x80430000u; // 803A045C
  c->r[9]=0u+0x803F0000u; // 803A0460
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A0464
  c->r[0]=0u+0x00000000u; // 803A0468
  c->r[5]=c->r[5]+0x000070F0u; // 803A046C
  c->r[4]=c->r[1]+0x00000008u; // 803A0470
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803A0474
  c->r[31]=c->r[3]|c->r[3]; // 803A0478
  W32(c->r[3]+0x00000004u,c->r[0]); // 803A047C
  W32(c->r[3]+0x00000008u,c->r[0]); // 803A0480
  W32(c->r[3]+0x00000000u,c->r[5]); // 803A0484
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 803A0488
  W32(c->r[3]+0x00000010u,c->r[0]); // 803A048C
  W32(c->r[3]+0x00000014u,c->r[0]); // 803A0490
  {uint32_t ea=c->r[9]+0xFFFFE580u; c->r[8]=R32(ea); c->r[9]=ea;} // 803A0494
  c->r[7]=R32(c->r[9]+0x00000004u); // 803A0498
  c->r[6]=R32(c->r[9]+0x00000008u); // 803A049C
  c->r[5]=R32(c->r[9]+0x0000000Cu); // 803A04A0
  c->r[0]=R32(c->r[9]+0x00000010u); // 803A04A4
  W32(c->r[1]+0x00000008u,c->r[8]); // 803A04A8
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 803A04AC
  W32(c->r[1]+0x00000010u,c->r[6]); // 803A04B0
  W32(c->r[1]+0x00000014u,c->r[5]); // 803A04B4
  W32(c->r[1]+0x00000018u,c->r[0]); // 803A04B8
  c->lr=0x803A04C0u; f_803A0630(c); // 803A04BC
  c->r[3]=c->r[31]|c->r[31]; // 803A04C0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803A04C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A04C8
  c->lr=c->r[0]; // 803A04CC
  c->r[1]=c->r[1]+0x00000030u; // 803A04D0
  return; // 803A04D4
}

// fn_803A04D8
void f_803A04D8(Ctx* __restrict c) {
  trace_call(0x803A04D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A04D8
  c->r[0]=c->lr; // 803A04DC
  c->r[3]=c->r[3]+0x0000002Cu; // 803A04E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A04E4
  c->lr=0x803A04ECu; f_802790F4(c); // 803A04E8
  c->r[0]=c->r[3]+0x00000087u; // 803A04EC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803A04F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A04F4
  c->lr=c->r[0]; // 803A04F8
  c->r[1]=c->r[1]+0x00000010u; // 803A04FC
  return; // 803A0500
}

// fn_803A0504
void f_803A0504(Ctx* __restrict c) {
  trace_call(0x803A0504u);
  c->r[3]=c->r[3]+0x0000000Cu; // 803A0504
  f_8039B194(c); return; // 803A0508
}

// fn_803A050C
void f_803A050C(Ctx* __restrict c) {
  trace_call(0x803A050Cu);
  c->r[3]=c->r[3]+0x0000000Cu; // 803A050C
  f_8039B1DC(c); return; // 803A0510
}

// fn_803A0514
void f_803A0514(Ctx* __restrict c) {
  trace_call(0x803A0514u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0514
  c->r[0]=c->lr; // 803A0518
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A051C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A0520
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A0524
  c->r[30]=c->r[3]|c->r[3]; // 803A0528
  c->r[3]=c->r[3]+0x0000002Cu; // 803A052C
  c->lr=0x803A0534u; f_802790F4(c); // 803A0530
  c->r[4]=R32(c->r[30]+0x00000010u); // 803A0534
  c->r[0]=c->r[3]+0x00000087u; // 803A0538
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803A053C
  cmps(c,0,(int32_t)c->r[4],0); // 803A0540
  if (!crb(c,2)) { goto L_803A0550; } // 803A0544
  c->r[0]=0u+0x00000000u; // 803A0548
  goto L_803A0558; // 803A054C
L_803A0550:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 803A0550
  c->r[0]=c->r[0]-c->r[4]; // 803A0554
L_803A0558:;
  cmpu(c,0,c->r[3],c->r[0]); // 803A0558
  if (!crb(c,1)) { goto L_803A0568; } // 803A055C
  c->r[3]=0u+0x00000000u; // 803A0560
  goto L_803A05B8; // 803A0564
L_803A0568:;
  c->r[3]=c->r[30]+0x0000000Cu; // 803A0568
  c->r[4]=c->r[1]+0x0000000Cu; // 803A056C
  c->r[5]=c->r[1]+0x00000008u; // 803A0570
  c->lr=0x803A0578u; f_8039B1F0(c); // 803A0574
  c->r[0]=0u+0x00000000u; // 803A0578
  c->r[3]=c->r[30]+0x0000002Cu; // 803A057C
  W32(c->r[13]+0xFFFF9FDCu,c->r[0]); // 803A0580
  c->lr=0x803A0588u; f_80279100(c); // 803A0584
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803A0588
  c->r[31]=c->r[3]|c->r[3]; // 803A058C
  c->r[5]=R32(c->r[1]+0x00000008u); // 803A0590
  c->r[3]=c->r[30]+0x0000000Cu; // 803A0594
  c->lr=0x803A059Cu; f_8039B23C(c); // 803A0598
  c->r[3]=c->r[30]+0x0000002Cu; // 803A059C
  c->lr=0x803A05A4u; f_802790F4(c); // 803A05A0
  c->r[0]=0u-c->r[31]; // 803A05A4
  c->r[3]=0u+0x00000001u; // 803A05A8
  c->r[0]=c->r[0]|c->r[31]; // 803A05AC
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 803A05B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A05B4
L_803A05B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A05B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A05BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A05C0
  c->lr=c->r[0]; // 803A05C4
  c->r[1]=c->r[1]+0x00000020u; // 803A05C8
  return; // 803A05CC
}

// fn_803A05D0
void f_803A05D0(Ctx* __restrict c) {
  trace_call(0x803A05D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A05D0
  c->r[0]=c->lr; // 803A05D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A05D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A05DC
  c->r[31]=c->r[3]|c->r[3]; // 803A05E0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803A05E4
  cmps(c,0,(int32_t)c->r[0],0); // 803A05E8
  if (crb(c,2)) { goto L_803A061C; } // 803A05EC
  c->r[0]=0u+0x00000000u; // 803A05F0
  c->r[4]=c->r[1]+0x0000000Cu; // 803A05F4
  {uint32_t ea=c->r[3]+0x0000000Cu; W8(ea,c->r[0]); c->r[3]=ea;} // 803A05F8
  c->r[5]=c->r[1]+0x00000008u; // 803A05FC
  c->lr=0x803A0604u; f_8039B1F0(c); // 803A0600
  c->r[3]=c->r[31]+0x0000002Cu; // 803A0604
  c->lr=0x803A060Cu; f_8027915C(c); // 803A0608
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803A060C
  c->r[3]=c->r[31]+0x0000000Cu; // 803A0610
  c->r[5]=R32(c->r[1]+0x00000008u); // 803A0614
  c->lr=0x803A061Cu; f_8039B23C(c); // 803A0618
L_803A061C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A061C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A0620
  c->lr=c->r[0]; // 803A0624
  c->r[1]=c->r[1]+0x00000020u; // 803A0628
  return; // 803A062C
}

// fn_803A0630
void f_803A0630(Ctx* __restrict c) {
  trace_call(0x803A0630u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0630
  c->r[0]=c->lr; // 803A0634
  {uint32_t ea=c->r[4]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 803A0638
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A063C
  {uint32_t ea=c->r[2]+0xFFFFEE48u; c->f[5]=c->ps1[5]=RF32(ea);} // 803A0640
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A0644
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A0648
  fcmp(c,0,c->f[4],c->f[5]); // 803A064C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A0650
  c->r[30]=c->r[3]|c->r[3]; // 803A0654
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A0658
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A065C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0660
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 803A0664
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[3]);} // 803A0668
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 803A066C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 803A0670
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 803A0674
  if (!crb(c,1)) { goto L_803A0680; } // 803A0678
  goto L_803A0694; // 803A067C
L_803A0680:;
  {uint32_t ea=c->r[2]+0xFFFFEE4Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803A0680
  fcmp(c,0,c->f[4],c->f[5]); // 803A0684
  if (!crb(c,0)) { goto L_803A0690; } // 803A0688
  goto L_803A0694; // 803A068C
L_803A0690:;
  c->f[5]=c->f[4]; // 803A0690
L_803A0694:;
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0694
  {uint32_t ea=c->r[2]+0xFFFFEE50u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A0698
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[5]);} // 803A069C
  fcmp(c,0,c->f[0],c->f[1]); // 803A06A0
  if (!crb(c,1)) { goto L_803A06AC; } // 803A06A4
  goto L_803A06C0; // 803A06A8
L_803A06AC:;
  {uint32_t ea=c->r[2]+0xFFFFEE4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A06AC
  fcmp(c,0,c->f[0],c->f[1]); // 803A06B0
  if (!crb(c,0)) { goto L_803A06BC; } // 803A06B4
  goto L_803A06C0; // 803A06B8
L_803A06BC:;
  c->f[1]=c->f[0]; // 803A06BC
L_803A06C0:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A06C0
  {uint32_t ea=c->r[2]+0xFFFFEE54u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A06C4
  {uint32_t ea=c->r[3]+0x0000011Cu; WF32(ea,c->f[1]);} // 803A06C8
  fcmp(c,0,c->f[0],c->f[2]); // 803A06CC
  if (!crb(c,1)) { goto L_803A06D8; } // 803A06D0
  goto L_803A06EC; // 803A06D4
L_803A06D8:;
  {uint32_t ea=c->r[2]+0xFFFFEE4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A06D8
  fcmp(c,0,c->f[0],c->f[2]); // 803A06DC
  if (!crb(c,0)) { goto L_803A06E8; } // 803A06E0
  goto L_803A06EC; // 803A06E4
L_803A06E8:;
  c->f[2]=c->f[0]; // 803A06E8
L_803A06EC:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A06EC
  {uint32_t ea=c->r[2]+0xFFFFEE54u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A06F0
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[2]);} // 803A06F4
  fcmp(c,0,c->f[0],c->f[1]); // 803A06F8
  if (!crb(c,1)) { goto L_803A0704; } // 803A06FC
  goto L_803A0718; // 803A0700
L_803A0704:;
  {uint32_t ea=c->r[2]+0xFFFFEE4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A0704
  fcmp(c,0,c->f[0],c->f[1]); // 803A0708
  if (!crb(c,0)) { goto L_803A0714; } // 803A070C
  goto L_803A0718; // 803A0710
L_803A0714:;
  c->f[1]=c->f[0]; // 803A0714
L_803A0718:;
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0718
  {uint32_t ea=c->r[2]+0xFFFFEE54u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A071C
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[1]);} // 803A0720
  fcmp(c,0,c->f[0],c->f[2]); // 803A0724
  if (!crb(c,1)) { goto L_803A0730; } // 803A0728
  goto L_803A0744; // 803A072C
L_803A0730:;
  {uint32_t ea=c->r[2]+0xFFFFEE4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A0730
  fcmp(c,0,c->f[0],c->f[2]); // 803A0734
  if (!crb(c,0)) { goto L_803A0740; } // 803A0738
  goto L_803A0744; // 803A073C
L_803A0740:;
  c->f[2]=c->f[0]; // 803A0740
L_803A0744:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803A0744
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[2]);} // 803A0748
  cmps(c,0,(int32_t)c->r[0],0); // 803A074C
  if (!crb(c,2)) { goto L_803A075C; } // 803A0750
  c->r[3]=0u+0x00000001u; // 803A0754
  goto L_803A07D0; // 803A0758
L_803A075C:;
  c->r[3]=c->r[3]+0x0000002Cu; // 803A075C
  c->lr=0x803A0764u; f_802790F4(c); // 803A0760
  c->r[4]=R32(c->r[30]+0x00000010u); // 803A0764
  c->r[0]=c->r[3]+0x00000087u; // 803A0768
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803A076C
  cmps(c,0,(int32_t)c->r[4],0); // 803A0770
  if (!crb(c,2)) { goto L_803A0780; } // 803A0774
  c->r[0]=0u+0x00000000u; // 803A0778
  goto L_803A0788; // 803A077C
L_803A0780:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 803A0780
  c->r[0]=c->r[0]-c->r[4]; // 803A0784
L_803A0788:;
  cmpu(c,0,c->r[3],c->r[0]); // 803A0788
  if (!crb(c,1)) { goto L_803A0798; } // 803A078C
  c->r[3]=0u+0x00000000u; // 803A0790
  goto L_803A07D0; // 803A0794
L_803A0798:;
  c->r[3]=c->r[30]+0x0000000Cu; // 803A0798
  c->r[4]=c->r[1]+0x0000000Cu; // 803A079C
  c->r[5]=c->r[1]+0x00000008u; // 803A07A0
  c->lr=0x803A07A8u; f_8039B1F0(c); // 803A07A4
  c->r[3]=c->r[30]+0x0000002Cu; // 803A07A8
  c->lr=0x803A07B0u; f_80279180(c); // 803A07AC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803A07B0
  c->r[31]=c->r[3]|c->r[3]; // 803A07B4
  c->r[5]=R32(c->r[1]+0x00000008u); // 803A07B8
  c->r[3]=c->r[30]+0x0000000Cu; // 803A07BC
  c->lr=0x803A07C4u; f_8039B23C(c); // 803A07C0
  c->r[0]=0u-c->r[31]; // 803A07C4
  c->r[0]=c->r[0]|c->r[31]; // 803A07C8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A07CC
L_803A07D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A07D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A07D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A07D8
  c->lr=c->r[0]; // 803A07DC
  c->r[1]=c->r[1]+0x00000020u; // 803A07E0
  return; // 803A07E4
}

// fn_803A07E8
void f_803A07E8(Ctx* __restrict c) {
  trace_call(0x803A07E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A07E8
  c->r[0]=c->lr; // 803A07EC
  c->r[4]=c->r[3]|c->r[3]; // 803A07F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A07F4
  c->r[3]=c->r[1]+0x00000008u; // 803A07F8
  c->r[4]=c->r[4]+0x0000002Cu; // 803A07FC
  c->r[0]=R32(c->r[5]+0x00000000u); // 803A0800
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A0804
  c->r[0]=R32(c->r[5]+0x00000004u); // 803A0808
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803A080C
  c->r[0]=R32(c->r[5]+0x00000008u); // 803A0810
  W32(c->r[1]+0x00000010u,c->r[0]); // 803A0814
  c->lr=0x803A081Cu; f_802791DC(c); // 803A0818
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A081C
  c->lr=c->r[0]; // 803A0820
  c->r[1]=c->r[1]+0x00000020u; // 803A0824
  return; // 803A0828
}

// CreateImpl__Q44nw4r3snd6detail8PoolImplFPvUlUl
void f_803A082C(Ctx* __restrict c) {
  trace_call(0x803A082Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A082C
  c->r[0]=c->lr; // 803A0830
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A0834
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A0838
  c->r[31]=c->r[3]|c->r[3]; // 803A083C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A0840
  c->r[30]=c->r[6]|c->r[6]; // 803A0844
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A0848
  c->r[29]=c->r[5]|c->r[5]; // 803A084C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A0850
  c->r[28]=c->r[4]|c->r[4]; // 803A0854
  c->lr=0x803A085Cu; f_8025EA10(c); // 803A0858
  c->r[0]=c->r[28]+0x00000003u; // 803A085C
  c->r[4]=c->r[30]+0x00000003u; // 803A0860
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A0864
  c->r[7]=0u+0x00000000u; // 803A0868
  c->r[0]=c->r[6]-c->r[28]; // 803A086C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFCu; // 803A0870
  c->r[0]=c->r[29]-c->r[0]; // 803A0874
  c->r[30]=divwu(c->r[0],c->r[4]); cr0(c,c->r[30]); // 803A0878
  if (crb(c,2)) { goto L_803A0948; } // 803A087C
  cmpu(c,0,c->r[30],0x00000008u); // 803A0880
  c->r[5]=c->r[30]+0xFFFFFFF8u; // 803A0884
  if (!crb(c,1)) { goto L_803A0924; } // 803A0888
  c->r[0]=c->r[5]+0x00000007u; // 803A088C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 803A0890
  c->ctr=c->r[0]; // 803A0894
  cmpu(c,0,c->r[5],0x00000000u); // 803A0898
  if (!crb(c,1)) { goto L_803A0924; } // 803A089C
L_803A08A0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 803A08A0
  c->r[8]=c->r[6]|c->r[6]; // 803A08A4
  c->r[7]=c->r[7]+0x00000008u; // 803A08A8
  W32(c->r[6]+0x00000000u,c->r[0]); // 803A08AC
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A08B0
  c->r[6]=c->r[6]+c->r[4]; // 803A08B4
  c->r[5]=c->r[6]|c->r[6]; // 803A08B8
  W32(c->r[6]+0x00000000u,c->r[8]); // 803A08BC
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A08C0
  c->r[6]=c->r[6]+c->r[4]; // 803A08C4
  c->r[0]=c->r[6]|c->r[6]; // 803A08C8
  W32(c->r[6]+0x00000000u,c->r[5]); // 803A08CC
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A08D0
  c->r[6]=c->r[6]+c->r[4]; // 803A08D4
  c->r[5]=c->r[6]|c->r[6]; // 803A08D8
  W32(c->r[6]+0x00000000u,c->r[0]); // 803A08DC
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A08E0
  c->r[6]=c->r[6]+c->r[4]; // 803A08E4
  c->r[0]=c->r[6]|c->r[6]; // 803A08E8
  W32(c->r[6]+0x00000000u,c->r[5]); // 803A08EC
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A08F0
  c->r[6]=c->r[6]+c->r[4]; // 803A08F4
  c->r[5]=c->r[6]|c->r[6]; // 803A08F8
  W32(c->r[6]+0x00000000u,c->r[0]); // 803A08FC
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A0900
  c->r[6]=c->r[6]+c->r[4]; // 803A0904
  c->r[0]=c->r[6]|c->r[6]; // 803A0908
  W32(c->r[6]+0x00000000u,c->r[5]); // 803A090C
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A0910
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[0]); c->r[6]=ea;} // 803A0914
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A0918
  c->r[6]=c->r[6]+c->r[4]; // 803A091C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803A08A0; } // 803A0920
L_803A0924:;
  c->r[0]=c->r[30]-c->r[7]; // 803A0924
  c->ctr=c->r[0]; // 803A0928
  cmpu(c,0,c->r[7],c->r[30]); // 803A092C
  if (!crb(c,0)) { goto L_803A0948; } // 803A0930
L_803A0934:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 803A0934
  W32(c->r[6]+0x00000000u,c->r[0]); // 803A0938
  W32(c->r[31]+0x00000000u,c->r[6]); // 803A093C
  c->r[6]=c->r[6]+c->r[4]; // 803A0940
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803A0934; } // 803A0944
L_803A0948:;
  c->lr=0x803A094Cu; f_8025EA38(c); // 803A0948
  c->r[3]=c->r[30]|c->r[30]; // 803A094C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A0950
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A0954
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A0958
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A095C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A0960
  c->lr=c->r[0]; // 803A0964
  c->r[1]=c->r[1]+0x00000020u; // 803A0968
  return; // 803A096C
}

// DestroyImpl__Q44nw4r3snd6detail8PoolImplFPvUl
void f_803A0970(Ctx* __restrict c) {
  trace_call(0x803A0970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0970
  c->r[0]=c->lr; // 803A0974
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A0978
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A097C
  c->r[31]=c->r[5]|c->r[5]; // 803A0980
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A0984
  c->r[30]=c->r[4]|c->r[4]; // 803A0988
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A098C
  c->r[29]=c->r[3]|c->r[3]; // 803A0990
  c->lr=0x803A0998u; f_8025EA10(c); // 803A0994
  c->r[5]=R32(c->r[29]+0x00000000u); // 803A0998
  c->r[4]=c->r[30]+c->r[31]; // 803A099C
  goto L_803A09C8; // 803A09A0
L_803A09A4:;
  cmpu(c,0,c->r[30],c->r[5]); // 803A09A4
  if (crb(c,1)) { goto L_803A09C0; } // 803A09A8
  cmpu(c,0,c->r[5],c->r[4]); // 803A09AC
  if (!crb(c,0)) { goto L_803A09C0; } // 803A09B0
  c->r[0]=R32(c->r[5]+0x00000000u); // 803A09B4
  W32(c->r[29]+0x00000000u,c->r[0]); // 803A09B8
  goto L_803A09C4; // 803A09BC
L_803A09C0:;
  c->r[29]=c->r[5]|c->r[5]; // 803A09C0
L_803A09C4:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 803A09C4
L_803A09C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 803A09C8
  if (!crb(c,2)) { IRQCHK(c); goto L_803A09A4; } // 803A09CC
  c->lr=0x803A09D4u; f_8025EA38(c); // 803A09D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A09D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A09D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A09DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A09E0
  c->lr=c->r[0]; // 803A09E4
  c->r[1]=c->r[1]+0x00000020u; // 803A09E8
  return; // 803A09EC
}

// CountImpl__Q44nw4r3snd6detail8PoolImplCFv
void f_803A09F0(Ctx* __restrict c) {
  trace_call(0x803A09F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A09F0
  c->r[0]=c->lr; // 803A09F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A09F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A09FC
  c->r[31]=c->r[3]|c->r[3]; // 803A0A00
  c->lr=0x803A0A08u; f_8025EA10(c); // 803A0A04
  c->r[4]=R32(c->r[31]+0x00000000u); // 803A0A08
  c->r[31]=0u+0x00000000u; // 803A0A0C
  goto L_803A0A1C; // 803A0A10
L_803A0A14:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 803A0A14
  c->r[31]=c->r[31]+0x00000001u; // 803A0A18
L_803A0A1C:;
  cmps(c,0,(int32_t)c->r[4],0); // 803A0A1C
  if (!crb(c,2)) { IRQCHK(c); goto L_803A0A14; } // 803A0A20
  c->lr=0x803A0A28u; f_8025EA38(c); // 803A0A24
  c->r[3]=c->r[31]|c->r[31]; // 803A0A28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A0A2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A0A30
  c->lr=c->r[0]; // 803A0A34
  c->r[1]=c->r[1]+0x00000010u; // 803A0A38
  return; // 803A0A3C
}

// AllocImpl__Q44nw4r3snd6detail8PoolImplFv
void f_803A0A40(Ctx* __restrict c) {
  trace_call(0x803A0A40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0A40
  c->r[0]=c->lr; // 803A0A44
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A0A48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A0A4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A0A50
  c->r[30]=c->r[3]|c->r[3]; // 803A0A54
  c->lr=0x803A0A5Cu; f_8025EA10(c); // 803A0A58
  c->r[31]=R32(c->r[30]+0x00000000u); // 803A0A5C
  cmps(c,0,(int32_t)c->r[31],0); // 803A0A60
  if (!crb(c,2)) { goto L_803A0A74; } // 803A0A64
  c->lr=0x803A0A6Cu; f_8025EA38(c); // 803A0A68
  c->r[3]=0u+0x00000000u; // 803A0A6C
  goto L_803A0A84; // 803A0A70
L_803A0A74:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 803A0A74
  W32(c->r[30]+0x00000000u,c->r[0]); // 803A0A78
  c->lr=0x803A0A80u; f_8025EA38(c); // 803A0A7C
  c->r[3]=c->r[31]|c->r[31]; // 803A0A80
L_803A0A84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A0A84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A0A88
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A0A8C
  c->lr=c->r[0]; // 803A0A90
  c->r[1]=c->r[1]+0x00000010u; // 803A0A94
  return; // 803A0A98
}

// FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
void f_803A0A9C(Ctx* __restrict c) {
  trace_call(0x803A0A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0A9C
  c->r[0]=c->lr; // 803A0AA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A0AA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A0AA8
  c->r[31]=c->r[4]|c->r[4]; // 803A0AAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A0AB0
  c->r[30]=c->r[3]|c->r[3]; // 803A0AB4
  c->lr=0x803A0ABCu; f_8025EA10(c); // 803A0AB8
  c->r[0]=R32(c->r[30]+0x00000000u); // 803A0ABC
  W32(c->r[31]+0x00000000u,c->r[0]); // 803A0AC0
  W32(c->r[30]+0x00000000u,c->r[31]); // 803A0AC4
  c->lr=0x803A0ACCu; f_8025EA38(c); // 803A0AC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A0ACC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A0AD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A0AD4
  c->lr=c->r[0]; // 803A0AD8
  c->r[1]=c->r[1]+0x00000010u; // 803A0ADC
  return; // 803A0AE0
}

// Init__Q44nw4r3snd6detail8LfoParamFv
void f_803A0AE4(Ctx* __restrict c) {
  trace_call(0x803A0AE4u);
  {uint32_t ea=c->r[2]+0xFFFFEE58u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A0AE4
  c->r[4]=0u+0x00000001u; // 803A0AE8
  {uint32_t ea=c->r[2]+0xFFFFEE5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0AEC
  c->r[0]=0u+0x00000000u; // 803A0AF0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 803A0AF4
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 803A0AF8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 803A0AFC
  W32(c->r[3]+0x00000008u,c->r[0]); // 803A0B00
  return; // 803A0B04
}

// Reset__Q44nw4r3snd6detail3LfoFv
void f_803A0B08(Ctx* __restrict c) {
  trace_call(0x803A0B08u);
  {uint32_t ea=c->r[2]+0xFFFFEE58u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0B08
  c->r[0]=0u+0x00000000u; // 803A0B0C
  W32(c->r[3]+0x00000010u,c->r[0]); // 803A0B10
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 803A0B14
  return; // 803A0B18
}

// Update__Q44nw4r3snd6detail3LfoFi
void f_803A0B1C(Ctx* __restrict c) {
  trace_call(0x803A0B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0B1C
  c->r[6]=R32(c->r[3]+0x00000008u); // 803A0B20
  c->r[5]=R32(c->r[3]+0x00000010u); // 803A0B24
  cmpu(c,0,c->r[5],c->r[6]); // 803A0B28
  if (!crb(c,0)) { goto L_803A0B50; } // 803A0B2C
  c->r[0]=c->r[5]+c->r[4]; // 803A0B30
  cmpu(c,0,c->r[0],c->r[6]); // 803A0B34
  if (crb(c,1)) { goto L_803A0B44; } // 803A0B38
  W32(c->r[3]+0x00000010u,c->r[0]); // 803A0B3C
  goto L_803A0BB0; // 803A0B40
L_803A0B44:;
  c->r[0]=c->r[6]-c->r[5]; // 803A0B44
  W32(c->r[3]+0x00000010u,c->r[6]); // 803A0B48
  c->r[4]=c->r[4]-c->r[0]; // 803A0B4C
L_803A0B50:;
  c->r[0]=0u+0x43300000u; // 803A0B50
  c->r[4]=c->r[4]^0x80000000u; // 803A0B54
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803A0B58
  {uint32_t ea=c->r[2]+0xFFFFEE68u; c->f[4]=RF64(ea);} // 803A0B5C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A0B60
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A0B64
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 803A0B68
  {uint32_t ea=c->r[2]+0xFFFFEE60u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A0B6C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 803A0B70
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0B74
  W32(c->r[1]+0x00000018u,c->r[0]); // 803A0B78
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 803A0B7C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 803A0B80
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 803A0B84
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 803A0B88
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 803A0B8C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803A0B90
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A0B94
  c->r[0]=c->r[0]^0x80000000u; // 803A0B98
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803A0B9C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 803A0BA0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 803A0BA4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803A0BA8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 803A0BAC
L_803A0BB0:;
  c->r[1]=c->r[1]+0x00000020u; // 803A0BB0
  return; // 803A0BB4
}

// GetValue__Q44nw4r3snd6detail3LfoCFv
void f_803A0BB8(Ctx* __restrict c) {
  trace_call(0x803A0BB8u);
  {uint32_t ea=c->r[2]+0xFFFFEE58u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A0BB8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0BBC
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0BC0
  fcmp(c,0,c->f[1],c->f[0]); // 803A0BC4
  if (!crb(c,2)) { goto L_803A0BD0; } // 803A0BC8
  goto L_803A0CCC; // 803A0BCC
L_803A0BD0:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 803A0BD0
  c->r[0]=R32(c->r[3]+0x00000008u); // 803A0BD4
  cmpu(c,0,c->r[4],c->r[0]); // 803A0BD8
  if (!crb(c,0)) { goto L_803A0BE4; } // 803A0BDC
  goto L_803A0CCC; // 803A0BE0
L_803A0BE4:;
  {uint32_t ea=c->r[2]+0xFFFFEE74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A0BE4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A0BE8
  {uint32_t ea=c->r[2]+0xFFFFEE70u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0BEC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803A0BF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803A0BF4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803A0BF8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803A0BFC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 803A0C00
  cmps(c,0,(int32_t)c->r[5],32); // 803A0C04
  if (!crb(c,0)) { goto L_803A0C20; } // 803A0C08
  c->r[4]=0u+0x803F0000u; // 803A0C0C
  c->r[4]=c->r[4]+0xFFFFE598u; // 803A0C10
  c->r[0]=R8(c->r[4]+c->r[5]); // 803A0C14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A0C18
  goto L_803A0C84; // 803A0C1C
L_803A0C20:;
  cmps(c,0,(int32_t)c->r[5],64); // 803A0C20
  if (!crb(c,0)) { goto L_803A0C44; } // 803A0C24
  c->r[0]=c->r[5]+0xFFFFFFE0u; // 803A0C28
  c->r[4]=0u+0x803F0000u; // 803A0C2C
  c->r[0]=addc(c,~c->r[0],0x00000020u,1); // 803A0C30
  c->r[4]=c->r[4]+0xFFFFE598u; // 803A0C34
  c->r[0]=R8(c->r[4]+c->r[0]); // 803A0C38
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A0C3C
  goto L_803A0C84; // 803A0C40
L_803A0C44:;
  cmps(c,0,(int32_t)c->r[5],96); // 803A0C44
  if (!crb(c,0)) { goto L_803A0C68; } // 803A0C48
  c->r[4]=0u+0x803F0000u; // 803A0C4C
  c->r[4]=c->r[4]+0xFFFFE598u; // 803A0C50
  c->r[4]=c->r[5]+c->r[4]; // 803A0C54
  c->r[0]=R8(c->r[4]+0xFFFFFFC0u); // 803A0C58
  c->r[0]=0u-c->r[0]; // 803A0C5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A0C60
  goto L_803A0C84; // 803A0C64
L_803A0C68:;
  c->r[0]=c->r[5]+0xFFFFFFA0u; // 803A0C68
  c->r[4]=0u+0x803F0000u; // 803A0C6C
  c->r[0]=addc(c,~c->r[0],0x00000020u,1); // 803A0C70
  c->r[4]=c->r[4]+0xFFFFE598u; // 803A0C74
  c->r[0]=R8(c->r[4]+c->r[0]); // 803A0C78
  c->r[0]=0u-c->r[0]; // 803A0C7C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A0C80
L_803A0C84:;
  c->r[4]=0u+0x43300000u; // 803A0C84
  c->r[0]=c->r[0]^0x80000000u; // 803A0C88
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803A0C8C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803A0C90
  W32(c->r[1]+0x00000008u,c->r[4]); // 803A0C94
  {uint32_t ea=c->r[2]+0xFFFFEE68u; c->f[2]=RF64(ea);} // 803A0C98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A0C9C
  {uint32_t ea=c->r[2]+0xFFFFEE78u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A0CA0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A0CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A0CA8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A0CAC
  W32(c->r[1]+0x00000010u,c->r[4]); // 803A0CB0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803A0CB4
  {uint32_t ea=c->r[2]+0xFFFFEE80u; c->f[2]=RF64(ea);} // 803A0CB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 803A0CBC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 803A0CC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803A0CC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803A0CC8
L_803A0CCC:;
  c->r[1]=c->r[1]+0x00000020u; // 803A0CCC
  return; // 803A0CD0
}

// fn_803A0CD4
void f_803A0CD4(Ctx* __restrict c) {
  trace_call(0x803A0CD4u);
  f_803A3798(c); return; // 803A0CD4
}

// fn_803A0CD8
void f_803A0CD8(Ctx* __restrict c) {
  trace_call(0x803A0CD8u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A0CD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A0CDC
  c->ctr=c->r[12]; // 803A0CE0
  if (true) { dispatch(c,c->ctr); return; } // 803A0CE4
}

// fn_803A0CE8
void f_803A0CE8(Ctx* __restrict c) {
  trace_call(0x803A0CE8u);
  return; // 803A0CE8
}

// fn_803A0CEC
void f_803A0CEC(Ctx* __restrict c) {
  trace_call(0x803A0CECu);
  return; // 803A0CEC
}

// fn_803A0CF0
void f_803A0CF0(Ctx* __restrict c) {
  trace_call(0x803A0CF0u);
  c->r[3]=R8(c->r[3]+0x0000008Eu); // 803A0CF0
  return; // 803A0CF4
}

// fn_803A0CF8
void f_803A0CF8(Ctx* __restrict c) {
  trace_call(0x803A0CF8u);
  c->r[3]=R8(c->r[3]+0x0000008Du); // 803A0CF8
  return; // 803A0CFC
}

// fn_803A0D00
void f_803A0D00(Ctx* __restrict c) {
  trace_call(0x803A0D00u);
  c->r[3]=R8(c->r[3]+0x0000008Cu); // 803A0D00
  return; // 803A0D04
}

// fn_803A0D08
void f_803A0D08(Ctx* __restrict c) {
  trace_call(0x803A0D08u);
  c->r[3]=c->r[3]+0xFFFFFF8Cu; // 803A0D08
  f_803A0CE8(c); return; // 803A0D0C
}

// fn_803A0D10
void f_803A0D10(Ctx* __restrict c) {
  trace_call(0x803A0D10u);
  c->r[3]=c->r[3]+0xFFFFFF8Cu; // 803A0D10
  f_803A3450(c); return; // 803A0D14
}

// fn_803A0D18
void f_803A0D18(Ctx* __restrict c) {
  trace_call(0x803A0D18u);
  c->r[3]=c->r[3]+0xFFFFFF80u; // 803A0D18
  f_803A0CD8(c); return; // 803A0D1C
}

// fn_803A0D20
void f_803A0D20(Ctx* __restrict c) {
  trace_call(0x803A0D20u);
  c->r[3]=c->r[3]+0xFFFFFF80u; // 803A0D20
  f_803A0CD4(c); return; // 803A0D24
}

// fn_803A0D28
void f_803A0D28(Ctx* __restrict c) {
  trace_call(0x803A0D28u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A0D28
  c->r[0]=c->lr; // 803A0D2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A0D30
  c->r[11]=c->r[1]+0x00000030u; // 803A0D34
  c->lr=0x803A0D3Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A0D38
  c->r[7]=R32(c->r[4]+0x00000054u); // 803A0D3C
  c->r[29]=c->r[5]|c->r[5]; // 803A0D40
  c->r[9]=R32(c->r[4]+0x000000B8u); // 803A0D44
  c->r[27]=c->r[3]|c->r[3]; // 803A0D48
  c->r[6]=c->r[7]+0x00000001u; // 803A0D4C
  c->r[28]=c->r[4]|c->r[4]; // 803A0D50
  W32(c->r[4]+0x00000054u,c->r[6]); // 803A0D54
  c->r[5]=0u+0x00000000u; // 803A0D58
  c->r[31]=0u+0x00000001u; // 803A0D5C
  c->r[30]=R8(c->r[7]+0x00000000u); // 803A0D60
  cmpu(c,0,c->r[30],0x000000A2u); // 803A0D64
  if (!crb(c,2)) { goto L_803A0D88; } // 803A0D68
  c->r[0]=c->r[6]+0x00000001u; // 803A0D6C
  c->r[3]=R8(c->r[4]+0x000000C4u); // 803A0D70
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A0D74
  c->r[0]=0u-c->r[3]; // 803A0D78
  c->r[0]=c->r[0]|c->r[3]; // 803A0D7C
  c->r[30]=R8(c->r[6]+0x00000000u); // 803A0D80
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 803A0D84
L_803A0D88:;
  cmpu(c,0,c->r[30],0x000000A0u); // 803A0D88
  if (!crb(c,2)) { goto L_803A0DA8; } // 803A0D8C
  c->r[3]=R32(c->r[4]+0x00000054u); // 803A0D90
  c->r[10]=0u+0x00000003u; // 803A0D94
  c->r[5]=0u+0x00000001u; // 803A0D98
  c->r[0]=c->r[3]+0x00000001u; // 803A0D9C
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A0DA0
  c->r[30]=R8(c->r[3]+0x00000000u); // 803A0DA4
L_803A0DA8:;
  cmpu(c,0,c->r[30],0x000000A1u); // 803A0DA8
  if (!crb(c,2)) { goto L_803A0DC8; } // 803A0DAC
  c->r[3]=R32(c->r[4]+0x00000054u); // 803A0DB0
  c->r[10]=0u+0x00000004u; // 803A0DB4
  c->r[5]=0u+0x00000001u; // 803A0DB8
  c->r[0]=c->r[3]+0x00000001u; // 803A0DBC
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A0DC0
  c->r[30]=R8(c->r[3]+0x00000000u); // 803A0DC4
L_803A0DC8:;
  c->r[0]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[0]); // 803A0DC8
  if (!crb(c,2)) { goto L_803A0EA0; } // 803A0DCC
  c->r[8]=R32(c->r[4]+0x00000054u); // 803A0DD0
  cmps(c,0,(int32_t)c->r[5],0); // 803A0DD4
  c->r[3]=c->r[27]|c->r[27]; // 803A0DD8
  c->r[5]=c->r[9]|c->r[9]; // 803A0DDC
  c->r[0]=c->r[8]+0x00000001u; // 803A0DE0
  c->r[6]=c->r[28]|c->r[28]; // 803A0DE4
  {uint32_t ea=c->r[4]+0x00000054u; W32(ea,c->r[0]); c->r[4]=ea;} // 803A0DE8
  c->r[7]=0u+0x00000002u; // 803A0DEC
  c->r[26]=R8(c->r[8]+0x00000000u); // 803A0DF0
  if (crb(c,2)) { goto L_803A0DFC; } // 803A0DF4
  c->r[7]=c->r[10]|c->r[10]; // 803A0DF8
L_803A0DFC:;
  c->lr=0x803A0E00u; f_803A1AA8(c); // 803A0DFC
  c->r[0]=R8(c->r[28]+0x0000008Bu); // 803A0E00
  cmps(c,0,(int32_t)c->r[31],0); // 803A0E04
  c->r[31]=c->r[3]|c->r[3]; // 803A0E08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A0E0C
  c->r[3]=c->r[30]+c->r[0]; // 803A0E10
  if (!crb(c,2)) { goto L_803A0E20; } // 803A0E14
  c->r[3]=0u+0x00000000u; // 803A0E18
  goto L_803A1340; // 803A0E1C
L_803A0E20:;
  cmps(c,0,(int32_t)c->r[3],127); // 803A0E20
  if (!crb(c,1)) { goto L_803A0E30; } // 803A0E24
  c->r[5]=0u+0x0000007Fu; // 803A0E28
  goto L_803A0E38; // 803A0E2C
L_803A0E30:;
  c->r[0]=sraw(c,c->r[3],31); // 803A0E30
  c->r[5]=c->r[3]&~c->r[0]; // 803A0E34
L_803A0E38:;
  c->r[0]=R8(c->r[28]+0x0000005Cu); // 803A0E38
  cmps(c,0,(int32_t)c->r[0],0); // 803A0E3C
  if (!crb(c,2)) { goto L_803A0E7C; } // 803A0E40
  cmps(c,0,(int32_t)c->r[29],0); // 803A0E44
  if (crb(c,2)) { goto L_803A0E7C; } // 803A0E48
  cmps(c,0,(int32_t)c->r[31],0); // 803A0E4C
  c->r[3]=c->r[27]|c->r[27]; // 803A0E50
  c->r[4]=c->r[28]|c->r[28]; // 803A0E54
  c->r[6]=c->r[26]|c->r[26]; // 803A0E58
  c->r[7]=0u+0xFFFFFFFFu; // 803A0E5C
  if (!crb(c,1)) { goto L_803A0E68; } // 803A0E60
  c->r[7]=c->r[31]|c->r[31]; // 803A0E64
L_803A0E68:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A0E68
  c->r[8]=R8(c->r[28]+0x000000C6u); // 803A0E6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A0E70
  c->ctr=c->r[12]; // 803A0E74
  if (true) { c->lr=0x803A0E7Cu; dispatch(c,c->ctr); } // 803A0E78
L_803A0E7C:;
  c->r[0]=R8(c->r[28]+0x000000C5u); // 803A0E7C
  cmps(c,0,(int32_t)c->r[0],0); // 803A0E80
  if (crb(c,2)) { goto L_803A133C; } // 803A0E84
  cmps(c,0,(int32_t)c->r[31],0); // 803A0E88
  W32(c->r[28]+0x00000058u,c->r[31]); // 803A0E8C
  if (!crb(c,2)) { goto L_803A133C; } // 803A0E90
  c->r[0]=0u+0x00000001u; // 803A0E94
  W8(c->r[28]+0x0000005Eu,c->r[0]); // 803A0E98
  goto L_803A133C; // 803A0E9C
L_803A0EA0:;
  c->r[0]=rotl(c->r[30],0)&0x000000F0u; // 803A0EA0
  c->r[26]=0u+0x00000000u; // 803A0EA4
  cmps(c,0,(int32_t)c->r[0],192); // 803A0EA8
  c->r[25]=0u+0x00000000u; // 803A0EAC
  if (crb(c,2)) { goto L_803A10E4; } // 803A0EB0
  if (!crb(c,0)) { goto L_803A0EDC; } // 803A0EB4
  cmps(c,0,(int32_t)c->r[0],144); // 803A0EB8
  if (crb(c,2)) { goto L_803A1158; } // 803A0EBC
  if (!crb(c,0)) { goto L_803A0ED0; } // 803A0EC0
  cmps(c,0,(int32_t)c->r[0],128); // 803A0EC4
  if (crb(c,2)) { goto L_803A0F00; } // 803A0EC8
  goto L_803A133C; // 803A0ECC
L_803A0ED0:;
  cmps(c,0,(int32_t)c->r[0],176); // 803A0ED0
  if (crb(c,2)) { goto L_803A10E4; } // 803A0ED4
  goto L_803A133C; // 803A0ED8
L_803A0EDC:;
  cmps(c,0,(int32_t)c->r[0],224); // 803A0EDC
  if (crb(c,2)) { goto L_803A1188; } // 803A0EE0
  if (!crb(c,0)) { goto L_803A0EF4; } // 803A0EE4
  cmps(c,0,(int32_t)c->r[0],208); // 803A0EE8
  if (crb(c,2)) { goto L_803A10E4; } // 803A0EEC
  goto L_803A133C; // 803A0EF0
L_803A0EF4:;
  cmps(c,0,(int32_t)c->r[0],240); // 803A0EF4
  if (crb(c,2)) { goto L_803A11DC; } // 803A0EF8
  goto L_803A133C; // 803A0EFC
L_803A0F00:;
  cmps(c,0,(int32_t)c->r[30],136); // 803A0F00
  if (crb(c,2)) { goto L_803A0FBC; } // 803A0F04
  if (!crb(c,0)) { goto L_803A0F24; } // 803A0F08
  cmps(c,0,(int32_t)c->r[30],129); // 803A0F0C
  if (crb(c,2)) { goto L_803A0F68; } // 803A0F10
  if (!crb(c,0)) { goto L_803A133C; } // 803A0F14
  cmps(c,0,(int32_t)c->r[30],128); // 803A0F18
  if (!crb(c,0)) { goto L_803A0F34; } // 803A0F1C
  goto L_803A133C; // 803A0F20
L_803A0F24:;
  cmps(c,0,(int32_t)c->r[30],138); // 803A0F24
  if (crb(c,2)) { goto L_803A1084; } // 803A0F28
  if (!crb(c,0)) { goto L_803A133C; } // 803A0F2C
  goto L_803A1024; // 803A0F30
L_803A0F34:;
  cmps(c,0,(int32_t)c->r[5],0); // 803A0F34
  c->r[3]=c->r[27]|c->r[27]; // 803A0F38
  c->r[5]=c->r[9]|c->r[9]; // 803A0F3C
  c->r[6]=c->r[28]|c->r[28]; // 803A0F40
  c->r[7]=0u+0x00000002u; // 803A0F44
  c->r[4]=c->r[4]+0x00000054u; // 803A0F48
  if (crb(c,2)) { goto L_803A0F54; } // 803A0F4C
  c->r[7]=c->r[10]|c->r[10]; // 803A0F50
L_803A0F54:;
  c->lr=0x803A0F58u; f_803A1AA8(c); // 803A0F54
  cmps(c,0,(int32_t)c->r[31],0); // 803A0F58
  if (crb(c,2)) { goto L_803A133C; } // 803A0F5C
  W32(c->r[28]+0x00000058u,c->r[3]); // 803A0F60
  goto L_803A133C; // 803A0F64
L_803A0F68:;
  cmps(c,0,(int32_t)c->r[5],0); // 803A0F68
  c->r[3]=c->r[27]|c->r[27]; // 803A0F6C
  c->r[5]=c->r[9]|c->r[9]; // 803A0F70
  c->r[6]=c->r[28]|c->r[28]; // 803A0F74
  c->r[7]=0u+0x00000002u; // 803A0F78
  c->r[4]=c->r[4]+0x00000054u; // 803A0F7C
  if (crb(c,2)) { goto L_803A0F88; } // 803A0F80
  c->r[7]=c->r[10]|c->r[10]; // 803A0F84
L_803A0F88:;
  c->lr=0x803A0F8Cu; f_803A1AA8(c); // 803A0F88
  cmps(c,0,(int32_t)c->r[31],0); // 803A0F8C
  c->r[6]=c->r[3]|c->r[3]; // 803A0F90
  if (crb(c,2)) { goto L_803A133C; } // 803A0F94
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A0F98
  c->r[3]=c->r[27]|c->r[27]; // 803A0F9C
  c->r[4]=c->r[28]|c->r[28]; // 803A0FA0
  c->r[5]=c->r[30]|c->r[30]; // 803A0FA4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A0FA8
  c->r[7]=0u+0x00000000u; // 803A0FAC
  c->ctr=c->r[12]; // 803A0FB0
  if (true) { c->lr=0x803A0FB8u; dispatch(c,c->ctr); } // 803A0FB4
  goto L_803A133C; // 803A0FB8
L_803A0FBC:;
  c->r[6]=R32(c->r[4]+0x00000054u); // 803A0FBC
  cmps(c,0,(int32_t)c->r[31],0); // 803A0FC0
  c->r[5]=c->r[6]+0x00000001u; // 803A0FC4
  W32(c->r[4]+0x00000054u,c->r[5]); // 803A0FC8
  c->r[7]=c->r[5]+0x00000001u; // 803A0FCC
  c->r[3]=c->r[7]+0x00000001u; // 803A0FD0
  c->r[6]=R8(c->r[6]+0x00000000u); // 803A0FD4
  c->r[0]=c->r[3]+0x00000001u; // 803A0FD8
  W32(c->r[4]+0x00000054u,c->r[7]); // 803A0FDC
  c->r[5]=R8(c->r[5]+0x00000000u); // 803A0FE0
  W32(c->r[4]+0x00000054u,c->r[3]); // 803A0FE4
  c->r[7]=R8(c->r[7]+0x00000000u); // 803A0FE8
  c->r[7]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 803A0FEC
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A0FF0
  c->r[7]=rotl(c->r[7],8)&0xFFFFFF00u; // 803A0FF4
  c->r[0]=R8(c->r[3]+0x00000000u); // 803A0FF8
  c->r[7]=c->r[7]|c->r[0]; // 803A0FFC
  if (crb(c,2)) { goto L_803A133C; } // 803A1000
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A1004
  c->r[3]=c->r[27]|c->r[27]; // 803A1008
  c->r[4]=c->r[28]|c->r[28]; // 803A100C
  c->r[5]=c->r[30]|c->r[30]; // 803A1010
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A1014
  c->ctr=c->r[12]; // 803A1018
  if (true) { c->lr=0x803A1020u; dispatch(c,c->ctr); } // 803A101C
  goto L_803A133C; // 803A1020
L_803A1024:;
  c->r[5]=R32(c->r[4]+0x00000054u); // 803A1024
  cmps(c,0,(int32_t)c->r[31],0); // 803A1028
  c->r[6]=c->r[5]+0x00000001u; // 803A102C
  W32(c->r[4]+0x00000054u,c->r[6]); // 803A1030
  c->r[3]=c->r[6]+0x00000001u; // 803A1034
  c->r[0]=c->r[3]+0x00000001u; // 803A1038
  c->r[5]=R8(c->r[5]+0x00000000u); // 803A103C
  W32(c->r[4]+0x00000054u,c->r[3]); // 803A1040
  c->r[6]=R8(c->r[6]+0x00000000u); // 803A1044
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 803A1048
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A104C
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 803A1050
  c->r[0]=R8(c->r[3]+0x00000000u); // 803A1054
  c->r[6]=c->r[6]|c->r[0]; // 803A1058
  if (crb(c,2)) { goto L_803A133C; } // 803A105C
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A1060
  c->r[3]=c->r[27]|c->r[27]; // 803A1064
  c->r[4]=c->r[28]|c->r[28]; // 803A1068
  c->r[5]=c->r[30]|c->r[30]; // 803A106C
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A1070
  c->r[7]=0u+0x00000000u; // 803A1074
  c->ctr=c->r[12]; // 803A1078
  if (true) { c->lr=0x803A1080u; dispatch(c,c->ctr); } // 803A107C
  goto L_803A133C; // 803A1080
L_803A1084:;
  c->r[5]=R32(c->r[4]+0x00000054u); // 803A1084
  cmps(c,0,(int32_t)c->r[31],0); // 803A1088
  c->r[6]=c->r[5]+0x00000001u; // 803A108C
  W32(c->r[4]+0x00000054u,c->r[6]); // 803A1090
  c->r[3]=c->r[6]+0x00000001u; // 803A1094
  c->r[0]=c->r[3]+0x00000001u; // 803A1098
  c->r[5]=R8(c->r[5]+0x00000000u); // 803A109C
  W32(c->r[4]+0x00000054u,c->r[3]); // 803A10A0
  c->r[6]=R8(c->r[6]+0x00000000u); // 803A10A4
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 803A10A8
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A10AC
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 803A10B0
  c->r[0]=R8(c->r[3]+0x00000000u); // 803A10B4
  c->r[6]=c->r[6]|c->r[0]; // 803A10B8
  if (crb(c,2)) { goto L_803A133C; } // 803A10BC
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A10C0
  c->r[3]=c->r[27]|c->r[27]; // 803A10C4
  c->r[4]=c->r[28]|c->r[28]; // 803A10C8
  c->r[5]=c->r[30]|c->r[30]; // 803A10CC
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A10D0
  c->r[7]=0u+0x00000000u; // 803A10D4
  c->ctr=c->r[12]; // 803A10D8
  if (true) { c->lr=0x803A10E0u; dispatch(c,c->ctr); } // 803A10DC
  goto L_803A133C; // 803A10E0
L_803A10E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 803A10E4
  c->r[3]=c->r[27]|c->r[27]; // 803A10E8
  c->r[5]=c->r[9]|c->r[9]; // 803A10EC
  c->r[6]=c->r[28]|c->r[28]; // 803A10F0
  c->r[7]=0u+0x00000000u; // 803A10F4
  c->r[4]=c->r[4]+0x00000054u; // 803A10F8
  if (crb(c,2)) { goto L_803A1104; } // 803A10FC
  c->r[7]=c->r[10]|c->r[10]; // 803A1100
L_803A1104:;
  c->lr=0x803A1108u; f_803A1AA8(c); // 803A1104
  cmps(c,0,(int32_t)c->r[31],0); // 803A1108
  if (crb(c,2)) { goto L_803A133C; } // 803A110C
  cmps(c,0,(int32_t)c->r[30],197); // 803A1110
  if (!crb(c,0)) { goto L_803A1130; } // 803A1114
  cmps(c,0,(int32_t)c->r[30],195); // 803A1118
  if (!crb(c,0)) { goto L_803A1124; } // 803A111C
  goto L_803A1130; // 803A1120
L_803A1124:;
  c->r[6]=rotl(c->r[3],0)&0x000000FFu; // 803A1124
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 803A1128
  goto L_803A1134; // 803A112C
L_803A1130:;
  c->r[6]=rotl(c->r[3],0)&0x000000FFu; // 803A1130
L_803A1134:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A1134
  c->r[3]=c->r[27]|c->r[27]; // 803A1138
  c->r[4]=c->r[28]|c->r[28]; // 803A113C
  c->r[5]=c->r[30]|c->r[30]; // 803A1140
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A1144
  c->r[7]=0u+0x00000000u; // 803A1148
  c->ctr=c->r[12]; // 803A114C
  if (true) { c->lr=0x803A1154u; dispatch(c,c->ctr); } // 803A1150
  goto L_803A133C; // 803A1154
L_803A1158:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A1158
  if (crb(c,2)) { goto L_803A133C; } // 803A115C
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A1160
  c->r[3]=c->r[27]|c->r[27]; // 803A1164
  c->r[4]=c->r[28]|c->r[28]; // 803A1168
  c->r[5]=c->r[30]|c->r[30]; // 803A116C
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A1170
  c->r[6]=0u+0x00000000u; // 803A1174
  c->r[7]=0u+0x00000000u; // 803A1178
  c->ctr=c->r[12]; // 803A117C
  if (true) { c->lr=0x803A1184u; dispatch(c,c->ctr); } // 803A1180
  goto L_803A133C; // 803A1184
L_803A1188:;
  cmps(c,0,(int32_t)c->r[5],0); // 803A1188
  c->r[3]=c->r[27]|c->r[27]; // 803A118C
  c->r[5]=c->r[9]|c->r[9]; // 803A1190
  c->r[6]=c->r[28]|c->r[28]; // 803A1194
  c->r[7]=0u+0x00000001u; // 803A1198
  c->r[4]=c->r[4]+0x00000054u; // 803A119C
  if (crb(c,2)) { goto L_803A11A8; } // 803A11A0
  c->r[7]=c->r[10]|c->r[10]; // 803A11A4
L_803A11A8:;
  c->lr=0x803A11ACu; f_803A1AA8(c); // 803A11A8
  cmps(c,0,(int32_t)c->r[31],0); // 803A11AC
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803A11B0
  if (crb(c,2)) { goto L_803A133C; } // 803A11B4
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A11B8
  c->r[3]=c->r[27]|c->r[27]; // 803A11BC
  c->r[4]=c->r[28]|c->r[28]; // 803A11C0
  c->r[5]=c->r[30]|c->r[30]; // 803A11C4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A11C8
  c->r[7]=0u+0x00000000u; // 803A11CC
  c->ctr=c->r[12]; // 803A11D0
  if (true) { c->lr=0x803A11D8u; dispatch(c,c->ctr); } // 803A11D4
  goto L_803A133C; // 803A11D8
L_803A11DC:;
  cmps(c,0,(int32_t)c->r[30],254); // 803A11DC
  if (crb(c,2)) { goto L_803A1200; } // 803A11E0
  if (!crb(c,0)) { goto L_803A11F4; } // 803A11E4
  cmps(c,0,(int32_t)c->r[30],240); // 803A11E8
  if (crb(c,2)) { goto L_803A1218; } // 803A11EC
  goto L_803A1310; // 803A11F0
L_803A11F4:;
  cmps(c,0,(int32_t)c->r[30],256); // 803A11F4
  if (!crb(c,0)) { goto L_803A1310; } // 803A11F8
  goto L_803A1210; // 803A11FC
L_803A1200:;
  c->r[3]=R32(c->r[4]+0x00000054u); // 803A1200
  c->r[0]=c->r[3]+0x00000002u; // 803A1204
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A1208
  goto L_803A133C; // 803A120C
L_803A1210:;
  c->r[3]=0u+0x00000001u; // 803A1210
  goto L_803A1340; // 803A1214
L_803A1218:;
  c->r[3]=R32(c->r[4]+0x00000054u); // 803A1218
  c->r[0]=c->r[3]+0x00000001u; // 803A121C
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A1220
  c->r[29]=R8(c->r[3]+0x00000000u); // 803A1224
  c->r[0]=rotl(c->r[29],0)&0x000000F0u; // 803A1228
  cmps(c,0,(int32_t)c->r[0],144); // 803A122C
  if (crb(c,2)) { goto L_803A12AC; } // 803A1230
  if (!crb(c,0)) { goto L_803A1244; } // 803A1234
  cmps(c,0,(int32_t)c->r[0],128); // 803A1238
  if (crb(c,2)) { goto L_803A12AC; } // 803A123C
  goto L_803A1310; // 803A1240
L_803A1244:;
  cmps(c,0,(int32_t)c->r[0],224); // 803A1244
  if (crb(c,2)) { goto L_803A1250; } // 803A1248
  goto L_803A1310; // 803A124C
L_803A1250:;
  cmps(c,0,(int32_t)c->r[5],0); // 803A1250
  c->r[3]=c->r[27]|c->r[27]; // 803A1254
  c->r[5]=c->r[9]|c->r[9]; // 803A1258
  c->r[6]=c->r[28]|c->r[28]; // 803A125C
  c->r[7]=0u+0x00000001u; // 803A1260
  c->r[4]=c->r[4]+0x00000054u; // 803A1264
  if (crb(c,2)) { goto L_803A1270; } // 803A1268
  c->r[7]=c->r[10]|c->r[10]; // 803A126C
L_803A1270:;
  c->lr=0x803A1274u; f_803A1AA8(c); // 803A1270
  cmps(c,0,(int32_t)c->r[31],0); // 803A1274
  c->r[26]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803A1278
  if (crb(c,2)) { goto L_803A1310; } // 803A127C
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A1280
  c->r[0]=rotl(c->r[30],8)&0xFFFFFF00u; // 803A1284
  c->r[3]=c->r[27]|c->r[27]; // 803A1288
  c->r[4]=c->r[28]|c->r[28]; // 803A128C
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A1290
  c->r[6]=c->r[26]|c->r[26]; // 803A1294
  c->r[5]=c->r[0]+c->r[29]; // 803A1298
  c->r[7]=0u+0x00000000u; // 803A129C
  c->ctr=c->r[12]; // 803A12A0
  if (true) { c->lr=0x803A12A8u; dispatch(c,c->ctr); } // 803A12A4
  goto L_803A1310; // 803A12A8
L_803A12AC:;
  c->r[8]=R32(c->r[4]+0x00000054u); // 803A12AC
  cmps(c,0,(int32_t)c->r[5],0); // 803A12B0
  c->r[3]=c->r[27]|c->r[27]; // 803A12B4
  c->r[5]=c->r[9]|c->r[9]; // 803A12B8
  c->r[0]=c->r[8]+0x00000001u; // 803A12BC
  c->r[6]=c->r[28]|c->r[28]; // 803A12C0
  {uint32_t ea=c->r[4]+0x00000054u; W32(ea,c->r[0]); c->r[4]=ea;} // 803A12C4
  c->r[7]=0u+0x00000001u; // 803A12C8
  c->r[26]=R8(c->r[8]+0x00000000u); // 803A12CC
  if (crb(c,2)) { goto L_803A12D8; } // 803A12D0
  c->r[7]=c->r[10]|c->r[10]; // 803A12D4
L_803A12D8:;
  c->lr=0x803A12DCu; f_803A1AA8(c); // 803A12D8
  cmps(c,0,(int32_t)c->r[31],0); // 803A12DC
  c->r[25]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 803A12E0
  if (crb(c,2)) { goto L_803A1310; } // 803A12E4
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A12E8
  c->r[0]=rotl(c->r[30],8)&0xFFFFFF00u; // 803A12EC
  c->r[3]=c->r[27]|c->r[27]; // 803A12F0
  c->r[4]=c->r[28]|c->r[28]; // 803A12F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A12F8
  c->r[6]=c->r[26]|c->r[26]; // 803A12FC
  c->r[7]=c->r[25]|c->r[25]; // 803A1300
  c->r[5]=c->r[0]+c->r[29]; // 803A1304
  c->ctr=c->r[12]; // 803A1308
  if (true) { c->lr=0x803A1310u; dispatch(c,c->ctr); } // 803A130C
L_803A1310:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A1310
  if (crb(c,2)) { goto L_803A133C; } // 803A1314
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A1318
  c->r[3]=c->r[27]|c->r[27]; // 803A131C
  c->r[4]=c->r[28]|c->r[28]; // 803A1320
  c->r[5]=c->r[30]|c->r[30]; // 803A1324
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A1328
  c->r[6]=c->r[26]|c->r[26]; // 803A132C
  c->r[7]=c->r[25]|c->r[25]; // 803A1330
  c->ctr=c->r[12]; // 803A1334
  if (true) { c->lr=0x803A133Cu; dispatch(c,c->ctr); } // 803A1338
L_803A133C:;
  c->r[3]=0u+0x00000000u; // 803A133C
L_803A1340:;
  c->r[11]=c->r[1]+0x00000030u; // 803A1340
  c->lr=0x803A1348u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A1344
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A1348
  c->lr=c->r[0]; // 803A134C
  c->r[1]=c->r[1]+0x00000030u; // 803A1350
  return; // 803A1354
}

// fn_803A1358
void f_803A1358(Ctx* __restrict c) {
  trace_call(0x803A1358u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1358
  c->r[0]=c->lr; // 803A135C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A1360
  c->r[11]=c->r[1]+0x00000030u; // 803A1364
  c->lr=0x803A136Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A1368
  cmpu(c,0,c->r[5],0x000000FFu); // 803A136C
  c->r[28]=R32(c->r[4]+0x000000B8u); // 803A1370
  c->r[25]=c->r[4]|c->r[4]; // 803A1374
  c->r[26]=c->r[6]|c->r[6]; // 803A1378
  c->r[29]=c->r[7]|c->r[7]; // 803A137C
  c->r[31]=c->r[4]+0x000000C4u; // 803A1380
  if (crb(c,1)) { goto L_803A17A4; } // 803A1384
  c->r[0]=c->r[5]+0xFFFFFF7Fu; // 803A1388
  cmpu(c,0,c->r[0],0x0000007Cu); // 803A138C
  if (crb(c,1)) { goto L_803A1A78; } // 803A1390
  c->r[3]=0u+0x80430000u; // 803A1394
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803A1398
  c->r[3]=c->r[3]+0x00007138u; // 803A139C
  c->r[3]=R32(c->r[3]+c->r[0]); // 803A13A0
  c->ctr=c->r[3]; // 803A13A4
  if (true) { switch (c->ctr) { case 0x803A13ACu: goto L_803A13AC; case 0x803A13B4u: goto L_803A13B4; case 0x803A13BCu: goto L_803A13BC; case 0x803A13D4u: goto L_803A13D4; case 0x803A13E4u: goto L_803A13E4; case 0x803A13ECu: goto L_803A13EC; case 0x803A13F4u: goto L_803A13F4; case 0x803A13FCu: goto L_803A13FC; case 0x803A1404u: goto L_803A1404; case 0x803A140Cu: goto L_803A140C; case 0x803A1414u: goto L_803A1414; case 0x803A1420u: goto L_803A1420; case 0x803A142Cu: goto L_803A142C; case 0x803A1434u: goto L_803A1434; case 0x803A143Cu: goto L_803A143C; case 0x803A1450u: goto L_803A1450; case 0x803A1458u: goto L_803A1458; case 0x803A1484u: goto L_803A1484; case 0x803A14B0u: goto L_803A14B0; case 0x803A14B8u: goto L_803A14B8; case 0x803A14C0u: goto L_803A14C0; case 0x803A14D0u: goto L_803A14D0; case 0x803A14FCu: goto L_803A14FC; case 0x803A1504u: goto L_803A1504; case 0x803A150Cu: goto L_803A150C; case 0x803A1514u: goto L_803A1514; case 0x803A151Cu: goto L_803A151C; case 0x803A1540u: goto L_803A1540; case 0x803A1568u: goto L_803A1568; case 0x803A1580u: goto L_803A1580; case 0x803A1594u: goto L_803A1594; case 0x803A159Cu: goto L_803A159C; case 0x803A15A4u: goto L_803A15A4; case 0x803A15ACu: goto L_803A15AC; case 0x803A15B4u: goto L_803A15B4; case 0x803A15BCu: goto L_803A15BC; case 0x803A1668u: goto L_803A1668; case 0x803A16A8u: goto L_803A16A8; case 0x803A16B8u: goto L_803A16B8; case 0x803A16F0u: goto L_803A16F0; case 0x803A1718u: goto L_803A1718; case 0x803A1750u: goto L_803A1750; case 0x803A1A78u: goto L_803A1A78; default: break; } dispatch(c,c->ctr); return; } // 803A13A8
L_803A13AC:;
  W16(c->r[28]+0x000000ACu,c->r[6]); // 803A13AC
  goto L_803A1A78; // 803A13B0
L_803A13B4:;
  W8(c->r[28]+0x000000AAu,c->r[6]); // 803A13B4
  goto L_803A1A78; // 803A13B8
L_803A13BC:;
  c->r[0]=0u+0x00010000u; // 803A13BC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803A13C0
  if (!crb(c,0)) { goto L_803A1A78; } // 803A13C4
  c->r[0]=rotl(c->r[6],0)&0x0000FFFFu; // 803A13C8
  W32(c->r[4]+0x00000068u,c->r[0]); // 803A13CC
  goto L_803A1A78; // 803A13D0
L_803A13D4:;
  c->r[3]=c->r[25]|c->r[25]; // 803A13D4
  c->r[4]=c->r[26]|c->r[26]; // 803A13D8
  c->lr=0x803A13E0u; f_803A540C(c); // 803A13DC
  goto L_803A1A78; // 803A13E0
L_803A13E4:;
  W8(c->r[4]+0x00000084u,c->r[6]); // 803A13E4
  goto L_803A1A78; // 803A13E8
L_803A13EC:;
  W8(c->r[4]+0x00000085u,c->r[6]); // 803A13EC
  goto L_803A1A78; // 803A13F0
L_803A13F4:;
  W8(c->r[28]+0x000000A8u,c->r[6]); // 803A13F4
  goto L_803A1A78; // 803A13F8
L_803A13FC:;
  W8(c->r[4]+0x0000008Bu,c->r[6]); // 803A13FC
  goto L_803A1A78; // 803A1400
L_803A1404:;
  W8(c->r[4]+0x00000086u,c->r[6]); // 803A1404
  goto L_803A1A78; // 803A1408
L_803A140C:;
  W8(c->r[4]+0x00000087u,c->r[6]); // 803A140C
  goto L_803A1A78; // 803A1410
L_803A1414:;
  c->r[0]=c->r[6]+0xFFFFFFC0u; // 803A1414
  W8(c->r[4]+0x00000088u,c->r[0]); // 803A1418
  goto L_803A1A78; // 803A141C
L_803A1420:;
  c->r[0]=c->r[6]+0xFFFFFFC0u; // 803A1420
  W8(c->r[4]+0x00000089u,c->r[0]); // 803A1424
  goto L_803A1A78; // 803A1428
L_803A142C:;
  W8(c->r[4]+0x0000008Au,c->r[6]); // 803A142C
  goto L_803A1A78; // 803A1430
L_803A1434:;
  W8(c->r[4]+0x0000008Cu,c->r[6]); // 803A1434
  goto L_803A1A78; // 803A1438
L_803A143C:;
  c->r[0]=0u-c->r[6]; // 803A143C
  c->r[0]=c->r[0]|c->r[6]; // 803A1440
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A1444
  W8(c->r[31]+0x00000001u,c->r[0]); // 803A1448
  goto L_803A1A78; // 803A144C
L_803A1450:;
  W8(c->r[4]+0x0000008Eu,c->r[6]); // 803A1450
  goto L_803A1A78; // 803A1454
L_803A1458:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 803A1458
  c->r[0]=0u+0x43300000u; // 803A145C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803A1460
  {uint32_t ea=c->r[2]+0xFFFFEE98u; c->f[2]=RF64(ea);} // 803A1464
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A1468
  {uint32_t ea=c->r[2]+0xFFFFEE88u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A146C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A1470
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A1474
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803A1478
  {uint32_t ea=c->r[4]+0x0000006Cu; WF32(ea,c->f[0]);} // 803A147C
  goto L_803A1A78; // 803A1480
L_803A1484:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 803A1484
  c->r[0]=0u+0x43300000u; // 803A1488
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803A148C
  {uint32_t ea=c->r[2]+0xFFFFEE98u; c->f[2]=RF64(ea);} // 803A1490
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A1494
  {uint32_t ea=c->r[2]+0xFFFFEE8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A1498
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A149C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A14A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803A14A4
  {uint32_t ea=c->r[4]+0x00000070u; WF32(ea,c->f[0]);} // 803A14A8
  goto L_803A1A78; // 803A14AC
L_803A14B0:;
  W8(c->r[4]+0x0000007Cu,c->r[6]); // 803A14B0
  goto L_803A1A78; // 803A14B4
L_803A14B8:;
  W8(c->r[4]+0x00000078u,c->r[6]); // 803A14B8
  goto L_803A1A78; // 803A14BC
L_803A14C0:;
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 803A14C0
  c->r[0]=c->r[0]+c->r[6]; // 803A14C4
  W32(c->r[4]+0x00000074u,c->r[0]); // 803A14C8
  goto L_803A1A78; // 803A14CC
L_803A14D0:;
  c->r[3]=c->r[6]^0x80000000u; // 803A14D0
  c->r[0]=0u+0x43300000u; // 803A14D4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803A14D8
  {uint32_t ea=c->r[2]+0xFFFFEEA0u; c->f[2]=RF64(ea);} // 803A14DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A14E0
  {uint32_t ea=c->r[2]+0xFFFFEE90u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A14E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A14E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A14EC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803A14F0
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[0]);} // 803A14F4
  goto L_803A1A78; // 803A14F8
L_803A14FC:;
  W8(c->r[4]+0x0000008Fu,c->r[6]); // 803A14FC
  goto L_803A1A78; // 803A1500
L_803A1504:;
  W8(c->r[4]+0x00000090u,c->r[6]); // 803A1504
  goto L_803A1A78; // 803A1508
L_803A150C:;
  W8(c->r[4]+0x00000091u,c->r[6]); // 803A150C
  goto L_803A1A78; // 803A1510
L_803A1514:;
  W8(c->r[4]+0x00000092u,c->r[6]); // 803A1514
  goto L_803A1A78; // 803A1518
L_803A151C:;
  c->r[5]=rotl(c->r[6],0)&0x000000FFu; // 803A151C
  c->r[3]=0u+0x00000040u; // 803A1520
  c->r[0]=c->r[5]+0xFFFFFFC0u; // 803A1524
  c->r[3]=c->r[5]|~c->r[3]; // 803A1528
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803A152C
  c->r[0]=c->r[3]-c->r[0]; // 803A1530
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A1534
  W8(c->r[4]+0x00000060u,c->r[0]); // 803A1538
  goto L_803A1A78; // 803A153C
L_803A1540:;
  c->r[0]=0u-c->r[6]; // 803A1540
  c->r[3]=c->r[25]|c->r[25]; // 803A1544
  c->r[0]=c->r[0]|c->r[6]; // 803A1548
  c->r[4]=0u+0xFFFFFFFFu; // 803A154C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A1550
  W8(c->r[31]+0x00000002u,c->r[0]); // 803A1554
  c->lr=0x803A155Cu; f_803A4CA0(c); // 803A1558
  c->r[3]=c->r[25]|c->r[25]; // 803A155C
  c->lr=0x803A1564u; f_803A52A8(c); // 803A1560
  goto L_803A1A78; // 803A1564
L_803A1568:;
  c->r[3]=R8(c->r[4]+0x0000008Bu); // 803A1568
  c->r[0]=0u+0x00000001u; // 803A156C
  W8(c->r[4]+0x0000005Fu,c->r[0]); // 803A1570
  c->r[0]=c->r[6]+c->r[3]; // 803A1574
  W8(c->r[4]+0x0000008Du,c->r[0]); // 803A1578
  goto L_803A1A78; // 803A157C
L_803A1580:;
  c->r[0]=0u-c->r[6]; // 803A1580
  c->r[0]=c->r[0]|c->r[6]; // 803A1584
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A1588
  W8(c->r[4]+0x0000005Fu,c->r[0]); // 803A158C
  goto L_803A1A78; // 803A1590
L_803A1594:;
  W8(c->r[4]+0x00000097u,c->r[6]); // 803A1594
  goto L_803A1A78; // 803A1598
L_803A159C:;
  W8(c->r[4]+0x00000094u,c->r[6]); // 803A159C
  goto L_803A1A78; // 803A15A0
L_803A15A4:;
  W8(c->r[4]+0x00000095u,c->r[6]); // 803A15A4
  goto L_803A1A78; // 803A15A8
L_803A15AC:;
  W8(c->r[4]+0x00000096u,c->r[6]); // 803A15AC
  goto L_803A1A78; // 803A15B0
L_803A15B4:;
  W8(c->r[4]+0x00000093u,c->r[6]); // 803A15B4
  goto L_803A1A78; // 803A15B8
L_803A15BC:;
  c->r[0]=R8(c->r[13]+0xFFFFA000u); // 803A15BC
  cmps(c,0,(int32_t)c->r[0],0); // 803A15C0
  if (crb(c,2)) { goto L_803A1A78; } // 803A15C4
  cmps(c,0,(int32_t)c->r[6],32); // 803A15C8
  if (!crb(c,0)) { goto L_803A15E4; } // 803A15CC
  c->r[3]=c->r[28]|c->r[28]; // 803A15D0
  c->r[4]=c->r[26]|c->r[26]; // 803A15D4
  c->lr=0x803A15DCu; f_803A375C(c); // 803A15D8
  c->r[4]=c->r[3]|c->r[3]; // 803A15DC
  goto L_803A1604; // 803A15E0
L_803A15E4:;
  cmps(c,0,(int32_t)c->r[6],48); // 803A15E4
  if (!crb(c,0)) { goto L_803A15FC; } // 803A15E8
  c->r[3]=c->r[25]|c->r[25]; // 803A15EC
  c->r[4]=c->r[6]+0xFFFFFFE0u; // 803A15F0
  c->lr=0x803A15F8u; f_803A5574(c); // 803A15F4
  goto L_803A1600; // 803A15F8
L_803A15FC:;
  c->r[3]=0u+0x00000000u; // 803A15FC
L_803A1600:;
  c->r[4]=c->r[3]|c->r[3]; // 803A1600
L_803A1604:;
  cmps(c,0,(int32_t)c->r[26],32); // 803A1604
  if (crb(c,0)) { goto L_803A1614; } // 803A1608
  c->r[7]=c->r[26]+0xFFFFFFE0u; // 803A160C
  goto L_803A1624; // 803A1610
L_803A1614:;
  cmps(c,0,(int32_t)c->r[26],16); // 803A1614
  c->r[7]=c->r[26]|c->r[26]; // 803A1618
  if (crb(c,0)) { goto L_803A1624; } // 803A161C
  c->r[7]=c->r[26]+0xFFFFFFF0u; // 803A1620
L_803A1624:;
  cmps(c,0,(int32_t)c->r[26],32); // 803A1624
  if (crb(c,0)) { goto L_803A1634; } // 803A1628
  c->r[6]=c->r[13]+0xFFFF9348u; // 803A162C
  goto L_803A1644; // 803A1630
L_803A1634:;
  cmps(c,0,(int32_t)c->r[26],16); // 803A1634
  c->r[6]=c->r[13]+0xFFFF9350u; // 803A1638
  if (crb(c,0)) { goto L_803A1644; } // 803A163C
  c->r[6]=c->r[13]+0xFFFF934Cu; // 803A1640
L_803A1644:;
  c->r[3]=0u+0x80430000u; // 803A1644
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 803A1648
  c->r[5]=R8(c->r[25]+0x00000004u); // 803A164C
  c->r[4]=c->r[28]|c->r[28]; // 803A1650
  c->r[8]=c->r[26]|c->r[26]; // 803A1654
  c->r[3]=c->r[3]+0x00007110u; // 803A1658
  setcrb(c,6,crb(c,6)^crb(c,6)); // 803A165C
  c->lr=0x803A1664u; f_801CCA38(c); // 803A1660
  goto L_803A1A78; // 803A1664
L_803A1668:;
  c->r[3]=c->r[28]|c->r[28]; // 803A1668
  c->r[4]=c->r[26]|c->r[26]; // 803A166C
  c->lr=0x803A1674u; f_803A3604(c); // 803A1670
  cmps(c,0,(int32_t)c->r[3],0); // 803A1674
  c->r[28]=c->r[3]|c->r[3]; // 803A1678
  if (crb(c,2)) { goto L_803A1A78; } // 803A167C
  cmpu(c,0,c->r[3],c->r[25]); // 803A1680
  if (crb(c,2)) { goto L_803A1A78; } // 803A1684
  c->lr=0x803A168Cu; f_803A49BC(c); // 803A1688
  c->r[4]=R32(c->r[25]+0x00000050u); // 803A168C
  c->r[3]=c->r[28]|c->r[28]; // 803A1690
  c->r[5]=c->r[29]|c->r[29]; // 803A1694
  c->lr=0x803A169Cu; f_803A49A0(c); // 803A1698
  c->r[3]=c->r[28]|c->r[28]; // 803A169C
  c->lr=0x803A16A4u; f_803A49B0(c); // 803A16A0
  goto L_803A1A78; // 803A16A4
L_803A16A8:;
  c->r[0]=R32(c->r[4]+0x00000050u); // 803A16A8
  c->r[0]=c->r[0]+c->r[6]; // 803A16AC
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A16B0
  goto L_803A1A78; // 803A16B4
L_803A16B8:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 803A16B8
  cmpu(c,0,c->r[0],0x00000003u); // 803A16BC
  if (!crb(c,0)) { goto L_803A1A78; } // 803A16C0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803A16C4
  c->r[5]=R32(c->r[4]+0x00000054u); // 803A16C8
  c->r[3]=c->r[31]+c->r[0]; // 803A16CC
  W32(c->r[3]+0x00000008u,c->r[5]); // 803A16D0
  c->r[3]=R8(c->r[31]+0x00000006u); // 803A16D4
  c->r[0]=R32(c->r[4]+0x00000050u); // 803A16D8
  c->r[3]=c->r[3]+0x00000001u; // 803A16DC
  c->r[0]=c->r[0]+c->r[6]; // 803A16E0
  W8(c->r[31]+0x00000006u,c->r[3]); // 803A16E4
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A16E8
  goto L_803A1A78; // 803A16EC
L_803A16F0:;
  c->r[3]=R8(c->r[31]+0x00000006u); // 803A16F0
  cmps(c,0,(int32_t)c->r[3],0); // 803A16F4
  if (crb(c,2)) { goto L_803A1A78; } // 803A16F8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803A16FC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 803A1700
  W8(c->r[31]+0x00000006u,c->r[3]); // 803A1704
  c->r[3]=c->r[31]+c->r[0]; // 803A1708
  c->r[0]=R32(c->r[3]+0x00000008u); // 803A170C
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A1710
  goto L_803A1A78; // 803A1714
L_803A1718:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 803A1718
  cmpu(c,0,c->r[0],0x00000003u); // 803A171C
  if (!crb(c,0)) { goto L_803A1A78; } // 803A1720
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803A1724
  c->r[4]=R32(c->r[4]+0x00000054u); // 803A1728
  c->r[3]=c->r[31]+c->r[0]; // 803A172C
  W32(c->r[3]+0x00000008u,c->r[4]); // 803A1730
  c->r[0]=R8(c->r[31]+0x00000006u); // 803A1734
  c->r[3]=c->r[31]+c->r[0]; // 803A1738
  W8(c->r[3]+0x00000003u,c->r[6]); // 803A173C
  c->r[3]=R8(c->r[31]+0x00000006u); // 803A1740
  c->r[0]=c->r[3]+0x00000001u; // 803A1744
  W8(c->r[31]+0x00000006u,c->r[0]); // 803A1748
  goto L_803A1A78; // 803A174C
L_803A1750:;
  c->r[5]=R8(c->r[31]+0x00000006u); // 803A1750
  cmps(c,0,(int32_t)c->r[5],0); // 803A1754
  if (crb(c,2)) { goto L_803A1A78; } // 803A1758
  c->r[3]=c->r[5]+c->r[31]; // 803A175C
  c->r[6]=R8(c->r[3]+0x00000002u); // 803A1760
  cmps(c,0,(int32_t)c->r[6],0); // 803A1764
  if (crb(c,2)) { goto L_803A1784; } // 803A1768
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 803A176C
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; cr0(c,c->r[0]); // 803A1770
  if (!crb(c,2)) { goto L_803A1784; } // 803A1774
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 803A1778
  W8(c->r[31]+0x00000006u,c->r[0]); // 803A177C
  goto L_803A1A78; // 803A1780
L_803A1784:;
  W8(c->r[3]+0x00000002u,c->r[6]); // 803A1784
  c->r[3]=R8(c->r[31]+0x00000006u); // 803A1788
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803A178C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803A1790
  c->r[3]=c->r[31]+c->r[0]; // 803A1794
  c->r[0]=R32(c->r[3]+0x00000008u); // 803A1798
  W32(c->r[4]+0x00000054u,c->r[0]); // 803A179C
  goto L_803A1A78; // 803A17A0
L_803A17A4:;
  cmpu(c,0,c->r[5],0x0000FFFFu); // 803A17A4
  if (crb(c,1)) { goto L_803A1A78; } // 803A17A8
  c->r[0]=rotl(c->r[5],0)&0x000000F0u; // 803A17AC
  c->r[27]=rotl(c->r[5],0)&0x000000FFu; // 803A17B0
  cmpu(c,0,c->r[0],0x00000080u); // 803A17B4
  c->r[30]=0u+0x00000000u; // 803A17B8
  if (crb(c,2)) { goto L_803A17C8; } // 803A17BC
  cmpu(c,0,c->r[0],0x00000090u); // 803A17C0
  if (!crb(c,2)) { goto L_803A1808; } // 803A17C4
L_803A17C8:;
  cmps(c,0,(int32_t)c->r[6],32); // 803A17C8
  if (!crb(c,0)) { goto L_803A17E0; } // 803A17CC
  c->r[3]=c->r[28]|c->r[28]; // 803A17D0
  c->r[4]=c->r[26]|c->r[26]; // 803A17D4
  c->lr=0x803A17DCu; f_803A375C(c); // 803A17D8
  goto L_803A17FC; // 803A17DC
L_803A17E0:;
  cmps(c,0,(int32_t)c->r[6],48); // 803A17E0
  if (!crb(c,0)) { goto L_803A17F8; } // 803A17E4
  c->r[3]=c->r[25]|c->r[25]; // 803A17E8
  c->r[4]=c->r[6]+0xFFFFFFE0u; // 803A17EC
  c->lr=0x803A17F4u; f_803A5574(c); // 803A17F0
  goto L_803A17FC; // 803A17F4
L_803A17F8:;
  c->r[3]=0u+0x00000000u; // 803A17F8
L_803A17FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A17FC
  c->r[30]=c->r[3]|c->r[3]; // 803A1800
  if (crb(c,2)) { goto L_803A1A78; } // 803A1804
L_803A1808:;
  cmps(c,0,(int32_t)c->r[27],138); // 803A1808
  if (crb(c,2)) { goto L_803A19A0; } // 803A180C
  if (!crb(c,0)) { goto L_803A1868; } // 803A1810
  cmps(c,0,(int32_t)c->r[27],132); // 803A1814
  if (crb(c,2)) { goto L_803A18EC; } // 803A1818
  if (!crb(c,0)) { goto L_803A1844; } // 803A181C
  cmps(c,0,(int32_t)c->r[27],129); // 803A1820
  if (crb(c,2)) { goto L_803A18BC; } // 803A1824
  if (!crb(c,0)) { goto L_803A1838; } // 803A1828
  cmps(c,0,(int32_t)c->r[27],128); // 803A182C
  if (!crb(c,0)) { goto L_803A18B4; } // 803A1830
  goto L_803A1A78; // 803A1834
L_803A1838:;
  cmps(c,0,(int32_t)c->r[27],131); // 803A1838
  if (!crb(c,0)) { goto L_803A18DC; } // 803A183C
  goto L_803A18CC; // 803A1840
L_803A1844:;
  cmps(c,0,(int32_t)c->r[27],135); // 803A1844
  if (crb(c,2)) { goto L_803A1970; } // 803A1848
  if (!crb(c,0)) { goto L_803A185C; } // 803A184C
  cmps(c,0,(int32_t)c->r[27],134); // 803A1850
  if (!crb(c,0)) { goto L_803A1930; } // 803A1854
  goto L_803A1904; // 803A1858
L_803A185C:;
  cmps(c,0,(int32_t)c->r[27],137); // 803A185C
  if (!crb(c,0)) { goto L_803A1990; } // 803A1860
  goto L_803A1980; // 803A1864
L_803A1868:;
  cmps(c,0,(int32_t)c->r[27],147); // 803A1868
  if (crb(c,2)) { goto L_803A1A24; } // 803A186C
  if (!crb(c,0)) { goto L_803A1898; } // 803A1870
  cmps(c,0,(int32_t)c->r[27],144); // 803A1874
  if (crb(c,2)) { goto L_803A19D0; } // 803A1878
  if (!crb(c,0)) { goto L_803A188C; } // 803A187C
  cmps(c,0,(int32_t)c->r[27],140); // 803A1880
  if (!crb(c,0)) { goto L_803A1A78; } // 803A1884
  goto L_803A19B0; // 803A1888
L_803A188C:;
  cmps(c,0,(int32_t)c->r[27],146); // 803A188C
  if (!crb(c,0)) { goto L_803A1A04; } // 803A1890
  goto L_803A19E8; // 803A1894
L_803A1898:;
  cmps(c,0,(int32_t)c->r[27],224); // 803A1898
  if (crb(c,2)) { goto L_803A1A78; } // 803A189C
  if (!crb(c,0)) { goto L_803A1A78; } // 803A18A0
  cmps(c,0,(int32_t)c->r[27],149); // 803A18A4
  if (crb(c,2)) { goto L_803A1A60; } // 803A18A8
  if (!crb(c,0)) { goto L_803A1A78; } // 803A18AC
  goto L_803A1A40; // 803A18B0
L_803A18B4:;
  W16(c->r[30]+0x00000000u,c->r[29]); // 803A18B4
  goto L_803A1A78; // 803A18B8
L_803A18BC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A18BC
  c->r[0]=c->r[0]+c->r[29]; // 803A18C0
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A18C4
  goto L_803A1A78; // 803A18C8
L_803A18CC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A18CC
  c->r[0]=c->r[0]-c->r[29]; // 803A18D0
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A18D4
  goto L_803A1A78; // 803A18D8
L_803A18DC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A18DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 803A18E0
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A18E4
  goto L_803A1A78; // 803A18E8
L_803A18EC:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A18EC
  if (crb(c,2)) { goto L_803A1A78; } // 803A18F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A18F4
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[29]); // 803A18F8
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A18FC
  goto L_803A1A78; // 803A1900
L_803A1904:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A1904
  if (crb(c,0)) { goto L_803A191C; } // 803A1908
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A190C
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]<<((c->r[29])&31)); // 803A1910
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A1914
  goto L_803A1A78; // 803A1918
L_803A191C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A191C
  c->r[0]=0u-c->r[29]; // 803A1920
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 803A1924
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A1928
  goto L_803A1A78; // 803A192C
L_803A1930:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A1930
  c->r[27]=0u+0x00000000u; // 803A1934
  if (!crb(c,0)) { goto L_803A1948; } // 803A1938
  c->r[0]=0u-c->r[29]; // 803A193C
  c->r[27]=0u+0x00000001u; // 803A1940
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 803A1944
L_803A1948:;
  c->lr=0x803A194Cu; f_803B3130(c); // 803A1948
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 803A194C
  c->r[0]=c->r[29]+0x00000001u; // 803A1950
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 803A1954
  cmps(c,0,(int32_t)c->r[27],0); // 803A1958
  c->r[3]=sraw(c,c->r[3],16); // 803A195C
  if (crb(c,2)) { goto L_803A1968; } // 803A1960
  c->r[3]=0u-c->r[3]; // 803A1964
L_803A1968:;
  W16(c->r[30]+0x00000000u,c->r[3]); // 803A1968
  goto L_803A1A78; // 803A196C
L_803A1970:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A1970
  c->r[0]=c->r[0]&c->r[29]; // 803A1974
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A1978
  goto L_803A1A78; // 803A197C
L_803A1980:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A1980
  c->r[0]=c->r[0]|c->r[29]; // 803A1984
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A1988
  goto L_803A1A78; // 803A198C
L_803A1990:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A1990
  c->r[0]=c->r[0]^c->r[29]; // 803A1994
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A1998
  goto L_803A1A78; // 803A199C
L_803A19A0:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 803A19A0
  c->r[0]=~(c->r[0]|c->r[0]); // 803A19A4
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A19A8
  goto L_803A1A78; // 803A19AC
L_803A19B0:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A19B0
  if (crb(c,2)) { goto L_803A1A78; } // 803A19B4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A19B8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 803A19BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 803A19C0
  c->r[0]=c->r[3]-c->r[0]; // 803A19C4
  W16(c->r[30]+0x00000000u,c->r[0]); // 803A19C8
  goto L_803A1A78; // 803A19CC
L_803A19D0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A19D0
  c->r[0]=c->r[29]-c->r[0]; // 803A19D4
  c->r[0]=cntlz(c->r[0]); // 803A19D8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 803A19DC
  W8(c->r[31]+0x00000000u,c->r[0]); // 803A19E0
  goto L_803A1A78; // 803A19E4
L_803A19E8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A19E8
  c->r[3]=rotl(c->r[29],1)&0x00000001u; // 803A19EC
  c->r[4]=sraw(c,c->r[0],31); // 803A19F0
  c->r[0]=addc(c,~c->r[29],c->r[0],1); // 803A19F4
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 803A19F8
  W8(c->r[31]+0x00000000u,c->r[0]); // 803A19FC
  goto L_803A1A78; // 803A1A00
L_803A1A04:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A1A04
  c->r[0]=c->r[4]^c->r[29]; // 803A1A08
  c->r[3]=sraw(c,c->r[0],1); // 803A1A0C
  c->r[0]=c->r[0]&c->r[4]; // 803A1A10
  c->r[0]=c->r[3]-c->r[0]; // 803A1A14
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A1A18
  W8(c->r[31]+0x00000000u,c->r[0]); // 803A1A1C
  goto L_803A1A78; // 803A1A20
L_803A1A24:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A1A24
  c->r[4]=sraw(c,c->r[29],31); // 803A1A28
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A1A2C
  c->r[0]=addc(c,~c->r[0],c->r[29],1); // 803A1A30
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 803A1A34
  W8(c->r[31]+0x00000000u,c->r[0]); // 803A1A38
  goto L_803A1A78; // 803A1A3C
L_803A1A40:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A1A40
  c->r[0]=c->r[29]^c->r[0]; // 803A1A44
  c->r[3]=sraw(c,c->r[0],1); // 803A1A48
  c->r[0]=c->r[0]&c->r[29]; // 803A1A4C
  c->r[0]=c->r[3]-c->r[0]; // 803A1A50
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A1A54
  W8(c->r[31]+0x00000000u,c->r[0]); // 803A1A58
  goto L_803A1A78; // 803A1A5C
L_803A1A60:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000000u); // 803A1A60
  c->r[3]=c->r[29]-c->r[0]; // 803A1A64
  c->r[0]=c->r[0]-c->r[29]; // 803A1A68
  c->r[0]=c->r[3]|c->r[0]; // 803A1A6C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A1A70
  W8(c->r[31]+0x00000000u,c->r[0]); // 803A1A74
L_803A1A78:;
  c->r[11]=c->r[1]+0x00000030u; // 803A1A78
  c->lr=0x803A1A80u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A1A7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A1A80
  c->lr=c->r[0]; // 803A1A84
  c->r[1]=c->r[1]+0x00000030u; // 803A1A88
  return; // 803A1A8C
}

// NoteOnCommandProc__Q44nw4r3snd6detail9MmlParserCFPQ44nw4r3snd6detail11MmlSeqTrackiilb
void f_803A1A90(Ctx* __restrict c) {
  trace_call(0x803A1A90u);
  c->r[3]=c->r[4]|c->r[4]; // 803A1A90
  c->r[4]=c->r[5]|c->r[5]; // 803A1A94
  c->r[5]=c->r[6]|c->r[6]; // 803A1A98
  c->r[6]=c->r[7]|c->r[7]; // 803A1A9C
  c->r[7]=c->r[8]|c->r[8]; // 803A1AA0
  f_803A5594(c); return; // 803A1AA4
}

// ReadArg__Q44nw4r3snd6detail9MmlParserCFPPCUcPQ44nw4r3snd6detail9SeqPlayerPQ44nw4r3snd6detail8SeqTrackQ54nw4r3snd6detail9MmlParser10SeqArgType
void f_803A1AA8(Ctx* __restrict c) {
  trace_call(0x803A1AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1AA8
  c->r[0]=c->lr; // 803A1AAC
  cmps(c,0,(int32_t)c->r[7],2); // 803A1AB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A1AB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A1AB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A1ABC
  if (crb(c,2)) { goto L_803A1B20; } // 803A1AC0
  if (!crb(c,0)) { goto L_803A1AD8; } // 803A1AC4
  cmps(c,0,(int32_t)c->r[7],0); // 803A1AC8
  if (crb(c,2)) { goto L_803A1AE8; } // 803A1ACC
  if (!crb(c,0)) { goto L_803A1AFC; } // 803A1AD0
  goto L_803A1BFC; // 803A1AD4
L_803A1AD8:;
  cmps(c,0,(int32_t)c->r[7],4); // 803A1AD8
  if (crb(c,2)) { goto L_803A1B4C; } // 803A1ADC
  if (!crb(c,0)) { goto L_803A1BFC; } // 803A1AE0
  goto L_803A1B9C; // 803A1AE4
L_803A1AE8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 803A1AE8
  c->r[0]=c->r[3]+0x00000001u; // 803A1AEC
  W32(c->r[4]+0x00000000u,c->r[0]); // 803A1AF0
  c->r[3]=R8(c->r[3]+0x00000000u); // 803A1AF4
  goto L_803A1BFC; // 803A1AF8
L_803A1AFC:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 803A1AFC
  c->r[3]=c->r[5]+0x00000001u; // 803A1B00
  W32(c->r[4]+0x00000000u,c->r[3]); // 803A1B04
  c->r[0]=c->r[3]+0x00000001u; // 803A1B08
  c->r[5]=R8(c->r[5]+0x00000000u); // 803A1B0C
  W32(c->r[4]+0x00000000u,c->r[0]); // 803A1B10
  c->r[3]=R8(c->r[3]+0x00000000u); // 803A1B14
  c->r[3]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[3]&~0x0000FF00u); // 803A1B18
  goto L_803A1BFC; // 803A1B1C
L_803A1B20:;
  c->r[3]=0u+0x00000000u; // 803A1B20
L_803A1B24:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 803A1B24
  c->r[3]=rotl(c->r[3],7)&0xFFFFFF80u; // 803A1B28
  c->r[0]=c->r[5]+0x00000001u; // 803A1B2C
  W32(c->r[4]+0x00000000u,c->r[0]); // 803A1B30
  c->r[5]=R8(c->r[5]+0x00000000u); // 803A1B34
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 803A1B38
  c->r[0]=rotl(c->r[5],0)&0x0000007Fu; // 803A1B3C
  c->r[3]=c->r[3]|c->r[0]; // 803A1B40
  if (!crb(c,2)) { IRQCHK(c); goto L_803A1B24; } // 803A1B44
  goto L_803A1BFC; // 803A1B48
L_803A1B4C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 803A1B4C
  c->r[0]=c->r[3]+0x00000001u; // 803A1B50
  W32(c->r[4]+0x00000000u,c->r[0]); // 803A1B54
  c->r[4]=R8(c->r[3]+0x00000000u); // 803A1B58
  cmps(c,0,(int32_t)c->r[4],32); // 803A1B5C
  if (!crb(c,0)) { goto L_803A1B70; } // 803A1B60
  c->r[3]=c->r[5]|c->r[5]; // 803A1B64
  c->lr=0x803A1B6Cu; f_803A375C(c); // 803A1B68
  goto L_803A1B8C; // 803A1B6C
L_803A1B70:;
  cmps(c,0,(int32_t)c->r[4],48); // 803A1B70
  if (!crb(c,0)) { goto L_803A1B88; } // 803A1B74
  c->r[3]=c->r[6]|c->r[6]; // 803A1B78
  c->r[4]=c->r[4]+0xFFFFFFE0u; // 803A1B7C
  c->lr=0x803A1B84u; f_803A5574(c); // 803A1B80
  goto L_803A1B8C; // 803A1B84
L_803A1B88:;
  c->r[3]=0u+0x00000000u; // 803A1B88
L_803A1B8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A1B8C
  if (crb(c,2)) { goto L_803A1BFC; } // 803A1B90
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 803A1B94
  goto L_803A1BFC; // 803A1B98
L_803A1B9C:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 803A1B9C
  c->r[7]=c->r[6]+0x00000001u; // 803A1BA0
  W32(c->r[4]+0x00000000u,c->r[7]); // 803A1BA4
  c->r[3]=c->r[7]+0x00000001u; // 803A1BA8
  c->r[5]=c->r[3]+0x00000001u; // 803A1BAC
  c->r[6]=R8(c->r[6]+0x00000000u); // 803A1BB0
  c->r[0]=c->r[5]+0x00000001u; // 803A1BB4
  W32(c->r[4]+0x00000000u,c->r[3]); // 803A1BB8
  c->r[7]=R8(c->r[7]+0x00000000u); // 803A1BBC
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 803A1BC0
  W32(c->r[4]+0x00000000u,c->r[5]); // 803A1BC4
  c->r[30]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 803A1BC8
  c->r[3]=R8(c->r[3]+0x00000000u); // 803A1BCC
  W32(c->r[4]+0x00000000u,c->r[0]); // 803A1BD0
  c->r[31]=R8(c->r[5]+0x00000000u); // 803A1BD4
  c->r[31]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[31]&~0x0000FF00u); // 803A1BD8
  c->lr=0x803A1BE0u; f_803B3130(c); // 803A1BDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 803A1BE0
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 803A1BE4
  c->r[3]=c->r[0]-c->r[30]; // 803A1BE8
  c->r[0]=c->r[3]+0x00000001u; // 803A1BEC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803A1BF0
  c->r[4]=sraw(c,c->r[4],16); // 803A1BF4
  c->r[3]=c->r[4]+c->r[30]; // 803A1BF8
L_803A1BFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A1BFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A1C00
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A1C04
  c->lr=c->r[0]; // 803A1C08
  c->r[1]=c->r[1]+0x00000010u; // 803A1C0C
  return; // 803A1C10
}

// fn_803A1C14
void f_803A1C14(Ctx* __restrict c) {
  trace_call(0x803A1C14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1C14
  c->r[0]=c->lr; // 803A1C18
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A1C1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A1C20
  c->r[31]=c->r[3]|c->r[3]; // 803A1C24
  c->lr=0x803A1C2Cu; f_803A46D8(c); // 803A1C28
  c->r[5]=0u+0x80430000u; // 803A1C2C
  c->r[4]=0u+0x00000001u; // 803A1C30
  c->r[0]=0u+0x00000000u; // 803A1C34
  W8(c->r[31]+0x000000C5u,c->r[4]); // 803A1C38
  c->r[5]=c->r[5]+0x00007340u; // 803A1C3C
  c->r[3]=c->r[31]|c->r[31]; // 803A1C40
  W32(c->r[31]+0x00000000u,c->r[5]); // 803A1C44
  W8(c->r[31]+0x000000C6u,c->r[0]); // 803A1C48
  W8(c->r[31]+0x000000C4u,c->r[4]); // 803A1C4C
  W8(c->r[31]+0x000000CAu,c->r[0]); // 803A1C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A1C54
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A1C58
  c->lr=c->r[0]; // 803A1C5C
  c->r[1]=c->r[1]+0x00000010u; // 803A1C60
  return; // 803A1C64
}

// Parse__Q44nw4r3snd6detail11MmlSeqTrackFb
void f_803A1C68(Ctx* __restrict c) {
  trace_call(0x803A1C68u);
  c->r[0]=c->r[3]|c->r[3]; // 803A1C68
  c->r[3]=R32(c->r[3]+0x000000C0u); // 803A1C6C
  c->r[5]=c->r[4]|c->r[4]; // 803A1C70
  c->r[4]=c->r[0]|c->r[0]; // 803A1C74
  f_803A0D28(c); return; // 803A1C78
}

// fn_803A1C7C
void f_803A1C7C(Ctx* __restrict c) {
  trace_call(0x803A1C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1C7C
  c->r[0]=c->lr; // 803A1C80
  cmps(c,0,(int32_t)c->r[3],0); // 803A1C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A1C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A1C8C
  c->r[31]=c->r[4]|c->r[4]; // 803A1C90
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A1C94
  c->r[30]=c->r[3]|c->r[3]; // 803A1C98
  if (crb(c,2)) { goto L_803A1CB8; } // 803A1C9C
  c->r[4]=0u+0x00000000u; // 803A1CA0
  c->lr=0x803A1CA8u; f_803A4738(c); // 803A1CA4
  cmps(c,0,(int32_t)c->r[31],0); // 803A1CA8
  if (!crb(c,1)) { goto L_803A1CB8; } // 803A1CAC
  c->r[3]=c->r[30]|c->r[30]; // 803A1CB0
  c->lr=0x803A1CB8u; f_802896EC(c); // 803A1CB4
L_803A1CB8:;
  c->r[3]=c->r[30]|c->r[30]; // 803A1CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A1CBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A1CC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A1CC4
  c->lr=c->r[0]; // 803A1CC8
  c->r[1]=c->r[1]+0x00000010u; // 803A1CCC
  return; // 803A1CD0
}

// AllocTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail9SeqPlayer
void f_803A1CD4(Ctx* __restrict c) {
  trace_call(0x803A1CD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1CD4
  c->r[0]=c->lr; // 803A1CD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A1CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A1CE0
  c->r[31]=c->r[4]|c->r[4]; // 803A1CE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A1CE8
  c->r[30]=c->r[3]|c->r[3]; // 803A1CEC
  c->r[3]=c->r[3]+0x00000008u; // 803A1CF0
  c->lr=0x803A1CF8u; f_803A0A40(c); // 803A1CF4
  cmps(c,0,(int32_t)c->r[3],0); // 803A1CF8
  if (!crb(c,2)) { goto L_803A1D08; } // 803A1CFC
  c->r[3]=0u+0x00000000u; // 803A1D00
  goto L_803A1D10; // 803A1D04
L_803A1D08:;
  if (crb(c,2)) { goto L_803A1D10; } // 803A1D08
  c->lr=0x803A1D10u; f_803A1C14(c); // 803A1D0C
L_803A1D10:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A1D10
  if (crb(c,2)) { goto L_803A1D24; } // 803A1D14
  W32(c->r[3]+0x000000B8u,c->r[31]); // 803A1D18
  c->r[0]=R32(c->r[30]+0x00000004u); // 803A1D1C
  W32(c->r[3]+0x000000C0u,c->r[0]); // 803A1D20
L_803A1D24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A1D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A1D28
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A1D2C
  c->lr=c->r[0]; // 803A1D30
  c->r[1]=c->r[1]+0x00000010u; // 803A1D34
  return; // 803A1D38
}

// FreeTrack__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPQ44nw4r3snd6detail8SeqTrack
void f_803A1D3C(Ctx* __restrict c) {
  trace_call(0x803A1D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1D3C
  c->r[0]=c->lr; // 803A1D40
  cmps(c,0,(int32_t)c->r[4],0); // 803A1D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A1D48
  c->r[0]=0u+0x00000000u; // 803A1D4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A1D50
  c->r[31]=c->r[4]|c->r[4]; // 803A1D54
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A1D58
  c->r[30]=c->r[3]|c->r[3]; // 803A1D5C
  W32(c->r[4]+0x000000B8u,c->r[0]); // 803A1D60
  if (crb(c,2)) { goto L_803A1D8C; } // 803A1D64
  c->r[12]=R32(c->r[31]+0x00000000u); // 803A1D68
  c->r[3]=c->r[31]|c->r[31]; // 803A1D6C
  c->r[4]=0u+0xFFFFFFFFu; // 803A1D70
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A1D74
  c->ctr=c->r[12]; // 803A1D78
  if (true) { c->lr=0x803A1D80u; dispatch(c,c->ctr); } // 803A1D7C
  c->r[4]=c->r[31]|c->r[31]; // 803A1D80
  c->r[3]=c->r[30]+0x00000008u; // 803A1D84
  c->lr=0x803A1D8Cu; f_803A0A9C(c); // 803A1D88
L_803A1D8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A1D8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A1D90
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A1D94
  c->lr=c->r[0]; // 803A1D98
  c->r[1]=c->r[1]+0x00000010u; // 803A1D9C
  return; // 803A1DA0
}

// Create__Q44nw4r3snd6detail20MmlSeqTrackAllocatorFPvUl
void f_803A1DA4(Ctx* __restrict c) {
  trace_call(0x803A1DA4u);
  c->r[6]=0u+0x000000D8u; // 803A1DA4
  c->r[3]=c->r[3]+0x00000008u; // 803A1DA8
  f_803A082C(c); return; // 803A1DAC
}

// fn_803A1DB0
void f_803A1DB0(Ctx* __restrict c) {
  trace_call(0x803A1DB0u);
  c->r[3]=c->r[3]+0x00000008u; // 803A1DB0
  f_803A09F0(c); return; // 803A1DB4
}

// fn_803A1DB8
void f_803A1DB8(Ctx* __restrict c) {
  trace_call(0x803A1DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1DB8
  c->r[0]=c->lr; // 803A1DBC
  cmps(c,0,(int32_t)c->r[3],0); // 803A1DC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A1DC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A1DC8
  c->r[31]=c->r[3]|c->r[3]; // 803A1DCC
  if (crb(c,2)) { goto L_803A1DE0; } // 803A1DD0
  cmps(c,0,(int32_t)c->r[4],0); // 803A1DD4
  if (!crb(c,1)) { goto L_803A1DE0; } // 803A1DD8
  c->lr=0x803A1DE0u; f_802896EC(c); // 803A1DDC
L_803A1DE0:;
  c->r[3]=c->r[31]|c->r[31]; // 803A1DE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A1DE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A1DE8
  c->lr=c->r[0]; // 803A1DEC
  c->r[1]=c->r[1]+0x00000010u; // 803A1DF0
  return; // 803A1DF4
}

// fn_803A1DF8
void f_803A1DF8(Ctx* __restrict c) {
  trace_call(0x803A1DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1DF8
  c->r[0]=c->lr; // 803A1DFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A1E00
  c->r[0]=0u+0x00000000u; // 803A1E04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A1E08
  c->r[31]=c->r[3]|c->r[3]; // 803A1E0C
  W8(c->r[3]+0x00000000u,c->r[0]); // 803A1E10
  W8(c->r[3]+0x00000001u,c->r[0]); // 803A1E14
  W8(c->r[3]+0x00000002u,c->r[0]); // 803A1E18
  W8(c->r[3]+0x00000003u,c->r[0]); // 803A1E1C
  W8(c->r[3]+0x00000004u,c->r[0]); // 803A1E20
  W8(c->r[3]+0x00000005u,c->r[0]); // 803A1E24
  W8(c->r[3]+0x00000006u,c->r[0]); // 803A1E28
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A1E2C
  W32(c->r[3]+0x00000010u,c->r[0]); // 803A1E30
  W32(c->r[3]+0x00000014u,c->r[0]); // 803A1E34
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 803A1E38
  c->r[3]=c->r[3]+0x00000040u; // 803A1E3C
  c->lr=0x803A1E44u; f_802593E4(c); // 803A1E40
  c->r[4]=c->r[31]|c->r[31]; // 803A1E44
  c->r[3]=c->r[31]+0x00000040u; // 803A1E48
  c->lr=0x803A1E50u; f_80259B60(c); // 803A1E4C
  c->r[3]=c->r[31]+0x00000070u; // 803A1E50
  c->lr=0x803A1E58u; f_802593E4(c); // 803A1E54
  c->r[4]=c->r[31]|c->r[31]; // 803A1E58
  c->r[3]=c->r[31]+0x00000070u; // 803A1E5C
  c->lr=0x803A1E64u; f_80259B60(c); // 803A1E60
  c->r[3]=c->r[31]|c->r[31]; // 803A1E64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A1E68
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A1E6C
  c->lr=c->r[0]; // 803A1E70
  c->r[1]=c->r[1]+0x00000010u; // 803A1E74
  return; // 803A1E78
}

// fn_803A1E7C
void f_803A1E7C(Ctx* __restrict c) {
  trace_call(0x803A1E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1E7C
  c->r[0]=c->lr; // 803A1E80
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A1E84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A1E88
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A1E8C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A1E90
  c->r[29]=c->r[4]|c->r[4]; // 803A1E94
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A1E98
  c->r[28]=c->r[3]|c->r[3]; // 803A1E9C
  c->lr=0x803A1EA4u; f_8025EA10(c); // 803A1EA0
  c->r[30]=0u+0x00000000u; // 803A1EA4
  c->r[31]=c->r[3]|c->r[3]; // 803A1EA8
  W8(c->r[28]+0x00000001u,c->r[30]); // 803A1EAC
  c->r[3]=c->r[28]+0x00000040u; // 803A1EB0
  W8(c->r[28]+0x00000002u,c->r[30]); // 803A1EB4
  c->lr=0x803A1EBCu; f_80259738(c); // 803A1EB8
  W8(c->r[28]+0x00000007u,c->r[30]); // 803A1EBC
  c->r[3]=c->r[28]+0x00000070u; // 803A1EC0
  c->lr=0x803A1EC8u; f_80259738(c); // 803A1EC4
  c->r[12]=R32(c->r[28]+0x0000003Cu); // 803A1EC8
  c->r[0]=0u+0x00000001u; // 803A1ECC
  W8(c->r[28]+0x00000008u,c->r[30]); // 803A1ED0
  cmps(c,0,(int32_t)c->r[12],0); // 803A1ED4
  W8(c->r[28]+0x00000006u,c->r[30]); // 803A1ED8
  W8(c->r[28]+0x00000007u,c->r[30]); // 803A1EDC
  W8(c->r[28]+0x00000001u,c->r[30]); // 803A1EE0
  W8(c->r[28]+0x00000002u,c->r[0]); // 803A1EE4
  W8(c->r[28]+0x00000008u,c->r[30]); // 803A1EE8
  if (crb(c,2)) { goto L_803A1F04; } // 803A1EEC
  c->r[3]=R32(c->r[28]+0x00000038u); // 803A1EF0
  c->r[4]=0u+0x00000000u; // 803A1EF4
  c->ctr=c->r[12]; // 803A1EF8
  if (true) { c->lr=0x803A1F00u; dispatch(c,c->ctr); } // 803A1EFC
  W8(c->r[28]+0x00000004u,c->r[30]); // 803A1F00
L_803A1F04:;
  c->r[0]=0u+0x00000001u; // 803A1F04
  W32(c->r[28]+0x0000003Cu,c->r[29]); // 803A1F08
  c->r[3]=c->r[31]|c->r[31]; // 803A1F0C
  W32(c->r[28]+0x00000010u,c->r[0]); // 803A1F10
  W8(c->r[28]+0x00000000u,c->r[0]); // 803A1F14
  c->lr=0x803A1F1Cu; f_8025EA38(c); // 803A1F18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A1F1C
  c->r[3]=0u+0x00000001u; // 803A1F20
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A1F24
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A1F28
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A1F2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A1F30
  c->lr=c->r[0]; // 803A1F34
  c->r[1]=c->r[1]+0x00000020u; // 803A1F38
  return; // 803A1F3C
}

// fn_803A1F40
void f_803A1F40(Ctx* __restrict c) {
  trace_call(0x803A1F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A1F40
  c->r[0]=c->lr; // 803A1F44
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A1F48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A1F4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A1F50
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A1F54
  c->r[29]=c->r[4]|c->r[4]; // 803A1F58
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A1F5C
  c->r[28]=c->r[3]|c->r[3]; // 803A1F60
  c->lr=0x803A1F68u; f_8025EA10(c); // 803A1F64
  c->r[30]=0u+0x00000000u; // 803A1F68
  c->r[31]=c->r[3]|c->r[3]; // 803A1F6C
  W8(c->r[28]+0x00000001u,c->r[30]); // 803A1F70
  c->r[3]=c->r[28]+0x00000040u; // 803A1F74
  W8(c->r[28]+0x00000002u,c->r[30]); // 803A1F78
  c->lr=0x803A1F80u; f_80259738(c); // 803A1F7C
  W8(c->r[28]+0x00000007u,c->r[30]); // 803A1F80
  c->r[3]=c->r[28]+0x00000070u; // 803A1F84
  c->lr=0x803A1F8Cu; f_80259738(c); // 803A1F88
  c->r[12]=R32(c->r[28]+0x0000003Cu); // 803A1F8C
  W8(c->r[28]+0x00000008u,c->r[30]); // 803A1F90
  cmps(c,0,(int32_t)c->r[12],0); // 803A1F94
  if (crb(c,2)) { goto L_803A1FB0; } // 803A1F98
  c->r[3]=R32(c->r[28]+0x00000038u); // 803A1F9C
  c->r[4]=0u+0x00000000u; // 803A1FA0
  c->ctr=c->r[12]; // 803A1FA4
  if (true) { c->lr=0x803A1FACu; dispatch(c,c->ctr); } // 803A1FA8
  W8(c->r[28]+0x00000004u,c->r[30]); // 803A1FAC
L_803A1FB0:;
  c->r[3]=0u+0x00000003u; // 803A1FB0
  c->r[0]=0u+0x00000000u; // 803A1FB4
  W32(c->r[28]+0x00000010u,c->r[3]); // 803A1FB8
  c->r[3]=c->r[31]|c->r[31]; // 803A1FBC
  W32(c->r[28]+0x0000003Cu,c->r[29]); // 803A1FC0
  W8(c->r[28]+0x00000000u,c->r[0]); // 803A1FC4
  c->lr=0x803A1FCCu; f_8025EA38(c); // 803A1FC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A1FCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A1FD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A1FD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A1FD8
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A1FDC
  c->lr=c->r[0]; // 803A1FE0
  c->r[1]=c->r[1]+0x00000020u; // 803A1FE4
  return; // 803A1FE8
}

// fn_803A1FEC
void f_803A1FEC(Ctx* __restrict c) {
  trace_call(0x803A1FECu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 803A1FEC
  cmps(c,0,(int32_t)c->r[0],0); // 803A1FF0
  if (crb(c,2)) { goto L_803A2000; } // 803A1FF4
  c->r[3]=R8(c->r[3]+0x00000002u); // 803A1FF8
  return; // 803A1FFC
L_803A2000:;
  c->r[3]=0u+0x00000000u; // 803A2000
  return; // 803A2004
}

// fn_803A2008
void f_803A2008(Ctx* __restrict c) {
  trace_call(0x803A2008u);
  c->r[0]=R8(c->r[3]+0x00000005u); // 803A2008
  cmps(c,0,(int32_t)c->r[0],0); // 803A200C
  if (!crb(c,2)) return; // 803A2010
  c->r[4]=R32(c->r[3]+0x00000010u); // 803A2014
  cmps(c,0,(int32_t)c->r[4],0); // 803A2018
  if (crb(c,2)) { goto L_803A2024; } // 803A201C
  goto L_803A2028; // 803A2020
L_803A2024:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 803A2024
L_803A2028:;
  c->r[0]=0u+0x00000000u; // 803A2028
  W32(c->r[3]+0x00000010u,c->r[0]); // 803A202C
  W32(c->r[3]+0x00000014u,c->r[0]); // 803A2030
  goto L_803A203C; // 803A2034
  return; // 803A2038
L_803A203C:;
  cmps(c,0,(int32_t)c->r[4],2); // 803A203C
  if (crb(c,2)) { goto L_803A2088; } // 803A2040
  if (!crb(c,0)) { goto L_803A2058; } // 803A2044
  cmps(c,0,(int32_t)c->r[4],0); // 803A2048
  if (crb(c,2)) return; // 803A204C
  if (!crb(c,0)) { goto L_803A2064; } // 803A2050
  return; // 803A2054
L_803A2058:;
  cmps(c,0,(int32_t)c->r[4],4); // 803A2058
  if (!crb(c,0)) return; // 803A205C
  goto L_803A20B0; // 803A2060
L_803A2064:;
  c->r[0]=0u+0x00000001u; // 803A2064
  c->r[5]=0u+0x803A0000u; // 803A2068
  W8(c->r[3]+0x00000004u,c->r[0]); // 803A206C
  c->r[5]=c->r[5]+0x000023F0u; // 803A2070
  c->r[4]=0u+0x00000001u; // 803A2074
  W8(c->r[3]+0x00000005u,c->r[0]); // 803A2078
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A207C
  c->r[3]=R32(c->r[3]+0x00000038u); // 803A2080
  f_802E2438(c); return; // 803A2084
L_803A2088:;
  c->r[6]=0u+0x00000001u; // 803A2088
  c->r[0]=0u+0x00000003u; // 803A208C
  c->r[5]=0u+0x803A0000u; // 803A2090
  W8(c->r[3]+0x00000004u,c->r[6]); // 803A2094
  c->r[5]=c->r[5]+0x000024FCu; // 803A2098
  c->r[4]=0u+0x00000004u; // 803A209C
  W8(c->r[3]+0x00000005u,c->r[6]); // 803A20A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A20A4
  c->r[3]=R32(c->r[3]+0x00000038u); // 803A20A8
  f_802E2438(c); return; // 803A20AC
L_803A20B0:;
  c->r[6]=0u+0x00000001u; // 803A20B0
  c->r[0]=0u+0x00000005u; // 803A20B4
  c->r[5]=0u+0x803A0000u; // 803A20B8
  W8(c->r[3]+0x00000004u,c->r[6]); // 803A20BC
  c->r[5]=c->r[5]+0x000025E4u; // 803A20C0
  c->r[4]=0u+0x00000000u; // 803A20C4
  W8(c->r[3]+0x00000005u,c->r[6]); // 803A20C8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A20CC
  c->r[3]=R32(c->r[3]+0x00000038u); // 803A20D0
  f_802E2438(c); return; // 803A20D4
  return; // 803A20D8
}

// fn_803A20DC
void f_803A20DC(Ctx* __restrict c) {
  trace_call(0x803A20DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A20DC
  c->r[0]=c->lr; // 803A20E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 803A20E4
  c->r[11]=c->r[1]+0x00000040u; // 803A20E8
  c->lr=0x803A20F0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A20EC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803A20F0
  c->r[29]=c->r[3]|c->r[3]; // 803A20F4
  c->r[25]=c->r[4]|c->r[4]; // 803A20F8
  cmps(c,0,(int32_t)c->r[0],4); // 803A20FC
  if (!crb(c,2)) { goto L_803A23D8; } // 803A2100
  c->r[0]=R8(c->r[3]+0x00000002u); // 803A2104
  c->r[30]=0u+0x00000001u; // 803A2108
  cmps(c,0,(int32_t)c->r[0],0); // 803A210C
  if (crb(c,2)) { goto L_803A2200; } // 803A2110
  c->r[0]=0u+0x00000002u; // 803A2114
  c->r[6]=c->r[25]|c->r[25]; // 803A2118
  c->r[5]=0u+0x00000001u; // 803A211C
  c->r[4]=0u+0x00000000u; // 803A2120
  c->ctr=c->r[0]; // 803A2124
L_803A2128:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 803A2128
  cmps(c,0,(int32_t)c->r[0],0); // 803A212C
  if (crb(c,2)) { goto L_803A213C; } // 803A2130
  c->r[5]=0u+0x00000000u; // 803A2134
  goto L_803A2204; // 803A2138
L_803A213C:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 803A213C
  cmps(c,0,(int32_t)c->r[0],0); // 803A2140
  if (crb(c,2)) { goto L_803A2150; } // 803A2144
  c->r[5]=0u+0x00000000u; // 803A2148
  goto L_803A2204; // 803A214C
L_803A2150:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 803A2150
  cmps(c,0,(int32_t)c->r[0],0); // 803A2154
  if (crb(c,2)) { goto L_803A2164; } // 803A2158
  c->r[5]=0u+0x00000000u; // 803A215C
  goto L_803A2204; // 803A2160
L_803A2164:;
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 803A2164
  cmps(c,0,(int32_t)c->r[0],0); // 803A2168
  if (crb(c,2)) { goto L_803A2178; } // 803A216C
  c->r[5]=0u+0x00000000u; // 803A2170
  goto L_803A2204; // 803A2174
L_803A2178:;
  c->r[0]=R32(c->r[6]+0x00000010u); // 803A2178
  cmps(c,0,(int32_t)c->r[0],0); // 803A217C
  if (crb(c,2)) { goto L_803A218C; } // 803A2180
  c->r[5]=0u+0x00000000u; // 803A2184
  goto L_803A2204; // 803A2188
L_803A218C:;
  c->r[0]=R32(c->r[6]+0x00000014u); // 803A218C
  cmps(c,0,(int32_t)c->r[0],0); // 803A2190
  if (crb(c,2)) { goto L_803A21A0; } // 803A2194
  c->r[5]=0u+0x00000000u; // 803A2198
  goto L_803A2204; // 803A219C
L_803A21A0:;
  c->r[0]=R32(c->r[6]+0x00000018u); // 803A21A0
  cmps(c,0,(int32_t)c->r[0],0); // 803A21A4
  if (crb(c,2)) { goto L_803A21B4; } // 803A21A8
  c->r[5]=0u+0x00000000u; // 803A21AC
  goto L_803A2204; // 803A21B0
L_803A21B4:;
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 803A21B4
  cmps(c,0,(int32_t)c->r[0],0); // 803A21B8
  if (crb(c,2)) { goto L_803A21C8; } // 803A21BC
  c->r[5]=0u+0x00000000u; // 803A21C0
  goto L_803A2204; // 803A21C4
L_803A21C8:;
  c->r[0]=R32(c->r[6]+0x00000020u); // 803A21C8
  cmps(c,0,(int32_t)c->r[0],0); // 803A21CC
  if (crb(c,2)) { goto L_803A21DC; } // 803A21D0
  c->r[5]=0u+0x00000000u; // 803A21D4
  goto L_803A2204; // 803A21D8
L_803A21DC:;
  c->r[0]=R32(c->r[6]+0x00000024u); // 803A21DC
  cmps(c,0,(int32_t)c->r[0],0); // 803A21E0
  if (crb(c,2)) { goto L_803A21F0; } // 803A21E4
  c->r[5]=0u+0x00000000u; // 803A21E8
  goto L_803A2204; // 803A21EC
L_803A21F0:;
  c->r[6]=c->r[6]+0x00000028u; // 803A21F0
  c->r[4]=c->r[4]+0x00000009u; // 803A21F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803A2128; } // 803A21F8
  goto L_803A2204; // 803A21FC
L_803A2200:;
  c->r[5]=0u+0x00000001u; // 803A2200
L_803A2204:;
  cmps(c,0,(int32_t)c->r[5],0); // 803A2204
  if (!crb(c,2)) { goto L_803A2218; } // 803A2208
  c->r[0]=R8(c->r[3]+0x00000006u); // 803A220C
  cmps(c,0,(int32_t)c->r[0],0); // 803A2210
  if (crb(c,2)) { goto L_803A221C; } // 803A2214
L_803A2218:;
  c->r[30]=0u+0x00000000u; // 803A2218
L_803A221C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 803A221C
  c->r[26]=0u+0x00000000u; // 803A2220
  cmps(c,0,(int32_t)c->r[0],0); // 803A2224
  if (!crb(c,2)) { goto L_803A2238; } // 803A2228
  cmps(c,0,(int32_t)c->r[30],0); // 803A222C
  if (crb(c,2)) { goto L_803A2238; } // 803A2230
  c->r[26]=0u+0x00000001u; // 803A2234
L_803A2238:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A2238
  c->r[31]=0u+0x00000000u; // 803A223C
  if (crb(c,2)) { goto L_803A2250; } // 803A2240
  cmps(c,0,(int32_t)c->r[30],0); // 803A2244
  if (!crb(c,2)) { goto L_803A2250; } // 803A2248
  c->r[31]=0u+0x00000001u; // 803A224C
L_803A2250:;
  cmps(c,0,(int32_t)c->r[30],0); // 803A2250
  if (crb(c,2)) { goto L_803A2310; } // 803A2254
  c->lr=0x803A225Cu; f_8025EA10(c); // 803A2258
  c->r[28]=c->r[3]|c->r[3]; // 803A225C
  c->r[3]=R32(c->r[29]+0x00000038u); // 803A2260
  c->lr=0x803A2268u; f_802E3C10(c); // 803A2264
  cmps(c,0,(int32_t)c->r[3],0); // 803A2268
  if (!crb(c,2)) { goto L_803A227C; } // 803A226C
  c->r[3]=c->r[28]|c->r[28]; // 803A2270
  c->lr=0x803A2278u; f_8025EA38(c); // 803A2274
  goto L_803A23D8; // 803A2278
L_803A227C:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 803A227C
  c->r[27]=0u+0x00000000u; // 803A2280
  c->r[5]=c->r[25]|c->r[25]; // 803A2284
  c->r[3]=c->r[29]+0x00000018u; // 803A2288
  c->r[0]=cntlz(c->r[0]); // 803A228C
  W8(c->r[29]+0x00000003u,c->r[27]); // 803A2290
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 803A2294
  c->r[7]=c->r[1]+0x00000008u; // 803A2298
  c->r[6]=0u+0x00000028u; // 803A229C
  c->lr=0x803A22A4u; f_802F2F68(c); // 803A22A0
  c->r[3]=R32(c->r[29]+0x00000038u); // 803A22A4
  c->r[4]=c->r[1]+0x00000008u; // 803A22A8
  c->r[5]=0u+0x00000014u; // 803A22AC
  c->lr=0x803A22B4u; f_802E3C94(c); // 803A22B0
  cmps(c,0,(int32_t)c->r[3],0); // 803A22B4
  if (crb(c,2)) { goto L_803A2308; } // 803A22B8
  c->r[30]=0u+0x00000001u; // 803A22BC
  W32(c->r[29]+0x0000000Cu,c->r[27]); // 803A22C0
  c->r[3]=c->r[29]+0x00000040u; // 803A22C4
  W32(c->r[29]+0x00000014u,c->r[30]); // 803A22C8
  W8(c->r[29]+0x00000001u,c->r[27]); // 803A22CC
  W8(c->r[29]+0x00000002u,c->r[27]); // 803A22D0
  c->lr=0x803A22D8u; f_80259738(c); // 803A22D4
  W8(c->r[29]+0x00000007u,c->r[27]); // 803A22D8
  c->r[3]=c->r[29]+0x00000070u; // 803A22DC
  c->lr=0x803A22E4u; f_80259738(c); // 803A22E0
  W8(c->r[29]+0x00000008u,c->r[27]); // 803A22E4
  c->r[3]=c->r[28]|c->r[28]; // 803A22E8
  W8(c->r[29]+0x00000006u,c->r[27]); // 803A22EC
  W8(c->r[29]+0x00000007u,c->r[27]); // 803A22F0
  W8(c->r[29]+0x00000001u,c->r[27]); // 803A22F4
  W8(c->r[29]+0x00000002u,c->r[30]); // 803A22F8
  W8(c->r[29]+0x00000008u,c->r[27]); // 803A22FC
  c->lr=0x803A2304u; f_8025EA38(c); // 803A2300
  goto L_803A23D8; // 803A2304
L_803A2308:;
  c->r[3]=c->r[28]|c->r[28]; // 803A2308
  c->lr=0x803A2310u; f_8025EA38(c); // 803A230C
L_803A2310:;
  cmps(c,0,(int32_t)c->r[26],0); // 803A2310
  if (crb(c,2)) { goto L_803A238C; } // 803A2314
  c->lr=0x803A231Cu; f_8025EA10(c); // 803A2318
  c->r[0]=R8(c->r[29]+0x00000007u); // 803A231C
  c->r[28]=c->r[3]|c->r[3]; // 803A2320
  cmps(c,0,(int32_t)c->r[0],0); // 803A2324
  if (!crb(c,2)) { goto L_803A2374; } // 803A2328
  c->r[3]=0u+0x80000000u; // 803A232C
  c->r[7]=0u+0x803A0000u; // 803A2330
  c->r[0]=R32(c->r[3]+0x000000F8u); // 803A2334
  c->r[4]=0u+0x000001E0u; // 803A2338
  c->r[5]=0u+0x00000000u; // 803A233C
  c->r[3]=c->r[29]+0x00000040u; // 803A2340
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 803A2344
  c->r[7]=c->r[7]+0x000026CCu; // 803A2348
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[4])>>32); // 803A234C
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 803A2350
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)480); // 803A2354
  c->r[5]=c->r[0]+c->r[4]; // 803A2358
  c->lr=0x803A2360u; f_80259644(c); // 803A235C
  c->lr=0x803A2364u; f_80262780(c); // 803A2360
  c->r[0]=0u+0x00000001u; // 803A2364
  W32(c->r[29]+0x000000A4u,c->r[4]); // 803A2368
  W32(c->r[29]+0x000000A0u,c->r[3]); // 803A236C
  W8(c->r[29]+0x00000007u,c->r[0]); // 803A2370
L_803A2374:;
  c->r[3]=c->r[29]+0x00000070u; // 803A2374
  c->lr=0x803A237Cu; f_80259738(c); // 803A2378
  c->r[0]=0u+0x00000000u; // 803A237C
  c->r[3]=c->r[28]|c->r[28]; // 803A2380
  W8(c->r[29]+0x00000008u,c->r[0]); // 803A2384
  c->lr=0x803A238Cu; f_8025EA38(c); // 803A2388
L_803A238C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A238C
  if (crb(c,2)) { goto L_803A23D4; } // 803A2390
  c->lr=0x803A2398u; f_8025EA10(c); // 803A2394
  c->r[0]=0u+0x00000001u; // 803A2398
  c->r[28]=c->r[3]|c->r[3]; // 803A239C
  W8(c->r[29]+0x00000008u,c->r[0]); // 803A23A0
  c->r[3]=c->r[29]+0x00000070u; // 803A23A4
  c->lr=0x803A23ACu; f_80259738(c); // 803A23A8
  c->r[3]=0u+0x80000000u; // 803A23AC
  c->r[7]=0u+0x803A0000u; // 803A23B0
  c->r[0]=R32(c->r[3]+0x000000F8u); // 803A23B4
  c->r[3]=c->r[29]+0x00000070u; // 803A23B8
  c->r[7]=c->r[7]+0x00002724u; // 803A23BC
  c->r[5]=0u+0x00000000u; // 803A23C0
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 803A23C4
  c->lr=0x803A23CCu; f_80259644(c); // 803A23C8
  c->r[3]=c->r[28]|c->r[28]; // 803A23CC
  c->lr=0x803A23D4u; f_8025EA38(c); // 803A23D0
L_803A23D4:;
  W8(c->r[29]+0x00000001u,c->r[30]); // 803A23D4
L_803A23D8:;
  c->r[11]=c->r[1]+0x00000040u; // 803A23D8
  c->lr=0x803A23E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A23DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 803A23E0
  c->lr=c->r[0]; // 803A23E4
  c->r[1]=c->r[1]+0x00000040u; // 803A23E8
  return; // 803A23EC
}

// SpeakerOnCallback__Q34nw4r3snd13RemoteSpeakerFll
void f_803A23F0(Ctx* __restrict c) {
  trace_call(0x803A23F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A23F0
  c->r[0]=c->lr; // 803A23F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A23F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A23FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A2400
  c->r[30]=c->r[4]|c->r[4]; // 803A2404
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A2408
  c->r[29]=c->r[3]|c->r[3]; // 803A240C
  c->lr=0x803A2414u; f_803A2798(c); // 803A2410
  c->r[4]=c->r[29]|c->r[29]; // 803A2414
  c->lr=0x803A241Cu; f_803A2830(c); // 803A2418
  cmps(c,0,(int32_t)c->r[30],-1); // 803A241C
  c->r[31]=c->r[3]|c->r[3]; // 803A2420
  if (crb(c,2)) { goto L_803A2484; } // 803A2424
  if (!crb(c,0)) { goto L_803A243C; } // 803A2428
  cmps(c,0,(int32_t)c->r[30],-3); // 803A242C
  if (crb(c,2)) { goto L_803A2478; } // 803A2430
  if (!crb(c,0)) { goto L_803A246C; } // 803A2434
  goto L_803A2490; // 803A2438
L_803A243C:;
  cmps(c,0,(int32_t)c->r[30],1); // 803A243C
  if (!crb(c,0)) { goto L_803A2490; } // 803A2440
  c->r[0]=0u+0x00000001u; // 803A2444
  c->r[4]=0u+0x00000000u; // 803A2448
  W8(c->r[3]+0x00000003u,c->r[0]); // 803A244C
  c->r[5]=0u+0x00000020u; // 803A2450
  c->r[3]=c->r[3]+0x00000018u; // 803A2454
  c->lr=0x803A245Cu; f_800043EC(c); // 803A2458
  c->r[0]=0u+0x00000002u; // 803A245C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 803A2460
  W32(c->r[31]+0x00000014u,c->r[0]); // 803A2464
  goto L_803A2498; // 803A2468
L_803A246C:;
  c->r[0]=0u+0x00000001u; // 803A246C
  W32(c->r[3]+0x00000014u,c->r[0]); // 803A2470
  goto L_803A2498; // 803A2474
L_803A2478:;
  c->r[0]=0u+0x00000000u; // 803A2478
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A247C
  goto L_803A2498; // 803A2480
L_803A2484:;
  c->r[0]=0u+0x00000000u; // 803A2484
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A2488
  goto L_803A2498; // 803A248C
L_803A2490:;
  c->r[0]=0u+0x00000000u; // 803A2490
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A2494
L_803A2498:;
  cmps(c,0,(int32_t)c->r[30],0); // 803A2498
  if (crb(c,2)) { goto L_803A24D8; } // 803A249C
  cmps(c,0,(int32_t)c->r[30],-2); // 803A24A0
  if (crb(c,2)) { goto L_803A24D8; } // 803A24A4
  c->r[0]=R8(c->r[31]+0x00000004u); // 803A24A8
  cmps(c,0,(int32_t)c->r[0],0); // 803A24AC
  if (crb(c,2)) { goto L_803A24D8; } // 803A24B0
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 803A24B4
  cmps(c,0,(int32_t)c->r[12],0); // 803A24B8
  if (crb(c,2)) { goto L_803A24D8; } // 803A24BC
  c->r[3]=c->r[29]|c->r[29]; // 803A24C0
  c->r[4]=c->r[30]|c->r[30]; // 803A24C4
  c->ctr=c->r[12]; // 803A24C8
  if (true) { c->lr=0x803A24D0u; dispatch(c,c->ctr); } // 803A24CC
  c->r[0]=0u+0x00000000u; // 803A24D0
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 803A24D4
L_803A24D8:;
  c->r[0]=0u+0x00000000u; // 803A24D8
  W8(c->r[31]+0x00000005u,c->r[0]); // 803A24DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A24E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A24E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A24E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A24EC
  c->lr=c->r[0]; // 803A24F0
  c->r[1]=c->r[1]+0x00000020u; // 803A24F4
  return; // 803A24F8
}

// fn_803A24FC
void f_803A24FC(Ctx* __restrict c) {
  trace_call(0x803A24FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A24FC
  c->r[0]=c->lr; // 803A2500
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A2504
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A2508
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A250C
  c->r[30]=c->r[4]|c->r[4]; // 803A2510
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A2514
  c->r[29]=c->r[3]|c->r[3]; // 803A2518
  c->lr=0x803A2520u; f_803A2798(c); // 803A251C
  c->r[4]=c->r[29]|c->r[29]; // 803A2520
  c->lr=0x803A2528u; f_803A2830(c); // 803A2524
  cmps(c,0,(int32_t)c->r[30],-1); // 803A2528
  c->r[31]=c->r[3]|c->r[3]; // 803A252C
  if (crb(c,2)) { goto L_803A2574; } // 803A2530
  if (!crb(c,0)) { goto L_803A2548; } // 803A2534
  cmps(c,0,(int32_t)c->r[30],-3); // 803A2538
  if (crb(c,2)) { goto L_803A2568; } // 803A253C
  if (!crb(c,0)) { goto L_803A255C; } // 803A2540
  goto L_803A2580; // 803A2544
L_803A2548:;
  cmps(c,0,(int32_t)c->r[30],1); // 803A2548
  if (!crb(c,0)) { goto L_803A2580; } // 803A254C
  c->r[0]=0u+0x00000004u; // 803A2550
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A2554
  goto L_803A2588; // 803A2558
L_803A255C:;
  c->r[0]=0u+0x00000002u; // 803A255C
  W32(c->r[3]+0x00000014u,c->r[0]); // 803A2560
  goto L_803A2588; // 803A2564
L_803A2568:;
  c->r[0]=0u+0x00000000u; // 803A2568
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A256C
  goto L_803A2588; // 803A2570
L_803A2574:;
  c->r[0]=0u+0x00000000u; // 803A2574
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A2578
  goto L_803A2588; // 803A257C
L_803A2580:;
  c->r[0]=0u+0x00000000u; // 803A2580
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A2584
L_803A2588:;
  cmps(c,0,(int32_t)c->r[30],-2); // 803A2588
  if (crb(c,2)) { goto L_803A25C0; } // 803A258C
  c->r[0]=R8(c->r[3]+0x00000004u); // 803A2590
  cmps(c,0,(int32_t)c->r[0],0); // 803A2594
  if (crb(c,2)) { goto L_803A25C0; } // 803A2598
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 803A259C
  cmps(c,0,(int32_t)c->r[12],0); // 803A25A0
  if (crb(c,2)) { goto L_803A25C0; } // 803A25A4
  c->r[3]=c->r[29]|c->r[29]; // 803A25A8
  c->r[4]=c->r[30]|c->r[30]; // 803A25AC
  c->ctr=c->r[12]; // 803A25B0
  if (true) { c->lr=0x803A25B8u; dispatch(c,c->ctr); } // 803A25B4
  c->r[0]=0u+0x00000000u; // 803A25B8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 803A25BC
L_803A25C0:;
  c->r[0]=0u+0x00000000u; // 803A25C0
  W8(c->r[31]+0x00000005u,c->r[0]); // 803A25C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A25C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A25CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A25D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A25D4
  c->lr=c->r[0]; // 803A25D8
  c->r[1]=c->r[1]+0x00000020u; // 803A25DC
  return; // 803A25E0
}

// fn_803A25E4
void f_803A25E4(Ctx* __restrict c) {
  trace_call(0x803A25E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A25E4
  c->r[0]=c->lr; // 803A25E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A25EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A25F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A25F4
  c->r[30]=c->r[4]|c->r[4]; // 803A25F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A25FC
  c->r[29]=c->r[3]|c->r[3]; // 803A2600
  c->lr=0x803A2608u; f_803A2798(c); // 803A2604
  c->r[4]=c->r[29]|c->r[29]; // 803A2608
  c->lr=0x803A2610u; f_803A2830(c); // 803A260C
  cmps(c,0,(int32_t)c->r[30],-1); // 803A2610
  c->r[31]=c->r[3]|c->r[3]; // 803A2614
  if (crb(c,2)) { goto L_803A265C; } // 803A2618
  if (!crb(c,0)) { goto L_803A2630; } // 803A261C
  cmps(c,0,(int32_t)c->r[30],-3); // 803A2620
  if (crb(c,2)) { goto L_803A2650; } // 803A2624
  if (!crb(c,0)) { goto L_803A2644; } // 803A2628
  goto L_803A2668; // 803A262C
L_803A2630:;
  cmps(c,0,(int32_t)c->r[30],1); // 803A2630
  if (!crb(c,0)) { goto L_803A2668; } // 803A2634
  c->r[0]=0u+0x00000006u; // 803A2638
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A263C
  goto L_803A2670; // 803A2640
L_803A2644:;
  c->r[0]=0u+0x00000003u; // 803A2644
  W32(c->r[3]+0x00000014u,c->r[0]); // 803A2648
  goto L_803A2670; // 803A264C
L_803A2650:;
  c->r[0]=0u+0x00000000u; // 803A2650
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A2654
  goto L_803A2670; // 803A2658
L_803A265C:;
  c->r[0]=0u+0x00000000u; // 803A265C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A2660
  goto L_803A2670; // 803A2664
L_803A2668:;
  c->r[0]=0u+0x00000000u; // 803A2668
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A266C
L_803A2670:;
  cmps(c,0,(int32_t)c->r[30],-2); // 803A2670
  if (crb(c,2)) { goto L_803A26A8; } // 803A2674
  c->r[0]=R8(c->r[3]+0x00000004u); // 803A2678
  cmps(c,0,(int32_t)c->r[0],0); // 803A267C
  if (crb(c,2)) { goto L_803A26A8; } // 803A2680
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 803A2684
  cmps(c,0,(int32_t)c->r[12],0); // 803A2688
  if (crb(c,2)) { goto L_803A26A8; } // 803A268C
  c->r[3]=c->r[29]|c->r[29]; // 803A2690
  c->r[4]=c->r[30]|c->r[30]; // 803A2694
  c->ctr=c->r[12]; // 803A2698
  if (true) { c->lr=0x803A26A0u; dispatch(c,c->ctr); } // 803A269C
  c->r[0]=0u+0x00000000u; // 803A26A0
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 803A26A4
L_803A26A8:;
  c->r[0]=0u+0x00000000u; // 803A26A8
  W8(c->r[31]+0x00000005u,c->r[0]); // 803A26AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A26B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A26B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A26B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A26BC
  c->lr=c->r[0]; // 803A26C0
  c->r[1]=c->r[1]+0x00000020u; // 803A26C4
  return; // 803A26C8
}

// fn_803A26CC
void f_803A26CC(Ctx* __restrict c) {
  trace_call(0x803A26CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A26CC
  c->r[0]=c->lr; // 803A26D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A26D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A26D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A26DC
  c->r[30]=c->r[3]|c->r[3]; // 803A26E0
  c->lr=0x803A26E8u; f_8025EA10(c); // 803A26E4
  c->r[31]=c->r[3]|c->r[3]; // 803A26E8
  c->r[3]=c->r[30]|c->r[30]; // 803A26EC
  c->lr=0x803A26F4u; f_80259B68(c); // 803A26F0
  c->r[4]=0u+0x00000001u; // 803A26F4
  c->r[0]=0u+0x00000000u; // 803A26F8
  W8(c->r[3]+0x00000006u,c->r[4]); // 803A26FC
  W8(c->r[3]+0x00000007u,c->r[0]); // 803A2700
  c->r[3]=c->r[31]|c->r[31]; // 803A2704
  c->lr=0x803A270Cu; f_8025EA38(c); // 803A2708
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A270C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A2710
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A2714
  c->lr=c->r[0]; // 803A2718
  c->r[1]=c->r[1]+0x00000010u; // 803A271C
  return; // 803A2720
}

// IntervalAlarmHandler__Q34nw4r3snd13RemoteSpeakerFP7OSAlarmP9OSContext
void f_803A2724(Ctx* __restrict c) {
  trace_call(0x803A2724u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A2724
  c->r[0]=c->lr; // 803A2728
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A272C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A2730
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A2734
  c->r[30]=c->r[3]|c->r[3]; // 803A2738
  c->lr=0x803A2740u; f_8025EA10(c); // 803A273C
  c->r[31]=c->r[3]|c->r[3]; // 803A2740
  c->r[3]=c->r[30]|c->r[30]; // 803A2744
  c->lr=0x803A274Cu; f_80259B68(c); // 803A2748
  c->r[0]=R8(c->r[3]+0x00000008u); // 803A274C
  c->r[30]=c->r[3]|c->r[3]; // 803A2750
  cmps(c,0,(int32_t)c->r[0],0); // 803A2754
  if (crb(c,2)) { goto L_803A2770; } // 803A2758
  c->r[3]=c->r[3]+0x00000040u; // 803A275C
  c->lr=0x803A2764u; f_80259738(c); // 803A2760
  c->r[0]=0u+0x00000000u; // 803A2764
  W8(c->r[30]+0x00000006u,c->r[0]); // 803A2768
  W8(c->r[30]+0x00000007u,c->r[0]); // 803A276C
L_803A2770:;
  c->r[0]=0u+0x00000000u; // 803A2770
  c->r[3]=c->r[31]|c->r[31]; // 803A2774
  W8(c->r[30]+0x00000008u,c->r[0]); // 803A2778
  c->lr=0x803A2780u; f_8025EA38(c); // 803A277C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A2780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A2784
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A2788
  c->lr=c->r[0]; // 803A278C
  c->r[1]=c->r[1]+0x00000010u; // 803A2790
  return; // 803A2794
}

// GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_803A2798(Ctx* __restrict c) {
  trace_call(0x803A2798u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A2798
  c->r[0]=c->lr; // 803A279C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A27A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A27A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A27A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A27AC
  c->r[0]=R8(c->r[13]+0xFFFFA008u); // 803A27B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A27B4
  if (!crb(c,2)) { goto L_803A280C; } // 803A27B8
  c->r[3]=0u+0x806C0000u; // 803A27BC
  c->r[0]=0u+0x00000000u; // 803A27C0
  c->r[30]=c->r[3]+0xFFFFD8A0u; // 803A27C4
  W8(c->r[3]+0xFFFFD8A0u,c->r[0]); // 803A27C8
  c->r[29]=c->r[30]+0x00000038u; // 803A27CC
  c->r[31]=c->r[30]+0x000002D8u; // 803A27D0
L_803A27D4:;
  c->r[3]=c->r[29]|c->r[29]; // 803A27D4
  c->lr=0x803A27DCu; f_803A1DF8(c); // 803A27D8
  c->r[29]=c->r[29]+0x000000A8u; // 803A27DC
  cmpu(c,0,c->r[29],c->r[31]); // 803A27E0
  if (crb(c,0)) { IRQCHK(c); goto L_803A27D4; } // 803A27E4
  c->r[4]=0u+0x00000001u; // 803A27E8
  c->r[5]=0u+0x00000000u; // 803A27EC
  c->r[3]=0u+0x00000002u; // 803A27F0
  c->r[0]=0u+0x00000003u; // 803A27F4
  W32(c->r[30]+0x00000070u,c->r[5]); // 803A27F8
  W32(c->r[30]+0x00000118u,c->r[4]); // 803A27FC
  W32(c->r[30]+0x000001C0u,c->r[3]); // 803A2800
  W32(c->r[30]+0x00000268u,c->r[0]); // 803A2804
  W8(c->r[13]+0xFFFFA008u,c->r[4]); // 803A2808
L_803A280C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A280C
  c->r[3]=0u+0x806C0000u; // 803A2810
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A2814
  c->r[3]=c->r[3]+0xFFFFD8A0u; // 803A2818
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A281C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A2820
  c->lr=c->r[0]; // 803A2824
  c->r[1]=c->r[1]+0x00000020u; // 803A2828
  return; // 803A282C
}

// GetRemoteSpeaker__Q44nw4r3snd6detail20RemoteSpeakerManagerFi
void f_803A2830(Ctx* __restrict c) {
  trace_call(0x803A2830u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)168); // 803A2830
  c->r[3]=c->r[3]+c->r[0]; // 803A2834
  c->r[3]=c->r[3]+0x00000038u; // 803A2838
  return; // 803A283C
}

// Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_803A2840(Ctx* __restrict c) {
  trace_call(0x803A2840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A2840
  c->r[0]=c->lr; // 803A2844
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A2848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A284C
  c->r[31]=c->r[3]|c->r[3]; // 803A2850
  c->r[0]=R8(c->r[3]+0x00000000u); // 803A2854
  cmps(c,0,(int32_t)c->r[0],0); // 803A2858
  if (!crb(c,2)) { goto L_803A28C8; } // 803A285C
  c->r[3]=c->r[3]+0x00000008u; // 803A2860
  c->lr=0x803A2868u; f_802593E4(c); // 803A2864
  c->lr=0x803A286Cu; f_80262780(c); // 803A2868
  c->r[6]=0u+0x80000000u; // 803A286C
  c->r[5]=0u+0x431C0000u; // 803A2870
  c->r[0]=R32(c->r[6]+0x000000F8u); // 803A2874
  c->r[6]=0u+0x10620000u; // 803A2878
  c->r[10]=c->r[6]+0x00004DD3u; // 803A287C
  c->r[9]=0u+0x803A0000u; // 803A2880
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 803A2884
  c->r[5]=c->r[5]+0xFFFFDE83u; // 803A2888
  c->r[8]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 803A288C
  c->r[7]=0u+0x00660000u; // 803A2890
  c->r[6]=c->r[4]|c->r[4]; // 803A2894
  c->r[0]=c->r[7]+0xFFFFB9ABu; // 803A2898
  c->r[5]=c->r[3]|c->r[3]; // 803A289C
  c->r[3]=c->r[31]+0x00000008u; // 803A28A0
  c->r[4]=rotl(c->r[8],17)&0x0001FFFFu; // 803A28A4
  c->r[9]=c->r[9]+0x000028DCu; // 803A28A8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803A28AC
  c->r[7]=0u+0x00000000u; // 803A28B0
  c->r[0]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[0])>>32); // 803A28B4
  c->r[8]=rotl(c->r[0],23)&0x007FFFFFu; // 803A28B8
  c->lr=0x803A28C0u; f_802596B4(c); // 803A28BC
  c->r[0]=0u+0x00000001u; // 803A28C0
  W8(c->r[31]+0x00000000u,c->r[0]); // 803A28C4
L_803A28C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A28C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A28CC
  c->lr=c->r[0]; // 803A28D0
  c->r[1]=c->r[1]+0x00000010u; // 803A28D4
  return; // 803A28D8
}

// RemoteSpeakerAlarmProc__Q44nw4r3snd6detail20RemoteSpeakerManagerFP7OSAlarmP9OSContext
void f_803A28DC(Ctx* __restrict c) {
  trace_call(0x803A28DCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A28DC
  c->r[0]=c->lr; // 803A28E0
  W32(c->r[1]+0x00000074u,c->r[0]); // 803A28E4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 803A28E8
  W32(c->r[1]+0x00000068u,c->r[30]); // 803A28EC
  W32(c->r[1]+0x00000064u,c->r[29]); // 803A28F0
  c->r[0]=R8(c->r[13]+0xFFFFA008u); // 803A28F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A28F8
  if (!crb(c,2)) { goto L_803A2950; } // 803A28FC
  c->r[3]=0u+0x806C0000u; // 803A2900
  c->r[0]=0u+0x00000000u; // 803A2904
  c->r[30]=c->r[3]+0xFFFFD8A0u; // 803A2908
  W8(c->r[3]+0xFFFFD8A0u,c->r[0]); // 803A290C
  c->r[29]=c->r[30]+0x00000038u; // 803A2910
  c->r[31]=c->r[30]+0x000002D8u; // 803A2914
L_803A2918:;
  c->r[3]=c->r[29]|c->r[29]; // 803A2918
  c->lr=0x803A2920u; f_803A1DF8(c); // 803A291C
  c->r[29]=c->r[29]+0x000000A8u; // 803A2920
  cmpu(c,0,c->r[29],c->r[31]); // 803A2924
  if (crb(c,0)) { IRQCHK(c); goto L_803A2918; } // 803A2928
  c->r[4]=0u+0x00000001u; // 803A292C
  c->r[5]=0u+0x00000000u; // 803A2930
  c->r[3]=0u+0x00000002u; // 803A2934
  c->r[0]=0u+0x00000003u; // 803A2938
  W32(c->r[30]+0x00000070u,c->r[5]); // 803A293C
  W32(c->r[30]+0x00000118u,c->r[4]); // 803A2940
  W32(c->r[30]+0x000001C0u,c->r[3]); // 803A2944
  W32(c->r[30]+0x00000268u,c->r[0]); // 803A2948
  W8(c->r[13]+0xFFFFA008u,c->r[4]); // 803A294C
L_803A2950:;
  c->r[30]=0u+0x806C0000u; // 803A2950
  c->r[30]=c->r[30]+0xFFFFD8A0u; // 803A2954
  c->lr=0x803A295Cu; f_80275474(c); // 803A2958
  cmps(c,0,(int32_t)c->r[3],40); // 803A295C
  if (crb(c,0)) { goto L_803A29B8; } // 803A2960
  c->r[29]=c->r[30]+0x00000038u; // 803A2964
  c->r[31]=0u+0x00000000u; // 803A2968
L_803A296C:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 803A296C
  cmps(c,0,(int32_t)c->r[0],4); // 803A2970
  if (!crb(c,2)) { goto L_803A2994; } // 803A2974
  c->r[3]=c->r[31]|c->r[31]; // 803A2978
  c->r[4]=c->r[1]+0x00000008u; // 803A297C
  c->r[5]=0u+0x00000028u; // 803A2980
  c->lr=0x803A2988u; f_802754A0(c); // 803A2984
  c->r[3]=c->r[29]|c->r[29]; // 803A2988
  c->r[4]=c->r[1]+0x00000008u; // 803A298C
  c->lr=0x803A2994u; f_803A20DC(c); // 803A2990
L_803A2994:;
  c->r[3]=c->r[29]|c->r[29]; // 803A2994
  c->lr=0x803A299Cu; f_803A2008(c); // 803A2998
  c->r[31]=c->r[31]+0x00000001u; // 803A299C
  c->r[29]=c->r[29]+0x000000A8u; // 803A29A0
  cmps(c,0,(int32_t)c->r[31],4); // 803A29A4
  c->r[30]=c->r[30]+0x000000A8u; // 803A29A8
  if (crb(c,0)) { IRQCHK(c); goto L_803A296C; } // 803A29AC
  c->r[3]=0u+0x00000028u; // 803A29B0
  c->lr=0x803A29B8u; f_80275564(c); // 803A29B4
L_803A29B8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 803A29B8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 803A29BC
  c->r[30]=R32(c->r[1]+0x00000068u); // 803A29C0
  c->r[29]=R32(c->r[1]+0x00000064u); // 803A29C4
  c->lr=c->r[0]; // 803A29C8
  c->r[1]=c->r[1]+0x00000070u; // 803A29CC
  return; // 803A29D0
}

// __ct__Q44nw4r3snd6detail13SeqFileReaderFPCv
void f_803A29D4(Ctx* __restrict c) {
  trace_call(0x803A29D4u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 803A29D4
  c->r[6]=0u+0x00000000u; // 803A29D8
  W32(c->r[3]+0x00000000u,c->r[6]); // 803A29DC
  c->r[0]=c->r[5]+0xADAD0000u; // 803A29E0
  cmpu(c,0,c->r[0],0x00004551u); // 803A29E4
  W32(c->r[3]+0x00000004u,c->r[6]); // 803A29E8
  if (crb(c,2)) { goto L_803A29F8; } // 803A29EC
  c->r[0]=0u+0x00000000u; // 803A29F0
  goto L_803A2A24; // 803A29F4
L_803A29F8:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 803A29F8
  cmpu(c,0,c->r[6],0x00000100u); // 803A29FC
  if (!crb(c,0)) { goto L_803A2A0C; } // 803A2A00
  c->r[0]=0u+0x00000000u; // 803A2A04
  goto L_803A2A24; // 803A2A08
L_803A2A0C:;
  c->r[0]=addc(c,~c->r[6],0x00000100u,1); // 803A2A0C
  c->r[5]=0u+0x00000100u; // 803A2A10
  c->r[5]=c->r[5]|~c->r[6]; // 803A2A14
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803A2A18
  c->r[0]=c->r[5]-c->r[0]; // 803A2A1C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A2A20
L_803A2A24:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A2A24
  if (crb(c,2)) return; // 803A2A28
  c->r[0]=R32(c->r[4]+0x00000010u); // 803A2A2C
  W32(c->r[3]+0x00000000u,c->r[4]); // 803A2A30
  c->r[0]=c->r[0]+c->r[4]; // 803A2A34
  W32(c->r[3]+0x00000004u,c->r[0]); // 803A2A38
  return; // 803A2A3C
}

// GetBaseAddress__Q44nw4r3snd6detail13SeqFileReaderCFv
void f_803A2A40(Ctx* __restrict c) {
  trace_call(0x803A2A40u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A2A40
  c->r[0]=R32(c->r[3]+0x00000008u); // 803A2A44
  c->r[3]=c->r[0]+c->r[3]; // 803A2A48
  return; // 803A2A4C
}

// fn_803A2A50
void f_803A2A50(Ctx* __restrict c) {
  trace_call(0x803A2A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A2A50
  c->r[0]=c->lr; // 803A2A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A2A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A2A5C
  c->r[31]=c->r[3]|c->r[3]; // 803A2A60
  c->lr=0x803A2A68u; f_8039B934(c); // 803A2A64
  c->r[9]=0u+0x80430000u; // 803A2A68
  c->r[10]=0u+0x00000000u; // 803A2A6C
  c->r[9]=c->r[9]+0x00007368u; // 803A2A70
  {uint32_t ea=c->r[2]+0xFFFFEEA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A2A74
  {uint32_t ea=c->r[2]+0xFFFFEEACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A2A78
  c->r[8]=c->r[9]+0x00000024u; // 803A2A7C
  c->r[7]=c->r[9]+0x00000038u; // 803A2A80
  c->r[6]=0u+0x00000078u; // 803A2A84
  c->r[5]=0u+0x00000030u; // 803A2A88
  c->r[4]=0u+0x0000007Fu; // 803A2A8C
  c->r[3]=0u+0x00000040u; // 803A2A90
  W32(c->r[31]+0x00000074u,c->r[10]); // 803A2A94
  c->r[0]=0u+0xFFFFFFFFu; // 803A2A98
  W32(c->r[31]+0x00000078u,c->r[10]); // 803A2A9C
  W32(c->r[31]+0x00000080u,c->r[10]); // 803A2AA0
  W32(c->r[31]+0x00000084u,c->r[10]); // 803A2AA4
  W32(c->r[31]+0x00000000u,c->r[9]); // 803A2AA8
  W32(c->r[31]+0x0000007Cu,c->r[8]); // 803A2AAC
  W32(c->r[31]+0x00000088u,c->r[7]); // 803A2AB0
  W8(c->r[31]+0x0000008Cu,c->r[10]); // 803A2AB4
  W8(c->r[31]+0x0000008Du,c->r[10]); // 803A2AB8
  W8(c->r[31]+0x0000008Eu,c->r[10]); // 803A2ABC
  W8(c->r[31]+0x0000008Fu,c->r[10]); // 803A2AC0
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 803A2AC4
  W16(c->r[31]+0x00000098u,c->r[10]); // 803A2AC8
  W32(c->r[31]+0x0000009Cu,c->r[10]); // 803A2ACC
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 803A2AD0
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[1]);} // 803A2AD4
  W32(c->r[31]+0x00000118u,c->r[10]); // 803A2AD8
  W32(c->r[31]+0x000000A4u,c->r[10]); // 803A2ADC
  W16(c->r[31]+0x000000ACu,c->r[6]); // 803A2AE0
  W8(c->r[31]+0x000000AAu,c->r[5]); // 803A2AE4
  W8(c->r[31]+0x000000A8u,c->r[4]); // 803A2AE8
  W8(c->r[31]+0x000000A9u,c->r[3]); // 803A2AEC
  W32(c->r[31]+0x000000B0u,c->r[10]); // 803A2AF0
  W16(c->r[31]+0x000000F8u,c->r[0]); // 803A2AF4
  W16(c->r[31]+0x000000FAu,c->r[0]); // 803A2AF8
  W16(c->r[31]+0x000000FCu,c->r[0]); // 803A2AFC
  W16(c->r[31]+0x000000FEu,c->r[0]); // 803A2B00
  W16(c->r[31]+0x00000100u,c->r[0]); // 803A2B04
  W16(c->r[31]+0x00000102u,c->r[0]); // 803A2B08
  W16(c->r[31]+0x00000104u,c->r[0]); // 803A2B0C
  W16(c->r[31]+0x00000106u,c->r[0]); // 803A2B10
  W16(c->r[31]+0x00000108u,c->r[0]); // 803A2B14
  W16(c->r[31]+0x0000010Au,c->r[0]); // 803A2B18
  W16(c->r[31]+0x0000010Cu,c->r[0]); // 803A2B1C
  W16(c->r[31]+0x0000010Eu,c->r[0]); // 803A2B20
  W16(c->r[31]+0x00000110u,c->r[0]); // 803A2B24
  W16(c->r[31]+0x00000112u,c->r[0]); // 803A2B28
  W16(c->r[31]+0x00000114u,c->r[0]); // 803A2B2C
  W16(c->r[31]+0x00000116u,c->r[0]); // 803A2B30
  c->r[0]=0u+0x00000000u; // 803A2B34
  c->r[3]=c->r[31]|c->r[31]; // 803A2B38
  W32(c->r[31]+0x000000B8u,c->r[0]); // 803A2B3C
  W32(c->r[31]+0x000000BCu,c->r[0]); // 803A2B40
  W32(c->r[31]+0x000000C0u,c->r[0]); // 803A2B44
  W32(c->r[31]+0x000000C4u,c->r[0]); // 803A2B48
  W32(c->r[31]+0x000000C8u,c->r[0]); // 803A2B4C
  W32(c->r[31]+0x000000CCu,c->r[0]); // 803A2B50
  W32(c->r[31]+0x000000D0u,c->r[0]); // 803A2B54
  W32(c->r[31]+0x000000D4u,c->r[0]); // 803A2B58
  W32(c->r[31]+0x000000D8u,c->r[0]); // 803A2B5C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 803A2B60
  W32(c->r[31]+0x000000E0u,c->r[0]); // 803A2B64
  W32(c->r[31]+0x000000E4u,c->r[0]); // 803A2B68
  W32(c->r[31]+0x000000E8u,c->r[0]); // 803A2B6C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 803A2B70
  W32(c->r[31]+0x000000F0u,c->r[0]); // 803A2B74
  W32(c->r[31]+0x000000F4u,c->r[0]); // 803A2B78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A2B7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A2B80
  c->lr=c->r[0]; // 803A2B84
  c->r[1]=c->r[1]+0x00000010u; // 803A2B88
  return; // 803A2B8C
}

// fn_803A2B90
void f_803A2B90(Ctx* __restrict c) {
  trace_call(0x803A2B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A2B90
  c->r[0]=c->lr; // 803A2B94
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A2B98
  c->r[11]=c->r[1]+0x00000020u; // 803A2B9C
  c->lr=0x803A2BA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A2BA0
  cmps(c,0,(int32_t)c->r[3],0); // 803A2BA4
  c->r[27]=c->r[3]|c->r[3]; // 803A2BA8
  c->r[28]=c->r[4]|c->r[4]; // 803A2BAC
  if (crb(c,2)) { goto L_803A2CD8; } // 803A2BB0
  c->r[5]=0u+0x80430000u; // 803A2BB4
  c->r[5]=c->r[5]+0x00007368u; // 803A2BB8
  c->r[4]=c->r[5]+0x00000024u; // 803A2BBC
  W32(c->r[3]+0x00000000u,c->r[5]); // 803A2BC0
  c->r[0]=c->r[5]+0x00000038u; // 803A2BC4
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 803A2BC8
  W32(c->r[3]+0x00000088u,c->r[0]); // 803A2BCC
  c->lr=0x803A2BD4u; f_803ABEB8(c); // 803A2BD0
  c->r[3]=c->r[3]+0x00000354u; // 803A2BD4
  c->lr=0x803A2BDCu; f_8025FCCC(c); // 803A2BD8
  c->r[0]=R8(c->r[27]+0x0000008Du); // 803A2BDC
  cmps(c,0,(int32_t)c->r[0],0); // 803A2BE0
  if (crb(c,2)) { goto L_803A2C0C; } // 803A2BE4
  cmps(c,0,(int32_t)c->r[27],0); // 803A2BE8
  c->r[30]=c->r[27]|c->r[27]; // 803A2BEC
  if (crb(c,2)) { goto L_803A2BF8; } // 803A2BF0
  c->r[30]=c->r[27]+0x00000080u; // 803A2BF4
L_803A2BF8:;
  c->lr=0x803A2BFCu; f_803ABEB8(c); // 803A2BF8
  c->r[4]=c->r[30]|c->r[30]; // 803A2BFC
  c->lr=0x803A2C04u; f_803AC2EC(c); // 803A2C00
  c->r[0]=0u+0x00000000u; // 803A2C04
  W8(c->r[27]+0x0000008Du,c->r[0]); // 803A2C08
L_803A2C0C:;
  c->r[0]=R8(c->r[27]+0x0000008Cu); // 803A2C0C
  cmps(c,0,(int32_t)c->r[0],0); // 803A2C10
  if (crb(c,2)) { goto L_803A2C3C; } // 803A2C14
  cmps(c,0,(int32_t)c->r[27],0); // 803A2C18
  c->r[30]=c->r[27]|c->r[27]; // 803A2C1C
  if (crb(c,2)) { goto L_803A2C28; } // 803A2C20
  c->r[30]=c->r[27]+0x00000074u; // 803A2C24
L_803A2C28:;
  c->lr=0x803A2C2Cu; f_8039DC24(c); // 803A2C28
  c->r[4]=c->r[30]|c->r[30]; // 803A2C2C
  c->lr=0x803A2C34u; f_8039DD38(c); // 803A2C30
  c->r[0]=0u+0x00000000u; // 803A2C34
  W8(c->r[27]+0x0000008Cu,c->r[0]); // 803A2C38
L_803A2C3C:;
  c->r[29]=c->r[27]|c->r[27]; // 803A2C3C
  c->r[30]=0u+0x00000000u; // 803A2C40
  c->r[31]=0u+0x00000000u; // 803A2C44
L_803A2C48:;
  c->lr=0x803A2C4Cu; f_803ABEB8(c); // 803A2C48
  c->r[3]=c->r[3]+0x00000354u; // 803A2C4C
  c->lr=0x803A2C54u; f_8025FCCC(c); // 803A2C50
  cmps(c,0,(int32_t)c->r[30],15); // 803A2C54
  if (!crb(c,1)) { goto L_803A2C64; } // 803A2C58
  c->r[3]=0u+0x00000000u; // 803A2C5C
  goto L_803A2C68; // 803A2C60
L_803A2C64:;
  c->r[3]=R32(c->r[29]+0x000000B8u); // 803A2C64
L_803A2C68:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A2C68
  if (!crb(c,2)) { goto L_803A2C80; } // 803A2C6C
  c->lr=0x803A2C74u; f_803ABEB8(c); // 803A2C70
  c->r[3]=c->r[3]+0x00000354u; // 803A2C74
  c->lr=0x803A2C7Cu; f_8025FDA8(c); // 803A2C78
  goto L_803A2CAC; // 803A2C7C
L_803A2C80:;
  c->lr=0x803A2C84u; f_803A49BC(c); // 803A2C80
  c->r[3]=R32(c->r[27]+0x000000B4u); // 803A2C84
  c->r[4]=R32(c->r[29]+0x000000B8u); // 803A2C88
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A2C8C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A2C90
  c->ctr=c->r[12]; // 803A2C94
  if (true) { c->lr=0x803A2C9Cu; dispatch(c,c->ctr); } // 803A2C98
  W32(c->r[29]+0x000000B8u,c->r[31]); // 803A2C9C
  c->lr=0x803A2CA4u; f_803ABEB8(c); // 803A2CA0
  c->r[3]=c->r[3]+0x00000354u; // 803A2CA4
  c->lr=0x803A2CACu; f_8025FDA8(c); // 803A2CA8
L_803A2CAC:;
  c->r[30]=c->r[30]+0x00000001u; // 803A2CAC
  c->r[29]=c->r[29]+0x00000004u; // 803A2CB0
  cmps(c,0,(int32_t)c->r[30],16); // 803A2CB4
  if (crb(c,0)) { IRQCHK(c); goto L_803A2C48; } // 803A2CB8
  c->lr=0x803A2CC0u; f_803ABEB8(c); // 803A2CBC
  c->r[3]=c->r[3]+0x00000354u; // 803A2CC0
  c->lr=0x803A2CC8u; f_8025FDA8(c); // 803A2CC4
  cmps(c,0,(int32_t)c->r[28],0); // 803A2CC8
  if (!crb(c,1)) { goto L_803A2CD8; } // 803A2CCC
  c->r[3]=c->r[27]|c->r[27]; // 803A2CD0
  c->lr=0x803A2CD8u; f_802896EC(c); // 803A2CD4
L_803A2CD8:;
  c->r[11]=c->r[1]+0x00000020u; // 803A2CD8
  c->r[3]=c->r[27]|c->r[27]; // 803A2CDC
  c->lr=0x803A2CE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A2CE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A2CE4
  c->lr=c->r[0]; // 803A2CE8
  c->r[1]=c->r[1]+0x00000020u; // 803A2CEC
  return; // 803A2CF0
}

// fn_803A2CF4
void f_803A2CF4(Ctx* __restrict c) {
  trace_call(0x803A2CF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A2CF4
  c->r[0]=c->lr; // 803A2CF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A2CFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A2D00
  c->r[31]=c->r[3]|c->r[3]; // 803A2D04
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A2D08
  c->r[30]=c->r[5]|c->r[5]; // 803A2D0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A2D10
  c->r[29]=c->r[4]|c->r[4]; // 803A2D14
  c->lr=0x803A2D1Cu; f_8039B978(c); // 803A2D18
  c->r[3]=0u+0x00010000u; // 803A2D1C
  c->r[9]=0u+0x00000000u; // 803A2D20
  c->r[7]=0u+0x00000030u; // 803A2D24
  {uint32_t ea=c->r[2]+0xFFFFEEA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A2D28
  c->r[3]=c->r[3]+0xFFFFEA60u; // 803A2D2C
  {uint32_t ea=c->r[2]+0xFFFFEEACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A2D30
  c->r[4]=divw((int32_t)c->r[3],(int32_t)c->r[7]); // 803A2D34
  c->r[8]=0u+0x00000078u; // 803A2D38
  c->r[3]=0u+0x55550000u; // 803A2D3C
  W8(c->r[31]+0x0000008Du,c->r[9]); // 803A2D40
  c->r[6]=0u+0x0000007Fu; // 803A2D44
  c->r[3]=c->r[3]+0x00005556u; // 803A2D48
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[4])>>32); // 803A2D4C
  c->r[5]=0u+0x00000040u; // 803A2D50
  W8(c->r[31]+0x0000008Eu,c->r[9]); // 803A2D54
  c->r[0]=0u+0xFFFFFFFFu; // 803A2D58
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 803A2D5C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 803A2D60
  c->r[3]=c->r[4]+c->r[3]; // 803A2D64
  W32(c->r[31]+0x0000009Cu,c->r[9]); // 803A2D68
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 803A2D6C
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[1]);} // 803A2D70
  W32(c->r[31]+0x00000118u,c->r[9]); // 803A2D74
  W32(c->r[31]+0x000000A4u,c->r[29]); // 803A2D78
  W16(c->r[31]+0x000000ACu,c->r[8]); // 803A2D7C
  W8(c->r[31]+0x000000AAu,c->r[7]); // 803A2D80
  W8(c->r[31]+0x000000A8u,c->r[6]); // 803A2D84
  W8(c->r[31]+0x000000A9u,c->r[5]); // 803A2D88
  W32(c->r[31]+0x000000B0u,c->r[30]); // 803A2D8C
  W16(c->r[31]+0x00000098u,c->r[3]); // 803A2D90
  W16(c->r[31]+0x000000F8u,c->r[0]); // 803A2D94
  W16(c->r[31]+0x000000FAu,c->r[0]); // 803A2D98
  W16(c->r[31]+0x000000FCu,c->r[0]); // 803A2D9C
  W16(c->r[31]+0x000000FEu,c->r[0]); // 803A2DA0
  W16(c->r[31]+0x00000100u,c->r[0]); // 803A2DA4
  W16(c->r[31]+0x00000102u,c->r[0]); // 803A2DA8
  W16(c->r[31]+0x00000104u,c->r[0]); // 803A2DAC
  W16(c->r[31]+0x00000106u,c->r[0]); // 803A2DB0
  W16(c->r[31]+0x00000108u,c->r[0]); // 803A2DB4
  W16(c->r[31]+0x0000010Au,c->r[0]); // 803A2DB8
  W16(c->r[31]+0x0000010Cu,c->r[0]); // 803A2DBC
  W16(c->r[31]+0x0000010Eu,c->r[0]); // 803A2DC0
  W16(c->r[31]+0x00000110u,c->r[0]); // 803A2DC4
  W16(c->r[31]+0x00000112u,c->r[0]); // 803A2DC8
  W16(c->r[31]+0x00000114u,c->r[0]); // 803A2DCC
  W16(c->r[31]+0x00000116u,c->r[0]); // 803A2DD0
  c->r[0]=0u+0x00000000u; // 803A2DD4
  W32(c->r[31]+0x000000B8u,c->r[0]); // 803A2DD8
  W32(c->r[31]+0x000000BCu,c->r[0]); // 803A2DDC
  W32(c->r[31]+0x000000C0u,c->r[0]); // 803A2DE0
  W32(c->r[31]+0x000000C4u,c->r[0]); // 803A2DE4
  W32(c->r[31]+0x000000C8u,c->r[0]); // 803A2DE8
  W32(c->r[31]+0x000000CCu,c->r[0]); // 803A2DEC
  W32(c->r[31]+0x000000D0u,c->r[0]); // 803A2DF0
  W32(c->r[31]+0x000000D4u,c->r[0]); // 803A2DF4
  W32(c->r[31]+0x000000D8u,c->r[0]); // 803A2DF8
  W32(c->r[31]+0x000000DCu,c->r[0]); // 803A2DFC
  W32(c->r[31]+0x000000E0u,c->r[0]); // 803A2E00
  W32(c->r[31]+0x000000E4u,c->r[0]); // 803A2E04
  W32(c->r[31]+0x000000E8u,c->r[0]); // 803A2E08
  W32(c->r[31]+0x000000ECu,c->r[0]); // 803A2E0C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 803A2E10
  W32(c->r[31]+0x000000F4u,c->r[0]); // 803A2E14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A2E18
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A2E1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A2E20
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A2E24
  c->lr=c->r[0]; // 803A2E28
  c->r[1]=c->r[1]+0x00000020u; // 803A2E2C
  return; // 803A2E30
}

// fn_803A2E34
void f_803A2E34(Ctx* __restrict c) {
  trace_call(0x803A2E34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A2E34
  c->r[0]=c->lr; // 803A2E38
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A2E3C
  c->r[11]=c->r[1]+0x00000030u; // 803A2E40
  c->lr=0x803A2E48u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A2E44
  c->r[29]=c->r[3]|c->r[3]; // 803A2E48
  c->r[30]=c->r[4]|c->r[4]; // 803A2E4C
  c->r[31]=c->r[5]|c->r[5]; // 803A2E50
  c->r[24]=c->r[6]|c->r[6]; // 803A2E54
  c->r[25]=c->r[7]|c->r[7]; // 803A2E58
  c->lr=0x803A2E60u; f_803ABEB8(c); // 803A2E5C
  c->r[3]=c->r[3]+0x00000354u; // 803A2E60
  c->lr=0x803A2E68u; f_8025FCCC(c); // 803A2E64
  c->lr=0x803A2E6Cu; f_803ABEB8(c); // 803A2E68
  c->r[3]=c->r[3]+0x00000354u; // 803A2E6C
  c->lr=0x803A2E74u; f_8025FCCC(c); // 803A2E70
  c->r[0]=R8(c->r[29]+0x0000008Du); // 803A2E74
  cmps(c,0,(int32_t)c->r[0],0); // 803A2E78
  if (crb(c,2)) { goto L_803A2EA4; } // 803A2E7C
  cmps(c,0,(int32_t)c->r[29],0); // 803A2E80
  c->r[27]=c->r[29]|c->r[29]; // 803A2E84
  if (crb(c,2)) { goto L_803A2E90; } // 803A2E88
  c->r[27]=c->r[29]+0x00000080u; // 803A2E8C
L_803A2E90:;
  c->lr=0x803A2E94u; f_803ABEB8(c); // 803A2E90
  c->r[4]=c->r[27]|c->r[27]; // 803A2E94
  c->lr=0x803A2E9Cu; f_803AC2EC(c); // 803A2E98
  c->r[0]=0u+0x00000000u; // 803A2E9C
  W8(c->r[29]+0x0000008Du,c->r[0]); // 803A2EA0
L_803A2EA4:;
  c->r[0]=R8(c->r[29]+0x0000008Cu); // 803A2EA4
  cmps(c,0,(int32_t)c->r[0],0); // 803A2EA8
  if (crb(c,2)) { goto L_803A2ED4; } // 803A2EAC
  cmps(c,0,(int32_t)c->r[29],0); // 803A2EB0
  c->r[27]=c->r[29]|c->r[29]; // 803A2EB4
  if (crb(c,2)) { goto L_803A2EC0; } // 803A2EB8
  c->r[27]=c->r[29]+0x00000074u; // 803A2EBC
L_803A2EC0:;
  c->lr=0x803A2EC4u; f_8039DC24(c); // 803A2EC0
  c->r[4]=c->r[27]|c->r[27]; // 803A2EC4
  c->lr=0x803A2ECCu; f_8039DD38(c); // 803A2EC8
  c->r[0]=0u+0x00000000u; // 803A2ECC
  W8(c->r[29]+0x0000008Cu,c->r[0]); // 803A2ED0
L_803A2ED4:;
  c->r[26]=c->r[29]|c->r[29]; // 803A2ED4
  c->r[27]=0u+0x00000000u; // 803A2ED8
  c->r[28]=0u+0x00000000u; // 803A2EDC
L_803A2EE0:;
  c->lr=0x803A2EE4u; f_803ABEB8(c); // 803A2EE0
  c->r[3]=c->r[3]+0x00000354u; // 803A2EE4
  c->lr=0x803A2EECu; f_8025FCCC(c); // 803A2EE8
  cmps(c,0,(int32_t)c->r[27],15); // 803A2EEC
  if (!crb(c,1)) { goto L_803A2EFC; } // 803A2EF0
  c->r[3]=0u+0x00000000u; // 803A2EF4
  goto L_803A2F00; // 803A2EF8
L_803A2EFC:;
  c->r[3]=R32(c->r[26]+0x000000B8u); // 803A2EFC
L_803A2F00:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A2F00
  if (!crb(c,2)) { goto L_803A2F18; } // 803A2F04
  c->lr=0x803A2F0Cu; f_803ABEB8(c); // 803A2F08
  c->r[3]=c->r[3]+0x00000354u; // 803A2F0C
  c->lr=0x803A2F14u; f_8025FDA8(c); // 803A2F10
  goto L_803A2F44; // 803A2F14
L_803A2F18:;
  c->lr=0x803A2F1Cu; f_803A49BC(c); // 803A2F18
  c->r[3]=R32(c->r[29]+0x000000B4u); // 803A2F1C
  c->r[4]=R32(c->r[26]+0x000000B8u); // 803A2F20
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A2F24
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A2F28
  c->ctr=c->r[12]; // 803A2F2C
  if (true) { c->lr=0x803A2F34u; dispatch(c,c->ctr); } // 803A2F30
  W32(c->r[26]+0x000000B8u,c->r[28]); // 803A2F34
  c->lr=0x803A2F3Cu; f_803ABEB8(c); // 803A2F38
  c->r[3]=c->r[3]+0x00000354u; // 803A2F3C
  c->lr=0x803A2F44u; f_8025FDA8(c); // 803A2F40
L_803A2F44:;
  c->r[27]=c->r[27]+0x00000001u; // 803A2F44
  c->r[26]=c->r[26]+0x00000004u; // 803A2F48
  cmps(c,0,(int32_t)c->r[27],16); // 803A2F4C
  if (crb(c,0)) { IRQCHK(c); goto L_803A2EE0; } // 803A2F50
  c->lr=0x803A2F58u; f_803ABEB8(c); // 803A2F54
  c->r[3]=c->r[3]+0x00000354u; // 803A2F58
  c->lr=0x803A2F60u; f_8025FDA8(c); // 803A2F5C
  c->r[3]=c->r[29]|c->r[29]; // 803A2F60
  c->r[4]=c->r[24]|c->r[24]; // 803A2F64
  c->r[5]=c->r[25]|c->r[25]; // 803A2F68
  c->lr=0x803A2F70u; f_803A2CF4(c); // 803A2F6C
  c->lr=0x803A2F74u; f_8025EA10(c); // 803A2F70
  c->r[28]=c->r[3]|c->r[3]; // 803A2F74
  c->r[3]=c->r[31]|c->r[31]; // 803A2F78
  c->r[26]=0u+0x00000000u; // 803A2F7C
  goto L_803A2F94; // 803A2F80
L_803A2F84:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 803A2F84
  if (crb(c,2)) { goto L_803A2F90; } // 803A2F88
  c->r[26]=c->r[26]+0x00000001u; // 803A2F8C
L_803A2F90:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 803A2F90
L_803A2F94:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A2F94
  if (!crb(c,2)) { IRQCHK(c); goto L_803A2F84; } // 803A2F98
  c->r[12]=R32(c->r[30]+0x00000000u); // 803A2F9C
  c->r[3]=c->r[30]|c->r[30]; // 803A2FA0
  c->r[12]=R32(c->r[12]+0x00000014u); // 803A2FA4
  c->ctr=c->r[12]; // 803A2FA8
  if (true) { c->lr=0x803A2FB0u; dispatch(c,c->ctr); } // 803A2FAC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 803A2FB0
  if (!crb(c,1)) { goto L_803A2FD4; } // 803A2FB4
  c->r[3]=c->r[28]|c->r[28]; // 803A2FB8
  c->lr=0x803A2FC0u; f_8025EA38(c); // 803A2FBC
  c->lr=0x803A2FC4u; f_803ABEB8(c); // 803A2FC0
  c->r[3]=c->r[3]+0x00000354u; // 803A2FC4
  c->lr=0x803A2FCCu; f_8025FDA8(c); // 803A2FC8
  c->r[3]=0u+0x00000001u; // 803A2FCC
  goto L_803A3098; // 803A2FD0
L_803A2FD4:;
  c->r[27]=c->r[29]|c->r[29]; // 803A2FD4
  c->r[26]=0u+0x00000000u; // 803A2FD8
  goto L_803A3050; // 803A2FDC
L_803A2FE0:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 803A2FE0
  if (crb(c,2)) { goto L_803A3044; } // 803A2FE4
  c->r[12]=R32(c->r[30]+0x00000000u); // 803A2FE8
  c->r[3]=c->r[30]|c->r[30]; // 803A2FEC
  c->r[4]=c->r[29]|c->r[29]; // 803A2FF0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A2FF4
  c->ctr=c->r[12]; // 803A2FF8
  if (true) { c->lr=0x803A3000u; dispatch(c,c->ctr); } // 803A2FFC
  c->r[25]=c->r[3]|c->r[3]; // 803A3000
  c->lr=0x803A3008u; f_803ABEB8(c); // 803A3004
  c->r[3]=c->r[3]+0x00000354u; // 803A3008
  c->lr=0x803A3010u; f_8025FCCC(c); // 803A300C
  cmps(c,0,(int32_t)c->r[26],15); // 803A3010
  if (!crb(c,1)) { goto L_803A3028; } // 803A3014
  c->lr=0x803A301Cu; f_803ABEB8(c); // 803A3018
  c->r[3]=c->r[3]+0x00000354u; // 803A301C
  c->lr=0x803A3024u; f_8025FDA8(c); // 803A3020
  goto L_803A3044; // 803A3024
L_803A3028:;
  W32(c->r[27]+0x000000B8u,c->r[25]); // 803A3028
  c->r[3]=c->r[25]|c->r[25]; // 803A302C
  c->r[4]=c->r[26]|c->r[26]; // 803A3030
  c->lr=0x803A3038u; f_803A46D0(c); // 803A3034
  c->lr=0x803A303Cu; f_803ABEB8(c); // 803A3038
  c->r[3]=c->r[3]+0x00000354u; // 803A303C
  c->lr=0x803A3044u; f_8025FDA8(c); // 803A3040
L_803A3044:;
  c->r[31]=rotl(c->r[31],31)&0x7FFFFFFFu; // 803A3044
  c->r[27]=c->r[27]+0x00000004u; // 803A3048
  c->r[26]=c->r[26]+0x00000001u; // 803A304C
L_803A3050:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A3050
  if (!crb(c,2)) { IRQCHK(c); goto L_803A2FE0; } // 803A3054
  c->r[3]=c->r[28]|c->r[28]; // 803A3058
  c->lr=0x803A3060u; f_8025EA38(c); // 803A305C
  cmps(c,0,(int32_t)c->r[29],0); // 803A3060
  c->r[27]=c->r[29]|c->r[29]; // 803A3064
  if (crb(c,2)) { goto L_803A3070; } // 803A3068
  c->r[27]=c->r[29]+0x00000074u; // 803A306C
L_803A3070:;
  c->lr=0x803A3074u; f_8039DC24(c); // 803A3070
  c->r[4]=c->r[27]|c->r[27]; // 803A3074
  c->lr=0x803A307Cu; f_8039DD08(c); // 803A3078
  c->r[0]=0u+0x00000001u; // 803A307C
  W32(c->r[29]+0x000000B4u,c->r[30]); // 803A3080
  W8(c->r[29]+0x0000008Cu,c->r[0]); // 803A3084
  c->lr=0x803A308Cu; f_803ABEB8(c); // 803A3088
  c->r[3]=c->r[3]+0x00000354u; // 803A308C
  c->lr=0x803A3094u; f_8025FDA8(c); // 803A3090
  c->r[3]=0u+0x00000000u; // 803A3094
L_803A3098:;
  c->r[11]=c->r[1]+0x00000030u; // 803A3098
  c->lr=0x803A30A0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A309C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A30A0
  c->lr=c->r[0]; // 803A30A4
  c->r[1]=c->r[1]+0x00000030u; // 803A30A8
  return; // 803A30AC
}

// SetSeqData__Q44nw4r3snd6detail9SeqPlayerFPCvl
void f_803A30B0(Ctx* __restrict c) {
  trace_call(0x803A30B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A30B0
  c->r[0]=c->lr; // 803A30B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A30B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A30BC
  c->r[31]=c->r[3]|c->r[3]; // 803A30C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A30C4
  c->r[30]=c->r[5]|c->r[5]; // 803A30C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A30CC
  c->r[29]=c->r[4]|c->r[4]; // 803A30D0
  c->lr=0x803A30D8u; f_803ABEB8(c); // 803A30D4
  c->r[3]=c->r[3]+0x00000354u; // 803A30D8
  c->lr=0x803A30E0u; f_8025FCCC(c); // 803A30DC
  cmps(c,0,(int32_t)c->r[29],0); // 803A30E0
  c->r[31]=R32(c->r[31]+0x000000B8u); // 803A30E4
  if (crb(c,2)) { goto L_803A3104; } // 803A30E8
  c->r[3]=c->r[31]|c->r[31]; // 803A30EC
  c->r[4]=c->r[29]|c->r[29]; // 803A30F0
  c->r[5]=c->r[30]|c->r[30]; // 803A30F4
  c->lr=0x803A30FCu; f_803A49A0(c); // 803A30F8
  c->r[3]=c->r[31]|c->r[31]; // 803A30FC
  c->lr=0x803A3104u; f_803A49B0(c); // 803A3100
L_803A3104:;
  c->lr=0x803A3108u; f_803ABEB8(c); // 803A3104
  c->r[3]=c->r[3]+0x00000354u; // 803A3108
  c->lr=0x803A3110u; f_8025FDA8(c); // 803A310C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A3110
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A3114
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A3118
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A311C
  c->lr=c->r[0]; // 803A3120
  c->r[1]=c->r[1]+0x00000020u; // 803A3124
  return; // 803A3128
}

// fn_803A312C
void f_803A312C(Ctx* __restrict c) {
  trace_call(0x803A312Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A312C
  c->r[0]=c->lr; // 803A3130
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A3134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A3138
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A313C
  c->r[30]=c->r[3]|c->r[3]; // 803A3140
  c->lr=0x803A3148u; f_803ABEB8(c); // 803A3144
  c->r[3]=c->r[3]+0x00000354u; // 803A3148
  c->lr=0x803A3150u; f_8025FCCC(c); // 803A314C
  cmps(c,0,(int32_t)c->r[30],0); // 803A3150
  c->r[31]=c->r[30]|c->r[30]; // 803A3154
  if (crb(c,2)) { goto L_803A3160; } // 803A3158
  c->r[31]=c->r[30]+0x00000080u; // 803A315C
L_803A3160:;
  c->lr=0x803A3164u; f_803ABEB8(c); // 803A3160
  c->r[4]=c->r[31]|c->r[31]; // 803A3164
  c->lr=0x803A316Cu; f_803AC284(c); // 803A3168
  c->r[0]=0u+0x00000001u; // 803A316C
  W8(c->r[30]+0x0000008Du,c->r[0]); // 803A3170
  c->lr=0x803A3178u; f_803ABEB8(c); // 803A3174
  c->r[3]=c->r[3]+0x00000354u; // 803A3178
  c->lr=0x803A3180u; f_8025FDA8(c); // 803A317C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A3180
  c->r[3]=0u+0x00000001u; // 803A3184
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A3188
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A318C
  c->lr=c->r[0]; // 803A3190
  c->r[1]=c->r[1]+0x00000010u; // 803A3194
  return; // 803A3198
}

// Stop__Q44nw4r3snd6detail9SeqPlayerFv
void f_803A319C(Ctx* __restrict c) {
  trace_call(0x803A319Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A319C
  c->r[0]=c->lr; // 803A31A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A31A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A31A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A31AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A31B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A31B4
  c->r[28]=c->r[3]|c->r[3]; // 803A31B8
  c->lr=0x803A31C0u; f_803ABEB8(c); // 803A31BC
  c->r[3]=c->r[3]+0x00000354u; // 803A31C0
  c->lr=0x803A31C8u; f_8025FCCC(c); // 803A31C4
  c->lr=0x803A31CCu; f_803ABEB8(c); // 803A31C8
  c->r[3]=c->r[3]+0x00000354u; // 803A31CC
  c->lr=0x803A31D4u; f_8025FCCC(c); // 803A31D0
  c->r[0]=R8(c->r[28]+0x0000008Du); // 803A31D4
  cmps(c,0,(int32_t)c->r[0],0); // 803A31D8
  if (crb(c,2)) { goto L_803A3204; } // 803A31DC
  cmps(c,0,(int32_t)c->r[28],0); // 803A31E0
  c->r[30]=c->r[28]|c->r[28]; // 803A31E4
  if (crb(c,2)) { goto L_803A31F0; } // 803A31E8
  c->r[30]=c->r[28]+0x00000080u; // 803A31EC
L_803A31F0:;
  c->lr=0x803A31F4u; f_803ABEB8(c); // 803A31F0
  c->r[4]=c->r[30]|c->r[30]; // 803A31F4
  c->lr=0x803A31FCu; f_803AC2EC(c); // 803A31F8
  c->r[0]=0u+0x00000000u; // 803A31FC
  W8(c->r[28]+0x0000008Du,c->r[0]); // 803A3200
L_803A3204:;
  c->r[0]=R8(c->r[28]+0x0000008Cu); // 803A3204
  cmps(c,0,(int32_t)c->r[0],0); // 803A3208
  if (crb(c,2)) { goto L_803A3234; } // 803A320C
  cmps(c,0,(int32_t)c->r[28],0); // 803A3210
  c->r[30]=c->r[28]|c->r[28]; // 803A3214
  if (crb(c,2)) { goto L_803A3220; } // 803A3218
  c->r[30]=c->r[28]+0x00000074u; // 803A321C
L_803A3220:;
  c->lr=0x803A3224u; f_8039DC24(c); // 803A3220
  c->r[4]=c->r[30]|c->r[30]; // 803A3224
  c->lr=0x803A322Cu; f_8039DD38(c); // 803A3228
  c->r[0]=0u+0x00000000u; // 803A322C
  W8(c->r[28]+0x0000008Cu,c->r[0]); // 803A3230
L_803A3234:;
  c->r[29]=c->r[28]|c->r[28]; // 803A3234
  c->r[30]=0u+0x00000000u; // 803A3238
  c->r[31]=0u+0x00000000u; // 803A323C
L_803A3240:;
  c->lr=0x803A3244u; f_803ABEB8(c); // 803A3240
  c->r[3]=c->r[3]+0x00000354u; // 803A3244
  c->lr=0x803A324Cu; f_8025FCCC(c); // 803A3248
  cmps(c,0,(int32_t)c->r[30],15); // 803A324C
  if (!crb(c,1)) { goto L_803A325C; } // 803A3250
  c->r[3]=0u+0x00000000u; // 803A3254
  goto L_803A3260; // 803A3258
L_803A325C:;
  c->r[3]=R32(c->r[29]+0x000000B8u); // 803A325C
L_803A3260:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A3260
  if (!crb(c,2)) { goto L_803A3278; } // 803A3264
  c->lr=0x803A326Cu; f_803ABEB8(c); // 803A3268
  c->r[3]=c->r[3]+0x00000354u; // 803A326C
  c->lr=0x803A3274u; f_8025FDA8(c); // 803A3270
  goto L_803A32A4; // 803A3274
L_803A3278:;
  c->lr=0x803A327Cu; f_803A49BC(c); // 803A3278
  c->r[3]=R32(c->r[28]+0x000000B4u); // 803A327C
  c->r[4]=R32(c->r[29]+0x000000B8u); // 803A3280
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A3284
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A3288
  c->ctr=c->r[12]; // 803A328C
  if (true) { c->lr=0x803A3294u; dispatch(c,c->ctr); } // 803A3290
  W32(c->r[29]+0x000000B8u,c->r[31]); // 803A3294
  c->lr=0x803A329Cu; f_803ABEB8(c); // 803A3298
  c->r[3]=c->r[3]+0x00000354u; // 803A329C
  c->lr=0x803A32A4u; f_8025FDA8(c); // 803A32A0
L_803A32A4:;
  c->r[30]=c->r[30]+0x00000001u; // 803A32A4
  c->r[29]=c->r[29]+0x00000004u; // 803A32A8
  cmps(c,0,(int32_t)c->r[30],16); // 803A32AC
  if (crb(c,0)) { IRQCHK(c); goto L_803A3240; } // 803A32B0
  c->lr=0x803A32B8u; f_803ABEB8(c); // 803A32B4
  c->r[3]=c->r[3]+0x00000354u; // 803A32B8
  c->lr=0x803A32C0u; f_8025FDA8(c); // 803A32BC
  c->lr=0x803A32C4u; f_803ABEB8(c); // 803A32C0
  c->r[3]=c->r[3]+0x00000354u; // 803A32C4
  c->lr=0x803A32CCu; f_8025FDA8(c); // 803A32C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A32CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A32D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A32D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A32D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A32DC
  c->lr=c->r[0]; // 803A32E0
  c->r[1]=c->r[1]+0x00000020u; // 803A32E4
  return; // 803A32E8
}

// Pause__Q44nw4r3snd6detail9SeqPlayerFb
void f_803A32EC(Ctx* __restrict c) {
  trace_call(0x803A32ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A32EC
  c->r[0]=c->lr; // 803A32F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A32F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A32F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A32FC
  c->r[30]=c->r[4]|c->r[4]; // 803A3300
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A3304
  c->r[29]=c->r[3]|c->r[3]; // 803A3308
  c->lr=0x803A3310u; f_803ABEB8(c); // 803A330C
  c->r[3]=c->r[3]+0x00000354u; // 803A3310
  c->lr=0x803A3318u; f_8025FCCC(c); // 803A3314
  W8(c->r[29]+0x0000008Eu,c->r[30]); // 803A3318
  c->r[31]=0u+0x00000000u; // 803A331C
L_803A3320:;
  cmps(c,0,(int32_t)c->r[31],15); // 803A3320
  if (!crb(c,1)) { goto L_803A3330; } // 803A3324
  c->r[3]=0u+0x00000000u; // 803A3328
  goto L_803A3334; // 803A332C
L_803A3330:;
  c->r[3]=R32(c->r[29]+0x000000B8u); // 803A3330
L_803A3334:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A3334
  if (crb(c,2)) { goto L_803A3344; } // 803A3338
  c->r[4]=c->r[30]|c->r[30]; // 803A333C
  c->lr=0x803A3344u; f_803A4D30(c); // 803A3340
L_803A3344:;
  c->r[31]=c->r[31]+0x00000001u; // 803A3344
  c->r[29]=c->r[29]+0x00000004u; // 803A3348
  cmps(c,0,(int32_t)c->r[31],16); // 803A334C
  if (crb(c,0)) { IRQCHK(c); goto L_803A3320; } // 803A3350
  c->lr=0x803A3358u; f_803ABEB8(c); // 803A3354
  c->r[3]=c->r[3]+0x00000354u; // 803A3358
  c->lr=0x803A3360u; f_8025FDA8(c); // 803A335C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A3360
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A3364
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A3368
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A336C
  c->lr=c->r[0]; // 803A3370
  c->r[1]=c->r[1]+0x00000020u; // 803A3374
  return; // 803A3378
}

// Skip__Q44nw4r3snd6detail9SeqPlayerFQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
void f_803A337C(Ctx* __restrict c) {
  trace_call(0x803A337Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A337C
  c->r[0]=c->lr; // 803A3380
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A3384
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A3388
  c->r[31]=c->r[5]|c->r[5]; // 803A338C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A3390
  c->r[30]=c->r[4]|c->r[4]; // 803A3394
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A3398
  c->r[29]=c->r[3]|c->r[3]; // 803A339C
  c->lr=0x803A33A4u; f_803ABEB8(c); // 803A33A0
  c->r[3]=c->r[3]+0x00000354u; // 803A33A4
  c->lr=0x803A33ACu; f_8025FCCC(c); // 803A33A8
  c->r[0]=R8(c->r[29]+0x0000008Cu); // 803A33AC
  cmps(c,0,(int32_t)c->r[0],0); // 803A33B0
  if (!crb(c,2)) { goto L_803A33C8; } // 803A33B4
  c->lr=0x803A33BCu; f_803ABEB8(c); // 803A33B8
  c->r[3]=c->r[3]+0x00000354u; // 803A33BC
  c->lr=0x803A33C4u; f_8025FDA8(c); // 803A33C0
  goto L_803A3424; // 803A33C4
L_803A33C8:;
  cmps(c,0,(int32_t)c->r[30],1); // 803A33C8
  if (crb(c,2)) { goto L_803A33F0; } // 803A33CC
  if (!crb(c,0)) { goto L_803A3418; } // 803A33D0
  cmps(c,0,(int32_t)c->r[30],0); // 803A33D4
  if (!crb(c,0)) { goto L_803A33E0; } // 803A33D8
  goto L_803A3418; // 803A33DC
L_803A33E0:;
  c->r[0]=R32(c->r[29]+0x0000009Cu); // 803A33E0
  c->r[0]=c->r[0]+c->r[31]; // 803A33E4
  W32(c->r[29]+0x0000009Cu,c->r[0]); // 803A33E8
  goto L_803A3418; // 803A33EC
L_803A33F0:;
  c->r[3]=c->r[31]^0x80000000u; // 803A33F0
  c->r[0]=0u+0x43300000u; // 803A33F4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803A33F8
  {uint32_t ea=c->r[2]+0xFFFFEEB0u; c->f[2]=RF64(ea);} // 803A33FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A3400
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A3404
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A3408
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A340C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803A3410
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[0]);} // 803A3414
L_803A3418:;
  c->lr=0x803A341Cu; f_803ABEB8(c); // 803A3418
  c->r[3]=c->r[3]+0x00000354u; // 803A341C
  c->lr=0x803A3424u; f_8025FDA8(c); // 803A3420
L_803A3424:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A3424
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A3428
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A342C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A3430
  c->lr=c->r[0]; // 803A3434
  c->r[1]=c->r[1]+0x00000020u; // 803A3438
  return; // 803A343C
}

// fn_803A3440
void f_803A3440(Ctx* __restrict c) {
  trace_call(0x803A3440u);
  W8(c->r[3]+0x000000A9u,c->r[4]); // 803A3440
  return; // 803A3444
}

// fn_803A3448
void f_803A3448(Ctx* __restrict c) {
  trace_call(0x803A3448u);
  W8(c->r[3]+0x0000008Fu,c->r[4]); // 803A3448
  return; // 803A344C
}

// fn_803A3450
void f_803A3450(Ctx* __restrict c) {
  trace_call(0x803A3450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A3450
  c->r[0]=c->lr; // 803A3454
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A3458
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A345C
  c->r[31]=c->r[3]|c->r[3]; // 803A3460
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A3464
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A3468
  c->r[29]=c->r[4]|c->r[4]; // 803A346C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A3470
  c->r[28]=c->r[5]|c->r[5]; // 803A3474
  c->lr=0x803A347Cu; f_803ABEB8(c); // 803A3478
  c->r[3]=c->r[3]+0x00000354u; // 803A347C
  c->lr=0x803A3484u; f_8025FCCC(c); // 803A3480
  c->r[0]=R8(c->r[31]+0x0000008Cu); // 803A3484
  cmps(c,0,(int32_t)c->r[0],0); // 803A3488
  if (crb(c,2)) { goto L_803A35D8; } // 803A348C
  c->r[0]=0u+0x00000010u; // 803A3490
  c->r[4]=c->r[31]|c->r[31]; // 803A3494
  c->r[5]=0u+0x00000000u; // 803A3498
  c->ctr=c->r[0]; // 803A349C
L_803A34A0:;
  cmps(c,0,(int32_t)c->r[5],15); // 803A34A0
  if (!crb(c,1)) { goto L_803A34B0; } // 803A34A4
  c->r[3]=0u+0x00000000u; // 803A34A8
  goto L_803A34B4; // 803A34AC
L_803A34B0:;
  c->r[3]=R32(c->r[4]+0x000000B8u); // 803A34B0
L_803A34B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A34B4
  if (crb(c,2)) { goto L_803A35CC; } // 803A34B8
  c->r[0]=R32(c->r[3]+0x00000050u); // 803A34BC
  cmpu(c,0,c->r[29],c->r[0]); // 803A34C0
  if (crb(c,1)) { goto L_803A35CC; } // 803A34C4
  cmpu(c,0,c->r[0],c->r[28]); // 803A34C8
  if (crb(c,1)) { goto L_803A35CC; } // 803A34CC
  c->lr=0x803A34D4u; f_803ABEB8(c); // 803A34D0
  c->r[3]=c->r[3]+0x00000354u; // 803A34D4
  c->lr=0x803A34DCu; f_8025FCCC(c); // 803A34D8
  c->r[0]=R8(c->r[31]+0x0000008Du); // 803A34DC
  cmps(c,0,(int32_t)c->r[0],0); // 803A34E0
  if (crb(c,2)) { goto L_803A350C; } // 803A34E4
  cmps(c,0,(int32_t)c->r[31],0); // 803A34E8
  c->r[29]=c->r[31]|c->r[31]; // 803A34EC
  if (crb(c,2)) { goto L_803A34F8; } // 803A34F0
  c->r[29]=c->r[31]+0x00000080u; // 803A34F4
L_803A34F8:;
  c->lr=0x803A34FCu; f_803ABEB8(c); // 803A34F8
  c->r[4]=c->r[29]|c->r[29]; // 803A34FC
  c->lr=0x803A3504u; f_803AC2EC(c); // 803A3500
  c->r[0]=0u+0x00000000u; // 803A3504
  W8(c->r[31]+0x0000008Du,c->r[0]); // 803A3508
L_803A350C:;
  c->r[0]=R8(c->r[31]+0x0000008Cu); // 803A350C
  cmps(c,0,(int32_t)c->r[0],0); // 803A3510
  if (crb(c,2)) { goto L_803A353C; } // 803A3514
  cmps(c,0,(int32_t)c->r[31],0); // 803A3518
  c->r[29]=c->r[31]|c->r[31]; // 803A351C
  if (crb(c,2)) { goto L_803A3528; } // 803A3520
  c->r[29]=c->r[31]+0x00000074u; // 803A3524
L_803A3528:;
  c->lr=0x803A352Cu; f_8039DC24(c); // 803A3528
  c->r[4]=c->r[29]|c->r[29]; // 803A352C
  c->lr=0x803A3534u; f_8039DD38(c); // 803A3530
  c->r[0]=0u+0x00000000u; // 803A3534
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 803A3538
L_803A353C:;
  c->r[28]=c->r[31]|c->r[31]; // 803A353C
  c->r[29]=0u+0x00000000u; // 803A3540
  c->r[30]=0u+0x00000000u; // 803A3544
L_803A3548:;
  c->lr=0x803A354Cu; f_803ABEB8(c); // 803A3548
  c->r[3]=c->r[3]+0x00000354u; // 803A354C
  c->lr=0x803A3554u; f_8025FCCC(c); // 803A3550
  cmps(c,0,(int32_t)c->r[29],15); // 803A3554
  if (!crb(c,1)) { goto L_803A3564; } // 803A3558
  c->r[3]=0u+0x00000000u; // 803A355C
  goto L_803A3568; // 803A3560
L_803A3564:;
  c->r[3]=R32(c->r[28]+0x000000B8u); // 803A3564
L_803A3568:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A3568
  if (!crb(c,2)) { goto L_803A3580; } // 803A356C
  c->lr=0x803A3574u; f_803ABEB8(c); // 803A3570
  c->r[3]=c->r[3]+0x00000354u; // 803A3574
  c->lr=0x803A357Cu; f_8025FDA8(c); // 803A3578
  goto L_803A35AC; // 803A357C
L_803A3580:;
  c->lr=0x803A3584u; f_803A49BC(c); // 803A3580
  c->r[3]=R32(c->r[31]+0x000000B4u); // 803A3584
  c->r[4]=R32(c->r[28]+0x000000B8u); // 803A3588
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A358C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A3590
  c->ctr=c->r[12]; // 803A3594
  if (true) { c->lr=0x803A359Cu; dispatch(c,c->ctr); } // 803A3598
  W32(c->r[28]+0x000000B8u,c->r[30]); // 803A359C
  c->lr=0x803A35A4u; f_803ABEB8(c); // 803A35A0
  c->r[3]=c->r[3]+0x00000354u; // 803A35A4
  c->lr=0x803A35ACu; f_8025FDA8(c); // 803A35A8
L_803A35AC:;
  c->r[29]=c->r[29]+0x00000001u; // 803A35AC
  c->r[28]=c->r[28]+0x00000004u; // 803A35B0
  cmps(c,0,(int32_t)c->r[29],16); // 803A35B4
  if (crb(c,0)) { IRQCHK(c); goto L_803A3548; } // 803A35B8
  c->lr=0x803A35C0u; f_803ABEB8(c); // 803A35BC
  c->r[3]=c->r[3]+0x00000354u; // 803A35C0
  c->lr=0x803A35C8u; f_8025FDA8(c); // 803A35C4
  goto L_803A35D8; // 803A35C8
L_803A35CC:;
  c->r[4]=c->r[4]+0x00000004u; // 803A35CC
  c->r[5]=c->r[5]+0x00000001u; // 803A35D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803A34A0; } // 803A35D4
L_803A35D8:;
  c->lr=0x803A35DCu; f_803ABEB8(c); // 803A35D8
  c->r[3]=c->r[3]+0x00000354u; // 803A35DC
  c->lr=0x803A35E4u; f_8025FDA8(c); // 803A35E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A35E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A35E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A35EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A35F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A35F4
  c->lr=c->r[0]; // 803A35F8
  c->r[1]=c->r[1]+0x00000020u; // 803A35FC
  return; // 803A3600
}

// GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi
void f_803A3604(Ctx* __restrict c) {
  trace_call(0x803A3604u);
  cmps(c,0,(int32_t)c->r[4],15); // 803A3604
  if (!crb(c,1)) { goto L_803A3614; } // 803A3608
  c->r[3]=0u+0x00000000u; // 803A360C
  return; // 803A3610
L_803A3614:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803A3614
  c->r[3]=c->r[3]+c->r[0]; // 803A3618
  c->r[3]=R32(c->r[3]+0x000000B8u); // 803A361C
  return; // 803A3620
}

// ParseNextTick__Q44nw4r3snd6detail9SeqPlayerFb
void f_803A3624(Ctx* __restrict c) {
  trace_call(0x803A3624u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A3624
  c->r[0]=c->lr; // 803A3628
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A362C
  c->r[11]=c->r[1]+0x00000030u; // 803A3630
  c->lr=0x803A3638u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A3634
  c->r[25]=c->r[3]|c->r[3]; // 803A3638
  c->r[26]=c->r[4]|c->r[4]; // 803A363C
  c->lr=0x803A3644u; f_803ABEB8(c); // 803A3640
  c->r[3]=c->r[3]+0x00000354u; // 803A3644
  c->lr=0x803A364Cu; f_8025FCCC(c); // 803A3648
  c->r[29]=c->r[25]|c->r[25]; // 803A364C
  c->r[28]=0u+0x00000000u; // 803A3650
  c->r[27]=0u+0x00000000u; // 803A3654
  c->r[31]=0u+0x00000000u; // 803A3658
L_803A365C:;
  cmps(c,0,(int32_t)c->r[27],15); // 803A365C
  if (!crb(c,1)) { goto L_803A366C; } // 803A3660
  c->r[30]=0u+0x00000000u; // 803A3664
  goto L_803A3670; // 803A3668
L_803A366C:;
  c->r[30]=R32(c->r[29]+0x000000B8u); // 803A366C
L_803A3670:;
  cmps(c,0,(int32_t)c->r[30],0); // 803A3670
  if (crb(c,2)) { goto L_803A3708; } // 803A3674
  c->r[3]=c->r[30]|c->r[30]; // 803A3678
  c->lr=0x803A3680u; f_803A4A8C(c); // 803A367C
  c->r[3]=c->r[30]|c->r[30]; // 803A3680
  c->r[4]=c->r[26]|c->r[26]; // 803A3684
  c->lr=0x803A368Cu; f_803A4B74(c); // 803A3688
  cmps(c,0,(int32_t)c->r[3],0); // 803A368C
  if (!crb(c,0)) { goto L_803A36F8; } // 803A3690
  c->lr=0x803A3698u; f_803ABEB8(c); // 803A3694
  c->r[3]=c->r[3]+0x00000354u; // 803A3698
  c->lr=0x803A36A0u; f_8025FCCC(c); // 803A369C
  cmps(c,0,(int32_t)c->r[27],15); // 803A36A0
  if (!crb(c,1)) { goto L_803A36B0; } // 803A36A4
  c->r[3]=0u+0x00000000u; // 803A36A8
  goto L_803A36B4; // 803A36AC
L_803A36B0:;
  c->r[3]=R32(c->r[29]+0x000000B8u); // 803A36B0
L_803A36B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A36B4
  if (!crb(c,2)) { goto L_803A36CC; } // 803A36B8
  c->lr=0x803A36C0u; f_803ABEB8(c); // 803A36BC
  c->r[3]=c->r[3]+0x00000354u; // 803A36C0
  c->lr=0x803A36C8u; f_8025FDA8(c); // 803A36C4
  goto L_803A36F8; // 803A36C8
L_803A36CC:;
  c->lr=0x803A36D0u; f_803A49BC(c); // 803A36CC
  c->r[3]=R32(c->r[25]+0x000000B4u); // 803A36D0
  c->r[4]=R32(c->r[29]+0x000000B8u); // 803A36D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A36D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A36DC
  c->ctr=c->r[12]; // 803A36E0
  if (true) { c->lr=0x803A36E8u; dispatch(c,c->ctr); } // 803A36E4
  W32(c->r[29]+0x000000B8u,c->r[31]); // 803A36E8
  c->lr=0x803A36F0u; f_803ABEB8(c); // 803A36EC
  c->r[3]=c->r[3]+0x00000354u; // 803A36F0
  c->lr=0x803A36F8u; f_8025FDA8(c); // 803A36F4
L_803A36F8:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 803A36F8
  cmps(c,0,(int32_t)c->r[0],0); // 803A36FC
  if (crb(c,2)) { goto L_803A3708; } // 803A3700
  c->r[28]=0u+0x00000001u; // 803A3704
L_803A3708:;
  c->r[27]=c->r[27]+0x00000001u; // 803A3708
  c->r[29]=c->r[29]+0x00000004u; // 803A370C
  cmps(c,0,(int32_t)c->r[27],16); // 803A3710
  if (crb(c,0)) { IRQCHK(c); goto L_803A365C; } // 803A3714
  cmps(c,0,(int32_t)c->r[28],0); // 803A3718
  if (!crb(c,2)) { goto L_803A3734; } // 803A371C
  c->lr=0x803A3724u; f_803ABEB8(c); // 803A3720
  c->r[3]=c->r[3]+0x00000354u; // 803A3724
  c->lr=0x803A372Cu; f_8025FDA8(c); // 803A3728
  c->r[3]=0u+0x00000001u; // 803A372C
  goto L_803A3744; // 803A3730
L_803A3734:;
  c->lr=0x803A3738u; f_803ABEB8(c); // 803A3734
  c->r[3]=c->r[3]+0x00000354u; // 803A3738
  c->lr=0x803A3740u; f_8025FDA8(c); // 803A373C
  c->r[3]=0u+0x00000000u; // 803A3740
L_803A3744:;
  c->r[11]=c->r[1]+0x00000030u; // 803A3744
  c->lr=0x803A374Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A3748
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A374C
  c->lr=c->r[0]; // 803A3750
  c->r[1]=c->r[1]+0x00000030u; // 803A3754
  return; // 803A3758
}

// GetVariablePtr__Q44nw4r3snd6detail9SeqPlayerFi
void f_803A375C(Ctx* __restrict c) {
  trace_call(0x803A375Cu);
  cmps(c,0,(int32_t)c->r[4],16); // 803A375C
  if (!crb(c,0)) { goto L_803A3774; } // 803A3760
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 803A3764
  c->r[3]=c->r[3]+c->r[0]; // 803A3768
  c->r[3]=c->r[3]+0x000000F8u; // 803A376C
  return; // 803A3770
L_803A3774:;
  cmps(c,0,(int32_t)c->r[4],32); // 803A3774
  c->r[3]=0u+0x00000000u; // 803A3778
  if (!crb(c,0)) return; // 803A377C
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 803A3780
  c->r[3]=0u+0x806C0000u; // 803A3784
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803A3788
  c->r[3]=c->r[3]+0xFFFFDB78u; // 803A378C
  c->r[3]=c->r[3]+c->r[0]; // 803A3790
  return; // 803A3794
}

// fn_803A3798
void f_803A3798(Ctx* __restrict c) {
  trace_call(0x803A3798u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A3798
  c->r[0]=c->lr; // 803A379C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A37A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A37A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A37A8
  c->r[30]=c->r[3]|c->r[3]; // 803A37AC
  c->lr=0x803A37B4u; f_803ABEB8(c); // 803A37B0
  c->r[3]=c->r[3]+0x00000354u; // 803A37B4
  c->lr=0x803A37BCu; f_8025FCCC(c); // 803A37B8
  c->r[0]=R8(c->r[30]+0x0000008Cu); // 803A37BC
  cmps(c,0,(int32_t)c->r[0],0); // 803A37C0
  if (!crb(c,2)) { goto L_803A37D8; } // 803A37C4
  c->lr=0x803A37CCu; f_803ABEB8(c); // 803A37C8
  c->r[3]=c->r[3]+0x00000354u; // 803A37CC
  c->lr=0x803A37D4u; f_8025FDA8(c); // 803A37D0
  goto L_803A3854; // 803A37D4
L_803A37D8:;
  c->r[0]=R8(c->r[30]+0x0000008Du); // 803A37D8
  cmps(c,0,(int32_t)c->r[0],0); // 803A37DC
  if (!crb(c,2)) { goto L_803A37F4; } // 803A37E0
  c->lr=0x803A37E8u; f_803ABEB8(c); // 803A37E4
  c->r[3]=c->r[3]+0x00000354u; // 803A37E8
  c->lr=0x803A37F0u; f_8025FDA8(c); // 803A37EC
  goto L_803A3854; // 803A37F0
L_803A37F4:;
  c->r[3]=c->r[30]|c->r[30]; // 803A37F4
  c->lr=0x803A37FCu; f_803A386C(c); // 803A37F8
  c->lr=0x803A3800u; f_803ABEB8(c); // 803A37FC
  c->r[3]=c->r[3]+0x00000354u; // 803A3800
  c->lr=0x803A3808u; f_8025FCCC(c); // 803A3804
  c->r[31]=0u+0x00000000u; // 803A3808
L_803A380C:;
  cmps(c,0,(int32_t)c->r[31],15); // 803A380C
  if (!crb(c,1)) { goto L_803A381C; } // 803A3810
  c->r[3]=0u+0x00000000u; // 803A3814
  goto L_803A3820; // 803A3818
L_803A381C:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 803A381C
L_803A3820:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A3820
  if (crb(c,2)) { goto L_803A382C; } // 803A3824
  c->lr=0x803A382Cu; f_803A4DC4(c); // 803A3828
L_803A382C:;
  c->r[31]=c->r[31]+0x00000001u; // 803A382C
  c->r[30]=c->r[30]+0x00000004u; // 803A3830
  cmps(c,0,(int32_t)c->r[31],16); // 803A3834
  if (crb(c,0)) { IRQCHK(c); goto L_803A380C; } // 803A3838
  c->lr=0x803A3840u; f_803ABEB8(c); // 803A383C
  c->r[3]=c->r[3]+0x00000354u; // 803A3840
  c->lr=0x803A3848u; f_8025FDA8(c); // 803A3844
  c->lr=0x803A384Cu; f_803ABEB8(c); // 803A3848
  c->r[3]=c->r[3]+0x00000354u; // 803A384C
  c->lr=0x803A3854u; f_8025FDA8(c); // 803A3850
L_803A3854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A3854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A3858
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A385C
  c->lr=c->r[0]; // 803A3860
  c->r[1]=c->r[1]+0x00000010u; // 803A3864
  return; // 803A3868
}

// fn_803A386C
void f_803A386C(Ctx* __restrict c) {
  trace_call(0x803A386Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A386C
  c->r[0]=c->lr; // 803A3870
  W32(c->r[1]+0x00000064u,c->r[0]); // 803A3874
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803A3878
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803A387C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 803A3880
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 803A3884
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 803A3888
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 803A388C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803A3890
  c->r[31]=c->r[3]|c->r[3]; // 803A3894
  W32(c->r[1]+0x00000028u,c->r[30]); // 803A3898
  W32(c->r[1]+0x00000024u,c->r[29]); // 803A389C
  W32(c->r[1]+0x00000020u,c->r[28]); // 803A38A0
  c->r[0]=R8(c->r[3]+0x0000008Cu); // 803A38A4
  cmps(c,0,(int32_t)c->r[0],0); // 803A38A8
  if (crb(c,2)) { goto L_803A3DC4; } // 803A38AC
  c->r[0]=R8(c->r[3]+0x0000008Du); // 803A38B0
  cmps(c,0,(int32_t)c->r[0],0); // 803A38B4
  if (crb(c,2)) { goto L_803A3DC4; } // 803A38B8
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 803A38BC
  cmps(c,0,(int32_t)c->r[0],0); // 803A38C0
  if (!crb(c,2)) { goto L_803A38D8; } // 803A38C4
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A38C8
  {uint32_t ea=c->r[2]+0xFFFFEEACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A38CC
  fcmp(c,0,c->f[1],c->f[0]); // 803A38D0
  if (!crb(c,1)) { goto L_803A3920; } // 803A38D4
L_803A38D8:;
  c->r[28]=c->r[31]|c->r[31]; // 803A38D8
  c->r[30]=0u+0x00000000u; // 803A38DC
L_803A38E0:;
  cmps(c,0,(int32_t)c->r[30],15); // 803A38E0
  if (!crb(c,1)) { goto L_803A38F0; } // 803A38E4
  c->r[29]=0u+0x00000000u; // 803A38E8
  goto L_803A38F4; // 803A38EC
L_803A38F0:;
  c->r[29]=R32(c->r[28]+0x000000B8u); // 803A38F0
L_803A38F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A38F4
  if (crb(c,2)) { goto L_803A3910; } // 803A38F8
  c->r[3]=c->r[29]|c->r[29]; // 803A38FC
  c->r[4]=0u+0x0000007Fu; // 803A3900
  c->lr=0x803A3908u; f_803A4CA0(c); // 803A3904
  c->r[3]=c->r[29]|c->r[29]; // 803A3908
  c->lr=0x803A3910u; f_803A52A8(c); // 803A390C
L_803A3910:;
  c->r[30]=c->r[30]+0x00000001u; // 803A3910
  c->r[28]=c->r[28]+0x00000004u; // 803A3914
  cmps(c,0,(int32_t)c->r[30],16); // 803A3918
  if (crb(c,0)) { IRQCHK(c); goto L_803A38E0; } // 803A391C
L_803A3920:;
  c->r[28]=0u+0x00000000u; // 803A3920
  goto L_803A3A54; // 803A3924
L_803A3928:;
  c->r[5]=R32(c->r[31]+0x0000009Cu); // 803A3928
  c->r[3]=c->r[31]|c->r[31]; // 803A392C
  c->r[4]=0u+0x00000000u; // 803A3930
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 803A3934
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 803A3938
  c->lr=0x803A3940u; f_803A3624(c); // 803A393C
  cmps(c,0,(int32_t)c->r[3],0); // 803A3940
  if (crb(c,2)) { goto L_803A3A44; } // 803A3944
  c->lr=0x803A394Cu; f_803ABEB8(c); // 803A3948
  c->r[3]=c->r[3]+0x00000354u; // 803A394C
  c->lr=0x803A3954u; f_8025FCCC(c); // 803A3950
  c->r[0]=R8(c->r[31]+0x0000008Du); // 803A3954
  cmps(c,0,(int32_t)c->r[0],0); // 803A3958
  if (crb(c,2)) { goto L_803A3984; } // 803A395C
  cmps(c,0,(int32_t)c->r[31],0); // 803A3960
  c->r[29]=c->r[31]|c->r[31]; // 803A3964
  if (crb(c,2)) { goto L_803A3970; } // 803A3968
  c->r[29]=c->r[31]+0x00000080u; // 803A396C
L_803A3970:;
  c->lr=0x803A3974u; f_803ABEB8(c); // 803A3970
  c->r[4]=c->r[29]|c->r[29]; // 803A3974
  c->lr=0x803A397Cu; f_803AC2EC(c); // 803A3978
  c->r[0]=0u+0x00000000u; // 803A397C
  W8(c->r[31]+0x0000008Du,c->r[0]); // 803A3980
L_803A3984:;
  c->r[0]=R8(c->r[31]+0x0000008Cu); // 803A3984
  cmps(c,0,(int32_t)c->r[0],0); // 803A3988
  if (crb(c,2)) { goto L_803A39B4; } // 803A398C
  cmps(c,0,(int32_t)c->r[31],0); // 803A3990
  c->r[29]=c->r[31]|c->r[31]; // 803A3994
  if (crb(c,2)) { goto L_803A39A0; } // 803A3998
  c->r[29]=c->r[31]+0x00000074u; // 803A399C
L_803A39A0:;
  c->lr=0x803A39A4u; f_8039DC24(c); // 803A39A0
  c->r[4]=c->r[29]|c->r[29]; // 803A39A4
  c->lr=0x803A39ACu; f_8039DD38(c); // 803A39A8
  c->r[0]=0u+0x00000000u; // 803A39AC
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 803A39B0
L_803A39B4:;
  c->r[28]=c->r[31]|c->r[31]; // 803A39B4
  c->r[30]=0u+0x00000000u; // 803A39B8
  c->r[29]=0u+0x00000000u; // 803A39BC
L_803A39C0:;
  c->lr=0x803A39C4u; f_803ABEB8(c); // 803A39C0
  c->r[3]=c->r[3]+0x00000354u; // 803A39C4
  c->lr=0x803A39CCu; f_8025FCCC(c); // 803A39C8
  cmps(c,0,(int32_t)c->r[30],15); // 803A39CC
  if (!crb(c,1)) { goto L_803A39DC; } // 803A39D0
  c->r[3]=0u+0x00000000u; // 803A39D4
  goto L_803A39E0; // 803A39D8
L_803A39DC:;
  c->r[3]=R32(c->r[28]+0x000000B8u); // 803A39DC
L_803A39E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A39E0
  if (!crb(c,2)) { goto L_803A39F8; } // 803A39E4
  c->lr=0x803A39ECu; f_803ABEB8(c); // 803A39E8
  c->r[3]=c->r[3]+0x00000354u; // 803A39EC
  c->lr=0x803A39F4u; f_8025FDA8(c); // 803A39F0
  goto L_803A3A24; // 803A39F4
L_803A39F8:;
  c->lr=0x803A39FCu; f_803A49BC(c); // 803A39F8
  c->r[3]=R32(c->r[31]+0x000000B4u); // 803A39FC
  c->r[4]=R32(c->r[28]+0x000000B8u); // 803A3A00
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A3A04
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A3A08
  c->ctr=c->r[12]; // 803A3A0C
  if (true) { c->lr=0x803A3A14u; dispatch(c,c->ctr); } // 803A3A10
  W32(c->r[28]+0x000000B8u,c->r[29]); // 803A3A14
  c->lr=0x803A3A1Cu; f_803ABEB8(c); // 803A3A18
  c->r[3]=c->r[3]+0x00000354u; // 803A3A1C
  c->lr=0x803A3A24u; f_8025FDA8(c); // 803A3A20
L_803A3A24:;
  c->r[30]=c->r[30]+0x00000001u; // 803A3A24
  c->r[28]=c->r[28]+0x00000004u; // 803A3A28
  cmps(c,0,(int32_t)c->r[30],16); // 803A3A2C
  if (crb(c,0)) { IRQCHK(c); goto L_803A39C0; } // 803A3A30
  c->lr=0x803A3A38u; f_803ABEB8(c); // 803A3A34
  c->r[3]=c->r[3]+0x00000354u; // 803A3A38
  c->lr=0x803A3A40u; f_8025FDA8(c); // 803A3A3C
  goto L_803A3DC4; // 803A3A40
L_803A3A44:;
  c->r[3]=R32(c->r[31]+0x00000118u); // 803A3A44
  c->r[28]=c->r[28]+0x00000001u; // 803A3A48
  c->r[0]=c->r[3]+0x00000001u; // 803A3A4C
  W32(c->r[31]+0x00000118u,c->r[0]); // 803A3A50
L_803A3A54:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803A3A54
  cmps(c,0,(int32_t)c->r[0],0); // 803A3A58
  if (crb(c,2)) { goto L_803A3A68; } // 803A3A5C
  cmps(c,0,(int32_t)c->r[28],768); // 803A3A60
  if (crb(c,0)) { IRQCHK(c); goto L_803A3928; } // 803A3A64
L_803A3A68:;
  {uint32_t ea=c->r[2]+0xFFFFEEB0u; c->f[29]=RF64(ea);} // 803A3A68
  c->r[29]=0u+0x43300000u; // 803A3A6C
  {uint32_t ea=c->r[2]+0xFFFFEEB8u; c->f[30]=c->ps1[30]=RF32(ea);} // 803A3A70
  {uint32_t ea=c->r[2]+0xFFFFEEACu; c->f[31]=c->ps1[31]=RF32(ea);} // 803A3A74
  goto L_803A3BD8; // 803A3A78
L_803A3A7C:;
  c->r[3]=R8(c->r[31]+0x000000AAu); // 803A3A7C
  c->r[0]=R16(c->r[31]+0x000000ACu); // 803A3A80
  W32(c->r[1]+0x00000008u,c->r[29]); // 803A3A84
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 803A3A88
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A3A8C
  c->r[0]=c->r[0]^0x80000000u; // 803A3A90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803A3A94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A3A98
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 803A3A9C
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[1]); // 803A3AA0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803A3AA4
  fcmp(c,0,c->f[0],c->f[31]); // 803A3AA8
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 803A3AAC
  if (!crb(c,0)) { goto L_803A3AB8; } // 803A3AB0
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[31]);} // 803A3AB4
L_803A3AB8:;
  c->r[3]=c->r[31]|c->r[31]; // 803A3AB8
  c->r[4]=0u+0x00000000u; // 803A3ABC
  c->lr=0x803A3AC4u; f_803A3624(c); // 803A3AC0
  cmps(c,0,(int32_t)c->r[3],0); // 803A3AC4
  if (crb(c,2)) { goto L_803A3BC8; } // 803A3AC8
  c->lr=0x803A3AD0u; f_803ABEB8(c); // 803A3ACC
  c->r[3]=c->r[3]+0x00000354u; // 803A3AD0
  c->lr=0x803A3AD8u; f_8025FCCC(c); // 803A3AD4
  c->r[0]=R8(c->r[31]+0x0000008Du); // 803A3AD8
  cmps(c,0,(int32_t)c->r[0],0); // 803A3ADC
  if (crb(c,2)) { goto L_803A3B08; } // 803A3AE0
  cmps(c,0,(int32_t)c->r[31],0); // 803A3AE4
  c->r[29]=c->r[31]|c->r[31]; // 803A3AE8
  if (crb(c,2)) { goto L_803A3AF4; } // 803A3AEC
  c->r[29]=c->r[31]+0x00000080u; // 803A3AF0
L_803A3AF4:;
  c->lr=0x803A3AF8u; f_803ABEB8(c); // 803A3AF4
  c->r[4]=c->r[29]|c->r[29]; // 803A3AF8
  c->lr=0x803A3B00u; f_803AC2EC(c); // 803A3AFC
  c->r[0]=0u+0x00000000u; // 803A3B00
  W8(c->r[31]+0x0000008Du,c->r[0]); // 803A3B04
L_803A3B08:;
  c->r[0]=R8(c->r[31]+0x0000008Cu); // 803A3B08
  cmps(c,0,(int32_t)c->r[0],0); // 803A3B0C
  if (crb(c,2)) { goto L_803A3B38; } // 803A3B10
  cmps(c,0,(int32_t)c->r[31],0); // 803A3B14
  c->r[29]=c->r[31]|c->r[31]; // 803A3B18
  if (crb(c,2)) { goto L_803A3B24; } // 803A3B1C
  c->r[29]=c->r[31]+0x00000074u; // 803A3B20
L_803A3B24:;
  c->lr=0x803A3B28u; f_8039DC24(c); // 803A3B24
  c->r[4]=c->r[29]|c->r[29]; // 803A3B28
  c->lr=0x803A3B30u; f_8039DD38(c); // 803A3B2C
  c->r[0]=0u+0x00000000u; // 803A3B30
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 803A3B34
L_803A3B38:;
  c->r[28]=c->r[31]|c->r[31]; // 803A3B38
  c->r[30]=0u+0x00000000u; // 803A3B3C
  c->r[29]=0u+0x00000000u; // 803A3B40
L_803A3B44:;
  c->lr=0x803A3B48u; f_803ABEB8(c); // 803A3B44
  c->r[3]=c->r[3]+0x00000354u; // 803A3B48
  c->lr=0x803A3B50u; f_8025FCCC(c); // 803A3B4C
  cmps(c,0,(int32_t)c->r[30],15); // 803A3B50
  if (!crb(c,1)) { goto L_803A3B60; } // 803A3B54
  c->r[3]=0u+0x00000000u; // 803A3B58
  goto L_803A3B64; // 803A3B5C
L_803A3B60:;
  c->r[3]=R32(c->r[28]+0x000000B8u); // 803A3B60
L_803A3B64:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A3B64
  if (!crb(c,2)) { goto L_803A3B7C; } // 803A3B68
  c->lr=0x803A3B70u; f_803ABEB8(c); // 803A3B6C
  c->r[3]=c->r[3]+0x00000354u; // 803A3B70
  c->lr=0x803A3B78u; f_8025FDA8(c); // 803A3B74
  goto L_803A3BA8; // 803A3B78
L_803A3B7C:;
  c->lr=0x803A3B80u; f_803A49BC(c); // 803A3B7C
  c->r[3]=R32(c->r[31]+0x000000B4u); // 803A3B80
  c->r[4]=R32(c->r[28]+0x000000B8u); // 803A3B84
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A3B88
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A3B8C
  c->ctr=c->r[12]; // 803A3B90
  if (true) { c->lr=0x803A3B98u; dispatch(c,c->ctr); } // 803A3B94
  W32(c->r[28]+0x000000B8u,c->r[29]); // 803A3B98
  c->lr=0x803A3BA0u; f_803ABEB8(c); // 803A3B9C
  c->r[3]=c->r[3]+0x00000354u; // 803A3BA0
  c->lr=0x803A3BA8u; f_8025FDA8(c); // 803A3BA4
L_803A3BA8:;
  c->r[30]=c->r[30]+0x00000001u; // 803A3BA8
  c->r[28]=c->r[28]+0x00000004u; // 803A3BAC
  cmps(c,0,(int32_t)c->r[30],16); // 803A3BB0
  if (crb(c,0)) { IRQCHK(c); goto L_803A3B44; } // 803A3BB4
  c->lr=0x803A3BBCu; f_803ABEB8(c); // 803A3BB8
  c->r[3]=c->r[3]+0x00000354u; // 803A3BBC
  c->lr=0x803A3BC4u; f_8025FDA8(c); // 803A3BC0
  goto L_803A3DC4; // 803A3BC4
L_803A3BC8:;
  c->r[3]=R32(c->r[31]+0x00000118u); // 803A3BC8
  c->r[28]=c->r[28]+0x00000001u; // 803A3BCC
  c->r[0]=c->r[3]+0x00000001u; // 803A3BD0
  W32(c->r[31]+0x00000118u,c->r[0]); // 803A3BD4
L_803A3BD8:;
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A3BD8
  fcmp(c,0,c->f[0],c->f[31]); // 803A3BDC
  c->r[0]=c->cr; // 803A3BE0
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 803A3BE4
  if (crb(c,2)) { goto L_803A3BF4; } // 803A3BE8
  cmps(c,0,(int32_t)c->r[28],768); // 803A3BEC
  if (crb(c,0)) { IRQCHK(c); goto L_803A3A7C; } // 803A3BF0
L_803A3BF4:;
  c->r[0]=R8(c->r[31]+0x0000008Eu); // 803A3BF4
  cmps(c,0,(int32_t)c->r[0],0); // 803A3BF8
  if (!crb(c,2)) { goto L_803A3DC4; } // 803A3BFC
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803A3C00
  cmps(c,0,(int32_t)c->r[0],0); // 803A3C04
  if (!crb(c,2)) { goto L_803A3DC4; } // 803A3C08
  {uint32_t ea=c->r[2]+0xFFFFEEACu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A3C0C
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A3C10
  fcmp(c,0,c->f[1],c->f[0]); // 803A3C14
  if (!crb(c,2)) { goto L_803A3DC4; } // 803A3C18
  c->r[3]=0u+0x00010000u; // 803A3C1C
  c->r[0]=R8(c->r[31]+0x000000AAu); // 803A3C20
  c->r[30]=c->r[3]+0xFFFFEA60u; // 803A3C24
  c->r[0]=divw((int32_t)c->r[30],(int32_t)c->r[0]); // 803A3C28
  c->r[3]=0u+0x55550000u; // 803A3C2C
  c->r[29]=c->r[3]+0x00005556u; // 803A3C30
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[29]*(int64_t)(int32_t)c->r[0])>>32); // 803A3C34
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803A3C38
  c->r[28]=c->r[3]+c->r[0]; // 803A3C3C
  goto L_803A3D80; // 803A3C40
L_803A3C44:;
  c->r[3]=c->r[31]|c->r[31]; // 803A3C44
  c->r[4]=0u+0x00000001u; // 803A3C48
  c->lr=0x803A3C50u; f_803A3624(c); // 803A3C4C
  cmps(c,0,(int32_t)c->r[3],0); // 803A3C50
  if (crb(c,2)) { goto L_803A3D54; } // 803A3C54
  c->lr=0x803A3C5Cu; f_803ABEB8(c); // 803A3C58
  c->r[3]=c->r[3]+0x00000354u; // 803A3C5C
  c->lr=0x803A3C64u; f_8025FCCC(c); // 803A3C60
  c->r[0]=R8(c->r[31]+0x0000008Du); // 803A3C64
  cmps(c,0,(int32_t)c->r[0],0); // 803A3C68
  if (crb(c,2)) { goto L_803A3C94; } // 803A3C6C
  cmps(c,0,(int32_t)c->r[31],0); // 803A3C70
  c->r[29]=c->r[31]|c->r[31]; // 803A3C74
  if (crb(c,2)) { goto L_803A3C80; } // 803A3C78
  c->r[29]=c->r[31]+0x00000080u; // 803A3C7C
L_803A3C80:;
  c->lr=0x803A3C84u; f_803ABEB8(c); // 803A3C80
  c->r[4]=c->r[29]|c->r[29]; // 803A3C84
  c->lr=0x803A3C8Cu; f_803AC2EC(c); // 803A3C88
  c->r[0]=0u+0x00000000u; // 803A3C8C
  W8(c->r[31]+0x0000008Du,c->r[0]); // 803A3C90
L_803A3C94:;
  c->r[0]=R8(c->r[31]+0x0000008Cu); // 803A3C94
  cmps(c,0,(int32_t)c->r[0],0); // 803A3C98
  if (crb(c,2)) { goto L_803A3CC4; } // 803A3C9C
  cmps(c,0,(int32_t)c->r[31],0); // 803A3CA0
  c->r[29]=c->r[31]|c->r[31]; // 803A3CA4
  if (crb(c,2)) { goto L_803A3CB0; } // 803A3CA8
  c->r[29]=c->r[31]+0x00000074u; // 803A3CAC
L_803A3CB0:;
  c->lr=0x803A3CB4u; f_8039DC24(c); // 803A3CB0
  c->r[4]=c->r[29]|c->r[29]; // 803A3CB4
  c->lr=0x803A3CBCu; f_8039DD38(c); // 803A3CB8
  c->r[0]=0u+0x00000000u; // 803A3CBC
  W8(c->r[31]+0x0000008Cu,c->r[0]); // 803A3CC0
L_803A3CC4:;
  c->r[28]=c->r[31]|c->r[31]; // 803A3CC4
  c->r[29]=0u+0x00000000u; // 803A3CC8
  c->r[30]=0u+0x00000000u; // 803A3CCC
L_803A3CD0:;
  c->lr=0x803A3CD4u; f_803ABEB8(c); // 803A3CD0
  c->r[3]=c->r[3]+0x00000354u; // 803A3CD4
  c->lr=0x803A3CDCu; f_8025FCCC(c); // 803A3CD8
  cmps(c,0,(int32_t)c->r[29],15); // 803A3CDC
  if (!crb(c,1)) { goto L_803A3CEC; } // 803A3CE0
  c->r[3]=0u+0x00000000u; // 803A3CE4
  goto L_803A3CF0; // 803A3CE8
L_803A3CEC:;
  c->r[3]=R32(c->r[28]+0x000000B8u); // 803A3CEC
L_803A3CF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A3CF0
  if (!crb(c,2)) { goto L_803A3D08; } // 803A3CF4
  c->lr=0x803A3CFCu; f_803ABEB8(c); // 803A3CF8
  c->r[3]=c->r[3]+0x00000354u; // 803A3CFC
  c->lr=0x803A3D04u; f_8025FDA8(c); // 803A3D00
  goto L_803A3D34; // 803A3D04
L_803A3D08:;
  c->lr=0x803A3D0Cu; f_803A49BC(c); // 803A3D08
  c->r[3]=R32(c->r[31]+0x000000B4u); // 803A3D0C
  c->r[4]=R32(c->r[28]+0x000000B8u); // 803A3D10
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A3D14
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A3D18
  c->ctr=c->r[12]; // 803A3D1C
  if (true) { c->lr=0x803A3D24u; dispatch(c,c->ctr); } // 803A3D20
  W32(c->r[28]+0x000000B8u,c->r[30]); // 803A3D24
  c->lr=0x803A3D2Cu; f_803ABEB8(c); // 803A3D28
  c->r[3]=c->r[3]+0x00000354u; // 803A3D2C
  c->lr=0x803A3D34u; f_8025FDA8(c); // 803A3D30
L_803A3D34:;
  c->r[29]=c->r[29]+0x00000001u; // 803A3D34
  c->r[28]=c->r[28]+0x00000004u; // 803A3D38
  cmps(c,0,(int32_t)c->r[29],16); // 803A3D3C
  if (crb(c,0)) { IRQCHK(c); goto L_803A3CD0; } // 803A3D40
  c->lr=0x803A3D48u; f_803ABEB8(c); // 803A3D44
  c->r[3]=c->r[3]+0x00000354u; // 803A3D48
  c->lr=0x803A3D50u; f_8025FDA8(c); // 803A3D4C
  goto L_803A3DC4; // 803A3D50
L_803A3D54:;
  c->r[0]=R8(c->r[31]+0x000000AAu); // 803A3D54
  c->r[3]=R16(c->r[31]+0x00000098u); // 803A3D58
  c->r[0]=divw((int32_t)c->r[30],(int32_t)c->r[0]); // 803A3D5C
  c->r[4]=R32(c->r[31]+0x00000118u); // 803A3D60
  c->r[3]=c->r[3]-c->r[28]; // 803A3D64
  W16(c->r[31]+0x00000098u,c->r[3]); // 803A3D68
  c->r[4]=c->r[4]+0x00000001u; // 803A3D6C
  W32(c->r[31]+0x00000118u,c->r[4]); // 803A3D70
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[29]*(int64_t)(int32_t)c->r[0])>>32); // 803A3D74
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 803A3D78
  c->r[28]=c->r[3]+c->r[0]; // 803A3D7C
L_803A3D80:;
  c->r[4]=R16(c->r[31]+0x00000098u); // 803A3D80
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 803A3D84
  if (!crb(c,0)) { IRQCHK(c); goto L_803A3C44; } // 803A3D88
  c->r[3]=R16(c->r[31]+0x000000ACu); // 803A3D8C
  c->r[0]=0u+0x43300000u; // 803A3D90
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A3D94
  {uint32_t ea=c->r[2]+0xFFFFEEC0u; c->f[2]=RF64(ea);} // 803A3D98
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 803A3D9C
  {uint32_t ea=c->r[31]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A3DA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A3DA4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A3DA8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 803A3DAC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803A3DB0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 803A3DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A3DB8
  c->r[0]=c->r[4]+c->r[0]; // 803A3DBC
  W16(c->r[31]+0x00000098u,c->r[0]); // 803A3DC0
L_803A3DC4:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 803A3DC4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 803A3DC8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 803A3DCC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 803A3DD0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 803A3DD4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 803A3DD8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803A3DDC
  c->r[30]=R32(c->r[1]+0x00000028u); // 803A3DE0
  c->r[29]=R32(c->r[1]+0x00000024u); // 803A3DE4
  c->r[0]=R32(c->r[1]+0x00000064u); // 803A3DE8
  c->r[28]=R32(c->r[1]+0x00000020u); // 803A3DEC
  c->lr=c->r[0]; // 803A3DF0
  c->r[1]=c->r[1]+0x00000060u; // 803A3DF4
  return; // 803A3DF8
}

// NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo
void f_803A3DFC(Ctx* __restrict c) {
  trace_call(0x803A3DFCu);
  c->r[7]=c->r[3]|c->r[3]; // 803A3DFC
  c->r[3]=R32(c->r[3]+0x000000B0u); // 803A3E00
  c->r[0]=c->r[4]|c->r[4]; // 803A3E04
  c->r[6]=c->r[5]|c->r[5]; // 803A3E08
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A3E0C
  c->r[4]=c->r[7]|c->r[7]; // 803A3E10
  c->r[5]=c->r[0]|c->r[0]; // 803A3E14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A3E18
  c->ctr=c->r[12]; // 803A3E1C
  if (true) { dispatch(c,c->ctr); return; } // 803A3E20
}

// fn_803A3E24
void f_803A3E24(Ctx* __restrict c) {
  trace_call(0x803A3E24u);
  return; // 803A3E24
}

// fn_803A3E28
void f_803A3E28(Ctx* __restrict c) {
  trace_call(0x803A3E28u);
  c->r[3]=c->r[3]+0xFFFFFF8Cu; // 803A3E28
  f_803A2B90(c); return; // 803A3E2C
}

// fn_803A3E30
void f_803A3E30(Ctx* __restrict c) {
  trace_call(0x803A3E30u);
  c->r[3]=c->r[3]+0xFFFFFF80u; // 803A3E30
  f_803A2B90(c); return; // 803A3E34
}

// fn_803A3E38
void f_803A3E38(Ctx* __restrict c) {
  trace_call(0x803A3E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A3E38
  c->r[0]=c->lr; // 803A3E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A3E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A3E44
  c->r[31]=c->r[4]|c->r[4]; // 803A3E48
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A3E4C
  c->r[30]=c->r[3]|c->r[3]; // 803A3E50
  c->lr=0x803A3E58u; f_8039BA94(c); // 803A3E54
  c->r[4]=0u+0x80430000u; // 803A3E58
  c->r[3]=c->r[30]+0x000000D8u; // 803A3E5C
  c->r[4]=c->r[4]+0x000073D0u; // 803A3E60
  W32(c->r[30]+0x00000000u,c->r[4]); // 803A3E64
  c->lr=0x803A3E6Cu; f_803A2A50(c); // 803A3E68
  c->r[4]=0u+0x80430000u; // 803A3E6C
  c->r[0]=0u+0x00000000u; // 803A3E70
  c->r[4]=c->r[4]+0x00007440u; // 803A3E74
  W8(c->r[30]+0x00000208u,c->r[0]); // 803A3E78
  c->r[3]=c->r[30]+0x00000434u; // 803A3E7C
  W8(c->r[30]+0x00000209u,c->r[0]); // 803A3E80
  W32(c->r[30]+0x000001F4u,c->r[0]); // 803A3E84
  W32(c->r[30]+0x000001F8u,c->r[31]); // 803A3E88
  W32(c->r[30]+0x00000204u,c->r[0]); // 803A3E8C
  W32(c->r[30]+0x0000020Cu,c->r[0]); // 803A3E90
  W32(c->r[30]+0x00000414u,c->r[0]); // 803A3E94
  W32(c->r[30]+0x00000418u,c->r[0]); // 803A3E98
  W8(c->r[30]+0x0000041Cu,c->r[0]); // 803A3E9C
  W32(c->r[30]+0x00000410u,c->r[4]); // 803A3EA0
  W32(c->r[30]+0x00000420u,c->r[0]); // 803A3EA4
  W32(c->r[30]+0x00000424u,c->r[0]); // 803A3EA8
  W32(c->r[30]+0x0000042Cu,c->r[0]); // 803A3EAC
  W32(c->r[30]+0x00000430u,c->r[0]); // 803A3EB0
  c->lr=0x803A3EB8u; f_8025FC94(c); // 803A3EB4
  c->r[3]=c->r[30]|c->r[30]; // 803A3EB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A3EBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A3EC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A3EC4
  c->lr=c->r[0]; // 803A3EC8
  c->r[1]=c->r[1]+0x00000010u; // 803A3ECC
  return; // 803A3ED0
}

// fn_803A3ED4
void f_803A3ED4(Ctx* __restrict c) {
  trace_call(0x803A3ED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A3ED4
  c->r[0]=c->lr; // 803A3ED8
  cmps(c,0,(int32_t)c->r[3],0); // 803A3EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A3EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A3EE4
  c->r[31]=c->r[4]|c->r[4]; // 803A3EE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A3EEC
  c->r[30]=c->r[3]|c->r[3]; // 803A3EF0
  if (crb(c,2)) { goto L_803A3F10; } // 803A3EF4
  c->r[4]=0u+0x00000000u; // 803A3EF8
  c->lr=0x803A3F00u; f_803AF6AC(c); // 803A3EFC
  cmps(c,0,(int32_t)c->r[31],0); // 803A3F00
  if (!crb(c,1)) { goto L_803A3F10; } // 803A3F04
  c->r[3]=c->r[30]|c->r[30]; // 803A3F08
  c->lr=0x803A3F10u; f_802896EC(c); // 803A3F0C
L_803A3F10:;
  c->r[3]=c->r[30]|c->r[30]; // 803A3F10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A3F14
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A3F18
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A3F1C
  c->lr=c->r[0]; // 803A3F20
  c->r[1]=c->r[1]+0x00000010u; // 803A3F24
  return; // 803A3F28
}

// InitParam__Q44nw4r3snd6detail8SeqSoundFv
void f_803A3F2C(Ctx* __restrict c) {
  trace_call(0x803A3F2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A3F2C
  c->r[0]=c->lr; // 803A3F30
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A3F34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A3F38
  c->r[31]=c->r[3]|c->r[3]; // 803A3F3C
  c->lr=0x803A3F44u; f_8039BB28(c); // 803A3F40
  c->r[0]=0u+0x00000000u; // 803A3F44
  W32(c->r[31]+0x00000204u,c->r[0]); // 803A3F48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A3F4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A3F50
  c->lr=c->r[0]; // 803A3F54
  c->r[1]=c->r[1]+0x00000010u; // 803A3F58
  return; // 803A3F5C
}

// fn_803A3F60
void f_803A3F60(Ctx* __restrict c) {
  trace_call(0x803A3F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A3F60
  c->r[0]=c->lr; // 803A3F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A3F68
  c->r[11]=c->r[1]+0x00000020u; // 803A3F6C
  c->lr=0x803A3F74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A3F70
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A3F74
  c->r[27]=c->r[3]|c->r[3]; // 803A3F78
  c->r[28]=c->r[4]|c->r[4]; // 803A3F7C
  c->r[29]=c->r[5]|c->r[5]; // 803A3F80
  c->r[12]=R32(c->r[12]+0x00000064u); // 803A3F84
  c->r[30]=c->r[6]|c->r[6]; // 803A3F88
  c->r[31]=c->r[7]|c->r[7]; // 803A3F8C
  c->ctr=c->r[12]; // 803A3F90
  if (true) { c->lr=0x803A3F98u; dispatch(c,c->ctr); } // 803A3F94
  c->r[4]=c->r[28]|c->r[28]; // 803A3F98
  c->r[5]=c->r[29]|c->r[29]; // 803A3F9C
  c->r[6]=c->r[30]|c->r[30]; // 803A3FA0
  c->r[7]=c->r[31]|c->r[31]; // 803A3FA4
  c->r[3]=c->r[27]+0x000000D8u; // 803A3FA8
  c->lr=0x803A3FB0u; f_803A2E34(c); // 803A3FAC
  c->r[11]=c->r[1]+0x00000020u; // 803A3FB0
  c->lr=0x803A3FB8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A3FB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A3FB8
  c->lr=c->r[0]; // 803A3FBC
  c->r[1]=c->r[1]+0x00000020u; // 803A3FC0
  return; // 803A3FC4
}

// Prepare__Q44nw4r3snd6detail8SeqSoundFPCvlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
void f_803A3FC8(Ctx* __restrict c) {
  trace_call(0x803A3FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A3FC8
  c->r[0]=c->lr; // 803A3FCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A3FD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A3FD4
  c->r[31]=c->r[7]|c->r[7]; // 803A3FD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A3FDC
  c->r[30]=c->r[6]|c->r[6]; // 803A3FE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A3FE4
  c->r[29]=c->r[3]|c->r[3]; // 803A3FE8
  c->r[3]=c->r[3]+0x000000D8u; // 803A3FEC
  c->lr=0x803A3FF4u; f_803A30B0(c); // 803A3FF0
  cmps(c,0,(int32_t)c->r[31],0); // 803A3FF4
  if (!crb(c,1)) { goto L_803A400C; } // 803A3FF8
  c->r[4]=c->r[30]|c->r[30]; // 803A3FFC
  c->r[5]=c->r[31]|c->r[31]; // 803A4000
  c->r[3]=c->r[29]+0x000000D8u; // 803A4004
  c->lr=0x803A400Cu; f_803A337C(c); // 803A4008
L_803A400C:;
  c->r[0]=0u+0x00000001u; // 803A400C
  W8(c->r[29]+0x00000209u,c->r[0]); // 803A4010
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A4014
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A4018
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A401C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A4020
  c->lr=c->r[0]; // 803A4024
  c->r[1]=c->r[1]+0x00000020u; // 803A4028
  return; // 803A402C
}

// Prepare__Q44nw4r3snd6detail8SeqSoundFPQ34nw4r2ut10FileStreamlQ54nw4r3snd6detail9SeqPlayer10OffsetTypei
void f_803A4030(Ctx* __restrict c) {
  trace_call(0x803A4030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4030
  c->r[0]=c->lr; // 803A4034
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A4038
  c->r[0]=0u+0x00000001u; // 803A403C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A4040
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A4044
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A4048
  c->r[29]=c->r[3]|c->r[3]; // 803A404C
  c->r[30]=R32(c->r[3]+0x00000004u); // 803A4050
  W32(c->r[3]+0x0000020Cu,c->r[4]); // 803A4054
  cmps(c,0,(int32_t)c->r[30],0); // 803A4058
  W32(c->r[3]+0x000001FCu,c->r[5]); // 803A405C
  W32(c->r[3]+0x00000200u,c->r[6]); // 803A4060
  W32(c->r[3]+0x00000204u,c->r[7]); // 803A4064
  W8(c->r[3]+0x00000208u,c->r[0]); // 803A4068
  if (!crb(c,2)) { goto L_803A4078; } // 803A406C
  c->r[0]=0u+0x00000000u; // 803A4070
  goto L_803A40EC; // 803A4074
L_803A4078:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 803A4078
  c->r[3]=c->r[4]|c->r[4]; // 803A407C
  c->r[12]=R32(c->r[12]+0x00000040u); // 803A4080
  c->ctr=c->r[12]; // 803A4084
  if (true) { c->lr=0x803A408Cu; dispatch(c,c->ctr); } // 803A4088
  c->r[12]=R32(c->r[30]+0x00000000u); // 803A408C
  c->r[31]=c->r[3]|c->r[3]; // 803A4090
  c->r[3]=c->r[30]|c->r[30]; // 803A4094
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A4098
  c->r[4]=c->r[31]|c->r[31]; // 803A409C
  c->ctr=c->r[12]; // 803A40A0
  if (true) { c->lr=0x803A40A8u; dispatch(c,c->ctr); } // 803A40A4
  cmps(c,0,(int32_t)c->r[3],0); // 803A40A8
  if (!crb(c,2)) { goto L_803A40B8; } // 803A40AC
  c->r[0]=0u+0x00000000u; // 803A40B0
  goto L_803A40EC; // 803A40B4
L_803A40B8:;
  c->r[0]=R32(c->r[29]+0x0000020Cu); // 803A40B8
  c->r[4]=0u+0x803A0000u; // 803A40BC
  c->r[4]=c->r[4]+0x00004124u; // 803A40C0
  W32(c->r[29]+0x00000424u,c->r[3]); // 803A40C4
  W32(c->r[29]+0x00000420u,c->r[0]); // 803A40C8
  W32(c->r[29]+0x00000428u,c->r[31]); // 803A40CC
  W32(c->r[29]+0x0000042Cu,c->r[4]); // 803A40D0
  W32(c->r[29]+0x00000430u,c->r[29]); // 803A40D4
  c->lr=0x803A40DCu; f_803AF6EC(c); // 803A40D8
  c->r[4]=c->r[29]+0x00000410u; // 803A40DC
  c->r[5]=0u+0x00000001u; // 803A40E0
  c->lr=0x803A40E8u; f_803AF864(c); // 803A40E4
  c->r[0]=0u+0x00000001u; // 803A40E8
L_803A40EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A40EC
  if (!crb(c,2)) { goto L_803A4108; } // 803A40F0
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A40F4
  c->r[3]=c->r[29]|c->r[29]; // 803A40F8
  c->r[12]=R32(c->r[12]+0x00000028u); // 803A40FC
  c->ctr=c->r[12]; // 803A4100
  if (true) { c->lr=0x803A4108u; dispatch(c,c->ctr); } // 803A4104
L_803A4108:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A4108
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A410C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A4110
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A4114
  c->lr=c->r[0]; // 803A4118
  c->r[1]=c->r[1]+0x00000020u; // 803A411C
  return; // 803A4120
}

// fn_803A4124
void f_803A4124(Ctx* __restrict c) {
  trace_call(0x803A4124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4124
  c->r[0]=c->lr; // 803A4128
  cmps(c,0,(int32_t)c->r[3],0); // 803A412C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A4130
  c->r[0]=0u+0x00000000u; // 803A4134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A4138
  c->r[31]=c->r[5]|c->r[5]; // 803A413C
  W8(c->r[5]+0x00000208u,c->r[0]); // 803A4140
  if (!crb(c,2)) { goto L_803A4164; } // 803A4144
  c->r[12]=R32(c->r[31]+0x00000000u); // 803A4148
  c->r[3]=c->r[31]|c->r[31]; // 803A414C
  c->r[4]=0u+0x00000000u; // 803A4150
  c->r[12]=R32(c->r[12]+0x00000018u); // 803A4154
  c->ctr=c->r[12]; // 803A4158
  if (true) { c->lr=0x803A4160u; dispatch(c,c->ctr); } // 803A415C
  goto L_803A4190; // 803A4160
L_803A4164:;
  c->r[3]=c->r[5]+0x000000D8u; // 803A4164
  c->r[5]=R32(c->r[5]+0x000001FCu); // 803A4168
  c->lr=0x803A4170u; f_803A30B0(c); // 803A416C
  c->r[5]=R32(c->r[31]+0x00000204u); // 803A4170
  cmps(c,0,(int32_t)c->r[5],0); // 803A4174
  if (!crb(c,1)) { goto L_803A4188; } // 803A4178
  c->r[4]=R32(c->r[31]+0x00000200u); // 803A417C
  c->r[3]=c->r[31]+0x000000D8u; // 803A4180
  c->lr=0x803A4188u; f_803A337C(c); // 803A4184
L_803A4188:;
  c->r[0]=0u+0x00000001u; // 803A4188
  W8(c->r[31]+0x00000209u,c->r[0]); // 803A418C
L_803A4190:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A4190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A4194
  c->lr=c->r[0]; // 803A4198
  c->r[1]=c->r[1]+0x00000010u; // 803A419C
  return; // 803A41A0
}

// Shutdown__Q44nw4r3snd6detail8SeqSoundFv
void f_803A41A4(Ctx* __restrict c) {
  trace_call(0x803A41A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A41A4
  c->r[0]=c->lr; // 803A41A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A41AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A41B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A41B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A41B8
  c->r[29]=c->r[3]|c->r[3]; // 803A41BC
  c->r[0]=R8(c->r[3]+0x00000208u); // 803A41C0
  cmps(c,0,(int32_t)c->r[0],0); // 803A41C4
  if (crb(c,2)) { goto L_803A41D8; } // 803A41C8
  c->lr=0x803A41D0u; f_803AF6EC(c); // 803A41CC
  c->r[4]=c->r[29]+0x00000410u; // 803A41D0
  c->lr=0x803A41D8u; f_803AFBC4(c); // 803A41D4
L_803A41D8:;
  c->r[3]=R32(c->r[29]+0x0000020Cu); // 803A41D8
  cmps(c,0,(int32_t)c->r[3],0); // 803A41DC
  if (crb(c,2)) { goto L_803A41FC; } // 803A41E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A41E4
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A41E8
  c->ctr=c->r[12]; // 803A41EC
  if (true) { c->lr=0x803A41F4u; dispatch(c,c->ctr); } // 803A41F0
  c->r[0]=0u+0x00000000u; // 803A41F4
  W32(c->r[29]+0x0000020Cu,c->r[0]); // 803A41F8
L_803A41FC:;
  c->r[3]=c->r[29]|c->r[29]; // 803A41FC
  c->lr=0x803A4204u; f_8039C72C(c); // 803A4200
  c->r[30]=R32(c->r[29]+0x000001F8u); // 803A4204
  c->r[31]=c->r[30]+0x00000010u; // 803A4208
  c->r[3]=c->r[31]|c->r[31]; // 803A420C
  c->lr=0x803A4214u; f_8025FCCC(c); // 803A4210
  c->r[0]=R32(c->r[30]+0x00000004u); // 803A4214
  cmps(c,0,(int32_t)c->r[0],0); // 803A4218
  if (!crb(c,2)) { goto L_803A422C; } // 803A421C
  c->r[3]=c->r[31]|c->r[31]; // 803A4220
  c->lr=0x803A4228u; f_8025FDA8(c); // 803A4224
  goto L_803A4264; // 803A4228
L_803A422C:;
  c->r[3]=c->r[30]+0x00000004u; // 803A422C
  c->r[4]=c->r[29]+0x000000B8u; // 803A4230
  c->lr=0x803A4238u; f_803B50E0(c); // 803A4234
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A4238
  c->r[3]=c->r[29]|c->r[29]; // 803A423C
  c->r[4]=0u+0xFFFFFFFFu; // 803A4240
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A4244
  c->ctr=c->r[12]; // 803A4248
  if (true) { c->lr=0x803A4250u; dispatch(c,c->ctr); } // 803A424C
  c->r[3]=c->r[30]|c->r[30]; // 803A4250
  c->r[4]=c->r[29]|c->r[29]; // 803A4254
  c->lr=0x803A425Cu; f_803A0A9C(c); // 803A4258
  c->r[3]=c->r[31]|c->r[31]; // 803A425C
  c->lr=0x803A4264u; f_8025FDA8(c); // 803A4260
L_803A4264:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A4264
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A4268
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A426C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A4270
  c->lr=c->r[0]; // 803A4274
  c->r[1]=c->r[1]+0x00000020u; // 803A4278
  return; // 803A427C
}

// __dt__Q44nw4r3snd6detail8SeqSoundFv
void f_803A4280(Ctx* __restrict c) {
  trace_call(0x803A4280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4280
  c->r[0]=c->lr; // 803A4284
  cmps(c,0,(int32_t)c->r[3],0); // 803A4288
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A428C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A4290
  c->r[31]=c->r[4]|c->r[4]; // 803A4294
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A4298
  c->r[30]=c->r[3]|c->r[3]; // 803A429C
  if (crb(c,2)) { goto L_803A42D0; } // 803A42A0
  c->r[3]=addc(c,c->r[3],0x00000410u,0); cr0(c,c->r[3]); // 803A42A4
  if (crb(c,2)) { goto L_803A42B4; } // 803A42A8
  c->r[4]=0u+0x00000000u; // 803A42AC
  c->lr=0x803A42B4u; f_803AF6AC(c); // 803A42B0
L_803A42B4:;
  c->r[3]=c->r[30]+0x000000D8u; // 803A42B4
  c->r[4]=0u+0xFFFFFFFFu; // 803A42B8
  c->lr=0x803A42C0u; f_803A2B90(c); // 803A42BC
  cmps(c,0,(int32_t)c->r[31],0); // 803A42C0
  if (!crb(c,1)) { goto L_803A42D0; } // 803A42C4
  c->r[3]=c->r[30]|c->r[30]; // 803A42C8
  c->lr=0x803A42D0u; f_802896EC(c); // 803A42CC
L_803A42D0:;
  c->r[3]=c->r[30]|c->r[30]; // 803A42D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A42D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A42D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A42DC
  c->lr=c->r[0]; // 803A42E0
  c->r[1]=c->r[1]+0x00000010u; // 803A42E4
  return; // 803A42E8
}

// fn_803A42EC
void f_803A42EC(Ctx* __restrict c) {
  trace_call(0x803A42ECu);
  c->r[3]=c->r[3]+0x000000D8u; // 803A42EC
  f_803A3440(c); return; // 803A42F0
}

// fn_803A42F4
void f_803A42F4(Ctx* __restrict c) {
  trace_call(0x803A42F4u);
  c->r[3]=c->r[3]+0x000000D8u; // 803A42F4
  f_803A3448(c); return; // 803A42F8
}

// fn_803A42FC
void f_803A42FC(Ctx* __restrict c) {
  trace_call(0x803A42FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A42FC
  c->r[0]=c->lr; // 803A4300
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A4304
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A4308
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A430C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A4310
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A4314
  c->r[28]=c->r[3]|c->r[3]; // 803A4318
  c->lr=0x803A4320u; f_8039C89C(c); // 803A431C
  c->r[3]=R8(c->r[28]+0x00000074u); // 803A4320
  c->r[0]=R32(c->r[28]+0x00000040u); // 803A4324
  c->r[3]=c->r[3]+c->r[0]; // 803A4328
  cmps(c,0,(int32_t)c->r[3],127); // 803A432C
  if (!crb(c,1)) { goto L_803A433C; } // 803A4330
  c->r[29]=0u+0x0000007Fu; // 803A4334
  goto L_803A4344; // 803A4338
L_803A433C:;
  c->r[0]=sraw(c,c->r[3],31); // 803A433C
  c->r[29]=c->r[3]&~c->r[0]; // 803A4340
L_803A4344:;
  c->r[30]=R32(c->r[28]+0x000001F8u); // 803A4344
  c->r[31]=c->r[30]+0x00000010u; // 803A4348
  c->r[3]=c->r[31]|c->r[31]; // 803A434C
  c->lr=0x803A4354u; f_8025FCCC(c); // 803A4350
  c->r[28]=c->r[28]+0x000000B8u; // 803A4354
  c->r[3]=c->r[30]+0x00000004u; // 803A4358
  c->r[4]=c->r[28]|c->r[28]; // 803A435C
  c->lr=0x803A4364u; f_803B50E0(c); // 803A4360
  c->r[3]=R32(c->r[30]+0x00000008u); // 803A4364
  c->r[0]=c->r[30]+0x00000008u; // 803A4368
  goto L_803A43A0; // 803A436C
L_803A4370:;
  c->r[5]=R8(c->r[3]+0xFFFFFFBCu); // 803A4370
  c->r[4]=R32(c->r[3]+0xFFFFFF88u); // 803A4374
  c->r[5]=c->r[5]+c->r[4]; // 803A4378
  cmps(c,0,(int32_t)c->r[5],127); // 803A437C
  if (!crb(c,1)) { goto L_803A438C; } // 803A4380
  c->r[4]=0u+0x0000007Fu; // 803A4384
  goto L_803A4394; // 803A4388
L_803A438C:;
  c->r[4]=sraw(c,c->r[5],31); // 803A438C
  c->r[4]=c->r[5]&~c->r[4]; // 803A4390
L_803A4394:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 803A4394
  if (crb(c,0)) { goto L_803A43A8; } // 803A4398
  c->r[3]=R32(c->r[3]+0x00000000u); // 803A439C
L_803A43A0:;
  cmpu(c,0,c->r[3],c->r[0]); // 803A43A0
  if (!crb(c,2)) { IRQCHK(c); goto L_803A4370; } // 803A43A4
L_803A43A8:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803A43A8
  c->r[5]=c->r[28]|c->r[28]; // 803A43AC
  c->r[3]=c->r[30]+0x00000004u; // 803A43B0
  c->r[4]=c->r[1]+0x00000008u; // 803A43B4
  c->lr=0x803A43BCu; f_803B50B4(c); // 803A43B8
  c->r[3]=c->r[31]|c->r[31]; // 803A43BC
  c->lr=0x803A43C4u; f_8025FDA8(c); // 803A43C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A43C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A43C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A43CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A43D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A43D4
  c->lr=c->r[0]; // 803A43D8
  c->r[1]=c->r[1]+0x00000020u; // 803A43DC
  return; // 803A43E0
}

// fn_803A43E4
void f_803A43E4(Ctx* __restrict c) {
  trace_call(0x803A43E4u);
  c->r[0]=R8(c->r[3]+0x00000065u); // 803A43E4
  cmps(c,0,(int32_t)c->r[0],0); // 803A43E8
  if (!crb(c,2)) { goto L_803A43F8; } // 803A43EC
  c->r[3]=0u+0x00000000u; // 803A43F0
  return; // 803A43F4
L_803A43F8:;
  c->r[3]=R32(c->r[3]+0x000001F0u); // 803A43F8
  return; // 803A43FC
}

// fn_803A4400
void f_803A4400(Ctx* __restrict c) {
  trace_call(0x803A4400u);
  c->r[3]=R32(c->r[3]+0x000001F4u); // 803A4400
  c->r[0]=0u-c->r[3]; // 803A4404
  c->r[0]=c->r[0]|c->r[3]; // 803A4408
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A440C
  return; // 803A4410
}

// fn_803A4414
void f_803A4414(Ctx* __restrict c) {
  trace_call(0x803A4414u);
  c->r[3]=R32(c->r[3]+0x000001F4u); // 803A4414
  f_803A4698(c); return; // 803A4418
}

// Execute__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
void f_803A441C(Ctx* __restrict c) {
  trace_call(0x803A441Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A441C
  c->r[0]=c->lr; // 803A4420
  c->r[4]=0u+0x00000000u; // 803A4424
  c->r[5]=0u+0x00000000u; // 803A4428
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A442C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A4430
  c->r[31]=c->r[3]|c->r[3]; // 803A4434
  c->r[3]=R32(c->r[3]+0x00000010u); // 803A4438
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A443C
  c->r[12]=R32(c->r[12]+0x00000044u); // 803A4440
  c->ctr=c->r[12]; // 803A4444
  if (true) { c->lr=0x803A444Cu; dispatch(c,c->ctr); } // 803A4448
  c->r[3]=R32(c->r[31]+0x00000010u); // 803A444C
  c->r[4]=R32(c->r[31]+0x00000014u); // 803A4450
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A4454
  c->r[5]=R32(c->r[31]+0x00000018u); // 803A4458
  c->r[12]=R32(c->r[12]+0x00000014u); // 803A445C
  c->ctr=c->r[12]; // 803A4460
  if (true) { c->lr=0x803A4468u; dispatch(c,c->ctr); } // 803A4464
  c->r[0]=0u+0x00000000u; // 803A4468
  cmps(c,0,(int32_t)c->r[3],-3); // 803A446C
  W32(c->r[31]+0x00000010u,c->r[0]); // 803A4470
  if (!crb(c,2)) { goto L_803A449C; } // 803A4474
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 803A4478
  cmps(c,0,(int32_t)c->r[12],0); // 803A447C
  if (crb(c,2)) { goto L_803A4500; } // 803A4480
  c->r[5]=R32(c->r[31]+0x00000020u); // 803A4484
  c->r[3]=0u+0x00000000u; // 803A4488
  c->r[4]=0u+0x00000000u; // 803A448C
  c->ctr=c->r[12]; // 803A4490
  if (true) { c->lr=0x803A4498u; dispatch(c,c->ctr); } // 803A4494
  goto L_803A4500; // 803A4498
L_803A449C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 803A449C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803A44A0
  if (crb(c,2)) { goto L_803A44CC; } // 803A44A4
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 803A44A8
  cmps(c,0,(int32_t)c->r[12],0); // 803A44AC
  if (crb(c,2)) { goto L_803A4500; } // 803A44B0
  c->r[5]=R32(c->r[31]+0x00000020u); // 803A44B4
  c->r[3]=0u+0x00000000u; // 803A44B8
  c->r[4]=0u+0x00000000u; // 803A44BC
  c->ctr=c->r[12]; // 803A44C0
  if (true) { c->lr=0x803A44C8u; dispatch(c,c->ctr); } // 803A44C4
  goto L_803A4500; // 803A44C8
L_803A44CC:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 803A44CC
  c->r[3]=c->r[1]+0x00000008u; // 803A44D0
  c->lr=0x803A44D8u; f_803A29D4(c); // 803A44D4
  c->r[3]=c->r[1]+0x00000008u; // 803A44D8
  c->lr=0x803A44E0u; f_803A2A40(c); // 803A44DC
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 803A44E0
  cmps(c,0,(int32_t)c->r[12],0); // 803A44E4
  if (crb(c,2)) { goto L_803A4500; } // 803A44E8
  c->r[4]=c->r[3]|c->r[3]; // 803A44EC
  c->r[5]=R32(c->r[31]+0x00000020u); // 803A44F0
  c->r[3]=0u+0x00000001u; // 803A44F4
  c->ctr=c->r[12]; // 803A44F8
  if (true) { c->lr=0x803A4500u; dispatch(c,c->ctr); } // 803A44FC
L_803A4500:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A4500
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A4504
  c->lr=c->r[0]; // 803A4508
  c->r[1]=c->r[1]+0x00000020u; // 803A450C
  return; // 803A4510
}

// Cancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
void f_803A4514(Ctx* __restrict c) {
  trace_call(0x803A4514u);
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 803A4514
  cmps(c,0,(int32_t)c->r[12],0); // 803A4518
  if (crb(c,2)) return; // 803A451C
  c->r[5]=R32(c->r[3]+0x00000020u); // 803A4520
  c->r[3]=0u+0x00000000u; // 803A4524
  c->r[4]=0u+0x00000000u; // 803A4528
  c->ctr=c->r[12]; // 803A452C
  if (true) { dispatch(c,c->ctr); return; } // 803A4530
  return; // 803A4534
}

// OnCancel__Q54nw4r3snd6detail8SeqSound11SeqLoadTaskFv
void f_803A4538(Ctx* __restrict c) {
  trace_call(0x803A4538u);
  c->r[4]=R32(c->r[3]+0x00000010u); // 803A4538
  c->r[0]=0u+0x00000000u; // 803A453C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 803A4540
  cmps(c,0,(int32_t)c->r[4],0); // 803A4544
  if (crb(c,2)) return; // 803A4548
  c->r[12]=R32(c->r[4]+0x00000000u); // 803A454C
  c->r[3]=c->r[4]|c->r[4]; // 803A4550
  c->r[12]=R32(c->r[12]+0x00000048u); // 803A4554
  c->ctr=c->r[12]; // 803A4558
  if (true) { dispatch(c,c->ctr); return; } // 803A455C
  return; // 803A4560
}

// fn_803A4564
void f_803A4564(Ctx* __restrict c) {
  trace_call(0x803A4564u);
  c->r[3]=c->r[3]+0x000000D8u; // 803A4564
  return; // 803A4568
}

// fn_803A456C
void f_803A456C(Ctx* __restrict c) {
  trace_call(0x803A456Cu);
  c->r[3]=c->r[3]+0x000000D8u; // 803A456C
  return; // 803A4570
}

// fn_803A4574
void f_803A4574(Ctx* __restrict c) {
  trace_call(0x803A4574u);
  c->r[3]=R8(c->r[3]+0x00000209u); // 803A4574
  return; // 803A4578
}

// fn_803A457C
void f_803A457C(Ctx* __restrict c) {
  trace_call(0x803A457Cu);
  c->r[3]=c->r[13]+0xFFFFA010u; // 803A457C
  return; // 803A4580
}

// fn_803A4584
void f_803A4584(Ctx* __restrict c) {
  trace_call(0x803A4584u);
  c->r[0]=c->r[13]+0xFFFF9FE0u; // 803A4584
  W32(c->r[13]+0xFFFFA010u,c->r[0]); // 803A4588
  return; // 803A458C
}

// fn_803A4590
void f_803A4590(Ctx* __restrict c) {
  trace_call(0x803A4590u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4590
  c->r[0]=c->lr; // 803A4594
  cmps(c,0,(int32_t)c->r[4],0); // 803A4598
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A459C
  c->r[0]=0u+0x00000000u; // 803A45A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A45A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A45A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A45AC
  c->r[29]=c->r[3]|c->r[3]; // 803A45B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 803A45B4
  if (!crb(c,2)) { goto L_803A45C0; } // 803A45B8
  goto L_803A467C; // 803A45BC
L_803A45C0:;
  c->r[30]=R32(c->r[4]+0x00000000u); // 803A45C0
  cmps(c,0,(int32_t)c->r[30],0); // 803A45C4
  if (!crb(c,2)) { goto L_803A45D0; } // 803A45C8
  goto L_803A467C; // 803A45CC
L_803A45D0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803A45D0
  c->r[3]=c->r[30]|c->r[30]; // 803A45D4
  c->r[31]=c->r[13]+0xFFFFA010u; // 803A45D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A45DC
  c->ctr=c->r[12]; // 803A45E0
  if (true) { c->lr=0x803A45E8u; dispatch(c,c->ctr); } // 803A45E4
  goto L_803A4600; // 803A45E8
L_803A45EC:;
  cmpu(c,0,c->r[3],c->r[31]); // 803A45EC
  if (!crb(c,2)) { goto L_803A45FC; } // 803A45F0
  c->r[0]=0u+0x00000001u; // 803A45F4
  goto L_803A460C; // 803A45F8
L_803A45FC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803A45FC
L_803A4600:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A4600
  if (!crb(c,2)) { IRQCHK(c); goto L_803A45EC; } // 803A4604
  c->r[0]=0u+0x00000000u; // 803A4608
L_803A460C:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A460C
  if (crb(c,2)) { goto L_803A4618; } // 803A4610
  goto L_803A461C; // 803A4614
L_803A4618:;
  c->r[30]=0u+0x00000000u; // 803A4618
L_803A461C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803A461C
  if (crb(c,2)) { goto L_803A4678; } // 803A4620
  W32(c->r[29]+0x00000000u,c->r[30]); // 803A4624
  c->r[3]=c->r[30]|c->r[30]; // 803A4628
  c->lr=0x803A4630u; f_8039CBAC(c); // 803A462C
  cmps(c,0,(int32_t)c->r[3],0); // 803A4630
  if (crb(c,2)) { goto L_803A4640; } // 803A4634
  c->r[3]=R32(c->r[29]+0x00000000u); // 803A4638
  c->lr=0x803A4640u; f_8039CBC8(c); // 803A463C
L_803A4640:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 803A4640
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A4644
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 803A4648
  c->ctr=c->r[12]; // 803A464C
  if (true) { c->lr=0x803A4654u; dispatch(c,c->ctr); } // 803A4650
  cmps(c,0,(int32_t)c->r[3],0); // 803A4654
  if (crb(c,2)) { goto L_803A4670; } // 803A4658
  c->r[3]=R32(c->r[29]+0x00000000u); // 803A465C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A4660
  c->r[12]=R32(c->r[12]+0x00000060u); // 803A4664
  c->ctr=c->r[12]; // 803A4668
  if (true) { c->lr=0x803A4670u; dispatch(c,c->ctr); } // 803A466C
L_803A4670:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 803A4670
  W32(c->r[3]+0x000001F4u,c->r[29]); // 803A4674
L_803A4678:;
  c->r[3]=c->r[29]|c->r[29]; // 803A4678
L_803A467C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A467C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A4680
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A4684
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A4688
  c->lr=c->r[0]; // 803A468C
  c->r[1]=c->r[1]+0x00000020u; // 803A4690
  return; // 803A4694
}

// fn_803A4698
void f_803A4698(Ctx* __restrict c) {
  trace_call(0x803A4698u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 803A4698
  cmps(c,0,(int32_t)c->r[4],0); // 803A469C
  if (crb(c,2)) { goto L_803A46B8; } // 803A46A0
  c->r[0]=R32(c->r[4]+0x000001F4u); // 803A46A4
  cmpu(c,0,c->r[0],c->r[3]); // 803A46A8
  if (!crb(c,2)) { goto L_803A46B8; } // 803A46AC
  c->r[0]=0u+0x00000000u; // 803A46B0
  W32(c->r[4]+0x000001F4u,c->r[0]); // 803A46B4
L_803A46B8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A46B8
  cmps(c,0,(int32_t)c->r[0],0); // 803A46BC
  if (crb(c,2)) return; // 803A46C0
  c->r[0]=0u+0x00000000u; // 803A46C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 803A46C8
  return; // 803A46CC
}

// fn_803A46D0
void f_803A46D0(Ctx* __restrict c) {
  trace_call(0x803A46D0u);
  W8(c->r[3]+0x00000004u,c->r[4]); // 803A46D0
  return; // 803A46D4
}

// fn_803A46D8
void f_803A46D8(Ctx* __restrict c) {
  trace_call(0x803A46D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A46D8
  c->r[0]=c->lr; // 803A46DC
  c->r[4]=0u+0x80430000u; // 803A46E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A46E4
  c->r[4]=c->r[4]+0x00007458u; // 803A46E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A46EC
  c->r[31]=0u+0x00000000u; // 803A46F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A46F4
  c->r[30]=c->r[3]|c->r[3]; // 803A46F8
  W8(c->r[3]+0x00000005u,c->r[31]); // 803A46FC
  W32(c->r[3]+0x00000000u,c->r[4]); // 803A4700
  c->r[3]=c->r[3]+0x0000006Cu; // 803A4704
  c->lr=0x803A470Cu; f_803A0AE4(c); // 803A4708
  W32(c->r[30]+0x000000B8u,c->r[31]); // 803A470C
  c->r[3]=c->r[30]|c->r[30]; // 803A4710
  W32(c->r[30]+0x000000BCu,c->r[31]); // 803A4714
  c->lr=0x803A471Cu; f_803A483C(c); // 803A4718
  c->r[3]=c->r[30]|c->r[30]; // 803A471C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A4720
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A4724
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A4728
  c->lr=c->r[0]; // 803A472C
  c->r[1]=c->r[1]+0x00000010u; // 803A4730
  return; // 803A4734
}

// __dt__Q44nw4r3snd6detail8SeqTrackFv
void f_803A4738(Ctx* __restrict c) {
  trace_call(0x803A4738u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4738
  c->r[0]=c->lr; // 803A473C
  cmps(c,0,(int32_t)c->r[3],0); // 803A4740
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A4744
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A4748
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A474C
  c->r[30]=c->r[4]|c->r[4]; // 803A4750
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A4754
  c->r[29]=c->r[3]|c->r[3]; // 803A4758
  if (crb(c,2)) { goto L_803A481C; } // 803A475C
  c->r[4]=0u+0x80430000u; // 803A4760
  c->r[4]=c->r[4]+0x00007458u; // 803A4764
  W32(c->r[3]+0x00000000u,c->r[4]); // 803A4768
  c->lr=0x803A4770u; f_803ABEB8(c); // 803A476C
  c->r[3]=c->r[3]+0x00000354u; // 803A4770
  c->lr=0x803A4778u; f_8025FCCC(c); // 803A4774
  c->lr=0x803A477Cu; f_803ABEB8(c); // 803A4778
  c->r[3]=c->r[3]+0x00000354u; // 803A477C
  c->lr=0x803A4784u; f_8025FCCC(c); // 803A4780
  c->r[3]=c->r[29]|c->r[29]; // 803A4784
  c->lr=0x803A478Cu; f_803A4DC4(c); // 803A4788
  c->r[31]=R32(c->r[29]+0x000000BCu); // 803A478C
  goto L_803A47AC; // 803A4790
L_803A4794:;
  c->r[0]=R8(c->r[31]+0x00000032u); // 803A4794
  cmps(c,0,(int32_t)c->r[0],0); // 803A4798
  if (crb(c,2)) { goto L_803A47A8; } // 803A479C
  c->r[3]=c->r[31]|c->r[31]; // 803A47A0
  c->lr=0x803A47A8u; f_8039D73C(c); // 803A47A4
L_803A47A8:;
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A47A8
L_803A47AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A47AC
  if (!crb(c,2)) { IRQCHK(c); goto L_803A4794; } // 803A47B0
  c->lr=0x803A47B8u; f_803ABEB8(c); // 803A47B4
  c->r[3]=c->r[3]+0x00000354u; // 803A47B8
  c->lr=0x803A47C0u; f_8025FDA8(c); // 803A47BC
  c->lr=0x803A47C4u; f_803ABEB8(c); // 803A47C0
  c->r[3]=c->r[3]+0x00000354u; // 803A47C4
  c->lr=0x803A47CCu; f_8025FCCC(c); // 803A47C8
  c->r[31]=R32(c->r[29]+0x000000BCu); // 803A47CC
  goto L_803A47E0; // 803A47D0
L_803A47D4:;
  c->r[3]=c->r[31]|c->r[31]; // 803A47D4
  c->lr=0x803A47DCu; f_8039DC0C(c); // 803A47D8
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A47DC
L_803A47E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A47E0
  if (!crb(c,2)) { IRQCHK(c); goto L_803A47D4; } // 803A47E4
  c->r[31]=0u+0x00000000u; // 803A47E8
  W32(c->r[29]+0x000000BCu,c->r[31]); // 803A47EC
  c->lr=0x803A47F4u; f_803ABEB8(c); // 803A47F0
  c->r[3]=c->r[3]+0x00000354u; // 803A47F4
  c->lr=0x803A47FCu; f_8025FDA8(c); // 803A47F8
  W8(c->r[29]+0x00000005u,c->r[31]); // 803A47FC
  c->lr=0x803A4804u; f_803ABEB8(c); // 803A4800
  c->r[3]=c->r[3]+0x00000354u; // 803A4804
  c->lr=0x803A480Cu; f_8025FDA8(c); // 803A4808
  cmps(c,0,(int32_t)c->r[30],0); // 803A480C
  if (!crb(c,1)) { goto L_803A481C; } // 803A4810
  c->r[3]=c->r[29]|c->r[29]; // 803A4814
  c->lr=0x803A481Cu; f_802896EC(c); // 803A4818
L_803A481C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A481C
  c->r[3]=c->r[29]|c->r[29]; // 803A4820
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A4824
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A4828
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A482C
  c->lr=c->r[0]; // 803A4830
  c->r[1]=c->r[1]+0x00000020u; // 803A4834
  return; // 803A4838
}

// fn_803A483C
void f_803A483C(Ctx* __restrict c) {
  trace_call(0x803A483Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A483C
  c->r[0]=c->lr; // 803A4840
  {uint32_t ea=c->r[2]+0xFFFFEECCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A4844
  c->r[5]=0u+0x000000FFu; // 803A4848
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A484C
  c->r[6]=0u+0x0000007Fu; // 803A4850
  {uint32_t ea=c->r[2]+0xFFFFEEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A4854
  c->r[7]=0u+0x00000040u; // 803A4858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A485C
  c->r[31]=0u+0x00000000u; // 803A4860
  c->r[4]=0u+0x00000002u; // 803A4864
  c->r[0]=0u+0x0000003Cu; // 803A4868
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A486C
  c->r[30]=c->r[3]|c->r[3]; // 803A4870
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 803A4874
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 803A4878
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 803A487C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 803A4880
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 803A4884
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 803A4888
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 803A488C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 803A4890
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 803A4894
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 803A4898
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 803A489C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 803A48A0
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 803A48A4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 803A48A8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 803A48AC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 803A48B0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 803A48B4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 803A48B8
  W32(c->r[3]+0x00000050u,c->r[31]); // 803A48BC
  W32(c->r[3]+0x00000054u,c->r[31]); // 803A48C0
  W32(c->r[3]+0x00000064u,c->r[31]); // 803A48C4
  W32(c->r[3]+0x00000068u,c->r[31]); // 803A48C8
  W8(c->r[3]+0x0000008Cu,c->r[7]); // 803A48CC
  W32(c->r[3]+0x00000058u,c->r[31]); // 803A48D0
  W8(c->r[3]+0x0000005Cu,c->r[31]); // 803A48D4
  W8(c->r[3]+0x0000005Du,c->r[31]); // 803A48D8
  W8(c->r[3]+0x0000005Eu,c->r[31]); // 803A48DC
  W8(c->r[3]+0x0000005Fu,c->r[31]); // 803A48E0
  W8(c->r[3]+0x00000060u,c->r[31]); // 803A48E4
  W8(c->r[3]+0x00000084u,c->r[6]); // 803A48E8
  W8(c->r[3]+0x00000085u,c->r[6]); // 803A48EC
  W8(c->r[3]+0x00000088u,c->r[31]); // 803A48F0
  W8(c->r[3]+0x00000089u,c->r[31]); // 803A48F4
  W8(c->r[3]+0x0000008Au,c->r[31]); // 803A48F8
  W8(c->r[3]+0x00000086u,c->r[31]); // 803A48FC
  W8(c->r[3]+0x0000008Fu,c->r[5]); // 803A4900
  W8(c->r[3]+0x00000090u,c->r[5]); // 803A4904
  W8(c->r[3]+0x00000091u,c->r[5]); // 803A4908
  W8(c->r[3]+0x00000092u,c->r[5]); // 803A490C
  W8(c->r[3]+0x00000093u,c->r[6]); // 803A4910
  W8(c->r[3]+0x00000094u,c->r[31]); // 803A4914
  W8(c->r[3]+0x00000095u,c->r[31]); // 803A4918
  W8(c->r[3]+0x00000096u,c->r[31]); // 803A491C
  W8(c->r[3]+0x00000097u,c->r[7]); // 803A4920
  W8(c->r[3]+0x00000087u,c->r[4]); // 803A4924
  W8(c->r[3]+0x0000008Du,c->r[0]); // 803A4928
  W8(c->r[3]+0x0000008Eu,c->r[31]); // 803A492C
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 803A4930
  W8(c->r[3]+0x0000008Bu,c->r[31]); // 803A4934
  c->r[3]=c->r[3]+0x0000006Cu; // 803A4938
  c->lr=0x803A4940u; f_803A0AE4(c); // 803A493C
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 803A4940
  c->r[0]=0u+0xFFFFFFFFu; // 803A4944
  W16(c->r[30]+0x00000098u,c->r[0]); // 803A4948
  W16(c->r[30]+0x0000009Au,c->r[0]); // 803A494C
  W16(c->r[30]+0x0000009Cu,c->r[0]); // 803A4950
  W16(c->r[30]+0x0000009Eu,c->r[0]); // 803A4954
  W16(c->r[30]+0x000000A0u,c->r[0]); // 803A4958
  W16(c->r[30]+0x000000A2u,c->r[0]); // 803A495C
  W16(c->r[30]+0x000000A4u,c->r[0]); // 803A4960
  W16(c->r[30]+0x000000A6u,c->r[0]); // 803A4964
  W16(c->r[30]+0x000000A8u,c->r[0]); // 803A4968
  W16(c->r[30]+0x000000AAu,c->r[0]); // 803A496C
  W16(c->r[30]+0x000000ACu,c->r[0]); // 803A4970
  W16(c->r[30]+0x000000AEu,c->r[0]); // 803A4974
  W16(c->r[30]+0x000000B0u,c->r[0]); // 803A4978
  W16(c->r[30]+0x000000B2u,c->r[0]); // 803A497C
  W16(c->r[30]+0x000000B4u,c->r[0]); // 803A4980
  W16(c->r[30]+0x000000B6u,c->r[0]); // 803A4984
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A4988
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A498C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A4990
  c->lr=c->r[0]; // 803A4994
  c->r[1]=c->r[1]+0x00000010u; // 803A4998
  return; // 803A499C
}

// SetSeqData__Q44nw4r3snd6detail8SeqTrackFPCvl
void f_803A49A0(Ctx* __restrict c) {
  trace_call(0x803A49A0u);
  c->r[0]=c->r[4]+c->r[5]; // 803A49A0
  W32(c->r[3]+0x00000050u,c->r[4]); // 803A49A4
  W32(c->r[3]+0x00000054u,c->r[0]); // 803A49A8
  return; // 803A49AC
}

// fn_803A49B0
void f_803A49B0(Ctx* __restrict c) {
  trace_call(0x803A49B0u);
  c->r[0]=0u+0x00000001u; // 803A49B0
  W8(c->r[3]+0x00000005u,c->r[0]); // 803A49B4
  return; // 803A49B8
}

// Close__Q44nw4r3snd6detail8SeqTrackFv
void f_803A49BC(Ctx* __restrict c) {
  trace_call(0x803A49BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A49BC
  c->r[0]=c->lr; // 803A49C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A49C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A49C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A49CC
  c->r[30]=c->r[3]|c->r[3]; // 803A49D0
  c->lr=0x803A49D8u; f_803ABEB8(c); // 803A49D4
  c->r[3]=c->r[3]+0x00000354u; // 803A49D8
  c->lr=0x803A49E0u; f_8025FCCC(c); // 803A49DC
  c->lr=0x803A49E4u; f_803ABEB8(c); // 803A49E0
  c->r[3]=c->r[3]+0x00000354u; // 803A49E4
  c->lr=0x803A49ECu; f_8025FCCC(c); // 803A49E8
  c->r[3]=c->r[30]|c->r[30]; // 803A49EC
  c->lr=0x803A49F4u; f_803A4DC4(c); // 803A49F0
  c->r[31]=R32(c->r[30]+0x000000BCu); // 803A49F4
  goto L_803A4A14; // 803A49F8
L_803A49FC:;
  c->r[0]=R8(c->r[31]+0x00000032u); // 803A49FC
  cmps(c,0,(int32_t)c->r[0],0); // 803A4A00
  if (crb(c,2)) { goto L_803A4A10; } // 803A4A04
  c->r[3]=c->r[31]|c->r[31]; // 803A4A08
  c->lr=0x803A4A10u; f_8039D73C(c); // 803A4A0C
L_803A4A10:;
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A4A10
L_803A4A14:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A4A14
  if (!crb(c,2)) { IRQCHK(c); goto L_803A49FC; } // 803A4A18
  c->lr=0x803A4A20u; f_803ABEB8(c); // 803A4A1C
  c->r[3]=c->r[3]+0x00000354u; // 803A4A20
  c->lr=0x803A4A28u; f_8025FDA8(c); // 803A4A24
  c->lr=0x803A4A2Cu; f_803ABEB8(c); // 803A4A28
  c->r[3]=c->r[3]+0x00000354u; // 803A4A2C
  c->lr=0x803A4A34u; f_8025FCCC(c); // 803A4A30
  c->r[31]=R32(c->r[30]+0x000000BCu); // 803A4A34
  goto L_803A4A48; // 803A4A38
L_803A4A3C:;
  c->r[3]=c->r[31]|c->r[31]; // 803A4A3C
  c->lr=0x803A4A44u; f_8039DC0C(c); // 803A4A40
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A4A44
L_803A4A48:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A4A48
  if (!crb(c,2)) { IRQCHK(c); goto L_803A4A3C; } // 803A4A4C
  c->r[31]=0u+0x00000000u; // 803A4A50
  W32(c->r[30]+0x000000BCu,c->r[31]); // 803A4A54
  c->lr=0x803A4A5Cu; f_803ABEB8(c); // 803A4A58
  c->r[3]=c->r[3]+0x00000354u; // 803A4A5C
  c->lr=0x803A4A64u; f_8025FDA8(c); // 803A4A60
  W8(c->r[30]+0x00000005u,c->r[31]); // 803A4A64
  c->lr=0x803A4A6Cu; f_803ABEB8(c); // 803A4A68
  c->r[3]=c->r[3]+0x00000354u; // 803A4A6C
  c->lr=0x803A4A74u; f_8025FDA8(c); // 803A4A70
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A4A74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A4A78
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A4A7C
  c->lr=c->r[0]; // 803A4A80
  c->r[1]=c->r[1]+0x00000010u; // 803A4A84
  return; // 803A4A88
}

// fn_803A4A8C
void f_803A4A8C(Ctx* __restrict c) {
  trace_call(0x803A4A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4A8C
  c->r[0]=c->lr; // 803A4A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A4A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A4A98
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A4A9C
  c->r[30]=c->r[3]|c->r[3]; // 803A4AA0
  c->lr=0x803A4AA8u; f_803ABEB8(c); // 803A4AA4
  c->r[3]=c->r[3]+0x00000354u; // 803A4AA8
  c->lr=0x803A4AB0u; f_8025FCCC(c); // 803A4AAC
  c->r[0]=R8(c->r[30]+0x00000005u); // 803A4AB0
  cmps(c,0,(int32_t)c->r[0],0); // 803A4AB4
  if (!crb(c,2)) { goto L_803A4ACC; } // 803A4AB8
  c->lr=0x803A4AC0u; f_803ABEB8(c); // 803A4ABC
  c->r[3]=c->r[3]+0x00000354u; // 803A4AC0
  c->lr=0x803A4AC8u; f_8025FDA8(c); // 803A4AC4
  goto L_803A4B5C; // 803A4AC8
L_803A4ACC:;
  c->r[31]=R32(c->r[30]+0x000000BCu); // 803A4ACC
  goto L_803A4B48; // 803A4AD0
L_803A4AD4:;
  c->r[3]=R32(c->r[31]+0x000000C8u); // 803A4AD4
  cmps(c,0,(int32_t)c->r[3],0); // 803A4AD8
  if (!crb(c,1)) { goto L_803A4AE8; } // 803A4ADC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803A4AE0
  W32(c->r[31]+0x000000C8u,c->r[0]); // 803A4AE4
L_803A4AE8:;
  c->lr=0x803A4AECu; f_803ABEB8(c); // 803A4AE8
  c->r[3]=c->r[3]+0x00000354u; // 803A4AEC
  c->lr=0x803A4AF4u; f_8025FCCC(c); // 803A4AF0
  c->r[0]=R32(c->r[31]+0x000000C8u); // 803A4AF4
  cmps(c,0,(int32_t)c->r[0],0); // 803A4AF8
  if (!crb(c,2)) { goto L_803A4B20; } // 803A4AFC
  c->r[0]=R32(c->r[31]+0x00000000u); // 803A4B00
  cmps(c,0,(int32_t)c->r[0],3); // 803A4B04
  if (crb(c,2)) { goto L_803A4B20; } // 803A4B08
  c->r[0]=R8(c->r[30]+0x00000060u); // 803A4B0C
  cmps(c,0,(int32_t)c->r[0],0); // 803A4B10
  if (!crb(c,2)) { goto L_803A4B20; } // 803A4B14
  c->r[3]=c->r[31]|c->r[31]; // 803A4B18
  c->lr=0x803A4B20u; f_8039D73C(c); // 803A4B1C
L_803A4B20:;
  c->lr=0x803A4B24u; f_803ABEB8(c); // 803A4B20
  c->r[3]=c->r[3]+0x00000354u; // 803A4B24
  c->lr=0x803A4B2Cu; f_8025FDA8(c); // 803A4B28
  c->r[0]=R8(c->r[31]+0x00000034u); // 803A4B2C
  cmps(c,0,(int32_t)c->r[0],0); // 803A4B30
  if (!crb(c,2)) { goto L_803A4B44; } // 803A4B34
  c->r[3]=c->r[31]|c->r[31]; // 803A4B38
  c->r[4]=0u+0x00000001u; // 803A4B3C
  c->lr=0x803A4B44u; f_8039D8AC(c); // 803A4B40
L_803A4B44:;
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A4B44
L_803A4B48:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A4B48
  if (!crb(c,2)) { IRQCHK(c); goto L_803A4AD4; } // 803A4B4C
  c->lr=0x803A4B54u; f_803ABEB8(c); // 803A4B50
  c->r[3]=c->r[3]+0x00000354u; // 803A4B54
  c->lr=0x803A4B5Cu; f_8025FDA8(c); // 803A4B58
L_803A4B5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A4B5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A4B60
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A4B64
  c->lr=c->r[0]; // 803A4B68
  c->r[1]=c->r[1]+0x00000010u; // 803A4B6C
  return; // 803A4B70
}

// fn_803A4B74
void f_803A4B74(Ctx* __restrict c) {
  trace_call(0x803A4B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4B74
  c->r[0]=c->lr; // 803A4B78
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A4B7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A4B80
  c->r[31]=c->r[4]|c->r[4]; // 803A4B84
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A4B88
  c->r[30]=c->r[3]|c->r[3]; // 803A4B8C
  c->lr=0x803A4B94u; f_803ABEB8(c); // 803A4B90
  c->r[3]=c->r[3]+0x00000354u; // 803A4B94
  c->lr=0x803A4B9Cu; f_8025FCCC(c); // 803A4B98
  c->r[0]=R8(c->r[30]+0x00000005u); // 803A4B9C
  cmps(c,0,(int32_t)c->r[0],0); // 803A4BA0
  if (!crb(c,2)) { goto L_803A4BBC; } // 803A4BA4
  c->lr=0x803A4BACu; f_803ABEB8(c); // 803A4BA8
  c->r[3]=c->r[3]+0x00000354u; // 803A4BAC
  c->lr=0x803A4BB4u; f_8025FDA8(c); // 803A4BB0
  c->r[3]=0u+0x00000000u; // 803A4BB4
  goto L_803A4C88; // 803A4BB8
L_803A4BBC:;
  c->r[0]=R8(c->r[30]+0x0000005Eu); // 803A4BBC
  cmps(c,0,(int32_t)c->r[0],0); // 803A4BC0
  if (crb(c,2)) { goto L_803A4BF0; } // 803A4BC4
  c->r[0]=R32(c->r[30]+0x000000BCu); // 803A4BC8
  cmps(c,0,(int32_t)c->r[0],0); // 803A4BCC
  if (crb(c,2)) { goto L_803A4BE8; } // 803A4BD0
  c->lr=0x803A4BD8u; f_803ABEB8(c); // 803A4BD4
  c->r[3]=c->r[3]+0x00000354u; // 803A4BD8
  c->lr=0x803A4BE0u; f_8025FDA8(c); // 803A4BDC
  c->r[3]=0u+0x00000001u; // 803A4BE0
  goto L_803A4C88; // 803A4BE4
L_803A4BE8:;
  c->r[0]=0u+0x00000000u; // 803A4BE8
  W8(c->r[30]+0x0000005Eu,c->r[0]); // 803A4BEC
L_803A4BF0:;
  c->r[3]=R32(c->r[30]+0x00000058u); // 803A4BF0
  cmps(c,0,(int32_t)c->r[3],0); // 803A4BF4
  if (!crb(c,1)) { goto L_803A4C1C; } // 803A4BF8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 803A4BFC
  W32(c->r[30]+0x00000058u,c->r[0]); // 803A4C00
  if (!crb(c,1)) { goto L_803A4C1C; } // 803A4C04
  c->lr=0x803A4C0Cu; f_803ABEB8(c); // 803A4C08
  c->r[3]=c->r[3]+0x00000354u; // 803A4C0C
  c->lr=0x803A4C14u; f_8025FDA8(c); // 803A4C10
  c->r[3]=0u+0x00000001u; // 803A4C14
  goto L_803A4C88; // 803A4C18
L_803A4C1C:;
  c->r[0]=R32(c->r[30]+0x00000054u); // 803A4C1C
  cmps(c,0,(int32_t)c->r[0],0); // 803A4C20
  if (crb(c,2)) { goto L_803A4C78; } // 803A4C24
  goto L_803A4C60; // 803A4C28
L_803A4C2C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803A4C2C
  c->r[3]=c->r[30]|c->r[30]; // 803A4C30
  c->r[4]=c->r[31]|c->r[31]; // 803A4C34
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A4C38
  c->ctr=c->r[12]; // 803A4C3C
  if (true) { c->lr=0x803A4C44u; dispatch(c,c->ctr); } // 803A4C40
  cmps(c,0,(int32_t)c->r[3],1); // 803A4C44
  if (!crb(c,2)) { goto L_803A4C60; } // 803A4C48
  c->lr=0x803A4C50u; f_803ABEB8(c); // 803A4C4C
  c->r[3]=c->r[3]+0x00000354u; // 803A4C50
  c->lr=0x803A4C58u; f_8025FDA8(c); // 803A4C54
  c->r[3]=0u+0xFFFFFFFFu; // 803A4C58
  goto L_803A4C88; // 803A4C5C
L_803A4C60:;
  c->r[0]=R32(c->r[30]+0x00000058u); // 803A4C60
  cmps(c,0,(int32_t)c->r[0],0); // 803A4C64
  if (!crb(c,2)) { goto L_803A4C78; } // 803A4C68
  c->r[0]=R8(c->r[30]+0x0000005Eu); // 803A4C6C
  cmps(c,0,(int32_t)c->r[0],0); // 803A4C70
  if (crb(c,2)) { IRQCHK(c); goto L_803A4C2C; } // 803A4C74
L_803A4C78:;
  c->lr=0x803A4C7Cu; f_803ABEB8(c); // 803A4C78
  c->r[3]=c->r[3]+0x00000354u; // 803A4C7C
  c->lr=0x803A4C84u; f_8025FDA8(c); // 803A4C80
  c->r[3]=0u+0x00000001u; // 803A4C84
L_803A4C88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A4C88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A4C8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A4C90
  c->lr=c->r[0]; // 803A4C94
  c->r[1]=c->r[1]+0x00000010u; // 803A4C98
  return; // 803A4C9C
}

// ReleaseAllChannel__Q44nw4r3snd6detail8SeqTrackFi
void f_803A4CA0(Ctx* __restrict c) {
  trace_call(0x803A4CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4CA0
  c->r[0]=c->lr; // 803A4CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A4CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A4CAC
  c->r[31]=c->r[3]|c->r[3]; // 803A4CB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A4CB4
  c->r[30]=c->r[4]|c->r[4]; // 803A4CB8
  c->lr=0x803A4CC0u; f_803ABEB8(c); // 803A4CBC
  c->r[3]=c->r[3]+0x00000354u; // 803A4CC0
  c->lr=0x803A4CC8u; f_8025FCCC(c); // 803A4CC4
  c->r[3]=c->r[31]|c->r[31]; // 803A4CC8
  c->lr=0x803A4CD0u; f_803A4DC4(c); // 803A4CCC
  c->r[31]=R32(c->r[31]+0x000000BCu); // 803A4CD0
  goto L_803A4D04; // 803A4CD4
L_803A4CD8:;
  c->r[0]=R8(c->r[31]+0x00000032u); // 803A4CD8
  cmps(c,0,(int32_t)c->r[0],0); // 803A4CDC
  if (crb(c,2)) { goto L_803A4D00; } // 803A4CE0
  cmps(c,0,(int32_t)c->r[30],0); // 803A4CE4
  if (crb(c,0)) { goto L_803A4CF8; } // 803A4CE8
  c->r[3]=c->r[31]|c->r[31]; // 803A4CEC
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 803A4CF0
  c->lr=0x803A4CF8u; f_8039E880(c); // 803A4CF4
L_803A4CF8:;
  c->r[3]=c->r[31]|c->r[31]; // 803A4CF8
  c->lr=0x803A4D00u; f_8039D73C(c); // 803A4CFC
L_803A4D00:;
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A4D00
L_803A4D04:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A4D04
  if (!crb(c,2)) { IRQCHK(c); goto L_803A4CD8; } // 803A4D08
  c->lr=0x803A4D10u; f_803ABEB8(c); // 803A4D0C
  c->r[3]=c->r[3]+0x00000354u; // 803A4D10
  c->lr=0x803A4D18u; f_8025FDA8(c); // 803A4D14
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A4D18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A4D1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A4D20
  c->lr=c->r[0]; // 803A4D24
  c->r[1]=c->r[1]+0x00000010u; // 803A4D28
  return; // 803A4D2C
}

// PauseAllChannel__Q44nw4r3snd6detail8SeqTrackFb
void f_803A4D30(Ctx* __restrict c) {
  trace_call(0x803A4D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4D30
  c->r[0]=c->lr; // 803A4D34
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A4D38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A4D3C
  c->r[31]=c->r[3]|c->r[3]; // 803A4D40
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A4D44
  c->r[30]=c->r[4]|c->r[4]; // 803A4D48
  c->lr=0x803A4D50u; f_803ABEB8(c); // 803A4D4C
  c->r[3]=c->r[3]+0x00000354u; // 803A4D50
  c->lr=0x803A4D58u; f_8025FCCC(c); // 803A4D54
  c->r[31]=R32(c->r[31]+0x000000BCu); // 803A4D58
  goto L_803A4D98; // 803A4D5C
L_803A4D60:;
  c->r[0]=R8(c->r[31]+0x00000032u); // 803A4D60
  cmps(c,0,(int32_t)c->r[0],0); // 803A4D64
  if (crb(c,2)) { goto L_803A4D94; } // 803A4D68
  c->r[3]=R8(c->r[31]+0x00000031u); // 803A4D6C
  c->r[0]=0u-c->r[3]; // 803A4D70
  c->r[0]=c->r[0]|c->r[3]; // 803A4D74
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A4D78
  cmpu(c,0,c->r[30],c->r[0]); // 803A4D7C
  if (crb(c,2)) { goto L_803A4D94; } // 803A4D80
  W8(c->r[31]+0x00000031u,c->r[30]); // 803A4D84
  c->r[4]=c->r[30]|c->r[30]; // 803A4D88
  c->r[3]=R32(c->r[31]+0x000000DCu); // 803A4D8C
  c->lr=0x803A4D94u; f_803B0DAC(c); // 803A4D90
L_803A4D94:;
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A4D94
L_803A4D98:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A4D98
  if (!crb(c,2)) { IRQCHK(c); goto L_803A4D60; } // 803A4D9C
  c->lr=0x803A4DA4u; f_803ABEB8(c); // 803A4DA0
  c->r[3]=c->r[3]+0x00000354u; // 803A4DA4
  c->lr=0x803A4DACu; f_8025FDA8(c); // 803A4DA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A4DAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A4DB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A4DB4
  c->lr=c->r[0]; // 803A4DB8
  c->r[1]=c->r[1]+0x00000010u; // 803A4DBC
  return; // 803A4DC0
}

// fn_803A4DC4
void f_803A4DC4(Ctx* __restrict c) {
  trace_call(0x803A4DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A4DC4
  c->r[0]=c->lr; // 803A4DC8
  W32(c->r[1]+0x00000114u,c->r[0]); // 803A4DCC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 803A4DD0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 803A4DD4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 803A4DD8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 803A4DDC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 803A4DE0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 803A4DE4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[28]);} // 803A4DE8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,28,ea,0,0);} // 803A4DEC
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[27]);} // 803A4DF0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,27,ea,0,0);} // 803A4DF4
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[26]);} // 803A4DF8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,26,ea,0,0);} // 803A4DFC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[25]);} // 803A4E00
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,25,ea,0,0);} // 803A4E04
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[24]);} // 803A4E08
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,24,ea,0,0);} // 803A4E0C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[23]);} // 803A4E10
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,23,ea,0,0);} // 803A4E14
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[22]);} // 803A4E18
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,22,ea,0,0);} // 803A4E1C
  c->r[11]=c->r[1]+0x00000070u; // 803A4E20
  c->lr=0x803A4E28u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A4E24
  c->r[0]=0u+0x43300000u; // 803A4E28
  c->r[31]=c->r[3]|c->r[3]; // 803A4E2C
  W32(c->r[1]+0x00000038u,c->r[0]); // 803A4E30
  W32(c->r[1]+0x00000040u,c->r[0]); // 803A4E34
  c->lr=0x803A4E3Cu; f_803ABEB8(c); // 803A4E38
  c->r[3]=c->r[3]+0x00000354u; // 803A4E3C
  c->lr=0x803A4E44u; f_8025FCCC(c); // 803A4E40
  c->r[0]=R8(c->r[31]+0x00000005u); // 803A4E44
  cmps(c,0,(int32_t)c->r[0],0); // 803A4E48
  if (!crb(c,2)) { goto L_803A4E60; } // 803A4E4C
  c->lr=0x803A4E54u; f_803ABEB8(c); // 803A4E50
  c->r[3]=c->r[3]+0x00000354u; // 803A4E54
  c->lr=0x803A4E5Cu; f_8025FDA8(c); // 803A4E58
  goto L_803A5240; // 803A4E5C
L_803A4E60:;
  c->r[0]=R32(c->r[31]+0x000000BCu); // 803A4E60
  cmps(c,0,(int32_t)c->r[0],0); // 803A4E64
  if (!crb(c,2)) { goto L_803A4E7C; } // 803A4E68
  c->lr=0x803A4E70u; f_803ABEB8(c); // 803A4E6C
  c->r[3]=c->r[3]+0x00000354u; // 803A4E70
  c->lr=0x803A4E78u; f_8025FDA8(c); // 803A4E74
  goto L_803A5240; // 803A4E78
L_803A4E7C:;
  c->r[0]=R8(c->r[31]+0x00000084u); // 803A4E7C
  c->r[4]=R32(c->r[31]+0x000000B8u); // 803A4E80
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803A4E84
  c->r[0]=R8(c->r[31]+0x00000085u); // 803A4E88
  {uint32_t ea=c->r[2]+0xFFFFEEE8u; c->f[8]=RF64(ea);} // 803A4E8C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803A4E90
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803A4E94
  c->r[0]=R8(c->r[4]+0x000000A8u); // 803A4E98
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 803A4E9C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[8]); // 803A4EA0
  {uint32_t ea=c->r[2]+0xFFFFEED0u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A4EA4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803A4EA8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[8]); // 803A4EAC
  c->f[7]=c->ps1[7]=S(c->f[0]/c->f[3]); // 803A4EB0
  c->r[0]=R8(c->r[31]+0x00000086u); // 803A4EB4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803A4EB8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A4EBC
  c->r[0]=R8(c->r[31]+0x00000088u); // 803A4EC0
  c->r[3]=c->r[3]^0x80000000u; // 803A4EC4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[8]); // 803A4EC8
  {uint32_t ea=c->r[2]+0xFFFFEEC8u; c->f[28]=c->ps1[28]=RF32(ea);} // 803A4ECC
  W32(c->r[1]+0x00000044u,c->r[3]); // 803A4ED0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A4ED4
  c->f[13]=c->ps1[13]=S(c->f[1]/c->f[3]); // 803A4ED8
  c->r[0]=c->r[0]^0x80000000u; // 803A4EDC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[4]=RF64(ea);} // 803A4EE0
  {uint32_t ea=c->r[2]+0xFFFFEEF0u; c->f[5]=RF64(ea);} // 803A4EE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 803A4EE8
  c->r[0]=R8(c->r[31]+0x00000087u); // 803A4EEC
  c->f[22]=c->ps1[22]=S(c->f[2]/c->f[3]); // 803A4EF0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=RF64(ea);} // 803A4EF4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803A4EF8
  {uint32_t ea=c->r[2]+0xFFFFEED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A4EFC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 803A4F00
  {uint32_t ea=c->r[31]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 803A4F04
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 803A4F08
  {uint32_t ea=c->r[2]+0xFFFFEED4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A4F0C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 803A4F10
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 803A4F14
  c->f[26]=c->f[28]; // 803A4F18
  {uint32_t ea=c->r[4]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 803A4F1C
  c->f[9]=c->ps1[9]=S(c->f[1]/c->f[0]); // 803A4F20
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A4F24
  {uint32_t ea=c->r[2]+0xFFFFEECCu; c->f[25]=c->ps1[25]=RF32(ea);} // 803A4F28
  c->f[12]=c->f[28]; // 803A4F2C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[7]); // 803A4F30
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[11]); // 803A4F34
  c->f[1]=c->ps1[1]=S(c->f[13]*c->f[13]); // 803A4F38
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[7]); // 803A4F3C
  c->f[5]=c->ps1[5]=S(c->f[22]*c->f[22]); // 803A4F40
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803A4F44
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[1]); // 803A4F48
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[8]); // 803A4F4C
  fcmp(c,0,c->f[9],c->f[12]); // 803A4F50
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[5]); // 803A4F54
  c->f[27]=c->ps1[27]=S(c->f[3]*c->f[1]); // 803A4F58
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[0]); // 803A4F5C
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[6]); // 803A4F60
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[10]); // 803A4F64
  if (!crb(c,1)) { goto L_803A4F70; } // 803A4F68
  goto L_803A4F84; // 803A4F6C
L_803A4F70:;
  {uint32_t ea=c->r[2]+0xFFFFEEDCu; c->f[12]=c->ps1[12]=RF32(ea);} // 803A4F70
  fcmp(c,0,c->f[9],c->f[12]); // 803A4F74
  if (!crb(c,0)) { goto L_803A4F80; } // 803A4F78
  goto L_803A4F84; // 803A4F7C
L_803A4F80:;
  c->f[12]=c->f[9]; // 803A4F80
L_803A4F84:;
  c->r[0]=R8(c->r[31]+0x0000008Au); // 803A4F84
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[12]); // 803A4F88
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A4F8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A4F90
  {uint32_t ea=c->r[2]+0xFFFFEEF0u; c->f[2]=RF64(ea);} // 803A4F94
  c->r[0]=c->r[0]^0x80000000u; // 803A4F98
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[1]); // 803A4F9C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803A4FA0
  {uint32_t ea=c->r[4]+0x00000090u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A4FA4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 803A4FA8
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[3]); // 803A4FAC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A4FB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A4FB4
  {uint32_t ea=c->r[2]+0xFFFFEED8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A4FB8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A4FBC
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[3]); // 803A4FC0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 803A4FC4
  {uint32_t ea=c->r[2]+0xFFFFEEE0u; c->f[4]=c->ps1[4]=RF32(ea);} // 803A4FC8
  {uint32_t ea=c->r[2]+0xFFFFEECCu; c->f[24]=c->ps1[24]=RF32(ea);} // 803A4FCC
  fcmp(c,0,c->f[0],c->f[4]); // 803A4FD0
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[2]); // 803A4FD4
  if (!crb(c,1)) { goto L_803A4FE0; } // 803A4FD8
  goto L_803A4FF0; // 803A4FDC
L_803A4FE0:;
  fcmp(c,0,c->f[0],c->f[24]); // 803A4FE0
  if (!crb(c,0)) { goto L_803A4FEC; } // 803A4FE4
  c->f[0]=c->f[24]; // 803A4FE8
L_803A4FEC:;
  c->f[4]=c->f[0]; // 803A4FEC
L_803A4FF0:;
  c->r[0]=R8(c->r[31]+0x00000093u); // 803A4FF0
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 803A4FF4
  {uint32_t ea=c->r[2]+0xFFFFEECCu; c->f[23]=c->ps1[23]=RF32(ea);} // 803A4FF8
  c->r[28]=c->r[31]|c->r[31]; // 803A4FFC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 803A5000
  c->r[27]=c->r[1]+0x00000028u; // 803A5004
  c->r[3]=R8(c->r[31]+0x00000097u); // 803A5008
  {uint32_t ea=c->r[2]+0xFFFFEEE8u; c->f[29]=RF64(ea);} // 803A500C
  c->f[22]=c->f[23]; // 803A5010
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 803A5014
  c->r[0]=c->r[3]+0xFFFFFFC0u; // 803A5018
  c->r[0]=c->r[0]^0x80000000u; // 803A501C
  {uint32_t ea=c->r[31]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 803A5020
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 803A5024
  {uint32_t ea=c->r[2]+0xFFFFEED0u; c->f[30]=c->ps1[30]=RF32(ea);} // 803A5028
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[5]); // 803A502C
  W32(c->r[1]+0x00000044u,c->r[0]); // 803A5030
  c->r[29]=0u+0x00000000u; // 803A5034
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[30]); // 803A5038
  {uint32_t ea=c->r[2]+0xFFFFEEC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A503C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 803A5040
  {uint32_t ea=c->r[2]+0xFFFFEEF0u; c->f[4]=RF64(ea);} // 803A5044
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 803A5048
  {uint32_t ea=c->r[2]+0xFFFFEEE4u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A504C
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[4]); // 803A5050
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A5054
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 803A5058
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A505C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[5]); // 803A5060
  c->r[30]=R8(c->r[4]+0x00000068u); // 803A5064
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 803A5068
  {uint32_t ea=c->r[4]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 803A506C
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[1]); // 803A5070
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A5074
  {uint32_t ea=c->r[2]+0xFFFFEECCu; c->f[31]=c->ps1[31]=RF32(ea);} // 803A5078
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[3]); // 803A507C
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[0]); // 803A5080
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[2]); // 803A5084
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[1]); // 803A5088
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[4]); // 803A508C
L_803A5090:;
  c->r[3]=c->r[31]+c->r[29]; // 803A5090
  c->f[1]=c->ps1[1]=S(c->f[31]); // 803A5094
  c->r[0]=R8(c->r[3]+0x00000094u); // 803A5098
  c->r[4]=c->r[29]|c->r[29]; // 803A509C
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A50A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 803A50A4
  c->r[3]=R32(c->r[31]+0x000000B8u); // 803A50A8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 803A50AC
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[31]);} // 803A50B0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[29]); // 803A50B4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 803A50B8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 803A50BC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803A50C0
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 803A50C4
  c->lr=0x803A50CCu; f_8039BA04(c); // 803A50C8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A50CC
  c->r[29]=c->r[29]+0x00000001u; // 803A50D0
  cmps(c,0,(int32_t)c->r[29],3); // 803A50D4
  c->r[28]=c->r[28]+0x00000004u; // 803A50D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803A50DC
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 803A50E0
  c->r[27]=c->r[27]+0x00000004u; // 803A50E4
  if (crb(c,0)) { IRQCHK(c); goto L_803A5090; } // 803A50E8
  {uint32_t ea=c->r[2]+0xFFFFEECCu; c->f[29]=c->ps1[29]=RF32(ea);} // 803A50EC
  c->r[27]=c->r[1]+0x00000018u; // 803A50F0
  c->r[28]=c->r[1]+0x00000008u; // 803A50F4
  c->r[29]=0u+0x00000000u; // 803A50F8
L_803A50FC:;
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[29]);} // 803A50FC
  c->r[4]=c->r[29]|c->r[29]; // 803A5100
  c->r[3]=R32(c->r[31]+0x000000B8u); // 803A5104
  c->lr=0x803A510Cu; f_8039BA34(c); // 803A5108
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A510C
  c->r[4]=c->r[29]|c->r[29]; // 803A5110
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[29]);} // 803A5114
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803A5118
  c->r[3]=R32(c->r[31]+0x000000B8u); // 803A511C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 803A5120
  c->lr=0x803A5128u; f_8039BA44(c); // 803A5124
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5128
  c->r[29]=c->r[29]+0x00000001u; // 803A512C
  cmps(c,0,(int32_t)c->r[29],4); // 803A5130
  c->r[27]=c->r[27]+0x00000004u; // 803A5134
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803A5138
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 803A513C
  c->r[28]=c->r[28]+0x00000004u; // 803A5140
  if (crb(c,0)) { IRQCHK(c); goto L_803A50FC; } // 803A5144
  c->r[26]=R32(c->r[31]+0x000000BCu); // 803A5148
  {uint32_t ea=c->r[1]+0x00000028u; c->f[29]=c->ps1[29]=RF32(ea);} // 803A514C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 803A5150
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=c->ps1[30]=RF32(ea);} // 803A5154
  goto L_803A522C; // 803A5158
L_803A515C:;
  {uint32_t ea=c->r[26]+0x00000038u; WF32(ea,c->f[28]);} // 803A515C
  c->r[29]=c->r[26]|c->r[26]; // 803A5160
  c->r[28]=c->r[1]+0x00000018u; // 803A5164
  c->r[27]=c->r[1]+0x00000008u; // 803A5168
  {uint32_t ea=c->r[26]+0x00000098u; WF32(ea,c->f[27]);} // 803A516C
  c->r[25]=0u+0x00000000u; // 803A5170
  {uint32_t ea=c->r[26]+0x0000003Cu; WF32(ea,c->f[26]);} // 803A5174
  {uint32_t ea=c->r[26]+0x00000040u; WF32(ea,c->f[25]);} // 803A5178
  {uint32_t ea=c->r[26]+0x00000044u; WF32(ea,c->f[24]);} // 803A517C
  {uint32_t ea=c->r[26]+0x00000048u; WF32(ea,c->f[23]);} // 803A5180
  W32(c->r[26]+0x0000004Cu,c->r[30]); // 803A5184
  c->r[3]=R32(c->r[31]+0x000000B8u); // 803A5188
  c->r[0]=R32(c->r[3]+0x00000020u); // 803A518C
  W32(c->r[26]+0x00000050u,c->r[0]); // 803A5190
  c->r[3]=R32(c->r[31]+0x000000B8u); // 803A5194
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5198
  {uint32_t ea=c->r[26]+0x00000054u; WF32(ea,c->f[0]);} // 803A519C
  {uint32_t ea=c->r[26]+0x00000058u; WF32(ea,c->f[22]);} // 803A51A0
  {uint32_t ea=c->r[26]+0x0000005Cu; WF32(ea,c->f[29]);} // 803A51A4
  {uint32_t ea=c->r[26]+0x00000060u; WF32(ea,c->f[31]);} // 803A51A8
  {uint32_t ea=c->r[26]+0x00000064u; WF32(ea,c->f[30]);} // 803A51AC
L_803A51B0:;
  c->r[3]=R32(c->r[31]+0x000000B8u); // 803A51B0
  c->r[4]=c->r[25]|c->r[25]; // 803A51B4
  c->lr=0x803A51BCu; f_8039BA24(c); // 803A51B8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A51BC
  c->r[25]=c->r[25]+0x00000001u; // 803A51C0
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[1]);} // 803A51C4
  cmps(c,0,(int32_t)c->r[25],4); // 803A51C8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A51CC
  c->r[28]=c->r[28]+0x00000004u; // 803A51D0
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 803A51D4
  c->r[27]=c->r[27]+0x00000004u; // 803A51D8
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[1]);} // 803A51DC
  c->r[29]=c->r[29]+0x00000004u; // 803A51E0
  if (crb(c,0)) { IRQCHK(c); goto L_803A51B0; } // 803A51E4
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A51E8
  {uint32_t ea=c->r[26]+0x00000018u; WF32(ea,c->f[0]);} // 803A51EC
  {uint32_t ea=c->r[31]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A51F0
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[0]);} // 803A51F4
  c->r[0]=R32(c->r[31]+0x00000074u); // 803A51F8
  W32(c->r[26]+0x00000020u,c->r[0]); // 803A51FC
  c->r[0]=R8(c->r[31]+0x00000078u); // 803A5200
  W8(c->r[26]+0x00000024u,c->r[0]); // 803A5204
  c->r[0]=R8(c->r[31]+0x00000079u); // 803A5208
  W8(c->r[26]+0x00000025u,c->r[0]); // 803A520C
  c->r[0]=R8(c->r[31]+0x0000007Au); // 803A5210
  W8(c->r[26]+0x00000026u,c->r[0]); // 803A5214
  c->r[0]=R8(c->r[31]+0x0000007Bu); // 803A5218
  W8(c->r[26]+0x00000027u,c->r[0]); // 803A521C
  c->r[0]=R8(c->r[31]+0x0000007Cu); // 803A5220
  W8(c->r[26]+0x00000030u,c->r[0]); // 803A5224
  c->r[26]=R32(c->r[26]+0x000000E0u); // 803A5228
L_803A522C:;
  cmps(c,0,(int32_t)c->r[26],0); // 803A522C
  if (!crb(c,2)) { IRQCHK(c); goto L_803A515C; } // 803A5230
  c->lr=0x803A5238u; f_803ABEB8(c); // 803A5234
  c->r[3]=c->r[3]+0x00000354u; // 803A5238
  c->lr=0x803A5240u; f_8025FDA8(c); // 803A523C
L_803A5240:;
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 803A5240
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 803A5244
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 803A5248
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 803A524C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 803A5250
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 803A5254
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,28,ea,0,0);} // 803A5258
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=RF64(ea);} // 803A525C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,27,ea,0,0);} // 803A5260
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[27]=RF64(ea);} // 803A5264
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,26,ea,0,0);} // 803A5268
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[26]=RF64(ea);} // 803A526C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,25,ea,0,0);} // 803A5270
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[25]=RF64(ea);} // 803A5274
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,24,ea,0,0);} // 803A5278
  {uint32_t ea=c->r[1]+0x00000090u; c->f[24]=RF64(ea);} // 803A527C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,23,ea,0,0);} // 803A5280
  {uint32_t ea=c->r[1]+0x00000080u; c->f[23]=RF64(ea);} // 803A5284
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,22,ea,0,0);} // 803A5288
  c->r[11]=c->r[1]+0x00000070u; // 803A528C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[22]=RF64(ea);} // 803A5290
  c->lr=0x803A5298u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A5294
  c->r[0]=R32(c->r[1]+0x00000114u); // 803A5298
  c->lr=c->r[0]; // 803A529C
  c->r[1]=c->r[1]+0x00000110u; // 803A52A0
  return; // 803A52A4
}

// FreeAllChannel__Q44nw4r3snd6detail8SeqTrackFv
void f_803A52A8(Ctx* __restrict c) {
  trace_call(0x803A52A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A52A8
  c->r[0]=c->lr; // 803A52AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A52B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A52B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A52B8
  c->r[30]=c->r[3]|c->r[3]; // 803A52BC
  c->lr=0x803A52C4u; f_803ABEB8(c); // 803A52C0
  c->r[3]=c->r[3]+0x00000354u; // 803A52C4
  c->lr=0x803A52CCu; f_8025FCCC(c); // 803A52C8
  c->r[31]=R32(c->r[30]+0x000000BCu); // 803A52CC
  goto L_803A52E0; // 803A52D0
L_803A52D4:;
  c->r[3]=c->r[31]|c->r[31]; // 803A52D4
  c->lr=0x803A52DCu; f_8039DC0C(c); // 803A52D8
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A52DC
L_803A52E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A52E0
  if (!crb(c,2)) { IRQCHK(c); goto L_803A52D4; } // 803A52E4
  c->r[0]=0u+0x00000000u; // 803A52E8
  W32(c->r[30]+0x000000BCu,c->r[0]); // 803A52EC
  c->lr=0x803A52F4u; f_803ABEB8(c); // 803A52F0
  c->r[3]=c->r[3]+0x00000354u; // 803A52F4
  c->lr=0x803A52FCu; f_8025FDA8(c); // 803A52F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A52FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A5300
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A5304
  c->lr=c->r[0]; // 803A5308
  c->r[1]=c->r[1]+0x00000010u; // 803A530C
  return; // 803A5310
}

// fn_803A5314
void f_803A5314(Ctx* __restrict c) {
  trace_call(0x803A5314u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A5314
  c->r[0]=c->lr; // 803A5318
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A531C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A5320
  c->r[31]=c->r[5]|c->r[5]; // 803A5324
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A5328
  c->r[30]=c->r[4]|c->r[4]; // 803A532C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A5330
  c->r[29]=c->r[3]|c->r[3]; // 803A5334
  c->lr=0x803A533Cu; f_803ABEB8(c); // 803A5338
  c->r[3]=c->r[3]+0x00000354u; // 803A533C
  c->lr=0x803A5344u; f_8025FCCC(c); // 803A5340
  cmps(c,0,(int32_t)c->r[30],1); // 803A5344
  if (crb(c,2)) { goto L_803A536C; } // 803A5348
  if (!crb(c,0)) { goto L_803A535C; } // 803A534C
  cmps(c,0,(int32_t)c->r[30],0); // 803A5350
  if (!crb(c,0)) { goto L_803A5364; } // 803A5354
  goto L_803A536C; // 803A5358
L_803A535C:;
  cmps(c,0,(int32_t)c->r[30],3); // 803A535C
  if (!crb(c,0)) { goto L_803A536C; } // 803A5360
L_803A5364:;
  c->r[3]=c->r[29]|c->r[29]; // 803A5364
  c->lr=0x803A536Cu; f_8039DC0C(c); // 803A5368
L_803A536C:;
  c->r[3]=R32(c->r[31]+0x000000B8u); // 803A536C
  cmps(c,0,(int32_t)c->r[3],0); // 803A5370
  if (crb(c,2)) { goto L_803A538C; } // 803A5374
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A5378
  c->r[4]=c->r[29]|c->r[29]; // 803A537C
  c->r[12]=R32(c->r[12]+0x00000058u); // 803A5380
  c->ctr=c->r[12]; // 803A5384
  if (true) { c->lr=0x803A538Cu; dispatch(c,c->ctr); } // 803A5388
L_803A538C:;
  c->r[3]=R32(c->r[31]+0x000000BCu); // 803A538C
  cmpu(c,0,c->r[3],c->r[29]); // 803A5390
  if (!crb(c,2)) { goto L_803A53D8; } // 803A5394
  c->r[0]=R32(c->r[29]+0x000000E0u); // 803A5398
  W32(c->r[31]+0x000000BCu,c->r[0]); // 803A539C
  c->lr=0x803A53A4u; f_803ABEB8(c); // 803A53A0
  c->r[3]=c->r[3]+0x00000354u; // 803A53A4
  c->lr=0x803A53ACu; f_8025FDA8(c); // 803A53A8
  goto L_803A53F0; // 803A53AC
  goto L_803A53D8; // 803A53B0
L_803A53B4:;
  cmpu(c,0,c->r[0],c->r[29]); // 803A53B4
  if (!crb(c,2)) { goto L_803A53D4; } // 803A53B8
  c->r[0]=R32(c->r[29]+0x000000E0u); // 803A53BC
  W32(c->r[3]+0x000000E0u,c->r[0]); // 803A53C0
  c->lr=0x803A53C8u; f_803ABEB8(c); // 803A53C4
  c->r[3]=c->r[3]+0x00000354u; // 803A53C8
  c->lr=0x803A53D0u; f_8025FDA8(c); // 803A53CC
  goto L_803A53F0; // 803A53D0
L_803A53D4:;
  c->r[3]=c->r[0]|c->r[0]; // 803A53D4
L_803A53D8:;
  c->r[0]=R32(c->r[3]+0x000000E0u); // 803A53D8
  cmps(c,0,(int32_t)c->r[0],0); // 803A53DC
  if (!crb(c,2)) { IRQCHK(c); goto L_803A53B4; } // 803A53E0
  c->lr=0x803A53E8u; f_803ABEB8(c); // 803A53E4
  c->r[3]=c->r[3]+0x00000354u; // 803A53E8
  c->lr=0x803A53F0u; f_8025FDA8(c); // 803A53EC
L_803A53F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A53F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A53F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A53F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A53FC
  c->lr=c->r[0]; // 803A5400
  c->r[1]=c->r[1]+0x00000020u; // 803A5404
  return; // 803A5408
}

// fn_803A540C
void f_803A540C(Ctx* __restrict c) {
  trace_call(0x803A540Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A540C
  c->r[0]=c->lr; // 803A5410
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A5414
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A5418
  c->r[31]=c->r[4]|c->r[4]; // 803A541C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A5420
  c->r[30]=c->r[3]|c->r[3]; // 803A5424
  c->lr=0x803A542Cu; f_803ABEB8(c); // 803A5428
  c->r[3]=c->r[3]+0x00000354u; // 803A542C
  c->lr=0x803A5434u; f_8025FCCC(c); // 803A5430
  cmps(c,0,(int32_t)c->r[31],2); // 803A5434
  if (crb(c,2)) { goto L_803A54B8; } // 803A5438
  if (!crb(c,0)) { goto L_803A5450; } // 803A543C
  cmps(c,0,(int32_t)c->r[31],0); // 803A5440
  if (crb(c,2)) { goto L_803A545C; } // 803A5444
  if (!crb(c,0)) { goto L_803A5548; } // 803A5448
  goto L_803A5550; // 803A544C
L_803A5450:;
  cmps(c,0,(int32_t)c->r[31],4); // 803A5450
  if (!crb(c,0)) { goto L_803A5550; } // 803A5454
  goto L_803A5468; // 803A5458
L_803A545C:;
  c->r[0]=0u+0x00000000u; // 803A545C
  W8(c->r[30]+0x0000005Cu,c->r[0]); // 803A5460
  goto L_803A5550; // 803A5464
L_803A5468:;
  c->lr=0x803A546Cu; f_803ABEB8(c); // 803A5468
  c->r[3]=c->r[3]+0x00000354u; // 803A546C
  c->lr=0x803A5474u; f_8025FCCC(c); // 803A5470
  c->r[31]=R32(c->r[30]+0x000000BCu); // 803A5474
  goto L_803A5490; // 803A5478
L_803A547C:;
  c->r[3]=c->r[31]|c->r[31]; // 803A547C
  c->lr=0x803A5484u; f_8039DC0C(c); // 803A5480
  c->r[3]=c->r[31]|c->r[31]; // 803A5484
  c->lr=0x803A548Cu; f_8039D7A4(c); // 803A5488
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A548C
L_803A5490:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A5490
  if (!crb(c,2)) { IRQCHK(c); goto L_803A547C; } // 803A5494
  c->r[0]=0u+0x00000000u; // 803A5498
  W32(c->r[30]+0x000000BCu,c->r[0]); // 803A549C
  c->lr=0x803A54A4u; f_803ABEB8(c); // 803A54A0
  c->r[3]=c->r[3]+0x00000354u; // 803A54A4
  c->lr=0x803A54ACu; f_8025FDA8(c); // 803A54A8
  c->r[0]=0u+0x00000001u; // 803A54AC
  W8(c->r[30]+0x0000005Cu,c->r[0]); // 803A54B0
  goto L_803A5550; // 803A54B4
L_803A54B8:;
  c->lr=0x803A54BCu; f_803ABEB8(c); // 803A54B8
  c->r[3]=c->r[3]+0x00000354u; // 803A54BC
  c->lr=0x803A54C4u; f_8025FCCC(c); // 803A54C0
  c->r[3]=c->r[30]|c->r[30]; // 803A54C4
  c->lr=0x803A54CCu; f_803A4DC4(c); // 803A54C8
  c->r[31]=R32(c->r[30]+0x000000BCu); // 803A54CC
  goto L_803A54EC; // 803A54D0
L_803A54D4:;
  c->r[0]=R8(c->r[31]+0x00000032u); // 803A54D4
  cmps(c,0,(int32_t)c->r[0],0); // 803A54D8
  if (crb(c,2)) { goto L_803A54E8; } // 803A54DC
  c->r[3]=c->r[31]|c->r[31]; // 803A54E0
  c->lr=0x803A54E8u; f_8039D73C(c); // 803A54E4
L_803A54E8:;
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A54E8
L_803A54EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A54EC
  if (!crb(c,2)) { IRQCHK(c); goto L_803A54D4; } // 803A54F0
  c->lr=0x803A54F8u; f_803ABEB8(c); // 803A54F4
  c->r[3]=c->r[3]+0x00000354u; // 803A54F8
  c->lr=0x803A5500u; f_8025FDA8(c); // 803A54FC
  c->lr=0x803A5504u; f_803ABEB8(c); // 803A5500
  c->r[3]=c->r[3]+0x00000354u; // 803A5504
  c->lr=0x803A550Cu; f_8025FCCC(c); // 803A5508
  c->r[31]=R32(c->r[30]+0x000000BCu); // 803A550C
  goto L_803A5520; // 803A5510
L_803A5514:;
  c->r[3]=c->r[31]|c->r[31]; // 803A5514
  c->lr=0x803A551Cu; f_8039DC0C(c); // 803A5518
  c->r[31]=R32(c->r[31]+0x000000E0u); // 803A551C
L_803A5520:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A5520
  if (!crb(c,2)) { IRQCHK(c); goto L_803A5514; } // 803A5524
  c->r[0]=0u+0x00000000u; // 803A5528
  W32(c->r[30]+0x000000BCu,c->r[0]); // 803A552C
  c->lr=0x803A5534u; f_803ABEB8(c); // 803A5530
  c->r[3]=c->r[3]+0x00000354u; // 803A5534
  c->lr=0x803A553Cu; f_8025FDA8(c); // 803A5538
  c->r[0]=0u+0x00000001u; // 803A553C
  W8(c->r[30]+0x0000005Cu,c->r[0]); // 803A5540
  goto L_803A5550; // 803A5544
L_803A5548:;
  c->r[0]=0u+0x00000001u; // 803A5548
  W8(c->r[30]+0x0000005Cu,c->r[0]); // 803A554C
L_803A5550:;
  c->lr=0x803A5554u; f_803ABEB8(c); // 803A5550
  c->r[3]=c->r[3]+0x00000354u; // 803A5554
  c->lr=0x803A555Cu; f_8025FDA8(c); // 803A5558
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A555C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A5560
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A5564
  c->lr=c->r[0]; // 803A5568
  c->r[1]=c->r[1]+0x00000010u; // 803A556C
  return; // 803A5570
}

// fn_803A5574
void f_803A5574(Ctx* __restrict c) {
  trace_call(0x803A5574u);
  cmps(c,0,(int32_t)c->r[4],16); // 803A5574
  if (!crb(c,0)) { goto L_803A558C; } // 803A5578
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 803A557C
  c->r[3]=c->r[3]+c->r[0]; // 803A5580
  c->r[3]=c->r[3]+0x00000098u; // 803A5584
  return; // 803A5588
L_803A558C:;
  c->r[3]=0u+0x00000000u; // 803A558C
  return; // 803A5590
}

// fn_803A5594
void f_803A5594(Ctx* __restrict c) {
  trace_call(0x803A5594u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A5594
  c->r[0]=c->lr; // 803A5598
  W32(c->r[1]+0x00000064u,c->r[0]); // 803A559C
  c->r[11]=c->r[1]+0x00000060u; // 803A55A0
  c->lr=0x803A55A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A55A4
  c->r[27]=c->r[3]|c->r[3]; // 803A55A8
  c->r[28]=c->r[4]|c->r[4]; // 803A55AC
  c->r[29]=c->r[5]|c->r[5]; // 803A55B0
  c->r[30]=c->r[6]|c->r[6]; // 803A55B4
  c->r[26]=c->r[7]|c->r[7]; // 803A55B8
  c->lr=0x803A55C0u; f_803ABEB8(c); // 803A55BC
  c->r[3]=c->r[3]+0x00000354u; // 803A55C0
  c->lr=0x803A55C8u; f_8025FCCC(c); // 803A55C4
  cmps(c,0,(int32_t)c->r[26],0); // 803A55C8
  c->r[12]=R32(c->r[27]+0x000000B8u); // 803A55CC
  c->r[31]=0u+0x00000000u; // 803A55D0
  if (crb(c,2)) { goto L_803A5618; } // 803A55D4
  c->r[31]=R32(c->r[27]+0x000000BCu); // 803A55D8
  cmps(c,0,(int32_t)c->r[31],0); // 803A55DC
  if (crb(c,2)) { goto L_803A5618; } // 803A55E0
  c->r[3]=c->r[29]^0x80000000u; // 803A55E4
  c->r[0]=0u+0x43300000u; // 803A55E8
  W32(c->r[1]+0x00000034u,c->r[3]); // 803A55EC
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 803A55F0
  {uint32_t ea=c->r[2]+0xFFFFEEF0u; c->f[2]=RF64(ea);} // 803A55F4
  W32(c->r[1]+0x00000030u,c->r[0]); // 803A55F8
  {uint32_t ea=c->r[2]+0xFFFFEED0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A55FC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 803A5600
  W32(c->r[31]+0x000000C0u,c->r[3]); // 803A5604
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A5608
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 803A560C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 803A5610
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 803A5614
L_803A5618:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A5618
  if (!crb(c,2)) { goto L_803A5710; } // 803A561C
  c->r[3]=0u+0x803F0000u; // 803A5620
  {uint32_t ea=c->r[3]+0xFFFFE5C0u; c->r[11]=R32(ea); c->r[3]=ea;} // 803A5624
  cmps(c,0,(int32_t)c->r[26],0); // 803A5628
  c->r[0]=0u+0xFFFFFFFFu; // 803A562C
  c->r[10]=R32(c->r[3]+0x00000004u); // 803A5630
  c->r[9]=R32(c->r[3]+0x00000008u); // 803A5634
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 803A5638
  c->r[7]=R32(c->r[3]+0x00000010u); // 803A563C
  c->r[6]=R32(c->r[3]+0x00000014u); // 803A5640
  c->r[5]=R32(c->r[3]+0x00000018u); // 803A5644
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 803A5648
  c->r[3]=R32(c->r[3]+0x00000020u); // 803A564C
  W32(c->r[1]+0x00000008u,c->r[11]); // 803A5650
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 803A5654
  W32(c->r[1]+0x00000010u,c->r[9]); // 803A5658
  W32(c->r[1]+0x00000014u,c->r[8]); // 803A565C
  W32(c->r[1]+0x00000018u,c->r[7]); // 803A5660
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 803A5664
  W32(c->r[1]+0x00000020u,c->r[5]); // 803A5668
  W32(c->r[1]+0x00000024u,c->r[4]); // 803A566C
  W32(c->r[1]+0x00000028u,c->r[3]); // 803A5670
  c->r[3]=R32(c->r[27]+0x00000068u); // 803A5674
  W32(c->r[1]+0x00000008u,c->r[3]); // 803A5678
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 803A567C
  W32(c->r[1]+0x00000010u,c->r[29]); // 803A5680
  if (!crb(c,2)) { goto L_803A568C; } // 803A5684
  c->r[0]=c->r[30]|c->r[30]; // 803A5688
L_803A568C:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A568C
  c->r[5]=c->r[1]+0x00000008u; // 803A5690
  c->r[0]=R8(c->r[27]+0x00000089u); // 803A5694
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A5698
  W32(c->r[1]+0x00000018u,c->r[0]); // 803A569C
  c->r[3]=R8(c->r[12]+0x000000A9u); // 803A56A0
  c->r[0]=R8(c->r[27]+0x0000008Cu); // 803A56A4
  c->r[0]=c->r[3]+c->r[0]; // 803A56A8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803A56AC
  c->r[3]=R32(c->r[27]+0x000000B8u); // 803A56B0
  c->r[0]=R32(c->r[3]+0x000000A4u); // 803A56B4
  W32(c->r[1]+0x00000020u,c->r[0]); // 803A56B8
  W32(c->r[1]+0x00000028u,c->r[27]); // 803A56BC
  c->r[3]=R32(c->r[27]+0x000000B8u); // 803A56C0
  c->r[4]=R32(c->r[27]+0x00000064u); // 803A56C4
  c->lr=0x803A56CCu; f_803A3DFC(c); // 803A56C8
  cmps(c,0,(int32_t)c->r[3],0); // 803A56CC
  c->r[31]=c->r[3]|c->r[3]; // 803A56D0
  if (!crb(c,2)) { goto L_803A56EC; } // 803A56D4
  c->lr=0x803A56DCu; f_803ABEB8(c); // 803A56D8
  c->r[3]=c->r[3]+0x00000354u; // 803A56DC
  c->lr=0x803A56E4u; f_8025FDA8(c); // 803A56E0
  c->r[3]=0u+0x00000000u; // 803A56E4
  goto L_803A58C0; // 803A56E8
L_803A56EC:;
  c->lr=0x803A56F0u; f_803ABEB8(c); // 803A56EC
  c->r[3]=c->r[3]+0x00000354u; // 803A56F0
  c->lr=0x803A56F8u; f_8025FCCC(c); // 803A56F4
  c->r[0]=R32(c->r[27]+0x000000BCu); // 803A56F8
  W32(c->r[31]+0x000000E0u,c->r[0]); // 803A56FC
  W32(c->r[27]+0x000000BCu,c->r[31]); // 803A5700
  c->lr=0x803A5708u; f_803ABEB8(c); // 803A5704
  c->r[3]=c->r[3]+0x00000354u; // 803A5708
  c->lr=0x803A5710u; f_8025FDA8(c); // 803A570C
L_803A5710:;
  c->r[4]=R8(c->r[27]+0x0000008Fu); // 803A5710
  cmpu(c,0,c->r[4],0x000000FFu); // 803A5714
  if (crb(c,2)) { goto L_803A5724; } // 803A5718
  c->r[3]=c->r[31]|c->r[31]; // 803A571C
  c->lr=0x803A5724u; f_8039E7C0(c); // 803A5720
L_803A5724:;
  c->r[4]=R8(c->r[27]+0x00000090u); // 803A5724
  cmpu(c,0,c->r[4],0x000000FFu); // 803A5728
  if (crb(c,2)) { goto L_803A5738; } // 803A572C
  c->r[3]=c->r[31]|c->r[31]; // 803A5730
  c->lr=0x803A5738u; f_8039E7D8(c); // 803A5734
L_803A5738:;
  c->r[4]=R8(c->r[27]+0x00000091u); // 803A5738
  cmpu(c,0,c->r[4],0x000000FFu); // 803A573C
  if (crb(c,2)) { goto L_803A574C; } // 803A5740
  c->r[3]=c->r[31]|c->r[31]; // 803A5744
  c->lr=0x803A574Cu; f_8039E878(c); // 803A5748
L_803A574C:;
  c->r[4]=R8(c->r[27]+0x00000092u); // 803A574C
  cmpu(c,0,c->r[4],0x000000FFu); // 803A5750
  if (crb(c,2)) { goto L_803A5760; } // 803A5754
  c->r[3]=c->r[31]|c->r[31]; // 803A5758
  c->lr=0x803A5760u; f_8039E880(c); // 803A575C
L_803A5760:;
  c->r[0]=R8(c->r[27]+0x0000005Fu); // 803A5760
  {uint32_t ea=c->r[27]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A5764
  cmps(c,0,(int32_t)c->r[0],0); // 803A5768
  if (crb(c,2)) { goto L_803A5798; } // 803A576C
  c->r[3]=R8(c->r[27]+0x0000008Du); // 803A5770
  c->r[0]=0u+0x43300000u; // 803A5774
  W32(c->r[1]+0x00000030u,c->r[0]); // 803A5778
  c->r[0]=c->r[3]-c->r[28]; // 803A577C
  {uint32_t ea=c->r[2]+0xFFFFEEF0u; c->f[2]=RF64(ea);} // 803A5780
  c->r[0]=c->r[0]^0x80000000u; // 803A5784
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A5788
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803A578C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803A5790
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803A5794
L_803A5798:;
  c->r[0]=R8(c->r[27]+0x0000008Eu); // 803A5798
  cmps(c,0,(int32_t)c->r[0],0); // 803A579C
  if (!crb(c,2)) { goto L_803A57B8; } // 803A57A0
  c->r[3]=c->r[31]|c->r[31]; // 803A57A4
  c->r[4]=c->r[30]|c->r[30]; // 803A57A8
  c->r[5]=0u+0x00000000u; // 803A57AC
  c->lr=0x803A57B4u; f_8039D8CC(c); // 803A57B0
  goto L_803A581C; // 803A57B4
L_803A57B8:;
  {uint32_t ea=c->r[2]+0xFFFFEECCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A57B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 803A57BC
  fcmp(c,0,c->f[1],c->f[0]); // 803A57C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803A57C4
  if (!crb(c,2)) { goto L_803A57D4; } // 803A57C8
  c->f[3]=c->f[1]; // 803A57CC
  goto L_803A57D8; // 803A57D0
L_803A57D4:;
  c->f[3]=-c->f[1]; // 803A57D4
L_803A57D8:;
  c->r[3]=c->r[0]^0x80000000u; // 803A57D8
  c->r[0]=0u+0x43300000u; // 803A57DC
  W32(c->r[1]+0x00000034u,c->r[3]); // 803A57E0
  c->r[3]=c->r[31]|c->r[31]; // 803A57E4
  {uint32_t ea=c->r[2]+0xFFFFEEF0u; c->f[2]=RF64(ea);} // 803A57E8
  c->r[5]=0u+0x00000001u; // 803A57EC
  W32(c->r[1]+0x00000030u,c->r[0]); // 803A57F0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803A57F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803A57F8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 803A57FC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803A5800
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 803A5804
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 803A5808
  c->r[4]=sraw(c,c->r[0],5); // 803A580C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803A5810
  c->r[4]=c->r[0]+c->r[4]; // 803A5814
  c->lr=0x803A581Cu; f_8039D8CC(c); // 803A5818
L_803A581C:;
  W8(c->r[27]+0x0000008Du,c->r[28]); // 803A581C
  c->r[3]=R8(c->r[27]+0x0000005Du); // 803A5820
  c->r[5]=R16(c->r[31]+0x000000BAu); // 803A5824
  c->r[4]=R16(c->r[31]+0x000000BCu); // 803A5828
  c->r[0]=0u-c->r[3]; // 803A582C
  c->r[0]=c->r[0]|c->r[3]; // 803A5830
  cmpu(c,0,c->r[4],c->r[5]); // 803A5834
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A5838
  if (crb(c,0)) { goto L_803A5848; } // 803A583C
  c->r[4]=R8(c->r[31]+0x000000B9u); // 803A5840
  goto L_803A5864; // 803A5844
L_803A5848:;
  c->r[6]=R8(c->r[31]+0x000000B8u); // 803A5848
  c->r[0]=R8(c->r[31]+0x000000B9u); // 803A584C
  c->r[0]=c->r[0]-c->r[6]; // 803A5850
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803A5854
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 803A5858
  c->r[0]=c->r[6]+c->r[0]; // 803A585C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 803A5860
L_803A5864:;
  c->r[0]=0u-c->r[3]; // 803A5864
  W8(c->r[31]+0x000000B8u,c->r[4]); // 803A5868
  c->r[0]=c->r[0]|c->r[3]; // 803A586C
  c->r[3]=0u+0x000000FFu; // 803A5870
  c->r[4]=sraw(c,c->r[0],31); // 803A5874
  c->r[3]=c->r[3]&~c->r[4]; // 803A5878
  c->r[0]=0u+0x00000000u; // 803A587C
  W8(c->r[31]+0x000000B9u,c->r[3]); // 803A5880
  W16(c->r[31]+0x000000BAu,c->r[0]); // 803A5884
  W16(c->r[31]+0x000000BCu,c->r[0]); // 803A5888
  c->r[3]=R32(c->r[27]+0x000000B8u); // 803A588C
  c->r[0]=R8(c->r[3]+0x0000008Fu); // 803A5890
  W8(c->r[31]+0x00000035u,c->r[0]); // 803A5894
  c->r[3]=R32(c->r[27]+0x000000B8u); // 803A5898
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 803A589C
  W32(c->r[31]+0x000000CCu,c->r[0]); // 803A58A0
  c->r[3]=R32(c->r[27]+0x000000B8u); // 803A58A4
  c->r[0]=R32(c->r[3]+0x00000070u); // 803A58A8
  W32(c->r[31]+0x000000D0u,c->r[0]); // 803A58AC
  c->lr=0x803A58B4u; f_803ABEB8(c); // 803A58B0
  c->r[3]=c->r[3]+0x00000354u; // 803A58B4
  c->lr=0x803A58BCu; f_8025FDA8(c); // 803A58B8
  c->r[3]=c->r[31]|c->r[31]; // 803A58BC
L_803A58C0:;
  c->r[11]=c->r[1]+0x00000060u; // 803A58C0
  c->lr=0x803A58C8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A58C4
  c->r[0]=R32(c->r[1]+0x00000064u); // 803A58C8
  c->lr=c->r[0]; // 803A58CC
  c->r[1]=c->r[1]+0x00000060u; // 803A58D0
  return; // 803A58D4
}

// fn_803A58D8
void f_803A58D8(Ctx* __restrict c) {
  trace_call(0x803A58D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A58D8
  c->r[0]=c->lr; // 803A58DC
  c->r[8]=0u+0x80430000u; // 803A58E0
  c->r[7]=0u+0x803A0000u; // 803A58E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A58E8
  c->r[0]=c->r[4]+0x0000000Cu; // 803A58EC
  c->r[8]=c->r[8]+0x000074B8u; // 803A58F0
  c->r[6]=0u+0x803A0000u; // 803A58F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A58F8
  c->r[31]=c->r[5]|c->r[5]; // 803A58FC
  c->r[5]=c->r[6]+0xFFFFE950u; // 803A5900
  c->r[6]=0u+0x00000014u; // 803A5904
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A5908
  c->r[30]=c->r[4]|c->r[4]; // 803A590C
  c->r[4]=c->r[7]+0xFFFFE920u; // 803A5910
  c->r[7]=0u+0x00000008u; // 803A5914
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A5918
  c->r[29]=c->r[3]|c->r[3]; // 803A591C
  W32(c->r[3]+0x00000004u,c->r[0]); // 803A5920
  W32(c->r[3]+0x00000000u,c->r[8]); // 803A5924
  c->r[3]=c->r[3]+0x00000008u; // 803A5928
  c->lr=0x803A5930u; f_80289B34(c); // 803A592C
  c->r[4]=0u+0x80000000u; // 803A5930
  c->r[3]=c->r[29]+0x00000008u; // 803A5934
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 803A5938
  c->lr=0x803A5940u; f_8039E9D8(c); // 803A593C
  c->r[4]=0u+0x80430000u; // 803A5940
  W32(c->r[29]+0x000000ACu,c->r[31]); // 803A5944
  c->r[4]=c->r[4]+0x00007468u; // 803A5948
  c->r[3]=c->r[29]|c->r[29]; // 803A594C
  c->r[0]=c->r[4]+0x00000014u; // 803A5950
  W32(c->r[29]+0x00000000u,c->r[4]); // 803A5954
  W32(c->r[29]+0x000000A8u,c->r[0]); // 803A5958
  W32(c->r[29]+0x000000B0u,c->r[30]); // 803A595C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A5960
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A5964
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A5968
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A596C
  c->lr=c->r[0]; // 803A5970
  c->r[1]=c->r[1]+0x00000020u; // 803A5974
  return; // 803A5978
}

// fn_803A597C
void f_803A597C(Ctx* __restrict c) {
  trace_call(0x803A597Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A597C
  c->r[0]=c->lr; // 803A5980
  cmps(c,0,(int32_t)c->r[3],0); // 803A5984
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A5988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A598C
  c->r[31]=c->r[4]|c->r[4]; // 803A5990
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A5994
  c->r[30]=c->r[3]|c->r[3]; // 803A5998
  if (crb(c,2)) { goto L_803A59C8; } // 803A599C
  c->r[4]=0u+0x803A0000u; // 803A59A0
  c->r[5]=0u+0x00000014u; // 803A59A4
  c->r[4]=c->r[4]+0xFFFFE950u; // 803A59A8
  c->r[6]=0u+0x00000008u; // 803A59AC
  c->r[3]=c->r[3]+0x00000008u; // 803A59B0
  c->lr=0x803A59B8u; f_80289C2C(c); // 803A59B4
  cmps(c,0,(int32_t)c->r[31],0); // 803A59B8
  if (!crb(c,1)) { goto L_803A59C8; } // 803A59BC
  c->r[3]=c->r[30]|c->r[30]; // 803A59C0
  c->lr=0x803A59C8u; f_802896EC(c); // 803A59C4
L_803A59C8:;
  c->r[3]=c->r[30]|c->r[30]; // 803A59C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A59CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A59D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A59D4
  c->lr=c->r[0]; // 803A59D8
  c->r[1]=c->r[1]+0x00000010u; // 803A59DC
  return; // 803A59E0
}

// fn_803A59E4
void f_803A59E4(Ctx* __restrict c) {
  trace_call(0x803A59E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A59E4
  c->r[0]=c->lr; // 803A59E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A59EC
  c->r[11]=c->r[1]+0x00000030u; // 803A59F0
  c->lr=0x803A59F8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A59F4
  cmps(c,0,(int32_t)c->r[3],0); // 803A59F8
  c->r[25]=c->r[3]|c->r[3]; // 803A59FC
  c->r[26]=c->r[4]|c->r[4]; // 803A5A00
  if (crb(c,2)) { goto L_803A5AAC; } // 803A5A04
  c->r[4]=0u+0x80430000u; // 803A5A08
  c->r[28]=c->r[3]+0x00000008u; // 803A5A0C
  c->r[4]=c->r[4]+0x00007468u; // 803A5A10
  c->r[27]=0u+0x00000000u; // 803A5A14
  c->r[0]=c->r[4]+0x00000014u; // 803A5A18
  W32(c->r[3]+0x00000000u,c->r[4]); // 803A5A1C
  c->r[29]=0u+0x00000000u; // 803A5A20
  W32(c->r[3]+0x000000A8u,c->r[0]); // 803A5A24
L_803A5A28:;
  c->r[31]=R32(c->r[28]+0x00000004u); // 803A5A28
  c->r[30]=c->r[28]+0x00000004u; // 803A5A2C
  goto L_803A5A64; // 803A5A30
L_803A5A34:;
  c->r[4]=c->r[31]|c->r[31]; // 803A5A34
  c->r[31]=R32(c->r[31]+0x00000000u); // 803A5A38
  c->r[3]=c->r[1]+0x00000008u; // 803A5A3C
  W32(c->r[1]+0x00000008u,c->r[29]); // 803A5A40
  c->r[4]=c->r[4]+0xFFFFFF30u; // 803A5A44
  c->lr=0x803A5A4Cu; f_803AA298(c); // 803A5A48
  c->r[3]=R32(c->r[1]+0x00000008u); // 803A5A4C
  cmps(c,0,(int32_t)c->r[3],0); // 803A5A50
  if (crb(c,2)) { goto L_803A5A5C; } // 803A5A54
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 803A5A58
L_803A5A5C:;
  c->r[3]=c->r[1]+0x00000008u; // 803A5A5C
  c->lr=0x803A5A64u; f_803AA360(c); // 803A5A60
L_803A5A64:;
  cmpu(c,0,c->r[31],c->r[30]); // 803A5A64
  if (!crb(c,2)) { IRQCHK(c); goto L_803A5A34; } // 803A5A68
  c->r[27]=c->r[27]+0x00000001u; // 803A5A6C
  c->r[28]=c->r[28]+0x00000014u; // 803A5A70
  cmps(c,0,(int32_t)c->r[27],8); // 803A5A74
  if (crb(c,0)) { IRQCHK(c); goto L_803A5A28; } // 803A5A78
  cmps(c,0,(int32_t)c->r[25],0); // 803A5A7C
  if (crb(c,2)) { goto L_803A5A9C; } // 803A5A80
  c->r[4]=0u+0x803A0000u; // 803A5A84
  c->r[3]=c->r[25]+0x00000008u; // 803A5A88
  c->r[4]=c->r[4]+0xFFFFE950u; // 803A5A8C
  c->r[5]=0u+0x00000014u; // 803A5A90
  c->r[6]=0u+0x00000008u; // 803A5A94
  c->lr=0x803A5A9Cu; f_80289C2C(c); // 803A5A98
L_803A5A9C:;
  cmps(c,0,(int32_t)c->r[26],0); // 803A5A9C
  if (!crb(c,1)) { goto L_803A5AAC; } // 803A5AA0
  c->r[3]=c->r[25]|c->r[25]; // 803A5AA4
  c->lr=0x803A5AACu; f_802896EC(c); // 803A5AA8
L_803A5AAC:;
  c->r[11]=c->r[1]+0x00000030u; // 803A5AAC
  c->r[3]=c->r[25]|c->r[25]; // 803A5AB0
  c->lr=0x803A5AB8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A5AB4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A5AB8
  c->lr=c->r[0]; // 803A5ABC
  c->r[1]=c->r[1]+0x00000030u; // 803A5AC0
  return; // 803A5AC4
}

// fn_803A5AC8
void f_803A5AC8(Ctx* __restrict c) {
  trace_call(0x803A5AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A5AC8
  c->r[0]=c->lr; // 803A5ACC
  W32(c->r[1]+0x00000064u,c->r[0]); // 803A5AD0
  c->r[11]=c->r[1]+0x00000060u; // 803A5AD4
  c->lr=0x803A5ADCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A5AD8
  c->r[27]=c->r[3]|c->r[3]; // 803A5ADC
  c->r[28]=c->r[4]|c->r[4]; // 803A5AE0
  c->r[29]=c->r[5]|c->r[5]; // 803A5AE4
  c->r[30]=c->r[8]|c->r[8]; // 803A5AE8
  c->r[31]=c->r[9]|c->r[9]; // 803A5AEC
  c->r[3]=c->r[1]+0x00000028u; // 803A5AF0
  c->lr=0x803A5AF8u; f_803A6690(c); // 803A5AF4
  {uint32_t ea=c->r[27]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5AF8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 803A5AFC
  {uint32_t ea=c->r[27]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5B00
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 803A5B04
  {uint32_t ea=c->r[27]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5B08
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 803A5B0C
  c->r[0]=R32(c->r[27]+0x000000B4u); // 803A5B10
  W32(c->r[1]+0x00000028u,c->r[0]); // 803A5B14
  c->r[3]=R32(c->r[27]+0x000000B0u); // 803A5B18
  c->lr=0x803A5B20u; f_803A9218(c); // 803A5B1C
  c->r[4]=c->r[29]|c->r[29]; // 803A5B20
  c->r[5]=c->r[1]+0x00000008u; // 803A5B24
  c->lr=0x803A5B2Cu; f_803A67E4(c); // 803A5B28
  cmps(c,0,(int32_t)c->r[3],0); // 803A5B2C
  if (crb(c,2)) { goto L_803A5B4C; } // 803A5B30
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A5B34
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 803A5B38
  c->r[0]=R8(c->r[1]+0x0000000Du); // 803A5B3C
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 803A5B40
  W8(c->r[1]+0x00000030u,c->r[3]); // 803A5B44
  W8(c->r[1]+0x00000031u,c->r[0]); // 803A5B48
L_803A5B4C:;
  c->r[7]=0u+0x803F0000u; // 803A5B4C
  {uint32_t ea=c->r[7]+0xFFFFE5E8u; c->r[6]=R32(ea); c->r[7]=ea;} // 803A5B50
  cmps(c,0,(int32_t)c->r[27],0); // 803A5B54
  c->r[8]=c->r[27]|c->r[27]; // 803A5B58
  c->r[5]=R32(c->r[7]+0x00000004u); // 803A5B5C
  c->r[4]=R32(c->r[7]+0x00000008u); // 803A5B60
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 803A5B64
  c->r[0]=R32(c->r[7]+0x00000010u); // 803A5B68
  W32(c->r[1]+0x00000010u,c->r[6]); // 803A5B6C
  W32(c->r[1]+0x00000014u,c->r[5]); // 803A5B70
  W32(c->r[1]+0x00000018u,c->r[4]); // 803A5B74
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 803A5B78
  W32(c->r[1]+0x00000020u,c->r[0]); // 803A5B7C
  c->r[0]=R32(c->r[27]+0x000000ACu); // 803A5B80
  W32(c->r[1]+0x00000010u,c->r[0]); // 803A5B84
  if (crb(c,2)) { goto L_803A5B90; } // 803A5B88
  c->r[8]=c->r[27]+0x000000A8u; // 803A5B8C
L_803A5B90:;
  W32(c->r[1]+0x00000014u,c->r[8]); // 803A5B90
  c->r[3]=R32(c->r[27]+0x000000ACu); // 803A5B94
  cmps(c,0,(int32_t)c->r[3],0); // 803A5B98
  if (crb(c,2)) { goto L_803A5BA4; } // 803A5B9C
  c->r[3]=c->r[3]+0x00000004u; // 803A5BA0
L_803A5BA4:;
  c->r[0]=c->r[1]+0x00000028u; // 803A5BA4
  W32(c->r[1]+0x00000018u,c->r[3]); // 803A5BA8
  c->r[4]=c->r[28]|c->r[28]; // 803A5BAC
  c->r[5]=c->r[29]|c->r[29]; // 803A5BB0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803A5BB4
  c->r[8]=c->r[30]|c->r[30]; // 803A5BB8
  c->r[9]=c->r[31]|c->r[31]; // 803A5BBC
  c->r[6]=c->r[1]+0x00000010u; // 803A5BC0
  c->r[3]=R32(c->r[27]+0x000000B0u); // 803A5BC4
  c->r[7]=c->r[27]+0x00000008u; // 803A5BC8
  c->r[12]=R32(c->r[3]+0x00000008u); // 803A5BCC
  c->r[12]=R32(c->r[12]+0x00000028u); // 803A5BD0
  c->ctr=c->r[12]; // 803A5BD4
  if (true) { c->lr=0x803A5BDCu; dispatch(c,c->ctr); } // 803A5BD8
  c->r[0]=R32(c->r[28]+0x00000000u); // 803A5BDC
  c->r[27]=c->r[3]|c->r[3]; // 803A5BE0
  cmps(c,0,(int32_t)c->r[0],0); // 803A5BE4
  if (crb(c,2)) { goto L_803A5C04; } // 803A5BE8
  c->r[3]=c->r[0]|c->r[0]; // 803A5BEC
  c->r[4]=0u+0x00000003u; // 803A5BF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A5BF4
  c->r[12]=R32(c->r[12]+0x00000058u); // 803A5BF8
  c->ctr=c->r[12]; // 803A5BFC
  if (true) { c->lr=0x803A5C04u; dispatch(c,c->ctr); } // 803A5C00
L_803A5C04:;
  c->r[11]=c->r[1]+0x00000060u; // 803A5C04
  c->r[3]=c->r[27]|c->r[27]; // 803A5C08
  c->lr=0x803A5C10u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A5C0C
  c->r[0]=R32(c->r[1]+0x00000064u); // 803A5C10
  c->lr=c->r[0]; // 803A5C14
  c->r[1]=c->r[1]+0x00000060u; // 803A5C18
  return; // 803A5C1C
}

// fn_803A5C20
void f_803A5C20(Ctx* __restrict c) {
  trace_call(0x803A5C20u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A5C20
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A5C24
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5C28
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[2]);} // 803A5C2C
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 803A5C30
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 803A5C34
  return; // 803A5C38
}

// fn_803A5C3C
void f_803A5C3C(Ctx* __restrict c) {
  trace_call(0x803A5C3Cu);
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5C3C
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 803A5C40
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5C44
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 803A5C48
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5C4C
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 803A5C50
  c->r[0]=R32(c->r[3]+0x000000B4u); // 803A5C54
  W32(c->r[4]+0x00000000u,c->r[0]); // 803A5C58
  return; // 803A5C5C
}

// fn_803A5C60
void f_803A5C60(Ctx* __restrict c) {
  trace_call(0x803A5C60u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A5C60
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A5C64
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A5C68
  c->ctr=c->r[12]; // 803A5C6C
  if (true) { dispatch(c,c->ctr); return; } // 803A5C70
}

// fn_803A5C74
void f_803A5C74(Ctx* __restrict c) {
  trace_call(0x803A5C74u);
  c->r[3]=c->r[3]+0xFFFFFF58u; // 803A5C74
  f_803A5C3C(c); return; // 803A5C78
}

// fn_803A5C7C
void f_803A5C7C(Ctx* __restrict c) {
  trace_call(0x803A5C7Cu);
  {uint32_t ea=c->r[2]+0xFFFFEEF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5C7C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 803A5C80
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 803A5C84
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 803A5C88
  return; // 803A5C8C
}

// fn_803A5C90
void f_803A5C90(Ctx* __restrict c) {
  trace_call(0x803A5C90u);
  c->r[6]=0u+0x80430000u; // 803A5C90
  {uint32_t ea=c->r[2]+0xFFFFEF00u; c->f[4]=c->ps1[4]=RF32(ea);} // 803A5C94
  c->r[6]=c->r[6]+0x00007490u; // 803A5C98
  {uint32_t ea=c->r[2]+0xFFFFEF04u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A5C9C
  {uint32_t ea=c->r[2]+0xFFFFEF08u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A5CA0
  c->r[5]=c->r[6]+0x0000000Cu; // 803A5CA4
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A5CA8
  c->r[4]=0u+0x00000000u; // 803A5CAC
  {uint32_t ea=c->r[2]+0xFFFFEF10u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5CB0
  c->r[0]=0u+0x00000020u; // 803A5CB4
  W32(c->r[3]+0x00000000u,c->r[6]); // 803A5CB8
  W32(c->r[3]+0x00000004u,c->r[5]); // 803A5CBC
  W32(c->r[3]+0x00000008u,c->r[4]); // 803A5CC0
  W32(c->r[3]+0x00000010u,c->r[0]); // 803A5CC4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 803A5CC8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 803A5CCC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 803A5CD0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 803A5CD4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 803A5CD8
  return; // 803A5CDC
}

// fn_803A5CE0
void f_803A5CE0(Ctx* __restrict c) {
  trace_call(0x803A5CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A5CE0
  c->r[0]=c->lr; // 803A5CE4
  c->r[3]=c->r[4]|c->r[4]; // 803A5CE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A5CEC
  c->r[4]=c->r[1]+0x00000008u; // 803A5CF0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803A5CF4
  c->r[31]=0u+0x00000000u; // 803A5CF8
  c->lr=0x803A5D00u; f_803A67DC(c); // 803A5CFC
  cmps(c,0,(int32_t)c->r[3],0); // 803A5D00
  if (crb(c,2)) { goto L_803A5D1C; } // 803A5D04
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A5D08
  c->r[3]=R32(c->r[1]+0x00000010u); // 803A5D0C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803A5D10
  c->r[31]=c->r[4]+c->r[3]; // 803A5D14
  c->r[31]=c->r[31]+c->r[0]; // 803A5D18
L_803A5D1C:;
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)24); // 803A5D1C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803A5D20
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A5D24
  c->lr=c->r[0]; // 803A5D28
  c->r[1]=c->r[1]+0x00000030u; // 803A5D2C
  return; // 803A5D30
}

// fn_803A5D34
void f_803A5D34(Ctx* __restrict c) {
  trace_call(0x803A5D34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A5D34
  c->r[0]=c->lr; // 803A5D38
  c->r[4]=c->r[5]|c->r[5]; // 803A5D3C
  c->r[5]=c->r[6]|c->r[6]; // 803A5D40
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A5D44
  c->r[6]=0u+0x00000018u; // 803A5D48
  c->r[3]=c->r[3]+0x00000008u; // 803A5D4C
  c->lr=0x803A5D54u; f_803A082C(c); // 803A5D50
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A5D54
  c->r[3]=0u+0x00000001u; // 803A5D58
  c->lr=c->r[0]; // 803A5D5C
  c->r[1]=c->r[1]+0x00000010u; // 803A5D60
  return; // 803A5D64
}

// fn_803A5D68
void f_803A5D68(Ctx* __restrict c) {
  trace_call(0x803A5D68u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A5D68
  c->r[0]=c->lr; // 803A5D6C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A5D70
  c->r[11]=c->r[1]+0x00000030u; // 803A5D74
  c->lr=0x803A5D7Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A5D78
  c->r[0]=0u+0x00000000u; // 803A5D7C
  cmps(c,0,(int32_t)c->r[6],0); // 803A5D80
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A5D84
  c->r[26]=c->r[3]|c->r[3]; // 803A5D88
  c->r[27]=c->r[4]|c->r[4]; // 803A5D8C
  c->r[28]=c->r[5]|c->r[5]; // 803A5D90
  c->r[31]=c->r[6]|c->r[6]; // 803A5D94
  c->r[29]=c->r[7]|c->r[7]; // 803A5D98
  c->r[30]=c->r[8]|c->r[8]; // 803A5D9C
  if (crb(c,2)) { goto L_803A5DB0; } // 803A5DA0
  c->r[4]=c->r[31]|c->r[31]; // 803A5DA4
  c->r[3]=c->r[1]+0x00000008u; // 803A5DA8
  c->lr=0x803A5DB0u; f_803AA298(c); // 803A5DAC
L_803A5DB0:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 803A5DB0
  c->r[0]=0u-c->r[31]; // 803A5DB4
  c->r[0]=c->r[0]|c->r[31]; // 803A5DB8
  c->r[31]=c->r[1]+0x00000008u; // 803A5DBC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803A5DC0
  c->r[0]=sraw(c,c->r[0],31); // 803A5DC4
  c->r[3]=c->r[26]|c->r[26]; // 803A5DC8
  c->r[4]=c->r[27]|c->r[27]; // 803A5DCC
  c->r[5]=c->r[28]|c->r[28]; // 803A5DD0
  c->r[7]=c->r[29]|c->r[29]; // 803A5DD4
  c->r[8]=c->r[30]|c->r[30]; // 803A5DD8
  c->r[6]=c->r[31]&c->r[0]; // 803A5DDC
  c->ctr=c->r[12]; // 803A5DE0
  if (true) { c->lr=0x803A5DE8u; dispatch(c,c->ctr); } // 803A5DE4
  c->r[3]=c->r[31]|c->r[31]; // 803A5DE8
  c->lr=0x803A5DF0u; f_803AA360(c); // 803A5DEC
  c->r[11]=c->r[1]+0x00000030u; // 803A5DF0
  c->lr=0x803A5DF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A5DF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A5DF8
  c->lr=c->r[0]; // 803A5DFC
  c->r[1]=c->r[1]+0x00000030u; // 803A5E00
  return; // 803A5E04
}

// fn_803A5E08
void f_803A5E08(Ctx* __restrict c) {
  trace_call(0x803A5E08u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A5E08
  c->r[0]=c->lr; // 803A5E0C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 803A5E10
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 803A5E14
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 803A5E18
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 803A5E1C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 803A5E20
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 803A5E24
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 803A5E28
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[28]);} // 803A5E2C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,28,ea,0,0);} // 803A5E30
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[27]);} // 803A5E34
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,27,ea,0,0);} // 803A5E38
  c->r[11]=c->r[1]+0x00000060u; // 803A5E3C
  c->lr=0x803A5E44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A5E40
  c->r[27]=R32(c->r[3]+0x0000000Cu); // 803A5E44
  c->r[28]=c->r[3]|c->r[3]; // 803A5E48
  c->r[29]=c->r[4]|c->r[4]; // 803A5E4C
  c->r[30]=c->r[7]|c->r[7]; // 803A5E50
  cmps(c,0,(int32_t)c->r[27],0); // 803A5E54
  c->r[31]=c->r[8]|c->r[8]; // 803A5E58
  if (!crb(c,2)) { goto L_803A5E6C; } // 803A5E5C
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5E60
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 803A5E64
  goto L_803A65D4; // 803A5E68
L_803A5E6C:;
  c->r[3]=c->r[27]|c->r[27]; // 803A5E6C
  c->r[4]=c->r[7]+0x0000000Cu; // 803A5E70
  c->r[5]=c->r[1]+0x00000020u; // 803A5E74
  c->lr=0x803A5E7Cu; f_802652E8(c); // 803A5E78
  c->r[3]=c->r[1]+0x00000020u; // 803A5E7C
  c->lr=0x803A5E84u; f_802657AC(c); // 803A5E80
  c->r[0]=c->r[31]&0x00000009u; cr0(c,c->r[0]); // 803A5E84
  c->f[31]=c->f[1]; // 803A5E88
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[29]=c->ps1[29]=RF32(ea);} // 803A5E8C
  if (crb(c,2)) { goto L_803A5F44; } // 803A5E90
  {uint32_t ea=c->r[27]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5E94
  fcmp(c,0,c->f[1],c->f[0]); // 803A5E98
  if (!crb(c,1)) { goto L_803A5F44; } // 803A5E9C
  c->r[0]=R8(c->r[30]+0x00000008u); // 803A5EA0
  cmps(c,0,(int32_t)c->r[0],2); // 803A5EA4
  if (crb(c,2)) { goto L_803A5EF8; } // 803A5EA8
  if (!crb(c,0)) { goto L_803A5F44; } // 803A5EAC
  cmps(c,0,(int32_t)c->r[0],1); // 803A5EB0
  if (!crb(c,0)) { goto L_803A5EBC; } // 803A5EB4
  goto L_803A5F44; // 803A5EB8
L_803A5EBC:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803A5EBC
  {uint32_t ea=c->r[27]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A5EC0
  c->r[3]=R8(c->r[30]+0x00000009u); // 803A5EC4
  c->r[0]=0u+0x43300000u; // 803A5EC8
  W32(c->r[1]+0x00000030u,c->r[0]); // 803A5ECC
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 803A5ED0
  W32(c->r[1]+0x00000034u,c->r[3]); // 803A5ED4
  {uint32_t ea=c->r[2]+0xFFFFEF40u; c->f[3]=RF64(ea);} // 803A5ED8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 803A5EDC
  {uint32_t ea=c->r[2]+0xFFFFEF18u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5EE0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 803A5EE4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803A5EE8
  c->lr=0x803A5EF0u; f_8029C4A8(c); // 803A5EEC
  c->f[29]=c->ps1[29]=S(c->f[1]); // 803A5EF0
  goto L_803A5F44; // 803A5EF4
L_803A5EF8:;
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803A5EF8
  {uint32_t ea=c->r[27]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A5EFC
  c->r[3]=R8(c->r[30]+0x00000009u); // 803A5F00
  c->r[0]=0u+0x43300000u; // 803A5F04
  W32(c->r[1]+0x00000030u,c->r[0]); // 803A5F08
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 803A5F0C
  W32(c->r[1]+0x00000034u,c->r[3]); // 803A5F10
  {uint32_t ea=c->r[2]+0xFFFFEF40u; c->f[4]=RF64(ea);} // 803A5F14
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 803A5F18
  {uint32_t ea=c->r[2]+0xFFFFEF18u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A5F1C
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5F20
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 803A5F24
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 803A5F28
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 803A5F2C
  c->f[29]=c->ps1[29]=S(c->f[29]-c->f[1]); // 803A5F30
  fcmp(c,0,c->f[0],c->f[29]); // 803A5F34
  if (!crb(c,0)) { goto L_803A5F40; } // 803A5F38
  goto L_803A5F44; // 803A5F3C
L_803A5F40:;
  c->f[29]=c->f[0]; // 803A5F40
L_803A5F44:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 803A5F44
  if (crb(c,2)) { goto L_803A5F5C; } // 803A5F48
  c->r[0]=R32(c->r[30]+0x00000004u); // 803A5F4C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803A5F50
  if (!crb(c,2)) { goto L_803A5F5C; } // 803A5F54
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[29]);} // 803A5F58
L_803A5F5C:;
  c->r[0]=rotl(c->r[31],0)&0x00000006u; cr0(c,c->r[0]); // 803A5F5C
  if (crb(c,2)) { goto L_803A6550; } // 803A5F60
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5F64
  fcmp(c,0,c->f[0],c->f[31]); // 803A5F68
  if (!crb(c,2)) { goto L_803A5F80; } // 803A5F6C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803A5F70
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 803A5F74
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 803A5F78
  goto L_803A5FFC; // 803A5F7C
L_803A5F80:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A5F80
  c->r[3]=c->r[1]+0x00000008u; // 803A5F84
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A5F88
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803A5F8C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803A5F90
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 803A5F94
  c->lr=0x803A5F9Cu; f_802657AC(c); // 803A5F98
  {uint32_t ea=c->r[27]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5F9C
  fcmp(c,0,c->f[1],c->f[0]); // 803A5FA0
  if (!crb(c,1)) { goto L_803A5FCC; } // 803A5FA4
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 803A5FA8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A5FAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5FB0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 803A5FB4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803A5FB8
  {uint32_t ea=c->r[27]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A5FBC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 803A5FC0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803A5FC4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803A5FC8
L_803A5FCC:;
  c->r[3]=c->r[1]+0x00000008u; // 803A5FCC
  c->lr=0x803A5FD4u; f_802657AC(c); // 803A5FD0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A5FD4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5FD8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 803A5FDC
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A5FE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803A5FE4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803A5FE8
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[31]); // 803A5FEC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 803A5FF0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803A5FF4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803A5FF8
L_803A5FFC:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A5FFC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A6000
  c->f[2]=-c->f[0]; // 803A6004
  c->lr=0x803A600Cu; f_8029C498(c); // 803A6008
  c->f[31]=c->ps1[31]=S(c->f[1]); // 803A600C
  c->r[3]=c->r[1]+0x00000014u; // 803A6010
  c->lr=0x803A6018u; f_802657AC(c); // 803A6014
  {uint32_t ea=c->r[27]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6018
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 803A601C
  c->lr=0x803A6024u; f_80396E38(c); // 803A6020
  c->lr=0x803A6028u; f_803975C4(c); // 803A6024
  cmps(c,0,(int32_t)c->r[3],3); // 803A6028
  if (crb(c,2)) { goto L_803A6548; } // 803A602C
  if (!crb(c,0)) { goto L_803A6548; } // 803A6030
  cmps(c,0,(int32_t)c->r[3],0); // 803A6034
  if (crb(c,2)) { goto L_803A6330; } // 803A6038
  if (!crb(c,0)) { goto L_803A6044; } // 803A603C
  goto L_803A6548; // 803A6040
L_803A6044:;
  c->r[0]=R8(c->r[13]+0xFFFFA01Cu); // 803A6044
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A6048
  if (!crb(c,2)) { goto L_803A6064; } // 803A604C
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6050
  c->r[0]=0u+0x00000001u; // 803A6054
  c->f[0]=-c->f[0]; // 803A6058
  W8(c->r[13]+0xFFFFA01Cu,c->r[0]); // 803A605C
  {uint32_t ea=c->r[13]+0xFFFFA018u; WF32(ea,c->f[0]);} // 803A6060
L_803A6064:;
  c->r[0]=R8(c->r[13]+0xFFFFA024u); // 803A6064
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A6068
  if (!crb(c,2)) { goto L_803A6084; } // 803A606C
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6070
  c->r[0]=0u+0x00000001u; // 803A6074
  c->f[0]=-c->f[0]; // 803A6078
  W8(c->r[13]+0xFFFFA024u,c->r[0]); // 803A607C
  {uint32_t ea=c->r[13]+0xFFFFA020u; WF32(ea,c->f[0]);} // 803A6080
L_803A6084:;
  c->r[0]=R8(c->r[13]+0xFFFFA02Cu); // 803A6084
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A6088
  if (!crb(c,2)) { goto L_803A60A0; } // 803A608C
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6090
  c->r[0]=0u+0x00000001u; // 803A6094
  {uint32_t ea=c->r[13]+0xFFFFA028u; WF32(ea,c->f[0]);} // 803A6098
  W8(c->r[13]+0xFFFFA02Cu,c->r[0]); // 803A609C
L_803A60A0:;
  c->r[0]=R8(c->r[13]+0xFFFFA034u); // 803A60A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A60A4
  if (!crb(c,2)) { goto L_803A60BC; } // 803A60A8
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A60AC
  c->r[0]=0u+0x00000001u; // 803A60B0
  {uint32_t ea=c->r[13]+0xFFFFA030u; WF32(ea,c->f[0]);} // 803A60B4
  W8(c->r[13]+0xFFFFA034u,c->r[0]); // 803A60B8
L_803A60BC:;
  {uint32_t ea=c->r[13]+0xFFFFA018u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A60BC
  fcmp(c,0,c->f[31],c->f[3]); // 803A60C0
  if (!crb(c,0)) { goto L_803A610C; } // 803A60C4
  {uint32_t ea=c->r[2]+0xFFFFEF1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A60C8
  fcmp(c,0,c->f[1],c->f[3]); // 803A60CC
  if (!crb(c,2)) { goto L_803A60DC; } // 803A60D0
  {uint32_t ea=c->r[2]+0xFFFFEF20u; c->f[30]=c->ps1[30]=RF32(ea);} // 803A60D4
  goto L_803A6104; // 803A60D8
L_803A60DC:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A60DC
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[3]); // 803A60E0
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A60E4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[0]); // 803A60E8
  {uint32_t ea=c->r[2]+0xFFFFEF24u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A60EC
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803A60F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803A60F4
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 803A60F8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 803A60FC
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 803A6100
L_803A6104:;
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[27]=c->ps1[27]=RF32(ea);} // 803A6104
  goto L_803A62BC; // 803A6108
L_803A610C:;
  {uint32_t ea=c->r[2]+0xFFFFEF28u; c->f[5]=c->ps1[5]=RF32(ea);} // 803A610C
  fcmp(c,0,c->f[31],c->f[5]); // 803A6110
  if (!crb(c,0)) { goto L_803A6154; } // 803A6114
  fcmp(c,0,c->f[3],c->f[5]); // 803A6118
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 803A611C
  if (!crb(c,2)) { goto L_803A612C; } // 803A6120
  {uint32_t ea=c->r[2]+0xFFFFEF30u; c->f[27]=c->ps1[27]=RF32(ea);} // 803A6124
  goto L_803A62BC; // 803A6128
L_803A612C:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A612C
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[5]); // 803A6130
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A6134
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803A6138
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803A613C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 803A6140
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 803A6144
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 803A6148
  c->f[27]=c->ps1[27]=S(c->f[1]+c->f[0]); // 803A614C
  goto L_803A62BC; // 803A6150
L_803A6154:;
  {uint32_t ea=c->r[13]+0xFFFFA020u; c->f[4]=c->ps1[4]=RF32(ea);} // 803A6154
  fcmp(c,0,c->f[31],c->f[4]); // 803A6158
  if (!crb(c,0)) { goto L_803A61A0; } // 803A615C
  fcmp(c,0,c->f[5],c->f[4]); // 803A6160
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 803A6164
  if (!crb(c,2)) { goto L_803A6174; } // 803A6168
  {uint32_t ea=c->r[2]+0xFFFFEF20u; c->f[27]=c->ps1[27]=RF32(ea);} // 803A616C
  goto L_803A62BC; // 803A6170
L_803A6174:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6174
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 803A6178
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A617C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 803A6180
  {uint32_t ea=c->r[2]+0xFFFFEF34u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6184
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803A6188
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803A618C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[3]); // 803A6190
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 803A6194
  c->f[27]=c->ps1[27]=S(c->f[1]+c->f[0]); // 803A6198
  goto L_803A62BC; // 803A619C
L_803A61A0:;
  {uint32_t ea=c->r[13]+0xFFFFA028u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A61A0
  fcmp(c,0,c->f[31],c->f[3]); // 803A61A4
  if (!crb(c,0)) { goto L_803A61F0; } // 803A61A8
  fcmp(c,0,c->f[4],c->f[3]); // 803A61AC
  if (!crb(c,2)) { goto L_803A61BC; } // 803A61B0
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 803A61B4
  goto L_803A61E8; // 803A61B8
L_803A61BC:;
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A61BC
  c->f[5]=c->ps1[5]=S(c->f[4]-c->f[3]); // 803A61C0
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A61C4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 803A61C8
  {uint32_t ea=c->r[2]+0xFFFFEF38u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A61CC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803A61D0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803A61D4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803A61D8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[5]); // 803A61DC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[5]); // 803A61E0
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 803A61E4
L_803A61E8:;
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 803A61E8
  goto L_803A62BC; // 803A61EC
L_803A61F0:;
  {uint32_t ea=c->r[2]+0xFFFFEF34u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A61F0
  fcmp(c,0,c->f[31],c->f[2]); // 803A61F4
  if (!crb(c,0)) { goto L_803A6238; } // 803A61F8
  fcmp(c,0,c->f[3],c->f[2]); // 803A61FC
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[30]=c->ps1[30]=RF32(ea);} // 803A6200
  if (!crb(c,2)) { goto L_803A6210; } // 803A6204
  {uint32_t ea=c->r[2]+0xFFFFEF20u; c->f[27]=c->ps1[27]=RF32(ea);} // 803A6208
  goto L_803A62BC; // 803A620C
L_803A6210:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6210
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 803A6214
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A6218
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803A621C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803A6220
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 803A6224
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 803A6228
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 803A622C
  c->f[27]=c->ps1[27]=S(c->f[1]+c->f[0]); // 803A6230
  goto L_803A62BC; // 803A6234
L_803A6238:;
  {uint32_t ea=c->r[13]+0xFFFFA030u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A6238
  fcmp(c,0,c->f[31],c->f[3]); // 803A623C
  if (!crb(c,0)) { goto L_803A6280; } // 803A6240
  fcmp(c,0,c->f[2],c->f[3]); // 803A6244
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[30]=c->ps1[30]=RF32(ea);} // 803A6248
  if (!crb(c,2)) { goto L_803A6258; } // 803A624C
  {uint32_t ea=c->r[2]+0xFFFFEF30u; c->f[27]=c->ps1[27]=RF32(ea);} // 803A6250
  goto L_803A62BC; // 803A6254
L_803A6258:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6258
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[3]); // 803A625C
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A6260
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803A6264
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803A6268
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 803A626C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 803A6270
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 803A6274
  c->f[27]=c->ps1[27]=S(c->f[1]+c->f[0]); // 803A6278
  goto L_803A62BC; // 803A627C
L_803A6280:;
  {uint32_t ea=c->r[2]+0xFFFFEF24u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A6280
  fcmp(c,0,c->f[3],c->f[2]); // 803A6284
  if (!crb(c,2)) { goto L_803A6294; } // 803A6288
  {uint32_t ea=c->r[2]+0xFFFFEF30u; c->f[30]=c->ps1[30]=RF32(ea);} // 803A628C
  goto L_803A62B8; // 803A6290
L_803A6294:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6294
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 803A6298
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A629C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803A62A0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803A62A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803A62A8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 803A62AC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 803A62B0
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 803A62B4
L_803A62B8:;
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[27]=c->ps1[27]=RF32(ea);} // 803A62B8
L_803A62BC:;
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A62BC
  c->lr=0x803A62C4u; f_8029BE38(c); // 803A62C0
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A62C4
  c->f[31]=c->ps1[31]=S(c->f[1]); // 803A62C8
  c->f[1]=c->f[0]; // 803A62CC
  c->lr=0x803A62D4u; f_8029BE38(c); // 803A62D0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 803A62D4
  {uint32_t ea=c->r[2]+0xFFFFEF30u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A62D8
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A62DC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[31]); // 803A62E0
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[0]); // 803A62E4
  c->lr=0x803A62ECu; f_8029BE38(c); // 803A62E8
  c->f[3]=c->ps1[3]=S(c->f[1]); // 803A62EC
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A62F0
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A62F4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 803A62F8
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A62FC
  c->f[3]=-c->f[3]; // 803A6300
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[1]); // 803A6304
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[28]); // 803A6308
  c->f[4]=c->ps1[4]=S(c->f[31]+c->f[3]); // 803A630C
  c->f[3]=c->ps1[3]=S(c->f[27]*c->f[28]); // 803A6310
  c->f[5]=c->ps1[5]=S(c->f[30]*c->f[28]); // 803A6314
  c->f[4]=c->ps1[4]=S(c->f[31]/c->f[4]); // 803A6318
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 803A631C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803A6320
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 803A6324
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803A6328
  goto L_803A6550; // 803A632C
L_803A6330:;
  c->r[0]=R8(c->r[13]+0xFFFFA03Cu); // 803A6330
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A6334
  if (!crb(c,2)) { goto L_803A6354; } // 803A6338
  {uint32_t ea=c->r[2]+0xFFFFEF1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A633C
  c->r[0]=0u+0x00000001u; // 803A6340
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6344
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803A6348
  W8(c->r[13]+0xFFFFA03Cu,c->r[0]); // 803A634C
  {uint32_t ea=c->r[13]+0xFFFFA038u; WF32(ea,c->f[0]);} // 803A6350
L_803A6354:;
  c->r[0]=R8(c->r[13]+0xFFFFA044u); // 803A6354
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A6358
  if (!crb(c,2)) { goto L_803A6374; } // 803A635C
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6360
  c->r[0]=0u+0x00000001u; // 803A6364
  c->f[0]=-c->f[0]; // 803A6368
  W8(c->r[13]+0xFFFFA044u,c->r[0]); // 803A636C
  {uint32_t ea=c->r[13]+0xFFFFA040u; WF32(ea,c->f[0]);} // 803A6370
L_803A6374:;
  c->r[0]=R8(c->r[13]+0xFFFFA04Cu); // 803A6374
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A6378
  if (!crb(c,2)) { goto L_803A6390; } // 803A637C
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6380
  c->r[0]=0u+0x00000001u; // 803A6384
  {uint32_t ea=c->r[13]+0xFFFFA048u; WF32(ea,c->f[0]);} // 803A6388
  W8(c->r[13]+0xFFFFA04Cu,c->r[0]); // 803A638C
L_803A6390:;
  c->r[0]=R8(c->r[13]+0xFFFFA054u); // 803A6390
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803A6394
  if (!crb(c,2)) { goto L_803A63B4; } // 803A6398
  {uint32_t ea=c->r[2]+0xFFFFEF24u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A639C
  c->r[0]=0u+0x00000001u; // 803A63A0
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A63A4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803A63A8
  W8(c->r[13]+0xFFFFA054u,c->r[0]); // 803A63AC
  {uint32_t ea=c->r[13]+0xFFFFA050u; WF32(ea,c->f[0]);} // 803A63B0
L_803A63B4:;
  {uint32_t ea=c->r[13]+0xFFFFA038u; c->f[4]=c->ps1[4]=RF32(ea);} // 803A63B4
  fcmp(c,0,c->f[31],c->f[4]); // 803A63B8
  if (!crb(c,0)) { goto L_803A6404; } // 803A63BC
  {uint32_t ea=c->r[2]+0xFFFFEF1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803A63C0
  fcmp(c,0,c->f[1],c->f[4]); // 803A63C4
  if (!crb(c,2)) { goto L_803A63D4; } // 803A63C8
  {uint32_t ea=c->r[2]+0xFFFFEF20u; c->f[5]=c->ps1[5]=RF32(ea);} // 803A63CC
  goto L_803A63FC; // 803A63D0
L_803A63D4:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A63D4
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 803A63D8
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A63DC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 803A63E0
  {uint32_t ea=c->r[2]+0xFFFFEF24u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A63E4
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803A63E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803A63EC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[3]); // 803A63F0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 803A63F4
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 803A63F8
L_803A63FC:;
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A63FC
  goto L_803A6528; // 803A6400
L_803A6404:;
  {uint32_t ea=c->r[13]+0xFFFFA040u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A6404
  fcmp(c,0,c->f[31],c->f[3]); // 803A6408
  if (!crb(c,0)) { goto L_803A6450; } // 803A640C
  fcmp(c,0,c->f[4],c->f[3]); // 803A6410
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803A6414
  if (!crb(c,2)) { goto L_803A6424; } // 803A6418
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A641C
  goto L_803A6528; // 803A6420
L_803A6424:;
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6424
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[5]); // 803A6428
  {uint32_t ea=c->r[2]+0xFFFFEF3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A642C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[3]); // 803A6430
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803A6434
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803A6438
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803A643C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 803A6440
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 803A6444
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 803A6448
  goto L_803A6528; // 803A644C
L_803A6450:;
  {uint32_t ea=c->r[13]+0xFFFFA048u; c->f[4]=c->ps1[4]=RF32(ea);} // 803A6450
  fcmp(c,0,c->f[31],c->f[4]); // 803A6454
  if (!crb(c,0)) { goto L_803A64A0; } // 803A6458
  fcmp(c,0,c->f[3],c->f[4]); // 803A645C
  if (!crb(c,2)) { goto L_803A646C; } // 803A6460
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803A6464
  goto L_803A6498; // 803A6468
L_803A646C:;
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A646C
  c->f[5]=c->ps1[5]=S(c->f[3]-c->f[4]); // 803A6470
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6474
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803A6478
  {uint32_t ea=c->r[2]+0xFFFFEF38u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A647C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 803A6480
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803A6484
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803A6488
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[5]); // 803A648C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[5]); // 803A6490
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 803A6494
L_803A6498:;
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A6498
  goto L_803A6528; // 803A649C
L_803A64A0:;
  {uint32_t ea=c->r[13]+0xFFFFA050u; c->f[3]=c->ps1[3]=RF32(ea);} // 803A64A0
  fcmp(c,0,c->f[31],c->f[3]); // 803A64A4
  if (!crb(c,0)) { goto L_803A64EC; } // 803A64A8
  fcmp(c,0,c->f[4],c->f[3]); // 803A64AC
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[5]=c->ps1[5]=RF32(ea);} // 803A64B0
  if (!crb(c,2)) { goto L_803A64C0; } // 803A64B4
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803A64B8
  goto L_803A6528; // 803A64BC
L_803A64C0:;
  {uint32_t ea=c->r[2]+0xFFFFEF2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A64C0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[5]); // 803A64C4
  {uint32_t ea=c->r[2]+0xFFFFEF38u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A64C8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[3]); // 803A64CC
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803A64D0
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 803A64D4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 803A64D8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 803A64DC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 803A64E0
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 803A64E4
  goto L_803A6528; // 803A64E8
L_803A64EC:;
  {uint32_t ea=c->r[2]+0xFFFFEF24u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A64EC
  fcmp(c,0,c->f[3],c->f[2]); // 803A64F0
  if (!crb(c,2)) { goto L_803A6500; } // 803A64F4
  {uint32_t ea=c->r[2]+0xFFFFEF30u; c->f[5]=c->ps1[5]=RF32(ea);} // 803A64F8
  goto L_803A6524; // 803A64FC
L_803A6500:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803A6500
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 803A6504
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A6508
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803A650C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 803A6510
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 803A6514
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 803A6518
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 803A651C
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 803A6520
L_803A6524:;
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[2]=c->ps1[2]=RF32(ea);} // 803A6524
L_803A6528:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803A6528
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A652C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 803A6530
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 803A6534
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[28]); // 803A6538
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[28]); // 803A653C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803A6540
  goto L_803A6550; // 803A6544
L_803A6548:;
  {uint32_t ea=c->r[2]+0xFFFFEF0Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 803A6548
  c->f[0]=c->f[5]; // 803A654C
L_803A6550:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 803A6550
  if (crb(c,2)) { goto L_803A6568; } // 803A6554
  c->r[0]=R32(c->r[30]+0x00000004u); // 803A6558
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803A655C
  if (!crb(c,2)) { goto L_803A6568; } // 803A6560
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[5]);} // 803A6564
L_803A6568:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 803A6568
  if (crb(c,2)) { goto L_803A6580; } // 803A656C
  c->r[0]=R32(c->r[30]+0x00000004u); // 803A6570
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803A6574
  if (!crb(c,2)) { goto L_803A6580; } // 803A6578
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 803A657C
L_803A6580:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 803A6580
  if (crb(c,2)) { goto L_803A65D4; } // 803A6584
  c->r[0]=R32(c->r[30]+0x00000004u); // 803A6588
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 803A658C
  if (!crb(c,2)) { goto L_803A65D4; } // 803A6590
  c->r[3]=R32(c->r[28]+0x00000010u); // 803A6594
  c->r[0]=0u+0x43300000u; // 803A6598
  {uint32_t ea=c->r[2]+0xFFFFEF14u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A659C
  c->r[3]=c->r[3]^0x80000000u; // 803A65A0
  W32(c->r[1]+0x00000030u,c->r[0]); // 803A65A4
  {uint32_t ea=c->r[2]+0xFFFFEF48u; c->f[1]=RF64(ea);} // 803A65A8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 803A65AC
  W32(c->r[1]+0x00000034u,c->r[3]); // 803A65B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 803A65B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 803A65B8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803A65BC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803A65C0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 803A65C4
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 803A65C8
  c->r[0]=0u-c->r[0]; // 803A65CC
  W32(c->r[29]+0x00000018u,c->r[0]); // 803A65D0
L_803A65D4:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 803A65D4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 803A65D8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 803A65DC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 803A65E0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 803A65E4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 803A65E8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,28,ea,0,0);} // 803A65EC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[28]=RF64(ea);} // 803A65F0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,27,ea,0,0);} // 803A65F4
  c->r[11]=c->r[1]+0x00000060u; // 803A65F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[27]=RF64(ea);} // 803A65FC
  c->lr=0x803A6604u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A6600
  c->r[0]=R32(c->r[1]+0x000000B4u); // 803A6604
  c->lr=c->r[0]; // 803A6608
  c->r[1]=c->r[1]+0x000000B0u; // 803A660C
  return; // 803A6610
}

// fn_803A6614
void f_803A6614(Ctx* __restrict c) {
  trace_call(0x803A6614u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6614
  c->r[0]=c->lr; // 803A6618
  cmpu(c,0,c->r[4],0x00000018u); // 803A661C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A6620
  if (crb(c,2)) { goto L_803A6630; } // 803A6624
  c->r[3]=0u+0x00000000u; // 803A6628
  goto L_803A666C; // 803A662C
L_803A6630:;
  c->r[3]=c->r[3]+0x00000008u; // 803A6630
  c->lr=0x803A6638u; f_803A0A40(c); // 803A6634
  cmps(c,0,(int32_t)c->r[3],0); // 803A6638
  if (!crb(c,2)) { goto L_803A6648; } // 803A663C
  c->r[3]=0u+0x00000000u; // 803A6640
  goto L_803A666C; // 803A6644
L_803A6648:;
  if (crb(c,2)) { goto L_803A666C; } // 803A6648
  c->r[0]=0u+0xFFFFFFFFu; // 803A664C
  c->r[5]=0u+0x00000000u; // 803A6650
  W32(c->r[3]+0x00000000u,c->r[0]); // 803A6654
  c->r[4]=0u+0x00000001u; // 803A6658
  c->r[0]=0u+0x00000080u; // 803A665C
  W32(c->r[3]+0x00000004u,c->r[5]); // 803A6660
  W8(c->r[3]+0x00000008u,c->r[4]); // 803A6664
  W8(c->r[3]+0x00000009u,c->r[0]); // 803A6668
L_803A666C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A666C
  c->lr=c->r[0]; // 803A6670
  c->r[1]=c->r[1]+0x00000010u; // 803A6674
  return; // 803A6678
}

// fn_803A667C
void f_803A667C(Ctx* __restrict c) {
  trace_call(0x803A667Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 803A667C
  if (crb(c,2)) return; // 803A6680
  c->r[3]=c->r[3]+0x00000008u; // 803A6684
  f_803A0A9C(c); return; // 803A6688
  return; // 803A668C
}

// fn_803A6690
void f_803A6690(Ctx* __restrict c) {
  trace_call(0x803A6690u);
  c->r[6]=0u+0xFFFFFFFFu; // 803A6690
  c->r[5]=0u+0x00000000u; // 803A6694
  c->r[4]=0u+0x00000001u; // 803A6698
  c->r[0]=0u+0x00000080u; // 803A669C
  W32(c->r[3]+0x00000000u,c->r[6]); // 803A66A0
  W32(c->r[3]+0x00000004u,c->r[5]); // 803A66A4
  W8(c->r[3]+0x00000008u,c->r[4]); // 803A66A8
  W8(c->r[3]+0x00000009u,c->r[0]); // 803A66AC
  return; // 803A66B0
}

// fn_803A66B4
void f_803A66B4(Ctx* __restrict c) {
  trace_call(0x803A66B4u);
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 803A66B4
  f_803A667C(c); return; // 803A66B8
}

// fn_803A66BC
void f_803A66BC(Ctx* __restrict c) {
  trace_call(0x803A66BCu);
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 803A66BC
  f_803A6614(c); return; // 803A66C0
}

// fn_803A66C4
void f_803A66C4(Ctx* __restrict c) {
  trace_call(0x803A66C4u);
  c->r[6]=c->r[3]|c->r[3]; // 803A66C4
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A66C8
  c->r[7]=c->r[6]+0x00000008u; // 803A66CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A66D0
  c->r[6]=0u+0x00000000u; // 803A66D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A66D8
  c->ctr=c->r[12]; // 803A66DC
  if (true) { dispatch(c,c->ctr); return; } // 803A66E0
}

// __ct__Q34nw4r3snd12SoundArchiveFv
void f_803A66E4(Ctx* __restrict c) {
  trace_call(0x803A66E4u);
  c->r[5]=0u+0x80430000u; // 803A66E4
  c->r[4]=0u+0x00000000u; // 803A66E8
  c->r[5]=c->r[5]+0x000074D0u; // 803A66EC
  c->r[0]=0u+0x0000002Fu; // 803A66F0
  W32(c->r[3]+0x00000000u,c->r[5]); // 803A66F4
  W32(c->r[3]+0x00000004u,c->r[4]); // 803A66F8
  W8(c->r[3]+0x00000008u,c->r[0]); // 803A66FC
  W8(c->r[3]+0x00000009u,c->r[4]); // 803A6700
  return; // 803A6704
}

// fn_803A6708
void f_803A6708(Ctx* __restrict c) {
  trace_call(0x803A6708u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6708
  c->r[0]=c->lr; // 803A670C
  cmps(c,0,(int32_t)c->r[3],0); // 803A6710
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A6714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A6718
  c->r[31]=c->r[3]|c->r[3]; // 803A671C
  if (crb(c,2)) { goto L_803A6730; } // 803A6720
  cmps(c,0,(int32_t)c->r[4],0); // 803A6724
  if (!crb(c,1)) { goto L_803A6730; } // 803A6728
  c->lr=0x803A6730u; f_802896EC(c); // 803A672C
L_803A6730:;
  c->r[3]=c->r[31]|c->r[31]; // 803A6730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A6734
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A6738
  c->lr=c->r[0]; // 803A673C
  c->r[1]=c->r[1]+0x00000010u; // 803A6740
  return; // 803A6744
}

// fn_803A6748
void f_803A6748(Ctx* __restrict c) {
  trace_call(0x803A6748u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A6748
  c->r[0]=0u-c->r[3]; // 803A674C
  c->r[0]=c->r[0]|c->r[3]; // 803A6750
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A6754
  return; // 803A6758
}

// fn_803A675C
void f_803A675C(Ctx* __restrict c) {
  trace_call(0x803A675Cu);
  W32(c->r[3]+0x00000004u,c->r[4]); // 803A675C
  return; // 803A6760
}

// Shutdown__Q34nw4r3snd12SoundArchiveFv
void f_803A6764(Ctx* __restrict c) {
  trace_call(0x803A6764u);
  c->r[4]=0u+0x00000000u; // 803A6764
  c->r[0]=0u+0x0000002Fu; // 803A6768
  W32(c->r[3]+0x00000004u,c->r[4]); // 803A676C
  W8(c->r[3]+0x00000008u,c->r[0]); // 803A6770
  W8(c->r[3]+0x00000009u,c->r[4]); // 803A6774
  return; // 803A6778
}

// fn_803A677C
void f_803A677C(Ctx* __restrict c) {
  trace_call(0x803A677Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A677C
  f_803A7744(c); return; // 803A6780
}

// GetGroupCount__Q34nw4r3snd12SoundArchiveCFv
void f_803A6784(Ctx* __restrict c) {
  trace_call(0x803A6784u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A6784
  f_803A7784(c); return; // 803A6788
}

// fn_803A678C
void f_803A678C(Ctx* __restrict c) {
  trace_call(0x803A678Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A678C
  f_803A77C8(c); return; // 803A6790
}

// ConvertLabelStringToSoundId__Q34nw4r3snd12SoundArchiveCFPCc
void f_803A6794(Ctx* __restrict c) {
  trace_call(0x803A6794u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A6794
  c->r[5]=c->r[4]|c->r[4]; // 803A6798
  c->r[4]=R32(c->r[3]+0x00000034u); // 803A679C
  f_803A7BA4(c); return; // 803A67A0
}

// fn_803A67A4
void f_803A67A4(Ctx* __restrict c) {
  trace_call(0x803A67A4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67A4
  f_803A78CC(c); return; // 803A67A8
}

// fn_803A67AC
void f_803A67AC(Ctx* __restrict c) {
  trace_call(0x803A67ACu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67AC
  f_803A6E6C(c); return; // 803A67B0
}

// fn_803A67B4
void f_803A67B4(Ctx* __restrict c) {
  trace_call(0x803A67B4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67B4
  f_803A6F5C(c); return; // 803A67B8
}

// detail_ReadWaveSoundInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo
void f_803A67BC(Ctx* __restrict c) {
  trace_call(0x803A67BCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67BC
  f_803A7180(c); return; // 803A67C0
}

