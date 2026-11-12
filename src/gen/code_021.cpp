#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801AE730
void f_801AE730(Ctx* __restrict c) {
  trace_call(0x801AE730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE730
  c->r[0]=c->lr; // 801AE734
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE738
  c->lr=0x801AE740u; f_80061A4C(c); // 801AE73C
  c->r[3]=c->r[3]+0x000000ECu; // 801AE740
  c->lr=0x801AE748u; f_8012CF88(c); // 801AE744
  c->r[0]=cntlz(c->r[3]); // 801AE748
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AE74C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE750
  c->lr=c->r[0]; // 801AE754
  c->r[1]=c->r[1]+0x00000010u; // 801AE758
  return; // 801AE75C
}

// fn_801AE760
void f_801AE760(Ctx* __restrict c) {
  trace_call(0x801AE760u);
  {uint32_t ea=c->r[3]+0x000001D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AE760
  {uint32_t ea=c->r[3]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE764
  fcmp(c,0,c->f[2],c->f[0]); // 801AE768
  if (!crb(c,1)) { goto L_801AE778; } // 801AE76C
  {uint32_t ea=c->r[2]+0xFFFFAEDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE770
  {uint32_t ea=c->r[3]+0x000001D8u; WF32(ea,c->f[0]);} // 801AE774
L_801AE778:;
  {uint32_t ea=c->r[3]+0x000001D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE778
  c->r[0]=0u+0x00000000u; // 801AE77C
  fcmp(c,0,c->f[1],c->f[0]); // 801AE780
  if (!crb(c,1)) { goto L_801AE79C; } // 801AE784
  {uint32_t ea=c->r[3]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE788
  fcmp(c,0,c->f[1],c->f[0]); // 801AE78C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801AE790
  if (!crb(c,2)) { goto L_801AE79C; } // 801AE794
  c->r[0]=0u+0x00000001u; // 801AE798
L_801AE79C:;
  c->r[3]=c->r[0]|c->r[0]; // 801AE79C
  return; // 801AE7A0
}

// fn_801AE7A4
void f_801AE7A4(Ctx* __restrict c) {
  trace_call(0x801AE7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE7A4
  c->r[0]=c->lr; // 801AE7A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE7AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE7B0
  c->r[31]=c->r[3]|c->r[3]; // 801AE7B4
  c->lr=0x801AE7BCu; f_80061A4C(c); // 801AE7B8
  c->r[4]=c->r[3]|c->r[3]; // 801AE7BC
  c->r[3]=c->r[31]|c->r[31]; // 801AE7C0
  c->r[4]=c->r[4]+0x00000384u; // 801AE7C4
  c->lr=0x801AE7CCu; f_8003F484(c); // 801AE7C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE7CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE7D0
  c->lr=c->r[0]; // 801AE7D4
  c->r[1]=c->r[1]+0x00000010u; // 801AE7D8
  return; // 801AE7DC
}

// fn_801AE7E0
void f_801AE7E0(Ctx* __restrict c) {
  trace_call(0x801AE7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE7E0
  c->r[0]=c->lr; // 801AE7E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AE7E8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 801AE7EC
  c->f[31]=c->f[1]; // 801AE7F0
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AE7F4
  c->r[30]=c->r[3]|c->r[3]; // 801AE7F8
  c->lr=0x801AE800u; f_80061A4C(c); // 801AE7FC
  c->r[31]=c->r[3]|c->r[3]; // 801AE800
  c->lr=0x801AE808u; f_80061A4C(c); // 801AE804
  c->r[4]=c->r[3]|c->r[3]; // 801AE808
  c->r[3]=c->r[1]+0x00000014u; // 801AE80C
  c->r[4]=c->r[4]+0x00000390u; // 801AE810
  c->r[5]=c->r[31]+0x00000384u; // 801AE814
  c->lr=0x801AE81Cu; f_8007B8A4(c); // 801AE818
  c->r[3]=c->r[1]+0x00000014u; // 801AE81C
  c->r[4]=c->r[3]|c->r[3]; // 801AE820
  c->lr=0x801AE828u; f_80265750(c); // 801AE824
  c->f[1]=c->f[31]; // 801AE828
  c->r[3]=c->r[1]+0x00000008u; // 801AE82C
  c->r[4]=c->r[1]+0x00000014u; // 801AE830
  c->lr=0x801AE838u; f_800FACB4(c); // 801AE834
  c->lr=0x801AE83Cu; f_80061A4C(c); // 801AE838
  c->r[4]=c->r[3]|c->r[3]; // 801AE83C
  c->r[3]=c->r[30]|c->r[30]; // 801AE840
  c->r[4]=c->r[4]+0x00000384u; // 801AE844
  c->r[5]=c->r[1]+0x00000008u; // 801AE848
  c->lr=0x801AE850u; f_80064C34(c); // 801AE84C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 801AE850
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AE854
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AE858
  c->lr=c->r[0]; // 801AE85C
  c->r[1]=c->r[1]+0x00000030u; // 801AE860
  return; // 801AE864
}

// fn_801AE868
void f_801AE868(Ctx* __restrict c) {
  trace_call(0x801AE868u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE868
  c->r[0]=c->lr; // 801AE86C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE870
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801AE874
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801AE878
  c->f[31]=c->f[1]; // 801AE87C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE880
  c->r[31]=c->r[4]|c->r[4]; // 801AE884
  c->lr=0x801AE88Cu; f_80061A4C(c); // 801AE888
  {uint32_t ea=c->r[2]+0xFFFFAE98u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE88C
  c->f[3]=c->f[31]; // 801AE890
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801AE894
  c->r[4]=c->r[31]|c->r[31]; // 801AE898
  c->f[2]=c->f[1]; // 801AE89C
  c->r[5]=0u+0x00000007u; // 801AE8A0
  c->lr=0x801AE8A8u; f_801DB32C(c); // 801AE8A4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801AE8A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE8AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801AE8B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE8B4
  c->lr=c->r[0]; // 801AE8B8
  c->r[1]=c->r[1]+0x00000020u; // 801AE8BC
  return; // 801AE8C0
}

// fn_801AE8C4
void f_801AE8C4(Ctx* __restrict c) {
  trace_call(0x801AE8C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE8C4
  c->r[0]=c->lr; // 801AE8C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE8CC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801AE8D0
  c->f[31]=c->f[1]; // 801AE8D4
  W32(c->r[1]+0x00000014u,c->r[31]); // 801AE8D8
  c->r[31]=c->r[4]|c->r[4]; // 801AE8DC
  c->lr=0x801AE8E4u; f_80061A4C(c); // 801AE8E0
  c->f[1]=c->f[31]; // 801AE8E4
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801AE8E8
  c->r[4]=c->r[31]|c->r[31]; // 801AE8EC
  c->lr=0x801AE8F4u; f_801DB780(c); // 801AE8F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE8F4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801AE8F8
  c->r[31]=R32(c->r[1]+0x00000014u); // 801AE8FC
  c->lr=c->r[0]; // 801AE900
  c->r[1]=c->r[1]+0x00000020u; // 801AE904
  return; // 801AE908
}

// fn_801AE90C
void f_801AE90C(Ctx* __restrict c) {
  trace_call(0x801AE90Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE90C
  c->r[0]=c->lr; // 801AE910
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE914
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801AE918
  c->f[31]=c->f[1]; // 801AE91C
  c->lr=0x801AE924u; f_80061A4C(c); // 801AE920
  c->f[1]=c->f[31]; // 801AE924
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801AE928
  c->lr=0x801AE930u; f_801DB594(c); // 801AE92C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE930
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801AE934
  c->lr=c->r[0]; // 801AE938
  c->r[1]=c->r[1]+0x00000010u; // 801AE93C
  return; // 801AE940
}

// fn_801AE944
void f_801AE944(Ctx* __restrict c) {
  trace_call(0x801AE944u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE944
  c->r[0]=c->lr; // 801AE948
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801AE94C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 801AE950
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 801AE954
  c->f[31]=c->f[1]; // 801AE958
  W32(c->r[1]+0x000000DCu,c->r[31]); // 801AE95C
  W32(c->r[1]+0x000000D8u,c->r[30]); // 801AE960
  c->r[30]=c->r[3]|c->r[3]; // 801AE964
  c->lr=0x801AE96Cu; f_80061A4C(c); // 801AE968
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801AE96C
  c->lr=0x801AE974u; f_80067C50(c); // 801AE970
  cmps(c,0,(int32_t)c->r[3],1); // 801AE974
  if (!crb(c,2)) { goto L_801AEA44; } // 801AE978
  c->r[31]=c->r[13]+0xFFFF94B8u; // 801AE97C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801AE980
  c->lr=0x801AE988u; f_80067C50(c); // 801AE984
  cmps(c,0,(int32_t)c->r[3],1); // 801AE988
  if (!crb(c,2)) { goto L_801AEA44; } // 801AE98C
  c->r[6]=R32(c->r[30]+0x00000000u); // 801AE990
  c->r[3]=c->r[1]+0x00000028u; // 801AE994
  c->r[5]=R32(c->r[30]+0x00000004u); // 801AE998
  c->r[4]=c->r[1]+0x00000034u; // 801AE99C
  c->r[0]=R32(c->r[30]+0x00000008u); // 801AE9A0
  W32(c->r[1]+0x00000028u,c->r[6]); // 801AE9A4
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 801AE9A8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AE9AC
  c->lr=0x801AE9B4u; f_80044038(c); // 801AE9B0
  c->r[3]=R16(c->r[13]+0xFFFF93C8u); // 801AE9B4
  c->r[0]=0u+0x43300000u; // 801AE9B8
  W32(c->r[1]+0x000000D0u,c->r[0]); // 801AE9BC
  {uint32_t ea=c->r[2]+0xFFFFAEE0u; c->f[1]=RF64(ea);} // 801AE9C0
  W32(c->r[1]+0x000000D4u,c->r[3]); // 801AE9C4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AE9C8
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 801AE9CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801AE9D0
  fcmp(c,0,c->f[2],c->f[0]); // 801AE9D4
  if (!crb(c,0)) { goto L_801AEA10; } // 801AE9D8
  c->f[1]=c->f[31]; // 801AE9DC
  c->r[3]=c->r[1]+0x000000ACu; // 801AE9E0
  c->r[4]=0u+0x00000000u; // 801AE9E4
  c->lr=0x801AE9ECu; f_8010541C(c); // 801AE9E8
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 801AE9EC
  c->r[3]=c->r[1]+0x00000020u; // 801AE9F0
  c->r[4]=c->r[1]+0x000000ACu; // 801AE9F4
  c->r[5]=R32(c->r[6]+0x00000000u); // 801AE9F8
  c->r[0]=R32(c->r[6]+0x00000004u); // 801AE9FC
  W32(c->r[1]+0x00000020u,c->r[5]); // 801AEA00
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEA04
  c->lr=0x801AEA0Cu; f_800BCDAC(c); // 801AEA08
  goto L_801AEACC; // 801AEA0C
L_801AEA10:;
  c->f[1]=c->f[31]; // 801AEA10
  c->r[3]=c->r[1]+0x00000088u; // 801AEA14
  c->r[4]=0u+0x00000000u; // 801AEA18
  c->lr=0x801AEA20u; f_8010541C(c); // 801AEA1C
  c->r[6]=R32(c->r[31]+0x00000004u); // 801AEA20
  c->r[3]=c->r[1]+0x00000018u; // 801AEA24
  c->r[4]=c->r[1]+0x00000088u; // 801AEA28
  c->r[5]=R32(c->r[6]+0x00000000u); // 801AEA2C
  c->r[0]=R32(c->r[6]+0x00000004u); // 801AEA30
  W32(c->r[1]+0x00000018u,c->r[5]); // 801AEA34
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AEA38
  c->lr=0x801AEA40u; f_800BCDAC(c); // 801AEA3C
  goto L_801AEACC; // 801AEA40
L_801AEA44:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801AEA44
  c->lr=0x801AEA4Cu; f_80067C50(c); // 801AEA48
  cmps(c,0,(int32_t)c->r[3],1); // 801AEA4C
  if (!crb(c,2)) { goto L_801AEA88; } // 801AEA50
  c->f[1]=c->f[31]; // 801AEA54
  c->r[3]=c->r[1]+0x00000064u; // 801AEA58
  c->r[4]=0u+0x00000000u; // 801AEA5C
  c->lr=0x801AEA64u; f_8010541C(c); // 801AEA60
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 801AEA64
  c->r[3]=c->r[1]+0x00000010u; // 801AEA68
  c->r[4]=c->r[1]+0x00000064u; // 801AEA6C
  c->r[5]=R32(c->r[6]+0x00000000u); // 801AEA70
  c->r[0]=R32(c->r[6]+0x00000004u); // 801AEA74
  W32(c->r[1]+0x00000010u,c->r[5]); // 801AEA78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEA7C
  c->lr=0x801AEA84u; f_800BCDAC(c); // 801AEA80
  goto L_801AEACC; // 801AEA84
L_801AEA88:;
  c->r[31]=c->r[13]+0xFFFF94B8u; // 801AEA88
  c->r[3]=R32(c->r[31]+0x00000004u); // 801AEA8C
  c->lr=0x801AEA94u; f_80067C50(c); // 801AEA90
  cmps(c,0,(int32_t)c->r[3],1); // 801AEA94
  if (!crb(c,2)) { goto L_801AEACC; } // 801AEA98
  c->f[1]=c->f[31]; // 801AEA9C
  c->r[3]=c->r[1]+0x00000040u; // 801AEAA0
  c->r[4]=0u+0x00000000u; // 801AEAA4
  c->lr=0x801AEAACu; f_8010541C(c); // 801AEAA8
  c->r[6]=R32(c->r[31]+0x00000004u); // 801AEAAC
  c->r[3]=c->r[1]+0x00000008u; // 801AEAB0
  c->r[4]=c->r[1]+0x00000040u; // 801AEAB4
  c->r[5]=R32(c->r[6]+0x00000000u); // 801AEAB8
  c->r[0]=R32(c->r[6]+0x00000004u); // 801AEABC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801AEAC0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AEAC4
  c->lr=0x801AEACCu; f_800BCDAC(c); // 801AEAC8
L_801AEACC:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 801AEACC
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801AEAD0
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 801AEAD4
  c->r[31]=R32(c->r[1]+0x000000DCu); // 801AEAD8
  c->r[30]=R32(c->r[1]+0x000000D8u); // 801AEADC
  c->lr=c->r[0]; // 801AEAE0
  c->r[1]=c->r[1]+0x000000F0u; // 801AEAE4
  return; // 801AEAE8
}

// fn_801AEAEC
void f_801AEAEC(Ctx* __restrict c) {
  trace_call(0x801AEAECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEAEC
  c->r[0]=c->lr; // 801AEAF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEAF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AEAF8
  c->r[31]=c->r[4]|c->r[4]; // 801AEAFC
  c->lr=0x801AEB04u; f_80061A4C(c); // 801AEB00
  c->r[5]=c->r[3]|c->r[3]; // 801AEB04
  c->r[4]=c->r[31]|c->r[31]; // 801AEB08
  c->r[3]=c->r[1]+0x00000008u; // 801AEB0C
  c->r[5]=c->r[5]+0x00000384u; // 801AEB10
  c->lr=0x801AEB18u; f_8007B8A4(c); // 801AEB14
  c->r[3]=c->r[1]+0x00000008u; // 801AEB18
  c->lr=0x801AEB20u; f_802657AC(c); // 801AEB1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AEB20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AEB24
  c->lr=c->r[0]; // 801AEB28
  c->r[1]=c->r[1]+0x00000020u; // 801AEB2C
  return; // 801AEB30
}

// fn_801AEB34
void f_801AEB34(Ctx* __restrict c) {
  trace_call(0x801AEB34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEB34
  c->r[0]=c->lr; // 801AEB38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEB3C
  c->r[0]=0u+0x00000001u; // 801AEB40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AEB44
  c->r[31]=c->r[3]|c->r[3]; // 801AEB48
  c->r[4]=c->r[31]|c->r[31]; // 801AEB4C
  W8(c->r[3]+0x000001A0u,c->r[0]); // 801AEB50
  c->r[3]=c->r[1]+0x00000008u; // 801AEB54
  c->lr=0x801AEB5Cu; f_801AE7E0(c); // 801AEB58
  c->r[3]=c->r[31]+0x00000040u; // 801AEB5C
  c->r[4]=c->r[1]+0x00000008u; // 801AEB60
  c->lr=0x801AEB68u; f_8003F468(c); // 801AEB64
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AEB68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AEB6C
  c->lr=c->r[0]; // 801AEB70
  c->r[1]=c->r[1]+0x00000020u; // 801AEB74
  return; // 801AEB78
}

// fn_801AEB7C
void f_801AEB7C(Ctx* __restrict c) {
  trace_call(0x801AEB7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEB7C
  c->r[0]=c->lr; // 801AEB80
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AEB84
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801AEB88
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801AEB8C
  c->f[31]=c->f[1]; // 801AEB90
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801AEB94
  c->r[31]=c->r[4]|c->r[4]; // 801AEB98
  W32(c->r[1]+0x00000038u,c->r[30]); // 801AEB9C
  c->r[30]=c->r[3]|c->r[3]; // 801AEBA0
  c->r[0]=R8(c->r[3]+0x000001A0u); // 801AEBA4
  cmps(c,0,(int32_t)c->r[0],0); // 801AEBA8
  if (crb(c,2)) { goto L_801AEBD8; } // 801AEBAC
  c->r[0]=0u+0x00000000u; // 801AEBB0
  W8(c->r[3]+0x000001A0u,c->r[0]); // 801AEBB4
  c->r[3]=c->r[1]+0x00000020u; // 801AEBB8
  c->lr=0x801AEBC0u; f_8003F484(c); // 801AEBBC
  {uint32_t ea=c->r[2]+0xFFFFAEE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEBC0
  c->r[4]=c->r[3]|c->r[3]; // 801AEBC4
  c->f[1]=c->f[31]; // 801AEBC8
  c->r[3]=c->r[30]|c->r[30]; // 801AEBCC
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[0]); // 801AEBD0
  c->lr=0x801AEBD8u; f_801AC518(c); // 801AEBD4
L_801AEBD8:;
  c->r[4]=c->r[31]|c->r[31]; // 801AEBD8
  c->r[3]=c->r[30]+0x00000094u; // 801AEBDC
  c->lr=0x801AEBE4u; f_8003F468(c); // 801AEBE0
  c->r[3]=c->r[30]|c->r[30]; // 801AEBE4
  c->lr=0x801AEBECu; f_801AC25C(c); // 801AEBE8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AEBEC
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 801AEBF0
  if (crb(c,2)) { goto L_801AEC28; } // 801AEBF4
  c->r[3]=c->r[1]+0x00000014u; // 801AEBF8
  c->r[4]=c->r[30]+0x00000040u; // 801AEBFC
  c->lr=0x801AEC04u; f_8003F484(c); // 801AEC00
  c->lr=0x801AEC08u; f_80061A4C(c); // 801AEC04
  {uint32_t ea=c->r[2]+0xFFFFAE98u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AEC08
  c->r[4]=c->r[1]+0x00000014u; // 801AEC0C
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801AEC10
  c->r[5]=0u+0x00000007u; // 801AEC14
  c->f[2]=c->f[1]; // 801AEC18
  c->f[3]=c->f[1]; // 801AEC1C
  c->lr=0x801AEC24u; f_801DB32C(c); // 801AEC20
  goto L_801AEC54; // 801AEC24
L_801AEC28:;
  c->r[4]=c->r[31]|c->r[31]; // 801AEC28
  c->r[3]=c->r[1]+0x00000008u; // 801AEC2C
  c->lr=0x801AEC34u; f_8003F484(c); // 801AEC30
  c->lr=0x801AEC38u; f_80061A4C(c); // 801AEC34
  {uint32_t ea=c->r[2]+0xFFFFAE98u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AEC38
  c->r[4]=c->r[1]+0x00000008u; // 801AEC3C
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801AEC40
  c->r[5]=0u+0x00000007u; // 801AEC44
  c->f[2]=c->f[1]; // 801AEC48
  c->f[3]=c->f[1]; // 801AEC4C
  c->lr=0x801AEC54u; f_801DB32C(c); // 801AEC50
L_801AEC54:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801AEC54
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AEC58
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801AEC5C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AEC60
  c->r[30]=R32(c->r[1]+0x00000038u); // 801AEC64
  c->lr=c->r[0]; // 801AEC68
  c->r[1]=c->r[1]+0x00000050u; // 801AEC6C
  return; // 801AEC70
}

// fn_801AEC74
void f_801AEC74(Ctx* __restrict c) {
  trace_call(0x801AEC74u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEC74
  c->r[0]=c->lr; // 801AEC78
  {uint32_t ea=c->r[2]+0xFFFFAEA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AEC7C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AEC80
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801AEC84
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801AEC88
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801AEC8C
  c->r[31]=c->r[3]|c->r[3]; // 801AEC90
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801AEC94
  c->r[3]=c->r[1]+0x00000008u; // 801AEC98
  c->lr=0x801AECA0u; f_803949B8(c); // 801AEC9C
  c->r[3]=c->r[31]|c->r[31]; // 801AECA0
  c->r[5]=c->r[31]|c->r[31]; // 801AECA4
  c->r[4]=c->r[1]+0x00000008u; // 801AECA8
  c->lr=0x801AECB0u; f_802646E0(c); // 801AECAC
  c->r[3]=c->r[31]|c->r[31]; // 801AECB0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AECB4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AECB8
  c->lr=c->r[0]; // 801AECBC
  c->r[1]=c->r[1]+0x00000040u; // 801AECC0
  return; // 801AECC4
}

// fn_801AECC8
void f_801AECC8(Ctx* __restrict c) {
  trace_call(0x801AECC8u);
  {uint32_t ea=c->r[2]+0xFFFFAE98u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AECC8
  c->r[3]=0u+0x80540000u; // 801AECCC
  {uint32_t ea=c->r[2]+0xFFFFAE9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AECD0
  c->r[3]=c->r[3]+0xFFFFC260u; // 801AECD4
  c->f[3]=c->f[1]; // 801AECD8
  f_8003F588(c); return; // 801AECDC
}

// fn_801AECE0
void f_801AECE0(Ctx* __restrict c) {
  trace_call(0x801AECE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AECE0
  c->r[0]=c->lr; // 801AECE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AECE8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801AECEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AECF0
  c->r[31]=c->r[4]|c->r[4]; // 801AECF4
  cmpu(c,0,c->r[0],0x00000001u); // 801AECF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AECFC
  c->r[30]=c->r[3]|c->r[3]; // 801AED00
  if (!crb(c,2)) { goto L_801AED24; } // 801AED04
  c->r[3]=c->r[31]|c->r[31]; // 801AED08
  c->r[4]=c->r[6]|c->r[6]; // 801AED0C
  c->lr=0x801AED14u; f_8013939C(c); // 801AED10
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AED14
  c->r[3]=0u+0x00000001u; // 801AED18
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801AED1C
  goto L_801AED28; // 801AED20
L_801AED24:;
  c->r[3]=0u+0x00000000u; // 801AED24
L_801AED28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AED28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AED2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AED30
  c->lr=c->r[0]; // 801AED34
  c->r[1]=c->r[1]+0x00000010u; // 801AED38
  return; // 801AED3C
}

// fn_801AED40
void f_801AED40(Ctx* __restrict c) {
  trace_call(0x801AED40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AED40
  c->r[0]=c->lr; // 801AED44
  cmps(c,0,(int32_t)c->r[3],0); // 801AED48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AED4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AED50
  c->r[31]=c->r[3]|c->r[3]; // 801AED54
  if (crb(c,2)) { goto L_801AED68; } // 801AED58
  cmps(c,0,(int32_t)c->r[4],0); // 801AED5C
  if (!crb(c,1)) { goto L_801AED68; } // 801AED60
  c->lr=0x801AED68u; f_802896EC(c); // 801AED64
L_801AED68:;
  c->r[3]=c->r[31]|c->r[31]; // 801AED68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AED6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AED70
  c->lr=c->r[0]; // 801AED74
  c->r[1]=c->r[1]+0x00000010u; // 801AED78
  return; // 801AED7C
}

// fn_801AED80
void f_801AED80(Ctx* __restrict c) {
  trace_call(0x801AED80u);
  c->r[3]=0u+0x00000003u; // 801AED80
  return; // 801AED84
}

// fn_801AED88
void f_801AED88(Ctx* __restrict c) {
  trace_call(0x801AED88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AED88
  c->r[0]=c->lr; // 801AED8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AED90
  c->lr=0x801AED98u; f_8003DA30(c); // 801AED94
  c->r[4]=0u+0x804D0000u; // 801AED98
  c->r[5]=R32(c->r[13]+0xFFFF8760u); // 801AED9C
  c->r[4]=c->r[4]+0x00003280u; // 801AEDA0
  c->r[6]=R32(c->r[13]+0xFFFF8764u); // 801AEDA4
  c->r[7]=R32(c->r[13]+0xFFFF8768u); // 801AEDA8
  c->r[4]=c->r[4]+0x00000034u; // 801AEDAC
  c->r[8]=R32(c->r[13]+0xFFFF876Cu); // 801AEDB0
  c->r[9]=R32(c->r[13]+0xFFFF8770u); // 801AEDB4
  c->r[10]=R32(c->r[13]+0xFFFF8774u); // 801AEDB8
  c->lr=0x801AEDC0u; f_8003DA3C(c); // 801AEDBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEDC0
  c->lr=c->r[0]; // 801AEDC4
  c->r[1]=c->r[1]+0x00000010u; // 801AEDC8
  return; // 801AEDCC
}

// fn_801AEDD0
void f_801AEDD0(Ctx* __restrict c) {
  trace_call(0x801AEDD0u);
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)24576); // 801AEDD0
  c->r[4]=0u+0x00760000u; // 801AEDD4
  W32(c->r[13]+0xFFFF8764u,c->r[3]); // 801AEDD8
  c->r[6]=0u+0x00040000u; // 801AEDDC
  c->r[0]=c->r[4]+0x00001001u; // 801AEDE0
  c->r[3]=c->r[0]-c->r[5]; // 801AEDE4
  c->r[3]=c->r[3]+0xFFFE0000u; // 801AEDE8
  c->r[5]=c->r[6]+0xFFFFE800u; // 801AEDEC
  c->r[0]=c->r[3]+0x00007000u; // 801AEDF0
  W32(c->r[13]+0xFFFF8768u,c->r[5]); // 801AEDF4
  c->r[4]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801AEDF8
  c->r[3]=0u+0x00020000u; // 801AEDFC
  c->r[0]=0u+0x00006000u; // 801AEE00
  c->r[3]=c->r[3]+0xFFFF9000u; // 801AEE04
  W32(c->r[13]+0xFFFF8760u,c->r[0]); // 801AEE08
  c->r[0]=0u+0x00000001u; // 801AEE0C
  W32(c->r[13]+0xFFFF876Cu,c->r[4]); // 801AEE10
  W32(c->r[13]+0xFFFF8770u,c->r[3]); // 801AEE14
  W32(c->r[13]+0xFFFF8774u,c->r[0]); // 801AEE18
  return; // 801AEE1C
}

// fn_801AEE20
void f_801AEE20(Ctx* __restrict c) {
  trace_call(0x801AEE20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEE20
  c->r[0]=c->lr; // 801AEE24
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AEE28
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801AEE2C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801AEE30
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801AEE34
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801AEE38
  c->r[11]=c->r[1]+0x00000020u; // 801AEE3C
  c->lr=0x801AEE44u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AEE40
  c->r[31]=0u+0x804D0000u; // 801AEE44
  {uint32_t ea=c->r[2]+0xFFFFAEF0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801AEE48
  c->r[31]=c->r[31]+0x00003318u; // 801AEE4C
  c->r[29]=0u+0x00000000u; // 801AEE50
  c->r[30]=0u+0x80490000u; // 801AEE54
L_801AEE58:;
  c->r[4]=c->r[29]|c->r[29]; // 801AEE58
  c->r[3]=c->r[30]+0xFFFFEE9Cu; // 801AEE5C
  c->lr=0x801AEE64u; f_80104358(c); // 801AEE60
  c->r[0]=R32(c->r[3]+0x00000008u); // 801AEE64
  cmps(c,0,(int32_t)c->r[0],0); // 801AEE68
  if (crb(c,2)) { goto L_801AEEAC; } // 801AEE6C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801AEE70
  c->lr=0x801AEE78u; f_801AEEE8(c); // 801AEE74
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 801AEE78
  fcmp(c,0,c->f[0],c->f[30]); // 801AEE7C
  c->lr=0x801AEE84u; f_801AEFEC(c); // 801AEE80
  c->f[31]=c->f[1]; // 801AEE84
  c->r[4]=c->r[29]|c->r[29]; // 801AEE88
  c->r[3]=c->r[30]+0xFFFFEE9Cu; // 801AEE8C
  c->lr=0x801AEE94u; f_80104358(c); // 801AEE90
  c->r[12]=R32(c->r[3]+0x00000000u); // 801AEE94
  c->f[1]=c->f[31]; // 801AEE98
  c->r[4]=0u+0x00000000u; // 801AEE9C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801AEEA0
  c->ctr=c->r[12]; // 801AEEA4
  if (true) { c->lr=0x801AEEACu; dispatch(c,c->ctr); } // 801AEEA8
L_801AEEAC:;
  c->r[29]=c->r[29]+0x00000001u; // 801AEEAC
  cmps(c,0,(int32_t)c->r[29],2); // 801AEEB0
  if (crb(c,0)) { IRQCHK(c); goto L_801AEE58; } // 801AEEB4
  c->lr=0x801AEEBCu; f_8003DA30(c); // 801AEEB8
  c->lr=0x801AEEC0u; f_8003E184(c); // 801AEEBC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801AEEC0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801AEEC4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801AEEC8
  c->r[11]=c->r[1]+0x00000020u; // 801AEECC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801AEED0
  c->lr=0x801AEED8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AEED4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AEED8
  c->lr=c->r[0]; // 801AEEDC
  c->r[1]=c->r[1]+0x00000040u; // 801AEEE0
  return; // 801AEEE4
}

// fn_801AEEE8
void f_801AEEE8(Ctx* __restrict c) {
  trace_call(0x801AEEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEEE8
  c->r[0]=c->lr; // 801AEEEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEEF0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801AEEF4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801AEEF8
  c->r[3]=0u+0x804D0000u; // 801AEEFC
  c->r[0]=0u+0x43300000u; // 801AEF00
  c->r[3]=c->r[3]+0x00003318u; // 801AEF04
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AEF08
  c->r[0]=R32(c->r[3]+0x00000028u); // 801AEF0C
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[1]=RF64(ea);} // 801AEF10
  c->r[0]=c->r[0]^0x80000000u; // 801AEF14
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AEF18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AEF1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801AEF20
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801AEF24
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[0]); // 801AEF28
  c->lr=0x801AEF30u; f_8026F3A8(c); // 801AEF2C
  cmpu(c,0,c->r[3],0x00000001u); // 801AEF30
  if (!crb(c,2)) { goto L_801AEF44; } // 801AEF34
  {uint32_t ea=c->r[2]+0xFFFFAEF8u; c->f[0]=RF64(ea);} // 801AEF38
  c->f[31]=c->f[31]*c->f[0]; // 801AEF3C
  c->f[31]=c->ps1[31]=S(c->f[31]); // 801AEF40
L_801AEF44:;
  c->f[1]=c->f[31]; // 801AEF44
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801AEF48
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801AEF4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AEF50
  c->lr=c->r[0]; // 801AEF54
  c->r[1]=c->r[1]+0x00000020u; // 801AEF58
  return; // 801AEF5C
}

// fn_801AEF60
void f_801AEF60(Ctx* __restrict c) {
  trace_call(0x801AEF60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEF60
  c->r[0]=c->lr; // 801AEF64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEF68
  c->lr=0x801AEF70u; f_8003DA30(c); // 801AEF6C
  c->lr=0x801AEF74u; f_8003E35C(c); // 801AEF70
  c->lr=0x801AEF78u; f_800F65B8(c); // 801AEF74
  c->lr=0x801AEF7Cu; f_800F6A44(c); // 801AEF78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEF7C
  c->lr=c->r[0]; // 801AEF80
  c->r[1]=c->r[1]+0x00000010u; // 801AEF84
  return; // 801AEF88
}

// fn_801AEF8C
void f_801AEF8C(Ctx* __restrict c) {
  trace_call(0x801AEF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEF8C
  c->r[0]=c->lr; // 801AEF90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEF94
  c->lr=0x801AEF9Cu; f_8003DA30(c); // 801AEF98
  c->lr=0x801AEFA0u; f_8003E448(c); // 801AEF9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEFA0
  c->lr=c->r[0]; // 801AEFA4
  c->r[1]=c->r[1]+0x00000010u; // 801AEFA8
  return; // 801AEFAC
}

// fn_801AEFB0
void f_801AEFB0(Ctx* __restrict c) {
  trace_call(0x801AEFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEFB0
  c->r[0]=c->lr; // 801AEFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEFB8
  c->lr=0x801AEFC0u; f_8003DA30(c); // 801AEFBC
  c->lr=0x801AEFC4u; f_8003DE28(c); // 801AEFC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEFC4
  c->lr=c->r[0]; // 801AEFC8
  c->r[1]=c->r[1]+0x00000010u; // 801AEFCC
  return; // 801AEFD0
}

// fn_801AEFD4
void f_801AEFD4(Ctx* __restrict c) {
  trace_call(0x801AEFD4u);
  c->r[12]=R32(c->r[3]+0x00000010u); // 801AEFD4
  c->r[5]=0u+0x00000000u; // 801AEFD8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801AEFDC
  c->ctr=c->r[12]; // 801AEFE0
  c->r[4]=c->r[4]+0x00000038u; // 801AEFE4
  if (true) { dispatch(c,c->ctr); return; } // 801AEFE8
}

// fn_801AEFEC
void f_801AEFEC(Ctx* __restrict c) {
  trace_call(0x801AEFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEFEC
  c->r[0]=c->lr; // 801AEFF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEFF4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801AEFF8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801AEFFC
  c->r[3]=0u+0x804D0000u; // 801AF000
  c->r[3]=c->r[3]+0x00003318u; // 801AF004
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 801AF008
  c->lr=0x801AF010u; f_801AEEE8(c); // 801AF00C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801AF010
  {uint32_t ea=c->r[2]+0xFFFFAEF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF014
  fcmp(c,0,c->f[1],c->f[0]); // 801AF018
  if (!crb(c,1)) { goto L_801AF024; } // 801AF01C
  c->f[1]=c->f[0]; // 801AF020
L_801AF024:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801AF024
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF028
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801AF02C
  c->lr=c->r[0]; // 801AF030
  c->r[1]=c->r[1]+0x00000020u; // 801AF034
  return; // 801AF038
}

// fn_801AF03C
void f_801AF03C(Ctx* __restrict c) {
  trace_call(0x801AF03Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF03C
  c->r[0]=c->lr; // 801AF040
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF044
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801AF048
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801AF04C
  c->lr=0x801AF054u; f_801AEEE8(c); // 801AF050
  c->f[31]=c->f[1]; // 801AF054
  c->lr=0x801AF05Cu; f_801AEFEC(c); // 801AF058
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 801AF05C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801AF060
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801AF064
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF068
  c->lr=c->r[0]; // 801AF06C
  c->r[1]=c->r[1]+0x00000020u; // 801AF070
  return; // 801AF074
}

// fn_801AF078
void f_801AF078(Ctx* __restrict c) {
  trace_call(0x801AF078u);
  {uint32_t ea=c->r[2]+0xFFFFAF08u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF078
  c->r[3]=0u+0x80540000u; // 801AF07C
  {uint32_t ea=c->r[2]+0xFFFFAF0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AF080
  c->r[3]=c->r[3]+0xFFFFC270u; // 801AF084
  c->f[3]=c->f[1]; // 801AF088
  f_8003F588(c); return; // 801AF08C
}

// fn_801AF090
void f_801AF090(Ctx* __restrict c) {
  trace_call(0x801AF090u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF090
  c->r[0]=c->lr; // 801AF094
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AF098
  c->r[11]=c->r[1]+0x00000040u; // 801AF09C
  c->lr=0x801AF0A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF0A0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801AF0A4
  c->r[30]=c->r[3]|c->r[3]; // 801AF0A8
  c->r[29]=c->r[4]|c->r[4]; // 801AF0AC
  c->r[31]=c->r[5]|c->r[5]; // 801AF0B0
  cmps(c,0,(int32_t)c->r[0],1); // 801AF0B4
  if (crb(c,2)) { goto L_801AF104; } // 801AF0B8
  if (!crb(c,0)) { goto L_801AF0CC; } // 801AF0BC
  cmps(c,0,(int32_t)c->r[0],0); // 801AF0C0
  if (!crb(c,0)) { goto L_801AF0D8; } // 801AF0C4
  goto L_801AF240; // 801AF0C8
L_801AF0CC:;
  cmps(c,0,(int32_t)c->r[0],3); // 801AF0CC
  if (!crb(c,0)) { goto L_801AF240; } // 801AF0D0
  goto L_801AF1FC; // 801AF0D4
L_801AF0D8:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801AF0D8
  c->r[0]=0u+0x00000006u; // 801AF0DC
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 801AF0E0
  c->r[5]=c->r[3]+0x0000001Cu; // 801AF0E4
  c->ctr=c->r[0]; // 801AF0E8
L_801AF0EC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801AF0EC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801AF0F0
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AF0F4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801AF0F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AF0EC; } // 801AF0FC
  goto L_801AF240; // 801AF100
L_801AF104:;
  c->r[0]=0u+0x00000000u; // 801AF104
  W8(c->r[13]+0xFFFF9708u,c->r[0]); // 801AF108
  c->lr=0x801AF110u; f_8003DA30(c); // 801AF10C
  c->r[29]=R32(c->r[3]+0x00000004u); // 801AF110
  c->r[28]=0u+0x00000001u; // 801AF114
  goto L_801AF1B8; // 801AF118
L_801AF11C:;
  c->r[27]=c->r[29]+0xFFFFFFF8u; // 801AF11C
  c->r[12]=R32(c->r[27]+0x00000010u); // 801AF120
  c->r[3]=c->r[27]|c->r[27]; // 801AF124
  c->r[12]=R32(c->r[12]+0x00000008u); // 801AF128
  c->ctr=c->r[12]; // 801AF12C
  if (true) { c->lr=0x801AF134u; dispatch(c,c->ctr); } // 801AF130
  c->r[0]=c->r[4]+0x20000000u; // 801AF134
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801AF138
  cmpu(c,0,c->r[0],0x00000002u); // 801AF13C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801AF140
  if (!crb(c,2)) { goto L_801AF150; } // 801AF144
  c->r[0]=0u+0x00000001u; // 801AF148
  goto L_801AF17C; // 801AF14C
L_801AF150:;
  c->r[4]=rotl(c->r[4],0)&0xFFFF0000u; // 801AF150
  c->r[3]=0u+0x00000000u; // 801AF154
  goto L_801AF160; // 801AF158
L_801AF15C:;
  c->r[3]=c->r[3]+0x00000001u; // 801AF15C
L_801AF160:;
  c->r[5]=((c->r[3])&0x20)?0u:(c->r[28]<<((c->r[3])&31)); // 801AF160
  c->r[0]=rotl(c->r[5],0)&0xE0000000u; // 801AF164
  c->r[0]=(rotl(c->r[5],0)&0x00000002u)|(c->r[0]&~0x00000002u); cr0(c,c->r[0]); // 801AF168
  if (crb(c,2)) { IRQCHK(c); goto L_801AF15C; } // 801AF16C
  c->r[3]=c->r[4]&c->r[5]; // 801AF170
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801AF174
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801AF178
L_801AF17C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AF17C
  if (crb(c,2)) { goto L_801AF1B4; } // 801AF180
  c->r[0]=R32(c->r[30]+0x00000010u); // 801AF184
  c->r[3]=R32(c->r[27]+0x000004C0u); // 801AF188
  cmpu(c,0,c->r[3],c->r[0]); // 801AF18C
  if (crb(c,0)) { goto L_801AF1B4; } // 801AF190
  if (crb(c,1)) { goto L_801AF1B4; } // 801AF194
  W8(c->r[13]+0xFFFF9708u,c->r[28]); // 801AF198
  c->r[0]=R32(c->r[27]+0x00000044u); // 801AF19C
  cmps(c,0,(int32_t)c->r[0],0); // 801AF1A0
  if (!crb(c,1)) { goto L_801AF1B4; } // 801AF1A4
  c->r[0]=0u+0x00000000u; // 801AF1A8
  W8(c->r[13]+0xFFFF9708u,c->r[0]); // 801AF1AC
  goto L_801AF1C8; // 801AF1B0
L_801AF1B4:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 801AF1B4
L_801AF1B8:;
  c->lr=0x801AF1BCu; f_8003DA30(c); // 801AF1B8
  c->r[0]=c->r[3]+0x00000004u; // 801AF1BC
  cmpu(c,0,c->r[29],c->r[0]); // 801AF1C0
  if (!crb(c,2)) { IRQCHK(c); goto L_801AF11C; } // 801AF1C4
L_801AF1C8:;
  c->r[0]=R8(c->r[13]+0xFFFF9708u); // 801AF1C8
  cmps(c,0,(int32_t)c->r[0],0); // 801AF1CC
  if (crb(c,2)) { goto L_801AF240; } // 801AF1D0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF1D4
  c->r[3]=c->r[1]+0x0000001Cu; // 801AF1D8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AF1DC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801AF1E0
  c->lr=0x801AF1E8u; f_800521A0(c); // 801AF1E4
  c->r[4]=R32(c->r[30]+0x00000010u); // 801AF1E8
  c->r[3]=c->r[1]+0x0000001Cu; // 801AF1EC
  c->r[5]=c->r[4]|c->r[4]; // 801AF1F0
  c->lr=0x801AF1F8u; f_8013BC38(c); // 801AF1F4
  goto L_801AF240; // 801AF1F8
L_801AF1FC:;
  c->r[27]=R32(c->r[3]+0x00000010u); // 801AF1FC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801AF200
  c->lr=0x801AF208u; f_800512A8(c); // 801AF204
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)60); // 801AF208
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801AF20C
  c->r[3]=c->r[1]+0x00000010u; // 801AF210
  c->r[28]=c->r[4]+c->r[0]; // 801AF214
  c->r[0]=R32(c->r[28]+0x00000038u); // 801AF218
  c->r[0]=c->r[0]|0x08000000u; // 801AF21C
  W32(c->r[28]+0x00000038u,c->r[0]); // 801AF220
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF224
  {uint32_t ea=c->r[29]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AF228
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801AF22C
  c->lr=0x801AF234u; f_800521A0(c); // 801AF230
  c->r[3]=c->r[28]+0x0000002Cu; // 801AF234
  c->r[4]=c->r[1]+0x00000010u; // 801AF238
  c->lr=0x801AF240u; f_8003F468(c); // 801AF23C
L_801AF240:;
  c->r[11]=c->r[1]+0x00000040u; // 801AF240
  c->lr=0x801AF248u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF244
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AF248
  c->lr=c->r[0]; // 801AF24C
  c->r[1]=c->r[1]+0x00000040u; // 801AF250
  return; // 801AF254
}

// fn_801AF258
void f_801AF258(Ctx* __restrict c) {
  trace_call(0x801AF258u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF258
  c->r[0]=c->lr; // 801AF25C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF264
  c->r[31]=c->r[3]|c->r[3]; // 801AF268
  c->r[3]=c->r[3]+0x00000010u; // 801AF26C
  c->lr=0x801AF274u; f_801AF2A0(c); // 801AF270
  c->r[3]=c->r[31]+0x0000001Cu; // 801AF274
  c->lr=0x801AF27Cu; f_801AF2A0(c); // 801AF278
  c->r[0]=0u+0x00000000u; // 801AF27C
  c->r[3]=c->r[31]|c->r[31]; // 801AF280
  W32(c->r[31]+0x00000000u,c->r[0]); // 801AF284
  W32(c->r[31]+0x00000004u,c->r[0]); // 801AF288
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF28C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF290
  c->lr=c->r[0]; // 801AF294
  c->r[1]=c->r[1]+0x00000010u; // 801AF298
  return; // 801AF29C
}

// fn_801AF2A0
void f_801AF2A0(Ctx* __restrict c) {
  trace_call(0x801AF2A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF2A0
  c->r[0]=c->lr; // 801AF2A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF2A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF2AC
  c->r[31]=c->r[3]|c->r[3]; // 801AF2B0
  c->r[3]=c->r[3]+0x00000004u; // 801AF2B4
  c->lr=0x801AF2BCu; f_8003EBC0(c); // 801AF2B8
  c->r[0]=c->r[31]+0x00000004u; // 801AF2BC
  c->r[3]=0u+0x00000000u; // 801AF2C0
  W32(c->r[31]+0x00000000u,c->r[3]); // 801AF2C4
  c->r[3]=c->r[31]|c->r[31]; // 801AF2C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801AF2CC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801AF2D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF2D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF2D8
  c->lr=c->r[0]; // 801AF2DC
  c->r[1]=c->r[1]+0x00000010u; // 801AF2E0
  return; // 801AF2E4
}

// fn_801AF2E8
void f_801AF2E8(Ctx* __restrict c) {
  trace_call(0x801AF2E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF2E8
  c->r[0]=c->lr; // 801AF2EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AF2F0
  c->r[11]=c->r[1]+0x00000040u; // 801AF2F4
  c->lr=0x801AF2FCu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF2F8
  c->r[31]=c->r[1]|c->r[1]; // 801AF2FC
  c->r[0]=c->r[4]|c->r[4]; // 801AF300
  W32(c->r[3]+0x00000000u,c->r[4]); // 801AF304
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 801AF308
  c->r[30]=c->r[3]|c->r[3]; // 801AF30C
  W32(c->r[3]+0x00000008u,c->r[5]); // 801AF310
  c->r[3]=c->r[0]|c->r[0]; // 801AF314
  c->lr=0x801AF31Cu; f_802A703C(c); // 801AF318
  W32(c->r[30]+0x00000004u,c->r[3]); // 801AF31C
  c->r[29]=0u+0x00000000u; // 801AF320
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 801AF324
  goto L_801AF348; // 801AF328
L_801AF32C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 801AF32C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801AF330
  c->r[3]=c->r[3]+c->r[0]; cr0(c,c->r[3]); // 801AF334
  if (crb(c,2)) { goto L_801AF344; } // 801AF338
  W32(c->r[31]+0x00000028u,c->r[1]); // 801AF33C
  c->lr=0x801AF344u; f_8003EBC0(c); // 801AF340
L_801AF344:;
  c->r[29]=c->r[29]+0x00000001u; // 801AF344
L_801AF348:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801AF348
  cmpu(c,0,c->r[29],c->r[0]); // 801AF34C
  if (crb(c,0)) { IRQCHK(c); goto L_801AF32C; } // 801AF350
  c->r[3]=c->r[30]+0x00000010u; // 801AF354
  c->lr=0x801AF35Cu; f_803B5070(c); // 801AF358
  c->r[3]=c->r[30]+0x0000001Cu; // 801AF35C
  c->lr=0x801AF364u; f_803B5070(c); // 801AF360
  c->r[29]=0u+0x00000000u; // 801AF364
  goto L_801AF384; // 801AF368
L_801AF36C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 801AF36C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801AF370
  c->r[3]=c->r[30]+0x00000010u; // 801AF374
  c->r[4]=c->r[4]+c->r[0]; // 801AF378
  c->lr=0x801AF380u; f_801AF96C(c); // 801AF37C
  c->r[29]=c->r[29]+0x00000001u; // 801AF380
L_801AF384:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801AF384
  cmpu(c,0,c->r[29],c->r[0]); // 801AF388
  if (crb(c,0)) { IRQCHK(c); goto L_801AF36C; } // 801AF38C
  {uint32_t ea=c->r[2]+0xFFFFAF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF390
  c->r[3]=c->r[31]+0x00000008u; // 801AF394
  {uint32_t ea=c->r[2]+0xFFFFAF18u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AF398
  c->f[3]=c->f[1]; // 801AF39C
  c->lr=0x801AF3A4u; f_800521A0(c); // 801AF3A0
  {uint32_t ea=c->r[2]+0xFFFFAF10u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF3A4
  c->r[4]=c->r[3]|c->r[3]; // 801AF3A8
  {uint32_t ea=c->r[2]+0xFFFFAF1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801AF3AC
  c->r[3]=c->r[30]|c->r[30]; // 801AF3B0
  {uint32_t ea=c->r[2]+0xFFFFAF14u; c->f[3]=c->ps1[3]=RF32(ea);} // 801AF3B4
  c->lr=0x801AF3BCu; f_801AF6D4(c); // 801AF3B8
  {uint32_t ea=c->r[2]+0xFFFFAF14u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF3BC
  c->r[3]=c->r[30]+0x00000044u; // 801AF3C0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 801AF3C4
  c->lr=0x801AF3CCu; f_80264680(c); // 801AF3C8
  c->r[0]=0u+0x00000006u; // 801AF3CC
  c->r[5]=c->r[30]+0x00000070u; // 801AF3D0
  c->r[4]=c->r[30]+0x00000040u; // 801AF3D4
  c->ctr=c->r[0]; // 801AF3D8
L_801AF3DC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801AF3DC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801AF3E0
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AF3E4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801AF3E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AF3DC; } // 801AF3EC
  c->r[0]=R32(c->r[30]+0x000000A8u); // 801AF3F0
  c->r[3]=0u+0x00000000u; // 801AF3F4
  c->r[10]=c->r[31]|c->r[31]; // 801AF3F8
  W32(c->r[30]+0x000000A4u,c->r[3]); // 801AF3FC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801AF400
  c->r[0]=c->r[0]|0x40000000u; // 801AF404
  c->r[11]=c->r[10]+0x00000040u; // 801AF408
  W32(c->r[30]+0x000000A8u,c->r[0]); // 801AF40C
  c->lr=0x801AF414u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF410
  c->r[10]=R32(c->r[1]+0x00000000u); // 801AF414
  c->r[0]=R32(c->r[10]+0x00000004u); // 801AF418
  c->r[1]=c->r[10]|c->r[10]; // 801AF41C
  c->lr=c->r[0]; // 801AF420
  return; // 801AF424
}

// fn_801AF428
void f_801AF428(Ctx* __restrict c) {
  trace_call(0x801AF428u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF428
  c->r[0]=c->lr; // 801AF42C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF430
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF434
  c->r[31]=c->r[3]|c->r[3]; // 801AF438
  c->r[0]=R32(c->r[3]+0x000000A8u); // 801AF43C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801AF440
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801AF444
  c->r[3]=c->r[3]+0x00000010u; // 801AF448
  c->lr=0x801AF450u; f_803B5070(c); // 801AF44C
  c->r[3]=c->r[31]+0x0000001Cu; // 801AF450
  c->lr=0x801AF458u; f_803B5070(c); // 801AF454
  c->r[3]=R32(c->r[31]+0x00000000u); // 801AF458
  cmps(c,0,(int32_t)c->r[3],0); // 801AF45C
  if (crb(c,2)) { goto L_801AF47C; } // 801AF460
  c->r[4]=R32(c->r[31]+0x00000004u); // 801AF464
  cmps(c,0,(int32_t)c->r[4],0); // 801AF468
  if (crb(c,2)) { goto L_801AF47C; } // 801AF46C
  c->lr=0x801AF474u; f_802A704C(c); // 801AF470
  c->r[0]=0u+0x00000000u; // 801AF474
  W32(c->r[31]+0x00000004u,c->r[0]); // 801AF478
L_801AF47C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF47C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF480
  c->lr=c->r[0]; // 801AF484
  c->r[1]=c->r[1]+0x00000010u; // 801AF488
  return; // 801AF48C
}

// fn_801AF490
void f_801AF490(Ctx* __restrict c) {
  trace_call(0x801AF490u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF490
  c->r[0]=c->lr; // 801AF494
  W32(c->r[1]+0x00000094u,c->r[0]); // 801AF498
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801AF49C
  W32(c->r[1]+0x00000088u,c->r[30]); // 801AF4A0
  c->r[30]=c->r[3]|c->r[3]; // 801AF4A4
  c->r[0]=R32(c->r[3]+0x000000A8u); // 801AF4A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801AF4AC
  if (crb(c,2)) { goto L_801AF634; } // 801AF4B0
  c->lr=0x801AF4B8u; f_801AF854(c); // 801AF4B4
  {uint32_t ea=c->r[2]+0xFFFFAF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF4B8
  c->r[3]=c->r[1]+0x00000044u; // 801AF4BC
  c->f[2]=c->f[1]; // 801AF4C0
  c->f[3]=c->f[1]; // 801AF4C4
  c->lr=0x801AF4CCu; f_800521A0(c); // 801AF4C8
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF4CC
  c->r[3]=c->r[1]+0x00000038u; // 801AF4D0
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF4D4
  c->r[4]=c->r[30]+0x0000002Cu; // 801AF4D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801AF4DC
  c->lr=0x801AF4E4u; f_800FACB4(c); // 801AF4E0
  c->r[3]=c->r[1]+0x00000044u; // 801AF4E4
  c->r[4]=c->r[1]+0x00000038u; // 801AF4E8
  c->lr=0x801AF4F0u; f_8003F468(c); // 801AF4EC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF4F0
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF4F4
  fcmp(c,0,c->f[1],c->f[0]); // 801AF4F8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801AF4FC
  if (!crb(c,2)) { goto L_801AF50C; } // 801AF500
  c->r[3]=c->r[30]|c->r[30]; // 801AF504
  c->lr=0x801AF50Cu; f_801AF77C(c); // 801AF508
L_801AF50C:;
  c->r[3]=0u+0x804D0000u; // 801AF50C
  {uint32_t ea=c->r[30]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF510
  c->r[3]=c->r[3]+0x00003318u; // 801AF514
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF518
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AF51C
  c->r[3]=c->r[30]+0x00000044u; // 801AF520
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801AF524
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 801AF528
  c->lr=0x801AF530u; f_80264680(c); // 801AF52C
  c->r[3]=c->r[30]+0x00000044u; // 801AF530
  c->r[4]=c->r[1]+0x00000044u; // 801AF534
  c->lr=0x801AF53Cu; f_80032FF4(c); // 801AF538
  c->r[3]=c->r[1]+0x00000050u; // 801AF53C
  c->lr=0x801AF544u; f_80264680(c); // 801AF540
  c->r[3]=c->r[1]+0x00000014u; // 801AF544
  c->r[4]=c->r[30]+0x00000074u; // 801AF548
  c->lr=0x801AF550u; f_80032FD8(c); // 801AF54C
  c->r[3]=c->r[1]+0x00000020u; // 801AF550
  c->r[4]=c->r[30]+0x00000044u; // 801AF554
  c->lr=0x801AF55Cu; f_80032FD8(c); // 801AF558
  c->r[4]=c->r[1]+0x0000002Cu; // 801AF55C
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,0,ea,0,0);} // 801AF560
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801AF564
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801AF568
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 801AF56C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,0,ea,1,0);} // 801AF570
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 801AF574
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801AF578
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 801AF57C
  c->r[3]=c->r[1]+0x00000050u; // 801AF580
  c->lr=0x801AF588u; f_80032FF4(c); // 801AF584
  c->r[3]=c->r[30]+0x0000001Cu; // 801AF588
  c->lr=0x801AF590u; f_801AF9B8(c); // 801AF58C
  W32(c->r[1]+0x00000010u,c->r[3]); // 801AF590
  goto L_801AF5B4; // 801AF594
L_801AF598:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801AF598
  c->r[4]=c->r[30]+0x00000044u; // 801AF59C
  c->r[5]=c->r[1]+0x00000050u; // 801AF5A0
  c->lr=0x801AF5A8u; f_801AF090(c); // 801AF5A4
  c->r[3]=c->r[1]+0x00000010u; // 801AF5A8
  c->r[4]=0u+0x00000000u; // 801AF5AC
  c->lr=0x801AF5B4u; f_801AF9C0(c); // 801AF5B0
L_801AF5B4:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801AF5B4
  c->r[31]=0u+0x00000000u; // 801AF5B8
  cmps(c,0,(int32_t)c->r[0],0); // 801AF5BC
  if (crb(c,2)) { goto L_801AF5F0; } // 801AF5C0
  c->r[3]=c->r[30]+0x0000001Cu; // 801AF5C4
  c->lr=0x801AF5CCu; f_801AF9B0(c); // 801AF5C8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801AF5CC
  c->r[4]=c->r[1]+0x0000000Cu; // 801AF5D0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801AF5D4
  c->r[3]=c->r[1]+0x00000008u; // 801AF5D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AF5DC
  c->lr=0x801AF5E4u; f_801AF9D4(c); // 801AF5E0
  cmps(c,0,(int32_t)c->r[3],0); // 801AF5E4
  if (crb(c,2)) { goto L_801AF5F0; } // 801AF5E8
  c->r[31]=0u+0x00000001u; // 801AF5EC
L_801AF5F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801AF5F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801AF598; } // 801AF5F4
  c->r[0]=R8(c->r[13]+0xFFFF9708u); // 801AF5F8
  c->r[3]=R32(c->r[30]+0x000000A8u); // 801AF5FC
  c->r[3]=(rotl(c->r[0],30)&0x40000000u)|(c->r[3]&~0x40000000u); // 801AF600
  c->r[0]=rotl(c->r[3],2)&0x00000001u; cr0(c,c->r[0]); // 801AF604
  W32(c->r[30]+0x000000A8u,c->r[3]); // 801AF608
  if (crb(c,2)) { goto L_801AF634; } // 801AF60C
  c->r[0]=0u+0x00000006u; // 801AF610
  c->r[5]=c->r[30]+0x00000070u; // 801AF614
  c->r[4]=c->r[30]+0x00000040u; // 801AF618
  c->ctr=c->r[0]; // 801AF61C
L_801AF620:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801AF620
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801AF624
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AF628
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801AF62C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AF620; } // 801AF630
L_801AF634:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801AF634
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801AF638
  c->r[30]=R32(c->r[1]+0x00000088u); // 801AF63C
  c->lr=c->r[0]; // 801AF640
  c->r[1]=c->r[1]+0x00000090u; // 801AF644
  return; // 801AF648
}

// fn_801AF64C
void f_801AF64C(Ctx* __restrict c) {
  trace_call(0x801AF64Cu);
  return; // 801AF64C
}

// fn_801AF650
void f_801AF650(Ctx* __restrict c) {
  trace_call(0x801AF650u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF650
  c->r[0]=c->lr; // 801AF654
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF658
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AF65C
  c->r[27]=c->r[3]|c->r[3]; // 801AF660
  c->r[28]=c->r[4]|c->r[4]; // 801AF664
  c->r[29]=c->r[5]|c->r[5]; // 801AF668
  c->r[30]=c->r[6]|c->r[6]; // 801AF66C
  c->r[0]=R32(c->r[3]+0x00000010u); // 801AF670
  cmps(c,0,(int32_t)c->r[0],0); // 801AF674
  if (!crb(c,2)) { goto L_801AF684; } // 801AF678
  c->r[3]=0u+0x00000000u; // 801AF67C
  goto L_801AF6C0; // 801AF680
L_801AF684:;
  c->r[3]=c->r[3]+0x00000010u; // 801AF684
  c->lr=0x801AF68Cu; f_801AF9B8(c); // 801AF688
  c->r[0]=R32(c->r[27]+0x00000014u); // 801AF68C
  c->r[31]=c->r[3]|c->r[3]; // 801AF690
  c->r[3]=c->r[27]+0x00000010u; // 801AF694
  c->r[4]=c->r[1]+0x00000008u; // 801AF698
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AF69C
  c->lr=0x801AF6A4u; f_803B5028(c); // 801AF6A0
  c->r[4]=c->r[31]|c->r[31]; // 801AF6A4
  c->r[3]=c->r[27]+0x0000001Cu; // 801AF6A8
  c->lr=0x801AF6B0u; f_801AF96C(c); // 801AF6AC
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 801AF6B0
  c->r[3]=0u+0x00000001u; // 801AF6B4
  W32(c->r[31]+0x00000008u,c->r[28]); // 801AF6B8
  W32(c->r[31]+0x00000010u,c->r[30]); // 801AF6BC
L_801AF6C0:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AF6C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF6C4
  c->lr=c->r[0]; // 801AF6C8
  c->r[1]=c->r[1]+0x00000030u; // 801AF6CC
  return; // 801AF6D0
}

// fn_801AF6D4
void f_801AF6D4(Ctx* __restrict c) {
  trace_call(0x801AF6D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF6D4
  c->r[0]=c->lr; // 801AF6D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AF6DC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801AF6E0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801AF6E4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801AF6E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801AF6EC
  c->f[30]=c->f[2]; // 801AF6F0
  c->f[31]=c->f[3]; // 801AF6F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF6F8
  c->r[31]=c->r[3]|c->r[3]; // 801AF6FC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 801AF700
  c->r[3]=c->r[3]+0x0000002Cu; // 801AF704
  c->lr=0x801AF70Cu; f_8003F468(c); // 801AF708
  c->f[0]=c->ps1[0]=S(c->f[31]); // 801AF70C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[30]);} // 801AF710
  c->r[3]=c->r[1]+0x00000008u; // 801AF714
  c->r[4]=c->r[31]+0x0000002Cu; // 801AF718
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[31]);} // 801AF71C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[0]); // 801AF720
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[31]);} // 801AF724
  c->lr=0x801AF72Cu; f_800FACB4(c); // 801AF728
  c->r[3]=c->r[31]+0x00000074u; // 801AF72C
  c->lr=0x801AF734u; f_80264680(c); // 801AF730
  c->r[3]=c->r[31]+0x00000074u; // 801AF734
  c->r[4]=c->r[1]+0x00000008u; // 801AF738
  c->lr=0x801AF740u; f_80032FF4(c); // 801AF73C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801AF740
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801AF744
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801AF748
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801AF74C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AF750
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF754
  c->lr=c->r[0]; // 801AF758
  c->r[1]=c->r[1]+0x00000040u; // 801AF75C
  return; // 801AF760
}

// fn_801AF764
void f_801AF764(Ctx* __restrict c) {
  trace_call(0x801AF764u);
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 801AF764
  return; // 801AF768
}

// fn_801AF76C
void f_801AF76C(Ctx* __restrict c) {
  trace_call(0x801AF76Cu);
  c->r[0]=R32(c->r[3]+0x000000A8u); // 801AF76C
  c->r[0]=c->r[0]|0x80000000u; // 801AF770
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801AF774
  return; // 801AF778
}

// fn_801AF77C
void f_801AF77C(Ctx* __restrict c) {
  trace_call(0x801AF77Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF77C
  c->r[0]=c->lr; // 801AF780
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF784
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF788
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF78C
  c->r[30]=c->r[3]|c->r[3]; // 801AF790
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF794
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AF798
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801AF79C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801AF7A0
  c->r[3]=c->r[3]+0x00000074u; // 801AF7A4
  c->lr=0x801AF7ACu; f_80264680(c); // 801AF7A8
  c->r[3]=c->r[30]+0x0000001Cu; // 801AF7AC
  c->lr=0x801AF7B4u; f_801AF9B8(c); // 801AF7B0
  W32(c->r[1]+0x00000010u,c->r[3]); // 801AF7B4
  goto L_801AF7E4; // 801AF7B8
L_801AF7BC:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801AF7BC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801AF7C0
  cmps(c,0,(int32_t)c->r[0],1); // 801AF7C4
  if (!crb(c,2)) { goto L_801AF7D8; } // 801AF7C8
  c->r[3]=R32(c->r[3]+0x00000010u); // 801AF7CC
  c->r[4]=c->r[3]|c->r[3]; // 801AF7D0
  c->lr=0x801AF7D8u; f_8013BB64(c); // 801AF7D4
L_801AF7D8:;
  c->r[3]=c->r[1]+0x00000010u; // 801AF7D8
  c->r[4]=0u+0x00000000u; // 801AF7DC
  c->lr=0x801AF7E4u; f_801AF9C0(c); // 801AF7E0
L_801AF7E4:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801AF7E4
  c->r[31]=0u+0x00000000u; // 801AF7E8
  cmps(c,0,(int32_t)c->r[0],0); // 801AF7EC
  if (crb(c,2)) { goto L_801AF820; } // 801AF7F0
  c->r[3]=c->r[30]+0x0000001Cu; // 801AF7F4
  c->lr=0x801AF7FCu; f_801AF9B0(c); // 801AF7F8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801AF7FC
  c->r[4]=c->r[1]+0x0000000Cu; // 801AF800
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801AF804
  c->r[3]=c->r[1]+0x00000008u; // 801AF808
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AF80C
  c->lr=0x801AF814u; f_801AF9D4(c); // 801AF810
  cmps(c,0,(int32_t)c->r[3],0); // 801AF814
  if (crb(c,2)) { goto L_801AF820; } // 801AF818
  c->r[31]=0u+0x00000001u; // 801AF81C
L_801AF820:;
  cmps(c,0,(int32_t)c->r[31],0); // 801AF820
  if (!crb(c,2)) { IRQCHK(c); goto L_801AF7BC; } // 801AF824
  c->r[0]=R32(c->r[30]+0x000000A8u); // 801AF828
  c->r[3]=0u+0x00000004u; // 801AF82C
  W32(c->r[30]+0x000000A4u,c->r[3]); // 801AF830
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 801AF834
  W32(c->r[30]+0x000000A8u,c->r[0]); // 801AF838
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF83C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AF840
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF844
  c->lr=c->r[0]; // 801AF848
  c->r[1]=c->r[1]+0x00000020u; // 801AF84C
  return; // 801AF850
}

// fn_801AF854
void f_801AF854(Ctx* __restrict c) {
  trace_call(0x801AF854u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF854
  c->r[0]=c->lr; // 801AF858
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801AF85C
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AF860
  c->r[27]=c->r[3]|c->r[3]; // 801AF864
  c->r[0]=R32(c->r[3]+0x000000A4u); // 801AF868
  cmps(c,0,(int32_t)c->r[0],0); // 801AF86C
  if (crb(c,2)) { goto L_801AF958; } // 801AF870
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801AF874
  W32(c->r[3]+0x000000A4u,c->r[0]); // 801AF878
  if (!crb(c,2)) { goto L_801AF958; } // 801AF87C
  c->r[3]=c->r[3]+0x0000001Cu; // 801AF880
  c->lr=0x801AF888u; f_801AF9B8(c); // 801AF884
  W32(c->r[1]+0x00000010u,c->r[3]); // 801AF888
  c->r[31]=0u+0x803E0000u; // 801AF88C
  goto L_801AF914; // 801AF890
L_801AF894:;
  c->r[30]=R32(c->r[1]+0x00000010u); // 801AF894
  c->r[0]=R32(c->r[30]+0x00000008u); // 801AF898
  cmps(c,0,(int32_t)c->r[0],1); // 801AF89C
  if (!crb(c,2)) { goto L_801AF908; } // 801AF8A0
  c->r[29]=R32(c->r[30]+0x0000000Cu); // 801AF8A4
  c->r[3]=c->r[29]|c->r[29]; // 801AF8A8
  c->lr=0x801AF8B0u; f_80051F50(c); // 801AF8AC
  cmps(c,0,(int32_t)c->r[3],0); // 801AF8B0
  c->r[28]=c->r[3]|c->r[3]; // 801AF8B4
  if (crb(c,2)) { goto L_801AF908; } // 801AF8B8
  c->r[4]=c->r[28]|c->r[28]; // 801AF8BC
  c->r[3]=c->r[1]+0x00000014u; // 801AF8C0
  c->lr=0x801AF8C8u; f_801328F8(c); // 801AF8C4
  c->r[30]=R32(c->r[30]+0x00000010u); // 801AF8C8
  c->r[3]=c->r[1]+0x00000014u; // 801AF8CC
  c->r[4]=c->r[31]+0x00000360u; // 801AF8D0
  c->lr=0x801AF8D8u; f_80132AE0(c); // 801AF8D4
  c->r[5]=c->r[3]|c->r[3]; // 801AF8D8
  c->r[3]=c->r[29]|c->r[29]; // 801AF8DC
  c->r[4]=c->r[28]|c->r[28]; // 801AF8E0
  c->r[6]=c->r[28]|c->r[28]; // 801AF8E4
  c->r[7]=c->r[30]|c->r[30]; // 801AF8E8
  c->r[8]=c->r[30]|c->r[30]; // 801AF8EC
  c->r[9]=0u+0x00000000u; // 801AF8F0
  c->r[10]=0u+0x00000000u; // 801AF8F4
  c->lr=0x801AF8FCu; f_8013BEB4(c); // 801AF8F8
  c->r[3]=c->r[1]+0x00000014u; // 801AF8FC
  c->r[4]=0u+0xFFFFFFFFu; // 801AF900
  c->lr=0x801AF908u; f_80132958(c); // 801AF904
L_801AF908:;
  c->r[3]=c->r[1]+0x00000010u; // 801AF908
  c->r[4]=0u+0x00000000u; // 801AF90C
  c->lr=0x801AF914u; f_801AF9C0(c); // 801AF910
L_801AF914:;
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 801AF914
  c->r[30]=0u+0x00000000u; // 801AF918
  cmps(c,0,(int32_t)c->r[0],0); // 801AF91C
  if (crb(c,2)) { goto L_801AF950; } // 801AF920
  c->r[3]=c->r[27]+0x0000001Cu; // 801AF924
  c->lr=0x801AF92Cu; f_801AF9B0(c); // 801AF928
  c->r[0]=R32(c->r[1]+0x00000010u); // 801AF92C
  c->r[4]=c->r[1]+0x0000000Cu; // 801AF930
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801AF934
  c->r[3]=c->r[1]+0x00000008u; // 801AF938
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AF93C
  c->lr=0x801AF944u; f_801AF9D4(c); // 801AF940
  cmps(c,0,(int32_t)c->r[3],0); // 801AF944
  if (crb(c,2)) { goto L_801AF950; } // 801AF948
  c->r[30]=0u+0x00000001u; // 801AF94C
L_801AF950:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AF950
  if (!crb(c,2)) { IRQCHK(c); goto L_801AF894; } // 801AF954
L_801AF958:;
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AF958
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801AF95C
  c->lr=c->r[0]; // 801AF960
  c->r[1]=c->r[1]+0x000000A0u; // 801AF964
  return; // 801AF968
}

// fn_801AF96C
void f_801AF96C(Ctx* __restrict c) {
  trace_call(0x801AF96Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF96C
  c->r[0]=c->lr; // 801AF970
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF974
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AF978
  c->r[30]=c->r[3]|c->r[3]; // 801AF97C
  c->r[31]=c->r[4]|c->r[4]; // 801AF980
  c->lr=0x801AF988u; f_801AF9B0(c); // 801AF984
  W32(c->r[1]+0x00000008u,c->r[3]); // 801AF988
  c->r[3]=c->r[30]|c->r[30]; // 801AF98C
  c->r[5]=c->r[31]|c->r[31]; // 801AF990
  c->r[4]=c->r[1]+0x00000008u; // 801AF994
  c->lr=0x801AF99Cu; f_803B50B4(c); // 801AF998
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AF99C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF9A0
  c->lr=c->r[0]; // 801AF9A4
  c->r[1]=c->r[1]+0x00000020u; // 801AF9A8
  return; // 801AF9AC
}

// fn_801AF9B0
void f_801AF9B0(Ctx* __restrict c) {
  trace_call(0x801AF9B0u);
  c->r[3]=c->r[3]+0x00000004u; // 801AF9B0
  return; // 801AF9B4
}

// fn_801AF9B8
void f_801AF9B8(Ctx* __restrict c) {
  trace_call(0x801AF9B8u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801AF9B8
  return; // 801AF9BC
}

// fn_801AF9C0
void f_801AF9C0(Ctx* __restrict c) {
  trace_call(0x801AF9C0u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 801AF9C0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801AF9C4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF9C8
  c->r[3]=c->r[4]|c->r[4]; // 801AF9CC
  return; // 801AF9D0
}

// fn_801AF9D4
void f_801AF9D4(Ctx* __restrict c) {
  trace_call(0x801AF9D4u);
  c->r[4]=R32(c->r[4]+0x00000000u); // 801AF9D4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801AF9D8
  c->r[3]=c->r[4]-c->r[0]; // 801AF9DC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801AF9E0
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801AF9E4
  return; // 801AF9E8
}

// fn_801AF9EC
void f_801AF9EC(Ctx* __restrict c) {
  trace_call(0x801AF9ECu);
  {uint32_t ea=c->r[2]+0xFFFFAF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AF9EC
  c->r[3]=0u+0x80540000u; // 801AF9F0
  {uint32_t ea=c->r[2]+0xFFFFAF20u; c->f[2]=c->ps1[2]=RF32(ea);} // 801AF9F4
  c->r[3]=c->r[3]+0xFFFFC280u; // 801AF9F8
  c->f[3]=c->f[1]; // 801AF9FC
  f_8003F588(c); return; // 801AFA00
}

// fn_801AFA04
void f_801AFA04(Ctx* __restrict c) {
  trace_call(0x801AFA04u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFA04
  c->r[0]=c->lr; // 801AFA08
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AFA0C
  c->r[11]=c->r[1]+0x00000030u; // 801AFA10
  c->lr=0x801AFA18u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFA14
  c->r[31]=c->r[3]|c->r[3]; // 801AFA18
  c->lr=0x801AFA20u; f_800CEA18(c); // 801AFA1C
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFA20
  c->r[3]=0u+0x803F0000u; // 801AFA24
  c->r[3]=c->r[3]+0x000059F8u; // 801AFA28
  c->r[28]=0u+0x00000000u; // 801AFA2C
  c->r[0]=c->r[3]+0x00000040u; // 801AFA30
  c->f[2]=c->f[1]; // 801AFA34
  W32(c->r[31]+0x00000010u,c->r[3]); // 801AFA38
  c->f[3]=c->f[1]; // 801AFA3C
  c->r[3]=c->r[31]+0x000008ACu; // 801AFA40
  W32(c->r[31]+0x00000048u,c->r[0]); // 801AFA44
  W32(c->r[31]+0x000008A4u,c->r[28]); // 801AFA48
  W32(c->r[31]+0x000008A8u,c->r[28]); // 801AFA4C
  c->lr=0x801AFA54u; f_800521A0(c); // 801AFA50
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFA54
  c->r[3]=c->r[31]+0x000008B8u; // 801AFA58
  c->f[2]=c->f[1]; // 801AFA5C
  c->f[3]=c->f[1]; // 801AFA60
  c->lr=0x801AFA68u; f_800521A0(c); // 801AFA64
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFA68
  c->r[27]=c->r[31]+0x000008D0u; // 801AFA6C
  W32(c->r[31]+0x000008C4u,c->r[28]); // 801AFA70
  c->r[24]=c->r[27]|c->r[27]; // 801AFA74
  c->r[25]=c->r[27]|c->r[27]; // 801AFA78
  c->r[3]=c->r[27]|c->r[27]; // 801AFA7C
  {uint32_t ea=c->r[31]+0x000008C8u; WF32(ea,c->f[0]);} // 801AFA80
  W32(c->r[31]+0x000008CCu,c->r[28]); // 801AFA84
  c->lr=0x801AFA8Cu; f_8002A0C4(c); // 801AFA88
  c->r[4]=0u+0x803F0000u; // 801AFA8C
  c->r[3]=c->r[27]+0x0000001Cu; // 801AFA90
  c->r[4]=c->r[4]+0x00001290u; // 801AFA94
  W32(c->r[27]+0x00000000u,c->r[4]); // 801AFA98
  c->lr=0x801AFAA0u; f_80166A74(c); // 801AFA9C
  c->r[3]=0u+0x803F0000u; // 801AFAA0
  c->r[4]=0u+0x803F0000u; // 801AFAA4
  c->r[25]=c->r[27]+0x000000D8u; // 801AFAA8
  c->r[30]=0u+0xFFFFFFFFu; // 801AFAAC
  c->r[3]=c->r[3]+0x00001150u; // 801AFAB0
  c->r[4]=c->r[4]+0x000011B8u; // 801AFAB4
  c->r[29]=0u+0x00000001u; // 801AFAB8
  c->r[26]=c->r[25]+0x00000020u; // 801AFABC
  W32(c->r[27]+0x00000000u,c->r[3]); // 801AFAC0
  c->r[3]=c->r[26]|c->r[26]; // 801AFAC4
  W32(c->r[27]+0x000000D8u,c->r[4]); // 801AFAC8
  W32(c->r[27]+0x000000DCu,c->r[30]); // 801AFACC
  W32(c->r[27]+0x000000E0u,c->r[28]); // 801AFAD0
  W32(c->r[27]+0x000000E4u,c->r[28]); // 801AFAD4
  W32(c->r[27]+0x000000E8u,c->r[28]); // 801AFAD8
  W32(c->r[27]+0x000000ECu,c->r[29]); // 801AFADC
  W32(c->r[27]+0x000000F0u,c->r[28]); // 801AFAE0
  W32(c->r[27]+0x000000F4u,c->r[28]); // 801AFAE4
  c->lr=0x801AFAECu; f_8002D9F4(c); // 801AFAE8
  c->r[3]=0u+0x803F0000u; // 801AFAEC
  c->r[4]=0u+0x803F0000u; // 801AFAF0
  c->r[3]=c->r[3]+0x000011D0u; // 801AFAF4
  W32(c->r[27]+0x00000114u,c->r[28]); // 801AFAF8
  c->r[4]=c->r[4]+0x00003028u; // 801AFAFC
  W32(c->r[26]+0x00000000u,c->r[3]); // 801AFB00
  c->r[3]=c->r[27]+0x00000124u; // 801AFB04
  W32(c->r[27]+0x00000118u,c->r[28]); // 801AFB08
  W32(c->r[27]+0x0000011Cu,c->r[28]); // 801AFB0C
  W32(c->r[27]+0x00000120u,c->r[28]); // 801AFB10
  W32(c->r[27]+0x00000000u,c->r[4]); // 801AFB14
  c->lr=0x801AFB1Cu; f_80141D50(c); // 801AFB18
  c->r[6]=0u+0x80400000u; // 801AFB1C
  c->r[8]=0u+0x80400000u; // 801AFB20
  c->r[6]=c->r[6]+0x000054F8u; // 801AFB24
  c->r[4]=0u+0x80070000u; // 801AFB28
  c->r[8]=c->r[8]+0x00005560u; // 801AFB2C
  c->r[5]=0u+0x80070000u; // 801AFB30
  W32(c->r[27]+0x00000000u,c->r[6]); // 801AFB34
  c->r[3]=c->r[27]+0x000001D8u; // 801AFB38
  c->r[4]=c->r[4]+0x000058C4u; // 801AFB3C
  c->r[5]=c->r[5]+0x000059F8u; // 801AFB40
  W8(c->r[27]+0x000001BCu,c->r[28]); // 801AFB44
  c->r[6]=0u+0x00000058u; // 801AFB48
  c->r[7]=0u+0x00000003u; // 801AFB4C
  W32(c->r[27]+0x000001C0u,c->r[28]); // 801AFB50
  W32(c->r[27]+0x000001C8u,c->r[28]); // 801AFB54
  W32(c->r[27]+0x000001CCu,c->r[28]); // 801AFB58
  W32(c->r[27]+0x000001D0u,c->r[28]); // 801AFB5C
  W32(c->r[27]+0x000001C4u,c->r[8]); // 801AFB60
  c->lr=0x801AFB68u; f_80289B34(c); // 801AFB64
  c->r[3]=c->r[27]+0x000002E0u; // 801AFB68
  c->r[4]=0u+0x00000000u; // 801AFB6C
  c->r[5]=0u+0x00000002u; // 801AFB70
  c->lr=0x801AFB78u; f_80075338(c); // 801AFB74
  c->r[3]=c->r[27]+0x00000318u; // 801AFB78
  c->r[4]=0u+0x00000003u; // 801AFB7C
  c->r[5]=0u+0x00000004u; // 801AFB80
  c->lr=0x801AFB88u; f_80075338(c); // 801AFB84
  c->r[3]=c->r[27]+0x00000350u; // 801AFB88
  c->r[4]=0u+0x00000005u; // 801AFB8C
  c->r[5]=0u+0x00000006u; // 801AFB90
  c->lr=0x801AFB98u; f_80075338(c); // 801AFB94
  {uint32_t ea=c->r[2]+0xFFFFAF2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFB98
  c->r[24]=c->r[31]+0x00000EDCu; // 801AFB9C
  W32(c->r[27]+0x00000388u,c->r[28]); // 801AFBA0
  c->r[3]=c->r[24]|c->r[24]; // 801AFBA4
  W32(c->r[27]+0x000003B0u,c->r[30]); // 801AFBA8
  W32(c->r[31]+0x00000C88u,c->r[28]); // 801AFBAC
  W32(c->r[31]+0x00000C8Cu,c->r[28]); // 801AFBB0
  W32(c->r[31]+0x00000C90u,c->r[30]); // 801AFBB4
  W32(c->r[31]+0x00000C94u,c->r[28]); // 801AFBB8
  W32(c->r[31]+0x00000C98u,c->r[28]); // 801AFBBC
  W32(c->r[31]+0x00000C9Cu,c->r[28]); // 801AFBC0
  W8(c->r[31]+0x00000CA0u,c->r[29]); // 801AFBC4
  {uint32_t ea=c->r[31]+0x00000CA4u; WF32(ea,c->f[0]);} // 801AFBC8
  W32(c->r[31]+0x00000ED8u,c->r[28]); // 801AFBCC
  c->lr=0x801AFBD4u; f_80063A84(c); // 801AFBD0
  c->r[4]=0u+0x803F0000u; // 801AFBD4
  c->r[3]=c->r[24]+0x00000078u; // 801AFBD8
  c->r[4]=c->r[4]+0x000021F8u; // 801AFBDC
  W32(c->r[24]+0x00000000u,c->r[4]); // 801AFBE0
  c->lr=0x801AFBE8u; f_800A4E78(c); // 801AFBE4
  W8(c->r[24]+0x000000BCu,c->r[28]); // 801AFBE8
  c->r[3]=c->r[24]+0x000000C0u; // 801AFBEC
  c->lr=0x801AFBF4u; f_80063CC0(c); // 801AFBF0
  {uint32_t ea=c->r[2]+0xFFFFAF30u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFBF4
  c->r[0]=0u+0x00000007u; // 801AFBF8
  W8(c->r[24]+0x00000118u,c->r[29]); // 801AFBFC
  {uint32_t ea=c->r[24]+0x0000010Cu; WF32(ea,c->f[0]);} // 801AFC00
  c->ctr=c->r[0]; // 801AFC04
L_801AFC08:;
  c->r[3]=c->r[24]+c->r[28]; // 801AFC08
  c->r[28]=c->r[28]+0x00000008u; // 801AFC0C
  W32(c->r[3]+0x00000034u,c->r[30]); // 801AFC10
  W32(c->r[3]+0x00000038u,c->r[30]); // 801AFC14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AFC08; } // 801AFC18
  c->r[3]=c->r[31]+0x00000FF8u; // 801AFC1C
  c->lr=0x801AFC24u; f_80063CC0(c); // 801AFC20
  c->r[29]=0u+0xFFFFFFFFu; // 801AFC24
  c->r[3]=c->r[31]+0x00001054u; // 801AFC28
  W32(c->r[31]+0x00001050u,c->r[29]); // 801AFC2C
  c->lr=0x801AFC34u; f_801811B4(c); // 801AFC30
  {uint32_t ea=c->r[2]+0xFFFFAF34u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFC34
  c->r[3]=0u+0x00000000u; // 801AFC38
  W8(c->r[31]+0x00001E80u,c->r[3]); // 801AFC3C
  c->r[4]=c->r[31]+0x00001E84u; // 801AFC40
  c->r[0]=c->r[31]+0x00001F14u; // 801AFC44
  {uint32_t ea=c->r[31]+0x00001E7Cu; WF32(ea,c->f[0]);} // 801AFC48
L_801AFC4C:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801AFC4C
  W32(c->r[4]+0x00000004u,c->r[29]); // 801AFC50
  c->r[4]=c->r[4]+0x0000000Cu; // 801AFC54
  cmpu(c,0,c->r[4],c->r[0]); // 801AFC58
  if (crb(c,0)) { IRQCHK(c); goto L_801AFC4C; } // 801AFC5C
  c->r[4]=0u+0x80400000u; // 801AFC60
  c->r[29]=0u+0x00000000u; // 801AFC64
  c->r[4]=c->r[4]+0xFFFFE840u; // 801AFC68
  W8(c->r[31]+0x00001F14u,c->r[29]); // 801AFC6C
  c->r[0]=c->r[4]+0x00000040u; // 801AFC70
  c->r[3]=c->r[31]+0x00001F44u; // 801AFC74
  W32(c->r[31]+0x00000010u,c->r[4]); // 801AFC78
  W32(c->r[31]+0x00000048u,c->r[0]); // 801AFC7C
  c->lr=0x801AFC84u; f_802291C4(c); // 801AFC80
  c->r[3]=c->r[31]+0x00001F54u; // 801AFC84
  c->lr=0x801AFC8Cu; f_8022A974(c); // 801AFC88
  c->r[3]=c->r[31]+0x00001F5Cu; // 801AFC8C
  c->lr=0x801AFC94u; f_8022B1E8(c); // 801AFC90
  c->r[4]=0u+0x80070000u; // 801AFC94
  c->r[5]=0u+0x80070000u; // 801AFC98
  W8(c->r[31]+0x00001F67u,c->r[29]); // 801AFC9C
  c->r[3]=c->r[31]+0x00001F7Cu; // 801AFCA0
  c->r[4]=c->r[4]+0x000058C4u; // 801AFCA4
  c->r[5]=c->r[5]+0x000059F8u; // 801AFCA8
  W32(c->r[31]+0x00001F74u,c->r[29]); // 801AFCAC
  c->r[6]=0u+0x00000058u; // 801AFCB0
  c->r[7]=0u+0x0000000Au; // 801AFCB4
  c->lr=0x801AFCBCu; f_80289B34(c); // 801AFCB8
  c->r[4]=0u+0x801B0000u; // 801AFCBC
  c->r[5]=0u+0x80160000u; // 801AFCC0
  c->r[3]=c->r[31]+0x000022ECu; // 801AFCC4
  c->r[6]=0u+0x00000038u; // 801AFCC8
  c->r[4]=c->r[4]+0x00000C60u; // 801AFCCC
  c->r[5]=c->r[5]+0x00004EA0u; // 801AFCD0
  c->r[7]=0u+0x00000009u; // 801AFCD4
  c->lr=0x801AFCDCu; f_80289B34(c); // 801AFCD8
  c->r[3]=c->r[31]+0x000024E4u; // 801AFCDC
  c->r[4]=0u+0x00000007u; // 801AFCE0
  c->r[5]=0u+0x00000008u; // 801AFCE4
  c->lr=0x801AFCECu; f_80075338(c); // 801AFCE8
  c->r[3]=c->r[31]+0x0000251Cu; // 801AFCEC
  c->r[4]=0u+0x00000004u; // 801AFCF0
  c->lr=0x801AFCF8u; f_801FD6F8(c); // 801AFCF4
  c->r[24]=0u+0x00000000u; // 801AFCF8
  c->r[30]=0u+0x00000000u; // 801AFCFC
  c->r[29]=0u+0x00000000u; // 801AFD00
L_801AFD04:;
  c->r[3]=c->r[31]+c->r[30]; // 801AFD04
  c->r[4]=c->r[29]+0x00000009u; // 801AFD08
  c->r[3]=c->r[3]+0x000022ECu; // 801AFD0C
  c->r[5]=c->r[29]+0x0000000Au; // 801AFD10
  c->lr=0x801AFD18u; f_801B0C4C(c); // 801AFD14
  c->r[24]=c->r[24]+0x00000001u; // 801AFD18
  c->r[29]=c->r[29]+0x00000002u; // 801AFD1C
  cmpu(c,0,c->r[24],0x00000009u); // 801AFD20
  c->r[30]=c->r[30]+0x00000038u; // 801AFD24
  if (crb(c,0)) { IRQCHK(c); goto L_801AFD04; } // 801AFD28
  c->r[0]=0u+0x0000000Au; // 801AFD2C
  c->r[5]=0u+0x00000000u; // 801AFD30
  c->r[4]=0u+0x00000001u; // 801AFD34
  c->ctr=c->r[0]; // 801AFD38
L_801AFD3C:;
  c->r[3]=c->r[31]+c->r[5]; // 801AFD3C
  c->r[5]=c->r[5]+0x00000001u; // 801AFD40
  W8(c->r[3]+0x00001F5Du,c->r[4]); // 801AFD44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AFD3C; } // 801AFD48
  c->r[29]=0u+0x00000000u; // 801AFD4C
  c->r[3]=c->r[31]|c->r[31]; // 801AFD50
  W32(c->r[31]+0x00001F74u,c->r[29]); // 801AFD54
  c->r[4]=0u+0x00000000u; // 801AFD58
  c->r[12]=R32(c->r[31]+0x00000010u); // 801AFD5C
  c->r[12]=R32(c->r[12]+0x0000041Cu); // 801AFD60
  c->ctr=c->r[12]; // 801AFD64
  if (true) { c->lr=0x801AFD6Cu; dispatch(c,c->ctr); } // 801AFD68
  c->r[0]=0u+0x00000001u; // 801AFD6C
  c->r[4]=0u+0x803E0000u; // 801AFD70
  {uint32_t ea=c->r[31]+0x00001F68u; WF32(ea,c->f[1]);} // 801AFD74
  c->r[3]=c->r[31]+0x00001F1Du; // 801AFD78
  c->r[4]=c->r[4]+0x00000370u; // 801AFD7C
  W8(c->r[31]+0x00001F15u,c->r[0]); // 801AFD80
  W32(c->r[31]+0x00001F18u,c->r[29]); // 801AFD84
  W8(c->r[31]+0x00001F1Cu,c->r[29]); // 801AFD88
  c->lr=0x801AFD90u; f_800A5544(c); // 801AFD8C
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFD90
  c->r[11]=c->r[1]+0x00000030u; // 801AFD94
  c->r[3]=c->r[31]|c->r[31]; // 801AFD98
  {uint32_t ea=c->r[31]+0x00001F40u; WF32(ea,c->f[0]);} // 801AFD9C
  {uint32_t ea=c->r[31]+0x00001F78u; WF32(ea,c->f[0]);} // 801AFDA0
  c->lr=0x801AFDA8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFDA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AFDA8
  c->lr=c->r[0]; // 801AFDAC
  c->r[1]=c->r[1]+0x00000030u; // 801AFDB0
  return; // 801AFDB4
}

// fn_801AFDB8
void f_801AFDB8(Ctx* __restrict c) {
  trace_call(0x801AFDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFDB8
  c->r[0]=c->lr; // 801AFDBC
  c->r[5]=0u+0x0000001Bu; // 801AFDC0
  c->r[6]=0u+0x0000000Du; // 801AFDC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AFDC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AFDCC
  c->r[26]=c->r[3]|c->r[3]; // 801AFDD0
  c->r[4]=R32(c->r[3]+0x00000014u); // 801AFDD4
  c->r[3]=c->r[3]+0x000008D0u; // 801AFDD8
  c->lr=0x801AFDE0u; f_801DFB08(c); // 801AFDDC
  c->r[0]=c->r[26]+0x0000251Cu; // 801AFDE0
  c->r[4]=R32(c->r[26]+0x00000014u); // 801AFDE4
  W32(c->r[26]+0x00000994u,c->r[0]); // 801AFDE8
  c->r[3]=c->r[26]+0x000024E4u; // 801AFDEC
  c->r[5]=c->r[26]+0x00001F7Cu; // 801AFDF0
  c->lr=0x801AFDF8u; f_80164F08(c); // 801AFDF4
  c->lr=0x801AFDFCu; f_8016D208(c); // 801AFDF8
  c->r[28]=c->r[3]|c->r[3]; // 801AFDFC
  c->r[3]=R32(c->r[26]+0x00000014u); // 801AFE00
  c->r[4]=0u+0x00001000u; // 801AFE04
  c->lr=0x801AFE0Cu; f_802A703C(c); // 801AFE08
  c->r[30]=0u+0x80170000u; // 801AFE0C
  c->r[5]=c->r[3]|c->r[3]; // 801AFE10
  c->r[7]=c->r[28]|c->r[28]; // 801AFE14
  c->r[3]=c->r[26]+0x000024E4u; // 801AFE18
  c->r[4]=c->r[30]+0xFFFFD24Cu; // 801AFE1C
  c->r[6]=0u+0x00001000u; // 801AFE20
  c->lr=0x801AFE28u; f_80165010(c); // 801AFE24
  c->r[27]=0u+0x00000000u; // 801AFE28
  c->r[31]=0u+0x00000000u; // 801AFE2C
L_801AFE30:;
  c->r[0]=c->r[27]+0x00000001u; // 801AFE30
  c->r[3]=c->r[26]+c->r[31]; // 801AFE34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)88); // 801AFE38
  c->r[4]=R32(c->r[26]+0x00000014u); // 801AFE3C
  c->r[29]=c->r[3]+0x000022ECu; // 801AFE40
  c->r[5]=c->r[26]+c->r[0]; // 801AFE44
  c->r[3]=c->r[29]|c->r[29]; // 801AFE48
  c->r[5]=c->r[5]+0x00001F7Cu; // 801AFE4C
  c->lr=0x801AFE54u; f_80164F08(c); // 801AFE50
  c->lr=0x801AFE58u; f_8016D208(c); // 801AFE54
  c->r[28]=c->r[3]|c->r[3]; // 801AFE58
  c->r[3]=R32(c->r[26]+0x00000014u); // 801AFE5C
  c->r[4]=0u+0x00001000u; // 801AFE60
  c->lr=0x801AFE68u; f_802A703C(c); // 801AFE64
  c->r[5]=c->r[3]|c->r[3]; // 801AFE68
  c->r[3]=c->r[29]|c->r[29]; // 801AFE6C
  c->r[7]=c->r[28]|c->r[28]; // 801AFE70
  c->r[4]=c->r[30]+0xFFFFD24Cu; // 801AFE74
  c->r[6]=0u+0x00001000u; // 801AFE78
  c->lr=0x801AFE80u; f_80165010(c); // 801AFE7C
  c->r[27]=c->r[27]+0x00000001u; // 801AFE80
  c->r[31]=c->r[31]+0x00000038u; // 801AFE84
  cmpu(c,0,c->r[27],0x00000009u); // 801AFE88
  if (crb(c,0)) { IRQCHK(c); goto L_801AFE30; } // 801AFE8C
  c->r[3]=c->r[26]+0x000008D0u; // 801AFE90
  c->r[4]=c->r[26]+0x00000830u; // 801AFE94
  c->lr=0x801AFE9Cu; f_801DF848(c); // 801AFE98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AFE9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFEA0
  c->lr=c->r[0]; // 801AFEA4
  c->r[1]=c->r[1]+0x00000020u; // 801AFEA8
  return; // 801AFEAC
}

// fn_801AFEB0
void f_801AFEB0(Ctx* __restrict c) {
  trace_call(0x801AFEB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFEB0
  c->r[0]=c->lr; // 801AFEB4
  c->r[10]=c->r[9]|c->r[9]; // 801AFEB8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AFEBC
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801AFEC0
  c->r[29]=c->r[3]|c->r[3]; // 801AFEC4
  c->lr=0x801AFECCu; f_800AD788(c); // 801AFEC8
  c->r[3]=c->r[29]+0x000008D0u; // 801AFECC
  c->r[5]=c->r[29]+0x000024E4u; // 801AFED0
  c->r[4]=0u+0x00000003u; // 801AFED4
  c->lr=0x801AFEDCu; f_801DFB10(c); // 801AFED8
  c->r[30]=0u+0x00000000u; // 801AFEDC
  c->r[31]=0u+0x00000000u; // 801AFEE0
L_801AFEE4:;
  c->r[5]=c->r[29]+c->r[31]; // 801AFEE4
  c->r[3]=c->r[29]+0x000008D0u; // 801AFEE8
  c->r[4]=c->r[30]+0x00000004u; // 801AFEEC
  c->r[5]=c->r[5]+0x000022ECu; // 801AFEF0
  c->lr=0x801AFEF8u; f_801DFB10(c); // 801AFEF4
  c->r[30]=c->r[30]+0x00000001u; // 801AFEF8
  c->r[31]=c->r[31]+0x00000038u; // 801AFEFC
  cmpu(c,0,c->r[30],0x00000009u); // 801AFF00
  if (crb(c,0)) { IRQCHK(c); goto L_801AFEE4; } // 801AFF04
  c->r[5]=R32(c->r[29]+0x00000908u); // 801AFF08
  c->r[4]=0u+0x00000005u; // 801AFF0C
  c->r[0]=0u+0x00000004u; // 801AFF10
  c->r[3]=c->r[29]+0x000008D0u; // 801AFF14
  W32(c->r[5]+0x00000024u,c->r[4]); // 801AFF18
  c->r[4]=c->r[1]+0x00000010u; // 801AFF1C
  W32(c->r[5]+0x00000028u,c->r[0]); // 801AFF20
  c->r[5]=R32(c->r[29]+0x00000000u); // 801AFF24
  c->r[0]=R32(c->r[29]+0x00000004u); // 801AFF28
  W32(c->r[1]+0x00000010u,c->r[5]); // 801AFF2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFF30
  c->lr=0x801AFF38u; f_801E075C(c); // 801AFF34
  c->r[0]=0u+0x0000000Au; // 801AFF38
  c->r[3]=0u+0x00000000u; // 801AFF3C
  c->ctr=c->r[0]; // 801AFF40
L_801AFF44:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 801AFF44
  c->r[5]=c->r[29]+c->r[3]; // 801AFF48
  c->r[0]=R32(c->r[29]+0x00000004u); // 801AFF4C
  c->r[3]=c->r[3]+0x00000058u; // 801AFF50
  W32(c->r[1]+0x00000008u,c->r[4]); // 801AFF54
  W32(c->r[5]+0x00001FC8u,c->r[4]); // 801AFF58
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AFF5C
  W32(c->r[5]+0x00001FCCu,c->r[0]); // 801AFF60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AFF44; } // 801AFF64
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801AFF68
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AFF6C
  c->lr=c->r[0]; // 801AFF70
  c->r[1]=c->r[1]+0x00000030u; // 801AFF74
  return; // 801AFF78
}

// fn_801AFF7C
void f_801AFF7C(Ctx* __restrict c) {
  trace_call(0x801AFF7Cu);
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801AFF7C
  cmpu(c,0,c->r[0],0x00000001u); // 801AFF80
  if (crb(c,1)) { goto L_801AFF90; } // 801AFF84
  {uint32_t ea=c->r[2]+0xFFFFAF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFF88
  return; // 801AFF8C
L_801AFF90:;
  {uint32_t ea=c->r[2]+0xFFFFAF38u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFF90
  return; // 801AFF94
}

// fn_801AFF98
void f_801AFF98(Ctx* __restrict c) {
  trace_call(0x801AFF98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFF98
  c->r[0]=c->lr; // 801AFF9C
  c->r[4]=0u+0x804D0000u; // 801AFFA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFFA4
  c->r[4]=c->r[4]+0x00003318u; // 801AFFA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFFAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AFFB0
  c->r[30]=c->r[3]|c->r[3]; // 801AFFB4
  {uint32_t ea=c->r[3]+0x00001F78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AFFB8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AFFBC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801AFFC0
  {uint32_t ea=c->r[3]+0x00001F78u; WF32(ea,c->f[0]);} // 801AFFC4
  c->r[3]=R32(c->r[3]+0x00000050u); // 801AFFC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801AFFCC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801AFFD0
  c->ctr=c->r[12]; // 801AFFD4
  if (true) { c->lr=0x801AFFDCu; dispatch(c,c->ctr); } // 801AFFD8
  c->r[0]=R32(c->r[30]+0x00001F18u); // 801AFFDC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801AFFE0
  if (crb(c,2)) { goto L_801AFFF4; } // 801AFFE4
  c->r[0]=0u+0x00000001u; // 801AFFE8
  W8(c->r[30]+0x00001F1Cu,c->r[0]); // 801AFFEC
  goto L_801AFFFC; // 801AFFF0
L_801AFFF4:;
  c->r[0]=0u+0x00000000u; // 801AFFF4
  W8(c->r[30]+0x00001F1Cu,c->r[0]); // 801AFFF8
L_801AFFFC:;
  W32(c->r[30]+0x00001F18u,c->r[3]); // 801AFFFC
  c->r[3]=c->r[30]|c->r[30]; // 801B0000
  c->lr=0x801B0008u; f_801861BC(c); // 801B0004
  c->r[31]=c->r[3]|c->r[3]; // 801B0008
  c->r[4]=c->r[30]+0x00001F1Du; // 801B000C
  c->lr=0x801B0014u; f_80293554(c); // 801B0010
  cmps(c,0,(int32_t)c->r[3],0); // 801B0014
  if (crb(c,2)) { goto L_801B0030; } // 801B0018
  c->r[4]=c->r[31]|c->r[31]; // 801B001C
  c->r[3]=c->r[30]+0x00001F1Du; // 801B0020
  c->lr=0x801B0028u; f_802933D8(c); // 801B0024
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0028
  {uint32_t ea=c->r[30]+0x00001F40u; WF32(ea,c->f[0]);} // 801B002C
L_801B0030:;
  c->r[3]=0u+0x804D0000u; // 801B0030
  {uint32_t ea=c->r[2]+0xFFFFAF3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0034
  c->r[3]=c->r[3]+0x00003318u; // 801B0038
  {uint32_t ea=c->r[30]+0x00001F40u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B003C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0040
  c->r[3]=c->r[30]|c->r[30]; // 801B0044
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801B0048
  {uint32_t ea=c->r[30]+0x00001F40u; WF32(ea,c->f[0]);} // 801B004C
  c->lr=0x801B0054u; f_800B5DFC(c); // 801B0050
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0058
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B005C
  c->lr=c->r[0]; // 801B0060
  c->r[1]=c->r[1]+0x00000010u; // 801B0064
  return; // 801B0068
}

// fn_801B006C
void f_801B006C(Ctx* __restrict c) {
  trace_call(0x801B006Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B006C
  c->r[0]=c->lr; // 801B0070
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0074
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 801B0078
  c->f[31]=c->f[2]; // 801B007C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801B0080
  c->f[30]=c->f[1]; // 801B0084
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B0088
  c->r[31]=c->r[3]+0x000008ECu; // 801B008C
  c->r[28]=c->r[4]|c->r[4]; // 801B0090
  c->r[29]=c->r[5]|c->r[5]; // 801B0094
  c->r[4]=c->r[6]|c->r[6]; // 801B0098
  c->r[3]=c->r[31]|c->r[31]; // 801B009C
  c->lr=0x801B00A4u; f_80075440(c); // 801B00A0
  c->r[30]=c->r[3]|c->r[3]; // 801B00A4
  c->r[3]=c->r[28]|c->r[28]; // 801B00A8
  c->lr=0x801B00B0u; f_801AFF7C(c); // 801B00AC
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B00B0
  c->f[3]=c->f[1]; // 801B00B4
  c->f[1]=c->f[30]; // 801B00B8
  c->r[3]=c->r[31]|c->r[31]; // 801B00BC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801B00C0
  c->f[2]=c->f[31]; // 801B00C4
  c->r[4]=c->r[28]|c->r[28]; // 801B00C8
  c->r[5]=c->r[30]|c->r[30]; // 801B00CC
  c->r[6]=c->r[29]|c->r[29]; // 801B00D0
  c->r[7]=0u+0x00000000u; // 801B00D4
  c->ctr=c->r[12]; // 801B00D8
  if (true) { c->lr=0x801B00E0u; dispatch(c,c->ctr); } // 801B00DC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 801B00E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801B00E4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B00E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B00EC
  c->lr=c->r[0]; // 801B00F0
  c->r[1]=c->r[1]+0x00000030u; // 801B00F4
  return; // 801B00F8
}

// fn_801B00FC
void f_801B00FC(Ctx* __restrict c) {
  trace_call(0x801B00FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B00FC
  c->r[0]=c->lr; // 801B0100
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0104
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 801B0108
  c->f[31]=c->f[2]; // 801B010C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801B0110
  c->f[30]=c->f[1]; // 801B0114
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B0118
  c->r[31]=c->r[3]+0x000008ECu; // 801B011C
  c->r[28]=c->r[4]|c->r[4]; // 801B0120
  c->r[29]=c->r[5]|c->r[5]; // 801B0124
  c->r[4]=c->r[6]|c->r[6]; // 801B0128
  c->r[3]=c->r[31]|c->r[31]; // 801B012C
  c->lr=0x801B0134u; f_80075440(c); // 801B0130
  c->r[30]=c->r[3]|c->r[3]; // 801B0134
  c->r[3]=c->r[28]|c->r[28]; // 801B0138
  c->lr=0x801B0140u; f_801AFF7C(c); // 801B013C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B0140
  c->f[3]=c->f[1]; // 801B0144
  c->f[1]=c->f[30]; // 801B0148
  c->r[3]=c->r[31]|c->r[31]; // 801B014C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801B0150
  c->f[2]=c->f[31]; // 801B0154
  c->r[4]=c->r[28]|c->r[28]; // 801B0158
  c->r[5]=c->r[30]|c->r[30]; // 801B015C
  c->r[6]=c->r[29]|c->r[29]; // 801B0160
  c->r[7]=0u+0x00000000u; // 801B0164
  c->ctr=c->r[12]; // 801B0168
  if (true) { c->lr=0x801B0170u; dispatch(c,c->ctr); } // 801B016C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 801B0170
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801B0174
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B0178
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B017C
  c->lr=c->r[0]; // 801B0180
  c->r[1]=c->r[1]+0x00000030u; // 801B0184
  return; // 801B0188
}

// fn_801B018C
void f_801B018C(Ctx* __restrict c) {
  trace_call(0x801B018Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B018C
  c->r[0]=c->lr; // 801B0190
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0194
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B0198
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B019C
  c->r[11]=c->r[1]+0x00000020u; // 801B01A0
  c->lr=0x801B01A8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B01A4
  c->f[31]=c->f[1]; // 801B01A8
  c->r[29]=c->r[3]|c->r[3]; // 801B01AC
  c->r[30]=c->r[4]|c->r[4]; // 801B01B0
  c->r[31]=c->r[5]|c->r[5]; // 801B01B4
  c->lr=0x801B01BCu; f_801861BC(c); // 801B01B8
  c->r[4]=c->r[3]|c->r[3]; // 801B01BC
  c->r[3]=c->r[30]|c->r[30]; // 801B01C0
  c->r[5]=0u+0xFFFFFFFFu; // 801B01C4
  c->lr=0x801B01CCu; f_800A5548(c); // 801B01C8
  cmps(c,0,(int32_t)c->r[3],0); // 801B01CC
  if (crb(c,2)) { goto L_801B0200; } // 801B01D0
  cmpu(c,0,c->r[31],0x00000001u); // 801B01D4
  if (!crb(c,2)) { goto L_801B0234; } // 801B01D8
  c->r[3]=R32(c->r[29]+0x00000974u); // 801B01DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B01E0
  c->lr=0x801B01E8u; f_80164970(c); // 801B01E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B01E8
  if (!crb(c,2)) { goto L_801B0234; } // 801B01EC
  c->r[3]=c->r[29]|c->r[29]; // 801B01F0
  c->lr=0x801B01F8u; f_801B0CFC(c); // 801B01F4
  cmpu(c,0,c->r[3],0x00000001u); // 801B01F8
  if (!crb(c,2)) { goto L_801B0234; } // 801B01FC
L_801B0200:;
  c->r[4]=c->r[30]|c->r[30]; // 801B0200
  c->r[3]=c->r[29]+0x000008ECu; // 801B0204
  c->lr=0x801B020Cu; f_80075440(c); // 801B0208
  c->f[1]=c->f[31]; // 801B020C
  c->r[5]=c->r[3]|c->r[3]; // 801B0210
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0214
  c->r[3]=c->r[29]+0x00000C88u; // 801B0218
  c->r[4]=c->r[29]+0x000008ECu; // 801B021C
  c->r[6]=0u+0x00000000u; // 801B0220
  c->r[7]=0u+0x00000000u; // 801B0224
  c->lr=0x801B022Cu; f_800BB0C8(c); // 801B0228
  c->r[3]=0u+0x00000001u; // 801B022C
  goto L_801B0238; // 801B0230
L_801B0234:;
  c->r[3]=0u+0x00000000u; // 801B0234
L_801B0238:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B0238
  c->r[11]=c->r[1]+0x00000020u; // 801B023C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B0240
  c->lr=0x801B0248u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0244
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B0248
  c->lr=c->r[0]; // 801B024C
  c->r[1]=c->r[1]+0x00000030u; // 801B0250
  return; // 801B0254
}

// fn_801B0258
void f_801B0258(Ctx* __restrict c) {
  trace_call(0x801B0258u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0258
  c->r[0]=c->lr; // 801B025C
  c->r[5]=0u+0x00000000u; // 801B0260
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0264
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0268
  c->r[31]=c->r[3]|c->r[3]; // 801B026C
  c->lr=0x801B0274u; f_801B018C(c); // 801B0270
  cmps(c,0,(int32_t)c->r[3],0); // 801B0274
  if (crb(c,2)) { goto L_801B0284; } // 801B0278
  c->r[3]=0u+0x00000000u; // 801B027C
  goto L_801B028C; // 801B0280
L_801B0284:;
  c->r[3]=c->r[31]|c->r[31]; // 801B0284
  c->lr=0x801B028Cu; f_801B0CFC(c); // 801B0288
L_801B028C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B028C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0290
  c->lr=c->r[0]; // 801B0294
  c->r[1]=c->r[1]+0x00000010u; // 801B0298
  return; // 801B029C
}

// fn_801B02A0
void f_801B02A0(Ctx* __restrict c) {
  trace_call(0x801B02A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B02A0
  c->r[0]=c->lr; // 801B02A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B02A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B02AC
  c->r[31]=c->r[3]|c->r[3]; // 801B02B0
  c->lr=0x801B02B8u; f_801B018C(c); // 801B02B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B02B8
  if (crb(c,2)) { goto L_801B02C8; } // 801B02BC
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B02C0
  goto L_801B0300; // 801B02C4
L_801B02C8:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 801B02C8
  c->r[31]=R32(c->r[3]+0x00000000u); // 801B02CC
  c->r[3]=c->r[31]|c->r[31]; // 801B02D0
  c->lr=0x801B02D8u; f_80075320(c); // 801B02D4
  cmps(c,0,(int32_t)c->r[3],0); // 801B02D8
  if (crb(c,2)) { goto L_801B02FC; } // 801B02DC
  c->r[3]=c->r[31]|c->r[31]; // 801B02E0
  c->lr=0x801B02E8u; f_80075320(c); // 801B02E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B02E8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801B02EC
  c->ctr=c->r[12]; // 801B02F0
  if (true) { c->lr=0x801B02F8u; dispatch(c,c->ctr); } // 801B02F4
  goto L_801B0300; // 801B02F8
L_801B02FC:;
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B02FC
L_801B0300:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0300
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0304
  c->lr=c->r[0]; // 801B0308
  c->r[1]=c->r[1]+0x00000010u; // 801B030C
  return; // 801B0310
}

// fn_801B0314
void f_801B0314(Ctx* __restrict c) {
  trace_call(0x801B0314u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0314
  c->r[0]=c->lr; // 801B0318
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B031C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B0320
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 801B0324
  c->f[31]=c->f[2]; // 801B0328
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801B032C
  c->f[30]=c->f[1]; // 801B0330
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B0334
  c->r[30]=c->r[3]|c->r[3]; // 801B0338
  c->r[28]=c->r[4]|c->r[4]; // 801B033C
  c->r[31]=c->r[5]|c->r[5]; // 801B0340
  c->r[29]=c->r[6]|c->r[6]; // 801B0344
  c->r[7]=R32(c->r[3]+0x00000974u); // 801B0348
  c->r[3]=R32(c->r[7]+c->r[0]); // 801B034C
  c->lr=0x801B0354u; f_800C4CC4(c); // 801B0350
  c->r[4]=c->r[3]|c->r[3]; // 801B0354
  c->r[3]=c->r[31]|c->r[31]; // 801B0358
  c->r[5]=0u+0xFFFFFFFFu; // 801B035C
  c->lr=0x801B0364u; f_800A5548(c); // 801B0360
  cmps(c,0,(int32_t)c->r[3],0); // 801B0364
  if (!crb(c,2)) { goto L_801B03B8; } // 801B0368
  c->r[30]=c->r[30]+0x000008ECu; // 801B036C
  c->r[4]=c->r[31]|c->r[31]; // 801B0370
  c->r[3]=c->r[30]|c->r[30]; // 801B0374
  c->lr=0x801B037Cu; f_80075440(c); // 801B0378
  c->r[31]=c->r[3]|c->r[3]; // 801B037C
  c->r[3]=c->r[28]|c->r[28]; // 801B0380
  c->lr=0x801B0388u; f_801AFF7C(c); // 801B0384
  c->r[12]=R32(c->r[30]+0x00000000u); // 801B0388
  c->f[3]=c->f[1]; // 801B038C
  c->f[1]=c->f[30]; // 801B0390
  c->r[3]=c->r[30]|c->r[30]; // 801B0394
  c->r[12]=R32(c->r[12]+0x00000010u); // 801B0398
  c->f[2]=c->f[31]; // 801B039C
  c->r[4]=c->r[28]|c->r[28]; // 801B03A0
  c->r[5]=c->r[31]|c->r[31]; // 801B03A4
  c->r[6]=c->r[29]|c->r[29]; // 801B03A8
  c->r[7]=0u+0x00000000u; // 801B03AC
  c->ctr=c->r[12]; // 801B03B0
  if (true) { c->lr=0x801B03B8u; dispatch(c,c->ctr); } // 801B03B4
L_801B03B8:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 801B03B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801B03BC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B03C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B03C4
  c->lr=c->r[0]; // 801B03C8
  c->r[1]=c->r[1]+0x00000030u; // 801B03CC
  return; // 801B03D0
}

// fn_801B03D4
void f_801B03D4(Ctx* __restrict c) {
  trace_call(0x801B03D4u);
  c->r[3]=R32(c->r[3]+0x00000974u); // 801B03D4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B03D8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B03DC
  f_8016543C(c); return; // 801B03E0
}

// fn_801B03E4
void f_801B03E4(Ctx* __restrict c) {
  trace_call(0x801B03E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B03E4
  c->r[0]=c->lr; // 801B03E8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B03EC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801B03F0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801B03F4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801B03F8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801B03FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801B0400
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801B0404
  c->r[11]=c->r[1]+0x00000030u; // 801B0408
  c->lr=0x801B0410u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B040C
  c->f[29]=c->f[1]; // 801B0410
  cmps(c,0,(int32_t)c->r[4],0); // 801B0414
  c->f[30]=c->f[2]; // 801B0418
  {uint32_t ea=c->r[2]+0xFFFFAF2Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801B041C
  c->r[27]=c->r[5]|c->r[5]; // 801B0420
  if (!crb(c,2)) { goto L_801B042C; } // 801B0424
  {uint32_t ea=c->r[2]+0xFFFFAF38u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B0428
L_801B042C:;
  c->r[0]=addc(c,~c->r[4],0x00000000u,1); // 801B042C
  c->r[5]=cntlz(c->r[4]); // 801B0430
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B0434
  c->r[28]=R32(c->r[3]+0x00000994u); // 801B0438
  c->r[0]=0u+0x00000003u; // 801B043C
  c->r[31]=rotl(c->r[5],27)&0x07FFFFFFu; // 801B0440
  c->r[30]=c->r[0]&~c->r[4]; // 801B0444
  c->r[29]=0u+0x00000000u; // 801B0448
  c->r[26]=0u+0x00000000u; // 801B044C
  goto L_801B04F4; // 801B0450
L_801B0454:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801B0454
  c->r[3]=c->r[0]+c->r[26]; // 801B0458
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B045C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0460
  if (crb(c,2)) { goto L_801B04EC; } // 801B0464
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801B0468
  c->r[3]=c->r[1]+0x00000008u; // 801B046C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B0470
  c->lr=0x801B0478u; f_801B0D30(c); // 801B0474
  c->r[4]=c->r[27]|c->r[27]; // 801B0478
  c->r[6]=0u+0x00000000u; // 801B047C
  goto L_801B04A8; // 801B0480
L_801B0484:;
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801B0484
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801B0488
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801B048C
  if (crb(c,2)) { goto L_801B049C; } // 801B0490
  c->r[0]=0u+0x00000000u; // 801B0494
  goto L_801B04E0; // 801B0498
L_801B049C:;
  c->r[6]=c->r[6]+0x00000001u; // 801B049C
  c->r[4]=c->r[4]+0x00000001u; // 801B04A0
  c->r[3]=c->r[3]+0x00000001u; // 801B04A4
L_801B04A8:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 801B04A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 801B04AC
  if (crb(c,2)) { goto L_801B04C0; } // 801B04B0
  c->r[7]=R8(c->r[4]+0x00000000u); // 801B04B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 801B04B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B0484; } // 801B04BC
L_801B04C0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 801B04C0
  if (!crb(c,2)) { goto L_801B04DC; } // 801B04C4
  c->r[0]=R8(c->r[27]+c->r[6]); // 801B04C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B04CC
  if (!crb(c,2)) { goto L_801B04DC; } // 801B04D0
  c->r[0]=0u+0x00000001u; // 801B04D4
  goto L_801B04E0; // 801B04D8
L_801B04DC:;
  c->r[0]=0u+0x00000000u; // 801B04DC
L_801B04E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B04E0
  if (crb(c,2)) { goto L_801B04EC; } // 801B04E4
  goto L_801B0504; // 801B04E8
L_801B04EC:;
  c->r[29]=c->r[29]+0x00000001u; // 801B04EC
  c->r[26]=c->r[26]+0x0000001Cu; // 801B04F0
L_801B04F4:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 801B04F4
  cmpu(c,0,c->r[29],c->r[0]); // 801B04F8
  if (crb(c,0)) { IRQCHK(c); goto L_801B0454; } // 801B04FC
  c->r[29]=0u+0xFFFFFFFFu; // 801B0500
L_801B0504:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801B0504
  c->f[1]=c->f[29]; // 801B0508
  c->f[2]=c->f[30]; // 801B050C
  c->r[3]=c->r[28]|c->r[28]; // 801B0510
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B0514
  c->f[3]=c->f[31]; // 801B0518
  c->r[4]=c->r[29]|c->r[29]; // 801B051C
  c->r[6]=c->r[31]|c->r[31]; // 801B0520
  c->r[7]=c->r[30]|c->r[30]; // 801B0524
  c->r[5]=0u+0x00000000u; // 801B0528
  c->ctr=c->r[12]; // 801B052C
  if (true) { c->lr=0x801B0534u; dispatch(c,c->ctr); } // 801B0530
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801B0534
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801B0538
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801B053C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801B0540
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801B0544
  c->r[11]=c->r[1]+0x00000030u; // 801B0548
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801B054C
  c->lr=0x801B0554u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0550
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B0554
  c->lr=c->r[0]; // 801B0558
  c->r[1]=c->r[1]+0x00000060u; // 801B055C
  return; // 801B0560
}

// fn_801B0564
void f_801B0564(Ctx* __restrict c) {
  trace_call(0x801B0564u);
  c->r[3]=R32(c->r[3]+0x00000994u); // 801B0564
  c->r[0]=addc(c,~c->r[4],0x00000000u,1); // 801B0568
  c->r[4]=cntlz(c->r[4]); // 801B056C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B0570
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B0574
  c->r[0]=0u+0x00000003u; // 801B0578
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B057C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B0580
  c->r[5]=c->r[0]&~c->r[5]; // 801B0584
  c->ctr=c->r[12]; // 801B0588
  if (true) { dispatch(c,c->ctr); return; } // 801B058C
}

// fn_801B0590
void f_801B0590(Ctx* __restrict c) {
  trace_call(0x801B0590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0590
  c->r[0]=c->lr; // 801B0594
  c->r[3]=c->r[4]|c->r[4]; // 801B0598
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B059C
  c->r[12]=R32(c->r[4]+0x00000000u); // 801B05A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B05A4
  c->ctr=c->r[12]; // 801B05A8
  if (true) { c->lr=0x801B05B0u; dispatch(c,c->ctr); } // 801B05AC
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801B05B0
  c->r[0]=cntlz(c->r[0]); // 801B05B4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B05B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B05BC
  c->lr=c->r[0]; // 801B05C0
  c->r[1]=c->r[1]+0x00000010u; // 801B05C4
  return; // 801B05C8
}

// fn_801B05CC
void f_801B05CC(Ctx* __restrict c) {
  trace_call(0x801B05CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B05CC
  c->r[0]=c->lr; // 801B05D0
  c->r[3]=c->r[4]|c->r[4]; // 801B05D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B05D8
  c->r[12]=R32(c->r[4]+0x00000000u); // 801B05DC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B05E0
  c->ctr=c->r[12]; // 801B05E4
  if (true) { c->lr=0x801B05ECu; dispatch(c,c->ctr); } // 801B05E8
  cmps(c,0,(int32_t)c->r[3],1029); // 801B05EC
  if (!crb(c,0)) { goto L_801B0608; } // 801B05F0
  cmps(c,0,(int32_t)c->r[3],1025); // 801B05F4
  if (!crb(c,0)) { goto L_801B0600; } // 801B05F8
  goto L_801B0608; // 801B05FC
L_801B0600:;
  c->r[3]=0u+0x00000001u; // 801B0600
  goto L_801B060C; // 801B0604
L_801B0608:;
  c->r[3]=0u+0x00000000u; // 801B0608
L_801B060C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B060C
  c->lr=c->r[0]; // 801B0610
  c->r[1]=c->r[1]+0x00000010u; // 801B0614
  return; // 801B0618
}

// fn_801B061C
void f_801B061C(Ctx* __restrict c) {
  trace_call(0x801B061Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B061C
  c->r[0]=c->lr; // 801B0620
  c->r[3]=c->r[4]|c->r[4]; // 801B0624
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0628
  c->r[12]=R32(c->r[4]+0x00000000u); // 801B062C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B0630
  c->ctr=c->r[12]; // 801B0634
  if (true) { c->lr=0x801B063Cu; dispatch(c,c->ctr); } // 801B0638
  cmps(c,0,(int32_t)c->r[3],1029); // 801B063C
  if (crb(c,2)) { goto L_801B0648; } // 801B0640
  goto L_801B0650; // 801B0644
L_801B0648:;
  c->r[3]=0u+0x00000001u; // 801B0648
  goto L_801B0654; // 801B064C
L_801B0650:;
  c->r[3]=0u+0x00000000u; // 801B0650
L_801B0654:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0654
  c->lr=c->r[0]; // 801B0658
  c->r[1]=c->r[1]+0x00000010u; // 801B065C
  return; // 801B0660
}

// fn_801B0664
void f_801B0664(Ctx* __restrict c) {
  trace_call(0x801B0664u);
  c->r[3]=R8(c->r[4]+0x00000034u); // 801B0664
  return; // 801B0668
}

// fn_801B066C
void f_801B066C(Ctx* __restrict c) {
  trace_call(0x801B066Cu);
  c->r[3]=R8(c->r[4]+0x00000036u); // 801B066C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801B0670
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801B0674
  return; // 801B0678
}

// fn_801B067C
void f_801B067C(Ctx* __restrict c) {
  trace_call(0x801B067Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B067C
  c->r[0]=c->lr; // 801B0680
  c->r[4]=0u+0x80440000u; // 801B0684
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0688
  c->r[4]=c->r[4]+0xFFFFA720u; // 801B068C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0690
  c->r[31]=c->r[3]|c->r[3]; // 801B0694
  c->r[12]=R32(c->r[3]+0x000008D0u); // 801B0698
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B069C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801B06A0
  c->ctr=c->r[12]; // 801B06A4
  c->r[3]=c->r[3]+0x000008D0u; // 801B06A8
  if (true) { c->lr=0x801B06B0u; dispatch(c,c->ctr); } // 801B06AC
  c->r[3]=c->r[31]+0x00000394u; // 801B06B0
  c->r[4]=0u+0x00000000u; // 801B06B4
  c->r[5]=0u+0x00000001u; // 801B06B8
  c->lr=0x801B06C0u; f_800B16D0(c); // 801B06BC
  c->r[3]=R32(c->r[31]+0x00000028u); // 801B06C0
  c->r[4]=0u+0x00000001u; // 801B06C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B06C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B06CC
  c->ctr=c->r[12]; // 801B06D0
  if (true) { c->lr=0x801B06D8u; dispatch(c,c->ctr); } // 801B06D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B06D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B06DC
  c->lr=c->r[0]; // 801B06E0
  c->r[1]=c->r[1]+0x00000010u; // 801B06E4
  return; // 801B06E8
}

// fn_801B06EC
void f_801B06EC(Ctx* __restrict c) {
  trace_call(0x801B06ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B06EC
  c->r[0]=c->lr; // 801B06F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B06F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B06F8
  c->r[31]=c->r[3]|c->r[3]; // 801B06FC
  c->r[12]=R32(c->r[3]+0x000008D0u); // 801B0700
  c->r[12]=R32(c->r[12]+0x00000020u); // 801B0704
  c->ctr=c->r[12]; // 801B0708
  c->r[3]=c->r[3]+0x000008D0u; // 801B070C
  if (true) { c->lr=0x801B0714u; dispatch(c,c->ctr); } // 801B0710
  c->r[3]=c->r[31]+0x00000394u; // 801B0714
  c->r[4]=0u+0x00000000u; // 801B0718
  c->r[5]=0u+0x00000000u; // 801B071C
  c->lr=0x801B0724u; f_800B16D0(c); // 801B0720
  c->r[3]=R32(c->r[31]+0x00000028u); // 801B0724
  c->r[4]=0u+0x00000000u; // 801B0728
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B072C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B0730
  c->ctr=c->r[12]; // 801B0734
  if (true) { c->lr=0x801B073Cu; dispatch(c,c->ctr); } // 801B0738
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B073C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0740
  c->lr=c->r[0]; // 801B0744
  c->r[1]=c->r[1]+0x00000010u; // 801B0748
  return; // 801B074C
}

// fn_801B0750
void f_801B0750(Ctx* __restrict c) {
  trace_call(0x801B0750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0750
  c->r[0]=c->lr; // 801B0754
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0758
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B075C
  c->r[30]=0u+0x00000000u; // 801B0760
  c->r[31]=0u+0x80570000u; // 801B0764
L_801B0768:;
  c->r[4]=c->r[30]|c->r[30]; // 801B0768
  c->r[3]=c->r[31]+0xFFFFA2D0u; // 801B076C
  c->r[5]=0u+0x00000002u; // 801B0770
  c->lr=0x801B0778u; f_801BD014(c); // 801B0774
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801B0778
  if (crb(c,2)) { goto L_801B0788; } // 801B077C
  c->r[3]=0u+0x00000001u; // 801B0780
  goto L_801B0798; // 801B0784
L_801B0788:;
  c->r[30]=c->r[30]+0x00000001u; // 801B0788
  cmps(c,0,(int32_t)c->r[30],2); // 801B078C
  if (crb(c,0)) { IRQCHK(c); goto L_801B0768; } // 801B0790
  c->r[3]=0u+0x00000000u; // 801B0794
L_801B0798:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B0798
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B079C
  c->lr=c->r[0]; // 801B07A0
  c->r[1]=c->r[1]+0x00000010u; // 801B07A4
  return; // 801B07A8
}

// fn_801B07AC
void f_801B07AC(Ctx* __restrict c) {
  trace_call(0x801B07ACu);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B07AC
  c->r[0]=c->lr; // 801B07B0
  W32(c->r[1]+0x00000164u,c->r[0]); // 801B07B4
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 801B07B8
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 801B07BC
  c->r[11]=c->r[1]+0x00000150u; // 801B07C0
  c->lr=0x801B07C8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B07C4
  c->f[31]=c->f[1]; // 801B07C8
  cmps(c,0,(int32_t)c->r[4],2); // 801B07CC
  c->r[30]=c->r[3]|c->r[3]; // 801B07D0
  c->r[29]=c->r[5]|c->r[5]; // 801B07D4
  if (crb(c,2)) { goto L_801B0800; } // 801B07D8
  if (!crb(c,0)) { goto L_801B07F0; } // 801B07DC
  cmps(c,0,(int32_t)c->r[4],0); // 801B07E0
  if (crb(c,2)) { goto L_801B0A88; } // 801B07E4
  if (!crb(c,0)) { goto L_801B0854; } // 801B07E8
  goto L_801B0A88; // 801B07EC
L_801B07F0:;
  cmps(c,0,(int32_t)c->r[4],4); // 801B07F0
  if (crb(c,2)) { goto L_801B08A4; } // 801B07F4
  if (!crb(c,0)) { goto L_801B0A88; } // 801B07F8
  goto L_801B09A0; // 801B07FC
L_801B0800:;
  c->r[31]=c->r[13]+0xFFFF94B8u; // 801B0800
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B0804
  cmps(c,0,(int32_t)c->r[3],0); // 801B0808
  if (crb(c,2)) { goto L_801B0854; } // 801B080C
  c->lr=0x801B0814u; f_80067C50(c); // 801B0810
  cmps(c,0,(int32_t)c->r[3],1); // 801B0814
  if (!crb(c,2)) { goto L_801B0854; } // 801B0818
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B081C
  c->r[4]=c->r[29]|c->r[29]; // 801B0820
  c->r[3]=c->r[1]+0x00000118u; // 801B0824
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801B0828
  c->lr=0x801B0830u; f_8010541C(c); // 801B082C
  c->r[6]=R32(c->r[31]+0x00000004u); // 801B0830
  c->r[3]=c->r[1]+0x00000038u; // 801B0834
  c->r[4]=c->r[1]+0x00000118u; // 801B0838
  c->r[5]=R32(c->r[6]+0x00000000u); // 801B083C
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B0840
  W32(c->r[1]+0x00000038u,c->r[5]); // 801B0844
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801B0848
  c->lr=0x801B0850u; f_800BCDAC(c); // 801B084C
  goto L_801B0A88; // 801B0850
L_801B0854:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801B0854
  cmps(c,0,(int32_t)c->r[3],0); // 801B0858
  if (crb(c,2)) { goto L_801B0A88; } // 801B085C
  c->lr=0x801B0864u; f_80067C50(c); // 801B0860
  cmps(c,0,(int32_t)c->r[3],1); // 801B0864
  if (!crb(c,2)) { goto L_801B0A88; } // 801B0868
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B086C
  c->r[4]=c->r[29]|c->r[29]; // 801B0870
  c->r[3]=c->r[1]+0x000000F4u; // 801B0874
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801B0878
  c->lr=0x801B0880u; f_8010541C(c); // 801B087C
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 801B0880
  c->r[3]=c->r[1]+0x00000030u; // 801B0884
  c->r[4]=c->r[1]+0x000000F4u; // 801B0888
  c->r[5]=R32(c->r[6]+0x00000000u); // 801B088C
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B0890
  W32(c->r[1]+0x00000030u,c->r[5]); // 801B0894
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0898
  c->lr=0x801B08A0u; f_800BCDAC(c); // 801B089C
  goto L_801B0A88; // 801B08A0
L_801B08A4:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801B08A4
  c->lr=0x801B08ACu; f_80067C50(c); // 801B08A8
  cmps(c,0,(int32_t)c->r[3],1); // 801B08AC
  if (!crb(c,2)) { goto L_801B090C; } // 801B08B0
  c->r[31]=c->r[13]+0xFFFF94B8u; // 801B08B4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B08B8
  c->lr=0x801B08C0u; f_80067C50(c); // 801B08BC
  cmps(c,0,(int32_t)c->r[3],1); // 801B08C0
  if (!crb(c,2)) { goto L_801B090C; } // 801B08C4
  c->lr=0x801B08CCu; f_80291D94(c); // 801B08C8
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B08CC
  c->r[30]=rotl(c->r[3],0)&0x00000001u; // 801B08D0
  c->r[4]=c->r[29]|c->r[29]; // 801B08D4
  c->r[3]=c->r[1]+0x000000D0u; // 801B08D8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801B08DC
  c->lr=0x801B08E4u; f_8010541C(c); // 801B08E0
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801B08E4
  c->r[3]=c->r[1]+0x00000028u; // 801B08E8
  c->r[6]=R32(c->r[31]+c->r[0]); // 801B08EC
  c->r[4]=c->r[1]+0x000000D0u; // 801B08F0
  c->r[5]=R32(c->r[6]+0x00000000u); // 801B08F4
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B08F8
  W32(c->r[1]+0x00000028u,c->r[5]); // 801B08FC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B0900
  c->lr=0x801B0908u; f_800BCDAC(c); // 801B0904
  goto L_801B0A88; // 801B0908
L_801B090C:;
  c->r[31]=c->r[13]+0xFFFF94B8u; // 801B090C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B0910
  c->lr=0x801B0918u; f_80067C50(c); // 801B0914
  cmps(c,0,(int32_t)c->r[3],1); // 801B0918
  if (!crb(c,2)) { goto L_801B0958; } // 801B091C
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0920
  c->r[4]=c->r[29]|c->r[29]; // 801B0924
  c->r[3]=c->r[1]+0x000000ACu; // 801B0928
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801B092C
  c->lr=0x801B0934u; f_8010541C(c); // 801B0930
  c->r[6]=R32(c->r[31]+0x00000004u); // 801B0934
  c->r[3]=c->r[1]+0x00000020u; // 801B0938
  c->r[4]=c->r[1]+0x000000ACu; // 801B093C
  c->r[5]=R32(c->r[6]+0x00000000u); // 801B0940
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B0944
  W32(c->r[1]+0x00000020u,c->r[5]); // 801B0948
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B094C
  c->lr=0x801B0954u; f_800BCDAC(c); // 801B0950
  goto L_801B0A88; // 801B0954
L_801B0958:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801B0958
  c->lr=0x801B0960u; f_80067C50(c); // 801B095C
  cmps(c,0,(int32_t)c->r[3],1); // 801B0960
  if (!crb(c,2)) { goto L_801B0A88; } // 801B0964
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0968
  c->r[4]=c->r[29]|c->r[29]; // 801B096C
  c->r[3]=c->r[1]+0x00000088u; // 801B0970
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 801B0974
  c->lr=0x801B097Cu; f_8010541C(c); // 801B0978
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 801B097C
  c->r[3]=c->r[1]+0x00000018u; // 801B0980
  c->r[4]=c->r[1]+0x00000088u; // 801B0984
  c->r[5]=R32(c->r[6]+0x00000000u); // 801B0988
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B098C
  W32(c->r[1]+0x00000018u,c->r[5]); // 801B0990
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B0994
  c->lr=0x801B099Cu; f_800BCDAC(c); // 801B0998
  goto L_801B0A88; // 801B099C
L_801B09A0:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801B09A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B09A4
  if (crb(c,2)) { goto L_801B0A10; } // 801B09A8
  c->lr=0x801B09B0u; f_80067C50(c); // 801B09AC
  cmps(c,0,(int32_t)c->r[3],1); // 801B09B0
  if (!crb(c,2)) { goto L_801B0A10; } // 801B09B4
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B09B8
  fcmp(c,0,c->f[31],c->f[0]); // 801B09BC
  if (!crb(c,0)) { goto L_801B09D8; } // 801B09C0
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801B09C4
  c->lr=0x801B09CCu; f_80067C84(c); // 801B09C8
  {uint32_t ea=c->r[2]+0xFFFFAF2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B09CC
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 801B09D0
  goto L_801B09E0; // 801B09D4
L_801B09D8:;
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B09D8
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801B09DC
L_801B09E0:;
  c->f[1]=c->f[31]; // 801B09E0
  c->r[4]=c->r[29]|c->r[29]; // 801B09E4
  c->r[3]=c->r[1]+0x00000064u; // 801B09E8
  c->lr=0x801B09F0u; f_8010541C(c); // 801B09EC
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 801B09F0
  c->r[3]=c->r[1]+0x00000010u; // 801B09F4
  c->r[4]=c->r[1]+0x00000064u; // 801B09F8
  c->r[5]=R32(c->r[6]+0x00000000u); // 801B09FC
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B0A00
  W32(c->r[1]+0x00000010u,c->r[5]); // 801B0A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0A08
  c->lr=0x801B0A10u; f_800BCDAC(c); // 801B0A0C
L_801B0A10:;
  c->r[31]=c->r[13]+0xFFFF94B8u; // 801B0A10
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B0A14
  cmps(c,0,(int32_t)c->r[3],0); // 801B0A18
  if (crb(c,2)) { goto L_801B0A88; } // 801B0A1C
  c->lr=0x801B0A24u; f_80067C50(c); // 801B0A20
  cmps(c,0,(int32_t)c->r[3],1); // 801B0A24
  if (!crb(c,2)) { goto L_801B0A88; } // 801B0A28
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0A2C
  fcmp(c,0,c->f[31],c->f[0]); // 801B0A30
  if (!crb(c,0)) { goto L_801B0A4C; } // 801B0A34
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B0A38
  c->lr=0x801B0A40u; f_80067C84(c); // 801B0A3C
  {uint32_t ea=c->r[2]+0xFFFFAF2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0A40
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 801B0A44
  goto L_801B0A54; // 801B0A48
L_801B0A4C:;
  {uint32_t ea=c->r[30]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0A4C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801B0A50
L_801B0A54:;
  c->f[1]=c->f[31]; // 801B0A54
  c->r[4]=c->r[29]|c->r[29]; // 801B0A58
  c->r[3]=c->r[1]+0x00000040u; // 801B0A5C
  c->lr=0x801B0A64u; f_8010541C(c); // 801B0A60
  c->r[4]=c->r[13]+0xFFFF94B8u; // 801B0A64
  c->r[3]=c->r[1]+0x00000008u; // 801B0A68
  c->r[6]=R32(c->r[4]+0x00000004u); // 801B0A6C
  c->r[4]=c->r[1]+0x00000040u; // 801B0A70
  c->r[5]=R32(c->r[6]+0x00000000u); // 801B0A74
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B0A78
  W32(c->r[1]+0x00000008u,c->r[5]); // 801B0A7C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B0A80
  c->lr=0x801B0A88u; f_800BCDAC(c); // 801B0A84
L_801B0A88:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 801B0A88
  c->r[11]=c->r[1]+0x00000150u; // 801B0A8C
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 801B0A90
  c->lr=0x801B0A98u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0A94
  c->r[0]=R32(c->r[1]+0x00000164u); // 801B0A98
  c->lr=c->r[0]; // 801B0A9C
  c->r[1]=c->r[1]+0x00000160u; // 801B0AA0
  return; // 801B0AA4
}

// fn_801B0AA8
void f_801B0AA8(Ctx* __restrict c) {
  trace_call(0x801B0AA8u);
  return; // 801B0AA8
}

// fn_801B0AAC
void f_801B0AAC(Ctx* __restrict c) {
  trace_call(0x801B0AACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0AAC
  c->r[0]=c->lr; // 801B0AB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B0AB4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801B0AB8
  c->r[31]=c->r[3]|c->r[3]; // 801B0ABC
  c->r[0]=R32(c->r[3]+0x00000190u); // 801B0AC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801B0AC4
  c->r[3]=c->r[3]+c->r[0]; // 801B0AC8
  c->r[3]=c->r[3]+0x00000010u; // 801B0ACC
  c->lr=0x801B0AD4u; f_8003F468(c); // 801B0AD0
  c->r[3]=R32(c->r[31]+0x00000190u); // 801B0AD4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B0AD8
  c->r[3]=c->r[3]+0x00000001u; // 801B0ADC
  c->r[3]=rotl(c->r[3],0)&0x0000001Fu; // 801B0AE0
  cmps(c,0,(int32_t)c->r[0],1); // 801B0AE4
  W32(c->r[31]+0x00000190u,c->r[3]); // 801B0AE8
  if (crb(c,2)) { goto L_801B0B04; } // 801B0AEC
  if (!crb(c,0)) { goto L_801B0AF8; } // 801B0AF0
  goto L_801B0BD0; // 801B0AF4
L_801B0AF8:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B0AF8
  if (!crb(c,0)) { goto L_801B0BD0; } // 801B0AFC
  goto L_801B0B6C; // 801B0B00
L_801B0B04:;
  c->r[3]=0u+0x804D0000u; // 801B0B04
  c->r[0]=0u+0x43300000u; // 801B0B08
  c->r[3]=c->r[3]+0x00003318u; // 801B0B0C
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B0B10
  c->r[0]=R32(c->r[3]+0x00000028u); // 801B0B14
  {uint32_t ea=c->r[2]+0xFFFFAF40u; c->f[1]=RF64(ea);} // 801B0B18
  c->r[0]=c->r[0]^0x80000000u; // 801B0B1C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801B0B20
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0B24
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B0B28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801B0B2C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0B30
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801B0B34
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0B38
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0B3C
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 801B0B40
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 801B0B44
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 801B0B48
  fcmp(c,0,c->f[1],c->f[0]); // 801B0B4C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 801B0B50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B0B54
  if (!crb(c,2)) { goto L_801B0BD0; } // 801B0B58
  c->r[0]=0u+0x00000000u; // 801B0B5C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801B0B60
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B0B64
  goto L_801B0BD0; // 801B0B68
L_801B0B6C:;
  c->r[3]=0u+0x804D0000u; // 801B0B6C
  c->r[0]=0u+0x43300000u; // 801B0B70
  c->r[3]=c->r[3]+0x00003318u; // 801B0B74
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B0B78
  c->r[0]=R32(c->r[3]+0x00000028u); // 801B0B7C
  {uint32_t ea=c->r[2]+0xFFFFAF40u; c->f[1]=RF64(ea);} // 801B0B80
  c->r[0]=c->r[0]^0x80000000u; // 801B0B84
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801B0B88
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0B8C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B0B90
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801B0B94
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0B98
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801B0B9C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0BA0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0BA4
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 801B0BA8
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 801B0BAC
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[2],c->f[3],-c->f[1])); // 801B0BB0
  fcmp(c,0,c->f[1],c->f[0]); // 801B0BB4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 801B0BB8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801B0BBC
  if (!crb(c,2)) { goto L_801B0BD0; } // 801B0BC0
  c->r[0]=0u+0x00000000u; // 801B0BC4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801B0BC8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B0BCC
L_801B0BD0:;
  c->r[3]=c->r[1]+0x00000008u; // 801B0BD0
  c->lr=0x801B0BD8u; f_800A0740(c); // 801B0BD4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0BD8
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0BDC
  fcmp(c,0,c->f[1],c->f[0]); // 801B0BE0
  if (crb(c,2)) { goto L_801B0BF4; } // 801B0BE4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0BE8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801B0BEC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801B0BF0
L_801B0BF4:;
  c->lr=0x801B0BF8u; f_80061A4C(c); // 801B0BF4
  c->r[4]=c->r[1]+0x00000008u; // 801B0BF8
  c->lr=0x801B0C00u; f_80062BDC(c); // 801B0BFC
  c->r[0]=R8(c->r[31]+0x00000194u); // 801B0C00
  cmps(c,0,(int32_t)c->r[0],0); // 801B0C04
  if (crb(c,2)) { goto L_801B0C38; } // 801B0C08
  c->lr=0x801B0C10u; f_80061A4C(c); // 801B0C0C
  c->r[4]=R32(c->r[31]+0x00000198u); // 801B0C10
  c->r[0]=R32(c->r[31]+0x00000190u); // 801B0C14
  c->r[3]=R32(c->r[3]+0x000008BCu); // 801B0C18
  c->r[0]=c->r[0]-c->r[4]; // 801B0C1C
  {uint32_t ea=c->r[2]+0xFFFFAF34u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0C20
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801B0C24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801B0C28
  c->r[4]=c->r[31]+c->r[0]; // 801B0C2C
  c->r[4]=c->r[4]+0x00000010u; // 801B0C30
  c->lr=0x801B0C38u; f_801DB780(c); // 801B0C34
L_801B0C38:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B0C38
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801B0C3C
  c->lr=c->r[0]; // 801B0C40
  c->r[1]=c->r[1]+0x00000040u; // 801B0C44
  return; // 801B0C48
}

// fn_801B0C4C
void f_801B0C4C(Ctx* __restrict c) {
  trace_call(0x801B0C4Cu);
  c->r[0]=c->r[5]+0x00000001u; // 801B0C4C
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801B0C50
  c->r[0]=c->r[0]-c->r[4]; // 801B0C54
  W32(c->r[3]+0x00000030u,c->r[0]); // 801B0C58
  return; // 801B0C5C
}

// fn_801B0C60
void f_801B0C60(Ctx* __restrict c) {
  trace_call(0x801B0C60u);
  {uint32_t ea=c->r[2]+0xFFFFAF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0C60
  c->r[5]=0u+0x80400000u; // 801B0C64
  c->r[0]=0u+0x00000000u; // 801B0C68
  c->r[4]=0u+0xFFFFFFFFu; // 801B0C6C
  {uint32_t ea=c->r[2]+0xFFFFAF34u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0C70
  c->r[5]=c->r[5]+0xFFFFA8ECu; // 801B0C74
  W32(c->r[3]+0x00000000u,c->r[5]); // 801B0C78
  W32(c->r[3]+0x00000008u,c->r[4]); // 801B0C7C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B0C80
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801B0C84
  W32(c->r[3]+0x00000014u,c->r[0]); // 801B0C88
  W32(c->r[3]+0x00000018u,c->r[4]); // 801B0C8C
  W32(c->r[3]+0x00000024u,c->r[0]); // 801B0C90
  W32(c->r[3]+0x00000028u,c->r[0]); // 801B0C94
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801B0C98
  W32(c->r[3]+0x00000030u,c->r[0]); // 801B0C9C
  W32(c->r[3]+0x00000034u,c->r[0]); // 801B0CA0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B0CA4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801B0CA8
  return; // 801B0CAC
}

// dtor_801B0CB0
void f_801B0CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0CB0
  c->r[0]=c->lr; // 801B0CB4
  cmps(c,0,(int32_t)c->r[3],0); // 801B0CB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0CBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B0CC0
  c->r[30]=c->r[3]|c->r[3]; // 801B0CC4
  c->r[31]=c->r[4]|c->r[4]; // 801B0CC8
  if (crb(c,2)) { goto L_801B0CE4; } // 801B0CCC
  c->lr=0x801B0CD4u; f_8022AA98(c); // 801B0CD0
  cmps(c,0,(int32_t)c->r[31],0); // 801B0CD4
  if (!crb(c,1)) { goto L_801B0CE4; } // 801B0CD8
  c->r[3]=c->r[30]|c->r[30]; // 801B0CDC
  c->lr=0x801B0CE4u; f_802896EC(c); // 801B0CE0
L_801B0CE4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B0CE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B0CE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0CEC
  c->lr=c->r[0]; // 801B0CF0
  c->r[1]=c->r[1]+0x00000010u; // 801B0CF4
  return; // 801B0CF8
}

// fn_801B0CFC
void f_801B0CFC(Ctx* __restrict c) {
  trace_call(0x801B0CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0CFC
  c->r[0]=c->lr; // 801B0D00
  c->r[3]=R32(c->r[3]+0x00000974u); // 801B0D04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0D08
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0D0C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B0D10
  c->lr=0x801B0D18u; f_8016498C(c); // 801B0D14
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801B0D18
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801B0D1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0D20
  c->lr=c->r[0]; // 801B0D24
  c->r[1]=c->r[1]+0x00000010u; // 801B0D28
  return; // 801B0D2C
}

// fn_801B0D30
void f_801B0D30(Ctx* __restrict c) {
  trace_call(0x801B0D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0D30
  c->r[0]=c->lr; // 801B0D34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0D38
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B0D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0D40
  c->r[31]=c->r[3]|c->r[3]; // 801B0D44
  cmps(c,0,(int32_t)c->r[0],0); // 801B0D48
  if (!crb(c,2)) { goto L_801B0D78; } // 801B0D4C
  c->r[3]=0u+0x803F0000u; // 801B0D50
  c->r[5]=0u+0x803F0000u; // 801B0D54
  c->r[6]=0u+0x803F0000u; // 801B0D58
  c->r[4]=0u+0x000000A5u; // 801B0D5C
  c->r[3]=c->r[3]+0x00003940u; // 801B0D60
  c->r[5]=c->r[5]+0x00003924u; // 801B0D64
  c->r[6]=c->r[6]+0x00003918u; // 801B0D68
  c->r[7]=c->r[13]+0xFFFF8778u; // 801B0D6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B0D70
  c->lr=0x801B0D78u; f_803444BC(c); // 801B0D74
L_801B0D78:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B0D78
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B0D7C
  cmps(c,0,(int32_t)c->r[0],0); // 801B0D80
  if (crb(c,2)) { goto L_801B0D90; } // 801B0D84
  c->r[3]=c->r[3]+c->r[0]; // 801B0D88
  goto L_801B0D94; // 801B0D8C
L_801B0D90:;
  c->r[3]=0u+0x00000000u; // 801B0D90
L_801B0D94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0D98
  c->lr=c->r[0]; // 801B0D9C
  c->r[1]=c->r[1]+0x00000010u; // 801B0DA0
  return; // 801B0DA4
}

// fn_801B0DA8
void f_801B0DA8(Ctx* __restrict c) {
  trace_call(0x801B0DA8u);
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B0DA8
  c->r[3]=0u+0x80540000u; // 801B0DAC
  {uint32_t ea=c->r[2]+0xFFFFAF2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B0DB0
  c->r[3]=c->r[3]+0xFFFFC290u; // 801B0DB4
  c->f[3]=c->f[1]; // 801B0DB8
  f_8003F588(c); return; // 801B0DBC
}

// fn_801B0DC0
void f_801B0DC0(Ctx* __restrict c) {
  trace_call(0x801B0DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0DC0
  c->r[0]=c->lr; // 801B0DC4
  c->r[4]=0u+0x801B0000u; // 801B0DC8
  c->r[5]=0u+0x801B0000u; // 801B0DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0DD0
  c->r[6]=0u+0x000000B0u; // 801B0DD4
  c->r[4]=c->r[4]+0x00001398u; // 801B0DD8
  c->r[5]=c->r[5]+0x000013D8u; // 801B0DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0DE0
  c->r[31]=c->r[3]|c->r[3]; // 801B0DE4
  c->r[7]=0u+0x00000010u; // 801B0DE8
  c->lr=0x801B0DF0u; f_80289B34(c); // 801B0DEC
  c->r[0]=0u+0x00000000u; // 801B0DF0
  c->r[4]=c->r[31]+0x00000B04u; // 801B0DF4
  W32(c->r[31]+0x00000B04u,c->r[0]); // 801B0DF8
  c->r[5]=c->r[31]+0x00000B10u; // 801B0DFC
  c->r[3]=c->r[31]|c->r[31]; // 801B0E00
  W32(c->r[31]+0x00000B08u,c->r[0]); // 801B0E04
  W32(c->r[31]+0x00000B10u,c->r[0]); // 801B0E08
  W32(c->r[31]+0x00000B14u,c->r[0]); // 801B0E0C
  W32(c->r[31]+0x00000B00u,c->r[0]); // 801B0E10
  W32(c->r[31]+0x00000B04u,c->r[4]); // 801B0E14
  W32(c->r[31]+0x00000B08u,c->r[4]); // 801B0E18
  W32(c->r[31]+0x00000B0Cu,c->r[0]); // 801B0E1C
  W32(c->r[31]+0x00000B10u,c->r[5]); // 801B0E20
  W32(c->r[31]+0x00000B14u,c->r[5]); // 801B0E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0E28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0E2C
  c->lr=c->r[0]; // 801B0E30
  c->r[1]=c->r[1]+0x00000010u; // 801B0E34
  return; // 801B0E38
}

// dtor_801B0E3C
void f_801B0E3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0E3C
  c->r[0]=c->lr; // 801B0E40
  cmps(c,0,(int32_t)c->r[3],0); // 801B0E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0E4C
  c->r[31]=c->r[4]|c->r[4]; // 801B0E50
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0E54
  c->r[30]=c->r[3]|c->r[3]; // 801B0E58
  if (crb(c,2)) { goto L_801B0EB0; } // 801B0E5C
  c->r[3]=addc(c,c->r[3],0x00000B0Cu,0); cr0(c,c->r[3]); // 801B0E60
  if (crb(c,2)) { goto L_801B0E74; } // 801B0E64
  if (crb(c,2)) { goto L_801B0E74; } // 801B0E68
  c->r[4]=0u+0x00000000u; // 801B0E6C
  c->lr=0x801B0E74u; f_803B4FA4(c); // 801B0E70
L_801B0E74:;
  c->r[3]=addc(c,c->r[30],0x00000B00u,0); cr0(c,c->r[3]); // 801B0E74
  if (crb(c,2)) { goto L_801B0E88; } // 801B0E78
  if (crb(c,2)) { goto L_801B0E88; } // 801B0E7C
  c->r[4]=0u+0x00000000u; // 801B0E80
  c->lr=0x801B0E88u; f_803B4FA4(c); // 801B0E84
L_801B0E88:;
  c->r[4]=0u+0x801B0000u; // 801B0E88
  c->r[3]=c->r[30]|c->r[30]; // 801B0E8C
  c->r[4]=c->r[4]+0x000013D8u; // 801B0E90
  c->r[5]=0u+0x000000B0u; // 801B0E94
  c->r[6]=0u+0x00000010u; // 801B0E98
  c->lr=0x801B0EA0u; f_80289C2C(c); // 801B0E9C
  cmps(c,0,(int32_t)c->r[31],0); // 801B0EA0
  if (!crb(c,1)) { goto L_801B0EB0; } // 801B0EA4
  c->r[3]=c->r[30]|c->r[30]; // 801B0EA8
  c->lr=0x801B0EB0u; f_802896EC(c); // 801B0EAC
L_801B0EB0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B0EB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0EB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0EB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0EBC
  c->lr=c->r[0]; // 801B0EC0
  c->r[1]=c->r[1]+0x00000010u; // 801B0EC4
  return; // 801B0EC8
}

// fn_801B0ECC
void f_801B0ECC(Ctx* __restrict c) {
  trace_call(0x801B0ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0ECC
  c->r[0]=c->lr; // 801B0ED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0ED4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0ED8
  c->r[31]=0u+0x00000000u; // 801B0EDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0EE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0EE4
  c->r[29]=0u+0x00000000u; // 801B0EE8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B0EEC
  c->r[28]=c->r[3]|c->r[3]; // 801B0EF0
  c->r[30]=c->r[28]|c->r[28]; // 801B0EF4
L_801B0EF8:;
  c->r[3]=c->r[30]+0x00000010u; // 801B0EF8
  c->lr=0x801B0F00u; f_800610B4(c); // 801B0EFC
  W32(c->r[30]+0x00000008u,c->r[31]); // 801B0F00
  c->r[29]=c->r[29]+0x00000001u; // 801B0F04
  cmpu(c,0,c->r[29],0x00000010u); // 801B0F08
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 801B0F0C
  W32(c->r[30]+0x000000ACu,c->r[31]); // 801B0F10
  c->r[30]=c->r[30]+0x000000B0u; // 801B0F14
  if (crb(c,0)) { IRQCHK(c); goto L_801B0EF8; } // 801B0F18
  c->r[3]=c->r[28]+0x00000B00u; // 801B0F1C
  c->lr=0x801B0F24u; f_803B5070(c); // 801B0F20
  c->r[3]=c->r[28]+0x00000B0Cu; // 801B0F24
  c->lr=0x801B0F2Cu; f_803B5070(c); // 801B0F28
  c->r[30]=c->r[28]|c->r[28]; // 801B0F2C
  c->r[31]=c->r[28]+0x00000B04u; // 801B0F30
  c->r[29]=0u+0x00000000u; // 801B0F34
L_801B0F38:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801B0F38
  c->r[5]=c->r[30]|c->r[30]; // 801B0F3C
  c->r[3]=c->r[28]+0x00000B00u; // 801B0F40
  c->r[4]=c->r[1]+0x00000008u; // 801B0F44
  c->lr=0x801B0F4Cu; f_803B50B4(c); // 801B0F48
  c->r[29]=c->r[29]+0x00000001u; // 801B0F4C
  c->r[30]=c->r[30]+0x000000B0u; // 801B0F50
  cmpu(c,0,c->r[29],0x00000010u); // 801B0F54
  if (crb(c,0)) { IRQCHK(c); goto L_801B0F38; } // 801B0F58
  c->r[3]=c->r[28]+0x00000B18u; // 801B0F5C
  c->lr=0x801B0F64u; f_800A0740(c); // 801B0F60
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0F64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0F68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0F6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B0F70
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B0F74
  c->lr=c->r[0]; // 801B0F78
  c->r[1]=c->r[1]+0x00000020u; // 801B0F7C
  return; // 801B0F80
}

// fn_801B0F84
void f_801B0F84(Ctx* __restrict c) {
  trace_call(0x801B0F84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0F84
  c->r[0]=c->lr; // 801B0F88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0F8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0F90
  c->r[31]=0u+0x00000000u; // 801B0F94
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0F98
  c->r[30]=c->r[3]|c->r[3]; // 801B0F9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0FA0
  c->r[29]=0u+0x00000000u; // 801B0FA4
L_801B0FA8:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 801B0FA8
  c->r[3]=c->r[30]+0x00000010u; // 801B0FAC
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 801B0FB0
  W32(c->r[30]+0x000000ACu,c->r[31]); // 801B0FB4
  c->lr=0x801B0FBCu; f_8006110C(c); // 801B0FB8
  c->r[29]=c->r[29]+0x00000001u; // 801B0FBC
  c->r[30]=c->r[30]+0x000000B0u; // 801B0FC0
  cmpu(c,0,c->r[29],0x00000010u); // 801B0FC4
  if (crb(c,0)) { IRQCHK(c); goto L_801B0FA8; } // 801B0FC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0FCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0FD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0FD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B0FD8
  c->lr=c->r[0]; // 801B0FDC
  c->r[1]=c->r[1]+0x00000020u; // 801B0FE0
  return; // 801B0FE4
}

// fn_801B0FE8
void f_801B0FE8(Ctx* __restrict c) {
  trace_call(0x801B0FE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0FE8
  c->r[0]=c->lr; // 801B0FEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0FF0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B0FF4
  c->r[27]=c->r[3]|c->r[3]; // 801B0FF8
  c->r[3]=c->r[3]+0x00000B18u; // 801B0FFC
  c->lr=0x801B1004u; f_800A0740(c); // 801B1000
  c->r[0]=R32(c->r[27]+0x00000B0Cu); // 801B1004
  cmps(c,0,(int32_t)c->r[0],0); // 801B1008
  if (crb(c,2)) { goto L_801B10C8; } // 801B100C
  c->r[31]=R32(c->r[27]+0x00000B10u); // 801B1010
  c->r[30]=c->r[27]+0x00000B10u; // 801B1014
  goto L_801B10C0; // 801B1018
L_801B101C:;
  c->r[28]=c->r[31]|c->r[31]; // 801B101C
  c->r[31]=R32(c->r[31]+0x00000000u); // 801B1020
  c->r[29]=c->r[28]+0x00000010u; // 801B1024
  c->r[3]=c->r[29]|c->r[29]; // 801B1028
  c->lr=0x801B1030u; f_80061168(c); // 801B102C
  c->r[3]=c->r[29]|c->r[29]; // 801B1030
  c->lr=0x801B1038u; f_800613B4(c); // 801B1034
  c->r[4]=c->r[3]|c->r[3]; // 801B1038
  c->r[3]=c->r[27]+0x00000B18u; // 801B103C
  c->lr=0x801B1044u; f_800A0A68(c); // 801B1040
  c->r[0]=R32(c->r[28]+0x000000ACu); // 801B1044
  cmps(c,0,(int32_t)c->r[0],0); // 801B1048
  if (crb(c,2)) { goto L_801B10C0; } // 801B104C
  c->r[3]=c->r[29]|c->r[29]; // 801B1050
  c->lr=0x801B1058u; f_80061360(c); // 801B1054
  cmps(c,0,(int32_t)c->r[3],0); // 801B1058
  if (crb(c,2)) { goto L_801B10C0; } // 801B105C
  cmps(c,0,(int32_t)c->r[28],0); // 801B1060
  if (crb(c,2)) { goto L_801B10C0; } // 801B1064
  c->r[0]=R32(c->r[27]+0x00000B0Cu); // 801B1068
  cmps(c,0,(int32_t)c->r[0],0); // 801B106C
  if (crb(c,2)) { goto L_801B10C0; } // 801B1070
  c->r[29]=R32(c->r[27]+0x00000B10u); // 801B1074
  c->r[0]=c->r[27]+0x00000B10u; // 801B1078
  goto L_801B10B8; // 801B107C
L_801B1080:;
  cmpu(c,0,c->r[28],c->r[29]); // 801B1080
  if (!crb(c,2)) { goto L_801B10B4; } // 801B1084
  W32(c->r[1]+0x00000008u,c->r[29]); // 801B1088
  c->r[3]=c->r[27]+0x00000B0Cu; // 801B108C
  c->r[4]=c->r[1]+0x00000008u; // 801B1090
  c->lr=0x801B1098u; f_803B5028(c); // 801B1094
  c->r[0]=c->r[27]+0x00000B04u; // 801B1098
  c->r[5]=c->r[29]|c->r[29]; // 801B109C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B10A0
  c->r[3]=c->r[27]+0x00000B00u; // 801B10A4
  c->r[4]=c->r[1]+0x0000000Cu; // 801B10A8
  c->lr=0x801B10B0u; f_803B50B4(c); // 801B10AC
  goto L_801B10C0; // 801B10B0
L_801B10B4:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 801B10B4
L_801B10B8:;
  cmpu(c,0,c->r[29],c->r[0]); // 801B10B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1080; } // 801B10BC
L_801B10C0:;
  cmpu(c,0,c->r[31],c->r[30]); // 801B10C0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B101C; } // 801B10C4
L_801B10C8:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B10C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B10CC
  c->lr=c->r[0]; // 801B10D0
  c->r[1]=c->r[1]+0x00000030u; // 801B10D4
  return; // 801B10D8
}

// fn_801B10DC
void f_801B10DC(Ctx* __restrict c) {
  trace_call(0x801B10DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B10DC
  c->r[0]=c->lr; // 801B10E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B10E4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B10E8
  c->r[27]=c->r[3]|c->r[3]; // 801B10EC
  c->r[28]=c->r[4]|c->r[4]; // 801B10F0
  c->r[29]=c->r[5]|c->r[5]; // 801B10F4
  c->r[30]=c->r[6]|c->r[6]; // 801B10F8
  c->r[3]=c->r[1]+0x00000010u; // 801B10FC
  c->r[4]=0u+0x00000000u; // 801B1100
  c->r[5]=0u+0x00000004u; // 801B1104
  c->lr=0x801B110Cu; f_800043EC(c); // 801B1108
  c->r[3]=c->r[1]+0x00000010u; // 801B110C
  c->r[4]=0u+0x00000000u; // 801B1110
  c->r[5]=0u+0x00000004u; // 801B1114
  c->lr=0x801B111Cu; f_800043EC(c); // 801B1118
  c->r[0]=R32(c->r[27]+0x00000B00u); // 801B111C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1120
  if (!crb(c,2)) { goto L_801B1130; } // 801B1124
  c->r[3]=R32(c->r[1]+0x00000010u); // 801B1128
  goto L_801B116C; // 801B112C
L_801B1130:;
  c->r[31]=R32(c->r[27]+0x00000B04u); // 801B1130
  c->r[3]=c->r[27]+0x00000B00u; // 801B1134
  c->r[4]=c->r[1]+0x0000000Cu; // 801B1138
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B113C
  c->lr=0x801B1144u; f_803B5028(c); // 801B1140
  c->r[0]=c->r[27]+0x00000B10u; // 801B1144
  c->r[5]=c->r[31]|c->r[31]; // 801B1148
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B114C
  c->r[3]=c->r[27]+0x00000B0Cu; // 801B1150
  c->r[4]=c->r[1]+0x00000008u; // 801B1154
  c->lr=0x801B115Cu; f_803B50B4(c); // 801B1158
  W32(c->r[31]+0x00000008u,c->r[28]); // 801B115C
  c->r[3]=c->r[31]|c->r[31]; // 801B1160
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 801B1164
  W32(c->r[31]+0x000000ACu,c->r[30]); // 801B1168
L_801B116C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B116C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B1170
  c->lr=c->r[0]; // 801B1174
  c->r[1]=c->r[1]+0x00000030u; // 801B1178
  return; // 801B117C
}

// fn_801B1180
void f_801B1180(Ctx* __restrict c) {
  trace_call(0x801B1180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1180
  c->r[0]=c->lr; // 801B1184
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1188
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B118C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1190
  c->r[30]=c->r[4]|c->r[4]; // 801B1194
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1198
  c->r[29]=c->r[3]|c->r[3]; // 801B119C
  c->r[5]=R32(c->r[4]+0x00000000u); // 801B11A0
  cmps(c,0,(int32_t)c->r[5],0); // 801B11A4
  if (!crb(c,2)) { goto L_801B11B4; } // 801B11A8
  c->r[0]=0u+0x00000000u; // 801B11AC
  goto L_801B121C; // 801B11B0
L_801B11B4:;
  c->r[0]=R32(c->r[3]+0x00000B0Cu); // 801B11B4
  cmps(c,0,(int32_t)c->r[0],0); // 801B11B8
  if (!crb(c,2)) { goto L_801B11C8; } // 801B11BC
  c->r[0]=0u+0x00000000u; // 801B11C0
  goto L_801B121C; // 801B11C4
L_801B11C8:;
  c->r[31]=R32(c->r[3]+0x00000B10u); // 801B11C8
  c->r[0]=c->r[3]+0x00000B10u; // 801B11CC
  goto L_801B1210; // 801B11D0
L_801B11D4:;
  cmpu(c,0,c->r[5],c->r[31]); // 801B11D4
  if (!crb(c,2)) { goto L_801B120C; } // 801B11D8
  W32(c->r[1]+0x00000008u,c->r[31]); // 801B11DC
  c->r[3]=c->r[3]+0x00000B0Cu; // 801B11E0
  c->r[4]=c->r[1]+0x00000008u; // 801B11E4
  c->lr=0x801B11ECu; f_803B5028(c); // 801B11E8
  c->r[0]=c->r[29]+0x00000B04u; // 801B11EC
  c->r[5]=c->r[31]|c->r[31]; // 801B11F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B11F4
  c->r[3]=c->r[29]+0x00000B00u; // 801B11F8
  c->r[4]=c->r[1]+0x0000000Cu; // 801B11FC
  c->lr=0x801B1204u; f_803B50B4(c); // 801B1200
  c->r[0]=0u+0x00000001u; // 801B1204
  goto L_801B121C; // 801B1208
L_801B120C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801B120C
L_801B1210:;
  cmpu(c,0,c->r[31],c->r[0]); // 801B1210
  if (!crb(c,2)) { IRQCHK(c); goto L_801B11D4; } // 801B1214
  c->r[0]=0u+0x00000000u; // 801B1218
L_801B121C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B121C
  if (crb(c,2)) { goto L_801B1234; } // 801B1220
  c->r[3]=c->r[30]|c->r[30]; // 801B1224
  c->r[4]=0u+0x00000000u; // 801B1228
  c->r[5]=0u+0x00000004u; // 801B122C
  c->lr=0x801B1234u; f_800043EC(c); // 801B1230
L_801B1234:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1234
  c->r[3]=0u+0x00000000u; // 801B1238
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B123C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1240
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1244
  c->lr=c->r[0]; // 801B1248
  c->r[1]=c->r[1]+0x00000020u; // 801B124C
  return; // 801B1250
}

// fn_801B1254
void f_801B1254(Ctx* __restrict c) {
  trace_call(0x801B1254u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1254
  c->r[0]=c->lr; // 801B1258
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B125C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801B1260
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801B1264
  c->f[31]=c->f[1]; // 801B1268
  c->r[5]=0u+0x00000004u; // 801B126C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B1270
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B1274
  c->r[30]=c->r[4]|c->r[4]; // 801B1278
  c->r[4]=0u+0x00000000u; // 801B127C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B1280
  c->r[29]=c->r[3]|c->r[3]; // 801B1284
  c->r[3]=c->r[1]+0x00000014u; // 801B1288
  c->lr=0x801B1290u; f_800043EC(c); // 801B128C
  c->r[3]=c->r[1]+0x00000008u; // 801B1290
  c->r[4]=0u+0x00000000u; // 801B1294
  c->r[5]=0u+0x00000004u; // 801B1298
  c->lr=0x801B12A0u; f_800043EC(c); // 801B129C
  c->r[3]=c->r[1]+0x00000008u; // 801B12A0
  c->r[4]=0u+0x00000000u; // 801B12A4
  c->r[5]=0u+0x00000004u; // 801B12A8
  c->lr=0x801B12B0u; f_800043EC(c); // 801B12AC
  c->r[0]=R32(c->r[29]+0x00000B00u); // 801B12B0
  cmps(c,0,(int32_t)c->r[0],0); // 801B12B4
  if (!crb(c,2)) { goto L_801B12C4; } // 801B12B8
  c->r[31]=R32(c->r[1]+0x00000008u); // 801B12BC
  goto L_801B130C; // 801B12C0
L_801B12C4:;
  c->r[31]=R32(c->r[29]+0x00000B04u); // 801B12C4
  c->r[3]=c->r[29]+0x00000B00u; // 801B12C8
  c->r[4]=c->r[1]+0x0000000Cu; // 801B12CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B12D0
  c->lr=0x801B12D8u; f_803B5028(c); // 801B12D4
  c->r[0]=c->r[29]+0x00000B10u; // 801B12D8
  c->r[5]=c->r[31]|c->r[31]; // 801B12DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B12E0
  c->r[3]=c->r[29]+0x00000B0Cu; // 801B12E4
  c->r[4]=c->r[1]+0x00000010u; // 801B12E8
  c->lr=0x801B12F0u; f_803B50B4(c); // 801B12EC
  c->r[0]=0u+0x00000007u; // 801B12F0
  c->r[3]=0u+0x00000000u; // 801B12F4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801B12F8
  c->r[0]=0u+0x00000001u; // 801B12FC
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801B1300
  W32(c->r[31]+0x000000ACu,c->r[0]); // 801B1304
  W32(c->r[1]+0x00000008u,c->r[31]); // 801B1308
L_801B130C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B130C
  W32(c->r[1]+0x00000014u,c->r[31]); // 801B1310
  if (crb(c,2)) { goto L_801B134C; } // 801B1314
  if (crb(c,2)) { goto L_801B1324; } // 801B1318
  c->r[31]=c->r[31]+0x00000010u; // 801B131C
  goto L_801B1328; // 801B1320
L_801B1324:;
  c->r[31]=0u+0x00000000u; // 801B1324
L_801B1328:;
  {uint32_t ea=c->r[2]+0xFFFFAF48u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1328
  c->r[3]=c->r[31]|c->r[31]; // 801B132C
  c->r[4]=c->r[30]|c->r[30]; // 801B1330
  c->r[5]=0u+0x00000000u; // 801B1334
  c->r[6]=0u+0x00000000u; // 801B1338
  c->lr=0x801B1340u; f_8006161C(c); // 801B133C
  c->f[1]=c->f[31]; // 801B1340
  c->r[3]=c->r[31]|c->r[31]; // 801B1344
  c->lr=0x801B134Cu; f_80061714(c); // 801B1348
L_801B134C:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 801B134C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801B1350
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801B1354
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B1358
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B135C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B1360
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B1364
  c->lr=c->r[0]; // 801B1368
  c->r[1]=c->r[1]+0x00000040u; // 801B136C
  return; // 801B1370
}

// fn_801B1374
void f_801B1374(Ctx* __restrict c) {
  trace_call(0x801B1374u);
  c->r[3]=R32(c->r[4]+0x00000000u); // 801B1374
  cmps(c,0,(int32_t)c->r[3],0); // 801B1378
  if (crb(c,2)) { goto L_801B1388; } // 801B137C
  c->r[3]=c->r[3]+0x00000010u; // 801B1380
  return; // 801B1384
L_801B1388:;
  c->r[3]=0u+0x00000000u; // 801B1388
  return; // 801B138C
}

// fn_801B1390
void f_801B1390(Ctx* __restrict c) {
  trace_call(0x801B1390u);
  c->r[3]=c->r[3]+0x00000B18u; // 801B1390
  return; // 801B1394
}

// fn_801B1398
void f_801B1398(Ctx* __restrict c) {
  trace_call(0x801B1398u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1398
  c->r[0]=c->lr; // 801B139C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B13A0
  c->r[0]=0u+0x00000000u; // 801B13A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B13A8
  c->r[31]=c->r[3]|c->r[3]; // 801B13AC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B13B0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B13B4
  c->r[3]=c->r[3]+0x00000010u; // 801B13B8
  c->lr=0x801B13C0u; f_80060FF8(c); // 801B13BC
  c->r[3]=c->r[31]|c->r[31]; // 801B13C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B13C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B13C8
  c->lr=c->r[0]; // 801B13CC
  c->r[1]=c->r[1]+0x00000010u; // 801B13D0
  return; // 801B13D4
}

// fn_801B13D8
void f_801B13D8(Ctx* __restrict c) {
  trace_call(0x801B13D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B13D8
  c->r[0]=c->lr; // 801B13DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B13E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B13E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B13E8
  c->r[31]=c->r[4]|c->r[4]; // 801B13EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B13F0
  c->r[30]=c->r[3]|c->r[3]; // 801B13F4
  if (crb(c,2)) { goto L_801B141C; } // 801B13F8
  c->r[3]=addc(c,c->r[3],0x00000010u,0); cr0(c,c->r[3]); // 801B13FC
  if (crb(c,2)) { goto L_801B140C; } // 801B1400
  c->r[4]=0u+0x00000000u; // 801B1404
  c->lr=0x801B140Cu; f_80061048(c); // 801B1408
L_801B140C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B140C
  if (!crb(c,1)) { goto L_801B141C; } // 801B1410
  c->r[3]=c->r[30]|c->r[30]; // 801B1414
  c->lr=0x801B141Cu; f_802896EC(c); // 801B1418
L_801B141C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B141C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1420
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B1424
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1428
  c->lr=c->r[0]; // 801B142C
  c->r[1]=c->r[1]+0x00000010u; // 801B1430
  return; // 801B1434
}

// fn_801B1438
void f_801B1438(Ctx* __restrict c) {
  trace_call(0x801B1438u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1438
  c->r[0]=c->lr; // 801B143C
  c->r[4]=0u+0x80400000u; // 801B1440
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1444
  c->r[4]=c->r[4]+0xFFFFEC98u; // 801B1448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B144C
  c->r[31]=c->r[3]|c->r[3]; // 801B1450
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B1454
  c->r[3]=c->r[3]+0x00000004u; // 801B1458
  c->lr=0x801B1460u; f_803B6AB4(c); // 801B145C
  c->r[3]=c->r[31]+0x0000001Cu; // 801B1460
  c->lr=0x801B1468u; f_803B8538(c); // 801B1464
  c->r[4]=0u+0x00000000u; // 801B1468
  c->r[0]=0u+0xFFFFFFFFu; // 801B146C
  W32(c->r[31]+0x00000080u,c->r[4]); // 801B1470
  c->r[3]=c->r[31]|c->r[31]; // 801B1474
  W32(c->r[31]+0x00000084u,c->r[0]); // 801B1478
  W8(c->r[31]+0x00000088u,c->r[4]); // 801B147C
  W32(c->r[31]+0x0000008Cu,c->r[4]); // 801B1480
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1484
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1488
  c->lr=c->r[0]; // 801B148C
  c->r[1]=c->r[1]+0x00000010u; // 801B1490
  return; // 801B1494
}

// fn_801B1498
void f_801B1498(Ctx* __restrict c) {
  trace_call(0x801B1498u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1498
  c->r[0]=c->lr; // 801B149C
  cmps(c,0,(int32_t)c->r[3],0); // 801B14A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B14A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B14A8
  c->r[31]=c->r[4]|c->r[4]; // 801B14AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B14B0
  c->r[30]=c->r[3]|c->r[3]; // 801B14B4
  if (crb(c,2)) { goto L_801B14E4; } // 801B14B8
  c->r[4]=0u+0xFFFFFFFFu; // 801B14BC
  c->r[3]=c->r[3]+0x0000001Cu; // 801B14C0
  c->lr=0x801B14C8u; f_803B8594(c); // 801B14C4
  c->r[3]=c->r[30]+0x00000004u; // 801B14C8
  c->r[4]=0u+0xFFFFFFFFu; // 801B14CC
  c->lr=0x801B14D4u; f_803B6AF0(c); // 801B14D0
  cmps(c,0,(int32_t)c->r[31],0); // 801B14D4
  if (!crb(c,1)) { goto L_801B14E4; } // 801B14D8
  c->r[3]=c->r[30]|c->r[30]; // 801B14DC
  c->lr=0x801B14E4u; f_802896EC(c); // 801B14E0
L_801B14E4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B14E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B14E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B14EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B14F0
  c->lr=c->r[0]; // 801B14F4
  c->r[1]=c->r[1]+0x00000010u; // 801B14F8
  return; // 801B14FC
}

// fn_801B1500
void f_801B1500(Ctx* __restrict c) {
  trace_call(0x801B1500u);
  {uint32_t ea=c->r[1]+0xFFFFFBE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1500
  c->r[0]=c->lr; // 801B1504
  W32(c->r[1]+0x00000424u,c->r[0]); // 801B1508
  W32(c->r[1]+0x0000041Cu,c->r[31]); // 801B150C
  c->r[31]=c->r[6]|c->r[6]; // 801B1510
  W32(c->r[1]+0x00000418u,c->r[30]); // 801B1514
  c->r[30]=c->r[5]|c->r[5]; // 801B1518
  W32(c->r[1]+0x00000414u,c->r[29]); // 801B151C
  c->r[29]=c->r[3]|c->r[3]; // 801B1520
  c->r[0]=R8(c->r[3]+0x00000088u); // 801B1524
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1528
  if (!crb(c,2)) { goto L_801B1580; } // 801B152C
  c->r[3]=c->r[1]+0x00000008u; // 801B1530
  c->lr=0x801B1538u; f_802933D8(c); // 801B1534
  c->r[3]=c->r[13]+0xFFFF97A8u; // 801B1538
  c->lr=0x801B1540u; f_80242AA8(c); // 801B153C
  c->r[4]=0u+0x80400000u; // 801B1540
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1544
  c->r[4]=c->r[4]+0xFFFFEC70u; // 801B1548
  c->r[3]=c->r[1]+0x00000008u; // 801B154C
  c->r[4]=R32(c->r[4]+c->r[0]); // 801B1550
  c->lr=0x801B1558u; f_802934DC(c); // 801B1554
  c->r[3]=c->r[30]|c->r[30]; // 801B1558
  c->r[4]=c->r[31]|c->r[31]; // 801B155C
  c->lr=0x801B1564u; f_802A703C(c); // 801B1560
  W32(c->r[29]+0x0000008Cu,c->r[3]); // 801B1564
  c->r[4]=c->r[3]|c->r[3]; // 801B1568
  c->r[3]=c->r[1]+0x00000008u; // 801B156C
  c->lr=0x801B1574u; f_800F7248(c); // 801B1570
  c->r[0]=0u+0x00000001u; // 801B1574
  W32(c->r[29]+0x00000084u,c->r[3]); // 801B1578
  W8(c->r[29]+0x00000088u,c->r[0]); // 801B157C
L_801B1580:;
  c->r[0]=R32(c->r[1]+0x00000424u); // 801B1580
  c->r[31]=R32(c->r[1]+0x0000041Cu); // 801B1584
  c->r[30]=R32(c->r[1]+0x00000418u); // 801B1588
  c->r[29]=R32(c->r[1]+0x00000414u); // 801B158C
  c->lr=c->r[0]; // 801B1590
  c->r[1]=c->r[1]+0x00000420u; // 801B1594
  return; // 801B1598
}

// fn_801B159C
void f_801B159C(Ctx* __restrict c) {
  trace_call(0x801B159Cu);
  c->r[0]=R8(c->r[4]+0x00000088u); // 801B159C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B15A0
  if (crb(c,2)) return; // 801B15A4
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 801B15A8
  c->r[0]=0u+0x00000001u; // 801B15AC
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 801B15B0
  c->r[4]=R32(c->r[4]+0x00000084u); // 801B15B4
  W32(c->r[3]+0x00000084u,c->r[4]); // 801B15B8
  W8(c->r[3]+0x00000088u,c->r[0]); // 801B15BC
  return; // 801B15C0
}

// fn_801B15C4
void f_801B15C4(Ctx* __restrict c) {
  trace_call(0x801B15C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B15C4
  c->r[0]=c->lr; // 801B15C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B15CC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801B15D0
  c->f[31]=c->f[1]; // 801B15D4
  W32(c->r[1]+0x00000014u,c->r[31]); // 801B15D8
  c->r[31]=c->r[3]|c->r[3]; // 801B15DC
  c->r[0]=R8(c->r[3]+0x00000088u); // 801B15E0
  cmps(c,0,(int32_t)c->r[0],1); // 801B15E4
  if (!crb(c,2)) { goto L_801B1628; } // 801B15E8
  c->r[3]=R32(c->r[3]+0x00000084u); // 801B15EC
  c->lr=0x801B15F4u; f_800F72A4(c); // 801B15F0
  cmpu(c,0,c->r[3],0x00000001u); // 801B15F4
  if (!crb(c,2)) { goto L_801B1628; } // 801B15F8
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 801B15FC
  c->r[3]=c->r[31]+0x00000004u; // 801B1600
  c->lr=0x801B1608u; f_803B6B48(c); // 801B1604
  c->r[0]=c->r[31]+0x00000004u; // 801B1608
  c->r[3]=c->r[31]+0x0000001Cu; // 801B160C
  W32(c->r[31]+0x00000064u,c->r[0]); // 801B1610
  c->r[4]=0u+0x00000001u; // 801B1614
  c->r[5]=0u+0x00000001u; // 801B1618
  c->lr=0x801B1620u; f_803B7CCC(c); // 801B161C
  c->r[0]=0u+0x00000002u; // 801B1620
  W8(c->r[31]+0x00000088u,c->r[0]); // 801B1624
L_801B1628:;
  c->r[0]=R8(c->r[31]+0x00000088u); // 801B1628
  cmps(c,0,(int32_t)c->r[0],2); // 801B162C
  if (!crb(c,2)) { goto L_801B1640; } // 801B1630
  c->f[1]=c->f[31]; // 801B1634
  c->r[3]=c->r[31]+0x0000001Cu; // 801B1638
  c->lr=0x801B1640u; f_803B7B34(c); // 801B163C
L_801B1640:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1640
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801B1644
  c->r[31]=R32(c->r[1]+0x00000014u); // 801B1648
  c->lr=c->r[0]; // 801B164C
  c->r[1]=c->r[1]+0x00000020u; // 801B1650
  return; // 801B1654
}

// fn_801B1658
void f_801B1658(Ctx* __restrict c) {
  trace_call(0x801B1658u);
  W32(c->r[3]+0x00000080u,c->r[4]); // 801B1658
  return; // 801B165C
}

// fn_801B1660
void f_801B1660(Ctx* __restrict c) {
  trace_call(0x801B1660u);
  {uint32_t ea=c->r[1]+0xFFFFFB60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1660
  c->r[0]=c->lr; // 801B1664
  W32(c->r[1]+0x000004A4u,c->r[0]); // 801B1668
  {uint32_t ea=c->r[1]+0x00000498u; WF64(ea,c->f[31]);} // 801B166C
  c->f[31]=c->f[2]; // 801B1670
  {uint32_t ea=c->r[1]+0x00000490u; WF64(ea,c->f[30]);} // 801B1674
  c->f[30]=c->f[1]; // 801B1678
  {uint32_t ea=c->r[1]+0x0000047Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B167C
  c->r[27]=c->r[3]|c->r[3]; // 801B1680
  c->r[28]=c->r[4]|c->r[4]; // 801B1684
  c->r[29]=c->r[5]|c->r[5]; // 801B1688
  if (!crb(c,6)) { goto L_801B16B0; } // 801B168C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801B1690
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801B1694
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801B1698
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801B169C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801B16A0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801B16A4
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801B16A8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801B16AC
L_801B16B0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B16B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B16B4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B16B8
  W32(c->r[1]+0x00000010u,c->r[5]); // 801B16BC
  W32(c->r[1]+0x00000014u,c->r[6]); // 801B16C0
  W32(c->r[1]+0x00000018u,c->r[7]); // 801B16C4
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801B16C8
  W32(c->r[1]+0x00000020u,c->r[9]); // 801B16CC
  W32(c->r[1]+0x00000024u,c->r[10]); // 801B16D0
  if (crb(c,2)) { goto L_801B1888; } // 801B16D4
  c->r[0]=R8(c->r[3]+0x00000088u); // 801B16D8
  cmps(c,0,(int32_t)c->r[0],1); // 801B16DC
  if (!crb(c,2)) { goto L_801B1720; } // 801B16E0
  c->r[3]=R32(c->r[3]+0x00000084u); // 801B16E4
  c->lr=0x801B16ECu; f_800F72A4(c); // 801B16E8
  cmpu(c,0,c->r[3],0x00000001u); // 801B16EC
  if (!crb(c,2)) { goto L_801B1720; } // 801B16F0
  c->r[4]=R32(c->r[27]+0x0000008Cu); // 801B16F4
  c->r[3]=c->r[27]+0x00000004u; // 801B16F8
  c->lr=0x801B1700u; f_803B6B48(c); // 801B16FC
  c->r[0]=c->r[27]+0x00000004u; // 801B1700
  c->r[3]=c->r[27]+0x0000001Cu; // 801B1704
  W32(c->r[27]+0x00000064u,c->r[0]); // 801B1708
  c->r[4]=0u+0x00000001u; // 801B170C
  c->r[5]=0u+0x00000001u; // 801B1710
  c->lr=0x801B1718u; f_803B7CCC(c); // 801B1714
  c->r[0]=0u+0x00000002u; // 801B1718
  W8(c->r[27]+0x00000088u,c->r[0]); // 801B171C
L_801B1720:;
  c->r[0]=R8(c->r[27]+0x00000088u); // 801B1720
  cmps(c,0,(int32_t)c->r[0],2); // 801B1724
  if (crb(c,2)) { goto L_801B1730; } // 801B1728
  goto L_801B1888; // 801B172C
L_801B1730:;
  c->r[3]=0u+0x80440000u; // 801B1730
  c->r[31]=0u+0x00000000u; // 801B1734
  c->r[3]=c->r[3]+0x000010A8u; // 801B1738
  c->r[0]=R32(c->r[3]+0x00000020u); // 801B173C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1740
  if (!crb(c,0)) { goto L_801B17F8; } // 801B1744
  c->r[30]=R32(c->r[27]+0x00000080u); // 801B1748
  cmps(c,0,(int32_t)c->r[30],0); // 801B174C
  if (crb(c,0)) { goto L_801B17F8; } // 801B1750
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 801B1754
  cmps(c,0,(int32_t)c->r[0],0); // 801B1758
  if (!crb(c,2)) { goto L_801B17F4; } // 801B175C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B1760
  c->r[5]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801B1764
  c->r[4]=c->r[0]+c->r[5]; // 801B1768
  c->r[0]=R32(c->r[5]+c->r[0]); // 801B176C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1770
  if (!crb(c,2)) { goto L_801B1784; } // 801B1774
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B1778
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B177C
  goto L_801B1790; // 801B1780
L_801B1784:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B1784
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B1788
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B178C
L_801B1790:;
  c->r[31]=0u+0x80440000u; // 801B1790
  c->r[0]=0u+0x00000000u; // 801B1794
  c->r[31]=c->r[31]+0x000010A8u; // 801B1798
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801B179C
  c->r[4]=R32(c->r[31]+0x00000010u); // 801B17A0
  c->r[3]=c->r[3]+c->r[5]; // 801B17A4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801B17A8
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B17AC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B17B0
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B17B4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801B17B8
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B17BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B17C0
  c->r[0]=R8(c->r[31]+0x0000002Cu); // 801B17C4
  c->r[5]=R32(c->r[31]+0x00000010u); // 801B17C8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B17CC
  c->r[0]=R32(c->r[31]+0x00000028u); // 801B17D0
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B17D4
  c->r[4]=c->r[31]+c->r[4]; // 801B17D8
  c->r[3]=c->r[5]+0x00000020u; // 801B17DC
  c->r[4]=R32(c->r[4]+0x00000014u); // 801B17E0
  c->r[4]=c->r[3]-c->r[4]; // 801B17E4
  c->r[4]=c->r[0]-c->r[4]; // 801B17E8
  c->lr=0x801B17F0u; f_80288528(c); // 801B17EC
  W32(c->r[31]+0x00000020u,c->r[30]); // 801B17F0
L_801B17F4:;
  c->r[31]=0u+0x00000001u; // 801B17F4
L_801B17F8:;
  c->r[6]=c->r[1]+0x000004A8u; // 801B17F8
  c->r[0]=c->r[1]+0x00000008u; // 801B17FC
  c->r[3]=0u+0x03020000u; // 801B1800
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 801B1804
  c->r[5]=c->r[1]+0x00000068u; // 801B1808
  c->r[4]=c->r[29]|c->r[29]; // 801B180C
  W32(c->r[1]+0x00000068u,c->r[3]); // 801B1810
  c->r[3]=c->r[1]+0x00000078u; // 801B1814
  W32(c->r[1]+0x00000070u,c->r[0]); // 801B1818
  c->lr=0x801B1820u; f_80291B6C(c); // 801B181C
  c->f[1]=c->f[30]; // 801B1820
  c->r[3]=c->r[27]|c->r[27]; // 801B1824
  c->f[2]=c->f[31]; // 801B1828
  c->r[4]=c->r[28]|c->r[28]; // 801B182C
  c->r[5]=c->r[1]+0x00000078u; // 801B1830
  c->lr=0x801B1838u; f_801B192C(c); // 801B1834
  cmps(c,0,(int32_t)c->r[31],0); // 801B1838
  if (crb(c,2)) { goto L_801B1888; } // 801B183C
  c->r[27]=0u+0x80440000u; // 801B1840
  c->r[27]=c->r[27]+0x000010A8u; // 801B1844
  c->r[0]=R8(c->r[27]+0x0000001Cu); // 801B1848
  cmps(c,0,(int32_t)c->r[0],0); // 801B184C
  if (!crb(c,2)) { goto L_801B1888; } // 801B1850
  c->lr=0x801B1858u; f_802885D8(c); // 801B1854
  c->r[0]=R32(c->r[27]+0x00000020u); // 801B1858
  c->r[4]=0u+0xFFFFFFFFu; // 801B185C
  c->r[5]=R32(c->r[27]+0x0000000Cu); // 801B1860
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B1864
  c->r[5]=c->r[5]+c->r[0]; // 801B1868
  c->r[5]=R32(c->r[5]+0x00000004u); // 801B186C
  W32(c->r[5]+0x00000008u,c->r[3]); // 801B1870
  c->r[0]=R32(c->r[27]+0x00000010u); // 801B1874
  W32(c->r[27]+0x00000020u,c->r[4]); // 801B1878
  c->r[3]=c->r[3]+c->r[0]; // 801B187C
  c->r[0]=c->r[3]+0x00000020u; // 801B1880
  W32(c->r[27]+0x00000010u,c->r[0]); // 801B1884
L_801B1888:;
  {uint32_t ea=c->r[1]+0x00000498u; c->f[31]=RF64(ea);} // 801B1888
  {uint32_t ea=c->r[1]+0x00000490u; c->f[30]=RF64(ea);} // 801B188C
  {uint32_t ea=c->r[1]+0x0000047Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B1890
  c->r[0]=R32(c->r[1]+0x000004A4u); // 801B1894
  c->lr=c->r[0]; // 801B1898
  c->r[1]=c->r[1]+0x000004A0u; // 801B189C
  return; // 801B18A0
}

// fn_801B18A4
void f_801B18A4(Ctx* __restrict c) {
  trace_call(0x801B18A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B18A4
  c->r[0]=c->lr; // 801B18A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B18AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B18B0
  c->r[31]=c->r[3]|c->r[3]; // 801B18B4
  c->r[0]=R8(c->r[3]+0x00000088u); // 801B18B8
  cmps(c,0,(int32_t)c->r[0],1); // 801B18BC
  if (!crb(c,2)) { goto L_801B1900; } // 801B18C0
  c->r[3]=R32(c->r[3]+0x00000084u); // 801B18C4
  c->lr=0x801B18CCu; f_800F72A4(c); // 801B18C8
  cmpu(c,0,c->r[3],0x00000001u); // 801B18CC
  if (!crb(c,2)) { goto L_801B1900; } // 801B18D0
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 801B18D4
  c->r[3]=c->r[31]+0x00000004u; // 801B18D8
  c->lr=0x801B18E0u; f_803B6B48(c); // 801B18DC
  c->r[0]=c->r[31]+0x00000004u; // 801B18E0
  c->r[3]=c->r[31]+0x0000001Cu; // 801B18E4
  W32(c->r[31]+0x00000064u,c->r[0]); // 801B18E8
  c->r[4]=0u+0x00000001u; // 801B18EC
  c->r[5]=0u+0x00000001u; // 801B18F0
  c->lr=0x801B18F8u; f_803B7CCC(c); // 801B18F4
  c->r[0]=0u+0x00000002u; // 801B18F8
  W8(c->r[31]+0x00000088u,c->r[0]); // 801B18FC
L_801B1900:;
  c->r[0]=R8(c->r[31]+0x00000088u); // 801B1900
  cmps(c,0,(int32_t)c->r[0],2); // 801B1904
  if (!crb(c,2)) { goto L_801B1914; } // 801B1908
  c->r[3]=c->r[31]+0x0000001Cu; // 801B190C
  goto L_801B1918; // 801B1910
L_801B1914:;
  c->r[3]=0u+0x00000000u; // 801B1914
L_801B1918:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B191C
  c->lr=c->r[0]; // 801B1920
  c->r[1]=c->r[1]+0x00000010u; // 801B1924
  return; // 801B1928
}

// fn_801B192C
void f_801B192C(Ctx* __restrict c) {
  trace_call(0x801B192Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B192C
  c->r[0]=c->lr; // 801B1930
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B1934
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801B1938
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801B193C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801B1940
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801B1944
  c->f[30]=c->f[1]; // 801B1948
  {uint32_t ea=c->r[2]+0xFFFFAF50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B194C
  c->f[31]=c->f[2]; // 801B1950
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B1954
  c->r[0]=0u+0xFFFFFFFFu; // 801B1958
  c->f[3]=c->f[1]; // 801B195C
  W32(c->r[1]+0x00000048u,c->r[30]); // 801B1960
  c->r[30]=c->r[4]|c->r[4]; // 801B1964
  c->r[4]=0u+0x80440000u; // 801B1968
  {uint32_t ea=c->r[2]+0xFFFFAF54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B196C
  W32(c->r[1]+0x00000044u,c->r[29]); // 801B1970
  c->r[29]=c->r[3]|c->r[3]; // 801B1974
  c->r[3]=c->r[4]+0xFFFFA720u; // 801B1978
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B197C
  c->r[31]=c->r[5]|c->r[5]; // 801B1980
  {uint32_t ea=c->r[2]+0xFFFFAF58u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B1984
  c->r[4]=0u+0x00000000u; // 801B1988
  {uint32_t ea=c->r[2]+0xFFFFAF5Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801B198C
  {uint32_t ea=c->r[2]+0xFFFFAF60u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B1990
  c->lr=0x801B1998u; f_8003ADB8(c); // 801B1994
  c->r[3]=c->r[1]+0x00000010u; // 801B1998
  c->lr=0x801B19A0u; f_80264680(c); // 801B199C
  c->r[3]=c->r[1]+0x00000010u; // 801B19A0
  c->r[4]=0u+0x00000000u; // 801B19A4
  c->lr=0x801B19ACu; f_8028882C(c); // 801B19A8
  c->r[3]=0u+0x00000000u; // 801B19AC
  c->lr=0x801B19B4u; f_80288934(c); // 801B19B0
  c->r[3]=0u+0x00000000u; // 801B19B4
  c->r[4]=0u+0x00000007u; // 801B19B8
  c->r[5]=0u+0x00000000u; // 801B19BC
  c->lr=0x801B19C4u; f_8028831C(c); // 801B19C0
  c->r[3]=0u+0x00000004u; // 801B19C4
  c->r[4]=0u+0x00000000u; // 801B19C8
  c->r[5]=0u+0x00000000u; // 801B19CC
  c->r[6]=0u+0x00000007u; // 801B19D0
  c->r[7]=0u+0x00000000u; // 801B19D4
  c->lr=0x801B19DCu; f_80287B80(c); // 801B19D8
  c->r[3]=c->r[29]+0x0000001Cu; // 801B19DC
  c->lr=0x801B19E4u; f_803B7018(c); // 801B19E0
  c->r[0]=rotl(c->r[30],0)&0xFF000000u; // 801B19E4
  c->r[5]=rotl(c->r[30],16)&0x000000FFu; // 801B19E8
  c->r[3]=sraw(c,c->r[0],24); // 801B19EC
  W8(c->r[1]+0x0000000Du,c->r[5]); // 801B19F0
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801B19F4
  c->r[4]=c->r[1]+0x00000008u; // 801B19F8
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801B19FC
  c->r[3]=c->r[29]+0x0000001Cu; // 801B1A00
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B1A04
  W8(c->r[1]+0x0000000Fu,c->r[30]); // 801B1A08
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801B1A0C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B1A10
  c->lr=0x801B1A18u; f_801B1AD8(c); // 801B1A14
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[30]);} // 801B1A18
  c->r[3]=c->r[31]|c->r[31]; // 801B1A1C
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[31]);} // 801B1A20
  c->lr=0x801B1A28u; f_802894C0(c); // 801B1A24
  c->r[5]=c->r[3]|c->r[3]; // 801B1A28
  c->r[4]=c->r[31]|c->r[31]; // 801B1A2C
  c->r[3]=c->r[29]+0x0000001Cu; // 801B1A30
  c->lr=0x801B1A38u; f_803B8F10(c); // 801B1A34
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801B1A38
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801B1A3C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801B1A40
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801B1A44
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B1A48
  c->r[30]=R32(c->r[1]+0x00000048u); // 801B1A4C
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B1A50
  c->r[29]=R32(c->r[1]+0x00000044u); // 801B1A54
  c->lr=c->r[0]; // 801B1A58
  c->r[1]=c->r[1]+0x00000070u; // 801B1A5C
  return; // 801B1A60
}

// fn_801B1A64
void f_801B1A64(Ctx* __restrict c) {
  trace_call(0x801B1A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1A64
  c->r[0]=c->lr; // 801B1A68
  c->r[3]=0u+0x80540000u; // 801B1A6C
  c->r[4]=0u+0x801B0000u; // 801B1A70
  c->r[5]=0u+0x801B0000u; // 801B1A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1A78
  c->r[6]=0u+0x00000090u; // 801B1A7C
  c->r[3]=c->r[3]+0xFFFFC2B0u; // 801B1A80
  c->r[4]=c->r[4]+0x00001438u; // 801B1A84
  c->r[5]=c->r[5]+0x00001498u; // 801B1A88
  c->r[7]=0u+0x00000008u; // 801B1A8C
  c->lr=0x801B1A94u; f_80289B34(c); // 801B1A90
  c->r[4]=0u+0x801B0000u; // 801B1A94
  c->r[5]=0u+0x80540000u; // 801B1A98
  c->r[4]=c->r[4]+0x00001ABCu; // 801B1A9C
  c->r[3]=0u+0x00000000u; // 801B1AA0
  c->r[5]=c->r[5]+0xFFFFC2A0u; // 801B1AA4
  c->lr=0x801B1AACu; f_802895A4(c); // 801B1AA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1AAC
  c->lr=c->r[0]; // 801B1AB0
  c->r[1]=c->r[1]+0x00000010u; // 801B1AB4
  return; // 801B1AB8
}

// fn_801B1ABC
void f_801B1ABC(Ctx* __restrict c) {
  trace_call(0x801B1ABCu);
  c->r[3]=0u+0x80540000u; // 801B1ABC
  c->r[4]=0u+0x801B0000u; // 801B1AC0
  c->r[3]=c->r[3]+0xFFFFC2B0u; // 801B1AC4
  c->r[5]=0u+0x00000090u; // 801B1AC8
  c->r[4]=c->r[4]+0x00001498u; // 801B1ACC
  c->r[6]=0u+0x00000008u; // 801B1AD0
  f_80289C2C(c); return; // 801B1AD4
}

// fn_801B1AD8
void f_801B1AD8(Ctx* __restrict c) {
  trace_call(0x801B1AD8u);
  c->r[7]=R8(c->r[4]+0x00000000u); // 801B1AD8
  c->r[6]=R8(c->r[4]+0x00000001u); // 801B1ADC
  c->r[5]=R8(c->r[4]+0x00000002u); // 801B1AE0
  c->r[0]=R8(c->r[4]+0x00000003u); // 801B1AE4
  W8(c->r[3]+0x00000018u,c->r[7]); // 801B1AE8
  W8(c->r[3]+0x00000019u,c->r[6]); // 801B1AEC
  W8(c->r[3]+0x0000001Au,c->r[5]); // 801B1AF0
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801B1AF4
  f_803B809C(c); return; // 801B1AF8
}

// fn_801B1AFC
void f_801B1AFC(Ctx* __restrict c) {
  trace_call(0x801B1AFCu);
  {uint32_t ea=c->r[2]+0xFFFFAF68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B1AFC
  c->r[4]=0u+0x80400000u; // 801B1B00
  {uint32_t ea=c->r[2]+0xFFFFAF6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1B04
  c->r[4]=c->r[4]+0xFFFFECCCu; // 801B1B08
  {uint32_t ea=c->r[2]+0xFFFFAF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1B0C
  c->r[0]=0u+0x00000000u; // 801B1B10
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B1B14
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801B1B18
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801B1B1C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801B1B20
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801B1B24
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801B1B28
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801B1B2C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B1B30
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801B1B34
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801B1B38
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 801B1B3C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 801B1B40
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 801B1B44
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 801B1B48
  W32(c->r[3]+0x00000038u,c->r[0]); // 801B1B4C
  return; // 801B1B50
}

// dtor_801B1B54
void f_801B1B54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1B54
  c->r[0]=c->lr; // 801B1B58
  cmps(c,0,(int32_t)c->r[3],0); // 801B1B5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1B60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1B64
  c->r[31]=c->r[3]|c->r[3]; // 801B1B68
  if (crb(c,2)) { goto L_801B1B7C; } // 801B1B6C
  cmps(c,0,(int32_t)c->r[4],0); // 801B1B70
  if (!crb(c,1)) { goto L_801B1B7C; } // 801B1B74
  c->lr=0x801B1B7Cu; f_802896EC(c); // 801B1B78
L_801B1B7C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B1B7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1B80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1B84
  c->lr=c->r[0]; // 801B1B88
  c->r[1]=c->r[1]+0x00000010u; // 801B1B8C
  return; // 801B1B90
}

// fn_801B1B94
void f_801B1B94(Ctx* __restrict c) {
  trace_call(0x801B1B94u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1B94
  c->r[0]=c->lr; // 801B1B98
  W32(c->r[1]+0x00000094u,c->r[0]); // 801B1B9C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801B1BA0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801B1BA4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 801B1BA8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 801B1BAC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 801B1BB0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 801B1BB4
  c->r[11]=c->r[1]+0x00000060u; // 801B1BB8
  c->lr=0x801B1BC0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B1BBC
  {uint32_t ea=c->r[2]+0xFFFFAF6Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801B1BC0
  c->f[29]=c->f[1]; // 801B1BC4
  {uint32_t ea=c->r[2]+0xFFFFAF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1BC8
  c->f[30]=c->f[2]; // 801B1BCC
  c->f[31]=c->f[3]; // 801B1BD0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 801B1BD4
  c->r[24]=c->r[3]|c->r[3]; // 801B1BD8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 801B1BDC
  c->r[25]=c->r[4]|c->r[4]; // 801B1BE0
  c->r[26]=c->r[5]|c->r[5]; // 801B1BE4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 801B1BE8
  c->r[27]=0u+0x00000000u; // 801B1BEC
  c->r[30]=0u+0x803F0000u; // 801B1BF0
  c->r[31]=0u+0x803F0000u; // 801B1BF4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B1BF8
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801B1BFC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801B1C00
  goto L_801B1E74; // 801B1C04
L_801B1C08:;
  c->r[0]=R32(c->r[25]+0x000000E8u); // 801B1C08
  c->r[4]=c->r[27]|c->r[27]; // 801B1C0C
  c->r[3]=c->r[1]+0x0000000Cu; // 801B1C10
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B1C14
  c->lr=0x801B1C1Cu; f_80365C7C(c); // 801B1C18
  cmps(c,0,(int32_t)c->r[3],0); // 801B1C1C
  c->r[29]=c->r[3]|c->r[3]; // 801B1C20
  if (!crb(c,2)) { goto L_801B1C44; } // 801B1C24
  c->r[3]=c->r[30]+0x000018B0u; // 801B1C28
  c->r[5]=c->r[31]+0x00001894u; // 801B1C2C
  c->r[4]=0u+0x00000029u; // 801B1C30
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1C34
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1C38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1C3C
  c->lr=0x801B1C44u; f_803444BC(c); // 801B1C40
L_801B1C44:;
  {uint32_t ea=c->r[24]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1C44
  {uint32_t ea=c->r[29]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1C48
  fcmp(c,0,c->f[1],c->f[0]); // 801B1C4C
  if (!crb(c,0)) { goto L_801B1C80; } // 801B1C50
  cmps(c,0,(int32_t)c->r[29],0); // 801B1C54
  if (!crb(c,2)) { goto L_801B1C78; } // 801B1C58
  c->r[3]=c->r[30]+0x000018B0u; // 801B1C5C
  c->r[5]=c->r[31]+0x00001894u; // 801B1C60
  c->r[4]=0u+0x00000029u; // 801B1C64
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1C68
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1C6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1C70
  c->lr=0x801B1C78u; f_803444BC(c); // 801B1C74
L_801B1C78:;
  {uint32_t ea=c->r[29]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1C78
  {uint32_t ea=c->r[24]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B1C7C
L_801B1C80:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B1C80
  if (!crb(c,2)) { goto L_801B1CA4; } // 801B1C84
  c->r[3]=c->r[30]+0x000018B0u; // 801B1C88
  c->r[5]=c->r[31]+0x00001894u; // 801B1C8C
  c->r[4]=0u+0x00000029u; // 801B1C90
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1C94
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1C98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1C9C
  c->lr=0x801B1CA4u; f_803444BC(c); // 801B1CA0
L_801B1CA4:;
  {uint32_t ea=c->r[24]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1CA4
  c->r[28]=c->r[29]+0x00000054u; // 801B1CA8
  {uint32_t ea=c->r[29]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1CAC
  fcmp(c,0,c->f[1],c->f[0]); // 801B1CB0
  if (!crb(c,0)) { goto L_801B1CE4; } // 801B1CB4
  cmps(c,0,(int32_t)c->r[29],0); // 801B1CB8
  if (!crb(c,2)) { goto L_801B1CDC; } // 801B1CBC
  c->r[3]=c->r[30]+0x000018B0u; // 801B1CC0
  c->r[5]=c->r[31]+0x00001894u; // 801B1CC4
  c->r[4]=0u+0x00000029u; // 801B1CC8
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1CCC
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1CD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1CD4
  c->lr=0x801B1CDCu; f_803444BC(c); // 801B1CD8
L_801B1CDC:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1CDC
  {uint32_t ea=c->r[24]+0x00000020u; WF32(ea,c->f[0]);} // 801B1CE0
L_801B1CE4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B1CE4
  if (!crb(c,2)) { goto L_801B1D08; } // 801B1CE8
  c->r[3]=c->r[30]+0x000018B0u; // 801B1CEC
  c->r[5]=c->r[31]+0x00001894u; // 801B1CF0
  c->r[4]=0u+0x00000029u; // 801B1CF4
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1CF8
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1CFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1D00
  c->lr=0x801B1D08u; f_803444BC(c); // 801B1D04
L_801B1D08:;
  {uint32_t ea=c->r[24]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1D08
  c->r[28]=c->r[29]+0x00000058u; // 801B1D0C
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1D10
  fcmp(c,0,c->f[1],c->f[0]); // 801B1D14
  if (!crb(c,0)) { goto L_801B1D48; } // 801B1D18
  cmps(c,0,(int32_t)c->r[29],0); // 801B1D1C
  if (!crb(c,2)) { goto L_801B1D40; } // 801B1D20
  c->r[3]=c->r[30]+0x000018B0u; // 801B1D24
  c->r[5]=c->r[31]+0x00001894u; // 801B1D28
  c->r[4]=0u+0x00000029u; // 801B1D2C
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1D30
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1D34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1D38
  c->lr=0x801B1D40u; f_803444BC(c); // 801B1D3C
L_801B1D40:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1D40
  {uint32_t ea=c->r[24]+0x00000024u; WF32(ea,c->f[0]);} // 801B1D44
L_801B1D48:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B1D48
  if (!crb(c,2)) { goto L_801B1D6C; } // 801B1D4C
  c->r[3]=c->r[30]+0x000018B0u; // 801B1D50
  c->r[5]=c->r[31]+0x00001894u; // 801B1D54
  c->r[4]=0u+0x00000029u; // 801B1D58
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1D5C
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1D60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1D64
  c->lr=0x801B1D6Cu; f_803444BC(c); // 801B1D68
L_801B1D6C:;
  {uint32_t ea=c->r[24]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1D6C
  {uint32_t ea=c->r[29]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1D70
  fcmp(c,0,c->f[1],c->f[0]); // 801B1D74
  if (!crb(c,1)) { goto L_801B1DA8; } // 801B1D78
  cmps(c,0,(int32_t)c->r[29],0); // 801B1D7C
  if (!crb(c,2)) { goto L_801B1DA0; } // 801B1D80
  c->r[3]=c->r[30]+0x000018B0u; // 801B1D84
  c->r[5]=c->r[31]+0x00001894u; // 801B1D88
  c->r[4]=0u+0x00000029u; // 801B1D8C
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1D90
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1D94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1D98
  c->lr=0x801B1DA0u; f_803444BC(c); // 801B1D9C
L_801B1DA0:;
  {uint32_t ea=c->r[29]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1DA0
  {uint32_t ea=c->r[24]+0x00000010u; WF32(ea,c->f[0]);} // 801B1DA4
L_801B1DA8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B1DA8
  if (!crb(c,2)) { goto L_801B1DCC; } // 801B1DAC
  c->r[3]=c->r[30]+0x000018B0u; // 801B1DB0
  c->r[5]=c->r[31]+0x00001894u; // 801B1DB4
  c->r[4]=0u+0x00000029u; // 801B1DB8
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1DBC
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1DC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1DC4
  c->lr=0x801B1DCCu; f_803444BC(c); // 801B1DC8
L_801B1DCC:;
  {uint32_t ea=c->r[24]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1DCC
  c->r[28]=c->r[29]+0x00000048u; // 801B1DD0
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1DD4
  fcmp(c,0,c->f[1],c->f[0]); // 801B1DD8
  if (!crb(c,1)) { goto L_801B1E0C; } // 801B1DDC
  cmps(c,0,(int32_t)c->r[29],0); // 801B1DE0
  if (!crb(c,2)) { goto L_801B1E04; } // 801B1DE4
  c->r[3]=c->r[30]+0x000018B0u; // 801B1DE8
  c->r[5]=c->r[31]+0x00001894u; // 801B1DEC
  c->r[4]=0u+0x00000029u; // 801B1DF0
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1DF4
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1DFC
  c->lr=0x801B1E04u; f_803444BC(c); // 801B1E00
L_801B1E04:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1E04
  {uint32_t ea=c->r[24]+0x00000014u; WF32(ea,c->f[0]);} // 801B1E08
L_801B1E0C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B1E0C
  if (!crb(c,2)) { goto L_801B1E30; } // 801B1E10
  c->r[3]=c->r[30]+0x000018B0u; // 801B1E14
  c->r[5]=c->r[31]+0x00001894u; // 801B1E18
  c->r[4]=0u+0x00000029u; // 801B1E1C
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1E20
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1E24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1E28
  c->lr=0x801B1E30u; f_803444BC(c); // 801B1E2C
L_801B1E30:;
  {uint32_t ea=c->r[24]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1E30
  c->r[28]=c->r[29]+0x0000004Cu; // 801B1E34
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1E38
  fcmp(c,0,c->f[1],c->f[0]); // 801B1E3C
  if (!crb(c,1)) { goto L_801B1E70; } // 801B1E40
  cmps(c,0,(int32_t)c->r[29],0); // 801B1E44
  if (!crb(c,2)) { goto L_801B1E68; } // 801B1E48
  c->r[3]=c->r[30]+0x000018B0u; // 801B1E4C
  c->r[5]=c->r[31]+0x00001894u; // 801B1E50
  c->r[4]=0u+0x00000029u; // 801B1E54
  c->r[6]=c->r[13]+0xFFFF8048u; // 801B1E58
  c->r[7]=c->r[13]+0xFFFF8780u; // 801B1E5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1E60
  c->lr=0x801B1E68u; f_803444BC(c); // 801B1E64
L_801B1E68:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1E68
  {uint32_t ea=c->r[24]+0x00000018u; WF32(ea,c->f[0]);} // 801B1E6C
L_801B1E70:;
  c->r[27]=c->r[27]+0x00000001u; // 801B1E70
L_801B1E74:;
  c->r[0]=R32(c->r[25]+0x000000E8u); // 801B1E74
  c->r[3]=c->r[1]+0x00000008u; // 801B1E78
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B1E7C
  c->lr=0x801B1E84u; f_80365CD0(c); // 801B1E80
  cmpu(c,0,c->r[27],c->r[3]); // 801B1E84
  if (crb(c,0)) { IRQCHK(c); goto L_801B1C08; } // 801B1E88
  {uint32_t ea=c->r[24]+0x00000010u; psq_load(c,0,ea,0,0);} // 801B1E8C
  {uint32_t ea=c->r[24]+0x0000001Cu; psq_load(c,1,ea,0,0);} // 801B1E90
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801B1E94
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,0,ea,0,0);} // 801B1E98
  {uint32_t ea=c->r[24]+0x00000018u; psq_load(c,0,ea,1,0);} // 801B1E9C
  {uint32_t ea=c->r[24]+0x00000024u; psq_load(c,1,ea,1,0);} // 801B1EA0
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801B1EA4
  {uint32_t ea=c->r[1]+0x00000024u; psq_store(c,0,ea,1,0);} // 801B1EA8
  {uint32_t ea=c->r[2]+0xFFFFAF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1EAC
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,1,ea,0,0);} // 801B1EB0
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801B1EB4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,1,ea,0,0);} // 801B1EB8
  {uint32_t ea=c->r[1]+0x00000024u; psq_load(c,1,ea,1,0);} // 801B1EBC
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801B1EC0
  {uint32_t ea=c->r[1]+0x00000030u; psq_store(c,1,ea,1,0);} // 801B1EC4
  c->r[3]=c->r[1]+0x00000010u; // 801B1EC8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B1ECC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1ED0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1ED4
  {uint32_t ea=c->r[24]+0x00000028u; WF32(ea,c->f[2]);} // 801B1ED8
  {uint32_t ea=c->r[24]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B1EDC
  {uint32_t ea=c->r[24]+0x00000030u; WF32(ea,c->f[0]);} // 801B1EE0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801B1EE4
  {uint32_t ea=c->r[24]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1EE8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801B1EEC
  {uint32_t ea=c->r[24]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1EF0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801B1EF4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 801B1EF8
  {uint32_t ea=c->r[24]+0x00000010u; psq_load(c,0,ea,0,0);} // 801B1EFC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801B1F00
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801B1F04
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 801B1F08
  {uint32_t ea=c->r[24]+0x00000018u; psq_load(c,0,ea,1,0);} // 801B1F0C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801B1F10
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 801B1F14
  c->lr=0x801B1F1Cu; f_802657AC(c); // 801B1F18
  {uint32_t ea=c->r[24]+0x00000034u; WF32(ea,c->f[1]);} // 801B1F1C
  c->r[3]=c->r[25]|c->r[25]; // 801B1F20
  c->r[4]=0u+0x00000010u; // 801B1F24
  c->lr=0x801B1F2Cu; f_8038063C(c); // 801B1F28
  c->r[3]=c->r[25]|c->r[25]; // 801B1F2C
  c->r[4]=0u+0x00000020u; // 801B1F30
  c->lr=0x801B1F38u; f_8038063C(c); // 801B1F34
  c->r[3]=c->r[25]|c->r[25]; // 801B1F38
  c->r[4]=0u+0x00000001u; // 801B1F3C
  c->lr=0x801B1F44u; f_803805FC(c); // 801B1F40
  W32(c->r[25]+0x000000D4u,c->r[24]); // 801B1F44
  c->r[3]=0u+0x80470000u; // 801B1F48
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801B1F4C
  {uint32_t ea=c->r[24]+0x00000004u; WF32(ea,c->f[29]);} // 801B1F50
  {uint32_t ea=c->r[24]+0x00000008u; WF32(ea,c->f[30]);} // 801B1F54
  {uint32_t ea=c->r[24]+0x0000000Cu; WF32(ea,c->f[31]);} // 801B1F58
  W32(c->r[24]+0x00000038u,c->r[26]); // 801B1F5C
  c->lr=0x801B1F64u; f_80066C38(c); // 801B1F60
  c->r[6]=0u+0x00010000u; // 801B1F64
  c->r[5]=c->r[3]|c->r[3]; // 801B1F68
  c->r[4]=c->r[25]|c->r[25]; // 801B1F6C
  c->r[3]=c->r[13]+0xFFFF9600u; // 801B1F70
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801B1F74
  c->lr=0x801B1F7Cu; f_800A74A0(c); // 801B1F78
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801B1F7C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801B1F80
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 801B1F84
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 801B1F88
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 801B1F8C
  c->r[11]=c->r[1]+0x00000060u; // 801B1F90
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 801B1F94
  c->lr=0x801B1F9Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1F98
  c->r[0]=R32(c->r[1]+0x00000094u); // 801B1F9C
  c->lr=c->r[0]; // 801B1FA0
  c->r[1]=c->r[1]+0x00000090u; // 801B1FA4
  return; // 801B1FA8
}

// fn_801B1FAC
void f_801B1FAC(Ctx* __restrict c) {
  trace_call(0x801B1FACu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1FAC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801B1FB0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1FB4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801B1FB8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B1FBC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801B1FC0
  return; // 801B1FC4
}

// fn_801B1FC8
void f_801B1FC8(Ctx* __restrict c) {
  trace_call(0x801B1FC8u);
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801B1FC8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801B1FCC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 801B1FD0
  return; // 801B1FD4
}

// fn_801B1FD8
void f_801B1FD8(Ctx* __restrict c) {
  trace_call(0x801B1FD8u);
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801B1FD8
  return; // 801B1FDC
}

// fn_801B1FE0
void f_801B1FE0(Ctx* __restrict c) {
  trace_call(0x801B1FE0u);
  c->r[3]=c->r[3]+0x00000004u; // 801B1FE0
  return; // 801B1FE4
}

// fn_801B1FE8
void f_801B1FE8(Ctx* __restrict c) {
  trace_call(0x801B1FE8u);
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B1FE8
  return; // 801B1FEC
}

// fn_801B1FF0
void f_801B1FF0(Ctx* __restrict c) {
  trace_call(0x801B1FF0u);
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B1FF0
  cmps(c,0,(int32_t)c->r[0],1); // 801B1FF4
  if (crb(c,2)) { goto L_801B2014; } // 801B1FF8
  if (!crb(c,0)) return; // 801B1FFC
  cmps(c,0,(int32_t)c->r[0],0); // 801B2000
  if (crb(c,0)) return; // 801B2004
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2008
  c->r[4]=c->r[3]+0x00000004u; // 801B200C
  f_801B2050(c); return; // 801B2010
L_801B2014:;
  c->r[4]=c->r[3]+0x00000004u; // 801B2014
  f_801B21AC(c); return; // 801B2018
  return; // 801B201C
}

// fn_801B2020
void f_801B2020(Ctx* __restrict c) {
  trace_call(0x801B2020u);
  c->r[0]=R32(c->r[3]+0x00000038u); // 801B2020
  cmps(c,0,(int32_t)c->r[0],1); // 801B2024
  if (crb(c,2)) { goto L_801B2044; } // 801B2028
  if (!crb(c,0)) return; // 801B202C
  cmps(c,0,(int32_t)c->r[0],0); // 801B2030
  if (crb(c,0)) return; // 801B2034
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2038
  c->r[4]=c->r[3]+0x00000004u; // 801B203C
  f_801B2050(c); return; // 801B2040
L_801B2044:;
  c->r[4]=c->r[3]+0x00000004u; // 801B2044
  f_801B21AC(c); return; // 801B2048
  return; // 801B204C
}

// fn_801B2050
void f_801B2050(Ctx* __restrict c) {
  trace_call(0x801B2050u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2050
  c->r[0]=c->lr; // 801B2054
  c->r[3]=0u+0x80440000u; // 801B2058
  W32(c->r[1]+0x00000164u,c->r[0]); // 801B205C
  c->r[3]=c->r[3]+0xFFFFA720u; // 801B2060
  c->r[0]=0u+0x00000000u; // 801B2064
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[31]);} // 801B2068
  c->f[31]=c->f[1]; // 801B206C
  W32(c->r[1]+0x00000154u,c->r[31]); // 801B2070
  c->r[31]=0u+0x80470000u; // 801B2074
  W32(c->r[1]+0x00000150u,c->r[30]); // 801B2078
  W32(c->r[1]+0x0000014Cu,c->r[29]); // 801B207C
  c->r[29]=c->r[4]|c->r[4]; // 801B2080
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B2084
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B2088
  c->r[30]=c->r[3]+0x00002878u; // 801B208C
  c->r[3]=c->r[31]+0xFFFF94F8u; // 801B2090
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B2094
  W32(c->r[1]+0x000000B8u,c->r[0]); // 801B2098
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801B209C
  c->lr=0x801B20A4u; f_80066C38(c); // 801B20A0
  c->r[5]=c->r[3]|c->r[3]; // 801B20A4
  c->r[4]=c->r[30]|c->r[30]; // 801B20A8
  c->r[3]=c->r[1]+0x00000018u; // 801B20AC
  c->lr=0x801B20B4u; f_8011FB30(c); // 801B20B0
  c->r[30]=c->r[1]+0x00000030u; // 801B20B4
  c->r[6]=c->r[1]+0x00000074u; // 801B20B8
  c->r[8]=c->r[1]+0x000000B8u; // 801B20BC
  c->r[0]=c->r[1]+0x000000FCu; // 801B20C0
  c->r[7]=0u+0x80400000u; // 801B20C4
  W32(c->r[1]+0x00000024u,c->r[6]); // 801B20C8
  c->f[1]=c->f[31]; // 801B20CC
  c->r[3]=c->r[29]|c->r[29]; // 801B20D0
  W32(c->r[1]+0x00000020u,c->r[30]); // 801B20D4
  c->r[4]=c->r[1]+0x00000020u; // 801B20D8
  c->r[5]=c->r[1]+0x00000008u; // 801B20DC
  c->r[7]=c->r[7]+0xFFFF97D8u; // 801B20E0
  W32(c->r[1]+0x00000028u,c->r[8]); // 801B20E4
  c->r[6]=0u+0x00000000u; // 801B20E8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801B20EC
  c->lr=0x801B20F4u; f_8014061C(c); // 801B20F0
  c->r[4]=R32(c->r[1]+0x00000018u); // 801B20F4
  c->r[3]=c->r[31]+0xFFFF94F8u; // 801B20F8
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801B20FC
  W32(c->r[1]+0x00000010u,c->r[4]); // 801B2100
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2104
  c->lr=0x801B210Cu; f_80066C5C(c); // 801B2108
  c->r[4]=0u+0x80510000u; // 801B210C
  c->r[7]=c->r[3]|c->r[3]; // 801B2110
  c->r[3]=c->r[4]+0x0000373Cu; // 801B2114
  c->r[5]=c->r[1]+0x00000020u; // 801B2118
  c->r[4]=c->r[1]+0x00000010u; // 801B211C
  c->r[6]=c->r[1]+0x00000008u; // 801B2120
  c->lr=0x801B2128u; f_8016BB5C(c); // 801B2124
  c->r[29]=0u+0x00000000u; // 801B2128
L_801B212C:;
  c->r[3]=c->r[31]+0xFFFF94F8u; // 801B212C
  c->lr=0x801B2134u; f_80066C5C(c); // 801B2130
  c->r[0]=c->r[3]|c->r[3]; // 801B2134
  c->r[3]=c->r[30]|c->r[30]; // 801B2138
  c->r[4]=c->r[29]+c->r[0]; // 801B213C
  c->lr=0x801B2144u; f_80377484(c); // 801B2140
  c->r[29]=c->r[29]+0x00000001u; // 801B2144
  c->r[30]=c->r[30]+0x00000044u; // 801B2148
  cmps(c,0,(int32_t)c->r[29],4); // 801B214C
  if (crb(c,0)) { IRQCHK(c); goto L_801B212C; } // 801B2150
  c->r[0]=R32(c->r[1]+0x00000030u); // 801B2154
  c->r[31]=0u+0x80470000u; // 801B2158
  c->r[3]=c->r[31]+0xFFFF94F8u; // 801B215C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B2160
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B2164
  c->lr=0x801B216Cu; f_80066C84(c); // 801B2168
  c->r[4]=c->r[3]|c->r[3]; // 801B216C
  c->r[3]=c->r[1]+0x00000008u; // 801B2170
  c->lr=0x801B2178u; f_803774CC(c); // 801B2174
  c->r[3]=c->r[31]+0xFFFF94F8u; // 801B2178
  c->lr=0x801B2180u; f_80066C38(c); // 801B217C
  c->r[4]=c->r[3]|c->r[3]; // 801B2180
  c->r[3]=c->r[1]+0x00000018u; // 801B2184
  c->lr=0x801B218Cu; f_803773CC(c); // 801B2188
  c->r[0]=R32(c->r[1]+0x00000164u); // 801B218C
  {uint32_t ea=c->r[1]+0x00000158u; c->f[31]=RF64(ea);} // 801B2190
  c->r[31]=R32(c->r[1]+0x00000154u); // 801B2194
  c->r[30]=R32(c->r[1]+0x00000150u); // 801B2198
  c->r[29]=R32(c->r[1]+0x0000014Cu); // 801B219C
  c->lr=c->r[0]; // 801B21A0
  c->r[1]=c->r[1]+0x00000160u; // 801B21A4
  return; // 801B21A8
}

// fn_801B21AC
void f_801B21AC(Ctx* __restrict c) {
  trace_call(0x801B21ACu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B21AC
  c->r[0]=c->lr; // 801B21B0
  c->r[3]=0u+0x80440000u; // 801B21B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801B21B8
  c->r[3]=c->r[3]+0xFFFFA720u; // 801B21BC
  c->r[0]=0u+0x00000000u; // 801B21C0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801B21C4
  W32(c->r[1]+0x00000078u,c->r[30]); // 801B21C8
  c->r[30]=0u+0x80470000u; // 801B21CC
  W32(c->r[1]+0x00000074u,c->r[29]); // 801B21D0
  c->r[29]=c->r[4]|c->r[4]; // 801B21D4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B21D8
  c->r[3]=c->r[30]+0xFFFF94F8u; // 801B21DC
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B21E0
  c->r[31]=c->r[5]+0x00002878u; // 801B21E4
  c->lr=0x801B21ECu; f_80066C38(c); // 801B21E8
  c->r[5]=c->r[3]|c->r[3]; // 801B21EC
  c->r[4]=c->r[31]|c->r[31]; // 801B21F0
  c->r[3]=c->r[1]+0x00000018u; // 801B21F4
  c->lr=0x801B21FCu; f_8011FB30(c); // 801B21F8
  c->r[31]=c->r[1]+0x00000020u; // 801B21FC
  c->r[3]=c->r[29]|c->r[29]; // 801B2200
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2204
  c->r[4]=c->r[1]+0x0000000Cu; // 801B2208
  c->r[5]=c->r[1]+0x00000008u; // 801B220C
  c->r[6]=0u+0x00000000u; // 801B2210
  c->r[7]=0u+0x00000000u; // 801B2214
  c->r[8]=0u+0xFFFFFFFFu; // 801B2218
  c->lr=0x801B2220u; f_80141308(c); // 801B221C
  c->r[4]=R32(c->r[1]+0x00000018u); // 801B2220
  c->r[3]=c->r[30]+0xFFFF94F8u; // 801B2224
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801B2228
  W32(c->r[1]+0x00000010u,c->r[4]); // 801B222C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2230
  c->lr=0x801B2238u; f_80066C5C(c); // 801B2234
  c->r[4]=0u+0x80510000u; // 801B2238
  c->r[8]=c->r[3]|c->r[3]; // 801B223C
  c->r[3]=c->r[4]+0x0000373Cu; // 801B2240
  c->r[5]=c->r[1]+0x0000000Cu; // 801B2244
  c->r[4]=c->r[1]+0x00000010u; // 801B2248
  c->r[6]=c->r[1]+0x00000008u; // 801B224C
  c->r[7]=0u+0x00000001u; // 801B2250
  c->lr=0x801B2258u; f_8016BE04(c); // 801B2254
  c->r[3]=c->r[30]+0xFFFF94F8u; // 801B2258
  c->lr=0x801B2260u; f_80066C5C(c); // 801B225C
  c->r[4]=c->r[3]|c->r[3]; // 801B2260
  c->r[3]=c->r[31]|c->r[31]; // 801B2264
  c->lr=0x801B226Cu; f_80377484(c); // 801B2268
  c->r[0]=R32(c->r[1]+0x00000020u); // 801B226C
  c->r[31]=0u+0x00000001u; // 801B2270
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B2274
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B2278
L_801B227C:;
  c->r[3]=c->r[30]+0xFFFF94F8u; // 801B227C
  c->lr=0x801B2284u; f_80066C5C(c); // 801B2280
  c->r[0]=c->r[3]|c->r[3]; // 801B2284
  c->r[3]=c->r[1]+0x00000020u; // 801B2288
  c->r[4]=c->r[31]+c->r[0]; // 801B228C
  c->lr=0x801B2294u; f_80377484(c); // 801B2290
  c->r[31]=c->r[31]+0x00000001u; // 801B2294
  cmps(c,0,(int32_t)c->r[31],3); // 801B2298
  if (crb(c,0)) { IRQCHK(c); goto L_801B227C; } // 801B229C
  c->r[31]=0u+0x80470000u; // 801B22A0
  c->r[3]=c->r[31]+0xFFFF94F8u; // 801B22A4
  c->lr=0x801B22ACu; f_80066C84(c); // 801B22A8
  c->r[4]=c->r[3]|c->r[3]; // 801B22AC
  c->r[3]=c->r[1]+0x00000008u; // 801B22B0
  c->lr=0x801B22B8u; f_803774CC(c); // 801B22B4
  c->r[3]=c->r[31]+0xFFFF94F8u; // 801B22B8
  c->lr=0x801B22C0u; f_80066C38(c); // 801B22BC
  c->r[4]=c->r[3]|c->r[3]; // 801B22C0
  c->r[3]=c->r[1]+0x00000018u; // 801B22C4
  c->lr=0x801B22CCu; f_803773CC(c); // 801B22C8
  c->r[0]=R32(c->r[1]+0x00000084u); // 801B22CC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801B22D0
  c->r[30]=R32(c->r[1]+0x00000078u); // 801B22D4
  c->r[29]=R32(c->r[1]+0x00000074u); // 801B22D8
  c->lr=c->r[0]; // 801B22DC
  c->r[1]=c->r[1]+0x00000080u; // 801B22E0
  return; // 801B22E4
}

// fn_801B22E8
void f_801B22E8(Ctx* __restrict c) {
  trace_call(0x801B22E8u);
  {uint32_t ea=c->r[2]+0xFFFFAF68u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B22E8
  c->r[4]=0u+0x80400000u; // 801B22EC
  {uint32_t ea=c->r[2]+0xFFFFAF6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B22F0
  c->r[0]=0u+0x00000000u; // 801B22F4
  {uint32_t ea=c->r[2]+0xFFFFAF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B22F8
  c->r[4]=c->r[4]+0xFFFFECA8u; // 801B22FC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 801B2300
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801B2304
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801B2308
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801B230C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801B2310
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801B2314
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B2318
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801B231C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801B2320
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 801B2324
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 801B2328
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 801B232C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 801B2330
  W32(c->r[3]+0x00000038u,c->r[0]); // 801B2334
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B2338
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 801B233C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 801B2340
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 801B2344
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[2]);} // 801B2348
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[2]);} // 801B234C
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[2]);} // 801B2350
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[2]);} // 801B2354
  return; // 801B2358
}

// fn_801B235C
void f_801B235C(Ctx* __restrict c) {
  trace_call(0x801B235Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B235C
  c->r[0]=c->lr; // 801B2360
  cmps(c,0,(int32_t)c->r[3],0); // 801B2364
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B236C
  c->r[31]=c->r[3]|c->r[3]; // 801B2370
  if (crb(c,2)) { goto L_801B2384; } // 801B2374
  cmps(c,0,(int32_t)c->r[4],0); // 801B2378
  if (!crb(c,1)) { goto L_801B2384; } // 801B237C
  c->lr=0x801B2384u; f_802896EC(c); // 801B2380
L_801B2384:;
  c->r[3]=c->r[31]|c->r[31]; // 801B2384
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2388
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B238C
  c->lr=c->r[0]; // 801B2390
  c->r[1]=c->r[1]+0x00000010u; // 801B2394
  return; // 801B2398
}

// fn_801B239C
void f_801B239C(Ctx* __restrict c) {
  trace_call(0x801B239Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B239C
  c->r[0]=c->lr; // 801B23A0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B23A4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801B23A8
  c->r[31]=c->r[3]|c->r[3]; // 801B23AC
  c->lr=0x801B23B4u; f_801B1B94(c); // 801B23B0
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,0,0);} // 801B23B4
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,0,0);} // 801B23B8
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801B23BC
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,0,ea,0,0);} // 801B23C0
  {uint32_t ea=c->r[31]+0x00000024u; psq_load(c,0,ea,1,0);} // 801B23C4
  {uint32_t ea=c->r[31]+0x00000018u; psq_load(c,1,ea,1,0);} // 801B23C8
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801B23CC
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,0,ea,1,0);} // 801B23D0
  {uint32_t ea=c->r[2]+0xFFFFAF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B23D4
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 801B23D8
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801B23DC
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 801B23E0
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 801B23E4
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 801B23E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,1,ea,1,0);} // 801B23EC
  {uint32_t ea=c->r[31]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B23F0
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B23F4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B23F8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B23FC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B2400
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B2404
  fcmp(c,0,c->f[6],c->f[5]); // 801B2408
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[6]);} // 801B240C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[5]);} // 801B2410
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[4]);} // 801B2414
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[3]);} // 801B2418
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[2]);} // 801B241C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 801B2420
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[3]);} // 801B2424
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[2]);} // 801B2428
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 801B242C
  if (!crb(c,1)) { goto L_801B2464; } // 801B2430
  fcmp(c,0,c->f[6],c->f[4]); // 801B2434
  if (!crb(c,1)) { goto L_801B2450; } // 801B2438
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[6]); // 801B243C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[6]); // 801B2440
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B2444
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 801B2448
  goto L_801B2490; // 801B244C
L_801B2450:;
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 801B2450
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 801B2454
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 801B2458
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 801B245C
  goto L_801B2490; // 801B2460
L_801B2464:;
  fcmp(c,0,c->f[5],c->f[4]); // 801B2464
  if (!crb(c,1)) { goto L_801B2480; } // 801B2468
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[5]); // 801B246C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[5]); // 801B2470
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 801B2474
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 801B2478
  goto L_801B2490; // 801B247C
L_801B2480:;
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 801B2480
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 801B2484
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 801B2488
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 801B248C
L_801B2490:;
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B2490
  c->r[3]=c->r[1]+0x00000008u; // 801B2494
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2498
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B249C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 801B24A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801B24A4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B24A8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801B24AC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B24B0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801B24B4
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 801B24B8
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,0,ea,0,0);} // 801B24BC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801B24C0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801B24C4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 801B24C8
  {uint32_t ea=c->r[31]+0x00000018u; psq_load(c,0,ea,1,0);} // 801B24CC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801B24D0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 801B24D4
  c->lr=0x801B24DCu; f_802657AC(c); // 801B24D8
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[1]);} // 801B24DC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801B24E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B24E4
  c->lr=c->r[0]; // 801B24E8
  c->r[1]=c->r[1]+0x00000040u; // 801B24EC
  return; // 801B24F0
}

// fn_801B24F4
void f_801B24F4(Ctx* __restrict c) {
  trace_call(0x801B24F4u);
  c->r[3]=c->r[3]+0x0000003Cu; // 801B24F4
  return; // 801B24F8
}

// fn_801B24FC
void f_801B24FC(Ctx* __restrict c) {
  trace_call(0x801B24FCu);
  c->r[4]=0u+0x80540000u; // 801B24FC
  {uint32_t ea=c->r[2]+0xFFFFAF68u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2500
  c->r[3]=c->r[4]+0xFFFFC730u; // 801B2504
  {uint32_t ea=c->r[2]+0xFFFFAF78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2508
  {uint32_t ea=c->r[4]+0xFFFFC730u; WF32(ea,c->f[1]);} // 801B250C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801B2510
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801B2514
  return; // 801B2518
}

// fn_801B251C
void f_801B251C(Ctx* __restrict c) {
  trace_call(0x801B251Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B251C
  c->r[0]=c->lr; // 801B2520
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2524
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B2528
  c->r[31]=0u+0x80400000u; // 801B252C
  c->r[29]=c->r[3]|c->r[3]; // 801B2530
  c->r[30]=c->r[4]|c->r[4]; // 801B2534
  c->r[31]=c->r[31]+0xFFFFECF0u; // 801B2538
  goto L_801B25A4; // 801B253C
L_801B2540:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B2540
  if (crb(c,2)) { goto L_801B257C; } // 801B2544
  c->r[4]=c->r[29]|c->r[29]; // 801B2548
  c->lr=0x801B2550u; f_80293554(c); // 801B254C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2550
  if (!crb(c,2)) { goto L_801B25A0; } // 801B2554
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B2558
  cmps(c,0,(int32_t)c->r[3],0); // 801B255C
  if (crb(c,2)) { goto L_801B2574; } // 801B2560
  c->r[4]=c->r[30]|c->r[30]; // 801B2564
  c->lr=0x801B256Cu; f_80293554(c); // 801B2568
  cmps(c,0,(int32_t)c->r[3],0); // 801B256C
  if (!crb(c,2)) { goto L_801B25A0; } // 801B2570
L_801B2574:;
  c->r[3]=c->r[31]|c->r[31]; // 801B2574
  goto L_801B25C8; // 801B2578
L_801B257C:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 801B257C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2580
  if (crb(c,2)) { goto L_801B25A0; } // 801B2584
  c->r[4]=c->r[30]|c->r[30]; // 801B2588
  c->lr=0x801B2590u; f_80293554(c); // 801B258C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2590
  if (!crb(c,2)) { goto L_801B25A0; } // 801B2594
  c->r[3]=c->r[31]|c->r[31]; // 801B2598
  goto L_801B25C8; // 801B259C
L_801B25A0:;
  c->r[31]=c->r[31]+0x0000003Cu; // 801B25A0
L_801B25A4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B25A4
  cmps(c,0,(int32_t)c->r[3],0); // 801B25A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2540; } // 801B25AC
  c->r[31]=0u+0x80400000u; // 801B25B0
  c->r[4]=c->r[30]|c->r[30]; // 801B25B4
  c->r[31]=c->r[31]+0x000018C4u; // 801B25B8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B25BC
  c->lr=0x801B25C4u; f_802933D8(c); // 801B25C0
  c->r[3]=c->r[31]|c->r[31]; // 801B25C4
L_801B25C8:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B25C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B25CC
  c->lr=c->r[0]; // 801B25D0
  c->r[1]=c->r[1]+0x00000020u; // 801B25D4
  return; // 801B25D8
}

// fn_801B25DC
void f_801B25DC(Ctx* __restrict c) {
  trace_call(0x801B25DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B25DC
  c->r[0]=c->lr; // 801B25E0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B25E4
  c->r[11]=c->r[1]+0x00000040u; // 801B25E8
  c->lr=0x801B25F0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B25EC
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[1]);} // 801B25F0
  c->r[31]=c->r[4]|c->r[4]; // 801B25F4
  c->r[30]=c->r[3]|c->r[3]; // 801B25F8
  {uint32_t ea=c->r[3]+0x000003A8u; WF32(ea,c->f[1]);} // 801B25FC
  c->r[10]=R8(c->r[2]+0xFFFFB3AFu); // 801B2600
  c->r[9]=R8(c->r[2]+0xFFFFB3B0u); // 801B2604
  c->r[8]=R8(c->r[2]+0xFFFFB3B1u); // 801B2608
  c->r[7]=R8(c->r[2]+0xFFFFB3B2u); // 801B260C
  c->r[6]=R8(c->r[2]+0xFFFFB3B3u); // 801B2610
  c->r[5]=R8(c->r[2]+0xFFFFB3B4u); // 801B2614
  c->r[4]=R8(c->r[2]+0xFFFFB3B5u); // 801B2618
  c->r[0]=R8(c->r[2]+0xFFFFB3B6u); // 801B261C
  W8(c->r[1]+0x00000008u,c->r[10]); // 801B2620
  W8(c->r[1]+0x00000009u,c->r[9]); // 801B2624
  W8(c->r[1]+0x0000000Au,c->r[8]); // 801B2628
  W8(c->r[1]+0x0000000Bu,c->r[7]); // 801B262C
  W8(c->r[1]+0x0000000Cu,c->r[6]); // 801B2630
  W8(c->r[1]+0x0000000Du,c->r[5]); // 801B2634
  W8(c->r[1]+0x0000000Eu,c->r[4]); // 801B2638
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B263C
  c->r[12]=R32(c->r[3]+0x00000010u); // 801B2640
  c->r[12]=R32(c->r[12]+0x00000338u); // 801B2644
  c->ctr=c->r[12]; // 801B2648
  if (true) { c->lr=0x801B2650u; dispatch(c,c->ctr); } // 801B264C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2650
  if (crb(c,2)) { goto L_801B2728; } // 801B2654
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B2658
  c->r[3]=c->r[30]|c->r[30]; // 801B265C
  c->r[12]=R32(c->r[12]+0x00000338u); // 801B2660
  c->ctr=c->r[12]; // 801B2664
  if (true) { c->lr=0x801B266Cu; dispatch(c,c->ctr); } // 801B2668
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B266C
  c->r[29]=R32(c->r[3]+0x000000E8u); // 801B2670
  cmps(c,0,(int32_t)c->r[29],0); // 801B2674
  if (!crb(c,2)) { goto L_801B26A0; } // 801B2678
  c->r[3]=0u+0x803F0000u; // 801B267C
  c->r[5]=0u+0x803F0000u; // 801B2680
  c->r[3]=c->r[3]+0x000017A8u; // 801B2684
  c->r[4]=0u+0x0000006Du; // 801B2688
  c->r[5]=c->r[5]+0x00001788u; // 801B268C
  c->r[6]=c->r[13]+0xFFFF8040u; // 801B2690
  c->r[7]=c->r[13]+0xFFFF878Cu; // 801B2694
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2698
  c->lr=0x801B26A0u; f_803444BC(c); // 801B269C
L_801B26A0:;
  c->r[0]=R32(c->r[29]+0x0000003Cu); // 801B26A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B26A4
  if (crb(c,2)) { goto L_801B26B4; } // 801B26A8
  c->r[5]=c->r[29]+c->r[0]; // 801B26AC
  goto L_801B26B8; // 801B26B0
L_801B26B4:;
  c->r[5]=0u+0x00000000u; // 801B26B4
L_801B26B8:;
  c->r[4]=0u+0x80430000u; // 801B26B8
  c->r[0]=0u+0x00000008u; // 801B26BC
  c->r[4]=c->r[4]+0xFFFF8788u; // 801B26C0
  c->r[3]=c->r[1]+0x00000008u; // 801B26C4
  c->r[7]=R32(c->r[4]+0x00000038u); // 801B26C8
  c->r[8]=0u+0x00000000u; // 801B26CC
  c->ctr=c->r[0]; // 801B26D0
L_801B26D4:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801B26D4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[6]); // 801B26D8
  if (!crb(c,2)) { goto L_801B26EC; } // 801B26DC
  c->r[3]=c->r[1]+0x00000008u; // 801B26E0
  W8(c->r[3]+c->r[8],c->r[0]); // 801B26E4
  goto L_801B2728; // 801B26E8
L_801B26EC:;
  c->r[0]=0u+0x00000000u; // 801B26EC
  if (crb(c,0)) { goto L_801B26FC; } // 801B26F0
  cmps(c,0,(int32_t)c->r[6],256); // 801B26F4
  if (crb(c,0)) { goto L_801B2700; } // 801B26F8
L_801B26FC:;
  c->r[0]=0u+0x00000001u; // 801B26FC
L_801B2700:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B2700
  if (crb(c,2)) { goto L_801B270C; } // 801B2704
  goto L_801B2714; // 801B2708
L_801B270C:;
  c->r[4]=R32(c->r[7]+0x0000000Cu); // 801B270C
  c->r[6]=R8(c->r[4]+c->r[6]); // 801B2710
L_801B2714:;
  W8(c->r[3]+0x00000000u,c->r[6]); // 801B2714
  c->r[8]=c->r[8]+0x00000001u; // 801B2718
  c->r[3]=c->r[3]+0x00000001u; // 801B271C
  c->r[5]=c->r[5]+0x00000001u; // 801B2720
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B26D4; } // 801B2724
L_801B2728:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B2728
  cmps(c,0,(int32_t)c->r[0],122); // 801B272C
  if (!crb(c,2)) { goto L_801B2750; } // 801B2730
  c->r[3]=R8(c->r[31]+0x00000001u); // 801B2734
  c->r[0]=c->r[3]+0xFFFFFFCEu; // 801B2738
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B273C
  cmpu(c,0,c->r[0],0x00000001u); // 801B2740
  if (crb(c,1)) { goto L_801B2750; } // 801B2744
  c->r[31]=0u+0x803E0000u; // 801B2748
  c->r[31]=c->r[31]+0x000005DCu; // 801B274C
L_801B2750:;
  c->r[29]=0u+0x803E0000u; // 801B2750
  c->r[5]=c->r[31]|c->r[31]; // 801B2754
  c->r[29]=c->r[29]+0x000005DCu; // 801B2758
  c->r[3]=c->r[1]+0x0000001Cu; // 801B275C
  c->r[4]=c->r[29]+0x00000003u; // 801B2760
  c->r[6]=c->r[1]+0x00000008u; // 801B2764
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2768
  c->lr=0x801B2770u; f_80291CC4(c); // 801B276C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B2770
  c->r[4]=c->r[29]+0x00000008u; // 801B2774
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B2778
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B277C
  c->ctr=c->r[12]; // 801B2780
  if (true) { c->lr=0x801B2788u; dispatch(c,c->ctr); } // 801B2784
  cmps(c,0,(int32_t)c->r[3],0); // 801B2788
  c->r[29]=c->r[3]|c->r[3]; // 801B278C
  if (crb(c,2)) { goto L_801B28E8; } // 801B2790
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B2794
  c->r[0]=c->r[3]+0x8A920000u; // 801B2798
  cmpu(c,0,c->r[0],0x00006970u); // 801B279C
  if (crb(c,2)) { goto L_801B27A8; } // 801B27A0
  goto L_801B28E8; // 801B27A4
L_801B27A8:;
  c->r[4]=c->r[29]|c->r[29]; // 801B27A8
  c->r[3]=c->r[1]+0x00000010u; // 801B27AC
  c->lr=0x801B27B4u; f_8013BE40(c); // 801B27B0
  cmps(c,0,(int32_t)c->r[29],0); // 801B27B4
  if (crb(c,2)) { goto L_801B28E8; } // 801B27B8
  c->r[31]=R32(c->r[1]+0x00000014u); // 801B27BC
  goto L_801B28D4; // 801B27C0
L_801B27C4:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 801B27C4
  c->r[4]=c->r[1]+0x0000001Cu; // 801B27C8
  c->r[0]=R32(c->r[31]+0x00000008u); // 801B27CC
  c->r[3]=c->r[3]+c->r[0]; // 801B27D0
  c->lr=0x801B27D8u; f_80293554(c); // 801B27D4
  cmps(c,0,(int32_t)c->r[3],0); // 801B27D8
  if (!crb(c,2)) { goto L_801B28C8; } // 801B27DC
  c->r[0]=0u+0x00000000u; // 801B27E0
  c->r[3]=0u+0x64610000u; // 801B27E4
  c->r[4]=0u+0x72650000u; // 801B27E8
  W32(c->r[30]+0x00000498u,c->r[0]); // 801B27EC
  c->r[8]=c->r[31]+0x00000014u; // 801B27F0
  c->r[5]=c->r[31]+0x0000000Cu; // 801B27F4
  W32(c->r[30]+0x0000049Cu,c->r[0]); // 801B27F8
  c->r[7]=c->r[4]+0x00006664u; // 801B27FC
  c->r[6]=c->r[3]+0x00007461u; // 801B2800
  W32(c->r[30]+0x000004A0u,c->r[0]); // 801B2804
  W32(c->r[30]+0x000004A4u,c->r[0]); // 801B2808
  goto L_801B285C; // 801B280C
L_801B2810:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 801B2810
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[7]); // 801B2814
  if (crb(c,2)) { goto L_801B2834; } // 801B2818
  if (!crb(c,0)) { goto L_801B2850; } // 801B281C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801B2820
  if (crb(c,2)) { goto L_801B282C; } // 801B2824
  goto L_801B2850; // 801B2828
L_801B282C:;
  W32(c->r[30]+0x00000498u,c->r[8]); // 801B282C
  goto L_801B2850; // 801B2830
L_801B2834:;
  c->r[0]=c->r[8]+0x00000008u; // 801B2834
  W32(c->r[30]+0x0000049Cu,c->r[8]); // 801B2838
  W32(c->r[30]+0x000004A0u,c->r[0]); // 801B283C
  c->r[0]=R32(c->r[8]+0x00000004u); // 801B2840
  c->r[0]=sraw(c,c->r[0],2); // 801B2844
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801B2848
  W32(c->r[30]+0x000004A4u,c->r[0]); // 801B284C
L_801B2850:;
  c->r[0]=R32(c->r[8]+0x00000004u); // 801B2850
  c->r[3]=c->r[8]+c->r[0]; // 801B2854
  c->r[8]=c->r[3]+0x00000008u; // 801B2858
L_801B285C:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B285C
  c->r[4]=c->r[8]-c->r[5]; // 801B2860
  c->r[0]=c->r[3]+0x00000008u; // 801B2864
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B2868
  if (crb(c,0)) { IRQCHK(c); goto L_801B2810; } // 801B286C
  c->r[0]=0u+0x0000001Du; // 801B2870
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2874
  c->r[3]=0u+0x00000000u; // 801B2878
  c->r[4]=0u+0x00000000u; // 801B287C
  c->ctr=c->r[0]; // 801B2880
L_801B2884:;
  c->r[5]=R32(c->r[30]+0x000004A0u); // 801B2884
  c->r[0]=R32(c->r[30]+0x00000498u); // 801B2888
  c->r[5]=R32(c->r[5]+0x00000000u); // 801B288C
  c->r[0]=c->r[0]+c->r[5]; // 801B2890
  c->r[5]=c->r[0]+c->r[3]; // 801B2894
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B2898
  fcmp(c,0,c->f[2],c->f[1]); // 801B289C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801B28A0
  if (!crb(c,2)) { goto L_801B28B8; } // 801B28A4
  {uint32_t ea=c->r[30]+0x000003A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B28A8
  c->r[5]=c->r[30]+c->r[4]; // 801B28AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801B28B0
  {uint32_t ea=c->r[5]+0x000003ACu; WF32(ea,c->f[0]);} // 801B28B4
L_801B28B8:;
  c->r[3]=c->r[3]+0x00000008u; // 801B28B8
  c->r[4]=c->r[4]+0x00000004u; // 801B28BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2884; } // 801B28C0
  goto L_801B28E8; // 801B28C4
L_801B28C8:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B28C8
  c->r[3]=c->r[31]+c->r[0]; // 801B28CC
  c->r[31]=c->r[3]+0x00000008u; // 801B28D0
L_801B28D4:;
  c->r[4]=c->r[31]|c->r[31]; // 801B28D4
  c->r[3]=c->r[1]+0x00000010u; // 801B28D8
  c->lr=0x801B28E0u; f_800C6B48(c); // 801B28DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B28E0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B27C4; } // 801B28E4
L_801B28E8:;
  c->r[11]=c->r[1]+0x00000040u; // 801B28E8
  c->lr=0x801B28F0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B28EC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B28F0
  c->lr=c->r[0]; // 801B28F4
  c->r[1]=c->r[1]+0x00000040u; // 801B28F8
  return; // 801B28FC
}

// fn_801B2900
void f_801B2900(Ctx* __restrict c) {
  trace_call(0x801B2900u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2900
  c->r[0]=c->lr; // 801B2904
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801B2908
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801B290C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801B2910
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801B2914
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801B2918
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 801B291C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 801B2920
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 801B2924
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 801B2928
  c->r[11]=c->r[1]+0x00000060u; // 801B292C
  c->lr=0x801B2934u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2930
  c->r[24]=c->r[4]|c->r[4]; // 801B2934
  c->r[29]=R32(c->r[1]+0x000000A8u); // 801B2938
  c->r[23]=c->r[3]|c->r[3]; // 801B293C
  c->r[4]=c->r[5]|c->r[5]; // 801B2940
  c->r[25]=c->r[6]|c->r[6]; // 801B2944
  c->r[26]=c->r[7]|c->r[7]; // 801B2948
  c->r[27]=c->r[8]|c->r[8]; // 801B294C
  c->r[28]=c->r[9]|c->r[9]; // 801B2950
  c->r[30]=c->r[10]|c->r[10]; // 801B2954
  c->r[3]=c->r[24]|c->r[24]; // 801B2958
  c->lr=0x801B2960u; f_801B9640(c); // 801B295C
  c->r[31]=c->r[3]|c->r[3]; // 801B2960
  c->r[3]=c->r[24]|c->r[24]; // 801B2964
  c->r[4]=c->r[25]|c->r[25]; // 801B2968
  c->lr=0x801B2970u; f_801B966C(c); // 801B296C
  c->f[29]=c->f[1]; // 801B2970
  c->r[3]=c->r[24]|c->r[24]; // 801B2974
  c->r[4]=c->r[26]|c->r[26]; // 801B2978
  c->lr=0x801B2980u; f_801B966C(c); // 801B297C
  c->f[30]=c->f[1]; // 801B2980
  c->r[3]=c->r[24]|c->r[24]; // 801B2984
  c->r[4]=c->r[27]|c->r[27]; // 801B2988
  c->lr=0x801B2990u; f_801B966C(c); // 801B298C
  c->f[31]=c->f[1]; // 801B2990
  c->r[3]=c->r[24]|c->r[24]; // 801B2994
  c->r[4]=c->r[28]|c->r[28]; // 801B2998
  c->lr=0x801B29A0u; f_801B966C(c); // 801B299C
  {uint32_t ea=c->r[2]+0xFFFFB3BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B29A0
  c->r[3]=c->r[24]|c->r[24]; // 801B29A4
  c->r[4]=c->r[30]|c->r[30]; // 801B29A8
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 801B29AC
  c->lr=0x801B29B4u; f_801B9640(c); // 801B29B0
  c->r[30]=c->r[3]|c->r[3]; // 801B29B4
  c->r[3]=c->r[24]|c->r[24]; // 801B29B8
  c->r[4]=c->r[29]|c->r[29]; // 801B29BC
  c->lr=0x801B29C4u; f_801B9640(c); // 801B29C0
  c->r[29]=c->r[3]|c->r[3]; // 801B29C4
  c->r[3]=c->r[31]|c->r[31]; // 801B29C8
  c->lr=0x801B29D0u; f_802894C0(c); // 801B29CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B29D0
  if (!crb(c,2)) { goto L_801B29F8; } // 801B29D4
  c->r[3]=c->r[30]|c->r[30]; // 801B29D8
  c->lr=0x801B29E0u; f_802894C0(c); // 801B29DC
  cmps(c,0,(int32_t)c->r[3],0); // 801B29E0
  if (!crb(c,2)) { goto L_801B29F8; } // 801B29E4
  c->r[3]=c->r[29]|c->r[29]; // 801B29E8
  c->lr=0x801B29F0u; f_802894C0(c); // 801B29EC
  cmps(c,0,(int32_t)c->r[3],0); // 801B29F0
  if (crb(c,2)) { goto L_801B2A7C; } // 801B29F4
L_801B29F8:;
  c->r[3]=c->r[1]+0x00000008u; // 801B29F8
  c->lr=0x801B2A00u; f_80264680(c); // 801B29FC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2A00
  c->r[3]=c->r[1]+0x00000008u; // 801B2A04
  {uint32_t ea=c->r[2]+0xFFFFB3C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2A08
  c->f[3]=c->f[1]; // 801B2A0C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[28]); // 801B2A10
  c->lr=0x801B2A18u; f_803949B8(c); // 801B2A14
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[29]);} // 801B2A18
  c->r[3]=c->r[23]|c->r[23]; // 801B2A1C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[30]);} // 801B2A20
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 801B2A24
  c->r[12]=R32(c->r[23]+0x00000010u); // 801B2A28
  c->r[12]=R32(c->r[12]+0x00000338u); // 801B2A2C
  c->ctr=c->r[12]; // 801B2A30
  if (true) { c->lr=0x801B2A38u; dispatch(c,c->ctr); } // 801B2A34
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B2A38
  c->r[4]=c->r[1]+0x00000008u; // 801B2A3C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801B2A40
  c->ctr=c->r[12]; // 801B2A44
  if (true) { c->lr=0x801B2A4Cu; dispatch(c,c->ctr); } // 801B2A48
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 801B2A4C
  c->r[4]=c->r[23]|c->r[23]; // 801B2A50
  c->r[5]=c->r[31]|c->r[31]; // 801B2A54
  c->r[6]=c->r[30]|c->r[30]; // 801B2A58
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B2A5C
  c->r[7]=c->r[29]|c->r[29]; // 801B2A60
  c->r[9]=c->r[1]+0x00000008u; // 801B2A64
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B2A68
  c->r[12]=R32(c->r[12]+0x00000048u); // 801B2A6C
  c->r[8]=0u+0x00000000u; // 801B2A70
  c->ctr=c->r[12]; // 801B2A74
  if (true) { c->lr=0x801B2A7Cu; dispatch(c,c->ctr); } // 801B2A78
L_801B2A7C:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801B2A7C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801B2A80
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 801B2A84
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 801B2A88
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 801B2A8C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 801B2A90
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 801B2A94
  c->r[11]=c->r[1]+0x00000060u; // 801B2A98
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 801B2A9C
  c->lr=0x801B2AA4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2AA0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801B2AA4
  c->lr=c->r[0]; // 801B2AA8
  c->r[1]=c->r[1]+0x000000A0u; // 801B2AAC
  return; // 801B2AB0
}

// fn_801B2AB4
void f_801B2AB4(Ctx* __restrict c) {
  trace_call(0x801B2AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFE00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2AB4
  c->r[0]=c->lr; // 801B2AB8
  W32(c->r[1]+0x00000204u,c->r[0]); // 801B2ABC
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[31]);} // 801B2AC0
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,31,ea,0,0);} // 801B2AC4
  c->r[11]=c->r[1]+0x000001F0u; // 801B2AC8
  c->lr=0x801B2AD0u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2ACC
  c->f[31]=c->f[1]; // 801B2AD0
  cmps(c,0,(int32_t)c->r[4],0); // 801B2AD4
  c->r[31]=c->r[3]|c->r[3]; // 801B2AD8
  c->r[27]=c->r[4]|c->r[4]; // 801B2ADC
  c->r[28]=c->r[5]|c->r[5]; // 801B2AE0
  c->r[29]=c->r[6]|c->r[6]; // 801B2AE4
  c->r[30]=c->r[7]|c->r[7]; // 801B2AE8
  if (!crb(c,2)) { goto L_801B2AF8; } // 801B2AEC
  c->r[3]=0u+0x00000000u; // 801B2AF0
  goto L_801B33E8; // 801B2AF4
L_801B2AF8:;
  c->r[26]=0u+0x803E0000u; // 801B2AF8
  c->r[5]=R32(c->r[27]+0x00000004u); // 801B2AFC
  c->r[26]=c->r[26]+0x000005DCu; // 801B2B00
  c->r[3]=c->r[1]+0x000000B0u; // 801B2B04
  c->r[4]=c->r[26]+0x0000001Cu; // 801B2B08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2B0C
  c->lr=0x801B2B14u; f_80291CC4(c); // 801B2B10
  c->r[4]=c->r[1]+0x000000B0u; // 801B2B14
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B2B18
  c->lr=0x801B2B20u; f_80104374(c); // 801B2B1C
  c->r[23]=R32(c->r[3]+0x00000010u); // 801B2B20
  cmps(c,0,(int32_t)c->r[23],0); // 801B2B24
  if (!crb(c,2)) { goto L_801B2B34; } // 801B2B28
  c->r[3]=0u+0x00000000u; // 801B2B2C
  goto L_801B33E8; // 801B2B30
L_801B2B34:;
  c->r[5]=R32(c->r[27]+0x00000018u); // 801B2B34
  c->r[25]=0u+0x00000000u; // 801B2B38
  cmps(c,0,(int32_t)c->r[5],0); // 801B2B3C
  if (crb(c,2)) { goto L_801B2B74; } // 801B2B40
  c->r[3]=c->r[1]+0x000000B0u; // 801B2B44
  c->r[4]=c->r[26]+0x0000001Cu; // 801B2B48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2B4C
  c->lr=0x801B2B54u; f_80291CC4(c); // 801B2B50
  c->r[4]=c->r[1]+0x000000B0u; // 801B2B54
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B2B58
  c->lr=0x801B2B60u; f_80104374(c); // 801B2B5C
  c->r[25]=R32(c->r[3]+0x00000010u); // 801B2B60
  cmps(c,0,(int32_t)c->r[25],0); // 801B2B64
  if (!crb(c,2)) { goto L_801B2B74; } // 801B2B68
  c->r[3]=0u+0x00000000u; // 801B2B6C
  goto L_801B33E8; // 801B2B70
L_801B2B74:;
  c->r[5]=R32(c->r[27]+0x0000001Cu); // 801B2B74
  c->r[22]=0u+0x00000000u; // 801B2B78
  cmps(c,0,(int32_t)c->r[5],0); // 801B2B7C
  if (crb(c,2)) { goto L_801B2BBC; } // 801B2B80
  c->r[4]=0u+0x803E0000u; // 801B2B84
  c->r[3]=c->r[1]+0x000000B0u; // 801B2B88
  c->r[4]=c->r[4]+0x000005DCu; // 801B2B8C
  c->r[4]=c->r[4]+0x0000001Cu; // 801B2B90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2B94
  c->lr=0x801B2B9Cu; f_80291CC4(c); // 801B2B98
  c->r[4]=c->r[1]+0x000000B0u; // 801B2B9C
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B2BA0
  c->lr=0x801B2BA8u; f_80104374(c); // 801B2BA4
  c->r[22]=R32(c->r[3]+0x00000010u); // 801B2BA8
  cmps(c,0,(int32_t)c->r[22],0); // 801B2BAC
  if (!crb(c,2)) { goto L_801B2BBC; } // 801B2BB0
  c->r[3]=0u+0x00000000u; // 801B2BB4
  goto L_801B33E8; // 801B2BB8
L_801B2BBC:;
  c->r[5]=R32(c->r[27]+0x00000020u); // 801B2BBC
  c->r[21]=0u+0x00000000u; // 801B2BC0
  cmps(c,0,(int32_t)c->r[5],0); // 801B2BC4
  if (crb(c,2)) { goto L_801B2C04; } // 801B2BC8
  c->r[4]=0u+0x803E0000u; // 801B2BCC
  c->r[3]=c->r[1]+0x000000B0u; // 801B2BD0
  c->r[4]=c->r[4]+0x000005DCu; // 801B2BD4
  c->r[4]=c->r[4]+0x0000001Cu; // 801B2BD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2BDC
  c->lr=0x801B2BE4u; f_80291CC4(c); // 801B2BE0
  c->r[4]=c->r[1]+0x000000B0u; // 801B2BE4
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B2BE8
  c->lr=0x801B2BF0u; f_80104374(c); // 801B2BEC
  c->r[21]=R32(c->r[3]+0x00000010u); // 801B2BF0
  cmps(c,0,(int32_t)c->r[21],0); // 801B2BF4
  if (!crb(c,2)) { goto L_801B2C04; } // 801B2BF8
  c->r[3]=0u+0x00000000u; // 801B2BFC
  goto L_801B33E8; // 801B2C00
L_801B2C04:;
  c->r[3]=c->r[28]|c->r[28]; // 801B2C04
  c->r[20]=0u+0x00000000u; // 801B2C08
  c->lr=0x801B2C10u; f_802894C0(c); // 801B2C0C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2C10
  if (crb(c,2)) { goto L_801B2C64; } // 801B2C14
  c->r[26]=0u+0x803E0000u; // 801B2C18
  c->r[3]=c->r[28]|c->r[28]; // 801B2C1C
  c->r[26]=c->r[26]+0x000005DCu; // 801B2C20
  c->r[4]=c->r[26]+0x0000002Eu; // 801B2C24
  c->lr=0x801B2C2Cu; f_80293554(c); // 801B2C28
  cmps(c,0,(int32_t)c->r[3],0); // 801B2C2C
  if (crb(c,2)) { goto L_801B2C64; } // 801B2C30
  c->r[5]=c->r[28]|c->r[28]; // 801B2C34
  c->r[3]=c->r[1]+0x000000B0u; // 801B2C38
  c->r[4]=c->r[26]+0x00000033u; // 801B2C3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2C40
  c->lr=0x801B2C48u; f_80291CC4(c); // 801B2C44
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B2C48
  c->r[4]=c->r[1]+0x000000B0u; // 801B2C4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B2C50
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B2C54
  c->ctr=c->r[12]; // 801B2C58
  if (true) { c->lr=0x801B2C60u; dispatch(c,c->ctr); } // 801B2C5C
  c->r[20]=c->r[3]|c->r[3]; // 801B2C60
L_801B2C64:;
  c->r[5]=R32(c->r[27]+0x00000010u); // 801B2C64
  c->r[26]=0u+0x00000000u; // 801B2C68
  cmps(c,0,(int32_t)c->r[5],0); // 801B2C6C
  if (crb(c,2)) { goto L_801B2CA8; } // 801B2C70
  c->r[4]=0u+0x803E0000u; // 801B2C74
  c->r[3]=c->r[1]+0x000000B0u; // 801B2C78
  c->r[4]=c->r[4]+0x000005DCu; // 801B2C7C
  c->r[4]=c->r[4]+0x00000039u; // 801B2C80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2C84
  c->lr=0x801B2C8Cu; f_80291CC4(c); // 801B2C88
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B2C8C
  c->r[4]=c->r[1]+0x000000B0u; // 801B2C90
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B2C94
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B2C98
  c->ctr=c->r[12]; // 801B2C9C
  if (true) { c->lr=0x801B2CA4u; dispatch(c,c->ctr); } // 801B2CA0
  c->r[26]=c->r[3]|c->r[3]; // 801B2CA4
L_801B2CA8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B2CA8
  if (!crb(c,2)) { goto L_801B2CBC; } // 801B2CAC
  c->r[3]=0u+0x803E0000u; // 801B2CB0
  c->r[3]=c->r[3]+0x000005DCu; // 801B2CB4
  c->r[26]=c->r[3]+0x00000041u; // 801B2CB8
L_801B2CBC:;
  c->r[4]=0u+0x803E0000u; // 801B2CBC
  c->r[3]=0u+0x80490000u; // 801B2CC0
  c->r[4]=c->r[4]+0x000005DCu; // 801B2CC4
  c->r[19]=R32(c->r[27]+0x00000030u); // 801B2CC8
  c->r[3]=c->r[3]+0xFFFFE878u; // 801B2CCC
  c->r[4]=c->r[4]+0x00000042u; // 801B2CD0
  c->lr=0x801B2CD8u; f_80103094(c); // 801B2CD4
  c->r[24]=R32(c->r[3]+0x00000010u); // 801B2CD8
  c->r[3]=c->r[1]+0x00000080u; // 801B2CDC
  c->lr=0x801B2CE4u; f_80264680(c); // 801B2CE0
  W32(c->r[1]+0x00000008u,c->r[22]); // 801B2CE4
  c->r[6]=c->r[23]|c->r[23]; // 801B2CE8
  c->r[7]=c->r[26]|c->r[26]; // 801B2CEC
  c->r[8]=c->r[20]|c->r[20]; // 801B2CF0
  W32(c->r[1]+0x0000000Cu,c->r[19]); // 801B2CF4
  c->r[9]=c->r[25]|c->r[25]; // 801B2CF8
  c->r[10]=c->r[21]|c->r[21]; // 801B2CFC
  c->r[5]=c->r[1]+0x00000080u; // 801B2D00
  W32(c->r[1]+0x00000010u,c->r[24]); // 801B2D04
  c->r[3]=R32(c->r[27]+0x00000014u); // 801B2D08
  c->r[4]=R32(c->r[27]+0x00000004u); // 801B2D0C
  c->lr=0x801B2D14u; f_800D9954(c); // 801B2D10
  W32(c->r[3]+0x000004C0u,c->r[31]); // 801B2D14
  c->r[31]=c->r[3]|c->r[3]; // 801B2D18
  c->r[4]=0u+0x0000000Eu; // 801B2D1C
  c->r[3]=c->r[3]+0x00000394u; // 801B2D20
  c->r[5]=R32(c->r[27]+0x00000038u); // 801B2D24
  c->r[0]=addc(c,c->r[5],0xFFFFFFFFu,0); // 801B2D28
  c->r[5]=addc(c,~c->r[0],c->r[5],c->xer_ca); // 801B2D2C
  c->lr=0x801B2D34u; f_800B16D0(c); // 801B2D30
  W32(c->r[31]+0x00000394u,c->r[28]); // 801B2D34
  c->f[1]=c->f[31]; // 801B2D38
  c->r[3]=c->r[31]|c->r[31]; // 801B2D3C
  c->r[4]=R32(c->r[27]+0x00000000u); // 801B2D40
  c->lr=0x801B2D48u; f_801B25DC(c); // 801B2D44
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 801B2D48
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B2D4C
  c->r[12]=R32(c->r[12]+0x00000064u); // 801B2D50
  c->ctr=c->r[12]; // 801B2D54
  if (true) { c->lr=0x801B2D5Cu; dispatch(c,c->ctr); } // 801B2D58
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2D5C
  c->r[4]=0u+0x00000007u; // 801B2D60
  {uint32_t ea=c->r[31]+0x000004D8u; WF32(ea,c->f[0]);} // 801B2D64
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2D68
  {uint32_t ea=c->r[31]+0x000004DCu; WF32(ea,c->f[0]);} // 801B2D6C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2D70
  c->r[3]=c->r[31]+0x00000394u; // 801B2D74
  {uint32_t ea=c->r[31]+0x000004E0u; WF32(ea,c->f[0]);} // 801B2D78
  c->lr=0x801B2D80u; f_80076DD4(c); // 801B2D7C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2D80
  if (!crb(c,2)) { goto L_801B2DA4; } // 801B2D84
  cmps(c,0,(int32_t)c->r[29],0); // 801B2D88
  if (!crb(c,2)) { goto L_801B2DA4; } // 801B2D8C
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B2D90
  c->r[3]=c->r[31]|c->r[31]; // 801B2D94
  c->r[12]=R32(c->r[12]+0x00000310u); // 801B2D98
  c->ctr=c->r[12]; // 801B2D9C
  if (true) { c->lr=0x801B2DA4u; dispatch(c,c->ctr); } // 801B2DA0
L_801B2DA4:;
  c->r[5]=R32(c->r[27]+0x00000024u); // 801B2DA4
  c->r[4]=0u+0x00000000u; // 801B2DA8
  cmps(c,0,(int32_t)c->r[5],0); // 801B2DAC
  if (crb(c,2)) { goto L_801B2DDC; } // 801B2DB0
  c->r[4]=0u+0x803E0000u; // 801B2DB4
  c->r[3]=c->r[1]+0x000000B0u; // 801B2DB8
  c->r[4]=c->r[4]+0x000005DCu; // 801B2DBC
  c->r[4]=c->r[4]+0x0000001Cu; // 801B2DC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B2DC4
  c->lr=0x801B2DCCu; f_80291CC4(c); // 801B2DC8
  c->r[4]=c->r[1]+0x000000B0u; // 801B2DCC
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B2DD0
  c->lr=0x801B2DD8u; f_80104374(c); // 801B2DD4
  c->r[4]=R32(c->r[3]+0x00000010u); // 801B2DD8
L_801B2DDC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B2DDC
  if (crb(c,2)) { goto L_801B2DEC; } // 801B2DE0
  c->r[3]=c->r[31]|c->r[31]; // 801B2DE4
  c->lr=0x801B2DECu; f_800D9C78(c); // 801B2DE8
L_801B2DEC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2DEC
  if (crb(c,2)) { goto L_801B2E04; } // 801B2DF0
  c->r[3]=c->r[30]|c->r[30]; // 801B2DF4
  c->lr=0x801B2DFCu; f_802894C0(c); // 801B2DF8
  cmps(c,0,(int32_t)c->r[3],0); // 801B2DFC
  if (!crb(c,2)) { goto L_801B2E1C; } // 801B2E00
L_801B2E04:;
  c->lr=0x801B2E08u; f_8004FBE8(c); // 801B2E04
  c->r[4]=c->r[3]+0x00010000u; // 801B2E08
  c->r[0]=R32(c->r[4]+0xFFFF8318u); // 801B2E0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6700); // 801B2E10
  c->r[3]=c->r[3]+c->r[0]; // 801B2E14
  c->r[30]=c->r[3]+0x00000008u; // 801B2E18
L_801B2E1C:;
  c->r[0]=0u+0x00000010u; // 801B2E1C
  c->r[4]=0u+0x00000000u; // 801B2E20
  c->ctr=c->r[0]; // 801B2E24
L_801B2E28:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B2E28
  c->r[3]=c->r[31]+c->r[4]; // 801B2E2C
  c->r[4]=c->r[4]+0x00000001u; // 801B2E30
  c->r[30]=c->r[30]+0x00000001u; // 801B2E34
  W8(c->r[3]+0x000004ACu,c->r[0]); // 801B2E38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2E28; } // 801B2E3C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B2E40
  c->r[4]=0u+0x803E0000u; // 801B2E44
  c->r[4]=c->r[4]+0x000005DCu; // 801B2E48
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B2E4C
  c->r[4]=c->r[4]+0x0000004Fu; // 801B2E50
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 801B2E54
  c->ctr=c->r[12]; // 801B2E58
  if (true) { c->lr=0x801B2E60u; dispatch(c,c->ctr); } // 801B2E5C
  {uint32_t ea=c->r[2]+0xFFFFB3D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2E60
  c->r[19]=c->r[3]|c->r[3]; // 801B2E64
  c->r[3]=c->r[31]+0x00000394u; // 801B2E68
  c->r[4]=0u+0x00000015u; // 801B2E6C
  {uint32_t ea=c->r[31]+0x00000494u; WF32(ea,c->f[0]);} // 801B2E70
  c->r[5]=0u+0x00000001u; // 801B2E74
  c->lr=0x801B2E7Cu; f_800B16D0(c); // 801B2E78
  cmps(c,0,(int32_t)c->r[19],0); // 801B2E7C
  if (crb(c,2)) { goto L_801B2FB4; } // 801B2E80
  c->r[4]=c->r[19]|c->r[19]; // 801B2E84
  c->r[3]=c->r[1]+0x00000040u; // 801B2E88
  c->lr=0x801B2E90u; f_8013BE40(c); // 801B2E8C
  c->r[30]=R32(c->r[1]+0x00000044u); // 801B2E90
  goto L_801B2FA0; // 801B2E94
L_801B2E98:;
  c->r[6]=R32(c->r[1]+0x00000048u); // 801B2E98
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B2E9C
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801B2EA0
  c->r[3]=c->r[6]+c->r[0]; // 801B2EA4
  c->r[0]=R8(c->r[6]+c->r[0]); // 801B2EA8
  c->r[4]=R32(c->r[30]+0x00000010u); // 801B2EAC
  c->r[23]=c->r[6]+c->r[5]; // 801B2EB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B2EB4
  c->r[24]=c->r[6]+c->r[4]; // 801B2EB8
  if (!crb(c,2)) { goto L_801B2ECC; } // 801B2EBC
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2EC0
  {uint32_t ea=c->r[31]+0x00000494u; WF32(ea,c->f[0]);} // 801B2EC4
  goto L_801B2FB4; // 801B2EC8
L_801B2ECC:;
  c->r[4]=c->r[31]+0x000004ACu; // 801B2ECC
  c->lr=0x801B2ED4u; f_80293554(c); // 801B2ED0
  cmps(c,0,(int32_t)c->r[3],0); // 801B2ED4
  if (!crb(c,2)) { goto L_801B2F9C; } // 801B2ED8
  c->r[3]=R32(c->r[30]+0x00000008u); // 801B2EDC
  cmps(c,0,(int32_t)c->r[3],0); // 801B2EE0
  if (crb(c,0)) { goto L_801B2F14; } // 801B2EE4
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B2EE8
  cmps(c,0,(int32_t)c->r[0],0); // 801B2EEC
  if (crb(c,0)) { goto L_801B2F14; } // 801B2EF0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B2EF4
  if (crb(c,0)) { goto L_801B2F14; } // 801B2EF8
  c->r[4]=R32(c->r[31]+0x000004C0u); // 801B2EFC
  cmpu(c,0,c->r[4],c->r[3]); // 801B2F00
  if (crb(c,0)) { goto L_801B2F9C; } // 801B2F04
  cmpu(c,0,c->r[4],c->r[0]); // 801B2F08
  if (!crb(c,1)) { goto L_801B2F28; } // 801B2F0C
  goto L_801B2F9C; // 801B2F10
L_801B2F14:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B2F14
  if (crb(c,0)) { goto L_801B2F28; } // 801B2F18
  c->r[0]=R32(c->r[31]+0x000004C0u); // 801B2F1C
  cmpu(c,0,c->r[3],c->r[0]); // 801B2F20
  if (!crb(c,2)) { goto L_801B2F9C; } // 801B2F24
L_801B2F28:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 801B2F28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B2F2C
  if (crb(c,2)) { goto L_801B2F48; } // 801B2F30
  c->r[4]=R32(c->r[31]+0x000004A8u); // 801B2F34
  c->r[3]=c->r[23]|c->r[23]; // 801B2F38
  c->lr=0x801B2F40u; f_80293554(c); // 801B2F3C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2F40
  if (!crb(c,2)) { goto L_801B2F9C; } // 801B2F44
L_801B2F48:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 801B2F48
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[3]); // 801B2F4C
  if (crb(c,2)) { goto L_801B2F80; } // 801B2F50
  c->r[4]=R32(c->r[27]+0x00000000u); // 801B2F54
  c->r[0]=R8(c->r[4]+0x00000000u); // 801B2F58
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B2F5C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B2F60
  if (!crb(c,2)) { goto L_801B2F9C; } // 801B2F64
  c->r[3]=R8(c->r[4]+0x00000001u); // 801B2F68
  c->r[0]=R8(c->r[24]+0x00000001u); // 801B2F6C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801B2F70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B2F74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B2F78
  if (!crb(c,2)) { goto L_801B2F9C; } // 801B2F7C
L_801B2F80:;
  c->r[3]=c->r[31]+0x00000394u; // 801B2F80
  c->r[4]=0u+0x00000015u; // 801B2F84
  c->r[5]=0u+0x00000000u; // 801B2F88
  c->lr=0x801B2F90u; f_800B16D0(c); // 801B2F8C
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B2F90
  {uint32_t ea=c->r[31]+0x00000494u; WF32(ea,c->f[0]);} // 801B2F94
  goto L_801B2FB4; // 801B2F98
L_801B2F9C:;
  c->r[30]=c->r[30]+0x00000020u; // 801B2F9C
L_801B2FA0:;
  c->r[4]=c->r[30]|c->r[30]; // 801B2FA0
  c->r[3]=c->r[1]+0x00000040u; // 801B2FA4
  c->lr=0x801B2FACu; f_800C6B48(c); // 801B2FA8
  cmps(c,0,(int32_t)c->r[3],0); // 801B2FAC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B2E98; } // 801B2FB0
L_801B2FB4:;
  c->lr=0x801B2FB8u; f_8004FBE8(c); // 801B2FB4
  c->r[4]=c->r[3]+0x00010000u; // 801B2FB8
  c->r[0]=R32(c->r[4]+0xFFFF8318u); // 801B2FBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6700); // 801B2FC0
  c->r[3]=c->r[3]+c->r[0]; // 801B2FC4
  c->r[3]=c->r[3]+0x00000008u; // 801B2FC8
  c->lr=0x801B2FD0u; f_80051534(c); // 801B2FCC
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B2FD0
  c->r[24]=c->r[3]|c->r[3]; // 801B2FD4
  c->r[3]=c->r[31]|c->r[31]; // 801B2FD8
  c->r[12]=R32(c->r[12]+0x00000338u); // 801B2FDC
  c->ctr=c->r[12]; // 801B2FE0
  if (true) { c->lr=0x801B2FE8u; dispatch(c,c->ctr); } // 801B2FE4
  c->r[25]=R32(c->r[3]+0x00000008u); // 801B2FE8
  c->r[23]=0u+0x00000000u; // 801B2FEC
  c->r[30]=0u+0x803F0000u; // 801B2FF0
  c->r[29]=0u+0x803F0000u; // 801B2FF4
  c->r[28]=0u+0x803F0000u; // 801B2FF8
  c->r[27]=0u+0x803F0000u; // 801B2FFC
  goto L_801B30B4; // 801B3000
L_801B3004:;
  c->r[4]=c->r[25]|c->r[25]; // 801B3004
  c->r[5]=c->r[23]|c->r[23]; // 801B3008
  c->r[3]=c->r[1]+0x0000004Cu; // 801B300C
  c->lr=0x801B3014u; f_80385274(c); // 801B3010
  c->r[3]=c->r[1]+0x0000004Cu; // 801B3014
  c->r[4]=0u+0x00000000u; // 801B3018
  c->lr=0x801B3020u; f_8038519C(c); // 801B301C
  W32(c->r[1]+0x00000018u,c->r[3]); // 801B3020
  c->r[4]=c->r[23]|c->r[23]; // 801B3024
  c->r[3]=c->r[1]+0x00000020u; // 801B3028
  c->r[0]=R32(c->r[25]+0x000000E8u); // 801B302C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801B3030
  c->lr=0x801B3038u; f_803661F8(c); // 801B3034
  cmps(c,0,(int32_t)c->r[3],0); // 801B3038
  c->r[26]=c->r[3]|c->r[3]; // 801B303C
  if (!crb(c,2)) { goto L_801B3060; } // 801B3040
  c->r[3]=c->r[30]+0x000015B0u; // 801B3044
  c->r[5]=c->r[29]+0x00001594u; // 801B3048
  c->r[4]=0u+0x00000239u; // 801B304C
  c->r[6]=c->r[13]+0xFFFF8038u; // 801B3050
  c->r[7]=c->r[13]+0xFFFF8790u; // 801B3054
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3058
  c->lr=0x801B3060u; f_803444BC(c); // 801B305C
L_801B3060:;
  c->r[26]=c->r[26]+0x0000001Cu; // 801B3060
  c->r[0]=rotl(c->r[26],0)&0x00000003u; cr0(c,c->r[0]); // 801B3064
  if (crb(c,2)) { goto L_801B3080; } // 801B3068
  c->r[3]=c->r[28]+0x000039C0u; // 801B306C
  c->r[5]=c->r[27]+0x00003998u; // 801B3070
  c->r[4]=0u+0x000000F3u; // 801B3074
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3078
  c->lr=0x801B3080u; f_803444BC(c); // 801B307C
L_801B3080:;
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 801B3080
  c->r[3]=c->r[1]+0x0000001Cu; // 801B3084
  c->lr=0x801B308Cu; f_80367660(c); // 801B3088
  cmps(c,0,(int32_t)c->r[3],0); // 801B308C
  if (crb(c,0)) { goto L_801B30A4; } // 801B3090
  c->r[4]=c->r[24]|c->r[24]; // 801B3094
  c->r[3]=c->r[1]+0x00000018u; // 801B3098
  c->lr=0x801B30A0u; f_8036764C(c); // 801B309C
  goto L_801B30B0; // 801B30A0
L_801B30A4:;
  c->r[4]=c->r[3]|c->r[3]; // 801B30A4
  c->r[3]=c->r[1]+0x00000018u; // 801B30A8
  c->lr=0x801B30B0u; f_8036764C(c); // 801B30AC
L_801B30B0:;
  c->r[23]=c->r[23]+0x00000001u; // 801B30B0
L_801B30B4:;
  c->r[0]=R32(c->r[25]+0x000000E8u); // 801B30B4
  c->r[3]=c->r[1]+0x00000024u; // 801B30B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B30BC
  c->lr=0x801B30C4u; f_8036624C(c); // 801B30C0
  cmpu(c,0,c->r[23],c->r[3]); // 801B30C4
  if (crb(c,0)) { IRQCHK(c); goto L_801B3004; } // 801B30C8
  c->r[8]=R32(c->r[31]+0x000004A8u); // 801B30CC
  c->r[5]=0u+0x4F410000u; // 801B30D0
  c->r[3]=c->r[5]+0x00004E41u; // 801B30D4
  c->r[4]=R8(c->r[8]+0x00000002u); // 801B30D8
  c->r[0]=R8(c->r[8]+0x00000001u); // 801B30DC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801B30E0
  c->r[7]=R8(c->r[8]+0x00000003u); // 801B30E4
  c->r[4]=R8(c->r[8]+0x00000000u); // 801B30E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B30EC
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801B30F0
  c->r[7]=rotl(c->r[6],8)&0xFFFFFF00u; // 801B30F4
  c->r[6]=rotl(c->r[4],24)&0xFF000000u; // 801B30F8
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801B30FC
  c->r[4]=c->r[8]+c->r[7]; // 801B3100
  c->r[0]=c->r[6]+c->r[0]; // 801B3104
  c->r[0]=c->r[4]+c->r[0]; // 801B3108
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B310C
  if (crb(c,2)) { goto L_801B33E4; } // 801B3110
  if (!crb(c,0)) { goto L_801B3234; } // 801B3114
  c->r[5]=0u+0x454B0000u; // 801B3118
  c->r[3]=c->r[5]+0x00004B33u; // 801B311C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3120
  if (!crb(c,0)) { goto L_801B31B4; } // 801B3124
  c->r[4]=0u+0x45470000u; // 801B3128
  c->r[3]=c->r[4]+0x00004434u; // 801B312C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3130
  if (!crb(c,0)) { goto L_801B3170; } // 801B3134
  c->r[3]=0u+0x45430000u; // 801B3138
  c->r[3]=c->r[3]+0x00005231u; // 801B313C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3140
  if (crb(c,2)) { goto L_801B33E4; } // 801B3144
  if (!crb(c,0)) { goto L_801B3160; } // 801B3148
  c->r[3]=0u+0x45420000u; // 801B314C
  c->r[3]=c->r[3]+0x00005430u; // 801B3150
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3154
  if (crb(c,2)) { goto L_801B33E4; } // 801B3158
  goto L_801B32EC; // 801B315C
L_801B3160:;
  c->r[3]=c->r[4]+0x00004432u; // 801B3160
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3164
  if (!crb(c,0)) { goto L_801B33E4; } // 801B3168
  goto L_801B32EC; // 801B316C
L_801B3170:;
  c->r[3]=0u+0x45490000u; // 801B3170
  c->r[3]=c->r[3]+0x00004230u; // 801B3174
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3178
  if (crb(c,2)) { goto L_801B33E4; } // 801B317C
  if (!crb(c,0)) { goto L_801B31A4; } // 801B3180
  c->r[3]=0u+0x45480000u; // 801B3184
  c->r[4]=c->r[3]+0x00004932u; // 801B3188
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B318C
  if (!crb(c,0)) { goto L_801B32EC; } // 801B3190
  c->r[3]=c->r[3]+0x00004930u; // 801B3194
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3198
  if (!crb(c,0)) { goto L_801B33E4; } // 801B319C
  goto L_801B32EC; // 801B31A0
L_801B31A4:;
  c->r[3]=c->r[5]+0x00004B31u; // 801B31A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B31A8
  if (!crb(c,0)) { goto L_801B33E4; } // 801B31AC
  goto L_801B32EC; // 801B31B0
L_801B31B4:;
  c->r[4]=0u+0x454E0000u; // 801B31B4
  c->r[3]=c->r[4]+0x00005335u; // 801B31B8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B31BC
  if (!crb(c,0)) { goto L_801B320C; } // 801B31C0
  c->r[3]=c->r[4]+0x00005031u; // 801B31C4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B31C8
  if (!crb(c,0)) { goto L_801B31F0; } // 801B31CC
  c->r[3]=0u+0x454C0000u; // 801B31D0
  c->r[4]=c->r[3]+0x00005234u; // 801B31D4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B31D8
  if (!crb(c,0)) { goto L_801B32EC; } // 801B31DC
  c->r[3]=c->r[3]+0x00005231u; // 801B31E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B31E4
  if (!crb(c,0)) { goto L_801B33E4; } // 801B31E8
  goto L_801B32EC; // 801B31EC
L_801B31F0:;
  c->r[3]=c->r[4]+0x00005333u; // 801B31F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B31F4
  if (!crb(c,0)) { goto L_801B33E4; } // 801B31F8
  c->r[3]=c->r[4]+0x00005033u; // 801B31FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3200
  if (!crb(c,0)) { goto L_801B32EC; } // 801B3204
  goto L_801B33E4; // 801B3208
L_801B320C:;
  c->r[3]=0u+0x45570000u; // 801B320C
  c->r[3]=c->r[3]+0x00004131u; // 801B3210
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3214
  if (crb(c,2)) { goto L_801B33E4; } // 801B3218
  if (!crb(c,0)) { goto L_801B32EC; } // 801B321C
  c->r[3]=0u+0x45540000u; // 801B3220
  c->r[3]=c->r[3]+0x00004135u; // 801B3224
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3228
  if (crb(c,2)) { goto L_801B33E4; } // 801B322C
  goto L_801B32EC; // 801B3230
L_801B3234:;
  c->r[3]=0u+0x4F4A0000u; // 801B3234
  c->r[3]=c->r[3]+0x00004952u; // 801B3238
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B323C
  if (crb(c,2)) { goto L_801B33E4; } // 801B3240
  if (!crb(c,0)) { goto L_801B32A0; } // 801B3244
  c->r[4]=0u+0x4F480000u; // 801B3248
  c->r[3]=c->r[4]+0x00004153u; // 801B324C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3250
  if (crb(c,2)) { goto L_801B33E4; } // 801B3254
  if (!crb(c,0)) { goto L_801B3280; } // 801B3258
  c->r[3]=0u+0x4F420000u; // 801B325C
  c->r[3]=c->r[3]+0x0000494Eu; // 801B3260
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3264
  if (crb(c,2)) { goto L_801B33E4; } // 801B3268
  if (!crb(c,0)) { goto L_801B32EC; } // 801B326C
  c->r[3]=c->r[5]+0x00005341u; // 801B3270
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3274
  if (crb(c,2)) { goto L_801B33E4; } // 801B3278
  goto L_801B32EC; // 801B327C
L_801B3280:;
  c->r[3]=c->r[4]+0x00004F4Bu; // 801B3280
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3284
  if (crb(c,2)) { goto L_801B33E4; } // 801B3288
  if (!crb(c,0)) { goto L_801B32EC; } // 801B328C
  c->r[3]=c->r[4]+0x00004552u; // 801B3290
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B3294
  if (crb(c,2)) { goto L_801B33E4; } // 801B3298
  goto L_801B32EC; // 801B329C
L_801B32A0:;
  c->r[3]=0u+0x4F530000u; // 801B32A0
  c->r[3]=c->r[3]+0x00005549u; // 801B32A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B32A8
  if (crb(c,2)) { goto L_801B33E4; } // 801B32AC
  if (!crb(c,0)) { goto L_801B32DC; } // 801B32B0
  c->r[3]=0u+0x4F4E0000u; // 801B32B4
  c->r[3]=c->r[3]+0x00004946u; // 801B32B8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B32BC
  if (crb(c,2)) { goto L_801B33E4; } // 801B32C0
  if (!crb(c,0)) { goto L_801B32EC; } // 801B32C4
  c->r[3]=0u+0x4F4C0000u; // 801B32C8
  c->r[3]=c->r[3]+0x00004153u; // 801B32CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B32D0
  if (crb(c,2)) { goto L_801B33E4; } // 801B32D4
  goto L_801B32EC; // 801B32D8
L_801B32DC:;
  c->r[3]=0u+0x4F540000u; // 801B32DC
  c->r[3]=c->r[3]+0x00005950u; // 801B32E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B32E4
  if (crb(c,2)) { goto L_801B33E4; } // 801B32E8
L_801B32EC:;
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B32EC
  c->r[3]=c->r[31]|c->r[31]; // 801B32F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B32F4
  c->ctr=c->r[12]; // 801B32F8
  if (true) { c->lr=0x801B3300u; dispatch(c,c->ctr); } // 801B32FC
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 801B3300
  c->r[4]=0u+0xC8000000u; // 801B3304
  W32(c->r[1]+0x00000038u,c->r[3]); // 801B3308
  c->r[3]=c->r[1]+0x00000038u; // 801B330C
  c->lr=0x801B3314u; f_8003EDD0(c); // 801B3310
  cmps(c,0,(int32_t)c->r[3],0); // 801B3314
  if (crb(c,2)) { goto L_801B3360; } // 801B3318
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B331C
  c->r[3]=c->r[31]|c->r[31]; // 801B3320
  c->r[12]=R32(c->r[12]+0x00000338u); // 801B3324
  c->ctr=c->r[12]; // 801B3328
  if (true) { c->lr=0x801B3330u; dispatch(c,c->ctr); } // 801B332C
  c->r[4]=c->r[3]|c->r[3]; // 801B3330
  c->r[3]=c->r[31]+0x00000CA0u; // 801B3334
  c->lr=0x801B333Cu; f_800B9D00(c); // 801B3338
  c->r[3]=c->r[31]+0x00000394u; // 801B333C
  c->r[4]=0u+0x00000000u; // 801B3340
  c->lr=0x801B3348u; f_80076DD4(c); // 801B3344
  cmps(c,0,(int32_t)c->r[3],0); // 801B3348
  if (!crb(c,2)) { goto L_801B3360; } // 801B334C
  c->r[3]=c->r[31]+0x00000394u; // 801B3350
  c->r[4]=0u+0x00000001u; // 801B3354
  c->r[5]=0u+0x00000001u; // 801B3358
  c->lr=0x801B3360u; f_800B16D0(c); // 801B335C
L_801B3360:;
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B3360
  c->r[3]=c->r[31]|c->r[31]; // 801B3364
  c->r[23]=0u+0x00000001u; // 801B3368
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B336C
  c->ctr=c->r[12]; // 801B3370
  if (true) { c->lr=0x801B3378u; dispatch(c,c->ctr); } // 801B3374
  W32(c->r[1]+0x00000034u,c->r[4]); // 801B3378
  c->r[4]=0u+0xC9000000u; // 801B337C
  W32(c->r[1]+0x00000030u,c->r[3]); // 801B3380
  c->r[3]=c->r[1]+0x00000030u; // 801B3384
  c->lr=0x801B338Cu; f_8003EDD0(c); // 801B3388
  cmps(c,0,(int32_t)c->r[3],0); // 801B338C
  if (!crb(c,2)) { goto L_801B33CC; } // 801B3390
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B3394
  c->r[3]=c->r[31]|c->r[31]; // 801B3398
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B339C
  c->ctr=c->r[12]; // 801B33A0
  if (true) { c->lr=0x801B33A8u; dispatch(c,c->ctr); } // 801B33A4
  W32(c->r[1]+0x00000028u,c->r[3]); // 801B33A8
  c->r[5]=0u+0xCC000000u; // 801B33AC
  c->r[3]=c->r[1]+0x00000028u; // 801B33B0
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 801B33B4
  c->r[4]=c->r[5]+0x00000003u; // 801B33B8
  c->lr=0x801B33C0u; f_8003EDD0(c); // 801B33BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B33C0
  if (!crb(c,2)) { goto L_801B33CC; } // 801B33C4
  c->r[23]=0u+0x00000000u; // 801B33C8
L_801B33CC:;
  cmps(c,0,(int32_t)c->r[23],0); // 801B33CC
  if (crb(c,2)) { goto L_801B33E4; } // 801B33D0
  c->r[3]=c->r[31]+0x00000394u; // 801B33D4
  c->r[4]=0u+0x00000001u; // 801B33D8
  c->r[5]=0u+0x00000000u; // 801B33DC
  c->lr=0x801B33E4u; f_800B16D0(c); // 801B33E0
L_801B33E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B33E4
L_801B33E8:;
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,31,ea,0,0);} // 801B33E8
  c->r[11]=c->r[1]+0x000001F0u; // 801B33EC
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[31]=RF64(ea);} // 801B33F0
  c->lr=0x801B33F8u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B33F4
  c->r[0]=R32(c->r[1]+0x00000204u); // 801B33F8
  c->lr=c->r[0]; // 801B33FC
  c->r[1]=c->r[1]+0x00000200u; // 801B3400
  return; // 801B3404
}

// fn_801B3408
void f_801B3408(Ctx* __restrict c) {
  trace_call(0x801B3408u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3408
  c->r[0]=c->lr; // 801B340C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B3410
  c->r[11]=c->r[1]+0x00000060u; // 801B3414
  c->lr=0x801B341Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3418
  c->r[28]=c->r[3]|c->r[3]; // 801B341C
  c->r[30]=c->r[4]|c->r[4]; // 801B3420
  c->r[3]=0u+0x00000000u; // 801B3424
  c->lr=0x801B342Cu; f_801B251C(c); // 801B3428
  cmps(c,0,(int32_t)c->r[3],0); // 801B342C
  c->r[29]=c->r[3]|c->r[3]; // 801B3430
  if (crb(c,2)) { goto L_801B34E8; } // 801B3434
  c->r[0]=0u+0x00000007u; // 801B3438
  c->r[5]=c->r[1]+0x00000004u; // 801B343C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 801B3440
  c->ctr=c->r[0]; // 801B3444
L_801B3448:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B3448
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B344C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B3450
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801B3454
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3448; } // 801B3458
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B345C
  c->r[30]=0u+0x803E0000u; // 801B3460
  c->r[31]=0u+0x80540000u; // 801B3464
  c->r[30]=c->r[30]+0x000005DCu; // 801B3468
  W32(c->r[5]+0x00000004u,c->r[0]); // 801B346C
  c->r[31]=c->r[31]+0xFFFFC75Cu; // 801B3470
  c->r[0]=c->r[30]+0x0000005Eu; // 801B3474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3478
  c->r[3]=c->r[31]|c->r[31]; // 801B347C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B3480
  c->r[4]=R32(c->r[29]+0x00000004u); // 801B3484
  c->lr=0x801B348Cu; f_802933D8(c); // 801B3488
  c->r[3]=c->r[31]+0x00000010u; // 801B348C
  W32(c->r[1]+0x00000010u,c->r[3]); // 801B3490
  c->r[4]=R32(c->r[29]+0x00000008u); // 801B3494
  c->lr=0x801B349Cu; f_802933D8(c); // 801B3498
  c->r[0]=0u+0x00000000u; // 801B349C
  c->r[5]=c->r[30]+0x0000002Eu; // 801B34A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B34A4
  c->r[0]=0u+0xFFFFFFFFu; // 801B34A8
  {uint32_t ea=c->r[2]+0xFFFFB3D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B34AC
  c->r[3]=c->r[28]|c->r[28]; // 801B34B0
  c->r[7]=R32(c->r[29]+0x00000010u); // 801B34B4
  c->r[4]=c->r[1]+0x00000008u; // 801B34B8
  c->r[6]=0u+0x00000001u; // 801B34BC
  W32(c->r[1]+0x00000018u,c->r[7]); // 801B34C0
  c->r[7]=0u+0x00000000u; // 801B34C4
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801B34C8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801B34CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B34D0
  c->r[0]=R32(c->r[29]+0x00000030u); // 801B34D4
  W32(c->r[1]+0x00000038u,c->r[0]); // 801B34D8
  c->lr=0x801B34E0u; f_801B2AB4(c); // 801B34DC
  c->r[29]=c->r[3]|c->r[3]; // 801B34E0
  goto L_801B3530; // 801B34E4
L_801B34E8:;
  c->r[31]=0u+0x80400000u; // 801B34E8
  c->r[4]=c->r[30]|c->r[30]; // 801B34EC
  c->r[31]=c->r[31]+0x00001900u; // 801B34F0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B34F4
  c->lr=0x801B34FCu; f_802933D8(c); // 801B34F8
  c->r[3]=R32(c->r[31]+0x00000008u); // 801B34FC
  c->r[4]=c->r[30]|c->r[30]; // 801B3500
  c->lr=0x801B3508u; f_802933D8(c); // 801B3504
  c->r[5]=0u+0x803E0000u; // 801B3508
  {uint32_t ea=c->r[2]+0xFFFFB3D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B350C
  c->r[5]=c->r[5]+0x000005DCu; // 801B3510
  c->r[3]=c->r[28]|c->r[28]; // 801B3514
  c->r[4]=c->r[31]|c->r[31]; // 801B3518
  c->r[6]=0u+0x00000001u; // 801B351C
  c->r[5]=c->r[5]+0x0000002Eu; // 801B3520
  c->r[7]=0u+0x00000000u; // 801B3524
  c->lr=0x801B352Cu; f_801B2AB4(c); // 801B3528
  c->r[29]=c->r[3]|c->r[3]; // 801B352C
L_801B3530:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B3530
  if (crb(c,2)) { goto L_801B3550; } // 801B3534
  c->r[0]=0u+0x00000000u; // 801B3538
  c->r[3]=c->r[29]+0x00000394u; // 801B353C
  W8(c->r[29]+0x000004ACu,c->r[0]); // 801B3540
  c->r[4]=0u+0x0000000Eu; // 801B3544
  c->r[5]=0u+0x00000001u; // 801B3548
  c->lr=0x801B3550u; f_800B16D0(c); // 801B354C
L_801B3550:;
  c->r[11]=c->r[1]+0x00000060u; // 801B3550
  c->r[3]=c->r[29]|c->r[29]; // 801B3554
  c->lr=0x801B355Cu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3558
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B355C
  c->lr=c->r[0]; // 801B3560
  c->r[1]=c->r[1]+0x00000060u; // 801B3564
  return; // 801B3568
}

// fn_801B356C
void f_801B356C(Ctx* __restrict c) {
  trace_call(0x801B356Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B356C
  c->r[0]=c->lr; // 801B3570
  W32(c->r[1]+0x00000084u,c->r[0]); // 801B3574
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801B3578
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801B357C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801B3580
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801B3584
  c->r[11]=c->r[1]+0x00000060u; // 801B3588
  c->lr=0x801B3590u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B358C
  {uint32_t ea=c->r[2]+0xFFFFB3D8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B3590
  c->r[28]=c->r[3]|c->r[3]; // 801B3594
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801B3598
  c->r[29]=c->r[4]|c->r[4]; // 801B359C
  c->f[30]=c->f[31]; // 801B35A0
  c->r[30]=c->r[5]|c->r[5]; // 801B35A4
  c->lr=0x801B35ACu; f_801F821C(c); // 801B35A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801B35AC
  cmps(c,0,(int32_t)c->r[0],1); // 801B35B0
  if (!crb(c,2)) { goto L_801B35C4; } // 801B35B4
  {uint32_t ea=c->r[2]+0xFFFFB3DCu; c->f[31]=c->ps1[31]=RF32(ea);} // 801B35B8
  c->f[30]=c->f[31]; // 801B35BC
  goto L_801B35E0; // 801B35C0
L_801B35C4:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801B35C4
  c->lr=0x801B35CCu; f_801F821C(c); // 801B35C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801B35CC
  cmps(c,0,(int32_t)c->r[0],3); // 801B35D0
  if (!crb(c,2)) { goto L_801B35E0; } // 801B35D4
  {uint32_t ea=c->r[2]+0xFFFFB3E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B35D8
  c->f[30]=c->f[31]; // 801B35DC
L_801B35E0:;
  c->r[3]=0u+0x80470000u; // 801B35E0
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801B35E4
  c->lr=0x801B35ECu; f_80066B2C(c); // 801B35E8
  cmps(c,0,(int32_t)c->r[3],2); // 801B35EC
  if (!crb(c,2)) { goto L_801B3600; } // 801B35F0
  {uint32_t ea=c->r[2]+0xFFFFB3E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B35F4
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801B35F8
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 801B35FC
L_801B3600:;
  c->r[31]=0u+0x803E0000u; // 801B3600
  c->r[3]=c->r[28]|c->r[28]; // 801B3604
  c->r[31]=c->r[31]+0x000005DCu; // 801B3608
  c->r[4]=c->r[31]+0x00000061u; // 801B360C
  c->lr=0x801B3614u; f_80293554(c); // 801B3610
  cmps(c,0,(int32_t)c->r[3],0); // 801B3614
  if (crb(c,2)) { goto L_801B3630; } // 801B3618
  c->r[3]=c->r[28]|c->r[28]; // 801B361C
  c->r[4]=c->r[31]+0x00000064u; // 801B3620
  c->lr=0x801B3628u; f_80293554(c); // 801B3624
  cmps(c,0,(int32_t)c->r[3],0); // 801B3628
  if (!crb(c,2)) { goto L_801B3638; } // 801B362C
L_801B3630:;
  c->r[28]=0u+0x803E0000u; // 801B3630
  c->r[28]=c->r[28]+0x000005DCu; // 801B3634
L_801B3638:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B3638
  c->r[4]=0u+0x803E0000u; // 801B363C
  c->r[4]=c->r[4]+0x000005DCu; // 801B3640
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B3644
  c->r[4]=c->r[4]+0x00000067u; // 801B3648
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 801B364C
  c->ctr=c->r[12]; // 801B3650
  if (true) { c->lr=0x801B3658u; dispatch(c,c->ctr); } // 801B3654
  cmps(c,0,(int32_t)c->r[3],0); // 801B3658
  if (!crb(c,2)) { goto L_801B3668; } // 801B365C
  c->r[3]=0u+0x00000000u; // 801B3660
  goto L_801B3828; // 801B3664
L_801B3668:;
  c->r[4]=c->r[3]|c->r[3]; // 801B3668
  c->r[3]=c->r[1]+0x0000003Cu; // 801B366C
  c->lr=0x801B3674u; f_80172DDC(c); // 801B3670
  c->r[3]=c->r[1]+0x0000003Cu; // 801B3674
  c->r[4]=0u+0x00000000u; // 801B3678
  c->lr=0x801B3680u; f_80172E78(c); // 801B367C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B3680
  c->r[31]=0u+0x00000000u; // 801B3684
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B3688
  W32(c->r[1]+0x00000010u,c->r[3]); // 801B368C
  W32(c->r[1]+0x00000014u,c->r[4]); // 801B3690
  goto L_801B3814; // 801B3694
L_801B3698:;
  c->r[5]=c->r[31]|c->r[31]; // 801B3698
  c->r[3]=c->r[1]+0x00000030u; // 801B369C
  c->r[4]=c->r[1]+0x00000010u; // 801B36A0
  c->lr=0x801B36A8u; f_80173034(c); // 801B36A4
  c->r[3]=c->r[1]+0x00000024u; // 801B36A8
  c->lr=0x801B36B0u; f_801732D0(c); // 801B36AC
  c->r[3]=c->r[1]+0x00000018u; // 801B36B0
  c->r[4]=c->r[1]+0x00000024u; // 801B36B4
  c->r[5]=c->r[1]+0x00000030u; // 801B36B8
  c->lr=0x801B36C0u; f_801732E4(c); // 801B36BC
  c->r[3]=c->r[1]+0x00000024u; // 801B36C0
  c->r[4]=0u+0x00000002u; // 801B36C4
  c->lr=0x801B36CCu; f_801B9714(c); // 801B36C8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 801B36CC
  if (!crb(c,2)) { goto L_801B3810; } // 801B36D0
  c->r[3]=c->r[1]+0x00000024u; // 801B36D4
  c->r[4]=0u+0x00000001u; // 801B36D8
  c->lr=0x801B36E0u; f_801B9640(c); // 801B36DC
  c->r[4]=c->r[28]|c->r[28]; // 801B36E0
  c->lr=0x801B36E8u; f_80293554(c); // 801B36E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B36E8
  if (!crb(c,2)) { goto L_801B3810; } // 801B36EC
  c->r[3]=c->r[1]+0x00000024u; // 801B36F0
  c->r[4]=0u+0x00000003u; // 801B36F4
  c->lr=0x801B36FCu; f_801B966C(c); // 801B36F8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801B36FC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3700
  fcmp(c,0,c->f[1],c->f[0]); // 801B3704
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801B3708
  if (!crb(c,2)) { goto L_801B3714; } // 801B370C
  {uint32_t ea=c->r[2]+0xFFFFB3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B3710
L_801B3714:;
  c->r[3]=c->r[30]|c->r[30]; // 801B3714
  c->r[4]=c->r[28]|c->r[28]; // 801B3718
  c->lr=0x801B3720u; f_801B25DC(c); // 801B371C
  c->r[3]=c->r[1]+0x00000024u; // 801B3720
  c->r[4]=0u+0x00000004u; // 801B3724
  c->lr=0x801B372Cu; f_801B966C(c); // 801B3728
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 801B372C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3730
  fcmp(c,0,c->f[30],c->f[0]); // 801B3734
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801B3738
  if (!crb(c,2)) { goto L_801B3744; } // 801B373C
  {uint32_t ea=c->r[2]+0xFFFFB3E4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801B3740
L_801B3744:;
  c->r[3]=c->r[1]+0x00000024u; // 801B3744
  c->r[4]=0u+0x00000004u; // 801B3748
  c->lr=0x801B3750u; f_801B966C(c); // 801B374C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3750
  fcmp(c,0,c->f[1],c->f[0]); // 801B3754
  if (!crb(c,1)) { goto L_801B3760; } // 801B3758
  {uint32_t ea=c->r[30]+0x00000398u; WF32(ea,c->f[30]);} // 801B375C
L_801B3760:;
  c->r[3]=c->r[1]+0x00000024u; // 801B3760
  c->r[4]=0u+0x00000005u; // 801B3764
  c->lr=0x801B376Cu; f_801B966C(c); // 801B3768
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B376C
  fcmp(c,0,c->f[1],c->f[0]); // 801B3770
  if (!crb(c,1)) { goto L_801B3788; } // 801B3774
  c->r[3]=c->r[1]+0x00000024u; // 801B3778
  c->r[4]=0u+0x00000005u; // 801B377C
  c->lr=0x801B3784u; f_801B966C(c); // 801B3780
  {uint32_t ea=c->r[30]+0x000003A0u; WF32(ea,c->f[1]);} // 801B3784
L_801B3788:;
  c->r[3]=c->r[1]+0x00000024u; // 801B3788
  c->r[4]=0u+0x00000006u; // 801B378C
  c->lr=0x801B3794u; f_801B966C(c); // 801B3790
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3794
  fcmp(c,0,c->f[1],c->f[0]); // 801B3798
  if (!crb(c,1)) { goto L_801B37B0; } // 801B379C
  c->r[3]=c->r[1]+0x00000024u; // 801B37A0
  c->r[4]=0u+0x00000006u; // 801B37A4
  c->lr=0x801B37ACu; f_801B966C(c); // 801B37A8
  {uint32_t ea=c->r[30]+0x0000039Cu; WF32(ea,c->f[1]);} // 801B37AC
L_801B37B0:;
  c->r[3]=c->r[1]+0x00000024u; // 801B37B0
  c->r[4]=0u+0x00000007u; // 801B37B4
  c->lr=0x801B37BCu; f_801B966C(c); // 801B37B8
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B37BC
  fcmp(c,0,c->f[0],c->f[1]); // 801B37C0
  c->r[5]=c->cr; // 801B37C4
  c->r[3]=c->r[30]+0x00000394u; // 801B37C8
  c->r[5]=rotl(c->r[5],3)&0x00000001u; // 801B37CC
  c->r[4]=0u+0x0000000Au; // 801B37D0
  c->lr=0x801B37D8u; f_800B16D0(c); // 801B37D4
  c->r[4]=0u+0x803E0000u; // 801B37D8
  c->r[3]=c->r[28]|c->r[28]; // 801B37DC
  c->r[4]=c->r[4]+0x000005DCu; // 801B37E0
  c->r[4]=c->r[4]+0x0000007Eu; // 801B37E4
  c->lr=0x801B37ECu; f_80293554(c); // 801B37E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B37EC
  if (!crb(c,2)) { goto L_801B3808; } // 801B37F0
  c->r[3]=c->r[1]+0x00000024u; // 801B37F4
  c->r[4]=0u+0x00000008u; // 801B37F8
  c->lr=0x801B3800u; f_801B966C(c); // 801B37FC
  c->r[3]=c->r[30]|c->r[30]; // 801B3800
  c->lr=0x801B3808u; f_801B97A0(c); // 801B3804
L_801B3808:;
  c->r[3]=0u+0x00000001u; // 801B3808
  goto L_801B3828; // 801B380C
L_801B3810:;
  c->r[31]=c->r[31]+0x00000001u; // 801B3810
L_801B3814:;
  c->r[3]=c->r[1]+0x00000010u; // 801B3814
  c->lr=0x801B381Cu; f_80173018(c); // 801B3818
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801B381C
  if (crb(c,0)) { IRQCHK(c); goto L_801B3698; } // 801B3820
  c->r[3]=0u+0x00000000u; // 801B3824
L_801B3828:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801B3828
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801B382C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801B3830
  c->r[11]=c->r[1]+0x00000060u; // 801B3834
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801B3838
  c->lr=0x801B3840u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B383C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801B3840
  c->lr=c->r[0]; // 801B3844
  c->r[1]=c->r[1]+0x00000080u; // 801B3848
  return; // 801B384C
}

// fn_801B3850
void f_801B3850(Ctx* __restrict c) {
  trace_call(0x801B3850u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3850
  c->r[0]=c->lr; // 801B3854
  W32(c->r[1]+0x00000134u,c->r[0]); // 801B3858
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 801B385C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 801B3860
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 801B3864
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 801B3868
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 801B386C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 801B3870
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[28]);} // 801B3874
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,28,ea,0,0);} // 801B3878
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[27]);} // 801B387C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,27,ea,0,0);} // 801B3880
  c->r[11]=c->r[1]+0x000000E0u; // 801B3884
  c->lr=0x801B388Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3888
  c->r[31]=c->r[3]|c->r[3]; // 801B388C
  c->r[4]=0u+0x00000000u; // 801B3890
  c->lr=0x801B3898u; f_801B9640(c); // 801B3894
  c->r[4]=0u+0x803E0000u; // 801B3898
  c->r[28]=c->r[3]|c->r[3]; // 801B389C
  c->r[4]=c->r[4]+0x000005DCu; // 801B38A0
  c->r[4]=c->r[4]+0x00000081u; // 801B38A4
  c->lr=0x801B38ACu; f_80293554(c); // 801B38A8
  cmps(c,0,(int32_t)c->r[3],0); // 801B38AC
  if (!crb(c,2)) { goto L_801B3AA8; } // 801B38B0
  c->r[3]=c->r[31]|c->r[31]; // 801B38B4
  c->r[4]=0u+0x00000000u; // 801B38B8
  c->lr=0x801B38C0u; f_801B9640(c); // 801B38BC
  c->r[3]=c->r[31]|c->r[31]; // 801B38C0
  c->r[4]=0u+0x00000002u; // 801B38C4
  c->lr=0x801B38CCu; f_801B9714(c); // 801B38C8
  c->r[3]=c->r[31]|c->r[31]; // 801B38CC
  c->r[4]=0u+0x00000001u; // 801B38D0
  c->lr=0x801B38D8u; f_801B9714(c); // 801B38D4
  c->r[28]=c->r[3]|c->r[3]; // 801B38D8
  c->r[3]=c->r[31]|c->r[31]; // 801B38DC
  c->r[4]=0u+0x00000003u; // 801B38E0
  c->lr=0x801B38E8u; f_801B9640(c); // 801B38E4
  c->r[27]=c->r[3]|c->r[3]; // 801B38E8
  c->r[3]=c->r[31]|c->r[31]; // 801B38EC
  c->r[4]=0u+0x00000004u; // 801B38F0
  c->lr=0x801B38F8u; f_801B9640(c); // 801B38F4
  c->r[4]=c->r[3]|c->r[3]; // 801B38F8
  c->r[3]=c->r[28]|c->r[28]; // 801B38FC
  c->lr=0x801B3904u; f_801B3408(c); // 801B3900
  cmps(c,0,(int32_t)c->r[3],0); // 801B3904
  c->r[28]=c->r[3]|c->r[3]; // 801B3908
  if (!crb(c,2)) { goto L_801B3918; } // 801B390C
  c->r[28]=0u+0x00000000u; // 801B3910
  goto L_801B3AA0; // 801B3914
L_801B3918:;
  c->r[3]=c->r[31]|c->r[31]; // 801B3918
  c->r[4]=0u+0x00000007u; // 801B391C
  c->lr=0x801B3924u; f_801B9640(c); // 801B3920
  c->r[29]=c->r[3]|c->r[3]; // 801B3924
  c->r[3]=c->r[31]|c->r[31]; // 801B3928
  c->r[4]=0u+0x00000008u; // 801B392C
  c->lr=0x801B3934u; f_801B966C(c); // 801B3930
  c->f[29]=c->f[1]; // 801B3934
  c->r[3]=c->r[31]|c->r[31]; // 801B3938
  c->r[4]=0u+0x00000009u; // 801B393C
  c->lr=0x801B3944u; f_801B966C(c); // 801B3940
  c->f[30]=c->f[1]; // 801B3944
  c->r[3]=c->r[31]|c->r[31]; // 801B3948
  c->r[4]=0u+0x0000000Au; // 801B394C
  c->lr=0x801B3954u; f_801B966C(c); // 801B3950
  c->f[31]=c->f[1]; // 801B3954
  c->r[3]=c->r[31]|c->r[31]; // 801B3958
  c->r[4]=0u+0x0000000Bu; // 801B395C
  c->lr=0x801B3964u; f_801B966C(c); // 801B3960
  {uint32_t ea=c->r[2]+0xFFFFB3BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3964
  c->r[3]=c->r[31]|c->r[31]; // 801B3968
  c->r[4]=0u+0x0000000Cu; // 801B396C
  c->f[27]=c->ps1[27]=S(c->f[0]*c->f[1]); // 801B3970
  c->lr=0x801B3978u; f_801B9640(c); // 801B3974
  c->r[30]=c->r[3]|c->r[3]; // 801B3978
  c->r[3]=c->r[31]|c->r[31]; // 801B397C
  c->r[4]=0u+0x0000000Du; // 801B3980
  c->lr=0x801B3988u; f_801B966C(c); // 801B3984
  c->f[28]=c->f[1]; // 801B3988
  c->r[3]=c->r[29]|c->r[29]; // 801B398C
  c->lr=0x801B3994u; f_802894C0(c); // 801B3990
  cmps(c,0,(int32_t)c->r[3],0); // 801B3994
  if (!crb(c,2)) { goto L_801B39AC; } // 801B3998
  c->r[3]=c->r[30]|c->r[30]; // 801B399C
  c->lr=0x801B39A4u; f_802894C0(c); // 801B39A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B39A4
  if (crb(c,2)) { goto L_801B3A38; } // 801B39A8
L_801B39AC:;
  c->r[3]=c->r[1]+0x00000008u; // 801B39AC
  c->lr=0x801B39B4u; f_80264680(c); // 801B39B0
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B39B4
  c->r[3]=c->r[1]+0x00000008u; // 801B39B8
  {uint32_t ea=c->r[2]+0xFFFFB3C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B39BC
  c->f[3]=c->f[1]; // 801B39C0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[27]); // 801B39C4
  c->lr=0x801B39CCu; f_803949B8(c); // 801B39C8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[29]);} // 801B39CC
  c->r[3]=c->r[28]|c->r[28]; // 801B39D0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[30]);} // 801B39D4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 801B39D8
  c->r[12]=R32(c->r[28]+0x00000010u); // 801B39DC
  c->r[12]=R32(c->r[12]+0x00000338u); // 801B39E0
  c->ctr=c->r[12]; // 801B39E4
  if (true) { c->lr=0x801B39ECu; dispatch(c,c->ctr); } // 801B39E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B39EC
  c->r[4]=c->r[1]+0x00000008u; // 801B39F0
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801B39F4
  c->ctr=c->r[12]; // 801B39F8
  if (true) { c->lr=0x801B3A00u; dispatch(c,c->ctr); } // 801B39FC
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 801B3A00
  c->r[7]=0u+0x803E0000u; // 801B3A04
  c->r[7]=c->r[7]+0x000005DCu; // 801B3A08
  c->f[1]=c->f[28]; // 801B3A0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B3A10
  c->r[4]=c->r[28]|c->r[28]; // 801B3A14
  c->r[5]=c->r[29]|c->r[29]; // 801B3A18
  c->r[6]=c->r[30]|c->r[30]; // 801B3A1C
  c->r[12]=R32(c->r[12]+0x00000048u); // 801B3A20
  c->r[7]=c->r[7]+0x00000041u; // 801B3A24
  c->r[9]=c->r[1]+0x00000008u; // 801B3A28
  c->r[8]=0u+0x00000000u; // 801B3A2C
  c->ctr=c->r[12]; // 801B3A30
  if (true) { c->lr=0x801B3A38u; dispatch(c,c->ctr); } // 801B3A34
L_801B3A38:;
  c->r[4]=c->r[27]|c->r[27]; // 801B3A38
  c->r[3]=c->r[1]+0x00000038u; // 801B3A3C
  c->lr=0x801B3A44u; f_802933D8(c); // 801B3A40
  c->r[3]=c->r[1]+0x00000038u; // 801B3A44
  c->r[4]=0u+0x0000005Fu; // 801B3A48
  c->lr=0x801B3A50u; f_802936B0(c); // 801B3A4C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3A50
  if (crb(c,2)) { goto L_801B3A60; } // 801B3A54
  c->r[0]=0u+0x00000000u; // 801B3A58
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B3A5C
L_801B3A60:;
  c->r[3]=c->r[1]+0x00000038u; // 801B3A60
  c->lr=0x801B3A68u; f_802894C0(c); // 801B3A64
  cmps(c,0,(int32_t)c->r[3],0); // 801B3A68
  if (!crb(c,2)) { goto L_801B3A94; } // 801B3A6C
  c->lr=0x801B3A74u; f_8004FBE8(c); // 801B3A70
  c->r[4]=c->r[3]+0x00010000u; // 801B3A74
  c->r[5]=c->r[3]|c->r[3]; // 801B3A78
  c->r[0]=R32(c->r[4]+0xFFFF8318u); // 801B3A7C
  c->r[3]=c->r[1]+0x00000038u; // 801B3A80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6700); // 801B3A84
  c->r[4]=c->r[5]+c->r[0]; // 801B3A88
  c->r[4]=c->r[4]+0x00000008u; // 801B3A8C
  c->lr=0x801B3A94u; f_802933D8(c); // 801B3A90
L_801B3A94:;
  c->r[3]=c->r[28]+0x000004ACu; // 801B3A94
  c->r[4]=c->r[1]+0x00000038u; // 801B3A98
  c->lr=0x801B3AA0u; f_802933D8(c); // 801B3A9C
L_801B3AA0:;
  c->r[3]=c->r[28]|c->r[28]; // 801B3AA0
  goto L_801B3BE0; // 801B3AA4
L_801B3AA8:;
  c->r[3]=c->r[31]|c->r[31]; // 801B3AA8
  c->r[4]=0u+0x00000002u; // 801B3AAC
  c->lr=0x801B3AB4u; f_801B9714(c); // 801B3AB0
  c->r[29]=c->r[3]|c->r[3]; // 801B3AB4
  c->r[3]=c->r[31]|c->r[31]; // 801B3AB8
  c->r[4]=0u+0x00000001u; // 801B3ABC
  c->lr=0x801B3AC4u; f_801B9714(c); // 801B3AC0
  c->r[27]=c->r[3]|c->r[3]; // 801B3AC4
  c->r[3]=c->r[31]|c->r[31]; // 801B3AC8
  c->r[4]=0u+0x00000003u; // 801B3ACC
  c->lr=0x801B3AD4u; f_801B9640(c); // 801B3AD0
  c->r[26]=c->r[3]|c->r[3]; // 801B3AD4
  c->r[3]=c->r[31]|c->r[31]; // 801B3AD8
  c->r[4]=0u+0x00000004u; // 801B3ADC
  c->lr=0x801B3AE4u; f_801B9640(c); // 801B3AE0
  c->r[25]=c->r[3]|c->r[3]; // 801B3AE4
  c->r[3]=c->r[31]|c->r[31]; // 801B3AE8
  c->r[4]=0u+0x00000005u; // 801B3AEC
  c->lr=0x801B3AF4u; f_801B9640(c); // 801B3AF0
  c->r[24]=c->r[3]|c->r[3]; // 801B3AF4
  c->r[3]=c->r[31]|c->r[31]; // 801B3AF8
  c->r[4]=0u+0x00000006u; // 801B3AFC
  c->lr=0x801B3B04u; f_801B9714(c); // 801B3B00
  c->r[30]=c->r[3]|c->r[3]; // 801B3B04
  c->r[4]=c->r[26]|c->r[26]; // 801B3B08
  c->r[3]=c->r[1]+0x00000078u; // 801B3B0C
  c->lr=0x801B3B14u; f_802933D8(c); // 801B3B10
  c->r[3]=c->r[1]+0x00000078u; // 801B3B14
  c->r[4]=0u+0x0000005Fu; // 801B3B18
  c->lr=0x801B3B20u; f_802936B0(c); // 801B3B1C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3B20
  if (crb(c,2)) { goto L_801B3B30; } // 801B3B24
  c->r[0]=0u+0x00000000u; // 801B3B28
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B3B2C
L_801B3B30:;
  c->r[3]=c->r[28]|c->r[28]; // 801B3B30
  c->r[4]=c->r[25]|c->r[25]; // 801B3B34
  c->lr=0x801B3B3Cu; f_801B251C(c); // 801B3B38
  cmps(c,0,(int32_t)c->r[3],0); // 801B3B3C
  c->r[4]=c->r[3]|c->r[3]; // 801B3B40
  if (!crb(c,2)) { goto L_801B3B50; } // 801B3B44
  c->r[27]=0u+0x00000000u; // 801B3B48
  goto L_801B3B84; // 801B3B4C
L_801B3B50:;
  c->r[3]=c->r[30]^0x80000000u; // 801B3B50
  c->r[0]=0u+0x43300000u; // 801B3B54
  W32(c->r[1]+0x000000BCu,c->r[3]); // 801B3B58
  c->r[3]=c->r[27]|c->r[27]; // 801B3B5C
  {uint32_t ea=c->r[2]+0xFFFFB3C8u; c->f[1]=RF64(ea);} // 801B3B60
  c->r[5]=c->r[24]|c->r[24]; // 801B3B64
  W32(c->r[1]+0x000000B8u,c->r[0]); // 801B3B68
  c->r[7]=c->r[1]+0x00000078u; // 801B3B6C
  c->r[6]=0u+0x00000000u; // 801B3B70
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 801B3B74
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801B3B78
  c->lr=0x801B3B80u; f_801B2AB4(c); // 801B3B7C
  c->r[27]=c->r[3]|c->r[3]; // 801B3B80
L_801B3B84:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B3B84
  if (!crb(c,2)) { goto L_801B3B94; } // 801B3B88
  c->r[3]=0u+0x00000000u; // 801B3B8C
  goto L_801B3BE0; // 801B3B90
L_801B3B94:;
  c->r[3]=c->r[28]|c->r[28]; // 801B3B94
  c->r[4]=c->r[25]|c->r[25]; // 801B3B98
  c->lr=0x801B3BA0u; f_801B251C(c); // 801B3B9C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3BA0
  if (!crb(c,2)) { goto L_801B3BB0; } // 801B3BA4
  c->r[3]=0u+0x00000000u; // 801B3BA8
  goto L_801B3BE0; // 801B3BAC
L_801B3BB0:;
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801B3BB0
  cmps(c,0,(int32_t)c->r[12],0); // 801B3BB4
  if (crb(c,2)) { goto L_801B3BCC; } // 801B3BB8
  c->r[3]=c->r[27]|c->r[27]; // 801B3BBC
  c->r[4]=c->r[31]|c->r[31]; // 801B3BC0
  c->ctr=c->r[12]; // 801B3BC4
  if (true) { c->lr=0x801B3BCCu; dispatch(c,c->ctr); } // 801B3BC8
L_801B3BCC:;
  c->r[3]=c->r[28]|c->r[28]; // 801B3BCC
  c->r[4]=c->r[29]|c->r[29]; // 801B3BD0
  c->r[5]=c->r[27]|c->r[27]; // 801B3BD4
  c->lr=0x801B3BDCu; f_801B356C(c); // 801B3BD8
  c->r[3]=c->r[27]|c->r[27]; // 801B3BDC
L_801B3BE0:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 801B3BE0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 801B3BE4
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 801B3BE8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 801B3BEC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 801B3BF0
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 801B3BF4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,28,ea,0,0);} // 801B3BF8
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[28]=RF64(ea);} // 801B3BFC
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,27,ea,0,0);} // 801B3C00
  c->r[11]=c->r[1]+0x000000E0u; // 801B3C04
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[27]=RF64(ea);} // 801B3C08
  c->lr=0x801B3C10u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3C0C
  c->r[0]=R32(c->r[1]+0x00000134u); // 801B3C10
  c->lr=c->r[0]; // 801B3C14
  c->r[1]=c->r[1]+0x00000130u; // 801B3C18
  return; // 801B3C1C
}

// fn_801B3C20
void f_801B3C20(Ctx* __restrict c) {
  trace_call(0x801B3C20u);
  {uint32_t ea=c->r[1]+0xFFFFFD50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3C20
  c->r[0]=c->lr; // 801B3C24
  W32(c->r[1]+0x000002B4u,c->r[0]); // 801B3C28
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[31]);} // 801B3C2C
  {uint32_t ea=c->r[1]+0x000002A8u; psq_store(c,31,ea,0,0);} // 801B3C30
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[30]);} // 801B3C34
  {uint32_t ea=c->r[1]+0x00000298u; psq_store(c,30,ea,0,0);} // 801B3C38
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[29]);} // 801B3C3C
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,29,ea,0,0);} // 801B3C40
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[28]);} // 801B3C44
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,28,ea,0,0);} // 801B3C48
  c->r[11]=c->r[1]+0x00000270u; // 801B3C4C
  c->lr=0x801B3C54u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3C50
  c->r[27]=c->r[4]|c->r[4]; // 801B3C54
  c->r[26]=c->r[3]|c->r[3]; // 801B3C58
  c->r[3]=c->r[27]|c->r[27]; // 801B3C5C
  c->r[4]=0u+0x00000007u; // 801B3C60
  c->lr=0x801B3C68u; f_801B9640(c); // 801B3C64
  c->r[4]=0u+0x803E0000u; // 801B3C68
  c->r[5]=c->r[3]|c->r[3]; // 801B3C6C
  c->r[4]=c->r[4]+0x000005DCu; // 801B3C70
  c->r[3]=c->r[1]+0x00000150u; // 801B3C74
  c->r[4]=c->r[4]+0x00000085u; // 801B3C78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3C7C
  c->lr=0x801B3C84u; f_80291CC4(c); // 801B3C80
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B3C84
  c->r[4]=c->r[1]+0x00000150u; // 801B3C88
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B3C8C
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B3C90
  c->ctr=c->r[12]; // 801B3C94
  if (true) { c->lr=0x801B3C9Cu; dispatch(c,c->ctr); } // 801B3C98
  cmps(c,0,(int32_t)c->r[3],0); // 801B3C9C
  c->r[4]=c->r[3]|c->r[3]; // 801B3CA0
  if (crb(c,2)) { goto L_801B3CC0; } // 801B3CA4
  c->r[12]=R32(c->r[26]+0x00000010u); // 801B3CA8
  c->r[3]=c->r[26]|c->r[26]; // 801B3CAC
  c->r[5]=0u+0x00000000u; // 801B3CB0
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B3CB4
  c->ctr=c->r[12]; // 801B3CB8
  if (true) { c->lr=0x801B3CC0u; dispatch(c,c->ctr); } // 801B3CBC
L_801B3CC0:;
  c->r[3]=c->r[27]|c->r[27]; // 801B3CC0
  c->r[4]=0u+0x00000008u; // 801B3CC4
  c->lr=0x801B3CCCu; f_801B9714(c); // 801B3CC8
  cmps(c,0,(int32_t)c->r[3],1); // 801B3CCC
  if (!crb(c,2)) { goto L_801B3CF8; } // 801B3CD0
  c->r[3]=c->r[26]+0x00000394u; // 801B3CD4
  c->r[4]=0u+0x00000000u; // 801B3CD8
  c->r[5]=0u+0x00000001u; // 801B3CDC
  c->lr=0x801B3CE4u; f_800B16D0(c); // 801B3CE0
  c->r[3]=c->r[26]+0x00000394u; // 801B3CE4
  c->r[4]=0u+0x00000001u; // 801B3CE8
  c->r[5]=0u+0x00000000u; // 801B3CEC
  c->lr=0x801B3CF4u; f_800B16D0(c); // 801B3CF0
  goto L_801B3D10; // 801B3CF4
L_801B3CF8:;
  cmps(c,0,(int32_t)c->r[3],2); // 801B3CF8
  if (!crb(c,2)) { goto L_801B3D10; } // 801B3CFC
  c->r[3]=c->r[26]+0x00000394u; // 801B3D00
  c->r[4]=0u+0x00000001u; // 801B3D04
  c->r[5]=0u+0x00000000u; // 801B3D08
  c->lr=0x801B3D10u; f_800B16D0(c); // 801B3D0C
L_801B3D10:;
  c->r[3]=c->r[27]|c->r[27]; // 801B3D10
  c->r[4]=0u+0x00000009u; // 801B3D14
  c->lr=0x801B3D1Cu; f_801B9640(c); // 801B3D18
  c->r[30]=c->r[3]|c->r[3]; // 801B3D1C
  c->r[3]=c->r[27]|c->r[27]; // 801B3D20
  c->r[4]=0u+0x0000000Au; // 801B3D24
  c->lr=0x801B3D2Cu; f_801B966C(c); // 801B3D28
  c->f[29]=c->f[1]; // 801B3D2C
  c->r[3]=c->r[27]|c->r[27]; // 801B3D30
  c->r[4]=0u+0x0000000Bu; // 801B3D34
  c->lr=0x801B3D3Cu; f_801B966C(c); // 801B3D38
  c->f[31]=c->f[1]; // 801B3D3C
  c->r[3]=c->r[27]|c->r[27]; // 801B3D40
  c->r[4]=0u+0x0000000Cu; // 801B3D44
  c->lr=0x801B3D4Cu; f_801B966C(c); // 801B3D48
  c->f[30]=c->f[1]; // 801B3D4C
  c->r[3]=c->r[27]|c->r[27]; // 801B3D50
  c->r[4]=0u+0x0000000Du; // 801B3D54
  c->lr=0x801B3D5Cu; f_801B966C(c); // 801B3D58
  {uint32_t ea=c->r[2]+0xFFFFB3BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3D5C
  c->r[3]=c->r[27]|c->r[27]; // 801B3D60
  c->r[4]=0u+0x0000000Eu; // 801B3D64
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 801B3D68
  c->lr=0x801B3D70u; f_801B9640(c); // 801B3D6C
  c->r[31]=c->r[3]|c->r[3]; // 801B3D70
  c->r[3]=c->r[27]|c->r[27]; // 801B3D74
  c->r[4]=0u+0x0000000Fu; // 801B3D78
  c->lr=0x801B3D80u; f_801B9640(c); // 801B3D7C
  c->r[29]=c->r[3]|c->r[3]; // 801B3D80
  c->r[3]=c->r[27]|c->r[27]; // 801B3D84
  c->r[4]=0u+0x00000005u; // 801B3D88
  c->lr=0x801B3D90u; f_801B9640(c); // 801B3D8C
  c->r[28]=c->r[3]|c->r[3]; // 801B3D90
  c->r[3]=c->r[30]|c->r[30]; // 801B3D94
  c->lr=0x801B3D9Cu; f_802894C0(c); // 801B3D98
  cmps(c,0,(int32_t)c->r[3],0); // 801B3D9C
  if (!crb(c,2)) { goto L_801B3DC4; } // 801B3DA0
  c->r[3]=c->r[31]|c->r[31]; // 801B3DA4
  c->lr=0x801B3DACu; f_802894C0(c); // 801B3DA8
  cmps(c,0,(int32_t)c->r[3],0); // 801B3DAC
  if (!crb(c,2)) { goto L_801B3DC4; } // 801B3DB0
  c->r[3]=c->r[29]|c->r[29]; // 801B3DB4
  c->lr=0x801B3DBCu; f_802894C0(c); // 801B3DB8
  cmps(c,0,(int32_t)c->r[3],0); // 801B3DBC
  if (crb(c,2)) { goto L_801B3E48; } // 801B3DC0
L_801B3DC4:;
  c->r[3]=c->r[1]+0x00000020u; // 801B3DC4
  c->lr=0x801B3DCCu; f_80264680(c); // 801B3DC8
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B3DCC
  c->r[3]=c->r[1]+0x00000020u; // 801B3DD0
  {uint32_t ea=c->r[2]+0xFFFFB3C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B3DD4
  c->f[3]=c->f[1]; // 801B3DD8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[28]); // 801B3DDC
  c->lr=0x801B3DE4u; f_803949B8(c); // 801B3DE0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[29]);} // 801B3DE4
  c->r[3]=c->r[26]|c->r[26]; // 801B3DE8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[31]);} // 801B3DEC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[30]);} // 801B3DF0
  c->r[12]=R32(c->r[26]+0x00000010u); // 801B3DF4
  c->r[12]=R32(c->r[12]+0x00000338u); // 801B3DF8
  c->ctr=c->r[12]; // 801B3DFC
  if (true) { c->lr=0x801B3E04u; dispatch(c,c->ctr); } // 801B3E00
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B3E04
  c->r[4]=c->r[1]+0x00000020u; // 801B3E08
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801B3E0C
  c->ctr=c->r[12]; // 801B3E10
  if (true) { c->lr=0x801B3E18u; dispatch(c,c->ctr); } // 801B3E14
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 801B3E18
  c->r[4]=c->r[26]|c->r[26]; // 801B3E1C
  c->r[5]=c->r[30]|c->r[30]; // 801B3E20
  c->r[6]=c->r[31]|c->r[31]; // 801B3E24
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B3E28
  c->r[7]=c->r[29]|c->r[29]; // 801B3E2C
  c->r[8]=c->r[28]|c->r[28]; // 801B3E30
  c->r[9]=c->r[1]+0x00000020u; // 801B3E34
  c->r[12]=R32(c->r[12]+0x00000048u); // 801B3E38
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B3E3C
  c->ctr=c->r[12]; // 801B3E40
  if (true) { c->lr=0x801B3E48u; dispatch(c,c->ctr); } // 801B3E44
L_801B3E48:;
  c->r[3]=c->r[27]|c->r[27]; // 801B3E48
  c->r[4]=0u+0x00000010u; // 801B3E4C
  c->lr=0x801B3E54u; f_801B9640(c); // 801B3E50
  cmps(c,0,(int32_t)c->r[3],0); // 801B3E54
  c->r[28]=c->r[3]|c->r[3]; // 801B3E58
  if (crb(c,2)) { goto L_801B3F94; } // 801B3E5C
  c->lr=0x801B3E64u; f_802894C0(c); // 801B3E60
  cmps(c,0,(int32_t)c->r[3],0); // 801B3E64
  if (crb(c,2)) { goto L_801B3F94; } // 801B3E68
  c->r[31]=0u+0x803E0000u; // 801B3E6C
  c->r[5]=c->r[28]|c->r[28]; // 801B3E70
  c->r[31]=c->r[31]+0x000005DCu; // 801B3E74
  c->r[3]=c->r[1]+0x000000D0u; // 801B3E78
  c->r[4]=c->r[31]+0x0000008Du; // 801B3E7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3E80
  c->lr=0x801B3E88u; f_80291CC4(c); // 801B3E84
  c->r[5]=c->r[28]|c->r[28]; // 801B3E88
  c->r[3]=c->r[1]+0x00000050u; // 801B3E8C
  c->r[4]=c->r[31]+0x00000094u; // 801B3E90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B3E94
  c->lr=0x801B3E9Cu; f_80291CC4(c); // 801B3E98
  c->r[4]=c->r[1]+0x000000D0u; // 801B3E9C
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B3EA0
  c->lr=0x801B3EA8u; f_80104374(c); // 801B3EA4
  c->r[31]=R32(c->r[3]+0x00000010u); // 801B3EA8
  c->r[4]=c->r[1]+0x00000050u; // 801B3EAC
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B3EB0
  c->lr=0x801B3EB8u; f_80104374(c); // 801B3EB4
  cmps(c,0,(int32_t)c->r[31],0); // 801B3EB8
  c->r[30]=R32(c->r[3]+0x00000010u); // 801B3EBC
  if (crb(c,2)) { goto L_801B3EFC; } // 801B3EC0
  c->r[12]=R32(c->r[26]+0x00000010u); // 801B3EC4
  c->r[3]=c->r[26]|c->r[26]; // 801B3EC8
  c->r[4]=c->r[31]|c->r[31]; // 801B3ECC
  c->r[5]=0u+0x00000000u; // 801B3ED0
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B3ED4
  c->ctr=c->r[12]; // 801B3ED8
  if (true) { c->lr=0x801B3EE0u; dispatch(c,c->ctr); } // 801B3EDC
  c->r[12]=R32(c->r[26]+0x00000010u); // 801B3EE0
  c->r[3]=c->r[26]|c->r[26]; // 801B3EE4
  c->r[4]=c->r[30]|c->r[30]; // 801B3EE8
  c->r[5]=0u+0x00000001u; // 801B3EEC
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B3EF0
  c->ctr=c->r[12]; // 801B3EF4
  if (true) { c->lr=0x801B3EFCu; dispatch(c,c->ctr); } // 801B3EF8
L_801B3EFC:;
  c->r[3]=c->r[27]|c->r[27]; // 801B3EFC
  c->r[4]=0u+0x00000013u; // 801B3F00
  c->lr=0x801B3F08u; f_801B966C(c); // 801B3F04
  c->f[31]=c->f[1]; // 801B3F08
  c->r[3]=c->r[27]|c->r[27]; // 801B3F0C
  c->r[4]=0u+0x00000012u; // 801B3F10
  c->lr=0x801B3F18u; f_801B966C(c); // 801B3F14
  c->f[30]=c->f[1]; // 801B3F18
  c->r[3]=c->r[27]|c->r[27]; // 801B3F1C
  c->r[4]=0u+0x00000011u; // 801B3F20
  c->lr=0x801B3F28u; f_801B966C(c); // 801B3F24
  c->f[2]=c->f[30]; // 801B3F28
  c->r[3]=c->r[1]+0x00000014u; // 801B3F2C
  c->f[3]=c->f[31]; // 801B3F30
  c->lr=0x801B3F38u; f_800521A0(c); // 801B3F34
  c->r[3]=c->r[27]|c->r[27]; // 801B3F38
  c->r[4]=0u+0x00000016u; // 801B3F3C
  c->lr=0x801B3F44u; f_801B966C(c); // 801B3F40
  c->f[30]=c->f[1]; // 801B3F44
  c->r[3]=c->r[27]|c->r[27]; // 801B3F48
  c->r[4]=0u+0x00000015u; // 801B3F4C
  c->lr=0x801B3F54u; f_801B966C(c); // 801B3F50
  c->f[31]=c->f[1]; // 801B3F54
  c->r[3]=c->r[27]|c->r[27]; // 801B3F58
  c->r[4]=0u+0x00000014u; // 801B3F5C
  c->lr=0x801B3F64u; f_801B966C(c); // 801B3F60
  c->f[2]=c->f[31]; // 801B3F64
  c->r[3]=c->r[1]+0x00000008u; // 801B3F68
  c->f[3]=c->f[30]; // 801B3F6C
  c->lr=0x801B3F74u; f_800521A0(c); // 801B3F70
  c->r[3]=c->r[26]+0x00001F2Cu; // 801B3F74
  c->r[4]=c->r[1]+0x00000014u; // 801B3F78
  c->lr=0x801B3F80u; f_8003F468(c); // 801B3F7C
  c->r[3]=c->r[26]+0x00001F38u; // 801B3F80
  c->r[4]=c->r[1]+0x00000008u; // 801B3F84
  c->lr=0x801B3F8Cu; f_8003F468(c); // 801B3F88
  c->r[0]=0u+0x00000001u; // 801B3F8C
  W8(c->r[26]+0x00001F28u,c->r[0]); // 801B3F90
L_801B3F94:;
  c->r[3]=c->r[26]|c->r[26]; // 801B3F94
  c->lr=0x801B3F9Cu; f_8006E4FC(c); // 801B3F98
  {uint32_t ea=c->r[1]+0x000002A8u; psq_load(c,31,ea,0,0);} // 801B3F9C
  {uint32_t ea=c->r[1]+0x000002A0u; c->f[31]=RF64(ea);} // 801B3FA0
  {uint32_t ea=c->r[1]+0x00000298u; psq_load(c,30,ea,0,0);} // 801B3FA4
  {uint32_t ea=c->r[1]+0x00000290u; c->f[30]=RF64(ea);} // 801B3FA8
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,29,ea,0,0);} // 801B3FAC
  {uint32_t ea=c->r[1]+0x00000280u; c->f[29]=RF64(ea);} // 801B3FB0
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,28,ea,0,0);} // 801B3FB4
  c->r[11]=c->r[1]+0x00000270u; // 801B3FB8
  {uint32_t ea=c->r[1]+0x00000270u; c->f[28]=RF64(ea);} // 801B3FBC
  c->lr=0x801B3FC4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3FC0
  c->r[0]=R32(c->r[1]+0x000002B4u); // 801B3FC4
  c->lr=c->r[0]; // 801B3FC8
  c->r[1]=c->r[1]+0x000002B0u; // 801B3FCC
  return; // 801B3FD0
}

// fn_801B3FD4
void f_801B3FD4(Ctx* __restrict c) {
  trace_call(0x801B3FD4u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3FD4
  c->r[0]=c->lr; // 801B3FD8
  W32(c->r[1]+0x00000114u,c->r[0]); // 801B3FDC
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801B3FE0
  c->r[31]=c->r[3]|c->r[3]; // 801B3FE4
  c->r[3]=c->r[4]|c->r[4]; // 801B3FE8
  c->r[4]=0u+0x00000007u; // 801B3FEC
  c->lr=0x801B3FF4u; f_801B9640(c); // 801B3FF0
  c->r[4]=0u+0x803E0000u; // 801B3FF4
  c->r[5]=c->r[3]|c->r[3]; // 801B3FF8
  c->r[4]=c->r[4]+0x000005DCu; // 801B3FFC
  c->r[3]=c->r[1]+0x00000008u; // 801B4000
  c->r[4]=c->r[4]+0x00000085u; // 801B4004
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4008
  c->lr=0x801B4010u; f_80291CC4(c); // 801B400C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4010
  c->r[4]=c->r[1]+0x00000008u; // 801B4014
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4018
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B401C
  c->ctr=c->r[12]; // 801B4020
  if (true) { c->lr=0x801B4028u; dispatch(c,c->ctr); } // 801B4024
  cmps(c,0,(int32_t)c->r[3],0); // 801B4028
  c->r[4]=c->r[3]|c->r[3]; // 801B402C
  if (crb(c,2)) { goto L_801B404C; } // 801B4030
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B4034
  c->r[3]=c->r[31]|c->r[31]; // 801B4038
  c->r[5]=0u+0x00000000u; // 801B403C
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B4040
  c->ctr=c->r[12]; // 801B4044
  if (true) { c->lr=0x801B404Cu; dispatch(c,c->ctr); } // 801B4048
L_801B404C:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 801B404C
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801B4050
  c->lr=c->r[0]; // 801B4054
  c->r[1]=c->r[1]+0x00000110u; // 801B4058
  return; // 801B405C
}

// fn_801B4060
void f_801B4060(Ctx* __restrict c) {
  trace_call(0x801B4060u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4060
  c->r[0]=c->lr; // 801B4064
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B4068
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801B406C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801B4070
  c->r[11]=c->r[1]+0x00000050u; // 801B4074
  c->lr=0x801B407Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4078
  c->r[26]=c->r[4]|c->r[4]; // 801B407C
  c->r[25]=c->r[3]|c->r[3]; // 801B4080
  c->r[3]=c->r[26]|c->r[26]; // 801B4084
  c->r[4]=0u+0x00000007u; // 801B4088
  c->lr=0x801B4090u; f_801B9714(c); // 801B408C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4090
  c->r[23]=c->r[3]|c->r[3]; // 801B4094
  c->r[3]=c->r[1]+0x00000008u; // 801B4098
  c->f[2]=c->f[1]; // 801B409C
  c->f[3]=c->f[1]; // 801B40A0
  c->lr=0x801B40A8u; f_80065358(c); // 801B40A4
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B40A8
  c->r[3]=c->r[1]+0x00000014u; // 801B40AC
  {uint32_t ea=c->r[2]+0xFFFFB3D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B40B0
  c->f[2]=c->f[1]; // 801B40B4
  c->lr=0x801B40BCu; f_80065358(c); // 801B40B8
  c->r[12]=R32(c->r[25]+0x00000010u); // 801B40BC
  c->r[3]=c->r[25]|c->r[25]; // 801B40C0
  c->r[4]=c->r[1]+0x00000008u; // 801B40C4
  c->r[12]=R32(c->r[12]+0x00000334u); // 801B40C8
  c->ctr=c->r[12]; // 801B40CC
  if (true) { c->lr=0x801B40D4u; dispatch(c,c->ctr); } // 801B40D0
  W32(c->r[25]+0x00001F44u,c->r[23]); // 801B40D4
  c->r[3]=c->r[25]+0x00000394u; // 801B40D8
  c->r[4]=0u+0x0000000Cu; // 801B40DC
  c->r[5]=0u+0x00000001u; // 801B40E0
  c->lr=0x801B40E8u; f_800B16D0(c); // 801B40E4
  c->r[12]=R32(c->r[25]+0x00000010u); // 801B40E8
  c->r[3]=c->r[25]|c->r[25]; // 801B40EC
  c->r[12]=R32(c->r[12]+0x00000318u); // 801B40F0
  c->ctr=c->r[12]; // 801B40F4
  if (true) { c->lr=0x801B40FCu; dispatch(c,c->ctr); } // 801B40F8
  c->r[3]=c->r[26]|c->r[26]; // 801B40FC
  c->r[4]=0u+0x00000008u; // 801B4100
  c->lr=0x801B4108u; f_801B9640(c); // 801B4104
  c->r[28]=c->r[3]|c->r[3]; // 801B4108
  c->r[27]=0u+0x00000000u; // 801B410C
  c->r[24]=0u+0x00000000u; // 801B4110
  c->r[29]=0u+0x803F0000u; // 801B4114
  c->r[30]=0u+0x803F0000u; // 801B4118
  c->r[31]=0u+0x803F0000u; // 801B411C
  goto L_801B41FC; // 801B4120
L_801B4124:;
  c->r[0]=R32(c->r[25]+0x00000900u); // 801B4124
  c->r[3]=c->r[0]+c->r[24]; // 801B4128
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B412C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4130
  if (crb(c,2)) { goto L_801B41F4; } // 801B4134
  c->r[23]=R32(c->r[3]+0x0000002Cu); // 801B4138
  cmps(c,0,(int32_t)c->r[23],0); // 801B413C
  if (!crb(c,2)) { goto L_801B4160; } // 801B4140
  c->r[3]=c->r[29]+0x0000195Cu; // 801B4144
  c->r[5]=c->r[30]+0x00001940u; // 801B4148
  c->r[6]=c->r[31]+0x00001934u; // 801B414C
  c->r[4]=0u+0x00000026u; // 801B4150
  c->r[7]=c->r[13]+0xFFFF8788u; // 801B4154
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4158
  c->lr=0x801B4160u; f_803444BC(c); // 801B415C
L_801B4160:;
  c->r[0]=R32(c->r[23]+0x00000014u); // 801B4160
  cmps(c,0,(int32_t)c->r[0],0); // 801B4164
  if (crb(c,2)) { goto L_801B4174; } // 801B4168
  c->r[7]=c->r[23]+c->r[0]; // 801B416C
  goto L_801B4178; // 801B4170
L_801B4174:;
  c->r[7]=0u+0x00000000u; // 801B4174
L_801B4178:;
  c->r[4]=c->r[7]|c->r[7]; // 801B4178
  c->r[3]=c->r[28]|c->r[28]; // 801B417C
  c->r[6]=0u+0x00000000u; // 801B4180
  goto L_801B41AC; // 801B4184
L_801B4188:;
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801B4188
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801B418C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801B4190
  if (crb(c,2)) { goto L_801B41A0; } // 801B4194
  c->r[0]=0u+0x00000000u; // 801B4198
  goto L_801B41E8; // 801B419C
L_801B41A0:;
  c->r[6]=c->r[6]+0x00000001u; // 801B41A0
  c->r[3]=c->r[3]+0x00000001u; // 801B41A4
  c->r[4]=c->r[4]+0x00000001u; // 801B41A8
L_801B41AC:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 801B41AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 801B41B0
  if (crb(c,2)) { goto L_801B41C4; } // 801B41B4
  c->r[8]=R8(c->r[3]+0x00000000u); // 801B41B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[8]; cr0(c,c->r[0]); // 801B41BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B4188; } // 801B41C0
L_801B41C4:;
  c->r[0]=R8(c->r[7]+c->r[6]); // 801B41C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B41C8
  if (!crb(c,2)) { goto L_801B41E4; } // 801B41CC
  c->r[0]=R8(c->r[28]+c->r[6]); // 801B41D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B41D4
  if (!crb(c,2)) { goto L_801B41E4; } // 801B41D8
  c->r[0]=0u+0x00000001u; // 801B41DC
  goto L_801B41E8; // 801B41E0
L_801B41E4:;
  c->r[0]=0u+0x00000000u; // 801B41E4
L_801B41E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B41E8
  if (crb(c,2)) { goto L_801B41F4; } // 801B41EC
  goto L_801B420C; // 801B41F0
L_801B41F4:;
  c->r[27]=c->r[27]+0x00000001u; // 801B41F4
  c->r[24]=c->r[24]+0x0000001Cu; // 801B41F8
L_801B41FC:;
  c->r[0]=R32(c->r[25]+0x00000904u); // 801B41FC
  cmpu(c,0,c->r[27],c->r[0]); // 801B4200
  if (crb(c,0)) { IRQCHK(c); goto L_801B4124; } // 801B4204
  c->r[27]=0u+0xFFFFFFFFu; // 801B4208
L_801B420C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B420C
  if (crb(c,0)) { goto L_801B4238; } // 801B4210
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B4214
  c->r[4]=c->r[27]|c->r[27]; // 801B4218
  {uint32_t ea=c->r[2]+0xFFFFB3E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B421C
  c->r[3]=c->r[25]+0x000008D0u; // 801B4220
  {uint32_t ea=c->r[2]+0xFFFFB3D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B4224
  c->r[5]=0u+0x00000000u; // 801B4228
  c->r[6]=0u+0xFFFFFFFFu; // 801B422C
  c->r[7]=0u+0x00000000u; // 801B4230
  c->lr=0x801B4238u; f_8002D7B8(c); // 801B4234
L_801B4238:;
  c->r[3]=c->r[25]+0x00000C88u; // 801B4238
  c->r[4]=c->r[25]+0x000008ECu; // 801B423C
  c->lr=0x801B4244u; f_800BB0B4(c); // 801B4240
  c->r[3]=c->r[26]|c->r[26]; // 801B4244
  c->r[4]=0u+0x00000009u; // 801B4248
  c->lr=0x801B4250u; f_801B966C(c); // 801B424C
  c->r[3]=R32(c->r[25]+0x00000974u); // 801B4250
  c->r[4]=0u+0x00000000u; // 801B4254
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B4258
  c->lr=0x801B4260u; f_80165194(c); // 801B425C
  c->r[3]=c->r[26]|c->r[26]; // 801B4260
  c->r[4]=0u+0x0000000Au; // 801B4264
  c->lr=0x801B426Cu; f_801B966C(c); // 801B4268
  c->f[31]=c->f[1]; // 801B426C
  c->r[23]=0u+0x00000000u; // 801B4270
  c->r[26]=0u+0x00000000u; // 801B4274
  goto L_801B4294; // 801B4278
L_801B427C:;
  c->r[3]=R32(c->r[25]+0x00000974u); // 801B427C
  c->f[1]=c->f[31]; // 801B4280
  c->r[3]=R32(c->r[3]+c->r[26]); // 801B4284
  c->lr=0x801B428Cu; f_80165B9C(c); // 801B4288
  c->r[23]=c->r[23]+0x00000001u; // 801B428C
  c->r[26]=c->r[26]+0x00000004u; // 801B4290
L_801B4294:;
  c->r[0]=R32(c->r[25]+0x00000978u); // 801B4294
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 801B4298
  if (crb(c,0)) { IRQCHK(c); goto L_801B427C; } // 801B429C
  c->r[3]=R32(c->r[25]+0x00000994u); // 801B42A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B42A4
  if (crb(c,2)) { goto L_801B42C0; } // 801B42A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B42AC
  c->f[1]=c->f[31]; // 801B42B0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801B42B4
  c->ctr=c->r[12]; // 801B42B8
  if (true) { c->lr=0x801B42C0u; dispatch(c,c->ctr); } // 801B42BC
L_801B42C0:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801B42C0
  c->r[11]=c->r[1]+0x00000050u; // 801B42C4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801B42C8
  c->lr=0x801B42D0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B42CC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B42D0
  c->lr=c->r[0]; // 801B42D4
  c->r[1]=c->r[1]+0x00000060u; // 801B42D8
  return; // 801B42DC
}

// fn_801B42E0
void f_801B42E0(Ctx* __restrict c) {
  trace_call(0x801B42E0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B42E0
  c->r[0]=c->lr; // 801B42E4
  W32(c->r[1]+0x00000114u,c->r[0]); // 801B42E8
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B42EC
  c->r[30]=c->r[3]|c->r[3]; // 801B42F0
  c->r[3]=c->r[4]|c->r[4]; // 801B42F4
  c->r[4]=0u+0x00000007u; // 801B42F8
  c->lr=0x801B4300u; f_801B9640(c); // 801B42FC
  c->r[4]=0u+0x803E0000u; // 801B4300
  c->r[5]=c->r[3]|c->r[3]; // 801B4304
  c->r[4]=c->r[4]+0x000005DCu; // 801B4308
  c->r[3]=c->r[1]+0x00000008u; // 801B430C
  c->r[4]=c->r[4]+0x00000085u; // 801B4310
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4314
  c->lr=0x801B431Cu; f_80291CC4(c); // 801B4318
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B431C
  c->r[4]=c->r[1]+0x00000008u; // 801B4320
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4324
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4328
  c->ctr=c->r[12]; // 801B432C
  if (true) { c->lr=0x801B4334u; dispatch(c,c->ctr); } // 801B4330
  cmps(c,0,(int32_t)c->r[3],0); // 801B4334
  c->r[4]=c->r[3]|c->r[3]; // 801B4338
  if (crb(c,2)) { goto L_801B4358; } // 801B433C
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B4340
  c->r[3]=c->r[30]|c->r[30]; // 801B4344
  c->r[5]=0u+0x00000000u; // 801B4348
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B434C
  c->ctr=c->r[12]; // 801B4350
  if (true) { c->lr=0x801B4358u; dispatch(c,c->ctr); } // 801B4354
L_801B4358:;
  c->r[31]=0u+0x803E0000u; // 801B4358
  c->r[3]=c->r[1]+0x00000008u; // 801B435C
  c->r[31]=c->r[31]+0x000005DCu; // 801B4360
  c->r[4]=c->r[31]+0x0000009Fu; // 801B4364
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4368
  c->lr=0x801B4370u; f_80291CC4(c); // 801B436C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4370
  c->r[4]=c->r[1]+0x00000008u; // 801B4374
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4378
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B437C
  c->ctr=c->r[12]; // 801B4380
  if (true) { c->lr=0x801B4388u; dispatch(c,c->ctr); } // 801B4384
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B4388
  c->r[4]=c->r[3]|c->r[3]; // 801B438C
  c->r[3]=c->r[30]|c->r[30]; // 801B4390
  c->r[5]=0u+0x00000000u; // 801B4394
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B4398
  c->ctr=c->r[12]; // 801B439C
  if (true) { c->lr=0x801B43A4u; dispatch(c,c->ctr); } // 801B43A0
  c->r[3]=c->r[1]+0x00000008u; // 801B43A4
  c->r[4]=c->r[31]+0x000000A9u; // 801B43A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B43AC
  c->lr=0x801B43B4u; f_80291CC4(c); // 801B43B0
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B43B4
  c->r[4]=c->r[1]+0x00000008u; // 801B43B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B43BC
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B43C0
  c->ctr=c->r[12]; // 801B43C4
  if (true) { c->lr=0x801B43CCu; dispatch(c,c->ctr); } // 801B43C8
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B43CC
  c->r[4]=c->r[3]|c->r[3]; // 801B43D0
  c->r[3]=c->r[30]|c->r[30]; // 801B43D4
  c->r[5]=0u+0x00000001u; // 801B43D8
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B43DC
  c->ctr=c->r[12]; // 801B43E0
  if (true) { c->lr=0x801B43E8u; dispatch(c,c->ctr); } // 801B43E4
  c->r[3]=c->r[1]+0x00000008u; // 801B43E8
  c->r[4]=c->r[31]+0x000000B3u; // 801B43EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B43F0
  c->lr=0x801B43F8u; f_80291CC4(c); // 801B43F4
  c->r[4]=c->r[1]+0x00000008u; // 801B43F8
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B43FC
  c->lr=0x801B4404u; f_80104374(c); // 801B4400
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B4404
  c->r[4]=c->r[3]|c->r[3]; // 801B4408
  c->r[3]=c->r[30]|c->r[30]; // 801B440C
  c->r[5]=0u+0x00000002u; // 801B4410
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B4414
  c->r[4]=R32(c->r[4]+0x00000010u); // 801B4418
  c->ctr=c->r[12]; // 801B441C
  if (true) { c->lr=0x801B4424u; dispatch(c,c->ctr); } // 801B4420
  c->r[3]=c->r[1]+0x00000008u; // 801B4424
  c->r[4]=c->r[31]+0x000000BCu; // 801B4428
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B442C
  c->lr=0x801B4434u; f_80291CC4(c); // 801B4430
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4434
  c->r[4]=c->r[1]+0x00000008u; // 801B4438
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B443C
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4440
  c->ctr=c->r[12]; // 801B4444
  if (true) { c->lr=0x801B444Cu; dispatch(c,c->ctr); } // 801B4448
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B444C
  c->r[4]=c->r[3]|c->r[3]; // 801B4450
  c->r[3]=c->r[30]|c->r[30]; // 801B4454
  c->r[5]=0u+0x00000003u; // 801B4458
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B445C
  c->ctr=c->r[12]; // 801B4460
  if (true) { c->lr=0x801B4468u; dispatch(c,c->ctr); } // 801B4464
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B4468
  c->r[0]=R32(c->r[1]+0x00000114u); // 801B446C
  c->lr=c->r[0]; // 801B4470
  c->r[1]=c->r[1]+0x00000110u; // 801B4474
  return; // 801B4478
}

// fn_801B447C
void f_801B447C(Ctx* __restrict c) {
  trace_call(0x801B447Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B447C
  c->r[0]=c->lr; // 801B4480
  W32(c->r[1]+0x00000114u,c->r[0]); // 801B4484
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B4488
  c->r[30]=c->r[3]|c->r[3]; // 801B448C
  c->r[3]=c->r[4]|c->r[4]; // 801B4490
  c->r[4]=0u+0x00000007u; // 801B4494
  c->lr=0x801B449Cu; f_801B9640(c); // 801B4498
  c->r[4]=0u+0x803E0000u; // 801B449C
  c->r[5]=c->r[3]|c->r[3]; // 801B44A0
  c->r[4]=c->r[4]+0x000005DCu; // 801B44A4
  c->r[3]=c->r[1]+0x00000008u; // 801B44A8
  c->r[4]=c->r[4]+0x00000085u; // 801B44AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B44B0
  c->lr=0x801B44B8u; f_80291CC4(c); // 801B44B4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B44B8
  c->r[4]=c->r[1]+0x00000008u; // 801B44BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B44C0
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B44C4
  c->ctr=c->r[12]; // 801B44C8
  if (true) { c->lr=0x801B44D0u; dispatch(c,c->ctr); } // 801B44CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B44D0
  c->r[4]=c->r[3]|c->r[3]; // 801B44D4
  if (crb(c,2)) { goto L_801B44F4; } // 801B44D8
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B44DC
  c->r[3]=c->r[30]|c->r[30]; // 801B44E0
  c->r[5]=0u+0x00000000u; // 801B44E4
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B44E8
  c->ctr=c->r[12]; // 801B44EC
  if (true) { c->lr=0x801B44F4u; dispatch(c,c->ctr); } // 801B44F0
L_801B44F4:;
  c->r[31]=0u+0x803E0000u; // 801B44F4
  c->r[3]=c->r[1]+0x00000008u; // 801B44F8
  c->r[31]=c->r[31]+0x000005DCu; // 801B44FC
  c->r[4]=c->r[31]+0x0000009Fu; // 801B4500
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4504
  c->lr=0x801B450Cu; f_80291CC4(c); // 801B4508
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B450C
  c->r[4]=c->r[1]+0x00000008u; // 801B4510
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4514
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4518
  c->ctr=c->r[12]; // 801B451C
  if (true) { c->lr=0x801B4524u; dispatch(c,c->ctr); } // 801B4520
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B4524
  c->r[4]=c->r[3]|c->r[3]; // 801B4528
  c->r[3]=c->r[30]|c->r[30]; // 801B452C
  c->r[5]=0u+0x00000000u; // 801B4530
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B4534
  c->ctr=c->r[12]; // 801B4538
  if (true) { c->lr=0x801B4540u; dispatch(c,c->ctr); } // 801B453C
  c->r[3]=c->r[1]+0x00000008u; // 801B4540
  c->r[4]=c->r[31]+0x000000C4u; // 801B4544
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4548
  c->lr=0x801B4550u; f_80291CC4(c); // 801B454C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4550
  c->r[4]=c->r[1]+0x00000008u; // 801B4554
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4558
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B455C
  c->ctr=c->r[12]; // 801B4560
  if (true) { c->lr=0x801B4568u; dispatch(c,c->ctr); } // 801B4564
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B4568
  c->r[4]=c->r[3]|c->r[3]; // 801B456C
  c->r[3]=c->r[30]|c->r[30]; // 801B4570
  c->r[5]=0u+0x00000001u; // 801B4574
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B4578
  c->ctr=c->r[12]; // 801B457C
  if (true) { c->lr=0x801B4584u; dispatch(c,c->ctr); } // 801B4580
  c->r[3]=c->r[1]+0x00000008u; // 801B4584
  c->r[4]=c->r[31]+0x000000CEu; // 801B4588
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B458C
  c->lr=0x801B4594u; f_80291CC4(c); // 801B4590
  c->r[4]=c->r[1]+0x00000008u; // 801B4594
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B4598
  c->lr=0x801B45A0u; f_80104374(c); // 801B459C
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B45A0
  c->r[4]=c->r[3]|c->r[3]; // 801B45A4
  c->r[3]=c->r[30]|c->r[30]; // 801B45A8
  c->r[5]=0u+0x00000002u; // 801B45AC
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B45B0
  c->r[4]=R32(c->r[4]+0x00000010u); // 801B45B4
  c->ctr=c->r[12]; // 801B45B8
  if (true) { c->lr=0x801B45C0u; dispatch(c,c->ctr); } // 801B45BC
  c->r[3]=c->r[1]+0x00000008u; // 801B45C0
  c->r[4]=c->r[31]+0x000000D7u; // 801B45C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B45C8
  c->lr=0x801B45D0u; f_80291CC4(c); // 801B45CC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B45D0
  c->r[4]=c->r[1]+0x00000008u; // 801B45D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B45D8
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B45DC
  c->ctr=c->r[12]; // 801B45E0
  if (true) { c->lr=0x801B45E8u; dispatch(c,c->ctr); } // 801B45E4
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B45E8
  c->r[4]=c->r[3]|c->r[3]; // 801B45EC
  c->r[3]=c->r[30]|c->r[30]; // 801B45F0
  c->r[5]=0u+0x00000003u; // 801B45F4
  c->r[12]=R32(c->r[12]+0x00000328u); // 801B45F8
  c->ctr=c->r[12]; // 801B45FC
  if (true) { c->lr=0x801B4604u; dispatch(c,c->ctr); } // 801B4600
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B4604
  c->r[0]=R32(c->r[1]+0x00000114u); // 801B4608
  c->lr=c->r[0]; // 801B460C
  c->r[1]=c->r[1]+0x00000110u; // 801B4610
  return; // 801B4614
}

// fn_801B4618
void f_801B4618(Ctx* __restrict c) {
  trace_call(0x801B4618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4618
  c->r[0]=c->lr; // 801B461C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4620
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B4624
  c->r[31]=0u+0x803E0000u; // 801B4628
  c->r[31]=c->r[31]+0x000005DCu; // 801B462C
  c->r[30]=c->r[3]|c->r[3]; // 801B4630
  c->r[4]=c->r[31]+0x000000DFu; // 801B4634
  c->lr=0x801B463Cu; f_80293554(c); // 801B4638
  cmps(c,0,(int32_t)c->r[3],0); // 801B463C
  if (!crb(c,2)) { goto L_801B464C; } // 801B4640
  c->r[3]=0u+0x0000000Au; // 801B4644
  goto L_801B469C; // 801B4648
L_801B464C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B464C
  c->r[4]=c->r[31]+0x000000E2u; // 801B4650
  c->lr=0x801B4658u; f_80293554(c); // 801B4654
  cmps(c,0,(int32_t)c->r[3],0); // 801B4658
  if (!crb(c,2)) { goto L_801B4668; } // 801B465C
  c->r[3]=0u+0x00000014u; // 801B4660
  goto L_801B469C; // 801B4664
L_801B4668:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4668
  c->r[4]=c->r[31]+0x000000E5u; // 801B466C
  c->lr=0x801B4674u; f_80293554(c); // 801B4670
  cmps(c,0,(int32_t)c->r[3],0); // 801B4674
  if (!crb(c,2)) { goto L_801B4684; } // 801B4678
  c->r[3]=0u+0x00000028u; // 801B467C
  goto L_801B469C; // 801B4680
L_801B4684:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4684
  c->r[4]=c->r[31]+0x000000E8u; // 801B4688
  c->lr=0x801B4690u; f_80293554(c); // 801B468C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801B4690
  c->r[0]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B4694
  c->r[3]=rotl(c->r[0],0)&0x0000001Eu; // 801B4698
L_801B469C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B469C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B46A0
  c->lr=c->r[0]; // 801B46A4
  c->r[1]=c->r[1]+0x00000010u; // 801B46A8
  return; // 801B46AC
}

// fn_801B46B0
void f_801B46B0(Ctx* __restrict c) {
  trace_call(0x801B46B0u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B46B0
  c->r[0]=c->lr; // 801B46B4
  W32(c->r[1]+0x00000154u,c->r[0]); // 801B46B8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[31]);} // 801B46BC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,31,ea,0,0);} // 801B46C0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[30]);} // 801B46C4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,30,ea,0,0);} // 801B46C8
  c->r[11]=c->r[1]+0x00000130u; // 801B46CC
  c->lr=0x801B46D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B46D0
  c->r[31]=c->r[4]|c->r[4]; // 801B46D4
  c->r[30]=c->r[3]|c->r[3]; // 801B46D8
  c->r[4]=0u+0x00000008u; // 801B46DC
  c->r[3]=c->r[31]|c->r[31]; // 801B46E0
  c->lr=0x801B46E8u; f_801B9640(c); // 801B46E4
  c->r[28]=0u+0x803E0000u; // 801B46E8
  c->r[5]=c->r[3]|c->r[3]; // 801B46EC
  c->r[28]=c->r[28]+0x000005DCu; // 801B46F0
  c->r[3]=c->r[1]+0x00000010u; // 801B46F4
  c->r[4]=c->r[28]+0x00000085u; // 801B46F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B46FC
  c->lr=0x801B4704u; f_80291CC4(c); // 801B4700
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4704
  c->r[4]=c->r[1]+0x00000010u; // 801B4708
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B470C
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4710
  c->ctr=c->r[12]; // 801B4714
  if (true) { c->lr=0x801B471Cu; dispatch(c,c->ctr); } // 801B4718
  c->r[29]=c->r[3]|c->r[3]; // 801B471C
  c->r[3]=c->r[31]|c->r[31]; // 801B4720
  c->r[4]=0u+0x00000007u; // 801B4724
  c->lr=0x801B472Cu; f_801B9640(c); // 801B4728
  c->lr=0x801B4730u; f_801B4618(c); // 801B472C
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801B4730
  c->r[3]=c->r[30]|c->r[30]; // 801B4734
  c->r[5]=c->r[29]|c->r[29]; // 801B4738
  c->lr=0x801B4740u; f_801C390C(c); // 801B473C
  c->r[3]=c->r[31]|c->r[31]; // 801B4740
  c->r[4]=0u+0x00000009u; // 801B4744
  c->lr=0x801B474Cu; f_801B9640(c); // 801B4748
  c->r[29]=c->r[3]|c->r[3]; // 801B474C
  c->r[4]=c->r[28]+0x000000EBu; // 801B4750
  c->lr=0x801B4758u; f_80293554(c); // 801B4754
  cmps(c,0,(int32_t)c->r[3],0); // 801B4758
  if (!crb(c,2)) { goto L_801B4768; } // 801B475C
  c->r[28]=0u+0x00000000u; // 801B4760
  goto L_801B4780; // 801B4764
L_801B4768:;
  c->r[3]=c->r[29]|c->r[29]; // 801B4768
  c->r[4]=c->r[28]+0x000000EEu; // 801B476C
  c->lr=0x801B4774u; f_80293554(c); // 801B4770
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801B4774
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B4778
  c->r[28]=c->r[3]+0x00000002u; // 801B477C
L_801B4780:;
  c->r[3]=c->r[31]|c->r[31]; // 801B4780
  c->r[4]=0u+0x0000000Au; // 801B4784
  c->lr=0x801B478Cu; f_801B9640(c); // 801B4788
  c->lr=0x801B4790u; f_801B4618(c); // 801B478C
  W16(c->r[30]+0x00001FA4u,c->r[3]); // 801B4790
  c->r[3]=c->r[31]|c->r[31]; // 801B4794
  c->r[4]=0u+0x0000000Bu; // 801B4798
  W16(c->r[30]+0x00001FA6u,c->r[28]); // 801B479C
  c->lr=0x801B47A4u; f_801B9640(c); // 801B47A0
  c->r[4]=0u+0x803E0000u; // 801B47A4
  c->r[5]=c->r[3]|c->r[3]; // 801B47A8
  c->r[4]=c->r[4]+0x000005DCu; // 801B47AC
  c->r[3]=c->r[1]+0x00000010u; // 801B47B0
  c->r[4]=c->r[4]+0x00000085u; // 801B47B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B47B8
  c->lr=0x801B47C0u; f_80291CC4(c); // 801B47BC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B47C0
  c->r[4]=c->r[1]+0x00000010u; // 801B47C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B47C8
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B47CC
  c->ctr=c->r[12]; // 801B47D0
  if (true) { c->lr=0x801B47D8u; dispatch(c,c->ctr); } // 801B47D4
  c->r[27]=c->r[3]|c->r[3]; // 801B47D8
  c->r[3]=c->r[31]|c->r[31]; // 801B47DC
  c->r[4]=0u+0x0000000Du; // 801B47E0
  c->lr=0x801B47E8u; f_801B9714(c); // 801B47E4
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 801B47E8
  c->r[3]=c->r[31]|c->r[31]; // 801B47EC
  c->r[4]=0u+0x0000000Cu; // 801B47F0
  c->lr=0x801B47F8u; f_801B9714(c); // 801B47F4
  cmps(c,0,(int32_t)c->r[27],0); // 801B47F8
  c->r[28]=rotl(c->r[3],0)&0x0000FFFFu; // 801B47FC
  if (crb(c,2)) { goto L_801B4810; } // 801B4800
  c->r[4]=c->r[27]|c->r[27]; // 801B4804
  c->r[3]=c->r[30]+0x00002018u; // 801B4808
  c->lr=0x801B4810u; f_800B9BCC(c); // 801B480C
L_801B4810:;
  c->r[0]=0u+0x00000014u; // 801B4810
  W16(c->r[30]+0x00001FAAu,c->r[28]); // 801B4814
  c->r[3]=c->r[31]|c->r[31]; // 801B4818
  c->r[4]=0u+0x0000000Eu; // 801B481C
  W16(c->r[30]+0x00001FA8u,c->r[0]); // 801B4820
  W16(c->r[30]+0x00001FACu,c->r[29]); // 801B4824
  c->lr=0x801B482Cu; f_801B9640(c); // 801B4828
  c->r[29]=0u+0x803E0000u; // 801B482C
  c->r[5]=c->r[3]|c->r[3]; // 801B4830
  c->r[29]=c->r[29]+0x000005DCu; // 801B4834
  c->r[3]=c->r[1]+0x00000010u; // 801B4838
  c->r[4]=c->r[29]+0x00000085u; // 801B483C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4840
  c->lr=0x801B4848u; f_80291CC4(c); // 801B4844
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4848
  c->r[4]=c->r[1]+0x00000010u; // 801B484C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4850
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4854
  c->ctr=c->r[12]; // 801B4858
  if (true) { c->lr=0x801B4860u; dispatch(c,c->ctr); } // 801B485C
  c->r[28]=c->r[3]|c->r[3]; // 801B4860
  c->r[3]=c->r[31]|c->r[31]; // 801B4864
  c->r[4]=0u+0x00000010u; // 801B4868
  c->lr=0x801B4870u; f_801B9640(c); // 801B486C
  c->lr=0x801B4874u; f_801B4618(c); // 801B4870
  c->r[26]=rotl(c->r[3],0)&0x0000FFFFu; // 801B4874
  c->r[3]=c->r[31]|c->r[31]; // 801B4878
  c->r[4]=0u+0x0000000Fu; // 801B487C
  c->lr=0x801B4884u; f_801B9640(c); // 801B4880
  c->r[27]=c->r[3]|c->r[3]; // 801B4884
  c->r[4]=c->r[29]+0x000000F1u; // 801B4888
  c->lr=0x801B4890u; f_80293554(c); // 801B488C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4890
  if (!crb(c,2)) { goto L_801B48A0; } // 801B4894
  c->r[0]=0u+0x00000000u; // 801B4898
  goto L_801B48B8; // 801B489C
L_801B48A0:;
  c->r[3]=c->r[27]|c->r[27]; // 801B48A0
  c->r[4]=c->r[29]+0x000000F4u; // 801B48A4
  c->lr=0x801B48ACu; f_80293554(c); // 801B48A8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801B48AC
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B48B0
  c->r[0]=c->r[3]+0x00000002u; // 801B48B4
L_801B48B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801B48B8
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801B48BC
  c->r[4]=0u+0x00000014u; // 801B48C0
  c->lr=0x801B48C8u; f_801B966C(c); // 801B48C4
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B48C8
  c->f[31]=c->f[1]; // 801B48CC
  fcmp(c,0,c->f[1],c->f[0]); // 801B48D0
  if (!crb(c,1)) { goto L_801B48FC; } // 801B48D4
  cmps(c,0,(int32_t)c->r[28],0); // 801B48D8
  if (crb(c,2)) { goto L_801B48EC; } // 801B48DC
  c->r[4]=c->r[28]|c->r[28]; // 801B48E0
  c->r[3]=c->r[30]+0x00002090u; // 801B48E4
  c->lr=0x801B48ECu; f_800B9BCC(c); // 801B48E8
L_801B48EC:;
  W16(c->r[30]+0x000021E4u,c->r[26]); // 801B48EC
  W16(c->r[30]+0x000021E6u,c->r[27]); // 801B48F0
  {uint32_t ea=c->r[30]+0x000021E8u; WF32(ea,c->f[31]);} // 801B48F4
  goto L_801B4918; // 801B48F8
L_801B48FC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B48FC
  if (crb(c,2)) { goto L_801B4910; } // 801B4900
  c->r[4]=c->r[28]|c->r[28]; // 801B4904
  c->r[3]=c->r[30]+0x00002090u; // 801B4908
  c->lr=0x801B4910u; f_800B9BCC(c); // 801B490C
L_801B4910:;
  W16(c->r[30]+0x000021E4u,c->r[26]); // 801B4910
  W16(c->r[30]+0x000021E6u,c->r[27]); // 801B4914
L_801B4918:;
  c->r[3]=c->r[31]|c->r[31]; // 801B4918
  c->r[4]=0u+0x00000011u; // 801B491C
  c->lr=0x801B4924u; f_801B966C(c); // 801B4920
  c->f[31]=c->f[1]; // 801B4924
  c->r[3]=c->r[31]|c->r[31]; // 801B4928
  c->r[4]=0u+0x00000012u; // 801B492C
  c->lr=0x801B4934u; f_801B9640(c); // 801B4930
  c->lr=0x801B4938u; f_801B4618(c); // 801B4934
  W16(c->r[30]+0x00001FB4u,c->r[3]); // 801B4938
  c->r[3]=c->r[31]|c->r[31]; // 801B493C
  c->r[4]=0u+0x00000013u; // 801B4940
  {uint32_t ea=c->r[30]+0x00001FB8u; WF32(ea,c->f[31]);} // 801B4944
  c->lr=0x801B494Cu; f_801B9640(c); // 801B4948
  c->r[4]=0u+0x803E0000u; // 801B494C
  c->r[5]=c->r[3]|c->r[3]; // 801B4950
  c->r[4]=c->r[4]+0x000005DCu; // 801B4954
  c->r[3]=c->r[1]+0x00000010u; // 801B4958
  c->r[4]=c->r[4]+0x00000085u; // 801B495C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4960
  c->lr=0x801B4968u; f_80291CC4(c); // 801B4964
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4968
  c->r[4]=c->r[1]+0x00000010u; // 801B496C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4970
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4974
  c->ctr=c->r[12]; // 801B4978
  if (true) { c->lr=0x801B4980u; dispatch(c,c->ctr); } // 801B497C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4980
  if (crb(c,2)) { goto L_801B4994; } // 801B4984
  c->r[4]=c->r[3]|c->r[3]; // 801B4988
  c->r[3]=c->r[30]+0x00002108u; // 801B498C
  c->lr=0x801B4994u; f_800B9BCC(c); // 801B4990
L_801B4994:;
  c->r[3]=c->r[31]|c->r[31]; // 801B4994
  c->r[4]=0u+0x00000015u; // 801B4998
  c->lr=0x801B49A0u; f_801B966C(c); // 801B499C
  c->f[31]=c->f[1]; // 801B49A0
  c->r[3]=c->r[31]|c->r[31]; // 801B49A4
  c->r[4]=0u+0x00000016u; // 801B49A8
  c->lr=0x801B49B0u; f_801B966C(c); // 801B49AC
  c->f[30]=c->f[1]; // 801B49B0
  c->r[3]=c->r[31]|c->r[31]; // 801B49B4
  c->r[4]=0u+0x00000017u; // 801B49B8
  c->lr=0x801B49C0u; f_801B966C(c); // 801B49BC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B49C0
  c->f[3]=c->f[1]; // 801B49C4
  fcmp(c,0,c->f[31],c->f[0]); // 801B49C8
  if (crb(c,1)) { goto L_801B49E0; } // 801B49CC
  fcmp(c,0,c->f[30],c->f[0]); // 801B49D0
  if (crb(c,1)) { goto L_801B49E0; } // 801B49D4
  fcmp(c,0,c->f[1],c->f[0]); // 801B49D8
  if (!crb(c,1)) { goto L_801B49F0; } // 801B49DC
L_801B49E0:;
  c->f[1]=c->f[31]; // 801B49E0
  c->r[3]=c->r[30]|c->r[30]; // 801B49E4
  c->f[2]=c->f[30]; // 801B49E8
  c->lr=0x801B49F0u; f_801C39C0(c); // 801B49EC
L_801B49F0:;
  c->r[0]=0u+0x0000001Eu; // 801B49F0
  c->r[3]=c->r[30]|c->r[30]; // 801B49F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B49F8
  c->r[4]=c->r[31]|c->r[31]; // 801B49FC
  c->r[5]=0u+0x00000018u; // 801B4A00
  c->r[6]=0u+0x00000019u; // 801B4A04
  c->r[7]=0u+0x0000001Au; // 801B4A08
  c->r[8]=0u+0x0000001Bu; // 801B4A0C
  c->r[9]=0u+0x0000001Cu; // 801B4A10
  c->r[10]=0u+0x0000001Du; // 801B4A14
  c->lr=0x801B4A1Cu; f_801B2900(c); // 801B4A18
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,31,ea,0,0);} // 801B4A1C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[31]=RF64(ea);} // 801B4A20
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,30,ea,0,0);} // 801B4A24
  c->r[11]=c->r[1]+0x00000130u; // 801B4A28
  {uint32_t ea=c->r[1]+0x00000130u; c->f[30]=RF64(ea);} // 801B4A2C
  c->lr=0x801B4A34u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4A30
  c->r[0]=R32(c->r[1]+0x00000154u); // 801B4A34
  c->lr=c->r[0]; // 801B4A38
  c->r[1]=c->r[1]+0x00000150u; // 801B4A3C
  return; // 801B4A40
}

// fn_801B4A44
void f_801B4A44(Ctx* __restrict c) {
  trace_call(0x801B4A44u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4A44
  c->r[0]=c->lr; // 801B4A48
  W32(c->r[1]+0x00000134u,c->r[0]); // 801B4A4C
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 801B4A50
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 801B4A54
  c->r[11]=c->r[1]+0x00000120u; // 801B4A58
  c->lr=0x801B4A60u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4A5C
  c->r[28]=c->r[4]|c->r[4]; // 801B4A60
  c->r[29]=c->r[3]|c->r[3]; // 801B4A64
  c->r[3]=c->r[28]|c->r[28]; // 801B4A68
  c->r[4]=0u+0x00000008u; // 801B4A6C
  c->lr=0x801B4A74u; f_801B9640(c); // 801B4A70
  c->r[31]=0u+0x803E0000u; // 801B4A74
  c->r[5]=c->r[3]|c->r[3]; // 801B4A78
  c->r[31]=c->r[31]+0x000005DCu; // 801B4A7C
  c->r[3]=c->r[1]+0x00000008u; // 801B4A80
  c->r[4]=c->r[31]+0x00000085u; // 801B4A84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4A88
  c->lr=0x801B4A90u; f_80291CC4(c); // 801B4A8C
  c->r[3]=c->r[28]|c->r[28]; // 801B4A90
  c->r[4]=0u+0x00000007u; // 801B4A94
  c->lr=0x801B4A9Cu; f_801B9640(c); // 801B4A98
  c->r[30]=c->r[3]|c->r[3]; // 801B4A9C
  c->r[4]=c->r[31]+0x000000E2u; // 801B4AA0
  c->lr=0x801B4AA8u; f_80293554(c); // 801B4AA4
  cmps(c,0,(int32_t)c->r[3],0); // 801B4AA8
  if (!crb(c,2)) { goto L_801B4AB8; } // 801B4AAC
  c->r[31]=0u+0x00000014u; // 801B4AB0
  goto L_801B4AC8; // 801B4AB4
L_801B4AB8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4AB8
  c->r[4]=c->r[31]+0x000000E8u; // 801B4ABC
  c->lr=0x801B4AC4u; f_80293554(c); // 801B4AC0
  c->r[31]=0u+0x0000001Eu; // 801B4AC4
L_801B4AC8:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4AC8
  c->r[4]=c->r[1]+0x00000008u; // 801B4ACC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4AD0
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4AD4
  c->ctr=c->r[12]; // 801B4AD8
  if (true) { c->lr=0x801B4AE0u; dispatch(c,c->ctr); } // 801B4ADC
  c->r[5]=c->r[3]|c->r[3]; // 801B4AE0
  c->r[3]=c->r[29]|c->r[29]; // 801B4AE4
  c->r[4]=c->r[31]|c->r[31]; // 801B4AE8
  c->lr=0x801B4AF0u; f_801C390C(c); // 801B4AEC
  c->r[3]=c->r[28]|c->r[28]; // 801B4AF0
  c->r[4]=0u+0x0000000Au; // 801B4AF4
  c->lr=0x801B4AFCu; f_801B966C(c); // 801B4AF8
  c->f[31]=c->f[1]; // 801B4AFC
  c->r[3]=c->r[28]|c->r[28]; // 801B4B00
  c->r[4]=0u+0x00000009u; // 801B4B04
  c->lr=0x801B4B0Cu; f_801B966C(c); // 801B4B08
  {uint32_t ea=c->r[2]+0xFFFFB3ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4B0C
  c->r[3]=c->r[28]|c->r[28]; // 801B4B10
  {uint32_t ea=c->r[29]+0x000021D8u; WF32(ea,c->f[1]);} // 801B4B14
  c->r[4]=0u+0x0000000Cu; // 801B4B18
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801B4B1C
  {uint32_t ea=c->r[29]+0x000021DCu; WF32(ea,c->f[0]);} // 801B4B20
  c->lr=0x801B4B28u; f_801B9640(c); // 801B4B24
  c->r[4]=0u+0x803E0000u; // 801B4B28
  c->r[5]=c->r[3]|c->r[3]; // 801B4B2C
  c->r[4]=c->r[4]+0x000005DCu; // 801B4B30
  c->r[3]=c->r[1]+0x00000008u; // 801B4B34
  c->r[4]=c->r[4]+0x00000085u; // 801B4B38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4B3C
  c->lr=0x801B4B44u; f_80291CC4(c); // 801B4B40
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4B44
  c->r[4]=c->r[1]+0x00000008u; // 801B4B48
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4B4C
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4B50
  c->ctr=c->r[12]; // 801B4B54
  if (true) { c->lr=0x801B4B5Cu; dispatch(c,c->ctr); } // 801B4B58
  cmps(c,0,(int32_t)c->r[3],0); // 801B4B5C
  if (crb(c,2)) { goto L_801B4B70; } // 801B4B60
  c->r[4]=c->r[3]|c->r[3]; // 801B4B64
  c->r[3]=c->r[29]+0x00002090u; // 801B4B68
  c->lr=0x801B4B70u; f_800B9BCC(c); // 801B4B6C
L_801B4B70:;
  c->r[3]=c->r[28]|c->r[28]; // 801B4B70
  c->r[4]=0u+0x0000000Fu; // 801B4B74
  c->lr=0x801B4B7Cu; f_801B9714(c); // 801B4B78
  c->r[0]=cntlz(c->r[3]); // 801B4B7C
  c->r[3]=c->r[28]|c->r[28]; // 801B4B80
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B4B84
  c->r[4]=0u+0x0000000Eu; // 801B4B88
  c->lr=0x801B4B90u; f_801B966C(c); // 801B4B8C
  {uint32_t ea=c->r[29]+0x000021B4u; WF32(ea,c->f[1]);} // 801B4B90
  c->r[3]=c->r[28]|c->r[28]; // 801B4B94
  c->r[4]=0u+0x0000000Du; // 801B4B98
  {uint32_t ea=c->r[29]+0x000021B0u; WF32(ea,c->f[1]);} // 801B4B9C
  W8(c->r[29]+0x00002208u,c->r[30]); // 801B4BA0
  c->lr=0x801B4BA8u; f_801B966C(c); // 801B4BA4
  c->f[31]=c->f[1]; // 801B4BA8
  c->r[3]=c->r[28]|c->r[28]; // 801B4BAC
  c->r[4]=0u+0x0000000Bu; // 801B4BB0
  c->lr=0x801B4BB8u; f_801B966C(c); // 801B4BB4
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4BB8
  c->f[3]=c->f[1]; // 801B4BBC
  fcmp(c,0,c->f[31],c->f[0]); // 801B4BC0
  if (crb(c,1)) { goto L_801B4BD0; } // 801B4BC4
  fcmp(c,0,c->f[1],c->f[0]); // 801B4BC8
  if (!crb(c,1)) { goto L_801B4BE0; } // 801B4BCC
L_801B4BD0:;
  c->f[1]=c->f[31]; // 801B4BD0
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B4BD4
  c->r[3]=c->r[29]|c->r[29]; // 801B4BD8
  c->lr=0x801B4BE0u; f_801C39C0(c); // 801B4BDC
L_801B4BE0:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 801B4BE0
  c->r[11]=c->r[1]+0x00000120u; // 801B4BE4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 801B4BE8
  c->lr=0x801B4BF0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4BEC
  c->r[0]=R32(c->r[1]+0x00000134u); // 801B4BF0
  c->lr=c->r[0]; // 801B4BF4
  c->r[1]=c->r[1]+0x00000130u; // 801B4BF8
  return; // 801B4BFC
}

// fn_801B4C00
void f_801B4C00(Ctx* __restrict c) {
  trace_call(0x801B4C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4C00
  c->r[0]=c->lr; // 801B4C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4C08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B4C0C
  c->r[31]=0u+0x803E0000u; // 801B4C10
  c->r[31]=c->r[31]+0x000005DCu; // 801B4C14
  c->r[30]=c->r[3]|c->r[3]; // 801B4C18
  c->r[4]=c->r[31]+0x000000E2u; // 801B4C1C
  c->lr=0x801B4C24u; f_80293554(c); // 801B4C20
  cmps(c,0,(int32_t)c->r[3],0); // 801B4C24
  if (!crb(c,2)) { goto L_801B4C34; } // 801B4C28
  c->r[3]=0u+0x00000014u; // 801B4C2C
  goto L_801B4C44; // 801B4C30
L_801B4C34:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4C34
  c->r[4]=c->r[31]+0x000000E8u; // 801B4C38
  c->lr=0x801B4C40u; f_80293554(c); // 801B4C3C
  c->r[3]=0u+0x0000001Eu; // 801B4C40
L_801B4C44:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B4C44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4C48
  c->lr=c->r[0]; // 801B4C4C
  c->r[1]=c->r[1]+0x00000010u; // 801B4C50
  return; // 801B4C54
}

// fn_801B4C58
void f_801B4C58(Ctx* __restrict c) {
  trace_call(0x801B4C58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4C58
  c->r[0]=c->lr; // 801B4C5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4C60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B4C64
  c->r[31]=0u+0x803E0000u; // 801B4C68
  c->r[31]=c->r[31]+0x000005DCu; // 801B4C6C
  c->r[30]=c->r[3]|c->r[3]; // 801B4C70
  c->r[4]=c->r[31]+0x000000EBu; // 801B4C74
  c->lr=0x801B4C7Cu; f_80293554(c); // 801B4C78
  cmps(c,0,(int32_t)c->r[3],0); // 801B4C7C
  if (!crb(c,2)) { goto L_801B4C8C; } // 801B4C80
  c->r[3]=0u+0x00000000u; // 801B4C84
  goto L_801B4CA4; // 801B4C88
L_801B4C8C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4C8C
  c->r[4]=c->r[31]+0x000000EEu; // 801B4C90
  c->lr=0x801B4C98u; f_80293554(c); // 801B4C94
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801B4C98
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801B4C9C
  c->r[3]=c->r[3]+0x00000002u; // 801B4CA0
L_801B4CA4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B4CA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4CA8
  c->lr=c->r[0]; // 801B4CAC
  c->r[1]=c->r[1]+0x00000010u; // 801B4CB0
  return; // 801B4CB4
}

// fn_801B4CB8
void f_801B4CB8(Ctx* __restrict c) {
  trace_call(0x801B4CB8u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4CB8
  c->r[0]=c->lr; // 801B4CBC
  W32(c->r[1]+0x00000154u,c->r[0]); // 801B4CC0
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[31]);} // 801B4CC4
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,31,ea,0,0);} // 801B4CC8
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[30]);} // 801B4CCC
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,30,ea,0,0);} // 801B4CD0
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[29]);} // 801B4CD4
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,29,ea,0,0);} // 801B4CD8
  c->r[11]=c->r[1]+0x00000120u; // 801B4CDC
  c->lr=0x801B4CE4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4CE0
  c->r[28]=c->r[4]|c->r[4]; // 801B4CE4
  c->r[29]=c->r[3]|c->r[3]; // 801B4CE8
  c->r[3]=c->r[28]|c->r[28]; // 801B4CEC
  c->r[4]=0u+0x00000008u; // 801B4CF0
  c->lr=0x801B4CF8u; f_801B9640(c); // 801B4CF4
  c->r[30]=0u+0x803E0000u; // 801B4CF8
  c->r[5]=c->r[3]|c->r[3]; // 801B4CFC
  c->r[30]=c->r[30]+0x000005DCu; // 801B4D00
  c->r[3]=c->r[1]+0x00000008u; // 801B4D04
  c->r[4]=c->r[30]+0x00000085u; // 801B4D08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4D0C
  c->lr=0x801B4D14u; f_80291CC4(c); // 801B4D10
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4D14
  c->r[4]=c->r[1]+0x00000008u; // 801B4D18
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4D1C
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4D20
  c->ctr=c->r[12]; // 801B4D24
  if (true) { c->lr=0x801B4D2Cu; dispatch(c,c->ctr); } // 801B4D28
  c->r[31]=c->r[3]|c->r[3]; // 801B4D2C
  c->r[3]=c->r[28]|c->r[28]; // 801B4D30
  c->r[4]=0u+0x00000007u; // 801B4D34
  c->lr=0x801B4D3Cu; f_801B9640(c); // 801B4D38
  c->lr=0x801B4D40u; f_801B4C00(c); // 801B4D3C
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801B4D40
  c->r[3]=c->r[29]|c->r[29]; // 801B4D44
  c->r[5]=c->r[31]|c->r[31]; // 801B4D48
  c->lr=0x801B4D50u; f_801C390C(c); // 801B4D4C
  c->r[3]=c->r[28]|c->r[28]; // 801B4D50
  c->r[4]=0u+0x00000009u; // 801B4D54
  c->lr=0x801B4D5Cu; f_801B9640(c); // 801B4D58
  c->lr=0x801B4D60u; f_801B4C58(c); // 801B4D5C
  W16(c->r[29]+0x00002196u,c->r[3]); // 801B4D60
  c->r[3]=c->r[28]|c->r[28]; // 801B4D64
  c->r[4]=0u+0x0000000Au; // 801B4D68
  c->lr=0x801B4D70u; f_801B9640(c); // 801B4D6C
  c->r[5]=c->r[3]|c->r[3]; // 801B4D70
  c->r[3]=c->r[1]+0x00000008u; // 801B4D74
  c->r[4]=c->r[30]+0x00000085u; // 801B4D78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4D7C
  c->lr=0x801B4D84u; f_80291CC4(c); // 801B4D80
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4D84
  c->r[4]=c->r[1]+0x00000008u; // 801B4D88
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4D8C
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4D90
  c->ctr=c->r[12]; // 801B4D94
  if (true) { c->lr=0x801B4D9Cu; dispatch(c,c->ctr); } // 801B4D98
  cmps(c,0,(int32_t)c->r[3],0); // 801B4D9C
  if (crb(c,2)) { goto L_801B4DB0; } // 801B4DA0
  c->r[4]=c->r[3]|c->r[3]; // 801B4DA4
  c->r[3]=c->r[29]+0x00002090u; // 801B4DA8
  c->lr=0x801B4DB0u; f_800B9BCC(c); // 801B4DAC
L_801B4DB0:;
  c->r[3]=c->r[28]|c->r[28]; // 801B4DB0
  c->r[4]=0u+0x00000011u; // 801B4DB4
  c->lr=0x801B4DBCu; f_801B966C(c); // 801B4DB8
  c->f[29]=c->f[1]; // 801B4DBC
  c->r[3]=c->r[28]|c->r[28]; // 801B4DC0
  c->r[4]=0u+0x00000010u; // 801B4DC4
  c->lr=0x801B4DCCu; f_801B966C(c); // 801B4DC8
  c->f[30]=c->f[1]; // 801B4DCC
  c->r[3]=c->r[28]|c->r[28]; // 801B4DD0
  c->r[4]=0u+0x0000000Cu; // 801B4DD4
  c->lr=0x801B4DDCu; f_801B966C(c); // 801B4DD8
  c->f[31]=c->f[1]; // 801B4DDC
  c->r[3]=c->r[28]|c->r[28]; // 801B4DE0
  c->r[4]=0u+0x0000000Fu; // 801B4DE4
  c->lr=0x801B4DECu; f_801B966C(c); // 801B4DE8
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4DEC
  fcmp(c,0,c->f[31],c->f[0]); // 801B4DF0
  if (!crb(c,1)) { goto L_801B4DFC; } // 801B4DF4
  {uint32_t ea=c->r[29]+0x000021E0u; WF32(ea,c->f[31]);} // 801B4DF8
L_801B4DFC:;
  {uint32_t ea=c->r[29]+0x000021ACu; WF32(ea,c->f[1]);} // 801B4DFC
  c->r[3]=c->r[28]|c->r[28]; // 801B4E00
  c->r[4]=0u+0x0000000Bu; // 801B4E04
  {uint32_t ea=c->r[29]+0x000021DCu; WF32(ea,c->f[30]);} // 801B4E08
  {uint32_t ea=c->r[29]+0x000021E4u; WF32(ea,c->f[29]);} // 801B4E0C
  c->lr=0x801B4E14u; f_801B9640(c); // 801B4E10
  c->r[4]=0u+0x803E0000u; // 801B4E14
  c->r[5]=c->r[3]|c->r[3]; // 801B4E18
  c->r[4]=c->r[4]+0x000005DCu; // 801B4E1C
  c->r[3]=c->r[1]+0x00000008u; // 801B4E20
  c->r[4]=c->r[4]+0x00000085u; // 801B4E24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4E28
  c->lr=0x801B4E30u; f_80291CC4(c); // 801B4E2C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4E30
  c->r[4]=c->r[1]+0x00000008u; // 801B4E34
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4E38
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4E3C
  c->ctr=c->r[12]; // 801B4E40
  if (true) { c->lr=0x801B4E48u; dispatch(c,c->ctr); } // 801B4E44
  cmps(c,0,(int32_t)c->r[3],0); // 801B4E48
  if (crb(c,2)) { goto L_801B4E5C; } // 801B4E4C
  c->r[4]=c->r[3]|c->r[3]; // 801B4E50
  c->r[3]=c->r[29]+0x00002108u; // 801B4E54
  c->lr=0x801B4E5Cu; f_800B9BCC(c); // 801B4E58
L_801B4E5C:;
  c->r[3]=c->r[28]|c->r[28]; // 801B4E5C
  c->r[4]=0u+0x0000000Cu; // 801B4E60
  c->lr=0x801B4E68u; f_801B966C(c); // 801B4E64
  c->f[29]=c->f[1]; // 801B4E68
  c->r[3]=c->r[28]|c->r[28]; // 801B4E6C
  c->r[4]=0u+0x0000000Du; // 801B4E70
  c->lr=0x801B4E78u; f_801B966C(c); // 801B4E74
  c->f[30]=c->f[1]; // 801B4E78
  c->r[3]=c->r[28]|c->r[28]; // 801B4E7C
  c->r[4]=0u+0x0000000Eu; // 801B4E80
  c->lr=0x801B4E88u; f_801B966C(c); // 801B4E84
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4E88
  c->f[3]=c->f[1]; // 801B4E8C
  fcmp(c,0,c->f[29],c->f[0]); // 801B4E90
  if (crb(c,1)) { goto L_801B4EA8; } // 801B4E94
  fcmp(c,0,c->f[30],c->f[0]); // 801B4E98
  if (crb(c,1)) { goto L_801B4EA8; } // 801B4E9C
  fcmp(c,0,c->f[1],c->f[0]); // 801B4EA0
  if (!crb(c,1)) { goto L_801B4EB8; } // 801B4EA4
L_801B4EA8:;
  c->f[1]=c->f[29]; // 801B4EA8
  c->r[3]=c->r[29]|c->r[29]; // 801B4EAC
  c->f[2]=c->f[30]; // 801B4EB0
  c->lr=0x801B4EB8u; f_801C39C0(c); // 801B4EB4
L_801B4EB8:;
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,31,ea,0,0);} // 801B4EB8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[31]=RF64(ea);} // 801B4EBC
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,30,ea,0,0);} // 801B4EC0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[30]=RF64(ea);} // 801B4EC4
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,29,ea,0,0);} // 801B4EC8
  c->r[11]=c->r[1]+0x00000120u; // 801B4ECC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[29]=RF64(ea);} // 801B4ED0
  c->lr=0x801B4ED8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4ED4
  c->r[0]=R32(c->r[1]+0x00000154u); // 801B4ED8
  c->lr=c->r[0]; // 801B4EDC
  c->r[1]=c->r[1]+0x00000150u; // 801B4EE0
  return; // 801B4EE4
}

// fn_801B4EE8
void f_801B4EE8(Ctx* __restrict c) {
  trace_call(0x801B4EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4EE8
  c->r[0]=c->lr; // 801B4EEC
  W32(c->r[1]+0x00000144u,c->r[0]); // 801B4EF0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 801B4EF4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 801B4EF8
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[30]);} // 801B4EFC
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,30,ea,0,0);} // 801B4F00
  c->r[11]=c->r[1]+0x00000120u; // 801B4F04
  c->lr=0x801B4F0Cu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4F08
  c->r[28]=c->r[4]|c->r[4]; // 801B4F0C
  c->r[29]=c->r[3]|c->r[3]; // 801B4F10
  c->r[3]=c->r[28]|c->r[28]; // 801B4F14
  c->r[4]=0u+0x00000008u; // 801B4F18
  c->lr=0x801B4F20u; f_801B9640(c); // 801B4F1C
  c->r[30]=0u+0x803E0000u; // 801B4F20
  c->r[5]=c->r[3]|c->r[3]; // 801B4F24
  c->r[30]=c->r[30]+0x000005DCu; // 801B4F28
  c->r[3]=c->r[1]+0x00000008u; // 801B4F2C
  c->r[4]=c->r[30]+0x00000085u; // 801B4F30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4F34
  c->lr=0x801B4F3Cu; f_80291CC4(c); // 801B4F38
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4F3C
  c->r[4]=c->r[1]+0x00000008u; // 801B4F40
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4F44
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4F48
  c->ctr=c->r[12]; // 801B4F4C
  if (true) { c->lr=0x801B4F54u; dispatch(c,c->ctr); } // 801B4F50
  c->r[31]=c->r[3]|c->r[3]; // 801B4F54
  c->r[3]=c->r[28]|c->r[28]; // 801B4F58
  c->r[4]=0u+0x00000007u; // 801B4F5C
  c->lr=0x801B4F64u; f_801B9640(c); // 801B4F60
  c->lr=0x801B4F68u; f_801B4C00(c); // 801B4F64
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801B4F68
  c->r[3]=c->r[29]|c->r[29]; // 801B4F6C
  c->r[5]=c->r[31]|c->r[31]; // 801B4F70
  c->lr=0x801B4F78u; f_801C390C(c); // 801B4F74
  c->r[3]=c->r[28]|c->r[28]; // 801B4F78
  c->r[4]=0u+0x00000009u; // 801B4F7C
  c->lr=0x801B4F84u; f_801B9640(c); // 801B4F80
  c->r[5]=c->r[3]|c->r[3]; // 801B4F84
  c->r[3]=c->r[1]+0x00000008u; // 801B4F88
  c->r[4]=c->r[30]+0x00000085u; // 801B4F8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B4F90
  c->lr=0x801B4F98u; f_80291CC4(c); // 801B4F94
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B4F98
  c->r[4]=c->r[1]+0x00000008u; // 801B4F9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B4FA0
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B4FA4
  c->ctr=c->r[12]; // 801B4FA8
  if (true) { c->lr=0x801B4FB0u; dispatch(c,c->ctr); } // 801B4FAC
  c->r[31]=c->r[3]|c->r[3]; // 801B4FB0
  c->r[3]=c->r[28]|c->r[28]; // 801B4FB4
  c->r[4]=0u+0x0000000Au; // 801B4FB8
  c->lr=0x801B4FC0u; f_801B9640(c); // 801B4FBC
  c->lr=0x801B4FC4u; f_801B4C58(c); // 801B4FC0
  cmps(c,0,(int32_t)c->r[31],0); // 801B4FC4
  c->r[30]=rotl(c->r[3],0)&0x0000FFFFu; // 801B4FC8
  if (crb(c,2)) { goto L_801B4FDC; } // 801B4FCC
  c->r[4]=c->r[31]|c->r[31]; // 801B4FD0
  c->r[3]=c->r[29]+0x0000224Cu; // 801B4FD4
  c->lr=0x801B4FDCu; f_800B9BCC(c); // 801B4FD8
L_801B4FDC:;
  W16(c->r[29]+0x00002196u,c->r[30]); // 801B4FDC
  c->r[3]=c->r[28]|c->r[28]; // 801B4FE0
  c->r[4]=0u+0x0000000Bu; // 801B4FE4
  c->lr=0x801B4FECu; f_801B9640(c); // 801B4FE8
  c->r[4]=0u+0x803E0000u; // 801B4FEC
  c->r[5]=c->r[3]|c->r[3]; // 801B4FF0
  c->r[4]=c->r[4]+0x000005DCu; // 801B4FF4
  c->r[3]=c->r[1]+0x00000008u; // 801B4FF8
  c->r[4]=c->r[4]+0x00000085u; // 801B4FFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5000
  c->lr=0x801B5008u; f_80291CC4(c); // 801B5004
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B5008
  c->r[4]=c->r[1]+0x00000008u; // 801B500C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B5010
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B5014
  c->ctr=c->r[12]; // 801B5018
  if (true) { c->lr=0x801B5020u; dispatch(c,c->ctr); } // 801B501C
  cmps(c,0,(int32_t)c->r[3],0); // 801B5020
  if (crb(c,2)) { goto L_801B5034; } // 801B5024
  c->r[4]=c->r[3]|c->r[3]; // 801B5028
  c->r[3]=c->r[29]+0x00002090u; // 801B502C
  c->lr=0x801B5034u; f_800B9BCC(c); // 801B5030
L_801B5034:;
  c->r[3]=c->r[28]|c->r[28]; // 801B5034
  c->r[4]=0u+0x0000000Cu; // 801B5038
  c->lr=0x801B5040u; f_801B966C(c); // 801B503C
  c->f[31]=c->f[1]; // 801B5040
  c->r[3]=c->r[28]|c->r[28]; // 801B5044
  c->r[4]=0u+0x0000000Du; // 801B5048
  c->lr=0x801B5050u; f_801B966C(c); // 801B504C
  c->f[30]=c->f[1]; // 801B5050
  c->r[3]=c->r[28]|c->r[28]; // 801B5054
  c->r[4]=0u+0x0000000Eu; // 801B5058
  c->lr=0x801B5060u; f_801B966C(c); // 801B505C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5060
  c->f[3]=c->f[1]; // 801B5064
  fcmp(c,0,c->f[31],c->f[0]); // 801B5068
  if (crb(c,1)) { goto L_801B5080; } // 801B506C
  fcmp(c,0,c->f[30],c->f[0]); // 801B5070
  if (crb(c,1)) { goto L_801B5080; } // 801B5074
  fcmp(c,0,c->f[1],c->f[0]); // 801B5078
  if (!crb(c,1)) { goto L_801B5090; } // 801B507C
L_801B5080:;
  c->f[1]=c->f[31]; // 801B5080
  c->r[3]=c->r[29]|c->r[29]; // 801B5084
  c->f[2]=c->f[30]; // 801B5088
  c->lr=0x801B5090u; f_801C39C0(c); // 801B508C
L_801B5090:;
  c->r[3]=c->r[28]|c->r[28]; // 801B5090
  c->r[4]=0u+0x0000000Fu; // 801B5094
  c->lr=0x801B509Cu; f_801B966C(c); // 801B5098
  c->r[0]=0u+0x00000000u; // 801B509C
  {uint32_t ea=c->r[29]+0x00002280u; WF32(ea,c->f[1]);} // 801B50A0
  W16(c->r[29]+0x00001FB4u,c->r[0]); // 801B50A4
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 801B50A8
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 801B50AC
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,30,ea,0,0);} // 801B50B0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[30]=RF64(ea);} // 801B50B4
  c->r[11]=c->r[1]+0x00000120u; // 801B50B8
  c->lr=0x801B50C0u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B50BC
  c->r[0]=R32(c->r[1]+0x00000144u); // 801B50C0
  c->lr=c->r[0]; // 801B50C4
  c->r[1]=c->r[1]+0x00000140u; // 801B50C8
  return; // 801B50CC
}

// fn_801B50D0
void f_801B50D0(Ctx* __restrict c) {
  trace_call(0x801B50D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B50D0
  c->r[0]=c->lr; // 801B50D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B50D8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801B50DC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B50E0
  c->r[29]=c->r[4]|c->r[4]; // 801B50E4
  c->r[30]=c->r[3]|c->r[3]; // 801B50E8
  c->r[4]=0u+0x00000008u; // 801B50EC
  c->r[3]=c->r[29]|c->r[29]; // 801B50F0
  c->lr=0x801B50F8u; f_801B966C(c); // 801B50F4
  c->r[3]=c->r[30]|c->r[30]; // 801B50F8
  c->lr=0x801B5100u; f_8019FEA4(c); // 801B50FC
  c->r[3]=c->r[29]|c->r[29]; // 801B5100
  c->r[4]=0u+0x0000000Au; // 801B5104
  c->lr=0x801B510Cu; f_801B966C(c); // 801B5108
  c->f[31]=c->f[1]; // 801B510C
  c->r[3]=c->r[29]|c->r[29]; // 801B5110
  c->r[4]=0u+0x00000009u; // 801B5114
  c->lr=0x801B511Cu; f_801B966C(c); // 801B5118
  c->f[2]=c->f[31]; // 801B511C
  c->r[3]=c->r[30]|c->r[30]; // 801B5120
  c->lr=0x801B5128u; f_8019FE98(c); // 801B5124
  c->r[3]=c->r[29]|c->r[29]; // 801B5128
  c->r[4]=0u+0x0000000Du; // 801B512C
  c->lr=0x801B5134u; f_801B9714(c); // 801B5130
  c->r[31]=c->r[3]|c->r[3]; // 801B5134
  c->r[3]=c->r[29]|c->r[29]; // 801B5138
  c->r[4]=0u+0x0000000Cu; // 801B513C
  c->lr=0x801B5144u; f_801B966C(c); // 801B5140
  c->f[31]=c->f[1]; // 801B5144
  c->r[3]=c->r[29]|c->r[29]; // 801B5148
  c->r[4]=0u+0x0000000Bu; // 801B514C
  c->lr=0x801B5154u; f_801B966C(c); // 801B5150
  c->f[2]=c->f[31]; // 801B5154
  c->r[3]=c->r[30]|c->r[30]; // 801B5158
  c->r[5]=c->r[31]|c->r[31]; // 801B515C
  c->r[4]=0u+0x00000000u; // 801B5160
  c->lr=0x801B5168u; f_8019FE80(c); // 801B5164
  c->r[3]=c->r[29]|c->r[29]; // 801B5168
  c->r[4]=0u+0x00000010u; // 801B516C
  c->lr=0x801B5174u; f_801B9714(c); // 801B5170
  c->r[31]=c->r[3]|c->r[3]; // 801B5174
  c->r[3]=c->r[29]|c->r[29]; // 801B5178
  c->r[4]=0u+0x0000000Fu; // 801B517C
  c->lr=0x801B5184u; f_801B966C(c); // 801B5180
  c->f[31]=c->f[1]; // 801B5184
  c->r[3]=c->r[29]|c->r[29]; // 801B5188
  c->r[4]=0u+0x0000000Eu; // 801B518C
  c->lr=0x801B5194u; f_801B966C(c); // 801B5190
  c->f[2]=c->f[31]; // 801B5194
  c->r[3]=c->r[30]|c->r[30]; // 801B5198
  c->r[5]=c->r[31]|c->r[31]; // 801B519C
  c->r[4]=0u+0x00000001u; // 801B51A0
  c->lr=0x801B51A8u; f_8019FE80(c); // 801B51A4
  c->r[3]=c->r[29]|c->r[29]; // 801B51A8
  c->r[4]=0u+0x00000013u; // 801B51AC
  c->lr=0x801B51B4u; f_801B9714(c); // 801B51B0
  c->r[31]=c->r[3]|c->r[3]; // 801B51B4
  c->r[3]=c->r[29]|c->r[29]; // 801B51B8
  c->r[4]=0u+0x00000012u; // 801B51BC
  c->lr=0x801B51C4u; f_801B966C(c); // 801B51C0
  c->f[31]=c->f[1]; // 801B51C4
  c->r[3]=c->r[29]|c->r[29]; // 801B51C8
  c->r[4]=0u+0x00000011u; // 801B51CC
  c->lr=0x801B51D4u; f_801B966C(c); // 801B51D0
  c->f[2]=c->f[31]; // 801B51D4
  c->r[3]=c->r[30]|c->r[30]; // 801B51D8
  c->r[5]=c->r[31]|c->r[31]; // 801B51DC
  c->r[4]=0u+0x00000002u; // 801B51E0
  c->lr=0x801B51E8u; f_8019FE80(c); // 801B51E4
  c->r[3]=c->r[29]|c->r[29]; // 801B51E8
  c->r[4]=0u+0x00000016u; // 801B51EC
  c->lr=0x801B51F4u; f_801B9714(c); // 801B51F0
  c->r[31]=c->r[3]|c->r[3]; // 801B51F4
  c->r[3]=c->r[29]|c->r[29]; // 801B51F8
  c->r[4]=0u+0x00000015u; // 801B51FC
  c->lr=0x801B5204u; f_801B966C(c); // 801B5200
  c->f[31]=c->f[1]; // 801B5204
  c->r[3]=c->r[29]|c->r[29]; // 801B5208
  c->r[4]=0u+0x00000014u; // 801B520C
  c->lr=0x801B5214u; f_801B966C(c); // 801B5210
  c->f[2]=c->f[31]; // 801B5214
  c->r[3]=c->r[30]|c->r[30]; // 801B5218
  c->r[5]=c->r[31]|c->r[31]; // 801B521C
  c->r[4]=0u+0x00000003u; // 801B5220
  c->lr=0x801B5228u; f_8019FE80(c); // 801B5224
  c->r[3]=c->r[29]|c->r[29]; // 801B5228
  c->r[4]=0u+0x00000019u; // 801B522C
  c->lr=0x801B5234u; f_801B9714(c); // 801B5230
  c->r[31]=c->r[3]|c->r[3]; // 801B5234
  c->r[3]=c->r[29]|c->r[29]; // 801B5238
  c->r[4]=0u+0x00000018u; // 801B523C
  c->lr=0x801B5244u; f_801B966C(c); // 801B5240
  c->f[31]=c->f[1]; // 801B5244
  c->r[3]=c->r[29]|c->r[29]; // 801B5248
  c->r[4]=0u+0x00000017u; // 801B524C
  c->lr=0x801B5254u; f_801B966C(c); // 801B5250
  c->f[2]=c->f[31]; // 801B5254
  c->r[3]=c->r[30]|c->r[30]; // 801B5258
  c->r[5]=c->r[31]|c->r[31]; // 801B525C
  c->r[4]=0u+0x00000004u; // 801B5260
  c->lr=0x801B5268u; f_8019FE80(c); // 801B5264
  c->r[3]=c->r[29]|c->r[29]; // 801B5268
  c->r[4]=0u+0x0000001Au; // 801B526C
  c->lr=0x801B5274u; f_801B9714(c); // 801B5270
  c->r[4]=c->r[3]|c->r[3]; // 801B5274
  c->r[3]=c->r[30]|c->r[30]; // 801B5278
  c->lr=0x801B5280u; f_8019FEAC(c); // 801B527C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801B5280
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B5284
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5288
  c->lr=c->r[0]; // 801B528C
  c->r[1]=c->r[1]+0x00000020u; // 801B5290
  return; // 801B5294
}

// fn_801B5298
void f_801B5298(Ctx* __restrict c) {
  trace_call(0x801B5298u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5298
  c->r[0]=c->lr; // 801B529C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B52A0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801B52A4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B52A8
  c->r[29]=c->r[4]|c->r[4]; // 801B52AC
  c->r[30]=c->r[3]|c->r[3]; // 801B52B0
  c->r[4]=0u+0x00000007u; // 801B52B4
  c->r[3]=c->r[29]|c->r[29]; // 801B52B8
  c->lr=0x801B52C0u; f_801B966C(c); // 801B52BC
  c->r[3]=c->r[30]|c->r[30]; // 801B52C0
  c->lr=0x801B52C8u; f_80219A1C(c); // 801B52C4
  c->r[3]=c->r[29]|c->r[29]; // 801B52C8
  c->r[4]=0u+0x00000009u; // 801B52CC
  c->lr=0x801B52D4u; f_801B966C(c); // 801B52D0
  c->f[31]=c->f[1]; // 801B52D4
  c->r[3]=c->r[29]|c->r[29]; // 801B52D8
  c->r[4]=0u+0x00000008u; // 801B52DC
  c->lr=0x801B52E4u; f_801B966C(c); // 801B52E0
  c->f[2]=c->f[31]; // 801B52E4
  c->r[3]=c->r[30]|c->r[30]; // 801B52E8
  c->lr=0x801B52F0u; f_80219A10(c); // 801B52EC
  c->r[3]=c->r[29]|c->r[29]; // 801B52F0
  c->r[4]=0u+0x0000000Cu; // 801B52F4
  c->lr=0x801B52FCu; f_801B9714(c); // 801B52F8
  c->r[31]=c->r[3]|c->r[3]; // 801B52FC
  c->r[3]=c->r[29]|c->r[29]; // 801B5300
  c->r[4]=0u+0x0000000Bu; // 801B5304
  c->lr=0x801B530Cu; f_801B966C(c); // 801B5308
  c->f[31]=c->f[1]; // 801B530C
  c->r[3]=c->r[29]|c->r[29]; // 801B5310
  c->r[4]=0u+0x0000000Au; // 801B5314
  c->lr=0x801B531Cu; f_801B966C(c); // 801B5318
  c->f[2]=c->f[31]; // 801B531C
  c->r[3]=c->r[30]|c->r[30]; // 801B5320
  c->r[5]=c->r[31]|c->r[31]; // 801B5324
  c->r[4]=0u+0x00000000u; // 801B5328
  c->lr=0x801B5330u; f_802199F8(c); // 801B532C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801B5330
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B5334
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5338
  c->lr=c->r[0]; // 801B533C
  c->r[1]=c->r[1]+0x00000020u; // 801B5340
  return; // 801B5344
}

// fn_801B5348
void f_801B5348(Ctx* __restrict c) {
  trace_call(0x801B5348u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5348
  c->r[0]=c->lr; // 801B534C
  W32(c->r[1]+0x00000134u,c->r[0]); // 801B5350
  c->r[11]=c->r[1]+0x00000130u; // 801B5354
  c->lr=0x801B535Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5358
  c->r[29]=c->r[4]|c->r[4]; // 801B535C
  c->r[30]=c->r[3]|c->r[3]; // 801B5360
  c->r[3]=c->r[29]|c->r[29]; // 801B5364
  c->r[4]=0u+0x00000007u; // 801B5368
  c->lr=0x801B5370u; f_801B9640(c); // 801B536C
  c->r[4]=0u+0x803E0000u; // 801B5370
  c->r[5]=c->r[3]|c->r[3]; // 801B5374
  c->r[4]=c->r[4]+0x000005DCu; // 801B5378
  c->r[3]=c->r[1]+0x00000018u; // 801B537C
  c->r[4]=c->r[4]+0x00000085u; // 801B5380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5384
  c->lr=0x801B538Cu; f_80291CC4(c); // 801B5388
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B538C
  c->r[4]=c->r[1]+0x00000018u; // 801B5390
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B5394
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B5398
  c->ctr=c->r[12]; // 801B539C
  if (true) { c->lr=0x801B53A4u; dispatch(c,c->ctr); } // 801B53A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B53A4
  c->r[4]=c->r[3]|c->r[3]; // 801B53A8
  if (crb(c,2)) { goto L_801B53C8; } // 801B53AC
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B53B0
  c->r[3]=c->r[30]|c->r[30]; // 801B53B4
  c->r[5]=0u+0x00000000u; // 801B53B8
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B53BC
  c->ctr=c->r[12]; // 801B53C0
  if (true) { c->lr=0x801B53C8u; dispatch(c,c->ctr); } // 801B53C4
L_801B53C8:;
  c->r[3]=c->r[29]|c->r[29]; // 801B53C8
  c->r[4]=0u+0x00000008u; // 801B53CC
  c->lr=0x801B53D4u; f_801B966C(c); // 801B53D0
  c->r[3]=c->r[30]|c->r[30]; // 801B53D4
  c->lr=0x801B53DCu; f_801A9880(c); // 801B53D8
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B53DC
  c->r[3]=c->r[30]|c->r[30]; // 801B53E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B53E4
  c->ctr=c->r[12]; // 801B53E8
  if (true) { c->lr=0x801B53F0u; dispatch(c,c->ctr); } // 801B53EC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B53F0
  c->r[5]=0u+0xC8000000u; // 801B53F4
  W32(c->r[1]+0x00000014u,c->r[4]); // 801B53F8
  c->r[4]=c->r[5]+0x0000000Au; // 801B53FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B5400
  W32(c->r[1]+0x00000010u,c->r[3]); // 801B5404
  c->r[3]=c->r[1]+0x00000010u; // 801B5408
  c->lr=0x801B5410u; f_8003EDD0(c); // 801B540C
  cmps(c,0,(int32_t)c->r[3],0); // 801B5410
  if (crb(c,2)) { goto L_801B543C; } // 801B5414
  c->lr=0x801B541Cu; f_80232150(c); // 801B5418
  c->r[4]=0u+0x803E0000u; // 801B541C
  {uint32_t ea=c->r[2]+0xFFFFB3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5420
  c->r[4]=c->r[4]+0x000005DCu; // 801B5424
  c->r[4]=c->r[4]+0x000000F7u; // 801B5428
  c->lr=0x801B5430u; f_80232230(c); // 801B542C
  c->r[3]=c->r[30]|c->r[30]; // 801B5430
  c->lr=0x801B5438u; f_801A9888(c); // 801B5434
  goto L_801B545C; // 801B5438
L_801B543C:;
  c->lr=0x801B5440u; f_80232150(c); // 801B543C
  c->r[4]=0u+0x803E0000u; // 801B5440
  {uint32_t ea=c->r[2]+0xFFFFB3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5444
  c->r[4]=c->r[4]+0x000005DCu; // 801B5448
  c->r[4]=c->r[4]+0x000000FEu; // 801B544C
  c->lr=0x801B5454u; f_80232230(c); // 801B5450
  c->r[3]=c->r[30]|c->r[30]; // 801B5454
  c->lr=0x801B545Cu; f_801A9888(c); // 801B5458
L_801B545C:;
  c->r[3]=c->r[29]|c->r[29]; // 801B545C
  c->r[4]=0u+0x0000000Bu; // 801B5460
  c->lr=0x801B5468u; f_801B9714(c); // 801B5464
  c->r[31]=c->r[3]|c->r[3]; // 801B5468
  c->r[3]=c->r[29]|c->r[29]; // 801B546C
  c->r[4]=0u+0x0000000Au; // 801B5470
  c->lr=0x801B5478u; f_801B9714(c); // 801B5474
  c->r[4]=c->r[3]|c->r[3]; // 801B5478
  c->r[3]=c->r[30]|c->r[30]; // 801B547C
  c->r[5]=c->r[31]|c->r[31]; // 801B5480
  c->lr=0x801B5488u; f_801A9890(c); // 801B5484
  c->r[3]=c->r[29]|c->r[29]; // 801B5488
  c->r[4]=0u+0x0000000Cu; // 801B548C
  c->lr=0x801B5494u; f_801B966C(c); // 801B5490
  c->r[3]=c->r[30]|c->r[30]; // 801B5494
  c->lr=0x801B549Cu; f_801A98A4(c); // 801B5498
  c->r[11]=c->r[1]+0x00000130u; // 801B549C
  c->lr=0x801B54A4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B54A0
  c->r[0]=R32(c->r[1]+0x00000134u); // 801B54A4
  c->lr=c->r[0]; // 801B54A8
  c->r[1]=c->r[1]+0x00000130u; // 801B54AC
  return; // 801B54B0
}

// fn_801B54B4
void f_801B54B4(Ctx* __restrict c) {
  trace_call(0x801B54B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B54B4
  c->r[0]=c->lr; // 801B54B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B54BC
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B54C0
  c->r[31]=c->r[4]|c->r[4]; // 801B54C4
  c->r[30]=c->r[3]|c->r[3]; // 801B54C8
  c->r[4]=0u+0x00000007u; // 801B54CC
  c->r[3]=c->r[31]|c->r[31]; // 801B54D0
  c->lr=0x801B54D8u; f_801B966C(c); // 801B54D4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801B54D8
  c->r[3]=c->r[31]|c->r[31]; // 801B54DC
  c->r[4]=0u+0x00000008u; // 801B54E0
  c->lr=0x801B54E8u; f_801B966C(c); // 801B54E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B54E8
  c->r[3]=c->r[31]|c->r[31]; // 801B54EC
  c->r[4]=0u+0x00000009u; // 801B54F0
  c->lr=0x801B54F8u; f_801B966C(c); // 801B54F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B54F8
  c->r[3]=c->r[31]|c->r[31]; // 801B54FC
  c->r[4]=0u+0x0000000Au; // 801B5500
  c->lr=0x801B5508u; f_801B966C(c); // 801B5504
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B5508
  c->r[3]=c->r[31]|c->r[31]; // 801B550C
  c->r[4]=0u+0x0000000Bu; // 801B5510
  c->lr=0x801B5518u; f_801B966C(c); // 801B5514
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B5518
  c->r[3]=c->r[31]|c->r[31]; // 801B551C
  c->r[4]=0u+0x0000000Cu; // 801B5520
  c->lr=0x801B5528u; f_801B966C(c); // 801B5524
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B5528
  c->r[3]=c->r[31]|c->r[31]; // 801B552C
  c->r[4]=0u+0x0000000Du; // 801B5530
  c->lr=0x801B5538u; f_801B966C(c); // 801B5534
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B5538
  c->r[3]=c->r[31]|c->r[31]; // 801B553C
  c->r[4]=0u+0x0000000Eu; // 801B5540
  c->lr=0x801B5548u; f_801B9714(c); // 801B5544
  W32(c->r[1]+0x00000024u,c->r[3]); // 801B5548
  c->r[3]=c->r[31]|c->r[31]; // 801B554C
  c->r[4]=0u+0x0000000Fu; // 801B5550
  c->lr=0x801B5558u; f_801B966C(c); // 801B5554
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801B5558
  c->r[3]=c->r[31]|c->r[31]; // 801B555C
  c->r[4]=0u+0x00000010u; // 801B5560
  c->lr=0x801B5568u; f_801B9714(c); // 801B5564
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 801B5568
  c->r[3]=c->r[31]|c->r[31]; // 801B556C
  c->r[4]=0u+0x00000011u; // 801B5570
  c->lr=0x801B5578u; f_801B966C(c); // 801B5574
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B5578
  c->r[3]=c->r[30]|c->r[30]; // 801B557C
  c->r[4]=c->r[1]+0x00000008u; // 801B5580
  c->lr=0x801B5588u; f_801C8210(c); // 801B5584
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B5588
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B558C
  c->lr=c->r[0]; // 801B5590
  c->r[1]=c->r[1]+0x00000040u; // 801B5594
  return; // 801B5598
}

// fn_801B559C
void f_801B559C(Ctx* __restrict c) {
  trace_call(0x801B559Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B559C
  c->r[0]=c->lr; // 801B55A0
  W32(c->r[1]+0x00000164u,c->r[0]); // 801B55A4
  {uint32_t ea=c->r[1]+0x00000158u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B55A8
  c->r[30]=c->r[4]|c->r[4]; // 801B55AC
  c->r[31]=c->r[3]|c->r[3]; // 801B55B0
  c->r[4]=0u+0x00000007u; // 801B55B4
  c->r[3]=c->r[30]|c->r[30]; // 801B55B8
  c->lr=0x801B55C0u; f_801B9640(c); // 801B55BC
  c->r[4]=0u+0x803E0000u; // 801B55C0
  c->r[5]=c->r[3]|c->r[3]; // 801B55C4
  c->r[4]=c->r[4]+0x000005DCu; // 801B55C8
  c->r[3]=c->r[1]+0x0000004Cu; // 801B55CC
  c->r[4]=c->r[4]+0x00000085u; // 801B55D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B55D4
  c->lr=0x801B55DCu; f_80291CC4(c); // 801B55D8
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B55DC
  c->r[4]=c->r[1]+0x0000004Cu; // 801B55E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B55E4
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B55E8
  c->ctr=c->r[12]; // 801B55EC
  if (true) { c->lr=0x801B55F4u; dispatch(c,c->ctr); } // 801B55F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B55F4
  c->r[4]=c->r[3]|c->r[3]; // 801B55F8
  if (crb(c,2)) { goto L_801B5618; } // 801B55FC
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B5600
  c->r[3]=c->r[31]|c->r[31]; // 801B5604
  c->r[5]=0u+0x00000000u; // 801B5608
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B560C
  c->ctr=c->r[12]; // 801B5610
  if (true) { c->lr=0x801B5618u; dispatch(c,c->ctr); } // 801B5614
L_801B5618:;
  c->r[3]=c->r[30]|c->r[30]; // 801B5618
  c->r[4]=0u+0x0000000Cu; // 801B561C
  c->lr=0x801B5624u; f_801B966C(c); // 801B5620
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B5624
  c->r[3]=c->r[30]|c->r[30]; // 801B5628
  c->r[4]=0u+0x0000000Du; // 801B562C
  c->lr=0x801B5634u; f_801B966C(c); // 801B5630
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B5634
  c->r[3]=c->r[30]|c->r[30]; // 801B5638
  c->r[4]=0u+0x0000000Eu; // 801B563C
  c->lr=0x801B5644u; f_801B966C(c); // 801B5640
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B5644
  c->r[3]=c->r[30]|c->r[30]; // 801B5648
  c->r[4]=0u+0x0000000Fu; // 801B564C
  c->lr=0x801B5654u; f_801B966C(c); // 801B5650
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B5654
  c->r[3]=c->r[30]|c->r[30]; // 801B5658
  c->r[4]=0u+0x00000010u; // 801B565C
  c->lr=0x801B5664u; f_801B966C(c); // 801B5660
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B5664
  c->r[3]=c->r[30]|c->r[30]; // 801B5668
  c->r[4]=0u+0x00000011u; // 801B566C
  c->lr=0x801B5674u; f_801B966C(c); // 801B5670
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801B5674
  c->r[3]=c->r[30]|c->r[30]; // 801B5678
  c->r[4]=0u+0x00000012u; // 801B567C
  c->lr=0x801B5684u; f_801B966C(c); // 801B5680
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B5684
  c->r[3]=c->r[30]|c->r[30]; // 801B5688
  c->r[4]=0u+0x00000013u; // 801B568C
  c->lr=0x801B5694u; f_801B966C(c); // 801B5690
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B5694
  c->r[3]=c->r[30]|c->r[30]; // 801B5698
  c->r[4]=0u+0x00000014u; // 801B569C
  c->lr=0x801B56A4u; f_801B966C(c); // 801B56A0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801B56A4
  c->r[3]=c->r[30]|c->r[30]; // 801B56A8
  c->r[4]=0u+0x0000000Bu; // 801B56AC
  c->lr=0x801B56B4u; f_801B966C(c); // 801B56B0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 801B56B4
  c->r[3]=c->r[30]|c->r[30]; // 801B56B8
  c->r[4]=0u+0x00000015u; // 801B56BC
  c->lr=0x801B56C4u; f_801B966C(c); // 801B56C0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B56C4
  c->r[3]=c->r[30]|c->r[30]; // 801B56C8
  c->r[4]=0u+0x00000016u; // 801B56CC
  c->lr=0x801B56D4u; f_801B966C(c); // 801B56D0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B56D4
  c->r[3]=c->r[30]|c->r[30]; // 801B56D8
  c->r[4]=0u+0x00000017u; // 801B56DC
  c->lr=0x801B56E4u; f_801B966C(c); // 801B56E0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 801B56E4
  c->r[3]=c->r[30]|c->r[30]; // 801B56E8
  c->r[4]=0u+0x00000018u; // 801B56EC
  c->lr=0x801B56F4u; f_801B966C(c); // 801B56F0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801B56F4
  c->r[3]=c->r[30]|c->r[30]; // 801B56F8
  c->r[4]=0u+0x00000008u; // 801B56FC
  c->lr=0x801B5704u; f_801B966C(c); // 801B5700
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801B5704
  c->r[3]=c->r[30]|c->r[30]; // 801B5708
  c->r[4]=0u+0x00000009u; // 801B570C
  c->lr=0x801B5714u; f_801B966C(c); // 801B5710
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B5714
  c->r[3]=c->r[30]|c->r[30]; // 801B5718
  c->r[4]=0u+0x0000000Au; // 801B571C
  c->lr=0x801B5724u; f_801B966C(c); // 801B5720
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B5724
  c->r[3]=c->r[31]|c->r[31]; // 801B5728
  c->r[4]=c->r[1]+0x00000008u; // 801B572C
  c->r[5]=c->r[1]+0x00000014u; // 801B5730
  c->lr=0x801B5738u; f_8019A244(c); // 801B5734
  {uint32_t ea=c->r[1]+0x00000158u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B5738
  c->r[0]=R32(c->r[1]+0x00000164u); // 801B573C
  c->lr=c->r[0]; // 801B5740
  c->r[1]=c->r[1]+0x00000160u; // 801B5744
  return; // 801B5748
}

// fn_801B574C
void f_801B574C(Ctx* __restrict c) {
  trace_call(0x801B574Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B574C
  c->r[0]=c->lr; // 801B5750
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B5754
  {uint32_t ea=c->r[1]+0x00000118u; WF64(ea,c->f[31]);} // 801B5758
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 801B575C
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B5760
  c->r[31]=c->r[4]|c->r[4]; // 801B5764
  c->r[30]=c->r[3]|c->r[3]; // 801B5768
  c->r[4]=0u+0x00000007u; // 801B576C
  c->r[3]=c->r[31]|c->r[31]; // 801B5770
  c->lr=0x801B5778u; f_801B9640(c); // 801B5774
  c->r[4]=0u+0x803E0000u; // 801B5778
  c->r[5]=c->r[3]|c->r[3]; // 801B577C
  c->r[4]=c->r[4]+0x000005DCu; // 801B5780
  c->r[3]=c->r[1]+0x00000008u; // 801B5784
  c->r[4]=c->r[4]+0x00000085u; // 801B5788
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B578C
  c->lr=0x801B5794u; f_80291CC4(c); // 801B5790
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B5794
  c->r[4]=c->r[1]+0x00000008u; // 801B5798
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B579C
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B57A0
  c->ctr=c->r[12]; // 801B57A4
  if (true) { c->lr=0x801B57ACu; dispatch(c,c->ctr); } // 801B57A8
  cmps(c,0,(int32_t)c->r[3],0); // 801B57AC
  c->r[4]=c->r[3]|c->r[3]; // 801B57B0
  if (crb(c,2)) { goto L_801B57D0; } // 801B57B4
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B57B8
  c->r[3]=c->r[30]|c->r[30]; // 801B57BC
  c->r[5]=0u+0x00000000u; // 801B57C0
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B57C4
  c->ctr=c->r[12]; // 801B57C8
  if (true) { c->lr=0x801B57D0u; dispatch(c,c->ctr); } // 801B57CC
L_801B57D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801B57D0
  c->r[4]=0u+0x00000008u; // 801B57D4
  c->lr=0x801B57DCu; f_801B9714(c); // 801B57D8
  cmps(c,0,(int32_t)c->r[3],1); // 801B57DC
  if (!crb(c,2)) { goto L_801B5808; } // 801B57E0
  c->r[3]=c->r[30]+0x00000394u; // 801B57E4
  c->r[4]=0u+0x00000000u; // 801B57E8
  c->r[5]=0u+0x00000001u; // 801B57EC
  c->lr=0x801B57F4u; f_800B16D0(c); // 801B57F0
  c->r[3]=c->r[30]+0x00000394u; // 801B57F4
  c->r[4]=0u+0x00000001u; // 801B57F8
  c->r[5]=0u+0x00000000u; // 801B57FC
  c->lr=0x801B5804u; f_800B16D0(c); // 801B5800
  goto L_801B5820; // 801B5804
L_801B5808:;
  cmps(c,0,(int32_t)c->r[3],2); // 801B5808
  if (!crb(c,2)) { goto L_801B5820; } // 801B580C
  c->r[3]=c->r[30]+0x00000394u; // 801B5810
  c->r[4]=0u+0x00000001u; // 801B5814
  c->r[5]=0u+0x00000000u; // 801B5818
  c->lr=0x801B5820u; f_800B16D0(c); // 801B581C
L_801B5820:;
  c->r[3]=c->r[31]|c->r[31]; // 801B5820
  c->r[4]=0u+0x0000000Au; // 801B5824
  c->lr=0x801B582Cu; f_801B966C(c); // 801B5828
  c->f[30]=c->f[1]; // 801B582C
  c->r[3]=c->r[31]|c->r[31]; // 801B5830
  c->r[4]=0u+0x00000009u; // 801B5834
  c->lr=0x801B583Cu; f_801B966C(c); // 801B5838
  c->f[2]=c->f[30]; // 801B583C
  c->r[3]=c->r[30]|c->r[30]; // 801B5840
  c->lr=0x801B5848u; f_802031A4(c); // 801B5844
  c->r[3]=c->r[31]|c->r[31]; // 801B5848
  c->r[4]=0u+0x0000000Cu; // 801B584C
  c->lr=0x801B5854u; f_801B966C(c); // 801B5850
  c->f[31]=c->f[1]; // 801B5854
  c->r[3]=c->r[31]|c->r[31]; // 801B5858
  c->r[4]=0u+0x0000000Bu; // 801B585C
  c->lr=0x801B5864u; f_801B966C(c); // 801B5860
  c->f[30]=c->f[1]; // 801B5864
  c->r[3]=c->r[31]|c->r[31]; // 801B5868
  c->r[4]=0u+0x0000000Du; // 801B586C
  c->lr=0x801B5874u; f_801B9714(c); // 801B5870
  c->f[1]=c->f[30]; // 801B5874
  c->r[5]=c->r[3]|c->r[3]; // 801B5878
  c->f[2]=c->f[31]; // 801B587C
  c->r[3]=c->r[30]|c->r[30]; // 801B5880
  c->r[4]=0u+0x00000000u; // 801B5884
  c->lr=0x801B588Cu; f_802031B0(c); // 801B5888
  c->r[3]=c->r[31]|c->r[31]; // 801B588C
  c->r[4]=0u+0x0000000Fu; // 801B5890
  c->lr=0x801B5898u; f_801B966C(c); // 801B5894
  c->f[31]=c->f[1]; // 801B5898
  c->r[3]=c->r[31]|c->r[31]; // 801B589C
  c->r[4]=0u+0x0000000Eu; // 801B58A0
  c->lr=0x801B58A8u; f_801B966C(c); // 801B58A4
  c->f[30]=c->f[1]; // 801B58A8
  c->r[3]=c->r[31]|c->r[31]; // 801B58AC
  c->r[4]=0u+0x00000010u; // 801B58B0
  c->lr=0x801B58B8u; f_801B9714(c); // 801B58B4
  c->f[1]=c->f[30]; // 801B58B8
  c->r[5]=c->r[3]|c->r[3]; // 801B58BC
  c->f[2]=c->f[31]; // 801B58C0
  c->r[3]=c->r[30]|c->r[30]; // 801B58C4
  c->r[4]=0u+0x00000001u; // 801B58C8
  c->lr=0x801B58D0u; f_802031B0(c); // 801B58CC
  c->r[3]=c->r[31]|c->r[31]; // 801B58D0
  c->r[4]=0u+0x00000012u; // 801B58D4
  c->lr=0x801B58DCu; f_801B966C(c); // 801B58D8
  c->f[31]=c->f[1]; // 801B58DC
  c->r[3]=c->r[31]|c->r[31]; // 801B58E0
  c->r[4]=0u+0x00000011u; // 801B58E4
  c->lr=0x801B58ECu; f_801B966C(c); // 801B58E8
  c->f[30]=c->f[1]; // 801B58EC
  c->r[3]=c->r[31]|c->r[31]; // 801B58F0
  c->r[4]=0u+0x00000013u; // 801B58F4
  c->lr=0x801B58FCu; f_801B9714(c); // 801B58F8
  c->f[1]=c->f[30]; // 801B58FC
  c->r[5]=c->r[3]|c->r[3]; // 801B5900
  c->f[2]=c->f[31]; // 801B5904
  c->r[3]=c->r[30]|c->r[30]; // 801B5908
  c->r[4]=0u+0x00000002u; // 801B590C
  c->lr=0x801B5914u; f_802031B0(c); // 801B5910
  c->r[3]=c->r[31]|c->r[31]; // 801B5914
  c->r[4]=0u+0x00000015u; // 801B5918
  c->lr=0x801B5920u; f_801B966C(c); // 801B591C
  c->f[30]=c->f[1]; // 801B5920
  c->r[3]=c->r[31]|c->r[31]; // 801B5924
  c->r[4]=0u+0x00000014u; // 801B5928
  c->lr=0x801B5930u; f_801B966C(c); // 801B592C
  c->f[31]=c->f[1]; // 801B5930
  c->r[3]=c->r[31]|c->r[31]; // 801B5934
  c->r[4]=0u+0x00000016u; // 801B5938
  c->lr=0x801B5940u; f_801B9714(c); // 801B593C
  c->f[1]=c->f[31]; // 801B5940
  c->r[5]=c->r[3]|c->r[3]; // 801B5944
  c->f[2]=c->f[30]; // 801B5948
  c->r[3]=c->r[30]|c->r[30]; // 801B594C
  c->r[4]=0u+0x00000003u; // 801B5950
  c->lr=0x801B5958u; f_802031B0(c); // 801B5954
  {uint32_t ea=c->r[1]+0x00000118u; c->f[31]=RF64(ea);} // 801B5958
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 801B595C
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B5960
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B5964
  c->lr=c->r[0]; // 801B5968
  c->r[1]=c->r[1]+0x00000120u; // 801B596C
  return; // 801B5970
}

// fn_801B5974
void f_801B5974(Ctx* __restrict c) {
  trace_call(0x801B5974u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5974
  c->r[0]=c->lr; // 801B5978
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B597C
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B5980
  c->r[31]=c->r[4]|c->r[4]; // 801B5984
  c->r[30]=c->r[3]|c->r[3]; // 801B5988
  c->r[4]=0u+0x00000007u; // 801B598C
  c->r[3]=c->r[31]|c->r[31]; // 801B5990
  c->lr=0x801B5998u; f_801B966C(c); // 801B5994
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801B5998
  c->r[3]=c->r[31]|c->r[31]; // 801B599C
  c->r[4]=0u+0x00000008u; // 801B59A0
  c->lr=0x801B59A8u; f_801B966C(c); // 801B59A4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B59A8
  c->r[3]=c->r[31]|c->r[31]; // 801B59AC
  c->r[4]=0u+0x00000009u; // 801B59B0
  c->lr=0x801B59B8u; f_801B966C(c); // 801B59B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B59B8
  c->r[3]=c->r[31]|c->r[31]; // 801B59BC
  c->r[4]=0u+0x0000000Au; // 801B59C0
  c->lr=0x801B59C8u; f_801B966C(c); // 801B59C4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B59C8
  c->r[3]=c->r[31]|c->r[31]; // 801B59CC
  c->r[4]=0u+0x0000000Eu; // 801B59D0
  c->lr=0x801B59D8u; f_801B966C(c); // 801B59D4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B59D8
  c->r[3]=c->r[31]|c->r[31]; // 801B59DC
  c->r[4]=0u+0x0000000Fu; // 801B59E0
  c->lr=0x801B59E8u; f_801B966C(c); // 801B59E4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801B59E8
  c->r[3]=c->r[31]|c->r[31]; // 801B59EC
  c->r[4]=0u+0x00000010u; // 801B59F0
  c->lr=0x801B59F8u; f_801B966C(c); // 801B59F4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B59F8
  c->r[3]=c->r[31]|c->r[31]; // 801B59FC
  c->r[4]=0u+0x00000011u; // 801B5A00
  c->lr=0x801B5A08u; f_801B966C(c); // 801B5A04
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B5A08
  c->r[3]=c->r[31]|c->r[31]; // 801B5A0C
  c->r[4]=0u+0x00000012u; // 801B5A10
  c->lr=0x801B5A18u; f_801B966C(c); // 801B5A14
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801B5A18
  c->r[3]=c->r[31]|c->r[31]; // 801B5A1C
  c->r[4]=0u+0x00000013u; // 801B5A20
  c->lr=0x801B5A28u; f_801B966C(c); // 801B5A24
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 801B5A28
  c->r[3]=c->r[31]|c->r[31]; // 801B5A2C
  c->r[4]=0u+0x00000014u; // 801B5A30
  c->lr=0x801B5A38u; f_801B966C(c); // 801B5A34
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B5A38
  c->r[3]=c->r[31]|c->r[31]; // 801B5A3C
  c->r[4]=0u+0x0000000Bu; // 801B5A40
  c->lr=0x801B5A48u; f_801B966C(c); // 801B5A44
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B5A48
  c->r[3]=c->r[31]|c->r[31]; // 801B5A4C
  c->r[4]=0u+0x0000000Cu; // 801B5A50
  c->lr=0x801B5A58u; f_801B966C(c); // 801B5A54
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B5A58
  c->r[3]=c->r[31]|c->r[31]; // 801B5A5C
  c->r[4]=0u+0x0000000Du; // 801B5A60
  c->lr=0x801B5A68u; f_801B966C(c); // 801B5A64
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B5A68
  c->r[3]=c->r[31]|c->r[31]; // 801B5A6C
  c->r[4]=0u+0x00000015u; // 801B5A70
  c->lr=0x801B5A78u; f_801B966C(c); // 801B5A74
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B5A78
  c->r[3]=c->r[30]|c->r[30]; // 801B5A7C
  c->r[4]=c->r[1]+0x00000008u; // 801B5A80
  c->lr=0x801B5A88u; f_801ECA60(c); // 801B5A84
  {uint32_t ea=c->r[1]+0x00000048u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B5A88
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B5A8C
  c->lr=c->r[0]; // 801B5A90
  c->r[1]=c->r[1]+0x00000050u; // 801B5A94
  return; // 801B5A98
}

// fn_801B5A9C
void f_801B5A9C(Ctx* __restrict c) {
  trace_call(0x801B5A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5A9C
  c->r[0]=c->lr; // 801B5AA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B5AA4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B5AA8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B5AAC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801B5AB0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801B5AB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B5AB8
  c->r[31]=c->r[3]|c->r[3]; // 801B5ABC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B5AC0
  c->r[30]=c->r[4]|c->r[4]; // 801B5AC4
  c->r[3]=c->r[30]|c->r[30]; // 801B5AC8
  c->r[4]=0u+0x00000009u; // 801B5ACC
  c->lr=0x801B5AD4u; f_801B966C(c); // 801B5AD0
  c->f[30]=c->f[1]; // 801B5AD4
  c->r[3]=c->r[30]|c->r[30]; // 801B5AD8
  c->r[4]=0u+0x00000008u; // 801B5ADC
  c->lr=0x801B5AE4u; f_801B966C(c); // 801B5AE0
  {uint32_t ea=c->r[31]+0x0000259Cu; WF32(ea,c->f[1]);} // 801B5AE4
  c->r[3]=c->r[30]|c->r[30]; // 801B5AE8
  c->r[4]=0u+0x0000000Bu; // 801B5AEC
  {uint32_t ea=c->r[31]+0x000025A0u; WF32(ea,c->f[30]);} // 801B5AF0
  c->lr=0x801B5AF8u; f_801B966C(c); // 801B5AF4
  c->f[31]=c->f[1]; // 801B5AF8
  c->r[3]=c->r[30]|c->r[30]; // 801B5AFC
  c->r[4]=0u+0x0000000Au; // 801B5B00
  c->lr=0x801B5B08u; f_801B966C(c); // 801B5B04
  c->f[30]=c->f[1]; // 801B5B08
  c->r[3]=c->r[30]|c->r[30]; // 801B5B0C
  c->r[4]=0u+0x0000000Cu; // 801B5B10
  c->lr=0x801B5B18u; f_801B9714(c); // 801B5B14
  c->f[1]=c->f[30]; // 801B5B18
  c->r[5]=c->r[3]|c->r[3]; // 801B5B1C
  c->f[2]=c->f[31]; // 801B5B20
  c->r[3]=c->r[31]|c->r[31]; // 801B5B24
  c->r[4]=0u+0x00000000u; // 801B5B28
  c->lr=0x801B5B30u; f_801E7580(c); // 801B5B2C
  c->r[3]=c->r[30]|c->r[30]; // 801B5B30
  c->r[4]=0u+0x0000000Eu; // 801B5B34
  c->lr=0x801B5B3Cu; f_801B966C(c); // 801B5B38
  c->f[30]=c->f[1]; // 801B5B3C
  c->r[3]=c->r[30]|c->r[30]; // 801B5B40
  c->r[4]=0u+0x0000000Du; // 801B5B44
  c->lr=0x801B5B4Cu; f_801B966C(c); // 801B5B48
  c->f[31]=c->f[1]; // 801B5B4C
  c->r[3]=c->r[30]|c->r[30]; // 801B5B50
  c->r[4]=0u+0x0000000Fu; // 801B5B54
  c->lr=0x801B5B5Cu; f_801B9714(c); // 801B5B58
  c->f[1]=c->f[31]; // 801B5B5C
  c->r[5]=c->r[3]|c->r[3]; // 801B5B60
  c->f[2]=c->f[30]; // 801B5B64
  c->r[3]=c->r[31]|c->r[31]; // 801B5B68
  c->r[4]=0u+0x00000001u; // 801B5B6C
  c->lr=0x801B5B74u; f_801E7580(c); // 801B5B70
  c->r[3]=c->r[30]|c->r[30]; // 801B5B74
  c->r[4]=0u+0x00000010u; // 801B5B78
  c->lr=0x801B5B80u; f_801B966C(c); // 801B5B7C
  c->f[31]=c->f[1]; // 801B5B80
  c->r[3]=c->r[30]|c->r[30]; // 801B5B84
  c->r[4]=0u+0x00000011u; // 801B5B88
  c->lr=0x801B5B90u; f_801B9714(c); // 801B5B8C
  c->f[2]=c->f[31]; // 801B5B90
  c->r[5]=c->r[3]|c->r[3]; // 801B5B94
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5B98
  c->r[3]=c->r[31]|c->r[31]; // 801B5B9C
  c->r[4]=0u+0x00000002u; // 801B5BA0
  c->lr=0x801B5BA8u; f_801E7580(c); // 801B5BA4
  c->r[3]=c->r[30]|c->r[30]; // 801B5BA8
  c->r[4]=0u+0x00000012u; // 801B5BAC
  c->lr=0x801B5BB4u; f_801B966C(c); // 801B5BB0
  c->f[31]=c->f[1]; // 801B5BB4
  c->r[3]=c->r[30]|c->r[30]; // 801B5BB8
  c->r[4]=0u+0x00000013u; // 801B5BBC
  c->lr=0x801B5BC4u; f_801B9714(c); // 801B5BC0
  c->f[2]=c->f[31]; // 801B5BC4
  c->r[5]=c->r[3]|c->r[3]; // 801B5BC8
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5BCC
  c->r[3]=c->r[31]|c->r[31]; // 801B5BD0
  c->r[4]=0u+0x00000003u; // 801B5BD4
  c->lr=0x801B5BDCu; f_801E7580(c); // 801B5BD8
  c->r[3]=c->r[30]|c->r[30]; // 801B5BDC
  c->r[4]=0u+0x00000014u; // 801B5BE0
  c->lr=0x801B5BE8u; f_801B966C(c); // 801B5BE4
  c->f[31]=c->f[1]; // 801B5BE8
  c->r[3]=c->r[30]|c->r[30]; // 801B5BEC
  c->r[4]=0u+0x00000015u; // 801B5BF0
  c->lr=0x801B5BF8u; f_801B9714(c); // 801B5BF4
  c->f[2]=c->f[31]; // 801B5BF8
  c->r[5]=c->r[3]|c->r[3]; // 801B5BFC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5C00
  c->r[3]=c->r[31]|c->r[31]; // 801B5C04
  c->r[4]=0u+0x00000004u; // 801B5C08
  c->lr=0x801B5C10u; f_801E7580(c); // 801B5C0C
  c->r[3]=c->r[30]|c->r[30]; // 801B5C10
  c->r[4]=0u+0x00000017u; // 801B5C14
  c->lr=0x801B5C1Cu; f_801B966C(c); // 801B5C18
  c->f[31]=c->f[1]; // 801B5C1C
  c->r[3]=c->r[30]|c->r[30]; // 801B5C20
  c->r[4]=0u+0x00000016u; // 801B5C24
  c->lr=0x801B5C2Cu; f_801B966C(c); // 801B5C28
  {uint32_t ea=c->r[31]+0x000025A4u; WF32(ea,c->f[1]);} // 801B5C2C
  c->r[3]=c->r[30]|c->r[30]; // 801B5C30
  c->r[4]=0u+0x00000019u; // 801B5C34
  {uint32_t ea=c->r[31]+0x000025A8u; WF32(ea,c->f[31]);} // 801B5C38
  c->lr=0x801B5C40u; f_801B966C(c); // 801B5C3C
  c->f[31]=c->f[1]; // 801B5C40
  c->r[3]=c->r[30]|c->r[30]; // 801B5C44
  c->r[4]=0u+0x00000018u; // 801B5C48
  c->lr=0x801B5C50u; f_801B966C(c); // 801B5C4C
  {uint32_t ea=c->r[31]+0x000025ACu; WF32(ea,c->f[1]);} // 801B5C50
  {uint32_t ea=c->r[31]+0x000025B0u; WF32(ea,c->f[31]);} // 801B5C54
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B5C58
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B5C5C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 801B5C60
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801B5C64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5C68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5C6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B5C70
  c->lr=c->r[0]; // 801B5C74
  c->r[1]=c->r[1]+0x00000030u; // 801B5C78
  return; // 801B5C7C
}

// fn_801B5C80
void f_801B5C80(Ctx* __restrict c) {
  trace_call(0x801B5C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5C80
  c->r[0]=c->lr; // 801B5C84
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B5C88
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B5C8C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B5C90
  c->r[11]=c->r[1]+0x00000020u; // 801B5C94
  c->lr=0x801B5C9Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5C98
  c->r[29]=c->r[4]|c->r[4]; // 801B5C9C
  c->r[30]=c->r[3]|c->r[3]; // 801B5CA0
  c->r[3]=c->r[29]|c->r[29]; // 801B5CA4
  c->r[4]=0u+0x00000007u; // 801B5CA8
  c->lr=0x801B5CB0u; f_801B966C(c); // 801B5CAC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5CB0
  fcmp(c,0,c->f[1],c->f[0]); // 801B5CB4
  c->r[0]=c->cr; // 801B5CB8
  c->r[3]=c->r[30]|c->r[30]; // 801B5CBC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 801B5CC0
  c->r[4]=c->r[0]^0x00000001u; // 801B5CC4
  c->lr=0x801B5CCCu; f_8021E254(c); // 801B5CC8
  c->r[3]=c->r[29]|c->r[29]; // 801B5CCC
  c->r[4]=0u+0x00000008u; // 801B5CD0
  c->lr=0x801B5CD8u; f_801B966C(c); // 801B5CD4
  c->r[3]=c->r[30]|c->r[30]; // 801B5CD8
  c->lr=0x801B5CE0u; f_8021E280(c); // 801B5CDC
  c->r[3]=c->r[29]|c->r[29]; // 801B5CE0
  c->r[4]=0u+0x0000000Au; // 801B5CE4
  c->lr=0x801B5CECu; f_801B966C(c); // 801B5CE8
  c->f[31]=c->f[1]; // 801B5CEC
  c->r[3]=c->r[29]|c->r[29]; // 801B5CF0
  c->r[4]=0u+0x00000009u; // 801B5CF4
  c->lr=0x801B5CFCu; f_801B966C(c); // 801B5CF8
  c->f[2]=c->f[31]; // 801B5CFC
  c->r[3]=c->r[30]|c->r[30]; // 801B5D00
  c->lr=0x801B5D08u; f_8021E274(c); // 801B5D04
  c->r[3]=c->r[29]|c->r[29]; // 801B5D08
  c->r[4]=0u+0x0000000Cu; // 801B5D0C
  c->lr=0x801B5D14u; f_801B9714(c); // 801B5D10
  c->r[31]=c->r[3]|c->r[3]; // 801B5D14
  c->r[3]=c->r[29]|c->r[29]; // 801B5D18
  c->r[4]=0u+0x0000000Bu; // 801B5D1C
  c->lr=0x801B5D24u; f_801B966C(c); // 801B5D20
  c->f[2]=c->f[1]; // 801B5D24
  {uint32_t ea=c->r[2]+0xFFFFB3ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5D28
  c->r[3]=c->r[30]|c->r[30]; // 801B5D2C
  c->r[5]=c->r[31]|c->r[31]; // 801B5D30
  c->r[4]=0u+0x00000000u; // 801B5D34
  c->lr=0x801B5D3Cu; f_8021E25C(c); // 801B5D38
  c->r[3]=c->r[29]|c->r[29]; // 801B5D3C
  c->r[4]=0u+0x0000000Eu; // 801B5D40
  c->lr=0x801B5D48u; f_801B9714(c); // 801B5D44
  c->r[31]=c->r[3]|c->r[3]; // 801B5D48
  c->r[3]=c->r[29]|c->r[29]; // 801B5D4C
  c->r[4]=0u+0x0000000Du; // 801B5D50
  c->lr=0x801B5D58u; f_801B966C(c); // 801B5D54
  c->f[31]=c->f[1]; // 801B5D58
  c->r[3]=c->r[29]|c->r[29]; // 801B5D5C
  c->r[4]=0u+0x0000000Fu; // 801B5D60
  c->lr=0x801B5D68u; f_801B966C(c); // 801B5D64
  c->f[2]=c->f[31]; // 801B5D68
  c->r[3]=c->r[30]|c->r[30]; // 801B5D6C
  c->r[5]=c->r[31]|c->r[31]; // 801B5D70
  c->r[4]=0u+0x00000001u; // 801B5D74
  c->lr=0x801B5D7Cu; f_8021E25C(c); // 801B5D78
  c->r[3]=c->r[29]|c->r[29]; // 801B5D7C
  c->r[4]=0u+0x00000011u; // 801B5D80
  c->lr=0x801B5D88u; f_801B9714(c); // 801B5D84
  c->r[31]=c->r[3]|c->r[3]; // 801B5D88
  c->r[3]=c->r[29]|c->r[29]; // 801B5D8C
  c->r[4]=0u+0x00000010u; // 801B5D90
  c->lr=0x801B5D98u; f_801B966C(c); // 801B5D94
  c->f[2]=c->f[1]; // 801B5D98
  {uint32_t ea=c->r[2]+0xFFFFB3ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5D9C
  c->r[3]=c->r[30]|c->r[30]; // 801B5DA0
  c->r[5]=c->r[31]|c->r[31]; // 801B5DA4
  c->r[4]=0u+0x00000002u; // 801B5DA8
  c->lr=0x801B5DB0u; f_8021E25C(c); // 801B5DAC
  c->r[3]=c->r[29]|c->r[29]; // 801B5DB0
  c->r[4]=0u+0x00000013u; // 801B5DB4
  c->lr=0x801B5DBCu; f_801B9714(c); // 801B5DB8
  c->r[31]=c->r[3]|c->r[3]; // 801B5DBC
  c->r[3]=c->r[29]|c->r[29]; // 801B5DC0
  c->r[4]=0u+0x00000012u; // 801B5DC4
  c->lr=0x801B5DCCu; f_801B966C(c); // 801B5DC8
  c->f[2]=c->f[1]; // 801B5DCC
  {uint32_t ea=c->r[2]+0xFFFFB3ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5DD0
  c->r[3]=c->r[30]|c->r[30]; // 801B5DD4
  c->r[5]=c->r[31]|c->r[31]; // 801B5DD8
  c->r[4]=0u+0x00000004u; // 801B5DDC
  c->lr=0x801B5DE4u; f_8021E25C(c); // 801B5DE0
  c->r[3]=c->r[29]|c->r[29]; // 801B5DE4
  c->r[4]=0u+0x00000015u; // 801B5DE8
  c->lr=0x801B5DF0u; f_801B966C(c); // 801B5DEC
  c->f[31]=c->f[1]; // 801B5DF0
  c->r[3]=c->r[29]|c->r[29]; // 801B5DF4
  c->r[4]=0u+0x00000014u; // 801B5DF8
  c->lr=0x801B5E00u; f_801B966C(c); // 801B5DFC
  c->f[2]=c->f[31]; // 801B5E00
  c->r[3]=c->r[30]|c->r[30]; // 801B5E04
  c->r[4]=0u+0x00000005u; // 801B5E08
  c->r[5]=0u+0x00000003u; // 801B5E0C
  c->lr=0x801B5E14u; f_8021E25C(c); // 801B5E10
  c->r[3]=c->r[29]|c->r[29]; // 801B5E14
  c->r[4]=0u+0x00000015u; // 801B5E18
  c->lr=0x801B5E20u; f_801B966C(c); // 801B5E1C
  c->f[31]=c->f[1]; // 801B5E20
  c->r[3]=c->r[29]|c->r[29]; // 801B5E24
  c->r[4]=0u+0x00000016u; // 801B5E28
  c->lr=0x801B5E30u; f_801B966C(c); // 801B5E2C
  c->f[2]=c->f[31]; // 801B5E30
  c->r[3]=c->r[30]|c->r[30]; // 801B5E34
  c->r[4]=0u+0x00000006u; // 801B5E38
  c->r[5]=0u+0x00000003u; // 801B5E3C
  c->lr=0x801B5E44u; f_8021E25C(c); // 801B5E40
  c->r[3]=c->r[29]|c->r[29]; // 801B5E44
  c->r[4]=0u+0x00000017u; // 801B5E48
  c->lr=0x801B5E50u; f_801B966C(c); // 801B5E4C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5E50
  c->r[3]=c->r[30]|c->r[30]; // 801B5E54
  c->r[4]=0u+0x00000007u; // 801B5E58
  c->r[5]=0u+0x00000000u; // 801B5E5C
  c->lr=0x801B5E64u; f_8021E25C(c); // 801B5E60
  c->r[3]=c->r[29]|c->r[29]; // 801B5E64
  c->r[4]=0u+0x00000018u; // 801B5E68
  c->lr=0x801B5E70u; f_801B966C(c); // 801B5E6C
  c->f[31]=c->f[1]; // 801B5E70
  c->r[3]=c->r[29]|c->r[29]; // 801B5E74
  c->r[4]=0u+0x00000019u; // 801B5E78
  c->lr=0x801B5E80u; f_801B966C(c); // 801B5E7C
  c->f[2]=c->f[31]; // 801B5E80
  c->r[3]=c->r[30]|c->r[30]; // 801B5E84
  c->r[4]=0u+0x00000008u; // 801B5E88
  c->r[5]=0u+0x00000003u; // 801B5E8C
  c->lr=0x801B5E94u; f_8021E25C(c); // 801B5E90
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B5E94
  c->r[11]=c->r[1]+0x00000020u; // 801B5E98
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B5E9C
  c->lr=0x801B5EA4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5EA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B5EA4
  c->lr=c->r[0]; // 801B5EA8
  c->r[1]=c->r[1]+0x00000030u; // 801B5EAC
  return; // 801B5EB0
}

// fn_801B5EB4
void f_801B5EB4(Ctx* __restrict c) {
  trace_call(0x801B5EB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5EB4
  c->r[0]=c->lr; // 801B5EB8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B5EBC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B5EC0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B5EC4
  c->r[11]=c->r[1]+0x00000020u; // 801B5EC8
  c->lr=0x801B5ED0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5ECC
  c->r[29]=c->r[4]|c->r[4]; // 801B5ED0
  c->r[30]=c->r[3]|c->r[3]; // 801B5ED4
  c->r[3]=c->r[29]|c->r[29]; // 801B5ED8
  c->r[4]=0u+0x00000008u; // 801B5EDC
  c->lr=0x801B5EE4u; f_801B966C(c); // 801B5EE0
  c->f[31]=c->f[1]; // 801B5EE4
  c->r[3]=c->r[29]|c->r[29]; // 801B5EE8
  c->r[4]=0u+0x00000007u; // 801B5EEC
  c->lr=0x801B5EF4u; f_801B966C(c); // 801B5EF0
  c->f[2]=c->f[31]; // 801B5EF4
  c->r[3]=c->r[30]|c->r[30]; // 801B5EF8
  c->lr=0x801B5F00u; f_801A13E0(c); // 801B5EFC
  c->r[3]=c->r[29]|c->r[29]; // 801B5F00
  c->r[4]=0u+0x00000009u; // 801B5F04
  c->lr=0x801B5F0Cu; f_801B966C(c); // 801B5F08
  c->r[3]=c->r[30]|c->r[30]; // 801B5F0C
  c->r[4]=0u+0x00000000u; // 801B5F10
  c->lr=0x801B5F18u; f_801A13C8(c); // 801B5F14
  c->r[3]=c->r[29]|c->r[29]; // 801B5F18
  c->r[4]=0u+0x0000000Au; // 801B5F1C
  c->lr=0x801B5F24u; f_801B966C(c); // 801B5F20
  c->r[3]=c->r[30]|c->r[30]; // 801B5F24
  c->r[4]=0u+0x00000001u; // 801B5F28
  c->lr=0x801B5F30u; f_801A13C8(c); // 801B5F2C
  c->r[3]=c->r[29]|c->r[29]; // 801B5F30
  c->r[4]=0u+0x0000000Bu; // 801B5F34
  c->lr=0x801B5F3Cu; f_801B966C(c); // 801B5F38
  c->r[3]=c->r[30]|c->r[30]; // 801B5F3C
  c->r[4]=0u+0x00000002u; // 801B5F40
  c->lr=0x801B5F48u; f_801A13C8(c); // 801B5F44
  c->r[3]=c->r[29]|c->r[29]; // 801B5F48
  c->r[4]=0u+0x0000000Cu; // 801B5F4C
  c->lr=0x801B5F54u; f_801B966C(c); // 801B5F50
  c->r[3]=c->r[30]|c->r[30]; // 801B5F54
  c->r[4]=0u+0x00000003u; // 801B5F58
  c->lr=0x801B5F60u; f_801A13C8(c); // 801B5F5C
  c->r[3]=c->r[29]|c->r[29]; // 801B5F60
  c->r[4]=0u+0x0000000Du; // 801B5F64
  c->lr=0x801B5F6Cu; f_801B966C(c); // 801B5F68
  c->r[3]=c->r[30]|c->r[30]; // 801B5F6C
  c->r[4]=0u+0x00000004u; // 801B5F70
  c->lr=0x801B5F78u; f_801A13C8(c); // 801B5F74
  c->r[3]=c->r[29]|c->r[29]; // 801B5F78
  c->r[4]=0u+0x0000000Eu; // 801B5F7C
  c->lr=0x801B5F84u; f_801B966C(c); // 801B5F80
  c->r[3]=c->r[30]|c->r[30]; // 801B5F84
  c->r[4]=0u+0x00000006u; // 801B5F88
  c->lr=0x801B5F90u; f_801A13C8(c); // 801B5F8C
  c->r[3]=c->r[29]|c->r[29]; // 801B5F90
  c->r[4]=0u+0x0000000Fu; // 801B5F94
  c->lr=0x801B5F9Cu; f_801B966C(c); // 801B5F98
  c->f[31]=c->f[1]; // 801B5F9C
  c->r[3]=c->r[29]|c->r[29]; // 801B5FA0
  c->r[4]=0u+0x00000010u; // 801B5FA4
  c->lr=0x801B5FACu; f_801B966C(c); // 801B5FA8
  c->f[2]=c->f[31]; // 801B5FAC
  c->r[3]=c->r[30]|c->r[30]; // 801B5FB0
  c->r[4]=0u+0x00000000u; // 801B5FB4
  c->r[5]=0u+0x00000003u; // 801B5FB8
  c->lr=0x801B5FC0u; f_801A13B0(c); // 801B5FBC
  c->r[3]=c->r[29]|c->r[29]; // 801B5FC0
  c->r[4]=0u+0x00000012u; // 801B5FC4
  c->lr=0x801B5FCCu; f_801B9714(c); // 801B5FC8
  c->r[31]=c->r[3]|c->r[3]; // 801B5FCC
  c->r[3]=c->r[29]|c->r[29]; // 801B5FD0
  c->r[4]=0u+0x00000011u; // 801B5FD4
  c->lr=0x801B5FDCu; f_801B966C(c); // 801B5FD8
  c->f[2]=c->f[1]; // 801B5FDC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5FE0
  c->r[3]=c->r[30]|c->r[30]; // 801B5FE4
  c->r[5]=c->r[31]|c->r[31]; // 801B5FE8
  c->r[4]=0u+0x00000001u; // 801B5FEC
  c->lr=0x801B5FF4u; f_801A13B0(c); // 801B5FF0
  c->r[3]=c->r[29]|c->r[29]; // 801B5FF4
  c->r[4]=0u+0x00000014u; // 801B5FF8
  c->lr=0x801B6000u; f_801B9714(c); // 801B5FFC
  c->r[31]=c->r[3]|c->r[3]; // 801B6000
  c->r[3]=c->r[29]|c->r[29]; // 801B6004
  c->r[4]=0u+0x00000013u; // 801B6008
  c->lr=0x801B6010u; f_801B966C(c); // 801B600C
  c->f[2]=c->f[1]; // 801B6010
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6014
  c->r[3]=c->r[30]|c->r[30]; // 801B6018
  c->r[5]=c->r[31]|c->r[31]; // 801B601C
  c->r[4]=0u+0x00000002u; // 801B6020
  c->lr=0x801B6028u; f_801A13B0(c); // 801B6024
  c->r[3]=c->r[29]|c->r[29]; // 801B6028
  c->r[4]=0u+0x00000016u; // 801B602C
  c->lr=0x801B6034u; f_801B9714(c); // 801B6030
  c->r[31]=c->r[3]|c->r[3]; // 801B6034
  c->r[3]=c->r[29]|c->r[29]; // 801B6038
  c->r[4]=0u+0x00000015u; // 801B603C
  c->lr=0x801B6044u; f_801B966C(c); // 801B6040
  c->f[31]=c->f[1]; // 801B6044
  c->r[3]=c->r[29]|c->r[29]; // 801B6048
  c->r[4]=0u+0x00000017u; // 801B604C
  c->lr=0x801B6054u; f_801B966C(c); // 801B6050
  c->f[2]=c->f[31]; // 801B6054
  c->r[3]=c->r[30]|c->r[30]; // 801B6058
  c->r[5]=c->r[31]|c->r[31]; // 801B605C
  c->r[4]=0u+0x00000003u; // 801B6060
  c->lr=0x801B6068u; f_801A13B0(c); // 801B6064
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B6068
  c->r[11]=c->r[1]+0x00000020u; // 801B606C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B6070
  c->lr=0x801B6078u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6074
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B6078
  c->lr=c->r[0]; // 801B607C
  c->r[1]=c->r[1]+0x00000030u; // 801B6080
  return; // 801B6084
}

// fn_801B6088
void f_801B6088(Ctx* __restrict c) {
  trace_call(0x801B6088u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6088
  c->r[0]=c->lr; // 801B608C
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B6090
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801B6094
  c->r[31]=c->r[3]|c->r[3]; // 801B6098
  c->r[3]=c->r[1]+0x00000008u; // 801B609C
  W32(c->r[1]+0x00000068u,c->r[30]); // 801B60A0
  c->r[30]=c->r[4]|c->r[4]; // 801B60A4
  c->lr=0x801B60ACu; f_80248AA8(c); // 801B60A8
  c->r[3]=c->r[30]|c->r[30]; // 801B60AC
  c->r[4]=0u+0x00000007u; // 801B60B0
  c->lr=0x801B60B8u; f_801B966C(c); // 801B60B4
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B60B8
  fcmp(c,0,c->f[1],c->f[0]); // 801B60BC
  if (!crb(c,1)) { goto L_801B60C8; } // 801B60C0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801B60C4
L_801B60C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B60C8
  c->r[4]=0u+0x00000008u; // 801B60CC
  c->lr=0x801B60D4u; f_801B966C(c); // 801B60D0
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B60D4
  fcmp(c,0,c->f[1],c->f[0]); // 801B60D8
  if (!crb(c,1)) { goto L_801B60E4; } // 801B60DC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B60E0
L_801B60E4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B60E4
  c->r[4]=0u+0x00000009u; // 801B60E8
  c->lr=0x801B60F0u; f_801B966C(c); // 801B60EC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B60F0
  fcmp(c,0,c->f[1],c->f[0]); // 801B60F4
  if (!crb(c,1)) { goto L_801B6100; } // 801B60F8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B60FC
L_801B6100:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6100
  c->r[4]=0u+0x0000000Au; // 801B6104
  c->lr=0x801B610Cu; f_801B966C(c); // 801B6108
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B610C
  fcmp(c,0,c->f[1],c->f[0]); // 801B6110
  if (!crb(c,1)) { goto L_801B611C; } // 801B6114
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B6118
L_801B611C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B611C
  c->r[4]=0u+0x0000000Bu; // 801B6120
  c->lr=0x801B6128u; f_801B966C(c); // 801B6124
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6128
  fcmp(c,0,c->f[1],c->f[0]); // 801B612C
  if (!crb(c,1)) { goto L_801B6138; } // 801B6130
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B6134
L_801B6138:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6138
  c->r[4]=0u+0x0000000Cu; // 801B613C
  c->lr=0x801B6144u; f_801B966C(c); // 801B6140
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6144
  fcmp(c,0,c->f[1],c->f[0]); // 801B6148
  if (!crb(c,1)) { goto L_801B6154; } // 801B614C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B6150
L_801B6154:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6154
  c->r[4]=0u+0x0000000Du; // 801B6158
  c->lr=0x801B6160u; f_801B966C(c); // 801B615C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6160
  fcmp(c,0,c->f[1],c->f[0]); // 801B6164
  if (!crb(c,1)) { goto L_801B6170; } // 801B6168
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B616C
L_801B6170:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6170
  c->r[4]=0u+0x0000000Eu; // 801B6174
  c->lr=0x801B617Cu; f_801B966C(c); // 801B6178
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B617C
  fcmp(c,0,c->f[1],c->f[0]); // 801B6180
  if (!crb(c,1)) { goto L_801B618C; } // 801B6184
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B6188
L_801B618C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B618C
  c->r[4]=0u+0x0000000Fu; // 801B6190
  c->lr=0x801B6198u; f_801B966C(c); // 801B6194
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6198
  fcmp(c,0,c->f[1],c->f[0]); // 801B619C
  if (!crb(c,1)) { goto L_801B61A8; } // 801B61A0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801B61A4
L_801B61A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B61A8
  c->r[4]=0u+0x00000010u; // 801B61AC
  c->lr=0x801B61B4u; f_801B966C(c); // 801B61B0
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B61B4
  fcmp(c,0,c->f[1],c->f[0]); // 801B61B8
  if (!crb(c,1)) { goto L_801B61C4; } // 801B61BC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B61C0
L_801B61C4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B61C4
  c->r[4]=0u+0x00000011u; // 801B61C8
  c->lr=0x801B61D0u; f_801B966C(c); // 801B61CC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B61D0
  fcmp(c,0,c->f[1],c->f[0]); // 801B61D4
  if (!crb(c,1)) { goto L_801B61E0; } // 801B61D8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B61DC
L_801B61E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B61E0
  c->r[4]=0u+0x00000012u; // 801B61E4
  c->lr=0x801B61ECu; f_801B966C(c); // 801B61E8
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B61EC
  fcmp(c,0,c->f[1],c->f[0]); // 801B61F0
  if (!crb(c,1)) { goto L_801B61FC; } // 801B61F4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801B61F8
L_801B61FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801B61FC
  c->r[4]=0u+0x00000013u; // 801B6200
  c->lr=0x801B6208u; f_801B966C(c); // 801B6204
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6208
  fcmp(c,0,c->f[1],c->f[0]); // 801B620C
  if (!crb(c,1)) { goto L_801B6218; } // 801B6210
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 801B6214
L_801B6218:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6218
  c->r[4]=0u+0x00000014u; // 801B621C
  c->lr=0x801B6224u; f_801B966C(c); // 801B6220
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6224
  fcmp(c,0,c->f[1],c->f[0]); // 801B6228
  if (!crb(c,1)) { goto L_801B6234; } // 801B622C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B6230
L_801B6234:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6234
  c->r[4]=0u+0x00000015u; // 801B6238
  c->lr=0x801B6240u; f_801B966C(c); // 801B623C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6240
  fcmp(c,0,c->f[1],c->f[0]); // 801B6244
  if (!crb(c,1)) { goto L_801B6250; } // 801B6248
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B624C
L_801B6250:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6250
  c->r[4]=0u+0x00000016u; // 801B6254
  c->lr=0x801B625Cu; f_801B966C(c); // 801B6258
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B625C
  fcmp(c,0,c->f[1],c->f[0]); // 801B6260
  if (!crb(c,1)) { goto L_801B626C; } // 801B6264
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 801B6268
L_801B626C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B626C
  c->r[4]=0u+0x00000017u; // 801B6270
  c->lr=0x801B6278u; f_801B966C(c); // 801B6274
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6278
  fcmp(c,0,c->f[1],c->f[0]); // 801B627C
  if (!crb(c,1)) { goto L_801B6288; } // 801B6280
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801B6284
L_801B6288:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6288
  c->r[4]=0u+0x00000018u; // 801B628C
  c->lr=0x801B6294u; f_801B966C(c); // 801B6290
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6294
  fcmp(c,0,c->f[1],c->f[0]); // 801B6298
  if (!crb(c,1)) { goto L_801B62A4; } // 801B629C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 801B62A0
L_801B62A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B62A4
  c->r[4]=0u+0x00000019u; // 801B62A8
  c->lr=0x801B62B0u; f_801B966C(c); // 801B62AC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B62B0
  fcmp(c,0,c->f[1],c->f[0]); // 801B62B4
  if (!crb(c,1)) { goto L_801B62C0; } // 801B62B8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 801B62BC
L_801B62C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B62C0
  c->r[4]=0u+0x0000001Au; // 801B62C4
  c->lr=0x801B62CCu; f_801B966C(c); // 801B62C8
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B62CC
  fcmp(c,0,c->f[1],c->f[0]); // 801B62D0
  if (!crb(c,1)) { goto L_801B62DC; } // 801B62D4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 801B62D8
L_801B62DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801B62DC
  c->r[4]=0u+0x0000001Bu; // 801B62E0
  c->lr=0x801B62E8u; f_801B966C(c); // 801B62E4
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B62E8
  fcmp(c,0,c->f[1],c->f[0]); // 801B62EC
  if (!crb(c,1)) { goto L_801B62F8; } // 801B62F0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 801B62F4
L_801B62F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B62F8
  c->r[4]=0u+0x0000001Cu; // 801B62FC
  c->lr=0x801B6304u; f_801B966C(c); // 801B6300
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6304
  fcmp(c,0,c->f[1],c->f[0]); // 801B6308
  if (!crb(c,1)) { goto L_801B6314; } // 801B630C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 801B6310
L_801B6314:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6314
  c->r[4]=0u+0x0000001Du; // 801B6318
  c->lr=0x801B6320u; f_801B966C(c); // 801B631C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6320
  fcmp(c,0,c->f[1],c->f[0]); // 801B6324
  if (!crb(c,1)) { goto L_801B6330; } // 801B6328
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801B632C
L_801B6330:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6330
  c->r[4]=0u+0x0000001Eu; // 801B6334
  c->lr=0x801B633Cu; f_801B966C(c); // 801B6338
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B633C
  fcmp(c,0,c->f[1],c->f[0]); // 801B6340
  if (!crb(c,1)) { goto L_801B634C; } // 801B6344
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 801B6348
L_801B634C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B634C
  c->r[4]=c->r[1]+0x00000008u; // 801B6350
  c->lr=0x801B6358u; f_80249B5C(c); // 801B6354
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B6358
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801B635C
  c->r[30]=R32(c->r[1]+0x00000068u); // 801B6360
  c->lr=c->r[0]; // 801B6364
  c->r[1]=c->r[1]+0x00000070u; // 801B6368
  return; // 801B636C
}

// fn_801B6370
void f_801B6370(Ctx* __restrict c) {
  trace_call(0x801B6370u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6370
  c->r[0]=c->lr; // 801B6374
  W32(c->r[1]+0x00000134u,c->r[0]); // 801B6378
  {uint32_t ea=c->r[1]+0x0000011Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B637C
  c->r[28]=c->r[4]|c->r[4]; // 801B6380
  c->r[27]=c->r[3]|c->r[3]; // 801B6384
  c->r[4]=0u+0x00000007u; // 801B6388
  c->r[3]=c->r[28]|c->r[28]; // 801B638C
  c->lr=0x801B6394u; f_801B9640(c); // 801B6390
  c->r[4]=0u+0x803E0000u; // 801B6394
  c->r[5]=c->r[3]|c->r[3]; // 801B6398
  c->r[4]=c->r[4]+0x000005DCu; // 801B639C
  c->r[3]=c->r[1]+0x00000010u; // 801B63A0
  c->r[4]=c->r[4]+0x00000085u; // 801B63A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B63A8
  c->lr=0x801B63B0u; f_80291CC4(c); // 801B63AC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B63B0
  c->r[4]=c->r[1]+0x00000010u; // 801B63B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B63B8
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B63BC
  c->ctr=c->r[12]; // 801B63C0
  if (true) { c->lr=0x801B63C8u; dispatch(c,c->ctr); } // 801B63C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B63C8
  c->r[4]=c->r[3]|c->r[3]; // 801B63CC
  if (crb(c,2)) { goto L_801B63EC; } // 801B63D0
  c->r[12]=R32(c->r[27]+0x00000010u); // 801B63D4
  c->r[3]=c->r[27]|c->r[27]; // 801B63D8
  c->r[5]=0u+0x00000000u; // 801B63DC
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B63E0
  c->ctr=c->r[12]; // 801B63E4
  if (true) { c->lr=0x801B63ECu; dispatch(c,c->ctr); } // 801B63E8
L_801B63EC:;
  c->r[3]=c->r[28]|c->r[28]; // 801B63EC
  c->r[4]=0u+0x00000008u; // 801B63F0
  c->lr=0x801B63F8u; f_801B9640(c); // 801B63F4
  c->r[31]=0u+0x803E0000u; // 801B63F8
  c->r[30]=c->r[3]|c->r[3]; // 801B63FC
  c->r[31]=c->r[31]+0x000005DCu; // 801B6400
  c->r[29]=0u+0x00000000u; // 801B6404
  c->r[4]=c->r[31]+0x00000105u; // 801B6408
  c->lr=0x801B6410u; f_80293554(c); // 801B640C
  cmps(c,0,(int32_t)c->r[3],0); // 801B6410
  if (!crb(c,2)) { goto L_801B6420; } // 801B6414
  c->r[31]=0u+0x00000000u; // 801B6418
  goto L_801B647C; // 801B641C
L_801B6420:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6420
  c->r[4]=c->r[31]+0x00000108u; // 801B6424
  c->lr=0x801B642Cu; f_80293554(c); // 801B6428
  cmps(c,0,(int32_t)c->r[3],0); // 801B642C
  if (!crb(c,2)) { goto L_801B643C; } // 801B6430
  c->r[31]=0u+0x00000001u; // 801B6434
  goto L_801B647C; // 801B6438
L_801B643C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B643C
  c->r[4]=c->r[31]+0x0000010Bu; // 801B6440
  c->lr=0x801B6448u; f_80293554(c); // 801B6444
  cmps(c,0,(int32_t)c->r[3],0); // 801B6448
  if (!crb(c,2)) { goto L_801B6458; } // 801B644C
  c->r[31]=0u+0x00000002u; // 801B6450
  goto L_801B647C; // 801B6454
L_801B6458:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6458
  c->r[4]=c->r[31]+0x0000010Eu; // 801B645C
  c->lr=0x801B6464u; f_80293554(c); // 801B6460
  cmps(c,0,(int32_t)c->r[3],0); // 801B6464
  if (!crb(c,2)) { goto L_801B6478; } // 801B6468
  c->r[29]=0u+0x00000001u; // 801B646C
  c->r[31]=0u+0x00000002u; // 801B6470
  goto L_801B647C; // 801B6474
L_801B6478:;
  c->r[31]=0u+0x00000000u; // 801B6478
L_801B647C:;
  c->r[3]=c->r[28]|c->r[28]; // 801B647C
  c->r[4]=0u+0x00000010u; // 801B6480
  c->lr=0x801B6488u; f_801B9714(c); // 801B6484
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801B6488
  c->r[4]=c->r[31]|c->r[31]; // 801B648C
  c->r[7]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801B6490
  c->r[3]=c->r[27]|c->r[27]; // 801B6494
  c->r[6]=c->r[29]|c->r[29]; // 801B6498
  c->r[5]=0u+0x00000000u; // 801B649C
  c->lr=0x801B64A4u; f_801CCDE0(c); // 801B64A0
  c->r[0]=0u+0x0000000Fu; // 801B64A4
  c->r[3]=c->r[27]|c->r[27]; // 801B64A8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B64AC
  c->r[4]=c->r[28]|c->r[28]; // 801B64B0
  c->r[5]=0u+0x00000009u; // 801B64B4
  c->r[6]=0u+0x0000000Au; // 801B64B8
  c->r[7]=0u+0x0000000Bu; // 801B64BC
  c->r[8]=0u+0x0000000Cu; // 801B64C0
  c->r[9]=0u+0x0000000Du; // 801B64C4
  c->r[10]=0u+0x0000000Eu; // 801B64C8
  c->lr=0x801B64D0u; f_801B2900(c); // 801B64CC
  {uint32_t ea=c->r[1]+0x0000011Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B64D0
  c->r[0]=R32(c->r[1]+0x00000134u); // 801B64D4
  c->lr=c->r[0]; // 801B64D8
  c->r[1]=c->r[1]+0x00000130u; // 801B64DC
  return; // 801B64E0
}

// fn_801B64E4
void f_801B64E4(Ctx* __restrict c) {
  trace_call(0x801B64E4u);
  f_801B6370(c); return; // 801B64E4
}

// fn_801B64E8
void f_801B64E8(Ctx* __restrict c) {
  trace_call(0x801B64E8u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B64E8
  c->r[0]=c->lr; // 801B64EC
  W32(c->r[1]+0x00000114u,c->r[0]); // 801B64F0
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801B64F4
  c->r[31]=c->r[4]|c->r[4]; // 801B64F8
  c->r[4]=0u+0x00000007u; // 801B64FC
  W32(c->r[1]+0x00000108u,c->r[30]); // 801B6500
  c->r[30]=c->r[3]|c->r[3]; // 801B6504
  c->r[3]=c->r[31]|c->r[31]; // 801B6508
  c->lr=0x801B6510u; f_801B9640(c); // 801B650C
  c->r[4]=0u+0x803E0000u; // 801B6510
  c->r[5]=c->r[3]|c->r[3]; // 801B6514
  c->r[4]=c->r[4]+0x000005DCu; // 801B6518
  c->r[3]=c->r[1]+0x00000008u; // 801B651C
  c->r[4]=c->r[4]+0x00000085u; // 801B6520
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6524
  c->lr=0x801B652Cu; f_80291CC4(c); // 801B6528
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B652C
  c->r[4]=c->r[1]+0x00000008u; // 801B6530
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B6534
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B6538
  c->ctr=c->r[12]; // 801B653C
  if (true) { c->lr=0x801B6544u; dispatch(c,c->ctr); } // 801B6540
  cmps(c,0,(int32_t)c->r[3],0); // 801B6544
  c->r[4]=c->r[3]|c->r[3]; // 801B6548
  if (crb(c,2)) { goto L_801B6568; } // 801B654C
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B6550
  c->r[3]=c->r[30]|c->r[30]; // 801B6554
  c->r[5]=0u+0x00000000u; // 801B6558
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B655C
  c->ctr=c->r[12]; // 801B6560
  if (true) { c->lr=0x801B6568u; dispatch(c,c->ctr); } // 801B6564
L_801B6568:;
  c->lr=0x801B656Cu; f_80232150(c); // 801B6568
  c->r[4]=0u+0x803E0000u; // 801B656C
  {uint32_t ea=c->r[2]+0xFFFFB3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6570
  c->r[4]=c->r[4]+0x000005DCu; // 801B6574
  c->r[4]=c->r[4]+0x00000111u; // 801B6578
  c->lr=0x801B6580u; f_80232230(c); // 801B657C
  {uint32_t ea=c->r[30]+0x00001F18u; WF32(ea,c->f[1]);} // 801B6580
  c->r[3]=c->r[31]|c->r[31]; // 801B6584
  c->r[4]=0u+0x00000009u; // 801B6588
  c->lr=0x801B6590u; f_801B966C(c); // 801B658C
  c->r[3]=c->r[30]|c->r[30]; // 801B6590
  c->lr=0x801B6598u; f_801B97A0(c); // 801B6594
  c->r[3]=c->r[31]|c->r[31]; // 801B6598
  c->r[4]=0u+0x0000000Au; // 801B659C
  c->lr=0x801B65A4u; f_801B9714(c); // 801B65A0
  cmps(c,0,(int32_t)c->r[3],1); // 801B65A4
  if (!crb(c,2)) { goto L_801B65D0; } // 801B65A8
  c->r[3]=c->r[30]+0x00000394u; // 801B65AC
  c->r[4]=0u+0x00000000u; // 801B65B0
  c->r[5]=0u+0x00000001u; // 801B65B4
  c->lr=0x801B65BCu; f_800B16D0(c); // 801B65B8
  c->r[3]=c->r[30]+0x00000394u; // 801B65BC
  c->r[4]=0u+0x00000001u; // 801B65C0
  c->r[5]=0u+0x00000000u; // 801B65C4
  c->lr=0x801B65CCu; f_800B16D0(c); // 801B65C8
  goto L_801B65E8; // 801B65CC
L_801B65D0:;
  cmps(c,0,(int32_t)c->r[3],2); // 801B65D0
  if (!crb(c,2)) { goto L_801B65E8; } // 801B65D4
  c->r[3]=c->r[30]+0x00000394u; // 801B65D8
  c->r[4]=0u+0x00000001u; // 801B65DC
  c->r[5]=0u+0x00000000u; // 801B65E0
  c->lr=0x801B65E8u; f_800B16D0(c); // 801B65E4
L_801B65E8:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 801B65E8
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801B65EC
  c->r[30]=R32(c->r[1]+0x00000108u); // 801B65F0
  c->lr=c->r[0]; // 801B65F4
  c->r[1]=c->r[1]+0x00000110u; // 801B65F8
  return; // 801B65FC
}

// fn_801B6600
void f_801B6600(Ctx* __restrict c) {
  trace_call(0x801B6600u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6600
  c->r[0]=c->lr; // 801B6604
  W32(c->r[1]+0x00000144u,c->r[0]); // 801B6608
  c->r[11]=c->r[1]+0x00000140u; // 801B660C
  c->lr=0x801B6614u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6610
  c->r[29]=c->r[4]|c->r[4]; // 801B6614
  c->r[30]=c->r[3]|c->r[3]; // 801B6618
  c->r[3]=c->r[29]|c->r[29]; // 801B661C
  c->r[4]=0u+0x00000007u; // 801B6620
  c->lr=0x801B6628u; f_801B9640(c); // 801B6624
  c->r[4]=0u+0x803E0000u; // 801B6628
  c->r[5]=c->r[3]|c->r[3]; // 801B662C
  c->r[4]=c->r[4]+0x000005DCu; // 801B6630
  c->r[3]=c->r[1]+0x00000028u; // 801B6634
  c->r[4]=c->r[4]+0x00000085u; // 801B6638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B663C
  c->lr=0x801B6644u; f_80291CC4(c); // 801B6640
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B6644
  c->r[4]=c->r[1]+0x00000028u; // 801B6648
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B664C
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B6650
  c->ctr=c->r[12]; // 801B6654
  if (true) { c->lr=0x801B665Cu; dispatch(c,c->ctr); } // 801B6658
  cmps(c,0,(int32_t)c->r[3],0); // 801B665C
  c->r[4]=c->r[3]|c->r[3]; // 801B6660
  if (crb(c,2)) { goto L_801B6680; } // 801B6664
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B6668
  c->r[3]=c->r[30]|c->r[30]; // 801B666C
  c->r[5]=0u+0x00000000u; // 801B6670
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B6674
  c->ctr=c->r[12]; // 801B6678
  if (true) { c->lr=0x801B6680u; dispatch(c,c->ctr); } // 801B667C
L_801B6680:;
  c->r[3]=c->r[29]|c->r[29]; // 801B6680
  c->r[4]=0u+0x00000008u; // 801B6684
  c->lr=0x801B668Cu; f_801B9714(c); // 801B6688
  cmps(c,0,(int32_t)c->r[3],0); // 801B668C
  c->r[31]=0u+0xFFFFFFFFu; // 801B6690
  if (crb(c,2)) { goto L_801B669C; } // 801B6694
  c->r[31]=c->r[3]|c->r[3]; // 801B6698
L_801B669C:;
  c->r[3]=c->r[1]+0x00000008u; // 801B669C
  c->lr=0x801B66A4u; f_801F0AEC(c); // 801B66A0
  c->r[3]=c->r[29]|c->r[29]; // 801B66A4
  c->r[4]=0u+0x00000009u; // 801B66A8
  c->lr=0x801B66B0u; f_801B9714(c); // 801B66AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B66B0
  if (!crb(c,1)) { goto L_801B66BC; } // 801B66B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B66B8
L_801B66BC:;
  c->r[3]=c->r[29]|c->r[29]; // 801B66BC
  c->r[4]=0u+0x0000000Au; // 801B66C0
  c->lr=0x801B66C8u; f_801B966C(c); // 801B66C4
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B66C8
  fcmp(c,0,c->f[1],c->f[0]); // 801B66CC
  if (!crb(c,1)) { goto L_801B66D8; } // 801B66D0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B66D4
L_801B66D8:;
  c->r[3]=c->r[29]|c->r[29]; // 801B66D8
  c->r[4]=0u+0x0000000Bu; // 801B66DC
  c->lr=0x801B66E4u; f_801B966C(c); // 801B66E0
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B66E4
  fcmp(c,0,c->f[1],c->f[0]); // 801B66E8
  if (!crb(c,1)) { goto L_801B66F4; } // 801B66EC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B66F0
L_801B66F4:;
  c->r[3]=c->r[29]|c->r[29]; // 801B66F4
  c->r[4]=0u+0x00000006u; // 801B66F8
  c->lr=0x801B6700u; f_801B966C(c); // 801B66FC
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6700
  fcmp(c,0,c->f[1],c->f[0]); // 801B6704
  if (!crb(c,1)) { goto L_801B6710; } // 801B6708
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B670C
L_801B6710:;
  c->r[3]=c->r[29]|c->r[29]; // 801B6710
  c->r[4]=0u+0x0000000Cu; // 801B6714
  c->lr=0x801B671Cu; f_801B966C(c); // 801B6718
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B671C
  fcmp(c,0,c->f[1],c->f[0]); // 801B6720
  if (!crb(c,1)) { goto L_801B672C; } // 801B6724
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B6728
L_801B672C:;
  c->r[3]=c->r[29]|c->r[29]; // 801B672C
  c->r[4]=0u+0x0000000Du; // 801B6730
  c->lr=0x801B6738u; f_801B966C(c); // 801B6734
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6738
  fcmp(c,0,c->f[1],c->f[0]); // 801B673C
  if (!crb(c,1)) { goto L_801B6748; } // 801B6740
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B6744
L_801B6748:;
  c->r[3]=c->r[29]|c->r[29]; // 801B6748
  c->r[4]=0u+0x0000000Eu; // 801B674C
  c->lr=0x801B6754u; f_801B9714(c); // 801B6750
  cmps(c,0,(int32_t)c->r[3],0); // 801B6754
  if (!crb(c,1)) { goto L_801B6764; } // 801B6758
  c->r[0]=0u+0x00000001u; // 801B675C
  W8(c->r[1]+0x00000020u,c->r[0]); // 801B6760
L_801B6764:;
  c->r[3]=c->r[29]|c->r[29]; // 801B6764
  c->r[4]=0u+0x0000000Fu; // 801B6768
  c->lr=0x801B6770u; f_801B966C(c); // 801B676C
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6770
  fcmp(c,0,c->f[1],c->f[0]); // 801B6774
  if (!crb(c,1)) { goto L_801B6780; } // 801B6778
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B677C
L_801B6780:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6780
  c->r[4]=c->r[31]|c->r[31]; // 801B6784
  c->r[5]=c->r[1]+0x00000008u; // 801B6788
  c->lr=0x801B6790u; f_801F2780(c); // 801B678C
  c->r[11]=c->r[1]+0x00000140u; // 801B6790
  c->lr=0x801B6798u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6794
  c->r[0]=R32(c->r[1]+0x00000144u); // 801B6798
  c->lr=c->r[0]; // 801B679C
  c->r[1]=c->r[1]+0x00000140u; // 801B67A0
  return; // 801B67A4
}

// fn_801B67A8
void f_801B67A8(Ctx* __restrict c) {
  trace_call(0x801B67A8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B67A8
  c->r[0]=c->lr; // 801B67AC
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B67B0
  {uint32_t ea=c->r[1]+0x00000118u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B67B4
  c->r[31]=c->r[4]|c->r[4]; // 801B67B8
  c->r[30]=c->r[3]|c->r[3]; // 801B67BC
  c->r[4]=0u+0x00000007u; // 801B67C0
  c->r[3]=c->r[31]|c->r[31]; // 801B67C4
  c->lr=0x801B67CCu; f_801B9640(c); // 801B67C8
  c->r[4]=0u+0x803E0000u; // 801B67CC
  c->r[5]=c->r[3]|c->r[3]; // 801B67D0
  c->r[4]=c->r[4]+0x000005DCu; // 801B67D4
  c->r[3]=c->r[1]+0x00000010u; // 801B67D8
  c->r[4]=c->r[4]+0x00000085u; // 801B67DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B67E0
  c->lr=0x801B67E8u; f_80291CC4(c); // 801B67E4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B67E8
  c->r[4]=c->r[1]+0x00000010u; // 801B67EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B67F0
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B67F4
  c->ctr=c->r[12]; // 801B67F8
  if (true) { c->lr=0x801B6800u; dispatch(c,c->ctr); } // 801B67FC
  cmps(c,0,(int32_t)c->r[3],0); // 801B6800
  c->r[4]=c->r[3]|c->r[3]; // 801B6804
  if (crb(c,2)) { goto L_801B6824; } // 801B6808
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B680C
  c->r[3]=c->r[30]|c->r[30]; // 801B6810
  c->r[5]=0u+0x00000000u; // 801B6814
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B6818
  c->ctr=c->r[12]; // 801B681C
  if (true) { c->lr=0x801B6824u; dispatch(c,c->ctr); } // 801B6820
L_801B6824:;
  c->r[3]=c->r[31]|c->r[31]; // 801B6824
  c->r[4]=0u+0x0000000Fu; // 801B6828
  c->lr=0x801B6830u; f_801B966C(c); // 801B682C
  c->r[3]=c->r[30]|c->r[30]; // 801B6830
  c->r[4]=0u+0x00000000u; // 801B6834
  c->lr=0x801B683Cu; f_801EF25C(c); // 801B6838
  c->r[0]=0u+0x0000000Eu; // 801B683C
  c->r[3]=c->r[30]|c->r[30]; // 801B6840
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B6844
  c->r[4]=c->r[31]|c->r[31]; // 801B6848
  c->r[5]=0u+0x00000008u; // 801B684C
  c->r[6]=0u+0x00000009u; // 801B6850
  c->r[7]=0u+0x0000000Au; // 801B6854
  c->r[8]=0u+0x0000000Bu; // 801B6858
  c->r[9]=0u+0x0000000Cu; // 801B685C
  c->r[10]=0u+0x0000000Du; // 801B6860
  c->lr=0x801B6868u; f_801B2900(c); // 801B6864
  {uint32_t ea=c->r[1]+0x00000118u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B6868
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B686C
  c->lr=c->r[0]; // 801B6870
  c->r[1]=c->r[1]+0x00000120u; // 801B6874
  return; // 801B6878
}

// fn_801B687C
void f_801B687C(Ctx* __restrict c) {
  trace_call(0x801B687Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B687C
  c->r[0]=c->lr; // 801B6880
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B6884
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B6888
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B688C
  c->r[11]=c->r[1]+0x00000020u; // 801B6890
  c->lr=0x801B6898u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6894
  c->r[29]=c->r[4]|c->r[4]; // 801B6898
  c->r[30]=c->r[3]|c->r[3]; // 801B689C
  c->r[3]=c->r[29]|c->r[29]; // 801B68A0
  c->r[4]=0u+0x00000008u; // 801B68A4
  c->lr=0x801B68ACu; f_801B9714(c); // 801B68A8
  cmps(c,0,(int32_t)c->r[3],0); // 801B68AC
  c->r[31]=0u+0xFFFFFFFFu; // 801B68B0
  if (crb(c,2)) { goto L_801B68BC; } // 801B68B4
  c->r[31]=c->r[3]|c->r[3]; // 801B68B8
L_801B68BC:;
  {uint32_t ea=c->r[2]+0xFFFFB3F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B68BC
  c->r[3]=c->r[29]|c->r[29]; // 801B68C0
  c->r[4]=0u+0x00000009u; // 801B68C4
  c->lr=0x801B68CCu; f_80173364(c); // 801B68C8
  cmps(c,0,(int32_t)c->r[3],0); // 801B68CC
  if (crb(c,2)) { goto L_801B68E8; } // 801B68D0
  c->r[3]=c->r[29]|c->r[29]; // 801B68D4
  c->r[4]=0u+0x00000009u; // 801B68D8
  c->lr=0x801B68E0u; f_801B966C(c); // 801B68DC
  {uint32_t ea=c->r[2]+0xFFFFB3BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B68E0
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 801B68E4
L_801B68E8:;
  c->f[1]=c->f[31]; // 801B68E8
  c->r[3]=c->r[30]|c->r[30]; // 801B68EC
  c->r[4]=c->r[31]|c->r[31]; // 801B68F0
  c->lr=0x801B68F8u; f_80213FD4(c); // 801B68F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B68F8
  c->r[11]=c->r[1]+0x00000020u; // 801B68FC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B6900
  c->lr=0x801B6908u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6904
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B6908
  c->lr=c->r[0]; // 801B690C
  c->r[1]=c->r[1]+0x00000030u; // 801B6910
  return; // 801B6914
}

// fn_801B6918
void f_801B6918(Ctx* __restrict c) {
  trace_call(0x801B6918u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6918
  c->r[0]=c->lr; // 801B691C
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B6920
  {uint32_t ea=c->r[1]+0x00000118u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B6924
  c->r[31]=c->r[4]|c->r[4]; // 801B6928
  c->r[30]=c->r[3]|c->r[3]; // 801B692C
  c->r[4]=0u+0x00000007u; // 801B6930
  c->r[3]=c->r[31]|c->r[31]; // 801B6934
  c->lr=0x801B693Cu; f_801B9640(c); // 801B6938
  c->r[4]=0u+0x803E0000u; // 801B693C
  c->r[5]=c->r[3]|c->r[3]; // 801B6940
  c->r[4]=c->r[4]+0x000005DCu; // 801B6944
  c->r[3]=c->r[1]+0x00000010u; // 801B6948
  c->r[4]=c->r[4]+0x00000085u; // 801B694C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6950
  c->lr=0x801B6958u; f_80291CC4(c); // 801B6954
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B6958
  c->r[4]=c->r[1]+0x00000010u; // 801B695C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B6960
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B6964
  c->ctr=c->r[12]; // 801B6968
  if (true) { c->lr=0x801B6970u; dispatch(c,c->ctr); } // 801B696C
  cmps(c,0,(int32_t)c->r[3],0); // 801B6970
  c->r[4]=c->r[3]|c->r[3]; // 801B6974
  if (crb(c,2)) { goto L_801B6994; } // 801B6978
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B697C
  c->r[3]=c->r[30]|c->r[30]; // 801B6980
  c->r[5]=0u+0x00000000u; // 801B6984
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 801B6988
  c->ctr=c->r[12]; // 801B698C
  if (true) { c->lr=0x801B6994u; dispatch(c,c->ctr); } // 801B6990
L_801B6994:;
  c->r[3]=c->r[31]|c->r[31]; // 801B6994
  c->r[4]=0u+0x0000000Fu; // 801B6998
  c->lr=0x801B69A0u; f_801B9714(c); // 801B699C
  c->r[4]=c->r[3]|c->r[3]; // 801B69A0
  c->r[3]=c->r[30]|c->r[30]; // 801B69A4
  c->r[0]=0u-c->r[4]; // 801B69A8
  c->r[0]=c->r[0]&~c->r[4]; // 801B69AC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801B69B0
  c->lr=0x801B69B8u; f_801FFFF8(c); // 801B69B4
  c->r[0]=0u+0x0000000Eu; // 801B69B8
  c->r[3]=c->r[30]|c->r[30]; // 801B69BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B69C0
  c->r[4]=c->r[31]|c->r[31]; // 801B69C4
  c->r[5]=0u+0x00000008u; // 801B69C8
  c->r[6]=0u+0x00000009u; // 801B69CC
  c->r[7]=0u+0x0000000Au; // 801B69D0
  c->r[8]=0u+0x0000000Bu; // 801B69D4
  c->r[9]=0u+0x0000000Cu; // 801B69D8
  c->r[10]=0u+0x0000000Du; // 801B69DC
  c->lr=0x801B69E4u; f_801B2900(c); // 801B69E0
  {uint32_t ea=c->r[1]+0x00000118u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B69E4
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B69E8
  c->lr=c->r[0]; // 801B69EC
  c->r[1]=c->r[1]+0x00000120u; // 801B69F0
  return; // 801B69F4
}

// fn_801B69F8
void f_801B69F8(Ctx* __restrict c) {
  trace_call(0x801B69F8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B69F8
  c->r[0]=c->lr; // 801B69FC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801B6A00
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801B6A04
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801B6A08
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801B6A0C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801B6A10
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 801B6A14
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 801B6A18
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 801B6A1C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 801B6A20
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801B6A24
  c->r[31]=c->r[4]|c->r[4]; // 801B6A28
  c->r[4]=0u+0x00000007u; // 801B6A2C
  W32(c->r[1]+0x00000058u,c->r[30]); // 801B6A30
  c->r[30]=c->r[3]|c->r[3]; // 801B6A34
  c->r[3]=c->r[31]|c->r[31]; // 801B6A38
  c->lr=0x801B6A40u; f_801B966C(c); // 801B6A3C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801B6A40
  c->r[3]=c->r[31]|c->r[31]; // 801B6A44
  c->r[4]=0u+0x00000008u; // 801B6A48
  c->lr=0x801B6A50u; f_801B966C(c); // 801B6A4C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B6A50
  c->r[3]=c->r[31]|c->r[31]; // 801B6A54
  c->r[4]=0u+0x00000009u; // 801B6A58
  c->lr=0x801B6A60u; f_801B966C(c); // 801B6A5C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B6A60
  c->r[3]=c->r[31]|c->r[31]; // 801B6A64
  c->r[4]=0u+0x0000000Au; // 801B6A68
  c->lr=0x801B6A70u; f_801B966C(c); // 801B6A6C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B6A70
  c->r[3]=c->r[31]|c->r[31]; // 801B6A74
  c->r[4]=0u+0x0000000Bu; // 801B6A78
  c->lr=0x801B6A80u; f_801B966C(c); // 801B6A7C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B6A80
  c->r[3]=c->r[31]|c->r[31]; // 801B6A84
  c->r[4]=0u+0x0000000Cu; // 801B6A88
  c->lr=0x801B6A90u; f_801B966C(c); // 801B6A8C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B6A90
  c->r[3]=c->r[31]|c->r[31]; // 801B6A94
  c->r[4]=0u+0x0000000Du; // 801B6A98
  c->lr=0x801B6AA0u; f_801B966C(c); // 801B6A9C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B6AA0
  c->r[3]=c->r[31]|c->r[31]; // 801B6AA4
  c->r[4]=0u+0x0000000Eu; // 801B6AA8
  c->lr=0x801B6AB0u; f_801B966C(c); // 801B6AAC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B6AB0
  c->r[3]=c->r[31]|c->r[31]; // 801B6AB4
  c->r[4]=0u+0x0000000Fu; // 801B6AB8
  c->lr=0x801B6AC0u; f_801B966C(c); // 801B6ABC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801B6AC0
  c->r[3]=c->r[31]|c->r[31]; // 801B6AC4
  c->r[4]=0u+0x00000010u; // 801B6AC8
  c->lr=0x801B6AD0u; f_801B966C(c); // 801B6ACC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B6AD0
  c->r[3]=c->r[31]|c->r[31]; // 801B6AD4
  c->r[4]=0u+0x00000011u; // 801B6AD8
  c->lr=0x801B6AE0u; f_801B966C(c); // 801B6ADC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B6AE0
  c->r[3]=c->r[31]|c->r[31]; // 801B6AE4
  c->r[4]=0u+0x00000012u; // 801B6AE8
  c->lr=0x801B6AF0u; f_801B966C(c); // 801B6AEC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801B6AF0
  c->r[3]=c->r[31]|c->r[31]; // 801B6AF4
  c->r[4]=0u+0x00000013u; // 801B6AF8
  c->lr=0x801B6B00u; f_801B966C(c); // 801B6AFC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 801B6B00
  c->r[3]=c->r[31]|c->r[31]; // 801B6B04
  c->r[4]=0u+0x00000014u; // 801B6B08
  c->lr=0x801B6B10u; f_801B966C(c); // 801B6B0C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B6B10
  c->r[3]=c->r[31]|c->r[31]; // 801B6B14
  c->r[4]=0u+0x00000015u; // 801B6B18
  c->lr=0x801B6B20u; f_801B966C(c); // 801B6B1C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B6B20
  c->r[3]=c->r[31]|c->r[31]; // 801B6B24
  c->r[4]=0u+0x00000016u; // 801B6B28
  c->lr=0x801B6B30u; f_801B966C(c); // 801B6B2C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 801B6B30
  c->r[3]=c->r[31]|c->r[31]; // 801B6B34
  c->r[4]=0u+0x00000017u; // 801B6B38
  c->lr=0x801B6B40u; f_801B966C(c); // 801B6B3C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 801B6B40
  c->f[5]=c->ps1[5]=S(c->f[1]); // 801B6B44
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B6B48
  {uint32_t ea=c->r[2]+0xFFFFB3F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6B4C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801B6B50
  {uint32_t ea=c->r[1]+0x00000008u; c->f[28]=c->ps1[28]=RF32(ea);} // 801B6B54
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 801B6B58
  {uint32_t ea=c->r[1]+0x00000040u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B6B5C
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[0]); // 801B6B60
  {uint32_t ea=c->r[30]+0x0000273Cu; WF32(ea,c->f[3]);} // 801B6B64
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[0]); // 801B6B68
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 801B6B6C
  {uint32_t ea=c->r[30]+0x00002740u; WF32(ea,c->f[7]);} // 801B6B70
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 801B6B74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=c->ps1[30]=RF32(ea);} // 801B6B78
  {uint32_t ea=c->r[30]+0x0000271Cu; WF32(ea,c->f[8]);} // 801B6B7C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[31]=c->ps1[31]=RF32(ea);} // 801B6B80
  {uint32_t ea=c->r[30]+0x00002744u; WF32(ea,c->f[6]);} // 801B6B84
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[13]=c->ps1[13]=RF32(ea);} // 801B6B88
  {uint32_t ea=c->r[1]+0x00000020u; c->f[12]=c->ps1[12]=RF32(ea);} // 801B6B8C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[11]=c->ps1[11]=RF32(ea);} // 801B6B90
  {uint32_t ea=c->r[1]+0x00000028u; c->f[10]=c->ps1[10]=RF32(ea);} // 801B6B94
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 801B6B98
  {uint32_t ea=c->r[1]+0x00000030u; c->f[8]=c->ps1[8]=RF32(ea);} // 801B6B9C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B6BA0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B6BA4
  {uint32_t ea=c->r[30]+0x0000270Cu; WF32(ea,c->f[28]);} // 801B6BA8
  {uint32_t ea=c->r[30]+0x00002710u; WF32(ea,c->f[29]);} // 801B6BAC
  {uint32_t ea=c->r[30]+0x00002714u; WF32(ea,c->f[30]);} // 801B6BB0
  {uint32_t ea=c->r[30]+0x00002718u; WF32(ea,c->f[31]);} // 801B6BB4
  {uint32_t ea=c->r[30]+0x00002720u; WF32(ea,c->f[13]);} // 801B6BB8
  {uint32_t ea=c->r[30]+0x00002724u; WF32(ea,c->f[12]);} // 801B6BBC
  {uint32_t ea=c->r[30]+0x00002728u; WF32(ea,c->f[11]);} // 801B6BC0
  {uint32_t ea=c->r[30]+0x0000272Cu; WF32(ea,c->f[10]);} // 801B6BC4
  {uint32_t ea=c->r[30]+0x00002730u; WF32(ea,c->f[9]);} // 801B6BC8
  {uint32_t ea=c->r[30]+0x00002734u; WF32(ea,c->f[8]);} // 801B6BCC
  {uint32_t ea=c->r[30]+0x00002738u; WF32(ea,c->f[7]);} // 801B6BD0
  {uint32_t ea=c->r[30]+0x00002748u; WF32(ea,c->f[6]);} // 801B6BD4
  {uint32_t ea=c->r[30]+0x0000274Cu; WF32(ea,c->f[5]);} // 801B6BD8
  {uint32_t ea=c->r[30]+0x00002740u; WF32(ea,c->f[4]);} // 801B6BDC
  {uint32_t ea=c->r[30]+0x00002744u; WF32(ea,c->f[3]);} // 801B6BE0
  {uint32_t ea=c->r[30]+0x0000273Cu; WF32(ea,c->f[2]);} // 801B6BE4
  {uint32_t ea=c->r[30]+0x0000271Cu; WF32(ea,c->f[0]);} // 801B6BE8
  {uint32_t ea=c->r[30]+0x00001F68u; WF32(ea,c->f[28]);} // 801B6BEC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801B6BF0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801B6BF4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801B6BF8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 801B6BFC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 801B6C00
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 801B6C04
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 801B6C08
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 801B6C0C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 801B6C10
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801B6C14
  c->r[30]=R32(c->r[1]+0x00000058u); // 801B6C18
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801B6C1C
  c->lr=c->r[0]; // 801B6C20
  c->r[1]=c->r[1]+0x000000A0u; // 801B6C24
  return; // 801B6C28
}

// fn_801B6C2C
void f_801B6C2C(Ctx* __restrict c) {
  trace_call(0x801B6C2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6C2C
  c->r[0]=c->lr; // 801B6C30
  c->r[5]=0u+0x803E0000u; // 801B6C34
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801B6C38
  c->r[5]=c->r[5]+0x000005DCu; // 801B6C3C
  {uint32_t ea=c->r[1]+0x00000094u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B6C40
  c->r[30]=c->r[4]|c->r[4]; // 801B6C44
  c->r[29]=c->r[3]|c->r[3]; // 801B6C48
  c->r[4]=c->r[5]+0x00000117u; // 801B6C4C
  c->r[6]=R32(c->r[3]+0x000008D8u); // 801B6C50
  c->r[3]=c->r[1]+0x00000008u; // 801B6C54
  c->r[0]=R32(c->r[6]+0x000000E8u); // 801B6C58
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B6C5C
  c->lr=0x801B6C64u; f_80365B94(c); // 801B6C60
  cmps(c,0,(int32_t)c->r[3],0); // 801B6C64
  c->r[31]=c->r[3]|c->r[3]; // 801B6C68
  if (crb(c,2)) { goto L_801B6CA8; } // 801B6C6C
  if (!crb(c,2)) { goto L_801B6C90; } // 801B6C70
  c->r[3]=0u+0x803F0000u; // 801B6C74
  c->r[5]=0u+0x803F0000u; // 801B6C78
  c->r[3]=c->r[3]+0x000018E8u; // 801B6C7C
  c->r[4]=0u+0x00000035u; // 801B6C80
  c->r[5]=c->r[5]+0x000018C8u; // 801B6C84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6C88
  c->lr=0x801B6C90u; f_803444BC(c); // 801B6C8C
L_801B6C90:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B6C90
  if (crb(c,2)) { goto L_801B6CA0; } // 801B6C94
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801B6C98
  goto L_801B6CA4; // 801B6C9C
L_801B6CA0:;
  c->r[0]=0u+0x00000000u; // 801B6CA0
L_801B6CA4:;
  W32(c->r[29]+0x00000A88u,c->r[0]); // 801B6CA4
L_801B6CA8:;
  c->r[12]=R32(c->r[29]+0x00000010u); // 801B6CA8
  c->r[3]=c->r[29]|c->r[29]; // 801B6CAC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B6CB0
  c->ctr=c->r[12]; // 801B6CB4
  if (true) { c->lr=0x801B6CBCu; dispatch(c,c->ctr); } // 801B6CB8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801B6CBC
  c->r[5]=0u+0xC9000000u; // 801B6CC0
  c->r[3]=c->r[1]+0x0000000Cu; // 801B6CC4
  W32(c->r[1]+0x00000010u,c->r[4]); // 801B6CC8
  c->r[4]=c->r[5]+0x0000001Eu; // 801B6CCC
  c->lr=0x801B6CD4u; f_8003EDD0(c); // 801B6CD0
  cmps(c,0,(int32_t)c->r[3],0); // 801B6CD4
  if (crb(c,2)) { goto L_801B6DD0; } // 801B6CD8
  c->r[3]=c->r[30]|c->r[30]; // 801B6CDC
  c->r[4]=0u+0x00000007u; // 801B6CE0
  c->lr=0x801B6CE8u; f_801B966C(c); // 801B6CE4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B6CE8
  c->r[3]=c->r[30]|c->r[30]; // 801B6CEC
  c->r[4]=0u+0x00000008u; // 801B6CF0
  c->lr=0x801B6CF8u; f_801B966C(c); // 801B6CF4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B6CF8
  c->r[3]=c->r[30]|c->r[30]; // 801B6CFC
  c->r[4]=0u+0x00000009u; // 801B6D00
  c->lr=0x801B6D08u; f_801B966C(c); // 801B6D04
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B6D08
  c->r[3]=c->r[30]|c->r[30]; // 801B6D0C
  c->r[4]=0u+0x0000000Au; // 801B6D10
  c->lr=0x801B6D18u; f_801B966C(c); // 801B6D14
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B6D18
  c->r[3]=c->r[30]|c->r[30]; // 801B6D1C
  c->r[4]=0u+0x0000000Bu; // 801B6D20
  c->lr=0x801B6D28u; f_801B966C(c); // 801B6D24
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B6D28
  c->r[3]=c->r[30]|c->r[30]; // 801B6D2C
  c->r[4]=0u+0x0000000Cu; // 801B6D30
  c->lr=0x801B6D38u; f_801B966C(c); // 801B6D34
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801B6D38
  c->r[3]=c->r[30]|c->r[30]; // 801B6D3C
  c->r[4]=0u+0x0000000Du; // 801B6D40
  c->lr=0x801B6D48u; f_801B966C(c); // 801B6D44
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B6D48
  c->r[3]=c->r[30]|c->r[30]; // 801B6D4C
  c->r[4]=0u+0x0000000Eu; // 801B6D50
  c->lr=0x801B6D58u; f_801B966C(c); // 801B6D54
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B6D58
  c->r[3]=c->r[30]|c->r[30]; // 801B6D5C
  c->r[4]=0u+0x0000000Fu; // 801B6D60
  c->lr=0x801B6D68u; f_801B966C(c); // 801B6D64
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801B6D68
  c->r[3]=c->r[30]|c->r[30]; // 801B6D6C
  c->r[4]=0u+0x00000010u; // 801B6D70
  c->lr=0x801B6D78u; f_801B966C(c); // 801B6D74
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 801B6D78
  c->r[3]=c->r[30]|c->r[30]; // 801B6D7C
  c->r[4]=0u+0x00000011u; // 801B6D80
  c->lr=0x801B6D88u; f_801B966C(c); // 801B6D84
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B6D88
  c->r[3]=c->r[30]|c->r[30]; // 801B6D8C
  c->r[4]=0u+0x00000012u; // 801B6D90
  c->lr=0x801B6D98u; f_801B966C(c); // 801B6D94
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B6D98
  c->r[3]=c->r[30]|c->r[30]; // 801B6D9C
  c->r[4]=0u+0x00000013u; // 801B6DA0
  c->lr=0x801B6DA8u; f_801B966C(c); // 801B6DA4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 801B6DA8
  c->r[3]=c->r[30]|c->r[30]; // 801B6DAC
  c->r[4]=0u+0x00000014u; // 801B6DB0
  c->lr=0x801B6DB8u; f_801B966C(c); // 801B6DB4
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801B6DB8
  c->r[3]=c->r[29]+0x0000254Cu; // 801B6DBC
  c->r[4]=c->r[1]+0x00000014u; // 801B6DC0
  c->r[5]=0u+0x00000038u; // 801B6DC4
  c->lr=0x801B6DCCu; f_80235294(c); // 801B6DC8
  goto L_801B6EF0; // 801B6DCC
L_801B6DD0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6DD0
  c->r[4]=0u+0x00000007u; // 801B6DD4
  c->lr=0x801B6DDCu; f_801B966C(c); // 801B6DD8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 801B6DDC
  c->r[3]=c->r[30]|c->r[30]; // 801B6DE0
  c->r[4]=0u+0x00000008u; // 801B6DE4
  c->lr=0x801B6DECu; f_801B966C(c); // 801B6DE8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 801B6DEC
  c->r[3]=c->r[30]|c->r[30]; // 801B6DF0
  c->r[4]=0u+0x00000009u; // 801B6DF4
  c->lr=0x801B6DFCu; f_801B966C(c); // 801B6DF8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 801B6DFC
  c->r[3]=c->r[30]|c->r[30]; // 801B6E00
  c->r[4]=0u+0x0000000Au; // 801B6E04
  c->lr=0x801B6E0Cu; f_801B966C(c); // 801B6E08
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 801B6E0C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E10
  c->r[4]=0u+0x0000000Bu; // 801B6E14
  c->lr=0x801B6E1Cu; f_801B966C(c); // 801B6E18
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 801B6E1C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E20
  c->r[4]=0u+0x0000000Cu; // 801B6E24
  c->lr=0x801B6E2Cu; f_801B966C(c); // 801B6E28
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801B6E2C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E30
  c->r[4]=0u+0x0000000Du; // 801B6E34
  c->lr=0x801B6E3Cu; f_801B966C(c); // 801B6E38
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 801B6E3C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E40
  c->r[4]=0u+0x0000000Eu; // 801B6E44
  c->lr=0x801B6E4Cu; f_801B966C(c); // 801B6E48
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 801B6E4C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E50
  c->r[4]=0u+0x0000000Fu; // 801B6E54
  c->lr=0x801B6E5Cu; f_801B966C(c); // 801B6E58
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 801B6E5C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E60
  c->r[4]=0u+0x00000010u; // 801B6E64
  c->lr=0x801B6E6Cu; f_801B966C(c); // 801B6E68
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 801B6E6C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E70
  c->r[4]=0u+0x00000011u; // 801B6E74
  c->lr=0x801B6E7Cu; f_801B966C(c); // 801B6E78
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 801B6E7C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E80
  c->r[4]=0u+0x00000012u; // 801B6E84
  c->lr=0x801B6E8Cu; f_801B966C(c); // 801B6E88
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 801B6E8C
  c->r[3]=c->r[30]|c->r[30]; // 801B6E90
  c->r[4]=0u+0x00000013u; // 801B6E94
  c->lr=0x801B6E9Cu; f_801B966C(c); // 801B6E98
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 801B6E9C
  c->r[3]=c->r[30]|c->r[30]; // 801B6EA0
  c->r[4]=0u+0x00000014u; // 801B6EA4
  c->lr=0x801B6EACu; f_801B966C(c); // 801B6EA8
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 801B6EAC
  c->r[3]=c->r[30]|c->r[30]; // 801B6EB0
  c->r[4]=0u+0x00000015u; // 801B6EB4
  c->lr=0x801B6EBCu; f_801B966C(c); // 801B6EB8
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 801B6EBC
  c->r[3]=c->r[30]|c->r[30]; // 801B6EC0
  c->r[4]=0u+0x00000016u; // 801B6EC4
  c->lr=0x801B6ECCu; f_801B966C(c); // 801B6EC8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 801B6ECC
  c->r[3]=c->r[30]|c->r[30]; // 801B6ED0
  c->r[4]=0u+0x00000017u; // 801B6ED4
  c->lr=0x801B6EDCu; f_801B966C(c); // 801B6ED8
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 801B6EDC
  c->r[3]=c->r[29]+0x0000254Cu; // 801B6EE0
  c->r[4]=c->r[1]+0x0000004Cu; // 801B6EE4
  c->r[5]=0u+0x00000044u; // 801B6EE8
  c->lr=0x801B6EF0u; f_80235294(c); // 801B6EEC
L_801B6EF0:;
  {uint32_t ea=c->r[1]+0x00000094u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B6EF0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801B6EF4
  c->lr=c->r[0]; // 801B6EF8
  c->r[1]=c->r[1]+0x000000A0u; // 801B6EFC
  return; // 801B6F00
}

// fn_801B6F04
void f_801B6F04(Ctx* __restrict c) {
  trace_call(0x801B6F04u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6F04
  c->r[0]=c->lr; // 801B6F08
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B6F0C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801B6F10
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801B6F14
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801B6F18
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801B6F1C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B6F20
  c->r[31]=c->r[4]|c->r[4]; // 801B6F24
  c->r[4]=0u+0x00000007u; // 801B6F28
  W32(c->r[1]+0x00000048u,c->r[30]); // 801B6F2C
  c->r[30]=c->r[3]|c->r[3]; // 801B6F30
  c->r[3]=c->r[31]|c->r[31]; // 801B6F34
  c->lr=0x801B6F3Cu; f_801B966C(c); // 801B6F38
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801B6F3C
  c->r[3]=c->r[31]|c->r[31]; // 801B6F40
  c->r[4]=0u+0x00000008u; // 801B6F44
  c->lr=0x801B6F4Cu; f_801B966C(c); // 801B6F48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B6F4C
  c->r[3]=c->r[31]|c->r[31]; // 801B6F50
  c->r[4]=0u+0x00000009u; // 801B6F54
  c->lr=0x801B6F5Cu; f_801B966C(c); // 801B6F58
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B6F5C
  c->r[3]=c->r[31]|c->r[31]; // 801B6F60
  c->r[4]=0u+0x0000000Au; // 801B6F64
  c->lr=0x801B6F6Cu; f_801B966C(c); // 801B6F68
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B6F6C
  c->r[3]=c->r[31]|c->r[31]; // 801B6F70
  c->r[4]=0u+0x0000000Bu; // 801B6F74
  c->lr=0x801B6F7Cu; f_801B966C(c); // 801B6F78
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B6F7C
  c->r[3]=c->r[31]|c->r[31]; // 801B6F80
  c->r[4]=0u+0x0000000Cu; // 801B6F84
  c->lr=0x801B6F8Cu; f_801B966C(c); // 801B6F88
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B6F8C
  c->r[3]=c->r[31]|c->r[31]; // 801B6F90
  c->r[4]=0u+0x0000000Du; // 801B6F94
  c->lr=0x801B6F9Cu; f_801B966C(c); // 801B6F98
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B6F9C
  c->r[3]=c->r[31]|c->r[31]; // 801B6FA0
  c->r[4]=0u+0x0000000Eu; // 801B6FA4
  c->lr=0x801B6FACu; f_801B966C(c); // 801B6FA8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B6FAC
  c->r[3]=c->r[31]|c->r[31]; // 801B6FB0
  c->r[4]=0u+0x0000000Fu; // 801B6FB4
  c->lr=0x801B6FBCu; f_801B966C(c); // 801B6FB8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801B6FBC
  c->r[3]=c->r[31]|c->r[31]; // 801B6FC0
  c->r[4]=0u+0x00000010u; // 801B6FC4
  c->lr=0x801B6FCCu; f_801B966C(c); // 801B6FC8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B6FCC
  c->r[3]=c->r[31]|c->r[31]; // 801B6FD0
  c->r[4]=0u+0x00000011u; // 801B6FD4
  c->lr=0x801B6FDCu; f_801B966C(c); // 801B6FD8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B6FDC
  c->r[3]=c->r[31]|c->r[31]; // 801B6FE0
  c->r[4]=0u+0x00000012u; // 801B6FE4
  c->lr=0x801B6FECu; f_801B966C(c); // 801B6FE8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801B6FEC
  c->r[3]=c->r[31]|c->r[31]; // 801B6FF0
  c->r[4]=0u+0x00000013u; // 801B6FF4
  c->lr=0x801B6FFCu; f_801B966C(c); // 801B6FF8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 801B6FFC
  c->r[3]=c->r[31]|c->r[31]; // 801B7000
  c->r[4]=0u+0x00000014u; // 801B7004
  c->lr=0x801B700Cu; f_801B966C(c); // 801B7008
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B700C
  c->r[3]=c->r[31]|c->r[31]; // 801B7010
  c->r[4]=0u+0x00000015u; // 801B7014
  c->lr=0x801B701Cu; f_801B966C(c); // 801B7018
  {uint32_t ea=c->r[1]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B701C
  c->f[4]=c->ps1[4]=S(c->f[1]); // 801B7020
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B7024
  {uint32_t ea=c->r[2]+0xFFFFB3F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7028
  {uint32_t ea=c->r[1]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 801B702C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B7030
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[0]); // 801B7034
  {uint32_t ea=c->r[30]+0x0000273Cu; WF32(ea,c->f[2]);} // 801B7038
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[0]); // 801B703C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801B7040
  {uint32_t ea=c->r[30]+0x00002740u; WF32(ea,c->f[5]);} // 801B7044
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 801B7048
  {uint32_t ea=c->r[1]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 801B704C
  {uint32_t ea=c->r[30]+0x00002720u; WF32(ea,c->f[6]);} // 801B7050
  {uint32_t ea=c->r[1]+0x00000014u; c->f[12]=c->ps1[12]=RF32(ea);} // 801B7054
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 801B7058
  {uint32_t ea=c->r[1]+0x00000020u; c->f[10]=c->ps1[10]=RF32(ea);} // 801B705C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 801B7060
  {uint32_t ea=c->r[1]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 801B7064
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801B7068
  {uint32_t ea=c->r[1]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B706C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801B7070
  {uint32_t ea=c->r[30]+0x00002710u; WF32(ea,c->f[30]);} // 801B7074
  {uint32_t ea=c->r[30]+0x00002714u; WF32(ea,c->f[31]);} // 801B7078
  {uint32_t ea=c->r[30]+0x00002718u; WF32(ea,c->f[13]);} // 801B707C
  {uint32_t ea=c->r[30]+0x0000271Cu; WF32(ea,c->f[12]);} // 801B7080
  {uint32_t ea=c->r[30]+0x00002724u; WF32(ea,c->f[11]);} // 801B7084
  {uint32_t ea=c->r[30]+0x00002728u; WF32(ea,c->f[10]);} // 801B7088
  {uint32_t ea=c->r[30]+0x0000272Cu; WF32(ea,c->f[9]);} // 801B708C
  {uint32_t ea=c->r[30]+0x00002730u; WF32(ea,c->f[8]);} // 801B7090
  {uint32_t ea=c->r[30]+0x00002734u; WF32(ea,c->f[7]);} // 801B7094
  {uint32_t ea=c->r[30]+0x00002738u; WF32(ea,c->f[6]);} // 801B7098
  {uint32_t ea=c->r[30]+0x00002744u; WF32(ea,c->f[5]);} // 801B709C
  {uint32_t ea=c->r[30]+0x00002748u; WF32(ea,c->f[4]);} // 801B70A0
  {uint32_t ea=c->r[30]+0x0000273Cu; WF32(ea,c->f[3]);} // 801B70A4
  {uint32_t ea=c->r[30]+0x00002740u; WF32(ea,c->f[2]);} // 801B70A8
  {uint32_t ea=c->r[30]+0x00002720u; WF32(ea,c->f[0]);} // 801B70AC
  {uint32_t ea=c->r[30]+0x00001F68u; WF32(ea,c->f[30]);} // 801B70B0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B70B4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801B70B8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801B70BC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801B70C0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801B70C4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B70C8
  c->r[30]=R32(c->r[1]+0x00000048u); // 801B70CC
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B70D0
  c->lr=c->r[0]; // 801B70D4
  c->r[1]=c->r[1]+0x00000070u; // 801B70D8
  return; // 801B70DC
}

// fn_801B70E0
void f_801B70E0(Ctx* __restrict c) {
  trace_call(0x801B70E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B70E0
  c->r[0]=c->lr; // 801B70E4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801B70E8
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801B70EC
  c->r[31]=c->r[4]|c->r[4]; // 801B70F0
  c->r[4]=0u+0x00000007u; // 801B70F4
  W32(c->r[1]+0x00000098u,c->r[30]); // 801B70F8
  c->r[30]=c->r[3]|c->r[3]; // 801B70FC
  c->r[3]=c->r[31]|c->r[31]; // 801B7100
  c->lr=0x801B7108u; f_801B966C(c); // 801B7104
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B7108
  c->r[3]=c->r[31]|c->r[31]; // 801B710C
  c->r[4]=0u+0x00000008u; // 801B7110
  c->lr=0x801B7118u; f_801B966C(c); // 801B7114
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801B7118
  c->r[3]=c->r[31]|c->r[31]; // 801B711C
  c->r[4]=0u+0x00000009u; // 801B7120
  c->lr=0x801B7128u; f_801B966C(c); // 801B7124
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B7128
  c->r[3]=c->r[31]|c->r[31]; // 801B712C
  c->r[4]=0u+0x0000000Au; // 801B7130
  c->lr=0x801B7138u; f_801B966C(c); // 801B7134
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B7138
  c->r[3]=c->r[31]|c->r[31]; // 801B713C
  c->r[4]=0u+0x0000000Bu; // 801B7140
  c->lr=0x801B7148u; f_801B966C(c); // 801B7144
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B7148
  c->r[3]=c->r[31]|c->r[31]; // 801B714C
  c->r[4]=0u+0x0000000Cu; // 801B7150
  c->lr=0x801B7158u; f_801B966C(c); // 801B7154
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B7158
  c->r[3]=c->r[31]|c->r[31]; // 801B715C
  c->r[4]=0u+0x0000000Du; // 801B7160
  c->lr=0x801B7168u; f_801B966C(c); // 801B7164
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801B7168
  c->r[3]=c->r[31]|c->r[31]; // 801B716C
  c->r[4]=0u+0x0000000Eu; // 801B7170
  c->lr=0x801B7178u; f_801B966C(c); // 801B7174
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B7178
  c->r[3]=c->r[31]|c->r[31]; // 801B717C
  c->r[4]=0u+0x0000000Fu; // 801B7180
  c->lr=0x801B7188u; f_801B966C(c); // 801B7184
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7188
  c->r[3]=c->r[31]|c->r[31]; // 801B718C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B7190
  c->r[4]=0u+0x00000010u; // 801B7194
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801B7198
  c->lr=0x801B71A0u; f_801B966C(c); // 801B719C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801B71A0
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[12]=c->ps1[12]=RF32(ea);} // 801B71A4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 801B71A8
  c->r[3]=c->r[31]|c->r[31]; // 801B71AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 801B71B0
  c->r[4]=0u+0x00000011u; // 801B71B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[9]=c->ps1[9]=RF32(ea);} // 801B71B8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[8]=c->ps1[8]=RF32(ea);} // 801B71BC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B71C0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801B71C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B71C8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B71CC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B71D0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B71D4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B71D8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[12]);} // 801B71DC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[12]);} // 801B71E0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[12]);} // 801B71E4
  {uint32_t ea=c->r[30]+0x00004D6Cu; WF32(ea,c->f[11]);} // 801B71E8
  {uint32_t ea=c->r[30]+0x00004D70u; WF32(ea,c->f[10]);} // 801B71EC
  {uint32_t ea=c->r[30]+0x00004D74u; WF32(ea,c->f[9]);} // 801B71F0
  {uint32_t ea=c->r[30]+0x00004D78u; WF32(ea,c->f[8]);} // 801B71F4
  {uint32_t ea=c->r[30]+0x00004D7Cu; WF32(ea,c->f[7]);} // 801B71F8
  {uint32_t ea=c->r[30]+0x00004D80u; WF32(ea,c->f[6]);} // 801B71FC
  {uint32_t ea=c->r[30]+0x00004D84u; WF32(ea,c->f[5]);} // 801B7200
  {uint32_t ea=c->r[30]+0x00004D88u; WF32(ea,c->f[4]);} // 801B7204
  {uint32_t ea=c->r[30]+0x00004D8Cu; WF32(ea,c->f[3]);} // 801B7208
  {uint32_t ea=c->r[30]+0x00004D90u; WF32(ea,c->f[2]);} // 801B720C
  {uint32_t ea=c->r[30]+0x00004D94u; WF32(ea,c->f[0]);} // 801B7210
  {uint32_t ea=c->r[30]+0x00004D98u; WF32(ea,c->f[12]);} // 801B7214
  {uint32_t ea=c->r[30]+0x00004D9Cu; WF32(ea,c->f[12]);} // 801B7218
  {uint32_t ea=c->r[30]+0x00004DA0u; WF32(ea,c->f[12]);} // 801B721C
  c->lr=0x801B7224u; f_801B9714(c); // 801B7220
  W32(c->r[1]+0x00000040u,c->r[3]); // 801B7224
  c->r[3]=c->r[31]|c->r[31]; // 801B7228
  c->r[4]=0u+0x00000012u; // 801B722C
  c->lr=0x801B7234u; f_801B9714(c); // 801B7230
  W32(c->r[1]+0x00000044u,c->r[3]); // 801B7234
  c->r[3]=c->r[31]|c->r[31]; // 801B7238
  c->r[4]=0u+0x00000013u; // 801B723C
  c->lr=0x801B7244u; f_801B966C(c); // 801B7240
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 801B7244
  c->r[3]=c->r[31]|c->r[31]; // 801B7248
  c->r[4]=0u+0x00000015u; // 801B724C
  c->lr=0x801B7254u; f_801B966C(c); // 801B7250
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 801B7254
  c->r[3]=c->r[31]|c->r[31]; // 801B7258
  c->r[4]=0u+0x00000016u; // 801B725C
  c->lr=0x801B7264u; f_801B966C(c); // 801B7260
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[1]);} // 801B7264
  c->r[3]=c->r[31]|c->r[31]; // 801B7268
  c->r[4]=0u+0x00000017u; // 801B726C
  c->lr=0x801B7274u; f_801B966C(c); // 801B7270
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 801B7274
  c->r[3]=c->r[31]|c->r[31]; // 801B7278
  c->r[4]=0u+0x00000018u; // 801B727C
  c->lr=0x801B7284u; f_801B966C(c); // 801B7280
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 801B7284
  c->r[3]=c->r[31]|c->r[31]; // 801B7288
  c->r[4]=0u+0x00000019u; // 801B728C
  c->lr=0x801B7294u; f_801B966C(c); // 801B7290
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 801B7294
  c->r[3]=c->r[31]|c->r[31]; // 801B7298
  c->r[4]=0u+0x0000001Au; // 801B729C
  c->lr=0x801B72A4u; f_801B966C(c); // 801B72A0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 801B72A4
  c->r[3]=c->r[31]|c->r[31]; // 801B72A8
  c->r[4]=0u+0x0000001Bu; // 801B72AC
  c->lr=0x801B72B4u; f_801B966C(c); // 801B72B0
  {uint32_t ea=c->r[2]+0xFFFFB3F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B72B4
  c->r[3]=c->r[31]|c->r[31]; // 801B72B8
  c->r[4]=0u+0x0000001Cu; // 801B72BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801B72C0
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801B72C4
  c->lr=0x801B72CCu; f_801B966C(c); // 801B72C8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 801B72CC
  c->r[3]=c->r[31]|c->r[31]; // 801B72D0
  c->r[4]=0u+0x0000001Du; // 801B72D4
  c->lr=0x801B72DCu; f_801B966C(c); // 801B72D8
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 801B72DC
  c->r[3]=c->r[31]|c->r[31]; // 801B72E0
  c->r[4]=0u+0x0000001Eu; // 801B72E4
  c->lr=0x801B72ECu; f_801B966C(c); // 801B72E8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 801B72EC
  c->r[3]=c->r[31]|c->r[31]; // 801B72F0
  c->r[4]=0u+0x0000001Fu; // 801B72F4
  c->lr=0x801B72FCu; f_801B966C(c); // 801B72F8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 801B72FC
  c->r[3]=c->r[31]|c->r[31]; // 801B7300
  c->r[4]=0u+0x00000020u; // 801B7304
  c->lr=0x801B730Cu; f_801B966C(c); // 801B7308
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 801B730C
  c->r[3]=c->r[31]|c->r[31]; // 801B7310
  c->r[4]=0u+0x00000021u; // 801B7314
  c->lr=0x801B731Cu; f_801B966C(c); // 801B7318
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 801B731C
  c->r[3]=c->r[31]|c->r[31]; // 801B7320
  c->r[4]=0u+0x00000022u; // 801B7324
  c->lr=0x801B732Cu; f_801B966C(c); // 801B7328
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 801B732C
  c->r[3]=c->r[31]|c->r[31]; // 801B7330
  c->r[4]=0u+0x00000023u; // 801B7334
  c->lr=0x801B733Cu; f_801B966C(c); // 801B7338
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 801B733C
  c->r[3]=c->r[31]|c->r[31]; // 801B7340
  c->r[4]=0u+0x00000024u; // 801B7344
  c->lr=0x801B734Cu; f_801B966C(c); // 801B7348
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 801B734C
  c->r[4]=c->r[1]+0x00000040u; // 801B7350
  c->r[3]=R32(c->r[13]+0xFFFF9788u); // 801B7354
  c->r[5]=0u+0x0000004Cu; // 801B7358
  c->lr=0x801B7360u; f_80235294(c); // 801B735C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801B7360
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801B7364
  c->r[30]=R32(c->r[1]+0x00000098u); // 801B7368
  c->lr=c->r[0]; // 801B736C
  c->r[1]=c->r[1]+0x000000A0u; // 801B7370
  return; // 801B7374
}

// fn_801B7378
void f_801B7378(Ctx* __restrict c) {
  trace_call(0x801B7378u);
  return; // 801B7378
}

// fn_801B737C
void f_801B737C(Ctx* __restrict c) {
  trace_call(0x801B737Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B737C
  c->r[0]=c->lr; // 801B7380
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B7384
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801B7388
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801B738C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801B7390
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801B7394
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B7398
  c->r[31]=c->r[4]|c->r[4]; // 801B739C
  c->r[4]=0u+0x00000007u; // 801B73A0
  W32(c->r[1]+0x00000048u,c->r[30]); // 801B73A4
  c->r[30]=c->r[3]|c->r[3]; // 801B73A8
  c->r[3]=c->r[31]|c->r[31]; // 801B73AC
  c->lr=0x801B73B4u; f_801B966C(c); // 801B73B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801B73B4
  c->r[3]=c->r[31]|c->r[31]; // 801B73B8
  c->r[4]=0u+0x00000008u; // 801B73BC
  c->lr=0x801B73C4u; f_801B966C(c); // 801B73C0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801B73C4
  c->r[3]=c->r[31]|c->r[31]; // 801B73C8
  c->r[4]=0u+0x00000009u; // 801B73CC
  c->lr=0x801B73D4u; f_801B966C(c); // 801B73D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801B73D4
  c->r[3]=c->r[31]|c->r[31]; // 801B73D8
  c->r[4]=0u+0x0000000Au; // 801B73DC
  c->lr=0x801B73E4u; f_801B966C(c); // 801B73E0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801B73E4
  c->r[3]=c->r[31]|c->r[31]; // 801B73E8
  c->r[4]=0u+0x0000000Bu; // 801B73EC
  c->lr=0x801B73F4u; f_801B966C(c); // 801B73F0
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B73F4
  c->r[3]=c->r[31]|c->r[31]; // 801B73F8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801B73FC
  c->r[4]=0u+0x0000000Cu; // 801B7400
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B7404
  c->lr=0x801B740Cu; f_801B966C(c); // 801B7408
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 801B740C
  c->r[3]=c->r[31]|c->r[31]; // 801B7410
  c->r[4]=0u+0x0000000Du; // 801B7414
  c->lr=0x801B741Cu; f_801B966C(c); // 801B7418
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 801B741C
  c->r[3]=c->r[31]|c->r[31]; // 801B7420
  c->r[4]=0u+0x0000000Eu; // 801B7424
  c->lr=0x801B742Cu; f_801B966C(c); // 801B7428
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801B742C
  c->r[3]=c->r[31]|c->r[31]; // 801B7430
  c->r[4]=0u+0x0000000Fu; // 801B7434
  c->lr=0x801B743Cu; f_801B966C(c); // 801B7438
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801B743C
  c->r[3]=c->r[31]|c->r[31]; // 801B7440
  c->r[4]=0u+0x00000010u; // 801B7444
  c->lr=0x801B744Cu; f_801B966C(c); // 801B7448
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801B744C
  c->r[3]=c->r[31]|c->r[31]; // 801B7450
  c->r[4]=0u+0x00000011u; // 801B7454
  c->lr=0x801B745Cu; f_801B966C(c); // 801B7458
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801B745C
  c->r[3]=c->r[31]|c->r[31]; // 801B7460
  c->r[4]=0u+0x00000012u; // 801B7464
  c->lr=0x801B746Cu; f_801B966C(c); // 801B7468
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 801B746C
  c->r[3]=c->r[31]|c->r[31]; // 801B7470
  c->r[4]=0u+0x00000013u; // 801B7474
  c->lr=0x801B747Cu; f_801B966C(c); // 801B7478
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B747C
  c->r[3]=c->r[31]|c->r[31]; // 801B7480
  c->r[4]=0u+0x00000014u; // 801B7484
  c->lr=0x801B748Cu; f_801B966C(c); // 801B7488
  c->f[3]=c->ps1[3]=S(c->f[1]); // 801B748C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 801B7490
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801B7494
  {uint32_t ea=c->r[2]+0xFFFFB3F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7498
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801B749C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801B74A0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 801B74A4
  {uint32_t ea=c->r[30]+0x00002748u; WF32(ea,c->f[3]);} // 801B74A8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[0]); // 801B74AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 801B74B0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801B74B4
  {uint32_t ea=c->r[30]+0x00002724u; WF32(ea,c->f[5]);} // 801B74B8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[12]=c->ps1[12]=RF32(ea);} // 801B74BC
  {uint32_t ea=c->r[30]+0x00002744u; WF32(ea,c->f[4]);} // 801B74C0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 801B74C4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[10]=c->ps1[10]=RF32(ea);} // 801B74C8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 801B74CC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[8]=c->ps1[8]=RF32(ea);} // 801B74D0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801B74D4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B74D8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B74DC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B74E0
  {uint32_t ea=c->r[30]+0x00002710u; WF32(ea,c->f[30]);} // 801B74E4
  {uint32_t ea=c->r[30]+0x00002714u; WF32(ea,c->f[31]);} // 801B74E8
  {uint32_t ea=c->r[30]+0x00002718u; WF32(ea,c->f[13]);} // 801B74EC
  {uint32_t ea=c->r[30]+0x0000271Cu; WF32(ea,c->f[12]);} // 801B74F0
  {uint32_t ea=c->r[30]+0x00002720u; WF32(ea,c->f[11]);} // 801B74F4
  {uint32_t ea=c->r[30]+0x00002728u; WF32(ea,c->f[10]);} // 801B74F8
  {uint32_t ea=c->r[30]+0x0000272Cu; WF32(ea,c->f[9]);} // 801B74FC
  {uint32_t ea=c->r[30]+0x00002730u; WF32(ea,c->f[8]);} // 801B7500
  {uint32_t ea=c->r[30]+0x00002734u; WF32(ea,c->f[7]);} // 801B7504
  {uint32_t ea=c->r[30]+0x00002738u; WF32(ea,c->f[6]);} // 801B7508
  {uint32_t ea=c->r[30]+0x0000273Cu; WF32(ea,c->f[5]);} // 801B750C
  {uint32_t ea=c->r[30]+0x00002740u; WF32(ea,c->f[4]);} // 801B7510
  {uint32_t ea=c->r[30]+0x00002744u; WF32(ea,c->f[3]);} // 801B7514
  {uint32_t ea=c->r[30]+0x00002748u; WF32(ea,c->f[2]);} // 801B7518
  {uint32_t ea=c->r[30]+0x00002724u; WF32(ea,c->f[0]);} // 801B751C
  {uint32_t ea=c->r[30]+0x00001F68u; WF32(ea,c->f[30]);} // 801B7520
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 801B7524
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801B7528
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801B752C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801B7530
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801B7534
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B7538
  c->r[30]=R32(c->r[1]+0x00000048u); // 801B753C
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B7540
  c->lr=c->r[0]; // 801B7544
  c->r[1]=c->r[1]+0x00000070u; // 801B7548
  return; // 801B754C
}

// fn_801B7550
void f_801B7550(Ctx* __restrict c) {
  trace_call(0x801B7550u);
  {uint32_t ea=c->r[1]+0xFFFFFAE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7550
  c->r[0]=c->lr; // 801B7554
  W32(c->r[1]+0x00000524u,c->r[0]); // 801B7558
  {uint32_t ea=c->r[1]+0x00000510u; WF64(ea,c->f[31]);} // 801B755C
  {uint32_t ea=c->r[1]+0x00000518u; psq_store(c,31,ea,0,0);} // 801B7560
  c->r[11]=c->r[1]+0x00000510u; // 801B7564
  c->lr=0x801B756Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7568
  c->r[31]=c->r[1]|c->r[1]; // 801B756C
  c->f[31]=c->f[1]; // 801B7570
  c->r[24]=c->r[5]|c->r[5]; // 801B7574
  c->r[22]=c->r[3]|c->r[3]; // 801B7578
  c->r[23]=c->r[4]|c->r[4]; // 801B757C
  c->r[30]=c->r[6]|c->r[6]; // 801B7580
  c->r[29]=c->r[7]|c->r[7]; // 801B7584
  c->r[26]=c->r[8]|c->r[8]; // 801B7588
  c->r[25]=c->r[9]|c->r[9]; // 801B758C
  c->r[3]=c->r[24]|c->r[24]; // 801B7590
  c->r[27]=0u+0x00000000u; // 801B7594
  c->r[28]=0u+0x00000000u; // 801B7598
  c->lr=0x801B75A0u; f_802894C0(c); // 801B759C
  cmps(c,0,(int32_t)c->r[3],0); // 801B75A0
  if (!crb(c,2)) { goto L_801B75D0; } // 801B75A4
  c->r[3]=c->r[30]|c->r[30]; // 801B75A8
  c->lr=0x801B75B0u; f_802894C0(c); // 801B75AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B75B0
  if (!crb(c,2)) { goto L_801B75D0; } // 801B75B4
  c->r[3]=c->r[29]|c->r[29]; // 801B75B8
  c->lr=0x801B75C0u; f_802894C0(c); // 801B75BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B75C0
  if (!crb(c,2)) { goto L_801B75D0; } // 801B75C4
  c->r[3]=0u+0x00000000u; // 801B75C8
  goto L_801B7AE0; // 801B75CC
L_801B75D0:;
  c->r[3]=c->r[24]|c->r[24]; // 801B75D0
  c->lr=0x801B75D8u; f_802894C0(c); // 801B75D4
  cmps(c,0,(int32_t)c->r[3],0); // 801B75D8
  if (crb(c,2)) { goto L_801B76B0; } // 801B75DC
  c->r[5]=c->r[24]|c->r[24]; // 801B75E0
  c->r[3]=c->r[31]+0x00000260u; // 801B75E4
  c->r[4]=c->r[13]+0xFFFF87F1u; // 801B75E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B75EC
  c->lr=0x801B75F4u; f_80291CC4(c); // 801B75F0
  c->r[4]=c->r[31]+0x00000260u; // 801B75F4
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B75F8
  c->lr=0x801B7600u; f_80104374(c); // 801B75FC
  c->r[4]=c->r[3]|c->r[3]; // 801B7600
  c->r[3]=c->r[31]+0x000001F0u; // 801B7604
  c->r[4]=R32(c->r[4]+0x00000010u); // 801B7608
  c->lr=0x801B7610u; f_801328F8(c); // 801B760C
  c->r[3]=c->r[31]+0x000001F0u; // 801B7610
  c->r[5]=c->r[31]+0x00000048u; // 801B7614
  c->r[4]=c->r[13]+0xFFFF87EAu; // 801B7618
  c->lr=0x801B7620u; f_80132B34(c); // 801B761C
  cmps(c,0,(int32_t)c->r[3],0); // 801B7620
  if (!crb(c,2)) { goto L_801B7630; } // 801B7624
  c->r[27]=0u+0x00000000u; // 801B7628
  goto L_801B7648; // 801B762C
L_801B7630:;
  c->r[4]=R32(c->r[31]+0x00000054u); // 801B7630
  c->r[3]=c->r[31]+0x000001F0u; // 801B7634
  c->r[5]=c->r[31]+0x00000014u; // 801B7638
  c->r[6]=0u+0x00000000u; // 801B763C
  c->lr=0x801B7644u; f_801329F0(c); // 801B7640
  c->r[27]=R32(c->r[31]+0x00000014u); // 801B7644
L_801B7648:;
  c->r[4]=0u+0x80400000u; // 801B7648
  c->r[5]=c->r[24]|c->r[24]; // 801B764C
  c->r[3]=c->r[31]+0x00000170u; // 801B7650
  c->r[4]=c->r[4]+0x00001AAFu; // 801B7654
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7658
  c->lr=0x801B7660u; f_80291CC4(c); // 801B765C
  c->r[4]=c->r[31]+0x00000170u; // 801B7660
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B7664
  c->lr=0x801B766Cu; f_80104374(c); // 801B7668
  c->r[28]=R32(c->r[3]+0x00000010u); // 801B766C
  cmps(c,0,(int32_t)c->r[28],0); // 801B7670
  if (!crb(c,2)) { goto L_801B76A0; } // 801B7674
  c->r[4]=0u+0x80400000u; // 801B7678
  c->r[5]=R32(c->r[23]+0x000004A8u); // 801B767C
  c->r[3]=c->r[31]+0x00000170u; // 801B7680
  c->r[4]=c->r[4]+0x00001AA4u; // 801B7684
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7688
  c->lr=0x801B7690u; f_80291CC4(c); // 801B768C
  c->r[4]=c->r[31]+0x00000170u; // 801B7690
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B7694
  c->lr=0x801B769Cu; f_80104374(c); // 801B7698
  c->r[28]=R32(c->r[3]+0x00000010u); // 801B769C
L_801B76A0:;
  c->r[0]=0u+0xFFFFFFFFu; // 801B76A0
  c->r[3]=c->r[31]+0x000001F0u; // 801B76A4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801B76A8
  c->lr=0x801B76B0u; f_80132958(c); // 801B76AC
L_801B76B0:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B76B0
  if (!crb(c,2)) { goto L_801B7700; } // 801B76B4
  c->r[4]=0u+0x80400000u; // 801B76B8
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B76BC
  c->r[4]=c->r[4]+0x00001A9Bu; // 801B76C0
  c->lr=0x801B76C8u; f_80104374(c); // 801B76C4
  c->r[4]=R32(c->r[3]+0x00000010u); // 801B76C8
  cmps(c,0,(int32_t)c->r[4],0); // 801B76CC
  if (crb(c,2)) { goto L_801B7700; } // 801B76D0
  c->r[3]=c->r[31]+0x00000100u; // 801B76D4
  c->lr=0x801B76DCu; f_801328F8(c); // 801B76D8
  c->r[4]=0u+0x80400000u; // 801B76DC
  c->r[3]=c->r[31]+0x00000100u; // 801B76E0
  c->r[4]=c->r[4]+0x00001A90u; // 801B76E4
  c->lr=0x801B76ECu; f_80132AE0(c); // 801B76E8
  c->r[0]=0u+0xFFFFFFFFu; // 801B76EC
  c->r[27]=c->r[3]|c->r[3]; // 801B76F0
  c->r[3]=c->r[31]+0x00000100u; // 801B76F4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801B76F8
  c->lr=0x801B7700u; f_80132958(c); // 801B76FC
L_801B7700:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B7700
  if (!crb(c,2)) { goto L_801B7710; } // 801B7704
  c->r[3]=0u+0x00000000u; // 801B7708
  goto L_801B7AE0; // 801B770C
L_801B7710:;
  c->r[0]=rotl(c->r[27],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B7710
  W32(c->r[31]+0x00000010u,c->r[27]); // 801B7714
  if (crb(c,2)) { goto L_801B7738; } // 801B7718
  c->r[3]=0u+0x803F0000u; // 801B771C
  c->r[5]=0u+0x803F0000u; // 801B7720
  c->r[3]=c->r[3]+0x00001D4Fu; // 801B7724
  c->r[4]=0u+0x0000003Cu; // 801B7728
  c->r[5]=c->r[5]+0x00001D28u; // 801B772C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7730
  c->lr=0x801B7738u; f_803444BC(c); // 801B7734
L_801B7738:;
  c->r[3]=c->r[31]+0x00000010u; // 801B7738
  c->lr=0x801B7740u; f_80364F00(c); // 801B773C
  c->r[0]=R32(c->r[31]+0x00000010u); // 801B7740
  c->r[3]=c->r[31]+0x00000010u; // 801B7744
  c->r[4]=c->r[31]+0x00000008u; // 801B7748
  W32(c->r[31]+0x00000008u,c->r[0]); // 801B774C
  c->lr=0x801B7754u; f_80364CCC(c); // 801B7750
  c->r[3]=R32(c->r[22]+0x00004010u); // 801B7754
  c->r[0]=c->r[3]+0x00000001u; // 801B7758
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801B775C
  cmps(c,0,(int32_t)c->r[0],64); // 801B7760
  W32(c->r[22]+0x00004010u,c->r[0]); // 801B7764
  c->r[3]=c->r[22]+c->r[3]; // 801B7768
  c->r[27]=c->r[3]+0x00000010u; // 801B776C
  if (crb(c,0)) { goto L_801B777C; } // 801B7770
  c->r[0]=0u+0x00000000u; // 801B7774
  W32(c->r[22]+0x00004010u,c->r[0]); // 801B7778
L_801B777C:;
  c->r[3]=c->r[23]|c->r[23]; // 801B777C
  c->r[4]=0u+0x00000000u; // 801B7780
  c->lr=0x801B7788u; f_800CECD0(c); // 801B7784
  c->r[3]=R32(c->r[23]+0x000004C0u); // 801B7788
  c->r[0]=0u+0x00000006u; // 801B778C
  c->r[5]=c->r[27]+0x000000C4u; // 801B7790
  c->r[4]=c->r[25]+0xFFFFFFFCu; // 801B7794
  W32(c->r[27]+0x00000000u,c->r[3]); // 801B7798
  c->ctr=c->r[0]; // 801B779C
L_801B77A0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B77A0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B77A4
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B77A8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801B77AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B77A0; } // 801B77B0
  cmps(c,0,(int32_t)c->r[26],0); // 801B77B4
  W32(c->r[27]+0x000000FCu,c->r[23]); // 801B77B8
  if (crb(c,2)) { goto L_801B7800; } // 801B77BC
  c->r[4]=c->r[26]|c->r[26]; // 801B77C0
  c->r[3]=c->r[27]+0x000000A4u; // 801B77C4
  c->lr=0x801B77CCu; f_802933D8(c); // 801B77C8
  c->r[5]=c->r[26]|c->r[26]; // 801B77CC
  c->r[3]=c->r[31]+0x000002E0u; // 801B77D0
  c->r[4]=c->r[13]+0xFFFF87E4u; // 801B77D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B77D8
  c->lr=0x801B77E0u; f_80291CC4(c); // 801B77DC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B77E0
  c->r[4]=c->r[31]+0x000002E0u; // 801B77E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B77E8
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B77EC
  c->ctr=c->r[12]; // 801B77F0
  if (true) { c->lr=0x801B77F8u; dispatch(c,c->ctr); } // 801B77F4
  W32(c->r[27]+0x000000C4u,c->r[3]); // 801B77F8
  goto L_801B780C; // 801B77FC
L_801B7800:;
  c->r[0]=0u+0x00000000u; // 801B7800
  W8(c->r[27]+0x000000A4u,c->r[0]); // 801B7804
  W32(c->r[27]+0x000000C4u,c->r[0]); // 801B7808
L_801B780C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B780C
  c->lr=0x801B7814u; f_802894C0(c); // 801B7810
  cmps(c,0,(int32_t)c->r[3],0); // 801B7814
  if (crb(c,2)) { goto L_801B7850; } // 801B7818
  c->r[3]=c->r[29]|c->r[29]; // 801B781C
  c->lr=0x801B7824u; f_802894C0(c); // 801B7820
  cmps(c,0,(int32_t)c->r[3],0); // 801B7824
  if (crb(c,2)) { goto L_801B7850; } // 801B7828
  c->r[0]=0u+0x00000000u; // 801B782C
  c->r[4]=c->r[24]|c->r[24]; // 801B7830
  W32(c->r[27]+0x000000F8u,c->r[0]); // 801B7834
  c->r[3]=c->r[27]+0x00000004u; // 801B7838
  c->lr=0x801B7840u; f_802933D8(c); // 801B783C
  c->r[4]=c->r[29]|c->r[29]; // 801B7840
  c->r[3]=c->r[27]+0x00000024u; // 801B7844
  c->lr=0x801B784Cu; f_802933D8(c); // 801B7848
  goto L_801B789C; // 801B784C
L_801B7850:;
  c->r[3]=c->r[30]|c->r[30]; // 801B7850
  c->lr=0x801B7858u; f_802894C0(c); // 801B7854
  cmps(c,0,(int32_t)c->r[3],0); // 801B7858
  if (crb(c,2)) { goto L_801B7884; } // 801B785C
  c->r[3]=c->r[29]|c->r[29]; // 801B7860
  c->lr=0x801B7868u; f_802894C0(c); // 801B7864
  cmps(c,0,(int32_t)c->r[3],0); // 801B7868
  if (!crb(c,2)) { goto L_801B7884; } // 801B786C
  c->r[0]=0u+0x00000000u; // 801B7870
  W32(c->r[27]+0x000000F8u,c->r[0]); // 801B7874
  W8(c->r[27]+0x00000004u,c->r[0]); // 801B7878
  W8(c->r[27]+0x00000024u,c->r[0]); // 801B787C
  goto L_801B789C; // 801B7880
L_801B7884:;
  c->r[3]=0u+0x00000001u; // 801B7884
  c->r[0]=0u+0x00000000u; // 801B7888
  W32(c->r[27]+0x000000F8u,c->r[3]); // 801B788C
  c->r[30]=c->r[29]|c->r[29]; // 801B7890
  W8(c->r[27]+0x00000004u,c->r[0]); // 801B7894
  W8(c->r[27]+0x00000024u,c->r[0]); // 801B7898
L_801B789C:;
  c->r[4]=c->r[30]|c->r[30]; // 801B789C
  c->r[3]=c->r[31]+0x000003E0u; // 801B78A0
  c->lr=0x801B78A8u; f_802933D8(c); // 801B78A4
  c->r[3]=c->r[31]+0x00000040u; // 801B78A8
  c->r[4]=c->r[31]+0x000003E0u; // 801B78AC
  c->lr=0x801B78B4u; f_802561E0(c); // 801B78B0
  c->r[3]=c->r[31]+0x00000040u; // 801B78B4
  c->r[4]=c->r[13]+0xFFFF87E2u; // 801B78B8
  c->lr=0x801B78C0u; f_802561F4(c); // 801B78BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B78C0
  c->r[26]=c->r[3]|c->r[3]; // 801B78C4
  if (crb(c,2)) { goto L_801B7ADC; } // 801B78C8
  c->r[0]=0u+0x00000000u; // 801B78CC
  c->r[29]=c->r[31]+0x00000088u; // 801B78D0
  W32(c->r[31]+0x00000030u,c->r[0]); // 801B78D4
  W32(c->r[31]+0x00000034u,c->r[0]); // 801B78D8
  goto L_801B7AD4; // 801B78DC
L_801B78E0:;
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B78E0
  c->lr=0x801B78E8u; f_8010449C(c); // 801B78E4
  c->r[5]=R32(c->r[31]+0x00000010u); // 801B78E8
  c->r[30]=c->r[3]|c->r[3]; // 801B78EC
  c->r[6]=R32(c->r[31]+0x00000030u); // 801B78F0
  c->r[3]=c->r[31]+0x00000088u; // 801B78F4
  c->r[0]=R32(c->r[31]+0x00000034u); // 801B78F8
  c->r[4]=c->r[31]+0x00000028u; // 801B78FC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 801B7900
  c->r[5]=0u+0x00000000u; // 801B7904
  W32(c->r[31]+0x00000028u,c->r[6]); // 801B7908
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801B790C
  c->lr=0x801B7914u; f_80068BE0(c); // 801B7910
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 801B7914
  c->r[4]=0u+0x803F0000u; // 801B7918
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B791C
  c->r[4]=c->r[4]+0x000079E4u; // 801B7920
  c->r[3]=0u+0x00000000u; // 801B7924
  W32(c->r[31]+0x00000088u,c->r[4]); // 801B7928
  c->r[0]=0u+0x00000006u; // 801B792C
  c->r[5]=c->r[31]+0x000000CCu; // 801B7930
  c->r[4]=c->r[25]+0xFFFFFFFCu; // 801B7934
  W32(c->r[31]+0x00000098u,c->r[6]); // 801B7938
  W32(c->r[31]+0x000000BCu,c->r[28]); // 801B793C
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 801B7940
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[31]);} // 801B7944
  W32(c->r[31]+0x000000C8u,c->r[3]); // 801B7948
  W32(c->r[31]+0x000000CCu,c->r[30]); // 801B794C
  c->ctr=c->r[0]; // 801B7950
L_801B7954:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B7954
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B7958
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B795C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801B7960
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7954; } // 801B7964
  c->r[4]=0u+0x00000000u; // 801B7968
  goto L_801B7980; // 801B796C
L_801B7970:;
  c->r[0]=R8(c->r[26]+c->r[4]); // 801B7970
  c->r[3]=c->r[29]+c->r[4]; // 801B7974
  c->r[4]=c->r[4]+0x00000001u; // 801B7978
  W8(c->r[3]+0x00000014u,c->r[0]); // 801B797C
L_801B7980:;
  cmpu(c,0,c->r[4],0x00000020u); // 801B7980
  if (crb(c,0)) { IRQCHK(c); goto L_801B7970; } // 801B7984
  c->r[4]=R32(c->r[23]+0x00000000u); // 801B7988
  c->r[3]=c->r[31]+0x00000038u; // 801B798C
  c->r[0]=R32(c->r[23]+0x00000004u); // 801B7990
  W32(c->r[31]+0x00000038u,c->r[4]); // 801B7994
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 801B7998
  c->lr=0x801B79A0u; f_8003F1D4(c); // 801B799C
  cmps(c,0,(int32_t)c->r[3],0); // 801B79A0
  if (crb(c,2)) { goto L_801B7AC4; } // 801B79A4
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 801B79A8
  c->lr=0x801B79B0u; f_802A6EE4(c); // 801B79AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B79B0
  c->r[30]=c->r[3]|c->r[3]; // 801B79B4
  if (crb(c,2)) { goto L_801B7AC4; } // 801B79B8
  if (crb(c,2)) { goto L_801B7A10; } // 801B79BC
  c->r[22]=0u+0x00000000u; // 801B79C0
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 801B79C4
  c->r[4]=c->r[31]+0x00000020u; // 801B79C8
  c->r[5]=0u+0x00000000u; // 801B79CC
  W32(c->r[31]+0x00000018u,c->r[22]); // 801B79D0
  W32(c->r[31]+0x0000001Cu,c->r[22]); // 801B79D4
  W32(c->r[31]+0x00000020u,c->r[22]); // 801B79D8
  W32(c->r[31]+0x00000024u,c->r[22]); // 801B79DC
  c->lr=0x801B79E4u; f_80068BE0(c); // 801B79E0
  c->r[3]=0u+0x803F0000u; // 801B79E4
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B79E8
  c->r[3]=c->r[3]+0x000079E4u; // 801B79EC
  W32(c->r[30]+0x00000000u,c->r[3]); // 801B79F0
  W32(c->r[30]+0x00000010u,c->r[22]); // 801B79F4
  W32(c->r[30]+0x00000034u,c->r[22]); // 801B79F8
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 801B79FC
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 801B7A00
  W32(c->r[30]+0x00000040u,c->r[22]); // 801B7A04
  W32(c->r[30]+0x00000044u,c->r[22]); // 801B7A08
  W8(c->r[30]+0x00000014u,c->r[22]); // 801B7A0C
L_801B7A10:;
  c->r[3]=c->r[30]|c->r[30]; // 801B7A10
  c->r[4]=c->r[31]+0x00000088u; // 801B7A14
  c->lr=0x801B7A1Cu; f_80064DD8(c); // 801B7A18
  c->r[3]=R32(c->r[31]+0x00000098u); // 801B7A1C
  c->r[0]=0u+0x00000010u; // 801B7A20
  c->r[5]=c->r[30]+0x00000013u; // 801B7A24
  c->r[4]=c->r[31]+0x0000009Bu; // 801B7A28
  W32(c->r[30]+0x00000010u,c->r[3]); // 801B7A2C
  c->ctr=c->r[0]; // 801B7A30
L_801B7A34:;
  c->r[3]=R8(c->r[4]+0x00000001u); // 801B7A34
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R8(ea); c->r[4]=ea;} // 801B7A38
  W8(c->r[5]+0x00000001u,c->r[3]); // 801B7A3C
  {uint32_t ea=c->r[5]+0x00000002u; W8(ea,c->r[0]); c->r[5]=ea;} // 801B7A40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7A34; } // 801B7A44
  c->r[3]=R32(c->r[31]+0x000000BCu); // 801B7A48
  c->r[0]=0u+0x00000006u; // 801B7A4C
  c->r[5]=c->r[30]+0x00000044u; // 801B7A50
  c->r[4]=c->r[31]+0x000000CCu; // 801B7A54
  W32(c->r[30]+0x00000034u,c->r[3]); // 801B7A58
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7A5C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 801B7A60
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7A64
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 801B7A68
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801B7A6C
  W32(c->r[30]+0x00000040u,c->r[3]); // 801B7A70
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801B7A74
  W32(c->r[30]+0x00000044u,c->r[3]); // 801B7A78
  c->ctr=c->r[0]; // 801B7A7C
L_801B7A80:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B7A80
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B7A84
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B7A88
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801B7A8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7A80; } // 801B7A90
  c->r[22]=addc(c,c->r[30],0x00000078u,0); cr0(c,c->r[22]); // 801B7A94
  if (crb(c,2)) { goto L_801B7AAC; } // 801B7A98
  W32(c->r[31]+0x00000084u,c->r[1]); // 801B7A9C
  c->r[3]=c->r[22]|c->r[22]; // 801B7AA0
  c->r[4]=c->r[30]|c->r[30]; // 801B7AA4
  c->lr=0x801B7AACu; f_80064CE8(c); // 801B7AA8
L_801B7AAC:;
  c->r[3]=c->r[31]+0x00000038u; // 801B7AAC
  c->lr=0x801B7AB4u; f_80064CFC(c); // 801B7AB0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B7AB4
  c->r[4]=c->r[22]|c->r[22]; // 801B7AB8
  c->r[3]=c->r[3]+0x00000030u; // 801B7ABC
  c->lr=0x801B7AC4u; f_8003FD14(c); // 801B7AC0
L_801B7AC4:;
  c->r[3]=c->r[31]+0x00000040u; // 801B7AC4
  c->r[4]=c->r[13]+0xFFFF87E0u; // 801B7AC8
  c->lr=0x801B7AD0u; f_802561F4(c); // 801B7ACC
  c->r[26]=c->r[3]|c->r[3]; // 801B7AD0
L_801B7AD4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B7AD4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B78E0; } // 801B7AD8
L_801B7ADC:;
  c->r[3]=c->r[27]|c->r[27]; // 801B7ADC
L_801B7AE0:;
  c->r[10]=c->r[31]|c->r[31]; // 801B7AE0
  {uint32_t ea=c->r[10]+0x00000518u; psq_load(c,31,ea,0,0);} // 801B7AE4
  c->r[11]=c->r[10]+0x00000510u; // 801B7AE8
  {uint32_t ea=c->r[31]+0x00000510u; c->f[31]=RF64(ea);} // 801B7AEC
  c->lr=0x801B7AF4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7AF0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B7AF4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B7AF8
  c->r[1]=c->r[10]|c->r[10]; // 801B7AFC
  c->lr=c->r[0]; // 801B7B00
  return; // 801B7B04
}

// fn_801B7B08
void f_801B7B08(Ctx* __restrict c) {
  trace_call(0x801B7B08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7B08
  c->r[0]=c->lr; // 801B7B0C
  c->r[3]=0u+0x00000000u; // 801B7B10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7B14
  c->lr=0x801B7B1Cu; f_801B251C(c); // 801B7B18
  cmps(c,0,(int32_t)c->r[3],0); // 801B7B1C
  if (crb(c,2)) { goto L_801B7B2C; } // 801B7B20
  c->r[3]=R32(c->r[3]+0x00000034u); // 801B7B24
  goto L_801B7B30; // 801B7B28
L_801B7B2C:;
  c->r[3]=0u+0xFFFFFFFFu; // 801B7B2C
L_801B7B30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7B30
  c->lr=c->r[0]; // 801B7B34
  c->r[1]=c->r[1]+0x00000010u; // 801B7B38
  return; // 801B7B3C
}

// fn_801B7B40
void f_801B7B40(Ctx* __restrict c) {
  trace_call(0x801B7B40u);
  c->r[3]=c->r[3]+0x0000706Cu; // 801B7B40
  return; // 801B7B44
}

// fn_801B7B48
void f_801B7B48(Ctx* __restrict c) {
  trace_call(0x801B7B48u);
  c->r[3]=c->r[3]+0x0000706Cu; // 801B7B48
  f_80065358(c); return; // 801B7B4C
}

// fn_801B7B50
void f_801B7B50(Ctx* __restrict c) {
  trace_call(0x801B7B50u);
  c->r[3]=c->r[3]+0x00007078u; // 801B7B50
  f_801B7B58(c); return; // 801B7B54
}

// fn_801B7B58
void f_801B7B58(Ctx* __restrict c) {
  trace_call(0x801B7B58u);
  c->r[0]=0u+0x00000020u; // 801B7B58
  c->r[5]=0u+0x00000000u; // 801B7B5C
  c->r[4]=0u+0x00000000u; // 801B7B60
  c->ctr=c->r[0]; // 801B7B64
L_801B7B68:;
  W8(c->r[3]+c->r[4],c->r[5]); // 801B7B68
  c->r[4]=c->r[4]+0x00000F48u; // 801B7B6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7B68; } // 801B7B70
  c->r[3]=c->r[3]+0x00020000u; // 801B7B74
  c->r[0]=0u+0x00000000u; // 801B7B78
  W32(c->r[3]+0xFFFFE904u,c->r[0]); // 801B7B7C
  W32(c->r[3]+0xFFFFE900u,c->r[0]); // 801B7B80
  return; // 801B7B84
}

// fn_801B7B88
void f_801B7B88(Ctx* __restrict c) {
  trace_call(0x801B7B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7B88
  c->r[0]=c->lr; // 801B7B8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7B90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B7B94
  c->r[28]=0u+0x00000000u; // 801B7B98
  c->r[26]=c->r[3]|c->r[3]; // 801B7B9C
  c->r[27]=c->r[4]|c->r[4]; // 801B7BA0
  c->r[31]=0u+0x00000000u; // 801B7BA4
  c->r[30]=c->r[28]|c->r[28]; // 801B7BA8
L_801B7BAC:;
  c->r[29]=c->r[26]+c->r[31]; // 801B7BAC
  c->r[0]=R8(c->r[29]+0x00007078u); // 801B7BB0
  cmps(c,0,(int32_t)c->r[0],0); // 801B7BB4
  if (crb(c,2)) { goto L_801B7BDC; } // 801B7BB8
  c->r[3]=c->r[29]+0x0000707Cu; // 801B7BBC
  c->r[4]=0u+0x00000001u; // 801B7BC0
  c->lr=0x801B7BC8u; f_801B9714(c); // 801B7BC4
  cmps(c,0,(int32_t)c->r[27],0); // 801B7BC8
  if (crb(c,0)) { goto L_801B7BD8; } // 801B7BCC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 801B7BD0
  if (!crb(c,2)) { goto L_801B7BDC; } // 801B7BD4
L_801B7BD8:;
  W8(c->r[29]+0x00007078u,c->r[30]); // 801B7BD8
L_801B7BDC:;
  c->r[28]=c->r[28]+0x00000001u; // 801B7BDC
  c->r[31]=c->r[31]+0x00000F48u; // 801B7BE0
  cmps(c,0,(int32_t)c->r[28],32); // 801B7BE4
  if (crb(c,0)) { IRQCHK(c); goto L_801B7BAC; } // 801B7BE8
  c->r[3]=c->r[26]+0x00007078u; // 801B7BEC
  c->lr=0x801B7BF4u; f_801B7C08(c); // 801B7BF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B7BF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7BF8
  c->lr=c->r[0]; // 801B7BFC
  c->r[1]=c->r[1]+0x00000020u; // 801B7C00
  return; // 801B7C04
}

// fn_801B7C08
void f_801B7C08(Ctx* __restrict c) {
  trace_call(0x801B7C08u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7C08
  c->r[0]=c->lr; // 801B7C0C
  c->r[4]=0u+0x00000000u; // 801B7C10
  c->r[7]=0u+0x00000000u; // 801B7C14
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801B7C18
  c->r[0]=0u+0x00000020u; // 801B7C1C
  c->r[6]=c->r[1]+0x00000008u; // 801B7C20
  c->r[5]=0u+0x00000000u; // 801B7C24
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B7C28
  c->r[26]=c->r[3]|c->r[3]; // 801B7C2C
  c->r[28]=0u+0x00000000u; // 801B7C30
  c->ctr=c->r[0]; // 801B7C34
L_801B7C38:;
  c->r[0]=R8(c->r[3]+c->r[5]); // 801B7C38
  cmps(c,0,(int32_t)c->r[0],0); // 801B7C3C
  if (crb(c,2)) { goto L_801B7C50; } // 801B7C40
  W32(c->r[6]+c->r[4],c->r[7]); // 801B7C44
  c->r[28]=c->r[28]+0x00000001u; // 801B7C48
  c->r[4]=c->r[4]+0x00000004u; // 801B7C4C
L_801B7C50:;
  c->r[7]=c->r[7]+0x00000001u; // 801B7C50
  c->r[5]=c->r[5]+0x00000F48u; // 801B7C54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7C38; } // 801B7C58
  c->r[29]=c->r[1]+0x00000008u; // 801B7C5C
  c->r[27]=0u+0x00000000u; // 801B7C60
  c->r[31]=0u+0x00000000u; // 801B7C64
  c->r[30]=0u+0x00000000u; // 801B7C68
  goto L_801B7C98; // 801B7C6C
L_801B7C70:;
  c->r[0]=R32(c->r[29]+c->r[30]); // 801B7C70
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801B7C74
  if (crb(c,2)) { goto L_801B7C8C; } // 801B7C78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3912); // 801B7C7C
  c->r[3]=c->r[26]+c->r[31]; // 801B7C80
  c->r[4]=c->r[26]+c->r[0]; // 801B7C84
  c->lr=0x801B7C8Cu; f_801B7CE8(c); // 801B7C88
L_801B7C8C:;
  c->r[27]=c->r[27]+0x00000001u; // 801B7C8C
  c->r[31]=c->r[31]+0x00000F48u; // 801B7C90
  c->r[30]=c->r[30]+0x00000004u; // 801B7C94
L_801B7C98:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 801B7C98
  if (crb(c,0)) { IRQCHK(c); goto L_801B7C70; } // 801B7C9C
  c->r[0]=addc(c,~c->r[28],0x00000020u,1); // 801B7CA0
  c->r[4]=0u+0x00000000u; // 801B7CA4
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)3912); // 801B7CA8
  c->ctr=c->r[0]; // 801B7CAC
  cmps(c,0,(int32_t)c->r[28],32); // 801B7CB0
  if (!crb(c,0)) { goto L_801B7CC4; } // 801B7CB4
L_801B7CB8:;
  W8(c->r[26]+c->r[3],c->r[4]); // 801B7CB8
  c->r[3]=c->r[3]+0x00000F48u; // 801B7CBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7CB8; } // 801B7CC0
L_801B7CC4:;
  c->r[3]=c->r[26]+0x00020000u; // 801B7CC4
  c->r[0]=0u+0x00000000u; // 801B7CC8
  W32(c->r[3]+0xFFFFE900u,c->r[0]); // 801B7CCC
  W32(c->r[3]+0xFFFFE904u,c->r[28]); // 801B7CD0
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B7CD4
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801B7CD8
  c->lr=c->r[0]; // 801B7CDC
  c->r[1]=c->r[1]+0x000000A0u; // 801B7CE0
  return; // 801B7CE4
}

// fn_801B7CE8
void f_801B7CE8(Ctx* __restrict c) {
  trace_call(0x801B7CE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7CE8
  c->r[0]=c->lr; // 801B7CEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B7CF0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801B7CF4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B7CF8
  c->r[28]=c->r[4]|c->r[4]; // 801B7CFC
  c->r[27]=c->r[3]|c->r[3]; // 801B7D00
  c->r[4]=c->r[27]+0x00000004u; // 801B7D04
  c->r[5]=c->r[28]+0x00000004u; // 801B7D08
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B7D0C
  c->r[3]=c->r[1]+0x00000008u; // 801B7D10
  c->lr=0x801B7D18u; f_801732E4(c); // 801B7D14
  c->r[0]=R32(c->r[28]+0x00000010u); // 801B7D18
  c->r[29]=0u+0x00000000u; // 801B7D1C
  c->r[31]=0u+0x00000000u; // 801B7D20
  c->r[30]=0u+0x00000000u; // 801B7D24
  W32(c->r[27]+0x00000010u,c->r[0]); // 801B7D28
  goto L_801B7D60; // 801B7D2C
L_801B7D30:;
  c->r[4]=c->r[28]+c->r[30]; // 801B7D30
  c->r[3]=c->r[27]+c->r[31]; // 801B7D34
  c->r[0]=R32(c->r[4]+0x00000F38u); // 801B7D38
  c->r[5]=c->r[27]+c->r[30]; // 801B7D3C
  c->r[4]=c->r[28]+c->r[31]; // 801B7D40
  c->r[3]=c->r[3]+0x00000018u; // 801B7D44
  W32(c->r[5]+0x00000F38u,c->r[0]); // 801B7D48
  c->r[4]=c->r[4]+0x00000018u; // 801B7D4C
  c->lr=0x801B7D54u; f_8009D2F8(c); // 801B7D50
  c->r[29]=c->r[29]+0x00000001u; // 801B7D54
  c->r[31]=c->r[31]+0x000003C8u; // 801B7D58
  c->r[30]=c->r[30]+0x00000004u; // 801B7D5C
L_801B7D60:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 801B7D60
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801B7D64
  if (crb(c,0)) { IRQCHK(c); goto L_801B7D30; } // 801B7D68
  c->r[3]=c->r[27]|c->r[27]; // 801B7D6C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B7D70
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B7D74
  c->lr=c->r[0]; // 801B7D78
  c->r[1]=c->r[1]+0x00000030u; // 801B7D7C
  return; // 801B7D80
}

// fn_801B7D84
void f_801B7D84(Ctx* __restrict c) {
  trace_call(0x801B7D84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7D84
  c->r[0]=c->lr; // 801B7D88
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B7D8C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B7D90
  c->r[25]=c->r[3]|c->r[3]; // 801B7D94
  c->r[26]=c->r[4]|c->r[4]; // 801B7D98
  c->r[27]=c->r[5]|c->r[5]; // 801B7D9C
  c->r[28]=c->r[6]|c->r[6]; // 801B7DA0
  c->r[29]=0u+0x00000000u; // 801B7DA4
  c->r[31]=0u+0x00000000u; // 801B7DA8
L_801B7DAC:;
  c->r[3]=c->r[25]+c->r[31]; // 801B7DAC
  c->r[0]=R8(c->r[3]+0x00007078u); // 801B7DB0
  c->r[30]=c->r[3]+0x00007078u; // 801B7DB4
  cmps(c,0,(int32_t)c->r[0],0); // 801B7DB8
  if (crb(c,2)) { goto L_801B7E18; } // 801B7DBC
  c->r[3]=c->r[30]+0x00000004u; // 801B7DC0
  c->r[4]=0u+0x00000001u; // 801B7DC4
  c->lr=0x801B7DCCu; f_801B9714(c); // 801B7DC8
  cmps(c,0,(int32_t)c->r[26],0); // 801B7DCC
  if (crb(c,0)) { goto L_801B7DDC; } // 801B7DD0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 801B7DD4
  if (!crb(c,2)) { goto L_801B7E18; } // 801B7DD8
L_801B7DDC:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801B7DDC
  cmpu(c,0,c->r[0],0x00000004u); // 801B7DE0
  if (!crb(c,0)) { goto L_801B7E18; } // 801B7DE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B7DE8
  c->r[4]=c->r[28]+0x00000008u; // 801B7DEC
  c->r[3]=c->r[30]+c->r[0]; // 801B7DF0
  W32(c->r[3]+0x00000F38u,c->r[27]); // 801B7DF4
  c->r[0]=R32(c->r[30]+0x00000010u); // 801B7DF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)968); // 801B7DFC
  c->r[3]=c->r[30]+c->r[0]; // 801B7E00
  c->r[3]=c->r[3]+0x00000018u; // 801B7E04
  c->lr=0x801B7E0Cu; f_8009D2F8(c); // 801B7E08
  c->r[3]=R32(c->r[30]+0x00000010u); // 801B7E0C
  c->r[0]=c->r[3]+0x00000001u; // 801B7E10
  W32(c->r[30]+0x00000010u,c->r[0]); // 801B7E14
L_801B7E18:;
  c->r[29]=c->r[29]+0x00000001u; // 801B7E18
  c->r[31]=c->r[31]+0x00000F48u; // 801B7E1C
  cmps(c,0,(int32_t)c->r[29],32); // 801B7E20
  if (crb(c,0)) { IRQCHK(c); goto L_801B7DAC; } // 801B7E24
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B7E28
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B7E2C
  c->lr=c->r[0]; // 801B7E30
  c->r[1]=c->r[1]+0x00000030u; // 801B7E34
  return; // 801B7E38
}

// fn_801B7E3C
void f_801B7E3C(Ctx* __restrict c) {
  trace_call(0x801B7E3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7E3C
  c->r[0]=c->lr; // 801B7E40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7E44
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B7E48
  c->r[27]=c->r[3]|c->r[3]; // 801B7E4C
  c->r[28]=c->r[4]|c->r[4]; // 801B7E50
  c->r[29]=0u+0x00000000u; // 801B7E54
  c->r[30]=0u+0x00000000u; // 801B7E58
  c->r[31]=0u+0x00000000u; // 801B7E5C
L_801B7E60:;
  c->r[3]=c->r[27]+c->r[31]; // 801B7E60
  c->r[0]=R8(c->r[3]+0x00007078u); // 801B7E64
  cmps(c,0,(int32_t)c->r[0],0); // 801B7E68
  if (crb(c,2)) { goto L_801B7E90; } // 801B7E6C
  c->r[3]=c->r[3]+0x0000707Cu; // 801B7E70
  c->r[4]=0u+0x00000001u; // 801B7E74
  c->lr=0x801B7E7Cu; f_801B9714(c); // 801B7E78
  cmps(c,0,(int32_t)c->r[28],0); // 801B7E7C
  if (crb(c,0)) { goto L_801B7E8C; } // 801B7E80
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801B7E84
  if (!crb(c,2)) { goto L_801B7E90; } // 801B7E88
L_801B7E8C:;
  c->r[29]=c->r[29]+0x00000001u; // 801B7E8C
L_801B7E90:;
  c->r[30]=c->r[30]+0x00000001u; // 801B7E90
  c->r[31]=c->r[31]+0x00000F48u; // 801B7E94
  cmps(c,0,(int32_t)c->r[30],32); // 801B7E98
  if (crb(c,0)) { IRQCHK(c); goto L_801B7E60; } // 801B7E9C
  c->r[3]=c->r[29]|c->r[29]; // 801B7EA0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B7EA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7EA8
  c->lr=c->r[0]; // 801B7EAC
  c->r[1]=c->r[1]+0x00000020u; // 801B7EB0
  return; // 801B7EB4
}

// fn_801B7EB8
void f_801B7EB8(Ctx* __restrict c) {
  trace_call(0x801B7EB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7EB8
  c->r[0]=c->lr; // 801B7EBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7EC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B7EC4
  c->r[31]=c->r[3]|c->r[3]; // 801B7EC8
  c->lr=0x801B7ED0u; f_80113CA4(c); // 801B7ECC
  c->r[3]=c->r[31]+0x00007078u; // 801B7ED0
  c->lr=0x801B7ED8u; f_801B7B58(c); // 801B7ED4
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B7ED8
  c->r[4]=0u+0x0000000Au; // 801B7EDC
  c->lr=0x801B7EE4u; f_80104458(c); // 801B7EE0
  c->r[3]=c->r[31]+0x00004014u; // 801B7EE4
  c->lr=0x801B7EECu; f_801DBCBC(c); // 801B7EE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7EEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7EF0
  c->lr=c->r[0]; // 801B7EF4
  c->r[1]=c->r[1]+0x00000010u; // 801B7EF8
  return; // 801B7EFC
}

// fn_801B7F00
void f_801B7F00(Ctx* __restrict c) {
  trace_call(0x801B7F00u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7F00
  c->r[0]=c->lr; // 801B7F04
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B7F08
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B7F0C
  c->r[26]=c->r[3]|c->r[3]; // 801B7F10
  c->r[27]=c->r[4]|c->r[4]; // 801B7F14
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B7F18
  cmps(c,0,(int32_t)c->r[0],0); // 801B7F1C
  if (crb(c,2)) { goto L_801B80B8; } // 801B7F20
  c->lr=0x801B7F28u; f_8003DA30(c); // 801B7F24
  c->lr=0x801B7F2Cu; f_8003ED58(c); // 801B7F28
  c->r[31]=c->r[3]|c->r[3]; // 801B7F2C
  goto L_801B7FC0; // 801B7F30
L_801B7F34:;
  W32(c->r[1]+0x00000010u,c->r[31]); // 801B7F34
  c->r[3]=c->r[1]+0x00000010u; // 801B7F38
  c->r[4]=0u+0x00000000u; // 801B7F3C
  c->lr=0x801B7F44u; f_8003ED68(c); // 801B7F40
  c->r[28]=c->r[31]+0xFFFFFFF8u; // 801B7F44
  c->r[12]=R32(c->r[28]+0x00000010u); // 801B7F48
  c->r[3]=c->r[28]|c->r[28]; // 801B7F4C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B7F50
  c->ctr=c->r[12]; // 801B7F54
  if (true) { c->lr=0x801B7F5Cu; dispatch(c,c->ctr); } // 801B7F58
  W32(c->r[1]+0x00000020u,c->r[4]); // 801B7F5C
  c->r[4]=0u+0xC0000000u; // 801B7F60
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801B7F64
  c->r[3]=c->r[1]+0x0000001Cu; // 801B7F68
  c->lr=0x801B7F70u; f_8003EDD0(c); // 801B7F6C
  cmps(c,0,(int32_t)c->r[3],0); // 801B7F70
  if (crb(c,2)) { goto L_801B7FBC; } // 801B7F74
  c->r[12]=R32(c->r[28]+0x00000010u); // 801B7F78
  c->r[3]=c->r[28]|c->r[28]; // 801B7F7C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B7F80
  c->ctr=c->r[12]; // 801B7F84
  if (true) { c->lr=0x801B7F8Cu; dispatch(c,c->ctr); } // 801B7F88
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B7F8C
  W32(c->r[1]+0x00000018u,c->r[4]); // 801B7F90
  W32(c->r[1]+0x00000014u,c->r[3]); // 801B7F94
  if (crb(c,2)) { goto L_801B7FBC; } // 801B7F98
  c->r[4]=c->r[27]|c->r[27]; // 801B7F9C
  c->r[3]=c->r[28]+0x000004ACu; // 801B7FA0
  c->lr=0x801B7FA8u; f_80293554(c); // 801B7FA4
  cmps(c,0,(int32_t)c->r[3],0); // 801B7FA8
  if (!crb(c,2)) { goto L_801B7FBC; } // 801B7FAC
  c->lr=0x801B7FB4u; f_8003DA30(c); // 801B7FB0
  c->r[4]=c->r[28]|c->r[28]; // 801B7FB4
  c->lr=0x801B7FBCu; f_8003DECC(c); // 801B7FB8
L_801B7FBC:;
  c->r[31]=R32(c->r[1]+0x00000010u); // 801B7FBC
L_801B7FC0:;
  c->lr=0x801B7FC4u; f_8003DA30(c); // 801B7FC0
  c->lr=0x801B7FC8u; f_8003ECFC(c); // 801B7FC4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B7FC8
  c->r[3]=c->r[1]+0x0000000Cu; // 801B7FCC
  c->r[4]=c->r[1]+0x00000008u; // 801B7FD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B7FD4
  c->lr=0x801B7FDCu; f_8003ED7C(c); // 801B7FD8
  cmps(c,0,(int32_t)c->r[3],0); // 801B7FDC
  if (!crb(c,2)) { IRQCHK(c); goto L_801B7F34; } // 801B7FE0
  c->r[29]=0u+0x00000000u; // 801B7FE4
  c->r[31]=0u+0x00000000u; // 801B7FE8
  c->r[30]=0u+0x00000000u; // 801B7FEC
L_801B7FF0:;
  c->r[28]=c->r[26]+c->r[31]; // 801B7FF0
  c->r[0]=R8(c->r[28]+0x00007078u); // 801B7FF4
  cmps(c,0,(int32_t)c->r[0],0); // 801B7FF8
  if (crb(c,2)) { goto L_801B8020; } // 801B7FFC
  c->r[3]=c->r[28]+0x0000707Cu; // 801B8000
  c->r[4]=0u+0x00000003u; // 801B8004
  c->lr=0x801B800Cu; f_801B9640(c); // 801B8008
  c->r[4]=c->r[27]|c->r[27]; // 801B800C
  c->lr=0x801B8014u; f_80293554(c); // 801B8010
  cmps(c,0,(int32_t)c->r[3],0); // 801B8014
  if (!crb(c,2)) { goto L_801B8020; } // 801B8018
  W8(c->r[28]+0x00007078u,c->r[30]); // 801B801C
L_801B8020:;
  c->r[29]=c->r[29]+0x00000001u; // 801B8020
  c->r[31]=c->r[31]+0x00000F48u; // 801B8024
  cmps(c,0,(int32_t)c->r[29],32); // 801B8028
  if (crb(c,0)) { IRQCHK(c); goto L_801B7FF0; } // 801B802C
  c->r[3]=c->r[26]+0x00007078u; // 801B8030
  c->lr=0x801B8038u; f_801B7C08(c); // 801B8034
  c->r[4]=c->r[27]|c->r[27]; // 801B8038
  c->r[3]=c->r[26]+0x00004014u; // 801B803C
  c->lr=0x801B8044u; f_801DC114(c); // 801B8040
  c->r[28]=c->r[3]|c->r[3]; // 801B8044
  c->r[31]=0u+0x80490000u; // 801B8048
  goto L_801B8098; // 801B804C
L_801B8050:;
  c->r[3]=c->r[28]|c->r[28]; // 801B8050
  c->r[4]=c->r[13]+0xFFFF87DAu; // 801B8054
  c->r[5]=0u+0x00000005u; // 801B8058
  c->lr=0x801B8060u; f_80293670(c); // 801B805C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8060
  if (!crb(c,2)) { goto L_801B8080; } // 801B8064
  c->r[3]=c->r[28]+0x00000005u; // 801B8068
  c->lr=0x801B8070u; f_80295EAC(c); // 801B806C
  c->r[4]=c->r[3]|c->r[3]; // 801B8070
  c->r[3]=c->r[31]+0xFFFFEA84u; // 801B8074
  c->lr=0x801B807Cu; f_80103498(c); // 801B8078
  goto L_801B808C; // 801B807C
L_801B8080:;
  c->r[4]=c->r[28]|c->r[28]; // 801B8080
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8084
  c->lr=0x801B808Cu; f_801043FC(c); // 801B8088
L_801B808C:;
  c->r[3]=c->r[26]+0x00004014u; // 801B808C
  c->lr=0x801B8094u; f_801DC1A4(c); // 801B8090
  c->r[28]=c->r[3]|c->r[3]; // 801B8094
L_801B8098:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B8098
  if (!crb(c,2)) { IRQCHK(c); goto L_801B8050; } // 801B809C
  c->r[3]=c->r[26]+0x00004014u; // 801B80A0
  c->lr=0x801B80A8u; f_801DC1CC(c); // 801B80A4
  c->r[4]=c->r[27]|c->r[27]; // 801B80A8
  c->r[3]=c->r[26]+0x00004014u; // 801B80AC
  c->r[5]=0u+0x00000000u; // 801B80B0
  c->lr=0x801B80B8u; f_801DBEDC(c); // 801B80B4
L_801B80B8:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B80B8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B80BC
  c->lr=c->r[0]; // 801B80C0
  c->r[1]=c->r[1]+0x00000040u; // 801B80C4
  return; // 801B80C8
}

// fn_801B80CC
void f_801B80CC(Ctx* __restrict c) {
  trace_call(0x801B80CCu);
  {uint32_t ea=c->r[1]+0xFFFFCE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B80CC
  c->r[0]=c->lr; // 801B80D0
  W32(c->r[1]+0x000031C4u,c->r[0]); // 801B80D4
  {uint32_t ea=c->r[1]+0x000031A0u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B80D8
  c->r[29]=c->r[3]|c->r[3]; // 801B80DC
  c->r[30]=c->r[4]|c->r[4]; // 801B80E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B80E4
  cmps(c,0,(int32_t)c->r[0],0); // 801B80E8
  if (crb(c,2)) { goto L_801B8518; } // 801B80EC
  c->r[3]=c->r[1]+0x00000058u; // 801B80F0
  c->lr=0x801B80F8u; f_802933D8(c); // 801B80F4
  c->r[3]=c->r[1]+0x00000058u; // 801B80F8
  c->r[4]=0u+0x0000005Fu; // 801B80FC
  c->lr=0x801B8104u; f_802936B0(c); // 801B8100
  cmps(c,0,(int32_t)c->r[3],0); // 801B8104
  if (crb(c,2)) { goto L_801B8114; } // 801B8108
  c->r[0]=0u+0x00000000u; // 801B810C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B8110
L_801B8114:;
  c->r[25]=0u+0x00000000u; // 801B8114
  c->r[28]=0u+0x00000000u; // 801B8118
  c->r[26]=0u+0x00000000u; // 801B811C
  goto L_801B81AC; // 801B8120
L_801B8124:;
  c->r[5]=c->r[26]|c->r[26]; // 801B8124
  c->r[3]=c->r[1]+0x00000034u; // 801B8128
  c->r[4]=c->r[29]+0x00000008u; // 801B812C
  c->lr=0x801B8134u; f_80173034(c); // 801B8130
  c->r[3]=c->r[1]+0x00000040u; // 801B8134
  c->lr=0x801B813Cu; f_801732D0(c); // 801B8138
  c->r[3]=c->r[1]+0x0000004Cu; // 801B813C
  c->r[4]=c->r[1]+0x00000040u; // 801B8140
  c->r[5]=c->r[1]+0x00000034u; // 801B8144
  c->lr=0x801B814Cu; f_801732E4(c); // 801B8148
  c->r[3]=c->r[1]+0x00000040u; // 801B814C
  c->r[4]=0u+0x00000003u; // 801B8150
  c->lr=0x801B8158u; f_801B9640(c); // 801B8154
  c->r[4]=c->r[30]|c->r[30]; // 801B8158
  c->lr=0x801B8160u; f_80293554(c); // 801B815C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8160
  if (!crb(c,2)) { goto L_801B81A8; } // 801B8164
  c->r[3]=c->r[1]+0x00000040u; // 801B8168
  c->r[4]=0u+0x00000004u; // 801B816C
  c->lr=0x801B8174u; f_801B9640(c); // 801B8170
  c->r[27]=c->r[3]|c->r[3]; // 801B8174
  c->r[3]=c->r[1]+0x00000040u; // 801B8178
  c->r[4]=0u+0x00000000u; // 801B817C
  c->lr=0x801B8184u; f_801B9640(c); // 801B8180
  c->r[5]=c->r[3]|c->r[3]; // 801B8184
  c->r[3]=c->r[1]+0x00000998u; // 801B8188
  c->r[6]=c->r[27]|c->r[27]; // 801B818C
  c->r[4]=c->r[13]+0xFFFF879Bu; // 801B8190
  c->r[3]=c->r[3]+c->r[28]; // 801B8194
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8198
  c->lr=0x801B81A0u; f_80291CC4(c); // 801B819C
  c->r[25]=c->r[25]+0x00000001u; // 801B81A0
  c->r[28]=c->r[28]+0x00000020u; // 801B81A4
L_801B81A8:;
  c->r[26]=c->r[26]+0x00000001u; // 801B81A8
L_801B81AC:;
  c->r[3]=c->r[29]+0x00000008u; // 801B81AC
  c->lr=0x801B81B4u; f_80173018(c); // 801B81B0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 801B81B4
  if (crb(c,0)) { IRQCHK(c); goto L_801B8124; } // 801B81B8
  cmps(c,0,(int32_t)c->r[25],0); // 801B81BC
  if (crb(c,1)) { goto L_801B81CC; } // 801B81C0
  c->r[26]=0u+0x00000000u; // 801B81C4
  goto L_801B8254; // 801B81C8
L_801B81CC:;
  c->r[6]=0u+0x801C0000u; // 801B81CC
  c->r[5]=c->r[25]|c->r[25]; // 801B81D0
  c->r[3]=c->r[1]+0x00000998u; // 801B81D4
  c->r[4]=0u+0x00000020u; // 801B81D8
  c->r[6]=c->r[6]+0xFFFF852Cu; // 801B81DC
  c->lr=0x801B81E4u; f_80136718(c); // 801B81E0
  c->r[3]=c->r[1]+0x00002998u; // 801B81E4
  c->r[4]=c->r[1]+0x00000998u; // 801B81E8
  c->r[26]=0u+0x00000001u; // 801B81EC
  c->r[28]=0u+0x00000020u; // 801B81F0
  c->lr=0x801B81F8u; f_802933D8(c); // 801B81F4
  c->r[27]=0u+0x00000001u; // 801B81F8
  c->r[31]=0u+0x00000020u; // 801B81FC
  goto L_801B824C; // 801B8200
L_801B8204:;
  c->r[24]=c->r[1]+0x00000998u; // 801B8204
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 801B8208
  c->r[24]=c->r[24]+c->r[31]; // 801B820C
  c->r[3]=c->r[1]+0x00000998u; // 801B8210
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B8214
  c->r[4]=c->r[24]|c->r[24]; // 801B8218
  c->r[3]=c->r[3]+c->r[0]; // 801B821C
  c->lr=0x801B8224u; f_80293554(c); // 801B8220
  cmps(c,0,(int32_t)c->r[3],0); // 801B8224
  if (crb(c,2)) { goto L_801B8244; } // 801B8228
  c->r[3]=c->r[1]+0x00002998u; // 801B822C
  c->r[4]=c->r[24]|c->r[24]; // 801B8230
  c->r[3]=c->r[3]+c->r[28]; // 801B8234
  c->r[26]=c->r[26]+0x00000001u; // 801B8238
  c->r[28]=c->r[28]+0x00000020u; // 801B823C
  c->lr=0x801B8244u; f_802933D8(c); // 801B8240
L_801B8244:;
  c->r[27]=c->r[27]+0x00000001u; // 801B8244
  c->r[31]=c->r[31]+0x00000020u; // 801B8248
L_801B824C:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[25]); // 801B824C
  if (crb(c,0)) { IRQCHK(c); goto L_801B8204; } // 801B8250
L_801B8254:;
  c->r[24]=0u+0x00000000u; // 801B8254
  c->r[28]=0u+0x00000000u; // 801B8258
  goto L_801B82B8; // 801B825C
L_801B8260:;
  c->r[4]=c->r[1]+0x00002998u; // 801B8260
  c->r[3]=c->r[1]+0x00000008u; // 801B8264
  c->r[4]=c->r[4]+c->r[28]; // 801B8268
  c->lr=0x801B8270u; f_802561E0(c); // 801B826C
  c->r[3]=c->r[1]+0x00000008u; // 801B8270
  c->r[4]=c->r[13]+0xFFFF87D8u; // 801B8274
  c->lr=0x801B827Cu; f_802561F4(c); // 801B8278
  c->r[25]=c->r[3]|c->r[3]; // 801B827C
  c->r[3]=c->r[1]+0x00000008u; // 801B8280
  c->r[4]=c->r[13]+0xFFFF87D6u; // 801B8284
  c->lr=0x801B828Cu; f_802561F4(c); // 801B8288
  c->r[12]=R32(c->r[29]+0x00000000u); // 801B828C
  c->r[5]=c->r[3]|c->r[3]; // 801B8290
  c->r[3]=c->r[29]|c->r[29]; // 801B8294
  c->r[4]=c->r[25]|c->r[25]; // 801B8298
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801B829C
  c->r[6]=c->r[1]+0x00000058u; // 801B82A0
  c->r[7]=0u+0x00000000u; // 801B82A4
  c->ctr=c->r[12]; // 801B82A8
  if (true) { c->lr=0x801B82B0u; dispatch(c,c->ctr); } // 801B82AC
  c->r[24]=c->r[24]+0x00000001u; // 801B82B0
  c->r[28]=c->r[28]+0x00000020u; // 801B82B4
L_801B82B8:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[26]); // 801B82B8
  if (crb(c,0)) { IRQCHK(c); goto L_801B8260; } // 801B82BC
  c->r[31]=0u+0x00000000u; // 801B82C0
  c->r[28]=0u+0x00000000u; // 801B82C4
  c->r[26]=0u+0x00000000u; // 801B82C8
  goto L_801B8418; // 801B82CC
L_801B82D0:;
  c->r[5]=c->r[26]|c->r[26]; // 801B82D0
  c->r[3]=c->r[1]+0x00000010u; // 801B82D4
  c->r[4]=c->r[29]+0x00000008u; // 801B82D8
  c->lr=0x801B82E0u; f_80173034(c); // 801B82DC
  c->r[3]=c->r[1]+0x0000001Cu; // 801B82E0
  c->lr=0x801B82E8u; f_801732D0(c); // 801B82E4
  c->r[3]=c->r[1]+0x00000028u; // 801B82E8
  c->r[4]=c->r[1]+0x0000001Cu; // 801B82EC
  c->r[5]=c->r[1]+0x00000010u; // 801B82F0
  c->lr=0x801B82F8u; f_801732E4(c); // 801B82F4
  c->r[3]=c->r[1]+0x0000001Cu; // 801B82F8
  c->r[4]=0u+0x00000003u; // 801B82FC
  c->lr=0x801B8304u; f_801B9640(c); // 801B8300
  c->r[4]=c->r[30]|c->r[30]; // 801B8304
  c->lr=0x801B830Cu; f_80293554(c); // 801B8308
  cmps(c,0,(int32_t)c->r[3],0); // 801B830C
  if (!crb(c,2)) { goto L_801B8414; } // 801B8310
  c->r[3]=c->r[1]+0x0000001Cu; // 801B8314
  c->r[4]=0u+0x00000004u; // 801B8318
  c->lr=0x801B8320u; f_801B9640(c); // 801B831C
  c->r[27]=c->r[3]|c->r[3]; // 801B8320
  c->r[3]=c->r[1]+0x0000001Cu; // 801B8324
  c->r[4]=0u+0x00000000u; // 801B8328
  c->lr=0x801B8330u; f_801B9640(c); // 801B832C
  c->r[4]=c->r[27]|c->r[27]; // 801B8330
  c->lr=0x801B8338u; f_801B251C(c); // 801B8334
  cmps(c,0,(int32_t)c->r[3],0); // 801B8338
  c->r[27]=c->r[3]|c->r[3]; // 801B833C
  if (crb(c,2)) { goto L_801B83A8; } // 801B8340
  c->r[4]=R32(c->r[3]+0x00000028u); // 801B8344
  cmps(c,0,(int32_t)c->r[4],0); // 801B8348
  if (!crb(c,1)) { goto L_801B83A8; } // 801B834C
  c->r[3]=c->r[1]+0x0000001Cu; // 801B8350
  c->lr=0x801B8358u; f_801B9640(c); // 801B8354
  c->r[25]=c->r[3]|c->r[3]; // 801B8358
  c->lr=0x801B8360u; f_802894C0(c); // 801B835C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8360
  if (crb(c,2)) { goto L_801B83A8; } // 801B8364
  c->r[4]=R32(c->r[27]+0x00000028u); // 801B8368
  c->r[3]=c->r[1]+0x0000001Cu; // 801B836C
  c->lr=0x801B8374u; f_801B9640(c); // 801B8370
  c->r[4]=c->r[3]|c->r[3]; // 801B8374
  c->r[3]=c->r[1]+0x00000198u; // 801B8378
  c->r[3]=c->r[3]+c->r[28]; // 801B837C
  c->lr=0x801B8384u; f_802933D8(c); // 801B8380
  c->r[0]=c->r[31]+0x00000001u; // 801B8384
  c->r[3]=c->r[1]+0x00000198u; // 801B8388
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B838C
  c->r[4]=c->r[25]|c->r[25]; // 801B8390
  c->r[3]=c->r[3]+c->r[0]; // 801B8394
  c->r[5]=c->r[13]+0xFFFF87A6u; // 801B8398
  c->lr=0x801B83A0u; f_801B87E4(c); // 801B839C
  c->r[31]=c->r[31]+0x00000002u; // 801B83A0
  c->r[28]=c->r[28]+0x00000040u; // 801B83A4
L_801B83A8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B83A8
  if (crb(c,2)) { goto L_801B8414; } // 801B83AC
  c->r[4]=R32(c->r[27]+0x0000002Cu); // 801B83B0
  cmps(c,0,(int32_t)c->r[4],0); // 801B83B4
  if (!crb(c,1)) { goto L_801B8414; } // 801B83B8
  c->r[3]=c->r[1]+0x0000001Cu; // 801B83BC
  c->lr=0x801B83C4u; f_801B9640(c); // 801B83C0
  c->r[25]=c->r[3]|c->r[3]; // 801B83C4
  c->lr=0x801B83CCu; f_802894C0(c); // 801B83C8
  cmps(c,0,(int32_t)c->r[3],0); // 801B83CC
  if (crb(c,2)) { goto L_801B8414; } // 801B83D0
  c->r[4]=R32(c->r[27]+0x0000002Cu); // 801B83D4
  c->r[3]=c->r[1]+0x0000001Cu; // 801B83D8
  c->lr=0x801B83E0u; f_801B9640(c); // 801B83DC
  c->r[4]=c->r[3]|c->r[3]; // 801B83E0
  c->r[3]=c->r[1]+0x00000198u; // 801B83E4
  c->r[3]=c->r[3]+c->r[28]; // 801B83E8
  c->lr=0x801B83F0u; f_802933D8(c); // 801B83EC
  c->r[0]=c->r[31]+0x00000001u; // 801B83F0
  c->r[3]=c->r[1]+0x00000198u; // 801B83F4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B83F8
  c->r[4]=c->r[25]|c->r[25]; // 801B83FC
  c->r[3]=c->r[3]+c->r[0]; // 801B8400
  c->r[5]=c->r[13]+0xFFFF87A1u; // 801B8404
  c->lr=0x801B840Cu; f_801B87E4(c); // 801B8408
  c->r[31]=c->r[31]+0x00000002u; // 801B840C
  c->r[28]=c->r[28]+0x00000040u; // 801B8410
L_801B8414:;
  c->r[26]=c->r[26]+0x00000001u; // 801B8414
L_801B8418:;
  c->r[3]=c->r[29]+0x00000008u; // 801B8418
  c->lr=0x801B8420u; f_80173018(c); // 801B841C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 801B8420
  if (crb(c,0)) { IRQCHK(c); goto L_801B82D0; } // 801B8424
  cmps(c,0,(int32_t)c->r[31],0); // 801B8428
  if (crb(c,1)) { goto L_801B8438; } // 801B842C
  c->r[26]=0u+0x00000000u; // 801B8430
  goto L_801B84C0; // 801B8434
L_801B8438:;
  c->r[6]=0u+0x801C0000u; // 801B8438
  c->r[5]=c->r[31]|c->r[31]; // 801B843C
  c->r[3]=c->r[1]+0x00000198u; // 801B8440
  c->r[4]=0u+0x00000020u; // 801B8444
  c->r[6]=c->r[6]+0xFFFF852Cu; // 801B8448
  c->lr=0x801B8450u; f_80136718(c); // 801B844C
  c->r[3]=c->r[1]+0x00002998u; // 801B8450
  c->r[4]=c->r[1]+0x00000198u; // 801B8454
  c->r[26]=0u+0x00000001u; // 801B8458
  c->r[30]=0u+0x00000020u; // 801B845C
  c->lr=0x801B8464u; f_802933D8(c); // 801B8460
  c->r[25]=0u+0x00000001u; // 801B8464
  c->r[28]=0u+0x00000020u; // 801B8468
  goto L_801B84B8; // 801B846C
L_801B8470:;
  c->r[24]=c->r[1]+0x00000198u; // 801B8470
  c->r[0]=c->r[25]+0xFFFFFFFFu; // 801B8474
  c->r[24]=c->r[24]+c->r[28]; // 801B8478
  c->r[3]=c->r[1]+0x00000198u; // 801B847C
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B8480
  c->r[4]=c->r[24]|c->r[24]; // 801B8484
  c->r[3]=c->r[3]+c->r[0]; // 801B8488
  c->lr=0x801B8490u; f_80293554(c); // 801B848C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8490
  if (crb(c,2)) { goto L_801B84B0; } // 801B8494
  c->r[3]=c->r[1]+0x00002998u; // 801B8498
  c->r[4]=c->r[24]|c->r[24]; // 801B849C
  c->r[3]=c->r[3]+c->r[30]; // 801B84A0
  c->r[26]=c->r[26]+0x00000001u; // 801B84A4
  c->r[30]=c->r[30]+0x00000020u; // 801B84A8
  c->lr=0x801B84B0u; f_802933D8(c); // 801B84AC
L_801B84B0:;
  c->r[25]=c->r[25]+0x00000001u; // 801B84B0
  c->r[28]=c->r[28]+0x00000020u; // 801B84B4
L_801B84B8:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[31]); // 801B84B8
  if (crb(c,0)) { IRQCHK(c); goto L_801B8470; } // 801B84BC
L_801B84C0:;
  c->r[24]=0u+0x00000000u; // 801B84C0
  c->r[30]=0u+0x00000000u; // 801B84C4
  c->r[28]=0u+0x80400000u; // 801B84C8
  goto L_801B8510; // 801B84CC
L_801B84D0:;
  c->r[5]=c->r[1]+0x00002998u; // 801B84D0
  c->r[3]=c->r[1]+0x00000098u; // 801B84D4
  c->r[4]=c->r[28]+0x00001A7Eu; // 801B84D8
  c->r[5]=c->r[5]+c->r[30]; // 801B84DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B84E0
  c->lr=0x801B84E8u; f_80291CC4(c); // 801B84E4
  c->r[4]=c->r[1]+0x00000098u; // 801B84E8
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B84EC
  c->r[5]=0u+0x0000000Au; // 801B84F0
  c->lr=0x801B84F8u; f_801043D0(c); // 801B84F4
  c->r[3]=c->r[29]+0x00004014u; // 801B84F8
  c->r[4]=c->r[1]+0x00000058u; // 801B84FC
  c->r[5]=c->r[1]+0x00000098u; // 801B8500
  c->lr=0x801B8508u; f_801DBD04(c); // 801B8504
  c->r[24]=c->r[24]+0x00000001u; // 801B8508
  c->r[30]=c->r[30]+0x00000020u; // 801B850C
L_801B8510:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[26]); // 801B8510
  if (crb(c,0)) { IRQCHK(c); goto L_801B84D0; } // 801B8514
L_801B8518:;
  {uint32_t ea=c->r[1]+0x000031A0u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B8518
  c->r[0]=R32(c->r[1]+0x000031C4u); // 801B851C
  c->lr=c->r[0]; // 801B8520
  c->r[1]=c->r[1]+0x000031C0u; // 801B8524
  return; // 801B8528
}

// fn_801B852C
void f_801B852C(Ctx* __restrict c) {
  trace_call(0x801B852Cu);
  f_80293554(c); return; // 801B852C
}

// fn_801B8530
void f_801B8530(Ctx* __restrict c) {
  trace_call(0x801B8530u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8530
  c->r[0]=c->lr; // 801B8534
  W32(c->r[1]+0x00000144u,c->r[0]); // 801B8538
  {uint32_t ea=c->r[1]+0x00000124u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B853C
  c->r[25]=c->r[3]|c->r[3]; // 801B8540
  c->r[28]=c->r[7]|c->r[7]; // 801B8544
  c->r[29]=c->r[4]|c->r[4]; // 801B8548
  c->r[26]=c->r[5]|c->r[5]; // 801B854C
  c->r[27]=c->r[6]|c->r[6]; // 801B8550
  c->r[4]=c->r[28]|c->r[28]; // 801B8554
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8558
  c->lr=0x801B8560u; f_801044A8(c); // 801B855C
  c->r[3]=c->r[29]|c->r[29]; // 801B8560
  c->r[4]=c->r[26]|c->r[26]; // 801B8564
  c->lr=0x801B856Cu; f_801B251C(c); // 801B8568
  cmps(c,0,(int32_t)c->r[3],0); // 801B856C
  c->r[31]=c->r[3]|c->r[3]; // 801B8570
  if (crb(c,2)) { goto L_801B8744; } // 801B8574
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B8578
  cmps(c,0,(int32_t)c->r[5],0); // 801B857C
  if (crb(c,2)) { goto L_801B859C; } // 801B8580
  c->r[4]=0u+0x80400000u; // 801B8584
  c->r[3]=c->r[1]+0x00000020u; // 801B8588
  c->r[4]=c->r[4]+0x00001A12u; // 801B858C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8590
  c->lr=0x801B8598u; f_80291CC4(c); // 801B8594
  goto L_801B85B4; // 801B8598
L_801B859C:;
  c->r[4]=0u+0x80400000u; // 801B859C
  c->r[5]=c->r[26]|c->r[26]; // 801B85A0
  c->r[3]=c->r[1]+0x00000020u; // 801B85A4
  c->r[4]=c->r[4]+0x00001A00u; // 801B85A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B85AC
  c->lr=0x801B85B4u; f_80291CC4(c); // 801B85B0
L_801B85B4:;
  c->r[4]=c->r[1]+0x00000020u; // 801B85B4
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B85B8
  c->r[5]=0u+0x0000000Au; // 801B85BC
  c->lr=0x801B85C4u; f_801043D0(c); // 801B85C0
  cmps(c,0,(int32_t)c->r[27],0); // 801B85C4
  if (crb(c,2)) { goto L_801B85DC; } // 801B85C8
  c->r[4]=c->r[27]|c->r[27]; // 801B85CC
  c->r[3]=c->r[25]+0x00004014u; // 801B85D0
  c->r[5]=c->r[1]+0x00000020u; // 801B85D4
  c->lr=0x801B85DCu; f_801DBD04(c); // 801B85D8
L_801B85DC:;
  c->r[5]=R32(c->r[31]+0x00000018u); // 801B85DC
  cmps(c,0,(int32_t)c->r[5],0); // 801B85E0
  if (crb(c,2)) { goto L_801B8624; } // 801B85E4
  c->r[4]=0u+0x80400000u; // 801B85E8
  c->r[3]=c->r[1]+0x00000020u; // 801B85EC
  c->r[4]=c->r[4]+0x000019EEu; // 801B85F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B85F4
  c->lr=0x801B85FCu; f_80291CC4(c); // 801B85F8
  c->r[4]=c->r[1]+0x00000020u; // 801B85FC
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8600
  c->r[5]=0u+0x0000000Au; // 801B8604
  c->lr=0x801B860Cu; f_801043D0(c); // 801B8608
  cmps(c,0,(int32_t)c->r[27],0); // 801B860C
  if (crb(c,2)) { goto L_801B8624; } // 801B8610
  c->r[4]=c->r[27]|c->r[27]; // 801B8614
  c->r[3]=c->r[25]+0x00004014u; // 801B8618
  c->r[5]=c->r[1]+0x00000020u; // 801B861C
  c->lr=0x801B8624u; f_801DBD04(c); // 801B8620
L_801B8624:;
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 801B8624
  cmps(c,0,(int32_t)c->r[5],0); // 801B8628
  if (crb(c,2)) { goto L_801B866C; } // 801B862C
  c->r[4]=0u+0x80400000u; // 801B8630
  c->r[3]=c->r[1]+0x00000020u; // 801B8634
  c->r[4]=c->r[4]+0x000019DCu; // 801B8638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B863C
  c->lr=0x801B8644u; f_80291CC4(c); // 801B8640
  c->r[4]=c->r[1]+0x00000020u; // 801B8644
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8648
  c->r[5]=0u+0x0000000Au; // 801B864C
  c->lr=0x801B8654u; f_801043D0(c); // 801B8650
  cmps(c,0,(int32_t)c->r[27],0); // 801B8654
  if (crb(c,2)) { goto L_801B866C; } // 801B8658
  c->r[4]=c->r[27]|c->r[27]; // 801B865C
  c->r[3]=c->r[25]+0x00004014u; // 801B8660
  c->r[5]=c->r[1]+0x00000020u; // 801B8664
  c->lr=0x801B866Cu; f_801DBD04(c); // 801B8668
L_801B866C:;
  c->r[5]=R32(c->r[31]+0x00000020u); // 801B866C
  cmps(c,0,(int32_t)c->r[5],0); // 801B8670
  if (crb(c,2)) { goto L_801B86B4; } // 801B8674
  c->r[4]=0u+0x80400000u; // 801B8678
  c->r[3]=c->r[1]+0x00000020u; // 801B867C
  c->r[4]=c->r[4]+0x000019CAu; // 801B8680
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8684
  c->lr=0x801B868Cu; f_80291CC4(c); // 801B8688
  c->r[4]=c->r[1]+0x00000020u; // 801B868C
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8690
  c->r[5]=0u+0x0000000Au; // 801B8694
  c->lr=0x801B869Cu; f_801043D0(c); // 801B8698
  cmps(c,0,(int32_t)c->r[27],0); // 801B869C
  if (crb(c,2)) { goto L_801B86B4; } // 801B86A0
  c->r[4]=c->r[27]|c->r[27]; // 801B86A4
  c->r[3]=c->r[25]+0x00004014u; // 801B86A8
  c->r[5]=c->r[1]+0x00000020u; // 801B86AC
  c->lr=0x801B86B4u; f_801DBD04(c); // 801B86B0
L_801B86B4:;
  c->r[5]=R32(c->r[31]+0x00000024u); // 801B86B4
  cmps(c,0,(int32_t)c->r[5],0); // 801B86B8
  if (crb(c,2)) { goto L_801B86FC; } // 801B86BC
  c->r[4]=0u+0x80400000u; // 801B86C0
  c->r[3]=c->r[1]+0x00000020u; // 801B86C4
  c->r[4]=c->r[4]+0x000019B8u; // 801B86C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B86CC
  c->lr=0x801B86D4u; f_80291CC4(c); // 801B86D0
  c->r[4]=c->r[1]+0x00000020u; // 801B86D4
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B86D8
  c->r[5]=0u+0x0000000Au; // 801B86DC
  c->lr=0x801B86E4u; f_801043D0(c); // 801B86E0
  cmps(c,0,(int32_t)c->r[27],0); // 801B86E4
  if (crb(c,2)) { goto L_801B86FC; } // 801B86E8
  c->r[4]=c->r[27]|c->r[27]; // 801B86EC
  c->r[3]=c->r[25]+0x00004014u; // 801B86F0
  c->r[5]=c->r[1]+0x00000020u; // 801B86F4
  c->lr=0x801B86FCu; f_801DBD04(c); // 801B86F8
L_801B86FC:;
  c->r[4]=R32(c->r[31]+0x00000034u); // 801B86FC
  cmps(c,0,(int32_t)c->r[4],0); // 801B8700
  if (crb(c,0)) { goto L_801B8744; } // 801B8704
  c->r[3]=0u+0x80490000u; // 801B8708
  c->r[5]=0u+0x00000001u; // 801B870C
  c->r[3]=c->r[3]+0xFFFFEA84u; // 801B8710
  c->lr=0x801B8718u; f_80102B0C(c); // 801B8714
  c->r[5]=R32(c->r[31]+0x00000034u); // 801B8718
  c->r[3]=c->r[1]+0x00000020u; // 801B871C
  c->r[4]=c->r[13]+0xFFFF87ABu; // 801B8720
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8724
  c->lr=0x801B872Cu; f_80291CC4(c); // 801B8728
  cmps(c,0,(int32_t)c->r[27],0); // 801B872C
  if (crb(c,2)) { goto L_801B8744; } // 801B8730
  c->r[4]=c->r[27]|c->r[27]; // 801B8734
  c->r[3]=c->r[25]+0x00004014u; // 801B8738
  c->r[5]=c->r[1]+0x00000020u; // 801B873C
  c->lr=0x801B8744u; f_801DBD04(c); // 801B8740
L_801B8744:;
  c->r[3]=0u+0x803E0000u; // 801B8744
  c->r[0]=0u+0x00000003u; // 801B8748
  c->r[3]=c->r[3]+0x000005C4u; // 801B874C
  c->r[5]=c->r[1]+0x00000004u; // 801B8750
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 801B8754
  c->ctr=c->r[0]; // 801B8758
L_801B875C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801B875C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B8760
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B8764
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801B8768
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B875C; } // 801B876C
  c->r[29]=0u+0x00000000u; // 801B8770
  c->r[31]=0u+0x00000000u; // 801B8774
L_801B8778:;
  c->r[30]=c->r[1]+0x00000008u; // 801B8778
  {uint32_t ea=c->r[30]+c->r[31]; c->r[3]=R32(ea); c->r[30]=ea;} // 801B877C
  c->r[4]=c->r[26]|c->r[26]; // 801B8780
  c->lr=0x801B8788u; f_80293554(c); // 801B8784
  cmps(c,0,(int32_t)c->r[3],0); // 801B8788
  if (!crb(c,2)) { goto L_801B87B4; } // 801B878C
  c->r[12]=R32(c->r[25]+0x00000000u); // 801B8790
  c->r[3]=c->r[25]|c->r[25]; // 801B8794
  c->r[6]=c->r[27]|c->r[27]; // 801B8798
  c->r[7]=c->r[28]|c->r[28]; // 801B879C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801B87A0
  c->r[4]=R32(c->r[30]+0x00000004u); // 801B87A4
  c->r[5]=R32(c->r[30]+0x00000008u); // 801B87A8
  c->ctr=c->r[12]; // 801B87AC
  if (true) { c->lr=0x801B87B4u; dispatch(c,c->ctr); } // 801B87B0
L_801B87B4:;
  c->r[29]=c->r[29]+0x00000001u; // 801B87B4
  c->r[31]=c->r[31]+0x0000000Cu; // 801B87B8
  cmps(c,0,(int32_t)c->r[29],2); // 801B87BC
  if (crb(c,0)) { IRQCHK(c); goto L_801B8778; } // 801B87C0
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B87C4
  c->r[4]=0u+0x00000000u; // 801B87C8
  c->lr=0x801B87D0u; f_801044A8(c); // 801B87CC
  {uint32_t ea=c->r[1]+0x00000124u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B87D0
  c->r[0]=R32(c->r[1]+0x00000144u); // 801B87D4
  c->lr=c->r[0]; // 801B87D8
  c->r[1]=c->r[1]+0x00000140u; // 801B87DC
  return; // 801B87E0
}

// fn_801B87E4
void f_801B87E4(Ctx* __restrict c) {
  trace_call(0x801B87E4u);
  goto L_801B87F4; // 801B87E4
L_801B87E8:;
  W8(c->r[3]+0x00000000u,c->r[6]); // 801B87E8
  c->r[3]=c->r[3]+0x00000001u; // 801B87EC
  c->r[4]=c->r[4]+0x00000001u; // 801B87F0
L_801B87F4:;
  c->r[6]=R8(c->r[4]+0x00000000u); // 801B87F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 801B87F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B87E8; } // 801B87FC
  goto L_801B8810; // 801B8800
L_801B8804:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 801B8804
  c->r[3]=c->r[3]+0x00000001u; // 801B8808
  c->r[5]=c->r[5]+0x00000001u; // 801B880C
L_801B8810:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801B8810
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801B8814
  if (!crb(c,2)) { IRQCHK(c); goto L_801B8804; } // 801B8818
  c->r[0]=0u+0x00000000u; // 801B881C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B8820
  return; // 801B8824
}

// fn_801B8828
void f_801B8828(Ctx* __restrict c) {
  trace_call(0x801B8828u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8828
  c->r[0]=c->lr; // 801B882C
  c->r[3]=c->r[4]|c->r[4]; // 801B8830
  c->r[4]=c->r[5]|c->r[5]; // 801B8834
  W32(c->r[1]+0x00000114u,c->r[0]); // 801B8838
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801B883C
  c->lr=0x801B8844u; f_801B251C(c); // 801B8840
  cmps(c,0,(int32_t)c->r[3],0); // 801B8844
  c->r[31]=c->r[3]|c->r[3]; // 801B8848
  if (!crb(c,2)) { goto L_801B8858; } // 801B884C
  c->r[3]=0u+0x00000000u; // 801B8850
  goto L_801B89F8; // 801B8854
L_801B8858:;
  c->r[5]=R32(c->r[31]+0x00000004u); // 801B8858
  c->r[3]=c->r[1]+0x00000008u; // 801B885C
  c->r[4]=c->r[13]+0xFFFF87CFu; // 801B8860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8864
  c->lr=0x801B886Cu; f_80291CC4(c); // 801B8868
  c->r[4]=c->r[1]+0x00000008u; // 801B886C
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8870
  c->lr=0x801B8878u; f_80104374(c); // 801B8874
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B8878
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 801B887C
  if (!crb(c,2)) { goto L_801B88A4; } // 801B8880
  c->r[4]=c->r[1]+0x00000008u; // 801B8884
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8888
  c->lr=0x801B8890u; f_80104374(c); // 801B888C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B8890
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801B8894
  if (!crb(c,2)) { goto L_801B88A4; } // 801B8898
  c->r[3]=0u+0x00000000u; // 801B889C
  goto L_801B89F8; // 801B88A0
L_801B88A4:;
  c->r[5]=R32(c->r[31]+0x00000018u); // 801B88A4
  cmps(c,0,(int32_t)c->r[5],0); // 801B88A8
  if (crb(c,2)) { goto L_801B88F8; } // 801B88AC
  c->r[3]=c->r[1]+0x00000008u; // 801B88B0
  c->r[4]=c->r[13]+0xFFFF87C8u; // 801B88B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B88B8
  c->lr=0x801B88C0u; f_80291CC4(c); // 801B88BC
  c->r[4]=c->r[1]+0x00000008u; // 801B88C0
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B88C4
  c->lr=0x801B88CCu; f_80104374(c); // 801B88C8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B88CC
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 801B88D0
  if (!crb(c,2)) { goto L_801B88F8; } // 801B88D4
  c->r[4]=c->r[1]+0x00000008u; // 801B88D8
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B88DC
  c->lr=0x801B88E4u; f_80104374(c); // 801B88E0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B88E4
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801B88E8
  if (!crb(c,2)) { goto L_801B88F8; } // 801B88EC
  c->r[3]=0u+0x00000000u; // 801B88F0
  goto L_801B89F8; // 801B88F4
L_801B88F8:;
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 801B88F8
  cmps(c,0,(int32_t)c->r[5],0); // 801B88FC
  if (crb(c,2)) { goto L_801B894C; } // 801B8900
  c->r[3]=c->r[1]+0x00000008u; // 801B8904
  c->r[4]=c->r[13]+0xFFFF87C1u; // 801B8908
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B890C
  c->lr=0x801B8914u; f_80291CC4(c); // 801B8910
  c->r[4]=c->r[1]+0x00000008u; // 801B8914
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8918
  c->lr=0x801B8920u; f_80104374(c); // 801B891C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B8920
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 801B8924
  if (!crb(c,2)) { goto L_801B894C; } // 801B8928
  c->r[4]=c->r[1]+0x00000008u; // 801B892C
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8930
  c->lr=0x801B8938u; f_80104374(c); // 801B8934
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B8938
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801B893C
  if (!crb(c,2)) { goto L_801B894C; } // 801B8940
  c->r[3]=0u+0x00000000u; // 801B8944
  goto L_801B89F8; // 801B8948
L_801B894C:;
  c->r[5]=R32(c->r[31]+0x00000020u); // 801B894C
  cmps(c,0,(int32_t)c->r[5],0); // 801B8950
  if (crb(c,2)) { goto L_801B89A0; } // 801B8954
  c->r[3]=c->r[1]+0x00000008u; // 801B8958
  c->r[4]=c->r[13]+0xFFFF87BAu; // 801B895C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8960
  c->lr=0x801B8968u; f_80291CC4(c); // 801B8964
  c->r[4]=c->r[1]+0x00000008u; // 801B8968
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B896C
  c->lr=0x801B8974u; f_80104374(c); // 801B8970
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B8974
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 801B8978
  if (!crb(c,2)) { goto L_801B89A0; } // 801B897C
  c->r[4]=c->r[1]+0x00000008u; // 801B8980
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8984
  c->lr=0x801B898Cu; f_80104374(c); // 801B8988
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B898C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801B8990
  if (!crb(c,2)) { goto L_801B89A0; } // 801B8994
  c->r[3]=0u+0x00000000u; // 801B8998
  goto L_801B89F8; // 801B899C
L_801B89A0:;
  c->r[5]=R32(c->r[31]+0x00000024u); // 801B89A0
  cmps(c,0,(int32_t)c->r[5],0); // 801B89A4
  if (crb(c,2)) { goto L_801B89F4; } // 801B89A8
  c->r[3]=c->r[1]+0x00000008u; // 801B89AC
  c->r[4]=c->r[13]+0xFFFF87B3u; // 801B89B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B89B4
  c->lr=0x801B89BCu; f_80291CC4(c); // 801B89B8
  c->r[4]=c->r[1]+0x00000008u; // 801B89BC
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B89C0
  c->lr=0x801B89C8u; f_80104374(c); // 801B89C4
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B89C8
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 801B89CC
  if (!crb(c,2)) { goto L_801B89F4; } // 801B89D0
  c->r[4]=c->r[1]+0x00000008u; // 801B89D4
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B89D8
  c->lr=0x801B89E0u; f_80104374(c); // 801B89DC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801B89E0
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801B89E4
  if (!crb(c,2)) { goto L_801B89F4; } // 801B89E8
  c->r[3]=0u+0x00000000u; // 801B89EC
  goto L_801B89F8; // 801B89F0
L_801B89F4:;
  c->r[3]=0u+0x00000001u; // 801B89F4
L_801B89F8:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 801B89F8
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801B89FC
  c->lr=c->r[0]; // 801B8A00
  c->r[1]=c->r[1]+0x00000110u; // 801B8A04
  return; // 801B8A08
}

// fn_801B8A0C
void f_801B8A0C(Ctx* __restrict c) {
  trace_call(0x801B8A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8A0C
  c->r[0]=c->lr; // 801B8A10
  c->r[3]=c->r[4]|c->r[4]; // 801B8A14
  c->r[4]=c->r[5]|c->r[5]; // 801B8A18
  W32(c->r[1]+0x00000114u,c->r[0]); // 801B8A1C
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801B8A20
  c->lr=0x801B8A28u; f_801B251C(c); // 801B8A24
  cmps(c,0,(int32_t)c->r[3],0); // 801B8A28
  c->r[31]=c->r[3]|c->r[3]; // 801B8A2C
  if (crb(c,2)) { goto L_801B8B20; } // 801B8A30
  c->r[4]=0u+0x80400000u; // 801B8A34
  c->r[5]=R32(c->r[31]+0x00000004u); // 801B8A38
  c->r[3]=c->r[1]+0x00000008u; // 801B8A3C
  c->r[4]=c->r[4]+0x00001A6Cu; // 801B8A40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8A44
  c->lr=0x801B8A4Cu; f_80291CC4(c); // 801B8A48
  c->r[4]=c->r[1]+0x00000008u; // 801B8A4C
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8A50
  c->lr=0x801B8A58u; f_801043FC(c); // 801B8A54
  c->r[5]=R32(c->r[31]+0x00000018u); // 801B8A58
  cmps(c,0,(int32_t)c->r[5],0); // 801B8A5C
  if (crb(c,2)) { goto L_801B8A84; } // 801B8A60
  c->r[4]=0u+0x80400000u; // 801B8A64
  c->r[3]=c->r[1]+0x00000008u; // 801B8A68
  c->r[4]=c->r[4]+0x00001A5Au; // 801B8A6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8A70
  c->lr=0x801B8A78u; f_80291CC4(c); // 801B8A74
  c->r[4]=c->r[1]+0x00000008u; // 801B8A78
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8A7C
  c->lr=0x801B8A84u; f_801043FC(c); // 801B8A80
L_801B8A84:;
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 801B8A84
  cmps(c,0,(int32_t)c->r[5],0); // 801B8A88
  if (crb(c,2)) { goto L_801B8AB0; } // 801B8A8C
  c->r[4]=0u+0x80400000u; // 801B8A90
  c->r[3]=c->r[1]+0x00000008u; // 801B8A94
  c->r[4]=c->r[4]+0x00001A48u; // 801B8A98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8A9C
  c->lr=0x801B8AA4u; f_80291CC4(c); // 801B8AA0
  c->r[4]=c->r[1]+0x00000008u; // 801B8AA4
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8AA8
  c->lr=0x801B8AB0u; f_801043FC(c); // 801B8AAC
L_801B8AB0:;
  c->r[5]=R32(c->r[31]+0x00000020u); // 801B8AB0
  cmps(c,0,(int32_t)c->r[5],0); // 801B8AB4
  if (crb(c,2)) { goto L_801B8ADC; } // 801B8AB8
  c->r[4]=0u+0x80400000u; // 801B8ABC
  c->r[3]=c->r[1]+0x00000008u; // 801B8AC0
  c->r[4]=c->r[4]+0x00001A36u; // 801B8AC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8AC8
  c->lr=0x801B8AD0u; f_80291CC4(c); // 801B8ACC
  c->r[4]=c->r[1]+0x00000008u; // 801B8AD0
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8AD4
  c->lr=0x801B8ADCu; f_801043FC(c); // 801B8AD8
L_801B8ADC:;
  c->r[5]=R32(c->r[31]+0x00000024u); // 801B8ADC
  cmps(c,0,(int32_t)c->r[5],0); // 801B8AE0
  if (crb(c,2)) { goto L_801B8B08; } // 801B8AE4
  c->r[4]=0u+0x80400000u; // 801B8AE8
  c->r[3]=c->r[1]+0x00000008u; // 801B8AEC
  c->r[4]=c->r[4]+0x00001A24u; // 801B8AF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8AF4
  c->lr=0x801B8AFCu; f_80291CC4(c); // 801B8AF8
  c->r[4]=c->r[1]+0x00000008u; // 801B8AFC
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B8B00
  c->lr=0x801B8B08u; f_801043FC(c); // 801B8B04
L_801B8B08:;
  c->r[4]=R32(c->r[31]+0x00000034u); // 801B8B08
  cmps(c,0,(int32_t)c->r[4],0); // 801B8B0C
  if (crb(c,0)) { goto L_801B8B20; } // 801B8B10
  c->r[3]=0u+0x80490000u; // 801B8B14
  c->r[3]=c->r[3]+0xFFFFEA84u; // 801B8B18
  c->lr=0x801B8B20u; f_80103498(c); // 801B8B1C
L_801B8B20:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 801B8B20
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801B8B24
  c->lr=c->r[0]; // 801B8B28
  c->r[1]=c->r[1]+0x00000110u; // 801B8B2C
  return; // 801B8B30
}

// fn_801B8B34
void f_801B8B34(Ctx* __restrict c) {
  trace_call(0x801B8B34u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8B34
  c->r[0]=c->lr; // 801B8B38
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B8B3C
  c->r[11]=c->r[1]+0x00000060u; // 801B8B40
  c->lr=0x801B8B48u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8B44
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B8B48
  c->r[31]=c->r[3]|c->r[3]; // 801B8B4C
  c->r[25]=c->r[4]|c->r[4]; // 801B8B50
  cmps(c,0,(int32_t)c->r[0],0); // 801B8B54
  if (crb(c,2)) { goto L_801B8CE4; } // 801B8B58
  c->r[26]=0u+0x00000000u; // 801B8B5C
  c->r[30]=0u+0x00000000u; // 801B8B60
  c->r[28]=0u+0xFFFFFFFFu; // 801B8B64
L_801B8B68:;
  c->r[27]=c->r[31]+c->r[30]; // 801B8B68
  c->r[0]=R32(c->r[27]+0x00000010u); // 801B8B6C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801B8B70
  if (!crb(c,2)) { goto L_801B8C9C; } // 801B8B74
  c->lr=0x801B8B7Cu; f_8003DA30(c); // 801B8B78
  c->lr=0x801B8B80u; f_8003ED58(c); // 801B8B7C
  c->r[29]=c->r[3]|c->r[3]; // 801B8B80
  goto L_801B8C78; // 801B8B84
L_801B8B88:;
  W32(c->r[1]+0x00000010u,c->r[29]); // 801B8B88
  c->r[3]=c->r[1]+0x00000010u; // 801B8B8C
  c->r[4]=0u+0x00000000u; // 801B8B90
  c->lr=0x801B8B98u; f_8003ED68(c); // 801B8B94
  c->r[29]=c->r[29]+0xFFFFFFF8u; // 801B8B98
  c->r[12]=R32(c->r[29]+0x00000010u); // 801B8B9C
  c->r[3]=c->r[29]|c->r[29]; // 801B8BA0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B8BA4
  c->ctr=c->r[12]; // 801B8BA8
  if (true) { c->lr=0x801B8BB0u; dispatch(c,c->ctr); } // 801B8BAC
  W32(c->r[1]+0x00000020u,c->r[4]); // 801B8BB0
  c->r[4]=0u+0xC8000000u; // 801B8BB4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801B8BB8
  c->r[3]=c->r[1]+0x0000001Cu; // 801B8BBC
  c->lr=0x801B8BC4u; f_8003EDD0(c); // 801B8BC0
  cmps(c,0,(int32_t)c->r[3],0); // 801B8BC4
  if (crb(c,2)) { goto L_801B8C74; } // 801B8BC8
  c->r[0]=R32(c->r[29]+0x000004C0u); // 801B8BCC
  cmpu(c,0,c->r[0],c->r[25]); // 801B8BD0
  if (!crb(c,2)) { goto L_801B8C74; } // 801B8BD4
  c->r[0]=R32(c->r[27]+0x0000010Cu); // 801B8BD8
  cmpu(c,0,c->r[29],c->r[0]); // 801B8BDC
  if (!crb(c,2)) { goto L_801B8C74; } // 801B8BE0
  c->r[3]=c->r[27]+0x00000034u; // 801B8BE4
  c->lr=0x801B8BECu; f_802894C0(c); // 801B8BE8
  cmps(c,0,(int32_t)c->r[3],0); // 801B8BEC
  if (crb(c,2)) { goto L_801B8C3C; } // 801B8BF0
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B8BF4
  c->r[3]=c->r[31]|c->r[31]; // 801B8BF8
  c->r[4]=c->r[29]|c->r[29]; // 801B8BFC
  c->r[5]=c->r[27]+0x00000014u; // 801B8C00
  c->r[12]=R32(c->r[12]+0x00000048u); // 801B8C04
  c->r[7]=c->r[27]+0x00000034u; // 801B8C08
  c->r[8]=c->r[27]+0x000000B4u; // 801B8C0C
  c->r[9]=c->r[27]+0x000000D8u; // 801B8C10
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B8C14
  c->r[6]=c->r[13]+0xFFFF879Au; // 801B8C18
  c->ctr=c->r[12]; // 801B8C1C
  if (true) { c->lr=0x801B8C24u; dispatch(c,c->ctr); } // 801B8C20
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B8C24
  c->r[4]=c->r[4]+0x00990000u; // 801B8C28
  c->r[0]=c->r[4]+0xFFFF9680u; // 801B8C2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B8C30
  W32(c->r[27]+0x00000010u,c->r[28]); // 801B8C34
  goto L_801B8C74; // 801B8C38
L_801B8C3C:;
  c->r[4]=R32(c->r[27]+0x000000D4u); // 801B8C3C
  c->r[3]=c->r[29]|c->r[29]; // 801B8C40
  c->lr=0x801B8C48u; f_800CECD0(c); // 801B8C44
  c->r[3]=c->r[1]+0x00000024u; // 801B8C48
  c->r[4]=0u+0x00000000u; // 801B8C4C
  c->lr=0x801B8C54u; f_801B98A4(c); // 801B8C50
  c->r[5]=R32(c->r[29]+0x00000000u); // 801B8C54
  c->r[3]=c->r[1]+0x00000014u; // 801B8C58
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B8C5C
  c->r[4]=c->r[1]+0x00000024u; // 801B8C60
  W32(c->r[1]+0x00000014u,c->r[5]); // 801B8C64
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B8C68
  c->lr=0x801B8C70u; f_801B97F8(c); // 801B8C6C
  W32(c->r[27]+0x00000010u,c->r[28]); // 801B8C70
L_801B8C74:;
  c->r[29]=R32(c->r[1]+0x00000010u); // 801B8C74
L_801B8C78:;
  c->lr=0x801B8C7Cu; f_8003DA30(c); // 801B8C78
  c->lr=0x801B8C80u; f_8003ECFC(c); // 801B8C7C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B8C80
  c->r[3]=c->r[1]+0x0000000Cu; // 801B8C84
  c->r[4]=c->r[1]+0x00000008u; // 801B8C88
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 801B8C8C
  c->lr=0x801B8C94u; f_8003ED7C(c); // 801B8C90
  cmps(c,0,(int32_t)c->r[3],0); // 801B8C94
  if (!crb(c,2)) { IRQCHK(c); goto L_801B8B88; } // 801B8C98
L_801B8C9C:;
  c->r[26]=c->r[26]+0x00000001u; // 801B8C9C
  c->r[30]=c->r[30]+0x00000100u; // 801B8CA0
  cmps(c,0,(int32_t)c->r[26],64); // 801B8CA4
  if (crb(c,0)) { IRQCHK(c); goto L_801B8B68; } // 801B8CA8
  c->r[3]=0u+0x00990000u; // 801B8CAC
  c->r[0]=0u+0x00000040u; // 801B8CB0
  c->r[5]=c->r[3]+0xFFFF9680u; // 801B8CB4
  c->r[3]=0u+0x00000000u; // 801B8CB8
  c->ctr=c->r[0]; // 801B8CBC
L_801B8CC0:;
  c->r[6]=c->r[31]+c->r[3]; // 801B8CC0
  c->r[4]=R32(c->r[6]+0x00000010u); // 801B8CC4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801B8CC8
  if (crb(c,0)) { goto L_801B8CDC; } // 801B8CCC
  c->r[4]=c->r[4]+0xFF670000u; // 801B8CD0
  c->r[0]=c->r[4]+0x00006980u; // 801B8CD4
  W32(c->r[6]+0x00000010u,c->r[0]); // 801B8CD8
L_801B8CDC:;
  c->r[3]=c->r[3]+0x00000100u; // 801B8CDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B8CC0; } // 801B8CE0
L_801B8CE4:;
  c->r[11]=c->r[1]+0x00000060u; // 801B8CE4
  c->lr=0x801B8CECu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8CE8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B8CEC
  c->lr=c->r[0]; // 801B8CF0
  c->r[1]=c->r[1]+0x00000060u; // 801B8CF4
  return; // 801B8CF8
}

// fn_801B8CFC
void f_801B8CFC(Ctx* __restrict c) {
  trace_call(0x801B8CFCu);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8CFC
  c->r[0]=c->lr; // 801B8D00
  W32(c->r[1]+0x00000194u,c->r[0]); // 801B8D04
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 801B8D08
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 801B8D0C
  c->r[11]=c->r[1]+0x00000180u; // 801B8D10
  c->lr=0x801B8D18u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8D14
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B8D18
  c->r[21]=c->r[3]|c->r[3]; // 801B8D1C
  c->r[22]=c->r[4]|c->r[4]; // 801B8D20
  c->r[23]=c->r[5]|c->r[5]; // 801B8D24
  cmps(c,0,(int32_t)c->r[0],0); // 801B8D28
  if (crb(c,2)) { goto L_801B8F30; } // 801B8D2C
  c->r[29]=0u+0x803E0000u; // 801B8D30
  {uint32_t ea=c->r[2]+0xFFFFB3C8u; c->f[31]=RF64(ea);} // 801B8D34
  c->r[29]=c->r[29]+0x000005DCu; // 801B8D38
  c->r[24]=0u+0x00000000u; // 801B8D3C
  c->r[30]=0u+0x43300000u; // 801B8D40
  goto L_801B8F20; // 801B8D44
L_801B8D48:;
  c->r[5]=c->r[24]|c->r[24]; // 801B8D48
  c->r[3]=c->r[1]+0x00000034u; // 801B8D4C
  c->r[4]=c->r[21]+0x00000008u; // 801B8D50
  c->lr=0x801B8D58u; f_80173034(c); // 801B8D54
  c->r[3]=c->r[1]+0x00000034u; // 801B8D58
  c->r[4]=0u+0x00000001u; // 801B8D5C
  c->lr=0x801B8D64u; f_801733E8(c); // 801B8D60
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[3]); // 801B8D64
  if (!crb(c,2)) { goto L_801B8F1C; } // 801B8D68
  c->r[3]=c->r[1]+0x00000028u; // 801B8D6C
  c->lr=0x801B8D74u; f_801732D0(c); // 801B8D70
  c->r[3]=c->r[1]+0x0000001Cu; // 801B8D74
  c->r[4]=c->r[1]+0x00000028u; // 801B8D78
  c->r[5]=c->r[1]+0x00000034u; // 801B8D7C
  c->lr=0x801B8D84u; f_801732E4(c); // 801B8D80
  c->r[3]=c->r[1]+0x00000028u; // 801B8D84
  c->r[4]=0u+0x00000000u; // 801B8D88
  c->lr=0x801B8D90u; f_801B9640(c); // 801B8D8C
  c->r[25]=c->r[3]|c->r[3]; // 801B8D90
  c->r[3]=c->r[1]+0x00000028u; // 801B8D94
  c->r[4]=0u+0x00000002u; // 801B8D98
  c->lr=0x801B8DA0u; f_801B9714(c); // 801B8D9C
  c->r[3]=c->r[1]+0x00000028u; // 801B8DA0
  c->r[4]=0u+0x00000001u; // 801B8DA4
  c->lr=0x801B8DACu; f_801B9714(c); // 801B8DA8
  c->r[27]=c->r[3]|c->r[3]; // 801B8DAC
  c->r[3]=c->r[1]+0x00000028u; // 801B8DB0
  c->r[4]=0u+0x00000003u; // 801B8DB4
  c->lr=0x801B8DBCu; f_801B9640(c); // 801B8DB8
  c->r[3]=c->r[1]+0x00000028u; // 801B8DBC
  c->r[4]=0u+0x00000004u; // 801B8DC0
  c->lr=0x801B8DC8u; f_801B9640(c); // 801B8DC4
  c->r[26]=c->r[3]|c->r[3]; // 801B8DC8
  c->r[3]=c->r[1]+0x00000028u; // 801B8DCC
  c->r[4]=0u+0x00000005u; // 801B8DD0
  c->lr=0x801B8DD8u; f_801B9640(c); // 801B8DD4
  c->r[31]=c->r[3]|c->r[3]; // 801B8DD8
  c->r[3]=c->r[1]+0x00000028u; // 801B8DDC
  c->r[4]=0u+0x00000006u; // 801B8DE0
  c->lr=0x801B8DE8u; f_801B9714(c); // 801B8DE4
  c->r[28]=c->r[3]|c->r[3]; // 801B8DE8
  c->r[3]=c->r[25]|c->r[25]; // 801B8DEC
  c->r[4]=c->r[26]|c->r[26]; // 801B8DF0
  c->lr=0x801B8DF8u; f_801B251C(c); // 801B8DF4
  cmps(c,0,(int32_t)c->r[3],0); // 801B8DF8
  if (crb(c,2)) { goto L_801B8F1C; } // 801B8DFC
  c->r[3]=c->r[31]|c->r[31]; // 801B8E00
  c->r[26]=0u+0x00000000u; // 801B8E04
  c->lr=0x801B8E0Cu; f_802894C0(c); // 801B8E08
  cmps(c,0,(int32_t)c->r[3],0); // 801B8E0C
  if (crb(c,2)) { goto L_801B8E58; } // 801B8E10
  c->r[3]=c->r[31]|c->r[31]; // 801B8E14
  c->r[4]=c->r[29]+0x0000002Eu; // 801B8E18
  c->lr=0x801B8E20u; f_80293554(c); // 801B8E1C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8E20
  if (crb(c,2)) { goto L_801B8E58; } // 801B8E24
  c->r[5]=c->r[31]|c->r[31]; // 801B8E28
  c->r[3]=c->r[1]+0x00000040u; // 801B8E2C
  c->r[4]=c->r[29]+0x00000033u; // 801B8E30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8E34
  c->lr=0x801B8E3Cu; f_80291CC4(c); // 801B8E38
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B8E3C
  c->r[4]=c->r[1]+0x00000040u; // 801B8E40
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B8E44
  c->r[12]=R32(c->r[12]+0x00000070u); // 801B8E48
  c->ctr=c->r[12]; // 801B8E4C
  if (true) { c->lr=0x801B8E54u; dispatch(c,c->ctr); } // 801B8E50
  c->r[26]=c->r[3]|c->r[3]; // 801B8E54
L_801B8E58:;
  c->lr=0x801B8E5Cu; f_8003DA30(c); // 801B8E58
  c->lr=0x801B8E60u; f_8003ED58(c); // 801B8E5C
  c->r[31]=c->r[3]|c->r[3]; // 801B8E60
  goto L_801B8EF8; // 801B8E64
L_801B8E68:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801B8E68
  c->r[3]=c->r[1]+0x00000008u; // 801B8E6C
  c->r[4]=0u+0x00000000u; // 801B8E70
  c->lr=0x801B8E78u; f_8003ED68(c); // 801B8E74
  c->r[25]=c->r[31]+0xFFFFFFF8u; // 801B8E78
  c->r[12]=R32(c->r[25]+0x00000010u); // 801B8E7C
  c->r[3]=c->r[25]|c->r[25]; // 801B8E80
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B8E84
  c->ctr=c->r[12]; // 801B8E88
  if (true) { c->lr=0x801B8E90u; dispatch(c,c->ctr); } // 801B8E8C
  W32(c->r[1]+0x00000018u,c->r[4]); // 801B8E90
  c->r[4]=0u+0xC8000000u; // 801B8E94
  W32(c->r[1]+0x00000014u,c->r[3]); // 801B8E98
  c->r[3]=c->r[1]+0x00000014u; // 801B8E9C
  c->lr=0x801B8EA4u; f_8003EDD0(c); // 801B8EA0
  cmps(c,0,(int32_t)c->r[3],0); // 801B8EA4
  if (crb(c,2)) { goto L_801B8EF4; } // 801B8EA8
  c->r[0]=R32(c->r[25]+0x000004C0u); // 801B8EAC
  cmpu(c,0,c->r[0],c->r[22]); // 801B8EB0
  if (!crb(c,2)) { goto L_801B8EF4; } // 801B8EB4
  c->r[3]=c->r[25]|c->r[25]; // 801B8EB8
  c->r[4]=c->r[26]|c->r[26]; // 801B8EBC
  c->lr=0x801B8EC4u; f_800CECD0(c); // 801B8EC0
  c->r[0]=c->r[28]^0x80000000u; // 801B8EC4
  W32(c->r[1]+0x00000140u,c->r[30]); // 801B8EC8
  W32(c->r[1]+0x00000144u,c->r[0]); // 801B8ECC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[0]=RF64(ea);} // 801B8ED0
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 801B8ED4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 801B8ED8
  W32(c->r[1]+0x00000148u,c->r[30]); // 801B8EDC
  {uint32_t ea=c->r[1]+0x00000148u; c->f[0]=RF64(ea);} // 801B8EE0
  {uint32_t ea=c->r[25]+0x000003A4u; WF32(ea,c->f[1]);} // 801B8EE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801B8EE8
  {uint32_t ea=c->r[25]+0x000003A8u; WF32(ea,c->f[0]);} // 801B8EEC
  W32(c->r[25]+0x000004C0u,c->r[27]); // 801B8EF0
L_801B8EF4:;
  c->r[31]=R32(c->r[1]+0x00000008u); // 801B8EF4
L_801B8EF8:;
  c->lr=0x801B8EFCu; f_8003DA30(c); // 801B8EF8
  c->lr=0x801B8F00u; f_8003ECFC(c); // 801B8EFC
  W32(c->r[1]+0x00000010u,c->r[3]); // 801B8F00
  c->r[3]=c->r[1]+0x0000000Cu; // 801B8F04
  c->r[4]=c->r[1]+0x00000010u; // 801B8F08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B8F0C
  c->lr=0x801B8F14u; f_8003ED7C(c); // 801B8F10
  cmps(c,0,(int32_t)c->r[3],0); // 801B8F14
  if (!crb(c,2)) { IRQCHK(c); goto L_801B8E68; } // 801B8F18
L_801B8F1C:;
  c->r[24]=c->r[24]+0x00000001u; // 801B8F1C
L_801B8F20:;
  c->r[3]=c->r[21]+0x00000008u; // 801B8F20
  c->lr=0x801B8F28u; f_80173018(c); // 801B8F24
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[3]); // 801B8F28
  if (crb(c,0)) { IRQCHK(c); goto L_801B8D48; } // 801B8F2C
L_801B8F30:;
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,31,ea,0,0);} // 801B8F30
  c->r[11]=c->r[1]+0x00000180u; // 801B8F34
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 801B8F38
  c->lr=0x801B8F40u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8F3C
  c->r[0]=R32(c->r[1]+0x00000194u); // 801B8F40
  c->lr=c->r[0]; // 801B8F44
  c->r[1]=c->r[1]+0x00000190u; // 801B8F48
  return; // 801B8F4C
}

// fn_801B8F50
void f_801B8F50(Ctx* __restrict c) {
  trace_call(0x801B8F50u);
  c->r[3]=c->r[4]|c->r[4]; // 801B8F50
  c->r[4]=c->r[5]|c->r[5]; // 801B8F54
  f_801B3408(c); return; // 801B8F58
}

// fn_801B8F5C
void f_801B8F5C(Ctx* __restrict c) {
  trace_call(0x801B8F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8F5C
  c->r[0]=c->lr; // 801B8F60
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B8F64
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B8F68
  c->r[29]=c->r[3]|c->r[3]; // 801B8F6C
  c->r[30]=c->r[4]|c->r[4]; // 801B8F70
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B8F74
  cmps(c,0,(int32_t)c->r[0],0); // 801B8F78
  if (!crb(c,2)) { goto L_801B8F88; } // 801B8F7C
  c->r[3]=0u+0x00000000u; // 801B8F80
  goto L_801B8FF0; // 801B8F84
L_801B8F88:;
  c->r[31]=0u+0x00000000u; // 801B8F88
  goto L_801B8FDC; // 801B8F8C
L_801B8F90:;
  c->r[5]=c->r[31]|c->r[31]; // 801B8F90
  c->r[3]=c->r[1]+0x00000020u; // 801B8F94
  c->r[4]=c->r[29]+0x00000008u; // 801B8F98
  c->lr=0x801B8FA0u; f_80173034(c); // 801B8F9C
  c->r[3]=c->r[1]+0x00000020u; // 801B8FA0
  c->r[4]=0u+0x00000001u; // 801B8FA4
  c->lr=0x801B8FACu; f_801733E8(c); // 801B8FA8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801B8FAC
  if (!crb(c,2)) { goto L_801B8FD8; } // 801B8FB0
  c->r[3]=c->r[1]+0x00000014u; // 801B8FB4
  c->lr=0x801B8FBCu; f_801732D0(c); // 801B8FB8
  c->r[3]=c->r[1]+0x00000008u; // 801B8FBC
  c->r[4]=c->r[1]+0x00000014u; // 801B8FC0
  c->r[5]=c->r[1]+0x00000020u; // 801B8FC4
  c->lr=0x801B8FCCu; f_801732E4(c); // 801B8FC8
  c->r[3]=c->r[1]+0x00000014u; // 801B8FCC
  c->lr=0x801B8FD4u; f_801B3850(c); // 801B8FD0
  goto L_801B8FF0; // 801B8FD4
L_801B8FD8:;
  c->r[31]=c->r[31]+0x00000001u; // 801B8FD8
L_801B8FDC:;
  c->r[3]=c->r[29]+0x00000008u; // 801B8FDC
  c->lr=0x801B8FE4u; f_80173018(c); // 801B8FE0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801B8FE4
  if (crb(c,0)) { IRQCHK(c); goto L_801B8F90; } // 801B8FE8
  c->r[3]=0u+0x00000000u; // 801B8FEC
L_801B8FF0:;
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B8FF0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B8FF4
  c->lr=c->r[0]; // 801B8FF8
  c->r[1]=c->r[1]+0x00000040u; // 801B8FFC
  return; // 801B9000
}

// fn_801B9004
void f_801B9004(Ctx* __restrict c) {
  trace_call(0x801B9004u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9004
  c->r[0]=c->lr; // 801B9008
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B900C
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B9010
  c->r[26]=c->r[3]|c->r[3]; // 801B9014
  c->r[27]=c->r[4]|c->r[4]; // 801B9018
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B901C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9020
  if (crb(c,2)) { goto L_801B90CC; } // 801B9024
  c->r[28]=0u+0x00000000u; // 801B9028
  c->r[30]=0u+0x00000001u; // 801B902C
  c->r[31]=0u+0x00000000u; // 801B9030
  goto L_801B90BC; // 801B9034
L_801B9038:;
  c->r[5]=c->r[28]|c->r[28]; // 801B9038
  c->r[3]=c->r[1]+0x0000002Cu; // 801B903C
  c->r[4]=c->r[26]+0x00000008u; // 801B9040
  c->lr=0x801B9048u; f_80173034(c); // 801B9044
  c->r[3]=c->r[1]+0x0000002Cu; // 801B9048
  c->r[4]=0u+0x00000001u; // 801B904C
  c->lr=0x801B9054u; f_801733E8(c); // 801B9050
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 801B9054
  if (!crb(c,2)) { goto L_801B90B8; } // 801B9058
  c->r[3]=c->r[1]+0x00000020u; // 801B905C
  c->lr=0x801B9064u; f_801732D0(c); // 801B9060
  c->r[3]=c->r[1]+0x00000014u; // 801B9064
  c->r[4]=c->r[1]+0x00000020u; // 801B9068
  c->r[5]=c->r[1]+0x0000002Cu; // 801B906C
  c->lr=0x801B9074u; f_801732E4(c); // 801B9070
  c->r[4]=c->r[26]+0x00020000u; // 801B9074
  c->r[3]=c->r[1]+0x00000008u; // 801B9078
  c->r[0]=R32(c->r[4]+0x0000597Cu); // 801B907C
  c->r[5]=c->r[1]+0x00000020u; // 801B9080
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3912); // 801B9084
  c->r[29]=c->r[26]+c->r[0]; // 801B9088
  W8(c->r[29]+0x00007078u,c->r[30]); // 801B908C
  c->r[4]=c->r[29]+0x0000707Cu; // 801B9090
  c->lr=0x801B9098u; f_801732E4(c); // 801B9094
  W32(c->r[29]+0x00007088u,c->r[31]); // 801B9098
  c->r[4]=c->r[26]+0x00020000u; // 801B909C
  c->r[3]=R32(c->r[4]+0x0000597Cu); // 801B90A0
  c->r[0]=c->r[3]+0x00000001u; // 801B90A4
  cmps(c,0,(int32_t)c->r[0],32); // 801B90A8
  W32(c->r[4]+0x0000597Cu,c->r[0]); // 801B90AC
  if (crb(c,0)) { goto L_801B90B8; } // 801B90B0
  W32(c->r[4]+0x0000597Cu,c->r[31]); // 801B90B4
L_801B90B8:;
  c->r[28]=c->r[28]+0x00000001u; // 801B90B8
L_801B90BC:;
  c->r[3]=c->r[26]+0x00000008u; // 801B90BC
  c->lr=0x801B90C4u; f_80173018(c); // 801B90C0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801B90C4
  if (crb(c,0)) { IRQCHK(c); goto L_801B9038; } // 801B90C8
L_801B90CC:;
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B90CC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B90D0
  c->lr=c->r[0]; // 801B90D4
  c->r[1]=c->r[1]+0x00000050u; // 801B90D8
  return; // 801B90DC
}

// fn_801B90E0
void f_801B90E0(Ctx* __restrict c) {
  trace_call(0x801B90E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B90E0
  c->r[0]=c->lr; // 801B90E4
  c->r[3]=0u+0x00000000u; // 801B90E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B90EC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801B90F0
  c->f[31]=c->f[1]; // 801B90F4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B90F8
  c->r[30]=c->r[4]|c->r[4]; // 801B90FC
  c->r[4]=c->r[5]|c->r[5]; // 801B9100
  c->r[31]=c->r[6]|c->r[6]; // 801B9104
  c->lr=0x801B910Cu; f_801B251C(c); // 801B9108
  cmps(c,0,(int32_t)c->r[3],0); // 801B910C
  c->r[4]=c->r[3]|c->r[3]; // 801B9110
  if (!crb(c,2)) { goto L_801B9120; } // 801B9114
  c->r[3]=0u+0x00000000u; // 801B9118
  goto L_801B9138; // 801B911C
L_801B9120:;
  c->f[1]=c->f[31]; // 801B9120
  c->r[3]=c->r[30]|c->r[30]; // 801B9124
  c->r[5]=c->r[31]|c->r[31]; // 801B9128
  c->r[6]=0u+0x00000000u; // 801B912C
  c->r[7]=0u+0x00000000u; // 801B9130
  c->lr=0x801B9138u; f_801B2AB4(c); // 801B9134
L_801B9138:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B9138
  if (!crb(c,2)) { goto L_801B9148; } // 801B913C
  c->r[3]=0u+0x00000000u; // 801B9140
  goto L_801B9150; // 801B9144
L_801B9148:;
  c->r[0]=0u+0x00000000u; // 801B9148
  W8(c->r[3]+0x000004ACu,c->r[0]); // 801B914C
L_801B9150:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801B9150
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B9154
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9158
  c->lr=c->r[0]; // 801B915C
  c->r[1]=c->r[1]+0x00000020u; // 801B9160
  return; // 801B9164
}

// fn_801B9168
void f_801B9168(Ctx* __restrict c) {
  trace_call(0x801B9168u);
  return; // 801B9168
}

// fn_801B916C
void f_801B916C(Ctx* __restrict c) {
  trace_call(0x801B916Cu);
  {uint32_t ea=c->r[1]+0xFFFFE500u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B916C
  c->r[0]=c->lr; // 801B9170
  W32(c->r[1]+0x00001B04u,c->r[0]); // 801B9174
  c->r[11]=c->r[1]+0x00001B00u; // 801B9178
  c->lr=0x801B9180u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B917C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B9180
  c->r[31]=c->r[3]|c->r[3]; // 801B9184
  cmps(c,0,(int32_t)c->r[0],0); // 801B9188
  if (crb(c,2)) { goto L_801B944C; } // 801B918C
  c->r[26]=0u+0x00000000u; // 801B9190
  c->r[29]=0u+0x00000000u; // 801B9194
  c->r[27]=0u+0xFFFFFFFFu; // 801B9198
L_801B919C:;
  c->r[28]=c->r[31]+c->r[29]; // 801B919C
  c->r[0]=R32(c->r[28]+0x00000010u); // 801B91A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B91A4
  if (crb(c,0)) { goto L_801B92CC; } // 801B91A8
  c->r[25]=0u+0x00000000u; // 801B91AC
  c->lr=0x801B91B4u; f_8003DA30(c); // 801B91B0
  c->lr=0x801B91B8u; f_8003ED58(c); // 801B91B4
  c->r[30]=c->r[3]|c->r[3]; // 801B91B8
  goto L_801B929C; // 801B91BC
L_801B91C0:;
  W32(c->r[1]+0x00000010u,c->r[30]); // 801B91C0
  c->r[3]=c->r[1]+0x00000010u; // 801B91C4
  c->r[4]=0u+0x00000000u; // 801B91C8
  c->lr=0x801B91D0u; f_8003ED68(c); // 801B91CC
  c->r[30]=c->r[30]+0xFFFFFFF8u; // 801B91D0
  c->r[12]=R32(c->r[30]+0x00000010u); // 801B91D4
  c->r[3]=c->r[30]|c->r[30]; // 801B91D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B91DC
  c->ctr=c->r[12]; // 801B91E0
  if (true) { c->lr=0x801B91E8u; dispatch(c,c->ctr); } // 801B91E4
  W32(c->r[1]+0x00000020u,c->r[4]); // 801B91E8
  c->r[4]=0u+0xC8000000u; // 801B91EC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801B91F0
  c->r[3]=c->r[1]+0x0000001Cu; // 801B91F4
  c->lr=0x801B91FCu; f_8003EDD0(c); // 801B91F8
  cmps(c,0,(int32_t)c->r[3],0); // 801B91FC
  if (crb(c,2)) { goto L_801B9298; } // 801B9200
  c->r[3]=R32(c->r[28]+0x00000010u); // 801B9204
  c->r[0]=R32(c->r[30]+0x000004C0u); // 801B9208
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B920C
  if (!crb(c,2)) { goto L_801B9298; } // 801B9210
  c->r[0]=R32(c->r[28]+0x0000010Cu); // 801B9214
  cmpu(c,0,c->r[0],c->r[30]); // 801B9218
  if (!crb(c,2)) { goto L_801B9298; } // 801B921C
  c->r[0]=R32(c->r[28]+0x00000108u); // 801B9220
  c->r[25]=0u+0x00000001u; // 801B9224
  cmps(c,0,(int32_t)c->r[0],0); // 801B9228
  if (!crb(c,1)) { goto L_801B9298; } // 801B922C
  cmps(c,0,(int32_t)c->r[0],2); // 801B9230
  if (crb(c,0)) { goto L_801B928C; } // 801B9234
  c->r[3]=R32(c->r[30]+0x00000974u); // 801B9238
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B923C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B9240
  c->lr=0x801B9248u; f_8016498C(c); // 801B9244
  cmps(c,0,(int32_t)c->r[3],0); // 801B9248
  if (crb(c,2)) { goto L_801B928C; } // 801B924C
  c->r[4]=R32(c->r[28]+0x000000D4u); // 801B9250
  c->r[3]=c->r[30]|c->r[30]; // 801B9254
  c->lr=0x801B925Cu; f_800CECD0(c); // 801B9258
  c->r[3]=c->r[1]+0x00000024u; // 801B925C
  c->r[4]=0u+0x00000000u; // 801B9260
  c->lr=0x801B9268u; f_801B98A4(c); // 801B9264
  c->r[5]=R32(c->r[30]+0x00000000u); // 801B9268
  c->r[3]=c->r[1]+0x00000014u; // 801B926C
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B9270
  c->r[4]=c->r[1]+0x00000024u; // 801B9274
  W32(c->r[1]+0x00000014u,c->r[5]); // 801B9278
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B927C
  c->lr=0x801B9284u; f_801B97F8(c); // 801B9280
  W32(c->r[28]+0x00000010u,c->r[27]); // 801B9284
  goto L_801B9298; // 801B9288
L_801B928C:;
  c->r[3]=R32(c->r[28]+0x00000108u); // 801B928C
  c->r[0]=c->r[3]+0x00000001u; // 801B9290
  W32(c->r[28]+0x00000108u,c->r[0]); // 801B9294
L_801B9298:;
  c->r[30]=R32(c->r[1]+0x00000010u); // 801B9298
L_801B929C:;
  c->lr=0x801B92A0u; f_8003DA30(c); // 801B929C
  c->lr=0x801B92A4u; f_8003ECFC(c); // 801B92A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B92A4
  c->r[3]=c->r[1]+0x0000000Cu; // 801B92A8
  c->r[4]=c->r[1]+0x00000008u; // 801B92AC
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801B92B0
  c->lr=0x801B92B8u; f_8003ED7C(c); // 801B92B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B92B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B91C0; } // 801B92BC
  cmps(c,0,(int32_t)c->r[25],0); // 801B92C0
  if (!crb(c,2)) { goto L_801B92CC; } // 801B92C4
  W32(c->r[28]+0x00000010u,c->r[27]); // 801B92C8
L_801B92CC:;
  c->r[26]=c->r[26]+0x00000001u; // 801B92CC
  c->r[29]=c->r[29]+0x00000100u; // 801B92D0
  cmps(c,0,(int32_t)c->r[26],64); // 801B92D4
  if (crb(c,0)) { IRQCHK(c); goto L_801B919C; } // 801B92D8
  c->r[3]=c->r[1]+0x00000B9Cu; // 801B92DC
  c->lr=0x801B92E4u; f_801732D0(c); // 801B92E0
  c->r[3]=c->r[31]+0x00020000u; // 801B92E4
  c->r[0]=R32(c->r[3]+0x00005978u); // 801B92E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3912); // 801B92EC
  c->r[3]=c->r[31]+c->r[0]; // 801B92F0
  c->r[0]=R8(c->r[3]+0x00007078u); // 801B92F4
  c->r[4]=c->r[3]+0x00007078u; // 801B92F8
  cmps(c,0,(int32_t)c->r[0],0); // 801B92FC
  if (!crb(c,2)) { goto L_801B930C; } // 801B9300
  c->r[0]=0u+0x00000000u; // 801B9304
  goto L_801B9318; // 801B9308
L_801B930C:;
  c->r[3]=c->r[1]+0x00000B98u; // 801B930C
  c->lr=0x801B9314u; f_801B7CE8(c); // 801B9310
  c->r[0]=0u+0x00000001u; // 801B9314
L_801B9318:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B9318
  if (crb(c,2)) { goto L_801B944C; } // 801B931C
  c->r[3]=c->r[1]+0x00000B9Cu; // 801B9320
  c->lr=0x801B9328u; f_801B3850(c); // 801B9324
  cmps(c,0,(int32_t)c->r[3],0); // 801B9328
  if (crb(c,2)) { goto L_801B941C; } // 801B932C
  c->r[5]=c->r[31]+0x00020000u; // 801B9330
  c->r[0]=R32(c->r[5]+0x00005978u); // 801B9334
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3912); // 801B9338
  c->r[3]=c->r[31]+c->r[0]; // 801B933C
  c->r[0]=R8(c->r[3]+0x00007078u); // 801B9340
  cmps(c,0,(int32_t)c->r[0],0); // 801B9344
  if (crb(c,2)) { goto L_801B936C; } // 801B9348
  c->r[4]=0u+0x00000000u; // 801B934C
  W8(c->r[3]+0x00007078u,c->r[4]); // 801B9350
  c->r[3]=R32(c->r[5]+0x00005978u); // 801B9354
  c->r[0]=c->r[3]+0x00000001u; // 801B9358
  cmps(c,0,(int32_t)c->r[0],32); // 801B935C
  W32(c->r[5]+0x00005978u,c->r[0]); // 801B9360
  if (crb(c,0)) { goto L_801B936C; } // 801B9364
  W32(c->r[5]+0x00005978u,c->r[4]); // 801B9368
L_801B936C:;
  c->r[0]=R32(c->r[1]+0x00000BA8u); // 801B936C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9370
  if (!crb(c,1)) { goto L_801B93E8; } // 801B9374
  c->r[3]=0u+0x803F0000u; // 801B9378
  c->r[27]=0u+0x00000000u; // 801B937C
  c->r[3]=c->r[3]+0x000038D0u; // 801B9380
  W32(c->r[1]+0x0000003Cu,c->r[27]); // 801B9384
  c->r[28]=c->r[1]+0x00000B98u; // 801B9388
  c->r[25]=0u+0x00000000u; // 801B938C
  W32(c->r[1]+0x00000038u,c->r[3]); // 801B9390
  c->r[30]=0u+0x00000000u; // 801B9394
  c->r[29]=0u+0x00000000u; // 801B9398
  goto L_801B93DC; // 801B939C
L_801B93A0:;
  c->r[4]=c->r[1]+0x00000BB0u; // 801B93A0
  W32(c->r[1]+0x0000003Cu,c->r[27]); // 801B93A4
  c->r[3]=c->r[1]+0x00000040u; // 801B93A8
  W32(c->r[1]+0x00000040u,c->r[27]); // 801B93AC
  c->r[4]=c->r[4]+c->r[30]; // 801B93B0
  W32(c->r[1]+0x000007D0u,c->r[27]); // 801B93B4
  c->lr=0x801B93BCu; f_8009D2F8(c); // 801B93B8
  c->r[4]=c->r[28]+c->r[29]; // 801B93BC
  c->r[3]=c->r[1]+0x00000038u; // 801B93C0
  c->r[12]=R32(c->r[4]+0x00000F38u); // 801B93C4
  c->ctr=c->r[12]; // 801B93C8
  if (true) { c->lr=0x801B93D0u; dispatch(c,c->ctr); } // 801B93CC
  c->r[25]=c->r[25]+0x00000001u; // 801B93D0
  c->r[30]=c->r[30]+0x000003C8u; // 801B93D4
  c->r[29]=c->r[29]+0x00000004u; // 801B93D8
L_801B93DC:;
  c->r[0]=R32(c->r[1]+0x00000BA8u); // 801B93DC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801B93E0
  if (crb(c,0)) { IRQCHK(c); goto L_801B93A0; } // 801B93E4
L_801B93E8:;
  c->r[3]=c->r[31]+0x00020000u; // 801B93E8
  c->r[0]=R8(c->r[3]+0x00005980u); // 801B93EC
  cmps(c,0,(int32_t)c->r[0],0); // 801B93F0
  if (crb(c,2)) { goto L_801B944C; } // 801B93F4
  c->r[0]=0u+0x00000000u; // 801B93F8
  c->r[4]=0u+0x00000000u; // 801B93FC
  W8(c->r[3]+0x00005980u,c->r[0]); // 801B9400
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B9404
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B9408
  c->r[12]=R32(c->r[12]+0x000000B4u); // 801B940C
  c->ctr=c->r[12]; // 801B9410
  if (true) { c->lr=0x801B9418u; dispatch(c,c->ctr); } // 801B9414
  goto L_801B944C; // 801B9418
L_801B941C:;
  c->r[3]=c->r[31]+0x00020000u; // 801B941C
  c->r[0]=R8(c->r[3]+0x00005980u); // 801B9420
  cmps(c,0,(int32_t)c->r[0],0); // 801B9424
  if (!crb(c,2)) { goto L_801B944C; } // 801B9428
  c->r[0]=0u+0x00000001u; // 801B942C
  c->r[4]=0u+0x00000000u; // 801B9430
  W8(c->r[3]+0x00005980u,c->r[0]); // 801B9434
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801B9438
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B943C
  c->r[12]=R32(c->r[12]+0x000000B0u); // 801B9440
  c->ctr=c->r[12]; // 801B9444
  if (true) { c->lr=0x801B944Cu; dispatch(c,c->ctr); } // 801B9448
L_801B944C:;
  c->r[11]=c->r[1]+0x00001B00u; // 801B944C
  c->lr=0x801B9454u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9450
  c->r[0]=R32(c->r[1]+0x00001B04u); // 801B9454
  c->lr=c->r[0]; // 801B9458
  c->r[1]=c->r[1]+0x00001B00u; // 801B945C
  return; // 801B9460
}

// fn_801B9464
void f_801B9464(Ctx* __restrict c) {
  trace_call(0x801B9464u);
  return; // 801B9464
}

// fn_801B9468
void f_801B9468(Ctx* __restrict c) {
  trace_call(0x801B9468u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9468
  c->r[0]=c->lr; // 801B946C
  cmps(c,0,(int32_t)c->r[4],0); // 801B9470
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B9474
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B9478
  c->r[31]=c->r[3]|c->r[3]; // 801B947C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801B9480
  if (crb(c,2)) { goto L_801B94C8; } // 801B9484
  c->r[3]=c->r[1]+0x00000010u; // 801B9488
  c->lr=0x801B9490u; f_80172DDC(c); // 801B948C
  c->r[0]=R32(c->r[1]+0x00000010u); // 801B9490
  cmps(c,0,(int32_t)c->r[0],0); // 801B9494
  if (crb(c,2)) { goto L_801B94C8; } // 801B9498
  c->r[3]=c->r[1]+0x00000010u; // 801B949C
  c->r[4]=c->r[13]+0xFFFF8794u; // 801B94A0
  c->lr=0x801B94A8u; f_80172EC8(c); // 801B94A4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B94A8
  c->r[4]=c->r[1]+0x00000008u; // 801B94AC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B94B0
  c->r[3]=c->r[31]+0x00000008u; // 801B94B4
  c->lr=0x801B94BCu; f_80172FE0(c); // 801B94B8
  c->r[3]=c->r[31]+0x00000008u; // 801B94BC
  c->lr=0x801B94C4u; f_80173004(c); // 801B94C0
  cmps(c,0,(int32_t)c->r[3],0); // 801B94C4
L_801B94C8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B94C8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B94CC
  c->lr=c->r[0]; // 801B94D0
  c->r[1]=c->r[1]+0x00000030u; // 801B94D4
  return; // 801B94D8
}

// fn_801B94DC
void f_801B94DC(Ctx* __restrict c) {
  trace_call(0x801B94DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B94DC
  c->r[0]=c->lr; // 801B94E0
  c->r[6]=0u+0x00000000u; // 801B94E4
  c->r[5]=0u+0xFFFFFFFFu; // 801B94E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B94EC
  c->r[0]=0u+0x00000040u; // 801B94F0
  c->r[4]=c->r[6]|c->r[6]; // 801B94F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B94F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B94FC
  c->r[30]=c->r[3]|c->r[3]; // 801B9500
  W32(c->r[3]+0x00000004u,c->r[6]); // 801B9504
  c->ctr=c->r[0]; // 801B9508
L_801B950C:;
  c->r[7]=c->r[3]+c->r[4]; // 801B950C
  c->r[4]=c->r[4]+0x00000100u; // 801B9510
  W32(c->r[7]+0x00000010u,c->r[5]); // 801B9514
  W8(c->r[7]+0x000000B4u,c->r[6]); // 801B9518
  W32(c->r[7]+0x000000D4u,c->r[6]); // 801B951C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B950C; } // 801B9520
  c->r[31]=0u+0x00000000u; // 801B9524
  W32(c->r[3]+0x00004010u,c->r[31]); // 801B9528
  c->r[3]=c->r[3]+0x00004014u; // 801B952C
  c->lr=0x801B9534u; f_801DBCBC(c); // 801B9530
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B9534
  c->r[3]=c->r[30]+0x0000706Cu; // 801B9538
  {uint32_t ea=c->r[2]+0xFFFFB408u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B953C
  c->f[3]=c->f[1]; // 801B9540
  c->lr=0x801B9548u; f_80065358(c); // 801B9544
  c->r[3]=c->r[13]+0xFFFF9568u; // 801B9548
  c->lr=0x801B9550u; f_80104368(c); // 801B954C
  c->r[3]=c->r[30]+0x00007078u; // 801B9550
  c->lr=0x801B9558u; f_801B7B58(c); // 801B9554
  c->r[3]=c->r[30]+0x00020000u; // 801B9558
  W8(c->r[3]+0x00005980u,c->r[31]); // 801B955C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9560
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B9564
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9568
  c->lr=c->r[0]; // 801B956C
  c->r[1]=c->r[1]+0x00000010u; // 801B9570
  return; // 801B9574
}

// fn_801B9578
void f_801B9578(Ctx* __restrict c) {
  trace_call(0x801B9578u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9578
  c->r[0]=c->lr; // 801B957C
  c->r[4]=0u+0x80400000u; // 801B9580
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9584
  c->r[4]=c->r[4]+0x0000193Cu; // 801B9588
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B958C
  c->r[29]=c->r[3]|c->r[3]; // 801B9590
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B9594
  c->r[3]=c->r[3]+0x00000008u; // 801B9598
  c->lr=0x801B95A0u; f_80172FD0(c); // 801B959C
  c->r[3]=c->r[29]+0x00004014u; // 801B95A0
  c->lr=0x801B95A8u; f_801DBBB0(c); // 801B95A4
  c->r[3]=c->r[29]+0x00020000u; // 801B95A8
  c->r[30]=c->r[29]+0x00007078u; // 801B95AC
  c->r[31]=c->r[3]+0x00005978u; // 801B95B0
L_801B95B4:;
  c->r[3]=c->r[30]+0x00000004u; // 801B95B4
  c->lr=0x801B95BCu; f_801732D0(c); // 801B95B8
  c->r[30]=c->r[30]+0x00000F48u; // 801B95BC
  cmpu(c,0,c->r[30],c->r[31]); // 801B95C0
  if (crb(c,0)) { IRQCHK(c); goto L_801B95B4; } // 801B95C4
  W32(c->r[13]+0xFFFF9710u,c->r[29]); // 801B95C8
  c->r[3]=c->r[29]|c->r[29]; // 801B95CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B95D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B95D4
  c->lr=c->r[0]; // 801B95D8
  c->r[1]=c->r[1]+0x00000020u; // 801B95DC
  return; // 801B95E0
}

// fn_801B95E4
void f_801B95E4(Ctx* __restrict c) {
  trace_call(0x801B95E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B95E4
  c->r[0]=c->lr; // 801B95E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B95EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B95F0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B95F4
  c->r[30]=c->r[3]|c->r[3]; // 801B95F8
  c->r[31]=c->r[4]|c->r[4]; // 801B95FC
  if (crb(c,2)) { goto L_801B9628; } // 801B9600
  c->r[0]=0u+0x00000000u; // 801B9604
  c->r[4]=0u+0xFFFFFFFFu; // 801B9608
  W32(c->r[13]+0xFFFF9710u,c->r[0]); // 801B960C
  c->r[3]=c->r[3]+0x00004014u; // 801B9610
  c->lr=0x801B9618u; f_801DBC4C(c); // 801B9614
  cmps(c,0,(int32_t)c->r[31],0); // 801B9618
  if (!crb(c,1)) { goto L_801B9628; } // 801B961C
  c->r[3]=c->r[30]|c->r[30]; // 801B9620
  c->lr=0x801B9628u; f_802896EC(c); // 801B9624
L_801B9628:;
  c->r[3]=c->r[30]|c->r[30]; // 801B9628
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B962C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9630
  c->lr=c->r[0]; // 801B9634
  c->r[1]=c->r[1]+0x00000010u; // 801B9638
  return; // 801B963C
}

// fn_801B9640
void f_801B9640(Ctx* __restrict c) {
  trace_call(0x801B9640u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9640
  c->r[0]=c->lr; // 801B9644
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9648
  c->lr=0x801B9650u; f_80173520(c); // 801B964C
  cmps(c,0,(int32_t)c->r[3],0); // 801B9650
  if (!crb(c,2)) { goto L_801B965C; } // 801B9654
  c->r[3]=c->r[13]+0xFFFF87F8u; // 801B9658
L_801B965C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B965C
  c->lr=c->r[0]; // 801B9660
  c->r[1]=c->r[1]+0x00000010u; // 801B9664
  return; // 801B9668
}

// fn_801B966C
void f_801B966C(Ctx* __restrict c) {
  trace_call(0x801B966Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B966C
  c->r[0]=c->lr; // 801B9670
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9674
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B9678
  c->r[31]=c->r[4]|c->r[4]; // 801B967C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B9680
  c->r[30]=c->r[3]|c->r[3]; // 801B9684
  c->lr=0x801B968Cu; f_80173364(c); // 801B9688
  cmps(c,0,(int32_t)c->r[3],2); // 801B968C
  if (!crb(c,2)) { goto L_801B96A4; } // 801B9690
  c->r[3]=c->r[30]|c->r[30]; // 801B9694
  c->r[4]=c->r[31]|c->r[31]; // 801B9698
  c->lr=0x801B96A0u; f_80173484(c); // 801B969C
  goto L_801B96FC; // 801B96A0
L_801B96A4:;
  cmps(c,0,(int32_t)c->r[3],1); // 801B96A4
  if (!crb(c,2)) { goto L_801B96D8; } // 801B96A8
  c->r[3]=c->r[30]|c->r[30]; // 801B96AC
  c->r[4]=c->r[31]|c->r[31]; // 801B96B0
  c->lr=0x801B96B8u; f_801733E8(c); // 801B96B4
  c->r[3]=c->r[3]^0x80000000u; // 801B96B8
  c->r[0]=0u+0x43300000u; // 801B96BC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801B96C0
  {uint32_t ea=c->r[2]+0xFFFFB3C8u; c->f[1]=RF64(ea);} // 801B96C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B96C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B96CC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801B96D0
  goto L_801B96FC; // 801B96D4
L_801B96D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B96D8
  c->r[4]=c->r[31]|c->r[31]; // 801B96DC
  c->lr=0x801B96E4u; f_80173520(c); // 801B96E0
  cmps(c,0,(int32_t)c->r[3],0); // 801B96E4
  if (!crb(c,2)) { goto L_801B96F4; } // 801B96E8
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B96EC
  goto L_801B96FC; // 801B96F0
L_801B96F4:;
  c->lr=0x801B96F8u; f_802953A0(c); // 801B96F4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801B96F8
L_801B96FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B96FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B9700
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B9704
  c->lr=c->r[0]; // 801B9708
  c->r[1]=c->r[1]+0x00000020u; // 801B970C
  return; // 801B9710
}

// fn_801B9714
void f_801B9714(Ctx* __restrict c) {
  trace_call(0x801B9714u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9714
  c->r[0]=c->lr; // 801B9718
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B971C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B9720
  c->r[30]=c->r[3]|c->r[3]; // 801B9724
  c->r[31]=c->r[4]|c->r[4]; // 801B9728
  c->lr=0x801B9730u; f_80173364(c); // 801B972C
  cmps(c,0,(int32_t)c->r[3],1); // 801B9730
  if (!crb(c,2)) { goto L_801B9748; } // 801B9734
  c->r[3]=c->r[30]|c->r[30]; // 801B9738
  c->r[4]=c->r[31]|c->r[31]; // 801B973C
  c->lr=0x801B9744u; f_801733E8(c); // 801B9740
  goto L_801B978C; // 801B9744
L_801B9748:;
  cmps(c,0,(int32_t)c->r[3],2); // 801B9748
  if (!crb(c,2)) { goto L_801B976C; } // 801B974C
  c->r[3]=c->r[30]|c->r[30]; // 801B9750
  c->r[4]=c->r[31]|c->r[31]; // 801B9754
  c->lr=0x801B975Cu; f_80173484(c); // 801B9758
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801B975C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801B9760
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801B9764
  goto L_801B978C; // 801B9768
L_801B976C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B976C
  c->r[4]=c->r[31]|c->r[31]; // 801B9770
  c->lr=0x801B9778u; f_80173520(c); // 801B9774
  cmps(c,0,(int32_t)c->r[3],0); // 801B9778
  if (!crb(c,2)) { goto L_801B9788; } // 801B977C
  c->r[3]=0u+0x00000000u; // 801B9780
  goto L_801B978C; // 801B9784
L_801B9788:;
  c->lr=0x801B978Cu; f_80295EAC(c); // 801B9788
L_801B978C:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B978C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9790
  c->lr=c->r[0]; // 801B9794
  c->r[1]=c->r[1]+0x00000020u; // 801B9798
  return; // 801B979C
}

// fn_801B97A0
void f_801B97A0(Ctx* __restrict c) {
  trace_call(0x801B97A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B97A0
  c->r[0]=c->lr; // 801B97A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B97A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B97AC
  c->r[31]=c->r[3]|c->r[3]; // 801B97B0
  {uint32_t ea=c->r[3]+0x00001F1Cu; WF32(ea,c->f[1]);} // 801B97B4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801B97B8
  c->r[3]=c->r[1]+0x00000008u; // 801B97BC
  c->f[2]=c->f[1]; // 801B97C0
  c->f[3]=c->f[1]; // 801B97C4
  c->lr=0x801B97CCu; f_800521A0(c); // 801B97C8
  c->r[12]=R32(c->r[31]+0x000008D0u); // 801B97CC
  c->r[4]=c->r[3]|c->r[3]; // 801B97D0
  c->r[3]=c->r[31]+0x000008D0u; // 801B97D4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801B97D8
  c->ctr=c->r[12]; // 801B97DC
  if (true) { c->lr=0x801B97E4u; dispatch(c,c->ctr); } // 801B97E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B97E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B97E8
  c->lr=c->r[0]; // 801B97EC
  c->r[1]=c->r[1]+0x00000020u; // 801B97F0
  return; // 801B97F4
}

// fn_801B97F8
void f_801B97F8(Ctx* __restrict c) {
  trace_call(0x801B97F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B97F8
  c->r[0]=c->lr; // 801B97FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B9800
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801B9804
  c->r[31]=c->r[1]|c->r[1]; // 801B9808
  c->r[27]=c->r[3]|c->r[3]; // 801B980C
  c->r[28]=c->r[4]|c->r[4]; // 801B9810
  c->lr=0x801B9818u; f_8003F1D4(c); // 801B9814
  cmps(c,0,(int32_t)c->r[3],0); // 801B9818
  if (crb(c,2)) { goto L_801B9888; } // 801B981C
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 801B9820
  c->lr=0x801B9828u; f_802A6EE4(c); // 801B9824
  cmps(c,0,(int32_t)c->r[3],0); // 801B9828
  c->r[30]=c->r[3]|c->r[3]; // 801B982C
  if (crb(c,2)) { goto L_801B9888; } // 801B9830
  if (crb(c,2)) { goto L_801B9844; } // 801B9834
  W32(c->r[31]+0x00000034u,c->r[1]); // 801B9838
  c->r[4]=0u+0x00000000u; // 801B983C
  c->lr=0x801B9844u; f_801B98A4(c); // 801B9840
L_801B9844:;
  c->r[3]=c->r[30]|c->r[30]; // 801B9844
  c->r[4]=c->r[28]|c->r[28]; // 801B9848
  c->lr=0x801B9850u; f_80064DD8(c); // 801B984C
  c->r[0]=R32(c->r[28]+0x00000010u); // 801B9850
  c->r[29]=addc(c,c->r[30],0x00000014u,0); cr0(c,c->r[29]); // 801B9854
  W32(c->r[30]+0x00000010u,c->r[0]); // 801B9858
  if (crb(c,2)) { goto L_801B9870; } // 801B985C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801B9860
  c->r[3]=c->r[29]|c->r[29]; // 801B9864
  c->r[4]=c->r[30]|c->r[30]; // 801B9868
  c->lr=0x801B9870u; f_80064CE8(c); // 801B986C
L_801B9870:;
  c->r[3]=c->r[27]|c->r[27]; // 801B9870
  c->lr=0x801B9878u; f_80064CFC(c); // 801B9874
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B9878
  c->r[4]=c->r[29]|c->r[29]; // 801B987C
  c->r[3]=c->r[3]+0x00000030u; // 801B9880
  c->lr=0x801B9888u; f_8003FD14(c); // 801B9884
L_801B9888:;
  c->r[10]=c->r[31]|c->r[31]; // 801B9888
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801B988C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B9890
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B9894
  c->r[1]=c->r[10]|c->r[10]; // 801B9898
  c->lr=c->r[0]; // 801B989C
  return; // 801B98A0
}

// fn_801B98A4
void f_801B98A4(Ctx* __restrict c) {
  trace_call(0x801B98A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B98A4
  c->r[0]=c->lr; // 801B98A8
  c->r[5]=0u+0x00000000u; // 801B98AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B98B0
  c->r[0]=0u+0x00000000u; // 801B98B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B98B8
  c->r[31]=c->r[4]|c->r[4]; // 801B98BC
  c->r[4]=c->r[1]+0x00000010u; // 801B98C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B98C4
  c->r[30]=c->r[3]|c->r[3]; // 801B98C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B98CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B98D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B98D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B98D8
  c->lr=0x801B98E0u; f_80068BE0(c); // 801B98DC
  c->r[4]=0u+0x80400000u; // 801B98E0
  W32(c->r[30]+0x00000010u,c->r[31]); // 801B98E4
  c->r[4]=c->r[4]+0x000019A8u; // 801B98E8
  c->r[3]=c->r[30]|c->r[30]; // 801B98EC
  W32(c->r[30]+0x00000000u,c->r[4]); // 801B98F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B98F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B98F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B98FC
  c->lr=c->r[0]; // 801B9900
  c->r[1]=c->r[1]+0x00000020u; // 801B9904
  return; // 801B9908
}

// dtor_801B990C
void f_801B990C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B990C
  c->r[0]=c->lr; // 801B9910
  cmps(c,0,(int32_t)c->r[3],0); // 801B9914
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B991C
  c->r[31]=c->r[3]|c->r[3]; // 801B9920
  if (crb(c,2)) { goto L_801B9934; } // 801B9924
  cmps(c,0,(int32_t)c->r[4],0); // 801B9928
  if (!crb(c,1)) { goto L_801B9934; } // 801B992C
  c->lr=0x801B9934u; f_802896EC(c); // 801B9930
L_801B9934:;
  c->r[3]=c->r[31]|c->r[31]; // 801B9934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9938
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B993C
  c->lr=c->r[0]; // 801B9940
  c->r[1]=c->r[1]+0x00000010u; // 801B9944
  return; // 801B9948
}

// fn_801B994C
void f_801B994C(Ctx* __restrict c) {
  trace_call(0x801B994Cu);
  c->r[3]=0u+0x00000018u; // 801B994C
  return; // 801B9950
}

// fn_801B9954
void f_801B9954(Ctx* __restrict c) {
  trace_call(0x801B9954u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9954
  c->r[0]=c->lr; // 801B9958
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B995C
  c->r[11]=c->r[1]+0x00000040u; // 801B9960
  c->lr=0x801B9968u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9964
  {uint32_t ea=c->r[2]+0xFFFFB3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B9968
  c->r[31]=0u+0x80540000u; // 801B996C
  c->r[31]=c->r[31]+0xFFFFC740u; // 801B9970
  {uint32_t ea=c->r[2]+0xFFFFB3D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B9974
  c->f[3]=c->f[1]; // 801B9978
  c->r[3]=c->r[31]+0x00000000u; // 801B997C
  c->lr=0x801B9984u; f_8003F588(c); // 801B9980
  c->r[4]=0u+0x80400000u; // 801B9984
  c->r[0]=R32(c->r[2]+0xFFFF828Cu); // 801B9988
  c->r[4]=c->r[4]+0xFFFFECF0u; // 801B998C
  c->r[26]=R32(c->r[2]+0xFFFF8284u); // 801B9990
  W32(c->r[4]+0x00000034u,c->r[0]); // 801B9994
  W32(c->r[4]+0x00000070u,c->r[0]); // 801B9998
  W32(c->r[4]+0x000000ACu,c->r[0]); // 801B999C
  W32(c->r[4]+0x000000E8u,c->r[0]); // 801B99A0
  W32(c->r[4]+0x00000124u,c->r[0]); // 801B99A4
  W32(c->r[4]+0x00000160u,c->r[0]); // 801B99A8
  W32(c->r[4]+0x0000019Cu,c->r[26]); // 801B99AC
  W32(c->r[4]+0x000001D8u,c->r[26]); // 801B99B0
  W32(c->r[4]+0x00000214u,c->r[26]); // 801B99B4
  W32(c->r[4]+0x00000250u,c->r[26]); // 801B99B8
  W32(c->r[4]+0x0000028Cu,c->r[26]); // 801B99BC
  W32(c->r[4]+0x000002C8u,c->r[26]); // 801B99C0
  W32(c->r[4]+0x00000304u,c->r[26]); // 801B99C4
  W32(c->r[4]+0x00000340u,c->r[26]); // 801B99C8
  W32(c->r[4]+0x0000037Cu,c->r[26]); // 801B99CC
  W32(c->r[4]+0x000003B8u,c->r[26]); // 801B99D0
  W32(c->r[4]+0x000003F4u,c->r[26]); // 801B99D4
  W32(c->r[4]+0x00000430u,c->r[26]); // 801B99D8
  W32(c->r[4]+0x0000046Cu,c->r[26]); // 801B99DC
  W32(c->r[4]+0x000004A8u,c->r[26]); // 801B99E0
  W32(c->r[4]+0x000004E4u,c->r[26]); // 801B99E4
  W32(c->r[4]+0x00000520u,c->r[26]); // 801B99E8
  W32(c->r[4]+0x0000055Cu,c->r[26]); // 801B99EC
  W32(c->r[4]+0x00000598u,c->r[26]); // 801B99F0
  W32(c->r[4]+0x000005D4u,c->r[26]); // 801B99F4
  W32(c->r[4]+0x00000610u,c->r[26]); // 801B99F8
  W32(c->r[4]+0x0000064Cu,c->r[26]); // 801B99FC
  W32(c->r[4]+0x00000688u,c->r[26]); // 801B9A00
  W32(c->r[4]+0x000006C4u,c->r[26]); // 801B9A04
  W32(c->r[4]+0x00000700u,c->r[26]); // 801B9A08
  W32(c->r[4]+0x0000073Cu,c->r[26]); // 801B9A0C
  W32(c->r[4]+0x00000778u,c->r[26]); // 801B9A10
  W32(c->r[4]+0x000007B4u,c->r[26]); // 801B9A14
  W32(c->r[4]+0x000007F0u,c->r[26]); // 801B9A18
  W32(c->r[4]+0x0000082Cu,c->r[26]); // 801B9A1C
  W32(c->r[4]+0x00000868u,c->r[26]); // 801B9A20
  W32(c->r[4]+0x000008A4u,c->r[26]); // 801B9A24
  W32(c->r[4]+0x000008E0u,c->r[26]); // 801B9A28
  W32(c->r[4]+0x0000091Cu,c->r[26]); // 801B9A2C
  W32(c->r[4]+0x00000958u,c->r[26]); // 801B9A30
  W32(c->r[4]+0x00000994u,c->r[26]); // 801B9A34
  W32(c->r[4]+0x000009D0u,c->r[26]); // 801B9A38
  W32(c->r[4]+0x00000A0Cu,c->r[26]); // 801B9A3C
  W32(c->r[4]+0x00000A48u,c->r[26]); // 801B9A40
  W32(c->r[4]+0x00000A84u,c->r[26]); // 801B9A44
  W32(c->r[4]+0x00000AC0u,c->r[26]); // 801B9A48
  W32(c->r[4]+0x00000AFCu,c->r[26]); // 801B9A4C
  W32(c->r[4]+0x00000B38u,c->r[26]); // 801B9A50
  W32(c->r[4]+0x00000B74u,c->r[26]); // 801B9A54
  W32(c->r[4]+0x00000BB0u,c->r[26]); // 801B9A58
  W32(c->r[4]+0x00000BECu,c->r[26]); // 801B9A5C
  W32(c->r[4]+0x00000C28u,c->r[26]); // 801B9A60
  W32(c->r[4]+0x00000C64u,c->r[26]); // 801B9A64
  W32(c->r[4]+0x00000CA0u,c->r[26]); // 801B9A68
  W32(c->r[4]+0x00000CDCu,c->r[26]); // 801B9A6C
  W32(c->r[4]+0x00000D18u,c->r[26]); // 801B9A70
  W32(c->r[4]+0x00000D54u,c->r[26]); // 801B9A74
  W32(c->r[4]+0x00000D90u,c->r[26]); // 801B9A78
  W32(c->r[4]+0x00000DCCu,c->r[26]); // 801B9A7C
  W32(c->r[4]+0x00000E08u,c->r[26]); // 801B9A80
  W32(c->r[4]+0x00000E44u,c->r[26]); // 801B9A84
  W32(c->r[4]+0x00000E80u,c->r[26]); // 801B9A88
  W32(c->r[4]+0x00000EBCu,c->r[26]); // 801B9A8C
  W32(c->r[4]+0x00000EF8u,c->r[26]); // 801B9A90
  W32(c->r[4]+0x00000F34u,c->r[26]); // 801B9A94
  W32(c->r[4]+0x00000F70u,c->r[26]); // 801B9A98
  W32(c->r[4]+0x00000FACu,c->r[26]); // 801B9A9C
  c->r[23]=R32(c->r[2]+0xFFFF82ACu); // 801B9AA0
  c->r[25]=R32(c->r[2]+0xFFFF82C4u); // 801B9AA4
  c->r[24]=R32(c->r[2]+0xFFFF82C0u); // 801B9AA8
  c->r[27]=R32(c->r[2]+0xFFFF8294u); // 801B9AAC
  c->r[28]=R32(c->r[2]+0xFFFF829Cu); // 801B9AB0
  c->r[30]=R32(c->r[2]+0xFFFF8288u); // 801B9AB4
  c->r[29]=R32(c->r[2]+0xFFFF8290u); // 801B9AB8
  c->r[12]=R32(c->r[2]+0xFFFF82DCu); // 801B9ABC
  c->r[11]=R32(c->r[2]+0xFFFF82E0u); // 801B9AC0
  c->r[10]=R32(c->r[2]+0xFFFF82B4u); // 801B9AC4
  c->r[9]=R32(c->r[2]+0xFFFF82B0u); // 801B9AC8
  c->r[8]=R32(c->r[2]+0xFFFF82B8u); // 801B9ACC
  c->r[7]=R32(c->r[2]+0xFFFF82BCu); // 801B9AD0
  c->r[6]=R32(c->r[2]+0xFFFF82A4u); // 801B9AD4
  c->r[5]=R32(c->r[2]+0xFFFF82A0u); // 801B9AD8
  c->r[3]=R32(c->r[2]+0xFFFF82A8u); // 801B9ADC
  c->r[0]=R32(c->r[2]+0xFFFF8298u); // 801B9AE0
  W32(c->r[4]+0x00000FE8u,c->r[26]); // 801B9AE4
  W32(c->r[4]+0x00001024u,c->r[26]); // 801B9AE8
  W32(c->r[4]+0x00001060u,c->r[26]); // 801B9AEC
  W32(c->r[4]+0x0000109Cu,c->r[26]); // 801B9AF0
  W32(c->r[4]+0x000010D8u,c->r[26]); // 801B9AF4
  W32(c->r[4]+0x00001114u,c->r[26]); // 801B9AF8
  W32(c->r[4]+0x00001150u,c->r[26]); // 801B9AFC
  W32(c->r[4]+0x0000118Cu,c->r[26]); // 801B9B00
  W32(c->r[4]+0x000011C8u,c->r[26]); // 801B9B04
  W32(c->r[4]+0x00001204u,c->r[26]); // 801B9B08
  W32(c->r[4]+0x00001240u,c->r[26]); // 801B9B0C
  W32(c->r[4]+0x0000127Cu,c->r[26]); // 801B9B10
  W32(c->r[4]+0x000012B8u,c->r[26]); // 801B9B14
  W32(c->r[4]+0x000012F4u,c->r[26]); // 801B9B18
  W32(c->r[4]+0x00001330u,c->r[26]); // 801B9B1C
  W32(c->r[4]+0x0000136Cu,c->r[26]); // 801B9B20
  W32(c->r[4]+0x000013A8u,c->r[26]); // 801B9B24
  W32(c->r[4]+0x000013E4u,c->r[26]); // 801B9B28
  W32(c->r[4]+0x00001420u,c->r[26]); // 801B9B2C
  W32(c->r[4]+0x0000145Cu,c->r[26]); // 801B9B30
  W32(c->r[4]+0x00001498u,c->r[26]); // 801B9B34
  W32(c->r[4]+0x000014D4u,c->r[26]); // 801B9B38
  W32(c->r[4]+0x00001510u,c->r[26]); // 801B9B3C
  W32(c->r[4]+0x0000154Cu,c->r[26]); // 801B9B40
  W32(c->r[4]+0x00001588u,c->r[26]); // 801B9B44
  W32(c->r[4]+0x000015C4u,c->r[26]); // 801B9B48
  W32(c->r[4]+0x00001600u,c->r[26]); // 801B9B4C
  W32(c->r[4]+0x0000163Cu,c->r[26]); // 801B9B50
  W32(c->r[4]+0x00001678u,c->r[26]); // 801B9B54
  W32(c->r[4]+0x000016B4u,c->r[26]); // 801B9B58
  W32(c->r[4]+0x000016F0u,c->r[26]); // 801B9B5C
  W32(c->r[4]+0x0000172Cu,c->r[26]); // 801B9B60
  W32(c->r[4]+0x00001768u,c->r[26]); // 801B9B64
  W32(c->r[4]+0x000017A4u,c->r[26]); // 801B9B68
  W32(c->r[4]+0x000017E0u,c->r[26]); // 801B9B6C
  W32(c->r[4]+0x0000181Cu,c->r[26]); // 801B9B70
  W32(c->r[4]+0x00001858u,c->r[26]); // 801B9B74
  W32(c->r[4]+0x00001894u,c->r[26]); // 801B9B78
  W32(c->r[4]+0x000018D0u,c->r[26]); // 801B9B7C
  W32(c->r[4]+0x0000190Cu,c->r[26]); // 801B9B80
  W32(c->r[4]+0x00001948u,c->r[26]); // 801B9B84
  W32(c->r[4]+0x00001984u,c->r[27]); // 801B9B88
  W32(c->r[4]+0x000019C0u,c->r[25]); // 801B9B8C
  W32(c->r[4]+0x000019FCu,c->r[25]); // 801B9B90
  W32(c->r[4]+0x00001A38u,c->r[28]); // 801B9B94
  W32(c->r[4]+0x00001A74u,c->r[24]); // 801B9B98
  W32(c->r[4]+0x00001AB0u,c->r[24]); // 801B9B9C
  W32(c->r[4]+0x00001AECu,c->r[30]); // 801B9BA0
  W32(c->r[4]+0x00001B28u,c->r[29]); // 801B9BA4
  W32(c->r[4]+0x00001B64u,c->r[23]); // 801B9BA8
  W32(c->r[4]+0x00001BA0u,c->r[23]); // 801B9BAC
  W32(c->r[4]+0x00001BDCu,c->r[23]); // 801B9BB0
  W32(c->r[4]+0x00001C18u,c->r[12]); // 801B9BB4
  W32(c->r[4]+0x00001C54u,c->r[11]); // 801B9BB8
  W32(c->r[4]+0x00001C90u,c->r[10]); // 801B9BBC
  W32(c->r[4]+0x00001CCCu,c->r[9]); // 801B9BC0
  W32(c->r[4]+0x00001D08u,c->r[8]); // 801B9BC4
  W32(c->r[4]+0x00001D44u,c->r[7]); // 801B9BC8
  W32(c->r[4]+0x00001D80u,c->r[6]); // 801B9BCC
  W32(c->r[4]+0x00001DBCu,c->r[5]); // 801B9BD0
  W32(c->r[4]+0x00001DF8u,c->r[3]); // 801B9BD4
  W32(c->r[4]+0x00001E34u,c->r[0]); // 801B9BD8
  c->r[25]=R32(c->r[2]+0xFFFF8304u); // 801B9BDC
  c->r[3]=c->r[31]+0x00000048u; // 801B9BE0
  c->r[27]=R32(c->r[2]+0xFFFF8314u); // 801B9BE4
  c->r[23]=R32(c->r[2]+0xFFFF82D0u); // 801B9BE8
  c->r[22]=R32(c->r[2]+0xFFFF82FCu); // 801B9BEC
  c->r[24]=R32(c->r[2]+0xFFFF82F8u); // 801B9BF0
  c->r[21]=R32(c->r[2]+0xFFFF82E8u); // 801B9BF4
  c->r[26]=R32(c->r[2]+0xFFFF8318u); // 801B9BF8
  c->r[28]=R32(c->r[2]+0xFFFF830Cu); // 801B9BFC
  c->r[29]=R32(c->r[2]+0xFFFF82D4u); // 801B9C00
  c->r[30]=R32(c->r[2]+0xFFFF82C8u); // 801B9C04
  c->r[12]=R32(c->r[2]+0xFFFF8300u); // 801B9C08
  c->r[11]=R32(c->r[2]+0xFFFF82ECu); // 801B9C0C
  c->r[10]=R32(c->r[2]+0xFFFF82F0u); // 801B9C10
  c->r[9]=R32(c->r[2]+0xFFFF8308u); // 801B9C14
  c->r[8]=R32(c->r[2]+0xFFFF82F4u); // 801B9C18
  c->r[7]=R32(c->r[2]+0xFFFF8310u); // 801B9C1C
  c->r[6]=R32(c->r[2]+0xFFFF82CCu); // 801B9C20
  c->r[5]=R32(c->r[2]+0xFFFF82D8u); // 801B9C24
  c->r[0]=R32(c->r[2]+0xFFFF82E4u); // 801B9C28
  W32(c->r[4]+0x00001E70u,c->r[23]); // 801B9C2C
  W32(c->r[4]+0x00001EACu,c->r[23]); // 801B9C30
  W32(c->r[4]+0x00001EE8u,c->r[29]); // 801B9C34
  W32(c->r[4]+0x00001F24u,c->r[22]); // 801B9C38
  W32(c->r[4]+0x00001F60u,c->r[24]); // 801B9C3C
  W32(c->r[4]+0x00001F9Cu,c->r[24]); // 801B9C40
  W32(c->r[4]+0x00001FD8u,c->r[30]); // 801B9C44
  W32(c->r[4]+0x00002014u,c->r[21]); // 801B9C48
  W32(c->r[4]+0x00002050u,c->r[25]); // 801B9C4C
  W32(c->r[4]+0x0000208Cu,c->r[25]); // 801B9C50
  W32(c->r[4]+0x000020C8u,c->r[25]); // 801B9C54
  W32(c->r[4]+0x00002104u,c->r[12]); // 801B9C58
  W32(c->r[4]+0x0000217Cu,c->r[11]); // 801B9C5C
  W32(c->r[4]+0x000021B8u,c->r[10]); // 801B9C60
  W32(c->r[4]+0x000021F4u,c->r[9]); // 801B9C64
  W32(c->r[4]+0x00002230u,c->r[26]); // 801B9C68
  W32(c->r[4]+0x0000226Cu,c->r[26]); // 801B9C6C
  W32(c->r[4]+0x000022A8u,c->r[8]); // 801B9C70
  W32(c->r[4]+0x000022E4u,c->r[27]); // 801B9C74
  W32(c->r[4]+0x00002320u,c->r[27]); // 801B9C78
  W32(c->r[4]+0x0000235Cu,c->r[27]); // 801B9C7C
  W32(c->r[4]+0x00002398u,c->r[28]); // 801B9C80
  W32(c->r[4]+0x000023D4u,c->r[28]); // 801B9C84
  W32(c->r[4]+0x00002410u,c->r[7]); // 801B9C88
  W32(c->r[4]+0x00002500u,c->r[6]); // 801B9C8C
  W32(c->r[4]+0x0000253Cu,c->r[5]); // 801B9C90
  W32(c->r[4]+0x00002578u,c->r[22]); // 801B9C94
  W32(c->r[4]+0x000025B4u,c->r[0]); // 801B9C98
  W32(c->r[4]+0x000025F0u,c->r[21]); // 801B9C9C
  c->lr=0x801B9CA4u; f_801B9578(c); // 801B9CA0
  c->r[4]=0u+0x801C0000u; // 801B9CA4
  c->r[3]=c->r[31]+0x00000048u; // 801B9CA8
  c->r[4]=c->r[4]+0xFFFF95E4u; // 801B9CAC
  c->r[5]=c->r[31]+0x0000003Cu; // 801B9CB0
  c->lr=0x801B9CB8u; f_802895A4(c); // 801B9CB4
  c->r[11]=c->r[1]+0x00000040u; // 801B9CB8
  c->lr=0x801B9CC0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9CBC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B9CC0
  c->lr=c->r[0]; // 801B9CC4
  c->r[1]=c->r[1]+0x00000040u; // 801B9CC8
  return; // 801B9CCC
}

// fn_801B9CD0
void f_801B9CD0(Ctx* __restrict c) {
  trace_call(0x801B9CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9CD0
  c->r[0]=c->lr; // 801B9CD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9CD8
  c->r[0]=0u+0x00000000u; // 801B9CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9CE0
  c->r[31]=c->r[3]|c->r[3]; // 801B9CE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B9CE8
  c->r[3]=c->r[3]+0x00000008u; // 801B9CEC
  c->lr=0x801B9CF4u; f_80055FDC(c); // 801B9CF0
  c->r[3]=c->r[31]|c->r[31]; // 801B9CF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9CF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9CFC
  c->lr=c->r[0]; // 801B9D00
  c->r[1]=c->r[1]+0x00000010u; // 801B9D04
  return; // 801B9D08
}

// fn_801B9D0C
void f_801B9D0C(Ctx* __restrict c) {
  trace_call(0x801B9D0Cu);
  c->r[5]=0u+0x00000020u; // 801B9D0C
  f_80235294(c); return; // 801B9D10
}

// fn_801B9D14
void f_801B9D14(Ctx* __restrict c) {
  trace_call(0x801B9D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9D14
  c->r[0]=c->lr; // 801B9D18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9D1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9D20
  c->r[31]=c->r[3]|c->r[3]; // 801B9D24
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B9D28
  c->r[4]=c->r[5]|c->r[5]; // 801B9D2C
  c->r[3]=c->r[3]+0x00000008u; // 801B9D30
  c->lr=0x801B9D38u; f_80056020(c); // 801B9D34
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B9D38
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801B9D3C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B9D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9D44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9D48
  c->lr=c->r[0]; // 801B9D4C
  c->r[1]=c->r[1]+0x00000010u; // 801B9D50
  return; // 801B9D54
}

// fn_801B9D58
void f_801B9D58(Ctx* __restrict c) {
  trace_call(0x801B9D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9D58
  c->r[0]=c->lr; // 801B9D5C
  c->r[4]=0u+0x00000000u; // 801B9D60
  c->r[5]=0u+0x00000000u; // 801B9D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9D68
  c->r[0]=0u+0x00000000u; // 801B9D6C
  c->r[6]=0u+0x00000000u; // 801B9D70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9D74
  c->r[31]=c->r[3]|c->r[3]; // 801B9D78
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B9D7C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B9D80
  W32(c->r[3]+0x00000008u,c->r[0]); // 801B9D84
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B9D88
  c->r[3]=0u+0x00000470u; // 801B9D8C
  c->lr=0x801B9D94u; f_80137AA0(c); // 801B9D90
  c->r[4]=0u+0x801C0000u; // 801B9D94
  c->r[5]=0u+0x00000000u; // 801B9D98
  c->r[4]=c->r[4]+0xFFFF9CD0u; // 801B9D9C
  c->r[6]=0u+0x00000020u; // 801B9DA0
  c->r[7]=0u+0x00000023u; // 801B9DA4
  c->lr=0x801B9DACu; f_80289974(c); // 801B9DA8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B9DAC
  W32(c->r[31]+0x00000008u,c->r[3]); // 801B9DB0
  cmps(c,0,(int32_t)c->r[0],35); // 801B9DB4
  if (!crb(c,1)) { goto L_801B9DC4; } // 801B9DB8
  c->r[0]=0u+0x00000023u; // 801B9DBC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B9DC0
L_801B9DC4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B9DC4
  cmps(c,0,(int32_t)c->r[0],0); // 801B9DC8
  if (crb(c,2)) { goto L_801B9DE0; } // 801B9DCC
  c->r[3]=R32(c->r[31]+0x00000008u); // 801B9DD0
  c->r[5]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B9DD4
  c->r[4]=0u+0x00000000u; // 801B9DD8
  c->lr=0x801B9DE0u; f_80235294(c); // 801B9DDC
L_801B9DE0:;
  c->r[0]=0u+0x00000023u; // 801B9DE0
  c->r[3]=c->r[31]|c->r[31]; // 801B9DE4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B9DE8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B9DEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9DF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9DF4
  c->lr=c->r[0]; // 801B9DF8
  c->r[1]=c->r[1]+0x00000010u; // 801B9DFC
  return; // 801B9E00
}

// fn_801B9E04
void f_801B9E04(Ctx* __restrict c) {
  trace_call(0x801B9E04u);
  c->r[0]=0u+0x00000000u; // 801B9E04
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B9E08
  return; // 801B9E0C
}

// fn_801B9E10
void f_801B9E10(Ctx* __restrict c) {
  trace_call(0x801B9E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9E10
  c->r[0]=c->lr; // 801B9E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9E18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9E1C
  c->r[31]=c->r[3]|c->r[3]; // 801B9E20
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801B9E24
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B9E28
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801B9E2C
  if (!crb(c,0)) { goto L_801B9E54; } // 801B9E30
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B9E34
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B9E38
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B9E3C
  c->r[3]=c->r[3]+c->r[0]; // 801B9E40
  c->lr=0x801B9E48u; f_801B9D0C(c); // 801B9E44
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801B9E48
  c->r[0]=c->r[3]+0x00000001u; // 801B9E4C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B9E50
L_801B9E54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9E54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9E58
  c->lr=c->r[0]; // 801B9E5C
  c->r[1]=c->r[1]+0x00000010u; // 801B9E60
  return; // 801B9E64
}

// dtor_801B9E68
void f_801B9E68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9E68
  c->r[0]=c->lr; // 801B9E6C
  cmps(c,0,(int32_t)c->r[3],0); // 801B9E70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9E74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9E78
  c->r[31]=c->r[3]|c->r[3]; // 801B9E7C
  if (crb(c,2)) { goto L_801B9EB4; } // 801B9E80
  c->r[0]=R32(c->r[3]+0x00000008u); // 801B9E84
  cmps(c,0,(int32_t)c->r[0],0); // 801B9E88
  if (crb(c,2)) { goto L_801B9E98; } // 801B9E8C
  c->r[0]=0u+0x00000000u; // 801B9E90
  W32(c->r[3]+0x00000008u,c->r[0]); // 801B9E94
L_801B9E98:;
  c->r[0]=0u+0x00000000u; // 801B9E98
  cmps(c,0,(int32_t)c->r[4],0); // 801B9E9C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B9EA0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B9EA4
  if (!crb(c,1)) { goto L_801B9EB4; } // 801B9EA8
  c->r[3]=c->r[31]|c->r[31]; // 801B9EAC
  c->lr=0x801B9EB4u; f_802896EC(c); // 801B9EB0
L_801B9EB4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B9EB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9EB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9EBC
  c->lr=c->r[0]; // 801B9EC0
  c->r[1]=c->r[1]+0x00000010u; // 801B9EC4
  return; // 801B9EC8
}

// fn_801B9ECC
void f_801B9ECC(Ctx* __restrict c) {
  trace_call(0x801B9ECCu);
  {uint32_t ea=c->r[3]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B9ECC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B9ED0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B9ED4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801B9ED8
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 801B9EDC
  fcmp(c,1,c->f[1],c->f[3]); // 801B9EE0
  if (!crb(c,4)) { goto L_801B9F3C; } // 801B9EE4
  fcmp(c,0,c->f[3],c->f[4]); // 801B9EE8
  if (!crb(c,1)) { goto L_801B9F24; } // 801B9EEC
  fcmp(c,0,c->f[1],c->f[4]); // 801B9EF0
  if (!crb(c,0)) { goto L_801B9F00; } // 801B9EF4
  c->f[1]=c->f[4]; // 801B9EF8
  goto L_801B9F08; // 801B9EFC
L_801B9F00:;
  if (!crb(c,5)) { goto L_801B9F08; } // 801B9F00
  c->f[1]=c->f[3]; // 801B9F04
L_801B9F08:;
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[4]); // 801B9F08
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B9F0C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 801B9F10
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801B9F14
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801B9F18
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 801B9F1C
  goto L_801B9F28; // 801B9F20
L_801B9F24:;
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B9F24
L_801B9F28:;
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B9F28
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B9F2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801B9F30
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[0],c->f[1])); // 801B9F34
  return; // 801B9F38
L_801B9F3C:;
  fcmp(c,1,c->f[1],c->f[5]); // 801B9F3C
  if (!crb(c,5)) { goto L_801B9F98; } // 801B9F40
  fcmp(c,0,c->f[2],c->f[5]); // 801B9F44
  if (!crb(c,1)) { goto L_801B9F80; } // 801B9F48
  if (!crb(c,4)) { goto L_801B9F58; } // 801B9F4C
  c->f[1]=c->f[5]; // 801B9F50
  goto L_801B9F64; // 801B9F54
L_801B9F58:;
  fcmp(c,0,c->f[1],c->f[2]); // 801B9F58
  if (!crb(c,1)) { goto L_801B9F64; } // 801B9F5C
  c->f[1]=c->f[2]; // 801B9F60
L_801B9F64:;
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 801B9F64
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B9F68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 801B9F6C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801B9F70
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801B9F74
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 801B9F78
  goto L_801B9F84; // 801B9F7C
L_801B9F80:;
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B9F80
L_801B9F84:;
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B9F84
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B9F88
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801B9F8C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[0],c->f[1])); // 801B9F90
  return; // 801B9F94
L_801B9F98:;
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B9F98
  return; // 801B9F9C
}

// fn_801B9FA0
void f_801B9FA0(Ctx* __restrict c) {
  trace_call(0x801B9FA0u);
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[8]=c->ps1[8]=RF32(ea);} // 801B9FA0
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[7]=c->ps1[7]=RF32(ea);} // 801B9FA4
  {uint32_t ea=c->r[2]+0xFFFFB628u; c->f[6]=c->ps1[6]=RF32(ea);} // 801B9FA8
  {uint32_t ea=c->r[2]+0xFFFFB62Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801B9FAC
  {uint32_t ea=c->r[2]+0xFFFFB630u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B9FB0
  {uint32_t ea=c->r[2]+0xFFFFB634u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B9FB4
  {uint32_t ea=c->r[2]+0xFFFFB638u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B9FB8
  {uint32_t ea=c->r[2]+0xFFFFB63Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801B9FBC
  {uint32_t ea=c->r[2]+0xFFFFB640u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B9FC0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 801B9FC4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 801B9FC8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 801B9FCC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[8]);} // 801B9FD0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[7]);} // 801B9FD4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[6]);} // 801B9FD8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 801B9FDC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 801B9FE0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 801B9FE4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 801B9FE8
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 801B9FEC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[8]);} // 801B9FF0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[7]);} // 801B9FF4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[8]);} // 801B9FF8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[7]);} // 801B9FFC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801BA000
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[8]);} // 801BA004
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[7]);} // 801BA008
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[8]);} // 801BA00C
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[7]);} // 801BA010
  return; // 801BA014
}

// fn_801BA018
void f_801BA018(Ctx* __restrict c) {
  trace_call(0x801BA018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA018
  c->r[0]=c->lr; // 801BA01C
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BA020
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA024
  fcmp(c,0,c->f[1],c->f[2]); // 801BA028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA02C
  c->r[31]=c->r[5]|c->r[5]; // 801BA030
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BA034
  c->r[30]=c->r[4]|c->r[4]; // 801BA038
  if (!crb(c,1)) { goto L_801BA058; } // 801BA03C
  {uint32_t ea=c->r[2]+0xFFFFB644u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA040
  c->r[3]=c->r[3]+0x0000003Cu; // 801BA044
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[2]); // 801BA048
  c->lr=0x801BA050u; f_801B9ECC(c); // 801BA04C
  c->r[0]=0u+0x00000003u; // 801BA050
  goto L_801BA0A0; // 801BA054
L_801BA058:;
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BA058
  fcmp(c,0,c->f[1],c->f[3]); // 801BA05C
  if (!crb(c,1)) { goto L_801BA074; } // 801BA060
  c->r[3]=c->r[3]+0x00000028u; // 801BA064
  c->lr=0x801BA06Cu; f_801B9ECC(c); // 801BA068
  c->r[0]=0u+0x00000002u; // 801BA06C
  goto L_801BA0A0; // 801BA070
L_801BA074:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA074
  fcmp(c,0,c->f[1],c->f[0]); // 801BA078
  if (!crb(c,1)) { goto L_801BA094; } // 801BA07C
  c->f[2]=c->f[3]; // 801BA080
  c->r[3]=c->r[3]+0x00000014u; // 801BA084
  c->lr=0x801BA08Cu; f_801B9ECC(c); // 801BA088
  c->r[0]=0u+0x00000001u; // 801BA08C
  goto L_801BA0A0; // 801BA090
L_801BA094:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BA094
  c->lr=0x801BA09Cu; f_801B9ECC(c); // 801BA098
  c->r[0]=0u+0x00000000u; // 801BA09C
L_801BA0A0:;
  W32(c->r[30]+0x00000000u,c->r[0]); // 801BA0A0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 801BA0A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA0A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BA0AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA0B0
  c->lr=c->r[0]; // 801BA0B4
  c->r[1]=c->r[1]+0x00000010u; // 801BA0B8
  return; // 801BA0BC
}

// fn_801BA0C0
void f_801BA0C0(Ctx* __restrict c) {
  trace_call(0x801BA0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA0C0
  c->r[0]=c->lr; // 801BA0C4
  c->r[4]=0u+0x801C0000u; // 801BA0C8
  c->r[5]=0u+0x801C0000u; // 801BA0CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA0D0
  c->r[4]=c->r[4]+0xFFFFB028u; // 801BA0D4
  c->r[5]=c->r[5]+0xFFFFB078u; // 801BA0D8
  c->r[6]=0u+0x00000028u; // 801BA0DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA0E0
  c->r[7]=0u+0x00000010u; // 801BA0E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA0E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA0EC
  c->r[29]=c->r[3]|c->r[3]; // 801BA0F0
  c->r[3]=c->r[3]+0x00000018u; // 801BA0F4
  c->lr=0x801BA0FCu; f_80289B34(c); // 801BA0F8
  c->r[31]=0u+0x00000000u; // 801BA0FC
  c->r[4]=c->r[29]+0x0000029Cu; // 801BA100
  W32(c->r[29]+0x0000029Cu,c->r[31]); // 801BA104
  c->r[5]=c->r[29]+0x000002A8u; // 801BA108
  c->r[3]=c->r[29]+0x000002B0u; // 801BA10C
  W32(c->r[29]+0x000002A0u,c->r[31]); // 801BA110
  W32(c->r[29]+0x000002A8u,c->r[31]); // 801BA114
  W32(c->r[29]+0x000002ACu,c->r[31]); // 801BA118
  W32(c->r[29]+0x00000298u,c->r[31]); // 801BA11C
  W32(c->r[29]+0x0000029Cu,c->r[4]); // 801BA120
  W32(c->r[29]+0x000002A0u,c->r[4]); // 801BA124
  W32(c->r[29]+0x000002A4u,c->r[31]); // 801BA128
  W32(c->r[29]+0x000002A8u,c->r[5]); // 801BA12C
  W32(c->r[29]+0x000002ACu,c->r[5]); // 801BA130
  c->lr=0x801BA138u; f_801B0DC0(c); // 801BA134
  c->r[3]=c->r[29]+0x00000E24u; // 801BA138
  c->lr=0x801BA140u; f_801B9FA0(c); // 801BA13C
  c->r[30]=c->r[29]+0x00000E74u; // 801BA140
  c->r[3]=c->r[30]|c->r[30]; // 801BA144
  c->lr=0x801BA14Cu; f_80161D5C(c); // 801BA148
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA14C
  c->r[3]=0u+0x803F0000u; // 801BA150
  c->r[0]=0u+0xFFFFFFFFu; // 801BA154
  c->r[9]=0u+0x803F0000u; // 801BA158
  c->r[8]=0u+0x80400000u; // 801BA15C
  c->r[7]=0u+0x803F0000u; // 801BA160
  c->r[6]=0u+0x80170000u; // 801BA164
  c->r[3]=c->r[3]+0x000030C8u; // 801BA168
  c->r[9]=c->r[9]+0x000030ACu; // 801BA16C
  c->r[8]=c->r[8]+0x00001AC0u; // 801BA170
  c->r[7]=c->r[7]+0x0000308Cu; // 801BA174
  c->r[6]=c->r[6]+0xFFFFD24Cu; // 801BA178
  W32(c->r[30]+0x00000038u,c->r[3]); // 801BA17C
  c->r[10]=c->r[30]+0x00000058u; // 801BA180
  c->r[3]=c->r[29]+0x00000F04u; // 801BA184
  c->r[4]=0u+0x00000000u; // 801BA188
  W32(c->r[30]+0x00000048u,c->r[31]); // 801BA18C
  c->r[5]=0u+0x00000200u; // 801BA190
  W32(c->r[30]+0x0000003Cu,c->r[31]); // 801BA194
  W32(c->r[30]+0x00000040u,c->r[9]); // 801BA198
  W32(c->r[30]+0x0000004Cu,c->r[31]); // 801BA19C
  W32(c->r[30]+0x00000050u,c->r[31]); // 801BA1A0
  W32(c->r[30]+0x00000054u,c->r[31]); // 801BA1A4
  W32(c->r[30]+0x00000044u,c->r[31]); // 801BA1A8
  W32(c->r[30]+0x0000000Cu,c->r[8]); // 801BA1AC
  W32(c->r[30]+0x00000084u,c->r[7]); // 801BA1B0
  W32(c->r[30]+0x00000058u,c->r[0]); // 801BA1B4
  W8(c->r[30]+0x0000005Cu,c->r[31]); // 801BA1B8
  W32(c->r[30]+0x00000060u,c->r[0]); // 801BA1BC
  W8(c->r[30]+0x00000064u,c->r[31]); // 801BA1C0
  W32(c->r[30]+0x00000068u,c->r[0]); // 801BA1C4
  W8(c->r[30]+0x0000006Cu,c->r[31]); // 801BA1C8
  W32(c->r[30]+0x00000070u,c->r[0]); // 801BA1CC
  W8(c->r[30]+0x00000074u,c->r[31]); // 801BA1D0
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 801BA1D4
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[0]);} // 801BA1D8
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 801BA1DC
  W32(c->r[30]+0x00000034u,c->r[6]); // 801BA1E0
  W32(c->r[30]+0x00000048u,c->r[10]); // 801BA1E4
  W32(c->r[29]+0x00000EFCu,c->r[31]); // 801BA1E8
  {uint32_t ea=c->r[29]+0x00000F00u; WF32(ea,c->f[0]);} // 801BA1EC
  c->lr=0x801BA1F4u; f_800043EC(c); // 801BA1F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA1F4
  c->r[3]=c->r[29]|c->r[29]; // 801BA1F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA1FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BA200
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA204
  c->lr=c->r[0]; // 801BA208
  c->r[1]=c->r[1]+0x00000020u; // 801BA20C
  return; // 801BA210
}

// fn_801BA214
void f_801BA214(Ctx* __restrict c) {
  trace_call(0x801BA214u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA214
  c->r[0]=c->lr; // 801BA218
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA21C
  c->r[0]=0u+0x00000000u; // 801BA220
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA224
  c->r[31]=c->r[3]|c->r[3]; // 801BA228
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA22C
  c->r[30]=0u+0x00000000u; // 801BA230
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA234
  c->r[29]=c->r[3]+0x00000018u; // 801BA238
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BA23C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BA240
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BA244
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BA248
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BA24C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801BA250
  W32(c->r[3]+0x00000014u,c->r[0]); // 801BA254
  W32(c->r[3]+0x00000018u,c->r[0]); // 801BA258
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801BA25C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801BA260
  W32(c->r[3]+0x00000024u,c->r[0]); // 801BA264
  W32(c->r[3]+0x00000028u,c->r[0]); // 801BA268
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801BA26C
  W32(c->r[3]+0x00000030u,c->r[0]); // 801BA270
  W32(c->r[3]+0x00000034u,c->r[0]); // 801BA274
  W32(c->r[3]+0x00000038u,c->r[0]); // 801BA278
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801BA27C
L_801BA280:;
  c->r[3]=c->r[29]+0x0000000Cu; // 801BA280
  c->r[4]=0u+0x00000000u; // 801BA284
  c->r[5]=0u+0x00000004u; // 801BA288
  c->lr=0x801BA290u; f_800043EC(c); // 801BA28C
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BA290
  c->r[3]=c->r[29]+0x00000010u; // 801BA294
  {uint32_t ea=c->r[2]+0xFFFFB648u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BA298
  c->r[4]=0u+0x00000002u; // 801BA29C
  c->f[2]=c->f[1]; // 801BA2A0
  c->lr=0x801BA2A8u; f_80123768(c); // 801BA2A4
  c->r[30]=c->r[30]+0x00000001u; // 801BA2A8
  c->r[29]=c->r[29]+0x00000028u; // 801BA2AC
  cmpu(c,0,c->r[30],0x00000010u); // 801BA2B0
  if (crb(c,0)) { IRQCHK(c); goto L_801BA280; } // 801BA2B4
  c->r[3]=c->r[31]+0x00000298u; // 801BA2B8
  c->lr=0x801BA2C0u; f_803B5070(c); // 801BA2BC
  c->r[3]=c->r[31]+0x000002A4u; // 801BA2C0
  c->lr=0x801BA2C8u; f_803B5070(c); // 801BA2C4
  c->r[30]=c->r[31]+0x0000029Cu; // 801BA2C8
  c->r[29]=c->r[31]+0x00000018u; // 801BA2CC
  c->r[28]=0u+0x00000000u; // 801BA2D0
L_801BA2D4:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BA2D4
  c->r[5]=c->r[29]|c->r[29]; // 801BA2D8
  c->r[3]=c->r[31]+0x00000298u; // 801BA2DC
  c->r[4]=c->r[1]+0x00000008u; // 801BA2E0
  c->lr=0x801BA2E8u; f_803B50B4(c); // 801BA2E4
  c->r[28]=c->r[28]+0x00000001u; // 801BA2E8
  c->r[29]=c->r[29]+0x00000028u; // 801BA2EC
  cmpu(c,0,c->r[28],0x00000010u); // 801BA2F0
  if (crb(c,0)) { IRQCHK(c); goto L_801BA2D4; } // 801BA2F4
  c->r[3]=c->r[31]+0x00000DF0u; // 801BA2F8
  c->lr=0x801BA300u; f_800A0740(c); // 801BA2FC
  c->r[3]=c->r[31]+0x000002B0u; // 801BA300
  c->lr=0x801BA308u; f_801B0ECC(c); // 801BA304
  c->r[0]=0u+0x00000000u; // 801BA308
  W32(c->r[31]+0x00000E1Cu,c->r[0]); // 801BA30C
  W32(c->r[31]+0x00000E20u,c->r[0]); // 801BA310
  c->lr=0x801BA318u; f_8016D208(c); // 801BA314
  c->r[0]=c->r[3]+0x00000004u; // 801BA318
  c->r[5]=0u+0x00000200u; // 801BA31C
  c->r[4]=divwu(c->r[5],c->r[0]); // 801BA320
  c->r[3]=c->r[31]+0x00000F04u; // 801BA324
  W32(c->r[31]+0x00000E98u,c->r[3]); // 801BA328
  c->r[3]=0u+0x00000000u; // 801BA32C
  W32(c->r[31]+0x00000E9Cu,c->r[5]); // 801BA330
  W32(c->r[31]+0x00000EA0u,c->r[0]); // 801BA334
  cmps(c,1,(int32_t)c->r[4],0); // 801BA338
  if (!crb(c,5)) { goto L_801BA494; } // 801BA33C
  cmps(c,0,(int32_t)c->r[4],8); // 801BA340
  c->r[6]=c->r[4]+0xFFFFFFF8u; // 801BA344
  if (!crb(c,1)) { goto L_801BA464; } // 801BA348
  c->r[7]=0u+0x00000000u; // 801BA34C
  if (crb(c,4)) { goto L_801BA368; } // 801BA350
  c->r[5]=0u+0x80000000u; // 801BA354
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 801BA358
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BA35C
  if (crb(c,1)) { goto L_801BA368; } // 801BA360
  c->r[7]=0u+0x00000001u; // 801BA364
L_801BA368:;
  cmps(c,0,(int32_t)c->r[7],0); // 801BA368
  if (crb(c,2)) { goto L_801BA464; } // 801BA36C
  c->r[0]=c->r[6]+0x00000007u; // 801BA370
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801BA374
  c->ctr=c->r[0]; // 801BA378
  cmps(c,0,(int32_t)c->r[6],0); // 801BA37C
  if (!crb(c,1)) { goto L_801BA464; } // 801BA380
L_801BA384:;
  c->r[0]=R32(c->r[31]+0x00000EA0u); // 801BA384
  c->r[10]=c->r[3]+0x00000001u; // 801BA388
  c->r[11]=R32(c->r[31]+0x00000EA4u); // 801BA38C
  c->r[9]=c->r[3]+0x00000002u; // 801BA390
  c->r[12]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801BA394
  c->r[8]=c->r[3]+0x00000003u; // 801BA398
  c->r[7]=c->r[3]+0x00000004u; // 801BA39C
  c->r[6]=c->r[3]+0x00000005u; // 801BA3A0
  c->r[5]=c->r[3]+0x00000006u; // 801BA3A4
  c->r[0]=c->r[3]+0x00000007u; // 801BA3A8
  c->r[12]=c->r[31]+c->r[12]; // 801BA3AC
  {uint32_t ea=c->r[12]+0x00000F04u; W32(ea,c->r[11]); c->r[12]=ea;} // 801BA3B0
  c->r[3]=c->r[3]+0x00000008u; // 801BA3B4
  c->r[11]=R32(c->r[31]+0x00000EA0u); // 801BA3B8
  W32(c->r[31]+0x00000EA4u,c->r[12]); // 801BA3BC
  c->r[10]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[10]); // 801BA3C0
  c->r[10]=c->r[31]+c->r[10]; // 801BA3C4
  W32(c->r[10]+0x00000F04u,c->r[12]); // 801BA3C8
  c->r[11]=c->r[10]+0x00000F04u; // 801BA3CC
  c->r[10]=R32(c->r[31]+0x00000EA0u); // 801BA3D0
  W32(c->r[31]+0x00000EA4u,c->r[11]); // 801BA3D4
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 801BA3D8
  c->r[9]=c->r[31]+c->r[9]; // 801BA3DC
  W32(c->r[9]+0x00000F04u,c->r[11]); // 801BA3E0
  c->r[10]=c->r[9]+0x00000F04u; // 801BA3E4
  c->r[9]=R32(c->r[31]+0x00000EA0u); // 801BA3E8
  W32(c->r[31]+0x00000EA4u,c->r[10]); // 801BA3EC
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[8]); // 801BA3F0
  c->r[8]=c->r[31]+c->r[8]; // 801BA3F4
  W32(c->r[8]+0x00000F04u,c->r[10]); // 801BA3F8
  c->r[9]=c->r[8]+0x00000F04u; // 801BA3FC
  c->r[8]=R32(c->r[31]+0x00000EA0u); // 801BA400
  W32(c->r[31]+0x00000EA4u,c->r[9]); // 801BA404
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[7]); // 801BA408
  c->r[7]=c->r[31]+c->r[7]; // 801BA40C
  W32(c->r[7]+0x00000F04u,c->r[9]); // 801BA410
  c->r[8]=c->r[7]+0x00000F04u; // 801BA414
  c->r[7]=R32(c->r[31]+0x00000EA0u); // 801BA418
  W32(c->r[31]+0x00000EA4u,c->r[8]); // 801BA41C
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[6]); // 801BA420
  c->r[6]=c->r[31]+c->r[6]; // 801BA424
  W32(c->r[6]+0x00000F04u,c->r[8]); // 801BA428
  c->r[7]=c->r[6]+0x00000F04u; // 801BA42C
  c->r[6]=R32(c->r[31]+0x00000EA0u); // 801BA430
  W32(c->r[31]+0x00000EA4u,c->r[7]); // 801BA434
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 801BA438
  c->r[5]=c->r[31]+c->r[5]; // 801BA43C
  W32(c->r[5]+0x00000F04u,c->r[7]); // 801BA440
  c->r[6]=c->r[5]+0x00000F04u; // 801BA444
  c->r[5]=R32(c->r[31]+0x00000EA0u); // 801BA448
  W32(c->r[31]+0x00000EA4u,c->r[6]); // 801BA44C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801BA450
  c->r[5]=c->r[31]+c->r[0]; // 801BA454
  {uint32_t ea=c->r[5]+0x00000F04u; W32(ea,c->r[6]); c->r[5]=ea;} // 801BA458
  W32(c->r[31]+0x00000EA4u,c->r[5]); // 801BA45C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA384; } // 801BA460
L_801BA464:;
  c->r[0]=c->r[4]-c->r[3]; // 801BA464
  c->ctr=c->r[0]; // 801BA468
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801BA46C
  if (!crb(c,0)) { goto L_801BA494; } // 801BA470
L_801BA474:;
  c->r[4]=R32(c->r[31]+0x00000EA0u); // 801BA474
  c->r[0]=R32(c->r[31]+0x00000EA4u); // 801BA478
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[3]); // 801BA47C
  c->r[3]=c->r[3]+0x00000001u; // 801BA480
  c->r[4]=c->r[31]+c->r[4]; // 801BA484
  {uint32_t ea=c->r[4]+0x00000F04u; W32(ea,c->r[0]); c->r[4]=ea;} // 801BA488
  W32(c->r[31]+0x00000EA4u,c->r[4]); // 801BA48C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA474; } // 801BA490
L_801BA494:;
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA494
  c->r[0]=0u+0x00000000u; // 801BA498
  W32(c->r[31]+0x00000EFCu,c->r[0]); // 801BA49C
  c->r[3]=c->r[31]+0x00001104u; // 801BA4A0
  c->r[4]=0u+0x00000000u; // 801BA4A4
  c->r[5]=0u+0x00000004u; // 801BA4A8
  {uint32_t ea=c->r[31]+0x00000F00u; WF32(ea,c->f[0]);} // 801BA4AC
  c->lr=0x801BA4B4u; f_800043EC(c); // 801BA4B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA4B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA4B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA4BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BA4C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BA4C4
  c->lr=c->r[0]; // 801BA4C8
  c->r[1]=c->r[1]+0x00000020u; // 801BA4CC
  return; // 801BA4D0
}

// fn_801BA4D4
void f_801BA4D4(Ctx* __restrict c) {
  trace_call(0x801BA4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA4D4
  c->r[0]=c->lr; // 801BA4D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA4DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA4E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BA4E4
  c->r[30]=c->r[3]|c->r[3]; // 801BA4E8
  c->r[3]=c->r[3]+0x00000298u; // 801BA4EC
  c->lr=0x801BA4F4u; f_803B5070(c); // 801BA4F0
  c->r[3]=c->r[30]+0x000002A4u; // 801BA4F4
  c->lr=0x801BA4FCu; f_803B5070(c); // 801BA4F8
  c->r[0]=0u+0x00000000u; // 801BA4FC
  c->r[3]=c->r[30]+0x000002B0u; // 801BA500
  W32(c->r[30]+0x00000000u,c->r[0]); // 801BA504
  c->r[31]=0u+0x00000000u; // 801BA508
  W32(c->r[30]+0x00000004u,c->r[0]); // 801BA50C
  W32(c->r[30]+0x00000008u,c->r[0]); // 801BA510
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801BA514
  W32(c->r[30]+0x00000010u,c->r[0]); // 801BA518
  W32(c->r[30]+0x00000014u,c->r[0]); // 801BA51C
  W32(c->r[30]+0x00000018u,c->r[0]); // 801BA520
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801BA524
  W32(c->r[30]+0x00000020u,c->r[0]); // 801BA528
  W32(c->r[30]+0x00000024u,c->r[0]); // 801BA52C
  W32(c->r[30]+0x00000028u,c->r[0]); // 801BA530
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 801BA534
  W32(c->r[30]+0x00000030u,c->r[0]); // 801BA538
  W32(c->r[30]+0x00000034u,c->r[0]); // 801BA53C
  W32(c->r[30]+0x00000038u,c->r[0]); // 801BA540
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801BA544
  c->lr=0x801BA54Cu; f_801B0F84(c); // 801BA548
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA54C
  W32(c->r[30]+0x00000EFCu,c->r[31]); // 801BA550
  {uint32_t ea=c->r[30]+0x00000F00u; WF32(ea,c->f[0]);} // 801BA554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA558
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BA55C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA560
  c->lr=c->r[0]; // 801BA564
  c->r[1]=c->r[1]+0x00000010u; // 801BA568
  return; // 801BA56C
}

// fn_801BA570
void f_801BA570(Ctx* __restrict c) {
  trace_call(0x801BA570u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA570
  c->r[0]=c->lr; // 801BA574
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801BA578
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801BA57C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801BA580
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801BA584
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801BA588
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 801BA58C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 801BA590
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 801BA594
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 801BA598
  c->r[11]=c->r[1]+0x00000060u; // 801BA59C
  c->lr=0x801BA5A4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA5A0
  c->r[0]=R32(c->r[3]+0x00001104u); // 801BA5A4
  c->r[29]=c->r[3]|c->r[3]; // 801BA5A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801BA5AC
  if (crb(c,2)) { goto L_801BA5B8; } // 801BA5B0
  c->lr=0x801BA5B8u; f_801BADF8(c); // 801BA5B4
L_801BA5B8:;
  c->r[3]=c->r[29]+0x000002B0u; // 801BA5B8
  c->lr=0x801BA5C0u; f_801B0FE8(c); // 801BA5BC
  c->r[3]=c->r[29]+0x00000DF0u; // 801BA5C0
  c->lr=0x801BA5C8u; f_800A0740(c); // 801BA5C4
  c->r[0]=R32(c->r[29]+0x000002A4u); // 801BA5C8
  cmps(c,0,(int32_t)c->r[0],0); // 801BA5CC
  if (crb(c,2)) { goto L_801BA784; } // 801BA5D0
  c->r[26]=0u+0x804D0000u; // 801BA5D4
  c->r[28]=R32(c->r[29]+0x000002A8u); // 801BA5D8
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BA5DC
  c->r[27]=c->r[29]+0x000002A8u; // 801BA5E0
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[29]=c->ps1[29]=RF32(ea);} // 801BA5E4
  c->r[26]=c->r[26]+0x00003318u; // 801BA5E8
  {uint32_t ea=c->r[2]+0xFFFFB64Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801BA5EC
  c->r[31]=0u+0x00000000u; // 801BA5F0
  c->r[25]=0u+0x00000000u; // 801BA5F4
  goto L_801BA730; // 801BA5F8
L_801BA5FC:;
  c->r[24]=c->r[28]|c->r[28]; // 801BA5FC
  c->r[28]=R32(c->r[28]+0x00000000u); // 801BA600
  c->r[3]=c->r[29]+0x000002B0u; // 801BA604
  c->r[4]=c->r[24]+0x0000000Cu; // 801BA608
  c->lr=0x801BA610u; f_801B1374(c); // 801BA60C
  c->r[23]=c->r[3]|c->r[3]; // 801BA610
  c->r[30]=c->r[24]+0x00000010u; // 801BA614
  c->r[3]=c->r[1]+0x00000008u; // 801BA618
  c->lr=0x801BA620u; f_800A0740(c); // 801BA61C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[28]=c->ps1[28]=RF32(ea);} // 801BA620
  c->r[3]=c->r[23]|c->r[23]; // 801BA624
  c->lr=0x801BA62Cu; f_800613B4(c); // 801BA628
  c->f[1]=c->f[28]; // 801BA62C
  c->r[4]=c->r[3]|c->r[3]; // 801BA630
  c->r[3]=c->r[1]+0x00000008u; // 801BA634
  c->lr=0x801BA63Cu; f_800A1F80(c); // 801BA638
  c->r[3]=c->r[29]+0x00000DF0u; // 801BA63C
  c->r[4]=c->r[1]+0x00000008u; // 801BA640
  c->lr=0x801BA648u; f_800A0A68(c); // 801BA644
  c->r[3]=R32(c->r[24]+0x00000008u); // 801BA648
  c->r[4]=R32(c->r[29]+0x00000E1Cu); // 801BA64C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801BA650
  if (!crb(c,2)) { goto L_801BA668; } // 801BA654
  W8(c->r[30]+0x0000000Cu,c->r[25]); // 801BA658
  c->r[31]=c->r[23]|c->r[23]; // 801BA65C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[29]);} // 801BA660
  goto L_801BA6E0; // 801BA664
L_801BA668:;
  c->r[0]=R32(c->r[29]+0x00000E20u); // 801BA668
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801BA66C
  if (!crb(c,2)) { goto L_801BA6D8; } // 801BA670
  c->r[0]=R32(c->r[29]+0x000002A4u); // 801BA674
  cmps(c,0,(int32_t)c->r[0],0); // 801BA678
  if (!crb(c,2)) { goto L_801BA688; } // 801BA67C
  c->r[5]=0u+0x00000000u; // 801BA680
  goto L_801BA6B4; // 801BA684
L_801BA688:;
  c->r[5]=R32(c->r[29]+0x000002A8u); // 801BA688
  c->r[0]=c->r[29]+0x000002A8u; // 801BA68C
  goto L_801BA6A8; // 801BA690
L_801BA694:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 801BA694
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801BA698
  if (!crb(c,2)) { goto L_801BA6A4; } // 801BA69C
  goto L_801BA6B4; // 801BA6A0
L_801BA6A4:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 801BA6A4
L_801BA6A8:;
  cmpu(c,0,c->r[5],c->r[0]); // 801BA6A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801BA694; } // 801BA6AC
  c->r[5]=0u+0x00000000u; // 801BA6B0
L_801BA6B4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BA6B4
  if (crb(c,2)) { goto L_801BA6CC; } // 801BA6B8
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BA6BC
  {uint32_t ea=c->r[13]+0xFFFF8800u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA6C0
  fcmp(c,0,c->f[1],c->f[0]); // 801BA6C4
  if (!crb(c,1)) { goto L_801BA6E0; } // 801BA6C8
L_801BA6CC:;
  W8(c->r[30]+0x0000000Cu,c->r[25]); // 801BA6CC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[30]);} // 801BA6D0
  goto L_801BA6E0; // 801BA6D4
L_801BA6D8:;
  W8(c->r[30]+0x0000000Cu,c->r[25]); // 801BA6D8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[30]);} // 801BA6DC
L_801BA6E0:;
  {uint32_t ea=c->r[26]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BA6E0
  c->r[3]=c->r[30]|c->r[30]; // 801BA6E4
  c->lr=0x801BA6ECu; f_801237C0(c); // 801BA6E8
  c->r[3]=R32(c->r[29]+0x00000E1Cu); // 801BA6EC
  c->r[0]=R32(c->r[24]+0x00000008u); // 801BA6F0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801BA6F4
  if (crb(c,2)) { goto L_801BA730; } // 801BA6F8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA6FC
  fcmp(c,0,c->f[0],c->f[29]); // 801BA700
  if (!crb(c,0)) { goto L_801BA730; } // 801BA704
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BA708
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BA70C
  fcmp(c,0,c->f[0],c->f[30]); // 801BA710
  if (!crb(c,0)) { goto L_801BA71C; } // 801BA714
  c->f[0]=-c->f[0]; // 801BA718
L_801BA71C:;
  fcmp(c,0,c->f[0],c->f[31]); // 801BA71C
  if (!crb(c,0)) { goto L_801BA730; } // 801BA720
  c->r[3]=c->r[29]|c->r[29]; // 801BA724
  c->r[4]=c->r[24]|c->r[24]; // 801BA728
  c->lr=0x801BA730u; f_801BAD34(c); // 801BA72C
L_801BA730:;
  cmpu(c,0,c->r[28],c->r[27]); // 801BA730
  if (!crb(c,2)) { IRQCHK(c); goto L_801BA5FC; } // 801BA734
  c->r[0]=R32(c->r[29]+0x00000EFCu); // 801BA738
  cmps(c,0,(int32_t)c->r[0],0); // 801BA73C
  if (crb(c,2)) { goto L_801BA784; } // 801BA740
  cmps(c,0,(int32_t)c->r[31],0); // 801BA744
  if (crb(c,2)) { goto L_801BA784; } // 801BA748
  c->r[3]=R32(c->r[29]+0x00000E1Cu); // 801BA74C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801BA750
  cmpu(c,0,c->r[0],0x00000002u); // 801BA754
  if (crb(c,1)) { goto L_801BA784; } // 801BA758
  c->r[3]=c->r[31]|c->r[31]; // 801BA75C
  c->lr=0x801BA764u; f_800613BC(c); // 801BA760
  c->f[31]=c->f[1]; // 801BA764
  {uint32_t ea=c->r[29]+0x00000F00u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BA768
  {uint32_t ea=c->r[2]+0xFFFFB650u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BA76C
  c->r[3]=c->r[29]+0x00000E74u; // 801BA770
  c->r[4]=0u+0x00000000u; // 801BA774
  c->r[5]=0u+0x00000000u; // 801BA778
  c->lr=0x801BA780u; f_8016206C(c); // 801BA77C
  {uint32_t ea=c->r[29]+0x00000F00u; WF32(ea,c->f[31]);} // 801BA780
L_801BA784:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801BA784
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801BA788
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 801BA78C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 801BA790
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 801BA794
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 801BA798
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 801BA79C
  c->r[11]=c->r[1]+0x00000060u; // 801BA7A0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 801BA7A4
  c->lr=0x801BA7ACu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA7A8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801BA7AC
  c->lr=c->r[0]; // 801BA7B0
  c->r[1]=c->r[1]+0x000000A0u; // 801BA7B4
  return; // 801BA7B8
}

// fn_801BA7BC
void f_801BA7BC(Ctx* __restrict c) {
  trace_call(0x801BA7BCu);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801BA7BC
  W32(c->r[3]+c->r[0],c->r[5]); // 801BA7C0
  return; // 801BA7C4
}

// fn_801BA7C8
void f_801BA7C8(Ctx* __restrict c) {
  trace_call(0x801BA7C8u);
  W32(c->r[3]+0x00000EFCu,c->r[4]); // 801BA7C8
  return; // 801BA7CC
}

// fn_801BA7D0
void f_801BA7D0(Ctx* __restrict c) {
  trace_call(0x801BA7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFD60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA7D0
  c->r[0]=c->lr; // 801BA7D4
  W32(c->r[1]+0x000002A4u,c->r[0]); // 801BA7D8
  W32(c->r[1]+0x0000029Cu,c->r[31]); // 801BA7DC
  c->r[31]=c->r[4]|c->r[4]; // 801BA7E0
  W32(c->r[1]+0x00000298u,c->r[30]); // 801BA7E4
  c->r[30]=c->r[3]|c->r[3]; // 801BA7E8
  W32(c->r[1]+0x00000294u,c->r[29]); // 801BA7EC
  c->r[0]=R32(c->r[3]+0x000002A4u); // 801BA7F0
  W32(c->r[3]+0x00000E18u,c->r[4]); // 801BA7F4
  cmps(c,0,(int32_t)c->r[0],0); // 801BA7F8
  if (!crb(c,2)) { goto L_801BA808; } // 801BA7FC
  c->r[5]=0u+0x00000000u; // 801BA800
  goto L_801BA834; // 801BA804
L_801BA808:;
  c->r[5]=R32(c->r[3]+0x000002A8u); // 801BA808
  c->r[0]=c->r[3]+0x000002A8u; // 801BA80C
  goto L_801BA828; // 801BA810
L_801BA814:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 801BA814
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801BA818
  if (!crb(c,2)) { goto L_801BA824; } // 801BA81C
  goto L_801BA834; // 801BA820
L_801BA824:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 801BA824
L_801BA828:;
  cmpu(c,0,c->r[5],c->r[0]); // 801BA828
  if (!crb(c,2)) { IRQCHK(c); goto L_801BA814; } // 801BA82C
  c->r[5]=0u+0x00000000u; // 801BA830
L_801BA834:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BA834
  if (crb(c,2)) { goto L_801BA844; } // 801BA838
  c->r[29]=0u+0x00000000u; // 801BA83C
  goto L_801BA8D4; // 801BA840
L_801BA844:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BA844
  if (!crb(c,2)) { goto L_801BA854; } // 801BA848
  c->r[29]=0u+0x00000000u; // 801BA84C
  goto L_801BA8D4; // 801BA850
L_801BA854:;
  c->r[3]=c->r[1]+0x00000014u; // 801BA854
  c->r[4]=0u+0x00000000u; // 801BA858
  c->r[5]=0u+0x00000004u; // 801BA85C
  c->lr=0x801BA864u; f_800043EC(c); // 801BA860
  c->r[3]=c->r[1]+0x00000014u; // 801BA864
  c->r[4]=0u+0x00000000u; // 801BA868
  c->r[5]=0u+0x00000004u; // 801BA86C
  c->lr=0x801BA874u; f_800043EC(c); // 801BA870
  c->r[0]=R32(c->r[30]+0x00000298u); // 801BA874
  cmps(c,0,(int32_t)c->r[0],0); // 801BA878
  if (!crb(c,2)) { goto L_801BA888; } // 801BA87C
  c->r[29]=0u+0x00000000u; // 801BA880
  goto L_801BA8D4; // 801BA884
L_801BA888:;
  c->r[29]=R32(c->r[30]+0x0000029Cu); // 801BA888
  c->r[3]=c->r[30]+0x00000298u; // 801BA88C
  c->r[4]=c->r[1]+0x00000018u; // 801BA890
  W32(c->r[1]+0x00000018u,c->r[29]); // 801BA894
  c->lr=0x801BA89Cu; f_803B5028(c); // 801BA898
  c->r[0]=c->r[30]+0x000002A8u; // 801BA89C
  c->r[5]=c->r[29]|c->r[29]; // 801BA8A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BA8A4
  c->r[3]=c->r[30]+0x000002A4u; // 801BA8A8
  c->r[4]=c->r[1]+0x0000001Cu; // 801BA8AC
  c->lr=0x801BA8B4u; f_803B50B4(c); // 801BA8B0
  c->r[5]=c->r[29]|c->r[29]; // 801BA8B4
  c->r[3]=c->r[30]+0x000002B0u; // 801BA8B8
  c->r[4]=0u+0x00000007u; // 801BA8BC
  c->r[6]=0u+0x00000000u; // 801BA8C0
  c->lr=0x801BA8C8u; f_801B10DC(c); // 801BA8C4
  W32(c->r[1]+0x00000014u,c->r[3]); // 801BA8C8
  W32(c->r[29]+0x00000008u,c->r[31]); // 801BA8CC
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 801BA8D0
L_801BA8D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BA8D4
  if (crb(c,2)) { goto L_801BA918; } // 801BA8D8
  c->r[0]=R32(c->r[30]+0x00000E1Cu); // 801BA8DC
  c->r[3]=c->r[30]+0x000002B0u; // 801BA8E0
  c->r[4]=c->r[29]+0x0000000Cu; // 801BA8E4
  W32(c->r[30]+0x00000E20u,c->r[0]); // 801BA8E8
  c->lr=0x801BA8F0u; f_801B1374(c); // 801BA8EC
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BA8F0
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BA8F4
  c->r[4]=R32(c->r[30]+c->r[0]); // 801BA8F8
  c->r[5]=0u+0x00000000u; // 801BA8FC
  c->r[6]=0u+0x00000001u; // 801BA900
  c->lr=0x801BA908u; f_8006161C(c); // 801BA904
  c->r[0]=0u+0x00000000u; // 801BA908
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA90C
  W8(c->r[29]+0x0000001Cu,c->r[0]); // 801BA910
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[0]);} // 801BA914
L_801BA918:;
  c->r[4]=R32(c->r[30]+0x00000EFCu); // 801BA918
  cmps(c,0,(int32_t)c->r[4],0); // 801BA91C
  if (crb(c,2)) { goto L_801BACAC; } // 801BA920
  cmps(c,0,(int32_t)c->r[31],4); // 801BA924
  c->r[29]=0u+0x00000000u; // 801BA928
  if (crb(c,2)) { goto L_801BAA48; } // 801BA92C
  if (!crb(c,0)) { goto L_801BA940; } // 801BA930
  cmps(c,0,(int32_t)c->r[31],3); // 801BA934
  if (!crb(c,0)) { goto L_801BA94C; } // 801BA938
  goto L_801BAC48; // 801BA93C
L_801BA940:;
  cmps(c,0,(int32_t)c->r[31],6); // 801BA940
  if (!crb(c,0)) { goto L_801BAC48; } // 801BA944
  goto L_801BAB48; // 801BA948
L_801BA94C:;
  c->r[29]=0u+0x803E0000u; // 801BA94C
  c->r[3]=c->r[1]+0x00000220u; // 801BA950
  c->r[29]=c->r[29]+0x00000868u; // 801BA954
  c->lr=0x801BA95Cu; f_801328F8(c); // 801BA958
  c->r[5]=c->r[29]|c->r[29]; // 801BA95C
  c->r[3]=c->r[1]+0x00000100u; // 801BA960
  c->r[4]=c->r[13]+0xFFFF8804u; // 801BA964
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA968
  c->lr=0x801BA970u; f_80291CC4(c); // 801BA96C
  c->r[3]=c->r[1]+0x00000220u; // 801BA970
  c->r[4]=c->r[1]+0x00000100u; // 801BA974
  c->r[5]=c->r[1]+0x00000060u; // 801BA978
  c->lr=0x801BA980u; f_80132B34(c); // 801BA97C
  cmps(c,0,(int32_t)c->r[3],0); // 801BA980
  if (crb(c,2)) { goto L_801BAA34; } // 801BA984
  c->r[3]=c->r[1]+0x00000220u; // 801BA988
  c->r[4]=c->r[1]+0x00000100u; // 801BA98C
  c->r[5]=c->r[1]+0x00000010u; // 801BA990
  c->r[6]=0u+0x00000000u; // 801BA994
  c->lr=0x801BA99Cu; f_801329F8(c); // 801BA998
  cmps(c,0,(int32_t)c->r[3],0); // 801BA99C
  if (crb(c,2)) { goto L_801BAA34; } // 801BA9A0
  c->r[8]=R32(c->r[1]+0x00000010u); // 801BA9A4
  c->r[4]=0u+0x756E0000u; // 801BA9A8
  c->r[3]=0u+0x73740000u; // 801BA9AC
  c->r[7]=c->r[8]+0x00000008u; // 801BA9B0
  c->r[6]=c->r[4]+0x00006964u; // 801BA9B4
  c->r[5]=c->r[3]+0x00007264u; // 801BA9B8
  goto L_801BAA04; // 801BA9BC
L_801BA9C0:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 801BA9C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801BA9C4
  if (crb(c,2)) { goto L_801BA9DC; } // 801BA9C8
  if (!crb(c,0)) { goto L_801BA9F8; } // 801BA9CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801BA9D0
  if (crb(c,2)) { goto L_801BA9F0; } // 801BA9D4
  goto L_801BA9F8; // 801BA9D8
L_801BA9DC:;
  c->r[0]=c->r[7]+0x00000008u; // 801BA9DC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801BA9E0
  c->r[0]=R32(c->r[7]+0x00000004u); // 801BA9E4
  W32(c->r[1]+0x00000070u,c->r[0]); // 801BA9E8
  goto L_801BA9F8; // 801BA9EC
L_801BA9F0:;
  c->r[0]=c->r[7]+0x00000008u; // 801BA9F0
  W32(c->r[1]+0x00000078u,c->r[0]); // 801BA9F4
L_801BA9F8:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 801BA9F8
  c->r[3]=c->r[7]+c->r[0]; // 801BA9FC
  c->r[7]=c->r[3]+0x00000008u; // 801BAA00
L_801BAA04:;
  c->r[3]=R32(c->r[8]+0x00000004u); // 801BAA04
  c->r[4]=c->r[7]-c->r[8]; // 801BAA08
  c->r[0]=c->r[3]+0x00000008u; // 801BAA0C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BAA10
  if (crb(c,0)) { IRQCHK(c); goto L_801BA9C0; } // 801BAA14
  c->r[3]=c->r[30]+0x00000E74u; // 801BAA18
  c->lr=0x801BAA20u; f_80161DAC(c); // 801BAA1C
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BAA20
  c->r[3]=c->r[30]+0x00000E74u; // 801BAA24
  {uint32_t ea=c->r[2]+0xFFFFB650u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BAA28
  c->r[4]=c->r[1]+0x00000070u; // 801BAA2C
  c->lr=0x801BAA34u; f_80161E78(c); // 801BAA30
L_801BAA34:;
  c->r[3]=c->r[1]+0x00000220u; // 801BAA34
  c->r[4]=0u+0xFFFFFFFFu; // 801BAA38
  c->lr=0x801BAA40u; f_80132958(c); // 801BAA3C
  c->r[29]=0u+0x00000001u; // 801BAA40
  goto L_801BAC50; // 801BAA44
L_801BAA48:;
  c->r[5]=0u+0x803E0000u; // 801BAA48
  c->r[3]=c->r[1]+0x000001B0u; // 801BAA4C
  c->r[5]=c->r[5]+0x00000868u; // 801BAA50
  c->r[29]=c->r[5]+0x00000005u; // 801BAA54
  c->lr=0x801BAA5Cu; f_801328F8(c); // 801BAA58
  c->r[5]=c->r[29]|c->r[29]; // 801BAA5C
  c->r[3]=c->r[1]+0x000000C0u; // 801BAA60
  c->r[4]=c->r[13]+0xFFFF8804u; // 801BAA64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAA68
  c->lr=0x801BAA70u; f_80291CC4(c); // 801BAA6C
  c->r[3]=c->r[1]+0x000001B0u; // 801BAA70
  c->r[4]=c->r[1]+0x000000C0u; // 801BAA74
  c->r[5]=c->r[1]+0x00000040u; // 801BAA78
  c->lr=0x801BAA80u; f_80132B34(c); // 801BAA7C
  cmps(c,0,(int32_t)c->r[3],0); // 801BAA80
  if (crb(c,2)) { goto L_801BAB34; } // 801BAA84
  c->r[3]=c->r[1]+0x000001B0u; // 801BAA88
  c->r[4]=c->r[1]+0x000000C0u; // 801BAA8C
  c->r[5]=c->r[1]+0x0000000Cu; // 801BAA90
  c->r[6]=0u+0x00000000u; // 801BAA94
  c->lr=0x801BAA9Cu; f_801329F8(c); // 801BAA98
  cmps(c,0,(int32_t)c->r[3],0); // 801BAA9C
  if (crb(c,2)) { goto L_801BAB34; } // 801BAAA0
  c->r[8]=R32(c->r[1]+0x0000000Cu); // 801BAAA4
  c->r[4]=0u+0x756E0000u; // 801BAAA8
  c->r[3]=0u+0x73740000u; // 801BAAAC
  c->r[7]=c->r[8]+0x00000008u; // 801BAAB0
  c->r[6]=c->r[4]+0x00006964u; // 801BAAB4
  c->r[5]=c->r[3]+0x00007264u; // 801BAAB8
  goto L_801BAB04; // 801BAABC
L_801BAAC0:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 801BAAC0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801BAAC4
  if (crb(c,2)) { goto L_801BAADC; } // 801BAAC8
  if (!crb(c,0)) { goto L_801BAAF8; } // 801BAACC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801BAAD0
  if (crb(c,2)) { goto L_801BAAF0; } // 801BAAD4
  goto L_801BAAF8; // 801BAAD8
L_801BAADC:;
  c->r[0]=c->r[7]+0x00000008u; // 801BAADC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BAAE0
  c->r[0]=R32(c->r[7]+0x00000004u); // 801BAAE4
  W32(c->r[1]+0x00000050u,c->r[0]); // 801BAAE8
  goto L_801BAAF8; // 801BAAEC
L_801BAAF0:;
  c->r[0]=c->r[7]+0x00000008u; // 801BAAF0
  W32(c->r[1]+0x00000058u,c->r[0]); // 801BAAF4
L_801BAAF8:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 801BAAF8
  c->r[3]=c->r[7]+c->r[0]; // 801BAAFC
  c->r[7]=c->r[3]+0x00000008u; // 801BAB00
L_801BAB04:;
  c->r[3]=R32(c->r[8]+0x00000004u); // 801BAB04
  c->r[4]=c->r[7]-c->r[8]; // 801BAB08
  c->r[0]=c->r[3]+0x00000008u; // 801BAB0C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BAB10
  if (crb(c,0)) { IRQCHK(c); goto L_801BAAC0; } // 801BAB14
  c->r[3]=c->r[30]+0x00000E74u; // 801BAB18
  c->lr=0x801BAB20u; f_80161DAC(c); // 801BAB1C
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BAB20
  c->r[3]=c->r[30]+0x00000E74u; // 801BAB24
  {uint32_t ea=c->r[2]+0xFFFFB650u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BAB28
  c->r[4]=c->r[1]+0x00000050u; // 801BAB2C
  c->lr=0x801BAB34u; f_80161E78(c); // 801BAB30
L_801BAB34:;
  c->r[3]=c->r[1]+0x000001B0u; // 801BAB34
  c->r[4]=0u+0xFFFFFFFFu; // 801BAB38
  c->lr=0x801BAB40u; f_80132958(c); // 801BAB3C
  c->r[29]=0u+0x00000001u; // 801BAB40
  goto L_801BAC50; // 801BAB44
L_801BAB48:;
  c->r[5]=0u+0x803E0000u; // 801BAB48
  c->r[3]=c->r[1]+0x00000140u; // 801BAB4C
  c->r[5]=c->r[5]+0x00000868u; // 801BAB50
  c->r[29]=c->r[5]+0x00000009u; // 801BAB54
  c->lr=0x801BAB5Cu; f_801328F8(c); // 801BAB58
  c->r[5]=c->r[29]|c->r[29]; // 801BAB5C
  c->r[3]=c->r[1]+0x00000080u; // 801BAB60
  c->r[4]=c->r[13]+0xFFFF8804u; // 801BAB64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAB68
  c->lr=0x801BAB70u; f_80291CC4(c); // 801BAB6C
  c->r[3]=c->r[1]+0x00000140u; // 801BAB70
  c->r[4]=c->r[1]+0x00000080u; // 801BAB74
  c->r[5]=c->r[1]+0x00000020u; // 801BAB78
  c->lr=0x801BAB80u; f_80132B34(c); // 801BAB7C
  cmps(c,0,(int32_t)c->r[3],0); // 801BAB80
  if (crb(c,2)) { goto L_801BAC34; } // 801BAB84
  c->r[3]=c->r[1]+0x00000140u; // 801BAB88
  c->r[4]=c->r[1]+0x00000080u; // 801BAB8C
  c->r[5]=c->r[1]+0x00000008u; // 801BAB90
  c->r[6]=0u+0x00000000u; // 801BAB94
  c->lr=0x801BAB9Cu; f_801329F8(c); // 801BAB98
  cmps(c,0,(int32_t)c->r[3],0); // 801BAB9C
  if (crb(c,2)) { goto L_801BAC34; } // 801BABA0
  c->r[8]=R32(c->r[1]+0x00000008u); // 801BABA4
  c->r[4]=0u+0x756E0000u; // 801BABA8
  c->r[3]=0u+0x73740000u; // 801BABAC
  c->r[7]=c->r[8]+0x00000008u; // 801BABB0
  c->r[6]=c->r[4]+0x00006964u; // 801BABB4
  c->r[5]=c->r[3]+0x00007264u; // 801BABB8
  goto L_801BAC04; // 801BABBC
L_801BABC0:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 801BABC0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801BABC4
  if (crb(c,2)) { goto L_801BABDC; } // 801BABC8
  if (!crb(c,0)) { goto L_801BABF8; } // 801BABCC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801BABD0
  if (crb(c,2)) { goto L_801BABF0; } // 801BABD4
  goto L_801BABF8; // 801BABD8
L_801BABDC:;
  c->r[0]=c->r[7]+0x00000008u; // 801BABDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BABE0
  c->r[0]=R32(c->r[7]+0x00000004u); // 801BABE4
  W32(c->r[1]+0x00000030u,c->r[0]); // 801BABE8
  goto L_801BABF8; // 801BABEC
L_801BABF0:;
  c->r[0]=c->r[7]+0x00000008u; // 801BABF0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801BABF4
L_801BABF8:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 801BABF8
  c->r[3]=c->r[7]+c->r[0]; // 801BABFC
  c->r[7]=c->r[3]+0x00000008u; // 801BAC00
L_801BAC04:;
  c->r[3]=R32(c->r[8]+0x00000004u); // 801BAC04
  c->r[4]=c->r[7]-c->r[8]; // 801BAC08
  c->r[0]=c->r[3]+0x00000008u; // 801BAC0C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BAC10
  if (crb(c,0)) { IRQCHK(c); goto L_801BABC0; } // 801BAC14
  c->r[3]=c->r[30]+0x00000E74u; // 801BAC18
  c->lr=0x801BAC20u; f_80161DAC(c); // 801BAC1C
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BAC20
  c->r[3]=c->r[30]+0x00000E74u; // 801BAC24
  {uint32_t ea=c->r[2]+0xFFFFB650u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BAC28
  c->r[4]=c->r[1]+0x00000030u; // 801BAC2C
  c->lr=0x801BAC34u; f_80161E78(c); // 801BAC30
L_801BAC34:;
  c->r[3]=c->r[1]+0x00000140u; // 801BAC34
  c->r[4]=0u+0xFFFFFFFFu; // 801BAC38
  c->lr=0x801BAC40u; f_80132958(c); // 801BAC3C
  c->r[29]=0u+0x00000001u; // 801BAC40
  goto L_801BAC50; // 801BAC44
L_801BAC48:;
  c->r[3]=c->r[30]+0x00000E74u; // 801BAC48
  c->lr=0x801BAC50u; f_80161DAC(c); // 801BAC4C
L_801BAC50:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BAC50
  if (crb(c,2)) { goto L_801BACAC; } // 801BAC54
  c->r[0]=R32(c->r[30]+0x000002A4u); // 801BAC58
  cmps(c,0,(int32_t)c->r[0],0); // 801BAC5C
  if (!crb(c,2)) { goto L_801BAC6C; } // 801BAC60
  c->r[4]=0u+0x00000000u; // 801BAC64
  goto L_801BAC98; // 801BAC68
L_801BAC6C:;
  c->r[4]=R32(c->r[30]+0x000002A8u); // 801BAC6C
  c->r[0]=c->r[30]+0x000002A8u; // 801BAC70
  goto L_801BAC8C; // 801BAC74
L_801BAC78:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 801BAC78
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801BAC7C
  if (!crb(c,2)) { goto L_801BAC88; } // 801BAC80
  goto L_801BAC98; // 801BAC84
L_801BAC88:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801BAC88
L_801BAC8C:;
  cmpu(c,0,c->r[4],c->r[0]); // 801BAC8C
  if (!crb(c,2)) { IRQCHK(c); goto L_801BAC78; } // 801BAC90
  c->r[4]=0u+0x00000000u; // 801BAC94
L_801BAC98:;
  c->r[3]=c->r[30]+0x000002B0u; // 801BAC98
  c->r[4]=c->r[4]+0x0000000Cu; // 801BAC9C
  c->lr=0x801BACA4u; f_801B1374(c); // 801BACA0
  c->lr=0x801BACA8u; f_800613BC(c); // 801BACA4
  {uint32_t ea=c->r[30]+0x00000F00u; WF32(ea,c->f[1]);} // 801BACA8
L_801BACAC:;
  c->r[0]=R32(c->r[30]+0x00000E18u); // 801BACAC
  W32(c->r[30]+0x00000E1Cu,c->r[0]); // 801BACB0
  c->r[31]=R32(c->r[1]+0x0000029Cu); // 801BACB4
  c->r[30]=R32(c->r[1]+0x00000298u); // 801BACB8
  c->r[29]=R32(c->r[1]+0x00000294u); // 801BACBC
  c->r[0]=R32(c->r[1]+0x000002A4u); // 801BACC0
  c->lr=c->r[0]; // 801BACC4
  c->r[1]=c->r[1]+0x000002A0u; // 801BACC8
  return; // 801BACCC
}

// fn_801BACD0
void f_801BACD0(Ctx* __restrict c) {
  trace_call(0x801BACD0u);
  c->r[3]=c->r[3]+0x00000DF0u; // 801BACD0
  return; // 801BACD4
}

// fn_801BACD8
void f_801BACD8(Ctx* __restrict c) {
  trace_call(0x801BACD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BACD8
  c->r[0]=c->lr; // 801BACDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BACE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BACE4
  c->r[31]=c->r[4]|c->r[4]; // 801BACE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BACEC
  c->r[30]=c->r[3]|c->r[3]; // 801BACF0
  c->r[0]=R32(c->r[3]+0x00001104u); // 801BACF4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801BACF8
  if (crb(c,2)) { goto L_801BAD10; } // 801BACFC
  cmps(c,0,(int32_t)c->r[4],0); // 801BAD00
  if (!crb(c,2)) { goto L_801BAD10; } // 801BAD04
  c->r[4]=0u+0x00000000u; // 801BAD08
  c->lr=0x801BAD10u; f_801BA7D0(c); // 801BAD0C
L_801BAD10:;
  c->r[0]=R32(c->r[30]+0x00001104u); // 801BAD10
  c->r[0]=(rotl(c->r[31],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 801BAD14
  W32(c->r[30]+0x00001104u,c->r[0]); // 801BAD18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BAD1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BAD20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BAD24
  c->lr=c->r[0]; // 801BAD28
  c->r[1]=c->r[1]+0x00000010u; // 801BAD2C
  return; // 801BAD30
}

// fn_801BAD34
void f_801BAD34(Ctx* __restrict c) {
  trace_call(0x801BAD34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAD34
  c->r[0]=c->lr; // 801BAD38
  cmps(c,0,(int32_t)c->r[4],0); // 801BAD3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BAD40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BAD44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BAD48
  c->r[30]=c->r[3]|c->r[3]; // 801BAD4C
  if (!crb(c,2)) { goto L_801BAD5C; } // 801BAD50
  c->r[3]=0u+0x00000000u; // 801BAD54
  goto L_801BADE0; // 801BAD58
L_801BAD5C:;
  c->r[0]=R32(c->r[3]+0x000002A4u); // 801BAD5C
  cmps(c,0,(int32_t)c->r[0],0); // 801BAD60
  if (!crb(c,2)) { goto L_801BAD70; } // 801BAD64
  c->r[3]=0u+0x00000000u; // 801BAD68
  goto L_801BADE0; // 801BAD6C
L_801BAD70:;
  c->r[31]=R32(c->r[3]+0x000002A8u); // 801BAD70
  c->r[0]=c->r[3]+0x000002A8u; // 801BAD74
  goto L_801BADD4; // 801BAD78
L_801BAD7C:;
  cmpu(c,0,c->r[4],c->r[31]); // 801BAD7C
  if (!crb(c,2)) { goto L_801BADD0; } // 801BAD80
  c->r[3]=c->r[3]+0x000002B0u; // 801BAD84
  c->r[4]=c->r[31]+0x0000000Cu; // 801BAD88
  c->lr=0x801BAD90u; f_801B1374(c); // 801BAD8C
  c->lr=0x801BAD94u; f_80061344(c); // 801BAD90
  c->r[3]=c->r[30]+0x000002B0u; // 801BAD94
  c->r[4]=c->r[31]+0x0000000Cu; // 801BAD98
  c->lr=0x801BADA0u; f_801B1180(c); // 801BAD9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BADA0
  c->r[3]=c->r[30]+0x000002A4u; // 801BADA4
  c->r[4]=c->r[1]+0x0000000Cu; // 801BADA8
  c->lr=0x801BADB0u; f_803B5028(c); // 801BADAC
  c->r[0]=c->r[30]+0x0000029Cu; // 801BADB0
  c->r[5]=c->r[31]|c->r[31]; // 801BADB4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BADB8
  c->r[3]=c->r[30]+0x00000298u; // 801BADBC
  c->r[4]=c->r[1]+0x00000008u; // 801BADC0
  c->lr=0x801BADC8u; f_803B50B4(c); // 801BADC4
  c->r[3]=0u+0x00000001u; // 801BADC8
  goto L_801BADE0; // 801BADCC
L_801BADD0:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801BADD0
L_801BADD4:;
  cmpu(c,0,c->r[31],c->r[0]); // 801BADD4
  if (!crb(c,2)) { IRQCHK(c); goto L_801BAD7C; } // 801BADD8
  c->r[3]=0u+0x00000000u; // 801BADDC
L_801BADE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BADE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BADE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BADE8
  c->lr=c->r[0]; // 801BADEC
  c->r[1]=c->r[1]+0x00000020u; // 801BADF0
  return; // 801BADF4
}

// fn_801BADF8
void f_801BADF8(Ctx* __restrict c) {
  trace_call(0x801BADF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BADF8
  c->r[0]=c->lr; // 801BADFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BAE00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BAE04
  c->r[31]=c->r[4]|c->r[4]; // 801BAE08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BAE0C
  c->r[30]=c->r[3]|c->r[3]; // 801BAE10
  c->lr=0x801BAE18u; f_80061A4C(c); // 801BAE14
  c->r[0]=R8(c->r[3]+0x00000909u); // 801BAE18
  cmps(c,0,(int32_t)c->r[0],0); // 801BAE1C
  if (crb(c,2)) { goto L_801BAE34; } // 801BAE20
  c->lr=0x801BAE28u; f_80061A4C(c); // 801BAE24
  c->r[3]=c->r[3]+0x000008E4u; // 801BAE28
  c->lr=0x801BAE30u; f_802657AC(c); // 801BAE2C
  goto L_801BAE40; // 801BAE30
L_801BAE34:;
  c->lr=0x801BAE38u; f_80061A4C(c); // 801BAE34
  c->r[3]=c->r[3]+0x00000250u; // 801BAE38
  c->lr=0x801BAE40u; f_802657AC(c); // 801BAE3C
L_801BAE40:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BAE40
  c->r[3]=c->r[30]+0x00000E24u; // 801BAE44
  if (crb(c,2)) { goto L_801BAE5C; } // 801BAE48
  c->r[4]=c->r[1]+0x0000000Cu; // 801BAE4C
  c->r[5]=c->r[1]+0x00000008u; // 801BAE50
  c->lr=0x801BAE58u; f_801BA018(c); // 801BAE54
  goto L_801BAE64; // 801BAE58
L_801BAE5C:;
  c->r[0]=0u+0x00000004u; // 801BAE5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BAE60
L_801BAE64:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BAE64
  cmps(c,0,(int32_t)c->r[0],2); // 801BAE68
  if (crb(c,2)) { goto L_801BAEA0; } // 801BAE6C
  if (!crb(c,0)) { goto L_801BAE84; } // 801BAE70
  cmps(c,0,(int32_t)c->r[0],0); // 801BAE74
  if (crb(c,2)) { goto L_801BAE90; } // 801BAE78
  if (!crb(c,0)) { goto L_801BAE98; } // 801BAE7C
  goto L_801BAEB0; // 801BAE80
L_801BAE84:;
  cmps(c,0,(int32_t)c->r[0],4); // 801BAE84
  if (!crb(c,0)) { goto L_801BAEB0; } // 801BAE88
  goto L_801BAEA8; // 801BAE8C
L_801BAE90:;
  c->r[31]=0u+0x00000002u; // 801BAE90
  goto L_801BAEB4; // 801BAE94
L_801BAE98:;
  c->r[31]=0u+0x00000003u; // 801BAE98
  goto L_801BAEB4; // 801BAE9C
L_801BAEA0:;
  c->r[31]=0u+0x00000004u; // 801BAEA0
  goto L_801BAEB4; // 801BAEA4
L_801BAEA8:;
  c->r[31]=0u+0x00000005u; // 801BAEA8
  goto L_801BAEB4; // 801BAEAC
L_801BAEB0:;
  c->r[31]=0u+0x00000000u; // 801BAEB0
L_801BAEB4:;
  c->r[3]=c->r[30]|c->r[30]; // 801BAEB4
  c->r[4]=c->r[31]|c->r[31]; // 801BAEB8
  c->lr=0x801BAEC0u; f_801BA7D0(c); // 801BAEBC
  c->r[0]=R32(c->r[30]+0x000002A4u); // 801BAEC0
  cmps(c,0,(int32_t)c->r[0],0); // 801BAEC4
  if (!crb(c,2)) { goto L_801BAED4; } // 801BAEC8
  c->r[4]=0u+0x00000000u; // 801BAECC
  goto L_801BAF00; // 801BAED0
L_801BAED4:;
  c->r[4]=R32(c->r[30]+0x000002A8u); // 801BAED4
  c->r[0]=c->r[30]+0x000002A8u; // 801BAED8
  goto L_801BAEF4; // 801BAEDC
L_801BAEE0:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 801BAEE0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801BAEE4
  if (!crb(c,2)) { goto L_801BAEF0; } // 801BAEE8
  goto L_801BAF00; // 801BAEEC
L_801BAEF0:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801BAEF0
L_801BAEF4:;
  cmpu(c,0,c->r[4],c->r[0]); // 801BAEF4
  if (!crb(c,2)) { IRQCHK(c); goto L_801BAEE0; } // 801BAEF8
  c->r[4]=0u+0x00000000u; // 801BAEFC
L_801BAF00:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BAF00
  if (crb(c,2)) { goto L_801BAF1C; } // 801BAF04
  c->r[3]=c->r[30]+0x000002B0u; // 801BAF08
  c->r[4]=c->r[4]+0x0000000Cu; // 801BAF0C
  c->lr=0x801BAF14u; f_801B1374(c); // 801BAF10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BAF14
  c->lr=0x801BAF1Cu; f_8006170C(c); // 801BAF18
L_801BAF1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAF1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BAF20
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BAF24
  c->lr=c->r[0]; // 801BAF28
  c->r[1]=c->r[1]+0x00000020u; // 801BAF2C
  return; // 801BAF30
}

// fn_801BAF34
void f_801BAF34(Ctx* __restrict c) {
  trace_call(0x801BAF34u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAF34
  c->r[0]=c->lr; // 801BAF38
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BAF3C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BAF40
  c->r[25]=c->r[3]|c->r[3]; // 801BAF44
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 801BAF48
  c->lr=0x801BAF50u; f_800F39E4(c); // 801BAF4C
  c->r[4]=0u+0x00000000u; // 801BAF50
  c->lr=0x801BAF58u; f_801D5B4C(c); // 801BAF54
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801BAF58
  c->r[30]=0u+0x00000001u; // 801BAF5C
  c->r[3]=sraw(c,c->r[4],31); // 801BAF60
  c->r[0]=0u+0x00000000u; // 801BAF64
  c->r[4]=c->r[4]&~c->r[3]; // 801BAF68
  c->r[3]=addc(c,~c->r[4],c->r[30],1); // 801BAF6C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801BAF70
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801BAF74
  c->r[29]=c->r[4]&~c->r[0]; // 801BAF78
  c->lr=0x801BAF80u; f_80061A4C(c); // 801BAF7C
  c->r[4]=c->r[3]|c->r[3]; // 801BAF80
  c->r[3]=R32(c->r[13]+0xFFFF9760u); // 801BAF84
  c->r[4]=c->r[4]+0x00000384u; // 801BAF88
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BAF8C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801BAF90
  c->ctr=c->r[12]; // 801BAF94
  if (true) { c->lr=0x801BAF9Cu; dispatch(c,c->ctr); } // 801BAF98
  cmps(c,0,(int32_t)c->r[3],1); // 801BAF9C
  if (crb(c,0)) { goto L_801BAFA8; } // 801BAFA0
  c->r[30]=c->r[3]|c->r[3]; // 801BAFA4
L_801BAFA8:;
  cmps(c,0,(int32_t)c->r[30],11); // 801BAFA8
  c->r[31]=0u+0x00000001u; // 801BAFAC
  if (!crb(c,0)) { goto L_801BAFB8; } // 801BAFB0
  c->r[31]=c->r[30]|c->r[30]; // 801BAFB4
L_801BAFB8:;
  c->r[28]=0u+0x803E0000u; // 801BAFB8
  c->r[27]=0u+0x00000000u; // 801BAFBC
  c->r[28]=c->r[28]+0x000006F8u; // 801BAFC0
  c->r[26]=0u+0x00000000u; // 801BAFC4
  c->r[30]=c->r[28]|c->r[28]; // 801BAFC8
L_801BAFCC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801BAFCC
  c->r[4]=c->r[25]|c->r[25]; // 801BAFD0
  c->lr=0x801BAFD8u; f_80293554(c); // 801BAFD4
  cmps(c,0,(int32_t)c->r[3],0); // 801BAFD8
  if (!crb(c,2)) { goto L_801BB000; } // 801BAFDC
  c->r[4]=(uint32_t)((int32_t)c->r[26]*(int32_t)92); // 801BAFE0
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BAFE4
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)44); // 801BAFE8
  c->r[4]=c->r[28]+c->r[4]; // 801BAFEC
  c->r[3]=c->r[4]+c->r[3]; // 801BAFF0
  c->r[3]=c->r[3]+c->r[0]; // 801BAFF4
  c->r[27]=R32(c->r[3]+0x00000004u); // 801BAFF8
  goto L_801BB010; // 801BAFFC
L_801BB000:;
  c->r[26]=c->r[26]+0x00000001u; // 801BB000
  c->r[30]=c->r[30]+0x0000005Cu; // 801BB004
  cmpu(c,0,c->r[26],0x00000004u); // 801BB008
  if (crb(c,0)) { IRQCHK(c); goto L_801BAFCC; } // 801BB00C
L_801BB010:;
  c->r[3]=c->r[27]|c->r[27]; // 801BB010
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BB014
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BB018
  c->lr=c->r[0]; // 801BB01C
  c->r[1]=c->r[1]+0x00000030u; // 801BB020
  return; // 801BB024
}

// fn_801BB028
void f_801BB028(Ctx* __restrict c) {
  trace_call(0x801BB028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB028
  c->r[0]=c->lr; // 801BB02C
  c->r[4]=0u+0x00000000u; // 801BB030
  c->r[5]=0u+0x00000004u; // 801BB034
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB038
  c->r[0]=0u+0x00000000u; // 801BB03C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB040
  c->r[31]=c->r[3]|c->r[3]; // 801BB044
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BB048
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BB04C
  c->r[3]=c->r[3]+0x0000000Cu; // 801BB050
  c->lr=0x801BB058u; f_800043EC(c); // 801BB054
  c->r[0]=0u+0x00000001u; // 801BB058
  c->r[3]=c->r[31]|c->r[31]; // 801BB05C
  W8(c->r[31]+0x0000001Cu,c->r[0]); // 801BB060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB064
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB068
  c->lr=c->r[0]; // 801BB06C
  c->r[1]=c->r[1]+0x00000010u; // 801BB070
  return; // 801BB074
}

// dtor_801BB078
void f_801BB078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB078
  c->r[0]=c->lr; // 801BB07C
  cmps(c,0,(int32_t)c->r[3],0); // 801BB080
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB088
  c->r[31]=c->r[3]|c->r[3]; // 801BB08C
  if (crb(c,2)) { goto L_801BB0A0; } // 801BB090
  cmps(c,0,(int32_t)c->r[4],0); // 801BB094
  if (!crb(c,1)) { goto L_801BB0A0; } // 801BB098
  c->lr=0x801BB0A0u; f_802896EC(c); // 801BB09C
L_801BB0A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801BB0A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB0A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB0A8
  c->lr=c->r[0]; // 801BB0AC
  c->r[1]=c->r[1]+0x00000010u; // 801BB0B0
  return; // 801BB0B4
}

// dtor_801BB0B8
void f_801BB0B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB0B8
  c->r[0]=c->lr; // 801BB0BC
  cmps(c,0,(int32_t)c->r[3],0); // 801BB0C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB0C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB0C8
  c->r[31]=c->r[4]|c->r[4]; // 801BB0CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BB0D0
  c->r[30]=c->r[3]|c->r[3]; // 801BB0D4
  if (crb(c,2)) { goto L_801BB0F8; } // 801BB0D8
  if (crb(c,2)) { goto L_801BB0E8; } // 801BB0DC
  c->r[4]=0u+0x00000000u; // 801BB0E0
  c->lr=0x801BB0E8u; f_803B4FA4(c); // 801BB0E4
L_801BB0E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BB0E8
  if (!crb(c,1)) { goto L_801BB0F8; } // 801BB0EC
  c->r[3]=c->r[30]|c->r[30]; // 801BB0F0
  c->lr=0x801BB0F8u; f_802896EC(c); // 801BB0F4
L_801BB0F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801BB0F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB0FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BB100
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB104
  c->lr=c->r[0]; // 801BB108
  c->r[1]=c->r[1]+0x00000010u; // 801BB10C
  return; // 801BB110
}

// fn_801BB114
void f_801BB114(Ctx* __restrict c) {
  trace_call(0x801BB114u);
  c->r[4]=0u+0x80570000u; // 801BB114
  {uint32_t ea=c->r[2]+0xFFFFB624u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB118
  c->r[3]=c->r[4]+0xFFFFA0F8u; // 801BB11C
  {uint32_t ea=c->r[2]+0xFFFFB620u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB120
  {uint32_t ea=c->r[4]+0xFFFFA0F8u; WF32(ea,c->f[1]);} // 801BB124
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801BB128
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801BB12C
  return; // 801BB130
}

// fn_801BB134
void f_801BB134(Ctx* __restrict c) {
  trace_call(0x801BB134u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB134
  c->r[0]=c->lr; // 801BB138
  W32(c->r[1]+0x00000054u,c->r[0]); // 801BB13C
  c->r[11]=c->r[1]+0x00000050u; // 801BB140
  c->lr=0x801BB148u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BB144
  c->r[0]=R32(c->r[3]+0x00000058u); // 801BB148
  c->r[31]=c->r[3]|c->r[3]; // 801BB14C
  c->r[25]=c->r[5]|c->r[5]; // 801BB150
  c->r[26]=c->r[6]|c->r[6]; // 801BB154
  cmps(c,0,(int32_t)c->r[0],0); // 801BB158
  c->r[27]=c->r[7]|c->r[7]; // 801BB15C
  c->r[28]=c->r[8]|c->r[8]; // 801BB160
  c->r[29]=c->r[9]|c->r[9]; // 801BB164
  c->r[30]=c->r[10]|c->r[10]; // 801BB168
  if (!crb(c,2)) { goto L_801BB2D8; } // 801BB16C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801BB170
  c->r[3]=c->r[4]|c->r[4]; // 801BB174
  c->r[4]=c->r[1]+0x00000018u; // 801BB178
  c->r[5]=c->r[1]+0x00000014u; // 801BB17C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB180
  c->r[6]=0u+0x00000020u; // 801BB184
  c->r[7]=0u+0x00000002u; // 801BB188
  c->lr=0x801BB190u; f_8038562C(c); // 801BB18C
  cmps(c,0,(int32_t)c->r[27],0); // 801BB190
  W32(c->r[31]+0x00000058u,c->r[3]); // 801BB194
  if (crb(c,2)) { goto L_801BB204; } // 801BB198
  c->r[0]=R32(c->r[26]+0x00000000u); // 801BB19C
  c->r[3]=c->r[25]|c->r[25]; // 801BB1A0
  c->r[4]=c->r[1]+0x00000018u; // 801BB1A4
  c->r[5]=c->r[1]+0x00000010u; // 801BB1A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BB1AC
  c->r[6]=c->r[1]+0x0000000Cu; // 801BB1B0
  c->r[7]=0u+0x00000000u; // 801BB1B4
  c->r[0]=R32(c->r[27]+0x00000000u); // 801BB1B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801BB1BC
  c->lr=0x801BB1C4u; f_8036EAA0(c); // 801BB1C0
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 801BB1C4
  c->r[4]=c->r[1]+0x00000008u; // 801BB1C8
  c->r[0]=R32(c->r[26]+0x00000000u); // 801BB1CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BB1D0
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 801BB1D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BB1D8
  c->r[12]=R32(c->r[12]+0x00000030u); // 801BB1DC
  c->ctr=c->r[12]; // 801BB1E0
  if (true) { c->lr=0x801BB1E8u; dispatch(c,c->ctr); } // 801BB1E4
  c->r[3]=R32(c->r[31]+0x00000058u); // 801BB1E8
  c->r[5]=0u+0x00000006u; // 801BB1EC
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 801BB1F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BB1F4
  c->r[12]=R32(c->r[12]+0x00000034u); // 801BB1F8
  c->ctr=c->r[12]; // 801BB1FC
  if (true) { c->lr=0x801BB204u; dispatch(c,c->ctr); } // 801BB200
L_801BB204:;
  c->r[3]=R32(c->r[31]+0x00000058u); // 801BB204
  c->r[4]=0u+0x000000E5u; // 801BB208
  c->lr=0x801BB210u; f_803805B4(c); // 801BB20C
  c->r[3]=R32(c->r[31]+0x00000058u); // 801BB210
  c->r[4]=0u+0x000000E5u; // 801BB214
  c->lr=0x801BB21Cu; f_803805D8(c); // 801BB218
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BB21C
  c->r[3]=c->r[31]|c->r[31]; // 801BB220
  c->r[4]=R32(c->r[31]+0x00000058u); // 801BB224
  c->r[5]=0u+0x00000001u; // 801BB228
  c->r[12]=R32(c->r[12]+0x00000020u); // 801BB22C
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB230
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BB234
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BB238
  c->ctr=c->r[12]; // 801BB23C
  if (true) { c->lr=0x801BB244u; dispatch(c,c->ctr); } // 801BB240
  c->r[3]=R32(c->r[31]+0x00000058u); // 801BB244
  c->r[5]=c->r[28]|c->r[28]; // 801BB248
  c->r[4]=0u+0x00000000u; // 801BB24C
  c->lr=0x801BB254u; f_8038046C(c); // 801BB250
  c->r[3]=0u+0x80440000u; // 801BB254
  c->r[5]=R32(c->r[31]+0x00000058u); // 801BB258
  c->r[3]=c->r[3]+0xFFFFA720u; // 801BB25C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BB260
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BB264
  c->r[4]=R32(c->r[3]+0x000000E4u); // 801BB268
  c->r[12]=R32(c->r[12]+0x00000034u); // 801BB26C
  c->ctr=c->r[12]; // 801BB270
  if (true) { c->lr=0x801BB278u; dispatch(c,c->ctr); } // 801BB274
  c->r[0]=0u+0x00000002u; // 801BB278
  {uint32_t ea=c->r[2]+0xFFFFB664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB27C
  c->r[3]=0u+0x00000000u; // 801BB280
  c->ctr=c->r[0]; // 801BB284
L_801BB288:;
  c->r[4]=c->r[31]+c->r[3]; // 801BB288
  c->r[3]=c->r[3]+0x00000004u; // 801BB28C
  {uint32_t ea=c->r[4]+0x00000060u; WF32(ea,c->f[0]);} // 801BB290
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB288; } // 801BB294
  c->lr=0x801BB29Cu; f_80291D94(c); // 801BB298
  c->r[0]=c->r[3]^0x80000000u; // 801BB29C
  c->r[3]=0u+0x43300000u; // 801BB2A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB2A4
  c->r[0]=0u+0x00000000u; // 801BB2A8
  {uint32_t ea=c->r[2]+0xFFFFB670u; c->f[3]=RF64(ea);} // 801BB2AC
  W32(c->r[1]+0x00000020u,c->r[3]); // 801BB2B0
  {uint32_t ea=c->r[2]+0xFFFFB66Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB2B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 801BB2B8
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB2BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801BB2C0
  W32(c->r[31]+0x0000006Cu,c->r[29]); // 801BB2C4
  W32(c->r[31]+0x00000070u,c->r[30]); // 801BB2C8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 801BB2CC
  W8(c->r[31]+0x00000074u,c->r[0]); // 801BB2D0
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 801BB2D4
L_801BB2D8:;
  c->r[11]=c->r[1]+0x00000050u; // 801BB2D8
  c->lr=0x801BB2E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BB2DC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801BB2E0
  c->lr=c->r[0]; // 801BB2E4
  c->r[1]=c->r[1]+0x00000050u; // 801BB2E8
  return; // 801BB2EC
}

// fn_801BB2F0
void f_801BB2F0(Ctx* __restrict c) {
  trace_call(0x801BB2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB2F0
  c->r[0]=c->lr; // 801BB2F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB2F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB2FC
  c->r[31]=c->r[4]|c->r[4]; // 801BB300
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BB304
  c->r[30]=c->r[3]|c->r[3]; // 801BB308
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801BB30C
  cmps(c,0,(int32_t)c->r[0],0); // 801BB310
  if (crb(c,2)) { goto L_801BB334; } // 801BB314
  cmps(c,0,(int32_t)c->r[5],0); // 801BB318
  if (crb(c,2)) { goto L_801BB334; } // 801BB31C
  c->r[3]=c->r[5]|c->r[5]; // 801BB320
  c->r[4]=c->r[0]|c->r[0]; // 801BB324
  c->lr=0x801BB32Cu; f_802A704C(c); // 801BB328
  c->r[0]=0u+0x00000000u; // 801BB32C
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 801BB330
L_801BB334:;
  c->r[4]=R32(c->r[30]+0x00000058u); // 801BB334
  cmps(c,0,(int32_t)c->r[4],0); // 801BB338
  if (crb(c,2)) { goto L_801BB378; } // 801BB33C
  c->r[3]=0u+0x80440000u; // 801BB340
  c->r[3]=c->r[3]+0xFFFFA720u; // 801BB344
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BB348
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BB34C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801BB350
  c->ctr=c->r[12]; // 801BB354
  if (true) { c->lr=0x801BB35Cu; dispatch(c,c->ctr); } // 801BB358
  cmps(c,0,(int32_t)c->r[31],0); // 801BB35C
  if (crb(c,2)) { goto L_801BB378; } // 801BB360
  c->r[4]=R32(c->r[30]+0x00000058u); // 801BB364
  c->r[3]=c->r[31]|c->r[31]; // 801BB368
  c->lr=0x801BB370u; f_802A704C(c); // 801BB36C
  c->r[0]=0u+0x00000000u; // 801BB370
  W32(c->r[30]+0x00000058u,c->r[0]); // 801BB374
L_801BB378:;
  c->r[0]=0u+0x00000002u; // 801BB378
  {uint32_t ea=c->r[2]+0xFFFFB664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB37C
  c->r[3]=0u+0x00000000u; // 801BB380
  c->ctr=c->r[0]; // 801BB384
L_801BB388:;
  c->r[4]=c->r[30]+c->r[3]; // 801BB388
  c->r[3]=c->r[3]+0x00000004u; // 801BB38C
  {uint32_t ea=c->r[4]+0x00000060u; WF32(ea,c->f[0]);} // 801BB390
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB388; } // 801BB394
  {uint32_t ea=c->r[2]+0xFFFFB664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB398
  c->r[0]=0u+0x00000000u; // 801BB39C
  cmps(c,0,(int32_t)c->r[31],0); // 801BB3A0
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 801BB3A4
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 801BB3A8
  W32(c->r[30]+0x00000070u,c->r[0]); // 801BB3AC
  if (crb(c,2)) { goto L_801BB3C0; } // 801BB3B0
  c->r[0]=0u+0x00000003u; // 801BB3B4
  W8(c->r[30]+0x00000074u,c->r[0]); // 801BB3B8
  goto L_801BB3C8; // 801BB3BC
L_801BB3C0:;
  c->r[0]=0u+0x00000001u; // 801BB3C0
  W8(c->r[30]+0x00000074u,c->r[0]); // 801BB3C4
L_801BB3C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB3C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB3CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BB3D0
  c->lr=c->r[0]; // 801BB3D4
  c->r[1]=c->r[1]+0x00000010u; // 801BB3D8
  return; // 801BB3DC
}

// fn_801BB3E0
void f_801BB3E0(Ctx* __restrict c) {
  trace_call(0x801BB3E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB3E0
  c->r[0]=c->lr; // 801BB3E4
  c->r[6]=0u+0x80400000u; // 801BB3E8
  c->r[4]=0u+0x801C0000u; // 801BB3EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB3F0
  c->r[5]=0u+0x801C0000u; // 801BB3F4
  c->r[6]=c->r[6]+0x00001C30u; // 801BB3F8
  c->r[4]=c->r[4]+0xFFFFB474u; // 801BB3FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB400
  c->r[31]=c->r[3]|c->r[3]; // 801BB404
  c->r[5]=c->r[5]+0xFFFFB4B0u; // 801BB408
  c->r[7]=0u+0x00000018u; // 801BB40C
  W32(c->r[3]+0x00000028u,c->r[6]); // 801BB410
  c->r[6]=0u+0x00000078u; // 801BB414
  c->r[3]=c->r[3]+0x0000002Cu; // 801BB418
  c->lr=0x801BB420u; f_80289B34(c); // 801BB41C
  c->r[3]=c->r[31]+0x00000B6Cu; // 801BB420
  c->r[4]=c->r[31]+0x00000BBCu; // 801BB424
  c->r[0]=0u+0x00000000u; // 801BB428
L_801BB42C:;
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BB42C
  c->r[3]=c->r[3]+0x00000004u; // 801BB430
  cmpu(c,0,c->r[3],c->r[4]); // 801BB434
  if (crb(c,0)) { IRQCHK(c); goto L_801BB42C; } // 801BB438
  c->r[0]=c->r[31]+0x00000C0Cu; // 801BB43C
  c->r[3]=0u+0x00000000u; // 801BB440
L_801BB444:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801BB444
  c->r[4]=c->r[4]+0x00000004u; // 801BB448
  cmpu(c,0,c->r[4],c->r[0]); // 801BB44C
  if (crb(c,0)) { IRQCHK(c); goto L_801BB444; } // 801BB450
  c->r[3]=c->r[31]|c->r[31]; // 801BB454
  c->lr=0x801BB45Cu; f_801BBFDC(c); // 801BB458
  c->r[3]=c->r[31]|c->r[31]; // 801BB45C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB460
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB464
  c->lr=c->r[0]; // 801BB468
  c->r[1]=c->r[1]+0x00000010u; // 801BB46C
  return; // 801BB470
}

// fn_801BB474
void f_801BB474(Ctx* __restrict c) {
  trace_call(0x801BB474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB474
  c->r[0]=c->lr; // 801BB478
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB47C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB480
  c->r[31]=c->r[3]|c->r[3]; // 801BB484
  c->lr=0x801BB48Cu; f_801B22E8(c); // 801BB488
  c->r[4]=0u+0x80400000u; // 801BB48C
  c->r[3]=c->r[31]|c->r[31]; // 801BB490
  c->r[4]=c->r[4]+0x00001C3Cu; // 801BB494
  W32(c->r[31]+0x00000000u,c->r[4]); // 801BB498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB49C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB4A0
  c->lr=c->r[0]; // 801BB4A4
  c->r[1]=c->r[1]+0x00000010u; // 801BB4A8
  return; // 801BB4AC
}

// fn_801BB4B0
void f_801BB4B0(Ctx* __restrict c) {
  trace_call(0x801BB4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB4B0
  c->r[0]=c->lr; // 801BB4B4
  cmps(c,0,(int32_t)c->r[3],0); // 801BB4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB4BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BB4C0
  c->r[30]=c->r[3]|c->r[3]; // 801BB4C4
  c->r[31]=c->r[4]|c->r[4]; // 801BB4C8
  if (crb(c,2)) { goto L_801BB4E8; } // 801BB4CC
  c->r[4]=0u+0x00000000u; // 801BB4D0
  c->lr=0x801BB4D8u; f_801B235C(c); // 801BB4D4
  cmps(c,0,(int32_t)c->r[31],0); // 801BB4D8
  if (!crb(c,1)) { goto L_801BB4E8; } // 801BB4DC
  c->r[3]=c->r[30]|c->r[30]; // 801BB4E0
  c->lr=0x801BB4E8u; f_802896EC(c); // 801BB4E4
L_801BB4E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801BB4E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BB4EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB4F0
  c->lr=c->r[0]; // 801BB4F4
  c->r[1]=c->r[1]+0x00000010u; // 801BB4F8
  return; // 801BB4FC
}

// dtor_801BB500
void f_801BB500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB500
  c->r[0]=c->lr; // 801BB504
  cmps(c,0,(int32_t)c->r[3],0); // 801BB508
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB50C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BB510
  c->r[30]=c->r[3]|c->r[3]; // 801BB514
  c->r[31]=c->r[4]|c->r[4]; // 801BB518
  if (crb(c,2)) { goto L_801BB548; } // 801BB51C
  c->r[4]=0u+0x801C0000u; // 801BB520
  c->r[5]=0u+0x00000078u; // 801BB524
  c->r[4]=c->r[4]+0xFFFFB4B0u; // 801BB528
  c->r[6]=0u+0x00000018u; // 801BB52C
  c->r[3]=c->r[3]+0x0000002Cu; // 801BB530
  c->lr=0x801BB538u; f_80289C2C(c); // 801BB534
  cmps(c,0,(int32_t)c->r[31],0); // 801BB538
  if (!crb(c,1)) { goto L_801BB548; } // 801BB53C
  c->r[3]=c->r[30]|c->r[30]; // 801BB540
  c->lr=0x801BB548u; f_802896EC(c); // 801BB544
L_801BB548:;
  c->r[3]=c->r[30]|c->r[30]; // 801BB548
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BB54C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB550
  c->lr=c->r[0]; // 801BB554
  c->r[1]=c->r[1]+0x00000010u; // 801BB558
  return; // 801BB55C
}

// fn_801BB560
void f_801BB560(Ctx* __restrict c) {
  trace_call(0x801BB560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB560
  c->r[0]=c->lr; // 801BB564
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB568
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BB56C
  c->r[30]=c->r[3]|c->r[3]; // 801BB570
  c->lr=0x801BB578u; f_801BBFDC(c); // 801BB574
  c->r[31]=0u+0x804D0000u; // 801BB578
  c->r[3]=c->r[30]|c->r[30]; // 801BB57C
  c->r[31]=c->r[31]+0x00003280u; // 801BB580
  c->r[5]=0u+0x00001000u; // 801BB584
  c->r[4]=c->r[31]+0x00000034u; // 801BB588
  c->r[6]=0u+0x00000018u; // 801BB58C
  c->r[7]=0u+0x00000000u; // 801BB590
  c->lr=0x801BB598u; f_801BD580(c); // 801BB594
  c->r[3]=c->r[30]|c->r[30]; // 801BB598
  c->r[4]=c->r[31]+0x00000034u; // 801BB59C
  c->r[5]=0u+0x00000080u; // 801BB5A0
  c->r[6]=0u+0x00000018u; // 801BB5A4
  c->r[7]=0u+0x00000001u; // 801BB5A8
  c->lr=0x801BB5B0u; f_801BD580(c); // 801BB5AC
  c->r[3]=c->r[30]|c->r[30]; // 801BB5B0
  c->lr=0x801BB5B8u; f_801BC05C(c); // 801BB5B4
  c->r[3]=0u+0x80470000u; // 801BB5B8
  c->r[4]=0u+0x803E0000u; // 801BB5BC
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801BB5C0
  c->r[5]=0u+0x00000000u; // 801BB5C4
  c->r[4]=c->r[4]+0x00000955u; // 801BB5C8
  c->lr=0x801BB5D0u; f_80066E4C(c); // 801BB5CC
  c->r[4]=c->r[3]|c->r[3]; // 801BB5D0
  c->r[3]=c->r[30]|c->r[30]; // 801BB5D4
  c->lr=0x801BB5DCu; f_801BC0B8(c); // 801BB5D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BB5DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB5E0
  c->lr=c->r[0]; // 801BB5E4
  c->r[1]=c->r[1]+0x00000010u; // 801BB5E8
  return; // 801BB5EC
}

// fn_801BB5F0
void f_801BB5F0(Ctx* __restrict c) {
  trace_call(0x801BB5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB5F0
  c->r[0]=c->lr; // 801BB5F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB5F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB5FC
  c->r[31]=c->r[3]|c->r[3]; // 801BB600
  c->lr=0x801BB608u; f_801BC05C(c); // 801BB604
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BB608
  c->lr=0x801BB610u; f_802A6EB4(c); // 801BB60C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801BB610
  c->lr=0x801BB618u; f_802A6EB4(c); // 801BB614
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB618
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB61C
  c->lr=c->r[0]; // 801BB620
  c->r[1]=c->r[1]+0x00000010u; // 801BB624
  return; // 801BB628
}

// fn_801BB62C
void f_801BB62C(Ctx* __restrict c) {
  trace_call(0x801BB62Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB62C
  c->r[0]=c->lr; // 801BB630
  cmps(c,0,(int32_t)c->r[4],0); // 801BB634
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB638
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BB63C
  c->r[26]=c->r[3]|c->r[3]; // 801BB640
  c->r[27]=c->r[4]|c->r[4]; // 801BB644
  c->r[28]=c->r[5]|c->r[5]; // 801BB648
  c->r[29]=c->r[6]|c->r[6]; // 801BB64C
  c->r[30]=c->r[7]|c->r[7]; // 801BB650
  if (crb(c,0)) { goto L_801BB660; } // 801BB654
  cmps(c,0,(int32_t)c->r[4],20); // 801BB658
  if (crb(c,0)) { goto L_801BB664; } // 801BB65C
L_801BB660:;
  c->r[27]=0u+0x00000000u; // 801BB660
L_801BB664:;
  c->r[3]=c->r[27]|c->r[27]; // 801BB664
  c->lr=0x801BB66Cu; f_801BBFB4(c); // 801BB668
  cmps(c,0,(int32_t)c->r[3],0); // 801BB66C
  if (crb(c,2)) { goto L_801BB6FC; } // 801BB670
  c->r[0]=0u+0x00000018u; // 801BB674
  c->r[31]=0u+0x00000000u; // 801BB678
  c->r[3]=0u+0x00000000u; // 801BB67C
  c->ctr=c->r[0]; // 801BB680
L_801BB684:;
  c->r[4]=c->r[26]+c->r[3]; // 801BB684
  c->r[0]=R8(c->r[4]+0x000000A0u); // 801BB688
  cmps(c,0,(int32_t)c->r[0],3); // 801BB68C
  if (!crb(c,2)) { goto L_801BB6DC; } // 801BB690
  c->r[5]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801BB694
  c->r[7]=0u+0x00000000u; // 801BB698
  c->r[4]=c->r[26]+c->r[5]; // 801BB69C
  c->r[0]=R32(c->r[4]+0x00000C0Cu); // 801BB6A0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BB6A4
  if (crb(c,2)) { goto L_801BB6B0; } // 801BB6A8
  c->r[7]=c->r[4]+0x00000BBCu; // 801BB6AC
L_801BB6B0:;
  c->r[6]=c->r[26]+c->r[5]; // 801BB6B0
  c->r[3]=c->r[26]+c->r[3]; // 801BB6B4
  c->r[8]=c->r[30]|c->r[30]; // 801BB6B8
  c->r[9]=c->r[28]|c->r[28]; // 801BB6BC
  c->r[10]=c->r[29]|c->r[29]; // 801BB6C0
  c->r[3]=c->r[3]+0x0000002Cu; // 801BB6C4
  c->r[4]=c->r[26]+0x00000008u; // 801BB6C8
  c->r[5]=c->r[26]+0x00000018u; // 801BB6CC
  c->r[6]=c->r[6]+0x00000B6Cu; // 801BB6D0
  c->lr=0x801BB6D8u; f_801BB134(c); // 801BB6D4
  goto L_801BB6E8; // 801BB6D8
L_801BB6DC:;
  c->r[31]=c->r[31]+0x00000001u; // 801BB6DC
  c->r[3]=c->r[3]+0x00000078u; // 801BB6E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB684; } // 801BB6E4
L_801BB6E8:;
  cmps(c,0,(int32_t)c->r[31],24); // 801BB6E8
  if (crb(c,0)) { goto L_801BB6F4; } // 801BB6EC
  c->r[31]=0u+0xFFFFFFFFu; // 801BB6F0
L_801BB6F4:;
  c->r[3]=c->r[31]|c->r[31]; // 801BB6F4
  goto L_801BB700; // 801BB6F8
L_801BB6FC:;
  c->r[3]=0u+0xFFFFFFFFu; // 801BB6FC
L_801BB700:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BB700
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB704
  c->lr=c->r[0]; // 801BB708
  c->r[1]=c->r[1]+0x00000020u; // 801BB70C
  return; // 801BB710
}

// fn_801BB714
void f_801BB714(Ctx* __restrict c) {
  trace_call(0x801BB714u);
  {uint32_t ea=c->r[1]+0xFFFFFE10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB714
  c->r[0]=c->lr; // 801BB718
  W32(c->r[1]+0x000001F4u,c->r[0]); // 801BB71C
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[31]);} // 801BB720
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,31,ea,0,0);} // 801BB724
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[30]);} // 801BB728
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,30,ea,0,0);} // 801BB72C
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[29]);} // 801BB730
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,29,ea,0,0);} // 801BB734
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[28]);} // 801BB738
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,28,ea,0,0);} // 801BB73C
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[27]);} // 801BB740
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,27,ea,0,0);} // 801BB744
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[26]);} // 801BB748
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,26,ea,0,0);} // 801BB74C
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[25]);} // 801BB750
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,25,ea,0,0);} // 801BB754
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[24]);} // 801BB758
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,24,ea,0,0);} // 801BB75C
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[23]);} // 801BB760
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,23,ea,0,0);} // 801BB764
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[22]);} // 801BB768
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,22,ea,0,0);} // 801BB76C
  c->r[11]=c->r[1]+0x00000150u; // 801BB770
  c->lr=0x801BB778u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BB774
  c->r[4]=0u+0x80440000u; // 801BB778
  c->r[28]=c->r[3]|c->r[3]; // 801BB77C
  c->r[31]=c->r[4]+0xFFFFA720u; // 801BB780
  c->r[3]=R32(c->r[31]+0x00000004u); // 801BB784
  c->lr=0x801BB78Cu; f_80381A54(c); // 801BB788
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BB78C
  c->r[3]=c->r[1]+0x0000000Cu; // 801BB790
  c->r[4]=c->r[1]+0x000000A0u; // 801BB794
  c->lr=0x801BB79Cu; f_8037D32C(c); // 801BB798
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB79C
  c->r[3]=c->r[1]+0x0000007Cu; // 801BB7A0
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BB7A4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BB7A8
  c->lr=0x801BB7B0u; f_80065358(c); // 801BB7AC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB7B0
  c->r[3]=c->r[1]+0x00000070u; // 801BB7B4
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BB7B8
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB7BC
  c->f[1]=-c->f[1]; // 801BB7C0
  c->f[2]=-c->f[2]; // 801BB7C4
  c->f[3]=-c->f[0]; // 801BB7C8
  c->lr=0x801BB7D0u; f_80065358(c); // 801BB7CC
  c->r[22]=0u+0x804D0000u; // 801BB7D0
  c->r[21]=0u+0x803E0000u; // 801BB7D4
  {uint32_t ea=c->r[2]+0xFFFFB684u; c->f[27]=c->ps1[27]=RF32(ea);} // 801BB7D8
  c->r[22]=c->r[22]+0x00003318u; // 801BB7DC
  {uint32_t ea=c->r[2]+0xFFFFB664u; c->f[28]=c->ps1[28]=RF32(ea);} // 801BB7E0
  c->r[21]=c->r[21]+0x00000955u; // 801BB7E4
  {uint32_t ea=c->r[2]+0xFFFFB670u; c->f[29]=RF64(ea);} // 801BB7E8
  c->r[29]=0u+0x00000000u; // 801BB7EC
  {uint32_t ea=c->r[2]+0xFFFFB66Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801BB7F0
  c->r[26]=0u+0x00000000u; // 801BB7F4
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BB7F8
  c->r[20]=0u+0x43300000u; // 801BB7FC
  {uint32_t ea=c->r[2]+0xFFFFB67Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 801BB800
  c->r[24]=0u+0x00000000u; // 801BB804
  {uint32_t ea=c->r[2]+0xFFFFB680u; c->f[26]=c->ps1[26]=RF32(ea);} // 801BB808
  c->r[25]=0u+0x00000003u; // 801BB80C
  {uint32_t ea=c->r[2]+0xFFFFB678u; c->f[24]=c->ps1[24]=RF32(ea);} // 801BB810
  c->r[23]=0u+0x00000002u; // 801BB814
  c->r[27]=0u+0x00000002u; // 801BB818
L_801BB81C:;
  c->r[30]=c->r[28]+c->r[26]; // 801BB81C
  c->r[0]=R8(c->r[30]+0x000000A0u); // 801BB820
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801BB824
  cmps(c,0,(int32_t)c->r[0],1); // 801BB828
  if (crb(c,2)) { goto L_801BBA8C; } // 801BB82C
  if (!crb(c,0)) { goto L_801BB840; } // 801BB830
  cmps(c,0,(int32_t)c->r[0],0); // 801BB834
  if (!crb(c,0)) { goto L_801BB84C; } // 801BB838
  goto L_801BBAC8; // 801BB83C
L_801BB840:;
  cmps(c,0,(int32_t)c->r[0],3); // 801BB840
  if (!crb(c,0)) { goto L_801BBAC8; } // 801BB844
  goto L_801BBA94; // 801BB848
L_801BB84C:;
  {uint32_t ea=c->r[22]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB84C
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB850
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BB854
  fcmp(c,0,c->f[0],c->f[28]); // 801BB858
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[0]);} // 801BB85C
  if (!crb(c,0)) { goto L_801BBA2C; } // 801BB860
  c->lr=0x801BB868u; f_80291D94(c); // 801BB864
  c->r[0]=c->r[3]^0x80000000u; // 801BB868
  W32(c->r[1]+0x00000100u,c->r[20]); // 801BB86C
  W32(c->r[1]+0x00000104u,c->r[0]); // 801BB870
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 801BB874
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801BB878
  c->f[0]=c->ps1[0]=S(std::fma(c->f[30],c->f[0],c->f[31])); // 801BB87C
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[0]);} // 801BB880
  c->lr=0x801BB888u; f_80066EFC(c); // 801BB884
  c->r[3]=c->r[3]+0x00000088u; // 801BB888
  c->lr=0x801BB890u; f_80041174(c); // 801BB88C
  fcmp(c,0,c->f[1],c->f[24]); // 801BB890
  if (!crb(c,0)) { goto L_801BBA2C; } // 801BB894
  c->lr=0x801BB89Cu; f_80066EFC(c); // 801BB898
  c->r[3]=c->r[3]+0x00000468u; // 801BB89C
  c->lr=0x801BB8A4u; f_80041174(c); // 801BB8A0
  fcmp(c,0,c->f[1],c->f[24]); // 801BB8A4
  if (!crb(c,0)) { goto L_801BBA2C; } // 801BB8A8
  c->r[3]=R32(c->r[13]+0xFFFF96C8u); // 801BB8AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BB8B0
  c->r[12]=R32(c->r[12]+0x00000088u); // 801BB8B4
  c->ctr=c->r[12]; // 801BB8B8
  if (true) { c->lr=0x801BB8C0u; dispatch(c,c->ctr); } // 801BB8BC
  cmpu(c,0,c->r[3],0x00000001u); // 801BB8C0
  if (crb(c,2)) { goto L_801BBA2C; } // 801BB8C4
  c->r[3]=R32(c->r[30]+0x00000084u); // 801BB8C8
  c->r[5]=c->r[1]+0x000000D0u; // 801BB8CC
  c->r[4]=0u+0x00000000u; // 801BB8D0
  c->lr=0x801BB8D8u; f_80380554(c); // 801BB8D4
  c->r[3]=c->r[30]|c->r[30]; // 801BB8D8
  c->r[19]=c->r[3]+0x0000002Cu; // 801BB8DC
  c->r[3]=c->r[19]|c->r[19]; // 801BB8E0
  c->lr=0x801BB8E8u; f_801B24F4(c); // 801BB8E4
  c->r[4]=c->r[3]|c->r[3]; // 801BB8E8
  c->r[3]=c->r[1]+0x000000D0u; // 801BB8EC
  c->r[5]=c->r[1]+0x00000088u; // 801BB8F0
  c->lr=0x801BB8F8u; f_802652E8(c); // 801BB8F4
  c->r[3]=c->r[19]|c->r[19]; // 801BB8F8
  c->lr=0x801BB900u; f_801B24F4(c); // 801BB8FC
  c->r[4]=c->r[3]+0x0000000Cu; // 801BB900
  c->r[3]=c->r[1]+0x000000D0u; // 801BB904
  c->r[5]=c->r[1]+0x00000094u; // 801BB908
  c->lr=0x801BB910u; f_802652E8(c); // 801BB90C
  c->r[3]=c->r[19]|c->r[19]; // 801BB910
  c->lr=0x801BB918u; f_801B24F4(c); // 801BB914
  {uint32_t ea=c->r[3]+0x00000018u; c->f[22]=c->ps1[22]=RF32(ea);} // 801BB918
  c->lr=0x801BB920u; f_80291D94(c); // 801BB91C
  c->r[0]=c->r[3]^0x80000000u; // 801BB920
  W32(c->r[1]+0x00000100u,c->r[20]); // 801BB924
  c->r[3]=c->r[1]+0x00000034u; // 801BB928
  c->r[4]=c->r[1]+0x00000094u; // 801BB92C
  W32(c->r[1]+0x00000104u,c->r[0]); // 801BB930
  c->r[5]=c->r[1]+0x00000088u; // 801BB934
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 801BB938
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801BB93C
  c->f[23]=c->ps1[23]=S(c->f[30]*c->f[0]); // 801BB940
  c->lr=0x801BB948u; f_80064C74(c); // 801BB944
  c->f[1]=c->f[23]; // 801BB948
  c->r[3]=c->r[1]+0x00000040u; // 801BB94C
  c->r[4]=c->r[1]+0x00000034u; // 801BB950
  c->lr=0x801BB958u; f_80064C58(c); // 801BB954
  c->r[3]=c->r[1]+0x0000004Cu; // 801BB958
  c->r[4]=c->r[1]+0x00000040u; // 801BB95C
  c->r[5]=c->r[1]+0x00000088u; // 801BB960
  c->lr=0x801BB968u; f_80064C34(c); // 801BB964
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BB968
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB96C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB970
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 801BB974
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 801BB978
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 801BB97C
  c->lr=0x801BB984u; f_80291D94(c); // 801BB980
  c->r[0]=c->r[3]^0x80000000u; // 801BB984
  W32(c->r[1]+0x00000108u,c->r[20]); // 801BB988
  c->f[1]=c->f[22]; // 801BB98C
  c->r[3]=c->r[1]+0x0000001Cu; // 801BB990
  W32(c->r[1]+0x0000010Cu,c->r[0]); // 801BB994
  c->r[4]=c->r[1]+0x0000007Cu; // 801BB998
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=RF64(ea);} // 801BB99C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801BB9A0
  c->f[23]=c->ps1[23]=S(std::fma(c->f[25],c->f[0],-c->f[31])); // 801BB9A4
  c->lr=0x801BB9ACu; f_80064C58(c); // 801BB9A8
  c->f[1]=c->f[23]; // 801BB9AC
  c->r[3]=c->r[1]+0x00000028u; // 801BB9B0
  c->r[4]=c->r[1]+0x0000001Cu; // 801BB9B4
  c->lr=0x801BB9BCu; f_80064C58(c); // 801BB9B8
  c->r[3]=c->r[1]+0x00000064u; // 801BB9BC
  c->r[5]=c->r[1]+0x00000028u; // 801BB9C0
  c->r[4]=c->r[3]|c->r[3]; // 801BB9C4
  c->lr=0x801BB9CCu; f_80064C34(c); // 801BB9C8
  c->f[1]=c->f[22]; // 801BB9CC
  c->r[3]=c->r[1]+0x00000010u; // 801BB9D0
  c->r[4]=c->r[1]+0x00000070u; // 801BB9D4
  c->lr=0x801BB9DCu; f_80064C58(c); // 801BB9D8
  c->r[3]=c->r[1]+0x00000064u; // 801BB9DC
  c->r[5]=c->r[1]+0x00000010u; // 801BB9E0
  c->r[4]=c->r[3]|c->r[3]; // 801BB9E4
  c->lr=0x801BB9ECu; f_80064C74(c); // 801BB9E8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801BB9EC
  c->lr=0x801BB9F4u; f_80381A54(c); // 801BB9F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BB9F4
  c->r[3]=c->r[1]+0x00000008u; // 801BB9F8
  c->r[4]=c->r[1]+0x00000058u; // 801BB9FC
  c->lr=0x801BBA04u; f_8037CE54(c); // 801BBA00
  c->r[3]=c->r[1]+0x00000058u; // 801BBA04
  c->r[4]=c->r[1]+0x00000064u; // 801BBA08
  c->lr=0x801BBA10u; f_80265924(c); // 801BBA0C
  fcmp(c,0,c->f[1],c->f[26]); // 801BBA10
  if (!crb(c,1)) { goto L_801BBA2C; } // 801BBA14
  c->r[3]=c->r[21]+0x0000000Bu; // 801BBA18
  c->r[4]=c->r[1]+0x00000064u; // 801BBA1C
  c->r[5]=0u+0x00000000u; // 801BBA20
  c->r[6]=0u+0x00000000u; // 801BBA24
  c->lr=0x801BBA2Cu; f_801CC30C(c); // 801BBA28
L_801BBA2C:;
  c->r[3]=R32(c->r[30]+0x00000088u); // 801BBA2C
  cmps(c,0,(int32_t)c->r[3],0); // 801BBA30
  if (crb(c,2)) { goto L_801BBA54; } // 801BBA34
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BBA38
  {uint32_t ea=c->r[22]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBA3C
  {uint32_t ea=c->r[22]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBA40
  c->r[12]=R32(c->r[12]+0x00000028u); // 801BBA44
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801BBA48
  c->ctr=c->r[12]; // 801BBA4C
  if (true) { c->lr=0x801BBA54u; dispatch(c,c->ctr); } // 801BBA50
L_801BBA54:;
  c->r[3]=0u+0x00000000u; // 801BBA54
  c->ctr=c->r[27]; // 801BBA58
L_801BBA5C:;
  c->r[4]=c->r[30]+c->r[3]; // 801BBA5C
  {uint32_t ea=c->r[22]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBA60
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBA64
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[27],c->f[1],-c->f[0])); // 801BBA68
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801BBA6C
  {uint32_t ea=c->r[4]+0x0000008Cu; WF32(ea,c->f[1]);} // 801BBA70
  fcmp(c,0,c->f[0],c->f[28]); // 801BBA74
  if (!crb(c,0)) { goto L_801BBA80; } // 801BBA78
  {uint32_t ea=c->r[4]+0x0000008Cu; WF32(ea,c->f[28]);} // 801BBA7C
L_801BBA80:;
  c->r[3]=c->r[3]+0x00000004u; // 801BBA80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BBA5C; } // 801BBA84
  goto L_801BBAC8; // 801BBA88
L_801BBA8C:;
  W8(c->r[30]+0x000000A0u,c->r[23]); // 801BBA8C
  goto L_801BBAC8; // 801BBA90
L_801BBA94:;
  c->r[4]=R32(c->r[30]+0x00000088u); // 801BBA94
  cmps(c,0,(int32_t)c->r[4],0); // 801BBA98
  if (crb(c,2)) { goto L_801BBAA8; } // 801BBA9C
  c->r[3]=c->r[28]+0x00000018u; // 801BBAA0
  c->lr=0x801BBAA8u; f_802A704C(c); // 801BBAA4
L_801BBAA8:;
  c->r[4]=R32(c->r[30]+0x00000084u); // 801BBAA8
  cmps(c,0,(int32_t)c->r[4],0); // 801BBAAC
  if (crb(c,2)) { goto L_801BBABC; } // 801BBAB0
  c->r[3]=c->r[28]+0x00000008u; // 801BBAB4
  c->lr=0x801BBABCu; f_802A704C(c); // 801BBAB8
L_801BBABC:;
  W32(c->r[30]+0x00000084u,c->r[24]); // 801BBABC
  W32(c->r[30]+0x00000088u,c->r[24]); // 801BBAC0
  W8(c->r[30]+0x000000A0u,c->r[25]); // 801BBAC4
L_801BBAC8:;
  c->r[29]=c->r[29]+0x00000001u; // 801BBAC8
  c->r[26]=c->r[26]+0x00000078u; // 801BBACC
  cmps(c,0,(int32_t)c->r[29],24); // 801BBAD0
  if (crb(c,0)) { IRQCHK(c); goto L_801BB81C; } // 801BBAD4
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,31,ea,0,0);} // 801BBAD8
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[31]=RF64(ea);} // 801BBADC
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,30,ea,0,0);} // 801BBAE0
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[30]=RF64(ea);} // 801BBAE4
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,29,ea,0,0);} // 801BBAE8
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[29]=RF64(ea);} // 801BBAEC
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,28,ea,0,0);} // 801BBAF0
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[28]=RF64(ea);} // 801BBAF4
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,27,ea,0,0);} // 801BBAF8
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[27]=RF64(ea);} // 801BBAFC
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,26,ea,0,0);} // 801BBB00
  {uint32_t ea=c->r[1]+0x00000190u; c->f[26]=RF64(ea);} // 801BBB04
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,25,ea,0,0);} // 801BBB08
  {uint32_t ea=c->r[1]+0x00000180u; c->f[25]=RF64(ea);} // 801BBB0C
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,24,ea,0,0);} // 801BBB10
  {uint32_t ea=c->r[1]+0x00000170u; c->f[24]=RF64(ea);} // 801BBB14
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,23,ea,0,0);} // 801BBB18
  {uint32_t ea=c->r[1]+0x00000160u; c->f[23]=RF64(ea);} // 801BBB1C
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,22,ea,0,0);} // 801BBB20
  c->r[11]=c->r[1]+0x00000150u; // 801BBB24
  {uint32_t ea=c->r[1]+0x00000150u; c->f[22]=RF64(ea);} // 801BBB28
  c->lr=0x801BBB30u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BBB2C
  c->r[0]=R32(c->r[1]+0x000001F4u); // 801BBB30
  c->lr=c->r[0]; // 801BBB34
  c->r[1]=c->r[1]+0x000001F0u; // 801BBB38
  return; // 801BBB3C
}

// fn_801BBB40
void f_801BBB40(Ctx* __restrict c) {
  trace_call(0x801BBB40u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBB40
  c->r[0]=c->lr; // 801BBB44
  W32(c->r[1]+0x00000104u,c->r[0]); // 801BBB48
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 801BBB4C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 801BBB50
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 801BBB54
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 801BBB58
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[29]);} // 801BBB5C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,29,ea,0,0);} // 801BBB60
  c->r[11]=c->r[1]+0x000000D0u; // 801BBB64
  c->lr=0x801BBB6Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BBB68
  cmps(c,0,(int32_t)c->r[4],0); // 801BBB6C
  c->r[22]=c->r[3]|c->r[3]; // 801BBB70
  c->r[23]=c->r[5]|c->r[5]; // 801BBB74
  c->r[24]=c->r[6]|c->r[6]; // 801BBB78
  if (crb(c,0)) { goto L_801BBB88; } // 801BBB7C
  cmps(c,0,(int32_t)c->r[4],2); // 801BBB80
  if (crb(c,0)) { goto L_801BBB8C; } // 801BBB84
L_801BBB88:;
  c->r[4]=0u+0x00000000u; // 801BBB88
L_801BBB8C:;
  {uint32_t ea=c->r[2]+0xFFFFB664u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BBB8C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801BBB90
  {uint32_t ea=c->r[2]+0xFFFFB688u; c->f[29]=c->ps1[29]=RF32(ea);} // 801BBB94
  c->r[30]=c->r[3]+c->r[0]; // 801BBB98
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 801BBB9C
  c->r[26]=0u+0xFFFFFFFFu; // 801BBBA0
  c->r[25]=0u+0x00000000u; // 801BBBA4
  c->r[31]=0u+0x00000000u; // 801BBBA8
L_801BBBAC:;
  c->r[3]=c->r[22]+c->r[31]; // 801BBBAC
  c->r[0]=R8(c->r[3]+0x000000A0u); // 801BBBB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BBBB4
  if (!crb(c,2)) { goto L_801BBD0C; } // 801BBBB8
  c->r[28]=c->r[3]+0x0000002Cu; // 801BBBBC
  c->r[3]=c->r[28]|c->r[28]; // 801BBBC0
  c->lr=0x801BBBC8u; f_801B24F4(c); // 801BBBC4
  c->r[29]=c->r[22]+c->r[31]; // 801BBBC8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BBBCC
  c->r[3]=R32(c->r[29]+0x00000098u); // 801BBBD0
  c->lr=0x801BBBD8u; f_801BD354(c); // 801BBBD4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBBD8
  c->r[27]=c->r[30]+c->r[31]; // 801BBBDC
  {uint32_t ea=c->r[27]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBBE0
  c->r[5]=c->r[1]+0x0000006Cu; // 801BBBE4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 801BBBE8
  c->r[3]=R32(c->r[29]+0x00000084u); // 801BBBEC
  c->r[4]=0u+0x00000000u; // 801BBBF0
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 801BBBF4
  c->lr=0x801BBBFCu; f_80380554(c); // 801BBBF8
  c->r[3]=c->r[28]|c->r[28]; // 801BBBFC
  c->lr=0x801BBC04u; f_801B24F4(c); // 801BBC00
  c->r[4]=c->r[3]|c->r[3]; // 801BBC04
  c->r[3]=c->r[1]+0x0000006Cu; // 801BBC08
  c->r[5]=c->r[1]+0x00000054u; // 801BBC0C
  c->lr=0x801BBC14u; f_802652E8(c); // 801BBC10
  c->r[3]=c->r[28]|c->r[28]; // 801BBC14
  c->lr=0x801BBC1Cu; f_801B24F4(c); // 801BBC18
  c->r[4]=c->r[3]+0x0000000Cu; // 801BBC1C
  c->r[3]=c->r[1]+0x0000006Cu; // 801BBC20
  c->r[5]=c->r[1]+0x00000060u; // 801BBC24
  c->lr=0x801BBC2Cu; f_802652E8(c); // 801BBC28
  c->r[3]=c->r[23]|c->r[23]; // 801BBC2C
  c->r[4]=c->r[1]+0x00000054u; // 801BBC30
  c->r[5]=c->r[1]+0x00000008u; // 801BBC34
  c->r[6]=0u+0x00000000u; // 801BBC38
  c->lr=0x801BBC40u; f_80395B20(c); // 801BBC3C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 801BBC40
  fcmp(c,0,c->f[1],c->f[0]); // 801BBC44
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BBC48
  if (!crb(c,2)) { goto L_801BBD08; } // 801BBC4C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBC50
  c->r[3]=c->r[1]+0x00000048u; // 801BBC54
  {uint32_t ea=c->r[1]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBC58
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BBC5C
  c->lr=0x801BBC64u; f_80065358(c); // 801BBC60
  {uint32_t ea=c->r[23]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBC64
  c->r[3]=c->r[1]+0x0000000Cu; // 801BBC68
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBC6C
  c->r[4]=c->r[3]|c->r[3]; // 801BBC70
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801BBC74
  c->r[5]=c->r[1]+0x0000003Cu; // 801BBC78
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBC7C
  {uint32_t ea=c->r[23]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BBC80
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBC84
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[3]);} // 801BBC88
  {uint32_t ea=c->r[23]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BBC8C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 801BBC90
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801BBC94
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801BBC98
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801BBC9C
  c->lr=0x801BBCA4u; f_80064C74(c); // 801BBCA0
  c->r[3]=c->r[1]+0x0000000Cu; // 801BBCA4
  c->lr=0x801BBCACu; f_802657AC(c); // 801BBCA8
  fcmp(c,0,c->f[1],c->f[29]); // 801BBCAC
  if (!crb(c,0)) { goto L_801BBD0C; } // 801BBCB0
  c->f[29]=c->f[1]; // 801BBCB4
  cmps(c,0,(int32_t)c->r[24],0); // 801BBCB8
  c->r[26]=c->r[25]|c->r[25]; // 801BBCBC
  if (crb(c,2)) { goto L_801BBD0C; } // 801BBCC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BBCC4
  c->r[5]=c->r[23]|c->r[23]; // 801BBCC8
  c->r[3]=c->r[1]+0x00000018u; // 801BBCCC
  c->r[4]=c->r[23]+0x0000000Cu; // 801BBCD0
  c->lr=0x801BBCD8u; f_80064C74(c); // 801BBCD4
  c->f[1]=c->f[30]; // 801BBCD8
  c->r[3]=c->r[1]+0x00000024u; // 801BBCDC
  c->r[4]=c->r[1]+0x00000018u; // 801BBCE0
  c->lr=0x801BBCE8u; f_80064C58(c); // 801BBCE4
  c->r[5]=c->r[23]|c->r[23]; // 801BBCE8
  c->r[3]=c->r[1]+0x00000030u; // 801BBCEC
  c->r[4]=c->r[1]+0x00000024u; // 801BBCF0
  c->lr=0x801BBCF8u; f_80064C34(c); // 801BBCF4
  c->r[3]=c->r[24]|c->r[24]; // 801BBCF8
  c->r[4]=c->r[1]+0x00000030u; // 801BBCFC
  c->lr=0x801BBD04u; f_800F471C(c); // 801BBD00
  goto L_801BBD0C; // 801BBD04
L_801BBD08:;
  {uint32_t ea=c->r[27]+0x0000008Cu; WF32(ea,c->f[31]);} // 801BBD08
L_801BBD0C:;
  c->r[25]=c->r[25]+0x00000001u; // 801BBD0C
  c->r[31]=c->r[31]+0x00000078u; // 801BBD10
  cmps(c,0,(int32_t)c->r[25],24); // 801BBD14
  if (crb(c,0)) { IRQCHK(c); goto L_801BBBAC; } // 801BBD18
  c->r[3]=c->r[26]|c->r[26]; // 801BBD1C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 801BBD20
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 801BBD24
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 801BBD28
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 801BBD2C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,29,ea,0,0);} // 801BBD30
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[29]=RF64(ea);} // 801BBD34
  c->r[11]=c->r[1]+0x000000D0u; // 801BBD38
  c->lr=0x801BBD40u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BBD3C
  c->r[0]=R32(c->r[1]+0x00000104u); // 801BBD40
  c->lr=c->r[0]; // 801BBD44
  c->r[1]=c->r[1]+0x00000100u; // 801BBD48
  return; // 801BBD4C
}

// fn_801BBD50
void f_801BBD50(Ctx* __restrict c) {
  trace_call(0x801BBD50u);
  cmps(c,0,(int32_t)c->r[4],0); // 801BBD50
  if (crb(c,0)) { goto L_801BBD60; } // 801BBD54
  cmps(c,0,(int32_t)c->r[4],2); // 801BBD58
  if (crb(c,0)) { goto L_801BBD64; } // 801BBD5C
L_801BBD60:;
  c->r[4]=0u+0x00000000u; // 801BBD60
L_801BBD64:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BBD64
  if (crb(c,0)) { goto L_801BBD74; } // 801BBD68
  cmps(c,0,(int32_t)c->r[5],24); // 801BBD6C
  if (crb(c,0)) { goto L_801BBD78; } // 801BBD70
L_801BBD74:;
  c->r[5]=0u+0x00000000u; // 801BBD74
L_801BBD78:;
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)120); // 801BBD78
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801BBD7C
  {uint32_t ea=c->r[2]+0xFFFFB664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBD80
  c->r[3]=c->r[3]+c->r[5]; // 801BBD84
  c->r[3]=c->r[3]+c->r[0]; // 801BBD88
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBD8C
  fcmp(c,0,c->f[1],c->f[0]); // 801BBD90
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BBD94
  if (!crb(c,2)) return; // 801BBD98
  {uint32_t ea=c->r[2]+0xFFFFB684u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBD9C
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 801BBDA0
  return; // 801BBDA4
}

// fn_801BBDA8
void f_801BBDA8(Ctx* __restrict c) {
  trace_call(0x801BBDA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBDA8
  c->r[0]=c->lr; // 801BBDAC
  cmps(c,0,(int32_t)c->r[4],0); // 801BBDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBDB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BBDB8
  if (crb(c,0)) { goto L_801BBDC8; } // 801BBDBC
  cmps(c,0,(int32_t)c->r[4],24); // 801BBDC0
  if (crb(c,0)) { goto L_801BBDCC; } // 801BBDC4
L_801BBDC8:;
  c->r[4]=0u+0x00000000u; // 801BBDC8
L_801BBDCC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)120); // 801BBDCC
  c->r[4]=0u+0x00000000u; // 801BBDD0
  c->r[5]=0u+0x00000000u; // 801BBDD4
  c->r[3]=c->r[3]+c->r[0]; // 801BBDD8
  c->r[31]=R32(c->r[3]+0x00000098u); // 801BBDDC
  c->r[3]=c->r[3]+0x0000002Cu; // 801BBDE0
  c->lr=0x801BBDE8u; f_801BB2F0(c); // 801BBDE4
  c->r[3]=c->r[31]|c->r[31]; // 801BBDE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BBDEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BBDF0
  c->lr=c->r[0]; // 801BBDF4
  c->r[1]=c->r[1]+0x00000010u; // 801BBDF8
  return; // 801BBDFC
}

// fn_801BBE00
void f_801BBE00(Ctx* __restrict c) {
  trace_call(0x801BBE00u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBE00
  c->r[0]=c->lr; // 801BBE04
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BBE08
  c->r[11]=c->r[1]+0x00000040u; // 801BBE0C
  c->lr=0x801BBE14u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BBE10
  cmps(c,0,(int32_t)c->r[4],0); // 801BBE14
  c->r[26]=c->r[3]|c->r[3]; // 801BBE18
  c->r[27]=c->r[4]|c->r[4]; // 801BBE1C
  c->r[28]=c->r[5]|c->r[5]; // 801BBE20
  if (crb(c,0)) { goto L_801BBE30; } // 801BBE24
  cmps(c,0,(int32_t)c->r[4],24); // 801BBE28
  if (crb(c,0)) { goto L_801BBE34; } // 801BBE2C
L_801BBE30:;
  c->r[27]=0u+0x00000000u; // 801BBE30
L_801BBE34:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)120); // 801BBE34
  c->r[3]=c->r[3]+c->r[0]; // 801BBE38
  c->r[29]=c->r[3]+0x0000002Cu; // 801BBE3C
  c->r[3]=c->r[29]|c->r[29]; // 801BBE40
  c->lr=0x801BBE48u; f_801B1FE0(c); // 801BBE44
  c->r[30]=c->r[3]|c->r[3]; // 801BBE48
  c->r[3]=c->r[29]|c->r[29]; // 801BBE4C
  c->lr=0x801BBE54u; f_801B1FE0(c); // 801BBE50
  c->r[31]=c->r[3]|c->r[3]; // 801BBE54
  c->r[3]=c->r[29]|c->r[29]; // 801BBE58
  c->lr=0x801BBE60u; f_801B1FE0(c); // 801BBE5C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBE60
  c->r[3]=c->r[1]+0x00000018u; // 801BBE64
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBE68
  {uint32_t ea=c->r[30]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BBE6C
  c->lr=0x801BBE74u; f_80065358(c); // 801BBE70
  c->r[3]=0u+0x80440000u; // 801BBE74
  c->r[3]=c->r[3]+0xFFFFA720u; // 801BBE78
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BBE7C
  c->lr=0x801BBE84u; f_80381A54(c); // 801BBE80
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BBE84
  c->r[3]=c->r[1]+0x00000008u; // 801BBE88
  c->r[4]=c->r[1]+0x0000000Cu; // 801BBE8C
  c->lr=0x801BBE94u; f_8037CE54(c); // 801BBE90
  c->r[3]=c->r[1]+0x0000000Cu; // 801BBE94
  c->r[4]=c->r[1]+0x00000018u; // 801BBE98
  c->lr=0x801BBEA0u; f_80265924(c); // 801BBE9C
  {uint32_t ea=c->r[2]+0xFFFFB680u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBEA0
  fcmp(c,0,c->f[1],c->f[0]); // 801BBEA4
  if (!crb(c,1)) { goto L_801BBEC8; } // 801BBEA8
  c->r[3]=0u+0x803E0000u; // 801BBEAC
  c->r[4]=c->r[1]+0x00000018u; // 801BBEB0
  c->r[3]=c->r[3]+0x00000955u; // 801BBEB4
  c->r[5]=0u+0x00000000u; // 801BBEB8
  c->r[3]=c->r[3]+0x00000012u; // 801BBEBC
  c->r[6]=0u+0x00000000u; // 801BBEC0
  c->lr=0x801BBEC8u; f_801CC30C(c); // 801BBEC4
L_801BBEC8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BBEC8
  if (crb(c,2)) { goto L_801BBEE8; } // 801BBECC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBED0
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 801BBED4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBED8
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 801BBEDC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBEE0
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 801BBEE4
L_801BBEE8:;
  c->r[3]=c->r[26]|c->r[26]; // 801BBEE8
  c->r[4]=c->r[27]|c->r[27]; // 801BBEEC
  c->lr=0x801BBEF4u; f_801BBDA8(c); // 801BBEF0
  c->r[11]=c->r[1]+0x00000040u; // 801BBEF4
  c->lr=0x801BBEFCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BBEF8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BBEFC
  c->lr=c->r[0]; // 801BBF00
  c->r[1]=c->r[1]+0x00000040u; // 801BBF04
  return; // 801BBF08
}

// fn_801BBF0C
void f_801BBF0C(Ctx* __restrict c) {
  trace_call(0x801BBF0Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 801BBF0C
  if (crb(c,0)) { goto L_801BBF1C; } // 801BBF10
  cmps(c,0,(int32_t)c->r[4],24); // 801BBF14
  if (crb(c,0)) { goto L_801BBF20; } // 801BBF18
L_801BBF1C:;
  c->r[4]=0u+0x00000000u; // 801BBF1C
L_801BBF20:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)120); // 801BBF20
  c->r[3]=c->r[3]+c->r[0]; // 801BBF24
  c->r[3]=R32(c->r[3]+0x0000009Cu); // 801BBF28
  return; // 801BBF2C
}

// fn_801BBF30
void f_801BBF30(Ctx* __restrict c) {
  trace_call(0x801BBF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBF30
  c->r[0]=c->lr; // 801BBF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BBF38
  c->r[11]=c->r[1]+0x00000020u; // 801BBF3C
  c->lr=0x801BBF44u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BBF40
  cmps(c,0,(int32_t)c->r[4],0); // 801BBF44
  c->r[29]=c->r[3]|c->r[3]; // 801BBF48
  c->r[30]=c->r[5]|c->r[5]; // 801BBF4C
  if (crb(c,0)) { goto L_801BBF5C; } // 801BBF50
  cmps(c,0,(int32_t)c->r[4],24); // 801BBF54
  if (crb(c,0)) { goto L_801BBF60; } // 801BBF58
L_801BBF5C:;
  c->r[4]=0u+0x00000000u; // 801BBF5C
L_801BBF60:;
  c->r[31]=(uint32_t)((int32_t)c->r[4]*(int32_t)120); // 801BBF60
  c->r[3]=c->r[3]+c->r[31]; // 801BBF64
  c->r[0]=R8(c->r[3]+0x000000A0u); // 801BBF68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BBF6C
  if (!crb(c,2)) { goto L_801BBF9C; } // 801BBF70
  c->r[3]=R32(c->r[3]+0x00000084u); // 801BBF74
  c->r[5]=c->r[30]|c->r[30]; // 801BBF78
  c->r[4]=0u+0x00000000u; // 801BBF7C
  c->lr=0x801BBF84u; f_8038046C(c); // 801BBF80
  c->r[3]=c->r[29]+c->r[31]; // 801BBF84
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBF88
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBF8C
  c->r[3]=c->r[3]+0x0000002Cu; // 801BBF90
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BBF94
  c->lr=0x801BBF9Cu; f_801B1FC8(c); // 801BBF98
L_801BBF9C:;
  c->r[11]=c->r[1]+0x00000020u; // 801BBF9C
  c->lr=0x801BBFA4u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BBFA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBFA4
  c->lr=c->r[0]; // 801BBFA8
  c->r[1]=c->r[1]+0x00000020u; // 801BBFAC
  return; // 801BBFB0
}

// fn_801BBFB4
void f_801BBFB4(Ctx* __restrict c) {
  trace_call(0x801BBFB4u);
  cmps(c,0,(int32_t)c->r[3],0); // 801BBFB4
  if (crb(c,0)) { goto L_801BBFC4; } // 801BBFB8
  cmps(c,0,(int32_t)c->r[3],20); // 801BBFBC
  if (crb(c,0)) { goto L_801BBFC8; } // 801BBFC0
L_801BBFC4:;
  c->r[3]=0u+0x00000000u; // 801BBFC4
L_801BBFC8:;
  c->r[4]=0u+0x80400000u; // 801BBFC8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801BBFCC
  c->r[4]=c->r[4]+0x00001AD8u; // 801BBFD0
  c->r[3]=R32(c->r[4]+c->r[0]); // 801BBFD4
  return; // 801BBFD8
}

// fn_801BBFDC
void f_801BBFDC(Ctx* __restrict c) {
  trace_call(0x801BBFDCu);
  {uint32_t ea=c->r[2]+0xFFFFB664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBFDC
  c->r[10]=0u+0x00000000u; // 801BBFE0
  c->r[4]=0u+0x00000000u; // 801BBFE4
  c->r[8]=0u+0x00000000u; // 801BBFE8
  c->r[7]=0u+0x00000003u; // 801BBFEC
  c->r[0]=0u+0x00000002u; // 801BBFF0
L_801BBFF4:;
  c->r[9]=c->r[3]+c->r[4]; // 801BBFF4
  c->r[5]=0u+0x00000000u; // 801BBFF8
  W32(c->r[9]+0x00000084u,c->r[8]); // 801BBFFC
  W32(c->r[9]+0x00000088u,c->r[8]); // 801BC000
  {uint32_t ea=c->r[9]+0x00000094u; WF32(ea,c->f[0]);} // 801BC004
  W32(c->r[9]+0x00000098u,c->r[8]); // 801BC008
  W32(c->r[9]+0x0000009Cu,c->r[8]); // 801BC00C
  W8(c->r[9]+0x000000A0u,c->r[7]); // 801BC010
  c->ctr=c->r[0]; // 801BC014
L_801BC018:;
  c->r[6]=c->r[9]+c->r[5]; // 801BC018
  c->r[5]=c->r[5]+0x00000004u; // 801BC01C
  {uint32_t ea=c->r[6]+0x0000008Cu; WF32(ea,c->f[0]);} // 801BC020
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC018; } // 801BC024
  c->r[10]=c->r[10]+0x00000001u; // 801BC028
  c->r[4]=c->r[4]+0x00000078u; // 801BC02C
  cmps(c,0,(int32_t)c->r[10],24); // 801BC030
  if (crb(c,0)) { IRQCHK(c); goto L_801BBFF4; } // 801BC034
  c->r[0]=0u+0x00000014u; // 801BC038
  c->r[4]=0u+0x00000000u; // 801BC03C
  c->r[6]=0u+0x00000000u; // 801BC040
  c->ctr=c->r[0]; // 801BC044
L_801BC048:;
  c->r[5]=c->r[3]+c->r[4]; // 801BC048
  c->r[4]=c->r[4]+0x00000004u; // 801BC04C
  W32(c->r[5]+0x00000C0Cu,c->r[6]); // 801BC050
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC048; } // 801BC054
  return; // 801BC058
}

// fn_801BC05C
void f_801BC05C(Ctx* __restrict c) {
  trace_call(0x801BC05Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC05C
  c->r[0]=c->lr; // 801BC060
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC064
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BC068
  c->r[29]=c->r[3]|c->r[3]; // 801BC06C
  c->r[30]=0u+0x00000000u; // 801BC070
  c->r[31]=0u+0x00000000u; // 801BC074
L_801BC078:;
  c->r[3]=c->r[29]+c->r[31]; // 801BC078
  c->r[4]=c->r[29]+0x00000008u; // 801BC07C
  c->r[3]=c->r[3]+0x0000002Cu; // 801BC080
  c->r[5]=c->r[29]+0x00000018u; // 801BC084
  c->lr=0x801BC08Cu; f_801BB2F0(c); // 801BC088
  c->r[30]=c->r[30]+0x00000001u; // 801BC08C
  c->r[31]=c->r[31]+0x00000078u; // 801BC090
  cmps(c,0,(int32_t)c->r[30],24); // 801BC094
  if (crb(c,0)) { IRQCHK(c); goto L_801BC078; } // 801BC098
  c->r[3]=c->r[29]|c->r[29]; // 801BC09C
  c->lr=0x801BC0A4u; f_801BBFDC(c); // 801BC0A0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BC0A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC0A8
  c->lr=c->r[0]; // 801BC0AC
  c->r[1]=c->r[1]+0x00000020u; // 801BC0B0
  return; // 801BC0B4
}

// fn_801BC0B8
void f_801BC0B8(Ctx* __restrict c) {
  trace_call(0x801BC0B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC0B8
  c->r[0]=c->lr; // 801BC0BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC0C0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801BC0C4
  c->r[0]=0u+0x00000000u; // 801BC0C8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BC0CC
  c->r[26]=c->r[3]|c->r[3]; // 801BC0D0
  c->r[27]=c->r[4]|c->r[4]; // 801BC0D4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BC0D8
  if (crb(c,2)) { goto L_801BC0FC; } // 801BC0DC
  c->r[3]=0u+0x803F0000u; // 801BC0E0
  c->r[5]=0u+0x803F0000u; // 801BC0E4
  c->r[3]=c->r[3]+0x00001D4Fu; // 801BC0E8
  c->r[4]=0u+0x0000003Cu; // 801BC0EC
  c->r[5]=c->r[5]+0x00001D28u; // 801BC0F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BC0F4
  c->lr=0x801BC0FCu; f_803444BC(c); // 801BC0F8
L_801BC0FC:;
  W32(c->r[1]+0x0000000Cu,c->r[27]); // 801BC0FC
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC100
  c->lr=0x801BC108u; f_80364F00(c); // 801BC104
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BC108
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC10C
  c->r[4]=c->r[1]+0x00000008u; // 801BC110
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BC114
  c->lr=0x801BC11Cu; f_80364CCC(c); // 801BC118
  c->r[27]=0u+0x00000000u; // 801BC11C
  c->r[29]=0u+0x80400000u; // 801BC120
  c->r[30]=c->r[27]|c->r[27]; // 801BC124
  c->r[31]=0u+0x00000000u; // 801BC128
  c->r[29]=c->r[29]+0x00001AD8u; // 801BC12C
L_801BC130:;
  c->r[4]=R32(c->r[29]+c->r[31]); // 801BC130
  cmps(c,0,(int32_t)c->r[4],0); // 801BC134
  if (crb(c,2)) { goto L_801BC17C; } // 801BC138
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC13C
  c->lr=0x801BC144u; f_80363A94(c); // 801BC140
  c->r[28]=c->r[26]+c->r[31]; // 801BC144
  W32(c->r[28]+0x00000B6Cu,c->r[3]); // 801BC148
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC14C
  W32(c->r[28]+0x00000C0Cu,c->r[30]); // 801BC150
  c->lr=0x801BC158u; f_80364BE8(c); // 801BC154
  cmps(c,0,(int32_t)c->r[3],0); // 801BC158
  if (crb(c,2)) { goto L_801BC17C; } // 801BC15C
  c->r[4]=R32(c->r[29]+c->r[31]); // 801BC160
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC164
  c->lr=0x801BC16Cu; f_80364610(c); // 801BC168
  W32(c->r[28]+0x00000BBCu,c->r[3]); // 801BC16C
  c->r[0]=R32(c->r[28]+0x00000C0Cu); // 801BC170
  c->r[0]=c->r[0]|0x00000001u; // 801BC174
  W32(c->r[28]+0x00000C0Cu,c->r[0]); // 801BC178
L_801BC17C:;
  c->r[27]=c->r[27]+0x00000001u; // 801BC17C
  c->r[31]=c->r[31]+0x00000004u; // 801BC180
  cmpu(c,0,c->r[27],0x00000014u); // 801BC184
  if (crb(c,0)) { IRQCHK(c); goto L_801BC130; } // 801BC188
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BC18C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BC190
  c->lr=c->r[0]; // 801BC194
  c->r[1]=c->r[1]+0x00000030u; // 801BC198
  return; // 801BC19C
}

// fn_801BC1A0
void f_801BC1A0(Ctx* __restrict c) {
  trace_call(0x801BC1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC1A0
  c->r[0]=c->lr; // 801BC1A4
  c->r[4]=0u+0x80400000u; // 801BC1A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC1AC
  c->r[4]=c->r[4]+0x00001C24u; // 801BC1B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BC1B4
  c->r[31]=c->r[3]|c->r[3]; // 801BC1B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801BC1BC
  c->r[3]=c->r[3]+0x00000004u; // 801BC1C0
  c->lr=0x801BC1C8u; f_801BB3E0(c); // 801BC1C4
  c->r[3]=c->r[31]|c->r[31]; // 801BC1C8
  c->r[4]=0u+0x00000000u; // 801BC1CC
  c->lr=0x801BC1D4u; f_801BD458(c); // 801BC1D0
  c->r[3]=c->r[31]|c->r[31]; // 801BC1D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BC1D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC1DC
  c->lr=c->r[0]; // 801BC1E0
  c->r[1]=c->r[1]+0x00000010u; // 801BC1E4
  return; // 801BC1E8
}

// fn_801BC1EC
void f_801BC1EC(Ctx* __restrict c) {
  trace_call(0x801BC1ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC1EC
  c->r[0]=c->lr; // 801BC1F0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC1F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC1F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BC1FC
  c->r[30]=c->r[3]|c->r[3]; // 801BC200
  c->r[31]=c->r[4]|c->r[4]; // 801BC204
  if (crb(c,2)) { goto L_801BC228; } // 801BC208
  c->r[4]=0u+0xFFFFFFFFu; // 801BC20C
  c->r[3]=c->r[3]+0x00000004u; // 801BC210
  c->lr=0x801BC218u; f_801BB500(c); // 801BC214
  cmps(c,0,(int32_t)c->r[31],0); // 801BC218
  if (!crb(c,1)) { goto L_801BC228; } // 801BC21C
  c->r[3]=c->r[30]|c->r[30]; // 801BC220
  c->lr=0x801BC228u; f_802896EC(c); // 801BC224
L_801BC228:;
  c->r[3]=c->r[30]|c->r[30]; // 801BC228
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BC22C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC230
  c->lr=c->r[0]; // 801BC234
  c->r[1]=c->r[1]+0x00000010u; // 801BC238
  return; // 801BC23C
}

// fn_801BC240
void f_801BC240(Ctx* __restrict c) {
  trace_call(0x801BC240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC240
  c->r[0]=c->lr; // 801BC244
  c->r[4]=0u+0x00000001u; // 801BC248
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC24C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BC250
  c->r[31]=c->r[3]|c->r[3]; // 801BC254
  c->lr=0x801BC25Cu; f_801BD458(c); // 801BC258
  c->r[3]=c->r[31]+0x00000004u; // 801BC25C
  c->lr=0x801BC264u; f_801BB560(c); // 801BC260
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BC268
  c->lr=c->r[0]; // 801BC26C
  c->r[1]=c->r[1]+0x00000010u; // 801BC270
  return; // 801BC274
}

// fn_801BC278
void f_801BC278(Ctx* __restrict c) {
  trace_call(0x801BC278u);
  c->r[3]=c->r[3]+0x00000004u; // 801BC278
  f_801BB5F0(c); return; // 801BC27C
}

// fn_801BC280
void f_801BC280(Ctx* __restrict c) {
  trace_call(0x801BC280u);
  {uint32_t ea=c->r[1]+0xFFFFF7C0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC280
  c->r[0]=c->lr; // 801BC284
  W32(c->r[1]+0x00000844u,c->r[0]); // 801BC288
  c->r[11]=c->r[1]+0x00000840u; // 801BC28C
  c->lr=0x801BC294u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC290
  c->r[30]=c->r[3]|c->r[3]; // 801BC294
  c->r[3]=c->r[1]+0x00000018u; // 801BC298
  c->lr=0x801BC2A0u; f_80032F24(c); // 801BC29C
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC2A0
  c->lr=0x801BC2A8u; f_80032F24(c); // 801BC2A4
  c->r[3]=0u+0x80440000u; // 801BC2A8
  c->r[3]=c->r[3]+0xFFFFA720u; // 801BC2AC
  c->lr=0x801BC2B4u; f_801BD578(c); // 801BC2B0
  c->lr=0x801BC2B8u; f_80381A54(c); // 801BC2B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BC2B8
  c->r[3]=c->r[1]+0x00000008u; // 801BC2BC
  c->r[4]=c->r[1]+0x00000018u; // 801BC2C0
  c->lr=0x801BC2C8u; f_8037CE54(c); // 801BC2C4
  c->r[31]=0u+0x00000000u; // 801BC2C8
  goto L_801BC33C; // 801BC2CC
L_801BC2D0:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)68); // 801BC2D0
  c->r[4]=c->r[30]+c->r[0]; // 801BC2D4
  c->r[0]=R32(c->r[4]+0x00000C90u); // 801BC2D8
  cmps(c,0,(int32_t)c->r[0],0); // 801BC2DC
  if (crb(c,1)) { goto L_801BC2F8; } // 801BC2E0
  {uint32_t ea=c->r[2]+0xFFFFB688u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC2E4
  c->r[29]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BC2E8
  c->r[3]=c->r[1]+0x00000424u; // 801BC2EC
  {uint32_t ea=c->r[3]+c->r[29]; WF32(ea,c->f[0]);} // 801BC2F0
  goto L_801BC330; // 801BC2F4
L_801BC2F8:;
  {uint32_t ea=c->r[4]+0x00000C6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC2F8
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC2FC
  {uint32_t ea=c->r[4]+0x00000C7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC300
  {uint32_t ea=c->r[4]+0x00000C8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BC304
  c->lr=0x801BC30Cu; f_80065358(c); // 801BC308
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC30C
  c->r[4]=c->r[1]+0x00000018u; // 801BC310
  c->lr=0x801BC318u; f_801053F8(c); // 801BC314
  c->r[3]=c->r[1]+0x0000000Cu; // 801BC318
  c->r[29]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BC31C
  c->r[4]=c->r[3]|c->r[3]; // 801BC320
  c->lr=0x801BC328u; f_800653BC(c); // 801BC324
  c->r[3]=c->r[1]+0x00000424u; // 801BC328
  {uint32_t ea=c->r[3]+c->r[29]; WF32(ea,c->f[1]);} // 801BC32C
L_801BC330:;
  c->r[3]=c->r[1]+0x00000024u; // 801BC330
  W32(c->r[3]+c->r[29],c->r[31]); // 801BC334
  c->r[31]=c->r[31]+0x00000001u; // 801BC338
L_801BC33C:;
  c->r[3]=R32(c->r[30]+0x00005060u); // 801BC33C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801BC340
  if (crb(c,0)) { IRQCHK(c); goto L_801BC2D0; } // 801BC344
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801BC348
  c->r[5]=c->r[1]+0x00000424u; // 801BC34C
  c->r[6]=c->r[1]+0x00000024u; // 801BC350
  c->r[3]=0u+0x00000000u; // 801BC354
  c->lr=0x801BC35Cu; f_801BD5F4(c); // 801BC358
  c->r[31]=0u+0x00000018u; // 801BC35C
  goto L_801BC3A4; // 801BC360
L_801BC364:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BC364
  c->r[3]=c->r[1]+0x00000024u; // 801BC368
  c->r[0]=R32(c->r[3]+c->r[0]); // 801BC36C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801BC370
  c->r[29]=c->r[30]+c->r[0]; // 801BC374
  c->r[0]=R32(c->r[29]+0x00000C90u); // 801BC378
  cmps(c,0,(int32_t)c->r[0],0); // 801BC37C
  if (!crb(c,1)) { goto L_801BC3A0; } // 801BC380
  c->r[4]=R32(c->r[29]+0x00000C98u); // 801BC384
  cmps(c,0,(int32_t)c->r[4],0); // 801BC388
  if (crb(c,0)) { goto L_801BC3A0; } // 801BC38C
  c->r[3]=c->r[30]+0x00000004u; // 801BC390
  c->lr=0x801BC398u; f_801BBDA8(c); // 801BC394
  c->r[0]=0u+0xFFFFFFFFu; // 801BC398
  W32(c->r[29]+0x00000C98u,c->r[0]); // 801BC39C
L_801BC3A0:;
  c->r[31]=c->r[31]+0x00000001u; // 801BC3A0
L_801BC3A4:;
  c->r[27]=R32(c->r[30]+0x00005060u); // 801BC3A4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[27]); // 801BC3A8
  if (crb(c,0)) { IRQCHK(c); goto L_801BC364; } // 801BC3AC
  cmps(c,0,(int32_t)c->r[27],24); // 801BC3B0
  if (!crb(c,1)) { goto L_801BC3BC; } // 801BC3B4
  c->r[27]=0u+0x00000018u; // 801BC3B8
L_801BC3BC:;
  c->r[31]=0u+0x00000000u; // 801BC3BC
  goto L_801BC41C; // 801BC3C0
L_801BC3C4:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BC3C4
  c->r[3]=c->r[1]+0x00000024u; // 801BC3C8
  c->r[0]=R32(c->r[3]+c->r[0]); // 801BC3CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801BC3D0
  c->r[3]=c->r[30]+c->r[0]; // 801BC3D4
  c->r[29]=R32(c->r[3]+0x00000C90u); // 801BC3D8
  c->r[28]=c->r[3]+0x00000C60u; // 801BC3DC
  cmps(c,0,(int32_t)c->r[29],0); // 801BC3E0
  if (!crb(c,1)) { goto L_801BC418; } // 801BC3E4
  c->r[0]=R32(c->r[28]+0x00000038u); // 801BC3E8
  cmps(c,0,(int32_t)c->r[0],0); // 801BC3EC
  if (!crb(c,0)) { goto L_801BC418; } // 801BC3F0
  c->r[3]=c->r[29]|c->r[29]; // 801BC3F4
  c->lr=0x801BC3FCu; f_801BD430(c); // 801BC3F8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801BC3FC
  c->r[5]=c->r[29]|c->r[29]; // 801BC400
  c->r[6]=R32(c->r[28]+0x00000034u); // 801BC404
  c->r[7]=c->r[28]|c->r[28]; // 801BC408
  c->r[3]=c->r[30]+0x00000004u; // 801BC40C
  c->lr=0x801BC414u; f_801BB62C(c); // 801BC410
  W32(c->r[28]+0x00000038u,c->r[3]); // 801BC414
L_801BC418:;
  c->r[31]=c->r[31]+0x00000001u; // 801BC418
L_801BC41C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[27]); // 801BC41C
  if (crb(c,0)) { IRQCHK(c); goto L_801BC3C4; } // 801BC420
  c->r[3]=c->r[30]+0x00000004u; // 801BC424
  c->lr=0x801BC42Cu; f_801BB714(c); // 801BC428
  c->r[11]=c->r[1]+0x00000840u; // 801BC42C
  c->lr=0x801BC434u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BC430
  c->r[0]=R32(c->r[1]+0x00000844u); // 801BC434
  c->lr=c->r[0]; // 801BC438
  c->r[1]=c->r[1]+0x00000840u; // 801BC43C
  return; // 801BC440
}

// fn_801BC444
void f_801BC444(Ctx* __restrict c) {
  trace_call(0x801BC444u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC444
  c->r[0]=c->lr; // 801BC448
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801BC44C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 801BC450
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 801BC454
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 801BC458
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 801BC45C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 801BC460
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 801BC464
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 801BC468
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 801BC46C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[27]);} // 801BC470
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,27,ea,0,0);} // 801BC474
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[26]);} // 801BC478
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,26,ea,0,0);} // 801BC47C
  c->r[11]=c->r[1]+0x00000090u; // 801BC480
  c->lr=0x801BC488u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC484
  c->f[26]=c->f[1]; // 801BC488
  c->r[28]=c->r[3]|c->r[3]; // 801BC48C
  c->f[27]=c->f[2]; // 801BC490
  c->r[29]=c->r[4]|c->r[4]; // 801BC494
  c->f[28]=c->f[3]; // 801BC498
  c->r[30]=c->r[5]|c->r[5]; // 801BC49C
  c->f[29]=c->f[4]; // 801BC4A0
  c->r[31]=c->r[6]|c->r[6]; // 801BC4A4
  c->f[30]=c->f[5]; // 801BC4A8
  c->r[3]=c->r[1]+0x00000044u; // 801BC4AC
  c->f[31]=c->f[6]; // 801BC4B0
  c->lr=0x801BC4B8u; f_80264680(c); // 801BC4B4
  c->f[1]=c->ps1[1]=S(c->f[26]); // 801BC4B8
  c->r[3]=c->r[1]+0x00000044u; // 801BC4BC
  c->f[2]=c->ps1[2]=S(c->f[27]); // 801BC4C0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[26]);} // 801BC4C4
  c->f[3]=c->ps1[3]=S(c->f[28]); // 801BC4C8
  c->r[4]=c->r[3]|c->r[3]; // 801BC4CC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[27]);} // 801BC4D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[28]);} // 801BC4D4
  c->lr=0x801BC4DCu; f_80264DE0(c); // 801BC4D8
  {uint32_t ea=c->r[2]+0xFFFFB690u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC4DC
  c->r[3]=c->r[1]+0x00000014u; // 801BC4E0
  {uint32_t ea=c->r[2]+0xFFFFB68Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BC4E4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[29]); // 801BC4E8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[30]); // 801BC4EC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801BC4F0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BC4F4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801BC4F8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BC4FC
  c->lr=0x801BC504u; f_803949B8(c); // 801BC500
  c->r[3]=c->r[1]+0x00000044u; // 801BC504
  c->r[4]=c->r[1]+0x00000014u; // 801BC508
  c->r[5]=c->r[3]|c->r[3]; // 801BC50C
  c->lr=0x801BC514u; f_802646E0(c); // 801BC510
  c->r[3]=c->r[28]|c->r[28]; // 801BC514
  c->r[4]=c->r[29]|c->r[29]; // 801BC518
  c->r[6]=c->r[30]|c->r[30]; // 801BC51C
  c->r[7]=c->r[31]|c->r[31]; // 801BC520
  c->r[5]=c->r[1]+0x00000044u; // 801BC524
  c->lr=0x801BC52Cu; f_801BC574(c); // 801BC528
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 801BC52C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 801BC530
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 801BC534
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 801BC538
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 801BC53C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 801BC540
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 801BC544
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 801BC548
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,27,ea,0,0);} // 801BC54C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[27]=RF64(ea);} // 801BC550
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,26,ea,0,0);} // 801BC554
  c->r[11]=c->r[1]+0x00000090u; // 801BC558
  {uint32_t ea=c->r[1]+0x00000090u; c->f[26]=RF64(ea);} // 801BC55C
  c->lr=0x801BC564u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BC560
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801BC564
  c->lr=c->r[0]; // 801BC568
  c->r[1]=c->r[1]+0x000000F0u; // 801BC56C
  return; // 801BC570
}

// fn_801BC574
void f_801BC574(Ctx* __restrict c) {
  trace_call(0x801BC574u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC574
  c->r[0]=c->lr; // 801BC578
  cmps(c,0,(int32_t)c->r[4],-3); // 801BC57C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC580
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BC584
  c->r[28]=c->r[3]|c->r[3]; // 801BC588
  c->r[29]=c->r[4]|c->r[4]; // 801BC58C
  c->r[26]=c->r[5]|c->r[5]; // 801BC590
  c->r[30]=c->r[6]|c->r[6]; // 801BC594
  c->r[31]=c->r[7]|c->r[7]; // 801BC598
  if (!crb(c,2)) { goto L_801BC5F4; } // 801BC59C
  c->lr=0x801BC5A4u; f_80291D94(c); // 801BC5A0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801BC5A4
  if (crb(c,2)) { goto L_801BC5D0; } // 801BC5A8
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801BC5AC
  c->r[29]=0u+0xFFFFFFFEu; // 801BC5B0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC5B4
  if (crb(c,2)) { goto L_801BC5F4; } // 801BC5B8
  c->lr=0x801BC5C0u; f_80067C50(c); // 801BC5BC
  cmps(c,0,(int32_t)c->r[3],1); // 801BC5C0
  if (!crb(c,2)) { goto L_801BC5F4; } // 801BC5C4
  c->r[29]=0u+0xFFFFFFFFu; // 801BC5C8
  goto L_801BC5F4; // 801BC5CC
L_801BC5D0:;
  c->r[3]=c->r[13]+0xFFFF94B8u; // 801BC5D0
  c->r[29]=0u+0xFFFFFFFFu; // 801BC5D4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BC5D8
  cmps(c,0,(int32_t)c->r[3],0); // 801BC5DC
  if (crb(c,2)) { goto L_801BC5F4; } // 801BC5E0
  c->lr=0x801BC5E8u; f_80067C50(c); // 801BC5E4
  cmps(c,0,(int32_t)c->r[3],1); // 801BC5E8
  if (!crb(c,2)) { goto L_801BC5F4; } // 801BC5EC
  c->r[29]=0u+0xFFFFFFFEu; // 801BC5F0
L_801BC5F4:;
  cmps(c,0,(int32_t)c->r[29],-1); // 801BC5F4
  if (crb(c,2)) { goto L_801BC60C; } // 801BC5F8
  if (!crb(c,0)) { goto L_801BC664; } // 801BC5FC
  cmps(c,0,(int32_t)c->r[29],-2); // 801BC600
  if (!crb(c,0)) { goto L_801BC638; } // 801BC604
  goto L_801BC664; // 801BC608
L_801BC60C:;
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801BC60C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC610
  if (crb(c,2)) { goto L_801BC664; } // 801BC614
  c->lr=0x801BC61Cu; f_80067C50(c); // 801BC618
  cmps(c,0,(int32_t)c->r[3],1); // 801BC61C
  if (!crb(c,2)) { goto L_801BC664; } // 801BC620
  c->r[3]=R32(c->r[13]+0xFFFF94B8u); // 801BC624
  c->r[4]=0u+0x00000001u; // 801BC628
  c->lr=0x801BC630u; f_80067C60(c); // 801BC62C
  c->r[29]=c->r[3]|c->r[3]; // 801BC630
  goto L_801BC664; // 801BC634
L_801BC638:;
  c->r[27]=c->r[13]+0xFFFF94B8u; // 801BC638
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BC63C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC640
  if (crb(c,2)) { goto L_801BC664; } // 801BC644
  c->lr=0x801BC64Cu; f_80067C50(c); // 801BC648
  cmps(c,0,(int32_t)c->r[3],1); // 801BC64C
  if (!crb(c,2)) { goto L_801BC664; } // 801BC650
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BC654
  c->r[4]=0u+0x00000001u; // 801BC658
  c->lr=0x801BC660u; f_80067C60(c); // 801BC65C
  c->r[29]=c->r[3]|c->r[3]; // 801BC660
L_801BC664:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BC664
  if (!crb(c,1)) { goto L_801BC798; } // 801BC668
  if (crb(c,0)) { goto L_801BC678; } // 801BC66C
  cmps(c,0,(int32_t)c->r[29],21); // 801BC670
  if (crb(c,0)) { goto L_801BC67C; } // 801BC674
L_801BC678:;
  c->r[29]=0u+0x00000000u; // 801BC678
L_801BC67C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC67C
  if (crb(c,0)) { goto L_801BC68C; } // 801BC680
  cmps(c,0,(int32_t)c->r[31],256); // 801BC684
  if (crb(c,0)) { goto L_801BC690; } // 801BC688
L_801BC68C:;
  c->r[31]=0u+0x00000000u; // 801BC68C
L_801BC690:;
  c->r[0]=R32(c->r[28]+0x00005060u); // 801BC690
  cmps(c,0,(int32_t)c->r[0],256); // 801BC694
  if (crb(c,0)) { goto L_801BC6A4; } // 801BC698
  c->r[0]=0u+0x000000FFu; // 801BC69C
  W32(c->r[28]+0x00005060u,c->r[0]); // 801BC6A0
L_801BC6A4:;
  c->r[3]=c->r[29]|c->r[29]; // 801BC6A4
  c->lr=0x801BC6ACu; f_801BD430(c); // 801BC6A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BC6AC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BC6B0
  if (crb(c,2)) { goto L_801BC6E4; } // 801BC6B4
  c->r[27]=0u+0x80590000u; // 801BC6B8
  c->r[3]=c->r[27]+0x00006714u; // 801BC6BC
  c->lr=0x801BC6C4u; f_801FCD10(c); // 801BC6C0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC6C4
  if (crb(c,0)) { goto L_801BC6E4; } // 801BC6C8
  c->r[3]=c->r[27]+0x00006714u; // 801BC6CC
  c->lr=0x801BC6D4u; f_801FCD10(c); // 801BC6D0
  c->r[4]=c->r[31]|c->r[31]; // 801BC6D4
  c->lr=0x801BC6DCu; f_801D37E8(c); // 801BC6D8
  cmpu(c,0,c->r[3],0x00000001u); // 801BC6DC
  if (crb(c,2)) { goto L_801BC798; } // 801BC6E0
L_801BC6E4:;
  c->r[3]=c->r[29]|c->r[29]; // 801BC6E4
  c->lr=0x801BC6ECu; f_801BD430(c); // 801BC6E8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BC6EC
  c->lr=0x801BC6F4u; f_801BBFB4(c); // 801BC6F0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC6F4
  if (crb(c,2)) { goto L_801BC798; } // 801BC6F8
  c->r[3]=R32(c->r[28]+0x00005060u); // 801BC6FC
  c->r[0]=0u+0x00000006u; // 801BC700
  c->r[4]=c->r[26]+0xFFFFFFFCu; // 801BC704
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 801BC708
  c->r[3]=c->r[28]+c->r[3]; // 801BC70C
  c->r[5]=c->r[3]+0x00000C5Cu; // 801BC710
  c->ctr=c->r[0]; // 801BC714
L_801BC718:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801BC718
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801BC71C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801BC720
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801BC724
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC718; } // 801BC728
  c->r[3]=R32(c->r[28]+0x00005060u); // 801BC72C
  c->r[5]=0u+0xFFFFFFFFu; // 801BC730
  c->r[0]=0u+0x00000002u; // 801BC734
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 801BC738
  c->r[3]=0u+0x00000000u; // 801BC73C
  c->r[4]=c->r[28]+c->r[4]; // 801BC740
  W32(c->r[4]+0x00000C90u,c->r[29]); // 801BC744
  c->r[4]=R32(c->r[28]+0x00005060u); // 801BC748
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 801BC74C
  c->r[4]=c->r[28]+c->r[4]; // 801BC750
  W32(c->r[4]+0x00000C94u,c->r[31]); // 801BC754
  c->r[4]=R32(c->r[28]+0x00005060u); // 801BC758
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 801BC75C
  c->r[4]=c->r[28]+c->r[4]; // 801BC760
  W32(c->r[4]+0x00000C98u,c->r[5]); // 801BC764
  c->ctr=c->r[0]; // 801BC768
L_801BC76C:;
  c->r[4]=R32(c->r[28]+0x00005060u); // 801BC76C
  c->r[0]=c->r[3]+c->r[28]; // 801BC770
  c->r[5]=R32(c->r[30]+c->r[3]); // 801BC774
  c->r[3]=c->r[3]+0x00000004u; // 801BC778
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 801BC77C
  c->r[4]=c->r[4]+c->r[0]; // 801BC780
  W32(c->r[4]+0x00000C9Cu,c->r[5]); // 801BC784
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC76C; } // 801BC788
  c->r[3]=R32(c->r[28]+0x00005060u); // 801BC78C
  c->r[0]=c->r[3]+0x00000001u; // 801BC790
  W32(c->r[28]+0x00005060u,c->r[0]); // 801BC794
L_801BC798:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BC798
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC79C
  c->lr=c->r[0]; // 801BC7A0
  c->r[1]=c->r[1]+0x00000020u; // 801BC7A4
  return; // 801BC7A8
}

// fn_801BC7AC
void f_801BC7AC(Ctx* __restrict c) {
  trace_call(0x801BC7ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC7AC
  c->r[0]=c->lr; // 801BC7B0
  cmps(c,0,(int32_t)c->r[4],0); // 801BC7B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC7B8
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BC7BC
  c->r[30]=c->r[3]|c->r[3]; // 801BC7C0
  c->r[24]=c->r[5]|c->r[5]; // 801BC7C4
  if (crb(c,0)) { goto L_801BC7D4; } // 801BC7C8
  cmps(c,0,(int32_t)c->r[4],2); // 801BC7CC
  if (crb(c,0)) { goto L_801BC7D8; } // 801BC7D0
L_801BC7D4:;
  c->r[4]=0u+0x00000000u; // 801BC7D4
L_801BC7D8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BC7D8
  if (crb(c,0)) { goto L_801BC8B4; } // 801BC7DC
  c->r[31]=R32(c->r[3]+0x00005060u); // 801BC7E0
  c->r[27]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801BC7E4
  c->r[26]=0u+0x00000000u; // 801BC7E8
  c->r[29]=0u+0x00000000u; // 801BC7EC
  c->r[25]=0u+0x00000000u; // 801BC7F0
  c->r[28]=0u+0x00000000u; // 801BC7F4
  goto L_801BC85C; // 801BC7F8
L_801BC7FC:;
  c->r[3]=c->r[30]+c->r[28]; // 801BC7FC
  c->r[4]=c->r[3]+0x00000C60u; // 801BC800
  c->r[3]=c->r[27]+c->r[4]; // 801BC804
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801BC808
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801BC80C
  if (crb(c,2)) { goto L_801BC834; } // 801BC810
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[26]); // 801BC814
  if (crb(c,2)) { goto L_801BC828; } // 801BC818
  c->r[3]=c->r[30]+c->r[29]; // 801BC81C
  c->r[3]=c->r[3]+0x00000C60u; // 801BC820
  c->lr=0x801BC828u; f_801BC8C8(c); // 801BC824
L_801BC828:;
  c->r[26]=c->r[26]+0x00000001u; // 801BC828
  c->r[29]=c->r[29]+0x00000044u; // 801BC82C
  goto L_801BC854; // 801BC830
L_801BC834:;
  c->r[4]=R32(c->r[4]+0x00000038u); // 801BC834
  cmps(c,0,(int32_t)c->r[4],0); // 801BC838
  if (crb(c,0)) { goto L_801BC848; } // 801BC83C
  c->r[3]=c->r[30]+0x00000004u; // 801BC840
  c->lr=0x801BC848u; f_801BBDA8(c); // 801BC844
L_801BC848:;
  c->r[3]=R32(c->r[30]+0x00005060u); // 801BC848
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801BC84C
  W32(c->r[30]+0x00005060u,c->r[0]); // 801BC850
L_801BC854:;
  c->r[25]=c->r[25]+0x00000001u; // 801BC854
  c->r[28]=c->r[28]+0x00000044u; // 801BC858
L_801BC85C:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[31]); // 801BC85C
  if (crb(c,0)) { IRQCHK(c); goto L_801BC7FC; } // 801BC860
  c->r[9]=R32(c->r[30]+0x00005060u); // 801BC864
  c->r[6]=0u+0xFFFFFFFFu; // 801BC868
  c->r[7]=0u+0x00000000u; // 801BC86C
  c->r[0]=0u+0x00000002u; // 801BC870
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)68); // 801BC874
  goto L_801BC8AC; // 801BC878
L_801BC87C:;
  c->r[8]=c->r[30]+c->r[3]; // 801BC87C
  c->r[4]=0u+0x00000000u; // 801BC880
  W32(c->r[8]+0x00000C90u,c->r[7]); // 801BC884
  W32(c->r[8]+0x00000C94u,c->r[7]); // 801BC888
  W32(c->r[8]+0x00000C98u,c->r[6]); // 801BC88C
  c->ctr=c->r[0]; // 801BC890
L_801BC894:;
  c->r[5]=c->r[8]+c->r[4]; // 801BC894
  c->r[4]=c->r[4]+0x00000004u; // 801BC898
  W32(c->r[5]+0x00000C9Cu,c->r[6]); // 801BC89C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC894; } // 801BC8A0
  c->r[9]=c->r[9]+0x00000001u; // 801BC8A4
  c->r[3]=c->r[3]+0x00000044u; // 801BC8A8
L_801BC8AC:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[31]); // 801BC8AC
  if (crb(c,0)) { IRQCHK(c); goto L_801BC87C; } // 801BC8B0
L_801BC8B4:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BC8B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BC8B8
  c->lr=c->r[0]; // 801BC8BC
  c->r[1]=c->r[1]+0x00000030u; // 801BC8C0
  return; // 801BC8C4
}

// fn_801BC8C8
void f_801BC8C8(Ctx* __restrict c) {
  trace_call(0x801BC8C8u);
  c->r[0]=0u+0x00000006u; // 801BC8C8
  c->r[7]=c->r[3]+0xFFFFFFFCu; // 801BC8CC
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 801BC8D0
  c->ctr=c->r[0]; // 801BC8D4
L_801BC8D8:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 801BC8D8
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 801BC8DC
  W32(c->r[7]+0x00000004u,c->r[5]); // 801BC8E0
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 801BC8E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC8D8; } // 801BC8E8
  c->r[0]=R32(c->r[4]+0x00000030u); // 801BC8EC
  W32(c->r[3]+0x00000030u,c->r[0]); // 801BC8F0
  c->r[0]=R32(c->r[4]+0x00000034u); // 801BC8F4
  W32(c->r[3]+0x00000034u,c->r[0]); // 801BC8F8
  c->r[0]=R32(c->r[4]+0x00000038u); // 801BC8FC
  W32(c->r[3]+0x00000038u,c->r[0]); // 801BC900
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 801BC904
  c->r[0]=R32(c->r[4]+0x00000040u); // 801BC908
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 801BC90C
  W32(c->r[3]+0x00000040u,c->r[0]); // 801BC910
  return; // 801BC914
}

// fn_801BC918
void f_801BC918(Ctx* __restrict c) {
  trace_call(0x801BC918u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC918
  c->r[0]=c->lr; // 801BC91C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC920
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BC924
  c->r[25]=c->r[3]|c->r[3]; // 801BC928
  c->r[26]=0u+0x00000000u; // 801BC92C
  c->r[30]=0u+0x00000000u; // 801BC930
  c->r[29]=0u+0xFFFFFFFFu; // 801BC934
  c->r[28]=0u+0x00000000u; // 801BC938
  c->r[31]=0u+0x00000002u; // 801BC93C
  goto L_801BC98C; // 801BC940
L_801BC944:;
  c->r[3]=c->r[25]+c->r[30]; // 801BC944
  c->r[4]=R32(c->r[3]+0x00000C98u); // 801BC948
  c->r[27]=c->r[3]+0x00000C60u; // 801BC94C
  cmps(c,0,(int32_t)c->r[4],0); // 801BC950
  if (crb(c,0)) { goto L_801BC960; } // 801BC954
  c->r[3]=c->r[25]+0x00000004u; // 801BC958
  c->lr=0x801BC960u; f_801BBDA8(c); // 801BC95C
L_801BC960:;
  W32(c->r[27]+0x00000030u,c->r[28]); // 801BC960
  c->r[3]=0u+0x00000000u; // 801BC964
  W32(c->r[27]+0x00000034u,c->r[28]); // 801BC968
  W32(c->r[27]+0x00000038u,c->r[29]); // 801BC96C
  c->ctr=c->r[31]; // 801BC970
L_801BC974:;
  c->r[4]=c->r[27]+c->r[3]; // 801BC974
  c->r[3]=c->r[3]+0x00000004u; // 801BC978
  W32(c->r[4]+0x0000003Cu,c->r[29]); // 801BC97C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC974; } // 801BC980
  c->r[26]=c->r[26]+0x00000001u; // 801BC984
  c->r[30]=c->r[30]+0x00000044u; // 801BC988
L_801BC98C:;
  c->r[0]=R32(c->r[25]+0x00005060u); // 801BC98C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801BC990
  if (crb(c,0)) { IRQCHK(c); goto L_801BC944; } // 801BC994
  c->r[0]=0u+0x00000000u; // 801BC998
  W32(c->r[25]+0x00005060u,c->r[0]); // 801BC99C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BC9A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BC9A4
  c->lr=c->r[0]; // 801BC9A8
  c->r[1]=c->r[1]+0x00000030u; // 801BC9AC
  return; // 801BC9B0
}

// fn_801BC9B4
void f_801BC9B4(Ctx* __restrict c) {
  trace_call(0x801BC9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC9B4
  c->r[0]=c->lr; // 801BC9B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC9BC
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BC9C0
  c->r[28]=c->r[3]|c->r[3]; // 801BC9C4
  c->r[29]=c->r[4]|c->r[4]; // 801BC9C8
  c->r[4]=c->r[5]|c->r[5]; // 801BC9CC
  c->r[30]=c->r[6]|c->r[6]; // 801BC9D0
  c->r[31]=c->r[7]|c->r[7]; // 801BC9D4
  c->r[3]=c->r[1]+0x00000008u; // 801BC9D8
  c->lr=0x801BC9E0u; f_800F471C(c); // 801BC9DC
  c->r[4]=c->r[30]|c->r[30]; // 801BC9E0
  c->r[3]=c->r[1]+0x00000014u; // 801BC9E4
  c->lr=0x801BC9ECu; f_800F471C(c); // 801BC9E8
  c->r[4]=c->r[29]|c->r[29]; // 801BC9EC
  c->r[6]=c->r[31]|c->r[31]; // 801BC9F0
  c->r[3]=c->r[28]+0x00000004u; // 801BC9F4
  c->r[5]=c->r[1]+0x00000008u; // 801BC9F8
  c->lr=0x801BCA00u; f_801BBB40(c); // 801BC9FC
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BCA00
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BCA04
  c->lr=c->r[0]; // 801BCA08
  c->r[1]=c->r[1]+0x00000030u; // 801BCA0C
  return; // 801BCA10
}

// fn_801BCA14
void f_801BCA14(Ctx* __restrict c) {
  trace_call(0x801BCA14u);
  c->r[3]=c->r[3]+0x00000004u; // 801BCA14
  f_801BBD50(c); return; // 801BCA18
}

// fn_801BCA1C
void f_801BCA1C(Ctx* __restrict c) {
  trace_call(0x801BCA1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCA1C
  c->r[0]=c->lr; // 801BCA20
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BCA24
  c->r[11]=c->r[1]+0x00000040u; // 801BCA28
  c->lr=0x801BCA30u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BCA2C
  c->r[24]=c->r[5]|c->r[5]; // 801BCA30
  c->r[27]=c->r[3]|c->r[3]; // 801BCA34
  c->r[28]=c->r[4]|c->r[4]; // 801BCA38
  c->r[3]=c->r[3]+0x00000004u; // 801BCA3C
  c->r[4]=c->r[24]|c->r[24]; // 801BCA40
  c->lr=0x801BCA48u; f_801BBF0C(c); // 801BCA44
  c->r[30]=c->r[3]|c->r[3]; // 801BCA48
  c->r[4]=c->r[24]|c->r[24]; // 801BCA4C
  c->r[3]=c->r[27]+0x00000004u; // 801BCA50
  c->r[5]=c->r[1]+0x00000014u; // 801BCA54
  c->lr=0x801BCA5Cu; f_801BBE00(c); // 801BCA58
  c->r[31]=c->r[3]|c->r[3]; // 801BCA5C
  c->r[3]=0u+0x00000000u; // 801BCA60
  c->r[25]=0u+0x00000000u; // 801BCA64
  c->r[29]=0u+0x00000000u; // 801BCA68
  goto L_801BCAAC; // 801BCA6C
L_801BCA70:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BCA70
  if (crb(c,2)) { goto L_801BCA90; } // 801BCA74
  c->r[4]=c->r[27]+c->r[29]; // 801BCA78
  c->r[26]=c->r[4]+0x00000C60u; // 801BCA7C
  c->r[4]=c->r[26]|c->r[26]; // 801BCA80
  c->lr=0x801BCA88u; f_801BC8C8(c); // 801BCA84
  c->r[3]=c->r[26]|c->r[26]; // 801BCA88
  goto L_801BCAA4; // 801BCA8C
L_801BCA90:;
  c->r[4]=c->r[27]+c->r[29]; // 801BCA90
  c->r[0]=R32(c->r[4]+0x00000C98u); // 801BCA94
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801BCA98
  if (!crb(c,2)) { goto L_801BCAA4; } // 801BCA9C
  c->r[3]=c->r[4]+0x00000C60u; // 801BCAA0
L_801BCAA4:;
  c->r[25]=c->r[25]+0x00000001u; // 801BCAA4
  c->r[29]=c->r[29]+0x00000044u; // 801BCAA8
L_801BCAAC:;
  c->r[4]=R32(c->r[27]+0x00005060u); // 801BCAAC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[4]); // 801BCAB0
  if (crb(c,0)) { IRQCHK(c); goto L_801BCA70; } // 801BCAB4
  cmps(c,0,(int32_t)c->r[3],0); // 801BCAB8
  if (crb(c,2)) { goto L_801BCB24; } // 801BCABC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801BCAC0
  c->r[6]=0u+0x00000000u; // 801BCAC4
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801BCAC8
  W32(c->r[27]+0x00005060u,c->r[0]); // 801BCACC
  c->r[5]=0u+0xFFFFFFFFu; // 801BCAD0
  c->r[0]=0u+0x00000002u; // 801BCAD4
  c->r[3]=c->r[27]+c->r[3]; // 801BCAD8
  W32(c->r[3]+0x00000C90u,c->r[6]); // 801BCADC
  c->r[3]=0u+0x00000000u; // 801BCAE0
  c->r[4]=R32(c->r[27]+0x00005060u); // 801BCAE4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 801BCAE8
  c->r[4]=c->r[27]+c->r[4]; // 801BCAEC
  W32(c->r[4]+0x00000C94u,c->r[6]); // 801BCAF0
  c->r[4]=R32(c->r[27]+0x00005060u); // 801BCAF4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 801BCAF8
  c->r[4]=c->r[27]+c->r[4]; // 801BCAFC
  W32(c->r[4]+0x00000C98u,c->r[5]); // 801BCB00
  c->ctr=c->r[0]; // 801BCB04
L_801BCB08:;
  c->r[0]=R32(c->r[27]+0x00005060u); // 801BCB08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801BCB0C
  c->r[0]=c->r[27]+c->r[0]; // 801BCB10
  c->r[4]=c->r[3]+c->r[0]; // 801BCB14
  c->r[3]=c->r[3]+0x00000004u; // 801BCB18
  W32(c->r[4]+0x00000C9Cu,c->r[5]); // 801BCB1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCB08; } // 801BCB20
L_801BCB24:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BCB24
  c->r[29]=0u+0x00000000u; // 801BCB28
  if (crb(c,0)) { goto L_801BCD6C; } // 801BCB2C
  c->r[3]=c->r[31]|c->r[31]; // 801BCB30
  c->lr=0x801BCB38u; f_801BD430(c); // 801BCB34
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BCB38
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BCB3C
  if (crb(c,2)) { goto L_801BCB9C; } // 801BCB40
  c->r[26]=0u+0x80590000u; // 801BCB44
  c->r[3]=c->r[26]+0x00006714u; // 801BCB48
  c->lr=0x801BCB50u; f_801FCD10(c); // 801BCB4C
  cmps(c,0,(int32_t)c->r[3],0); // 801BCB50
  if (crb(c,0)) { goto L_801BCD30; } // 801BCB54
  c->r[3]=c->r[26]+0x00006714u; // 801BCB58
  c->lr=0x801BCB60u; f_801FCD10(c); // 801BCB5C
  c->r[4]=c->r[30]|c->r[30]; // 801BCB60
  c->lr=0x801BCB68u; f_801D38C4(c); // 801BCB64
  c->r[26]=0u+0x803E0000u; // 801BCB68
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCB6C
  c->r[26]=c->r[26]+0x00000955u; // 801BCB70
  c->r[4]=0u+0x00000000u; // 801BCB74
  c->r[3]=c->r[26]+0x00000019u; // 801BCB78
  c->r[5]=0u+0xFFFFFFFFu; // 801BCB7C
  c->lr=0x801BCB84u; f_80068DD8(c); // 801BCB80
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCB84
  c->r[5]=c->r[28]|c->r[28]; // 801BCB88
  c->r[3]=c->r[26]+0x00000020u; // 801BCB8C
  c->r[4]=0u+0x00000000u; // 801BCB90
  c->lr=0x801BCB98u; f_80068DD8(c); // 801BCB94
  goto L_801BCD30; // 801BCB98
L_801BCB9C:;
  c->r[3]=c->r[31]|c->r[31]; // 801BCB9C
  c->lr=0x801BCBA4u; f_801BD430(c); // 801BCBA0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BCBA4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BCBA8
  if (crb(c,2)) { goto L_801BCC50; } // 801BCBAC
  c->r[3]=c->r[27]|c->r[27]; // 801BCBB0
  c->r[4]=c->r[28]|c->r[28]; // 801BCBB4
  c->r[5]=c->r[31]|c->r[31]; // 801BCBB8
  c->lr=0x801BCBC0u; f_801BD014(c); // 801BCBBC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801BCBC0
  if (!crb(c,2)) { goto L_801BCBDC; } // 801BCBC4
  c->r[3]=c->r[27]|c->r[27]; // 801BCBC8
  c->r[4]=c->r[28]|c->r[28]; // 801BCBCC
  c->r[5]=c->r[31]|c->r[31]; // 801BCBD0
  c->r[6]=0u+0x00000001u; // 801BCBD4
  c->lr=0x801BCBDCu; f_801BCEAC(c); // 801BCBD8
L_801BCBDC:;
  c->r[3]=c->r[31]|c->r[31]; // 801BCBDC
  c->lr=0x801BCBE4u; f_801BD354(c); // 801BCBE0
  c->r[29]=R32(c->r[3]+0x00000008u); // 801BCBE4
  c->r[3]=c->r[27]|c->r[27]; // 801BCBE8
  c->r[4]=c->r[28]|c->r[28]; // 801BCBEC
  c->r[5]=c->r[31]|c->r[31]; // 801BCBF0
  c->r[6]=c->r[29]|c->r[29]; // 801BCBF4
  c->lr=0x801BCBFCu; f_801BCEAC(c); // 801BCBF8
  c->r[26]=0u+0x803E0000u; // 801BCBFC
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCC00
  c->r[26]=c->r[26]+0x00000955u; // 801BCC04
  c->r[4]=0u+0x00000000u; // 801BCC08
  c->r[3]=c->r[26]+0x00000028u; // 801BCC0C
  c->r[5]=0u+0xFFFFFFFFu; // 801BCC10
  c->lr=0x801BCC18u; f_80068DD8(c); // 801BCC14
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCC18
  c->r[5]=c->r[28]|c->r[28]; // 801BCC1C
  c->r[3]=c->r[26]+0x0000002Fu; // 801BCC20
  c->r[4]=0u+0x00000000u; // 801BCC24
  c->lr=0x801BCC2Cu; f_80068DD8(c); // 801BCC28
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801BCC2C
  c->r[3]=c->r[13]+0xFFFF94B8u; // 801BCC30
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BCC34
  cmps(c,0,(int32_t)c->r[3],0); // 801BCC38
  if (crb(c,2)) { goto L_801BCD30; } // 801BCC3C
  c->r[5]=c->r[31]|c->r[31]; // 801BCC40
  c->r[4]=0u+0xFFFFFFFFu; // 801BCC44
  c->lr=0x801BCC4Cu; f_80067AC0(c); // 801BCC48
  goto L_801BCD30; // 801BCC4C
L_801BCC50:;
  c->r[3]=c->r[31]|c->r[31]; // 801BCC50
  c->lr=0x801BCC58u; f_801BD430(c); // 801BCC54
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BCC58
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BCC5C
  if (crb(c,2)) { goto L_801BCCA4; } // 801BCC60
  c->r[26]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801BCC64
  c->r[27]=c->r[13]+0xFFFF94B8u; // 801BCC68
  c->r[0]=R32(c->r[27]+c->r[26]); // 801BCC6C
  cmps(c,0,(int32_t)c->r[0],0); // 801BCC70
  if (crb(c,2)) { goto L_801BCD30; } // 801BCC74
  c->r[3]=c->r[31]|c->r[31]; // 801BCC78
  c->lr=0x801BCC80u; f_801BD354(c); // 801BCC7C
  c->r[4]=c->r[3]|c->r[3]; // 801BCC80
  c->r[5]=0u+0x803E0000u; // 801BCC84
  c->r[5]=c->r[5]+0x00000955u; // 801BCC88
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCC8C
  c->r[4]=c->r[5]+0x00000037u; // 801BCC90
  c->r[3]=R32(c->r[27]+c->r[26]); // 801BCC94
  c->r[5]=c->r[5]+0x0000003Eu; // 801BCC98
  c->lr=0x801BCCA0u; f_80067CB4(c); // 801BCC9C
  goto L_801BCD30; // 801BCCA0
L_801BCCA4:;
  c->r[3]=c->r[31]|c->r[31]; // 801BCCA4
  c->lr=0x801BCCACu; f_801BD354(c); // 801BCCA8
  c->r[29]=R32(c->r[3]+0x00000008u); // 801BCCAC
  c->r[3]=c->r[27]|c->r[27]; // 801BCCB0
  c->r[4]=c->r[28]|c->r[28]; // 801BCCB4
  c->r[5]=c->r[31]|c->r[31]; // 801BCCB8
  c->r[6]=c->r[29]|c->r[29]; // 801BCCBC
  c->lr=0x801BCCC4u; f_801BCEAC(c); // 801BCCC0
  cmps(c,0,(int32_t)c->r[31],3); // 801BCCC4
  if (crb(c,2)) { goto L_801BCD00; } // 801BCCC8
  c->r[27]=0u+0x803E0000u; // 801BCCCC
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCCD0
  c->r[27]=c->r[27]+0x00000955u; // 801BCCD4
  c->r[4]=0u+0x00000000u; // 801BCCD8
  c->r[3]=c->r[27]+0x00000019u; // 801BCCDC
  c->r[5]=0u+0xFFFFFFFFu; // 801BCCE0
  c->lr=0x801BCCE8u; f_80068DD8(c); // 801BCCE4
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCCE8
  c->r[5]=c->r[28]|c->r[28]; // 801BCCEC
  c->r[3]=c->r[27]+0x00000020u; // 801BCCF0
  c->r[4]=0u+0x00000000u; // 801BCCF4
  c->lr=0x801BCCFCu; f_80068DD8(c); // 801BCCF8
  goto L_801BCD30; // 801BCCFC
L_801BCD00:;
  c->r[27]=0u+0x803E0000u; // 801BCD00
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCD04
  c->r[27]=c->r[27]+0x00000955u; // 801BCD08
  c->r[4]=0u+0x00000000u; // 801BCD0C
  c->r[3]=c->r[27]+0x00000028u; // 801BCD10
  c->r[5]=0u+0xFFFFFFFFu; // 801BCD14
  c->lr=0x801BCD1Cu; f_80068DD8(c); // 801BCD18
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCD1C
  c->r[5]=c->r[28]|c->r[28]; // 801BCD20
  c->r[3]=c->r[27]+0x0000002Fu; // 801BCD24
  c->r[4]=0u+0x00000000u; // 801BCD28
  c->lr=0x801BCD30u; f_80068DD8(c); // 801BCD2C
L_801BCD30:;
  c->r[5]=c->r[1]+0x00000014u; // 801BCD30
  c->r[6]=c->r[1]+0x00000008u; // 801BCD34
  c->r[3]=c->r[13]+0xFFFF9380u; // 801BCD38
  c->r[4]=0u+0xFFFFFFFFu; // 801BCD3C
  c->lr=0x801BCD44u; f_80028E1C(c); // 801BCD40
  c->r[3]=0u+0x804B0000u; // 801BCD44
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCD48
  c->r[3]=c->r[3]+0x00005CC8u; // 801BCD4C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCD50
  c->r[4]=c->r[28]|c->r[28]; // 801BCD54
  c->r[5]=c->r[31]|c->r[31]; // 801BCD58
  c->r[6]=c->r[29]|c->r[29]; // 801BCD5C
  c->r[7]=c->r[30]|c->r[30]; // 801BCD60
  c->r[3]=c->r[3]+0x00000094u; // 801BCD64
  c->lr=0x801BCD6Cu; f_8014E550(c); // 801BCD68
L_801BCD6C:;
  c->r[11]=c->r[1]+0x00000040u; // 801BCD6C
  c->lr=0x801BCD74u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BCD70
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BCD74
  c->lr=c->r[0]; // 801BCD78
  c->r[1]=c->r[1]+0x00000040u; // 801BCD7C
  return; // 801BCD80
}

// fn_801BCD84
void f_801BCD84(Ctx* __restrict c) {
  trace_call(0x801BCD84u);
  c->r[0]=R32(c->r[3]+0x00005060u); // 801BCD84
  c->r[6]=0u+0x00000000u; // 801BCD88
  c->ctr=c->r[0]; // 801BCD8C
  cmps(c,0,(int32_t)c->r[0],0); // 801BCD90
  if (!crb(c,1)) return; // 801BCD94
L_801BCD98:;
  c->r[7]=c->r[3]+c->r[6]; // 801BCD98
  c->r[0]=R32(c->r[7]+0x00000C98u); // 801BCD9C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801BCDA0
  if (!crb(c,2)) { goto L_801BCDBC; } // 801BCDA4
  {uint32_t ea=c->r[7]+0x00000C6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCDA8
  c->r[3]=c->r[5]|c->r[5]; // 801BCDAC
  {uint32_t ea=c->r[7]+0x00000C7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCDB0
  {uint32_t ea=c->r[7]+0x00000C8Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801BCDB4
  f_80065358(c); return; // 801BCDB8
L_801BCDBC:;
  c->r[6]=c->r[6]+0x00000044u; // 801BCDBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCD98; } // 801BCDC0
  return; // 801BCDC4
}

// fn_801BCDC8
void f_801BCDC8(Ctx* __restrict c) {
  trace_call(0x801BCDC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCDC8
  c->r[0]=c->lr; // 801BCDCC
  cmps(c,0,(int32_t)c->r[4],0); // 801BCDD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BCDD4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BCDD8
  c->r[30]=c->r[6]|c->r[6]; // 801BCDDC
  if (crb(c,0)) { goto L_801BCDEC; } // 801BCDE0
  cmps(c,0,(int32_t)c->r[4],2); // 801BCDE4
  if (crb(c,0)) { goto L_801BCDF0; } // 801BCDE8
L_801BCDEC:;
  c->r[4]=0u+0x00000000u; // 801BCDEC
L_801BCDF0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BCDF0
  c->r[31]=0u+0x00000000u; // 801BCDF4
  if (crb(c,0)) { goto L_801BCE48; } // 801BCDF8
  c->r[6]=R32(c->r[3]+0x00005060u); // 801BCDFC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801BCE00
  c->r[8]=c->r[3]+c->r[0]; // 801BCE04
  c->r[4]=0u+0x00000000u; // 801BCE08
  c->ctr=c->r[6]; // 801BCE0C
  cmps(c,0,(int32_t)c->r[6],0); // 801BCE10
  if (!crb(c,1)) { goto L_801BCE48; } // 801BCE14
L_801BCE18:;
  c->r[7]=c->r[3]+c->r[4]; // 801BCE18
  c->r[0]=R32(c->r[7]+0x00000C90u); // 801BCE1C
  cmps(c,0,(int32_t)c->r[0],0); // 801BCE20
  if (!crb(c,1)) { goto L_801BCE40; } // 801BCE24
  c->r[6]=c->r[8]+c->r[4]; // 801BCE28
  c->r[0]=R32(c->r[6]+0x00000C9Cu); // 801BCE2C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801BCE30
  if (!crb(c,2)) { goto L_801BCE40; } // 801BCE34
  c->r[31]=c->r[7]+0x00000C60u; // 801BCE38
  goto L_801BCE48; // 801BCE3C
L_801BCE40:;
  c->r[4]=c->r[4]+0x00000044u; // 801BCE40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCE18; } // 801BCE44
L_801BCE48:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BCE48
  if (!crb(c,2)) { goto L_801BCE58; } // 801BCE4C
  c->r[3]=0u+0x00000000u; // 801BCE50
  goto L_801BCE98; // 801BCE54
L_801BCE58:;
  c->r[4]=R32(c->r[31]+0x00000038u); // 801BCE58
  cmps(c,0,(int32_t)c->r[4],0); // 801BCE5C
  if (crb(c,0)) { goto L_801BCE70; } // 801BCE60
  c->r[5]=c->r[30]|c->r[30]; // 801BCE64
  c->r[3]=c->r[3]+0x00000004u; // 801BCE68
  c->lr=0x801BCE70u; f_801BBF30(c); // 801BCE6C
L_801BCE70:;
  c->r[0]=0u+0x00000006u; // 801BCE70
  c->r[5]=c->r[31]+0xFFFFFFFCu; // 801BCE74
  c->r[4]=c->r[30]+0xFFFFFFFCu; // 801BCE78
  c->ctr=c->r[0]; // 801BCE7C
L_801BCE80:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801BCE80
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801BCE84
  W32(c->r[5]+0x00000004u,c->r[3]); // 801BCE88
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801BCE8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCE80; } // 801BCE90
  c->r[3]=0u+0x00000001u; // 801BCE94
L_801BCE98:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BCE98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BCE9C
  c->lr=c->r[0]; // 801BCEA0
  c->r[1]=c->r[1]+0x00000010u; // 801BCEA4
  return; // 801BCEA8
}

// fn_801BCEAC
void f_801BCEAC(Ctx* __restrict c) {
  trace_call(0x801BCEACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCEAC
  c->r[0]=c->lr; // 801BCEB0
  cmps(c,0,(int32_t)c->r[5],0); // 801BCEB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCEB8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BCEBC
  c->r[27]=c->r[3]|c->r[3]; // 801BCEC0
  c->r[28]=c->r[4]|c->r[4]; // 801BCEC4
  c->r[29]=c->r[5]|c->r[5]; // 801BCEC8
  c->r[30]=c->r[6]|c->r[6]; // 801BCECC
  if (crb(c,0)) { goto L_801BCEDC; } // 801BCED0
  cmps(c,0,(int32_t)c->r[5],21); // 801BCED4
  if (crb(c,0)) { goto L_801BCEE0; } // 801BCED8
L_801BCEDC:;
  c->r[29]=0u+0x00000000u; // 801BCEDC
L_801BCEE0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BCEE0
  if (crb(c,0)) { goto L_801BCEF0; } // 801BCEE4
  cmps(c,0,(int32_t)c->r[4],2); // 801BCEE8
  if (crb(c,0)) { goto L_801BCEF4; } // 801BCEEC
L_801BCEF0:;
  c->r[28]=0u+0x00000000u; // 801BCEF0
L_801BCEF4:;
  c->r[3]=c->r[29]|c->r[29]; // 801BCEF4
  c->lr=0x801BCEFCu; f_801BD354(c); // 801BCEF8
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 801BCEFC
  c->r[3]=c->r[29]|c->r[29]; // 801BCF00
  c->lr=0x801BCF08u; f_801BD430(c); // 801BCF04
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BCF08
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BCF0C
  if (crb(c,2)) { goto L_801BCF28; } // 801BCF10
  c->r[3]=c->r[29]|c->r[29]; // 801BCF14
  c->lr=0x801BCF1Cu; f_801BD430(c); // 801BCF18
  c->r[3]=R32(c->r[3]+0x00000008u); // 801BCF1C
  c->lr=0x801BCF24u; f_801D4264(c); // 801BCF20
  c->r[31]=c->r[3]+0x00000001u; // 801BCF24
L_801BCF28:;
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)42); // 801BCF28
  c->r[0]=rotl(c->r[29],1)&0xFFFFFFFEu; // 801BCF2C
  c->r[3]=c->r[27]+c->r[3]; // 801BCF30
  c->r[3]=c->r[3]+c->r[0]; // 801BCF34
  c->r[0]=R16(c->r[3]+0x00005064u); // 801BCF38
  c->r[0]=c->r[30]+c->r[0]; // 801BCF3C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801BCF40
  if (!crb(c,1)) { goto L_801BCF50; } // 801BCF44
  W16(c->r[3]+0x00005064u,c->r[31]); // 801BCF48
  goto L_801BCF54; // 801BCF4C
L_801BCF50:;
  W16(c->r[3]+0x00005064u,c->r[0]); // 801BCF50
L_801BCF54:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BCF54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCF58
  c->lr=c->r[0]; // 801BCF5C
  c->r[1]=c->r[1]+0x00000020u; // 801BCF60
  return; // 801BCF64
}

// fn_801BCF68
void f_801BCF68(Ctx* __restrict c) {
  trace_call(0x801BCF68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCF68
  c->r[0]=c->lr; // 801BCF6C
  cmps(c,0,(int32_t)c->r[5],0); // 801BCF70
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCF74
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BCF78
  c->r[28]=c->r[3]|c->r[3]; // 801BCF7C
  c->r[29]=c->r[4]|c->r[4]; // 801BCF80
  c->r[30]=c->r[5]|c->r[5]; // 801BCF84
  c->r[31]=c->r[6]|c->r[6]; // 801BCF88
  if (crb(c,0)) { goto L_801BCF98; } // 801BCF8C
  cmps(c,0,(int32_t)c->r[5],21); // 801BCF90
  if (crb(c,0)) { goto L_801BCF9C; } // 801BCF94
L_801BCF98:;
  c->r[30]=0u+0x00000000u; // 801BCF98
L_801BCF9C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BCF9C
  if (crb(c,0)) { goto L_801BCFAC; } // 801BCFA0
  cmps(c,0,(int32_t)c->r[4],2); // 801BCFA4
  if (crb(c,0)) { goto L_801BCFB0; } // 801BCFA8
L_801BCFAC:;
  c->r[29]=0u+0x00000000u; // 801BCFAC
L_801BCFB0:;
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801BCFB0
  c->r[3]=c->r[13]+0xFFFF94B8u; // 801BCFB4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BCFB8
  cmps(c,0,(int32_t)c->r[3],0); // 801BCFBC
  if (crb(c,2)) { goto L_801BCFD4; } // 801BCFC0
  c->r[4]=0u+0x00000010u; // 801BCFC4
  c->lr=0x801BCFCCu; f_80067E3C(c); // 801BCFC8
  cmps(c,0,(int32_t)c->r[3],0); // 801BCFCC
  if (!crb(c,2)) { goto L_801BD000; } // 801BCFD0
L_801BCFD4:;
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)42); // 801BCFD4
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801BCFD8
  c->r[3]=c->r[28]+c->r[3]; // 801BCFDC
  c->r[3]=c->r[3]+c->r[0]; // 801BCFE0
  c->r[0]=R16(c->r[3]+0x00005064u); // 801BCFE4
  c->r[0]=c->r[0]-c->r[31]; cr0(c,c->r[0]); // 801BCFE8
  if (!crb(c,0)) { goto L_801BCFFC; } // 801BCFEC
  c->r[0]=0u+0x00000000u; // 801BCFF0
  W16(c->r[3]+0x00005064u,c->r[0]); // 801BCFF4
  goto L_801BD000; // 801BCFF8
L_801BCFFC:;
  W16(c->r[3]+0x00005064u,c->r[0]); // 801BCFFC
L_801BD000:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BD000
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD004
  c->lr=c->r[0]; // 801BD008
  c->r[1]=c->r[1]+0x00000020u; // 801BD00C
  return; // 801BD010
}

// fn_801BD014
void f_801BD014(Ctx* __restrict c) {
  trace_call(0x801BD014u);
  cmps(c,0,(int32_t)c->r[5],0); // 801BD014
  if (crb(c,0)) { goto L_801BD024; } // 801BD018
  cmps(c,0,(int32_t)c->r[5],21); // 801BD01C
  if (crb(c,0)) { goto L_801BD028; } // 801BD020
L_801BD024:;
  c->r[5]=0u+0x00000000u; // 801BD024
L_801BD028:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BD028
  if (crb(c,0)) { goto L_801BD038; } // 801BD02C
  cmps(c,0,(int32_t)c->r[4],2); // 801BD030
  if (crb(c,0)) { goto L_801BD03C; } // 801BD034
L_801BD038:;
  c->r[4]=0u+0x00000000u; // 801BD038
L_801BD03C:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)42); // 801BD03C
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801BD040
  c->r[3]=c->r[3]+c->r[4]; // 801BD044
  c->r[3]=c->r[3]+c->r[0]; // 801BD048
  c->r[3]=R16(c->r[3]+0x00005064u); // 801BD04C
  return; // 801BD050
}

// fn_801BD054
void f_801BD054(Ctx* __restrict c) {
  trace_call(0x801BD054u);
  cmps(c,0,(int32_t)c->r[5],0); // 801BD054
  if (crb(c,0)) { goto L_801BD064; } // 801BD058
  cmps(c,0,(int32_t)c->r[5],21); // 801BD05C
  if (crb(c,0)) { goto L_801BD068; } // 801BD060
L_801BD064:;
  c->r[5]=0u+0x00000000u; // 801BD064
L_801BD068:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BD068
  if (crb(c,0)) { goto L_801BD078; } // 801BD06C
  cmps(c,0,(int32_t)c->r[4],2); // 801BD070
  if (crb(c,0)) { goto L_801BD07C; } // 801BD074
L_801BD078:;
  c->r[4]=0u+0x00000000u; // 801BD078
L_801BD07C:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)42); // 801BD07C
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801BD080
  c->r[3]=c->r[3]+c->r[4]; // 801BD084
  c->r[3]=c->r[3]+c->r[0]; // 801BD088
  W16(c->r[3]+0x000050B8u,c->r[6]); // 801BD08C
  return; // 801BD090
}

// fn_801BD094
void f_801BD094(Ctx* __restrict c) {
  trace_call(0x801BD094u);
  cmps(c,0,(int32_t)c->r[5],0); // 801BD094
  if (crb(c,0)) { goto L_801BD0A4; } // 801BD098
  cmps(c,0,(int32_t)c->r[5],21); // 801BD09C
  if (crb(c,0)) { goto L_801BD0A8; } // 801BD0A0
L_801BD0A4:;
  c->r[5]=0u+0x00000000u; // 801BD0A4
L_801BD0A8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BD0A8
  if (crb(c,0)) { goto L_801BD0B8; } // 801BD0AC
  cmps(c,0,(int32_t)c->r[4],2); // 801BD0B0
  if (crb(c,0)) { goto L_801BD0BC; } // 801BD0B4
L_801BD0B8:;
  c->r[4]=0u+0x00000000u; // 801BD0B8
L_801BD0BC:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)42); // 801BD0BC
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801BD0C0
  c->r[3]=c->r[3]+c->r[4]; // 801BD0C4
  c->r[3]=c->r[3]+c->r[0]; // 801BD0C8
  c->r[3]=R16(c->r[3]+0x000050B8u); // 801BD0CC
  return; // 801BD0D0
}

// fn_801BD0D4
void f_801BD0D4(Ctx* __restrict c) {
  trace_call(0x801BD0D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD0D4
  c->r[0]=c->lr; // 801BD0D8
  cmps(c,0,(int32_t)c->r[4],0); // 801BD0DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD0E0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BD0E4
  c->r[27]=c->r[5]|c->r[5]; // 801BD0E8
  if (crb(c,0)) { goto L_801BD0F8; } // 801BD0EC
  cmps(c,0,(int32_t)c->r[4],2); // 801BD0F0
  if (crb(c,0)) { goto L_801BD0FC; } // 801BD0F4
L_801BD0F8:;
  c->r[4]=0u+0x00000000u; // 801BD0F8
L_801BD0FC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)42); // 801BD0FC
  c->r[28]=0u+0x00000000u; // 801BD100
  c->r[31]=0u+0x00000000u; // 801BD104
  c->r[30]=c->r[28]|c->r[28]; // 801BD108
  c->r[29]=c->r[3]+c->r[0]; // 801BD10C
L_801BD110:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BD110
  if (crb(c,2)) { goto L_801BD12C; } // 801BD114
  c->r[3]=c->r[28]|c->r[28]; // 801BD118
  c->lr=0x801BD120u; f_801BD430(c); // 801BD11C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BD120
  c->r[0]=c->r[27]&c->r[0]; cr0(c,c->r[0]); // 801BD124
  if (crb(c,2)) { goto L_801BD134; } // 801BD128
L_801BD12C:;
  c->r[3]=c->r[29]+c->r[31]; // 801BD12C
  W16(c->r[3]+0x000050B8u,c->r[30]); // 801BD130
L_801BD134:;
  c->r[28]=c->r[28]+0x00000001u; // 801BD134
  c->r[31]=c->r[31]+0x00000002u; // 801BD138
  cmps(c,0,(int32_t)c->r[28],21); // 801BD13C
  if (crb(c,0)) { IRQCHK(c); goto L_801BD110; } // 801BD140
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BD144
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD148
  c->lr=c->r[0]; // 801BD14C
  c->r[1]=c->r[1]+0x00000020u; // 801BD150
  return; // 801BD154
}

// fn_801BD158
void f_801BD158(Ctx* __restrict c) {
  trace_call(0x801BD158u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD158
  c->r[0]=c->lr; // 801BD15C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD160
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD164
  c->r[31]=c->r[3]|c->r[3]; // 801BD168
  c->r[0]=R32(c->r[13]+0xFFFF9750u); // 801BD16C
  cmps(c,0,(int32_t)c->r[0],0); // 801BD170
  if (crb(c,2)) { goto L_801BD19C; } // 801BD174
  c->r[3]=c->r[0]|c->r[0]; // 801BD178
  c->r[4]=c->r[31]+0x00005160u; // 801BD17C
  c->lr=0x801BD184u; f_801F7F98(c); // 801BD180
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801BD184
  c->r[4]=c->r[31]+0x00005180u; // 801BD188
  c->lr=0x801BD190u; f_801F7F98(c); // 801BD18C
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 801BD190
  c->r[4]=c->r[31]+0x000051A0u; // 801BD194
  c->lr=0x801BD19Cu; f_801F7F98(c); // 801BD198
L_801BD19C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD19C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD1A0
  c->lr=c->r[0]; // 801BD1A4
  c->r[1]=c->r[1]+0x00000010u; // 801BD1A8
  return; // 801BD1AC
}

// fn_801BD1B0
void f_801BD1B0(Ctx* __restrict c) {
  trace_call(0x801BD1B0u);
  c->r[0]=R32(c->r[13]+0xFFFF9750u); // 801BD1B0
  c->r[4]=c->r[3]|c->r[3]; // 801BD1B4
  cmps(c,0,(int32_t)c->r[0],0); // 801BD1B8
  if (crb(c,2)) return; // 801BD1BC
  c->r[3]=c->r[0]|c->r[0]; // 801BD1C0
  c->r[4]=c->r[4]+0x00005180u; // 801BD1C4
  f_801F7F8C(c); return; // 801BD1C8
  return; // 801BD1CC
}

// fn_801BD1D0
void f_801BD1D0(Ctx* __restrict c) {
  trace_call(0x801BD1D0u);
  c->r[9]=0u+0x00000000u; // 801BD1D0
  c->r[4]=0u+0x00000000u; // 801BD1D4
  c->r[0]=0u+0x00000002u; // 801BD1D8
L_801BD1DC:;
  c->r[7]=c->r[3]+c->r[4]; // 801BD1DC
  c->r[5]=0u+0x00000000u; // 801BD1E0
  c->ctr=c->r[0]; // 801BD1E4
L_801BD1E8:;
  c->r[8]=c->r[7]+c->r[5]; // 801BD1E8
  c->r[5]=c->r[5]+0x0000002Au; // 801BD1EC
  c->r[6]=R16(c->r[8]+0x00005064u); // 801BD1F0
  W16(c->r[8]+0x000050B8u,c->r[6]); // 801BD1F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BD1E8; } // 801BD1F8
  c->r[9]=c->r[9]+0x00000001u; // 801BD1FC
  c->r[4]=c->r[4]+0x00000002u; // 801BD200
  cmps(c,0,(int32_t)c->r[9],21); // 801BD204
  if (crb(c,0)) { IRQCHK(c); goto L_801BD1DC; } // 801BD208
  c->r[4]=c->r[3]+0x00005180u; // 801BD20C
  c->r[5]=0u+0x00000020u; // 801BD210
  c->r[3]=c->r[3]+0x00005160u; // 801BD214
  f_80235294(c); return; // 801BD218
}

// fn_801BD21C
void f_801BD21C(Ctx* __restrict c) {
  trace_call(0x801BD21Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 801BD21C
  if (crb(c,0)) { goto L_801BD22C; } // 801BD220
  cmps(c,0,(int32_t)c->r[4],21); // 801BD224
  if (crb(c,0)) { goto L_801BD230; } // 801BD228
L_801BD22C:;
  c->r[4]=0u+0x00000000u; // 801BD22C
L_801BD230:;
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801BD230
  c->r[3]=c->r[3]+c->r[0]; // 801BD234
  W16(c->r[3]+0x0000510Cu,c->r[5]); // 801BD238
  return; // 801BD23C
}

// fn_801BD240
void f_801BD240(Ctx* __restrict c) {
  trace_call(0x801BD240u);
  cmps(c,0,(int32_t)c->r[4],0); // 801BD240
  if (crb(c,0)) { goto L_801BD250; } // 801BD244
  cmps(c,0,(int32_t)c->r[4],21); // 801BD248
  if (crb(c,0)) { goto L_801BD254; } // 801BD24C
L_801BD250:;
  c->r[4]=0u+0x00000000u; // 801BD250
L_801BD254:;
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801BD254
  c->r[3]=c->r[3]+c->r[0]; // 801BD258
  c->r[3]=R16(c->r[3]+0x0000510Cu); // 801BD25C
  return; // 801BD260
}

// fn_801BD264
void f_801BD264(Ctx* __restrict c) {
  trace_call(0x801BD264u);
  cmps(c,0,(int32_t)c->r[4],0); // 801BD264
  if (crb(c,0)) { goto L_801BD274; } // 801BD268
  cmps(c,0,(int32_t)c->r[4],21); // 801BD26C
  if (crb(c,0)) { goto L_801BD278; } // 801BD270
L_801BD274:;
  c->r[4]=0u+0x00000000u; // 801BD274
L_801BD278:;
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801BD278
  c->r[3]=c->r[3]+c->r[0]; // 801BD27C
  W16(c->r[3]+0x00005136u,c->r[5]); // 801BD280
  return; // 801BD284
}

// fn_801BD288
void f_801BD288(Ctx* __restrict c) {
  trace_call(0x801BD288u);
  cmps(c,0,(int32_t)c->r[4],0); // 801BD288
  if (crb(c,0)) { goto L_801BD298; } // 801BD28C
  cmps(c,0,(int32_t)c->r[4],21); // 801BD290
  if (crb(c,0)) { goto L_801BD29C; } // 801BD294
L_801BD298:;
  c->r[4]=0u+0x00000000u; // 801BD298
L_801BD29C:;
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801BD29C
  c->r[3]=c->r[3]+c->r[0]; // 801BD2A0
  c->r[3]=R16(c->r[3]+0x00005136u); // 801BD2A4
  return; // 801BD2A8
}

// fn_801BD2AC
void f_801BD2AC(Ctx* __restrict c) {
  trace_call(0x801BD2ACu);
  cmps(c,0,(int32_t)c->r[4],0); // 801BD2AC
  if (crb(c,0)) { goto L_801BD2BC; } // 801BD2B0
  cmps(c,0,(int32_t)c->r[4],256); // 801BD2B4
  if (crb(c,0)) { goto L_801BD2C0; } // 801BD2B8
L_801BD2BC:;
  c->r[4]=0u+0x00000000u; // 801BD2BC
L_801BD2C0:;
  c->r[5]=sraw(c,c->r[4],3); // 801BD2C0
  c->r[0]=rotl(c->r[4],0)&0x00000007u; // 801BD2C4
  c->r[5]=c->r[3]+c->r[5]; // 801BD2C8
  c->r[3]=0u+0x00000001u; // 801BD2CC
  c->r[4]=R8(c->r[5]+0x00005180u); // 801BD2D0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801BD2D4
  c->r[0]=c->r[4]|c->r[0]; // 801BD2D8
  W8(c->r[5]+0x00005180u,c->r[0]); // 801BD2DC
  return; // 801BD2E0
}

// fn_801BD2E4
void f_801BD2E4(Ctx* __restrict c) {
  trace_call(0x801BD2E4u);
  cmps(c,0,(int32_t)c->r[4],0); // 801BD2E4
  if (crb(c,0)) { goto L_801BD2F4; } // 801BD2E8
  cmps(c,0,(int32_t)c->r[4],256); // 801BD2EC
  if (crb(c,0)) { goto L_801BD2F8; } // 801BD2F0
L_801BD2F4:;
  c->r[4]=0u+0x00000000u; // 801BD2F4
L_801BD2F8:;
  c->r[0]=sraw(c,c->r[4],3); // 801BD2F8
  c->r[4]=rotl(c->r[4],0)&0x00000007u; // 801BD2FC
  c->r[3]=c->r[3]+c->r[0]; // 801BD300
  c->r[5]=0u+0x00000001u; // 801BD304
  c->r[0]=R8(c->r[3]+0x00005180u); // 801BD308
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801BD30C
  c->r[3]=c->r[3]&c->r[0]; // 801BD310
  return; // 801BD314
}

// fn_801BD318
void f_801BD318(Ctx* __restrict c) {
  trace_call(0x801BD318u);
  cmps(c,0,(int32_t)c->r[4],0); // 801BD318
  if (crb(c,0)) { goto L_801BD328; } // 801BD31C
  cmps(c,0,(int32_t)c->r[4],256); // 801BD320
  if (crb(c,0)) { goto L_801BD32C; } // 801BD324
L_801BD328:;
  c->r[4]=0u+0x00000000u; // 801BD328
L_801BD32C:;
  c->r[0]=sraw(c,c->r[4],3); // 801BD32C
  c->r[4]=rotl(c->r[4],0)&0x00000007u; // 801BD330
  c->r[3]=c->r[3]+c->r[0]; // 801BD334
  c->r[5]=0u+0x00000001u; // 801BD338
  c->r[0]=R8(c->r[3]+0x000051A0u); // 801BD33C
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801BD340
  c->r[3]=c->r[3]&c->r[0]; // 801BD344
  return; // 801BD348
}

// fn_801BD34C
void f_801BD34C(Ctx* __restrict c) {
  trace_call(0x801BD34Cu);
  c->r[3]=c->r[3]+0x000050B8u; // 801BD34C
  return; // 801BD350
}

// fn_801BD354
void f_801BD354(Ctx* __restrict c) {
  trace_call(0x801BD354u);
  cmps(c,0,(int32_t)c->r[3],0); // 801BD354
  if (crb(c,0)) { goto L_801BD364; } // 801BD358
  cmps(c,0,(int32_t)c->r[3],21); // 801BD35C
  if (crb(c,0)) { goto L_801BD368; } // 801BD360
L_801BD364:;
  c->r[3]=0u+0x00000000u; // 801BD364
L_801BD368:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801BD368
  c->r[3]=0u+0x80570000u; // 801BD36C
  c->r[3]=c->r[3]+0xFFFFA120u; // 801BD370
  c->r[3]=c->r[3]+c->r[0]; // 801BD374
  return; // 801BD378
}

// fn_801BD37C
void f_801BD37C(Ctx* __restrict c) {
  trace_call(0x801BD37Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD37C
  c->r[0]=c->lr; // 801BD380
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BD384
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BD388
  c->r[30]=0u+0x80570000u; // 801BD38C
  c->r[25]=c->r[3]|c->r[3]; // 801BD390
  c->r[26]=c->r[4]|c->r[4]; // 801BD394
  c->r[30]=c->r[30]+0xFFFFA120u; // 801BD398
  c->r[27]=0u+0x00000000u; // 801BD39C
  c->r[31]=0u+0x00000000u; // 801BD3A0
  c->r[28]=R32(c->r[3]+0x00000000u); // 801BD3A4
L_801BD3A8:;
  c->r[3]=c->r[30]+c->r[31]; // 801BD3A8
  c->r[4]=0u+0x00000000u; // 801BD3AC
  c->r[5]=0u+0x00000014u; // 801BD3B0
  c->lr=0x801BD3B8u; f_800043EC(c); // 801BD3B4
  c->r[27]=c->r[27]+0x00000001u; // 801BD3B8
  c->r[31]=c->r[31]+0x00000014u; // 801BD3BC
  cmps(c,0,(int32_t)c->r[27],21); // 801BD3C0
  if (crb(c,0)) { IRQCHK(c); goto L_801BD3A8; } // 801BD3C4
  cmpu(c,0,c->r[28],0x00000014u); // 801BD3C8
  c->r[27]=c->r[28]|c->r[28]; // 801BD3CC
  if (!crb(c,1)) { goto L_801BD3D8; } // 801BD3D0
  c->r[27]=0u+0x00000014u; // 801BD3D4
L_801BD3D8:;
  c->r[30]=0u+0x80570000u; // 801BD3D8
  c->r[29]=0u+0x00000000u; // 801BD3DC
  c->r[30]=c->r[30]+0xFFFFA120u; // 801BD3E0
  c->r[31]=0u+0x00000000u; // 801BD3E4
L_801BD3E8:;
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[29]); // 801BD3E8
  c->r[4]=c->r[3]+0x00000004u; // 801BD3EC
  c->r[0]=c->r[4]+c->r[27]; // 801BD3F0
  cmpu(c,0,c->r[26],c->r[0]); // 801BD3F4
  if (crb(c,0)) { goto L_801BD40C; } // 801BD3F8
  c->r[5]=c->r[27]|c->r[27]; // 801BD3FC
  c->r[3]=c->r[30]+c->r[31]; // 801BD400
  c->r[4]=c->r[25]+c->r[4]; // 801BD404
  c->lr=0x801BD40Cu; f_80235294(c); // 801BD408
L_801BD40C:;
  c->r[29]=c->r[29]+0x00000001u; // 801BD40C
  c->r[31]=c->r[31]+0x00000014u; // 801BD410
  cmps(c,0,(int32_t)c->r[29],21); // 801BD414
  if (crb(c,0)) { IRQCHK(c); goto L_801BD3E8; } // 801BD418
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BD41C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD420
  c->lr=c->r[0]; // 801BD424
  c->r[1]=c->r[1]+0x00000030u; // 801BD428
  return; // 801BD42C
}

// fn_801BD430
void f_801BD430(Ctx* __restrict c) {
  trace_call(0x801BD430u);
  cmps(c,0,(int32_t)c->r[3],0); // 801BD430
  if (crb(c,0)) { goto L_801BD440; } // 801BD434
  cmps(c,0,(int32_t)c->r[3],21); // 801BD438
  if (crb(c,0)) { goto L_801BD444; } // 801BD43C
L_801BD440:;
  c->r[3]=0u+0x00000000u; // 801BD440
L_801BD444:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801BD444
  c->r[3]=0u+0x80400000u; // 801BD448
  c->r[3]=c->r[3]+0x00001B28u; // 801BD44C
  c->r[3]=c->r[3]+c->r[0]; // 801BD450
  return; // 801BD454
}

// fn_801BD458
void f_801BD458(Ctx* __restrict c) {
  trace_call(0x801BD458u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD458
  c->r[0]=c->lr; // 801BD45C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BD460
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BD464
  c->r[30]=c->r[3]|c->r[3]; // 801BD468
  c->r[31]=c->r[4]|c->r[4]; // 801BD46C
  c->r[25]=0u+0x00000000u; // 801BD470
  c->r[28]=0u+0x00000000u; // 801BD474
  c->r[27]=0u+0xFFFFFFFFu; // 801BD478
  c->r[26]=0u+0x00000000u; // 801BD47C
  c->r[29]=0u+0x00000002u; // 801BD480
L_801BD484:;
  c->r[3]=c->r[30]+c->r[28]; // 801BD484
  c->r[3]=c->r[3]+0x00000C60u; // 801BD488
  c->lr=0x801BD490u; f_80264680(c); // 801BD48C
  c->r[5]=c->r[30]+c->r[28]; // 801BD490
  c->r[3]=0u+0x00000000u; // 801BD494
  W32(c->r[5]+0x00000C90u,c->r[26]); // 801BD498
  W32(c->r[5]+0x00000C94u,c->r[26]); // 801BD49C
  W32(c->r[5]+0x00000C98u,c->r[27]); // 801BD4A0
  c->ctr=c->r[29]; // 801BD4A4
L_801BD4A8:;
  c->r[4]=c->r[5]+c->r[3]; // 801BD4A8
  c->r[3]=c->r[3]+0x00000004u; // 801BD4AC
  W32(c->r[4]+0x00000C9Cu,c->r[27]); // 801BD4B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BD4A8; } // 801BD4B4
  c->r[25]=c->r[25]+0x00000001u; // 801BD4B8
  c->r[28]=c->r[28]+0x00000044u; // 801BD4BC
  cmps(c,0,(int32_t)c->r[25],256); // 801BD4C0
  if (crb(c,0)) { IRQCHK(c); goto L_801BD484; } // 801BD4C4
  c->r[6]=0u+0x00000000u; // 801BD4C8
  c->r[9]=0u+0x00000000u; // 801BD4CC
  W32(c->r[30]+0x00005060u,c->r[6]); // 801BD4D0
  c->r[3]=0u+0x00000000u; // 801BD4D4
  c->r[0]=0u+0x00000002u; // 801BD4D8
L_801BD4DC:;
  c->r[7]=c->r[30]+c->r[3]; // 801BD4DC
  c->r[4]=0u+0x00000000u; // 801BD4E0
  c->ctr=c->r[0]; // 801BD4E4
L_801BD4E8:;
  cmpu(c,0,c->r[31],0x00000001u); // 801BD4E8
  if (!crb(c,2)) { goto L_801BD500; } // 801BD4EC
  c->r[8]=c->r[7]+c->r[4]; // 801BD4F0
  c->r[5]=R16(c->r[8]+0x000050B8u); // 801BD4F4
  W16(c->r[8]+0x00005064u,c->r[5]); // 801BD4F8
  goto L_801BD514; // 801BD4FC
L_801BD500:;
  c->r[5]=c->r[7]+c->r[4]; // 801BD500
  W16(c->r[5]+0x00005064u,c->r[6]); // 801BD504
  W16(c->r[5]+0x000050B8u,c->r[6]); // 801BD508
  W16(c->r[7]+0x0000510Cu,c->r[6]); // 801BD50C
  W16(c->r[7]+0x00005136u,c->r[6]); // 801BD510
L_801BD514:;
  c->r[4]=c->r[4]+0x0000002Au; // 801BD514
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BD4E8; } // 801BD518
  c->r[9]=c->r[9]+0x00000001u; // 801BD51C
  c->r[3]=c->r[3]+0x00000002u; // 801BD520
  cmps(c,0,(int32_t)c->r[9],21); // 801BD524
  if (crb(c,0)) { IRQCHK(c); goto L_801BD4DC; } // 801BD528
  cmpu(c,0,c->r[31],0x00000001u); // 801BD52C
  if (crb(c,2)) { goto L_801BD554; } // 801BD530
  c->r[3]=c->r[30]+0x00005160u; // 801BD534
  c->r[4]=0u+0x00000000u; // 801BD538
  c->r[5]=0u+0x00000020u; // 801BD53C
  c->lr=0x801BD544u; f_800043EC(c); // 801BD540
  c->r[3]=c->r[30]+0x000051A0u; // 801BD544
  c->r[4]=0u+0x00000000u; // 801BD548
  c->r[5]=0u+0x00000020u; // 801BD54C
  c->lr=0x801BD554u; f_800043EC(c); // 801BD550
L_801BD554:;
  c->r[3]=c->r[30]+0x00005180u; // 801BD554
  c->r[4]=c->r[30]+0x00005160u; // 801BD558
  c->r[5]=0u+0x00000020u; // 801BD55C
  c->lr=0x801BD564u; f_80235294(c); // 801BD560
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BD564
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD568
  c->lr=c->r[0]; // 801BD56C
  c->r[1]=c->r[1]+0x00000030u; // 801BD570
  return; // 801BD574
}

// fn_801BD578
void f_801BD578(Ctx* __restrict c) {
  trace_call(0x801BD578u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BD578
  return; // 801BD57C
}

// fn_801BD580
void f_801BD580(Ctx* __restrict c) {
  trace_call(0x801BD580u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD580
  c->r[0]=c->lr; // 801BD584
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801BD588
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD58C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BD590
  c->r[27]=c->r[3]|c->r[3]; // 801BD594
  c->r[3]=c->r[4]|c->r[4]; // 801BD598
  c->r[30]=c->r[6]+0x00000400u; // 801BD59C
  c->r[28]=c->r[5]|c->r[5]; // 801BD5A0
  c->r[29]=c->r[7]|c->r[7]; // 801BD5A4
  c->r[31]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801BD5A8
  c->r[4]=c->r[30]|c->r[30]; // 801BD5AC
  c->lr=0x801BD5B4u; f_802A703C(c); // 801BD5B0
  c->r[4]=c->r[30]|c->r[30]; // 801BD5B4
  c->r[5]=c->r[28]|c->r[28]; // 801BD5B8
  c->r[6]=0u+0x00000020u; // 801BD5BC
  c->r[7]=0u+0x00000000u; // 801BD5C0
  c->lr=0x801BD5C8u; f_802A6D58(c); // 801BD5C4
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 801BD5C8
  c->r[4]=c->r[3]|c->r[3]; // 801BD5CC
  W32(c->r[27]+c->r[31],c->r[3]); // 801BD5D0
  c->r[3]=c->r[27]+c->r[0]; // 801BD5D4
  c->r[3]=c->r[3]+0x00000008u; // 801BD5D8
  c->lr=0x801BD5E0u; f_802A7094(c); // 801BD5DC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BD5E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD5E4
  c->lr=c->r[0]; // 801BD5E8
  c->r[1]=c->r[1]+0x00000020u; // 801BD5EC
  return; // 801BD5F0
}

// fn_801BD5F4
void f_801BD5F4(Ctx* __restrict c) {
  trace_call(0x801BD5F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD5F4
  c->r[0]=c->lr; // 801BD5F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD5FC
  c->r[11]=c->r[1]+0x00000020u; // 801BD600
  c->lr=0x801BD608u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BD604
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801BD608
  c->r[28]=c->r[4]|c->r[4]; // 801BD60C
  c->r[29]=c->r[5]|c->r[5]; // 801BD610
  c->r[30]=c->r[6]|c->r[6]; // 801BD614
  if (crb(c,1)) { goto L_801BD6F4; } // 801BD618
  c->r[0]=c->r[3]+c->r[4]; // 801BD61C
  c->r[11]=c->r[3]|c->r[3]; // 801BD620
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFCu; // 801BD624
  c->r[31]=c->r[28]|c->r[28]; // 801BD628
  c->r[0]=R32(c->r[6]+c->r[0]); // 801BD62C
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801BD630
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD634
  {uint32_t ea=c->r[5]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD638
  goto L_801BD648; // 801BD63C
L_801BD640:;
  c->r[11]=c->r[11]+0x00000001u; // 801BD640
  c->r[7]=c->r[7]+0x00000004u; // 801BD644
L_801BD648:;
  c->r[9]=R32(c->r[6]+c->r[7]); // 801BD648
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801BD64C
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD650
  fcmp(c,0,c->f[0],c->f[1]); // 801BD654
  c->r[0]=c->cr; // 801BD658
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801BD65C
  if (crb(c,2)) { goto L_801BD66C; } // 801BD660
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[4]); // 801BD664
  if (!crb(c,1)) { IRQCHK(c); goto L_801BD640; } // 801BD668
L_801BD66C:;
  c->r[8]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BD66C
  goto L_801BD67C; // 801BD670
L_801BD674:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801BD674
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 801BD678
L_801BD67C:;
  c->r[10]=R32(c->r[6]+c->r[8]); // 801BD67C
  c->r[0]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801BD680
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD684
  fcmp(c,0,c->f[0],c->f[1]); // 801BD688
  c->r[0]=c->cr; // 801BD68C
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 801BD690
  if (crb(c,2)) { goto L_801BD6A0; } // 801BD694
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801BD698
  if (!crb(c,0)) { IRQCHK(c); goto L_801BD674; } // 801BD69C
L_801BD6A0:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[31]); // 801BD6A0
  if (!crb(c,0)) { goto L_801BD6C0; } // 801BD6A4
  W32(c->r[6]+c->r[7],c->r[10]); // 801BD6A8
  c->r[11]=c->r[11]+0x00000001u; // 801BD6AC
  c->r[7]=c->r[7]+0x00000004u; // 801BD6B0
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801BD6B4
  W32(c->r[6]+c->r[8],c->r[9]); // 801BD6B8
  IRQCHK(c); goto L_801BD648; // 801BD6BC
L_801BD6C0:;
  c->r[4]=c->r[11]+0xFFFFFFFFu; // 801BD6C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801BD6C4
  if (!crb(c,0)) { goto L_801BD6D8; } // 801BD6C8
  c->r[5]=c->r[29]|c->r[29]; // 801BD6CC
  c->r[6]=c->r[30]|c->r[30]; // 801BD6D0
  c->lr=0x801BD6D8u; f_801BD5F4(c); // 801BD6D4
L_801BD6D8:;
  c->r[3]=c->r[31]+0x00000001u; // 801BD6D8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801BD6DC
  if (!crb(c,1)) { goto L_801BD6F4; } // 801BD6E0
  c->r[4]=c->r[28]|c->r[28]; // 801BD6E4
  c->r[5]=c->r[29]|c->r[29]; // 801BD6E8
  c->r[6]=c->r[30]|c->r[30]; // 801BD6EC
  c->lr=0x801BD6F4u; f_801BD5F4(c); // 801BD6F0
L_801BD6F4:;
  c->r[11]=c->r[1]+0x00000020u; // 801BD6F4
  c->lr=0x801BD6FCu; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BD6F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD6FC
  c->lr=c->r[0]; // 801BD700
  c->r[1]=c->r[1]+0x00000020u; // 801BD704
  return; // 801BD708
}

// fn_801BD70C
void f_801BD70C(Ctx* __restrict c) {
  trace_call(0x801BD70Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD70C
  c->r[0]=c->lr; // 801BD710
  {uint32_t ea=c->r[2]+0xFFFFB664u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD714
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD718
  c->f[3]=c->f[1]; // 801BD71C
  {uint32_t ea=c->r[2]+0xFFFFB668u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD720
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD724
  c->r[31]=0u+0x80570000u; // 801BD728
  c->r[31]=c->r[31]+0xFFFFA108u; // 801BD72C
  c->r[3]=c->r[31]+0x0000000Cu; // 801BD730
  c->lr=0x801BD738u; f_8003F588(c); // 801BD734
  c->r[3]=c->r[31]+0x000001C8u; // 801BD738
  c->lr=0x801BD740u; f_801BC1A0(c); // 801BD73C
  c->r[4]=0u+0x801C0000u; // 801BD740
  c->r[3]=c->r[31]+0x000001C8u; // 801BD744
  c->r[4]=c->r[4]+0xFFFFC1ECu; // 801BD748
  c->r[5]=c->r[31]+0x000001BCu; // 801BD74C
  c->lr=0x801BD754u; f_802895A4(c); // 801BD750
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD754
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD758
  c->lr=c->r[0]; // 801BD75C
  c->r[1]=c->r[1]+0x00000010u; // 801BD760
  return; // 801BD764
}

// fn_801BD768
void f_801BD768(Ctx* __restrict c) {
  trace_call(0x801BD768u);
  {uint32_t ea=c->r[1]+0xFFFFFD70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD768
  c->r[0]=c->lr; // 801BD76C
  W32(c->r[1]+0x00000294u,c->r[0]); // 801BD770
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[31]);} // 801BD774
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,31,ea,0,0);} // 801BD778
  c->r[11]=c->r[1]+0x00000280u; // 801BD77C
  c->lr=0x801BD784u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BD780
  c->r[31]=R32(c->r[5]+0x0000005Cu); // 801BD784
  c->r[21]=c->r[3]|c->r[3]; // 801BD788
  c->r[6]=R32(c->r[5]+0x0000006Cu); // 801BD78C
  c->r[22]=c->r[4]|c->r[4]; // 801BD790
  c->r[20]=R32(c->r[5]+0x00000058u); // 801BD794
  c->r[23]=c->r[5]|c->r[5]; // 801BD798
  c->r[26]=c->r[31]+0xFFFFFFFFu; // 801BD79C
  c->r[3]=c->r[1]+0x00000178u; // 801BD7A0
  c->r[4]=c->r[6]+0x00000018u; // 801BD7A4
  c->lr=0x801BD7ACu; f_8013939C(c); // 801BD7A8
  c->r[12]=R32(c->r[22]+0x00000000u); // 801BD7AC
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)472); // 801BD7B0
  c->r[5]=R32(c->r[23]+0x0000006Cu); // 801BD7B4
  c->r[4]=c->r[22]|c->r[22]; // 801BD7B8
  c->r[12]=R32(c->r[12]+0x00000034u); // 801BD7BC
  c->r[3]=c->r[1]+0x00000138u; // 801BD7C0
  c->r[5]=c->r[5]+c->r[0]; // 801BD7C4
  c->r[6]=0u+0x00000001u; // 801BD7C8
  c->r[5]=R32(c->r[5]+0x00000008u); // 801BD7CC
  c->ctr=c->r[12]; // 801BD7D0
  if (true) { c->lr=0x801BD7D8u; dispatch(c,c->ctr); } // 801BD7D4
  c->r[3]=c->r[1]+0x00000088u; // 801BD7D8
  c->r[4]=c->r[1]+0x00000138u; // 801BD7DC
  c->lr=0x801BD7E4u; f_80138AB8(c); // 801BD7E0
  c->r[3]=c->r[1]+0x00000188u; // 801BD7E4
  c->r[4]=c->r[1]+0x00000088u; // 801BD7E8
  c->lr=0x801BD7F0u; f_8013939C(c); // 801BD7EC
  c->r[0]=c->r[20]+0xFFFFFFFFu; // 801BD7F0
  c->r[4]=R32(c->r[23]+0x0000006Cu); // 801BD7F4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801BD7F8
  c->r[3]=c->r[1]+0x00000198u; // 801BD7FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)472); // 801BD800
  c->r[4]=c->r[4]+c->r[0]; // 801BD804
  c->r[4]=c->r[4]+0x00000018u; // 801BD808
  c->lr=0x801BD810u; f_8013939C(c); // 801BD80C
  c->r[5]=R32(c->r[23]+0x00000068u); // 801BD810
  c->r[4]=c->r[22]|c->r[22]; // 801BD814
  c->r[12]=R32(c->r[22]+0x00000000u); // 801BD818
  c->r[3]=c->r[1]+0x000000F8u; // 801BD81C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801BD820
  c->r[5]=R32(c->r[23]+0x0000006Cu); // 801BD824
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)472); // 801BD828
  c->r[12]=R32(c->r[12]+0x00000034u); // 801BD82C
  c->r[6]=0u+0x00000001u; // 801BD830
  c->r[5]=c->r[5]+c->r[0]; // 801BD834
  c->r[5]=R32(c->r[5]+0x00000008u); // 801BD838
  c->ctr=c->r[12]; // 801BD83C
  if (true) { c->lr=0x801BD844u; dispatch(c,c->ctr); } // 801BD840
  c->r[3]=c->r[1]+0x00000078u; // 801BD844
  c->r[4]=c->r[1]+0x000000F8u; // 801BD848
  c->lr=0x801BD850u; f_80138AB8(c); // 801BD84C
  c->r[3]=c->r[1]+0x000001A8u; // 801BD850
  c->r[4]=c->r[1]+0x00000078u; // 801BD854
  c->lr=0x801BD85Cu; f_8013939C(c); // 801BD858
  c->r[3]=c->r[1]+0x00000048u; // 801BD85C
  c->r[4]=c->r[1]+0x00000178u; // 801BD860
  c->r[5]=c->r[1]+0x00000188u; // 801BD864
  c->lr=0x801BD86Cu; f_801394B8(c); // 801BD868
  c->r[3]=c->r[1]+0x00000058u; // 801BD86C
  c->r[4]=c->r[1]+0x00000048u; // 801BD870
  c->r[5]=c->r[1]+0x00000198u; // 801BD874
  c->lr=0x801BD87Cu; f_801394B8(c); // 801BD878
  c->r[3]=c->r[1]+0x00000068u; // 801BD87C
  c->r[4]=c->r[1]+0x00000058u; // 801BD880
  c->r[5]=c->r[1]+0x000001A8u; // 801BD884
  c->lr=0x801BD88Cu; f_801394B8(c); // 801BD888
  c->r[3]=c->r[1]+0x000000A8u; // 801BD88C
  c->r[4]=c->r[1]+0x00000068u; // 801BD890
  c->lr=0x801BD898u; f_8013939C(c); // 801BD894
  {uint32_t ea=c->r[2]+0xFFFFB698u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD898
  c->r[3]=c->r[1]+0x000000A8u; // 801BD89C
  c->lr=0x801BD8A4u; f_80139448(c); // 801BD8A0
  {uint32_t ea=c->r[2]+0xFFFFB69Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801BD8A4
  c->r[20]=c->r[1]+0x00000178u; // 801BD8A8
  c->r[24]=0u+0x00000000u; // 801BD8AC
L_801BD8B0:;
  c->r[5]=c->r[20]|c->r[20]; // 801BD8B0
  c->r[3]=c->r[1]+0x00000038u; // 801BD8B4
  c->r[4]=c->r[1]+0x000000A8u; // 801BD8B8
  c->lr=0x801BD8C0u; f_801398F0(c); // 801BD8BC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD8C0
  fcmp(c,0,c->f[0],c->f[31]); // 801BD8C4
  if (!crb(c,1)) { goto L_801BD8D0; } // 801BD8C8
  c->f[31]=c->f[0]; // 801BD8CC
L_801BD8D0:;
  c->r[24]=c->r[24]+0x00000001u; // 801BD8D0
  c->r[20]=c->r[20]+0x00000010u; // 801BD8D4
  cmps(c,0,(int32_t)c->r[24],4); // 801BD8D8
  if (crb(c,0)) { IRQCHK(c); goto L_801BD8B0; } // 801BD8DC
  {uint32_t ea=c->r[2]+0xFFFFB69Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD8E0
  fcmp(c,0,c->f[31],c->f[0]); // 801BD8E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801BD8E8
  if (crb(c,2)) { goto L_801BD90C; } // 801BD8EC
  c->r[3]=0u+0x803F0000u; // 801BD8F0
  c->r[5]=0u+0x803F0000u; // 801BD8F4
  c->r[3]=c->r[3]+0x00001C38u; // 801BD8F8
  c->r[4]=0u+0x00000273u; // 801BD8FC
  c->r[5]=c->r[5]+0x00001C14u; // 801BD900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD904
  c->lr=0x801BD90Cu; f_80344550(c); // 801BD908
L_801BD90C:;
  {uint32_t ea=c->r[2]+0xFFFFB69Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BD90C
  fcmp(c,0,c->f[31],c->f[1]); // 801BD910
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BD914
  if (!crb(c,2)) { goto L_801BD920; } // 801BD918
  goto L_801BD92C; // 801BD91C
L_801BD920:;
  c->f[1]=c->f[31]; // 801BD920
  c->lr=0x801BD928u; f_80394248(c); // 801BD924
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801BD928
L_801BD92C:;
  c->r[3]=c->r[21]+0x00000018u; // 801BD92C
  c->r[4]=c->r[1]+0x000000A8u; // 801BD930
  c->lr=0x801BD938u; f_80056020(c); // 801BD934
  c->r[3]=c->r[21]|c->r[21]; // 801BD938
  c->r[4]=c->r[1]+0x000001B8u; // 801BD93C
  c->r[5]=c->r[21]+0x00000018u; // 801BD940
  c->lr=0x801BD948u; f_801D54E8(c); // 801BD944
  c->r[0]=R32(c->r[21]+0x00000008u); // 801BD948
  c->r[25]=c->r[3]|c->r[3]; // 801BD94C
  c->r[3]=R32(c->r[21]+0x0000000Cu); // 801BD950
  c->r[4]=0u+0x00000000u; // 801BD954
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD958
  c->lr=0x801BD960u; f_800043EC(c); // 801BD95C
  cmps(c,0,(int32_t)c->r[25],0); // 801BD960
  if (!crb(c,1)) { goto L_801BDA6C; } // 801BD964
  c->r[24]=0u+0x00000000u; // 801BD968
  c->r[29]=0u+0x00000000u; // 801BD96C
  c->r[28]=0u+0x00000000u; // 801BD970
  c->r[27]=0u+0x00000000u; // 801BD974
  goto L_801BDA60; // 801BD978
L_801BD97C:;
  c->r[0]=divw((int32_t)c->r[24],(int32_t)c->r[31]); // 801BD97C
  c->r[4]=R32(c->r[23]+0x0000006Cu); // 801BD980
  c->r[30]=c->r[4]+c->r[29]; // 801BD984
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801BD988
  c->r[0]=c->r[24]-c->r[0]; // 801BD98C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801BD990
  if (!crb(c,2)) { goto L_801BD9D4; } // 801BD994
  c->r[12]=R32(c->r[22]+0x00000000u); // 801BD998
  c->r[4]=c->r[22]|c->r[22]; // 801BD99C
  c->r[3]=c->r[1]+0x000000B8u; // 801BD9A0
  c->r[6]=0u+0x00000001u; // 801BD9A4
  c->r[12]=R32(c->r[12]+0x00000034u); // 801BD9A8
  c->r[5]=R32(c->r[30]+0x00000008u); // 801BD9AC
  c->ctr=c->r[12]; // 801BD9B0
  if (true) { c->lr=0x801BD9B8u; dispatch(c,c->ctr); } // 801BD9B4
  c->r[3]=c->r[1]+0x00000028u; // 801BD9B8
  c->r[4]=c->r[1]+0x000000B8u; // 801BD9BC
  c->lr=0x801BD9C4u; f_80138AB8(c); // 801BD9C0
  c->r[3]=c->r[1]+0x00000098u; // 801BD9C4
  c->r[4]=c->r[1]+0x00000028u; // 801BD9C8
  c->lr=0x801BD9D0u; f_8013939C(c); // 801BD9CC
  goto L_801BD9EC; // 801BD9D0
L_801BD9D4:;
  c->r[0]=c->r[24]+0x00000001u; // 801BD9D4
  c->r[3]=c->r[1]+0x00000098u; // 801BD9D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)472); // 801BD9DC
  c->r[4]=c->r[4]+c->r[0]; // 801BD9E0
  c->r[4]=c->r[4]+0x00000018u; // 801BD9E4
  c->lr=0x801BD9ECu; f_8013939C(c); // 801BD9E8
L_801BD9EC:;
  {uint32_t ea=c->r[30]+0x00000078u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BD9EC
  c->r[3]=c->r[1]+0x00000008u; // 801BD9F0
  c->r[4]=c->r[30]+0x00000018u; // 801BD9F4
  c->r[5]=c->r[1]+0x00000098u; // 801BD9F8
  c->lr=0x801BDA00u; f_801394B8(c); // 801BD9FC
  c->r[3]=c->r[1]+0x00000018u; // 801BDA00
  c->r[4]=c->r[1]+0x00000008u; // 801BDA04
  c->lr=0x801BDA0Cu; f_8013939C(c); // 801BDA08
  {uint32_t ea=c->r[2]+0xFFFFB6A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BDA0C
  c->r[3]=c->r[1]+0x00000018u; // 801BDA10
  c->lr=0x801BDA18u; f_80139448(c); // 801BDA14
  c->r[0]=R32(c->r[21]+0x00000038u); // 801BDA18
  c->f[1]=c->f[31]; // 801BDA1C
  c->r[4]=c->r[1]+0x00000018u; // 801BDA20
  c->r[3]=c->r[0]+c->r[28]; // 801BDA24
  c->lr=0x801BDA2Cu; f_80056020(c); // 801BDA28
  c->r[0]=R32(c->r[21]+0x00000038u); // 801BDA2C
  c->r[3]=c->r[21]|c->r[21]; // 801BDA30
  c->r[20]=R32(c->r[21]+0x0000000Cu); // 801BDA34
  c->r[5]=c->r[30]|c->r[30]; // 801BDA38
  c->r[6]=c->r[25]|c->r[25]; // 801BDA3C
  c->r[4]=c->r[0]+c->r[28]; // 801BDA40
  c->r[7]=c->r[1]+0x000001B8u; // 801BDA44
  c->lr=0x801BDA4Cu; f_801D556C(c); // 801BDA48
  W32(c->r[20]+c->r[27],c->r[3]); // 801BDA4C
  c->r[29]=c->r[29]+0x000001D8u; // 801BDA50
  c->r[28]=c->r[28]+0x00000018u; // 801BDA54
  c->r[27]=c->r[27]+0x00000004u; // 801BDA58
  c->r[24]=c->r[24]+0x00000001u; // 801BDA5C
L_801BDA60:;
  c->r[0]=R32(c->r[23]+0x00000068u); // 801BDA60
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801BDA64
  if (crb(c,0)) { IRQCHK(c); goto L_801BD97C; } // 801BDA68
L_801BDA6C:;
  c->r[3]=c->r[21]|c->r[21]; // 801BDA6C
  c->r[4]=c->r[22]|c->r[22]; // 801BDA70
  c->r[5]=c->r[23]|c->r[23]; // 801BDA74
  c->lr=0x801BDA7Cu; f_801D54DC(c); // 801BDA78
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,31,ea,0,0);} // 801BDA7C
  c->r[11]=c->r[1]+0x00000280u; // 801BDA80
  {uint32_t ea=c->r[1]+0x00000280u; c->f[31]=RF64(ea);} // 801BDA84
  c->lr=0x801BDA8Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BDA88
  c->r[0]=R32(c->r[1]+0x00000294u); // 801BDA8C
  c->lr=c->r[0]; // 801BDA90
  c->r[1]=c->r[1]+0x00000290u; // 801BDA94
  return; // 801BDA98
}

// fn_801BDA9C
void f_801BDA9C(Ctx* __restrict c) {
  trace_call(0x801BDA9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDA9C
  c->r[0]=c->lr; // 801BDAA0
  W32(c->r[1]+0x00000294u,c->r[0]); // 801BDAA4
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[31]);} // 801BDAA8
  {uint32_t ea=c->r[1]+0x00000288u; psq_store(c,31,ea,0,0);} // 801BDAAC
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[30]);} // 801BDAB0
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,30,ea,0,0);} // 801BDAB4
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[29]);} // 801BDAB8
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,29,ea,0,0);} // 801BDABC
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[28]);} // 801BDAC0
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,28,ea,0,0);} // 801BDAC4
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[27]);} // 801BDAC8
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,27,ea,0,0);} // 801BDACC
  c->r[11]=c->r[1]+0x00000240u; // 801BDAD0
  c->lr=0x801BDAD8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BDAD4
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801BDAD8
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801BDADC
  c->r[25]=c->r[3]|c->r[3]; // 801BDAE0
  c->r[30]=c->r[4]|c->r[4]; // 801BDAE4
  c->r[3]=R32(c->r[5]+c->r[0]); // 801BDAE8
  c->r[31]=c->r[6]|c->r[6]; // 801BDAEC
  c->r[24]=c->r[7]|c->r[7]; // 801BDAF0
  cmps(c,0,(int32_t)c->r[3],0); // 801BDAF4
  if (crb(c,2)) { goto L_801BDE80; } // 801BDAF8
  c->r[29]=c->r[3]+0x00000008u; // 801BDAFC
  c->r[3]=c->r[1]+0x00000150u; // 801BDB00
  c->r[4]=c->r[29]|c->r[29]; // 801BDB04
  c->lr=0x801BDB0Cu; f_8013932C(c); // 801BDB08
  c->r[6]=R32(c->r[25]+0x00000010u); // 801BDB0C
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)472); // 801BDB10
  {uint32_t ea=c->r[29]+0x00000014u; c->f[29]=c->ps1[29]=RF32(ea);} // 801BDB14
  c->r[3]=c->r[1]+0x00000030u; // 801BDB18
  c->r[5]=R32(c->r[6]+0x0000006Cu); // 801BDB1C
  c->r[4]=c->r[1]+0x000001E0u; // 801BDB20
  c->r[7]=c->r[5]+c->r[0]; // 801BDB24
  c->r[5]=R32(c->r[7]+0x00000108u); // 801BDB28
  c->r[0]=R32(c->r[7]+0x0000010Cu); // 801BDB2C
  W32(c->r[1]+0x000001E0u,c->r[5]); // 801BDB30
  W32(c->r[1]+0x000001E4u,c->r[0]); // 801BDB34
  c->r[5]=R32(c->r[7]+0x00000110u); // 801BDB38
  c->r[0]=R32(c->r[7]+0x00000114u); // 801BDB3C
  W32(c->r[1]+0x000001E8u,c->r[5]); // 801BDB40
  W32(c->r[1]+0x000001ECu,c->r[0]); // 801BDB44
  c->r[5]=R32(c->r[7]+0x00000118u); // 801BDB48
  c->r[0]=R32(c->r[7]+0x0000011Cu); // 801BDB4C
  W32(c->r[1]+0x000001F0u,c->r[5]); // 801BDB50
  W32(c->r[1]+0x000001F4u,c->r[0]); // 801BDB54
  c->r[5]=R32(c->r[7]+0x00000120u); // 801BDB58
  c->r[0]=R32(c->r[7]+0x00000124u); // 801BDB5C
  W32(c->r[1]+0x000001F8u,c->r[5]); // 801BDB60
  W32(c->r[1]+0x000001FCu,c->r[0]); // 801BDB64
  c->r[5]=R32(c->r[7]+0x00000128u); // 801BDB68
  c->r[0]=R32(c->r[7]+0x0000012Cu); // 801BDB6C
  W32(c->r[1]+0x00000200u,c->r[5]); // 801BDB70
  W32(c->r[1]+0x00000204u,c->r[0]); // 801BDB74
  c->r[5]=R32(c->r[7]+0x00000130u); // 801BDB78
  c->r[0]=R32(c->r[7]+0x00000134u); // 801BDB7C
  W32(c->r[1]+0x00000208u,c->r[5]); // 801BDB80
  W32(c->r[1]+0x0000020Cu,c->r[0]); // 801BDB84
  c->r[5]=R32(c->r[7]+0x00000138u); // 801BDB88
  c->r[0]=R32(c->r[7]+0x0000013Cu); // 801BDB8C
  W32(c->r[1]+0x00000210u,c->r[5]); // 801BDB90
  W32(c->r[1]+0x00000214u,c->r[0]); // 801BDB94
  c->r[5]=R32(c->r[7]+0x00000140u); // 801BDB98
  c->r[0]=R32(c->r[7]+0x00000144u); // 801BDB9C
  W32(c->r[1]+0x00000218u,c->r[5]); // 801BDBA0
  W32(c->r[1]+0x0000021Cu,c->r[0]); // 801BDBA4
  {uint32_t ea=c->r[6]+0x00000060u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BDBA8
  {uint32_t ea=c->r[7]+0x00000078u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BDBAC
  c->lr=0x801BDBB4u; f_80138AA4(c); // 801BDBB0
  c->r[3]=c->r[1]+0x00000010u; // 801BDBB4
  c->r[4]=c->r[1]+0x00000030u; // 801BDBB8
  c->lr=0x801BDBC0u; f_8013939C(c); // 801BDBBC
  {uint32_t ea=c->r[2]+0xFFFFB698u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDBC0
  c->r[3]=c->r[1]+0x00000010u; // 801BDBC4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 801BDBC8
  c->lr=0x801BDBD0u; f_80139448(c); // 801BDBCC
  c->r[3]=c->r[1]+0x00000040u; // 801BDBD0
  c->r[4]=c->r[1]+0x000001E0u; // 801BDBD4
  c->lr=0x801BDBDCu; f_80138AB0(c); // 801BDBD8
  c->r[3]=c->r[1]+0x00000020u; // 801BDBDC
  c->r[4]=c->r[1]+0x00000040u; // 801BDBE0
  c->lr=0x801BDBE8u; f_8013939C(c); // 801BDBE4
  {uint32_t ea=c->r[2]+0xFFFFB6A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDBE8
  c->r[3]=c->r[1]+0x00000020u; // 801BDBEC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801BDBF0
  c->lr=0x801BDBF8u; f_80139448(c); // 801BDBF4
  c->r[4]=c->r[31]|c->r[31]; // 801BDBF8
  c->r[3]=c->r[1]+0x00000050u; // 801BDBFC
  c->r[5]=c->r[1]+0x00000010u; // 801BDC00
  c->lr=0x801BDC08u; f_801394B8(c); // 801BDC04
  c->r[3]=c->r[1]+0x000001A0u; // 801BDC08
  c->r[4]=c->r[1]+0x00000050u; // 801BDC0C
  c->lr=0x801BDC14u; f_8013939C(c); // 801BDC10
  c->r[4]=c->r[31]|c->r[31]; // 801BDC14
  c->r[3]=c->r[1]+0x00000060u; // 801BDC18
  c->r[5]=c->r[1]+0x00000010u; // 801BDC1C
  c->lr=0x801BDC24u; f_8013951C(c); // 801BDC20
  c->r[3]=c->r[1]+0x000001B0u; // 801BDC24
  c->r[4]=c->r[1]+0x00000060u; // 801BDC28
  c->lr=0x801BDC30u; f_8013939C(c); // 801BDC2C
  c->r[3]=c->r[1]+0x00000070u; // 801BDC30
  c->r[4]=c->r[1]+0x000001A0u; // 801BDC34
  c->r[5]=c->r[1]+0x00000020u; // 801BDC38
  c->lr=0x801BDC40u; f_801394B8(c); // 801BDC3C
  c->r[3]=c->r[1]+0x000001C0u; // 801BDC40
  c->r[4]=c->r[1]+0x00000070u; // 801BDC44
  c->lr=0x801BDC4Cu; f_8013939C(c); // 801BDC48
  c->r[3]=c->r[1]+0x00000080u; // 801BDC4C
  c->r[4]=c->r[1]+0x000001B0u; // 801BDC50
  c->r[5]=c->r[1]+0x00000020u; // 801BDC54
  c->lr=0x801BDC5Cu; f_801394B8(c); // 801BDC58
  c->r[3]=c->r[1]+0x000001D0u; // 801BDC5C
  c->r[4]=c->r[1]+0x00000080u; // 801BDC60
  c->lr=0x801BDC68u; f_8013939C(c); // 801BDC64
  c->r[27]=c->r[1]+0x000001A0u; // 801BDC68
  c->r[28]=c->r[1]+0x00000160u; // 801BDC6C
  c->r[26]=c->r[1]+0x00000008u; // 801BDC70
  c->r[25]=0u+0x00000000u; // 801BDC74
  c->r[24]=0u+0x00000000u; // 801BDC78
  c->r[29]=0u+0x00000000u; // 801BDC7C
L_801BDC80:;
  c->r[4]=c->r[27]|c->r[27]; // 801BDC80
  c->r[3]=c->r[1]+0x00000110u; // 801BDC84
  c->r[5]=c->r[1]+0x00000150u; // 801BDC88
  c->lr=0x801BDC90u; f_8013951C(c); // 801BDC8C
  c->r[3]=c->r[28]|c->r[28]; // 801BDC90
  c->r[4]=c->r[1]+0x00000110u; // 801BDC94
  c->lr=0x801BDC9Cu; f_8013939C(c); // 801BDC98
  c->r[4]=c->r[28]|c->r[28]; // 801BDC9C
  c->r[3]=c->r[1]+0x00000100u; // 801BDCA0
  c->lr=0x801BDCA8u; f_801397B4(c); // 801BDCA4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDCA8
  fcmp(c,0,c->f[0],c->f[29]); // 801BDCAC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BDCB0
  if (!crb(c,2)) { goto L_801BDCC4; } // 801BDCB4
  c->r[25]=0u+0x00000001u; // 801BDCB8
  W8(c->r[26]+0x00000000u,c->r[25]); // 801BDCBC
  goto L_801BDCC8; // 801BDCC0
L_801BDCC4:;
  W8(c->r[26]+0x00000000u,c->r[29]); // 801BDCC4
L_801BDCC8:;
  c->r[24]=c->r[24]+0x00000001u; // 801BDCC8
  c->r[28]=c->r[28]+0x00000010u; // 801BDCCC
  cmps(c,0,(int32_t)c->r[24],4); // 801BDCD0
  c->r[26]=c->r[26]+0x00000001u; // 801BDCD4
  c->r[27]=c->r[27]+0x00000010u; // 801BDCD8
  if (crb(c,0)) { IRQCHK(c); goto L_801BDC80; } // 801BDCDC
  cmpu(c,0,c->r[25],0x00000001u); // 801BDCE0
  if (!crb(c,2)) { goto L_801BDE80; } // 801BDCE4
  c->r[3]=c->r[1]+0x00000140u; // 801BDCE8
  c->r[4]=c->r[1]+0x000001E0u; // 801BDCEC
  c->lr=0x801BDCF4u; f_80138AA8(c); // 801BDCF0
  {uint32_t ea=c->r[2]+0xFFFFB69Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801BDCF4
  c->r[29]=c->r[1]+0x00000008u; // 801BDCF8
  {uint32_t ea=c->r[2]+0xFFFFB6A8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BDCFC
  c->r[28]=c->r[1]+0x00000160u; // 801BDD00
  c->f[30]=c->f[28]; // 801BDD04
  c->r[27]=c->r[1]+0x000001A0u; // 801BDD08
  c->r[24]=0u+0x00000000u; // 801BDD0C
L_801BDD10:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BDD10
  cmpu(c,0,c->r[0],0x00000001u); // 801BDD14
  if (!crb(c,2)) { goto L_801BDD90; } // 801BDD18
  c->r[3]=c->r[28]|c->r[28]; // 801BDD1C
  c->r[4]=c->r[1]+0x00000140u; // 801BDD20
  c->lr=0x801BDD28u; f_800593E4(c); // 801BDD24
  c->f[27]=c->f[1]; // 801BDD28
  fcmp(c,0,c->f[1],c->f[30]); // 801BDD2C
  if (!crb(c,0)) { goto L_801BDD44; } // 801BDD30
  {uint32_t ea=c->r[2]+0xFFFFB6A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BDD34
  c->r[3]=c->r[1]+0x00000140u; // 801BDD38
  c->lr=0x801BDD40u; f_80139448(c); // 801BDD3C
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[31]); // 801BDD40
L_801BDD44:;
  c->r[3]=c->r[1]+0x000000F0u; // 801BDD44
  c->r[4]=c->r[1]+0x00000140u; // 801BDD48
  c->lr=0x801BDD50u; f_8013939C(c); // 801BDD4C
  c->f[1]=c->f[27]; // 801BDD50
  c->r[3]=c->r[1]+0x000000F0u; // 801BDD54
  c->lr=0x801BDD5Cu; f_80139448(c); // 801BDD58
  c->r[4]=c->r[27]|c->r[27]; // 801BDD5C
  c->r[3]=c->r[1]+0x00000130u; // 801BDD60
  c->r[5]=c->r[1]+0x000000F0u; // 801BDD64
  c->lr=0x801BDD6Cu; f_8013951C(c); // 801BDD68
  c->r[3]=c->r[1]+0x000000E0u; // 801BDD6C
  c->r[4]=c->r[1]+0x00000150u; // 801BDD70
  c->r[5]=c->r[1]+0x00000130u; // 801BDD74
  c->lr=0x801BDD7Cu; f_801398F0(c); // 801BDD78
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDD7C
  c->f[0]=c->ps1[0]=S(c->f[29]-c->f[0]); // 801BDD80
  fcmp(c,0,c->f[28],c->f[0]); // 801BDD84
  if (!crb(c,0)) { goto L_801BDD90; } // 801BDD88
  c->f[28]=c->f[0]; // 801BDD8C
L_801BDD90:;
  c->r[24]=c->r[24]+0x00000001u; // 801BDD90
  c->r[28]=c->r[28]+0x00000010u; // 801BDD94
  cmps(c,0,(int32_t)c->r[24],4); // 801BDD98
  c->r[27]=c->r[27]+0x00000010u; // 801BDD9C
  c->r[29]=c->r[29]+0x00000001u; // 801BDDA0
  if (crb(c,0)) { IRQCHK(c); goto L_801BDD10; } // 801BDDA4
  c->r[4]=c->r[31]|c->r[31]; // 801BDDA8
  c->r[3]=c->r[1]+0x000000C0u; // 801BDDAC
  c->r[5]=c->r[1]+0x00000150u; // 801BDDB0
  c->lr=0x801BDDB8u; f_8013951C(c); // 801BDDB4
  c->r[3]=c->r[1]+0x000000D0u; // 801BDDB8
  c->r[4]=c->r[1]+0x000000C0u; // 801BDDBC
  c->lr=0x801BDDC4u; f_8013932C(c); // 801BDDC0
  c->r[4]=c->r[1]+0x00000140u; // 801BDDC4
  c->lr=0x801BDDCCu; f_800593E4(c); // 801BDDC8
  c->f[27]=c->f[1]; // 801BDDCC
  c->r[3]=c->r[1]+0x000000B0u; // 801BDDD0
  c->r[4]=c->r[1]+0x00000140u; // 801BDDD4
  c->lr=0x801BDDDCu; f_8013939C(c); // 801BDDD8
  c->f[1]=c->f[27]; // 801BDDDC
  c->r[3]=c->r[1]+0x000000B0u; // 801BDDE0
  c->lr=0x801BDDE8u; f_80139448(c); // 801BDDE4
  c->r[4]=c->r[31]|c->r[31]; // 801BDDE8
  c->r[3]=c->r[1]+0x00000120u; // 801BDDEC
  c->r[5]=c->r[1]+0x000000B0u; // 801BDDF0
  c->lr=0x801BDDF8u; f_8013951C(c); // 801BDDF4
  {uint32_t ea=c->r[2]+0xFFFFB69Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDDF8
  fcmp(c,0,c->f[28],c->f[0]); // 801BDDFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801BDE00
  if (crb(c,2)) { goto L_801BDE24; } // 801BDE04
  c->r[3]=0u+0x803F0000u; // 801BDE08
  c->r[5]=0u+0x803F0000u; // 801BDE0C
  c->r[3]=c->r[3]+0x00001C38u; // 801BDE10
  c->r[4]=0u+0x00000273u; // 801BDE14
  c->r[5]=c->r[5]+0x00001C14u; // 801BDE18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BDE1C
  c->lr=0x801BDE24u; f_80344550(c); // 801BDE20
L_801BDE24:;
  {uint32_t ea=c->r[2]+0xFFFFB69Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801BDE24
  fcmp(c,0,c->f[28],c->f[31]); // 801BDE28
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BDE2C
  if (!crb(c,2)) { goto L_801BDE38; } // 801BDE30
  goto L_801BDE44; // 801BDE34
L_801BDE38:;
  c->f[1]=c->f[28]; // 801BDE38
  c->lr=0x801BDE40u; f_80394248(c); // 801BDE3C
  c->f[31]=c->ps1[31]=S(c->f[28]*c->f[1]); // 801BDE40
L_801BDE44:;
  c->r[3]=c->r[1]+0x00000090u; // 801BDE44
  c->r[4]=c->r[1]+0x00000140u; // 801BDE48
  c->lr=0x801BDE50u; f_8013939C(c); // 801BDE4C
  c->f[1]=c->f[31]; // 801BDE50
  c->r[3]=c->r[1]+0x00000090u; // 801BDE54
  c->lr=0x801BDE5Cu; f_80139448(c); // 801BDE58
  c->r[3]=c->r[1]+0x000000A0u; // 801BDE5C
  c->r[4]=c->r[1]+0x00000120u; // 801BDE60
  c->r[5]=c->r[1]+0x00000090u; // 801BDE64
  c->lr=0x801BDE6Cu; f_801394B8(c); // 801BDE68
  c->r[3]=c->r[30]|c->r[30]; // 801BDE6C
  c->r[4]=c->r[1]+0x000000A0u; // 801BDE70
  c->lr=0x801BDE78u; f_8013939C(c); // 801BDE74
  c->r[3]=0u+0x00000001u; // 801BDE78
  goto L_801BDE84; // 801BDE7C
L_801BDE80:;
  c->r[3]=0u+0x00000000u; // 801BDE80
L_801BDE84:;
  {uint32_t ea=c->r[1]+0x00000288u; psq_load(c,31,ea,0,0);} // 801BDE84
  {uint32_t ea=c->r[1]+0x00000280u; c->f[31]=RF64(ea);} // 801BDE88
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,30,ea,0,0);} // 801BDE8C
  {uint32_t ea=c->r[1]+0x00000270u; c->f[30]=RF64(ea);} // 801BDE90
  {uint32_t ea=c->r[1]+0x00000268u; psq_load(c,29,ea,0,0);} // 801BDE94
  {uint32_t ea=c->r[1]+0x00000260u; c->f[29]=RF64(ea);} // 801BDE98
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,28,ea,0,0);} // 801BDE9C
  {uint32_t ea=c->r[1]+0x00000250u; c->f[28]=RF64(ea);} // 801BDEA0
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,27,ea,0,0);} // 801BDEA4
  c->r[11]=c->r[1]+0x00000240u; // 801BDEA8
  {uint32_t ea=c->r[1]+0x00000240u; c->f[27]=RF64(ea);} // 801BDEAC
  c->lr=0x801BDEB4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BDEB0
  c->r[0]=R32(c->r[1]+0x00000294u); // 801BDEB4
  c->lr=c->r[0]; // 801BDEB8
  c->r[1]=c->r[1]+0x00000290u; // 801BDEBC
  return; // 801BDEC0
}

// fn_801BDEC4
void f_801BDEC4(Ctx* __restrict c) {
  trace_call(0x801BDEC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDEC4
  c->r[0]=c->lr; // 801BDEC8
  cmps(c,0,(int32_t)c->r[3],0); // 801BDECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDED4
  c->r[31]=c->r[3]|c->r[3]; // 801BDED8
  if (crb(c,2)) { goto L_801BDF44; } // 801BDEDC
  if (crb(c,2)) { goto L_801BDF34; } // 801BDEE0
  c->r[0]=addc(c,c->r[3],0x00000030u,0); cr0(c,c->r[0]); // 801BDEE4
  if (crb(c,2)) { goto L_801BDF0C; } // 801BDEE8
  c->r[0]=R32(c->r[3]+0x00000038u); // 801BDEEC
  cmps(c,0,(int32_t)c->r[0],0); // 801BDEF0
  if (crb(c,2)) { goto L_801BDF00; } // 801BDEF4
  c->r[0]=0u+0x00000000u; // 801BDEF8
  W32(c->r[3]+0x00000038u,c->r[0]); // 801BDEFC
L_801BDF00:;
  c->r[0]=0u+0x00000000u; // 801BDF00
  W32(c->r[3]+0x00000034u,c->r[0]); // 801BDF04
  W32(c->r[3]+0x00000030u,c->r[0]); // 801BDF08
L_801BDF0C:;
  c->r[0]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[0]); // 801BDF0C
  if (crb(c,2)) { goto L_801BDF34; } // 801BDF10
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801BDF14
  cmps(c,0,(int32_t)c->r[0],0); // 801BDF18
  if (crb(c,2)) { goto L_801BDF28; } // 801BDF1C
  c->r[0]=0u+0x00000000u; // 801BDF20
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BDF24
L_801BDF28:;
  c->r[0]=0u+0x00000000u; // 801BDF28
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BDF2C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BDF30
L_801BDF34:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BDF34
  if (!crb(c,1)) { goto L_801BDF44; } // 801BDF38
  c->r[3]=c->r[31]|c->r[31]; // 801BDF3C
  c->lr=0x801BDF44u; f_802896EC(c); // 801BDF40
L_801BDF44:;
  c->r[3]=c->r[31]|c->r[31]; // 801BDF44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDF48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDF4C
  c->lr=c->r[0]; // 801BDF50
  c->r[1]=c->r[1]+0x00000010u; // 801BDF54
  return; // 801BDF58
}

// fn_801BDF5C
void f_801BDF5C(Ctx* __restrict c) {
  trace_call(0x801BDF5Cu);
  c->r[3]=0u+0x0000000Au; // 801BDF5C
  return; // 801BDF60
}

// fn_801BDF64
void f_801BDF64(Ctx* __restrict c) {
  trace_call(0x801BDF64u);
  c->r[0]=0u+0x00000000u; // 801BDF64
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BDF68
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BDF6C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BDF70
  return; // 801BDF74
}

// dtor_801BDF78
void f_801BDF78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDF78
  c->r[0]=c->lr; // 801BDF7C
  cmps(c,0,(int32_t)c->r[3],0); // 801BDF80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDF84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDF88
  c->r[31]=c->r[3]|c->r[3]; // 801BDF8C
  if (crb(c,2)) { goto L_801BE004; } // 801BDF90
  c->r[8]=0u+0x00000000u; // 801BDF94
  c->r[7]=0u+0x00000000u; // 801BDF98
  c->r[5]=0u+0x00000000u; // 801BDF9C
  goto L_801BDFC0; // 801BDFA0
L_801BDFA4:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 801BDFA4
  c->r[0]=R32(c->r[6]+c->r[7]); // 801BDFA8
  cmps(c,0,(int32_t)c->r[0],0); // 801BDFAC
  if (crb(c,2)) { goto L_801BDFB8; } // 801BDFB0
  W32(c->r[6]+c->r[7],c->r[5]); // 801BDFB4
L_801BDFB8:;
  c->r[7]=c->r[7]+0x00000004u; // 801BDFB8
  c->r[8]=c->r[8]+0x00000001u; // 801BDFBC
L_801BDFC0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BDFC0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801BDFC4
  if (crb(c,0)) { IRQCHK(c); goto L_801BDFA4; } // 801BDFC8
  cmps(c,0,(int32_t)c->r[3],0); // 801BDFCC
  if (crb(c,2)) { goto L_801BDFF4; } // 801BDFD0
  c->r[0]=R32(c->r[3]+0x00000008u); // 801BDFD4
  cmps(c,0,(int32_t)c->r[0],0); // 801BDFD8
  if (crb(c,2)) { goto L_801BDFE8; } // 801BDFDC
  c->r[0]=0u+0x00000000u; // 801BDFE0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BDFE4
L_801BDFE8:;
  c->r[0]=0u+0x00000000u; // 801BDFE8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BDFEC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BDFF0
L_801BDFF4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BDFF4
  if (!crb(c,1)) { goto L_801BE004; } // 801BDFF8
  c->r[3]=c->r[31]|c->r[31]; // 801BDFFC
  c->lr=0x801BE004u; f_802896EC(c); // 801BE000
L_801BE004:;
  c->r[3]=c->r[31]|c->r[31]; // 801BE004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE008
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE00C
  c->lr=c->r[0]; // 801BE010
  c->r[1]=c->r[1]+0x00000010u; // 801BE014
  return; // 801BE018
}

// fn_801BE01C
void f_801BE01C(Ctx* __restrict c) {
  trace_call(0x801BE01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE01C
  c->r[0]=c->lr; // 801BE020
  W32(c->r[1]+0x00000094u,c->r[0]); // 801BE024
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801BE028
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801BE02C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 801BE030
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 801BE034
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 801BE038
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 801BE03C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 801BE040
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 801BE044
  c->r[11]=c->r[1]+0x00000050u; // 801BE048
  c->lr=0x801BE050u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BE04C
  c->f[28]=c->f[1]; // 801BE050
  cmps(c,0,(int32_t)c->r[4],1); // 801BE054
  c->f[29]=c->f[2]; // 801BE058
  c->r[27]=c->r[3]|c->r[3]; // 801BE05C
  c->f[30]=c->f[3]; // 801BE060
  c->r[24]=c->r[4]|c->r[4]; // 801BE064
  c->f[31]=c->f[4]; // 801BE068
  c->r[28]=c->r[5]|c->r[5]; // 801BE06C
  c->r[31]=c->r[6]|c->r[6]; // 801BE070
  c->r[29]=c->r[7]|c->r[7]; // 801BE074
  c->r[30]=c->r[8]|c->r[8]; // 801BE078
  c->r[25]=0u+0x00000000u; // 801BE07C
  if (!crb(c,2)) { goto L_801BE088; } // 801BE080
  c->r[25]=0u+0x00000001u; // 801BE084
L_801BE088:;
  cmps(c,0,(int32_t)c->r[5],11); // 801BE088
  if (crb(c,2)) { goto L_801BE0B0; } // 801BE08C
  if (!crb(c,0)) { goto L_801BE0A0; } // 801BE090
  cmps(c,0,(int32_t)c->r[5],0); // 801BE094
  if (crb(c,2)) { goto L_801BE0C4; } // 801BE098
  goto L_801BE0C0; // 801BE09C
L_801BE0A0:;
  cmps(c,0,(int32_t)c->r[5],13); // 801BE0A0
  if (crb(c,2)) { goto L_801BE0B0; } // 801BE0A4
  if (!crb(c,0)) { goto L_801BE0C0; } // 801BE0A8
  goto L_801BE0B8; // 801BE0AC
L_801BE0B0:;
  c->r[25]=c->r[25]+0x00000002u; // 801BE0B0
  goto L_801BE0C4; // 801BE0B4
L_801BE0B8:;
  c->r[25]=c->r[25]+0x00000003u; // 801BE0B8
  goto L_801BE0C4; // 801BE0BC
L_801BE0C0:;
  c->r[25]=c->r[25]+0x00000001u; // 801BE0C0
L_801BE0C4:;
  cmps(c,0,(int32_t)c->r[25],0); // 801BE0C4
  if (!crb(c,1)) { goto L_801BE73C; } // 801BE0C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BE0CC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801BE0D0
  if (crb(c,2)) { goto L_801BE120; } // 801BE0D4
  c->r[26]=R32(c->r[3]+0x00000008u); // 801BE0D8
  c->r[3]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801BE0DC
  c->r[4]=0u+0x00000000u; // 801BE0E0
  c->r[5]=0u+0x00000000u; // 801BE0E4
  c->r[6]=0u+0x00000000u; // 801BE0E8
  c->lr=0x801BE0F0u; f_80137AA0(c); // 801BE0EC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE0F0
  W32(c->r[27]+0x00000008u,c->r[3]); // 801BE0F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 801BE0F8
  if (!crb(c,1)) { goto L_801BE104; } // 801BE0FC
  W32(c->r[27]+0x00000004u,c->r[25]); // 801BE100
L_801BE104:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE104
  cmps(c,0,(int32_t)c->r[0],0); // 801BE108
  if (crb(c,2)) { goto L_801BE120; } // 801BE10C
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE110
  c->r[4]=c->r[26]|c->r[26]; // 801BE114
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE118
  c->lr=0x801BE120u; f_80235294(c); // 801BE11C
L_801BE120:;
  cmps(c,0,(int32_t)c->r[24],1); // 801BE120
  W32(c->r[27]+0x00000000u,c->r[25]); // 801BE124
  if (!crb(c,2)) { goto L_801BE1EC; } // 801BE128
  c->r[0]=R32(c->r[30]+0x00000058u); // 801BE12C
  cmps(c,0,(int32_t)c->r[0],1); // 801BE130
  if (crb(c,1)) { goto L_801BE194; } // 801BE134
  c->r[3]=0u+0x00000040u; // 801BE138
  c->r[4]=0u+0x00000000u; // 801BE13C
  c->r[5]=0u+0x00000000u; // 801BE140
  c->r[6]=0u+0x00000000u; // 801BE144
  c->lr=0x801BE14Cu; f_80137A94(c); // 801BE148
  cmps(c,0,(int32_t)c->r[3],0); // 801BE14C
  c->r[26]=c->r[3]|c->r[3]; // 801BE150
  if (crb(c,2)) { goto L_801BE168; } // 801BE154
  c->lr=0x801BE15Cu; f_801D5328(c); // 801BE158
  c->r[3]=0u+0x80400000u; // 801BE15C
  c->r[3]=c->r[3]+0x00004E38u; // 801BE160
  W32(c->r[26]+0x00000000u,c->r[3]); // 801BE164
L_801BE168:;
  c->r[3]=c->r[26]|c->r[26]; // 801BE168
  c->r[4]=c->r[30]|c->r[30]; // 801BE16C
  c->lr=0x801BE174u; f_801D5390(c); // 801BE170
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE174
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE178
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE17C
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE180
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE184
  c->r[0]=c->r[3]+0x00000001u; // 801BE188
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE18C
  goto L_801BE1EC; // 801BE190
L_801BE194:;
  c->r[3]=0u+0x00000040u; // 801BE194
  c->r[4]=0u+0x00000000u; // 801BE198
  c->r[5]=0u+0x00000000u; // 801BE19C
  c->r[6]=0u+0x00000000u; // 801BE1A0
  c->lr=0x801BE1A8u; f_80137A94(c); // 801BE1A4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE1A8
  c->r[26]=c->r[3]|c->r[3]; // 801BE1AC
  if (crb(c,2)) { goto L_801BE1C4; } // 801BE1B0
  c->lr=0x801BE1B8u; f_801D5328(c); // 801BE1B4
  c->r[3]=0u+0x80400000u; // 801BE1B8
  c->r[3]=c->r[3]+0x00001C60u; // 801BE1BC
  W32(c->r[26]+0x00000000u,c->r[3]); // 801BE1C0
L_801BE1C4:;
  c->r[3]=c->r[26]|c->r[26]; // 801BE1C4
  c->r[4]=c->r[30]|c->r[30]; // 801BE1C8
  c->lr=0x801BE1D0u; f_801D5390(c); // 801BE1CC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE1D0
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE1D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE1D8
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE1DC
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE1E0
  c->r[0]=c->r[3]+0x00000001u; // 801BE1E4
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE1E8
L_801BE1EC:;
  cmpu(c,0,c->r[28],0x0000000Du); // 801BE1EC
  if (crb(c,1)) { goto L_801BE73C; } // 801BE1F0
  c->r[3]=0u+0x80400000u; // 801BE1F4
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801BE1F8
  c->r[3]=c->r[3]+0x00001C80u; // 801BE1FC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BE200
  c->ctr=c->r[3]; // 801BE204
  if (true) { switch (c->ctr) { case 0x801BE20Cu: goto L_801BE20C; case 0x801BE2ECu: goto L_801BE2EC; case 0x801BE348u: goto L_801BE348; case 0x801BE3A4u: goto L_801BE3A4; case 0x801BE414u: goto L_801BE414; case 0x801BE46Cu: goto L_801BE46C; case 0x801BE57Cu: goto L_801BE57C; case 0x801BE678u: goto L_801BE678; case 0x801BE73Cu: goto L_801BE73C; default: break; } dispatch(c,c->ctr); return; } // 801BE208
L_801BE20C:;
  c->r[0]=R32(c->r[30]+0x00000058u); // 801BE20C
  cmps(c,0,(int32_t)c->r[0],1); // 801BE210
  if (crb(c,1)) { goto L_801BE284; } // 801BE214
  c->r[3]=0u+0x0000003Cu; // 801BE218
  c->r[4]=0u+0x00000000u; // 801BE21C
  c->r[5]=0u+0x00000000u; // 801BE220
  c->r[6]=0u+0x00000000u; // 801BE224
  c->lr=0x801BE22Cu; f_80137A94(c); // 801BE228
  cmps(c,0,(int32_t)c->r[3],0); // 801BE22C
  c->r[26]=c->r[3]|c->r[3]; // 801BE230
  if (crb(c,2)) { goto L_801BE240; } // 801BE234
  c->lr=0x801BE23Cu; f_801A7A74(c); // 801BE238
  c->r[26]=c->r[3]|c->r[3]; // 801BE23C
L_801BE240:;
  {uint32_t ea=c->r[2]+0xFFFFB6B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE240
  c->r[3]=c->r[26]|c->r[26]; // 801BE244
  c->r[4]=R32(c->r[30]+0x00000058u); // 801BE248
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[0]);} // 801BE24C
  c->r[5]=R32(c->r[30]+0x0000005Cu); // 801BE250
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[0]);} // 801BE254
  {uint32_t ea=c->r[26]+0x00000034u; WF32(ea,c->f[28]);} // 801BE258
  {uint32_t ea=c->r[26]+0x00000038u; WF32(ea,c->f[29]);} // 801BE25C
  c->lr=0x801BE264u; f_801A7AC8(c); // 801BE260
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE264
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE268
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE26C
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE270
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE274
  c->r[0]=c->r[3]+0x00000001u; // 801BE278
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE27C
  goto L_801BE73C; // 801BE280
L_801BE284:;
  c->r[3]=0u+0x0000003Cu; // 801BE284
  c->r[4]=0u+0x00000000u; // 801BE288
  c->r[5]=0u+0x00000000u; // 801BE28C
  c->r[6]=0u+0x00000000u; // 801BE290
  c->lr=0x801BE298u; f_80137A94(c); // 801BE294
  cmps(c,0,(int32_t)c->r[3],0); // 801BE298
  c->r[26]=c->r[3]|c->r[3]; // 801BE29C
  if (crb(c,2)) { goto L_801BE2AC; } // 801BE2A0
  c->lr=0x801BE2A8u; f_801A7A74(c); // 801BE2A4
  c->r[26]=c->r[3]|c->r[3]; // 801BE2A8
L_801BE2AC:;
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[28]);} // 801BE2AC
  c->r[3]=c->r[26]|c->r[26]; // 801BE2B0
  c->r[4]=R32(c->r[30]+0x00000058u); // 801BE2B4
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[29]);} // 801BE2B8
  c->r[5]=R32(c->r[30]+0x0000005Cu); // 801BE2BC
  {uint32_t ea=c->r[26]+0x00000034u; WF32(ea,c->f[30]);} // 801BE2C0
  {uint32_t ea=c->r[26]+0x00000038u; WF32(ea,c->f[31]);} // 801BE2C4
  c->lr=0x801BE2CCu; f_801A7AC8(c); // 801BE2C8
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE2CC
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE2D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE2D4
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE2D8
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE2DC
  c->r[0]=c->r[3]+0x00000001u; // 801BE2E0
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE2E4
  goto L_801BE73C; // 801BE2E8
L_801BE2EC:;
  c->r[3]=0u+0x00000030u; // 801BE2EC
  c->r[4]=0u+0x00000000u; // 801BE2F0
  c->r[5]=0u+0x00000000u; // 801BE2F4
  c->r[6]=0u+0x00000000u; // 801BE2F8
  c->lr=0x801BE300u; f_80137A94(c); // 801BE2FC
  cmps(c,0,(int32_t)c->r[3],0); // 801BE300
  c->r[26]=c->r[3]|c->r[3]; // 801BE304
  if (crb(c,2)) { goto L_801BE31C; } // 801BE308
  c->lr=0x801BE310u; f_801DBA94(c); // 801BE30C
  c->r[3]=0u+0x80400000u; // 801BE310
  c->r[3]=c->r[3]+0x000053F0u; // 801BE314
  W32(c->r[26]+0x00000000u,c->r[3]); // 801BE318
L_801BE31C:;
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[28]);} // 801BE31C
  c->r[0]=0u+0x00000000u; // 801BE320
  W8(c->r[26]+0x00000004u,c->r[0]); // 801BE324
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE328
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE32C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE330
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE334
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE338
  c->r[0]=c->r[3]+0x00000001u; // 801BE33C
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE340
  goto L_801BE73C; // 801BE344
L_801BE348:;
  c->r[3]=0u+0x00000030u; // 801BE348
  c->r[4]=0u+0x00000000u; // 801BE34C
  c->r[5]=0u+0x00000000u; // 801BE350
  c->r[6]=0u+0x00000000u; // 801BE354
  c->lr=0x801BE35Cu; f_80137A94(c); // 801BE358
  cmps(c,0,(int32_t)c->r[3],0); // 801BE35C
  c->r[26]=c->r[3]|c->r[3]; // 801BE360
  if (crb(c,2)) { goto L_801BE378; } // 801BE364
  c->lr=0x801BE36Cu; f_801DBA94(c); // 801BE368
  c->r[3]=0u+0x80400000u; // 801BE36C
  c->r[3]=c->r[3]+0xFFFFE820u; // 801BE370
  W32(c->r[26]+0x00000000u,c->r[3]); // 801BE374
L_801BE378:;
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[28]);} // 801BE378
  c->r[0]=0u+0x00000000u; // 801BE37C
  W8(c->r[26]+0x00000004u,c->r[0]); // 801BE380
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE384
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE388
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE38C
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE390
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE394
  c->r[0]=c->r[3]+0x00000001u; // 801BE398
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE39C
  goto L_801BE73C; // 801BE3A0
L_801BE3A4:;
  c->r[3]=0u+0x000000B0u; // 801BE3A4
  c->r[4]=0u+0x00000000u; // 801BE3A8
  c->r[5]=0u+0x00000000u; // 801BE3AC
  c->r[6]=0u+0x00000000u; // 801BE3B0
  c->lr=0x801BE3B8u; f_80137A94(c); // 801BE3B4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE3B8
  c->r[26]=c->r[3]|c->r[3]; // 801BE3BC
  if (crb(c,2)) { goto L_801BE3CC; } // 801BE3C0
  c->lr=0x801BE3C8u; f_802192B8(c); // 801BE3C4
  c->r[26]=c->r[3]|c->r[3]; // 801BE3C8
L_801BE3CC:;
  c->f[1]=c->f[28]; // 801BE3CC
  W32(c->r[26]+0x00000088u,c->r[31]); // 801BE3D0
  c->f[2]=c->f[29]; // 801BE3D4
  {uint32_t ea=c->r[2]+0xFFFFB6B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BE3D8
  c->f[3]=c->f[30]; // 801BE3DC
  c->r[3]=c->r[1]+0x00000018u; // 801BE3E0
  c->lr=0x801BE3E8u; f_801392B0(c); // 801BE3E4
  c->r[3]=c->r[26]+0x000000A0u; // 801BE3E8
  c->r[4]=c->r[1]+0x00000018u; // 801BE3EC
  c->lr=0x801BE3F4u; f_8013939C(c); // 801BE3F0
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE3F4
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE3F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE3FC
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE400
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE404
  c->r[0]=c->r[3]+0x00000001u; // 801BE408
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE40C
  goto L_801BE73C; // 801BE410
L_801BE414:;
  c->r[3]=0u+0x00000040u; // 801BE414
  c->r[4]=0u+0x00000000u; // 801BE418
  c->r[5]=0u+0x00000000u; // 801BE41C
  c->r[6]=0u+0x00000000u; // 801BE420
  c->lr=0x801BE428u; f_80137A94(c); // 801BE424
  cmps(c,0,(int32_t)c->r[3],0); // 801BE428
  if (crb(c,2)) { goto L_801BE434; } // 801BE42C
  c->lr=0x801BE434u; f_801D56EC(c); // 801BE430
L_801BE434:;
  W32(c->r[3]+0x0000002Cu,c->r[31]); // 801BE434
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[28]); // 801BE438
  W32(c->r[3]+0x00000030u,c->r[29]); // 801BE43C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[29]);} // 801BE440
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[28]);} // 801BE444
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801BE448
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE44C
  c->r[4]=R32(c->r[27]+0x00000008u); // 801BE450
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE454
  W32(c->r[4]+c->r[0],c->r[3]); // 801BE458
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE45C
  c->r[0]=c->r[3]+0x00000001u; // 801BE460
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE464
  goto L_801BE73C; // 801BE468
L_801BE46C:;
  c->r[3]=0u+0x00000078u; // 801BE46C
  c->r[4]=0u+0x00000000u; // 801BE470
  c->r[5]=0u+0x00000000u; // 801BE474
  c->r[6]=0u+0x00000000u; // 801BE478
  c->lr=0x801BE480u; f_80137A94(c); // 801BE47C
  cmps(c,0,(int32_t)c->r[3],0); // 801BE480
  c->r[31]=c->r[3]|c->r[3]; // 801BE484
  if (crb(c,2)) { goto L_801BE494; } // 801BE488
  c->lr=0x801BE490u; f_801E1C98(c); // 801BE48C
  c->r[31]=c->r[3]|c->r[3]; // 801BE490
L_801BE494:;
  c->r[0]=R32(c->r[30]+0x00000058u); // 801BE494
  cmps(c,0,(int32_t)c->r[0],1); // 801BE498
  if (crb(c,1)) { goto L_801BE4F8; } // 801BE49C
  c->r[26]=0u+0x00000000u; // 801BE4A0
  c->r[28]=0u+0x00000000u; // 801BE4A4
  goto L_801BE4E4; // 801BE4A8
L_801BE4AC:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE4AC
  c->r[3]=R32(c->r[3]+c->r[28]); // 801BE4B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE4B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BE4B8
  c->ctr=c->r[12]; // 801BE4BC
  if (true) { c->lr=0x801BE4C4u; dispatch(c,c->ctr); } // 801BE4C0
  cmps(c,0,(int32_t)c->r[3],9); // 801BE4C4
  if (!crb(c,2)) { goto L_801BE4DC; } // 801BE4C8
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE4CC
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801BE4D0
  c->r[5]=R32(c->r[3]+c->r[0]); // 801BE4D4
  goto L_801BE54C; // 801BE4D8
L_801BE4DC:;
  c->r[28]=c->r[28]+0x00000004u; // 801BE4DC
  c->r[26]=c->r[26]+0x00000001u; // 801BE4E0
L_801BE4E4:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE4E4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801BE4E8
  if (crb(c,0)) { IRQCHK(c); goto L_801BE4AC; } // 801BE4EC
  c->r[5]=0u+0x00000000u; // 801BE4F0
  goto L_801BE54C; // 801BE4F4
L_801BE4F8:;
  c->r[26]=0u+0x00000000u; // 801BE4F8
  c->r[28]=0u+0x00000000u; // 801BE4FC
  goto L_801BE53C; // 801BE500
L_801BE504:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE504
  c->r[3]=R32(c->r[3]+c->r[28]); // 801BE508
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE50C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BE510
  c->ctr=c->r[12]; // 801BE514
  if (true) { c->lr=0x801BE51Cu; dispatch(c,c->ctr); } // 801BE518
  cmps(c,0,(int32_t)c->r[3],10); // 801BE51C
  if (!crb(c,2)) { goto L_801BE534; } // 801BE520
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE524
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801BE528
  c->r[5]=R32(c->r[3]+c->r[0]); // 801BE52C
  goto L_801BE54C; // 801BE530
L_801BE534:;
  c->r[28]=c->r[28]+0x00000004u; // 801BE534
  c->r[26]=c->r[26]+0x00000001u; // 801BE538
L_801BE53C:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE53C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801BE540
  if (crb(c,0)) { IRQCHK(c); goto L_801BE504; } // 801BE544
  c->r[5]=0u+0x00000000u; // 801BE548
L_801BE54C:;
  c->r[3]=c->r[31]|c->r[31]; // 801BE54C
  c->r[4]=c->r[29]|c->r[29]; // 801BE550
  c->r[6]=c->r[30]|c->r[30]; // 801BE554
  c->lr=0x801BE55Cu; f_801E1D58(c); // 801BE558
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE55C
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE560
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE564
  W32(c->r[3]+c->r[0],c->r[31]); // 801BE568
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE56C
  c->r[0]=c->r[3]+0x00000001u; // 801BE570
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE574
  goto L_801BE73C; // 801BE578
L_801BE57C:;
  c->r[3]=0u+0x00000040u; // 801BE57C
  c->r[4]=0u+0x00000000u; // 801BE580
  c->r[5]=0u+0x00000000u; // 801BE584
  c->r[6]=0u+0x00000000u; // 801BE588
  c->lr=0x801BE590u; f_80137A94(c); // 801BE58C
  cmps(c,0,(int32_t)c->r[3],0); // 801BE590
  c->r[8]=c->r[3]|c->r[3]; // 801BE594
  if (crb(c,2)) { goto L_801BE5A4; } // 801BE598
  c->lr=0x801BE5A0u; f_801D56EC(c); // 801BE59C
  c->r[8]=c->r[3]|c->r[3]; // 801BE5A0
L_801BE5A4:;
  W32(c->r[8]+0x0000002Cu,c->r[31]); // 801BE5A4
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[28]); // 801BE5A8
  c->r[3]=0u+0x00000030u; // 801BE5AC
  c->r[4]=0u+0x00000000u; // 801BE5B0
  W32(c->r[8]+0x00000030u,c->r[29]); // 801BE5B4
  c->r[5]=0u+0x00000000u; // 801BE5B8
  c->r[6]=0u+0x00000000u; // 801BE5BC
  {uint32_t ea=c->r[8]+0x00000038u; WF32(ea,c->f[29]);} // 801BE5C0
  {uint32_t ea=c->r[8]+0x00000034u; WF32(ea,c->f[28]);} // 801BE5C4
  {uint32_t ea=c->r[8]+0x00000028u; WF32(ea,c->f[0]);} // 801BE5C8
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE5CC
  c->r[7]=R32(c->r[27]+0x00000008u); // 801BE5D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE5D4
  W32(c->r[7]+c->r[0],c->r[8]); // 801BE5D8
  c->r[7]=R32(c->r[27]+0x00000004u); // 801BE5DC
  c->r[0]=c->r[7]+0x00000001u; // 801BE5E0
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE5E4
  c->lr=0x801BE5ECu; f_80137A94(c); // 801BE5E8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE5EC
  c->r[26]=c->r[3]|c->r[3]; // 801BE5F0
  if (crb(c,2)) { goto L_801BE608; } // 801BE5F4
  c->lr=0x801BE5FCu; f_801DBA94(c); // 801BE5F8
  c->r[3]=0u+0x80400000u; // 801BE5FC
  c->r[3]=c->r[3]+0x000053F0u; // 801BE600
  W32(c->r[26]+0x00000000u,c->r[3]); // 801BE604
L_801BE608:;
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[30]);} // 801BE608
  c->r[0]=0u+0x00000000u; // 801BE60C
  cmps(c,0,(int32_t)c->r[28],12); // 801BE610
  W8(c->r[26]+0x00000004u,c->r[0]); // 801BE614
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE618
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE61C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE620
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE624
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE628
  c->r[0]=c->r[3]+0x00000001u; // 801BE62C
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE630
  if (!crb(c,2)) { goto L_801BE73C; } // 801BE634
  c->r[3]=0u+0x0000000Cu; // 801BE638
  c->r[4]=0u+0x00000000u; // 801BE63C
  c->r[5]=0u+0x00000000u; // 801BE640
  c->r[6]=0u+0x00000000u; // 801BE644
  c->lr=0x801BE64Cu; f_80137A94(c); // 801BE648
  cmps(c,0,(int32_t)c->r[3],0); // 801BE64C
  if (crb(c,2)) { goto L_801BE658; } // 801BE650
  c->lr=0x801BE658u; f_80213C70(c); // 801BE654
L_801BE658:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE658
  c->r[4]=R32(c->r[27]+0x00000008u); // 801BE65C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE660
  W32(c->r[4]+c->r[0],c->r[3]); // 801BE664
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE668
  c->r[0]=c->r[3]+0x00000001u; // 801BE66C
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE670
  goto L_801BE73C; // 801BE674
L_801BE678:;
  c->r[3]=0u+0x000000B0u; // 801BE678
  c->r[4]=0u+0x00000000u; // 801BE67C
  c->r[5]=0u+0x00000000u; // 801BE680
  c->r[6]=0u+0x00000000u; // 801BE684
  c->lr=0x801BE68Cu; f_80137A94(c); // 801BE688
  cmps(c,0,(int32_t)c->r[3],0); // 801BE68C
  c->r[26]=c->r[3]|c->r[3]; // 801BE690
  if (crb(c,2)) { goto L_801BE6A0; } // 801BE694
  c->lr=0x801BE69Cu; f_802192B8(c); // 801BE698
  c->r[26]=c->r[3]|c->r[3]; // 801BE69C
L_801BE6A0:;
  c->f[1]=c->f[28]; // 801BE6A0
  W32(c->r[26]+0x00000088u,c->r[31]); // 801BE6A4
  c->f[2]=c->f[29]; // 801BE6A8
  {uint32_t ea=c->r[2]+0xFFFFB6B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BE6AC
  c->f[3]=c->f[30]; // 801BE6B0
  c->r[3]=c->r[1]+0x00000008u; // 801BE6B4
  c->lr=0x801BE6BCu; f_801392B0(c); // 801BE6B8
  c->r[3]=c->r[26]+0x000000A0u; // 801BE6BC
  c->r[4]=c->r[1]+0x00000008u; // 801BE6C0
  c->lr=0x801BE6C8u; f_8013939C(c); // 801BE6C4
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE6C8
  c->r[3]=0u+0x00000030u; // 801BE6CC
  c->r[6]=R32(c->r[27]+0x00000008u); // 801BE6D0
  c->r[4]=0u+0x00000000u; // 801BE6D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE6D8
  c->r[5]=0u+0x00000000u; // 801BE6DC
  W32(c->r[6]+c->r[0],c->r[26]); // 801BE6E0
  c->r[6]=0u+0x00000000u; // 801BE6E4
  c->r[7]=R32(c->r[27]+0x00000004u); // 801BE6E8
  c->r[0]=c->r[7]+0x00000001u; // 801BE6EC
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE6F0
  c->lr=0x801BE6F8u; f_80137A94(c); // 801BE6F4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE6F8
  c->r[26]=c->r[3]|c->r[3]; // 801BE6FC
  if (crb(c,2)) { goto L_801BE714; } // 801BE700
  c->lr=0x801BE708u; f_801DBA94(c); // 801BE704
  c->r[3]=0u+0x80400000u; // 801BE708
  c->r[3]=c->r[3]+0x000053F0u; // 801BE70C
  W32(c->r[26]+0x00000000u,c->r[3]); // 801BE710
L_801BE714:;
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[31]);} // 801BE714
  c->r[0]=0u+0x00000000u; // 801BE718
  W8(c->r[26]+0x00000004u,c->r[0]); // 801BE71C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE720
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE724
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BE728
  W32(c->r[3]+c->r[0],c->r[26]); // 801BE72C
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BE730
  c->r[0]=c->r[3]+0x00000001u; // 801BE734
  W32(c->r[27]+0x00000004u,c->r[0]); // 801BE738
L_801BE73C:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801BE73C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801BE740
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 801BE744
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 801BE748
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 801BE74C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 801BE750
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 801BE754
  c->r[11]=c->r[1]+0x00000050u; // 801BE758
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 801BE75C
  c->lr=0x801BE764u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BE760
  c->r[0]=R32(c->r[1]+0x00000094u); // 801BE764
  c->lr=c->r[0]; // 801BE768
  c->r[1]=c->r[1]+0x00000090u; // 801BE76C
  return; // 801BE770
}

// fn_801BE774
void f_801BE774(Ctx* __restrict c) {
  trace_call(0x801BE774u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE774
  c->r[0]=c->lr; // 801BE778
  cmps(c,0,(int32_t)c->r[3],0); // 801BE77C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE780
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE784
  c->r[31]=c->r[3]|c->r[3]; // 801BE788
  if (crb(c,2)) { goto L_801BE7F0; } // 801BE78C
  c->r[0]=addc(c,c->r[3],0x00000030u,0); cr0(c,c->r[0]); // 801BE790
  if (crb(c,2)) { goto L_801BE7B8; } // 801BE794
  c->r[0]=R32(c->r[3]+0x00000038u); // 801BE798
  cmps(c,0,(int32_t)c->r[0],0); // 801BE79C
  if (crb(c,2)) { goto L_801BE7AC; } // 801BE7A0
  c->r[0]=0u+0x00000000u; // 801BE7A4
  W32(c->r[3]+0x00000038u,c->r[0]); // 801BE7A8
L_801BE7AC:;
  c->r[0]=0u+0x00000000u; // 801BE7AC
  W32(c->r[3]+0x00000034u,c->r[0]); // 801BE7B0
  W32(c->r[3]+0x00000030u,c->r[0]); // 801BE7B4
L_801BE7B8:;
  c->r[0]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[0]); // 801BE7B8
  if (crb(c,2)) { goto L_801BE7E0; } // 801BE7BC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801BE7C0
  cmps(c,0,(int32_t)c->r[0],0); // 801BE7C4
  if (crb(c,2)) { goto L_801BE7D4; } // 801BE7C8
  c->r[0]=0u+0x00000000u; // 801BE7CC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BE7D0
L_801BE7D4:;
  c->r[0]=0u+0x00000000u; // 801BE7D4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BE7D8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BE7DC
L_801BE7E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BE7E0
  if (!crb(c,1)) { goto L_801BE7F0; } // 801BE7E4
  c->r[3]=c->r[31]|c->r[31]; // 801BE7E8
  c->lr=0x801BE7F0u; f_802896EC(c); // 801BE7EC
L_801BE7F0:;
  c->r[3]=c->r[31]|c->r[31]; // 801BE7F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE7F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE7F8
  c->lr=c->r[0]; // 801BE7FC
  c->r[1]=c->r[1]+0x00000010u; // 801BE800
  return; // 801BE804
}

// fn_801BE808
void f_801BE808(Ctx* __restrict c) {
  trace_call(0x801BE808u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE808
  c->r[0]=c->lr; // 801BE80C
  cmps(c,0,(int32_t)c->r[3],0); // 801BE810
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE818
  c->r[31]=c->r[3]|c->r[3]; // 801BE81C
  if (crb(c,2)) { goto L_801BE830; } // 801BE820
  cmps(c,0,(int32_t)c->r[4],0); // 801BE824
  if (!crb(c,1)) { goto L_801BE830; } // 801BE828
  c->lr=0x801BE830u; f_802896EC(c); // 801BE82C
L_801BE830:;
  c->r[3]=c->r[31]|c->r[31]; // 801BE830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE834
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE838
  c->lr=c->r[0]; // 801BE83C
  c->r[1]=c->r[1]+0x00000010u; // 801BE840
  return; // 801BE844
}

// fn_801BE848
void f_801BE848(Ctx* __restrict c) {
  trace_call(0x801BE848u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE848
  c->r[0]=c->lr; // 801BE84C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE850
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BE854
  c->r[27]=c->r[3]|c->r[3]; // 801BE858
  c->r[28]=c->r[4]|c->r[4]; // 801BE85C
  c->r[29]=c->r[5]|c->r[5]; // 801BE860
  c->r[30]=0u+0x00000000u; // 801BE864
  c->r[31]=0u+0x00000000u; // 801BE868
  goto L_801BE898; // 801BE86C
L_801BE870:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE870
  c->r[4]=c->r[28]|c->r[28]; // 801BE874
  c->r[5]=c->r[29]|c->r[29]; // 801BE878
  c->r[3]=R32(c->r[3]+c->r[31]); // 801BE87C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE880
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BE884
  c->ctr=c->r[12]; // 801BE888
  if (true) { c->lr=0x801BE890u; dispatch(c,c->ctr); } // 801BE88C
  c->r[31]=c->r[31]+0x00000004u; // 801BE890
  c->r[30]=c->r[30]+0x00000001u; // 801BE894
L_801BE898:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE898
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801BE89C
  if (crb(c,0)) { IRQCHK(c); goto L_801BE870; } // 801BE8A0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BE8A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE8A8
  c->lr=c->r[0]; // 801BE8AC
  c->r[1]=c->r[1]+0x00000020u; // 801BE8B0
  return; // 801BE8B4
}

// fn_801BE8B8
void f_801BE8B8(Ctx* __restrict c) {
  trace_call(0x801BE8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE8B8
  c->r[0]=c->lr; // 801BE8BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE8C0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801BE8C4
  c->r[27]=c->r[3]|c->r[3]; // 801BE8C8
  c->r[28]=c->r[4]|c->r[4]; // 801BE8CC
  c->r[29]=c->r[5]|c->r[5]; // 801BE8D0
  c->r[30]=0u+0x00000000u; // 801BE8D4
  c->r[31]=0u+0x00000000u; // 801BE8D8
  goto L_801BE908; // 801BE8DC
L_801BE8E0:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801BE8E0
  c->r[4]=c->r[28]|c->r[28]; // 801BE8E4
  c->r[5]=c->r[29]|c->r[29]; // 801BE8E8
  c->r[3]=R32(c->r[3]+c->r[31]); // 801BE8EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE8F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801BE8F4
  c->ctr=c->r[12]; // 801BE8F8
  if (true) { c->lr=0x801BE900u; dispatch(c,c->ctr); } // 801BE8FC
  c->r[31]=c->r[31]+0x00000004u; // 801BE900
  c->r[30]=c->r[30]+0x00000001u; // 801BE904
L_801BE908:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BE908
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801BE90C
  if (crb(c,0)) { IRQCHK(c); goto L_801BE8E0; } // 801BE910
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801BE914
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE918
  c->lr=c->r[0]; // 801BE91C
  c->r[1]=c->r[1]+0x00000020u; // 801BE920
  return; // 801BE924
}

// fn_801BE928
void f_801BE928(Ctx* __restrict c) {
  trace_call(0x801BE928u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE928
  c->r[0]=c->lr; // 801BE92C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE930
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BE934
  c->r[31]=0u+0x00000000u; // 801BE938
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BE93C
  c->r[30]=0u+0x00000000u; // 801BE940
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BE944
  c->r[29]=c->r[3]|c->r[3]; // 801BE948
  goto L_801BE970; // 801BE94C
L_801BE950:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 801BE950
  c->r[3]=R32(c->r[3]+c->r[31]); // 801BE954
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE958
  c->r[12]=R32(c->r[12]+0x00000018u); // 801BE95C
  c->ctr=c->r[12]; // 801BE960
  if (true) { c->lr=0x801BE968u; dispatch(c,c->ctr); } // 801BE964
  c->r[31]=c->r[31]+0x00000004u; // 801BE968
  c->r[30]=c->r[30]+0x00000001u; // 801BE96C
L_801BE970:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801BE970
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801BE974
  if (crb(c,0)) { IRQCHK(c); goto L_801BE950; } // 801BE978
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE97C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BE980
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BE984
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BE988
  c->lr=c->r[0]; // 801BE98C
  c->r[1]=c->r[1]+0x00000020u; // 801BE990
  return; // 801BE994
}

