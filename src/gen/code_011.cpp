#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800FE5A4
void f_800FE5A4(Ctx* __restrict c) {
  trace_call(0x800FE5A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE5A4
  c->r[0]=c->lr; // 800FE5A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE5AC
  c->r[0]=R32(c->r[5]+0x00000000u); // 800FE5B0
  c->r[5]=c->r[1]+0x00000008u; // 800FE5B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE5B8
  c->r[31]=c->r[3]|c->r[3]; // 800FE5BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FE5C0
  c->lr=0x800FE5C8u; f_800ACF2C(c); // 800FE5C4
  c->r[4]=R32(c->r[31]+0x000009C8u); // 800FE5C8
  c->r[3]=c->r[31]+0x00000CA4u; // 800FE5CC
  c->lr=0x800FE5D4u; f_800FE55C(c); // 800FE5D0
  c->r[3]=R32(c->r[31]+0x000009C8u); // 800FE5D4
  c->r[4]=0u+0x00000000u; // 800FE5D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FE5DC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FE5E0
  c->ctr=c->r[12]; // 800FE5E4
  if (true) { c->lr=0x800FE5ECu; dispatch(c,c->ctr); } // 800FE5E8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE5EC
  if (crb(c,2)) { goto L_800FE620; } // 800FE5F0
  c->r[3]=R32(c->r[31]+0x000009C8u); // 800FE5F4
  c->r[4]=0u+0x00000000u; // 800FE5F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FE5FC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FE600
  c->ctr=c->r[12]; // 800FE604
  if (true) { c->lr=0x800FE60Cu; dispatch(c,c->ctr); } // 800FE608
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FE60C
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE610
  c->r[12]=R32(c->r[12]+0x00000028u); // 800FE614
  c->ctr=c->r[12]; // 800FE618
  if (true) { c->lr=0x800FE620u; dispatch(c,c->ctr); } // 800FE61C
L_800FE620:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE620
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE624
  c->lr=c->r[0]; // 800FE628
  c->r[1]=c->r[1]+0x00000020u; // 800FE62C
  return; // 800FE630
}

// fn_800FE634
void f_800FE634(Ctx* __restrict c) {
  trace_call(0x800FE634u);
  c->r[0]=0u+0x00000001u; // 800FE634
  c->r[11]=c->r[4]|c->r[4]; // 800FE638
  c->r[10]=c->r[5]|c->r[5]; // 800FE63C
  c->r[9]=c->r[6]|c->r[6]; // 800FE640
  c->r[8]=c->r[7]|c->r[7]; // 800FE644
  W32(c->r[3]+0x00000CA0u,c->r[0]); // 800FE648
  c->r[4]=R32(c->r[3]+0x000009C8u); // 800FE64C
  c->r[5]=c->r[11]|c->r[11]; // 800FE650
  c->r[6]=c->r[10]|c->r[10]; // 800FE654
  c->r[7]=c->r[9]|c->r[9]; // 800FE658
  c->r[3]=c->r[3]+0x00000CA4u; // 800FE65C
  f_800FC63C(c); return; // 800FE660
}

// fn_800FE664
void f_800FE664(Ctx* __restrict c) {
  trace_call(0x800FE664u);
  c->f[0]=c->f[1]; // 800FE664
  c->r[0]=0u+0x00000001u; // 800FE668
  c->f[1]=c->f[2]; // 800FE66C
  c->r[9]=c->r[4]|c->r[4]; // 800FE670
  c->r[8]=c->r[5]|c->r[5]; // 800FE674
  c->r[7]=c->r[6]|c->r[6]; // 800FE678
  c->f[2]=c->f[0]; // 800FE67C
  W32(c->r[3]+0x00000CA0u,c->r[0]); // 800FE680
  c->r[4]=R32(c->r[3]+0x000009C8u); // 800FE684
  c->r[5]=c->r[9]|c->r[9]; // 800FE688
  c->r[6]=c->r[8]|c->r[8]; // 800FE68C
  c->r[3]=c->r[3]+0x00000CA4u; // 800FE690
  f_800FC754(c); return; // 800FE694
}

// fn_800FE698
void f_800FE698(Ctx* __restrict c) {
  trace_call(0x800FE698u);
  c->f[0]=c->f[1]; // 800FE698
  c->r[0]=0u+0x00000001u; // 800FE69C
  c->f[1]=c->f[2]; // 800FE6A0
  c->r[9]=c->r[4]|c->r[4]; // 800FE6A4
  c->f[2]=c->f[3]; // 800FE6A8
  c->r[8]=c->r[5]|c->r[5]; // 800FE6AC
  c->f[3]=c->f[0]; // 800FE6B0
  W32(c->r[3]+0x00000CA0u,c->r[0]); // 800FE6B4
  c->r[4]=R32(c->r[3]+0x000009C8u); // 800FE6B8
  c->r[7]=c->r[6]|c->r[6]; // 800FE6BC
  c->r[5]=c->r[9]|c->r[9]; // 800FE6C0
  c->r[6]=c->r[8]|c->r[8]; // 800FE6C4
  c->r[3]=c->r[3]+0x00000CA4u; // 800FE6C8
  f_800FC85C(c); return; // 800FE6CC
}

// fn_800FE6D0
void f_800FE6D0(Ctx* __restrict c) {
  trace_call(0x800FE6D0u);
  c->r[11]=c->r[5]|c->r[5]; // 800FE6D0
  c->r[10]=c->r[6]|c->r[6]; // 800FE6D4
  c->r[0]=c->r[7]|c->r[7]; // 800FE6D8
  c->r[5]=R32(c->r[3]+0x000009C8u); // 800FE6DC
  c->r[9]=c->r[8]|c->r[8]; // 800FE6E0
  c->r[6]=c->r[11]|c->r[11]; // 800FE6E4
  c->r[7]=c->r[10]|c->r[10]; // 800FE6E8
  c->r[8]=c->r[0]|c->r[0]; // 800FE6EC
  c->r[3]=c->r[3]+0x00000CA4u; // 800FE6F0
  f_800FC96C(c); return; // 800FE6F4
}

// fn_800FE6F8
void f_800FE6F8(Ctx* __restrict c) {
  trace_call(0x800FE6F8u);
  c->r[0]=0u+0x00000001u; // 800FE6F8
  W32(c->r[3]+0x00000CA0u,c->r[0]); // 800FE6FC
  c->r[3]=c->r[3]+0x00000CA4u; // 800FE700
  f_800FB7A4(c); return; // 800FE704
}

// fn_800FE708
void f_800FE708(Ctx* __restrict c) {
  trace_call(0x800FE708u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE708
  c->r[0]=c->lr; // 800FE70C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800FE710
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800FE714
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800FE718
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800FE71C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800FE720
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 800FE724
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 800FE728
  c->f[29]=c->f[1]; // 800FE72C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800FE730
  c->r[31]=c->r[4]|c->r[4]; // 800FE734
  c->r[4]=c->r[5]|c->r[5]; // 800FE738
  W32(c->r[1]+0x00000078u,c->r[30]); // 800FE73C
  c->r[30]=c->r[3]|c->r[3]; // 800FE740
  c->r[3]=c->r[1]+0x00000038u; // 800FE744
  c->lr=0x800FE74Cu; f_8003F484(c); // 800FE748
  c->r[3]=R32(c->r[30]+0x000009C8u); // 800FE74C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE750
  if (crb(c,2)) { goto L_800FE818; } // 800FE754
  c->r[5]=c->r[1]+0x00000044u; // 800FE758
  c->r[4]=0u+0x00000000u; // 800FE75C
  c->lr=0x800FE764u; f_80380554(c); // 800FE760
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE764
  c->r[3]=c->r[1]+0x00000008u; // 800FE768
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE76C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE770
  c->lr=0x800FE778u; f_800521A0(c); // 800FE774
  c->r[3]=c->r[1]+0x00000008u; // 800FE778
  c->lr=0x800FE780u; f_802657AC(c); // 800FE77C
  c->f[31]=c->f[1]; // 800FE780
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE784
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE788
  c->r[3]=c->r[1]+0x00000014u; // 800FE78C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE790
  c->lr=0x800FE798u; f_800521A0(c); // 800FE794
  c->r[3]=c->r[1]+0x00000014u; // 800FE798
  c->lr=0x800FE7A0u; f_802657AC(c); // 800FE79C
  c->f[30]=c->f[1]; // 800FE7A0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE7A4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE7A8
  c->r[3]=c->r[1]+0x00000020u; // 800FE7AC
  {uint32_t ea=c->r[1]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE7B0
  c->lr=0x800FE7B8u; f_800521A0(c); // 800FE7B4
  c->r[3]=c->r[1]+0x00000020u; // 800FE7B8
  c->lr=0x800FE7C0u; f_802657AC(c); // 800FE7BC
  c->f[2]=c->f[30]; // 800FE7C0
  c->r[3]=c->r[1]+0x0000002Cu; // 800FE7C4
  c->f[3]=c->f[31]; // 800FE7C8
  c->lr=0x800FE7D0u; f_800521A0(c); // 800FE7CC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE7D0
  c->f[1]=c->f[29]; // 800FE7D4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE7D8
  c->r[4]=c->r[31]|c->r[31]; // 800FE7DC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800FE7E0
  c->r[3]=c->r[30]+0x00000CA4u; // 800FE7E4
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[0]); // 800FE7E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE7EC
  c->r[5]=c->r[1]+0x00000038u; // 800FE7F0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE7F4
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE7F8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800FE7FC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[5]);} // 800FE800
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800FE804
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 800FE808
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800FE80C
  c->lr=0x800FE814u; f_800FB814(c); // 800FE810
  goto L_800FE82C; // 800FE814
L_800FE818:;
  c->f[1]=c->f[29]; // 800FE818
  c->r[4]=c->r[31]|c->r[31]; // 800FE81C
  c->r[3]=c->r[30]+0x00000CA4u; // 800FE820
  c->r[5]=c->r[1]+0x00000038u; // 800FE824
  c->lr=0x800FE82Cu; f_800FB814(c); // 800FE828
L_800FE82C:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800FE82C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800FE830
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800FE834
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800FE838
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 800FE83C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 800FE840
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800FE844
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800FE848
  c->r[30]=R32(c->r[1]+0x00000078u); // 800FE84C
  c->lr=c->r[0]; // 800FE850
  c->r[1]=c->r[1]+0x000000B0u; // 800FE854
  return; // 800FE858
}

// fn_800FE85C
void f_800FE85C(Ctx* __restrict c) {
  trace_call(0x800FE85Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE85C
  c->r[0]=c->lr; // 800FE860
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800FE864
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800FE868
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800FE86C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800FE870
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800FE874
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 800FE878
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 800FE87C
  c->f[29]=c->f[2]; // 800FE880
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800FE884
  c->r[31]=c->r[4]|c->r[4]; // 800FE888
  W32(c->r[1]+0x00000078u,c->r[30]); // 800FE88C
  c->r[30]=c->r[3]|c->r[3]; // 800FE890
  c->r[0]=R32(c->r[3]+0x000009C8u); // 800FE894
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800FE898
  cmps(c,0,(int32_t)c->r[0],0); // 800FE89C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 800FE8A0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800FE8A4
  if (crb(c,2)) { goto L_800FE958; } // 800FE8A8
  c->r[3]=c->r[0]|c->r[0]; // 800FE8AC
  c->r[5]=c->r[1]+0x00000044u; // 800FE8B0
  c->r[4]=0u+0x00000000u; // 800FE8B4
  c->lr=0x800FE8BCu; f_80380554(c); // 800FE8B8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE8BC
  c->r[3]=c->r[1]+0x00000008u; // 800FE8C0
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE8C4
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE8C8
  c->lr=0x800FE8D0u; f_800521A0(c); // 800FE8CC
  c->r[3]=c->r[1]+0x00000008u; // 800FE8D0
  c->lr=0x800FE8D8u; f_802657AC(c); // 800FE8D4
  c->f[31]=c->f[1]; // 800FE8D8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE8DC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE8E0
  c->r[3]=c->r[1]+0x00000014u; // 800FE8E4
  {uint32_t ea=c->r[1]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE8E8
  c->lr=0x800FE8F0u; f_800521A0(c); // 800FE8EC
  c->r[3]=c->r[1]+0x00000014u; // 800FE8F0
  c->lr=0x800FE8F8u; f_802657AC(c); // 800FE8F4
  c->f[30]=c->f[1]; // 800FE8F8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE8FC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE900
  c->r[3]=c->r[1]+0x00000020u; // 800FE904
  {uint32_t ea=c->r[1]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE908
  c->lr=0x800FE910u; f_800521A0(c); // 800FE90C
  c->r[3]=c->r[1]+0x00000020u; // 800FE910
  c->lr=0x800FE918u; f_802657AC(c); // 800FE914
  c->f[2]=c->f[30]; // 800FE918
  c->r[3]=c->r[1]+0x0000002Cu; // 800FE91C
  c->f[3]=c->f[31]; // 800FE920
  c->lr=0x800FE928u; f_800521A0(c); // 800FE924
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE928
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE92C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FE930
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 800FE934
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FE938
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE93C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FE940
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800FE944
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[4]);} // 800FE948
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800FE94C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800FE950
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800FE954
L_800FE958:;
  c->f[2]=c->f[29]; // 800FE958
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE95C
  c->r[4]=c->r[31]|c->r[31]; // 800FE960
  c->r[3]=c->r[30]+0x00000CA4u; // 800FE964
  c->lr=0x800FE96Cu; f_800FB8D8(c); // 800FE968
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800FE96C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800FE970
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800FE974
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800FE978
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 800FE97C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 800FE980
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800FE984
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800FE988
  c->r[30]=R32(c->r[1]+0x00000078u); // 800FE98C
  c->lr=c->r[0]; // 800FE990
  c->r[1]=c->r[1]+0x000000B0u; // 800FE994
  return; // 800FE998
}

// fn_800FE99C
void f_800FE99C(Ctx* __restrict c) {
  trace_call(0x800FE99Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE99C
  c->r[0]=c->lr; // 800FE9A0
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800FE9A4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800FE9A8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800FE9AC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800FE9B0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800FE9B4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 800FE9B8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 800FE9BC
  c->f[29]=c->f[3]; // 800FE9C0
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800FE9C4
  c->r[31]=c->r[4]|c->r[4]; // 800FE9C8
  W32(c->r[1]+0x00000078u,c->r[30]); // 800FE9CC
  c->r[30]=c->r[3]|c->r[3]; // 800FE9D0
  c->r[0]=R32(c->r[3]+0x000009C8u); // 800FE9D4
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 800FE9D8
  cmps(c,0,(int32_t)c->r[0],0); // 800FE9DC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800FE9E0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 800FE9E4
  if (crb(c,2)) { goto L_800FEA98; } // 800FE9E8
  c->r[3]=c->r[0]|c->r[0]; // 800FE9EC
  c->r[5]=c->r[1]+0x00000044u; // 800FE9F0
  c->r[4]=0u+0x00000000u; // 800FE9F4
  c->lr=0x800FE9FCu; f_80380554(c); // 800FE9F8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FE9FC
  c->r[3]=c->r[1]+0x00000008u; // 800FEA00
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEA04
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FEA08
  c->lr=0x800FEA10u; f_800521A0(c); // 800FEA0C
  c->r[3]=c->r[1]+0x00000008u; // 800FEA10
  c->lr=0x800FEA18u; f_802657AC(c); // 800FEA14
  c->f[31]=c->f[1]; // 800FEA18
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEA1C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEA20
  c->r[3]=c->r[1]+0x00000014u; // 800FEA24
  {uint32_t ea=c->r[1]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FEA28
  c->lr=0x800FEA30u; f_800521A0(c); // 800FEA2C
  c->r[3]=c->r[1]+0x00000014u; // 800FEA30
  c->lr=0x800FEA38u; f_802657AC(c); // 800FEA34
  c->f[30]=c->f[1]; // 800FEA38
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEA3C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEA40
  c->r[3]=c->r[1]+0x00000020u; // 800FEA44
  {uint32_t ea=c->r[1]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FEA48
  c->lr=0x800FEA50u; f_800521A0(c); // 800FEA4C
  c->r[3]=c->r[1]+0x00000020u; // 800FEA50
  c->lr=0x800FEA58u; f_802657AC(c); // 800FEA54
  c->f[2]=c->f[30]; // 800FEA58
  c->r[3]=c->r[1]+0x0000002Cu; // 800FEA5C
  c->f[3]=c->f[31]; // 800FEA60
  c->lr=0x800FEA68u; f_800521A0(c); // 800FEA64
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEA68
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FEA6C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FEA70
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 800FEA74
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEA78
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEA7C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FEA80
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800FEA84
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[4]);} // 800FEA88
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800FEA8C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800FEA90
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800FEA94
L_800FEA98:;
  c->f[3]=c->f[29]; // 800FEA98
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEA9C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEAA0
  c->r[4]=c->r[31]|c->r[31]; // 800FEAA4
  c->r[3]=c->r[30]+0x00000CA4u; // 800FEAA8
  c->lr=0x800FEAB0u; f_800FB9A8(c); // 800FEAAC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 800FEAB0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800FEAB4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 800FEAB8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800FEABC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 800FEAC0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 800FEAC4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800FEAC8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800FEACC
  c->r[30]=R32(c->r[1]+0x00000078u); // 800FEAD0
  c->lr=c->r[0]; // 800FEAD4
  c->r[1]=c->r[1]+0x000000B0u; // 800FEAD8
  return; // 800FEADC
}

// fn_800FEAE0
void f_800FEAE0(Ctx* __restrict c) {
  trace_call(0x800FEAE0u);
  c->r[0]=c->r[4]|c->r[4]; // 800FEAE0
  c->r[4]=R32(c->r[3]+0x000009C8u); // 800FEAE4
  c->r[6]=c->r[5]|c->r[5]; // 800FEAE8
  c->r[3]=c->r[3]+0x00000CA4u; // 800FEAEC
  c->r[5]=c->r[0]|c->r[0]; // 800FEAF0
  f_800FBA9C(c); return; // 800FEAF4
}

// fn_800FEAF8
void f_800FEAF8(Ctx* __restrict c) {
  trace_call(0x800FEAF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEAF8
  c->r[0]=c->lr; // 800FEAFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEB00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FEB04
  c->r[31]=c->r[3]|c->r[3]; // 800FEB08
  c->r[5]=R32(c->r[3]+0x000009C8u); // 800FEB0C
  c->r[3]=c->r[1]+0x0000000Cu; // 800FEB10
  c->r[0]=R32(c->r[5]+0x000000E8u); // 800FEB14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FEB18
  c->lr=0x800FEB20u; f_80365B94(c); // 800FEB1C
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB20
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FEB24
  if (!crb(c,2)) { goto L_800FEB3C; } // 800FEB28
  c->r[3]=c->r[1]+0x0000000Cu; // 800FEB2C
  c->r[4]=0u+0x00000000u; // 800FEB30
  c->lr=0x800FEB38u; f_80365C28(c); // 800FEB34
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FEB38
L_800FEB3C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB3C
  if (crb(c,2)) { goto L_800FEB58; } // 800FEB40
  c->r[3]=c->r[1]+0x00000008u; // 800FEB44
  c->lr=0x800FEB4Cu; f_800772D8(c); // 800FEB48
  c->r[4]=c->r[3]|c->r[3]; // 800FEB4C
  c->r[3]=c->r[31]+0x00000CA4u; // 800FEB50
  c->lr=0x800FEB58u; f_800FC038(c); // 800FEB54
L_800FEB58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FEB58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FEB5C
  c->lr=c->r[0]; // 800FEB60
  c->r[1]=c->r[1]+0x00000020u; // 800FEB64
  return; // 800FEB68
}

// fn_800FEB6C
void f_800FEB6C(Ctx* __restrict c) {
  trace_call(0x800FEB6Cu);
  c->r[3]=c->r[3]+0x00000CA4u; // 800FEB6C
  f_800FC038(c); return; // 800FEB70
}

// fn_800FEB74
void f_800FEB74(Ctx* __restrict c) {
  trace_call(0x800FEB74u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEB74
  c->r[0]=c->lr; // 800FEB78
  W32(c->r[1]+0x00000084u,c->r[0]); // 800FEB7C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800FEB80
  c->r[31]=c->r[4]|c->r[4]; // 800FEB84
  W32(c->r[1]+0x00000078u,c->r[30]); // 800FEB88
  c->r[30]=c->r[3]|c->r[3]; // 800FEB8C
  c->lr=0x800FEB94u; f_800ACC5C(c); // 800FEB90
  c->r[5]=R32(c->r[30]+0x000009C8u); // 800FEB94
  c->r[4]=c->r[31]|c->r[31]; // 800FEB98
  c->r[3]=c->r[1]+0x0000003Cu; // 800FEB9C
  c->r[31]=R32(c->r[5]+0x000000E8u); // 800FEBA0
  c->lr=0x800FEBA8u; f_800B7AEC(c); // 800FEBA4
  c->r[3]=c->r[1]+0x0000000Cu; // 800FEBA8
  c->lr=0x800FEBB0u; f_80264680(c); // 800FEBAC
  c->r[3]=c->r[1]+0x0000000Cu; // 800FEBB0
  {uint32_t ea=c->r[30]+0x00000CA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FEBB4
  {uint32_t ea=c->r[30]+0x00000CACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FEBB8
  c->r[4]=c->r[3]|c->r[3]; // 800FEBBC
  {uint32_t ea=c->r[30]+0x00000CB0u; c->f[3]=c->ps1[3]=RF32(ea);} // 800FEBC0
  c->lr=0x800FEBC8u; f_80264E54(c); // 800FEBC4
  c->r[3]=c->r[1]+0x0000003Cu; // 800FEBC8
  c->r[4]=c->r[1]+0x0000000Cu; // 800FEBCC
  c->r[5]=c->r[3]|c->r[3]; // 800FEBD0
  c->lr=0x800FEBD8u; f_802646E0(c); // 800FEBD4
  W32(c->r[1]+0x00000008u,c->r[31]); // 800FEBD8
  c->r[3]=c->r[30]+0x00000CA4u; // 800FEBDC
  c->r[4]=c->r[1]+0x00000008u; // 800FEBE0
  c->r[5]=c->r[1]+0x0000003Cu; // 800FEBE4
  c->lr=0x800FEBECu; f_800FC374(c); // 800FEBE8
  c->r[0]=R32(c->r[1]+0x00000084u); // 800FEBEC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800FEBF0
  c->r[30]=R32(c->r[1]+0x00000078u); // 800FEBF4
  c->lr=c->r[0]; // 800FEBF8
  c->r[1]=c->r[1]+0x00000080u; // 800FEBFC
  return; // 800FEC00
}

// fn_800FEC04
void f_800FEC04(Ctx* __restrict c) {
  trace_call(0x800FEC04u);
  c->r[4]=0u+0x803E0000u; // 800FEC04
  c->r[0]=0u+0x00000000u; // 800FEC08
  c->r[4]=c->r[4]+0xFFFFC19Cu; // 800FEC0C
  W32(c->r[3]+0x00000040u,c->r[0]); // 800FEC10
  W32(c->r[3]+0x00000000u,c->r[4]); // 800FEC14
  W32(c->r[3]+0x00000004u,c->r[4]); // 800FEC18
  W32(c->r[3]+0x00000008u,c->r[4]); // 800FEC1C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800FEC20
  W32(c->r[3]+0x00000010u,c->r[4]); // 800FEC24
  W32(c->r[3]+0x00000014u,c->r[4]); // 800FEC28
  W32(c->r[3]+0x00000018u,c->r[4]); // 800FEC2C
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800FEC30
  W32(c->r[3]+0x00000020u,c->r[4]); // 800FEC34
  W32(c->r[3]+0x00000024u,c->r[4]); // 800FEC38
  W32(c->r[3]+0x00000028u,c->r[4]); // 800FEC3C
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800FEC40
  W32(c->r[3]+0x00000030u,c->r[4]); // 800FEC44
  W32(c->r[3]+0x00000034u,c->r[4]); // 800FEC48
  W32(c->r[3]+0x00000038u,c->r[4]); // 800FEC4C
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 800FEC50
  return; // 800FEC54
}

// fn_800FEC58
void f_800FEC58(Ctx* __restrict c) {
  trace_call(0x800FEC58u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEC58
  c->r[12]=R32(c->r[4]+0x00000020u); // 800FEC5C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FEC60
  c->r[24]=R32(c->r[4]+0x00000000u); // 800FEC64
  c->r[25]=R32(c->r[4]+0x00000004u); // 800FEC68
  c->r[26]=R32(c->r[4]+0x00000008u); // 800FEC6C
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 800FEC70
  c->r[28]=R32(c->r[4]+0x00000010u); // 800FEC74
  c->r[29]=R32(c->r[4]+0x00000014u); // 800FEC78
  c->r[30]=R32(c->r[4]+0x00000018u); // 800FEC7C
  c->r[31]=R32(c->r[4]+0x0000001Cu); // 800FEC80
  c->r[11]=R32(c->r[4]+0x00000024u); // 800FEC84
  c->r[10]=R32(c->r[4]+0x00000028u); // 800FEC88
  c->r[9]=R32(c->r[4]+0x0000002Cu); // 800FEC8C
  c->r[8]=R32(c->r[4]+0x00000030u); // 800FEC90
  c->r[7]=R32(c->r[4]+0x00000034u); // 800FEC94
  c->r[6]=R32(c->r[4]+0x00000038u); // 800FEC98
  c->r[5]=R32(c->r[4]+0x0000003Cu); // 800FEC9C
  c->r[0]=R32(c->r[4]+0x00000040u); // 800FECA0
  W32(c->r[3]+0x00000AE0u,c->r[24]); // 800FECA4
  W32(c->r[3]+0x00000AE4u,c->r[25]); // 800FECA8
  W32(c->r[3]+0x00000AE8u,c->r[26]); // 800FECAC
  W32(c->r[3]+0x00000AECu,c->r[27]); // 800FECB0
  W32(c->r[3]+0x00000AF0u,c->r[28]); // 800FECB4
  W32(c->r[3]+0x00000AF4u,c->r[29]); // 800FECB8
  W32(c->r[3]+0x00000AF8u,c->r[30]); // 800FECBC
  W32(c->r[3]+0x00000AFCu,c->r[31]); // 800FECC0
  W32(c->r[3]+0x00000B00u,c->r[12]); // 800FECC4
  W32(c->r[3]+0x00000B04u,c->r[11]); // 800FECC8
  W32(c->r[3]+0x00000B08u,c->r[10]); // 800FECCC
  W32(c->r[3]+0x00000B0Cu,c->r[9]); // 800FECD0
  W32(c->r[3]+0x00000B10u,c->r[8]); // 800FECD4
  W32(c->r[3]+0x00000B14u,c->r[7]); // 800FECD8
  W32(c->r[3]+0x00000B18u,c->r[6]); // 800FECDC
  W32(c->r[3]+0x00000B1Cu,c->r[5]); // 800FECE0
  W32(c->r[3]+0x00000B20u,c->r[0]); // 800FECE4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FECE8
  c->r[1]=c->r[1]+0x00000030u; // 800FECEC
  return; // 800FECF0
}

// fn_800FECF4
void f_800FECF4(Ctx* __restrict c) {
  trace_call(0x800FECF4u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FECF4
  c->r[0]=c->lr; // 800FECF8
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800FECFC
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800FED00
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800FED04
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800FED08
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800FED0C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 800FED10
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 800FED14
  c->r[11]=c->r[1]+0x00000090u; // 800FED18
  c->lr=0x800FED20u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FED1C
  cmps(c,0,(int32_t)c->r[5],0); // 800FED20
  c->r[25]=c->r[3]|c->r[3]; // 800FED24
  c->r[26]=c->r[4]|c->r[4]; // 800FED28
  c->r[27]=c->r[5]|c->r[5]; // 800FED2C
  if (crb(c,2)) { goto L_800FF01C; } // 800FED30
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FED34
  c->r[3]=c->r[1]+0x00000014u; // 800FED38
  c->f[2]=c->f[1]; // 800FED3C
  c->f[3]=c->f[1]; // 800FED40
  c->lr=0x800FED48u; f_800521A0(c); // 800FED44
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FED48
  c->r[3]=c->r[1]+0x00000008u; // 800FED4C
  c->r[22]=R32(c->r[25]+0x000004A8u); // 800FED50
  c->r[28]=0u+0xFFFFFFFFu; // 800FED54
  c->f[2]=c->f[1]; // 800FED58
  c->r[29]=0u+0x00000000u; // 800FED5C
  c->f[3]=c->f[1]; // 800FED60
  c->lr=0x800FED68u; f_800521A0(c); // 800FED64
  c->r[3]=R32(c->r[27]+0x00001898u); // 800FED68
  c->r[30]=0u+0x00000000u; // 800FED6C
  c->r[19]=0u+0x00000000u; // 800FED70
  cmps(c,0,(int32_t)c->r[3],0); // 800FED74
  if (crb(c,2)) { goto L_800FEF60; } // 800FED78
  c->r[20]=R32(c->r[3]+0x0000000Cu); // 800FED7C
  cmps(c,0,(int32_t)c->r[20],0); // 800FED80
  if (crb(c,2)) { goto L_800FEF60; } // 800FED84
  c->r[23]=0u+0x803E0000u; // 800FED88
  c->r[3]=c->r[20]|c->r[20]; // 800FED8C
  c->r[23]=c->r[23]+0xFFFFC19Cu; // 800FED90
  c->r[4]=c->r[23]+0x00000001u; // 800FED94
  c->lr=0x800FED9Cu; f_801D30BC(c); // 800FED98
  cmps(c,0,(int32_t)c->r[3],0); // 800FED9C
  c->r[31]=c->r[3]|c->r[3]; // 800FEDA0
  if (crb(c,2)) { goto L_800FEF60; } // 800FEDA4
  c->r[3]=c->r[20]|c->r[20]; // 800FEDA8
  c->r[4]=c->r[23]+0x0000000Bu; // 800FEDAC
  c->lr=0x800FEDB4u; f_801D30BC(c); // 800FEDB0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FEDB4
  cmps(c,0,(int32_t)c->r[0],5); // 800FEDB8
  if (!crb(c,0)) { goto L_800FEDC4; } // 800FEDBC
  c->r[19]=0u+0xFFFFFFFFu; // 800FEDC0
L_800FEDC4:;
  cmps(c,0,(int32_t)c->r[19],0); // 800FEDC4
  if (!crb(c,0)) { goto L_800FEE54; } // 800FEDC8
  c->r[3]=c->r[31]|c->r[31]; // 800FEDCC
  c->lr=0x800FEDD4u; f_800521CC(c); // 800FEDD0
  c->r[20]=0u+0x00000000u; // 800FEDD4
  goto L_800FEE44; // 800FEDD8
L_800FEDDC:;
  c->r[4]=c->r[20]|c->r[20]; // 800FEDDC
  c->r[3]=c->r[31]|c->r[31]; // 800FEDE0
  c->r[20]=c->r[20]+0x00000001u; // 800FEDE4
  c->lr=0x800FEDECu; f_800521E8(c); // 800FEDE8
  c->r[19]=c->r[3]|c->r[3]; // 800FEDEC
  c->r[4]=c->r[20]|c->r[20]; // 800FEDF0
  c->r[3]=c->r[31]|c->r[31]; // 800FEDF4
  c->r[20]=c->r[20]+0x00000001u; // 800FEDF8
  c->lr=0x800FEE00u; f_800521E8(c); // 800FEDFC
  c->lr=0x800FEE04u; f_80295EAC(c); // 800FEE00
  c->r[24]=c->r[3]|c->r[3]; // 800FEE04
  c->r[4]=c->r[20]|c->r[20]; // 800FEE08
  c->r[3]=c->r[31]|c->r[31]; // 800FEE0C
  c->r[20]=c->r[20]+0x00000001u; // 800FEE10
  c->lr=0x800FEE18u; f_800521E8(c); // 800FEE14
  c->lr=0x800FEE1Cu; f_80295EAC(c); // 800FEE18
  c->r[23]=c->r[3]|c->r[3]; // 800FEE1C
  c->r[3]=c->r[19]|c->r[19]; // 800FEE20
  c->r[4]=c->r[22]|c->r[22]; // 800FEE24
  c->lr=0x800FEE2Cu; f_80293554(c); // 800FEE28
  cmps(c,0,(int32_t)c->r[3],0); // 800FEE2C
  if (!crb(c,2)) { goto L_800FEE44; } // 800FEE30
  c->r[0]=addc(c,c->r[23],0xFFFFFFFFu,0); // 800FEE34
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[24]; // 800FEE38
  c->r[29]=addc(c,~c->r[0],c->r[23],c->xer_ca); // 800FEE3C
  goto L_800FEF60; // 800FEE40
L_800FEE44:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FEE44
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[0]); // 800FEE48
  if (crb(c,0)) { IRQCHK(c); goto L_800FEDDC; } // 800FEE4C
  goto L_800FEF60; // 800FEE50
L_800FEE54:;
  c->r[3]=c->r[31]|c->r[31]; // 800FEE54
  c->lr=0x800FEE5Cu; f_800521CC(c); // 800FEE58
  c->r[19]=0u+0x00000000u; // 800FEE5C
  goto L_800FEF54; // 800FEE60
L_800FEE64:;
  c->r[4]=c->r[19]|c->r[19]; // 800FEE64
  c->r[3]=c->r[31]|c->r[31]; // 800FEE68
  c->r[19]=c->r[19]+0x00000001u; // 800FEE6C
  c->lr=0x800FEE74u; f_800521E8(c); // 800FEE70
  c->r[20]=c->r[3]|c->r[3]; // 800FEE74
  c->r[4]=c->r[19]|c->r[19]; // 800FEE78
  c->r[3]=c->r[31]|c->r[31]; // 800FEE7C
  c->r[19]=c->r[19]+0x00000001u; // 800FEE80
  c->lr=0x800FEE88u; f_800521E8(c); // 800FEE84
  c->lr=0x800FEE8Cu; f_80295EAC(c); // 800FEE88
  c->r[23]=c->r[3]|c->r[3]; // 800FEE8C
  c->r[4]=c->r[19]|c->r[19]; // 800FEE90
  c->r[3]=c->r[31]|c->r[31]; // 800FEE94
  c->r[19]=c->r[19]+0x00000001u; // 800FEE98
  c->lr=0x800FEEA0u; f_800521E8(c); // 800FEE9C
  c->lr=0x800FEEA4u; f_80295EAC(c); // 800FEEA0
  c->r[24]=c->r[3]|c->r[3]; // 800FEEA4
  c->r[4]=c->r[19]|c->r[19]; // 800FEEA8
  c->r[3]=c->r[31]|c->r[31]; // 800FEEAC
  c->r[19]=c->r[19]+0x00000001u; // 800FEEB0
  c->lr=0x800FEEB8u; f_800521E8(c); // 800FEEB4
  c->lr=0x800FEEBCu; f_802953A0(c); // 800FEEB8
  c->f[31]=c->ps1[31]=S(c->f[1]); // 800FEEBC
  c->r[4]=c->r[19]|c->r[19]; // 800FEEC0
  c->r[3]=c->r[31]|c->r[31]; // 800FEEC4
  c->r[19]=c->r[19]+0x00000001u; // 800FEEC8
  c->lr=0x800FEED0u; f_800521E8(c); // 800FEECC
  c->lr=0x800FEED4u; f_802953A0(c); // 800FEED0
  c->f[30]=c->ps1[30]=S(c->f[1]); // 800FEED4
  c->r[4]=c->r[19]|c->r[19]; // 800FEED8
  c->r[3]=c->r[31]|c->r[31]; // 800FEEDC
  c->r[19]=c->r[19]+0x00000001u; // 800FEEE0
  c->lr=0x800FEEE8u; f_800521E8(c); // 800FEEE4
  c->lr=0x800FEEECu; f_802953A0(c); // 800FEEE8
  c->f[29]=c->ps1[29]=S(c->f[1]); // 800FEEEC
  c->r[4]=c->r[19]|c->r[19]; // 800FEEF0
  c->r[3]=c->r[31]|c->r[31]; // 800FEEF4
  c->r[19]=c->r[19]+0x00000001u; // 800FEEF8
  c->lr=0x800FEF00u; f_800521E8(c); // 800FEEFC
  c->r[21]=c->r[3]|c->r[3]; // 800FEF00
  c->r[3]=c->r[20]|c->r[20]; // 800FEF04
  c->r[4]=c->r[22]|c->r[22]; // 800FEF08
  c->lr=0x800FEF10u; f_80293554(c); // 800FEF0C
  cmps(c,0,(int32_t)c->r[3],0); // 800FEF10
  if (!crb(c,2)) { goto L_800FEF54; } // 800FEF14
  c->r[4]=0u+0x803E0000u; // 800FEF18
  c->r[0]=addc(c,c->r[24],0xFFFFFFFFu,0); // 800FEF1C
  c->r[4]=c->r[4]+0xFFFFC19Cu; // 800FEF20
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 800FEF24
  c->r[3]=c->r[21]|c->r[21]; // 800FEF28
  c->r[28]=(uint32_t)(int32_t)(int8_t)c->r[23]; // 800FEF2C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 800FEF30
  c->r[29]=addc(c,~c->r[0],c->r[24],c->xer_ca); // 800FEF34
  c->r[4]=c->r[4]+0x0000001Cu; // 800FEF38
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[29]);} // 800FEF3C
  c->lr=0x800FEF44u; f_80293554(c); // 800FEF40
  cmps(c,0,(int32_t)c->r[3],0); // 800FEF44
  if (crb(c,2)) { goto L_800FEF60; } // 800FEF48
  c->r[30]=c->r[21]|c->r[21]; // 800FEF4C
  goto L_800FEF60; // 800FEF50
L_800FEF54:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800FEF54
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 800FEF58
  if (crb(c,0)) { IRQCHK(c); goto L_800FEE64; } // 800FEF5C
L_800FEF60:;
  c->r[3]=c->r[1]+0x00000014u; // 800FEF60
  c->r[4]=c->r[1]+0x00000008u; // 800FEF64
  c->lr=0x800FEF6Cu; f_8003F468(c); // 800FEF68
  cmps(c,0,(int32_t)c->r[28],0); // 800FEF6C
  if (crb(c,0)) { goto L_800FEF9C; } // 800FEF70
  c->r[4]=c->r[27]|c->r[27]; // 800FEF74
  c->r[5]=c->r[28]|c->r[28]; // 800FEF78
  c->r[6]=c->r[29]|c->r[29]; // 800FEF7C
  c->r[8]=c->r[30]|c->r[30]; // 800FEF80
  c->r[3]=c->r[25]+0x00000C80u; // 800FEF84
  c->r[7]=c->r[1]+0x00000014u; // 800FEF88
  c->lr=0x800FEF90u; f_8013F0A4(c); // 800FEF8C
  c->r[3]=c->r[25]+0x00000C80u; // 800FEF90
  c->r[4]=0u+0x00000000u; // 800FEF94
  c->lr=0x800FEF9Cu; f_8013F200(c); // 800FEF98
L_800FEF9C:;
  cmps(c,0,(int32_t)c->r[26],0); // 800FEF9C
  if (crb(c,2)) { goto L_800FF01C; } // 800FEFA0
  c->r[5]=R32(c->r[25]+0x00000014u); // 800FEFA4
  c->r[4]=c->r[26]|c->r[26]; // 800FEFA8
  c->r[6]=c->r[27]|c->r[27]; // 800FEFAC
  c->r[7]=c->r[28]|c->r[28]; // 800FEFB0
  c->r[8]=c->r[29]|c->r[29]; // 800FEFB4
  c->r[3]=c->r[25]+0x00000C64u; // 800FEFB8
  c->lr=0x800FEFC0u; f_8013F684(c); // 800FEFBC
  c->r[3]=c->r[25]+0x00000C64u; // 800FEFC0
  c->r[4]=0u+0x00000000u; // 800FEFC4
  c->lr=0x800FEFCCu; f_8013FA90(c); // 800FEFC8
  c->r[0]=R32(c->r[25]+0x00000C68u); // 800FEFCC
  cmps(c,0,(int32_t)c->r[0],0); // 800FEFD0
  if (crb(c,2)) { goto L_800FF01C; } // 800FEFD4
  c->r[12]=R32(c->r[25]+0x00000010u); // 800FEFD8
  c->r[3]=c->r[25]|c->r[25]; // 800FEFDC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800FEFE0
  c->ctr=c->r[12]; // 800FEFE4
  if (true) { c->lr=0x800FEFECu; dispatch(c,c->ctr); } // 800FEFE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FEFEC
  c->r[5]=0u+0x803E0000u; // 800FEFF0
  c->r[5]=c->r[5]+0xFFFFC19Cu; // 800FEFF4
  c->r[4]=c->r[3]|c->r[3]; // 800FEFF8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800FEFFC
  c->r[3]=c->r[1]+0x00000020u; // 800FF000
  c->r[5]=c->r[5]+0x00000021u; // 800FF004
  c->ctr=c->r[12]; // 800FF008
  if (true) { c->lr=0x800FF010u; dispatch(c,c->ctr); } // 800FF00C
  c->r[3]=c->r[25]+0x00000C64u; // 800FF010
  c->r[4]=c->r[1]+0x00000020u; // 800FF014
  c->lr=0x800FF01Cu; f_80140184(c); // 800FF018
L_800FF01C:;
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800FF01C
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800FF020
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800FF024
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800FF028
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 800FF02C
  c->r[11]=c->r[1]+0x00000090u; // 800FF030
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 800FF034
  c->lr=0x800FF03Cu; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF038
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800FF03C
  c->lr=c->r[0]; // 800FF040
  c->r[1]=c->r[1]+0x000000C0u; // 800FF044
  return; // 800FF048
}

// fn_800FF04C
void f_800FF04C(Ctx* __restrict c) {
  trace_call(0x800FF04Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF04C
  c->r[0]=c->lr; // 800FF050
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF054
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FF058
  c->r[30]=c->r[3]|c->r[3]; // 800FF05C
  c->r[31]=c->r[4]|c->r[4]; // 800FF060
  c->lr=0x800FF068u; f_8004FBE8(c); // 800FF064
  c->r[4]=R32(c->r[30]+0x00000B24u); // 800FF068
  c->lr=0x800FF070u; f_80050338(c); // 800FF06C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF070
  c->r[5]=c->r[3]|c->r[3]; // 800FF074
  if (crb(c,2)) { goto L_800FF088; } // 800FF078
  c->r[3]=c->r[30]|c->r[30]; // 800FF07C
  c->r[4]=c->r[31]|c->r[31]; // 800FF080
  c->lr=0x800FF088u; f_800FECF4(c); // 800FF084
L_800FF088:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FF088
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF08C
  c->lr=c->r[0]; // 800FF090
  c->r[1]=c->r[1]+0x00000010u; // 800FF094
  return; // 800FF098
}

// fn_800FF09C
void f_800FF09C(Ctx* __restrict c) {
  trace_call(0x800FF09Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF09C
  c->r[0]=c->lr; // 800FF0A0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800FF0A4
  c->r[11]=c->r[1]+0x000000A0u; // 800FF0A8
  c->lr=0x800FF0B0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF0AC
  c->r[0]=R32(c->r[3]+0x00000050u); // 800FF0B0
  c->r[29]=c->r[3]|c->r[3]; // 800FF0B4
  c->r[30]=c->r[4]|c->r[4]; // 800FF0B8
  cmps(c,0,(int32_t)c->r[0],0); // 800FF0BC
  if (crb(c,2)) { goto L_800FF0E8; } // 800FF0C0
  c->r[3]=c->r[0]|c->r[0]; // 800FF0C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF0C8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FF0CC
  c->ctr=c->r[12]; // 800FF0D0
  if (true) { c->lr=0x800FF0D8u; dispatch(c,c->ctr); } // 800FF0D4
  cmps(c,0,(int32_t)c->r[3],2); // 800FF0D8
  if (!crb(c,2)) { goto L_800FF0E8; } // 800FF0DC
  c->r[0]=0u+0x00000001u; // 800FF0E0
  goto L_800FF0EC; // 800FF0E4
L_800FF0E8:;
  c->r[0]=0u+0x00000000u; // 800FF0E8
L_800FF0EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800FF0EC
  if (!crb(c,2)) { goto L_800FF23C; } // 800FF0F0
  c->r[3]=R32(c->r[29]+0x00000054u); // 800FF0F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FF0F8
  if (crb(c,2)) { goto L_800FF120; } // 800FF0FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF100
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FF104
  c->ctr=c->r[12]; // 800FF108
  if (true) { c->lr=0x800FF110u; dispatch(c,c->ctr); } // 800FF10C
  cmps(c,0,(int32_t)c->r[3],2); // 800FF110
  if (!crb(c,2)) { goto L_800FF120; } // 800FF114
  c->r[0]=0u+0x00000001u; // 800FF118
  goto L_800FF124; // 800FF11C
L_800FF120:;
  c->r[0]=0u+0x00000000u; // 800FF120
L_800FF124:;
  cmps(c,0,(int32_t)c->r[0],0); // 800FF124
  if (crb(c,2)) { goto L_800FF130; } // 800FF128
  goto L_800FF23C; // 800FF12C
L_800FF130:;
  c->lr=0x800FF134u; f_8004FBE8(c); // 800FF130
  c->r[4]=R32(c->r[29]+0x00000B24u); // 800FF134
  c->lr=0x800FF13Cu; f_80050338(c); // 800FF138
  cmps(c,0,(int32_t)c->r[3],0); // 800FF13C
  c->r[31]=c->r[3]|c->r[3]; // 800FF140
  if (crb(c,2)) { goto L_800FF23C; } // 800FF144
  c->r[3]=c->r[1]+0x00000008u; // 800FF148
  c->lr=0x800FF150u; f_8013F5C4(c); // 800FF14C
  c->r[5]=R32(c->r[29]+0x00000014u); // 800FF150
  c->r[4]=c->r[30]|c->r[30]; // 800FF154
  c->r[6]=c->r[31]|c->r[31]; // 800FF158
  c->r[3]=c->r[1]+0x00000008u; // 800FF15C
  c->r[7]=0u+0xFFFFFFFFu; // 800FF160
  c->r[8]=0u+0x00000000u; // 800FF164
  c->lr=0x800FF16Cu; f_8013F684(c); // 800FF168
  {uint32_t ea=c->r[29]+0x00000C54u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF16C
  c->r[3]=c->r[1]+0x00000008u; // 800FF170
  c->lr=0x800FF178u; f_80140480(c); // 800FF174
  c->r[3]=c->r[1]+0x00000008u; // 800FF178
  c->r[4]=0u+0x00000000u; // 800FF17C
  c->lr=0x800FF184u; f_8014012C(c); // 800FF180
  c->r[12]=R32(c->r[29]+0x00000010u); // 800FF184
  c->r[31]=c->r[3]|c->r[3]; // 800FF188
  c->r[3]=c->r[29]|c->r[29]; // 800FF18C
  c->r[12]=R32(c->r[12]+0x00000338u); // 800FF190
  c->ctr=c->r[12]; // 800FF194
  if (true) { c->lr=0x800FF19Cu; dispatch(c,c->ctr); } // 800FF198
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF19C
  c->r[5]=0u+0x803E0000u; // 800FF1A0
  c->r[5]=c->r[5]+0xFFFFC19Cu; // 800FF1A4
  c->r[4]=c->r[3]|c->r[3]; // 800FF1A8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800FF1AC
  c->r[3]=c->r[1]+0x00000054u; // 800FF1B0
  c->r[5]=c->r[5]+0x00000021u; // 800FF1B4
  c->ctr=c->r[12]; // 800FF1B8
  if (true) { c->lr=0x800FF1C0u; dispatch(c,c->ctr); } // 800FF1BC
  cmps(c,0,(int32_t)c->r[31],0); // 800FF1C0
  if (crb(c,2)) { goto L_800FF21C; } // 800FF1C4
  c->r[12]=R32(c->r[29]+0x00000010u); // 800FF1C8
  c->r[3]=c->r[29]|c->r[29]; // 800FF1CC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800FF1D0
  c->ctr=c->r[12]; // 800FF1D4
  if (true) { c->lr=0x800FF1DCu; dispatch(c,c->ctr); } // 800FF1D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF1DC
  c->r[4]=c->r[3]|c->r[3]; // 800FF1E0
  c->r[5]=c->r[31]|c->r[31]; // 800FF1E4
  c->r[3]=c->r[1]+0x00000024u; // 800FF1E8
  c->r[12]=R32(c->r[12]+0x00000038u); // 800FF1EC
  c->ctr=c->r[12]; // 800FF1F0
  if (true) { c->lr=0x800FF1F8u; dispatch(c,c->ctr); } // 800FF1F4
  c->r[0]=0u+0x00000006u; // 800FF1F8
  c->r[5]=c->r[1]+0x00000050u; // 800FF1FC
  c->r[4]=c->r[1]+0x00000020u; // 800FF200
  c->ctr=c->r[0]; // 800FF204
L_800FF208:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800FF208
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800FF20C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF210
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800FF214
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF208; } // 800FF218
L_800FF21C:;
  c->r[3]=c->r[1]+0x00000008u; // 800FF21C
  c->r[4]=c->r[1]+0x00000054u; // 800FF220
  c->lr=0x800FF228u; f_80140018(c); // 800FF224
  c->r[3]=c->r[1]+0x00000008u; // 800FF228
  c->lr=0x800FF230u; f_8013FA28(c); // 800FF22C
  c->r[3]=c->r[1]+0x00000008u; // 800FF230
  c->r[4]=0u+0xFFFFFFFFu; // 800FF234
  c->lr=0x800FF23Cu; f_8013F5F4(c); // 800FF238
L_800FF23C:;
  c->r[11]=c->r[1]+0x000000A0u; // 800FF23C
  c->lr=0x800FF244u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF240
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800FF244
  c->lr=c->r[0]; // 800FF248
  c->r[1]=c->r[1]+0x000000A0u; // 800FF24C
  return; // 800FF250
}

// fn_800FF254
void f_800FF254(Ctx* __restrict c) {
  trace_call(0x800FF254u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF254
  c->r[0]=c->lr; // 800FF258
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800FF25C
  c->r[11]=c->r[1]+0x000000B0u; // 800FF260
  c->lr=0x800FF268u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF264
  c->r[12]=R32(c->r[3]+0x00000B28u); // 800FF268
  c->r[24]=c->r[4]|c->r[4]; // 800FF26C
  c->r[23]=c->r[3]|c->r[3]; // 800FF270
  c->r[4]=R32(c->r[3]+0x00000014u); // 800FF274
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FF278
  c->r[5]=c->r[24]|c->r[24]; // 800FF27C
  c->r[6]=0u+0x00000000u; // 800FF280
  c->r[7]=0u+0x00000000u; // 800FF284
  c->r[8]=0u+0x00000000u; // 800FF288
  c->r[9]=0u+0x00000000u; // 800FF28C
  c->ctr=c->r[12]; // 800FF290
  c->r[3]=c->r[3]+0x00000B28u; // 800FF294
  if (true) { c->lr=0x800FF29Cu; dispatch(c,c->ctr); } // 800FF298
  c->r[3]=c->r[23]+0x00000B28u; // 800FF29C
  c->r[4]=0u+0x000000E5u; // 800FF2A0
  c->r[5]=0u+0x000000E5u; // 800FF2A4
  c->lr=0x800FF2ACu; f_8002B9BC(c); // 800FF2A8
  c->r[12]=R32(c->r[23]+0x000009C0u); // 800FF2AC
  c->r[4]=c->r[23]+0x000009C0u; // 800FF2B0
  c->r[3]=c->r[1]+0x0000004Cu; // 800FF2B4
  c->r[12]=R32(c->r[12]+0x00000030u); // 800FF2B8
  c->ctr=c->r[12]; // 800FF2BC
  if (true) { c->lr=0x800FF2C4u; dispatch(c,c->ctr); } // 800FF2C0
  c->r[12]=R32(c->r[23]+0x00000B28u); // 800FF2C4
  c->r[3]=c->r[23]+0x00000B28u; // 800FF2C8
  c->r[4]=c->r[1]+0x0000004Cu; // 800FF2CC
  c->r[12]=R32(c->r[12]+0x00000028u); // 800FF2D0
  c->ctr=c->r[12]; // 800FF2D4
  if (true) { c->lr=0x800FF2DCu; dispatch(c,c->ctr); } // 800FF2D8
  c->r[3]=c->r[23]+0x00000B28u; // 800FF2DC
  c->lr=0x800FF2E4u; f_800FF494(c); // 800FF2E0
  c->r[26]=R32(c->r[23]+0x00000B30u); // 800FF2E4
  c->r[25]=0u+0x00000000u; // 800FF2E8
  c->r[27]=0u+0x803F0000u; // 800FF2EC
  c->r[28]=0u+0x803F0000u; // 800FF2F0
  c->r[29]=0u+0x803F0000u; // 800FF2F4
  c->r[30]=0u+0x803F0000u; // 800FF2F8
  goto L_800FF3C0; // 800FF2FC
L_800FF300:;
  c->r[4]=c->r[26]|c->r[26]; // 800FF300
  c->r[5]=c->r[25]|c->r[25]; // 800FF304
  c->r[3]=c->r[1]+0x00000018u; // 800FF308
  c->lr=0x800FF310u; f_80385274(c); // 800FF30C
  c->r[3]=c->r[1]+0x00000018u; // 800FF310
  c->r[4]=0u+0x00000000u; // 800FF314
  c->lr=0x800FF31Cu; f_803851E4(c); // 800FF318
  W32(c->r[1]+0x00000008u,c->r[3]); // 800FF31C
  c->r[4]=c->r[25]|c->r[25]; // 800FF320
  c->r[3]=c->r[1]+0x0000000Cu; // 800FF324
  c->r[0]=R32(c->r[26]+0x000000E8u); // 800FF328
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FF32C
  c->lr=0x800FF334u; f_803661F8(c); // 800FF330
  cmps(c,0,(int32_t)c->r[3],0); // 800FF334
  c->r[31]=c->r[3]|c->r[3]; // 800FF338
  if (!crb(c,2)) { goto L_800FF35C; } // 800FF33C
  c->r[3]=c->r[27]+0x000015E0u; // 800FF340
  c->r[5]=c->r[28]+0x000015C0u; // 800FF344
  c->r[4]=0u+0x00000239u; // 800FF348
  c->r[6]=c->r[13]+0xFFFF8038u; // 800FF34C
  c->r[7]=c->r[13]+0xFFFF81C0u; // 800FF350
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800FF354
  c->lr=0x800FF35Cu; f_803444BC(c); // 800FF358
L_800FF35C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800FF35C
  cmps(c,0,(int32_t)c->r[0],0); // 800FF360
  if (crb(c,2)) { goto L_800FF374; } // 800FF364
  c->r[3]=c->r[31]+c->r[0]; // 800FF368
  c->r[31]=c->r[3]+0xFFFFFFFCu; // 800FF36C
  goto L_800FF378; // 800FF370
L_800FF374:;
  c->r[31]=0u+0x00000000u; // 800FF374
L_800FF378:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF378
  if (!crb(c,2)) { goto L_800FF394; } // 800FF37C
  c->r[3]=c->r[29]+0x00001998u; // 800FF380
  c->r[5]=c->r[30]+0x00001970u; // 800FF384
  c->r[4]=0u+0x0000008Fu; // 800FF388
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800FF38C
  c->lr=0x800FF394u; f_803444BC(c); // 800FF390
L_800FF394:;
  c->r[4]=c->r[31]+0x00000004u; // 800FF394
  c->r[3]=c->r[13]+0xFFFF9600u; // 800FF398
  c->lr=0x800FF3A0u; f_80116BF4(c); // 800FF39C
  c->r[5]=c->r[3]|c->r[3]; // 800FF3A0
  c->r[4]=c->r[1]+0x00000008u; // 800FF3A4
  c->r[3]=c->r[13]+0xFFFF9600u; // 800FF3A8
  c->lr=0x800FF3B0u; f_80116B44(c); // 800FF3AC
  c->r[3]=c->r[1]+0x00000008u; // 800FF3B0
  c->r[4]=0u+0x00000000u; // 800FF3B4
  c->lr=0x800FF3BCu; f_80366F6C(c); // 800FF3B8
  c->r[25]=c->r[25]+0x00000001u; // 800FF3BC
L_800FF3C0:;
  c->r[0]=R32(c->r[26]+0x000000E8u); // 800FF3C0
  c->r[3]=c->r[1]+0x00000010u; // 800FF3C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800FF3C8
  c->lr=0x800FF3D0u; f_8036624C(c); // 800FF3CC
  cmpu(c,0,c->r[25],c->r[3]); // 800FF3D0
  if (crb(c,0)) { IRQCHK(c); goto L_800FF300; } // 800FF3D4
  c->r[3]=c->r[24]|c->r[24]; // 800FF3D8
  c->r[4]=0u+0x00000000u; // 800FF3DC
  c->lr=0x800FF3E4u; f_80363E5C(c); // 800FF3E0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800FF3E4
  c->r[3]=c->r[1]+0x00000014u; // 800FF3E8
  c->lr=0x800FF3F0u; f_800FF430(c); // 800FF3EC
  c->r[3]=c->r[3]^0x80000000u; // 800FF3F0
  c->r[0]=0u+0x43300000u; // 800FF3F4
  W32(c->r[1]+0x00000084u,c->r[3]); // 800FF3F8
  c->r[11]=c->r[1]+0x000000B0u; // 800FF3FC
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[2]=RF64(ea);} // 800FF400
  W32(c->r[1]+0x00000080u,c->r[0]); // 800FF404
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF408
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=RF64(ea);} // 800FF40C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800FF410
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800FF414
  {uint32_t ea=c->r[23]+0x00000C60u; WF32(ea,c->f[0]);} // 800FF418
  c->lr=0x800FF420u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF41C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800FF420
  c->lr=c->r[0]; // 800FF424
  c->r[1]=c->r[1]+0x000000B0u; // 800FF428
  return; // 800FF42C
}

// fn_800FF430
void f_800FF430(Ctx* __restrict c) {
  trace_call(0x800FF430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF430
  c->r[0]=c->lr; // 800FF434
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF438
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FF43C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF440
  c->r[31]=c->r[3]|c->r[3]; // 800FF444
  cmps(c,0,(int32_t)c->r[0],0); // 800FF448
  if (!crb(c,2)) { goto L_800FF478; } // 800FF44C
  c->r[3]=0u+0x803F0000u; // 800FF450
  c->r[5]=0u+0x803F0000u; // 800FF454
  c->r[6]=0u+0x803F0000u; // 800FF458
  c->r[4]=0u+0x00000026u; // 800FF45C
  c->r[3]=c->r[3]+0x0000195Cu; // 800FF460
  c->r[5]=c->r[5]+0x00001940u; // 800FF464
  c->r[6]=c->r[6]+0x00001934u; // 800FF468
  c->r[7]=c->r[13]+0xFFFF81B8u; // 800FF46C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800FF470
  c->lr=0x800FF478u; f_803444BC(c); // 800FF474
L_800FF478:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800FF478
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF47C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF480
  c->r[3]=R16(c->r[3]+0x0000001Cu); // 800FF484
  c->lr=c->r[0]; // 800FF488
  c->r[1]=c->r[1]+0x00000010u; // 800FF48C
  return; // 800FF490
}

// fn_800FF494
void f_800FF494(Ctx* __restrict c) {
  trace_call(0x800FF494u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF494
  c->r[0]=c->lr; // 800FF498
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800FF49C
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800FF4A0
  c->r[31]=c->r[3]|c->r[3]; // 800FF4A4
  c->r[5]=R32(c->r[3]+0x000000B0u); // 800FF4A8
  cmps(c,0,(int32_t)c->r[5],0); // 800FF4AC
  if (crb(c,0)) { goto L_800FF4F4; } // 800FF4B0
  c->r[12]=R32(c->r[31]+0x00000000u); // 800FF4B4
  c->r[4]=c->r[31]|c->r[31]; // 800FF4B8
  c->r[3]=c->r[1]+0x00000030u; // 800FF4BC
  c->r[12]=R32(c->r[12]+0x00000034u); // 800FF4C0
  c->ctr=c->r[12]; // 800FF4C4
  if (true) { c->lr=0x800FF4CCu; dispatch(c,c->ctr); } // 800FF4C8
  c->r[0]=0u+0x00000006u; // 800FF4CC
  c->r[5]=c->r[1]+0x0000008Cu; // 800FF4D0
  c->r[4]=c->r[1]+0x0000002Cu; // 800FF4D4
  c->ctr=c->r[0]; // 800FF4D8
L_800FF4DC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800FF4DC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800FF4E0
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF4E4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800FF4E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF4DC; } // 800FF4EC
  goto L_800FF570; // 800FF4F0
L_800FF4F4:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800FF4F4
  c->r[4]=c->r[1]+0x00000008u; // 800FF4F8
  c->lr=0x800FF500u; f_800A0678(c); // 800FF4FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FF500
  c->r[4]=c->r[31]|c->r[31]; // 800FF504
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF508
  c->r[3]=c->r[1]+0x00000060u; // 800FF50C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF510
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800FF514
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800FF518
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800FF51C
  c->r[12]=R32(c->r[31]+0x00000000u); // 800FF520
  c->r[12]=R32(c->r[12]+0x00000030u); // 800FF524
  c->ctr=c->r[12]; // 800FF528
  if (true) { c->lr=0x800FF530u; dispatch(c,c->ctr); } // 800FF52C
  c->r[0]=0u+0x00000006u; // 800FF530
  c->r[5]=c->r[1]+0x0000008Cu; // 800FF534
  c->r[4]=c->r[1]+0x0000005Cu; // 800FF538
  c->ctr=c->r[0]; // 800FF53C
L_800FF540:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800FF540
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800FF544
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FF548
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800FF54C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF540; } // 800FF550
  c->r[4]=c->r[1]+0x00000018u; // 800FF554
  c->r[3]=c->r[1]+0x00000090u; // 800FF558
  c->r[5]=c->r[4]|c->r[4]; // 800FF55C
  c->lr=0x800FF564u; f_802652E8(c); // 800FF560
  c->r[3]=c->r[1]+0x00000090u; // 800FF564
  c->r[4]=c->r[1]+0x00000018u; // 800FF568
  c->lr=0x800FF570u; f_80032FF4(c); // 800FF56C
L_800FF570:;
  c->r[0]=R8(c->r[31]+0x000000B4u); // 800FF570
  cmps(c,0,(int32_t)c->r[0],0); // 800FF574
  if (crb(c,2)) { goto L_800FF5AC; } // 800FF578
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF57C
  c->r[3]=c->r[1]+0x00000024u; // 800FF580
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 800FF584
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[3]=c->ps1[3]=RF32(ea);} // 800FF588
  c->lr=0x800FF590u; f_800521A0(c); // 800FF58C
  c->lr=0x800FF594u; f_8004FBE8(c); // 800FF590
  c->r[5]=c->r[3]+0x00010000u; // 800FF594
  {uint32_t ea=c->r[2]+0xFFFF92E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF598
  c->r[3]=c->r[31]+0x0000001Cu; // 800FF59C
  c->r[4]=c->r[1]+0x00000024u; // 800FF5A0
  c->r[5]=c->r[5]+0xFFFF82E4u; // 800FF5A4
  c->lr=0x800FF5ACu; f_80142230(c); // 800FF5A8
L_800FF5AC:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800FF5AC
  c->r[31]=R32(c->r[1]+0x000000CCu); // 800FF5B0
  c->lr=c->r[0]; // 800FF5B4
  c->r[1]=c->r[1]+0x000000D0u; // 800FF5B8
  return; // 800FF5BC
}

// fn_800FF5C0
void f_800FF5C0(Ctx* __restrict c) {
  trace_call(0x800FF5C0u);
  {uint32_t ea=c->r[1]+0xFFFFF040u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF5C0
  c->r[0]=c->lr; // 800FF5C4
  c->r[5]=0u+0x803F0000u; // 800FF5C8
  c->r[4]=0u+0x803E0000u; // 800FF5CC
  W32(c->r[1]+0x00000FC4u,c->r[0]); // 800FF5D0
  c->r[6]=0u+0x00000000u; // 800FF5D4
  c->r[5]=c->r[5]+0x0000324Cu; // 800FF5D8
  c->r[4]=c->r[4]+0xFFFF9D38u; // 800FF5DC
  W32(c->r[1]+0x000000A4u,c->r[6]); // 800FF5E0
  W32(c->r[1]+0x00000FA8u,c->r[5]); // 800FF5E4
  W8(c->r[1]+0x00000FACu,c->r[6]); // 800FF5E8
  W32(c->r[1]+0x00000FB0u,c->r[4]); // 800FF5EC
  c->r[4]=R32(c->r[3]+0x00000000u); // 800FF5F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FF5F4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800FF5F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FF5FC
  W32(c->r[1]+0x00000010u,c->r[4]); // 800FF600
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF604
  W32(c->r[1]+0x00000018u,c->r[6]); // 800FF608
  c->lr=0x800FF610u; f_80291D94(c); // 800FF60C
  c->r[3]=c->r[3]^0x80000000u; // 800FF610
  c->r[0]=0u+0x43300000u; // 800FF614
  W32(c->r[1]+0x00000FBCu,c->r[3]); // 800FF618
  c->r[5]=0u+0x803E0000u; // 800FF61C
  c->r[5]=c->r[5]+0xFFFFC19Cu; // 800FF620
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[2]=RF64(ea);} // 800FF624
  W32(c->r[1]+0x00000FB8u,c->r[0]); // 800FF628
  c->r[3]=c->r[1]+0x00000020u; // 800FF62C
  {uint32_t ea=c->r[2]+0xFFFF92E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF630
  c->r[4]=c->r[1]+0x00000010u; // 800FF634
  {uint32_t ea=c->r[1]+0x00000FB8u; c->f[1]=RF64(ea);} // 800FF638
  c->r[5]=c->r[5]+0x00000027u; // 800FF63C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800FF640
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800FF644
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800FF648
  c->lr=0x800FF650u; f_80077408(c); // 800FF64C
  c->r[0]=R32(c->r[1]+0x00000FC4u); // 800FF650
  c->lr=c->r[0]; // 800FF654
  c->r[1]=c->r[1]+0x00000FC0u; // 800FF658
  return; // 800FF65C
}

// fn_800FF660
void f_800FF660(Ctx* __restrict c) {
  trace_call(0x800FF660u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF660
  c->r[0]=c->lr; // 800FF664
  W32(c->r[1]+0x00000224u,c->r[0]); // 800FF668
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[31]);} // 800FF66C
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,31,ea,0,0);} // 800FF670
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[30]);} // 800FF674
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,30,ea,0,0);} // 800FF678
  c->r[11]=c->r[1]+0x00000200u; // 800FF67C
  c->lr=0x800FF684u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF680
  c->r[31]=c->r[1]|c->r[1]; // 800FF684
  c->r[0]=R32(c->r[3]+0x00000B30u); // 800FF688
  c->r[28]=c->r[3]|c->r[3]; // 800FF68C
  cmps(c,0,(int32_t)c->r[0],0); // 800FF690
  if (crb(c,2)) { goto L_800FF748; } // 800FF694
  c->r[3]=c->r[0]|c->r[0]; // 800FF698
  c->r[4]=0u+0x00000000u; // 800FF69C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF6A0
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FF6A4
  c->ctr=c->r[12]; // 800FF6A8
  if (true) { c->lr=0x800FF6B0u; dispatch(c,c->ctr); } // 800FF6AC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF6B0
  if (crb(c,2)) { goto L_800FF720; } // 800FF6B4
  c->r[3]=R32(c->r[28]+0x00000B30u); // 800FF6B8
  c->r[27]=0u+0x804D0000u; // 800FF6BC
  c->r[27]=c->r[27]+0x00003318u; // 800FF6C0
  c->r[4]=0u+0x00000000u; // 800FF6C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF6C8
  {uint32_t ea=c->r[27]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800FF6CC
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FF6D0
  {uint32_t ea=c->r[27]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800FF6D4
  c->ctr=c->r[12]; // 800FF6D8
  if (true) { c->lr=0x800FF6E0u; dispatch(c,c->ctr); } // 800FF6DC
  c->r[4]=R32(c->r[27]+0x00000028u); // 800FF6E0
  c->r[0]=0u+0x43300000u; // 800FF6E4
  {uint32_t ea=c->r[28]+0x00001748u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF6E8
  c->r[4]=c->r[4]^0x80000000u; // 800FF6EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF6F0
  W32(c->r[31]+0x000001DCu,c->r[4]); // 800FF6F4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[30]); // 800FF6F8
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[1]=RF64(ea);} // 800FF6FC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800FF700
  c->r[12]=R32(c->r[12]+0x00000028u); // 800FF704
  {uint32_t ea=c->r[31]+0x000001D8u; c->f[0]=RF64(ea);} // 800FF708
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800FF70C
  c->f[0]=c->ps1[0]=S(c->f[31]/c->f[0]); // 800FF710
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800FF714
  c->ctr=c->r[12]; // 800FF718
  if (true) { c->lr=0x800FF720u; dispatch(c,c->ctr); } // 800FF71C
L_800FF720:;
  c->r[3]=R32(c->r[28]+0x00000B30u); // 800FF720
  cmps(c,0,(int32_t)c->r[3],0); // 800FF724
  if (crb(c,2)) { goto L_800FF748; } // 800FF728
  c->r[0]=R32(c->r[3]+0x00000004u); // 800FF72C
  cmps(c,0,(int32_t)c->r[0],0); // 800FF730
  if (crb(c,2)) { goto L_800FF748; } // 800FF734
  c->r[3]=c->r[28]+0x00000394u; // 800FF738
  c->r[4]=0u+0x00000013u; // 800FF73C
  c->r[5]=0u+0x00000001u; // 800FF740
  c->lr=0x800FF748u; f_800B16D0(c); // 800FF744
L_800FF748:;
  c->r[3]=R32(c->r[28]+0x000009C8u); // 800FF748
  cmps(c,0,(int32_t)c->r[3],0); // 800FF74C
  if (crb(c,2)) { goto L_800FF7D8; } // 800FF750
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF754
  c->r[4]=0u+0x00000000u; // 800FF758
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FF75C
  c->ctr=c->r[12]; // 800FF760
  if (true) { c->lr=0x800FF768u; dispatch(c,c->ctr); } // 800FF764
  cmps(c,0,(int32_t)c->r[3],0); // 800FF768
  if (crb(c,2)) { goto L_800FF7D8; } // 800FF76C
  c->r[3]=R32(c->r[28]+0x000009C8u); // 800FF770
  c->r[27]=0u+0x804D0000u; // 800FF774
  c->r[27]=c->r[27]+0x00003318u; // 800FF778
  c->r[4]=0u+0x00000000u; // 800FF77C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF780
  {uint32_t ea=c->r[27]+0x0000001Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800FF784
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FF788
  {uint32_t ea=c->r[27]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800FF78C
  c->ctr=c->r[12]; // 800FF790
  if (true) { c->lr=0x800FF798u; dispatch(c,c->ctr); } // 800FF794
  c->r[4]=R32(c->r[27]+0x00000028u); // 800FF798
  c->r[0]=0u+0x43300000u; // 800FF79C
  {uint32_t ea=c->r[28]+0x00001748u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF7A0
  c->r[4]=c->r[4]^0x80000000u; // 800FF7A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FF7A8
  W32(c->r[31]+0x000001DCu,c->r[4]); // 800FF7AC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 800FF7B0
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[1]=RF64(ea);} // 800FF7B4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800FF7B8
  c->r[12]=R32(c->r[12]+0x00000028u); // 800FF7BC
  {uint32_t ea=c->r[31]+0x000001D8u; c->f[0]=RF64(ea);} // 800FF7C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800FF7C4
  c->f[0]=c->ps1[0]=S(c->f[30]/c->f[0]); // 800FF7C8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800FF7CC
  c->ctr=c->r[12]; // 800FF7D0
  if (true) { c->lr=0x800FF7D8u; dispatch(c,c->ctr); } // 800FF7D4
L_800FF7D8:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 800FF7D8
  c->r[0]=c->r[28]+0x000008A4u; // 800FF7DC
  cmpu(c,0,c->r[3],c->r[0]); // 800FF7E0
  if (!crb(c,2)) { goto L_800FF814; } // 800FF7E4
  c->r[12]=R32(c->r[28]+0x00000010u); // 800FF7E8
  c->r[3]=c->r[28]|c->r[28]; // 800FF7EC
  c->r[12]=R32(c->r[12]+0x00000338u); // 800FF7F0
  c->ctr=c->r[12]; // 800FF7F4
  if (true) { c->lr=0x800FF7FCu; dispatch(c,c->ctr); } // 800FF7F8
  c->r[12]=R32(c->r[28]+0x000008A4u); // 800FF7FC
  c->r[4]=c->r[3]|c->r[3]; // 800FF800
  c->r[3]=c->r[28]+0x000008A4u; // 800FF804
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FF808
  c->ctr=c->r[12]; // 800FF80C
  if (true) { c->lr=0x800FF814u; dispatch(c,c->ctr); } // 800FF810
L_800FF814:;
  c->r[3]=c->r[28]|c->r[28]; // 800FF814
  c->lr=0x800FF81Cu; f_800CF888(c); // 800FF818
  c->r[0]=R32(c->r[28]+0x00000CA0u); // 800FF81C
  cmps(c,0,(int32_t)c->r[0],0); // 800FF820
  if (crb(c,2)) { goto L_800FFB98; } // 800FF824
  c->r[29]=0u+0x00000000u; // 800FF828
  goto L_800FFB8C; // 800FF82C
L_800FF830:;
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 800FF830
  c->r[0]=0u+0x00010000u; // 800FF834
  c->r[30]=c->r[28]+c->r[3]; // 800FF838
  c->r[3]=R32(c->r[30]+0x00000CB4u); // 800FF83C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800FF840
  if (!crb(c,0)) { goto L_800FFB88; } // 800FF844
  c->r[27]=0u+0x804A0000u; // 800FF848
  c->r[4]=R32(c->r[30]+0x00000CB4u); // 800FF84C
  c->r[3]=c->r[27]+0x0000197Cu; // 800FF850
  c->lr=0x800FF858u; f_80118768(c); // 800FF854
  cmps(c,0,(int32_t)c->r[3],0); // 800FF858
  if (crb(c,2)) { goto L_800FFB88; } // 800FF85C
  c->r[4]=R32(c->r[30]+0x00000CB4u); // 800FF860
  c->r[3]=c->r[27]+0x0000197Cu; // 800FF864
  c->r[5]=c->r[31]+0x00000048u; // 800FF868
  c->lr=0x800FF870u; f_80118430(c); // 800FF86C
  c->r[4]=R32(c->r[30]+0x00000CB4u); // 800FF870
  c->r[3]=c->r[27]+0x0000197Cu; // 800FF874
  c->r[5]=c->r[31]+0x0000003Cu; // 800FF878
  c->lr=0x800FF880u; f_801185CC(c); // 800FF87C
  c->r[3]=c->r[31]+0x00000048u; // 800FF880
  c->lr=0x800FF888u; f_800653A4(c); // 800FF884
  {uint32_t ea=c->r[28]+0x00000C58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF888
  fcmp(c,0,c->f[0],c->f[1]); // 800FF88C
  if (!crb(c,0)) { goto L_800FFB88; } // 800FF890
  c->r[3]=c->r[31]+0x0000003Cu; // 800FF894
  c->lr=0x800FF89Cu; f_800653A4(c); // 800FF898
  {uint32_t ea=c->r[28]+0x00000C5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800FF89C
  fcmp(c,0,c->f[0],c->f[1]); // 800FF8A0
  if (!crb(c,0)) { goto L_800FFB88; } // 800FF8A4
  c->r[4]=R32(c->r[30]+0x00000CB4u); // 800FF8A8
  c->r[3]=c->r[27]+0x0000197Cu; // 800FF8AC
  c->r[25]=0u+0x00000000u; // 800FF8B0
  c->lr=0x800FF8B8u; f_801188C4(c); // 800FF8B4
  c->r[27]=c->r[3]|c->r[3]; // 800FF8B8
  c->r[26]=0u+0x00000000u; // 800FF8BC
  goto L_800FF8F8; // 800FF8C0
L_800FF8C4:;
  c->r[3]=0u+0x804A0000u; // 800FF8C4
  c->r[4]=R32(c->r[30]+0x00000CB4u); // 800FF8C8
  c->r[5]=c->r[26]|c->r[26]; // 800FF8CC
  c->r[6]=c->r[31]+0x00000030u; // 800FF8D0
  c->r[3]=c->r[3]+0x0000197Cu; // 800FF8D4
  c->lr=0x800FF8DCu; f_80118BC0(c); // 800FF8D8
  c->r[3]=c->r[31]+0x00000030u; // 800FF8DC
  c->lr=0x800FF8E4u; f_8018122C(c); // 800FF8E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF8E4
  if (!crb(c,2)) { goto L_800FF8F4; } // 800FF8E8
  c->r[25]=0u+0x00000001u; // 800FF8EC
  goto L_800FF900; // 800FF8F0
L_800FF8F4:;
  c->r[26]=c->r[26]+0x00000001u; // 800FF8F4
L_800FF8F8:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 800FF8F8
  if (crb(c,0)) { IRQCHK(c); goto L_800FF8C4; } // 800FF8FC
L_800FF900:;
  cmps(c,0,(int32_t)c->r[25],0); // 800FF900
  if (crb(c,2)) { goto L_800FFB88; } // 800FF904
  c->r[5]=0u+0x803F0000u; // 800FF908
  c->r[25]=R32(c->r[30]+0x00000CB8u); // 800FF90C
  c->r[27]=0u+0x00000000u; // 800FF910
  c->r[26]=c->r[31]+0x00000174u; // 800FF914
  c->r[5]=c->r[5]+0x00001B28u; // 800FF918
  W32(c->r[31]+0x00000020u,c->r[27]); // 800FF91C
  c->r[3]=c->r[31]+0x00000178u; // 800FF920
  c->r[4]=c->r[31]+0x00000018u; // 800FF924
  W32(c->r[31]+0x00000024u,c->r[27]); // 800FF928
  W32(c->r[31]+0x00000018u,c->r[27]); // 800FF92C
  W32(c->r[31]+0x0000001Cu,c->r[27]); // 800FF930
  W32(c->r[31]+0x00000174u,c->r[5]); // 800FF934
  c->lr=0x800FF93Cu; f_80064C98(c); // 800FF938
  c->r[3]=0u+0x803F0000u; // 800FF93C
  W32(c->r[31]+0x00000180u,c->r[27]); // 800FF940
  c->r[3]=c->r[3]+0x000079D4u; // 800FF944
  c->r[27]=0u+0x00000000u; // 800FF948
  W32(c->r[31]+0x00000174u,c->r[3]); // 800FF94C
  W32(c->r[31]+0x00000188u,c->r[25]); // 800FF950
  goto L_800FF990; // 800FF954
L_800FF958:;
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF958
  c->r[25]=(uint32_t)((int32_t)c->r[27]*(int32_t)12); // 800FF95C
  c->f[2]=c->f[1]; // 800FF960
  c->r[3]=c->r[26]+c->r[25]; // 800FF964
  c->f[3]=c->f[1]; // 800FF968
  c->r[3]=c->r[3]+0x0000001Cu; // 800FF96C
  c->lr=0x800FF974u; f_80065358(c); // 800FF970
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FF974
  c->r[3]=c->r[26]+c->r[25]; // 800FF978
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FF97C
  c->r[3]=c->r[3]+0x00000040u; // 800FF980
  c->f[3]=c->f[1]; // 800FF984
  c->lr=0x800FF98Cu; f_80065358(c); // 800FF988
  c->r[27]=c->r[27]+0x00000001u; // 800FF98C
L_800FF990:;
  cmps(c,0,(int32_t)c->r[27],3); // 800FF990
  if (crb(c,0)) { IRQCHK(c); goto L_800FF958; } // 800FF994
  c->r[0]=0u+0x00000000u; // 800FF998
  c->r[3]=0u+0x804A0000u; // 800FF99C
  W32(c->r[26]+0x00000018u,c->r[0]); // 800FF9A0
  c->r[3]=c->r[3]+0x0000197Cu; // 800FF9A4
  c->r[4]=R32(c->r[30]+0x00000CB4u); // 800FF9A8
  c->lr=0x800FF9B0u; f_801188C4(c); // 800FF9AC
  cmps(c,0,(int32_t)c->r[3],0); // 800FF9B0
  W32(c->r[31]+0x0000018Cu,c->r[3]); // 800FF9B4
  if (!crb(c,1)) { goto L_800FFB88; } // 800FF9B8
  cmps(c,0,(int32_t)c->r[3],3); // 800FF9BC
  if (!crb(c,1)) { goto L_800FF9CC; } // 800FF9C0
  c->r[0]=0u+0x00000003u; // 800FF9C4
  W32(c->r[31]+0x0000018Cu,c->r[0]); // 800FF9C8
L_800FF9CC:;
  c->r[26]=0u+0x00000000u; // 800FF9CC
  goto L_800FFA10; // 800FF9D0
L_800FF9D4:;
  c->r[25]=(uint32_t)((int32_t)c->r[26]*(int32_t)12); // 800FF9D4
  c->r[6]=c->r[31]+0x00000190u; // 800FF9D8
  c->r[27]=0u+0x804A0000u; // 800FF9DC
  c->r[4]=R32(c->r[30]+0x00000CB4u); // 800FF9E0
  c->r[5]=c->r[26]|c->r[26]; // 800FF9E4
  c->r[3]=c->r[27]+0x0000197Cu; // 800FF9E8
  c->r[6]=c->r[6]+c->r[25]; // 800FF9EC
  c->lr=0x800FF9F4u; f_80118A20(c); // 800FF9F0
  c->r[6]=c->r[31]+0x000001B4u; // 800FF9F4
  c->r[4]=R32(c->r[30]+0x00000CB4u); // 800FF9F8
  c->r[5]=c->r[26]|c->r[26]; // 800FF9FC
  c->r[3]=c->r[27]+0x0000197Cu; // 800FFA00
  c->r[6]=c->r[6]+c->r[25]; // 800FFA04
  c->lr=0x800FFA0Cu; f_80118BC0(c); // 800FFA08
  c->r[26]=c->r[26]+0x00000001u; // 800FFA0C
L_800FFA10:;
  c->r[0]=R32(c->r[31]+0x0000018Cu); // 800FFA10
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800FFA14
  if (crb(c,0)) { IRQCHK(c); goto L_800FF9D4; } // 800FFA18
  c->r[4]=R32(c->r[28]+0x00000000u); // 800FFA1C
  c->r[3]=c->r[31]+0x00000028u; // 800FFA20
  c->r[0]=R32(c->r[28]+0x00000004u); // 800FFA24
  W32(c->r[31]+0x00000028u,c->r[4]); // 800FFA28
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 800FFA2C
  c->lr=0x800FFA34u; f_8003F1D4(c); // 800FFA30
  cmps(c,0,(int32_t)c->r[3],0); // 800FFA34
  if (crb(c,2)) { goto L_800FFB88; } // 800FFA38
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800FFA3C
  c->lr=0x800FFA44u; f_802A6EE4(c); // 800FFA40
  cmps(c,0,(int32_t)c->r[3],0); // 800FFA44
  c->r[26]=c->r[3]|c->r[3]; // 800FFA48
  if (crb(c,2)) { goto L_800FFB88; } // 800FFA4C
  if (crb(c,2)) { goto L_800FFAF0; } // 800FFA50
  c->r[30]=0u+0x00000000u; // 800FFA54
  c->r[5]=0u+0x803F0000u; // 800FFA58
  W32(c->r[31]+0x00000010u,c->r[30]); // 800FFA5C
  c->r[5]=c->r[5]+0x00001B28u; // 800FFA60
  c->r[4]=c->r[31]+0x00000010u; // 800FFA64
  W32(c->r[31]+0x00000014u,c->r[30]); // 800FFA68
  W32(c->r[3]+0x00000000u,c->r[5]); // 800FFA6C
  c->r[3]=c->r[3]+0x00000004u; // 800FFA70
  W32(c->r[31]+0x00000068u,c->r[1]); // 800FFA74
  W32(c->r[31]+0x00000008u,c->r[30]); // 800FFA78
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 800FFA7C
  c->lr=0x800FFA84u; f_80064C98(c); // 800FFA80
  c->r[3]=0u+0x803F0000u; // 800FFA84
  W32(c->r[26]+0x0000000Cu,c->r[30]); // 800FFA88
  c->r[3]=c->r[3]+0x000079D4u; // 800FFA8C
  c->r[0]=0u+0xFFFFFFFFu; // 800FFA90
  W32(c->r[26]+0x00000000u,c->r[3]); // 800FFA94
  c->r[25]=0u+0x00000000u; // 800FFA98
  W32(c->r[26]+0x00000010u,c->r[0]); // 800FFA9C
  W32(c->r[26]+0x00000014u,c->r[0]); // 800FFAA0
  goto L_800FFAE0; // 800FFAA4
L_800FFAA8:;
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFAA8
  c->r[27]=(uint32_t)((int32_t)c->r[25]*(int32_t)12); // 800FFAAC
  c->f[2]=c->f[1]; // 800FFAB0
  c->r[3]=c->r[26]+c->r[27]; // 800FFAB4
  c->f[3]=c->f[1]; // 800FFAB8
  c->r[3]=c->r[3]+0x0000001Cu; // 800FFABC
  c->lr=0x800FFAC4u; f_80065358(c); // 800FFAC0
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFAC4
  c->r[3]=c->r[26]+c->r[27]; // 800FFAC8
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[2]=c->ps1[2]=RF32(ea);} // 800FFACC
  c->r[3]=c->r[3]+0x00000040u; // 800FFAD0
  c->f[3]=c->f[1]; // 800FFAD4
  c->lr=0x800FFADCu; f_80065358(c); // 800FFAD8
  c->r[25]=c->r[25]+0x00000001u; // 800FFADC
L_800FFAE0:;
  cmps(c,0,(int32_t)c->r[25],3); // 800FFAE0
  if (crb(c,0)) { IRQCHK(c); goto L_800FFAA8; } // 800FFAE4
  c->r[0]=0u+0x00000000u; // 800FFAE8
  W32(c->r[26]+0x00000018u,c->r[0]); // 800FFAEC
L_800FFAF0:;
  c->r[3]=c->r[26]|c->r[26]; // 800FFAF0
  c->r[4]=c->r[31]+0x00000174u; // 800FFAF4
  c->lr=0x800FFAFCu; f_80064DD8(c); // 800FFAF8
  c->r[0]=R32(c->r[31]+0x00000184u); // 800FFAFC
  c->r[3]=c->r[26]+0x0000001Cu; // 800FFB00
  c->r[4]=c->r[31]+0x00000190u; // 800FFB04
  W32(c->r[26]+0x00000010u,c->r[0]); // 800FFB08
  c->r[0]=R32(c->r[31]+0x00000188u); // 800FFB0C
  W32(c->r[26]+0x00000014u,c->r[0]); // 800FFB10
  c->r[0]=R32(c->r[31]+0x0000018Cu); // 800FFB14
  W32(c->r[26]+0x00000018u,c->r[0]); // 800FFB18
  c->lr=0x800FFB20u; f_8003F468(c); // 800FFB1C
  c->r[3]=c->r[26]+0x00000028u; // 800FFB20
  c->r[4]=c->r[31]+0x0000019Cu; // 800FFB24
  c->lr=0x800FFB2Cu; f_8003F468(c); // 800FFB28
  c->r[3]=c->r[26]+0x00000034u; // 800FFB2C
  c->r[4]=c->r[31]+0x000001A8u; // 800FFB30
  c->lr=0x800FFB38u; f_8003F468(c); // 800FFB34
  c->r[3]=c->r[26]+0x00000040u; // 800FFB38
  c->r[4]=c->r[31]+0x000001B4u; // 800FFB3C
  c->lr=0x800FFB44u; f_8003F468(c); // 800FFB40
  c->r[3]=c->r[26]+0x0000004Cu; // 800FFB44
  c->r[4]=c->r[31]+0x000001C0u; // 800FFB48
  c->lr=0x800FFB50u; f_8003F468(c); // 800FFB4C
  c->r[3]=c->r[26]+0x00000058u; // 800FFB50
  c->r[4]=c->r[31]+0x000001CCu; // 800FFB54
  c->lr=0x800FFB5Cu; f_8003F468(c); // 800FFB58
  c->r[25]=addc(c,c->r[26],0x00000064u,0); cr0(c,c->r[25]); // 800FFB5C
  if (crb(c,2)) { goto L_800FFB74; } // 800FFB60
  W32(c->r[31]+0x00000080u,c->r[1]); // 800FFB64
  c->r[3]=c->r[25]|c->r[25]; // 800FFB68
  c->r[4]=c->r[26]|c->r[26]; // 800FFB6C
  c->lr=0x800FFB74u; f_80064CE8(c); // 800FFB70
L_800FFB74:;
  c->r[3]=c->r[31]+0x00000028u; // 800FFB74
  c->lr=0x800FFB7Cu; f_80068A78(c); // 800FFB78
  c->r[4]=c->r[25]|c->r[25]; // 800FFB7C
  c->r[3]=c->r[3]+0x00000030u; // 800FFB80
  c->lr=0x800FFB88u; f_8003FD14(c); // 800FFB84
L_800FFB88:;
  c->r[29]=c->r[29]+0x00000001u; // 800FFB88
L_800FFB8C:;
  c->r[0]=R32(c->r[28]+0x000011B4u); // 800FFB8C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800FFB90
  if (crb(c,0)) { IRQCHK(c); goto L_800FF830; } // 800FFB94
L_800FFB98:;
  c->r[0]=R32(c->r[28]+0x00000C68u); // 800FFB98
  cmps(c,0,(int32_t)c->r[0],0); // 800FFB9C
  if (crb(c,2)) { goto L_800FFC2C; } // 800FFBA0
  c->r[3]=c->r[28]+0x00000C64u; // 800FFBA4
  c->r[4]=0u+0x00000000u; // 800FFBA8
  c->lr=0x800FFBB0u; f_8014012C(c); // 800FFBAC
  c->r[12]=R32(c->r[28]+0x000009C0u); // 800FFBB0
  c->r[5]=0u+0x803E0000u; // 800FFBB4
  c->r[5]=c->r[5]+0xFFFFC19Cu; // 800FFBB8
  c->r[25]=c->r[3]|c->r[3]; // 800FFBBC
  c->r[12]=R32(c->r[12]+0x00000038u); // 800FFBC0
  c->r[4]=c->r[28]+0x000009C0u; // 800FFBC4
  c->r[3]=c->r[31]+0x00000144u; // 800FFBC8
  c->r[5]=c->r[5]+0x00000021u; // 800FFBCC
  c->ctr=c->r[12]; // 800FFBD0
  if (true) { c->lr=0x800FFBD8u; dispatch(c,c->ctr); } // 800FFBD4
  cmps(c,0,(int32_t)c->r[25],0); // 800FFBD8
  if (crb(c,2)) { goto L_800FFC20; } // 800FFBDC
  c->r[12]=R32(c->r[28]+0x000009C0u); // 800FFBE0
  c->r[4]=c->r[28]+0x000009C0u; // 800FFBE4
  c->r[5]=c->r[25]|c->r[25]; // 800FFBE8
  c->r[3]=c->r[31]+0x000000E4u; // 800FFBEC
  c->r[12]=R32(c->r[12]+0x00000038u); // 800FFBF0
  c->ctr=c->r[12]; // 800FFBF4
  if (true) { c->lr=0x800FFBFCu; dispatch(c,c->ctr); } // 800FFBF8
  c->r[0]=0u+0x00000006u; // 800FFBFC
  c->r[5]=c->r[31]+0x00000140u; // 800FFC00
  c->r[4]=c->r[31]+0x000000E0u; // 800FFC04
  c->ctr=c->r[0]; // 800FFC08
L_800FFC0C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800FFC0C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800FFC10
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FFC14
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800FFC18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FFC0C; } // 800FFC1C
L_800FFC20:;
  c->r[3]=c->r[28]+0x00000C64u; // 800FFC20
  c->r[4]=c->r[31]+0x00000144u; // 800FFC24
  c->lr=0x800FFC2Cu; f_80140184(c); // 800FFC28
L_800FFC2C:;
  c->r[0]=R8(c->r[28]+0x00000C8Cu); // 800FFC2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800FFC30
  if (crb(c,0)) { goto L_800FFCE4; } // 800FFC34
  c->r[3]=c->r[28]+0x00000C80u; // 800FFC38
  c->r[4]=0u+0x00000000u; // 800FFC3C
  c->lr=0x800FFC44u; f_8013F40C(c); // 800FFC40
  cmps(c,0,(int32_t)c->r[3],0); // 800FFC44
  if (crb(c,2)) { goto L_800FFC90; } // 800FFC48
  c->r[12]=R32(c->r[28]+0x000009C0u); // 800FFC4C
  c->r[5]=c->r[3]|c->r[3]; // 800FFC50
  c->r[4]=c->r[28]+0x000009C0u; // 800FFC54
  c->r[3]=c->r[31]+0x000000B4u; // 800FFC58
  c->r[12]=R32(c->r[12]+0x00000038u); // 800FFC5C
  c->ctr=c->r[12]; // 800FFC60
  if (true) { c->lr=0x800FFC68u; dispatch(c,c->ctr); } // 800FFC64
  c->r[0]=0u+0x00000006u; // 800FFC68
  c->r[5]=c->r[31]+0x00000110u; // 800FFC6C
  c->r[4]=c->r[31]+0x000000B0u; // 800FFC70
  c->ctr=c->r[0]; // 800FFC74
L_800FFC78:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800FFC78
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800FFC7C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FFC80
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800FFC84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FFC78; } // 800FFC88
  goto L_800FFCD8; // 800FFC8C
L_800FFC90:;
  c->r[12]=R32(c->r[28]+0x000009C0u); // 800FFC90
  c->r[5]=0u+0x803E0000u; // 800FFC94
  c->r[5]=c->r[5]+0xFFFFC19Cu; // 800FFC98
  c->r[4]=c->r[28]+0x000009C0u; // 800FFC9C
  c->r[12]=R32(c->r[12]+0x00000038u); // 800FFCA0
  c->r[3]=c->r[31]+0x00000084u; // 800FFCA4
  c->r[5]=c->r[5]+0x00000021u; // 800FFCA8
  c->ctr=c->r[12]; // 800FFCAC
  if (true) { c->lr=0x800FFCB4u; dispatch(c,c->ctr); } // 800FFCB0
  c->r[0]=0u+0x00000006u; // 800FFCB4
  c->r[5]=c->r[31]+0x00000110u; // 800FFCB8
  c->r[4]=c->r[31]+0x00000080u; // 800FFCBC
  c->ctr=c->r[0]; // 800FFCC0
L_800FFCC4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800FFCC4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800FFCC8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800FFCCC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800FFCD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FFCC4; } // 800FFCD4
L_800FFCD8:;
  c->r[3]=c->r[28]+0x00000C80u; // 800FFCD8
  c->r[4]=c->r[31]+0x00000114u; // 800FFCDC
  c->lr=0x800FFCE4u; f_8013F414(c); // 800FFCE0
L_800FFCE4:;
  c->r[10]=c->r[31]|c->r[31]; // 800FFCE4
  {uint32_t ea=c->r[10]+0x00000218u; psq_load(c,31,ea,0,0);} // 800FFCE8
  {uint32_t ea=c->r[31]+0x00000210u; c->f[31]=RF64(ea);} // 800FFCEC
  {uint32_t ea=c->r[10]+0x00000208u; psq_load(c,30,ea,0,0);} // 800FFCF0
  c->r[11]=c->r[10]+0x00000200u; // 800FFCF4
  {uint32_t ea=c->r[31]+0x00000200u; c->f[30]=RF64(ea);} // 800FFCF8
  c->lr=0x800FFD00u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FFCFC
  c->r[10]=R32(c->r[1]+0x00000000u); // 800FFD00
  c->r[0]=R32(c->r[10]+0x00000004u); // 800FFD04
  c->r[1]=c->r[10]|c->r[10]; // 800FFD08
  c->lr=c->r[0]; // 800FFD0C
  return; // 800FFD10
}

// fn_800FFD14
void f_800FFD14(Ctx* __restrict c) {
  trace_call(0x800FFD14u);
  c->r[4]=R32(c->r[3]+0x00000B30u); // 800FFD14
  cmps(c,0,(int32_t)c->r[4],0); // 800FFD18
  if (crb(c,2)) { goto L_800FFD34; } // 800FFD1C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800FFD20
  cmps(c,0,(int32_t)c->r[0],0); // 800FFD24
  if (crb(c,2)) { goto L_800FFD34; } // 800FFD28
  c->r[3]=c->r[3]+0x00000B28u; // 800FFD2C
  return; // 800FFD30
L_800FFD34:;
  c->r[3]=c->r[3]+0x000009C0u; // 800FFD34
  return; // 800FFD38
}

// fn_800FFD3C
void f_800FFD3C(Ctx* __restrict c) {
  trace_call(0x800FFD3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD3C
  c->r[0]=c->lr; // 800FFD40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFD44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800FFD48
  c->r[30]=c->r[3]|c->r[3]; // 800FFD4C
  c->r[3]=c->r[4]|c->r[4]; // 800FFD50
  c->r[31]=c->r[5]|c->r[5]; // 800FFD54
  c->r[12]=R32(c->r[4]+0x00000000u); // 800FFD58
  c->r[12]=R32(c->r[12]+0x00000010u); // 800FFD5C
  c->ctr=c->r[12]; // 800FFD60
  if (true) { c->lr=0x800FFD68u; dispatch(c,c->ctr); } // 800FFD64
  cmps(c,0,(int32_t)c->r[3],2); // 800FFD68
  if (crb(c,2)) { goto L_800FFD90; } // 800FFD6C
  c->r[3]=c->r[30]+0x00000C64u; // 800FFD70
  c->lr=0x800FFD78u; f_8013FA28(c); // 800FFD74
  c->r[3]=c->r[30]+0x00000C80u; // 800FFD78
  c->lr=0x800FFD80u; f_8013F1B0(c); // 800FFD7C
  c->r[3]=0u+0x00000002u; // 800FFD80
  c->r[0]=0u+0x00000001u; // 800FFD84
  W32(c->r[31]+0x00000018u,c->r[3]); // 800FFD88
  W32(c->r[31]+0x00000014u,c->r[0]); // 800FFD8C
L_800FFD90:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800FFD90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFD94
  c->lr=c->r[0]; // 800FFD98
  c->r[1]=c->r[1]+0x00000010u; // 800FFD9C
  return; // 800FFDA0
}

// fn_800FFDA4
void f_800FFDA4(Ctx* __restrict c) {
  trace_call(0x800FFDA4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFDA4
  c->r[0]=c->lr; // 800FFDA8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800FFDAC
  c->r[11]=c->r[1]+0x00000070u; // 800FFDB0
  c->lr=0x800FFDB8u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FFDB4
  c->r[31]=c->r[1]|c->r[1]; // 800FFDB8
  c->r[0]=R32(c->r[3]+0x00000B30u); // 800FFDBC
  c->r[29]=c->r[3]|c->r[3]; // 800FFDC0
  c->r[28]=c->r[4]|c->r[4]; // 800FFDC4
  cmps(c,0,(int32_t)c->r[0],0); // 800FFDC8
  if (crb(c,2)) { goto L_800FFED8; } // 800FFDCC
  c->r[3]=R32(c->r[4]+0x00000018u); // 800FFDD0
  cmps(c,0,(int32_t)c->r[3],1); // 800FFDD4
  if (crb(c,2)) { goto L_800FFE00; } // 800FFDD8
  if (!crb(c,0)) { goto L_800FFDEC; } // 800FFDDC
  cmps(c,0,(int32_t)c->r[3],0); // 800FFDE0
  if (!crb(c,0)) { goto L_800FFE0C; } // 800FFDE4
  goto L_800FFED8; // 800FFDE8
L_800FFDEC:;
  cmps(c,0,(int32_t)c->r[3],3); // 800FFDEC
  if (!crb(c,0)) { goto L_800FFED8; } // 800FFDF0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FFDF4
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FFDF8
  goto L_800FFED8; // 800FFDFC
L_800FFE00:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FFE00
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FFE04
  goto L_800FFED8; // 800FFE08
L_800FFE0C:;
  c->r[3]=c->r[0]|c->r[0]; // 800FFE0C
  c->r[4]=0u+0x00000000u; // 800FFE10
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FFE14
  c->r[12]=R32(c->r[12]+0x00000040u); // 800FFE18
  c->ctr=c->r[12]; // 800FFE1C
  if (true) { c->lr=0x800FFE24u; dispatch(c,c->ctr); } // 800FFE20
  c->r[12]=R32(c->r[3]+0x00000000u); // 800FFE24
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FFE28
  c->ctr=c->r[12]; // 800FFE2C
  if (true) { c->lr=0x800FFE34u; dispatch(c,c->ctr); } // 800FFE30
  {uint32_t ea=c->r[29]+0x00000C60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFE34
  fcmp(c,0,c->f[0],c->f[1]); // 800FFE38
  if (!crb(c,0)) { goto L_800FFED8; } // 800FFE3C
  c->r[3]=c->r[31]+0x00000040u; // 800FFE40
  c->r[4]=0u+0x00000000u; // 800FFE44
  c->lr=0x800FFE4Cu; f_800770B8(c); // 800FFE48
  c->r[4]=R32(c->r[29]+0x00000000u); // 800FFE4C
  c->r[3]=c->r[31]+0x00000008u; // 800FFE50
  c->r[0]=R32(c->r[29]+0x00000004u); // 800FFE54
  W32(c->r[31]+0x00000008u,c->r[4]); // 800FFE58
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800FFE5C
  c->lr=0x800FFE64u; f_8003F1D4(c); // 800FFE60
  cmps(c,0,(int32_t)c->r[3],0); // 800FFE64
  if (crb(c,2)) { goto L_800FFED0; } // 800FFE68
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 800FFE6C
  c->lr=0x800FFE74u; f_802A6EE4(c); // 800FFE70
  cmps(c,0,(int32_t)c->r[3],0); // 800FFE74
  c->r[29]=c->r[3]|c->r[3]; // 800FFE78
  if (crb(c,2)) { goto L_800FFED0; } // 800FFE7C
  if (crb(c,2)) { goto L_800FFE90; } // 800FFE80
  W32(c->r[31]+0x00000024u,c->r[1]); // 800FFE84
  c->r[4]=0u+0x00000000u; // 800FFE88
  c->lr=0x800FFE90u; f_800770B8(c); // 800FFE8C
L_800FFE90:;
  c->r[3]=c->r[29]|c->r[29]; // 800FFE90
  c->r[4]=c->r[31]+0x00000040u; // 800FFE94
  c->lr=0x800FFE9Cu; f_80064DD8(c); // 800FFE98
  c->r[0]=R32(c->r[31]+0x00000050u); // 800FFE9C
  c->r[30]=addc(c,c->r[29],0x00000014u,0); cr0(c,c->r[30]); // 800FFEA0
  W32(c->r[29]+0x00000010u,c->r[0]); // 800FFEA4
  if (crb(c,2)) { goto L_800FFEBC; } // 800FFEA8
  W32(c->r[31]+0x0000003Cu,c->r[1]); // 800FFEAC
  c->r[3]=c->r[30]|c->r[30]; // 800FFEB0
  c->r[4]=c->r[29]|c->r[29]; // 800FFEB4
  c->lr=0x800FFEBCu; f_80064CE8(c); // 800FFEB8
L_800FFEBC:;
  c->r[3]=c->r[31]+0x00000008u; // 800FFEBC
  c->lr=0x800FFEC4u; f_80068A78(c); // 800FFEC0
  c->r[4]=c->r[30]|c->r[30]; // 800FFEC4
  c->r[3]=c->r[3]+0x00000030u; // 800FFEC8
  c->lr=0x800FFED0u; f_8003FD14(c); // 800FFECC
L_800FFED0:;
  c->r[0]=0u+0xFFFFFFFFu; // 800FFED0
  W32(c->r[28]+0x00000018u,c->r[0]); // 800FFED4
L_800FFED8:;
  c->r[10]=c->r[31]|c->r[31]; // 800FFED8
  c->r[11]=c->r[10]+0x00000070u; // 800FFEDC
  c->lr=0x800FFEE4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FFEE0
  c->r[10]=R32(c->r[1]+0x00000000u); // 800FFEE4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800FFEE8
  c->r[1]=c->r[10]|c->r[10]; // 800FFEEC
  c->lr=c->r[0]; // 800FFEF0
  return; // 800FFEF4
}

// fn_800FFEF8
void f_800FFEF8(Ctx* __restrict c) {
  trace_call(0x800FFEF8u);
  fcmp(c,0,c->f[3],c->f[2]); // 800FFEF8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800FFEFC
  if (!crb(c,2)) { goto L_800FFF08; } // 800FFF00
  c->f[3]=c->f[2]; // 800FFF04
L_800FFF08:;
  c->f[1]=c->f[3]; // 800FFF08
  return; // 800FFF0C
}

// fn_800FFF10
void f_800FFF10(Ctx* __restrict c) {
  trace_call(0x800FFF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFF10
  c->r[0]=c->lr; // 800FFF14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFF18
  c->r[11]=c->r[1]+0x00000020u; // 800FFF1C
  c->lr=0x800FFF24u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FFF20
  c->r[29]=c->r[3]|c->r[3]; // 800FFF24
  c->r[30]=c->r[4]|c->r[4]; // 800FFF28
  c->r[31]=0u+0x00000000u; // 800FFF2C
  c->lr=0x800FFF34u; f_80291D94(c); // 800FFF30
  c->r[3]=c->r[3]^0x80000000u; // 800FFF34
  c->r[0]=0u+0x43300000u; // 800FFF38
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800FFF3C
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[3]=RF64(ea);} // 800FFF40
  W32(c->r[1]+0x00000008u,c->r[0]); // 800FFF44
  {uint32_t ea=c->r[2]+0xFFFF92E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800FFF48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800FFF4C
  {uint32_t ea=c->r[2]+0xFFFF9258u; c->f[0]=c->ps1[0]=RF32(ea);} // 800FFF50
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800FFF54
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800FFF58
  fcmp(c,0,c->f[1],c->f[0]); // 800FFF5C
  if (!crb(c,1)) { goto L_800FFF68; } // 800FFF60
  c->r[31]=0u+0x00000001u; // 800FFF64
L_800FFF68:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800FFF68
  c->r[3]=c->r[30]|c->r[30]; // 800FFF6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FFF70
  c->ctr=c->r[12]; // 800FFF74
  if (true) { c->lr=0x800FFF7Cu; dispatch(c,c->ctr); } // 800FFF78
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800FFF7C
  if (crb(c,2)) { goto L_800FFFF4; } // 800FFF80
  c->r[3]=R32(c->r[29]+0x00000AE4u); // 800FFF84
  cmps(c,0,(int32_t)c->r[3],0); // 800FFF88
  if (crb(c,2)) { goto L_800FFFBC; } // 800FFF8C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FFF90
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800FFF94
  if (crb(c,2)) { goto L_800FFFBC; } // 800FFF98
  c->r[12]=R32(c->r[29]+0x00000010u); // 800FFF9C
  c->r[3]=c->r[29]|c->r[29]; // 800FFFA0
  c->r[4]=c->r[30]|c->r[30]; // 800FFFA4
  c->r[6]=c->r[31]|c->r[31]; // 800FFFA8
  c->r[12]=R32(c->r[12]+0x00000344u); // 800FFFAC
  c->r[5]=0u+0x00000000u; // 800FFFB0
  c->ctr=c->r[12]; // 800FFFB4
  if (true) { c->lr=0x800FFFBCu; dispatch(c,c->ctr); } // 800FFFB8
L_800FFFBC:;
  c->r[3]=R32(c->r[29]+0x00000AE0u); // 800FFFBC
  cmps(c,0,(int32_t)c->r[3],0); // 800FFFC0
  if (crb(c,2)) { goto L_800FFFF4; } // 800FFFC4
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FFFC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800FFFCC
  if (crb(c,2)) { goto L_800FFFF4; } // 800FFFD0
  c->r[12]=R32(c->r[29]+0x00000010u); // 800FFFD4
  c->r[3]=c->r[29]|c->r[29]; // 800FFFD8
  c->r[4]=c->r[30]|c->r[30]; // 800FFFDC
  c->r[6]=c->r[31]|c->r[31]; // 800FFFE0
  c->r[12]=R32(c->r[12]+0x00000348u); // 800FFFE4
  c->r[5]=0u+0x00000000u; // 800FFFE8
  c->ctr=c->r[12]; // 800FFFEC
  if (true) { c->lr=0x800FFFF4u; dispatch(c,c->ctr); } // 800FFFF0
L_800FFFF4:;
  c->r[11]=c->r[1]+0x00000020u; // 800FFFF4
  c->lr=0x800FFFFCu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FFFF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFFFC
  c->lr=c->r[0]; // 80100000
  c->r[1]=c->r[1]+0x00000020u; // 80100004
  return; // 80100008
}

// fn_8010000C
void f_8010000C(Ctx* __restrict c) {
  trace_call(0x8010000Cu);
  {uint32_t ea=c->r[1]+0xFFFFE600u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010000C
  c->r[0]=c->lr; // 80100010
  W32(c->r[1]+0x00001A04u,c->r[0]); // 80100014
  c->r[0]=0u+0x000019F8u; // 80100018
  {uint32_t ea=c->r[1]+0x000019F0u; WF64(ea,c->f[31]);} // 8010001C
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 80100020
  c->r[11]=c->r[1]+0x000019F0u; // 80100024
  c->lr=0x8010002Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80100028
  c->r[31]=c->r[1]|c->r[1]; // 8010002C
  c->r[28]=c->r[5]|c->r[5]; // 80100030
  c->r[27]=c->r[3]|c->r[3]; // 80100034
  c->r[12]=R32(c->r[28]+0x00000000u); // 80100038
  c->r[3]=c->r[28]|c->r[28]; // 8010003C
  c->r[29]=c->r[4]|c->r[4]; // 80100040
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80100044
  c->ctr=c->r[12]; // 80100048
  if (true) { c->lr=0x80100050u; dispatch(c,c->ctr); } // 8010004C
  cmps(c,0,(int32_t)c->r[3],21); // 80100050
  if (crb(c,2)) { goto L_801000BC; } // 80100054
  if (!crb(c,0)) { goto L_80100080; } // 80100058
  cmps(c,0,(int32_t)c->r[3],5); // 8010005C
  if (crb(c,2)) { goto L_801011BC; } // 80100060
  if (!crb(c,0)) { goto L_80100074; } // 80100064
  cmps(c,0,(int32_t)c->r[3],3); // 80100068
  if (crb(c,2)) { goto L_801011BC; } // 8010006C
  goto L_801000A8; // 80100070
L_80100074:;
  cmps(c,0,(int32_t)c->r[3],19); // 80100074
  if (crb(c,2)) { goto L_801000CC; } // 80100078
  goto L_801000A8; // 8010007C
L_80100080:;
  cmps(c,0,(int32_t)c->r[3],1031); // 80100080
  if (crb(c,2)) { goto L_801006D8; } // 80100084
  if (!crb(c,0)) { goto L_801000A0; } // 80100088
  cmps(c,0,(int32_t)c->r[3],1030); // 8010008C
  if (!crb(c,0)) { goto L_801000A8; } // 80100090
  cmps(c,0,(int32_t)c->r[3],1025); // 80100094
  if (!crb(c,0)) { goto L_801006D8; } // 80100098
  goto L_801000A8; // 8010009C
L_801000A0:;
  cmps(c,0,(int32_t)c->r[3],1033); // 801000A0
  if (crb(c,2)) { goto L_801006D8; } // 801000A4
L_801000A8:;
  c->r[3]=c->r[27]|c->r[27]; // 801000A8
  c->r[4]=c->r[29]|c->r[29]; // 801000AC
  c->r[5]=c->r[28]|c->r[28]; // 801000B0
  c->lr=0x801000B8u; f_800CFFB0(c); // 801000B4
  goto L_801011BC; // 801000B8
L_801000BC:;
  c->r[4]=R32(c->r[28]+0x00000010u); // 801000BC
  c->r[3]=c->r[27]+0x00000CA4u; // 801000C0
  c->lr=0x801000C8u; f_800FC264(c); // 801000C4
  goto L_801011BC; // 801000C8
L_801000CC:;
  c->r[3]=R32(c->r[27]+0x00000B30u); // 801000CC
  cmps(c,0,(int32_t)c->r[3],0); // 801000D0
  if (crb(c,2)) { goto L_801000E4; } // 801000D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801000D8
  cmps(c,0,(int32_t)c->r[0],0); // 801000DC
  if (!crb(c,2)) { goto L_801011BC; } // 801000E0
L_801000E4:;
  c->r[3]=R32(c->r[27]+0x000009C8u); // 801000E4
  cmps(c,0,(int32_t)c->r[3],0); // 801000E8
  if (crb(c,2)) { goto L_801011BC; } // 801000EC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801000F0
  cmps(c,0,(int32_t)c->r[0],0); // 801000F4
  if (crb(c,2)) { goto L_801011BC; } // 801000F8
  c->r[3]=c->r[27]+0x00000394u; // 801000FC
  c->r[4]=0u+0x00000004u; // 80100100
  c->lr=0x80100108u; f_80076DD4(c); // 80100104
  cmps(c,0,(int32_t)c->r[3],0); // 80100108
  if (!crb(c,2)) { goto L_801011BC; } // 8010010C
  c->r[3]=c->r[27]+0x00000394u; // 80100110
  c->r[4]=0u+0x00000013u; // 80100114
  c->r[5]=0u+0x00000001u; // 80100118
  c->lr=0x80100120u; f_800B16D0(c); // 8010011C
  c->r[3]=c->r[27]+0x00000394u; // 80100120
  c->r[4]=0u+0x00000004u; // 80100124
  c->r[5]=0u+0x00000001u; // 80100128
  c->lr=0x80100130u; f_800B16D0(c); // 8010012C
  c->r[3]=c->r[27]+0x00000394u; // 80100130
  c->r[4]=0u+0x00000002u; // 80100134
  c->r[5]=0u+0x00000001u; // 80100138
  c->lr=0x80100140u; f_800B16D0(c); // 8010013C
  c->r[12]=R32(c->r[27]+0x00000010u); // 80100140
  c->r[3]=c->r[27]|c->r[27]; // 80100144
  c->r[12]=R32(c->r[12]+0x00000338u); // 80100148
  c->ctr=c->r[12]; // 8010014C
  if (true) { c->lr=0x80100154u; dispatch(c,c->ctr); } // 80100150
  c->r[30]=R32(c->r[3]+0x00000008u); // 80100154
  cmps(c,0,(int32_t)c->r[30],0); // 80100158
  if (crb(c,2)) { goto L_801011BC; } // 8010015C
  c->r[0]=R32(c->r[30]+0x000000E8u); // 80100160
  c->r[3]=c->r[31]+0x000000B0u; // 80100164
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 80100168
  W32(c->r[31]+0x000000B0u,c->r[0]); // 8010016C
  c->lr=0x80100174u; f_800CF64C(c); // 80100170
  c->r[6]=0u+0x803E0000u; // 80100174
  c->r[4]=c->r[3]|c->r[3]; // 80100178
  c->r[6]=c->r[6]+0xFFFFC19Cu; // 8010017C
  c->r[3]=c->r[31]+0x00000338u; // 80100180
  c->r[5]=c->r[28]+0x00000010u; // 80100184
  c->r[6]=c->r[6]+0x0000003Au; // 80100188
  c->lr=0x80100190u; f_800FACD0(c); // 8010018C
  c->r[3]=c->r[31]+0x000000B0u; // 80100190
  c->lr=0x80100198u; f_80365B10(c); // 80100194
  W32(c->r[31]+0x00000088u,c->r[3]); // 80100198
  c->r[4]=c->r[31]+0x00000338u; // 8010019C
  W32(c->r[31]+0x000000ACu,c->r[3]); // 801001A0
  c->r[3]=c->r[31]+0x000000ACu; // 801001A4
  c->lr=0x801001ACu; f_80363DF0(c); // 801001A8
  cmps(c,0,(int32_t)c->r[3],0); // 801001AC
  W32(c->r[31]+0x00000084u,c->r[3]); // 801001B0
  W32(c->r[31]+0x000000A8u,c->r[3]); // 801001B4
  if (!crb(c,2)) { goto L_80100354; } // 801001B8
  c->r[3]=c->r[31]+0x000000B0u; // 801001BC
  c->lr=0x801001C4u; f_800CF64C(c); // 801001C0
  goto L_801001CC; // 801001C4
L_801001C8:;
  c->r[3]=c->r[3]+0x00000001u; // 801001C8
L_801001CC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801001CC
  cmps(c,0,(int32_t)c->r[0],95); // 801001D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801001C8; } // 801001D4
  c->r[6]=0u+0x00000000u; // 801001D8
  goto L_801001FC; // 801001DC
L_801001E0:;
  c->r[4]=c->r[3]+c->r[6]; // 801001E0
  c->r[5]=c->r[31]+0x00000250u; // 801001E4
  c->r[4]=R8(c->r[4]+0x00000001u); // 801001E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801001EC
  W8(c->r[5]+c->r[6],c->r[4]); // 801001F0
  if (crb(c,2)) { goto L_8010020C; } // 801001F4
  c->r[6]=c->r[6]+0x00000001u; // 801001F8
L_801001FC:;
  cmps(c,0,(int32_t)c->r[6],32); // 801001FC
  if (crb(c,0)) { IRQCHK(c); goto L_801001E0; } // 80100200
  goto L_8010020C; // 80100204
L_80100208:;
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80100208
L_8010020C:;
  c->r[3]=c->r[31]+0x00000250u; // 8010020C
  c->r[3]=c->r[3]+c->r[6]; // 80100210
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80100214
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80100218
  cmps(c,0,(int32_t)c->r[0],76); // 8010021C
  if (crb(c,2)) { goto L_8010022C; } // 80100220
  cmps(c,0,(int32_t)c->r[0],82); // 80100224
  if (!crb(c,2)) { IRQCHK(c); goto L_80100208; } // 80100228
L_8010022C:;
  c->r[0]=0u+0x00000000u; // 8010022C
  c->r[29]=0u+0x803E0000u; // 80100230
  c->r[29]=c->r[29]+0xFFFFC19Cu; // 80100234
  W8(c->r[3]+0x00000000u,c->r[0]); // 80100238
  c->r[3]=c->r[31]+0x00000338u; // 8010023C
  c->r[5]=c->r[31]+0x00000250u; // 80100240
  c->r[4]=c->r[29]+0x0000003Cu; // 80100244
  c->r[6]=c->r[29]+0x00000042u; // 80100248
  c->lr=0x80100250u; f_800FACD0(c); // 8010024C
  c->r[3]=c->r[31]+0x00000338u; // 80100250
  c->r[5]=c->r[29]+0x00000044u; // 80100254
  c->r[4]=c->r[3]|c->r[3]; // 80100258
  c->r[6]=c->r[29]+0x00000048u; // 8010025C
  c->lr=0x80100264u; f_800FACD0(c); // 80100260
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80100264
  c->r[4]=c->r[31]+0x00000338u; // 80100268
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010026C
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80100270
  c->ctr=c->r[12]; // 80100274
  if (true) { c->lr=0x8010027Cu; dispatch(c,c->ctr); } // 80100278
  cmps(c,0,(int32_t)c->r[3],0); // 8010027C
  if (crb(c,2)) { goto L_801011BC; } // 80100280
  c->r[4]=c->r[3]|c->r[3]; // 80100284
  c->r[3]=c->r[31]+0x000003C0u; // 80100288
  c->lr=0x80100290u; f_801328F8(c); // 8010028C
  c->r[3]=c->r[31]+0x00000230u; // 80100290
  c->r[4]=c->r[31]+0x00000250u; // 80100294
  c->r[5]=c->r[29]+0x0000004Au; // 80100298
  c->r[6]=c->r[29]+0x00000048u; // 8010029C
  c->lr=0x801002A4u; f_800FACD0(c); // 801002A0
  c->r[3]=c->r[31]+0x000003C0u; // 801002A4
  c->r[4]=c->r[31]+0x00000230u; // 801002A8
  c->lr=0x801002B0u; f_80132AE0(c); // 801002AC
  cmps(c,0,(int32_t)c->r[3],0); // 801002B0
  if (!crb(c,2)) { goto L_801002CC; } // 801002B4
  c->r[0]=0u+0xFFFFFFFFu; // 801002B8
  c->r[3]=c->r[31]+0x000003C0u; // 801002BC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801002C0
  c->lr=0x801002C8u; f_80132958(c); // 801002C4
  goto L_801011BC; // 801002C8
L_801002CC:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801002CC
  W32(c->r[31]+0x000000A4u,c->r[3]); // 801002D0
  if (crb(c,2)) { goto L_801002F4; } // 801002D4
  c->r[3]=0u+0x803F0000u; // 801002D8
  c->r[5]=0u+0x803F0000u; // 801002DC
  c->r[3]=c->r[3]+0x00001D4Fu; // 801002E0
  c->r[4]=0u+0x0000003Cu; // 801002E4
  c->r[5]=c->r[5]+0x00001D28u; // 801002E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801002EC
  c->lr=0x801002F4u; f_803444BC(c); // 801002F0
L_801002F4:;
  c->r[3]=c->r[31]+0x000000A4u; // 801002F4
  c->lr=0x801002FCu; f_80364F00(c); // 801002F8
  c->r[0]=R32(c->r[31]+0x000000A4u); // 801002FC
  c->r[3]=c->r[31]+0x000000A4u; // 80100300
  c->r[4]=c->r[31]+0x00000034u; // 80100304
  W32(c->r[31]+0x00000034u,c->r[0]); // 80100308
  c->lr=0x80100310u; f_80364CCC(c); // 8010030C
  c->r[3]=c->r[31]+0x000000A4u; // 80100310
  c->r[4]=c->r[28]+0x00000010u; // 80100314
  c->lr=0x8010031Cu; f_80363DF0(c); // 80100318
  c->r[0]=0u+0xFFFFFFFFu; // 8010031C
  W32(c->r[31]+0x00000080u,c->r[3]); // 80100320
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80100324
  W32(c->r[31]+0x000000A8u,c->r[3]); // 80100328
  c->r[3]=c->r[31]+0x000003C0u; // 8010032C
  c->lr=0x80100334u; f_80132958(c); // 80100330
  c->r[12]=R32(c->r[30]+0x00000000u); // 80100334
  c->r[4]=0u+0x00020000u; // 80100338
  c->r[3]=c->r[30]|c->r[30]; // 8010033C
  c->r[5]=0u+0x00000001u; // 80100340
  c->r[12]=R32(c->r[12]+0x00000020u); // 80100344
  c->r[4]=c->r[4]+0x00000001u; // 80100348
  c->ctr=c->r[12]; // 8010034C
  if (true) { c->lr=0x80100354u; dispatch(c,c->ctr); } // 80100350
L_80100354:;
  c->r[3]=R32(c->r[31]+0x000000B0u); // 80100354
  c->r[4]=c->r[31]+0x000000A0u; // 80100358
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8010035C
  c->r[5]=c->r[31]+0x0000007Cu; // 80100360
  W32(c->r[31]+0x00000078u,c->r[3]); // 80100364
  c->r[6]=c->r[31]+0x00000078u; // 80100368
  c->r[7]=0u+0x00000000u; // 8010036C
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 80100370
  c->r[3]=R32(c->r[27]+0x00000014u); // 80100374
  c->lr=0x8010037Cu; f_80370408(c); // 80100378
  c->r[0]=R32(c->r[31]+0x000000B0u); // 8010037C
  c->r[29]=c->r[3]|c->r[3]; // 80100380
  c->r[4]=c->r[31]+0x00000074u; // 80100384
  W32(c->r[31]+0x00000074u,c->r[0]); // 80100388
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010038C
  c->r[12]=R32(c->r[12]+0x00000030u); // 80100390
  c->ctr=c->r[12]; // 80100394
  if (true) { c->lr=0x8010039Cu; dispatch(c,c->ctr); } // 80100398
  c->r[3]=0u+0x80100000u; // 8010039C
  c->r[4]=0u+0x00000001u; // 801003A0
  c->r[3]=c->r[3]+0xFFFFFEF8u; // 801003A4
  c->r[5]=0u+0x00000001u; // 801003A8
  c->r[10]=rotl(c->r[3],0)&0xFF000000u; // 801003AC
  c->r[6]=0u+0x00000001u; // 801003B0
  c->r[0]=c->r[10]+0x80000000u; // 801003B4
  c->r[7]=0u+0x00000001u; // 801003B8
  cmpu(c,0,c->r[0],0x00000000u); // 801003BC
  c->r[8]=0u+0x00000001u; // 801003C0
  c->r[9]=0u+0x00000001u; // 801003C4
  if (crb(c,2)) { goto L_801003E0; } // 801003C8
  c->r[3]=rotl(c->r[3],0)&0xFF800000u; // 801003CC
  c->r[0]=c->r[3]+0x7F000000u; // 801003D0
  cmpu(c,0,c->r[0],0x00000000u); // 801003D4
  if (crb(c,2)) { goto L_801003E0; } // 801003D8
  c->r[9]=0u+0x00000000u; // 801003DC
L_801003E0:;
  cmps(c,0,(int32_t)c->r[9],0); // 801003E0
  if (!crb(c,2)) { goto L_80100404; } // 801003E4
  c->r[3]=0u+0x80100000u; // 801003E8
  c->r[3]=c->r[3]+0xFFFFFEF8u; // 801003EC
  c->r[3]=rotl(c->r[3],0)&0xF8000000u; // 801003F0
  c->r[0]=c->r[3]+0x70000000u; // 801003F4
  cmpu(c,0,c->r[0],0x00000000u); // 801003F8
  if (crb(c,2)) { goto L_80100404; } // 801003FC
  c->r[8]=0u+0x00000000u; // 80100400
L_80100404:;
  cmps(c,0,(int32_t)c->r[8],0); // 80100404
  if (!crb(c,2)) { goto L_8010041C; } // 80100408
  c->r[0]=c->r[10]+0x40000000u; // 8010040C
  cmpu(c,0,c->r[0],0x00000000u); // 80100410
  if (crb(c,2)) { goto L_8010041C; } // 80100414
  c->r[7]=0u+0x00000000u; // 80100418
L_8010041C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8010041C
  if (!crb(c,2)) { goto L_80100440; } // 80100420
  c->r[3]=0u+0x80100000u; // 80100424
  c->r[3]=c->r[3]+0xFFFFFEF8u; // 80100428
  c->r[3]=rotl(c->r[3],0)&0xFF800000u; // 8010042C
  c->r[0]=c->r[3]+0x3F000000u; // 80100430
  cmpu(c,0,c->r[0],0x00000000u); // 80100434
  if (crb(c,2)) { goto L_80100440; } // 80100438
  c->r[6]=0u+0x00000000u; // 8010043C
L_80100440:;
  cmps(c,0,(int32_t)c->r[6],0); // 80100440
  if (!crb(c,2)) { goto L_80100464; } // 80100444
  c->r[3]=0u+0x80100000u; // 80100448
  c->r[3]=c->r[3]+0xFFFFFEF8u; // 8010044C
  c->r[3]=rotl(c->r[3],0)&0xF8000000u; // 80100450
  c->r[0]=c->r[3]+0x30000000u; // 80100454
  cmpu(c,0,c->r[0],0x00000000u); // 80100458
  if (crb(c,2)) { goto L_80100464; } // 8010045C
  c->r[5]=0u+0x00000000u; // 80100460
L_80100464:;
  cmps(c,0,(int32_t)c->r[5],0); // 80100464
  if (!crb(c,2)) { goto L_80100488; } // 80100468
  c->r[3]=0u+0x80100000u; // 8010046C
  c->r[3]=c->r[3]+0xFFFFFEF8u; // 80100470
  c->r[3]=rotl(c->r[3],0)&0xFFFFC000u; // 80100474
  c->r[0]=c->r[3]+0x20000000u; // 80100478
  cmpu(c,0,c->r[0],0x00000000u); // 8010047C
  if (crb(c,2)) { goto L_80100488; } // 80100480
  c->r[4]=0u+0x00000000u; // 80100484
L_80100488:;
  cmps(c,0,(int32_t)c->r[4],0); // 80100488
  if (!crb(c,2)) { goto L_801004B4; } // 8010048C
  c->r[3]=0u+0x803F0000u; // 80100490
  c->r[5]=0u+0x803F0000u; // 80100494
  c->r[6]=0u+0x80100000u; // 80100498
  c->r[4]=0u+0x0000005Fu; // 8010049C
  c->r[3]=c->r[3]+0x00001584u; // 801004A0
  c->r[5]=c->r[5]+0x00001550u; // 801004A4
  c->r[6]=c->r[6]+0xFFFFFEF8u; // 801004A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801004AC
  c->lr=0x801004B4u; f_803444BC(c); // 801004B0
L_801004B4:;
  c->r[4]=0u+0x80100000u; // 801004B4
  {uint32_t ea=c->r[28]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801004B8
  c->r[4]=c->r[4]+0xFFFFFEF8u; // 801004BC
  c->r[3]=c->r[29]|c->r[29]; // 801004C0
  W32(c->r[29]+0x00000028u,c->r[4]); // 801004C4
  c->f[1]=c->ps1[1]=S(c->f[0]); // 801004C8
  {uint32_t ea=c->r[27]+0x00001748u; WF32(ea,c->f[0]);} // 801004CC
  c->r[12]=R32(c->r[29]+0x00000000u); // 801004D0
  c->r[12]=R32(c->r[12]+0x00000028u); // 801004D4
  c->ctr=c->r[12]; // 801004D8
  if (true) { c->lr=0x801004E0u; dispatch(c,c->ctr); } // 801004DC
  c->r[12]=R32(c->r[30]+0x00000000u); // 801004E0
  c->r[3]=c->r[30]|c->r[30]; // 801004E4
  c->r[4]=c->r[29]|c->r[29]; // 801004E8
  c->r[5]=0u+0x00000006u; // 801004EC
  c->r[12]=R32(c->r[12]+0x00000034u); // 801004F0
  c->ctr=c->r[12]; // 801004F4
  if (true) { c->lr=0x801004FCu; dispatch(c,c->ctr); } // 801004F8
  c->r[0]=R8(c->r[28]+0x00000030u); // 801004FC
  cmps(c,0,(int32_t)c->r[0],0); // 80100500
  if (!crb(c,2)) { goto L_80100694; } // 80100504
  c->r[3]=R32(c->r[27]+0x00000AF0u); // 80100508
  cmps(c,0,(int32_t)c->r[3],0); // 8010050C
  if (crb(c,2)) { goto L_801005AC; } // 80100510
  c->r[0]=R8(c->r[3]+0x00000000u); // 80100514
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80100518
  if (crb(c,2)) { goto L_801005AC; } // 8010051C
  c->r[12]=R32(c->r[27]+0x00000010u); // 80100520
  c->r[3]=c->r[27]|c->r[27]; // 80100524
  c->r[12]=R32(c->r[12]+0x00000338u); // 80100528
  c->ctr=c->r[12]; // 8010052C
  if (true) { c->lr=0x80100534u; dispatch(c,c->ctr); } // 80100530
  c->r[4]=c->r[3]|c->r[3]; // 80100534
  c->r[3]=c->r[31]+0x000002D0u; // 80100538
  c->r[12]=R32(c->r[4]+0x00000000u); // 8010053C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80100540
  c->ctr=c->r[12]; // 80100544
  if (true) { c->lr=0x8010054Cu; dispatch(c,c->ctr); } // 80100548
  c->r[3]=c->r[31]+0x00000138u; // 8010054C
  c->r[4]=c->r[31]+0x000002D0u; // 80100550
  c->lr=0x80100558u; f_80032FD8(c); // 80100554
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100558
  c->r[28]=0u+0x80460000u; // 8010055C
  c->r[8]=R32(c->r[31]+0x00000138u); // 80100560
  c->r[3]=c->r[28]+0xFFFFD4F0u; // 80100564
  c->r[7]=R32(c->r[31]+0x0000013Cu); // 80100568
  c->f[2]=c->f[1]; // 8010056C
  c->r[4]=R32(c->r[27]+0x00000AF0u); // 80100570
  c->r[5]=c->r[31]+0x000000FCu; // 80100574
  c->r[0]=R32(c->r[31]+0x00000140u); // 80100578
  c->r[6]=0u+0xFFFFFFFFu; // 8010057C
  W32(c->r[31]+0x00000144u,c->r[8]); // 80100580
  W32(c->r[31]+0x00000148u,c->r[7]); // 80100584
  W32(c->r[31]+0x0000014Cu,c->r[0]); // 80100588
  W32(c->r[31]+0x000000FCu,c->r[8]); // 8010058C
  W32(c->r[31]+0x00000100u,c->r[7]); // 80100590
  W32(c->r[31]+0x00000104u,c->r[0]); // 80100594
  c->lr=0x8010059Cu; f_8004AD54(c); // 80100598
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010059C
  c->r[4]=c->r[3]|c->r[3]; // 801005A0
  c->r[3]=c->r[28]+0xFFFFD4F0u; // 801005A4
  c->lr=0x801005ACu; f_8004B4F8(c); // 801005A8
L_801005AC:;
  c->r[3]=R32(c->r[27]+0x00000AF4u); // 801005AC
  cmps(c,0,(int32_t)c->r[3],0); // 801005B0
  if (crb(c,2)) { goto L_801011BC; } // 801005B4
  c->r[0]=R8(c->r[3]+0x00000000u); // 801005B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801005BC
  if (crb(c,2)) { goto L_801011BC; } // 801005C0
  c->r[0]=R8(c->r[13]+0xFFFF93A0u); // 801005C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801005C8
  if (!crb(c,2)) { goto L_801005FC; } // 801005CC
  c->r[28]=0u+0x80450000u; // 801005D0
  c->r[3]=c->r[28]+0xFFFFA1C0u; // 801005D4
  c->lr=0x801005DCu; f_8013CA64(c); // 801005D8
  c->r[4]=0u+0x80140000u; // 801005DC
  c->r[5]=0u+0x80490000u; // 801005E0
  c->r[3]=c->r[28]+0xFFFFA1C0u; // 801005E4
  c->r[4]=c->r[4]+0xFFFFCB04u; // 801005E8
  c->r[5]=c->r[5]+0xFFFFE44Cu; // 801005EC
  c->lr=0x801005F4u; f_802895A4(c); // 801005F0
  c->r[0]=0u+0x00000001u; // 801005F4
  W8(c->r[13]+0xFFFF93A0u,c->r[0]); // 801005F8
L_801005FC:;
  c->r[4]=0u+0x80450000u; // 801005FC
  c->r[5]=R32(c->r[27]+0x00000AF4u); // 80100600
  c->r[3]=c->r[31]+0x00000378u; // 80100604
  c->r[6]=0u+0x00000001u; // 80100608
  c->r[4]=c->r[4]+0xFFFFA1C0u; // 8010060C
  c->lr=0x80100614u; f_8013DB40(c); // 80100610
  c->r[3]=c->r[31]+0x00000378u; // 80100614
  c->lr=0x8010061Cu; f_80146F08(c); // 80100618
  cmps(c,0,(int32_t)c->r[3],0); // 8010061C
  if (crb(c,2)) { goto L_801011BC; } // 80100620
  c->r[12]=R32(c->r[27]+0x00000010u); // 80100624
  c->r[3]=c->r[27]|c->r[27]; // 80100628
  c->r[12]=R32(c->r[12]+0x00000338u); // 8010062C
  c->ctr=c->r[12]; // 80100630
  if (true) { c->lr=0x80100638u; dispatch(c,c->ctr); } // 80100634
  c->r[4]=c->r[3]|c->r[3]; // 80100638
  c->r[3]=c->r[31]+0x000002A0u; // 8010063C
  c->r[12]=R32(c->r[4]+0x00000000u); // 80100640
  c->r[12]=R32(c->r[12]+0x00000040u); // 80100644
  c->ctr=c->r[12]; // 80100648
  if (true) { c->lr=0x80100650u; dispatch(c,c->ctr); } // 8010064C
  c->r[0]=0u+0x00000006u; // 80100650
  c->r[5]=c->r[31]+0x00000374u; // 80100654
  c->r[4]=c->r[31]+0x0000029Cu; // 80100658
  c->ctr=c->r[0]; // 8010065C
L_80100660:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80100660
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80100664
  W32(c->r[5]+0x00000004u,c->r[3]); // 80100668
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8010066C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80100660; } // 80100670
  c->r[12]=R32(c->r[31]+0x000003A8u); // 80100674
  c->r[3]=c->r[31]+0x00000378u; // 80100678
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010067C
  c->ctr=c->r[12]; // 80100680
  if (true) { c->lr=0x80100688u; dispatch(c,c->ctr); } // 80100684
  c->r[3]=c->r[31]+0x00000378u; // 80100688
  c->lr=0x80100690u; f_80146A94(c); // 8010068C
  goto L_801011BC; // 80100690
L_80100694:;
  c->r[3]=c->r[31]+0x000000A8u; // 80100694
  c->lr=0x8010069Cu; f_800FF430(c); // 80100698
  c->r[3]=c->r[3]^0x80000000u; // 8010069C
  c->r[0]=0u+0x43300000u; // 801006A0
  W32(c->r[31]+0x000019CCu,c->r[3]); // 801006A4
  c->r[3]=c->r[29]|c->r[29]; // 801006A8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801006AC
  W32(c->r[31]+0x000019C8u,c->r[0]); // 801006B0
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[2]=RF64(ea);} // 801006B4
  {uint32_t ea=c->r[31]+0x000019C8u; c->f[1]=RF64(ea);} // 801006B8
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[0]=c->ps1[0]=RF32(ea);} // 801006BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801006C0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801006C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801006C8
  c->ctr=c->r[12]; // 801006CC
  if (true) { c->lr=0x801006D4u; dispatch(c,c->ctr); } // 801006D0
  goto L_801011BC; // 801006D4
L_801006D8:;
  c->r[3]=R32(c->r[27]+0x00000874u); // 801006D8
  c->r[29]=0u+0xFFFFFFFFu; // 801006DC
  c->r[0]=R32(c->r[28]+0x00000014u); // 801006E0
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 801006E4
  c->r[3]=c->r[3]+0x00000001u; // 801006E8
  cmps(c,0,(int32_t)c->r[0],0); // 801006EC
  W32(c->r[27]+0x00000874u,c->r[3]); // 801006F0
  {uint32_t ea=c->r[27]+0x00000870u; WF32(ea,c->f[1]);} // 801006F4
  if (!crb(c,1)) { goto L_80100770; } // 801006F8
  c->f[2]=c->f[1]; // 801006FC
  c->r[3]=c->r[31]+0x0000012Cu; // 80100700
  c->f[3]=c->f[1]; // 80100704
  c->lr=0x8010070Cu; f_800521A0(c); // 80100708
  c->r[5]=R32(c->r[28]+0x00000014u); // 8010070C
  c->r[0]=0u+0xFFFFFFFFu; // 80100710
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 80100714
  c->r[3]=c->r[31]+0x00000224u; // 80100718
  c->r[4]=c->r[31]+0x0000012Cu; // 8010071C
  W32(c->r[31]+0x00000220u,c->r[5]); // 80100720
  c->lr=0x80100728u; f_8003F484(c); // 80100724
  c->r[29]=0u+0x00000000u; // 80100728
  goto L_8010075C; // 8010072C
L_80100730:;
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 80100730
  c->r[3]=c->r[31]+0x0000021Cu; // 80100734
  c->r[4]=c->r[27]+c->r[30]; // 80100738
  c->r[4]=c->r[4]+0x00000CB4u; // 8010073C
  c->lr=0x80100744u; f_800FC1DC(c); // 80100740
  cmps(c,0,(int32_t)c->r[3],1); // 80100744
  if (!crb(c,2)) { goto L_80100758; } // 80100748
  c->r[3]=c->r[27]+c->r[30]; // 8010074C
  c->r[3]=c->r[3]+0x00000CB4u; // 80100750
  goto L_8010076C; // 80100754
L_80100758:;
  c->r[29]=c->r[29]+0x00000001u; // 80100758
L_8010075C:;
  c->r[0]=R32(c->r[27]+0x000011B4u); // 8010075C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80100760
  if (crb(c,0)) { IRQCHK(c); goto L_80100730; } // 80100764
  c->r[3]=c->r[27]+0x000011B8u; // 80100768
L_8010076C:;
  c->r[29]=R32(c->r[3]+0x00000000u); // 8010076C
L_80100770:;
  c->r[0]=0u+0x00010000u; // 80100770
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80100774
  if (crb(c,0)) { goto L_80100780; } // 80100778
  c->r[29]=0u+0xFFFFFFFFu; // 8010077C
L_80100780:;
  cmps(c,0,(int32_t)c->r[29],-1); // 80100780
  if (!crb(c,2)) { goto L_801007A4; } // 80100784
  c->r[3]=R32(c->r[27]+0x000011B4u); // 80100788
  cmps(c,0,(int32_t)c->r[3],0); // 8010078C
  if (!crb(c,1)) { goto L_801007A4; } // 80100790
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80100794
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80100798
  c->r[3]=c->r[27]+c->r[0]; // 8010079C
  c->r[29]=R32(c->r[3]+0x00000CB4u); // 801007A0
L_801007A4:;
  c->r[3]=c->r[27]+0x00000394u; // 801007A4
  c->r[4]=0u+0x00000002u; // 801007A8
  c->lr=0x801007B0u; f_80076DD4(c); // 801007AC
  cmps(c,0,(int32_t)c->r[3],0); // 801007B0
  if (!crb(c,2)) { goto L_8010086C; } // 801007B4
  c->r[0]=R8(c->r[28]+0x00000164u); // 801007B8
  cmps(c,0,(int32_t)c->r[0],0); // 801007BC
  if (!crb(c,2)) { goto L_80100804; } // 801007C0
  c->r[12]=R32(c->r[27]+0x00000010u); // 801007C4
  c->r[3]=c->r[27]|c->r[27]; // 801007C8
  c->r[4]=c->r[28]|c->r[28]; // 801007CC
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[1]=c->ps1[1]=RF32(ea);} // 801007D0
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 801007D4
  c->ctr=c->r[12]; // 801007D8
  if (true) { c->lr=0x801007E0u; dispatch(c,c->ctr); } // 801007DC
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[0]=c->ps1[0]=RF32(ea);} // 801007E0
  fcmp(c,0,c->f[1],c->f[0]); // 801007E4
  if (!crb(c,1)) { goto L_8010086C; } // 801007E8
  c->r[3]=0u+0x805C0000u; // 801007EC
  {uint32_t ea=c->r[27]+0x000003A4u; WF32(ea,c->f[0]);} // 801007F0
  c->r[4]=R32(c->r[28]+0x0000016Cu); // 801007F4
  c->r[3]=c->r[3]+0x00005B94u; // 801007F8
  c->lr=0x80100800u; f_80213958(c); // 801007FC
  goto L_8010086C; // 80100800
L_80100804:;
  c->r[12]=R32(c->r[27]+0x00000010u); // 80100804
  c->r[3]=c->r[27]|c->r[27]; // 80100808
  c->r[4]=c->r[28]|c->r[28]; // 8010080C
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80100810
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 80100814
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100818
  c->ctr=c->r[12]; // 8010081C
  if (true) { c->lr=0x80100824u; dispatch(c,c->ctr); } // 80100820
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100824
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[2]=c->ps1[2]=RF32(ea);} // 80100828
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8010082C
  fcmp(c,0,c->f[31],c->f[2]); // 80100830
  {uint32_t ea=c->r[27]+0x000003A4u; WF32(ea,c->f[0]);} // 80100834
  if (!crb(c,1)) { goto L_8010086C; } // 80100838
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8010083C
  fcmp(c,0,c->f[0],c->f[2]); // 80100840
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80100844
  if (!crb(c,2)) { goto L_8010086C; } // 80100848
  c->r[0]=R32(c->r[27]+0x00000CA0u); // 8010084C
  c->r[3]=R32(c->r[28]+0x0000016Cu); // 80100850
  cmps(c,0,(int32_t)c->r[0],0); // 80100854
  W8(c->r[27]+0x00000891u,c->r[3]); // 80100858
  if (crb(c,2)) { goto L_8010086C; } // 8010085C
  c->r[4]=c->r[27]|c->r[27]; // 80100860
  c->r[3]=c->r[27]+0x00000CA4u; // 80100864
  c->lr=0x8010086Cu; f_800FCBC0(c); // 80100868
L_8010086C:;
  c->r[0]=R32(c->r[27]+0x00000CA0u); // 8010086C
  cmps(c,0,(int32_t)c->r[0],0); // 80100870
  if (crb(c,2)) { goto L_8010093C; } // 80100874
  cmps(c,0,(int32_t)c->r[29],0); // 80100878
  if (crb(c,0)) { goto L_8010093C; } // 8010087C
  c->r[0]=0u+0x00010000u; // 80100880
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80100884
  if (!crb(c,0)) { goto L_8010093C; } // 80100888
  c->r[3]=R32(c->r[28]+0x00000168u); // 8010088C
  c->r[4]=R32(c->r[27]+0x00000B20u); // 80100890
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80100894
  {uint32_t ea=c->r[27]+0x00000C50u; c->f[31]=c->ps1[31]=RF32(ea);} // 80100898
  c->r[5]=c->r[4]+0x00000070u; // 8010089C
  if (crb(c,0)) { goto L_801008D4; } // 801008A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801008A4
  c->r[3]=R16(c->r[4]+0x00000002u); // 801008A8
  c->r[5]=c->r[5]+c->r[0]; // 801008AC
  c->r[4]=c->r[5]-c->r[4]; // 801008B0
  c->r[0]=c->r[3]+0x00000004u; // 801008B4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801008B8
  if (!crb(c,0)) { goto L_801008D4; } // 801008BC
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[1]=c->ps1[1]=RF32(ea);} // 801008C0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801008C4
  fcmp(c,0,c->f[1],c->f[0]); // 801008C8
  if (crb(c,2)) { goto L_801008D4; } // 801008CC
  c->f[31]=c->f[0]; // 801008D0
L_801008D4:;
  c->r[3]=c->r[31]+0x00000150u; // 801008D4
  c->r[4]=c->r[28]+0x00000018u; // 801008D8
  c->r[5]=c->r[28]+0x00000158u; // 801008DC
  c->lr=0x801008E4u; f_80064C74(c); // 801008E0
  c->r[12]=R32(c->r[28]+0x00000000u); // 801008E4
  c->r[3]=c->r[28]|c->r[28]; // 801008E8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801008EC
  c->ctr=c->r[12]; // 801008F0
  if (true) { c->lr=0x801008F8u; dispatch(c,c->ctr); } // 801008F4
  cmps(c,0,(int32_t)c->r[3],1033); // 801008F8
  if (!crb(c,2)) { goto L_8010090C; } // 801008FC
  c->r[0]=R32(c->r[27]+0x000016E0u); // 80100900
  cmps(c,0,(int32_t)c->r[0],0); // 80100904
  if (crb(c,1)) { goto L_8010093C; } // 80100908
L_8010090C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8010090C
  c->r[3]=c->r[28]|c->r[28]; // 80100910
  c->r[12]=R32(c->r[12]+0x00000014u); // 80100914
  c->ctr=c->r[12]; // 80100918
  if (true) { c->lr=0x80100920u; dispatch(c,c->ctr); } // 8010091C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80100920
  c->r[3]=0u+0x804A0000u; // 80100924
  c->r[4]=c->r[29]|c->r[29]; // 80100928
  c->r[5]=c->r[31]+0x00000150u; // 8010092C
  c->r[3]=c->r[3]+0x0000197Cu; // 80100930
  c->r[6]=c->r[28]+0x00000018u; // 80100934
  c->lr=0x8010093Cu; f_80117464(c); // 80100938
L_8010093C:;
  c->r[0]=R32(c->r[27]+0x0000171Cu); // 8010093C
  cmps(c,0,(int32_t)c->r[0],0); // 80100940
  if (crb(c,2)) { goto L_801009FC; } // 80100944
  c->r[29]=R32(c->r[28]+0x00000014u); // 80100948
  cmps(c,0,(int32_t)c->r[29],0); // 8010094C
  if (crb(c,0)) { goto L_801009FC; } // 80100950
  c->r[3]=R32(c->r[27]+0x000009C8u); // 80100954
  c->r[0]=R32(c->r[3]+0x000000E8u); // 80100958
  W32(c->r[31]+0x00000070u,c->r[0]); // 8010095C
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 80100960
  if (crb(c,0)) { goto L_801009FC; } // 80100964
  c->r[3]=c->r[31]+0x0000009Cu; // 80100968
  c->lr=0x80100970u; f_80365CD0(c); // 8010096C
  cmpu(c,0,c->r[29],c->r[3]); // 80100970
  if (!crb(c,0)) { goto L_801009FC; } // 80100974
  c->r[4]=c->r[29]|c->r[29]; // 80100978
  c->r[3]=c->r[31]+0x0000009Cu; // 8010097C
  c->lr=0x80100984u; f_80365C7C(c); // 80100980
  cmps(c,6,(int32_t)c->r[3],0); // 80100984
  W32(c->r[31]+0x0000006Cu,c->r[3]); // 80100988
  if (crb(c,26)) { goto L_801009FC; } // 8010098C
  c->r[0]=R32(c->r[27]+0x00001720u); // 80100990
  cmps(c,0,(int32_t)c->r[0],0); // 80100994
  if (crb(c,2)) { goto L_801009FC; } // 80100998
  if (!crb(c,26)) { goto L_801009C4; } // 8010099C
  c->r[3]=0u+0x803F0000u; // 801009A0
  c->r[5]=0u+0x803F0000u; // 801009A4
  c->r[3]=c->r[3]+0x000018B0u; // 801009A8
  c->r[4]=0u+0x00000029u; // 801009AC
  c->r[5]=c->r[5]+0x00001894u; // 801009B0
  c->r[6]=c->r[13]+0xFFFF8048u; // 801009B4
  c->r[7]=c->r[13]+0xFFFF81BCu; // 801009B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801009BC
  c->lr=0x801009C4u; f_803444BC(c); // 801009C0
L_801009C4:;
  c->r[5]=R32(c->r[31]+0x0000006Cu); // 801009C4
  c->r[4]=c->r[28]|c->r[28]; // 801009C8
  c->r[3]=R32(c->r[27]+0x0000171Cu); // 801009CC
  c->r[0]=R32(c->r[5]+0x00000008u); // 801009D0
  cmps(c,0,(int32_t)c->r[0],0); // 801009D4
  if (crb(c,2)) { goto L_801009E4; } // 801009D8
  c->r[5]=c->r[5]+c->r[0]; // 801009DC
  goto L_801009E8; // 801009E0
L_801009E4:;
  c->r[5]=0u+0x00000000u; // 801009E4
L_801009E8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801009E8
  c->r[6]=c->r[27]|c->r[27]; // 801009EC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801009F0
  c->ctr=c->r[12]; // 801009F4
  if (true) { c->lr=0x801009FCu; dispatch(c,c->ctr); } // 801009F8
L_801009FC:;
  c->r[3]=R32(c->r[27]+0x00000B20u); // 801009FC
  cmps(c,0,(int32_t)c->r[3],0); // 80100A00
  if (crb(c,2)) { goto L_80100C78; } // 80100A04
  c->r[0]=R32(c->r[3]+0x00000064u); // 80100A08
  cmps(c,0,(int32_t)c->r[0],0); // 80100A0C
  if (!crb(c,1)) { goto L_80100C78; } // 80100A10
  c->lr=0x80100A18u; f_8003DA30(c); // 80100A14
  c->r[6]=R32(c->r[3]+0x00000004u); // 80100A18
  c->r[0]=0u+0x43300000u; // 80100A1C
  W32(c->r[31]+0x000019C8u,c->r[0]); // 80100A20
  c->r[4]=c->r[27]+0x000009C0u; // 80100A24
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[3]=RF64(ea);} // 80100A28
  c->r[3]=c->r[31]+0x00000270u; // 80100A2C
  W32(c->r[31]+0x00000098u,c->r[6]); // 80100A30
  {uint32_t ea=c->r[2]+0xFFFF9258u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100A34
  c->r[5]=R32(c->r[27]+0x00000B20u); // 80100A38
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100A3C
  c->r[0]=R32(c->r[5]+0x00000064u); // 80100A40
  W32(c->r[31]+0x00000030u,c->r[6]); // 80100A44
  c->r[0]=c->r[0]^0x80000000u; // 80100A48
  W32(c->r[31]+0x000019CCu,c->r[0]); // 80100A4C
  {uint32_t ea=c->r[31]+0x000019C8u; c->f[2]=RF64(ea);} // 80100A50
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[1]);} // 80100A54
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[3]); // 80100A58
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[1]);} // 80100A5C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 80100A60
  W32(c->r[31]+0x0000002Cu,c->r[6]); // 80100A64
  W32(c->r[31]+0x00000028u,c->r[6]); // 80100A68
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[0]);} // 80100A6C
  c->r[12]=R32(c->r[27]+0x000009C0u); // 80100A70
  W32(c->r[31]+0x00000068u,c->r[6]); // 80100A74
  c->r[12]=R32(c->r[12]+0x00000040u); // 80100A78
  c->ctr=c->r[12]; // 80100A7C
  if (true) { c->lr=0x80100A84u; dispatch(c,c->ctr); } // 80100A80
  c->r[3]=c->r[31]+0x00000114u; // 80100A84
  c->r[4]=c->r[31]+0x00000270u; // 80100A88
  c->lr=0x80100A90u; f_80032FD8(c); // 80100A8C
  c->r[3]=c->r[31]+0x00000120u; // 80100A90
  c->r[4]=c->r[31]+0x00000114u; // 80100A94
  c->r[5]=c->r[31]+0x00000108u; // 80100A98
  c->lr=0x80100AA0u; f_801011E8(c); // 80100A9C
  c->r[3]=c->r[31]+0x00000300u; // 80100AA0
  c->lr=0x80100AA8u; f_80063ACC(c); // 80100AA4
  c->r[5]=0u+0x803F0000u; // 80100AA8
  c->r[3]=c->r[31]+0x00000324u; // 80100AAC
  c->r[5]=c->r[5]+0x000022C4u; // 80100AB0
  c->r[4]=c->r[31]+0x00000120u; // 80100AB4
  W32(c->r[31]+0x00000320u,c->r[5]); // 80100AB8
  c->lr=0x80100AC0u; f_8003F484(c); // 80100ABC
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100AC0
  c->r[3]=c->r[31]+0x0000030Cu; // 80100AC4
  {uint32_t ea=c->r[31]+0x00000330u; WF32(ea,c->f[31]);} // 80100AC8
  c->r[4]=c->r[31]+0x000000F4u; // 80100ACC
  {uint32_t ea=c->r[31]+0x00000334u; WF32(ea,c->f[0]);} // 80100AD0
  c->r[5]=R32(c->r[27]+0x00000000u); // 80100AD4
  c->r[0]=R32(c->r[27]+0x00000004u); // 80100AD8
  W32(c->r[31]+0x000000F4u,c->r[5]); // 80100ADC
  W32(c->r[31]+0x000000F8u,c->r[0]); // 80100AE0
  c->lr=0x80100AE8u; f_80063D44(c); // 80100AE4
  c->r[3]=c->r[31]+0x00000B94u; // 80100AE8
  c->lr=0x80100AF0u; f_8003F3AC(c); // 80100AEC
  c->r[0]=R32(c->r[31]+0x00000098u); // 80100AF0
  W32(c->r[31]+0x00000060u,c->r[0]); // 80100AF4
  c->lr=0x80100AFCu; f_8003DA30(c); // 80100AF8
  c->r[4]=c->r[31]+0x00000300u; // 80100AFC
  c->r[5]=c->r[31]+0x00000060u; // 80100B00
  c->r[6]=c->r[31]+0x00000B94u; // 80100B04
  c->lr=0x80100B0Cu; f_8003E788(c); // 80100B08
  W32(c->r[31]+0x00000064u,c->r[3]); // 80100B0C
  W32(c->r[31]+0x00000098u,c->r[3]); // 80100B10
  goto L_80100C40; // 80100B14
L_80100B18:;
  c->r[3]=R32(c->r[31]+0x00000098u); // 80100B18
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80100B1C
  c->r[12]=R32(c->r[3]+0x00000010u); // 80100B20
  c->r[12]=R32(c->r[12]+0x00000008u); // 80100B24
  c->ctr=c->r[12]; // 80100B28
  if (true) { c->lr=0x80100B30u; dispatch(c,c->ctr); } // 80100B2C
  c->r[0]=c->r[4]+0x20000000u; // 80100B30
  W32(c->r[31]+0x000000F0u,c->r[4]); // 80100B34
  cmpu(c,0,c->r[0],0x00000002u); // 80100B38
  W32(c->r[31]+0x000000ECu,c->r[3]); // 80100B3C
  if (!crb(c,2)) { goto L_80100B4C; } // 80100B40
  c->r[0]=0u+0x00000001u; // 80100B44
  goto L_80100B7C; // 80100B48
L_80100B4C:;
  c->r[4]=rotl(c->r[4],0)&0xFFFF0000u; // 80100B4C
  c->r[3]=0u+0x00000000u; // 80100B50
  goto L_80100B5C; // 80100B54
L_80100B58:;
  c->r[3]=c->r[3]+0x00000001u; // 80100B58
L_80100B5C:;
  c->r[0]=0u+0x00000001u; // 80100B5C
  c->r[5]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 80100B60
  c->r[0]=rotl(c->r[5],0)&0xE0000000u; // 80100B64
  c->r[0]=(rotl(c->r[5],0)&0x00000002u)|(c->r[0]&~0x00000002u); cr0(c,c->r[0]); // 80100B68
  if (crb(c,2)) { IRQCHK(c); goto L_80100B58; } // 80100B6C
  c->r[3]=c->r[4]&c->r[5]; // 80100B70
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80100B74
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80100B78
L_80100B7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80100B7C
  if (crb(c,2)) { goto L_80100C10; } // 80100B80
  c->r[6]=R32(c->r[27]+0x00000000u); // 80100B84
  c->r[3]=c->r[31]+0x00000A1Cu; // 80100B88
  c->r[0]=R32(c->r[27]+0x00000004u); // 80100B8C
  c->r[4]=c->r[31]+0x00000324u; // 80100B90
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100B94
  c->r[5]=c->r[31]+0x00000BCCu; // 80100B98
  W32(c->r[31]+0x000000D4u,c->r[6]); // 80100B9C
  c->r[6]=c->r[31]+0x000000D4u; // 80100BA0
  {uint32_t ea=c->r[2]+0xFFFF92ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80100BA4
  c->r[7]=0u+0x00000000u; // 80100BA8
  W32(c->r[31]+0x000000D8u,c->r[0]); // 80100BAC
  c->r[8]=0u+0xFFFFFFFFu; // 80100BB0
  c->lr=0x80100BB8u; f_8003FF2C(c); // 80100BB4
  c->r[5]=0u+0x803F0000u; // 80100BB8
  c->r[3]=c->r[31]+0x00000A20u; // 80100BBC
  c->r[5]=c->r[5]+0x000067BCu; // 80100BC0
  c->r[4]=c->r[31]+0x000000E4u; // 80100BC4
  W32(c->r[31]+0x00000A1Cu,c->r[5]); // 80100BC8
  c->r[5]=R32(c->r[27]+0x00000000u); // 80100BCC
  c->r[0]=R32(c->r[27]+0x00000004u); // 80100BD0
  W32(c->r[31]+0x000000E4u,c->r[5]); // 80100BD4
  W32(c->r[31]+0x000000E8u,c->r[0]); // 80100BD8
  c->lr=0x80100BE0u; f_80063D44(c); // 80100BDC
  c->r[6]=R32(c->r[31]+0x00000098u); // 80100BE0
  c->r[3]=c->r[31]+0x000000DCu; // 80100BE4
  c->r[4]=c->r[31]+0x00000A1Cu; // 80100BE8
  c->r[5]=R32(c->r[6]+0xFFFFFFF8u); // 80100BEC
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80100BF0
  W32(c->r[31]+0x000000DCu,c->r[5]); // 80100BF4
  W32(c->r[31]+0x000000E0u,c->r[0]); // 80100BF8
  c->lr=0x80100C00u; f_800FCFC0(c); // 80100BFC
  c->r[0]=0u+0xFFFFFFFFu; // 80100C00
  c->r[3]=c->r[31]+0x00000A1Cu; // 80100C04
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80100C08
  c->lr=0x80100C10u; f_800B1BAC(c); // 80100C0C
L_80100C10:;
  c->r[3]=c->r[31]+0x00000098u; // 80100C10
  c->r[4]=0u+0x00000000u; // 80100C14
  c->lr=0x80100C1Cu; f_8003ED68(c); // 80100C18
  c->r[0]=R32(c->r[31]+0x00000098u); // 80100C1C
  W32(c->r[31]+0x00000058u,c->r[0]); // 80100C20
  c->lr=0x80100C28u; f_8003DA30(c); // 80100C24
  c->r[4]=c->r[31]+0x00000300u; // 80100C28
  c->r[5]=c->r[31]+0x00000058u; // 80100C2C
  c->r[6]=c->r[31]+0x00000B94u; // 80100C30
  c->lr=0x80100C38u; f_8003E788(c); // 80100C34
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 80100C38
  W32(c->r[31]+0x00000098u,c->r[3]); // 80100C3C
L_80100C40:;
  c->lr=0x80100C44u; f_8003DA30(c); // 80100C40
  c->lr=0x80100C48u; f_8003ECFC(c); // 80100C44
  c->r[0]=R32(c->r[31]+0x00000098u); // 80100C48
  c->r[4]=c->r[31]+0x00000050u; // 80100C4C
  W32(c->r[31]+0x00000050u,c->r[3]); // 80100C50
  c->r[3]=c->r[31]+0x00000054u; // 80100C54
  W32(c->r[31]+0x00000054u,c->r[0]); // 80100C58
  c->lr=0x80100C60u; f_8003ED7C(c); // 80100C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80100C60
  if (!crb(c,2)) { IRQCHK(c); goto L_80100B18; } // 80100C64
  c->r[0]=0u+0xFFFFFFFFu; // 80100C68
  c->r[3]=c->r[31]+0x00000BCCu; // 80100C6C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80100C70
  c->lr=0x80100C78u; f_80046394(c); // 80100C74
L_80100C78:;
  c->r[0]=R8(c->r[28]+0x00000164u); // 80100C78
  cmps(c,0,(int32_t)c->r[0],0); // 80100C7C
  if (crb(c,2)) { goto L_801011BC; } // 80100C80
  c->r[3]=c->r[27]+0x0000174Cu; // 80100C84
  c->lr=0x80100C8Cu; f_8003F1D4(c); // 80100C88
  cmps(c,0,(int32_t)c->r[3],0); // 80100C8C
  if (crb(c,2)) { goto L_801011BC; } // 80100C90
  c->r[3]=c->r[27]|c->r[27]; // 80100C94
  c->lr=0x80100C9Cu; f_8010120C(c); // 80100C98
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 80100C9C
  W32(c->r[31]+0x00000094u,c->r[3]); // 80100CA0
  c->r[3]=c->r[27]+0x0000174Cu; // 80100CA4
  c->lr=0x80100CACu; f_80068A78(c); // 80100CA8
  c->lr=0x80100CB0u; f_8010120C(c); // 80100CAC
  W32(c->r[31]+0x00000048u,c->r[3]); // 80100CB0
  c->r[4]=0u+0x00000000u; // 80100CB4
  W32(c->r[31]+0x00000090u,c->r[3]); // 80100CB8
  c->r[3]=c->r[31]+0x00000094u; // 80100CBC
  c->lr=0x80100CC4u; f_8003ED68(c); // 80100CC0
  c->r[12]=R32(c->r[28]+0x00000000u); // 80100CC4
  c->r[3]=c->r[28]|c->r[28]; // 80100CC8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80100CCC
  c->ctr=c->r[12]; // 80100CD0
  if (true) { c->lr=0x80100CD8u; dispatch(c,c->ctr); } // 80100CD4
  cmps(c,0,(int32_t)c->r[3],1027); // 80100CD8
  if (crb(c,2)) { goto L_80100E1C; } // 80100CDC
  if (!crb(c,0)) { goto L_80100CF4; } // 80100CE0
  cmps(c,0,(int32_t)c->r[3],1025); // 80100CE4
  if (crb(c,2)) { goto L_80100D00; } // 80100CE8
  if (!crb(c,0)) { goto L_80100F38; } // 80100CEC
  goto L_801011BC; // 80100CF0
L_80100CF4:;
  cmps(c,0,(int32_t)c->r[3],1029); // 80100CF4
  if (!crb(c,0)) { goto L_801011BC; } // 80100CF8
  goto L_801010A4; // 80100CFC
L_80100D00:;
  c->r[4]=c->r[28]|c->r[28]; // 80100D00
  c->r[3]=c->r[31]+0x000008A4u; // 80100D04
  c->lr=0x80100D0Cu; f_80101214(c); // 80100D08
  c->r[3]=0u+0x803F0000u; // 80100D0C
  c->r[0]=0u+0x00000000u; // 80100D10
  c->r[3]=c->r[3]+0x00002468u; // 80100D14
  W8(c->r[31]+0x00000A08u,c->r[0]); // 80100D18
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100D1C
  W32(c->r[31]+0x000008A4u,c->r[3]); // 80100D20
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100D24
  fcmp(c,0,c->f[0],c->f[1]); // 80100D28
  if (!crb(c,1)) { goto L_80100D44; } // 80100D2C
  c->r[12]=R32(c->r[31]+0x000008A4u); // 80100D30
  c->r[3]=c->r[31]+0x000008A4u; // 80100D34
  c->r[12]=R32(c->r[12]+0x00000018u); // 80100D38
  c->ctr=c->r[12]; // 80100D3C
  if (true) { c->lr=0x80100D44u; dispatch(c,c->ctr); } // 80100D40
L_80100D44:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 80100D44
  W32(c->r[31]+0x00000044u,c->r[0]); // 80100D48
  goto L_80100DE4; // 80100D4C
L_80100D50:;
  c->r[5]=R32(c->r[31]+0x00000044u); // 80100D50
  c->r[3]=c->r[31]+0x000000CCu; // 80100D54
  c->r[4]=R32(c->r[5]+0xFFFFFFF8u); // 80100D58
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 80100D5C
  W32(c->r[31]+0x000000CCu,c->r[4]); // 80100D60
  W32(c->r[31]+0x000000D0u,c->r[0]); // 80100D64
  c->lr=0x80100D6Cu; f_8003F1D4(c); // 80100D68
  cmps(c,0,(int32_t)c->r[3],0); // 80100D6C
  if (crb(c,2)) { goto L_80100DD8; } // 80100D70
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 80100D74
  c->lr=0x80100D7Cu; f_802A6EE4(c); // 80100D78
  cmps(c,0,(int32_t)c->r[3],0); // 80100D7C
  c->r[27]=c->r[3]|c->r[3]; // 80100D80
  if (crb(c,2)) { goto L_80100DD8; } // 80100D84
  if (crb(c,2)) { goto L_80100DA0; } // 80100D88
  W32(c->r[31]+0x00000218u,c->r[1]); // 80100D8C
  c->lr=0x80100D94u; f_8006BEE8(c); // 80100D90
  c->r[3]=0u+0x803F0000u; // 80100D94
  c->r[3]=c->r[3]+0x00002468u; // 80100D98
  W32(c->r[27]+0x00000000u,c->r[3]); // 80100D9C
L_80100DA0:;
  c->r[3]=c->r[27]|c->r[27]; // 80100DA0
  c->r[4]=c->r[31]+0x000008A4u; // 80100DA4
  c->lr=0x80100DACu; f_8006BDA8(c); // 80100DA8
  c->r[28]=addc(c,c->r[27],0x00000178u,0); cr0(c,c->r[28]); // 80100DAC
  if (crb(c,2)) { goto L_80100DC4; } // 80100DB0
  W32(c->r[31]+0x00000200u,c->r[1]); // 80100DB4
  c->r[3]=c->r[28]|c->r[28]; // 80100DB8
  c->r[4]=c->r[27]|c->r[27]; // 80100DBC
  c->lr=0x80100DC4u; f_80064CE8(c); // 80100DC0
L_80100DC4:;
  c->r[3]=c->r[31]+0x000000CCu; // 80100DC4
  c->lr=0x80100DCCu; f_80068A78(c); // 80100DC8
  c->r[4]=c->r[28]|c->r[28]; // 80100DCC
  c->r[3]=c->r[3]+0x00000030u; // 80100DD0
  c->lr=0x80100DD8u; f_8003FD14(c); // 80100DD4
L_80100DD8:;
  c->r[3]=c->r[31]+0x00000044u; // 80100DD8
  c->r[4]=0u+0x00000000u; // 80100DDC
  c->lr=0x80100DE4u; f_8003ED68(c); // 80100DE0
L_80100DE4:;
  c->r[5]=R32(c->r[31]+0x00000090u); // 80100DE4
  c->r[3]=c->r[31]+0x00000020u; // 80100DE8
  c->r[0]=R32(c->r[31]+0x00000044u); // 80100DEC
  c->r[4]=c->r[31]+0x00000024u; // 80100DF0
  W32(c->r[31]+0x00000024u,c->r[5]); // 80100DF4
  W32(c->r[31]+0x00000020u,c->r[0]); // 80100DF8
  c->lr=0x80100E00u; f_8003ED7C(c); // 80100DFC
  cmps(c,0,(int32_t)c->r[3],0); // 80100E00
  if (!crb(c,2)) { IRQCHK(c); goto L_80100D50; } // 80100E04
  c->r[0]=0u+0xFFFFFFFFu; // 80100E08
  c->r[3]=c->r[31]+0x000008A4u; // 80100E0C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80100E10
  c->lr=0x80100E18u; f_8006BEA8(c); // 80100E14
  goto L_801011BC; // 80100E18
L_80100E1C:;
  c->r[4]=c->r[28]|c->r[28]; // 80100E1C
  c->r[3]=c->r[31]+0x0000072Cu; // 80100E20
  c->lr=0x80100E28u; f_80101214(c); // 80100E24
  c->r[3]=0u+0x803F0000u; // 80100E28
  c->r[0]=0u+0x00000000u; // 80100E2C
  c->r[3]=c->r[3]+0x00007A3Cu; // 80100E30
  W8(c->r[31]+0x00000890u,c->r[0]); // 80100E34
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100E38
  W32(c->r[31]+0x0000072Cu,c->r[3]); // 80100E3C
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100E40
  fcmp(c,0,c->f[0],c->f[1]); // 80100E44
  if (!crb(c,1)) { goto L_80100E60; } // 80100E48
  c->r[12]=R32(c->r[31]+0x0000072Cu); // 80100E4C
  c->r[3]=c->r[31]+0x0000072Cu; // 80100E50
  c->r[12]=R32(c->r[12]+0x00000018u); // 80100E54
  c->ctr=c->r[12]; // 80100E58
  if (true) { c->lr=0x80100E60u; dispatch(c,c->ctr); } // 80100E5C
L_80100E60:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 80100E60
  W32(c->r[31]+0x00000040u,c->r[0]); // 80100E64
  goto L_80100F00; // 80100E68
L_80100E6C:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 80100E6C
  c->r[3]=c->r[31]+0x000000C4u; // 80100E70
  c->r[4]=R32(c->r[5]+0xFFFFFFF8u); // 80100E74
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 80100E78
  W32(c->r[31]+0x000000C4u,c->r[4]); // 80100E7C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80100E80
  c->lr=0x80100E88u; f_8003F1D4(c); // 80100E84
  cmps(c,0,(int32_t)c->r[3],0); // 80100E88
  if (crb(c,2)) { goto L_80100EF4; } // 80100E8C
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 80100E90
  c->lr=0x80100E98u; f_802A6EE4(c); // 80100E94
  cmps(c,0,(int32_t)c->r[3],0); // 80100E98
  c->r[27]=c->r[3]|c->r[3]; // 80100E9C
  if (crb(c,2)) { goto L_80100EF4; } // 80100EA0
  if (crb(c,2)) { goto L_80100EBC; } // 80100EA4
  W32(c->r[31]+0x000001E8u,c->r[1]); // 80100EA8
  c->lr=0x80100EB0u; f_8006BEE8(c); // 80100EAC
  c->r[3]=0u+0x803F0000u; // 80100EB0
  c->r[3]=c->r[3]+0x00007A3Cu; // 80100EB4
  W32(c->r[27]+0x00000000u,c->r[3]); // 80100EB8
L_80100EBC:;
  c->r[3]=c->r[27]|c->r[27]; // 80100EBC
  c->r[4]=c->r[31]+0x0000072Cu; // 80100EC0
  c->lr=0x80100EC8u; f_8006BDA8(c); // 80100EC4
  c->r[28]=addc(c,c->r[27],0x00000178u,0); cr0(c,c->r[28]); // 80100EC8
  if (crb(c,2)) { goto L_80100EE0; } // 80100ECC
  W32(c->r[31]+0x000001D0u,c->r[1]); // 80100ED0
  c->r[3]=c->r[28]|c->r[28]; // 80100ED4
  c->r[4]=c->r[27]|c->r[27]; // 80100ED8
  c->lr=0x80100EE0u; f_80064CE8(c); // 80100EDC
L_80100EE0:;
  c->r[3]=c->r[31]+0x000000C4u; // 80100EE0
  c->lr=0x80100EE8u; f_80068A78(c); // 80100EE4
  c->r[4]=c->r[28]|c->r[28]; // 80100EE8
  c->r[3]=c->r[3]+0x00000030u; // 80100EEC
  c->lr=0x80100EF4u; f_8003FD14(c); // 80100EF0
L_80100EF4:;
  c->r[3]=c->r[31]+0x00000040u; // 80100EF4
  c->r[4]=0u+0x00000000u; // 80100EF8
  c->lr=0x80100F00u; f_8003ED68(c); // 80100EFC
L_80100F00:;
  c->r[5]=R32(c->r[31]+0x00000090u); // 80100F00
  c->r[3]=c->r[31]+0x00000018u; // 80100F04
  c->r[0]=R32(c->r[31]+0x00000040u); // 80100F08
  c->r[4]=c->r[31]+0x0000001Cu; // 80100F0C
  W32(c->r[31]+0x0000001Cu,c->r[5]); // 80100F10
  W32(c->r[31]+0x00000018u,c->r[0]); // 80100F14
  c->lr=0x80100F1Cu; f_8003ED7C(c); // 80100F18
  cmps(c,0,(int32_t)c->r[3],0); // 80100F1C
  if (!crb(c,2)) { IRQCHK(c); goto L_80100E6C; } // 80100F20
  c->r[0]=0u+0xFFFFFFFFu; // 80100F24
  c->r[3]=c->r[31]+0x0000072Cu; // 80100F28
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80100F2C
  c->lr=0x80100F34u; f_800CD310(c); // 80100F30
  goto L_801011BC; // 80100F34
L_80100F38:;
  c->r[4]=c->r[28]|c->r[28]; // 80100F38
  c->r[3]=c->r[31]+0x000005A8u; // 80100F3C
  c->lr=0x80100F44u; f_80101214(c); // 80100F40
  {uint32_t ea=c->r[28]+0x00000178u; c->f[3]=c->ps1[3]=RF32(ea);} // 80100F44
  c->r[3]=0u+0x803F0000u; // 80100F48
  {uint32_t ea=c->r[28]+0x0000017Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80100F4C
  c->r[3]=c->r[3]+0x0000244Cu; // 80100F50
  {uint32_t ea=c->r[28]+0x00000180u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100F54
  c->r[0]=0u+0x00000000u; // 80100F58
  W32(c->r[31]+0x000005A8u,c->r[3]); // 80100F5C
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 80100F60
  {uint32_t ea=c->r[31]+0x00000720u; WF32(ea,c->f[3]);} // 80100F64
  {uint32_t ea=c->r[31]+0x00000724u; WF32(ea,c->f[2]);} // 80100F68
  {uint32_t ea=c->r[31]+0x00000728u; WF32(ea,c->f[0]);} // 80100F6C
  W8(c->r[31]+0x0000070Cu,c->r[0]); // 80100F70
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100F74
  fcmp(c,0,c->f[0],c->f[1]); // 80100F78
  if (!crb(c,1)) { goto L_80100FA4; } // 80100F7C
  c->r[12]=R32(c->r[31]+0x000005A8u); // 80100F80
  c->r[3]=c->r[31]+0x000005A8u; // 80100F84
  c->r[12]=R32(c->r[12]+0x00000018u); // 80100F88
  c->ctr=c->r[12]; // 80100F8C
  if (true) { c->lr=0x80100F94u; dispatch(c,c->ctr); } // 80100F90
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100F94
  {uint32_t ea=c->r[31]+0x00000720u; WF32(ea,c->f[0]);} // 80100F98
  {uint32_t ea=c->r[31]+0x00000724u; WF32(ea,c->f[0]);} // 80100F9C
  {uint32_t ea=c->r[31]+0x00000728u; WF32(ea,c->f[0]);} // 80100FA0
L_80100FA4:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 80100FA4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 80100FA8
  goto L_8010106C; // 80100FAC
L_80100FB0:;
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 80100FB0
  c->r[3]=c->r[31]+0x000000BCu; // 80100FB4
  c->r[4]=R32(c->r[5]+0xFFFFFFF8u); // 80100FB8
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 80100FBC
  W32(c->r[31]+0x000000BCu,c->r[4]); // 80100FC0
  W32(c->r[31]+0x000000C0u,c->r[0]); // 80100FC4
  c->lr=0x80100FCCu; f_8003F1D4(c); // 80100FC8
  cmps(c,0,(int32_t)c->r[3],0); // 80100FCC
  if (crb(c,2)) { goto L_80101060; } // 80100FD0
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 80100FD4
  c->lr=0x80100FDCu; f_802A6EE4(c); // 80100FD8
  cmps(c,0,(int32_t)c->r[3],0); // 80100FDC
  c->r[27]=c->r[3]|c->r[3]; // 80100FE0
  if (crb(c,2)) { goto L_80101060; } // 80100FE4
  if (crb(c,2)) { goto L_80101010; } // 80100FE8
  W32(c->r[31]+0x000001B8u,c->r[1]); // 80100FEC
  c->lr=0x80100FF4u; f_8006BEE8(c); // 80100FF0
  c->r[3]=0u+0x803F0000u; // 80100FF4
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[0]=c->ps1[0]=RF32(ea);} // 80100FF8
  c->r[3]=c->r[3]+0x0000244Cu; // 80100FFC
  W32(c->r[27]+0x00000000u,c->r[3]); // 80101000
  {uint32_t ea=c->r[27]+0x00000178u; WF32(ea,c->f[0]);} // 80101004
  {uint32_t ea=c->r[27]+0x0000017Cu; WF32(ea,c->f[0]);} // 80101008
  {uint32_t ea=c->r[27]+0x00000180u; WF32(ea,c->f[0]);} // 8010100C
L_80101010:;
  c->r[3]=c->r[27]|c->r[27]; // 80101010
  c->r[4]=c->r[31]+0x000005A8u; // 80101014
  c->lr=0x8010101Cu; f_8006BDA8(c); // 80101018
  {uint32_t ea=c->r[31]+0x00000720u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010101C
  c->r[28]=addc(c,c->r[27],0x00000184u,0); cr0(c,c->r[28]); // 80101020
  {uint32_t ea=c->r[27]+0x00000178u; WF32(ea,c->f[0]);} // 80101024
  {uint32_t ea=c->r[31]+0x00000724u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101028
  {uint32_t ea=c->r[27]+0x0000017Cu; WF32(ea,c->f[0]);} // 8010102C
  {uint32_t ea=c->r[31]+0x00000728u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101030
  {uint32_t ea=c->r[27]+0x00000180u; WF32(ea,c->f[0]);} // 80101034
  if (crb(c,2)) { goto L_8010104C; } // 80101038
  W32(c->r[31]+0x000001A0u,c->r[1]); // 8010103C
  c->r[3]=c->r[28]|c->r[28]; // 80101040
  c->r[4]=c->r[27]|c->r[27]; // 80101044
  c->lr=0x8010104Cu; f_80064CE8(c); // 80101048
L_8010104C:;
  c->r[3]=c->r[31]+0x000000BCu; // 8010104C
  c->lr=0x80101054u; f_80068A78(c); // 80101050
  c->r[4]=c->r[28]|c->r[28]; // 80101054
  c->r[3]=c->r[3]+0x00000030u; // 80101058
  c->lr=0x80101060u; f_8003FD14(c); // 8010105C
L_80101060:;
  c->r[3]=c->r[31]+0x0000003Cu; // 80101060
  c->r[4]=0u+0x00000000u; // 80101064
  c->lr=0x8010106Cu; f_8003ED68(c); // 80101068
L_8010106C:;
  c->r[5]=R32(c->r[31]+0x00000090u); // 8010106C
  c->r[3]=c->r[31]+0x00000010u; // 80101070
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80101074
  c->r[4]=c->r[31]+0x00000014u; // 80101078
  W32(c->r[31]+0x00000014u,c->r[5]); // 8010107C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80101080
  c->lr=0x80101088u; f_8003ED7C(c); // 80101084
  cmps(c,0,(int32_t)c->r[3],0); // 80101088
  if (!crb(c,2)) { IRQCHK(c); goto L_80100FB0; } // 8010108C
  c->r[0]=0u+0xFFFFFFFFu; // 80101090
  c->r[3]=c->r[31]+0x000005A8u; // 80101094
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80101098
  c->lr=0x801010A0u; f_8006BCB4(c); // 8010109C
  goto L_801011BC; // 801010A0
L_801010A4:;
  c->r[4]=c->r[28]|c->r[28]; // 801010A4
  c->r[3]=c->r[31]+0x00000430u; // 801010A8
  c->lr=0x801010B0u; f_80101214(c); // 801010AC
  c->r[3]=0u+0x803F0000u; // 801010B0
  c->r[0]=0u+0x00000000u; // 801010B4
  c->r[3]=c->r[3]+0x00007A20u; // 801010B8
  W8(c->r[31]+0x00000594u,c->r[0]); // 801010BC
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 801010C0
  W32(c->r[31]+0x00000430u,c->r[3]); // 801010C4
  {uint32_t ea=c->r[27]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801010C8
  fcmp(c,0,c->f[0],c->f[1]); // 801010CC
  if (!crb(c,1)) { goto L_801010E8; } // 801010D0
  c->r[12]=R32(c->r[31]+0x00000430u); // 801010D4
  c->r[3]=c->r[31]+0x00000430u; // 801010D8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801010DC
  c->ctr=c->r[12]; // 801010E0
  if (true) { c->lr=0x801010E8u; dispatch(c,c->ctr); } // 801010E4
L_801010E8:;
  c->r[0]=R32(c->r[31]+0x00000094u); // 801010E8
  W32(c->r[31]+0x00000038u,c->r[0]); // 801010EC
  goto L_80101188; // 801010F0
L_801010F4:;
  c->r[5]=R32(c->r[31]+0x00000038u); // 801010F4
  c->r[3]=c->r[31]+0x000000B4u; // 801010F8
  c->r[4]=R32(c->r[5]+0xFFFFFFF8u); // 801010FC
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 80101100
  W32(c->r[31]+0x000000B4u,c->r[4]); // 80101104
  W32(c->r[31]+0x000000B8u,c->r[0]); // 80101108
  c->lr=0x80101110u; f_8003F1D4(c); // 8010110C
  cmps(c,0,(int32_t)c->r[3],0); // 80101110
  if (crb(c,2)) { goto L_8010117C; } // 80101114
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 80101118
  c->lr=0x80101120u; f_802A6EE4(c); // 8010111C
  cmps(c,0,(int32_t)c->r[3],0); // 80101120
  c->r[27]=c->r[3]|c->r[3]; // 80101124
  if (crb(c,2)) { goto L_8010117C; } // 80101128
  if (crb(c,2)) { goto L_80101144; } // 8010112C
  W32(c->r[31]+0x00000188u,c->r[1]); // 80101130
  c->lr=0x80101138u; f_8006BEE8(c); // 80101134
  c->r[3]=0u+0x803F0000u; // 80101138
  c->r[3]=c->r[3]+0x00007A20u; // 8010113C
  W32(c->r[27]+0x00000000u,c->r[3]); // 80101140
L_80101144:;
  c->r[3]=c->r[27]|c->r[27]; // 80101144
  c->r[4]=c->r[31]+0x00000430u; // 80101148
  c->lr=0x80101150u; f_8006BDA8(c); // 8010114C
  c->r[28]=addc(c,c->r[27],0x00000178u,0); cr0(c,c->r[28]); // 80101150
  if (crb(c,2)) { goto L_80101168; } // 80101154
  W32(c->r[31]+0x00000170u,c->r[1]); // 80101158
  c->r[3]=c->r[28]|c->r[28]; // 8010115C
  c->r[4]=c->r[27]|c->r[27]; // 80101160
  c->lr=0x80101168u; f_80064CE8(c); // 80101164
L_80101168:;
  c->r[3]=c->r[31]+0x000000B4u; // 80101168
  c->lr=0x80101170u; f_80068A78(c); // 8010116C
  c->r[4]=c->r[28]|c->r[28]; // 80101170
  c->r[3]=c->r[3]+0x00000030u; // 80101174
  c->lr=0x8010117Cu; f_8003FD14(c); // 80101178
L_8010117C:;
  c->r[3]=c->r[31]+0x00000038u; // 8010117C
  c->r[4]=0u+0x00000000u; // 80101180
  c->lr=0x80101188u; f_8003ED68(c); // 80101184
L_80101188:;
  c->r[5]=R32(c->r[31]+0x00000090u); // 80101188
  c->r[3]=c->r[31]+0x00000008u; // 8010118C
  c->r[0]=R32(c->r[31]+0x00000038u); // 80101190
  c->r[4]=c->r[31]+0x0000000Cu; // 80101194
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 80101198
  W32(c->r[31]+0x00000008u,c->r[0]); // 8010119C
  c->lr=0x801011A4u; f_8003ED7C(c); // 801011A0
  cmps(c,0,(int32_t)c->r[3],0); // 801011A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801010F4; } // 801011A8
  c->r[0]=0u+0xFFFFFFFFu; // 801011AC
  c->r[3]=c->r[31]+0x00000430u; // 801011B0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801011B4
  c->lr=0x801011BCu; f_800CD53C(c); // 801011B8
L_801011BC:;
  c->r[10]=c->r[31]|c->r[31]; // 801011BC
  c->r[0]=0u+0x000019F8u; // 801011C0
  {uint32_t ea=c->r[10]+c->r[0]; psq_load(c,31,ea,0,0);} // 801011C4
  c->r[11]=c->r[10]+0x000019F0u; // 801011C8
  {uint32_t ea=c->r[31]+0x000019F0u; c->f[31]=RF64(ea);} // 801011CC
  c->lr=0x801011D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801011D0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801011D4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801011D8
  c->r[1]=c->r[10]|c->r[10]; // 801011DC
  c->lr=c->r[0]; // 801011E0
  return; // 801011E4
}

// fn_801011E8
void f_801011E8(Ctx* __restrict c) {
  trace_call(0x801011E8u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 801011E8
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,0,0);} // 801011EC
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801011F0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801011F4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 801011F8
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,0,ea,1,0);} // 801011FC
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80101200
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 80101204
  return; // 80101208
}

// fn_8010120C
void f_8010120C(Ctx* __restrict c) {
  trace_call(0x8010120Cu);
  c->r[3]=c->r[3]+0x00000008u; // 8010120C
  return; // 80101210
}

// fn_80101214
void f_80101214(Ctx* __restrict c) {
  trace_call(0x80101214u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101214
  c->r[0]=c->lr; // 80101218
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010121C
  c->r[11]=c->r[1]+0x00000020u; // 80101220
  c->lr=0x80101228u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80101224
  c->r[5]=0u+0x803F0000u; // 80101228
  c->r[31]=c->r[4]|c->r[4]; // 8010122C
  c->r[5]=c->r[5]+0x00001B28u; // 80101230
  c->r[30]=c->r[3]|c->r[3]; // 80101234
  W32(c->r[3]+0x00000000u,c->r[5]); // 80101238
  c->r[3]=c->r[3]+0x00000004u; // 8010123C
  c->r[4]=c->r[4]+0x00000004u; // 80101240
  c->lr=0x80101248u; f_80064C98(c); // 80101244
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80101248
  c->r[3]=0u+0x803F0000u; // 8010124C
  c->r[3]=c->r[3]+0x00001AF8u; // 80101250
  c->r[27]=c->r[30]+0x00000010u; // 80101254
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80101258
  c->r[28]=c->r[31]+0x00000010u; // 8010125C
  c->r[29]=c->r[30]+0x00000150u; // 80101260
  W32(c->r[30]+0x00000000u,c->r[3]); // 80101264
L_80101268:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80101268
  c->r[3]=c->r[27]+0x00000008u; // 8010126C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80101270
  c->r[4]=c->r[28]+0x00000008u; // 80101274
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 80101278
  W32(c->r[27]+0x00000004u,c->r[0]); // 8010127C
  c->lr=0x80101284u; f_8003F484(c); // 80101280
  c->r[3]=c->r[27]+0x00000014u; // 80101284
  c->r[4]=c->r[28]+0x00000014u; // 80101288
  c->lr=0x80101290u; f_8003F484(c); // 8010128C
  c->r[0]=R32(c->r[28]+0x00000020u); // 80101290
  c->r[3]=R8(c->r[28]+0x00000024u); // 80101294
  W32(c->r[27]+0x00000020u,c->r[0]); // 80101298
  c->r[0]=R8(c->r[28]+0x00000025u); // 8010129C
  W8(c->r[27]+0x00000024u,c->r[3]); // 801012A0
  c->r[3]=R8(c->r[28]+0x00000026u); // 801012A4
  W8(c->r[27]+0x00000025u,c->r[0]); // 801012A8
  c->r[0]=R8(c->r[28]+0x00000027u); // 801012AC
  c->r[28]=c->r[28]+0x00000028u; // 801012B0
  W8(c->r[27]+0x00000026u,c->r[3]); // 801012B4
  W8(c->r[27]+0x00000027u,c->r[0]); // 801012B8
  c->r[27]=c->r[27]+0x00000028u; // 801012BC
  cmpu(c,0,c->r[27],c->r[29]); // 801012C0
  if (crb(c,0)) { IRQCHK(c); goto L_80101268; } // 801012C4
  c->r[0]=R32(c->r[31]+0x00000150u); // 801012C8
  c->r[3]=c->r[30]+0x00000158u; // 801012CC
  {uint32_t ea=c->r[31]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801012D0
  c->r[4]=c->r[31]+0x00000158u; // 801012D4
  W32(c->r[30]+0x00000150u,c->r[0]); // 801012D8
  {uint32_t ea=c->r[30]+0x00000154u; WF32(ea,c->f[0]);} // 801012DC
  c->lr=0x801012E4u; f_8003F484(c); // 801012E0
  c->r[6]=R8(c->r[31]+0x00000164u); // 801012E4
  c->r[11]=c->r[1]+0x00000020u; // 801012E8
  c->r[5]=R32(c->r[31]+0x00000168u); // 801012EC
  c->r[3]=c->r[30]|c->r[30]; // 801012F0
  c->r[4]=R32(c->r[31]+0x0000016Cu); // 801012F4
  c->r[0]=R8(c->r[31]+0x00000170u); // 801012F8
  {uint32_t ea=c->r[31]+0x00000174u; c->f[0]=c->ps1[0]=RF32(ea);} // 801012FC
  W8(c->r[30]+0x00000164u,c->r[6]); // 80101300
  W32(c->r[30]+0x00000168u,c->r[5]); // 80101304
  W32(c->r[30]+0x0000016Cu,c->r[4]); // 80101308
  W8(c->r[30]+0x00000170u,c->r[0]); // 8010130C
  {uint32_t ea=c->r[30]+0x00000174u; WF32(ea,c->f[0]);} // 80101310
  c->lr=0x80101318u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80101314
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101318
  c->lr=c->r[0]; // 8010131C
  c->r[1]=c->r[1]+0x00000020u; // 80101320
  return; // 80101324
}

// fn_80101328
void f_80101328(Ctx* __restrict c) {
  trace_call(0x80101328u);
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80101328
  if (crb(c,2)) return; // 8010132C
  c->r[4]=0u+0x00000080u; // 80101330
  c->r[5]=0u+0x00000080u; // 80101334
  c->r[6]=0u+0x00000080u; // 80101338
  c->r[7]=0u+0x000000FFu; // 8010133C
  c->r[3]=c->r[3]+0x00000CA4u; // 80101340
  f_800FD068(c); return; // 80101344
  return; // 80101348
}

// fn_8010134C
void f_8010134C(Ctx* __restrict c) {
  trace_call(0x8010134Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010134C
  c->r[0]=c->lr; // 80101350
  W32(c->r[1]+0x000001D4u,c->r[0]); // 80101354
  {uint32_t ea=c->r[1]+0x00000188u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80101358
  c->r[30]=c->r[3]|c->r[3]; // 8010135C
  c->r[14]=c->r[4]|c->r[4]; // 80101360
  c->r[4]=c->r[5]|c->r[5]; // 80101364
  W8(c->r[1]+0x00000008u,c->r[8]); // 80101368
  c->r[15]=c->r[6]|c->r[6]; // 8010136C
  c->r[31]=c->r[7]|c->r[7]; // 80101370
  c->r[3]=c->r[1]+0x0000010Cu; // 80101374
  c->lr=0x8010137Cu; f_801328F8(c); // 80101378
  c->r[3]=c->r[30]|c->r[30]; // 8010137C
  c->r[4]=c->r[14]|c->r[14]; // 80101380
  c->lr=0x80101388u; f_800FEC58(c); // 80101384
  c->r[0]=0u+0x00000000u; // 80101388
  c->r[4]=0u+0x803E0000u; // 8010138C
  W32(c->r[1]+0x00000030u,c->r[0]); // 80101390
  c->r[4]=c->r[4]+0xFFFFC19Cu; // 80101394
  c->r[3]=c->r[1]+0x000000CCu; // 80101398
  c->r[5]=R32(c->r[30]+0x00000B24u); // 8010139C
  c->r[4]=c->r[4]+0x00000050u; // 801013A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801013A4
  c->lr=0x801013ACu; f_80291CC4(c); // 801013A8
  c->r[3]=c->r[1]+0x0000010Cu; // 801013AC
  c->r[4]=c->r[1]+0x000000CCu; // 801013B0
  c->r[5]=c->r[1]+0x00000030u; // 801013B4
  c->r[6]=0u+0x00000000u; // 801013B8
  c->lr=0x801013C0u; f_801329F8(c); // 801013BC
  cmps(c,0,(int32_t)c->r[3],0); // 801013C0
  if (crb(c,2)) { goto L_8010141C; } // 801013C4
  c->r[5]=R32(c->r[30]+0x000004A8u); // 801013C8
  c->r[3]=c->r[30]+0x00000A50u; // 801013CC
  c->r[6]=R32(c->r[1]+0x00000030u); // 801013D0
  c->r[4]=c->r[30]+0x00000C54u; // 801013D4
  c->lr=0x801013DCu; f_80101AB0(c); // 801013D8
  c->r[0]=R32(c->r[30]+0x00000B30u); // 801013DC
  cmps(c,0,(int32_t)c->r[0],0); // 801013E0
  if (crb(c,2)) { goto L_8010141C; } // 801013E4
  c->r[3]=c->r[30]+0x00000BB8u; // 801013E8
  c->r[4]=c->r[30]+0x00000A50u; // 801013EC
  c->lr=0x801013F4u; f_80101928(c); // 801013F0
  c->r[4]=R32(c->r[30]+0x00000B30u); // 801013F4
  c->r[3]=c->r[1]+0x00000018u; // 801013F8
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801013FC
  W32(c->r[1]+0x00000018u,c->r[0]); // 80101400
  c->lr=0x80101408u; f_800CF64C(c); // 80101404
  c->r[6]=R32(c->r[1]+0x00000030u); // 80101408
  c->r[5]=c->r[3]|c->r[3]; // 8010140C
  c->r[3]=c->r[30]+0x00000BB8u; // 80101410
  c->r[4]=0u+0x00000000u; // 80101414
  c->lr=0x8010141Cu; f_80101AB0(c); // 80101418
L_8010141C:;
  c->r[14]=0u+0x803E0000u; // 8010141C
  c->r[4]=R32(c->r[30]+0x00000B24u); // 80101420
  c->r[14]=c->r[14]+0xFFFFC19Cu; // 80101424
  c->r[5]=c->r[15]|c->r[15]; // 80101428
  c->r[3]=c->r[1]+0x0000008Cu; // 8010142C
  c->r[6]=c->r[14]+0x0000003Au; // 80101430
  c->lr=0x80101438u; f_800FACD0(c); // 80101434
  c->r[3]=c->r[1]+0x0000008Cu; // 80101438
  c->r[6]=c->r[14]|c->r[14]; // 8010143C
  c->r[4]=c->r[3]|c->r[3]; // 80101440
  c->r[5]=c->r[14]+0x00000064u; // 80101444
  c->lr=0x8010144Cu; f_800FACD0(c); // 80101448
  c->r[14]=0u+0x00000000u; // 8010144C
  c->r[3]=c->r[1]+0x0000010Cu; // 80101450
  W32(c->r[1]+0x0000002Cu,c->r[14]); // 80101454
  c->r[4]=c->r[1]+0x0000008Cu; // 80101458
  c->r[5]=c->r[1]+0x0000002Cu; // 8010145C
  c->r[6]=0u+0x00000000u; // 80101460
  c->lr=0x80101468u; f_801329F8(c); // 80101464
  cmps(c,0,(int32_t)c->r[3],0); // 80101468
  if (!crb(c,2)) { goto L_80101474; } // 8010146C
  W32(c->r[1]+0x0000002Cu,c->r[14]); // 80101470
L_80101474:;
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 80101474
  c->r[3]=c->r[30]|c->r[30]; // 80101478
  c->lr=0x80101480u; f_800FF04C(c); // 8010147C
  c->r[14]=0u+0x803E0000u; // 80101480
  c->r[4]=R32(c->r[30]+0x00000B24u); // 80101484
  c->r[14]=c->r[14]+0xFFFFC19Cu; // 80101488
  c->r[5]=c->r[15]|c->r[15]; // 8010148C
  c->r[3]=c->r[1]+0x0000008Cu; // 80101490
  c->r[6]=c->r[14]+0x0000003Au; // 80101494
  c->lr=0x8010149Cu; f_800FACD0(c); // 80101498
  c->r[3]=c->r[1]+0x0000008Cu; // 8010149C
  c->r[6]=c->r[14]|c->r[14]; // 801014A0
  c->r[4]=c->r[3]|c->r[3]; // 801014A4
  c->r[5]=c->r[14]+0x0000006Au; // 801014A8
  c->lr=0x801014B0u; f_800FACD0(c); // 801014AC
  c->r[3]=c->r[1]+0x0000010Cu; // 801014B0
  c->r[4]=c->r[1]+0x0000008Cu; // 801014B4
  c->r[5]=c->r[1]+0x0000002Cu; // 801014B8
  c->r[6]=0u+0x00000000u; // 801014BC
  c->lr=0x801014C4u; f_801329F8(c); // 801014C0
  cmps(c,0,(int32_t)c->r[3],0); // 801014C4
  if (crb(c,2)) { goto L_801014D8; } // 801014C8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801014CC
  W32(c->r[30]+0x00000C4Cu,c->r[0]); // 801014D0
  goto L_801014E0; // 801014D4
L_801014D8:;
  c->r[0]=0u+0x00000000u; // 801014D8
  W32(c->r[30]+0x00000C4Cu,c->r[0]); // 801014DC
L_801014E0:;
  c->r[3]=c->r[30]+0x000009C0u; // 801014E0
  c->lr=0x801014E8u; f_800FF494(c); // 801014E4
  cmps(c,0,(int32_t)c->r[31],0); // 801014E8
  if (crb(c,2)) { goto L_801017D8; } // 801014EC
  c->r[0]=R8(c->r[31]+0x00000000u); // 801014F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801014F4
  if (crb(c,2)) { goto L_801017D8; } // 801014F8
  c->r[14]=0u+0x803E0000u; // 801014FC
  c->r[4]=R32(c->r[30]+0x00000B24u); // 80101500
  c->r[14]=c->r[14]+0xFFFFC19Cu; // 80101504
  c->r[5]=c->r[31]|c->r[31]; // 80101508
  c->r[3]=c->r[1]+0x0000004Cu; // 8010150C
  c->r[6]=c->r[14]+0x0000003Au; // 80101510
  c->lr=0x80101518u; f_800FACD0(c); // 80101514
  c->r[3]=c->r[1]+0x0000004Cu; // 80101518
  c->r[6]=c->r[14]|c->r[14]; // 8010151C
  c->r[4]=c->r[3]|c->r[3]; // 80101520
  c->r[5]=c->r[14]+0x00000076u; // 80101524
  c->lr=0x8010152Cu; f_800FACD0(c); // 80101528
  c->r[0]=0u+0x00000000u; // 8010152C
  c->r[3]=c->r[1]+0x0000010Cu; // 80101530
  W32(c->r[1]+0x00000028u,c->r[0]); // 80101534
  c->r[4]=c->r[1]+0x0000004Cu; // 80101538
  c->r[5]=c->r[1]+0x00000028u; // 8010153C
  c->r[6]=0u+0x00000000u; // 80101540
  c->lr=0x80101548u; f_801329F8(c); // 80101544
  cmps(c,0,(int32_t)c->r[3],0); // 80101548
  if (crb(c,2)) { goto L_8010173C; } // 8010154C
  c->r[3]=R32(c->r[1]+0x00000028u); // 80101550
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 80101554
  W32(c->r[1]+0x00000024u,c->r[3]); // 80101558
  if (crb(c,2)) { goto L_8010157C; } // 8010155C
  c->r[3]=0u+0x803F0000u; // 80101560
  c->r[5]=0u+0x803F0000u; // 80101564
  c->r[3]=c->r[3]+0x00001D4Fu; // 80101568
  c->r[4]=0u+0x0000003Cu; // 8010156C
  c->r[5]=c->r[5]+0x00001D28u; // 80101570
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80101574
  c->lr=0x8010157Cu; f_803444BC(c); // 80101578
L_8010157C:;
  c->r[3]=c->r[1]+0x00000024u; // 8010157C
  c->lr=0x80101584u; f_80364F00(c); // 80101580
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101584
  c->r[3]=c->r[1]+0x00000024u; // 80101588
  c->r[4]=c->r[1]+0x00000010u; // 8010158C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80101590
  c->lr=0x80101598u; f_80364CCC(c); // 80101594
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101598
  c->r[3]=c->r[30]|c->r[30]; // 8010159C
  c->r[4]=c->r[1]+0x00000014u; // 801015A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801015A4
  c->lr=0x801015ACu; f_800FF254(c); // 801015A8
  c->r[10]=R32(c->r[30]+0x000009DCu); // 801015AC
  c->r[0]=0u+0x00000003u; // 801015B0
  c->r[9]=R32(c->r[30]+0x000009E0u); // 801015B4
  c->r[5]=c->r[30]+0x00000B58u; // 801015B8
  c->r[8]=R32(c->r[30]+0x000009E4u); // 801015BC
  c->r[4]=c->r[30]+0x000009F0u; // 801015C0
  c->r[7]=R32(c->r[30]+0x000009E8u); // 801015C4
  c->r[6]=R32(c->r[30]+0x000009ECu); // 801015C8
  c->r[3]=R32(c->r[30]+0x000009F0u); // 801015CC
  W32(c->r[30]+0x00000B44u,c->r[10]); // 801015D0
  W32(c->r[30]+0x00000B48u,c->r[9]); // 801015D4
  W32(c->r[30]+0x00000B4Cu,c->r[8]); // 801015D8
  W32(c->r[30]+0x00000B50u,c->r[7]); // 801015DC
  W32(c->r[30]+0x00000B54u,c->r[6]); // 801015E0
  W32(c->r[30]+0x00000B58u,c->r[3]); // 801015E4
  c->ctr=c->r[0]; // 801015E8
L_801015EC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801015EC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801015F0
  W32(c->r[5]+0x00000004u,c->r[3]); // 801015F4
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801015F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801015EC; } // 801015FC
  c->r[3]=c->r[30]+0x00000B74u; // 80101600
  c->r[4]=c->r[30]+0x00000A0Cu; // 80101604
  c->lr=0x8010160Cu; f_8003F468(c); // 80101608
  c->r[3]=c->r[30]+0x00000B80u; // 8010160C
  c->r[4]=c->r[30]+0x00000A18u; // 80101610
  c->lr=0x80101618u; f_8003F468(c); // 80101614
  c->r[3]=c->r[30]+0x00000B8Cu; // 80101618
  c->r[4]=c->r[30]+0x00000A24u; // 8010161C
  c->lr=0x80101624u; f_8003F468(c); // 80101620
  c->r[3]=c->r[30]+0x00000B98u; // 80101624
  c->r[4]=c->r[30]+0x00000A30u; // 80101628
  c->lr=0x80101630u; f_8003F468(c); // 8010162C
  c->r[3]=c->r[30]+0x00000BA4u; // 80101630
  c->r[4]=c->r[30]+0x00000A3Cu; // 80101634
  c->lr=0x8010163Cu; f_8003F468(c); // 80101638
  c->r[15]=R8(c->r[30]+0x00000A6Du); // 8010163C
  c->r[3]=c->r[30]+0x00000B28u; // 80101640
  c->r[0]=R32(c->r[30]+0x00000A68u); // 80101644
  W32(c->r[1]+0x00000184u,c->r[15]); // 80101648
  c->r[15]=R8(c->r[30]+0x00000A6Eu); // 8010164C
  W32(c->r[30]+0x00000BD0u,c->r[0]); // 80101650
  c->r[0]=R32(c->r[1]+0x00000184u); // 80101654
  W32(c->r[1]+0x0000017Cu,c->r[15]); // 80101658
  c->r[15]=R8(c->r[30]+0x00000A6Fu); // 8010165C
  W8(c->r[30]+0x00000BD5u,c->r[0]); // 80101660
  c->r[0]=R32(c->r[1]+0x0000017Cu); // 80101664
  c->r[16]=R8(c->r[30]+0x00000A48u); // 80101668
  c->r[17]=R8(c->r[30]+0x00000A49u); // 8010166C
  c->r[18]=R8(c->r[30]+0x00000A4Au); // 80101670
  c->r[19]=R8(c->r[30]+0x00000A4Bu); // 80101674
  c->r[20]=R32(c->r[30]+0x00000A4Cu); // 80101678
  c->r[21]=R32(c->r[30]+0x00000A50u); // 8010167C
  c->r[22]=R32(c->r[30]+0x00000A54u); // 80101680
  c->r[23]=R8(c->r[30]+0x00000A58u); // 80101684
  c->r[24]=R8(c->r[30]+0x00000A59u); // 80101688
  c->r[25]=R8(c->r[30]+0x00000A5Au); // 8010168C
  c->r[26]=R8(c->r[30]+0x00000A5Bu); // 80101690
  c->r[27]=R8(c->r[30]+0x00000A5Cu); // 80101694
  c->r[28]=R8(c->r[30]+0x00000A5Du); // 80101698
  c->r[29]=R8(c->r[30]+0x00000A5Eu); // 8010169C
  c->r[12]=R8(c->r[30]+0x00000A5Fu); // 801016A0
  c->r[11]=R8(c->r[30]+0x00000A60u); // 801016A4
  c->r[10]=R8(c->r[30]+0x00000A61u); // 801016A8
  c->r[9]=R8(c->r[30]+0x00000A62u); // 801016AC
  c->r[8]=R8(c->r[30]+0x00000A63u); // 801016B0
  c->r[7]=R8(c->r[30]+0x00000A64u); // 801016B4
  c->r[6]=R8(c->r[30]+0x00000A65u); // 801016B8
  c->r[5]=R8(c->r[30]+0x00000A66u); // 801016BC
  c->r[4]=R8(c->r[30]+0x00000A67u); // 801016C0
  c->r[14]=R8(c->r[30]+0x00000A6Cu); // 801016C4
  W8(c->r[30]+0x00000BD6u,c->r[0]); // 801016C8
  c->r[0]=c->r[15]|c->r[15]; // 801016CC
  W32(c->r[1]+0x00000180u,c->r[15]); // 801016D0
  W8(c->r[30]+0x00000BB0u,c->r[16]); // 801016D4
  W8(c->r[30]+0x00000BB1u,c->r[17]); // 801016D8
  W8(c->r[30]+0x00000BB2u,c->r[18]); // 801016DC
  W8(c->r[30]+0x00000BB3u,c->r[19]); // 801016E0
  W32(c->r[30]+0x00000BB4u,c->r[20]); // 801016E4
  W32(c->r[30]+0x00000BB8u,c->r[21]); // 801016E8
  W32(c->r[30]+0x00000BBCu,c->r[22]); // 801016EC
  W8(c->r[30]+0x00000BC0u,c->r[23]); // 801016F0
  W8(c->r[30]+0x00000BC1u,c->r[24]); // 801016F4
  W8(c->r[30]+0x00000BC2u,c->r[25]); // 801016F8
  W8(c->r[30]+0x00000BC3u,c->r[26]); // 801016FC
  W8(c->r[30]+0x00000BC4u,c->r[27]); // 80101700
  W8(c->r[30]+0x00000BC5u,c->r[28]); // 80101704
  W8(c->r[30]+0x00000BC6u,c->r[29]); // 80101708
  W8(c->r[30]+0x00000BC7u,c->r[12]); // 8010170C
  W8(c->r[30]+0x00000BC8u,c->r[11]); // 80101710
  W8(c->r[30]+0x00000BC9u,c->r[10]); // 80101714
  W8(c->r[30]+0x00000BCAu,c->r[9]); // 80101718
  W8(c->r[30]+0x00000BCBu,c->r[8]); // 8010171C
  W8(c->r[30]+0x00000BCCu,c->r[7]); // 80101720
  W8(c->r[30]+0x00000BCDu,c->r[6]); // 80101724
  W8(c->r[30]+0x00000BCEu,c->r[5]); // 80101728
  W8(c->r[30]+0x00000BCFu,c->r[4]); // 8010172C
  W8(c->r[30]+0x00000BD4u,c->r[14]); // 80101730
  W8(c->r[30]+0x00000BD7u,c->r[0]); // 80101734
  c->lr=0x8010173Cu; f_800FF494(c); // 80101738
L_8010173C:;
  c->r[14]=0u+0x803E0000u; // 8010173C
  c->r[4]=R32(c->r[30]+0x00000B24u); // 80101740
  c->r[14]=c->r[14]+0xFFFFC19Cu; // 80101744
  c->r[5]=c->r[31]|c->r[31]; // 80101748
  c->r[3]=c->r[1]+0x0000004Cu; // 8010174C
  c->r[6]=c->r[14]+0x0000003Au; // 80101750
  c->lr=0x80101758u; f_800FACD0(c); // 80101754
  c->r[3]=c->r[1]+0x0000004Cu; // 80101758
  c->r[6]=c->r[14]|c->r[14]; // 8010175C
  c->r[4]=c->r[3]|c->r[3]; // 80101760
  c->r[5]=c->r[14]+0x0000007Du; // 80101764
  c->lr=0x8010176Cu; f_800FACD0(c); // 80101768
  c->r[3]=c->r[1]+0x0000010Cu; // 8010176C
  c->r[4]=c->r[1]+0x0000004Cu; // 80101770
  c->r[5]=c->r[1]+0x00000020u; // 80101774
  c->r[6]=0u+0x00000000u; // 80101778
  c->lr=0x80101780u; f_801329F8(c); // 8010177C
  cmps(c,0,(int32_t)c->r[3],0); // 80101780
  if (crb(c,2)) { goto L_801017D8; } // 80101784
  c->r[3]=R32(c->r[13]+0xFFFF94E8u); // 80101788
  c->r[4]=R32(c->r[1]+0x00000020u); // 8010178C
  c->lr=0x80101794u; f_800A35B8(c); // 80101790
  W32(c->r[30]+0x00000C48u,c->r[3]); // 80101794
  c->r[3]=R32(c->r[30]+0x000009C8u); // 80101798
  c->r[0]=R32(c->r[3]+0x000000E8u); // 8010179C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801017A0
  c->r[3]=R32(c->r[30]+0x00000B30u); // 801017A4
  cmps(c,0,(int32_t)c->r[3],0); // 801017A8
  if (crb(c,2)) { goto L_801017B8; } // 801017AC
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801017B0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801017B4
L_801017B8:;
  c->r[3]=R32(c->r[13]+0xFFFF94E8u); // 801017B8
  c->r[5]=c->r[1]+0x0000001Cu; // 801017BC
  c->r[4]=R32(c->r[30]+0x00000C48u); // 801017C0
  c->lr=0x801017C8u; f_800A3ADC(c); // 801017C4
  cmps(c,0,(int32_t)c->r[3],0); // 801017C8
  if (!crb(c,2)) { goto L_801017D8; } // 801017CC
  c->r[0]=0u+0xFFFFFFFFu; // 801017D0
  W32(c->r[30]+0x00000C48u,c->r[0]); // 801017D4
L_801017D8:;
  c->r[14]=R32(c->r[30]+0x00000B24u); // 801017D8
  cmps(c,0,(int32_t)c->r[14],0); // 801017DC
  if (crb(c,2)) { goto L_80101858; } // 801017E0
  c->lr=0x801017E8u; f_8004FBE8(c); // 801017E4
  c->r[4]=c->r[14]|c->r[14]; // 801017E8
  c->lr=0x801017F0u; f_80050338(c); // 801017EC
  cmps(c,0,(int32_t)c->r[3],0); // 801017F0
  c->r[14]=c->r[3]|c->r[3]; // 801017F4
  if (crb(c,2)) { goto L_80101858; } // 801017F8
  c->lr=0x80101800u; f_80051534(c); // 801017FC
  c->r[15]=c->r[3]|c->r[3]; // 80101800
  c->r[4]=R32(c->r[30]+0x000009C8u); // 80101804
  c->r[5]=c->r[15]|c->r[15]; // 80101808
  c->r[3]=c->r[13]+0xFFFF9600u; // 8010180C
  c->r[6]=0u+0x00000001u; // 80101810
  c->lr=0x80101818u; f_800A7378(c); // 80101814
  c->r[4]=R32(c->r[30]+0x00000B30u); // 80101818
  cmps(c,0,(int32_t)c->r[4],0); // 8010181C
  if (crb(c,2)) { goto L_80101834; } // 80101820
  c->r[5]=c->r[15]|c->r[15]; // 80101824
  c->r[3]=c->r[13]+0xFFFF9600u; // 80101828
  c->r[6]=0u+0x00000001u; // 8010182C
  c->lr=0x80101834u; f_800A7378(c); // 80101830
L_80101834:;
  c->r[4]=R32(c->r[14]+0x00000020u); // 80101834
  c->r[3]=c->r[30]+0x000009DCu; // 80101838
  c->lr=0x80101840u; f_8014253C(c); // 8010183C
  c->r[0]=R32(c->r[30]+0x00000B30u); // 80101840
  cmps(c,0,(int32_t)c->r[0],0); // 80101844
  if (crb(c,2)) { goto L_80101858; } // 80101848
  c->r[4]=R32(c->r[14]+0x00000020u); // 8010184C
  c->r[3]=c->r[30]+0x00000B44u; // 80101850
  c->lr=0x80101858u; f_8014253C(c); // 80101854
L_80101858:;
  c->r[5]=R32(c->r[30]+0x00000014u); // 80101858
  c->r[3]=c->r[30]+0x00000CA4u; // 8010185C
  c->r[4]=c->r[30]+0x000009C0u; // 80101860
  c->r[6]=c->r[30]+0x00000394u; // 80101864
  c->lr=0x8010186Cu; f_800FAD64(c); // 80101868
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 8010186C
  c->r[4]=0u+0x00000000u; // 80101870
  c->r[12]=R32(c->r[3]+0x00000000u); // 80101874
  c->r[12]=R32(c->r[12]+0x00000008u); // 80101878
  c->ctr=c->r[12]; // 8010187C
  if (true) { c->lr=0x80101884u; dispatch(c,c->ctr); } // 80101880
  c->r[4]=R32(c->r[30]+0x000009C8u); // 80101884
  c->r[3]=c->r[1]+0x0000000Cu; // 80101888
  c->r[0]=R32(c->r[4]+0x000000E8u); // 8010188C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80101890
  c->lr=0x80101898u; f_800CF64C(c); // 80101894
  c->r[4]=0u+0x803E0000u; // 80101898
  c->r[4]=c->r[4]+0xFFFFC19Cu; // 8010189C
  c->r[4]=c->r[4]+0x00000087u; // 801018A0
  c->lr=0x801018A8u; f_800A5668(c); // 801018A4
  cmpu(c,0,c->r[3],0x00000001u); // 801018A8
  if (!crb(c,2)) { goto L_801018B8; } // 801018AC
  c->r[0]=0u+0x00000001u; // 801018B0
  W8(c->r[30]+0x00000390u,c->r[0]); // 801018B4
L_801018B8:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801018B8
  cmps(c,0,(int32_t)c->r[0],0); // 801018BC
  if (!crb(c,2)) { goto L_80101908; } // 801018C0
  c->r[0]=R32(c->r[30]+0x00000CA0u); // 801018C4
  cmps(c,0,(int32_t)c->r[0],0); // 801018C8
  if (!crb(c,2)) { goto L_80101908; } // 801018CC
  c->r[3]=R32(c->r[30]+0x000009C8u); // 801018D0
  c->r[4]=c->r[1]+0x00000034u; // 801018D4
  c->lr=0x801018DCu; f_800A01F8(c); // 801018D8
  c->r[3]=R32(c->r[30]+0x000009C8u); // 801018DC
  c->r[5]=c->r[1]+0x00000034u; // 801018E0
  c->r[4]=0u+0x00000000u; // 801018E4
  c->lr=0x801018ECu; f_80380650(c); // 801018E8
  c->r[3]=R32(c->r[30]+0x000009C8u); // 801018EC
  c->r[4]=0u+0x00000009u; // 801018F0
  c->r[5]=0u+0x00000001u; // 801018F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801018F8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801018FC
  c->ctr=c->r[12]; // 80101900
  if (true) { c->lr=0x80101908u; dispatch(c,c->ctr); } // 80101904
L_80101908:;
  c->r[3]=c->r[1]+0x0000010Cu; // 80101908
  c->r[4]=0u+0xFFFFFFFFu; // 8010190C
  c->lr=0x80101914u; f_80132958(c); // 80101910
  {uint32_t ea=c->r[1]+0x00000188u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80101914
  c->r[0]=R32(c->r[1]+0x000001D4u); // 80101918
  c->lr=c->r[0]; // 8010191C
  c->r[1]=c->r[1]+0x000001D0u; // 80101920
  return; // 80101924
}

// fn_80101928
void f_80101928(Ctx* __restrict c) {
  trace_call(0x80101928u);
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000000u); // 80101928
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 8010192C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000004u); // 80101930
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80101934
  W16(c->r[3]+0x00000000u,c->r[7]); // 80101938
  W16(c->r[3]+0x00000002u,c->r[6]); // 8010193C
  W16(c->r[3]+0x00000004u,c->r[5]); // 80101940
  W16(c->r[3]+0x00000006u,c->r[0]); // 80101944
  return; // 80101948
}

// fn_8010194C
void f_8010194C(Ctx* __restrict c) {
  trace_call(0x8010194Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010194C
  c->r[0]=c->lr; // 80101950
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80101954
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80101958
  c->r[31]=c->r[4]|c->r[4]; // 8010195C
  W32(c->r[1]+0x00000098u,c->r[30]); // 80101960
  c->r[30]=c->r[3]|c->r[3]; // 80101964
  c->r[0]=R32(c->r[3]+0x000009C8u); // 80101968
  cmps(c,0,(int32_t)c->r[0],0); // 8010196C
  if (crb(c,2)) { goto L_801019D4; } // 80101970
  c->r[12]=R32(c->r[30]+0x000009C0u); // 80101974
  c->r[4]=c->r[30]+0x000009C0u; // 80101978
  c->r[3]=c->r[1]+0x00000068u; // 8010197C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80101980
  c->ctr=c->r[12]; // 80101984
  if (true) { c->lr=0x8010198Cu; dispatch(c,c->ctr); } // 80101988
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010198C
  c->r[3]=c->r[1]+0x00000020u; // 80101990
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101994
  {uint32_t ea=c->r[1]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 80101998
  c->lr=0x801019A0u; f_800521A0(c); // 8010199C
  c->r[5]=c->r[31]|c->r[31]; // 801019A0
  c->r[3]=c->r[1]+0x0000002Cu; // 801019A4
  c->r[4]=c->r[1]+0x00000020u; // 801019A8
  c->lr=0x801019B0u; f_801011E8(c); // 801019AC
  c->r[3]=c->r[1]+0x00000068u; // 801019B0
  c->r[4]=c->r[1]+0x0000002Cu; // 801019B4
  c->lr=0x801019BCu; f_80032FF4(c); // 801019B8
  c->r[12]=R32(c->r[30]+0x000009C0u); // 801019BC
  c->r[3]=c->r[30]+0x000009C0u; // 801019C0
  c->r[4]=c->r[1]+0x00000068u; // 801019C4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801019C8
  c->ctr=c->r[12]; // 801019CC
  if (true) { c->lr=0x801019D4u; dispatch(c,c->ctr); } // 801019D0
L_801019D4:;
  c->r[0]=R32(c->r[30]+0x00000B30u); // 801019D4
  cmps(c,0,(int32_t)c->r[0],0); // 801019D8
  if (crb(c,2)) { goto L_80101A40; } // 801019DC
  c->r[12]=R32(c->r[30]+0x00000B28u); // 801019E0
  c->r[4]=c->r[30]+0x00000B28u; // 801019E4
  c->r[3]=c->r[1]+0x00000038u; // 801019E8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801019EC
  c->ctr=c->r[12]; // 801019F0
  if (true) { c->lr=0x801019F8u; dispatch(c,c->ctr); } // 801019F4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801019F8
  c->r[3]=c->r[1]+0x00000008u; // 801019FC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80101A00
  {uint32_t ea=c->r[1]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 80101A04
  c->lr=0x80101A0Cu; f_800521A0(c); // 80101A08
  c->r[5]=c->r[31]|c->r[31]; // 80101A0C
  c->r[3]=c->r[1]+0x00000014u; // 80101A10
  c->r[4]=c->r[1]+0x00000008u; // 80101A14
  c->lr=0x80101A1Cu; f_801011E8(c); // 80101A18
  c->r[3]=c->r[1]+0x00000038u; // 80101A1C
  c->r[4]=c->r[1]+0x00000014u; // 80101A20
  c->lr=0x80101A28u; f_80032FF4(c); // 80101A24
  c->r[12]=R32(c->r[30]+0x00000B28u); // 80101A28
  c->r[3]=c->r[30]+0x00000B28u; // 80101A2C
  c->r[4]=c->r[1]+0x00000038u; // 80101A30
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80101A34
  c->ctr=c->r[12]; // 80101A38
  if (true) { c->lr=0x80101A40u; dispatch(c,c->ctr); } // 80101A3C
L_80101A40:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80101A40
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80101A44
  c->r[30]=R32(c->r[1]+0x00000098u); // 80101A48
  c->lr=c->r[0]; // 80101A4C
  c->r[1]=c->r[1]+0x000000A0u; // 80101A50
  return; // 80101A54
}

// fn_80101A58
void f_80101A58(Ctx* __restrict c) {
  trace_call(0x80101A58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101A58
  c->r[0]=c->lr; // 80101A5C
  c->r[4]=0u+0x803E0000u; // 80101A60
  c->r[4]=c->r[4]+0xFFFFC19Cu; // 80101A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101A68
  c->r[4]=c->r[4]+0x0000008Fu; // 80101A6C
  c->lr=0x80101A74u; f_801D30BC(c); // 80101A70
  c->r[4]=R32(c->r[3]+0x00000004u); // 80101A74
  cmps(c,0,(int32_t)c->r[4],6); // 80101A78
  if (!crb(c,0)) { goto L_80101A88; } // 80101A7C
  c->r[3]=0u+0x00000000u; // 80101A80
  goto L_80101AA0; // 80101A84
L_80101A88:;
  c->r[3]=0u+0x00000007u; // 80101A88
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80101A8C
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 80101A90
  c->r[3]=0u+0x00000000u; // 80101A94
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80101A98
  c->r[3]=c->r[3]+0x00000002u; // 80101A9C
L_80101AA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101AA0
  c->lr=c->r[0]; // 80101AA4
  c->r[1]=c->r[1]+0x00000010u; // 80101AA8
  return; // 80101AAC
}

// fn_80101AB0
void f_80101AB0(Ctx* __restrict c) {
  trace_call(0x80101AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101AB0
  c->r[0]=c->lr; // 80101AB4
  W32(c->r[1]+0x00000074u,c->r[0]); // 80101AB8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80101ABC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80101AC0
  c->r[11]=c->r[1]+0x00000060u; // 80101AC4
  c->lr=0x80101ACCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80101AC8
  cmps(c,0,(int32_t)c->r[6],0); // 80101ACC
  c->r[29]=c->r[3]|c->r[3]; // 80101AD0
  c->r[30]=c->r[4]|c->r[4]; // 80101AD4
  c->r[31]=c->r[5]|c->r[5]; // 80101AD8
  c->r[23]=c->r[6]|c->r[6]; // 80101ADC
  if (!crb(c,2)) { goto L_80101AEC; } // 80101AE0
  c->r[3]=0u+0x00000000u; // 80101AE4
  goto L_80101DC4; // 80101AE8
L_80101AEC:;
  c->r[3]=c->r[1]+0x00000020u; // 80101AEC
  c->lr=0x80101AF4u; f_801D3148(c); // 80101AF0
  cmps(c,0,(int32_t)c->r[23],0); // 80101AF4
  W32(c->r[1]+0x00000024u,c->r[23]); // 80101AF8
  W32(c->r[1]+0x0000002Cu,c->r[23]); // 80101AFC
  if (crb(c,2)) { goto L_80101DB4; } // 80101B00
  c->r[4]=0u+0x803E0000u; // 80101B04
  c->r[3]=c->r[23]|c->r[23]; // 80101B08
  c->r[4]=c->r[4]+0xFFFFC19Cu; // 80101B0C
  c->r[4]=c->r[4]+0x000000A4u; // 80101B10
  c->lr=0x80101B18u; f_801D30BC(c); // 80101B14
  cmps(c,0,(int32_t)c->r[3],0); // 80101B18
  c->r[25]=c->r[3]|c->r[3]; // 80101B1C
  if (crb(c,2)) { goto L_80101DB4; } // 80101B20
  c->lr=0x80101B28u; f_800521CC(c); // 80101B24
  c->r[3]=c->r[23]|c->r[23]; // 80101B28
  c->lr=0x80101B30u; f_80101A58(c); // 80101B2C
  cmps(c,0,(int32_t)c->r[3],2); // 80101B30
  if (!crb(c,2)) { goto L_80101C18; } // 80101B34
  c->r[24]=0u+0x00000000u; // 80101B38
  goto L_80101C08; // 80101B3C
L_80101B40:;
  c->r[4]=c->r[24]|c->r[24]; // 80101B40
  c->r[3]=c->r[25]|c->r[25]; // 80101B44
  c->r[24]=c->r[24]+0x00000001u; // 80101B48
  c->lr=0x80101B50u; f_800521E8(c); // 80101B4C
  c->r[23]=c->r[3]|c->r[3]; // 80101B50
  c->r[4]=c->r[24]|c->r[24]; // 80101B54
  c->r[3]=c->r[25]|c->r[25]; // 80101B58
  c->r[24]=c->r[24]+0x00000001u; // 80101B5C
  c->lr=0x80101B64u; f_800521E8(c); // 80101B60
  c->lr=0x80101B68u; f_80295EAC(c); // 80101B64
  c->r[28]=c->r[3]|c->r[3]; // 80101B68
  c->r[4]=c->r[24]|c->r[24]; // 80101B6C
  c->r[3]=c->r[25]|c->r[25]; // 80101B70
  c->r[24]=c->r[24]+0x00000001u; // 80101B74
  c->lr=0x80101B7Cu; f_800521E8(c); // 80101B78
  c->lr=0x80101B80u; f_80295EAC(c); // 80101B7C
  c->r[27]=c->r[3]|c->r[3]; // 80101B80
  c->r[4]=c->r[24]|c->r[24]; // 80101B84
  c->r[3]=c->r[25]|c->r[25]; // 80101B88
  c->lr=0x80101B90u; f_800521E8(c); // 80101B8C
  c->lr=0x80101B94u; f_80295EAC(c); // 80101B90
  c->r[24]=c->r[24]+0x00000008u; // 80101B94
  c->r[26]=c->r[3]|c->r[3]; // 80101B98
  c->r[4]=c->r[24]|c->r[24]; // 80101B9C
  c->r[3]=c->r[25]|c->r[25]; // 80101BA0
  c->r[24]=c->r[24]+0x00000001u; // 80101BA4
  c->lr=0x80101BACu; f_800521E8(c); // 80101BA8
  c->lr=0x80101BB0u; f_802953A0(c); // 80101BAC
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80101BB0
  c->r[3]=c->r[23]|c->r[23]; // 80101BB4
  c->r[4]=c->r[31]|c->r[31]; // 80101BB8
  c->lr=0x80101BC0u; f_80293554(c); // 80101BBC
  cmps(c,0,(int32_t)c->r[3],0); // 80101BC0
  if (!crb(c,2)) { goto L_80101C08; } // 80101BC4
  c->r[3]=c->r[1]+0x00000018u; // 80101BC8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 80101BCC
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 80101BD0
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 80101BD4
  c->lr=0x80101BDCu; f_80101DE4(c); // 80101BD8
  c->r[4]=c->r[3]|c->r[3]; // 80101BDC
  c->r[3]=c->r[29]|c->r[29]; // 80101BE0
  c->lr=0x80101BE8u; f_80101928(c); // 80101BE4
  cmps(c,0,(int32_t)c->r[30],0); // 80101BE8
  if (crb(c,2)) { goto L_80101BF4; } // 80101BEC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 80101BF0
L_80101BF4:;
  c->r[3]=c->r[1]+0x00000020u; // 80101BF4
  c->r[4]=0u+0x00000000u; // 80101BF8
  c->lr=0x80101C00u; f_801D3160(c); // 80101BFC
  c->r[3]=0u+0x00000001u; // 80101C00
  goto L_80101DC4; // 80101C04
L_80101C08:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 80101C08
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 80101C0C
  if (crb(c,0)) { IRQCHK(c); goto L_80101B40; } // 80101C10
  goto L_80101DB4; // 80101C14
L_80101C18:;
  cmps(c,0,(int32_t)c->r[3],1); // 80101C18
  if (!crb(c,2)) { goto L_80101CEC; } // 80101C1C
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[31]=c->ps1[31]=RF32(ea);} // 80101C20
  c->r[23]=0u+0x00000000u; // 80101C24
  goto L_80101CDC; // 80101C28
L_80101C2C:;
  c->r[4]=c->r[23]|c->r[23]; // 80101C2C
  c->r[3]=c->r[25]|c->r[25]; // 80101C30
  c->r[23]=c->r[23]+0x00000001u; // 80101C34
  c->lr=0x80101C3Cu; f_800521E8(c); // 80101C38
  c->r[24]=c->r[3]|c->r[3]; // 80101C3C
  c->r[4]=c->r[23]|c->r[23]; // 80101C40
  c->r[3]=c->r[25]|c->r[25]; // 80101C44
  c->r[23]=c->r[23]+0x00000001u; // 80101C48
  c->lr=0x80101C50u; f_800521E8(c); // 80101C4C
  c->lr=0x80101C54u; f_80295EAC(c); // 80101C50
  c->r[28]=c->r[3]|c->r[3]; // 80101C54
  c->r[4]=c->r[23]|c->r[23]; // 80101C58
  c->r[3]=c->r[25]|c->r[25]; // 80101C5C
  c->r[23]=c->r[23]+0x00000001u; // 80101C60
  c->lr=0x80101C68u; f_800521E8(c); // 80101C64
  c->lr=0x80101C6Cu; f_80295EAC(c); // 80101C68
  c->r[27]=c->r[3]|c->r[3]; // 80101C6C
  c->r[4]=c->r[23]|c->r[23]; // 80101C70
  c->r[3]=c->r[25]|c->r[25]; // 80101C74
  c->lr=0x80101C7Cu; f_800521E8(c); // 80101C78
  c->lr=0x80101C80u; f_80295EAC(c); // 80101C7C
  c->r[26]=c->r[3]|c->r[3]; // 80101C80
  c->r[3]=c->r[24]|c->r[24]; // 80101C84
  c->r[4]=c->r[31]|c->r[31]; // 80101C88
  c->r[23]=c->r[23]+0x00000008u; // 80101C8C
  c->lr=0x80101C94u; f_80293554(c); // 80101C90
  cmps(c,0,(int32_t)c->r[3],0); // 80101C94
  if (!crb(c,2)) { goto L_80101CDC; } // 80101C98
  c->r[3]=c->r[1]+0x00000010u; // 80101C9C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 80101CA0
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 80101CA4
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 80101CA8
  c->lr=0x80101CB0u; f_80101DE4(c); // 80101CAC
  c->r[4]=c->r[3]|c->r[3]; // 80101CB0
  c->r[3]=c->r[29]|c->r[29]; // 80101CB4
  c->lr=0x80101CBCu; f_80101928(c); // 80101CB8
  cmps(c,0,(int32_t)c->r[30],0); // 80101CBC
  if (crb(c,2)) { goto L_80101CC8; } // 80101CC0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 80101CC4
L_80101CC8:;
  c->r[3]=c->r[1]+0x00000020u; // 80101CC8
  c->r[4]=0u+0x00000000u; // 80101CCC
  c->lr=0x80101CD4u; f_801D3160(c); // 80101CD0
  c->r[3]=0u+0x00000001u; // 80101CD4
  goto L_80101DC4; // 80101CD8
L_80101CDC:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 80101CDC
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80101CE0
  if (crb(c,0)) { IRQCHK(c); goto L_80101C2C; } // 80101CE4
  goto L_80101DB4; // 80101CE8
L_80101CEC:;
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[31]=c->ps1[31]=RF32(ea);} // 80101CEC
  c->r[23]=0u+0x00000000u; // 80101CF0
  goto L_80101DA8; // 80101CF4
L_80101CF8:;
  c->r[4]=c->r[23]|c->r[23]; // 80101CF8
  c->r[3]=c->r[25]|c->r[25]; // 80101CFC
  c->r[23]=c->r[23]+0x00000001u; // 80101D00
  c->lr=0x80101D08u; f_800521E8(c); // 80101D04
  c->r[24]=c->r[3]|c->r[3]; // 80101D08
  c->r[4]=c->r[23]|c->r[23]; // 80101D0C
  c->r[3]=c->r[25]|c->r[25]; // 80101D10
  c->r[23]=c->r[23]+0x00000001u; // 80101D14
  c->lr=0x80101D1Cu; f_800521E8(c); // 80101D18
  c->lr=0x80101D20u; f_80295EAC(c); // 80101D1C
  c->r[26]=c->r[3]|c->r[3]; // 80101D20
  c->r[4]=c->r[23]|c->r[23]; // 80101D24
  c->r[3]=c->r[25]|c->r[25]; // 80101D28
  c->r[23]=c->r[23]+0x00000001u; // 80101D2C
  c->lr=0x80101D34u; f_800521E8(c); // 80101D30
  c->lr=0x80101D38u; f_80295EAC(c); // 80101D34
  c->r[27]=c->r[3]|c->r[3]; // 80101D38
  c->r[4]=c->r[23]|c->r[23]; // 80101D3C
  c->r[3]=c->r[25]|c->r[25]; // 80101D40
  c->r[23]=c->r[23]+0x00000001u; // 80101D44
  c->lr=0x80101D4Cu; f_800521E8(c); // 80101D48
  c->lr=0x80101D50u; f_80295EAC(c); // 80101D4C
  c->r[28]=c->r[3]|c->r[3]; // 80101D50
  c->r[3]=c->r[24]|c->r[24]; // 80101D54
  c->r[4]=c->r[31]|c->r[31]; // 80101D58
  c->lr=0x80101D60u; f_80293554(c); // 80101D5C
  cmps(c,0,(int32_t)c->r[3],0); // 80101D60
  if (!crb(c,2)) { goto L_80101DA8; } // 80101D64
  c->r[3]=c->r[1]+0x00000008u; // 80101D68
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 80101D6C
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 80101D70
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 80101D74
  c->lr=0x80101D7Cu; f_80101DE4(c); // 80101D78
  c->r[4]=c->r[3]|c->r[3]; // 80101D7C
  c->r[3]=c->r[29]|c->r[29]; // 80101D80
  c->lr=0x80101D88u; f_80101928(c); // 80101D84
  cmps(c,0,(int32_t)c->r[30],0); // 80101D88
  if (crb(c,2)) { goto L_80101D94; } // 80101D8C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 80101D90
L_80101D94:;
  c->r[3]=c->r[1]+0x00000020u; // 80101D94
  c->r[4]=0u+0x00000000u; // 80101D98
  c->lr=0x80101DA0u; f_801D3160(c); // 80101D9C
  c->r[3]=0u+0x00000001u; // 80101DA0
  goto L_80101DC4; // 80101DA4
L_80101DA8:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 80101DA8
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80101DAC
  if (crb(c,0)) { IRQCHK(c); goto L_80101CF8; } // 80101DB0
L_80101DB4:;
  c->r[3]=c->r[1]+0x00000020u; // 80101DB4
  c->r[4]=0u+0x00000000u; // 80101DB8
  c->lr=0x80101DC0u; f_801D3160(c); // 80101DBC
  c->r[3]=0u+0x00000000u; // 80101DC0
L_80101DC4:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80101DC4
  c->r[11]=c->r[1]+0x00000060u; // 80101DC8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80101DCC
  c->lr=0x80101DD4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80101DD0
  c->r[0]=R32(c->r[1]+0x00000074u); // 80101DD4
  c->lr=c->r[0]; // 80101DD8
  c->r[1]=c->r[1]+0x00000070u; // 80101DDC
  return; // 80101DE0
}

// fn_80101DE4
void f_80101DE4(Ctx* __restrict c) {
  trace_call(0x80101DE4u);
  c->r[0]=0u+0x00000000u; // 80101DE4
  W16(c->r[3]+0x00000000u,c->r[4]); // 80101DE8
  W16(c->r[3]+0x00000002u,c->r[5]); // 80101DEC
  W16(c->r[3]+0x00000004u,c->r[6]); // 80101DF0
  W16(c->r[3]+0x00000006u,c->r[0]); // 80101DF4
  return; // 80101DF8
}

// dtor_80101DFC
void f_80101DFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101DFC
  c->r[0]=c->lr; // 80101E00
  cmps(c,0,(int32_t)c->r[3],0); // 80101E04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101E08
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80101E0C
  c->r[30]=c->r[3]|c->r[3]; // 80101E10
  c->r[31]=c->r[4]|c->r[4]; // 80101E14
  if (crb(c,2)) { goto L_80101E34; } // 80101E18
  c->r[4]=0u+0x00000000u; // 80101E1C
  c->lr=0x80101E24u; f_801D3160(c); // 80101E20
  cmps(c,0,(int32_t)c->r[31],0); // 80101E24
  if (!crb(c,1)) { goto L_80101E34; } // 80101E28
  c->r[3]=c->r[30]|c->r[30]; // 80101E2C
  c->lr=0x80101E34u; f_802896EC(c); // 80101E30
L_80101E34:;
  c->r[3]=c->r[30]|c->r[30]; // 80101E34
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80101E38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101E3C
  c->lr=c->r[0]; // 80101E40
  c->r[1]=c->r[1]+0x00000010u; // 80101E44
  return; // 80101E48
}

// fn_80101E4C
void f_80101E4C(Ctx* __restrict c) {
  trace_call(0x80101E4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101E4C
  c->r[0]=c->lr; // 80101E50
  cmps(c,0,(int32_t)c->r[5],0); // 80101E54
  W32(c->r[1]+0x00000074u,c->r[0]); // 80101E58
  {uint32_t ea=c->r[1]+0x0000004Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80101E5C
  c->r[31]=c->r[3]|c->r[3]; // 80101E60
  c->r[29]=c->r[4]|c->r[4]; // 80101E64
  c->r[23]=c->r[5]|c->r[5]; // 80101E68
  if (crb(c,2)) { goto L_801021B4; } // 80101E6C
  c->r[3]=c->r[1]+0x00000038u; // 80101E70
  c->lr=0x80101E78u; f_801D3148(c); // 80101E74
  cmps(c,0,(int32_t)c->r[23],0); // 80101E78
  W32(c->r[1]+0x0000003Cu,c->r[23]); // 80101E7C
  W32(c->r[1]+0x00000044u,c->r[23]); // 80101E80
  if (crb(c,2)) { goto L_801021A8; } // 80101E84
  c->r[4]=0u+0x803E0000u; // 80101E88
  c->r[3]=c->r[23]|c->r[23]; // 80101E8C
  c->r[4]=c->r[4]+0xFFFFC19Cu; // 80101E90
  c->r[4]=c->r[4]+0x000000A4u; // 80101E94
  c->lr=0x80101E9Cu; f_801D30BC(c); // 80101E98
  cmps(c,0,(int32_t)c->r[3],0); // 80101E9C
  c->r[25]=c->r[3]|c->r[3]; // 80101EA0
  if (crb(c,2)) { goto L_801021A8; } // 80101EA4
  c->lr=0x80101EACu; f_800521CC(c); // 80101EA8
  c->r[3]=c->r[23]|c->r[23]; // 80101EAC
  c->lr=0x80101EB4u; f_80101A58(c); // 80101EB0
  cmps(c,0,(int32_t)c->r[3],2); // 80101EB4
  if (!crb(c,2)) { goto L_80102030; } // 80101EB8
  c->r[27]=0u+0x00000000u; // 80101EBC
  goto L_80102020; // 80101EC0
L_80101EC4:;
  c->r[3]=c->r[25]|c->r[25]; // 80101EC4
  c->r[4]=c->r[27]|c->r[27]; // 80101EC8
  c->lr=0x80101ED0u; f_800521E8(c); // 80101ECC
  c->r[27]=c->r[27]+0x00000004u; // 80101ED0
  c->r[28]=c->r[3]|c->r[3]; // 80101ED4
  c->r[4]=c->r[27]|c->r[27]; // 80101ED8
  c->r[3]=c->r[25]|c->r[25]; // 80101EDC
  c->r[27]=c->r[27]+0x00000001u; // 80101EE0
  c->lr=0x80101EE8u; f_800521E8(c); // 80101EE4
  c->lr=0x80101EECu; f_80295EAC(c); // 80101EE8
  c->r[26]=c->r[3]|c->r[3]; // 80101EEC
  c->r[4]=c->r[27]|c->r[27]; // 80101EF0
  c->r[3]=c->r[25]|c->r[25]; // 80101EF4
  c->r[27]=c->r[27]+0x00000001u; // 80101EF8
  c->lr=0x80101F00u; f_800521E8(c); // 80101EFC
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80101F00
  c->r[4]=c->r[27]|c->r[27]; // 80101F04
  c->r[3]=c->r[25]|c->r[25]; // 80101F08
  c->r[27]=c->r[27]+0x00000001u; // 80101F0C
  c->lr=0x80101F14u; f_800521E8(c); // 80101F10
  c->lr=0x80101F18u; f_80295EAC(c); // 80101F14
  W32(c->r[1]+0x00000020u,c->r[3]); // 80101F18
  c->r[4]=c->r[27]|c->r[27]; // 80101F1C
  c->r[3]=c->r[25]|c->r[25]; // 80101F20
  c->r[27]=c->r[27]+0x00000001u; // 80101F24
  c->lr=0x80101F2Cu; f_800521E8(c); // 80101F28
  W32(c->r[1]+0x00000030u,c->r[3]); // 80101F2C
  c->r[4]=c->r[27]|c->r[27]; // 80101F30
  c->r[3]=c->r[25]|c->r[25]; // 80101F34
  c->r[27]=c->r[27]+0x00000001u; // 80101F38
  c->lr=0x80101F40u; f_800521E8(c); // 80101F3C
  c->lr=0x80101F44u; f_80295EAC(c); // 80101F40
  W32(c->r[1]+0x00000024u,c->r[3]); // 80101F44
  c->r[4]=c->r[27]|c->r[27]; // 80101F48
  c->r[3]=c->r[25]|c->r[25]; // 80101F4C
  c->r[27]=c->r[27]+0x00000001u; // 80101F50
  c->lr=0x80101F58u; f_800521E8(c); // 80101F54
  W32(c->r[1]+0x00000034u,c->r[3]); // 80101F58
  c->r[4]=c->r[27]|c->r[27]; // 80101F5C
  c->r[3]=c->r[25]|c->r[25]; // 80101F60
  c->lr=0x80101F68u; f_800521E8(c); // 80101F64
  c->lr=0x80101F6Cu; f_80295EAC(c); // 80101F68
  W32(c->r[1]+0x00000028u,c->r[3]); // 80101F6C
  c->r[3]=c->r[28]|c->r[28]; // 80101F70
  c->r[4]=c->r[29]|c->r[29]; // 80101F74
  c->r[27]=c->r[27]+0x00000002u; // 80101F78
  c->lr=0x80101F80u; f_80293554(c); // 80101F7C
  cmps(c,0,(int32_t)c->r[3],0); // 80101F80
  if (!crb(c,2)) { goto L_80102020; } // 80101F84
  c->r[0]=0u-c->r[26]; // 80101F88
  c->r[3]=c->r[31]|c->r[31]; // 80101F8C
  c->r[0]=c->r[0]&~c->r[26]; // 80101F90
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80101F94
  c->lr=0x80101F9Cu; f_80142544(c); // 80101F98
  c->r[3]=c->r[26]+0xFFFFFFFEu; // 80101F9C
  c->r[28]=0u+0x803E0000u; // 80101FA0
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80101FA4
  c->r[24]=c->r[31]+0x0000007Cu; // 80101FA8
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80101FAC
  c->r[29]=c->r[1]+0x0000002Cu; // 80101FB0
  W8(c->r[31]+0x00000092u,c->r[0]); // 80101FB4
  c->r[28]=c->r[28]+0xFFFFC19Cu; // 80101FB8
  c->r[27]=c->r[1]+0x00000020u; // 80101FBC
  c->r[23]=0u+0x00000000u; // 80101FC0
  c->r[30]=0u+0x00000000u; // 80101FC4
  c->r[26]=0u+0x00000001u; // 80101FC8
L_80101FCC:;
  c->r[25]=R32(c->r[29]+c->r[30]); // 80101FCC
  c->r[4]=c->r[28]+0x000000B2u; // 80101FD0
  c->r[3]=c->r[25]|c->r[25]; // 80101FD4
  c->lr=0x80101FDCu; f_80293554(c); // 80101FD8
  cmps(c,0,(int32_t)c->r[3],0); // 80101FDC
  if (crb(c,2)) { goto L_8010200C; } // 80101FE0
  c->lr=0x80101FE8u; f_8004FBE8(c); // 80101FE4
  c->r[4]=c->r[25]|c->r[25]; // 80101FE8
  c->lr=0x80101FF0u; f_80050338(c); // 80101FEC
  cmps(c,0,(int32_t)c->r[3],0); // 80101FF0
  if (crb(c,2)) { goto L_80102008; } // 80101FF4
  c->r[4]=R32(c->r[3]+0x00000020u); // 80101FF8
  c->r[3]=c->r[24]+c->r[30]; // 80101FFC
  c->r[5]=R32(c->r[27]+c->r[30]); // 80102000
  c->lr=0x80102008u; f_801021C8(c); // 80102004
L_80102008:;
  W8(c->r[31]+0x00000093u,c->r[26]); // 80102008
L_8010200C:;
  c->r[23]=c->r[23]+0x00000001u; // 8010200C
  c->r[30]=c->r[30]+0x00000004u; // 80102010
  cmpu(c,0,c->r[23],0x00000003u); // 80102014
  if (crb(c,0)) { IRQCHK(c); goto L_80101FCC; } // 80102018
  goto L_801021A8; // 8010201C
L_80102020:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 80102020
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 80102024
  if (crb(c,0)) { IRQCHK(c); goto L_80101EC4; } // 80102028
  goto L_801021A8; // 8010202C
L_80102030:;
  cmps(c,0,(int32_t)c->r[3],1); // 80102030
  if (!crb(c,2)) { goto L_801021A8; } // 80102034
  c->r[23]=0u+0x00000000u; // 80102038
  goto L_8010219C; // 8010203C
L_80102040:;
  c->r[3]=c->r[25]|c->r[25]; // 80102040
  c->r[4]=c->r[23]|c->r[23]; // 80102044
  c->lr=0x8010204Cu; f_800521E8(c); // 80102048
  c->r[23]=c->r[23]+0x00000004u; // 8010204C
  c->r[24]=c->r[3]|c->r[3]; // 80102050
  c->r[4]=c->r[23]|c->r[23]; // 80102054
  c->r[3]=c->r[25]|c->r[25]; // 80102058
  c->r[23]=c->r[23]+0x00000001u; // 8010205C
  c->lr=0x80102064u; f_800521E8(c); // 80102060
  c->lr=0x80102068u; f_80295EAC(c); // 80102064
  c->r[26]=c->r[3]|c->r[3]; // 80102068
  c->r[4]=c->r[23]|c->r[23]; // 8010206C
  c->r[3]=c->r[25]|c->r[25]; // 80102070
  c->r[23]=c->r[23]+0x00000001u; // 80102074
  c->lr=0x8010207Cu; f_800521E8(c); // 80102078
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010207C
  c->r[4]=c->r[23]|c->r[23]; // 80102080
  c->r[3]=c->r[25]|c->r[25]; // 80102084
  c->r[23]=c->r[23]+0x00000001u; // 80102088
  c->lr=0x80102090u; f_800521E8(c); // 8010208C
  c->lr=0x80102094u; f_80295EAC(c); // 80102090
  W32(c->r[1]+0x00000008u,c->r[3]); // 80102094
  c->r[4]=c->r[23]|c->r[23]; // 80102098
  c->r[3]=c->r[25]|c->r[25]; // 8010209C
  c->r[23]=c->r[23]+0x00000001u; // 801020A0
  c->lr=0x801020A8u; f_800521E8(c); // 801020A4
  W32(c->r[1]+0x00000018u,c->r[3]); // 801020A8
  c->r[4]=c->r[23]|c->r[23]; // 801020AC
  c->r[3]=c->r[25]|c->r[25]; // 801020B0
  c->r[23]=c->r[23]+0x00000001u; // 801020B4
  c->lr=0x801020BCu; f_800521E8(c); // 801020B8
  c->lr=0x801020C0u; f_80295EAC(c); // 801020BC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801020C0
  c->r[4]=c->r[23]|c->r[23]; // 801020C4
  c->r[3]=c->r[25]|c->r[25]; // 801020C8
  c->r[23]=c->r[23]+0x00000001u; // 801020CC
  c->lr=0x801020D4u; f_800521E8(c); // 801020D0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801020D4
  c->r[4]=c->r[23]|c->r[23]; // 801020D8
  c->r[3]=c->r[25]|c->r[25]; // 801020DC
  c->r[23]=c->r[23]+0x00000001u; // 801020E0
  c->lr=0x801020E8u; f_800521E8(c); // 801020E4
  c->lr=0x801020ECu; f_80295EAC(c); // 801020E8
  W32(c->r[1]+0x00000010u,c->r[3]); // 801020EC
  c->r[3]=c->r[24]|c->r[24]; // 801020F0
  c->r[4]=c->r[29]|c->r[29]; // 801020F4
  c->lr=0x801020FCu; f_80293554(c); // 801020F8
  cmps(c,0,(int32_t)c->r[3],0); // 801020FC
  if (!crb(c,2)) { goto L_8010219C; } // 80102100
  c->r[0]=0u-c->r[26]; // 80102104
  c->r[3]=c->r[31]|c->r[31]; // 80102108
  c->r[0]=c->r[0]&~c->r[26]; // 8010210C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80102110
  c->lr=0x80102118u; f_80142544(c); // 80102114
  c->r[3]=c->r[26]+0xFFFFFFFEu; // 80102118
  c->r[27]=0u+0x803E0000u; // 8010211C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80102120
  c->r[23]=c->r[31]+0x0000007Cu; // 80102124
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80102128
  c->r[26]=c->r[1]+0x00000014u; // 8010212C
  W8(c->r[31]+0x00000092u,c->r[0]); // 80102130
  c->r[27]=c->r[27]+0xFFFFC19Cu; // 80102134
  c->r[28]=c->r[1]+0x00000008u; // 80102138
  c->r[24]=0u+0x00000000u; // 8010213C
  c->r[30]=0u+0x00000000u; // 80102140
  c->r[29]=0u+0x00000001u; // 80102144
L_80102148:;
  c->r[25]=R32(c->r[26]+c->r[30]); // 80102148
  c->r[4]=c->r[27]+0x000000B2u; // 8010214C
  c->r[3]=c->r[25]|c->r[25]; // 80102150
  c->lr=0x80102158u; f_80293554(c); // 80102154
  cmps(c,0,(int32_t)c->r[3],0); // 80102158
  if (crb(c,2)) { goto L_80102188; } // 8010215C
  c->lr=0x80102164u; f_8004FBE8(c); // 80102160
  c->r[4]=c->r[25]|c->r[25]; // 80102164
  c->lr=0x8010216Cu; f_80050338(c); // 80102168
  cmps(c,0,(int32_t)c->r[3],0); // 8010216C
  if (crb(c,2)) { goto L_80102184; } // 80102170
  c->r[4]=R32(c->r[3]+0x00000020u); // 80102174
  c->r[3]=c->r[23]+c->r[30]; // 80102178
  c->r[5]=R32(c->r[28]+c->r[30]); // 8010217C
  c->lr=0x80102184u; f_801021C8(c); // 80102180
L_80102184:;
  W8(c->r[31]+0x00000093u,c->r[29]); // 80102184
L_80102188:;
  c->r[24]=c->r[24]+0x00000001u; // 80102188
  c->r[30]=c->r[30]+0x00000004u; // 8010218C
  cmpu(c,0,c->r[24],0x00000003u); // 80102190
  if (crb(c,0)) { IRQCHK(c); goto L_80102148; } // 80102194
  goto L_801021A8; // 80102198
L_8010219C:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 8010219C
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 801021A0
  if (crb(c,0)) { IRQCHK(c); goto L_80102040; } // 801021A4
L_801021A8:;
  c->r[3]=c->r[1]+0x00000038u; // 801021A8
  c->r[4]=0u+0x00000000u; // 801021AC
  c->lr=0x801021B4u; f_801D3160(c); // 801021B0
L_801021B4:;
  {uint32_t ea=c->r[1]+0x0000004Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801021B4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801021B8
  c->lr=c->r[0]; // 801021BC
  c->r[1]=c->r[1]+0x00000070u; // 801021C0
  return; // 801021C4
}

// fn_801021C8
void f_801021C8(Ctx* __restrict c) {
  trace_call(0x801021C8u);
  W8(c->r[3]+0x00000000u,c->r[4]); // 801021C8
  W8(c->r[3]+0x00000001u,c->r[5]); // 801021CC
  return; // 801021D0
}

// fn_801021D4
void f_801021D4(Ctx* __restrict c) {
  trace_call(0x801021D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801021D4
  c->r[0]=c->lr; // 801021D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801021DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801021E0
  c->r[31]=c->r[3]|c->r[3]; // 801021E4
  c->r[12]=R32(c->r[3]+0x000009C0u); // 801021E8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801021EC
  c->ctr=c->r[12]; // 801021F0
  c->r[3]=c->r[3]+0x000009C0u; // 801021F4
  if (true) { c->lr=0x801021FCu; dispatch(c,c->ctr); } // 801021F8
  c->r[12]=R32(c->r[31]+0x000009C0u); // 801021FC
  c->r[3]=c->r[31]+0x000009C0u; // 80102200
  c->r[12]=R32(c->r[12]+0x00000018u); // 80102204
  c->ctr=c->r[12]; // 80102208
  if (true) { c->lr=0x80102210u; dispatch(c,c->ctr); } // 8010220C
  c->r[0]=R32(c->r[31]+0x00000B30u); // 80102210
  cmps(c,0,(int32_t)c->r[0],0); // 80102214
  if (crb(c,2)) { goto L_80102244; } // 80102218
  c->r[12]=R32(c->r[31]+0x00000B28u); // 8010221C
  c->r[3]=c->r[31]+0x00000B28u; // 80102220
  c->r[12]=R32(c->r[12]+0x00000020u); // 80102224
  c->ctr=c->r[12]; // 80102228
  if (true) { c->lr=0x80102230u; dispatch(c,c->ctr); } // 8010222C
  c->r[12]=R32(c->r[31]+0x00000B28u); // 80102230
  c->r[3]=c->r[31]+0x00000B28u; // 80102234
  c->r[12]=R32(c->r[12]+0x00000018u); // 80102238
  c->ctr=c->r[12]; // 8010223C
  if (true) { c->lr=0x80102244u; dispatch(c,c->ctr); } // 80102240
L_80102244:;
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 80102244
  c->r[3]=0u+0x803F0000u; // 80102248
  {uint32_t ea=c->r[2]+0xFFFF925Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010224C
  c->r[3]=c->r[3]+0x00003224u; // 80102250
  c->r[0]=c->r[13]+0xFFFF80C5u; // 80102254
  cmps(c,0,(int32_t)c->r[31],0); // 80102258
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8010225C
  c->r[4]=c->r[31]|c->r[31]; // 80102260
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80102264
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102268
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010226C
  if (crb(c,2)) { goto L_80102278; } // 80102270
  c->r[4]=c->r[31]+0x00000048u; // 80102274
L_80102278:;
  c->r[3]=R32(c->r[31]+0x00000050u); // 80102278
  c->r[5]=c->r[1]+0x00000008u; // 8010227C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80102280
  c->r[12]=R32(c->r[12]+0x00000024u); // 80102284
  c->ctr=c->r[12]; // 80102288
  if (true) { c->lr=0x80102290u; dispatch(c,c->ctr); } // 8010228C
  c->r[12]=R32(c->r[31]+0x000009C0u); // 80102290
  c->r[3]=c->r[31]+0x000009C0u; // 80102294
  c->r[12]=R32(c->r[12]+0x00000020u); // 80102298
  c->ctr=c->r[12]; // 8010229C
  if (true) { c->lr=0x801022A4u; dispatch(c,c->ctr); } // 801022A0
  c->r[12]=R32(c->r[31]+0x000009C0u); // 801022A4
  c->r[3]=c->r[31]+0x000009C0u; // 801022A8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801022AC
  c->ctr=c->r[12]; // 801022B0
  if (true) { c->lr=0x801022B8u; dispatch(c,c->ctr); } // 801022B4
  c->r[3]=c->r[31]|c->r[31]; // 801022B8
  c->r[4]=0u+0x00000000u; // 801022BC
  c->r[5]=0u+0x00000000u; // 801022C0
  c->lr=0x801022C8u; f_80076080(c); // 801022C4
  c->r[3]=c->r[31]+0x0000174Cu; // 801022C8
  c->lr=0x801022D0u; f_8003F1D4(c); // 801022CC
  cmps(c,0,(int32_t)c->r[3],0); // 801022D0
  if (crb(c,2)) { goto L_801022F0; } // 801022D4
  c->r[3]=c->r[31]+0x0000174Cu; // 801022D8
  c->lr=0x801022E0u; f_80068A78(c); // 801022DC
  c->r[12]=R32(c->r[3]+0x00000010u); // 801022E0
  c->r[12]=R32(c->r[12]+0x00000030u); // 801022E4
  c->ctr=c->r[12]; // 801022E8
  if (true) { c->lr=0x801022F0u; dispatch(c,c->ctr); } // 801022EC
L_801022F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801022F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801022F4
  c->lr=c->r[0]; // 801022F8
  c->r[1]=c->r[1]+0x00000020u; // 801022FC
  return; // 80102300
}

// fn_80102304
void f_80102304(Ctx* __restrict c) {
  trace_call(0x80102304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102304
  c->r[0]=c->lr; // 80102308
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010230C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102310
  c->r[31]=c->r[3]|c->r[3]; // 80102314
  c->r[12]=R32(c->r[3]+0x000009C0u); // 80102318
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010231C
  c->ctr=c->r[12]; // 80102320
  c->r[3]=c->r[3]+0x000009C0u; // 80102324
  if (true) { c->lr=0x8010232Cu; dispatch(c,c->ctr); } // 80102328
  c->r[0]=R32(c->r[31]+0x00000B30u); // 8010232C
  cmps(c,0,(int32_t)c->r[0],0); // 80102330
  if (crb(c,2)) { goto L_8010234C; } // 80102334
  c->r[12]=R32(c->r[31]+0x00000B28u); // 80102338
  c->r[3]=c->r[31]+0x00000B28u; // 8010233C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80102340
  c->ctr=c->r[12]; // 80102344
  if (true) { c->lr=0x8010234Cu; dispatch(c,c->ctr); } // 80102348
L_8010234C:;
  c->r[3]=c->r[31]+0x0000174Cu; // 8010234C
  c->lr=0x80102354u; f_8003F1D4(c); // 80102350
  cmps(c,0,(int32_t)c->r[3],0); // 80102354
  if (crb(c,2)) { goto L_80102374; } // 80102358
  c->r[3]=c->r[31]+0x0000174Cu; // 8010235C
  c->lr=0x80102364u; f_80068A78(c); // 80102360
  c->r[12]=R32(c->r[3]+0x00000010u); // 80102364
  c->r[12]=R32(c->r[12]+0x00000030u); // 80102368
  c->ctr=c->r[12]; // 8010236C
  if (true) { c->lr=0x80102374u; dispatch(c,c->ctr); } // 80102370
L_80102374:;
  c->r[12]=R32(c->r[31]+0x000009C0u); // 80102374
  c->r[3]=c->r[31]+0x000009C0u; // 80102378
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010237C
  c->ctr=c->r[12]; // 80102380
  if (true) { c->lr=0x80102388u; dispatch(c,c->ctr); } // 80102384
  c->r[3]=c->r[31]|c->r[31]; // 80102388
  c->r[4]=0u+0x00000000u; // 8010238C
  c->r[5]=0u+0x00000000u; // 80102390
  c->lr=0x80102398u; f_80076080(c); // 80102394
  c->r[3]=c->r[31]|c->r[31]; // 80102398
  c->lr=0x801023A0u; f_800D9778(c); // 8010239C
  c->r[3]=c->r[31]+0x00000C64u; // 801023A0
  c->lr=0x801023A8u; f_8013FA28(c); // 801023A4
  c->r[3]=c->r[31]+0x00000C80u; // 801023A8
  c->lr=0x801023B0u; f_8013F1B0(c); // 801023AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801023B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801023B4
  c->lr=c->r[0]; // 801023B8
  c->r[1]=c->r[1]+0x00000010u; // 801023BC
  return; // 801023C0
}

// fn_801023C4
void f_801023C4(Ctx* __restrict c) {
  trace_call(0x801023C4u);
  c->r[3]=0u+0x00000004u; // 801023C4
  return; // 801023C8
}

// fn_801023CC
void f_801023CC(Ctx* __restrict c) {
  trace_call(0x801023CCu);
  c->r[3]=0u+0x00000001u; // 801023CC
  return; // 801023D0
}

// fn_801023D4
void f_801023D4(Ctx* __restrict c) {
  trace_call(0x801023D4u);
  c->r[3]=0u+0x00000000u; // 801023D4
  return; // 801023D8
}

// fn_801023DC
void f_801023DC(Ctx* __restrict c) {
  trace_call(0x801023DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801023DC
  c->r[0]=c->lr; // 801023E0
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[1]=c->ps1[1]=RF32(ea);} // 801023E4
  c->r[3]=0u+0x80490000u; // 801023E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801023EC
  c->r[3]=c->r[3]+0xFFFFE440u; // 801023F0
  c->f[3]=c->f[1]; // 801023F4
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[2]=c->ps1[2]=RF32(ea);} // 801023F8
  c->lr=0x80102400u; f_8003F588(c); // 801023FC
  c->r[3]=0u+0x80490000u; // 80102400
  c->r[3]=c->r[3]+0xFFFFE458u; // 80102404
  c->lr=0x8010240Cu; f_8010241C(c); // 80102408
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010240C
  c->lr=c->r[0]; // 80102410
  c->r[1]=c->r[1]+0x00000010u; // 80102414
  return; // 80102418
}

// fn_8010241C
void f_8010241C(Ctx* __restrict c) {
  trace_call(0x8010241Cu);
  c->r[0]=0u+0x00000000u; // 8010241C
  W32(c->r[3]+0x00000400u,c->r[0]); // 80102420
  return; // 80102424
}

// fn_80102428
void f_80102428(Ctx* __restrict c) {
  trace_call(0x80102428u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80102428
  f_800FFD3C(c); return; // 8010242C
}

// fn_80102430
void f_80102430(Ctx* __restrict c) {
  trace_call(0x80102430u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80102430
  f_800FFDA4(c); return; // 80102434
}

// fn_80102438
void f_80102438(Ctx* __restrict c) {
  trace_call(0x80102438u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102438
  c->r[0]=c->lr; // 8010243C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102444
  c->r[31]=c->r[3]|c->r[3]; // 80102448
  c->lr=0x80102450u; f_8003EBC0(c); // 8010244C
  c->r[3]=R8(c->r[31]+0x0000000Cu); // 80102450
  c->r[4]=0u+0x00000000u; // 80102454
  c->r[5]=0u+0x80400000u; // 80102458
  W8(c->r[31]+0x00000028u,c->r[4]); // 8010245C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFF0Fu; // 80102460
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 80102464
  c->r[0]=rotl(c->r[3],0)&0x00000007u; // 80102468
  c->r[5]=c->r[5]+0xFFFF8318u; // 8010246C
  c->r[3]=c->r[31]|c->r[31]; // 80102470
  W32(c->r[31]+0x00000008u,c->r[5]); // 80102474
  W32(c->r[31]+0x00000010u,c->r[4]); // 80102478
  W32(c->r[31]+0x00000014u,c->r[4]); // 8010247C
  W32(c->r[31]+0x00000018u,c->r[4]); // 80102480
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 80102484
  W32(c->r[31]+0x00000020u,c->r[4]); // 80102488
  W32(c->r[31]+0x00000024u,c->r[4]); // 8010248C
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 80102490
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102494
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102498
  c->lr=c->r[0]; // 8010249C
  c->r[1]=c->r[1]+0x00000010u; // 801024A0
  return; // 801024A4
}

// fn_801024A8
void f_801024A8(Ctx* __restrict c) {
  trace_call(0x801024A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801024A8
  c->r[0]=c->lr; // 801024AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801024B0
  c->r[0]=0u+0x00000000u; // 801024B4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801024B8
  c->r[30]=0u+0x00000021u; // 801024BC
  c->r[31]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[30]); // 801024C0
  c->r[27]=c->r[3]|c->r[3]; // 801024C4
  c->r[28]=0u+0x80000000u; // 801024C8
  c->r[29]=0u+0x000003E8u; // 801024CC
  goto L_801024F0; // 801024D0
L_801024D4:;
  c->r[0]=R32(c->r[28]+0x000000F8u); // 801024D4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801024D8
  c->r[3]=divwu(c->r[0],c->r[29]); // 801024DC
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[30])>>32); // 801024E0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)33); // 801024E4
  c->r[3]=c->r[0]+c->r[31]; // 801024E8
  c->lr=0x801024F0u; f_802626CC(c); // 801024EC
L_801024F0:;
  c->r[0]=R8(c->r[27]+0x0000000Cu); // 801024F0
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801024F4
  if (!crb(c,2)) { IRQCHK(c); goto L_801024D4; } // 801024F8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801024FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102500
  c->lr=c->r[0]; // 80102504
  c->r[1]=c->r[1]+0x00000020u; // 80102508
  return; // 8010250C
}

// fn_80102510
void f_80102510(Ctx* __restrict c) {
  trace_call(0x80102510u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102510
  c->r[0]=c->lr; // 80102514
  c->r[4]=0u+0x803F0000u; // 80102518
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010251C
  c->r[4]=c->r[4]+0x00001CC4u; // 80102520
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80102524
  c->r[30]=c->r[3]|c->r[3]; // 80102528
  W32(c->r[3]+0x00000000u,c->r[4]); // 8010252C
  c->r[3]=c->r[3]+0x00000004u; // 80102530
  c->lr=0x80102538u; f_8025FC94(c); // 80102534
  c->r[4]=0u+0x80400000u; // 80102538
  c->r[3]=c->r[30]+0x00000028u; // 8010253C
  c->r[4]=c->r[4]+0xFFFF82F0u; // 80102540
  W32(c->r[30]+0x00000000u,c->r[4]); // 80102544
  c->lr=0x8010254Cu; f_8003EBC0(c); // 80102548
  c->r[0]=c->r[30]+0x00000028u; // 8010254C
  c->r[31]=0u+0x00000000u; // 80102550
  W32(c->r[30]+0x00000024u,c->r[31]); // 80102554
  c->r[3]=c->r[30]+0x00000030u; // 80102558
  W32(c->r[30]+0x00000028u,c->r[0]); // 8010255C
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 80102560
  c->lr=0x80102568u; f_80102598(c); // 80102564
  c->r[3]=c->r[30]+0x000001A4u; // 80102568
  c->lr=0x80102570u; f_80102598(c); // 8010256C
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 80102570
  c->r[3]=c->r[30]|c->r[30]; // 80102574
  W32(c->r[30]+0x00000020u,c->r[31]); // 80102578
  W32(c->r[30]+0x0000019Cu,c->r[31]); // 8010257C
  W32(c->r[30]+0x000001A0u,c->r[31]); // 80102580
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80102584
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102588
  c->lr=c->r[0]; // 8010258C
  c->r[1]=c->r[1]+0x00000010u; // 80102590
  return; // 80102594
}

// fn_80102598
void f_80102598(Ctx* __restrict c) {
  trace_call(0x80102598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102598
  c->r[0]=c->lr; // 8010259C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801025A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801025A4
  c->r[31]=c->r[3]|c->r[3]; // 801025A8
  c->lr=0x801025B0u; f_800F7D58(c); // 801025AC
  c->r[5]=0u+0x803F0000u; // 801025B0
  c->r[4]=0u+0x803F0000u; // 801025B4
  c->r[5]=c->r[5]+0x00001CB0u; // 801025B8
  c->r[3]=c->r[31]+0x00000044u; // 801025BC
  c->r[4]=c->r[4]+0x00001CC4u; // 801025C0
  W32(c->r[31]+0x00000000u,c->r[5]); // 801025C4
  W32(c->r[31]+0x00000040u,c->r[4]); // 801025C8
  c->lr=0x801025D0u; f_8025FC94(c); // 801025CC
  c->r[3]=c->r[31]|c->r[31]; // 801025D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801025D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801025D8
  c->lr=c->r[0]; // 801025DC
  c->r[1]=c->r[1]+0x00000010u; // 801025E0
  return; // 801025E4
}

// dtor_801025E8
void f_801025E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801025E8
  c->r[0]=c->lr; // 801025EC
  cmps(c,0,(int32_t)c->r[3],0); // 801025F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801025F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801025F8
  c->r[30]=c->r[3]|c->r[3]; // 801025FC
  c->r[31]=c->r[4]|c->r[4]; // 80102600
  if (crb(c,2)) { goto L_80102620; } // 80102604
  c->r[4]=0u+0x00000000u; // 80102608
  c->lr=0x80102610u; f_803B4FA4(c); // 8010260C
  cmps(c,0,(int32_t)c->r[31],0); // 80102610
  if (!crb(c,1)) { goto L_80102620; } // 80102614
  c->r[3]=c->r[30]|c->r[30]; // 80102618
  c->lr=0x80102620u; f_802896EC(c); // 8010261C
L_80102620:;
  c->r[3]=c->r[30]|c->r[30]; // 80102620
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80102624
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102628
  c->lr=c->r[0]; // 8010262C
  c->r[1]=c->r[1]+0x00000010u; // 80102630
  return; // 80102634
}

// dtor_80102638
void f_80102638(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102638
  c->r[0]=c->lr; // 8010263C
  cmps(c,0,(int32_t)c->r[3],0); // 80102640
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102644
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80102648
  c->r[30]=c->r[3]|c->r[3]; // 8010264C
  c->r[31]=c->r[4]|c->r[4]; // 80102650
  if (crb(c,2)) { goto L_8010268C; } // 80102654
  c->r[4]=0u+0xFFFFFFFFu; // 80102658
  c->r[3]=c->r[3]+0x000001A4u; // 8010265C
  c->lr=0x80102664u; f_8004D530(c); // 80102660
  c->r[3]=c->r[30]+0x00000030u; // 80102664
  c->r[4]=0u+0xFFFFFFFFu; // 80102668
  c->lr=0x80102670u; f_8004D530(c); // 8010266C
  c->r[3]=c->r[30]+0x00000024u; // 80102670
  c->r[4]=0u+0xFFFFFFFFu; // 80102674
  c->lr=0x8010267Cu; f_801025E8(c); // 80102678
  cmps(c,0,(int32_t)c->r[31],0); // 8010267C
  if (!crb(c,1)) { goto L_8010268C; } // 80102680
  c->r[3]=c->r[30]|c->r[30]; // 80102684
  c->lr=0x8010268Cu; f_802896EC(c); // 80102688
L_8010268C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010268C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80102690
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102694
  c->lr=c->r[0]; // 80102698
  c->r[1]=c->r[1]+0x00000010u; // 8010269C
  return; // 801026A0
}

// fn_801026A4
void f_801026A4(Ctx* __restrict c) {
  trace_call(0x801026A4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801026A4
  c->r[0]=c->lr; // 801026A8
  W32(c->r[1]+0x00000124u,c->r[0]); // 801026AC
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801026B0
  c->r[26]=c->r[3]|c->r[3]; // 801026B4
  c->r[27]=c->r[4]|c->r[4]; // 801026B8
  c->r[28]=c->r[5]|c->r[5]; // 801026BC
  c->r[29]=c->r[6]|c->r[6]; // 801026C0
  c->r[30]=c->r[7]|c->r[7]; // 801026C4
  c->r[31]=c->r[8]|c->r[8]; // 801026C8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801026CC
  cmps(c,0,(int32_t)c->r[0],0); // 801026D0
  if (crb(c,2)) { goto L_801026E8; } // 801026D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801026D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801026DC
  c->ctr=c->r[12]; // 801026E0
  if (true) { c->lr=0x801026E8u; dispatch(c,c->ctr); } // 801026E4
L_801026E8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801026E8
  W32(c->r[26]+0x0000001Cu,c->r[27]); // 801026EC
  W32(c->r[26]+0x00000020u,c->r[28]); // 801026F0
  if (crb(c,2)) { goto L_8010270C; } // 801026F4
  c->r[4]=c->r[27]|c->r[27]; // 801026F8
  c->r[5]=c->r[28]|c->r[28]; // 801026FC
  c->r[6]=c->r[29]|c->r[29]; // 80102700
  c->r[3]=c->r[26]+0x00000030u; // 80102704
  c->lr=0x8010270Cu; f_800F7DE8(c); // 80102708
L_8010270C:;
  c->r[3]=c->r[26]+0x00000024u; // 8010270C
  c->lr=0x80102714u; f_803B5070(c); // 80102710
  c->r[0]=0u+0x00000000u; // 80102714
  c->r[3]=0u+0xFFFFFFFFu; // 80102718
  cmps(c,0,(int32_t)c->r[30],0); // 8010271C
  W32(c->r[26]+0x0000008Cu,c->r[3]); // 80102720
  W32(c->r[26]+0x00000090u,c->r[0]); // 80102724
  W8(c->r[26]+0x00000094u,c->r[0]); // 80102728
  W32(c->r[26]+0x00000098u,c->r[0]); // 8010272C
  W8(c->r[26]+0x00000095u,c->r[0]); // 80102730
  W32(c->r[26]+0x0000019Cu,c->r[30]); // 80102734
  W32(c->r[26]+0x000001A0u,c->r[31]); // 80102738
  if (crb(c,2)) { goto L_80102768; } // 8010273C
  c->r[3]=0u+0x803E0000u; // 80102740
  c->r[4]=c->r[29]|c->r[29]; // 80102744
  c->r[3]=c->r[3]+0xFFFFC250u; // 80102748
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010274C
  c->lr=0x80102754u; f_80291CC4(c); // 80102750
  c->r[4]=c->r[30]|c->r[30]; // 80102754
  c->r[5]=c->r[31]|c->r[31]; // 80102758
  c->r[3]=c->r[26]+0x000001A4u; // 8010275C
  c->r[6]=c->r[1]+0x00000008u; // 80102760
  c->lr=0x80102768u; f_800F7DE8(c); // 80102764
L_80102768:;
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80102768
  c->r[0]=R32(c->r[1]+0x00000124u); // 8010276C
  c->lr=c->r[0]; // 80102770
  c->r[1]=c->r[1]+0x00000120u; // 80102774
  return; // 80102778
}

// fn_8010277C
void f_8010277C(Ctx* __restrict c) {
  trace_call(0x8010277Cu);
  W32(c->r[3]+0x00000090u,c->r[4]); // 8010277C
  return; // 80102780
}

// fn_80102784
void f_80102784(Ctx* __restrict c) {
  trace_call(0x80102784u);
  c->r[0]=R8(c->r[3]+0x00000095u); // 80102784
  cmps(c,0,(int32_t)c->r[0],0); // 80102788
  if (crb(c,2)) return; // 8010278C
  c->r[0]=R32(c->r[3]+0x00000090u); // 80102790
  c->r[4]=0u+0x00000000u; // 80102794
  W8(c->r[3]+0x00000095u,c->r[4]); // 80102798
  c->r[0]=c->r[0]^0x00000001u; // 8010279C
  W32(c->r[3]+0x00000090u,c->r[0]); // 801027A0
  return; // 801027A4
}

// fn_801027A8
void f_801027A8(Ctx* __restrict c) {
  trace_call(0x801027A8u);
  c->r[5]=0u+0x00000020u; // 801027A8
  c->r[3]=c->r[3]+0x00000030u; // 801027AC
  f_800F7F1C(c); return; // 801027B0
}

// fn_801027B4
void f_801027B4(Ctx* __restrict c) {
  trace_call(0x801027B4u);
  c->r[5]=0u+0x00000020u; // 801027B4
  c->r[3]=c->r[3]+0x00000030u; // 801027B8
  f_800F80AC(c); return; // 801027BC
}

// fn_801027C0
void f_801027C0(Ctx* __restrict c) {
  trace_call(0x801027C0u);
  c->r[3]=c->r[3]+0x00000030u; // 801027C0
  f_800F8418(c); return; // 801027C4
}

// fn_801027C8
void f_801027C8(Ctx* __restrict c) {
  trace_call(0x801027C8u);
  c->r[5]=0u+0x00000020u; // 801027C8
  c->r[3]=c->r[3]+0x000001A4u; // 801027CC
  f_800F7F1C(c); return; // 801027D0
}

// fn_801027D4
void f_801027D4(Ctx* __restrict c) {
  trace_call(0x801027D4u);
  c->r[0]=R32(c->r[3]+0x0000019Cu); // 801027D4
  cmps(c,0,(int32_t)c->r[0],0); // 801027D8
  if (!crb(c,2)) { goto L_801027E8; } // 801027DC
  c->r[3]=c->r[3]+0x00000030u; // 801027E0
  f_800F8418(c); return; // 801027E4
L_801027E8:;
  c->r[3]=c->r[3]+0x000001A4u; // 801027E8
  f_800F8418(c); return; // 801027EC
}

// fn_801027F0
void f_801027F0(Ctx* __restrict c) {
  trace_call(0x801027F0u);
  W8(c->r[13]+0xFFFF9569u,c->r[3]); // 801027F0
  return; // 801027F4
}

// fn_801027F8
void f_801027F8(Ctx* __restrict c) {
  trace_call(0x801027F8u);
  c->r[6]=0u+0x80430000u; // 801027F8
  c->r[6]=c->r[6]+0xFFFF8788u; // 801027FC
  goto L_80102840; // 80102800
L_80102804:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[7]); // 80102804
  c->r[0]=0u+0x00000000u; // 80102808
  if (crb(c,0)) { goto L_80102818; } // 8010280C
  cmps(c,0,(int32_t)c->r[7],256); // 80102810
  if (crb(c,0)) { goto L_8010281C; } // 80102814
L_80102818:;
  c->r[0]=0u+0x00000001u; // 80102818
L_8010281C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8010281C
  if (crb(c,2)) { goto L_80102828; } // 80102820
  goto L_80102834; // 80102824
L_80102828:;
  c->r[5]=R32(c->r[6]+0x00000038u); // 80102828
  c->r[5]=R32(c->r[5]+0x00000010u); // 8010282C
  c->r[7]=R8(c->r[5]+c->r[7]); // 80102830
L_80102834:;
  W8(c->r[3]+0x00000000u,c->r[7]); // 80102834
  c->r[3]=c->r[3]+0x00000001u; // 80102838
  c->r[4]=c->r[4]+0x00000001u; // 8010283C
L_80102840:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 80102840
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 80102844
  if (!crb(c,2)) { IRQCHK(c); goto L_80102804; } // 80102848
  c->r[0]=0u+0x00000000u; // 8010284C
  W8(c->r[3]+0x00000000u,c->r[0]); // 80102850
  return; // 80102854
}

// fn_80102858
void f_80102858(Ctx* __restrict c) {
  trace_call(0x80102858u);
  {uint32_t ea=c->r[1]+0xFFFFFCF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102858
  c->r[0]=c->lr; // 8010285C
  W32(c->r[1]+0x00000314u,c->r[0]); // 80102860
  W32(c->r[1]+0x0000030Cu,c->r[31]); // 80102864
  c->r[31]=c->r[4]|c->r[4]; // 80102868
  c->r[4]=c->r[3]|c->r[3]; // 8010286C
  c->r[3]=c->r[1]+0x00000108u; // 80102870
  c->lr=0x80102878u; f_801027F8(c); // 80102874
  c->r[4]=c->r[31]|c->r[31]; // 80102878
  c->r[3]=c->r[1]+0x00000008u; // 8010287C
  c->lr=0x80102884u; f_801027F8(c); // 80102880
  c->r[3]=c->r[1]+0x00000108u; // 80102884
  c->r[4]=c->r[1]+0x00000008u; // 80102888
  c->lr=0x80102890u; f_80293554(c); // 8010288C
  cmps(c,0,(int32_t)c->r[3],0); // 80102890
  if (!crb(c,2)) { goto L_801028A0; } // 80102894
  c->r[3]=0u+0x00000001u; // 80102898
  goto L_801028C0; // 8010289C
L_801028A0:;
  c->r[3]=c->r[1]+0x00000208u; // 801028A0
  c->r[4]=c->r[1]+0x00000108u; // 801028A4
  c->lr=0x801028ACu; f_80136614(c); // 801028A8
  c->r[3]=c->r[1]+0x00000208u; // 801028AC
  c->r[4]=c->r[1]+0x00000008u; // 801028B0
  c->lr=0x801028B8u; f_80293554(c); // 801028B4
  c->r[0]=cntlz(c->r[3]); // 801028B8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801028BC
L_801028C0:;
  c->r[0]=R32(c->r[1]+0x00000314u); // 801028C0
  c->r[31]=R32(c->r[1]+0x0000030Cu); // 801028C4
  c->lr=c->r[0]; // 801028C8
  c->r[1]=c->r[1]+0x00000310u; // 801028CC
  return; // 801028D0
}

// fn_801028D4
void f_801028D4(Ctx* __restrict c) {
  trace_call(0x801028D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801028D4
  c->r[0]=c->lr; // 801028D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801028DC
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801028E0
  c->r[30]=c->r[3]|c->r[3]; // 801028E4
  c->r[31]=c->r[1]|c->r[1]; // 801028E8
  c->r[27]=c->r[4]|c->r[4]; // 801028EC
  c->r[28]=c->r[5]|c->r[5]; // 801028F0
  c->r[3]=c->r[3]+0x00000004u; // 801028F4
  c->lr=0x801028FCu; f_8025FCCC(c); // 801028F8
  c->r[3]=c->r[30]+0x00000024u; // 801028FC
  c->lr=0x80102904u; f_80102A8C(c); // 80102900
  W32(c->r[31]+0x00000014u,c->r[3]); // 80102904
  W32(c->r[31]+0x00000018u,c->r[3]); // 80102908
  goto L_8010295C; // 8010290C
L_80102910:;
  c->r[29]=R32(c->r[31]+0x00000018u); // 80102910
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 80102914
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 80102918
  if (!crb(c,2)) { goto L_80102950; } // 8010291C
  c->r[4]=c->r[27]|c->r[27]; // 80102920
  c->r[3]=c->r[29]+0x00000028u; // 80102924
  c->lr=0x8010292Cu; f_80293554(c); // 80102928
  cmps(c,0,(int32_t)c->r[3],0); // 8010292C
  if (!crb(c,2)) { goto L_80102950; } // 80102930
  W32(c->r[29]+0x00000018u,c->r[28]); // 80102934
  c->r[3]=c->r[30]+0x00000004u; // 80102938
  c->r[4]=R32(c->r[29]+0x00000020u); // 8010293C
  c->r[0]=c->r[4]+0x00000001u; // 80102940
  W32(c->r[29]+0x00000020u,c->r[0]); // 80102944
  c->lr=0x8010294Cu; f_8025FDA8(c); // 80102948
  goto L_80102A70; // 8010294C
L_80102950:;
  c->r[3]=c->r[31]+0x00000018u; // 80102950
  c->r[4]=0u+0x00000000u; // 80102954
  c->lr=0x8010295Cu; f_80102A94(c); // 80102958
L_8010295C:;
  c->r[3]=c->r[30]+0x00000024u; // 8010295C
  c->lr=0x80102964u; f_80102AA8(c); // 80102960
  c->r[0]=R32(c->r[31]+0x00000018u); // 80102964
  c->r[4]=c->r[31]+0x0000000Cu; // 80102968
  W32(c->r[31]+0x00000010u,c->r[3]); // 8010296C
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80102970
  c->r[3]=c->r[31]+0x00000008u; // 80102974
  W32(c->r[31]+0x00000008u,c->r[0]); // 80102978
  c->lr=0x80102980u; f_80102AB0(c); // 8010297C
  c->r[0]=cntlz(c->r[3]); // 80102980
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80102984
  if (!crb(c,2)) { IRQCHK(c); goto L_80102910; } // 80102988
  c->r[0]=R32(c->r[30]+0x0000019Cu); // 8010298C
  cmps(c,0,(int32_t)c->r[0],0); // 80102990
  if (crb(c,2)) { goto L_801029B8; } // 80102994
  c->r[12]=R32(c->r[30]+0x00000000u); // 80102998
  c->r[3]=c->r[30]|c->r[30]; // 8010299C
  c->r[4]=0u+0x0000008Cu; // 801029A0
  c->r[12]=R32(c->r[12]+0x00000020u); // 801029A4
  c->ctr=c->r[12]; // 801029A8
  if (true) { c->lr=0x801029B0u; dispatch(c,c->ctr); } // 801029AC
  c->r[29]=c->r[3]|c->r[3]; // 801029B0
  goto L_80102A0C; // 801029B4
L_801029B8:;
  c->r[0]=R8(c->r[30]+0x00000094u); // 801029B8
  cmps(c,0,(int32_t)c->r[0],0); // 801029BC
  if (crb(c,2)) { goto L_801029D0; } // 801029C0
  c->r[0]=R32(c->r[30]+0x00000090u); // 801029C4
  cmps(c,0,(int32_t)c->r[0],0); // 801029C8
  if (!crb(c,2)) { goto L_801029F0; } // 801029CC
L_801029D0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801029D0
  c->r[3]=c->r[30]|c->r[30]; // 801029D4
  c->r[4]=0u+0x0000008Cu; // 801029D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801029DC
  c->ctr=c->r[12]; // 801029E0
  if (true) { c->lr=0x801029E8u; dispatch(c,c->ctr); } // 801029E4
  c->r[29]=c->r[3]|c->r[3]; // 801029E8
  goto L_80102A0C; // 801029EC
L_801029F0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801029F0
  c->r[3]=c->r[30]|c->r[30]; // 801029F4
  c->r[4]=0u+0x0000008Cu; // 801029F8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801029FC
  c->ctr=c->r[12]; // 80102A00
  if (true) { c->lr=0x80102A08u; dispatch(c,c->ctr); } // 80102A04
  c->r[29]=c->r[3]|c->r[3]; // 80102A08
L_80102A0C:;
  cmps(c,0,(int32_t)c->r[29],0); // 80102A0C
  if (crb(c,2)) { goto L_80102A20; } // 80102A10
  W32(c->r[31]+0x00000030u,c->r[1]); // 80102A14
  c->r[3]=c->r[29]|c->r[29]; // 80102A18
  c->lr=0x80102A20u; f_80102438(c); // 80102A1C
L_80102A20:;
  c->r[4]=c->r[27]|c->r[27]; // 80102A20
  c->r[3]=c->r[29]+0x00000028u; // 80102A24
  c->lr=0x80102A2Cu; f_802933D8(c); // 80102A28
  W32(c->r[29]+0x00000018u,c->r[28]); // 80102A2C
  c->r[4]=c->r[29]|c->r[29]; // 80102A30
  c->r[3]=c->r[30]+0x00000024u; // 80102A34
  c->r[5]=R32(c->r[29]+0x00000020u); // 80102A38
  c->r[0]=c->r[5]+0x00000001u; // 80102A3C
  W32(c->r[29]+0x00000020u,c->r[0]); // 80102A40
  c->r[0]=R32(c->r[30]+0x00000090u); // 80102A44
  W32(c->r[29]+0x00000024u,c->r[0]); // 80102A48
  c->r[5]=R8(c->r[30]+0x00000094u); // 80102A4C
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 80102A50
  c->r[0]=(rotl(c->r[5],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 80102A54
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 80102A58
  c->lr=0x80102A60u; f_80102AC8(c); // 80102A5C
  c->r[0]=0u+0x00000001u; // 80102A60
  c->r[3]=c->r[30]+0x00000004u; // 80102A64
  W8(c->r[30]+0x00000095u,c->r[0]); // 80102A68
  c->lr=0x80102A70u; f_8025FDA8(c); // 80102A6C
L_80102A70:;
  c->r[10]=c->r[31]|c->r[31]; // 80102A70
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80102A74
  c->r[10]=R32(c->r[1]+0x00000000u); // 80102A78
  c->r[0]=R32(c->r[10]+0x00000004u); // 80102A7C
  c->r[1]=c->r[10]|c->r[10]; // 80102A80
  c->lr=c->r[0]; // 80102A84
  return; // 80102A88
}

// fn_80102A8C
void f_80102A8C(Ctx* __restrict c) {
  trace_call(0x80102A8Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80102A8C
  return; // 80102A90
}

// fn_80102A94
void f_80102A94(Ctx* __restrict c) {
  trace_call(0x80102A94u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 80102A94
  c->r[0]=R32(c->r[4]+0x00000000u); // 80102A98
  W32(c->r[3]+0x00000000u,c->r[0]); // 80102A9C
  c->r[3]=c->r[4]|c->r[4]; // 80102AA0
  return; // 80102AA4
}

// fn_80102AA8
void f_80102AA8(Ctx* __restrict c) {
  trace_call(0x80102AA8u);
  c->r[3]=c->r[3]+0x00000004u; // 80102AA8
  return; // 80102AAC
}

// fn_80102AB0
void f_80102AB0(Ctx* __restrict c) {
  trace_call(0x80102AB0u);
  c->r[4]=R32(c->r[4]+0x00000000u); // 80102AB0
  c->r[0]=R32(c->r[3]+0x00000000u); // 80102AB4
  c->r[0]=c->r[4]-c->r[0]; // 80102AB8
  c->r[0]=cntlz(c->r[0]); // 80102ABC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80102AC0
  return; // 80102AC4
}

// fn_80102AC8
void f_80102AC8(Ctx* __restrict c) {
  trace_call(0x80102AC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102AC8
  c->r[0]=c->lr; // 80102ACC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80102AD0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80102AD4
  c->r[30]=c->r[3]|c->r[3]; // 80102AD8
  c->r[31]=c->r[4]|c->r[4]; // 80102ADC
  c->lr=0x80102AE4u; f_80102AA8(c); // 80102AE0
  W32(c->r[1]+0x00000008u,c->r[3]); // 80102AE4
  c->r[3]=c->r[30]|c->r[30]; // 80102AE8
  c->r[5]=c->r[31]|c->r[31]; // 80102AEC
  c->r[4]=c->r[1]+0x00000008u; // 80102AF0
  c->lr=0x80102AF8u; f_803B50B4(c); // 80102AF4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80102AF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102AFC
  c->lr=c->r[0]; // 80102B00
  c->r[1]=c->r[1]+0x00000020u; // 80102B04
  return; // 80102B08
}

// fn_80102B0C
void f_80102B0C(Ctx* __restrict c) {
  trace_call(0x80102B0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102B0C
  c->r[0]=c->lr; // 80102B10
  W32(c->r[1]+0x00000054u,c->r[0]); // 80102B14
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80102B18
  c->r[29]=c->r[3]|c->r[3]; // 80102B1C
  c->r[31]=c->r[1]|c->r[1]; // 80102B20
  c->r[30]=c->r[4]|c->r[4]; // 80102B24
  c->r[27]=c->r[5]|c->r[5]; // 80102B28
  c->r[3]=c->r[3]+0x00000004u; // 80102B2C
  c->lr=0x80102B34u; f_8025FCCC(c); // 80102B30
  c->r[3]=c->r[29]+0x00000024u; // 80102B34
  c->lr=0x80102B3Cu; f_80102A8C(c); // 80102B38
  W32(c->r[31]+0x00000014u,c->r[3]); // 80102B3C
  W32(c->r[31]+0x00000018u,c->r[3]); // 80102B40
  goto L_80102B88; // 80102B44
L_80102B48:;
  c->r[5]=R32(c->r[31]+0x00000018u); // 80102B48
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 80102B4C
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 80102B50
  if (crb(c,2)) { goto L_80102B7C; } // 80102B54
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80102B58
  cmpu(c,0,c->r[0],c->r[30]); // 80102B5C
  if (!crb(c,2)) { goto L_80102B7C; } // 80102B60
  c->r[4]=R32(c->r[5]+0x00000020u); // 80102B64
  c->r[3]=c->r[29]+0x00000004u; // 80102B68
  c->r[0]=c->r[4]+0x00000001u; // 80102B6C
  W32(c->r[5]+0x00000020u,c->r[0]); // 80102B70
  c->lr=0x80102B78u; f_8025FDA8(c); // 80102B74
  goto L_80102C5C; // 80102B78
L_80102B7C:;
  c->r[3]=c->r[31]+0x00000018u; // 80102B7C
  c->r[4]=0u+0x00000000u; // 80102B80
  c->lr=0x80102B88u; f_80102A94(c); // 80102B84
L_80102B88:;
  c->r[3]=c->r[29]+0x00000024u; // 80102B88
  c->lr=0x80102B90u; f_80102AA8(c); // 80102B8C
  c->r[0]=R32(c->r[31]+0x00000018u); // 80102B90
  c->r[4]=c->r[31]+0x0000000Cu; // 80102B94
  W32(c->r[31]+0x00000010u,c->r[3]); // 80102B98
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80102B9C
  c->r[3]=c->r[31]+0x00000008u; // 80102BA0
  W32(c->r[31]+0x00000008u,c->r[0]); // 80102BA4
  c->lr=0x80102BACu; f_80102AB0(c); // 80102BA8
  c->r[0]=cntlz(c->r[3]); // 80102BAC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80102BB0
  if (!crb(c,2)) { IRQCHK(c); goto L_80102B48; } // 80102BB4
  c->r[0]=R8(c->r[29]+0x00000094u); // 80102BB8
  cmps(c,0,(int32_t)c->r[0],0); // 80102BBC
  if (crb(c,2)) { goto L_80102BD0; } // 80102BC0
  c->r[0]=R32(c->r[29]+0x00000090u); // 80102BC4
  cmps(c,0,(int32_t)c->r[0],0); // 80102BC8
  if (!crb(c,2)) { goto L_80102BF0; } // 80102BCC
L_80102BD0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80102BD0
  c->r[3]=c->r[29]|c->r[29]; // 80102BD4
  c->r[4]=0u+0x0000008Cu; // 80102BD8
  c->r[12]=R32(c->r[12]+0x00000014u); // 80102BDC
  c->ctr=c->r[12]; // 80102BE0
  if (true) { c->lr=0x80102BE8u; dispatch(c,c->ctr); } // 80102BE4
  c->r[28]=c->r[3]|c->r[3]; // 80102BE8
  goto L_80102C0C; // 80102BEC
L_80102BF0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80102BF0
  c->r[3]=c->r[29]|c->r[29]; // 80102BF4
  c->r[4]=0u+0x0000008Cu; // 80102BF8
  c->r[12]=R32(c->r[12]+0x00000018u); // 80102BFC
  c->ctr=c->r[12]; // 80102C00
  if (true) { c->lr=0x80102C08u; dispatch(c,c->ctr); } // 80102C04
  c->r[28]=c->r[3]|c->r[3]; // 80102C08
L_80102C0C:;
  cmps(c,0,(int32_t)c->r[28],0); // 80102C0C
  if (crb(c,2)) { goto L_80102C20; } // 80102C10
  W32(c->r[31]+0x00000030u,c->r[1]); // 80102C14
  c->r[3]=c->r[28]|c->r[28]; // 80102C18
  c->lr=0x80102C20u; f_80102438(c); // 80102C1C
L_80102C20:;
  c->r[0]=0u+0x00000000u; // 80102C20
  c->r[4]=c->r[28]|c->r[28]; // 80102C24
  W8(c->r[28]+0x00000028u,c->r[0]); // 80102C28
  c->r[3]=c->r[29]+0x00000024u; // 80102C2C
  W32(c->r[28]+0x00000018u,c->r[27]); // 80102C30
  c->r[5]=R32(c->r[28]+0x00000020u); // 80102C34
  c->r[0]=c->r[5]+0x00000001u; // 80102C38
  W32(c->r[28]+0x00000020u,c->r[0]); // 80102C3C
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 80102C40
  c->r[0]=c->r[0]|0x00000040u; // 80102C44
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 80102C48
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 80102C4C
  c->lr=0x80102C54u; f_80102AC8(c); // 80102C50
  c->r[3]=c->r[29]+0x00000004u; // 80102C54
  c->lr=0x80102C5Cu; f_8025FDA8(c); // 80102C58
L_80102C5C:;
  c->r[10]=c->r[31]|c->r[31]; // 80102C5C
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80102C60
  c->r[10]=R32(c->r[1]+0x00000000u); // 80102C64
  c->r[0]=R32(c->r[10]+0x00000004u); // 80102C68
  c->r[1]=c->r[10]|c->r[10]; // 80102C6C
  c->lr=c->r[0]; // 80102C70
  return; // 80102C74
}

// fn_80102C78
void f_80102C78(Ctx* __restrict c) {
  trace_call(0x80102C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102C78
  c->r[0]=c->lr; // 80102C7C
  c->r[4]=0u+0x80100000u; // 80102C80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102C84
  c->r[4]=c->r[4]+0x00002CE4u; // 80102C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102C8C
  c->r[31]=c->r[3]|c->r[3]; // 80102C90
  c->r[5]=c->r[31]|c->r[31]; // 80102C94
  c->r[3]=R32(c->r[13]+0xFFFF9560u); // 80102C98
  c->r[12]=R32(c->r[3]+0x00000000u); // 80102C9C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80102CA0
  c->ctr=c->r[12]; // 80102CA4
  if (true) { c->lr=0x80102CACu; dispatch(c,c->ctr); } // 80102CA8
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 80102CAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102CB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102CB4
  c->lr=c->r[0]; // 80102CB8
  c->r[1]=c->r[1]+0x00000010u; // 80102CBC
  return; // 80102CC0
}

// fn_80102CC4
void f_80102CC4(Ctx* __restrict c) {
  trace_call(0x80102CC4u);
  f_80102CE4(c); return; // 80102CC4
}

// fn_80102CC8
void f_80102CC8(Ctx* __restrict c) {
  trace_call(0x80102CC8u);
  c->r[4]=c->r[3]|c->r[3]; // 80102CC8
  c->r[3]=R32(c->r[13]+0xFFFF9560u); // 80102CCC
  c->r[4]=R32(c->r[4]+0x0000008Cu); // 80102CD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80102CD4
  c->r[12]=R32(c->r[12]+0x00000020u); // 80102CD8
  c->ctr=c->r[12]; // 80102CDC
  if (true) { dispatch(c,c->ctr); return; } // 80102CE0
}

// fn_80102CE4
void f_80102CE4(Ctx* __restrict c) {
  trace_call(0x80102CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102CE4
  c->r[0]=c->lr; // 80102CE8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80102CEC
  {uint32_t ea=c->r[1]+0x0000009Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80102CF0
  c->r[27]=c->r[3]|c->r[3]; // 80102CF4
  c->r[3]=c->r[3]+0x00000024u; // 80102CF8
  c->lr=0x80102D00u; f_80102A8C(c); // 80102CFC
  c->r[30]=0u+0x803E0000u; // 80102D00
  c->r[25]=c->r[3]|c->r[3]; // 80102D04
  c->r[31]=0u+0x80000000u; // 80102D08
  c->r[28]=0u+0x80460000u; // 80102D0C
  c->r[30]=c->r[30]+0xFFFFC250u; // 80102D10
  c->r[29]=0u+0x00000000u; // 80102D14
L_80102D18:;
  c->r[3]=c->r[27]+0x00000024u; // 80102D18
  c->lr=0x80102D20u; f_80102AA8(c); // 80102D1C
  W32(c->r[1]+0x00000010u,c->r[3]); // 80102D20
  c->r[3]=c->r[1]+0x00000014u; // 80102D24
  c->r[4]=c->r[1]+0x00000010u; // 80102D28
  W32(c->r[1]+0x00000014u,c->r[25]); // 80102D2C
  c->lr=0x80102D34u; f_80102AB0(c); // 80102D30
  cmps(c,0,(int32_t)c->r[3],0); // 80102D34
  if (!crb(c,2)) { goto L_80103054; } // 80102D38
  c->r[0]=R8(c->r[13]+0xFFFF9569u); // 80102D3C
  c->r[26]=R32(c->r[13]+0xFFFF81CCu); // 80102D40
  cmps(c,0,(int32_t)c->r[0],0); // 80102D44
  if (!crb(c,2)) { goto L_80103080; } // 80102D48
  c->r[3]=c->r[27]+0x00000004u; // 80102D4C
  c->lr=0x80102D54u; f_8025FCCC(c); // 80102D50
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102D54
  c->r[3]=c->r[27]+0x00000004u; // 80102D58
  c->r[4]=R8(c->r[25]+0x0000000Cu); // 80102D5C
  c->r[0]=c->r[0]|0x00000010u; // 80102D60
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 80102D64
  c->r[24]=rotl(c->r[4],25)&0x00000001u; // 80102D68
  c->lr=0x80102D70u; f_8025FDA8(c); // 80102D6C
  cmps(c,0,(int32_t)c->r[24],0); // 80102D70
  if (!crb(c,2)) { goto L_80103000; } // 80102D74
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102D78
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 80102D7C
  if (crb(c,2)) { goto L_80102DAC; } // 80102D80
  c->r[4]=R32(c->r[25]+0x0000001Cu); // 80102D84
  c->r[3]=c->r[28]+0xFFFFD4F0u; // 80102D88
  c->r[5]=0u+0x00000000u; // 80102D8C
  c->lr=0x80102D94u; f_80049D64(c); // 80102D90
  W32(c->r[25]+0x00000010u,c->r[29]); // 80102D94
  W32(c->r[25]+0x00000014u,c->r[29]); // 80102D98
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102D9C
  c->r[0]=c->r[0]|0x00000080u; // 80102DA0
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 80102DA4
  goto L_80103000; // 80102DA8
L_80102DAC:;
  c->r[3]=c->r[25]+0x00000028u; // 80102DAC
  c->r[4]=0u+0x0000003Au; // 80102DB0
  c->lr=0x80102DB8u; f_802936B0(c); // 80102DB4
  cmps(c,0,(int32_t)c->r[3],0); // 80102DB8
  if (!crb(c,2)) { goto L_80102F50; } // 80102DBC
  c->r[3]=c->r[25]+0x00000028u; // 80102DC0
  c->lr=0x80102DC8u; f_80265E38(c); // 80102DC4
  cmps(c,0,(int32_t)c->r[3],0); // 80102DC8
  c->r[21]=c->r[3]|c->r[3]; // 80102DCC
  if (!crb(c,0)) { goto L_80102E14; } // 80102DD0
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102DD4
  c->r[0]=c->r[0]|0x00000008u; // 80102DD8
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 80102DDC
  goto L_80103000; // 80102DE0
  goto L_80102E14; // 80102DE4
L_80102DE8:;
  c->r[0]=R8(c->r[13]+0xFFFF9569u); // 80102DE8
  cmps(c,0,(int32_t)c->r[0],0); // 80102DEC
  if (!crb(c,2)) { goto L_80103080; } // 80102DF0
  c->r[3]=c->r[30]+0x00000007u; // 80102DF4
  c->r[4]=c->r[25]+0x00000028u; // 80102DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80102DFC
  c->lr=0x80102E04u; f_801CCA38(c); // 80102E00
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80102E04
  c->r[3]=0u+0x00000000u; // 80102E08
  c->r[4]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80102E0C
  c->lr=0x80102E14u; f_802626CC(c); // 80102E10
L_80102E14:;
  c->r[3]=c->r[21]|c->r[21]; // 80102E14
  c->r[4]=c->r[1]+0x00000054u; // 80102E18
  c->lr=0x80102E20u; f_80266140(c); // 80102E1C
  cmps(c,0,(int32_t)c->r[3],0); // 80102E20
  if (crb(c,2)) { IRQCHK(c); goto L_80102DE8; } // 80102E24
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102E28
  c->r[22]=R32(c->r[1]+0x00000088u); // 80102E2C
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 80102E30
  c->r[0]=c->r[22]+0x0000001Fu; // 80102E34
  c->r[20]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80102E38
  if (crb(c,2)) { goto L_80102E6C; } // 80102E3C
  c->r[0]=R32(c->r[25]+0x00000024u); // 80102E40
  cmps(c,0,(int32_t)c->r[0],0); // 80102E44
  if (!crb(c,2)) { goto L_80102E6C; } // 80102E48
  c->r[12]=R32(c->r[27]+0x00000000u); // 80102E4C
  c->r[3]=c->r[27]|c->r[27]; // 80102E50
  c->r[4]=c->r[20]|c->r[20]; // 80102E54
  c->r[12]=R32(c->r[12]+0x00000014u); // 80102E58
  c->ctr=c->r[12]; // 80102E5C
  if (true) { c->lr=0x80102E64u; dispatch(c,c->ctr); } // 80102E60
  c->r[21]=c->r[3]|c->r[3]; // 80102E64
  goto L_80102E88; // 80102E68
L_80102E6C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80102E6C
  c->r[3]=c->r[27]|c->r[27]; // 80102E70
  c->r[4]=c->r[20]|c->r[20]; // 80102E74
  c->r[12]=R32(c->r[12]+0x00000018u); // 80102E78
  c->ctr=c->r[12]; // 80102E7C
  if (true) { c->lr=0x80102E84u; dispatch(c,c->ctr); } // 80102E80
  c->r[21]=c->r[3]|c->r[3]; // 80102E84
L_80102E88:;
  c->r[19]=0u+0x00000000u; // 80102E88
  goto L_80102EFC; // 80102E8C
L_80102E90:;
  c->r[0]=R8(c->r[13]+0xFFFF9569u); // 80102E90
  cmps(c,0,(int32_t)c->r[0],0); // 80102E94
  if (!crb(c,2)) { goto L_80102F28; } // 80102E98
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[26]); // 80102E9C
  c->r[24]=c->r[26]|c->r[26]; // 80102EA0
  if (!crb(c,0)) { goto L_80102EAC; } // 80102EA4
  c->r[24]=c->r[20]|c->r[20]; // 80102EA8
L_80102EAC:;
  c->r[23]=c->r[21]+c->r[19]; // 80102EAC
L_80102EB0:;
  c->r[4]=c->r[23]|c->r[23]; // 80102EB0
  c->r[5]=c->r[24]|c->r[24]; // 80102EB4
  c->r[6]=c->r[19]|c->r[19]; // 80102EB8
  c->r[3]=c->r[1]+0x00000054u; // 80102EBC
  c->r[7]=0u+0x00000002u; // 80102EC0
  c->lr=0x80102EC8u; f_80266720(c); // 80102EC4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[24]); // 80102EC8
  if (!crb(c,0)) { goto L_80102EF4; } // 80102ECC
  c->r[3]=c->r[30]+0x0000001Fu; // 80102ED0
  c->r[4]=c->r[25]+0x00000028u; // 80102ED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80102ED8
  c->lr=0x80102EE0u; f_801CCA38(c); // 80102EDC
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80102EE0
  c->r[3]=0u+0x00000000u; // 80102EE4
  c->r[4]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80102EE8
  c->lr=0x80102EF0u; f_802626CC(c); // 80102EEC
  IRQCHK(c); goto L_80102EB0; // 80102EF0
L_80102EF4:;
  c->r[19]=c->r[19]+c->r[24]; // 80102EF4
  c->r[20]=c->r[20]-c->r[24]; // 80102EF8
L_80102EFC:;
  cmps(c,0,(int32_t)c->r[20],0); // 80102EFC
  if (crb(c,1)) { IRQCHK(c); goto L_80102E90; } // 80102F00
  goto L_80102F28; // 80102F04
L_80102F08:;
  c->r[3]=c->r[30]+0x00000037u; // 80102F08
  c->r[4]=c->r[25]+0x00000028u; // 80102F0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80102F10
  c->lr=0x80102F18u; f_801CCA38(c); // 80102F14
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80102F18
  c->r[3]=0u+0x00000000u; // 80102F1C
  c->r[4]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80102F20
  c->lr=0x80102F28u; f_802626CC(c); // 80102F24
L_80102F28:;
  c->r[3]=c->r[1]+0x00000054u; // 80102F28
  c->lr=0x80102F30u; f_80266454(c); // 80102F2C
  cmps(c,0,(int32_t)c->r[3],0); // 80102F30
  if (crb(c,2)) { IRQCHK(c); goto L_80102F08; } // 80102F34
  W32(c->r[25]+0x00000010u,c->r[21]); // 80102F38
  W32(c->r[25]+0x00000014u,c->r[22]); // 80102F3C
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102F40
  c->r[0]=c->r[0]|0x00000080u; // 80102F44
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 80102F48
  goto L_80103000; // 80102F4C
L_80102F50:;
  c->r[3]=c->r[25]+0x00000028u; // 80102F50
  c->r[4]=c->r[1]+0x00000018u; // 80102F54
  c->r[5]=0u+0x00000000u; // 80102F58
  c->lr=0x80102F60u; f_80028FDC(c); // 80102F5C
  cmps(c,0,(int32_t)c->r[3],0); // 80102F60
  if (!crb(c,2)) { goto L_80102F74; } // 80102F64
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102F68
  c->r[0]=c->r[0]|0x00000008u; // 80102F6C
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 80102F70
L_80102F74:;
  c->r[3]=c->r[1]+0x00000018u; // 80102F74
  c->lr=0x80102F7Cu; f_80028FE0(c); // 80102F78
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102F7C
  c->r[4]=c->r[3]+0x0000001Fu; // 80102F80
  c->r[19]=c->r[3]|c->r[3]; // 80102F84
  c->r[0]=rotl(c->r[0],27)&0x00000001u; cr0(c,c->r[0]); // 80102F88
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80102F8C
  if (crb(c,2)) { goto L_80102FBC; } // 80102F90
  c->r[0]=R32(c->r[25]+0x00000024u); // 80102F94
  cmps(c,0,(int32_t)c->r[0],0); // 80102F98
  if (!crb(c,2)) { goto L_80102FBC; } // 80102F9C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80102FA0
  c->r[3]=c->r[27]|c->r[27]; // 80102FA4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80102FA8
  c->ctr=c->r[12]; // 80102FAC
  if (true) { c->lr=0x80102FB4u; dispatch(c,c->ctr); } // 80102FB0
  c->r[20]=c->r[3]|c->r[3]; // 80102FB4
  goto L_80102FD4; // 80102FB8
L_80102FBC:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80102FBC
  c->r[3]=c->r[27]|c->r[27]; // 80102FC0
  c->r[12]=R32(c->r[12]+0x00000018u); // 80102FC4
  c->ctr=c->r[12]; // 80102FC8
  if (true) { c->lr=0x80102FD0u; dispatch(c,c->ctr); } // 80102FCC
  c->r[20]=c->r[3]|c->r[3]; // 80102FD0
L_80102FD4:;
  c->r[4]=c->r[20]|c->r[20]; // 80102FD4
  c->r[5]=c->r[19]|c->r[19]; // 80102FD8
  c->r[3]=c->r[1]+0x00000018u; // 80102FDC
  c->lr=0x80102FE4u; f_80028FE8(c); // 80102FE0
  c->r[3]=c->r[1]+0x00000018u; // 80102FE4
  c->lr=0x80102FECu; f_80028FF4(c); // 80102FE8
  W32(c->r[25]+0x00000010u,c->r[20]); // 80102FEC
  W32(c->r[25]+0x00000014u,c->r[19]); // 80102FF0
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80102FF4
  c->r[0]=c->r[0]|0x00000080u; // 80102FF8
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 80102FFC
L_80103000:;
  c->r[0]=R8(c->r[25]+0x0000000Cu); // 80103000
  c->r[3]=c->r[27]+0x00000004u; // 80103004
  c->r[19]=0u+0x00000000u; // 80103008
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8010300C
  W8(c->r[25]+0x0000000Cu,c->r[0]); // 80103010
  c->lr=0x80103018u; f_8025FCCC(c); // 80103014
  c->r[25]=R32(c->r[25]+0x00000000u); // 80103018
  c->r[3]=c->r[27]+0x00000024u; // 8010301C
  c->lr=0x80103024u; f_80102AA8(c); // 80103020
  W32(c->r[1]+0x00000008u,c->r[3]); // 80103024
  c->r[3]=c->r[1]+0x0000000Cu; // 80103028
  c->r[4]=c->r[1]+0x00000008u; // 8010302C
  W32(c->r[1]+0x0000000Cu,c->r[25]); // 80103030
  c->lr=0x80103038u; f_80102AB0(c); // 80103034
  cmps(c,0,(int32_t)c->r[3],0); // 80103038
  if (crb(c,2)) { goto L_80103044; } // 8010303C
  c->r[19]=0u+0x00000001u; // 80103040
L_80103044:;
  c->r[3]=c->r[27]+0x00000004u; // 80103044
  c->lr=0x8010304Cu; f_8025FDA8(c); // 80103048
  cmps(c,0,(int32_t)c->r[19],0); // 8010304C
  if (crb(c,2)) { IRQCHK(c); goto L_80102D18; } // 80103050
L_80103054:;
  c->r[0]=R8(c->r[13]+0xFFFF9569u); // 80103054
  cmps(c,0,(int32_t)c->r[0],0); // 80103058
  if (!crb(c,2)) { goto L_80103080; } // 8010305C
  c->r[12]=R32(c->r[27]+0x00000098u); // 80103060
  cmps(c,0,(int32_t)c->r[12],0); // 80103064
  if (crb(c,2)) { goto L_80103080; } // 80103068
  c->r[3]=c->r[27]+0x0000009Cu; // 8010306C
  c->ctr=c->r[12]; // 80103070
  if (true) { c->lr=0x80103078u; dispatch(c,c->ctr); } // 80103074
  c->r[0]=0u+0x00000000u; // 80103078
  W32(c->r[27]+0x00000098u,c->r[0]); // 8010307C
L_80103080:;
  {uint32_t ea=c->r[1]+0x0000009Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103080
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80103084
  c->lr=c->r[0]; // 80103088
  c->r[1]=c->r[1]+0x000000D0u; // 8010308C
  return; // 80103090
}

// fn_80103094
void f_80103094(Ctx* __restrict c) {
  trace_call(0x80103094u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103094
  c->r[0]=c->lr; // 80103098
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010309C
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801030A0
  c->r[29]=c->r[3]|c->r[3]; // 801030A4
  c->r[30]=c->r[4]|c->r[4]; // 801030A8
  c->r[3]=c->r[3]+0x00000024u; // 801030AC
  c->lr=0x801030B4u; f_80102A8C(c); // 801030B0
  W32(c->r[1]+0x00000010u,c->r[3]); // 801030B4
  goto L_801030FC; // 801030B8
L_801030BC:;
  c->r[31]=R32(c->r[1]+0x00000010u); // 801030BC
  c->r[3]=R8(c->r[31]+0x0000000Cu); // 801030C0
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 801030C4
  if (!crb(c,2)) { goto L_801030D4; } // 801030C8
  c->r[0]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[0]); // 801030CC
  if (crb(c,2)) { goto L_801030F0; } // 801030D0
L_801030D4:;
  c->r[4]=c->r[30]|c->r[30]; // 801030D4
  c->r[3]=c->r[31]+0x00000028u; // 801030D8
  c->lr=0x801030E0u; f_80102858(c); // 801030DC
  cmps(c,0,(int32_t)c->r[3],0); // 801030E0
  if (crb(c,2)) { goto L_801030F0; } // 801030E4
  c->r[3]=c->r[31]|c->r[31]; // 801030E8
  goto L_80103130; // 801030EC
L_801030F0:;
  c->r[3]=c->r[1]+0x00000010u; // 801030F0
  c->r[4]=0u+0x00000000u; // 801030F4
  c->lr=0x801030FCu; f_80102A94(c); // 801030F8
L_801030FC:;
  c->r[3]=c->r[29]+0x00000024u; // 801030FC
  c->lr=0x80103104u; f_80102AA8(c); // 80103100
  c->r[0]=R32(c->r[1]+0x00000010u); // 80103104
  c->r[4]=c->r[1]+0x0000000Cu; // 80103108
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8010310C
  c->r[3]=c->r[1]+0x00000008u; // 80103110
  W32(c->r[1]+0x00000008u,c->r[0]); // 80103114
  c->lr=0x8010311Cu; f_80102AB0(c); // 80103118
  c->r[0]=cntlz(c->r[3]); // 8010311C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80103120
  if (!crb(c,2)) { IRQCHK(c); goto L_801030BC; } // 80103124
  c->r[3]=0u+0x80490000u; // 80103128
  c->r[3]=c->r[3]+0x000006ECu; // 8010312C
L_80103130:;
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103130
  c->r[0]=R32(c->r[1]+0x00000034u); // 80103134
  c->lr=c->r[0]; // 80103138
  c->r[1]=c->r[1]+0x00000030u; // 8010313C
  return; // 80103140
}

// fn_80103144
void f_80103144(Ctx* __restrict c) {
  trace_call(0x80103144u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103144
  c->r[0]=c->lr; // 80103148
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010314C
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80103150
  c->r[30]=c->r[3]|c->r[3]; // 80103154
  c->r[31]=c->r[4]|c->r[4]; // 80103158
  c->r[3]=c->r[3]+0x00000024u; // 8010315C
  c->lr=0x80103164u; f_80102A8C(c); // 80103160
  W32(c->r[1]+0x00000010u,c->r[3]); // 80103164
  goto L_80103198; // 80103168
L_8010316C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010316C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80103170
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80103174
  if (crb(c,2)) { goto L_8010318C; } // 80103178
  c->r[0]=R32(c->r[3]+0x00000018u); // 8010317C
  cmpu(c,0,c->r[0],c->r[31]); // 80103180
  if (!crb(c,2)) { goto L_8010318C; } // 80103184
  goto L_801031CC; // 80103188
L_8010318C:;
  c->r[3]=c->r[1]+0x00000010u; // 8010318C
  c->r[4]=0u+0x00000000u; // 80103190
  c->lr=0x80103198u; f_80102A94(c); // 80103194
L_80103198:;
  c->r[3]=c->r[30]+0x00000024u; // 80103198
  c->lr=0x801031A0u; f_80102AA8(c); // 8010319C
  c->r[0]=R32(c->r[1]+0x00000010u); // 801031A0
  c->r[4]=c->r[1]+0x0000000Cu; // 801031A4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801031A8
  c->r[3]=c->r[1]+0x00000008u; // 801031AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801031B0
  c->lr=0x801031B8u; f_80102AB0(c); // 801031B4
  c->r[0]=cntlz(c->r[3]); // 801031B8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801031BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8010316C; } // 801031C0
  c->r[3]=0u+0x80490000u; // 801031C4
  c->r[3]=c->r[3]+0x000006ECu; // 801031C8
L_801031CC:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801031CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801031D0
  c->lr=c->r[0]; // 801031D4
  c->r[1]=c->r[1]+0x00000020u; // 801031D8
  return; // 801031DC
}

// fn_801031E0
void f_801031E0(Ctx* __restrict c) {
  trace_call(0x801031E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801031E0
  c->r[0]=c->lr; // 801031E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801031E8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801031EC
  c->r[27]=c->r[3]|c->r[3]; // 801031F0
  c->r[28]=c->r[4]|c->r[4]; // 801031F4
  c->r[3]=c->r[3]+0x00000024u; // 801031F8
  c->lr=0x80103200u; f_80102A8C(c); // 801031FC
  W32(c->r[1]+0x00000014u,c->r[3]); // 80103200
  c->r[30]=c->r[28]+0x00010000u; // 80103204
  c->r[31]=0u+0x80460000u; // 80103208
  goto L_801032E8; // 8010320C
L_80103210:;
  c->r[3]=c->r[27]+0x00000004u; // 80103210
  c->lr=0x80103218u; f_8025FCCC(c); // 80103214
  c->r[3]=c->r[1]+0x00000014u; // 80103218
  c->r[4]=0u+0x00000000u; // 8010321C
  c->lr=0x80103224u; f_80102A94(c); // 80103220
  c->r[29]=c->r[3]|c->r[3]; // 80103224
  c->r[3]=c->r[27]+0x00000004u; // 80103228
  c->lr=0x80103230u; f_8025FDA8(c); // 8010322C
  cmpu(c,0,c->r[30],0x0000FFFFu); // 80103230
  if (crb(c,2)) { goto L_80103244; } // 80103234
  c->r[0]=R32(c->r[29]+0x00000018u); // 80103238
  cmpu(c,0,c->r[0],c->r[28]); // 8010323C
  if (!crb(c,2)) { goto L_801032E8; } // 80103240
L_80103244:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 80103244
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80103248
  W32(c->r[29]+0x00000020u,c->r[0]); // 8010324C
  if (crb(c,1)) { goto L_801032E8; } // 80103250
  c->r[3]=c->r[29]|c->r[29]; // 80103254
  c->lr=0x8010325Cu; f_801024A8(c); // 80103258
  c->r[3]=c->r[27]+0x00000004u; // 8010325C
  c->lr=0x80103264u; f_8025FCCC(c); // 80103260
  W32(c->r[1]+0x00000010u,c->r[29]); // 80103264
  c->r[3]=c->r[27]+0x00000024u; // 80103268
  c->r[4]=c->r[1]+0x00000010u; // 8010326C
  c->lr=0x80103274u; f_80103328(c); // 80103270
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 80103274
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 80103278
  if (crb(c,2)) { goto L_801032A8; } // 8010327C
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 80103280
  if (!crb(c,2)) { goto L_801032A8; } // 80103284
  c->r[4]=R32(c->r[29]+0x00000010u); // 80103288
  cmps(c,0,(int32_t)c->r[4],0); // 8010328C
  if (crb(c,2)) { goto L_801032A8; } // 80103290
  c->r[12]=R32(c->r[27]+0x00000000u); // 80103294
  c->r[3]=c->r[27]|c->r[27]; // 80103298
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8010329C
  c->ctr=c->r[12]; // 801032A0
  if (true) { c->lr=0x801032A8u; dispatch(c,c->ctr); } // 801032A4
L_801032A8:;
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 801032A8
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 801032AC
  if (crb(c,2)) { goto L_801032C8; } // 801032B0
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 801032B4
  if (crb(c,2)) { goto L_801032C8; } // 801032B8
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 801032BC
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 801032C0
  c->lr=0x801032C8u; f_8004A038(c); // 801032C4
L_801032C8:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801032C8
  c->r[3]=c->r[27]|c->r[27]; // 801032CC
  c->r[4]=c->r[29]|c->r[29]; // 801032D0
  c->r[12]=R32(c->r[12]+0x00000024u); // 801032D4
  c->ctr=c->r[12]; // 801032D8
  if (true) { c->lr=0x801032E0u; dispatch(c,c->ctr); } // 801032DC
  c->r[3]=c->r[27]+0x00000004u; // 801032E0
  c->lr=0x801032E8u; f_8025FDA8(c); // 801032E4
L_801032E8:;
  c->r[3]=c->r[27]+0x00000024u; // 801032E8
  c->lr=0x801032F0u; f_80102AA8(c); // 801032EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801032F0
  c->r[4]=c->r[1]+0x0000000Cu; // 801032F4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801032F8
  c->r[3]=c->r[1]+0x00000008u; // 801032FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 80103300
  c->lr=0x80103308u; f_80102AB0(c); // 80103304
  c->r[0]=cntlz(c->r[3]); // 80103308
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8010330C
  if (!crb(c,2)) { IRQCHK(c); goto L_80103210; } // 80103310
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103314
  c->r[0]=R32(c->r[1]+0x00000034u); // 80103318
  c->lr=c->r[0]; // 8010331C
  c->r[1]=c->r[1]+0x00000030u; // 80103320
  return; // 80103324
}

// fn_80103328
void f_80103328(Ctx* __restrict c) {
  trace_call(0x80103328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103328
  c->r[0]=c->lr; // 8010332C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103330
  c->r[0]=R32(c->r[4]+0x00000000u); // 80103334
  c->r[4]=c->r[1]+0x00000008u; // 80103338
  W32(c->r[1]+0x00000008u,c->r[0]); // 8010333C
  c->lr=0x80103344u; f_803B5028(c); // 80103340
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103344
  c->lr=c->r[0]; // 80103348
  c->r[1]=c->r[1]+0x00000010u; // 8010334C
  return; // 80103350
}

// fn_80103354
void f_80103354(Ctx* __restrict c) {
  trace_call(0x80103354u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103354
  c->r[0]=c->lr; // 80103358
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010335C
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80103360
  c->r[28]=c->r[3]|c->r[3]; // 80103364
  c->r[29]=c->r[4]|c->r[4]; // 80103368
  c->r[3]=c->r[3]+0x00000024u; // 8010336C
  c->lr=0x80103374u; f_80102A8C(c); // 80103370
  W32(c->r[1]+0x00000014u,c->r[3]); // 80103374
  c->r[31]=0u+0x80460000u; // 80103378
  goto L_80103458; // 8010337C
L_80103380:;
  c->r[3]=c->r[28]+0x00000004u; // 80103380
  c->lr=0x80103388u; f_8025FCCC(c); // 80103384
  c->r[3]=c->r[1]+0x00000014u; // 80103388
  c->r[4]=0u+0x00000000u; // 8010338C
  c->lr=0x80103394u; f_80102A94(c); // 80103390
  c->r[30]=c->r[3]|c->r[3]; // 80103394
  c->r[3]=c->r[28]+0x00000004u; // 80103398
  c->lr=0x801033A0u; f_8025FDA8(c); // 8010339C
  c->r[4]=c->r[29]|c->r[29]; // 801033A0
  c->r[3]=c->r[30]+0x00000028u; // 801033A4
  c->lr=0x801033ACu; f_80102858(c); // 801033A8
  cmps(c,0,(int32_t)c->r[3],0); // 801033AC
  if (crb(c,2)) { goto L_80103458; } // 801033B0
  c->r[3]=R32(c->r[30]+0x00000020u); // 801033B4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801033B8
  W32(c->r[30]+0x00000020u,c->r[0]); // 801033BC
  if (crb(c,1)) { goto L_80103458; } // 801033C0
  c->r[3]=c->r[30]|c->r[30]; // 801033C4
  c->lr=0x801033CCu; f_801024A8(c); // 801033C8
  c->r[3]=c->r[28]+0x00000004u; // 801033CC
  c->lr=0x801033D4u; f_8025FCCC(c); // 801033D0
  W32(c->r[1]+0x00000010u,c->r[30]); // 801033D4
  c->r[3]=c->r[28]+0x00000024u; // 801033D8
  c->r[4]=c->r[1]+0x00000010u; // 801033DC
  c->lr=0x801033E4u; f_80103328(c); // 801033E0
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 801033E4
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 801033E8
  if (crb(c,2)) { goto L_80103418; } // 801033EC
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 801033F0
  if (!crb(c,2)) { goto L_80103418; } // 801033F4
  c->r[4]=R32(c->r[30]+0x00000010u); // 801033F8
  cmps(c,0,(int32_t)c->r[4],0); // 801033FC
  if (crb(c,2)) { goto L_80103418; } // 80103400
  c->r[12]=R32(c->r[28]+0x00000000u); // 80103404
  c->r[3]=c->r[28]|c->r[28]; // 80103408
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8010340C
  c->ctr=c->r[12]; // 80103410
  if (true) { c->lr=0x80103418u; dispatch(c,c->ctr); } // 80103414
L_80103418:;
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 80103418
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 8010341C
  if (crb(c,2)) { goto L_80103438; } // 80103420
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 80103424
  if (crb(c,2)) { goto L_80103438; } // 80103428
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 8010342C
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 80103430
  c->lr=0x80103438u; f_8004A038(c); // 80103434
L_80103438:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 80103438
  c->r[3]=c->r[28]|c->r[28]; // 8010343C
  c->r[4]=c->r[30]|c->r[30]; // 80103440
  c->r[12]=R32(c->r[12]+0x00000024u); // 80103444
  c->ctr=c->r[12]; // 80103448
  if (true) { c->lr=0x80103450u; dispatch(c,c->ctr); } // 8010344C
  c->r[3]=c->r[28]+0x00000004u; // 80103450
  c->lr=0x80103458u; f_8025FDA8(c); // 80103454
L_80103458:;
  c->r[3]=c->r[28]+0x00000024u; // 80103458
  c->lr=0x80103460u; f_80102AA8(c); // 8010345C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103460
  c->r[4]=c->r[1]+0x0000000Cu; // 80103464
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80103468
  c->r[3]=c->r[1]+0x00000008u; // 8010346C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80103470
  c->lr=0x80103478u; f_80102AB0(c); // 80103474
  c->r[0]=cntlz(c->r[3]); // 80103478
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8010347C
  if (!crb(c,2)) { IRQCHK(c); goto L_80103380; } // 80103480
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103484
  c->r[0]=R32(c->r[1]+0x00000034u); // 80103488
  c->lr=c->r[0]; // 8010348C
  c->r[1]=c->r[1]+0x00000030u; // 80103490
  return; // 80103494
}

// fn_80103498
void f_80103498(Ctx* __restrict c) {
  trace_call(0x80103498u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103498
  c->r[0]=c->lr; // 8010349C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801034A0
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801034A4
  c->r[28]=c->r[3]|c->r[3]; // 801034A8
  c->r[29]=c->r[4]|c->r[4]; // 801034AC
  c->r[3]=c->r[3]+0x00000024u; // 801034B0
  c->lr=0x801034B8u; f_80102A8C(c); // 801034B4
  W32(c->r[1]+0x00000014u,c->r[3]); // 801034B8
  c->r[31]=0u+0x80460000u; // 801034BC
  goto L_80103558; // 801034C0
L_801034C4:;
  c->r[3]=c->r[28]+0x00000004u; // 801034C4
  c->lr=0x801034CCu; f_8025FCCC(c); // 801034C8
  c->r[3]=c->r[1]+0x00000014u; // 801034CC
  c->r[4]=0u+0x00000000u; // 801034D0
  c->lr=0x801034D8u; f_80102A94(c); // 801034D4
  c->r[30]=c->r[3]|c->r[3]; // 801034D8
  c->r[3]=c->r[28]+0x00000004u; // 801034DC
  c->lr=0x801034E4u; f_8025FDA8(c); // 801034E0
  c->r[0]=R8(c->r[30]+0x0000000Cu); // 801034E4
  c->r[0]=rotl(c->r[0],26)&0x00000001u; cr0(c,c->r[0]); // 801034E8
  if (crb(c,2)) { goto L_80103558; } // 801034EC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801034F0
  cmpu(c,0,c->r[0],c->r[29]); // 801034F4
  if (!crb(c,2)) { goto L_80103558; } // 801034F8
  c->r[3]=R32(c->r[30]+0x00000020u); // 801034FC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80103500
  W32(c->r[30]+0x00000020u,c->r[0]); // 80103504
  if (crb(c,1)) { goto L_80103558; } // 80103508
  c->r[3]=c->r[30]|c->r[30]; // 8010350C
  c->lr=0x80103514u; f_801024A8(c); // 80103510
  c->r[3]=c->r[28]+0x00000004u; // 80103514
  c->lr=0x8010351Cu; f_8025FCCC(c); // 80103518
  W32(c->r[1]+0x00000010u,c->r[30]); // 8010351C
  c->r[3]=c->r[28]+0x00000024u; // 80103520
  c->r[4]=c->r[1]+0x00000010u; // 80103524
  c->lr=0x8010352Cu; f_80103328(c); // 80103528
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 8010352C
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 80103530
  c->lr=0x80103538u; f_8004A038(c); // 80103534
  c->r[12]=R32(c->r[28]+0x00000000u); // 80103538
  c->r[3]=c->r[28]|c->r[28]; // 8010353C
  c->r[4]=c->r[30]|c->r[30]; // 80103540
  c->r[12]=R32(c->r[12]+0x00000024u); // 80103544
  c->ctr=c->r[12]; // 80103548
  if (true) { c->lr=0x80103550u; dispatch(c,c->ctr); } // 8010354C
  c->r[3]=c->r[28]+0x00000004u; // 80103550
  c->lr=0x80103558u; f_8025FDA8(c); // 80103554
L_80103558:;
  c->r[3]=c->r[28]+0x00000024u; // 80103558
  c->lr=0x80103560u; f_80102AA8(c); // 8010355C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103560
  c->r[4]=c->r[1]+0x0000000Cu; // 80103564
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80103568
  c->r[3]=c->r[1]+0x00000008u; // 8010356C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80103570
  c->lr=0x80103578u; f_80102AB0(c); // 80103574
  c->r[0]=cntlz(c->r[3]); // 80103578
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8010357C
  if (!crb(c,2)) { IRQCHK(c); goto L_801034C4; } // 80103580
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103584
  c->r[0]=R32(c->r[1]+0x00000034u); // 80103588
  c->lr=c->r[0]; // 8010358C
  c->r[1]=c->r[1]+0x00000030u; // 80103590
  return; // 80103594
}

// fn_80103598
void f_80103598(Ctx* __restrict c) {
  trace_call(0x80103598u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103598
  c->r[0]=c->lr; // 8010359C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801035A0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801035A4
  c->r[27]=c->r[3]|c->r[3]; // 801035A8
  c->r[28]=c->r[4]|c->r[4]; // 801035AC
  c->r[3]=c->r[3]+0x00000024u; // 801035B0
  c->lr=0x801035B8u; f_80102A8C(c); // 801035B4
  W32(c->r[1]+0x00000014u,c->r[3]); // 801035B8
  c->r[30]=c->r[28]+0x00010000u; // 801035BC
  c->r[31]=0u+0x80460000u; // 801035C0
  goto L_80103690; // 801035C4
L_801035C8:;
  c->r[3]=c->r[27]+0x00000004u; // 801035C8
  c->lr=0x801035D0u; f_8025FCCC(c); // 801035CC
  c->r[3]=c->r[1]+0x00000014u; // 801035D0
  c->r[4]=0u+0x00000000u; // 801035D4
  c->lr=0x801035DCu; f_80102A94(c); // 801035D8
  c->r[29]=c->r[3]|c->r[3]; // 801035DC
  c->r[3]=c->r[27]+0x00000004u; // 801035E0
  c->lr=0x801035E8u; f_8025FDA8(c); // 801035E4
  cmpu(c,0,c->r[30],0x0000FFFFu); // 801035E8
  if (crb(c,2)) { goto L_801035FC; } // 801035EC
  c->r[0]=R32(c->r[29]+0x00000018u); // 801035F0
  cmpu(c,0,c->r[0],c->r[28]); // 801035F4
  if (!crb(c,2)) { goto L_80103690; } // 801035F8
L_801035FC:;
  c->r[3]=c->r[29]|c->r[29]; // 801035FC
  c->lr=0x80103604u; f_801024A8(c); // 80103600
  c->r[3]=c->r[27]+0x00000004u; // 80103604
  c->lr=0x8010360Cu; f_8025FCCC(c); // 80103608
  W32(c->r[1]+0x00000010u,c->r[29]); // 8010360C
  c->r[3]=c->r[27]+0x00000024u; // 80103610
  c->r[4]=c->r[1]+0x00000010u; // 80103614
  c->lr=0x8010361Cu; f_80103328(c); // 80103618
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 8010361C
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 80103620
  if (crb(c,2)) { goto L_80103650; } // 80103624
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 80103628
  if (!crb(c,2)) { goto L_80103650; } // 8010362C
  c->r[4]=R32(c->r[29]+0x00000010u); // 80103630
  cmps(c,0,(int32_t)c->r[4],0); // 80103634
  if (crb(c,2)) { goto L_80103650; } // 80103638
  c->r[12]=R32(c->r[27]+0x00000000u); // 8010363C
  c->r[3]=c->r[27]|c->r[27]; // 80103640
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80103644
  c->ctr=c->r[12]; // 80103648
  if (true) { c->lr=0x80103650u; dispatch(c,c->ctr); } // 8010364C
L_80103650:;
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 80103650
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 80103654
  if (crb(c,2)) { goto L_80103670; } // 80103658
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 8010365C
  if (crb(c,2)) { goto L_80103670; } // 80103660
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 80103664
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 80103668
  c->lr=0x80103670u; f_8004A038(c); // 8010366C
L_80103670:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 80103670
  c->r[3]=c->r[27]|c->r[27]; // 80103674
  c->r[4]=c->r[29]|c->r[29]; // 80103678
  c->r[12]=R32(c->r[12]+0x00000024u); // 8010367C
  c->ctr=c->r[12]; // 80103680
  if (true) { c->lr=0x80103688u; dispatch(c,c->ctr); } // 80103684
  c->r[3]=c->r[27]+0x00000004u; // 80103688
  c->lr=0x80103690u; f_8025FDA8(c); // 8010368C
L_80103690:;
  c->r[3]=c->r[27]+0x00000024u; // 80103690
  c->lr=0x80103698u; f_80102AA8(c); // 80103694
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103698
  c->r[4]=c->r[1]+0x0000000Cu; // 8010369C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801036A0
  c->r[3]=c->r[1]+0x00000008u; // 801036A4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801036A8
  c->lr=0x801036B0u; f_80102AB0(c); // 801036AC
  c->r[0]=cntlz(c->r[3]); // 801036B0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801036B4
  if (!crb(c,2)) { IRQCHK(c); goto L_801035C8; } // 801036B8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801036BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801036C0
  c->lr=c->r[0]; // 801036C4
  c->r[1]=c->r[1]+0x00000030u; // 801036C8
  return; // 801036CC
}

// fn_801036D0
void f_801036D0(Ctx* __restrict c) {
  trace_call(0x801036D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801036D0
  c->r[0]=c->lr; // 801036D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801036D8
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801036DC
  c->r[29]=c->r[3]|c->r[3]; // 801036E0
  c->r[3]=c->r[3]+0x00000024u; // 801036E4
  c->lr=0x801036ECu; f_80102A8C(c); // 801036E8
  W32(c->r[1]+0x00000014u,c->r[3]); // 801036EC
  c->r[31]=0u+0x80460000u; // 801036F0
  goto L_801037AC; // 801036F4
L_801036F8:;
  c->r[3]=c->r[29]+0x00000004u; // 801036F8
  c->lr=0x80103700u; f_8025FCCC(c); // 801036FC
  c->r[3]=c->r[1]+0x00000014u; // 80103700
  c->r[4]=0u+0x00000000u; // 80103704
  c->lr=0x8010370Cu; f_80102A94(c); // 80103708
  c->r[30]=c->r[3]|c->r[3]; // 8010370C
  c->r[3]=c->r[29]+0x00000004u; // 80103710
  c->lr=0x80103718u; f_8025FDA8(c); // 80103714
  c->r[3]=c->r[30]|c->r[30]; // 80103718
  c->lr=0x80103720u; f_801024A8(c); // 8010371C
  c->r[3]=c->r[29]+0x00000004u; // 80103720
  c->lr=0x80103728u; f_8025FCCC(c); // 80103724
  W32(c->r[1]+0x00000010u,c->r[30]); // 80103728
  c->r[3]=c->r[29]+0x00000024u; // 8010372C
  c->r[4]=c->r[1]+0x00000010u; // 80103730
  c->lr=0x80103738u; f_80103328(c); // 80103734
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 80103738
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 8010373C
  if (crb(c,2)) { goto L_8010376C; } // 80103740
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 80103744
  if (!crb(c,2)) { goto L_8010376C; } // 80103748
  c->r[4]=R32(c->r[30]+0x00000010u); // 8010374C
  cmps(c,0,(int32_t)c->r[4],0); // 80103750
  if (crb(c,2)) { goto L_8010376C; } // 80103754
  c->r[12]=R32(c->r[29]+0x00000000u); // 80103758
  c->r[3]=c->r[29]|c->r[29]; // 8010375C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80103760
  c->ctr=c->r[12]; // 80103764
  if (true) { c->lr=0x8010376Cu; dispatch(c,c->ctr); } // 80103768
L_8010376C:;
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 8010376C
  c->r[0]=rotl(c->r[3],25)&0x00000001u; cr0(c,c->r[0]); // 80103770
  if (crb(c,2)) { goto L_8010378C; } // 80103774
  c->r[0]=rotl(c->r[3],26)&0x00000001u; cr0(c,c->r[0]); // 80103778
  if (crb(c,2)) { goto L_8010378C; } // 8010377C
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 80103780
  c->r[3]=c->r[31]+0xFFFFD4F0u; // 80103784
  c->lr=0x8010378Cu; f_8004A038(c); // 80103788
L_8010378C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8010378C
  c->r[3]=c->r[29]|c->r[29]; // 80103790
  c->r[4]=c->r[30]|c->r[30]; // 80103794
  c->r[12]=R32(c->r[12]+0x00000024u); // 80103798
  c->ctr=c->r[12]; // 8010379C
  if (true) { c->lr=0x801037A4u; dispatch(c,c->ctr); } // 801037A0
  c->r[3]=c->r[29]+0x00000004u; // 801037A4
  c->lr=0x801037ACu; f_8025FDA8(c); // 801037A8
L_801037AC:;
  c->r[3]=c->r[29]+0x00000024u; // 801037AC
  c->lr=0x801037B4u; f_80102AA8(c); // 801037B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801037B4
  c->r[4]=c->r[1]+0x0000000Cu; // 801037B8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801037BC
  c->r[3]=c->r[1]+0x00000008u; // 801037C0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801037C4
  c->lr=0x801037CCu; f_80102AB0(c); // 801037C8
  c->r[0]=cntlz(c->r[3]); // 801037CC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801037D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801036F8; } // 801037D4
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801037D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801037DC
  c->lr=c->r[0]; // 801037E0
  c->r[1]=c->r[1]+0x00000030u; // 801037E4
  return; // 801037E8
}

// fn_801037EC
void f_801037EC(Ctx* __restrict c) {
  trace_call(0x801037ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801037EC
  c->r[0]=c->lr; // 801037F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801037F4
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801037F8
  c->r[30]=c->r[3]|c->r[3]; // 801037FC
  c->r[31]=c->r[4]|c->r[4]; // 80103800
  c->r[3]=c->r[3]+0x00000024u; // 80103804
  c->lr=0x8010380Cu; f_80102A8C(c); // 80103808
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010380C
  goto L_80103840; // 80103810
L_80103814:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 80103814
  c->r[4]=c->r[31]|c->r[31]; // 80103818
  c->r[3]=c->r[3]+0x00000028u; // 8010381C
  c->lr=0x80103824u; f_80102858(c); // 80103820
  cmps(c,0,(int32_t)c->r[3],0); // 80103824
  if (crb(c,2)) { goto L_80103834; } // 80103828
  c->r[3]=0u+0x00000001u; // 8010382C
  goto L_80103870; // 80103830
L_80103834:;
  c->r[3]=c->r[1]+0x00000010u; // 80103834
  c->r[4]=0u+0x00000000u; // 80103838
  c->lr=0x80103840u; f_80102A94(c); // 8010383C
L_80103840:;
  c->r[3]=c->r[30]+0x00000024u; // 80103840
  c->lr=0x80103848u; f_80102AA8(c); // 80103844
  c->r[0]=R32(c->r[1]+0x00000010u); // 80103848
  c->r[4]=c->r[1]+0x0000000Cu; // 8010384C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80103850
  c->r[3]=c->r[1]+0x00000008u; // 80103854
  W32(c->r[1]+0x00000008u,c->r[0]); // 80103858
  c->lr=0x80103860u; f_80102AB0(c); // 8010385C
  c->r[0]=cntlz(c->r[3]); // 80103860
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 80103864
  if (!crb(c,2)) { IRQCHK(c); goto L_80103814; } // 80103868
  c->r[3]=0u+0x00000000u; // 8010386C
L_80103870:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103870
  c->r[0]=R32(c->r[1]+0x00000024u); // 80103874
  c->lr=c->r[0]; // 80103878
  c->r[1]=c->r[1]+0x00000020u; // 8010387C
  return; // 80103880
}

// fn_80103884
void f_80103884(Ctx* __restrict c) {
  trace_call(0x80103884u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80103884
  c->r[12]=R32(c->r[12]+0x00000014u); // 80103888
  c->ctr=c->r[12]; // 8010388C
  if (true) { dispatch(c,c->ctr); return; } // 80103890
}

// fn_80103894
void f_80103894(Ctx* __restrict c) {
  trace_call(0x80103894u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80103894
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80103898
  c->ctr=c->r[12]; // 8010389C
  if (true) { dispatch(c,c->ctr); return; } // 801038A0
}

// fn_801038A4
void f_801038A4(Ctx* __restrict c) {
  trace_call(0x801038A4u);
  cmps(c,0,(int32_t)c->r[3],0); // 801038A4
  if (crb(c,1)) { goto L_801038B0; } // 801038A8
  c->r[3]=0u+0x00060000u; // 801038AC
L_801038B0:;
  W32(c->r[13]+0xFFFF81CCu,c->r[3]); // 801038B0
  return; // 801038B4
}

// fn_801038B8
void f_801038B8(Ctx* __restrict c) {
  trace_call(0x801038B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801038B8
  c->r[0]=c->lr; // 801038BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801038C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801038C4
  c->r[31]=c->r[3]|c->r[3]; // 801038C8
  c->lr=0x801038D0u; f_80102510(c); // 801038CC
  c->r[3]=0u+0x80400000u; // 801038D0
  c->r[4]=0u+0x80100000u; // 801038D4
  c->r[3]=c->r[3]+0xFFFF82C8u; // 801038D8
  c->r[5]=0u+0x80100000u; // 801038DC
  W32(c->r[31]+0x00000000u,c->r[3]); // 801038E0
  c->r[3]=c->r[31]+0x00000220u; // 801038E4
  c->r[4]=c->r[4]+0x00003940u; // 801038E8
  c->r[5]=c->r[5]+0x00003ABCu; // 801038EC
  c->r[6]=0u+0x000003F8u; // 801038F0
  c->r[7]=0u+0x00000002u; // 801038F4
  c->lr=0x801038FCu; f_80289B34(c); // 801038F8
  c->r[0]=0u+0x00000000u; // 801038FC
  c->r[3]=c->r[31]+0x00000220u; // 80103900
  W8(c->r[31]+0x00000200u,c->r[0]); // 80103904
  c->lr=0x8010390Cu; f_8010392C(c); // 80103908
  c->r[3]=c->r[31]+0x00000618u; // 8010390C
  c->lr=0x80103914u; f_8010392C(c); // 80103910
  c->r[3]=c->r[31]|c->r[31]; // 80103914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103918
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010391C
  c->lr=c->r[0]; // 80103920
  c->r[1]=c->r[1]+0x00000010u; // 80103924
  return; // 80103928
}

// fn_8010392C
void f_8010392C(Ctx* __restrict c) {
  trace_call(0x8010392Cu);
  c->r[0]=0u+0x00000000u; // 8010392C
  W8(c->r[3]+0x00000000u,c->r[0]); // 80103930
  W8(c->r[3]+0x00000020u,c->r[0]); // 80103934
  c->r[3]=c->r[3]+0x000003DCu; // 80103938
  f_801DD5C4(c); return; // 8010393C
}

// fn_80103940
void f_80103940(Ctx* __restrict c) {
  trace_call(0x80103940u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103940
  c->r[0]=c->lr; // 80103944
  W32(c->r[1]+0x00000034u,c->r[0]); // 80103948
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010394C
  c->r[28]=c->r[3]+0x00000024u; // 80103950
  c->r[31]=c->r[3]|c->r[3]; // 80103954
  c->r[25]=c->r[28]|c->r[28]; // 80103958
  c->r[26]=c->r[28]|c->r[28]; // 8010395C
  c->r[3]=c->r[28]|c->r[28]; // 80103960
  c->lr=0x80103968u; f_8002A0C4(c); // 80103964
  c->r[4]=0u+0x803F0000u; // 80103968
  c->r[3]=c->r[28]+0x0000001Cu; // 8010396C
  c->r[4]=c->r[4]+0x00001290u; // 80103970
  W32(c->r[28]+0x00000000u,c->r[4]); // 80103974
  c->lr=0x8010397Cu; f_80166A74(c); // 80103978
  c->r[3]=0u+0x803F0000u; // 8010397C
  c->r[4]=0u+0x803F0000u; // 80103980
  c->r[30]=0u+0x00000000u; // 80103984
  c->r[26]=c->r[28]+0x000000D8u; // 80103988
  c->r[3]=c->r[3]+0x00001150u; // 8010398C
  c->r[4]=c->r[4]+0x000011B8u; // 80103990
  c->r[29]=0u+0xFFFFFFFFu; // 80103994
  c->r[0]=0u+0x00000001u; // 80103998
  c->r[27]=c->r[26]+0x00000020u; // 8010399C
  W32(c->r[28]+0x00000000u,c->r[3]); // 801039A0
  c->r[3]=c->r[27]|c->r[27]; // 801039A4
  W32(c->r[28]+0x000000D8u,c->r[4]); // 801039A8
  W32(c->r[28]+0x000000DCu,c->r[29]); // 801039AC
  W32(c->r[28]+0x000000E0u,c->r[30]); // 801039B0
  W32(c->r[28]+0x000000E4u,c->r[30]); // 801039B4
  W32(c->r[28]+0x000000E8u,c->r[30]); // 801039B8
  W32(c->r[28]+0x000000ECu,c->r[0]); // 801039BC
  W32(c->r[28]+0x000000F0u,c->r[30]); // 801039C0
  W32(c->r[28]+0x000000F4u,c->r[30]); // 801039C4
  c->lr=0x801039CCu; f_8002D9F4(c); // 801039C8
  c->r[3]=0u+0x803F0000u; // 801039CC
  c->r[4]=0u+0x803F0000u; // 801039D0
  c->r[3]=c->r[3]+0x000011D0u; // 801039D4
  W32(c->r[28]+0x00000114u,c->r[30]); // 801039D8
  c->r[4]=c->r[4]+0x00003028u; // 801039DC
  W32(c->r[27]+0x00000000u,c->r[3]); // 801039E0
  c->r[3]=c->r[28]+0x00000124u; // 801039E4
  W32(c->r[28]+0x00000118u,c->r[30]); // 801039E8
  W32(c->r[28]+0x0000011Cu,c->r[30]); // 801039EC
  W32(c->r[28]+0x00000120u,c->r[30]); // 801039F0
  W32(c->r[28]+0x00000000u,c->r[4]); // 801039F4
  c->lr=0x801039FCu; f_80141D50(c); // 801039F8
  c->r[6]=0u+0x80400000u; // 801039FC
  c->r[8]=0u+0x80400000u; // 80103A00
  c->r[6]=c->r[6]+0x000054F8u; // 80103A04
  c->r[4]=0u+0x80070000u; // 80103A08
  c->r[8]=c->r[8]+0x00005560u; // 80103A0C
  c->r[5]=0u+0x80070000u; // 80103A10
  W32(c->r[28]+0x00000000u,c->r[6]); // 80103A14
  c->r[3]=c->r[28]+0x000001D8u; // 80103A18
  c->r[4]=c->r[4]+0x000058C4u; // 80103A1C
  c->r[5]=c->r[5]+0x000059F8u; // 80103A20
  W8(c->r[28]+0x000001BCu,c->r[30]); // 80103A24
  c->r[6]=0u+0x00000058u; // 80103A28
  c->r[7]=0u+0x00000003u; // 80103A2C
  W32(c->r[28]+0x000001C0u,c->r[30]); // 80103A30
  W32(c->r[28]+0x000001C8u,c->r[30]); // 80103A34
  W32(c->r[28]+0x000001CCu,c->r[30]); // 80103A38
  W32(c->r[28]+0x000001D0u,c->r[30]); // 80103A3C
  W32(c->r[28]+0x000001C4u,c->r[8]); // 80103A40
  c->lr=0x80103A48u; f_80289B34(c); // 80103A44
  c->r[3]=c->r[28]+0x000002E0u; // 80103A48
  c->r[4]=0u+0x00000000u; // 80103A4C
  c->r[5]=0u+0x00000002u; // 80103A50
  c->lr=0x80103A58u; f_80075338(c); // 80103A54
  c->r[3]=c->r[28]+0x00000318u; // 80103A58
  c->r[4]=0u+0x00000003u; // 80103A5C
  c->r[5]=0u+0x00000004u; // 80103A60
  c->lr=0x80103A68u; f_80075338(c); // 80103A64
  c->r[3]=c->r[28]+0x00000350u; // 80103A68
  c->r[4]=0u+0x00000005u; // 80103A6C
  c->r[5]=0u+0x00000006u; // 80103A70
  c->lr=0x80103A78u; f_80075338(c); // 80103A74
  c->r[4]=0u+0x803F0000u; // 80103A78
  W32(c->r[28]+0x00000388u,c->r[30]); // 80103A7C
  c->r[4]=c->r[4]+0x0000301Cu; // 80103A80
  c->r[3]=c->r[31]|c->r[31]; // 80103A84
  W32(c->r[28]+0x000003B0u,c->r[29]); // 80103A88
  W32(c->r[31]+0x000003DCu,c->r[4]); // 80103A8C
  W32(c->r[31]+0x000003E0u,c->r[30]); // 80103A90
  W32(c->r[31]+0x000003E4u,c->r[30]); // 80103A94
  W32(c->r[31]+0x000003E8u,c->r[30]); // 80103A98
  W32(c->r[31]+0x000003ECu,c->r[30]); // 80103A9C
  W32(c->r[31]+0x000003F0u,c->r[30]); // 80103AA0
  W32(c->r[31]+0x000003F4u,c->r[30]); // 80103AA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103AA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80103AAC
  c->lr=c->r[0]; // 80103AB0
  c->r[1]=c->r[1]+0x00000030u; // 80103AB4
  return; // 80103AB8
}

// dtor_80103ABC
void f_80103ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103ABC
  c->r[0]=c->lr; // 80103AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80103AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103AC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80103ACC
  c->r[30]=c->r[3]|c->r[3]; // 80103AD0
  c->r[31]=c->r[4]|c->r[4]; // 80103AD4
  if (crb(c,2)) { goto L_80103B04; } // 80103AD8
  c->r[4]=0u+0xFFFFFFFFu; // 80103ADC
  c->r[3]=c->r[3]+0x000003DCu; // 80103AE0
  c->lr=0x80103AE8u; f_80075650(c); // 80103AE4
  c->r[3]=c->r[30]+0x00000024u; // 80103AE8
  c->r[4]=0u+0xFFFFFFFFu; // 80103AEC
  c->lr=0x80103AF4u; f_80075B74(c); // 80103AF0
  cmps(c,0,(int32_t)c->r[31],0); // 80103AF4
  if (!crb(c,1)) { goto L_80103B04; } // 80103AF8
  c->r[3]=c->r[30]|c->r[30]; // 80103AFC
  c->lr=0x80103B04u; f_802896EC(c); // 80103B00
L_80103B04:;
  c->r[3]=c->r[30]|c->r[30]; // 80103B04
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103B08
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103B0C
  c->lr=c->r[0]; // 80103B10
  c->r[1]=c->r[1]+0x00000010u; // 80103B14
  return; // 80103B18
}

// fn_80103B1C
void f_80103B1C(Ctx* __restrict c) {
  trace_call(0x80103B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103B1C
  c->r[0]=c->lr; // 80103B20
  cmps(c,0,(int32_t)c->r[3],0); // 80103B24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103B28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80103B2C
  c->r[30]=c->r[3]|c->r[3]; // 80103B30
  c->r[31]=c->r[4]|c->r[4]; // 80103B34
  if (crb(c,2)) { goto L_80103B70; } // 80103B38
  c->r[4]=0u+0x80100000u; // 80103B3C
  c->r[5]=0u+0x000003F8u; // 80103B40
  c->r[4]=c->r[4]+0x00003ABCu; // 80103B44
  c->r[6]=0u+0x00000002u; // 80103B48
  c->r[3]=c->r[3]+0x00000220u; // 80103B4C
  c->lr=0x80103B54u; f_80289C2C(c); // 80103B50
  c->r[3]=c->r[30]|c->r[30]; // 80103B54
  c->r[4]=0u+0x00000000u; // 80103B58
  c->lr=0x80103B60u; f_80102638(c); // 80103B5C
  cmps(c,0,(int32_t)c->r[31],0); // 80103B60
  if (!crb(c,1)) { goto L_80103B70; } // 80103B64
  c->r[3]=c->r[30]|c->r[30]; // 80103B68
  c->lr=0x80103B70u; f_802896EC(c); // 80103B6C
L_80103B70:;
  c->r[3]=c->r[30]|c->r[30]; // 80103B70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103B74
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103B78
  c->lr=c->r[0]; // 80103B7C
  c->r[1]=c->r[1]+0x00000010u; // 80103B80
  return; // 80103B84
}

// fn_80103B88
void f_80103B88(Ctx* __restrict c) {
  trace_call(0x80103B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103B88
  c->r[0]=c->lr; // 80103B8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103B90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103B94
  c->r[31]=c->r[3]|c->r[3]; // 80103B98
  c->r[3]=c->r[3]+0x00000220u; // 80103B9C
  c->lr=0x80103BA4u; f_8010392C(c); // 80103BA0
  c->r[3]=c->r[31]+0x00000618u; // 80103BA4
  c->lr=0x80103BACu; f_8010392C(c); // 80103BA8
  c->r[0]=R32(c->r[31]+0x0000024Cu); // 80103BAC
  cmps(c,0,(int32_t)c->r[0],0); // 80103BB0
  if (crb(c,2)) { goto L_80103BC0; } // 80103BB4
  c->r[3]=c->r[31]+0x00000260u; // 80103BB8
  c->lr=0x80103BC0u; f_801695A4(c); // 80103BBC
L_80103BC0:;
  c->r[0]=R32(c->r[31]+0x00000644u); // 80103BC0
  cmps(c,0,(int32_t)c->r[0],0); // 80103BC4
  if (crb(c,2)) { goto L_80103BD4; } // 80103BC8
  c->r[3]=c->r[31]+0x00000658u; // 80103BCC
  c->lr=0x80103BD4u; f_801695A4(c); // 80103BD0
L_80103BD4:;
  c->r[0]=R8(c->r[31]+0x00000200u); // 80103BD4
  cmps(c,0,(int32_t)c->r[0],0); // 80103BD8
  if (crb(c,2)) { goto L_80103C08; } // 80103BDC
  c->r[3]=R32(c->r[31]+0x0000021Cu); // 80103BE0
  c->lr=0x80103BE8u; f_802A66BC(c); // 80103BE4
  c->r[12]=R32(c->r[31]+0x00000000u); // 80103BE8
  c->r[3]=c->r[31]|c->r[31]; // 80103BEC
  c->r[4]=R32(c->r[31]+0x00000204u); // 80103BF0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80103BF4
  c->ctr=c->r[12]; // 80103BF8
  if (true) { c->lr=0x80103C00u; dispatch(c,c->ctr); } // 80103BFC
  c->r[0]=0u+0x00000000u; // 80103C00
  W8(c->r[31]+0x00000200u,c->r[0]); // 80103C04
L_80103C08:;
  c->r[3]=c->r[31]|c->r[31]; // 80103C08
  c->lr=0x80103C10u; f_801036D0(c); // 80103C0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103C14
  c->lr=c->r[0]; // 80103C18
  c->r[1]=c->r[1]+0x00000010u; // 80103C1C
  return; // 80103C20
}

// fn_80103C24
void f_80103C24(Ctx* __restrict c) {
  trace_call(0x80103C24u);
  c->r[0]=R32(c->r[3]+0x0000019Cu); // 80103C24
  cmps(c,0,(int32_t)c->r[0],0); // 80103C28
  if (crb(c,2)) { goto L_80103C3C; } // 80103C2C
  c->r[5]=0u+0x00000020u; // 80103C30
  c->r[3]=c->r[3]+0x00000030u; // 80103C34
  f_800F81F4(c); return; // 80103C38
L_80103C3C:;
  c->r[5]=0u+0x00000020u; // 80103C3C
  c->r[3]=c->r[3]+0x00000030u; // 80103C40
  f_800F7F1C(c); return; // 80103C44
}

// fn_80103C48
void f_80103C48(Ctx* __restrict c) {
  trace_call(0x80103C48u);
  c->r[0]=R32(c->r[3]+0x0000019Cu); // 80103C48
  cmps(c,0,(int32_t)c->r[0],0); // 80103C4C
  if (crb(c,2)) { goto L_80103C60; } // 80103C50
  c->r[5]=0u+0x00000020u; // 80103C54
  c->r[3]=c->r[3]+0x00000030u; // 80103C58
  f_800F81F4(c); return; // 80103C5C
L_80103C60:;
  c->r[5]=0u+0x00000020u; // 80103C60
  c->r[3]=c->r[3]+0x00000030u; // 80103C64
  f_800F80AC(c); return; // 80103C68
}

// fn_80103C6C
void f_80103C6C(Ctx* __restrict c) {
  trace_call(0x80103C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103C6C
  c->r[0]=c->lr; // 80103C70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103C74
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80103C78
  c->r[30]=c->r[3]|c->r[3]; // 80103C7C
  c->r[31]=c->r[4]|c->r[4]; // 80103C80
  c->r[12]=R32(c->r[3]+0x00000000u); // 80103C84
  c->r[12]=R32(c->r[12]+0x00000018u); // 80103C88
  c->ctr=c->r[12]; // 80103C8C
  if (true) { c->lr=0x80103C94u; dispatch(c,c->ctr); } // 80103C90
  W32(c->r[30]+0x00000204u,c->r[3]); // 80103C94
  c->r[4]=c->r[31]|c->r[31]; // 80103C98
  c->r[5]=0u+0x00000000u; // 80103C9C
  W32(c->r[30]+0x00000208u,c->r[31]); // 80103CA0
  c->lr=0x80103CA8u; f_802A660C(c); // 80103CA4
  W32(c->r[30]+0x0000021Cu,c->r[3]); // 80103CA8
  c->r[4]=c->r[3]|c->r[3]; // 80103CAC
  c->r[3]=c->r[30]+0x0000020Cu; // 80103CB0
  c->r[5]=0u+0x00000020u; // 80103CB4
  c->lr=0x80103CBCu; f_802A705C(c); // 80103CB8
  c->r[0]=0u+0x00000001u; // 80103CBC
  W8(c->r[30]+0x00000200u,c->r[0]); // 80103CC0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80103CC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103CC8
  c->lr=c->r[0]; // 80103CCC
  c->r[1]=c->r[1]+0x00000010u; // 80103CD0
  return; // 80103CD4
}

// fn_80103CD8
void f_80103CD8(Ctx* __restrict c) {
  trace_call(0x80103CD8u);
  c->r[0]=R8(c->r[3]+0x00000200u); // 80103CD8
  cmps(c,0,(int32_t)c->r[0],0); // 80103CDC
  if (crb(c,2)) { goto L_80103CEC; } // 80103CE0
  c->r[3]=c->r[3]+0x0000020Cu; // 80103CE4
  return; // 80103CE8
L_80103CEC:;
  c->r[3]=0u+0x00000000u; // 80103CEC
  return; // 80103CF0
}

// fn_80103CF4
void f_80103CF4(Ctx* __restrict c) {
  trace_call(0x80103CF4u);
  c->r[0]=c->r[4]|c->r[4]; // 80103CF4
  c->r[4]=c->r[5]|c->r[5]; // 80103CF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1016); // 80103CFC
  c->r[3]=c->r[3]+c->r[0]; // 80103D00
  c->r[3]=c->r[3]+0x00000220u; // 80103D04
  f_802933D8(c); return; // 80103D08
}

// fn_80103D0C
void f_80103D0C(Ctx* __restrict c) {
  trace_call(0x80103D0Cu);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)1016); // 80103D0C
  c->r[3]=c->r[3]+c->r[0]; // 80103D10
  c->r[3]=c->r[3]+0x00000220u; // 80103D14
  return; // 80103D18
}

// fn_80103D1C
void f_80103D1C(Ctx* __restrict c) {
  trace_call(0x80103D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103D1C
  c->r[0]=c->lr; // 80103D20
  W32(c->r[1]+0x000002B4u,c->r[0]); // 80103D24
  c->r[11]=c->r[1]+0x000002B0u; // 80103D28
  c->lr=0x80103D30u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80103D2C
  c->r[17]=c->r[3]|c->r[3]; // 80103D30
  c->r[3]=c->r[3]+0x00000024u; // 80103D34
  c->lr=0x80103D3Cu; f_80102A8C(c); // 80103D38
  c->r[4]=0u+0x803E0000u; // 80103D3C
  W32(c->r[1]+0x00000024u,c->r[3]); // 80103D40
  c->r[26]=0u+0x803F0000u; // 80103D44
  c->r[27]=0u+0x803F0000u; // 80103D48
  c->r[23]=c->r[4]+0xFFFFC250u; // 80103D4C
  c->r[28]=0u+0x803F0000u; // 80103D50
  c->r[29]=0u+0x803F0000u; // 80103D54
  c->r[24]=0u+0x803F0000u; // 80103D58
  c->r[25]=0u+0x803F0000u; // 80103D5C
  c->r[30]=0u+0x00000001u; // 80103D60
  c->r[31]=0u+0x00000000u; // 80103D64
  goto L_801041A4; // 80103D68
L_80103D6C:;
  c->r[20]=R32(c->r[1]+0x00000024u); // 80103D6C
  c->r[19]=0u+0x00000000u; // 80103D70
  c->r[16]=0u+0x00000000u; // 80103D74
L_80103D78:;
  c->r[0]=R8(c->r[20]+0x0000000Cu); // 80103D78
  c->r[3]=c->r[17]+c->r[16]; // 80103D7C
  c->r[18]=c->r[3]+0x00000220u; // 80103D80
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80103D84
  if (crb(c,2)) { goto L_80104100; } // 80103D88
  c->r[0]=R8(c->r[18]+0x00000020u); // 80103D8C
  cmps(c,0,(int32_t)c->r[0],0); // 80103D90
  if (!crb(c,2)) { goto L_80104100; } // 80103D94
  c->r[4]=c->r[18]|c->r[18]; // 80103D98
  c->r[3]=c->r[20]+0x00000028u; // 80103D9C
  c->lr=0x80103DA4u; f_80102858(c); // 80103DA0
  cmps(c,0,(int32_t)c->r[3],0); // 80103DA4
  if (crb(c,2)) { goto L_80104100; } // 80103DA8
  c->r[4]=R32(c->r[20]+0x00000010u); // 80103DAC
  c->r[3]=c->r[1]+0x000000ECu; // 80103DB0
  c->lr=0x80103DB8u; f_801328F8(c); // 80103DB4
  c->r[3]=c->r[1]+0x00000058u; // 80103DB8
  c->r[4]=c->r[20]+0x00000028u; // 80103DBC
  c->lr=0x80103DC4u; f_80136688(c); // 80103DC0
  c->r[3]=c->r[1]+0x0000015Cu; // 80103DC4
  c->r[4]=c->r[23]+0x00000050u; // 80103DC8
  c->r[5]=c->r[1]+0x00000058u; // 80103DCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80103DD0
  c->lr=0x80103DD8u; f_80291CC4(c); // 80103DD4
  c->r[3]=c->r[1]+0x000000ECu; // 80103DD8
  c->r[4]=c->r[1]+0x0000015Cu; // 80103DDC
  c->lr=0x80103DE4u; f_80132AE0(c); // 80103DE0
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 80103DE4
  W32(c->r[1]+0x00000020u,c->r[3]); // 80103DE8
  if (crb(c,2)) { goto L_80103E04; } // 80103DEC
  c->r[3]=c->r[24]+0x00001D4Fu; // 80103DF0
  c->r[5]=c->r[25]+0x00001D28u; // 80103DF4
  c->r[4]=0u+0x0000003Cu; // 80103DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80103DFC
  c->lr=0x80103E04u; f_803444BC(c); // 80103E00
L_80103E04:;
  c->r[3]=c->r[1]+0x00000020u; // 80103E04
  c->lr=0x80103E0Cu; f_80364F00(c); // 80103E08
  c->r[0]=R32(c->r[1]+0x00000020u); // 80103E0C
  c->r[3]=c->r[1]+0x00000020u; // 80103E10
  c->r[4]=c->r[1]+0x0000001Cu; // 80103E14
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80103E18
  c->lr=0x80103E20u; f_80364CCC(c); // 80103E1C
  c->r[3]=c->r[17]|c->r[17]; // 80103E20
  c->lr=0x80103E28u; f_80103CD8(c); // 80103E24
  c->r[4]=c->r[3]|c->r[3]; // 80103E28
  c->r[3]=c->r[18]+0x00000024u; // 80103E2C
  c->r[5]=0u+0x00000007u; // 80103E30
  c->r[6]=0u+0x00000003u; // 80103E34
  c->lr=0x80103E3Cu; f_801DFB08(c); // 80103E38
  c->r[3]=c->r[17]|c->r[17]; // 80103E3C
  c->lr=0x80103E44u; f_80103CD8(c); // 80103E40
  c->r[12]=R32(c->r[18]+0x00000024u); // 80103E44
  c->r[4]=c->r[3]|c->r[3]; // 80103E48
  c->r[3]=c->r[18]+0x00000024u; // 80103E4C
  c->r[5]=c->r[1]+0x00000020u; // 80103E50
  c->r[12]=R32(c->r[12]+0x00000010u); // 80103E54
  c->r[6]=0u+0x00000000u; // 80103E58
  c->r[7]=0u+0x00000000u; // 80103E5C
  c->r[8]=0u+0x00000000u; // 80103E60
  c->r[9]=0u+0x00000000u; // 80103E64
  c->ctr=c->r[12]; // 80103E68
  if (true) { c->lr=0x80103E70u; dispatch(c,c->ctr); } // 80103E6C
  c->r[12]=R32(c->r[18]+0x00000024u); // 80103E70
  c->r[3]=c->r[18]+0x00000024u; // 80103E74
  c->r[4]=c->r[1]+0x000000ECu; // 80103E78
  c->r[12]=R32(c->r[12]+0x00000014u); // 80103E7C
  c->ctr=c->r[12]; // 80103E80
  if (true) { c->lr=0x80103E88u; dispatch(c,c->ctr); } // 80103E84
  c->r[3]=c->r[18]+0x00000024u; // 80103E88
  c->r[4]=0u+0x000000E5u; // 80103E8C
  c->r[5]=0u+0x000000E5u; // 80103E90
  c->lr=0x80103E98u; f_8002B9BC(c); // 80103E94
  c->r[3]=c->r[1]+0x00000058u; // 80103E98
  c->r[4]=c->r[23]+0x00000059u; // 80103E9C
  c->lr=0x80103EA4u; f_80293554(c); // 80103EA0
  cmps(c,0,(int32_t)c->r[3],0); // 80103EA4
  if (crb(c,2)) { goto L_80103ED4; } // 80103EA8
  c->r[3]=c->r[1]+0x00000058u; // 80103EAC
  c->r[4]=c->r[23]+0x0000005Eu; // 80103EB0
  c->lr=0x80103EB8u; f_80293554(c); // 80103EB4
  cmps(c,0,(int32_t)c->r[3],0); // 80103EB8
  if (crb(c,2)) { goto L_80103ED4; } // 80103EBC
  c->r[3]=c->r[1]+0x00000058u; // 80103EC0
  c->r[4]=c->r[23]+0x00000063u; // 80103EC4
  c->lr=0x80103ECCu; f_80293554(c); // 80103EC8
  cmps(c,0,(int32_t)c->r[3],0); // 80103ECC
  if (!crb(c,2)) { goto L_80103EE8; } // 80103ED0
L_80103ED4:;
  c->r[3]=c->r[17]|c->r[17]; // 80103ED4
  c->lr=0x80103EDCu; f_80103CD8(c); // 80103ED8
  c->r[4]=c->r[3]|c->r[3]; // 80103EDC
  c->r[3]=c->r[18]+0x00000024u; // 80103EE0
  c->lr=0x80103EE8u; f_80031698(c); // 80103EE4
L_80103EE8:;
  c->r[22]=R32(c->r[18]+0x0000002Cu); // 80103EE8
  c->r[21]=0u+0x00000000u; // 80103EEC
  goto L_80103FB4; // 80103EF0
L_80103EF4:;
  c->r[4]=c->r[22]|c->r[22]; // 80103EF4
  c->r[5]=c->r[21]|c->r[21]; // 80103EF8
  c->r[3]=c->r[1]+0x00000078u; // 80103EFC
  c->lr=0x80103F04u; f_80385274(c); // 80103F00
  c->r[3]=c->r[1]+0x00000078u; // 80103F04
  c->r[4]=0u+0x00000000u; // 80103F08
  c->lr=0x80103F10u; f_803851E4(c); // 80103F0C
  W32(c->r[1]+0x00000010u,c->r[3]); // 80103F10
  c->r[4]=c->r[21]|c->r[21]; // 80103F14
  c->r[3]=c->r[1]+0x00000014u; // 80103F18
  c->r[0]=R32(c->r[22]+0x000000E8u); // 80103F1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103F20
  c->lr=0x80103F28u; f_803661F8(c); // 80103F24
  cmps(c,0,(int32_t)c->r[3],0); // 80103F28
  c->r[15]=c->r[3]|c->r[3]; // 80103F2C
  if (!crb(c,2)) { goto L_80103F50; } // 80103F30
  c->r[3]=c->r[26]+0x000015E0u; // 80103F34
  c->r[5]=c->r[27]+0x000015C0u; // 80103F38
  c->r[4]=0u+0x00000239u; // 80103F3C
  c->r[6]=c->r[13]+0xFFFF8038u; // 80103F40
  c->r[7]=c->r[13]+0xFFFF81C8u; // 80103F44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80103F48
  c->lr=0x80103F50u; f_803444BC(c); // 80103F4C
L_80103F50:;
  c->r[0]=R32(c->r[15]+0x00000008u); // 80103F50
  cmps(c,0,(int32_t)c->r[0],0); // 80103F54
  if (crb(c,2)) { goto L_80103F68; } // 80103F58
  c->r[3]=c->r[15]+c->r[0]; // 80103F5C
  c->r[15]=c->r[3]+0xFFFFFFFCu; // 80103F60
  goto L_80103F6C; // 80103F64
L_80103F68:;
  c->r[15]=0u+0x00000000u; // 80103F68
L_80103F6C:;
  cmps(c,0,(int32_t)c->r[15],0); // 80103F6C
  if (!crb(c,2)) { goto L_80103F88; } // 80103F70
  c->r[3]=c->r[28]+0x00001998u; // 80103F74
  c->r[5]=c->r[29]+0x00001970u; // 80103F78
  c->r[4]=0u+0x0000008Fu; // 80103F7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80103F80
  c->lr=0x80103F88u; f_803444BC(c); // 80103F84
L_80103F88:;
  c->r[4]=c->r[15]+0x00000004u; // 80103F88
  c->r[3]=c->r[13]+0xFFFF9600u; // 80103F8C
  c->lr=0x80103F94u; f_80116BF4(c); // 80103F90
  c->r[5]=c->r[3]|c->r[3]; // 80103F94
  c->r[4]=c->r[1]+0x00000010u; // 80103F98
  c->r[3]=c->r[13]+0xFFFF9600u; // 80103F9C
  c->lr=0x80103FA4u; f_80116B44(c); // 80103FA0
  c->r[3]=c->r[1]+0x00000010u; // 80103FA4
  c->r[4]=0u+0x00000000u; // 80103FA8
  c->lr=0x80103FB0u; f_80366F6C(c); // 80103FAC
  c->r[21]=c->r[21]+0x00000001u; // 80103FB0
L_80103FB4:;
  c->r[0]=R32(c->r[22]+0x000000E8u); // 80103FB4
  c->r[3]=c->r[1]+0x00000018u; // 80103FB8
  W32(c->r[1]+0x00000018u,c->r[0]); // 80103FBC
  c->lr=0x80103FC4u; f_8036624C(c); // 80103FC0
  cmpu(c,0,c->r[21],c->r[3]); // 80103FC4
  if (crb(c,0)) { IRQCHK(c); goto L_80103EF4; } // 80103FC8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80103FCC
  c->lr=0x80103FD4u; f_800F39E4(c); // 80103FD0
  c->r[4]=c->r[19]|c->r[19]; // 80103FD4
  c->r[5]=c->r[1]+0x00000058u; // 80103FD8
  c->lr=0x80103FE0u; f_801D5A08(c); // 80103FDC
  c->r[3]=c->r[1]+0x00000058u; // 80103FE0
  c->lr=0x80103FE8u; f_80136860(c); // 80103FE4
  c->r[21]=c->r[3]|c->r[3]; // 80103FE8
  c->r[3]=c->r[1]+0x00000058u; // 80103FEC
  c->lr=0x80103FF4u; f_801367DC(c); // 80103FF0
  c->r[15]=c->r[3]|c->r[3]; // 80103FF4
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80103FF8
  c->lr=0x80104000u; f_800F39E4(c); // 80103FFC
  c->r[4]=c->r[19]|c->r[19]; // 80104000
  c->r[5]=c->r[15]|c->r[15]; // 80104004
  c->r[6]=c->r[21]|c->r[21]; // 80104008
  c->lr=0x80104010u; f_801D5A58(c); // 8010400C
  W8(c->r[18]+0x00000020u,c->r[30]); // 80104010
  c->r[3]=c->r[18]+0x000003DCu; // 80104014
  c->lr=0x8010401Cu; f_801DD5C4(c); // 80104018
  c->r[3]=c->r[17]|c->r[17]; // 8010401C
  c->lr=0x80104024u; f_80103CD8(c); // 80104020
  c->r[5]=c->r[3]|c->r[3]; // 80104024
  c->r[3]=c->r[18]+0x000003DCu; // 80104028
  c->r[4]=c->r[18]+0x00000024u; // 8010402C
  c->r[6]=0u+0x00000020u; // 80104030
  c->lr=0x80104038u; f_801DD578(c); // 80104034
  c->r[3]=c->r[1]+0x00000058u; // 80104038
  c->r[4]=c->r[23]+0x00000068u; // 8010403C
  c->lr=0x80104044u; f_80293554(c); // 80104040
  cmps(c,0,(int32_t)c->r[3],0); // 80104044
  if (!crb(c,2)) { goto L_80104090; } // 80104048
  {uint32_t ea=c->r[2]+0xFFFF92F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010404C
  c->r[3]=c->r[1]+0x00000040u; // 80104050
  c->f[2]=c->f[1]; // 80104054
  c->f[3]=c->f[1]; // 80104058
  c->lr=0x80104060u; f_800521A0(c); // 8010405C
  {uint32_t ea=c->r[2]+0xFFFF92F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104060
  c->r[15]=c->r[3]|c->r[3]; // 80104064
  c->r[3]=c->r[1]+0x0000004Cu; // 80104068
  c->f[2]=c->f[1]; // 8010406C
  c->f[3]=c->f[1]; // 80104070
  c->lr=0x80104078u; f_800521A0(c); // 80104074
  c->r[6]=c->r[3]|c->r[3]; // 80104078
  c->r[7]=c->r[15]|c->r[15]; // 8010407C
  c->r[3]=c->r[18]+0x000003DCu; // 80104080
  c->r[4]=c->r[23]+0x0000006Du; // 80104084
  c->r[5]=c->r[23]+0x00000073u; // 80104088
  c->lr=0x80104090u; f_801041E8(c); // 8010408C
L_80104090:;
  c->r[3]=c->r[1]+0x00000058u; // 80104090
  c->r[4]=c->r[23]+0x00000079u; // 80104094
  c->lr=0x8010409Cu; f_80293554(c); // 80104098
  cmps(c,0,(int32_t)c->r[3],0); // 8010409C
  if (!crb(c,2)) { goto L_801040E8; } // 801040A0
  {uint32_t ea=c->r[2]+0xFFFF92F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801040A4
  c->r[3]=c->r[1]+0x00000028u; // 801040A8
  c->f[2]=c->f[1]; // 801040AC
  c->f[3]=c->f[1]; // 801040B0
  c->lr=0x801040B8u; f_800521A0(c); // 801040B4
  {uint32_t ea=c->r[2]+0xFFFF92F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801040B8
  c->r[15]=c->r[3]|c->r[3]; // 801040BC
  c->r[3]=c->r[1]+0x00000034u; // 801040C0
  c->f[2]=c->f[1]; // 801040C4
  c->f[3]=c->f[1]; // 801040C8
  c->lr=0x801040D0u; f_800521A0(c); // 801040CC
  c->r[6]=c->r[3]|c->r[3]; // 801040D0
  c->r[7]=c->r[15]|c->r[15]; // 801040D4
  c->r[3]=c->r[18]+0x000003DCu; // 801040D8
  c->r[4]=c->r[23]+0x0000007Eu; // 801040DC
  c->r[5]=c->r[23]+0x00000073u; // 801040E0
  c->lr=0x801040E8u; f_801041E8(c); // 801040E4
L_801040E8:;
  c->r[3]=c->r[18]+0x00000024u; // 801040E8
  c->r[4]=c->r[18]+0x000003DCu; // 801040EC
  c->lr=0x801040F4u; f_801DF848(c); // 801040F0
  c->r[3]=c->r[1]+0x000000ECu; // 801040F4
  c->r[4]=0u+0xFFFFFFFFu; // 801040F8
  c->lr=0x80104100u; f_80132958(c); // 801040FC
L_80104100:;
  c->r[4]=c->r[18]|c->r[18]; // 80104100
  c->r[3]=c->r[1]+0x000000ACu; // 80104104
  goto L_80104120; // 80104108
L_8010410C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 8010410C
  if (crb(c,2)) { goto L_8010412C; } // 80104110
  W8(c->r[3]+0x00000000u,c->r[5]); // 80104114
  c->r[3]=c->r[3]+0x00000001u; // 80104118
  c->r[4]=c->r[4]+0x00000001u; // 8010411C
L_80104120:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 80104120
  cmps(c,0,(int32_t)c->r[5],46); // 80104124
  if (!crb(c,2)) { IRQCHK(c); goto L_8010410C; } // 80104128
L_8010412C:;
  c->r[4]=c->r[23]+0x00000084u; // 8010412C
  goto L_80104140; // 80104130
L_80104134:;
  W8(c->r[3]+0x00000000u,c->r[5]); // 80104134
  c->r[3]=c->r[3]+0x00000001u; // 80104138
  c->r[4]=c->r[4]+0x00000001u; // 8010413C
L_80104140:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 80104140
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 80104144
  if (!crb(c,2)) { IRQCHK(c); goto L_80104134; } // 80104148
  W8(c->r[3]+0x00000000u,c->r[31]); // 8010414C
  c->r[0]=R8(c->r[20]+0x0000000Cu); // 80104150
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80104154
  if (crb(c,2)) { goto L_80104188; } // 80104158
  c->r[0]=R8(c->r[18]+0x00000020u); // 8010415C
  cmps(c,0,(int32_t)c->r[0],0); // 80104160
  if (crb(c,2)) { goto L_80104188; } // 80104164
  c->r[3]=c->r[20]+0x00000028u; // 80104168
  c->r[4]=c->r[1]+0x000000ACu; // 8010416C
  c->lr=0x80104174u; f_80102858(c); // 80104170
  cmps(c,0,(int32_t)c->r[3],0); // 80104174
  if (crb(c,2)) { goto L_80104188; } // 80104178
  c->r[4]=R32(c->r[20]+0x00000010u); // 8010417C
  c->r[3]=c->r[18]+0x00000040u; // 80104180
  c->lr=0x80104188u; f_8016801C(c); // 80104184
L_80104188:;
  c->r[19]=c->r[19]+0x00000001u; // 80104188
  c->r[16]=c->r[16]+0x000003F8u; // 8010418C
  cmps(c,0,(int32_t)c->r[19],2); // 80104190
  if (crb(c,0)) { IRQCHK(c); goto L_80103D78; } // 80104194
  c->r[3]=c->r[1]+0x00000024u; // 80104198
  c->r[4]=0u+0x00000000u; // 8010419C
  c->lr=0x801041A4u; f_80102A94(c); // 801041A0
L_801041A4:;
  c->r[3]=c->r[17]+0x00000024u; // 801041A4
  c->lr=0x801041ACu; f_80102AA8(c); // 801041A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801041AC
  c->r[4]=c->r[1]+0x0000000Cu; // 801041B0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801041B4
  c->r[3]=c->r[1]+0x00000008u; // 801041B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801041BC
  c->lr=0x801041C4u; f_80102AB0(c); // 801041C0
  c->r[0]=cntlz(c->r[3]); // 801041C4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801041C8
  if (!crb(c,2)) { IRQCHK(c); goto L_80103D6C; } // 801041CC
  c->r[11]=c->r[1]+0x000002B0u; // 801041D0
  c->lr=0x801041D8u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801041D4
  c->r[0]=R32(c->r[1]+0x000002B4u); // 801041D8
  c->lr=c->r[0]; // 801041DC
  c->r[1]=c->r[1]+0x000002B0u; // 801041E0
  return; // 801041E4
}

// fn_801041E8
void f_801041E8(Ctx* __restrict c) {
  trace_call(0x801041E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801041E8
  c->r[0]=c->lr; // 801041EC
  W32(c->r[1]+0x00000064u,c->r[0]); // 801041F0
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801041F4
  c->r[31]=c->r[1]|c->r[1]; // 801041F8
  c->r[23]=c->r[3]|c->r[3]; // 801041FC
  c->r[24]=c->r[4]|c->r[4]; // 80104200
  c->r[25]=c->r[5]|c->r[5]; // 80104204
  c->r[26]=c->r[6]|c->r[6]; // 80104208
  c->r[27]=c->r[7]|c->r[7]; // 8010420C
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 80104210
  c->r[0]=R32(c->r[3]+0x00000008u); // 80104214
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80104218
  if (!crb(c,0)) { goto L_801042C4; } // 8010421C
  c->r[3]=R32(c->r[3]+0x00000018u); // 80104220
  c->r[4]=0u+0x00000168u; // 80104224
  c->lr=0x8010422Cu; f_802A703C(c); // 80104228
  cmps(c,0,(int32_t)c->r[3],0); // 8010422C
  c->r[30]=c->r[3]|c->r[3]; // 80104230
  if (crb(c,2)) { goto L_80104254; } // 80104234
  W32(c->r[31]+0x00000034u,c->r[1]); // 80104238
  c->lr=0x80104240u; f_801DC7B4(c); // 8010423C
  goto L_80104254; // 80104240
  c->r[3]=0u+0x00000000u; // 80104244
  c->r[4]=0u+0x00000000u; // 80104248
  c->r[5]=0u+0x00000000u; // 8010424C
  c->lr=0x80104254u; f_8028BC3C(c); // 80104250
L_80104254:;
  c->r[5]=R32(c->r[23]+0x00000014u); // 80104254
  c->r[28]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80104258
  c->r[4]=c->r[27]|c->r[27]; // 8010425C
  c->r[3]=c->r[31]+0x00000008u; // 80104260
  W32(c->r[5]+c->r[28],c->r[30]); // 80104264
  c->lr=0x8010426Cu; f_8003F484(c); // 80104268
  c->r[30]=c->r[3]|c->r[3]; // 8010426C
  c->r[4]=c->r[26]|c->r[26]; // 80104270
  c->r[3]=c->r[31]+0x00000014u; // 80104274
  c->lr=0x8010427Cu; f_8003F484(c); // 80104278
  c->r[5]=R32(c->r[23]+0x00000014u); // 8010427C
  c->r[7]=c->r[3]|c->r[3]; // 80104280
  c->r[4]=c->r[24]|c->r[24]; // 80104284
  c->r[6]=c->r[25]|c->r[25]; // 80104288
  c->r[3]=R32(c->r[5]+c->r[28]); // 8010428C
  c->r[8]=c->r[30]|c->r[30]; // 80104290
  c->r[5]=R32(c->r[23]+0x00000010u); // 80104294
  c->r[12]=R32(c->r[3]+0x00000004u); // 80104298
  c->r[9]=R32(c->r[23]+0x00000018u); // 8010429C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801042A0
  c->r[10]=R32(c->r[23]+0x00000004u); // 801042A4
  c->ctr=c->r[12]; // 801042A8
  if (true) { c->lr=0x801042B0u; dispatch(c,c->ctr); } // 801042AC
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 801042B0
  c->r[3]=c->r[29]|c->r[29]; // 801042B4
  c->r[0]=c->r[4]+0x00000001u; // 801042B8
  W32(c->r[23]+0x0000000Cu,c->r[0]); // 801042BC
  goto L_801042C8; // 801042C0
L_801042C4:;
  c->r[3]=0u+0xFFFFFFFFu; // 801042C4
L_801042C8:;
  c->r[10]=c->r[31]|c->r[31]; // 801042C8
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801042CC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801042D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801042D4
  c->r[1]=c->r[10]|c->r[10]; // 801042D8
  c->lr=c->r[0]; // 801042DC
  return; // 801042E0
}

// fn_801042E4
void f_801042E4(Ctx* __restrict c) {
  trace_call(0x801042E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801042E4
  c->r[0]=c->lr; // 801042E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801042EC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801042F0
  c->r[28]=0u+0x00000000u; // 801042F4
  c->r[27]=c->r[3]|c->r[3]; // 801042F8
  c->r[31]=0u+0x00000000u; // 801042FC
  c->r[30]=c->r[28]|c->r[28]; // 80104300
L_80104304:;
  c->r[29]=c->r[27]+c->r[31]; // 80104304
  c->r[0]=R8(c->r[29]+0x00000240u); // 80104308
  cmps(c,0,(int32_t)c->r[0],0); // 8010430C
  if (crb(c,2)) { goto L_80104334; } // 80104310
  c->r[12]=R32(c->r[29]+0x00000244u); // 80104314
  c->r[3]=c->r[29]+0x00000244u; // 80104318
  c->r[12]=R32(c->r[12]+0x00000018u); // 8010431C
  c->ctr=c->r[12]; // 80104320
  if (true) { c->lr=0x80104328u; dispatch(c,c->ctr); } // 80104324
  c->r[3]=c->r[29]+0x000005FCu; // 80104328
  c->lr=0x80104330u; f_801DD5C4(c); // 8010432C
  W8(c->r[29]+0x00000240u,c->r[30]); // 80104330
L_80104334:;
  c->r[28]=c->r[28]+0x00000001u; // 80104334
  c->r[31]=c->r[31]+0x000003F8u; // 80104338
  cmps(c,0,(int32_t)c->r[28],2); // 8010433C
  if (crb(c,0)) { IRQCHK(c); goto L_80104304; } // 80104340
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80104344
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104348
  c->lr=c->r[0]; // 8010434C
  c->r[1]=c->r[1]+0x00000020u; // 80104350
  return; // 80104354
}

// fn_80104358
void f_80104358(Ctx* __restrict c) {
  trace_call(0x80104358u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)1016); // 80104358
  c->r[3]=c->r[3]+c->r[0]; // 8010435C
  c->r[3]=c->r[3]+0x00000244u; // 80104360
  return; // 80104364
}

// fn_80104368
void f_80104368(Ctx* __restrict c) {
  trace_call(0x80104368u);
  c->r[0]=0u+0x00000000u; // 80104368
  W8(c->r[3]+0x00000000u,c->r[0]); // 8010436C
  return; // 80104370
}

// fn_80104374
void f_80104374(Ctx* __restrict c) {
  trace_call(0x80104374u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104374
  c->r[0]=c->lr; // 80104378
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010437C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80104380
  c->r[31]=0u+0x80490000u; // 80104384
  c->r[30]=c->r[4]|c->r[4]; // 80104388
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 8010438C
  c->lr=0x80104394u; f_801037EC(c); // 80104390
  cmps(c,0,(int32_t)c->r[3],0); // 80104394
  if (crb(c,2)) { goto L_801043AC; } // 80104398
  c->r[4]=c->r[30]|c->r[30]; // 8010439C
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 801043A0
  c->lr=0x801043A8u; f_80103094(c); // 801043A4
  goto L_801043BC; // 801043A8
L_801043AC:;
  c->r[3]=0u+0x80490000u; // 801043AC
  c->r[4]=c->r[30]|c->r[30]; // 801043B0
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 801043B4
  c->lr=0x801043BCu; f_80103094(c); // 801043B8
L_801043BC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801043BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801043C0
  c->lr=c->r[0]; // 801043C4
  c->r[1]=c->r[1]+0x00000010u; // 801043C8
  return; // 801043CC
}

// fn_801043D0
void f_801043D0(Ctx* __restrict c) {
  trace_call(0x801043D0u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801043D0
  cmps(c,0,(int32_t)c->r[0],0); // 801043D4
  if (!crb(c,2)) { goto L_801043F0; } // 801043D8
  c->r[3]=0u+0x80490000u; // 801043DC
  {uint32_t ea=c->r[3]+0xFFFFEE9Cu; c->r[12]=R32(ea); c->r[3]=ea;} // 801043E0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801043E4
  c->ctr=c->r[12]; // 801043E8
  if (true) { dispatch(c,c->ctr); return; } // 801043EC
L_801043F0:;
  c->r[3]=0u+0x80490000u; // 801043F0
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 801043F4
  f_801028D4(c); return; // 801043F8
}

// fn_801043FC
void f_801043FC(Ctx* __restrict c) {
  trace_call(0x801043FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801043FC
  c->r[0]=c->lr; // 80104400
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104404
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80104408
  c->r[31]=0u+0x80490000u; // 8010440C
  c->r[30]=c->r[4]|c->r[4]; // 80104410
  c->r[3]=c->r[31]+0xFFFFEE9Cu; // 80104414
  c->lr=0x8010441Cu; f_801037EC(c); // 80104418
  cmps(c,0,(int32_t)c->r[3],0); // 8010441C
  if (crb(c,2)) { goto L_80104434; } // 80104420
  c->r[4]=c->r[30]|c->r[30]; // 80104424
  c->r[3]=c->r[31]+0xFFFFEE9Cu; // 80104428
  c->lr=0x80104430u; f_80103354(c); // 8010442C
  goto L_80104444; // 80104430
L_80104434:;
  c->r[3]=0u+0x80490000u; // 80104434
  c->r[4]=c->r[30]|c->r[30]; // 80104438
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 8010443C
  c->lr=0x80104444u; f_80103354(c); // 80104440
L_80104444:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80104444
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104448
  c->lr=c->r[0]; // 8010444C
  c->r[1]=c->r[1]+0x00000010u; // 80104450
  return; // 80104454
}

// fn_80104458
void f_80104458(Ctx* __restrict c) {
  trace_call(0x80104458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104458
  c->r[0]=c->lr; // 8010445C
  c->r[3]=0u+0x80490000u; // 80104460
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104464
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 80104468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010446C
  c->r[31]=c->r[4]|c->r[4]; // 80104470
  c->lr=0x80104478u; f_80103598(c); // 80104474
  c->r[3]=0u+0x80490000u; // 80104478
  c->r[4]=c->r[31]|c->r[31]; // 8010447C
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80104480
  c->lr=0x80104488u; f_80103598(c); // 80104484
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104488
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010448C
  c->lr=c->r[0]; // 80104490
  c->r[1]=c->r[1]+0x00000010u; // 80104494
  return; // 80104498
}

// fn_8010449C
void f_8010449C(Ctx* __restrict c) {
  trace_call(0x8010449Cu);
  c->r[3]=0u+0x80490000u; // 8010449C
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 801044A0
  f_80103CD8(c); return; // 801044A4
}

// fn_801044A8
void f_801044A8(Ctx* __restrict c) {
  trace_call(0x801044A8u);
  W8(c->r[3]+0x00000000u,c->r[4]); // 801044A8
  return; // 801044AC
}

// fn_801044B0
void f_801044B0(Ctx* __restrict c) {
  trace_call(0x801044B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801044B0
  c->r[0]=c->lr; // 801044B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801044B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801044BC
  c->r[31]=c->r[3]|c->r[3]; // 801044C0
  c->lr=0x801044C8u; f_801038B8(c); // 801044C4
  c->r[4]=0u+0x80400000u; // 801044C8
  c->r[3]=c->r[31]|c->r[31]; // 801044CC
  c->r[4]=c->r[4]+0xFFFF82A0u; // 801044D0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801044D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801044D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801044DC
  c->lr=c->r[0]; // 801044E0
  c->r[1]=c->r[1]+0x00000010u; // 801044E4
  return; // 801044E8
}

// fn_801044EC
void f_801044EC(Ctx* __restrict c) {
  trace_call(0x801044ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801044EC
  c->r[0]=c->lr; // 801044F0
  cmps(c,0,(int32_t)c->r[3],0); // 801044F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801044F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801044FC
  c->r[30]=c->r[3]|c->r[3]; // 80104500
  c->r[31]=c->r[4]|c->r[4]; // 80104504
  if (crb(c,2)) { goto L_80104524; } // 80104508
  c->r[4]=0u+0x00000000u; // 8010450C
  c->lr=0x80104514u; f_80103B1C(c); // 80104510
  cmps(c,0,(int32_t)c->r[31],0); // 80104514
  if (!crb(c,1)) { goto L_80104524; } // 80104518
  c->r[3]=c->r[30]|c->r[30]; // 8010451C
  c->lr=0x80104524u; f_802896EC(c); // 80104520
L_80104524:;
  c->r[3]=c->r[30]|c->r[30]; // 80104524
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80104528
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010452C
  c->lr=c->r[0]; // 80104530
  c->r[1]=c->r[1]+0x00000010u; // 80104534
  return; // 80104538
}

// fn_8010453C
void f_8010453C(Ctx* __restrict c) {
  trace_call(0x8010453Cu);
  f_801028D4(c); return; // 8010453C
}

// fn_80104540
void f_80104540(Ctx* __restrict c) {
  trace_call(0x80104540u);
  c->r[3]=0u+0x804D0000u; // 80104540
  c->r[3]=c->r[3]+0x00003280u; // 80104544
  c->r[3]=c->r[3]+0x00000044u; // 80104548
  f_802A703C(c); return; // 8010454C
}

// fn_80104550
void f_80104550(Ctx* __restrict c) {
  trace_call(0x80104550u);
  c->r[3]=0u+0x804D0000u; // 80104550
  c->r[3]=c->r[3]+0x00003280u; // 80104554
  c->r[3]=c->r[3]+0x00000044u; // 80104558
  f_802A703C(c); return; // 8010455C
}

// fn_80104560
void f_80104560(Ctx* __restrict c) {
  trace_call(0x80104560u);
  return; // 80104560
}

// fn_80104564
void f_80104564(Ctx* __restrict c) {
  trace_call(0x80104564u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104564
  c->r[0]=c->lr; // 80104568
  c->r[4]=0u+0x001F0000u; // 8010456C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104570
  c->r[4]=c->r[4]+0x00004000u; // 80104574
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80104578
  c->r[31]=0u+0x804D0000u; // 8010457C
  c->r[30]=0u+0x80490000u; // 80104580
  c->r[31]=c->r[31]+0x00003280u; // 80104584
  c->r[30]=c->r[30]+0xFFFFE860u; // 80104588
  c->r[3]=c->r[31]+0x00000034u; // 8010458C
  c->lr=0x80104594u; f_802A703C(c); // 80104590
  W32(c->r[13]+0xFFFF956Cu,c->r[3]); // 80104594
  c->r[4]=0u+0x02120000u; // 80104598
  c->r[3]=c->r[31]+0x00000044u; // 8010459C
  c->r[4]=c->r[4]+0xFFFFD000u; // 801045A0
  c->lr=0x801045A8u; f_802A703C(c); // 801045A4
  c->r[31]=0u+0x803E0000u; // 801045A8
  c->r[5]=0u+0x00010000u; // 801045AC
  c->r[31]=c->r[31]+0xFFFFC250u; // 801045B0
  W32(c->r[13]+0xFFFF9570u,c->r[3]); // 801045B4
  c->r[4]=c->r[3]|c->r[3]; // 801045B8
  c->r[3]=c->r[30]+0x00000224u; // 801045BC
  c->r[6]=c->r[31]+0x0000008Eu; // 801045C0
  c->r[5]=c->r[5]+0xFFFF8000u; // 801045C4
  c->r[7]=0u+0x00000000u; // 801045C8
  c->r[8]=0u+0x00000000u; // 801045CC
  c->lr=0x801045D4u; f_801026A4(c); // 801045D0
  c->r[4]=R32(c->r[13]+0xFFFF9570u); // 801045D4
  c->r[3]=c->r[30]+0x00000018u; // 801045D8
  c->r[6]=c->r[31]+0x00000094u; // 801045DC
  c->r[5]=0u+0x00480000u; // 801045E0
  c->r[4]=c->r[4]+0x00010000u; // 801045E4
  c->r[7]=0u+0x00000000u; // 801045E8
  c->r[8]=0u+0x00000000u; // 801045EC
  c->r[4]=c->r[4]+0xFFFF8000u; // 801045F0
  c->lr=0x801045F8u; f_801026A4(c); // 801045F4
  c->r[4]=R32(c->r[13]+0xFFFF9570u); // 801045F8
  c->r[5]=0u+0x00490000u; // 801045FC
  c->r[3]=c->r[30]+0x00000430u; // 80104600
  c->r[6]=c->r[31]+0x0000009Bu; // 80104604
  c->r[4]=c->r[4]+0x00490000u; // 80104608
  c->r[5]=c->r[5]+0x00006000u; // 8010460C
  c->r[7]=0u+0x00000000u; // 80104610
  c->r[8]=0u+0x00000000u; // 80104614
  c->r[4]=c->r[4]+0xFFFF8000u; // 80104618
  c->lr=0x80104620u; f_801026A4(c); // 8010461C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80104620
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104624
  c->lr=c->r[0]; // 80104628
  c->r[1]=c->r[1]+0x00000010u; // 8010462C
  return; // 80104630
}

// fn_80104634
void f_80104634(Ctx* __restrict c) {
  trace_call(0x80104634u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104634
  c->r[12]=0u+0x00040000u; // 80104638
  c->r[11]=0u+0x00130000u; // 8010463C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104640
  c->r[31]=0u+0x00010000u; // 80104644
  c->r[31]=c->r[31]+0xFFFF8000u; // 80104648
  c->r[0]=R32(c->r[13]+0xFFFF956Cu); // 8010464C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80104650
  c->r[3]=c->r[11]+0xFFFFC000u; // 80104654
  c->r[0]=0u+0x00080000u; // 80104658
  W32(c->r[4]+0x00000000u,c->r[31]); // 8010465C
  c->r[4]=R32(c->r[13]+0xFFFF956Cu); // 80104660
  c->r[4]=c->r[4]+0x00010000u; // 80104664
  c->r[4]=c->r[4]+0xFFFF8000u; // 80104668
  W32(c->r[5]+0x00000000u,c->r[4]); // 8010466C
  W32(c->r[6]+0x00000000u,c->r[12]); // 80104670
  c->r[4]=R32(c->r[13]+0xFFFF956Cu); // 80104674
  c->r[4]=c->r[4]+0x00050000u; // 80104678
  c->r[4]=c->r[4]+0xFFFF8000u; // 8010467C
  W32(c->r[7]+0x00000000u,c->r[4]); // 80104680
  W32(c->r[8]+0x00000000u,c->r[3]); // 80104684
  c->r[3]=R32(c->r[13]+0xFFFF956Cu); // 80104688
  c->r[3]=c->r[3]+0x00170000u; // 8010468C
  c->r[3]=c->r[3]+0x00004000u; // 80104690
  W32(c->r[9]+0x00000000u,c->r[3]); // 80104694
  W32(c->r[10]+0x00000000u,c->r[0]); // 80104698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010469C
  c->r[1]=c->r[1]+0x00000010u; // 801046A0
  return; // 801046A4
}

// fn_801046A8
void f_801046A8(Ctx* __restrict c) {
  trace_call(0x801046A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801046A8
  c->r[0]=c->lr; // 801046AC
  c->r[5]=0u+0x01000000u; // 801046B0
  c->r[7]=0u+0x00000000u; // 801046B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801046B8
  c->r[8]=0u+0x00000000u; // 801046BC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801046C0
  c->r[30]=0u+0x80490000u; // 801046C4
  c->r[31]=0u+0x803E0000u; // 801046C8
  c->r[31]=c->r[31]+0xFFFFC250u; // 801046CC
  c->r[30]=c->r[30]+0xFFFFE860u; // 801046D0
  c->r[6]=c->r[31]+0x000000A2u; // 801046D4
  c->r[3]=R32(c->r[13]+0xFFFF9570u); // 801046D8
  c->r[4]=c->r[3]+0x00920000u; // 801046DC
  c->r[3]=c->r[30]+0x00001264u; // 801046E0
  c->r[4]=c->r[4]+0xFFFFE000u; // 801046E4
  c->lr=0x801046ECu; f_801026A4(c); // 801046E8
  c->r[3]=c->r[30]+0x0000063Cu; // 801046EC
  c->r[6]=c->r[31]+0x000000A8u; // 801046F0
  c->r[4]=0u+0x00000000u; // 801046F4
  c->r[5]=0u+0x00000000u; // 801046F8
  c->r[7]=0u+0x00000000u; // 801046FC
  c->r[8]=0u+0x00000000u; // 80104700
  c->lr=0x80104708u; f_801026A4(c); // 80104704
  c->r[3]=c->r[30]+0x00001058u; // 80104708
  c->r[6]=c->r[31]+0x000000AEu; // 8010470C
  c->r[4]=0u+0x00000000u; // 80104710
  c->r[5]=0u+0x00000000u; // 80104714
  c->r[7]=0u+0x00000000u; // 80104718
  c->r[8]=0u+0x00000000u; // 8010471C
  c->lr=0x80104724u; f_801026A4(c); // 80104720
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80104724
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104728
  c->lr=c->r[0]; // 8010472C
  c->r[1]=c->r[1]+0x00000010u; // 80104730
  return; // 80104734
}

// fn_80104738
void f_80104738(Ctx* __restrict c) {
  trace_call(0x80104738u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104738
  c->r[0]=c->lr; // 8010473C
  c->r[3]=0u+0x000B0000u; // 80104740
  c->r[7]=0u+0x00000000u; // 80104744
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104748
  c->r[5]=c->r[3]+0xFFFFF000u; // 8010474C
  c->r[8]=0u+0x00000000u; // 80104750
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80104754
  c->r[30]=0u+0x80490000u; // 80104758
  c->r[31]=0u+0x803E0000u; // 8010475C
  c->r[30]=c->r[30]+0xFFFFE860u; // 80104760
  c->r[31]=c->r[31]+0xFFFFC250u; // 80104764
  c->r[4]=R32(c->r[13]+0xFFFF9570u); // 80104768
  c->r[3]=c->r[30]+0x00001264u; // 8010476C
  c->r[6]=c->r[31]+0x000000B4u; // 80104770
  c->r[4]=c->r[4]+0x00920000u; // 80104774
  c->r[4]=c->r[4]+0xFFFFE000u; // 80104778
  c->lr=0x80104780u; f_801026A4(c); // 8010477C
  c->r[4]=R32(c->r[13]+0xFFFF9570u); // 80104780
  c->r[5]=0u+0x00750000u; // 80104784
  c->r[3]=c->r[30]+0x0000063Cu; // 80104788
  c->r[6]=c->r[31]+0x000000A8u; // 8010478C
  c->r[4]=c->r[4]+0x009D0000u; // 80104790
  c->r[5]=c->r[5]+0xFFFF8000u; // 80104794
  c->r[7]=0u+0x00000000u; // 80104798
  c->r[8]=0u+0x00000000u; // 8010479C
  c->r[4]=c->r[4]+0xFFFFD000u; // 801047A0
  c->lr=0x801047A8u; f_801026A4(c); // 801047A4
  c->r[3]=c->r[30]+0x0000063Cu; // 801047A8
  c->r[4]=0u+0x000A0000u; // 801047AC
  c->lr=0x801047B4u; f_80103C6C(c); // 801047B0
  c->r[7]=R32(c->r[13]+0xFFFF9570u); // 801047B4
  c->r[3]=c->r[30]+0x00001058u; // 801047B8
  c->r[6]=c->r[31]+0x000000AEu; // 801047BC
  c->r[5]=0u+0x01000000u; // 801047C0
  c->r[4]=c->r[7]+0x01110000u; // 801047C4
  c->r[7]=c->r[7]+0x02120000u; // 801047C8
  c->r[8]=0u+0x00004000u; // 801047CC
  c->r[7]=c->r[7]+0xFFFF9000u; // 801047D0
  c->r[4]=c->r[4]+0x00005000u; // 801047D4
  c->lr=0x801047DCu; f_801026A4(c); // 801047D8
  c->r[3]=c->r[30]+0x00001058u; // 801047DC
  c->r[0]=0u+0x00000001u; // 801047E0
  c->r[31]=c->r[30]+0x0000063Cu; // 801047E4
  W8(c->r[3]+0x00000094u,c->r[0]); // 801047E8
  c->r[3]=c->r[31]+0x00000220u; // 801047EC
  c->lr=0x801047F4u; f_8010392C(c); // 801047F0
  c->r[3]=c->r[31]+0x00000618u; // 801047F4
  c->lr=0x801047FCu; f_8010392C(c); // 801047F8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801047FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104800
  c->lr=c->r[0]; // 80104804
  c->r[1]=c->r[1]+0x00000010u; // 80104808
  return; // 8010480C
}

// fn_80104810
void f_80104810(Ctx* __restrict c) {
  trace_call(0x80104810u);
  return; // 80104810
}

// fn_80104814
void f_80104814(Ctx* __restrict c) {
  trace_call(0x80104814u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104814
  c->r[0]=c->lr; // 80104818
  {uint32_t ea=c->r[2]+0xFFFF92F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010481C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104820
  c->f[3]=c->f[1]; // 80104824
  {uint32_t ea=c->r[2]+0xFFFF92F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80104828
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010482C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104830
  c->r[30]=0u+0x80490000u; // 80104834
  c->r[30]=c->r[30]+0xFFFFE860u; // 80104838
  c->r[3]=c->r[30]+0x00000000u; // 8010483C
  c->lr=0x80104844u; f_8003F588(c); // 80104840
  c->r[3]=c->r[30]+0x00000018u; // 80104844
  c->lr=0x8010484Cu; f_80102510(c); // 80104848
  c->r[31]=0u+0x80100000u; // 8010484C
  c->r[3]=c->r[30]+0x00000018u; // 80104850
  c->r[4]=c->r[31]+0x00002638u; // 80104854
  c->r[5]=c->r[30]+0x0000000Cu; // 80104858
  c->lr=0x80104860u; f_802895A4(c); // 8010485C
  c->r[3]=c->r[30]+0x00000224u; // 80104860
  c->lr=0x80104868u; f_80102510(c); // 80104864
  c->r[3]=c->r[30]+0x00000224u; // 80104868
  c->r[4]=c->r[31]+0x00002638u; // 8010486C
  c->r[5]=c->r[30]+0x00000218u; // 80104870
  c->lr=0x80104878u; f_802895A4(c); // 80104874
  c->r[3]=c->r[30]+0x00000430u; // 80104878
  c->lr=0x80104880u; f_80102510(c); // 8010487C
  c->r[3]=c->r[30]+0x00000430u; // 80104880
  c->r[4]=c->r[31]+0x00002638u; // 80104884
  c->r[5]=c->r[30]+0x00000424u; // 80104888
  c->lr=0x80104890u; f_802895A4(c); // 8010488C
  c->r[3]=c->r[30]+0x0000063Cu; // 80104890
  c->lr=0x80104898u; f_801038B8(c); // 80104894
  c->r[4]=0u+0x80100000u; // 80104898
  c->r[3]=c->r[30]+0x0000063Cu; // 8010489C
  c->r[4]=c->r[4]+0x00003B1Cu; // 801048A0
  c->r[5]=c->r[30]+0x00000630u; // 801048A4
  c->lr=0x801048ACu; f_802895A4(c); // 801048A8
  c->r[3]=c->r[30]+0x00001058u; // 801048AC
  c->lr=0x801048B4u; f_80102510(c); // 801048B0
  c->r[3]=c->r[30]+0x00001058u; // 801048B4
  c->r[4]=c->r[31]+0x00002638u; // 801048B8
  c->r[5]=c->r[30]+0x0000104Cu; // 801048BC
  c->lr=0x801048C4u; f_802895A4(c); // 801048C0
  c->r[3]=c->r[30]+0x00001264u; // 801048C4
  c->lr=0x801048CCu; f_80102510(c); // 801048C8
  c->r[3]=c->r[30]+0x00001264u; // 801048CC
  c->r[4]=c->r[31]+0x00002638u; // 801048D0
  c->r[5]=c->r[30]+0x00001258u; // 801048D4
  c->lr=0x801048DCu; f_802895A4(c); // 801048D8
  c->r[3]=c->r[30]+0x00001470u; // 801048DC
  c->lr=0x801048E4u; f_801044B0(c); // 801048E0
  c->r[4]=0u+0x80100000u; // 801048E4
  c->r[3]=c->r[30]+0x00001470u; // 801048E8
  c->r[4]=c->r[4]+0x000044ECu; // 801048EC
  c->r[5]=c->r[30]+0x00001464u; // 801048F0
  c->lr=0x801048F8u; f_802895A4(c); // 801048F4
  c->r[3]=c->r[30]+0x00001E8Cu; // 801048F8
  c->lr=0x80104900u; f_80102438(c); // 801048FC
  c->r[4]=0u+0x80100000u; // 80104900
  c->r[3]=c->r[30]+0x00001E8Cu; // 80104904
  c->r[4]=c->r[4]+0x00004810u; // 80104908
  c->r[5]=c->r[30]+0x00001E80u; // 8010490C
  c->lr=0x80104914u; f_802895A4(c); // 80104910
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104918
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010491C
  c->lr=c->r[0]; // 80104920
  c->r[1]=c->r[1]+0x00000010u; // 80104924
  return; // 80104928
}

// fn_8010492C
void f_8010492C(Ctx* __restrict c) {
  trace_call(0x8010492Cu);
  c->r[3]=R32(c->r[13]+0xFFFF95B0u); // 8010492C
  c->r[4]=R32(c->r[13]+0xFFFF95B4u); // 80104930
  return; // 80104934
}

// fn_80104938
void f_80104938(Ctx* __restrict c) {
  trace_call(0x80104938u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104938
  c->r[0]=c->lr; // 8010493C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104940
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80104944
  c->r[27]=c->r[3]|c->r[3]; // 80104948
  c->r[30]=0u+0x80490000u; // 8010494C
  c->r[28]=c->r[4]|c->r[4]; // 80104950
  c->r[4]=c->r[27]|c->r[27]; // 80104954
  c->r[3]=c->r[30]+0x00001314u; // 80104958
  c->lr=0x80104960u; f_801DBFE4(c); // 8010495C
  cmps(c,0,(int32_t)c->r[3],0); // 80104960
  c->r[29]=c->r[3]|c->r[3]; // 80104964
  if (!crb(c,0)) { goto L_8010499C; } // 80104968
  c->r[31]=0u+0x00000000u; // 8010496C
L_80104970:;
  c->r[29]=R32(c->r[13]+0xFFFF9588u); // 80104970
  c->r[0]=c->r[29]+0x00000001u; // 80104974
  cmps(c,0,(int32_t)c->r[0],5); // 80104978
  W32(c->r[13]+0xFFFF9588u,c->r[0]); // 8010497C
  if (crb(c,0)) { goto L_80104988; } // 80104980
  W32(c->r[13]+0xFFFF9588u,c->r[31]); // 80104984
L_80104988:;
  c->r[4]=c->r[29]|c->r[29]; // 80104988
  c->r[3]=c->r[30]+0x00001314u; // 8010498C
  c->lr=0x80104994u; f_801DC0E0(c); // 80104990
  cmps(c,0,(int32_t)c->r[3],0); // 80104994
  if (!crb(c,2)) { IRQCHK(c); goto L_80104970; } // 80104998
L_8010499C:;
  c->r[3]=0u+0x80490000u; // 8010499C
  c->r[4]=c->r[27]|c->r[27]; // 801049A0
  c->r[3]=c->r[3]+0x0000436Cu; // 801049A4
  c->lr=0x801049ACu; f_802933D8(c); // 801049A8
  c->r[31]=0u+0x80490000u; // 801049AC
  c->r[4]=c->r[27]|c->r[27]; // 801049B0
  c->r[5]=c->r[28]|c->r[28]; // 801049B4
  c->r[3]=c->r[31]+0x00001314u; // 801049B8
  c->lr=0x801049C0u; f_801DBD04(c); // 801049BC
  c->r[4]=c->r[27]|c->r[27]; // 801049C0
  c->r[5]=c->r[29]|c->r[29]; // 801049C4
  c->r[3]=c->r[31]+0x00001314u; // 801049C8
  c->lr=0x801049D0u; f_801DC070(c); // 801049CC
  c->r[3]=c->r[29]|c->r[29]; // 801049D0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801049D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801049D8
  c->lr=c->r[0]; // 801049DC
  c->r[1]=c->r[1]+0x00000020u; // 801049E0
  return; // 801049E4
}

// fn_801049E8
void f_801049E8(Ctx* __restrict c) {
  trace_call(0x801049E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801049E8
  c->r[0]=c->lr; // 801049EC
  c->r[3]=0u+0x80490000u; // 801049F0
  c->r[4]=0u+0x00000000u; // 801049F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801049F8
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 801049FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104A00
  c->r[31]=0u+0x80490000u; // 80104A04
  c->r[31]=c->r[31]+0x00000778u; // 80104A08
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104A0C
  c->lr=0x80104A14u; f_8010277C(c); // 80104A10
  c->r[30]=0u+0x00000000u; // 80104A14
  c->r[3]=c->r[31]+0x00000B9Cu; // 80104A18
  W8(c->r[13]+0xFFFF9578u,c->r[30]); // 80104A1C
  W8(c->r[13]+0xFFFF9579u,c->r[30]); // 80104A20
  W32(c->r[13]+0xFFFF9584u,c->r[30]); // 80104A24
  W32(c->r[13]+0xFFFF9590u,c->r[30]); // 80104A28
  W8(c->r[13]+0xFFFF95B8u,c->r[30]); // 80104A2C
  W8(c->r[13]+0xFFFF95C4u,c->r[30]); // 80104A30
  c->lr=0x80104A38u; f_801DBCBC(c); // 80104A34
  c->r[0]=0u+0x00000004u; // 80104A38
  c->r[3]=c->r[13]+0xFFFF958Cu; // 80104A3C
  W32(c->r[13]+0xFFFF9588u,c->r[30]); // 80104A40
  W8(c->r[31]+0x00003BF4u,c->r[30]); // 80104A44
  c->ctr=c->r[0]; // 80104A48
L_80104A4C:;
  W8(c->r[3]+0x00000000u,c->r[30]); // 80104A4C
  c->r[3]=c->r[3]+0x00000001u; // 80104A50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104A4C; } // 80104A54
  c->r[0]=0u+0x00000008u; // 80104A58
  c->r[4]=c->r[31]+0x00003C30u; // 80104A5C
  c->r[3]=0u+0x00000000u; // 80104A60
  c->r[5]=0u+0xFFFFFFFFu; // 80104A64
  c->ctr=c->r[0]; // 80104A68
L_80104A6C:;
  W32(c->r[4]+c->r[3],c->r[5]); // 80104A6C
  c->r[3]=c->r[3]+0x00000004u; // 80104A70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104A6C; } // 80104A74
  c->r[0]=0u+0x00000008u; // 80104A78
  c->r[4]=c->r[31]+0x00003D20u; // 80104A7C
  c->r[3]=0u+0x00000000u; // 80104A80
  c->r[5]=0u+0x00000000u; // 80104A84
  c->ctr=c->r[0]; // 80104A88
L_80104A8C:;
  W8(c->r[4]+c->r[3],c->r[5]); // 80104A8C
  c->r[3]=c->r[3]+0x0000003Cu; // 80104A90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104A8C; } // 80104A94
  c->r[0]=0u+0x00000008u; // 80104A98
  c->r[4]=c->r[31]+0x00003F00u; // 80104A9C
  c->r[3]=0u+0x00000000u; // 80104AA0
  c->r[5]=0u+0xFFFFFFFFu; // 80104AA4
  c->ctr=c->r[0]; // 80104AA8
L_80104AAC:;
  W32(c->r[4]+c->r[3],c->r[5]); // 80104AAC
  c->r[3]=c->r[3]+0x00000014u; // 80104AB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104AAC; } // 80104AB4
  {uint32_t ea=c->r[2]+0xFFFF92F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104AB8
  c->r[3]=0u+0x00000000u; // 80104ABC
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80104AC0
  c->r[0]=0u+0x00000001u; // 80104AC4
  W8(c->r[31]+0x00003FA0u,c->r[3]); // 80104AC8
  {uint32_t ea=c->r[13]+0xFFFF8958u; WF32(ea,c->f[1]);} // 80104ACC
  W8(c->r[13]+0xFFFF95CCu,c->r[3]); // 80104AD0
  {uint32_t ea=c->r[13]+0xFFFF95D8u; WF32(ea,c->f[0]);} // 80104AD4
  W8(c->r[13]+0xFFFF95DDu,c->r[3]); // 80104AD8
  W8(c->r[13]+0xFFFF95D4u,c->r[3]); // 80104ADC
  W32(c->r[13]+0xFFFF95E0u,c->r[3]); // 80104AE0
  W8(c->r[13]+0xFFFF95E4u,c->r[0]); // 80104AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104AE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104AEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104AF0
  c->lr=c->r[0]; // 80104AF4
  c->r[1]=c->r[1]+0x00000010u; // 80104AF8
  return; // 80104AFC
}

// fn_80104B00
void f_80104B00(Ctx* __restrict c) {
  trace_call(0x80104B00u);
  {uint32_t ea=c->r[1]+0xFFFFFD90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104B00
  c->r[0]=c->lr; // 80104B04
  W32(c->r[1]+0x00000274u,c->r[0]); // 80104B08
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[31]);} // 80104B0C
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,31,ea,0,0);} // 80104B10
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[30]);} // 80104B14
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,30,ea,0,0);} // 80104B18
  c->r[11]=c->r[1]+0x00000250u; // 80104B1C
  c->lr=0x80104B24u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80104B20
  c->r[31]=c->r[1]|c->r[1]; // 80104B24
  c->r[0]=R32(c->r[13]+0xFFFF9590u); // 80104B28
  c->r[29]=0u+0x80490000u; // 80104B2C
  c->r[29]=c->r[29]+0x00000778u; // 80104B30
  cmps(c,0,(int32_t)c->r[0],0); // 80104B34
  if (!crb(c,1)) { goto L_80104E08; } // 80104B38
  c->lr=0x80104B40u; f_800F65B8(c); // 80104B3C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80104B40
  cmps(c,0,(int32_t)c->r[0],0); // 80104B44
  if (!crb(c,2)) { goto L_80104E08; } // 80104B48
  c->r[28]=0u+0x00000000u; // 80104B4C
  c->lr=0x80104B54u; f_8003DA30(c); // 80104B50
  c->lr=0x80104B58u; f_8003ED58(c); // 80104B54
  W32(c->r[31]+0x00000034u,c->r[3]); // 80104B58
  W32(c->r[31]+0x00000048u,c->r[3]); // 80104B5C
  goto L_80104C08; // 80104B60
L_80104B64:;
  c->r[3]=R32(c->r[31]+0x00000048u); // 80104B64
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80104B68
  c->r[12]=R32(c->r[3]+0x00000010u); // 80104B6C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80104B70
  c->ctr=c->r[12]; // 80104B74
  if (true) { c->lr=0x80104B7Cu; dispatch(c,c->ctr); } // 80104B78
  W32(c->r[31]+0x00000098u,c->r[4]); // 80104B7C
  c->r[4]=0u+0xC0000000u; // 80104B80
  W32(c->r[31]+0x00000094u,c->r[3]); // 80104B84
  c->r[3]=c->r[31]+0x00000094u; // 80104B88
  c->lr=0x80104B90u; f_8003EDD0(c); // 80104B8C
  cmps(c,0,(int32_t)c->r[3],0); // 80104B90
  if (crb(c,2)) { goto L_80104BFC; } // 80104B94
  c->r[3]=R32(c->r[31]+0x00000048u); // 80104B98
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80104B9C
  c->r[12]=R32(c->r[3]+0x00000010u); // 80104BA0
  c->r[12]=R32(c->r[12]+0x00000008u); // 80104BA4
  c->ctr=c->r[12]; // 80104BA8
  if (true) { c->lr=0x80104BB0u; dispatch(c,c->ctr); } // 80104BAC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80104BB0
  W32(c->r[31]+0x00000090u,c->r[4]); // 80104BB4
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 80104BB8
  if (crb(c,2)) { goto L_80104BFC; } // 80104BBC
  c->r[3]=R32(c->r[31]+0x00000048u); // 80104BC0
  c->r[0]=R32(c->r[13]+0xFFFF9598u); // 80104BC4
  c->r[4]=c->r[3]+0xFFFFFFF8u; // 80104BC8
  c->r[3]=R32(c->r[3]+0x000004B8u); // 80104BCC
  cmpu(c,0,c->r[0],c->r[3]); // 80104BD0
  if (crb(c,1)) { goto L_80104BFC; } // 80104BD4
  c->r[0]=R32(c->r[13]+0xFFFF959Cu); // 80104BD8
  cmpu(c,0,c->r[3],c->r[0]); // 80104BDC
  if (crb(c,1)) { goto L_80104BFC; } // 80104BE0
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80104BE4
  c->r[28]=c->r[28]+0x00000001u; // 80104BE8
  c->r[3]=c->r[31]+0x000001A0u; // 80104BEC
  cmps(c,0,(int32_t)c->r[28],32); // 80104BF0
  W32(c->r[3]+c->r[0],c->r[4]); // 80104BF4
  if (!crb(c,0)) { goto L_80104C30; } // 80104BF8
L_80104BFC:;
  c->r[3]=c->r[31]+0x00000048u; // 80104BFC
  c->r[4]=0u+0x00000000u; // 80104C00
  c->lr=0x80104C08u; f_8003ED68(c); // 80104C04
L_80104C08:;
  c->lr=0x80104C0Cu; f_8003DA30(c); // 80104C08
  c->lr=0x80104C10u; f_8003ECFC(c); // 80104C0C
  c->r[0]=R32(c->r[31]+0x00000048u); // 80104C10
  c->r[4]=c->r[31]+0x0000002Cu; // 80104C14
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 80104C18
  c->r[3]=c->r[31]+0x00000030u; // 80104C1C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104C20
  c->lr=0x80104C28u; f_8003ED7C(c); // 80104C24
  cmps(c,0,(int32_t)c->r[3],0); // 80104C28
  if (!crb(c,2)) { IRQCHK(c); goto L_80104B64; } // 80104C2C
L_80104C30:;
  cmps(c,0,(int32_t)c->r[28],0); // 80104C30
  if (!crb(c,1)) { goto L_80104E08; } // 80104C34
  c->r[27]=0u+0x00000000u; // 80104C38
  c->r[3]=c->r[13]+0xFFFF95B0u; // 80104C3C
  c->lr=0x80104C44u; f_8003F1D4(c); // 80104C40
  cmps(c,0,(int32_t)c->r[3],0); // 80104C44
  if (crb(c,2)) { goto L_80104C58; } // 80104C48
  c->r[3]=c->r[13]+0xFFFF95B0u; // 80104C4C
  c->lr=0x80104C54u; f_80064CFC(c); // 80104C50
  c->r[27]=R32(c->r[3]+0x00000004u); // 80104C54
L_80104C58:;
  c->r[30]=0u+0x00000000u; // 80104C58
  c->r[4]=0u+0x00000000u; // 80104C5C
  c->r[5]=0u+0x00000000u; // 80104C60
  goto L_80104C90; // 80104C64
L_80104C68:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80104C68
  c->r[3]=c->r[31]+0x000001A0u; // 80104C6C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80104C70
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104C74
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104C78
  fcmp(c,0,c->f[1],c->f[0]); // 80104C7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80104C80
  if (!crb(c,2)) { goto L_80104C8C; } // 80104C84
  c->r[4]=c->r[4]+0x00000001u; // 80104C88
L_80104C8C:;
  c->r[5]=c->r[5]+0x00000001u; // 80104C8C
L_80104C90:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[28]); // 80104C90
  if (crb(c,0)) { IRQCHK(c); goto L_80104C68; } // 80104C94
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 80104C98
  if (!crb(c,2)) { goto L_80104CA8; } // 80104C9C
  c->r[30]=c->r[27]|c->r[27]; // 80104CA0
  goto L_80104CE0; // 80104CA4
L_80104CA8:;
  c->r[4]=0u+0x00000000u; // 80104CA8
  goto L_80104CD8; // 80104CAC
L_80104CB0:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80104CB0
  c->r[3]=c->r[31]+0x000001A0u; // 80104CB4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80104CB8
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104CBC
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104CC0
  fcmp(c,0,c->f[1],c->f[0]); // 80104CC4
  if (!crb(c,1)) { goto L_80104CD4; } // 80104CC8
  c->r[30]=c->r[3]|c->r[3]; // 80104CCC
  goto L_80104CE0; // 80104CD0
L_80104CD4:;
  c->r[4]=c->r[4]+0x00000001u; // 80104CD4
L_80104CD8:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 80104CD8
  if (crb(c,0)) { IRQCHK(c); goto L_80104CB0; } // 80104CDC
L_80104CE0:;
  cmps(c,0,(int32_t)c->r[30],0); // 80104CE0
  if (!crb(c,2)) { goto L_80104CF4; } // 80104CE4
  cmps(c,0,(int32_t)c->r[28],0); // 80104CE8
  if (!crb(c,1)) { goto L_80104CF4; } // 80104CEC
  c->r[30]=R32(c->r[31]+0x000001A0u); // 80104CF0
L_80104CF4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80104CF4
  if (crb(c,2)) { goto L_80104E08; } // 80104CF8
  c->r[12]=R32(c->r[30]+0x00000010u); // 80104CFC
  c->r[3]=c->r[30]|c->r[30]; // 80104D00
  c->r[12]=R32(c->r[12]+0x00000338u); // 80104D04
  c->ctr=c->r[12]; // 80104D08
  if (true) { c->lr=0x80104D10u; dispatch(c,c->ctr); } // 80104D0C
  c->r[4]=c->r[3]|c->r[3]; // 80104D10
  c->r[3]=c->r[31]+0x00000170u; // 80104D14
  c->r[12]=R32(c->r[4]+0x00000000u); // 80104D18
  c->r[12]=R32(c->r[12]+0x00000040u); // 80104D1C
  c->ctr=c->r[12]; // 80104D20
  if (true) { c->lr=0x80104D28u; dispatch(c,c->ctr); } // 80104D24
  {uint32_t ea=c->r[31]+0x0000017Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80104D28
  c->r[3]=c->r[31]+0x000000CCu; // 80104D2C
  {uint32_t ea=c->r[31]+0x0000018Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80104D30
  {uint32_t ea=c->r[31]+0x0000019Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80104D34
  c->lr=0x80104D3Cu; f_800521A0(c); // 80104D38
  c->r[3]=c->r[29]+0x00003C24u; // 80104D3C
  c->r[26]=c->r[31]+0x000000CCu; // 80104D40
  {uint32_t ea=c->r[26]+0x00000000u; psq_load(c,0,ea,0,0);} // 80104D44
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 80104D48
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80104D4C
  {uint32_t ea=c->r[26]+0x00000000u; psq_store(c,0,ea,0,0);} // 80104D50
  {uint32_t ea=c->r[26]+0x00000008u; psq_load(c,0,ea,1,0);} // 80104D54
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 80104D58
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80104D5C
  {uint32_t ea=c->r[26]+0x00000008u; psq_store(c,0,ea,1,0);} // 80104D60
  cmpu(c,0,c->r[30],c->r[27]); // 80104D64
  if (crb(c,2)) { goto L_80104D94; } // 80104D68
  c->lr=0x80104D70u; f_80061A4C(c); // 80104D6C
  c->r[3]=R32(c->r[3]+0x000008BCu); // 80104D70
  c->r[4]=c->r[26]|c->r[26]; // 80104D74
  {uint32_t ea=c->r[13]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104D78
  {uint32_t ea=c->r[13]+0xFFFF95A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80104D7C
  {uint32_t ea=c->r[13]+0xFFFF95A8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80104D80
  c->r[5]=R32(c->r[13]+0xFFFF9594u); // 80104D84
  c->lr=0x80104D8Cu; f_801DB32C(c); // 80104D88
  {uint32_t ea=c->r[13]+0xFFFF95ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80104D8C
  {uint32_t ea=c->r[13]+0xFFFF95A8u; WF32(ea,c->f[0]);} // 80104D90
L_80104D94:;
  c->lr=0x80104D98u; f_80061A4C(c); // 80104D94
  c->r[4]=c->r[3]|c->r[3]; // 80104D98
  c->r[3]=c->r[31]+0x000000C0u; // 80104D9C
  c->r[4]=c->r[4]+0x00000384u; // 80104DA0
  c->lr=0x80104DA8u; f_8003F484(c); // 80104DA4
  c->r[3]=c->r[31]+0x000000C0u; // 80104DA8
  c->r[4]=c->r[31]+0x000000CCu; // 80104DAC
  c->lr=0x80104DB4u; f_801053F8(c); // 80104DB0
  {uint32_t ea=c->r[31]+0x000000C0u; psq_load(c,0,ea,0,0);} // 80104DB4
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80104DB8
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104DBC
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 80104DC0
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80104DC4
  {uint32_t ea=c->r[2]+0xFFFF9304u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104DC8
  fcmp(c,0,c->f[1],c->f[0]); // 80104DCC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80104DD0
  if (!crb(c,2)) { goto L_80104DEC; } // 80104DD4
  c->lr=0x80104DDCu; f_80061A4C(c); // 80104DD8
  c->r[3]=R32(c->r[3]+0x000008BCu); // 80104DDC
  c->r[4]=c->r[31]+0x000000CCu; // 80104DE0
  {uint32_t ea=c->r[13]+0xFFFF95A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104DE4
  c->lr=0x80104DECu; f_801DB780(c); // 80104DE8
L_80104DEC:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 80104DEC
  c->r[3]=c->r[13]+0xFFFF95B0u; // 80104DF0
  c->r[0]=R32(c->r[30]+0x00000004u); // 80104DF4
  W32(c->r[31]+0x00000084u,c->r[4]); // 80104DF8
  W32(c->r[31]+0x00000088u,c->r[0]); // 80104DFC
  W32(c->r[13]+0xFFFF95B0u,c->r[4]); // 80104E00
  W32(c->r[3]+0x00000004u,c->r[0]); // 80104E04
L_80104E08:;
  c->r[0]=R8(c->r[13]+0xFFFF95B8u); // 80104E08
  cmps(c,0,(int32_t)c->r[0],0); // 80104E0C
  if (crb(c,2)) { goto L_80104E84; } // 80104E10
  c->r[0]=R32(c->r[13]+0xFFFF94B8u); // 80104E14
  cmps(c,0,(int32_t)c->r[0],0); // 80104E18
  if (crb(c,2)) { goto L_80104E84; } // 80104E1C
  c->r[3]=0u+0x804D0000u; // 80104E20
  {uint32_t ea=c->r[13]+0xFFFF95C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80104E24
  c->r[3]=c->r[3]+0x00003318u; // 80104E28
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80104E2C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80104E30
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80104E34
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80104E38
  {uint32_t ea=c->r[13]+0xFFFF95C0u; WF32(ea,c->f[1]);} // 80104E3C
  fcmp(c,0,c->f[0],c->f[2]); // 80104E40
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80104E44
  if (!crb(c,2)) { goto L_80104E84; } // 80104E48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80104E4C
  {uint32_t ea=c->r[13]+0xFFFF95BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80104E50
  c->r[3]=c->r[31]+0x0000014Cu; // 80104E54
  c->r[4]=0u+0x40000000u; // 80104E58
  {uint32_t ea=c->r[13]+0xFFFF95C0u; WF32(ea,c->f[0]);} // 80104E5C
  c->lr=0x80104E64u; f_8010541C(c); // 80104E60
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 80104E64
  c->r[3]=c->r[31]+0x0000007Cu; // 80104E68
  c->r[4]=c->r[31]+0x0000014Cu; // 80104E6C
  c->r[5]=R32(c->r[6]+0x00000000u); // 80104E70
  c->r[0]=R32(c->r[6]+0x00000004u); // 80104E74
  W32(c->r[31]+0x0000007Cu,c->r[5]); // 80104E78
  W32(c->r[31]+0x00000080u,c->r[0]); // 80104E7C
  c->lr=0x80104E84u; f_800BCDAC(c); // 80104E80
L_80104E84:;
  c->r[27]=0u+0x00000000u; // 80104E84
  goto L_8010502C; // 80104E88
L_80104E8C:;
  c->r[28]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80104E8C
  c->r[30]=c->r[29]+0x00003C30u; // 80104E90
  c->r[0]=R32(c->r[30]+c->r[28]); // 80104E94
  cmps(c,0,(int32_t)c->r[0],0); // 80104E98
  if (crb(c,0)) { goto L_80105028; } // 80104E9C
  c->r[25]=0u+0x00000000u; // 80104EA0
  c->lr=0x80104EA8u; f_8003DA30(c); // 80104EA4
  c->lr=0x80104EACu; f_8003ED58(c); // 80104EA8
  W32(c->r[31]+0x00000028u,c->r[3]); // 80104EAC
  c->r[26]=c->r[29]+0x00003C50u; // 80104EB0
  W32(c->r[31]+0x00000044u,c->r[3]); // 80104EB4
  goto L_80104FB0; // 80104EB8
L_80104EBC:;
  c->r[3]=R32(c->r[31]+0x00000044u); // 80104EBC
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80104EC0
  c->r[12]=R32(c->r[3]+0x00000010u); // 80104EC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80104EC8
  c->ctr=c->r[12]; // 80104ECC
  if (true) { c->lr=0x80104ED4u; dispatch(c,c->ctr); } // 80104ED0
  W32(c->r[31]+0x00000078u,c->r[4]); // 80104ED4
  c->r[4]=0u+0xC0000000u; // 80104ED8
  W32(c->r[31]+0x00000074u,c->r[3]); // 80104EDC
  c->r[3]=c->r[31]+0x00000074u; // 80104EE0
  c->lr=0x80104EE8u; f_8003EDD0(c); // 80104EE4
  cmps(c,0,(int32_t)c->r[3],0); // 80104EE8
  if (crb(c,2)) { goto L_80104FA4; } // 80104EEC
  c->r[3]=R32(c->r[31]+0x00000044u); // 80104EF0
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80104EF4
  c->r[12]=R32(c->r[3]+0x00000010u); // 80104EF8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80104EFC
  c->ctr=c->r[12]; // 80104F00
  if (true) { c->lr=0x80104F08u; dispatch(c,c->ctr); } // 80104F04
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80104F08
  W32(c->r[31]+0x00000070u,c->r[4]); // 80104F0C
  W32(c->r[31]+0x0000006Cu,c->r[3]); // 80104F10
  if (crb(c,2)) { goto L_80104FA4; } // 80104F14
  c->r[3]=R32(c->r[31]+0x00000044u); // 80104F18
  c->r[0]=R32(c->r[30]+c->r[28]); // 80104F1C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80104F20
  c->r[4]=R32(c->r[3]+0x000004C0u); // 80104F24
  cmpu(c,0,c->r[4],c->r[0]); // 80104F28
  if (!crb(c,2)) { goto L_80104FA4; } // 80104F2C
  c->r[12]=R32(c->r[3]+0x00000010u); // 80104F30
  c->r[25]=0u+0x00000001u; // 80104F34
  c->r[12]=R32(c->r[12]+0x00000338u); // 80104F38
  c->ctr=c->r[12]; // 80104F3C
  if (true) { c->lr=0x80104F44u; dispatch(c,c->ctr); } // 80104F40
  c->r[4]=c->r[3]|c->r[3]; // 80104F44
  c->r[3]=c->r[31]+0x0000011Cu; // 80104F48
  c->r[12]=R32(c->r[4]+0x00000000u); // 80104F4C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80104F50
  c->ctr=c->r[12]; // 80104F54
  if (true) { c->lr=0x80104F5Cu; dispatch(c,c->ctr); } // 80104F58
  c->r[3]=c->r[31]+0x000000B4u; // 80104F5C
  c->r[4]=c->r[31]+0x0000011Cu; // 80104F60
  c->lr=0x80104F68u; f_80032FD8(c); // 80104F64
  {uint32_t ea=c->r[26]+c->r[28]; c->f[31]=c->ps1[31]=RF32(ea);} // 80104F68
  c->lr=0x80104F70u; f_8015D64C(c); // 80104F6C
  {uint32_t ea=c->r[2]+0xFFFF9308u; c->f[2]=c->ps1[2]=RF32(ea);} // 80104F70
  c->f[1]=c->f[31]; // 80104F74
  {uint32_t ea=c->r[2]+0xFFFF930Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80104F78
  c->r[4]=c->r[31]+0x000000A8u; // 80104F7C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 80104F80
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[4]=c->ps1[4]=RF32(ea);} // 80104F84
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[31]); // 80104F88
  {uint32_t ea=c->r[2]+0xFFFF9310u; c->f[5]=c->ps1[5]=RF32(ea);} // 80104F8C
  c->r[5]=c->r[31]+0x000000B4u; // 80104F90
  c->r[6]=0u+0xFFFFFFFFu; // 80104F94
  c->r[7]=0u+0x00000002u; // 80104F98
  c->r[8]=0u+0x00000000u; // 80104F9C
  c->lr=0x80104FA4u; f_8015EE70(c); // 80104FA0
L_80104FA4:;
  c->r[3]=c->r[31]+0x00000044u; // 80104FA4
  c->r[4]=0u+0x00000000u; // 80104FA8
  c->lr=0x80104FB0u; f_8003ED68(c); // 80104FAC
L_80104FB0:;
  c->lr=0x80104FB4u; f_8003DA30(c); // 80104FB0
  c->lr=0x80104FB8u; f_8003ECFC(c); // 80104FB4
  c->r[0]=R32(c->r[31]+0x00000044u); // 80104FB8
  c->r[4]=c->r[31]+0x00000020u; // 80104FBC
  W32(c->r[31]+0x00000020u,c->r[3]); // 80104FC0
  c->r[3]=c->r[31]+0x00000024u; // 80104FC4
  W32(c->r[31]+0x00000024u,c->r[0]); // 80104FC8
  c->lr=0x80104FD0u; f_8003ED7C(c); // 80104FCC
  cmps(c,0,(int32_t)c->r[3],0); // 80104FD0
  if (!crb(c,2)) { IRQCHK(c); goto L_80104EBC; } // 80104FD4
  cmps(c,0,(int32_t)c->r[25],0); // 80104FD8
  if (!crb(c,2)) { goto L_8010501C; } // 80104FDC
  c->r[4]=0u+0x804D0000u; // 80104FE0
  c->r[3]=c->r[29]+0x00003C70u; // 80104FE4
  c->r[4]=c->r[4]+0x00003318u; // 80104FE8
  {uint32_t ea=c->r[3]+c->r[28]; c->f[1]=c->ps1[1]=RF32(ea);} // 80104FEC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80104FF0
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80104FF4
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 80104FF8
  c->f[1]=c->ps1[1]=S(c->f[2]); // 80104FFC
  {uint32_t ea=c->r[3]+c->r[28]; WF32(ea,c->f[2]);} // 80105000
  fcmp(c,0,c->f[1],c->f[0]); // 80105004
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80105008
  if (!crb(c,2)) { goto L_80105028; } // 8010500C
  c->r[0]=0u+0xFFFFFFFFu; // 80105010
  W32(c->r[30]+c->r[28],c->r[0]); // 80105014
  goto L_80105028; // 80105018
L_8010501C:;
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010501C
  c->r[3]=c->r[29]+0x00003C70u; // 80105020
  {uint32_t ea=c->r[3]+c->r[28]; WF32(ea,c->f[0]);} // 80105024
L_80105028:;
  c->r[27]=c->r[27]+0x00000001u; // 80105028
L_8010502C:;
  cmps(c,0,(int32_t)c->r[27],8); // 8010502C
  if (crb(c,0)) { IRQCHK(c); goto L_80104E8C; } // 80105030
  c->r[0]=R8(c->r[13]+0xFFFF95C4u); // 80105034
  cmps(c,0,(int32_t)c->r[0],0); // 80105038
  if (crb(c,2)) { goto L_80105070; } // 8010503C
  c->lr=0x80105044u; f_80061A4C(c); // 80105040
  c->r[4]=c->r[3]|c->r[3]; // 80105044
  c->r[3]=c->r[31]+0x0000009Cu; // 80105048
  c->r[4]=c->r[4]+0x00000384u; // 8010504C
  c->lr=0x80105054u; f_8003F484(c); // 80105050
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105054
  c->r[3]=c->r[29]+0x00003C90u; // 80105058
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010505C
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80105060
  c->lr=0x80105068u; f_801054BC(c); // 80105064
  c->r[3]=c->r[29]+0x00003C90u; // 80105068
  c->lr=0x80105070u; f_80146A94(c); // 8010506C
L_80105070:;
  c->r[27]=0u+0x00000000u; // 80105070
  goto L_80105290; // 80105074
L_80105078:;
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)60); // 80105078
  c->r[0]=c->r[29]+0x00003D20u; // 8010507C
  c->r[28]=c->r[0]+c->r[3]; // 80105080
  c->r[0]=R8(c->r[3]+c->r[0]); // 80105084
  cmps(c,0,(int32_t)c->r[0],0); // 80105088
  if (crb(c,2)) { goto L_8010528C; } // 8010508C
  c->r[0]=R32(c->r[28]+0x00000004u); // 80105090
  cmps(c,0,(int32_t)c->r[0],0); // 80105094
  if (crb(c,2)) { goto L_801050A0; } // 80105098
  goto L_8010528C; // 8010509C
L_801050A0:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801050A0
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801050A4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801050A8
  {uint32_t ea=c->r[28]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 801050AC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801050B0
  {uint32_t ea=c->r[28]+0x00000014u; c->f[30]=c->ps1[30]=RF32(ea);} // 801050B4
  {uint32_t ea=c->r[31]+0x00000220u; WF64(ea,c->f[1]);} // 801050B8
  {uint32_t ea=c->r[31]+0x00000228u; WF64(ea,c->f[0]);} // 801050BC
  c->r[25]=R32(c->r[31]+0x00000224u); // 801050C0
  c->r[24]=R32(c->r[31]+0x0000022Cu); // 801050C4
  c->lr=0x801050CCu; f_8003DA30(c); // 801050C8
  c->lr=0x801050D0u; f_8003ED58(c); // 801050CC
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801050D0
  W32(c->r[31]+0x00000040u,c->r[3]); // 801050D4
  goto L_80105264; // 801050D8
L_801050DC:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 801050DC
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801050E0
  c->r[12]=R32(c->r[3]+0x00000010u); // 801050E4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801050E8
  c->ctr=c->r[12]; // 801050EC
  if (true) { c->lr=0x801050F4u; dispatch(c,c->ctr); } // 801050F0
  W32(c->r[31]+0x00000068u,c->r[4]); // 801050F4
  c->r[4]=0u+0xC0000000u; // 801050F8
  W32(c->r[31]+0x00000064u,c->r[3]); // 801050FC
  c->r[3]=c->r[31]+0x00000064u; // 80105100
  c->lr=0x80105108u; f_8003EDD0(c); // 80105104
  cmps(c,0,(int32_t)c->r[3],0); // 80105108
  if (crb(c,2)) { goto L_80105258; } // 8010510C
  c->r[3]=R32(c->r[31]+0x00000040u); // 80105110
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 80105114
  c->r[12]=R32(c->r[3]+0x00000010u); // 80105118
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010511C
  c->ctr=c->r[12]; // 80105120
  if (true) { c->lr=0x80105128u; dispatch(c,c->ctr); } // 80105124
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80105128
  W32(c->r[31]+0x00000060u,c->r[4]); // 8010512C
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 80105130
  if (crb(c,2)) { goto L_80105258; } // 80105134
  c->r[30]=R32(c->r[31]+0x00000040u); // 80105138
  c->r[4]=0u+0x803E0000u; // 8010513C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80105140
  c->r[3]=R32(c->r[30]+0x000004A0u); // 80105144
  c->lr=0x8010514Cu; f_80293554(c); // 80105148
  cmps(c,0,(int32_t)c->r[3],0); // 8010514C
  if (!crb(c,2)) { goto L_80105258; } // 80105150
  c->r[0]=R32(c->r[30]+0x000004B8u); // 80105154
  cmpu(c,0,c->r[25],c->r[0]); // 80105158
  if (crb(c,1)) { goto L_80105258; } // 8010515C
  cmpu(c,0,c->r[0],c->r[24]); // 80105160
  if (crb(c,1)) { goto L_80105258; } // 80105164
  c->r[3]=R32(c->r[30]+0x0000096Cu); // 80105168
  c->r[26]=R32(c->r[3]+0x00000000u); // 8010516C
  c->r[3]=c->r[26]|c->r[26]; // 80105170
  c->lr=0x80105178u; f_80075320(c); // 80105174
  cmps(c,0,(int32_t)c->r[3],0); // 80105178
  if (crb(c,2)) { goto L_8010519C; } // 8010517C
  c->r[3]=c->r[26]|c->r[26]; // 80105180
  c->lr=0x80105188u; f_80075320(c); // 80105184
  c->r[12]=R32(c->r[3]+0x00000000u); // 80105188
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010518C
  c->ctr=c->r[12]; // 80105190
  if (true) { c->lr=0x80105198u; dispatch(c,c->ctr); } // 80105194
  goto L_801051A0; // 80105198
L_8010519C:;
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010519C
L_801051A0:;
  fcmp(c,0,c->f[31],c->f[1]); // 801051A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801051A4
  if (!crb(c,2)) { goto L_80105258; } // 801051A8
  fcmp(c,0,c->f[1],c->f[30]); // 801051AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801051B0
  if (!crb(c,2)) { goto L_80105258; } // 801051B4
  c->r[3]=c->r[31]+0x00000108u; // 801051B8
  c->r[4]=0u+0x00000000u; // 801051BC
  c->lr=0x801051C4u; f_800770B8(c); // 801051C0
  c->r[4]=R32(c->r[30]+0xFFFFFFF8u); // 801051C4
  c->r[3]=c->r[31]+0x00000054u; // 801051C8
  c->r[0]=R32(c->r[30]+0xFFFFFFFCu); // 801051CC
  W32(c->r[31]+0x00000054u,c->r[4]); // 801051D0
  W32(c->r[31]+0x00000058u,c->r[0]); // 801051D4
  c->lr=0x801051DCu; f_8003F1D4(c); // 801051D8
  cmps(c,0,(int32_t)c->r[3],0); // 801051DC
  if (crb(c,2)) { goto L_8010524C; } // 801051E0
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 801051E4
  c->lr=0x801051ECu; f_802A6EE4(c); // 801051E8
  cmps(c,0,(int32_t)c->r[3],0); // 801051EC
  c->r[30]=c->r[3]|c->r[3]; // 801051F0
  if (crb(c,2)) { goto L_8010524C; } // 801051F4
  if (crb(c,2)) { goto L_80105208; } // 801051F8
  W32(c->r[31]+0x000000ECu,c->r[1]); // 801051FC
  c->r[4]=0u+0x00000000u; // 80105200
  c->lr=0x80105208u; f_800770B8(c); // 80105204
L_80105208:;
  c->r[3]=c->r[30]|c->r[30]; // 80105208
  c->r[4]=c->r[31]+0x00000108u; // 8010520C
  c->lr=0x80105214u; f_80064DD8(c); // 80105210
  c->r[0]=R32(c->r[31]+0x00000118u); // 80105214
  c->r[26]=addc(c,c->r[30],0x00000014u,0); cr0(c,c->r[26]); // 80105218
  W32(c->r[30]+0x00000010u,c->r[0]); // 8010521C
  if (crb(c,2)) { goto L_80105234; } // 80105220
  W32(c->r[31]+0x00000104u,c->r[1]); // 80105224
  c->r[3]=c->r[26]|c->r[26]; // 80105228
  c->r[4]=c->r[30]|c->r[30]; // 8010522C
  c->lr=0x80105234u; f_80064CE8(c); // 80105230
L_80105234:;
  c->r[3]=c->r[31]+0x00000054u; // 80105234
  c->lr=0x8010523Cu; f_80064CFC(c); // 80105238
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010523C
  c->r[4]=c->r[26]|c->r[26]; // 80105240
  c->r[3]=c->r[3]+0x00000030u; // 80105244
  c->lr=0x8010524Cu; f_8003FD14(c); // 80105248
L_8010524C:;
  c->r[0]=0u+0x00000000u; // 8010524C
  W8(c->r[28]+0x00000000u,c->r[0]); // 80105250
  goto L_8010528C; // 80105254
L_80105258:;
  c->r[3]=c->r[31]+0x00000040u; // 80105258
  c->r[4]=0u+0x00000000u; // 8010525C
  c->lr=0x80105264u; f_8003ED68(c); // 80105260
L_80105264:;
  c->lr=0x80105268u; f_8003DA30(c); // 80105264
  c->lr=0x8010526Cu; f_8003ECFC(c); // 80105268
  c->r[0]=R32(c->r[31]+0x00000040u); // 8010526C
  c->r[4]=c->r[31]+0x00000014u; // 80105270
  W32(c->r[31]+0x00000014u,c->r[3]); // 80105274
  c->r[3]=c->r[31]+0x00000018u; // 80105278
  W32(c->r[31]+0x00000018u,c->r[0]); // 8010527C
  c->lr=0x80105284u; f_8003ED7C(c); // 80105280
  cmps(c,0,(int32_t)c->r[3],0); // 80105284
  if (!crb(c,2)) { IRQCHK(c); goto L_801050DC; } // 80105288
L_8010528C:;
  c->r[27]=c->r[27]+0x00000001u; // 8010528C
L_80105290:;
  cmps(c,0,(int32_t)c->r[27],8); // 80105290
  if (crb(c,0)) { IRQCHK(c); goto L_80105078; } // 80105294
  c->r[0]=R8(c->r[13]+0xFFFF95D4u); // 80105298
  cmps(c,0,(int32_t)c->r[0],0); // 8010529C
  if (crb(c,2)) { goto L_80105308; } // 801052A0
  c->lr=0x801052A8u; f_80066EFC(c); // 801052A4
  c->r[4]=0u+0x00000003u; // 801052A8
  c->r[5]=0u+0x00000000u; // 801052AC
  c->lr=0x801052B4u; f_80042D5C(c); // 801052B0
  c->lr=0x801052B8u; f_80066EFC(c); // 801052B4
  c->r[6]=0u+0x80440000u; // 801052B8
  c->r[4]=0u+0x43300000u; // 801052BC
  c->r[6]=c->r[6]+0xFFFFA720u; // 801052C0
  W32(c->r[31]+0x00000228u,c->r[4]); // 801052C4
  c->r[5]=R16(c->r[6]+0x0000000Cu); // 801052C8
  c->r[3]=c->r[3]+0x0000028Cu; // 801052CC
  c->r[0]=R16(c->r[6]+0x00000010u); // 801052D0
  W32(c->r[31]+0x0000022Cu,c->r[5]); // 801052D4
  {uint32_t ea=c->r[2]+0xFFFF9318u; c->f[2]=RF64(ea);} // 801052D8
  {uint32_t ea=c->r[31]+0x00000228u; c->f[0]=RF64(ea);} // 801052DC
  W32(c->r[31]+0x00000224u,c->r[0]); // 801052E0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801052E4
  {uint32_t ea=c->r[2]+0xFFFF9308u; c->f[3]=c->ps1[3]=RF32(ea);} // 801052E8
  W32(c->r[31]+0x00000220u,c->r[4]); // 801052EC
  {uint32_t ea=c->r[2]+0xFFFF9314u; c->f[4]=c->ps1[4]=RF32(ea);} // 801052F0
  {uint32_t ea=c->r[31]+0x00000220u; c->f[0]=RF64(ea);} // 801052F4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801052F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801052FC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[0]); // 80105300
  c->lr=0x80105308u; f_8007C5F8(c); // 80105304
L_80105308:;
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105308
  {uint32_t ea=c->r[13]+0xFFFF95D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010530C
  fcmp(c,0,c->f[1],c->f[0]); // 80105310
  if (crb(c,2)) { goto L_801053C8; } // 80105314
  c->lr=0x8010531Cu; f_80061A4C(c); // 80105318
  {uint32_t ea=c->r[13]+0xFFFF95D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010531C
  c->r[3]=c->r[3]+0x000000ECu; // 80105320
  c->lr=0x80105328u; f_8012D1D0(c); // 80105324
  c->lr=0x8010532Cu; f_8003DA30(c); // 80105328
  c->lr=0x80105330u; f_8003ED58(c); // 8010532C
  W32(c->r[31]+0x00000010u,c->r[3]); // 80105330
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 80105334
  goto L_801053A0; // 80105338
L_8010533C:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8010533C
  c->r[3]=c->r[31]+0x00000038u; // 80105340
  c->r[4]=0u+0x00000000u; // 80105344
  W32(c->r[31]+0x00000038u,c->r[0]); // 80105348
  c->lr=0x80105350u; f_8003ED68(c); // 8010534C
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80105350
  c->r[26]=c->r[3]+0xFFFFFFF8u; // 80105354
  c->r[12]=R32(c->r[26]+0x00000010u); // 80105358
  c->r[3]=c->r[26]|c->r[26]; // 8010535C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80105360
  c->ctr=c->r[12]; // 80105364
  if (true) { c->lr=0x8010536Cu; dispatch(c,c->ctr); } // 80105368
  W32(c->r[31]+0x00000050u,c->r[4]); // 8010536C
  c->r[4]=0u+0xC8000000u; // 80105370
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 80105374
  c->r[3]=c->r[31]+0x0000004Cu; // 80105378
  c->lr=0x80105380u; f_8003EDD0(c); // 8010537C
  cmps(c,0,(int32_t)c->r[3],0); // 80105380
  if (crb(c,2)) { goto L_80105398; } // 80105384
  c->r[3]=R32(c->r[26]+0x00000974u); // 80105388
  {uint32_t ea=c->r[13]+0xFFFF95D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010538C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80105390
  c->lr=0x80105398u; f_80165B9C(c); // 80105394
L_80105398:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 80105398
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8010539C
L_801053A0:;
  c->lr=0x801053A4u; f_8003DA30(c); // 801053A0
  c->lr=0x801053A8u; f_8003ECFC(c); // 801053A4
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 801053A8
  c->r[4]=c->r[31]+0x00000008u; // 801053AC
  W32(c->r[31]+0x00000008u,c->r[3]); // 801053B0
  c->r[3]=c->r[31]+0x0000000Cu; // 801053B4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801053B8
  c->lr=0x801053C0u; f_8003ED7C(c); // 801053BC
  cmps(c,0,(int32_t)c->r[3],0); // 801053C0
  if (!crb(c,2)) { IRQCHK(c); goto L_8010533C; } // 801053C4
L_801053C8:;
  c->r[10]=c->r[31]|c->r[31]; // 801053C8
  {uint32_t ea=c->r[10]+0x00000268u; psq_load(c,31,ea,0,0);} // 801053CC
  {uint32_t ea=c->r[31]+0x00000260u; c->f[31]=RF64(ea);} // 801053D0
  {uint32_t ea=c->r[10]+0x00000258u; psq_load(c,30,ea,0,0);} // 801053D4
  c->r[11]=c->r[10]+0x00000250u; // 801053D8
  {uint32_t ea=c->r[31]+0x00000250u; c->f[30]=RF64(ea);} // 801053DC
  c->lr=0x801053E4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801053E0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801053E4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801053E8
  c->r[1]=c->r[10]|c->r[10]; // 801053EC
  c->lr=c->r[0]; // 801053F0
  return; // 801053F4
}

// fn_801053F8
void f_801053F8(Ctx* __restrict c) {
  trace_call(0x801053F8u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 801053F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 801053FC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80105400
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 80105404
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,1,0);} // 80105408
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,0,ea,1,0);} // 8010540C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80105410
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 80105414
  return; // 80105418
}

// fn_8010541C
void f_8010541C(Ctx* __restrict c) {
  trace_call(0x8010541Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010541C
  c->r[0]=c->lr; // 80105420
  W32(c->r[1]+0x00000034u,c->r[0]); // 80105424
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80105428
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8010542C
  c->r[0]=0u+0x00000000u; // 80105430
  c->f[31]=c->f[1]; // 80105434
  c->r[5]=0u+0x00000000u; // 80105438
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010543C
  c->r[31]=c->r[4]|c->r[4]; // 80105440
  c->r[4]=c->r[1]+0x00000010u; // 80105444
  W32(c->r[1]+0x00000018u,c->r[30]); // 80105448
  c->r[30]=c->r[3]|c->r[3]; // 8010544C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80105450
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80105454
  W32(c->r[1]+0x00000010u,c->r[0]); // 80105458
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010545C
  c->lr=0x80105464u; f_80068BE0(c); // 80105460
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105464
  c->r[4]=0u+0x803F0000u; // 80105468
  c->r[4]=c->r[4]+0x00007644u; // 8010546C
  c->r[3]=c->r[30]+0x00000010u; // 80105470
  c->f[2]=c->f[1]; // 80105474
  W32(c->r[30]+0x00000000u,c->r[4]); // 80105478
  c->f[3]=c->f[1]; // 8010547C
  c->lr=0x80105484u; f_80065358(c); // 80105480
  cmps(c,0,(int32_t)c->r[31],0); // 80105484
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[31]);} // 80105488
  if (!crb(c,0)) { goto L_80105494; } // 8010548C
  c->r[31]=0u+0x00000000u; // 80105490
L_80105494:;
  W32(c->r[30]+0x00000020u,c->r[31]); // 80105494
  c->r[3]=c->r[30]|c->r[30]; // 80105498
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8010549C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801054A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801054A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801054A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801054AC
  c->lr=c->r[0]; // 801054B0
  c->r[1]=c->r[1]+0x00000030u; // 801054B4
  return; // 801054B8
}

// fn_801054BC
void f_801054BC(Ctx* __restrict c) {
  trace_call(0x801054BCu);
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801054BC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 801054C0
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 801054C4
  return; // 801054C8
}

// fn_801054CC
void f_801054CC(Ctx* __restrict c) {
  trace_call(0x801054CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801054CC
  c->r[0]=c->lr; // 801054D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801054D4
  c->r[0]=c->r[3]|c->r[3]; // 801054D8
  c->r[3]=0u+0x80490000u; // 801054DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801054E0
  c->r[31]=c->r[4]|c->r[4]; // 801054E4
  c->r[4]=c->r[0]|c->r[0]; // 801054E8
  c->r[3]=c->r[3]+0x00004758u; // 801054EC
  c->lr=0x801054F4u; f_802933D8(c); // 801054F0
  W32(c->r[13]+0xFFFF95C8u,c->r[31]); // 801054F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801054F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801054FC
  c->lr=c->r[0]; // 80105500
  c->r[1]=c->r[1]+0x00000010u; // 80105504
  return; // 80105508
}

// fn_8010550C
void f_8010550C(Ctx* __restrict c) {
  trace_call(0x8010550Cu);
  c->r[3]=R8(c->r[13]+0xFFFF95DDu); // 8010550C
  return; // 80105510
}

// fn_80105514
void f_80105514(Ctx* __restrict c) {
  trace_call(0x80105514u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105514
  c->r[0]=c->lr; // 80105518
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010551C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80105520
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80105524
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80105528
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 8010552C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105530
  c->r[31]=c->r[3]|c->r[3]; // 80105534
  c->r[0]=R8(c->r[13]+0xFFFF9579u); // 80105538
  cmps(c,0,(int32_t)c->r[0],0); // 8010553C
  if (crb(c,2)) { goto L_8010554C; } // 80105540
  c->r[3]=0u+0x00000000u; // 80105544
  goto L_8010560C; // 80105548
L_8010554C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8010554C
  cmps(c,0,(int32_t)c->r[0],740); // 80105550
  if (crb(c,2)) { goto L_80105590; } // 80105554
  if (!crb(c,0)) { goto L_80105608; } // 80105558
  cmps(c,0,(int32_t)c->r[0],0); // 8010555C
  if (crb(c,2)) { goto L_80105568; } // 80105560
  goto L_80105608; // 80105564
L_80105568:;
  c->r[4]=0u+0x00000000u; // 80105568
  c->r[3]=c->r[3]+0x00000008u; // 8010556C
  c->lr=0x80105574u; f_8009D3D0(c); // 80105570
  c->lr=0x80105578u; f_8009D0A0(c); // 80105574
  c->f[31]=c->f[1]; // 80105578
  c->r[3]=c->r[31]+0x000003D0u; // 8010557C
  c->r[4]=0u+0x00000000u; // 80105580
  c->lr=0x80105588u; f_8009D3D0(c); // 80105584
  c->f[1]=c->f[31]; // 80105588
  c->lr=0x80105590u; f_8009D1C8(c); // 8010558C
L_80105590:;
  c->r[3]=c->r[31]+0x000003D0u; // 80105590
  c->r[4]=0u+0x00000000u; // 80105594
  c->lr=0x8010559Cu; f_8009D3D0(c); // 80105598
  c->lr=0x801055A0u; f_8009D0A0(c); // 8010559C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 801055A0
  fcmp(c,0,c->f[1],c->f[0]); // 801055A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801055A8
  if (crb(c,2)) { goto L_80105600; } // 801055AC
  c->r[5]=0u+0x804D0000u; // 801055B0
  c->r[3]=c->r[31]+0x000003D0u; // 801055B4
  c->r[5]=c->r[5]+0x00003318u; // 801055B8
  c->r[4]=0u+0x00000000u; // 801055BC
  {uint32_t ea=c->r[5]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 801055C0
  c->lr=0x801055C8u; f_8009D3D0(c); // 801055C4
  c->lr=0x801055CCu; f_8009D0A0(c); // 801055C8
  c->f[31]=c->f[1]; // 801055CC
  c->r[3]=0u+0x80470000u; // 801055D0
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801055D4
  c->lr=0x801055DCu; f_80066BF4(c); // 801055D8
  c->f[31]=c->ps1[31]=S(-std::fma(c->f[30],c->f[1],-c->f[31])); // 801055DC
  c->r[3]=c->r[31]+0x000003D0u; // 801055E0
  c->r[4]=0u+0x00000000u; // 801055E4
  c->lr=0x801055ECu; f_8009D3D0(c); // 801055E8
  c->f[1]=c->f[31]; // 801055EC
  c->lr=0x801055F4u; f_8009D1C8(c); // 801055F0
  c->r[0]=0u+0x000002E4u; // 801055F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801055F8
  goto L_80105608; // 801055FC
L_80105600:;
  c->r[3]=0u+0x00000000u; // 80105600
  goto L_8010560C; // 80105604
L_80105608:;
  c->r[3]=0u+0x00000001u; // 80105608
L_8010560C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8010560C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80105610
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80105614
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80105618
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010561C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105620
  c->lr=c->r[0]; // 80105624
  c->r[1]=c->r[1]+0x00000030u; // 80105628
  return; // 8010562C
}

// fn_80105630
void f_80105630(Ctx* __restrict c) {
  trace_call(0x80105630u);
  c->r[0]=R8(c->r[13]+0xFFFF9579u); // 80105630
  cmps(c,0,(int32_t)c->r[0],0); // 80105634
  if (crb(c,2)) { goto L_80105644; } // 80105638
  c->r[3]=0u+0x00000000u; // 8010563C
  return; // 80105640
L_80105644:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80105644
  cmps(c,0,(int32_t)c->r[0],761); // 80105648
  if (crb(c,2)) { goto L_8010566C; } // 8010564C
  if (!crb(c,0)) { goto L_80105674; } // 80105650
  cmps(c,0,(int32_t)c->r[0],0); // 80105654
  if (crb(c,2)) { goto L_80105660; } // 80105658
  goto L_80105674; // 8010565C
L_80105660:;
  c->r[0]=0u+0x000002F9u; // 80105660
  W32(c->r[3]+0x00000004u,c->r[0]); // 80105664
  goto L_80105674; // 80105668
L_8010566C:;
  c->r[3]=0u+0x00000000u; // 8010566C
  return; // 80105670
L_80105674:;
  c->r[3]=0u+0x00000001u; // 80105674
  return; // 80105678
}

// fn_8010567C
void f_8010567C(Ctx* __restrict c) {
  trace_call(0x8010567Cu);
  c->r[3]=0u+0x00000000u; // 8010567C
  return; // 80105680
}

// fn_80105684
void f_80105684(Ctx* __restrict c) {
  trace_call(0x80105684u);
  return; // 80105684
}

// fn_80105688
void f_80105688(Ctx* __restrict c) {
  trace_call(0x80105688u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105688
  c->r[0]=c->lr; // 8010568C
  c->r[4]=0u+0x00000000u; // 80105690
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105694
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80105698
  c->r[30]=c->r[3]|c->r[3]; // 8010569C
  c->r[3]=c->r[3]+0x00000008u; // 801056A0
  c->lr=0x801056A8u; f_8009D3D0(c); // 801056A4
  c->lr=0x801056ACu; f_8009D188(c); // 801056A8
  c->r[31]=c->r[3]|c->r[3]; // 801056AC
  c->r[3]=c->r[30]+0x00000008u; // 801056B0
  c->r[4]=0u+0x00000001u; // 801056B4
  c->lr=0x801056BCu; f_8009D3D0(c); // 801056B8
  c->lr=0x801056C0u; f_8009D0A0(c); // 801056BC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801056C0
  c->r[4]=c->r[31]|c->r[31]; // 801056C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801056C8
  c->r[12]=R32(c->r[12]+0x00000064u); // 801056CC
  c->ctr=c->r[12]; // 801056D0
  if (true) { c->lr=0x801056D8u; dispatch(c,c->ctr); } // 801056D4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801056D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801056DC
  c->lr=c->r[0]; // 801056E0
  c->r[1]=c->r[1]+0x00000010u; // 801056E4
  return; // 801056E8
}

// fn_801056EC
void f_801056EC(Ctx* __restrict c) {
  trace_call(0x801056ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801056EC
  c->r[0]=c->lr; // 801056F0
  c->r[4]=0u+0x00000000u; // 801056F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801056F8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801056FC
  W32(c->r[1]+0x00000014u,c->r[31]); // 80105700
  c->r[31]=c->r[3]|c->r[3]; // 80105704
  c->r[3]=c->r[3]+0x00000008u; // 80105708
  c->lr=0x80105710u; f_8009D3D0(c); // 8010570C
  c->lr=0x80105714u; f_8009D188(c); // 80105710
  c->r[0]=0u+0x00000001u; // 80105714
  c->r[4]=c->r[3]|c->r[3]; // 80105718
  W32(c->r[31]+0x00000798u,c->r[0]); // 8010571C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80105720
  c->r[12]=R32(c->r[3]+0x00000000u); // 80105724
  c->r[12]=R32(c->r[12]+0x00000068u); // 80105728
  c->ctr=c->r[12]; // 8010572C
  if (true) { c->lr=0x80105734u; dispatch(c,c->ctr); } // 80105730
  c->f[31]=c->f[1]; // 80105734
  c->r[3]=c->r[31]+0x00000798u; // 80105738
  c->r[4]=0u+0x00000000u; // 8010573C
  c->lr=0x80105744u; f_8009D3D0(c); // 80105740
  c->f[1]=c->f[31]; // 80105744
  c->lr=0x8010574Cu; f_8009D1C8(c); // 80105748
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010574C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80105750
  c->r[31]=R32(c->r[1]+0x00000014u); // 80105754
  c->lr=c->r[0]; // 80105758
  c->r[1]=c->r[1]+0x00000020u; // 8010575C
  return; // 80105760
}

// fn_80105764
void f_80105764(Ctx* __restrict c) {
  trace_call(0x80105764u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105764
  c->r[0]=c->lr; // 80105768
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010576C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80105770
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80105774
  c->r[4]=0u+0x00000000u; // 80105778
  c->r[3]=c->r[3]+0x00000008u; // 8010577C
  c->lr=0x80105784u; f_8009D3D0(c); // 80105780
  c->lr=0x80105788u; f_8009D0A0(c); // 80105784
  c->f[31]=c->f[1]; // 80105788
  c->lr=0x80105790u; f_80066EFC(c); // 8010578C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105790
  c->f[4]=c->f[31]; // 80105794
  c->r[4]=0u+0x00000001u; // 80105798
  c->r[3]=c->r[3]+0x00000468u; // 8010579C
  c->f[2]=c->f[1]; // 801057A0
  c->f[3]=c->f[1]; // 801057A4
  c->lr=0x801057ACu; f_800411B4(c); // 801057A8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801057AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801057B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801057B4
  c->lr=c->r[0]; // 801057B8
  c->r[1]=c->r[1]+0x00000020u; // 801057BC
  return; // 801057C0
}

// fn_801057C4
void f_801057C4(Ctx* __restrict c) {
  trace_call(0x801057C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801057C4
  c->r[0]=c->lr; // 801057C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801057CC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801057D0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801057D4
  c->r[4]=0u+0x00000000u; // 801057D8
  c->r[3]=c->r[3]+0x00000008u; // 801057DC
  c->lr=0x801057E4u; f_8009D3D0(c); // 801057E0
  c->lr=0x801057E8u; f_8009D0A0(c); // 801057E4
  c->f[31]=c->f[1]; // 801057E8
  c->lr=0x801057F0u; f_80066EFC(c); // 801057EC
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 801057F0
  c->f[4]=c->f[31]; // 801057F4
  c->r[4]=0u+0x00000001u; // 801057F8
  c->r[3]=c->r[3]+0x00000088u; // 801057FC
  c->f[2]=c->f[1]; // 80105800
  c->f[3]=c->f[1]; // 80105804
  c->lr=0x8010580Cu; f_800411B4(c); // 80105808
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8010580C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105810
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80105814
  c->lr=c->r[0]; // 80105818
  c->r[1]=c->r[1]+0x00000020u; // 8010581C
  return; // 80105820
}

// fn_80105824
void f_80105824(Ctx* __restrict c) {
  trace_call(0x80105824u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105824
  c->r[0]=c->lr; // 80105828
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010582C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80105830
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80105834
  c->r[4]=0u+0x00000000u; // 80105838
  c->r[3]=c->r[3]+0x00000008u; // 8010583C
  c->lr=0x80105844u; f_8009D3D0(c); // 80105840
  c->lr=0x80105848u; f_8009D0A0(c); // 80105844
  c->f[31]=c->f[1]; // 80105848
  c->lr=0x80105850u; f_80066EFC(c); // 8010584C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80105850
  c->f[4]=c->f[31]; // 80105854
  c->r[4]=0u+0x00000000u; // 80105858
  c->r[3]=c->r[3]+0x00000088u; // 8010585C
  c->f[2]=c->f[1]; // 80105860
  c->f[3]=c->f[1]; // 80105864
  c->lr=0x8010586Cu; f_800411B4(c); // 80105868
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8010586C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105870
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80105874
  c->lr=c->r[0]; // 80105878
  c->r[1]=c->r[1]+0x00000020u; // 8010587C
  return; // 80105880
}

// fn_80105884
void f_80105884(Ctx* __restrict c) {
  trace_call(0x80105884u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105884
  c->r[0]=c->lr; // 80105888
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010588C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80105890
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80105894
  c->r[4]=0u+0x00000000u; // 80105898
  c->r[3]=c->r[3]+0x00000008u; // 8010589C
  c->lr=0x801058A4u; f_8009D3D0(c); // 801058A0
  c->lr=0x801058A8u; f_8009D0A0(c); // 801058A4
  c->f[31]=c->f[1]; // 801058A8
  c->lr=0x801058B0u; f_80066EFC(c); // 801058AC
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801058B0
  c->f[4]=c->f[31]; // 801058B4
  c->r[4]=0u+0x00000001u; // 801058B8
  c->r[3]=c->r[3]+0x00000088u; // 801058BC
  c->f[2]=c->f[1]; // 801058C0
  c->f[3]=c->f[1]; // 801058C4
  c->lr=0x801058CCu; f_800411B4(c); // 801058C8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801058CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801058D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801058D4
  c->lr=c->r[0]; // 801058D8
  c->r[1]=c->r[1]+0x00000020u; // 801058DC
  return; // 801058E0
}

// fn_801058E4
void f_801058E4(Ctx* __restrict c) {
  trace_call(0x801058E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801058E4
  c->r[0]=c->lr; // 801058E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801058EC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801058F0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801058F4
  c->r[4]=0u+0x00000000u; // 801058F8
  c->r[3]=c->r[3]+0x00000008u; // 801058FC
  c->lr=0x80105904u; f_8009D3D0(c); // 80105900
  c->lr=0x80105908u; f_8009D0A0(c); // 80105904
  c->f[31]=c->f[1]; // 80105908
  c->lr=0x80105910u; f_80066EFC(c); // 8010590C
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105910
  c->f[4]=c->f[31]; // 80105914
  c->r[4]=0u+0x00000000u; // 80105918
  c->r[3]=c->r[3]+0x00000088u; // 8010591C
  c->f[2]=c->f[1]; // 80105920
  c->f[3]=c->f[1]; // 80105924
  c->lr=0x8010592Cu; f_800411B4(c); // 80105928
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8010592C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105930
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80105934
  c->lr=c->r[0]; // 80105938
  c->r[1]=c->r[1]+0x00000020u; // 8010593C
  return; // 80105940
}

// fn_80105944
void f_80105944(Ctx* __restrict c) {
  trace_call(0x80105944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105944
  c->r[0]=c->lr; // 80105948
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010594C
  c->lr=0x80105954u; f_80066EFC(c); // 80105950
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105954
  c->r[3]=R8(c->r[3]+0x000000A8u); // 80105958
  c->lr=c->r[0]; // 8010595C
  c->r[1]=c->r[1]+0x00000010u; // 80105960
  return; // 80105964
}

// fn_80105968
void f_80105968(Ctx* __restrict c) {
  trace_call(0x80105968u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105968
  c->r[0]=c->lr; // 8010596C
  c->r[4]=0u+0x00000000u; // 80105970
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105974
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80105978
  c->r[31]=c->r[3]|c->r[3]; // 8010597C
  c->r[3]=c->r[3]+0x00000008u; // 80105980
  c->lr=0x80105988u; f_8009D3D0(c); // 80105984
  c->lr=0x8010598Cu; f_8009D188(c); // 80105988
  c->r[5]=0u+0x80490000u; // 8010598C
  c->r[0]=c->r[3]+0x00000001u; // 80105990
  c->r[5]=c->r[5]+0x000047E0u; // 80105994
  c->r[6]=0u+0x00000000u; // 80105998
  c->r[4]=0u+0x00000000u; // 8010599C
  c->ctr=c->r[0]; // 801059A0
  cmps(c,0,(int32_t)c->r[3],0); // 801059A4
  if (crb(c,0)) { goto L_801059BC; } // 801059A8
L_801059AC:;
  W32(c->r[5]+c->r[4],c->r[6]); // 801059AC
  c->r[6]=c->r[6]+0x00000001u; // 801059B0
  c->r[4]=c->r[4]+0x00000004u; // 801059B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801059AC; } // 801059B8
L_801059BC:;
  c->r[30]=0u+0x80490000u; // 801059BC
  c->r[29]=c->r[3]+0x00000001u; // 801059C0
  c->r[30]=c->r[30]+0x000047E0u; // 801059C4
  c->r[28]=0u+0x00000000u; // 801059C8
L_801059CC:;
  c->lr=0x801059D0u; f_80291D94(c); // 801059CC
  c->r[3]=sraw(c,c->r[3],4); // 801059D0
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 801059D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 801059D8
  c->r[27]=c->r[3]-c->r[0]; // 801059DC
  c->lr=0x801059E4u; f_80291D94(c); // 801059E0
  c->r[3]=sraw(c,c->r[3],4); // 801059E4
  c->r[4]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801059E8
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[29]); // 801059EC
  c->r[28]=c->r[28]+0x00000001u; // 801059F0
  c->r[5]=R32(c->r[30]+c->r[4]); // 801059F4
  cmps(c,0,(int32_t)c->r[28],100); // 801059F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[29]); // 801059FC
  c->r[0]=c->r[3]-c->r[0]; // 80105A00
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80105A04
  c->r[0]=R32(c->r[30]+c->r[3]); // 80105A08
  W32(c->r[30]+c->r[4],c->r[0]); // 80105A0C
  W32(c->r[30]+c->r[3],c->r[5]); // 80105A10
  if (crb(c,0)) { IRQCHK(c); goto L_801059CC; } // 80105A14
  c->r[0]=0u+0x00000001u; // 80105A18
  c->r[3]=c->r[31]+0x00000798u; // 80105A1C
  W32(c->r[31]+0x00000798u,c->r[0]); // 80105A20
  c->r[4]=0u+0x00000000u; // 80105A24
  c->lr=0x80105A2Cu; f_8009D3D0(c); // 80105A28
  c->r[4]=0u+0x80490000u; // 80105A2C
  c->r[4]=R32(c->r[4]+0x000047E0u); // 80105A30
  c->lr=0x80105A38u; f_8009D220(c); // 80105A34
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80105A38
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105A3C
  c->lr=c->r[0]; // 80105A40
  c->r[1]=c->r[1]+0x00000020u; // 80105A44
  return; // 80105A48
}

// fn_80105A4C
void f_80105A4C(Ctx* __restrict c) {
  trace_call(0x80105A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105A4C
  c->r[0]=c->lr; // 80105A50
  c->r[4]=0u+0x00000000u; // 80105A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105A58
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80105A5C
  c->r[30]=c->r[3]|c->r[3]; // 80105A60
  c->r[3]=c->r[3]+0x00000008u; // 80105A64
  c->lr=0x80105A6Cu; f_8009D3D0(c); // 80105A68
  c->lr=0x80105A70u; f_8009D188(c); // 80105A6C
  c->r[0]=0u+0x00000001u; // 80105A70
  c->r[31]=c->r[3]|c->r[3]; // 80105A74
  W32(c->r[30]+0x00000798u,c->r[0]); // 80105A78
  c->r[3]=c->r[30]+0x00000798u; // 80105A7C
  c->r[4]=0u+0x00000000u; // 80105A80
  c->lr=0x80105A88u; f_8009D3D0(c); // 80105A84
  c->r[4]=0u+0x80490000u; // 80105A88
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80105A8C
  c->r[4]=c->r[4]+0x000047E0u; // 80105A90
  c->r[4]=R32(c->r[4]+c->r[0]); // 80105A94
  c->lr=0x80105A9Cu; f_8009D220(c); // 80105A98
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80105A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105AA0
  c->lr=c->r[0]; // 80105AA4
  c->r[1]=c->r[1]+0x00000010u; // 80105AA8
  return; // 80105AAC
}

// fn_80105AB0
void f_80105AB0(Ctx* __restrict c) {
  trace_call(0x80105AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105AB0
  c->r[0]=c->lr; // 80105AB4
  c->r[4]=0u+0x00000000u; // 80105AB8
  c->r[3]=c->r[3]+0x00000008u; // 80105ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105AC0
  c->lr=0x80105AC8u; f_8009D3D0(c); // 80105AC4
  c->lr=0x80105ACCu; f_8009D188(c); // 80105AC8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80105ACC
  c->r[4]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80105AD0
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80105AD4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80105AD8
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80105ADC
  c->ctr=c->r[12]; // 80105AE0
  if (true) { c->lr=0x80105AE8u; dispatch(c,c->ctr); } // 80105AE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105AE8
  c->lr=c->r[0]; // 80105AEC
  c->r[1]=c->r[1]+0x00000010u; // 80105AF0
  return; // 80105AF4
}

// fn_80105AF8
void f_80105AF8(Ctx* __restrict c) {
  trace_call(0x80105AF8u);
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80105AF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80105AFC
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80105B00
  c->ctr=c->r[12]; // 80105B04
  if (true) { dispatch(c,c->ctr); return; } // 80105B08
}

// fn_80105B0C
void f_80105B0C(Ctx* __restrict c) {
  trace_call(0x80105B0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105B0C
  c->r[0]=c->lr; // 80105B10
  c->r[4]=0u+0x00000000u; // 80105B14
  c->r[3]=c->r[3]+0x00000008u; // 80105B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105B1C
  c->lr=0x80105B24u; f_8009D3D0(c); // 80105B20
  c->lr=0x80105B28u; f_8009D0F4(c); // 80105B24
  c->r[4]=0u+0x00000002u; // 80105B28
  c->lr=0x80105B30u; f_80048D34(c); // 80105B2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105B30
  c->lr=c->r[0]; // 80105B34
  c->r[1]=c->r[1]+0x00000010u; // 80105B38
  return; // 80105B3C
}

// fn_80105B40
void f_80105B40(Ctx* __restrict c) {
  trace_call(0x80105B40u);
  c->r[3]=0u+0x0000001Eu; // 80105B40
  f_80048E1C(c); return; // 80105B44
}

// fn_80105B48
void f_80105B48(Ctx* __restrict c) {
  trace_call(0x80105B48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105B48
  c->r[0]=c->lr; // 80105B4C
  c->r[4]=0u+0x00000000u; // 80105B50
  c->r[3]=c->r[3]+0x00000008u; // 80105B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105B58
  c->lr=0x80105B60u; f_8009D3D0(c); // 80105B5C
  c->lr=0x80105B64u; f_8009D0A0(c); // 80105B60
  {uint32_t ea=c->r[2]+0xFFFF9314u; c->f[0]=c->ps1[0]=RF32(ea);} // 80105B64
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80105B68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80105B6C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80105B70
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80105B74
  c->lr=0x80105B7Cu; f_80048E1C(c); // 80105B78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105B7C
  c->lr=c->r[0]; // 80105B80
  c->r[1]=c->r[1]+0x00000010u; // 80105B84
  return; // 80105B88
}

// fn_80105B8C
void f_80105B8C(Ctx* __restrict c) {
  trace_call(0x80105B8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105B8C
  c->r[0]=c->lr; // 80105B90
  c->r[4]=0u+0x00000000u; // 80105B94
  c->r[3]=c->r[3]+0x00000008u; // 80105B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105B9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105BA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80105BA4
  c->lr=0x80105BACu; f_8009D3D0(c); // 80105BA8
  c->lr=0x80105BB0u; f_8009D0F4(c); // 80105BAC
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105BB0
  c->r[31]=c->r[3]|c->r[3]; // 80105BB4
  c->r[4]=0u+0xFFFFFFFFu; // 80105BB8
  c->lr=0x80105BC0u; f_80048B94(c); // 80105BBC
  c->r[30]=c->r[3]|c->r[3]; // 80105BC0
  c->lr=0x80105BC8u; f_80048C6C(c); // 80105BC4
  cmps(c,0,(int32_t)c->r[3],0); // 80105BC8
  if (crb(c,2)) { goto L_80105C10; } // 80105BCC
  c->r[4]=0u+0x80490000u; // 80105BD0
  c->r[0]=0u+0x00000008u; // 80105BD4
  c->r[4]=c->r[4]+0x00004678u; // 80105BD8
  c->r[3]=0u+0x00000000u; // 80105BDC
  c->ctr=c->r[0]; // 80105BE0
L_80105BE4:;
  c->r[0]=R32(c->r[4]+c->r[3]); // 80105BE4
  c->r[5]=c->r[4]+c->r[3]; // 80105BE8
  cmps(c,0,(int32_t)c->r[0],0); // 80105BEC
  if (!crb(c,0)) { goto L_80105C08; } // 80105BF0
  W32(c->r[5]+0x00000000u,c->r[30]); // 80105BF4
  c->r[4]=c->r[31]|c->r[31]; // 80105BF8
  c->r[3]=c->r[5]+0x00000004u; // 80105BFC
  c->lr=0x80105C04u; f_802933D8(c); // 80105C00
  goto L_80105C10; // 80105C04
L_80105C08:;
  c->r[3]=c->r[3]+0x00000014u; // 80105C08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80105BE4; } // 80105C0C
L_80105C10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105C14
  c->r[30]=R32(c->r[1]+0x00000008u); // 80105C18
  c->lr=c->r[0]; // 80105C1C
  c->r[1]=c->r[1]+0x00000010u; // 80105C20
  return; // 80105C24
}

// fn_80105C28
void f_80105C28(Ctx* __restrict c) {
  trace_call(0x80105C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105C28
  c->r[0]=c->lr; // 80105C2C
  W32(c->r[1]+0x00000054u,c->r[0]); // 80105C30
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80105C34
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80105C38
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 80105C3C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80105C40
  c->r[4]=0u+0x00000000u; // 80105C44
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80105C48
  W32(c->r[1]+0x00000028u,c->r[30]); // 80105C4C
  c->r[30]=c->r[3]|c->r[3]; // 80105C50
  c->r[3]=c->r[3]+0x00000008u; // 80105C54
  c->lr=0x80105C5Cu; f_8009D3D0(c); // 80105C58
  c->lr=0x80105C60u; f_8009D0F4(c); // 80105C5C
  c->r[31]=c->r[3]|c->r[3]; // 80105C60
  c->r[3]=c->r[30]+0x00000008u; // 80105C64
  c->r[4]=0u+0x00000001u; // 80105C68
  c->lr=0x80105C70u; f_8009D3D0(c); // 80105C6C
  c->lr=0x80105C74u; f_8009D0A0(c); // 80105C70
  c->f[30]=c->f[1]; // 80105C74
  c->r[3]=c->r[30]+0x00000008u; // 80105C78
  c->r[4]=0u+0x00000002u; // 80105C7C
  c->lr=0x80105C84u; f_8009D3D0(c); // 80105C80
  c->lr=0x80105C88u; f_8009D0A0(c); // 80105C84
  c->f[31]=c->f[1]; // 80105C88
  c->r[3]=c->r[30]+0x00000008u; // 80105C8C
  c->r[4]=0u+0x00000003u; // 80105C90
  c->lr=0x80105C98u; f_8009D3D0(c); // 80105C94
  c->lr=0x80105C9Cu; f_8009D0A0(c); // 80105C98
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80105C9C
  c->r[3]=c->r[31]|c->r[31]; // 80105CA0
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80105CA4
  c->r[4]=c->r[1]+0x00000008u; // 80105CA8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[30]);} // 80105CAC
  c->r[5]=0u+0xFFFFFFFFu; // 80105CB0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80105CB4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[31]);} // 80105CB8
  c->r[7]=R32(c->r[1]+0x00000014u); // 80105CBC
  c->r[6]=R32(c->r[1]+0x00000018u); // 80105CC0
  W32(c->r[1]+0x00000008u,c->r[7]); // 80105CC4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80105CC8
  W32(c->r[1]+0x00000010u,c->r[0]); // 80105CCC
  c->lr=0x80105CD4u; f_80048BAC(c); // 80105CD0
  c->r[30]=c->r[3]|c->r[3]; // 80105CD4
  c->lr=0x80105CDCu; f_80048C6C(c); // 80105CD8
  cmps(c,0,(int32_t)c->r[3],0); // 80105CDC
  if (crb(c,2)) { goto L_80105D24; } // 80105CE0
  c->r[4]=0u+0x80490000u; // 80105CE4
  c->r[0]=0u+0x00000008u; // 80105CE8
  c->r[4]=c->r[4]+0x00004678u; // 80105CEC
  c->r[3]=0u+0x00000000u; // 80105CF0
  c->ctr=c->r[0]; // 80105CF4
L_80105CF8:;
  c->r[0]=R32(c->r[4]+c->r[3]); // 80105CF8
  c->r[5]=c->r[4]+c->r[3]; // 80105CFC
  cmps(c,0,(int32_t)c->r[0],0); // 80105D00
  if (!crb(c,0)) { goto L_80105D1C; } // 80105D04
  W32(c->r[5]+0x00000000u,c->r[30]); // 80105D08
  c->r[4]=c->r[31]|c->r[31]; // 80105D0C
  c->r[3]=c->r[5]+0x00000004u; // 80105D10
  c->lr=0x80105D18u; f_802933D8(c); // 80105D14
  goto L_80105D24; // 80105D18
L_80105D1C:;
  c->r[3]=c->r[3]+0x00000014u; // 80105D1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80105CF8; } // 80105D20
L_80105D24:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80105D24
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 80105D28
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80105D2C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80105D30
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80105D34
  c->r[0]=R32(c->r[1]+0x00000054u); // 80105D38
  c->r[30]=R32(c->r[1]+0x00000028u); // 80105D3C
  c->lr=c->r[0]; // 80105D40
  c->r[1]=c->r[1]+0x00000050u; // 80105D44
  return; // 80105D48
}

// fn_80105D4C
void f_80105D4C(Ctx* __restrict c) {
  trace_call(0x80105D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105D4C
  c->r[0]=c->lr; // 80105D50
  c->r[4]=0u+0x00000000u; // 80105D54
  c->r[3]=c->r[3]+0x00000008u; // 80105D58
  W32(c->r[1]+0x00000034u,c->r[0]); // 80105D5C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80105D60
  c->lr=0x80105D68u; f_8009D3D0(c); // 80105D64
  c->lr=0x80105D6Cu; f_8009D0F4(c); // 80105D68
  c->r[29]=0u+0x80490000u; // 80105D6C
  c->r[26]=c->r[3]|c->r[3]; // 80105D70
  c->r[29]=c->r[29]+0x00004678u; // 80105D74
  c->r[25]=0u+0x00000000u; // 80105D78
  c->r[31]=0u+0x00000000u; // 80105D7C
  c->r[30]=0u+0xFFFFFFFFu; // 80105D80
L_80105D84:;
  c->r[28]=R32(c->r[29]+c->r[31]); // 80105D84
  c->r[27]=c->r[29]+c->r[31]; // 80105D88
  cmps(c,0,(int32_t)c->r[28],0); // 80105D8C
  if (crb(c,0)) { goto L_80105DB8; } // 80105D90
  c->r[4]=c->r[26]|c->r[26]; // 80105D94
  c->r[3]=c->r[27]+0x00000004u; // 80105D98
  c->lr=0x80105DA0u; f_80293554(c); // 80105D9C
  cmps(c,0,(int32_t)c->r[3],0); // 80105DA0
  if (!crb(c,2)) { goto L_80105DB8; } // 80105DA4
  c->r[3]=c->r[28]|c->r[28]; // 80105DA8
  c->r[4]=0u+0x0000000Au; // 80105DAC
  c->lr=0x80105DB4u; f_80048C54(c); // 80105DB0
  W32(c->r[27]+0x00000000u,c->r[30]); // 80105DB4
L_80105DB8:;
  c->r[25]=c->r[25]+0x00000001u; // 80105DB8
  c->r[31]=c->r[31]+0x00000014u; // 80105DBC
  cmps(c,0,(int32_t)c->r[25],8); // 80105DC0
  if (crb(c,0)) { IRQCHK(c); goto L_80105D84; } // 80105DC4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80105DC8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80105DCC
  c->lr=c->r[0]; // 80105DD0
  c->r[1]=c->r[1]+0x00000030u; // 80105DD4
  return; // 80105DD8
}

// fn_80105DDC
void f_80105DDC(Ctx* __restrict c) {
  trace_call(0x80105DDCu);
  return; // 80105DDC
}

// fn_80105DE0
void f_80105DE0(Ctx* __restrict c) {
  trace_call(0x80105DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105DE0
  c->r[0]=c->lr; // 80105DE4
  c->r[4]=0u+0x00000000u; // 80105DE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105DEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80105DF0
  c->r[30]=c->r[3]|c->r[3]; // 80105DF4
  c->r[3]=c->r[3]+0x00000008u; // 80105DF8
  c->lr=0x80105E00u; f_8009D3D0(c); // 80105DFC
  c->lr=0x80105E04u; f_8009D0F4(c); // 80105E00
  c->r[31]=c->r[3]|c->r[3]; // 80105E04
  c->r[3]=c->r[30]+0x00000008u; // 80105E08
  c->r[4]=0u+0x00000001u; // 80105E0C
  c->lr=0x80105E14u; f_8009D3D0(c); // 80105E10
  c->lr=0x80105E18u; f_8009D0A0(c); // 80105E14
  c->r[3]=c->r[31]|c->r[31]; // 80105E18
  c->r[4]=0u+0x00000000u; // 80105E1C
  c->lr=0x80105E24u; f_80048F8C(c); // 80105E20
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80105E24
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105E28
  c->lr=c->r[0]; // 80105E2C
  c->r[1]=c->r[1]+0x00000010u; // 80105E30
  return; // 80105E34
}

// fn_80105E38
void f_80105E38(Ctx* __restrict c) {
  trace_call(0x80105E38u);
  c->r[3]=0u+0x00000000u; // 80105E38
  f_80048F6C(c); return; // 80105E3C
}

// fn_80105E40
void f_80105E40(Ctx* __restrict c) {
  trace_call(0x80105E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105E40
  c->r[0]=c->lr; // 80105E44
  c->r[4]=0u+0x00000000u; // 80105E48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105E4C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80105E50
  c->r[30]=c->r[3]|c->r[3]; // 80105E54
  c->r[3]=c->r[3]+0x00000008u; // 80105E58
  c->lr=0x80105E60u; f_8009D3D0(c); // 80105E5C
  c->lr=0x80105E64u; f_8009D0F4(c); // 80105E60
  c->r[31]=c->r[3]|c->r[3]; // 80105E64
  c->r[3]=c->r[30]+0x00000008u; // 80105E68
  c->r[4]=0u+0x00000001u; // 80105E6C
  c->lr=0x80105E74u; f_8009D3D0(c); // 80105E70
  c->lr=0x80105E78u; f_8009D188(c); // 80105E74
  c->r[3]=c->r[31]|c->r[31]; // 80105E78
  c->r[4]=0u+0x00000000u; // 80105E7C
  c->lr=0x80105E84u; f_80048FB0(c); // 80105E80
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80105E84
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105E88
  c->lr=c->r[0]; // 80105E8C
  c->r[1]=c->r[1]+0x00000010u; // 80105E90
  return; // 80105E94
}

// fn_80105E98
void f_80105E98(Ctx* __restrict c) {
  trace_call(0x80105E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105E98
  c->r[0]=c->lr; // 80105E9C
  c->r[4]=0u+0x00000000u; // 80105EA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105EA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105EA8
  c->r[31]=c->r[3]|c->r[3]; // 80105EAC
  c->r[3]=c->r[3]+0x00000008u; // 80105EB0
  c->lr=0x80105EB8u; f_8009D3D0(c); // 80105EB4
  c->lr=0x80105EBCu; f_8009D188(c); // 80105EB8
  c->r[3]=c->r[31]+0x00000008u; // 80105EBC
  c->r[4]=0u+0x00000001u; // 80105EC0
  c->lr=0x80105EC8u; f_8009D3D0(c); // 80105EC4
  c->lr=0x80105ECCu; f_8009D0A0(c); // 80105EC8
  c->r[3]=0u+0x00000000u; // 80105ECC
  c->lr=0x80105ED4u; f_80049000(c); // 80105ED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105ED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105ED8
  c->lr=c->r[0]; // 80105EDC
  c->r[1]=c->r[1]+0x00000010u; // 80105EE0
  return; // 80105EE4
}

// fn_80105EE8
void f_80105EE8(Ctx* __restrict c) {
  trace_call(0x80105EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105EE8
  c->r[0]=c->lr; // 80105EEC
  c->r[4]=0u+0x00000000u; // 80105EF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105EF4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80105EF8
  c->r[31]=c->r[3]|c->r[3]; // 80105EFC
  c->r[3]=c->r[3]+0x00000008u; // 80105F00
  c->lr=0x80105F08u; f_8009D3D0(c); // 80105F04
  c->lr=0x80105F0Cu; f_8009D0F4(c); // 80105F08
  c->r[0]=R32(c->r[31]+0x00000004u); // 80105F0C
  c->r[29]=c->r[3]|c->r[3]; // 80105F10
  cmps(c,0,(int32_t)c->r[0],1254); // 80105F14
  if (crb(c,2)) { goto L_8010601C; } // 80105F18
  if (!crb(c,0)) { goto L_80105F38; } // 80105F1C
  cmps(c,0,(int32_t)c->r[0],1252); // 80105F20
  if (crb(c,2)) { goto L_80106004; } // 80105F24
  if (!crb(c,0)) { goto L_80106010; } // 80105F28
  cmps(c,0,(int32_t)c->r[0],0); // 80105F2C
  if (crb(c,2)) { goto L_80105F50; } // 80105F30
  goto L_80106164; // 80105F34
L_80105F38:;
  cmps(c,0,(int32_t)c->r[0],1278); // 80105F38
  if (crb(c,2)) { goto L_8010615C; } // 80105F3C
  if (!crb(c,0)) { goto L_80106164; } // 80105F40
  cmps(c,0,(int32_t)c->r[0],1256); // 80105F44
  if (!crb(c,0)) { goto L_80106164; } // 80105F48
  goto L_80106028; // 80105F4C
L_80105F50:;
  c->r[0]=0u+0x00000001u; // 80105F50
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80105F54
  W8(c->r[13]+0xFFFF95DDu,c->r[0]); // 80105F58
  c->r[4]=0u+0x00000000u; // 80105F5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80105F60
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80105F64
  c->ctr=c->r[12]; // 80105F68
  if (true) { c->lr=0x80105F70u; dispatch(c,c->ctr); } // 80105F6C
  c->r[3]=0u+0x00000000u; // 80105F70
  c->lr=0x80105F78u; f_80048F6C(c); // 80105F74
  c->r[3]=0u+0x00000001u; // 80105F78
  c->lr=0x80105F80u; f_80048F6C(c); // 80105F7C
  c->r[3]=0u+0x00000002u; // 80105F80
  c->lr=0x80105F88u; f_80048F6C(c); // 80105F84
  c->r[10]=R32(c->r[2]+0xFFFF83E4u); // 80105F88
  c->r[4]=0u+0x00000000u; // 80105F8C
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 80105F90
  c->r[5]=0u+0x00000001u; // 80105F94
  c->r[8]=R32(c->r[2]+0xFFFF83D8u); // 80105F98
  c->r[6]=0u+0x0000000Au; // 80105F9C
  c->r[7]=R32(c->r[2]+0xFFFF83DCu); // 80105FA0
  c->r[0]=c->r[10]|c->r[0]; // 80105FA4
  c->r[3]=R32(c->r[2]+0xFFFF83E8u); // 80105FA8
  c->r[8]=c->r[8]|c->r[7]; // 80105FAC
  c->r[9]=R32(c->r[2]+0xFFFF83ECu); // 80105FB0
  c->r[0]=c->r[3]|c->r[0]; // 80105FB4
  c->r[7]=R32(c->r[2]+0xFFFF83F0u); // 80105FB8
  c->r[3]=c->r[9]|c->r[8]; // 80105FBC
  c->r[3]=c->r[10]|c->r[3]; // 80105FC0
  c->r[0]=c->r[7]|c->r[0]; // 80105FC4
  c->r[3]=c->r[3]|c->r[0]; // 80105FC8
  c->lr=0x80105FD0u; f_80049204(c); // 80105FCC
  c->r[3]=R32(c->r[13]+0xFFFF9738u); // 80105FD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80105FD4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80105FD8
  c->ctr=c->r[12]; // 80105FDC
  if (true) { c->lr=0x80105FE4u; dispatch(c,c->ctr); } // 80105FE0
  c->r[3]=R32(c->r[13]+0xFFFF9560u); // 80105FE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80105FE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80105FEC
  c->ctr=c->r[12]; // 80105FF0
  if (true) { c->lr=0x80105FF8u; dispatch(c,c->ctr); } // 80105FF4
  c->r[0]=0u+0x000004E4u; // 80105FF8
  W32(c->r[31]+0x00000004u,c->r[0]); // 80105FFC
  goto L_80106164; // 80106000
L_80106004:;
  c->r[0]=0u+0x000004E5u; // 80106004
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106008
  goto L_80106164; // 8010600C
L_80106010:;
  c->r[0]=0u+0x000004E6u; // 80106010
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106014
  goto L_80106164; // 80106018
L_8010601C:;
  c->r[0]=0u+0x000004E7u; // 8010601C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106020
  goto L_80106164; // 80106024
L_80106028:;
  c->r[0]=0u+0x000000FFu; // 80106028
  c->r[4]=0u+0x01000000u; // 8010602C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80106030
  c->r[3]=c->r[1]+0x0000000Cu; // 80106034
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80106038
  c->r[7]=R8(c->r[1]+0x00000008u); // 8010603C
  c->r[6]=R8(c->r[1]+0x00000009u); // 80106040
  c->r[5]=R8(c->r[1]+0x0000000Au); // 80106044
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 80106048
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 8010604C
  W8(c->r[1]+0x0000000Du,c->r[6]); // 80106050
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 80106054
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80106058
  c->lr=0x80106060u; f_802855C8(c); // 8010605C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106060
  c->r[4]=0u+0xFFFFFFFFu; // 80106064
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106068
  c->r[12]=R32(c->r[12]+0x00000044u); // 8010606C
  c->ctr=c->r[12]; // 80106070
  if (true) { c->lr=0x80106078u; dispatch(c,c->ctr); } // 80106074
  cmps(c,0,(int32_t)c->r[3],0); // 80106078
  if (crb(c,2)) { goto L_801060B4; } // 8010607C
  c->r[4]=0u+0x803E0000u; // 80106080
  c->r[5]=0u+0x00000002u; // 80106084
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106088
  c->r[4]=c->r[4]+0x00000006u; // 8010608C
  c->lr=0x80106094u; f_80293670(c); // 80106090
  cmps(c,0,(int32_t)c->r[3],0); // 80106094
  if (!crb(c,2)) { goto L_801060B4; } // 80106098
  c->r[3]=0u+0x80490000u; // 8010609C
  c->r[4]=0u+0x00600000u; // 801060A0
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 801060A4
  c->lr=0x801060ACu; f_80103884(c); // 801060A8
  W32(c->r[13]+0xFFFF95E8u,c->r[3]); // 801060AC
  goto L_80106100; // 801060B0
L_801060B4:;
  c->r[3]=0u+0x80490000u; // 801060B4
  c->r[4]=0u+0x00600000u; // 801060B8
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 801060BC
  c->lr=0x801060C4u; f_80103884(c); // 801060C0
  W32(c->r[13]+0xFFFF95E8u,c->r[3]); // 801060C4
  c->r[3]=0u+0x805C0000u; // 801060C8
  c->r[3]=c->r[3]+0x00005B94u; // 801060CC
  c->r[4]=0u+0x00000000u; // 801060D0
  c->lr=0x801060D8u; f_8021384C(c); // 801060D4
  c->lr=0x801060DCu; f_80061A4C(c); // 801060D8
  c->r[3]=c->r[3]+0x000000ECu; // 801060DC
  c->lr=0x801060E4u; f_8012CF84(c); // 801060E0
  c->r[3]=0u+0x80470000u; // 801060E4
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801060E8
  c->lr=0x801060F0u; f_80066B34(c); // 801060EC
  c->r[3]=0u+0x80440000u; // 801060F0
  c->r[4]=0u+0x00000000u; // 801060F4
  c->r[3]=c->r[3]+0xFFFFA720u; // 801060F8
  c->lr=0x80106100u; f_8003AB8C(c); // 801060FC
L_80106100:;
  c->r[3]=R32(c->r[13]+0xFFFF95E8u); // 80106100
  c->r[4]=0u+0x00000000u; // 80106104
  c->r[5]=0u+0x00600000u; // 80106108
  c->lr=0x80106110u; f_800043EC(c); // 8010610C
  c->r[3]=0u+0x804B0000u; // 80106110
  c->r[5]=R32(c->r[13]+0xFFFF95E8u); // 80106114
  c->r[4]=c->r[29]|c->r[29]; // 80106118
  c->r[6]=0u+0x00600000u; // 8010611C
  c->r[3]=c->r[3]+0x00005400u; // 80106120
  c->lr=0x80106128u; f_8014256C(c); // 80106124
  c->r[30]=0u+0x80490000u; // 80106128
  c->r[4]=c->r[29]|c->r[29]; // 8010612C
  c->r[3]=c->r[30]+0x00004860u; // 80106130
  c->lr=0x80106138u; f_802933D8(c); // 80106134
  c->r[3]=R32(c->r[13]+0xFFFF9738u); // 80106138
  c->r[4]=c->r[30]+0x00004860u; // 8010613C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106140
  c->r[12]=R32(c->r[12]+0x00000014u); // 80106144
  c->ctr=c->r[12]; // 80106148
  if (true) { c->lr=0x80106150u; dispatch(c,c->ctr); } // 8010614C
  c->r[0]=0u+0x000004FEu; // 80106150
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106154
  goto L_80106164; // 80106158
L_8010615C:;
  c->r[3]=0u+0x00000000u; // 8010615C
  goto L_80106168; // 80106160
L_80106164:;
  c->r[3]=0u+0x00000001u; // 80106164
L_80106168:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80106168
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010616C
  c->lr=c->r[0]; // 80106170
  c->r[1]=c->r[1]+0x00000020u; // 80106174
  return; // 80106178
}

// fn_8010617C
void f_8010617C(Ctx* __restrict c) {
  trace_call(0x8010617Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010617C
  c->r[0]=c->lr; // 80106180
  c->r[4]=0u+0x00000000u; // 80106184
  W32(c->r[1]+0x00000034u,c->r[0]); // 80106188
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010618C
  c->r[31]=c->r[3]|c->r[3]; // 80106190
  c->r[3]=c->r[3]+0x00000008u; // 80106194
  c->lr=0x8010619Cu; f_8009D3D0(c); // 80106198
  c->lr=0x801061A0u; f_8009D0F4(c); // 8010619C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801061A0
  c->r[29]=c->r[3]|c->r[3]; // 801061A4
  cmps(c,0,(int32_t)c->r[0],1337); // 801061A8
  if (crb(c,2)) { goto L_80106378; } // 801061AC
  if (!crb(c,0)) { goto L_801061E8; } // 801061B0
  cmps(c,0,(int32_t)c->r[0],1308); // 801061B4
  if (crb(c,2)) { goto L_801062CC; } // 801061B8
  if (!crb(c,0)) { goto L_801061D8; } // 801061BC
  cmps(c,0,(int32_t)c->r[0],0); // 801061C0
  if (crb(c,2)) { goto L_8010620C; } // 801061C4
  if (crb(c,0)) { goto L_80106484; } // 801061C8
  cmps(c,0,(int32_t)c->r[0],1307); // 801061CC
  if (!crb(c,0)) { goto L_801062C0; } // 801061D0
  goto L_80106484; // 801061D4
L_801061D8:;
  cmps(c,0,(int32_t)c->r[0],1310); // 801061D8
  if (crb(c,2)) { goto L_801062E4; } // 801061DC
  if (!crb(c,0)) { goto L_80106484; } // 801061E0
  goto L_801062D8; // 801061E4
L_801061E8:;
  cmps(c,0,(int32_t)c->r[0],1340); // 801061E8
  if (crb(c,2)) { goto L_8010639C; } // 801061EC
  if (!crb(c,0)) { goto L_80106200; } // 801061F0
  cmps(c,0,(int32_t)c->r[0],1339); // 801061F4
  if (!crb(c,0)) { goto L_80106390; } // 801061F8
  goto L_80106384; // 801061FC
L_80106200:;
  cmps(c,0,(int32_t)c->r[0],1356); // 80106200
  if (crb(c,2)) { goto L_8010647C; } // 80106204
  goto L_80106484; // 80106208
L_8010620C:;
  c->r[0]=0u+0x00000000u; // 8010620C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106210
  W8(c->r[13]+0xFFFF95DDu,c->r[0]); // 80106214
  c->r[4]=0u+0x00000000u; // 80106218
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010621C
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80106220
  c->ctr=c->r[12]; // 80106224
  if (true) { c->lr=0x8010622Cu; dispatch(c,c->ctr); } // 80106228
  c->r[3]=0u+0x00000000u; // 8010622C
  c->lr=0x80106234u; f_80048F6C(c); // 80106230
  c->r[3]=0u+0x00000001u; // 80106234
  c->lr=0x8010623Cu; f_80048F6C(c); // 80106238
  c->r[3]=0u+0x00000002u; // 8010623C
  c->lr=0x80106244u; f_80048F6C(c); // 80106240
  c->r[10]=R32(c->r[2]+0xFFFF83E4u); // 80106244
  c->r[4]=0u+0x00000000u; // 80106248
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 8010624C
  c->r[5]=0u+0x00000001u; // 80106250
  c->r[8]=R32(c->r[2]+0xFFFF83D8u); // 80106254
  c->r[6]=0u+0x0000000Au; // 80106258
  c->r[7]=R32(c->r[2]+0xFFFF83DCu); // 8010625C
  c->r[0]=c->r[10]|c->r[0]; // 80106260
  c->r[3]=R32(c->r[2]+0xFFFF83E8u); // 80106264
  c->r[8]=c->r[8]|c->r[7]; // 80106268
  c->r[9]=R32(c->r[2]+0xFFFF83ECu); // 8010626C
  c->r[0]=c->r[3]|c->r[0]; // 80106270
  c->r[7]=R32(c->r[2]+0xFFFF83F0u); // 80106274
  c->r[3]=c->r[9]|c->r[8]; // 80106278
  c->r[3]=c->r[10]|c->r[3]; // 8010627C
  c->r[0]=c->r[7]|c->r[0]; // 80106280
  c->r[3]=c->r[3]|c->r[0]; // 80106284
  c->lr=0x8010628Cu; f_80049204(c); // 80106288
  c->r[3]=R32(c->r[13]+0xFFFF9738u); // 8010628C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106290
  c->r[12]=R32(c->r[12]+0x00000008u); // 80106294
  c->ctr=c->r[12]; // 80106298
  if (true) { c->lr=0x801062A0u; dispatch(c,c->ctr); } // 8010629C
  c->r[3]=R32(c->r[13]+0xFFFF9560u); // 801062A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801062A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801062A8
  c->ctr=c->r[12]; // 801062AC
  if (true) { c->lr=0x801062B4u; dispatch(c,c->ctr); } // 801062B0
  c->r[0]=0u+0x0000051Bu; // 801062B4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801062B8
  goto L_80106484; // 801062BC
L_801062C0:;
  c->r[0]=0u+0x0000051Cu; // 801062C0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801062C4
  goto L_80106484; // 801062C8
L_801062CC:;
  c->r[0]=0u+0x0000051Du; // 801062CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801062D0
  goto L_80106484; // 801062D4
L_801062D8:;
  c->r[0]=0u+0x0000051Eu; // 801062D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801062DC
  goto L_80106484; // 801062E0
L_801062E4:;
  c->lr=0x801062E8u; f_80113CA4(c); // 801062E4
  c->r[28]=0u+0x00000000u; // 801062E8
  c->r[30]=0u+0x80490000u; // 801062EC
  goto L_8010635C; // 801062F0
L_801062F4:;
  c->r[4]=c->r[28]|c->r[28]; // 801062F4
  c->r[3]=c->r[30]+0x00001314u; // 801062F8
  c->lr=0x80106300u; f_801DC1F4(c); // 801062FC
  c->r[27]=c->r[3]|c->r[3]; // 80106300
  c->r[3]=c->r[30]+0x00001314u; // 80106304
  c->r[4]=c->r[27]|c->r[27]; // 80106308
  c->lr=0x80106310u; f_801DBFE4(c); // 8010630C
  c->r[29]=c->r[3]|c->r[3]; // 80106310
  c->lr=0x80106318u; f_8004FBE8(c); // 80106314
  c->r[4]=c->r[29]|c->r[29]; // 80106318
  c->r[5]=0u+0x00000000u; // 8010631C
  c->lr=0x80106324u; f_80050310(c); // 80106320
  c->lr=0x80106328u; f_8004FBE8(c); // 80106324
  c->r[4]=c->r[29]|c->r[29]; // 80106328
  c->lr=0x80106330u; f_800502D0(c); // 8010632C
  c->lr=0x80106334u; f_8004FBE8(c); // 80106330
  c->r[4]=c->r[29]|c->r[29]; // 80106334
  c->lr=0x8010633Cu; f_8004FD90(c); // 80106338
  c->lr=0x80106340u; f_8004FBE8(c); // 8010633C
  c->r[3]=c->r[3]+0x00010000u; // 80106340
  c->r[4]=c->r[29]|c->r[29]; // 80106344
  c->r[3]=c->r[3]+0xFFFF82E4u; // 80106348
  c->lr=0x80106350u; f_80137A2C(c); // 8010634C
  c->r[3]=c->r[27]|c->r[27]; // 80106350
  c->lr=0x80106358u; f_80109CF8(c); // 80106354
  c->r[28]=c->r[28]+0x00000001u; // 80106358
L_8010635C:;
  c->r[3]=c->r[30]+0x00001314u; // 8010635C
  c->lr=0x80106364u; f_801DC1D0(c); // 80106360
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 80106364
  if (crb(c,0)) { IRQCHK(c); goto L_801062F4; } // 80106368
  c->r[0]=0u+0x00000539u; // 8010636C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106370
  goto L_80106484; // 80106374
L_80106378:;
  c->r[0]=0u+0x0000053Au; // 80106378
  W32(c->r[31]+0x00000004u,c->r[0]); // 8010637C
  goto L_80106484; // 80106380
L_80106384:;
  c->r[0]=0u+0x0000053Bu; // 80106384
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106388
  goto L_80106484; // 8010638C
L_80106390:;
  c->r[0]=0u+0x0000053Cu; // 80106390
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106394
  goto L_80106484; // 80106398
L_8010639C:;
  c->lr=0x801063A0u; f_8003DA30(c); // 8010639C
  c->r[4]=0u+0x00600000u; // 801063A0
  c->r[3]=c->r[3]+0x00000014u; // 801063A4
  c->lr=0x801063ACu; f_802A703C(c); // 801063A8
  W32(c->r[13]+0xFFFF95E8u,c->r[3]); // 801063AC
  c->r[3]=0u+0x805C0000u; // 801063B0
  c->r[3]=c->r[3]+0x00005B94u; // 801063B4
  c->r[4]=0u+0x00000000u; // 801063B8
  c->lr=0x801063C0u; f_8021384C(c); // 801063BC
  c->lr=0x801063C4u; f_80061A4C(c); // 801063C0
  c->r[3]=c->r[3]+0x000000ECu; // 801063C4
  c->lr=0x801063CCu; f_8012CF84(c); // 801063C8
  c->r[3]=0u+0x80470000u; // 801063CC
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801063D0
  c->lr=0x801063D8u; f_80066B34(c); // 801063D4
  c->r[3]=0u+0x80440000u; // 801063D8
  c->r[4]=0u+0x00000000u; // 801063DC
  c->r[3]=c->r[3]+0xFFFFA720u; // 801063E0
  c->lr=0x801063E8u; f_8003AB8C(c); // 801063E4
  c->r[0]=0u+0x000000FFu; // 801063E8
  c->r[4]=0u+0x01000000u; // 801063EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801063F0
  c->r[3]=c->r[1]+0x0000000Cu; // 801063F4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801063F8
  c->r[7]=R8(c->r[1]+0x00000008u); // 801063FC
  c->r[6]=R8(c->r[1]+0x00000009u); // 80106400
  c->r[5]=R8(c->r[1]+0x0000000Au); // 80106404
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 80106408
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 8010640C
  W8(c->r[1]+0x0000000Du,c->r[6]); // 80106410
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 80106414
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80106418
  c->lr=0x80106420u; f_802855C8(c); // 8010641C
  c->r[3]=R32(c->r[13]+0xFFFF95E8u); // 80106420
  c->r[4]=0u+0x00000000u; // 80106424
  c->r[5]=0u+0x00600000u; // 80106428
  c->lr=0x80106430u; f_800043EC(c); // 8010642C
  c->r[3]=0u+0x804B0000u; // 80106430
  c->r[5]=R32(c->r[13]+0xFFFF95E8u); // 80106434
  c->r[4]=c->r[29]|c->r[29]; // 80106438
  c->r[6]=0u+0x00600000u; // 8010643C
  c->r[3]=c->r[3]+0x00005400u; // 80106440
  c->lr=0x80106448u; f_8014256C(c); // 80106444
  c->r[30]=0u+0x80490000u; // 80106448
  c->r[4]=c->r[29]|c->r[29]; // 8010644C
  c->r[3]=c->r[30]+0x00004860u; // 80106450
  c->lr=0x80106458u; f_802933D8(c); // 80106454
  c->r[3]=R32(c->r[13]+0xFFFF9738u); // 80106458
  c->r[4]=c->r[30]+0x00004860u; // 8010645C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106460
  c->r[12]=R32(c->r[12]+0x00000014u); // 80106464
  c->ctr=c->r[12]; // 80106468
  if (true) { c->lr=0x80106470u; dispatch(c,c->ctr); } // 8010646C
  c->r[0]=0u+0x0000054Cu; // 80106470
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106474
  goto L_80106484; // 80106478
L_8010647C:;
  c->r[3]=0u+0x00000000u; // 8010647C
  goto L_80106488; // 80106480
L_80106484:;
  c->r[3]=0u+0x00000001u; // 80106484
L_80106488:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80106488
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010648C
  c->lr=c->r[0]; // 80106490
  c->r[1]=c->r[1]+0x00000030u; // 80106494
  return; // 80106498
}

// fn_8010649C
void f_8010649C(Ctx* __restrict c) {
  trace_call(0x8010649Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010649C
  c->r[0]=c->lr; // 801064A0
  c->r[4]=0u+0x803E0000u; // 801064A4
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 801064A8
  W32(c->r[1]+0x00000114u,c->r[0]); // 801064AC
  c->r[3]=c->r[1]+0x00000008u; // 801064B0
  c->r[4]=c->r[4]+0x00000009u; // 801064B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801064B8
  c->lr=0x801064C0u; f_80291CC4(c); // 801064BC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801064C0
  c->r[4]=c->r[1]+0x00000008u; // 801064C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801064C8
  c->r[12]=R32(c->r[12]+0x000000A0u); // 801064CC
  c->ctr=c->r[12]; // 801064D0
  if (true) { c->lr=0x801064D8u; dispatch(c,c->ctr); } // 801064D4
  cmps(c,0,(int32_t)c->r[3],0); // 801064D8
  if (!crb(c,2)) { goto L_801064EC; } // 801064DC
  c->r[3]=0u+0x804B0000u; // 801064E0
  c->r[3]=c->r[3]+0x00005400u; // 801064E4
  c->lr=0x801064ECu; f_80142BCC(c); // 801064E8
L_801064EC:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 801064EC
  c->lr=c->r[0]; // 801064F0
  c->r[1]=c->r[1]+0x00000110u; // 801064F4
  return; // 801064F8
}

// fn_801064FC
void f_801064FC(Ctx* __restrict c) {
  trace_call(0x801064FCu);
  c->r[3]=0u+0x804B0000u; // 801064FC
  c->r[3]=c->r[3]+0x00005400u; // 80106500
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000006u); // 80106504
  c->r[3]=c->r[3]+0xFFFFFF9Du; // 80106508
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8010650C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 80106510
  return; // 80106514
}

// fn_80106518
void f_80106518(Ctx* __restrict c) {
  trace_call(0x80106518u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106518
  c->r[0]=c->lr; // 8010651C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106520
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80106524
  c->r[31]=c->r[3]|c->r[3]; // 80106528
  c->r[0]=R32(c->r[3]+0x00000004u); // 8010652C
  cmps(c,0,(int32_t)c->r[0],1428); // 80106530
  if (crb(c,2)) { goto L_8010662C; } // 80106534
  if (!crb(c,0)) { goto L_80106554; } // 80106538
  cmps(c,0,(int32_t)c->r[0],1409); // 8010653C
  if (crb(c,2)) { goto L_80106578; } // 80106540
  if (!crb(c,0)) { goto L_801066D8; } // 80106544
  cmps(c,0,(int32_t)c->r[0],0); // 80106548
  if (crb(c,2)) { goto L_8010656C; } // 8010654C
  goto L_801066D8; // 80106550
L_80106554:;
  cmps(c,0,(int32_t)c->r[0],1431); // 80106554
  if (crb(c,2)) { goto L_80106650; } // 80106558
  if (!crb(c,0)) { goto L_801066D8; } // 8010655C
  cmps(c,0,(int32_t)c->r[0],1430); // 80106560
  if (!crb(c,0)) { goto L_80106644; } // 80106564
  goto L_80106638; // 80106568
L_8010656C:;
  c->r[0]=0u+0x00000581u; // 8010656C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106570
  goto L_801066D8; // 80106574
L_80106578:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106578
  c->r[4]=0u+0xFFFFFFFFu; // 8010657C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106580
  c->r[12]=R32(c->r[12]+0x00000044u); // 80106584
  c->ctr=c->r[12]; // 80106588
  if (true) { c->lr=0x80106590u; dispatch(c,c->ctr); } // 8010658C
  cmps(c,0,(int32_t)c->r[3],0); // 80106590
  if (crb(c,2)) { goto L_801065C8; } // 80106594
  c->r[4]=0u+0x803E0000u; // 80106598
  c->r[5]=0u+0x00000002u; // 8010659C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 801065A0
  c->r[4]=c->r[4]+0x00000006u; // 801065A4
  c->lr=0x801065ACu; f_80293670(c); // 801065A8
  cmps(c,0,(int32_t)c->r[3],0); // 801065AC
  if (!crb(c,2)) { goto L_801065C8; } // 801065B0
  c->r[3]=0u+0x80490000u; // 801065B4
  c->r[4]=R32(c->r[13]+0xFFFF95E8u); // 801065B8
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 801065BC
  c->lr=0x801065C4u; f_80103894(c); // 801065C0
  goto L_80106604; // 801065C4
L_801065C8:;
  c->r[3]=0u+0x80490000u; // 801065C8
  c->r[4]=R32(c->r[13]+0xFFFF95E8u); // 801065CC
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 801065D0
  c->lr=0x801065D8u; f_80103894(c); // 801065D4
  c->r[3]=0u+0x805C0000u; // 801065D8
  c->r[4]=0u+0x00000001u; // 801065DC
  c->r[3]=c->r[3]+0x00005B94u; // 801065E0
  c->lr=0x801065E8u; f_8021384C(c); // 801065E4
  c->r[3]=0u+0x80440000u; // 801065E8
  c->r[4]=0u+0x00000000u; // 801065EC
  c->r[3]=c->r[3]+0xFFFFA720u; // 801065F0
  c->lr=0x801065F8u; f_8003ACB8(c); // 801065F4
  c->r[3]=0u+0x80470000u; // 801065F8
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801065FC
  c->lr=0x80106604u; f_80066B8C(c); // 80106600
L_80106604:;
  c->r[0]=0u+0x00000000u; // 80106604
  c->r[3]=R32(c->r[13]+0xFFFF9560u); // 80106608
  W32(c->r[13]+0xFFFF95E8u,c->r[0]); // 8010660C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106610
  c->r[12]=R32(c->r[12]+0x00000014u); // 80106614
  c->ctr=c->r[12]; // 80106618
  if (true) { c->lr=0x80106620u; dispatch(c,c->ctr); } // 8010661C
  c->r[0]=0u+0x00000594u; // 80106620
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106624
  goto L_801066D8; // 80106628
L_8010662C:;
  c->r[0]=0u+0x00000595u; // 8010662C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106630
  goto L_801066D8; // 80106634
L_80106638:;
  c->r[0]=0u+0x00000596u; // 80106638
  W32(c->r[3]+0x00000004u,c->r[0]); // 8010663C
  goto L_801066D8; // 80106640
L_80106644:;
  c->r[0]=0u+0x00000597u; // 80106644
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106648
  goto L_801066D8; // 8010664C
L_80106650:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106650
  c->r[4]=0u+0x80490000u; // 80106654
  c->r[4]=c->r[4]+0x00004860u; // 80106658
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010665C
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 80106660
  c->ctr=c->r[12]; // 80106664
  if (true) { c->lr=0x8010666Cu; dispatch(c,c->ctr); } // 80106668
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010666C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106670
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80106674
  c->ctr=c->r[12]; // 80106678
  if (true) { c->lr=0x80106680u; dispatch(c,c->ctr); } // 8010667C
  c->r[10]=R32(c->r[2]+0xFFFF83E4u); // 80106680
  c->r[4]=0u+0x00000000u; // 80106684
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 80106688
  c->r[5]=0u+0x00000000u; // 8010668C
  c->r[8]=R32(c->r[2]+0xFFFF83D8u); // 80106690
  c->r[6]=0u+0x0000000Au; // 80106694
  c->r[7]=R32(c->r[2]+0xFFFF83DCu); // 80106698
  c->r[0]=c->r[10]|c->r[0]; // 8010669C
  c->r[3]=R32(c->r[2]+0xFFFF83E8u); // 801066A0
  c->r[8]=c->r[8]|c->r[7]; // 801066A4
  c->r[9]=R32(c->r[2]+0xFFFF83ECu); // 801066A8
  c->r[0]=c->r[3]|c->r[0]; // 801066AC
  c->r[7]=R32(c->r[2]+0xFFFF83F0u); // 801066B0
  c->r[3]=c->r[9]|c->r[8]; // 801066B4
  c->r[3]=c->r[10]|c->r[3]; // 801066B8
  c->r[0]=c->r[7]|c->r[0]; // 801066BC
  c->r[3]=c->r[3]|c->r[0]; // 801066C0
  c->lr=0x801066C8u; f_80049204(c); // 801066C4
  c->r[0]=0u+0x00000000u; // 801066C8
  c->r[3]=0u+0x00000000u; // 801066CC
  W8(c->r[13]+0xFFFF95DDu,c->r[0]); // 801066D0
  goto L_801066DC; // 801066D4
L_801066D8:;
  c->r[3]=0u+0x00000001u; // 801066D8
L_801066DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801066DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801066E0
  c->lr=c->r[0]; // 801066E4
  c->r[1]=c->r[1]+0x00000010u; // 801066E8
  return; // 801066EC
}

// fn_801066F0
void f_801066F0(Ctx* __restrict c) {
  trace_call(0x801066F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801066F0
  c->r[0]=c->lr; // 801066F4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801066F8
  {uint32_t ea=c->r[1]+0x00000078u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801066FC
  c->r[31]=c->r[3]|c->r[3]; // 80106700
  c->r[0]=R32(c->r[3]+0x00000004u); // 80106704
  cmps(c,0,(int32_t)c->r[0],1522); // 80106708
  if (crb(c,2)) { goto L_801068EC; } // 8010670C
  if (!crb(c,0)) { goto L_8010672C; } // 80106710
  cmps(c,0,(int32_t)c->r[0],1454); // 80106714
  if (crb(c,2)) { goto L_80106750; } // 80106718
  if (!crb(c,0)) { goto L_80106998; } // 8010671C
  cmps(c,0,(int32_t)c->r[0],0); // 80106720
  if (crb(c,2)) { goto L_80106744; } // 80106724
  goto L_80106998; // 80106728
L_8010672C:;
  cmps(c,0,(int32_t)c->r[0],1525); // 8010672C
  if (crb(c,2)) { goto L_80106910; } // 80106730
  if (!crb(c,0)) { goto L_80106998; } // 80106734
  cmps(c,0,(int32_t)c->r[0],1524); // 80106738
  if (!crb(c,0)) { goto L_80106904; } // 8010673C
  goto L_801068F8; // 80106740
L_80106744:;
  c->r[0]=0u+0x000005AEu; // 80106744
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106748
  goto L_80106998; // 8010674C
L_80106750:;
  c->lr=0x80106754u; f_8003DA30(c); // 80106750
  c->r[4]=R32(c->r[13]+0xFFFF95E8u); // 80106754
  c->r[3]=c->r[3]+0x00000014u; // 80106758
  c->lr=0x80106760u; f_802A704C(c); // 8010675C
  c->r[30]=0u+0x803E0000u; // 80106760
  c->r[24]=0u+0x00000000u; // 80106764
  c->r[30]=c->r[30]+0xFFFFD1C8u; // 80106768
  c->r[27]=0u+0x80490000u; // 8010676C
  c->r[28]=0u+0x80490000u; // 80106770
  goto L_80106888; // 80106774
L_80106778:;
  c->r[4]=c->r[24]|c->r[24]; // 80106778
  c->r[3]=c->r[27]+0x00001314u; // 8010677C
  c->lr=0x80106784u; f_801DC1F4(c); // 80106780
  c->r[23]=c->r[3]|c->r[3]; // 80106784
  c->r[3]=c->r[27]+0x00001314u; // 80106788
  c->r[4]=c->r[23]|c->r[23]; // 8010678C
  c->lr=0x80106794u; f_801DBFE4(c); // 80106790
  c->r[25]=rotl(c->r[3],12)&0xFFFFF000u; // 80106794
  c->r[26]=c->r[3]|c->r[3]; // 80106798
  c->r[3]=c->r[28]+0xFFFFF8B8u; // 8010679C
  c->r[4]=c->r[25]|0x00000100u; // 801067A0
  c->lr=0x801067A8u; f_80103144(c); // 801067A4
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801067A8
  c->r[29]=c->r[3]|c->r[3]; // 801067AC
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 801067B0
  if (crb(c,2)) { goto L_80106808; } // 801067B4
  c->lr=0x801067BCu; f_8004FBE8(c); // 801067B8
  c->r[22]=c->r[3]|c->r[3]; // 801067BC
  c->r[4]=c->r[26]|c->r[26]; // 801067C0
  c->lr=0x801067C8u; f_80050328(c); // 801067C4
  c->r[5]=R32(c->r[29]+0x00000010u); // 801067C8
  c->r[29]=c->r[3]|c->r[3]; // 801067CC
  c->r[3]=c->r[22]|c->r[22]; // 801067D0
  c->r[4]=c->r[26]|c->r[26]; // 801067D4
  c->lr=0x801067DCu; f_8004FD30(c); // 801067D8
  c->r[3]=c->r[22]|c->r[22]; // 801067DC
  c->r[4]=c->r[26]|c->r[26]; // 801067E0
  c->r[5]=c->r[23]|c->r[23]; // 801067E4
  c->lr=0x801067ECu; f_80050248(c); // 801067E8
  c->r[3]=c->r[22]+0x00010000u; // 801067EC
  c->r[4]=R32(c->r[29]+0x000018B4u); // 801067F0
  c->r[5]=c->r[26]|c->r[26]; // 801067F4
  c->r[3]=c->r[3]+0xFFFF82E4u; // 801067F8
  c->lr=0x80106800u; f_80137A00(c); // 801067FC
  c->r[3]=c->r[29]|c->r[29]; // 80106800
  c->lr=0x80106808u; f_80051258(c); // 80106804
L_80106808:;
  c->r[3]=c->r[28]+0xFFFFF8B8u; // 80106808
  c->r[4]=c->r[25]|0x00000200u; // 8010680C
  c->lr=0x80106814u; f_80103144(c); // 80106810
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80106814
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80106818
  if (crb(c,2)) { goto L_8010687C; } // 8010681C
  c->r[26]=R32(c->r[3]+0x00000010u); // 80106820
  cmps(c,0,(int32_t)c->r[26],0); // 80106824
  if (crb(c,2)) { goto L_8010687C; } // 80106828
  c->r[4]=c->r[26]|c->r[26]; // 8010682C
  c->r[3]=c->r[1]+0x00000008u; // 80106830
  c->lr=0x80106838u; f_801328F8(c); // 80106834
  c->r[3]=c->r[1]+0x00000008u; // 80106838
  c->r[4]=c->r[30]+0x00000015u; // 8010683C
  c->lr=0x80106844u; f_80132AE0(c); // 80106840
  c->r[5]=c->r[3]|c->r[3]; // 80106844
  c->r[3]=c->r[23]|c->r[23]; // 80106848
  c->r[4]=c->r[26]|c->r[26]; // 8010684C
  c->r[6]=c->r[26]|c->r[26]; // 80106850
  c->r[7]=0u+0x00000000u; // 80106854
  c->r[8]=0u+0xFFFFFFFFu; // 80106858
  c->r[9]=0u+0x00000000u; // 8010685C
  c->r[10]=0u+0x00000000u; // 80106860
  c->lr=0x80106868u; f_8013BEB4(c); // 80106864
  c->r[3]=c->r[26]|c->r[26]; // 80106868
  c->lr=0x80106870u; f_8013BD08(c); // 8010686C
  c->r[3]=c->r[1]+0x00000008u; // 80106870
  c->r[4]=0u+0xFFFFFFFFu; // 80106874
  c->lr=0x8010687Cu; f_80132958(c); // 80106878
L_8010687C:;
  c->lr=0x80106880u; f_8004FBE8(c); // 8010687C
  c->lr=0x80106884u; f_80050410(c); // 80106880
  c->r[24]=c->r[24]+0x00000001u; // 80106884
L_80106888:;
  c->r[3]=c->r[27]+0x00001314u; // 80106888
  c->lr=0x80106890u; f_801DC1D0(c); // 8010688C
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[3]); // 80106890
  if (crb(c,0)) { IRQCHK(c); goto L_80106778; } // 80106894
  c->r[3]=0u+0x805C0000u; // 80106898
  c->r[4]=0u+0x00000001u; // 8010689C
  c->r[3]=c->r[3]+0x00005B94u; // 801068A0
  c->lr=0x801068A8u; f_8021384C(c); // 801068A4
  c->r[3]=0u+0x80440000u; // 801068A8
  c->r[4]=0u+0x00000000u; // 801068AC
  c->r[3]=c->r[3]+0xFFFFA720u; // 801068B0
  c->lr=0x801068B8u; f_8003ACB8(c); // 801068B4
  c->r[3]=0u+0x80470000u; // 801068B8
  c->r[3]=c->r[3]+0xFFFF94F8u; // 801068BC
  c->lr=0x801068C4u; f_80066B8C(c); // 801068C0
  c->r[0]=0u+0x00000000u; // 801068C4
  c->r[3]=R32(c->r[13]+0xFFFF9560u); // 801068C8
  W32(c->r[13]+0xFFFF95E8u,c->r[0]); // 801068CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801068D0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801068D4
  c->ctr=c->r[12]; // 801068D8
  if (true) { c->lr=0x801068E0u; dispatch(c,c->ctr); } // 801068DC
  c->r[0]=0u+0x000005F2u; // 801068E0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801068E4
  goto L_80106998; // 801068E8
L_801068EC:;
  c->r[0]=0u+0x000005F3u; // 801068EC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801068F0
  goto L_80106998; // 801068F4
L_801068F8:;
  c->r[0]=0u+0x000005F4u; // 801068F8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801068FC
  goto L_80106998; // 80106900
L_80106904:;
  c->r[0]=0u+0x000005F5u; // 80106904
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106908
  goto L_80106998; // 8010690C
L_80106910:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106910
  c->r[4]=0u+0x80490000u; // 80106914
  c->r[4]=c->r[4]+0x00004860u; // 80106918
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010691C
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 80106920
  c->ctr=c->r[12]; // 80106924
  if (true) { c->lr=0x8010692Cu; dispatch(c,c->ctr); } // 80106928
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010692C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106930
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80106934
  c->ctr=c->r[12]; // 80106938
  if (true) { c->lr=0x80106940u; dispatch(c,c->ctr); } // 8010693C
  c->r[10]=R32(c->r[2]+0xFFFF83E4u); // 80106940
  c->r[4]=0u+0x00000000u; // 80106944
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 80106948
  c->r[5]=0u+0x00000000u; // 8010694C
  c->r[8]=R32(c->r[2]+0xFFFF83D8u); // 80106950
  c->r[6]=0u+0x0000000Au; // 80106954
  c->r[7]=R32(c->r[2]+0xFFFF83DCu); // 80106958
  c->r[0]=c->r[10]|c->r[0]; // 8010695C
  c->r[3]=R32(c->r[2]+0xFFFF83E8u); // 80106960
  c->r[8]=c->r[8]|c->r[7]; // 80106964
  c->r[9]=R32(c->r[2]+0xFFFF83ECu); // 80106968
  c->r[0]=c->r[3]|c->r[0]; // 8010696C
  c->r[7]=R32(c->r[2]+0xFFFF83F0u); // 80106970
  c->r[3]=c->r[9]|c->r[8]; // 80106974
  c->r[3]=c->r[10]|c->r[3]; // 80106978
  c->r[0]=c->r[7]|c->r[0]; // 8010697C
  c->r[3]=c->r[3]|c->r[0]; // 80106980
  c->lr=0x80106988u; f_80049204(c); // 80106984
  c->r[0]=0u+0x00000000u; // 80106988
  c->r[3]=0u+0x00000000u; // 8010698C
  W8(c->r[13]+0xFFFF95DDu,c->r[0]); // 80106990
  goto L_8010699C; // 80106994
L_80106998:;
  c->r[3]=0u+0x00000001u; // 80106998
L_8010699C:;
  {uint32_t ea=c->r[1]+0x00000078u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010699C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801069A0
  c->lr=c->r[0]; // 801069A4
  c->r[1]=c->r[1]+0x000000A0u; // 801069A8
  return; // 801069AC
}

// fn_801069B0
void f_801069B0(Ctx* __restrict c) {
  trace_call(0x801069B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801069B0
  c->r[0]=c->lr; // 801069B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801069B8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801069BC
  c->r[30]=c->r[3]|c->r[3]; // 801069C0
  c->r[3]=c->r[13]+0xFFFF97A8u; // 801069C4
  c->lr=0x801069CCu; f_80242AA8(c); // 801069C8
  c->r[4]=0u+0x00000001u; // 801069CC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 801069D0
  W32(c->r[30]+0x00000798u,c->r[4]); // 801069D4
  c->r[31]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 801069D8
  c->r[3]=c->r[30]+0x00000798u; // 801069DC
  c->r[4]=0u+0x00000000u; // 801069E0
  c->lr=0x801069E8u; f_8009D3D0(c); // 801069E4
  c->r[4]=c->r[31]|c->r[31]; // 801069E8
  c->lr=0x801069F0u; f_8009D220(c); // 801069EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801069F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801069F4
  c->lr=c->r[0]; // 801069F8
  c->r[1]=c->r[1]+0x00000010u; // 801069FC
  return; // 80106A00
}

// fn_80106A04
void f_80106A04(Ctx* __restrict c) {
  trace_call(0x80106A04u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106A04
  c->r[0]=c->lr; // 80106A08
  c->r[4]=0u+0x00000000u; // 80106A0C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80106A10
  {uint32_t ea=c->r[1]+0x000000A4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80106A14
  c->r[30]=c->r[3]|c->r[3]; // 80106A18
  c->r[3]=c->r[3]+0x00000008u; // 80106A1C
  c->lr=0x80106A24u; f_8009D3D0(c); // 80106A20
  c->lr=0x80106A28u; f_8009D188(c); // 80106A24
  c->r[0]=R32(c->r[30]+0x00000004u); // 80106A28
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80106A2C
  c->r[31]=addc(c,~c->r[4],c->r[3],c->xer_ca); // 80106A30
  cmps(c,0,(int32_t)c->r[0],1607); // 80106A34
  if (crb(c,2)) { goto L_80106CE4; } // 80106A38
  if (!crb(c,0)) { goto L_80106A64; } // 80106A3C
  cmps(c,0,(int32_t)c->r[0],1601); // 80106A40
  if (crb(c,2)) { goto L_80106C94; } // 80106A44
  if (!crb(c,0)) { goto L_80106A58; } // 80106A48
  cmps(c,0,(int32_t)c->r[0],0); // 80106A4C
  if (crb(c,2)) { goto L_80106A7C; } // 80106A50
  goto L_80106D9C; // 80106A54
L_80106A58:;
  cmps(c,0,(int32_t)c->r[0],1606); // 80106A58
  if (!crb(c,0)) { goto L_80106CD8; } // 80106A5C
  goto L_80106D9C; // 80106A60
L_80106A64:;
  cmps(c,0,(int32_t)c->r[0],1625); // 80106A64
  if (crb(c,2)) { goto L_80106D44; } // 80106A68
  if (!crb(c,0)) { goto L_80106D9C; } // 80106A6C
  cmps(c,0,(int32_t)c->r[0],1618); // 80106A70
  if (crb(c,2)) { goto L_80106D24; } // 80106A74
  goto L_80106D9C; // 80106A78
L_80106A7C:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106A7C
  c->r[4]=0u+0x00000000u; // 80106A80
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106A84
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80106A88
  c->ctr=c->r[12]; // 80106A8C
  if (true) { c->lr=0x80106A94u; dispatch(c,c->ctr); } // 80106A90
  c->r[3]=0u+0x80440000u; // 80106A94
  c->r[3]=c->r[3]+0xFFFFA720u; // 80106A98
  c->r[0]=R32(c->r[3]+0x00000054u); // 80106A9C
  cmps(c,0,(int32_t)c->r[0],1); // 80106AA0
  if (!crb(c,2)) { goto L_80106AC4; } // 80106AA4
  c->r[4]=0u+0x803E0000u; // 80106AA8
  c->r[3]=c->r[1]+0x00000010u; // 80106AAC
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106AB0
  c->r[4]=c->r[4]+0x00000023u; // 80106AB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106AB8
  c->lr=0x80106AC0u; f_80291CC4(c); // 80106ABC
  goto L_80106ADC; // 80106AC0
L_80106AC4:;
  c->r[4]=0u+0x803E0000u; // 80106AC4
  c->r[3]=c->r[1]+0x00000010u; // 80106AC8
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106ACC
  c->r[4]=c->r[4]+0x00000029u; // 80106AD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106AD4
  c->lr=0x80106ADCu; f_80291CC4(c); // 80106AD8
L_80106ADC:;
  c->r[10]=R8(c->r[2]+0xFFFF9320u); // 80106ADC
  c->r[3]=c->r[13]+0xFFFF97A8u; // 80106AE0
  c->r[9]=R8(c->r[2]+0xFFFF9321u); // 80106AE4
  c->r[8]=R8(c->r[2]+0xFFFF9322u); // 80106AE8
  c->r[7]=R8(c->r[2]+0xFFFF9323u); // 80106AEC
  c->r[6]=R8(c->r[2]+0xFFFF9324u); // 80106AF0
  c->r[5]=R8(c->r[2]+0xFFFF9325u); // 80106AF4
  c->r[4]=R8(c->r[2]+0xFFFF9326u); // 80106AF8
  c->r[0]=R8(c->r[2]+0xFFFF9327u); // 80106AFC
  W8(c->r[1]+0x00000008u,c->r[10]); // 80106B00
  W8(c->r[1]+0x00000009u,c->r[9]); // 80106B04
  W8(c->r[1]+0x0000000Au,c->r[8]); // 80106B08
  W8(c->r[1]+0x0000000Bu,c->r[7]); // 80106B0C
  W8(c->r[1]+0x0000000Cu,c->r[6]); // 80106B10
  W8(c->r[1]+0x0000000Du,c->r[5]); // 80106B14
  W8(c->r[1]+0x0000000Eu,c->r[4]); // 80106B18
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80106B1C
  c->lr=0x80106B24u; f_80242AA8(c); // 80106B20
  cmpu(c,0,c->r[3],0x00000009u); // 80106B24
  if (crb(c,1)) { goto L_80106C58; } // 80106B28
  c->r[4]=0u+0x80400000u; // 80106B2C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80106B30
  c->r[4]=c->r[4]+0xFFFF8328u; // 80106B34
  c->r[4]=R32(c->r[4]+c->r[0]); // 80106B38
  c->ctr=c->r[4]; // 80106B3C
  if (true) { switch (c->ctr) { case 0x80106B44u: goto L_80106B44; case 0x80106B60u: goto L_80106B60; case 0x80106B7Cu: goto L_80106B7C; case 0x80106B98u: goto L_80106B98; case 0x80106BB4u: goto L_80106BB4; case 0x80106BD0u: goto L_80106BD0; case 0x80106BECu: goto L_80106BEC; case 0x80106C08u: goto L_80106C08; case 0x80106C24u: goto L_80106C24; case 0x80106C40u: goto L_80106C40; default: break; } dispatch(c,c->ctr); return; } // 80106B40
L_80106B44:;
  c->r[4]=0u+0x803E0000u; // 80106B44
  c->r[3]=c->r[1]+0x00000008u; // 80106B48
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106B4C
  c->r[4]=c->r[4]+0x0000002Eu; // 80106B50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106B54
  c->lr=0x80106B5Cu; f_80291CC4(c); // 80106B58
  goto L_80106C58; // 80106B5C
L_80106B60:;
  c->r[4]=0u+0x803E0000u; // 80106B60
  c->r[3]=c->r[1]+0x00000008u; // 80106B64
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106B68
  c->r[4]=c->r[4]+0x00000032u; // 80106B6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106B70
  c->lr=0x80106B78u; f_80291CC4(c); // 80106B74
  goto L_80106C58; // 80106B78
L_80106B7C:;
  c->r[4]=0u+0x803E0000u; // 80106B7C
  c->r[3]=c->r[1]+0x00000008u; // 80106B80
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106B84
  c->r[4]=c->r[4]+0x00000036u; // 80106B88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106B8C
  c->lr=0x80106B94u; f_80291CC4(c); // 80106B90
  goto L_80106C58; // 80106B94
L_80106B98:;
  c->r[4]=0u+0x803E0000u; // 80106B98
  c->r[3]=c->r[1]+0x00000008u; // 80106B9C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106BA0
  c->r[4]=c->r[4]+0x0000003Au; // 80106BA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106BA8
  c->lr=0x80106BB0u; f_80291CC4(c); // 80106BAC
  goto L_80106C58; // 80106BB0
L_80106BB4:;
  c->r[4]=0u+0x803E0000u; // 80106BB4
  c->r[3]=c->r[1]+0x00000008u; // 80106BB8
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106BBC
  c->r[4]=c->r[4]+0x0000003Eu; // 80106BC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106BC4
  c->lr=0x80106BCCu; f_80291CC4(c); // 80106BC8
  goto L_80106C58; // 80106BCC
L_80106BD0:;
  c->r[4]=0u+0x803E0000u; // 80106BD0
  c->r[3]=c->r[1]+0x00000008u; // 80106BD4
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106BD8
  c->r[4]=c->r[4]+0x00000042u; // 80106BDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106BE0
  c->lr=0x80106BE8u; f_80291CC4(c); // 80106BE4
  goto L_80106C58; // 80106BE8
L_80106BEC:;
  c->r[4]=0u+0x803E0000u; // 80106BEC
  c->r[3]=c->r[1]+0x00000008u; // 80106BF0
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106BF4
  c->r[4]=c->r[4]+0x00000049u; // 80106BF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106BFC
  c->lr=0x80106C04u; f_80291CC4(c); // 80106C00
  goto L_80106C58; // 80106C04
L_80106C08:;
  c->r[4]=0u+0x803E0000u; // 80106C08
  c->r[3]=c->r[1]+0x00000008u; // 80106C0C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106C10
  c->r[4]=c->r[4]+0x0000004Du; // 80106C14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106C18
  c->lr=0x80106C20u; f_80291CC4(c); // 80106C1C
  goto L_80106C58; // 80106C20
L_80106C24:;
  c->r[4]=0u+0x803E0000u; // 80106C24
  c->r[3]=c->r[1]+0x00000008u; // 80106C28
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106C2C
  c->r[4]=c->r[4]+0x00000054u; // 80106C30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106C34
  c->lr=0x80106C3Cu; f_80291CC4(c); // 80106C38
  goto L_80106C58; // 80106C3C
L_80106C40:;
  c->r[4]=0u+0x803E0000u; // 80106C40
  c->r[3]=c->r[1]+0x00000008u; // 80106C44
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106C48
  c->r[4]=c->r[4]+0x00000058u; // 80106C4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106C50
  c->lr=0x80106C58u; f_80291CC4(c); // 80106C54
L_80106C58:;
  c->r[4]=0u+0x803E0000u; // 80106C58
  c->r[3]=c->r[1]+0x00000018u; // 80106C5C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106C60
  c->r[5]=c->r[1]+0x00000010u; // 80106C64
  c->r[4]=c->r[4]+0x0000005Cu; // 80106C68
  c->r[6]=c->r[1]+0x00000008u; // 80106C6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80106C70
  c->lr=0x80106C78u; f_80291CC4(c); // 80106C74
  c->r[29]=0u+0x80490000u; // 80106C78
  c->r[4]=c->r[1]+0x00000018u; // 80106C7C
  c->r[3]=c->r[29]+0xFFFFFAC4u; // 80106C80
  c->r[5]=0u+0x00000000u; // 80106C84
  c->lr=0x80106C8Cu; f_801028D4(c); // 80106C88
  c->r[3]=c->r[29]+0xFFFFFAC4u; // 80106C8C
  c->lr=0x80106C94u; f_80102C78(c); // 80106C90
L_80106C94:;
  c->r[3]=0u+0x80490000u; // 80106C94
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80106C98
  c->lr=0x80106CA0u; f_80102CC8(c); // 80106C9C
  cmps(c,0,(int32_t)c->r[3],0); // 80106CA0
  if (!crb(c,2)) { goto L_80106CB4; } // 80106CA4
  c->r[0]=0u+0x00000641u; // 80106CA8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80106CAC
  goto L_80106D9C; // 80106CB0
L_80106CB4:;
  c->r[29]=0u+0x805E0000u; // 80106CB4
  c->r[4]=c->r[31]|c->r[31]; // 80106CB8
  c->r[3]=c->r[29]+0xFFFFDD98u; // 80106CBC
  c->lr=0x80106CC4u; f_80246174(c); // 80106CC0
  c->r[3]=c->r[29]+0xFFFFDD98u; // 80106CC4
  c->lr=0x80106CCCu; f_80106DB4(c); // 80106CC8
  c->r[0]=0u+0x00000646u; // 80106CCC
  W32(c->r[30]+0x00000004u,c->r[0]); // 80106CD0
  goto L_80106D9C; // 80106CD4
L_80106CD8:;
  c->r[0]=0u+0x00000647u; // 80106CD8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80106CDC
  goto L_80106D9C; // 80106CE0
L_80106CE4:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106CE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106CE8
  c->r[12]=R32(c->r[12]+0x00000018u); // 80106CEC
  c->ctr=c->r[12]; // 80106CF0
  if (true) { c->lr=0x80106CF8u; dispatch(c,c->ctr); } // 80106CF4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106CF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106CFC
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80106D00
  c->ctr=c->r[12]; // 80106D04
  if (true) { c->lr=0x80106D0Cu; dispatch(c,c->ctr); } // 80106D08
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106D0C
  c->r[4]=0u+0x00000001u; // 80106D10
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106D14
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80106D18
  c->ctr=c->r[12]; // 80106D1C
  if (true) { c->lr=0x80106D24u; dispatch(c,c->ctr); } // 80106D20
L_80106D24:;
  c->r[3]=0u+0x805E0000u; // 80106D24
  c->r[3]=c->r[3]+0xFFFFDD98u; // 80106D28
  c->r[0]=R32(c->r[3]+0x00000004u); // 80106D2C
  cmps(c,0,(int32_t)c->r[0],0); // 80106D30
  if (!crb(c,2)) { goto L_80106D44; } // 80106D34
  c->r[0]=0u+0x00000652u; // 80106D38
  W32(c->r[30]+0x00000004u,c->r[0]); // 80106D3C
  goto L_80106D9C; // 80106D40
L_80106D44:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106D44
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106D48
  c->r[12]=R32(c->r[12]+0x00000020u); // 80106D4C
  c->ctr=c->r[12]; // 80106D50
  if (true) { c->lr=0x80106D58u; dispatch(c,c->ctr); } // 80106D54
  cmps(c,0,(int32_t)c->r[3],0); // 80106D58
  if (!crb(c,2)) { goto L_80106D6C; } // 80106D5C
  c->r[0]=0u+0x00000659u; // 80106D60
  W32(c->r[30]+0x00000004u,c->r[0]); // 80106D64
  goto L_80106D9C; // 80106D68
L_80106D6C:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106D6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106D70
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80106D74
  c->ctr=c->r[12]; // 80106D78
  if (true) { c->lr=0x80106D80u; dispatch(c,c->ctr); } // 80106D7C
  c->r[0]=0u+0x00000000u; // 80106D80
  c->r[3]=0u+0x80490000u; // 80106D84
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 80106D88
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80106D8C
  c->lr=0x80106D94u; f_801036D0(c); // 80106D90
  c->r[3]=0u+0x00000000u; // 80106D94
  goto L_80106DA0; // 80106D98
L_80106D9C:;
  c->r[3]=0u+0x00000001u; // 80106D9C
L_80106DA0:;
  {uint32_t ea=c->r[1]+0x000000A4u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80106DA0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80106DA4
  c->lr=c->r[0]; // 80106DA8
  c->r[1]=c->r[1]+0x000000B0u; // 80106DAC
  return; // 80106DB0
}

// fn_80106DB4
void f_80106DB4(Ctx* __restrict c) {
  trace_call(0x80106DB4u);
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 80106DB4
  cmps(c,0,(int32_t)c->r[0],2); // 80106DB8
  if (crb(c,1)) { goto L_80106DD8; } // 80106DBC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80106DC0
  c->r[4]=0u+0x00000001u; // 80106DC4
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 80106DC8
  W32(c->r[3]+0x00000020u,c->r[0]); // 80106DCC
  c->r[3]=0u+0x00000001u; // 80106DD0
  return; // 80106DD4
L_80106DD8:;
  c->r[3]=0u+0x00000000u; // 80106DD8
  return; // 80106DDC
}

// fn_80106DE0
void f_80106DE0(Ctx* __restrict c) {
  trace_call(0x80106DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106DE0
  c->r[0]=c->lr; // 80106DE4
  W32(c->r[1]+0x00000094u,c->r[0]); // 80106DE8
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80106DEC
  c->r[30]=c->r[3]|c->r[3]; // 80106DF0
  c->r[0]=R32(c->r[3]+0x00000004u); // 80106DF4
  cmps(c,0,(int32_t)c->r[0],1661); // 80106DF8
  if (crb(c,2)) { goto L_80106EB4; } // 80106DFC
  if (!crb(c,0)) { goto L_80106E1C; } // 80106E00
  cmps(c,0,(int32_t)c->r[0],1657); // 80106E04
  if (crb(c,2)) { goto L_80106E7C; } // 80106E08
  if (!crb(c,0)) { goto L_80106F60; } // 80106E0C
  cmps(c,0,(int32_t)c->r[0],0); // 80106E10
  if (crb(c,2)) { goto L_80106E34; } // 80106E14
  goto L_80106F60; // 80106E18
L_80106E1C:;
  cmps(c,0,(int32_t)c->r[0],1669); // 80106E1C
  if (crb(c,2)) { goto L_80106EEC; } // 80106E20
  if (!crb(c,0)) { goto L_80106F60; } // 80106E24
  cmps(c,0,(int32_t)c->r[0],1663); // 80106E28
  if (!crb(c,0)) { goto L_80106F60; } // 80106E2C
  goto L_80106EC0; // 80106E30
L_80106E34:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106E34
  c->r[4]=0u+0x00000000u; // 80106E38
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106E3C
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80106E40
  c->ctr=c->r[12]; // 80106E44
  if (true) { c->lr=0x80106E4Cu; dispatch(c,c->ctr); } // 80106E48
  c->r[4]=0u+0x803E0000u; // 80106E4C
  c->r[3]=c->r[1]+0x00000008u; // 80106E50
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80106E54
  c->r[4]=c->r[4]+0x00000077u; // 80106E58
  c->lr=0x80106E60u; f_802561D4(c); // 80106E5C
  c->r[31]=0u+0x80490000u; // 80106E60
  c->r[4]=c->r[1]+0x00000008u; // 80106E64
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 80106E68
  c->r[5]=0u+0x00000000u; // 80106E6C
  c->lr=0x80106E74u; f_801028D4(c); // 80106E70
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 80106E74
  c->lr=0x80106E7Cu; f_80102C78(c); // 80106E78
L_80106E7C:;
  c->r[3]=0u+0x80490000u; // 80106E7C
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80106E80
  c->lr=0x80106E88u; f_80102CC8(c); // 80106E84
  cmps(c,0,(int32_t)c->r[3],0); // 80106E88
  if (!crb(c,2)) { goto L_80106E9C; } // 80106E8C
  c->r[0]=0u+0x00000679u; // 80106E90
  W32(c->r[30]+0x00000004u,c->r[0]); // 80106E94
  goto L_80106F60; // 80106E98
L_80106E9C:;
  c->r[3]=0u+0x80580000u; // 80106E9C
  c->r[3]=c->r[3]+0x00004270u; // 80106EA0
  c->lr=0x80106EA8u; f_80106DB4(c); // 80106EA4
  c->r[0]=0u+0x0000067Du; // 80106EA8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80106EAC
  goto L_80106F60; // 80106EB0
L_80106EB4:;
  c->r[0]=0u+0x0000067Eu; // 80106EB4
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106EB8
  goto L_80106F60; // 80106EBC
L_80106EC0:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106EC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106EC4
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80106EC8
  c->ctr=c->r[12]; // 80106ECC
  if (true) { c->lr=0x80106ED4u; dispatch(c,c->ctr); } // 80106ED0
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106ED4
  c->r[4]=0u+0x00000001u; // 80106ED8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106EDC
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80106EE0
  c->ctr=c->r[12]; // 80106EE4
  if (true) { c->lr=0x80106EECu; dispatch(c,c->ctr); } // 80106EE8
L_80106EEC:;
  c->r[31]=0u+0x80580000u; // 80106EEC
  c->r[31]=c->r[31]+0x00004270u; // 80106EF0
  c->r[0]=R32(c->r[31]+0x00000004u); // 80106EF4
  cmps(c,0,(int32_t)c->r[0],0); // 80106EF8
  if (!crb(c,2)) { goto L_80106F0C; } // 80106EFC
  c->r[0]=0u+0x00000685u; // 80106F00
  W32(c->r[30]+0x00000004u,c->r[0]); // 80106F04
  goto L_80106F60; // 80106F08
L_80106F0C:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106F0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106F10
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80106F14
  c->ctr=c->r[12]; // 80106F18
  if (true) { c->lr=0x80106F20u; dispatch(c,c->ctr); } // 80106F1C
  c->r[0]=R32(c->r[31]+0x00000128u); // 80106F20
  cmps(c,0,(int32_t)c->r[0],2); // 80106F24
  if (!crb(c,2)) { goto L_80106F38; } // 80106F28
  c->r[0]=0u+0x00000000u; // 80106F2C
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 80106F30
  goto L_80106F4C; // 80106F34
L_80106F38:;
  cmps(c,0,(int32_t)c->r[0],4); // 80106F38
  c->r[0]=0u+0xFFFFFFFFu; // 80106F3C
  if (!crb(c,2)) { goto L_80106F48; } // 80106F40
  c->r[0]=0u+0x00000001u; // 80106F44
L_80106F48:;
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 80106F48
L_80106F4C:;
  c->r[3]=0u+0x80490000u; // 80106F4C
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80106F50
  c->lr=0x80106F58u; f_801036D0(c); // 80106F54
  c->r[3]=0u+0x00000000u; // 80106F58
  goto L_80106F64; // 80106F5C
L_80106F60:;
  c->r[3]=0u+0x00000001u; // 80106F60
L_80106F64:;
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80106F64
  c->r[0]=R32(c->r[1]+0x00000094u); // 80106F68
  c->lr=c->r[0]; // 80106F6C
  c->r[1]=c->r[1]+0x00000090u; // 80106F70
  return; // 80106F74
}

// fn_80106F78
void f_80106F78(Ctx* __restrict c) {
  trace_call(0x80106F78u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106F78
  c->r[0]=c->lr; // 80106F7C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80106F80
  c->r[11]=c->r[1]+0x000000A0u; // 80106F84
  c->lr=0x80106F8Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80106F88
  c->r[0]=R32(c->r[3]+0x00000004u); // 80106F8C
  c->r[29]=c->r[3]|c->r[3]; // 80106F90
  cmps(c,0,(int32_t)c->r[0],1735); // 80106F94
  if (crb(c,2)) { goto L_801070C0; } // 80106F98
  if (!crb(c,0)) { goto L_80106FC4; } // 80106F9C
  cmps(c,0,(int32_t)c->r[0],1715); // 80106FA0
  if (crb(c,2)) { goto L_80107048; } // 80106FA4
  if (!crb(c,0)) { goto L_80106FB8; } // 80106FA8
  cmps(c,0,(int32_t)c->r[0],0); // 80106FAC
  if (crb(c,2)) { goto L_80106FE8; } // 80106FB0
  goto L_801071D4; // 80106FB4
L_80106FB8:;
  cmps(c,0,(int32_t)c->r[0],1734); // 80106FB8
  if (!crb(c,0)) { goto L_801070B4; } // 80106FBC
  goto L_801071D4; // 80106FC0
L_80106FC4:;
  cmps(c,0,(int32_t)c->r[0],1751); // 80106FC4
  if (crb(c,2)) { goto L_80107188; } // 80106FC8
  if (!crb(c,0)) { goto L_80106FDC; } // 80106FCC
  cmps(c,0,(int32_t)c->r[0],1750); // 80106FD0
  if (!crb(c,0)) { goto L_80107170; } // 80106FD4
  goto L_801071D4; // 80106FD8
L_80106FDC:;
  cmps(c,0,(int32_t)c->r[0],1754); // 80106FDC
  if (crb(c,2)) { goto L_801070EC; } // 80106FE0
  goto L_801071D4; // 80106FE4
L_80106FE8:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80106FE8
  c->r[4]=0u+0x00000000u; // 80106FEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80106FF0
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80106FF4
  c->ctr=c->r[12]; // 80106FF8
  if (true) { c->lr=0x80107000u; dispatch(c,c->ctr); } // 80106FFC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107000
  c->r[4]=0u+0x00000001u; // 80107004
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107008
  c->r[12]=R32(c->r[12]+0x000000B0u); // 8010700C
  c->ctr=c->r[12]; // 80107010
  if (true) { c->lr=0x80107018u; dispatch(c,c->ctr); } // 80107014
  c->r[4]=0u+0x803E0000u; // 80107018
  c->r[3]=c->r[1]+0x00000008u; // 8010701C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80107020
  c->r[4]=c->r[4]+0x00000089u; // 80107024
  c->lr=0x8010702Cu; f_802561D4(c); // 80107028
  c->r[30]=0u+0x80490000u; // 8010702C
  c->r[4]=c->r[1]+0x00000008u; // 80107030
  c->r[3]=c->r[30]+0xFFFFFAC4u; // 80107034
  c->r[5]=0u+0x00000000u; // 80107038
  c->lr=0x80107040u; f_801028D4(c); // 8010703C
  c->r[3]=c->r[30]+0xFFFFFAC4u; // 80107040
  c->lr=0x80107048u; f_80102C78(c); // 80107044
L_80107048:;
  c->r[3]=0u+0x80490000u; // 80107048
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 8010704C
  c->lr=0x80107054u; f_80102CC8(c); // 80107050
  cmps(c,0,(int32_t)c->r[3],0); // 80107054
  if (!crb(c,2)) { goto L_80107068; } // 80107058
  c->r[0]=0u+0x000006B3u; // 8010705C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80107060
  goto L_801071D4; // 80107064
L_80107068:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107068
  c->r[4]=0u+0x00000000u; // 8010706C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107070
  c->r[12]=R32(c->r[12]+0x000000B4u); // 80107074
  c->ctr=c->r[12]; // 80107078
  if (true) { c->lr=0x80107080u; dispatch(c,c->ctr); } // 8010707C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107080
  c->r[4]=0u+0x00000004u; // 80107084
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107088
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010708C
  c->r[12]=R32(c->r[12]+0x00000064u); // 80107090
  c->ctr=c->r[12]; // 80107094
  if (true) { c->lr=0x8010709Cu; dispatch(c,c->ctr); } // 80107098
  c->r[3]=0u+0x80590000u; // 8010709C
  c->r[3]=c->r[3]+0x00006714u; // 801070A0
  c->lr=0x801070A8u; f_80106DB4(c); // 801070A4
  c->r[0]=0u+0x000006C6u; // 801070A8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801070AC
  goto L_801071D4; // 801070B0
L_801070B4:;
  c->r[0]=0u+0x000006C7u; // 801070B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801070B8
  goto L_801071D4; // 801070BC
L_801070C0:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801070C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801070C4
  c->r[12]=R32(c->r[12]+0x000000C0u); // 801070C8
  c->ctr=c->r[12]; // 801070CC
  if (true) { c->lr=0x801070D4u; dispatch(c,c->ctr); } // 801070D0
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801070D4
  c->r[4]=0u+0x00000001u; // 801070D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801070DC
  c->r[12]=R32(c->r[12]+0x000000BCu); // 801070E0
  c->ctr=c->r[12]; // 801070E4
  if (true) { c->lr=0x801070ECu; dispatch(c,c->ctr); } // 801070E8
L_801070EC:;
  c->r[30]=0u+0x80590000u; // 801070EC
  c->r[30]=c->r[30]+0x00006714u; // 801070F0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801070F4
  cmps(c,0,(int32_t)c->r[0],0); // 801070F8
  if (!crb(c,2)) { goto L_80107188; } // 801070FC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107100
  c->r[4]=0u+0x00000004u; // 80107104
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107108
  c->r[12]=R32(c->r[12]+0x00000068u); // 8010710C
  c->ctr=c->r[12]; // 80107110
  if (true) { c->lr=0x80107118u; dispatch(c,c->ctr); } // 80107114
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80107118
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[0]);} // 8010711C
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 80107120
  cmps(c,0,(int32_t)c->r[0],0); // 80107124
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 80107128
  if (crb(c,2)) { goto L_8010717C; } // 8010712C
  c->r[31]=0u+0x804B0000u; // 80107130
  c->r[31]=c->r[31]+0x00005CC8u; // 80107134
  c->r[3]=c->r[31]+0x00020000u; // 80107138
  c->r[3]=c->r[3]+0xFFFFB0DCu; // 8010713C
  c->lr=0x80107144u; f_801D7C74(c); // 80107140
  c->r[3]=c->r[31]+0x00020000u; // 80107144
  c->r[3]=c->r[3]+0xFFFFB0DCu; // 80107148
  c->lr=0x80107150u; f_80231D98(c); // 8010714C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80107150
  cmps(c,0,(int32_t)c->r[0],2); // 80107154
  if (crb(c,1)) { goto L_80107164; } // 80107158
  c->r[0]=0u+0x00000002u; // 8010715C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80107160
L_80107164:;
  c->r[0]=0u+0x000006D6u; // 80107164
  W32(c->r[29]+0x00000004u,c->r[0]); // 80107168
  goto L_801071D4; // 8010716C
L_80107170:;
  c->r[0]=0u+0x000006D7u; // 80107170
  W32(c->r[3]+0x00000004u,c->r[0]); // 80107174
  goto L_801071D4; // 80107178
L_8010717C:;
  c->r[0]=0u+0x000006DAu; // 8010717C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80107180
  goto L_801071D4; // 80107184
L_80107188:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107188
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010718C
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80107190
  c->ctr=c->r[12]; // 80107194
  if (true) { c->lr=0x8010719Cu; dispatch(c,c->ctr); } // 80107198
  c->r[3]=0u+0x80490000u; // 8010719C
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 801071A0
  c->lr=0x801071A8u; f_801036D0(c); // 801071A4
  c->r[3]=0u+0x80590000u; // 801071A8
  c->r[3]=c->r[3]+0x00006714u; // 801071AC
  c->lr=0x801071B4u; f_801FCD4C(c); // 801071B0
  c->r[5]=0u+0x80490000u; // 801071B4
  c->r[4]=c->r[3]|c->r[3]; // 801071B8
  c->r[3]=c->r[5]+0x00004758u; // 801071BC
  c->lr=0x801071C4u; f_802933D8(c); // 801071C0
  c->r[0]=0u+0x00000000u; // 801071C4
  c->r[3]=0u+0x00000000u; // 801071C8
  W32(c->r[13]+0xFFFF95C8u,c->r[0]); // 801071CC
  goto L_801071D8; // 801071D0
L_801071D4:;
  c->r[3]=0u+0x00000001u; // 801071D4
L_801071D8:;
  c->r[11]=c->r[1]+0x000000A0u; // 801071D8
  c->lr=0x801071E0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801071DC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801071E0
  c->lr=c->r[0]; // 801071E4
  c->r[1]=c->r[1]+0x000000A0u; // 801071E8
  return; // 801071EC
}

// fn_801071F0
void f_801071F0(Ctx* __restrict c) {
  trace_call(0x801071F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801071F0
  c->r[0]=c->lr; // 801071F4
  c->r[4]=0u+0x00000000u; // 801071F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801071FC
  c->r[0]=0u+0x00000002u; // 80107200
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107204
  c->r[31]=c->r[3]|c->r[3]; // 80107208
  {uint32_t ea=c->r[3]+0x00000798u; W32(ea,c->r[0]); c->r[3]=ea;} // 8010720C
  c->lr=0x80107214u; f_8009D3D0(c); // 80107210
  c->r[4]=0u+0x80490000u; // 80107214
  c->r[4]=c->r[4]+0x00004758u; // 80107218
  c->lr=0x80107220u; f_8009D1D8(c); // 8010721C
  c->r[3]=c->r[31]+0x00000798u; // 80107220
  c->r[4]=0u+0x00000001u; // 80107224
  c->lr=0x8010722Cu; f_8009D3D0(c); // 80107228
  c->r[4]=R32(c->r[13]+0xFFFF95C8u); // 8010722C
  c->lr=0x80107234u; f_8009D220(c); // 80107230
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107234
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107238
  c->lr=c->r[0]; // 8010723C
  c->r[1]=c->r[1]+0x00000010u; // 80107240
  return; // 80107244
}

// fn_80107248
void f_80107248(Ctx* __restrict c) {
  trace_call(0x80107248u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107248
  c->r[0]=c->lr; // 8010724C
  W32(c->r[1]+0x00000094u,c->r[0]); // 80107250
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80107254
  c->r[30]=c->r[3]|c->r[3]; // 80107258
  c->r[0]=R32(c->r[3]+0x00000004u); // 8010725C
  cmps(c,0,(int32_t)c->r[0],1806); // 80107260
  if (crb(c,2)) { goto L_8010731C; } // 80107264
  if (!crb(c,0)) { goto L_80107284; } // 80107268
  cmps(c,0,(int32_t)c->r[0],1802); // 8010726C
  if (crb(c,2)) { goto L_801072E4; } // 80107270
  if (!crb(c,0)) { goto L_801073A4; } // 80107274
  cmps(c,0,(int32_t)c->r[0],0); // 80107278
  if (crb(c,2)) { goto L_8010729C; } // 8010727C
  goto L_801073A4; // 80107280
L_80107284:;
  cmps(c,0,(int32_t)c->r[0],1814); // 80107284
  if (crb(c,2)) { goto L_80107354; } // 80107288
  if (!crb(c,0)) { goto L_801073A4; } // 8010728C
  cmps(c,0,(int32_t)c->r[0],1808); // 80107290
  if (!crb(c,0)) { goto L_801073A4; } // 80107294
  goto L_80107328; // 80107298
L_8010729C:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010729C
  c->r[4]=0u+0x00000000u; // 801072A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801072A4
  c->r[12]=R32(c->r[12]+0x000000BCu); // 801072A8
  c->ctr=c->r[12]; // 801072AC
  if (true) { c->lr=0x801072B4u; dispatch(c,c->ctr); } // 801072B0
  c->r[4]=0u+0x803E0000u; // 801072B4
  c->r[3]=c->r[1]+0x00000008u; // 801072B8
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 801072BC
  c->r[4]=c->r[4]+0x0000009Cu; // 801072C0
  c->lr=0x801072C8u; f_802561D4(c); // 801072C4
  c->r[31]=0u+0x80490000u; // 801072C8
  c->r[4]=c->r[1]+0x00000008u; // 801072CC
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 801072D0
  c->r[5]=0u+0x00000000u; // 801072D4
  c->lr=0x801072DCu; f_801028D4(c); // 801072D8
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 801072DC
  c->lr=0x801072E4u; f_80102C78(c); // 801072E0
L_801072E4:;
  c->r[3]=0u+0x80490000u; // 801072E4
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 801072E8
  c->lr=0x801072F0u; f_80102CC8(c); // 801072EC
  cmps(c,0,(int32_t)c->r[3],0); // 801072F0
  if (!crb(c,2)) { goto L_80107304; } // 801072F4
  c->r[0]=0u+0x0000070Au; // 801072F8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801072FC
  goto L_801073A4; // 80107300
L_80107304:;
  c->r[3]=0u+0x805A0000u; // 80107304
  c->r[3]=c->r[3]+0xFFFFF7E4u; // 80107308
  c->lr=0x80107310u; f_80106DB4(c); // 8010730C
  c->r[0]=0u+0x0000070Eu; // 80107310
  W32(c->r[30]+0x00000004u,c->r[0]); // 80107314
  goto L_801073A4; // 80107318
L_8010731C:;
  c->r[0]=0u+0x0000070Fu; // 8010731C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80107320
  goto L_801073A4; // 80107324
L_80107328:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107328
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010732C
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80107330
  c->ctr=c->r[12]; // 80107334
  if (true) { c->lr=0x8010733Cu; dispatch(c,c->ctr); } // 80107338
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010733C
  c->r[4]=0u+0x00000001u; // 80107340
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107344
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80107348
  c->ctr=c->r[12]; // 8010734C
  if (true) { c->lr=0x80107354u; dispatch(c,c->ctr); } // 80107350
L_80107354:;
  c->r[3]=0u+0x805A0000u; // 80107354
  c->r[3]=c->r[3]+0xFFFFF7E4u; // 80107358
  c->r[0]=R32(c->r[3]+0x00000004u); // 8010735C
  cmps(c,0,(int32_t)c->r[0],0); // 80107360
  if (!crb(c,2)) { goto L_80107374; } // 80107364
  c->r[0]=0u+0x00000716u; // 80107368
  W32(c->r[30]+0x00000004u,c->r[0]); // 8010736C
  goto L_801073A4; // 80107370
L_80107374:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107374
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107378
  c->r[12]=R32(c->r[12]+0x000000C0u); // 8010737C
  c->ctr=c->r[12]; // 80107380
  if (true) { c->lr=0x80107388u; dispatch(c,c->ctr); } // 80107384
  c->r[0]=0u+0x00000000u; // 80107388
  c->r[3]=0u+0x80490000u; // 8010738C
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 80107390
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80107394
  c->lr=0x8010739Cu; f_801036D0(c); // 80107398
  c->r[3]=0u+0x00000000u; // 8010739C
  goto L_801073A8; // 801073A0
L_801073A4:;
  c->r[3]=0u+0x00000001u; // 801073A4
L_801073A8:;
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801073A8
  c->r[0]=R32(c->r[1]+0x00000094u); // 801073AC
  c->lr=c->r[0]; // 801073B0
  c->r[1]=c->r[1]+0x00000090u; // 801073B4
  return; // 801073B8
}

// fn_801073BC
void f_801073BC(Ctx* __restrict c) {
  trace_call(0x801073BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801073BC
  c->r[0]=c->lr; // 801073C0
  W32(c->r[1]+0x00000094u,c->r[0]); // 801073C4
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801073C8
  c->r[30]=c->r[3]|c->r[3]; // 801073CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801073D0
  cmps(c,0,(int32_t)c->r[0],1850); // 801073D4
  if (crb(c,2)) { goto L_80107490; } // 801073D8
  if (!crb(c,0)) { goto L_801073F8; } // 801073DC
  cmps(c,0,(int32_t)c->r[0],1846); // 801073E0
  if (crb(c,2)) { goto L_80107458; } // 801073E4
  if (!crb(c,0)) { goto L_80107518; } // 801073E8
  cmps(c,0,(int32_t)c->r[0],0); // 801073EC
  if (crb(c,2)) { goto L_80107410; } // 801073F0
  goto L_80107518; // 801073F4
L_801073F8:;
  cmps(c,0,(int32_t)c->r[0],1858); // 801073F8
  if (crb(c,2)) { goto L_801074C8; } // 801073FC
  if (!crb(c,0)) { goto L_80107518; } // 80107400
  cmps(c,0,(int32_t)c->r[0],1852); // 80107404
  if (!crb(c,0)) { goto L_80107518; } // 80107408
  goto L_8010749C; // 8010740C
L_80107410:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107410
  c->r[4]=0u+0x00000000u; // 80107414
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107418
  c->r[12]=R32(c->r[12]+0x000000BCu); // 8010741C
  c->ctr=c->r[12]; // 80107420
  if (true) { c->lr=0x80107428u; dispatch(c,c->ctr); } // 80107424
  c->r[4]=0u+0x803E0000u; // 80107428
  c->r[3]=c->r[1]+0x00000008u; // 8010742C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80107430
  c->r[4]=c->r[4]+0x0000009Cu; // 80107434
  c->lr=0x8010743Cu; f_802561D4(c); // 80107438
  c->r[31]=0u+0x80490000u; // 8010743C
  c->r[4]=c->r[1]+0x00000008u; // 80107440
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 80107444
  c->r[5]=0u+0x00000000u; // 80107448
  c->lr=0x80107450u; f_801028D4(c); // 8010744C
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 80107450
  c->lr=0x80107458u; f_80102C78(c); // 80107454
L_80107458:;
  c->r[3]=0u+0x80490000u; // 80107458
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 8010745C
  c->lr=0x80107464u; f_80102CC8(c); // 80107460
  cmps(c,0,(int32_t)c->r[3],0); // 80107464
  if (!crb(c,2)) { goto L_80107478; } // 80107468
  c->r[0]=0u+0x00000736u; // 8010746C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80107470
  goto L_80107518; // 80107474
L_80107478:;
  c->r[3]=0u+0x805A0000u; // 80107478
  c->r[3]=c->r[3]+0x00000514u; // 8010747C
  c->lr=0x80107484u; f_80106DB4(c); // 80107480
  c->r[0]=0u+0x0000073Au; // 80107484
  W32(c->r[30]+0x00000004u,c->r[0]); // 80107488
  goto L_80107518; // 8010748C
L_80107490:;
  c->r[0]=0u+0x0000073Bu; // 80107490
  W32(c->r[3]+0x00000004u,c->r[0]); // 80107494
  goto L_80107518; // 80107498
L_8010749C:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010749C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801074A0
  c->r[12]=R32(c->r[12]+0x000000C0u); // 801074A4
  c->ctr=c->r[12]; // 801074A8
  if (true) { c->lr=0x801074B0u; dispatch(c,c->ctr); } // 801074AC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801074B0
  c->r[4]=0u+0x00000001u; // 801074B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801074B8
  c->r[12]=R32(c->r[12]+0x000000BCu); // 801074BC
  c->ctr=c->r[12]; // 801074C0
  if (true) { c->lr=0x801074C8u; dispatch(c,c->ctr); } // 801074C4
L_801074C8:;
  c->r[3]=0u+0x805A0000u; // 801074C8
  c->r[3]=c->r[3]+0x00000514u; // 801074CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801074D0
  cmps(c,0,(int32_t)c->r[0],0); // 801074D4
  if (!crb(c,2)) { goto L_801074E8; } // 801074D8
  c->r[0]=0u+0x00000742u; // 801074DC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801074E0
  goto L_80107518; // 801074E4
L_801074E8:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801074E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801074EC
  c->r[12]=R32(c->r[12]+0x000000C0u); // 801074F0
  c->ctr=c->r[12]; // 801074F4
  if (true) { c->lr=0x801074FCu; dispatch(c,c->ctr); } // 801074F8
  c->r[0]=0u+0x00000000u; // 801074FC
  c->r[3]=0u+0x80490000u; // 80107500
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 80107504
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80107508
  c->lr=0x80107510u; f_801036D0(c); // 8010750C
  c->r[3]=0u+0x00000000u; // 80107510
  goto L_8010751C; // 80107514
L_80107518:;
  c->r[3]=0u+0x00000001u; // 80107518
L_8010751C:;
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010751C
  c->r[0]=R32(c->r[1]+0x00000094u); // 80107520
  c->lr=c->r[0]; // 80107524
  c->r[1]=c->r[1]+0x00000090u; // 80107528
  return; // 8010752C
}

// fn_80107530
void f_80107530(Ctx* __restrict c) {
  trace_call(0x80107530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107530
  c->r[0]=c->lr; // 80107534
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010753C
  c->r[31]=c->r[3]|c->r[3]; // 80107540
  c->r[0]=R32(c->r[3]+0x00000004u); // 80107544
  cmps(c,0,(int32_t)c->r[0],1887); // 80107548
  if (crb(c,2)) { goto L_801075B4; } // 8010754C
  if (!crb(c,0)) { goto L_8010756C; } // 80107550
  cmps(c,0,(int32_t)c->r[0],0); // 80107554
  if (crb(c,2)) { goto L_80107578; } // 80107558
  if (crb(c,0)) { goto L_801075F8; } // 8010755C
  cmps(c,0,(int32_t)c->r[0],1886); // 80107560
  if (!crb(c,0)) { goto L_801075A8; } // 80107564
  goto L_801075F8; // 80107568
L_8010756C:;
  cmps(c,0,(int32_t)c->r[0],1892); // 8010756C
  if (crb(c,2)) { goto L_801075B4; } // 80107570
  goto L_801075F8; // 80107574
L_80107578:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107578
  c->r[4]=0u+0x00000000u; // 8010757C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107580
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80107584
  c->ctr=c->r[12]; // 80107588
  if (true) { c->lr=0x80107590u; dispatch(c,c->ctr); } // 8010758C
  c->r[3]=0u+0x805D0000u; // 80107590
  c->r[3]=c->r[3]+0x00006F70u; // 80107594
  c->lr=0x8010759Cu; f_80106DB4(c); // 80107598
  c->r[0]=0u+0x0000075Eu; // 8010759C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801075A0
  goto L_801075F8; // 801075A4
L_801075A8:;
  c->r[0]=0u+0x0000075Fu; // 801075A8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801075AC
  goto L_801075F8; // 801075B0
L_801075B4:;
  c->r[4]=0u+0x805D0000u; // 801075B4
  c->r[4]=c->r[4]+0x00006F70u; // 801075B8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801075BC
  cmps(c,0,(int32_t)c->r[0],0); // 801075C0
  if (!crb(c,2)) { goto L_801075D4; } // 801075C4
  c->r[0]=0u+0x00000764u; // 801075C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801075CC
  goto L_801075F8; // 801075D0
L_801075D4:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801075D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801075D8
  c->r[12]=R32(c->r[12]+0x000000C0u); // 801075DC
  c->ctr=c->r[12]; // 801075E0
  if (true) { c->lr=0x801075E8u; dispatch(c,c->ctr); } // 801075E4
  c->r[0]=0u+0x00000000u; // 801075E8
  c->r[3]=0u+0x00000000u; // 801075EC
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 801075F0
  goto L_801075FC; // 801075F4
L_801075F8:;
  c->r[3]=0u+0x00000001u; // 801075F8
L_801075FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801075FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107600
  c->lr=c->r[0]; // 80107604
  c->r[1]=c->r[1]+0x00000010u; // 80107608
  return; // 8010760C
}

// fn_80107610
void f_80107610(Ctx* __restrict c) {
  trace_call(0x80107610u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107610
  c->r[0]=c->lr; // 80107614
  W32(c->r[1]+0x00000094u,c->r[0]); // 80107618
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010761C
  c->r[30]=c->r[3]|c->r[3]; // 80107620
  c->r[0]=R32(c->r[3]+0x00000004u); // 80107624
  cmps(c,0,(int32_t)c->r[0],1927); // 80107628
  if (crb(c,2)) { goto L_801076E4; } // 8010762C
  if (!crb(c,0)) { goto L_8010764C; } // 80107630
  cmps(c,0,(int32_t)c->r[0],1922); // 80107634
  if (crb(c,2)) { goto L_801076AC; } // 80107638
  if (!crb(c,0)) { goto L_80107770; } // 8010763C
  cmps(c,0,(int32_t)c->r[0],0); // 80107640
  if (crb(c,2)) { goto L_80107664; } // 80107644
  goto L_80107770; // 80107648
L_8010764C:;
  cmps(c,0,(int32_t)c->r[0],1935); // 8010764C
  if (crb(c,2)) { goto L_8010771C; } // 80107650
  if (!crb(c,0)) { goto L_80107770; } // 80107654
  cmps(c,0,(int32_t)c->r[0],1929); // 80107658
  if (!crb(c,0)) { goto L_80107770; } // 8010765C
  goto L_801076F0; // 80107660
L_80107664:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107664
  c->r[4]=0u+0x00000000u; // 80107668
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010766C
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80107670
  c->ctr=c->r[12]; // 80107674
  if (true) { c->lr=0x8010767Cu; dispatch(c,c->ctr); } // 80107678
  c->r[4]=0u+0x803E0000u; // 8010767C
  c->r[3]=c->r[1]+0x00000008u; // 80107680
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80107684
  c->r[4]=c->r[4]+0x000000AFu; // 80107688
  c->lr=0x80107690u; f_802561D4(c); // 8010768C
  c->r[31]=0u+0x80490000u; // 80107690
  c->r[4]=c->r[1]+0x00000008u; // 80107694
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 80107698
  c->r[5]=0u+0x00000000u; // 8010769C
  c->lr=0x801076A4u; f_801028D4(c); // 801076A0
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 801076A4
  c->lr=0x801076ACu; f_80102C78(c); // 801076A8
L_801076AC:;
  c->r[3]=0u+0x80490000u; // 801076AC
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 801076B0
  c->lr=0x801076B8u; f_80102CC8(c); // 801076B4
  cmps(c,0,(int32_t)c->r[3],0); // 801076B8
  if (!crb(c,2)) { goto L_801076CC; } // 801076BC
  c->r[0]=0u+0x00000782u; // 801076C0
  W32(c->r[30]+0x00000004u,c->r[0]); // 801076C4
  goto L_80107770; // 801076C8
L_801076CC:;
  c->r[3]=0u+0x805D0000u; // 801076CC
  c->r[3]=c->r[3]+0x00006CE0u; // 801076D0
  c->lr=0x801076D8u; f_80106DB4(c); // 801076D4
  c->r[0]=0u+0x00000787u; // 801076D8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801076DC
  goto L_80107770; // 801076E0
L_801076E4:;
  c->r[0]=0u+0x00000788u; // 801076E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801076E8
  goto L_80107770; // 801076EC
L_801076F0:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801076F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801076F4
  c->r[12]=R32(c->r[12]+0x000000C0u); // 801076F8
  c->ctr=c->r[12]; // 801076FC
  if (true) { c->lr=0x80107704u; dispatch(c,c->ctr); } // 80107700
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107704
  c->r[4]=0u+0x00000001u; // 80107708
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010770C
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80107710
  c->ctr=c->r[12]; // 80107714
  if (true) { c->lr=0x8010771Cu; dispatch(c,c->ctr); } // 80107718
L_8010771C:;
  c->r[31]=0u+0x805D0000u; // 8010771C
  c->r[31]=c->r[31]+0x00006CE0u; // 80107720
  c->r[0]=R32(c->r[31]+0x00000004u); // 80107724
  cmps(c,0,(int32_t)c->r[0],0); // 80107728
  if (!crb(c,2)) { goto L_8010773C; } // 8010772C
  c->r[0]=0u+0x0000078Fu; // 80107730
  W32(c->r[30]+0x00000004u,c->r[0]); // 80107734
  goto L_80107770; // 80107738
L_8010773C:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010773C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107740
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80107744
  c->ctr=c->r[12]; // 80107748
  if (true) { c->lr=0x80107750u; dispatch(c,c->ctr); } // 8010774C
  c->r[3]=c->r[31]|c->r[31]; // 80107750
  c->lr=0x80107758u; f_8021B024(c); // 80107754
  W32(c->r[13]+0xFFFF9580u,c->r[3]); // 80107758
  c->r[3]=0u+0x80490000u; // 8010775C
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80107760
  c->lr=0x80107768u; f_801036D0(c); // 80107764
  c->r[3]=0u+0x00000000u; // 80107768
  goto L_80107774; // 8010776C
L_80107770:;
  c->r[3]=0u+0x00000001u; // 80107770
L_80107774:;
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80107774
  c->r[0]=R32(c->r[1]+0x00000094u); // 80107778
  c->lr=c->r[0]; // 8010777C
  c->r[1]=c->r[1]+0x00000090u; // 80107780
  return; // 80107784
}

// fn_80107788
void f_80107788(Ctx* __restrict c) {
  trace_call(0x80107788u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107788
  c->r[0]=c->lr; // 8010778C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107790
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107794
  c->r[31]=c->r[3]|c->r[3]; // 80107798
  c->r[0]=R32(c->r[3]+0x00000004u); // 8010779C
  cmps(c,0,(int32_t)c->r[0],1961); // 801077A0
  if (crb(c,2)) { goto L_8010780C; } // 801077A4
  if (!crb(c,0)) { goto L_801077C4; } // 801077A8
  cmps(c,0,(int32_t)c->r[0],0); // 801077AC
  if (crb(c,2)) { goto L_801077D0; } // 801077B0
  if (crb(c,0)) { goto L_80107850; } // 801077B4
  cmps(c,0,(int32_t)c->r[0],1960); // 801077B8
  if (!crb(c,0)) { goto L_80107800; } // 801077BC
  goto L_80107850; // 801077C0
L_801077C4:;
  cmps(c,0,(int32_t)c->r[0],1966); // 801077C4
  if (crb(c,2)) { goto L_8010780C; } // 801077C8
  goto L_80107850; // 801077CC
L_801077D0:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801077D0
  c->r[4]=0u+0x00000000u; // 801077D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801077D8
  c->r[12]=R32(c->r[12]+0x000000BCu); // 801077DC
  c->ctr=c->r[12]; // 801077E0
  if (true) { c->lr=0x801077E8u; dispatch(c,c->ctr); } // 801077E4
  c->r[3]=0u+0x805D0000u; // 801077E8
  c->r[3]=c->r[3]+0x00006E30u; // 801077EC
  c->lr=0x801077F4u; f_80106DB4(c); // 801077F0
  c->r[0]=0u+0x000007A8u; // 801077F4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801077F8
  goto L_80107850; // 801077FC
L_80107800:;
  c->r[0]=0u+0x000007A9u; // 80107800
  W32(c->r[3]+0x00000004u,c->r[0]); // 80107804
  goto L_80107850; // 80107808
L_8010780C:;
  c->r[4]=0u+0x805D0000u; // 8010780C
  c->r[4]=c->r[4]+0x00006E30u; // 80107810
  c->r[0]=R32(c->r[4]+0x00000004u); // 80107814
  cmps(c,0,(int32_t)c->r[0],0); // 80107818
  if (!crb(c,2)) { goto L_8010782C; } // 8010781C
  c->r[0]=0u+0x000007AEu; // 80107820
  W32(c->r[3]+0x00000004u,c->r[0]); // 80107824
  goto L_80107850; // 80107828
L_8010782C:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010782C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107830
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80107834
  c->ctr=c->r[12]; // 80107838
  if (true) { c->lr=0x80107840u; dispatch(c,c->ctr); } // 8010783C
  c->r[0]=0u+0x00000000u; // 80107840
  c->r[3]=0u+0x00000000u; // 80107844
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 80107848
  goto L_80107854; // 8010784C
L_80107850:;
  c->r[3]=0u+0x00000001u; // 80107850
L_80107854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107858
  c->lr=c->r[0]; // 8010785C
  c->r[1]=c->r[1]+0x00000010u; // 80107860
  return; // 80107864
}

// fn_80107868
void f_80107868(Ctx* __restrict c) {
  trace_call(0x80107868u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107868
  c->r[0]=c->lr; // 8010786C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107874
  c->r[31]=c->r[3]|c->r[3]; // 80107878
  c->r[0]=R32(c->r[3]+0x00000004u); // 8010787C
  cmps(c,0,(int32_t)c->r[0],2000); // 80107880
  if (crb(c,2)) { goto L_80107928; } // 80107884
  if (!crb(c,0)) { goto L_801078A4; } // 80107888
  cmps(c,0,(int32_t)c->r[0],1995); // 8010788C
  if (crb(c,2)) { goto L_801078E8; } // 80107890
  if (!crb(c,0)) { goto L_801079B8; } // 80107894
  cmps(c,0,(int32_t)c->r[0],0); // 80107898
  if (crb(c,2)) { goto L_801078BC; } // 8010789C
  goto L_801079B8; // 801078A0
L_801078A4:;
  cmps(c,0,(int32_t)c->r[0],2008); // 801078A4
  if (crb(c,2)) { goto L_80107960; } // 801078A8
  if (!crb(c,0)) { goto L_801079B8; } // 801078AC
  cmps(c,0,(int32_t)c->r[0],2002); // 801078B0
  if (!crb(c,0)) { goto L_801079B8; } // 801078B4
  goto L_80107934; // 801078B8
L_801078BC:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801078BC
  c->r[4]=0u+0x00000000u; // 801078C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801078C4
  c->r[12]=R32(c->r[12]+0x000000BCu); // 801078C8
  c->ctr=c->r[12]; // 801078CC
  if (true) { c->lr=0x801078D4u; dispatch(c,c->ctr); } // 801078D0
  c->r[3]=0u+0x804B0000u; // 801078D4
  c->r[3]=c->r[3]+0x00005CC8u; // 801078D8
  c->r[3]=c->r[3]+0x00020000u; // 801078DC
  c->r[3]=c->r[3]+0xFFFFB0DCu; // 801078E0
  c->lr=0x801078E8u; f_80231CD4(c); // 801078E4
L_801078E8:;
  c->r[3]=0u+0x804B0000u; // 801078E8
  c->r[3]=c->r[3]+0x00005CC8u; // 801078EC
  c->r[3]=c->r[3]+0x00020000u; // 801078F0
  c->r[3]=c->r[3]+0xFFFFB0DCu; // 801078F4
  c->lr=0x801078FCu; f_80231D28(c); // 801078F8
  cmps(c,0,(int32_t)c->r[3],0); // 801078FC
  if (!crb(c,2)) { goto L_80107910; } // 80107900
  c->r[0]=0u+0x000007CBu; // 80107904
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107908
  goto L_801079B8; // 8010790C
L_80107910:;
  c->r[3]=0u+0x805E0000u; // 80107910
  c->r[3]=c->r[3]+0xFFFFD3C8u; // 80107914
  c->lr=0x8010791Cu; f_80106DB4(c); // 80107918
  c->r[0]=0u+0x000007D0u; // 8010791C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107920
  goto L_801079B8; // 80107924
L_80107928:;
  c->r[0]=0u+0x000007D1u; // 80107928
  W32(c->r[3]+0x00000004u,c->r[0]); // 8010792C
  goto L_801079B8; // 80107930
L_80107934:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107934
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107938
  c->r[12]=R32(c->r[12]+0x000000C0u); // 8010793C
  c->ctr=c->r[12]; // 80107940
  if (true) { c->lr=0x80107948u; dispatch(c,c->ctr); } // 80107944
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107948
  c->r[4]=0u+0x00000001u; // 8010794C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107950
  c->r[12]=R32(c->r[12]+0x000000BCu); // 80107954
  c->ctr=c->r[12]; // 80107958
  if (true) { c->lr=0x80107960u; dispatch(c,c->ctr); } // 8010795C
L_80107960:;
  c->r[3]=0u+0x805E0000u; // 80107960
  c->r[3]=c->r[3]+0xFFFFD3C8u; // 80107964
  c->r[0]=R32(c->r[3]+0x00000004u); // 80107968
  cmps(c,0,(int32_t)c->r[0],0); // 8010796C
  if (!crb(c,2)) { goto L_80107980; } // 80107970
  c->r[0]=0u+0x000007D8u; // 80107974
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107978
  goto L_801079B8; // 8010797C
L_80107980:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107980
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107984
  c->r[12]=R32(c->r[12]+0x000000C0u); // 80107988
  c->ctr=c->r[12]; // 8010798C
  if (true) { c->lr=0x80107994u; dispatch(c,c->ctr); } // 80107990
  c->r[3]=0u+0x804B0000u; // 80107994
  c->r[3]=c->r[3]+0x00005CC8u; // 80107998
  c->r[3]=c->r[3]+0x00020000u; // 8010799C
  c->r[3]=c->r[3]+0xFFFFB0DCu; // 801079A0
  c->lr=0x801079A8u; f_80231D98(c); // 801079A4
  c->r[0]=0u+0x00000000u; // 801079A8
  c->r[3]=0u+0x00000000u; // 801079AC
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 801079B0
  goto L_801079BC; // 801079B4
L_801079B8:;
  c->r[3]=0u+0x00000001u; // 801079B8
L_801079BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801079BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801079C0
  c->lr=c->r[0]; // 801079C4
  c->r[1]=c->r[1]+0x00000010u; // 801079C8
  return; // 801079CC
}

// fn_801079D0
void f_801079D0(Ctx* __restrict c) {
  trace_call(0x801079D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801079D0
  c->r[0]=c->lr; // 801079D4
  c->r[4]=0u+0x00000000u; // 801079D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801079DC
  c->r[0]=0u+0x00000001u; // 801079E0
  {uint32_t ea=c->r[3]+0x00000798u; W32(ea,c->r[0]); c->r[3]=ea;} // 801079E4
  c->lr=0x801079ECu; f_8009D3D0(c); // 801079E8
  c->r[4]=R32(c->r[13]+0xFFFF9580u); // 801079EC
  c->lr=0x801079F4u; f_8009D220(c); // 801079F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801079F4
  c->lr=c->r[0]; // 801079F8
  c->r[1]=c->r[1]+0x00000010u; // 801079FC
  return; // 80107A00
}

// fn_80107A04
void f_80107A04(Ctx* __restrict c) {
  trace_call(0x80107A04u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107A04
  c->r[0]=c->lr; // 80107A08
  c->r[4]=0u+0x00000000u; // 80107A0C
  W32(c->r[1]+0x00000114u,c->r[0]); // 80107A10
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 80107A14
  c->r[31]=c->r[3]|c->r[3]; // 80107A18
  c->r[3]=c->r[3]+0x00000008u; // 80107A1C
  c->lr=0x80107A24u; f_8009D3D0(c); // 80107A20
  c->lr=0x80107A28u; f_8009D0F4(c); // 80107A24
  c->r[0]=R32(c->r[31]+0x00000004u); // 80107A28
  cmps(c,0,(int32_t)c->r[0],2058); // 80107A2C
  if (crb(c,2)) { goto L_80107A88; } // 80107A30
  if (!crb(c,0)) { goto L_80107AAC; } // 80107A34
  cmps(c,0,(int32_t)c->r[0],0); // 80107A38
  if (crb(c,2)) { goto L_80107A44; } // 80107A3C
  goto L_80107AAC; // 80107A40
L_80107A44:;
  c->r[4]=0u+0x803E0000u; // 80107A44
  c->r[5]=c->r[3]|c->r[3]; // 80107A48
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80107A4C
  c->r[3]=c->r[1]+0x00000008u; // 80107A50
  c->r[4]=c->r[4]+0x000000C4u; // 80107A54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80107A58
  c->lr=0x80107A60u; f_80291CC4(c); // 80107A5C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107A60
  c->r[4]=c->r[1]+0x00000008u; // 80107A64
  c->r[5]=0u+0x00000000u; // 80107A68
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107A6C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80107A70
  c->ctr=c->r[12]; // 80107A74
  if (true) { c->lr=0x80107A7Cu; dispatch(c,c->ctr); } // 80107A78
L_80107A7C:;
  c->r[0]=0u+0x0000080Au; // 80107A7C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107A80
  goto L_80107AAC; // 80107A84
L_80107A88:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107A88
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107A8C
  c->r[12]=R32(c->r[12]+0x00000050u); // 80107A90
  c->ctr=c->r[12]; // 80107A94
  if (true) { c->lr=0x80107A9Cu; dispatch(c,c->ctr); } // 80107A98
  cmps(c,0,(int32_t)c->r[3],0); // 80107A9C
  if (crb(c,2)) { IRQCHK(c); goto L_80107A7C; } // 80107AA0
  c->r[3]=0u+0x00000000u; // 80107AA4
  goto L_80107AB0; // 80107AA8
L_80107AAC:;
  c->r[3]=0u+0x00000001u; // 80107AAC
L_80107AB0:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 80107AB0
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 80107AB4
  c->lr=c->r[0]; // 80107AB8
  c->r[1]=c->r[1]+0x00000110u; // 80107ABC
  return; // 80107AC0
}

// fn_80107AC4
void f_80107AC4(Ctx* __restrict c) {
  trace_call(0x80107AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107AC4
  c->r[0]=c->lr; // 80107AC8
  c->r[4]=0u+0x00000000u; // 80107ACC
  W32(c->r[1]+0x00000124u,c->r[0]); // 80107AD0
  {uint32_t ea=c->r[1]+0x00000114u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80107AD4
  c->r[29]=c->r[3]|c->r[3]; // 80107AD8
  c->r[3]=c->r[3]+0x00000008u; // 80107ADC
  c->lr=0x80107AE4u; f_8009D3D0(c); // 80107AE0
  c->lr=0x80107AE8u; f_8009D0F4(c); // 80107AE4
  c->r[31]=c->r[3]|c->r[3]; // 80107AE8
  c->r[3]=c->r[29]+0x00000008u; // 80107AEC
  c->r[4]=0u+0x00000001u; // 80107AF0
  c->lr=0x80107AF8u; f_8009D3D0(c); // 80107AF4
  c->lr=0x80107AFCu; f_8009D188(c); // 80107AF8
  c->r[0]=R32(c->r[29]+0x00000004u); // 80107AFC
  c->r[30]=c->r[3]|c->r[3]; // 80107B00
  cmps(c,0,(int32_t)c->r[0],2092); // 80107B04
  if (crb(c,2)) { goto L_80107B60; } // 80107B08
  if (!crb(c,0)) { goto L_80107B84; } // 80107B0C
  cmps(c,0,(int32_t)c->r[0],0); // 80107B10
  if (crb(c,2)) { goto L_80107B1C; } // 80107B14
  goto L_80107B84; // 80107B18
L_80107B1C:;
  c->r[4]=0u+0x803E0000u; // 80107B1C
  c->r[5]=c->r[31]|c->r[31]; // 80107B20
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80107B24
  c->r[3]=c->r[1]+0x00000008u; // 80107B28
  c->r[4]=c->r[4]+0x000000C4u; // 80107B2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80107B30
  c->lr=0x80107B38u; f_80291CC4(c); // 80107B34
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107B38
  c->r[5]=c->r[30]|c->r[30]; // 80107B3C
  c->r[4]=c->r[1]+0x00000008u; // 80107B40
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107B44
  c->r[12]=R32(c->r[12]+0x00000038u); // 80107B48
  c->ctr=c->r[12]; // 80107B4C
  if (true) { c->lr=0x80107B54u; dispatch(c,c->ctr); } // 80107B50
L_80107B54:;
  c->r[0]=0u+0x0000082Cu; // 80107B54
  W32(c->r[29]+0x00000004u,c->r[0]); // 80107B58
  goto L_80107B84; // 80107B5C
L_80107B60:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107B60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107B64
  c->r[12]=R32(c->r[12]+0x00000050u); // 80107B68
  c->ctr=c->r[12]; // 80107B6C
  if (true) { c->lr=0x80107B74u; dispatch(c,c->ctr); } // 80107B70
  cmps(c,0,(int32_t)c->r[3],0); // 80107B74
  if (crb(c,2)) { IRQCHK(c); goto L_80107B54; } // 80107B78
  c->r[3]=0u+0x00000000u; // 80107B7C
  goto L_80107B88; // 80107B80
L_80107B84:;
  c->r[3]=0u+0x00000001u; // 80107B84
L_80107B88:;
  {uint32_t ea=c->r[1]+0x00000114u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80107B88
  c->r[0]=R32(c->r[1]+0x00000124u); // 80107B8C
  c->lr=c->r[0]; // 80107B90
  c->r[1]=c->r[1]+0x00000120u; // 80107B94
  return; // 80107B98
}

// fn_80107B9C
void f_80107B9C(Ctx* __restrict c) {
  trace_call(0x80107B9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107B9C
  c->r[0]=c->lr; // 80107BA0
  W32(c->r[1]+0x00000094u,c->r[0]); // 80107BA4
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80107BA8
  c->r[30]=c->r[3]|c->r[3]; // 80107BAC
  c->r[0]=R32(c->r[3]+0x00000004u); // 80107BB0
  cmps(c,0,(int32_t)c->r[0],2137); // 80107BB4
  if (crb(c,2)) { goto L_80107C6C; } // 80107BB8
  if (!crb(c,0)) { goto L_80107BD8; } // 80107BBC
  cmps(c,0,(int32_t)c->r[0],2132); // 80107BC0
  if (crb(c,2)) { goto L_80107C20; } // 80107BC4
  if (!crb(c,0)) { goto L_80107CBC; } // 80107BC8
  cmps(c,0,(int32_t)c->r[0],0); // 80107BCC
  if (crb(c,2)) { goto L_80107BF0; } // 80107BD0
  goto L_80107CBC; // 80107BD4
L_80107BD8:;
  cmps(c,0,(int32_t)c->r[0],2143); // 80107BD8
  if (crb(c,2)) { goto L_80107C78; } // 80107BDC
  if (!crb(c,0)) { goto L_80107CBC; } // 80107BE0
  cmps(c,0,(int32_t)c->r[0],2139); // 80107BE4
  if (!crb(c,0)) { goto L_80107CBC; } // 80107BE8
  goto L_80107C78; // 80107BEC
L_80107BF0:;
  c->r[4]=0u+0x803E0000u; // 80107BF0
  c->r[3]=c->r[1]+0x00000008u; // 80107BF4
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80107BF8
  c->r[4]=c->r[4]+0x000000CBu; // 80107BFC
  c->lr=0x80107C04u; f_802561D4(c); // 80107C00
  c->r[31]=0u+0x80490000u; // 80107C04
  c->r[4]=c->r[1]+0x00000008u; // 80107C08
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 80107C0C
  c->r[5]=0u+0x00000000u; // 80107C10
  c->lr=0x80107C18u; f_801028D4(c); // 80107C14
  c->r[3]=c->r[31]+0xFFFFFAC4u; // 80107C18
  c->lr=0x80107C20u; f_80102C78(c); // 80107C1C
L_80107C20:;
  c->r[3]=0u+0x80490000u; // 80107C20
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80107C24
  c->lr=0x80107C2Cu; f_80102CC8(c); // 80107C28
  cmps(c,0,(int32_t)c->r[3],0); // 80107C2C
  if (!crb(c,2)) { goto L_80107C40; } // 80107C30
  c->r[0]=0u+0x00000854u; // 80107C34
  W32(c->r[30]+0x00000004u,c->r[0]); // 80107C38
  goto L_80107CBC; // 80107C3C
L_80107C40:;
  c->r[3]=0u+0x803E0000u; // 80107C40
  c->r[4]=0u+0x00000002u; // 80107C44
  c->r[3]=c->r[3]+0xFFFFD1C8u; // 80107C48
  c->r[3]=c->r[3]+0x000000E0u; // 80107C4C
  c->lr=0x80107C54u; f_80048D34(c); // 80107C50
  c->r[3]=0u+0x805D0000u; // 80107C54
  c->r[3]=c->r[3]+0xFFFFE410u; // 80107C58
  c->lr=0x80107C60u; f_80106DB4(c); // 80107C5C
  c->r[0]=0u+0x00000859u; // 80107C60
  W32(c->r[30]+0x00000004u,c->r[0]); // 80107C64
  goto L_80107CBC; // 80107C68
L_80107C6C:;
  c->r[0]=0u+0x0000085Au; // 80107C6C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80107C70
  goto L_80107CBC; // 80107C74
L_80107C78:;
  c->r[31]=0u+0x805D0000u; // 80107C78
  c->r[31]=c->r[31]+0xFFFFE410u; // 80107C7C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80107C80
  cmps(c,0,(int32_t)c->r[0],0); // 80107C84
  if (!crb(c,2)) { goto L_80107C98; } // 80107C88
  c->r[0]=0u+0x0000085Fu; // 80107C8C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80107C90
  goto L_80107CBC; // 80107C94
L_80107C98:;
  c->r[3]=0u+0x0000001Eu; // 80107C98
  c->lr=0x80107CA0u; f_80048E1C(c); // 80107C9C
  c->r[0]=R8(c->r[31]+0x00000128u); // 80107CA0
  c->r[3]=0u+0x80490000u; // 80107CA4
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80107CA8
  W32(c->r[13]+0xFFFF9580u,c->r[0]); // 80107CAC
  c->lr=0x80107CB4u; f_801036D0(c); // 80107CB0
  c->r[3]=0u+0x00000000u; // 80107CB4
  goto L_80107CC0; // 80107CB8
L_80107CBC:;
  c->r[3]=0u+0x00000001u; // 80107CBC
L_80107CC0:;
  {uint32_t ea=c->r[1]+0x00000088u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80107CC0
  c->r[0]=R32(c->r[1]+0x00000094u); // 80107CC4
  c->lr=c->r[0]; // 80107CC8
  c->r[1]=c->r[1]+0x00000090u; // 80107CCC
  return; // 80107CD0
}

// fn_80107CD4
void f_80107CD4(Ctx* __restrict c) {
  trace_call(0x80107CD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107CD4
  c->r[0]=c->lr; // 80107CD8
  c->r[3]=0u+0x00000000u; // 80107CDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107CE0
  c->lr=0x80107CE8u; f_80048F6C(c); // 80107CE4
  c->r[3]=0u+0x00000001u; // 80107CE8
  c->lr=0x80107CF0u; f_80048F6C(c); // 80107CEC
  c->r[3]=0u+0x00000002u; // 80107CF0
  c->lr=0x80107CF8u; f_80048F6C(c); // 80107CF4
  c->r[3]=R32(c->r[13]+0xFFFF9738u); // 80107CF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107CFC
  c->r[12]=R32(c->r[12]+0x00000008u); // 80107D00
  c->ctr=c->r[12]; // 80107D04
  if (true) { c->lr=0x80107D0Cu; dispatch(c,c->ctr); } // 80107D08
  c->r[3]=R32(c->r[13]+0xFFFF9760u); // 80107D0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107D10
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80107D14
  c->ctr=c->r[12]; // 80107D18
  if (true) { c->lr=0x80107D20u; dispatch(c,c->ctr); } // 80107D1C
  c->r[6]=R32(c->r[2]+0xFFFF83ECu); // 80107D20
  c->r[4]=0u+0x0000000Au; // 80107D24
  c->r[5]=R32(c->r[2]+0xFFFF83E8u); // 80107D28
  c->r[3]=R32(c->r[2]+0xFFFF83DCu); // 80107D2C
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 80107D30
  c->r[5]=c->r[6]|c->r[5]; // 80107D34
  c->r[7]=R32(c->r[2]+0xFFFF83F4u); // 80107D38
  c->r[0]=c->r[3]|c->r[0]; // 80107D3C
  c->r[6]=R32(c->r[2]+0xFFFF83F0u); // 80107D40
  c->r[0]=c->r[5]|c->r[0]; // 80107D44
  c->r[3]=c->r[7]|c->r[6]; // 80107D48
  c->r[3]=c->r[3]|c->r[0]; // 80107D4C
  c->lr=0x80107D54u; f_80049228(c); // 80107D50
  c->lr=0x80107D58u; f_80066EFC(c); // 80107D54
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80107D58
  c->r[4]=0u+0x00000001u; // 80107D5C
  c->r[3]=c->r[3]+0x00000088u; // 80107D60
  c->f[2]=c->f[1]; // 80107D64
  c->f[3]=c->f[1]; // 80107D68
  c->f[4]=c->f[1]; // 80107D6C
  c->lr=0x80107D74u; f_800411B4(c); // 80107D70
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 80107D74
  c->r[4]=0u+0x00000000u; // 80107D78
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107D7C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80107D80
  c->ctr=c->r[12]; // 80107D84
  if (true) { c->lr=0x80107D8Cu; dispatch(c,c->ctr); } // 80107D88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107D8C
  c->lr=c->r[0]; // 80107D90
  c->r[1]=c->r[1]+0x00000010u; // 80107D94
  return; // 80107D98
}

// fn_80107D9C
void f_80107D9C(Ctx* __restrict c) {
  trace_call(0x80107D9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107D9C
  c->r[0]=c->lr; // 80107DA0
  c->r[4]=0u+0x00000000u; // 80107DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107DAC
  c->r[31]=c->r[3]|c->r[3]; // 80107DB0
  c->r[3]=c->r[3]+0x00000008u; // 80107DB4
  c->lr=0x80107DBCu; f_8009D3D0(c); // 80107DB8
  c->lr=0x80107DC0u; f_8009D188(c); // 80107DBC
  c->r[0]=R32(c->r[31]+0x00000004u); // 80107DC0
  cmps(c,0,(int32_t)c->r[0],2280); // 80107DC4
  if (crb(c,2)) { goto L_80107E38; } // 80107DC8
  if (!crb(c,0)) { goto L_80107DE8; } // 80107DCC
  cmps(c,0,(int32_t)c->r[0],0); // 80107DD0
  if (crb(c,2)) { goto L_80107E00; } // 80107DD4
  if (crb(c,0)) { goto L_80107E98; } // 80107DD8
  cmps(c,0,(int32_t)c->r[0],2279); // 80107DDC
  if (!crb(c,0)) { goto L_80107E2C; } // 80107DE0
  goto L_80107E98; // 80107DE4
L_80107DE8:;
  cmps(c,0,(int32_t)c->r[0],2283); // 80107DE8
  if (crb(c,2)) { goto L_80107E5C; } // 80107DEC
  if (!crb(c,0)) { goto L_80107E98; } // 80107DF0
  cmps(c,0,(int32_t)c->r[0],2282); // 80107DF4
  if (!crb(c,0)) { goto L_80107E50; } // 80107DF8
  goto L_80107E44; // 80107DFC
L_80107E00:;
  cmps(c,0,(int32_t)c->r[3],0); // 80107E00
  if (crb(c,2)) { goto L_80107E78; } // 80107E04
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107E08
  c->r[4]=0u+0x00000007u; // 80107E0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107E10
  c->r[12]=R32(c->r[12]+0x000000B8u); // 80107E14
  c->ctr=c->r[12]; // 80107E18
  if (true) { c->lr=0x80107E20u; dispatch(c,c->ctr); } // 80107E1C
  c->r[0]=0u+0x000008E7u; // 80107E20
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107E24
  goto L_80107E98; // 80107E28
L_80107E2C:;
  c->r[0]=0u+0x000008E8u; // 80107E2C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107E30
  goto L_80107E98; // 80107E34
L_80107E38:;
  c->r[0]=0u+0x000008E9u; // 80107E38
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107E3C
  goto L_80107E98; // 80107E40
L_80107E44:;
  c->r[0]=0u+0x000008EAu; // 80107E44
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107E48
  goto L_80107E98; // 80107E4C
L_80107E50:;
  c->r[0]=0u+0x000008EBu; // 80107E50
  W32(c->r[31]+0x00000004u,c->r[0]); // 80107E54
  goto L_80107E98; // 80107E58
L_80107E5C:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107E5C
  c->r[4]=0u+0x00000001u; // 80107E60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107E64
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80107E68
  c->ctr=c->r[12]; // 80107E6C
  if (true) { c->lr=0x80107E74u; dispatch(c,c->ctr); } // 80107E70
  goto L_80107E90; // 80107E74
L_80107E78:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80107E78
  c->r[4]=0u+0x00000000u; // 80107E7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80107E80
  c->r[12]=R32(c->r[12]+0x000000B4u); // 80107E84
  c->ctr=c->r[12]; // 80107E88
  if (true) { c->lr=0x80107E90u; dispatch(c,c->ctr); } // 80107E8C
L_80107E90:;
  c->r[3]=0u+0x00000000u; // 80107E90
  goto L_80107E9C; // 80107E94
L_80107E98:;
  c->r[3]=0u+0x00000001u; // 80107E98
L_80107E9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107E9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107EA0
  c->lr=c->r[0]; // 80107EA4
  c->r[1]=c->r[1]+0x00000010u; // 80107EA8
  return; // 80107EAC
}

// fn_80107EB0
void f_80107EB0(Ctx* __restrict c) {
  trace_call(0x80107EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107EB0
  c->r[0]=c->lr; // 80107EB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107EB8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80107EBC
  c->r[30]=c->r[3]|c->r[3]; // 80107EC0
  c->r[0]=R32(c->r[3]+0x00000004u); // 80107EC4
  cmps(c,0,(int32_t)c->r[0],2325); // 80107EC8
  if (crb(c,2)) { goto L_80107F1C; } // 80107ECC
  if (!crb(c,0)) { goto L_80107EE0; } // 80107ED0
  cmps(c,0,(int32_t)c->r[0],0); // 80107ED4
  if (crb(c,2)) { goto L_80107EEC; } // 80107ED8
  goto L_80107FDC; // 80107EDC
L_80107EE0:;
  cmps(c,0,(int32_t)c->r[0],2334); // 80107EE0
  if (crb(c,2)) { goto L_80107F90; } // 80107EE4
  goto L_80107FDC; // 80107EE8
L_80107EEC:;
  c->r[3]=0u+0x80490000u; // 80107EEC
  c->r[4]=0u+0x00000000u; // 80107EF0
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 80107EF4
  c->lr=0x80107EFCu; f_80103D0C(c); // 80107EF8
  c->lr=0x80107F00u; f_802894C0(c); // 80107EFC
  cmps(c,0,(int32_t)c->r[3],0); // 80107F00
  if (!crb(c,2)) { goto L_80107F60; } // 80107F04
  c->r[4]=0u+0x803E0000u; // 80107F08
  c->r[3]=0u+0x00000000u; // 80107F0C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80107F10
  c->r[4]=c->r[4]+0x000000E6u; // 80107F14
  c->lr=0x80107F1Cu; f_801082F0(c); // 80107F18
L_80107F1C:;
  c->r[3]=0u+0x80490000u; // 80107F1C
  c->r[31]=0u+0x00000000u; // 80107F20
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 80107F24
  c->lr=0x80107F2Cu; f_80102CC8(c); // 80107F28
  cmps(c,0,(int32_t)c->r[3],0); // 80107F2C
  if (crb(c,2)) { goto L_80107F4C; } // 80107F30
  c->r[3]=0u+0x80490000u; // 80107F34
  c->r[3]=c->r[3]+0xFFFFEA84u; // 80107F38
  c->lr=0x80107F40u; f_80102CC8(c); // 80107F3C
  cmps(c,0,(int32_t)c->r[3],0); // 80107F40
  if (crb(c,2)) { goto L_80107F4C; } // 80107F44
  c->r[31]=0u+0x00000001u; // 80107F48
L_80107F4C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80107F4C
  if (!crb(c,2)) { goto L_80107F60; } // 80107F50
  c->r[0]=0u+0x00000915u; // 80107F54
  W32(c->r[30]+0x00000004u,c->r[0]); // 80107F58
  goto L_80107FDC; // 80107F5C
L_80107F60:;
  c->r[3]=0u+0x80490000u; // 80107F60
  c->r[4]=0u+0x00000001u; // 80107F64
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 80107F68
  c->lr=0x80107F70u; f_80103D0C(c); // 80107F6C
  c->lr=0x80107F74u; f_802894C0(c); // 80107F70
  cmps(c,0,(int32_t)c->r[3],0); // 80107F74
  if (!crb(c,2)) { goto L_80107FD4; } // 80107F78
  c->r[4]=0u+0x803E0000u; // 80107F7C
  c->r[3]=0u+0x00000001u; // 80107F80
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80107F84
  c->r[4]=c->r[4]+0x000000EBu; // 80107F88
  c->lr=0x80107F90u; f_801082F0(c); // 80107F8C
L_80107F90:;
  c->r[3]=0u+0x80490000u; // 80107F90
  c->r[31]=0u+0x00000000u; // 80107F94
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 80107F98
  c->lr=0x80107FA0u; f_80102CC8(c); // 80107F9C
  cmps(c,0,(int32_t)c->r[3],0); // 80107FA0
  if (crb(c,2)) { goto L_80107FC0; } // 80107FA4
  c->r[3]=0u+0x80490000u; // 80107FA8
  c->r[3]=c->r[3]+0xFFFFEA84u; // 80107FAC
  c->lr=0x80107FB4u; f_80102CC8(c); // 80107FB0
  cmps(c,0,(int32_t)c->r[3],0); // 80107FB4
  if (crb(c,2)) { goto L_80107FC0; } // 80107FB8
  c->r[31]=0u+0x00000001u; // 80107FBC
L_80107FC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 80107FC0
  if (!crb(c,2)) { goto L_80107FD4; } // 80107FC4
  c->r[0]=0u+0x0000091Eu; // 80107FC8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80107FCC
  goto L_80107FDC; // 80107FD0
L_80107FD4:;
  c->r[3]=0u+0x00000000u; // 80107FD4
  goto L_80107FE0; // 80107FD8
L_80107FDC:;
  c->r[3]=0u+0x00000001u; // 80107FDC
L_80107FE0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80107FE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107FE4
  c->lr=c->r[0]; // 80107FE8
  c->r[1]=c->r[1]+0x00000010u; // 80107FEC
  return; // 80107FF0
}

// fn_80107FF4
void f_80107FF4(Ctx* __restrict c) {
  trace_call(0x80107FF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107FF4
  c->r[0]=c->lr; // 80107FF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107FFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108000
  c->r[31]=0u+0x80490000u; // 80108004
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 80108008
  c->lr=0x80108010u; f_80102C78(c); // 8010800C
  c->r[3]=0u+0x80490000u; // 80108010
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 80108014
  c->lr=0x8010801Cu; f_80102C78(c); // 80108018
  c->r[3]=0u+0x80490000u; // 8010801C
  c->r[3]=c->r[3]+0xFFFFEA84u; // 80108020
  c->lr=0x80108028u; f_80102C78(c); // 80108024
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 80108028
  c->lr=0x80108030u; f_80102784(c); // 8010802C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108034
  c->lr=c->r[0]; // 80108038
  c->r[1]=c->r[1]+0x00000010u; // 8010803C
  return; // 80108040
}

// fn_80108044
void f_80108044(Ctx* __restrict c) {
  trace_call(0x80108044u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108044
  c->r[0]=c->lr; // 80108048
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010804C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108050
  c->r[31]=c->r[3]|c->r[3]; // 80108054
  c->r[0]=R32(c->r[3]+0x00000004u); // 80108058
  cmps(c,0,(int32_t)c->r[0],2408); // 8010805C
  if (crb(c,2)) { goto L_80108074; } // 80108060
  if (!crb(c,0)) { goto L_801080D8; } // 80108064
  cmps(c,0,(int32_t)c->r[0],0); // 80108068
  if (crb(c,2)) { goto L_80108074; } // 8010806C
  goto L_801080D8; // 80108070
L_80108074:;
  c->r[3]=0u+0x80490000u; // 80108074
  c->r[3]=c->r[3]+0xFFFFE878u; // 80108078
  c->lr=0x80108080u; f_80102CC8(c); // 8010807C
  cmps(c,0,(int32_t)c->r[3],0); // 80108080
  if (crb(c,2)) { goto L_801080C4; } // 80108084
  c->r[3]=0u+0x80490000u; // 80108088
  c->r[3]=c->r[3]+0xFFFFEA84u; // 8010808C
  c->lr=0x80108094u; f_80102CC8(c); // 80108090
  cmps(c,0,(int32_t)c->r[3],0); // 80108094
  if (crb(c,2)) { goto L_801080C4; } // 80108098
  c->r[3]=0u+0x80490000u; // 8010809C
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 801080A0
  c->lr=0x801080A8u; f_80102CC8(c); // 801080A4
  cmps(c,0,(int32_t)c->r[3],0); // 801080A8
  if (crb(c,2)) { goto L_801080C4; } // 801080AC
  c->r[3]=0u+0x80490000u; // 801080B0
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 801080B4
  c->lr=0x801080BCu; f_80102CC8(c); // 801080B8
  cmps(c,0,(int32_t)c->r[3],0); // 801080BC
  if (!crb(c,2)) { goto L_801080D0; } // 801080C0
L_801080C4:;
  c->r[0]=0u+0x00000968u; // 801080C4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801080C8
  goto L_801080D8; // 801080CC
L_801080D0:;
  c->r[3]=0u+0x00000000u; // 801080D0
  goto L_801080DC; // 801080D4
L_801080D8:;
  c->r[3]=0u+0x00000001u; // 801080D8
L_801080DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801080DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801080E0
  c->lr=c->r[0]; // 801080E4
  c->r[1]=c->r[1]+0x00000010u; // 801080E8
  return; // 801080EC
}

// fn_801080F0
void f_801080F0(Ctx* __restrict c) {
  trace_call(0x801080F0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801080F0
  c->r[0]=c->lr; // 801080F4
  c->r[4]=0u+0x00000000u; // 801080F8
  W32(c->r[1]+0x00000114u,c->r[0]); // 801080FC
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 80108100
  c->r[31]=c->r[3]|c->r[3]; // 80108104
  c->r[3]=c->r[3]+0x00000008u; // 80108108
  c->lr=0x80108110u; f_8009D3D0(c); // 8010810C
  c->lr=0x80108114u; f_8009D0F4(c); // 80108110
  c->r[0]=R32(c->r[31]+0x00000004u); // 80108114
  cmps(c,0,(int32_t)c->r[0],2444); // 80108118
  if (crb(c,2)) { goto L_8010817C; } // 8010811C
  if (!crb(c,0)) { goto L_801081A4; } // 80108120
  cmps(c,0,(int32_t)c->r[0],0); // 80108124
  if (crb(c,2)) { goto L_80108130; } // 80108128
  goto L_801081A4; // 8010812C
L_80108130:;
  c->r[4]=0u+0x803E0000u; // 80108130
  c->r[5]=c->r[3]|c->r[3]; // 80108134
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80108138
  c->r[3]=c->r[1]+0x00000008u; // 8010813C
  c->r[4]=c->r[4]+0x000000F0u; // 80108140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80108144
  c->lr=0x8010814Cu; f_80291CC4(c); // 80108148
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010814C
  c->r[4]=c->r[1]+0x00000008u; // 80108150
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108154
  c->r[12]=R32(c->r[12]+0x00000070u); // 80108158
  c->ctr=c->r[12]; // 8010815C
  if (true) { c->lr=0x80108164u; dispatch(c,c->ctr); } // 80108160
  c->r[4]=c->r[3]|c->r[3]; // 80108164
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 80108168
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010816C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108170
  c->ctr=c->r[12]; // 80108174
  if (true) { c->lr=0x8010817Cu; dispatch(c,c->ctr); } // 80108178
L_8010817C:;
  c->r[3]=0u+0x80490000u; // 8010817C
  c->r[3]=c->r[3]+0xFFFFEA84u; // 80108180
  c->lr=0x80108188u; f_80102CC8(c); // 80108184
  cmps(c,0,(int32_t)c->r[3],0); // 80108188
  if (!crb(c,2)) { goto L_8010819C; } // 8010818C
  c->r[0]=0u+0x0000098Cu; // 80108190
  W32(c->r[31]+0x00000004u,c->r[0]); // 80108194
  goto L_801081A4; // 80108198
L_8010819C:;
  c->r[3]=0u+0x00000000u; // 8010819C
  goto L_801081A8; // 801081A0
L_801081A4:;
  c->r[3]=0u+0x00000001u; // 801081A4
L_801081A8:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 801081A8
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801081AC
  c->lr=c->r[0]; // 801081B0
  c->r[1]=c->r[1]+0x00000110u; // 801081B4
  return; // 801081B8
}

// fn_801081BC
void f_801081BC(Ctx* __restrict c) {
  trace_call(0x801081BCu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801081BC
  c->r[0]=c->lr; // 801081C0
  c->r[4]=0u+0x00000000u; // 801081C4
  c->r[3]=c->r[3]+0x00000008u; // 801081C8
  W32(c->r[1]+0x00000114u,c->r[0]); // 801081CC
  c->lr=0x801081D4u; f_8009D3D0(c); // 801081D0
  c->lr=0x801081D8u; f_8009D0F4(c); // 801081D4
  c->r[4]=0u+0x803E0000u; // 801081D8
  c->r[5]=c->r[3]|c->r[3]; // 801081DC
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 801081E0
  c->r[3]=c->r[1]+0x00000008u; // 801081E4
  c->r[4]=c->r[4]+0x000000FAu; // 801081E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801081EC
  c->lr=0x801081F4u; f_80291CC4(c); // 801081F0
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801081F4
  c->r[4]=c->r[1]+0x00000008u; // 801081F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801081FC
  c->r[12]=R32(c->r[12]+0x00000070u); // 80108200
  c->ctr=c->r[12]; // 80108204
  if (true) { c->lr=0x8010820Cu; dispatch(c,c->ctr); } // 80108208
  c->r[4]=c->r[3]|c->r[3]; // 8010820C
  c->r[3]=R32(c->r[13]+0xFFFF9768u); // 80108210
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108214
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108218
  c->ctr=c->r[12]; // 8010821C
  if (true) { c->lr=0x80108224u; dispatch(c,c->ctr); } // 80108220
  c->r[0]=R32(c->r[1]+0x00000114u); // 80108224
  c->lr=c->r[0]; // 80108228
  c->r[1]=c->r[1]+0x00000110u; // 8010822C
  return; // 80108230
}

// fn_80108234
void f_80108234(Ctx* __restrict c) {
  trace_call(0x80108234u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108234
  c->r[0]=c->lr; // 80108238
  c->r[4]=0u+0x00000000u; // 8010823C
  c->r[3]=c->r[3]+0x00000008u; // 80108240
  W32(c->r[1]+0x00000114u,c->r[0]); // 80108244
  c->lr=0x8010824Cu; f_8009D3D0(c); // 80108248
  c->lr=0x80108250u; f_8009D0F4(c); // 8010824C
  c->r[4]=0u+0x803E0000u; // 80108250
  c->r[5]=c->r[3]|c->r[3]; // 80108254
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80108258
  c->r[3]=c->r[1]+0x00000008u; // 8010825C
  c->r[4]=c->r[4]+0x00000105u; // 80108260
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80108264
  c->lr=0x8010826Cu; f_80291CC4(c); // 80108268
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010826C
  c->r[4]=c->r[1]+0x00000008u; // 80108270
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108274
  c->r[12]=R32(c->r[12]+0x00000070u); // 80108278
  c->ctr=c->r[12]; // 8010827C
  if (true) { c->lr=0x80108284u; dispatch(c,c->ctr); } // 80108280
  c->r[4]=c->r[3]|c->r[3]; // 80108284
  c->r[3]=R32(c->r[13]+0xFFFF97C8u); // 80108288
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010828C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108290
  c->ctr=c->r[12]; // 80108294
  if (true) { c->lr=0x8010829Cu; dispatch(c,c->ctr); } // 80108298
  c->r[0]=R32(c->r[1]+0x00000114u); // 8010829C
  c->lr=c->r[0]; // 801082A0
  c->r[1]=c->r[1]+0x00000110u; // 801082A4
  return; // 801082A8
}

// fn_801082AC
void f_801082AC(Ctx* __restrict c) {
  trace_call(0x801082ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801082AC
  c->r[0]=c->lr; // 801082B0
  c->r[4]=0u+0x00000000u; // 801082B4
  c->r[3]=c->r[3]+0x00000008u; // 801082B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801082BC
  c->lr=0x801082C4u; f_8009D3D0(c); // 801082C0
  c->lr=0x801082C8u; f_8009D0F4(c); // 801082C4
  c->r[4]=c->r[3]|c->r[3]; // 801082C8
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801082CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801082D0
  c->r[12]=R32(c->r[12]+0x00000088u); // 801082D4
  c->ctr=c->r[12]; // 801082D8
  if (true) { c->lr=0x801082E0u; dispatch(c,c->ctr); } // 801082DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801082E0
  c->lr=c->r[0]; // 801082E4
  c->r[1]=c->r[1]+0x00000010u; // 801082E8
  return; // 801082EC
}

// fn_801082F0
void f_801082F0(Ctx* __restrict c) {
  trace_call(0x801082F0u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801082F0
  c->r[0]=c->lr; // 801082F4
  W32(c->r[1]+0x00000124u,c->r[0]); // 801082F8
  {uint32_t ea=c->r[1]+0x0000010Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801082FC
  c->r[29]=0u+0x803E0000u; // 80108300
  c->r[31]=c->r[4]|c->r[4]; // 80108304
  c->r[27]=c->r[3]|c->r[3]; // 80108308
  c->r[29]=c->r[29]+0xFFFFD1C8u; // 8010830C
  c->r[3]=c->r[1]+0x00000008u; // 80108310
  c->r[5]=c->r[31]|c->r[31]; // 80108314
  c->r[4]=c->r[29]+0x0000010Fu; // 80108318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010831C
  c->lr=0x80108324u; f_80291CC4(c); // 80108320
  c->r[30]=0u+0x80490000u; // 80108324
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80108328
  c->r[3]=c->r[30]+0xFFFFEE9Cu; // 8010832C
  c->r[5]=c->r[2]+0xFFFF9328u; // 80108330
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108334
  c->r[4]=c->r[1]+0x00000008u; // 80108338
  c->r[28]=R32(c->r[5]+c->r[0]); // 8010833C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108340
  c->r[5]=c->r[28]|c->r[28]; // 80108344
  c->ctr=c->r[12]; // 80108348
  if (true) { c->lr=0x80108350u; dispatch(c,c->ctr); } // 8010834C
  c->r[3]=c->r[31]|c->r[31]; // 80108350
  c->r[4]=c->r[29]+0x000000E6u; // 80108354
  c->lr=0x8010835Cu; f_80293554(c); // 80108358
  cmps(c,0,(int32_t)c->r[3],0); // 8010835C
  if (crb(c,2)) { goto L_80108378; } // 80108360
  c->r[3]=c->r[31]|c->r[31]; // 80108364
  c->r[4]=c->r[29]+0x00000121u; // 80108368
  c->lr=0x80108370u; f_80293554(c); // 8010836C
  cmps(c,0,(int32_t)c->r[3],0); // 80108370
  if (!crb(c,2)) { goto L_801083A0; } // 80108374
L_80108378:;
  c->r[3]=0u+0x80490000u; // 80108378
  {uint32_t ea=c->r[3]+0xFFFFEE9Cu; c->r[12]=R32(ea); c->r[3]=ea;} // 8010837C
  c->r[4]=0u+0x803E0000u; // 80108380
  c->r[5]=c->r[28]|c->r[28]; // 80108384
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108388
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 8010838C
  c->r[4]=c->r[4]+0x00000126u; // 80108390
  c->ctr=c->r[12]; // 80108394
  if (true) { c->lr=0x8010839Cu; dispatch(c,c->ctr); } // 80108398
  goto L_80108404; // 8010839C
L_801083A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801083A0
  c->r[4]=c->r[29]+0x0000013Bu; // 801083A4
  c->lr=0x801083ACu; f_80293554(c); // 801083A8
  cmps(c,0,(int32_t)c->r[3],0); // 801083AC
  if (!crb(c,2)) { goto L_801083D4; } // 801083B0
  c->r[3]=c->r[30]+0xFFFFEE9Cu; // 801083B4
  c->r[5]=c->r[28]|c->r[28]; // 801083B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801083BC
  c->r[4]=c->r[29]+0x00000140u; // 801083C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801083C4
  c->ctr=c->r[12]; // 801083C8
  if (true) { c->lr=0x801083D0u; dispatch(c,c->ctr); } // 801083CC
  goto L_80108404; // 801083D0
L_801083D4:;
  c->r[3]=c->r[31]|c->r[31]; // 801083D4
  c->r[4]=c->r[29]+0x00000155u; // 801083D8
  c->lr=0x801083E0u; f_80293554(c); // 801083DC
  cmps(c,0,(int32_t)c->r[3],0); // 801083E0
  if (!crb(c,2)) { goto L_80108404; } // 801083E4
  c->r[3]=c->r[30]+0xFFFFEE9Cu; // 801083E8
  c->r[5]=c->r[28]|c->r[28]; // 801083EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801083F0
  c->r[4]=c->r[29]+0x0000015Au; // 801083F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801083F8
  c->ctr=c->r[12]; // 801083FC
  if (true) { c->lr=0x80108404u; dispatch(c,c->ctr); } // 80108400
L_80108404:;
  c->r[30]=0u+0x80490000u; // 80108404
  c->r[4]=c->r[27]|c->r[27]; // 80108408
  c->r[3]=c->r[30]+0xFFFFEE9Cu; // 8010840C
  c->r[5]=c->r[1]+0x00000008u; // 80108410
  c->lr=0x80108418u; f_80103CF4(c); // 80108414
  c->r[4]=0u+0x803E0000u; // 80108418
  c->r[5]=c->r[31]|c->r[31]; // 8010841C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80108420
  c->r[3]=c->r[1]+0x00000008u; // 80108424
  c->r[4]=c->r[4]+0x0000016Fu; // 80108428
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010842C
  c->lr=0x80108434u; f_80291CC4(c); // 80108430
  c->r[3]=c->r[30]+0xFFFFEE9Cu; // 80108434
  c->r[5]=c->r[28]|c->r[28]; // 80108438
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010843C
  c->r[4]=c->r[1]+0x00000008u; // 80108440
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80108444
  c->ctr=c->r[12]; // 80108448
  if (true) { c->lr=0x80108450u; dispatch(c,c->ctr); } // 8010844C
  c->r[3]=c->r[30]+0xFFFFEE9Cu; // 80108450
  c->lr=0x80108458u; f_80102C78(c); // 80108454
  c->r[0]=R8(c->r[13]+0xFFFF95ECu); // 80108458
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8010845C
  if (!crb(c,2)) { goto L_801084BC; } // 80108460
  c->r[11]=0u+0x80490000u; // 80108464
  c->r[12]=R32(c->r[2]+0xFFFF8250u); // 80108468
  c->r[11]=c->r[11]+0x00004880u; // 8010846C
  c->r[10]=R32(c->r[2]+0xFFFF8254u); // 80108470
  c->r[9]=R32(c->r[2]+0xFFFF8258u); // 80108474
  c->r[0]=0u+0x00000001u; // 80108478
  c->r[8]=R32(c->r[2]+0xFFFF825Cu); // 8010847C
  c->r[7]=R32(c->r[2]+0xFFFF8260u); // 80108480
  c->r[6]=R32(c->r[2]+0xFFFF8264u); // 80108484
  c->r[5]=R32(c->r[2]+0xFFFF8268u); // 80108488
  c->r[4]=R32(c->r[2]+0xFFFF826Cu); // 8010848C
  c->r[3]=R32(c->r[2]+0xFFFF8270u); // 80108490
  W32(c->r[11]+0x00000004u,c->r[12]); // 80108494
  W32(c->r[11]+0x00000008u,c->r[10]); // 80108498
  W32(c->r[11]+0x0000000Cu,c->r[9]); // 8010849C
  W32(c->r[11]+0x00000010u,c->r[8]); // 801084A0
  W32(c->r[11]+0x00000014u,c->r[7]); // 801084A4
  W32(c->r[11]+0x00000018u,c->r[6]); // 801084A8
  W32(c->r[11]+0x0000001Cu,c->r[5]); // 801084AC
  W32(c->r[11]+0x00000020u,c->r[4]); // 801084B0
  W32(c->r[11]+0x00000024u,c->r[3]); // 801084B4
  W8(c->r[13]+0xFFFF95ECu,c->r[0]); // 801084B8
L_801084BC:;
  c->r[3]=c->r[31]|c->r[31]; // 801084BC
  c->lr=0x801084C4u; f_801367DC(c); // 801084C0
  c->r[4]=0u+0x80490000u; // 801084C4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801084C8
  c->r[4]=c->r[4]+0x00004880u; // 801084CC
  c->r[31]=0u+0x80490000u; // 801084D0
  c->r[4]=R32(c->r[4]+c->r[0]); // 801084D4
  c->r[3]=c->r[31]+0xFFFFEA84u; // 801084D8
  c->r[5]=0u+0x00000001u; // 801084DC
  c->lr=0x801084E4u; f_80102B0C(c); // 801084E0
  c->r[3]=c->r[31]+0xFFFFEA84u; // 801084E4
  c->lr=0x801084ECu; f_80102C78(c); // 801084E8
  {uint32_t ea=c->r[1]+0x0000010Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801084EC
  c->r[0]=R32(c->r[1]+0x00000124u); // 801084F0
  c->lr=c->r[0]; // 801084F4
  c->r[1]=c->r[1]+0x00000120u; // 801084F8
  return; // 801084FC
}

// fn_80108500
void f_80108500(Ctx* __restrict c) {
  trace_call(0x80108500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108500
  c->r[0]=c->lr; // 80108504
  c->r[4]=0u+0x00000000u; // 80108508
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010850C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80108510
  c->r[30]=c->r[3]|c->r[3]; // 80108514
  c->r[3]=c->r[3]+0x00000008u; // 80108518
  c->lr=0x80108520u; f_8009D3D0(c); // 8010851C
  c->lr=0x80108524u; f_8009D188(c); // 80108520
  c->r[31]=c->r[3]|c->r[3]; // 80108524
  c->r[3]=c->r[30]+0x00000008u; // 80108528
  c->r[4]=0u+0x00000001u; // 8010852C
  c->lr=0x80108534u; f_8009D3D0(c); // 80108530
  c->lr=0x80108538u; f_8009D0F4(c); // 80108534
  c->r[0]=R32(c->r[30]+0x00000004u); // 80108538
  c->r[4]=c->r[3]|c->r[3]; // 8010853C
  cmps(c,0,(int32_t)c->r[0],2578); // 80108540
  if (crb(c,2)) { goto L_80108560; } // 80108544
  if (!crb(c,0)) { goto L_801085AC; } // 80108548
  cmps(c,0,(int32_t)c->r[0],0); // 8010854C
  if (crb(c,2)) { goto L_80108558; } // 80108550
  goto L_801085AC; // 80108554
L_80108558:;
  c->r[3]=c->r[31]|c->r[31]; // 80108558
  c->lr=0x80108560u; f_801082F0(c); // 8010855C
L_80108560:;
  c->r[3]=0u+0x80490000u; // 80108560
  c->r[31]=0u+0x00000000u; // 80108564
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 80108568
  c->lr=0x80108570u; f_80102CC8(c); // 8010856C
  cmps(c,0,(int32_t)c->r[3],0); // 80108570
  if (crb(c,2)) { goto L_80108590; } // 80108574
  c->r[3]=0u+0x80490000u; // 80108578
  c->r[3]=c->r[3]+0xFFFFEA84u; // 8010857C
  c->lr=0x80108584u; f_80102CC8(c); // 80108580
  cmps(c,0,(int32_t)c->r[3],0); // 80108584
  if (crb(c,2)) { goto L_80108590; } // 80108588
  c->r[31]=0u+0x00000001u; // 8010858C
L_80108590:;
  cmps(c,0,(int32_t)c->r[31],0); // 80108590
  if (!crb(c,2)) { goto L_801085A4; } // 80108594
  c->r[0]=0u+0x00000A12u; // 80108598
  W32(c->r[30]+0x00000004u,c->r[0]); // 8010859C
  goto L_801085AC; // 801085A0
L_801085A4:;
  c->r[3]=0u+0x00000000u; // 801085A4
  goto L_801085B0; // 801085A8
L_801085AC:;
  c->r[3]=0u+0x00000001u; // 801085AC
L_801085B0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801085B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801085B4
  c->lr=c->r[0]; // 801085B8
  c->r[1]=c->r[1]+0x00000010u; // 801085BC
  return; // 801085C0
}

// fn_801085C4
void f_801085C4(Ctx* __restrict c) {
  trace_call(0x801085C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801085C4
  c->r[0]=c->lr; // 801085C8
  c->r[4]=0u+0x00000000u; // 801085CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801085D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801085D4
  c->r[30]=c->r[3]|c->r[3]; // 801085D8
  c->r[3]=c->r[3]+0x00000008u; // 801085DC
  c->lr=0x801085E4u; f_8009D3D0(c); // 801085E0
  c->lr=0x801085E8u; f_8009D0F4(c); // 801085E4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801085E8
  cmps(c,0,(int32_t)c->r[0],2613); // 801085EC
  if (crb(c,2)) { goto L_8010862C; } // 801085F0
  if (!crb(c,0)) { goto L_80108654; } // 801085F4
  cmps(c,0,(int32_t)c->r[0],0); // 801085F8
  if (crb(c,2)) { goto L_80108604; } // 801085FC
  goto L_80108654; // 80108600
L_80108604:;
  c->lr=0x80108608u; f_801368E4(c); // 80108604
  cmps(c,0,(int32_t)c->r[3],0); // 80108608
  if (crb(c,0)) { goto L_8010862C; } // 8010860C
  c->r[31]=0u+0x80490000u; // 80108610
  c->r[4]=c->r[3]|c->r[3]; // 80108614
  c->r[3]=c->r[31]+0xFFFFEA84u; // 80108618
  c->r[5]=0u+0x00000001u; // 8010861C
  c->lr=0x80108624u; f_80102B0C(c); // 80108620
  c->r[3]=c->r[31]+0xFFFFEA84u; // 80108624
  c->lr=0x8010862Cu; f_80102C78(c); // 80108628
L_8010862C:;
  c->r[3]=0u+0x80490000u; // 8010862C
  c->r[3]=c->r[3]+0xFFFFEA84u; // 80108630
  c->lr=0x80108638u; f_80102CC8(c); // 80108634
  cmps(c,0,(int32_t)c->r[3],0); // 80108638
  if (!crb(c,2)) { goto L_8010864C; } // 8010863C
  c->r[0]=0u+0x00000A35u; // 80108640
  W32(c->r[30]+0x00000004u,c->r[0]); // 80108644
  goto L_80108654; // 80108648
L_8010864C:;
  c->r[3]=0u+0x00000000u; // 8010864C
  goto L_80108658; // 80108650
L_80108654:;
  c->r[3]=0u+0x00000001u; // 80108654
L_80108658:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80108658
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010865C
  c->lr=c->r[0]; // 80108660
  c->r[1]=c->r[1]+0x00000010u; // 80108664
  return; // 80108668
}

// fn_8010866C
void f_8010866C(Ctx* __restrict c) {
  trace_call(0x8010866Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010866C
  c->r[0]=c->lr; // 80108670
  c->r[4]=0u+0x00000000u; // 80108674
  c->r[3]=c->r[3]+0x00000008u; // 80108678
  W32(c->r[1]+0x00000124u,c->r[0]); // 8010867C
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80108680
  c->lr=0x80108688u; f_8009D3D0(c); // 80108684
  c->lr=0x8010868Cu; f_8009D0F4(c); // 80108688
  c->r[30]=0u+0x803E0000u; // 8010868C
  c->r[28]=c->r[3]|c->r[3]; // 80108690
  c->r[30]=c->r[30]+0xFFFFD1C8u; // 80108694
  c->r[3]=c->r[1]+0x00000008u; // 80108698
  c->r[5]=c->r[28]|c->r[28]; // 8010869C
  c->r[4]=c->r[30]+0x00000185u; // 801086A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801086A4
  c->lr=0x801086ACu; f_80291CC4(c); // 801086A8
  c->r[3]=c->r[28]|c->r[28]; // 801086AC
  c->r[4]=c->r[1]+0x00000008u; // 801086B0
  c->lr=0x801086B8u; f_80104938(c); // 801086B4
  c->r[29]=rotl(c->r[3],12)&0xFFFFF000u; // 801086B8
  c->r[31]=0u+0x80490000u; // 801086BC
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 801086C0
  c->r[4]=c->r[1]+0x00000008u; // 801086C4
  c->r[5]=c->r[29]|0x00000200u; // 801086C8
  c->lr=0x801086D0u; f_801028D4(c); // 801086CC
  c->r[5]=c->r[28]|c->r[28]; // 801086D0
  c->r[3]=c->r[1]+0x00000008u; // 801086D4
  c->r[4]=c->r[30]+0x00000199u; // 801086D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801086DC
  c->lr=0x801086E4u; f_80291CC4(c); // 801086E0
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 801086E4
  c->r[4]=c->r[1]+0x00000008u; // 801086E8
  c->r[5]=c->r[29]|0x00000100u; // 801086EC
  c->lr=0x801086F4u; f_801028D4(c); // 801086F0
  c->r[3]=0u+0x80490000u; // 801086F4
  c->r[4]=0u+0x80490000u; // 801086F8
  c->r[3]=c->r[3]+0x00001314u; // 801086FC
  c->r[5]=c->r[1]+0x00000008u; // 80108700
  c->r[4]=c->r[4]+0x0000436Cu; // 80108704
  c->lr=0x8010870Cu; f_801DBD04(c); // 80108708
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010870C
  c->r[4]=c->r[28]|c->r[28]; // 80108710
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108714
  c->r[12]=R32(c->r[12]+0x00000034u); // 80108718
  c->ctr=c->r[12]; // 8010871C
  if (true) { c->lr=0x80108724u; dispatch(c,c->ctr); } // 80108720
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80108724
  c->r[0]=R32(c->r[1]+0x00000124u); // 80108728
  c->lr=c->r[0]; // 8010872C
  c->r[1]=c->r[1]+0x00000120u; // 80108730
  return; // 80108734
}

// fn_80108738
void f_80108738(Ctx* __restrict c) {
  trace_call(0x80108738u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108738
  c->r[0]=c->lr; // 8010873C
  c->r[4]=0u+0x00000000u; // 80108740
  c->r[3]=c->r[3]+0x00000008u; // 80108744
  W32(c->r[1]+0x00000124u,c->r[0]); // 80108748
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010874C
  c->lr=0x80108754u; f_8009D3D0(c); // 80108750
  c->lr=0x80108758u; f_8009D0F4(c); // 80108754
  c->r[30]=0u+0x803E0000u; // 80108758
  c->r[28]=c->r[3]|c->r[3]; // 8010875C
  c->r[30]=c->r[30]+0xFFFFD1C8u; // 80108760
  c->r[3]=c->r[1]+0x00000008u; // 80108764
  c->r[5]=c->r[28]|c->r[28]; // 80108768
  c->r[4]=c->r[30]+0x00000185u; // 8010876C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80108770
  c->lr=0x80108778u; f_80291CC4(c); // 80108774
  c->r[3]=c->r[28]|c->r[28]; // 80108778
  c->r[4]=c->r[1]+0x00000008u; // 8010877C
  c->lr=0x80108784u; f_80104938(c); // 80108780
  c->r[29]=rotl(c->r[3],12)&0xFFFFF000u; // 80108784
  c->r[31]=0u+0x80490000u; // 80108788
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 8010878C
  c->r[4]=c->r[1]+0x00000008u; // 80108790
  c->r[5]=c->r[29]|0x00000200u; // 80108794
  c->lr=0x8010879Cu; f_801028D4(c); // 80108798
  c->r[5]=c->r[28]|c->r[28]; // 8010879C
  c->r[3]=c->r[1]+0x00000008u; // 801087A0
  c->r[4]=c->r[30]+0x00000199u; // 801087A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801087A8
  c->lr=0x801087B0u; f_80291CC4(c); // 801087AC
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 801087B0
  c->r[4]=c->r[1]+0x00000008u; // 801087B4
  c->r[5]=c->r[29]|0x00000100u; // 801087B8
  c->lr=0x801087C0u; f_801028D4(c); // 801087BC
  c->r[3]=0u+0x80490000u; // 801087C0
  c->r[4]=0u+0x80490000u; // 801087C4
  c->r[3]=c->r[3]+0x00001314u; // 801087C8
  c->r[5]=c->r[1]+0x00000008u; // 801087CC
  c->r[4]=c->r[4]+0x0000436Cu; // 801087D0
  c->lr=0x801087D8u; f_801DBD04(c); // 801087D4
  {uint32_t ea=c->r[1]+0x00000110u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801087D8
  c->r[0]=R32(c->r[1]+0x00000124u); // 801087DC
  c->lr=c->r[0]; // 801087E0
  c->r[1]=c->r[1]+0x00000120u; // 801087E4
  return; // 801087E8
}

// fn_801087EC
void f_801087EC(Ctx* __restrict c) {
  trace_call(0x801087ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801087EC
  c->r[0]=c->lr; // 801087F0
  c->r[4]=0u+0x00000000u; // 801087F4
  c->r[3]=c->r[3]+0x00000008u; // 801087F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801087FC
  c->lr=0x80108804u; f_8009D3D0(c); // 80108800
  c->lr=0x80108808u; f_8009D0F4(c); // 80108804
  c->r[4]=c->r[3]|c->r[3]; // 80108808
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010880C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108810
  c->r[12]=R32(c->r[12]+0x00000034u); // 80108814
  c->ctr=c->r[12]; // 80108818
  if (true) { c->lr=0x80108820u; dispatch(c,c->ctr); } // 8010881C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108820
  c->lr=c->r[0]; // 80108824
  c->r[1]=c->r[1]+0x00000010u; // 80108828
  return; // 8010882C
}

// fn_80108830
void f_80108830(Ctx* __restrict c) {
  trace_call(0x80108830u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108830
  c->r[0]=c->lr; // 80108834
  c->r[4]=0u+0x00000000u; // 80108838
  c->r[3]=c->r[3]+0x00000008u; // 8010883C
  W32(c->r[1]+0x00000114u,c->r[0]); // 80108840
  c->lr=0x80108848u; f_8009D3D0(c); // 80108844
  c->lr=0x8010884Cu; f_8009D0F4(c); // 80108848
  c->r[4]=0u+0x803E0000u; // 8010884C
  c->r[5]=c->r[3]|c->r[3]; // 80108850
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80108854
  c->r[3]=c->r[1]+0x00000008u; // 80108858
  c->r[4]=c->r[4]+0x000001A9u; // 8010885C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80108860
  c->lr=0x80108868u; f_80291CC4(c); // 80108864
  c->r[3]=0u+0x80490000u; // 80108868
  c->r[4]=c->r[1]+0x00000008u; // 8010886C
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80108870
  c->r[5]=0u+0x00010000u; // 80108874
  c->lr=0x8010887Cu; f_801028D4(c); // 80108878
  c->r[0]=R32(c->r[1]+0x00000114u); // 8010887C
  c->lr=c->r[0]; // 80108880
  c->r[1]=c->r[1]+0x00000110u; // 80108884
  return; // 80108888
}

// fn_8010888C
void f_8010888C(Ctx* __restrict c) {
  trace_call(0x8010888Cu);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010888C
  c->r[0]=c->lr; // 80108890
  c->r[4]=0u+0x00000000u; // 80108894
  c->r[3]=c->r[3]+0x00000008u; // 80108898
  W32(c->r[1]+0x00000214u,c->r[0]); // 8010889C
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 801088A0
  c->lr=0x801088A8u; f_8009D3D0(c); // 801088A4
  c->lr=0x801088ACu; f_8009D0F4(c); // 801088A8
  c->r[31]=c->r[3]|c->r[3]; // 801088AC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801088B0
  c->r[4]=0u+0xFFFFFFFFu; // 801088B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801088B8
  c->r[12]=R32(c->r[12]+0x00000048u); // 801088BC
  c->ctr=c->r[12]; // 801088C0
  if (true) { c->lr=0x801088C8u; dispatch(c,c->ctr); } // 801088C4
  c->r[4]=c->r[3]|c->r[3]; // 801088C8
  c->r[3]=c->r[1]+0x00000108u; // 801088CC
  c->lr=0x801088D4u; f_802933D8(c); // 801088D0
  c->r[3]=c->r[1]+0x00000108u; // 801088D4
  c->r[4]=0u+0x0000002Fu; // 801088D8
  c->lr=0x801088E0u; f_80293C80(c); // 801088DC
  cmps(c,0,(int32_t)c->r[3],0); // 801088E0
  if (!crb(c,2)) { goto L_801088F4; } // 801088E4
  c->r[3]=c->r[1]+0x00000108u; // 801088E8
  c->r[4]=0u+0x0000005Cu; // 801088EC
  c->lr=0x801088F4u; f_80293C80(c); // 801088F0
L_801088F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801088F4
  if (crb(c,2)) { goto L_8010895C; } // 801088F8
  c->r[5]=R8(c->r[3]+0x00000000u); // 801088FC
  c->r[0]=0u+0x00000000u; // 80108900
  c->r[4]=0u+0x803E0000u; // 80108904
  c->r[8]=c->r[31]|c->r[31]; // 80108908
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8010890C
  W8(c->r[3]+0x00000000u,c->r[0]); // 80108910
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80108914
  c->r[3]=c->r[1]+0x00000008u; // 80108918
  c->r[7]=c->r[6]|c->r[6]; // 8010891C
  c->r[5]=c->r[1]+0x00000108u; // 80108920
  c->r[4]=c->r[4]+0x000001BBu; // 80108924
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80108928
  c->lr=0x80108930u; f_80291CC4(c); // 8010892C
  c->r[3]=0u+0x80490000u; // 80108930
  c->r[4]=c->r[1]+0x00000008u; // 80108934
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80108938
  c->r[5]=0u+0x00000000u; // 8010893C
  c->lr=0x80108944u; f_801028D4(c); // 80108940
  c->r[3]=0u+0x80490000u; // 80108944
  c->r[4]=0u+0x80490000u; // 80108948
  c->r[3]=c->r[3]+0x00001314u; // 8010894C
  c->r[5]=c->r[1]+0x00000008u; // 80108950
  c->r[4]=c->r[4]+0x0000436Cu; // 80108954
  c->lr=0x8010895Cu; f_801DBD04(c); // 80108958
L_8010895C:;
  c->r[0]=R32(c->r[1]+0x00000214u); // 8010895C
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 80108960
  c->lr=c->r[0]; // 80108964
  c->r[1]=c->r[1]+0x00000210u; // 80108968
  return; // 8010896C
}

// fn_80108970
void f_80108970(Ctx* __restrict c) {
  trace_call(0x80108970u);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108970
  c->r[0]=c->lr; // 80108974
  c->r[4]=0u+0x00000000u; // 80108978
  c->r[3]=c->r[3]+0x00000008u; // 8010897C
  W32(c->r[1]+0x00000214u,c->r[0]); // 80108980
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 80108984
  c->lr=0x8010898Cu; f_8009D3D0(c); // 80108988
  c->lr=0x80108990u; f_8009D0F4(c); // 8010898C
  c->r[31]=c->r[3]|c->r[3]; // 80108990
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80108994
  c->r[4]=0u+0xFFFFFFFFu; // 80108998
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010899C
  c->r[12]=R32(c->r[12]+0x00000048u); // 801089A0
  c->ctr=c->r[12]; // 801089A4
  if (true) { c->lr=0x801089ACu; dispatch(c,c->ctr); } // 801089A8
  c->r[4]=c->r[3]|c->r[3]; // 801089AC
  c->r[3]=c->r[1]+0x00000108u; // 801089B0
  c->lr=0x801089B8u; f_802933D8(c); // 801089B4
  c->r[3]=c->r[1]+0x00000108u; // 801089B8
  c->r[4]=0u+0x0000002Fu; // 801089BC
  c->lr=0x801089C4u; f_80293C80(c); // 801089C0
  cmps(c,0,(int32_t)c->r[3],0); // 801089C4
  if (!crb(c,2)) { goto L_801089D8; } // 801089C8
  c->r[3]=c->r[1]+0x00000108u; // 801089CC
  c->r[4]=0u+0x0000005Cu; // 801089D0
  c->lr=0x801089D8u; f_80293C80(c); // 801089D4
L_801089D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801089D8
  if (crb(c,2)) { goto L_80108A40; } // 801089DC
  c->r[5]=R8(c->r[3]+0x00000000u); // 801089E0
  c->r[0]=0u+0x00000000u; // 801089E4
  c->r[4]=0u+0x803E0000u; // 801089E8
  c->r[8]=c->r[31]|c->r[31]; // 801089EC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801089F0
  W8(c->r[3]+0x00000000u,c->r[0]); // 801089F4
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 801089F8
  c->r[3]=c->r[1]+0x00000008u; // 801089FC
  c->r[7]=c->r[6]|c->r[6]; // 80108A00
  c->r[5]=c->r[1]+0x00000108u; // 80108A04
  c->r[4]=c->r[4]+0x000001D0u; // 80108A08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80108A0C
  c->lr=0x80108A14u; f_80291CC4(c); // 80108A10
  c->r[3]=0u+0x80490000u; // 80108A14
  c->r[4]=c->r[1]+0x00000008u; // 80108A18
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80108A1C
  c->r[5]=0u+0x00000000u; // 80108A20
  c->lr=0x80108A28u; f_801028D4(c); // 80108A24
  c->r[3]=0u+0x80490000u; // 80108A28
  c->r[4]=0u+0x80490000u; // 80108A2C
  c->r[3]=c->r[3]+0x00001314u; // 80108A30
  c->r[5]=c->r[1]+0x00000008u; // 80108A34
  c->r[4]=c->r[4]+0x0000436Cu; // 80108A38
  c->lr=0x80108A40u; f_801DBD04(c); // 80108A3C
L_80108A40:;
  c->r[0]=R32(c->r[1]+0x00000214u); // 80108A40
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 80108A44
  c->lr=c->r[0]; // 80108A48
  c->r[1]=c->r[1]+0x00000210u; // 80108A4C
  return; // 80108A50
}

// fn_80108A54
void f_80108A54(Ctx* __restrict c) {
  trace_call(0x80108A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108A54
  c->r[0]=c->lr; // 80108A58
  c->r[4]=0u+0x00000000u; // 80108A5C
  c->r[3]=c->r[3]+0x00000008u; // 80108A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108A64
  c->lr=0x80108A6Cu; f_8009D3D0(c); // 80108A68
  c->lr=0x80108A70u; f_8009D0F4(c); // 80108A6C
  c->r[5]=c->r[3]|c->r[3]; // 80108A70
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 80108A74
  c->r[6]=0u+0x80490000u; // 80108A78
  c->r[4]=0u+0x00000000u; // 80108A7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108A80
  c->r[6]=c->r[6]+0x0000436Cu; // 80108A84
  c->r[7]=0u+0x00000000u; // 80108A88
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80108A8C
  c->ctr=c->r[12]; // 80108A90
  if (true) { c->lr=0x80108A98u; dispatch(c,c->ctr); } // 80108A94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108A98
  c->lr=c->r[0]; // 80108A9C
  c->r[1]=c->r[1]+0x00000010u; // 80108AA0
  return; // 80108AA4
}

// fn_80108AA8
void f_80108AA8(Ctx* __restrict c) {
  trace_call(0x80108AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108AA8
  c->r[0]=c->lr; // 80108AAC
  c->r[4]=0u+0x00000000u; // 80108AB0
  c->r[3]=c->r[3]+0x00000008u; // 80108AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108AB8
  c->lr=0x80108AC0u; f_8009D3D0(c); // 80108ABC
  c->lr=0x80108AC4u; f_8009D0F4(c); // 80108AC0
  c->r[5]=c->r[3]|c->r[3]; // 80108AC4
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 80108AC8
  c->r[6]=0u+0x80490000u; // 80108ACC
  c->r[4]=0u+0x00000000u; // 80108AD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108AD4
  c->r[6]=c->r[6]+0x0000436Cu; // 80108AD8
  c->r[7]=0u+0x00000001u; // 80108ADC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80108AE0
  c->ctr=c->r[12]; // 80108AE4
  if (true) { c->lr=0x80108AECu; dispatch(c,c->ctr); } // 80108AE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108AEC
  c->lr=c->r[0]; // 80108AF0
  c->r[1]=c->r[1]+0x00000010u; // 80108AF4
  return; // 80108AF8
}

// fn_80108AFC
void f_80108AFC(Ctx* __restrict c) {
  trace_call(0x80108AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108AFC
  c->r[0]=c->lr; // 80108B00
  c->r[4]=0u+0x00000000u; // 80108B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108B08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108B0C
  c->r[31]=c->r[3]|c->r[3]; // 80108B10
  c->r[3]=c->r[3]+0x00000008u; // 80108B14
  c->lr=0x80108B1Cu; f_8009D3D0(c); // 80108B18
  c->lr=0x80108B20u; f_8009D0F4(c); // 80108B1C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80108B20
  c->r[5]=c->r[3]|c->r[3]; // 80108B24
  cmps(c,0,(int32_t)c->r[0],2841); // 80108B28
  if (crb(c,2)) { goto L_80108B70; } // 80108B2C
  if (!crb(c,0)) { goto L_80108B40; } // 80108B30
  cmps(c,0,(int32_t)c->r[0],0); // 80108B34
  if (crb(c,2)) { goto L_80108B4C; } // 80108B38
  goto L_80108B84; // 80108B3C
L_80108B40:;
  cmps(c,0,(int32_t)c->r[0],2843); // 80108B40
  if (!crb(c,0)) { goto L_80108B84; } // 80108B44
  goto L_80108B7C; // 80108B48
L_80108B4C:;
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 80108B4C
  c->r[4]=0u+0x00000000u; // 80108B50
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108B54
  c->r[12]=R32(c->r[12]+0x00000040u); // 80108B58
  c->ctr=c->r[12]; // 80108B5C
  if (true) { c->lr=0x80108B64u; dispatch(c,c->ctr); } // 80108B60
  c->r[0]=0u+0x00000B19u; // 80108B64
  W32(c->r[31]+0x00000004u,c->r[0]); // 80108B68
  goto L_80108B84; // 80108B6C
L_80108B70:;
  c->r[0]=0u+0x00000B1Au; // 80108B70
  W32(c->r[31]+0x00000004u,c->r[0]); // 80108B74
  goto L_80108B84; // 80108B78
L_80108B7C:;
  c->r[3]=0u+0x00000000u; // 80108B7C
  goto L_80108B88; // 80108B80
L_80108B84:;
  c->r[3]=0u+0x00000001u; // 80108B84
L_80108B88:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108B88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108B8C
  c->lr=c->r[0]; // 80108B90
  c->r[1]=c->r[1]+0x00000010u; // 80108B94
  return; // 80108B98
}

// fn_80108B9C
void f_80108B9C(Ctx* __restrict c) {
  trace_call(0x80108B9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108B9C
  c->r[0]=c->lr; // 80108BA0
  c->r[4]=0u+0x00000000u; // 80108BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108BAC
  c->r[31]=c->r[3]|c->r[3]; // 80108BB0
  c->r[3]=c->r[3]+0x00000008u; // 80108BB4
  c->lr=0x80108BBCu; f_8009D3D0(c); // 80108BB8
  c->lr=0x80108BC0u; f_8009D0F4(c); // 80108BBC
  c->r[0]=R32(c->r[31]+0x00000004u); // 80108BC0
  c->r[4]=c->r[3]|c->r[3]; // 80108BC4
  cmps(c,0,(int32_t)c->r[0],2863); // 80108BC8
  if (crb(c,2)) { goto L_80108C0C; } // 80108BCC
  if (!crb(c,0)) { goto L_80108BE0; } // 80108BD0
  cmps(c,0,(int32_t)c->r[0],0); // 80108BD4
  if (crb(c,2)) { goto L_80108BEC; } // 80108BD8
  goto L_80108C20; // 80108BDC
L_80108BE0:;
  cmps(c,0,(int32_t)c->r[0],2865); // 80108BE0
  if (!crb(c,0)) { goto L_80108C20; } // 80108BE4
  goto L_80108C18; // 80108BE8
L_80108BEC:;
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 80108BEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108BF0
  c->r[12]=R32(c->r[12]+0x00000038u); // 80108BF4
  c->ctr=c->r[12]; // 80108BF8
  if (true) { c->lr=0x80108C00u; dispatch(c,c->ctr); } // 80108BFC
  c->r[0]=0u+0x00000B2Fu; // 80108C00
  W32(c->r[31]+0x00000004u,c->r[0]); // 80108C04
  goto L_80108C20; // 80108C08
L_80108C0C:;
  c->r[0]=0u+0x00000B30u; // 80108C0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80108C10
  goto L_80108C20; // 80108C14
L_80108C18:;
  c->r[3]=0u+0x00000000u; // 80108C18
  goto L_80108C24; // 80108C1C
L_80108C20:;
  c->r[3]=0u+0x00000001u; // 80108C20
L_80108C24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108C24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108C28
  c->lr=c->r[0]; // 80108C2C
  c->r[1]=c->r[1]+0x00000010u; // 80108C30
  return; // 80108C34
}

// fn_80108C38
void f_80108C38(Ctx* __restrict c) {
  trace_call(0x80108C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108C38
  c->r[0]=c->lr; // 80108C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108C40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108C44
  c->r[31]=c->r[3]|c->r[3]; // 80108C48
  c->r[0]=R32(c->r[3]+0x00000004u); // 80108C4C
  cmps(c,0,(int32_t)c->r[0],2882); // 80108C50
  if (crb(c,2)) { goto L_80108C94; } // 80108C54
  if (!crb(c,0)) { goto L_80108C68; } // 80108C58
  cmps(c,0,(int32_t)c->r[0],0); // 80108C5C
  if (crb(c,2)) { goto L_80108C74; } // 80108C60
  goto L_80108CA8; // 80108C64
L_80108C68:;
  cmps(c,0,(int32_t)c->r[0],2884); // 80108C68
  if (!crb(c,0)) { goto L_80108CA8; } // 80108C6C
  goto L_80108CA0; // 80108C70
L_80108C74:;
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 80108C74
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108C78
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 80108C7C
  c->ctr=c->r[12]; // 80108C80
  if (true) { c->lr=0x80108C88u; dispatch(c,c->ctr); } // 80108C84
  c->r[0]=0u+0x00000B42u; // 80108C88
  W32(c->r[31]+0x00000004u,c->r[0]); // 80108C8C
  goto L_80108CA8; // 80108C90
L_80108C94:;
  c->r[0]=0u+0x00000B43u; // 80108C94
  W32(c->r[3]+0x00000004u,c->r[0]); // 80108C98
  goto L_80108CA8; // 80108C9C
L_80108CA0:;
  c->r[3]=0u+0x00000000u; // 80108CA0
  goto L_80108CAC; // 80108CA4
L_80108CA8:;
  c->r[3]=0u+0x00000001u; // 80108CA8
L_80108CAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108CAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108CB0
  c->lr=c->r[0]; // 80108CB4
  c->r[1]=c->r[1]+0x00000010u; // 80108CB8
  return; // 80108CBC
}

// fn_80108CC0
void f_80108CC0(Ctx* __restrict c) {
  trace_call(0x80108CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108CC0
  c->r[0]=c->lr; // 80108CC4
  c->r[4]=0u+0x00000000u; // 80108CC8
  c->r[3]=c->r[3]+0x00000008u; // 80108CCC
  W32(c->r[1]+0x00000114u,c->r[0]); // 80108CD0
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80108CD4
  c->lr=0x80108CDCu; f_8009D3D0(c); // 80108CD8
  c->lr=0x80108CE0u; f_8009D0F4(c); // 80108CDC
  c->r[31]=0u+0x803E0000u; // 80108CE0
  c->r[30]=c->r[3]|c->r[3]; // 80108CE4
  c->r[31]=c->r[31]+0xFFFFD1C8u; // 80108CE8
  c->r[4]=c->r[31]+0x000001E5u; // 80108CEC
  c->lr=0x80108CF4u; f_80293E90(c); // 80108CF0
  cmps(c,0,(int32_t)c->r[3],0); // 80108CF4
  if (!crb(c,2)) { goto L_80108D14; } // 80108CF8
  c->r[5]=c->r[30]|c->r[30]; // 80108CFC
  c->r[3]=c->r[1]+0x00000008u; // 80108D00
  c->r[4]=c->r[31]+0x000001EAu; // 80108D04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80108D08
  c->lr=0x80108D10u; f_80291CC4(c); // 80108D0C
  goto L_80108D28; // 80108D10
L_80108D14:;
  c->r[5]=c->r[30]|c->r[30]; // 80108D14
  c->r[3]=c->r[1]+0x00000008u; // 80108D18
  c->r[4]=c->r[31]+0x000001FCu; // 80108D1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80108D20
  c->lr=0x80108D28u; f_80291CC4(c); // 80108D24
L_80108D28:;
  c->r[3]=0u+0x80490000u; // 80108D28
  c->r[4]=c->r[1]+0x00000008u; // 80108D2C
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80108D30
  c->r[5]=0u+0x00000000u; // 80108D34
  c->lr=0x80108D3Cu; f_801028D4(c); // 80108D38
  c->r[3]=0u+0x80490000u; // 80108D3C
  c->r[4]=0u+0x80490000u; // 80108D40
  c->r[3]=c->r[3]+0x00001314u; // 80108D44
  c->r[5]=c->r[1]+0x00000008u; // 80108D48
  c->r[4]=c->r[4]+0x0000436Cu; // 80108D4C
  c->lr=0x80108D54u; f_801DBD04(c); // 80108D50
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80108D54
  c->r[0]=R32(c->r[1]+0x00000114u); // 80108D58
  c->lr=c->r[0]; // 80108D5C
  c->r[1]=c->r[1]+0x00000110u; // 80108D60
  return; // 80108D64
}

// fn_80108D68
void f_80108D68(Ctx* __restrict c) {
  trace_call(0x80108D68u);
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 80108D68
  c->r[4]=0u+0x803E0000u; // 80108D6C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80108D70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108D74
  c->r[4]=c->r[4]+0x0000020Au; // 80108D78
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80108D7C
  c->ctr=c->r[12]; // 80108D80
  if (true) { dispatch(c,c->ctr); return; } // 80108D84
}

// fn_80108D88
void f_80108D88(Ctx* __restrict c) {
  trace_call(0x80108D88u);
  c->r[0]=R8(c->r[13]+0xFFFF9579u); // 80108D88
  c->r[0]=cntlz(c->r[0]); // 80108D8C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80108D90
  return; // 80108D94
}

// fn_80108D98
void f_80108D98(Ctx* __restrict c) {
  trace_call(0x80108D98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108D98
  c->r[0]=c->lr; // 80108D9C
  c->r[4]=0u+0x00000000u; // 80108DA0
  c->r[3]=c->r[3]+0x00000008u; // 80108DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108DA8
  c->lr=0x80108DB0u; f_8009D3D0(c); // 80108DAC
  c->lr=0x80108DB4u; f_8009D188(c); // 80108DB0
  cmps(c,0,(int32_t)c->r[3],0); // 80108DB4
  if (!crb(c,1)) { goto L_80108DDC; } // 80108DB8
  c->r[0]=R32(c->r[13]+0xFFFF95E0u); // 80108DBC
  cmps(c,0,(int32_t)c->r[0],1); // 80108DC0
  if (crb(c,2)) { goto L_80108DF8; } // 80108DC4
  c->r[0]=0u+0x00000001u; // 80108DC8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80108DCC
  W32(c->r[13]+0xFFFF95E0u,c->r[0]); // 80108DD0
  c->lr=0x80108DD8u; f_800F3E9C(c); // 80108DD4
  goto L_80108DF8; // 80108DD8
L_80108DDC:;
  c->r[0]=R32(c->r[13]+0xFFFF95E0u); // 80108DDC
  cmps(c,0,(int32_t)c->r[0],2); // 80108DE0
  if (crb(c,2)) { goto L_80108DF8; } // 80108DE4
  c->r[0]=0u+0x00000002u; // 80108DE8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80108DEC
  W32(c->r[13]+0xFFFF95E0u,c->r[0]); // 80108DF0
  c->lr=0x80108DF8u; f_800F3ECC(c); // 80108DF4
L_80108DF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108DF8
  c->lr=c->r[0]; // 80108DFC
  c->r[1]=c->r[1]+0x00000010u; // 80108E00
  return; // 80108E04
}

// fn_80108E08
void f_80108E08(Ctx* __restrict c) {
  trace_call(0x80108E08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108E08
  c->r[0]=c->lr; // 80108E0C
  c->r[4]=0u+0x00000000u; // 80108E10
  c->r[3]=c->r[3]+0x00000008u; // 80108E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108E18
  c->lr=0x80108E20u; f_8009D3D0(c); // 80108E1C
  c->lr=0x80108E24u; f_8009D188(c); // 80108E20
  cmps(c,0,(int32_t)c->r[3],0); // 80108E24
  if (!crb(c,1)) { goto L_80108E40; } // 80108E28
  c->r[3]=0u+0x80470000u; // 80108E2C
  c->r[4]=0u+0x00000002u; // 80108E30
  c->r[3]=c->r[3]+0xFFFF94F8u; // 80108E34
  c->lr=0x80108E3Cu; f_80066C1C(c); // 80108E38
  goto L_80108E50; // 80108E3C
L_80108E40:;
  c->r[3]=0u+0x80470000u; // 80108E40
  c->r[4]=0u+0x00000002u; // 80108E44
  c->r[3]=c->r[3]+0xFFFF94F8u; // 80108E48
  c->lr=0x80108E50u; f_80066C0C(c); // 80108E4C
L_80108E50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108E50
  c->lr=c->r[0]; // 80108E54
  c->r[1]=c->r[1]+0x00000010u; // 80108E58
  return; // 80108E5C
}

// fn_80108E60
void f_80108E60(Ctx* __restrict c) {
  trace_call(0x80108E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108E60
  c->r[0]=c->lr; // 80108E64
  c->r[4]=0u+0x00000000u; // 80108E68
  c->r[3]=c->r[3]+0x00000008u; // 80108E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108E70
  c->lr=0x80108E78u; f_8009D3D0(c); // 80108E74
  c->lr=0x80108E7Cu; f_8009D188(c); // 80108E78
  c->r[0]=c->r[3]|c->r[3]; // 80108E7C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80108E80
  c->r[4]=c->r[0]^0x80000000u; // 80108E84
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[1]=RF64(ea);} // 80108E88
  c->r[0]=0u+0x43300000u; // 80108E8C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80108E90
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108E94
  c->r[4]=0u+0x00000003u; // 80108E98
  W32(c->r[1]+0x00000008u,c->r[0]); // 80108E9C
  c->r[12]=R32(c->r[12]+0x00000064u); // 80108EA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80108EA4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 80108EA8
  c->ctr=c->r[12]; // 80108EAC
  if (true) { c->lr=0x80108EB4u; dispatch(c,c->ctr); } // 80108EB0
  c->r[3]=0u+0x805C0000u; // 80108EB4
  c->r[3]=c->r[3]+0x00005B94u; // 80108EB8
  c->lr=0x80108EC0u; f_80212AB8(c); // 80108EBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108EC0
  c->lr=c->r[0]; // 80108EC4
  c->r[1]=c->r[1]+0x00000010u; // 80108EC8
  return; // 80108ECC
}

// fn_80108ED0
void f_80108ED0(Ctx* __restrict c) {
  trace_call(0x80108ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108ED0
  c->r[0]=c->lr; // 80108ED4
  c->r[4]=0u+0x00000003u; // 80108ED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108EDC
  c->r[0]=0u+0x00000001u; // 80108EE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80108EE4
  c->r[31]=c->r[3]|c->r[3]; // 80108EE8
  W32(c->r[3]+0x00000798u,c->r[0]); // 80108EEC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80108EF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80108EF4
  c->r[12]=R32(c->r[12]+0x00000068u); // 80108EF8
  c->ctr=c->r[12]; // 80108EFC
  if (true) { c->lr=0x80108F04u; dispatch(c,c->ctr); } // 80108F00
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 80108F04
  c->r[3]=c->r[31]+0x00000798u; // 80108F08
  c->r[4]=0u+0x00000000u; // 80108F0C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80108F10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108F14
  c->lr=0x80108F1Cu; f_8009D3D0(c); // 80108F18
  c->r[4]=c->r[31]|c->r[31]; // 80108F1C
  c->lr=0x80108F24u; f_8009D220(c); // 80108F20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108F24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80108F28
  c->lr=c->r[0]; // 80108F2C
  c->r[1]=c->r[1]+0x00000020u; // 80108F30
  return; // 80108F34
}

// fn_80108F38
void f_80108F38(Ctx* __restrict c) {
  trace_call(0x80108F38u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108F38
  c->r[0]=c->lr; // 80108F3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80108F40
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80108F44
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80108F48
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80108F4C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 80108F50
  c->r[11]=c->r[1]+0x00000020u; // 80108F54
  c->lr=0x80108F5Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80108F58
  c->r[31]=c->r[3]|c->r[3]; // 80108F5C
  c->r[4]=0u+0x00000000u; // 80108F60
  c->r[3]=c->r[3]+0x00000008u; // 80108F64
  c->lr=0x80108F6Cu; f_8009D3D0(c); // 80108F68
  c->lr=0x80108F70u; f_8009D0F4(c); // 80108F6C
  c->r[29]=c->r[3]|c->r[3]; // 80108F70
  c->r[3]=c->r[31]+0x00000008u; // 80108F74
  c->r[4]=0u+0x00000001u; // 80108F78
  c->lr=0x80108F80u; f_8009D3D0(c); // 80108F7C
  c->lr=0x80108F84u; f_8009D0A0(c); // 80108F80
  c->r[0]=R32(c->r[31]+0x00000004u); // 80108F84
  c->f[30]=c->f[1]; // 80108F88
  cmps(c,0,(int32_t)c->r[0],3114); // 80108F8C
  if (crb(c,2)) { goto L_80109100; } // 80108F90
  if (!crb(c,0)) { goto L_80108FBC; } // 80108F94
  cmps(c,0,(int32_t)c->r[0],3089); // 80108F98
  if (crb(c,2)) { goto L_80109014; } // 80108F9C
  if (!crb(c,0)) { goto L_80108FB0; } // 80108FA0
  cmps(c,0,(int32_t)c->r[0],0); // 80108FA4
  if (crb(c,2)) { goto L_80108FE0; } // 80108FA8
  goto L_80109274; // 80108FAC
L_80108FB0:;
  cmps(c,0,(int32_t)c->r[0],3105); // 80108FB0
  if (crb(c,2)) { goto L_801090D8; } // 80108FB4
  goto L_80109274; // 80108FB8
L_80108FBC:;
  cmps(c,0,(int32_t)c->r[0],3135); // 80108FBC
  if (crb(c,2)) { goto L_801091C8; } // 80108FC0
  if (!crb(c,0)) { goto L_80108FD4; } // 80108FC4
  cmps(c,0,(int32_t)c->r[0],3125); // 80108FC8
  if (crb(c,2)) { goto L_80109184; } // 80108FCC
  goto L_80109274; // 80108FD0
L_80108FD4:;
  cmps(c,0,(int32_t)c->r[0],3143); // 80108FD4
  if (crb(c,2)) { goto L_80109208; } // 80108FD8
  goto L_80109274; // 80108FDC
L_80108FE0:;
  c->lr=0x80108FE4u; f_80066EFC(c); // 80108FE0
  c->r[3]=c->r[3]+0x00000088u; // 80108FE4
  c->lr=0x80108FECu; f_8004111C(c); // 80108FE8
  cmps(c,0,(int32_t)c->r[3],0); // 80108FEC
  if (!crb(c,2)) { goto L_80109014; } // 80108FF0
  c->lr=0x80108FF8u; f_80066EFC(c); // 80108FF4
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80108FF8
  c->r[4]=0u+0x00000000u; // 80108FFC
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 80109000
  c->r[3]=c->r[3]+0x00000088u; // 80109004
  c->f[2]=c->f[1]; // 80109008
  c->f[3]=c->f[1]; // 8010900C
  c->lr=0x80109014u; f_800411B4(c); // 80109010
L_80109014:;
  c->lr=0x80109018u; f_80066EFC(c); // 80109014
  c->r[0]=R8(c->r[3]+0x000000A8u); // 80109018
  cmps(c,0,(int32_t)c->r[0],0); // 8010901C
  if (crb(c,2)) { goto L_80109030; } // 80109020
  c->r[0]=0u+0x00000C11u; // 80109024
  W32(c->r[31]+0x00000004u,c->r[0]); // 80109028
  goto L_80109274; // 8010902C
L_80109030:;
  c->lr=0x80109034u; f_80066EFC(c); // 80109030
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80109034
  c->r[4]=0u+0x00000001u; // 80109038
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8010903C
  c->r[3]=c->r[3]+0x00000088u; // 80109040
  c->f[2]=c->f[1]; // 80109044
  c->f[3]=c->f[1]; // 80109048
  c->lr=0x80109050u; f_800411B4(c); // 8010904C
  c->r[3]=0u+0x805C0000u; // 80109050
  c->r[4]=0u+0x00000000u; // 80109054
  c->r[3]=c->r[3]+0x00005B94u; // 80109058
  c->lr=0x80109060u; f_8021384C(c); // 8010905C
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80109060
  c->lr=0x80109068u; f_800F3E28(c); // 80109064
  c->r[30]=c->r[3]|c->r[3]; // 80109068
  c->r[3]=c->r[31]+0x000003D0u; // 8010906C
  c->r[4]=0u+0x00000000u; // 80109070
  c->lr=0x80109078u; f_8009D3D0(c); // 80109074
  c->r[4]=c->r[30]|c->r[30]; // 80109078
  c->lr=0x80109080u; f_8009D220(c); // 8010907C
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80109080
  c->lr=0x80109088u; f_800F3ECC(c); // 80109084
  c->r[30]=0u+0x80490000u; // 80109088
  c->r[3]=0u+0x00000000u; // 8010908C
  c->r[30]=c->r[30]+0x000007A8u; // 80109090
  c->r[0]=0u+0x00000002u; // 80109094
  W32(c->r[30]+0x00000004u,c->r[3]); // 80109098
  c->r[3]=c->r[30]+0x00000008u; // 8010909C
  c->r[4]=0u+0x00000000u; // 801090A0
  W32(c->r[30]+0x00000008u,c->r[0]); // 801090A4
  c->lr=0x801090ACu; f_8009D3D0(c); // 801090A8
  c->r[4]=c->r[29]|c->r[29]; // 801090AC
  c->lr=0x801090B4u; f_8009D1D8(c); // 801090B0
  c->r[3]=c->r[30]+0x00000008u; // 801090B4
  c->r[4]=0u+0x00000001u; // 801090B8
  c->lr=0x801090C0u; f_8009D3D0(c); // 801090BC
  c->r[4]=0u+0x00000000u; // 801090C0
  c->lr=0x801090C8u; f_8009D220(c); // 801090C4
  goto L_801090D8; // 801090C8
L_801090CC:;
  c->r[0]=0u+0x00000C21u; // 801090CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801090D0
  goto L_80109274; // 801090D4
L_801090D8:;
  c->r[3]=0u+0x80490000u; // 801090D8
  c->r[3]=c->r[3]+0x000007A8u; // 801090DC
  c->lr=0x801090E4u; f_8010FD40(c); // 801090E0
  cmps(c,0,(int32_t)c->r[3],0); // 801090E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801090CC; } // 801090E8
  c->r[3]=c->r[31]+0x000003D0u; // 801090EC
  c->r[4]=0u+0x00000000u; // 801090F0
  c->lr=0x801090F8u; f_8009D3D0(c); // 801090F4
  c->f[1]=c->f[30]; // 801090F8
  c->lr=0x80109100u; f_8009D1C8(c); // 801090FC
L_80109100:;
  c->r[3]=c->r[31]+0x000003D0u; // 80109100
  c->r[4]=0u+0x00000000u; // 80109104
  c->lr=0x8010910Cu; f_8009D3D0(c); // 80109108
  c->lr=0x80109110u; f_8009D0A0(c); // 8010910C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 80109110
  fcmp(c,0,c->f[1],c->f[0]); // 80109114
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80109118
  if (crb(c,2)) { goto L_80109170; } // 8010911C
  c->r[5]=0u+0x804D0000u; // 80109120
  c->r[3]=c->r[31]+0x000003D0u; // 80109124
  c->r[5]=c->r[5]+0x00003318u; // 80109128
  c->r[4]=0u+0x00000000u; // 8010912C
  {uint32_t ea=c->r[5]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 80109130
  c->lr=0x80109138u; f_8009D3D0(c); // 80109134
  c->lr=0x8010913Cu; f_8009D0A0(c); // 80109138
  c->f[31]=c->f[1]; // 8010913C
  c->r[3]=0u+0x80470000u; // 80109140
  c->r[3]=c->r[3]+0xFFFF94F8u; // 80109144
  c->lr=0x8010914Cu; f_80066BF4(c); // 80109148
  c->f[31]=c->ps1[31]=S(-std::fma(c->f[30],c->f[1],-c->f[31])); // 8010914C
  c->r[3]=c->r[31]+0x000003D0u; // 80109150
  c->r[4]=0u+0x00000000u; // 80109154
  c->lr=0x8010915Cu; f_8009D3D0(c); // 80109158
  c->f[1]=c->f[31]; // 8010915C
  c->lr=0x80109164u; f_8009D1C8(c); // 80109160
  c->r[0]=0u+0x00000C2Au; // 80109164
  W32(c->r[31]+0x00000004u,c->r[0]); // 80109168
  goto L_80109274; // 8010916C
L_80109170:;
  c->r[3]=0u+0x804B0000u; // 80109170
  c->r[3]=c->r[3]+0x00005CC8u; // 80109174
  c->r[3]=c->r[3]+0x00020000u; // 80109178
  c->r[3]=c->r[3]+0xFFFFC1E4u; // 8010917C
  c->lr=0x80109184u; f_80246804(c); // 80109180
L_80109184:;
  c->r[3]=0u+0x804B0000u; // 80109184
  c->r[3]=c->r[3]+0x00005CC8u; // 80109188
  c->r[3]=c->r[3]+0x00020000u; // 8010918C
  c->r[0]=R8(c->r[3]+0xFFFFC210u); // 80109190
  cmps(c,0,(int32_t)c->r[0],0); // 80109194
  if (crb(c,2)) { goto L_801091A8; } // 80109198
  c->r[0]=0u+0x00000C35u; // 8010919C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801091A0
  goto L_80109274; // 801091A4
L_801091A8:;
  c->lr=0x801091ACu; f_80066EFC(c); // 801091A8
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 801091AC
  c->r[4]=0u+0x00000000u; // 801091B0
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801091B4
  c->r[3]=c->r[3]+0x00000088u; // 801091B8
  c->f[2]=c->f[1]; // 801091BC
  c->f[3]=c->f[1]; // 801091C0
  c->lr=0x801091C8u; f_800411B4(c); // 801091C4
L_801091C8:;
  c->lr=0x801091CCu; f_80066EFC(c); // 801091C8
  c->r[0]=R8(c->r[3]+0x000000A8u); // 801091CC
  cmps(c,0,(int32_t)c->r[0],0); // 801091D0
  if (crb(c,2)) { goto L_801091E4; } // 801091D4
  c->r[0]=0u+0x00000C3Fu; // 801091D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801091DC
  goto L_80109274; // 801091E0
L_801091E4:;
  c->r[3]=0u+0x80490000u; // 801091E4
  c->r[0]=0u+0x00000000u; // 801091E8
  c->r[3]=c->r[3]+0x000007A8u; // 801091EC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801091F0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801091F4
  goto L_80109208; // 801091F8
L_801091FC:;
  c->r[0]=0u+0x00000C47u; // 801091FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80109200
  goto L_80109274; // 80109204
L_80109208:;
  c->r[3]=0u+0x80490000u; // 80109208
  c->r[3]=c->r[3]+0x000007A8u; // 8010920C
  c->lr=0x80109214u; f_80110E4C(c); // 80109210
  cmps(c,0,(int32_t)c->r[3],0); // 80109214
  if (!crb(c,2)) { IRQCHK(c); goto L_801091FC; } // 80109218
  c->r[3]=c->r[31]+0x000003D0u; // 8010921C
  c->r[4]=0u+0x00000000u; // 80109220
  c->lr=0x80109228u; f_8009D3D0(c); // 80109224
  c->lr=0x8010922Cu; f_8009D188(c); // 80109228
  cmps(c,0,(int32_t)c->r[3],0); // 8010922C
  if (!crb(c,2)) { goto L_8010923C; } // 80109230
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80109234
  c->lr=0x8010923Cu; f_800F3E9C(c); // 80109238
L_8010923C:;
  c->r[3]=0u+0x805C0000u; // 8010923C
  c->r[4]=0u+0x00000001u; // 80109240
  c->r[3]=c->r[3]+0x00005B94u; // 80109244
  c->lr=0x8010924Cu; f_8021384C(c); // 80109248
  c->lr=0x80109250u; f_80066EFC(c); // 8010924C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 80109250
  c->r[4]=0u+0x00000001u; // 80109254
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 80109258
  c->r[3]=c->r[3]+0x00000088u; // 8010925C
  c->f[2]=c->f[1]; // 80109260
  c->f[3]=c->f[1]; // 80109264
  c->lr=0x8010926Cu; f_800411B4(c); // 80109268
  c->r[3]=0u+0x00000000u; // 8010926C
  goto L_80109278; // 80109270
L_80109274:;
  c->r[3]=0u+0x00000001u; // 80109274
L_80109278:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80109278
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8010927C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 80109280
  c->r[11]=c->r[1]+0x00000020u; // 80109284
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80109288
  c->lr=0x80109290u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010928C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80109290
  c->lr=c->r[0]; // 80109294
  c->r[1]=c->r[1]+0x00000040u; // 80109298
  return; // 8010929C
}

// fn_801092A0
void f_801092A0(Ctx* __restrict c) {
  trace_call(0x801092A0u);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801092A0
  c->r[0]=c->lr; // 801092A4
  W32(c->r[1]+0x00000214u,c->r[0]); // 801092A8
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 801092AC
  c->r[31]=c->r[3]|c->r[3]; // 801092B0
  W32(c->r[1]+0x00000208u,c->r[30]); // 801092B4
  c->r[0]=R8(c->r[13]+0xFFFF95DCu); // 801092B8
  cmps(c,0,(int32_t)c->r[0],0); // 801092BC
  if (crb(c,2)) { goto L_801092CC; } // 801092C0
  c->r[3]=0u+0x00000000u; // 801092C4
  goto L_80109488; // 801092C8
L_801092CC:;
  c->r[4]=0u+0x00000000u; // 801092CC
  c->r[3]=c->r[3]+0x00000008u; // 801092D0
  c->lr=0x801092D8u; f_8009D3D0(c); // 801092D4
  c->lr=0x801092DCu; f_8009D188(c); // 801092D8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801092DC
  c->r[30]=c->r[3]|c->r[3]; // 801092E0
  cmps(c,0,(int32_t)c->r[0],3201); // 801092E4
  if (crb(c,2)) { goto L_801093CC; } // 801092E8
  if (!crb(c,0)) { goto L_801092FC; } // 801092EC
  cmps(c,0,(int32_t)c->r[0],0); // 801092F0
  if (crb(c,2)) { goto L_80109308; } // 801092F4
  goto L_80109484; // 801092F8
L_801092FC:;
  cmps(c,0,(int32_t)c->r[0],3203); // 801092FC
  if (crb(c,2)) { goto L_801093FC; } // 80109300
  goto L_80109484; // 80109304
L_80109308:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80109308
  c->lr=0x80109310u; f_800F51F4(c); // 8010930C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 80109310
  fcmp(c,0,c->f[1],c->f[0]); // 80109314
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80109318
  if (!crb(c,2)) { goto L_80109328; } // 8010931C
  c->r[3]=0u+0x00000000u; // 80109320
  goto L_80109488; // 80109324
L_80109328:;
  c->r[4]=0u+0x803E0000u; // 80109328
  c->r[5]=c->r[30]|c->r[30]; // 8010932C
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80109330
  c->r[3]=c->r[1]+0x00000108u; // 80109334
  c->r[4]=c->r[4]+0x00000210u; // 80109338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010933C
  c->lr=0x80109344u; f_80291CC4(c); // 80109340
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80109344
  c->r[4]=c->r[1]+0x00000108u; // 80109348
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010934C
  c->r[12]=R32(c->r[12]+0x000000A0u); // 80109350
  c->ctr=c->r[12]; // 80109354
  if (true) { c->lr=0x8010935Cu; dispatch(c,c->ctr); } // 80109358
  cmps(c,0,(int32_t)c->r[3],0); // 8010935C
  if (crb(c,2)) { goto L_8010936C; } // 80109360
  c->r[3]=0u+0x00000000u; // 80109364
  goto L_80109488; // 80109368
L_8010936C:;
  c->r[3]=0u+0x80470000u; // 8010936C
  c->r[3]=c->r[3]+0xFFFF94F8u; // 80109370
  c->lr=0x80109378u; f_80066B34(c); // 80109374
  c->r[9]=R32(c->r[2]+0xFFFF83E4u); // 80109378
  c->r[4]=0u+0x00000000u; // 8010937C
  c->r[0]=R32(c->r[2]+0xFFFF83DCu); // 80109380
  c->r[5]=0u+0x00000001u; // 80109384
  c->r[8]=R32(c->r[2]+0xFFFF83ECu); // 80109388
  c->r[6]=0u+0x0000000Au; // 8010938C
  c->r[7]=c->r[9]|c->r[0]; // 80109390
  c->r[3]=R32(c->r[2]+0xFFFF83E8u); // 80109394
  c->r[8]=c->r[8]|c->r[7]; // 80109398
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 8010939C
  c->r[7]=R32(c->r[2]+0xFFFF83F0u); // 801093A0
  c->r[8]=c->r[9]|c->r[8]; // 801093A4
  c->r[0]=c->r[3]|c->r[0]; // 801093A8
  c->r[0]=c->r[7]|c->r[0]; // 801093AC
  c->r[3]=c->r[8]|c->r[0]; // 801093B0
  c->lr=0x801093B8u; f_80049204(c); // 801093B4
  c->r[3]=0u+0x804B0000u; // 801093B8
  c->r[4]=c->r[30]|c->r[30]; // 801093BC
  c->r[3]=c->r[3]+0x00005CC8u; // 801093C0
  c->r[3]=c->r[3]+0x0000234Cu; // 801093C4
  c->lr=0x801093CCu; f_8024F280(c); // 801093C8
L_801093CC:;
  c->r[3]=0u+0x804B0000u; // 801093CC
  c->r[3]=c->r[3]+0x00005CC8u; // 801093D0
  c->r[3]=c->r[3]+0x0000234Cu; // 801093D4
  c->lr=0x801093DCu; f_8024F558(c); // 801093D8
  cmps(c,0,(int32_t)c->r[3],0); // 801093DC
  if (crb(c,2)) { goto L_801093F0; } // 801093E0
  c->r[0]=0u+0x00000C81u; // 801093E4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801093E8
  goto L_80109484; // 801093EC
L_801093F0:;
  c->r[0]=0u+0x00000C83u; // 801093F0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801093F4
  goto L_80109484; // 801093F8
L_801093FC:;
  c->r[4]=0u+0x803E0000u; // 801093FC
  c->r[5]=c->r[30]|c->r[30]; // 80109400
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80109404
  c->r[3]=c->r[1]+0x00000008u; // 80109408
  c->r[4]=c->r[4]+0x00000210u; // 8010940C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80109410
  c->lr=0x80109418u; f_80291CC4(c); // 80109414
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80109418
  c->r[4]=c->r[1]+0x00000008u; // 8010941C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109420
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 80109424
  c->ctr=c->r[12]; // 80109428
  if (true) { c->lr=0x80109430u; dispatch(c,c->ctr); } // 8010942C
  c->r[9]=R32(c->r[2]+0xFFFF83E4u); // 80109430
  c->r[4]=0u+0x00000000u; // 80109434
  c->r[0]=R32(c->r[2]+0xFFFF83DCu); // 80109438
  c->r[5]=0u+0x00000000u; // 8010943C
  c->r[8]=R32(c->r[2]+0xFFFF83ECu); // 80109440
  c->r[6]=0u+0x0000000Au; // 80109444
  c->r[7]=c->r[9]|c->r[0]; // 80109448
  c->r[3]=R32(c->r[2]+0xFFFF83E8u); // 8010944C
  c->r[8]=c->r[8]|c->r[7]; // 80109450
  c->r[0]=R32(c->r[2]+0xFFFF83E0u); // 80109454
  c->r[7]=R32(c->r[2]+0xFFFF83F0u); // 80109458
  c->r[8]=c->r[9]|c->r[8]; // 8010945C
  c->r[0]=c->r[3]|c->r[0]; // 80109460
  c->r[0]=c->r[7]|c->r[0]; // 80109464
  c->r[3]=c->r[8]|c->r[0]; // 80109468
  c->lr=0x80109470u; f_80049204(c); // 8010946C
  c->r[3]=0u+0x80470000u; // 80109470
  c->r[3]=c->r[3]+0xFFFF94F8u; // 80109474
  c->lr=0x8010947Cu; f_80066B8C(c); // 80109478
  c->r[3]=0u+0x00000000u; // 8010947C
  goto L_80109488; // 80109480
L_80109484:;
  c->r[3]=0u+0x00000001u; // 80109484
L_80109488:;
  c->r[0]=R32(c->r[1]+0x00000214u); // 80109488
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 8010948C
  c->r[30]=R32(c->r[1]+0x00000208u); // 80109490
  c->lr=c->r[0]; // 80109494
  c->r[1]=c->r[1]+0x00000210u; // 80109498
  return; // 8010949C
}

// fn_801094A0
void f_801094A0(Ctx* __restrict c) {
  trace_call(0x801094A0u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801094A0
  c->r[0]=c->lr; // 801094A4
  W32(c->r[1]+0x00000224u,c->r[0]); // 801094A8
  {uint32_t ea=c->r[1]+0x00000214u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801094AC
  c->r[30]=c->r[3]|c->r[3]; // 801094B0
  c->r[0]=R8(c->r[13]+0xFFFF95DCu); // 801094B4
  cmps(c,0,(int32_t)c->r[0],0); // 801094B8
  if (!crb(c,2)) { goto L_801096D8; } // 801094BC
  c->r[4]=0u+0x00000000u; // 801094C0
  c->r[3]=c->r[3]+0x00000008u; // 801094C4
  c->lr=0x801094CCu; f_8009D3D0(c); // 801094C8
  c->lr=0x801094D0u; f_8009D188(c); // 801094CC
  c->r[29]=c->r[3]|c->r[3]; // 801094D0
  c->r[3]=c->r[30]+0x00000008u; // 801094D4
  c->r[4]=0u+0x00000001u; // 801094D8
  c->lr=0x801094E0u; f_8009D3D0(c); // 801094DC
  c->lr=0x801094E4u; f_8009D188(c); // 801094E0
  c->r[31]=0u+0x80450000u; // 801094E4
  c->r[30]=c->r[3]|c->r[3]; // 801094E8
  c->r[3]=c->r[31]+0xFFFFA808u; // 801094EC
  c->r[4]=0u+0x00000004u; // 801094F0
  c->r[5]=0u+0x00000001u; // 801094F4
  c->lr=0x801094FCu; f_8003FBFC(c); // 801094F8
  c->r[3]=c->r[31]+0xFFFFA808u; // 801094FC
  c->r[4]=0u+0x00000005u; // 80109500
  c->r[5]=0u+0x00000001u; // 80109504
  c->lr=0x8010950Cu; f_8003FBFC(c); // 80109508
  c->r[3]=c->r[31]+0xFFFFA808u; // 8010950C
  c->r[4]=0u+0x00000006u; // 80109510
  c->r[5]=0u+0x00000001u; // 80109514
  c->lr=0x8010951Cu; f_8003FBFC(c); // 80109518
  c->r[3]=c->r[31]+0xFFFFA808u; // 8010951C
  c->r[4]=0u+0x00000007u; // 80109520
  c->r[5]=0u+0x00000001u; // 80109524
  c->lr=0x8010952Cu; f_8003FBFC(c); // 80109528
  c->r[3]=c->r[31]+0xFFFFA808u; // 8010952C
  c->r[4]=0u+0x00000000u; // 80109530
  c->r[5]=0u+0x00000001u; // 80109534
  c->lr=0x8010953Cu; f_8003FBFC(c); // 80109538
  c->r[31]=c->r[31]+0xFFFFA808u; // 8010953C
  c->r[4]=0u+0x00000004u; // 80109540
  c->r[3]=c->r[31]+0x00000068u; // 80109544
  c->r[5]=0u+0x00000001u; // 80109548
  c->lr=0x80109550u; f_8003FBFC(c); // 8010954C
  c->r[3]=c->r[31]+0x00000068u; // 80109550
  c->r[4]=0u+0x00000005u; // 80109554
  c->r[5]=0u+0x00000001u; // 80109558
  c->lr=0x80109560u; f_8003FBFC(c); // 8010955C
  c->r[3]=c->r[31]+0x00000068u; // 80109560
  c->r[4]=0u+0x00000006u; // 80109564
  c->r[5]=0u+0x00000001u; // 80109568
  c->lr=0x80109570u; f_8003FBFC(c); // 8010956C
  c->r[3]=c->r[31]+0x00000068u; // 80109570
  c->r[4]=0u+0x00000007u; // 80109574
  c->r[5]=0u+0x00000001u; // 80109578
  c->lr=0x80109580u; f_8003FBFC(c); // 8010957C
  c->r[3]=c->r[31]+0x00000068u; // 80109580
  c->r[4]=0u+0x00000000u; // 80109584
  c->r[5]=0u+0x00000001u; // 80109588
  c->lr=0x80109590u; f_8003FBFC(c); // 8010958C
  c->r[4]=0u+0x803E0000u; // 80109590
  c->r[5]=c->r[29]|c->r[29]; // 80109594
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80109598
  c->r[3]=c->r[1]+0x00000108u; // 8010959C
  c->r[4]=c->r[4]+0x00000219u; // 801095A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801095A4
  c->lr=0x801095ACu; f_80291CC4(c); // 801095A8
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801095AC
  c->r[4]=c->r[1]+0x00000108u; // 801095B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801095B4
  c->r[12]=R32(c->r[12]+0x000000A0u); // 801095B8
  c->ctr=c->r[12]; // 801095BC
  if (true) { c->lr=0x801095C4u; dispatch(c,c->ctr); } // 801095C0
  cmps(c,0,(int32_t)c->r[3],0); // 801095C4
  if (!crb(c,2)) { goto L_801096D8; } // 801095C8
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801095CC
  if (crb(c,2)) { goto L_80109614; } // 801095D0
  c->r[3]=c->r[31]|c->r[31]; // 801095D4
  c->r[4]=0u+0x00000004u; // 801095D8
  c->r[5]=0u+0x00000001u; // 801095DC
  c->lr=0x801095E4u; f_8003FBD4(c); // 801095E0
  c->r[3]=c->r[31]|c->r[31]; // 801095E4
  c->r[4]=0u+0x00000005u; // 801095E8
  c->r[5]=0u+0x00000001u; // 801095EC
  c->lr=0x801095F4u; f_8003FBD4(c); // 801095F0
  c->r[3]=c->r[31]+0x00000068u; // 801095F4
  c->r[4]=0u+0x00000004u; // 801095F8
  c->r[5]=0u+0x00000001u; // 801095FC
  c->lr=0x80109604u; f_8003FBD4(c); // 80109600
  c->r[3]=c->r[31]+0x00000068u; // 80109604
  c->r[4]=0u+0x00000005u; // 80109608
  c->r[5]=0u+0x00000001u; // 8010960C
  c->lr=0x80109614u; f_8003FBD4(c); // 80109610
L_80109614:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 80109614
  if (crb(c,2)) { goto L_80109644; } // 80109618
  c->r[31]=0u+0x80450000u; // 8010961C
  c->r[4]=0u+0x00000006u; // 80109620
  c->r[3]=c->r[31]+0xFFFFA808u; // 80109624
  c->r[5]=0u+0x00000001u; // 80109628
  c->lr=0x80109630u; f_8003FBD4(c); // 8010962C
  c->r[3]=c->r[31]+0xFFFFA808u; // 80109630
  c->r[4]=0u+0x00000006u; // 80109634
  c->r[3]=c->r[3]+0x00000068u; // 80109638
  c->r[5]=0u+0x00000001u; // 8010963C
  c->lr=0x80109644u; f_8003FBD4(c); // 80109640
L_80109644:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 80109644
  if (crb(c,2)) { goto L_80109674; } // 80109648
  c->r[31]=0u+0x80450000u; // 8010964C
  c->r[4]=0u+0x00000007u; // 80109650
  c->r[3]=c->r[31]+0xFFFFA808u; // 80109654
  c->r[5]=0u+0x00000001u; // 80109658
  c->lr=0x80109660u; f_8003FBD4(c); // 8010965C
  c->r[3]=c->r[31]+0xFFFFA808u; // 80109660
  c->r[4]=0u+0x00000007u; // 80109664
  c->r[3]=c->r[3]+0x00000068u; // 80109668
  c->r[5]=0u+0x00000001u; // 8010966C
  c->lr=0x80109674u; f_8003FBD4(c); // 80109670
L_80109674:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 80109674
  if (crb(c,2)) { goto L_801096A4; } // 80109678
  c->r[31]=0u+0x80450000u; // 8010967C
  c->r[4]=0u+0x00000000u; // 80109680
  c->r[3]=c->r[31]+0xFFFFA808u; // 80109684
  c->r[5]=0u+0x00000001u; // 80109688
  c->lr=0x80109690u; f_8003FBD4(c); // 8010968C
  c->r[3]=c->r[31]+0xFFFFA808u; // 80109690
  c->r[4]=0u+0x00000000u; // 80109694
  c->r[3]=c->r[3]+0x00000068u; // 80109698
  c->r[5]=0u+0x00000001u; // 8010969C
  c->lr=0x801096A4u; f_8003FBD4(c); // 801096A0
L_801096A4:;
  c->r[4]=0u+0x803E0000u; // 801096A4
  c->r[5]=c->r[29]|c->r[29]; // 801096A8
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 801096AC
  c->r[3]=c->r[1]+0x00000008u; // 801096B0
  c->r[4]=c->r[4]+0x00000219u; // 801096B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801096B8
  c->lr=0x801096C0u; f_80291CC4(c); // 801096BC
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801096C0
  c->r[4]=c->r[1]+0x00000008u; // 801096C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801096C8
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 801096CC
  c->ctr=c->r[12]; // 801096D0
  if (true) { c->lr=0x801096D8u; dispatch(c,c->ctr); } // 801096D4
L_801096D8:;
  {uint32_t ea=c->r[1]+0x00000214u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801096D8
  c->r[0]=R32(c->r[1]+0x00000224u); // 801096DC
  c->lr=c->r[0]; // 801096E0
  c->r[1]=c->r[1]+0x00000220u; // 801096E4
  return; // 801096E8
}

// fn_801096EC
void f_801096EC(Ctx* __restrict c) {
  trace_call(0x801096ECu);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801096EC
  c->r[0]=c->lr; // 801096F0
  W32(c->r[1]+0x00000214u,c->r[0]); // 801096F4
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 801096F8
  c->r[31]=c->r[3]|c->r[3]; // 801096FC
  c->r[0]=R8(c->r[13]+0xFFFF95DCu); // 80109700
  cmps(c,0,(int32_t)c->r[0],0); // 80109704
  if (!crb(c,2)) { goto L_801097E4; } // 80109708
  c->r[4]=0u+0x00000000u; // 8010970C
  c->r[3]=c->r[3]+0x00000008u; // 80109710
  c->lr=0x80109718u; f_8009D3D0(c); // 80109714
  c->lr=0x8010971Cu; f_8009D188(c); // 80109718
  c->r[4]=0u+0x803E0000u; // 8010971C
  c->r[5]=c->r[3]|c->r[3]; // 80109720
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80109724
  c->r[3]=c->r[1]+0x00000108u; // 80109728
  c->r[4]=c->r[4]+0x00000222u; // 8010972C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80109730
  c->lr=0x80109738u; f_80291CC4(c); // 80109734
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80109738
  c->r[4]=c->r[1]+0x00000108u; // 8010973C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109740
  c->r[12]=R32(c->r[12]+0x000000A0u); // 80109744
  c->ctr=c->r[12]; // 80109748
  if (true) { c->lr=0x80109750u; dispatch(c,c->ctr); } // 8010974C
  cmps(c,0,(int32_t)c->r[3],0); // 80109750
  if (!crb(c,2)) { goto L_801097E4; } // 80109754
  c->r[3]=c->r[31]+0x00000008u; // 80109758
  c->r[4]=0u+0x00000000u; // 8010975C
  c->lr=0x80109764u; f_8009D3D0(c); // 80109760
  c->lr=0x80109768u; f_8009D188(c); // 80109764
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 80109768
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); cr0(c,c->r[0]); // 8010976C
  if (crb(c,2)) { goto L_8010978C; } // 80109770
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80109774
  c->r[4]=0u+0x00000000u; // 80109778
  c->r[5]=0u+0xFFFFFFFFu; // 8010977C
  c->r[6]=0u+0x00000008u; // 80109780
  c->lr=0x80109788u; f_800F3D6C(c); // 80109784
  goto L_801097A0; // 80109788
L_8010978C:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 8010978C
  c->r[4]=0u+0x00000001u; // 80109790
  c->r[5]=0u+0xFFFFFFFFu; // 80109794
  c->r[6]=0u+0x00000008u; // 80109798
  c->lr=0x801097A0u; f_800F3D6C(c); // 8010979C
L_801097A0:;
  c->r[3]=c->r[31]+0x00000008u; // 801097A0
  c->r[4]=0u+0x00000000u; // 801097A4
  c->lr=0x801097ACu; f_8009D3D0(c); // 801097A8
  c->lr=0x801097B0u; f_8009D188(c); // 801097AC
  c->r[4]=0u+0x803E0000u; // 801097B0
  c->r[5]=c->r[3]|c->r[3]; // 801097B4
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 801097B8
  c->r[3]=c->r[1]+0x00000008u; // 801097BC
  c->r[4]=c->r[4]+0x00000222u; // 801097C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801097C4
  c->lr=0x801097CCu; f_80291CC4(c); // 801097C8
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 801097CC
  c->r[4]=c->r[1]+0x00000008u; // 801097D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801097D4
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 801097D8
  c->ctr=c->r[12]; // 801097DC
  if (true) { c->lr=0x801097E4u; dispatch(c,c->ctr); } // 801097E0
L_801097E4:;
  c->r[0]=R32(c->r[1]+0x00000214u); // 801097E4
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 801097E8
  c->lr=c->r[0]; // 801097EC
  c->r[1]=c->r[1]+0x00000210u; // 801097F0
  return; // 801097F4
}

// fn_801097F8
void f_801097F8(Ctx* __restrict c) {
  trace_call(0x801097F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801097F8
  c->r[0]=c->lr; // 801097FC
  c->r[4]=0u+0x00000000u; // 80109800
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109804
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80109808
  c->r[30]=c->r[3]|c->r[3]; // 8010980C
  c->r[3]=c->r[3]+0x00000008u; // 80109810
  c->lr=0x80109818u; f_8009D3D0(c); // 80109814
  c->lr=0x8010981Cu; f_8009D188(c); // 80109818
  c->r[31]=c->r[3]|c->r[3]; // 8010981C
  c->r[3]=c->r[30]+0x00000008u; // 80109820
  c->r[4]=0u+0x00000001u; // 80109824
  c->lr=0x8010982Cu; f_8009D3D0(c); // 80109828
  c->lr=0x80109830u; f_8009D188(c); // 8010982C
  c->r[5]=c->r[3]|c->r[3]; // 80109830
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80109834
  c->r[4]=c->r[31]|c->r[31]; // 80109838
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010983C
  c->r[12]=R32(c->r[12]+0x000000C8u); // 80109840
  c->ctr=c->r[12]; // 80109844
  if (true) { c->lr=0x8010984Cu; dispatch(c,c->ctr); } // 80109848
  cmps(c,0,(int32_t)c->r[31],1); // 8010984C
  if (!crb(c,2)) { goto L_80109860; } // 80109850
  c->r[3]=0u+0x805C0000u; // 80109854
  c->r[3]=c->r[3]+0x00005B94u; // 80109858
  c->lr=0x80109860u; f_80213A80(c); // 8010985C
L_80109860:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80109860
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109864
  c->lr=c->r[0]; // 80109868
  c->r[1]=c->r[1]+0x00000010u; // 8010986C
  return; // 80109870
}

// fn_80109874
void f_80109874(Ctx* __restrict c) {
  trace_call(0x80109874u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109874
  c->r[0]=c->lr; // 80109878
  c->r[4]=0u+0x00000000u; // 8010987C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109880
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80109884
  c->r[30]=c->r[3]|c->r[3]; // 80109888
  c->r[3]=c->r[3]+0x00000008u; // 8010988C
  c->lr=0x80109894u; f_8009D3D0(c); // 80109890
  c->lr=0x80109898u; f_8009D188(c); // 80109894
  c->r[31]=c->r[3]|c->r[3]; // 80109898
  c->r[3]=c->r[30]+0x00000008u; // 8010989C
  c->r[4]=0u+0x00000001u; // 801098A0
  c->lr=0x801098A8u; f_8009D3D0(c); // 801098A4
  c->lr=0x801098ACu; f_8009D188(c); // 801098A8
  c->r[0]=0u-c->r[3]; // 801098AC
  c->r[6]=0u+0x80450000u; // 801098B0
  c->r[0]=c->r[0]&~c->r[3]; // 801098B4
  c->r[4]=c->r[31]|c->r[31]; // 801098B8
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801098BC
  c->r[3]=c->r[6]+0xFFFFC69Cu; // 801098C0
  c->lr=0x801098C8u; f_80044CD4(c); // 801098C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801098C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801098CC
  c->lr=c->r[0]; // 801098D0
  c->r[1]=c->r[1]+0x00000010u; // 801098D4
  return; // 801098D8
}

// fn_801098DC
void f_801098DC(Ctx* __restrict c) {
  trace_call(0x801098DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801098DC
  c->r[0]=c->lr; // 801098E0
  c->r[4]=0u+0x00000001u; // 801098E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801098E8
  c->r[0]=0u+0x00000001u; // 801098EC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801098F0
  c->r[31]=0u+0x805C0000u; // 801098F4
  c->r[29]=c->r[3]|c->r[3]; // 801098F8
  W32(c->r[3]+0x00000798u,c->r[0]); // 801098FC
  c->r[3]=c->r[31]+0x00005B94u; // 80109900
  c->lr=0x80109908u; f_80213854(c); // 80109904
  c->r[30]=c->r[3]|c->r[3]; // 80109908
  c->r[3]=c->r[31]+0x00005B94u; // 8010990C
  c->r[4]=0u+0x00000000u; // 80109910
  c->lr=0x80109918u; f_80213854(c); // 80109914
  c->r[31]=c->r[3]|c->r[3]; // 80109918
  c->r[3]=c->r[29]+0x00000798u; // 8010991C
  c->r[4]=0u+0x00000000u; // 80109920
  c->lr=0x80109928u; f_8009D3D0(c); // 80109924
  c->r[4]=c->r[31]+c->r[30]; // 80109928
  c->lr=0x80109930u; f_8009D220(c); // 8010992C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80109930
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109934
  c->lr=c->r[0]; // 80109938
  c->r[1]=c->r[1]+0x00000020u; // 8010993C
  return; // 80109940
}

// fn_80109944
void f_80109944(Ctx* __restrict c) {
  trace_call(0x80109944u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109944
  c->r[0]=c->lr; // 80109948
  c->r[4]=0u+0x00000000u; // 8010994C
  c->r[3]=c->r[3]+0x00000008u; // 80109950
  W32(c->r[1]+0x00000034u,c->r[0]); // 80109954
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80109958
  c->lr=0x80109960u; f_8009D3D0(c); // 8010995C
  c->lr=0x80109964u; f_8009D188(c); // 80109960
  c->r[3]=c->r[3]^0x80000000u; // 80109964
  c->r[0]=0u+0x43300000u; // 80109968
  W32(c->r[1]+0x00000024u,c->r[3]); // 8010996C
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[2]=RF64(ea);} // 80109970
  W32(c->r[1]+0x00000020u,c->r[0]); // 80109974
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80109978
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8010997C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80109980
  fcmp(c,0,c->f[0],c->f[1]); // 80109984
  {uint32_t ea=c->r[13]+0xFFFF95D8u; WF32(ea,c->f[1]);} // 80109988
  if (!crb(c,2)) { goto L_80109A2C; } // 8010998C
  c->lr=0x80109994u; f_80061A4C(c); // 80109990
  {uint32_t ea=c->r[13]+0xFFFF95D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80109994
  c->r[3]=c->r[3]+0x000000ECu; // 80109998
  c->lr=0x801099A0u; f_8012D1D0(c); // 8010999C
  c->lr=0x801099A4u; f_8003DA30(c); // 801099A0
  c->lr=0x801099A8u; f_8003ED58(c); // 801099A4
  c->r[31]=c->r[3]|c->r[3]; // 801099A8
  goto L_80109A08; // 801099AC
L_801099B0:;
  W32(c->r[1]+0x00000010u,c->r[31]); // 801099B0
  c->r[3]=c->r[1]+0x00000010u; // 801099B4
  c->r[4]=0u+0x00000000u; // 801099B8
  c->lr=0x801099C0u; f_8003ED68(c); // 801099BC
  c->r[31]=c->r[31]+0xFFFFFFF8u; // 801099C0
  c->r[12]=R32(c->r[31]+0x00000010u); // 801099C4
  c->r[3]=c->r[31]|c->r[31]; // 801099C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801099CC
  c->ctr=c->r[12]; // 801099D0
  if (true) { c->lr=0x801099D8u; dispatch(c,c->ctr); } // 801099D4
  W32(c->r[1]+0x00000018u,c->r[4]); // 801099D8
  c->r[4]=0u+0xC8000000u; // 801099DC
  W32(c->r[1]+0x00000014u,c->r[3]); // 801099E0
  c->r[3]=c->r[1]+0x00000014u; // 801099E4
  c->lr=0x801099ECu; f_8003EDD0(c); // 801099E8
  cmps(c,0,(int32_t)c->r[3],0); // 801099EC
  if (crb(c,2)) { goto L_80109A04; } // 801099F0
  c->r[3]=R32(c->r[31]+0x00000974u); // 801099F4
  {uint32_t ea=c->r[13]+0xFFFF95D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801099F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801099FC
  c->lr=0x80109A04u; f_80165B9C(c); // 80109A00
L_80109A04:;
  c->r[31]=R32(c->r[1]+0x00000010u); // 80109A04
L_80109A08:;
  c->lr=0x80109A0Cu; f_8003DA30(c); // 80109A08
  c->lr=0x80109A10u; f_8003ECFC(c); // 80109A0C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80109A10
  c->r[3]=c->r[1]+0x0000000Cu; // 80109A14
  c->r[4]=c->r[1]+0x00000008u; // 80109A18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109A1C
  c->lr=0x80109A24u; f_8003ED7C(c); // 80109A20
  cmps(c,0,(int32_t)c->r[3],0); // 80109A24
  if (!crb(c,2)) { IRQCHK(c); goto L_801099B0; } // 80109A28
L_80109A2C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80109A2C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80109A30
  c->lr=c->r[0]; // 80109A34
  c->r[1]=c->r[1]+0x00000030u; // 80109A38
  return; // 80109A3C
}

// fn_80109A40
void f_80109A40(Ctx* __restrict c) {
  trace_call(0x80109A40u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109A40
  c->r[0]=c->lr; // 80109A44
  c->r[4]=0u+0x00000000u; // 80109A48
  W32(c->r[1]+0x00000094u,c->r[0]); // 80109A4C
  {uint32_t ea=c->r[1]+0x00000078u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80109A50
  c->r[26]=c->r[3]|c->r[3]; // 80109A54
  c->r[3]=c->r[3]+0x00000008u; // 80109A58
  c->lr=0x80109A60u; f_8009D3D0(c); // 80109A5C
  c->lr=0x80109A64u; f_8009D0F4(c); // 80109A60
  c->r[29]=c->r[3]|c->r[3]; // 80109A64
  c->lr=0x80109A6Cu; f_8004FBE8(c); // 80109A68
  c->r[0]=R32(c->r[26]+0x00000004u); // 80109A6C
  c->r[28]=c->r[3]|c->r[3]; // 80109A70
  cmps(c,0,(int32_t)c->r[0],3491); // 80109A74
  if (crb(c,2)) { goto L_80109AC8; } // 80109A78
  if (!crb(c,0)) { goto L_80109CE0; } // 80109A7C
  cmps(c,0,(int32_t)c->r[0],0); // 80109A80
  if (crb(c,2)) { goto L_80109A8C; } // 80109A84
  goto L_80109CE0; // 80109A88
L_80109A8C:;
  c->r[3]=0u+0x80490000u; // 80109A8C
  c->r[4]=c->r[29]|c->r[29]; // 80109A90
  c->r[3]=c->r[3]+0x00001314u; // 80109A94
  c->lr=0x80109A9Cu; f_801DBFE4(c); // 80109A98
  c->r[31]=c->r[3]|c->r[3]; // 80109A9C
  c->r[3]=c->r[26]+0x000003D0u; // 80109AA0
  c->r[4]=0u+0x00000000u; // 80109AA4
  c->lr=0x80109AACu; f_8009D3D0(c); // 80109AA8
  c->r[4]=c->r[31]|c->r[31]; // 80109AAC
  c->lr=0x80109AB4u; f_8009D220(c); // 80109AB0
  c->r[3]=c->r[26]+0x000003D0u; // 80109AB4
  c->r[4]=0u+0x00000002u; // 80109AB8
  c->lr=0x80109AC0u; f_8009D3D0(c); // 80109ABC
  c->r[4]=0u+0x00000000u; // 80109AC0
  c->lr=0x80109AC8u; f_8009D220(c); // 80109AC4
L_80109AC8:;
  c->r[3]=0u+0x80490000u; // 80109AC8
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80109ACC
  c->lr=0x80109AD4u; f_80102CC8(c); // 80109AD0
  cmps(c,0,(int32_t)c->r[3],0); // 80109AD4
  if (crb(c,2)) { goto L_80109AF0; } // 80109AD8
  c->r[3]=0u+0x80490000u; // 80109ADC
  c->r[3]=c->r[3]+0xFFFFEE9Cu; // 80109AE0
  c->lr=0x80109AE8u; f_80102CC8(c); // 80109AE4
  cmps(c,0,(int32_t)c->r[3],0); // 80109AE8
  if (!crb(c,2)) { goto L_80109B40; } // 80109AEC
L_80109AF0:;
  c->r[3]=c->r[26]+0x000003D0u; // 80109AF0
  c->r[4]=0u+0x00000002u; // 80109AF4
  c->lr=0x80109AFCu; f_8009D3D0(c); // 80109AF8
  c->lr=0x80109B00u; f_8009D188(c); // 80109AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80109B00
  if (!crb(c,2)) { goto L_80109B34; } // 80109B04
  c->r[3]=c->r[26]+0x000003D0u; // 80109B08
  c->r[4]=0u+0x00000002u; // 80109B0C
  c->lr=0x80109B14u; f_8009D3D0(c); // 80109B10
  c->r[4]=0u+0x00000001u; // 80109B14
  c->lr=0x80109B1Cu; f_8009D220(c); // 80109B18
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80109B1C
  c->r[4]=0u+0x00000000u; // 80109B20
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109B24
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80109B28
  c->ctr=c->r[12]; // 80109B2C
  if (true) { c->lr=0x80109B34u; dispatch(c,c->ctr); } // 80109B30
L_80109B34:;
  c->r[0]=0u+0x00000DA3u; // 80109B34
  W32(c->r[26]+0x00000004u,c->r[0]); // 80109B38
  goto L_80109CE0; // 80109B3C
L_80109B40:;
  c->r[3]=c->r[26]+0x000003D0u; // 80109B40
  c->r[4]=0u+0x00000002u; // 80109B44
  c->lr=0x80109B4Cu; f_8009D3D0(c); // 80109B48
  c->lr=0x80109B50u; f_8009D188(c); // 80109B4C
  cmps(c,0,(int32_t)c->r[3],0); // 80109B50
  if (crb(c,2)) { goto L_80109B70; } // 80109B54
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80109B58
  c->r[4]=0u+0x00000000u; // 80109B5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109B60
  c->r[12]=R32(c->r[12]+0x000000B4u); // 80109B64
  c->ctr=c->r[12]; // 80109B68
  if (true) { c->lr=0x80109B70u; dispatch(c,c->ctr); } // 80109B6C
L_80109B70:;
  c->r[3]=c->r[26]+0x000003D0u; // 80109B70
  c->r[4]=0u+0x00000000u; // 80109B74
  c->lr=0x80109B7Cu; f_8009D3D0(c); // 80109B78
  c->lr=0x80109B80u; f_8009D188(c); // 80109B7C
  c->r[30]=rotl(c->r[3],12)&0xFFFFF000u; // 80109B80
  c->r[4]=0u+0x80490000u; // 80109B84
  c->r[27]=c->r[3]|c->r[3]; // 80109B88
  c->r[3]=c->r[4]+0xFFFFF8B8u; // 80109B8C
  c->r[4]=c->r[30]|0x00000100u; // 80109B90
  c->lr=0x80109B98u; f_80103144(c); // 80109B94
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80109B98
  c->r[31]=c->r[3]|c->r[3]; // 80109B9C
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80109BA0
  if (crb(c,2)) { goto L_80109C20; } // 80109BA4
  c->r[3]=c->r[28]|c->r[28]; // 80109BA8
  c->r[4]=c->r[27]|c->r[27]; // 80109BAC
  c->lr=0x80109BB4u; f_80050328(c); // 80109BB0
  c->r[5]=R32(c->r[31]+0x00000010u); // 80109BB4
  c->r[26]=c->r[3]|c->r[3]; // 80109BB8
  c->r[3]=c->r[28]|c->r[28]; // 80109BBC
  c->r[4]=c->r[27]|c->r[27]; // 80109BC0
  c->lr=0x80109BC8u; f_8004FD30(c); // 80109BC4
  c->r[3]=c->r[28]|c->r[28]; // 80109BC8
  c->r[4]=c->r[27]|c->r[27]; // 80109BCC
  c->r[5]=c->r[29]|c->r[29]; // 80109BD0
  c->lr=0x80109BD8u; f_80050248(c); // 80109BD4
  c->r[31]=0u+0x80450000u; // 80109BD8
  c->r[4]=R32(c->r[26]+0x000018B8u); // 80109BDC
  c->r[5]=c->r[27]|c->r[27]; // 80109BE0
  c->r[6]=0u+0x00000000u; // 80109BE4
  c->r[3]=c->r[31]+0xFFFFC69Cu; // 80109BE8
  c->lr=0x80109BF0u; f_80044AFC(c); // 80109BEC
  c->r[4]=R32(c->r[26]+0x000018BCu); // 80109BF0
  c->r[5]=c->r[27]|c->r[27]; // 80109BF4
  c->r[3]=c->r[31]+0xFFFFC69Cu; // 80109BF8
  c->r[6]=0u+0x00000001u; // 80109BFC
  c->lr=0x80109C04u; f_80044AFC(c); // 80109C00
  c->r[3]=c->r[28]+0x00010000u; // 80109C04
  c->r[4]=R32(c->r[26]+0x000018B4u); // 80109C08
  c->r[5]=c->r[27]|c->r[27]; // 80109C0C
  c->r[3]=c->r[3]+0xFFFF82E4u; // 80109C10
  c->lr=0x80109C18u; f_80137A00(c); // 80109C14
  c->r[3]=c->r[26]|c->r[26]; // 80109C18
  c->lr=0x80109C20u; f_80051258(c); // 80109C1C
L_80109C20:;
  c->r[3]=0u+0x80490000u; // 80109C20
  c->r[4]=c->r[30]|0x00000200u; // 80109C24
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80109C28
  c->lr=0x80109C30u; f_80103144(c); // 80109C2C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80109C30
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 80109C34
  if (crb(c,2)) { goto L_80109CA0; } // 80109C38
  c->r[31]=R32(c->r[3]+0x00000010u); // 80109C3C
  cmps(c,0,(int32_t)c->r[31],0); // 80109C40
  if (crb(c,2)) { goto L_80109CA0; } // 80109C44
  c->r[4]=c->r[31]|c->r[31]; // 80109C48
  c->r[3]=c->r[1]+0x00000008u; // 80109C4C
  c->lr=0x80109C54u; f_801328F8(c); // 80109C50
  c->r[4]=0u+0x803E0000u; // 80109C54
  c->r[3]=c->r[1]+0x00000008u; // 80109C58
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 80109C5C
  c->r[4]=c->r[4]+0x00000015u; // 80109C60
  c->lr=0x80109C68u; f_80132AE0(c); // 80109C64
  c->r[5]=c->r[3]|c->r[3]; // 80109C68
  c->r[3]=c->r[29]|c->r[29]; // 80109C6C
  c->r[4]=c->r[31]|c->r[31]; // 80109C70
  c->r[6]=c->r[31]|c->r[31]; // 80109C74
  c->r[7]=0u+0x00000000u; // 80109C78
  c->r[8]=0u+0xFFFFFFFFu; // 80109C7C
  c->r[9]=0u+0x00000000u; // 80109C80
  c->r[10]=0u+0x00000000u; // 80109C84
  c->lr=0x80109C8Cu; f_8013BEB4(c); // 80109C88
  c->r[3]=c->r[31]|c->r[31]; // 80109C8C
  c->lr=0x80109C94u; f_8013BD08(c); // 80109C90
  c->r[3]=c->r[1]+0x00000008u; // 80109C94
  c->r[4]=0u+0xFFFFFFFFu; // 80109C98
  c->lr=0x80109CA0u; f_80132958(c); // 80109C9C
L_80109CA0:;
  c->r[3]=c->r[28]|c->r[28]; // 80109CA0
  c->lr=0x80109CA8u; f_80050410(c); // 80109CA4
  c->r[3]=R32(c->r[13]+0xFFFF9760u); // 80109CA8
  c->r[4]=c->r[29]|c->r[29]; // 80109CAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109CB0
  c->r[12]=R32(c->r[12]+0x00000020u); // 80109CB4
  c->ctr=c->r[12]; // 80109CB8
  if (true) { c->lr=0x80109CC0u; dispatch(c,c->ctr); } // 80109CBC
  c->r[3]=R32(c->r[13]+0xFFFF9768u); // 80109CC0
  c->r[4]=c->r[29]|c->r[29]; // 80109CC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109CC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80109CCC
  c->ctr=c->r[12]; // 80109CD0
  if (true) { c->lr=0x80109CD8u; dispatch(c,c->ctr); } // 80109CD4
  c->r[3]=0u+0x00000000u; // 80109CD8
  goto L_80109CE4; // 80109CDC
L_80109CE0:;
  c->r[3]=0u+0x00000001u; // 80109CE0
L_80109CE4:;
  {uint32_t ea=c->r[1]+0x00000078u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80109CE4
  c->r[0]=R32(c->r[1]+0x00000094u); // 80109CE8
  c->lr=c->r[0]; // 80109CEC
  c->r[1]=c->r[1]+0x00000090u; // 80109CF0
  return; // 80109CF4
}

// fn_80109CF8
void f_80109CF8(Ctx* __restrict c) {
  trace_call(0x80109CF8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109CF8
  c->r[0]=c->lr; // 80109CFC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80109D00
  c->r[11]=c->r[1]+0x000000A0u; // 80109D04
  c->lr=0x80109D0Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80109D08
  c->r[30]=c->r[1]+0x0000001Cu; // 80109D0C
  c->r[29]=c->r[3]|c->r[3]; // 80109D10
  c->r[3]=c->r[30]|c->r[30]; // 80109D14
  c->lr=0x80109D1Cu; f_8003D9F4(c); // 80109D18
  c->r[3]=0u+0x80400000u; // 80109D1C
  c->r[5]=0u+0x803F0000u; // 80109D20
  c->r[6]=0u+0x00000000u; // 80109D24
  c->r[0]=0u+0x00000004u; // 80109D28
  c->r[3]=c->r[3]+0xFFFFA6B8u; // 80109D2C
  c->r[5]=c->r[5]+0x0000308Cu; // 80109D30
  W32(c->r[1]+0x00000024u,c->r[3]); // 80109D34
  c->r[3]=0u+0x00000000u; // 80109D38
  c->r[4]=0u+0xFFFFFFFFu; // 80109D3C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80109D40
  W32(c->r[1]+0x00000030u,c->r[6]); // 80109D44
  W32(c->r[1]+0x00000034u,c->r[6]); // 80109D48
  W32(c->r[1]+0x00000038u,c->r[6]); // 80109D4C
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 80109D50
  W32(c->r[1]+0x00000040u,c->r[6]); // 80109D54
  W32(c->r[1]+0x00000044u,c->r[6]); // 80109D58
  W32(c->r[1]+0x00000048u,c->r[6]); // 80109D5C
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 80109D60
  W32(c->r[1]+0x0000007Cu,c->r[5]); // 80109D64
  c->ctr=c->r[0]; // 80109D68
L_80109D6C:;
  c->r[5]=c->r[30]+c->r[3]; // 80109D6C
  c->r[3]=c->r[3]+0x00000008u; // 80109D70
  W32(c->r[5]+0x00000034u,c->r[4]); // 80109D74
  W8(c->r[5]+0x00000038u,c->r[6]); // 80109D78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80109D6C; } // 80109D7C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 80109D80
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80109D84
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80109D88
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80109D8C
  c->lr=0x80109D94u; f_8015D64C(c); // 80109D90
  c->r[4]=c->r[29]|c->r[29]; // 80109D94
  c->lr=0x80109D9Cu; f_8015EA48(c); // 80109D98
  c->r[3]=c->r[1]+0x0000001Cu; // 80109D9C
  c->r[4]=0u+0xFFFFFFFFu; // 80109DA0
  c->lr=0x80109DA8u; f_80109E60(c); // 80109DA4
  c->lr=0x80109DACu; f_8003DA30(c); // 80109DA8
  c->lr=0x80109DB0u; f_8003ED58(c); // 80109DAC
  c->r[31]=c->r[3]|c->r[3]; // 80109DB0
  c->r[30]=0u+0xE0000000u; // 80109DB4
  goto L_80109E24; // 80109DB8
L_80109DBC:;
  W32(c->r[1]+0x00000010u,c->r[31]); // 80109DBC
  c->r[3]=c->r[1]+0x00000010u; // 80109DC0
  c->r[4]=0u+0x00000000u; // 80109DC4
  c->lr=0x80109DCCu; f_8003ED68(c); // 80109DC8
  c->r[31]=c->r[31]+0xFFFFFFF8u; // 80109DCC
  c->r[12]=R32(c->r[31]+0x00000010u); // 80109DD0
  c->r[3]=c->r[31]|c->r[31]; // 80109DD4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80109DD8
  c->ctr=c->r[12]; // 80109DDC
  if (true) { c->lr=0x80109DE4u; dispatch(c,c->ctr); } // 80109DE0
  W32(c->r[1]+0x00000018u,c->r[4]); // 80109DE4
  c->r[4]=c->r[30]+0x00000002u; // 80109DE8
  W32(c->r[1]+0x00000014u,c->r[3]); // 80109DEC
  c->r[3]=c->r[1]+0x00000014u; // 80109DF0
  c->lr=0x80109DF8u; f_8003EDD0(c); // 80109DF4
  cmps(c,0,(int32_t)c->r[3],0); // 80109DF8
  if (crb(c,2)) { goto L_80109E20; } // 80109DFC
  c->r[3]=R32(c->r[31]+0x00000B24u); // 80109E00
  c->r[4]=c->r[29]|c->r[29]; // 80109E04
  c->lr=0x80109E0Cu; f_80293554(c); // 80109E08
  cmps(c,0,(int32_t)c->r[3],0); // 80109E0C
  if (!crb(c,2)) { goto L_80109E20; } // 80109E10
  c->lr=0x80109E18u; f_8003DA30(c); // 80109E14
  c->r[4]=c->r[31]|c->r[31]; // 80109E18
  c->lr=0x80109E20u; f_8003DECC(c); // 80109E1C
L_80109E20:;
  c->r[31]=R32(c->r[1]+0x00000010u); // 80109E20
L_80109E24:;
  c->lr=0x80109E28u; f_8003DA30(c); // 80109E24
  c->lr=0x80109E2Cu; f_8003ECFC(c); // 80109E28
  W32(c->r[1]+0x00000008u,c->r[3]); // 80109E2C
  c->r[3]=c->r[1]+0x0000000Cu; // 80109E30
  c->r[4]=c->r[1]+0x00000008u; // 80109E34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109E38
  c->lr=0x80109E40u; f_8003ED7C(c); // 80109E3C
  cmps(c,0,(int32_t)c->r[3],0); // 80109E40
  if (!crb(c,2)) { IRQCHK(c); goto L_80109DBC; } // 80109E44
  c->r[11]=c->r[1]+0x000000A0u; // 80109E48
  c->lr=0x80109E50u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80109E4C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80109E50
  c->lr=c->r[0]; // 80109E54
  c->r[1]=c->r[1]+0x000000A0u; // 80109E58
  return; // 80109E5C
}

// dtor_80109E60
void f_80109E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109E60
  c->r[0]=c->lr; // 80109E64
  cmps(c,0,(int32_t)c->r[3],0); // 80109E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109E6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80109E70
  c->r[30]=c->r[3]|c->r[3]; // 80109E74
  c->r[31]=c->r[4]|c->r[4]; // 80109E78
  if (crb(c,2)) { goto L_80109EA8; } // 80109E7C
  c->r[4]=0u+0xFFFFFFFFu; // 80109E80
  c->r[3]=c->r[3]+0x00000034u; // 80109E84
  c->lr=0x80109E8Cu; f_800756A8(c); // 80109E88
  c->r[3]=c->r[30]|c->r[30]; // 80109E8C
  c->r[4]=0u+0x00000000u; // 80109E90
  c->lr=0x80109E98u; f_8003EC20(c); // 80109E94
  cmps(c,0,(int32_t)c->r[31],0); // 80109E98
  if (!crb(c,1)) { goto L_80109EA8; } // 80109E9C
  c->r[3]=c->r[30]|c->r[30]; // 80109EA0
  c->lr=0x80109EA8u; f_802896EC(c); // 80109EA4
L_80109EA8:;
  c->r[3]=c->r[30]|c->r[30]; // 80109EA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80109EAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109EB0
  c->lr=c->r[0]; // 80109EB4
  c->r[1]=c->r[1]+0x00000010u; // 80109EB8
  return; // 80109EBC
}

// fn_80109EC0
void f_80109EC0(Ctx* __restrict c) {
  trace_call(0x80109EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109EC0
  c->r[0]=c->lr; // 80109EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109EC8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80109ECC
  c->r[30]=c->r[3]|c->r[3]; // 80109ED0
  c->r[3]=0u+0x80490000u; // 80109ED4
  c->r[4]=c->r[30]|c->r[30]; // 80109ED8
  c->r[3]=c->r[3]+0x00001314u; // 80109EDC
  c->lr=0x80109EE4u; f_801DBFE4(c); // 80109EE0
  cmps(c,0,(int32_t)c->r[3],0); // 80109EE4
  c->r[31]=c->r[3]|c->r[3]; // 80109EE8
  if (crb(c,0)) { goto L_80109F90; } // 80109EEC
  c->lr=0x80109EF4u; f_8004FBE8(c); // 80109EF0
  c->r[4]=c->r[31]|c->r[31]; // 80109EF4
  c->r[5]=0u+0x00000000u; // 80109EF8
  c->lr=0x80109F00u; f_80050310(c); // 80109EFC
  c->lr=0x80109F04u; f_8004FBE8(c); // 80109F00
  c->r[4]=c->r[31]|c->r[31]; // 80109F04
  c->lr=0x80109F0Cu; f_800502D0(c); // 80109F08
  c->lr=0x80109F10u; f_8004FBE8(c); // 80109F0C
  c->r[4]=c->r[31]|c->r[31]; // 80109F10
  c->lr=0x80109F18u; f_8004FD90(c); // 80109F14
  c->lr=0x80109F1Cu; f_80061A4C(c); // 80109F18
  c->r[4]=c->r[31]|c->r[31]; // 80109F1C
  c->lr=0x80109F24u; f_80062AA0(c); // 80109F20
  c->r[3]=0u+0x80450000u; // 80109F24
  c->r[4]=c->r[31]|c->r[31]; // 80109F28
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 80109F2C
  c->lr=0x80109F34u; f_80044C68(c); // 80109F30
  c->lr=0x80109F38u; f_8004FBE8(c); // 80109F34
  c->r[3]=c->r[3]+0x00010000u; // 80109F38
  c->r[4]=c->r[31]|c->r[31]; // 80109F3C
  c->r[3]=c->r[3]+0xFFFF82E4u; // 80109F40
  c->lr=0x80109F48u; f_80137A2C(c); // 80109F44
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 80109F48
  c->r[4]=c->r[30]|c->r[30]; // 80109F4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109F50
  c->r[12]=R32(c->r[12]+0x00000038u); // 80109F54
  c->ctr=c->r[12]; // 80109F58
  if (true) { c->lr=0x80109F60u; dispatch(c,c->ctr); } // 80109F5C
  c->r[3]=R32(c->r[13]+0xFFFF9760u); // 80109F60
  c->r[4]=c->r[30]|c->r[30]; // 80109F64
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109F68
  c->r[12]=R32(c->r[12]+0x00000024u); // 80109F6C
  c->ctr=c->r[12]; // 80109F70
  if (true) { c->lr=0x80109F78u; dispatch(c,c->ctr); } // 80109F74
  c->r[3]=R32(c->r[13]+0xFFFF9768u); // 80109F78
  c->r[4]=c->r[30]|c->r[30]; // 80109F7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109F80
  c->r[12]=R32(c->r[12]+0x00000014u); // 80109F84
  c->ctr=c->r[12]; // 80109F88
  if (true) { c->lr=0x80109F90u; dispatch(c,c->ctr); } // 80109F8C
L_80109F90:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80109F90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109F94
  c->lr=c->r[0]; // 80109F98
  c->r[1]=c->r[1]+0x00000010u; // 80109F9C
  return; // 80109FA0
}

// fn_80109FA4
void f_80109FA4(Ctx* __restrict c) {
  trace_call(0x80109FA4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109FA4
  c->r[0]=c->lr; // 80109FA8
  c->r[4]=0u+0x00000000u; // 80109FAC
  W32(c->r[1]+0x00000124u,c->r[0]); // 80109FB0
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80109FB4
  c->r[27]=c->r[3]|c->r[3]; // 80109FB8
  c->r[3]=c->r[3]+0x00000008u; // 80109FBC
  c->lr=0x80109FC4u; f_8009D3D0(c); // 80109FC0
  c->lr=0x80109FC8u; f_8009D0F4(c); // 80109FC4
  c->r[0]=R32(c->r[27]+0x00000004u); // 80109FC8
  c->r[26]=c->r[3]|c->r[3]; // 80109FCC
  cmps(c,0,(int32_t)c->r[0],3642); // 80109FD0
  if (crb(c,2)) { goto L_8010A028; } // 80109FD4
  if (!crb(c,0)) { goto L_80109FE8; } // 80109FD8
  cmps(c,0,(int32_t)c->r[0],0); // 80109FDC
  if (crb(c,2)) { goto L_80109FF4; } // 80109FE0
  goto L_8010A0EC; // 80109FE4
L_80109FE8:;
  cmps(c,0,(int32_t)c->r[0],3644); // 80109FE8
  if (!crb(c,0)) { goto L_8010A0EC; } // 80109FEC
  goto L_8010A034; // 80109FF0
L_80109FF4:;
  c->r[3]=R32(c->r[13]+0xFFFF96C8u); // 80109FF4
  c->r[4]=c->r[26]|c->r[26]; // 80109FF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80109FFC
  c->r[12]=R32(c->r[12]+0x00000074u); // 8010A000
  c->ctr=c->r[12]; // 8010A004
  if (true) { c->lr=0x8010A00Cu; dispatch(c,c->ctr); } // 8010A008
  c->r[3]=c->r[26]|c->r[26]; // 8010A00C
  c->lr=0x8010A014u; f_80109EC0(c); // 8010A010
  c->r[3]=c->r[26]|c->r[26]; // 8010A014
  c->lr=0x8010A01Cu; f_80109CF8(c); // 8010A018
  c->r[0]=0u+0x00000E3Au; // 8010A01C
  W32(c->r[27]+0x00000004u,c->r[0]); // 8010A020
  goto L_8010A0EC; // 8010A024
L_8010A028:;
  c->r[0]=0u+0x00000E3Bu; // 8010A028
  W32(c->r[27]+0x00000004u,c->r[0]); // 8010A02C
  goto L_8010A0EC; // 8010A030
L_8010A034:;
  c->r[28]=0u+0x80490000u; // 8010A034
  c->r[4]=c->r[26]|c->r[26]; // 8010A038
  c->r[3]=c->r[28]+0x00001314u; // 8010A03C
  c->lr=0x8010A044u; f_801DC114(c); // 8010A040
  c->r[29]=0u+0x803E0000u; // 8010A044
  c->r[27]=c->r[3]|c->r[3]; // 8010A048
  c->r[29]=c->r[29]+0xFFFFD1C8u; // 8010A04C
  c->r[30]=0u+0x80490000u; // 8010A050
  c->r[31]=0u+0x80490000u; // 8010A054
  goto L_8010A0C0; // 8010A058
L_8010A05C:;
  c->r[3]=c->r[27]|c->r[27]; // 8010A05C
  c->lr=0x8010A064u; f_802894C0(c); // 8010A060
  c->r[3]=c->r[3]+c->r[27]; // 8010A064
  c->r[4]=c->r[29]+0x0000022Du; // 8010A068
  c->r[3]=c->r[3]+0xFFFFFFFDu; // 8010A06C
  c->lr=0x8010A074u; f_80293554(c); // 8010A070
  cmps(c,0,(int32_t)c->r[3],0); // 8010A074
  if (!crb(c,2)) { goto L_8010A0A8; } // 8010A078
  c->r[4]=c->r[27]|c->r[27]; // 8010A07C
  c->r[3]=c->r[1]+0x00000008u; // 8010A080
  c->lr=0x8010A088u; f_80136688(c); // 8010A084
  c->r[3]=c->r[1]+0x00000008u; // 8010A088
  c->r[4]=c->r[30]+0x00004718u; // 8010A08C
  c->lr=0x8010A094u; f_80293554(c); // 8010A090
  cmps(c,0,(int32_t)c->r[3],0); // 8010A094
  if (!crb(c,2)) { goto L_8010A0A8; } // 8010A098
  c->lr=0x8010A0A0u; f_80061A4C(c); // 8010A09C
  c->r[3]=c->r[3]+0x000000ECu; // 8010A0A0
  c->lr=0x8010A0A8u; f_8012CF84(c); // 8010A0A4
L_8010A0A8:;
  c->r[4]=c->r[27]|c->r[27]; // 8010A0A8
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 8010A0AC
  c->lr=0x8010A0B4u; f_80103354(c); // 8010A0B0
  c->r[3]=c->r[28]+0x00001314u; // 8010A0B4
  c->lr=0x8010A0BCu; f_801DC1A4(c); // 8010A0B8
  c->r[27]=c->r[3]|c->r[3]; // 8010A0BC
L_8010A0C0:;
  cmps(c,0,(int32_t)c->r[27],0); // 8010A0C0
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A05C; } // 8010A0C4
  c->r[31]=0u+0x80490000u; // 8010A0C8
  c->r[3]=c->r[31]+0x00001314u; // 8010A0CC
  c->lr=0x8010A0D4u; f_801DC1CC(c); // 8010A0D0
  c->r[4]=c->r[26]|c->r[26]; // 8010A0D4
  c->r[3]=c->r[31]+0x00001314u; // 8010A0D8
  c->r[5]=0u+0x00000000u; // 8010A0DC
  c->lr=0x8010A0E4u; f_801DBEDC(c); // 8010A0E0
  c->r[3]=0u+0x00000000u; // 8010A0E4
  goto L_8010A0F0; // 8010A0E8
L_8010A0EC:;
  c->r[3]=0u+0x00000001u; // 8010A0EC
L_8010A0F0:;
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010A0F0
  c->r[0]=R32(c->r[1]+0x00000124u); // 8010A0F4
  c->lr=c->r[0]; // 8010A0F8
  c->r[1]=c->r[1]+0x00000120u; // 8010A0FC
  return; // 8010A100
}

// fn_8010A104
void f_8010A104(Ctx* __restrict c) {
  trace_call(0x8010A104u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A104
  c->r[0]=c->lr; // 8010A108
  c->r[4]=0u+0x00000000u; // 8010A10C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A110
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010A114
  c->r[28]=c->r[3]|c->r[3]; // 8010A118
  c->r[3]=c->r[3]+0x00000008u; // 8010A11C
  c->lr=0x8010A124u; f_8009D3D0(c); // 8010A120
  c->lr=0x8010A128u; f_8009D0F4(c); // 8010A124
  c->r[0]=R32(c->r[28]+0x00000004u); // 8010A128
  c->r[27]=c->r[3]|c->r[3]; // 8010A12C
  cmps(c,0,(int32_t)c->r[0],3678); // 8010A130
  if (crb(c,2)) { goto L_8010A164; } // 8010A134
  if (!crb(c,0)) { goto L_8010A148; } // 8010A138
  cmps(c,0,(int32_t)c->r[0],0); // 8010A13C
  if (crb(c,2)) { goto L_8010A154; } // 8010A140
  goto L_8010A1EC; // 8010A144
L_8010A148:;
  cmps(c,0,(int32_t)c->r[0],3680); // 8010A148
  if (!crb(c,0)) { goto L_8010A1EC; } // 8010A14C
  goto L_8010A170; // 8010A150
L_8010A154:;
  c->lr=0x8010A158u; f_80109EC0(c); // 8010A154
  c->r[0]=0u+0x00000E5Eu; // 8010A158
  W32(c->r[28]+0x00000004u,c->r[0]); // 8010A15C
  goto L_8010A1EC; // 8010A160
L_8010A164:;
  c->r[0]=0u+0x00000E5Fu; // 8010A164
  W32(c->r[28]+0x00000004u,c->r[0]); // 8010A168
  goto L_8010A1EC; // 8010A16C
L_8010A170:;
  c->r[29]=0u+0x80490000u; // 8010A170
  c->r[4]=c->r[27]|c->r[27]; // 8010A174
  c->r[3]=c->r[29]+0x00001314u; // 8010A178
  c->lr=0x8010A180u; f_801DC114(c); // 8010A17C
  c->r[30]=0u+0x803E0000u; // 8010A180
  c->r[28]=c->r[3]|c->r[3]; // 8010A184
  c->r[30]=c->r[30]+0xFFFFD1C8u; // 8010A188
  c->r[31]=0u+0x80490000u; // 8010A18C
  goto L_8010A1D0; // 8010A190
L_8010A194:;
  c->r[3]=c->r[28]|c->r[28]; // 8010A194
  c->r[4]=c->r[30]+0x00000231u; // 8010A198
  c->lr=0x8010A1A0u; f_80293E90(c); // 8010A19C
  cmps(c,0,(int32_t)c->r[3],0); // 8010A1A0
  if (!crb(c,2)) { goto L_8010A1C4; } // 8010A1A4
  c->r[4]=c->r[28]|c->r[28]; // 8010A1A8
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 8010A1AC
  c->lr=0x8010A1B4u; f_80103354(c); // 8010A1B0
  c->r[4]=c->r[27]|c->r[27]; // 8010A1B4
  c->r[5]=c->r[28]|c->r[28]; // 8010A1B8
  c->r[3]=c->r[29]+0x00001314u; // 8010A1BC
  c->lr=0x8010A1C4u; f_801DBEDC(c); // 8010A1C0
L_8010A1C4:;
  c->r[3]=c->r[29]+0x00001314u; // 8010A1C4
  c->lr=0x8010A1CCu; f_801DC1A4(c); // 8010A1C8
  c->r[28]=c->r[3]|c->r[3]; // 8010A1CC
L_8010A1D0:;
  cmps(c,0,(int32_t)c->r[28],0); // 8010A1D0
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A194; } // 8010A1D4
  c->r[3]=0u+0x80490000u; // 8010A1D8
  c->r[3]=c->r[3]+0x00001314u; // 8010A1DC
  c->lr=0x8010A1E4u; f_801DC1CC(c); // 8010A1E0
  c->r[3]=0u+0x00000000u; // 8010A1E4
  goto L_8010A1F0; // 8010A1E8
L_8010A1EC:;
  c->r[3]=0u+0x00000001u; // 8010A1EC
L_8010A1F0:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010A1F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A1F4
  c->lr=c->r[0]; // 8010A1F8
  c->r[1]=c->r[1]+0x00000020u; // 8010A1FC
  return; // 8010A200
}

// fn_8010A204
void f_8010A204(Ctx* __restrict c) {
  trace_call(0x8010A204u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A204
  c->r[0]=c->lr; // 8010A208
  c->r[4]=0u+0x00000000u; // 8010A20C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A210
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010A214
  c->r[28]=c->r[3]|c->r[3]; // 8010A218
  c->r[3]=c->r[3]+0x00000008u; // 8010A21C
  c->lr=0x8010A224u; f_8009D3D0(c); // 8010A220
  c->lr=0x8010A228u; f_8009D0F4(c); // 8010A224
  c->r[0]=R32(c->r[28]+0x00000004u); // 8010A228
  c->r[27]=c->r[3]|c->r[3]; // 8010A22C
  cmps(c,0,(int32_t)c->r[0],3714); // 8010A230
  if (crb(c,2)) { goto L_8010A264; } // 8010A234
  if (!crb(c,0)) { goto L_8010A248; } // 8010A238
  cmps(c,0,(int32_t)c->r[0],0); // 8010A23C
  if (crb(c,2)) { goto L_8010A254; } // 8010A240
  goto L_8010A2EC; // 8010A244
L_8010A248:;
  cmps(c,0,(int32_t)c->r[0],3716); // 8010A248
  if (!crb(c,0)) { goto L_8010A2EC; } // 8010A24C
  goto L_8010A270; // 8010A250
L_8010A254:;
  c->lr=0x8010A258u; f_80109CF8(c); // 8010A254
  c->r[0]=0u+0x00000E82u; // 8010A258
  W32(c->r[28]+0x00000004u,c->r[0]); // 8010A25C
  goto L_8010A2EC; // 8010A260
L_8010A264:;
  c->r[0]=0u+0x00000E83u; // 8010A264
  W32(c->r[28]+0x00000004u,c->r[0]); // 8010A268
  goto L_8010A2EC; // 8010A26C
L_8010A270:;
  c->r[29]=0u+0x80490000u; // 8010A270
  c->r[4]=c->r[27]|c->r[27]; // 8010A274
  c->r[3]=c->r[29]+0x00001314u; // 8010A278
  c->lr=0x8010A280u; f_801DC114(c); // 8010A27C
  c->r[30]=0u+0x803E0000u; // 8010A280
  c->r[28]=c->r[3]|c->r[3]; // 8010A284
  c->r[30]=c->r[30]+0xFFFFD1C8u; // 8010A288
  c->r[31]=0u+0x80490000u; // 8010A28C
  goto L_8010A2D0; // 8010A290
L_8010A294:;
  c->r[3]=c->r[28]|c->r[28]; // 8010A294
  c->r[4]=c->r[30]+0x00000231u; // 8010A298
  c->lr=0x8010A2A0u; f_80293E90(c); // 8010A29C
  cmps(c,0,(int32_t)c->r[3],0); // 8010A2A0
  if (crb(c,2)) { goto L_8010A2C4; } // 8010A2A4
  c->r[4]=c->r[28]|c->r[28]; // 8010A2A8
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 8010A2AC
  c->lr=0x8010A2B4u; f_80103354(c); // 8010A2B0
  c->r[4]=c->r[27]|c->r[27]; // 8010A2B4
  c->r[5]=c->r[28]|c->r[28]; // 8010A2B8
  c->r[3]=c->r[29]+0x00001314u; // 8010A2BC
  c->lr=0x8010A2C4u; f_801DBEDC(c); // 8010A2C0
L_8010A2C4:;
  c->r[3]=c->r[29]+0x00001314u; // 8010A2C4
  c->lr=0x8010A2CCu; f_801DC1A4(c); // 8010A2C8
  c->r[28]=c->r[3]|c->r[3]; // 8010A2CC
L_8010A2D0:;
  cmps(c,0,(int32_t)c->r[28],0); // 8010A2D0
  if (!crb(c,2)) { IRQCHK(c); goto L_8010A294; } // 8010A2D4
  c->r[3]=0u+0x80490000u; // 8010A2D8
  c->r[3]=c->r[3]+0x00001314u; // 8010A2DC
  c->lr=0x8010A2E4u; f_801DC1CC(c); // 8010A2E0
  c->r[3]=0u+0x00000000u; // 8010A2E4
  goto L_8010A2F0; // 8010A2E8
L_8010A2EC:;
  c->r[3]=0u+0x00000001u; // 8010A2EC
L_8010A2F0:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010A2F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A2F4
  c->lr=c->r[0]; // 8010A2F8
  c->r[1]=c->r[1]+0x00000020u; // 8010A2FC
  return; // 8010A300
}

// fn_8010A304
void f_8010A304(Ctx* __restrict c) {
  trace_call(0x8010A304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A304
  c->r[0]=c->lr; // 8010A308
  c->r[4]=0u+0x00000000u; // 8010A30C
  c->r[3]=c->r[3]+0x00000008u; // 8010A310
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A314
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010A318
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010A31C
  c->lr=0x8010A324u; f_8009D3D0(c); // 8010A320
  c->lr=0x8010A328u; f_8009D0F4(c); // 8010A324
  c->r[30]=c->r[3]|c->r[3]; // 8010A328
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010A32C
  c->r[4]=c->r[30]|c->r[30]; // 8010A330
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010A334
  c->r[12]=R32(c->r[12]+0x00000098u); // 8010A338
  c->ctr=c->r[12]; // 8010A33C
  if (true) { c->lr=0x8010A344u; dispatch(c,c->ctr); } // 8010A340
  c->r[3]=0u+0x80490000u; // 8010A344
  c->r[4]=c->r[30]|c->r[30]; // 8010A348
  c->r[3]=c->r[3]+0x00001314u; // 8010A34C
  c->lr=0x8010A354u; f_801DBFE4(c); // 8010A350
  c->r[31]=c->r[3]|c->r[3]; // 8010A354
  c->lr=0x8010A35Cu; f_8004FBE8(c); // 8010A358
  c->r[4]=c->r[3]+0x00010000u; // 8010A35C
  {uint32_t ea=c->r[2]+0xFFFF9338u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A360
  W32(c->r[4]+0xFFFF8318u,c->r[31]); // 8010A364
  c->lr=0x8010A36Cu; f_80052A5C(c); // 8010A368
  c->r[3]=R32(c->r[13]+0xFFFF9760u); // 8010A36C
  c->r[4]=c->r[30]|c->r[30]; // 8010A370
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010A374
  c->r[12]=R32(c->r[12]+0x00000028u); // 8010A378
  c->ctr=c->r[12]; // 8010A37C
  if (true) { c->lr=0x8010A384u; dispatch(c,c->ctr); } // 8010A380
  c->r[3]=0u+0x80470000u; // 8010A384
  c->r[3]=c->r[3]+0xFFFF94F8u; // 8010A388
  c->lr=0x8010A390u; f_80066D9C(c); // 8010A38C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A390
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010A394
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010A398
  c->lr=c->r[0]; // 8010A39C
  c->r[1]=c->r[1]+0x00000010u; // 8010A3A0
  return; // 8010A3A4
}

// fn_8010A3A8
void f_8010A3A8(Ctx* __restrict c) {
  trace_call(0x8010A3A8u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A3A8
  c->r[0]=c->lr; // 8010A3AC
  c->r[4]=0u+0x00000000u; // 8010A3B0
  W32(c->r[1]+0x00000114u,c->r[0]); // 8010A3B4
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010A3B8
  c->r[30]=c->r[3]|c->r[3]; // 8010A3BC
  c->r[3]=c->r[3]+0x00000008u; // 8010A3C0
  c->lr=0x8010A3C8u; f_8009D3D0(c); // 8010A3C4
  c->lr=0x8010A3CCu; f_8009D0F4(c); // 8010A3C8
  c->r[4]=0u+0x803E0000u; // 8010A3CC
  c->r[5]=c->r[3]|c->r[3]; // 8010A3D0
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 8010A3D4
  c->r[3]=c->r[1]+0x00000008u; // 8010A3D8
  c->r[4]=c->r[4]+0x00000237u; // 8010A3DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010A3E0
  c->lr=0x8010A3E8u; f_80291CC4(c); // 8010A3E4
  c->r[3]=0u+0x80490000u; // 8010A3E8
  c->r[4]=c->r[1]+0x00000008u; // 8010A3EC
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 8010A3F0
  c->lr=0x8010A3F8u; f_80103094(c); // 8010A3F4
  c->r[0]=R32(c->r[30]+0x00000004u); // 8010A3F8
  c->r[31]=c->r[3]|c->r[3]; // 8010A3FC
  cmps(c,0,(int32_t)c->r[0],3827); // 8010A400
  if (crb(c,2)) { goto L_8010A418; } // 8010A404
  if (!crb(c,0)) { goto L_8010A468; } // 8010A408
  cmps(c,0,(int32_t)c->r[0],0); // 8010A40C
  if (crb(c,2)) { goto L_8010A418; } // 8010A410
  goto L_8010A468; // 8010A414
L_8010A418:;
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 8010A418
  c->r[0]=rotl(c->r[0],25)&0x00000001u; cr0(c,c->r[0]); // 8010A41C
  if (!crb(c,2)) { goto L_8010A430; } // 8010A420
  c->r[0]=0u+0x00000EF3u; // 8010A424
  W32(c->r[30]+0x00000004u,c->r[0]); // 8010A428
  goto L_8010A468; // 8010A42C
L_8010A430:;
  c->lr=0x8010A434u; f_8004FBE8(c); // 8010A430
  c->r[3]=c->r[3]+0x00010000u; // 8010A434
  c->r[30]=R32(c->r[31]+0x00000010u); // 8010A438
  c->r[31]=R32(c->r[3]+0xFFFF831Cu); // 8010A43C
  c->lr=0x8010A444u; f_800DA124(c); // 8010A440
  c->r[4]=c->r[3]|c->r[3]; // 8010A444
  c->r[3]=c->r[31]|c->r[31]; // 8010A448
  c->r[5]=c->r[30]|c->r[30]; // 8010A44C
  c->lr=0x8010A454u; f_801D5DCC(c); // 8010A450
  c->r[3]=c->r[31]|c->r[31]; // 8010A454
  c->r[4]=0u+0x00000001u; // 8010A458
  c->lr=0x8010A460u; f_800A724C(c); // 8010A45C
  c->r[3]=0u+0x00000000u; // 8010A460
  goto L_8010A46C; // 8010A464
L_8010A468:;
  c->r[3]=0u+0x00000001u; // 8010A468
L_8010A46C:;
  {uint32_t ea=c->r[1]+0x00000108u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010A46C
  c->r[0]=R32(c->r[1]+0x00000114u); // 8010A470
  c->lr=c->r[0]; // 8010A474
  c->r[1]=c->r[1]+0x00000110u; // 8010A478
  return; // 8010A47C
}

// fn_8010A480
void f_8010A480(Ctx* __restrict c) {
  trace_call(0x8010A480u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A480
  c->r[0]=c->lr; // 8010A484
  c->r[4]=0u+0x00000000u; // 8010A488
  W32(c->r[1]+0x00000114u,c->r[0]); // 8010A48C
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 8010A490
  c->r[31]=c->r[3]|c->r[3]; // 8010A494
  c->r[3]=c->r[3]+0x00000008u; // 8010A498
  c->lr=0x8010A4A0u; f_8009D3D0(c); // 8010A49C
  c->lr=0x8010A4A4u; f_8009D0F4(c); // 8010A4A0
  c->r[0]=R32(c->r[31]+0x00000004u); // 8010A4A4
  cmps(c,0,(int32_t)c->r[0],3870); // 8010A4A8
  if (crb(c,2)) { goto L_8010A4DC; } // 8010A4AC
  if (!crb(c,0)) { goto L_8010A510; } // 8010A4B0
  cmps(c,0,(int32_t)c->r[0],0); // 8010A4B4
  if (crb(c,2)) { goto L_8010A4C0; } // 8010A4B8
  goto L_8010A510; // 8010A4BC
L_8010A4C0:;
  c->lr=0x8010A4C4u; f_8004FBE8(c); // 8010A4C0
  c->r[3]=c->r[3]+0x00010000u; // 8010A4C4
  c->r[3]=R32(c->r[3]+0xFFFF831Cu); // 8010A4C8
  c->lr=0x8010A4D0u; f_801D5F18(c); // 8010A4CC
  c->r[0]=0u+0x00000F1Eu; // 8010A4D0
  W32(c->r[31]+0x00000004u,c->r[0]); // 8010A4D4
  goto L_8010A510; // 8010A4D8
L_8010A4DC:;
  c->r[4]=0u+0x803E0000u; // 8010A4DC
  c->r[5]=c->r[3]|c->r[3]; // 8010A4E0
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 8010A4E4
  c->r[3]=c->r[1]+0x00000008u; // 8010A4E8
  c->r[4]=c->r[4]+0x00000237u; // 8010A4EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010A4F0
  c->lr=0x8010A4F8u; f_80291CC4(c); // 8010A4F4
  c->r[3]=0u+0x80490000u; // 8010A4F8
  c->r[4]=c->r[1]+0x00000008u; // 8010A4FC
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 8010A500
  c->lr=0x8010A508u; f_80103354(c); // 8010A504
  c->r[3]=0u+0x00000000u; // 8010A508
  goto L_8010A514; // 8010A50C
L_8010A510:;
  c->r[3]=0u+0x00000001u; // 8010A510
L_8010A514:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 8010A514
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 8010A518
  c->lr=c->r[0]; // 8010A51C
  c->r[1]=c->r[1]+0x00000110u; // 8010A520
  return; // 8010A524
}

// fn_8010A528
void f_8010A528(Ctx* __restrict c) {
  trace_call(0x8010A528u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A528
  c->r[0]=c->lr; // 8010A52C
  c->r[4]=0u+0x00000000u; // 8010A530
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A534
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8010A538
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8010A53C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010A540
  c->r[31]=c->r[3]|c->r[3]; // 8010A544
  c->r[3]=c->r[3]+0x00000008u; // 8010A548
  c->lr=0x8010A550u; f_8009D3D0(c); // 8010A54C
  c->lr=0x8010A554u; f_8009D0A0(c); // 8010A550
  c->f[31]=c->f[1]; // 8010A554
  c->r[3]=c->r[31]+0x00000008u; // 8010A558
  c->r[4]=0u+0x00000001u; // 8010A55C
  c->lr=0x8010A564u; f_8009D3D0(c); // 8010A560
  c->lr=0x8010A568u; f_8009D0A0(c); // 8010A564
  c->f[30]=c->f[1]; // 8010A568
  c->r[3]=c->r[31]+0x00000008u; // 8010A56C
  c->r[4]=0u+0x00000002u; // 8010A570
  c->lr=0x8010A578u; f_8009D3D0(c); // 8010A574
  c->lr=0x8010A57Cu; f_8009D0A0(c); // 8010A578
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010A57C
  c->f[3]=c->f[1]; // 8010A580
  c->f[1]=c->f[31]; // 8010A584
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010A588
  c->f[2]=c->f[30]; // 8010A58C
  c->r[12]=R32(c->r[12]+0x00000060u); // 8010A590
  c->ctr=c->r[12]; // 8010A594
  if (true) { c->lr=0x8010A59Cu; dispatch(c,c->ctr); } // 8010A598
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A59C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8010A5A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8010A5A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010A5A8
  c->lr=c->r[0]; // 8010A5AC
  c->r[1]=c->r[1]+0x00000020u; // 8010A5B0
  return; // 8010A5B4
}

// fn_8010A5B8
void f_8010A5B8(Ctx* __restrict c) {
  trace_call(0x8010A5B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A5B8
  c->r[0]=c->lr; // 8010A5BC
  c->r[4]=0u+0x00000000u; // 8010A5C0
  c->r[3]=c->r[3]+0x00000008u; // 8010A5C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A5C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010A5CC
  c->lr=0x8010A5D4u; f_8009D3D0(c); // 8010A5D0
  c->lr=0x8010A5D8u; f_8009D188(c); // 8010A5D4
  c->r[0]=R8(c->r[13]+0xFFFF9501u); // 8010A5D8
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8010A5DC
  c->r[31]=addc(c,~c->r[4],c->r[3],c->xer_ca); // 8010A5E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8010A5E4
  if (!crb(c,2)) { goto L_8010A600; } // 8010A5E8
  c->r[3]=0u+0x80470000u; // 8010A5EC
  c->r[3]=c->r[3]+0x00000DC8u; // 8010A5F0
  c->lr=0x8010A5F8u; f_80131AFC(c); // 8010A5F4
  c->r[0]=0u+0x00000001u; // 8010A5F8
  W8(c->r[13]+0xFFFF9501u,c->r[0]); // 8010A5FC
L_8010A600:;
  c->r[3]=0u+0x80470000u; // 8010A600
  {uint32_t ea=c->r[2]+0xFFFF9308u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A604
  c->r[4]=c->r[31]|c->r[31]; // 8010A608
  c->r[3]=c->r[3]+0x00000DC8u; // 8010A60C
  c->lr=0x8010A614u; f_80131BF8(c); // 8010A610
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A614
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010A618
  c->lr=c->r[0]; // 8010A61C
  c->r[1]=c->r[1]+0x00000010u; // 8010A620
  return; // 8010A624
}

// fn_8010A628
void f_8010A628(Ctx* __restrict c) {
  trace_call(0x8010A628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A628
  c->r[0]=c->lr; // 8010A62C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A630
  c->r[11]=c->r[1]+0x00000020u; // 8010A634
  c->lr=0x8010A63Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010A638
  c->r[29]=c->r[3]|c->r[3]; // 8010A63C
  c->r[4]=0u+0x00000000u; // 8010A640
  c->r[3]=c->r[3]+0x00000008u; // 8010A644
  c->lr=0x8010A64Cu; f_8009D3D0(c); // 8010A648
  c->lr=0x8010A650u; f_8009D188(c); // 8010A64C
  c->r[30]=c->r[3]|c->r[3]; // 8010A650
  c->r[3]=c->r[29]+0x00000008u; // 8010A654
  c->r[4]=0u+0x00000001u; // 8010A658
  c->lr=0x8010A660u; f_8009D3D0(c); // 8010A65C
  c->lr=0x8010A664u; f_8009D188(c); // 8010A660
  c->r[29]=c->r[3]|c->r[3]; // 8010A664
  c->lr=0x8010A66Cu; f_80061A4C(c); // 8010A668
  c->r[4]=0u+0x00000002u; // 8010A66C
  c->lr=0x8010A674u; f_80062AC4(c); // 8010A670
  c->lr=0x8010A678u; f_80061A4C(c); // 8010A674
  c->r[31]=c->r[3]+0x000000ECu; // 8010A678
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A67C
  c->r[3]=c->r[31]|c->r[31]; // 8010A680
  c->r[4]=c->r[30]|c->r[30]; // 8010A684
  c->r[5]=c->r[29]|c->r[29]; // 8010A688
  c->r[6]=0u+0x00000000u; // 8010A68C
  c->lr=0x8010A694u; f_8012CFA0(c); // 8010A690
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A694
  c->r[3]=c->r[31]|c->r[31]; // 8010A698
  c->lr=0x8010A6A0u; f_8012D1D0(c); // 8010A69C
  c->lr=0x8010A6A4u; f_80061A4C(c); // 8010A6A0
  c->r[4]=0u+0x00000001u; // 8010A6A4
  c->r[3]=c->r[3]+0x000000ECu; // 8010A6A8
  c->lr=0x8010A6B0u; f_8012D1D4(c); // 8010A6AC
  c->r[11]=c->r[1]+0x00000020u; // 8010A6B0
  c->lr=0x8010A6B8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010A6B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A6B8
  c->lr=c->r[0]; // 8010A6BC
  c->r[1]=c->r[1]+0x00000020u; // 8010A6C0
  return; // 8010A6C4
}

// fn_8010A6C8
void f_8010A6C8(Ctx* __restrict c) {
  trace_call(0x8010A6C8u);
  {uint32_t ea=c->r[1]+0xFFFFFD60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A6C8
  c->r[0]=c->lr; // 8010A6CC
  W32(c->r[1]+0x000002A4u,c->r[0]); // 8010A6D0
  c->r[11]=c->r[1]+0x000002A0u; // 8010A6D4
  c->lr=0x8010A6DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010A6D8
  c->r[26]=c->r[3]|c->r[3]; // 8010A6DC
  c->r[4]=0u+0x00000000u; // 8010A6E0
  c->r[3]=c->r[3]+0x00000008u; // 8010A6E4
  c->lr=0x8010A6ECu; f_8009D3D0(c); // 8010A6E8
  c->lr=0x8010A6F0u; f_8009D0F4(c); // 8010A6EC
  c->r[28]=c->r[3]|c->r[3]; // 8010A6F0
  c->r[3]=c->r[26]+0x00000008u; // 8010A6F4
  c->r[4]=0u+0x00000001u; // 8010A6F8
  c->lr=0x8010A700u; f_8009D3D0(c); // 8010A6FC
  c->lr=0x8010A704u; f_8009D188(c); // 8010A700
  c->r[0]=R32(c->r[26]+0x00000004u); // 8010A704
  c->r[29]=c->r[3]|c->r[3]; // 8010A708
  cmps(c,0,(int32_t)c->r[0],4003); // 8010A70C
  if (crb(c,2)) { goto L_8010A724; } // 8010A710
  if (!crb(c,0)) { goto L_8010A890; } // 8010A714
  cmps(c,0,(int32_t)c->r[0],0); // 8010A718
  if (crb(c,2)) { goto L_8010A724; } // 8010A71C
  goto L_8010A890; // 8010A720
L_8010A724:;
  c->r[3]=0u+0x80490000u; // 8010A724
  c->r[4]=c->r[28]|c->r[28]; // 8010A728
  c->r[3]=c->r[3]+0x00004718u; // 8010A72C
  c->lr=0x8010A734u; f_802933D8(c); // 8010A730
  c->r[30]=0u+0x803E0000u; // 8010A734
  c->r[5]=c->r[28]|c->r[28]; // 8010A738
  c->r[30]=c->r[30]+0xFFFFD1C8u; // 8010A73C
  c->r[3]=c->r[1]+0x00000178u; // 8010A740
  c->r[4]=c->r[30]+0x00000240u; // 8010A744
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010A748
  c->lr=0x8010A750u; f_80291CC4(c); // 8010A74C
  c->r[31]=0u+0x80490000u; // 8010A750
  c->r[4]=c->r[1]+0x00000178u; // 8010A754
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 8010A758
  c->lr=0x8010A760u; f_80103094(c); // 8010A75C
  c->r[27]=R32(c->r[3]+0x00000010u); // 8010A760
  cmps(c,0,(int32_t)c->r[27],0); // 8010A764
  if (!crb(c,2)) { goto L_8010A7F8; } // 8010A768
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010A76C
  c->r[4]=0u+0xFFFFFFFFu; // 8010A770
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010A774
  c->r[12]=R32(c->r[12]+0x00000044u); // 8010A778
  c->ctr=c->r[12]; // 8010A77C
  if (true) { c->lr=0x8010A784u; dispatch(c,c->ctr); } // 8010A780
  c->r[5]=c->r[3]|c->r[3]; // 8010A784
  c->r[3]=c->r[1]+0x00000078u; // 8010A788
  c->r[4]=c->r[30]+0x00000247u; // 8010A78C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010A790
  c->lr=0x8010A798u; f_80291CC4(c); // 8010A794
  c->r[3]=c->r[31]+0xFFFFF8B8u; // 8010A798
  c->r[4]=c->r[1]+0x00000078u; // 8010A79C
  c->lr=0x8010A7A4u; f_80103094(c); // 8010A7A0
  c->r[4]=R32(c->r[3]+0x00000010u); // 8010A7A4
  cmps(c,0,(int32_t)c->r[4],0); // 8010A7A8
  if (crb(c,2)) { goto L_8010A7EC; } // 8010A7AC
  c->r[3]=c->r[1]+0x00000008u; // 8010A7B0
  c->lr=0x8010A7B8u; f_801328F8(c); // 8010A7B4
  c->r[3]=c->r[1]+0x00000008u; // 8010A7B8
  c->r[4]=c->r[1]+0x00000178u; // 8010A7BC
  c->lr=0x8010A7C4u; f_80132AE0(c); // 8010A7C0
  cmps(c,0,(int32_t)c->r[3],0); // 8010A7C4
  c->r[27]=c->r[3]|c->r[3]; // 8010A7C8
  if (crb(c,2)) { goto L_8010A7E0; } // 8010A7CC
  c->r[3]=c->r[1]+0x00000008u; // 8010A7D0
  c->r[4]=0u+0xFFFFFFFFu; // 8010A7D4
  c->lr=0x8010A7DCu; f_80132958(c); // 8010A7D8
  goto L_8010A7F8; // 8010A7DC
L_8010A7E0:;
  c->r[3]=c->r[1]+0x00000008u; // 8010A7E0
  c->r[4]=0u+0xFFFFFFFFu; // 8010A7E4
  c->lr=0x8010A7ECu; f_80132958(c); // 8010A7E8
L_8010A7EC:;
  c->r[0]=0u+0x00000FA3u; // 8010A7EC
  W32(c->r[26]+0x00000004u,c->r[0]); // 8010A7F0
  goto L_8010A890; // 8010A7F4
L_8010A7F8:;
  c->lr=0x8010A7FCu; f_80061A4C(c); // 8010A7F8
  c->r[4]=0u+0x00000002u; // 8010A7FC
  c->lr=0x8010A804u; f_80062AC4(c); // 8010A800
  c->lr=0x8010A808u; f_80061A4C(c); // 8010A804
  c->r[0]=c->r[29]^0x80000000u; // 8010A808
  c->r[31]=0u+0x43300000u; // 8010A80C
  W32(c->r[1]+0x0000027Cu,c->r[0]); // 8010A810
  c->r[30]=c->r[3]+0x000000ECu; // 8010A814
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[1]=RF64(ea);} // 8010A818
  c->r[3]=c->r[30]|c->r[30]; // 8010A81C
  W32(c->r[1]+0x00000278u,c->r[31]); // 8010A820
  c->r[4]=c->r[27]|c->r[27]; // 8010A824
  c->r[5]=0u+0x00000000u; // 8010A828
  c->r[6]=0u+0x00000000u; // 8010A82C
  {uint32_t ea=c->r[1]+0x00000278u; c->f[0]=RF64(ea);} // 8010A830
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8010A834
  c->lr=0x8010A83Cu; f_8012D0B8(c); // 8010A838
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010A83C
  c->r[3]=c->r[30]|c->r[30]; // 8010A840
  c->lr=0x8010A848u; f_8012D1D0(c); // 8010A844
  c->lr=0x8010A84Cu; f_80061A4C(c); // 8010A848
  c->r[4]=0u+0x00000001u; // 8010A84C
  c->r[3]=c->r[3]+0x000000ECu; // 8010A850
  c->lr=0x8010A858u; f_8012D1D4(c); // 8010A854
  c->r[0]=c->r[29]^0x80000000u; // 8010A858
  c->r[3]=R32(c->r[13]+0xFFFF97C8u); // 8010A85C
  W32(c->r[1]+0x00000284u,c->r[0]); // 8010A860
  c->r[4]=c->r[28]|c->r[28]; // 8010A864
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010A868
  W32(c->r[1]+0x00000280u,c->r[31]); // 8010A86C
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[1]=RF64(ea);} // 8010A870
  {uint32_t ea=c->r[1]+0x00000280u; c->f[0]=RF64(ea);} // 8010A874
  c->r[12]=R32(c->r[12]+0x00000010u); // 8010A878
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8010A87C
  c->ctr=c->r[12]; // 8010A880
  if (true) { c->lr=0x8010A888u; dispatch(c,c->ctr); } // 8010A884
  c->r[3]=0u+0x00000000u; // 8010A888
  goto L_8010A894; // 8010A88C
L_8010A890:;
  c->r[3]=0u+0x00000001u; // 8010A890
L_8010A894:;
  c->r[11]=c->r[1]+0x000002A0u; // 8010A894
  c->lr=0x8010A89Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010A898
  c->r[0]=R32(c->r[1]+0x000002A4u); // 8010A89C
  c->lr=c->r[0]; // 8010A8A0
  c->r[1]=c->r[1]+0x000002A0u; // 8010A8A4
  return; // 8010A8A8
}

// fn_8010A8AC
void f_8010A8AC(Ctx* __restrict c) {
  trace_call(0x8010A8ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A8AC
  c->r[0]=c->lr; // 8010A8B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A8B4
  c->lr=0x8010A8BCu; f_80061A4C(c); // 8010A8B8
  c->r[3]=c->r[3]+0x000000ECu; // 8010A8BC
  c->lr=0x8010A8C4u; f_8012CF88(c); // 8010A8C0
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8010A8C4
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8010A8C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A8CC
  c->lr=c->r[0]; // 8010A8D0
  c->r[1]=c->r[1]+0x00000010u; // 8010A8D4
  return; // 8010A8D8
}

// fn_8010A8DC
void f_8010A8DC(Ctx* __restrict c) {
  trace_call(0x8010A8DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A8DC
  c->r[0]=c->lr; // 8010A8E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A8E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010A8E8
  c->lr=0x8010A8F0u; f_80061A4C(c); // 8010A8EC
  c->r[31]=c->r[3]+0x000000ECu; // 8010A8F0
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010A8F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010A8F8
  c->r[12]=R32(c->r[12]+0x00000038u); // 8010A8FC
  c->ctr=c->r[12]; // 8010A900
  if (true) { c->lr=0x8010A908u; dispatch(c,c->ctr); } // 8010A904
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010A908
  fcmp(c,0,c->f[1],c->f[0]); // 8010A90C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8010A910
  if (!crb(c,2)) { goto L_8010A920; } // 8010A914
  c->r[3]=c->r[31]|c->r[31]; // 8010A918
  c->lr=0x8010A920u; f_8012D2C8(c); // 8010A91C
L_8010A920:;
  c->r[3]=c->r[31]|c->r[31]; // 8010A920
  c->r[4]=0u+0x00000002u; // 8010A924
  c->r[5]=0u+0x00000001u; // 8010A928
  c->lr=0x8010A930u; f_8012D27C(c); // 8010A92C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A930
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010A934
  c->lr=c->r[0]; // 8010A938
  c->r[1]=c->r[1]+0x00000010u; // 8010A93C
  return; // 8010A940
}

// fn_8010A944
void f_8010A944(Ctx* __restrict c) {
  trace_call(0x8010A944u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A944
  c->r[0]=c->lr; // 8010A948
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A94C
  c->lr=0x8010A954u; f_80061A4C(c); // 8010A950
  c->r[4]=0u+0x00000002u; // 8010A954
  c->r[5]=0u+0x00000000u; // 8010A958
  c->r[3]=c->r[3]+0x000000ECu; // 8010A95C
  c->lr=0x8010A964u; f_8012D27C(c); // 8010A960
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A964
  c->lr=c->r[0]; // 8010A968
  c->r[1]=c->r[1]+0x00000010u; // 8010A96C
  return; // 8010A970
}

// fn_8010A974
void f_8010A974(Ctx* __restrict c) {
  trace_call(0x8010A974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A974
  c->r[0]=c->lr; // 8010A978
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A97C
  c->lr=0x8010A984u; f_80061A4C(c); // 8010A980
  c->r[3]=c->r[3]+0x000000ECu; // 8010A984
  c->lr=0x8010A98Cu; f_8012CF84(c); // 8010A988
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A98C
  c->lr=c->r[0]; // 8010A990
  c->r[1]=c->r[1]+0x00000010u; // 8010A994
  return; // 8010A998
}

// fn_8010A99C
void f_8010A99C(Ctx* __restrict c) {
  trace_call(0x8010A99Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A99C
  c->r[0]=c->lr; // 8010A9A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A9A4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8010A9A8
  c->r[4]=0u+0x00000000u; // 8010A9AC
  c->r[3]=c->r[3]+0x00000008u; // 8010A9B0
  c->lr=0x8010A9B8u; f_8009D3D0(c); // 8010A9B4
  c->lr=0x8010A9BCu; f_8009D0A0(c); // 8010A9B8
  c->f[31]=c->f[1]; // 8010A9BC
  c->lr=0x8010A9C4u; f_80061A4C(c); // 8010A9C0
  c->f[1]=c->f[31]; // 8010A9C4
  c->r[3]=c->r[3]+0x000000ECu; // 8010A9C8
  c->lr=0x8010A9D0u; f_8012D1D0(c); // 8010A9CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A9D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8010A9D4
  c->lr=c->r[0]; // 8010A9D8
  c->r[1]=c->r[1]+0x00000010u; // 8010A9DC
  return; // 8010A9E0
}

// fn_8010A9E4
void f_8010A9E4(Ctx* __restrict c) {
  trace_call(0x8010A9E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A9E4
  c->r[0]=c->lr; // 8010A9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A9EC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8010A9F0
  c->r[4]=0u+0x00000000u; // 8010A9F4
  c->r[3]=c->r[3]+0x00000008u; // 8010A9F8
  c->lr=0x8010AA00u; f_8009D3D0(c); // 8010A9FC
  c->lr=0x8010AA04u; f_8009D0A0(c); // 8010AA00
  c->f[31]=c->f[1]; // 8010AA04
  c->lr=0x8010AA0Cu; f_80061A4C(c); // 8010AA08
  c->f[1]=c->f[31]; // 8010AA0C
  c->r[3]=c->r[3]+0x000000ECu; // 8010AA10
  c->lr=0x8010AA18u; f_8012D2C8(c); // 8010AA14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010AA18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8010AA1C
  c->lr=c->r[0]; // 8010AA20
  c->r[1]=c->r[1]+0x00000010u; // 8010AA24
  return; // 8010AA28
}

// fn_8010AA2C
void f_8010AA2C(Ctx* __restrict c) {
  trace_call(0x8010AA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AA2C
  c->r[0]=c->lr; // 8010AA30
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010AA34
  c->r[11]=c->r[1]+0x00000040u; // 8010AA38
  c->lr=0x8010AA40u; { {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 8010AA3C
  W32(c->r[1]+0x00000024u,c->r[31]); // 8010AA40
  c->r[31]=c->r[3]|c->r[3]; // 8010AA44
  c->r[4]=0u+0x00000000u; // 8010AA48
  c->r[3]=c->r[3]+0x00000008u; // 8010AA4C
  c->lr=0x8010AA54u; f_8009D3D0(c); // 8010AA50
  c->lr=0x8010AA58u; f_8009D0A0(c); // 8010AA54
  c->f[29]=c->f[1]; // 8010AA58
  c->r[3]=c->r[31]+0x00000008u; // 8010AA5C
  c->r[4]=0u+0x00000001u; // 8010AA60
  c->lr=0x8010AA68u; f_8009D3D0(c); // 8010AA64
  c->lr=0x8010AA6Cu; f_8009D0A0(c); // 8010AA68
  c->f[30]=c->f[1]; // 8010AA6C
  c->r[3]=c->r[31]+0x00000008u; // 8010AA70
  c->r[4]=0u+0x00000002u; // 8010AA74
  c->lr=0x8010AA7Cu; f_8009D3D0(c); // 8010AA78
  c->lr=0x8010AA80u; f_8009D0A0(c); // 8010AA7C
  c->f[31]=c->f[1]; // 8010AA80
  c->r[3]=c->r[31]+0x00000008u; // 8010AA84
  c->r[4]=0u+0x00000003u; // 8010AA88
  c->lr=0x8010AA90u; f_8009D3D0(c); // 8010AA8C
  c->lr=0x8010AA94u; f_8009D0A0(c); // 8010AA90
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[29]);} // 8010AA94
  c->f[29]=c->f[1]; // 8010AA98
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 8010AA9C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8010AAA0
  c->lr=0x8010AAA8u; f_80061A4C(c); // 8010AAA4
  c->f[1]=c->f[29]; // 8010AAA8
  c->r[3]=R32(c->r[3]+0x000008BCu); // 8010AAAC
  c->r[4]=c->r[1]+0x00000008u; // 8010AAB0
  c->r[5]=0u+0x00000007u; // 8010AAB4
  c->lr=0x8010AABCu; f_801DB31C(c); // 8010AAB8
  c->r[11]=c->r[1]+0x00000040u; // 8010AABC
  c->lr=0x8010AAC4u; { {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 8010AAC0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010AAC4
  c->r[31]=R32(c->r[1]+0x00000024u); // 8010AAC8
  c->lr=c->r[0]; // 8010AACC
  c->r[1]=c->r[1]+0x00000040u; // 8010AAD0
  return; // 8010AAD4
}

// fn_8010AAD8
void f_8010AAD8(Ctx* __restrict c) {
  trace_call(0x8010AAD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AAD8
  c->r[0]=c->lr; // 8010AADC
  W32(c->r[1]+0x00000074u,c->r[0]); // 8010AAE0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8010AAE4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8010AAE8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8010AAEC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8010AAF0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 8010AAF4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 8010AAF8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 8010AAFC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 8010AB00
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[27]);} // 8010AB04
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,27,ea,0,0);} // 8010AB08
  c->r[4]=0u+0x00000000u; // 8010AB0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010AB10
  c->r[31]=c->r[3]|c->r[3]; // 8010AB14
  c->r[3]=c->r[3]+0x00000008u; // 8010AB18
  c->lr=0x8010AB20u; f_8009D3D0(c); // 8010AB1C
  c->lr=0x8010AB24u; f_8009D0A0(c); // 8010AB20
  c->f[29]=c->f[1]; // 8010AB24
  c->r[3]=c->r[31]+0x00000008u; // 8010AB28
  c->r[4]=0u+0x00000001u; // 8010AB2C
  c->lr=0x8010AB34u; f_8009D3D0(c); // 8010AB30
  c->lr=0x8010AB38u; f_8009D0A0(c); // 8010AB34
  c->f[30]=c->f[1]; // 8010AB38
  c->r[3]=c->r[31]+0x00000008u; // 8010AB3C
  c->r[4]=0u+0x00000002u; // 8010AB40
  c->lr=0x8010AB48u; f_8009D3D0(c); // 8010AB44
  c->lr=0x8010AB4Cu; f_8009D0A0(c); // 8010AB48
  c->f[31]=c->f[1]; // 8010AB4C
  c->r[3]=c->r[31]+0x00000008u; // 8010AB50
  c->r[4]=0u+0x00000003u; // 8010AB54
  c->lr=0x8010AB5Cu; f_8009D3D0(c); // 8010AB58
  c->lr=0x8010AB60u; f_8009D0A0(c); // 8010AB5C
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010AB60
  c->r[3]=c->r[31]+0x00000008u; // 8010AB64
  c->r[4]=0u+0x00000004u; // 8010AB68
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 8010AB6C
  c->lr=0x8010AB74u; f_8009D3D0(c); // 8010AB70
  c->lr=0x8010AB78u; f_8009D0A0(c); // 8010AB74
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010AB78
  c->r[3]=c->r[31]+0x00000008u; // 8010AB7C
  c->r[4]=0u+0x00000005u; // 8010AB80
  c->f[27]=c->ps1[27]=S(c->f[0]*c->f[1]); // 8010AB84
  c->lr=0x8010AB8Cu; f_8009D3D0(c); // 8010AB88
  c->lr=0x8010AB90u; f_8009D0A0(c); // 8010AB8C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[29]);} // 8010AB90
  c->f[29]=c->f[1]; // 8010AB94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 8010AB98
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8010AB9C
  c->lr=0x8010ABA4u; f_80061A4C(c); // 8010ABA0
  c->f[1]=c->f[28]; // 8010ABA4
  c->r[3]=R32(c->r[3]+0x000008BCu); // 8010ABA8
  c->f[2]=c->f[27]; // 8010ABAC
  c->r[4]=c->r[1]+0x00000008u; // 8010ABB0
  c->f[3]=c->f[29]; // 8010ABB4
  c->r[5]=0u+0x00000007u; // 8010ABB8
  c->lr=0x8010ABC0u; f_801DB32C(c); // 8010ABBC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8010ABC0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8010ABC4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8010ABC8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8010ABCC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 8010ABD0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 8010ABD4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 8010ABD8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 8010ABDC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,27,ea,0,0);} // 8010ABE0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[27]=RF64(ea);} // 8010ABE4
  c->r[0]=R32(c->r[1]+0x00000074u); // 8010ABE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010ABEC
  c->lr=c->r[0]; // 8010ABF0
  c->r[1]=c->r[1]+0x00000070u; // 8010ABF4
  return; // 8010ABF8
}

// fn_8010ABFC
void f_8010ABFC(Ctx* __restrict c) {
  trace_call(0x8010ABFCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ABFC
  c->r[0]=c->lr; // 8010AC00
  W32(c->r[1]+0x00000094u,c->r[0]); // 8010AC04
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8010AC08
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8010AC0C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8010AC10
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8010AC14
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 8010AC18
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8010AC1C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 8010AC20
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 8010AC24
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 8010AC28
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 8010AC2C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[26]);} // 8010AC30
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,26,ea,0,0);} // 8010AC34
  c->r[11]=c->r[1]+0x00000030u; // 8010AC38
  c->lr=0x8010AC40u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010AC3C
  c->r[29]=c->r[3]|c->r[3]; // 8010AC40
  c->r[4]=0u+0x00000000u; // 8010AC44
  c->r[3]=c->r[3]+0x00000008u; // 8010AC48
  c->lr=0x8010AC50u; f_8009D3D0(c); // 8010AC4C
  c->lr=0x8010AC54u; f_8009D188(c); // 8010AC50
  c->r[30]=c->r[3]|c->r[3]; // 8010AC54
  c->r[3]=c->r[29]+0x00000008u; // 8010AC58
  c->r[4]=0u+0x00000001u; // 8010AC5C
  c->lr=0x8010AC64u; f_8009D3D0(c); // 8010AC60
  c->lr=0x8010AC68u; f_8009D188(c); // 8010AC64
  c->r[31]=c->r[3]|c->r[3]; // 8010AC68
  c->r[3]=c->r[29]+0x00000008u; // 8010AC6C
  c->r[4]=0u+0x00000002u; // 8010AC70
  c->lr=0x8010AC78u; f_8009D3D0(c); // 8010AC74
  c->lr=0x8010AC7Cu; f_8009D0A0(c); // 8010AC78
  c->f[29]=c->f[1]; // 8010AC7C
  c->r[3]=c->r[29]+0x00000008u; // 8010AC80
  c->r[4]=0u+0x00000003u; // 8010AC84
  c->lr=0x8010AC8Cu; f_8009D3D0(c); // 8010AC88
  c->lr=0x8010AC90u; f_8009D0A0(c); // 8010AC8C
  c->f[30]=c->f[1]; // 8010AC90
  c->r[3]=c->r[29]+0x00000008u; // 8010AC94
  c->r[4]=0u+0x00000004u; // 8010AC98
  c->lr=0x8010ACA0u; f_8009D3D0(c); // 8010AC9C
  c->lr=0x8010ACA4u; f_8009D0A0(c); // 8010ACA0
  c->f[31]=c->f[1]; // 8010ACA4
  c->r[3]=c->r[29]+0x00000008u; // 8010ACA8
  c->r[4]=0u+0x00000005u; // 8010ACAC
  c->lr=0x8010ACB4u; f_8009D3D0(c); // 8010ACB0
  c->lr=0x8010ACB8u; f_8009D0A0(c); // 8010ACB4
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010ACB8
  c->r[3]=c->r[29]+0x00000008u; // 8010ACBC
  c->r[4]=0u+0x00000006u; // 8010ACC0
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 8010ACC4
  c->lr=0x8010ACCCu; f_8009D3D0(c); // 8010ACC8
  c->lr=0x8010ACD0u; f_8009D0A0(c); // 8010ACCC
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010ACD0
  c->r[3]=c->r[29]+0x00000008u; // 8010ACD4
  c->r[4]=0u+0x00000007u; // 8010ACD8
  c->f[27]=c->ps1[27]=S(c->f[0]*c->f[1]); // 8010ACDC
  c->lr=0x8010ACE4u; f_8009D3D0(c); // 8010ACE0
  c->lr=0x8010ACE8u; f_8009D0A0(c); // 8010ACE4
  c->f[26]=c->f[1]; // 8010ACE8
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 8010ACEC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[29]);} // 8010ACF0
  c->r[29]=0u+0x00000000u; // 8010ACF4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 8010ACF8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8010ACFC
  if (crb(c,2)) { goto L_8010AD4C; } // 8010AD00
  c->r[0]=0u+0x00000001u; // 8010AD04
  c->r[3]=0u+0x80490000u; // 8010AD08
  W32(c->r[13]+0xFFFF9590u,c->r[0]); // 8010AD0C
  c->r[29]=c->r[29]|0x00000001u; // 8010AD10
  c->r[3]=c->r[3]+0x0000439Cu; // 8010AD14
  c->r[4]=c->r[1]+0x00000008u; // 8010AD18
  W32(c->r[13]+0xFFFF9598u,c->r[31]); // 8010AD1C
  W32(c->r[13]+0xFFFF959Cu,c->r[31]); // 8010AD20
  c->lr=0x8010AD28u; f_8003F468(c); // 8010AD24
  c->r[0]=0u+0x00000000u; // 8010AD28
  c->r[3]=c->r[13]+0xFFFF95B0u; // 8010AD2C
  {uint32_t ea=c->r[13]+0xFFFF95A0u; WF32(ea,c->f[28]);} // 8010AD30
  {uint32_t ea=c->r[13]+0xFFFF95A4u; WF32(ea,c->f[27]);} // 8010AD34
  {uint32_t ea=c->r[13]+0xFFFF95A8u; WF32(ea,c->f[26]);} // 8010AD38
  {uint32_t ea=c->r[13]+0xFFFF95ACu; WF32(ea,c->f[26]);} // 8010AD3C
  W32(c->r[13]+0xFFFF95B0u,c->r[0]); // 8010AD40
  W32(c->r[3]+0x00000004u,c->r[0]); // 8010AD44
  goto L_8010AD58; // 8010AD48
L_8010AD4C:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 8010AD4C
  if (crb(c,2)) { goto L_8010AD58; } // 8010AD50
  c->r[29]=c->r[29]|0x00000001u; // 8010AD54
L_8010AD58:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 8010AD58
  if (crb(c,2)) { goto L_8010AD64; } // 8010AD5C
  c->r[29]=c->r[29]|0x00000002u; // 8010AD60
L_8010AD64:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 8010AD64
  if (crb(c,2)) { goto L_8010AD70; } // 8010AD68
  c->r[29]=c->r[29]|0x00000004u; // 8010AD6C
L_8010AD70:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 8010AD70
  if (!crb(c,2)) { goto L_8010AD9C; } // 8010AD74
  c->lr=0x8010AD7Cu; f_80061A4C(c); // 8010AD78
  c->f[1]=c->f[28]; // 8010AD7C
  c->r[3]=R32(c->r[3]+0x000008BCu); // 8010AD80
  c->f[2]=c->f[27]; // 8010AD84
  c->r[5]=c->r[29]|c->r[29]; // 8010AD88
  c->f[3]=c->f[26]; // 8010AD8C
  c->r[4]=c->r[1]+0x00000008u; // 8010AD90
  c->lr=0x8010AD98u; f_801DB32C(c); // 8010AD94
  goto L_8010ADA0; // 8010AD98
L_8010AD9C:;
  W32(c->r[13]+0xFFFF9594u,c->r[29]); // 8010AD9C
L_8010ADA0:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8010ADA0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8010ADA4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8010ADA8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8010ADAC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 8010ADB0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8010ADB4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 8010ADB8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 8010ADBC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 8010ADC0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 8010ADC4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,26,ea,0,0);} // 8010ADC8
  c->r[11]=c->r[1]+0x00000030u; // 8010ADCC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[26]=RF64(ea);} // 8010ADD0
  c->lr=0x8010ADD8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010ADD4
  c->r[0]=R32(c->r[1]+0x00000094u); // 8010ADD8
  c->lr=c->r[0]; // 8010ADDC
  c->r[1]=c->r[1]+0x00000090u; // 8010ADE0
  return; // 8010ADE4
}

// fn_8010ADE8
void f_8010ADE8(Ctx* __restrict c) {
  trace_call(0x8010ADE8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ADE8
  c->r[0]=c->lr; // 8010ADEC
  W32(c->r[1]+0x00000094u,c->r[0]); // 8010ADF0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8010ADF4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8010ADF8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8010ADFC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8010AE00
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 8010AE04
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8010AE08
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 8010AE0C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 8010AE10
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 8010AE14
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 8010AE18
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[26]);} // 8010AE1C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,26,ea,0,0);} // 8010AE20
  c->r[11]=c->r[1]+0x00000030u; // 8010AE24
  c->lr=0x8010AE2Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010AE28
  c->r[29]=c->r[3]|c->r[3]; // 8010AE2C
  c->r[4]=0u+0x00000000u; // 8010AE30
  c->r[3]=c->r[3]+0x00000008u; // 8010AE34
  c->lr=0x8010AE3Cu; f_8009D3D0(c); // 8010AE38
  c->lr=0x8010AE40u; f_8009D188(c); // 8010AE3C
  c->r[30]=c->r[3]|c->r[3]; // 8010AE40
  c->r[3]=c->r[29]+0x00000008u; // 8010AE44
  c->r[4]=0u+0x00000001u; // 8010AE48
  c->lr=0x8010AE50u; f_8009D3D0(c); // 8010AE4C
  c->lr=0x8010AE54u; f_8009D188(c); // 8010AE50
  c->r[31]=c->r[3]|c->r[3]; // 8010AE54
  c->r[3]=c->r[29]+0x00000008u; // 8010AE58
  c->r[4]=0u+0x00000002u; // 8010AE5C
  c->lr=0x8010AE64u; f_8009D3D0(c); // 8010AE60
  c->lr=0x8010AE68u; f_8009D0A0(c); // 8010AE64
  c->f[27]=c->f[1]; // 8010AE68
  c->r[3]=c->r[29]+0x00000008u; // 8010AE6C
  c->r[4]=0u+0x00000003u; // 8010AE70
  c->lr=0x8010AE78u; f_8009D3D0(c); // 8010AE74
  c->lr=0x8010AE7Cu; f_8009D0A0(c); // 8010AE78
  c->f[28]=c->f[1]; // 8010AE7C
  c->r[3]=c->r[29]+0x00000008u; // 8010AE80
  c->r[4]=0u+0x00000004u; // 8010AE84
  c->lr=0x8010AE8Cu; f_8009D3D0(c); // 8010AE88
  c->lr=0x8010AE90u; f_8009D0A0(c); // 8010AE8C
  c->f[29]=c->f[1]; // 8010AE90
  c->r[3]=c->r[29]+0x00000008u; // 8010AE94
  c->r[4]=0u+0x00000005u; // 8010AE98
  c->lr=0x8010AEA0u; f_8009D3D0(c); // 8010AE9C
  c->lr=0x8010AEA4u; f_8009D0A0(c); // 8010AEA0
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010AEA4
  c->r[3]=c->r[29]+0x00000008u; // 8010AEA8
  c->r[4]=0u+0x00000006u; // 8010AEAC
  c->f[26]=c->ps1[26]=S(c->f[0]*c->f[1]); // 8010AEB0
  c->lr=0x8010AEB8u; f_8009D3D0(c); // 8010AEB4
  c->lr=0x8010AEBCu; f_8009D0A0(c); // 8010AEB8
  c->f[30]=c->f[1]; // 8010AEBC
  c->r[3]=c->r[29]+0x00000008u; // 8010AEC0
  c->r[4]=0u+0x00000007u; // 8010AEC4
  c->lr=0x8010AECCu; f_8009D3D0(c); // 8010AEC8
  c->lr=0x8010AED0u; f_8009D0A0(c); // 8010AECC
  c->r[5]=0u+0x00000001u; // 8010AED0
  c->r[0]=0u+0x00000005u; // 8010AED4
  c->r[3]=0u+0x80490000u; // 8010AED8
  c->f[31]=c->f[1]; // 8010AEDC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[27]);} // 8010AEE0
  c->r[3]=c->r[3]+0x0000439Cu; // 8010AEE4
  c->r[4]=c->r[1]+0x00000008u; // 8010AEE8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[28]);} // 8010AEEC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[29]);} // 8010AEF0
  W32(c->r[13]+0xFFFF9590u,c->r[5]); // 8010AEF4
  W32(c->r[13]+0xFFFF9594u,c->r[0]); // 8010AEF8
  W32(c->r[13]+0xFFFF9598u,c->r[30]); // 8010AEFC
  W32(c->r[13]+0xFFFF959Cu,c->r[31]); // 8010AF00
  c->lr=0x8010AF08u; f_8003F468(c); // 8010AF04
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010AF08
  c->r[0]=0u+0x00000000u; // 8010AF0C
  c->r[3]=c->r[13]+0xFFFF95B0u; // 8010AF10
  {uint32_t ea=c->r[13]+0xFFFF95A4u; WF32(ea,c->f[26]);} // 8010AF14
  {uint32_t ea=c->r[13]+0xFFFF95A0u; WF32(ea,c->f[0]);} // 8010AF18
  {uint32_t ea=c->r[13]+0xFFFF95A8u; WF32(ea,c->f[30]);} // 8010AF1C
  {uint32_t ea=c->r[13]+0xFFFF95ACu; WF32(ea,c->f[31]);} // 8010AF20
  W32(c->r[13]+0xFFFF95B0u,c->r[0]); // 8010AF24
  W32(c->r[3]+0x00000004u,c->r[0]); // 8010AF28
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8010AF2C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8010AF30
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8010AF34
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8010AF38
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 8010AF3C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8010AF40
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 8010AF44
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 8010AF48
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 8010AF4C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 8010AF50
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,26,ea,0,0);} // 8010AF54
  {uint32_t ea=c->r[1]+0x00000030u; c->f[26]=RF64(ea);} // 8010AF58
  c->r[11]=c->r[1]+0x00000030u; // 8010AF5C
  c->lr=0x8010AF64u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010AF60
  c->r[0]=R32(c->r[1]+0x00000094u); // 8010AF64
  c->lr=c->r[0]; // 8010AF68
  c->r[1]=c->r[1]+0x00000090u; // 8010AF6C
  return; // 8010AF70
}

// fn_8010AF74
void f_8010AF74(Ctx* __restrict c) {
  trace_call(0x8010AF74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AF74
  c->r[0]=c->lr; // 8010AF78
  c->r[4]=0u+0x00000000u; // 8010AF7C
  c->r[3]=c->r[3]+0x00000008u; // 8010AF80
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010AF84
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8010AF88
  W32(c->r[1]+0x00000014u,c->r[31]); // 8010AF8C
  c->lr=0x8010AF94u; f_8009D3D0(c); // 8010AF90
  c->lr=0x8010AF98u; f_8009D0A0(c); // 8010AF94
  c->f[31]=c->f[1]; // 8010AF98
  c->lr=0x8010AFA0u; f_80061A4C(c); // 8010AF9C
  c->f[1]=c->f[31]; // 8010AFA0
  c->r[3]=R32(c->r[3]+0x000008BCu); // 8010AFA4
  c->lr=0x8010AFACu; f_801DB594(c); // 8010AFA8
  c->r[31]=0u+0x00000000u; // 8010AFAC
  c->r[3]=c->r[13]+0xFFFF95B0u; // 8010AFB0
  W32(c->r[13]+0xFFFF95B0u,c->r[31]); // 8010AFB4
  W32(c->r[3]+0x00000004u,c->r[31]); // 8010AFB8
  W32(c->r[13]+0xFFFF9590u,c->r[31]); // 8010AFBC
  c->lr=0x8010AFC4u; f_800F65B8(c); // 8010AFC0
  W8(c->r[3]+0x00000008u,c->r[31]); // 8010AFC4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8010AFC8
  c->r[31]=R32(c->r[1]+0x00000014u); // 8010AFCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010AFD0
  c->lr=c->r[0]; // 8010AFD4
  c->r[1]=c->r[1]+0x00000020u; // 8010AFD8
  return; // 8010AFDC
}

// fn_8010AFE0
void f_8010AFE0(Ctx* __restrict c) {
  trace_call(0x8010AFE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AFE0
  c->r[0]=c->lr; // 8010AFE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010AFE8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8010AFEC
  c->r[4]=0u+0x00000000u; // 8010AFF0
  c->r[3]=c->r[3]+0x00000008u; // 8010AFF4
  c->lr=0x8010AFFCu; f_8009D3D0(c); // 8010AFF8
  c->lr=0x8010B000u; f_8009D0A0(c); // 8010AFFC
  c->f[31]=c->f[1]; // 8010B000
  c->lr=0x8010B008u; f_80061A4C(c); // 8010B004
  c->r[4]=0u+0x00000000u; // 8010B008
  c->r[3]=c->r[3]+0x000000ECu; // 8010B00C
  c->lr=0x8010B014u; f_8012D230(c); // 8010B010
  c->lr=0x8010B018u; f_80061A4C(c); // 8010B014
  c->r[4]=0u+0x00000002u; // 8010B018
  c->lr=0x8010B020u; f_80062AC4(c); // 8010B01C
  c->lr=0x8010B024u; f_80061A4C(c); // 8010B020
  c->f[1]=c->f[31]; // 8010B024
  c->lr=0x8010B02Cu; f_80063940(c); // 8010B028
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B02C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8010B030
  c->lr=c->r[0]; // 8010B034
  c->r[1]=c->r[1]+0x00000010u; // 8010B038
  return; // 8010B03C
}

// fn_8010B040
void f_8010B040(Ctx* __restrict c) {
  trace_call(0x8010B040u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B040
  c->r[0]=c->lr; // 8010B044
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010B048
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8010B04C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8010B050
  c->r[4]=0u+0x00000000u; // 8010B054
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010B058
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010B05C
  c->r[30]=c->r[3]|c->r[3]; // 8010B060
  c->r[3]=c->r[3]+0x00000008u; // 8010B064
  c->lr=0x8010B06Cu; f_8009D3D0(c); // 8010B068
  c->lr=0x8010B070u; f_8009D188(c); // 8010B06C
  c->r[31]=c->r[3]|c->r[3]; // 8010B070
  c->r[3]=c->r[30]+0x00000008u; // 8010B074
  c->r[4]=0u+0x00000001u; // 8010B078
  c->lr=0x8010B080u; f_8009D3D0(c); // 8010B07C
  c->lr=0x8010B084u; f_8009D0A0(c); // 8010B080
  c->r[0]=c->r[31]+0xFFF10000u; // 8010B084
  c->f[31]=c->f[1]; // 8010B088
  cmpu(c,0,c->r[0],0x00004240u); // 8010B08C
  c->r[30]=0u+0xFFFFFFFFu; // 8010B090
  if (!crb(c,2)) { goto L_8010B0A0; } // 8010B094
  c->r[30]=0u+0x00000000u; // 8010B098
  goto L_8010B0AC; // 8010B09C
L_8010B0A0:;
  cmpu(c,0,c->r[0],0x00004241u); // 8010B0A0
  if (!crb(c,2)) { goto L_8010B0AC; } // 8010B0A4
  c->r[30]=0u+0x00000001u; // 8010B0A8
L_8010B0AC:;
  c->lr=0x8010B0B0u; f_80061A4C(c); // 8010B0AC
  c->r[4]=0u+0x00000001u; // 8010B0B0
  c->r[3]=c->r[3]+0x000000ECu; // 8010B0B4
  c->lr=0x8010B0BCu; f_8012D230(c); // 8010B0B8
  cmps(c,0,(int32_t)c->r[30],0); // 8010B0BC
  if (crb(c,0)) { goto L_8010B118; } // 8010B0C0
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 8010B0C4
  c->lr=0x8010B0CCu; f_800F39E4(c); // 8010B0C8
  c->r[4]=c->r[30]|c->r[30]; // 8010B0CC
  c->lr=0x8010B0D4u; f_801D5BAC(c); // 8010B0D0
  c->r[5]=0u+0x80490000u; // 8010B0D4
  c->r[4]=c->r[3]|c->r[3]; // 8010B0D8
  c->r[3]=c->r[5]+0xFFFFEE9Cu; // 8010B0DC
  c->lr=0x8010B0E4u; f_80104358(c); // 8010B0E0
  c->r[31]=c->r[3]|c->r[3]; // 8010B0E4
  c->lr=0x8010B0ECu; f_800F65B8(c); // 8010B0E8
  c->r[5]=0u+0x803E0000u; // 8010B0EC
  c->f[1]=c->f[31]; // 8010B0F0
  c->r[5]=c->r[5]+0xFFFFD1C8u; // 8010B0F4
  c->r[4]=R32(c->r[31]+0x00000008u); // 8010B0F8
  c->r[6]=c->r[5]+0x00000256u; // 8010B0FC
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010B100
  c->r[5]=0u+0x00000000u; // 8010B104
  c->r[7]=0u+0x00000001u; // 8010B108
  c->r[8]=0u+0x00000000u; // 8010B10C
  c->lr=0x8010B114u; f_800F61B4(c); // 8010B110
  goto L_8010B210; // 8010B114
L_8010B118:;
  c->lr=0x8010B11Cu; f_8003DA30(c); // 8010B118
  c->lr=0x8010B120u; f_8003ED58(c); // 8010B11C
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010B120
  goto L_8010B1E8; // 8010B124
L_8010B128:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010B128
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010B12C
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010B130
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010B134
  c->ctr=c->r[12]; // 8010B138
  if (true) { c->lr=0x8010B140u; dispatch(c,c->ctr); } // 8010B13C
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010B140
  c->r[4]=0u+0xC0000000u; // 8010B144
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010B148
  c->r[3]=c->r[1]+0x0000001Cu; // 8010B14C
  c->lr=0x8010B154u; f_8003EDD0(c); // 8010B150
  cmps(c,0,(int32_t)c->r[3],0); // 8010B154
  if (crb(c,2)) { goto L_8010B1DC; } // 8010B158
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010B15C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010B160
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010B164
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010B168
  c->ctr=c->r[12]; // 8010B16C
  if (true) { c->lr=0x8010B174u; dispatch(c,c->ctr); } // 8010B170
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010B174
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010B178
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010B17C
  if (crb(c,2)) { goto L_8010B1DC; } // 8010B180
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010B184
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010B188
  c->r[0]=R32(c->r[3]+0x000004C0u); // 8010B18C
  cmpu(c,0,c->r[0],c->r[31]); // 8010B190
  if (!crb(c,2)) { goto L_8010B1DC; } // 8010B194
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010B198
  c->r[12]=R32(c->r[12]+0x00000338u); // 8010B19C
  c->ctr=c->r[12]; // 8010B1A0
  if (true) { c->lr=0x8010B1A8u; dispatch(c,c->ctr); } // 8010B1A4
  c->r[31]=c->r[3]|c->r[3]; // 8010B1A8
  c->lr=0x8010B1B0u; f_800F65B8(c); // 8010B1AC
  c->r[5]=0u+0x803E0000u; // 8010B1B0
  c->f[1]=c->f[31]; // 8010B1B4
  c->r[5]=c->r[5]+0xFFFFD1C8u; // 8010B1B8
  c->r[4]=R32(c->r[31]+0x00000008u); // 8010B1BC
  c->r[6]=c->r[5]+0x00000256u; // 8010B1C0
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010B1C4
  c->r[5]=0u+0x00000000u; // 8010B1C8
  c->r[7]=0u+0x00000001u; // 8010B1CC
  c->r[8]=0u+0x00000000u; // 8010B1D0
  c->lr=0x8010B1D8u; f_800F61B4(c); // 8010B1D4
  goto L_8010B210; // 8010B1D8
L_8010B1DC:;
  c->r[3]=c->r[1]+0x00000010u; // 8010B1DC
  c->r[4]=0u+0x00000000u; // 8010B1E0
  c->lr=0x8010B1E8u; f_8003ED68(c); // 8010B1E4
L_8010B1E8:;
  c->lr=0x8010B1ECu; f_8003DA30(c); // 8010B1E8
  c->lr=0x8010B1F0u; f_8003ECFC(c); // 8010B1EC
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010B1F0
  c->r[4]=c->r[1]+0x00000008u; // 8010B1F4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010B1F8
  c->r[3]=c->r[1]+0x0000000Cu; // 8010B1FC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010B200
  c->lr=0x8010B208u; f_8003ED7C(c); // 8010B204
  cmps(c,0,(int32_t)c->r[3],0); // 8010B208
  if (!crb(c,2)) { IRQCHK(c); goto L_8010B128; } // 8010B20C
L_8010B210:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8010B210
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010B214
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8010B218
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010B21C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8010B220
  c->lr=c->r[0]; // 8010B224
  c->r[1]=c->r[1]+0x00000040u; // 8010B228
  return; // 8010B22C
}

// fn_8010B230
void f_8010B230(Ctx* __restrict c) {
  trace_call(0x8010B230u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B230
  c->r[0]=c->lr; // 8010B234
  W32(c->r[1]+0x000000F4u,c->r[0]); // 8010B238
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 8010B23C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 8010B240
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 8010B244
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 8010B248
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 8010B24C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 8010B250
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 8010B254
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 8010B258
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[27]);} // 8010B25C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,27,ea,0,0);} // 8010B260
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[26]);} // 8010B264
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,26,ea,0,0);} // 8010B268
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[25]);} // 8010B26C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,25,ea,0,0);} // 8010B270
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[24]);} // 8010B274
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,24,ea,0,0);} // 8010B278
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[23]);} // 8010B27C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,23,ea,0,0);} // 8010B280
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[22]);} // 8010B284
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,22,ea,0,0);} // 8010B288
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[21]);} // 8010B28C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,21,ea,0,0);} // 8010B290
  c->r[4]=0u+0x00000000u; // 8010B294
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8010B298
  c->r[31]=c->r[3]|c->r[3]; // 8010B29C
  c->r[3]=c->r[3]+0x00000008u; // 8010B2A0
  c->lr=0x8010B2A8u; f_8009D3D0(c); // 8010B2A4
  c->lr=0x8010B2ACu; f_8009D0A0(c); // 8010B2A8
  c->f[29]=c->f[1]; // 8010B2AC
  c->r[3]=c->r[31]+0x00000008u; // 8010B2B0
  c->r[4]=0u+0x00000001u; // 8010B2B4
  c->lr=0x8010B2BCu; f_8009D3D0(c); // 8010B2B8
  c->lr=0x8010B2C0u; f_8009D0A0(c); // 8010B2BC
  c->f[30]=c->f[1]; // 8010B2C0
  c->r[3]=c->r[31]+0x00000008u; // 8010B2C4
  c->r[4]=0u+0x00000002u; // 8010B2C8
  c->lr=0x8010B2D0u; f_8009D3D0(c); // 8010B2CC
  c->lr=0x8010B2D4u; f_8009D0A0(c); // 8010B2D0
  c->f[31]=c->f[1]; // 8010B2D4
  c->r[3]=c->r[31]+0x00000008u; // 8010B2D8
  c->r[4]=0u+0x00000003u; // 8010B2DC
  c->lr=0x8010B2E4u; f_8009D3D0(c); // 8010B2E0
  c->lr=0x8010B2E8u; f_8009D0A0(c); // 8010B2E4
  c->f[28]=c->f[1]; // 8010B2E8
  c->r[3]=c->r[31]+0x00000008u; // 8010B2EC
  c->r[4]=0u+0x00000004u; // 8010B2F0
  c->lr=0x8010B2F8u; f_8009D3D0(c); // 8010B2F4
  c->lr=0x8010B2FCu; f_8009D0A0(c); // 8010B2F8
  c->f[27]=c->f[1]; // 8010B2FC
  c->r[3]=c->r[31]+0x00000008u; // 8010B300
  c->r[4]=0u+0x00000005u; // 8010B304
  c->lr=0x8010B30Cu; f_8009D3D0(c); // 8010B308
  c->lr=0x8010B310u; f_8009D0A0(c); // 8010B30C
  c->f[26]=c->f[1]; // 8010B310
  c->r[3]=c->r[31]+0x00000008u; // 8010B314
  c->r[4]=0u+0x00000006u; // 8010B318
  c->lr=0x8010B320u; f_8009D3D0(c); // 8010B31C
  c->lr=0x8010B324u; f_8009D0A0(c); // 8010B320
  c->f[25]=c->f[1]; // 8010B324
  c->r[3]=c->r[31]+0x00000008u; // 8010B328
  c->r[4]=0u+0x00000007u; // 8010B32C
  c->lr=0x8010B334u; f_8009D3D0(c); // 8010B330
  c->lr=0x8010B338u; f_8009D0A0(c); // 8010B334
  c->f[24]=c->f[1]; // 8010B338
  c->r[3]=c->r[31]+0x00000008u; // 8010B33C
  c->r[4]=0u+0x00000008u; // 8010B340
  c->lr=0x8010B348u; f_8009D3D0(c); // 8010B344
  c->lr=0x8010B34Cu; f_8009D0A0(c); // 8010B348
  c->f[23]=c->f[1]; // 8010B34C
  c->r[3]=c->r[31]+0x00000008u; // 8010B350
  c->r[4]=0u+0x00000009u; // 8010B354
  c->lr=0x8010B35Cu; f_8009D3D0(c); // 8010B358
  c->lr=0x8010B360u; f_8009D0A0(c); // 8010B35C
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010B360
  c->r[3]=c->r[31]+0x00000008u; // 8010B364
  c->r[4]=0u+0x0000000Au; // 8010B368
  c->f[22]=c->ps1[22]=S(c->f[0]*c->f[1]); // 8010B36C
  c->lr=0x8010B374u; f_8009D3D0(c); // 8010B370
  c->lr=0x8010B378u; f_8009D0A0(c); // 8010B374
  c->f[21]=c->f[1]; // 8010B378
  c->lr=0x8010B380u; f_80061A4C(c); // 8010B37C
  c->r[4]=c->r[3]|c->r[3]; // 8010B380
  c->r[3]=c->r[1]+0x00000008u; // 8010B384
  c->r[4]=c->r[4]+0x0000035Cu; // 8010B388
  c->lr=0x8010B390u; f_8010B468(c); // 8010B38C
  c->f[1]=c->f[28]; // 8010B390
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[29]);} // 8010B394
  c->f[2]=c->f[27]; // 8010B398
  c->r[3]=c->r[1]+0x00000014u; // 8010B39C
  c->f[3]=c->f[26]; // 8010B3A0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 8010B3A4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8010B3A8
  c->lr=0x8010B3B0u; f_80065358(c); // 8010B3AC
  c->f[1]=c->f[25]; // 8010B3B0
  c->r[3]=c->r[1]+0x00000020u; // 8010B3B4
  c->f[2]=c->f[24]; // 8010B3B8
  c->f[3]=c->f[23]; // 8010B3BC
  c->lr=0x8010B3C4u; f_80065358(c); // 8010B3C0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[22]);} // 8010B3C4
  c->lr=0x8010B3CCu; f_80061A4C(c); // 8010B3C8
  c->r[4]=0u+0x00000001u; // 8010B3CC
  c->r[3]=c->r[3]+0x000000ECu; // 8010B3D0
  c->lr=0x8010B3D8u; f_8012D230(c); // 8010B3D4
  c->lr=0x8010B3DCu; f_80061A4C(c); // 8010B3D8
  c->r[4]=c->r[1]+0x00000008u; // 8010B3DC
  c->lr=0x8010B3E4u; f_80062B34(c); // 8010B3E0
  c->lr=0x8010B3E8u; f_80061A4C(c); // 8010B3E4
  c->r[4]=0u+0x00000005u; // 8010B3E8
  c->lr=0x8010B3F0u; f_80062AC4(c); // 8010B3EC
  c->lr=0x8010B3F4u; f_80061A4C(c); // 8010B3F0
  c->f[1]=c->f[21]; // 8010B3F4
  c->lr=0x8010B3FCu; f_80063940(c); // 8010B3F8
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 8010B3FC
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 8010B400
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 8010B404
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 8010B408
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 8010B40C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 8010B410
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 8010B414
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 8010B418
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,27,ea,0,0);} // 8010B41C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[27]=RF64(ea);} // 8010B420
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,26,ea,0,0);} // 8010B424
  {uint32_t ea=c->r[1]+0x00000090u; c->f[26]=RF64(ea);} // 8010B428
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,25,ea,0,0);} // 8010B42C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[25]=RF64(ea);} // 8010B430
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,24,ea,0,0);} // 8010B434
  {uint32_t ea=c->r[1]+0x00000070u; c->f[24]=RF64(ea);} // 8010B438
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,23,ea,0,0);} // 8010B43C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[23]=RF64(ea);} // 8010B440
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,22,ea,0,0);} // 8010B444
  {uint32_t ea=c->r[1]+0x00000050u; c->f[22]=RF64(ea);} // 8010B448
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,21,ea,0,0);} // 8010B44C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[21]=RF64(ea);} // 8010B450
  c->r[0]=R32(c->r[1]+0x000000F4u); // 8010B454
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8010B458
  c->lr=c->r[0]; // 8010B45C
  c->r[1]=c->r[1]+0x000000F0u; // 8010B460
  return; // 8010B464
}

// fn_8010B468
void f_8010B468(Ctx* __restrict c) {
  trace_call(0x8010B468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B468
  c->r[0]=c->lr; // 8010B46C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010B474
  c->r[31]=c->r[4]|c->r[4]; // 8010B478
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010B47C
  c->r[30]=c->r[3]|c->r[3]; // 8010B480
  c->lr=0x8010B488u; f_8003F484(c); // 8010B484
  c->r[3]=c->r[30]+0x0000000Cu; // 8010B488
  c->r[4]=c->r[31]+0x0000000Cu; // 8010B48C
  c->lr=0x8010B494u; f_8003F484(c); // 8010B490
  c->r[3]=c->r[30]+0x00000018u; // 8010B494
  c->r[4]=c->r[31]+0x00000018u; // 8010B498
  c->lr=0x8010B4A0u; f_8003F484(c); // 8010B49C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010B4A0
  c->r[3]=c->r[30]|c->r[30]; // 8010B4A4
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 8010B4A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010B4AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010B4B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B4B4
  c->lr=c->r[0]; // 8010B4B8
  c->r[1]=c->r[1]+0x00000010u; // 8010B4BC
  return; // 8010B4C0
}

// fn_8010B4C4
void f_8010B4C4(Ctx* __restrict c) {
  trace_call(0x8010B4C4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B4C4
  c->r[0]=c->lr; // 8010B4C8
  W32(c->r[1]+0x00000074u,c->r[0]); // 8010B4CC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8010B4D0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8010B4D4
  c->r[4]=0u+0x00000000u; // 8010B4D8
  c->r[3]=c->r[3]+0x00000008u; // 8010B4DC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8010B4E0
  c->lr=0x8010B4E8u; f_8009D3D0(c); // 8010B4E4
  c->lr=0x8010B4ECu; f_8009D0F4(c); // 8010B4E8
  c->r[31]=c->r[3]|c->r[3]; // 8010B4EC
  c->lr=0x8010B4F4u; f_8004FBE8(c); // 8010B4F0
  c->r[4]=c->r[31]|c->r[31]; // 8010B4F4
  c->lr=0x8010B4FCu; f_80050338(c); // 8010B4F8
  c->r[4]=c->r[3]|c->r[3]; // 8010B4FC
  c->r[3]=c->r[1]+0x00000020u; // 8010B500
  c->lr=0x8010B508u; f_80051434(c); // 8010B504
  c->r[3]=c->r[1]+0x00000014u; // 8010B508
  c->r[4]=c->r[1]+0x00000020u; // 8010B50C
  c->lr=0x8010B514u; f_8003F484(c); // 8010B510
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010B514
  c->r[3]=c->r[1]+0x00000008u; // 8010B518
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010B51C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010B520
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 8010B524
  c->f[3]=c->f[1]; // 8010B528
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8010B52C
  c->lr=0x8010B534u; f_800521A0(c); // 8010B530
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[31]=c->ps1[31]=RF32(ea);} // 8010B534
  c->lr=0x8010B53Cu; f_80061A4C(c); // 8010B538
  c->r[4]=c->r[3]|c->r[3]; // 8010B53C
  c->r[3]=c->r[1]+0x0000002Cu; // 8010B540
  c->r[4]=c->r[4]+0x0000035Cu; // 8010B544
  c->lr=0x8010B54Cu; f_8010B468(c); // 8010B548
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010B54C
  c->r[3]=c->r[1]+0x0000002Cu; // 8010B550
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010B554
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010B558
  c->lr=0x8010B560u; f_80065358(c); // 8010B55C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010B560
  c->r[3]=c->r[1]+0x00000038u; // 8010B564
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010B568
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8010B56C
  c->lr=0x8010B574u; f_80065358(c); // 8010B570
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010B574
  c->r[3]=c->r[1]+0x00000044u; // 8010B578
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010B57C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010B580
  c->lr=0x8010B588u; f_80065358(c); // 8010B584
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[31]);} // 8010B588
  c->lr=0x8010B590u; f_80061A4C(c); // 8010B58C
  c->r[4]=0u+0x00000001u; // 8010B590
  c->r[3]=c->r[3]+0x000000ECu; // 8010B594
  c->lr=0x8010B59Cu; f_8012D230(c); // 8010B598
  c->lr=0x8010B5A0u; f_80061A4C(c); // 8010B59C
  c->r[4]=c->r[1]+0x0000002Cu; // 8010B5A0
  c->lr=0x8010B5A8u; f_80062B34(c); // 8010B5A4
  c->lr=0x8010B5ACu; f_80061A4C(c); // 8010B5A8
  c->r[4]=0u+0x00000005u; // 8010B5AC
  c->lr=0x8010B5B4u; f_80062AC4(c); // 8010B5B0
  c->lr=0x8010B5B8u; f_80061A4C(c); // 8010B5B4
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010B5B8
  c->lr=0x8010B5C0u; f_80063940(c); // 8010B5BC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8010B5C0
  c->r[0]=R32(c->r[1]+0x00000074u); // 8010B5C4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8010B5C8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8010B5CC
  c->lr=c->r[0]; // 8010B5D0
  c->r[1]=c->r[1]+0x00000070u; // 8010B5D4
  return; // 8010B5D8
}

// fn_8010B5DC
void f_8010B5DC(Ctx* __restrict c) {
  trace_call(0x8010B5DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B5DC
  c->r[0]=c->lr; // 8010B5E0
  c->r[4]=0u+0x00000000u; // 8010B5E4
  c->r[3]=c->r[3]+0x00000008u; // 8010B5E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B5EC
  c->lr=0x8010B5F4u; f_8009D3D0(c); // 8010B5F0
  c->lr=0x8010B5F8u; f_8009D188(c); // 8010B5F4
  cmps(c,0,(int32_t)c->r[3],0); // 8010B5F8
  if (crb(c,2)) { goto L_8010B614; } // 8010B5FC
  c->lr=0x8010B604u; f_80061A4C(c); // 8010B600
  c->r[4]=0u+0x00000001u; // 8010B604
  c->r[3]=c->r[3]+0x000000ECu; // 8010B608
  c->lr=0x8010B610u; f_8012D1D4(c); // 8010B60C
  goto L_8010B624; // 8010B610
L_8010B614:;
  c->lr=0x8010B618u; f_80061A4C(c); // 8010B614
  c->r[4]=0u+0x00000000u; // 8010B618
  c->r[3]=c->r[3]+0x000000ECu; // 8010B61C
  c->lr=0x8010B624u; f_8012D1D4(c); // 8010B620
L_8010B624:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B624
  c->lr=c->r[0]; // 8010B628
  c->r[1]=c->r[1]+0x00000010u; // 8010B62C
  return; // 8010B630
}

// fn_8010B634
void f_8010B634(Ctx* __restrict c) {
  trace_call(0x8010B634u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B634
  c->r[0]=c->lr; // 8010B638
  c->r[4]=0u+0x00000000u; // 8010B63C
  c->r[3]=c->r[3]+0x00000008u; // 8010B640
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B644
  c->lr=0x8010B64Cu; f_8009D3D0(c); // 8010B648
  c->lr=0x8010B650u; f_8009D188(c); // 8010B64C
  cmps(c,0,(int32_t)c->r[3],0); // 8010B650
  if (crb(c,2)) { goto L_8010B66C; } // 8010B654
  c->lr=0x8010B65Cu; f_80061A4C(c); // 8010B658
  c->r[3]=R32(c->r[3]+0x00000648u); // 8010B65C
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010B660
  c->lr=0x8010B668u; f_801711D8(c); // 8010B664
  goto L_8010B67C; // 8010B668
L_8010B66C:;
  c->lr=0x8010B670u; f_80061A4C(c); // 8010B66C
  c->r[3]=R32(c->r[3]+0x00000648u); // 8010B670
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8010B674
  c->lr=0x8010B67Cu; f_801712D4(c); // 8010B678
L_8010B67C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B67C
  c->lr=c->r[0]; // 8010B680
  c->r[1]=c->r[1]+0x00000010u; // 8010B684
  return; // 8010B688
}

// fn_8010B68C
void f_8010B68C(Ctx* __restrict c) {
  trace_call(0x8010B68Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B68C
  c->r[0]=c->lr; // 8010B690
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010B694
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8010B698
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8010B69C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8010B6A0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 8010B6A4
  c->r[4]=0u+0x00000000u; // 8010B6A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010B6AC
  c->r[31]=c->r[3]|c->r[3]; // 8010B6B0
  c->r[3]=c->r[3]+0x00000008u; // 8010B6B4
  c->lr=0x8010B6BCu; f_8009D3D0(c); // 8010B6B8
  c->lr=0x8010B6C0u; f_8009D0A0(c); // 8010B6BC
  c->f[31]=c->f[1]; // 8010B6C0
  c->r[3]=c->r[31]+0x00000008u; // 8010B6C4
  c->r[4]=0u+0x00000001u; // 8010B6C8
  c->lr=0x8010B6D0u; f_8009D3D0(c); // 8010B6CC
  c->lr=0x8010B6D4u; f_8009D0A0(c); // 8010B6D0
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010B6D4
  c->f[30]=c->f[1]; // 8010B6D8
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[31]); // 8010B6DC
  c->lr=0x8010B6E4u; f_80061A4C(c); // 8010B6E0
  c->f[1]=c->f[31]; // 8010B6E4
  c->r[3]=R32(c->r[3]+0x00000648u); // 8010B6E8
  c->f[2]=c->f[30]; // 8010B6EC
  c->lr=0x8010B6F4u; f_80171340(c); // 8010B6F0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8010B6F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8010B6F8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 8010B6FC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8010B700
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010B704
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010B708
  c->lr=c->r[0]; // 8010B70C
  c->r[1]=c->r[1]+0x00000030u; // 8010B710
  return; // 8010B714
}

// fn_8010B718
void f_8010B718(Ctx* __restrict c) {
  trace_call(0x8010B718u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B718
  c->r[0]=c->lr; // 8010B71C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B720
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8010B724
  c->r[4]=0u+0x00000000u; // 8010B728
  c->r[3]=c->r[3]+0x00000008u; // 8010B72C
  c->lr=0x8010B734u; f_8009D3D0(c); // 8010B730
  c->lr=0x8010B738u; f_8009D0A0(c); // 8010B734
  c->f[31]=c->f[1]; // 8010B738
  c->lr=0x8010B740u; f_80061A4C(c); // 8010B73C
  c->f[1]=c->f[31]; // 8010B740
  c->r[3]=R32(c->r[3]+0x00000648u); // 8010B744
  c->lr=0x8010B74Cu; f_80171364(c); // 8010B748
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B74C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8010B750
  c->lr=c->r[0]; // 8010B754
  c->r[1]=c->r[1]+0x00000010u; // 8010B758
  return; // 8010B75C
}

// fn_8010B760
void f_8010B760(Ctx* __restrict c) {
  trace_call(0x8010B760u);
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B760
  c->r[0]=c->lr; // 8010B764
  W32(c->r[1]+0x00000194u,c->r[0]); // 8010B768
  c->r[11]=c->r[1]+0x00000190u; // 8010B76C
  c->lr=0x8010B774u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010B770
  c->r[27]=c->r[3]|c->r[3]; // 8010B774
  c->r[4]=0u+0x00000000u; // 8010B778
  c->r[3]=c->r[3]+0x00000008u; // 8010B77C
  c->lr=0x8010B784u; f_8009D3D0(c); // 8010B780
  c->lr=0x8010B788u; f_8009D188(c); // 8010B784
  c->r[30]=c->r[3]|c->r[3]; // 8010B788
  c->r[3]=c->r[27]+0x00000008u; // 8010B78C
  c->r[4]=0u+0x00000001u; // 8010B790
  c->lr=0x8010B798u; f_8009D3D0(c); // 8010B794
  c->lr=0x8010B79Cu; f_8009D0F4(c); // 8010B798
  c->r[29]=c->r[3]|c->r[3]; // 8010B79C
  c->r[3]=c->r[27]+0x00000008u; // 8010B7A0
  c->r[4]=0u+0x00000002u; // 8010B7A4
  c->lr=0x8010B7ACu; f_8009D3D0(c); // 8010B7A8
  c->lr=0x8010B7B0u; f_8009D188(c); // 8010B7AC
  cmps(c,0,(int32_t)c->r[30],0); // 8010B7B0
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8010B7B4
  c->r[28]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8010B7B8
  if (crb(c,0)) { goto L_8010B940; } // 8010B7BC
  cmps(c,0,(int32_t)c->r[30],4); // 8010B7C0
  if (crb(c,0)) { goto L_8010B7CC; } // 8010B7C4
  goto L_8010B940; // 8010B7C8
L_8010B7CC:;
  c->r[31]=0u+0x803E0000u; // 8010B7CC
  c->r[5]=c->r[29]|c->r[29]; // 8010B7D0
  c->r[31]=c->r[31]+0xFFFFD1C8u; // 8010B7D4
  c->r[3]=c->r[1]+0x00000078u; // 8010B7D8
  c->r[4]=c->r[31]+0x00000259u; // 8010B7DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010B7E0
  c->lr=0x8010B7E8u; f_80291CC4(c); // 8010B7E4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010B7E8
  c->r[4]=c->r[1]+0x00000078u; // 8010B7EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010B7F0
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 8010B7F4
  c->ctr=c->r[12]; // 8010B7F8
  if (true) { c->lr=0x8010B800u; dispatch(c,c->ctr); } // 8010B7FC
  cmps(c,0,(int32_t)c->r[3],0); // 8010B800
  c->r[27]=c->r[3]|c->r[3]; // 8010B804
  if (!crb(c,2)) { goto L_8010B834; } // 8010B808
  c->r[5]=c->r[29]|c->r[29]; // 8010B80C
  c->r[3]=c->r[1]+0x00000078u; // 8010B810
  c->r[4]=c->r[31]+0x00000240u; // 8010B814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010B818
  c->lr=0x8010B820u; f_80291CC4(c); // 8010B81C
  c->r[3]=0u+0x80490000u; // 8010B820
  c->r[4]=c->r[1]+0x00000078u; // 8010B824
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 8010B828
  c->lr=0x8010B830u; f_80103094(c); // 8010B82C
  c->r[27]=R32(c->r[3]+0x00000010u); // 8010B830
L_8010B834:;
  cmps(c,0,(int32_t)c->r[27],0); // 8010B834
  if (!crb(c,2)) { goto L_8010B8C8; } // 8010B838
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010B83C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010B840
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8010B844
  c->ctr=c->r[12]; // 8010B848
  if (true) { c->lr=0x8010B850u; dispatch(c,c->ctr); } // 8010B84C
  cmps(c,0,(int32_t)c->r[3],0); // 8010B850
  if (crb(c,2)) { goto L_8010B8C8; } // 8010B854
  c->r[31]=0u+0x803E0000u; // 8010B858
  c->r[5]=c->r[3]|c->r[3]; // 8010B85C
  c->r[31]=c->r[31]+0xFFFFD1C8u; // 8010B860
  c->r[3]=c->r[1]+0x00000078u; // 8010B864
  c->r[4]=c->r[31]+0x00000247u; // 8010B868
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010B86C
  c->lr=0x8010B874u; f_80291CC4(c); // 8010B870
  c->r[3]=0u+0x80490000u; // 8010B874
  c->r[4]=c->r[1]+0x00000078u; // 8010B878
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 8010B87C
  c->lr=0x8010B884u; f_80103094(c); // 8010B880
  c->r[4]=R32(c->r[3]+0x00000010u); // 8010B884
  cmps(c,0,(int32_t)c->r[4],0); // 8010B888
  if (crb(c,2)) { goto L_8010B8C8; } // 8010B88C
  c->r[3]=c->r[1]+0x00000008u; // 8010B890
  c->lr=0x8010B898u; f_801328F8(c); // 8010B894
  c->r[5]=c->r[29]|c->r[29]; // 8010B898
  c->r[3]=c->r[1]+0x00000078u; // 8010B89C
  c->r[4]=c->r[31]+0x00000240u; // 8010B8A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010B8A4
  c->lr=0x8010B8ACu; f_80291CC4(c); // 8010B8A8
  c->r[3]=c->r[1]+0x00000008u; // 8010B8AC
  c->r[4]=c->r[1]+0x00000078u; // 8010B8B0
  c->lr=0x8010B8B8u; f_80132AE0(c); // 8010B8B4
  c->r[27]=c->r[3]|c->r[3]; // 8010B8B8
  c->r[3]=c->r[1]+0x00000008u; // 8010B8BC
  c->r[4]=0u+0xFFFFFFFFu; // 8010B8C0
  c->lr=0x8010B8C8u; f_80132958(c); // 8010B8C4
L_8010B8C8:;
  cmps(c,0,(int32_t)c->r[27],0); // 8010B8C8
  if (crb(c,2)) { goto L_8010B940; } // 8010B8CC
  c->lr=0x8010B8D4u; f_80061A4C(c); // 8010B8D0
  c->r[31]=R32(c->r[3]+0x0000031Cu); // 8010B8D4
  c->r[4]=0u+0x80490000u; // 8010B8D8
  c->r[0]=cntlz(c->r[28]); // 8010B8DC
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8010B8E0
  c->r[4]=c->r[4]+0x0000438Cu; // 8010B8E4
  c->r[3]=c->r[31]|c->r[31]; // 8010B8E8
  c->r[29]=c->r[4]+c->r[5]; // 8010B8EC
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 8010B8F0
  c->r[4]=0u+0x00000006u; // 8010B8F4
  c->r[5]=0u+0x00000000u; // 8010B8F8
  c->lr=0x8010B900u; f_801B10DC(c); // 8010B8FC
  W32(c->r[29]+0x00000000u,c->r[3]); // 8010B900
  c->r[3]=c->r[31]|c->r[31]; // 8010B904
  c->r[4]=c->r[29]|c->r[29]; // 8010B908
  c->lr=0x8010B910u; f_801B1374(c); // 8010B90C
  cmps(c,0,(int32_t)c->r[3],0); // 8010B910
  if (crb(c,2)) { goto L_8010B940; } // 8010B914
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010B918
  c->r[4]=c->r[27]|c->r[27]; // 8010B91C
  c->r[6]=c->r[28]|c->r[28]; // 8010B920
  c->r[5]=0u+0x00000000u; // 8010B924
  c->lr=0x8010B92Cu; f_8006161C(c); // 8010B928
  cmps(c,0,(int32_t)c->r[28],0); // 8010B92C
  if (crb(c,2)) { goto L_8010B940; } // 8010B930
  c->r[0]=0u+0x00000001u; // 8010B934
  c->r[3]=c->r[13]+0xFFFF958Cu; // 8010B938
  W8(c->r[3]+c->r[30],c->r[0]); // 8010B93C
L_8010B940:;
  c->r[11]=c->r[1]+0x00000190u; // 8010B940
  c->lr=0x8010B948u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010B944
  c->r[0]=R32(c->r[1]+0x00000194u); // 8010B948
  c->lr=c->r[0]; // 8010B94C
  c->r[1]=c->r[1]+0x00000190u; // 8010B950
  return; // 8010B954
}

// fn_8010B958
void f_8010B958(Ctx* __restrict c) {
  trace_call(0x8010B958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B958
  c->r[0]=c->lr; // 8010B95C
  c->r[4]=0u+0x00000000u; // 8010B960
  c->r[3]=c->r[3]+0x00000008u; // 8010B964
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B968
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010B96C
  c->lr=0x8010B974u; f_8009D3D0(c); // 8010B970
  c->lr=0x8010B978u; f_8009D188(c); // 8010B974
  cmps(c,0,(int32_t)c->r[3],0); // 8010B978
  c->r[30]=c->r[3]|c->r[3]; // 8010B97C
  if (crb(c,0)) { goto L_8010B9C4; } // 8010B980
  cmps(c,0,(int32_t)c->r[3],4); // 8010B984
  if (crb(c,0)) { goto L_8010B990; } // 8010B988
  goto L_8010B9C4; // 8010B98C
L_8010B990:;
  c->r[31]=c->r[13]+0xFFFF958Cu; // 8010B990
  c->r[0]=R8(c->r[31]+c->r[3]); // 8010B994
  cmps(c,0,(int32_t)c->r[0],0); // 8010B998
  if (crb(c,2)) { goto L_8010B9C4; } // 8010B99C
  c->lr=0x8010B9A4u; f_80061A4C(c); // 8010B9A0
  c->r[4]=0u+0x80490000u; // 8010B9A4
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8010B9A8
  c->r[4]=c->r[4]+0x0000438Cu; // 8010B9AC
  c->r[3]=R32(c->r[3]+0x0000031Cu); // 8010B9B0
  c->r[4]=c->r[4]+c->r[0]; // 8010B9B4
  c->lr=0x8010B9BCu; f_801B1180(c); // 8010B9B8
  c->r[0]=0u+0x00000000u; // 8010B9BC
  W8(c->r[31]+c->r[30],c->r[0]); // 8010B9C0
L_8010B9C4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010B9C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B9C8
  c->lr=c->r[0]; // 8010B9CC
  c->r[1]=c->r[1]+0x00000010u; // 8010B9D0
  return; // 8010B9D4
}

// fn_8010B9D8
void f_8010B9D8(Ctx* __restrict c) {
  trace_call(0x8010B9D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B9D8
  c->r[0]=c->lr; // 8010B9DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010B9E0
  c->r[11]=c->r[1]+0x00000030u; // 8010B9E4
  c->lr=0x8010B9ECu; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 8010B9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010B9EC
  c->r[31]=c->r[3]|c->r[3]; // 8010B9F0
  c->r[4]=0u+0x00000000u; // 8010B9F4
  c->r[3]=c->r[3]+0x00000008u; // 8010B9F8
  c->lr=0x8010BA00u; f_8009D3D0(c); // 8010B9FC
  c->lr=0x8010BA04u; f_8009D0A0(c); // 8010BA00
  c->f[31]=c->f[1]; // 8010BA04
  c->r[3]=c->r[31]+0x00000008u; // 8010BA08
  c->r[4]=0u+0x00000001u; // 8010BA0C
  c->lr=0x8010BA14u; f_8009D3D0(c); // 8010BA10
  c->lr=0x8010BA18u; f_8009D0A0(c); // 8010BA14
  c->f[30]=c->f[1]; // 8010BA18
  c->r[3]=c->r[31]+0x00000008u; // 8010BA1C
  c->r[4]=0u+0x00000002u; // 8010BA20
  c->lr=0x8010BA28u; f_8009D3D0(c); // 8010BA24
  c->lr=0x8010BA2Cu; f_8009D0A0(c); // 8010BA28
  c->f[29]=c->f[1]; // 8010BA2C
  c->r[3]=c->r[31]+0x00000008u; // 8010BA30
  c->r[4]=0u+0x00000003u; // 8010BA34
  c->lr=0x8010BA3Cu; f_8009D3D0(c); // 8010BA38
  c->lr=0x8010BA40u; f_8009D0A0(c); // 8010BA3C
  c->f[28]=c->f[1]; // 8010BA40
  c->lr=0x8010BA48u; f_80061A4C(c); // 8010BA44
  c->f[1]=c->f[31]; // 8010BA48
  c->r[31]=c->r[3]+0x00000720u; // 8010BA4C
  c->r[3]=c->r[31]|c->r[31]; // 8010BA50
  c->lr=0x8010BA58u; f_801717A4(c); // 8010BA54
  c->f[1]=c->f[30]; // 8010BA58
  c->r[3]=c->r[31]|c->r[31]; // 8010BA5C
  c->lr=0x8010BA64u; f_801717AC(c); // 8010BA60
  c->f[1]=c->f[29]; // 8010BA64
  c->r[3]=c->r[31]|c->r[31]; // 8010BA68
  c->lr=0x8010BA70u; f_801717B4(c); // 8010BA6C
  c->f[1]=c->f[28]; // 8010BA70
  c->r[3]=c->r[31]|c->r[31]; // 8010BA74
  c->lr=0x8010BA7Cu; f_801717BC(c); // 8010BA78
  c->r[11]=c->r[1]+0x00000030u; // 8010BA7C
  c->lr=0x8010BA84u; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 8010BA80
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010BA84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BA88
  c->lr=c->r[0]; // 8010BA8C
  c->r[1]=c->r[1]+0x00000030u; // 8010BA90
  return; // 8010BA94
}

// fn_8010BA98
void f_8010BA98(Ctx* __restrict c) {
  trace_call(0x8010BA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BA98
  c->r[0]=c->lr; // 8010BA9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BAA0
  c->lr=0x8010BAA8u; f_80061A4C(c); // 8010BAA4
  c->r[3]=c->r[3]+0x00000720u; // 8010BAA8
  c->r[4]=c->r[3]+0x000000A0u; // 8010BAAC
  c->lr=0x8010BAB4u; f_80171760(c); // 8010BAB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BAB4
  c->lr=c->r[0]; // 8010BAB8
  c->r[1]=c->r[1]+0x00000010u; // 8010BABC
  return; // 8010BAC0
}

// fn_8010BAC4
void f_8010BAC4(Ctx* __restrict c) {
  trace_call(0x8010BAC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BAC4
  c->r[0]=c->lr; // 8010BAC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010BACC
  c->r[11]=c->r[1]+0x00000030u; // 8010BAD0
  c->lr=0x8010BAD8u; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 8010BAD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BAD8
  c->r[31]=c->r[3]|c->r[3]; // 8010BADC
  c->r[4]=0u+0x00000000u; // 8010BAE0
  c->r[3]=c->r[3]+0x00000008u; // 8010BAE4
  c->lr=0x8010BAECu; f_8009D3D0(c); // 8010BAE8
  c->lr=0x8010BAF0u; f_8009D0A0(c); // 8010BAEC
  c->f[31]=c->f[1]; // 8010BAF0
  c->r[3]=c->r[31]+0x00000008u; // 8010BAF4
  c->r[4]=0u+0x00000001u; // 8010BAF8
  c->lr=0x8010BB00u; f_8009D3D0(c); // 8010BAFC
  c->lr=0x8010BB04u; f_8009D0A0(c); // 8010BB00
  c->f[30]=c->f[1]; // 8010BB04
  c->r[3]=c->r[31]+0x00000008u; // 8010BB08
  c->r[4]=0u+0x00000002u; // 8010BB0C
  c->lr=0x8010BB14u; f_8009D3D0(c); // 8010BB10
  c->lr=0x8010BB18u; f_8009D0A0(c); // 8010BB14
  c->f[29]=c->f[1]; // 8010BB18
  c->r[3]=c->r[31]+0x00000008u; // 8010BB1C
  c->r[4]=0u+0x00000003u; // 8010BB20
  c->lr=0x8010BB28u; f_8009D3D0(c); // 8010BB24
  c->lr=0x8010BB2Cu; f_8009D0A0(c); // 8010BB28
  c->f[28]=c->f[1]; // 8010BB2C
  c->lr=0x8010BB34u; f_80061A4C(c); // 8010BB30
  c->f[1]=c->f[31]; // 8010BB34
  c->r[31]=c->r[3]+0x00000720u; // 8010BB38
  c->r[3]=c->r[31]|c->r[31]; // 8010BB3C
  c->lr=0x8010BB44u; f_80171784(c); // 8010BB40
  c->f[1]=c->f[30]; // 8010BB44
  c->r[3]=c->r[31]|c->r[31]; // 8010BB48
  c->lr=0x8010BB50u; f_8017178C(c); // 8010BB4C
  c->f[1]=c->f[29]; // 8010BB50
  c->r[3]=c->r[31]|c->r[31]; // 8010BB54
  c->lr=0x8010BB5Cu; f_80171794(c); // 8010BB58
  c->f[1]=c->f[28]; // 8010BB5C
  c->r[3]=c->r[31]|c->r[31]; // 8010BB60
  c->lr=0x8010BB68u; f_8017179C(c); // 8010BB64
  c->r[11]=c->r[1]+0x00000030u; // 8010BB68
  c->lr=0x8010BB70u; { {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 8010BB6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010BB70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BB74
  c->lr=c->r[0]; // 8010BB78
  c->r[1]=c->r[1]+0x00000030u; // 8010BB7C
  return; // 8010BB80
}

// fn_8010BB84
void f_8010BB84(Ctx* __restrict c) {
  trace_call(0x8010BB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BB84
  c->r[0]=c->lr; // 8010BB88
  c->r[4]=0u+0x00000000u; // 8010BB8C
  c->r[3]=c->r[3]+0x00000008u; // 8010BB90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BB94
  c->lr=0x8010BB9Cu; f_8009D3D0(c); // 8010BB98
  c->lr=0x8010BBA0u; f_8009D188(c); // 8010BB9C
  c->r[4]=c->r[3]|c->r[3]; // 8010BBA0
  c->r[3]=R32(c->r[13]+0xFFFF97C8u); // 8010BBA4
  c->r[5]=0u+0x00000000u; // 8010BBA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BBAC
  c->r[12]=R32(c->r[12]+0x00000018u); // 8010BBB0
  c->ctr=c->r[12]; // 8010BBB4
  if (true) { c->lr=0x8010BBBCu; dispatch(c,c->ctr); } // 8010BBB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BBBC
  c->lr=c->r[0]; // 8010BBC0
  c->r[1]=c->r[1]+0x00000010u; // 8010BBC4
  return; // 8010BBC8
}

// fn_8010BBCC
void f_8010BBCC(Ctx* __restrict c) {
  trace_call(0x8010BBCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BBCC
  c->r[0]=c->lr; // 8010BBD0
  c->r[4]=0u+0x00000000u; // 8010BBD4
  c->r[3]=c->r[3]+0x00000008u; // 8010BBD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BBDC
  c->lr=0x8010BBE4u; f_8009D3D0(c); // 8010BBE0
  c->lr=0x8010BBE8u; f_8009D188(c); // 8010BBE4
  c->r[4]=c->r[3]|c->r[3]; // 8010BBE8
  c->r[3]=R32(c->r[13]+0xFFFF97C8u); // 8010BBEC
  c->r[5]=0u+0x00000001u; // 8010BBF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BBF4
  c->r[12]=R32(c->r[12]+0x00000018u); // 8010BBF8
  c->ctr=c->r[12]; // 8010BBFC
  if (true) { c->lr=0x8010BC04u; dispatch(c,c->ctr); } // 8010BC00
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BC04
  c->lr=c->r[0]; // 8010BC08
  c->r[1]=c->r[1]+0x00000010u; // 8010BC0C
  return; // 8010BC10
}

// fn_8010BC14
void f_8010BC14(Ctx* __restrict c) {
  trace_call(0x8010BC14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BC14
  c->r[0]=c->lr; // 8010BC18
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010BC1C
  c->r[11]=c->r[1]+0x00000020u; // 8010BC20
  c->lr=0x8010BC28u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010BC24
  c->r[29]=c->r[3]|c->r[3]; // 8010BC28
  c->r[4]=0u+0x00000000u; // 8010BC2C
  c->r[3]=c->r[3]+0x00000008u; // 8010BC30
  c->lr=0x8010BC38u; f_8009D3D0(c); // 8010BC34
  c->lr=0x8010BC3Cu; f_8009D0F4(c); // 8010BC38
  c->r[31]=c->r[3]|c->r[3]; // 8010BC3C
  c->r[3]=c->r[29]+0x00000008u; // 8010BC40
  c->r[4]=0u+0x00000001u; // 8010BC44
  c->lr=0x8010BC4Cu; f_8009D3D0(c); // 8010BC48
  c->lr=0x8010BC50u; f_8009D188(c); // 8010BC4C
  c->r[30]=c->r[3]|c->r[3]; // 8010BC50
  c->r[3]=c->r[29]+0x00000008u; // 8010BC54
  c->r[4]=0u+0x00000002u; // 8010BC58
  c->lr=0x8010BC60u; f_8009D3D0(c); // 8010BC5C
  c->lr=0x8010BC64u; f_8009D0A0(c); // 8010BC60
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010BC64
  c->r[4]=c->r[31]|c->r[31]; // 8010BC68
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010BC6C
  c->r[6]=c->r[30]|c->r[30]; // 8010BC70
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BC74
  c->r[5]=0u+0x00000000u; // 8010BC78
  c->f[3]=c->f[2]; // 8010BC7C
  c->r[7]=0u+0x00000000u; // 8010BC80
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010BC84
  c->ctr=c->r[12]; // 8010BC88
  if (true) { c->lr=0x8010BC90u; dispatch(c,c->ctr); } // 8010BC8C
  c->r[11]=c->r[1]+0x00000020u; // 8010BC90
  c->lr=0x8010BC98u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010BC94
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010BC98
  c->lr=c->r[0]; // 8010BC9C
  c->r[1]=c->r[1]+0x00000020u; // 8010BCA0
  return; // 8010BCA4
}

// fn_8010BCA8
void f_8010BCA8(Ctx* __restrict c) {
  trace_call(0x8010BCA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BCA8
  c->r[0]=c->lr; // 8010BCAC
  c->r[4]=0u+0x00000000u; // 8010BCB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BCB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BCB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010BCBC
  c->r[30]=c->r[3]|c->r[3]; // 8010BCC0
  c->r[3]=c->r[3]+0x00000008u; // 8010BCC4
  c->lr=0x8010BCCCu; f_8009D3D0(c); // 8010BCC8
  c->lr=0x8010BCD0u; f_8009D0F4(c); // 8010BCCC
  c->r[31]=c->r[3]|c->r[3]; // 8010BCD0
  c->r[3]=c->r[30]+0x00000008u; // 8010BCD4
  c->r[4]=0u+0x00000001u; // 8010BCD8
  c->lr=0x8010BCE0u; f_8009D3D0(c); // 8010BCDC
  c->lr=0x8010BCE4u; f_8009D0A0(c); // 8010BCE0
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010BCE4
  c->r[4]=c->r[31]|c->r[31]; // 8010BCE8
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010BCEC
  c->r[5]=0u+0x00000001u; // 8010BCF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BCF4
  c->r[6]=0u+0x00000000u; // 8010BCF8
  c->f[3]=c->f[2]; // 8010BCFC
  c->r[7]=0u+0x00000000u; // 8010BD00
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010BD04
  c->ctr=c->r[12]; // 8010BD08
  if (true) { c->lr=0x8010BD10u; dispatch(c,c->ctr); } // 8010BD0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BD10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BD14
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010BD18
  c->lr=c->r[0]; // 8010BD1C
  c->r[1]=c->r[1]+0x00000010u; // 8010BD20
  return; // 8010BD24
}

// fn_8010BD28
void f_8010BD28(Ctx* __restrict c) {
  trace_call(0x8010BD28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BD28
  c->r[0]=c->lr; // 8010BD2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010BD30
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8010BD34
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8010BD38
  c->r[4]=0u+0x00000000u; // 8010BD3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BD40
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010BD44
  c->r[30]=c->r[3]|c->r[3]; // 8010BD48
  c->r[3]=c->r[3]+0x00000008u; // 8010BD4C
  c->lr=0x8010BD54u; f_8009D3D0(c); // 8010BD50
  c->lr=0x8010BD58u; f_8009D0F4(c); // 8010BD54
  c->r[31]=c->r[3]|c->r[3]; // 8010BD58
  c->r[3]=c->r[30]+0x00000008u; // 8010BD5C
  c->r[4]=0u+0x00000001u; // 8010BD60
  c->lr=0x8010BD68u; f_8009D3D0(c); // 8010BD64
  c->lr=0x8010BD6Cu; f_8009D0A0(c); // 8010BD68
  c->f[31]=c->f[1]; // 8010BD6C
  c->r[3]=c->r[30]+0x00000008u; // 8010BD70
  c->r[4]=0u+0x00000002u; // 8010BD74
  c->lr=0x8010BD7Cu; f_8009D3D0(c); // 8010BD78
  c->lr=0x8010BD80u; f_8009D0A0(c); // 8010BD7C
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010BD80
  c->f[2]=c->f[1]; // 8010BD84
  c->f[1]=c->f[31]; // 8010BD88
  c->r[4]=c->r[31]|c->r[31]; // 8010BD8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BD90
  c->r[5]=0u+0x00000002u; // 8010BD94
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010BD98
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010BD9C
  c->r[6]=0u+0x00000000u; // 8010BDA0
  c->r[7]=0u+0x00000000u; // 8010BDA4
  c->ctr=c->r[12]; // 8010BDA8
  if (true) { c->lr=0x8010BDB0u; dispatch(c,c->ctr); } // 8010BDAC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8010BDB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010BDB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8010BDB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BDBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010BDC0
  c->lr=c->r[0]; // 8010BDC4
  c->r[1]=c->r[1]+0x00000020u; // 8010BDC8
  return; // 8010BDCC
}

// fn_8010BDD0
void f_8010BDD0(Ctx* __restrict c) {
  trace_call(0x8010BDD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BDD0
  c->r[0]=c->lr; // 8010BDD4
  c->r[4]=0u+0x00000000u; // 8010BDD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010BDDC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8010BDE0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8010BDE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010BDE8
  c->r[30]=c->r[3]|c->r[3]; // 8010BDEC
  c->r[3]=c->r[3]+0x00000008u; // 8010BDF0
  c->lr=0x8010BDF8u; f_8009D3D0(c); // 8010BDF4
  c->lr=0x8010BDFCu; f_8009D0F4(c); // 8010BDF8
  c->r[31]=c->r[3]|c->r[3]; // 8010BDFC
  c->r[3]=c->r[30]+0x00000008u; // 8010BE00
  c->r[4]=0u+0x00000001u; // 8010BE04
  c->lr=0x8010BE0Cu; f_8009D3D0(c); // 8010BE08
  c->lr=0x8010BE10u; f_8009D0A0(c); // 8010BE0C
  c->f[31]=c->f[1]; // 8010BE10
  c->r[3]=c->r[30]+0x00000008u; // 8010BE14
  c->r[4]=0u+0x00000002u; // 8010BE18
  c->lr=0x8010BE20u; f_8009D3D0(c); // 8010BE1C
  c->lr=0x8010BE24u; f_8009D0A0(c); // 8010BE20
  c->f[30]=c->f[1]; // 8010BE24
  c->r[3]=c->r[30]+0x00000008u; // 8010BE28
  c->r[4]=0u+0x00000003u; // 8010BE2C
  c->lr=0x8010BE34u; f_8009D3D0(c); // 8010BE30
  c->lr=0x8010BE38u; f_8009D0A0(c); // 8010BE34
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010BE38
  c->f[3]=c->f[1]; // 8010BE3C
  c->f[1]=c->f[31]; // 8010BE40
  c->r[4]=c->r[31]|c->r[31]; // 8010BE44
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BE48
  c->f[2]=c->f[30]; // 8010BE4C
  c->r[5]=0u+0x00000007u; // 8010BE50
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010BE54
  c->r[6]=0u+0x00000000u; // 8010BE58
  c->r[7]=0u+0x00000000u; // 8010BE5C
  c->ctr=c->r[12]; // 8010BE60
  if (true) { c->lr=0x8010BE68u; dispatch(c,c->ctr); } // 8010BE64
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8010BE68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8010BE6C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010BE70
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010BE74
  c->lr=c->r[0]; // 8010BE78
  c->r[1]=c->r[1]+0x00000020u; // 8010BE7C
  return; // 8010BE80
}

// fn_8010BE84
void f_8010BE84(Ctx* __restrict c) {
  trace_call(0x8010BE84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BE84
  c->r[0]=c->lr; // 8010BE88
  c->r[4]=0u+0x00000000u; // 8010BE8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BE90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BE94
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010BE98
  c->r[30]=c->r[3]|c->r[3]; // 8010BE9C
  c->r[3]=c->r[3]+0x00000008u; // 8010BEA0
  c->lr=0x8010BEA8u; f_8009D3D0(c); // 8010BEA4
  c->lr=0x8010BEACu; f_8009D0F4(c); // 8010BEA8
  c->r[31]=c->r[3]|c->r[3]; // 8010BEAC
  c->r[3]=c->r[30]+0x00000008u; // 8010BEB0
  c->r[4]=0u+0x00000001u; // 8010BEB4
  c->lr=0x8010BEBCu; f_8009D3D0(c); // 8010BEB8
  c->lr=0x8010BEC0u; f_8009D0A0(c); // 8010BEBC
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010BEC0
  c->r[4]=c->r[31]|c->r[31]; // 8010BEC4
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010BEC8
  c->r[5]=0u+0x00000003u; // 8010BECC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BED0
  c->r[6]=0u+0x00000000u; // 8010BED4
  c->f[3]=c->f[2]; // 8010BED8
  c->r[7]=0u+0x00000000u; // 8010BEDC
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010BEE0
  c->ctr=c->r[12]; // 8010BEE4
  if (true) { c->lr=0x8010BEECu; dispatch(c,c->ctr); } // 8010BEE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BEEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BEF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010BEF4
  c->lr=c->r[0]; // 8010BEF8
  c->r[1]=c->r[1]+0x00000010u; // 8010BEFC
  return; // 8010BF00
}

// fn_8010BF04
void f_8010BF04(Ctx* __restrict c) {
  trace_call(0x8010BF04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BF04
  c->r[0]=c->lr; // 8010BF08
  c->r[4]=0u+0x00000000u; // 8010BF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BF10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BF14
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010BF18
  c->r[30]=c->r[3]|c->r[3]; // 8010BF1C
  c->r[3]=c->r[3]+0x00000008u; // 8010BF20
  c->lr=0x8010BF28u; f_8009D3D0(c); // 8010BF24
  c->lr=0x8010BF2Cu; f_8009D0F4(c); // 8010BF28
  c->r[31]=c->r[3]|c->r[3]; // 8010BF2C
  c->r[3]=c->r[30]+0x00000008u; // 8010BF30
  c->r[4]=0u+0x00000001u; // 8010BF34
  c->lr=0x8010BF3Cu; f_8009D3D0(c); // 8010BF38
  c->lr=0x8010BF40u; f_8009D0F4(c); // 8010BF3C
  c->r[7]=c->r[3]|c->r[3]; // 8010BF40
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010BF44
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010BF48
  c->r[4]=c->r[31]|c->r[31]; // 8010BF4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BF50
  c->r[5]=0u+0x00000004u; // 8010BF54
  c->f[2]=c->f[1]; // 8010BF58
  c->r[6]=0u+0x00000000u; // 8010BF5C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010BF60
  c->f[3]=c->f[1]; // 8010BF64
  c->ctr=c->r[12]; // 8010BF68
  if (true) { c->lr=0x8010BF70u; dispatch(c,c->ctr); } // 8010BF6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BF70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BF74
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010BF78
  c->lr=c->r[0]; // 8010BF7C
  c->r[1]=c->r[1]+0x00000010u; // 8010BF80
  return; // 8010BF84
}

// fn_8010BF88
void f_8010BF88(Ctx* __restrict c) {
  trace_call(0x8010BF88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BF88
  c->r[0]=c->lr; // 8010BF8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010BF90
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8010BF94
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8010BF98
  c->r[4]=0u+0x00000000u; // 8010BF9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BFA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010BFA4
  c->r[30]=c->r[3]|c->r[3]; // 8010BFA8
  c->r[3]=c->r[3]+0x00000008u; // 8010BFAC
  c->lr=0x8010BFB4u; f_8009D3D0(c); // 8010BFB0
  c->lr=0x8010BFB8u; f_8009D0F4(c); // 8010BFB4
  c->r[31]=c->r[3]|c->r[3]; // 8010BFB8
  c->r[3]=c->r[30]+0x00000008u; // 8010BFBC
  c->r[4]=0u+0x00000001u; // 8010BFC0
  c->lr=0x8010BFC8u; f_8009D3D0(c); // 8010BFC4
  c->lr=0x8010BFCCu; f_8009D0A0(c); // 8010BFC8
  c->f[31]=c->f[1]; // 8010BFCC
  c->r[3]=c->r[30]+0x00000008u; // 8010BFD0
  c->r[4]=0u+0x00000002u; // 8010BFD4
  c->lr=0x8010BFDCu; f_8009D3D0(c); // 8010BFD8
  c->lr=0x8010BFE0u; f_8009D0A0(c); // 8010BFDC
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010BFE0
  c->f[2]=c->f[1]; // 8010BFE4
  c->f[1]=c->f[31]; // 8010BFE8
  c->r[4]=c->r[31]|c->r[31]; // 8010BFEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010BFF0
  c->r[5]=0u+0x00000005u; // 8010BFF4
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010BFF8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010BFFC
  c->r[6]=0u+0x00000000u; // 8010C000
  c->r[7]=0u+0x00000000u; // 8010C004
  c->ctr=c->r[12]; // 8010C008
  if (true) { c->lr=0x8010C010u; dispatch(c,c->ctr); } // 8010C00C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8010C010
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010C014
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8010C018
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010C01C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010C020
  c->lr=c->r[0]; // 8010C024
  c->r[1]=c->r[1]+0x00000020u; // 8010C028
  return; // 8010C02C
}

// fn_8010C030
void f_8010C030(Ctx* __restrict c) {
  trace_call(0x8010C030u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C030
  c->r[0]=c->lr; // 8010C034
  c->r[4]=0u+0x00000000u; // 8010C038
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010C03C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8010C040
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8010C044
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010C048
  c->r[30]=c->r[3]|c->r[3]; // 8010C04C
  c->r[3]=c->r[3]+0x00000008u; // 8010C050
  c->lr=0x8010C058u; f_8009D3D0(c); // 8010C054
  c->lr=0x8010C05Cu; f_8009D0F4(c); // 8010C058
  c->r[31]=c->r[3]|c->r[3]; // 8010C05C
  c->r[3]=c->r[30]+0x00000008u; // 8010C060
  c->r[4]=0u+0x00000001u; // 8010C064
  c->lr=0x8010C06Cu; f_8009D3D0(c); // 8010C068
  c->lr=0x8010C070u; f_8009D0A0(c); // 8010C06C
  c->f[31]=c->f[1]; // 8010C070
  c->r[3]=c->r[30]+0x00000008u; // 8010C074
  c->r[4]=0u+0x00000002u; // 8010C078
  c->lr=0x8010C080u; f_8009D3D0(c); // 8010C07C
  c->lr=0x8010C084u; f_8009D0A0(c); // 8010C080
  c->f[30]=c->f[1]; // 8010C084
  c->r[3]=c->r[30]+0x00000008u; // 8010C088
  c->r[4]=0u+0x00000003u; // 8010C08C
  c->lr=0x8010C094u; f_8009D3D0(c); // 8010C090
  c->lr=0x8010C098u; f_8009D0A0(c); // 8010C094
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010C098
  c->f[3]=c->f[1]; // 8010C09C
  c->f[1]=c->f[31]; // 8010C0A0
  c->r[4]=c->r[31]|c->r[31]; // 8010C0A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C0A8
  c->f[2]=c->f[30]; // 8010C0AC
  c->r[5]=0u+0x00000009u; // 8010C0B0
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010C0B4
  c->r[6]=0u+0x00000000u; // 8010C0B8
  c->r[7]=0u+0x00000000u; // 8010C0BC
  c->ctr=c->r[12]; // 8010C0C0
  if (true) { c->lr=0x8010C0C8u; dispatch(c,c->ctr); } // 8010C0C4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8010C0C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8010C0CC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010C0D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010C0D4
  c->lr=c->r[0]; // 8010C0D8
  c->r[1]=c->r[1]+0x00000020u; // 8010C0DC
  return; // 8010C0E0
}

// fn_8010C0E4
void f_8010C0E4(Ctx* __restrict c) {
  trace_call(0x8010C0E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C0E4
  c->r[0]=c->lr; // 8010C0E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010C0EC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8010C0F0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8010C0F4
  c->r[4]=0u+0x00000000u; // 8010C0F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010C0FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010C100
  c->r[30]=c->r[3]|c->r[3]; // 8010C104
  c->r[3]=c->r[3]+0x00000008u; // 8010C108
  c->lr=0x8010C110u; f_8009D3D0(c); // 8010C10C
  c->lr=0x8010C114u; f_8009D0F4(c); // 8010C110
  c->r[31]=c->r[3]|c->r[3]; // 8010C114
  c->r[3]=c->r[30]+0x00000008u; // 8010C118
  c->r[4]=0u+0x00000001u; // 8010C11C
  c->lr=0x8010C124u; f_8009D3D0(c); // 8010C120
  c->lr=0x8010C128u; f_8009D0A0(c); // 8010C124
  c->f[31]=c->f[1]; // 8010C128
  c->r[3]=c->r[30]+0x00000008u; // 8010C12C
  c->r[4]=0u+0x00000002u; // 8010C130
  c->lr=0x8010C138u; f_8009D3D0(c); // 8010C134
  c->lr=0x8010C13Cu; f_8009D0A0(c); // 8010C138
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010C13C
  c->f[2]=c->f[1]; // 8010C140
  c->f[1]=c->f[31]; // 8010C144
  c->r[4]=c->r[31]|c->r[31]; // 8010C148
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C14C
  c->r[5]=0u+0x00000006u; // 8010C150
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010C154
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010C158
  c->r[6]=0u+0x00000000u; // 8010C15C
  c->r[7]=0u+0x00000000u; // 8010C160
  c->ctr=c->r[12]; // 8010C164
  if (true) { c->lr=0x8010C16Cu; dispatch(c,c->ctr); } // 8010C168
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8010C16C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010C170
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8010C174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010C178
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010C17C
  c->lr=c->r[0]; // 8010C180
  c->r[1]=c->r[1]+0x00000020u; // 8010C184
  return; // 8010C188
}

// fn_8010C18C
void f_8010C18C(Ctx* __restrict c) {
  trace_call(0x8010C18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C18C
  c->r[0]=c->lr; // 8010C190
  c->r[4]=0u+0x00000000u; // 8010C194
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010C19C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010C1A0
  c->r[30]=c->r[3]|c->r[3]; // 8010C1A4
  c->r[3]=c->r[3]+0x00000008u; // 8010C1A8
  c->lr=0x8010C1B0u; f_8009D3D0(c); // 8010C1AC
  c->lr=0x8010C1B4u; f_8009D0F4(c); // 8010C1B0
  c->r[31]=c->r[3]|c->r[3]; // 8010C1B4
  c->r[3]=c->r[30]+0x00000008u; // 8010C1B8
  c->r[4]=0u+0x00000001u; // 8010C1BC
  c->lr=0x8010C1C4u; f_8009D3D0(c); // 8010C1C0
  c->lr=0x8010C1C8u; f_8009D0A0(c); // 8010C1C4
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010C1C8
  c->r[4]=c->r[31]|c->r[31]; // 8010C1CC
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010C1D0
  c->r[5]=0u+0x00000008u; // 8010C1D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C1D8
  c->r[6]=0u+0x00000000u; // 8010C1DC
  c->f[3]=c->f[2]; // 8010C1E0
  c->r[7]=0u+0x00000000u; // 8010C1E4
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010C1E8
  c->ctr=c->r[12]; // 8010C1EC
  if (true) { c->lr=0x8010C1F4u; dispatch(c,c->ctr); } // 8010C1F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C1F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010C1F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010C1FC
  c->lr=c->r[0]; // 8010C200
  c->r[1]=c->r[1]+0x00000010u; // 8010C204
  return; // 8010C208
}

// fn_8010C20C
void f_8010C20C(Ctx* __restrict c) {
  trace_call(0x8010C20Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C20C
  c->r[0]=c->lr; // 8010C210
  c->r[4]=0u+0x00000000u; // 8010C214
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010C218
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8010C21C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8010C220
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010C224
  c->r[30]=c->r[3]|c->r[3]; // 8010C228
  c->r[3]=c->r[3]+0x00000008u; // 8010C22C
  c->lr=0x8010C234u; f_8009D3D0(c); // 8010C230
  c->lr=0x8010C238u; f_8009D0F4(c); // 8010C234
  c->r[31]=c->r[3]|c->r[3]; // 8010C238
  c->r[3]=c->r[30]+0x00000008u; // 8010C23C
  c->r[4]=0u+0x00000001u; // 8010C240
  c->lr=0x8010C248u; f_8009D3D0(c); // 8010C244
  c->lr=0x8010C24Cu; f_8009D0A0(c); // 8010C248
  c->f[31]=c->f[1]; // 8010C24C
  c->r[3]=c->r[30]+0x00000008u; // 8010C250
  c->r[4]=0u+0x00000002u; // 8010C254
  c->lr=0x8010C25Cu; f_8009D3D0(c); // 8010C258
  c->lr=0x8010C260u; f_8009D0A0(c); // 8010C25C
  c->f[30]=c->f[1]; // 8010C260
  c->r[3]=c->r[30]+0x00000008u; // 8010C264
  c->r[4]=0u+0x00000003u; // 8010C268
  c->lr=0x8010C270u; f_8009D3D0(c); // 8010C26C
  c->lr=0x8010C274u; f_8009D0A0(c); // 8010C270
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010C274
  c->f[3]=c->f[1]; // 8010C278
  c->f[1]=c->f[31]; // 8010C27C
  c->r[4]=c->r[31]|c->r[31]; // 8010C280
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C284
  c->f[2]=c->f[30]; // 8010C288
  c->r[5]=0u+0x000003E7u; // 8010C28C
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010C290
  c->r[6]=0u+0x00000000u; // 8010C294
  c->r[7]=0u+0x00000000u; // 8010C298
  c->ctr=c->r[12]; // 8010C29C
  if (true) { c->lr=0x8010C2A4u; dispatch(c,c->ctr); } // 8010C2A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8010C2A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8010C2A8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010C2AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010C2B0
  c->lr=c->r[0]; // 8010C2B4
  c->r[1]=c->r[1]+0x00000020u; // 8010C2B8
  return; // 8010C2BC
}

// fn_8010C2C0
void f_8010C2C0(Ctx* __restrict c) {
  trace_call(0x8010C2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C2C0
  c->r[0]=c->lr; // 8010C2C4
  c->r[4]=0u+0x00000000u; // 8010C2C8
  c->r[3]=c->r[3]+0x00000008u; // 8010C2CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C2D0
  c->lr=0x8010C2D8u; f_8009D3D0(c); // 8010C2D4
  c->lr=0x8010C2DCu; f_8009D0F4(c); // 8010C2D8
  c->r[4]=c->r[3]|c->r[3]; // 8010C2DC
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010C2E0
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010C2E4
  c->r[5]=0u+0x000003E8u; // 8010C2E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C2EC
  c->r[6]=0u+0x00000000u; // 8010C2F0
  c->f[2]=c->f[1]; // 8010C2F4
  c->r[7]=0u+0x00000000u; // 8010C2F8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8010C2FC
  c->f[3]=c->f[1]; // 8010C300
  c->ctr=c->r[12]; // 8010C304
  if (true) { c->lr=0x8010C30Cu; dispatch(c,c->ctr); } // 8010C308
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C30C
  c->lr=c->r[0]; // 8010C310
  c->r[1]=c->r[1]+0x00000010u; // 8010C314
  return; // 8010C318
}

// fn_8010C31C
void f_8010C31C(Ctx* __restrict c) {
  trace_call(0x8010C31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C31C
  c->r[0]=c->lr; // 8010C320
  c->r[4]=0u+0x00000000u; // 8010C324
  c->r[3]=c->r[3]+0x00000008u; // 8010C328
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C32C
  c->lr=0x8010C334u; f_8009D3D0(c); // 8010C330
  c->lr=0x8010C338u; f_8009D0F4(c); // 8010C334
  c->r[4]=c->r[3]|c->r[3]; // 8010C338
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010C33C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C340
  c->r[12]=R32(c->r[12]+0x00000024u); // 8010C344
  c->ctr=c->r[12]; // 8010C348
  if (true) { c->lr=0x8010C350u; dispatch(c,c->ctr); } // 8010C34C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C350
  c->lr=c->r[0]; // 8010C354
  c->r[1]=c->r[1]+0x00000010u; // 8010C358
  return; // 8010C35C
}

// fn_8010C360
void f_8010C360(Ctx* __restrict c) {
  trace_call(0x8010C360u);
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8010C360
  c->r[4]=0u+0x00000000u; // 8010C364
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C368
  c->r[12]=R32(c->r[12]+0x00000024u); // 8010C36C
  c->ctr=c->r[12]; // 8010C370
  if (true) { dispatch(c,c->ctr); return; } // 8010C374
}

// fn_8010C378
void f_8010C378(Ctx* __restrict c) {
  trace_call(0x8010C378u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C378
  c->r[0]=c->lr; // 8010C37C
  W32(c->r[1]+0x00000094u,c->r[0]); // 8010C380
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8010C384
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8010C388
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8010C38C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8010C390
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 8010C394
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8010C398
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 8010C39C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 8010C3A0
  c->r[11]=c->r[1]+0x00000050u; // 8010C3A4
  c->lr=0x8010C3ACu; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010C3A8
  c->r[28]=c->r[3]|c->r[3]; // 8010C3AC
  c->r[4]=0u+0x00000000u; // 8010C3B0
  c->r[3]=c->r[3]+0x00000008u; // 8010C3B4
  c->lr=0x8010C3BCu; f_8009D3D0(c); // 8010C3B8
  c->lr=0x8010C3C0u; f_8009D188(c); // 8010C3BC
  c->r[31]=c->r[3]|c->r[3]; // 8010C3C0
  c->r[3]=c->r[28]+0x00000008u; // 8010C3C4
  c->r[4]=0u+0x00000001u; // 8010C3C8
  c->lr=0x8010C3D0u; f_8009D3D0(c); // 8010C3CC
  c->lr=0x8010C3D4u; f_8009D0F4(c); // 8010C3D0
  c->r[30]=c->r[3]|c->r[3]; // 8010C3D4
  c->r[3]=c->r[28]+0x00000008u; // 8010C3D8
  c->r[4]=0u+0x00000002u; // 8010C3DC
  c->lr=0x8010C3E4u; f_8009D3D0(c); // 8010C3E0
  c->lr=0x8010C3E8u; f_8009D0F4(c); // 8010C3E4
  c->r[29]=c->r[3]|c->r[3]; // 8010C3E8
  c->r[3]=c->r[28]+0x00000008u; // 8010C3EC
  c->r[4]=0u+0x00000003u; // 8010C3F0
  c->lr=0x8010C3F8u; f_8009D3D0(c); // 8010C3F4
  c->lr=0x8010C3FCu; f_8009D0A0(c); // 8010C3F8
  c->f[29]=c->f[1]; // 8010C3FC
  c->r[3]=c->r[28]+0x00000008u; // 8010C400
  c->r[4]=0u+0x00000004u; // 8010C404
  c->lr=0x8010C40Cu; f_8009D3D0(c); // 8010C408
  c->lr=0x8010C410u; f_8009D0A0(c); // 8010C40C
  c->f[30]=c->f[1]; // 8010C410
  c->r[3]=c->r[28]+0x00000008u; // 8010C414
  c->r[4]=0u+0x00000005u; // 8010C418
  c->lr=0x8010C420u; f_8009D3D0(c); // 8010C41C
  c->lr=0x8010C424u; f_8009D0A0(c); // 8010C420
  c->f[31]=c->f[1]; // 8010C424
  c->r[3]=c->r[28]+0x00000008u; // 8010C428
  c->r[4]=0u+0x00000006u; // 8010C42C
  c->lr=0x8010C434u; f_8009D3D0(c); // 8010C430
  c->lr=0x8010C438u; f_8009D0A0(c); // 8010C434
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010C438
  c->r[3]=c->r[28]+0x00000008u; // 8010C43C
  c->r[4]=0u+0x00000007u; // 8010C440
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 8010C444
  c->lr=0x8010C44Cu; f_8009D3D0(c); // 8010C448
  c->lr=0x8010C450u; f_8009D188(c); // 8010C44C
  c->r[0]=c->r[3]|c->r[3]; // 8010C450
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010C454
  c->r[4]=c->r[0]^0x80000000u; // 8010C458
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[1]=RF64(ea);} // 8010C45C
  c->r[0]=0u+0x43300000u; // 8010C460
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 8010C464
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C468
  c->r[4]=c->r[31]|c->r[31]; // 8010C46C
  W32(c->r[1]+0x00000038u,c->r[0]); // 8010C470
  c->r[5]=c->r[30]|c->r[30]; // 8010C474
  c->r[12]=R32(c->r[12]+0x00000024u); // 8010C478
  c->r[6]=c->r[29]|c->r[29]; // 8010C47C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8010C480
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8010C484
  c->ctr=c->r[12]; // 8010C488
  if (true) { c->lr=0x8010C490u; dispatch(c,c->ctr); } // 8010C48C
  c->r[29]=c->r[3]|c->r[3]; // 8010C490
  c->r[3]=c->r[1]+0x00000008u; // 8010C494
  c->lr=0x8010C49Cu; f_80264680(c); // 8010C498
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010C49C
  c->r[3]=c->r[1]+0x00000008u; // 8010C4A0
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010C4A4
  c->f[3]=c->f[1]; // 8010C4A8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[28]); // 8010C4AC
  c->lr=0x8010C4B4u; f_803949B8(c); // 8010C4B0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[29]);} // 8010C4B4
  c->r[3]=c->r[29]|c->r[29]; // 8010C4B8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[30]);} // 8010C4BC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[31]);} // 8010C4C0
  c->r[12]=R32(c->r[29]+0x00000010u); // 8010C4C4
  c->r[12]=R32(c->r[12]+0x00000338u); // 8010C4C8
  c->ctr=c->r[12]; // 8010C4CC
  if (true) { c->lr=0x8010C4D4u; dispatch(c,c->ctr); } // 8010C4D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C4D4
  c->r[4]=c->r[1]+0x00000008u; // 8010C4D8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8010C4DC
  c->ctr=c->r[12]; // 8010C4E0
  if (true) { c->lr=0x8010C4E8u; dispatch(c,c->ctr); } // 8010C4E4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8010C4E8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8010C4EC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8010C4F0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8010C4F4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 8010C4F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8010C4FC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 8010C500
  c->r[11]=c->r[1]+0x00000050u; // 8010C504
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 8010C508
  c->lr=0x8010C510u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010C50C
  c->r[0]=R32(c->r[1]+0x00000094u); // 8010C510
  c->lr=c->r[0]; // 8010C514
  c->r[1]=c->r[1]+0x00000090u; // 8010C518
  return; // 8010C51C
}

// fn_8010C520
void f_8010C520(Ctx* __restrict c) {
  trace_call(0x8010C520u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C520
  c->r[0]=c->lr; // 8010C524
  W32(c->r[1]+0x00000134u,c->r[0]); // 8010C528
  c->r[11]=c->r[1]+0x00000130u; // 8010C52C
  c->lr=0x8010C534u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010C530
  c->r[27]=c->r[3]|c->r[3]; // 8010C534
  c->r[4]=0u+0x00000000u; // 8010C538
  c->r[3]=c->r[3]+0x00000008u; // 8010C53C
  c->lr=0x8010C544u; f_8009D3D0(c); // 8010C540
  c->lr=0x8010C548u; f_8009D188(c); // 8010C544
  c->r[31]=c->r[3]|c->r[3]; // 8010C548
  c->r[3]=c->r[27]+0x00000008u; // 8010C54C
  c->r[4]=0u+0x00000001u; // 8010C550
  c->lr=0x8010C558u; f_8009D3D0(c); // 8010C554
  c->lr=0x8010C55Cu; f_8009D0F4(c); // 8010C558
  c->r[30]=c->r[3]|c->r[3]; // 8010C55C
  c->r[3]=c->r[27]+0x00000008u; // 8010C560
  c->r[4]=0u+0x00000002u; // 8010C564
  c->lr=0x8010C56Cu; f_8009D3D0(c); // 8010C568
  c->lr=0x8010C570u; f_8009D0F4(c); // 8010C56C
  c->r[29]=c->r[3]|c->r[3]; // 8010C570
  c->r[3]=c->r[27]+0x00000008u; // 8010C574
  c->r[4]=0u+0x00000003u; // 8010C578
  c->lr=0x8010C580u; f_8009D3D0(c); // 8010C57C
  c->lr=0x8010C584u; f_8009D0F4(c); // 8010C580
  c->r[28]=c->r[3]|c->r[3]; // 8010C584
  c->r[3]=c->r[27]+0x00000008u; // 8010C588
  c->r[4]=0u+0x00000004u; // 8010C58C
  c->lr=0x8010C594u; f_8009D3D0(c); // 8010C590
  c->lr=0x8010C598u; f_8009D188(c); // 8010C594
  c->r[0]=c->r[3]|c->r[3]; // 8010C598
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010C59C
  c->r[4]=c->r[0]^0x80000000u; // 8010C5A0
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[1]=RF64(ea);} // 8010C5A4
  c->r[0]=0u+0x43300000u; // 8010C5A8
  W32(c->r[1]+0x00000114u,c->r[4]); // 8010C5AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C5B0
  c->r[4]=c->r[31]|c->r[31]; // 8010C5B4
  W32(c->r[1]+0x00000110u,c->r[0]); // 8010C5B8
  c->r[5]=c->r[30]|c->r[30]; // 8010C5BC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8010C5C0
  c->r[6]=c->r[28]|c->r[28]; // 8010C5C4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=RF64(ea);} // 8010C5C8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8010C5CC
  c->ctr=c->r[12]; // 8010C5D0
  if (true) { c->lr=0x8010C5D8u; dispatch(c,c->ctr); } // 8010C5D4
  c->r[4]=0u+0x803E0000u; // 8010C5D8
  c->r[28]=c->r[3]|c->r[3]; // 8010C5DC
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 8010C5E0
  c->r[5]=c->r[29]|c->r[29]; // 8010C5E4
  c->r[3]=c->r[1]+0x0000000Cu; // 8010C5E8
  c->r[4]=c->r[4]+0x00000267u; // 8010C5EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010C5F0
  c->lr=0x8010C5F8u; f_80291CC4(c); // 8010C5F4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010C5F8
  c->r[4]=c->r[1]+0x0000000Cu; // 8010C5FC
  c->r[5]=c->r[1]+0x00000008u; // 8010C600
  c->r[6]=0u+0x00000000u; // 8010C604
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C608
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 8010C60C
  c->ctr=c->r[12]; // 8010C610
  if (true) { c->lr=0x8010C618u; dispatch(c,c->ctr); } // 8010C614
  cmps(c,0,(int32_t)c->r[3],0); // 8010C618
  if (crb(c,2)) { goto L_8010C63C; } // 8010C61C
  c->r[12]=R32(c->r[28]+0x00000010u); // 8010C620
  c->r[3]=c->r[28]|c->r[28]; // 8010C624
  c->r[4]=R32(c->r[1]+0x00000008u); // 8010C628
  c->r[5]=0u+0x00000000u; // 8010C62C
  c->r[12]=R32(c->r[12]+0x0000031Cu); // 8010C630
  c->ctr=c->r[12]; // 8010C634
  if (true) { c->lr=0x8010C63Cu; dispatch(c,c->ctr); } // 8010C638
L_8010C63C:;
  c->r[11]=c->r[1]+0x00000130u; // 8010C63C
  c->lr=0x8010C644u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010C640
  c->r[0]=R32(c->r[1]+0x00000134u); // 8010C644
  c->lr=c->r[0]; // 8010C648
  c->r[1]=c->r[1]+0x00000130u; // 8010C64C
  return; // 8010C650
}

// fn_8010C654
void f_8010C654(Ctx* __restrict c) {
  trace_call(0x8010C654u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C654
  c->r[0]=c->lr; // 8010C658
  c->r[4]=0u+0x00000000u; // 8010C65C
  c->r[3]=c->r[3]+0x00000008u; // 8010C660
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C664
  c->lr=0x8010C66Cu; f_8009D3D0(c); // 8010C668
  c->lr=0x8010C670u; f_8009D188(c); // 8010C66C
  c->r[4]=c->r[3]|c->r[3]; // 8010C670
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010C674
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C678
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8010C67C
  c->ctr=c->r[12]; // 8010C680
  if (true) { c->lr=0x8010C688u; dispatch(c,c->ctr); } // 8010C684
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C688
  c->lr=c->r[0]; // 8010C68C
  c->r[1]=c->r[1]+0x00000010u; // 8010C690
  return; // 8010C694
}

// fn_8010C698
void f_8010C698(Ctx* __restrict c) {
  trace_call(0x8010C698u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C698
  c->r[0]=c->lr; // 8010C69C
  c->r[4]=0u+0x00000000u; // 8010C6A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C6A4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010C6A8
  c->r[30]=c->r[3]|c->r[3]; // 8010C6AC
  c->r[3]=c->r[3]+0x00000008u; // 8010C6B0
  c->lr=0x8010C6B8u; f_8009D3D0(c); // 8010C6B4
  c->lr=0x8010C6BCu; f_8009D188(c); // 8010C6B8
  c->r[31]=c->r[3]|c->r[3]; // 8010C6BC
  c->r[3]=c->r[30]+0x00000008u; // 8010C6C0
  c->r[4]=0u+0x00000001u; // 8010C6C4
  c->lr=0x8010C6CCu; f_8009D3D0(c); // 8010C6C8
  c->lr=0x8010C6D0u; f_8009D188(c); // 8010C6CC
  c->r[5]=c->r[3]|c->r[3]; // 8010C6D0
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010C6D4
  c->r[4]=c->r[31]|c->r[31]; // 8010C6D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C6DC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8010C6E0
  c->ctr=c->r[12]; // 8010C6E4
  if (true) { c->lr=0x8010C6ECu; dispatch(c,c->ctr); } // 8010C6E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010C6EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C6F0
  c->lr=c->r[0]; // 8010C6F4
  c->r[1]=c->r[1]+0x00000010u; // 8010C6F8
  return; // 8010C6FC
}

// fn_8010C700
void f_8010C700(Ctx* __restrict c) {
  trace_call(0x8010C700u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C700
  c->r[0]=c->lr; // 8010C704
  c->r[4]=0u+0x00000000u; // 8010C708
  c->r[3]=c->r[3]+0x00000008u; // 8010C70C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010C710
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010C714
  c->lr=0x8010C71Cu; f_8009D3D0(c); // 8010C718
  c->lr=0x8010C720u; f_8009D188(c); // 8010C71C
  c->r[30]=c->r[3]|c->r[3]; // 8010C720
  c->lr=0x8010C728u; f_8003DA30(c); // 8010C724
  c->lr=0x8010C72Cu; f_8003ED58(c); // 8010C728
  c->r[31]=c->r[3]|c->r[3]; // 8010C72C
  goto L_8010C7C0; // 8010C730
L_8010C734:;
  W32(c->r[1]+0x00000010u,c->r[31]); // 8010C734
  c->r[3]=c->r[1]+0x00000010u; // 8010C738
  c->r[4]=0u+0x00000000u; // 8010C73C
  c->lr=0x8010C744u; f_8003ED68(c); // 8010C740
  c->r[31]=c->r[31]+0xFFFFFFF8u; // 8010C744
  c->r[12]=R32(c->r[31]+0x00000010u); // 8010C748
  c->r[3]=c->r[31]|c->r[31]; // 8010C74C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010C750
  c->ctr=c->r[12]; // 8010C754
  if (true) { c->lr=0x8010C75Cu; dispatch(c,c->ctr); } // 8010C758
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010C75C
  c->r[4]=0u+0xC0000000u; // 8010C760
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010C764
  c->r[3]=c->r[1]+0x0000001Cu; // 8010C768
  c->lr=0x8010C770u; f_8003EDD0(c); // 8010C76C
  cmps(c,0,(int32_t)c->r[3],0); // 8010C770
  if (crb(c,2)) { goto L_8010C7BC; } // 8010C774
  c->r[12]=R32(c->r[31]+0x00000010u); // 8010C778
  c->r[3]=c->r[31]|c->r[31]; // 8010C77C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010C780
  c->ctr=c->r[12]; // 8010C784
  if (true) { c->lr=0x8010C78Cu; dispatch(c,c->ctr); } // 8010C788
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010C78C
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010C790
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010C794
  if (crb(c,2)) { goto L_8010C7BC; } // 8010C798
  cmps(c,0,(int32_t)c->r[30],0); // 8010C79C
  if (crb(c,0)) { goto L_8010C7B0; } // 8010C7A0
  c->r[0]=R32(c->r[31]+0x000004C0u); // 8010C7A4
  cmpu(c,0,c->r[0],c->r[30]); // 8010C7A8
  if (!crb(c,2)) { goto L_8010C7BC; } // 8010C7AC
L_8010C7B0:;
  c->lr=0x8010C7B4u; f_8003DA30(c); // 8010C7B0
  c->r[4]=c->r[31]|c->r[31]; // 8010C7B4
  c->lr=0x8010C7BCu; f_8003DECC(c); // 8010C7B8
L_8010C7BC:;
  c->r[31]=R32(c->r[1]+0x00000010u); // 8010C7BC
L_8010C7C0:;
  c->lr=0x8010C7C4u; f_8003DA30(c); // 8010C7C0
  c->lr=0x8010C7C8u; f_8003ECFC(c); // 8010C7C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010C7C8
  c->r[3]=c->r[1]+0x0000000Cu; // 8010C7CC
  c->r[4]=c->r[1]+0x00000008u; // 8010C7D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010C7D4
  c->lr=0x8010C7DCu; f_8003ED7C(c); // 8010C7D8
  cmps(c,0,(int32_t)c->r[3],0); // 8010C7DC
  if (!crb(c,2)) { IRQCHK(c); goto L_8010C734; } // 8010C7E0
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010C7E4
  c->r[4]=c->r[30]|c->r[30]; // 8010C7E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C7EC
  c->r[12]=R32(c->r[12]+0x00000058u); // 8010C7F0
  c->ctr=c->r[12]; // 8010C7F4
  if (true) { c->lr=0x8010C7FCu; dispatch(c,c->ctr); } // 8010C7F8
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010C7FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010C800
  c->lr=c->r[0]; // 8010C804
  c->r[1]=c->r[1]+0x00000030u; // 8010C808
  return; // 8010C80C
}

// fn_8010C810
void f_8010C810(Ctx* __restrict c) {
  trace_call(0x8010C810u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C810
  c->r[0]=c->lr; // 8010C814
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010C818
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010C81C
  c->r[30]=c->r[3]|c->r[3]; // 8010C820
  c->r[0]=R32(c->r[3]+0x00000004u); // 8010C824
  cmps(c,0,(int32_t)c->r[0],5111); // 8010C828
  if (crb(c,2)) { goto L_8010C90C; } // 8010C82C
  if (!crb(c,0)) { goto L_8010C914; } // 8010C830
  cmps(c,0,(int32_t)c->r[0],0); // 8010C834
  if (crb(c,2)) { goto L_8010C840; } // 8010C838
  goto L_8010C914; // 8010C83C
L_8010C840:;
  c->lr=0x8010C844u; f_8003DA30(c); // 8010C840
  c->lr=0x8010C848u; f_8003ED58(c); // 8010C844
  c->r[31]=c->r[3]|c->r[3]; // 8010C848
  goto L_8010C8C8; // 8010C84C
L_8010C850:;
  W32(c->r[1]+0x00000010u,c->r[31]); // 8010C850
  c->r[3]=c->r[1]+0x00000010u; // 8010C854
  c->r[4]=0u+0x00000000u; // 8010C858
  c->lr=0x8010C860u; f_8003ED68(c); // 8010C85C
  c->r[31]=c->r[31]+0xFFFFFFF8u; // 8010C860
  c->r[12]=R32(c->r[31]+0x00000010u); // 8010C864
  c->r[3]=c->r[31]|c->r[31]; // 8010C868
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010C86C
  c->ctr=c->r[12]; // 8010C870
  if (true) { c->lr=0x8010C878u; dispatch(c,c->ctr); } // 8010C874
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010C878
  c->r[4]=0u+0xC0000000u; // 8010C87C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010C880
  c->r[3]=c->r[1]+0x0000001Cu; // 8010C884
  c->lr=0x8010C88Cu; f_8003EDD0(c); // 8010C888
  cmps(c,0,(int32_t)c->r[3],0); // 8010C88C
  if (crb(c,2)) { goto L_8010C8C4; } // 8010C890
  c->r[12]=R32(c->r[31]+0x00000010u); // 8010C894
  c->r[3]=c->r[31]|c->r[31]; // 8010C898
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010C89C
  c->ctr=c->r[12]; // 8010C8A0
  if (true) { c->lr=0x8010C8A8u; dispatch(c,c->ctr); } // 8010C8A4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010C8A8
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010C8AC
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010C8B0
  if (crb(c,2)) { goto L_8010C8C4; } // 8010C8B4
  c->lr=0x8010C8BCu; f_8003DA30(c); // 8010C8B8
  c->r[4]=c->r[31]|c->r[31]; // 8010C8BC
  c->lr=0x8010C8C4u; f_8003DECC(c); // 8010C8C0
L_8010C8C4:;
  c->r[31]=R32(c->r[1]+0x00000010u); // 8010C8C4
L_8010C8C8:;
  c->lr=0x8010C8CCu; f_8003DA30(c); // 8010C8C8
  c->lr=0x8010C8D0u; f_8003ECFC(c); // 8010C8CC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010C8D0
  c->r[3]=c->r[1]+0x0000000Cu; // 8010C8D4
  c->r[4]=c->r[1]+0x00000008u; // 8010C8D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010C8DC
  c->lr=0x8010C8E4u; f_8003ED7C(c); // 8010C8E0
  cmps(c,0,(int32_t)c->r[3],0); // 8010C8E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8010C850; } // 8010C8E8
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010C8EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010C8F0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8010C8F4
  c->ctr=c->r[12]; // 8010C8F8
  if (true) { c->lr=0x8010C900u; dispatch(c,c->ctr); } // 8010C8FC
  c->r[0]=0u+0x000013F7u; // 8010C900
  W32(c->r[30]+0x00000004u,c->r[0]); // 8010C904
  goto L_8010C914; // 8010C908
L_8010C90C:;
  c->r[3]=0u+0x00000000u; // 8010C90C
  goto L_8010C918; // 8010C910
L_8010C914:;
  c->r[3]=0u+0x00000001u; // 8010C914
L_8010C918:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010C918
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010C91C
  c->lr=c->r[0]; // 8010C920
  c->r[1]=c->r[1]+0x00000030u; // 8010C924
  return; // 8010C928
}

// fn_8010C92C
void f_8010C92C(Ctx* __restrict c) {
  trace_call(0x8010C92Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C92C
  c->r[0]=c->lr; // 8010C930
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8010C934
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 8010C938
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 8010C93C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 8010C940
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 8010C944
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 8010C948
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 8010C94C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[28]);} // 8010C950
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,28,ea,0,0);} // 8010C954
  c->r[11]=c->r[1]+0x00000070u; // 8010C958
  c->lr=0x8010C960u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010C95C
  c->r[29]=c->r[3]|c->r[3]; // 8010C960
  c->r[4]=0u+0x00000000u; // 8010C964
  c->r[3]=c->r[3]+0x00000008u; // 8010C968
  c->lr=0x8010C970u; f_8009D3D0(c); // 8010C96C
  c->lr=0x8010C974u; f_8009D188(c); // 8010C970
  c->r[31]=c->r[3]|c->r[3]; // 8010C974
  c->r[3]=c->r[29]+0x00000008u; // 8010C978
  c->r[4]=0u+0x00000001u; // 8010C97C
  c->lr=0x8010C984u; f_8009D3D0(c); // 8010C980
  c->lr=0x8010C988u; f_8009D0A0(c); // 8010C984
  c->f[28]=c->f[1]; // 8010C988
  c->r[3]=c->r[29]+0x00000008u; // 8010C98C
  c->r[4]=0u+0x00000002u; // 8010C990
  c->lr=0x8010C998u; f_8009D3D0(c); // 8010C994
  c->lr=0x8010C99Cu; f_8009D0A0(c); // 8010C998
  c->f[29]=c->f[1]; // 8010C99C
  c->r[3]=c->r[29]+0x00000008u; // 8010C9A0
  c->r[4]=0u+0x00000003u; // 8010C9A4
  c->lr=0x8010C9ACu; f_8009D3D0(c); // 8010C9A8
  c->lr=0x8010C9B0u; f_8009D0A0(c); // 8010C9AC
  c->f[30]=c->f[1]; // 8010C9B0
  c->r[3]=c->r[29]+0x00000008u; // 8010C9B4
  c->r[4]=0u+0x00000004u; // 8010C9B8
  c->lr=0x8010C9C0u; f_8009D3D0(c); // 8010C9BC
  c->lr=0x8010C9C4u; f_8009D0A0(c); // 8010C9C0
  c->f[31]=c->f[1]; // 8010C9C4
  c->r[3]=c->r[1]+0x00000024u; // 8010C9C8
  c->lr=0x8010C9D0u; f_80264680(c); // 8010C9CC
  {uint32_t ea=c->r[2]+0xFFFF933Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010C9D0
  c->r[3]=c->r[1]+0x00000024u; // 8010C9D4
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010C9D8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 8010C9DC
  {uint32_t ea=c->r[2]+0xFFFF9344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010C9E0
  c->f[3]=c->f[1]; // 8010C9E4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8010C9E8
  c->lr=0x8010C9F0u; f_803949B8(c); // 8010C9EC
  c->r[0]=c->r[31]+0xFFF10000u; // 8010C9F0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[28]);} // 8010C9F4
  cmpu(c,0,c->r[0],0x00004240u); // 8010C9F8
  c->r[30]=0u+0xFFFFFFFFu; // 8010C9FC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[29]);} // 8010CA00
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[30]);} // 8010CA04
  if (!crb(c,2)) { goto L_8010CA14; } // 8010CA08
  c->r[30]=0u+0x00000000u; // 8010CA0C
  goto L_8010CA20; // 8010CA10
L_8010CA14:;
  cmpu(c,0,c->r[0],0x00004241u); // 8010CA14
  if (!crb(c,2)) { goto L_8010CA20; } // 8010CA18
  c->r[30]=0u+0x00000001u; // 8010CA1C
L_8010CA20:;
  cmps(c,0,(int32_t)c->r[30],0); // 8010CA20
  if (crb(c,0)) { goto L_8010CA60; } // 8010CA24
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 8010CA28
  c->lr=0x8010CA30u; f_800F39E4(c); // 8010CA2C
  c->r[4]=c->r[30]|c->r[30]; // 8010CA30
  c->lr=0x8010CA38u; f_801D5BAC(c); // 8010CA34
  c->r[5]=0u+0x80490000u; // 8010CA38
  c->r[4]=c->r[3]|c->r[3]; // 8010CA3C
  c->r[3]=c->r[5]+0xFFFFEE9Cu; // 8010CA40
  c->lr=0x8010CA48u; f_80104358(c); // 8010CA44
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010CA48
  c->r[4]=c->r[1]+0x00000024u; // 8010CA4C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8010CA50
  c->ctr=c->r[12]; // 8010CA54
  if (true) { c->lr=0x8010CA5Cu; dispatch(c,c->ctr); } // 8010CA58
  goto L_8010CB5C; // 8010CA5C
L_8010CA60:;
  c->lr=0x8010CA64u; f_8003DA30(c); // 8010CA60
  c->lr=0x8010CA68u; f_8003ED58(c); // 8010CA64
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010CA68
  goto L_8010CB10; // 8010CA6C
L_8010CA70:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CA70
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CA74
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CA78
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010CA7C
  c->ctr=c->r[12]; // 8010CA80
  if (true) { c->lr=0x8010CA88u; dispatch(c,c->ctr); } // 8010CA84
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010CA88
  c->r[4]=0u+0xC0000000u; // 8010CA8C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010CA90
  c->r[3]=c->r[1]+0x0000001Cu; // 8010CA94
  c->lr=0x8010CA9Cu; f_8003EDD0(c); // 8010CA98
  cmps(c,0,(int32_t)c->r[3],0); // 8010CA9C
  if (crb(c,2)) { goto L_8010CB04; } // 8010CAA0
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CAA4
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CAA8
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CAAC
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010CAB0
  c->ctr=c->r[12]; // 8010CAB4
  if (true) { c->lr=0x8010CABCu; dispatch(c,c->ctr); } // 8010CAB8
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010CABC
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010CAC0
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010CAC4
  if (crb(c,2)) { goto L_8010CB04; } // 8010CAC8
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CACC
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CAD0
  c->r[0]=R32(c->r[3]+0x000004C0u); // 8010CAD4
  cmpu(c,0,c->r[0],c->r[31]); // 8010CAD8
  if (!crb(c,2)) { goto L_8010CB04; } // 8010CADC
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CAE0
  c->r[12]=R32(c->r[12]+0x00000338u); // 8010CAE4
  c->ctr=c->r[12]; // 8010CAE8
  if (true) { c->lr=0x8010CAF0u; dispatch(c,c->ctr); } // 8010CAEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010CAF0
  c->r[4]=c->r[1]+0x00000024u; // 8010CAF4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8010CAF8
  c->ctr=c->r[12]; // 8010CAFC
  if (true) { c->lr=0x8010CB04u; dispatch(c,c->ctr); } // 8010CB00
L_8010CB04:;
  c->r[3]=c->r[1]+0x00000010u; // 8010CB04
  c->r[4]=0u+0x00000000u; // 8010CB08
  c->lr=0x8010CB10u; f_8003ED68(c); // 8010CB0C
L_8010CB10:;
  c->lr=0x8010CB14u; f_8003DA30(c); // 8010CB10
  c->lr=0x8010CB18u; f_8003ECFC(c); // 8010CB14
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010CB18
  c->r[4]=c->r[1]+0x00000008u; // 8010CB1C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010CB20
  c->r[3]=c->r[1]+0x0000000Cu; // 8010CB24
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010CB28
  c->lr=0x8010CB30u; f_8003ED7C(c); // 8010CB2C
  cmps(c,0,(int32_t)c->r[3],0); // 8010CB30
  if (!crb(c,2)) { IRQCHK(c); goto L_8010CA70; } // 8010CB34
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010CB38
  c->r[5]=0u+0x80110000u; // 8010CB3C
  c->r[4]=c->r[31]|c->r[31]; // 8010CB40
  c->r[6]=c->r[29]|c->r[29]; // 8010CB44
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010CB48
  c->r[5]=c->r[5]+0xFFFFC92Cu; // 8010CB4C
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010CB50
  c->ctr=c->r[12]; // 8010CB54
  if (true) { c->lr=0x8010CB5Cu; dispatch(c,c->ctr); } // 8010CB58
L_8010CB5C:;
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 8010CB5C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 8010CB60
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 8010CB64
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 8010CB68
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 8010CB6C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 8010CB70
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,28,ea,0,0);} // 8010CB74
  c->r[11]=c->r[1]+0x00000070u; // 8010CB78
  {uint32_t ea=c->r[1]+0x00000070u; c->f[28]=RF64(ea);} // 8010CB7C
  c->lr=0x8010CB84u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010CB80
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8010CB84
  c->lr=c->r[0]; // 8010CB88
  c->r[1]=c->r[1]+0x000000B0u; // 8010CB8C
  return; // 8010CB90
}

// fn_8010CB94
void f_8010CB94(Ctx* __restrict c) {
  trace_call(0x8010CB94u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CB94
  c->r[0]=c->lr; // 8010CB98
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8010CB9C
  c->r[11]=c->r[1]+0x000000E0u; // 8010CBA0
  c->lr=0x8010CBA8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010CBA4
  c->r[31]=c->r[3]|c->r[3]; // 8010CBA8
  c->r[4]=0u+0x00000000u; // 8010CBAC
  c->r[3]=c->r[3]+0x00000008u; // 8010CBB0
  c->lr=0x8010CBB8u; f_8009D3D0(c); // 8010CBB4
  c->lr=0x8010CBBCu; f_8009D188(c); // 8010CBB8
  c->r[30]=c->r[3]|c->r[3]; // 8010CBBC
  c->r[3]=c->r[1]+0x0000009Cu; // 8010CBC0
  c->lr=0x8010CBC8u; f_80264680(c); // 8010CBC4
  c->r[0]=c->r[30]+0xFFF10000u; // 8010CBC8
  c->r[29]=0u+0xFFFFFFFFu; // 8010CBCC
  cmpu(c,0,c->r[0],0x00004240u); // 8010CBD0
  if (!crb(c,2)) { goto L_8010CBE0; } // 8010CBD4
  c->r[29]=0u+0x00000000u; // 8010CBD8
  goto L_8010CBEC; // 8010CBDC
L_8010CBE0:;
  cmpu(c,0,c->r[0],0x00004241u); // 8010CBE0
  if (!crb(c,2)) { goto L_8010CBEC; } // 8010CBE4
  c->r[29]=0u+0x00000001u; // 8010CBE8
L_8010CBEC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8010CBEC
  if (crb(c,0)) { goto L_8010CC54; } // 8010CBF0
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 8010CBF4
  c->lr=0x8010CBFCu; f_800F39E4(c); // 8010CBF8
  c->r[4]=c->r[29]|c->r[29]; // 8010CBFC
  c->lr=0x8010CC04u; f_801D5BAC(c); // 8010CC00
  c->r[5]=0u+0x80490000u; // 8010CC04
  c->r[4]=c->r[3]|c->r[3]; // 8010CC08
  c->r[3]=c->r[5]+0xFFFFEE9Cu; // 8010CC0C
  c->lr=0x8010CC14u; f_80104358(c); // 8010CC10
  c->r[4]=c->r[3]|c->r[3]; // 8010CC14
  c->r[3]=c->r[1]+0x0000006Cu; // 8010CC18
  c->r[12]=R32(c->r[4]+0x00000000u); // 8010CC1C
  c->r[12]=R32(c->r[12]+0x00000040u); // 8010CC20
  c->ctr=c->r[12]; // 8010CC24
  if (true) { c->lr=0x8010CC2Cu; dispatch(c,c->ctr); } // 8010CC28
  c->r[0]=0u+0x00000006u; // 8010CC2C
  c->r[5]=c->r[1]+0x00000098u; // 8010CC30
  c->r[4]=c->r[1]+0x00000068u; // 8010CC34
  c->ctr=c->r[0]; // 8010CC38
L_8010CC3C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8010CC3C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8010CC40
  W32(c->r[5]+0x00000004u,c->r[3]); // 8010CC44
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8010CC48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010CC3C; } // 8010CC4C
  goto L_8010CD58; // 8010CC50
L_8010CC54:;
  c->lr=0x8010CC58u; f_8003DA30(c); // 8010CC54
  c->lr=0x8010CC5Cu; f_8003ED58(c); // 8010CC58
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010CC5C
  goto L_8010CD30; // 8010CC60
L_8010CC64:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CC64
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CC68
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CC6C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010CC70
  c->ctr=c->r[12]; // 8010CC74
  if (true) { c->lr=0x8010CC7Cu; dispatch(c,c->ctr); } // 8010CC78
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010CC7C
  c->r[4]=0u+0xC0000000u; // 8010CC80
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010CC84
  c->r[3]=c->r[1]+0x0000001Cu; // 8010CC88
  c->lr=0x8010CC90u; f_8003EDD0(c); // 8010CC8C
  cmps(c,0,(int32_t)c->r[3],0); // 8010CC90
  if (crb(c,2)) { goto L_8010CD24; } // 8010CC94
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CC98
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CC9C
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CCA0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010CCA4
  c->ctr=c->r[12]; // 8010CCA8
  if (true) { c->lr=0x8010CCB0u; dispatch(c,c->ctr); } // 8010CCAC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010CCB0
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010CCB4
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010CCB8
  if (crb(c,2)) { goto L_8010CD24; } // 8010CCBC
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CCC0
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CCC4
  c->r[0]=R32(c->r[3]+0x000004C0u); // 8010CCC8
  cmpu(c,0,c->r[0],c->r[30]); // 8010CCCC
  if (!crb(c,2)) { goto L_8010CD24; } // 8010CCD0
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CCD4
  c->r[12]=R32(c->r[12]+0x00000338u); // 8010CCD8
  c->ctr=c->r[12]; // 8010CCDC
  if (true) { c->lr=0x8010CCE4u; dispatch(c,c->ctr); } // 8010CCE0
  c->r[4]=c->r[3]|c->r[3]; // 8010CCE4
  c->r[3]=c->r[1]+0x0000003Cu; // 8010CCE8
  c->r[12]=R32(c->r[4]+0x00000000u); // 8010CCEC
  c->r[12]=R32(c->r[12]+0x00000040u); // 8010CCF0
  c->ctr=c->r[12]; // 8010CCF4
  if (true) { c->lr=0x8010CCFCu; dispatch(c,c->ctr); } // 8010CCF8
  c->r[0]=0u+0x00000006u; // 8010CCFC
  c->r[5]=c->r[1]+0x00000098u; // 8010CD00
  c->r[4]=c->r[1]+0x00000038u; // 8010CD04
  c->ctr=c->r[0]; // 8010CD08
L_8010CD0C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8010CD0C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8010CD10
  W32(c->r[5]+0x00000004u,c->r[3]); // 8010CD14
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8010CD18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010CD0C; } // 8010CD1C
  goto L_8010CD58; // 8010CD20
L_8010CD24:;
  c->r[3]=c->r[1]+0x00000010u; // 8010CD24
  c->r[4]=0u+0x00000000u; // 8010CD28
  c->lr=0x8010CD30u; f_8003ED68(c); // 8010CD2C
L_8010CD30:;
  c->lr=0x8010CD34u; f_8003DA30(c); // 8010CD30
  c->lr=0x8010CD38u; f_8003ECFC(c); // 8010CD34
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010CD38
  c->r[4]=c->r[1]+0x00000008u; // 8010CD3C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010CD40
  c->r[3]=c->r[1]+0x0000000Cu; // 8010CD44
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010CD48
  c->lr=0x8010CD50u; f_8003ED7C(c); // 8010CD4C
  cmps(c,0,(int32_t)c->r[3],0); // 8010CD50
  if (!crb(c,2)) { IRQCHK(c); goto L_8010CC64; } // 8010CD54
L_8010CD58:;
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CD58
  c->r[3]=c->r[1]+0x00000030u; // 8010CD5C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CD60
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010CD64
  c->lr=0x8010CD6Cu; f_800521A0(c); // 8010CD68
  c->r[3]=c->r[1]+0x00000024u; // 8010CD6C
  c->r[4]=c->r[1]+0x0000009Cu; // 8010CD70
  c->lr=0x8010CD78u; f_80029EC4(c); // 8010CD74
  c->r[0]=0u+0x00000004u; // 8010CD78
  c->r[3]=c->r[31]+0x00000798u; // 8010CD7C
  W32(c->r[31]+0x00000798u,c->r[0]); // 8010CD80
  c->r[4]=0u+0x00000000u; // 8010CD84
  c->lr=0x8010CD8Cu; f_8009D3D0(c); // 8010CD88
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CD8C
  c->lr=0x8010CD94u; f_8009D1C8(c); // 8010CD90
  c->r[3]=c->r[31]+0x00000798u; // 8010CD94
  c->r[4]=0u+0x00000001u; // 8010CD98
  c->lr=0x8010CDA0u; f_8009D3D0(c); // 8010CD9C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CDA0
  c->lr=0x8010CDA8u; f_8009D1C8(c); // 8010CDA4
  c->r[3]=c->r[31]+0x00000798u; // 8010CDA8
  c->r[4]=0u+0x00000002u; // 8010CDAC
  c->lr=0x8010CDB4u; f_8009D3D0(c); // 8010CDB0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CDB4
  c->lr=0x8010CDBCu; f_8009D1C8(c); // 8010CDB8
  c->r[3]=c->r[31]+0x00000798u; // 8010CDBC
  c->r[4]=0u+0x00000003u; // 8010CDC0
  c->lr=0x8010CDC8u; f_8009D3D0(c); // 8010CDC4
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CDC8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CDCC
  {uint32_t ea=c->r[2]+0xFFFF934Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010CDD0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8010CDD4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8010CDD8
  c->lr=0x8010CDE0u; f_8009D1C8(c); // 8010CDDC
  c->r[11]=c->r[1]+0x000000E0u; // 8010CDE0
  c->lr=0x8010CDE8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010CDE4
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8010CDE8
  c->lr=c->r[0]; // 8010CDEC
  c->r[1]=c->r[1]+0x000000E0u; // 8010CDF0
  return; // 8010CDF4
}

// fn_8010CDF8
void f_8010CDF8(Ctx* __restrict c) {
  trace_call(0x8010CDF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CDF8
  c->r[0]=c->lr; // 8010CDFC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010CE00
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8010CE04
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8010CE08
  c->r[4]=0u+0x00000000u; // 8010CE0C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010CE10
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010CE14
  c->r[30]=c->r[3]|c->r[3]; // 8010CE18
  c->r[3]=c->r[3]+0x00000008u; // 8010CE1C
  c->lr=0x8010CE24u; f_8009D3D0(c); // 8010CE20
  c->lr=0x8010CE28u; f_8009D188(c); // 8010CE24
  c->r[0]=c->r[3]+0xFFF10000u; // 8010CE28
  c->r[31]=c->r[3]|c->r[3]; // 8010CE2C
  cmpu(c,0,c->r[0],0x00004240u); // 8010CE30
  c->r[3]=0u+0xFFFFFFFFu; // 8010CE34
  if (!crb(c,2)) { goto L_8010CE44; } // 8010CE38
  c->r[3]=0u+0x00000000u; // 8010CE3C
  goto L_8010CE50; // 8010CE40
L_8010CE44:;
  cmpu(c,0,c->r[0],0x00004241u); // 8010CE44
  if (!crb(c,2)) { goto L_8010CE50; } // 8010CE48
  c->r[3]=0u+0x00000001u; // 8010CE4C
L_8010CE50:;
  cmps(c,0,(int32_t)c->r[3],0); // 8010CE50
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[31]=c->ps1[31]=RF32(ea);} // 8010CE54
  if (crb(c,0)) { goto L_8010CE74; } // 8010CE58
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8010CE5C
  c->r[3]=c->r[13]+0xFFFF94B8u; // 8010CE60
  c->r[3]=R32(c->r[3]+c->r[0]); // 8010CE64
  c->lr=0x8010CE6Cu; f_80067C84(c); // 8010CE68
  c->f[31]=c->f[1]; // 8010CE6C
  goto L_8010CF2C; // 8010CE70
L_8010CE74:;
  c->lr=0x8010CE78u; f_8003DA30(c); // 8010CE74
  c->lr=0x8010CE7Cu; f_8003ED58(c); // 8010CE78
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010CE7C
  goto L_8010CF04; // 8010CE80
L_8010CE84:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CE84
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CE88
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CE8C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010CE90
  c->ctr=c->r[12]; // 8010CE94
  if (true) { c->lr=0x8010CE9Cu; dispatch(c,c->ctr); } // 8010CE98
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010CE9C
  c->r[4]=0u+0xC0000000u; // 8010CEA0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010CEA4
  c->r[3]=c->r[1]+0x0000001Cu; // 8010CEA8
  c->lr=0x8010CEB0u; f_8003EDD0(c); // 8010CEAC
  cmps(c,0,(int32_t)c->r[3],0); // 8010CEB0
  if (crb(c,2)) { goto L_8010CEF8; } // 8010CEB4
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CEB8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CEBC
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CEC0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010CEC4
  c->ctr=c->r[12]; // 8010CEC8
  if (true) { c->lr=0x8010CED0u; dispatch(c,c->ctr); } // 8010CECC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010CED0
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010CED4
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010CED8
  if (crb(c,2)) { goto L_8010CEF8; } // 8010CEDC
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CEE0
  c->r[0]=R32(c->r[3]+0x000004B8u); // 8010CEE4
  cmpu(c,0,c->r[0],c->r[31]); // 8010CEE8
  if (!crb(c,2)) { goto L_8010CEF8; } // 8010CEEC
  {uint32_t ea=c->r[3]+0x0000039Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8010CEF0
  goto L_8010CF2C; // 8010CEF4
L_8010CEF8:;
  c->r[3]=c->r[1]+0x00000010u; // 8010CEF8
  c->r[4]=0u+0x00000000u; // 8010CEFC
  c->lr=0x8010CF04u; f_8003ED68(c); // 8010CF00
L_8010CF04:;
  c->lr=0x8010CF08u; f_8003DA30(c); // 8010CF04
  c->lr=0x8010CF0Cu; f_8003ECFC(c); // 8010CF08
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010CF0C
  c->r[4]=c->r[1]+0x00000008u; // 8010CF10
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010CF14
  c->r[3]=c->r[1]+0x0000000Cu; // 8010CF18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010CF1C
  c->lr=0x8010CF24u; f_8003ED7C(c); // 8010CF20
  cmps(c,0,(int32_t)c->r[3],0); // 8010CF24
  if (!crb(c,2)) { IRQCHK(c); goto L_8010CE84; } // 8010CF28
L_8010CF2C:;
  c->r[0]=0u+0x00000001u; // 8010CF2C
  c->r[3]=c->r[30]+0x00000798u; // 8010CF30
  W32(c->r[30]+0x00000798u,c->r[0]); // 8010CF34
  c->r[4]=0u+0x00000000u; // 8010CF38
  c->lr=0x8010CF40u; f_8009D3D0(c); // 8010CF3C
  c->f[1]=c->f[31]; // 8010CF40
  c->lr=0x8010CF48u; f_8009D1C8(c); // 8010CF44
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8010CF48
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010CF4C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8010CF50
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010CF54
  c->r[30]=R32(c->r[1]+0x00000028u); // 8010CF58
  c->lr=c->r[0]; // 8010CF5C
  c->r[1]=c->r[1]+0x00000040u; // 8010CF60
  return; // 8010CF64
}

// fn_8010CF68
void f_8010CF68(Ctx* __restrict c) {
  trace_call(0x8010CF68u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CF68
  c->r[0]=c->lr; // 8010CF6C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010CF70
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8010CF74
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8010CF78
  c->r[4]=0u+0x00000000u; // 8010CF7C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010CF80
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010CF84
  c->r[30]=c->r[3]|c->r[3]; // 8010CF88
  c->r[3]=c->r[3]+0x00000008u; // 8010CF8C
  c->lr=0x8010CF94u; f_8009D3D0(c); // 8010CF90
  c->lr=0x8010CF98u; f_8009D188(c); // 8010CF94
  c->r[31]=c->r[3]|c->r[3]; // 8010CF98
  c->r[3]=c->r[30]+0x00000008u; // 8010CF9C
  c->r[4]=0u+0x00000001u; // 8010CFA0
  c->lr=0x8010CFA8u; f_8009D3D0(c); // 8010CFA4
  c->lr=0x8010CFACu; f_8009D0A0(c); // 8010CFA8
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010CFAC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8010CFB0
  c->lr=0x8010CFB8u; f_8003DA30(c); // 8010CFB4
  c->lr=0x8010CFBCu; f_8003ED58(c); // 8010CFB8
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010CFBC
  goto L_8010D04C; // 8010CFC0
L_8010CFC4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CFC4
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CFC8
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010CFCC
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010CFD0
  c->ctr=c->r[12]; // 8010CFD4
  if (true) { c->lr=0x8010CFDCu; dispatch(c,c->ctr); } // 8010CFD8
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010CFDC
  c->r[4]=0u+0xC0000000u; // 8010CFE0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010CFE4
  c->r[3]=c->r[1]+0x0000001Cu; // 8010CFE8
  c->lr=0x8010CFF0u; f_8003EDD0(c); // 8010CFEC
  cmps(c,0,(int32_t)c->r[3],0); // 8010CFF0
  if (crb(c,2)) { goto L_8010D040; } // 8010CFF4
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010CFF8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010CFFC
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D000
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D004
  c->ctr=c->r[12]; // 8010D008
  if (true) { c->lr=0x8010D010u; dispatch(c,c->ctr); } // 8010D00C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010D010
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010D014
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010D018
  if (crb(c,2)) { goto L_8010D040; } // 8010D01C
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D020
  c->r[0]=R32(c->r[3]+0x000004B8u); // 8010D024
  cmpu(c,0,c->r[0],c->r[31]); // 8010D028
  if (!crb(c,2)) { goto L_8010D040; } // 8010D02C
  {uint32_t ea=c->r[3]+0x000003A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010D030
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 8010D034
  {uint32_t ea=c->r[3]+0x0000039Cu; WF32(ea,c->f[0]);} // 8010D038
  goto L_8010D074; // 8010D03C
L_8010D040:;
  c->r[3]=c->r[1]+0x00000010u; // 8010D040
  c->r[4]=0u+0x00000000u; // 8010D044
  c->lr=0x8010D04Cu; f_8003ED68(c); // 8010D048
L_8010D04C:;
  c->lr=0x8010D050u; f_8003DA30(c); // 8010D04C
  c->lr=0x8010D054u; f_8003ECFC(c); // 8010D050
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010D054
  c->r[4]=c->r[1]+0x00000008u; // 8010D058
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010D05C
  c->r[3]=c->r[1]+0x0000000Cu; // 8010D060
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010D064
  c->lr=0x8010D06Cu; f_8003ED7C(c); // 8010D068
  cmps(c,0,(int32_t)c->r[3],0); // 8010D06C
  if (!crb(c,2)) { IRQCHK(c); goto L_8010CFC4; } // 8010D070
L_8010D074:;
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010D074
  c->r[5]=0u+0x80110000u; // 8010D078
  c->r[4]=c->r[31]|c->r[31]; // 8010D07C
  c->r[6]=c->r[30]|c->r[30]; // 8010D080
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010D084
  c->r[5]=c->r[5]+0xFFFFCF68u; // 8010D088
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010D08C
  c->ctr=c->r[12]; // 8010D090
  if (true) { c->lr=0x8010D098u; dispatch(c,c->ctr); } // 8010D094
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8010D098
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010D09C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8010D0A0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010D0A4
  c->r[30]=R32(c->r[1]+0x00000028u); // 8010D0A8
  c->lr=c->r[0]; // 8010D0AC
  c->r[1]=c->r[1]+0x00000040u; // 8010D0B0
  return; // 8010D0B4
}

// fn_8010D0B8
void f_8010D0B8(Ctx* __restrict c) {
  trace_call(0x8010D0B8u);
  {uint32_t ea=c->r[1]+0xFFFFFC40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D0B8
  c->r[0]=c->lr; // 8010D0BC
  W32(c->r[1]+0x000003C4u,c->r[0]); // 8010D0C0
  {uint32_t ea=c->r[1]+0x000003B0u; WF64(ea,c->f[31]);} // 8010D0C4
  {uint32_t ea=c->r[1]+0x000003B8u; psq_store(c,31,ea,0,0);} // 8010D0C8
  c->r[11]=c->r[1]+0x000003B0u; // 8010D0CC
  c->lr=0x8010D0D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010D0D0
  c->r[31]=c->r[1]|c->r[1]; // 8010D0D4
  c->r[29]=c->r[3]|c->r[3]; // 8010D0D8
  c->r[4]=0u+0x00000000u; // 8010D0DC
  c->r[3]=c->r[3]+0x00000008u; // 8010D0E0
  c->lr=0x8010D0E8u; f_8009D3D0(c); // 8010D0E4
  c->lr=0x8010D0ECu; f_8009D188(c); // 8010D0E8
  c->r[30]=c->r[3]|c->r[3]; // 8010D0EC
  c->r[3]=c->r[29]+0x00000008u; // 8010D0F0
  c->r[4]=0u+0x00000001u; // 8010D0F4
  c->lr=0x8010D0FCu; f_8009D3D0(c); // 8010D0F8
  c->lr=0x8010D100u; f_8009D0A0(c); // 8010D0FC
  c->f[31]=c->f[1]; // 8010D100
  c->r[3]=c->r[29]+0x00000008u; // 8010D104
  c->r[4]=0u+0x00000002u; // 8010D108
  c->lr=0x8010D110u; f_8009D3D0(c); // 8010D10C
  c->lr=0x8010D114u; f_8009D188(c); // 8010D110
  c->r[0]=c->r[30]+0xFFF10000u; // 8010D114
  c->r[28]=c->r[3]|c->r[3]; // 8010D118
  cmpu(c,0,c->r[0],0x00004240u); // 8010D11C
  c->r[26]=0u+0xFFFFFFFFu; // 8010D120
  if (!crb(c,2)) { goto L_8010D130; } // 8010D124
  c->r[26]=0u+0x00000000u; // 8010D128
  goto L_8010D13C; // 8010D12C
L_8010D130:;
  cmpu(c,0,c->r[0],0x00004241u); // 8010D130
  if (!crb(c,2)) { goto L_8010D13C; } // 8010D134
  c->r[26]=0u+0x00000001u; // 8010D138
L_8010D13C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8010D13C
  if (crb(c,0)) { goto L_8010D180; } // 8010D140
  c->f[1]=c->f[31]; // 8010D144
  c->r[3]=c->r[31]+0x00000070u; // 8010D148
  c->r[4]=0u+0x00000000u; // 8010D14C
  c->lr=0x8010D154u; f_8010541C(c); // 8010D150
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 8010D154
  c->r[3]=c->r[13]+0xFFFF94B8u; // 8010D158
  c->r[6]=R32(c->r[3]+c->r[0]); // 8010D15C
  c->r[3]=c->r[31]+0x00000038u; // 8010D160
  c->r[4]=c->r[31]+0x00000070u; // 8010D164
  c->r[5]=R32(c->r[6]+0x00000000u); // 8010D168
  c->r[0]=R32(c->r[6]+0x00000004u); // 8010D16C
  W32(c->r[31]+0x00000038u,c->r[5]); // 8010D170
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8010D174
  c->lr=0x8010D17Cu; f_800BCDAC(c); // 8010D178
  goto L_8010D3A4; // 8010D17C
L_8010D180:;
  c->lr=0x8010D184u; f_8003DA30(c); // 8010D180
  c->lr=0x8010D188u; f_8003ED58(c); // 8010D184
  W32(c->r[31]+0x00000010u,c->r[3]); // 8010D188
  W32(c->r[31]+0x00000014u,c->r[3]); // 8010D18C
  goto L_8010D358; // 8010D190
L_8010D194:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010D194
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D198
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D19C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D1A0
  c->ctr=c->r[12]; // 8010D1A4
  if (true) { c->lr=0x8010D1ACu; dispatch(c,c->ctr); } // 8010D1A8
  W32(c->r[31]+0x00000034u,c->r[4]); // 8010D1AC
  c->r[4]=0u+0xC0000000u; // 8010D1B0
  W32(c->r[31]+0x00000030u,c->r[3]); // 8010D1B4
  c->r[3]=c->r[31]+0x00000030u; // 8010D1B8
  c->lr=0x8010D1C0u; f_8003EDD0(c); // 8010D1BC
  cmps(c,0,(int32_t)c->r[3],0); // 8010D1C0
  if (crb(c,2)) { goto L_8010D34C; } // 8010D1C4
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010D1C8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D1CC
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D1D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D1D4
  c->ctr=c->r[12]; // 8010D1D8
  if (true) { c->lr=0x8010D1E0u; dispatch(c,c->ctr); } // 8010D1DC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010D1E0
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 8010D1E4
  W32(c->r[31]+0x00000028u,c->r[3]); // 8010D1E8
  if (crb(c,2)) { goto L_8010D34C; } // 8010D1EC
  c->r[27]=R32(c->r[31]+0x00000014u); // 8010D1F0
  c->r[0]=R32(c->r[27]+0x000004B8u); // 8010D1F4
  cmpu(c,0,c->r[0],c->r[30]); // 8010D1F8
  if (!crb(c,2)) { goto L_8010D34C; } // 8010D1FC
  cmps(c,0,(int32_t)c->r[28],0); // 8010D200
  if (!crb(c,2)) { goto L_8010D25C; } // 8010D204
  c->f[1]=c->f[31]; // 8010D208
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D20C
  c->r[3]=c->r[31]+0x00000218u; // 8010D210
  c->r[4]=0u+0x00000001u; // 8010D214
  c->r[5]=0u+0xFFFFFFFFu; // 8010D218
  c->lr=0x8010D220u; f_8010D3CC(c); // 8010D21C
  c->r[5]=0u+0x803F0000u; // 8010D220
  c->r[3]=c->r[31]+0x00000020u; // 8010D224
  c->r[5]=c->r[5]+0x00002468u; // 8010D228
  c->r[4]=c->r[31]+0x00000218u; // 8010D22C
  W32(c->r[31]+0x00000218u,c->r[5]); // 8010D230
  c->r[5]=R32(c->r[27]+0xFFFFFFF8u); // 8010D234
  c->r[0]=R32(c->r[27]+0xFFFFFFFCu); // 8010D238
  W32(c->r[31]+0x00000020u,c->r[5]); // 8010D23C
  W32(c->r[31]+0x00000024u,c->r[0]); // 8010D240
  c->lr=0x8010D248u; f_8010D480(c); // 8010D244
  c->r[0]=0u+0xFFFFFFFFu; // 8010D248
  c->r[3]=c->r[31]+0x00000218u; // 8010D24C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8010D250
  c->lr=0x8010D258u; f_8006BEA8(c); // 8010D254
  goto L_8010D380; // 8010D258
L_8010D25C:;
  c->f[1]=c->f[31]; // 8010D25C
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D260
  c->r[3]=c->r[31]+0x00000094u; // 8010D264
  c->r[4]=0u+0x00000001u; // 8010D268
  c->r[5]=0u+0xFFFFFFFFu; // 8010D26C
  c->lr=0x8010D274u; f_8010D3CC(c); // 8010D270
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010D274
  c->r[28]=0u+0x803F0000u; // 8010D278
  c->r[28]=c->r[28]+0x0000244Cu; // 8010D27C
  c->r[3]=c->r[31]+0x00000018u; // 8010D280
  W32(c->r[31]+0x00000094u,c->r[28]); // 8010D284
  {uint32_t ea=c->r[31]+0x0000020Cu; WF32(ea,c->f[0]);} // 8010D288
  {uint32_t ea=c->r[31]+0x00000210u; WF32(ea,c->f[0]);} // 8010D28C
  {uint32_t ea=c->r[31]+0x00000214u; WF32(ea,c->f[0]);} // 8010D290
  c->r[4]=R32(c->r[27]+0xFFFFFFF8u); // 8010D294
  c->r[0]=R32(c->r[27]+0xFFFFFFFCu); // 8010D298
  W32(c->r[31]+0x00000018u,c->r[4]); // 8010D29C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8010D2A0
  c->lr=0x8010D2A8u; f_8003F1D4(c); // 8010D2A4
  cmps(c,0,(int32_t)c->r[3],0); // 8010D2A8
  if (crb(c,2)) { goto L_8010D338; } // 8010D2AC
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 8010D2B0
  c->lr=0x8010D2B8u; f_802A6EE4(c); // 8010D2B4
  cmps(c,0,(int32_t)c->r[3],0); // 8010D2B8
  c->r[26]=c->r[3]|c->r[3]; // 8010D2BC
  if (crb(c,2)) { goto L_8010D338; } // 8010D2C0
  if (crb(c,2)) { goto L_8010D2E4; } // 8010D2C4
  W32(c->r[31]+0x00000054u,c->r[1]); // 8010D2C8
  c->lr=0x8010D2D0u; f_8006BEE8(c); // 8010D2CC
  W32(c->r[26]+0x00000000u,c->r[28]); // 8010D2D0
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010D2D4
  {uint32_t ea=c->r[26]+0x00000178u; WF32(ea,c->f[0]);} // 8010D2D8
  {uint32_t ea=c->r[26]+0x0000017Cu; WF32(ea,c->f[0]);} // 8010D2DC
  {uint32_t ea=c->r[26]+0x00000180u; WF32(ea,c->f[0]);} // 8010D2E0
L_8010D2E4:;
  c->r[3]=c->r[26]|c->r[26]; // 8010D2E4
  c->r[4]=c->r[31]+0x00000094u; // 8010D2E8
  c->lr=0x8010D2F0u; f_8006BDA8(c); // 8010D2EC
  {uint32_t ea=c->r[31]+0x0000020Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8010D2F0
  c->r[27]=addc(c,c->r[26],0x00000184u,0); cr0(c,c->r[27]); // 8010D2F4
  {uint32_t ea=c->r[26]+0x00000178u; WF32(ea,c->f[0]);} // 8010D2F8
  {uint32_t ea=c->r[31]+0x00000210u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010D2FC
  {uint32_t ea=c->r[26]+0x0000017Cu; WF32(ea,c->f[0]);} // 8010D300
  {uint32_t ea=c->r[31]+0x00000214u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010D304
  {uint32_t ea=c->r[26]+0x00000180u; WF32(ea,c->f[0]);} // 8010D308
  if (crb(c,2)) { goto L_8010D320; } // 8010D30C
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 8010D310
  c->r[3]=c->r[27]|c->r[27]; // 8010D314
  c->r[4]=c->r[26]|c->r[26]; // 8010D318
  c->lr=0x8010D320u; f_80064CE8(c); // 8010D31C
L_8010D320:;
  c->r[3]=c->r[31]+0x00000018u; // 8010D320
  c->lr=0x8010D328u; f_80064CFC(c); // 8010D324
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010D328
  c->r[4]=c->r[27]|c->r[27]; // 8010D32C
  c->r[3]=c->r[3]+0x00000030u; // 8010D330
  c->lr=0x8010D338u; f_8003FD14(c); // 8010D334
L_8010D338:;
  c->r[0]=0u+0xFFFFFFFFu; // 8010D338
  c->r[3]=c->r[31]+0x00000094u; // 8010D33C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8010D340
  c->lr=0x8010D348u; f_8006BCB4(c); // 8010D344
  goto L_8010D380; // 8010D348
L_8010D34C:;
  c->r[3]=c->r[31]+0x00000014u; // 8010D34C
  c->r[4]=0u+0x00000000u; // 8010D350
  c->lr=0x8010D358u; f_8003ED68(c); // 8010D354
L_8010D358:;
  c->lr=0x8010D35Cu; f_8003DA30(c); // 8010D358
  c->lr=0x8010D360u; f_8003ECFC(c); // 8010D35C
  c->r[0]=R32(c->r[31]+0x00000014u); // 8010D360
  c->r[4]=c->r[31]+0x00000008u; // 8010D364
  W32(c->r[31]+0x00000008u,c->r[3]); // 8010D368
  c->r[3]=c->r[31]+0x0000000Cu; // 8010D36C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8010D370
  c->lr=0x8010D378u; f_8003ED7C(c); // 8010D374
  cmps(c,0,(int32_t)c->r[3],0); // 8010D378
  if (!crb(c,2)) { IRQCHK(c); goto L_8010D194; } // 8010D37C
L_8010D380:;
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010D380
  c->r[5]=0u+0x80110000u; // 8010D384
  c->r[4]=c->r[30]|c->r[30]; // 8010D388
  c->r[6]=c->r[29]|c->r[29]; // 8010D38C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010D390
  c->r[5]=c->r[5]+0xFFFFD0B8u; // 8010D394
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010D398
  c->ctr=c->r[12]; // 8010D39C
  if (true) { c->lr=0x8010D3A4u; dispatch(c,c->ctr); } // 8010D3A0
L_8010D3A4:;
  c->r[10]=c->r[31]|c->r[31]; // 8010D3A4
  {uint32_t ea=c->r[10]+0x000003B8u; psq_load(c,31,ea,0,0);} // 8010D3A8
  c->r[11]=c->r[10]+0x000003B0u; // 8010D3AC
  {uint32_t ea=c->r[31]+0x000003B0u; c->f[31]=RF64(ea);} // 8010D3B0
  c->lr=0x8010D3B8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010D3B4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8010D3B8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8010D3BC
  c->r[1]=c->r[10]|c->r[10]; // 8010D3C0
  c->lr=c->r[0]; // 8010D3C4
  return; // 8010D3C8
}

// fn_8010D3CC
void f_8010D3CC(Ctx* __restrict c) {
  trace_call(0x8010D3CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D3CC
  c->r[0]=c->lr; // 8010D3D0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010D3D4
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 8010D3D8
  c->f[31]=c->f[2]; // 8010D3DC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8010D3E0
  c->f[30]=c->f[1]; // 8010D3E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010D3E8
  c->r[31]=0u+0x00000000u; // 8010D3EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010D3F0
  c->r[30]=c->r[5]|c->r[5]; // 8010D3F4
  c->r[5]=0u+0x00000000u; // 8010D3F8
  W32(c->r[1]+0x00000024u,c->r[29]); // 8010D3FC
  c->r[29]=c->r[4]|c->r[4]; // 8010D400
  c->r[4]=c->r[1]+0x00000010u; // 8010D404
  W32(c->r[1]+0x00000020u,c->r[28]); // 8010D408
  c->r[28]=c->r[3]|c->r[3]; // 8010D40C
  W32(c->r[1]+0x00000008u,c->r[31]); // 8010D410
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010D414
  W32(c->r[1]+0x00000010u,c->r[31]); // 8010D418
  W32(c->r[1]+0x00000014u,c->r[31]); // 8010D41C
  c->lr=0x8010D424u; f_80068BE0(c); // 8010D420
  c->r[4]=0u+0x803F0000u; // 8010D424
  c->r[3]=c->r[28]+0x00000010u; // 8010D428
  c->r[4]=c->r[4]+0x00001AF8u; // 8010D42C
  W32(c->r[28]+0x00000000u,c->r[4]); // 8010D430
  c->lr=0x8010D438u; f_800BCA04(c); // 8010D434
  c->r[0]=0u+0x00000001u; // 8010D438
  {uint32_t ea=c->r[28]+0x00000154u; WF32(ea,c->f[31]);} // 8010D43C
  c->r[3]=c->r[28]|c->r[28]; // 8010D440
  W8(c->r[28]+0x00000164u,c->r[0]); // 8010D444
  W32(c->r[28]+0x00000168u,c->r[29]); // 8010D448
  W32(c->r[28]+0x0000016Cu,c->r[30]); // 8010D44C
  W8(c->r[28]+0x00000170u,c->r[31]); // 8010D450
  {uint32_t ea=c->r[28]+0x00000174u; WF32(ea,c->f[30]);} // 8010D454
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 8010D458
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8010D45C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010D460
  c->r[30]=R32(c->r[1]+0x00000028u); // 8010D464
  c->r[29]=R32(c->r[1]+0x00000024u); // 8010D468
  c->r[28]=R32(c->r[1]+0x00000020u); // 8010D46C
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010D470
  c->lr=c->r[0]; // 8010D474
  c->r[1]=c->r[1]+0x00000040u; // 8010D478
  return; // 8010D47C
}

// fn_8010D480
void f_8010D480(Ctx* __restrict c) {
  trace_call(0x8010D480u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D480
  c->r[0]=c->lr; // 8010D484
  W32(c->r[1]+0x00000054u,c->r[0]); // 8010D488
  {uint32_t ea=c->r[1]+0x00000040u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010D48C
  c->r[31]=c->r[1]|c->r[1]; // 8010D490
  c->r[28]=c->r[3]|c->r[3]; // 8010D494
  c->r[29]=c->r[4]|c->r[4]; // 8010D498
  c->lr=0x8010D4A0u; f_8003F1D4(c); // 8010D49C
  cmps(c,0,(int32_t)c->r[3],0); // 8010D4A0
  if (crb(c,2)) { goto L_8010D510; } // 8010D4A4
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 8010D4A8
  c->lr=0x8010D4B0u; f_802A6EE4(c); // 8010D4AC
  cmps(c,0,(int32_t)c->r[3],0); // 8010D4B0
  c->r[30]=c->r[3]|c->r[3]; // 8010D4B4
  if (crb(c,2)) { goto L_8010D510; } // 8010D4B8
  if (crb(c,2)) { goto L_8010D4D4; } // 8010D4BC
  W32(c->r[31]+0x00000034u,c->r[1]); // 8010D4C0
  c->lr=0x8010D4C8u; f_8006BEE8(c); // 8010D4C4
  c->r[3]=0u+0x803F0000u; // 8010D4C8
  c->r[3]=c->r[3]+0x00002468u; // 8010D4CC
  W32(c->r[30]+0x00000000u,c->r[3]); // 8010D4D0
L_8010D4D4:;
  c->r[3]=c->r[30]|c->r[30]; // 8010D4D4
  c->r[4]=c->r[29]|c->r[29]; // 8010D4D8
  c->lr=0x8010D4E0u; f_8006BDA8(c); // 8010D4DC
  c->r[29]=addc(c,c->r[30],0x00000178u,0); cr0(c,c->r[29]); // 8010D4E0
  if (crb(c,2)) { goto L_8010D4F8; } // 8010D4E4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8010D4E8
  c->r[3]=c->r[29]|c->r[29]; // 8010D4EC
  c->r[4]=c->r[30]|c->r[30]; // 8010D4F0
  c->lr=0x8010D4F8u; f_80064CE8(c); // 8010D4F4
L_8010D4F8:;
  c->r[3]=c->r[28]|c->r[28]; // 8010D4F8
  c->lr=0x8010D500u; f_80064CFC(c); // 8010D4FC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010D500
  c->r[4]=c->r[29]|c->r[29]; // 8010D504
  c->r[3]=c->r[3]+0x00000030u; // 8010D508
  c->lr=0x8010D510u; f_8003FD14(c); // 8010D50C
L_8010D510:;
  c->r[10]=c->r[31]|c->r[31]; // 8010D510
  {uint32_t ea=c->r[10]+0x00000040u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010D514
  c->r[10]=R32(c->r[1]+0x00000000u); // 8010D518
  c->r[0]=R32(c->r[10]+0x00000004u); // 8010D51C
  c->r[1]=c->r[10]|c->r[10]; // 8010D520
  c->lr=c->r[0]; // 8010D524
  return; // 8010D528
}

// fn_8010D52C
void f_8010D52C(Ctx* __restrict c) {
  trace_call(0x8010D52Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D52C
  c->r[0]=c->lr; // 8010D530
  c->r[4]=0u+0x00000000u; // 8010D534
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010D538
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010D53C
  c->r[29]=c->r[3]|c->r[3]; // 8010D540
  c->r[3]=c->r[3]+0x00000008u; // 8010D544
  c->lr=0x8010D54Cu; f_8009D3D0(c); // 8010D548
  c->lr=0x8010D550u; f_8009D188(c); // 8010D54C
  c->r[31]=c->r[3]|c->r[3]; // 8010D550
  c->r[3]=c->r[29]+0x00000008u; // 8010D554
  c->r[4]=0u+0x00000001u; // 8010D558
  c->lr=0x8010D560u; f_8009D3D0(c); // 8010D55C
  c->lr=0x8010D564u; f_8009D188(c); // 8010D560
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8010D564
  c->r[30]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8010D568
  c->lr=0x8010D570u; f_8003DA30(c); // 8010D56C
  c->lr=0x8010D574u; f_8003ED58(c); // 8010D570
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010D574
  goto L_8010D604; // 8010D578
L_8010D57C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D57C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D580
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D584
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D588
  c->ctr=c->r[12]; // 8010D58C
  if (true) { c->lr=0x8010D594u; dispatch(c,c->ctr); } // 8010D590
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010D594
  c->r[4]=0u+0xC0000000u; // 8010D598
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010D59C
  c->r[3]=c->r[1]+0x0000001Cu; // 8010D5A0
  c->lr=0x8010D5A8u; f_8003EDD0(c); // 8010D5A4
  cmps(c,0,(int32_t)c->r[3],0); // 8010D5A8
  if (crb(c,2)) { goto L_8010D5F8; } // 8010D5AC
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D5B0
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D5B4
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D5B8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D5BC
  c->ctr=c->r[12]; // 8010D5C0
  if (true) { c->lr=0x8010D5C8u; dispatch(c,c->ctr); } // 8010D5C4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010D5C8
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010D5CC
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010D5D0
  if (crb(c,2)) { goto L_8010D5F8; } // 8010D5D4
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D5D8
  c->r[0]=R32(c->r[3]+0x000004B8u); // 8010D5DC
  cmpu(c,0,c->r[0],c->r[31]); // 8010D5E0
  if (!crb(c,2)) { goto L_8010D5F8; } // 8010D5E4
  c->r[5]=c->r[30]|c->r[30]; // 8010D5E8
  c->r[3]=c->r[3]+0x0000038Cu; // 8010D5EC
  c->r[4]=0u+0x0000000Bu; // 8010D5F0
  c->lr=0x8010D5F8u; f_800B16D0(c); // 8010D5F4
L_8010D5F8:;
  c->r[3]=c->r[1]+0x00000010u; // 8010D5F8
  c->r[4]=0u+0x00000000u; // 8010D5FC
  c->lr=0x8010D604u; f_8003ED68(c); // 8010D600
L_8010D604:;
  c->lr=0x8010D608u; f_8003DA30(c); // 8010D604
  c->lr=0x8010D60Cu; f_8003ECFC(c); // 8010D608
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010D60C
  c->r[4]=c->r[1]+0x00000008u; // 8010D610
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010D614
  c->r[3]=c->r[1]+0x0000000Cu; // 8010D618
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010D61C
  c->lr=0x8010D624u; f_8003ED7C(c); // 8010D620
  cmps(c,0,(int32_t)c->r[3],0); // 8010D624
  if (!crb(c,2)) { IRQCHK(c); goto L_8010D57C; } // 8010D628
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010D62C
  c->r[5]=0u+0x80110000u; // 8010D630
  c->r[4]=c->r[31]|c->r[31]; // 8010D634
  c->r[6]=c->r[29]|c->r[29]; // 8010D638
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010D63C
  c->r[5]=c->r[5]+0xFFFFD52Cu; // 8010D640
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010D644
  c->ctr=c->r[12]; // 8010D648
  if (true) { c->lr=0x8010D650u; dispatch(c,c->ctr); } // 8010D64C
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010D650
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010D654
  c->lr=c->r[0]; // 8010D658
  c->r[1]=c->r[1]+0x00000040u; // 8010D65C
  return; // 8010D660
}

// fn_8010D664
void f_8010D664(Ctx* __restrict c) {
  trace_call(0x8010D664u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D664
  c->r[0]=c->lr; // 8010D668
  c->r[4]=0u+0x00000000u; // 8010D66C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010D670
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 8010D674
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010D678
  c->r[29]=c->r[3]|c->r[3]; // 8010D67C
  c->r[3]=c->r[3]+0x00000008u; // 8010D680
  c->lr=0x8010D688u; f_8009D3D0(c); // 8010D684
  c->lr=0x8010D68Cu; f_8009D188(c); // 8010D688
  c->r[30]=c->r[3]|c->r[3]; // 8010D68C
  c->r[3]=c->r[29]+0x00000008u; // 8010D690
  c->r[4]=0u+0x00000001u; // 8010D694
  c->lr=0x8010D69Cu; f_8009D3D0(c); // 8010D698
  c->lr=0x8010D6A0u; f_8009D0A0(c); // 8010D69C
  c->f[31]=c->f[1]; // 8010D6A0
  c->lr=0x8010D6A8u; f_8003DA30(c); // 8010D6A4
  c->lr=0x8010D6ACu; f_8003ED58(c); // 8010D6A8
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010D6AC
  goto L_8010D740; // 8010D6B0
L_8010D6B4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D6B4
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D6B8
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D6BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D6C0
  c->ctr=c->r[12]; // 8010D6C4
  if (true) { c->lr=0x8010D6CCu; dispatch(c,c->ctr); } // 8010D6C8
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010D6CC
  c->r[4]=0u+0xC0000000u; // 8010D6D0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010D6D4
  c->r[3]=c->r[1]+0x0000001Cu; // 8010D6D8
  c->lr=0x8010D6E0u; f_8003EDD0(c); // 8010D6DC
  cmps(c,0,(int32_t)c->r[3],0); // 8010D6E0
  if (crb(c,2)) { goto L_8010D734; } // 8010D6E4
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D6E8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D6EC
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D6F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D6F4
  c->ctr=c->r[12]; // 8010D6F8
  if (true) { c->lr=0x8010D700u; dispatch(c,c->ctr); } // 8010D6FC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010D700
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010D704
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010D708
  if (crb(c,2)) { goto L_8010D734; } // 8010D70C
  c->r[31]=R32(c->r[1]+0x00000010u); // 8010D710
  c->r[0]=R32(c->r[31]+0x000004B8u); // 8010D714
  cmpu(c,0,c->r[0],c->r[30]); // 8010D718
  if (!crb(c,2)) { goto L_8010D734; } // 8010D71C
  c->r[3]=c->r[31]+0x0000038Cu; // 8010D720
  c->r[4]=0u+0x00000015u; // 8010D724
  c->r[5]=0u+0x00000000u; // 8010D728
  c->lr=0x8010D730u; f_800B16D0(c); // 8010D72C
  {uint32_t ea=c->r[31]+0x0000048Cu; WF32(ea,c->f[31]);} // 8010D730
L_8010D734:;
  c->r[3]=c->r[1]+0x00000010u; // 8010D734
  c->r[4]=0u+0x00000000u; // 8010D738
  c->lr=0x8010D740u; f_8003ED68(c); // 8010D73C
L_8010D740:;
  c->lr=0x8010D744u; f_8003DA30(c); // 8010D740
  c->lr=0x8010D748u; f_8003ECFC(c); // 8010D744
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010D748
  c->r[4]=c->r[1]+0x00000008u; // 8010D74C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010D750
  c->r[3]=c->r[1]+0x0000000Cu; // 8010D754
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010D758
  c->lr=0x8010D760u; f_8003ED7C(c); // 8010D75C
  cmps(c,0,(int32_t)c->r[3],0); // 8010D760
  if (!crb(c,2)) { IRQCHK(c); goto L_8010D6B4; } // 8010D764
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010D768
  c->r[5]=0u+0x80110000u; // 8010D76C
  c->r[4]=c->r[30]|c->r[30]; // 8010D770
  c->r[6]=c->r[29]|c->r[29]; // 8010D774
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010D778
  c->r[5]=c->r[5]+0xFFFFD664u; // 8010D77C
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010D780
  c->ctr=c->r[12]; // 8010D784
  if (true) { c->lr=0x8010D78Cu; dispatch(c,c->ctr); } // 8010D788
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 8010D78C
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010D790
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010D794
  c->lr=c->r[0]; // 8010D798
  c->r[1]=c->r[1]+0x00000040u; // 8010D79C
  return; // 8010D7A0
}

// fn_8010D7A4
void f_8010D7A4(Ctx* __restrict c) {
  trace_call(0x8010D7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D7A4
  c->r[0]=c->lr; // 8010D7A8
  c->r[4]=0u+0x00000000u; // 8010D7AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010D7B0
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010D7B4
  c->r[29]=c->r[3]|c->r[3]; // 8010D7B8
  c->r[3]=c->r[3]+0x00000008u; // 8010D7BC
  c->lr=0x8010D7C4u; f_8009D3D0(c); // 8010D7C0
  c->lr=0x8010D7C8u; f_8009D188(c); // 8010D7C4
  c->r[31]=c->r[3]|c->r[3]; // 8010D7C8
  c->r[3]=c->r[29]+0x00000008u; // 8010D7CC
  c->r[4]=0u+0x00000001u; // 8010D7D0
  c->lr=0x8010D7D8u; f_8009D3D0(c); // 8010D7D4
  c->lr=0x8010D7DCu; f_8009D188(c); // 8010D7D8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 8010D7DC
  c->r[30]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 8010D7E0
  c->lr=0x8010D7E8u; f_8003DA30(c); // 8010D7E4
  c->lr=0x8010D7ECu; f_8003ED58(c); // 8010D7E8
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010D7EC
  goto L_8010D87C; // 8010D7F0
L_8010D7F4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D7F4
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D7F8
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D7FC
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D800
  c->ctr=c->r[12]; // 8010D804
  if (true) { c->lr=0x8010D80Cu; dispatch(c,c->ctr); } // 8010D808
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010D80C
  c->r[4]=0u+0xC0000000u; // 8010D810
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010D814
  c->r[3]=c->r[1]+0x0000001Cu; // 8010D818
  c->lr=0x8010D820u; f_8003EDD0(c); // 8010D81C
  cmps(c,0,(int32_t)c->r[3],0); // 8010D820
  if (crb(c,2)) { goto L_8010D870; } // 8010D824
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D828
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D82C
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D830
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D834
  c->ctr=c->r[12]; // 8010D838
  if (true) { c->lr=0x8010D840u; dispatch(c,c->ctr); } // 8010D83C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010D840
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010D844
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010D848
  if (crb(c,2)) { goto L_8010D870; } // 8010D84C
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D850
  c->r[0]=R32(c->r[3]+0x000004B8u); // 8010D854
  cmpu(c,0,c->r[0],c->r[31]); // 8010D858
  if (!crb(c,2)) { goto L_8010D870; } // 8010D85C
  c->r[5]=c->r[30]|c->r[30]; // 8010D860
  c->r[3]=c->r[3]+0x0000038Cu; // 8010D864
  c->r[4]=0u+0x00000014u; // 8010D868
  c->lr=0x8010D870u; f_800B16D0(c); // 8010D86C
L_8010D870:;
  c->r[3]=c->r[1]+0x00000010u; // 8010D870
  c->r[4]=0u+0x00000000u; // 8010D874
  c->lr=0x8010D87Cu; f_8003ED68(c); // 8010D878
L_8010D87C:;
  c->lr=0x8010D880u; f_8003DA30(c); // 8010D87C
  c->lr=0x8010D884u; f_8003ECFC(c); // 8010D880
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010D884
  c->r[4]=c->r[1]+0x00000008u; // 8010D888
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010D88C
  c->r[3]=c->r[1]+0x0000000Cu; // 8010D890
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010D894
  c->lr=0x8010D89Cu; f_8003ED7C(c); // 8010D898
  cmps(c,0,(int32_t)c->r[3],0); // 8010D89C
  if (!crb(c,2)) { IRQCHK(c); goto L_8010D7F4; } // 8010D8A0
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010D8A4
  c->r[5]=0u+0x80110000u; // 8010D8A8
  c->r[4]=c->r[31]|c->r[31]; // 8010D8AC
  c->r[6]=c->r[29]|c->r[29]; // 8010D8B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010D8B4
  c->r[5]=c->r[5]+0xFFFFD7A4u; // 8010D8B8
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010D8BC
  c->ctr=c->r[12]; // 8010D8C0
  if (true) { c->lr=0x8010D8C8u; dispatch(c,c->ctr); } // 8010D8C4
  {uint32_t ea=c->r[1]+0x00000034u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010D8C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010D8CC
  c->lr=c->r[0]; // 8010D8D0
  c->r[1]=c->r[1]+0x00000040u; // 8010D8D4
  return; // 8010D8D8
}

// fn_8010D8DC
void f_8010D8DC(Ctx* __restrict c) {
  trace_call(0x8010D8DCu);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D8DC
  c->r[0]=c->lr; // 8010D8E0
  W32(c->r[1]+0x00000174u,c->r[0]); // 8010D8E4
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[31]);} // 8010D8E8
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,31,ea,0,0);} // 8010D8EC
  c->r[11]=c->r[1]+0x00000160u; // 8010D8F0
  c->lr=0x8010D8F8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010D8F4
  c->r[23]=c->r[3]|c->r[3]; // 8010D8F8
  c->r[4]=0u+0x00000000u; // 8010D8FC
  c->r[3]=c->r[3]+0x00000008u; // 8010D900
  c->lr=0x8010D908u; f_8009D3D0(c); // 8010D904
  c->lr=0x8010D90Cu; f_8009D188(c); // 8010D908
  c->r[27]=c->r[3]|c->r[3]; // 8010D90C
  c->r[3]=c->r[23]+0x00000008u; // 8010D910
  c->r[4]=0u+0x00000001u; // 8010D914
  c->lr=0x8010D91Cu; f_8009D3D0(c); // 8010D918
  c->lr=0x8010D920u; f_8009D0F4(c); // 8010D91C
  c->r[31]=0u+0x803E0000u; // 8010D920
  c->r[26]=c->r[3]|c->r[3]; // 8010D924
  c->r[31]=c->r[31]+0xFFFFD1C8u; // 8010D928
  c->r[25]=0u+0x00000000u; // 8010D92C
  c->r[4]=c->r[31]+0x0000026Fu; // 8010D930
  c->lr=0x8010D938u; f_80293554(c); // 8010D934
  cmps(c,0,(int32_t)c->r[3],0); // 8010D938
  if (crb(c,2)) { goto L_8010D970; } // 8010D93C
  c->r[5]=c->r[26]|c->r[26]; // 8010D940
  c->r[3]=c->r[1]+0x0000002Cu; // 8010D944
  c->r[4]=c->r[31]+0x00000274u; // 8010D948
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010D94C
  c->lr=0x8010D954u; f_80291CC4(c); // 8010D950
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010D954
  c->r[4]=c->r[1]+0x0000002Cu; // 8010D958
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010D95C
  c->r[12]=R32(c->r[12]+0x00000070u); // 8010D960
  c->ctr=c->r[12]; // 8010D964
  if (true) { c->lr=0x8010D96Cu; dispatch(c,c->ctr); } // 8010D968
  c->r[25]=c->r[3]|c->r[3]; // 8010D96C
L_8010D970:;
  c->lr=0x8010D974u; f_8003DA30(c); // 8010D970
  c->lr=0x8010D978u; f_8003ED58(c); // 8010D974
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010D978
  c->r[31]=0u+0xC8000000u; // 8010D97C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[31]=c->ps1[31]=RF32(ea);} // 8010D980
  goto L_8010DA88; // 8010D984
L_8010D988:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D988
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D98C
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D990
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D994
  c->ctr=c->r[12]; // 8010D998
  if (true) { c->lr=0x8010D9A0u; dispatch(c,c->ctr); } // 8010D99C
  W32(c->r[1]+0x00000028u,c->r[4]); // 8010D9A0
  c->r[4]=0u+0xC0000000u; // 8010D9A4
  W32(c->r[1]+0x00000024u,c->r[3]); // 8010D9A8
  c->r[3]=c->r[1]+0x00000024u; // 8010D9AC
  c->lr=0x8010D9B4u; f_8003EDD0(c); // 8010D9B0
  cmps(c,0,(int32_t)c->r[3],0); // 8010D9B4
  if (crb(c,2)) { goto L_8010DA7C; } // 8010D9B8
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D9BC
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010D9C0
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010D9C4
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010D9C8
  c->ctr=c->r[12]; // 8010D9CC
  if (true) { c->lr=0x8010D9D4u; dispatch(c,c->ctr); } // 8010D9D0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010D9D4
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010D9D8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010D9DC
  if (crb(c,2)) { goto L_8010DA7C; } // 8010D9E0
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010D9E4
  cmps(c,0,(int32_t)c->r[27],0); // 8010D9E8
  c->r[30]=0u+0x00000001u; // 8010D9EC
  c->r[24]=c->r[3]+0xFFFFFFF8u; // 8010D9F0
  if (crb(c,0)) { goto L_8010DA64; } // 8010D9F4
  c->r[0]=R32(c->r[24]+0x000004C0u); // 8010D9F8
  c->r[29]=0u+0x00000000u; // 8010D9FC
  cmpu(c,0,c->r[0],c->r[27]); // 8010DA00
  if (!crb(c,2)) { goto L_8010DA58; } // 8010DA04
  {uint32_t ea=c->r[24]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010DA08
  c->r[28]=0u+0x00000001u; // 8010DA0C
  fcmp(c,0,c->f[0],c->f[31]); // 8010DA10
  if (crb(c,1)) { goto L_8010DA4C; } // 8010DA14
  c->r[12]=R32(c->r[24]+0x00000010u); // 8010DA18
  c->r[3]=c->r[24]|c->r[24]; // 8010DA1C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010DA20
  c->ctr=c->r[12]; // 8010DA24
  if (true) { c->lr=0x8010DA2Cu; dispatch(c,c->ctr); } // 8010DA28
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010DA2C
  c->r[4]=c->r[31]+0x00000028u; // 8010DA30
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010DA34
  c->r[3]=c->r[1]+0x00000014u; // 8010DA38
  c->lr=0x8010DA40u; f_8003EDD0(c); // 8010DA3C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DA40
  if (!crb(c,2)) { goto L_8010DA4C; } // 8010DA44
  c->r[28]=0u+0x00000000u; // 8010DA48
L_8010DA4C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8010DA4C
  if (crb(c,2)) { goto L_8010DA58; } // 8010DA50
  c->r[29]=0u+0x00000001u; // 8010DA54
L_8010DA58:;
  cmps(c,0,(int32_t)c->r[29],0); // 8010DA58
  if (!crb(c,2)) { goto L_8010DA64; } // 8010DA5C
  c->r[30]=0u+0x00000000u; // 8010DA60
L_8010DA64:;
  cmps(c,0,(int32_t)c->r[30],0); // 8010DA64
  if (crb(c,2)) { goto L_8010DA7C; } // 8010DA68
  c->r[3]=c->r[24]|c->r[24]; // 8010DA6C
  c->r[4]=c->r[25]|c->r[25]; // 8010DA70
  c->lr=0x8010DA78u; f_800CECD0(c); // 8010DA74
  W32(c->r[24]+0x00000394u,c->r[26]); // 8010DA78
L_8010DA7C:;
  c->r[3]=c->r[1]+0x00000010u; // 8010DA7C
  c->r[4]=0u+0x00000000u; // 8010DA80
  c->lr=0x8010DA88u; f_8003ED68(c); // 8010DA84
L_8010DA88:;
  c->lr=0x8010DA8Cu; f_8003DA30(c); // 8010DA88
  c->lr=0x8010DA90u; f_8003ECFC(c); // 8010DA8C
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010DA90
  c->r[4]=c->r[1]+0x00000008u; // 8010DA94
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010DA98
  c->r[3]=c->r[1]+0x0000000Cu; // 8010DA9C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010DAA0
  c->lr=0x8010DAA8u; f_8003ED7C(c); // 8010DAA4
  cmps(c,0,(int32_t)c->r[3],0); // 8010DAA8
  if (!crb(c,2)) { IRQCHK(c); goto L_8010D988; } // 8010DAAC
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010DAB0
  c->r[5]=0u+0x80110000u; // 8010DAB4
  c->r[4]=c->r[27]|c->r[27]; // 8010DAB8
  c->r[6]=c->r[23]|c->r[23]; // 8010DABC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010DAC0
  c->r[5]=c->r[5]+0xFFFFD8DCu; // 8010DAC4
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010DAC8
  c->ctr=c->r[12]; // 8010DACC
  if (true) { c->lr=0x8010DAD4u; dispatch(c,c->ctr); } // 8010DAD0
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,31,ea,0,0);} // 8010DAD4
  c->r[11]=c->r[1]+0x00000160u; // 8010DAD8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[31]=RF64(ea);} // 8010DADC
  c->lr=0x8010DAE4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010DAE0
  c->r[0]=R32(c->r[1]+0x00000174u); // 8010DAE4
  c->lr=c->r[0]; // 8010DAE8
  c->r[1]=c->r[1]+0x00000170u; // 8010DAEC
  return; // 8010DAF0
}

// fn_8010DAF4
void f_8010DAF4(Ctx* __restrict c) {
  trace_call(0x8010DAF4u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DAF4
  c->r[0]=c->lr; // 8010DAF8
  c->r[4]=0u+0x00000000u; // 8010DAFC
  W32(c->r[1]+0x00000144u,c->r[0]); // 8010DB00
  {uint32_t ea=c->r[1]+0x00000134u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010DB04
  c->r[29]=c->r[3]|c->r[3]; // 8010DB08
  c->r[3]=c->r[3]+0x00000008u; // 8010DB0C
  c->lr=0x8010DB14u; f_8009D3D0(c); // 8010DB10
  c->lr=0x8010DB18u; f_8009D188(c); // 8010DB14
  c->r[31]=c->r[3]|c->r[3]; // 8010DB18
  c->r[3]=c->r[29]+0x00000008u; // 8010DB1C
  c->r[4]=0u+0x00000001u; // 8010DB20
  c->lr=0x8010DB28u; f_8009D3D0(c); // 8010DB24
  c->lr=0x8010DB2Cu; f_8009D0F4(c); // 8010DB28
  c->r[4]=0u+0x803E0000u; // 8010DB2C
  c->r[5]=c->r[3]|c->r[3]; // 8010DB30
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 8010DB34
  c->r[3]=c->r[1]+0x00000024u; // 8010DB38
  c->r[4]=c->r[4]+0x00000267u; // 8010DB3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010DB40
  c->lr=0x8010DB48u; f_80291CC4(c); // 8010DB44
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010DB48
  c->r[4]=c->r[1]+0x00000024u; // 8010DB4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010DB50
  c->r[12]=R32(c->r[12]+0x00000070u); // 8010DB54
  c->ctr=c->r[12]; // 8010DB58
  if (true) { c->lr=0x8010DB60u; dispatch(c,c->ctr); } // 8010DB5C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DB60
  c->r[30]=c->r[3]|c->r[3]; // 8010DB64
  if (crb(c,2)) { goto L_8010DC64; } // 8010DB68
  c->lr=0x8010DB70u; f_8003DA30(c); // 8010DB6C
  c->lr=0x8010DB74u; f_8003ED58(c); // 8010DB70
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010DB74
  goto L_8010DC18; // 8010DB78
L_8010DB7C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010DB7C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010DB80
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010DB84
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010DB88
  c->ctr=c->r[12]; // 8010DB8C
  if (true) { c->lr=0x8010DB94u; dispatch(c,c->ctr); } // 8010DB90
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010DB94
  c->r[4]=0u+0xC0000000u; // 8010DB98
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010DB9C
  c->r[3]=c->r[1]+0x0000001Cu; // 8010DBA0
  c->lr=0x8010DBA8u; f_8003EDD0(c); // 8010DBA4
  cmps(c,0,(int32_t)c->r[3],0); // 8010DBA8
  if (crb(c,2)) { goto L_8010DC0C; } // 8010DBAC
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010DBB0
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010DBB4
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010DBB8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010DBBC
  c->ctr=c->r[12]; // 8010DBC0
  if (true) { c->lr=0x8010DBC8u; dispatch(c,c->ctr); } // 8010DBC4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010DBC8
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010DBCC
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010DBD0
  if (crb(c,2)) { goto L_8010DC0C; } // 8010DBD4
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010DBD8
  cmps(c,0,(int32_t)c->r[31],0); // 8010DBDC
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010DBE0
  if (crb(c,0)) { goto L_8010DBF4; } // 8010DBE4
  c->r[0]=R32(c->r[3]+0x000004C0u); // 8010DBE8
  cmpu(c,0,c->r[0],c->r[31]); // 8010DBEC
  if (!crb(c,2)) { goto L_8010DC0C; } // 8010DBF0
L_8010DBF4:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010DBF4
  c->r[4]=c->r[30]|c->r[30]; // 8010DBF8
  c->r[5]=0u+0x00000000u; // 8010DBFC
  c->r[12]=R32(c->r[12]+0x00000320u); // 8010DC00
  c->ctr=c->r[12]; // 8010DC04
  if (true) { c->lr=0x8010DC0Cu; dispatch(c,c->ctr); } // 8010DC08
L_8010DC0C:;
  c->r[3]=c->r[1]+0x00000010u; // 8010DC0C
  c->r[4]=0u+0x00000000u; // 8010DC10
  c->lr=0x8010DC18u; f_8003ED68(c); // 8010DC14
L_8010DC18:;
  c->lr=0x8010DC1Cu; f_8003DA30(c); // 8010DC18
  c->lr=0x8010DC20u; f_8003ECFC(c); // 8010DC1C
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010DC20
  c->r[4]=c->r[1]+0x00000008u; // 8010DC24
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010DC28
  c->r[3]=c->r[1]+0x0000000Cu; // 8010DC2C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010DC30
  c->lr=0x8010DC38u; f_8003ED7C(c); // 8010DC34
  cmps(c,0,(int32_t)c->r[3],0); // 8010DC38
  if (!crb(c,2)) { IRQCHK(c); goto L_8010DB7C; } // 8010DC3C
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010DC40
  c->r[5]=0u+0x80110000u; // 8010DC44
  c->r[4]=c->r[31]|c->r[31]; // 8010DC48
  c->r[6]=c->r[29]|c->r[29]; // 8010DC4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010DC50
  c->r[5]=c->r[5]+0xFFFFDAF4u; // 8010DC54
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010DC58
  c->ctr=c->r[12]; // 8010DC5C
  if (true) { c->lr=0x8010DC64u; dispatch(c,c->ctr); } // 8010DC60
L_8010DC64:;
  {uint32_t ea=c->r[1]+0x00000134u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010DC64
  c->r[0]=R32(c->r[1]+0x00000144u); // 8010DC68
  c->lr=c->r[0]; // 8010DC6C
  c->r[1]=c->r[1]+0x00000140u; // 8010DC70
  return; // 8010DC74
}

// fn_8010DC78
void f_8010DC78(Ctx* __restrict c) {
  trace_call(0x8010DC78u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DC78
  c->r[0]=c->lr; // 8010DC7C
  c->r[4]=0u+0x00000000u; // 8010DC80
  W32(c->r[1]+0x00000144u,c->r[0]); // 8010DC84
  {uint32_t ea=c->r[1]+0x00000128u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010DC88
  c->r[26]=c->r[3]|c->r[3]; // 8010DC8C
  c->r[3]=c->r[3]+0x00000008u; // 8010DC90
  c->lr=0x8010DC98u; f_8009D3D0(c); // 8010DC94
  c->lr=0x8010DC9Cu; f_8009D188(c); // 8010DC98
  c->r[28]=c->r[3]|c->r[3]; // 8010DC9C
  c->r[3]=c->r[26]+0x00000008u; // 8010DCA0
  c->r[4]=0u+0x00000001u; // 8010DCA4
  c->lr=0x8010DCACu; f_8009D3D0(c); // 8010DCA8
  c->lr=0x8010DCB0u; f_8009D0F4(c); // 8010DCAC
  c->r[31]=c->r[3]|c->r[3]; // 8010DCB0
  c->r[3]=c->r[26]+0x00000008u; // 8010DCB4
  c->r[4]=0u+0x00000002u; // 8010DCB8
  c->lr=0x8010DCC0u; f_8009D3D0(c); // 8010DCBC
  c->lr=0x8010DCC4u; f_8009D188(c); // 8010DCC0
  c->r[29]=c->r[3]|c->r[3]; // 8010DCC4
  c->r[3]=c->r[26]+0x00000008u; // 8010DCC8
  c->r[4]=0u+0x00000003u; // 8010DCCC
  c->lr=0x8010DCD4u; f_8009D3D0(c); // 8010DCD0
  c->lr=0x8010DCD8u; f_8009D188(c); // 8010DCD4
  c->r[4]=0u+0x803E0000u; // 8010DCD8
  c->r[30]=c->r[3]|c->r[3]; // 8010DCDC
  c->r[4]=c->r[4]+0xFFFFD1C8u; // 8010DCE0
  c->r[5]=c->r[31]|c->r[31]; // 8010DCE4
  c->r[3]=c->r[1]+0x00000024u; // 8010DCE8
  c->r[4]=c->r[4]+0x00000267u; // 8010DCEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8010DCF0
  c->lr=0x8010DCF8u; f_80291CC4(c); // 8010DCF4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 8010DCF8
  c->r[4]=c->r[1]+0x00000024u; // 8010DCFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010DD00
  c->r[12]=R32(c->r[12]+0x00000070u); // 8010DD04
  c->ctr=c->r[12]; // 8010DD08
  if (true) { c->lr=0x8010DD10u; dispatch(c,c->ctr); } // 8010DD0C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DD10
  c->r[27]=c->r[3]|c->r[3]; // 8010DD14
  if (crb(c,2)) { goto L_8010DE40; } // 8010DD18
  c->lr=0x8010DD20u; f_8003DA30(c); // 8010DD1C
  c->lr=0x8010DD24u; f_8003ED58(c); // 8010DD20
  W32(c->r[1]+0x00000010u,c->r[3]); // 8010DD24
  goto L_8010DDF4; // 8010DD28
L_8010DD2C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010DD2C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010DD30
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010DD34
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010DD38
  c->ctr=c->r[12]; // 8010DD3C
  if (true) { c->lr=0x8010DD44u; dispatch(c,c->ctr); } // 8010DD40
  W32(c->r[1]+0x00000020u,c->r[4]); // 8010DD44
  c->r[4]=0u+0xC0000000u; // 8010DD48
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8010DD4C
  c->r[3]=c->r[1]+0x0000001Cu; // 8010DD50
  c->lr=0x8010DD58u; f_8003EDD0(c); // 8010DD54
  cmps(c,0,(int32_t)c->r[3],0); // 8010DD58
  if (crb(c,2)) { goto L_8010DDE8; } // 8010DD5C
  c->r[3]=R32(c->r[1]+0x00000010u); // 8010DD60
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010DD64
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010DD68
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010DD6C
  c->ctr=c->r[12]; // 8010DD70
  if (true) { c->lr=0x8010DD78u; dispatch(c,c->ctr); } // 8010DD74
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010DD78
  W32(c->r[1]+0x00000018u,c->r[4]); // 8010DD7C
  W32(c->r[1]+0x00000014u,c->r[3]); // 8010DD80
  if (crb(c,2)) { goto L_8010DDE8; } // 8010DD84
  cmps(c,0,(int32_t)c->r[28],0); // 8010DD88
  c->r[31]=R32(c->r[1]+0x00000010u); // 8010DD8C
  if (crb(c,0)) { goto L_8010DDA0; } // 8010DD90
  c->r[0]=R32(c->r[31]+0x000004B8u); // 8010DD94
  cmpu(c,0,c->r[0],c->r[28]); // 8010DD98
  if (!crb(c,2)) { goto L_8010DDE8; } // 8010DD9C
L_8010DDA0:;
  cmps(c,0,(int32_t)c->r[29],1); // 8010DDA0
  if (crb(c,2)) { goto L_8010DDD0; } // 8010DDA4
  if (!crb(c,0)) { goto L_8010DDE8; } // 8010DDA8
  cmps(c,0,(int32_t)c->r[29],0); // 8010DDAC
  if (!crb(c,0)) { goto L_8010DDB8; } // 8010DDB0
  goto L_8010DDE8; // 8010DDB4
L_8010DDB8:;
  cmps(c,0,(int32_t)c->r[27],0); // 8010DDB8
  if (crb(c,2)) { goto L_8010DDE8; } // 8010DDBC
  c->r[4]=c->r[27]|c->r[27]; // 8010DDC0
  c->r[3]=c->r[31]+0x00002088u; // 8010DDC4
  c->lr=0x8010DDCCu; f_800B9BCC(c); // 8010DDC8
  goto L_8010DDE8; // 8010DDCC
L_8010DDD0:;
  cmps(c,0,(int32_t)c->r[27],0); // 8010DDD0
  if (crb(c,2)) { goto L_8010DDE4; } // 8010DDD4
  c->r[4]=c->r[27]|c->r[27]; // 8010DDD8
  c->r[3]=c->r[31]+0x00002100u; // 8010DDDC
  c->lr=0x8010DDE4u; f_800B9BCC(c); // 8010DDE0
L_8010DDE4:;
  W16(c->r[31]+0x00002274u,c->r[30]); // 8010DDE4
L_8010DDE8:;
  c->r[3]=c->r[1]+0x00000010u; // 8010DDE8
  c->r[4]=0u+0x00000000u; // 8010DDEC
  c->lr=0x8010DDF4u; f_8003ED68(c); // 8010DDF0
L_8010DDF4:;
  c->lr=0x8010DDF8u; f_8003DA30(c); // 8010DDF4
  c->lr=0x8010DDFCu; f_8003ECFC(c); // 8010DDF8
  c->r[0]=R32(c->r[1]+0x00000010u); // 8010DDFC
  c->r[4]=c->r[1]+0x00000008u; // 8010DE00
  W32(c->r[1]+0x00000008u,c->r[3]); // 8010DE04
  c->r[3]=c->r[1]+0x0000000Cu; // 8010DE08
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8010DE0C
  c->lr=0x8010DE14u; f_8003ED7C(c); // 8010DE10
  cmps(c,0,(int32_t)c->r[3],0); // 8010DE14
  if (!crb(c,2)) { IRQCHK(c); goto L_8010DD2C; } // 8010DE18
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010DE1C
  c->r[5]=0u+0x80110000u; // 8010DE20
  c->r[4]=c->r[28]|c->r[28]; // 8010DE24
  c->r[6]=c->r[26]|c->r[26]; // 8010DE28
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010DE2C
  c->r[5]=c->r[5]+0xFFFFDC78u; // 8010DE30
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010DE34
  c->ctr=c->r[12]; // 8010DE38
  if (true) { c->lr=0x8010DE40u; dispatch(c,c->ctr); } // 8010DE3C
L_8010DE40:;
  {uint32_t ea=c->r[1]+0x00000128u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010DE40
  c->r[0]=R32(c->r[1]+0x00000144u); // 8010DE44
  c->lr=c->r[0]; // 8010DE48
  c->r[1]=c->r[1]+0x00000140u; // 8010DE4C
  return; // 8010DE50
}

// fn_8010DE54
void f_8010DE54(Ctx* __restrict c) {
  trace_call(0x8010DE54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DE54
  c->r[0]=c->lr; // 8010DE58
  c->r[4]=0u+0x00000000u; // 8010DE5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DE60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010DE64
  c->r[30]=c->r[3]|c->r[3]; // 8010DE68
  c->r[3]=c->r[3]+0x00000008u; // 8010DE6C
  c->lr=0x8010DE74u; f_8009D3D0(c); // 8010DE70
  c->lr=0x8010DE78u; f_8009D188(c); // 8010DE74
  c->r[31]=c->r[3]|c->r[3]; // 8010DE78
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010DE7C
  c->r[4]=c->r[31]|c->r[31]; // 8010DE80
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010DE84
  c->r[12]=R32(c->r[12]+0x00000030u); // 8010DE88
  c->ctr=c->r[12]; // 8010DE8C
  if (true) { c->lr=0x8010DE94u; dispatch(c,c->ctr); } // 8010DE90
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010DE94
  c->r[5]=0u+0x80110000u; // 8010DE98
  c->r[4]=c->r[31]|c->r[31]; // 8010DE9C
  c->r[6]=c->r[30]|c->r[30]; // 8010DEA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010DEA4
  c->r[5]=c->r[5]+0xFFFFDE54u; // 8010DEA8
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010DEAC
  c->ctr=c->r[12]; // 8010DEB0
  if (true) { c->lr=0x8010DEB8u; dispatch(c,c->ctr); } // 8010DEB4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010DEB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DEBC
  c->lr=c->r[0]; // 8010DEC0
  c->r[1]=c->r[1]+0x00000010u; // 8010DEC4
  return; // 8010DEC8
}

// fn_8010DECC
void f_8010DECC(Ctx* __restrict c) {
  trace_call(0x8010DECCu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DECC
  c->r[0]=c->lr; // 8010DED0
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8010DED4
  c->r[11]=c->r[1]+0x000000C0u; // 8010DED8
  c->lr=0x8010DEE0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010DEDC
  c->r[31]=c->r[1]|c->r[1]; // 8010DEE0
  c->r[27]=c->r[3]|c->r[3]; // 8010DEE4
  c->r[4]=0u+0x00000000u; // 8010DEE8
  c->r[3]=c->r[3]+0x00000008u; // 8010DEEC
  c->lr=0x8010DEF4u; f_8009D3D0(c); // 8010DEF0
  c->lr=0x8010DEF8u; f_8009D188(c); // 8010DEF4
  c->r[30]=c->r[3]|c->r[3]; // 8010DEF8
  c->r[3]=c->r[27]+0x00000008u; // 8010DEFC
  c->r[4]=0u+0x00000001u; // 8010DF00
  c->lr=0x8010DF08u; f_8009D3D0(c); // 8010DF04
  c->lr=0x8010DF0Cu; f_8009D188(c); // 8010DF08
  c->r[29]=c->r[3]|c->r[3]; // 8010DF0C
  c->lr=0x8010DF14u; f_8003DA30(c); // 8010DF10
  c->lr=0x8010DF18u; f_8003ED58(c); // 8010DF14
  W32(c->r[31]+0x00000010u,c->r[3]); // 8010DF18
  W32(c->r[31]+0x00000014u,c->r[3]); // 8010DF1C
  goto L_8010E260; // 8010DF20
L_8010DF24:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010DF24
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010DF28
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010DF2C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010DF30
  c->ctr=c->r[12]; // 8010DF34
  if (true) { c->lr=0x8010DF3Cu; dispatch(c,c->ctr); } // 8010DF38
  W32(c->r[31]+0x00000054u,c->r[4]); // 8010DF3C
  c->r[4]=0u+0xC0000000u; // 8010DF40
  W32(c->r[31]+0x00000050u,c->r[3]); // 8010DF44
  c->r[3]=c->r[31]+0x00000050u; // 8010DF48
  c->lr=0x8010DF50u; f_8003EDD0(c); // 8010DF4C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DF50
  if (crb(c,2)) { goto L_8010E254; } // 8010DF54
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010DF58
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8010DF5C
  c->r[12]=R32(c->r[3]+0x00000010u); // 8010DF60
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010DF64
  c->ctr=c->r[12]; // 8010DF68
  if (true) { c->lr=0x8010DF70u; dispatch(c,c->ctr); } // 8010DF6C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010DF70
  W32(c->r[31]+0x0000004Cu,c->r[4]); // 8010DF74
  W32(c->r[31]+0x00000048u,c->r[3]); // 8010DF78
  if (crb(c,2)) { goto L_8010E254; } // 8010DF7C
  c->r[3]=R32(c->r[31]+0x00000014u); // 8010DF80
  cmps(c,0,(int32_t)c->r[30],0); // 8010DF84
  c->r[28]=c->r[3]+0xFFFFFFF8u; // 8010DF88
  if (crb(c,0)) { goto L_8010DFAC; } // 8010DF8C
  c->r[0]=R32(c->r[28]+0x000004C0u); // 8010DF90
  cmpu(c,0,c->r[0],c->r[30]); // 8010DF94
  if (!crb(c,2)) { goto L_8010E254; } // 8010DF98
  {uint32_t ea=c->r[28]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DF9C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 8010DFA0
  fcmp(c,0,c->f[1],c->f[0]); // 8010DFA4
  if (!crb(c,1)) { goto L_8010E254; } // 8010DFA8
L_8010DFAC:;
  c->r[26]=R32(c->r[28]+0x000004A8u); // 8010DFAC
  c->r[25]=0u+0x803E0000u; // 8010DFB0
  c->r[25]=c->r[25]+0xFFFFD1C8u; // 8010DFB4
  c->r[3]=c->r[26]|c->r[26]; // 8010DFB8
  c->r[4]=c->r[25]+0x0000027Au; // 8010DFBC
  c->lr=0x8010DFC4u; f_80293554(c); // 8010DFC0
  cmps(c,0,(int32_t)c->r[3],0); // 8010DFC4
  if (!crb(c,2)) { goto L_8010DFD8; } // 8010DFC8
  c->r[3]=c->r[28]|c->r[28]; // 8010DFCC
  c->lr=0x8010DFD4u; f_801C3A00(c); // 8010DFD0
  goto L_8010E254; // 8010DFD4
L_8010DFD8:;
  c->r[3]=c->r[26]|c->r[26]; // 8010DFD8
  c->r[4]=c->r[25]+0x0000027Fu; // 8010DFDC
  c->lr=0x8010DFE4u; f_80293554(c); // 8010DFE0
  cmps(c,0,(int32_t)c->r[3],0); // 8010DFE4
  if (!crb(c,2)) { goto L_8010DFF8; } // 8010DFE8
  c->r[3]=c->r[28]|c->r[28]; // 8010DFEC
  c->lr=0x8010DFF4u; f_801C3A00(c); // 8010DFF0
  goto L_8010E254; // 8010DFF4
L_8010DFF8:;
  c->r[3]=c->r[26]|c->r[26]; // 8010DFF8
  c->r[4]=c->r[25]+0x00000284u; // 8010DFFC
  c->lr=0x8010E004u; f_80293554(c); // 8010E000
  cmps(c,0,(int32_t)c->r[3],0); // 8010E004
  if (!crb(c,2)) { goto L_8010E0AC; } // 8010E008
  cmps(c,0,(int32_t)c->r[29],0); // 8010E00C
  if (!crb(c,2)) { goto L_8010E020; } // 8010E010
  c->r[3]=c->r[28]|c->r[28]; // 8010E014
  c->lr=0x8010E01Cu; f_801C3A00(c); // 8010E018
  goto L_8010E254; // 8010E01C
L_8010E020:;
  cmps(c,0,(int32_t)c->r[29],1); // 8010E020
  if (!crb(c,2)) { goto L_8010E034; } // 8010E024
  c->r[3]=c->r[28]|c->r[28]; // 8010E028
  c->lr=0x8010E030u; f_801D0BFC(c); // 8010E02C
  goto L_8010E254; // 8010E030
L_8010E034:;
  cmps(c,0,(int32_t)c->r[29],2); // 8010E034
  if (!crb(c,2)) { goto L_8010E04C; } // 8010E038
  c->r[3]=c->r[28]|c->r[28]; // 8010E03C
  c->r[4]=0u+0xFFFFFFFFu; // 8010E040
  c->lr=0x8010E048u; f_801D0C20(c); // 8010E044
  goto L_8010E254; // 8010E048
L_8010E04C:;
  cmps(c,0,(int32_t)c->r[29],100); // 8010E04C
  if (crb(c,0)) { goto L_8010E074; } // 8010E050
  c->r[3]=0u+0x000F0000u; // 8010E054
  c->r[0]=c->r[3]+0x00004240u; // 8010E058
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8010E05C
  if (!crb(c,0)) { goto L_8010E074; } // 8010E060
  c->r[3]=c->r[28]|c->r[28]; // 8010E064
  c->r[4]=c->r[29]+0xFFFFFF9Cu; // 8010E068
  c->lr=0x8010E070u; f_801D0C20(c); // 8010E06C
  goto L_8010E254; // 8010E070
L_8010E074:;
  c->r[3]=0u+0x000F0000u; // 8010E074
  c->r[4]=c->r[3]+0x00004240u; // 8010E078
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 8010E07C
  if (crb(c,0)) { goto L_8010E254; } // 8010E080
  c->r[6]=divw((int32_t)c->r[29],(int32_t)c->r[4]); // 8010E084
  c->r[0]=0u+0x000003E8u; // 8010E088
  c->r[3]=c->r[28]|c->r[28]; // 8010E08C
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 8010E090
  c->r[29]=c->r[29]-c->r[4]; // 8010E094
  c->r[4]=divw((int32_t)c->r[29],(int32_t)c->r[0]); // 8010E098
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)1000); // 8010E09C
  c->r[5]=c->r[29]-c->r[0]; // 8010E0A0
  c->lr=0x8010E0A8u; f_801D0C6C(c); // 8010E0A4
  goto L_8010E254; // 8010E0A8
L_8010E0AC:;
  c->r[3]=c->r[26]|c->r[26]; // 8010E0AC
  c->r[4]=c->r[25]+0x00000289u; // 8010E0B0
  c->lr=0x8010E0B8u; f_80293554(c); // 8010E0B4
  cmps(c,0,(int32_t)c->r[3],0); // 8010E0B8
  if (!crb(c,2)) { goto L_8010E0D4; } // 8010E0BC
  c->r[3]=c->r[28]|c->r[28]; // 8010E0C0
  c->r[4]=c->r[29]|c->r[29]; // 8010E0C4
  c->r[5]=0u+0x00000000u; // 8010E0C8
  c->lr=0x8010E0D0u; f_801F1988(c); // 8010E0CC
  goto L_8010E254; // 8010E0D0
L_8010E0D4:;
  c->r[3]=c->r[26]|c->r[26]; // 8010E0D4
  c->r[4]=c->r[25]+0x0000028Eu; // 8010E0D8
  c->lr=0x8010E0E0u; f_80293554(c); // 8010E0DC
  cmps(c,0,(int32_t)c->r[3],0); // 8010E0E0
  if (!crb(c,2)) { goto L_8010E0FC; } // 8010E0E4
  c->r[3]=c->r[28]|c->r[28]; // 8010E0E8
  c->r[4]=c->r[29]|c->r[29]; // 8010E0EC
  c->r[5]=0u+0x00000000u; // 8010E0F0
  c->lr=0x8010E0F8u; f_801CEF4C(c); // 8010E0F4
  goto L_8010E254; // 8010E0F8
L_8010E0FC:;
  c->r[3]=c->r[26]|c->r[26]; // 8010E0FC
  c->r[4]=c->r[25]+0x00000293u; // 8010E100
  c->lr=0x8010E108u; f_80293554(c); // 8010E104
  cmps(c,0,(int32_t)c->r[3],0); // 8010E108
  if (!crb(c,2)) { goto L_8010E124; } // 8010E10C
  c->r[3]=c->r[28]|c->r[28]; // 8010E110
  c->r[4]=c->r[29]|c->r[29]; // 8010E114
  c->r[5]=0u+0x00000000u; // 8010E118
  c->lr=0x8010E120u; f_801CEF4C(c); // 8010E11C
  goto L_8010E254; // 8010E120
L_8010E124:;
  c->r[3]=c->r[26]|c->r[26]; // 8010E124
  c->r[4]=c->r[25]+0x00000298u; // 8010E128
  c->lr=0x8010E130u; f_80293554(c); // 8010E12C
  cmps(c,0,(int32_t)c->r[3],0); // 8010E130
  if (!crb(c,2)) { goto L_8010E148; } // 8010E134
  c->r[3]=c->r[28]|c->r[28]; // 8010E138
  c->r[4]=c->r[29]|c->r[29]; // 8010E13C
  c->lr=0x8010E144u; f_802004C4(c); // 8010E140
  goto L_8010E254; // 8010E144
L_8010E148:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 8010E148
  c->r[3]=c->r[28]|c->r[28]; // 8010E14C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8010E150
  c->ctr=c->r[12]; // 8010E154
  if (true) { c->lr=0x8010E15Cu; dispatch(c,c->ctr); } // 8010E158
  W32(c->r[31]+0x00000040u,c->r[3]); // 8010E15C
  c->r[5]=0u+0xD0000000u; // 8010E160
  c->r[3]=c->r[31]+0x00000040u; // 8010E164
  W32(c->r[31]+0x00000044u,c->r[4]); // 8010E168
  c->r[4]=c->r[5]+0x00000022u; // 8010E16C
  c->lr=0x8010E174u; f_8003EDD0(c); // 8010E170
  cmps(c,0,(int32_t)c->r[3],0); // 8010E174
  if (crb(c,2)) { goto L_8010E254; } // 8010E178
  c->r[25]=0u+0x00000000u; // 8010E17C
  c->r[3]=c->r[31]+0x00000088u; // 8010E180
  W32(c->r[31]+0x00000030u,c->r[25]); // 8010E184
  c->r[4]=c->r[31]+0x00000028u; // 8010E188
  c->r[5]=0u+0x00000000u; // 8010E18C
  W32(c->r[31]+0x00000034u,c->r[25]); // 8010E190
  W32(c->r[31]+0x00000028u,c->r[25]); // 8010E194
  W32(c->r[31]+0x0000002Cu,c->r[25]); // 8010E198
  c->lr=0x8010E1A0u; f_80068BE0(c); // 8010E19C
  c->r[26]=0u+0x803F0000u; // 8010E1A0
  W32(c->r[31]+0x00000098u,c->r[29]); // 8010E1A4
  c->r[26]=c->r[26]+0x00007A58u; // 8010E1A8
  c->r[3]=c->r[31]+0x00000038u; // 8010E1AC
  W32(c->r[31]+0x00000088u,c->r[26]); // 8010E1B0
  c->r[4]=R32(c->r[28]+0x00000000u); // 8010E1B4
  c->r[0]=R32(c->r[28]+0x00000004u); // 8010E1B8
  W32(c->r[31]+0x00000038u,c->r[4]); // 8010E1BC
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8010E1C0
  c->lr=0x8010E1C8u; f_8003F1D4(c); // 8010E1C4
  cmps(c,0,(int32_t)c->r[3],0); // 8010E1C8
  if (crb(c,2)) { goto L_8010E254; } // 8010E1CC
  c->r[3]=R32(c->r[13]+0xFFFF93A8u); // 8010E1D0
  c->lr=0x8010E1D8u; f_802A6EE4(c); // 8010E1D4
  cmps(c,0,(int32_t)c->r[3],0); // 8010E1D8
  c->r[28]=c->r[3]|c->r[3]; // 8010E1DC
  if (crb(c,2)) { goto L_8010E254; } // 8010E1E0
  if (crb(c,2)) { goto L_8010E210; } // 8010E1E4
  W32(c->r[31]+0x0000006Cu,c->r[1]); // 8010E1E8
  c->r[4]=c->r[31]+0x00000020u; // 8010E1EC
  c->r[5]=0u+0x00000000u; // 8010E1F0
  W32(c->r[31]+0x00000018u,c->r[25]); // 8010E1F4
  W32(c->r[31]+0x0000001Cu,c->r[25]); // 8010E1F8
  W32(c->r[31]+0x00000020u,c->r[25]); // 8010E1FC
  W32(c->r[31]+0x00000024u,c->r[25]); // 8010E200
  c->lr=0x8010E208u; f_80068BE0(c); // 8010E204
  W32(c->r[28]+0x00000000u,c->r[26]); // 8010E208
  W32(c->r[28]+0x00000010u,c->r[25]); // 8010E20C
L_8010E210:;
  c->r[3]=c->r[28]|c->r[28]; // 8010E210
  c->r[4]=c->r[31]+0x00000088u; // 8010E214
  c->lr=0x8010E21Cu; f_80064DD8(c); // 8010E218
  c->r[0]=R32(c->r[31]+0x00000098u); // 8010E21C
  c->r[25]=addc(c,c->r[28],0x00000014u,0); cr0(c,c->r[25]); // 8010E220
  W32(c->r[28]+0x00000010u,c->r[0]); // 8010E224
  if (crb(c,2)) { goto L_8010E23C; } // 8010E228
  W32(c->r[31]+0x00000084u,c->r[1]); // 8010E22C
  c->r[3]=c->r[25]|c->r[25]; // 8010E230
  c->r[4]=c->r[28]|c->r[28]; // 8010E234
  c->lr=0x8010E23Cu; f_80064CE8(c); // 8010E238
L_8010E23C:;
  c->r[3]=c->r[31]+0x00000038u; // 8010E23C
  c->lr=0x8010E244u; f_80064CFC(c); // 8010E240
  c->r[3]=R32(c->r[3]+0x00000004u); // 8010E244
  c->r[4]=c->r[25]|c->r[25]; // 8010E248
  c->r[3]=c->r[3]+0x00000030u; // 8010E24C
  c->lr=0x8010E254u; f_8003FD14(c); // 8010E250
L_8010E254:;
  c->r[3]=c->r[31]+0x00000014u; // 8010E254
  c->r[4]=0u+0x00000000u; // 8010E258
  c->lr=0x8010E260u; f_8003ED68(c); // 8010E25C
L_8010E260:;
  c->lr=0x8010E264u; f_8003DA30(c); // 8010E260
  c->lr=0x8010E268u; f_8003ECFC(c); // 8010E264
  c->r[0]=R32(c->r[31]+0x00000014u); // 8010E268
  c->r[4]=c->r[31]+0x00000008u; // 8010E26C
  W32(c->r[31]+0x00000008u,c->r[3]); // 8010E270
  c->r[3]=c->r[31]+0x0000000Cu; // 8010E274
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8010E278
  c->lr=0x8010E280u; f_8003ED7C(c); // 8010E27C
  cmps(c,0,(int32_t)c->r[3],0); // 8010E280
  if (!crb(c,2)) { IRQCHK(c); goto L_8010DF24; } // 8010E284
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 8010E288
  c->r[5]=0u+0x80110000u; // 8010E28C
  c->r[4]=c->r[30]|c->r[30]; // 8010E290
  c->r[6]=c->r[27]|c->r[27]; // 8010E294
  c->r[12]=R32(c->r[3]+0x00000000u); // 8010E298
  c->r[5]=c->r[5]+0xFFFFDECCu; // 8010E29C
  c->r[12]=R32(c->r[12]+0x00000054u); // 8010E2A0
  c->ctr=c->r[12]; // 8010E2A4
  if (true) { c->lr=0x8010E2ACu; dispatch(c,c->ctr); } // 8010E2A8
  c->r[10]=c->r[31]|c->r[31]; // 8010E2AC
  c->r[11]=c->r[10]+0x000000C0u; // 8010E2B0
  c->lr=0x8010E2B8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010E2B4
  c->r[10]=R32(c->r[1]+0x00000000u); // 8010E2B8
  c->r[0]=R32(c->r[10]+0x00000004u); // 8010E2BC
  c->r[1]=c->r[10]|c->r[10]; // 8010E2C0
  c->lr=c->r[0]; // 8010E2C4
  return; // 8010E2C8
}

// fn_8010E2CC
void f_8010E2CC(Ctx* __restrict c) {
  trace_call(0x8010E2CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E2CC
  c->r[0]=c->lr; // 8010E2D0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010E2D4
  c->r[11]=c->r[1]+0x00000040u; // 8010E2D8
  c->lr=0x8010E2E0u; { {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 8010E2DC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8010E2E0
  c->r[29]=c->r[3]|c->r[3]; // 8010E2E4
  c->r[4]=0u+0x00000000u; // 8010E2E8
  c->r[3]=c->r[3]+0x00000008u; // 8010E2EC
  c->lr=0x8010E2F4u; f_8009D3D0(c); // 8010E2F0
  c->lr=0x8010E2F8u; f_8009D188(c); // 8010E2F4
  c->r[30]=c->r[3]|c->r[3]; // 8010E2F8
  c->r[3]=c->r[29]+0x00000008u; // 8010E2FC
  c->r[4]=0u+0x00000001u; // 8010E300
  c->lr=0x8010E308u; f_8009D3D0(c); // 8010E304
  c->lr=0x8010E30Cu; f_8009D188(c); // 8010E308
  c->r[31]=c->r[3]|c->r[3]; // 8010E30C
  c->r[3]=c->r[29]+0x00000008u; // 8010E310
  c->r[4]=0u+0x00000002u; // 8010E314
  c->lr=0x8010E31Cu; f_8009D3D0(c); // 8010E318
  c->lr=0x8010E320u; f_8009D0A0(c); // 8010E31C
  c->f[27]=c->f[1]; // 8010E320
  c->r[3]=c->r[29]+0x00000008u; // 8010E324
  c->r[4]=0u+0x00000003u; // 8010E328
  c->lr=0x8010E330u; f_8009D3D0(c); // 8010E32C
  c->lr=0x8010E334u; f_8009D0A0(c); // 8010E330
  c->f[28]=c->f[1]; // 8010E334
  c->r[3]=c->r[29]+0x00000008u; // 8010E338
  c->r[4]=0u+0x00000004u; // 8010E33C
  c->lr=0x8010E344u; f_8009D3D0(c); // 8010E340
  c->lr=0x8010E348u; f_8009D0A0(c); // 8010E344
  c->f[29]=c->f[1]; // 8010E348
  c->r[3]=c->r[29]+0x00000008u; // 8010E34C
  c->r[4]=0u+0x00000005u; // 8010E350
  c->lr=0x8010E358u; f_8009D3D0(c); // 8010E354
  c->lr=0x8010E35Cu; f_8009D0A0(c); // 8010E358
  c->f[30]=c->f[1]; // 8010E35C
  c->r[3]=c->r[29]+0x00000008u; // 8010E360
  c->r[4]=0u+0x00000006u; // 8010E364
  c->lr=0x8010E36Cu; f_8009D3D0(c); // 8010E368
  c->lr=0x8010E370u; f_8009D0A0(c); // 8010E36C
  c->f[31]=c->f[1]; // 8010E370
  c->r[3]=c->r[29]+0x00000008u; // 8010E374
  c->r[4]=0u+0x00000007u; // 8010E378
  c->lr=0x8010E380u; f_8009D3D0(c); // 8010E37C
  c->lr=0x8010E384u; f_8009D0F4(c); // 8010E380
  cmps(c,0,(int32_t)c->r[30],0); // 8010E384
  if (crb(c,0)) { goto L_8010E3D4; } // 8010E388
  cmps(c,0,(int32_t)c->r[30],8); // 8010E38C
  if (crb(c,0)) { goto L_8010E398; } // 8010E390
  goto L_8010E3D4; // 8010E394
L_8010E398:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)60); // 8010E398
  c->r[5]=0u+0x80490000u; // 8010E39C
  c->r[4]=c->r[3]|c->r[3]; // 8010E3A0
  c->r[5]=c->r[5]+0x00004498u; // 8010E3A4
  c->r[30]=c->r[5]+c->r[0]; // 8010E3A8
  W32(c->r[30]+0x00000004u,c->r[31]); // 8010E3AC
  c->r[3]=c->r[30]+0x0000001Cu; // 8010E3B0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[27]);} // 8010E3B4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[28]);} // 8010E3B8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[29]);} // 8010E3BC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[30]);} // 8010E3C0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[31]);} // 8010E3C4
  c->lr=0x8010E3CCu; f_802933D8(c); // 8010E3C8
  c->r[0]=0u+0x00000001u; // 8010E3CC
  W8(c->r[30]+0x00000000u,c->r[0]); // 8010E3D0
L_8010E3D4:;
  c->r[11]=c->r[1]+0x00000040u; // 8010E3D4
  c->lr=0x8010E3DCu; { {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 8010E3D8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8010E3DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8010E3E0
  c->lr=c->r[0]; // 8010E3E4
  c->r[1]=c->r[1]+0x00000040u; // 8010E3E8
  return; // 8010E3EC
}

// fn_8010E3F0
void f_8010E3F0(Ctx* __restrict c) {
  trace_call(0x8010E3F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E3F0
  c->r[0]=c->lr; // 8010E3F4
  c->r[4]=0u+0x00000000u; // 8010E3F8
  c->r[3]=c->r[3]+0x00000008u; // 8010E3FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E400
  c->lr=0x8010E408u; f_8009D3D0(c); // 8010E404
  c->lr=0x8010E40Cu; f_8009D188(c); // 8010E408
  cmps(c,0,(int32_t)c->r[3],0); // 8010E40C
  if (crb(c,0)) { goto L_8010E434; } // 8010E410
  cmps(c,0,(int32_t)c->r[3],8); // 8010E414
  if (crb(c,0)) { goto L_8010E420; } // 8010E418
  goto L_8010E434; // 8010E41C
L_8010E420:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)60); // 8010E420
  c->r[3]=0u+0x80490000u; // 8010E424
  c->r[4]=0u+0x00000000u; // 8010E428
  c->r[3]=c->r[3]+0x00004498u; // 8010E42C
  W8(c->r[3]+c->r[0],c->r[4]); // 8010E430
L_8010E434:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E434
  c->lr=c->r[0]; // 8010E438
  c->r[1]=c->r[1]+0x00000010u; // 8010E43C
  return; // 8010E440
}

