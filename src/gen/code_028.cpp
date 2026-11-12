#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8020F6A4
void f_8020F6A4(Ctx* __restrict c) {
  trace_call(0x8020F6A4u);
  c->r[0]=R8(c->r[3]+0x00001F5Fu); // 8020F6A4
  cmpu(c,0,c->r[0],0x00000001u); // 8020F6A8
  if (crb(c,2)) return; // 8020F6AC
  c->r[0]=0u+0x00000001u; // 8020F6B0
  W8(c->r[3]+0x00001F5Fu,c->r[0]); // 8020F6B4
  f_801B07AC(c); return; // 8020F6B8
  return; // 8020F6BC
}

// fn_8020F6C0
void f_8020F6C0(Ctx* __restrict c) {
  trace_call(0x8020F6C0u);
  c->r[0]=R32(c->r[3]+0x00002910u); // 8020F6C0
  cmps(c,0,(int32_t)c->r[0],2); // 8020F6C4
  if (crb(c,2)) { goto L_8020F6D4; } // 8020F6C8
  c->r[0]=0u+0x00000001u; // 8020F6CC
  W32(c->r[3]+0x00002910u,c->r[0]); // 8020F6D0
L_8020F6D4:;
  {uint32_t ea=c->r[3]+0x0000290Cu; WF32(ea,c->f[1]);} // 8020F6D4
  return; // 8020F6D8
}

// fn_8020F6DC
void f_8020F6DC(Ctx* __restrict c) {
  trace_call(0x8020F6DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F6DC
  c->r[0]=c->lr; // 8020F6E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020F6E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020F6E8
  c->r[31]=c->r[3]|c->r[3]; // 8020F6EC
  c->r[5]=R32(c->r[3]+0x00002910u); // 8020F6F0
  cmps(c,0,(int32_t)c->r[5],2); // 8020F6F4
  if (crb(c,2)) { goto L_8020F780; } // 8020F6F8
  if (!crb(c,0)) { goto L_8020F710; } // 8020F6FC
  cmps(c,0,(int32_t)c->r[5],0); // 8020F700
  if (crb(c,2)) { goto L_8020F720; } // 8020F704
  if (!crb(c,0)) { goto L_8020F730; } // 8020F708
  goto L_8020F720; // 8020F70C
L_8020F710:;
  cmps(c,0,(int32_t)c->r[5],4); // 8020F710
  if (crb(c,2)) { goto L_8020F7F0; } // 8020F714
  if (!crb(c,0)) { goto L_8020F720; } // 8020F718
  goto L_8020F7D0; // 8020F71C
L_8020F720:;
  {uint32_t ea=c->r[2]+0xFFFFC9BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F720
  {uint32_t ea=c->r[3]+0x00002908u; WF32(ea,c->f[0]);} // 8020F724
  {uint32_t ea=c->r[3]+0x0000290Cu; WF32(ea,c->f[0]);} // 8020F728
  goto L_8020F80C; // 8020F72C
L_8020F730:;
  c->lr=0x8020F734u; f_80066EFC(c); // 8020F730
  {uint32_t ea=c->r[31]+0x00002908u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F734
  c->r[4]=0u+0x00000001u; // 8020F738
  {uint32_t ea=c->r[2]+0xFFFFCA4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020F73C
  c->r[5]=0u+0x000003E8u; // 8020F740
  c->r[3]=c->r[3]+0x000001D8u; // 8020F744
  c->lr=0x8020F74Cu; f_8011EE80(c); // 8020F748
  c->lr=0x8020F750u; f_80066EFC(c); // 8020F74C
  c->r[4]=0u+0x00000000u; // 8020F750
  c->lr=0x8020F758u; f_80042E70(c); // 8020F754
  cmps(c,0,(int32_t)c->r[3],0); // 8020F758
  if (!crb(c,2)) { goto L_8020F770; } // 8020F75C
  c->lr=0x8020F764u; f_80066EFC(c); // 8020F760
  c->r[4]=0u+0x00000000u; // 8020F764
  c->r[5]=0u+0x00000001u; // 8020F768
  c->lr=0x8020F770u; f_80042D5C(c); // 8020F76C
L_8020F770:;
  c->r[3]=R32(c->r[31]+0x00002910u); // 8020F770
  c->r[0]=c->r[3]+0x00000001u; // 8020F774
  W32(c->r[31]+0x00002910u,c->r[0]); // 8020F778
  goto L_8020F80C; // 8020F77C
L_8020F780:;
  c->r[4]=0u+0x804D0000u; // 8020F780
  {uint32_t ea=c->r[3]+0x0000290Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020F784
  c->r[4]=c->r[4]+0x00003318u; // 8020F788
  {uint32_t ea=c->r[3]+0x00002908u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F78C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020F790
  {uint32_t ea=c->r[2]+0xFFFFC9D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F794
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 8020F798
  fcmp(c,0,c->f[1],c->f[0]); // 8020F79C
  {uint32_t ea=c->r[3]+0x00002908u; WF32(ea,c->f[1]);} // 8020F7A0
  if (!crb(c,1)) { goto L_8020F7B8; } // 8020F7A4
  c->r[0]=c->r[5]+0x00000001u; // 8020F7A8
  {uint32_t ea=c->r[3]+0x00002908u; WF32(ea,c->f[0]);} // 8020F7AC
  W32(c->r[3]+0x00002910u,c->r[0]); // 8020F7B0
  goto L_8020F7D0; // 8020F7B4
L_8020F7B8:;
  {uint32_t ea=c->r[2]+0xFFFFC9BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F7B8
  fcmp(c,0,c->f[1],c->f[0]); // 8020F7BC
  if (!crb(c,0)) { goto L_8020F7D0; } // 8020F7C0
  c->r[0]=c->r[5]+0x00000002u; // 8020F7C4
  {uint32_t ea=c->r[3]+0x00002908u; WF32(ea,c->f[0]);} // 8020F7C8
  W32(c->r[3]+0x00002910u,c->r[0]); // 8020F7CC
L_8020F7D0:;
  c->lr=0x8020F7D4u; f_80066EFC(c); // 8020F7D0
  {uint32_t ea=c->r[31]+0x00002908u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F7D4
  c->r[4]=0u+0x00000001u; // 8020F7D8
  {uint32_t ea=c->r[2]+0xFFFFCA4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020F7DC
  c->r[5]=0u+0x000003E8u; // 8020F7E0
  c->r[3]=c->r[3]+0x000001D8u; // 8020F7E4
  c->lr=0x8020F7ECu; f_8011EE80(c); // 8020F7E8
  goto L_8020F80C; // 8020F7EC
L_8020F7F0:;
  c->lr=0x8020F7F4u; f_80066EFC(c); // 8020F7F0
  c->r[4]=0u+0x00000000u; // 8020F7F4
  c->lr=0x8020F7FCu; f_80042E7C(c); // 8020F7F8
  {uint32_t ea=c->r[2]+0xFFFFC9BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F7FC
  c->r[0]=0u+0x00000000u; // 8020F800
  W32(c->r[31]+0x00002910u,c->r[0]); // 8020F804
  {uint32_t ea=c->r[31]+0x0000290Cu; WF32(ea,c->f[0]);} // 8020F808
L_8020F80C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020F80C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020F810
  c->lr=c->r[0]; // 8020F814
  c->r[1]=c->r[1]+0x00000010u; // 8020F818
  return; // 8020F81C
}

// fn_8020F820
void f_8020F820(Ctx* __restrict c) {
  trace_call(0x8020F820u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020F820
  c->r[0]=c->lr; // 8020F824
  W32(c->r[1]+0x00000054u,c->r[0]); // 8020F828
  c->r[11]=c->r[1]+0x00000050u; // 8020F82C
  c->lr=0x8020F834u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020F830
  cmpu(c,0,c->r[5],0x00000001u); // 8020F834
  c->r[30]=c->r[3]|c->r[3]; // 8020F838
  c->r[31]=c->r[4]|c->r[4]; // 8020F83C
  if (!crb(c,2)) { goto L_8020F88C; } // 8020F840
  c->r[7]=R32(c->r[3]+0x00000020u); // 8020F844
  c->r[26]=0u+0x80460000u; // 8020F848
  c->r[0]=R32(c->r[3]+0x00000024u); // 8020F84C
  c->r[5]=c->r[1]+0x00000014u; // 8020F850
  {uint32_t ea=c->r[2]+0xFFFFC9D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F854
  c->r[6]=0u+0xFFFFFFFFu; // 8020F858
  W32(c->r[1]+0x00000014u,c->r[7]); // 8020F85C
  c->f[2]=c->f[1]; // 8020F860
  W32(c->r[1]+0x00000018u,c->r[0]); // 8020F864
  c->r[0]=R32(c->r[3]+0x00000028u); // 8020F868
  c->r[3]=c->r[26]+0xFFFFD4F0u; // 8020F86C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8020F870
  c->lr=0x8020F878u; f_8004AD54(c); // 8020F874
  {uint32_t ea=c->r[2]+0xFFFFC9BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F878
  c->r[4]=c->r[3]|c->r[3]; // 8020F87C
  c->r[3]=c->r[26]+0xFFFFD4F0u; // 8020F880
  c->lr=0x8020F888u; f_8004B4F8(c); // 8020F884
  goto L_8020F9B8; // 8020F888
L_8020F88C:;
  c->r[26]=0u+0x80460000u; // 8020F88C
  c->r[3]=c->r[26]+0xFFFFD4F0u; // 8020F890
  c->r[3]=c->r[3]+0x00001574u; // 8020F894
  c->lr=0x8020F89Cu; f_803A6794(c); // 8020F898
  c->r[24]=0u+0x00000000u; // 8020F89C
  c->r[23]=c->r[3]|c->r[3]; // 8020F8A0
  c->r[27]=c->r[24]|c->r[24]; // 8020F8A4
  c->r[25]=0u+0xFFFFFFFFu; // 8020F8A8
  c->r[29]=0u+0x00000000u; // 8020F8AC
  c->r[28]=0u+0xFFFFFFFFu; // 8020F8B0
L_8020F8B4:;
  c->r[4]=R32(c->r[30]+c->r[29]); // 8020F8B4
  c->r[22]=c->r[30]+c->r[29]; // 8020F8B8
  cmps(c,0,(int32_t)c->r[4],-1); // 8020F8BC
  if (crb(c,2)) { goto L_8020F8FC; } // 8020F8C0
  c->r[3]=c->r[26]+0xFFFFD4F0u; // 8020F8C4
  c->lr=0x8020F8CCu; f_8004B650(c); // 8020F8C8
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[3]); // 8020F8CC
  if (!crb(c,2)) { goto L_8020F8DC; } // 8020F8D0
  c->r[25]=c->r[24]+0x00000100u; // 8020F8D4
  goto L_8020F918; // 8020F8D8
L_8020F8DC:;
  cmps(c,0,(int32_t)c->r[3],-1); // 8020F8DC
  if (!crb(c,2)) { goto L_8020F908; } // 8020F8E0
  cmps(c,0,(int32_t)c->r[25],-1); // 8020F8E4
  if (!crb(c,2)) { goto L_8020F908; } // 8020F8E8
  W8(c->r[22]+0x00000004u,c->r[27]); // 8020F8EC
  c->r[25]=c->r[24]|c->r[24]; // 8020F8F0
  W32(c->r[22]+0x00000000u,c->r[28]); // 8020F8F4
  goto L_8020F908; // 8020F8F8
L_8020F8FC:;
  cmps(c,0,(int32_t)c->r[25],-1); // 8020F8FC
  if (!crb(c,2)) { goto L_8020F908; } // 8020F900
  c->r[25]=c->r[24]|c->r[24]; // 8020F904
L_8020F908:;
  c->r[24]=c->r[24]+0x00000001u; // 8020F908
  c->r[29]=c->r[29]+0x00000008u; // 8020F90C
  cmps(c,0,(int32_t)c->r[24],4); // 8020F910
  if (crb(c,0)) { IRQCHK(c); goto L_8020F8B4; } // 8020F914
L_8020F918:;
  cmps(c,0,(int32_t)c->r[25],-1); // 8020F918
  if (crb(c,2)) { goto L_8020F9B8; } // 8020F91C
  c->r[0]=rotl(c->r[25],0)&0x00000100u; cr0(c,c->r[0]); // 8020F920
  if (crb(c,2)) { goto L_8020F944; } // 8020F924
  c->r[0]=rotl(c->r[25],0)&0xFFFFFEFFu; // 8020F928
  c->r[3]=0u+0x80460000u; // 8020F92C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8020F930
  c->r[5]=0u+0x00000000u; // 8020F934
  c->r[4]=R32(c->r[30]+c->r[0]); // 8020F938
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 8020F93C
  c->lr=0x8020F944u; f_8004AF30(c); // 8020F940
L_8020F944:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 8020F944
  c->r[0]=rotl(c->r[25],0)&0xFFFFFEFFu; // 8020F948
  c->r[5]=R32(c->r[30]+0x00000024u); // 8020F94C
  c->r[22]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8020F950
  {uint32_t ea=c->r[2]+0xFFFFC9D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F954
  c->r[29]=0u+0x80460000u; // 8020F958
  W32(c->r[1]+0x00000008u,c->r[3]); // 8020F95C
  c->r[4]=c->r[31]|c->r[31]; // 8020F960
  c->f[2]=c->f[1]; // 8020F964
  c->r[3]=c->r[29]+0xFFFFD4F0u; // 8020F968
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8020F96C
  c->r[5]=c->r[1]+0x00000008u; // 8020F970
  c->r[0]=R32(c->r[30]+0x00000028u); // 8020F974
  W32(c->r[1]+0x00000010u,c->r[0]); // 8020F978
  c->r[6]=R32(c->r[30]+c->r[22]); // 8020F97C
  c->lr=0x8020F984u; f_8004AD54(c); // 8020F980
  cmps(c,0,(int32_t)c->r[3],0); // 8020F984
  W32(c->r[30]+c->r[22],c->r[3]); // 8020F988
  if (!crb(c,2)) { goto L_8020F99C; } // 8020F98C
  c->r[0]=0u+0xFFFFFFFFu; // 8020F990
  W32(c->r[30]+c->r[22],c->r[0]); // 8020F994
  goto L_8020F9B8; // 8020F998
L_8020F99C:;
  c->r[3]=c->r[30]+c->r[22]; // 8020F99C
  c->r[0]=0u+0x00000001u; // 8020F9A0
  W8(c->r[3]+0x00000004u,c->r[0]); // 8020F9A4
  c->r[3]=c->r[29]+0xFFFFD4F0u; // 8020F9A8
  {uint32_t ea=c->r[2]+0xFFFFC9BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F9AC
  c->r[4]=R32(c->r[30]+c->r[22]); // 8020F9B0
  c->lr=0x8020F9B8u; f_8004B4F8(c); // 8020F9B4
L_8020F9B8:;
  c->r[11]=c->r[1]+0x00000050u; // 8020F9B8
  c->lr=0x8020F9C0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020F9BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 8020F9C0
  c->lr=c->r[0]; // 8020F9C4
  c->r[1]=c->r[1]+0x00000050u; // 8020F9C8
  return; // 8020F9CC
}

// fn_8020F9D0
void f_8020F9D0(Ctx* __restrict c) {
  trace_call(0x8020F9D0u);
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020F9D0
  c->r[0]=0u+0x00000002u; // 8020F9D4
  {uint32_t ea=c->r[3]+0x000003A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020F9D8
  {uint32_t ea=c->r[2]+0xFFFFCA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F9DC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8020F9E0
  fcmp(c,0,c->f[1],c->f[0]); // 8020F9E4
  if (!crb(c,0)) { goto L_8020F9F4; } // 8020F9E8
  c->r[0]=0u+0x00000000u; // 8020F9EC
  goto L_8020FA04; // 8020F9F0
L_8020F9F4:;
  {uint32_t ea=c->r[2]+0xFFFFCA4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020F9F4
  fcmp(c,0,c->f[1],c->f[0]); // 8020F9F8
  if (!crb(c,0)) { goto L_8020FA04; } // 8020F9FC
  c->r[0]=0u+0x00000001u; // 8020FA00
L_8020FA04:;
  c->r[3]=c->r[0]|c->r[0]; // 8020FA04
  return; // 8020FA08
}

// fn_8020FA0C
void f_8020FA0C(Ctx* __restrict c) {
  trace_call(0x8020FA0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FA0C
  c->r[0]=c->lr; // 8020FA10
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8020FA14
  c->r[11]=c->r[1]+0x000000B0u; // 8020FA18
  c->lr=0x8020FA20u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020FA1C
  {uint32_t ea=c->r[2]+0xFFFFC9BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FA20
  c->r[31]=0u+0x805B0000u; // 8020FA24
  c->r[31]=c->r[31]+0xFFFFA880u; // 8020FA28
  {uint32_t ea=c->r[2]+0xFFFFC9D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FA2C
  c->f[3]=c->f[1]; // 8020FA30
  c->r[3]=c->r[31]+0x0000000Cu; // 8020FA34
  c->lr=0x8020FA3Cu; f_8003F588(c); // 8020FA38
  c->r[6]=0u+0x803E0000u; // 8020FA3C
  {uint32_t ea=c->r[6]+0x00005A10u; c->r[5]=R32(ea); c->r[6]=ea;} // 8020FA40
  c->r[7]=0u+0x80410000u; // 8020FA44
  {uint32_t ea=c->r[2]+0xFFFFCAA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FA48
  c->r[4]=R32(c->r[6]+0x00000004u); // 8020FA4C
  c->r[3]=c->r[1]+0x00000068u; // 8020FA50
  {uint32_t ea=c->r[7]+0xFFFFB0B8u; W32(ea,c->r[5]); c->r[7]=ea;} // 8020FA54
  c->r[0]=R32(c->r[6]+0x00000008u); // 8020FA58
  {uint32_t ea=c->r[2]+0xFFFFCAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FA5C
  W32(c->r[7]+0x00000004u,c->r[4]); // 8020FA60
  {uint32_t ea=c->r[2]+0xFFFFCAB0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FA64
  W32(c->r[7]+0x00000008u,c->r[0]); // 8020FA68
  c->lr=0x8020FA70u; f_800521A0(c); // 8020FA6C
  c->r[18]=0u+0x80410000u; // 8020FA70
  c->r[4]=c->r[3]|c->r[3]; // 8020FA74
  c->r[3]=c->r[18]+0xFFFFB10Cu; // 8020FA78
  c->lr=0x8020FA80u; f_8003F484(c); // 8020FA7C
  {uint32_t ea=c->r[2]+0xFFFFCAB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FA80
  c->r[3]=c->r[1]+0x0000005Cu; // 8020FA84
  {uint32_t ea=c->r[2]+0xFFFFCAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FA88
  {uint32_t ea=c->r[2]+0xFFFFCAB8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FA8C
  c->lr=0x8020FA94u; f_800521A0(c); // 8020FA90
  c->r[18]=c->r[18]+0xFFFFB10Cu; // 8020FA94
  c->r[4]=c->r[3]|c->r[3]; // 8020FA98
  c->r[3]=c->r[18]+0x00000010u; // 8020FA9C
  c->lr=0x8020FAA4u; f_8003F484(c); // 8020FAA0
  {uint32_t ea=c->r[2]+0xFFFFCABCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FAA4
  c->r[3]=c->r[1]+0x00000050u; // 8020FAA8
  {uint32_t ea=c->r[2]+0xFFFFCAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FAAC
  {uint32_t ea=c->r[2]+0xFFFFCAC0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FAB0
  c->lr=0x8020FAB8u; f_800521A0(c); // 8020FAB4
  c->r[4]=c->r[3]|c->r[3]; // 8020FAB8
  c->r[3]=c->r[18]+0x00000020u; // 8020FABC
  c->lr=0x8020FAC4u; f_8003F484(c); // 8020FAC0
  {uint32_t ea=c->r[2]+0xFFFFCAC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FAC4
  c->r[3]=c->r[1]+0x00000044u; // 8020FAC8
  {uint32_t ea=c->r[2]+0xFFFFCAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FACC
  {uint32_t ea=c->r[2]+0xFFFFCAC8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FAD0
  c->lr=0x8020FAD8u; f_800521A0(c); // 8020FAD4
  c->r[4]=c->r[3]|c->r[3]; // 8020FAD8
  c->r[3]=c->r[18]+0x00000030u; // 8020FADC
  c->lr=0x8020FAE4u; f_8003F484(c); // 8020FAE0
  {uint32_t ea=c->r[2]+0xFFFFCACCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FAE4
  c->r[3]=c->r[1]+0x00000038u; // 8020FAE8
  {uint32_t ea=c->r[2]+0xFFFFCAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FAEC
  {uint32_t ea=c->r[2]+0xFFFFCAD0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FAF0
  c->lr=0x8020FAF8u; f_800521A0(c); // 8020FAF4
  c->r[4]=c->r[3]|c->r[3]; // 8020FAF8
  c->r[3]=c->r[18]+0x00000040u; // 8020FAFC
  c->lr=0x8020FB04u; f_8003F484(c); // 8020FB00
  {uint32_t ea=c->r[2]+0xFFFFCAD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FB04
  c->r[3]=c->r[1]+0x0000002Cu; // 8020FB08
  {uint32_t ea=c->r[2]+0xFFFFCAACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FB0C
  {uint32_t ea=c->r[2]+0xFFFFCAD8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FB10
  c->lr=0x8020FB18u; f_800521A0(c); // 8020FB14
  c->r[4]=c->r[3]|c->r[3]; // 8020FB18
  c->r[3]=c->r[18]+0x00000050u; // 8020FB1C
  c->lr=0x8020FB24u; f_8003F484(c); // 8020FB20
  {uint32_t ea=c->r[2]+0xFFFFCADCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FB24
  c->r[3]=c->r[1]+0x00000020u; // 8020FB28
  {uint32_t ea=c->r[2]+0xFFFFCAE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FB2C
  {uint32_t ea=c->r[2]+0xFFFFCAE4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FB30
  c->lr=0x8020FB38u; f_800521A0(c); // 8020FB34
  c->r[4]=c->r[3]|c->r[3]; // 8020FB38
  c->r[3]=c->r[18]+0x00000060u; // 8020FB3C
  c->lr=0x8020FB44u; f_8003F484(c); // 8020FB40
  {uint32_t ea=c->r[2]+0xFFFFCAE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FB44
  c->r[3]=c->r[1]+0x00000014u; // 8020FB48
  {uint32_t ea=c->r[2]+0xFFFFCAE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FB4C
  {uint32_t ea=c->r[2]+0xFFFFCAECu; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FB50
  c->lr=0x8020FB58u; f_800521A0(c); // 8020FB54
  c->r[4]=c->r[3]|c->r[3]; // 8020FB58
  c->r[3]=c->r[18]+0x00000070u; // 8020FB5C
  c->lr=0x8020FB64u; f_8003F484(c); // 8020FB60
  {uint32_t ea=c->r[2]+0xFFFFCAF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FB64
  c->r[3]=c->r[1]+0x00000008u; // 8020FB68
  {uint32_t ea=c->r[2]+0xFFFFCAE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FB6C
  {uint32_t ea=c->r[2]+0xFFFFCAF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FB70
  c->lr=0x8020FB78u; f_800521A0(c); // 8020FB74
  c->r[4]=c->r[3]|c->r[3]; // 8020FB78
  c->r[3]=c->r[18]+0x00000080u; // 8020FB7C
  c->lr=0x8020FB84u; f_8003F484(c); // 8020FB80
  c->r[18]=R32(c->r[13]+0xFFFF8A80u); // 8020FB84
  c->r[20]=c->r[31]+0x00000018u; // 8020FB88
  c->r[19]=R32(c->r[13]+0xFFFF8A94u); // 8020FB8C
  c->r[24]=c->r[31]+0x00000024u; // 8020FB90
  c->r[21]=R32(c->r[13]+0xFFFF8AA8u); // 8020FB94
  c->r[28]=c->r[31]+0x00000030u; // 8020FB98
  c->r[22]=R32(c->r[13]+0xFFFF8A84u); // 8020FB9C
  c->r[11]=c->r[31]+0x0000003Cu; // 8020FBA0
  c->r[23]=R32(c->r[13]+0xFFFF8A98u); // 8020FBA4
  c->r[7]=c->r[31]+0x00000048u; // 8020FBA8
  c->r[25]=R32(c->r[13]+0xFFFF8AACu); // 8020FBAC
  c->r[3]=c->r[31]+0x00000054u; // 8020FBB0
  c->r[26]=R32(c->r[13]+0xFFFF8A88u); // 8020FBB4
  c->r[27]=R32(c->r[13]+0xFFFF8A9Cu); // 8020FBB8
  c->r[29]=R32(c->r[13]+0xFFFF8AB0u); // 8020FBBC
  c->r[30]=R32(c->r[13]+0xFFFF8A8Cu); // 8020FBC0
  c->r[12]=R32(c->r[13]+0xFFFF8AA0u); // 8020FBC4
  c->r[10]=R32(c->r[13]+0xFFFF8AB4u); // 8020FBC8
  c->r[9]=R32(c->r[13]+0xFFFF8A90u); // 8020FBCC
  c->r[8]=R32(c->r[13]+0xFFFF8AA4u); // 8020FBD0
  c->r[6]=R32(c->r[13]+0xFFFF8AB8u); // 8020FBD4
  c->r[5]=R32(c->r[13]+0xFFFF8ABCu); // 8020FBD8
  c->r[4]=R32(c->r[13]+0xFFFF8AC0u); // 8020FBDC
  c->r[0]=R32(c->r[13]+0xFFFF8AC4u); // 8020FBE0
  W32(c->r[31]+0x00000018u,c->r[18]); // 8020FBE4
  W32(c->r[20]+0x00000004u,c->r[19]); // 8020FBE8
  W32(c->r[20]+0x00000008u,c->r[21]); // 8020FBEC
  W32(c->r[31]+0x00000024u,c->r[22]); // 8020FBF0
  W32(c->r[24]+0x00000004u,c->r[23]); // 8020FBF4
  W32(c->r[24]+0x00000008u,c->r[25]); // 8020FBF8
  W32(c->r[31]+0x00000030u,c->r[26]); // 8020FBFC
  W32(c->r[28]+0x00000004u,c->r[27]); // 8020FC00
  W32(c->r[28]+0x00000008u,c->r[29]); // 8020FC04
  W32(c->r[31]+0x0000003Cu,c->r[30]); // 8020FC08
  W32(c->r[11]+0x00000004u,c->r[12]); // 8020FC0C
  W32(c->r[11]+0x00000008u,c->r[10]); // 8020FC10
  c->r[11]=c->r[1]+0x000000B0u; // 8020FC14
  W32(c->r[31]+0x00000048u,c->r[9]); // 8020FC18
  W32(c->r[7]+0x00000004u,c->r[8]); // 8020FC1C
  W32(c->r[7]+0x00000008u,c->r[6]); // 8020FC20
  W32(c->r[31]+0x00000054u,c->r[5]); // 8020FC24
  W32(c->r[3]+0x00000004u,c->r[4]); // 8020FC28
  W32(c->r[3]+0x00000008u,c->r[0]); // 8020FC2C
  c->lr=0x8020FC34u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020FC30
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8020FC34
  c->lr=c->r[0]; // 8020FC38
  c->r[1]=c->r[1]+0x000000B0u; // 8020FC3C
  return; // 8020FC40
}

// fn_8020FC44
void f_8020FC44(Ctx* __restrict c) {
  trace_call(0x8020FC44u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC44
  f_8020D3B8(c); return; // 8020FC48
}

// fn_8020FC4C
void f_8020FC4C(Ctx* __restrict c) {
  trace_call(0x8020FC4Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC4C
  f_8020D744(c); return; // 8020FC50
}

// fn_8020FC54
void f_8020FC54(Ctx* __restrict c) {
  trace_call(0x8020FC54u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC54
  f_8020D598(c); return; // 8020FC58
}

// fn_8020FC5C
void f_8020FC5C(Ctx* __restrict c) {
  trace_call(0x8020FC5Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC5C
  f_8020D650(c); return; // 8020FC60
}

// fn_8020FC64
void f_8020FC64(Ctx* __restrict c) {
  trace_call(0x8020FC64u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC64
  f_8020D6C4(c); return; // 8020FC68
}

// fn_8020FC6C
void f_8020FC6C(Ctx* __restrict c) {
  trace_call(0x8020FC6Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC6C
  f_8020D320(c); return; // 8020FC70
}

// fn_8020FC74
void f_8020FC74(Ctx* __restrict c) {
  trace_call(0x8020FC74u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC74
  f_8020D6C8(c); return; // 8020FC78
}

// fn_8020FC7C
void f_8020FC7C(Ctx* __restrict c) {
  trace_call(0x8020FC7Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC7C
  f_8020D3BC(c); return; // 8020FC80
}

// fn_8020FC84
void f_8020FC84(Ctx* __restrict c) {
  trace_call(0x8020FC84u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC84
  f_8020D600(c); return; // 8020FC88
}

// fn_8020FC8C
void f_8020FC8C(Ctx* __restrict c) {
  trace_call(0x8020FC8Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC8C
  f_8020D654(c); return; // 8020FC90
}

// fn_8020FC94
void f_8020FC94(Ctx* __restrict c) {
  trace_call(0x8020FC94u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC94
  f_8020F568(c); return; // 8020FC98
}

// fn_8020FC9C
void f_8020FC9C(Ctx* __restrict c) {
  trace_call(0x8020FC9Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FC9C
  f_8020D3B4(c); return; // 8020FCA0
}

// fn_8020FCA4
void f_8020FCA4(Ctx* __restrict c) {
  trace_call(0x8020FCA4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCA4
  f_8020D740(c); return; // 8020FCA8
}

// fn_8020FCAC
void f_8020FCAC(Ctx* __restrict c) {
  trace_call(0x8020FCACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCAC
  f_8020D594(c); return; // 8020FCB0
}

// fn_8020FCB4
void f_8020FCB4(Ctx* __restrict c) {
  trace_call(0x8020FCB4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCB4
  f_8020D608(c); return; // 8020FCB8
}

// fn_8020FCBC
void f_8020FCBC(Ctx* __restrict c) {
  trace_call(0x8020FCBCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCBC
  f_8020D6C0(c); return; // 8020FCC0
}

// fn_8020FCC4
void f_8020FCC4(Ctx* __restrict c) {
  trace_call(0x8020FCC4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCC4
  f_8020D374(c); return; // 8020FCC8
}

// fn_8020FCCC
void f_8020FCCC(Ctx* __restrict c) {
  trace_call(0x8020FCCCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCCC
  f_8020D73C(c); return; // 8020FCD0
}

// fn_8020FCD4
void f_8020FCD4(Ctx* __restrict c) {
  trace_call(0x8020FCD4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCD4
  f_8020D3C0(c); return; // 8020FCD8
}

// fn_8020FCDC
void f_8020FCDC(Ctx* __restrict c) {
  trace_call(0x8020FCDCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCDC
  f_8020D604(c); return; // 8020FCE0
}

// fn_8020FCE4
void f_8020FCE4(Ctx* __restrict c) {
  trace_call(0x8020FCE4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8020FCE4
  f_8020D6BC(c); return; // 8020FCE8
}

// fn_8020FCEC
void f_8020FCEC(Ctx* __restrict c) {
  trace_call(0x8020FCECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FCEC
  c->r[0]=c->lr; // 8020FCF0
  c->r[4]=0u+0x80440000u; // 8020FCF4
  c->r[5]=0u+0x00000001u; // 8020FCF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020FCFC
  c->r[4]=c->r[4]+0xFFFFA6D8u; // 8020FD00
  c->r[0]=0u+0x00000006u; // 8020FD04
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8020FD08
  c->r[28]=c->r[3]|c->r[3]; // 8020FD0C
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 8020FD10
  W8(c->r[3]+0x00000004u,c->r[5]); // 8020FD14
  c->r[5]=c->r[3]+0x00000004u; // 8020FD18
  c->ctr=c->r[0]; // 8020FD1C
L_8020FD20:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8020FD20
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8020FD24
  W32(c->r[5]+0x00000004u,c->r[3]); // 8020FD28
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8020FD2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020FD20; } // 8020FD30
  c->r[30]=0u+0x803E0000u; // 8020FD34
  c->r[3]=c->r[28]|c->r[28]; // 8020FD38
  c->r[4]=c->r[30]+0x00002900u; // 8020FD3C
  c->lr=0x8020FD44u; f_800A5544(c); // 8020FD40
  c->r[3]=c->r[28]+0x00000038u; // 8020FD44
  c->r[4]=c->r[30]+0x00002900u; // 8020FD48
  c->lr=0x8020FD50u; f_800A5544(c); // 8020FD4C
  c->r[29]=0u+0x00000000u; // 8020FD50
  c->r[31]=0u+0x00000000u; // 8020FD54
L_8020FD58:;
  c->r[3]=c->r[28]+c->r[31]; // 8020FD58
  c->r[4]=c->r[30]+0x00002900u; // 8020FD5C
  c->r[3]=c->r[3]+0x00000044u; // 8020FD60
  c->lr=0x8020FD68u; f_800A5544(c); // 8020FD64
  c->r[3]=c->r[28]+c->r[31]; // 8020FD68
  c->r[4]=c->r[30]+0x00002900u; // 8020FD6C
  c->r[3]=c->r[3]+0x0000005Cu; // 8020FD70
  c->lr=0x8020FD78u; f_800A5544(c); // 8020FD74
  c->r[29]=c->r[29]+0x00000001u; // 8020FD78
  c->r[31]=c->r[31]+0x0000000Cu; // 8020FD7C
  cmps(c,0,(int32_t)c->r[29],2); // 8020FD80
  if (crb(c,0)) { IRQCHK(c); goto L_8020FD58; } // 8020FD84
  c->r[3]=c->r[28]|c->r[28]; // 8020FD88
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8020FD8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8020FD90
  c->lr=c->r[0]; // 8020FD94
  c->r[1]=c->r[1]+0x00000020u; // 8020FD98
  return; // 8020FD9C
}

// fn_8020FDA0
void f_8020FDA0(Ctx* __restrict c) {
  trace_call(0x8020FDA0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FDA0
  c->r[0]=c->lr; // 8020FDA4
  W32(c->r[1]+0x00000114u,c->r[0]); // 8020FDA8
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 8020FDAC
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 8020FDB0
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 8020FDB4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 8020FDB8
  c->f[30]=c->f[2]; // 8020FDBC
  {uint32_t ea=c->r[2]+0xFFFFCAF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FDC0
  c->f[31]=c->f[3]; // 8020FDC4
  W32(c->r[1]+0x000000ECu,c->r[31]); // 8020FDC8
  c->r[31]=c->r[3]|c->r[3]; // 8020FDCC
  c->f[3]=c->f[2]; // 8020FDD0
  c->r[3]=c->r[1]+0x00000014u; // 8020FDD4
  c->lr=0x8020FDDCu; f_800521A0(c); // 8020FDD8
  c->r[4]=c->r[3]|c->r[3]; // 8020FDDC
  c->r[3]=c->r[1]+0x00000020u; // 8020FDE0
  c->lr=0x8020FDE8u; f_801392FC(c); // 8020FDE4
  c->r[5]=0u+0x804B0000u; // 8020FDE8
  c->r[4]=c->r[3]|c->r[3]; // 8020FDEC
  c->r[3]=c->r[1]+0x000000A0u; // 8020FDF0
  c->r[5]=c->r[5]+0x000038C8u; // 8020FDF4
  c->lr=0x8020FDFCu; f_80058424(c); // 8020FDF8
  c->r[3]=c->r[1]+0x00000060u; // 8020FDFC
  c->r[4]=c->r[1]+0x000000A0u; // 8020FE00
  c->lr=0x8020FE08u; f_801380C4(c); // 8020FE04
  c->r[3]=c->r[1]+0x00000030u; // 8020FE08
  c->r[4]=c->r[1]+0x00000060u; // 8020FE0C
  c->r[5]=0u+0x00000030u; // 8020FE10
  c->lr=0x8020FE18u; f_80235294(c); // 8020FE14
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FE18
  c->r[0]=0u+0x00000006u; // 8020FE1C
  {uint32_t ea=c->r[2]+0xFFFFCAFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8020FE20
  c->r[5]=c->r[31]+0x00000004u; // 8020FE24
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FE28
  c->r[4]=c->r[1]+0x0000002Cu; // 8020FE2C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020FE30
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 8020FE34
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 8020FE38
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 8020FE3C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 8020FE40
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 8020FE44
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8020FE48
  c->ctr=c->r[0]; // 8020FE4C
L_8020FE50:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8020FE50
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8020FE54
  W32(c->r[5]+0x00000004u,c->r[3]); // 8020FE58
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8020FE5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8020FE50; } // 8020FE60
  c->f[1]=c->ps1[1]=S(c->f[30]); // 8020FE64
  {uint32_t ea=c->r[2]+0xFFFFCAF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FE68
  c->f[0]=c->ps1[0]=S(c->f[31]); // 8020FE6C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[30]);} // 8020FE70
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 8020FE74
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 8020FE78
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 8020FE7C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8020FE80
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8020FE84
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 8020FE88
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 8020FE8C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 8020FE90
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 8020FE94
  c->r[31]=R32(c->r[1]+0x000000ECu); // 8020FE98
  c->r[0]=R32(c->r[1]+0x00000114u); // 8020FE9C
  c->lr=c->r[0]; // 8020FEA0
  c->r[1]=c->r[1]+0x00000110u; // 8020FEA4
  return; // 8020FEA8
}

// fn_8020FEAC
void f_8020FEAC(Ctx* __restrict c) {
  trace_call(0x8020FEACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FEAC
  c->r[0]=c->lr; // 8020FEB0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8020FEB4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8020FEB8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8020FEBC
  c->f[31]=c->f[1]; // 8020FEC0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8020FEC4
  c->r[31]=c->r[5]|c->r[5]; // 8020FEC8
  W32(c->r[1]+0x00000048u,c->r[30]); // 8020FECC
  c->r[30]=c->r[3]|c->r[3]; // 8020FED0
  c->lr=0x8020FED8u; f_80210144(c); // 8020FED4
  cmps(c,0,(int32_t)c->r[31],0); // 8020FED8
  if (crb(c,2)) { goto L_8020FF68; } // 8020FEDC
  c->r[4]=c->r[31]|c->r[31]; // 8020FEE0
  c->r[3]=c->r[1]+0x00000014u; // 8020FEE4
  c->lr=0x8020FEECu; f_80210144(c); // 8020FEE8
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,0,0);} // 8020FEEC
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,1,ea,0,0);} // 8020FEF0
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8020FEF4
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 8020FEF8
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 8020FEFC
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,1,ea,1,0);} // 8020FF00
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8020FF04
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 8020FF08
  c->r[3]=c->r[1]+0x0000002Cu; // 8020FF0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 8020FF10
  c->r[4]=c->r[1]+0x00000038u; // 8020FF14
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020FF18
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020FF1C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 8020FF20
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 8020FF24
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8020FF28
  c->lr=0x8020FF30u; f_80265750(c); // 8020FF2C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,0,ea,0,0);} // 8020FF30
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 8020FF34
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 8020FF38
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,0,ea,1,0);} // 8020FF3C
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 8020FF40
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 8020FF44
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,0,ea,0,0);} // 8020FF48
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,1,ea,0,0);} // 8020FF4C
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8020FF50
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 8020FF54
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,1,0);} // 8020FF58
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,1,ea,1,0);} // 8020FF5C
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8020FF60
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,0,ea,1,0);} // 8020FF64
L_8020FF68:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8020FF68
  c->r[0]=R32(c->r[1]+0x00000064u); // 8020FF6C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8020FF70
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8020FF74
  c->r[30]=R32(c->r[1]+0x00000048u); // 8020FF78
  c->lr=c->r[0]; // 8020FF7C
  c->r[1]=c->r[1]+0x00000060u; // 8020FF80
  return; // 8020FF84
}

// fn_8020FF88
void f_8020FF88(Ctx* __restrict c) {
  trace_call(0x8020FF88u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8020FF88
  c->r[3]=c->r[3]+c->r[0]; // 8020FF8C
  c->r[3]=c->r[3]+0x00000044u; // 8020FF90
  return; // 8020FF94
}

// fn_8020FF98
void f_8020FF98(Ctx* __restrict c) {
  trace_call(0x8020FF98u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8020FF98
  c->r[3]=c->r[3]+c->r[0]; // 8020FF9C
  c->r[3]=c->r[3]+0x0000005Cu; // 8020FFA0
  return; // 8020FFA4
}

// fn_8020FFA8
void f_8020FFA8(Ctx* __restrict c) {
  trace_call(0x8020FFA8u);
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8020FFA8
  c->r[3]=c->r[3]+c->r[0]; // 8020FFAC
  c->r[3]=c->r[3]+0x00000044u; // 8020FFB0
  f_800A5544(c); return; // 8020FFB4
}

// fn_8020FFB8
void f_8020FFB8(Ctx* __restrict c) {
  trace_call(0x8020FFB8u);
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 8020FFB8
  c->r[3]=c->r[3]+c->r[0]; // 8020FFBC
  c->r[3]=c->r[3]+0x0000005Cu; // 8020FFC0
  f_800A5544(c); return; // 8020FFC4
}

// fn_8020FFC8
void f_8020FFC8(Ctx* __restrict c) {
  trace_call(0x8020FFC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020FFC8
  c->r[0]=c->lr; // 8020FFCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8020FFD0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8020FFD4
  c->r[29]=c->r[3]|c->r[3]; // 8020FFD8
  c->r[31]=c->r[3]+0x00000244u; // 8020FFDC
  c->r[30]=c->r[29]|c->r[29]; // 8020FFE0
L_8020FFE4:;
  c->r[3]=c->r[30]|c->r[30]; // 8020FFE4
  c->lr=0x8020FFECu; f_8020FCEC(c); // 8020FFE8
  c->r[30]=c->r[30]+0x00000074u; // 8020FFEC
  cmpu(c,0,c->r[30],c->r[31]); // 8020FFF0
  if (crb(c,0)) { IRQCHK(c); goto L_8020FFE4; } // 8020FFF4
  c->r[0]=0u+0x00000000u; // 8020FFF8
  c->r[3]=c->r[29]|c->r[29]; // 8020FFFC
  W32(c->r[29]+0x00000244u,c->r[0]); // 80210000
  W32(c->r[29]+0x00000248u,c->r[0]); // 80210004
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80210008
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021000C
  c->lr=c->r[0]; // 80210010
  c->r[1]=c->r[1]+0x00000020u; // 80210014
  return; // 80210018
}

// fn_8021001C
void f_8021001C(Ctx* __restrict c) {
  trace_call(0x8021001Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021001C
  c->r[0]=c->lr; // 80210020
  W32(c->r[1]+0x00000024u,c->r[0]); // 80210024
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80210028
  c->r[29]=c->r[3]|c->r[3]; // 8021002C
  c->r[30]=0u+0x00000000u; // 80210030
  c->r[31]=0u+0x00000000u; // 80210034
L_80210038:;
  c->r[3]=c->r[29]+c->r[31]; // 80210038
  c->lr=0x80210040u; f_802894C0(c); // 8021003C
  c->r[0]=cntlz(c->r[3]); // 80210040
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80210044
  cmpu(c,0,c->r[0],0x00000001u); // 80210048
  if (crb(c,2)) { goto L_80210060; } // 8021004C
  c->r[30]=c->r[30]+0x00000001u; // 80210050
  c->r[31]=c->r[31]+0x00000074u; // 80210054
  cmps(c,0,(int32_t)c->r[30],5); // 80210058
  if (crb(c,0)) { IRQCHK(c); goto L_80210038; } // 8021005C
L_80210060:;
  c->r[0]=0u+0x00000000u; // 80210060
  W32(c->r[29]+0x00000244u,c->r[30]); // 80210064
  W32(c->r[29]+0x00000248u,c->r[0]); // 80210068
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021006C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80210070
  c->lr=c->r[0]; // 80210074
  c->r[1]=c->r[1]+0x00000020u; // 80210078
  return; // 8021007C
}

// fn_80210080
void f_80210080(Ctx* __restrict c) {
  trace_call(0x80210080u);
  c->r[5]=R32(c->r[3]+0x00000244u); // 80210080
  c->r[6]=c->r[4]+0x00000001u; // 80210084
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)116); // 80210088
  c->r[0]=c->r[5]-c->r[6]; // 8021008C
  c->ctr=c->r[0]; // 80210090
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 80210094
  if (!crb(c,0)) { goto L_802100C0; } // 80210098
L_8021009C:;
  c->r[5]=c->r[3]+c->r[4]; // 8021009C
  c->r[0]=R8(c->r[5]+0x00000004u); // 802100A0
  cmpu(c,0,c->r[0],0x00000001u); // 802100A4
  if (!crb(c,2)) { goto L_802100B4; } // 802100A8
  c->r[3]=c->r[6]|c->r[6]; // 802100AC
  return; // 802100B0
L_802100B4:;
  c->r[6]=c->r[6]+0x00000001u; // 802100B4
  c->r[4]=c->r[4]+0x00000074u; // 802100B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021009C; } // 802100BC
L_802100C0:;
  c->r[3]=0u+0xFFFFFFFFu; // 802100C0
  return; // 802100C4
}

// fn_802100C8
void f_802100C8(Ctx* __restrict c) {
  trace_call(0x802100C8u);
  c->r[6]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 802100C8
  c->r[0]=c->r[6]+0x00000001u; // 802100CC
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)116); // 802100D0
  c->ctr=c->r[0]; // 802100D4
  if (crb(c,0)) { goto L_80210100; } // 802100D8
L_802100DC:;
  c->r[5]=c->r[3]+c->r[4]; // 802100DC
  c->r[0]=R8(c->r[5]+0x00000004u); // 802100E0
  cmpu(c,0,c->r[0],0x00000001u); // 802100E4
  if (!crb(c,2)) { goto L_802100F4; } // 802100E8
  c->r[3]=c->r[6]|c->r[6]; // 802100EC
  return; // 802100F0
L_802100F4:;
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 802100F4
  c->r[4]=c->r[4]+0xFFFFFF8Cu; // 802100F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802100DC; } // 802100FC
L_80210100:;
  c->r[3]=0u+0xFFFFFFFFu; // 80210100
  return; // 80210104
}

// fn_80210108
void f_80210108(Ctx* __restrict c) {
  trace_call(0x80210108u);
  cmps(c,0,(int32_t)c->r[4],0); // 80210108
  if (crb(c,0)) { goto L_80210124; } // 8021010C
  c->r[0]=R32(c->r[3]+0x00000244u); // 80210110
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80210114
  if (!crb(c,0)) { goto L_80210124; } // 80210118
  c->r[0]=0u+0x00000001u; // 8021011C
  goto L_80210128; // 80210120
L_80210124:;
  c->r[0]=0u+0x00000000u; // 80210124
L_80210128:;
  cmpu(c,0,c->r[0],0x00000001u); // 80210128
  if (!crb(c,2)) { goto L_8021013C; } // 8021012C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)116); // 80210130
  c->r[3]=c->r[3]+c->r[0]; // 80210134
  return; // 80210138
L_8021013C:;
  c->r[3]=0u+0x00000000u; // 8021013C
  return; // 80210140
}

// fn_80210144
void f_80210144(Ctx* __restrict c) {
  trace_call(0x80210144u);
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210144
  {uint32_t ea=c->r[4]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210148
  {uint32_t ea=c->r[4]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021014C
  f_800521A0(c); return; // 80210150
}

// fn_80210154
void f_80210154(Ctx* __restrict c) {
  trace_call(0x80210154u);
  {uint32_t ea=c->r[2]+0xFFFFCAF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210154
  c->r[3]=0u+0x805B0000u; // 80210158
  {uint32_t ea=c->r[2]+0xFFFFCB00u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021015C
  c->r[3]=c->r[3]+0x00003498u; // 80210160
  c->f[3]=c->f[1]; // 80210164
  f_8003F588(c); return; // 80210168
}

// fn_8021016C
void f_8021016C(Ctx* __restrict c) {
  trace_call(0x8021016Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021016C
  c->r[0]=c->lr; // 80210170
  c->r[4]=0u+0x80410000u; // 80210174
  W32(c->r[1]+0x00000014u,c->r[0]); // 80210178
  c->r[4]=c->r[4]+0xFFFFB6A0u; // 8021017C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80210180
  c->r[31]=c->r[3]|c->r[3]; // 80210184
  W32(c->r[3]+0x00000000u,c->r[4]); // 80210188
  c->lr=0x80210190u; f_802105F0(c); // 8021018C
  c->r[3]=c->r[31]|c->r[31]; // 80210190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80210194
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210198
  c->lr=c->r[0]; // 8021019C
  c->r[1]=c->r[1]+0x00000010u; // 802101A0
  return; // 802101A4
}

// fn_802101A8
void f_802101A8(Ctx* __restrict c) {
  trace_call(0x802101A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802101A8
  c->r[0]=c->lr; // 802101AC
  cmps(c,0,(int32_t)c->r[3],0); // 802101B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802101B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802101B8
  c->r[31]=c->r[3]|c->r[3]; // 802101BC
  if (crb(c,2)) { goto L_802101D0; } // 802101C0
  cmps(c,0,(int32_t)c->r[4],0); // 802101C4
  if (!crb(c,1)) { goto L_802101D0; } // 802101C8
  c->lr=0x802101D0u; f_802896EC(c); // 802101CC
L_802101D0:;
  c->r[3]=c->r[31]|c->r[31]; // 802101D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802101D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802101D8
  c->lr=c->r[0]; // 802101DC
  c->r[1]=c->r[1]+0x00000010u; // 802101E0
  return; // 802101E4
}

// fn_802101E8
void f_802101E8(Ctx* __restrict c) {
  trace_call(0x802101E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802101E8
  c->r[0]=c->lr; // 802101EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802101F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802101F4
  c->r[31]=c->r[5]|c->r[5]; // 802101F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 802101FC
  c->r[30]=c->r[3]|c->r[3]; // 80210200
  W32(c->r[3]+0x00000004u,c->r[4]); // 80210204
  W32(c->r[3]+0x00000008u,c->r[5]); // 80210208
  c->r[3]=c->r[4]|c->r[4]; // 8021020C
  c->lr=0x80210214u; f_802EFEF8(c); // 80210210
  cmps(c,0,(int32_t)c->r[31],1); // 80210214
  if (crb(c,2)) { goto L_80210248; } // 80210218
  if (!crb(c,0)) { goto L_80210260; } // 8021021C
  cmps(c,0,(int32_t)c->r[31],0); // 80210220
  if (!crb(c,0)) { goto L_8021022C; } // 80210224
  goto L_80210260; // 80210228
L_8021022C:;
  {uint32_t ea=c->r[2]+0xFFFFCB08u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021022C
  {uint32_t ea=c->r[2]+0xFFFFCB0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80210230
  {uint32_t ea=c->r[2]+0xFFFFCB10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210234
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[2]);} // 80210238
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 8021023C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 80210240
  goto L_80210260; // 80210244
L_80210248:;
  {uint32_t ea=c->r[2]+0xFFFFCB14u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210248
  {uint32_t ea=c->r[2]+0xFFFFCB18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021024C
  {uint32_t ea=c->r[2]+0xFFFFCB10u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210250
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[2]);} // 80210254
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 80210258
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8021025C
L_80210260:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80210264
  c->r[30]=R32(c->r[1]+0x00000008u); // 80210268
  c->lr=c->r[0]; // 8021026C
  c->r[1]=c->r[1]+0x00000010u; // 80210270
  return; // 80210274
}

// fn_80210278
void f_80210278(Ctx* __restrict c) {
  trace_call(0x80210278u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210278
  c->r[0]=c->lr; // 8021027C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80210280
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80210284
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80210288
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8021028C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80210290
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80210294
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80210298
  c->r[11]=c->r[1]+0x00000030u; // 8021029C
  c->lr=0x802102A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802102A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 802102A4
  c->r[31]=c->r[3]|c->r[3]; // 802102A8
  cmps(c,0,(int32_t)c->r[0],0); // 802102AC
  if (!crb(c,0)) { goto L_802102C0; } // 802102B0
  c->r[3]=0u+0x80440000u; // 802102B4
  c->r[3]=c->r[3]+0xFFFFA818u; // 802102B8
  c->r[0]=R32(c->r[3]+0x00006878u); // 802102BC
L_802102C0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6628); // 802102C0
  c->r[27]=0u+0x80440000u; // 802102C4
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 802102C8
  c->r[28]=0u+0x803F0000u; // 802102CC
  c->r[27]=c->r[27]+0xFFFFA818u; // 802102D0
  {uint32_t ea=c->r[2]+0xFFFFCB18u; c->f[31]=c->ps1[31]=RF32(ea);} // 802102D4
  c->r[3]=c->r[27]+c->r[0]; // 802102D8
  c->r[29]=0u+0x803F0000u; // 802102DC
  c->r[26]=R32(c->r[3]+0x000019A8u); // 802102E0
  c->r[30]=0u+0x00000000u; // 802102E4
  goto L_8021059C; // 802102E8
L_802102EC:;
  c->r[3]=R32(c->r[31]+0x00000054u); // 802102EC
  c->r[0]=R32(c->r[31]+0x00000008u); // 802102F0
  c->r[3]=c->r[3]+0x00000001u; // 802102F4
  cmps(c,0,(int32_t)c->r[0],0); // 802102F8
  W32(c->r[31]+0x00000054u,c->r[3]); // 802102FC
  if (crb(c,2)) { goto L_80210308; } // 80210300
  goto L_80210348; // 80210304
L_80210308:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80210308
  cmps(c,0,(int32_t)c->r[0],0); // 8021030C
  if (!crb(c,0)) { goto L_80210318; } // 80210310
  c->r[0]=R32(c->r[27]+0x00006878u); // 80210314
L_80210318:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6628); // 80210318
  c->r[4]=c->r[26]|c->r[26]; // 8021031C
  c->r[3]=c->r[27]+c->r[0]; // 80210320
  c->r[3]=c->r[3]+0x00000014u; // 80210324
  c->lr=0x8021032Cu; f_8003BE78(c); // 80210328
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021032C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210330
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210334
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80210338
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8021033C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80210340
  goto L_80210384; // 80210344
L_80210348:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80210348
  cmps(c,0,(int32_t)c->r[0],0); // 8021034C
  if (!crb(c,0)) { goto L_80210358; } // 80210350
  c->r[0]=R32(c->r[27]+0x00006878u); // 80210354
L_80210358:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6628); // 80210358
  c->r[4]=c->r[26]|c->r[26]; // 8021035C
  c->r[3]=c->r[27]+c->r[0]; // 80210360
  c->r[3]=c->r[3]+0x00000014u; // 80210364
  c->lr=0x8021036Cu; f_8003BEB0(c); // 80210368
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021036C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210370
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210374
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 80210378
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 8021037C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80210380
L_80210384:;
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80210384
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210388
  c->f[0]=-c->f[1]; // 8021038C
  fcmp(c,0,c->f[2],c->f[0]); // 80210390
  if (crb(c,0)) { goto L_802103A0; } // 80210394
  fcmp(c,0,c->f[2],c->f[1]); // 80210398
  if (!crb(c,1)) { goto L_802103C0; } // 8021039C
L_802103A0:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802103A0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802103A4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802103A8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802103AC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802103B0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 802103B4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802103B8
  goto L_802103CC; // 802103BC
L_802103C0:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802103C0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 802103C4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802103C8
L_802103CC:;
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802103CC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802103D0
  c->f[0]=-c->f[1]; // 802103D4
  fcmp(c,0,c->f[2],c->f[0]); // 802103D8
  if (crb(c,0)) { goto L_802103E8; } // 802103DC
  fcmp(c,0,c->f[2],c->f[1]); // 802103E0
  if (!crb(c,1)) { goto L_80210408; } // 802103E4
L_802103E8:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802103E8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802103EC
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802103F0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802103F4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802103F8
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[1]);} // 802103FC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80210400
  goto L_80210414; // 80210404
L_80210408:;
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210408
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8021040C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 80210410
L_80210414:;
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80210414
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210418
  c->f[0]=-c->f[1]; // 8021041C
  fcmp(c,0,c->f[2],c->f[0]); // 80210420
  if (crb(c,0)) { goto L_80210430; } // 80210424
  fcmp(c,0,c->f[2],c->f[1]); // 80210428
  if (!crb(c,1)) { goto L_80210450; } // 8021042C
L_80210430:;
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210430
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210434
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210438
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8021043C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80210440
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[1]);} // 80210444
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80210448
  goto L_8021045C; // 8021044C
L_80210450:;
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210450
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 80210454
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 80210458
L_8021045C:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021045C
  {uint32_t ea=c->r[31]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 80210460
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80210464
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210468
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 8021046C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 80210470
  {uint32_t ea=c->r[31]+0x00000034u; c->f[6]=c->ps1[6]=RF32(ea);} // 80210474
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 80210478
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 8021047C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80210480
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80210484
  fcmp(c,0,c->f[6],c->f[30]); // 80210488
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[5]);} // 8021048C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[4]);} // 80210490
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[3]);} // 80210494
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[2]);} // 80210498
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 8021049C
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 802104A0
  if (!crb(c,0)) { goto L_802104AC; } // 802104A4
  c->f[6]=-c->f[6]; // 802104A8
L_802104AC:;
  c->f[5]=c->ps1[5]=S(-std::fma(c->f[6],c->f[6],-c->f[31])); // 802104AC
  fcmp(c,0,c->f[5],c->f[30]); // 802104B0
  if (!crb(c,1)) { goto L_802104E8; } // 802104B4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802104B8
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802104BC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 802104C0
  c->f[4]=c->ps1[4]=S(std::fma(c->f[5],c->f[1],c->f[0])); // 802104C4
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802104C8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 802104CC
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802104D0
  c->f[2]=c->ps1[2]=S(std::fma(c->f[5],c->f[3],c->f[2])); // 802104D4
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[4]);} // 802104D8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[1],c->f[0])); // 802104DC
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[2]);} // 802104E0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 802104E4
L_802104E8:;
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802104E8
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802104EC
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 802104F0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802104F4
  {uint32_t ea=c->r[31]+0x00000044u; c->f[4]=c->ps1[4]=RF32(ea);} // 802104F8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802104FC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[1],c->f[2])); // 80210500
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[3]); // 80210504
  c->f[29]=c->ps1[29]=S(std::fma(c->f[0],c->f[0],c->f[1])); // 80210508
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[2]);} // 8021050C
  fcmp(c,0,c->f[29],c->f[30]); // 80210510
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80210514
  if (crb(c,2)) { goto L_80210530; } // 80210518
  c->r[3]=c->r[28]+0x00001C38u; // 8021051C
  c->r[5]=c->r[29]+0x00001C14u; // 80210520
  c->r[4]=0u+0x00000273u; // 80210524
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80210528
  c->lr=0x80210530u; f_80344550(c); // 8021052C
L_80210530:;
  fcmp(c,0,c->f[29],c->f[30]); // 80210530
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80210534
  if (!crb(c,2)) { goto L_80210544; } // 80210538
  c->f[3]=c->f[30]; // 8021053C
  goto L_80210550; // 80210540
L_80210544:;
  c->f[1]=c->f[29]; // 80210544
  c->lr=0x8021054Cu; f_80394248(c); // 80210548
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[1]); // 8021054C
L_80210550:;
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210550
  fcmp(c,0,c->f[3],c->f[0]); // 80210554
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80210558
  if (!crb(c,2)) { goto L_8021059C; } // 8021055C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210560
  fcmp(c,0,c->f[3],c->f[0]); // 80210564
  if (!crb(c,1)) { goto L_8021059C; } // 80210568
  c->f[4]=c->ps1[4]=S(c->f[31]/c->f[3]); // 8021056C
  {uint32_t ea=c->r[31]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210570
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80210574
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210578
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[3]);} // 8021057C
  W32(c->r[31]+0x00000054u,c->r[30]); // 80210580
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 80210584
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 80210588
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 8021058C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[2]);} // 80210590
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[1]);} // 80210594
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 80210598
L_8021059C:;
  c->r[26]=addc(c,c->r[26],0xFFFFFFFFu,0); cr0(c,c->r[26]); // 8021059C
  if (!crb(c,0)) { IRQCHK(c); goto L_802102EC; } // 802105A0
  c->r[3]=R32(c->r[31]+0x00000054u); // 802105A4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 802105A8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 802105AC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 802105B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 802105B4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 802105B8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 802105BC
  c->r[11]=c->r[1]+0x00000030u; // 802105C0
  c->lr=0x802105C8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802105C4
  c->r[0]=R32(c->r[1]+0x00000064u); // 802105C8
  c->lr=c->r[0]; // 802105CC
  c->r[1]=c->r[1]+0x00000060u; // 802105D0
  return; // 802105D4
}

// fn_802105D8
void f_802105D8(Ctx* __restrict c) {
  trace_call(0x802105D8u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 802105D8
  return; // 802105DC
}

// fn_802105E0
void f_802105E0(Ctx* __restrict c) {
  trace_call(0x802105E0u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 802105E0
  return; // 802105E4
}

// fn_802105E8
void f_802105E8(Ctx* __restrict c) {
  trace_call(0x802105E8u);
  c->r[3]=c->r[3]+0x00000048u; // 802105E8
  return; // 802105EC
}

// fn_802105F0
void f_802105F0(Ctx* __restrict c) {
  trace_call(0x802105F0u);
  {uint32_t ea=c->r[2]+0xFFFFCB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802105F0
  c->r[0]=0u+0x00000000u; // 802105F4
  {uint32_t ea=c->r[2]+0xFFFFCB20u; c->f[5]=c->ps1[5]=RF32(ea);} // 802105F8
  {uint32_t ea=c->r[2]+0xFFFFCB24u; c->f[4]=c->ps1[4]=RF32(ea);} // 802105FC
  {uint32_t ea=c->r[2]+0xFFFFCB08u; c->f[3]=c->ps1[3]=RF32(ea);} // 80210600
  {uint32_t ea=c->r[2]+0xFFFFCB0Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80210604
  {uint32_t ea=c->r[2]+0xFFFFCB10u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210608
  W32(c->r[3]+0x00000004u,c->r[0]); // 8021060C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80210610
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[5]);} // 80210614
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 80210618
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 8021061C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 80210620
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80210624
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80210628
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8021062C
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80210630
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80210634
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 80210638
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8021063C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 80210640
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 80210644
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 80210648
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 8021064C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80210650
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80210654
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80210658
  W32(c->r[3]+0x00000054u,c->r[0]); // 8021065C
  return; // 80210660
}

// fn_80210664
void f_80210664(Ctx* __restrict c) {
  trace_call(0x80210664u);
  return; // 80210664
}

// fn_80210668
void f_80210668(Ctx* __restrict c) {
  trace_call(0x80210668u);
  cmps(c,0,(int32_t)c->r[5],0); // 80210668
  if (crb(c,2)) { goto L_8021067C; } // 8021066C
  c->r[3]=0u+0x80450000u; // 80210670
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 80210674
  f_80045860(c); return; // 80210678
L_8021067C:;
  c->r[3]=0u+0x80450000u; // 8021067C
  c->r[3]=c->r[3]+0xFFFFC69Cu; // 80210680
  f_80045900(c); return; // 80210684
}

// fn_80210688
void f_80210688(Ctx* __restrict c) {
  trace_call(0x80210688u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210688
  c->r[0]=c->lr; // 8021068C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80210690
  c->r[11]=c->r[1]+0x00000040u; // 80210694
  c->lr=0x8021069Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80210698
  c->r[26]=c->r[3]|c->r[3]; // 8021069C
  c->r[27]=c->r[4]|c->r[4]; // 802106A0
  c->r[30]=c->r[3]+0x00000A0Cu; // 802106A4
  c->r[29]=0u+0x00000000u; // 802106A8
  c->r[31]=0u+0x00000000u; // 802106AC
  goto L_80210728; // 802106B0
L_802106B4:;
  c->r[3]=c->r[30]+c->r[31]; // 802106B4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802106B8
  cmps(c,0,(int32_t)c->r[0],0); // 802106BC
  if (crb(c,0)) { goto L_80210720; } // 802106C0
  c->r[28]=R32(c->r[3]+0x00000010u); // 802106C4
  c->r[3]=c->r[1]+0x00000008u; // 802106C8
  c->lr=0x802106D0u; f_801A7678(c); // 802106CC
  c->r[4]=c->r[28]|c->r[28]; // 802106D0
  c->r[3]=c->r[1]+0x00000008u; // 802106D4
  c->lr=0x802106DCu; f_801A76CC(c); // 802106D8
  {uint32_t ea=c->r[2]+0xFFFFCB28u; c->f[1]=c->ps1[1]=RF32(ea);} // 802106DC
  c->r[5]=c->r[27]|c->r[27]; // 802106E0
  c->r[3]=c->r[1]+0x00000008u; // 802106E4
  c->r[4]=c->r[1]+0x0000000Cu; // 802106E8
  c->lr=0x802106F0u; f_801A76E0(c); // 802106EC
  cmps(c,0,(int32_t)c->r[3],0); // 802106F0
  if (crb(c,2)) { goto L_80210714; } // 802106F4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 802106F8
  c->r[3]=c->r[1]+0x00000008u; // 802106FC
  c->r[4]=0u+0xFFFFFFFFu; // 80210700
  c->r[31]=R32(c->r[5]+0x00000058u); // 80210704
  c->lr=0x8021070Cu; f_801A7684(c); // 80210708
  c->r[3]=c->r[31]|c->r[31]; // 8021070C
  goto L_80210738; // 80210710
L_80210714:;
  c->r[3]=c->r[1]+0x00000008u; // 80210714
  c->r[4]=0u+0xFFFFFFFFu; // 80210718
  c->lr=0x80210720u; f_801A7684(c); // 8021071C
L_80210720:;
  c->r[29]=c->r[29]+0x00000001u; // 80210720
  c->r[31]=c->r[31]+0x00000014u; // 80210724
L_80210728:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80210728
  cmpu(c,0,c->r[29],c->r[0]); // 8021072C
  if (crb(c,0)) { IRQCHK(c); goto L_802106B4; } // 80210730
  c->r[3]=R32(c->r[26]+0x00001428u); // 80210734
L_80210738:;
  c->r[11]=c->r[1]+0x00000040u; // 80210738
  c->lr=0x80210740u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021073C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80210740
  c->lr=c->r[0]; // 80210744
  c->r[1]=c->r[1]+0x00000040u; // 80210748
  return; // 8021074C
}

// fn_80210750
void f_80210750(Ctx* __restrict c) {
  trace_call(0x80210750u);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210750
  c->r[0]=c->lr; // 80210754
  W32(c->r[1]+0x00000154u,c->r[0]); // 80210758
  c->r[11]=c->r[1]+0x00000150u; // 8021075C
  c->lr=0x80210764u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80210760
  c->r[28]=c->r[4]|c->r[4]; // 80210764
  c->r[27]=c->r[3]|c->r[3]; // 80210768
  c->r[4]=c->r[3]+0x00001415u; // 8021076C
  c->lr=0x80210774u; f_802109C4(c); // 80210770
  c->r[4]=c->r[28]|c->r[28]; // 80210774
  c->r[3]=c->r[27]+0x00001415u; // 80210778
  c->lr=0x80210780u; f_802933D8(c); // 8021077C
  c->r[0]=0u+0x00000001u; // 80210780
  c->r[4]=0u+0x80410000u; // 80210784
  W32(c->r[27]+0x00001428u,c->r[0]); // 80210788
  c->r[4]=c->r[4]+0xFFFFB73Du; // 8021078C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80210790
  c->r[12]=R32(c->r[3]+0x00000000u); // 80210794
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 80210798
  c->ctr=c->r[12]; // 8021079C
  if (true) { c->lr=0x802107A4u; dispatch(c,c->ctr); } // 802107A0
  cmps(c,0,(int32_t)c->r[3],0); // 802107A4
  if (crb(c,2)) { goto L_802109AC; } // 802107A8
  c->r[4]=c->r[3]|c->r[3]; // 802107AC
  c->r[3]=c->r[1]+0x00000024u; // 802107B0
  c->lr=0x802107B8u; f_80172DDC(c); // 802107B4
  c->r[3]=c->r[1]+0x00000024u; // 802107B8
  c->r[4]=c->r[13]+0xFFFF8B11u; // 802107BC
  c->lr=0x802107C4u; f_80172EC8(c); // 802107C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802107C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 802107C8
  W32(c->r[1]+0x00000010u,c->r[3]); // 802107CC
  c->r[3]=c->r[1]+0x00000010u; // 802107D0
  W32(c->r[1]+0x00000014u,c->r[4]); // 802107D4
  c->lr=0x802107DCu; f_80173004(c); // 802107D8
  cmps(c,0,(int32_t)c->r[3],0); // 802107DC
  if (crb(c,2)) { goto L_802109AC; } // 802107E0
  c->r[31]=0u+0x00000000u; // 802107E4
  goto L_8021099C; // 802107E8
L_802107EC:;
  c->r[5]=c->r[31]|c->r[31]; // 802107EC
  c->r[3]=c->r[1]+0x00000018u; // 802107F0
  c->r[4]=c->r[1]+0x00000010u; // 802107F4
  c->lr=0x802107FCu; f_80173034(c); // 802107F8
  c->r[3]=c->r[1]+0x00000018u; // 802107FC
  c->r[4]=0u+0x00000000u; // 80210800
  c->lr=0x80210808u; f_80173520(c); // 80210804
  c->r[4]=c->r[27]+0x00001415u; // 80210808
  c->lr=0x80210810u; f_80293554(c); // 8021080C
  cmps(c,0,(int32_t)c->r[3],0); // 80210810
  if (!crb(c,2)) { goto L_80210998; } // 80210814
  c->r[3]=c->r[1]+0x00000018u; // 80210818
  c->r[4]=0u+0x00000001u; // 8021081C
  c->lr=0x80210824u; f_801733E8(c); // 80210820
  W32(c->r[27]+0x00001428u,c->r[3]); // 80210824
  c->r[3]=c->r[1]+0x00000018u; // 80210828
  c->r[4]=0u+0x00000002u; // 8021082C
  c->lr=0x80210834u; f_801733E8(c); // 80210830
  c->r[5]=0u+0x80460000u; // 80210834
  c->r[4]=c->r[3]|c->r[3]; // 80210838
  c->r[3]=c->r[5]+0xFFFFD4F0u; // 8021083C
  c->lr=0x80210844u; f_8004B7A0(c); // 80210840
  c->r[3]=c->r[1]+0x00000018u; // 80210844
  c->r[4]=0u+0x00000003u; // 80210848
  c->lr=0x80210850u; f_80173520(c); // 8021084C
  c->r[31]=c->r[3]|c->r[3]; // 80210850
  c->r[3]=c->r[1]+0x00000018u; // 80210854
  c->r[4]=0u+0x00000004u; // 80210858
  c->lr=0x80210860u; f_80173520(c); // 8021085C
  c->r[30]=c->r[3]|c->r[3]; // 80210860
  c->r[3]=c->r[1]+0x00000018u; // 80210864
  c->r[4]=0u+0x00000005u; // 80210868
  c->lr=0x80210870u; f_80173520(c); // 8021086C
  c->r[29]=c->r[3]|c->r[3]; // 80210870
  c->r[3]=c->r[1]+0x00000018u; // 80210874
  c->r[4]=0u+0x00000006u; // 80210878
  c->lr=0x80210880u; f_80173520(c); // 8021087C
  cmps(c,0,(int32_t)c->r[31],0); // 80210880
  c->r[28]=c->r[3]|c->r[3]; // 80210884
  if (crb(c,2)) { goto L_802108C8; } // 80210888
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021088C
  c->r[3]=c->r[31]|c->r[31]; // 80210890
  c->r[4]=0u+0xFFFFFFFFu; // 80210894
  c->lr=0x8021089Cu; f_80048B94(c); // 80210898
  cmps(c,0,(int32_t)c->r[3],0); // 8021089C
  if (!crb(c,1)) { goto L_802108C8; } // 802108A0
  c->r[5]=c->r[3]|c->r[3]; // 802108A4
  c->r[3]=c->r[1]+0x00000030u; // 802108A8
  c->r[4]=c->r[13]+0xFFFF8B0Eu; // 802108AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802108B0
  c->lr=0x802108B8u; f_80291CC4(c); // 802108B4
  c->r[3]=c->r[27]+0x000074DCu; // 802108B8
  c->r[4]=c->r[27]+0x00001415u; // 802108BC
  c->r[5]=c->r[1]+0x00000030u; // 802108C0
  c->lr=0x802108C8u; f_801DBD04(c); // 802108C4
L_802108C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 802108C8
  if (crb(c,2)) { goto L_8021090C; } // 802108CC
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802108D0
  c->r[3]=c->r[30]|c->r[30]; // 802108D4
  c->r[4]=0u+0xFFFFFFFFu; // 802108D8
  c->lr=0x802108E0u; f_80048B94(c); // 802108DC
  cmps(c,0,(int32_t)c->r[3],0); // 802108E0
  if (!crb(c,1)) { goto L_8021090C; } // 802108E4
  c->r[5]=c->r[3]|c->r[3]; // 802108E8
  c->r[3]=c->r[1]+0x00000030u; // 802108EC
  c->r[4]=c->r[13]+0xFFFF8B0Bu; // 802108F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802108F4
  c->lr=0x802108FCu; f_80291CC4(c); // 802108F8
  c->r[3]=c->r[27]+0x000074DCu; // 802108FC
  c->r[4]=c->r[27]+0x00001415u; // 80210900
  c->r[5]=c->r[1]+0x00000030u; // 80210904
  c->lr=0x8021090Cu; f_801DBD04(c); // 80210908
L_8021090C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8021090C
  if (crb(c,2)) { goto L_80210950; } // 80210910
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80210914
  c->r[3]=c->r[29]|c->r[29]; // 80210918
  c->r[4]=0u+0xFFFFFFFFu; // 8021091C
  c->lr=0x80210924u; f_80048B94(c); // 80210920
  cmps(c,0,(int32_t)c->r[3],0); // 80210924
  if (!crb(c,1)) { goto L_80210950; } // 80210928
  c->r[5]=c->r[3]|c->r[3]; // 8021092C
  c->r[3]=c->r[1]+0x00000030u; // 80210930
  c->r[4]=c->r[13]+0xFFFF8B08u; // 80210934
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80210938
  c->lr=0x80210940u; f_80291CC4(c); // 8021093C
  c->r[3]=c->r[27]+0x000074DCu; // 80210940
  c->r[4]=c->r[27]+0x00001415u; // 80210944
  c->r[5]=c->r[1]+0x00000030u; // 80210948
  c->lr=0x80210950u; f_801DBD04(c); // 8021094C
L_80210950:;
  cmps(c,0,(int32_t)c->r[28],0); // 80210950
  if (crb(c,2)) { goto L_802109AC; } // 80210954
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80210958
  c->r[3]=c->r[28]|c->r[28]; // 8021095C
  c->r[4]=0u+0xFFFFFFFFu; // 80210960
  c->lr=0x80210968u; f_80048B94(c); // 80210964
  cmps(c,0,(int32_t)c->r[3],0); // 80210968
  if (!crb(c,1)) { goto L_802109AC; } // 8021096C
  c->r[5]=c->r[3]|c->r[3]; // 80210970
  c->r[3]=c->r[1]+0x00000030u; // 80210974
  c->r[4]=c->r[13]+0xFFFF8B05u; // 80210978
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021097C
  c->lr=0x80210984u; f_80291CC4(c); // 80210980
  c->r[3]=c->r[27]+0x000074DCu; // 80210984
  c->r[4]=c->r[27]+0x00001415u; // 80210988
  c->r[5]=c->r[1]+0x00000030u; // 8021098C
  c->lr=0x80210994u; f_801DBD04(c); // 80210990
  goto L_802109AC; // 80210994
L_80210998:;
  c->r[31]=c->r[31]+0x00000001u; // 80210998
L_8021099C:;
  c->r[3]=c->r[1]+0x00000010u; // 8021099C
  c->lr=0x802109A4u; f_80173018(c); // 802109A0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 802109A4
  if (crb(c,0)) { IRQCHK(c); goto L_802107EC; } // 802109A8
L_802109AC:;
  c->r[11]=c->r[1]+0x00000150u; // 802109AC
  c->lr=0x802109B4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802109B0
  c->r[0]=R32(c->r[1]+0x00000154u); // 802109B4
  c->lr=c->r[0]; // 802109B8
  c->r[1]=c->r[1]+0x00000150u; // 802109BC
  return; // 802109C0
}

// fn_802109C4
void f_802109C4(Ctx* __restrict c) {
  trace_call(0x802109C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802109C4
  c->r[0]=c->lr; // 802109C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802109CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802109D0
  c->r[31]=c->r[3]|c->r[3]; // 802109D4
  c->r[3]=c->r[3]+0x000074DCu; // 802109D8
  c->lr=0x802109E0u; f_801DC114(c); // 802109DC
  goto L_802109F8; // 802109E0
L_802109E4:;
  c->lr=0x802109E8u; f_80295EAC(c); // 802109E4
  c->r[4]=0u+0x0000000Au; // 802109E8
  c->lr=0x802109F0u; f_80048C54(c); // 802109EC
  c->r[3]=c->r[31]+0x000074DCu; // 802109F0
  c->lr=0x802109F8u; f_801DC1A4(c); // 802109F4
L_802109F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802109F8
  if (!crb(c,2)) { IRQCHK(c); goto L_802109E4; } // 802109FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80210A00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80210A04
  c->lr=c->r[0]; // 80210A08
  c->r[1]=c->r[1]+0x00000010u; // 80210A0C
  return; // 80210A10
}

// fn_80210A14
void f_80210A14(Ctx* __restrict c) {
  trace_call(0x80210A14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210A14
  c->r[0]=c->lr; // 80210A18
  W32(c->r[1]+0x00000034u,c->r[0]); // 80210A1C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80210A20
  c->r[30]=c->r[3]|c->r[3]; // 80210A24
  c->r[31]=c->r[4]|c->r[4]; // 80210A28
  c->r[25]=0u+0x00000000u; // 80210A2C
  c->r[27]=0u+0x80450000u; // 80210A30
  c->r[28]=0u+0xFFFFFFFFu; // 80210A34
L_80210A38:;
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 80210A38
  c->r[23]=0u+0x00000000u; // 80210A3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1284); // 80210A40
  c->r[29]=0u+0x00000000u; // 80210A44
  c->r[3]=c->r[30]+c->r[0]; // 80210A48
  c->r[24]=c->r[3]+0x00000004u; // 80210A4C
  goto L_80210A9C; // 80210A50
L_80210A54:;
  cmps(c,0,(int32_t)c->r[31],0); // 80210A54
  if (crb(c,2)) { goto L_80210A74; } // 80210A58
  c->r[3]=c->r[24]+c->r[29]; // 80210A5C
  c->r[4]=c->r[31]|c->r[31]; // 80210A60
  c->r[3]=c->r[3]+0x00000004u; // 80210A64
  c->lr=0x80210A6Cu; f_80293554(c); // 80210A68
  cmps(c,0,(int32_t)c->r[3],0); // 80210A6C
  if (!crb(c,2)) { goto L_80210A94; } // 80210A70
L_80210A74:;
  c->r[26]=c->r[24]+c->r[29]; // 80210A74
  c->r[0]=R32(c->r[26]+0x00000014u); // 80210A78
  cmps(c,0,(int32_t)c->r[0],0); // 80210A7C
  if (crb(c,0)) { goto L_80210A94; } // 80210A80
  c->r[3]=c->r[27]+0xFFFFC69Cu; // 80210A84
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80210A88
  c->lr=0x80210A90u; f_80045A4C(c); // 80210A8C
  W32(c->r[26]+0x00000014u,c->r[28]); // 80210A90
L_80210A94:;
  c->r[23]=c->r[23]+0x00000001u; // 80210A94
  c->r[29]=c->r[29]+0x00000014u; // 80210A98
L_80210A9C:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80210A9C
  cmpu(c,0,c->r[23],c->r[0]); // 80210AA0
  if (crb(c,0)) { IRQCHK(c); goto L_80210A54; } // 80210AA4
  c->r[25]=c->r[25]+0x00000001u; // 80210AA8
  cmpu(c,0,c->r[25],0x00000001u); // 80210AAC
  if (!crb(c,1)) { IRQCHK(c); goto L_80210A38; } // 80210AB0
  c->r[23]=c->r[30]+0x00000A0Cu; // 80210AB4
  c->r[24]=0u+0x00000000u; // 80210AB8
  c->r[29]=0u+0x00000000u; // 80210ABC
  c->r[28]=0u+0xFFFFFFFFu; // 80210AC0
  goto L_80210AF8; // 80210AC4
L_80210AC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80210AC8
  if (crb(c,2)) { goto L_80210AE8; } // 80210ACC
  c->r[3]=c->r[23]+c->r[29]; // 80210AD0
  c->r[4]=c->r[31]|c->r[31]; // 80210AD4
  c->r[3]=c->r[3]+0x00000004u; // 80210AD8
  c->lr=0x80210AE0u; f_80293554(c); // 80210ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80210AE0
  if (!crb(c,2)) { goto L_80210AF0; } // 80210AE4
L_80210AE8:;
  c->r[3]=c->r[23]+c->r[29]; // 80210AE8
  W32(c->r[3]+0x00000014u,c->r[28]); // 80210AEC
L_80210AF0:;
  c->r[24]=c->r[24]+0x00000001u; // 80210AF0
  c->r[29]=c->r[29]+0x00000014u; // 80210AF4
L_80210AF8:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 80210AF8
  cmpu(c,0,c->r[24],c->r[0]); // 80210AFC
  if (crb(c,0)) { IRQCHK(c); goto L_80210AC8; } // 80210B00
  c->r[23]=c->r[30]+0x00000F10u; // 80210B04
  c->r[24]=0u+0x00000000u; // 80210B08
  c->r[29]=0u+0x00000000u; // 80210B0C
  c->r[28]=0u+0xFFFFFFFFu; // 80210B10
  goto L_80210BD8; // 80210B14
L_80210B18:;
  cmps(c,0,(int32_t)c->r[31],0); // 80210B18
  if (crb(c,2)) { goto L_80210B38; } // 80210B1C
  c->r[3]=c->r[23]+c->r[29]; // 80210B20
  c->r[4]=c->r[31]|c->r[31]; // 80210B24
  c->r[3]=c->r[3]+0x00000004u; // 80210B28
  c->lr=0x80210B30u; f_80293554(c); // 80210B2C
  cmps(c,0,(int32_t)c->r[3],0); // 80210B30
  if (!crb(c,2)) { goto L_80210BD0; } // 80210B34
L_80210B38:;
  c->r[3]=c->r[23]+c->r[29]; // 80210B38
  cmps(c,0,(int32_t)c->r[31],0); // 80210B3C
  W32(c->r[3]+0x00000014u,c->r[28]); // 80210B40
  if (!crb(c,2)) { goto L_80210BA4; } // 80210B44
  c->r[25]=0u+0x00000000u; // 80210B48
  goto L_80210B90; // 80210B4C
L_80210B50:;
  c->r[4]=c->r[25]|c->r[25]; // 80210B50
  c->r[3]=c->r[30]+0x0000142Cu; // 80210B54
  c->lr=0x80210B5Cu; f_801DC1F4(c); // 80210B58
  c->r[26]=c->r[3]|c->r[3]; // 80210B5C
  c->r[3]=c->r[30]|c->r[30]; // 80210B60
  c->r[4]=c->r[26]|c->r[26]; // 80210B64
  c->lr=0x80210B6Cu; f_80210BF8(c); // 80210B68
  c->r[4]=c->r[26]|c->r[26]; // 80210B6C
  c->r[3]=c->r[30]+0x0000142Cu; // 80210B70
  c->r[5]=0u+0x00000000u; // 80210B74
  c->lr=0x80210B7Cu; f_801DBEDC(c); // 80210B78
  c->r[4]=c->r[26]|c->r[26]; // 80210B7C
  c->r[3]=c->r[30]+0x00004484u; // 80210B80
  c->r[5]=0u+0x00000000u; // 80210B84
  c->lr=0x80210B8Cu; f_801DBEDC(c); // 80210B88
  c->r[25]=c->r[25]+0x00000001u; // 80210B8C
L_80210B90:;
  c->r[3]=c->r[30]+0x0000142Cu; // 80210B90
  c->lr=0x80210B98u; f_801DC1D0(c); // 80210B94
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 80210B98
  if (crb(c,0)) { IRQCHK(c); goto L_80210B50; } // 80210B9C
  goto L_80210BD0; // 80210BA0
L_80210BA4:;
  c->r[3]=c->r[30]|c->r[30]; // 80210BA4
  c->r[4]=c->r[31]|c->r[31]; // 80210BA8
  c->lr=0x80210BB0u; f_80210BF8(c); // 80210BAC
  c->r[4]=c->r[31]|c->r[31]; // 80210BB0
  c->r[3]=c->r[30]+0x0000142Cu; // 80210BB4
  c->r[5]=0u+0x00000000u; // 80210BB8
  c->lr=0x80210BC0u; f_801DBEDC(c); // 80210BBC
  c->r[4]=c->r[31]|c->r[31]; // 80210BC0
  c->r[3]=c->r[30]+0x00004484u; // 80210BC4
  c->r[5]=0u+0x00000000u; // 80210BC8
  c->lr=0x80210BD0u; f_801DBEDC(c); // 80210BCC
L_80210BD0:;
  c->r[24]=c->r[24]+0x00000001u; // 80210BD0
  c->r[29]=c->r[29]+0x00000014u; // 80210BD4
L_80210BD8:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 80210BD8
  cmpu(c,0,c->r[24],c->r[0]); // 80210BDC
  if (crb(c,0)) { IRQCHK(c); goto L_80210B18; } // 80210BE0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80210BE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80210BE8
  c->lr=c->r[0]; // 80210BEC
  c->r[1]=c->r[1]+0x00000030u; // 80210BF0
  return; // 80210BF4
}

// fn_80210BF8
void f_80210BF8(Ctx* __restrict c) {
  trace_call(0x80210BF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210BF8
  c->r[0]=c->lr; // 80210BFC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80210C00
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80210C04
  c->r[30]=c->r[3]|c->r[3]; // 80210C08
  c->r[3]=c->r[3]+0x0000142Cu; // 80210C0C
  c->lr=0x80210C14u; f_801DC114(c); // 80210C10
  c->r[31]=0u+0x80410000u; // 80210C14
  goto L_80210C50; // 80210C18
L_80210C1C:;
  c->r[4]=c->r[31]+0xFFFFB72Eu; // 80210C1C
  c->r[5]=c->r[1]+0x00000018u; // 80210C20
  c->r[6]=c->r[1]+0x00000014u; // 80210C24
  c->r[7]=c->r[1]+0x00000010u; // 80210C28
  c->r[8]=c->r[1]+0x0000000Cu; // 80210C2C
  c->r[9]=c->r[1]+0x00000008u; // 80210C30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80210C34
  c->lr=0x80210C3Cu; f_80293260(c); // 80210C38
  c->r[3]=R32(c->r[1]+0x00000014u); // 80210C3C
  c->r[4]=0u+0x0000000Au; // 80210C40
  c->lr=0x80210C48u; f_80048C54(c); // 80210C44
  c->r[3]=c->r[30]+0x0000142Cu; // 80210C48
  c->lr=0x80210C50u; f_801DC1A4(c); // 80210C4C
L_80210C50:;
  cmps(c,0,(int32_t)c->r[3],0); // 80210C50
  if (!crb(c,2)) { IRQCHK(c); goto L_80210C1C; } // 80210C54
  c->r[3]=c->r[30]+0x0000142Cu; // 80210C58
  c->lr=0x80210C60u; f_801DC1CC(c); // 80210C5C
  {uint32_t ea=c->r[1]+0x00000038u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80210C60
  c->r[0]=R32(c->r[1]+0x00000044u); // 80210C64
  c->lr=c->r[0]; // 80210C68
  c->r[1]=c->r[1]+0x00000040u; // 80210C6C
  return; // 80210C70
}

// fn_80210C74
void f_80210C74(Ctx* __restrict c) {
  trace_call(0x80210C74u);
  {uint32_t ea=c->r[1]+0xFFFFFBF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80210C74
  c->r[0]=c->lr; // 80210C78
  W32(c->r[1]+0x00000414u,c->r[0]); // 80210C7C
  {uint32_t ea=c->r[1]+0x00000400u; WF64(ea,c->f[31]);} // 80210C80
  {uint32_t ea=c->r[1]+0x00000408u; psq_store(c,31,ea,0,0);} // 80210C84
  c->r[11]=c->r[1]+0x00000400u; // 80210C88
  c->lr=0x80210C90u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80210C8C
  c->r[30]=c->r[3]|c->r[3]; // 80210C90
  c->r[31]=c->r[4]|c->r[4]; // 80210C94
  c->r[21]=c->r[1]+0x0000017Cu; // 80210C98
  c->r[16]=c->r[1]+0x00000188u; // 80210C9C
  c->r[17]=0u+0x00000000u; // 80210CA0
  c->r[20]=0u+0x80450000u; // 80210CA4
L_80210CA8:;
  c->r[0]=rotl(c->r[17],0)&0x000000FFu; // 80210CA8
  c->r[19]=0u+0x00000000u; // 80210CAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1284); // 80210CB0
  c->r[15]=0u+0x00000000u; // 80210CB4
  c->r[3]=c->r[30]+c->r[0]; // 80210CB8
  c->r[18]=c->r[3]+0x00000004u; // 80210CBC
  goto L_80210E88; // 80210CC0
L_80210CC4:;
  c->r[3]=c->r[18]+c->r[15]; // 80210CC4
  c->r[4]=c->r[31]|c->r[31]; // 80210CC8
  c->r[3]=c->r[3]+0x00000004u; // 80210CCC
  c->lr=0x80210CD4u; f_80293554(c); // 80210CD0
  cmps(c,0,(int32_t)c->r[3],0); // 80210CD4
  if (!crb(c,2)) { goto L_80210E80; } // 80210CD8
  c->r[23]=c->r[18]+c->r[15]; // 80210CDC
  c->r[25]=0u+0x00000000u; // 80210CE0
  c->r[24]=R32(c->r[23]+0x00000010u); // 80210CE4
  goto L_80210E60; // 80210CE8
L_80210CEC:;
  c->r[3]=c->r[24]|c->r[24]; // 80210CEC
  c->r[4]=c->r[25]|c->r[25]; // 80210CF0
  c->lr=0x80210CF8u; f_80211D04(c); // 80210CF4
  c->r[22]=c->r[3]|c->r[3]; // 80210CF8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210CFC
  {uint32_t ea=c->r[22]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210D00
  c->r[3]=c->r[1]+0x000001DCu; // 80210D04
  c->f[1]=-c->f[1]; // 80210D08
  {uint32_t ea=c->r[2]+0xFFFFCB30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210D0C
  c->f[3]=-c->f[0]; // 80210D10
  c->lr=0x80210D18u; f_80065358(c); // 80210D14
  {uint32_t ea=c->r[22]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210D18
  c->r[3]=c->r[1]+0x000001E8u; // 80210D1C
  {uint32_t ea=c->r[2]+0xFFFFCB30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210D20
  c->f[1]=-c->f[0]; // 80210D24
  {uint32_t ea=c->r[22]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80210D28
  c->lr=0x80210D30u; f_80065358(c); // 80210D2C
  {uint32_t ea=c->r[22]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210D30
  c->r[3]=c->r[1]+0x000001F4u; // 80210D34
  {uint32_t ea=c->r[2]+0xFFFFCB30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210D38
  {uint32_t ea=c->r[22]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 80210D3C
  c->lr=0x80210D44u; f_80065358(c); // 80210D40
  {uint32_t ea=c->r[22]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210D44
  c->r[3]=c->r[1]+0x00000200u; // 80210D48
  {uint32_t ea=c->r[22]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210D4C
  c->f[3]=-c->f[0]; // 80210D50
  {uint32_t ea=c->r[2]+0xFFFFCB30u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210D54
  c->lr=0x80210D5Cu; f_80065358(c); // 80210D58
  c->r[3]=c->r[1]+0x000001DCu; // 80210D5C
  c->r[4]=c->r[22]+0x00000008u; // 80210D60
  c->r[5]=c->r[22]+0x00000014u; // 80210D64
  c->lr=0x80210D6Cu; f_801A795C(c); // 80210D68
  c->r[0]=R32(c->r[22]+0x00000000u); // 80210D6C
  c->r[3]=c->r[1]+0x00000128u; // 80210D70
  c->r[27]=R32(c->r[22]+0x00000058u); // 80210D74
  c->r[4]=c->r[1]+0x000001E8u; // 80210D78
  c->r[26]=R8(c->r[30]+0x00001414u); // 80210D7C
  c->r[22]=rotl(c->r[0],0)&0x000000FFu; // 80210D80
  c->r[5]=c->r[1]+0x000001DCu; // 80210D84
  c->lr=0x80210D8Cu; f_8007B8A4(c); // 80210D88
  c->r[3]=c->r[1]+0x00000194u; // 80210D8C
  c->r[4]=c->r[1]+0x00000128u; // 80210D90
  c->lr=0x80210D98u; f_8003F468(c); // 80210D94
  c->r[3]=c->r[1]+0x0000011Cu; // 80210D98
  c->r[4]=c->r[1]+0x000001F4u; // 80210D9C
  c->r[5]=c->r[1]+0x000001E8u; // 80210DA0
  c->lr=0x80210DA8u; f_8007B8A4(c); // 80210DA4
  c->r[3]=c->r[1]+0x000001A0u; // 80210DA8
  c->r[4]=c->r[1]+0x0000011Cu; // 80210DAC
  c->lr=0x80210DB4u; f_8003F468(c); // 80210DB0
  c->r[3]=c->r[1]+0x00000194u; // 80210DB4
  c->r[4]=c->r[1]+0x000001A0u; // 80210DB8
  c->r[5]=c->r[1]+0x00000110u; // 80210DBC
  c->lr=0x80210DC4u; f_80265810(c); // 80210DC0
  c->r[3]=c->r[1]+0x0000017Cu; // 80210DC4
  c->r[4]=c->r[1]+0x00000110u; // 80210DC8
  c->lr=0x80210DD0u; f_8003F468(c); // 80210DCC
  c->r[3]=c->r[1]+0x000001A0u; // 80210DD0
  c->r[4]=c->r[1]+0x00000194u; // 80210DD4
  c->r[5]=c->r[1]+0x00000104u; // 80210DD8
  c->lr=0x80210DE0u; f_80265810(c); // 80210DDC
  c->r[3]=c->r[1]+0x00000188u; // 80210DE0
  c->r[4]=c->r[1]+0x00000104u; // 80210DE4
  c->lr=0x80210DECu; f_8003F468(c); // 80210DE8
  c->r[3]=c->r[1]+0x0000017Cu; // 80210DEC
  c->r[4]=c->r[3]|c->r[3]; // 80210DF0
  c->lr=0x80210DF8u; f_80265750(c); // 80210DF4
  c->r[3]=c->r[1]+0x00000188u; // 80210DF8
  c->r[4]=c->r[3]|c->r[3]; // 80210DFC
  c->lr=0x80210E04u; f_80265750(c); // 80210E00
  W32(c->r[1]+0x00000008u,c->r[21]); // 80210E04
  c->r[5]=c->r[22]|c->r[22]; // 80210E08
  c->r[6]=c->r[26]|c->r[26]; // 80210E0C
  c->r[3]=c->r[20]+0xFFFFC69Cu; // 80210E10
  W32(c->r[1]+0x0000000Cu,c->r[27]); // 80210E14
  c->r[4]=rotl(c->r[17],0)&0x000000FFu; // 80210E18
  c->r[7]=c->r[1]+0x000001DCu; // 80210E1C
  c->r[8]=c->r[1]+0x000001E8u; // 80210E20
  c->r[9]=c->r[1]+0x000001F4u; // 80210E24
  c->r[10]=c->r[1]+0x00000200u; // 80210E28
  c->lr=0x80210E30u; f_80045394(c); // 80210E2C
  W32(c->r[1]+0x00000008u,c->r[16]); // 80210E30
  c->r[5]=c->r[22]|c->r[22]; // 80210E34
  c->r[6]=c->r[26]|c->r[26]; // 80210E38
  c->r[3]=c->r[20]+0xFFFFC69Cu; // 80210E3C
  W32(c->r[1]+0x0000000Cu,c->r[27]); // 80210E40
  c->r[4]=rotl(c->r[17],0)&0x000000FFu; // 80210E44
  c->r[7]=c->r[1]+0x000001DCu; // 80210E48
  c->r[8]=c->r[1]+0x00000200u; // 80210E4C
  c->r[9]=c->r[1]+0x000001F4u; // 80210E50
  c->r[10]=c->r[1]+0x000001E8u; // 80210E54
  c->lr=0x80210E5Cu; f_80045394(c); // 80210E58
  c->r[25]=c->r[25]+0x00000001u; // 80210E5C
L_80210E60:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80210E60
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 80210E64
  if (crb(c,0)) { IRQCHK(c); goto L_80210CEC; } // 80210E68
  c->r[0]=R8(c->r[30]+0x00001414u); // 80210E6C
  W32(c->r[23]+0x00000014u,c->r[0]); // 80210E70
  c->r[3]=R8(c->r[30]+0x00001414u); // 80210E74
  c->r[0]=c->r[3]+0x00000001u; // 80210E78
  W8(c->r[30]+0x00001414u,c->r[0]); // 80210E7C
L_80210E80:;
  c->r[19]=c->r[19]+0x00000001u; // 80210E80
  c->r[15]=c->r[15]+0x00000014u; // 80210E84
L_80210E88:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 80210E88
  cmpu(c,0,c->r[19],c->r[0]); // 80210E8C
  if (crb(c,0)) { IRQCHK(c); goto L_80210CC4; } // 80210E90
  c->r[17]=c->r[17]+0x00000001u; // 80210E94
  cmpu(c,0,c->r[17],0x00000001u); // 80210E98
  if (!crb(c,1)) { IRQCHK(c); goto L_80210CA8; } // 80210E9C
  c->r[17]=c->r[30]+0x00000A0Cu; // 80210EA0
  c->r[18]=0u+0x00000000u; // 80210EA4
  c->r[15]=0u+0x00000000u; // 80210EA8
  c->r[16]=0u+0x00000001u; // 80210EAC
  goto L_80210EDC; // 80210EB0
L_80210EB4:;
  c->r[3]=c->r[17]+c->r[15]; // 80210EB4
  c->r[4]=c->r[31]|c->r[31]; // 80210EB8
  c->r[3]=c->r[3]+0x00000004u; // 80210EBC
  c->lr=0x80210EC4u; f_80293554(c); // 80210EC0
  cmps(c,0,(int32_t)c->r[3],0); // 80210EC4
  if (!crb(c,2)) { goto L_80210ED4; } // 80210EC8
  c->r[3]=c->r[17]+c->r[15]; // 80210ECC
  W32(c->r[3]+0x00000014u,c->r[16]); // 80210ED0
L_80210ED4:;
  c->r[18]=c->r[18]+0x00000001u; // 80210ED4
  c->r[15]=c->r[15]+0x00000014u; // 80210ED8
L_80210EDC:;
  c->r[0]=R32(c->r[17]+0x00000000u); // 80210EDC
  cmpu(c,0,c->r[18],c->r[0]); // 80210EE0
  if (crb(c,0)) { IRQCHK(c); goto L_80210EB4; } // 80210EE4
  {uint32_t ea=c->r[2]+0xFFFFCB34u; c->f[0]=c->ps1[0]=RF32(ea);} // 80210EE8
  c->r[3]=c->r[30]+0x00010000u; // 80210EEC
  c->r[19]=c->r[30]+0x00000F10u; // 80210EF0
  c->r[20]=0u+0x00000000u; // 80210EF4
  {uint32_t ea=c->r[3]+0xFFFFA548u; WF32(ea,c->f[0]);} // 80210EF8
  c->r[15]=0u+0x00000000u; // 80210EFC
  c->r[16]=0u+0x80410000u; // 80210F00
  c->r[18]=0u+0x00000001u; // 80210F04
  goto L_8021101C; // 80210F08
L_80210F0C:;
  c->r[3]=c->r[19]+c->r[15]; // 80210F0C
  c->r[4]=c->r[31]|c->r[31]; // 80210F10
  c->r[3]=c->r[3]+0x00000004u; // 80210F14
  c->lr=0x80210F1Cu; f_80293554(c); // 80210F18
  cmps(c,0,(int32_t)c->r[3],0); // 80210F1C
  if (!crb(c,2)) { goto L_80211014; } // 80210F20
  c->r[3]=c->r[19]+c->r[15]; // 80210F24
  c->r[22]=0u+0x00000000u; // 80210F28
  W32(c->r[3]+0x00000014u,c->r[18]); // 80210F2C
  c->r[21]=R32(c->r[3]+0x00000010u); // 80210F30
  goto L_80211008; // 80210F34
L_80210F38:;
  c->r[3]=c->r[21]|c->r[21]; // 80210F38
  c->r[4]=c->r[22]|c->r[22]; // 80210F3C
  c->lr=0x80210F44u; f_80211D04(c); // 80210F40
  c->r[23]=R32(c->r[3]+0x00000058u); // 80210F44
  c->r[17]=c->r[3]|c->r[3]; // 80210F48
  c->r[24]=R32(c->r[3]+0x0000005Cu); // 80210F4C
  c->r[25]=0u+0x00000000u; // 80210F50
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80210F54
  goto L_80210FF0; // 80210F58
L_80210F5C:;
  c->r[4]=c->r[30]+0x00010000u; // 80210F5C
  c->r[5]=c->r[25]|c->r[25]; // 80210F60
  c->r[3]=c->r[1]+0x00000140u; // 80210F64
  c->r[4]=c->r[4]+0xFFFFA540u; // 80210F68
  c->lr=0x80210F70u; f_80173034(c); // 80210F6C
  c->r[3]=c->r[1]+0x00000140u; // 80210F70
  c->r[4]=0u+0x00000000u; // 80210F74
  c->lr=0x80210F7Cu; f_801733E8(c); // 80210F78
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[3]); // 80210F7C
  if (!crb(c,2)) { goto L_80210FEC; } // 80210F80
  c->r[3]=c->r[1]+0x00000140u; // 80210F84
  c->r[4]=0u+0x00000001u; // 80210F88
  c->lr=0x80210F90u; f_80173520(c); // 80210F8C
  cmps(c,0,(int32_t)c->r[3],0); // 80210F90
  c->r[23]=c->r[3]|c->r[3]; // 80210F94
  if (crb(c,2)) { goto L_80211004; } // 80210F98
  {uint32_t ea=c->r[17]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210F9C
  c->r[3]=c->r[1]+0x00000134u; // 80210FA0
  {uint32_t ea=c->r[17]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80210FA4
  {uint32_t ea=c->r[17]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 80210FA8
  c->lr=0x80210FB0u; f_800521A0(c); // 80210FAC
  c->f[4]=c->f[31]; // 80210FB0
  {uint32_t ea=c->r[1]+0x00000134u; c->f[1]=c->ps1[1]=RF32(ea);} // 80210FB4
  {uint32_t ea=c->r[1]+0x00000138u; c->f[2]=c->ps1[2]=RF32(ea);} // 80210FB8
  c->r[5]=c->r[23]|c->r[23]; // 80210FBC
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80210FC0
  c->r[6]=c->r[24]|c->r[24]; // 80210FC4
  c->r[3]=c->r[1]+0x000002B4u; // 80210FC8
  c->r[4]=c->r[16]+0xFFFFB71Cu; // 80210FCC
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80210FD0
  c->lr=0x80210FD8u; f_80291CC4(c); // 80210FD4
  c->r[4]=c->r[31]|c->r[31]; // 80210FD8
  c->r[3]=c->r[30]+0x00004484u; // 80210FDC
  c->r[5]=c->r[1]+0x000002B4u; // 80210FE0
  c->lr=0x80210FE8u; f_801DBD04(c); // 80210FE4
  goto L_80211004; // 80210FE8
L_80210FEC:;
  c->r[25]=c->r[25]+0x00000001u; // 80210FEC
L_80210FF0:;
  c->r[3]=c->r[30]+0x00010000u; // 80210FF0
  c->r[3]=c->r[3]+0xFFFFA540u; // 80210FF4
  c->lr=0x80210FFCu; f_80173018(c); // 80210FF8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 80210FFC
  if (crb(c,0)) { IRQCHK(c); goto L_80210F5C; } // 80211000
L_80211004:;
  c->r[22]=c->r[22]+0x00000001u; // 80211004
L_80211008:;
  c->r[0]=R32(c->r[21]+0x00000000u); // 80211008
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 8021100C
  if (crb(c,0)) { IRQCHK(c); goto L_80210F38; } // 80211010
L_80211014:;
  c->r[20]=c->r[20]+0x00000001u; // 80211014
  c->r[15]=c->r[15]+0x00000014u; // 80211018
L_8021101C:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 8021101C
  cmpu(c,0,c->r[20],c->r[0]); // 80211020
  if (crb(c,0)) { IRQCHK(c); goto L_80210F0C; } // 80211024
  c->lr=0x8021102Cu; f_8003DA30(c); // 80211028
  c->r[29]=R32(c->r[3]+0x00000004u); // 8021102C
  c->r[21]=c->r[1]+0x0000020Cu; // 80211030
  c->r[24]=c->r[1]+0x00000218u; // 80211034
  c->r[25]=c->r[1]+0x00000224u; // 80211038
  c->r[26]=c->r[1]+0x00000230u; // 8021103C
  c->r[27]=c->r[1]+0x0000023Cu; // 80211040
  c->r[28]=c->r[1]+0x00000248u; // 80211044
  c->r[19]=0u+0x00000001u; // 80211048
  c->r[22]=0u+0x00000000u; // 8021104C
  c->r[23]=0u+0x80450000u; // 80211050
  goto L_80211540; // 80211054
L_80211058:;
  c->r[17]=c->r[29]+0xFFFFFFF8u; // 80211058
  c->r[12]=R32(c->r[17]+0x00000010u); // 8021105C
  c->r[3]=c->r[17]|c->r[17]; // 80211060
  c->r[12]=R32(c->r[12]+0x00000008u); // 80211064
  c->ctr=c->r[12]; // 80211068
  if (true) { c->lr=0x80211070u; dispatch(c,c->ctr); } // 8021106C
  c->r[0]=c->r[4]+0x20000000u; // 80211070
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80211074
  cmpu(c,0,c->r[0],0x00000002u); // 80211078
  W32(c->r[1]+0x00000018u,c->r[3]); // 8021107C
  if (!crb(c,2)) { goto L_8021108C; } // 80211080
  c->r[0]=0u+0x00000001u; // 80211084
  goto L_802110B8; // 80211088
L_8021108C:;
  c->r[4]=rotl(c->r[4],0)&0xFFFF0000u; // 8021108C
  c->r[3]=0u+0x00000000u; // 80211090
  goto L_8021109C; // 80211094
L_80211098:;
  c->r[3]=c->r[3]+0x00000001u; // 80211098
L_8021109C:;
  c->r[5]=((c->r[3])&0x20)?0u:(c->r[19]<<((c->r[3])&31)); // 8021109C
  c->r[0]=rotl(c->r[5],0)&0xE0000000u; // 802110A0
  c->r[0]=(rotl(c->r[5],0)&0x00000002u)|(c->r[0]&~0x00000002u); cr0(c,c->r[0]); // 802110A4
  if (crb(c,2)) { IRQCHK(c); goto L_80211098; } // 802110A8
  c->r[3]=c->r[4]&c->r[5]; // 802110AC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 802110B0
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 802110B4
L_802110B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802110B8
  if (crb(c,2)) { goto L_8021153C; } // 802110BC
  c->r[3]=R32(c->r[17]+0x00000B24u); // 802110C0
  c->r[4]=c->r[31]|c->r[31]; // 802110C4
  c->lr=0x802110CCu; f_80293554(c); // 802110C8
  cmps(c,0,(int32_t)c->r[3],0); // 802110CC
  if (!crb(c,2)) { goto L_8021153C; } // 802110D0
  c->r[3]=R32(c->r[17]+0x000004A8u); // 802110D4
  c->r[4]=c->r[13]+0xFFFF8B00u; // 802110D8
  c->lr=0x802110E0u; f_80293E90(c); // 802110DC
  cmps(c,0,(int32_t)c->r[3],0); // 802110E0
  if (crb(c,2)) { goto L_8021153C; } // 802110E4
  c->r[20]=c->r[30]+0x00010000u; // 802110E8
  c->r[16]=0u+0x00000000u; // 802110EC
  c->r[15]=0u+0x00000000u; // 802110F0
L_802110F4:;
  c->r[3]=c->r[20]+c->r[15]; // 802110F4
  c->r[18]=c->r[3]+0xFFFFA54Cu; // 802110F8
  c->r[3]=c->r[18]|c->r[18]; // 802110FC
  c->lr=0x80211104u; f_8003F1D4(c); // 80211100
  cmps(c,0,(int32_t)c->r[3],0); // 80211104
  if (!crb(c,2)) { goto L_8021152C; } // 80211108
  c->r[5]=R32(c->r[17]+0x00000000u); // 8021110C
  c->r[3]=c->r[18]|c->r[18]; // 80211110
  c->r[0]=R32(c->r[17]+0x00000004u); // 80211114
  c->r[4]=c->r[1]+0x00000010u; // 80211118
  W32(c->r[1]+0x00000010u,c->r[5]); // 8021111C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80211120
  c->lr=0x80211128u; f_80063D44(c); // 80211124
  c->r[6]=c->r[30]+0x00010000u; // 80211128
  c->r[3]=c->r[30]+c->r[15]; // 8021112C
  c->r[0]=R16(c->r[6]+0xFFFFA6CCu); // 80211130
  c->r[18]=c->r[3]+0x00010000u; // 80211134
  c->r[5]=c->r[1]+0x000001ACu; // 80211138
  c->r[4]=0u+0x00000001u; // 8021113C
  W16(c->r[18]+0xFFFFA554u,c->r[0]); // 80211140
  c->r[0]=R16(c->r[6]+0xFFFFA6CEu); // 80211144
  W16(c->r[18]+0xFFFFA556u,c->r[0]); // 80211148
  c->r[3]=R16(c->r[6]+0xFFFFA6CCu); // 8021114C
  c->r[0]=c->r[3]+0x00000001u; // 80211150
  W16(c->r[6]+0xFFFFA6CCu,c->r[0]); // 80211154
  c->r[3]=R32(c->r[17]+0x000009C8u); // 80211158
  c->lr=0x80211160u; f_80380554(c); // 8021115C
  c->r[3]=R32(c->r[17]+0x000009C8u); // 80211160
  c->r[4]=c->r[1]+0x00000164u; // 80211164
  c->lr=0x8021116Cu; f_800A01F8(c); // 80211168
  c->r[20]=R16(c->r[18]+0xFFFFA554u); // 8021116C
  c->r[16]=0u+0x00000000u; // 80211170
  c->r[18]=R16(c->r[18]+0xFFFFA556u); // 80211174
  c->r[15]=0u+0x00000000u; // 80211178
  {uint32_t ea=c->r[1]+0x00000164u; c->f[5]=c->ps1[5]=RF32(ea);} // 8021117C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[4]=c->ps1[4]=RF32(ea);} // 80211180
  {uint32_t ea=c->r[1]+0x0000016Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80211184
  {uint32_t ea=c->r[1]+0x00000178u; c->f[2]=c->ps1[2]=RF32(ea);} // 80211188
  {uint32_t ea=c->r[1]+0x00000170u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021118C
  {uint32_t ea=c->r[1]+0x00000174u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211190
  {uint32_t ea=c->r[1]+0x00000254u; WF32(ea,c->f[5]);} // 80211194
  {uint32_t ea=c->r[1]+0x00000258u; WF32(ea,c->f[4]);} // 80211198
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[3]);} // 8021119C
  {uint32_t ea=c->r[1]+0x00000260u; WF32(ea,c->f[5]);} // 802111A0
  {uint32_t ea=c->r[1]+0x00000264u; WF32(ea,c->f[4]);} // 802111A4
  {uint32_t ea=c->r[1]+0x00000268u; WF32(ea,c->f[2]);} // 802111A8
  {uint32_t ea=c->r[1]+0x0000026Cu; WF32(ea,c->f[1]);} // 802111AC
  {uint32_t ea=c->r[1]+0x00000270u; WF32(ea,c->f[4]);} // 802111B0
  {uint32_t ea=c->r[1]+0x00000274u; WF32(ea,c->f[2]);} // 802111B4
  {uint32_t ea=c->r[1]+0x00000278u; WF32(ea,c->f[1]);} // 802111B8
  {uint32_t ea=c->r[1]+0x0000027Cu; WF32(ea,c->f[4]);} // 802111BC
  {uint32_t ea=c->r[1]+0x00000280u; WF32(ea,c->f[3]);} // 802111C0
  {uint32_t ea=c->r[1]+0x00000284u; WF32(ea,c->f[5]);} // 802111C4
  {uint32_t ea=c->r[1]+0x00000288u; WF32(ea,c->f[0]);} // 802111C8
  {uint32_t ea=c->r[1]+0x0000028Cu; WF32(ea,c->f[3]);} // 802111CC
  {uint32_t ea=c->r[1]+0x00000290u; WF32(ea,c->f[5]);} // 802111D0
  {uint32_t ea=c->r[1]+0x00000294u; WF32(ea,c->f[0]);} // 802111D4
  {uint32_t ea=c->r[1]+0x00000298u; WF32(ea,c->f[2]);} // 802111D8
  {uint32_t ea=c->r[1]+0x0000029Cu; WF32(ea,c->f[1]);} // 802111DC
  {uint32_t ea=c->r[1]+0x000002A0u; WF32(ea,c->f[0]);} // 802111E0
  {uint32_t ea=c->r[1]+0x000002A4u; WF32(ea,c->f[2]);} // 802111E4
  {uint32_t ea=c->r[1]+0x000002A8u; WF32(ea,c->f[1]);} // 802111E8
  {uint32_t ea=c->r[1]+0x000002ACu; WF32(ea,c->f[0]);} // 802111EC
  {uint32_t ea=c->r[1]+0x000002B0u; WF32(ea,c->f[3]);} // 802111F0
L_802111F4:;
  c->r[17]=c->r[1]+0x00000254u; // 802111F4
  c->r[3]=c->r[1]+0x000001ACu; // 802111F8
  c->r[17]=c->r[17]+c->r[15]; // 802111FC
  c->r[5]=c->r[1]+0x000000F8u; // 80211200
  c->r[4]=c->r[17]|c->r[17]; // 80211204
  c->lr=0x8021120Cu; f_802652E8(c); // 80211208
  c->r[3]=c->r[17]|c->r[17]; // 8021120C
  c->r[4]=c->r[1]+0x000000F8u; // 80211210
  c->lr=0x80211218u; f_8003F468(c); // 80211214
  c->r[16]=c->r[16]+0x00000001u; // 80211218
  c->r[15]=c->r[15]+0x0000000Cu; // 8021121C
  cmps(c,0,(int32_t)c->r[16],8); // 80211220
  if (crb(c,0)) { IRQCHK(c); goto L_802111F4; } // 80211224
  c->r[3]=c->r[1]+0x000000ECu; // 80211228
  c->r[4]=c->r[1]+0x0000026Cu; // 8021122C
  c->r[5]=c->r[1]+0x00000278u; // 80211230
  c->lr=0x80211238u; f_8007B8A4(c); // 80211234
  c->r[3]=c->r[1]+0x0000014Cu; // 80211238
  c->r[4]=c->r[1]+0x000000ECu; // 8021123C
  c->lr=0x80211244u; f_8003F468(c); // 80211240
  c->r[3]=c->r[1]+0x000000E0u; // 80211244
  c->r[4]=c->r[1]+0x00000260u; // 80211248
  c->r[5]=c->r[1]+0x0000026Cu; // 8021124C
  c->lr=0x80211254u; f_8007B8A4(c); // 80211250
  c->r[3]=c->r[1]+0x00000158u; // 80211254
  c->r[4]=c->r[1]+0x000000E0u; // 80211258
  c->lr=0x80211260u; f_8003F468(c); // 8021125C
  c->r[3]=c->r[1]+0x0000014Cu; // 80211260
  c->r[4]=c->r[1]+0x00000158u; // 80211264
  c->r[5]=c->r[1]+0x000000D4u; // 80211268
  c->lr=0x80211270u; f_80265810(c); // 8021126C
  c->r[3]=c->r[1]+0x0000020Cu; // 80211270
  c->r[4]=c->r[1]+0x000000D4u; // 80211274
  c->lr=0x8021127Cu; f_8003F468(c); // 80211278
  c->r[3]=c->r[1]+0x000000C8u; // 8021127C
  c->r[4]=c->r[1]+0x00000290u; // 80211280
  c->r[5]=c->r[1]+0x00000284u; // 80211284
  c->lr=0x8021128Cu; f_8007B8A4(c); // 80211288
  c->r[3]=c->r[1]+0x0000014Cu; // 8021128C
  c->r[4]=c->r[1]+0x000000C8u; // 80211290
  c->lr=0x80211298u; f_8003F468(c); // 80211294
  c->r[3]=c->r[1]+0x000000BCu; // 80211298
  c->r[4]=c->r[1]+0x0000029Cu; // 8021129C
  c->r[5]=c->r[1]+0x00000290u; // 802112A0
  c->lr=0x802112A8u; f_8007B8A4(c); // 802112A4
  c->r[3]=c->r[1]+0x00000158u; // 802112A8
  c->r[4]=c->r[1]+0x000000BCu; // 802112AC
  c->lr=0x802112B4u; f_8003F468(c); // 802112B0
  c->r[3]=c->r[1]+0x0000014Cu; // 802112B4
  c->r[4]=c->r[1]+0x00000158u; // 802112B8
  c->r[5]=c->r[1]+0x000000B0u; // 802112BC
  c->lr=0x802112C4u; f_80265810(c); // 802112C0
  c->r[3]=c->r[1]+0x00000218u; // 802112C4
  c->r[4]=c->r[1]+0x000000B0u; // 802112C8
  c->lr=0x802112D0u; f_8003F468(c); // 802112CC
  c->r[3]=c->r[1]+0x000000A4u; // 802112D0
  c->r[4]=c->r[1]+0x00000278u; // 802112D4
  c->r[5]=c->r[1]+0x000002A8u; // 802112D8
  c->lr=0x802112E0u; f_8007B8A4(c); // 802112DC
  c->r[3]=c->r[1]+0x0000014Cu; // 802112E0
  c->r[4]=c->r[1]+0x000000A4u; // 802112E4
  c->lr=0x802112ECu; f_8003F468(c); // 802112E8
  c->r[3]=c->r[1]+0x00000098u; // 802112EC
  c->r[4]=c->r[1]+0x00000254u; // 802112F0
  c->r[5]=c->r[1]+0x00000278u; // 802112F4
  c->lr=0x802112FCu; f_8007B8A4(c); // 802112F8
  c->r[3]=c->r[1]+0x00000158u; // 802112FC
  c->r[4]=c->r[1]+0x00000098u; // 80211300
  c->lr=0x80211308u; f_8003F468(c); // 80211304
  c->r[3]=c->r[1]+0x0000014Cu; // 80211308
  c->r[4]=c->r[1]+0x00000158u; // 8021130C
  c->r[5]=c->r[1]+0x0000008Cu; // 80211310
  c->lr=0x80211318u; f_80265810(c); // 80211314
  c->r[3]=c->r[1]+0x00000224u; // 80211318
  c->r[4]=c->r[1]+0x0000008Cu; // 8021131C
  c->lr=0x80211324u; f_8003F468(c); // 80211320
  c->r[3]=c->r[1]+0x00000080u; // 80211324
  c->r[4]=c->r[1]+0x0000026Cu; // 80211328
  c->r[5]=c->r[1]+0x0000029Cu; // 8021132C
  c->lr=0x80211334u; f_8007B8A4(c); // 80211330
  c->r[3]=c->r[1]+0x0000014Cu; // 80211334
  c->r[4]=c->r[1]+0x00000080u; // 80211338
  c->lr=0x80211340u; f_8003F468(c); // 8021133C
  c->r[3]=c->r[1]+0x00000074u; // 80211340
  c->r[4]=c->r[1]+0x00000278u; // 80211344
  c->r[5]=c->r[1]+0x0000026Cu; // 80211348
  c->lr=0x80211350u; f_8007B8A4(c); // 8021134C
  c->r[3]=c->r[1]+0x00000158u; // 80211350
  c->r[4]=c->r[1]+0x00000074u; // 80211354
  c->lr=0x8021135Cu; f_8003F468(c); // 80211358
  c->r[3]=c->r[1]+0x0000014Cu; // 8021135C
  c->r[4]=c->r[1]+0x00000158u; // 80211360
  c->r[5]=c->r[1]+0x00000068u; // 80211364
  c->lr=0x8021136Cu; f_80265810(c); // 80211368
  c->r[3]=c->r[1]+0x00000230u; // 8021136C
  c->r[4]=c->r[1]+0x00000068u; // 80211370
  c->lr=0x80211378u; f_8003F468(c); // 80211374
  c->r[3]=c->r[1]+0x0000005Cu; // 80211378
  c->r[4]=c->r[1]+0x00000260u; // 8021137C
  c->r[5]=c->r[1]+0x00000290u; // 80211380
  c->lr=0x80211388u; f_8007B8A4(c); // 80211384
  c->r[3]=c->r[1]+0x0000014Cu; // 80211388
  c->r[4]=c->r[1]+0x0000005Cu; // 8021138C
  c->lr=0x80211394u; f_8003F468(c); // 80211390
  c->r[3]=c->r[1]+0x00000050u; // 80211394
  c->r[4]=c->r[1]+0x0000026Cu; // 80211398
  c->r[5]=c->r[1]+0x00000260u; // 8021139C
  c->lr=0x802113A4u; f_8007B8A4(c); // 802113A0
  c->r[3]=c->r[1]+0x00000158u; // 802113A4
  c->r[4]=c->r[1]+0x00000050u; // 802113A8
  c->lr=0x802113B0u; f_8003F468(c); // 802113AC
  c->r[3]=c->r[1]+0x0000014Cu; // 802113B0
  c->r[4]=c->r[1]+0x00000158u; // 802113B4
  c->r[5]=c->r[1]+0x00000044u; // 802113B8
  c->lr=0x802113C0u; f_80265810(c); // 802113BC
  c->r[3]=c->r[1]+0x0000023Cu; // 802113C0
  c->r[4]=c->r[1]+0x00000044u; // 802113C4
  c->lr=0x802113CCu; f_8003F468(c); // 802113C8
  c->r[3]=c->r[1]+0x00000038u; // 802113CC
  c->r[4]=c->r[1]+0x00000254u; // 802113D0
  c->r[5]=c->r[1]+0x00000284u; // 802113D4
  c->lr=0x802113DCu; f_8007B8A4(c); // 802113D8
  c->r[3]=c->r[1]+0x0000014Cu; // 802113DC
  c->r[4]=c->r[1]+0x00000038u; // 802113E0
  c->lr=0x802113E8u; f_8003F468(c); // 802113E4
  c->r[3]=c->r[1]+0x0000002Cu; // 802113E8
  c->r[4]=c->r[1]+0x00000260u; // 802113EC
  c->r[5]=c->r[1]+0x00000254u; // 802113F0
  c->lr=0x802113F8u; f_8007B8A4(c); // 802113F4
  c->r[3]=c->r[1]+0x00000158u; // 802113F8
  c->r[4]=c->r[1]+0x0000002Cu; // 802113FC
  c->lr=0x80211404u; f_8003F468(c); // 80211400
  c->r[3]=c->r[1]+0x0000014Cu; // 80211404
  c->r[4]=c->r[1]+0x00000158u; // 80211408
  c->r[5]=c->r[1]+0x00000020u; // 8021140C
  c->lr=0x80211414u; f_80265810(c); // 80211410
  c->r[3]=c->r[1]+0x00000248u; // 80211414
  c->r[4]=c->r[1]+0x00000020u; // 80211418
  c->lr=0x80211420u; f_8003F468(c); // 8021141C
  W32(c->r[1]+0x00000008u,c->r[21]); // 80211420
  c->r[5]=c->r[20]|c->r[20]; // 80211424
  c->r[6]=c->r[18]|c->r[18]; // 80211428
  c->r[3]=c->r[23]+0xFFFFC69Cu; // 8021142C
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 80211430
  c->r[7]=c->r[1]+0x00000278u; // 80211434
  c->r[8]=c->r[1]+0x0000026Cu; // 80211438
  c->r[9]=c->r[1]+0x00000260u; // 8021143C
  c->r[10]=c->r[1]+0x00000254u; // 80211440
  c->r[4]=0u+0x00000000u; // 80211444
  c->lr=0x8021144Cu; f_80045394(c); // 80211448
  W32(c->r[1]+0x00000008u,c->r[24]); // 8021144C
  c->r[5]=c->r[20]|c->r[20]; // 80211450
  c->r[6]=c->r[18]|c->r[18]; // 80211454
  c->r[3]=c->r[23]+0xFFFFC69Cu; // 80211458
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 8021145C
  c->r[7]=c->r[1]+0x00000284u; // 80211460
  c->r[8]=c->r[1]+0x00000290u; // 80211464
  c->r[9]=c->r[1]+0x0000029Cu; // 80211468
  c->r[10]=c->r[1]+0x000002A8u; // 8021146C
  c->r[4]=0u+0x00000000u; // 80211470
  c->lr=0x80211478u; f_80045394(c); // 80211474
  W32(c->r[1]+0x00000008u,c->r[25]); // 80211478
  c->r[5]=c->r[20]|c->r[20]; // 8021147C
  c->r[6]=c->r[18]|c->r[18]; // 80211480
  c->r[3]=c->r[23]+0xFFFFC69Cu; // 80211484
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 80211488
  c->r[7]=c->r[1]+0x000002A8u; // 8021148C
  c->r[8]=c->r[1]+0x00000278u; // 80211490
  c->r[9]=c->r[1]+0x00000254u; // 80211494
  c->r[10]=c->r[1]+0x00000284u; // 80211498
  c->r[4]=0u+0x00000000u; // 8021149C
  c->lr=0x802114A4u; f_80045394(c); // 802114A0
  W32(c->r[1]+0x00000008u,c->r[26]); // 802114A4
  c->r[5]=c->r[20]|c->r[20]; // 802114A8
  c->r[6]=c->r[18]|c->r[18]; // 802114AC
  c->r[3]=c->r[23]+0xFFFFC69Cu; // 802114B0
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 802114B4
  c->r[7]=c->r[1]+0x0000029Cu; // 802114B8
  c->r[8]=c->r[1]+0x0000026Cu; // 802114BC
  c->r[9]=c->r[1]+0x00000278u; // 802114C0
  c->r[10]=c->r[1]+0x000002A8u; // 802114C4
  c->r[4]=0u+0x00000000u; // 802114C8
  c->lr=0x802114D0u; f_80045394(c); // 802114CC
  W32(c->r[1]+0x00000008u,c->r[27]); // 802114D0
  c->r[5]=c->r[20]|c->r[20]; // 802114D4
  c->r[6]=c->r[18]|c->r[18]; // 802114D8
  c->r[3]=c->r[23]+0xFFFFC69Cu; // 802114DC
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 802114E0
  c->r[7]=c->r[1]+0x00000290u; // 802114E4
  c->r[8]=c->r[1]+0x00000260u; // 802114E8
  c->r[9]=c->r[1]+0x0000026Cu; // 802114EC
  c->r[10]=c->r[1]+0x0000029Cu; // 802114F0
  c->r[4]=0u+0x00000000u; // 802114F4
  c->lr=0x802114FCu; f_80045394(c); // 802114F8
  W32(c->r[1]+0x00000008u,c->r[28]); // 802114FC
  c->r[5]=c->r[20]|c->r[20]; // 80211500
  c->r[6]=c->r[18]|c->r[18]; // 80211504
  c->r[3]=c->r[23]+0xFFFFC69Cu; // 80211508
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 8021150C
  c->r[7]=c->r[1]+0x00000284u; // 80211510
  c->r[8]=c->r[1]+0x00000254u; // 80211514
  c->r[9]=c->r[1]+0x00000260u; // 80211518
  c->r[10]=c->r[1]+0x00000290u; // 8021151C
  c->r[4]=0u+0x00000000u; // 80211520
  c->lr=0x80211528u; f_80045394(c); // 80211524
  goto L_8021153C; // 80211528
L_8021152C:;
  c->r[16]=c->r[16]+0x00000001u; // 8021152C
  c->r[15]=c->r[15]+0x0000000Cu; // 80211530
  cmps(c,0,(int32_t)c->r[16],32); // 80211534
  if (crb(c,0)) { IRQCHK(c); goto L_802110F4; } // 80211538
L_8021153C:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 8021153C
L_80211540:;
  c->lr=0x80211544u; f_8003DA30(c); // 80211540
  c->r[0]=c->r[3]+0x00000004u; // 80211544
  cmpu(c,0,c->r[29],c->r[0]); // 80211548
  if (!crb(c,2)) { IRQCHK(c); goto L_80211058; } // 8021154C
  {uint32_t ea=c->r[1]+0x00000408u; psq_load(c,31,ea,0,0);} // 80211550
  c->r[11]=c->r[1]+0x00000400u; // 80211554
  {uint32_t ea=c->r[1]+0x00000400u; c->f[31]=RF64(ea);} // 80211558
  c->lr=0x80211560u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021155C
  c->r[0]=R32(c->r[1]+0x00000414u); // 80211560
  c->lr=c->r[0]; // 80211564
  c->r[1]=c->r[1]+0x00000410u; // 80211568
  return; // 8021156C
}

// fn_80211570
void f_80211570(Ctx* __restrict c) {
  trace_call(0x80211570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211570
  c->r[0]=c->lr; // 80211574
  cmps(c,0,(int32_t)c->r[4],0); // 80211578
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021157C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80211580
  c->r[31]=c->r[3]|c->r[3]; // 80211584
  if (crb(c,2)) { goto L_802115C0; } // 80211588
  c->r[3]=c->r[3]+0x00010000u; // 8021158C
  c->r[3]=c->r[3]+0xFFFFA534u; // 80211590
  c->lr=0x80211598u; f_80172DDC(c); // 80211594
  c->r[3]=c->r[31]+0x00010000u; // 80211598
  c->r[4]=0u+0x00000000u; // 8021159C
  c->r[3]=c->r[3]+0xFFFFA534u; // 802115A0
  c->lr=0x802115A8u; f_80172E78(c); // 802115A4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802115A8
  c->r[4]=c->r[1]+0x00000008u; // 802115AC
  W32(c->r[1]+0x00000008u,c->r[3]); // 802115B0
  c->r[3]=c->r[31]+0x00010000u; // 802115B4
  c->r[3]=c->r[3]+0xFFFFA540u; // 802115B8
  c->lr=0x802115C0u; f_80172FE0(c); // 802115BC
L_802115C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802115C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802115C4
  c->lr=c->r[0]; // 802115C8
  c->r[1]=c->r[1]+0x00000020u; // 802115CC
  return; // 802115D0
}

// fn_802115D4
void f_802115D4(Ctx* __restrict c) {
  trace_call(0x802115D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802115D4
  c->r[0]=c->lr; // 802115D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802115DC
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)1284); // 802115E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802115E4
  c->r[30]=c->r[4]|c->r[4]; // 802115E8
  c->r[3]=c->r[3]+c->r[0]; // 802115EC
  c->r[31]=c->r[3]+0x00000004u; // 802115F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 802115F4
  cmpu(c,0,c->r[0],0x00000040u); // 802115F8
  if (!crb(c,0)) { goto L_80211644; } // 802115FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80211600
  c->r[4]=c->r[5]|c->r[5]; // 80211604
  c->r[3]=c->r[31]+c->r[0]; // 80211608
  c->r[3]=c->r[3]+0x00000004u; // 8021160C
  c->lr=0x80211614u; f_802933D8(c); // 80211610
  c->r[0]=R32(c->r[31]+0x00000000u); // 80211614
  c->r[4]=0u+0xFFFFFFFFu; // 80211618
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021161C
  c->r[3]=c->r[31]+c->r[0]; // 80211620
  W32(c->r[3]+0x00000010u,c->r[30]); // 80211624
  c->r[0]=R32(c->r[31]+0x00000000u); // 80211628
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8021162C
  c->r[3]=c->r[31]+c->r[0]; // 80211630
  W32(c->r[3]+0x00000014u,c->r[4]); // 80211634
  c->r[3]=R32(c->r[31]+0x00000000u); // 80211638
  c->r[0]=c->r[3]+0x00000001u; // 8021163C
  W32(c->r[31]+0x00000000u,c->r[0]); // 80211640
L_80211644:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80211644
  c->r[0]=R32(c->r[1]+0x00000014u); // 80211648
  c->lr=c->r[0]; // 8021164C
  c->r[1]=c->r[1]+0x00000010u; // 80211650
  return; // 80211654
}

// fn_80211658
void f_80211658(Ctx* __restrict c) {
  trace_call(0x80211658u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211658
  c->r[0]=c->lr; // 8021165C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80211660
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80211664
  c->r[23]=c->r[4]|c->r[4]; // 80211668
  c->r[28]=c->r[3]+0x00010000u; // 8021166C
  c->r[26]=0u+0x00000000u; // 80211670
  c->r[31]=0u+0x00000000u; // 80211674
  c->r[29]=0u+0x80450000u; // 80211678
  c->r[30]=0u+0x00010000u; // 8021167C
L_80211680:;
  c->r[3]=c->r[28]+c->r[31]; // 80211680
  c->r[0]=R16(c->r[3]+0xFFFFA554u); // 80211684
  c->r[25]=c->r[3]+0xFFFFA54Cu; // 80211688
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8021168C
  if (crb(c,2)) { goto L_80211710; } // 80211690
  c->r[3]=c->r[25]|c->r[25]; // 80211694
  c->r[24]=0u+0x00000000u; // 80211698
  c->lr=0x802116A0u; f_8003F1D4(c); // 8021169C
  cmps(c,0,(int32_t)c->r[3],0); // 802116A0
  if (!crb(c,2)) { goto L_802116B0; } // 802116A4
  c->r[24]=0u+0x00000001u; // 802116A8
  goto L_802116F0; // 802116AC
L_802116B0:;
  c->r[3]=c->r[25]|c->r[25]; // 802116B0
  c->lr=0x802116B8u; f_80064CFC(c); // 802116B4
  c->r[27]=R32(c->r[3]+0x00000004u); // 802116B8
  c->r[4]=0u+0x00000013u; // 802116BC
  c->r[3]=c->r[27]+0x00000394u; // 802116C0
  c->lr=0x802116C8u; f_80076DD4(c); // 802116C4
  cmps(c,0,(int32_t)c->r[3],0); // 802116C8
  if (crb(c,2)) { goto L_802116D8; } // 802116CC
  c->r[24]=0u+0x00000001u; // 802116D0
  goto L_802116F0; // 802116D4
L_802116D8:;
  c->r[3]=R32(c->r[27]+0x000004A8u); // 802116D8
  c->r[4]=c->r[23]|c->r[23]; // 802116DC
  c->lr=0x802116E4u; f_80293554(c); // 802116E0
  cmps(c,0,(int32_t)c->r[3],0); // 802116E4
  if (!crb(c,2)) { goto L_802116F0; } // 802116E8
  c->r[24]=0u+0x00000001u; // 802116EC
L_802116F0:;
  cmps(c,0,(int32_t)c->r[24],0); // 802116F0
  if (crb(c,2)) { goto L_80211710; } // 802116F4
  c->r[4]=R16(c->r[25]+0x00000008u); // 802116F8
  c->r[3]=c->r[29]+0xFFFFC69Cu; // 802116FC
  c->lr=0x80211704u; f_800459A0(c); // 80211700
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 80211704
  W16(c->r[25]+0x00000008u,c->r[0]); // 80211708
  W16(c->r[25]+0x0000000Au,c->r[0]); // 8021170C
L_80211710:;
  c->r[26]=c->r[26]+0x00000001u; // 80211710
  c->r[31]=c->r[31]+0x0000000Cu; // 80211714
  cmps(c,0,(int32_t)c->r[26],32); // 80211718
  if (crb(c,0)) { IRQCHK(c); goto L_80211680; } // 8021171C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80211720
  c->r[0]=R32(c->r[1]+0x00000034u); // 80211724
  c->lr=c->r[0]; // 80211728
  c->r[1]=c->r[1]+0x00000030u; // 8021172C
  return; // 80211730
}

// fn_80211734
void f_80211734(Ctx* __restrict c) {
  trace_call(0x80211734u);
  {uint32_t ea=c->r[1]+0xFFFFDE10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211734
  c->r[0]=c->lr; // 80211738
  W32(c->r[1]+0x000021F4u,c->r[0]); // 8021173C
  c->r[0]=0u+0x000021E8u; // 80211740
  {uint32_t ea=c->r[1]+0x000021E0u; WF64(ea,c->f[31]);} // 80211744
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 80211748
  c->r[0]=0u+0x000021D8u; // 8021174C
  {uint32_t ea=c->r[1]+0x000021D0u; WF64(ea,c->f[30]);} // 80211750
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,30,ea,0,0);} // 80211754
  c->r[0]=0u+0x000021C8u; // 80211758
  {uint32_t ea=c->r[1]+0x000021C0u; WF64(ea,c->f[29]);} // 8021175C
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,29,ea,0,0);} // 80211760
  c->r[11]=c->r[1]+0x000021C0u; // 80211764
  c->lr=0x8021176Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80211768
  c->r[26]=c->r[3]+0x00010000u; // 8021176C
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 80211770
  {uint32_t ea=c->r[26]+0xFFFFA548u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211774
  c->r[31]=c->r[3]|c->r[3]; // 80211778
  {uint32_t ea=c->r[2]+0xFFFFCB30u; c->f[30]=c->ps1[30]=RF32(ea);} // 8021177C
  c->r[24]=0u+0x00000000u; // 80211780
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[29]); // 80211784
  {uint32_t ea=c->r[2]+0xFFFFCB38u; c->f[31]=RF64(ea);} // 80211788
  c->r[23]=0u+0x00000000u; // 8021178C
  c->r[27]=0u+0x80410000u; // 80211790
  c->r[28]=0u+0x80410000u; // 80211794
  c->r[29]=0u+0x43300000u; // 80211798
  {uint32_t ea=c->r[26]+0xFFFFA548u; WF32(ea,c->f[0]);} // 8021179C
  goto L_802118E4; // 802117A0
L_802117A4:;
  c->r[4]=c->r[23]|c->r[23]; // 802117A4
  c->r[3]=c->r[31]+0x00004484u; // 802117A8
  c->lr=0x802117B0u; f_801DC1F4(c); // 802117AC
  c->r[22]=c->r[3]|c->r[3]; // 802117B0
  c->r[3]=c->r[31]+0x00004484u; // 802117B4
  c->r[4]=c->r[22]|c->r[22]; // 802117B8
  c->lr=0x802117C0u; f_801DC114(c); // 802117BC
  c->r[21]=c->r[3]|c->r[3]; // 802117C0
  c->r[30]=rotl(c->r[24],8)&0xFFFFFF00u; // 802117C4
  goto L_802118D8; // 802117C8
L_802117CC:;
  c->r[3]=c->r[21]|c->r[21]; // 802117CC
  c->r[4]=c->r[27]+0xFFFFB70Au; // 802117D0
  c->r[5]=c->r[1]+0x00000064u; // 802117D4
  c->r[6]=c->r[1]+0x00000028u; // 802117D8
  c->r[7]=c->r[1]+0x00000024u; // 802117DC
  c->r[8]=c->r[1]+0x00000020u; // 802117E0
  c->r[9]=c->r[1]+0x0000001Cu; // 802117E4
  c->r[10]=c->r[1]+0x00000018u; // 802117E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802117EC
  c->lr=0x802117F4u; f_80293260(c); // 802117F0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802117F4
  fcmp(c,0,c->f[0],c->f[30]); // 802117F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802117FC
  if (!crb(c,2)) { goto L_80211808; } // 80211800
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[29]);} // 80211804
L_80211808:;
  c->r[0]=R32(c->r[1]+0x00000028u); // 80211808
  W32(c->r[1]+0x00002188u,c->r[29]); // 8021180C
  c->r[0]=c->r[0]^0x80000000u; // 80211810
  {uint32_t ea=c->r[26]+0xFFFFA548u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211814
  W32(c->r[1]+0x0000218Cu,c->r[0]); // 80211818
  {uint32_t ea=c->r[1]+0x00002188u; c->f[0]=RF64(ea);} // 8021181C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80211820
  fcmp(c,0,c->f[1],c->f[0]); // 80211824
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80211828
  if (!crb(c,2)) { goto L_802118CC; } // 8021182C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211830
  c->r[3]=c->r[1]+0x00000038u; // 80211834
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80211838
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021183C
  c->lr=0x80211844u; f_800521A0(c); // 80211840
  c->r[7]=R32(c->r[1]+0x00000038u); // 80211844
  c->r[3]=c->r[1]+0x00000064u; // 80211848
  c->r[6]=R32(c->r[1]+0x0000003Cu); // 8021184C
  c->r[4]=c->r[1]+0x0000002Cu; // 80211850
  c->r[0]=R32(c->r[1]+0x00000040u); // 80211854
  c->r[5]=0u+0xFFFFFFFFu; // 80211858
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 8021185C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211860
  W32(c->r[1]+0x00000030u,c->r[6]); // 80211864
  W32(c->r[1]+0x00000034u,c->r[0]); // 80211868
  c->lr=0x80211870u; f_80048BAC(c); // 8021186C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211870
  c->r[6]=c->r[3]|c->r[3]; // 80211874
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80211878
  c->r[3]=c->r[1]+0x00000084u; // 8021187C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80211880
  c->r[4]=c->r[28]+0xFFFFB6FBu; // 80211884
  c->r[5]=c->r[1]+0x00000064u; // 80211888
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 8021188C
  c->lr=0x80211894u; f_80291CC4(c); // 80211890
  c->r[4]=c->r[22]|c->r[22]; // 80211894
  c->r[3]=c->r[31]+0x0000142Cu; // 80211898
  c->r[5]=c->r[1]+0x00000084u; // 8021189C
  c->lr=0x802118A4u; f_801DBD04(c); // 802118A0
  c->r[25]=c->r[1]+0x00000184u; // 802118A4
  c->r[4]=c->r[22]|c->r[22]; // 802118A8
  c->r[25]=c->r[25]+c->r[30]; // 802118AC
  c->r[3]=c->r[25]|c->r[25]; // 802118B0
  c->lr=0x802118B8u; f_802933D8(c); // 802118B4
  c->r[4]=c->r[21]|c->r[21]; // 802118B8
  c->r[3]=c->r[25]+0x00000080u; // 802118BC
  c->lr=0x802118C4u; f_802933D8(c); // 802118C0
  c->r[24]=c->r[24]+0x00000001u; // 802118C4
  c->r[30]=c->r[30]+0x00000100u; // 802118C8
L_802118CC:;
  c->r[3]=c->r[31]+0x00004484u; // 802118CC
  c->lr=0x802118D4u; f_801DC1A4(c); // 802118D0
  c->r[21]=c->r[3]|c->r[3]; // 802118D4
L_802118D8:;
  cmps(c,0,(int32_t)c->r[21],0); // 802118D8
  if (!crb(c,2)) { IRQCHK(c); goto L_802117CC; } // 802118DC
  c->r[23]=c->r[23]+0x00000001u; // 802118E0
L_802118E4:;
  c->r[3]=c->r[31]+0x00004484u; // 802118E4
  c->lr=0x802118ECu; f_801DC1D0(c); // 802118E8
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[3]); // 802118EC
  if (crb(c,0)) { IRQCHK(c); goto L_802117A4; } // 802118F0
  c->r[28]=c->r[1]+0x00000184u; // 802118F4
  c->r[21]=0u+0x00000000u; // 802118F8
  c->r[30]=0u+0x00000000u; // 802118FC
  goto L_80211924; // 80211900
L_80211904:;
  c->r[4]=c->r[1]+0x00000184u; // 80211904
  c->r[5]=c->r[28]+c->r[30]; // 80211908
  c->r[3]=c->r[31]+0x00004484u; // 8021190C
  c->r[4]=c->r[4]+c->r[30]; // 80211910
  c->r[5]=c->r[5]+0x00000080u; // 80211914
  c->lr=0x8021191Cu; f_801DBEDC(c); // 80211918
  c->r[21]=c->r[21]+0x00000001u; // 8021191C
  c->r[30]=c->r[30]+0x00000100u; // 80211920
L_80211924:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[24]); // 80211924
  if (crb(c,0)) { IRQCHK(c); goto L_80211904; } // 80211928
  c->r[21]=0u+0x00000000u; // 8021192C
  c->r[28]=0u+0x80410000u; // 80211930
  goto L_802119A4; // 80211934
L_80211938:;
  c->r[4]=c->r[21]|c->r[21]; // 80211938
  c->r[3]=c->r[31]+0x0000142Cu; // 8021193C
  c->lr=0x80211944u; f_801DC1F4(c); // 80211940
  c->r[4]=c->r[3]|c->r[3]; // 80211944
  c->r[3]=c->r[31]+0x0000142Cu; // 80211948
  c->lr=0x80211950u; f_801DC114(c); // 8021194C
  goto L_80211990; // 80211950
L_80211954:;
  c->r[4]=c->r[28]+0xFFFFB6ECu; // 80211954
  c->r[5]=c->r[1]+0x00000044u; // 80211958
  c->r[6]=c->r[1]+0x00000014u; // 8021195C
  c->r[7]=c->r[1]+0x00000010u; // 80211960
  c->r[8]=c->r[1]+0x0000000Cu; // 80211964
  c->r[9]=c->r[1]+0x00000008u; // 80211968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8021196C
  c->lr=0x80211974u; f_80293260(c); // 80211970
  c->r[3]=R32(c->r[1]+0x00000014u); // 80211974
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211978
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021197C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80211980
  c->lr=0x80211988u; f_80048C00(c); // 80211984
  c->r[3]=c->r[31]+0x0000142Cu; // 80211988
  c->lr=0x80211990u; f_801DC1A4(c); // 8021198C
L_80211990:;
  cmps(c,0,(int32_t)c->r[3],0); // 80211990
  if (!crb(c,2)) { IRQCHK(c); goto L_80211954; } // 80211994
  c->r[3]=c->r[31]+0x0000142Cu; // 80211998
  c->lr=0x802119A0u; f_801DC1CC(c); // 8021199C
  c->r[21]=c->r[21]+0x00000001u; // 802119A0
L_802119A4:;
  c->r[3]=c->r[31]+0x0000142Cu; // 802119A4
  c->lr=0x802119ACu; f_801DC1D0(c); // 802119A8
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[3]); // 802119AC
  if (crb(c,0)) { IRQCHK(c); goto L_80211938; } // 802119B0
  c->r[28]=c->r[31]+0x00010000u; // 802119B4
  c->r[21]=0u+0x00000000u; // 802119B8
  c->r[31]=0u+0x00000000u; // 802119BC
  c->r[29]=0u+0x80450000u; // 802119C0
  c->r[30]=0u+0x00010000u; // 802119C4
L_802119C8:;
  c->r[3]=c->r[28]+c->r[31]; // 802119C8
  c->r[0]=R16(c->r[3]+0xFFFFA554u); // 802119CC
  c->r[22]=c->r[3]+0xFFFFA54Cu; // 802119D0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802119D4
  if (crb(c,2)) { goto L_80211A3C; } // 802119D8
  c->r[3]=c->r[22]|c->r[22]; // 802119DC
  c->r[23]=0u+0x00000000u; // 802119E0
  c->lr=0x802119E8u; f_8003F1D4(c); // 802119E4
  cmps(c,0,(int32_t)c->r[3],0); // 802119E8
  if (!crb(c,2)) { goto L_802119F8; } // 802119EC
  c->r[23]=0u+0x00000001u; // 802119F0
  goto L_80211A1C; // 802119F4
L_802119F8:;
  c->r[3]=c->r[22]|c->r[22]; // 802119F8
  c->lr=0x80211A00u; f_80064CFC(c); // 802119FC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80211A00
  c->r[4]=0u+0x00000013u; // 80211A04
  c->r[3]=c->r[3]+0x00000394u; // 80211A08
  c->lr=0x80211A10u; f_80076DD4(c); // 80211A0C
  cmps(c,0,(int32_t)c->r[3],0); // 80211A10
  if (crb(c,2)) { goto L_80211A1C; } // 80211A14
  c->r[23]=0u+0x00000001u; // 80211A18
L_80211A1C:;
  cmps(c,0,(int32_t)c->r[23],0); // 80211A1C
  if (crb(c,2)) { goto L_80211A3C; } // 80211A20
  c->r[4]=R16(c->r[22]+0x00000008u); // 80211A24
  c->r[3]=c->r[29]+0xFFFFC69Cu; // 80211A28
  c->lr=0x80211A30u; f_800459A0(c); // 80211A2C
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 80211A30
  W16(c->r[22]+0x00000008u,c->r[0]); // 80211A34
  W16(c->r[22]+0x0000000Au,c->r[0]); // 80211A38
L_80211A3C:;
  c->r[21]=c->r[21]+0x00000001u; // 80211A3C
  c->r[31]=c->r[31]+0x0000000Cu; // 80211A40
  cmps(c,0,(int32_t)c->r[21],32); // 80211A44
  if (crb(c,0)) { IRQCHK(c); goto L_802119C8; } // 80211A48
  c->r[0]=0u+0x000021E8u; // 80211A4C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 80211A50
  {uint32_t ea=c->r[1]+0x000021E0u; c->f[31]=RF64(ea);} // 80211A54
  c->r[0]=0u+0x000021D8u; // 80211A58
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 80211A5C
  {uint32_t ea=c->r[1]+0x000021D0u; c->f[30]=RF64(ea);} // 80211A60
  c->r[0]=0u+0x000021C8u; // 80211A64
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 80211A68
  c->r[11]=c->r[1]+0x000021C0u; // 80211A6C
  {uint32_t ea=c->r[1]+0x000021C0u; c->f[29]=RF64(ea);} // 80211A70
  c->lr=0x80211A78u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80211A74
  c->r[0]=R32(c->r[1]+0x000021F4u); // 80211A78
  c->lr=c->r[0]; // 80211A7C
  c->r[1]=c->r[1]+0x000021F0u; // 80211A80
  return; // 80211A84
}

// fn_80211A88
void f_80211A88(Ctx* __restrict c) {
  trace_call(0x80211A88u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211A88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80211A8C
  c->ctr=c->r[12]; // 80211A90
  if (true) { dispatch(c,c->ctr); return; } // 80211A94
}

// fn_80211A98
void f_80211A98(Ctx* __restrict c) {
  trace_call(0x80211A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211A98
  c->r[0]=c->lr; // 80211A9C
  c->r[4]=0u+0x00000000u; // 80211AA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80211AA4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80211AA8
  c->r[30]=c->r[3]|c->r[3]; // 80211AAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80211AB0
  c->r[12]=R32(c->r[12]+0x00000024u); // 80211AB4
  c->ctr=c->r[12]; // 80211AB8
  if (true) { c->lr=0x80211AC0u; dispatch(c,c->ctr); } // 80211ABC
  c->r[31]=0u+0x00000000u; // 80211AC0
  goto L_80211AE4; // 80211AC4
L_80211AC8:;
  c->r[4]=c->r[31]|c->r[31]; // 80211AC8
  c->r[3]=c->r[30]+0x000074DCu; // 80211ACC
  c->lr=0x80211AD4u; f_801DC1F4(c); // 80211AD0
  c->r[4]=c->r[3]|c->r[3]; // 80211AD4
  c->r[3]=c->r[30]|c->r[30]; // 80211AD8
  c->lr=0x80211AE0u; f_802109C4(c); // 80211ADC
  c->r[31]=c->r[31]+0x00000001u; // 80211AE0
L_80211AE4:;
  c->r[3]=c->r[30]+0x000074DCu; // 80211AE4
  c->lr=0x80211AECu; f_801DC1D0(c); // 80211AE8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 80211AEC
  if (crb(c,0)) { IRQCHK(c); goto L_80211AC8; } // 80211AF0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80211AF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80211AF8
  c->lr=c->r[0]; // 80211AFC
  c->r[1]=c->r[1]+0x00000010u; // 80211B00
  return; // 80211B04
}

// fn_80211B08
void f_80211B08(Ctx* __restrict c) {
  trace_call(0x80211B08u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211B08
  c->r[0]=c->lr; // 80211B0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80211B10
  c->r[11]=c->r[1]+0x00000030u; // 80211B14
  c->lr=0x80211B1Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80211B18
  c->r[0]=0u+0x00000004u; // 80211B1C
  c->r[26]=c->r[3]|c->r[3]; // 80211B20
  c->r[6]=0u+0x00000000u; // 80211B24
  c->r[4]=0u+0x00000000u; // 80211B28
  c->ctr=c->r[0]; // 80211B2C
L_80211B30:;
  c->r[5]=c->r[3]+c->r[4]; // 80211B30
  c->r[4]=c->r[4]+0x00000504u; // 80211B34
  W32(c->r[5]+0x00000004u,c->r[6]); // 80211B38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80211B30; } // 80211B3C
  c->r[28]=0u+0x00000000u; // 80211B40
  c->r[0]=0u+0x00000001u; // 80211B44
  W8(c->r[3]+0x00001414u,c->r[28]); // 80211B48
  W8(c->r[3]+0x00001415u,c->r[28]); // 80211B4C
  W32(c->r[3]+0x00001428u,c->r[0]); // 80211B50
  c->r[3]=c->r[3]+0x0000142Cu; // 80211B54
  c->lr=0x80211B5Cu; f_801DBCBC(c); // 80211B58
  c->r[3]=c->r[26]+0x00004484u; // 80211B5C
  c->lr=0x80211B64u; f_801DBCBC(c); // 80211B60
  c->r[3]=c->r[26]+0x000074DCu; // 80211B64
  c->lr=0x80211B6Cu; f_801DBCBC(c); // 80211B68
  c->r[3]=c->r[26]+0x00010000u; // 80211B6C
  c->r[4]=0u+0x00000000u; // 80211B70
  c->r[3]=c->r[3]+0xFFFFA534u; // 80211B74
  c->lr=0x80211B7Cu; f_80172DDC(c); // 80211B78
  {uint32_t ea=c->r[2]+0xFFFFCB34u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211B7C
  c->r[29]=c->r[26]+0x00010000u; // 80211B80
  c->r[3]=0u+0x00010000u; // 80211B84
  c->r[27]=0u+0x00000000u; // 80211B88
  {uint32_t ea=c->r[29]+0xFFFFA548u; WF32(ea,c->f[0]);} // 80211B8C
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 80211B90
  c->r[31]=0u+0x00000000u; // 80211B94
L_80211B98:;
  c->r[3]=c->r[29]+c->r[31]; // 80211B98
  W32(c->r[1]+0x00000008u,c->r[28]); // 80211B9C
  c->r[3]=c->r[3]+0xFFFFA54Cu; // 80211BA0
  c->r[4]=c->r[1]+0x00000008u; // 80211BA4
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 80211BA8
  c->lr=0x80211BB0u; f_80063D44(c); // 80211BAC
  c->r[3]=c->r[26]+c->r[31]; // 80211BB0
  c->r[27]=c->r[27]+0x00000001u; // 80211BB4
  c->r[3]=c->r[3]+0x00010000u; // 80211BB8
  c->r[31]=c->r[31]+0x0000000Cu; // 80211BBC
  W16(c->r[3]+0xFFFFA554u,c->r[30]); // 80211BC0
  cmps(c,0,(int32_t)c->r[27],32); // 80211BC4
  W16(c->r[3]+0xFFFFA556u,c->r[30]); // 80211BC8
  if (crb(c,0)) { IRQCHK(c); goto L_80211B98; } // 80211BCC
  c->r[4]=0u+0x00010000u; // 80211BD0
  c->r[3]=c->r[26]+0x00010000u; // 80211BD4
  c->r[0]=c->r[4]+0xFFFF8000u; // 80211BD8
  c->r[11]=c->r[1]+0x00000030u; // 80211BDC
  W16(c->r[3]+0xFFFFA6CCu,c->r[0]); // 80211BE0
  W16(c->r[3]+0xFFFFA6CEu,c->r[0]); // 80211BE4
  c->lr=0x80211BECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80211BE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80211BEC
  c->lr=c->r[0]; // 80211BF0
  c->r[1]=c->r[1]+0x00000030u; // 80211BF4
  return; // 80211BF8
}

// fn_80211BFC
void f_80211BFC(Ctx* __restrict c) {
  trace_call(0x80211BFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211BFC
  c->r[0]=c->lr; // 80211C00
  c->r[4]=0u+0x80410000u; // 80211C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80211C08
  c->r[4]=c->r[4]+0xFFFFB6B0u; // 80211C0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80211C10
  c->r[31]=c->r[3]|c->r[3]; // 80211C14
  W32(c->r[3]+0x00000000u,c->r[4]); // 80211C18
  c->r[3]=c->r[3]+0x0000142Cu; // 80211C1C
  c->lr=0x80211C24u; f_801DBBB0(c); // 80211C20
  c->r[3]=c->r[31]+0x00004484u; // 80211C24
  c->lr=0x80211C2Cu; f_801DBBB0(c); // 80211C28
  c->r[3]=c->r[31]+0x000074DCu; // 80211C2C
  c->lr=0x80211C34u; f_801DBBB0(c); // 80211C30
  c->r[3]=c->r[31]+0x00010000u; // 80211C34
  c->r[4]=0u+0x00000000u; // 80211C38
  c->r[3]=c->r[3]+0xFFFFA534u; // 80211C3C
  c->lr=0x80211C44u; f_80172DDC(c); // 80211C40
  c->r[3]=c->r[31]+0x00010000u; // 80211C44
  c->r[3]=c->r[3]+0xFFFFA540u; // 80211C48
  c->lr=0x80211C50u; f_80172FD0(c); // 80211C4C
  c->r[4]=c->r[31]+0x00010000u; // 80211C50
  c->r[3]=0u+0x00000000u; // 80211C54
  c->r[0]=c->r[4]+0xFFFFA6CCu; // 80211C58
  c->r[4]=c->r[4]+0xFFFFA54Cu; // 80211C5C
L_80211C60:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80211C60
  W32(c->r[4]+0x00000004u,c->r[3]); // 80211C64
  c->r[4]=c->r[4]+0x0000000Cu; // 80211C68
  cmpu(c,0,c->r[4],c->r[0]); // 80211C6C
  if (crb(c,0)) { IRQCHK(c); goto L_80211C60; } // 80211C70
  W32(c->r[13]+0xFFFF9760u,c->r[31]); // 80211C74
  c->r[3]=c->r[31]|c->r[31]; // 80211C78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80211C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80211C80
  c->lr=c->r[0]; // 80211C84
  c->r[1]=c->r[1]+0x00000010u; // 80211C88
  return; // 80211C8C
}

// fn_80211C90
void f_80211C90(Ctx* __restrict c) {
  trace_call(0x80211C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211C90
  c->r[0]=c->lr; // 80211C94
  cmps(c,0,(int32_t)c->r[3],0); // 80211C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80211C9C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80211CA0
  c->r[30]=c->r[3]|c->r[3]; // 80211CA4
  c->r[31]=c->r[4]|c->r[4]; // 80211CA8
  if (crb(c,2)) { goto L_80211CEC; } // 80211CAC
  c->r[0]=0u+0x00000000u; // 80211CB0
  c->r[4]=0u+0xFFFFFFFFu; // 80211CB4
  W32(c->r[13]+0xFFFF9760u,c->r[0]); // 80211CB8
  c->r[3]=c->r[3]+0x000074DCu; // 80211CBC
  c->lr=0x80211CC4u; f_801DBC4C(c); // 80211CC0
  c->r[3]=c->r[30]+0x00004484u; // 80211CC4
  c->r[4]=0u+0xFFFFFFFFu; // 80211CC8
  c->lr=0x80211CD0u; f_801DBC4C(c); // 80211CCC
  c->r[3]=c->r[30]+0x0000142Cu; // 80211CD0
  c->r[4]=0u+0xFFFFFFFFu; // 80211CD4
  c->lr=0x80211CDCu; f_801DBC4C(c); // 80211CD8
  cmps(c,0,(int32_t)c->r[31],0); // 80211CDC
  if (!crb(c,1)) { goto L_80211CEC; } // 80211CE0
  c->r[3]=c->r[30]|c->r[30]; // 80211CE4
  c->lr=0x80211CECu; f_802896EC(c); // 80211CE8
L_80211CEC:;
  c->r[3]=c->r[30]|c->r[30]; // 80211CEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80211CF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80211CF4
  c->lr=c->r[0]; // 80211CF8
  c->r[1]=c->r[1]+0x00000010u; // 80211CFC
  return; // 80211D00
}

// fn_80211D04
void f_80211D04(Ctx* __restrict c) {
  trace_call(0x80211D04u);
  c->r[0]=R32(c->r[3]+0x00000004u); // 80211D04
  cmps(c,0,(int32_t)c->r[0],0); // 80211D08
  if (crb(c,2)) { goto L_80211D18; } // 80211D0C
  c->r[3]=c->r[3]+c->r[0]; // 80211D10
  goto L_80211D1C; // 80211D14
L_80211D18:;
  c->r[3]=0u+0x00000000u; // 80211D18
L_80211D1C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)100); // 80211D1C
  c->r[3]=c->r[3]+c->r[0]; // 80211D20
  return; // 80211D24
}

// fn_80211D28
void f_80211D28(Ctx* __restrict c) {
  trace_call(0x80211D28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211D28
  c->r[0]=c->lr; // 80211D2C
  {uint32_t ea=c->r[2]+0xFFFFCB30u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211D30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80211D34
  c->f[3]=c->f[1]; // 80211D38
  {uint32_t ea=c->r[2]+0xFFFFCB2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80211D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80211D40
  c->r[31]=0u+0x805B0000u; // 80211D44
  c->r[31]=c->r[31]+0x000034A8u; // 80211D48
  c->r[3]=c->r[31]+0x00000000u; // 80211D4C
  c->lr=0x80211D54u; f_8003F588(c); // 80211D50
  c->r[3]=c->r[31]+0x00000018u; // 80211D54
  c->lr=0x80211D5Cu; f_80211BFC(c); // 80211D58
  c->r[4]=0u+0x80210000u; // 80211D5C
  c->r[3]=c->r[31]+0x00000018u; // 80211D60
  c->r[4]=c->r[4]+0x00001C90u; // 80211D64
  c->r[5]=c->r[31]+0x0000000Cu; // 80211D68
  c->lr=0x80211D70u; f_802895A4(c); // 80211D6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80211D70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80211D74
  c->lr=c->r[0]; // 80211D78
  c->r[1]=c->r[1]+0x00000010u; // 80211D7C
  return; // 80211D80
}

// fn_80211D84
void f_80211D84(Ctx* __restrict c) {
  trace_call(0x80211D84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211D84
  c->r[0]=c->lr; // 80211D88
  W32(c->r[1]+0x00000024u,c->r[0]); // 80211D8C
  c->r[11]=c->r[1]+0x00000020u; // 80211D90
  c->lr=0x80211D98u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80211D94
  c->r[28]=c->r[3]|c->r[3]; // 80211D98
  c->lr=0x80211DA0u; f_8006F59C(c); // 80211D9C
  c->r[3]=0u+0x80410000u; // 80211DA0
  c->r[4]=0u+0x80070000u; // 80211DA4
  c->r[3]=c->r[3]+0xFFFFB750u; // 80211DA8
  c->r[5]=0u+0x80070000u; // 80211DAC
  c->r[0]=c->r[3]+0x00000040u; // 80211DB0
  W32(c->r[28]+0x00000010u,c->r[3]); // 80211DB4
  c->r[3]=c->r[28]+0x00002098u; // 80211DB8
  c->r[4]=c->r[4]+0x000058C4u; // 80211DBC
  W32(c->r[28]+0x00000048u,c->r[0]); // 80211DC0
  c->r[5]=c->r[5]+0x000059F8u; // 80211DC4
  c->r[6]=0u+0x00000058u; // 80211DC8
  c->r[7]=0u+0x0000000Au; // 80211DCC
  c->lr=0x80211DD4u; f_80289B34(c); // 80211DD0
  c->r[4]=0u+0x801B0000u; // 80211DD4
  c->r[5]=0u+0x80160000u; // 80211DD8
  c->r[3]=c->r[28]+0x00002408u; // 80211DDC
  c->r[6]=0u+0x00000038u; // 80211DE0
  c->r[4]=c->r[4]+0x00000C60u; // 80211DE4
  c->r[5]=c->r[5]+0x00004EA0u; // 80211DE8
  c->r[7]=0u+0x00000009u; // 80211DEC
  c->lr=0x80211DF4u; f_80289B34(c); // 80211DF0
  {uint32_t ea=c->r[2]+0xFFFFCB40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80211DF4
  c->r[3]=0u+0x80400000u; // 80211DF8
  c->r[31]=0u+0x00000000u; // 80211DFC
  c->r[30]=0u+0xFFFFFFFFu; // 80211E00
  {uint32_t ea=c->r[2]+0xFFFFCB44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211E04
  c->r[3]=c->r[3]+0xFFFFA8ECu; // 80211E08
  W32(c->r[28]+0x00002600u,c->r[3]); // 80211E0C
  c->r[3]=c->r[28]+0x00002600u; // 80211E10
  c->r[4]=0u+0x00000007u; // 80211E14
  c->r[5]=0u+0x00000008u; // 80211E18
  W32(c->r[28]+0x00002604u,c->r[31]); // 80211E1C
  W32(c->r[28]+0x00002608u,c->r[30]); // 80211E20
  {uint32_t ea=c->r[28]+0x0000260Cu; WF32(ea,c->f[1]);} // 80211E24
  {uint32_t ea=c->r[28]+0x00002610u; WF32(ea,c->f[1]);} // 80211E28
  W32(c->r[28]+0x00002614u,c->r[31]); // 80211E2C
  W32(c->r[28]+0x00002618u,c->r[30]); // 80211E30
  W32(c->r[28]+0x00002624u,c->r[31]); // 80211E34
  W32(c->r[28]+0x00002628u,c->r[31]); // 80211E38
  W32(c->r[28]+0x0000262Cu,c->r[30]); // 80211E3C
  W32(c->r[28]+0x00002630u,c->r[31]); // 80211E40
  W32(c->r[28]+0x00002634u,c->r[31]); // 80211E44
  {uint32_t ea=c->r[28]+0x0000261Cu; WF32(ea,c->f[0]);} // 80211E48
  {uint32_t ea=c->r[28]+0x00002620u; WF32(ea,c->f[0]);} // 80211E4C
  c->lr=0x80211E54u; f_801B0C4C(c); // 80211E50
  c->r[3]=c->r[28]+0x00002638u; // 80211E54
  c->r[4]=0u+0x00000004u; // 80211E58
  c->lr=0x80211E60u; f_801FD6F8(c); // 80211E5C
  {uint32_t ea=c->r[2]+0xFFFFCB44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80211E60
  c->r[3]=c->r[28]+0x00002668u; // 80211E64
  c->r[0]=c->r[28]+0x000067E8u; // 80211E68
L_80211E6C:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80211E6C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80211E70
  W32(c->r[3]+0x00000008u,c->r[30]); // 80211E74
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 80211E78
  W32(c->r[3]+0x00000010u,c->r[31]); // 80211E7C
  W32(c->r[3]+0x00000014u,c->r[30]); // 80211E80
  W8(c->r[3]+0x00000018u,c->r[31]); // 80211E84
  c->r[3]=c->r[3]+0x00000418u; // 80211E88
  cmpu(c,0,c->r[3],c->r[0]); // 80211E8C
  if (crb(c,0)) { IRQCHK(c); goto L_80211E6C; } // 80211E90
  c->r[29]=0u+0x00000000u; // 80211E94
  c->r[31]=0u+0x00000000u; // 80211E98
  c->r[30]=0u+0x00000000u; // 80211E9C
L_80211EA0:;
  c->r[3]=c->r[28]+c->r[31]; // 80211EA0
  c->r[4]=c->r[30]+0x00000009u; // 80211EA4
  c->r[3]=c->r[3]+0x00002408u; // 80211EA8
  c->r[5]=c->r[30]+0x0000000Au; // 80211EAC
  c->lr=0x80211EB4u; f_801B0C4C(c); // 80211EB0
  c->r[29]=c->r[29]+0x00000001u; // 80211EB4
  c->r[30]=c->r[30]+0x00000002u; // 80211EB8
  cmpu(c,0,c->r[29],0x00000009u); // 80211EBC
  c->r[31]=c->r[31]+0x00000038u; // 80211EC0
  if (crb(c,0)) { IRQCHK(c); goto L_80211EA0; } // 80211EC4
  c->r[11]=c->r[1]+0x00000020u; // 80211EC8
  c->r[3]=c->r[28]|c->r[28]; // 80211ECC
  c->lr=0x80211ED4u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80211ED0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80211ED4
  c->lr=c->r[0]; // 80211ED8
  c->r[1]=c->r[1]+0x00000020u; // 80211EDC
  return; // 80211EE0
}

// fn_80211EE4
void f_80211EE4(Ctx* __restrict c) {
  trace_call(0x80211EE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211EE4
  c->r[0]=c->lr; // 80211EE8
  c->r[5]=0u+0x0000001Bu; // 80211EEC
  c->r[6]=0u+0x0000000Du; // 80211EF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80211EF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80211EF8
  c->r[26]=c->r[3]|c->r[3]; // 80211EFC
  c->r[4]=R32(c->r[3]+0x00000014u); // 80211F00
  c->r[3]=c->r[3]+0x000008D0u; // 80211F04
  c->lr=0x80211F0Cu; f_801DFB08(c); // 80211F08
  c->r[0]=c->r[26]+0x00002638u; // 80211F0C
  c->r[4]=R32(c->r[26]+0x00000014u); // 80211F10
  W32(c->r[26]+0x00000994u,c->r[0]); // 80211F14
  c->r[3]=c->r[26]+0x00002600u; // 80211F18
  c->r[5]=c->r[26]+0x00002098u; // 80211F1C
  c->lr=0x80211F24u; f_80164F08(c); // 80211F20
  c->lr=0x80211F28u; f_8016D208(c); // 80211F24
  c->r[28]=c->r[3]|c->r[3]; // 80211F28
  c->r[3]=R32(c->r[26]+0x00000014u); // 80211F2C
  c->r[4]=0u+0x00001000u; // 80211F30
  c->lr=0x80211F38u; f_802A703C(c); // 80211F34
  c->r[30]=0u+0x80170000u; // 80211F38
  c->r[5]=c->r[3]|c->r[3]; // 80211F3C
  c->r[7]=c->r[28]|c->r[28]; // 80211F40
  c->r[3]=c->r[26]+0x00002600u; // 80211F44
  c->r[4]=c->r[30]+0xFFFFD24Cu; // 80211F48
  c->r[6]=0u+0x00001000u; // 80211F4C
  c->lr=0x80211F54u; f_80165010(c); // 80211F50
  c->r[27]=0u+0x00000000u; // 80211F54
  c->r[31]=0u+0x00000000u; // 80211F58
L_80211F5C:;
  c->r[0]=c->r[27]+0x00000001u; // 80211F5C
  c->r[3]=c->r[26]+c->r[31]; // 80211F60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)88); // 80211F64
  c->r[4]=R32(c->r[26]+0x00000014u); // 80211F68
  c->r[29]=c->r[3]+0x00002408u; // 80211F6C
  c->r[5]=c->r[26]+c->r[0]; // 80211F70
  c->r[3]=c->r[29]|c->r[29]; // 80211F74
  c->r[5]=c->r[5]+0x00002098u; // 80211F78
  c->lr=0x80211F80u; f_80164F08(c); // 80211F7C
  c->lr=0x80211F84u; f_8016D208(c); // 80211F80
  c->r[28]=c->r[3]|c->r[3]; // 80211F84
  c->r[3]=R32(c->r[26]+0x00000014u); // 80211F88
  c->r[4]=0u+0x00001000u; // 80211F8C
  c->lr=0x80211F94u; f_802A703C(c); // 80211F90
  c->r[5]=c->r[3]|c->r[3]; // 80211F94
  c->r[3]=c->r[29]|c->r[29]; // 80211F98
  c->r[7]=c->r[28]|c->r[28]; // 80211F9C
  c->r[4]=c->r[30]+0xFFFFD24Cu; // 80211FA0
  c->r[6]=0u+0x00001000u; // 80211FA4
  c->lr=0x80211FACu; f_80165010(c); // 80211FA8
  c->r[27]=c->r[27]+0x00000001u; // 80211FAC
  c->r[31]=c->r[31]+0x00000038u; // 80211FB0
  cmpu(c,0,c->r[27],0x00000009u); // 80211FB4
  if (crb(c,0)) { IRQCHK(c); goto L_80211F5C; } // 80211FB8
  c->r[3]=c->r[26]+0x000008D0u; // 80211FBC
  c->r[4]=c->r[26]+0x00000830u; // 80211FC0
  c->lr=0x80211FC8u; f_801DF848(c); // 80211FC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80211FC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80211FCC
  c->lr=c->r[0]; // 80211FD0
  c->r[1]=c->r[1]+0x00000020u; // 80211FD4
  return; // 80211FD8
}

// fn_80211FDC
void f_80211FDC(Ctx* __restrict c) {
  trace_call(0x80211FDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80211FDC
  c->r[0]=c->lr; // 80211FE0
  c->r[10]=c->r[9]|c->r[9]; // 80211FE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80211FE8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80211FEC
  c->r[29]=c->r[3]|c->r[3]; // 80211FF0
  c->lr=0x80211FF8u; f_800AD788(c); // 80211FF4
  c->r[3]=c->r[29]+0x000008D0u; // 80211FF8
  c->r[5]=c->r[29]+0x00002600u; // 80211FFC
  c->r[4]=0u+0x00000003u; // 80212000
  c->lr=0x80212008u; f_801DFB10(c); // 80212004
  c->r[30]=0u+0x00000000u; // 80212008
  c->r[31]=0u+0x00000000u; // 8021200C
L_80212010:;
  c->r[5]=c->r[29]+c->r[31]; // 80212010
  c->r[3]=c->r[29]+0x000008D0u; // 80212014
  c->r[4]=c->r[30]+0x00000004u; // 80212018
  c->r[5]=c->r[5]+0x00002408u; // 8021201C
  c->lr=0x80212024u; f_801DFB10(c); // 80212020
  c->r[30]=c->r[30]+0x00000001u; // 80212024
  c->r[31]=c->r[31]+0x00000038u; // 80212028
  cmpu(c,0,c->r[30],0x00000009u); // 8021202C
  if (crb(c,0)) { IRQCHK(c); goto L_80212010; } // 80212030
  c->r[5]=R32(c->r[29]+0x00000908u); // 80212034
  c->r[3]=0u+0x00000005u; // 80212038
  c->r[4]=0u+0x00000004u; // 8021203C
  c->r[0]=0u+0x0000000Au; // 80212040
  W32(c->r[5]+0x00000024u,c->r[3]); // 80212044
  c->r[3]=0u+0x00000000u; // 80212048
  W32(c->r[5]+0x00000028u,c->r[4]); // 8021204C
  c->ctr=c->r[0]; // 80212050
L_80212054:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 80212054
  c->r[5]=c->r[29]+c->r[3]; // 80212058
  c->r[0]=R32(c->r[29]+0x00000004u); // 8021205C
  c->r[3]=c->r[3]+0x00000058u; // 80212060
  W32(c->r[1]+0x00000008u,c->r[4]); // 80212064
  W32(c->r[5]+0x000020E4u,c->r[4]); // 80212068
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021206C
  W32(c->r[5]+0x000020E8u,c->r[0]); // 80212070
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212054; } // 80212074
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80212078
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021207C
  c->lr=c->r[0]; // 80212080
  c->r[1]=c->r[1]+0x00000020u; // 80212084
  return; // 80212088
}

// fn_8021208C
void f_8021208C(Ctx* __restrict c) {
  trace_call(0x8021208Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021208C
  c->r[0]=c->lr; // 80212090
  W32(c->r[1]+0x00000024u,c->r[0]); // 80212094
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80212098
  c->r[29]=c->r[3]|c->r[3]; // 8021209C
  c->r[30]=c->r[4]|c->r[4]; // 802120A0
  c->lr=0x802120A8u; f_800B25A4(c); // 802120A4
  c->r[31]=0u+0x00000000u; // 802120A8
  c->r[3]=c->r[30]|c->r[30]; // 802120AC
  W8(c->r[29]+0x000067E8u,c->r[31]); // 802120B0
  c->r[12]=R32(c->r[30]+0x00000000u); // 802120B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 802120B8
  c->ctr=c->r[12]; // 802120BC
  if (true) { c->lr=0x802120C4u; dispatch(c,c->ctr); } // 802120C0
  cmps(c,0,(int32_t)c->r[3],8); // 802120C4
  if (!crb(c,2)) { goto L_802120F0; } // 802120C8
  c->r[0]=0u+0x00000001u; // 802120CC
  c->r[4]=0u+0x803E0000u; // 802120D0
  W8(c->r[29]+0x000067E8u,c->r[0]); // 802120D4
  c->r[4]=c->r[4]+0x00002908u; // 802120D8
  c->r[3]=R32(c->r[29]+0x000004A8u); // 802120DC
  c->lr=0x802120E4u; f_80293554(c); // 802120E0
  cmps(c,0,(int32_t)c->r[3],0); // 802120E4
  if (crb(c,2)) { goto L_802120F0; } // 802120E8
  W8(c->r[29]+0x000067E8u,c->r[31]); // 802120EC
L_802120F0:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802120F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802120F4
  c->lr=c->r[0]; // 802120F8
  c->r[1]=c->r[1]+0x00000020u; // 802120FC
  return; // 80212100
}

// fn_80212104
void f_80212104(Ctx* __restrict c) {
  trace_call(0x80212104u);
  {uint32_t ea=c->r[1]+0xFFFFFDA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212104
  c->r[0]=c->lr; // 80212108
  W32(c->r[1]+0x00000264u,c->r[0]); // 8021210C
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[31]);} // 80212110
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,31,ea,0,0);} // 80212114
  W32(c->r[1]+0x0000024Cu,c->r[31]); // 80212118
  c->r[31]=c->r[3]|c->r[3]; // 8021211C
  W32(c->r[1]+0x00000248u,c->r[30]); // 80212120
  c->lr=0x80212128u; f_800B26AC(c); // 80212124
  c->r[0]=R8(c->r[31]+0x000067E8u); // 80212128
  cmps(c,0,(int32_t)c->r[0],0); // 8021212C
  if (crb(c,2)) { goto L_802122D0; } // 80212130
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80212134
  c->r[4]=c->r[31]+0x000008D0u; // 80212138
  c->r[3]=c->r[1]+0x00000214u; // 8021213C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80212140
  c->ctr=c->r[12]; // 80212144
  if (true) { c->lr=0x8021214Cu; dispatch(c,c->ctr); } // 80212148
  c->r[0]=0u+0x00000006u; // 8021214C
  c->r[5]=c->r[1]+0x000001E0u; // 80212150
  c->r[4]=c->r[31]+0x00000940u; // 80212154
  c->ctr=c->r[0]; // 80212158
L_8021215C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8021215C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80212160
  W32(c->r[5]+0x00000004u,c->r[3]); // 80212164
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80212168
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021215C; } // 8021216C
  c->r[3]=c->r[1]+0x00000214u; // 80212170
  c->r[4]=c->r[1]+0x000001E4u; // 80212174
  c->r[5]=c->r[1]+0x000001B4u; // 80212178
  c->lr=0x80212180u; f_802646E0(c); // 8021217C
  c->r[3]=c->r[31]|c->r[31]; // 80212180
  c->r[4]=c->r[1]+0x000001E4u; // 80212184
  c->lr=0x8021218Cu; f_800AF6F8(c); // 80212188
  {uint32_t ea=c->r[2]+0xFFFFCB48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021218C
  {uint32_t ea=c->r[2]+0xFFFFCB4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80212190
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80212194
  {uint32_t ea=c->r[2]+0xFFFFCB40u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212198
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8021219C
  fcmp(c,0,c->f[1],c->f[0]); // 802121A0
  if (!crb(c,1)) { goto L_802121AC; } // 802121A4
  c->f[1]=c->f[0]; // 802121A8
L_802121AC:;
  {uint32_t ea=c->r[2]+0xFFFFCB50u; c->f[0]=c->ps1[0]=RF32(ea);} // 802121AC
  c->r[30]=c->r[31]+0x000067ECu; // 802121B0
  c->r[3]=c->r[1]+0x00000014u; // 802121B4
  c->r[4]=c->r[1]+0x000001B4u; // 802121B8
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 802121BC
  c->lr=0x802121C4u; f_80265A3C(c); // 802121C0
  c->r[4]=c->r[30]|c->r[30]; // 802121C4
  c->r[3]=c->r[1]+0x00000024u; // 802121C8
  c->lr=0x802121D0u; f_80265A3C(c); // 802121CC
  c->f[1]=c->f[31]; // 802121D0
  c->r[3]=c->r[1]+0x00000014u; // 802121D4
  c->r[5]=c->r[3]|c->r[3]; // 802121D8
  c->r[4]=c->r[1]+0x00000024u; // 802121DC
  c->lr=0x802121E4u; f_80265C6C(c); // 802121E0
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802121E4
  c->r[3]=c->r[1]+0x00000034u; // 802121E8
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802121EC
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802121F0
  c->lr=0x802121F8u; f_800521A0(c); // 802121F4
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802121F8
  c->r[3]=c->r[1]+0x00000040u; // 802121FC
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80212200
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80212204
  c->lr=0x8021220Cu; f_800521A0(c); // 80212208
  {uint32_t ea=c->r[2]+0xFFFFCB40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021220C
  c->r[3]=c->r[1]+0x00000034u; // 80212210
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 80212214
  c->lr=0x8021221Cu; f_802129DC(c); // 80212218
  c->f[1]=c->f[31]; // 8021221C
  c->r[3]=c->r[1]+0x00000040u; // 80212220
  c->lr=0x80212228u; f_802129DC(c); // 80212224
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,1,ea,0,0);} // 80212228
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,0,ea,0,0);} // 8021222C
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80212230
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,0,ea,0,0);} // 80212234
  {uint32_t ea=c->r[1]+0x0000003Cu; psq_load(c,1,ea,1,0);} // 80212238
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,0,ea,1,0);} // 8021223C
  {double t0=S(c->f[1]+c->f[0]), t1=S(c->ps1[1]+c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80212240
  {uint32_t ea=c->r[1]+0x0000003Cu; psq_store(c,0,ea,1,0);} // 80212244
  c->r[3]=c->r[1]+0x00000094u; // 80212248
  c->r[4]=c->r[1]+0x00000014u; // 8021224C
  c->lr=0x80212254u; f_80264EAC(c); // 80212250
  c->r[0]=0u+0x00000006u; // 80212254
  c->r[5]=c->r[1]+0x000001B0u; // 80212258
  c->r[4]=c->r[1]+0x00000090u; // 8021225C
  c->ctr=c->r[0]; // 80212260
L_80212264:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80212264
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80212268
  W32(c->r[5]+0x00000004u,c->r[3]); // 8021226C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80212270
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212264; } // 80212274
  c->r[3]=c->r[1]+0x000001B4u; // 80212278
  c->r[4]=c->r[1]+0x00000034u; // 8021227C
  c->lr=0x80212284u; f_80032FF4(c); // 80212280
  c->r[3]=c->r[1]+0x00000214u; // 80212284
  c->r[4]=c->r[1]+0x000000C4u; // 80212288
  c->lr=0x80212290u; f_80264994(c); // 8021228C
  c->r[3]=c->r[1]+0x000000C4u; // 80212290
  c->r[4]=c->r[1]+0x000001B4u; // 80212294
  c->r[5]=c->r[1]+0x000000F4u; // 80212298
  c->lr=0x802122A0u; f_802646E0(c); // 8021229C
  c->r[0]=0u+0x00000006u; // 802122A0
  c->r[5]=c->r[1]+0x000001E0u; // 802122A4
  c->r[4]=c->r[1]+0x000000F0u; // 802122A8
  c->ctr=c->r[0]; // 802122AC
L_802122B0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 802122B0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 802122B4
  W32(c->r[5]+0x00000004u,c->r[3]); // 802122B8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 802122BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802122B0; } // 802122C0
  c->r[3]=c->r[31]+0x000008ECu; // 802122C4
  c->r[4]=c->r[1]+0x000001E4u; // 802122C8
  c->lr=0x802122D0u; f_8016A37C(c); // 802122CC
L_802122D0:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 802122D0
  c->r[4]=c->r[31]+0x000008D0u; // 802122D4
  c->r[3]=c->r[1]+0x00000184u; // 802122D8
  c->r[12]=R32(c->r[12]+0x00000040u); // 802122DC
  c->ctr=c->r[12]; // 802122E0
  if (true) { c->lr=0x802122E8u; dispatch(c,c->ctr); } // 802122E4
  c->r[0]=0u+0x00000006u; // 802122E8
  c->r[5]=c->r[1]+0x00000150u; // 802122EC
  c->r[4]=c->r[31]+0x00000940u; // 802122F0
  c->ctr=c->r[0]; // 802122F4
L_802122F8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 802122F8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 802122FC
  W32(c->r[5]+0x00000004u,c->r[3]); // 80212300
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80212304
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802122F8; } // 80212308
  c->r[3]=c->r[1]+0x00000184u; // 8021230C
  c->r[4]=c->r[1]+0x00000154u; // 80212310
  c->r[5]=c->r[1]+0x00000124u; // 80212314
  c->lr=0x8021231Cu; f_802646E0(c); // 80212318
  {uint32_t ea=c->r[1]+0x00000190u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021231C
  c->r[3]=c->r[1]+0x00000088u; // 80212320
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80212324
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80212328
  c->lr=0x80212330u; f_800521A0(c); // 8021232C
  {uint32_t ea=c->r[1]+0x00000130u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212330
  c->r[3]=c->r[1]+0x0000007Cu; // 80212334
  {uint32_t ea=c->r[1]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 80212338
  {uint32_t ea=c->r[1]+0x00000150u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021233C
  c->lr=0x80212344u; f_800521A0(c); // 80212340
  c->lr=0x80212348u; f_80128B5C(c); // 80212344
  c->r[4]=c->r[3]|c->r[3]; // 80212348
  c->r[3]=c->r[1]+0x00000070u; // 8021234C
  c->r[4]=c->r[4]+0x00000020u; // 80212350
  c->lr=0x80212358u; f_8003F484(c); // 80212354
  c->lr=0x8021235Cu; f_80128B5C(c); // 80212358
  c->r[4]=c->r[3]|c->r[3]; // 8021235C
  c->r[3]=c->r[1]+0x00000064u; // 80212360
  c->r[5]=0u+0x00000000u; // 80212364
  c->lr=0x8021236Cu; f_80129ACC(c); // 80212368
  c->r[3]=c->r[1]+0x00000008u; // 8021236C
  c->r[4]=c->r[1]+0x00000064u; // 80212370
  c->lr=0x80212378u; f_8003F484(c); // 80212374
  c->r[3]=c->r[1]+0x00000008u; // 80212378
  c->r[5]=c->r[1]+0x00000070u; // 8021237C
  c->r[4]=c->r[3]|c->r[3]; // 80212380
  c->lr=0x80212388u; f_80064C74(c); // 80212384
  c->r[3]=c->r[1]+0x00000008u; // 80212388
  c->lr=0x80212390u; f_802657AC(c); // 8021238C
  {uint32_t ea=c->r[2]+0xFFFFCB54u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212390
  c->r[3]=c->r[1]+0x00000058u; // 80212394
  c->r[4]=c->r[1]+0x00000088u; // 80212398
  c->r[5]=c->r[1]+0x00000070u; // 8021239C
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 802123A0
  c->lr=0x802123A8u; f_80064C74(c); // 802123A4
  {uint32_t ea=c->r[2]+0xFFFFCB58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802123A8
  c->r[3]=c->r[1]+0x00000058u; // 802123AC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 802123B0
  c->lr=0x802123B8u; f_80065368(c); // 802123B4
  cmps(c,0,(int32_t)c->r[3],0); // 802123B8
  if (!crb(c,2)) { goto L_802123CC; } // 802123BC
  c->r[3]=c->r[1]+0x00000058u; // 802123C0
  c->r[4]=c->r[3]|c->r[3]; // 802123C4
  c->lr=0x802123CCu; f_80265750(c); // 802123C8
L_802123CC:;
  c->r[3]=c->r[1]+0x0000004Cu; // 802123CC
  c->r[4]=c->r[1]+0x00000058u; // 802123D0
  c->lr=0x802123D8u; f_8003F484(c); // 802123D4
  c->f[1]=c->f[31]; // 802123D8
  c->r[4]=c->r[3]|c->r[3]; // 802123DC
  c->r[3]=c->r[31]|c->r[31]; // 802123E0
  c->lr=0x802123E8u; f_800AE058(c); // 802123E4
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,31,ea,0,0);} // 802123E8
  c->r[0]=R32(c->r[1]+0x00000264u); // 802123EC
  {uint32_t ea=c->r[1]+0x00000250u; c->f[31]=RF64(ea);} // 802123F0
  c->r[31]=R32(c->r[1]+0x0000024Cu); // 802123F4
  c->r[30]=R32(c->r[1]+0x00000248u); // 802123F8
  c->lr=c->r[0]; // 802123FC
  c->r[1]=c->r[1]+0x00000260u; // 80212400
  return; // 80212404
}

// fn_80212408
void f_80212408(Ctx* __restrict c) {
  trace_call(0x80212408u);
  {uint32_t ea=c->r[1]+0xFFFFF0E0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212408
  c->r[0]=c->lr; // 8021240C
  {uint32_t ea=c->r[2]+0xFFFFCB40u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212410
  W32(c->r[1]+0x00000F24u,c->r[0]); // 80212414
  W32(c->r[1]+0x00000F1Cu,c->r[31]); // 80212418
  c->r[31]=c->r[4]|c->r[4]; // 8021241C
  W32(c->r[1]+0x00000F18u,c->r[30]); // 80212420
  c->r[30]=c->r[3]|c->r[3]; // 80212424
  {uint32_t ea=c->r[3]+0x000008F0u; WF32(ea,c->f[0]);} // 80212428
  c->r[3]=c->r[1]+0x00000114u; // 8021242C
  c->lr=0x80212434u; f_800462E8(c); // 80212430
  c->r[12]=R32(c->r[30]+0x000008D0u); // 80212434
  c->r[4]=c->r[30]+0x000008D0u; // 80212438
  c->r[3]=c->r[1]+0x000000E4u; // 8021243C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80212440
  c->ctr=c->r[12]; // 80212444
  if (true) { c->lr=0x8021244Cu; dispatch(c,c->ctr); } // 80212448
  c->r[0]=0u+0x00000006u; // 8021244C
  c->r[5]=c->r[1]+0x000000B0u; // 80212450
  c->r[4]=c->r[30]+0x00000940u; // 80212454
  c->ctr=c->r[0]; // 80212458
L_8021245C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8021245C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80212460
  W32(c->r[5]+0x00000004u,c->r[3]); // 80212464
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80212468
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021245C; } // 8021246C
  c->r[0]=0u+0x00000006u; // 80212470
  c->r[5]=c->r[1]+0x00000020u; // 80212474
  c->r[4]=c->r[1]+0x000000B0u; // 80212478
  c->ctr=c->r[0]; // 8021247C
L_80212480:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80212480
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80212484
  W32(c->r[5]+0x00000004u,c->r[3]); // 80212488
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8021248C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212480; } // 80212490
  c->r[0]=0u+0x00000006u; // 80212494
  c->r[5]=c->r[1]+0x00000050u; // 80212498
  c->r[4]=c->r[1]+0x000000E0u; // 8021249C
  c->ctr=c->r[0]; // 802124A0
L_802124A4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 802124A4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 802124A8
  W32(c->r[5]+0x00000004u,c->r[3]); // 802124AC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 802124B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802124A4; } // 802124B4
  {uint32_t ea=c->r[2]+0xFFFFCB40u; c->f[1]=c->ps1[1]=RF32(ea);} // 802124B8
  c->r[3]=c->r[1]+0x00000084u; // 802124BC
  c->r[4]=c->r[1]+0x00000114u; // 802124C0
  c->r[5]=c->r[1]+0x00000054u; // 802124C4
  c->f[2]=c->f[1]; // 802124C8
  c->r[6]=c->r[1]+0x00000024u; // 802124CC
  c->lr=0x802124D4u; f_80180C24(c); // 802124D0
  c->r[0]=0u+0x00000006u; // 802124D4
  c->r[5]=c->r[1]+0x000000B0u; // 802124D8
  c->r[4]=c->r[1]+0x00000080u; // 802124DC
  c->ctr=c->r[0]; // 802124E0
L_802124E4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 802124E4
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 802124E8
  W32(c->r[5]+0x00000004u,c->r[3]); // 802124EC
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 802124F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802124E4; } // 802124F4
  c->r[3]=c->r[30]+0x000008ECu; // 802124F8
  c->r[4]=c->r[1]+0x000000B4u; // 802124FC
  c->lr=0x80212504u; f_8016A37C(c); // 80212500
  c->r[3]=R32(c->r[30]+0x00000974u); // 80212504
  c->r[4]=R32(c->r[31]+0x00000014u); // 80212508
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021250C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80212510
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80212514
  if (!crb(c,2)) { goto L_80212554; } // 80212518
  {uint32_t ea=c->r[2]+0xFFFFCB58u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021251C
  c->lr=0x80212524u; f_8016498C(c); // 80212520
  cmps(c,0,(int32_t)c->r[3],0); // 80212524
  if (crb(c,2)) { goto L_80212554; } // 80212528
  c->r[3]=c->r[1]+0x00000010u; // 8021252C
  c->r[4]=0u+0x00000000u; // 80212530
  c->lr=0x80212538u; f_800770B8(c); // 80212534
  c->r[5]=R32(c->r[30]+0x00000000u); // 80212538
  c->r[3]=c->r[1]+0x00000008u; // 8021253C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80212540
  c->r[4]=c->r[1]+0x00000010u; // 80212544
  W32(c->r[1]+0x00000008u,c->r[5]); // 80212548
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021254C
  c->lr=0x80212554u; f_80077140(c); // 80212550
L_80212554:;
  c->r[3]=c->r[1]+0x00000114u; // 80212554
  c->r[4]=0u+0xFFFFFFFFu; // 80212558
  c->lr=0x80212560u; f_80046394(c); // 8021255C
  c->r[0]=R32(c->r[1]+0x00000F24u); // 80212560
  c->r[31]=R32(c->r[1]+0x00000F1Cu); // 80212564
  c->r[30]=R32(c->r[1]+0x00000F18u); // 80212568
  c->lr=c->r[0]; // 8021256C
  c->r[1]=c->r[1]+0x00000F20u; // 80212570
  return; // 80212574
}

// fn_80212578
void f_80212578(Ctx* __restrict c) {
  trace_call(0x80212578u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212578
  c->r[0]=c->lr; // 8021257C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80212580
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80212584
  c->r[31]=c->r[3]|c->r[3]; // 80212588
  c->lr=0x80212590u; f_80071C18(c); // 8021258C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80212590
  c->r[4]=c->r[31]+0x000008D0u; // 80212594
  c->r[3]=c->r[1]+0x00000008u; // 80212598
  c->r[12]=R32(c->r[12]+0x00000040u); // 8021259C
  c->ctr=c->r[12]; // 802125A0
  if (true) { c->lr=0x802125A8u; dispatch(c,c->ctr); } // 802125A4
  c->r[0]=0u+0x00000006u; // 802125A8
  c->r[5]=c->r[31]+0x000067E8u; // 802125AC
  c->r[4]=c->r[1]+0x00000004u; // 802125B0
  c->ctr=c->r[0]; // 802125B4
L_802125B8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 802125B8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 802125BC
  W32(c->r[5]+0x00000004u,c->r[3]); // 802125C0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 802125C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802125B8; } // 802125C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802125CC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802125D0
  c->lr=c->r[0]; // 802125D4
  c->r[1]=c->r[1]+0x00000040u; // 802125D8
  return; // 802125DC
}

// fn_802125E0
void f_802125E0(Ctx* __restrict c) {
  trace_call(0x802125E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802125E0
  c->r[0]=c->lr; // 802125E4
  W32(c->r[1]+0x00000064u,c->r[0]); // 802125E8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 802125EC
  c->r[31]=c->r[4]|c->r[4]; // 802125F0
  W32(c->r[1]+0x00000058u,c->r[30]); // 802125F4
  c->r[30]=c->r[3]|c->r[3]; // 802125F8
  c->r[5]=R32(c->r[3]+0x00000974u); // 802125FC
  c->r[6]=R32(c->r[4]+0x00000034u); // 80212600
  c->r[4]=R32(c->r[5]+0x00000000u); // 80212604
  c->r[0]=R32(c->r[4]+0x00000018u); // 80212608
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8021260C
  if (crb(c,2)) { goto L_80212664; } // 80212610
  c->r[0]=0u+0x00000006u; // 80212614
  c->r[5]=c->r[1]+0x0000001Cu; // 80212618
  c->r[4]=c->r[3]+0x00000940u; // 8021261C
  c->ctr=c->r[0]; // 80212620
L_80212624:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80212624
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80212628
  W32(c->r[5]+0x00000004u,c->r[3]); // 8021262C
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80212630
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212624; } // 80212634
  {uint32_t ea=c->r[2]+0xFFFFCB58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212638
  c->r[3]=c->r[1]+0x00000014u; // 8021263C
  c->f[2]=c->f[1]; // 80212640
  c->f[3]=c->f[1]; // 80212644
  c->lr=0x8021264Cu; f_800521A0(c); // 80212648
  c->r[4]=c->r[3]|c->r[3]; // 8021264C
  c->r[3]=c->r[1]+0x00000020u; // 80212650
  c->lr=0x80212658u; f_80032FF4(c); // 80212654
  c->r[3]=c->r[30]+0x000008ECu; // 80212658
  c->r[4]=c->r[1]+0x00000020u; // 8021265C
  c->lr=0x80212664u; f_8016A37C(c); // 80212660
L_80212664:;
  {uint32_t ea=c->r[2]+0xFFFFCB58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212664
  c->r[3]=c->r[1]+0x00000008u; // 80212668
  c->f[2]=c->f[1]; // 8021266C
  c->f[3]=c->f[1]; // 80212670
  c->lr=0x80212678u; f_800521A0(c); // 80212674
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212678
  c->r[4]=c->r[3]|c->r[3]; // 8021267C
  c->r[3]=c->r[30]|c->r[30]; // 80212680
  c->lr=0x80212688u; f_800AE058(c); // 80212684
  c->r[0]=R32(c->r[1]+0x00000064u); // 80212688
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8021268C
  c->r[30]=R32(c->r[1]+0x00000058u); // 80212690
  c->lr=c->r[0]; // 80212694
  c->r[1]=c->r[1]+0x00000060u; // 80212698
  return; // 8021269C
}

// fn_802126A0
void f_802126A0(Ctx* __restrict c) {
  trace_call(0x802126A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802126A0
  c->r[0]=c->lr; // 802126A4
  {uint32_t ea=c->r[2]+0xFFFFCB5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802126A8
  c->r[4]=c->r[3]+0x000008ECu; // 802126AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802126B0
  c->r[6]=0u+0x00000000u; // 802126B4
  {uint32_t ea=c->r[2]+0xFFFFCB58u; c->f[2]=c->ps1[2]=RF32(ea);} // 802126B8
  c->r[7]=0u+0x00000000u; // 802126BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802126C0
  c->r[31]=c->r[5]|c->r[5]; // 802126C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802126C8
  c->r[30]=c->r[3]|c->r[3]; // 802126CC
  c->r[3]=c->r[3]+0x00000C88u; // 802126D0
  c->r[5]=R32(c->r[5]+0x0000002Cu); // 802126D4
  c->lr=0x802126DCu; f_800BB0C8(c); // 802126D8
  c->lr=0x802126E0u; f_80128B5C(c); // 802126DC
  c->r[4]=c->r[3]|c->r[3]; // 802126E0
  c->r[3]=c->r[1]+0x00000008u; // 802126E4
  c->r[4]=c->r[4]+0x00000020u; // 802126E8
  c->lr=0x802126F0u; f_8003F484(c); // 802126EC
  c->r[3]=c->r[31]+0x00000010u; // 802126F0
  c->r[4]=c->r[1]+0x00000008u; // 802126F4
  c->lr=0x802126FCu; f_8003F468(c); // 802126F8
  {uint32_t ea=c->r[30]+0x0000039Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802126FC
  c->r[3]=c->r[30]+0x000008ECu; // 80212700
  c->lr=0x80212708u; f_80075394(c); // 80212704
  c->r[0]=R32(c->r[1]+0x00000024u); // 80212708
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021270C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80212710
  c->lr=c->r[0]; // 80212714
  c->r[1]=c->r[1]+0x00000020u; // 80212718
  return; // 8021271C
}

// fn_80212720
void f_80212720(Ctx* __restrict c) {
  trace_call(0x80212720u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212720
  c->r[0]=c->lr; // 80212724
  W32(c->r[1]+0x00000224u,c->r[0]); // 80212728
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[31]);} // 8021272C
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,31,ea,0,0);} // 80212730
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 80212734
  c->r[31]=c->r[4]|c->r[4]; // 80212738
  c->r[4]=c->r[4]+0x00000020u; // 8021273C
  W32(c->r[1]+0x00000208u,c->r[30]); // 80212740
  c->r[30]=c->r[3]|c->r[3]; // 80212744
  c->r[3]=c->r[1]+0x00000064u; // 80212748
  c->lr=0x80212750u; f_8003F484(c); // 8021274C
  c->r[12]=R32(c->r[30]+0x000008D0u); // 80212750
  c->r[4]=c->r[30]+0x000008D0u; // 80212754
  c->r[3]=c->r[1]+0x000001D4u; // 80212758
  c->r[12]=R32(c->r[12]+0x00000040u); // 8021275C
  c->ctr=c->r[12]; // 80212760
  if (true) { c->lr=0x80212768u; dispatch(c,c->ctr); } // 80212764
  c->r[0]=0u+0x00000006u; // 80212768
  c->r[5]=c->r[1]+0x000001A0u; // 8021276C
  c->r[4]=c->r[30]+0x00000940u; // 80212770
  c->ctr=c->r[0]; // 80212774
L_80212778:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80212778
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8021277C
  W32(c->r[5]+0x00000004u,c->r[3]); // 80212780
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80212784
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212778; } // 80212788
  c->r[3]=c->r[30]|c->r[30]; // 8021278C
  c->r[4]=c->r[1]+0x000001A4u; // 80212790
  c->lr=0x80212798u; f_800AF6F8(c); // 80212794
  c->f[31]=c->f[1]; // 80212798
  c->lr=0x802127A0u; f_80128B5C(c); // 8021279C
  c->r[4]=c->r[3]|c->r[3]; // 802127A0
  c->r[3]=c->r[1]+0x0000004Cu; // 802127A4
  c->r[4]=c->r[4]+0x00000020u; // 802127A8
  c->lr=0x802127B0u; f_8003F484(c); // 802127AC
  c->r[3]=c->r[31]+0x00000010u; // 802127B0
  c->r[4]=c->r[1]+0x0000004Cu; // 802127B4
  c->lr=0x802127BCu; f_8003F468(c); // 802127B8
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802127BC
  c->r[3]=c->r[1]+0x00000040u; // 802127C0
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802127C4
  {uint32_t ea=c->r[1]+0x00000200u; c->f[3]=c->ps1[3]=RF32(ea);} // 802127C8
  c->lr=0x802127D0u; f_800521A0(c); // 802127CC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802127D0
  c->r[3]=c->r[30]|c->r[30]; // 802127D4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 802127D8
  c->r[4]=c->r[31]+0x00000010u; // 802127DC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[31]); // 802127E0
  {uint32_t ea=c->r[2]+0xFFFFCB4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802127E4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 802127E8
  c->r[5]=c->r[1]+0x00000008u; // 802127EC
  {uint32_t ea=c->r[2]+0xFFFFCB60u; c->f[2]=c->ps1[2]=RF32(ea);} // 802127F0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 802127F4
  c->lr=0x802127FCu; f_800B02B4(c); // 802127F8
  c->r[0]=0u+0x00000006u; // 802127FC
  c->r[5]=c->r[1]+0x000000E0u; // 80212800
  c->r[4]=c->r[30]+0x00000940u; // 80212804
  c->ctr=c->r[0]; // 80212808
L_8021280C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8021280C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80212810
  W32(c->r[5]+0x00000004u,c->r[3]); // 80212814
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80212818
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021280C; } // 8021281C
  c->r[3]=c->r[1]+0x000001D4u; // 80212820
  c->r[4]=c->r[1]+0x000000E4u; // 80212824
  c->r[5]=c->r[1]+0x00000174u; // 80212828
  c->lr=0x80212830u; f_802646E0(c); // 8021282C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212830
  c->r[3]=c->r[1]+0x00000058u; // 80212834
  {uint32_t ea=c->r[1]+0x00000190u; c->f[2]=c->ps1[2]=RF32(ea);} // 80212838
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021283C
  c->lr=0x80212844u; f_800521A0(c); // 80212840
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212844
  c->r[3]=c->r[1]+0x00000034u; // 80212848
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021284C
  {uint32_t ea=c->r[1]+0x00000200u; c->f[3]=c->ps1[3]=RF32(ea);} // 80212850
  c->lr=0x80212858u; f_800521A0(c); // 80212854
  c->lr=0x8021285Cu; f_80128B5C(c); // 80212858
  c->r[4]=c->r[1]+0x00000034u; // 8021285C
  c->r[5]=c->r[1]+0x00000058u; // 80212860
  c->r[6]=0u+0x00000000u; // 80212864
  c->lr=0x8021286Cu; f_8012A620(c); // 80212868
  cmps(c,0,(int32_t)c->r[3],0); // 8021286C
  if (crb(c,2)) { goto L_802128A8; } // 80212870
  c->r[3]=c->r[1]+0x00000174u; // 80212874
  c->r[4]=c->r[1]+0x00000058u; // 80212878
  c->lr=0x80212880u; f_80032FF4(c); // 8021287C
  c->r[3]=c->r[1]+0x000001D4u; // 80212880
  c->r[4]=c->r[1]+0x000000B4u; // 80212884
  c->lr=0x8021288Cu; f_80264994(c); // 80212888
  c->r[3]=c->r[1]+0x000000B4u; // 8021288C
  c->r[4]=c->r[1]+0x00000174u; // 80212890
  c->r[5]=c->r[1]+0x00000144u; // 80212894
  c->lr=0x8021289Cu; f_802646E0(c); // 80212898
  c->r[3]=c->r[30]+0x000008ECu; // 8021289C
  c->r[4]=c->r[1]+0x00000144u; // 802128A0
  c->lr=0x802128A8u; f_8016A37C(c); // 802128A4
L_802128A8:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 802128A8
  c->r[3]=c->r[1]+0x00000028u; // 802128AC
  c->r[0]=R32(c->r[30]+0x00000004u); // 802128B0
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802128B4
  W32(c->r[1]+0x00000014u,c->r[4]); // 802128B8
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802128BC
  W32(c->r[1]+0x00000018u,c->r[0]); // 802128C0
  {uint32_t ea=c->r[1]+0x00000200u; c->f[3]=c->ps1[3]=RF32(ea);} // 802128C4
  c->lr=0x802128CCu; f_800521A0(c); // 802128C8
  c->lr=0x802128D0u; f_80128B5C(c); // 802128CC
  c->r[4]=c->r[1]+0x00000028u; // 802128D0
  c->r[5]=c->r[1]+0x00000058u; // 802128D4
  c->r[6]=c->r[1]+0x00000014u; // 802128D8
  c->lr=0x802128E0u; f_8012A73C(c); // 802128DC
  cmps(c,0,(int32_t)c->r[3],0); // 802128E0
  if (crb(c,2)) { goto L_8021291C; } // 802128E4
  c->r[3]=c->r[1]+0x00000174u; // 802128E8
  c->r[4]=c->r[1]+0x00000058u; // 802128EC
  c->lr=0x802128F4u; f_80032FF4(c); // 802128F0
  c->r[3]=c->r[1]+0x000001D4u; // 802128F4
  c->r[4]=c->r[1]+0x00000084u; // 802128F8
  c->lr=0x80212900u; f_80264994(c); // 802128FC
  c->r[3]=c->r[1]+0x00000084u; // 80212900
  c->r[4]=c->r[1]+0x00000174u; // 80212904
  c->r[5]=c->r[1]+0x00000114u; // 80212908
  c->lr=0x80212910u; f_802646E0(c); // 8021290C
  c->r[3]=c->r[30]+0x000008ECu; // 80212910
  c->r[4]=c->r[1]+0x00000114u; // 80212914
  c->lr=0x8021291Cu; f_8016A37C(c); // 80212918
L_8021291C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 8021291C
  cmps(c,0,(int32_t)c->r[0],1); // 80212920
  if (crb(c,2)) { goto L_8021297C; } // 80212924
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212928
  c->r[3]=c->r[1]+0x0000001Cu; // 8021292C
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80212930
  {uint32_t ea=c->r[1]+0x00000200u; c->f[3]=c->ps1[3]=RF32(ea);} // 80212934
  c->lr=0x8021293Cu; f_800521A0(c); // 80212938
  c->r[3]=c->r[31]+0x00000010u; // 8021293C
  c->r[4]=c->r[1]+0x0000001Cu; // 80212940
  c->lr=0x80212948u; f_80265924(c); // 80212944
  {uint32_t ea=c->r[2]+0xFFFFCB64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80212948
  fcmp(c,0,c->f[1],c->f[0]); // 8021294C
  if (!crb(c,0)) { goto L_8021297C; } // 80212950
  c->r[3]=c->r[1]+0x00000070u; // 80212954
  c->r[4]=0u+0x00000000u; // 80212958
  c->lr=0x80212960u; f_800770B8(c); // 8021295C
  c->r[5]=R32(c->r[30]+0x00000000u); // 80212960
  c->r[3]=c->r[1]+0x0000000Cu; // 80212964
  c->r[0]=R32(c->r[30]+0x00000004u); // 80212968
  c->r[4]=c->r[1]+0x00000070u; // 8021296C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 80212970
  W32(c->r[1]+0x00000010u,c->r[0]); // 80212974
  c->lr=0x8021297Cu; f_80077140(c); // 80212978
L_8021297C:;
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,31,ea,0,0);} // 8021297C
  c->r[0]=R32(c->r[1]+0x00000224u); // 80212980
  {uint32_t ea=c->r[1]+0x00000210u; c->f[31]=RF64(ea);} // 80212984
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 80212988
  c->r[30]=R32(c->r[1]+0x00000208u); // 8021298C
  c->lr=c->r[0]; // 80212990
  c->r[1]=c->r[1]+0x00000220u; // 80212994
  return; // 80212998
}

// fn_8021299C
void f_8021299C(Ctx* __restrict c) {
  trace_call(0x8021299Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021299C
  f_802129F8(c); return; // 802129A0
}

// fn_802129A4
void f_802129A4(Ctx* __restrict c) {
  trace_call(0x802129A4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802129A4
  f_802126A0(c); return; // 802129A8
}

// fn_802129AC
void f_802129AC(Ctx* __restrict c) {
  trace_call(0x802129ACu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802129AC
  f_8021208C(c); return; // 802129B0
}

// fn_802129B4
void f_802129B4(Ctx* __restrict c) {
  trace_call(0x802129B4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802129B4
  f_80212578(c); return; // 802129B8
}

// fn_802129BC
void f_802129BC(Ctx* __restrict c) {
  trace_call(0x802129BCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802129BC
  f_80212408(c); return; // 802129C0
}

// fn_802129C4
void f_802129C4(Ctx* __restrict c) {
  trace_call(0x802129C4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802129C4
  f_80212720(c); return; // 802129C8
}

// fn_802129CC
void f_802129CC(Ctx* __restrict c) {
  trace_call(0x802129CCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802129CC
  f_80212104(c); return; // 802129D0
}

// fn_802129D4
void f_802129D4(Ctx* __restrict c) {
  trace_call(0x802129D4u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802129D4
  f_802125E0(c); return; // 802129D8
}

// fn_802129DC
void f_802129DC(Ctx* __restrict c) {
  trace_call(0x802129DCu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802129DC
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802129E0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802129E4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,0,ea,1,0);} // 802129E8
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802129EC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 802129F0
  return; // 802129F4
}

// fn_802129F8
void f_802129F8(Ctx* __restrict c) {
  trace_call(0x802129F8u);
  {uint32_t ea=c->r[2]+0xFFFFCB40u; c->f[1]=c->ps1[1]=RF32(ea);} // 802129F8
  c->r[3]=c->r[3]+0x000008ECu; // 802129FC
  f_80075394(c); return; // 80212A00
}

// fn_80212A04
void f_80212A04(Ctx* __restrict c) {
  trace_call(0x80212A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212A04
  c->r[0]=c->lr; // 80212A08
  cmps(c,0,(int32_t)c->r[3],0); // 80212A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80212A10
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80212A14
  c->r[30]=c->r[3]|c->r[3]; // 80212A18
  c->r[31]=c->r[4]|c->r[4]; // 80212A1C
  if (crb(c,2)) { goto L_80212A88; } // 80212A20
  c->r[4]=0u+0xFFFFFFFFu; // 80212A24
  c->r[3]=c->r[3]+0x00002638u; // 80212A28
  c->lr=0x80212A30u; f_801FD744(c); // 80212A2C
  c->r[3]=c->r[30]+0x00002600u; // 80212A30
  c->r[4]=0u+0xFFFFFFFFu; // 80212A34
  c->lr=0x80212A3Cu; f_80164EA0(c); // 80212A38
  c->r[4]=0u+0x80160000u; // 80212A3C
  c->r[3]=c->r[30]+0x00002408u; // 80212A40
  c->r[4]=c->r[4]+0x00004EA0u; // 80212A44
  c->r[5]=0u+0x00000038u; // 80212A48
  c->r[6]=0u+0x00000009u; // 80212A4C
  c->lr=0x80212A54u; f_80289C2C(c); // 80212A50
  c->r[4]=0u+0x80070000u; // 80212A54
  c->r[3]=c->r[30]+0x00002098u; // 80212A58
  c->r[4]=c->r[4]+0x000059F8u; // 80212A5C
  c->r[5]=0u+0x00000058u; // 80212A60
  c->r[6]=0u+0x0000000Au; // 80212A64
  c->lr=0x80212A6Cu; f_80289C2C(c); // 80212A68
  c->r[3]=c->r[30]|c->r[30]; // 80212A6C
  c->r[4]=0u+0x00000000u; // 80212A70
  c->lr=0x80212A78u; f_80079820(c); // 80212A74
  cmps(c,0,(int32_t)c->r[31],0); // 80212A78
  if (!crb(c,1)) { goto L_80212A88; } // 80212A7C
  c->r[3]=c->r[30]|c->r[30]; // 80212A80
  c->lr=0x80212A88u; f_802896EC(c); // 80212A84
L_80212A88:;
  c->r[3]=c->r[30]|c->r[30]; // 80212A88
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80212A8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80212A90
  c->lr=c->r[0]; // 80212A94
  c->r[1]=c->r[1]+0x00000010u; // 80212A98
  return; // 80212A9C
}

// fn_80212AA0
void f_80212AA0(Ctx* __restrict c) {
  trace_call(0x80212AA0u);
  {uint32_t ea=c->r[2]+0xFFFFCB58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80212AA0
  c->r[3]=0u+0x805C0000u; // 80212AA4
  {uint32_t ea=c->r[2]+0xFFFFCB40u; c->f[2]=c->ps1[2]=RF32(ea);} // 80212AA8
  c->r[3]=c->r[3]+0x00005B78u; // 80212AAC
  c->f[3]=c->f[1]; // 80212AB0
  f_8003F588(c); return; // 80212AB4
}

// fn_80212AB8
void f_80212AB8(Ctx* __restrict c) {
  trace_call(0x80212AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212AB8
  c->r[0]=c->lr; // 80212ABC
  c->r[4]=0u+0x80570000u; // 80212AC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80212AC4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80212AC8
  c->r[26]=c->r[3]|c->r[3]; // 80212ACC
  c->r[3]=c->r[4]+0xFFFFA2D0u; // 80212AD0
  c->lr=0x80212AD8u; f_801BD1D0(c); // 80212AD4
  c->r[31]=c->r[26]+0x0000012Cu; // 80212AD8
  c->r[28]=0u+0x00000000u; // 80212ADC
  c->r[30]=c->r[13]+0xFFFF94B8u; // 80212AE0
L_80212AE4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80212AE4
  c->r[29]=c->r[31]|c->r[31]; // 80212AE8
  c->r[27]=0u+0x00000000u; // 80212AEC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80212AF0
  c->r[0]=R32(c->r[31]+0x00000008u); // 80212AF4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80212AF8
  c->r[0]=R32(c->r[31]+0x00000010u); // 80212AFC
  W32(c->r[31]+0x00000014u,c->r[0]); // 80212B00
L_80212B04:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80212B04
  cmps(c,0,(int32_t)c->r[3],0); // 80212B08
  if (crb(c,2)) { goto L_80212B1C; } // 80212B0C
  c->r[4]=c->r[27]|c->r[27]; // 80212B10
  c->lr=0x80212B18u; f_80067C60(c); // 80212B14
  W32(c->r[29]+0x00000018u,c->r[3]); // 80212B18
L_80212B1C:;
  c->r[27]=c->r[27]+0x00000001u; // 80212B1C
  c->r[29]=c->r[29]+0x00000004u; // 80212B20
  cmps(c,0,(int32_t)c->r[27],16); // 80212B24
  if (crb(c,0)) { IRQCHK(c); goto L_80212B04; } // 80212B28
  c->r[28]=c->r[28]+0x00000001u; // 80212B2C
  c->r[30]=c->r[30]+0x00000004u; // 80212B30
  cmps(c,0,(int32_t)c->r[28],2); // 80212B34
  c->r[31]=c->r[31]+0x00000058u; // 80212B38
  if (crb(c,0)) { IRQCHK(c); goto L_80212AE4; } // 80212B3C
  c->r[0]=0u+0x00000001u; // 80212B40
  W8(c->r[26]+0x00000129u,c->r[0]); // 80212B44
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80212B48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80212B4C
  c->lr=c->r[0]; // 80212B50
  c->r[1]=c->r[1]+0x00000020u; // 80212B54
  return; // 80212B58
}

// fn_80212B5C
void f_80212B5C(Ctx* __restrict c) {
  trace_call(0x80212B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212B5C
  c->r[0]=c->lr; // 80212B60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80212B64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80212B68
  c->r[31]=c->r[3]|c->r[3]; // 80212B6C
  c->r[0]=R8(c->r[3]+0x00000129u); // 80212B70
  cmps(c,0,(int32_t)c->r[0],0); // 80212B74
  if (crb(c,2)) { goto L_80212BC8; } // 80212B78
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80212B7C
  c->lr=0x80212B84u; f_801F8B9C(c); // 80212B80
  cmps(c,0,(int32_t)c->r[3],1); // 80212B84
  if (!crb(c,2)) { goto L_80212B98; } // 80212B88
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80212B8C
  c->r[4]=0u+0x00000002u; // 80212B90
  c->lr=0x80212B98u; f_801F8B80(c); // 80212B94
L_80212B98:;
  c->r[7]=R32(c->r[31]+0x00000130u); // 80212B98
  c->r[6]=R32(c->r[31]+0x00000138u); // 80212B9C
  c->r[5]=R32(c->r[31]+0x00000140u); // 80212BA0
  c->r[4]=R32(c->r[31]+0x00000188u); // 80212BA4
  c->r[3]=R32(c->r[31]+0x00000190u); // 80212BA8
  c->r[0]=R32(c->r[31]+0x00000198u); // 80212BAC
  W32(c->r[31]+0x0000012Cu,c->r[7]); // 80212BB0
  W32(c->r[31]+0x00000134u,c->r[6]); // 80212BB4
  W32(c->r[31]+0x0000013Cu,c->r[5]); // 80212BB8
  W32(c->r[31]+0x00000184u,c->r[4]); // 80212BBC
  W32(c->r[31]+0x0000018Cu,c->r[3]); // 80212BC0
  W32(c->r[31]+0x00000194u,c->r[0]); // 80212BC4
L_80212BC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80212BC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80212BCC
  c->lr=c->r[0]; // 80212BD0
  c->r[1]=c->r[1]+0x00000010u; // 80212BD4
  return; // 80212BD8
}

// fn_80212BDC
void f_80212BDC(Ctx* __restrict c) {
  trace_call(0x80212BDCu);
  W8(c->r[3]+0x00000129u,c->r[4]); // 80212BDC
  return; // 80212BE0
}

// fn_80212BE4
void f_80212BE4(Ctx* __restrict c) {
  trace_call(0x80212BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80212BE4
  c->r[0]=c->lr; // 80212BE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80212BEC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80212BF0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80212BF4
  c->r[4]=0u+0x00000001u; // 80212BF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80212BFC
  c->r[31]=c->r[3]|c->r[3]; // 80212C00
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80212C04
  c->lr=0x80212C0Cu; f_801F8B80(c); // 80212C08
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80212C0C
  c->lr=0x80212C14u; f_801F8BA4(c); // 80212C10
  c->r[0]=0u+0x00000016u; // 80212C14
  c->r[6]=c->r[3]+0xFFFFFFFCu; // 80212C18
  c->r[5]=c->r[31]+0x00000128u; // 80212C1C
  c->ctr=c->r[0]; // 80212C20
L_80212C24:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80212C24
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80212C28
  W32(c->r[6]+0x00000004u,c->r[4]); // 80212C2C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80212C30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212C24; } // 80212C34
  {uint32_t ea=c->r[31]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80212C38
  c->r[4]=0u+0x80570000u; // 80212C3C
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 80212C40
  c->r[0]=R32(c->r[31]+0x000001E0u); // 80212C44
  W32(c->r[3]+0x000000B4u,c->r[0]); // 80212C48
  c->r[3]=c->r[4]+0xFFFFA2D0u; // 80212C4C
  c->lr=0x80212C54u; f_801BD34C(c); // 80212C50
  c->r[31]=c->r[3]|c->r[3]; // 80212C54
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80212C58
  c->lr=0x80212C60u; f_801F8BA4(c); // 80212C5C
  c->r[0]=0u+0x00000015u; // 80212C60
  c->r[6]=c->r[3]+0x000000B6u; // 80212C64
  c->r[5]=c->r[31]+0xFFFFFFFEu; // 80212C68
  c->ctr=c->r[0]; // 80212C6C
L_80212C70:;
  c->r[4]=R16(c->r[5]+0x00000002u); // 80212C70
  {uint32_t ea=c->r[5]+0x00000004u; c->r[0]=R16(ea); c->r[5]=ea;} // 80212C74
  W16(c->r[6]+0x00000002u,c->r[4]); // 80212C78
  {uint32_t ea=c->r[6]+0x00000004u; W16(ea,c->r[0]); c->r[6]=ea;} // 80212C7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80212C70; } // 80212C80
  c->r[4]=R16(c->r[31]+0x00000054u); // 80212C84
  c->r[0]=R16(c->r[31]+0x00000056u); // 80212C88
  W16(c->r[3]+0x0000010Cu,c->r[4]); // 80212C8C
  W16(c->r[3]+0x0000010Eu,c->r[0]); // 80212C90
  c->r[4]=R16(c->r[31]+0x00000058u); // 80212C94
  c->r[0]=R16(c->r[31]+0x0000005Au); // 80212C98
  W16(c->r[3]+0x00000110u,c->r[4]); // 80212C9C
  W16(c->r[3]+0x00000112u,c->r[0]); // 80212CA0
  c->r[4]=R16(c->r[31]+0x0000005Cu); // 80212CA4
  c->r[0]=R16(c->r[31]+0x0000005Eu); // 80212CA8
  W16(c->r[3]+0x00000114u,c->r[4]); // 80212CAC
  W16(c->r[3]+0x00000116u,c->r[0]); // 80212CB0
  c->r[4]=R16(c->r[31]+0x00000060u); // 80212CB4
  c->r[0]=R16(c->r[31]+0x00000062u); // 80212CB8
  W16(c->r[3]+0x00000118u,c->r[4]); // 80212CBC
  W16(c->r[3]+0x0000011Au,c->r[0]); // 80212CC0
  c->r[4]=R16(c->r[31]+0x00000064u); // 80212CC4
  c->r[0]=R16(c->r[31]+0x00000066u); // 80212CC8
  W16(c->r[3]+0x0000011Cu,c->r[4]); // 80212CCC
  W16(c->r[3]+0x0000011Eu,c->r[0]); // 80212CD0
  c->r[4]=R16(c->r[31]+0x00000068u); // 80212CD4
  c->r[0]=R16(c->r[31]+0x0000006Au); // 80212CD8
  W16(c->r[3]+0x00000120u,c->r[4]); // 80212CDC
  W16(c->r[3]+0x00000122u,c->r[0]); // 80212CE0
  c->r[4]=R16(c->r[31]+0x0000006Cu); // 80212CE4
  c->r[0]=R16(c->r[31]+0x0000006Eu); // 80212CE8
  W16(c->r[3]+0x00000124u,c->r[4]); // 80212CEC
  W16(c->r[3]+0x00000126u,c->r[0]); // 80212CF0
  c->r[4]=R16(c->r[31]+0x00000070u); // 80212CF4
  c->r[0]=R16(c->r[31]+0x00000072u); // 80212CF8
  W16(c->r[3]+0x00000128u,c->r[4]); // 80212CFC
  W16(c->r[3]+0x0000012Au,c->r[0]); // 80212D00
  c->r[4]=R16(c->r[31]+0x00000074u); // 80212D04
  c->r[0]=R16(c->r[31]+0x00000076u); // 80212D08
  W16(c->r[3]+0x0000012Cu,c->r[4]); // 80212D0C
  W16(c->r[3]+0x0000012Eu,c->r[0]); // 80212D10
  c->r[4]=R16(c->r[31]+0x00000078u); // 80212D14
  c->r[0]=R16(c->r[31]+0x0000007Au); // 80212D18
  W16(c->r[3]+0x00000130u,c->r[4]); // 80212D1C
  W16(c->r[3]+0x00000132u,c->r[0]); // 80212D20
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 80212D24
  W16(c->r[3]+0x00000134u,c->r[0]); // 80212D28
  c->r[4]=R16(c->r[31]+0x0000007Eu); // 80212D2C
  c->r[0]=R16(c->r[31]+0x00000080u); // 80212D30
  W16(c->r[3]+0x00000136u,c->r[4]); // 80212D34
  W16(c->r[3]+0x00000138u,c->r[0]); // 80212D38
  c->r[4]=R16(c->r[31]+0x00000082u); // 80212D3C
  c->r[0]=R16(c->r[31]+0x00000084u); // 80212D40
  W16(c->r[3]+0x0000013Au,c->r[4]); // 80212D44
  W16(c->r[3]+0x0000013Cu,c->r[0]); // 80212D48
  c->r[4]=R16(c->r[31]+0x00000086u); // 80212D4C
  c->r[0]=R16(c->r[31]+0x00000088u); // 80212D50
  W16(c->r[3]+0x0000013Eu,c->r[4]); // 80212D54
  W16(c->r[3]+0x00000140u,c->r[0]); // 80212D58
  c->r[4]=R16(c->r[31]+0x0000008Au); // 80212D5C
  c->r[0]=R16(c->r[31]+0x0000008Cu); // 80212D60
  W16(c->r[3]+0x00000142u,c->r[4]); // 80212D64
  W16(c->r[3]+0x00000144u,c->r[0]); // 80212D68
  c->r[4]=R16(c->r[31]+0x0000008Eu); // 80212D6C
  c->r[0]=R16(c->r[31]+0x00000090u); // 80212D70
  W16(c->r[3]+0x00000146u,c->r[4]); // 80212D74
  W16(c->r[3]+0x00000148u,c->r[0]); // 80212D78
  c->r[4]=R16(c->r[31]+0x00000092u); // 80212D7C
  c->r[0]=R16(c->r[31]+0x00000094u); // 80212D80
  W16(c->r[3]+0x0000014Au,c->r[4]); // 80212D84
  W16(c->r[3]+0x0000014Cu,c->r[0]); // 80212D88
  c->r[4]=R16(c->r[31]+0x00000096u); // 80212D8C
  c->r[0]=R16(c->r[31]+0x00000098u); // 80212D90
  W16(c->r[3]+0x0000014Eu,c->r[4]); // 80212D94
  W16(c->r[3]+0x00000150u,c->r[0]); // 80212D98
  c->r[4]=R16(c->r[31]+0x0000009Au); // 80212D9C
  c->r[0]=R16(c->r[31]+0x0000009Cu); // 80212DA0
  W16(c->r[3]+0x00000152u,c->r[4]); // 80212DA4
  W16(c->r[3]+0x00000154u,c->r[0]); // 80212DA8
  c->r[4]=R16(c->r[31]+0x0000009Eu); // 80212DAC
  c->r[0]=R16(c->r[31]+0x000000A0u); // 80212DB0
  W16(c->r[3]+0x00000156u,c->r[4]); // 80212DB4
  W16(c->r[3]+0x00000158u,c->r[0]); // 80212DB8
  c->r[4]=R16(c->r[31]+0x000000A2u); // 80212DBC
  c->r[0]=R16(c->r[31]+0x000000A4u); // 80212DC0
  W16(c->r[3]+0x0000015Au,c->r[4]); // 80212DC4
  W16(c->r[3]+0x0000015Cu,c->r[0]); // 80212DC8
  c->r[0]=R16(c->r[31]+0x000000A6u); // 80212DCC
  W16(c->r[3]+0x0000015Eu,c->r[0]); // 80212DD0
  c->r[4]=R8(c->r[31]+0x000000A8u); // 80212DD4
  c->r[0]=R8(c->r[31]+0x000000A9u); // 80212DD8
  W8(c->r[3]+0x00000160u,c->r[4]); // 80212DDC
  W8(c->r[3]+0x00000161u,c->r[0]); // 80212DE0
  c->r[4]=R8(c->r[31]+0x000000AAu); // 80212DE4
  c->r[0]=R8(c->r[31]+0x000000ABu); // 80212DE8
  W8(c->r[3]+0x00000162u,c->r[4]); // 80212DEC
  W8(c->r[3]+0x00000163u,c->r[0]); // 80212DF0
  c->r[4]=R8(c->r[31]+0x000000ACu); // 80212DF4
  c->r[0]=R8(c->r[31]+0x000000ADu); // 80212DF8
  W8(c->r[3]+0x00000164u,c->r[4]); // 80212DFC
  W8(c->r[3]+0x00000165u,c->r[0]); // 80212E00
  c->r[4]=R8(c->r[31]+0x000000AEu); // 80212E04
  c->r[0]=R8(c->r[31]+0x000000AFu); // 80212E08
  W8(c->r[3]+0x00000166u,c->r[4]); // 80212E0C
  W8(c->r[3]+0x00000167u,c->r[0]); // 80212E10
  c->r[4]=R8(c->r[31]+0x000000B0u); // 80212E14
  c->r[0]=R8(c->r[31]+0x000000B1u); // 80212E18
  W8(c->r[3]+0x00000168u,c->r[4]); // 80212E1C
  W8(c->r[3]+0x00000169u,c->r[0]); // 80212E20
  c->r[4]=R8(c->r[31]+0x000000B2u); // 80212E24
  c->r[0]=R8(c->r[31]+0x000000B3u); // 80212E28
  W8(c->r[3]+0x0000016Au,c->r[4]); // 80212E2C
  W8(c->r[3]+0x0000016Bu,c->r[0]); // 80212E30
  c->r[4]=R8(c->r[31]+0x000000B4u); // 80212E34
  c->r[0]=R8(c->r[31]+0x000000B5u); // 80212E38
  W8(c->r[3]+0x0000016Cu,c->r[4]); // 80212E3C
  W8(c->r[3]+0x0000016Du,c->r[0]); // 80212E40
  c->r[4]=R8(c->r[31]+0x000000B6u); // 80212E44
  c->r[0]=R8(c->r[31]+0x000000B7u); // 80212E48
  W8(c->r[3]+0x0000016Eu,c->r[4]); // 80212E4C
  W8(c->r[3]+0x0000016Fu,c->r[0]); // 80212E50
  c->r[4]=R8(c->r[31]+0x000000B8u); // 80212E54
  c->r[0]=R8(c->r[31]+0x000000B9u); // 80212E58
  W8(c->r[3]+0x00000170u,c->r[4]); // 80212E5C
  W8(c->r[3]+0x00000171u,c->r[0]); // 80212E60
  c->r[4]=R8(c->r[31]+0x000000BAu); // 80212E64
  c->r[0]=R8(c->r[31]+0x000000BBu); // 80212E68
  W8(c->r[3]+0x00000172u,c->r[4]); // 80212E6C
  W8(c->r[3]+0x00000173u,c->r[0]); // 80212E70
  c->r[4]=R8(c->r[31]+0x000000BCu); // 80212E74
  c->r[0]=R8(c->r[31]+0x000000BDu); // 80212E78
  W8(c->r[3]+0x00000174u,c->r[4]); // 80212E7C
  W8(c->r[3]+0x00000175u,c->r[0]); // 80212E80
  c->r[4]=R8(c->r[31]+0x000000BEu); // 80212E84
  c->r[0]=R8(c->r[31]+0x000000BFu); // 80212E88
  W8(c->r[3]+0x00000176u,c->r[4]); // 80212E8C
  W8(c->r[3]+0x00000177u,c->r[0]); // 80212E90
  c->r[4]=R8(c->r[31]+0x000000C0u); // 80212E94
  c->r[0]=R8(c->r[31]+0x000000C1u); // 80212E98
  W8(c->r[3]+0x00000178u,c->r[4]); // 80212E9C
  W8(c->r[3]+0x00000179u,c->r[0]); // 80212EA0
  c->r[4]=R8(c->r[31]+0x000000C2u); // 80212EA4
  c->r[0]=R8(c->r[31]+0x000000C3u); // 80212EA8
  W8(c->r[3]+0x0000017Au,c->r[4]); // 80212EAC
  W8(c->r[3]+0x0000017Bu,c->r[0]); // 80212EB0
  c->r[4]=R8(c->r[31]+0x000000C4u); // 80212EB4
  c->r[0]=R8(c->r[31]+0x000000C5u); // 80212EB8
  W8(c->r[3]+0x0000017Cu,c->r[4]); // 80212EBC
  W8(c->r[3]+0x0000017Du,c->r[0]); // 80212EC0
  c->r[4]=R8(c->r[31]+0x000000C6u); // 80212EC4
  c->r[0]=R8(c->r[31]+0x000000C7u); // 80212EC8
  W8(c->r[3]+0x0000017Eu,c->r[4]); // 80212ECC
  W8(c->r[3]+0x0000017Fu,c->r[0]); // 80212ED0
  c->r[4]=R8(c->r[31]+0x000000C8u); // 80212ED4
  c->r[0]=R8(c->r[31]+0x000000C9u); // 80212ED8
  W8(c->r[3]+0x00000180u,c->r[4]); // 80212EDC
  W8(c->r[3]+0x00000181u,c->r[0]); // 80212EE0
  c->r[4]=R8(c->r[31]+0x000000CAu); // 80212EE4
  c->r[0]=R8(c->r[31]+0x000000CBu); // 80212EE8
  W8(c->r[3]+0x00000182u,c->r[4]); // 80212EEC
  W8(c->r[3]+0x00000183u,c->r[0]); // 80212EF0
  c->r[4]=R8(c->r[31]+0x000000CCu); // 80212EF4
  c->r[0]=R8(c->r[31]+0x000000CDu); // 80212EF8
  W8(c->r[3]+0x00000184u,c->r[4]); // 80212EFC
  W8(c->r[3]+0x00000185u,c->r[0]); // 80212F00
  c->r[4]=R8(c->r[31]+0x000000CEu); // 80212F04
  c->r[0]=R8(c->r[31]+0x000000CFu); // 80212F08
  W8(c->r[3]+0x00000186u,c->r[4]); // 80212F0C
  W8(c->r[3]+0x00000187u,c->r[0]); // 80212F10
  c->r[4]=R8(c->r[31]+0x000000D0u); // 80212F14
  c->r[0]=R8(c->r[31]+0x000000D1u); // 80212F18
  W8(c->r[3]+0x00000188u,c->r[4]); // 80212F1C
  W8(c->r[3]+0x00000189u,c->r[0]); // 80212F20
  c->r[4]=R8(c->r[31]+0x000000D2u); // 80212F24
  c->r[0]=R8(c->r[31]+0x000000D3u); // 80212F28
  W8(c->r[3]+0x0000018Au,c->r[4]); // 80212F2C
  W8(c->r[3]+0x0000018Bu,c->r[0]); // 80212F30
  c->r[4]=R8(c->r[31]+0x000000D4u); // 80212F34
  c->r[0]=R8(c->r[31]+0x000000D5u); // 80212F38
  W8(c->r[3]+0x0000018Cu,c->r[4]); // 80212F3C
  W8(c->r[3]+0x0000018Du,c->r[0]); // 80212F40
  c->r[4]=R8(c->r[31]+0x000000D6u); // 80212F44
  c->r[0]=R8(c->r[31]+0x000000D7u); // 80212F48
  W8(c->r[3]+0x0000018Eu,c->r[4]); // 80212F4C
  W8(c->r[3]+0x0000018Fu,c->r[0]); // 80212F50
  c->r[4]=R8(c->r[31]+0x000000D8u); // 80212F54
  c->r[0]=R8(c->r[31]+0x000000D9u); // 80212F58
  W8(c->r[3]+0x00000190u,c->r[4]); // 80212F5C
  W8(c->r[3]+0x00000191u,c->r[0]); // 80212F60
  c->r[4]=R8(c->r[31]+0x000000DAu); // 80212F64
  c->r[0]=R8(c->r[31]+0x000000DBu); // 80212F68
  W8(c->r[3]+0x00000192u,c->r[4]); // 80212F6C
  W8(c->r[3]+0x00000193u,c->r[0]); // 80212F70
  c->r[4]=R8(c->r[31]+0x000000DCu); // 80212F74
  c->r[0]=R8(c->r[31]+0x000000DDu); // 80212F78
  W8(c->r[3]+0x00000194u,c->r[4]); // 80212F7C
  W8(c->r[3]+0x00000195u,c->r[0]); // 80212F80
  c->r[4]=R8(c->r[31]+0x000000DEu); // 80212F84
  c->r[0]=R8(c->r[31]+0x000000DFu); // 80212F88
  W8(c->r[3]+0x00000196u,c->r[4]); // 80212F8C
  W8(c->r[3]+0x00000197u,c->r[0]); // 80212F90
  c->r[4]=R8(c->r[31]+0x000000E0u); // 80212F94
  c->r[0]=R8(c->r[31]+0x000000E1u); // 80212F98
  W8(c->r[3]+0x00000198u,c->r[4]); // 80212F9C
  W8(c->r[3]+0x00000199u,c->r[0]); // 80212FA0
  c->r[4]=R8(c->r[31]+0x000000E2u); // 80212FA4
  c->r[0]=R8(c->r[31]+0x000000E3u); // 80212FA8
  W8(c->r[3]+0x0000019Au,c->r[4]); // 80212FAC
  W8(c->r[3]+0x0000019Bu,c->r[0]); // 80212FB0
  c->r[4]=R8(c->r[31]+0x000000E4u); // 80212FB4
  c->r[0]=R8(c->r[31]+0x000000E5u); // 80212FB8
  W8(c->r[3]+0x0000019Cu,c->r[4]); // 80212FBC
  W8(c->r[3]+0x0000019Du,c->r[0]); // 80212FC0
  c->r[4]=R8(c->r[31]+0x000000E6u); // 80212FC4
  c->r[0]=R8(c->r[31]+0x000000E7u); // 80212FC8
  W8(c->r[3]+0x0000019Eu,c->r[4]); // 80212FCC
  W8(c->r[3]+0x0000019Fu,c->r[0]); // 80212FD0
  c->r[4]=R8(c->r[31]+0x000000E8u); // 80212FD4
  c->r[0]=R8(c->r[31]+0x000000E9u); // 80212FD8
  W8(c->r[3]+0x000001A0u,c->r[4]); // 80212FDC
  W8(c->r[3]+0x000001A1u,c->r[0]); // 80212FE0
  c->r[4]=R8(c->r[31]+0x000000EAu); // 80212FE4
  c->r[0]=R8(c->r[31]+0x000000EBu); // 80212FE8
  W8(c->r[3]+0x000001A2u,c->r[4]); // 80212FEC
  W8(c->r[3]+0x000001A3u,c->r[0]); // 80212FF0
  c->r[4]=R8(c->r[31]+0x000000ECu); // 80212FF4
  c->r[0]=R8(c->r[31]+0x000000EDu); // 80212FF8
  W8(c->r[3]+0x000001A4u,c->r[4]); // 80212FFC
  W8(c->r[3]+0x000001A5u,c->r[0]); // 80213000
  c->r[4]=R8(c->r[31]+0x000000EEu); // 80213004
  c->r[0]=R8(c->r[31]+0x000000EFu); // 80213008
  W8(c->r[3]+0x000001A6u,c->r[4]); // 8021300C
  W8(c->r[3]+0x000001A7u,c->r[0]); // 80213010
  c->r[4]=R8(c->r[31]+0x000000F0u); // 80213014
  c->r[0]=R8(c->r[31]+0x000000F1u); // 80213018
  W8(c->r[3]+0x000001A8u,c->r[4]); // 8021301C
  W8(c->r[3]+0x000001A9u,c->r[0]); // 80213020
  c->r[4]=R8(c->r[31]+0x000000F2u); // 80213024
  c->r[0]=R8(c->r[31]+0x000000F3u); // 80213028
  W8(c->r[3]+0x000001AAu,c->r[4]); // 8021302C
  W8(c->r[3]+0x000001ABu,c->r[0]); // 80213030
  c->r[4]=R8(c->r[31]+0x000000F4u); // 80213034
  c->r[0]=R8(c->r[31]+0x000000F5u); // 80213038
  W8(c->r[3]+0x000001ACu,c->r[4]); // 8021303C
  W8(c->r[3]+0x000001ADu,c->r[0]); // 80213040
  c->r[4]=R8(c->r[31]+0x000000F6u); // 80213044
  c->r[0]=R8(c->r[31]+0x000000F7u); // 80213048
  W8(c->r[3]+0x000001AEu,c->r[4]); // 8021304C
  W8(c->r[3]+0x000001AFu,c->r[0]); // 80213050
  c->r[4]=R8(c->r[31]+0x000000F8u); // 80213054
  c->r[0]=R8(c->r[31]+0x000000F9u); // 80213058
  W8(c->r[3]+0x000001B0u,c->r[4]); // 8021305C
  W8(c->r[3]+0x000001B1u,c->r[0]); // 80213060
  c->r[4]=R8(c->r[31]+0x000000FAu); // 80213064
  c->r[0]=R8(c->r[31]+0x000000FBu); // 80213068
  W8(c->r[3]+0x000001B2u,c->r[4]); // 8021306C
  W8(c->r[3]+0x000001B3u,c->r[0]); // 80213070
  c->r[4]=R8(c->r[31]+0x000000FCu); // 80213074
  c->r[0]=R8(c->r[31]+0x000000FDu); // 80213078
  W8(c->r[3]+0x000001B4u,c->r[4]); // 8021307C
  W8(c->r[3]+0x000001B5u,c->r[0]); // 80213080
  c->r[4]=R8(c->r[31]+0x000000FEu); // 80213084
  c->r[0]=R8(c->r[31]+0x000000FFu); // 80213088
  W8(c->r[3]+0x000001B6u,c->r[4]); // 8021308C
  W8(c->r[3]+0x000001B7u,c->r[0]); // 80213090
  c->r[4]=R8(c->r[31]+0x00000100u); // 80213094
  c->r[0]=R8(c->r[31]+0x00000101u); // 80213098
  W8(c->r[3]+0x000001B8u,c->r[4]); // 8021309C
  W8(c->r[3]+0x000001B9u,c->r[0]); // 802130A0
  c->r[4]=R8(c->r[31]+0x00000102u); // 802130A4
  c->r[0]=R8(c->r[31]+0x00000103u); // 802130A8
  W8(c->r[3]+0x000001BAu,c->r[4]); // 802130AC
  W8(c->r[3]+0x000001BBu,c->r[0]); // 802130B0
  c->r[4]=R8(c->r[31]+0x00000104u); // 802130B4
  c->r[0]=R8(c->r[31]+0x00000105u); // 802130B8
  W8(c->r[3]+0x000001BCu,c->r[4]); // 802130BC
  W8(c->r[3]+0x000001BDu,c->r[0]); // 802130C0
  c->r[4]=R8(c->r[31]+0x00000106u); // 802130C4
  c->r[0]=R8(c->r[31]+0x00000107u); // 802130C8
  W8(c->r[3]+0x000001BEu,c->r[4]); // 802130CC
  W8(c->r[3]+0x000001BFu,c->r[0]); // 802130D0
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 802130D4
  c->lr=0x802130DCu; f_800F5274(c); // 802130D8
  c->r[31]=c->r[3]|c->r[3]; // 802130DC
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802130E0
  c->lr=0x802130E8u; f_801F8BA4(c); // 802130E4
  c->r[7]=R32(c->r[31]+0x00000000u); // 802130E8
  c->r[0]=0u+0x0000000Bu; // 802130EC
  c->r[4]=R32(c->r[31]+0x00000004u); // 802130F0
  c->r[6]=c->r[3]+0x000001E4u; // 802130F4
  c->r[5]=c->r[31]+0x00000024u; // 802130F8
  W32(c->r[3]+0x000001C0u,c->r[7]); // 802130FC
  W32(c->r[3]+0x000001C4u,c->r[4]); // 80213100
  c->r[7]=R32(c->r[31]+0x00000008u); // 80213104
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80213108
  W32(c->r[3]+0x000001C8u,c->r[7]); // 8021310C
  W32(c->r[3]+0x000001CCu,c->r[4]); // 80213110
  c->r[7]=R32(c->r[31]+0x00000010u); // 80213114
  c->r[4]=R32(c->r[31]+0x00000014u); // 80213118
  W32(c->r[3]+0x000001D0u,c->r[7]); // 8021311C
  W32(c->r[3]+0x000001D4u,c->r[4]); // 80213120
  c->r[7]=R32(c->r[31]+0x00000018u); // 80213124
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 80213128
  W32(c->r[3]+0x000001D8u,c->r[7]); // 8021312C
  W32(c->r[3]+0x000001DCu,c->r[4]); // 80213130
  c->r[7]=R32(c->r[31]+0x00000020u); // 80213134
  c->r[4]=R32(c->r[31]+0x00000024u); // 80213138
  W32(c->r[3]+0x000001E0u,c->r[7]); // 8021313C
  W32(c->r[3]+0x000001E4u,c->r[4]); // 80213140
  c->ctr=c->r[0]; // 80213144
L_80213148:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80213148
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8021314C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80213150
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80213154
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213148; } // 80213158
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021315C
  c->r[4]=0u+0xFFFFFFFFu; // 80213160
  {uint32_t ea=c->r[3]+0x00000240u; WF32(ea,c->f[0]);} // 80213164
  c->r[0]=R32(c->r[31]+0x00000084u); // 80213168
  W32(c->r[3]+0x00000244u,c->r[0]); // 8021316C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80213170
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213174
  c->r[12]=R32(c->r[12]+0x00000044u); // 80213178
  c->ctr=c->r[12]; // 8021317C
  if (true) { c->lr=0x80213184u; dispatch(c,c->ctr); } // 80213180
  c->lr=0x80213188u; f_802894C0(c); // 80213184
  cmpu(c,0,c->r[3],0x00000080u); // 80213188
  if (!crb(c,0)) { goto L_802131C0; } // 8021318C
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80213190
  c->r[4]=0u+0xFFFFFFFFu; // 80213194
  c->r[12]=R32(c->r[3]+0x00000000u); // 80213198
  c->r[12]=R32(c->r[12]+0x00000044u); // 8021319C
  c->ctr=c->r[12]; // 802131A0
  if (true) { c->lr=0x802131A8u; dispatch(c,c->ctr); } // 802131A4
  c->r[31]=c->r[3]|c->r[3]; // 802131A8
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802131AC
  c->lr=0x802131B4u; f_801F8BA4(c); // 802131B0
  c->r[4]=c->r[31]|c->r[31]; // 802131B4
  c->r[3]=c->r[3]+0x00000248u; // 802131B8
  c->lr=0x802131C0u; f_802933D8(c); // 802131BC
L_802131C0:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 802131C0
  c->r[4]=0u+0x00000003u; // 802131C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802131C8
  c->r[12]=R32(c->r[12]+0x00000068u); // 802131CC
  c->ctr=c->r[12]; // 802131D0
  if (true) { c->lr=0x802131D8u; dispatch(c,c->ctr); } // 802131D4
  c->f[31]=c->f[1]; // 802131D8
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802131DC
  c->lr=0x802131E4u; f_801F8BA4(c); // 802131E0
  {uint32_t ea=c->r[3]+0x000002C8u; WF32(ea,c->f[31]);} // 802131E4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 802131E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 802131EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802131F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802131F4
  c->lr=c->r[0]; // 802131F8
  c->r[1]=c->r[1]+0x00000020u; // 802131FC
  return; // 80213200
}

// fn_80213204
void f_80213204(Ctx* __restrict c) {
  trace_call(0x80213204u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213204
  c->r[0]=c->lr; // 80213208
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021320C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80213210
  c->r[31]=c->r[3]|c->r[3]; // 80213214
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80213218
  c->lr=0x80213220u; f_801F8B9C(c); // 8021321C
  cmps(c,0,(int32_t)c->r[3],2); // 80213220
  if (!crb(c,2)) { goto L_80213234; } // 80213224
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80213228
  c->r[4]=0u+0x00000001u; // 8021322C
  c->lr=0x80213234u; f_801F8B80(c); // 80213230
L_80213234:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80213234
  c->lr=0x8021323Cu; f_801F8BA4(c); // 80213238
  c->r[0]=0u+0x00000016u; // 8021323C
  c->r[6]=c->r[31]+0x00000128u; // 80213240
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 80213244
  c->ctr=c->r[0]; // 80213248
L_8021324C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8021324C
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80213250
  W32(c->r[6]+0x00000004u,c->r[4]); // 80213254
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80213258
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021324C; } // 8021325C
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80213260
  {uint32_t ea=c->r[31]+0x000001DCu; WF32(ea,c->f[0]);} // 80213264
  c->r[0]=R32(c->r[3]+0x000000B4u); // 80213268
  W32(c->r[31]+0x000001E0u,c->r[0]); // 8021326C
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80213270
  c->lr=0x80213278u; f_801F8BA4(c); // 80213274
  c->r[4]=0u+0x80570000u; // 80213278
  c->r[31]=c->r[3]|c->r[3]; // 8021327C
  c->r[3]=c->r[4]+0xFFFFA2D0u; // 80213280
  c->lr=0x80213288u; f_801BD34C(c); // 80213284
  c->r[0]=0u+0x00000015u; // 80213288
  c->r[6]=c->r[3]+0xFFFFFFFEu; // 8021328C
  c->r[5]=c->r[31]+0x000000B6u; // 80213290
  c->ctr=c->r[0]; // 80213294
L_80213298:;
  c->r[4]=R16(c->r[5]+0x00000002u); // 80213298
  {uint32_t ea=c->r[5]+0x00000004u; c->r[0]=R16(ea); c->r[5]=ea;} // 8021329C
  W16(c->r[6]+0x00000002u,c->r[4]); // 802132A0
  {uint32_t ea=c->r[6]+0x00000004u; W16(ea,c->r[0]); c->r[6]=ea;} // 802132A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213298; } // 802132A8
  c->r[4]=R16(c->r[31]+0x0000010Cu); // 802132AC
  c->r[0]=R16(c->r[31]+0x0000010Eu); // 802132B0
  W16(c->r[3]+0x00000054u,c->r[4]); // 802132B4
  W16(c->r[3]+0x00000056u,c->r[0]); // 802132B8
  c->r[4]=R16(c->r[31]+0x00000110u); // 802132BC
  c->r[0]=R16(c->r[31]+0x00000112u); // 802132C0
  W16(c->r[3]+0x00000058u,c->r[4]); // 802132C4
  W16(c->r[3]+0x0000005Au,c->r[0]); // 802132C8
  c->r[4]=R16(c->r[31]+0x00000114u); // 802132CC
  c->r[0]=R16(c->r[31]+0x00000116u); // 802132D0
  W16(c->r[3]+0x0000005Cu,c->r[4]); // 802132D4
  W16(c->r[3]+0x0000005Eu,c->r[0]); // 802132D8
  c->r[4]=R16(c->r[31]+0x00000118u); // 802132DC
  c->r[0]=R16(c->r[31]+0x0000011Au); // 802132E0
  W16(c->r[3]+0x00000060u,c->r[4]); // 802132E4
  W16(c->r[3]+0x00000062u,c->r[0]); // 802132E8
  c->r[4]=R16(c->r[31]+0x0000011Cu); // 802132EC
  c->r[0]=R16(c->r[31]+0x0000011Eu); // 802132F0
  W16(c->r[3]+0x00000064u,c->r[4]); // 802132F4
  W16(c->r[3]+0x00000066u,c->r[0]); // 802132F8
  c->r[4]=R16(c->r[31]+0x00000120u); // 802132FC
  c->r[0]=R16(c->r[31]+0x00000122u); // 80213300
  W16(c->r[3]+0x00000068u,c->r[4]); // 80213304
  W16(c->r[3]+0x0000006Au,c->r[0]); // 80213308
  c->r[4]=R16(c->r[31]+0x00000124u); // 8021330C
  c->r[0]=R16(c->r[31]+0x00000126u); // 80213310
  W16(c->r[3]+0x0000006Cu,c->r[4]); // 80213314
  W16(c->r[3]+0x0000006Eu,c->r[0]); // 80213318
  c->r[4]=R16(c->r[31]+0x00000128u); // 8021331C
  c->r[0]=R16(c->r[31]+0x0000012Au); // 80213320
  W16(c->r[3]+0x00000070u,c->r[4]); // 80213324
  W16(c->r[3]+0x00000072u,c->r[0]); // 80213328
  c->r[4]=R16(c->r[31]+0x0000012Cu); // 8021332C
  c->r[0]=R16(c->r[31]+0x0000012Eu); // 80213330
  W16(c->r[3]+0x00000074u,c->r[4]); // 80213334
  W16(c->r[3]+0x00000076u,c->r[0]); // 80213338
  c->r[4]=R16(c->r[31]+0x00000130u); // 8021333C
  c->r[0]=R16(c->r[31]+0x00000132u); // 80213340
  W16(c->r[3]+0x00000078u,c->r[4]); // 80213344
  W16(c->r[3]+0x0000007Au,c->r[0]); // 80213348
  c->r[0]=R16(c->r[31]+0x00000134u); // 8021334C
  W16(c->r[3]+0x0000007Cu,c->r[0]); // 80213350
  c->r[4]=R16(c->r[31]+0x00000136u); // 80213354
  c->r[0]=R16(c->r[31]+0x00000138u); // 80213358
  W16(c->r[3]+0x0000007Eu,c->r[4]); // 8021335C
  W16(c->r[3]+0x00000080u,c->r[0]); // 80213360
  c->r[4]=R16(c->r[31]+0x0000013Au); // 80213364
  c->r[0]=R16(c->r[31]+0x0000013Cu); // 80213368
  W16(c->r[3]+0x00000082u,c->r[4]); // 8021336C
  W16(c->r[3]+0x00000084u,c->r[0]); // 80213370
  c->r[4]=R16(c->r[31]+0x0000013Eu); // 80213374
  c->r[0]=R16(c->r[31]+0x00000140u); // 80213378
  W16(c->r[3]+0x00000086u,c->r[4]); // 8021337C
  W16(c->r[3]+0x00000088u,c->r[0]); // 80213380
  c->r[4]=R16(c->r[31]+0x00000142u); // 80213384
  c->r[0]=R16(c->r[31]+0x00000144u); // 80213388
  W16(c->r[3]+0x0000008Au,c->r[4]); // 8021338C
  W16(c->r[3]+0x0000008Cu,c->r[0]); // 80213390
  c->r[4]=R16(c->r[31]+0x00000146u); // 80213394
  c->r[0]=R16(c->r[31]+0x00000148u); // 80213398
  W16(c->r[3]+0x0000008Eu,c->r[4]); // 8021339C
  W16(c->r[3]+0x00000090u,c->r[0]); // 802133A0
  c->r[4]=R16(c->r[31]+0x0000014Au); // 802133A4
  c->r[0]=R16(c->r[31]+0x0000014Cu); // 802133A8
  W16(c->r[3]+0x00000092u,c->r[4]); // 802133AC
  W16(c->r[3]+0x00000094u,c->r[0]); // 802133B0
  c->r[4]=R16(c->r[31]+0x0000014Eu); // 802133B4
  c->r[0]=R16(c->r[31]+0x00000150u); // 802133B8
  W16(c->r[3]+0x00000096u,c->r[4]); // 802133BC
  W16(c->r[3]+0x00000098u,c->r[0]); // 802133C0
  c->r[4]=R16(c->r[31]+0x00000152u); // 802133C4
  c->r[0]=R16(c->r[31]+0x00000154u); // 802133C8
  W16(c->r[3]+0x0000009Au,c->r[4]); // 802133CC
  W16(c->r[3]+0x0000009Cu,c->r[0]); // 802133D0
  c->r[4]=R16(c->r[31]+0x00000156u); // 802133D4
  c->r[0]=R16(c->r[31]+0x00000158u); // 802133D8
  W16(c->r[3]+0x0000009Eu,c->r[4]); // 802133DC
  W16(c->r[3]+0x000000A0u,c->r[0]); // 802133E0
  c->r[4]=R16(c->r[31]+0x0000015Au); // 802133E4
  c->r[0]=R16(c->r[31]+0x0000015Cu); // 802133E8
  W16(c->r[3]+0x000000A2u,c->r[4]); // 802133EC
  W16(c->r[3]+0x000000A4u,c->r[0]); // 802133F0
  c->r[0]=R16(c->r[31]+0x0000015Eu); // 802133F4
  W16(c->r[3]+0x000000A6u,c->r[0]); // 802133F8
  c->r[4]=R8(c->r[31]+0x00000160u); // 802133FC
  c->r[0]=R8(c->r[31]+0x00000161u); // 80213400
  W8(c->r[3]+0x000000A8u,c->r[4]); // 80213404
  W8(c->r[3]+0x000000A9u,c->r[0]); // 80213408
  c->r[4]=R8(c->r[31]+0x00000162u); // 8021340C
  c->r[0]=R8(c->r[31]+0x00000163u); // 80213410
  W8(c->r[3]+0x000000AAu,c->r[4]); // 80213414
  W8(c->r[3]+0x000000ABu,c->r[0]); // 80213418
  c->r[4]=R8(c->r[31]+0x00000164u); // 8021341C
  c->r[0]=R8(c->r[31]+0x00000165u); // 80213420
  W8(c->r[3]+0x000000ACu,c->r[4]); // 80213424
  W8(c->r[3]+0x000000ADu,c->r[0]); // 80213428
  c->r[4]=R8(c->r[31]+0x00000166u); // 8021342C
  c->r[0]=R8(c->r[31]+0x00000167u); // 80213430
  W8(c->r[3]+0x000000AEu,c->r[4]); // 80213434
  W8(c->r[3]+0x000000AFu,c->r[0]); // 80213438
  c->r[4]=R8(c->r[31]+0x00000168u); // 8021343C
  c->r[0]=R8(c->r[31]+0x00000169u); // 80213440
  W8(c->r[3]+0x000000B0u,c->r[4]); // 80213444
  W8(c->r[3]+0x000000B1u,c->r[0]); // 80213448
  c->r[4]=R8(c->r[31]+0x0000016Au); // 8021344C
  c->r[0]=R8(c->r[31]+0x0000016Bu); // 80213450
  W8(c->r[3]+0x000000B2u,c->r[4]); // 80213454
  W8(c->r[3]+0x000000B3u,c->r[0]); // 80213458
  c->r[4]=R8(c->r[31]+0x0000016Cu); // 8021345C
  c->r[0]=R8(c->r[31]+0x0000016Du); // 80213460
  W8(c->r[3]+0x000000B4u,c->r[4]); // 80213464
  W8(c->r[3]+0x000000B5u,c->r[0]); // 80213468
  c->r[4]=R8(c->r[31]+0x0000016Eu); // 8021346C
  c->r[0]=R8(c->r[31]+0x0000016Fu); // 80213470
  W8(c->r[3]+0x000000B6u,c->r[4]); // 80213474
  W8(c->r[3]+0x000000B7u,c->r[0]); // 80213478
  c->r[4]=R8(c->r[31]+0x00000170u); // 8021347C
  c->r[0]=R8(c->r[31]+0x00000171u); // 80213480
  W8(c->r[3]+0x000000B8u,c->r[4]); // 80213484
  W8(c->r[3]+0x000000B9u,c->r[0]); // 80213488
  c->r[4]=R8(c->r[31]+0x00000172u); // 8021348C
  c->r[0]=R8(c->r[31]+0x00000173u); // 80213490
  W8(c->r[3]+0x000000BAu,c->r[4]); // 80213494
  W8(c->r[3]+0x000000BBu,c->r[0]); // 80213498
  c->r[4]=R8(c->r[31]+0x00000174u); // 8021349C
  c->r[0]=R8(c->r[31]+0x00000175u); // 802134A0
  W8(c->r[3]+0x000000BCu,c->r[4]); // 802134A4
  W8(c->r[3]+0x000000BDu,c->r[0]); // 802134A8
  c->r[4]=R8(c->r[31]+0x00000176u); // 802134AC
  c->r[0]=R8(c->r[31]+0x00000177u); // 802134B0
  W8(c->r[3]+0x000000BEu,c->r[4]); // 802134B4
  W8(c->r[3]+0x000000BFu,c->r[0]); // 802134B8
  c->r[4]=R8(c->r[31]+0x00000178u); // 802134BC
  c->r[0]=R8(c->r[31]+0x00000179u); // 802134C0
  W8(c->r[3]+0x000000C0u,c->r[4]); // 802134C4
  W8(c->r[3]+0x000000C1u,c->r[0]); // 802134C8
  c->r[4]=R8(c->r[31]+0x0000017Au); // 802134CC
  c->r[0]=R8(c->r[31]+0x0000017Bu); // 802134D0
  W8(c->r[3]+0x000000C2u,c->r[4]); // 802134D4
  W8(c->r[3]+0x000000C3u,c->r[0]); // 802134D8
  c->r[4]=R8(c->r[31]+0x0000017Cu); // 802134DC
  c->r[0]=R8(c->r[31]+0x0000017Du); // 802134E0
  W8(c->r[3]+0x000000C4u,c->r[4]); // 802134E4
  W8(c->r[3]+0x000000C5u,c->r[0]); // 802134E8
  c->r[4]=R8(c->r[31]+0x0000017Eu); // 802134EC
  c->r[0]=R8(c->r[31]+0x0000017Fu); // 802134F0
  W8(c->r[3]+0x000000C6u,c->r[4]); // 802134F4
  W8(c->r[3]+0x000000C7u,c->r[0]); // 802134F8
  c->r[4]=R8(c->r[31]+0x00000180u); // 802134FC
  c->r[0]=R8(c->r[31]+0x00000181u); // 80213500
  W8(c->r[3]+0x000000C8u,c->r[4]); // 80213504
  W8(c->r[3]+0x000000C9u,c->r[0]); // 80213508
  c->r[4]=R8(c->r[31]+0x00000182u); // 8021350C
  c->r[0]=R8(c->r[31]+0x00000183u); // 80213510
  W8(c->r[3]+0x000000CAu,c->r[4]); // 80213514
  W8(c->r[3]+0x000000CBu,c->r[0]); // 80213518
  c->r[4]=R8(c->r[31]+0x00000184u); // 8021351C
  c->r[0]=R8(c->r[31]+0x00000185u); // 80213520
  W8(c->r[3]+0x000000CCu,c->r[4]); // 80213524
  W8(c->r[3]+0x000000CDu,c->r[0]); // 80213528
  c->r[4]=R8(c->r[31]+0x00000186u); // 8021352C
  c->r[0]=R8(c->r[31]+0x00000187u); // 80213530
  W8(c->r[3]+0x000000CEu,c->r[4]); // 80213534
  W8(c->r[3]+0x000000CFu,c->r[0]); // 80213538
  c->r[4]=R8(c->r[31]+0x00000188u); // 8021353C
  c->r[0]=R8(c->r[31]+0x00000189u); // 80213540
  W8(c->r[3]+0x000000D0u,c->r[4]); // 80213544
  W8(c->r[3]+0x000000D1u,c->r[0]); // 80213548
  c->r[4]=R8(c->r[31]+0x0000018Au); // 8021354C
  c->r[0]=R8(c->r[31]+0x0000018Bu); // 80213550
  W8(c->r[3]+0x000000D2u,c->r[4]); // 80213554
  W8(c->r[3]+0x000000D3u,c->r[0]); // 80213558
  c->r[4]=R8(c->r[31]+0x0000018Cu); // 8021355C
  c->r[0]=R8(c->r[31]+0x0000018Du); // 80213560
  W8(c->r[3]+0x000000D4u,c->r[4]); // 80213564
  W8(c->r[3]+0x000000D5u,c->r[0]); // 80213568
  c->r[4]=R8(c->r[31]+0x0000018Eu); // 8021356C
  c->r[0]=R8(c->r[31]+0x0000018Fu); // 80213570
  W8(c->r[3]+0x000000D6u,c->r[4]); // 80213574
  W8(c->r[3]+0x000000D7u,c->r[0]); // 80213578
  c->r[4]=R8(c->r[31]+0x00000190u); // 8021357C
  c->r[0]=R8(c->r[31]+0x00000191u); // 80213580
  W8(c->r[3]+0x000000D8u,c->r[4]); // 80213584
  W8(c->r[3]+0x000000D9u,c->r[0]); // 80213588
  c->r[4]=R8(c->r[31]+0x00000192u); // 8021358C
  c->r[0]=R8(c->r[31]+0x00000193u); // 80213590
  W8(c->r[3]+0x000000DAu,c->r[4]); // 80213594
  W8(c->r[3]+0x000000DBu,c->r[0]); // 80213598
  c->r[4]=R8(c->r[31]+0x00000194u); // 8021359C
  c->r[0]=R8(c->r[31]+0x00000195u); // 802135A0
  W8(c->r[3]+0x000000DCu,c->r[4]); // 802135A4
  W8(c->r[3]+0x000000DDu,c->r[0]); // 802135A8
  c->r[4]=R8(c->r[31]+0x00000196u); // 802135AC
  c->r[0]=R8(c->r[31]+0x00000197u); // 802135B0
  W8(c->r[3]+0x000000DEu,c->r[4]); // 802135B4
  W8(c->r[3]+0x000000DFu,c->r[0]); // 802135B8
  c->r[4]=R8(c->r[31]+0x00000198u); // 802135BC
  c->r[0]=R8(c->r[31]+0x00000199u); // 802135C0
  W8(c->r[3]+0x000000E0u,c->r[4]); // 802135C4
  W8(c->r[3]+0x000000E1u,c->r[0]); // 802135C8
  c->r[4]=R8(c->r[31]+0x0000019Au); // 802135CC
  c->r[0]=R8(c->r[31]+0x0000019Bu); // 802135D0
  W8(c->r[3]+0x000000E2u,c->r[4]); // 802135D4
  W8(c->r[3]+0x000000E3u,c->r[0]); // 802135D8
  c->r[4]=R8(c->r[31]+0x0000019Cu); // 802135DC
  c->r[0]=R8(c->r[31]+0x0000019Du); // 802135E0
  W8(c->r[3]+0x000000E4u,c->r[4]); // 802135E4
  W8(c->r[3]+0x000000E5u,c->r[0]); // 802135E8
  c->r[4]=R8(c->r[31]+0x0000019Eu); // 802135EC
  c->r[0]=R8(c->r[31]+0x0000019Fu); // 802135F0
  W8(c->r[3]+0x000000E6u,c->r[4]); // 802135F4
  W8(c->r[3]+0x000000E7u,c->r[0]); // 802135F8
  c->r[4]=R8(c->r[31]+0x000001A0u); // 802135FC
  c->r[0]=R8(c->r[31]+0x000001A1u); // 80213600
  W8(c->r[3]+0x000000E8u,c->r[4]); // 80213604
  W8(c->r[3]+0x000000E9u,c->r[0]); // 80213608
  c->r[4]=R8(c->r[31]+0x000001A2u); // 8021360C
  c->r[0]=R8(c->r[31]+0x000001A3u); // 80213610
  W8(c->r[3]+0x000000EAu,c->r[4]); // 80213614
  W8(c->r[3]+0x000000EBu,c->r[0]); // 80213618
  c->r[4]=R8(c->r[31]+0x000001A4u); // 8021361C
  c->r[0]=R8(c->r[31]+0x000001A5u); // 80213620
  W8(c->r[3]+0x000000ECu,c->r[4]); // 80213624
  W8(c->r[3]+0x000000EDu,c->r[0]); // 80213628
  c->r[4]=R8(c->r[31]+0x000001A6u); // 8021362C
  c->r[0]=R8(c->r[31]+0x000001A7u); // 80213630
  W8(c->r[3]+0x000000EEu,c->r[4]); // 80213634
  W8(c->r[3]+0x000000EFu,c->r[0]); // 80213638
  c->r[4]=R8(c->r[31]+0x000001A8u); // 8021363C
  c->r[0]=R8(c->r[31]+0x000001A9u); // 80213640
  W8(c->r[3]+0x000000F0u,c->r[4]); // 80213644
  W8(c->r[3]+0x000000F1u,c->r[0]); // 80213648
  c->r[4]=R8(c->r[31]+0x000001AAu); // 8021364C
  c->r[0]=R8(c->r[31]+0x000001ABu); // 80213650
  W8(c->r[3]+0x000000F2u,c->r[4]); // 80213654
  W8(c->r[3]+0x000000F3u,c->r[0]); // 80213658
  c->r[4]=R8(c->r[31]+0x000001ACu); // 8021365C
  c->r[0]=R8(c->r[31]+0x000001ADu); // 80213660
  W8(c->r[3]+0x000000F4u,c->r[4]); // 80213664
  W8(c->r[3]+0x000000F5u,c->r[0]); // 80213668
  c->r[4]=R8(c->r[31]+0x000001AEu); // 8021366C
  c->r[0]=R8(c->r[31]+0x000001AFu); // 80213670
  W8(c->r[3]+0x000000F6u,c->r[4]); // 80213674
  W8(c->r[3]+0x000000F7u,c->r[0]); // 80213678
  c->r[4]=R8(c->r[31]+0x000001B0u); // 8021367C
  c->r[0]=R8(c->r[31]+0x000001B1u); // 80213680
  W8(c->r[3]+0x000000F8u,c->r[4]); // 80213684
  W8(c->r[3]+0x000000F9u,c->r[0]); // 80213688
  c->r[4]=R8(c->r[31]+0x000001B2u); // 8021368C
  c->r[0]=R8(c->r[31]+0x000001B3u); // 80213690
  W8(c->r[3]+0x000000FAu,c->r[4]); // 80213694
  W8(c->r[3]+0x000000FBu,c->r[0]); // 80213698
  c->r[4]=R8(c->r[31]+0x000001B4u); // 8021369C
  c->r[0]=R8(c->r[31]+0x000001B5u); // 802136A0
  W8(c->r[3]+0x000000FCu,c->r[4]); // 802136A4
  W8(c->r[3]+0x000000FDu,c->r[0]); // 802136A8
  c->r[4]=R8(c->r[31]+0x000001B6u); // 802136AC
  c->r[0]=R8(c->r[31]+0x000001B7u); // 802136B0
  W8(c->r[3]+0x000000FEu,c->r[4]); // 802136B4
  W8(c->r[3]+0x000000FFu,c->r[0]); // 802136B8
  c->r[4]=R8(c->r[31]+0x000001B8u); // 802136BC
  c->r[0]=R8(c->r[31]+0x000001B9u); // 802136C0
  W8(c->r[3]+0x00000100u,c->r[4]); // 802136C4
  W8(c->r[3]+0x00000101u,c->r[0]); // 802136C8
  c->r[4]=R8(c->r[31]+0x000001BAu); // 802136CC
  c->r[0]=R8(c->r[31]+0x000001BBu); // 802136D0
  W8(c->r[3]+0x00000102u,c->r[4]); // 802136D4
  W8(c->r[3]+0x00000103u,c->r[0]); // 802136D8
  c->r[4]=R8(c->r[31]+0x000001BCu); // 802136DC
  c->r[0]=R8(c->r[31]+0x000001BDu); // 802136E0
  W8(c->r[3]+0x00000104u,c->r[4]); // 802136E4
  W8(c->r[3]+0x00000105u,c->r[0]); // 802136E8
  c->r[4]=R8(c->r[31]+0x000001BEu); // 802136EC
  c->r[0]=R8(c->r[31]+0x000001BFu); // 802136F0
  W8(c->r[3]+0x00000106u,c->r[4]); // 802136F4
  W8(c->r[3]+0x00000107u,c->r[0]); // 802136F8
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802136FC
  c->lr=0x80213704u; f_801F8BA4(c); // 80213700
  c->r[31]=c->r[3]|c->r[3]; // 80213704
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80213708
  c->lr=0x80213710u; f_800F5274(c); // 8021370C
  c->r[7]=R32(c->r[31]+0x000001C0u); // 80213710
  c->r[0]=0u+0x0000000Bu; // 80213714
  c->r[4]=R32(c->r[31]+0x000001C4u); // 80213718
  c->r[6]=c->r[3]+0x00000024u; // 8021371C
  c->r[5]=c->r[31]+0x000001E4u; // 80213720
  W32(c->r[3]+0x00000000u,c->r[7]); // 80213724
  W32(c->r[3]+0x00000004u,c->r[4]); // 80213728
  c->r[7]=R32(c->r[31]+0x000001C8u); // 8021372C
  c->r[4]=R32(c->r[31]+0x000001CCu); // 80213730
  W32(c->r[3]+0x00000008u,c->r[7]); // 80213734
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80213738
  c->r[7]=R32(c->r[31]+0x000001D0u); // 8021373C
  c->r[4]=R32(c->r[31]+0x000001D4u); // 80213740
  W32(c->r[3]+0x00000010u,c->r[7]); // 80213744
  W32(c->r[3]+0x00000014u,c->r[4]); // 80213748
  c->r[7]=R32(c->r[31]+0x000001D8u); // 8021374C
  c->r[4]=R32(c->r[31]+0x000001DCu); // 80213750
  W32(c->r[3]+0x00000018u,c->r[7]); // 80213754
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 80213758
  c->r[7]=R32(c->r[31]+0x000001E0u); // 8021375C
  c->r[4]=R32(c->r[31]+0x000001E4u); // 80213760
  W32(c->r[3]+0x00000020u,c->r[7]); // 80213764
  W32(c->r[3]+0x00000024u,c->r[4]); // 80213768
  c->ctr=c->r[0]; // 8021376C
L_80213770:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80213770
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80213774
  W32(c->r[6]+0x00000004u,c->r[4]); // 80213778
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8021377C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80213770; } // 80213780
  {uint32_t ea=c->r[31]+0x00000240u; c->f[0]=c->ps1[0]=RF32(ea);} // 80213784
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 80213788
  c->r[0]=R32(c->r[31]+0x00000244u); // 8021378C
  W32(c->r[3]+0x00000084u,c->r[0]); // 80213790
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80213794
  c->lr=0x8021379Cu; f_801F8BA4(c); // 80213798
  {uint32_t ea=c->r[3]+0x000002C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021379C
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802137A0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802137A4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 802137A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802137AC
  c->lr=0x802137B4u; f_801F8BA4(c); // 802137B0
  c->r[4]=c->r[31]|c->r[31]; // 802137B4
  c->r[3]=c->r[3]+0x00000248u; // 802137B8
  c->lr=0x802137C0u; f_801054CC(c); // 802137BC
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802137C0
  c->lr=0x802137C8u; f_801F8BA4(c); // 802137C4
  c->r[4]=c->r[3]|c->r[3]; // 802137C8
  c->r[3]=0u+0x80590000u; // 802137CC
  c->r[3]=c->r[3]+0x00006714u; // 802137D0
  c->r[4]=c->r[4]+0x00000248u; // 802137D4
  c->lr=0x802137DCu; f_801FCD18(c); // 802137D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802137DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802137E0
  c->lr=c->r[0]; // 802137E4
  c->r[1]=c->r[1]+0x00000020u; // 802137E8
  return; // 802137EC
}

// fn_802137F0
void f_802137F0(Ctx* __restrict c) {
  trace_call(0x802137F0u);
  c->r[0]=R8(c->r[3]+0x00000128u); // 802137F0
  cmpu(c,0,c->r[0],0x00000001u); // 802137F4
  if (!crb(c,2)) { goto L_80213844; } // 802137F8
  c->r[4]=0u+0x804D0000u; // 802137FC
  {uint32_t ea=c->r[3]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80213800
  c->r[4]=c->r[4]+0x00003318u; // 80213804
  {uint32_t ea=c->r[2]+0xFFFFCB68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213808
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021380C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 80213810
  {uint32_t ea=c->r[3]+0x000001DCu; WF32(ea,c->f[0]);} // 80213814
  goto L_80213834; // 80213818
L_8021381C:;
  {uint32_t ea=c->r[3]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021381C
  c->r[4]=R32(c->r[3]+0x000001E0u); // 80213820
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80213824
  c->r[0]=c->r[4]+0x00000001u; // 80213828
  W32(c->r[3]+0x000001E0u,c->r[0]); // 8021382C
  {uint32_t ea=c->r[3]+0x000001DCu; WF32(ea,c->f[0]);} // 80213830
L_80213834:;
  {uint32_t ea=c->r[3]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80213834
  fcmp(c,0,c->f[0],c->f[1]); // 80213838
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021383C
  if (crb(c,2)) { IRQCHK(c); goto L_8021381C; } // 80213840
L_80213844:;
  c->r[3]=0u+0x00000001u; // 80213844
  return; // 80213848
}

// fn_8021384C
void f_8021384C(Ctx* __restrict c) {
  trace_call(0x8021384Cu);
  W8(c->r[3]+0x00000128u,c->r[4]); // 8021384C
  return; // 80213850
}

// fn_80213854
void f_80213854(Ctx* __restrict c) {
  trace_call(0x80213854u);
  cmps(c,0,(int32_t)c->r[4],2); // 80213854
  if (crb(c,0)) { goto L_80213860; } // 80213858
  c->r[4]=0u+0x00000000u; // 8021385C
L_80213860:;
  cmps(c,0,(int32_t)c->r[4],0); // 80213860
  if (crb(c,0)) { goto L_80213878; } // 80213864
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)88); // 80213868
  c->r[3]=c->r[3]+c->r[0]; // 8021386C
  c->r[3]=R32(c->r[3]+0x0000012Cu); // 80213870
  return; // 80213874
L_80213878:;
  c->r[3]=0u+0x00000000u; // 80213878
  return; // 8021387C
}

// fn_80213880
void f_80213880(Ctx* __restrict c) {
  trace_call(0x80213880u);
  cmps(c,0,(int32_t)c->r[4],2); // 80213880
  if (crb(c,0)) { goto L_8021388C; } // 80213884
  c->r[4]=0u+0x00000000u; // 80213888
L_8021388C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8021388C
  if (crb(c,0)) return; // 80213890
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)88); // 80213894
  c->r[4]=0u+0x05F60000u; // 80213898
  c->r[0]=c->r[4]+0xFFFFE100u; // 8021389C
  c->r[4]=c->r[3]+c->r[5]; // 802138A0
  c->r[3]=R32(c->r[4]+0x0000012Cu); // 802138A4
  c->r[3]=c->r[3]+0x00000001u; // 802138A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802138AC
  W32(c->r[4]+0x0000012Cu,c->r[3]); // 802138B0
  if (!crb(c,1)) return; // 802138B4
  W32(c->r[4]+0x0000012Cu,c->r[0]); // 802138B8
  return; // 802138BC
}

// fn_802138C0
void f_802138C0(Ctx* __restrict c) {
  trace_call(0x802138C0u);
  cmps(c,0,(int32_t)c->r[4],2); // 802138C0
  if (crb(c,0)) { goto L_802138CC; } // 802138C4
  c->r[4]=0u+0x00000000u; // 802138C8
L_802138CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 802138CC
  if (crb(c,0)) { goto L_802138E4; } // 802138D0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)88); // 802138D4
  c->r[3]=c->r[3]+c->r[0]; // 802138D8
  c->r[3]=R32(c->r[3]+0x00000134u); // 802138DC
  return; // 802138E0
L_802138E4:;
  c->r[3]=0u+0x00000000u; // 802138E4
  return; // 802138E8
}

// fn_802138EC
void f_802138EC(Ctx* __restrict c) {
  trace_call(0x802138ECu);
  cmps(c,0,(int32_t)c->r[4],2); // 802138EC
  if (crb(c,0)) { goto L_802138F8; } // 802138F0
  c->r[4]=0u+0x00000000u; // 802138F4
L_802138F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 802138F8
  if (crb(c,0)) return; // 802138FC
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)88); // 80213900
  c->r[4]=0u+0x05F60000u; // 80213904
  c->r[0]=c->r[4]+0xFFFFE100u; // 80213908
  c->r[4]=c->r[3]+c->r[5]; // 8021390C
  c->r[3]=R32(c->r[4]+0x00000134u); // 80213910
  c->r[3]=c->r[3]+0x00000001u; // 80213914
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80213918
  W32(c->r[4]+0x00000134u,c->r[3]); // 8021391C
  if (!crb(c,1)) return; // 80213920
  W32(c->r[4]+0x00000134u,c->r[0]); // 80213924
  return; // 80213928
}

// fn_8021392C
void f_8021392C(Ctx* __restrict c) {
  trace_call(0x8021392Cu);
  cmps(c,0,(int32_t)c->r[4],2); // 8021392C
  if (crb(c,0)) { goto L_80213938; } // 80213930
  c->r[4]=0u+0x00000000u; // 80213934
L_80213938:;
  cmps(c,0,(int32_t)c->r[4],0); // 80213938
  if (crb(c,0)) { goto L_80213950; } // 8021393C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)88); // 80213940
  c->r[3]=c->r[3]+c->r[0]; // 80213944
  c->r[3]=R32(c->r[3]+0x0000013Cu); // 80213948
  return; // 8021394C
L_80213950:;
  c->r[3]=0u+0x00000000u; // 80213950
  return; // 80213954
}

// fn_80213958
void f_80213958(Ctx* __restrict c) {
  trace_call(0x80213958u);
  cmps(c,0,(int32_t)c->r[4],2); // 80213958
  if (crb(c,0)) { goto L_80213964; } // 8021395C
  c->r[4]=0u+0x00000000u; // 80213960
L_80213964:;
  cmps(c,0,(int32_t)c->r[4],0); // 80213964
  if (crb(c,0)) return; // 80213968
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)88); // 8021396C
  c->r[4]=0u+0x05F60000u; // 80213970
  c->r[0]=c->r[4]+0xFFFFE100u; // 80213974
  c->r[4]=c->r[3]+c->r[5]; // 80213978
  c->r[3]=R32(c->r[4]+0x0000013Cu); // 8021397C
  c->r[3]=c->r[3]+0x00000001u; // 80213980
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80213984
  W32(c->r[4]+0x0000013Cu,c->r[3]); // 80213988
  if (!crb(c,1)) return; // 8021398C
  W32(c->r[4]+0x0000013Cu,c->r[0]); // 80213990
  return; // 80213994
}

// fn_80213998
void f_80213998(Ctx* __restrict c) {
  trace_call(0x80213998u);
  cmps(c,0,(int32_t)c->r[4],0); // 80213998
  if (crb(c,0)) { goto L_802139A8; } // 8021399C
  cmps(c,0,(int32_t)c->r[4],2); // 802139A0
  if (crb(c,0)) { goto L_802139AC; } // 802139A4
L_802139A8:;
  c->r[4]=0u+0x00000000u; // 802139A8
L_802139AC:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)88); // 802139AC
  c->r[0]=R32(c->r[5]+0x00000000u); // 802139B0
  c->r[3]=c->r[3]+c->r[4]; // 802139B4
  W32(c->r[3]+0x00000144u,c->r[0]); // 802139B8
  c->r[0]=R32(c->r[5]+0x00000004u); // 802139BC
  W32(c->r[3]+0x00000148u,c->r[0]); // 802139C0
  c->r[0]=R32(c->r[5]+0x00000008u); // 802139C4
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 802139C8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802139CC
  W32(c->r[3]+0x00000150u,c->r[0]); // 802139D0
  c->r[0]=R32(c->r[5]+0x00000010u); // 802139D4
  W32(c->r[3]+0x00000154u,c->r[0]); // 802139D8
  c->r[0]=R32(c->r[5]+0x00000014u); // 802139DC
  W32(c->r[3]+0x00000158u,c->r[0]); // 802139E0
  c->r[0]=R32(c->r[5]+0x00000018u); // 802139E4
  W32(c->r[3]+0x0000015Cu,c->r[0]); // 802139E8
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 802139EC
  W32(c->r[3]+0x00000160u,c->r[0]); // 802139F0
  c->r[0]=R32(c->r[5]+0x00000020u); // 802139F4
  W32(c->r[3]+0x00000164u,c->r[0]); // 802139F8
  c->r[0]=R32(c->r[5]+0x00000024u); // 802139FC
  W32(c->r[3]+0x00000168u,c->r[0]); // 80213A00
  c->r[0]=R32(c->r[5]+0x00000028u); // 80213A04
  W32(c->r[3]+0x0000016Cu,c->r[0]); // 80213A08
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 80213A0C
  W32(c->r[3]+0x00000170u,c->r[0]); // 80213A10
  c->r[0]=R32(c->r[5]+0x00000030u); // 80213A14
  W32(c->r[3]+0x00000174u,c->r[0]); // 80213A18
  c->r[0]=R32(c->r[5]+0x00000034u); // 80213A1C
  W32(c->r[3]+0x00000178u,c->r[0]); // 80213A20
  c->r[0]=R32(c->r[5]+0x00000038u); // 80213A24
  W32(c->r[3]+0x0000017Cu,c->r[0]); // 80213A28
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 80213A2C
  W32(c->r[3]+0x00000180u,c->r[0]); // 80213A30
  return; // 80213A34
}

// fn_80213A38
void f_80213A38(Ctx* __restrict c) {
  trace_call(0x80213A38u);
  cmps(c,0,(int32_t)c->r[4],0); // 80213A38
  if (crb(c,0)) { goto L_80213A48; } // 80213A3C
  cmps(c,0,(int32_t)c->r[4],2); // 80213A40
  if (crb(c,0)) { goto L_80213A4C; } // 80213A44
L_80213A48:;
  c->r[4]=0u+0x00000000u; // 80213A48
L_80213A4C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80213A4C
  if (crb(c,0)) { goto L_80213A5C; } // 80213A50
  cmps(c,0,(int32_t)c->r[5],16); // 80213A54
  if (crb(c,0)) { goto L_80213A60; } // 80213A58
L_80213A5C:;
  c->r[5]=0u+0x00000000u; // 80213A5C
L_80213A60:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)88); // 80213A60
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80213A64
  c->r[3]=c->r[3]+c->r[4]; // 80213A68
  c->r[3]=c->r[3]+c->r[0]; // 80213A6C
  c->r[3]=R32(c->r[3]+0x00000144u); // 80213A70
  return; // 80213A74
}

// fn_80213A78
void f_80213A78(Ctx* __restrict c) {
  trace_call(0x80213A78u);
  c->r[3]=R32(c->r[3]+0x000001E0u); // 80213A78
  return; // 80213A7C
}

// fn_80213A80
void f_80213A80(Ctx* __restrict c) {
  trace_call(0x80213A80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213A80
  c->r[0]=c->lr; // 80213A84
  c->r[4]=0u+0x00000001u; // 80213A88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80213A8C
  c->r[0]=0u+0x00000000u; // 80213A90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80213A94
  c->r[31]=c->r[3]|c->r[3]; // 80213A98
  W8(c->r[3]+0x00000128u,c->r[4]); // 80213A9C
  W8(c->r[3]+0x00000129u,c->r[0]); // 80213AA0
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 80213AA4
  cmps(c,0,(int32_t)c->r[3],0); // 80213AA8
  if (crb(c,2)) { goto L_80213ABC; } // 80213AAC
  c->lr=0x80213AB4u; f_801F8B9C(c); // 80213AB0
  cmps(c,0,(int32_t)c->r[3],1); // 80213AB4
  if (crb(c,2)) { goto L_80213AFC; } // 80213AB8
L_80213ABC:;
  {uint32_t ea=c->r[2]+0xFFFFCB6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80213ABC
  c->r[0]=0u+0x00000000u; // 80213AC0
  W32(c->r[31]+0x000001E0u,c->r[0]); // 80213AC4
  {uint32_t ea=c->r[31]+0x000001DCu; WF32(ea,c->f[0]);} // 80213AC8
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 80213ACC
  W32(c->r[31]+0x00000134u,c->r[0]); // 80213AD0
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 80213AD4
  W32(c->r[31]+0x00000130u,c->r[0]); // 80213AD8
  W32(c->r[31]+0x00000138u,c->r[0]); // 80213ADC
  W32(c->r[31]+0x00000140u,c->r[0]); // 80213AE0
  W32(c->r[31]+0x00000184u,c->r[0]); // 80213AE4
  W32(c->r[31]+0x0000018Cu,c->r[0]); // 80213AE8
  W32(c->r[31]+0x00000194u,c->r[0]); // 80213AEC
  W32(c->r[31]+0x00000188u,c->r[0]); // 80213AF0
  W32(c->r[31]+0x00000190u,c->r[0]); // 80213AF4
  W32(c->r[31]+0x00000198u,c->r[0]); // 80213AF8
L_80213AFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80213AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80213B00
  c->lr=c->r[0]; // 80213B04
  c->r[1]=c->r[1]+0x00000010u; // 80213B08
  return; // 80213B0C
}

// fn_80213B10
void f_80213B10(Ctx* __restrict c) {
  trace_call(0x80213B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213B10
  c->r[0]=c->lr; // 80213B14
  c->r[3]=0u+0x803F0000u; // 80213B18
  c->r[7]=0u+0x805C0000u; // 80213B1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80213B20
  c->r[4]=0u+0x80410000u; // 80213B24
  c->r[3]=c->r[3]+0x0000233Cu; // 80213B28
  {uint32_t ea=c->r[2]+0xFFFFCB6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80213B2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80213B30
  c->r[5]=0u+0x00000000u; // 80213B34
  {uint32_t ea=c->r[2]+0xFFFFCB68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80213B38
  c->r[6]=c->r[7]+0x00005B88u; // 80213B3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80213B40
  c->r[0]=0u+0x00000002u; // 80213B44
  c->r[31]=0u+0xFFFFFFFFu; // 80213B48
  c->r[4]=c->r[4]+0xFFFFBBD8u; // 80213B4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80213B50
  c->r[29]=0u+0x805C0000u; // 80213B54
  c->r[30]=c->r[29]+0x00005B94u; // 80213B58
  W32(c->r[30]+0x00000124u,c->r[3]); // 80213B5C
  c->r[3]=c->r[30]|c->r[30]; // 80213B60
  {uint32_t ea=c->r[7]+0x00005B88u; WF32(ea,c->f[1]);} // 80213B64
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 80213B68
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[1]);} // 80213B6C
  W32(c->r[29]+0x00005B94u,c->r[5]); // 80213B70
  W32(c->r[30]+0x00000004u,c->r[0]); // 80213B74
  W32(c->r[30]+0x00000010u,c->r[31]); // 80213B78
  W32(c->r[30]+0x00000014u,c->r[5]); // 80213B7C
  W32(c->r[30]+0x00000018u,c->r[5]); // 80213B80
  W32(c->r[30]+0x0000001Cu,c->r[5]); // 80213B84
  W32(c->r[30]+0x0000000Cu,c->r[5]); // 80213B88
  W32(c->r[30]+0x00000020u,c->r[5]); // 80213B8C
  W32(c->r[30]+0x00000008u,c->r[5]); // 80213B90
  W32(c->r[30]+0x00000124u,c->r[4]); // 80213B94
  c->lr=0x80213B9Cu; f_80213A80(c); // 80213B98
  c->r[0]=0u+0x00000000u; // 80213B9C
  c->r[3]=0u+0x80440000u; // 80213BA0
  W32(c->r[30]+0x00000144u,c->r[0]); // 80213BA4
  c->r[4]=c->r[30]|c->r[30]; // 80213BA8
  c->r[3]=c->r[3]+0x000010F8u; // 80213BAC
  c->r[5]=0u+0x00000001u; // 80213BB0
  W32(c->r[30]+0x00000148u,c->r[0]); // 80213BB4
  c->r[6]=0u+0x00000006u; // 80213BB8
  c->r[7]=0u+0x00000017u; // 80213BBC
  c->r[8]=0u+0x00000000u; // 80213BC0
  W32(c->r[30]+0x0000014Cu,c->r[0]); // 80213BC4
  c->r[9]=0u+0x00000000u; // 80213BC8
  W32(c->r[30]+0x00000150u,c->r[0]); // 80213BCC
  W32(c->r[30]+0x00000154u,c->r[0]); // 80213BD0
  W32(c->r[30]+0x00000158u,c->r[0]); // 80213BD4
  W32(c->r[30]+0x0000015Cu,c->r[0]); // 80213BD8
  W32(c->r[30]+0x00000160u,c->r[0]); // 80213BDC
  W32(c->r[30]+0x00000164u,c->r[0]); // 80213BE0
  W32(c->r[30]+0x00000168u,c->r[0]); // 80213BE4
  W32(c->r[30]+0x0000016Cu,c->r[0]); // 80213BE8
  W32(c->r[30]+0x00000170u,c->r[0]); // 80213BEC
  W32(c->r[30]+0x00000174u,c->r[0]); // 80213BF0
  W32(c->r[30]+0x00000178u,c->r[0]); // 80213BF4
  W32(c->r[30]+0x0000017Cu,c->r[0]); // 80213BF8
  W32(c->r[30]+0x00000180u,c->r[0]); // 80213BFC
  W32(c->r[30]+0x0000019Cu,c->r[0]); // 80213C00
  W32(c->r[30]+0x000001A0u,c->r[0]); // 80213C04
  W32(c->r[30]+0x000001A4u,c->r[0]); // 80213C08
  W32(c->r[30]+0x000001A8u,c->r[0]); // 80213C0C
  W32(c->r[30]+0x000001ACu,c->r[0]); // 80213C10
  W32(c->r[30]+0x000001B0u,c->r[0]); // 80213C14
  W32(c->r[30]+0x000001B4u,c->r[0]); // 80213C18
  W32(c->r[30]+0x000001B8u,c->r[0]); // 80213C1C
  W32(c->r[30]+0x000001BCu,c->r[0]); // 80213C20
  W32(c->r[30]+0x000001C0u,c->r[0]); // 80213C24
  W32(c->r[30]+0x000001C4u,c->r[0]); // 80213C28
  W32(c->r[30]+0x000001C8u,c->r[0]); // 80213C2C
  W32(c->r[30]+0x000001CCu,c->r[0]); // 80213C30
  W32(c->r[30]+0x000001D0u,c->r[0]); // 80213C34
  W32(c->r[30]+0x000001D4u,c->r[0]); // 80213C38
  W32(c->r[30]+0x000001D8u,c->r[0]); // 80213C3C
  c->lr=0x80213C44u; f_8003D4DC(c); // 80213C40
  c->r[0]=R32(c->r[29]+0x00005B94u); // 80213C44
  cmps(c,0,(int32_t)c->r[0],-1); // 80213C48
  if (crb(c,2)) { goto L_80213C54; } // 80213C4C
  W32(c->r[29]+0x00005B94u,c->r[31]); // 80213C50
L_80213C54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80213C54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80213C58
  c->r[30]=R32(c->r[1]+0x00000018u); // 80213C5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80213C60
  c->lr=c->r[0]; // 80213C64
  c->r[1]=c->r[1]+0x00000020u; // 80213C68
  return; // 80213C6C
}

// fn_80213C70
void f_80213C70(Ctx* __restrict c) {
  trace_call(0x80213C70u);
  c->r[4]=0u+0x80410000u; // 80213C70
  c->r[0]=0u+0x00000000u; // 80213C74
  c->r[4]=c->r[4]+0xFFFFBC00u; // 80213C78
  W32(c->r[3]+0x00000004u,c->r[0]); // 80213C7C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80213C80
  W32(c->r[3]+0x00000008u,c->r[0]); // 80213C84
  return; // 80213C88
}

// fn_80213C8C
void f_80213C8C(Ctx* __restrict c) {
  trace_call(0x80213C8Cu);
  W32(c->r[3]+0x00000004u,c->r[4]); // 80213C8C
  W32(c->r[3]+0x00000008u,c->r[5]); // 80213C90
  return; // 80213C94
}

// fn_80213C98
void f_80213C98(Ctx* __restrict c) {
  trace_call(0x80213C98u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213C98
  c->r[0]=c->lr; // 80213C9C
  W32(c->r[1]+0x00000104u,c->r[0]); // 80213CA0
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 80213CA4
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 80213CA8
  cmps(c,0,(int32_t)c->r[7],0); // 80213CAC
  W32(c->r[1]+0x000000ECu,c->r[31]); // 80213CB0
  W32(c->r[1]+0x000000E8u,c->r[30]); // 80213CB4
  c->r[30]=c->r[6]|c->r[6]; // 80213CB8
  W32(c->r[1]+0x000000E4u,c->r[29]); // 80213CBC
  c->r[29]=c->r[4]|c->r[4]; // 80213CC0
  W32(c->r[1]+0x000000E0u,c->r[28]); // 80213CC4
  c->r[28]=c->r[3]|c->r[3]; // 80213CC8
  if (!crb(c,2)) { goto L_80213D8C; } // 80213CCC
  c->r[4]=R32(c->r[3]+0x00000008u); // 80213CD0
  c->r[3]=c->r[1]+0x00000098u; // 80213CD4
  c->r[5]=R32(c->r[28]+0x00000004u); // 80213CD8
  c->r[7]=0u+0x00000001u; // 80213CDC
  c->r[4]=R32(c->r[4]+0x0000006Cu); // 80213CE0
  c->r[31]=c->r[4]+0x000001D8u; // 80213CE4
  c->r[6]=R32(c->r[4]+0x000001DCu); // 80213CE8
  c->r[4]=c->r[31]|c->r[31]; // 80213CEC
  c->lr=0x80213CF4u; f_80180554(c); // 80213CF0
  c->r[3]=c->r[1]+0x00000048u; // 80213CF4
  c->r[4]=c->r[1]+0x00000098u; // 80213CF8
  c->lr=0x80213D00u; f_80138AB8(c); // 80213CFC
  c->r[5]=R32(c->r[28]+0x00000004u); // 80213D00
  c->r[4]=c->r[31]|c->r[31]; // 80213D04
  c->r[6]=R32(c->r[31]+0x00000008u); // 80213D08
  c->r[3]=c->r[1]+0x00000058u; // 80213D0C
  c->r[7]=0u+0x00000001u; // 80213D10
  c->lr=0x80213D18u; f_80180554(c); // 80213D14
  c->r[3]=c->r[1]+0x00000038u; // 80213D18
  c->r[4]=c->r[1]+0x00000058u; // 80213D1C
  c->lr=0x80213D24u; f_80138AA8(c); // 80213D20
  c->r[4]=c->r[30]|c->r[30]; // 80213D24
  c->r[3]=c->r[1]+0x00000028u; // 80213D28
  c->r[5]=c->r[1]+0x00000048u; // 80213D2C
  c->lr=0x80213D34u; f_8013951C(c); // 80213D30
  c->r[3]=c->r[1]+0x00000028u; // 80213D34
  c->r[4]=c->r[1]+0x00000038u; // 80213D38
  c->lr=0x80213D40u; f_800593E4(c); // 80213D3C
  {uint32_t ea=c->r[2]+0xFFFFCB70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80213D40
  c->f[31]=c->f[1]; // 80213D44
  fcmp(c,0,c->f[1],c->f[0]); // 80213D48
  if (!crb(c,1)) { goto L_80213D8C; } // 80213D4C
  c->r[3]=c->r[1]+0x00000008u; // 80213D50
  c->r[4]=c->r[1]+0x00000038u; // 80213D54
  c->lr=0x80213D5Cu; f_8013939C(c); // 80213D58
  c->f[1]=c->f[31]; // 80213D5C
  c->r[3]=c->r[1]+0x00000008u; // 80213D60
  c->lr=0x80213D68u; f_80139448(c); // 80213D64
  c->r[4]=c->r[30]|c->r[30]; // 80213D68
  c->r[3]=c->r[1]+0x00000018u; // 80213D6C
  c->r[5]=c->r[1]+0x00000008u; // 80213D70
  c->lr=0x80213D78u; f_8013951C(c); // 80213D74
  c->r[3]=c->r[29]|c->r[29]; // 80213D78
  c->r[4]=c->r[1]+0x00000018u; // 80213D7C
  c->lr=0x80213D84u; f_8013939C(c); // 80213D80
  c->r[3]=0u+0x00000001u; // 80213D84
  goto L_80213D90; // 80213D88
L_80213D8C:;
  c->r[3]=0u+0x00000000u; // 80213D8C
L_80213D90:;
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 80213D90
  c->r[0]=R32(c->r[1]+0x00000104u); // 80213D94
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 80213D98
  c->r[31]=R32(c->r[1]+0x000000ECu); // 80213D9C
  c->r[30]=R32(c->r[1]+0x000000E8u); // 80213DA0
  c->r[29]=R32(c->r[1]+0x000000E4u); // 80213DA4
  c->r[28]=R32(c->r[1]+0x000000E0u); // 80213DA8
  c->lr=c->r[0]; // 80213DAC
  c->r[1]=c->r[1]+0x00000100u; // 80213DB0
  return; // 80213DB4
}

// fn_80213DB8
void f_80213DB8(Ctx* __restrict c) {
  trace_call(0x80213DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213DB8
  c->r[0]=c->lr; // 80213DBC
  cmps(c,0,(int32_t)c->r[3],0); // 80213DC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80213DC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80213DC8
  c->r[31]=c->r[3]|c->r[3]; // 80213DCC
  if (crb(c,2)) { goto L_80213DE0; } // 80213DD0
  cmps(c,0,(int32_t)c->r[4],0); // 80213DD4
  if (!crb(c,1)) { goto L_80213DE0; } // 80213DD8
  c->lr=0x80213DE0u; f_802896EC(c); // 80213DDC
L_80213DE0:;
  c->r[3]=c->r[31]|c->r[31]; // 80213DE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80213DE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80213DE8
  c->lr=c->r[0]; // 80213DEC
  c->r[1]=c->r[1]+0x00000010u; // 80213DF0
  return; // 80213DF4
}

// fn_80213DF8
void f_80213DF8(Ctx* __restrict c) {
  trace_call(0x80213DF8u);
  return; // 80213DF8
}

// fn_80213DFC
void f_80213DFC(Ctx* __restrict c) {
  trace_call(0x80213DFCu);
  c->r[3]=0u+0x00000008u; // 80213DFC
  return; // 80213E00
}

// fn_80213E04
void f_80213E04(Ctx* __restrict c) {
  trace_call(0x80213E04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213E04
  c->r[0]=c->lr; // 80213E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80213E0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80213E10
  c->r[31]=c->r[3]|c->r[3]; // 80213E14
  c->lr=0x80213E1Cu; f_801E2A78(c); // 80213E18
  c->r[0]=R32(c->r[31]+0x00002150u); // 80213E1C
  c->r[6]=0u+0x80410000u; // 80213E20
  c->r[6]=c->r[6]+0xFFFFBC5Cu; // 80213E24
  c->r[3]=c->r[31]|c->r[31]; // 80213E28
  c->r[5]=c->r[6]+0x00000040u; // 80213E2C
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 80213E30
  c->r[4]=c->r[6]+0x0000041Cu; // 80213E34
  W32(c->r[31]+0x00000010u,c->r[6]); // 80213E38
  W32(c->r[31]+0x00000048u,c->r[5]); // 80213E3C
  W32(c->r[31]+0x00001F6Cu,c->r[4]); // 80213E40
  W32(c->r[31]+0x00002150u,c->r[0]); // 80213E44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80213E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 80213E4C
  c->lr=c->r[0]; // 80213E50
  c->r[1]=c->r[1]+0x00000010u; // 80213E54
  return; // 80213E58
}

// fn_80213E5C
void f_80213E5C(Ctx* __restrict c) {
  trace_call(0x80213E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213E5C
  c->r[0]=c->lr; // 80213E60
  cmps(c,0,(int32_t)c->r[3],0); // 80213E64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80213E68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80213E6C
  c->r[30]=c->r[3]|c->r[3]; // 80213E70
  c->r[31]=c->r[4]|c->r[4]; // 80213E74
  if (crb(c,2)) { goto L_80213E94; } // 80213E78
  c->r[4]=0u+0x00000000u; // 80213E7C
  c->lr=0x80213E84u; f_801CCAF8(c); // 80213E80
  cmps(c,0,(int32_t)c->r[31],0); // 80213E84
  if (!crb(c,1)) { goto L_80213E94; } // 80213E88
  c->r[3]=c->r[30]|c->r[30]; // 80213E8C
  c->lr=0x80213E94u; f_802896EC(c); // 80213E90
L_80213E94:;
  c->r[3]=c->r[30]|c->r[30]; // 80213E94
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80213E98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80213E9C
  c->lr=c->r[0]; // 80213EA0
  c->r[1]=c->r[1]+0x00000010u; // 80213EA4
  return; // 80213EA8
}

// fn_80213EAC
void f_80213EAC(Ctx* __restrict c) {
  trace_call(0x80213EACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213EAC
  c->r[0]=c->lr; // 80213EB0
  c->r[4]=c->r[3]+0x00000FF8u; // 80213EB4
  c->r[5]=0u+0x00000001u; // 80213EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80213EBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80213EC0
  c->r[31]=c->r[3]|c->r[3]; // 80213EC4
  c->lr=0x80213ECCu; f_80076080(c); // 80213EC8
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 80213ECC
  c->r[3]=c->r[31]+0x00000FF8u; // 80213ED0
  c->r[4]=0u+0x00000000u; // 80213ED4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80213ED8
  c->ctr=c->r[12]; // 80213EDC
  if (true) { c->lr=0x80213EE4u; dispatch(c,c->ctr); } // 80213EE0
  c->r[12]=R32(c->r[31]+0x00000010u); // 80213EE4
  c->r[3]=c->r[31]|c->r[31]; // 80213EE8
  c->r[12]=R32(c->r[12]+0x00000338u); // 80213EEC
  c->ctr=c->r[12]; // 80213EF0
  if (true) { c->lr=0x80213EF8u; dispatch(c,c->ctr); } // 80213EF4
  c->r[12]=R32(c->r[31]+0x00000FF8u); // 80213EF8
  c->r[4]=c->r[3]|c->r[3]; // 80213EFC
  c->r[3]=c->r[31]+0x00000FF8u; // 80213F00
  c->r[12]=R32(c->r[12]+0x00000040u); // 80213F04
  c->ctr=c->r[12]; // 80213F08
  if (true) { c->lr=0x80213F10u; dispatch(c,c->ctr); } // 80213F0C
  c->r[3]=c->r[31]+0x00001F18u; // 80213F10
  c->lr=0x80213F18u; f_801E24C0(c); // 80213F14
  c->r[0]=R32(c->r[31]+0x00002164u); // 80213F18
  c->r[4]=0u+0xFFFFFFFFu; // 80213F1C
  c->r[3]=R32(c->r[31]+0x00002150u); // 80213F20
  c->r[0]=c->r[0]|0x80000000u; // 80213F24
  {uint32_t ea=c->r[2]+0xFFFFCB80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80213F28
  c->r[3]=rotl(c->r[3],0)&0xBFFFFFFFu; // 80213F2C
  W32(c->r[31]+0x00002158u,c->r[4]); // 80213F30
  c->r[0]=rotl(c->r[0],0)&0x8FFFFFFFu; // 80213F34
  {uint32_t ea=c->r[31]+0x0000215Cu; WF32(ea,c->f[0]);} // 80213F38
  W32(c->r[31]+0x00002150u,c->r[3]); // 80213F3C
  W32(c->r[31]+0x00002164u,c->r[0]); // 80213F40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80213F44
  c->r[0]=R32(c->r[1]+0x00000014u); // 80213F48
  c->lr=c->r[0]; // 80213F4C
  c->r[1]=c->r[1]+0x00000010u; // 80213F50
  return; // 80213F54
}

// fn_80213F58
void f_80213F58(Ctx* __restrict c) {
  trace_call(0x80213F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213F58
  c->r[0]=c->lr; // 80213F5C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80213F60
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80213F64
  c->r[31]=c->r[3]|c->r[3]; // 80213F68
  c->r[3]=c->r[1]+0x00000020u; // 80213F6C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80213F70
  c->r[4]=c->r[31]+0x000008D0u; // 80213F74
  c->r[12]=R32(c->r[12]+0x00000040u); // 80213F78
  c->ctr=c->r[12]; // 80213F7C
  if (true) { c->lr=0x80213F84u; dispatch(c,c->ctr); } // 80213F80
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80213F84
  c->r[3]=c->r[1]+0x00000008u; // 80213F88
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 80213F8C
  {uint32_t ea=c->r[1]+0x00000044u; c->f[3]=c->ps1[3]=RF32(ea);} // 80213F90
  c->lr=0x80213F98u; f_800521A0(c); // 80213F94
  c->r[3]=c->r[1]+0x00000014u; // 80213F98
  c->r[4]=c->r[1]+0x00000008u; // 80213F9C
  c->lr=0x80213FA4u; f_800521B0(c); // 80213FA0
  c->r[3]=c->r[31]|c->r[31]; // 80213FA4
  c->r[4]=c->r[1]+0x00000014u; // 80213FA8
  c->lr=0x80213FB0u; f_801E3480(c); // 80213FAC
  c->r[3]=c->r[31]|c->r[31]; // 80213FB0
  c->lr=0x80213FB8u; f_801E2D68(c); // 80213FB4
  c->r[0]=R32(c->r[1]+0x00000064u); // 80213FB8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80213FBC
  c->lr=c->r[0]; // 80213FC0
  c->r[1]=c->r[1]+0x00000060u; // 80213FC4
  return; // 80213FC8
}

// fn_80213FCC
void f_80213FCC(Ctx* __restrict c) {
  trace_call(0x80213FCCu);
  f_800ADCD8(c); return; // 80213FCC
}

// fn_80213FD0
void f_80213FD0(Ctx* __restrict c) {
  trace_call(0x80213FD0u);
  return; // 80213FD0
}

// SetExplosiveDamage__11DynamicMeshFif
void f_80213FD4(Ctx* __restrict c) {
  trace_call(0x80213FD4u);
  W32(c->r[3]+0x00002158u,c->r[4]); // 80213FD4
  {uint32_t ea=c->r[3]+0x0000215Cu; WF32(ea,c->f[1]);} // 80213FD8
  return; // 80213FDC
}

// fn_80213FE0
void f_80213FE0(Ctx* __restrict c) {
  trace_call(0x80213FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80213FE0
  c->r[0]=c->lr; // 80213FE4
  W32(c->r[1]+0x00000074u,c->r[0]); // 80213FE8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80213FEC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80213FF0
  {uint32_t ea=c->r[2]+0xFFFFCB80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80213FF4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80213FF8
  c->r[31]=c->r[4]|c->r[4]; // 80213FFC
  W32(c->r[1]+0x00000058u,c->r[30]); // 80214000
  c->r[30]=c->r[3]|c->r[3]; // 80214004
  {uint32_t ea=c->r[3]+0x0000215Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80214008
  fcmp(c,0,c->f[0],c->f[31]); // 8021400C
  if (!crb(c,2)) { goto L_802140A8; } // 80214010
  c->lr=0x80214018u; f_80061A4C(c); // 80214014
  c->r[4]=c->r[1]+0x00000008u; // 80214018
  {uint32_t ea=c->r[3]+0x00000390u; psq_load(c,1,ea,0,0);} // 8021401C
  {uint32_t ea=c->r[3]+0x00000384u; psq_load(c,0,ea,0,0);} // 80214020
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80214024
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80214028
  {uint32_t ea=c->r[3]+0x00000398u; psq_load(c,1,ea,1,0);} // 8021402C
  {uint32_t ea=c->r[3]+0x0000038Cu; psq_load(c,0,ea,1,0);} // 80214030
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80214034
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,0,ea,1,0);} // 80214038
  c->r[3]=c->r[4]|c->r[4]; // 8021403C
  c->r[4]=c->r[1]+0x00000014u; // 80214040
  c->lr=0x80214048u; f_80265750(c); // 80214044
  c->r[3]=c->r[1]+0x00000020u; // 80214048
  c->r[4]=c->r[1]+0x00000014u; // 8021404C
  c->lr=0x80214054u; f_800521B0(c); // 80214050
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214054
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214058
  c->lr=0x80214060u; f_80394548(c); // 8021405C
  {uint32_t ea=c->r[2]+0xFFFFCB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214060
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 80214064
  c->lr=0x8021406Cu; f_80291D94(c); // 80214068
  c->r[3]=c->r[3]^0x80000000u; // 8021406C
  c->r[0]=0u+0x43300000u; // 80214070
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 80214074
  {uint32_t ea=c->r[2]+0xFFFFCBA0u; c->f[1]=RF64(ea);} // 80214078
  W32(c->r[1]+0x00000048u,c->r[0]); // 8021407C
  {uint32_t ea=c->r[2]+0xFFFFCB88u; c->f[3]=c->ps1[3]=RF32(ea);} // 80214080
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 80214084
  {uint32_t ea=c->r[2]+0xFFFFCB90u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214088
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 8021408C
  {uint32_t ea=c->r[2]+0xFFFFCB8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80214090
  {uint32_t ea=c->r[2]+0xFFFFCB94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214094
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 80214098
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 8021409C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802140A0
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 802140A4
L_802140A8:;
  c->r[4]=c->r[31]|c->r[31]; // 802140A8
  c->r[3]=c->r[1]+0x0000002Cu; // 802140AC
  c->lr=0x802140B4u; f_8003F468(c); // 802140B0
  c->f[1]=c->f[31]; // 802140B4
  {uint32_t ea=c->r[2]+0xFFFFCB98u; c->f[2]=c->ps1[2]=RF32(ea);} // 802140B8
  c->r[3]=c->r[1]+0x00000038u; // 802140BC
  c->lr=0x802140C4u; f_80124134(c); // 802140C0
  {uint32_t ea=c->r[2]+0xFFFFCB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802140C4
  c->r[3]=c->r[30]|c->r[30]; // 802140C8
  c->r[4]=c->r[1]+0x0000002Cu; // 802140CC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 802140D0
  c->r[12]=R32(c->r[30]+0x00000010u); // 802140D4
  c->r[12]=R32(c->r[12]+0x00000334u); // 802140D8
  c->ctr=c->r[12]; // 802140DC
  if (true) { c->lr=0x802140E4u; dispatch(c,c->ctr); } // 802140E0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 802140E4
  c->r[0]=R32(c->r[1]+0x00000074u); // 802140E8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 802140EC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 802140F0
  c->r[30]=R32(c->r[1]+0x00000058u); // 802140F4
  c->lr=c->r[0]; // 802140F8
  c->r[1]=c->r[1]+0x00000070u; // 802140FC
  return; // 80214100
}

// fn_80214104
void f_80214104(Ctx* __restrict c) {
  trace_call(0x80214104u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214104
  c->r[0]=c->lr; // 80214108
  W32(c->r[1]+0x00000054u,c->r[0]); // 8021410C
  c->r[11]=c->r[1]+0x00000050u; // 80214110
  c->lr=0x80214118u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80214114
  c->r[31]=c->r[1]|c->r[1]; // 80214118
  c->r[0]=R32(c->r[3]+0x00002164u); // 8021411C
  c->r[30]=c->r[3]|c->r[3]; // 80214120
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 80214124
  if (!crb(c,2)) { goto L_80214258; } // 80214128
  c->r[0]=R32(c->r[3]+0x000007E4u); // 8021412C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80214130
  if (!crb(c,2)) { goto L_80214158; } // 80214134
  c->r[12]=R32(c->r[3]+0x00000010u); // 80214138
  {uint32_t ea=c->r[2]+0xFFFFCB9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021413C
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 80214140
  c->ctr=c->r[12]; // 80214144
  if (true) { c->lr=0x8021414Cu; dispatch(c,c->ctr); } // 80214148
  {uint32_t ea=c->r[30]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021414C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80214150
  {uint32_t ea=c->r[30]+0x000003A4u; WF32(ea,c->f[0]);} // 80214154
L_80214158:;
  {uint32_t ea=c->r[2]+0xFFFFCB98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214158
  c->r[4]=0u+0x00000000u; // 8021415C
  {uint32_t ea=c->r[30]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214160
  c->r[3]=R32(c->r[30]+0x00000874u); // 80214164
  fcmp(c,0,c->f[0],c->f[1]); // 80214168
  {uint32_t ea=c->r[30]+0x00000870u; WF32(ea,c->f[1]);} // 8021416C
  c->r[0]=c->r[3]+0x00000001u; // 80214170
  W32(c->r[30]+0x00000874u,c->r[0]); // 80214174
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80214178
  if (!crb(c,2)) { goto L_80214184; } // 8021417C
  c->r[4]=0u+0x00000001u; // 80214180
L_80214184:;
  cmps(c,0,(int32_t)c->r[4],0); // 80214184
  if (crb(c,2)) { goto L_80214258; } // 80214188
  c->r[4]=R32(c->r[30]+0x00002164u); // 8021418C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[0]); // 80214190
  if (crb(c,2)) { goto L_80214258; } // 80214194
  c->r[3]=R32(c->r[30]+0x00000054u); // 80214198
  c->r[0]=rotl(c->r[4],0)&0x7FFFFFFFu; // 8021419C
  W32(c->r[30]+0x00002164u,c->r[0]); // 802141A0
  cmps(c,0,(int32_t)c->r[3],0); // 802141A4
  if (crb(c,2)) { goto L_8021420C; } // 802141A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802141AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802141B0
  c->ctr=c->r[12]; // 802141B4
  if (true) { c->lr=0x802141BCu; dispatch(c,c->ctr); } // 802141B8
  c->lr=0x802141C0u; f_8007A658(c); // 802141BC
  c->r[29]=c->r[3]|c->r[3]; // 802141C0
  c->r[3]=0u+0x00000002u; // 802141C4
  c->lr=0x802141CCu; f_8007A658(c); // 802141C8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 802141CC
  if (!crb(c,1)) { goto L_80214204; } // 802141D0
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 802141D4
  if (crb(c,2)) { goto L_802141FC; } // 802141D8
  W32(c->r[31]+0x00000034u,c->r[1]); // 802141DC
  c->r[3]=c->r[29]|c->r[29]; // 802141E0
  c->lr=0x802141E8u; f_8007614C(c); // 802141E4
  goto L_802141FC; // 802141E8
  c->r[3]=0u+0x00000000u; // 802141EC
  c->r[4]=0u+0x00000000u; // 802141F0
  c->r[5]=0u+0x00000000u; // 802141F4
  c->lr=0x802141FCu; f_8028BC3C(c); // 802141F8
L_802141FC:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 802141FC
  goto L_80214258; // 80214200
L_80214204:;
  c->r[0]=0u+0x00000000u; // 80214204
  W32(c->r[30]+0x00000054u,c->r[0]); // 80214208
L_8021420C:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 8021420C
  c->r[0]=c->r[3]+0x00000001u; // 80214210
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80214214
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80214218
  c->r[0]=c->r[0]^c->r[3]; // 8021421C
  c->r[0]=c->r[0]-c->r[3]; // 80214220
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 80214224
  c->r[0]=c->r[30]+c->r[0]; // 80214228
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 8021422C
  if (crb(c,2)) { goto L_80214254; } // 80214230
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80214234
  c->r[3]=c->r[29]|c->r[29]; // 80214238
  c->lr=0x80214240u; f_8007614C(c); // 8021423C
  goto L_80214254; // 80214240
  c->r[3]=0u+0x00000000u; // 80214244
  c->r[4]=0u+0x00000000u; // 80214248
  c->r[5]=0u+0x00000000u; // 8021424C
  c->lr=0x80214254u; f_8028BC3C(c); // 80214250
L_80214254:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 80214254
L_80214258:;
  c->r[10]=c->r[31]|c->r[31]; // 80214258
  c->r[11]=c->r[10]+0x00000050u; // 8021425C
  c->lr=0x80214264u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80214260
  c->r[10]=R32(c->r[1]+0x00000000u); // 80214264
  c->r[0]=R32(c->r[10]+0x00000004u); // 80214268
  c->r[1]=c->r[10]|c->r[10]; // 8021426C
  c->lr=c->r[0]; // 80214270
  return; // 80214274
}

// fn_80214278
void f_80214278(Ctx* __restrict c) {
  trace_call(0x80214278u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214278
  c->r[0]=c->lr; // 8021427C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80214280
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214284
  c->r[31]=c->r[5]|c->r[5]; // 80214288
  c->r[29]=c->r[3]|c->r[3]; // 8021428C
  c->r[30]=c->r[4]|c->r[4]; // 80214290
  c->r[3]=c->r[31]|c->r[31]; // 80214294
  c->r[12]=R32(c->r[31]+0x00000000u); // 80214298
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021429C
  c->ctr=c->r[12]; // 802142A0
  if (true) { c->lr=0x802142A8u; dispatch(c,c->ctr); } // 802142A4
  c->r[12]=R32(c->r[31]+0x00000000u); // 802142A8
  c->r[3]=c->r[31]|c->r[31]; // 802142AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802142B0
  c->ctr=c->r[12]; // 802142B4
  if (true) { c->lr=0x802142BCu; dispatch(c,c->ctr); } // 802142B8
  cmps(c,0,(int32_t)c->r[3],22); // 802142BC
  if (crb(c,2)) { goto L_80214340; } // 802142C0
  if (!crb(c,0)) { goto L_802142D4; } // 802142C4
  cmps(c,0,(int32_t)c->r[3],3); // 802142C8
  if (crb(c,2)) { goto L_802142E8; } // 802142CC
  goto L_80214330; // 802142D0
L_802142D4:;
  cmps(c,0,(int32_t)c->r[3],1032); // 802142D4
  if (!crb(c,0)) { goto L_80214330; } // 802142D8
  cmps(c,0,(int32_t)c->r[3],1025); // 802142DC
  if (!crb(c,0)) { goto L_80214320; } // 802142E0
  goto L_80214330; // 802142E4
L_802142E8:;
  c->r[12]=R32(c->r[29]+0x00000FF8u); // 802142E8
  c->r[3]=c->r[29]+0x00000FF8u; // 802142EC
  c->r[4]=0u+0x00000001u; // 802142F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802142F4
  c->ctr=c->r[12]; // 802142F8
  if (true) { c->lr=0x80214300u; dispatch(c,c->ctr); } // 802142FC
  c->r[3]=c->r[29]|c->r[29]; // 80214300
  c->r[4]=0u+0x00000003u; // 80214304
  c->lr=0x8021430Cu; f_801E3330(c); // 80214308
  c->r[3]=c->r[29]|c->r[29]; // 8021430C
  c->r[4]=c->r[30]|c->r[30]; // 80214310
  c->r[5]=c->r[31]|c->r[31]; // 80214314
  c->lr=0x8021431Cu; f_800B5B1C(c); // 80214318
  goto L_80214340; // 8021431C
L_80214320:;
  c->r[3]=c->r[29]|c->r[29]; // 80214320
  c->r[4]=c->r[31]|c->r[31]; // 80214324
  c->lr=0x8021432Cu; f_80214104(c); // 80214328
  goto L_80214340; // 8021432C
L_80214330:;
  c->r[3]=c->r[29]|c->r[29]; // 80214330
  c->r[4]=c->r[30]|c->r[30]; // 80214334
  c->r[5]=c->r[31]|c->r[31]; // 80214338
  c->lr=0x80214340u; f_800B5B1C(c); // 8021433C
L_80214340:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214340
  c->r[0]=R32(c->r[1]+0x00000024u); // 80214344
  c->lr=c->r[0]; // 80214348
  c->r[1]=c->r[1]+0x00000020u; // 8021434C
  return; // 80214350
}

// fn_80214354
void f_80214354(Ctx* __restrict c) {
  trace_call(0x80214354u);
  c->r[4]=0u+0x805C0000u; // 80214354
  c->r[3]=c->r[3]+0x00001F18u; // 80214358
  c->r[4]=c->r[4]+0x00005D90u; // 8021435C
  f_801E2514(c); return; // 80214360
}

// fn_80214364
void f_80214364(Ctx* __restrict c) {
  trace_call(0x80214364u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214364
  c->r[0]=c->lr; // 80214368
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8021436C
  W32(c->r[1]+0x000000BCu,c->r[31]); // 80214370
  W32(c->r[1]+0x000000B8u,c->r[30]); // 80214374
  c->r[30]=c->r[3]|c->r[3]; // 80214378
  c->r[0]=R32(c->r[3]+0x00001F5Cu); // 8021437C
  cmpu(c,0,c->r[0],0x00000001u); // 80214380
  if (crb(c,0)) { goto L_80214394; } // 80214384
  c->r[0]=R32(c->r[3]+0x00002164u); // 80214388
  c->r[0]=c->r[0]|0x20000000u; // 8021438C
  W32(c->r[3]+0x00002164u,c->r[0]); // 80214390
L_80214394:;
  c->r[0]=R32(c->r[3]+0x00002158u); // 80214394
  cmps(c,0,(int32_t)c->r[0],0); // 80214398
  if (crb(c,0)) { goto L_802144BC; } // 8021439C
  c->r[0]=R32(c->r[3]+0x00002164u); // 802143A0
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 802143A4
  if (!crb(c,2)) { goto L_802144BC; } // 802143A8
  c->r[0]=R32(c->r[3]+0x00001F5Cu); // 802143AC
  cmpu(c,0,c->r[0],0x00000002u); // 802143B0
  if (crb(c,0)) { goto L_802144BC; } // 802143B4
  {uint32_t ea=c->r[3]+0x00000FF8u; c->r[12]=R32(ea); c->r[3]=ea;} // 802143B8
  c->r[4]=0u+0x00000000u; // 802143BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802143C0
  c->ctr=c->r[12]; // 802143C4
  if (true) { c->lr=0x802143CCu; dispatch(c,c->ctr); } // 802143C8
  c->r[3]=R32(c->r[13]+0xFFFF9710u); // 802143CC
  c->r[4]=R32(c->r[30]+0x00002158u); // 802143D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802143D4
  c->r[12]=R32(c->r[12]+0x00000020u); // 802143D8
  c->ctr=c->r[12]; // 802143DC
  if (true) { c->lr=0x802143E4u; dispatch(c,c->ctr); } // 802143E0
  c->r[31]=c->r[3]|c->r[3]; // 802143E4
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 802143E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802143EC
  c->r[12]=R32(c->r[12]+0x00000094u); // 802143F0
  c->ctr=c->r[12]; // 802143F4
  if (true) { c->lr=0x802143FCu; dispatch(c,c->ctr); } // 802143F8
  c->r[4]=c->r[3]|c->r[3]; // 802143FC
  c->r[3]=c->r[31]+0x000004ACu; // 80214400
  c->lr=0x80214408u; f_802933D8(c); // 80214404
  c->r[3]=c->r[31]+0x000008D0u; // 80214408
  c->r[4]=0u+0x00000000u; // 8021440C
  c->lr=0x80214414u; f_8002B91C(c); // 80214410
  c->r[0]=R32(c->r[31]+0x00002180u); // 80214414
  c->r[4]=c->r[30]+0x000008D0u; // 80214418
  c->r[3]=c->r[1]+0x00000084u; // 8021441C
  c->r[0]=c->r[0]|0x00200000u; // 80214420
  W32(c->r[31]+0x00002180u,c->r[0]); // 80214424
  c->r[12]=R32(c->r[30]+0x000008D0u); // 80214428
  c->r[12]=R32(c->r[12]+0x00000040u); // 8021442C
  c->ctr=c->r[12]; // 80214430
  if (true) { c->lr=0x80214438u; dispatch(c,c->ctr); } // 80214434
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214438
  c->r[3]=c->r[1]+0x0000002Cu; // 8021443C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80214440
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80214444
  c->lr=0x8021444Cu; f_800521A0(c); // 80214448
  c->r[3]=c->r[1]+0x00000038u; // 8021444C
  c->r[4]=c->r[1]+0x0000002Cu; // 80214450
  c->lr=0x80214458u; f_8003F468(c); // 80214454
  c->r[12]=R32(c->r[30]+0x000008D0u); // 80214458
  c->r[4]=c->r[30]+0x000008D0u; // 8021445C
  c->r[3]=c->r[1]+0x00000054u; // 80214460
  c->r[12]=R32(c->r[12]+0x00000040u); // 80214464
  c->ctr=c->r[12]; // 80214468
  if (true) { c->lr=0x80214470u; dispatch(c,c->ctr); } // 8021446C
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80214470
  c->r[3]=c->r[1]+0x00000020u; // 80214474
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80214478
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8021447C
  c->lr=0x80214484u; f_800521A0(c); // 80214480
  c->r[3]=c->r[1]+0x00000044u; // 80214484
  c->r[4]=c->r[1]+0x00000020u; // 80214488
  c->lr=0x80214490u; f_8003F468(c); // 8021448C
  {uint32_t ea=c->r[2]+0xFFFFCB9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80214490
  c->r[3]=c->r[31]|c->r[31]; // 80214494
  c->r[4]=c->r[1]+0x00000038u; // 80214498
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8021449C
  c->r[12]=R32(c->r[31]+0x00000010u); // 802144A0
  c->r[12]=R32(c->r[12]+0x00000334u); // 802144A4
  c->ctr=c->r[12]; // 802144A8
  if (true) { c->lr=0x802144B0u; dispatch(c,c->ctr); } // 802144AC
  c->r[0]=R32(c->r[30]+0x00002164u); // 802144B0
  c->r[0]=c->r[0]|0x40000000u; // 802144B4
  W32(c->r[30]+0x00002164u,c->r[0]); // 802144B8
L_802144BC:;
  c->r[0]=R32(c->r[30]+0x00001F5Cu); // 802144BC
  cmpu(c,0,c->r[0],0x00000002u); // 802144C0
  if (crb(c,0)) { goto L_802144F4; } // 802144C4
  c->r[0]=R32(c->r[30]+0x00002164u); // 802144C8
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 802144CC
  if (!crb(c,2)) { goto L_802144F4; } // 802144D0
  c->r[3]=R32(c->r[30]+0x00002154u); // 802144D4
  c->lr=0x802144DCu; f_80214720(c); // 802144D8
  cmps(c,0,(int32_t)c->r[3],0); // 802144DC
  if (crb(c,2)) { goto L_802144E8; } // 802144E0
  c->lr=0x802144E8u; f_801F293C(c); // 802144E4
L_802144E8:;
  c->r[0]=R32(c->r[30]+0x00002164u); // 802144E8
  c->r[0]=c->r[0]|0x10000000u; // 802144EC
  W32(c->r[30]+0x00002164u,c->r[0]); // 802144F0
L_802144F4:;
  c->r[0]=R32(c->r[30]+0x00001F5Cu); // 802144F4
  cmpu(c,0,c->r[0],0x00000002u); // 802144F8
  if (crb(c,0)) { goto L_8021453C; } // 802144FC
  c->r[3]=R32(c->r[30]+0x00002158u); // 80214500
  c->lr=0x80214508u; f_80214720(c); // 80214504
  cmps(c,0,(int32_t)c->r[3],0); // 80214508
  if (crb(c,2)) { goto L_8021453C; } // 8021450C
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214510
  {uint32_t ea=c->r[2]+0xFFFFCB98u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214514
  fcmp(c,0,c->f[1],c->f[0]); // 80214518
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8021451C
  if (!crb(c,2)) { goto L_8021453C; } // 80214520
  c->r[0]=R32(c->r[30]+0x00002164u); // 80214524
  c->r[3]=c->r[30]|c->r[30]; // 80214528
  c->r[4]=0u+0x00000002u; // 8021452C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 80214530
  W32(c->r[30]+0x00002164u,c->r[0]); // 80214534
  c->lr=0x8021453Cu; f_801E3330(c); // 80214538
L_8021453C:;
  c->r[3]=c->r[30]+0x00001F18u; // 8021453C
  c->lr=0x80214544u; f_801E25C8(c); // 80214540
  cmps(c,0,(int32_t)c->r[3],0); // 80214544
  if (crb(c,2)) { goto L_8021457C; } // 80214548
  c->r[3]=c->r[30]|c->r[30]; // 8021454C
  c->r[4]=0u+0x00000001u; // 80214550
  c->lr=0x80214558u; f_801E3330(c); // 80214554
  c->r[3]=c->r[1]+0x00000010u; // 80214558
  c->lr=0x80214560u; f_800CDFD0(c); // 8021455C
  c->r[5]=R32(c->r[30]+0x00000000u); // 80214560
  c->r[3]=c->r[1]+0x00000008u; // 80214564
  c->r[0]=R32(c->r[30]+0x00000004u); // 80214568
  c->r[4]=c->r[1]+0x00000010u; // 8021456C
  W32(c->r[1]+0x00000008u,c->r[5]); // 80214570
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80214574
  c->lr=0x8021457Cu; f_800CE040(c); // 80214578
L_8021457C:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8021457C
  c->r[31]=R32(c->r[1]+0x000000BCu); // 80214580
  c->r[30]=R32(c->r[1]+0x000000B8u); // 80214584
  c->lr=c->r[0]; // 80214588
  c->r[1]=c->r[1]+0x000000C0u; // 8021458C
  return; // 80214590
}

// fn_80214594
void f_80214594(Ctx* __restrict c) {
  trace_call(0x80214594u);
  {uint32_t ea=c->r[2]+0xFFFFCB98u; c->f[0]=c->ps1[0]=RF32(ea);} // 80214594
  c->r[4]=0u+0x805C0000u; // 80214598
  c->r[4]=c->r[4]+0x00005DB8u; // 8021459C
  {uint32_t ea=c->r[3]+0x00002160u; WF32(ea,c->f[0]);} // 802145A0
  c->r[3]=c->r[3]+0x00001F18u; // 802145A4
  f_801E2514(c); return; // 802145A8
}

// fn_802145AC
void f_802145AC(Ctx* __restrict c) {
  trace_call(0x802145ACu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 802145AC
  c->r[0]=c->lr; // 802145B0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 802145B4
  W32(c->r[1]+0x000000ECu,c->r[31]); // 802145B8
  c->r[31]=c->r[3]|c->r[3]; // 802145BC
  W32(c->r[1]+0x000000E8u,c->r[30]); // 802145C0
  c->lr=0x802145C8u; f_80051FF4(c); // 802145C4
  c->r[30]=0u+0x803E0000u; // 802145C8
  c->r[4]=c->r[3]|c->r[3]; // 802145CC
  c->r[3]=c->r[1]+0x00000098u; // 802145D0
  c->r[6]=0u+0x00000001u; // 802145D4
  c->r[5]=c->r[30]+0x0000291Au; // 802145D8
  c->lr=0x802145E0u; f_8013DB40(c); // 802145DC
  c->r[3]=c->r[1]+0x00000098u; // 802145E0
  c->lr=0x802145E8u; f_80146F08(c); // 802145E4
  cmps(c,0,(int32_t)c->r[3],0); // 802145E8
  if (!crb(c,2)) { goto L_80214654; } // 802145EC
  c->lr=0x802145F4u; f_80051FF4(c); // 802145F0
  c->r[5]=c->r[30]+0x0000291Au; // 802145F4
  c->r[4]=c->r[3]|c->r[3]; // 802145F8
  c->r[3]=c->r[1]+0x00000050u; // 802145FC
  c->r[6]=0u+0x00000001u; // 80214600
  c->r[5]=c->r[5]+0x00000008u; // 80214604
  c->lr=0x8021460Cu; f_8013DB40(c); // 80214608
  c->r[0]=0u+0x00000006u; // 8021460C
  c->r[5]=c->r[1]+0x00000094u; // 80214610
  c->r[4]=c->r[1]+0x0000004Cu; // 80214614
  c->ctr=c->r[0]; // 80214618
L_8021461C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8021461C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80214620
  W32(c->r[5]+0x00000004u,c->r[3]); // 80214624
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80214628
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021461C; } // 8021462C
  c->r[0]=R32(c->r[1]+0x00000084u); // 80214630
  c->r[3]=c->r[1]+0x000000D0u; // 80214634
  c->r[4]=c->r[1]+0x00000088u; // 80214638
  W32(c->r[1]+0x000000CCu,c->r[0]); // 8021463C
  c->lr=0x80214644u; f_80350B88(c); // 80214640
  c->r[3]=R32(c->r[1]+0x00000090u); // 80214644
  c->r[0]=R32(c->r[1]+0x00000094u); // 80214648
  W32(c->r[1]+0x000000D8u,c->r[3]); // 8021464C
  W32(c->r[1]+0x000000DCu,c->r[0]); // 80214650
L_80214654:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80214654
  c->r[4]=c->r[31]+0x000008D0u; // 80214658
  c->r[3]=c->r[1]+0x00000020u; // 8021465C
  c->r[12]=R32(c->r[12]+0x00000040u); // 80214660
  c->ctr=c->r[12]; // 80214664
  if (true) { c->lr=0x8021466Cu; dispatch(c,c->ctr); } // 80214668
  c->r[0]=0u+0x00000006u; // 8021466C
  c->r[5]=c->r[1]+0x00000094u; // 80214670
  c->r[4]=c->r[1]+0x0000001Cu; // 80214674
  c->ctr=c->r[0]; // 80214678
L_8021467C:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8021467C
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80214680
  W32(c->r[5]+0x00000004u,c->r[3]); // 80214684
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80214688
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8021467C; } // 8021468C
  c->r[12]=R32(c->r[1]+0x000000C8u); // 80214690
  c->r[3]=c->r[1]+0x00000098u; // 80214694
  c->r[12]=R32(c->r[12]+0x00000008u); // 80214698
  c->ctr=c->r[12]; // 8021469C
  if (true) { c->lr=0x802146A4u; dispatch(c,c->ctr); } // 802146A0
  c->r[3]=c->r[1]+0x00000098u; // 802146A4
  c->lr=0x802146ACu; f_80146A94(c); // 802146A8
  c->r[3]=R32(c->r[31]+0x00002154u); // 802146AC
  c->lr=0x802146B4u; f_80214720(c); // 802146B0
  cmps(c,0,(int32_t)c->r[3],0); // 802146B4
  if (crb(c,2)) { goto L_802146C0; } // 802146B8
  c->lr=0x802146C0u; f_801F29B8(c); // 802146BC
L_802146C0:;
  c->r[3]=c->r[31]|c->r[31]; // 802146C0
  c->r[4]=0u+0x00000001u; // 802146C4
  c->lr=0x802146CCu; f_801E3330(c); // 802146C8
  c->r[3]=c->r[1]+0x00000010u; // 802146CC
  c->lr=0x802146D4u; f_800CDFD0(c); // 802146D0
  c->r[5]=R32(c->r[31]+0x00000000u); // 802146D4
  c->r[3]=c->r[1]+0x00000008u; // 802146D8
  c->r[0]=R32(c->r[31]+0x00000004u); // 802146DC
  c->r[4]=c->r[1]+0x00000010u; // 802146E0
  W32(c->r[1]+0x00000008u,c->r[5]); // 802146E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802146E8
  c->lr=0x802146F0u; f_800CE040(c); // 802146EC
  c->r[3]=0u+0x804D0000u; // 802146F0
  {uint32_t ea=c->r[31]+0x00002160u; c->f[0]=c->ps1[0]=RF32(ea);} // 802146F4
  c->r[3]=c->r[3]+0x00003318u; // 802146F8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802146FC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80214700
  {uint32_t ea=c->r[31]+0x00002160u; WF32(ea,c->f[0]);} // 80214704
  c->r[31]=R32(c->r[1]+0x000000ECu); // 80214708
  c->r[30]=R32(c->r[1]+0x000000E8u); // 8021470C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80214710
  c->lr=c->r[0]; // 80214714
  c->r[1]=c->r[1]+0x000000F0u; // 80214718
  return; // 8021471C
}

// fn_80214720
void f_80214720(Ctx* __restrict c) {
  trace_call(0x80214720u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214720
  c->r[0]=c->lr; // 80214724
  cmps(c,0,(int32_t)c->r[3],0); // 80214728
  W32(c->r[1]+0x00000034u,c->r[0]); // 8021472C
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214730
  c->r[28]=c->r[3]|c->r[3]; // 80214734
  if (!crb(c,0)) { goto L_80214744; } // 80214738
  c->r[3]=0u+0x00000000u; // 8021473C
  goto L_80214808; // 80214740
L_80214744:;
  c->lr=0x80214748u; f_8003DA30(c); // 80214744
  c->r[31]=R32(c->r[3]+0x00000004u); // 80214748
  c->r[30]=0u+0x00000001u; // 8021474C
  goto L_802147F4; // 80214750
L_80214754:;
  c->r[29]=c->r[31]+0xFFFFFFF8u; // 80214754
  c->r[12]=R32(c->r[29]+0x00000010u); // 80214758
  c->r[3]=c->r[29]|c->r[29]; // 8021475C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80214760
  c->ctr=c->r[12]; // 80214764
  if (true) { c->lr=0x8021476Cu; dispatch(c,c->ctr); } // 80214768
  c->r[0]=c->r[4]+0x40000000u; // 8021476C
  W32(c->r[1]+0x00000014u,c->r[4]); // 80214770
  cmpu(c,0,c->r[0],0x00000000u); // 80214774
  W32(c->r[1]+0x00000010u,c->r[3]); // 80214778
  if (!crb(c,2)) { goto L_80214788; } // 8021477C
  c->r[0]=0u+0x00000001u; // 80214780
  goto L_802147B0; // 80214784
L_80214788:;
  c->r[4]=rotl(c->r[4],0)&0xFFFF0000u; // 80214788
  c->r[3]=0u+0x00000000u; // 8021478C
  goto L_80214798; // 80214790
L_80214794:;
  c->r[3]=c->r[3]+0x00000001u; // 80214794
L_80214798:;
  c->r[5]=((c->r[3])&0x20)?0u:(c->r[30]<<((c->r[3])&31)); // 80214798
  c->r[0]=rotl(c->r[5],0)&0xC0000000u; cr0(c,c->r[0]); // 8021479C
  if (crb(c,2)) { IRQCHK(c); goto L_80214794; } // 802147A0
  c->r[3]=c->r[4]&c->r[5]; // 802147A4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 802147A8
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 802147AC
L_802147B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802147B0
  if (crb(c,2)) { goto L_802147F0; } // 802147B4
  c->r[12]=R32(c->r[29]+0x00000010u); // 802147B8
  c->r[3]=c->r[29]|c->r[29]; // 802147BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802147C0
  c->ctr=c->r[12]; // 802147C4
  if (true) { c->lr=0x802147CCu; dispatch(c,c->ctr); } // 802147C8
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802147CC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802147D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 802147D4
  if (crb(c,2)) { goto L_802147F0; } // 802147D8
  c->r[0]=R32(c->r[29]+0x000004C0u); // 802147DC
  cmpu(c,0,c->r[0],c->r[28]); // 802147E0
  if (!crb(c,2)) { goto L_802147F0; } // 802147E4
  c->r[3]=c->r[29]|c->r[29]; // 802147E8
  goto L_80214808; // 802147EC
L_802147F0:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 802147F0
L_802147F4:;
  c->lr=0x802147F8u; f_8003DA30(c); // 802147F4
  c->r[0]=c->r[3]+0x00000004u; // 802147F8
  cmpu(c,0,c->r[31],c->r[0]); // 802147FC
  if (!crb(c,2)) { IRQCHK(c); goto L_80214754; } // 80214800
  c->r[3]=0u+0x00000000u; // 80214804
L_80214808:;
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214808
  c->r[0]=R32(c->r[1]+0x00000034u); // 8021480C
  c->lr=c->r[0]; // 80214810
  c->r[1]=c->r[1]+0x00000030u; // 80214814
  return; // 80214818
}

// fn_8021481C
void f_8021481C(Ctx* __restrict c) {
  trace_call(0x8021481Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021481C
  c->r[0]=c->lr; // 80214820
  {uint32_t ea=c->r[2]+0xFFFFCB98u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214824
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214828
  c->f[3]=c->f[1]; // 8021482C
  {uint32_t ea=c->r[2]+0xFFFFCB9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80214830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80214834
  c->r[31]=0u+0x80410000u; // 80214838
  c->r[31]=c->r[31]+0xFFFFBC20u; // 8021483C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80214840
  c->r[30]=0u+0x805C0000u; // 80214844
  c->r[30]=c->r[30]+0x00005D78u; // 80214848
  c->r[3]=c->r[30]+0x00000000u; // 8021484C
  c->lr=0x80214854u; f_8003F588(c); // 80214850
  c->r[0]=R32(c->r[13]+0xFFFF8B18u); // 80214854
  c->r[11]=c->r[31]+0x00000000u; // 80214858
  c->r[9]=c->r[30]+0x00000018u; // 8021485C
  c->r[3]=c->r[31]+0x0000000Eu; // 80214860
  c->r[12]=c->r[0]-c->r[11]; // 80214864
  c->r[6]=c->r[31]+0x00000024u; // 80214868
  c->r[31]=c->r[0]-c->r[6]; // 8021486C
  c->r[4]=c->r[30]+0x00000040u; // 80214870
  c->r[10]=sraw(c,c->r[12],16); // 80214874
  c->r[7]=c->r[3]-c->r[9]; // 80214878
  c->r[0]=c->r[13]+0xFFFF8B20u; // 8021487C
  c->r[8]=c->r[11]-c->r[9]; // 80214880
  c->r[5]=sraw(c,c->r[31],16); // 80214884
  c->r[3]=c->r[6]-c->r[4]; // 80214888
  c->r[0]=c->r[0]-c->r[4]; // 8021488C
  W16(c->r[11]+0x00000002u,c->r[10]); // 80214890
  W16(c->r[11]+0x00000004u,c->r[12]); // 80214894
  W32(c->r[9]+0x00000004u,c->r[8]); // 80214898
  W32(c->r[9]+0x0000000Cu,c->r[7]); // 8021489C
  W16(c->r[6]+0x00000006u,c->r[5]); // 802148A0
  W16(c->r[6]+0x00000008u,c->r[31]); // 802148A4
  W32(c->r[4]+0x00000004u,c->r[3]); // 802148A8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802148AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802148B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802148B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802148B8
  c->lr=c->r[0]; // 802148BC
  c->r[1]=c->r[1]+0x00000010u; // 802148C0
  return; // 802148C4
}

// fn_802148C8
void f_802148C8(Ctx* __restrict c) {
  trace_call(0x802148C8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802148C8
  f_80214594(c); return; // 802148CC
}

// fn_802148D0
void f_802148D0(Ctx* __restrict c) {
  trace_call(0x802148D0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802148D0
  f_80214354(c); return; // 802148D4
}

// fn_802148D8
void f_802148D8(Ctx* __restrict c) {
  trace_call(0x802148D8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802148D8
  f_80213FD0(c); return; // 802148DC
}

// fn_802148E0
void f_802148E0(Ctx* __restrict c) {
  trace_call(0x802148E0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802148E0
  f_802145AC(c); return; // 802148E4
}

// fn_802148E8
void f_802148E8(Ctx* __restrict c) {
  trace_call(0x802148E8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802148E8
  f_80214364(c); return; // 802148EC
}

// fn_802148F0
void f_802148F0(Ctx* __restrict c) {
  trace_call(0x802148F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802148F0
  c->r[0]=c->lr; // 802148F4
  c->r[4]=0u+0x00000004u; // 802148F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802148FC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214900
  c->r[31]=0u+0x804B0000u; // 80214904
  c->r[30]=c->r[3]|c->r[3]; // 80214908
  c->r[3]=c->r[31]+0x00005CC8u; // 8021490C
  c->lr=0x80214914u; f_801489B0(c); // 80214910
  c->r[3]=c->r[31]+0x00005CC8u; // 80214914
  c->r[3]=c->r[3]+0x00020000u; // 80214918
  c->r[3]=c->r[3]+0xFFFF8D44u; // 8021491C
  c->lr=0x80214924u; f_80214D1C(c); // 80214920
  c->r[0]=0u+0x00000000u; // 80214924
  W8(c->r[30]+0x00000128u,c->r[0]); // 80214928
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021492C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214930
  c->lr=c->r[0]; // 80214934
  c->r[1]=c->r[1]+0x00000010u; // 80214938
  return; // 8021493C
}

// fn_80214940
void f_80214940(Ctx* __restrict c) {
  trace_call(0x80214940u);
  c->r[5]=0u+0x804B0000u; // 80214940
  c->r[4]=c->r[3]|c->r[3]; // 80214944
  c->r[5]=c->r[5]+0x00005CC8u; // 80214948
  c->r[5]=c->r[5]+0x00020000u; // 8021494C
  c->r[5]=R32(c->r[5]+0xFFFF9D34u); // 80214950
  cmps(c,0,(int32_t)c->r[5],0); // 80214954
  if (crb(c,0)) { goto L_80214968; } // 80214958
  c->r[0]=addc(c,c->r[5],0xFFFFFFFFu,0); // 8021495C
  c->r[0]=addc(c,~c->r[0],c->r[5],c->xer_ca); // 80214960
  W8(c->r[3]+0x00000128u,c->r[0]); // 80214964
L_80214968:;
  c->r[0]=R8(c->r[3]+0x00000128u); // 80214968
  cmps(c,0,(int32_t)c->r[0],0); // 8021496C
  if (crb(c,2)) { goto L_80214980; } // 80214970
  c->r[5]=R32(c->r[3]+0x0000012Cu); // 80214974
  c->r[0]=c->r[5]+0x00000001u; // 80214978
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 8021497C
L_80214980:;
  c->r[3]=0u+0x804B0000u; // 80214980
  c->r[3]=c->r[3]+0x00005CC8u; // 80214984
  c->r[3]=c->r[3]+0x00020000u; // 80214988
  c->r[0]=R8(c->r[3]+0xFFFF8D52u); // 8021498C
  cmps(c,0,(int32_t)c->r[0],0); // 80214990
  if (!crb(c,2)) return; // 80214994
  c->r[3]=0u+0x80440000u; // 80214998
  c->r[3]=c->r[3]+0x000010F8u; // 8021499C
  f_8003D798(c); return; // 802149A0
  return; // 802149A4
}

// fn_802149A8
void f_802149A8(Ctx* __restrict c) {
  trace_call(0x802149A8u);
  return; // 802149A8
}

// fn_802149AC
void f_802149AC(Ctx* __restrict c) {
  trace_call(0x802149ACu);
  c->r[3]=0u+0x804B0000u; // 802149AC
  c->r[4]=0u+0x00000004u; // 802149B0
  c->r[3]=c->r[3]+0x00005CC8u; // 802149B4
  f_80148F4C(c); return; // 802149B8
}

// fn_802149BC
void f_802149BC(Ctx* __restrict c) {
  trace_call(0x802149BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802149BC
  c->r[0]=c->lr; // 802149C0
  cmps(c,0,(int32_t)c->r[3],0); // 802149C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802149C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802149CC
  c->r[30]=c->r[3]|c->r[3]; // 802149D0
  c->r[31]=c->r[4]|c->r[4]; // 802149D4
  if (crb(c,2)) { goto L_802149F4; } // 802149D8
  c->r[4]=0u+0x00000000u; // 802149DC
  c->lr=0x802149E4u; f_801F519C(c); // 802149E0
  cmps(c,0,(int32_t)c->r[31],0); // 802149E4
  if (!crb(c,1)) { goto L_802149F4; } // 802149E8
  c->r[3]=c->r[30]|c->r[30]; // 802149EC
  c->lr=0x802149F4u; f_802896EC(c); // 802149F0
L_802149F4:;
  c->r[3]=c->r[30]|c->r[30]; // 802149F4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802149F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802149FC
  c->lr=c->r[0]; // 80214A00
  c->r[1]=c->r[1]+0x00000010u; // 80214A04
  return; // 80214A08
}

// fn_80214A0C
void f_80214A0C(Ctx* __restrict c) {
  trace_call(0x80214A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214A0C
  c->r[0]=c->lr; // 80214A10
  {uint32_t ea=c->r[2]+0xFFFFCBA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214A18
  c->f[3]=c->f[1]; // 80214A1C
  {uint32_t ea=c->r[2]+0xFFFFCBACu; c->f[2]=c->ps1[2]=RF32(ea);} // 80214A20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80214A24
  c->r[31]=0u+0x805D0000u; // 80214A28
  c->r[31]=c->r[31]+0xFFFFE3F8u; // 80214A2C
  c->r[3]=c->r[31]+0x00000000u; // 80214A30
  c->lr=0x80214A38u; f_8003F588(c); // 80214A34
  c->r[3]=c->r[31]+0x00000018u; // 80214A38
  c->lr=0x80214A40u; f_80214A68(c); // 80214A3C
  c->r[4]=0u+0x80210000u; // 80214A40
  c->r[3]=c->r[31]+0x00000018u; // 80214A44
  c->r[4]=c->r[4]+0x000049BCu; // 80214A48
  c->r[5]=c->r[31]+0x0000000Cu; // 80214A4C
  c->lr=0x80214A54u; f_802895A4(c); // 80214A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214A54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80214A58
  c->lr=c->r[0]; // 80214A5C
  c->r[1]=c->r[1]+0x00000010u; // 80214A60
  return; // 80214A64
}

// fn_80214A68
void f_80214A68(Ctx* __restrict c) {
  trace_call(0x80214A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214A68
  c->r[0]=c->lr; // 80214A6C
  c->r[4]=0u+0x00000007u; // 80214A70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214A74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80214A78
  c->r[31]=c->r[3]|c->r[3]; // 80214A7C
  c->lr=0x80214A84u; f_801F5138(c); // 80214A80
  c->r[4]=0u+0x80410000u; // 80214A84
  c->r[0]=0u+0x00000000u; // 80214A88
  c->r[4]=c->r[4]+0xFFFFC168u; // 80214A8C
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 80214A90
  c->r[3]=c->r[31]|c->r[31]; // 80214A94
  W32(c->r[31]+0x00000124u,c->r[4]); // 80214A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80214A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214AA0
  c->lr=c->r[0]; // 80214AA4
  c->r[1]=c->r[1]+0x00000010u; // 80214AA8
  return; // 80214AAC
}

// fn_80214AB0
void f_80214AB0(Ctx* __restrict c) {
  trace_call(0x80214AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214AB0
  c->r[0]=c->lr; // 80214AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214AB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80214ABC
  c->r[31]=c->r[3]|c->r[3]; // 80214AC0
  c->lr=0x80214AC8u; f_801D7ABC(c); // 80214AC4
  c->r[4]=0u+0x80410000u; // 80214AC8
  c->r[3]=c->r[31]|c->r[31]; // 80214ACC
  c->r[4]=c->r[4]+0xFFFFC1A8u; // 80214AD0
  W32(c->r[31]+0x00000008u,c->r[4]); // 80214AD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80214AD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214ADC
  c->lr=c->r[0]; // 80214AE0
  c->r[1]=c->r[1]+0x00000010u; // 80214AE4
  return; // 80214AE8
}

// dtor_80214AEC
void f_80214AEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214AEC
  c->r[0]=c->lr; // 80214AF0
  cmps(c,0,(int32_t)c->r[3],0); // 80214AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214AF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214AFC
  c->r[30]=c->r[3]|c->r[3]; // 80214B00
  c->r[31]=c->r[4]|c->r[4]; // 80214B04
  if (crb(c,2)) { goto L_80214B38; } // 80214B08
  c->r[4]=0u+0x80410000u; // 80214B0C
  c->r[4]=c->r[4]+0xFFFFC1A8u; // 80214B10
  W32(c->r[3]+0x00000008u,c->r[4]); // 80214B14
  c->lr=0x80214B1Cu; f_801D7C74(c); // 80214B18
  c->r[3]=c->r[30]|c->r[30]; // 80214B1C
  c->r[4]=0u+0x00000000u; // 80214B20
  c->lr=0x80214B28u; f_801D7AE0(c); // 80214B24
  cmps(c,0,(int32_t)c->r[31],0); // 80214B28
  if (!crb(c,1)) { goto L_80214B38; } // 80214B2C
  c->r[3]=c->r[30]|c->r[30]; // 80214B30
  c->lr=0x80214B38u; f_802896EC(c); // 80214B34
L_80214B38:;
  c->r[3]=c->r[30]|c->r[30]; // 80214B38
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214B3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214B40
  c->lr=c->r[0]; // 80214B44
  c->r[1]=c->r[1]+0x00000010u; // 80214B48
  return; // 80214B4C
}

// fn_80214B50
void f_80214B50(Ctx* __restrict c) {
  trace_call(0x80214B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214B50
  c->r[0]=c->lr; // 80214B54
  c->r[4]=0u+0x803E0000u; // 80214B58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214B5C
  c->r[4]=c->r[4]+0x00002930u; // 80214B60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80214B64
  c->r[31]=c->r[3]|c->r[3]; // 80214B68
  c->r[3]=c->r[3]+0x00000018u; // 80214B6C
  c->lr=0x80214B74u; f_802933D8(c); // 80214B70
  c->r[0]=0u+0xFFFFFFFFu; // 80214B74
  W32(c->r[31]+0x00000FF4u,c->r[0]); // 80214B78
  W32(c->r[31]+0x00000FFCu,c->r[0]); // 80214B7C
  W32(c->r[31]+0x00001004u,c->r[0]); // 80214B80
  W32(c->r[31]+0x0000100Cu,c->r[0]); // 80214B84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80214B88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214B8C
  c->lr=c->r[0]; // 80214B90
  c->r[1]=c->r[1]+0x00000010u; // 80214B94
  return; // 80214B98
}

// fn_80214B9C
void f_80214B9C(Ctx* __restrict c) {
  trace_call(0x80214B9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214B9C
  c->r[0]=c->lr; // 80214BA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80214BA4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214BA8
  c->r[30]=0u+0x80460000u; // 80214BAC
  c->r[30]=c->r[30]+0xFFFFD468u; // 80214BB0
  c->r[29]=c->r[3]|c->r[3]; // 80214BB4
  c->r[4]=R32(c->r[3]+0x00000FF4u); // 80214BB8
  c->r[3]=c->r[30]+0x00000014u; // 80214BBC
  c->lr=0x80214BC4u; f_80048610(c); // 80214BC0
  c->r[31]=0u+0xFFFFFFFFu; // 80214BC4
  c->r[4]=R32(c->r[29]+0x00000FFCu); // 80214BC8
  W32(c->r[29]+0x00000FF4u,c->r[31]); // 80214BCC
  c->r[3]=c->r[30]+0x00000014u; // 80214BD0
  c->lr=0x80214BD8u; f_80048610(c); // 80214BD4
  W32(c->r[29]+0x00000FFCu,c->r[31]); // 80214BD8
  c->r[3]=c->r[30]+0x00000014u; // 80214BDC
  c->r[4]=R32(c->r[29]+0x00001004u); // 80214BE0
  c->lr=0x80214BE8u; f_80048610(c); // 80214BE4
  W32(c->r[29]+0x00001004u,c->r[31]); // 80214BE8
  c->r[3]=c->r[30]+0x00000014u; // 80214BEC
  c->r[4]=R32(c->r[29]+0x0000100Cu); // 80214BF0
  c->lr=0x80214BF8u; f_80048610(c); // 80214BF4
  W32(c->r[29]+0x0000100Cu,c->r[31]); // 80214BF8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214BFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80214C00
  c->lr=c->r[0]; // 80214C04
  c->r[1]=c->r[1]+0x00000020u; // 80214C08
  return; // 80214C0C
}

// fn_80214C10
void f_80214C10(Ctx* __restrict c) {
  trace_call(0x80214C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214C10
  c->r[0]=c->lr; // 80214C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214C18
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214C1C
  c->r[31]=0u+0x80460000u; // 80214C20
  c->r[31]=c->r[31]+0xFFFFD468u; // 80214C24
  c->r[30]=c->r[3]|c->r[3]; // 80214C28
  c->r[4]=R32(c->r[3]+0x00000014u); // 80214C2C
  c->r[5]=R32(c->r[3]+0x00000FF4u); // 80214C30
  c->r[3]=c->r[31]+0x00000014u; // 80214C34
  c->lr=0x80214C3Cu; f_8004867C(c); // 80214C38
  c->r[4]=R32(c->r[30]+0x00000014u); // 80214C3C
  c->r[3]=c->r[31]+0x00000014u; // 80214C40
  c->r[5]=R32(c->r[30]+0x00000FFCu); // 80214C44
  c->lr=0x80214C4Cu; f_8004867C(c); // 80214C48
  c->r[4]=R32(c->r[30]+0x00000014u); // 80214C4C
  c->r[3]=c->r[31]+0x00000014u; // 80214C50
  c->r[5]=R32(c->r[30]+0x00001004u); // 80214C54
  c->lr=0x80214C5Cu; f_8004867C(c); // 80214C58
  c->r[4]=R32(c->r[30]+0x00000014u); // 80214C5C
  c->r[3]=c->r[31]+0x00000014u; // 80214C60
  c->r[5]=R32(c->r[30]+0x0000100Cu); // 80214C64
  c->lr=0x80214C6Cu; f_8004867C(c); // 80214C68
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214C6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214C70
  c->lr=c->r[0]; // 80214C74
  c->r[1]=c->r[1]+0x00000010u; // 80214C78
  return; // 80214C7C
}

// fn_80214C80
void f_80214C80(Ctx* __restrict c) {
  trace_call(0x80214C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214C80
  c->r[0]=c->lr; // 80214C84
  c->r[4]=0u+0x00000000u; // 80214C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214C8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80214C90
  c->r[31]=0u+0x80590000u; // 80214C94
  c->r[3]=c->r[31]+0x000063F0u; // 80214C98
  c->lr=0x80214CA0u; f_801F95A4(c); // 80214C9C
  c->r[3]=c->r[31]+0x000063F0u; // 80214CA0
  c->lr=0x80214CA8u; f_801F9524(c); // 80214CA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214CA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80214CAC
  c->lr=c->r[0]; // 80214CB0
  c->r[1]=c->r[1]+0x00000010u; // 80214CB4
  return; // 80214CB8
}

// fn_80214CBC
void f_80214CBC(Ctx* __restrict c) {
  trace_call(0x80214CBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214CBC
  c->r[0]=c->lr; // 80214CC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80214CC4
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214CC8
  c->r[30]=0u+0x803E0000u; // 80214CCC
  c->r[30]=c->r[30]+0x00002930u; // 80214CD0
  c->r[31]=0u+0x80460000u; // 80214CD4
  c->r[29]=c->r[3]|c->r[3]; // 80214CD8
  c->r[5]=c->r[30]+0x00000006u; // 80214CDC
  c->r[4]=R32(c->r[3]+0x00000014u); // 80214CE0
  c->r[3]=c->r[31]+0xFFFFD468u; // 80214CE4
  c->lr=0x80214CECu; f_80047E30(c); // 80214CE8
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214CEC
  c->r[5]=c->r[30]+0x0000000Cu; // 80214CF0
  c->r[3]=c->r[31]+0xFFFFD468u; // 80214CF4
  c->lr=0x80214CFCu; f_80047E30(c); // 80214CF8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214CFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80214D00
  c->lr=c->r[0]; // 80214D04
  c->r[1]=c->r[1]+0x00000020u; // 80214D08
  return; // 80214D0C
}

// fn_80214D10
void f_80214D10(Ctx* __restrict c) {
  trace_call(0x80214D10u);
  c->r[0]=0u+0xFFFFFFFFu; // 80214D10
  W32(c->r[3]+0x00000FF0u,c->r[0]); // 80214D14
  return; // 80214D18
}

// fn_80214D1C
void f_80214D1C(Ctx* __restrict c) {
  trace_call(0x80214D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214D1C
  c->r[0]=c->lr; // 80214D20
  c->r[6]=0u+0x00000001u; // 80214D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80214D28
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214D2C
  c->r[30]=c->r[3]|c->r[3]; // 80214D30
  c->r[31]=0u+0x80460000u; // 80214D34
  c->r[4]=R32(c->r[3]+0x00000014u); // 80214D38
  c->r[3]=c->r[31]+0xFFFFD468u; // 80214D3C
  c->r[5]=R32(c->r[30]+0x00000FF4u); // 80214D40
  c->lr=0x80214D48u; f_8014A860(c); // 80214D44
  c->r[4]=R32(c->r[30]+0x00000014u); // 80214D48
  c->r[3]=c->r[31]+0xFFFFD468u; // 80214D4C
  c->r[5]=R32(c->r[30]+0x00000FF4u); // 80214D50
  c->lr=0x80214D58u; f_8014A924(c); // 80214D54
  c->r[3]=0u+0x80590000u; // 80214D58
  c->r[4]=0u+0x00000000u; // 80214D5C
  c->r[3]=c->r[3]+0x000063F0u; // 80214D60
  c->r[5]=0u+0x00000002u; // 80214D64
  c->lr=0x80214D6Cu; f_801FA9B0(c); // 80214D68
  c->r[4]=0u+0x805E0000u; // 80214D6C
  c->r[3]=0u+0x804B0000u; // 80214D70
  c->r[3]=c->r[3]+0x00005CC8u; // 80214D74
  c->r[0]=0u+0x00000000u; // 80214D78
  c->r[4]=c->r[4]+0xFFFFD790u; // 80214D7C
  c->r[3]=c->r[3]+0x00020000u; // 80214D80
  W8(c->r[4]+0x00000058u,c->r[0]); // 80214D84
  c->r[3]=c->r[3]+0xFFFFD458u; // 80214D88
  W8(c->r[4]+0x00000059u,c->r[0]); // 80214D8C
  c->lr=0x80214D94u; f_80255B40(c); // 80214D90
  c->r[12]=R32(c->r[30]+0x00000008u); // 80214D94
  c->r[3]=c->r[30]|c->r[30]; // 80214D98
  c->r[12]=R32(c->r[12]+0x00000014u); // 80214D9C
  c->ctr=c->r[12]; // 80214DA0
  if (true) { c->lr=0x80214DA8u; dispatch(c,c->ctr); } // 80214DA4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214DA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80214DAC
  c->lr=c->r[0]; // 80214DB0
  c->r[1]=c->r[1]+0x00000010u; // 80214DB4
  return; // 80214DB8
}

// fn_80214DBC
void f_80214DBC(Ctx* __restrict c) {
  trace_call(0x80214DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214DBC
  c->r[0]=c->lr; // 80214DC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80214DC4
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80214DC8
  c->r[29]=c->r[3]|c->r[3]; // 80214DCC
  c->r[30]=0u+0x803E0000u; // 80214DD0
  c->r[3]=c->r[1]+0x00000008u; // 80214DD4
  c->r[30]=c->r[30]+0x00002930u; // 80214DD8
  c->r[5]=c->r[29]+0x00000018u; // 80214DDC
  c->r[4]=c->r[30]+0x00000011u; // 80214DE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214DE4
  c->lr=0x80214DECu; f_80291CC4(c); // 80214DE8
  c->r[31]=0u+0x80460000u; // 80214DEC
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214DF0
  c->r[31]=c->r[31]+0xFFFFD468u; // 80214DF4
  c->r[5]=c->r[30]+0x0000001Fu; // 80214DF8
  c->r[3]=c->r[31]+0x00000014u; // 80214DFC
  c->r[6]=c->r[1]+0x00000008u; // 80214E00
  c->lr=0x80214E08u; f_80048384(c); // 80214E04
  W32(c->r[29]+0x00000FF4u,c->r[3]); // 80214E08
  c->r[5]=c->r[3]|c->r[3]; // 80214E0C
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214E10
  c->r[3]=c->r[31]|c->r[31]; // 80214E14
  c->lr=0x80214E1Cu; f_8014AC10(c); // 80214E18
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214E1C
  c->r[3]=c->r[31]|c->r[31]; // 80214E20
  c->r[5]=R32(c->r[29]+0x00000FF4u); // 80214E24
  c->r[6]=0u+0x00000000u; // 80214E28
  c->lr=0x80214E30u; f_8014A860(c); // 80214E2C
  c->r[3]=c->r[1]+0x00000008u; // 80214E30
  c->r[4]=c->r[30]+0x00000024u; // 80214E34
  c->r[5]=c->r[29]+0x00000018u; // 80214E38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214E3C
  c->lr=0x80214E44u; f_80291CC4(c); // 80214E40
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214E44
  c->r[5]=c->r[30]+0x0000001Fu; // 80214E48
  c->r[3]=c->r[31]+0x00000014u; // 80214E4C
  c->r[6]=c->r[1]+0x00000008u; // 80214E50
  c->lr=0x80214E58u; f_80048384(c); // 80214E54
  W32(c->r[29]+0x00000FFCu,c->r[3]); // 80214E58
  c->r[5]=c->r[3]|c->r[3]; // 80214E5C
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214E60
  c->r[3]=c->r[31]|c->r[31]; // 80214E64
  c->lr=0x80214E6Cu; f_8014AC10(c); // 80214E68
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214E6C
  c->r[3]=c->r[31]|c->r[31]; // 80214E70
  c->r[5]=R32(c->r[29]+0x00000FFCu); // 80214E74
  c->r[6]=0u+0x00000000u; // 80214E78
  c->lr=0x80214E80u; f_8014A860(c); // 80214E7C
  c->r[3]=c->r[1]+0x00000008u; // 80214E80
  c->r[4]=c->r[30]+0x00000032u; // 80214E84
  c->r[5]=c->r[29]+0x00000018u; // 80214E88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214E8C
  c->lr=0x80214E94u; f_80291CC4(c); // 80214E90
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214E94
  c->r[5]=c->r[30]+0x00000045u; // 80214E98
  c->r[3]=c->r[31]+0x00000014u; // 80214E9C
  c->r[6]=c->r[1]+0x00000008u; // 80214EA0
  c->lr=0x80214EA8u; f_80048384(c); // 80214EA4
  W32(c->r[29]+0x00001004u,c->r[3]); // 80214EA8
  c->r[5]=c->r[3]|c->r[3]; // 80214EAC
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214EB0
  c->r[3]=c->r[31]|c->r[31]; // 80214EB4
  c->lr=0x80214EBCu; f_8014AC10(c); // 80214EB8
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214EBC
  c->r[3]=c->r[31]|c->r[31]; // 80214EC0
  c->r[5]=R32(c->r[29]+0x00001004u); // 80214EC4
  c->r[6]=0u+0x00000000u; // 80214EC8
  c->lr=0x80214ED0u; f_8014A860(c); // 80214ECC
  c->r[3]=c->r[1]+0x00000008u; // 80214ED0
  c->r[4]=c->r[30]+0x0000004Cu; // 80214ED4
  c->r[5]=c->r[29]+0x00000018u; // 80214ED8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80214EDC
  c->lr=0x80214EE4u; f_80291CC4(c); // 80214EE0
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214EE4
  c->r[5]=c->r[30]+0x00000045u; // 80214EE8
  c->r[3]=c->r[31]+0x00000014u; // 80214EEC
  c->r[6]=c->r[1]+0x00000008u; // 80214EF0
  c->lr=0x80214EF8u; f_80048384(c); // 80214EF4
  W32(c->r[29]+0x0000100Cu,c->r[3]); // 80214EF8
  c->r[5]=c->r[3]|c->r[3]; // 80214EFC
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214F00
  c->r[3]=c->r[31]|c->r[31]; // 80214F04
  c->lr=0x80214F0Cu; f_8014AC10(c); // 80214F08
  c->r[4]=R32(c->r[29]+0x00000014u); // 80214F0C
  c->r[3]=c->r[31]|c->r[31]; // 80214F10
  c->r[5]=R32(c->r[29]+0x0000100Cu); // 80214F14
  c->r[6]=0u+0x00000000u; // 80214F18
  c->lr=0x80214F20u; f_8014A860(c); // 80214F1C
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80214F20
  c->r[0]=R32(c->r[1]+0x00000034u); // 80214F24
  c->lr=c->r[0]; // 80214F28
  c->r[1]=c->r[1]+0x00000030u; // 80214F2C
  return; // 80214F30
}

// fn_80214F34
void f_80214F34(Ctx* __restrict c) {
  trace_call(0x80214F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80214F34
  c->r[0]=c->lr; // 80214F38
  W32(c->r[1]+0x00000024u,c->r[0]); // 80214F3C
  c->r[11]=c->r[1]+0x00000020u; // 80214F40
  c->lr=0x80214F48u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80214F44
  c->r[31]=0u+0x00000000u; // 80214F48
  c->r[30]=0u+0x00000001u; // 80214F4C
  W8(c->r[3]+0x00000010u,c->r[31]); // 80214F50
  c->r[28]=c->r[3]|c->r[3]; // 80214F54
  c->r[29]=c->r[4]|c->r[4]; // 80214F58
  W8(c->r[3]+0x00000011u,c->r[30]); // 80214F5C
  c->lr=0x80214F64u; f_801D9A6C(c); // 80214F60
  cmps(c,0,(int32_t)c->r[29],0); // 80214F64
  if (!crb(c,2)) { goto L_80214FBC; } // 80214F68
  c->r[3]=0u+0x803E0000u; // 80214F6C
  W32(c->r[28]+0x00000FF0u,c->r[30]); // 80214F70
  c->r[3]=c->r[3]+0x00002930u; // 80214F74
  {uint32_t ea=c->r[2]+0xFFFFCBB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214F78
  c->r[4]=0u+0x00000000u; // 80214F7C
  c->r[5]=0u+0xFFFFFFFFu; // 80214F80
  c->r[3]=c->r[3]+0x0000005Eu; // 80214F84
  c->lr=0x80214F8Cu; f_80068DD8(c); // 80214F88
  c->r[31]=0u+0x80460000u; // 80214F8C
  c->r[4]=R32(c->r[28]+0x00000014u); // 80214F90
  c->r[5]=R32(c->r[28]+0x00001004u); // 80214F94
  c->r[3]=c->r[31]+0xFFFFD468u; // 80214F98
  c->r[6]=0u+0x00000001u; // 80214F9C
  c->lr=0x80214FA4u; f_8014A860(c); // 80214FA0
  c->r[4]=R32(c->r[28]+0x00000014u); // 80214FA4
  c->r[3]=c->r[31]+0xFFFFD468u; // 80214FA8
  c->r[5]=R32(c->r[28]+0x00001004u); // 80214FAC
  c->lr=0x80214FB4u; f_8014A924(c); // 80214FB0
  W8(c->r[28]+0x00001008u,c->r[30]); // 80214FB4
  goto L_80215010; // 80214FB8
L_80214FBC:;
  cmpu(c,0,c->r[29],0x00000001u); // 80214FBC
  if (!crb(c,2)) { goto L_80215010; } // 80214FC0
  c->r[3]=0u+0x803E0000u; // 80214FC4
  W32(c->r[28]+0x00000FF0u,c->r[31]); // 80214FC8
  c->r[3]=c->r[3]+0x00002930u; // 80214FCC
  {uint32_t ea=c->r[2]+0xFFFFCBB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80214FD0
  c->r[4]=0u+0x00000000u; // 80214FD4
  c->r[5]=0u+0xFFFFFFFFu; // 80214FD8
  c->r[3]=c->r[3]+0x00000065u; // 80214FDC
  c->lr=0x80214FE4u; f_80068DD8(c); // 80214FE0
  c->r[31]=0u+0x80460000u; // 80214FE4
  c->r[4]=R32(c->r[28]+0x00000014u); // 80214FE8
  c->r[5]=R32(c->r[28]+0x0000100Cu); // 80214FEC
  c->r[3]=c->r[31]+0xFFFFD468u; // 80214FF0
  c->r[6]=0u+0x00000001u; // 80214FF4
  c->lr=0x80214FFCu; f_8014A860(c); // 80214FF8
  c->r[4]=R32(c->r[28]+0x00000014u); // 80214FFC
  c->r[3]=c->r[31]+0xFFFFD468u; // 80215000
  c->r[5]=R32(c->r[28]+0x0000100Cu); // 80215004
  c->lr=0x8021500Cu; f_8014A924(c); // 80215008
  W8(c->r[28]+0x00001010u,c->r[30]); // 8021500C
L_80215010:;
  c->r[11]=c->r[1]+0x00000020u; // 80215010
  c->lr=0x80215018u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80215014
  c->r[0]=R32(c->r[1]+0x00000024u); // 80215018
  c->lr=c->r[0]; // 8021501C
  c->r[1]=c->r[1]+0x00000020u; // 80215020
  return; // 80215024
}

// fn_80215028
void f_80215028(Ctx* __restrict c) {
  trace_call(0x80215028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215028
  c->r[0]=c->lr; // 8021502C
  c->r[6]=0u+0x00000001u; // 80215030
  W32(c->r[1]+0x00000014u,c->r[0]); // 80215034
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80215038
  c->r[30]=c->r[3]|c->r[3]; // 8021503C
  c->r[31]=0u+0x80460000u; // 80215040
  c->r[4]=R32(c->r[3]+0x00000014u); // 80215044
  c->r[3]=c->r[31]+0xFFFFD468u; // 80215048
  c->r[5]=R32(c->r[30]+0x00000FFCu); // 8021504C
  c->lr=0x80215054u; f_8014A860(c); // 80215050
  c->r[4]=R32(c->r[30]+0x00000014u); // 80215054
  c->r[3]=c->r[31]+0xFFFFD468u; // 80215058
  c->r[5]=R32(c->r[30]+0x00000FFCu); // 8021505C
  c->lr=0x80215064u; f_8014A924(c); // 80215060
  c->r[3]=0u+0x804B0000u; // 80215064
  c->r[3]=c->r[3]+0x00005CC8u; // 80215068
  c->r[3]=c->r[3]+0x00020000u; // 8021506C
  c->r[3]=c->r[3]+0xFFFFD458u; // 80215070
  c->lr=0x80215078u; f_80255BC4(c); // 80215074
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80215078
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021507C
  c->lr=c->r[0]; // 80215080
  c->r[1]=c->r[1]+0x00000010u; // 80215084
  return; // 80215088
}

// fn_8021508C
void f_8021508C(Ctx* __restrict c) {
  trace_call(0x8021508Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021508C
  c->r[0]=c->lr; // 80215090
  c->r[5]=0u+0x00000000u; // 80215094
  c->r[6]=0u+0x00000001u; // 80215098
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021509C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802150A0
  c->r[30]=c->r[3]|c->r[3]; // 802150A4
  c->r[3]=0u+0x80590000u; // 802150A8
  c->r[3]=c->r[3]+0x000063F0u; // 802150AC
  c->r[4]=R32(c->r[30]+0x00000F74u); // 802150B0
  c->lr=0x802150B8u; f_801FA320(c); // 802150B4
  c->r[4]=R32(c->r[30]+0x00000014u); // 802150B8
  c->r[3]=0u+0x803E0000u; // 802150BC
  c->r[3]=c->r[3]+0x00002930u; // 802150C0
  cmps(c,0,(int32_t)c->r[4],0); // 802150C4
  c->r[5]=c->r[3]+0x00000045u; // 802150C8
  if (crb(c,0)) { goto L_802150F0; } // 802150CC
  c->r[3]=0u+0x80460000u; // 802150D0
  c->r[3]=c->r[3]+0xFFFFD468u; // 802150D4
  c->lr=0x802150DCu; f_800482D4(c); // 802150D8
  cmps(c,0,(int32_t)c->r[3],0); // 802150DC
  if (crb(c,2)) { goto L_802150F0; } // 802150E0
  c->r[0]=R8(c->r[3]+0x000000B7u); // 802150E4
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 802150E8
  W8(c->r[3]+0x000000B7u,c->r[0]); // 802150EC
L_802150F0:;
  c->r[0]=0u+0x00000000u; // 802150F0
  c->r[31]=0u+0x80590000u; // 802150F4
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 802150F8
  c->r[3]=c->r[31]+0x000063F0u; // 802150FC
  c->r[4]=0u+0x00000000u; // 80215100
  c->r[5]=0u+0x00000001u; // 80215104
  c->lr=0x8021510Cu; f_801FA9B0(c); // 80215108
  c->r[30]=0u+0x00000000u; // 8021510C
L_80215110:;
  c->r[4]=c->r[30]|c->r[30]; // 80215110
  c->r[3]=c->r[31]+0x000063F0u; // 80215114
  c->r[5]=0u+0x00000000u; // 80215118
  c->lr=0x80215120u; f_801F993C(c); // 8021511C
  c->r[30]=c->r[30]+0x00000001u; // 80215120
  cmps(c,0,(int32_t)c->r[30],2); // 80215124
  if (crb(c,0)) { IRQCHK(c); goto L_80215110; } // 80215128
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021512C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80215130
  c->lr=c->r[0]; // 80215134
  c->r[1]=c->r[1]+0x00000010u; // 80215138
  return; // 8021513C
}

// fn_80215140
void f_80215140(Ctx* __restrict c) {
  trace_call(0x80215140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215140
  c->r[0]=c->lr; // 80215144
  W32(c->r[1]+0x00000014u,c->r[0]); // 80215148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021514C
  c->r[31]=c->r[3]|c->r[3]; // 80215150
  c->r[0]=R8(c->r[3]+0x00001008u); // 80215154
  cmps(c,0,(int32_t)c->r[0],0); // 80215158
  if (crb(c,2)) { goto L_80215198; } // 8021515C
  c->lr=0x80215164u; f_802151F4(c); // 80215160
  c->r[3]=0u+0x80460000u; // 80215164
  c->r[4]=R32(c->r[31]+0x00001004u); // 80215168
  c->r[3]=c->r[3]+0xFFFFD468u; // 8021516C
  c->lr=0x80215174u; f_80155E44(c); // 80215170
  cmps(c,0,(int32_t)c->r[3],0); // 80215174
  if (crb(c,2)) { goto L_80215198; } // 80215178
  c->r[0]=0u+0x00000000u; // 8021517C
  c->r[3]=c->r[31]|c->r[31]; // 80215180
  W8(c->r[31]+0x00001008u,c->r[0]); // 80215184
  c->r[12]=R32(c->r[31]+0x00000008u); // 80215188
  c->r[12]=R32(c->r[12]+0x00000060u); // 8021518C
  c->ctr=c->r[12]; // 80215190
  if (true) { c->lr=0x80215198u; dispatch(c,c->ctr); } // 80215194
L_80215198:;
  c->r[0]=R8(c->r[31]+0x00001010u); // 80215198
  cmps(c,0,(int32_t)c->r[0],0); // 8021519C
  if (crb(c,2)) { goto L_802151E0; } // 802151A0
  c->r[3]=c->r[31]|c->r[31]; // 802151A4
  c->lr=0x802151ACu; f_802151F4(c); // 802151A8
  c->r[3]=0u+0x80460000u; // 802151AC
  c->r[4]=R32(c->r[31]+0x0000100Cu); // 802151B0
  c->r[3]=c->r[3]+0xFFFFD468u; // 802151B4
  c->lr=0x802151BCu; f_80155E44(c); // 802151B8
  cmps(c,0,(int32_t)c->r[3],0); // 802151BC
  if (crb(c,2)) { goto L_802151E0; } // 802151C0
  c->r[0]=0u+0x00000000u; // 802151C4
  c->r[3]=c->r[31]|c->r[31]; // 802151C8
  W8(c->r[31]+0x00001010u,c->r[0]); // 802151CC
  c->r[12]=R32(c->r[31]+0x00000008u); // 802151D0
  c->r[12]=R32(c->r[12]+0x00000060u); // 802151D4
  c->ctr=c->r[12]; // 802151D8
  if (true) { c->lr=0x802151E0u; dispatch(c,c->ctr); } // 802151DC
L_802151E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802151E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802151E4
  c->lr=c->r[0]; // 802151E8
  c->r[1]=c->r[1]+0x00000010u; // 802151EC
  return; // 802151F0
}

// fn_802151F4
void f_802151F4(Ctx* __restrict c) {
  trace_call(0x802151F4u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802151F4
  c->r[0]=c->lr; // 802151F8
  W32(c->r[1]+0x00000074u,c->r[0]); // 802151FC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 80215200
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 80215204
  c->r[5]=0u+0x803E0000u; // 80215208
  c->r[5]=c->r[5]+0x00002930u; // 8021520C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80215210
  c->r[31]=c->r[3]|c->r[3]; // 80215214
  c->r[5]=c->r[5]+0x0000006Cu; // 80215218
  c->r[4]=R32(c->r[3]+0x00000014u); // 8021521C
  cmps(c,0,(int32_t)c->r[4],0); // 80215220
  if (!crb(c,0)) { goto L_80215248; } // 80215224
  {uint32_t ea=c->r[2]+0xFFFFCBB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215228
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8021522C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80215230
  c->r[3]=R32(c->r[1]+0x00000020u); // 80215234
  c->r[0]=R32(c->r[1]+0x00000024u); // 80215238
  W32(c->r[1]+0x00000008u,c->r[3]); // 8021523C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80215240
  goto L_802152D8; // 80215244
L_80215248:;
  c->r[3]=0u+0x80460000u; // 80215248
  c->r[3]=c->r[3]+0xFFFFD468u; // 8021524C
  c->r[3]=R32(c->r[3]+0x00000028u); // 80215250
  c->lr=0x80215258u; f_800482D4(c); // 80215254
  cmps(c,0,(int32_t)c->r[3],0); // 80215258
  if (!crb(c,2)) { goto L_80215280; } // 8021525C
  {uint32_t ea=c->r[2]+0xFFFFCBB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215260
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80215264
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80215268
  c->r[3]=R32(c->r[1]+0x00000018u); // 8021526C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80215270
  W32(c->r[1]+0x00000008u,c->r[3]); // 80215274
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80215278
  goto L_802152D8; // 8021527C
L_80215280:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80215280
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80215284
  c->ctr=c->r[12]; // 80215288
  if (true) { c->lr=0x80215290u; dispatch(c,c->ctr); } // 8021528C
  cmps(c,0,(int32_t)c->r[3],0); // 80215290
  if (!crb(c,2)) { goto L_802152B8; } // 80215294
  {uint32_t ea=c->r[2]+0xFFFFCBB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215298
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8021529C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802152A0
  c->r[3]=R32(c->r[1]+0x00000010u); // 802152A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802152A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802152AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802152B0
  goto L_802152D8; // 802152B4
L_802152B8:;
  c->lr=0x802152BCu; f_80390C44(c); // 802152B8
  c->r[4]=c->r[3]+0x00000014u; // 802152BC
  c->r[3]=c->r[1]+0x00000044u; // 802152C0
  c->lr=0x802152C8u; f_8014AADC(c); // 802152C4
  c->r[3]=R32(c->r[1]+0x00000044u); // 802152C8
  c->r[0]=R32(c->r[1]+0x00000048u); // 802152CC
  W32(c->r[1]+0x00000008u,c->r[3]); // 802152D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802152D4
L_802152D8:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 802152D8
  c->r[3]=0u+0x803E0000u; // 802152DC
  c->r[4]=R32(c->r[31]+0x00000014u); // 802152E0
  c->r[3]=c->r[3]+0x00002930u; // 802152E4
  W32(c->r[1]+0x00000028u,c->r[0]); // 802152E8
  c->r[5]=c->r[3]+0x00000079u; // 802152EC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802152F0
  cmps(c,0,(int32_t)c->r[4],0); // 802152F4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=c->ps1[31]=RF32(ea);} // 802152F8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802152FC
  if (crb(c,0)) { goto L_8021537C; } // 80215300
  c->r[3]=0u+0x80460000u; // 80215304
  c->r[3]=c->r[3]+0xFFFFD468u; // 80215308
  c->r[3]=R32(c->r[3]+0x00000028u); // 8021530C
  c->lr=0x80215314u; f_800482D4(c); // 80215310
  cmps(c,0,(int32_t)c->r[3],0); // 80215314
  if (crb(c,2)) { goto L_8021537C; } // 80215318
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021531C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80215320
  c->ctr=c->r[12]; // 80215324
  if (true) { c->lr=0x8021532Cu; dispatch(c,c->ctr); } // 80215328
  cmps(c,0,(int32_t)c->r[3],0); // 8021532C
  c->r[31]=c->r[3]|c->r[3]; // 80215330
  if (crb(c,2)) { goto L_8021537C; } // 80215334
  c->lr=0x8021533Cu; f_80390C44(c); // 80215338
  c->r[4]=c->r[3]+0x00000014u; // 8021533C
  c->r[3]=c->r[1]+0x00000030u; // 80215340
  c->lr=0x80215348u; f_8014AADC(c); // 80215344
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[31]);} // 80215348
  c->r[3]=c->r[31]|c->r[31]; // 8021534C
  c->lr=0x80215354u; f_80390CA0(c); // 80215350
  c->r[4]=R32(c->r[1]+0x00000030u); // 80215354
  c->r[0]=R32(c->r[1]+0x00000034u); // 80215358
  W32(c->r[3]+0x00000014u,c->r[4]); // 8021535C
  W32(c->r[3]+0x00000018u,c->r[0]); // 80215360
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215364
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80215368
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 8021536C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80215370
  W32(c->r[3]+0x00000020u,c->r[4]); // 80215374
  W32(c->r[3]+0x00000024u,c->r[0]); // 80215378
L_8021537C:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8021537C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80215380
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80215384
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80215388
  c->lr=c->r[0]; // 8021538C
  c->r[1]=c->r[1]+0x00000070u; // 80215390
  return; // 80215394
}

// fn_80215398
void f_80215398(Ctx* __restrict c) {
  trace_call(0x80215398u);
  {uint32_t ea=c->r[2]+0xFFFFCBB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215398
  c->r[3]=0u+0x805D0000u; // 8021539C
  {uint32_t ea=c->r[2]+0xFFFFCBB0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802153A0
  c->r[3]=c->r[3]+0xFFFFE540u; // 802153A4
  c->f[3]=c->f[1]; // 802153A8
  f_8003F588(c); return; // 802153AC
}

// fn_802153B0
void f_802153B0(Ctx* __restrict c) {
  trace_call(0x802153B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802153B0
  c->r[0]=c->lr; // 802153B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802153B8
  c->lr=0x802153C0u; f_800A4144(c); // 802153BC
  c->lr=0x802153C4u; f_800F4DB0(c); // 802153C0
  c->lr=0x802153C8u; f_801F8DF4(c); // 802153C4
  c->lr=0x802153CCu; f_80132D80(c); // 802153C8
  c->lr=0x802153D0u; f_80061A54(c); // 802153CC
  c->lr=0x802153D4u; f_800A8D28(c); // 802153D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802153D4
  c->lr=c->r[0]; // 802153D8
  c->r[1]=c->r[1]+0x00000010u; // 802153DC
  return; // 802153E0
}

// fn_802153E4
void f_802153E4(Ctx* __restrict c) {
  trace_call(0x802153E4u);
  c->r[4]=0u+0x805D0000u; // 802153E4
  {uint32_t ea=c->r[2]+0xFFFFCBB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802153E8
  c->r[3]=c->r[4]+0xFFFFE550u; // 802153EC
  {uint32_t ea=c->r[2]+0xFFFFCBBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802153F0
  {uint32_t ea=c->r[4]+0xFFFFE550u; WF32(ea,c->f[1]);} // 802153F4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802153F8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 802153FC
  return; // 80215400
}

// fn_80215404
void f_80215404(Ctx* __restrict c) {
  trace_call(0x80215404u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215404
  c->r[0]=c->lr; // 80215408
  W32(c->r[1]+0x00000064u,c->r[0]); // 8021540C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80215410
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80215414
  c->r[11]=c->r[1]+0x00000050u; // 80215418
  c->lr=0x80215420u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021541C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80215420
  c->r[30]=c->r[3]|c->r[3]; // 80215424
  cmps(c,0,(int32_t)c->r[0],0); // 80215428
  if (crb(c,2)) { goto L_802155AC; } // 8021542C
  c->r[3]=c->r[1]+0x0000001Cu; // 80215430
  c->lr=0x80215438u; f_801732D0(c); // 80215434
  c->lr=0x8021543Cu; f_8003DA30(c); // 80215438
  c->r[28]=R32(c->r[3]+0x00000004u); // 8021543C
  c->r[27]=0u+0x00000000u; // 80215440
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80215444
  c->r[26]=0u+0x00000001u; // 80215448
  goto L_8021559C; // 8021544C
L_80215450:;
  c->r[31]=c->r[28]+0xFFFFFFF8u; // 80215450
  c->r[12]=R32(c->r[31]+0x00000010u); // 80215454
  c->r[3]=c->r[31]|c->r[31]; // 80215458
  c->r[12]=R32(c->r[12]+0x00000008u); // 8021545C
  c->ctr=c->r[12]; // 80215460
  if (true) { c->lr=0x80215468u; dispatch(c,c->ctr); } // 80215464
  c->r[0]=c->r[4]+0x20000000u; // 80215468
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8021546C
  cmpu(c,0,c->r[0],0x00000002u); // 80215470
  W32(c->r[1]+0x00000008u,c->r[3]); // 80215474
  if (!crb(c,2)) { goto L_80215484; } // 80215478
  c->r[0]=0u+0x00000001u; // 8021547C
  goto L_802154B0; // 80215480
L_80215484:;
  c->r[4]=rotl(c->r[4],0)&0xFFFF0000u; // 80215484
  c->r[3]=0u+0x00000000u; // 80215488
  goto L_80215494; // 8021548C
L_80215490:;
  c->r[3]=c->r[3]+0x00000001u; // 80215490
L_80215494:;
  c->r[5]=((c->r[3])&0x20)?0u:(c->r[26]<<((c->r[3])&31)); // 80215494
  c->r[0]=rotl(c->r[5],0)&0xE0000000u; // 80215498
  c->r[0]=(rotl(c->r[5],0)&0x00000002u)|(c->r[0]&~0x00000002u); cr0(c,c->r[0]); // 8021549C
  if (crb(c,2)) { IRQCHK(c); goto L_80215490; } // 802154A0
  c->r[3]=c->r[4]&c->r[5]; // 802154A4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 802154A8
  c->r[0]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 802154AC
L_802154B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802154B0
  if (crb(c,2)) { goto L_80215598; } // 802154B4
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802154B8
  fcmp(c,0,c->f[0],c->f[31]); // 802154BC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802154C0
  if (!crb(c,2)) { goto L_80215598; } // 802154C4
  goto L_80215528; // 802154C8
L_802154CC:;
  c->r[3]=c->r[30]|c->r[30]; // 802154CC
  c->r[4]=c->r[1]+0x0000001Cu; // 802154D0
  c->lr=0x802154D8u; f_802155CC(c); // 802154D4
  c->r[25]=R32(c->r[31]+0x000004A8u); // 802154D8
  c->r[24]=0u+0x00000000u; // 802154DC
  c->r[29]=0u+0x00000000u; // 802154E0
L_802154E4:;
  c->r[23]=c->r[30]+c->r[29]; // 802154E4
  c->r[0]=R8(c->r[23]+0x00000150u); // 802154E8
  cmps(c,0,(int32_t)c->r[0],0); // 802154EC
  if (crb(c,2)) { goto L_80215518; } // 802154F0
  c->r[3]=c->r[23]+0x00000154u; // 802154F4
  c->r[4]=0u+0x0000000Au; // 802154F8
  c->lr=0x80215500u; f_801B9640(c); // 802154FC
  c->r[4]=c->r[25]|c->r[25]; // 80215500
  c->lr=0x80215508u; f_80293554(c); // 80215504
  cmps(c,0,(int32_t)c->r[3],0); // 80215508
  if (!crb(c,2)) { goto L_80215518; } // 8021550C
  W8(c->r[23]+0x00000150u,c->r[27]); // 80215510
  goto L_80215528; // 80215514
L_80215518:;
  c->r[24]=c->r[24]+0x00000001u; // 80215518
  c->r[29]=c->r[29]+0x00000010u; // 8021551C
  cmpu(c,0,c->r[24],0x00000020u); // 80215520
  if (crb(c,0)) { IRQCHK(c); goto L_802154E4; } // 80215524
L_80215528:;
  c->r[24]=R32(c->r[31]+0x000004A8u); // 80215528
  c->r[25]=0u+0x00000000u; // 8021552C
  c->r[29]=0u+0x00000000u; // 80215530
L_80215534:;
  c->r[3]=c->r[30]+c->r[29]; // 80215534
  c->r[0]=R8(c->r[3]+0x00000150u); // 80215538
  cmps(c,0,(int32_t)c->r[0],0); // 8021553C
  if (crb(c,2)) { goto L_8021557C; } // 80215540
  c->r[23]=c->r[3]+0x00000154u; // 80215544
  c->r[4]=0u+0x0000000Au; // 80215548
  c->r[3]=c->r[23]|c->r[23]; // 8021554C
  c->lr=0x80215554u; f_801B9640(c); // 80215550
  c->r[4]=c->r[24]|c->r[24]; // 80215554
  c->lr=0x8021555Cu; f_80293554(c); // 80215558
  cmps(c,0,(int32_t)c->r[3],0); // 8021555C
  if (!crb(c,2)) { goto L_8021557C; } // 80215560
  c->r[5]=c->r[23]|c->r[23]; // 80215564
  c->r[3]=c->r[1]+0x00000010u; // 80215568
  c->r[4]=c->r[1]+0x0000001Cu; // 8021556C
  c->lr=0x80215574u; f_801732E4(c); // 80215570
  c->r[0]=0u+0x00000001u; // 80215574
  goto L_80215590; // 80215578
L_8021557C:;
  c->r[25]=c->r[25]+0x00000001u; // 8021557C
  c->r[29]=c->r[29]+0x00000010u; // 80215580
  cmpu(c,0,c->r[25],0x00000020u); // 80215584
  if (crb(c,0)) { IRQCHK(c); goto L_80215534; } // 80215588
  c->r[0]=0u+0x00000000u; // 8021558C
L_80215590:;
  cmps(c,0,(int32_t)c->r[0],0); // 80215590
  if (!crb(c,2)) { IRQCHK(c); goto L_802154CC; } // 80215594
L_80215598:;
  c->r[28]=R32(c->r[28]+0x00000000u); // 80215598
L_8021559C:;
  c->lr=0x802155A0u; f_8003DA30(c); // 8021559C
  c->r[0]=c->r[3]+0x00000004u; // 802155A0
  cmpu(c,0,c->r[28],c->r[0]); // 802155A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80215450; } // 802155A8
L_802155AC:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 802155AC
  c->r[11]=c->r[1]+0x00000050u; // 802155B0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 802155B4
  c->lr=0x802155BCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802155B8
  c->r[0]=R32(c->r[1]+0x00000064u); // 802155BC
  c->lr=c->r[0]; // 802155C0
  c->r[1]=c->r[1]+0x00000060u; // 802155C4
  return; // 802155C8
}

// fn_802155CC
void f_802155CC(Ctx* __restrict c) {
  trace_call(0x802155CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802155CC
  c->r[0]=c->lr; // 802155D0
  W32(c->r[1]+0x00000074u,c->r[0]); // 802155D4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802155D8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802155DC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802155E0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802155E4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802155E8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802155EC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 802155F0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 802155F4
  c->r[11]=c->r[1]+0x00000030u; // 802155F8
  c->lr=0x80215600u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802155FC
  c->r[25]=c->r[4]|c->r[4]; // 80215600
  c->r[24]=c->r[3]|c->r[3]; // 80215604
  c->r[3]=c->r[25]|c->r[25]; // 80215608
  c->r[4]=0u+0x00000001u; // 8021560C
  c->lr=0x80215614u; f_801B9640(c); // 80215610
  c->r[28]=c->r[3]|c->r[3]; // 80215614
  c->r[3]=c->r[25]|c->r[25]; // 80215618
  c->r[4]=0u+0x00000002u; // 8021561C
  c->lr=0x80215624u; f_801B9714(c); // 80215620
  c->r[29]=c->r[3]|c->r[3]; // 80215624
  c->r[3]=c->r[25]|c->r[25]; // 80215628
  c->r[4]=0u+0x00000003u; // 8021562C
  c->lr=0x80215634u; f_801B9714(c); // 80215630
  c->r[30]=c->r[3]|c->r[3]; // 80215634
  c->r[3]=c->r[25]|c->r[25]; // 80215638
  c->r[4]=0u+0x00000004u; // 8021563C
  c->lr=0x80215644u; f_801B9714(c); // 80215640
  c->r[27]=c->r[3]|c->r[3]; // 80215644
  c->r[3]=c->r[25]|c->r[25]; // 80215648
  c->r[4]=0u+0x00000005u; // 8021564C
  c->lr=0x80215654u; f_801B966C(c); // 80215650
  c->f[31]=c->f[1]; // 80215654
  c->r[3]=c->r[25]|c->r[25]; // 80215658
  c->r[4]=0u+0x00000006u; // 8021565C
  c->lr=0x80215664u; f_801B966C(c); // 80215660
  c->f[30]=c->f[1]; // 80215664
  c->r[3]=c->r[25]|c->r[25]; // 80215668
  c->r[4]=0u+0x00000007u; // 8021566C
  c->lr=0x80215674u; f_801B966C(c); // 80215670
  c->f[29]=c->f[1]; // 80215674
  c->r[3]=c->r[25]|c->r[25]; // 80215678
  c->r[4]=0u+0x00000008u; // 8021567C
  c->lr=0x80215684u; f_801B966C(c); // 80215680
  c->f[28]=c->f[1]; // 80215684
  c->r[3]=c->r[25]|c->r[25]; // 80215688
  c->r[4]=0u+0x0000000Bu; // 8021568C
  c->lr=0x80215694u; f_801B9714(c); // 80215690
  cmps(c,0,(int32_t)c->r[3],0); // 80215694
  c->r[26]=c->r[3]|c->r[3]; // 80215698
  if (crb(c,2)) { goto L_802156DC; } // 8021569C
  c->r[25]=0u+0x00000000u; // 802156A0
  c->r[31]=0u+0x0000000Au; // 802156A4
L_802156A8:;
  c->r[3]=R32(c->r[13]+0xFFFF9750u); // 802156A8
  c->lr=0x802156B0u; f_801F821C(c); // 802156AC
  c->r[0]=divw((int32_t)c->r[26],(int32_t)c->r[31]); // 802156B0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802156B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 802156B8
  c->r[0]=c->r[26]-c->r[0]; // 802156BC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 802156C0
  if (crb(c,2)) { goto L_802156DC; } // 802156C4
  c->r[26]=divw((int32_t)c->r[26],(int32_t)c->r[31]); // 802156C8
  c->r[25]=c->r[25]+0x00000001u; // 802156CC
  cmps(c,0,(int32_t)c->r[25],4); // 802156D0
  if (crb(c,0)) { IRQCHK(c); goto L_802156A8; } // 802156D4
  goto L_80215734; // 802156D8
L_802156DC:;
  c->r[4]=c->r[28]|c->r[28]; // 802156DC
  c->r[3]=c->r[24]+0x00000010u; // 802156E0
  c->lr=0x802156E8u; f_8021576C(c); // 802156E4
  cmps(c,0,(int32_t)c->r[3],0); // 802156E8
  if (crb(c,0)) { goto L_80215734; } // 802156EC
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[4]=c->ps1[4]=RF32(ea);} // 802156F0
  c->r[4]=0u+0x80410000u; // 802156F4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802156F8
  c->r[3]=0u+0x80570000u; // 802156FC
  c->f[1]=c->f[31]; // 80215700
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80215704
  c->r[4]=c->r[4]+0xFFFFC228u; // 80215708
  c->f[2]=c->f[30]; // 8021570C
  c->f[3]=c->f[29]; // 80215710
  W32(c->r[1]+0x00000008u,c->r[29]); // 80215714
  c->f[5]=c->f[28]; // 80215718
  c->r[4]=R32(c->r[4]+c->r[0]); // 8021571C
  c->f[6]=c->f[4]; // 80215720
  c->r[6]=c->r[27]|c->r[27]; // 80215724
  c->r[3]=c->r[3]+0xFFFFA2D0u; // 80215728
  c->r[5]=c->r[1]+0x00000008u; // 8021572C
  c->lr=0x80215734u; f_801BC444(c); // 80215730
L_80215734:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 80215734
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 80215738
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8021573C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 80215740
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 80215744
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 80215748
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 8021574C
  c->r[11]=c->r[1]+0x00000030u; // 80215750
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 80215754
  c->lr=0x8021575Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80215758
  c->r[0]=R32(c->r[1]+0x00000074u); // 8021575C
  c->lr=c->r[0]; // 80215760
  c->r[1]=c->r[1]+0x00000070u; // 80215764
  return; // 80215768
}

// fn_8021576C
void f_8021576C(Ctx* __restrict c) {
  trace_call(0x8021576Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021576C
  c->r[0]=c->lr; // 80215770
  W32(c->r[1]+0x00000024u,c->r[0]); // 80215774
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80215778
  c->r[27]=c->r[3]|c->r[3]; // 8021577C
  c->r[28]=c->r[4]|c->r[4]; // 80215780
  c->r[30]=0u+0xFFFFFFFFu; // 80215784
  c->r[29]=0u+0x00000000u; // 80215788
  c->r[31]=0u+0x00000000u; // 8021578C
L_80215790:;
  c->r[4]=c->r[28]|c->r[28]; // 80215790
  c->r[3]=c->r[27]+c->r[31]; // 80215794
  c->lr=0x8021579Cu; f_80293554(c); // 80215798
  cmps(c,0,(int32_t)c->r[3],0); // 8021579C
  if (!crb(c,2)) { goto L_802157B4; } // 802157A0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802157A4
  c->r[3]=c->r[27]+c->r[0]; // 802157A8
  c->r[3]=R32(c->r[3]+0x00000100u); // 802157AC
  goto L_802157FC; // 802157B0
L_802157B4:;
  c->r[0]=R8(c->r[27]+c->r[31]); // 802157B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802157B8
  if (!crb(c,2)) { goto L_802157C4; } // 802157BC
  c->r[30]=c->r[29]|c->r[29]; // 802157C0
L_802157C4:;
  c->r[29]=c->r[29]+0x00000001u; // 802157C4
  c->r[31]=c->r[31]+0x00000010u; // 802157C8
  cmpu(c,0,c->r[29],0x00000010u); // 802157CC
  if (crb(c,0)) { IRQCHK(c); goto L_80215790; } // 802157D0
  cmps(c,0,(int32_t)c->r[30],0); // 802157D4
  if (crb(c,0)) { goto L_802157F8; } // 802157D8
  c->r[0]=rotl(c->r[30],4)&0xFFFFFFF0u; // 802157DC
  c->r[4]=c->r[28]|c->r[28]; // 802157E0
  c->r[3]=c->r[27]+c->r[0]; // 802157E4
  c->lr=0x802157ECu; f_802933D8(c); // 802157E8
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 802157EC
  c->r[3]=c->r[27]+c->r[0]; // 802157F0
  W32(c->r[3]+0x00000100u,c->r[30]); // 802157F4
L_802157F8:;
  c->r[3]=c->r[30]|c->r[30]; // 802157F8
L_802157FC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802157FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80215800
  c->lr=c->r[0]; // 80215804
  c->r[1]=c->r[1]+0x00000020u; // 80215808
  return; // 8021580C
}

// fn_80215810
void f_80215810(Ctx* __restrict c) {
  trace_call(0x80215810u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215810
  c->r[0]=c->lr; // 80215814
  W32(c->r[1]+0x00000044u,c->r[0]); // 80215818
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021581C
  c->r[28]=c->r[3]|c->r[3]; // 80215820
  c->r[29]=c->r[4]|c->r[4]; // 80215824
  c->r[0]=R32(c->r[3]+0x00000004u); // 80215828
  cmps(c,0,(int32_t)c->r[0],0); // 8021582C
  if (crb(c,2)) { goto L_802158B0; } // 80215830
  c->r[30]=0u+0x00000000u; // 80215834
  goto L_802158A0; // 80215838
L_8021583C:;
  c->r[5]=c->r[30]|c->r[30]; // 8021583C
  c->r[3]=c->r[1]+0x00000020u; // 80215840
  c->r[4]=c->r[28]+0x00000008u; // 80215844
  c->lr=0x8021584Cu; f_80173034(c); // 80215848
  c->r[3]=c->r[1]+0x00000014u; // 8021584C
  c->lr=0x80215854u; f_801732D0(c); // 80215850
  c->r[3]=c->r[1]+0x00000008u; // 80215854
  c->r[4]=c->r[1]+0x00000014u; // 80215858
  c->r[5]=c->r[1]+0x00000020u; // 8021585C
  c->lr=0x80215864u; f_801732E4(c); // 80215860
  c->r[3]=c->r[1]+0x00000014u; // 80215864
  c->r[4]=0u+0x00000002u; // 80215868
  c->lr=0x80215870u; f_801B9714(c); // 8021586C
  c->r[31]=c->r[3]|c->r[3]; // 80215870
  c->r[3]=c->r[1]+0x00000014u; // 80215874
  c->r[4]=0u+0x00000009u; // 80215878
  c->lr=0x80215880u; f_801B9714(c); // 8021587C
  cmps(c,0,(int32_t)c->r[3],1); // 80215880
  if (!crb(c,2)) { goto L_8021589C; } // 80215884
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[29]); // 80215888
  if (!crb(c,2)) { goto L_8021589C; } // 8021588C
  c->r[3]=c->r[28]|c->r[28]; // 80215890
  c->r[4]=c->r[1]+0x00000014u; // 80215894
  c->lr=0x8021589Cu; f_802155CC(c); // 80215898
L_8021589C:;
  c->r[30]=c->r[30]+0x00000001u; // 8021589C
L_802158A0:;
  c->r[3]=c->r[28]+0x00000008u; // 802158A0
  c->lr=0x802158A8u; f_80173018(c); // 802158A4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 802158A8
  if (crb(c,0)) { IRQCHK(c); goto L_8021583C; } // 802158AC
L_802158B0:;
  {uint32_t ea=c->r[1]+0x00000030u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802158B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802158B4
  c->lr=c->r[0]; // 802158B8
  c->r[1]=c->r[1]+0x00000040u; // 802158BC
  return; // 802158C0
}

// fn_802158C4
void f_802158C4(Ctx* __restrict c) {
  trace_call(0x802158C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802158C4
  c->r[0]=c->lr; // 802158C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802158CC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802158D0
  c->r[25]=c->r[3]|c->r[3]; // 802158D4
  c->r[26]=c->r[4]|c->r[4]; // 802158D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 802158DC
  cmps(c,0,(int32_t)c->r[0],0); // 802158E0
  if (crb(c,2)) { goto L_802159A0; } // 802158E4
  c->r[3]=c->r[3]+0x00000010u; // 802158E8
  c->lr=0x802158F0u; f_8021576C(c); // 802158EC
  c->r[4]=0u+0x80570000u; // 802158F0
  c->r[5]=c->r[3]|c->r[3]; // 802158F4
  c->r[3]=c->r[4]+0xFFFFA2D0u; // 802158F8
  c->r[4]=0u+0x00000001u; // 802158FC
  c->lr=0x80215904u; f_801BC7AC(c); // 80215900
  c->r[27]=0u+0x00000000u; // 80215904
  c->r[31]=0u+0x00000000u; // 80215908
  c->r[28]=c->r[27]|c->r[27]; // 8021590C
  c->r[30]=0u+0x00000000u; // 80215910
  c->r[29]=0u+0xFFFFFFFFu; // 80215914
L_80215918:;
  c->r[3]=c->r[25]+c->r[31]; // 80215918
  c->r[4]=c->r[26]|c->r[26]; // 8021591C
  c->r[3]=c->r[3]+0x00000010u; // 80215920
  c->lr=0x80215928u; f_80293554(c); // 80215924
  cmps(c,0,(int32_t)c->r[3],0); // 80215928
  if (!crb(c,2)) { goto L_80215940; } // 8021592C
  c->r[4]=c->r[25]+c->r[31]; // 80215930
  c->r[3]=c->r[25]+c->r[30]; // 80215934
  W8(c->r[4]+0x00000010u,c->r[28]); // 80215938
  W32(c->r[3]+0x00000110u,c->r[29]); // 8021593C
L_80215940:;
  c->r[27]=c->r[27]+0x00000001u; // 80215940
  c->r[30]=c->r[30]+0x00000004u; // 80215944
  cmpu(c,0,c->r[27],0x00000010u); // 80215948
  c->r[31]=c->r[31]+0x00000010u; // 8021594C
  if (crb(c,0)) { IRQCHK(c); goto L_80215918; } // 80215950
  c->r[27]=0u+0x00000000u; // 80215954
  c->r[31]=0u+0x00000000u; // 80215958
  c->r[30]=0u+0x00000000u; // 8021595C
L_80215960:;
  c->r[28]=c->r[25]+c->r[31]; // 80215960
  c->r[0]=R8(c->r[28]+0x00000150u); // 80215964
  cmps(c,0,(int32_t)c->r[0],0); // 80215968
  if (crb(c,2)) { goto L_80215990; } // 8021596C
  c->r[3]=c->r[28]+0x00000154u; // 80215970
  c->r[4]=0u+0x00000001u; // 80215974
  c->lr=0x8021597Cu; f_801B9640(c); // 80215978
  c->r[4]=c->r[26]|c->r[26]; // 8021597C
  c->lr=0x80215984u; f_80293554(c); // 80215980
  cmps(c,0,(int32_t)c->r[3],0); // 80215984
  if (!crb(c,2)) { goto L_80215990; } // 80215988
  W8(c->r[28]+0x00000150u,c->r[30]); // 8021598C
L_80215990:;
  c->r[27]=c->r[27]+0x00000001u; // 80215990
  c->r[31]=c->r[31]+0x00000010u; // 80215994
  cmpu(c,0,c->r[27],0x00000020u); // 80215998
  if (crb(c,0)) { IRQCHK(c); goto L_80215960; } // 8021599C
L_802159A0:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 802159A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802159A4
  c->lr=c->r[0]; // 802159A8
  c->r[1]=c->r[1]+0x00000030u; // 802159AC
  return; // 802159B0
}

// fn_802159B4
void f_802159B4(Ctx* __restrict c) {
  trace_call(0x802159B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802159B4
  c->r[0]=c->lr; // 802159B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 802159BC
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 802159C0
  c->r[27]=c->r[3]|c->r[3]; // 802159C4
  c->r[28]=c->r[4]|c->r[4]; // 802159C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 802159CC
  cmps(c,0,(int32_t)c->r[0],0); // 802159D0
  if (crb(c,2)) { goto L_80215AA4; } // 802159D4
  c->r[29]=0u+0x00000000u; // 802159D8
  c->r[30]=0u+0x00000001u; // 802159DC
  c->r[31]=0u+0x00000020u; // 802159E0
  goto L_80215A94; // 802159E4
L_802159E8:;
  c->r[5]=c->r[29]|c->r[29]; // 802159E8
  c->r[3]=c->r[1]+0x0000002Cu; // 802159EC
  c->r[4]=c->r[27]+0x00000008u; // 802159F0
  c->lr=0x802159F8u; f_80173034(c); // 802159F4
  c->r[3]=c->r[1]+0x00000020u; // 802159F8
  c->lr=0x80215A00u; f_801732D0(c); // 802159FC
  c->r[3]=c->r[1]+0x00000014u; // 80215A00
  c->r[4]=c->r[1]+0x00000020u; // 80215A04
  c->r[5]=c->r[1]+0x0000002Cu; // 80215A08
  c->lr=0x80215A10u; f_801732E4(c); // 80215A0C
  c->r[3]=c->r[1]+0x00000020u; // 80215A10
  c->r[4]=0u+0x00000001u; // 80215A14
  c->lr=0x80215A1Cu; f_801B9640(c); // 80215A18
  c->r[4]=c->r[28]|c->r[28]; // 80215A1C
  c->lr=0x80215A24u; f_80293554(c); // 80215A20
  cmps(c,0,(int32_t)c->r[3],0); // 80215A24
  if (!crb(c,2)) { goto L_80215A90; } // 80215A28
  c->r[3]=c->r[1]+0x00000020u; // 80215A2C
  c->r[4]=0u+0x00000009u; // 80215A30
  c->lr=0x80215A38u; f_801B9714(c); // 80215A34
  cmps(c,0,(int32_t)c->r[3],0); // 80215A38
  if (!crb(c,2)) { goto L_80215A50; } // 80215A3C
  c->r[3]=c->r[27]|c->r[27]; // 80215A40
  c->r[4]=c->r[1]+0x00000020u; // 80215A44
  c->lr=0x80215A4Cu; f_802155CC(c); // 80215A48
  goto L_80215A90; // 80215A4C
L_80215A50:;
  cmps(c,0,(int32_t)c->r[3],2); // 80215A50
  if (!crb(c,2)) { goto L_80215A90; } // 80215A54
  c->r[3]=0u+0x00000000u; // 80215A58
  c->ctr=c->r[31]; // 80215A5C
L_80215A60:;
  c->r[4]=c->r[27]+c->r[3]; // 80215A60
  c->r[0]=R8(c->r[4]+0x00000150u); // 80215A64
  cmps(c,0,(int32_t)c->r[0],0); // 80215A68
  if (!crb(c,2)) { goto L_80215A88; } // 80215A6C
  W8(c->r[4]+0x00000150u,c->r[30]); // 80215A70
  c->r[3]=c->r[1]+0x00000008u; // 80215A74
  c->r[4]=c->r[4]+0x00000154u; // 80215A78
  c->r[5]=c->r[1]+0x00000020u; // 80215A7C
  c->lr=0x80215A84u; f_801732E4(c); // 80215A80
  goto L_80215A90; // 80215A84
L_80215A88:;
  c->r[3]=c->r[3]+0x00000010u; // 80215A88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215A60; } // 80215A8C
L_80215A90:;
  c->r[29]=c->r[29]+0x00000001u; // 80215A90
L_80215A94:;
  c->r[3]=c->r[27]+0x00000008u; // 80215A94
  c->lr=0x80215A9Cu; f_80173018(c); // 80215A98
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80215A9C
  if (crb(c,0)) { IRQCHK(c); goto L_802159E8; } // 80215AA0
L_80215AA4:;
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80215AA4
  c->r[0]=R32(c->r[1]+0x00000054u); // 80215AA8
  c->lr=c->r[0]; // 80215AAC
  c->r[1]=c->r[1]+0x00000050u; // 80215AB0
  return; // 80215AB4
}

// fn_80215AB8
void f_80215AB8(Ctx* __restrict c) {
  trace_call(0x80215AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215AB8
  c->r[0]=c->lr; // 80215ABC
  cmps(c,0,(int32_t)c->r[4],0); // 80215AC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80215AC4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80215AC8
  c->r[31]=c->r[3]|c->r[3]; // 80215ACC
  W32(c->r[3]+0x00000004u,c->r[4]); // 80215AD0
  if (crb(c,2)) { goto L_80215B18; } // 80215AD4
  c->r[3]=c->r[1]+0x00000010u; // 80215AD8
  c->lr=0x80215AE0u; f_80172DDC(c); // 80215ADC
  c->r[0]=R32(c->r[1]+0x00000010u); // 80215AE0
  cmps(c,0,(int32_t)c->r[0],0); // 80215AE4
  if (crb(c,2)) { goto L_80215B18; } // 80215AE8
  c->r[3]=c->r[1]+0x00000010u; // 80215AEC
  c->r[4]=c->r[13]+0xFFFF8B28u; // 80215AF0
  c->lr=0x80215AF8u; f_80172EC8(c); // 80215AF4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80215AF8
  c->r[4]=c->r[1]+0x00000008u; // 80215AFC
  W32(c->r[1]+0x00000008u,c->r[3]); // 80215B00
  c->r[3]=c->r[31]+0x00000008u; // 80215B04
  c->lr=0x80215B0Cu; f_80172FE0(c); // 80215B08
  c->r[3]=c->r[31]+0x00000008u; // 80215B0C
  c->lr=0x80215B14u; f_80173004(c); // 80215B10
  cmps(c,0,(int32_t)c->r[3],0); // 80215B14
L_80215B18:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80215B18
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80215B1C
  c->lr=c->r[0]; // 80215B20
  c->r[1]=c->r[1]+0x00000030u; // 80215B24
  return; // 80215B28
}

// fn_80215B2C
void f_80215B2C(Ctx* __restrict c) {
  trace_call(0x80215B2Cu);
  c->r[9]=0u+0x00000000u; // 80215B2C
  c->r[0]=0u+0x00000010u; // 80215B30
  c->r[5]=c->r[9]|c->r[9]; // 80215B34
  W32(c->r[3]+0x00000004u,c->r[9]); // 80215B38
  c->r[4]=0u+0x00000000u; // 80215B3C
  c->r[7]=0u+0xFFFFFFFFu; // 80215B40
  c->ctr=c->r[0]; // 80215B44
L_80215B48:;
  c->r[8]=c->r[3]+c->r[4]; // 80215B48
  c->r[6]=c->r[3]+c->r[5]; // 80215B4C
  W8(c->r[8]+0x00000010u,c->r[9]); // 80215B50
  c->r[4]=c->r[4]+0x00000010u; // 80215B54
  c->r[5]=c->r[5]+0x00000004u; // 80215B58
  W32(c->r[6]+0x00000110u,c->r[7]); // 80215B5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215B48; } // 80215B60
  c->r[0]=0u+0x00000020u; // 80215B64
  c->r[4]=0u+0x00000000u; // 80215B68
  c->r[6]=0u+0x00000000u; // 80215B6C
  c->ctr=c->r[0]; // 80215B70
L_80215B74:;
  c->r[5]=c->r[3]+c->r[4]; // 80215B74
  c->r[4]=c->r[4]+0x00000010u; // 80215B78
  W8(c->r[5]+0x00000150u,c->r[6]); // 80215B7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80215B74; } // 80215B80
  return; // 80215B84
}

// fn_80215B88
void f_80215B88(Ctx* __restrict c) {
  trace_call(0x80215B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215B88
  c->r[0]=c->lr; // 80215B8C
  c->r[4]=0u+0x80410000u; // 80215B90
  W32(c->r[1]+0x00000024u,c->r[0]); // 80215B94
  c->r[4]=c->r[4]+0xFFFFC294u; // 80215B98
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80215B9C
  c->r[29]=c->r[3]|c->r[3]; // 80215BA0
  W32(c->r[3]+0x00000000u,c->r[4]); // 80215BA4
  c->r[3]=c->r[3]+0x00000008u; // 80215BA8
  c->lr=0x80215BB0u; f_80172FD0(c); // 80215BAC
  c->r[30]=c->r[29]+0x00000150u; // 80215BB0
  c->r[31]=c->r[29]+0x00000350u; // 80215BB4
L_80215BB8:;
  c->r[3]=c->r[30]+0x00000004u; // 80215BB8
  c->lr=0x80215BC0u; f_801732D0(c); // 80215BBC
  c->r[30]=c->r[30]+0x00000010u; // 80215BC0
  cmpu(c,0,c->r[30],c->r[31]); // 80215BC4
  if (crb(c,0)) { IRQCHK(c); goto L_80215BB8; } // 80215BC8
  W32(c->r[13]+0xFFFF9768u,c->r[29]); // 80215BCC
  c->r[3]=c->r[29]|c->r[29]; // 80215BD0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80215BD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80215BD8
  c->lr=c->r[0]; // 80215BDC
  c->r[1]=c->r[1]+0x00000020u; // 80215BE0
  return; // 80215BE4
}

// fn_80215BE8
void f_80215BE8(Ctx* __restrict c) {
  trace_call(0x80215BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215BE8
  c->r[0]=c->lr; // 80215BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80215BF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80215BF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80215BF8
  c->r[31]=c->r[3]|c->r[3]; // 80215BFC
  if (crb(c,2)) { goto L_80215C18; } // 80215C00
  c->r[0]=0u+0x00000000u; // 80215C04
  cmps(c,0,(int32_t)c->r[4],0); // 80215C08
  W32(c->r[13]+0xFFFF9768u,c->r[0]); // 80215C0C
  if (!crb(c,1)) { goto L_80215C18; } // 80215C10
  c->lr=0x80215C18u; f_802896EC(c); // 80215C14
L_80215C18:;
  c->r[3]=c->r[31]|c->r[31]; // 80215C18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80215C1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80215C20
  c->lr=c->r[0]; // 80215C24
  c->r[1]=c->r[1]+0x00000010u; // 80215C28
  return; // 80215C2C
}

// fn_80215C30
void f_80215C30(Ctx* __restrict c) {
  trace_call(0x80215C30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215C30
  c->r[0]=c->lr; // 80215C34
  {uint32_t ea=c->r[2]+0xFFFFCBC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215C38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80215C3C
  c->f[3]=c->f[1]; // 80215C40
  {uint32_t ea=c->r[2]+0xFFFFCBC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80215C44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80215C48
  c->r[31]=0u+0x805D0000u; // 80215C4C
  c->r[31]=c->r[31]+0xFFFFE560u; // 80215C50
  c->r[3]=c->r[31]+0x00000000u; // 80215C54
  c->lr=0x80215C5Cu; f_8003F588(c); // 80215C58
  c->r[3]=c->r[31]+0x00000018u; // 80215C5C
  c->lr=0x80215C64u; f_80215B88(c); // 80215C60
  c->r[4]=0u+0x80210000u; // 80215C64
  c->r[3]=c->r[31]+0x00000018u; // 80215C68
  c->r[4]=c->r[4]+0x00005BE8u; // 80215C6C
  c->r[5]=c->r[31]+0x0000000Cu; // 80215C70
  c->lr=0x80215C78u; f_802895A4(c); // 80215C74
  c->r[0]=R32(c->r[1]+0x00000014u); // 80215C78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80215C7C
  c->lr=c->r[0]; // 80215C80
  c->r[1]=c->r[1]+0x00000010u; // 80215C84
  return; // 80215C88
}

// fn_80215C8C
void f_80215C8C(Ctx* __restrict c) {
  trace_call(0x80215C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215C8C
  c->r[0]=c->lr; // 80215C90
  c->r[3]=0u+0x804B0000u; // 80215C94
  c->r[4]=0u+0x00000002u; // 80215C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80215C9C
  c->r[3]=c->r[3]+0x00005CC8u; // 80215CA0
  c->lr=0x80215CA8u; f_801489B0(c); // 80215CA4
  W32(c->r[13]+0xFFFF8B30u,c->r[3]); // 80215CA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80215CAC
  c->lr=c->r[0]; // 80215CB0
  c->r[1]=c->r[1]+0x00000010u; // 80215CB4
  return; // 80215CB8
}

// fn_80215CBC
void f_80215CBC(Ctx* __restrict c) {
  trace_call(0x80215CBCu);
  c->r[4]=0u+0x804D0000u; // 80215CBC
  c->r[3]=0u+0x804B0000u; // 80215CC0
  c->r[4]=c->r[4]+0x00003318u; // 80215CC4
  c->r[5]=R32(c->r[13]+0xFFFF8B30u); // 80215CC8
  c->r[4]=R32(c->r[4]+0x00000024u); // 80215CCC
  c->r[3]=c->r[3]+0x00005CC8u; // 80215CD0
  f_801483D8(c); return; // 80215CD4
}

// fn_80215CD8
void f_80215CD8(Ctx* __restrict c) {
  trace_call(0x80215CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215CD8
  c->r[0]=c->lr; // 80215CDC
  c->r[3]=0u+0x80470000u; // 80215CE0
  c->r[4]=0u+0x00000002u; // 80215CE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80215CE8
  c->r[3]=c->r[3]+0xFFFF94F8u; // 80215CEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80215CF0
  c->lr=0x80215CF8u; f_80066C2C(c); // 80215CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80215CF8
  if (!crb(c,2)) { goto L_80215D38; } // 80215CFC
  c->r[31]=0u+0x80440000u; // 80215D00
  c->r[4]=0u+0x00000005u; // 80215D04
  c->r[3]=c->r[31]+0x000010A8u; // 80215D08
  c->lr=0x80215D10u; f_8013D6C4(c); // 80215D0C
  c->r[3]=0u+0x00000000u; // 80215D10
  c->r[4]=0u+0x00000007u; // 80215D14
  c->r[5]=0u+0x00000000u; // 80215D18
  c->lr=0x80215D20u; f_8028831C(c); // 80215D1C
  c->r[3]=0u+0x804B0000u; // 80215D20
  c->r[4]=0u+0xFFFFFFFFu; // 80215D24
  c->r[3]=c->r[3]+0x00005CC8u; // 80215D28
  c->lr=0x80215D30u; f_8014852C(c); // 80215D2C
  c->r[3]=c->r[31]+0x000010A8u; // 80215D30
  c->lr=0x80215D38u; f_8013D790(c); // 80215D34
L_80215D38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80215D38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80215D3C
  c->lr=c->r[0]; // 80215D40
  c->r[1]=c->r[1]+0x00000010u; // 80215D44
  return; // 80215D48
}

// fn_80215D4C
void f_80215D4C(Ctx* __restrict c) {
  trace_call(0x80215D4Cu);
  c->r[3]=0u+0x804B0000u; // 80215D4C
  c->r[4]=0u+0x00000002u; // 80215D50
  c->r[3]=c->r[3]+0x00005CC8u; // 80215D54
  f_80148F4C(c); return; // 80215D58
}

// fn_80215D5C
void f_80215D5C(Ctx* __restrict c) {
  trace_call(0x80215D5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80215D5C
  c->r[0]=c->lr; // 80215D60
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80215D64
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 80215D68
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 80215D6C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 80215D70
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 80215D74
  c->r[11]=c->r[1]+0x000000D0u; // 80215D78
  c->lr=0x80215D80u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80215D7C
  c->r[23]=c->r[3]|c->r[3]; // 80215D80
  c->r[24]=R8(c->r[1]+0x000000FBu); // 80215D84
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80215D88
  c->r[30]=c->r[4]|c->r[4]; // 80215D8C
  c->r[29]=c->r[5]|c->r[5]; // 80215D90
  c->r[31]=c->r[6]|c->r[6]; // 80215D94
  c->r[28]=c->r[7]|c->r[7]; // 80215D98
  c->r[27]=c->r[8]|c->r[8]; // 80215D9C
  c->r[26]=c->r[9]|c->r[9]; // 80215DA0
  c->r[25]=c->r[10]|c->r[10]; // 80215DA4
  c->lr=0x80215DACu; f_800F3E28(c); // 80215DA8
  cmps(c,0,(int32_t)c->r[3],0); // 80215DAC
  if (!crb(c,2)) { goto L_80215FF8; } // 80215DB0
  c->r[3]=0u+0x80470000u; // 80215DB4
  c->r[4]=0u+0x00000002u; // 80215DB8
  c->r[3]=c->r[3]+0xFFFF94F8u; // 80215DBC
  c->lr=0x80215DC4u; f_80066C2C(c); // 80215DC0
  cmps(c,0,(int32_t)c->r[3],0); // 80215DC4
  if (!crb(c,2)) { goto L_80215FF8; } // 80215DC8
  cmps(c,0,(int32_t)c->r[26],0); // 80215DCC
  if (crb(c,0)) { goto L_80215FF8; } // 80215DD0
  c->r[3]=0u+0x80440000u; // 80215DD4
  c->r[4]=c->r[1]+0x00000014u; // 80215DD8
  c->r[3]=c->r[3]+0xFFFFA720u; // 80215DDC
  c->r[5]=c->r[1]+0x00000010u; // 80215DE0
  c->r[6]=c->r[1]+0x0000000Cu; // 80215DE4
  c->r[7]=c->r[1]+0x00000008u; // 80215DE8
  c->lr=0x80215DF0u; f_8003AF68(c); // 80215DEC
  c->r[5]=c->r[30]|c->r[30]; // 80215DF0
  c->r[6]=c->r[1]+0x0000003Cu; // 80215DF4
  c->r[3]=c->r[13]+0xFFFF9380u; // 80215DF8
  c->r[4]=0u+0xFFFFFFFFu; // 80215DFC
  c->lr=0x80215E04u; f_80028E1C(c); // 80215E00
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215E04
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215E08
  fcmp(c,0,c->f[1],c->f[0]); // 80215E0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80215E10
  if (!crb(c,2)) { goto L_80215FF8; } // 80215E14
  {uint32_t ea=c->r[2]+0xFFFFCBCCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80215E18
  c->r[3]=c->r[1]+0x00000048u; // 80215E1C
  c->r[4]=c->r[1]+0x0000003Cu; // 80215E20
  c->lr=0x80215E28u; f_8003F468(c); // 80215E24
  cmps(c,0,(int32_t)c->r[29],0); // 80215E28
  if (crb(c,2)) { goto L_80215E40; } // 80215E2C
  c->r[3]=c->r[1]+0x00000048u; // 80215E30
  c->r[5]=c->r[29]|c->r[29]; // 80215E34
  c->r[4]=c->r[3]|c->r[3]; // 80215E38
  c->lr=0x80215E40u; f_80064C34(c); // 80215E3C
L_80215E40:;
  {uint32_t ea=c->r[2]+0xFFFFCBD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80215E40
  c->r[30]=0u+0x80440000u; // 80215E44
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80215E48
  c->r[3]=c->r[30]+0x000010A8u; // 80215E4C
  c->r[4]=0u+0x00000005u; // 80215E50
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[1],c->f[31],-c->f[0])); // 80215E54
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80215E58
  c->lr=0x80215E60u; f_8013D6C4(c); // 80215E5C
  c->r[3]=0u+0x00000000u; // 80215E60
  c->r[4]=0u+0x00000007u; // 80215E64
  c->r[5]=0u+0x00000000u; // 80215E68
  c->lr=0x80215E70u; f_8028831C(c); // 80215E6C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 80215E70
  c->r[29]=0u+0x804B0000u; // 80215E74
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80215E78
  c->r[29]=c->r[29]+0x00005CC8u; // 80215E7C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215E80
  c->r[4]=c->r[23]|c->r[23]; // 80215E84
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 80215E88
  c->r[6]=c->r[28]|c->r[28]; // 80215E8C
  c->r[7]=c->r[26]|c->r[26]; // 80215E90
  c->r[8]=c->r[24]|c->r[24]; // 80215E94
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80215E98
  c->r[3]=c->r[29]+0x00001EE0u; // 80215E9C
  c->r[5]=c->r[1]+0x00000030u; // 80215EA0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80215EA4
  c->lr=0x80215EACu; f_8014BE48(c); // 80215EA8
  c->r[3]=c->r[30]+0x000010A8u; // 80215EAC
  c->lr=0x80215EB4u; f_8013D790(c); // 80215EB0
  cmps(c,0,(int32_t)c->r[25],0); // 80215EB4
  if (crb(c,0)) { goto L_80215FF8; } // 80215EB8
  cmps(c,0,(int32_t)c->r[27],0); // 80215EBC
  if (crb(c,2)) { goto L_80215FF8; } // 80215EC0
  c->f[1]=c->f[31]; // 80215EC4
  c->r[3]=0u+0x80540000u; // 80215EC8
  c->r[24]=0u+0xFFFFFF00u; // 80215ECC
  c->r[24]=(rotl(c->r[27],0)&0x000000FFu)|(c->r[24]&~0x000000FFu); // 80215ED0
  c->r[3]=c->r[3]+0xFFFFC2B0u; // 80215ED4
  c->lr=0x80215EDCu; f_801B15C4(c); // 80215ED8
  c->r[5]=c->r[23]|c->r[23]; // 80215EDC
  c->r[3]=c->r[1]+0x00000018u; // 80215EE0
  c->r[4]=c->r[29]+0x00001EE0u; // 80215EE4
  c->lr=0x80215EECu; f_8014C1DC(c); // 80215EE8
  c->r[3]=c->r[1]+0x00000024u; // 80215EEC
  c->r[4]=c->r[1]+0x0000003Cu; // 80215EF0
  c->r[5]=c->r[1]+0x00000018u; // 80215EF4
  c->lr=0x80215EFCu; f_80064C34(c); // 80215EF8
  c->r[3]=c->r[1]+0x00000048u; // 80215EFC
  c->r[4]=c->r[1]+0x00000024u; // 80215F00
  c->lr=0x80215F08u; f_8003F468(c); // 80215F04
  cmps(c,0,(int32_t)c->r[31],0); // 80215F08
  if (crb(c,2)) { goto L_80215F20; } // 80215F0C
  c->r[3]=c->r[1]+0x00000048u; // 80215F10
  c->r[5]=c->r[31]|c->r[31]; // 80215F14
  c->r[4]=c->r[3]|c->r[3]; // 80215F18
  c->lr=0x80215F20u; f_80064C34(c); // 80215F1C
L_80215F20:;
  c->r[3]=R32(c->r[13]+0xFFFF95F8u); // 80215F20
  c->r[4]=c->r[25]|c->r[25]; // 80215F24
  c->r[5]=c->r[1]+0x00000054u; // 80215F28
  c->r[12]=R32(c->r[3]+0x00000000u); // 80215F2C
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80215F30
  c->ctr=c->r[12]; // 80215F34
  if (true) { c->lr=0x80215F3Cu; dispatch(c,c->ctr); } // 80215F38
  c->r[3]=R32(c->r[1]+0x00000058u); // 80215F3C
  c->r[0]=0u+0x43300000u; // 80215F40
  W32(c->r[1]+0x000000A0u,c->r[0]); // 80215F44
  c->r[29]=c->r[1]+0x00000054u; // 80215F48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80215F4C
  {uint32_t ea=c->r[2]+0xFFFFCBD8u; c->f[2]=RF64(ea);} // 80215F50
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80215F54
  c->r[25]=0u+0x00000000u; // 80215F58
  {uint32_t ea=c->r[2]+0xFFFFCBD4u; c->f[30]=c->ps1[30]=RF32(ea);} // 80215F5C
  c->r[31]=0u+0x00000000u; // 80215F60
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=RF64(ea);} // 80215F64
  c->r[30]=0u+0x80540000u; // 80215F68
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80215F6C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 80215F70
  {uint32_t ea=c->r[2]+0xFFFFCBD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215F74
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 80215F78
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[30],c->f[2],-c->f[1])); // 80215F7C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[31],c->f[1])); // 80215F80
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80215F84
  goto L_80215FEC; // 80215F88
L_80215F8C:;
  c->r[26]=c->r[29]+c->r[31]; // 80215F8C
  c->r[3]=c->r[30]+0xFFFFC2B0u; // 80215F90
  c->r[27]=R32(c->r[26]+0x00000008u); // 80215F94
  c->lr=0x80215F9Cu; f_801B18A4(c); // 80215F98
  c->r[28]=c->r[3]|c->r[3]; // 80215F9C
  c->r[3]=c->r[27]|c->r[27]; // 80215FA0
  c->lr=0x80215FA8u; f_802894C0(c); // 80215FA4
  c->r[5]=c->r[3]|c->r[3]; // 80215FA8
  c->r[3]=c->r[28]|c->r[28]; // 80215FAC
  c->r[4]=c->r[27]|c->r[27]; // 80215FB0
  c->lr=0x80215FB8u; f_803B89C8(c); // 80215FB4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 80215FB8
  c->r[4]=c->r[24]|c->r[24]; // 80215FBC
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80215FC0
  c->r[3]=c->r[30]+0xFFFFC2B0u; // 80215FC4
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[30],c->f[1],-c->f[0])); // 80215FC8
  c->r[5]=R32(c->r[26]+0x00000008u); // 80215FCC
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80215FD0
  c->lr=0x80215FD8u; f_801B1660(c); // 80215FD4
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80215FD8
  c->r[25]=c->r[25]+0x00000001u; // 80215FDC
  c->r[31]=c->r[31]+0x00000004u; // 80215FE0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 80215FE4
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80215FE8
L_80215FEC:;
  c->r[0]=R32(c->r[1]+0x00000058u); // 80215FEC
  cmpu(c,0,c->r[25],c->r[0]); // 80215FF0
  if (crb(c,0)) { IRQCHK(c); goto L_80215F8C; } // 80215FF4
L_80215FF8:;
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 80215FF8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 80215FFC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 80216000
  c->r[11]=c->r[1]+0x000000D0u; // 80216004
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 80216008
  c->lr=0x80216010u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021600C
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80216010
  c->lr=c->r[0]; // 80216014
  c->r[1]=c->r[1]+0x000000F0u; // 80216018
  return; // 8021601C
}

// fn_80216020
void f_80216020(Ctx* __restrict c) {
  trace_call(0x80216020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80216020
  c->r[0]=c->lr; // 80216024
  c->r[11]=0u+0x80410000u; // 80216028
  c->r[12]=0u+0x00000000u; // 8021602C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80216030
  c->r[11]=c->r[11]+0xFFFFC2B8u; // 80216034
  c->r[6]=0u+0x00000002u; // 80216038
  c->r[0]=0u+0xFFFFFFFFu; // 8021603C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80216040
  c->r[31]=c->r[3]|c->r[3]; // 80216044
  c->r[10]=0u+0x80440000u; // 80216048
  c->r[5]=0u+0x00000001u; // 8021604C
  W32(c->r[3]+0x00000004u,c->r[6]); // 80216050
  c->r[4]=c->r[31]|c->r[31]; // 80216054
  c->r[6]=0u+0x00000006u; // 80216058
  c->r[7]=0u+0x0000001Au; // 8021605C
  W32(c->r[3]+0x00000000u,c->r[12]); // 80216060
  c->r[8]=0u+0x00000000u; // 80216064
  c->r[9]=0u+0x00000000u; // 80216068
  W32(c->r[3]+0x00000010u,c->r[0]); // 8021606C
  W32(c->r[3]+0x00000014u,c->r[12]); // 80216070
  W32(c->r[3]+0x00000018u,c->r[12]); // 80216074
  W32(c->r[3]+0x0000001Cu,c->r[12]); // 80216078
  W32(c->r[3]+0x0000000Cu,c->r[12]); // 8021607C
  W32(c->r[3]+0x00000020u,c->r[12]); // 80216080
  W32(c->r[3]+0x00000008u,c->r[12]); // 80216084
  W32(c->r[3]+0x00000124u,c->r[11]); // 80216088
  c->r[3]=c->r[10]+0x000010F8u; // 8021608C
  c->lr=0x80216094u; f_8003D4DC(c); // 80216090
  c->r[3]=c->r[31]|c->r[31]; // 80216094
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80216098
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021609C
  c->lr=c->r[0]; // 802160A0
  c->r[1]=c->r[1]+0x00000010u; // 802160A4
  return; // 802160A8
}

// fn_802160AC
void f_802160AC(Ctx* __restrict c) {
  trace_call(0x802160ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802160AC
  c->r[0]=c->lr; // 802160B0
  c->r[3]=0u+0x804B0000u; // 802160B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802160B8
  c->r[3]=c->r[3]+0x00005CC8u; // 802160BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802160C0
  c->r[31]=0u+0x804D0000u; // 802160C4
  c->r[31]=c->r[31]+0x00003318u; // 802160C8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802160CC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 802160D0
  c->lr=0x802160D8u; f_80148894(c); // 802160D4
  c->r[3]=c->r[31]|c->r[31]; // 802160D8
  c->lr=0x802160E0u; f_801582C8(c); // 802160DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802160E0
  c->r[3]=0u+0x00000001u; // 802160E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802160E8
  c->lr=c->r[0]; // 802160EC
  c->r[1]=c->r[1]+0x00000010u; // 802160F0
  return; // 802160F4
}

// fn_802160F8
void f_802160F8(Ctx* __restrict c) {
  trace_call(0x802160F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802160F8
  c->r[0]=c->lr; // 802160FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80216100
  c->r[11]=c->r[1]+0x00000020u; // 80216104
  c->lr=0x8021610Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80216108
  c->r[29]=0u+0x804D0000u; // 8021610C
  c->r[30]=0u+0x80440000u; // 80216110
  c->r[29]=c->r[29]+0x00003318u; // 80216114
  c->r[4]=0u+0x00000009u; // 80216118
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021611C
  c->r[3]=c->r[30]+0x000010A8u; // 80216120
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 80216124
  c->lr=0x8021612Cu; f_8013D6C4(c); // 80216128
  c->r[3]=0u+0x00000000u; // 8021612C
  c->r[4]=0u+0x00000007u; // 80216130
  c->r[5]=0u+0x00000000u; // 80216134
  c->lr=0x8021613Cu; f_8028831C(c); // 80216138
  c->r[31]=0u+0x804B0000u; // 8021613C
  c->r[3]=c->r[31]+0x00005CC8u; // 80216140
  c->lr=0x80216148u; f_801488E8(c); // 80216144
  c->r[3]=c->r[30]+0x000010A8u; // 80216148
  c->lr=0x80216150u; f_8013D790(c); // 8021614C
  c->r[3]=c->r[30]+0x000010A8u; // 80216150
  c->r[4]=0u+0x0000000Au; // 80216154
  c->lr=0x8021615Cu; f_8013D6C4(c); // 80216158
  c->r[3]=0u+0x00000000u; // 8021615C
  c->r[4]=0u+0x00000007u; // 80216160
  c->r[5]=0u+0x00000000u; // 80216164
  c->lr=0x8021616Cu; f_8028831C(c); // 80216168
  c->r[31]=c->r[31]+0x00005CC8u; // 8021616C
  c->r[3]=c->r[31]+0x00000094u; // 80216170
  c->lr=0x80216178u; f_80156F88(c); // 80216174
  c->r[3]=c->r[31]|c->r[31]; // 80216178
  c->lr=0x80216180u; f_80148938(c); // 8021617C
  c->r[3]=0u+0x80590000u; // 80216180
  c->r[3]=c->r[3]+0x000063F0u; // 80216184
  c->lr=0x8021618Cu; f_801F9524(c); // 80216188
  c->r[3]=c->r[31]|c->r[31]; // 8021618C
  c->lr=0x80216194u; f_80148970(c); // 80216190
  c->r[3]=c->r[30]+0x000010A8u; // 80216194
  c->lr=0x8021619Cu; f_8013D790(c); // 80216198
  c->r[3]=c->r[29]|c->r[29]; // 8021619C
  c->lr=0x802161A4u; f_801582C8(c); // 802161A0
  c->r[11]=c->r[1]+0x00000020u; // 802161A4
  c->lr=0x802161ACu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802161A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802161AC
  c->lr=c->r[0]; // 802161B0
  c->r[1]=c->r[1]+0x00000020u; // 802161B4
  return; // 802161B8
}

// fn_802161BC
void f_802161BC(Ctx* __restrict c) {
  trace_call(0x802161BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802161BC
  c->r[0]=c->lr; // 802161C0
  {uint32_t ea=c->r[2]+0xFFFFCBC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802161C4
  c->r[3]=0u+0x805D0000u; // 802161C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802161CC
  c->r[3]=c->r[3]+0xFFFFE8C8u; // 802161D0
  c->f[3]=c->f[1]; // 802161D4
  {uint32_t ea=c->r[2]+0xFFFFCBE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802161D8
  c->lr=0x802161E0u; f_8003F588(c); // 802161DC
  c->r[3]=0u+0x805D0000u; // 802161E0
  c->r[3]=c->r[3]+0xFFFFE8D4u; // 802161E4
  c->lr=0x802161ECu; f_80216020(c); // 802161E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802161EC
  c->lr=c->r[0]; // 802161F0
  c->r[1]=c->r[1]+0x00000010u; // 802161F4
  return; // 802161F8
}

// fn_802161FC
void f_802161FC(Ctx* __restrict c) {
  trace_call(0x802161FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802161FC
  c->r[0]=c->lr; // 80216200
  W32(c->r[1]+0x00000014u,c->r[0]); // 80216204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80216208
  c->r[31]=c->r[3]|c->r[3]; // 8021620C
  c->lr=0x80216214u; f_801AFA04(c); // 80216210
  c->r[4]=0u+0x80410000u; // 80216214
  c->r[3]=c->r[31]+0x0000255Cu; // 80216218
  c->r[4]=c->r[4]+0xFFFFC51Cu; // 8021621C
  c->r[0]=c->r[4]+0x00000040u; // 80216220
  W32(c->r[31]+0x00000010u,c->r[4]); // 80216224
  W32(c->r[31]+0x00000048u,c->r[0]); // 80216228
  c->lr=0x80216230u; f_801ABEE0(c); // 8021622C
  c->r[0]=0u+0x00000001u; // 80216230
  c->r[3]=c->r[31]|c->r[31]; // 80216234
  W8(c->r[31]+0x00002564u,c->r[0]); // 80216238
  W8(c->r[31]+0x00002760u,c->r[0]); // 8021623C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80216240
  c->r[0]=R32(c->r[1]+0x00000014u); // 80216244
  c->lr=c->r[0]; // 80216248
  c->r[1]=c->r[1]+0x00000010u; // 8021624C
  return; // 80216250
}

// fn_80216254
void f_80216254(Ctx* __restrict c) {
  trace_call(0x80216254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80216254
  c->r[0]=c->lr; // 80216258
  cmps(c,0,(int32_t)c->r[3],0); // 8021625C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80216260
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80216264
  c->r[30]=c->r[3]|c->r[3]; // 80216268
  c->r[31]=c->r[4]|c->r[4]; // 8021626C
  if (crb(c,2)) { goto L_8021628C; } // 80216270
  c->r[4]=0u+0x00000000u; // 80216274
  c->lr=0x8021627Cu; f_80185EBC(c); // 80216278
  cmps(c,0,(int32_t)c->r[31],0); // 8021627C
  if (!crb(c,1)) { goto L_8021628C; } // 80216280
  c->r[3]=c->r[30]|c->r[30]; // 80216284
  c->lr=0x8021628Cu; f_802896EC(c); // 80216288
L_8021628C:;
  c->r[3]=c->r[30]|c->r[30]; // 8021628C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80216290
  c->r[0]=R32(c->r[1]+0x00000014u); // 80216294
  c->lr=c->r[0]; // 80216298
  c->r[1]=c->r[1]+0x00000010u; // 8021629C
  return; // 802162A0
}

// fn_802162A4
void f_802162A4(Ctx* __restrict c) {
  trace_call(0x802162A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802162A4
  c->r[0]=c->lr; // 802162A8
  W32(c->r[1]+0x00000064u,c->r[0]); // 802162AC
  c->r[11]=c->r[1]+0x00000060u; // 802162B0
  c->lr=0x802162B8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802162B4
  c->r[31]=c->r[1]|c->r[1]; // 802162B8
  c->r[5]=0u+0x00000000u; // 802162BC
  c->r[0]=0u+0x00000001u; // 802162C0
  W32(c->r[3]+0x00002758u,c->r[5]); // 802162C4
  c->r[30]=c->r[3]|c->r[3]; // 802162C8
  c->r[4]=R32(c->r[3]+0x000008D8u); // 802162CC
  c->r[27]=0u+0x00000000u; // 802162D0
  W32(c->r[3]+0x000026FCu,c->r[0]); // 802162D4
  W32(c->r[3]+0x00002704u,c->r[5]); // 802162D8
  W32(c->r[3]+0x00002700u,c->r[5]); // 802162DC
  W32(c->r[3]+0x00002708u,c->r[5]); // 802162E0
  W32(c->r[3]+0x0000270Cu,c->r[5]); // 802162E4
  W8(c->r[3]+0x00001F60u,c->r[5]); // 802162E8
  W8(c->r[3]+0x00001F63u,c->r[5]); // 802162EC
  W8(c->r[3]+0x00001F5Fu,c->r[5]); // 802162F0
  W8(c->r[3]+0x00001F61u,c->r[5]); // 802162F4
  W8(c->r[3]+0x00001F64u,c->r[5]); // 802162F8
  W8(c->r[3]+0x00001F65u,c->r[5]); // 802162FC
  W8(c->r[3]+0x00001F66u,c->r[5]); // 80216300
  c->r[0]=R32(c->r[4]+0x000000E8u); // 80216304
  c->r[3]=R32(c->r[2]+0xFFFFCD34u); // 80216308
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8021630C
  W32(c->r[31]+0x00000014u,c->r[3]); // 80216310
  W32(c->r[31]+0x00000010u,c->r[0]); // 80216314
  goto L_802163F8; // 80216318
L_8021631C:;
  c->r[28]=rotl(c->r[27],2)&0xFFFFFFFCu; // 8021631C
  c->r[29]=c->r[31]+0x00000014u; // 80216320
  c->r[26]=0u+0x00000000u; // 80216324
  goto L_802163E4; // 80216328
L_8021632C:;
  c->r[4]=c->r[26]|c->r[26]; // 8021632C
  c->r[3]=c->r[31]+0x00000010u; // 80216330
  c->lr=0x80216338u; f_80365C28(c); // 80216334
  cmps(c,0,(int32_t)c->r[3],0); // 80216338
  W32(c->r[31]+0x00000008u,c->r[3]); // 8021633C
  if (!crb(c,2)) { goto L_80216368; } // 80216340
  c->r[3]=0u+0x803F0000u; // 80216344
  c->r[5]=0u+0x803F0000u; // 80216348
  c->r[3]=c->r[3]+0x000018B0u; // 8021634C
  c->r[4]=0u+0x00000029u; // 80216350
  c->r[5]=c->r[5]+0x00001894u; // 80216354
  c->r[6]=c->r[13]+0xFFFF8048u; // 80216358
  c->r[7]=c->r[13]+0xFFFF8B38u; // 8021635C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80216360
  c->lr=0x80216368u; f_803444BC(c); // 80216364
L_80216368:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80216368
  c->r[0]=R32(c->r[3]+0x00000008u); // 8021636C
  cmps(c,0,(int32_t)c->r[0],0); // 80216370
  if (crb(c,2)) { goto L_80216380; } // 80216374
  c->r[3]=c->r[3]+c->r[0]; // 80216378
  goto L_80216384; // 8021637C
L_80216380:;
  c->r[3]=0u+0x00000000u; // 80216380
L_80216384:;
  c->r[4]=R32(c->r[29]+c->r[28]); // 80216384
  c->lr=0x8021638Cu; f_80293554(c); // 80216388
  cmps(c,0,(int32_t)c->r[3],0); // 8021638C
  if (!crb(c,2)) { goto L_802163E0; } // 80216390
  c->r[0]=R32(c->r[31]+0x00000008u); // 80216394
  cmps(c,0,(int32_t)c->r[0],0); // 80216398
  if (!crb(c,2)) { goto L_802163BC; } // 8021639C
  c->r[3]=0u+0x803F0000u; // 802163A0
  c->r[5]=0u+0x803F0000u; // 802163A4
  c->r[3]=c->r[3]+0x000018E8u; // 802163A8
  c->r[4]=0u+0x00000035u; // 802163AC
  c->r[5]=c->r[5]+0x000018C8u; // 802163B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802163B4
  c->lr=0x802163BCu; f_803444BC(c); // 802163B8
L_802163BC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 802163BC
  cmps(c,0,(int32_t)c->r[3],0); // 802163C0
  if (crb(c,2)) { goto L_802163D0; } // 802163C4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802163C8
  goto L_802163D4; // 802163CC
L_802163D0:;
  c->r[0]=0u+0x00000000u; // 802163D0
L_802163D4:;
  c->r[3]=c->r[30]+c->r[28]; // 802163D4
  W32(c->r[3]+0x00002550u,c->r[0]); // 802163D8
  goto L_802163F4; // 802163DC
L_802163E0:;
  c->r[26]=c->r[26]+0x00000001u; // 802163E0
L_802163E4:;
  c->r[3]=c->r[31]+0x00000010u; // 802163E4
  c->lr=0x802163ECu; f_80365CD0(c); // 802163E8
  cmpu(c,0,c->r[26],c->r[3]); // 802163EC
  if (crb(c,0)) { IRQCHK(c); goto L_8021632C; } // 802163F0
L_802163F4:;
  c->r[27]=c->r[27]+0x00000001u; // 802163F4
L_802163F8:;
  cmps(c,0,(int32_t)c->r[27],1); // 802163F8
  if (crb(c,0)) { IRQCHK(c); goto L_8021631C; } // 802163FC
  c->r[0]=R32(c->r[30]+0x000007E4u); // 80216400
  c->r[3]=c->r[30]+0x000008ECu; // 80216404
  c->r[0]=c->r[0]|0x00000001u; // 80216408
  W32(c->r[30]+0x000007E4u,c->r[0]); // 8021640C
  c->r[4]=R32(c->r[13]+0xFFFF8BD0u); // 80216410
  c->lr=0x80216418u; f_80075440(c); // 80216414
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216418
  c->r[4]=c->r[3]|c->r[3]; // 8021641C
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80216420
  c->r[3]=c->r[30]+0x000008D0u; // 80216424
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80216428
  c->r[5]=0u+0x00000000u; // 8021642C
  c->r[6]=0u+0xFFFFFFFFu; // 80216430
  c->r[7]=0u+0x00000000u; // 80216434
  c->lr=0x8021643Cu; f_8002D7B8(c); // 80216438
  c->r[3]=R32(c->r[30]+0x00000054u); // 8021643C
  cmps(c,0,(int32_t)c->r[3],0); // 80216440
  if (crb(c,2)) { goto L_802164A4; } // 80216444
  c->r[12]=R32(c->r[3]+0x00000000u); // 80216448
  c->r[12]=R32(c->r[12]+0x00000010u); // 8021644C
  c->ctr=c->r[12]; // 80216450
  if (true) { c->lr=0x80216458u; dispatch(c,c->ctr); } // 80216454
  c->lr=0x8021645Cu; f_8007A658(c); // 80216458
  c->r[29]=c->r[3]|c->r[3]; // 8021645C
  c->r[3]=0u+0x00000001u; // 80216460
  c->lr=0x80216468u; f_8007A658(c); // 80216464
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80216468
  if (!crb(c,1)) { goto L_8021649C; } // 8021646C
  c->r[29]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[29]); // 80216470
  if (crb(c,2)) { goto L_80216494; } // 80216474
  W32(c->r[31]+0x00000044u,c->r[1]); // 80216478
  c->r[3]=c->r[29]|c->r[29]; // 8021647C
  c->r[4]=c->r[13]+0xFFFF80C5u; // 80216480
  c->lr=0x80216488u; f_800761D8(c); // 80216484
  c->r[3]=0u+0x803F0000u; // 80216488
  c->r[3]=c->r[3]+0x00003224u; // 8021648C
  W32(c->r[29]+0x00000000u,c->r[3]); // 80216490
L_80216494:;
  W32(c->r[30]+0x00000058u,c->r[29]); // 80216494
  goto L_802164EC; // 80216498
L_8021649C:;
  c->r[0]=0u+0x00000000u; // 8021649C
  W32(c->r[30]+0x00000054u,c->r[0]); // 802164A0
L_802164A4:;
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 802164A4
  c->r[0]=c->r[3]+0x00000001u; // 802164A8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802164AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 802164B0
  c->r[0]=c->r[0]^c->r[3]; // 802164B4
  c->r[0]=c->r[0]-c->r[3]; // 802164B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)272); // 802164BC
  c->r[0]=c->r[30]+c->r[0]; // 802164C0
  c->r[29]=addc(c,c->r[0],0x00000060u,0); cr0(c,c->r[29]); // 802164C4
  if (crb(c,2)) { goto L_802164E8; } // 802164C8
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 802164CC
  c->r[3]=c->r[29]|c->r[29]; // 802164D0
  c->r[4]=c->r[13]+0xFFFF80C5u; // 802164D4
  c->lr=0x802164DCu; f_800761D8(c); // 802164D8
  c->r[3]=0u+0x803F0000u; // 802164DC
  c->r[3]=c->r[3]+0x00003224u; // 802164E0
  W32(c->r[29]+0x00000000u,c->r[3]); // 802164E4
L_802164E8:;
  W32(c->r[30]+0x00000054u,c->r[29]); // 802164E8
L_802164EC:;
  c->r[10]=c->r[31]|c->r[31]; // 802164EC
  c->r[11]=c->r[10]+0x00000060u; // 802164F0
  c->lr=0x802164F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802164F4
  c->r[10]=R32(c->r[1]+0x00000000u); // 802164F8
  c->r[0]=R32(c->r[10]+0x00000004u); // 802164FC
  c->r[1]=c->r[10]|c->r[10]; // 80216500
  c->lr=c->r[0]; // 80216504
  return; // 80216508
}

// fn_8021650C
void f_8021650C(Ctx* __restrict c) {
  trace_call(0x8021650Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021650C
  c->r[0]=c->lr; // 80216510
  W32(c->r[1]+0x00000044u,c->r[0]); // 80216514
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80216518
  c->r[31]=c->r[3]|c->r[3]; // 8021651C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80216520
  c->r[30]=0u+0x00000000u; // 80216524
  c->lr=0x8021652Cu; f_801AFF98(c); // 80216528
  c->r[0]=R32(c->r[31]+0x0000255Cu); // 8021652C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80216530
  if (crb(c,2)) { goto L_8021653C; } // 80216534
  c->r[30]=0u+0x00000001u; // 80216538
L_8021653C:;
  c->r[3]=c->r[31]+0x0000255Cu; // 8021653C
  c->lr=0x80216544u; f_801AC25C(c); // 80216540
  c->r[0]=R32(c->r[31]+0x0000255Cu); // 80216544
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80216548
  if (!crb(c,2)) { goto L_80216560; } // 8021654C
  cmpu(c,0,c->r[30],0x00000001u); // 80216550
  if (!crb(c,2)) { goto L_80216560; } // 80216554
  c->r[3]=c->r[31]|c->r[31]; // 80216558
  c->lr=0x80216560u; f_8018615C(c); // 8021655C
L_80216560:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80216560
  c->r[3]=c->r[31]+0x000008D0u; // 80216564
  c->r[4]=c->r[31]+0x0000256Cu; // 80216568
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8021656C
  c->ctr=c->r[12]; // 80216570
  if (true) { c->lr=0x80216578u; dispatch(c,c->ctr); } // 80216574
  c->r[5]=0u+0x803E0000u; // 80216578
  {uint32_t ea=c->r[5]+0x00002B68u; c->r[4]=R32(ea); c->r[5]=ea;} // 8021657C
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80216580
  c->r[3]=R32(c->r[5]+0x00000004u); // 80216584
  c->r[0]=R32(c->r[5]+0x00000008u); // 80216588
  W32(c->r[1]+0x00000024u,c->r[4]); // 8021658C
  W32(c->r[1]+0x00000028u,c->r[3]); // 80216590
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80216594
  {uint32_t ea=c->r[31]+0x00000880u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216598
  fcmp(c,0,c->f[1],c->f[0]); // 8021659C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802165A0
  if (!crb(c,2)) { goto L_802165EC; } // 802165A4
  c->r[3]=c->r[31]|c->r[31]; // 802165A8
  c->lr=0x802165B0u; f_801861BC(c); // 802165AC
  c->r[5]=c->r[1]+0x00000024u; // 802165B0
  c->r[4]=0u+0x00000003u; // 802165B4
  c->lr=0x802165BCu; f_8020C03C(c); // 802165B8
  cmps(c,0,(int32_t)c->r[3],0); // 802165BC
  if (crb(c,2)) { goto L_802165EC; } // 802165C0
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802165C4
  c->r[3]=c->r[1]+0x00000008u; // 802165C8
  c->f[2]=c->f[1]; // 802165CC
  c->f[3]=c->f[1]; // 802165D0
  c->lr=0x802165D8u; f_800521A0(c); // 802165D4
  c->r[5]=c->r[3]|c->r[3]; // 802165D8
  c->r[3]=c->r[31]+0x000008D0u; // 802165DC
  c->r[4]=0u+0x00000001u; // 802165E0
  c->lr=0x802165E8u; f_80032208(c); // 802165E4
  goto L_802165F4; // 802165E8
L_802165EC:;
  c->r[3]=c->r[31]+0x000008D0u; // 802165EC
  c->lr=0x802165F4u; f_800322B0(c); // 802165F0
L_802165F4:;
  c->r[7]=0u+0x803E0000u; // 802165F4
  {uint32_t ea=c->r[7]+0x00002B74u; c->r[6]=R32(ea); c->r[7]=ea;} // 802165F8
  c->r[3]=c->r[31]|c->r[31]; // 802165FC
  c->r[5]=R32(c->r[7]+0x00000004u); // 80216600
  c->r[4]=R32(c->r[7]+0x00000008u); // 80216604
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 80216608
  W32(c->r[1]+0x00000014u,c->r[6]); // 8021660C
  W32(c->r[1]+0x00000018u,c->r[5]); // 80216610
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 80216614
  W32(c->r[1]+0x00000020u,c->r[0]); // 80216618
  c->lr=0x80216620u; f_801861BC(c); // 8021661C
  c->r[5]=c->r[1]+0x00000014u; // 80216620
  c->r[4]=0u+0x00000004u; // 80216624
  c->lr=0x8021662Cu; f_8020C03C(c); // 80216628
  cmps(c,0,(int32_t)c->r[3],0); // 8021662C
  if (crb(c,2)) { goto L_80216640; } // 80216630
  c->r[3]=c->r[31]|c->r[31]; // 80216634
  c->lr=0x8021663Cu; f_800B5FA4(c); // 80216638
  goto L_80216648; // 8021663C
L_80216640:;
  c->r[3]=c->r[31]|c->r[31]; // 80216640
  c->lr=0x80216648u; f_800B6020(c); // 80216644
L_80216648:;
  c->r[3]=c->r[31]|c->r[31]; // 80216648
  c->lr=0x80216650u; f_801861BC(c); // 8021664C
  c->r[4]=0u+0x803E0000u; // 80216650
  c->r[5]=0u+0xFFFFFFFFu; // 80216654
  c->r[4]=c->r[4]+0x00002B84u; // 80216658
  c->lr=0x80216660u; f_800A5548(c); // 8021665C
  cmps(c,0,(int32_t)c->r[3],0); // 80216660
  if (crb(c,2)) { goto L_802166B4; } // 80216664
  c->r[3]=R32(c->r[31]+0x00000974u); // 80216668
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021666C
  c->lr=0x80216674u; f_800752CC(c); // 80216670
  {uint32_t ea=c->r[2]+0xFFFFCD48u; c->f[0]=c->ps1[0]=RF32(ea);} // 80216674
  fcmp(c,0,c->f[1],c->f[0]); // 80216678
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021667C
  if (!crb(c,2)) { goto L_802166B4; } // 80216680
  c->r[0]=R8(c->r[31]+0x00002760u); // 80216684
  cmpu(c,0,c->r[0],0x00000001u); // 80216688
  if (!crb(c,2)) { goto L_802166E0; } // 8021668C
  c->r[3]=c->r[31]+0x000008D0u; // 80216690
  c->r[4]=0u+0x00000003u; // 80216694
  c->lr=0x8021669Cu; f_80032330(c); // 80216698
  c->r[3]=c->r[31]+0x000008D0u; // 8021669C
  c->r[4]=0u+0x00000004u; // 802166A0
  c->lr=0x802166A8u; f_80032330(c); // 802166A4
  c->r[0]=0u+0x00000000u; // 802166A8
  W8(c->r[31]+0x00002760u,c->r[0]); // 802166AC
  goto L_802166E0; // 802166B0
L_802166B4:;
  c->r[0]=R8(c->r[31]+0x00002760u); // 802166B4
  cmps(c,0,(int32_t)c->r[0],0); // 802166B8
  if (!crb(c,2)) { goto L_802166E0; } // 802166BC
  c->r[3]=c->r[31]+0x000008D0u; // 802166C0
  c->r[4]=0u+0x00000003u; // 802166C4
  c->lr=0x802166CCu; f_80032310(c); // 802166C8
  c->r[3]=c->r[31]+0x000008D0u; // 802166CC
  c->r[4]=0u+0x00000004u; // 802166D0
  c->lr=0x802166D8u; f_80032310(c); // 802166D4
  c->r[0]=0u+0x00000001u; // 802166D8
  W8(c->r[31]+0x00002760u,c->r[0]); // 802166DC
L_802166E0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 802166E0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802166E4
  c->r[30]=R32(c->r[1]+0x00000038u); // 802166E8
  c->lr=c->r[0]; // 802166EC
  c->r[1]=c->r[1]+0x00000040u; // 802166F0
  return; // 802166F4
}

// fn_802166F8
void f_802166F8(Ctx* __restrict c) {
  trace_call(0x802166F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802166F8
  c->r[0]=c->lr; // 802166FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80216700
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80216704
  c->r[31]=c->r[3]|c->r[3]; // 80216708
  c->r[3]=c->r[1]+0x00000008u; // 8021670C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80216710
  c->r[4]=c->r[31]+0x000008D0u; // 80216714
  c->r[12]=R32(c->r[12]+0x00000040u); // 80216718
  c->ctr=c->r[12]; // 8021671C
  if (true) { c->lr=0x80216724u; dispatch(c,c->ctr); } // 80216720
  c->r[3]=c->r[31]+0x0000255Cu; // 80216724
  c->r[4]=c->r[1]+0x00000008u; // 80216728
  c->lr=0x80216730u; f_801ABF6C(c); // 8021672C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80216730
  {uint32_t ea=c->r[31]+0x000025A8u; WF32(ea,c->f[0]);} // 80216734
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80216738
  c->r[0]=R32(c->r[1]+0x00000044u); // 8021673C
  c->lr=c->r[0]; // 80216740
  c->r[1]=c->r[1]+0x00000040u; // 80216744
  return; // 80216748
}

// fn_8021674C
void f_8021674C(Ctx* __restrict c) {
  trace_call(0x8021674Cu);
  f_800AC7C4(c); return; // 8021674C
}

// fn_80216750
void f_80216750(Ctx* __restrict c) {
  trace_call(0x80216750u);
  return; // 80216750
}

// fn_80216754
void f_80216754(Ctx* __restrict c) {
  trace_call(0x80216754u);
  return; // 80216754
}

// fn_80216758
void f_80216758(Ctx* __restrict c) {
  trace_call(0x80216758u);
  return; // 80216758
}

// fn_8021675C
void f_8021675C(Ctx* __restrict c) {
  trace_call(0x8021675Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021675C
  c->r[0]=c->lr; // 80216760
  W32(c->r[1]+0x00000044u,c->r[0]); // 80216764
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80216768
  c->r[31]=c->r[3]|c->r[3]; // 8021676C
  c->r[3]=c->r[1]+0x00000008u; // 80216770
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80216774
  c->r[4]=c->r[31]+0x000008D0u; // 80216778
  c->r[12]=R32(c->r[12]+0x00000040u); // 8021677C
  c->ctr=c->r[12]; // 80216780
  if (true) { c->lr=0x80216788u; dispatch(c,c->ctr); } // 80216784
  c->r[3]=c->r[31]+0x0000255Cu; // 80216788
  c->r[4]=c->r[1]+0x00000008u; // 8021678C
  c->lr=0x80216794u; f_801ABF6C(c); // 80216790
  c->r[0]=R32(c->r[31]+0x00002708u); // 80216794
  cmps(c,0,(int32_t)c->r[0],1); // 80216798
  if (crb(c,2)) { goto L_802167D8; } // 8021679C
  if (!crb(c,0)) { goto L_802167B0; } // 802167A0
  cmps(c,0,(int32_t)c->r[0],0); // 802167A4
  if (!crb(c,0)) { goto L_802167BC; } // 802167A8
  goto L_802168D0; // 802167AC
L_802167B0:;
  cmps(c,0,(int32_t)c->r[0],3); // 802167B0
  if (!crb(c,0)) { goto L_802168D0; } // 802167B4
  goto L_802167FC; // 802167B8
L_802167BC:;
  c->r[3]=R32(c->r[13]+0xFFFF8B3Cu); // 802167BC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802167C0
  c->lr=0x802167C8u; f_801138D4(c); // 802167C4
  c->r[3]=R32(c->r[31]+0x00002708u); // 802167C8
  c->r[0]=c->r[3]+0x00000001u; // 802167CC
  W32(c->r[31]+0x00002708u,c->r[0]); // 802167D0
  goto L_802168D0; // 802167D4
L_802167D8:;
  c->r[3]=c->r[31]|c->r[31]; // 802167D8
  c->lr=0x802167E0u; f_80218CA4(c); // 802167DC
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802167E0
  fcmp(c,0,c->f[0],c->f[1]); // 802167E4
  if (!crb(c,2)) { goto L_802168D0; } // 802167E8
  c->r[3]=R32(c->r[31]+0x00002708u); // 802167EC
  c->r[0]=c->r[3]+0x00000001u; // 802167F0
  W32(c->r[31]+0x00002708u,c->r[0]); // 802167F4
  goto L_802168D0; // 802167F8
L_802167FC:;
  c->r[0]=R32(c->r[31]+0x000026FCu); // 802167FC
  c->r[4]=0u+0x80410000u; // 80216800
  c->r[4]=c->r[4]+0xFFFFC420u; // 80216804
  c->r[3]=c->r[31]|c->r[31]; // 80216808
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8021680C
  c->r[12]=c->r[4]+c->r[0]; // 80216810
  c->lr=0x80216818u; f_80289CA4(c); // 80216814
  c->r[0]=c->r[0]|0x00000000u; // 80216818
  cmpu(c,0,c->r[3],0x00000001u); // 8021681C
  if (!crb(c,2)) { goto L_802168D0; } // 80216820
  c->r[4]=R32(c->r[31]+0x000026FCu); // 80216824
  c->r[4]=c->r[4]+0x00000001u; // 80216828
  cmps(c,0,(int32_t)c->r[4],4); // 8021682C
  if (crb(c,2)) { goto L_80216858; } // 80216830
  if (!crb(c,0)) { goto L_80216844; } // 80216834
  cmps(c,0,(int32_t)c->r[4],2); // 80216838
  if (crb(c,2)) { goto L_80216850; } // 8021683C
  goto L_8021689C; // 80216840
L_80216844:;
  cmps(c,0,(int32_t)c->r[4],6); // 80216844
  if (crb(c,2)) { goto L_8021686C; } // 80216848
  goto L_8021689C; // 8021684C
L_80216850:;
  c->r[4]=c->r[4]+0x00000001u; // 80216850
  goto L_8021689C; // 80216854
L_80216858:;
  c->r[0]=R8(c->r[31]+0x00001F61u); // 80216858
  cmpu(c,0,c->r[0],0x00000001u); // 8021685C
  if (!crb(c,2)) { goto L_8021689C; } // 80216860
  c->r[4]=c->r[4]+0x00000001u; // 80216864
  goto L_8021689C; // 80216868
L_8021686C:;
  c->r[3]=R32(c->r[31]+0x00002700u); // 8021686C
  c->r[0]=c->r[3]+0x00000001u; // 80216870
  cmps(c,0,(int32_t)c->r[0],4); // 80216874
  W32(c->r[31]+0x00002700u,c->r[0]); // 80216878
  if (crb(c,0)) { goto L_80216888; } // 8021687C
  c->r[0]=0u+0x00000000u; // 80216880
  W32(c->r[31]+0x00002700u,c->r[0]); // 80216884
L_80216888:;
  c->r[3]=R32(c->r[31]+0x00002700u); // 80216888
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8021688C
  c->r[0]=cntlz(c->r[0]); // 80216890
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80216894
  c->r[4]=c->r[3]+0x00000001u; // 80216898
L_8021689C:;
  c->r[0]=R8(c->r[31]+0x00001F64u); // 8021689C
  c->r[3]=0u+0x00000000u; // 802168A0
  W32(c->r[31]+0x000026FCu,c->r[4]); // 802168A4
  cmps(c,0,(int32_t)c->r[0],0); // 802168A8
  W32(c->r[31]+0x00002704u,c->r[3]); // 802168AC
  if (!crb(c,2)) { goto L_802168D0; } // 802168B0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802168B4
  c->r[4]=0u+0x80410000u; // 802168B8
  c->r[3]=c->r[31]|c->r[31]; // 802168BC
  c->r[4]=c->r[4]+0xFFFFC420u; // 802168C0
  c->r[12]=c->r[4]+c->r[0]; // 802168C4
  c->lr=0x802168CCu; f_80289CA4(c); // 802168C8
  c->r[0]=c->r[0]|0x00000000u; // 802168CC
L_802168D0:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 802168D0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802168D4
  c->lr=c->r[0]; // 802168D8
  c->r[1]=c->r[1]+0x00000040u; // 802168DC
  return; // 802168E0
}

// fn_802168E4
void f_802168E4(Ctx* __restrict c) {
  trace_call(0x802168E4u);
  return; // 802168E4
}

// fn_802168E8
void f_802168E8(Ctx* __restrict c) {
  trace_call(0x802168E8u);
  return; // 802168E8
}

// fn_802168EC
void f_802168EC(Ctx* __restrict c) {
  trace_call(0x802168ECu);
  return; // 802168EC
}

// fn_802168F0
void f_802168F0(Ctx* __restrict c) {
  trace_call(0x802168F0u);
  return; // 802168F0
}

// fn_802168F4
void f_802168F4(Ctx* __restrict c) {
  trace_call(0x802168F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802168F4
  c->r[0]=c->lr; // 802168F8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802168FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80216900
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80216904
  c->r[31]=c->r[3]|c->r[3]; // 80216908
  c->r[4]=R32(c->r[3]+0x00000974u); // 8021690C
  c->r[3]=R32(c->r[4]+0x00000000u); // 80216910
  c->lr=0x80216918u; f_8016498C(c); // 80216914
  cmps(c,0,(int32_t)c->r[3],0); // 80216918
  if (crb(c,2)) { goto L_80216928; } // 8021691C
  c->r[3]=c->r[31]|c->r[31]; // 80216920
  c->lr=0x80216928u; f_800AC7C4(c); // 80216924
L_80216928:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80216928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021692C
  c->lr=c->r[0]; // 80216930
  c->r[1]=c->r[1]+0x00000010u; // 80216934
  return; // 80216938
}

// fn_8021693C
void f_8021693C(Ctx* __restrict c) {
  trace_call(0x8021693Cu);
  return; // 8021693C
}

// fn_80216940
void f_80216940(Ctx* __restrict c) {
  trace_call(0x80216940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80216940
  c->r[0]=c->lr; // 80216944
  c->r[4]=0u+0x803E0000u; // 80216948
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021694C
  c->r[4]=c->r[4]+0x00002B84u; // 80216950
  c->r[4]=c->r[4]+0x00000009u; // 80216954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80216958
  c->r[31]=c->r[3]|c->r[3]; // 8021695C
  c->lr=0x80216964u; f_801B0AA8(c); // 80216960
  c->r[4]=R32(c->r[13]+0xFFFF8BD0u); // 80216964
  c->r[3]=c->r[31]+0x000008ECu; // 80216968
  c->lr=0x80216970u; f_80075440(c); // 8021696C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216970
  c->r[4]=c->r[3]|c->r[3]; // 80216974
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80216978
  c->r[3]=c->r[31]+0x000008D0u; // 8021697C
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80216980
  c->r[5]=0u+0x00000000u; // 80216984
  c->r[6]=0u+0xFFFFFFFFu; // 80216988
  c->r[7]=0u+0x00000000u; // 8021698C
  c->lr=0x80216994u; f_8002D7B8(c); // 80216990
  c->r[0]=R32(c->r[1]+0x00000014u); // 80216994
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80216998
  c->lr=c->r[0]; // 8021699C
  c->r[1]=c->r[1]+0x00000010u; // 802169A0
  return; // 802169A4
}

// fn_802169A8
void f_802169A8(Ctx* __restrict c) {
  trace_call(0x802169A8u);
  return; // 802169A8
}

// fn_802169AC
void f_802169AC(Ctx* __restrict c) {
  trace_call(0x802169ACu);
  return; // 802169AC
}

// fn_802169B0
void f_802169B0(Ctx* __restrict c) {
  trace_call(0x802169B0u);
  return; // 802169B0
}

// fn_802169B4
void f_802169B4(Ctx* __restrict c) {
  trace_call(0x802169B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802169B4
  c->r[0]=c->lr; // 802169B8
  W32(c->r[1]+0x00000064u,c->r[0]); // 802169BC
  c->r[11]=c->r[1]+0x00000060u; // 802169C0
  c->lr=0x802169C8u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802169C4
  c->r[29]=c->r[3]|c->r[3]; // 802169C8
  c->r[3]=c->r[1]+0x00000014u; // 802169CC
  c->r[12]=R32(c->r[29]+0x000008D0u); // 802169D0
  c->r[4]=c->r[29]+0x000008D0u; // 802169D4
  c->r[12]=R32(c->r[12]+0x00000040u); // 802169D8
  c->ctr=c->r[12]; // 802169DC
  if (true) { c->lr=0x802169E4u; dispatch(c,c->ctr); } // 802169E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802169E4
  c->r[3]=c->r[1]+0x00000008u; // 802169E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802169EC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 802169F0
  c->lr=0x802169F8u; f_800521A0(c); // 802169F4
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 802169F8
  c->lr=0x80216A00u; f_800F39EC(c); // 802169FC
  c->r[4]=0u+0xFFFFFFFFu; // 80216A00
  c->lr=0x80216A08u; f_800DB6F8(c); // 80216A04
  c->r[4]=0u+0x803E0000u; // 80216A08
  c->r[3]=c->r[29]|c->r[29]; // 80216A0C
  c->r[4]=c->r[4]+0x00002B84u; // 80216A10
  c->r[4]=c->r[4]+0x0000000Fu; // 80216A14
  c->lr=0x80216A1Cu; f_801B0AA8(c); // 80216A18
  c->r[3]=R32(c->r[29]+0x00000974u); // 80216A1C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80216A20
  c->lr=0x80216A28u; f_800C4CC4(c); // 80216A24
  c->r[31]=R32(c->r[13]+0xFFFF8C24u); // 80216A28
  c->r[30]=c->r[3]|c->r[3]; // 80216A2C
  c->r[4]=c->r[31]|c->r[31]; // 80216A30
  c->lr=0x80216A38u; f_80293554(c); // 80216A34
  cmps(c,0,(int32_t)c->r[3],0); // 80216A38
  if (crb(c,2)) { goto L_80216A64; } // 80216A3C
  c->r[4]=R32(c->r[13]+0xFFFF8C18u); // 80216A40
  c->r[3]=c->r[30]|c->r[30]; // 80216A44
  c->lr=0x80216A4Cu; f_80293554(c); // 80216A48
  cmps(c,0,(int32_t)c->r[3],0); // 80216A4C
  if (crb(c,2)) { goto L_80216A64; } // 80216A50
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80216A54
  {uint32_t ea=c->r[2]+0xFFFFCD4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80216A58
  fcmp(c,0,c->f[1],c->f[0]); // 80216A5C
  if (!crb(c,1)) { goto L_80216AB0; } // 80216A60
L_80216A64:;
  c->r[4]=R32(c->r[13]+0xFFFF8C18u); // 80216A64
  c->r[3]=c->r[30]|c->r[30]; // 80216A68
  c->lr=0x80216A70u; f_80293554(c); // 80216A6C
  cmps(c,0,(int32_t)c->r[3],0); // 80216A70
  if (!crb(c,2)) { goto L_80216AA4; } // 80216A74
  c->r[4]=c->r[31]|c->r[31]; // 80216A78
  c->r[3]=c->r[29]+0x000008ECu; // 80216A7C
  c->lr=0x80216A84u; f_80075440(c); // 80216A80
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216A84
  c->r[5]=c->r[3]|c->r[3]; // 80216A88
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216A8C
  c->r[3]=c->r[29]+0x00000C88u; // 80216A90
  c->r[4]=c->r[29]+0x000008ECu; // 80216A94
  c->r[6]=0u+0x00000000u; // 80216A98
  c->r[7]=0u+0x00000000u; // 80216A9C
  c->lr=0x80216AA4u; f_800BB0C8(c); // 80216AA0
L_80216AA4:;
  c->r[0]=0u+0x00000000u; // 80216AA4
  W32(c->r[29]+0x00002704u,c->r[0]); // 80216AA8
  goto L_80216AE4; // 80216AAC
L_80216AB0:;
  c->r[0]=0u+0x00000001u; // 80216AB0
  c->r[3]=c->r[29]+0x000008ECu; // 80216AB4
  W32(c->r[29]+0x00002704u,c->r[0]); // 80216AB8
  c->r[4]=R32(c->r[13]+0xFFFF8BD0u); // 80216ABC
  c->lr=0x80216AC4u; f_80075440(c); // 80216AC0
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216AC4
  c->r[5]=c->r[3]|c->r[3]; // 80216AC8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216ACC
  c->r[3]=c->r[29]+0x00000C88u; // 80216AD0
  c->r[4]=c->r[29]+0x000008ECu; // 80216AD4
  c->r[6]=0u+0x00000000u; // 80216AD8
  c->r[7]=0u+0x00000000u; // 80216ADC
  c->lr=0x80216AE4u; f_800BB0C8(c); // 80216AE0
L_80216AE4:;
  c->r[11]=c->r[1]+0x00000060u; // 80216AE4
  c->lr=0x80216AECu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80216AE8
  c->r[0]=R32(c->r[1]+0x00000064u); // 80216AEC
  c->lr=c->r[0]; // 80216AF0
  c->r[1]=c->r[1]+0x00000060u; // 80216AF4
  return; // 80216AF8
}

// fn_80216AFC
void f_80216AFC(Ctx* __restrict c) {
  trace_call(0x80216AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 80216AFC
  c->r[0]=c->lr; // 80216B00
  W32(c->r[1]+0x00000094u,c->r[0]); // 80216B04
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 80216B08
  c->r[31]=c->r[3]|c->r[3]; // 80216B0C
  c->r[3]=c->r[1]+0x00000020u; // 80216B10
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80216B14
  c->r[4]=c->r[31]+0x000008D0u; // 80216B18
  c->r[12]=R32(c->r[12]+0x00000040u); // 80216B1C
  c->ctr=c->r[12]; // 80216B20
  if (true) { c->lr=0x80216B28u; dispatch(c,c->ctr); } // 80216B24
  c->r[3]=c->r[31]+0x0000255Cu; // 80216B28
  c->r[4]=c->r[1]+0x00000020u; // 80216B2C
  c->lr=0x80216B34u; f_801ABF6C(c); // 80216B30
  c->r[0]=R32(c->r[31]+0x00002704u); // 80216B34
  cmps(c,0,(int32_t)c->r[0],0); // 80216B38
  if (!crb(c,2)) { goto L_80216BDC; } // 80216B3C
  c->r[12]=R32(c->r[31]+0x000008D0u); // 80216B40
  c->r[4]=c->r[31]+0x000008D0u; // 80216B44
  c->r[3]=c->r[1]+0x00000050u; // 80216B48
  c->r[12]=R32(c->r[12]+0x00000040u); // 80216B4C
  c->ctr=c->r[12]; // 80216B50
  if (true) { c->lr=0x80216B58u; dispatch(c,c->ctr); } // 80216B54
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80216B58
  c->r[3]=c->r[1]+0x00000014u; // 80216B5C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80216B60
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80216B64
  c->lr=0x80216B6Cu; f_800521A0(c); // 80216B68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216B6C
  {uint32_t ea=c->r[2]+0xFFFFCD4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80216B70
  fcmp(c,0,c->f[1],c->f[0]); // 80216B74
  if (!crb(c,0)) { goto L_80216BDC; } // 80216B78
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80216B7C
  c->r[3]=c->r[1]+0x00000008u; // 80216B80
  c->r[4]=c->r[1]+0x00000014u; // 80216B84
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80216B88
  c->lr=0x80216B90u; f_8003F484(c); // 80216B8C
  c->r[4]=c->r[3]|c->r[3]; // 80216B90
  c->r[3]=c->r[31]+0x0000255Cu; // 80216B94
  c->lr=0x80216B9Cu; f_801AC10C(c); // 80216B98
  c->r[4]=R32(c->r[13]+0xFFFF8C28u); // 80216B9C
  c->r[3]=c->r[31]+0x000008ECu; // 80216BA0
  c->lr=0x80216BA8u; f_80075440(c); // 80216BA4
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216BA8
  c->r[5]=c->r[3]|c->r[3]; // 80216BAC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216BB0
  c->r[3]=c->r[31]+0x00000C88u; // 80216BB4
  c->r[4]=c->r[31]+0x000008ECu; // 80216BB8
  c->r[6]=0u+0x00000000u; // 80216BBC
  c->r[7]=0u+0x00000004u; // 80216BC0
  c->lr=0x80216BC8u; f_800BB0C8(c); // 80216BC4
  c->r[3]=c->r[31]|c->r[31]; // 80216BC8
  c->lr=0x80216BD0u; f_8018615C(c); // 80216BCC
  c->r[3]=R32(c->r[31]+0x00002704u); // 80216BD0
  c->r[0]=c->r[3]+0x00000001u; // 80216BD4
  W32(c->r[31]+0x00002704u,c->r[0]); // 80216BD8
L_80216BDC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 80216BDC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 80216BE0
  c->lr=c->r[0]; // 80216BE4
  c->r[1]=c->r[1]+0x00000090u; // 80216BE8
  return; // 80216BEC
}

// fn_80216BF0
void f_80216BF0(Ctx* __restrict c) {
  trace_call(0x80216BF0u);
  return; // 80216BF0
}

// fn_80216BF4
void f_80216BF4(Ctx* __restrict c) {
  trace_call(0x80216BF4u);
  return; // 80216BF4
}

// fn_80216BF8
void f_80216BF8(Ctx* __restrict c) {
  trace_call(0x80216BF8u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80216BF8
  c->r[0]=c->lr; // 80216BFC
  W32(c->r[1]+0x00000084u,c->r[0]); // 80216C00
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 80216C04
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 80216C08
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 80216C0C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 80216C10
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80216C14
  c->r[31]=c->r[3]|c->r[3]; // 80216C18
  W32(c->r[1]+0x00000058u,c->r[30]); // 80216C1C
  c->r[0]=R32(c->r[3]+0x00002704u); // 80216C20
  cmpu(c,0,c->r[0],0x00000007u); // 80216C24
  if (crb(c,1)) { goto L_802171C0; } // 80216C28
  c->r[4]=0u+0x80410000u; // 80216C2C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216C30
  c->r[4]=c->r[4]+0xFFFFC468u; // 80216C34
  c->r[4]=R32(c->r[4]+c->r[0]); // 80216C38
  c->ctr=c->r[4]; // 80216C3C
  if (true) { switch (c->ctr) { case 0x80216C44u: goto L_80216C44; case 0x80216D94u: goto L_80216D94; case 0x80216E18u: goto L_80216E18; case 0x80216EB8u: goto L_80216EB8; case 0x80216F5Cu: goto L_80216F5C; case 0x8021702Cu: goto L_8021702C; case 0x802170A4u: goto L_802170A4; case 0x80217160u: goto L_80217160; default: break; } dispatch(c,c->ctr); return; } // 80216C40
L_80216C44:;
  c->r[30]=0u+0x00000000u; // 80216C44
  c->r[4]=0u+0x00000001u; // 80216C48
  W8(c->r[3]+0x00001F5Fu,c->r[30]); // 80216C4C
  c->lr=0x80216C54u; f_80218930(c); // 80216C50
  c->r[0]=R32(c->r[31]+0x00002700u); // 80216C54
  W8(c->r[31]+0x00002755u,c->r[30]); // 80216C58
  cmps(c,0,(int32_t)c->r[0],3); // 80216C5C
  if (!crb(c,2)) { goto L_80216CE8; } // 80216C60
  c->r[4]=R32(c->r[13]+0xFFFF8BE0u); // 80216C64
  c->r[3]=c->r[31]+0x000008ECu; // 80216C68
  c->lr=0x80216C70u; f_80075440(c); // 80216C6C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216C70
  c->r[4]=c->r[3]|c->r[3]; // 80216C74
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80216C78
  c->r[3]=c->r[31]+0x000008D0u; // 80216C7C
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80216C80
  c->r[5]=0u+0x00000000u; // 80216C84
  c->r[6]=0u+0xFFFFFFFFu; // 80216C88
  c->r[7]=0u+0x00000000u; // 80216C8C
  c->lr=0x80216C94u; f_8002D7B8(c); // 80216C90
  c->r[0]=R32(c->r[31]+0x00002700u); // 80216C94
  c->r[5]=0u+0x803E0000u; // 80216C98
  c->r[4]=0u+0x80410000u; // 80216C9C
  c->r[3]=c->r[1]+0x00000044u; // 80216CA0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216CA4
  c->r[5]=c->r[5]+0x00002B48u; // 80216CA8
  c->r[0]=R32(c->r[5]+c->r[0]); // 80216CAC
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 80216CB0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80216CB4
  c->r[4]=c->r[4]+c->r[0]; // 80216CB8
  c->lr=0x80216CC0u; f_8003F484(c); // 80216CBC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216CC0
  c->r[4]=c->r[3]|c->r[3]; // 80216CC4
  {uint32_t ea=c->r[2]+0xFFFFCD50u; c->f[3]=c->ps1[3]=RF32(ea);} // 80216CC8
  c->r[3]=c->r[31]+0x0000255Cu; // 80216CCC
  c->f[2]=c->f[1]; // 80216CD0
  c->f[4]=c->f[1]; // 80216CD4
  c->lr=0x80216CDCu; f_801AC5E8(c); // 80216CD8
  c->r[0]=0u+0x00000003u; // 80216CDC
  W32(c->r[31]+0x00002704u,c->r[0]); // 80216CE0
  goto L_802171C0; // 80216CE4
L_80216CE8:;
  c->r[0]=R8(c->r[31]+0x00001F66u); // 80216CE8
  cmpu(c,0,c->r[0],0x00000001u); // 80216CEC
  if (!crb(c,2)) { goto L_80216D34; } // 80216CF0
  W8(c->r[31]+0x00001F66u,c->r[30]); // 80216CF4
  c->r[3]=c->r[31]+0x000008ECu; // 80216CF8
  c->r[4]=R32(c->r[13]+0xFFFF8BDCu); // 80216CFC
  c->lr=0x80216D04u; f_80075440(c); // 80216D00
  {uint32_t ea=c->r[2]+0xFFFFCD54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216D04
  c->r[5]=c->r[3]|c->r[3]; // 80216D08
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216D0C
  c->r[3]=c->r[31]+0x00000C88u; // 80216D10
  c->r[4]=c->r[31]+0x000008ECu; // 80216D14
  c->r[6]=0u+0x00000000u; // 80216D18
  c->r[7]=0u+0x00000004u; // 80216D1C
  c->lr=0x80216D24u; f_800BB0C8(c); // 80216D20
  c->r[3]=R32(c->r[31]+0x00002704u); // 80216D24
  c->r[0]=c->r[3]+0x00000002u; // 80216D28
  W32(c->r[31]+0x00002704u,c->r[0]); // 80216D2C
  goto L_802171C0; // 80216D30
L_80216D34:;
  c->r[5]=R32(c->r[31]+0x00000974u); // 80216D34
  c->r[3]=c->r[31]+0x000008ECu; // 80216D38
  c->r[4]=R32(c->r[13]+0xFFFF8BD8u); // 80216D3C
  c->r[5]=R32(c->r[5]+0x00000000u); // 80216D40
  c->r[30]=R32(c->r[5]+0x00000018u); // 80216D44
  c->lr=0x80216D4Cu; f_80075440(c); // 80216D48
  cmpu(c,0,c->r[3],c->r[30]); // 80216D4C
  if (crb(c,2)) { goto L_80216D84; } // 80216D50
  c->r[4]=R32(c->r[13]+0xFFFF8BD8u); // 80216D54
  c->r[3]=c->r[31]+0x000008ECu; // 80216D58
  c->lr=0x80216D60u; f_80075440(c); // 80216D5C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216D60
  c->r[4]=c->r[3]|c->r[3]; // 80216D64
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80216D68
  c->r[3]=c->r[31]+0x000008D0u; // 80216D6C
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80216D70
  c->r[5]=0u+0x00000000u; // 80216D74
  c->r[6]=0u+0xFFFFFFFFu; // 80216D78
  c->r[7]=0u+0x00000000u; // 80216D7C
  c->lr=0x80216D84u; f_8002D7B8(c); // 80216D80
L_80216D84:;
  c->r[3]=R32(c->r[31]+0x00002704u); // 80216D84
  c->r[0]=c->r[3]+0x00000001u; // 80216D88
  W32(c->r[31]+0x00002704u,c->r[0]); // 80216D8C
  goto L_802171C0; // 80216D90
L_80216D94:;
  c->lr=0x80216D98u; f_801861D4(c); // 80216D94
  {uint32_t ea=c->r[2]+0xFFFFCD54u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216D98
  {uint32_t ea=c->r[2]+0xFFFFCD58u; c->f[0]=c->ps1[0]=RF32(ea);} // 80216D9C
  c->f[30]=c->ps1[30]=S(c->f[2]*c->f[1]); // 80216DA0
  fcmp(c,0,c->f[30],c->f[0]); // 80216DA4
  if (!crb(c,0)) { goto L_80216DB0; } // 80216DA8
  c->f[30]=c->f[0]; // 80216DAC
L_80216DB0:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 80216DB0
  c->r[30]=R32(c->r[3]+0x00000000u); // 80216DB4
  c->r[3]=c->r[30]|c->r[30]; // 80216DB8
  c->lr=0x80216DC0u; f_800752CC(c); // 80216DBC
  c->f[31]=c->f[1]; // 80216DC0
  c->r[3]=c->r[30]|c->r[30]; // 80216DC4
  c->lr=0x80216DCCu; f_801652C0(c); // 80216DC8
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 80216DCC
  fcmp(c,0,c->f[0],c->f[31]); // 80216DD0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80216DD4
  if (!crb(c,2)) { goto L_802171C0; } // 80216DD8
  c->r[4]=R32(c->r[13]+0xFFFF8BDCu); // 80216DDC
  c->r[3]=c->r[31]+0x000008ECu; // 80216DE0
  c->lr=0x80216DE8u; f_80075440(c); // 80216DE4
  {uint32_t ea=c->r[2]+0xFFFFCD54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216DE8
  c->r[5]=c->r[3]|c->r[3]; // 80216DEC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216DF0
  c->r[3]=c->r[31]+0x00000C88u; // 80216DF4
  c->r[4]=c->r[31]+0x000008ECu; // 80216DF8
  c->r[6]=0u+0x00000000u; // 80216DFC
  c->r[7]=0u+0x00000004u; // 80216E00
  c->lr=0x80216E08u; f_800BB0C8(c); // 80216E04
  c->r[3]=R32(c->r[31]+0x00002704u); // 80216E08
  c->r[0]=c->r[3]+0x00000001u; // 80216E0C
  W32(c->r[31]+0x00002704u,c->r[0]); // 80216E10
  goto L_802171C0; // 80216E14
L_80216E18:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80216E18
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216E1C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80216E20
  c->lr=0x80216E28u; f_8016498C(c); // 80216E24
  cmps(c,0,(int32_t)c->r[3],0); // 80216E28
  if (crb(c,2)) { goto L_802171C0; } // 80216E2C
  c->r[4]=R32(c->r[13]+0xFFFF8BE0u); // 80216E30
  c->r[3]=c->r[31]+0x000008ECu; // 80216E34
  c->lr=0x80216E3Cu; f_80075440(c); // 80216E38
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216E3C
  c->r[4]=c->r[3]|c->r[3]; // 80216E40
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80216E44
  c->r[3]=c->r[31]+0x000008D0u; // 80216E48
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80216E4C
  c->r[5]=0u+0x00000000u; // 80216E50
  c->r[6]=0u+0xFFFFFFFFu; // 80216E54
  c->r[7]=0u+0x00000000u; // 80216E58
  c->lr=0x80216E60u; f_8002D7B8(c); // 80216E5C
  c->r[0]=R32(c->r[31]+0x00002700u); // 80216E60
  c->r[5]=0u+0x803E0000u; // 80216E64
  c->r[4]=0u+0x80410000u; // 80216E68
  c->r[3]=c->r[1]+0x00000038u; // 80216E6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216E70
  c->r[5]=c->r[5]+0x00002B48u; // 80216E74
  c->r[0]=R32(c->r[5]+c->r[0]); // 80216E78
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 80216E7C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80216E80
  c->r[4]=c->r[4]+c->r[0]; // 80216E84
  c->lr=0x80216E8Cu; f_8003F484(c); // 80216E88
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216E8C
  c->r[4]=c->r[3]|c->r[3]; // 80216E90
  {uint32_t ea=c->r[2]+0xFFFFCD50u; c->f[3]=c->ps1[3]=RF32(ea);} // 80216E94
  c->r[3]=c->r[31]+0x0000255Cu; // 80216E98
  c->f[2]=c->f[1]; // 80216E9C
  c->f[4]=c->f[1]; // 80216EA0
  c->lr=0x80216EA8u; f_801AC5E8(c); // 80216EA4
  c->r[3]=R32(c->r[31]+0x00002704u); // 80216EA8
  c->r[0]=c->r[3]+0x00000001u; // 80216EAC
  W32(c->r[31]+0x00002704u,c->r[0]); // 80216EB0
  goto L_802171C0; // 80216EB4
L_80216EB8:;
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80216EB8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80216EBC
  if (!crb(c,2)) { goto L_802171C0; } // 80216EC0
  c->r[0]=R32(c->r[3]+0x00002700u); // 80216EC4
  c->r[4]=0u+0x803E0000u; // 80216EC8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216ECC
  c->r[5]=0u+0x80410000u; // 80216ED0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216ED4
  c->r[4]=c->r[4]+0x00002B48u; // 80216ED8
  c->r[4]=R32(c->r[4]+c->r[0]); // 80216EDC
  c->r[5]=c->r[5]+0xFFFFC2E0u; // 80216EE0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 80216EE4
  c->r[3]=c->r[3]+0x0000255Cu; // 80216EE8
  c->r[0]=c->r[4]+0x00000001u; // 80216EEC
  {uint32_t ea=c->r[2]+0xFFFFCD50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216EF0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80216EF4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 80216EF8
  c->r[5]=c->r[5]+c->r[0]; // 80216EFC
  c->r[4]=c->r[1]+0x0000002Cu; // 80216F00
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80216F04
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80216F08
  c->lr=0x80216F10u; f_801ACA68(c); // 80216F0C
  c->r[4]=R32(c->r[13]+0xFFFF8BE4u); // 80216F10
  c->r[3]=c->r[31]+0x000008ECu; // 80216F14
  c->lr=0x80216F1Cu; f_80075440(c); // 80216F18
  {uint32_t ea=c->r[2]+0xFFFFCD54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216F1C
  c->r[5]=c->r[3]|c->r[3]; // 80216F20
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216F24
  c->r[3]=c->r[31]+0x00000C88u; // 80216F28
  c->r[4]=c->r[31]+0x000008ECu; // 80216F2C
  c->r[6]=0u+0x00000000u; // 80216F30
  c->r[7]=0u+0x00000004u; // 80216F34
  c->lr=0x80216F3Cu; f_800BB0C8(c); // 80216F38
  c->r[3]=c->r[31]|c->r[31]; // 80216F3C
  c->lr=0x80216F44u; f_8018615C(c); // 80216F40
  c->r[3]=R32(c->r[31]+0x00002704u); // 80216F44
  c->r[0]=0u+0x00000001u; // 80216F48
  W8(c->r[31]+0x00002755u,c->r[0]); // 80216F4C
  c->r[0]=c->r[3]+0x00000001u; // 80216F50
  W32(c->r[31]+0x00002704u,c->r[0]); // 80216F54
  goto L_802171C0; // 80216F58
L_80216F5C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80216F5C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80216F60
  c->lr=0x80216F68u; f_800752CC(c); // 80216F64
  {uint32_t ea=c->r[2]+0xFFFFCD5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80216F68
  fcmp(c,0,c->f[1],c->f[0]); // 80216F6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80216F70
  if (!crb(c,2)) { goto L_802171C0; } // 80216F74
  c->r[0]=R32(c->r[31]+0x00002700u); // 80216F78
  c->r[30]=0u+0x805D0000u; // 80216F7C
  c->r[30]=c->r[30]+0xFFFFEA0Cu; // 80216F80
  c->r[3]=c->r[31]|c->r[31]; // 80216F84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216F88
  c->r[4]=R32(c->r[30]+c->r[0]); // 80216F8C
  c->lr=0x80216F94u; f_801B0AA8(c); // 80216F90
  c->r[0]=R32(c->r[31]+0x00002700u); // 80216F94
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216F98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80216F9C
  c->r[3]=R32(c->r[30]+c->r[0]); // 80216FA0
  c->lr=0x80216FA8u; f_801138D4(c); // 80216FA4
  c->r[3]=c->r[31]|c->r[31]; // 80216FA8
  c->lr=0x80216FB0u; f_802188B0(c); // 80216FAC
  cmpu(c,0,c->r[3],0x00000001u); // 80216FB0
  if (!crb(c,2)) { goto L_80216FFC; } // 80216FB4
  c->r[4]=R32(c->r[13]+0xFFFF8C2Cu); // 80216FB8
  c->r[3]=c->r[31]+0x000008ECu; // 80216FBC
  c->lr=0x80216FC4u; f_80075440(c); // 80216FC0
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216FC4
  c->r[5]=c->r[3]|c->r[3]; // 80216FC8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80216FCC
  c->r[3]=c->r[31]+0x00000C88u; // 80216FD0
  c->r[4]=c->r[31]+0x000008ECu; // 80216FD4
  c->r[6]=0u+0x00000000u; // 80216FD8
  c->r[7]=0u+0x00000000u; // 80216FDC
  c->lr=0x80216FE4u; f_800BB0C8(c); // 80216FE0
  c->r[3]=c->r[31]|c->r[31]; // 80216FE4
  c->lr=0x80216FECu; f_8018615C(c); // 80216FE8
  c->r[3]=R32(c->r[31]+0x00002704u); // 80216FEC
  c->r[0]=c->r[3]+0x00000002u; // 80216FF0
  W32(c->r[31]+0x00002704u,c->r[0]); // 80216FF4
  goto L_8021701C; // 80216FF8
L_80216FFC:;
  {uint32_t ea=c->r[31]+0x00002728u; c->f[1]=c->ps1[1]=RF32(ea);} // 80216FFC
  c->r[3]=c->r[31]|c->r[31]; // 80217000
  c->r[4]=0u+0x00000004u; // 80217004
  c->r[5]=0u+0x00000000u; // 80217008
  c->lr=0x80217010u; f_80218D10(c); // 8021700C
  c->r[3]=R32(c->r[31]+0x00002704u); // 80217010
  c->r[0]=c->r[3]+0x00000001u; // 80217014
  W32(c->r[31]+0x00002704u,c->r[0]); // 80217018
L_8021701C:;
  c->r[3]=c->r[31]|c->r[31]; // 8021701C
  c->r[4]=0u+0xFFFFFFFFu; // 80217020
  c->lr=0x80217028u; f_80218930(c); // 80217024
  goto L_802171C0; // 80217028
L_8021702C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021702C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217030
  c->lr=0x80217038u; f_800752CC(c); // 80217034
  {uint32_t ea=c->r[2]+0xFFFFCD60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217038
  fcmp(c,0,c->f[1],c->f[0]); // 8021703C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217040
  if (!crb(c,2)) { goto L_802171C0; } // 80217044
  c->r[0]=R32(c->r[31]+0x00002700u); // 80217048
  c->r[3]=0u+0x803E0000u; // 8021704C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217050
  c->r[4]=0u+0x80410000u; // 80217054
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217058
  c->r[3]=c->r[3]+0x00002B48u; // 8021705C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80217060
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 80217064
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 80217068
  c->r[0]=c->r[3]+0x00000001u; // 8021706C
  {uint32_t ea=c->r[2]+0xFFFFCD50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217070
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80217074
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 80217078
  c->r[4]=c->r[4]+c->r[0]; // 8021707C
  c->r[3]=c->r[31]+0x0000255Cu; // 80217080
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217084
  c->r[4]=c->r[1]+0x00000020u; // 80217088
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8021708C
  c->lr=0x80217094u; f_801ACA68(c); // 80217090
  c->r[3]=c->r[31]|c->r[31]; // 80217094
  c->lr=0x8021709Cu; f_8018615C(c); // 80217098
  c->r[3]=0u+0x00000001u; // 8021709C
  goto L_802171C4; // 802170A0
L_802170A4:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 802170A4
  c->r[30]=R32(c->r[3]+0x00000000u); // 802170A8
  c->r[3]=c->r[30]|c->r[30]; // 802170AC
  c->lr=0x802170B4u; f_801652C0(c); // 802170B0
  {uint32_t ea=c->r[2]+0xFFFFCD64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802170B4
  c->r[3]=c->r[30]|c->r[30]; // 802170B8
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 802170BC
  c->lr=0x802170C4u; f_800752CC(c); // 802170C0
  fcmp(c,0,c->f[1],c->f[31]); // 802170C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802170C8
  if (!crb(c,2)) { goto L_802171C0; } // 802170CC
  c->r[4]=R32(c->r[13]+0xFFFF8BD4u); // 802170D0
  c->r[3]=c->r[31]+0x000008ECu; // 802170D4
  c->lr=0x802170DCu; f_80075440(c); // 802170D8
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 802170DC
  c->r[5]=c->r[3]|c->r[3]; // 802170E0
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 802170E4
  c->r[3]=c->r[31]+0x00000C88u; // 802170E8
  c->r[4]=c->r[31]+0x000008ECu; // 802170EC
  c->r[6]=0u+0x00000000u; // 802170F0
  c->r[7]=0u+0x00000004u; // 802170F4
  c->lr=0x802170FCu; f_800BB0C8(c); // 802170F8
  c->r[3]=c->r[31]|c->r[31]; // 802170FC
  c->lr=0x80217104u; f_8018615C(c); // 80217100
  c->r[0]=R32(c->r[31]+0x00002700u); // 80217104
  c->r[5]=0u+0x803E0000u; // 80217108
  c->r[4]=0u+0x80410000u; // 8021710C
  c->r[3]=c->r[1]+0x00000014u; // 80217110
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217114
  c->r[5]=c->r[5]+0x00002B48u; // 80217118
  c->r[5]=R32(c->r[5]+c->r[0]); // 8021711C
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 80217120
  c->r[0]=c->r[5]+0x00000001u; // 80217124
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80217128
  c->r[4]=c->r[4]+c->r[0]; // 8021712C
  c->lr=0x80217134u; f_8003F484(c); // 80217130
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217134
  c->r[4]=c->r[3]|c->r[3]; // 80217138
  {uint32_t ea=c->r[2]+0xFFFFCD68u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021713C
  c->r[3]=c->r[31]+0x0000255Cu; // 80217140
  c->f[2]=c->f[1]; // 80217144
  c->f[4]=c->f[1]; // 80217148
  c->lr=0x80217150u; f_801AC5E8(c); // 8021714C
  c->r[3]=R32(c->r[31]+0x00002704u); // 80217150
  c->r[0]=c->r[3]+0x00000001u; // 80217154
  W32(c->r[31]+0x00002704u,c->r[0]); // 80217158
  goto L_802171C0; // 8021715C
L_80217160:;
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80217160
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80217164
  if (!crb(c,2)) { goto L_802171C0; } // 80217168
  c->r[0]=R32(c->r[3]+0x00002700u); // 8021716C
  c->r[4]=0u+0x803E0000u; // 80217170
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217174
  c->r[5]=0u+0x80410000u; // 80217178
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021717C
  c->r[4]=c->r[4]+0x00002B48u; // 80217180
  c->r[4]=R32(c->r[4]+c->r[0]); // 80217184
  c->r[5]=c->r[5]+0xFFFFC2E0u; // 80217188
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8021718C
  c->r[3]=c->r[3]+0x0000255Cu; // 80217190
  c->r[0]=c->r[4]+0x00000001u; // 80217194
  {uint32_t ea=c->r[2]+0xFFFFCD50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217198
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8021719C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 802171A0
  c->r[5]=c->r[5]+c->r[0]; // 802171A4
  c->r[4]=c->r[1]+0x00000008u; // 802171A8
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802171AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802171B0
  c->lr=0x802171B8u; f_801ACA68(c); // 802171B4
  c->r[3]=0u+0x00000001u; // 802171B8
  goto L_802171C4; // 802171BC
L_802171C0:;
  c->r[3]=0u+0x00000000u; // 802171C0
L_802171C4:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 802171C4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 802171C8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 802171CC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 802171D0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 802171D4
  c->r[0]=R32(c->r[1]+0x00000084u); // 802171D8
  c->r[30]=R32(c->r[1]+0x00000058u); // 802171DC
  c->lr=c->r[0]; // 802171E0
  c->r[1]=c->r[1]+0x00000080u; // 802171E4
  return; // 802171E8
}

// fn_802171EC
void f_802171EC(Ctx* __restrict c) {
  trace_call(0x802171ECu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 802171EC
  c->r[0]=c->lr; // 802171F0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802171F4
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 802171F8
  c->r[31]=c->r[3]|c->r[3]; // 802171FC
  c->r[0]=R32(c->r[3]+0x00002704u); // 80217200
  cmpu(c,0,c->r[0],0x00000008u); // 80217204
  if (crb(c,1)) { goto L_802176F8; } // 80217208
  c->r[4]=0u+0x80410000u; // 8021720C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217210
  c->r[4]=c->r[4]+0xFFFFC488u; // 80217214
  c->r[4]=R32(c->r[4]+c->r[0]); // 80217218
  c->ctr=c->r[4]; // 8021721C
  if (true) { switch (c->ctr) { case 0x80217224u: goto L_80217224; case 0x8021727Cu: goto L_8021727C; case 0x80217310u: goto L_80217310; case 0x802173D4u: goto L_802173D4; case 0x802174D0u: goto L_802174D0; case 0x80217570u: goto L_80217570; case 0x80217618u: goto L_80217618; case 0x8021767Cu: goto L_8021767C; case 0x8021769Cu: goto L_8021769C; default: break; } dispatch(c,c->ctr); return; } // 80217220
L_80217224:;
  c->r[0]=R32(c->r[31]+0x00002700u); // 80217224
  c->r[5]=0u+0x803E0000u; // 80217228
  c->r[6]=0u+0x00000000u; // 8021722C
  c->r[4]=0u+0x80410000u; // 80217230
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217234
  c->r[5]=c->r[5]+0x00002B48u; // 80217238
  c->r[0]=R32(c->r[5]+c->r[0]); // 8021723C
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 80217240
  W8(c->r[3]+0x00001F5Fu,c->r[6]); // 80217244
  c->r[3]=c->r[1]+0x00000050u; // 80217248
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8021724C
  c->r[4]=c->r[4]+c->r[0]; // 80217250
  c->lr=0x80217258u; f_8003F484(c); // 80217254
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217258
  c->r[4]=c->r[3]|c->r[3]; // 8021725C
  {uint32_t ea=c->r[2]+0xFFFFCD6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80217260
  c->r[3]=c->r[31]+0x0000255Cu; // 80217264
  c->lr=0x8021726Cu; f_801ACA00(c); // 80217268
  c->r[3]=R32(c->r[31]+0x00002704u); // 8021726C
  c->r[0]=c->r[3]+0x00000001u; // 80217270
  W32(c->r[31]+0x00002704u,c->r[0]); // 80217274
  goto L_802176F8; // 80217278
L_8021727C:;
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 8021727C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80217280
  if (!crb(c,2)) { goto L_802176F8; } // 80217284
  c->r[4]=R32(c->r[13]+0xFFFF8BE0u); // 80217288
  c->r[3]=c->r[3]+0x000008ECu; // 8021728C
  c->lr=0x80217294u; f_80075440(c); // 80217290
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217294
  c->r[4]=c->r[3]|c->r[3]; // 80217298
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021729C
  c->r[3]=c->r[31]+0x000008D0u; // 802172A0
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 802172A4
  c->r[5]=0u+0x00000000u; // 802172A8
  c->r[6]=0u+0xFFFFFFFFu; // 802172AC
  c->r[7]=0u+0x00000000u; // 802172B0
  c->lr=0x802172B8u; f_8002D7B8(c); // 802172B4
  c->r[0]=R32(c->r[31]+0x00002700u); // 802172B8
  c->r[5]=0u+0x803E0000u; // 802172BC
  c->r[4]=0u+0x80410000u; // 802172C0
  c->r[3]=c->r[1]+0x00000044u; // 802172C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802172C8
  c->r[5]=c->r[5]+0x00002B48u; // 802172CC
  c->r[0]=R32(c->r[5]+c->r[0]); // 802172D0
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 802172D4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802172D8
  c->r[4]=c->r[4]+c->r[0]; // 802172DC
  c->lr=0x802172E4u; f_8003F484(c); // 802172E0
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802172E4
  c->r[4]=c->r[3]|c->r[3]; // 802172E8
  {uint32_t ea=c->r[2]+0xFFFFCD50u; c->f[3]=c->ps1[3]=RF32(ea);} // 802172EC
  c->r[3]=c->r[31]+0x0000255Cu; // 802172F0
  c->f[2]=c->f[1]; // 802172F4
  c->f[4]=c->f[1]; // 802172F8
  c->lr=0x80217300u; f_801AC5E8(c); // 802172FC
  c->r[3]=R32(c->r[31]+0x00002704u); // 80217300
  c->r[0]=c->r[3]+0x00000001u; // 80217304
  W32(c->r[31]+0x00002704u,c->r[0]); // 80217308
  goto L_802176F8; // 8021730C
L_80217310:;
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80217310
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80217314
  if (!crb(c,2)) { goto L_802176F8; } // 80217318
  c->r[0]=R32(c->r[3]+0x00002700u); // 8021731C
  c->r[4]=0u+0x803E0000u; // 80217320
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217324
  c->r[5]=0u+0x80410000u; // 80217328
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021732C
  c->r[4]=c->r[4]+0x00002B48u; // 80217330
  c->r[0]=R32(c->r[4]+c->r[0]); // 80217334
  c->r[5]=c->r[5]+0xFFFFC2E0u; // 80217338
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8021733C
  c->r[4]=c->r[1]+0x00000038u; // 80217340
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80217344
  c->r[3]=c->r[3]+0x0000255Cu; // 80217348
  c->r[5]=c->r[5]+c->r[0]; // 8021734C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80217350
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217354
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80217358
  c->lr=0x80217360u; f_801AC114(c); // 8021735C
  c->r[3]=c->r[31]|c->r[31]; // 80217360
  c->r[4]=0u+0x00000002u; // 80217364
  c->lr=0x8021736Cu; f_80218930(c); // 80217368
  c->r[0]=0u+0x00000000u; // 8021736C
  c->r[3]=c->r[31]+0x000008ECu; // 80217370
  W8(c->r[31]+0x00002755u,c->r[0]); // 80217374
  c->r[4]=R32(c->r[13]+0xFFFF8C18u); // 80217378
  c->lr=0x80217380u; f_80075440(c); // 8021737C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217380
  c->r[4]=c->r[3]|c->r[3]; // 80217384
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80217388
  c->r[3]=c->r[31]+0x000008D0u; // 8021738C
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80217390
  c->r[5]=0u+0x00000000u; // 80217394
  c->r[6]=0u+0xFFFFFFFFu; // 80217398
  c->r[7]=0u+0x00000000u; // 8021739C
  c->lr=0x802173A4u; f_8002D7B8(c); // 802173A0
  c->r[4]=R32(c->r[13]+0xFFFF8B84u); // 802173A4
  c->r[3]=c->r[31]|c->r[31]; // 802173A8
  c->lr=0x802173B0u; f_801B0AA8(c); // 802173AC
  c->r[3]=R32(c->r[13]+0xFFFF8B84u); // 802173B0
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802173B4
  c->lr=0x802173BCu; f_801138D4(c); // 802173B8
  c->r[3]=c->r[31]|c->r[31]; // 802173BC
  c->lr=0x802173C4u; f_8018615C(c); // 802173C0
  c->r[3]=R32(c->r[31]+0x00002704u); // 802173C4
  c->r[0]=c->r[3]+0x00000001u; // 802173C8
  W32(c->r[31]+0x00002704u,c->r[0]); // 802173CC
  goto L_802176F8; // 802173D0
L_802173D4:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 802173D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802173D8
  c->lr=0x802173E0u; f_800752CC(c); // 802173DC
  {uint32_t ea=c->r[2]+0xFFFFCD64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802173E0
  fcmp(c,0,c->f[1],c->f[0]); // 802173E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802173E8
  if (!crb(c,2)) { goto L_802176F8; } // 802173EC
  c->r[0]=0u+0x00000001u; // 802173F0
  c->r[3]=R32(c->r[31]+0x00000974u); // 802173F4
  W8(c->r[31]+0x00002755u,c->r[0]); // 802173F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 802173FC
  c->lr=0x80217404u; f_800752CC(c); // 80217400
  {uint32_t ea=c->r[2]+0xFFFFCD70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217404
  fcmp(c,0,c->f[1],c->f[0]); // 80217408
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021740C
  if (!crb(c,2)) { goto L_8021744C; } // 80217410
  c->r[0]=0u+0x00000000u; // 80217414
  {uint32_t ea=c->r[31]+0x00002728u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217418
  W8(c->r[31]+0x00002755u,c->r[0]); // 8021741C
  c->r[3]=c->r[31]|c->r[31]; // 80217420
  c->r[4]=0u+0x00000004u; // 80217424
  c->r[5]=0u+0x00000000u; // 80217428
  c->lr=0x80217430u; f_80218D10(c); // 8021742C
  c->r[5]=R32(c->r[31]+0x00002704u); // 80217430
  c->r[3]=c->r[31]|c->r[31]; // 80217434
  c->r[4]=0u+0xFFFFFFFFu; // 80217438
  c->r[0]=c->r[5]+0x00000004u; // 8021743C
  W32(c->r[31]+0x00002704u,c->r[0]); // 80217440
  c->lr=0x80217448u; f_80218930(c); // 80217444
  goto L_802176F8; // 80217448
L_8021744C:;
  c->r[3]=c->r[31]|c->r[31]; // 8021744C
  c->lr=0x80217454u; f_802188B0(c); // 80217450
  cmpu(c,0,c->r[3],0x00000001u); // 80217454
  if (!crb(c,2)) { goto L_802176F8; } // 80217458
  c->r[4]=R32(c->r[13]+0xFFFF8C24u); // 8021745C
  c->r[3]=c->r[31]+0x000008ECu; // 80217460
  c->lr=0x80217468u; f_80075440(c); // 80217464
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217468
  c->r[5]=c->r[3]|c->r[3]; // 8021746C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217470
  c->r[3]=c->r[31]+0x00000C88u; // 80217474
  c->r[4]=c->r[31]+0x000008ECu; // 80217478
  c->r[6]=0u+0x00000000u; // 8021747C
  c->r[7]=0u+0x00000000u; // 80217480
  c->lr=0x80217488u; f_800BB0C8(c); // 80217484
  c->r[3]=c->r[31]|c->r[31]; // 80217488
  c->lr=0x80217490u; f_8018615C(c); // 8021748C
  c->r[4]=R32(c->r[13]+0xFFFF8B88u); // 80217490
  c->r[3]=c->r[31]|c->r[31]; // 80217494
  c->lr=0x8021749Cu; f_801B0AA8(c); // 80217498
  c->r[3]=R32(c->r[13]+0xFFFF8B88u); // 8021749C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802174A0
  c->lr=0x802174A8u; f_801138D4(c); // 802174A4
  c->lr=0x802174ACu; f_80061A4C(c); // 802174A8
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 802174AC
  c->lr=0x802174B4u; f_80063940(c); // 802174B0
  c->r[3]=c->r[31]|c->r[31]; // 802174B4
  c->r[4]=0u+0xFFFFFFFFu; // 802174B8
  c->lr=0x802174C0u; f_80218930(c); // 802174BC
  c->r[3]=R32(c->r[31]+0x00002704u); // 802174C0
  c->r[0]=c->r[3]+0x00000001u; // 802174C4
  W32(c->r[31]+0x00002704u,c->r[0]); // 802174C8
  goto L_802176F8; // 802174CC
L_802174D0:;
  c->r[12]=R32(c->r[31]+0x000008D0u); // 802174D0
  c->r[4]=c->r[31]+0x000008D0u; // 802174D4
  c->r[3]=c->r[1]+0x00000068u; // 802174D8
  c->r[12]=R32(c->r[12]+0x00000040u); // 802174DC
  c->ctr=c->r[12]; // 802174E0
  if (true) { c->lr=0x802174E8u; dispatch(c,c->ctr); } // 802174E4
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 802174E8
  c->r[3]=c->r[1]+0x0000005Cu; // 802174EC
  {uint32_t ea=c->r[1]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 802174F0
  {uint32_t ea=c->r[1]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 802174F4
  c->lr=0x802174FCu; f_800521A0(c); // 802174F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 802174FC
  {uint32_t ea=c->r[2]+0xFFFFCD4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217500
  fcmp(c,0,c->f[1],c->f[0]); // 80217504
  if (!crb(c,0)) { goto L_802176F8; } // 80217508
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021750C
  c->r[3]=c->r[1]+0x0000002Cu; // 80217510
  c->r[4]=c->r[1]+0x0000005Cu; // 80217514
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80217518
  c->lr=0x80217520u; f_8003F484(c); // 8021751C
  c->r[4]=c->r[3]|c->r[3]; // 80217520
  c->r[3]=c->r[31]+0x0000255Cu; // 80217524
  c->lr=0x8021752Cu; f_801AC10C(c); // 80217528
  c->r[4]=R32(c->r[13]+0xFFFF8C28u); // 8021752C
  c->r[3]=c->r[31]+0x000008ECu; // 80217530
  c->lr=0x80217538u; f_80075440(c); // 80217534
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217538
  c->r[5]=c->r[3]|c->r[3]; // 8021753C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217540
  c->r[3]=c->r[31]+0x00000C88u; // 80217544
  c->r[4]=c->r[31]+0x000008ECu; // 80217548
  c->r[6]=0u+0x00000000u; // 8021754C
  c->r[7]=0u+0x00000004u; // 80217550
  c->lr=0x80217558u; f_800BB0C8(c); // 80217554
  c->r[3]=c->r[31]|c->r[31]; // 80217558
  c->lr=0x80217560u; f_8018615C(c); // 8021755C
  c->r[3]=R32(c->r[31]+0x00002704u); // 80217560
  c->r[0]=c->r[3]+0x00000001u; // 80217564
  W32(c->r[31]+0x00002704u,c->r[0]); // 80217568
  goto L_802176F8; // 8021756C
L_80217570:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217570
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217574
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217578
  c->lr=0x80217580u; f_8016498C(c); // 8021757C
  cmps(c,0,(int32_t)c->r[3],0); // 80217580
  if (crb(c,2)) { goto L_802176F8; } // 80217584
  c->r[4]=R32(c->r[13]+0xFFFF8BD4u); // 80217588
  c->r[3]=c->r[31]+0x000008ECu; // 8021758C
  c->lr=0x80217594u; f_80075440(c); // 80217590
  {uint32_t ea=c->r[2]+0xFFFFCD78u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217594
  c->r[5]=c->r[3]|c->r[3]; // 80217598
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021759C
  c->r[3]=c->r[31]+0x00000C88u; // 802175A0
  c->r[4]=c->r[31]+0x000008ECu; // 802175A4
  c->r[6]=0u+0x00000000u; // 802175A8
  c->r[7]=0u+0x00000004u; // 802175AC
  c->lr=0x802175B4u; f_800BB0C8(c); // 802175B0
  c->r[3]=c->r[31]|c->r[31]; // 802175B4
  c->lr=0x802175BCu; f_8018615C(c); // 802175B8
  c->r[0]=R32(c->r[31]+0x00002700u); // 802175BC
  c->r[5]=0u+0x803E0000u; // 802175C0
  c->r[4]=0u+0x80410000u; // 802175C4
  c->r[3]=c->r[1]+0x00000020u; // 802175C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802175CC
  c->r[5]=c->r[5]+0x00002B48u; // 802175D0
  c->r[5]=R32(c->r[5]+c->r[0]); // 802175D4
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 802175D8
  c->r[0]=c->r[5]+0x00000001u; // 802175DC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802175E0
  c->r[4]=c->r[4]+c->r[0]; // 802175E4
  c->lr=0x802175ECu; f_8003F484(c); // 802175E8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802175EC
  c->r[4]=c->r[3]|c->r[3]; // 802175F0
  {uint32_t ea=c->r[2]+0xFFFFCD68u; c->f[3]=c->ps1[3]=RF32(ea);} // 802175F4
  c->r[3]=c->r[31]+0x0000255Cu; // 802175F8
  c->f[2]=c->f[1]; // 802175FC
  c->f[4]=c->f[1]; // 80217600
  c->lr=0x80217608u; f_801AC5E8(c); // 80217604
  c->r[3]=R32(c->r[31]+0x00002704u); // 80217608
  c->r[0]=c->r[3]+0x00000001u; // 8021760C
  W32(c->r[31]+0x00002704u,c->r[0]); // 80217610
  goto L_802176F8; // 80217614
L_80217618:;
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80217618
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8021761C
  if (!crb(c,2)) { goto L_802176F8; } // 80217620
  c->lr=0x80217628u; f_8018615C(c); // 80217624
  c->r[0]=R32(c->r[31]+0x00002700u); // 80217628
  c->r[3]=0u+0x803E0000u; // 8021762C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217630
  c->r[4]=0u+0x80410000u; // 80217634
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217638
  c->r[3]=c->r[3]+0x00002B48u; // 8021763C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80217640
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 80217644
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 80217648
  c->r[0]=c->r[3]+0x00000001u; // 8021764C
  {uint32_t ea=c->r[2]+0xFFFFCD50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217650
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80217654
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 80217658
  c->r[4]=c->r[4]+c->r[0]; // 8021765C
  c->r[3]=c->r[31]+0x0000255Cu; // 80217660
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217664
  c->r[4]=c->r[1]+0x00000014u; // 80217668
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8021766C
  c->lr=0x80217674u; f_801ACA68(c); // 80217670
  c->r[3]=0u+0x00000001u; // 80217674
  goto L_802176FC; // 80217678
L_8021767C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021767C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217680
  c->lr=0x80217688u; f_800752CC(c); // 80217684
  {uint32_t ea=c->r[2]+0xFFFFCD7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217688
  fcmp(c,0,c->f[1],c->f[0]); // 8021768C
  if (!crb(c,1)) { goto L_802176F8; } // 80217690
  c->r[3]=0u+0x00000001u; // 80217694
  goto L_802176FC; // 80217698
L_8021769C:;
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 8021769C
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802176A0
  if (!crb(c,2)) { goto L_802176F8; } // 802176A4
  c->r[0]=R32(c->r[3]+0x00002700u); // 802176A8
  c->r[4]=0u+0x803E0000u; // 802176AC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802176B0
  c->r[5]=0u+0x80410000u; // 802176B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802176B8
  c->r[4]=c->r[4]+0x00002B48u; // 802176BC
  c->r[4]=R32(c->r[4]+c->r[0]); // 802176C0
  c->r[5]=c->r[5]+0xFFFFC2E0u; // 802176C4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802176C8
  c->r[3]=c->r[3]+0x0000255Cu; // 802176CC
  c->r[0]=c->r[4]+0x00000001u; // 802176D0
  c->r[4]=c->r[1]+0x00000008u; // 802176D4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802176D8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802176DC
  c->r[5]=c->r[5]+c->r[0]; // 802176E0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802176E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802176E8
  c->lr=0x802176F0u; f_801AC114(c); // 802176EC
  c->r[3]=0u+0x00000001u; // 802176F0
  goto L_802176FC; // 802176F4
L_802176F8:;
  c->r[3]=0u+0x00000000u; // 802176F8
L_802176FC:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 802176FC
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80217700
  c->lr=c->r[0]; // 80217704
  c->r[1]=c->r[1]+0x000000A0u; // 80217708
  return; // 8021770C
}

// fn_80217710
void f_80217710(Ctx* __restrict c) {
  trace_call(0x80217710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217710
  c->r[0]=c->lr; // 80217714
  W32(c->r[1]+0x00000014u,c->r[0]); // 80217718
  c->r[0]=0u+0x00000000u; // 8021771C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80217720
  c->r[31]=c->r[3]|c->r[3]; // 80217724
  W8(c->r[3]+0x00001F62u,c->r[0]); // 80217728
  c->lr=0x80217730u; f_80291D94(c); // 8021772C
  c->r[4]=0u+0x00000003u; // 80217730
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 80217734
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80217738
  c->r[3]=c->r[3]-c->r[0]; // 8021773C
  c->r[0]=c->r[3]+0x00000001u; // 80217740
  W32(c->r[31]+0x0000270Cu,c->r[0]); // 80217744
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80217748
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021774C
  c->lr=c->r[0]; // 80217750
  c->r[1]=c->r[1]+0x00000010u; // 80217754
  return; // 80217758
}

// fn_8021775C
void f_8021775C(Ctx* __restrict c) {
  trace_call(0x8021775Cu);
  c->r[0]=R8(c->r[3]+0x00001F62u); // 8021775C
  cmps(c,0,(int32_t)c->r[0],0); // 80217760
  if (!crb(c,2)) { goto L_80217788; } // 80217764
  c->r[4]=R32(c->r[3]+0x0000270Cu); // 80217768
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8021776C
  W32(c->r[3]+0x0000270Cu,c->r[0]); // 80217770
  if (crb(c,1)) { goto L_80217780; } // 80217774
  c->r[0]=0u+0x00000000u; // 80217778
  W32(c->r[3]+0x0000270Cu,c->r[0]); // 8021777C
L_80217780:;
  c->r[0]=0u+0x00000001u; // 80217780
  W8(c->r[3]+0x00001F62u,c->r[0]); // 80217784
L_80217788:;
  c->r[3]=R32(c->r[3]+0x0000270Cu); // 80217788
  return; // 8021778C
}

// fn_80217790
void f_80217790(Ctx* __restrict c) {
  trace_call(0x80217790u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217790
  c->r[0]=c->lr; // 80217794
  W32(c->r[1]+0x00000034u,c->r[0]); // 80217798
  c->r[11]=c->r[1]+0x00000030u; // 8021779C
  c->lr=0x802177A4u; { W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802177A0
  c->r[0]=R32(c->r[3]+0x00002704u); // 802177A4
  c->r[31]=0u+0x805D0000u; // 802177A8
  c->r[30]=c->r[3]|c->r[3]; // 802177AC
  cmpu(c,0,c->r[0],0x0000000Au); // 802177B0
  c->r[31]=c->r[31]+0xFFFFEA00u; // 802177B4
  if (crb(c,1)) { goto L_80217CDC; } // 802177B8
  c->r[4]=0u+0x80410000u; // 802177BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802177C0
  c->r[4]=c->r[4]+0xFFFFC4ACu; // 802177C4
  c->r[4]=R32(c->r[4]+c->r[0]); // 802177C8
  c->ctr=c->r[4]; // 802177CC
  if (true) { switch (c->ctr) { case 0x802177D4u: goto L_802177D4; case 0x80217844u: goto L_80217844; case 0x802178ACu: goto L_802178AC; case 0x8021795Cu: goto L_8021795C; case 0x80217994u: goto L_80217994; case 0x80217A18u: goto L_80217A18; case 0x80217A58u: goto L_80217A58; case 0x80217B10u: goto L_80217B10; case 0x80217C04u: goto L_80217C04; case 0x80217C9Cu: goto L_80217C9C; case 0x80217CBCu: goto L_80217CBC; default: break; } dispatch(c,c->ctr); return; } // 802177D0
L_802177D4:;
  c->r[0]=0u+0x00000000u; // 802177D4
  W8(c->r[3]+0x00001F61u,c->r[0]); // 802177D8
  W8(c->r[3]+0x00001F5Fu,c->r[0]); // 802177DC
  W8(c->r[3]+0x00001F65u,c->r[0]); // 802177E0
  c->lr=0x802177E8u; f_80217710(c); // 802177E4
  c->r[3]=c->r[30]|c->r[30]; // 802177E8
  c->r[4]=0u+0x00000003u; // 802177EC
  c->lr=0x802177F4u; f_80218930(c); // 802177F0
  c->r[0]=R32(c->r[30]+0x00002700u); // 802177F4
  c->r[4]=c->r[31]+0x0000003Cu; // 802177F8
  c->r[3]=c->r[30]+0x000008ECu; // 802177FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217800
  c->r[4]=R32(c->r[4]+c->r[0]); // 80217804
  c->lr=0x8021780Cu; f_80075440(c); // 80217808
  {uint32_t ea=c->r[2]+0xFFFFCD54u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021780C
  c->r[5]=c->r[3]|c->r[3]; // 80217810
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217814
  c->r[3]=c->r[30]+0x00000C88u; // 80217818
  c->r[4]=c->r[30]+0x000008ECu; // 8021781C
  c->r[6]=0u+0x00000000u; // 80217820
  c->r[7]=0u+0x00000004u; // 80217824
  c->lr=0x8021782Cu; f_800BB0C8(c); // 80217828
  c->r[3]=c->r[30]|c->r[30]; // 8021782C
  c->lr=0x80217834u; f_8018615C(c); // 80217830
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217834
  c->r[0]=c->r[3]+0x00000001u; // 80217838
  W32(c->r[30]+0x00002704u,c->r[0]); // 8021783C
  goto L_80217CDC; // 80217840
L_80217844:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217844
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217848
  c->lr=0x80217850u; f_800752CC(c); // 8021784C
  {uint32_t ea=c->r[2]+0xFFFFCD80u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217850
  fcmp(c,0,c->f[1],c->f[0]); // 80217854
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217858
  if (!crb(c,2)) { goto L_802178AC; } // 8021785C
  c->r[3]=c->r[30]|c->r[30]; // 80217860
  c->lr=0x80217868u; f_802188B0(c); // 80217864
  cmpu(c,0,c->r[3],0x00000001u); // 80217868
  if (!crb(c,2)) { goto L_80217880; } // 8021786C
  c->r[3]=c->r[30]|c->r[30]; // 80217870
  c->r[4]=0u+0x00000000u; // 80217874
  c->lr=0x8021787Cu; f_80218C64(c); // 80217878
  goto L_80217894; // 8021787C
L_80217880:;
  {uint32_t ea=c->r[30]+0x00002730u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217880
  c->r[3]=c->r[30]|c->r[30]; // 80217884
  c->r[4]=0u+0x00000004u; // 80217888
  c->r[5]=0u+0x00000000u; // 8021788C
  c->lr=0x80217894u; f_80218D10(c); // 80217890
L_80217894:;
  c->r[3]=c->r[30]|c->r[30]; // 80217894
  c->r[4]=0u+0xFFFFFFFFu; // 80217898
  c->lr=0x802178A0u; f_80218930(c); // 8021789C
  c->r[3]=R32(c->r[30]+0x00002704u); // 802178A0
  c->r[0]=c->r[3]+0x00000001u; // 802178A4
  W32(c->r[30]+0x00002704u,c->r[0]); // 802178A8
L_802178AC:;
  c->r[3]=c->r[30]|c->r[30]; // 802178AC
  c->lr=0x802178B4u; f_8021775C(c); // 802178B0
  cmps(c,0,(int32_t)c->r[3],0); // 802178B4
  if (crb(c,2)) { goto L_80217938; } // 802178B8
  c->r[3]=R32(c->r[30]+0x00000974u); // 802178BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802178C0
  c->lr=0x802178C8u; f_800752CC(c); // 802178C4
  {uint32_t ea=c->r[2]+0xFFFFCD84u; c->f[0]=c->ps1[0]=RF32(ea);} // 802178C8
  fcmp(c,0,c->f[1],c->f[0]); // 802178CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802178D0
  if (!crb(c,2)) { goto L_80217CDC; } // 802178D4
  c->r[0]=R32(c->r[30]+0x00002700u); // 802178D8
  c->r[28]=0u+0x00000000u; // 802178DC
  W8(c->r[30]+0x00001F62u,c->r[28]); // 802178E0
  c->r[4]=c->r[31]+0x0000004Cu; // 802178E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802178E8
  c->r[3]=c->r[30]+0x000008ECu; // 802178EC
  c->r[4]=R32(c->r[4]+c->r[0]); // 802178F0
  c->lr=0x802178F8u; f_80075440(c); // 802178F4
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802178F8
  c->r[4]=c->r[3]|c->r[3]; // 802178FC
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80217900
  c->r[3]=c->r[30]+0x000008D0u; // 80217904
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80217908
  c->r[5]=0u+0x00000000u; // 8021790C
  c->r[6]=0u+0xFFFFFFFFu; // 80217910
  c->r[7]=0u+0x00000000u; // 80217914
  c->lr=0x8021791Cu; f_8002D7B8(c); // 80217918
  c->r[3]=c->r[30]|c->r[30]; // 8021791C
  c->lr=0x80217924u; f_8018615C(c); // 80217920
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217924
  W8(c->r[30]+0x00001F5Fu,c->r[28]); // 80217928
  c->r[0]=c->r[3]+0x00000001u; // 8021792C
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217930
  goto L_80217CDC; // 80217934
L_80217938:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 80217938
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021793C
  c->lr=0x80217944u; f_800752CC(c); // 80217940
  {uint32_t ea=c->r[2]+0xFFFFCD88u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217944
  fcmp(c,0,c->f[1],c->f[0]); // 80217948
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021794C
  if (!crb(c,2)) { goto L_80217CDC; } // 80217950
  c->r[3]=0u+0x00000001u; // 80217954
  goto L_80217CE0; // 80217958
L_8021795C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021795C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217960
  c->lr=0x80217968u; f_800752CC(c); // 80217964
  {uint32_t ea=c->r[2]+0xFFFFCD8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217968
  fcmp(c,0,c->f[1],c->f[0]); // 8021796C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217970
  if (!crb(c,2)) { goto L_80217CDC; } // 80217974
  c->r[3]=c->r[30]|c->r[30]; // 80217978
  c->r[4]=0u+0x00000004u; // 8021797C
  c->lr=0x80217984u; f_80218930(c); // 80217980
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217984
  c->r[0]=c->r[3]+0x00000001u; // 80217988
  W32(c->r[30]+0x00002704u,c->r[0]); // 8021798C
  goto L_80217CDC; // 80217990
L_80217994:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217994
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217998
  c->lr=0x802179A0u; f_800752CC(c); // 8021799C
  {uint32_t ea=c->r[2]+0xFFFFCD90u; c->f[0]=c->ps1[0]=RF32(ea);} // 802179A0
  fcmp(c,0,c->f[1],c->f[0]); // 802179A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802179A8
  if (!crb(c,2)) { goto L_80217CDC; } // 802179AC
  c->r[3]=c->r[30]|c->r[30]; // 802179B0
  c->lr=0x802179B8u; f_802188B0(c); // 802179B4
  cmpu(c,0,c->r[3],0x00000001u); // 802179B8
  if (!crb(c,2)) { goto L_802179FC; } // 802179BC
  c->r[0]=R32(c->r[30]+0x00002700u); // 802179C0
  c->r[28]=c->r[31]+0x0000001Cu; // 802179C4
  c->r[3]=c->r[30]|c->r[30]; // 802179C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802179CC
  c->r[4]=R32(c->r[28]+c->r[0]); // 802179D0
  c->lr=0x802179D8u; f_801B0AA8(c); // 802179D4
  c->r[0]=R32(c->r[30]+0x00002700u); // 802179D8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802179DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802179E0
  c->r[3]=R32(c->r[28]+c->r[0]); // 802179E4
  c->lr=0x802179ECu; f_801138D4(c); // 802179E8
  c->r[3]=R32(c->r[30]+0x00002704u); // 802179EC
  c->r[0]=c->r[3]+0x00000002u; // 802179F0
  W32(c->r[30]+0x00002704u,c->r[0]); // 802179F4
  goto L_80217A08; // 802179F8
L_802179FC:;
  c->r[3]=R32(c->r[30]+0x00002704u); // 802179FC
  c->r[0]=c->r[3]+0x00000001u; // 80217A00
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217A04
L_80217A08:;
  c->r[3]=c->r[30]|c->r[30]; // 80217A08
  c->r[4]=0u+0xFFFFFFFFu; // 80217A0C
  c->lr=0x80217A14u; f_80218930(c); // 80217A10
  goto L_80217CDC; // 80217A14
L_80217A18:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217A18
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217A1C
  c->lr=0x80217A24u; f_800752CC(c); // 80217A20
  {uint32_t ea=c->r[2]+0xFFFFCD94u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217A24
  fcmp(c,0,c->f[1],c->f[0]); // 80217A28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217A2C
  if (!crb(c,2)) { goto L_80217CDC; } // 80217A30
  {uint32_t ea=c->r[30]+0x00002734u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217A34
  c->r[3]=c->r[30]|c->r[30]; // 80217A38
  c->r[4]=0u+0x00000004u; // 80217A3C
  c->r[5]=0u+0x00000000u; // 80217A40
  c->lr=0x80217A48u; f_80218D10(c); // 80217A44
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217A48
  c->r[0]=c->r[3]+0x00000001u; // 80217A4C
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217A50
  goto L_80217CDC; // 80217A54
L_80217A58:;
  c->lr=0x80217A5Cu; f_8021775C(c); // 80217A58
  cmps(c,0,(int32_t)c->r[3],0); // 80217A5C
  if (crb(c,2)) { goto L_80217AEC; } // 80217A60
  c->r[3]=R32(c->r[30]+0x00000974u); // 80217A64
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217A68
  c->lr=0x80217A70u; f_800752CC(c); // 80217A6C
  {uint32_t ea=c->r[2]+0xFFFFCD98u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217A70
  fcmp(c,0,c->f[1],c->f[0]); // 80217A74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217A78
  if (!crb(c,2)) { goto L_80217CDC; } // 80217A7C
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217A80
  c->r[28]=0u+0x00000000u; // 80217A84
  W8(c->r[30]+0x00001F62u,c->r[28]); // 80217A88
  c->r[4]=c->r[31]+0x0000005Cu; // 80217A8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217A90
  c->r[3]=c->r[30]+0x000008ECu; // 80217A94
  c->r[4]=R32(c->r[4]+c->r[0]); // 80217A98
  c->lr=0x80217AA0u; f_80075440(c); // 80217A9C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217AA0
  c->r[4]=c->r[3]|c->r[3]; // 80217AA4
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80217AA8
  c->r[3]=c->r[30]+0x000008D0u; // 80217AAC
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80217AB0
  c->r[5]=0u+0x00000000u; // 80217AB4
  c->r[6]=0u+0xFFFFFFFFu; // 80217AB8
  c->r[7]=0u+0x00000000u; // 80217ABC
  c->lr=0x80217AC4u; f_8002D7B8(c); // 80217AC0
  c->r[3]=c->r[30]|c->r[30]; // 80217AC4
  c->r[4]=0u+0x00000005u; // 80217AC8
  c->lr=0x80217AD0u; f_80218930(c); // 80217ACC
  c->r[3]=c->r[30]|c->r[30]; // 80217AD0
  c->lr=0x80217AD8u; f_8018615C(c); // 80217AD4
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217AD8
  W8(c->r[30]+0x00001F5Fu,c->r[28]); // 80217ADC
  c->r[0]=c->r[3]+0x00000001u; // 80217AE0
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217AE4
  goto L_80217CDC; // 80217AE8
L_80217AEC:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 80217AEC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217AF0
  c->lr=0x80217AF8u; f_800752CC(c); // 80217AF4
  {uint32_t ea=c->r[2]+0xFFFFCD9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217AF8
  fcmp(c,0,c->f[1],c->f[0]); // 80217AFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217B00
  if (!crb(c,2)) { goto L_80217CDC; } // 80217B04
  c->r[3]=0u+0x00000001u; // 80217B08
  goto L_80217CE0; // 80217B0C
L_80217B10:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217B10
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217B14
  c->lr=0x80217B1Cu; f_800752CC(c); // 80217B18
  {uint32_t ea=c->r[2]+0xFFFFCDA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217B1C
  fcmp(c,0,c->f[1],c->f[0]); // 80217B20
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217B24
  if (!crb(c,2)) { goto L_80217CDC; } // 80217B28
  c->r[3]=c->r[30]|c->r[30]; // 80217B2C
  c->lr=0x80217B34u; f_802188B0(c); // 80217B30
  cmpu(c,0,c->r[3],0x00000001u); // 80217B34
  if (!crb(c,2)) { goto L_80217B58; } // 80217B38
  c->r[3]=c->r[30]|c->r[30]; // 80217B3C
  c->r[4]=0u+0x00000000u; // 80217B40
  c->lr=0x80217B48u; f_80218C64(c); // 80217B44
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217B48
  c->r[0]=c->r[3]+0x00000002u; // 80217B4C
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217B50
  goto L_80217BF4; // 80217B54
L_80217B58:;
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217B58
  c->r[28]=0u+0x00000001u; // 80217B5C
  W8(c->r[30]+0x00001F65u,c->r[28]); // 80217B60
  c->r[4]=c->r[31]+0x0000006Cu; // 80217B64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217B68
  c->r[3]=c->r[30]+0x000008ECu; // 80217B6C
  c->r[4]=R32(c->r[4]+c->r[0]); // 80217B70
  c->lr=0x80217B78u; f_80075440(c); // 80217B74
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217B78
  c->r[4]=c->r[3]|c->r[3]; // 80217B7C
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80217B80
  c->r[3]=c->r[30]+0x000008D0u; // 80217B84
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80217B88
  c->r[5]=0u+0x00000000u; // 80217B8C
  c->r[6]=0u+0xFFFFFFFFu; // 80217B90
  c->r[7]=0u+0x00000000u; // 80217B94
  c->lr=0x80217B9Cu; f_8002D7B8(c); // 80217B98
  c->r[3]=c->r[30]|c->r[30]; // 80217B9C
  c->lr=0x80217BA4u; f_8018615C(c); // 80217BA0
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217BA4
  c->r[29]=c->r[31]+0x0000002Cu; // 80217BA8
  c->r[3]=c->r[30]|c->r[30]; // 80217BAC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217BB0
  c->r[4]=R32(c->r[29]+c->r[0]); // 80217BB4
  c->lr=0x80217BBCu; f_801B0AA8(c); // 80217BB8
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217BBC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217BC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217BC4
  c->r[3]=R32(c->r[29]+c->r[0]); // 80217BC8
  c->lr=0x80217BD0u; f_801138D4(c); // 80217BCC
  {uint32_t ea=c->r[30]+0x00002738u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217BD0
  c->r[3]=c->r[30]|c->r[30]; // 80217BD4
  c->r[4]=0u+0x00000004u; // 80217BD8
  c->r[5]=0u+0x00000000u; // 80217BDC
  c->lr=0x80217BE4u; f_80218D10(c); // 80217BE0
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217BE4
  W8(c->r[30]+0x00001F61u,c->r[28]); // 80217BE8
  c->r[0]=c->r[3]+0x00000001u; // 80217BEC
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217BF0
L_80217BF4:;
  c->r[3]=c->r[30]|c->r[30]; // 80217BF4
  c->r[4]=0u+0xFFFFFFFFu; // 80217BF8
  c->lr=0x80217C00u; f_80218930(c); // 80217BFC
  goto L_80217CDC; // 80217C00
L_80217C04:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217C04
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217C08
  c->lr=0x80217C10u; f_800752CC(c); // 80217C0C
  {uint32_t ea=c->r[2]+0xFFFFCDA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217C10
  fcmp(c,0,c->f[1],c->f[0]); // 80217C14
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217C18
  if (!crb(c,2)) { goto L_80217CDC; } // 80217C1C
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217C20
  c->r[31]=0u+0x803E0000u; // 80217C24
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217C28
  c->r[29]=0u+0x80410000u; // 80217C2C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217C30
  c->r[31]=c->r[31]+0x00002B48u; // 80217C34
  c->r[4]=R32(c->r[31]+c->r[0]); // 80217C38
  c->r[29]=c->r[29]+0xFFFFC2E0u; // 80217C3C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80217C40
  c->r[3]=c->r[30]+0x0000255Cu; // 80217C44
  c->r[0]=c->r[4]+0x00000004u; // 80217C48
  c->r[4]=c->r[1]+0x00000014u; // 80217C4C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80217C50
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80217C54
  c->r[5]=c->r[29]+c->r[0]; // 80217C58
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217C5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80217C60
  c->lr=0x80217C68u; f_801AC114(c); // 80217C64
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217C68
  c->r[3]=c->r[1]+0x00000008u; // 80217C6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217C70
  c->r[4]=R32(c->r[31]+c->r[0]); // 80217C74
  c->r[0]=c->r[4]+0x00000004u; // 80217C78
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80217C7C
  c->r[4]=c->r[29]+c->r[0]; // 80217C80
  c->lr=0x80217C88u; f_8003F484(c); // 80217C84
  c->r[4]=c->r[3]|c->r[3]; // 80217C88
  c->r[3]=c->r[30]+0x0000255Cu; // 80217C8C
  c->lr=0x80217C94u; f_801AC10C(c); // 80217C90
  c->r[3]=0u+0x00000001u; // 80217C94
  goto L_80217CE0; // 80217C98
L_80217C9C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217C9C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217CA0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217CA4
  c->lr=0x80217CACu; f_8016498C(c); // 80217CA8
  cmps(c,0,(int32_t)c->r[3],0); // 80217CAC
  if (crb(c,2)) { goto L_80217CDC; } // 80217CB0
  c->r[3]=0u+0x00000001u; // 80217CB4
  goto L_80217CE0; // 80217CB8
L_80217CBC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217CBC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217CC0
  c->r[3]=R32(c->r[3]+0x00000004u); // 80217CC4
  c->lr=0x80217CCCu; f_8016498C(c); // 80217CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80217CCC
  if (crb(c,2)) { goto L_80217CDC; } // 80217CD0
  c->r[3]=0u+0x00000001u; // 80217CD4
  goto L_80217CE0; // 80217CD8
L_80217CDC:;
  c->r[3]=0u+0x00000000u; // 80217CDC
L_80217CE0:;
  c->r[11]=c->r[1]+0x00000030u; // 80217CE0
  c->lr=0x80217CE8u; { c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80217CE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80217CE8
  c->lr=c->r[0]; // 80217CEC
  c->r[1]=c->r[1]+0x00000030u; // 80217CF0
  return; // 80217CF4
}

// fn_80217CF8
void f_80217CF8(Ctx* __restrict c) {
  trace_call(0x80217CF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217CF8
  c->r[0]=c->lr; // 80217CFC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80217D00
  c->r[11]=c->r[1]+0x00000030u; // 80217D04
  c->lr=0x80217D0Cu; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80217D08
  c->r[0]=R32(c->r[3]+0x00002704u); // 80217D0C
  c->r[31]=0u+0x805D0000u; // 80217D10
  c->r[30]=c->r[3]|c->r[3]; // 80217D14
  cmps(c,0,(int32_t)c->r[0],2); // 80217D18
  c->r[31]=c->r[31]+0xFFFFEA00u; // 80217D1C
  if (crb(c,2)) { goto L_80217EC0; } // 80217D20
  if (!crb(c,0)) { goto L_80217D38; } // 80217D24
  cmps(c,0,(int32_t)c->r[0],0); // 80217D28
  if (crb(c,2)) { goto L_80217D44; } // 80217D2C
  if (!crb(c,0)) { goto L_80217E0C; } // 80217D30
  goto L_80217F9C; // 80217D34
L_80217D38:;
  cmps(c,0,(int32_t)c->r[0],4); // 80217D38
  if (!crb(c,0)) { goto L_80217F9C; } // 80217D3C
  goto L_80217F6C; // 80217D40
L_80217D44:;
  c->r[0]=R32(c->r[3]+0x00002700u); // 80217D44
  c->r[4]=0u+0x00000000u; // 80217D48
  W8(c->r[3]+0x00001F5Fu,c->r[4]); // 80217D4C
  c->r[29]=c->r[31]+0x0000008Cu; // 80217D50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217D54
  c->r[4]=R32(c->r[29]+c->r[0]); // 80217D58
  c->lr=0x80217D60u; f_801B0AA8(c); // 80217D5C
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217D60
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217D64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217D68
  c->r[3]=R32(c->r[29]+c->r[0]); // 80217D6C
  c->lr=0x80217D74u; f_801138D4(c); // 80217D70
  c->lr=0x80217D78u; f_80061A4C(c); // 80217D74
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217D78
  c->lr=0x80217D80u; f_80063940(c); // 80217D7C
  c->r[4]=R32(c->r[13]+0xFFFF8BD4u); // 80217D80
  c->r[3]=c->r[30]+0x000008ECu; // 80217D84
  c->lr=0x80217D8Cu; f_80075440(c); // 80217D88
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217D8C
  c->r[5]=c->r[3]|c->r[3]; // 80217D90
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217D94
  c->r[3]=c->r[30]+0x00000C88u; // 80217D98
  c->r[4]=c->r[30]+0x000008ECu; // 80217D9C
  c->r[6]=0u+0x00000000u; // 80217DA0
  c->r[7]=0u+0x00000000u; // 80217DA4
  c->lr=0x80217DACu; f_800BB0C8(c); // 80217DA8
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217DAC
  c->r[5]=0u+0x803E0000u; // 80217DB0
  c->r[4]=0u+0x80410000u; // 80217DB4
  c->r[3]=c->r[1]+0x00000014u; // 80217DB8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217DBC
  c->r[5]=c->r[5]+0x00002B48u; // 80217DC0
  c->r[5]=R32(c->r[5]+c->r[0]); // 80217DC4
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 80217DC8
  c->r[0]=c->r[5]+0x00000002u; // 80217DCC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80217DD0
  c->r[4]=c->r[4]+c->r[0]; // 80217DD4
  c->lr=0x80217DDCu; f_8003F484(c); // 80217DD8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217DDC
  c->r[4]=c->r[3]|c->r[3]; // 80217DE0
  {uint32_t ea=c->r[2]+0xFFFFCD68u; c->f[3]=c->ps1[3]=RF32(ea);} // 80217DE4
  c->r[3]=c->r[30]+0x0000255Cu; // 80217DE8
  c->f[2]=c->f[1]; // 80217DEC
  c->f[4]=c->f[1]; // 80217DF0
  c->lr=0x80217DF8u; f_801AC5E8(c); // 80217DF4
  c->r[3]=c->r[30]|c->r[30]; // 80217DF8
  c->lr=0x80217E00u; f_8018615C(c); // 80217DFC
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217E00
  c->r[0]=c->r[3]+0x00000001u; // 80217E04
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217E08
L_80217E0C:;
  c->r[0]=R32(c->r[30]+0x0000255Cu); // 80217E0C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80217E10
  if (!crb(c,2)) { goto L_80217F9C; } // 80217E14
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217E18
  c->r[3]=0u+0x803E0000u; // 80217E1C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217E20
  c->r[4]=0u+0x80410000u; // 80217E24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217E28
  c->r[3]=c->r[3]+0x00002B48u; // 80217E2C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80217E30
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 80217E34
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 80217E38
  c->r[0]=c->r[3]+0x00000002u; // 80217E3C
  {uint32_t ea=c->r[2]+0xFFFFCD50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217E40
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80217E44
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 80217E48
  c->r[4]=c->r[4]+c->r[0]; // 80217E4C
  c->r[3]=c->r[30]+0x0000255Cu; // 80217E50
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217E54
  c->r[4]=c->r[1]+0x00000008u; // 80217E58
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80217E5C
  c->lr=0x80217E64u; f_801ACA68(c); // 80217E60
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217E64
  c->r[4]=c->r[31]+0x0000007Cu; // 80217E68
  c->r[3]=c->r[30]+0x000008ECu; // 80217E6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217E70
  c->r[4]=R32(c->r[4]+c->r[0]); // 80217E74
  c->lr=0x80217E7Cu; f_80075440(c); // 80217E78
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217E7C
  c->r[5]=c->r[3]|c->r[3]; // 80217E80
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80217E84
  c->r[3]=c->r[30]+0x00000C88u; // 80217E88
  c->r[4]=c->r[30]+0x000008ECu; // 80217E8C
  c->r[6]=0u+0x00000000u; // 80217E90
  c->r[7]=0u+0x00000000u; // 80217E94
  c->lr=0x80217E9Cu; f_800BB0C8(c); // 80217E98
  c->r[3]=c->r[30]|c->r[30]; // 80217E9C
  c->lr=0x80217EA4u; f_8018615C(c); // 80217EA0
  c->r[3]=c->r[30]|c->r[30]; // 80217EA4
  c->r[4]=0u+0x00000006u; // 80217EA8
  c->lr=0x80217EB0u; f_80218930(c); // 80217EAC
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217EB0
  c->r[0]=c->r[3]+0x00000001u; // 80217EB4
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217EB8
  goto L_80217F9C; // 80217EBC
L_80217EC0:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80217EC0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217EC4
  c->lr=0x80217ECCu; f_800752CC(c); // 80217EC8
  {uint32_t ea=c->r[2]+0xFFFFCD84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80217ECC
  fcmp(c,0,c->f[1],c->f[0]); // 80217ED0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80217ED4
  if (!crb(c,2)) { goto L_80217F9C; } // 80217ED8
  c->r[3]=c->r[30]|c->r[30]; // 80217EDC
  c->lr=0x80217EE4u; f_802188B0(c); // 80217EE0
  cmpu(c,0,c->r[3],0x00000001u); // 80217EE4
  if (!crb(c,2)) { goto L_80217F1C; } // 80217EE8
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217EEC
  c->r[31]=c->r[31]+0x0000009Cu; // 80217EF0
  c->r[3]=c->r[30]|c->r[30]; // 80217EF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217EF8
  c->r[4]=R32(c->r[31]+c->r[0]); // 80217EFC
  c->lr=0x80217F04u; f_801B0AA8(c); // 80217F00
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217F04
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217F08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217F0C
  c->r[3]=R32(c->r[31]+c->r[0]); // 80217F10
  c->lr=0x80217F18u; f_801138D4(c); // 80217F14
  goto L_80217F5C; // 80217F18
L_80217F1C:;
  {uint32_t ea=c->r[30]+0x0000273Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80217F1C
  c->r[3]=c->r[30]|c->r[30]; // 80217F20
  c->r[4]=0u+0x00000004u; // 80217F24
  c->r[5]=0u+0x00000000u; // 80217F28
  c->lr=0x80217F30u; f_80218D10(c); // 80217F2C
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217F30
  c->r[31]=c->r[31]+0x000000ACu; // 80217F34
  c->r[3]=c->r[30]|c->r[30]; // 80217F38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217F3C
  c->r[4]=R32(c->r[31]+c->r[0]); // 80217F40
  c->lr=0x80217F48u; f_801B0AA8(c); // 80217F44
  c->r[0]=R32(c->r[30]+0x00002700u); // 80217F48
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217F4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217F50
  c->r[3]=R32(c->r[31]+c->r[0]); // 80217F54
  c->lr=0x80217F5Cu; f_801138D4(c); // 80217F58
L_80217F5C:;
  c->r[3]=R32(c->r[30]+0x00002704u); // 80217F5C
  c->r[0]=c->r[3]+0x00000001u; // 80217F60
  W32(c->r[30]+0x00002704u,c->r[0]); // 80217F64
  goto L_80217F9C; // 80217F68
L_80217F6C:;
  c->lr=0x80217F70u; f_80218CA4(c); // 80217F6C
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80217F70
  fcmp(c,0,c->f[0],c->f[1]); // 80217F74
  if (!crb(c,2)) { goto L_80217F9C; } // 80217F78
  c->r[3]=R32(c->r[30]+0x00000974u); // 80217F7C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80217F80
  c->r[3]=R32(c->r[3]+0x00000000u); // 80217F84
  c->lr=0x80217F8Cu; f_8016498C(c); // 80217F88
  cmps(c,0,(int32_t)c->r[3],0); // 80217F8C
  if (crb(c,2)) { goto L_80217F9C; } // 80217F90
  c->r[3]=0u+0x00000001u; // 80217F94
  goto L_80217FA0; // 80217F98
L_80217F9C:;
  c->r[3]=0u+0x00000000u; // 80217F9C
L_80217FA0:;
  c->r[11]=c->r[1]+0x00000030u; // 80217FA0
  c->lr=0x80217FA8u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80217FA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80217FA8
  c->lr=c->r[0]; // 80217FAC
  c->r[1]=c->r[1]+0x00000030u; // 80217FB0
  return; // 80217FB4
}

// fn_80217FB8
void f_80217FB8(Ctx* __restrict c) {
  trace_call(0x80217FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80217FB8
  c->r[0]=c->lr; // 80217FBC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80217FC0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 80217FC4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 80217FC8
  c->r[11]=c->r[1]+0x00000090u; // 80217FCC
  c->lr=0x80217FD4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80217FD0
  c->r[0]=R32(c->r[3]+0x00002704u); // 80217FD4
  c->r[31]=0u+0x805D0000u; // 80217FD8
  c->r[30]=c->r[3]|c->r[3]; // 80217FDC
  cmpu(c,0,c->r[0],0x00000008u); // 80217FE0
  c->r[31]=c->r[31]+0xFFFFEA00u; // 80217FE4
  if (crb(c,1)) { goto L_8021888C; } // 80217FE8
  c->r[4]=0u+0x80410000u; // 80217FEC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80217FF0
  c->r[4]=c->r[4]+0xFFFFC4D8u; // 80217FF4
  c->r[4]=R32(c->r[4]+c->r[0]); // 80217FF8
  c->ctr=c->r[4]; // 80217FFC
  if (true) { switch (c->ctr) { case 0x80218004u: goto L_80218004; case 0x80218164u: goto L_80218164; case 0x802181BCu: goto L_802181BC; case 0x8021826Cu: goto L_8021826C; case 0x80218380u: goto L_80218380; case 0x80218538u: goto L_80218538; case 0x80218808u: goto L_80218808; case 0x8021881Cu: goto L_8021881C; case 0x8021885Cu: goto L_8021885C; default: break; } dispatch(c,c->ctr); return; } // 80218000
L_80218004:;
  c->lr=0x80218008u; f_801861D4(c); // 80218004
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218008
  fcmp(c,0,c->f[1],c->f[0]); // 8021800C
  if (!crb(c,0)) { goto L_8021801C; } // 80218010
  {uint32_t ea=c->r[2]+0xFFFFCDA8u; c->f[31]=c->ps1[31]=RF32(ea);} // 80218014
  goto L_80218034; // 80218018
L_8021801C:;
  {uint32_t ea=c->r[2]+0xFFFFCDB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021801C
  fcmp(c,0,c->f[1],c->f[0]); // 80218020
  if (!crb(c,0)) { goto L_80218030; } // 80218024
  {uint32_t ea=c->r[2]+0xFFFFCDACu; c->f[31]=c->ps1[31]=RF32(ea);} // 80218028
  goto L_80218034; // 8021802C
L_80218030:;
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[31]=c->ps1[31]=RF32(ea);} // 80218030
L_80218034:;
  c->lr=0x80218038u; f_80291D94(c); // 80218034
  c->r[3]=c->r[3]^0x80000000u; // 80218038
  c->r[0]=0u+0x43300000u; // 8021803C
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 80218040
  {uint32_t ea=c->r[2]+0xFFFFCDE8u; c->f[3]=RF64(ea);} // 80218044
  W32(c->r[1]+0x00000078u,c->r[0]); // 80218048
  {uint32_t ea=c->r[2]+0xFFFFCDB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021804C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[2]=RF64(ea);} // 80218050
  {uint32_t ea=c->r[2]+0xFFFFCDB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218054
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80218058
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8021805C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80218060
  fcmp(c,0,c->f[0],c->f[31]); // 80218064
  if (!crb(c,0)) { goto L_80218078; } // 80218068
  c->r[0]=0u+0x00000001u; // 8021806C
  W32(c->r[30]+0x0000275Cu,c->r[0]); // 80218070
  goto L_80218080; // 80218074
L_80218078:;
  c->r[0]=0u+0x00000000u; // 80218078
  W32(c->r[30]+0x0000275Cu,c->r[0]); // 8021807C
L_80218080:;
  c->r[3]=c->r[30]|c->r[30]; // 80218080
  c->r[4]=0u+0x00000007u; // 80218084
  c->lr=0x8021808Cu; f_80218930(c); // 80218088
  c->r[0]=R8(c->r[30]+0x00001F65u); // 8021808C
  c->r[3]=0u+0x00000000u; // 80218090
  W8(c->r[30]+0x00002755u,c->r[3]); // 80218094
  cmps(c,0,(int32_t)c->r[0],0); // 80218098
  W32(c->r[30]+0x00002758u,c->r[3]); // 8021809C
  W8(c->r[30]+0x00001F5Fu,c->r[3]); // 802180A0
  if (crb(c,2)) { goto L_8021811C; } // 802180A4
  c->r[0]=R32(c->r[30]+0x00002700u); // 802180A8
  c->r[29]=0u+0x803E0000u; // 802180AC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802180B0
  c->r[31]=0u+0x80410000u; // 802180B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802180B8
  c->r[29]=c->r[29]+0x00002B48u; // 802180BC
  c->r[4]=R32(c->r[29]+c->r[0]); // 802180C0
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 802180C4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 802180C8
  c->r[3]=c->r[30]+0x0000255Cu; // 802180CC
  c->r[0]=c->r[4]+0x00000004u; // 802180D0
  c->r[4]=c->r[1]+0x00000068u; // 802180D4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802180D8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 802180DC
  c->r[5]=c->r[31]+c->r[0]; // 802180E0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802180E4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 802180E8
  c->lr=0x802180F0u; f_801AC114(c); // 802180EC
  c->r[0]=R32(c->r[30]+0x00002700u); // 802180F0
  c->r[3]=c->r[1]+0x0000005Cu; // 802180F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802180F8
  c->r[4]=R32(c->r[29]+c->r[0]); // 802180FC
  c->r[0]=c->r[4]+0x00000004u; // 80218100
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80218104
  c->r[4]=c->r[31]+c->r[0]; // 80218108
  c->lr=0x80218110u; f_8003F484(c); // 8021810C
  c->r[4]=c->r[3]|c->r[3]; // 80218110
  c->r[3]=c->r[30]+0x0000255Cu; // 80218114
  c->lr=0x8021811Cu; f_801AC10C(c); // 80218118
L_8021811C:;
  c->r[4]=R32(c->r[13]+0xFFFF8C1Cu); // 8021811C
  c->r[3]=c->r[30]+0x000008ECu; // 80218120
  c->lr=0x80218128u; f_80075440(c); // 80218124
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218128
  c->r[4]=c->r[3]|c->r[3]; // 8021812C
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80218130
  c->r[3]=c->r[30]+0x000008D0u; // 80218134
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218138
  c->r[5]=0u+0x00000000u; // 8021813C
  c->r[6]=0u+0xFFFFFFFFu; // 80218140
  c->r[7]=0u+0x00000000u; // 80218144
  c->lr=0x8021814Cu; f_8002D7B8(c); // 80218148
  c->r[3]=c->r[30]|c->r[30]; // 8021814C
  c->lr=0x80218154u; f_8018615C(c); // 80218150
  c->r[3]=R32(c->r[30]+0x00002704u); // 80218154
  c->r[0]=c->r[3]+0x00000001u; // 80218158
  W32(c->r[30]+0x00002704u,c->r[0]); // 8021815C
  goto L_8021888C; // 80218160
L_80218164:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 80218164
  c->r[3]=R32(c->r[3]+0x00000000u); // 80218168
  c->lr=0x80218170u; f_800752CC(c); // 8021816C
  {uint32_t ea=c->r[2]+0xFFFFCDBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80218170
  fcmp(c,0,c->f[1],c->f[0]); // 80218174
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80218178
  if (!crb(c,2)) { goto L_8021888C; } // 8021817C
  c->r[0]=R32(c->r[30]+0x00002700u); // 80218180
  c->r[29]=c->r[31]+0x000000BCu; // 80218184
  c->r[3]=c->r[30]|c->r[30]; // 80218188
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021818C
  c->r[4]=R32(c->r[29]+c->r[0]); // 80218190
  c->lr=0x80218198u; f_801B0AA8(c); // 80218194
  c->r[0]=R32(c->r[30]+0x00002700u); // 80218198
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021819C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802181A0
  c->r[3]=R32(c->r[29]+c->r[0]); // 802181A4
  c->lr=0x802181ACu; f_801138D4(c); // 802181A8
  c->r[3]=R32(c->r[30]+0x00002704u); // 802181AC
  c->r[0]=c->r[3]+0x00000001u; // 802181B0
  W32(c->r[30]+0x00002704u,c->r[0]); // 802181B4
  goto L_8021888C; // 802181B8
L_802181BC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 802181BC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802181C0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802181C4
  c->lr=0x802181CCu; f_8016498C(c); // 802181C8
  cmps(c,0,(int32_t)c->r[3],0); // 802181CC
  if (crb(c,2)) { goto L_8021888C; } // 802181D0
  c->r[0]=0u+0x00000001u; // 802181D4
  c->r[3]=c->r[30]+0x000008ECu; // 802181D8
  W8(c->r[30]+0x00002755u,c->r[0]); // 802181DC
  c->r[4]=R32(c->r[13]+0xFFFF8C34u); // 802181E0
  c->lr=0x802181E8u; f_80075440(c); // 802181E4
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802181E8
  c->r[4]=c->r[3]|c->r[3]; // 802181EC
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802181F0
  c->r[3]=c->r[30]+0x000008D0u; // 802181F4
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 802181F8
  c->r[5]=0u+0x00000000u; // 802181FC
  c->r[6]=0u+0xFFFFFFFFu; // 80218200
  c->r[7]=0u+0x00000000u; // 80218204
  c->lr=0x8021820Cu; f_8002D7B8(c); // 80218208
  c->r[3]=c->r[30]|c->r[30]; // 8021820C
  c->lr=0x80218214u; f_801861D4(c); // 80218210
  {uint32_t ea=c->r[2]+0xFFFFCD84u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218214
  c->r[3]=c->r[30]|c->r[30]; // 80218218
  {uint32_t ea=c->r[2]+0xFFFFCDC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021821C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80218220
  {uint32_t ea=c->r[30]+0x00002768u; WF32(ea,c->f[0]);} // 80218224
  c->lr=0x8021822Cu; f_801861D4(c); // 80218228
  {uint32_t ea=c->r[2]+0xFFFFCD54u; c->f[3]=c->ps1[3]=RF32(ea);} // 8021822C
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218230
  {uint32_t ea=c->r[2]+0xFFFFCDC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218234
  c->f[1]=c->ps1[1]=S(-std::fma(c->f[3],c->f[1],-c->f[2])); // 80218238
  fcmp(c,0,c->f[1],c->f[0]); // 8021823C
  if (!crb(c,0)) { goto L_80218248; } // 80218240
  c->f[1]=c->f[0]; // 80218244
L_80218248:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 80218248
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021824C
  c->lr=0x80218254u; f_80165B9C(c); // 80218250
  c->r[3]=R32(c->r[30]+0x00002704u); // 80218254
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218258
  c->r[0]=c->r[3]+0x00000001u; // 8021825C
  {uint32_t ea=c->r[30]+0x00001F78u; WF32(ea,c->f[0]);} // 80218260
  W32(c->r[30]+0x00002704u,c->r[0]); // 80218264
  goto L_8021888C; // 80218268
L_8021826C:;
  c->lr=0x80218270u; f_802188B0(c); // 8021826C
  cmpu(c,0,c->r[3],0x00000001u); // 80218270
  if (!crb(c,2)) { goto L_80218304; } // 80218274
  c->r[0]=R32(c->r[30]+0x00002700u); // 80218278
  c->r[29]=c->r[31]+0x000000CCu; // 8021827C
  c->r[3]=c->r[30]|c->r[30]; // 80218280
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218284
  c->r[4]=R32(c->r[29]+c->r[0]); // 80218288
  c->lr=0x80218290u; f_801B0AA8(c); // 8021828C
  c->r[0]=R32(c->r[30]+0x00002700u); // 80218290
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218294
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218298
  c->r[3]=R32(c->r[29]+c->r[0]); // 8021829C
  c->lr=0x802182A4u; f_801138D4(c); // 802182A0
  c->r[4]=R32(c->r[13]+0xFFFF8C30u); // 802182A4
  c->r[3]=c->r[30]+0x000008ECu; // 802182A8
  c->lr=0x802182B0u; f_80075440(c); // 802182AC
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 802182B0
  c->r[5]=c->r[3]|c->r[3]; // 802182B4
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 802182B8
  c->r[3]=c->r[30]+0x00000C88u; // 802182BC
  c->r[4]=c->r[30]+0x000008ECu; // 802182C0
  c->r[6]=0u+0x00000000u; // 802182C4
  c->r[7]=0u+0x00000000u; // 802182C8
  c->lr=0x802182D0u; f_800BB0C8(c); // 802182CC
  c->r[3]=R32(c->r[30]+0x00000974u); // 802182D0
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[1]=c->ps1[1]=RF32(ea);} // 802182D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802182D8
  c->lr=0x802182E0u; f_80165B9C(c); // 802182DC
  c->r[3]=c->r[30]|c->r[30]; // 802182E0
  c->lr=0x802182E8u; f_8018615C(c); // 802182E4
  c->r[3]=c->r[30]|c->r[30]; // 802182E8
  c->r[4]=0u+0xFFFFFFFFu; // 802182EC
  c->lr=0x802182F4u; f_80218930(c); // 802182F0
  c->r[3]=R32(c->r[30]+0x00002704u); // 802182F4
  c->r[0]=c->r[3]+0x00000002u; // 802182F8
  W32(c->r[30]+0x00002704u,c->r[0]); // 802182FC
  goto L_8021888C; // 80218300
L_80218304:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 80218304
  c->r[3]=R32(c->r[3]+0x00000000u); // 80218308
  c->lr=0x80218310u; f_800752CC(c); // 8021830C
  {uint32_t ea=c->r[30]+0x00002768u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218310
  fcmp(c,0,c->f[1],c->f[0]); // 80218314
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80218318
  if (!crb(c,2)) { goto L_8021888C; } // 8021831C
  {uint32_t ea=c->r[2]+0xFFFFCD54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218320
  c->r[3]=R32(c->r[30]+0x00000974u); // 80218324
  {uint32_t ea=c->r[30]+0x00002764u; WF32(ea,c->f[1]);} // 80218328
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021832C
  c->lr=0x80218334u; f_80165B9C(c); // 80218330
  c->r[0]=0u+0x00000001u; // 80218334
  c->r[3]=c->r[30]+0x000008ECu; // 80218338
  W8(c->r[30]+0x00002755u,c->r[0]); // 8021833C
  c->r[4]=R32(c->r[13]+0xFFFF8C20u); // 80218340
  c->lr=0x80218348u; f_80075440(c); // 80218344
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218348
  c->r[5]=c->r[3]|c->r[3]; // 8021834C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218350
  c->r[3]=c->r[30]+0x00000C88u; // 80218354
  c->r[4]=c->r[30]+0x000008ECu; // 80218358
  c->r[6]=0u+0x00000000u; // 8021835C
  c->r[7]=0u+0x00000004u; // 80218360
  c->lr=0x80218368u; f_800BB0C8(c); // 80218364
  c->r[3]=c->r[30]|c->r[30]; // 80218368
  c->lr=0x80218370u; f_8018615C(c); // 8021836C
  c->r[3]=R32(c->r[30]+0x00002704u); // 80218370
  c->r[0]=c->r[3]+0x00000001u; // 80218374
  W32(c->r[30]+0x00002704u,c->r[0]); // 80218378
  goto L_8021888C; // 8021837C
L_80218380:;
  c->r[4]=0u+0x804D0000u; // 80218380
  c->r[0]=0u+0x43300000u; // 80218384
  c->r[4]=c->r[4]+0x00003318u; // 80218388
  W32(c->r[1]+0x00000078u,c->r[0]); // 8021838C
  c->r[0]=R32(c->r[4]+0x00000028u); // 80218390
  {uint32_t ea=c->r[2]+0xFFFFCDE8u; c->f[1]=RF64(ea);} // 80218394
  c->r[0]=c->r[0]^0x80000000u; // 80218398
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8021839C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802183A0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802183A4
  {uint32_t ea=c->r[1]+0x00000078u; c->f[0]=RF64(ea);} // 802183A8
  {uint32_t ea=c->r[2]+0xFFFFCDC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802183AC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 802183B0
  {uint32_t ea=c->r[3]+0x00002764u; c->f[1]=c->ps1[1]=RF32(ea);} // 802183B4
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[0]=c->ps1[0]=RF32(ea);} // 802183B8
  c->f[3]=c->ps1[3]=S(c->f[4]/c->f[3]); // 802183BC
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 802183C0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],c->f[1])); // 802183C4
  fcmp(c,0,c->f[1],c->f[0]); // 802183C8
  {uint32_t ea=c->r[3]+0x00002764u; WF32(ea,c->f[1]);} // 802183CC
  if (!crb(c,1)) { goto L_802183D8; } // 802183D0
  {uint32_t ea=c->r[3]+0x00002764u; WF32(ea,c->f[0]);} // 802183D4
L_802183D8:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 802183D8
  {uint32_t ea=c->r[30]+0x00002764u; c->f[1]=c->ps1[1]=RF32(ea);} // 802183DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802183E0
  c->lr=0x802183E8u; f_80165B9C(c); // 802183E4
  c->r[3]=c->r[30]|c->r[30]; // 802183E8
  c->lr=0x802183F0u; f_802188B0(c); // 802183EC
  cmpu(c,0,c->r[3],0x00000001u); // 802183F0
  if (!crb(c,2)) { goto L_80218484; } // 802183F4
  c->r[0]=R32(c->r[30]+0x00002700u); // 802183F8
  c->r[29]=c->r[31]+0x000000CCu; // 802183FC
  c->r[3]=c->r[30]|c->r[30]; // 80218400
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218404
  c->r[4]=R32(c->r[29]+c->r[0]); // 80218408
  c->lr=0x80218410u; f_801B0AA8(c); // 8021840C
  c->r[0]=R32(c->r[30]+0x00002700u); // 80218410
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218414
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218418
  c->r[3]=R32(c->r[29]+c->r[0]); // 8021841C
  c->lr=0x80218424u; f_801138D4(c); // 80218420
  c->r[4]=R32(c->r[13]+0xFFFF8C30u); // 80218424
  c->r[3]=c->r[30]+0x000008ECu; // 80218428
  c->lr=0x80218430u; f_80075440(c); // 8021842C
  {uint32_t ea=c->r[2]+0xFFFFCD44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218430
  c->r[5]=c->r[3]|c->r[3]; // 80218434
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218438
  c->r[3]=c->r[30]+0x00000C88u; // 8021843C
  c->r[4]=c->r[30]+0x000008ECu; // 80218440
  c->r[6]=0u+0x00000000u; // 80218444
  c->r[7]=0u+0x00000000u; // 80218448
  c->lr=0x80218450u; f_800BB0C8(c); // 8021844C
  c->r[3]=R32(c->r[30]+0x00000974u); // 80218450
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218454
  c->r[3]=R32(c->r[3]+0x00000000u); // 80218458
  c->lr=0x80218460u; f_80165B9C(c); // 8021845C
  c->r[3]=c->r[30]|c->r[30]; // 80218460
  c->lr=0x80218468u; f_8018615C(c); // 80218464
  c->r[3]=c->r[30]|c->r[30]; // 80218468
  c->r[4]=0u+0xFFFFFFFFu; // 8021846C
  c->lr=0x80218474u; f_80218930(c); // 80218470
  c->r[3]=R32(c->r[30]+0x00002704u); // 80218474
  c->r[0]=c->r[3]+0x00000001u; // 80218478
  W32(c->r[30]+0x00002704u,c->r[0]); // 8021847C
  goto L_8021888C; // 80218480
L_80218484:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 80218484
  c->r[3]=R32(c->r[3]+0x00000000u); // 80218488
  c->lr=0x80218490u; f_800752CC(c); // 8021848C
  c->r[4]=R32(c->r[30]+0x00002758u); // 80218490
  c->r[3]=0u+0x803E0000u; // 80218494
  c->r[3]=c->r[3]+0x00002B58u; // 80218498
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8021849C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802184A0
  fcmp(c,0,c->f[1],c->f[0]); // 802184A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802184A8
  if (!crb(c,2)) { goto L_802184D4; } // 802184AC
  c->r[0]=c->r[4]+0x00000001u; // 802184B0
  {uint32_t ea=c->r[30]+0x00002740u; c->f[1]=c->ps1[1]=RF32(ea);} // 802184B4
  W32(c->r[30]+0x00002758u,c->r[0]); // 802184B8
  c->r[3]=c->r[30]|c->r[30]; // 802184BC
  c->r[4]=0u+0x00000004u; // 802184C0
  c->r[5]=0u+0x00000000u; // 802184C4
  c->lr=0x802184CCu; f_80218D10(c); // 802184C8
  c->r[0]=0u+0x00000000u; // 802184CC
  W8(c->r[30]+0x00001F5Fu,c->r[0]); // 802184D0
L_802184D4:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 802184D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802184D8
  c->lr=0x802184E0u; f_800752CC(c); // 802184DC
  {uint32_t ea=c->r[2]+0xFFFFCDCCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802184E0
  fcmp(c,0,c->f[1],c->f[0]); // 802184E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802184E8
  if (!crb(c,2)) { goto L_8021888C; } // 802184EC
  c->r[0]=R32(c->r[30]+0x00002700u); // 802184F0
  c->r[29]=c->r[31]+0x000000DCu; // 802184F4
  c->r[3]=c->r[30]|c->r[30]; // 802184F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802184FC
  c->r[4]=R32(c->r[29]+c->r[0]); // 80218500
  c->lr=0x80218508u; f_801B0AA8(c); // 80218504
  c->r[0]=R32(c->r[30]+0x00002700u); // 80218508
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021850C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218510
  c->r[3]=R32(c->r[29]+c->r[0]); // 80218514
  c->lr=0x8021851Cu; f_801138D4(c); // 80218518
  c->r[5]=R32(c->r[30]+0x00002704u); // 8021851C
  c->r[3]=c->r[30]|c->r[30]; // 80218520
  c->r[4]=0u+0xFFFFFFFFu; // 80218524
  c->r[0]=c->r[5]+0x00000003u; // 80218528
  W32(c->r[30]+0x00002704u,c->r[0]); // 8021852C
  c->lr=0x80218534u; f_80218930(c); // 80218530
  goto L_8021888C; // 80218534
L_80218538:;
  c->r[0]=R32(c->r[3]+0x00002700u); // 80218538
  cmps(c,0,(int32_t)c->r[0],3); // 8021853C
  if (!crb(c,2)) { goto L_802185F8; } // 80218540
  c->r[3]=R32(c->r[3]+0x00000974u); // 80218544
  c->r[29]=R32(c->r[3]+0x00000000u); // 80218548
  c->r[3]=c->r[29]|c->r[29]; // 8021854C
  c->lr=0x80218554u; f_800752CC(c); // 80218550
  c->f[31]=c->f[1]; // 80218554
  c->r[3]=c->r[29]|c->r[29]; // 80218558
  c->lr=0x80218560u; f_801652C0(c); // 8021855C
  {uint32_t ea=c->r[2]+0xFFFFCDACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80218560
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80218564
  fcmp(c,0,c->f[0],c->f[31]); // 80218568
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8021856C
  if (!crb(c,2)) { goto L_8021888C; } // 80218570
  c->r[4]=R32(c->r[13]+0xFFFF8BD8u); // 80218574
  c->r[3]=c->r[30]+0x000008ECu; // 80218578
  c->lr=0x80218580u; f_80075440(c); // 8021857C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218580
  c->r[4]=c->r[3]|c->r[3]; // 80218584
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80218588
  c->r[3]=c->r[30]+0x000008D0u; // 8021858C
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218590
  c->r[5]=0u+0x00000000u; // 80218594
  c->r[6]=0u+0xFFFFFFFFu; // 80218598
  c->r[7]=0u+0x00000000u; // 8021859C
  c->lr=0x802185A4u; f_8002D7B8(c); // 802185A0
  c->r[0]=R32(c->r[30]+0x00002700u); // 802185A4
  c->r[5]=0u+0x803E0000u; // 802185A8
  c->r[4]=0u+0x80410000u; // 802185AC
  c->r[3]=c->r[1]+0x00000050u; // 802185B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802185B4
  c->r[5]=c->r[5]+0x00002B48u; // 802185B8
  c->r[5]=R32(c->r[5]+c->r[0]); // 802185BC
  c->r[4]=c->r[4]+0xFFFFC2E0u; // 802185C0
  c->r[0]=c->r[5]+0x00000003u; // 802185C4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802185C8
  c->r[4]=c->r[4]+c->r[0]; // 802185CC
  c->lr=0x802185D4u; f_8003F484(c); // 802185D0
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802185D4
  c->r[4]=c->r[3]|c->r[3]; // 802185D8
  {uint32_t ea=c->r[2]+0xFFFFCDD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802185DC
  c->r[3]=c->r[30]+0x0000255Cu; // 802185E0
  c->lr=0x802185E8u; f_801ACA00(c); // 802185E4
  c->r[3]=R32(c->r[30]+0x00002704u); // 802185E8
  c->r[0]=c->r[3]+0x00000001u; // 802185EC
  W32(c->r[30]+0x00002704u,c->r[0]); // 802185F0
  goto L_8021888C; // 802185F4
L_802185F8:;
  cmps(c,0,(int32_t)c->r[0],2); // 802185F8
  if (!crb(c,2)) { goto L_8021865C; } // 802185FC
  c->lr=0x80218604u; f_80218CA4(c); // 80218600
  {uint32_t ea=c->r[2]+0xFFFFCDD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218604
  fcmp(c,0,c->f[1],c->f[0]); // 80218608
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021860C
  if (!crb(c,2)) { goto L_8021888C; } // 80218610
  c->r[29]=0u+0x80410000u; // 80218614
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218618
  c->r[29]=c->r[29]+0xFFFFC2E0u; // 8021861C
  c->r[3]=c->r[30]+0x0000255Cu; // 80218620
  {uint32_t ea=c->r[29]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218624
  c->r[4]=c->r[1]+0x00000044u; // 80218628
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8021862C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80218630
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80218634
  c->lr=0x8021863Cu; f_801AC114(c); // 80218638
  c->r[3]=c->r[1]+0x00000038u; // 8021863C
  c->r[4]=c->r[29]+0x000000D0u; // 80218640
  c->lr=0x80218648u; f_8003F484(c); // 80218644
  c->r[4]=c->r[3]|c->r[3]; // 80218648
  c->r[3]=c->r[30]+0x0000255Cu; // 8021864C
  c->lr=0x80218654u; f_801AC10C(c); // 80218650
  c->r[3]=0u+0x00000001u; // 80218654
  goto L_80218890; // 80218658
L_8021865C:;
  cmps(c,0,(int32_t)c->r[0],1); // 8021865C
  if (!crb(c,2)) { goto L_802186F4; } // 80218660
  c->lr=0x80218668u; f_80218CA4(c); // 80218664
  {uint32_t ea=c->r[2]+0xFFFFCDD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218668
  fcmp(c,0,c->f[1],c->f[0]); // 8021866C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80218670
  if (!crb(c,2)) { goto L_8021888C; } // 80218674
  c->r[0]=R32(c->r[30]+0x00002700u); // 80218678
  c->r[31]=0u+0x803E0000u; // 8021867C
  c->r[29]=0u+0x80410000u; // 80218680
  c->r[3]=c->r[1]+0x0000002Cu; // 80218684
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80218688
  c->r[31]=c->r[31]+0x00002B48u; // 8021868C
  c->r[4]=R32(c->r[31]+c->r[0]); // 80218690
  c->r[29]=c->r[29]+0xFFFFC2E0u; // 80218694
  c->r[0]=c->r[4]+0x00000003u; // 80218698
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8021869C
  c->r[4]=c->r[29]+c->r[0]; // 802186A0
  c->lr=0x802186A8u; f_8003F484(c); // 802186A4
  c->r[4]=c->r[3]|c->r[3]; // 802186A8
  c->r[3]=c->r[30]+0x0000255Cu; // 802186AC
  c->lr=0x802186B4u; f_801AC10C(c); // 802186B0
  c->r[0]=R32(c->r[30]+0x00002700u); // 802186B4
  c->r[3]=c->r[30]+0x0000255Cu; // 802186B8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802186BC
  c->r[4]=c->r[1]+0x00000020u; // 802186C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802186C4
  c->r[5]=R32(c->r[31]+c->r[0]); // 802186C8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 802186CC
  c->r[0]=c->r[5]+0x00000003u; // 802186D0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802186D4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 802186D8
  c->r[5]=c->r[29]+c->r[0]; // 802186DC
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802186E0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 802186E4
  c->lr=0x802186ECu; f_801AC114(c); // 802186E8
  c->r[3]=0u+0x00000001u; // 802186EC
  goto L_80218890; // 802186F0
L_802186F4:;
  c->r[0]=R32(c->r[3]+0x0000275Cu); // 802186F4
  c->r[31]=0u+0x00000000u; // 802186F8
  cmps(c,0,(int32_t)c->r[0],0); // 802186FC
  if (crb(c,2)) { goto L_8021873C; } // 80218700
  c->r[3]=R32(c->r[3]+0x00000974u); // 80218704
  c->r[29]=R32(c->r[3]+0x00000000u); // 80218708
  c->r[3]=c->r[29]|c->r[29]; // 8021870C
  c->lr=0x80218714u; f_800752CC(c); // 80218710
  c->f[31]=c->f[1]; // 80218714
  c->r[3]=c->r[29]|c->r[29]; // 80218718
  c->lr=0x80218720u; f_801652C0(c); // 8021871C
  {uint32_t ea=c->r[2]+0xFFFFCD64u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218720
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80218724
  fcmp(c,0,c->f[0],c->f[31]); // 80218728
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8021872C
  if (!crb(c,2)) { goto L_80218770; } // 80218730
  c->r[31]=0u+0x00000001u; // 80218734
  goto L_80218770; // 80218738
L_8021873C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021873C
  c->r[29]=R32(c->r[3]+0x00000000u); // 80218740
  c->r[3]=c->r[29]|c->r[29]; // 80218744
  c->lr=0x8021874Cu; f_800752CC(c); // 80218748
  c->f[31]=c->f[1]; // 8021874C
  c->r[3]=c->r[29]|c->r[29]; // 80218750
  c->lr=0x80218758u; f_801652C0(c); // 80218754
  {uint32_t ea=c->r[2]+0xFFFFCD84u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218758
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8021875C
  fcmp(c,0,c->f[0],c->f[31]); // 80218760
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80218764
  if (!crb(c,2)) { goto L_80218770; } // 80218768
  c->r[31]=0u+0x00000001u; // 8021876C
L_80218770:;
  cmps(c,0,(int32_t)c->r[31],0); // 80218770
  if (crb(c,2)) { goto L_8021888C; } // 80218774
  c->r[0]=R32(c->r[30]+0x0000275Cu); // 80218778
  cmps(c,0,(int32_t)c->r[0],0); // 8021877C
  if (crb(c,2)) { goto L_8021878C; } // 80218780
  c->r[0]=0u+0x00000001u; // 80218784
  W8(c->r[30]+0x00001F66u,c->r[0]); // 80218788
L_8021878C:;
  c->r[0]=R32(c->r[30]+0x00002700u); // 8021878C
  c->r[29]=0u+0x803E0000u; // 80218790
  c->r[31]=0u+0x80410000u; // 80218794
  c->r[3]=c->r[1]+0x00000014u; // 80218798
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8021879C
  c->r[29]=c->r[29]+0x00002B48u; // 802187A0
  c->r[4]=R32(c->r[29]+c->r[0]); // 802187A4
  c->r[31]=c->r[31]+0xFFFFC2E0u; // 802187A8
  c->r[0]=c->r[4]+0x00000003u; // 802187AC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802187B0
  c->r[4]=c->r[31]+c->r[0]; // 802187B4
  c->lr=0x802187BCu; f_8003F484(c); // 802187B8
  c->r[4]=c->r[3]|c->r[3]; // 802187BC
  c->r[3]=c->r[30]+0x0000255Cu; // 802187C0
  c->lr=0x802187C8u; f_801AC10C(c); // 802187C4
  c->r[0]=R32(c->r[30]+0x00002700u); // 802187C8
  c->r[3]=c->r[30]+0x0000255Cu; // 802187CC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802187D0
  c->r[4]=c->r[1]+0x00000008u; // 802187D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802187D8
  c->r[5]=R32(c->r[29]+c->r[0]); // 802187DC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802187E0
  c->r[0]=c->r[5]+0x00000003u; // 802187E4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802187E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802187EC
  c->r[5]=c->r[31]+c->r[0]; // 802187F0
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802187F4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802187F8
  c->lr=0x80218800u; f_801AC114(c); // 802187FC
  c->r[3]=0u+0x00000001u; // 80218800
  goto L_80218890; // 80218804
L_80218808:;
  c->r[0]=R32(c->r[3]+0x0000255Cu); // 80218808
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8021880C
  if (!crb(c,2)) { goto L_8021888C; } // 80218810
  c->r[3]=0u+0x00000001u; // 80218814
  goto L_80218890; // 80218818
L_8021881C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021881C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80218820
  c->lr=0x80218828u; f_800752CC(c); // 80218824
  {uint32_t ea=c->r[2]+0xFFFFCDDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80218828
  fcmp(c,0,c->f[1],c->f[0]); // 8021882C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80218830
  if (!crb(c,2)) { goto L_8021888C; } // 80218834
  {uint32_t ea=c->r[2]+0xFFFFCDE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218838
  c->r[3]=c->r[30]|c->r[30]; // 8021883C
  c->r[4]=0u+0x00000004u; // 80218840
  c->r[5]=0u+0x01800000u; // 80218844
  c->lr=0x8021884Cu; f_80218D10(c); // 80218848
  c->r[3]=R32(c->r[30]+0x00002704u); // 8021884C
  c->r[0]=c->r[3]+0x00000001u; // 80218850
  W32(c->r[30]+0x00002704u,c->r[0]); // 80218854
  goto L_8021888C; // 80218858
L_8021885C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021885C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218860
  c->r[3]=R32(c->r[3]+0x00000000u); // 80218864
  c->lr=0x8021886Cu; f_8016498C(c); // 80218868
  cmps(c,0,(int32_t)c->r[3],0); // 8021886C
  if (crb(c,2)) { goto L_8021888C; } // 80218870
  c->r[3]=c->r[30]|c->r[30]; // 80218874
  c->lr=0x8021887Cu; f_800ACB54(c); // 80218878
  c->r[0]=0u+0x00000001u; // 8021887C
  c->r[3]=0u+0x00000001u; // 80218880
  W8(c->r[30]+0x00001F64u,c->r[0]); // 80218884
  goto L_80218890; // 80218888
L_8021888C:;
  c->r[3]=0u+0x00000000u; // 8021888C
L_80218890:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 80218890
  c->r[11]=c->r[1]+0x00000090u; // 80218894
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 80218898
  c->lr=0x802188A0u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021889C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 802188A0
  c->lr=c->r[0]; // 802188A4
  c->r[1]=c->r[1]+0x000000A0u; // 802188A8
  return; // 802188AC
}

// fn_802188B0
void f_802188B0(Ctx* __restrict c) {
  trace_call(0x802188B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802188B0
  c->r[0]=c->lr; // 802188B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802188B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802188BC
  c->r[31]=0u+0x00000000u; // 802188C0
  c->r[0]=R32(c->r[3]+0x0000274Cu); // 802188C4
  cmps(c,0,(int32_t)c->r[0],5); // 802188C8
  if (crb(c,2)) { goto L_80218914; } // 802188CC
  if (!crb(c,0)) { goto L_802188E0; } // 802188D0
  cmps(c,0,(int32_t)c->r[0],4); // 802188D4
  if (!crb(c,0)) { goto L_802188E8; } // 802188D8
  goto L_80218914; // 802188DC
L_802188E0:;
  cmps(c,0,(int32_t)c->r[0],7); // 802188E0
  if (!crb(c,0)) { goto L_80218914; } // 802188E4
L_802188E8:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 802188E8
  c->lr=0x802188F0u; f_800F39EC(c); // 802188EC
  c->lr=0x802188F4u; f_800DB6D4(c); // 802188F0
  cmps(c,0,(int32_t)c->r[3],3); // 802188F4
  if (!crb(c,2)) { goto L_80218900; } // 802188F8
  c->r[31]=0u+0x00000001u; // 802188FC
L_80218900:;
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80218900
  c->lr=0x80218908u; f_800F39EC(c); // 80218904
  c->r[4]=0u+0xFFFFFFFFu; // 80218908
  c->lr=0x80218910u; f_800DB6F8(c); // 8021890C
  goto L_80218918; // 80218910
L_80218914:;
  c->r[31]=R8(c->r[3]+0x00001F60u); // 80218914
L_80218918:;
  c->r[3]=c->r[31]|c->r[31]; // 80218918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021891C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80218920
  c->lr=c->r[0]; // 80218924
  c->r[1]=c->r[1]+0x00000010u; // 80218928
  return; // 8021892C
}

// fn_80218930
void f_80218930(Ctx* __restrict c) {
  trace_call(0x80218930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218930
  c->r[0]=c->lr; // 80218934
  cmpu(c,0,c->r[4],0x00000007u); // 80218938
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021893C
  c->r[0]=0u+0x00000001u; // 80218940
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80218944
  c->r[31]=0u+0x00000000u; // 80218948
  W32(c->r[1]+0x00000018u,c->r[30]); // 8021894C
  c->r[30]=c->r[3]|c->r[3]; // 80218950
  W8(c->r[3]+0x00001F60u,c->r[31]); // 80218954
  W8(c->r[3]+0x00002755u,c->r[0]); // 80218958
  W32(c->r[3]+0x0000274Cu,c->r[4]); // 8021895C
  W8(c->r[3]+0x00001F63u,c->r[0]); // 80218960
  if (crb(c,1)) { goto L_80218A64; } // 80218964
  c->r[5]=0u+0x80410000u; // 80218968
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8021896C
  c->r[5]=c->r[5]+0xFFFFC4FCu; // 80218970
  c->r[5]=R32(c->r[5]+c->r[0]); // 80218974
  c->ctr=c->r[5]; // 80218978
  if (true) { switch (c->ctr) { case 0x80218980u: goto L_80218980; case 0x8021898Cu: goto L_8021898C; case 0x802189B8u: goto L_802189B8; case 0x802189C4u: goto L_802189C4; case 0x80218A08u: goto L_80218A08; case 0x80218A4Cu: goto L_80218A4C; case 0x80218A58u: goto L_80218A58; case 0x80218A64u: goto L_80218A64; default: break; } dispatch(c,c->ctr); return; } // 8021897C
L_80218980:;
  {uint32_t ea=c->r[3]+0x0000271Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80218980
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 80218984
  goto L_80218A6C; // 80218988
L_8021898C:;
  c->r[0]=R32(c->r[3]+0x00002700u); // 8021898C
  cmps(c,0,(int32_t)c->r[0],3); // 80218990
  if (!crb(c,2)) { goto L_802189AC; } // 80218994
  {uint32_t ea=c->r[2]+0xFFFFCD54u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218998
  {uint32_t ea=c->r[3]+0x00002710u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021899C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802189A0
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 802189A4
  goto L_80218A6C; // 802189A8
L_802189AC:;
  {uint32_t ea=c->r[3]+0x00002710u; c->f[0]=c->ps1[0]=RF32(ea);} // 802189AC
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 802189B0
  goto L_80218A6C; // 802189B4
L_802189B8:;
  {uint32_t ea=c->r[3]+0x00002714u; c->f[0]=c->ps1[0]=RF32(ea);} // 802189B8
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 802189BC
  goto L_80218A6C; // 802189C0
L_802189C4:;
  c->r[3]=R32(c->r[2]+0xFFFFCDF0u); // 802189C4
  c->r[0]=R32(c->r[2]+0xFFFFCDF4u); // 802189C8
  W32(c->r[1]+0x00000010u,c->r[3]); // 802189CC
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 802189D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802189D4
  c->lr=0x802189DCu; f_800F39EC(c); // 802189D8
  c->r[4]=0u+0x803E0000u; // 802189DC
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802189E0
  c->r[4]=c->r[4]+0xFFFFAA30u; // 802189E4
  {uint32_t ea=c->r[2]+0xFFFFCD84u; c->f[2]=c->ps1[2]=RF32(ea);} // 802189E8
  c->r[4]=c->r[4]+0x00000008u; // 802189EC
  c->r[5]=c->r[1]+0x00000010u; // 802189F0
  c->r[6]=0u+0x00000004u; // 802189F4
  c->r[7]=0u+0x00000005u; // 802189F8
  c->lr=0x80218A00u; f_800DAD9C(c); // 802189FC
  W8(c->r[30]+0x00001F63u,c->r[31]); // 80218A00
  goto L_80218A6C; // 80218A04
L_80218A08:;
  c->r[3]=R32(c->r[2]+0xFFFFCDF8u); // 80218A08
  c->r[0]=R32(c->r[2]+0xFFFFCDFCu); // 80218A0C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80218A10
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 80218A14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80218A18
  c->lr=0x80218A20u; f_800F39EC(c); // 80218A1C
  c->r[4]=0u+0x803E0000u; // 80218A20
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218A24
  c->r[4]=c->r[4]+0xFFFFAA30u; // 80218A28
  {uint32_t ea=c->r[2]+0xFFFFCE00u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218A2C
  c->r[4]=c->r[4]+0x00000008u; // 80218A30
  c->r[5]=c->r[1]+0x00000008u; // 80218A34
  c->r[6]=0u+0x00000004u; // 80218A38
  c->r[7]=0u+0x00000024u; // 80218A3C
  c->lr=0x80218A44u; f_800DAD9C(c); // 80218A40
  W8(c->r[30]+0x00001F63u,c->r[31]); // 80218A44
  goto L_80218A6C; // 80218A48
L_80218A4C:;
  {uint32_t ea=c->r[3]+0x00002718u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218A4C
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 80218A50
  goto L_80218A6C; // 80218A54
L_80218A58:;
  {uint32_t ea=c->r[3]+0x00002720u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218A58
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 80218A5C
  goto L_80218A6C; // 80218A60
L_80218A64:;
  c->r[0]=0u+0x00000000u; // 80218A64
  W8(c->r[3]+0x00001F63u,c->r[0]); // 80218A68
L_80218A6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80218A6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80218A70
  c->r[30]=R32(c->r[1]+0x00000018u); // 80218A74
  c->lr=c->r[0]; // 80218A78
  c->r[1]=c->r[1]+0x00000020u; // 80218A7C
  return; // 80218A80
}

// fn_80218A84
void f_80218A84(Ctx* __restrict c) {
  trace_call(0x80218A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218A84
  c->r[0]=c->lr; // 80218A88
  W32(c->r[1]+0x00000034u,c->r[0]); // 80218A8C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80218A90
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80218A94
  c->r[11]=c->r[1]+0x00000020u; // 80218A98
  c->lr=0x80218AA0u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80218A9C
  c->r[31]=c->r[5]|c->r[5]; // 80218AA0
  c->r[29]=c->r[3]|c->r[3]; // 80218AA4
  c->r[12]=R32(c->r[31]+0x00000000u); // 80218AA8
  c->r[3]=c->r[31]|c->r[31]; // 80218AAC
  c->r[30]=c->r[4]|c->r[4]; // 80218AB0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80218AB4
  c->ctr=c->r[12]; // 80218AB8
  if (true) { c->lr=0x80218AC0u; dispatch(c,c->ctr); } // 80218ABC
  cmps(c,0,(int32_t)c->r[3],20); // 80218AC0
  if (crb(c,2)) { goto L_80218B8C; } // 80218AC4
  if (!crb(c,0)) { goto L_80218AD8; } // 80218AC8
  cmps(c,0,(int32_t)c->r[3],3); // 80218ACC
  if (crb(c,2)) { goto L_80218AFC; } // 80218AD0
  goto L_80218AE8; // 80218AD4
L_80218AD8:;
  cmps(c,0,(int32_t)c->r[3],1030); // 80218AD8
  if (!crb(c,0)) { goto L_80218AE8; } // 80218ADC
  cmps(c,0,(int32_t)c->r[3],1025); // 80218AE0
  if (!crb(c,0)) { goto L_80218B18; } // 80218AE4
L_80218AE8:;
  c->r[3]=c->r[29]|c->r[29]; // 80218AE8
  c->r[4]=c->r[30]|c->r[30]; // 80218AEC
  c->r[5]=c->r[31]|c->r[31]; // 80218AF0
  c->lr=0x80218AF8u; f_800B5B1C(c); // 80218AF4
  goto L_80218B8C; // 80218AF8
L_80218AFC:;
  c->r[3]=c->r[29]|c->r[29]; // 80218AFC
  c->lr=0x80218B04u; f_802162A4(c); // 80218B00
  c->r[3]=c->r[29]|c->r[29]; // 80218B04
  c->r[4]=c->r[30]|c->r[30]; // 80218B08
  c->r[5]=c->r[31]|c->r[31]; // 80218B0C
  c->lr=0x80218B14u; f_800B5B1C(c); // 80218B10
  goto L_80218B8C; // 80218B14
L_80218B18:;
  c->r[0]=R32(c->r[29]+0x000007E4u); // 80218B18
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80218B1C
  if (!crb(c,2)) { goto L_80218B8C; } // 80218B20
  c->r[0]=R8(c->r[31]+0x00000034u); // 80218B24
  {uint32_t ea=c->r[29]+0x00002748u; c->f[31]=c->ps1[31]=RF32(ea);} // 80218B28
  cmps(c,0,(int32_t)c->r[0],2); // 80218B2C
  if (!crb(c,2)) { goto L_80218B3C; } // 80218B30
  {uint32_t ea=c->r[29]+0x00002744u; c->f[31]=c->ps1[31]=RF32(ea);} // 80218B34
  goto L_80218B4C; // 80218B38
L_80218B3C:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 80218B3C
  cmps(c,0,(int32_t)c->r[0],1); // 80218B40
  if (!crb(c,2)) { goto L_80218B4C; } // 80218B44
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[31]=c->ps1[31]=RF32(ea);} // 80218B48
L_80218B4C:;
  c->r[12]=R32(c->r[29]+0x00000010u); // 80218B4C
  c->r[3]=c->r[29]|c->r[29]; // 80218B50
  c->r[4]=c->r[31]|c->r[31]; // 80218B54
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218B58
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 80218B5C
  c->ctr=c->r[12]; // 80218B60
  if (true) { c->lr=0x80218B68u; dispatch(c,c->ctr); } // 80218B64
  c->f[2]=c->f[31]; // 80218B68
  c->r[4]=R32(c->r[31]+0x00000014u); // 80218B6C
  c->r[3]=c->r[29]|c->r[29]; // 80218B70
  c->lr=0x80218B78u; f_80218BAC(c); // 80218B74
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218B78
  c->r[4]=c->r[31]|c->r[31]; // 80218B7C
  c->r[5]=c->r[29]|c->r[29]; // 80218B80
  c->r[3]=c->r[29]+0x000008D0u; // 80218B84
  c->lr=0x80218B8Cu; f_80032454(c); // 80218B88
L_80218B8C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80218B8C
  c->r[11]=c->r[1]+0x00000020u; // 80218B90
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80218B94
  c->lr=0x80218B9Cu; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80218B98
  c->r[0]=R32(c->r[1]+0x00000034u); // 80218B9C
  c->lr=c->r[0]; // 80218BA0
  c->r[1]=c->r[1]+0x00000030u; // 80218BA4
  return; // 80218BA8
}

// fn_80218BAC
void f_80218BAC(Ctx* __restrict c) {
  trace_call(0x80218BACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218BAC
  c->r[0]=c->lr; // 80218BB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80218BB4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80218BB8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80218BBC
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[1]); // 80218BC0
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80218BC8
  c->r[31]=c->r[3]|c->r[3]; // 80218BCC
  {uint32_t ea=c->r[3]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218BD0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80218BD4
  fcmp(c,0,c->f[1],c->f[0]); // 80218BD8
  {uint32_t ea=c->r[3]+0x000003A4u; WF32(ea,c->f[1]);} // 80218BDC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80218BE0
  if (!crb(c,2)) { goto L_80218BFC; } // 80218BE4
  c->lr=0x80218BECu; f_800ACB54(c); // 80218BE8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218BEC
  c->r[0]=0u+0x00000001u; // 80218BF0
  W8(c->r[31]+0x00001F64u,c->r[0]); // 80218BF4
  {uint32_t ea=c->r[31]+0x000003A4u; WF32(ea,c->f[0]);} // 80218BF8
L_80218BFC:;
  c->r[0]=R8(c->r[31]+0x00001F63u); // 80218BFC
  cmps(c,0,(int32_t)c->r[0],0); // 80218C00
  if (crb(c,2)) { goto L_80218C48; } // 80218C04
  {uint32_t ea=c->r[31]+0x00001F68u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218C08
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80218C0C
  fcmp(c,0,c->f[1],c->f[0]); // 80218C10
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80218C14
  if (!crb(c,2)) { goto L_80218C48; } // 80218C18
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80218C1C
  fcmp(c,0,c->f[1],c->f[0]); // 80218C20
  {uint32_t ea=c->r[31]+0x00001F68u; WF32(ea,c->f[1]);} // 80218C24
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80218C28
  if (!crb(c,2)) { goto L_80218C48; } // 80218C2C
  c->r[0]=R8(c->r[31]+0x00002755u); // 80218C30
  {uint32_t ea=c->r[31]+0x00001F68u; WF32(ea,c->f[0]);} // 80218C34
  cmpu(c,0,c->r[0],0x00000001u); // 80218C38
  if (!crb(c,2)) { goto L_80218C48; } // 80218C3C
  c->r[0]=0u+0x00000001u; // 80218C40
  W8(c->r[31]+0x00001F60u,c->r[0]); // 80218C44
L_80218C48:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80218C48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80218C4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80218C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80218C54
  c->lr=c->r[0]; // 80218C58
  c->r[1]=c->r[1]+0x00000020u; // 80218C5C
  return; // 80218C60
}

// fn_80218C64
void f_80218C64(Ctx* __restrict c) {
  trace_call(0x80218C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218C64
  c->r[0]=c->lr; // 80218C68
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218C6C
  c->r[4]=0u+0x00000001u; // 80218C70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80218C74
  {uint32_t ea=c->r[2]+0xFFFFCD74u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218C78
  c->r[6]=R32(c->r[2]+0xFFFFCE08u); // 80218C7C
  c->r[0]=R32(c->r[2]+0xFFFFCE04u); // 80218C80
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80218C84
  c->r[5]=R32(c->r[3]+0x00002550u); // 80218C88
  W32(c->r[1]+0x00000008u,c->r[0]); // 80218C8C
  c->lr=0x80218C94u; f_801B006C(c); // 80218C90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80218C94
  c->lr=c->r[0]; // 80218C98
  c->r[1]=c->r[1]+0x00000010u; // 80218C9C
  return; // 80218CA0
}

// fn_80218CA4
void f_80218CA4(Ctx* __restrict c) {
  trace_call(0x80218CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218CA4
  c->r[0]=c->lr; // 80218CA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80218CAC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80218CB0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80218CB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80218CB8
  c->lr=0x80218CC0u; f_80061A4C(c); // 80218CBC
  c->r[31]=c->r[3]+0x000000ECu; // 80218CC0
  c->r[3]=c->r[31]|c->r[31]; // 80218CC4
  c->lr=0x80218CCCu; f_8012CF94(c); // 80218CC8
  c->f[31]=c->f[1]; // 80218CCC
  c->r[3]=c->r[31]|c->r[31]; // 80218CD0
  c->lr=0x80218CD8u; f_8012CF9C(c); // 80218CD4
  fcmp(c,0,c->f[31],c->f[1]); // 80218CD8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80218CDC
  if (!crb(c,2)) { goto L_80218CEC; } // 80218CE0
  {uint32_t ea=c->r[2]+0xFFFFCD3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218CE4
  goto L_80218CF0; // 80218CE8
L_80218CEC:;
  c->f[1]=c->f[31]; // 80218CEC
L_80218CF0:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80218CF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80218CF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80218CF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80218CFC
  c->lr=c->r[0]; // 80218D00
  c->r[1]=c->r[1]+0x00000020u; // 80218D04
  return; // 80218D08
}

// fn_80218D0C
void f_80218D0C(Ctx* __restrict c) {
  trace_call(0x80218D0Cu);
  return; // 80218D0C
}

// fn_80218D10
void f_80218D10(Ctx* __restrict c) {
  trace_call(0x80218D10u);
  c->r[0]=R8(c->r[3]+0x00001F5Fu); // 80218D10
  cmpu(c,0,c->r[0],0x00000001u); // 80218D14
  if (crb(c,2)) return; // 80218D18
  c->r[0]=0u+0x00000001u; // 80218D1C
  W8(c->r[3]+0x00001F5Fu,c->r[0]); // 80218D20
  f_801B07AC(c); return; // 80218D24
  return; // 80218D28
}

// fn_80218D2C
void f_80218D2C(Ctx* __restrict c) {
  trace_call(0x80218D2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80218D2C
  c->r[0]=c->lr; // 80218D30
  W32(c->r[1]+0x00000154u,c->r[0]); // 80218D34
  c->r[11]=c->r[1]+0x00000150u; // 80218D38
  c->lr=0x80218D40u; f_80289DC0(c); // 80218D3C
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218D40
  c->r[31]=0u+0x805D0000u; // 80218D44
  c->r[31]=c->r[31]+0xFFFFEA00u; // 80218D48
  {uint32_t ea=c->r[2]+0xFFFFCD40u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218D4C
  c->f[3]=c->f[1]; // 80218D50
  c->r[3]=c->r[31]+0x00000000u; // 80218D54
  c->lr=0x80218D5Cu; f_8003F588(c); // 80218D58
  {uint32_t ea=c->r[2]+0xFFFFCE0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218D5C
  c->r[3]=c->r[1]+0x000000ECu; // 80218D60
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218D64
  {uint32_t ea=c->r[2]+0xFFFFCE10u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218D68
  c->lr=0x80218D70u; f_800521A0(c); // 80218D6C
  c->r[14]=0u+0x80410000u; // 80218D70
  c->r[4]=c->r[3]|c->r[3]; // 80218D74
  c->r[3]=c->r[14]+0xFFFFC2E0u; // 80218D78
  c->lr=0x80218D80u; f_8003F484(c); // 80218D7C
  {uint32_t ea=c->r[2]+0xFFFFCE14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218D80
  c->r[3]=c->r[1]+0x000000E0u; // 80218D84
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218D88
  {uint32_t ea=c->r[2]+0xFFFFCE18u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218D8C
  c->lr=0x80218D94u; f_800521A0(c); // 80218D90
  c->r[14]=c->r[14]+0xFFFFC2E0u; // 80218D94
  c->r[4]=c->r[3]|c->r[3]; // 80218D98
  c->r[3]=c->r[14]+0x00000010u; // 80218D9C
  c->lr=0x80218DA4u; f_8003F484(c); // 80218DA0
  {uint32_t ea=c->r[2]+0xFFFFCE1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218DA4
  c->r[3]=c->r[1]+0x000000D4u; // 80218DA8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218DAC
  {uint32_t ea=c->r[2]+0xFFFFCE20u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218DB0
  c->lr=0x80218DB8u; f_800521A0(c); // 80218DB4
  c->r[4]=c->r[3]|c->r[3]; // 80218DB8
  c->r[3]=c->r[14]+0x00000020u; // 80218DBC
  c->lr=0x80218DC4u; f_8003F484(c); // 80218DC0
  {uint32_t ea=c->r[2]+0xFFFFCE24u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218DC4
  c->r[3]=c->r[1]+0x000000C8u; // 80218DC8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218DCC
  {uint32_t ea=c->r[2]+0xFFFFCE28u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218DD0
  c->lr=0x80218DD8u; f_800521A0(c); // 80218DD4
  c->r[4]=c->r[3]|c->r[3]; // 80218DD8
  c->r[3]=c->r[14]+0x00000030u; // 80218DDC
  c->lr=0x80218DE4u; f_8003F484(c); // 80218DE0
  {uint32_t ea=c->r[2]+0xFFFFCE2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218DE4
  c->r[3]=c->r[1]+0x000000BCu; // 80218DE8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218DEC
  {uint32_t ea=c->r[2]+0xFFFFCE30u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218DF0
  c->lr=0x80218DF8u; f_800521A0(c); // 80218DF4
  c->r[4]=c->r[3]|c->r[3]; // 80218DF8
  c->r[3]=c->r[14]+0x00000040u; // 80218DFC
  c->lr=0x80218E04u; f_8003F484(c); // 80218E00
  {uint32_t ea=c->r[2]+0xFFFFCE34u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218E04
  c->r[3]=c->r[1]+0x000000B0u; // 80218E08
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218E0C
  {uint32_t ea=c->r[2]+0xFFFFCE38u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218E10
  c->lr=0x80218E18u; f_800521A0(c); // 80218E14
  c->r[4]=c->r[3]|c->r[3]; // 80218E18
  c->r[3]=c->r[14]+0x00000050u; // 80218E1C
  c->lr=0x80218E24u; f_8003F484(c); // 80218E20
  {uint32_t ea=c->r[2]+0xFFFFCE3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218E24
  c->r[3]=c->r[1]+0x000000A4u; // 80218E28
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218E2C
  {uint32_t ea=c->r[2]+0xFFFFCE40u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218E30
  c->lr=0x80218E38u; f_800521A0(c); // 80218E34
  c->r[4]=c->r[3]|c->r[3]; // 80218E38
  c->r[3]=c->r[14]+0x00000060u; // 80218E3C
  c->lr=0x80218E44u; f_8003F484(c); // 80218E40
  {uint32_t ea=c->r[2]+0xFFFFCE44u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218E44
  c->r[3]=c->r[1]+0x00000098u; // 80218E48
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218E4C
  {uint32_t ea=c->r[2]+0xFFFFCE48u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218E50
  c->lr=0x80218E58u; f_800521A0(c); // 80218E54
  c->r[4]=c->r[3]|c->r[3]; // 80218E58
  c->r[3]=c->r[14]+0x00000070u; // 80218E5C
  c->lr=0x80218E64u; f_8003F484(c); // 80218E60
  {uint32_t ea=c->r[2]+0xFFFFCE4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218E64
  c->r[3]=c->r[1]+0x0000008Cu; // 80218E68
  {uint32_t ea=c->r[2]+0xFFFFCE50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218E6C
  {uint32_t ea=c->r[2]+0xFFFFCE54u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218E70
  c->lr=0x80218E78u; f_800521A0(c); // 80218E74
  c->r[4]=c->r[3]|c->r[3]; // 80218E78
  c->r[3]=c->r[14]+0x00000080u; // 80218E7C
  c->lr=0x80218E84u; f_8003F484(c); // 80218E80
  {uint32_t ea=c->r[2]+0xFFFFCE58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218E84
  c->r[3]=c->r[1]+0x00000080u; // 80218E88
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218E8C
  {uint32_t ea=c->r[2]+0xFFFFCDA0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218E90
  c->lr=0x80218E98u; f_800521A0(c); // 80218E94
  c->r[4]=c->r[3]|c->r[3]; // 80218E98
  c->r[3]=c->r[14]+0x00000090u; // 80218E9C
  c->lr=0x80218EA4u; f_8003F484(c); // 80218EA0
  {uint32_t ea=c->r[2]+0xFFFFCE5Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218EA4
  c->r[3]=c->r[1]+0x00000074u; // 80218EA8
  {uint32_t ea=c->r[2]+0xFFFFCE50u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218EAC
  {uint32_t ea=c->r[2]+0xFFFFCE60u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218EB0
  c->lr=0x80218EB8u; f_800521A0(c); // 80218EB4
  c->r[4]=c->r[3]|c->r[3]; // 80218EB8
  c->r[3]=c->r[14]+0x000000A0u; // 80218EBC
  c->lr=0x80218EC4u; f_8003F484(c); // 80218EC0
  {uint32_t ea=c->r[2]+0xFFFFCE64u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218EC4
  c->r[3]=c->r[1]+0x00000068u; // 80218EC8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218ECC
  {uint32_t ea=c->r[2]+0xFFFFCE68u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218ED0
  c->lr=0x80218ED8u; f_800521A0(c); // 80218ED4
  c->r[4]=c->r[3]|c->r[3]; // 80218ED8
  c->r[3]=c->r[14]+0x000000B0u; // 80218EDC
  c->lr=0x80218EE4u; f_8003F484(c); // 80218EE0
  {uint32_t ea=c->r[2]+0xFFFFCE6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218EE4
  c->r[3]=c->r[1]+0x0000005Cu; // 80218EE8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218EEC
  {uint32_t ea=c->r[2]+0xFFFFCE70u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218EF0
  c->lr=0x80218EF8u; f_800521A0(c); // 80218EF4
  c->r[4]=c->r[3]|c->r[3]; // 80218EF8
  c->r[3]=c->r[14]+0x000000C0u; // 80218EFC
  c->lr=0x80218F04u; f_8003F484(c); // 80218F00
  {uint32_t ea=c->r[2]+0xFFFFCE74u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218F04
  c->r[3]=c->r[1]+0x00000050u; // 80218F08
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218F0C
  {uint32_t ea=c->r[2]+0xFFFFCE78u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218F10
  c->lr=0x80218F18u; f_800521A0(c); // 80218F14
  c->r[4]=c->r[3]|c->r[3]; // 80218F18
  c->r[3]=c->r[14]+0x000000D0u; // 80218F1C
  c->lr=0x80218F24u; f_8003F484(c); // 80218F20
  {uint32_t ea=c->r[2]+0xFFFFCE7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218F24
  c->r[3]=c->r[1]+0x00000044u; // 80218F28
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218F2C
  {uint32_t ea=c->r[2]+0xFFFFCE80u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218F30
  c->lr=0x80218F38u; f_800521A0(c); // 80218F34
  c->r[4]=c->r[3]|c->r[3]; // 80218F38
  c->r[3]=c->r[14]+0x000000E0u; // 80218F3C
  c->lr=0x80218F44u; f_8003F484(c); // 80218F40
  {uint32_t ea=c->r[2]+0xFFFFCE84u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218F44
  c->r[3]=c->r[1]+0x00000038u; // 80218F48
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218F4C
  {uint32_t ea=c->r[2]+0xFFFFCE88u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218F50
  c->lr=0x80218F58u; f_800521A0(c); // 80218F54
  c->r[4]=c->r[3]|c->r[3]; // 80218F58
  c->r[3]=c->r[14]+0x000000F0u; // 80218F5C
  c->lr=0x80218F64u; f_8003F484(c); // 80218F60
  {uint32_t ea=c->r[2]+0xFFFFCE8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80218F64
  c->r[3]=c->r[1]+0x0000002Cu; // 80218F68
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218F6C
  {uint32_t ea=c->r[2]+0xFFFFCE90u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218F70
  c->lr=0x80218F78u; f_800521A0(c); // 80218F74
  c->r[4]=c->r[3]|c->r[3]; // 80218F78
  c->r[3]=c->r[14]+0x00000100u; // 80218F7C
  c->lr=0x80218F84u; f_8003F484(c); // 80218F80
  {uint32_t ea=c->r[2]+0xFFFFCE94u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218F84
  c->r[3]=c->r[1]+0x00000020u; // 80218F88
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218F8C
  {uint32_t ea=c->r[2]+0xFFFFCE98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218F90
  c->lr=0x80218F98u; f_800521A0(c); // 80218F94
  c->r[4]=c->r[3]|c->r[3]; // 80218F98
  c->r[3]=c->r[14]+0x00000110u; // 80218F9C
  c->lr=0x80218FA4u; f_8003F484(c); // 80218FA0
  {uint32_t ea=c->r[2]+0xFFFFCDD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218FA4
  c->r[3]=c->r[1]+0x00000014u; // 80218FA8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218FAC
  {uint32_t ea=c->r[2]+0xFFFFCE9Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80218FB0
  c->lr=0x80218FB8u; f_800521A0(c); // 80218FB4
  c->r[4]=c->r[3]|c->r[3]; // 80218FB8
  c->r[3]=c->r[14]+0x00000120u; // 80218FBC
  c->lr=0x80218FC4u; f_8003F484(c); // 80218FC0
  {uint32_t ea=c->r[2]+0xFFFFCEA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80218FC4
  c->r[3]=c->r[1]+0x00000008u; // 80218FC8
  {uint32_t ea=c->r[2]+0xFFFFCD38u; c->f[2]=c->ps1[2]=RF32(ea);} // 80218FCC
  {uint32_t ea=c->r[2]+0xFFFFCEA4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80218FD0
  c->lr=0x80218FD8u; f_800521A0(c); // 80218FD4
  c->r[4]=c->r[3]|c->r[3]; // 80218FD8
  c->r[3]=c->r[14]+0x00000130u; // 80218FDC
  c->lr=0x80218FE4u; f_8003F484(c); // 80218FE0
  c->r[15]=R32(c->r[13]+0xFFFF8B50u); // 80218FE4
  c->r[4]=R32(c->r[13]+0xFFFF8B48u); // 80218FE8
  W32(c->r[1]+0x00000104u,c->r[15]); // 80218FEC
  c->r[15]=R32(c->r[13]+0xFFFF8B74u); // 80218FF0
  W32(c->r[31]+0x0000008Cu,c->r[4]); // 80218FF4
  c->r[4]=c->r[31]+0x0000008Cu; // 80218FF8
  c->r[0]=R32(c->r[13]+0xFFFF8B94u); // 80218FFC
  W32(c->r[1]+0x000000F8u,c->r[15]); // 80219000
  c->r[15]=R32(c->r[13]+0xFFFF8B9Cu); // 80219004
  W32(c->r[4]+0x00000008u,c->r[0]); // 80219008
  c->r[0]=R32(c->r[1]+0x00000104u); // 8021900C
  W32(c->r[1]+0x000000FCu,c->r[15]); // 80219010
  c->r[15]=R32(c->r[13]+0xFFFF8BBCu); // 80219014
  c->r[3]=R32(c->r[13]+0xFFFF8B6Cu); // 80219018
  W32(c->r[1]+0x00000100u,c->r[15]); // 8021901C
  c->r[15]=c->r[31]+0x0000000Cu; // 80219020
  c->r[21]=R32(c->r[13]+0xFFFF8BACu); // 80219024
  c->r[23]=R32(c->r[13]+0xFFFF8B60u); // 80219028
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 8021902C
  c->r[22]=R32(c->r[13]+0xFFFF8B3Cu); // 80219030
  W32(c->r[4]+0x00000004u,c->r[3]); // 80219034
  c->r[3]=c->r[31]+0x0000009Cu; // 80219038
  c->r[0]=R32(c->r[1]+0x000000F8u); // 8021903C
  c->r[24]=R32(c->r[13]+0xFFFF8B40u); // 80219040
  W32(c->r[3]+0x00000004u,c->r[0]); // 80219044
  c->r[0]=R32(c->r[1]+0x000000FCu); // 80219048
  c->r[20]=R32(c->r[13]+0xFFFF8BE8u); // 8021904C
  c->r[19]=R32(c->r[13]+0xFFFF8BECu); // 80219050
  c->r[18]=R32(c->r[13]+0xFFFF8BF0u); // 80219054
  c->r[17]=R32(c->r[13]+0xFFFF8C04u); // 80219058
  c->r[16]=R32(c->r[13]+0xFFFF8C10u); // 8021905C
  c->r[28]=R32(c->r[13]+0xFFFF8B44u); // 80219060
  c->r[14]=R32(c->r[13]+0xFFFF8BB8u); // 80219064
  W32(c->r[3]+0x00000008u,c->r[0]); // 80219068
  c->r[0]=R32(c->r[1]+0x00000100u); // 8021906C
  c->r[25]=R32(c->r[13]+0xFFFF8B64u); // 80219070
  c->r[26]=R32(c->r[13]+0xFFFF8B8Cu); // 80219074
  c->r[27]=R32(c->r[13]+0xFFFF8BB0u); // 80219078
  c->r[12]=R32(c->r[13]+0xFFFF8BB4u); // 8021907C
  W32(c->r[15]+0x00000004u,c->r[23]); // 80219080
  c->r[11]=R32(c->r[13]+0xFFFF8BF4u); // 80219084
  W32(c->r[15]+0x00000008u,c->r[21]); // 80219088
  c->r[10]=R32(c->r[13]+0xFFFF8BF8u); // 8021908C
  W32(c->r[15]+0x0000000Cu,c->r[21]); // 80219090
  c->r[15]=c->r[31]+0x0000001Cu; // 80219094
  c->r[9]=R32(c->r[13]+0xFFFF8BFCu); // 80219098
  W32(c->r[15]+0x00000004u,c->r[25]); // 8021909C
  c->r[7]=R32(c->r[13]+0xFFFF8C00u); // 802190A0
  W32(c->r[15]+0x00000008u,c->r[26]); // 802190A4
  c->r[29]=R32(c->r[13]+0xFFFF8B68u); // 802190A8
  W32(c->r[15]+0x0000000Cu,c->r[27]); // 802190AC
  c->r[15]=c->r[31]+0x0000002Cu; // 802190B0
  c->r[30]=R32(c->r[13]+0xFFFF8B90u); // 802190B4
  W32(c->r[15]+0x0000000Cu,c->r[12]); // 802190B8
  c->r[12]=c->r[31]+0x0000003Cu; // 802190BC
  c->r[8]=R32(c->r[13]+0xFFFF8C08u); // 802190C0
  W32(c->r[12]+0x00000004u,c->r[11]); // 802190C4
  c->r[11]=c->r[31]+0x0000004Cu; // 802190C8
  c->r[6]=R32(c->r[13]+0xFFFF8C0Cu); // 802190CC
  W32(c->r[11]+0x00000004u,c->r[10]); // 802190D0
  c->r[10]=c->r[31]+0x0000005Cu; // 802190D4
  c->r[5]=R32(c->r[13]+0xFFFF8C14u); // 802190D8
  W32(c->r[10]+0x00000004u,c->r[9]); // 802190DC
  c->r[9]=c->r[31]+0x0000006Cu; // 802190E0
  W32(c->r[9]+0x00000008u,c->r[7]); // 802190E4
  c->r[7]=c->r[31]+0x0000007Cu; // 802190E8
  W32(c->r[31]+0x0000000Cu,c->r[22]); // 802190EC
  W32(c->r[31]+0x0000001Cu,c->r[24]); // 802190F0
  W32(c->r[31]+0x0000002Cu,c->r[28]); // 802190F4
  W32(c->r[15]+0x00000004u,c->r[29]); // 802190F8
  W32(c->r[15]+0x00000008u,c->r[30]); // 802190FC
  W32(c->r[31]+0x0000003Cu,c->r[20]); // 80219100
  W32(c->r[12]+0x00000008u,c->r[20]); // 80219104
  W32(c->r[12]+0x0000000Cu,c->r[20]); // 80219108
  W32(c->r[31]+0x0000004Cu,c->r[19]); // 8021910C
  W32(c->r[11]+0x00000008u,c->r[19]); // 80219110
  W32(c->r[11]+0x0000000Cu,c->r[19]); // 80219114
  W32(c->r[31]+0x0000005Cu,c->r[18]); // 80219118
  W32(c->r[10]+0x00000008u,c->r[18]); // 8021911C
  W32(c->r[10]+0x0000000Cu,c->r[18]); // 80219120
  W32(c->r[31]+0x0000006Cu,c->r[17]); // 80219124
  W32(c->r[9]+0x00000004u,c->r[8]); // 80219128
  W32(c->r[9]+0x0000000Cu,c->r[17]); // 8021912C
  W32(c->r[31]+0x0000007Cu,c->r[16]); // 80219130
  W32(c->r[7]+0x00000004u,c->r[6]); // 80219134
  W32(c->r[7]+0x00000008u,c->r[5]); // 80219138
  W32(c->r[7]+0x0000000Cu,c->r[16]); // 8021913C
  W32(c->r[4]+0x0000000Cu,c->r[14]); // 80219140
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80219144
  c->r[5]=0u+0x803E0000u; // 80219148
  {uint32_t ea=c->r[5]+0x00005A10u; c->r[4]=R32(ea); c->r[5]=ea;} // 8021914C
  c->r[27]=R32(c->r[13]+0xFFFF8B4Cu); // 80219150
  c->r[6]=0u+0x80410000u; // 80219154
  c->r[22]=R32(c->r[13]+0xFFFF8B54u); // 80219158
  c->r[25]=c->r[31]+0x000000ACu; // 8021915C
  c->r[17]=R32(c->r[13]+0xFFFF8B58u); // 80219160
  c->r[20]=c->r[31]+0x000000BCu; // 80219164
  c->r[11]=R32(c->r[13]+0xFFFF8B5Cu); // 80219168
  c->r[15]=c->r[31]+0x000000CCu; // 8021916C
  c->r[26]=R32(c->r[13]+0xFFFF8B70u); // 80219170
  c->r[9]=c->r[31]+0x000000DCu; // 80219174
  c->r[24]=R32(c->r[13]+0xFFFF8B98u); // 80219178
  c->r[23]=R32(c->r[13]+0xFFFF8BC0u); // 8021917C
  c->r[21]=R32(c->r[13]+0xFFFF8B78u); // 80219180
  c->r[19]=R32(c->r[13]+0xFFFF8BA0u); // 80219184
  c->r[18]=R32(c->r[13]+0xFFFF8BC4u); // 80219188
  c->r[16]=R32(c->r[13]+0xFFFF8B7Cu); // 8021918C
  c->r[14]=R32(c->r[13]+0xFFFF8BA4u); // 80219190
  c->r[12]=R32(c->r[13]+0xFFFF8BC8u); // 80219194
  c->r[10]=R32(c->r[13]+0xFFFF8B80u); // 80219198
  c->r[8]=R32(c->r[13]+0xFFFF8BA8u); // 8021919C
  c->r[7]=R32(c->r[13]+0xFFFF8BCCu); // 802191A0
  W32(c->r[31]+0x000000DCu,c->r[11]); // 802191A4
  c->r[11]=c->r[1]+0x00000150u; // 802191A8
  c->r[3]=R32(c->r[5]+0x00000004u); // 802191AC
  {uint32_t ea=c->r[6]+0xFFFFC420u; W32(ea,c->r[4]); c->r[6]=ea;} // 802191B0
  c->r[0]=R32(c->r[5]+0x00000008u); // 802191B4
  W32(c->r[31]+0x000000ACu,c->r[27]); // 802191B8
  W32(c->r[25]+0x00000004u,c->r[26]); // 802191BC
  W32(c->r[25]+0x00000008u,c->r[24]); // 802191C0
  W32(c->r[25]+0x0000000Cu,c->r[23]); // 802191C4
  W32(c->r[31]+0x000000BCu,c->r[22]); // 802191C8
  W32(c->r[20]+0x00000004u,c->r[21]); // 802191CC
  W32(c->r[20]+0x00000008u,c->r[19]); // 802191D0
  W32(c->r[20]+0x0000000Cu,c->r[18]); // 802191D4
  W32(c->r[31]+0x000000CCu,c->r[17]); // 802191D8
  W32(c->r[15]+0x00000004u,c->r[16]); // 802191DC
  W32(c->r[15]+0x00000008u,c->r[14]); // 802191E0
  W32(c->r[15]+0x0000000Cu,c->r[12]); // 802191E4
  W32(c->r[9]+0x00000004u,c->r[10]); // 802191E8
  W32(c->r[9]+0x00000008u,c->r[8]); // 802191EC
  W32(c->r[9]+0x0000000Cu,c->r[7]); // 802191F0
  W32(c->r[6]+0x00000004u,c->r[3]); // 802191F4
  W32(c->r[6]+0x00000008u,c->r[0]); // 802191F8
  c->lr=0x80219200u; f_80289E0C(c); // 802191FC
  c->r[0]=R32(c->r[1]+0x00000154u); // 80219200
  c->lr=c->r[0]; // 80219204
  c->r[1]=c->r[1]+0x00000150u; // 80219208
  return; // 8021920C
}

// fn_80219210
void f_80219210(Ctx* __restrict c) {
  trace_call(0x80219210u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219210
  f_80216754(c); return; // 80219214
}

// fn_80219218
void f_80219218(Ctx* __restrict c) {
  trace_call(0x80219218u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219218
  f_80216BF4(c); return; // 8021921C
}

// fn_80219220
void f_80219220(Ctx* __restrict c) {
  trace_call(0x80219220u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219220
  f_802168E8(c); return; // 80219224
}

// fn_80219228
void f_80219228(Ctx* __restrict c) {
  trace_call(0x80219228u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219228
  f_8021693C(c); return; // 8021922C
}

// fn_80219230
void f_80219230(Ctx* __restrict c) {
  trace_call(0x80219230u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219230
  f_802169B0(c); return; // 80219234
}

// fn_80219238
void f_80219238(Ctx* __restrict c) {
  trace_call(0x80219238u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219238
  f_802166F8(c); return; // 8021923C
}

// fn_80219240
void f_80219240(Ctx* __restrict c) {
  trace_call(0x80219240u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219240
  f_802169B4(c); return; // 80219244
}

// fn_80219248
void f_80219248(Ctx* __restrict c) {
  trace_call(0x80219248u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219248
  f_80216758(c); return; // 8021924C
}

// fn_80219250
void f_80219250(Ctx* __restrict c) {
  trace_call(0x80219250u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219250
  f_802168EC(c); return; // 80219254
}

// fn_80219258
void f_80219258(Ctx* __restrict c) {
  trace_call(0x80219258u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219258
  f_80216940(c); return; // 8021925C
}

// fn_80219260
void f_80219260(Ctx* __restrict c) {
  trace_call(0x80219260u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219260
  f_80218D0C(c); return; // 80219264
}

// fn_80219268
void f_80219268(Ctx* __restrict c) {
  trace_call(0x80219268u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219268
  f_80216750(c); return; // 8021926C
}

// fn_80219270
void f_80219270(Ctx* __restrict c) {
  trace_call(0x80219270u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219270
  f_80216BF0(c); return; // 80219274
}

// fn_80219278
void f_80219278(Ctx* __restrict c) {
  trace_call(0x80219278u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219278
  f_802168E4(c); return; // 8021927C
}

// fn_80219280
void f_80219280(Ctx* __restrict c) {
  trace_call(0x80219280u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219280
  f_802168F4(c); return; // 80219284
}

// fn_80219288
void f_80219288(Ctx* __restrict c) {
  trace_call(0x80219288u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219288
  f_802169AC(c); return; // 8021928C
}

// fn_80219290
void f_80219290(Ctx* __restrict c) {
  trace_call(0x80219290u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219290
  f_8021674C(c); return; // 80219294
}

// fn_80219298
void f_80219298(Ctx* __restrict c) {
  trace_call(0x80219298u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 80219298
  f_80216AFC(c); return; // 8021929C
}

// fn_802192A0
void f_802192A0(Ctx* __restrict c) {
  trace_call(0x802192A0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802192A0
  f_8021675C(c); return; // 802192A4
}

// fn_802192A8
void f_802192A8(Ctx* __restrict c) {
  trace_call(0x802192A8u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802192A8
  f_802168F0(c); return; // 802192AC
}

// fn_802192B0
void f_802192B0(Ctx* __restrict c) {
  trace_call(0x802192B0u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 802192B0
  f_802169A8(c); return; // 802192B4
}

// fn_802192B8
void f_802192B8(Ctx* __restrict c) {
  trace_call(0x802192B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802192B8
  c->r[0]=c->lr; // 802192BC
  c->r[6]=0u+0x80410000u; // 802192C0
  c->r[4]=0u+0xFFFFFFFFu; // 802192C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802192C8
  c->r[6]=c->r[6]+0xFFFFC978u; // 802192CC
  c->r[5]=0u+0x804B0000u; // 802192D0
  c->r[0]=0u+0x00000000u; // 802192D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802192D8
  c->r[31]=c->r[3]|c->r[3]; // 802192DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802192E0
  c->r[30]=0u+0x804B0000u; // 802192E4
  W32(c->r[3]+0x00000004u,c->r[4]); // 802192E8
  c->r[4]=c->r[30]+0x00003908u; // 802192EC
  W32(c->r[3]+0x00000000u,c->r[6]); // 802192F0
  {uint32_t ea=c->r[5]+0x000038C8u; c->r[7]=R32(ea); c->r[5]=ea;} // 802192F4
  c->r[6]=R32(c->r[5]+0x00000004u); // 802192F8
  W32(c->r[3]+0x00000008u,c->r[7]); // 802192FC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 80219300
  c->r[7]=R32(c->r[5]+0x00000008u); // 80219304
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 80219308
  W32(c->r[3]+0x00000010u,c->r[7]); // 8021930C
  W32(c->r[3]+0x00000014u,c->r[6]); // 80219310
  c->r[7]=R32(c->r[5]+0x00000010u); // 80219314
  c->r[6]=R32(c->r[5]+0x00000014u); // 80219318
  W32(c->r[3]+0x00000018u,c->r[7]); // 8021931C
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 80219320
  c->r[7]=R32(c->r[5]+0x00000018u); // 80219324
  c->r[6]=R32(c->r[5]+0x0000001Cu); // 80219328
  W32(c->r[3]+0x00000020u,c->r[7]); // 8021932C
  W32(c->r[3]+0x00000024u,c->r[6]); // 80219330
  c->r[7]=R32(c->r[5]+0x00000020u); // 80219334
  c->r[6]=R32(c->r[5]+0x00000024u); // 80219338
  W32(c->r[3]+0x00000028u,c->r[7]); // 8021933C
  W32(c->r[3]+0x0000002Cu,c->r[6]); // 80219340
  c->r[7]=R32(c->r[5]+0x00000028u); // 80219344
  c->r[6]=R32(c->r[5]+0x0000002Cu); // 80219348
  W32(c->r[3]+0x00000030u,c->r[7]); // 8021934C
  W32(c->r[3]+0x00000034u,c->r[6]); // 80219350
  c->r[7]=R32(c->r[5]+0x00000030u); // 80219354
  c->r[6]=R32(c->r[5]+0x00000034u); // 80219358
  W32(c->r[3]+0x00000038u,c->r[7]); // 8021935C
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 80219360
  c->r[7]=R32(c->r[5]+0x00000038u); // 80219364
  c->r[6]=R32(c->r[5]+0x0000003Cu); // 80219368
  W32(c->r[3]+0x00000040u,c->r[7]); // 8021936C
  W32(c->r[3]+0x00000044u,c->r[6]); // 80219370
  c->r[7]=R32(c->r[5]+0x00000000u); // 80219374
  c->r[6]=R32(c->r[5]+0x00000004u); // 80219378
  W32(c->r[3]+0x00000048u,c->r[7]); // 8021937C
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 80219380
  c->r[7]=R32(c->r[5]+0x00000008u); // 80219384
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 80219388
  W32(c->r[3]+0x00000050u,c->r[7]); // 8021938C
  W32(c->r[3]+0x00000054u,c->r[6]); // 80219390
  c->r[7]=R32(c->r[5]+0x00000010u); // 80219394
  c->r[6]=R32(c->r[5]+0x00000014u); // 80219398
  W32(c->r[3]+0x00000058u,c->r[7]); // 8021939C
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 802193A0
  c->r[7]=R32(c->r[5]+0x00000018u); // 802193A4
  c->r[6]=R32(c->r[5]+0x0000001Cu); // 802193A8
  W32(c->r[3]+0x00000060u,c->r[7]); // 802193AC
  W32(c->r[3]+0x00000064u,c->r[6]); // 802193B0
  c->r[7]=R32(c->r[5]+0x00000020u); // 802193B4
  c->r[6]=R32(c->r[5]+0x00000024u); // 802193B8
  W32(c->r[3]+0x00000068u,c->r[7]); // 802193BC
  W32(c->r[3]+0x0000006Cu,c->r[6]); // 802193C0
  c->r[7]=R32(c->r[5]+0x00000028u); // 802193C4
  c->r[6]=R32(c->r[5]+0x0000002Cu); // 802193C8
  W32(c->r[3]+0x00000070u,c->r[7]); // 802193CC
  W32(c->r[3]+0x00000074u,c->r[6]); // 802193D0
  c->r[7]=R32(c->r[5]+0x00000030u); // 802193D4
  c->r[6]=R32(c->r[5]+0x00000034u); // 802193D8
  W32(c->r[3]+0x00000078u,c->r[7]); // 802193DC
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 802193E0
  c->r[6]=R32(c->r[5]+0x00000038u); // 802193E4
  c->r[5]=R32(c->r[5]+0x0000003Cu); // 802193E8
  W32(c->r[3]+0x00000080u,c->r[6]); // 802193EC
  W32(c->r[3]+0x00000084u,c->r[5]); // 802193F0
  W32(c->r[3]+0x00000088u,c->r[0]); // 802193F4
  c->r[3]=c->r[3]+0x00000090u; // 802193F8
  c->lr=0x80219400u; f_8013932C(c); // 802193FC
  c->r[3]=c->r[31]+0x000000A0u; // 80219400
  c->r[4]=c->r[30]+0x00003908u; // 80219404
  c->lr=0x8021940Cu; f_8013932C(c); // 80219408
  c->r[3]=c->r[31]|c->r[31]; // 8021940C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80219410
  c->r[30]=R32(c->r[1]+0x00000008u); // 80219414
  c->r[0]=R32(c->r[1]+0x00000014u); // 80219418
  c->lr=c->r[0]; // 8021941C
  c->r[1]=c->r[1]+0x00000010u; // 80219420
  return; // 80219424
}

// fn_80219428
void f_80219428(Ctx* __restrict c) {
  trace_call(0x80219428u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219428
  c->r[0]=c->lr; // 8021942C
  W32(c->r[1]+0x00000134u,c->r[0]); // 80219430
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 80219434
  c->r[31]=c->r[3]|c->r[3]; // 80219438
  W32(c->r[1]+0x00000128u,c->r[30]); // 8021943C
  c->r[30]=c->r[4]|c->r[4]; // 80219440
  c->r[0]=R32(c->r[3]+0x00000004u); // 80219444
  cmps(c,0,(int32_t)c->r[0],0); // 80219448
  if (!crb(c,0)) { goto L_8021946C; } // 8021944C
  c->r[12]=R32(c->r[30]+0x00000000u); // 80219450
  c->r[3]=c->r[30]|c->r[30]; // 80219454
  c->r[4]=R32(c->r[31]+0x00000088u); // 80219458
  c->r[12]=R32(c->r[12]+0x00000024u); // 8021945C
  c->ctr=c->r[12]; // 80219460
  if (true) { c->lr=0x80219468u; dispatch(c,c->ctr); } // 80219464
  W32(c->r[31]+0x00000004u,c->r[3]); // 80219468
L_8021946C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8021946C
  c->r[4]=c->r[30]|c->r[30]; // 80219470
  c->r[3]=c->r[1]+0x000000E8u; // 80219474
  c->r[6]=0u+0x00000001u; // 80219478
  c->r[12]=R32(c->r[12]+0x00000034u); // 8021947C
  c->r[5]=R32(c->r[31]+0x00000004u); // 80219480
  c->ctr=c->r[12]; // 80219484
  if (true) { c->lr=0x8021948Cu; dispatch(c,c->ctr); } // 80219488
  c->r[3]=c->r[1]+0x00000008u; // 8021948C
  c->r[4]=c->r[1]+0x000000E8u; // 80219490
  c->lr=0x80219498u; f_80138AC0(c); // 80219494
  c->r[3]=c->r[1]+0x00000018u; // 80219498
  c->r[4]=c->r[1]+0x00000008u; // 8021949C
  c->r[5]=c->r[31]+0x00000090u; // 802194A0
  c->r[6]=c->r[1]+0x000000E8u; // 802194A4
  c->lr=0x802194ACu; f_80059168(c); // 802194A8
  c->r[3]=c->r[1]+0x000000E8u; // 802194AC
  c->r[4]=c->r[1]+0x00000018u; // 802194B0
  c->lr=0x802194B8u; f_80138B1C(c); // 802194B4
  c->r[3]=c->r[1]+0x00000068u; // 802194B8
  c->r[4]=c->r[31]+0x000000A0u; // 802194BC
  c->lr=0x802194C4u; f_80138C20(c); // 802194C0
  c->r[4]=c->r[3]|c->r[3]; // 802194C4
  c->r[3]=c->r[1]+0x000000A8u; // 802194C8
  c->r[5]=c->r[1]+0x000000E8u; // 802194CC
  c->lr=0x802194D4u; f_80137EC8(c); // 802194D0
  c->r[5]=R32(c->r[1]+0x000000A8u); // 802194D4
  c->r[3]=c->r[1]+0x00000028u; // 802194D8
  c->r[0]=R32(c->r[1]+0x000000ACu); // 802194DC
  c->r[4]=c->r[31]+0x00000048u; // 802194E0
  W32(c->r[31]+0x00000048u,c->r[5]); // 802194E4
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 802194E8
  c->r[5]=R32(c->r[1]+0x000000B0u); // 802194EC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 802194F0
  W32(c->r[31]+0x00000050u,c->r[5]); // 802194F4
  W32(c->r[31]+0x00000054u,c->r[0]); // 802194F8
  c->r[5]=R32(c->r[1]+0x000000B8u); // 802194FC
  c->r[0]=R32(c->r[1]+0x000000BCu); // 80219500
  W32(c->r[31]+0x00000058u,c->r[5]); // 80219504
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 80219508
  c->r[5]=R32(c->r[1]+0x000000C0u); // 8021950C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80219510
  W32(c->r[31]+0x00000060u,c->r[5]); // 80219514
  W32(c->r[31]+0x00000064u,c->r[0]); // 80219518
  c->r[5]=R32(c->r[1]+0x000000C8u); // 8021951C
  c->r[0]=R32(c->r[1]+0x000000CCu); // 80219520
  W32(c->r[31]+0x00000068u,c->r[5]); // 80219524
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 80219528
  c->r[5]=R32(c->r[1]+0x000000D0u); // 8021952C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80219530
  W32(c->r[31]+0x00000070u,c->r[5]); // 80219534
  W32(c->r[31]+0x00000074u,c->r[0]); // 80219538
  c->r[5]=R32(c->r[1]+0x000000D8u); // 8021953C
  c->r[0]=R32(c->r[1]+0x000000DCu); // 80219540
  W32(c->r[31]+0x00000078u,c->r[5]); // 80219544
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 80219548
  c->r[5]=R32(c->r[1]+0x000000E0u); // 8021954C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 80219550
  W32(c->r[31]+0x00000080u,c->r[5]); // 80219554
  W32(c->r[31]+0x00000084u,c->r[0]); // 80219558
  c->lr=0x80219560u; f_801389FC(c); // 8021955C
  c->r[3]=R32(c->r[1]+0x00000028u); // 80219560
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80219564
  W32(c->r[31]+0x00000008u,c->r[3]); // 80219568
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8021956C
  c->r[3]=R32(c->r[1]+0x00000030u); // 80219570
  c->r[0]=R32(c->r[1]+0x00000034u); // 80219574
  W32(c->r[31]+0x00000010u,c->r[3]); // 80219578
  W32(c->r[31]+0x00000014u,c->r[0]); // 8021957C
  c->r[3]=R32(c->r[1]+0x00000038u); // 80219580
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80219584
  W32(c->r[31]+0x00000018u,c->r[3]); // 80219588
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8021958C
  c->r[3]=R32(c->r[1]+0x00000040u); // 80219590
  c->r[0]=R32(c->r[1]+0x00000044u); // 80219594
  W32(c->r[31]+0x00000020u,c->r[3]); // 80219598
  W32(c->r[31]+0x00000024u,c->r[0]); // 8021959C
  c->r[3]=R32(c->r[1]+0x00000048u); // 802195A0
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 802195A4
  W32(c->r[31]+0x00000028u,c->r[3]); // 802195A8
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 802195AC
  c->r[3]=R32(c->r[1]+0x00000050u); // 802195B0
  c->r[0]=R32(c->r[1]+0x00000054u); // 802195B4
  W32(c->r[31]+0x00000030u,c->r[3]); // 802195B8
  W32(c->r[31]+0x00000034u,c->r[0]); // 802195BC
  c->r[3]=R32(c->r[1]+0x00000058u); // 802195C0
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 802195C4
  W32(c->r[31]+0x00000038u,c->r[3]); // 802195C8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 802195CC
  c->r[3]=R32(c->r[1]+0x00000060u); // 802195D0
  c->r[0]=R32(c->r[1]+0x00000064u); // 802195D4
  W32(c->r[31]+0x00000040u,c->r[3]); // 802195D8
  W32(c->r[31]+0x00000044u,c->r[0]); // 802195DC
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 802195E0
  c->r[30]=R32(c->r[1]+0x00000128u); // 802195E4
  c->r[0]=R32(c->r[1]+0x00000134u); // 802195E8
  c->lr=c->r[0]; // 802195EC
  c->r[1]=c->r[1]+0x00000130u; // 802195F0
  return; // 802195F4
}

// fn_802195F8
void f_802195F8(Ctx* __restrict c) {
  trace_call(0x802195F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802195F8
  c->r[0]=c->lr; // 802195FC
  {uint32_t ea=c->r[2]+0xFFFFCEACu; c->f[2]=c->ps1[2]=RF32(ea);} // 80219600
  W32(c->r[1]+0x00000024u,c->r[0]); // 80219604
  c->f[3]=c->f[2]; // 80219608
  {uint32_t ea=c->r[2]+0xFFFFCEA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021960C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80219610
  c->f[4]=c->f[2]; // 80219614
  c->r[31]=c->r[3]|c->r[3]; // 80219618
  c->r[3]=c->r[1]+0x00000008u; // 8021961C
  c->lr=0x80219624u; f_801392B0(c); // 80219620
  c->r[4]=0u+0x804B0000u; // 80219624
  c->r[5]=c->r[3]|c->r[3]; // 80219628
  c->r[3]=c->r[4]+0x00003978u; // 8021962C
  c->r[4]=c->r[31]+0x00000048u; // 80219630
  c->lr=0x80219638u; f_80055E30(c); // 80219634
  c->r[0]=R32(c->r[1]+0x00000024u); // 80219638
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8021963C
  c->lr=c->r[0]; // 80219640
  c->r[1]=c->r[1]+0x00000020u; // 80219644
  return; // 80219648
}

// fn_8021964C
void f_8021964C(Ctx* __restrict c) {
  trace_call(0x8021964Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021964C
  c->r[0]=c->lr; // 80219650
  W32(c->r[1]+0x00000084u,c->r[0]); // 80219654
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 80219658
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 8021965C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219660
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80219664
  c->r[31]=c->r[4]|c->r[4]; // 80219668
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021966C
  W32(c->r[1]+0x00000068u,c->r[30]); // 80219670
  c->r[30]=c->r[3]|c->r[3]; // 80219674
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80219678
  c->r[3]=c->r[1]+0x00000038u; // 8021967C
  {uint32_t ea=c->r[2]+0xFFFFCEACu; c->f[4]=c->ps1[4]=RF32(ea);} // 80219680
  c->lr=0x80219688u; f_801392B0(c); // 80219684
  c->r[4]=c->r[3]|c->r[3]; // 80219688
  c->r[3]=c->r[1]+0x00000058u; // 8021968C
  c->r[5]=c->r[30]+0x00000008u; // 80219690
  c->lr=0x80219698u; f_80139CBC(c); // 80219694
  c->r[3]=c->r[1]+0x00000028u; // 80219698
  c->r[4]=c->r[1]+0x00000058u; // 8021969C
  c->lr=0x802196A4u; f_801397B4(c); // 802196A0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=c->ps1[31]=RF32(ea);} // 802196A4
  {uint32_t ea=c->r[2]+0xFFFFCEACu; c->f[0]=c->ps1[0]=RF32(ea);} // 802196A8
  fcmp(c,0,c->f[31],c->f[0]); // 802196AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802196B0
  if (!crb(c,2)) { goto L_80219760; } // 802196B4
  {uint32_t ea=c->r[2]+0xFFFFCEB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802196B8
  fcmp(c,0,c->f[31],c->f[0]); // 802196BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802196C0
  if (crb(c,2)) { goto L_802196E4; } // 802196C4
  c->r[3]=0u+0x803F0000u; // 802196C8
  c->r[5]=0u+0x803F0000u; // 802196CC
  c->r[3]=c->r[3]+0x00001C38u; // 802196D0
  c->r[4]=0u+0x00000273u; // 802196D4
  c->r[5]=c->r[5]+0x00001C14u; // 802196D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802196DC
  c->lr=0x802196E4u; f_80344550(c); // 802196E0
L_802196E4:;
  {uint32_t ea=c->r[2]+0xFFFFCEB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802196E4
  fcmp(c,0,c->f[31],c->f[1]); // 802196E8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802196EC
  if (!crb(c,2)) { goto L_802196F8; } // 802196F0
  goto L_80219704; // 802196F4
L_802196F8:;
  c->f[1]=c->f[31]; // 802196F8
  c->lr=0x80219700u; f_80394248(c); // 802196FC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80219700
L_80219704:;
  {uint32_t ea=c->r[2]+0xFFFFCEACu; c->f[0]=c->ps1[0]=RF32(ea);} // 80219704
  c->r[3]=c->r[1]+0x00000048u; // 80219708
  c->r[4]=c->r[1]+0x00000058u; // 8021970C
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[1]); // 80219710
  c->lr=0x80219718u; f_8013939C(c); // 80219714
  c->f[1]=c->f[31]; // 80219718
  c->r[3]=c->r[1]+0x00000048u; // 8021971C
  c->lr=0x80219724u; f_80139448(c); // 80219720
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219724
  c->r[3]=c->r[1]+0x00000008u; // 80219728
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021972C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 80219730
  {uint32_t ea=c->r[2]+0xFFFFCEACu; c->f[4]=c->ps1[4]=RF32(ea);} // 80219734
  c->lr=0x8021973Cu; f_801392B0(c); // 80219738
  c->r[4]=c->r[3]|c->r[3]; // 8021973C
  c->r[3]=c->r[1]+0x00000018u; // 80219740
  c->r[5]=c->r[30]+0x00000048u; // 80219744
  c->lr=0x8021974Cu; f_80139CBC(c); // 80219748
  c->r[3]=c->r[31]|c->r[31]; // 8021974C
  c->r[4]=c->r[1]+0x00000018u; // 80219750
  c->lr=0x80219758u; f_8013939C(c); // 80219754
  c->r[3]=0u+0x00000001u; // 80219758
  goto L_80219764; // 8021975C
L_80219760:;
  c->r[3]=0u+0x00000000u; // 80219760
L_80219764:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 80219764
  c->r[0]=R32(c->r[1]+0x00000084u); // 80219768
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 8021976C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 80219770
  c->r[30]=R32(c->r[1]+0x00000068u); // 80219774
  c->lr=c->r[0]; // 80219778
  c->r[1]=c->r[1]+0x00000080u; // 8021977C
  return; // 80219780
}

// fn_80219784
void f_80219784(Ctx* __restrict c) {
  trace_call(0x80219784u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219784
  c->r[0]=c->lr; // 80219788
  cmps(c,0,(int32_t)c->r[3],0); // 8021978C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80219790
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80219794
  c->r[31]=c->r[3]|c->r[3]; // 80219798
  if (crb(c,2)) { goto L_802197AC; } // 8021979C
  cmps(c,0,(int32_t)c->r[4],0); // 802197A0
  if (!crb(c,1)) { goto L_802197AC; } // 802197A4
  c->lr=0x802197ACu; f_802896EC(c); // 802197A8
L_802197AC:;
  c->r[3]=c->r[31]|c->r[31]; // 802197AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802197B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802197B4
  c->lr=c->r[0]; // 802197B8
  c->r[1]=c->r[1]+0x00000010u; // 802197BC
  return; // 802197C0
}

// fn_802197C4
void f_802197C4(Ctx* __restrict c) {
  trace_call(0x802197C4u);
  c->r[3]=0u+0x00000005u; // 802197C4
  return; // 802197C8
}

// fn_802197CC
void f_802197CC(Ctx* __restrict c) {
  trace_call(0x802197CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802197CC
  c->r[0]=c->lr; // 802197D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802197D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802197D8
  c->r[31]=c->r[3]|c->r[3]; // 802197DC
  c->lr=0x802197E4u; f_801AFA04(c); // 802197E0
  {uint32_t ea=c->r[2]+0xFFFFCEB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802197E4
  c->r[4]=0u+0x80410000u; // 802197E8
  c->r[4]=c->r[4]+0xFFFFC998u; // 802197EC
  c->r[3]=c->r[31]|c->r[31]; // 802197F0
  c->r[0]=c->r[4]+0x00000040u; // 802197F4
  c->f[2]=c->f[1]; // 802197F8
  W32(c->r[31]+0x00000010u,c->r[4]); // 802197FC
  c->r[4]=0u+0x00000000u; // 80219800
  c->r[5]=0u+0x00000003u; // 80219804
  W32(c->r[31]+0x00000048u,c->r[0]); // 80219808
  c->lr=0x80219810u; f_802199F8(c); // 8021980C
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219810
  c->r[3]=c->r[31]|c->r[31]; // 80219814
  {uint32_t ea=c->r[2]+0xFFFFCEC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219818
  {uint32_t ea=c->r[31]+0x000026B4u; WF32(ea,c->f[1]);} // 8021981C
  {uint32_t ea=c->r[31]+0x000026B8u; WF32(ea,c->f[0]);} // 80219820
  {uint32_t ea=c->r[31]+0x000026BCu; WF32(ea,c->f[1]);} // 80219824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80219828
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021982C
  c->lr=c->r[0]; // 80219830
  c->r[1]=c->r[1]+0x00000010u; // 80219834
  return; // 80219838
}

// fn_8021983C
void f_8021983C(Ctx* __restrict c) {
  trace_call(0x8021983Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021983C
  c->r[0]=c->lr; // 80219840
  cmps(c,0,(int32_t)c->r[3],0); // 80219844
  W32(c->r[1]+0x00000014u,c->r[0]); // 80219848
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021984C
  c->r[30]=c->r[3]|c->r[3]; // 80219850
  c->r[31]=c->r[4]|c->r[4]; // 80219854
  if (crb(c,2)) { goto L_80219874; } // 80219858
  c->r[4]=0u+0x00000000u; // 8021985C
  c->lr=0x80219864u; f_80185EBC(c); // 80219860
  cmps(c,0,(int32_t)c->r[31],0); // 80219864
  if (!crb(c,1)) { goto L_80219874; } // 80219868
  c->r[3]=c->r[30]|c->r[30]; // 8021986C
  c->lr=0x80219874u; f_802896EC(c); // 80219870
L_80219874:;
  c->r[3]=c->r[30]|c->r[30]; // 80219874
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80219878
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021987C
  c->lr=c->r[0]; // 80219880
  c->r[1]=c->r[1]+0x00000010u; // 80219884
  return; // 80219888
}

// fn_8021988C
void f_8021988C(Ctx* __restrict c) {
  trace_call(0x8021988Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021988C
  c->r[0]=c->lr; // 80219890
  W32(c->r[1]+0x00000034u,c->r[0]); // 80219894
  c->r[11]=c->r[1]+0x00000030u; // 80219898
  c->lr=0x802198A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021989C
  {uint32_t ea=c->r[2]+0xFFFFCEC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802198A0
  c->r[0]=0u+0x00000000u; // 802198A4
  W32(c->r[3]+0x000026C0u,c->r[0]); // 802198A8
  c->r[31]=c->r[3]|c->r[3]; // 802198AC
  c->r[4]=0u+0x00000000u; // 802198B0
  c->r[5]=0u+0x00000001u; // 802198B4
  W32(c->r[3]+0x000026C4u,c->r[0]); // 802198B8
  W32(c->r[3]+0x000026D0u,c->r[0]); // 802198BC
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 802198C0
  c->r[3]=c->r[3]+0x00000394u; // 802198C4
  c->lr=0x802198CCu; f_800B16D0(c); // 802198C8
  c->r[27]=c->r[31]+0x000008ECu; // 802198CC
  c->r[4]=0u+0x803E0000u; // 802198D0
  c->r[3]=c->r[27]|c->r[27]; // 802198D4
  c->r[4]=c->r[4]+0x00002BA4u; // 802198D8
  c->lr=0x802198E0u; f_80075440(c); // 802198DC
  c->r[12]=R32(c->r[27]+0x00000000u); // 802198E0
  c->r[5]=c->r[3]|c->r[3]; // 802198E4
  c->r[3]=c->r[27]|c->r[27]; // 802198E8
  c->r[4]=0u+0x00000002u; // 802198EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802198F0
  c->r[6]=0u+0x00000000u; // 802198F4
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802198F8
  c->r[7]=0u+0x00000001u; // 802198FC
  {uint32_t ea=c->r[2]+0xFFFFCECCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80219900
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80219904
  c->ctr=c->r[12]; // 80219908
  if (true) { c->lr=0x80219910u; dispatch(c,c->ctr); } // 8021990C
  c->r[27]=0u+0x803E0000u; // 80219910
  {uint32_t ea=c->r[27]+0x00002B98u; c->r[28]=R8(ea); c->r[27]=ea;} // 80219914
  c->r[3]=0u+0x80490000u; // 80219918
  c->r[4]=c->r[1]+0x00000008u; // 8021991C
  c->r[29]=R8(c->r[27]+0x00000001u); // 80219920
  c->r[3]=c->r[3]+0xFFFFF8B8u; // 80219924
  c->r[30]=R8(c->r[27]+0x00000002u); // 80219928
  c->r[12]=R8(c->r[27]+0x00000003u); // 8021992C
  c->r[11]=R8(c->r[27]+0x00000004u); // 80219930
  c->r[10]=R8(c->r[27]+0x00000005u); // 80219934
  c->r[9]=R8(c->r[27]+0x00000006u); // 80219938
  c->r[8]=R8(c->r[27]+0x00000007u); // 8021993C
  c->r[7]=R8(c->r[27]+0x00000008u); // 80219940
  c->r[6]=R8(c->r[27]+0x00000009u); // 80219944
  c->r[5]=R8(c->r[27]+0x0000000Au); // 80219948
  c->r[0]=R8(c->r[27]+0x0000000Bu); // 8021994C
  W8(c->r[1]+0x00000008u,c->r[28]); // 80219950
  W8(c->r[1]+0x00000009u,c->r[29]); // 80219954
  W8(c->r[1]+0x0000000Au,c->r[30]); // 80219958
  W8(c->r[1]+0x0000000Bu,c->r[12]); // 8021995C
  W8(c->r[1]+0x0000000Cu,c->r[11]); // 80219960
  W8(c->r[1]+0x0000000Du,c->r[10]); // 80219964
  W8(c->r[1]+0x0000000Eu,c->r[9]); // 80219968
  W8(c->r[1]+0x0000000Fu,c->r[8]); // 8021996C
  W8(c->r[1]+0x00000010u,c->r[7]); // 80219970
  W8(c->r[1]+0x00000011u,c->r[6]); // 80219974
  W8(c->r[1]+0x00000012u,c->r[5]); // 80219978
  W8(c->r[1]+0x00000013u,c->r[0]); // 8021997C
  c->lr=0x80219984u; f_80103094(c); // 80219980
  c->r[27]=R32(c->r[3]+0x00000010u); // 80219984
  cmps(c,0,(int32_t)c->r[27],0); // 80219988
  if (crb(c,2)) { goto L_802199C8; } // 8021998C
  c->lr=0x80219994u; f_80061A4C(c); // 80219990
  c->r[4]=0u+0x00000002u; // 80219994
  c->lr=0x8021999Cu; f_80062AC4(c); // 80219998
  c->lr=0x802199A0u; f_80061A4C(c); // 8021999C
  c->r[28]=c->r[3]+0x000000ECu; // 802199A0
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802199A4
  c->r[3]=c->r[28]|c->r[28]; // 802199A8
  c->r[4]=c->r[27]|c->r[27]; // 802199AC
  c->r[5]=0u+0x00000000u; // 802199B0
  c->r[6]=0u+0x00000000u; // 802199B4
  c->lr=0x802199BCu; f_8012D0B8(c); // 802199B8
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802199BC
  c->r[3]=c->r[28]|c->r[28]; // 802199C0
  c->lr=0x802199C8u; f_8012D1D0(c); // 802199C4
L_802199C8:;
  c->r[3]=c->r[13]+0xFFFF8C38u; // 802199C8
  c->r[0]=c->r[13]+0xFFFF8C40u; // 802199CC
  W32(c->r[31]+0x000005BCu,c->r[3]); // 802199D0
  c->r[11]=c->r[1]+0x00000030u; // 802199D4
  W32(c->r[31]+0x000005C4u,c->r[3]); // 802199D8
  W32(c->r[31]+0x000004FCu,c->r[0]); // 802199DC
  W32(c->r[31]+0x00000504u,c->r[0]); // 802199E0
  c->lr=0x802199E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802199E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802199E8
  c->lr=c->r[0]; // 802199EC
  c->r[1]=c->r[1]+0x00000030u; // 802199F0
  return; // 802199F4
}

// fn_802199F8
void f_802199F8(Ctx* __restrict c) {
  trace_call(0x802199F8u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802199F8
  c->r[3]=c->r[3]+c->r[0]; // 802199FC
  {uint32_t ea=c->r[3]+0x0000254Cu; WF32(ea,c->f[1]);} // 80219A00
  {uint32_t ea=c->r[3]+0x00002550u; WF32(ea,c->f[2]);} // 80219A04
  W32(c->r[3]+0x00002554u,c->r[5]); // 80219A08
  return; // 80219A0C
}

// fn_80219A10
void f_80219A10(Ctx* __restrict c) {
  trace_call(0x80219A10u);
  {uint32_t ea=c->r[3]+0x000026B4u; WF32(ea,c->f[1]);} // 80219A10
  {uint32_t ea=c->r[3]+0x000026B8u; WF32(ea,c->f[2]);} // 80219A14
  return; // 80219A18
}

// fn_80219A1C
void f_80219A1C(Ctx* __restrict c) {
  trace_call(0x80219A1Cu);
  {uint32_t ea=c->r[3]+0x000026BCu; WF32(ea,c->f[1]);} // 80219A1C
  return; // 80219A20
}

// fn_80219A24
void f_80219A24(Ctx* __restrict c) {
  trace_call(0x80219A24u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 80219A24
  c->r[4]=c->r[3]+c->r[0]; // 80219A28
  {uint32_t ea=c->r[4]+0x0000254Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80219A2C
  {uint32_t ea=c->r[3]+0x00001F68u; WF32(ea,c->f[0]);} // 80219A30
  {uint32_t ea=c->r[4]+0x00002550u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219A34
  {uint32_t ea=c->r[3]+0x00001F6Cu; WF32(ea,c->f[0]);} // 80219A38
  c->r[0]=R32(c->r[4]+0x00002554u); // 80219A3C
  W32(c->r[3]+0x00001F70u,c->r[0]); // 80219A40
  return; // 80219A44
}

// fn_80219A48
void f_80219A48(Ctx* __restrict c) {
  trace_call(0x80219A48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219A48
  c->r[0]=c->lr; // 80219A4C
  c->r[4]=0u+0x805D0000u; // 80219A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80219A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80219A58
  c->r[31]=c->r[3]|c->r[3]; // 80219A5C
  c->r[3]=c->r[4]+0x00006AE4u; // 80219A60
  c->lr=0x80219A68u; f_801AE384(c); // 80219A64
  c->r[3]=c->r[31]|c->r[31]; // 80219A68
  c->lr=0x80219A70u; f_800B5DFC(c); // 80219A6C
  c->r[3]=c->r[31]|c->r[31]; // 80219A70
  c->lr=0x80219A78u; f_80219A90(c); // 80219A74
  c->r[0]=R32(c->r[1]+0x00000014u); // 80219A78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80219A7C
  c->lr=c->r[0]; // 80219A80
  c->r[1]=c->r[1]+0x00000010u; // 80219A84
  return; // 80219A88
}

// fn_80219A8C
void f_80219A8C(Ctx* __restrict c) {
  trace_call(0x80219A8Cu);
  return; // 80219A8C
}

// fn_80219A90
void f_80219A90(Ctx* __restrict c) {
  trace_call(0x80219A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219A90
  c->r[0]=c->lr; // 80219A94
  W32(c->r[1]+0x00000024u,c->r[0]); // 80219A98
  c->r[11]=c->r[1]+0x00000020u; // 80219A9C
  c->lr=0x80219AA4u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80219AA0
  c->r[0]=R32(c->r[3]+0x00000050u); // 80219AA4
  c->r[31]=c->r[3]|c->r[3]; // 80219AA8
  cmps(c,0,(int32_t)c->r[0],0); // 80219AAC
  if (crb(c,2)) { goto L_80219AD8; } // 80219AB0
  c->r[3]=c->r[0]|c->r[0]; // 80219AB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80219AB8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80219ABC
  c->ctr=c->r[12]; // 80219AC0
  if (true) { c->lr=0x80219AC8u; dispatch(c,c->ctr); } // 80219AC4
  cmps(c,0,(int32_t)c->r[3],2); // 80219AC8
  if (!crb(c,2)) { goto L_80219AD8; } // 80219ACC
  c->r[0]=0u+0x00000001u; // 80219AD0
  goto L_80219ADC; // 80219AD4
L_80219AD8:;
  c->r[0]=0u+0x00000000u; // 80219AD8
L_80219ADC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80219ADC
  if (!crb(c,2)) { goto L_80219E6C; } // 80219AE0
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219AE4
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219AE8
  c->lr=0x80219AF0u; f_80075428(c); // 80219AEC
  cmps(c,0,(int32_t)c->r[3],0); // 80219AF0
  if (crb(c,2)) { goto L_80219BD0; } // 80219AF4
  c->r[4]=R32(c->r[31]+0x00000974u); // 80219AF8
  c->r[30]=0u+0x803E0000u; // 80219AFC
  c->r[30]=c->r[30]+0x00002BA4u; // 80219B00
  c->r[3]=c->r[31]+0x000008ECu; // 80219B04
  c->r[5]=R32(c->r[4]+0x00000000u); // 80219B08
  c->r[4]=c->r[30]+0x0000000Au; // 80219B0C
  c->r[29]=R32(c->r[5]+0x00000018u); // 80219B10
  c->lr=0x80219B18u; f_80075440(c); // 80219B14
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80219B18
  if (!crb(c,2)) { goto L_80219BD0; } // 80219B1C
  {uint32_t ea=c->r[2]+0xFFFFCED0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219B20
  c->r[3]=c->r[31]|c->r[31]; // 80219B24
  {uint32_t ea=c->r[2]+0xFFFFCED4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219B28
  {uint32_t ea=c->r[2]+0xFFFFCED8u; c->f[3]=c->ps1[3]=RF32(ea);} // 80219B2C
  c->lr=0x80219B34u; f_80219E84(c); // 80219B30
  cmps(c,0,(int32_t)c->r[3],0); // 80219B34
  if (crb(c,2)) { goto L_80219B94; } // 80219B38
  c->r[3]=c->r[31]+0x000008ECu; // 80219B3C
  c->r[4]=c->r[30]+0x0000000Fu; // 80219B40
  c->lr=0x80219B48u; f_80075440(c); // 80219B44
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219B48
  c->r[5]=c->r[3]|c->r[3]; // 80219B4C
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219B50
  c->r[3]=c->r[31]+0x00000C88u; // 80219B54
  c->r[4]=c->r[31]+0x000008ECu; // 80219B58
  c->r[6]=0u+0x00000000u; // 80219B5C
  c->r[7]=0u+0x00000000u; // 80219B60
  c->lr=0x80219B68u; f_800BB0C8(c); // 80219B64
  c->r[3]=c->r[31]|c->r[31]; // 80219B68
  c->lr=0x80219B70u; f_800AC524(c); // 80219B6C
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 80219B70
  c->r[4]=0u+0x0000000Au; // 80219B74
  c->r[5]=0u+0x00000000u; // 80219B78
  c->r[6]=0u+0x00000000u; // 80219B7C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80219B80
  c->r[12]=R32(c->r[12]+0x00000028u); // 80219B84
  c->ctr=c->r[12]; // 80219B88
  if (true) { c->lr=0x80219B90u; dispatch(c,c->ctr); } // 80219B8C
  goto L_80219E6C; // 80219B90
L_80219B94:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219B94
  {uint32_t ea=c->r[2]+0xFFFFCED8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219B98
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219B9C
  c->lr=0x80219BA4u; f_800C57C4(c); // 80219BA0
  cmps(c,0,(int32_t)c->r[3],0); // 80219BA4
  if (crb(c,2)) { goto L_80219E6C; } // 80219BA8
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 80219BAC
  c->r[4]=0u+0x0000000Bu; // 80219BB0
  c->r[5]=0u+0x00000000u; // 80219BB4
  c->r[6]=0u+0x00000000u; // 80219BB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80219BBC
  c->r[12]=R32(c->r[12]+0x00000028u); // 80219BC0
  c->ctr=c->r[12]; // 80219BC4
  if (true) { c->lr=0x80219BCCu; dispatch(c,c->ctr); } // 80219BC8
  goto L_80219E6C; // 80219BCC
L_80219BD0:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219BD0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219BD4
  c->lr=0x80219BDCu; f_80075428(c); // 80219BD8
  cmps(c,0,(int32_t)c->r[3],0); // 80219BDC
  if (crb(c,2)) { goto L_80219CBC; } // 80219BE0
  c->r[4]=R32(c->r[31]+0x00000974u); // 80219BE4
  c->r[30]=0u+0x803E0000u; // 80219BE8
  c->r[30]=c->r[30]+0x00002BA4u; // 80219BEC
  c->r[3]=c->r[31]+0x000008ECu; // 80219BF0
  c->r[5]=R32(c->r[4]+0x00000000u); // 80219BF4
  c->r[4]=c->r[30]+0x00000014u; // 80219BF8
  c->r[29]=R32(c->r[5]+0x00000018u); // 80219BFC
  c->lr=0x80219C04u; f_80075440(c); // 80219C00
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80219C04
  if (!crb(c,2)) { goto L_80219CBC; } // 80219C08
  {uint32_t ea=c->r[2]+0xFFFFCEC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219C0C
  c->r[3]=c->r[31]|c->r[31]; // 80219C10
  {uint32_t ea=c->r[2]+0xFFFFCEE0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219C14
  {uint32_t ea=c->r[2]+0xFFFFCEE4u; c->f[3]=c->ps1[3]=RF32(ea);} // 80219C18
  c->lr=0x80219C20u; f_80219E84(c); // 80219C1C
  cmps(c,0,(int32_t)c->r[3],0); // 80219C20
  if (crb(c,2)) { goto L_80219C80; } // 80219C24
  c->r[3]=c->r[31]+0x000008ECu; // 80219C28
  c->r[4]=c->r[30]+0x0000000Fu; // 80219C2C
  c->lr=0x80219C34u; f_80075440(c); // 80219C30
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219C34
  c->r[5]=c->r[3]|c->r[3]; // 80219C38
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219C3C
  c->r[3]=c->r[31]+0x00000C88u; // 80219C40
  c->r[4]=c->r[31]+0x000008ECu; // 80219C44
  c->r[6]=0u+0x00000000u; // 80219C48
  c->r[7]=0u+0x00000000u; // 80219C4C
  c->lr=0x80219C54u; f_800BB0C8(c); // 80219C50
  c->r[3]=c->r[31]|c->r[31]; // 80219C54
  c->lr=0x80219C5Cu; f_800AC524(c); // 80219C58
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 80219C5C
  c->r[4]=0u+0x0000000Au; // 80219C60
  c->r[5]=0u+0x00000000u; // 80219C64
  c->r[6]=0u+0x00000000u; // 80219C68
  c->r[12]=R32(c->r[3]+0x00000000u); // 80219C6C
  c->r[12]=R32(c->r[12]+0x00000028u); // 80219C70
  c->ctr=c->r[12]; // 80219C74
  if (true) { c->lr=0x80219C7Cu; dispatch(c,c->ctr); } // 80219C78
  goto L_80219E6C; // 80219C7C
L_80219C80:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219C80
  {uint32_t ea=c->r[2]+0xFFFFCEE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219C84
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219C88
  c->lr=0x80219C90u; f_800C57C4(c); // 80219C8C
  cmps(c,0,(int32_t)c->r[3],0); // 80219C90
  if (crb(c,2)) { goto L_80219E6C; } // 80219C94
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 80219C98
  c->r[4]=0u+0x0000000Bu; // 80219C9C
  c->r[5]=0u+0x00000000u; // 80219CA0
  c->r[6]=0u+0x00000000u; // 80219CA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80219CA8
  c->r[12]=R32(c->r[12]+0x00000028u); // 80219CAC
  c->ctr=c->r[12]; // 80219CB0
  if (true) { c->lr=0x80219CB8u; dispatch(c,c->ctr); } // 80219CB4
  goto L_80219E6C; // 80219CB8
L_80219CBC:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219CBC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219CC0
  c->lr=0x80219CC8u; f_80075428(c); // 80219CC4
  cmps(c,0,(int32_t)c->r[3],0); // 80219CC8
  if (crb(c,2)) { goto L_80219D5C; } // 80219CCC
  c->r[4]=R32(c->r[31]+0x00000974u); // 80219CD0
  c->r[30]=0u+0x803E0000u; // 80219CD4
  c->r[30]=c->r[30]+0x00002BA4u; // 80219CD8
  c->r[3]=c->r[31]+0x000008ECu; // 80219CDC
  c->r[5]=R32(c->r[4]+0x00000000u); // 80219CE0
  c->r[4]=c->r[30]+0x00000019u; // 80219CE4
  c->r[29]=R32(c->r[5]+0x00000018u); // 80219CE8
  c->lr=0x80219CF0u; f_80075440(c); // 80219CEC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80219CF0
  if (!crb(c,2)) { goto L_80219D5C; } // 80219CF4
  {uint32_t ea=c->r[2]+0xFFFFCEE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219CF8
  c->r[3]=c->r[31]|c->r[31]; // 80219CFC
  {uint32_t ea=c->r[2]+0xFFFFCEECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80219D00
  {uint32_t ea=c->r[2]+0xFFFFCEF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80219D04
  c->lr=0x80219D0Cu; f_80219E84(c); // 80219D08
  cmps(c,0,(int32_t)c->r[3],0); // 80219D0C
  if (crb(c,2)) { goto L_80219E6C; } // 80219D10
  c->r[3]=c->r[31]+0x000008ECu; // 80219D14
  c->r[4]=c->r[30]+0x0000001Eu; // 80219D18
  c->lr=0x80219D20u; f_80075440(c); // 80219D1C
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219D20
  c->r[5]=c->r[3]|c->r[3]; // 80219D24
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219D28
  c->r[3]=c->r[31]+0x00000C88u; // 80219D2C
  c->r[4]=c->r[31]+0x000008ECu; // 80219D30
  c->r[6]=0u+0x00000000u; // 80219D34
  c->r[7]=0u+0x00000000u; // 80219D38
  c->lr=0x80219D40u; f_800BB0C8(c); // 80219D3C
  c->r[3]=0u+0x805D0000u; // 80219D40
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219D44
  c->r[3]=c->r[3]+0x00006AE4u; // 80219D48
  c->r[4]=c->r[30]+0x00000023u; // 80219D4C
  c->r[5]=0u+0x00000000u; // 80219D50
  c->lr=0x80219D58u; f_801AE4A4(c); // 80219D54
  goto L_80219E6C; // 80219D58
L_80219D5C:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219D5C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219D60
  c->lr=0x80219D68u; f_80075428(c); // 80219D64
  cmps(c,0,(int32_t)c->r[3],0); // 80219D68
  if (crb(c,2)) { goto L_80219E6C; } // 80219D6C
  c->r[4]=R32(c->r[31]+0x00000974u); // 80219D70
  c->r[30]=0u+0x803E0000u; // 80219D74
  c->r[30]=c->r[30]+0x00002BA4u; // 80219D78
  c->r[3]=c->r[31]+0x000008ECu; // 80219D7C
  c->r[5]=R32(c->r[4]+0x00000000u); // 80219D80
  c->r[4]=c->r[30]+0x0000002Fu; // 80219D84
  c->r[29]=R32(c->r[5]+0x00000018u); // 80219D88
  c->lr=0x80219D90u; f_80075440(c); // 80219D8C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 80219D90
  if (!crb(c,2)) { goto L_80219E6C; } // 80219D94
  c->r[0]=0u+0x0000000Eu; // 80219D98
  {uint32_t ea=c->r[2]+0xFFFFCEF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219D9C
  W32(c->r[31]+0x000026CCu,c->r[0]); // 80219DA0
  c->r[3]=c->r[31]|c->r[31]; // 80219DA4
  {uint32_t ea=c->r[2]+0xFFFFCEF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219DA8
  {uint32_t ea=c->r[2]+0xFFFFCEFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80219DAC
  c->lr=0x80219DB4u; f_80219E84(c); // 80219DB0
  cmps(c,0,(int32_t)c->r[3],0); // 80219DB4
  if (crb(c,2)) { goto L_80219E34; } // 80219DB8
  c->r[0]=0u+0x0000000Du; // 80219DBC
  c->r[3]=0u+0x805D0000u; // 80219DC0
  W32(c->r[31]+0x000026CCu,c->r[0]); // 80219DC4
  c->r[3]=c->r[3]+0x00006AE4u; // 80219DC8
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219DCC
  c->r[4]=c->r[30]+0x00000034u; // 80219DD0
  c->r[5]=0u+0x00000000u; // 80219DD4
  c->lr=0x80219DDCu; f_801AE4A4(c); // 80219DD8
  c->r[3]=c->r[31]+0x000008ECu; // 80219DDC
  c->r[4]=c->r[30]+0x00000040u; // 80219DE0
  c->lr=0x80219DE8u; f_80075440(c); // 80219DE4
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219DE8
  c->r[5]=c->r[3]|c->r[3]; // 80219DEC
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219DF0
  c->r[3]=c->r[31]+0x00000C88u; // 80219DF4
  c->r[4]=c->r[31]+0x000008ECu; // 80219DF8
  c->r[6]=0u+0x00000000u; // 80219DFC
  c->r[7]=0u+0x00000000u; // 80219E00
  c->lr=0x80219E08u; f_800BB0C8(c); // 80219E04
  c->r[3]=c->r[31]|c->r[31]; // 80219E08
  c->lr=0x80219E10u; f_800AC524(c); // 80219E0C
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 80219E10
  c->r[4]=0u+0x0000000Du; // 80219E14
  c->r[5]=0u+0x00000000u; // 80219E18
  c->r[6]=0u+0x00000000u; // 80219E1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80219E20
  c->r[12]=R32(c->r[12]+0x00000028u); // 80219E24
  c->ctr=c->r[12]; // 80219E28
  if (true) { c->lr=0x80219E30u; dispatch(c,c->ctr); } // 80219E2C
  goto L_80219E6C; // 80219E30
L_80219E34:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219E34
  {uint32_t ea=c->r[2]+0xFFFFCEFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219E38
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219E3C
  c->lr=0x80219E44u; f_800C57C4(c); // 80219E40
  cmps(c,0,(int32_t)c->r[3],0); // 80219E44
  if (crb(c,2)) { goto L_80219E6C; } // 80219E48
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 80219E4C
  c->r[4]=0u+0x0000000Eu; // 80219E50
  c->r[5]=0u+0x00000000u; // 80219E54
  c->r[6]=0u+0x00000000u; // 80219E58
  c->r[12]=R32(c->r[3]+0x00000000u); // 80219E5C
  c->r[12]=R32(c->r[12]+0x00000028u); // 80219E60
  c->ctr=c->r[12]; // 80219E64
  if (true) { c->lr=0x80219E6Cu; dispatch(c,c->ctr); } // 80219E68
L_80219E6C:;
  c->r[11]=c->r[1]+0x00000020u; // 80219E6C
  c->lr=0x80219E74u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80219E70
  c->r[0]=R32(c->r[1]+0x00000024u); // 80219E74
  c->lr=c->r[0]; // 80219E78
  c->r[1]=c->r[1]+0x00000020u; // 80219E7C
  return; // 80219E80
}

// fn_80219E84
void f_80219E84(Ctx* __restrict c) {
  trace_call(0x80219E84u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219E84
  c->r[0]=c->lr; // 80219E88
  W32(c->r[1]+0x00000044u,c->r[0]); // 80219E8C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80219E90
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80219E94
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80219E98
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 80219E9C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 80219EA0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 80219EA4
  c->f[29]=c->f[1]; // 80219EA8
  c->f[30]=c->f[2]; // 80219EAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80219EB0
  c->f[31]=c->f[3]; // 80219EB4
  c->r[31]=c->r[3]|c->r[3]; // 80219EB8
  c->r[4]=R32(c->r[3]+0x00000974u); // 80219EBC
  c->r[3]=R32(c->r[4]+0x00000000u); // 80219EC0
  c->lr=0x80219EC8u; f_800C57C4(c); // 80219EC4
  cmps(c,0,(int32_t)c->r[3],0); // 80219EC8
  if (crb(c,2)) { goto L_80219ED8; } // 80219ECC
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219ED0
  {uint32_t ea=c->r[31]+0x000026C8u; WF32(ea,c->f[0]);} // 80219ED4
L_80219ED8:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219ED8
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219EDC
  c->lr=0x80219EE4u; f_800752CC(c); // 80219EE0
  fcmp(c,0,c->f[1],c->f[29]); // 80219EE4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80219EE8
  if (!crb(c,2)) { goto L_80219F2C; } // 80219EEC
  c->r[3]=R32(c->r[31]+0x00000974u); // 80219EF0
  c->r[3]=R32(c->r[3]+0x00000000u); // 80219EF4
  c->lr=0x80219EFCu; f_800752CC(c); // 80219EF8
  fcmp(c,0,c->f[1],c->f[30]); // 80219EFC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80219F00
  if (!crb(c,2)) { goto L_80219F2C; } // 80219F04
  {uint32_t ea=c->r[31]+0x000026C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 80219F08
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80219F0C
  {uint32_t ea=c->r[31]+0x00001F68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219F10
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80219F14
  fcmp(c,0,c->f[1],c->f[0]); // 80219F18
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80219F1C
  if (!crb(c,2)) { goto L_80219F2C; } // 80219F20
  c->r[3]=0u+0x00000001u; // 80219F24
  goto L_80219F48; // 80219F28
L_80219F2C:;
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219F2C
  fcmp(c,0,c->f[31],c->f[0]); // 80219F30
  if (crb(c,2)) { goto L_80219F44; } // 80219F34
  c->f[1]=c->f[31]; // 80219F38
  c->r[3]=c->r[31]|c->r[31]; // 80219F3C
  c->lr=0x80219F44u; f_80219F74(c); // 80219F40
L_80219F44:;
  c->r[3]=0u+0x00000000u; // 80219F44
L_80219F48:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80219F48
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80219F4C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 80219F50
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80219F54
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 80219F58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 80219F5C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80219F60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80219F64
  c->lr=c->r[0]; // 80219F68
  c->r[1]=c->r[1]+0x00000040u; // 80219F6C
  return; // 80219F70
}

// fn_80219F74
void f_80219F74(Ctx* __restrict c) {
  trace_call(0x80219F74u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80219F74
  c->r[0]=c->lr; // 80219F78
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80219F7C
  W32(c->r[1]+0x000000BCu,c->r[31]); // 80219F80
  c->r[31]=c->r[3]|c->r[3]; // 80219F84
  c->r[4]=R32(c->r[3]+0x00000974u); // 80219F88
  c->r[3]=R32(c->r[4]+0x00000000u); // 80219F8C
  c->lr=0x80219F94u; f_800C57C4(c); // 80219F90
  cmps(c,0,(int32_t)c->r[3],0); // 80219F94
  if (crb(c,2)) { goto L_8021A0D8; } // 80219F98
  c->r[0]=R32(c->r[31]+0x00001F70u); // 80219F9C
  cmps(c,0,(int32_t)c->r[0],2); // 80219FA0
  if (crb(c,2)) { goto L_8021A00C; } // 80219FA4
  if (!crb(c,0)) { goto L_80219FBC; } // 80219FA8
  cmps(c,0,(int32_t)c->r[0],0); // 80219FAC
  if (crb(c,2)) { goto L_8021A0D8; } // 80219FB0
  if (!crb(c,0)) { goto L_80219FC8; } // 80219FB4
  goto L_8021A0D8; // 80219FB8
L_80219FBC:;
  cmps(c,0,(int32_t)c->r[0],4); // 80219FBC
  if (!crb(c,0)) { goto L_8021A0D8; } // 80219FC0
  goto L_8021A054; // 80219FC4
L_80219FC8:;
  {uint32_t ea=c->r[31]+0x00001F6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80219FC8
  c->r[3]=c->r[1]+0x00000094u; // 80219FCC
  {uint32_t ea=c->r[31]+0x000026BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80219FD0
  c->r[4]=0u+0x00000000u; // 80219FD4
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 80219FD8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80219FDC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80219FE0
  c->lr=0x80219FE8u; f_8010541C(c); // 80219FE4
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 80219FE8
  c->r[3]=c->r[1]+0x00000020u; // 80219FEC
  c->r[4]=c->r[1]+0x00000094u; // 80219FF0
  c->r[5]=R32(c->r[6]+0x00000000u); // 80219FF4
  c->r[0]=R32(c->r[6]+0x00000004u); // 80219FF8
  W32(c->r[1]+0x00000020u,c->r[5]); // 80219FFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021A000
  c->lr=0x8021A008u; f_800BCDAC(c); // 8021A004
  goto L_8021A0D8; // 8021A008
L_8021A00C:;
  {uint32_t ea=c->r[31]+0x00001F6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A00C
  c->r[3]=c->r[1]+0x00000070u; // 8021A010
  {uint32_t ea=c->r[31]+0x000026BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A014
  c->r[4]=0u+0x00000000u; // 8021A018
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A01C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8021A020
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8021A024
  c->lr=0x8021A02Cu; f_8010541C(c); // 8021A028
  c->r[4]=c->r[13]+0xFFFF94B8u; // 8021A02C
  c->r[3]=c->r[1]+0x00000018u; // 8021A030
  c->r[6]=R32(c->r[4]+0x00000004u); // 8021A034
  c->r[4]=c->r[1]+0x00000070u; // 8021A038
  c->r[5]=R32(c->r[6]+0x00000000u); // 8021A03C
  c->r[0]=R32(c->r[6]+0x00000004u); // 8021A040
  W32(c->r[1]+0x00000018u,c->r[5]); // 8021A044
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8021A048
  c->lr=0x8021A050u; f_800BCDAC(c); // 8021A04C
  goto L_8021A0D8; // 8021A050
L_8021A054:;
  {uint32_t ea=c->r[31]+0x00001F6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A054
  c->r[3]=c->r[1]+0x0000004Cu; // 8021A058
  {uint32_t ea=c->r[31]+0x000026BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A05C
  c->r[4]=0u+0x00000000u; // 8021A060
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A064
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8021A068
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8021A06C
  c->lr=0x8021A074u; f_8010541C(c); // 8021A070
  c->r[6]=R32(c->r[13]+0xFFFF94B8u); // 8021A074
  c->r[3]=c->r[1]+0x00000010u; // 8021A078
  c->r[4]=c->r[1]+0x0000004Cu; // 8021A07C
  c->r[5]=R32(c->r[6]+0x00000000u); // 8021A080
  c->r[0]=R32(c->r[6]+0x00000004u); // 8021A084
  W32(c->r[1]+0x00000010u,c->r[5]); // 8021A088
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A08C
  c->lr=0x8021A094u; f_800BCDAC(c); // 8021A090
  {uint32_t ea=c->r[31]+0x00001F6Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A094
  c->r[3]=c->r[1]+0x00000028u; // 8021A098
  {uint32_t ea=c->r[31]+0x000026BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A09C
  c->r[4]=0u+0x00000000u; // 8021A0A0
  {uint32_t ea=c->r[31]+0x00000398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A0A4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8021A0A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8021A0AC
  c->lr=0x8021A0B4u; f_8010541C(c); // 8021A0B0
  c->r[4]=c->r[13]+0xFFFF94B8u; // 8021A0B4
  c->r[3]=c->r[1]+0x00000008u; // 8021A0B8
  c->r[6]=R32(c->r[4]+0x00000004u); // 8021A0BC
  c->r[4]=c->r[1]+0x00000028u; // 8021A0C0
  c->r[5]=R32(c->r[6]+0x00000000u); // 8021A0C4
  c->r[0]=R32(c->r[6]+0x00000004u); // 8021A0C8
  W32(c->r[1]+0x00000008u,c->r[5]); // 8021A0CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8021A0D0
  c->lr=0x8021A0D8u; f_800BCDAC(c); // 8021A0D4
L_8021A0D8:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8021A0D8
  c->r[31]=R32(c->r[1]+0x000000BCu); // 8021A0DC
  c->lr=c->r[0]; // 8021A0E0
  c->r[1]=c->r[1]+0x000000C0u; // 8021A0E4
  return; // 8021A0E8
}

// fn_8021A0EC
void f_8021A0EC(Ctx* __restrict c) {
  trace_call(0x8021A0ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A0EC
  c->r[0]=c->lr; // 8021A0F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021A0F4
  c->r[11]=c->r[1]+0x00000020u; // 8021A0F8
  c->lr=0x8021A100u; { W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021A0FC
  c->r[29]=c->r[5]|c->r[5]; // 8021A100
  c->r[31]=c->r[3]|c->r[3]; // 8021A104
  c->r[12]=R32(c->r[29]+0x00000000u); // 8021A108
  c->r[3]=c->r[29]|c->r[29]; // 8021A10C
  c->r[30]=c->r[4]|c->r[4]; // 8021A110
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021A114
  c->ctr=c->r[12]; // 8021A118
  if (true) { c->lr=0x8021A120u; dispatch(c,c->ctr); } // 8021A11C
  cmps(c,0,(int32_t)c->r[3],1025); // 8021A120
  if (!crb(c,0)) { goto L_8021A134; } // 8021A124
  cmps(c,0,(int32_t)c->r[3],3); // 8021A128
  if (crb(c,2)) { goto L_8021A140; } // 8021A12C
  goto L_8021A338; // 8021A130
L_8021A134:;
  cmps(c,0,(int32_t)c->r[3],1029); // 8021A134
  if (!crb(c,0)) { goto L_8021A338; } // 8021A138
  goto L_8021A15C; // 8021A13C
L_8021A140:;
  c->r[3]=c->r[31]|c->r[31]; // 8021A140
  c->lr=0x8021A148u; f_800AC7C4(c); // 8021A144
  c->r[3]=c->r[31]|c->r[31]; // 8021A148
  c->r[4]=c->r[30]|c->r[30]; // 8021A14C
  c->r[5]=c->r[29]|c->r[29]; // 8021A150
  c->lr=0x8021A158u; f_800B5B1C(c); // 8021A154
  goto L_8021A348; // 8021A158
L_8021A15C:;
  c->r[0]=R8(c->r[29]+0x00000036u); // 8021A15C
  cmps(c,0,(int32_t)c->r[0],0); // 8021A160
  if (crb(c,2)) { goto L_8021A2CC; } // 8021A164
  c->r[12]=R32(c->r[31]+0x00000010u); // 8021A168
  c->r[3]=c->r[31]|c->r[31]; // 8021A16C
  c->r[4]=c->r[29]|c->r[29]; // 8021A170
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A174
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 8021A178
  c->ctr=c->r[12]; // 8021A17C
  if (true) { c->lr=0x8021A184u; dispatch(c,c->ctr); } // 8021A180
  {uint32_t ea=c->r[31]+0x000026B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A184
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A188
  c->r[3]=R32(c->r[31]+0x00000974u); // 8021A18C
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 8021A190
  {uint32_t ea=c->r[31]+0x000003A4u; WF32(ea,c->f[0]);} // 8021A194
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8021A198
  c->lr=0x8021A1A0u; f_80075428(c); // 8021A19C
  cmps(c,0,(int32_t)c->r[3],0); // 8021A1A0
  if (crb(c,2)) { goto L_8021A1D0; } // 8021A1A4
  c->r[5]=R32(c->r[31]+0x00000974u); // 8021A1A8
  c->r[4]=0u+0x803E0000u; // 8021A1AC
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A1B0
  c->r[3]=c->r[31]+0x000008ECu; // 8021A1B4
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8021A1B8
  c->r[4]=c->r[4]+0x00000045u; // 8021A1BC
  c->r[30]=R32(c->r[5]+0x00000018u); // 8021A1C0
  c->lr=0x8021A1C8u; f_80075440(c); // 8021A1C4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8021A1C8
  if (crb(c,2)) { goto L_8021A348; } // 8021A1CC
L_8021A1D0:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 8021A1D0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021A1D4
  c->lr=0x8021A1DCu; f_80075428(c); // 8021A1D8
  cmps(c,0,(int32_t)c->r[3],0); // 8021A1DC
  if (crb(c,2)) { goto L_8021A284; } // 8021A1E0
  c->r[5]=R32(c->r[31]+0x00000974u); // 8021A1E4
  c->r[4]=0u+0x803E0000u; // 8021A1E8
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A1EC
  c->r[3]=c->r[31]+0x000008ECu; // 8021A1F0
  c->r[5]=R32(c->r[5]+0x00000000u); // 8021A1F4
  c->r[4]=c->r[4]+0x0000002Fu; // 8021A1F8
  c->r[30]=R32(c->r[5]+0x00000018u); // 8021A1FC
  c->lr=0x8021A204u; f_80075440(c); // 8021A200
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8021A204
  if (!crb(c,2)) { goto L_8021A284; } // 8021A208
  c->r[3]=R32(c->r[31]+0x00000974u); // 8021A20C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021A210
  c->lr=0x8021A218u; f_800752CC(c); // 8021A214
  {uint32_t ea=c->r[2]+0xFFFFCF00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A218
  fcmp(c,0,c->f[1],c->f[0]); // 8021A21C
  if (!crb(c,0)) { goto L_8021A23C; } // 8021A220
  c->r[3]=R32(c->r[31]+0x00000974u); // 8021A224
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021A228
  c->lr=0x8021A230u; f_800752CC(c); // 8021A22C
  {uint32_t ea=c->r[2]+0xFFFFCF04u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A230
  fcmp(c,0,c->f[1],c->f[0]); // 8021A234
  if (crb(c,1)) { goto L_8021A348; } // 8021A238
L_8021A23C:;
  c->r[4]=0u+0x803E0000u; // 8021A23C
  c->r[3]=c->r[31]+0x000008ECu; // 8021A240
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A244
  c->r[4]=c->r[4]+0x00000045u; // 8021A248
  c->lr=0x8021A250u; f_80075440(c); // 8021A24C
  c->r[12]=R32(c->r[31]+0x000008ECu); // 8021A250
  c->r[5]=c->r[3]|c->r[3]; // 8021A254
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A258
  c->r[3]=c->r[31]+0x000008ECu; // 8021A25C
  c->r[12]=R32(c->r[12]+0x00000010u); // 8021A260
  c->r[4]=0u+0x00000003u; // 8021A264
  c->f[3]=c->f[2]; // 8021A268
  c->r[6]=0u+0x00000000u; // 8021A26C
  c->r[7]=0u+0x00000000u; // 8021A270
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A274
  c->ctr=c->r[12]; // 8021A278
  if (true) { c->lr=0x8021A280u; dispatch(c,c->ctr); } // 8021A27C
  goto L_8021A348; // 8021A280
L_8021A284:;
  c->r[4]=0u+0x803E0000u; // 8021A284
  c->r[3]=c->r[31]+0x000008ECu; // 8021A288
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A28C
  c->r[4]=c->r[4]+0x00000045u; // 8021A290
  c->lr=0x8021A298u; f_80075440(c); // 8021A294
  c->r[12]=R32(c->r[31]+0x000008ECu); // 8021A298
  c->r[5]=c->r[3]|c->r[3]; // 8021A29C
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A2A0
  c->r[3]=c->r[31]+0x000008ECu; // 8021A2A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8021A2A8
  c->r[4]=0u+0x00000003u; // 8021A2AC
  c->f[3]=c->f[2]; // 8021A2B0
  c->r[6]=0u+0x00000000u; // 8021A2B4
  c->r[7]=0u+0x00000000u; // 8021A2B8
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A2BC
  c->ctr=c->r[12]; // 8021A2C0
  if (true) { c->lr=0x8021A2C8u; dispatch(c,c->ctr); } // 8021A2C4
  goto L_8021A348; // 8021A2C8
L_8021A2CC:;
  c->r[3]=R32(c->r[31]+0x00000974u); // 8021A2CC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8021A2D0
  c->lr=0x8021A2D8u; f_80075428(c); // 8021A2D4
  cmps(c,0,(int32_t)c->r[3],0); // 8021A2D8
  if (crb(c,2)) { goto L_8021A308; } // 8021A2DC
  c->r[5]=R32(c->r[31]+0x00000974u); // 8021A2E0
  c->r[4]=0u+0x803E0000u; // 8021A2E4
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A2E8
  c->r[3]=c->r[31]+0x000008ECu; // 8021A2EC
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8021A2F0
  c->r[4]=c->r[4]+0x00000045u; // 8021A2F4
  c->r[30]=R32(c->r[5]+0x00000018u); // 8021A2F8
  c->lr=0x8021A300u; f_80075440(c); // 8021A2FC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8021A300
  if (crb(c,2)) { goto L_8021A348; } // 8021A304
L_8021A308:;
  c->r[12]=R32(c->r[31]+0x00000010u); // 8021A308
  c->r[3]=c->r[31]|c->r[31]; // 8021A30C
  c->r[4]=c->r[29]|c->r[29]; // 8021A310
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A314
  c->r[12]=R32(c->r[12]+0x0000034Cu); // 8021A318
  c->ctr=c->r[12]; // 8021A31C
  if (true) { c->lr=0x8021A324u; dispatch(c,c->ctr); } // 8021A320
  {uint32_t ea=c->r[31]+0x000026B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A324
  {uint32_t ea=c->r[31]+0x000003A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A328
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[2],c->f[1],-c->f[0])); // 8021A32C
  {uint32_t ea=c->r[31]+0x000003A4u; WF32(ea,c->f[0]);} // 8021A330
  goto L_8021A348; // 8021A334
L_8021A338:;
  c->r[3]=c->r[31]|c->r[31]; // 8021A338
  c->r[4]=c->r[30]|c->r[30]; // 8021A33C
  c->r[5]=c->r[29]|c->r[29]; // 8021A340
  c->lr=0x8021A348u; f_800B5B1C(c); // 8021A344
L_8021A348:;
  c->r[11]=c->r[1]+0x00000020u; // 8021A348
  c->lr=0x8021A350u; { c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021A34C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021A350
  c->lr=c->r[0]; // 8021A354
  c->r[1]=c->r[1]+0x00000020u; // 8021A358
  return; // 8021A35C
}

// fn_8021A360
void f_8021A360(Ctx* __restrict c) {
  trace_call(0x8021A360u);
  {uint32_t ea=c->r[1]+0xFFFFE280u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A360
  c->r[0]=c->lr; // 8021A364
  W32(c->r[1]+0x00001D84u,c->r[0]); // 8021A368
  c->r[0]=0u+0x00001D78u; // 8021A36C
  {uint32_t ea=c->r[1]+0x00001D70u; WF64(ea,c->f[31]);} // 8021A370
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,31,ea,0,0);} // 8021A374
  c->r[0]=0u+0x00001D68u; // 8021A378
  {uint32_t ea=c->r[1]+0x00001D60u; WF64(ea,c->f[30]);} // 8021A37C
  {uint32_t ea=c->r[1]+c->r[0]; psq_store(c,30,ea,0,0);} // 8021A380
  c->r[11]=c->r[1]+0x00001D60u; // 8021A384
  c->lr=0x8021A38Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8021A388
  c->r[30]=0u+0x803F0000u; // 8021A38C
  {uint32_t ea=c->r[2]+0xFFFFCF08u; c->f[30]=c->ps1[30]=RF32(ea);} // 8021A390
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8021A394
  c->r[25]=c->r[3]|c->r[3]; // 8021A398
  c->r[28]=c->r[1]+0x00000018u; // 8021A39C
  c->r[30]=c->r[30]+0x00001AC0u; // 8021A3A0
  c->r[27]=0u+0x00000000u; // 8021A3A4
  c->r[26]=0u+0x00000000u; // 8021A3A8
  c->r[31]=0u+0x00000000u; // 8021A3AC
  c->r[29]=c->r[13]+0xFFFF94B8u; // 8021A3B0
L_8021A3B4:;
  c->r[3]=R32(c->r[29]+c->r[31]); // 8021A3B4
  cmps(c,0,(int32_t)c->r[3],0); // 8021A3B8
  if (crb(c,2)) { goto L_8021A49C; } // 8021A3BC
  c->lr=0x8021A3C4u; f_80067C50(c); // 8021A3C0
  cmps(c,0,(int32_t)c->r[3],1); // 8021A3C4
  if (!crb(c,2)) { goto L_8021A49C; } // 8021A3C8
  c->r[3]=R32(c->r[13]+0xFFFF9558u); // 8021A3CC
  c->r[4]=c->r[26]|c->r[26]; // 8021A3D0
  c->r[5]=c->r[1]+0x00000054u; // 8021A3D4
  c->r[6]=c->r[1]+0x00000048u; // 8021A3D8
  c->r[27]=0u+0x00000001u; // 8021A3DC
  c->lr=0x8021A3E4u; f_800F3FE8(c); // 8021A3E0
  cmps(c,0,(int32_t)c->r[3],0); // 8021A3E4
  if (crb(c,2)) { goto L_8021A49C; } // 8021A3E8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,0,ea,0,0);} // 8021A3EC
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 8021A3F0
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,0,ea,0,0);} // 8021A3F4
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,0,ea,1,0);} // 8021A3F8
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 8021A3FC
  {uint32_t ea=c->r[28]+0x00000008u; psq_store(c,0,ea,1,0);} // 8021A400
  c->r[3]=c->r[1]+0x0000009Cu; // 8021A404
  c->lr=0x8021A40Cu; f_80063ACC(c); // 8021A408
  W32(c->r[1]+0x000000BCu,c->r[30]); // 8021A40C
  c->r[3]=c->r[1]+0x000000C0u; // 8021A410
  c->r[4]=c->r[1]+0x00000054u; // 8021A414
  c->lr=0x8021A41Cu; f_8003F484(c); // 8021A418
  c->r[4]=c->r[28]|c->r[28]; // 8021A41C
  c->r[3]=c->r[1]+0x000000CCu; // 8021A420
  c->lr=0x8021A428u; f_8003F484(c); // 8021A424
  c->r[3]=c->r[1]+0x00000F0Cu; // 8021A428
  c->lr=0x8021A430u; f_8003F3AC(c); // 8021A42C
  c->r[3]=R32(c->r[25]+0x00000028u); // 8021A430
  c->r[4]=c->r[1]+0x00000F0Cu; // 8021A434
  c->r[5]=c->r[1]+0x0000009Cu; // 8021A438
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021A43C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021A440
  c->ctr=c->r[12]; // 8021A444
  if (true) { c->lr=0x8021A44Cu; dispatch(c,c->ctr); } // 8021A448
  {uint32_t ea=c->r[1]+0x00000F18u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A44C
  fcmp(c,0,c->f[0],c->f[31]); // 8021A450
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021A454
  c->r[0]=c->cr; // 8021A458
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8021A45C
  if (crb(c,2)) { goto L_8021A490; } // 8021A460
  c->r[0]=R32(c->r[1]+0x00000F6Cu); // 8021A464
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8021A468
  cmpu(c,0,c->r[0],0x00000002u); // 8021A46C
  if (crb(c,2)) { goto L_8021A47C; } // 8021A470
  cmpu(c,0,c->r[0],0x00000016u); // 8021A474
  if (!crb(c,2)) { goto L_8021A490; } // 8021A478
L_8021A47C:;
  c->r[3]=c->r[1]+0x00000F44u; // 8021A47C
  c->r[4]=0u+0xFFFFFFFFu; // 8021A480
  c->lr=0x8021A488u; f_80046394(c); // 8021A484
  c->r[3]=0u+0x00000001u; // 8021A488
  goto L_8021A5EC; // 8021A48C
L_8021A490:;
  c->r[3]=c->r[1]+0x00000F44u; // 8021A490
  c->r[4]=0u+0xFFFFFFFFu; // 8021A494
  c->lr=0x8021A49Cu; f_80046394(c); // 8021A498
L_8021A49C:;
  c->r[26]=c->r[26]+0x00000001u; // 8021A49C
  c->r[31]=c->r[31]+0x00000004u; // 8021A4A0
  cmps(c,0,(int32_t)c->r[26],2); // 8021A4A4
  if (crb(c,0)) { IRQCHK(c); goto L_8021A3B4; } // 8021A4A8
  cmps(c,0,(int32_t)c->r[27],0); // 8021A4AC
  if (!crb(c,2)) { goto L_8021A5E8; } // 8021A4B0
  c->r[31]=0u+0x805E0000u; // 8021A4B4
  c->r[4]=0u+0x00000000u; // 8021A4B8
  c->r[3]=c->r[31]+0xFFFFDFB0u; // 8021A4BC
  c->lr=0x8021A4C4u; f_8025007C(c); // 8021A4C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A4C4
  c->r[3]=c->r[31]+0xFFFFDFB0u; // 8021A4C8
  c->r[4]=0u+0x00000000u; // 8021A4CC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8021A4D0
  c->lr=0x8021A4D8u; f_8025007C(c); // 8021A4D4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A4D8
  c->r[5]=c->r[1]+0x0000003Cu; // 8021A4DC
  {uint32_t ea=c->r[2]+0xFFFFCF0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A4E0
  c->r[6]=c->r[1]+0x00000030u; // 8021A4E4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 8021A4E8
  c->r[3]=c->r[13]+0xFFFF9380u; // 8021A4EC
  c->r[4]=0u+0xFFFFFFFFu; // 8021A4F0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8021A4F4
  c->lr=0x8021A4FCu; f_80028BC0(c); // 8021A4F8
  c->r[3]=0u+0x80440000u; // 8021A4FC
  c->r[3]=c->r[3]+0xFFFFA720u; // 8021A500
  c->r[3]=R32(c->r[3]+0x00000004u); // 8021A504
  c->lr=0x8021A50Cu; f_80381A54(c); // 8021A508
  W32(c->r[1]+0x00000008u,c->r[3]); // 8021A50C
  c->r[3]=c->r[1]+0x00000008u; // 8021A510
  c->r[4]=c->r[1]+0x00000024u; // 8021A514
  c->lr=0x8021A51Cu; f_8037CE54(c); // 8021A518
  c->r[28]=c->r[1]+0x00000024u; // 8021A51C
  c->r[29]=c->r[1]+0x0000000Cu; // 8021A520
  {uint32_t ea=c->r[1]+0x00000030u; psq_load(c,0,ea,0,0);} // 8021A524
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,1,ea,0,0);} // 8021A528
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8021A52C
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,0,ea,0,0);} // 8021A530
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,0,ea,1,0);} // 8021A534
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,1,ea,1,0);} // 8021A538
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8021A53C
  {uint32_t ea=c->r[29]+0x00000008u; psq_store(c,0,ea,1,0);} // 8021A540
  c->r[3]=c->r[1]+0x00000060u; // 8021A544
  c->lr=0x8021A54Cu; f_80063ACC(c); // 8021A548
  c->r[5]=0u+0x803F0000u; // 8021A54C
  c->r[4]=c->r[28]|c->r[28]; // 8021A550
  c->r[5]=c->r[5]+0x00001AC0u; // 8021A554
  c->r[3]=c->r[1]+0x00000084u; // 8021A558
  W32(c->r[1]+0x00000080u,c->r[5]); // 8021A55C
  c->lr=0x8021A564u; f_8003F484(c); // 8021A560
  c->r[4]=c->r[29]|c->r[29]; // 8021A564
  c->r[3]=c->r[1]+0x00000090u; // 8021A568
  c->lr=0x8021A570u; f_8003F484(c); // 8021A56C
  c->r[3]=c->r[1]+0x000000D8u; // 8021A570
  c->lr=0x8021A578u; f_8003F3AC(c); // 8021A574
  c->r[3]=R32(c->r[25]+0x00000028u); // 8021A578
  c->r[4]=c->r[1]+0x000000D8u; // 8021A57C
  c->r[5]=c->r[1]+0x00000060u; // 8021A580
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021A584
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8021A588
  c->ctr=c->r[12]; // 8021A58C
  if (true) { c->lr=0x8021A594u; dispatch(c,c->ctr); } // 8021A590
  {uint32_t ea=c->r[1]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A594
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021A598
  fcmp(c,0,c->f[1],c->f[0]); // 8021A59C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8021A5A0
  c->r[0]=c->cr; // 8021A5A4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 8021A5A8
  if (crb(c,2)) { goto L_8021A5DC; } // 8021A5AC
  c->r[0]=R32(c->r[1]+0x00000138u); // 8021A5B0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8021A5B4
  cmpu(c,0,c->r[0],0x00000002u); // 8021A5B8
  if (crb(c,2)) { goto L_8021A5C8; } // 8021A5BC
  cmpu(c,0,c->r[0],0x00000016u); // 8021A5C0
  if (!crb(c,2)) { goto L_8021A5DC; } // 8021A5C4
L_8021A5C8:;
  c->r[3]=c->r[1]+0x00000110u; // 8021A5C8
  c->r[4]=0u+0xFFFFFFFFu; // 8021A5CC
  c->lr=0x8021A5D4u; f_80046394(c); // 8021A5D0
  c->r[3]=0u+0x00000001u; // 8021A5D4
  goto L_8021A5EC; // 8021A5D8
L_8021A5DC:;
  c->r[3]=c->r[1]+0x00000110u; // 8021A5DC
  c->r[4]=0u+0xFFFFFFFFu; // 8021A5E0
  c->lr=0x8021A5E8u; f_80046394(c); // 8021A5E4
L_8021A5E8:;
  c->r[3]=0u+0x00000000u; // 8021A5E8
L_8021A5EC:;
  c->r[0]=0u+0x00001D78u; // 8021A5EC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8021A5F0
  {uint32_t ea=c->r[1]+0x00001D70u; c->f[31]=RF64(ea);} // 8021A5F4
  c->r[0]=0u+0x00001D68u; // 8021A5F8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 8021A5FC
  c->r[11]=c->r[1]+0x00001D60u; // 8021A600
  {uint32_t ea=c->r[1]+0x00001D60u; c->f[30]=RF64(ea);} // 8021A604
  c->lr=0x8021A60Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8021A608
  c->r[0]=R32(c->r[1]+0x00001D84u); // 8021A60C
  c->lr=c->r[0]; // 8021A610
  c->r[1]=c->r[1]+0x00001D80u; // 8021A614
  return; // 8021A618
}

// fn_8021A61C
void f_8021A61C(Ctx* __restrict c) {
  trace_call(0x8021A61Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A61C
  c->r[0]=c->lr; // 8021A620
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021A628
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021A62C
  c->r[30]=c->r[3]|c->r[3]; // 8021A630
  c->r[0]=R32(c->r[3]+0x000026C0u); // 8021A634
  cmps(c,0,(int32_t)c->r[0],3); // 8021A638
  if (crb(c,2)) { goto L_8021A740; } // 8021A63C
  if (!crb(c,0)) { goto L_8021A65C; } // 8021A640
  cmps(c,0,(int32_t)c->r[0],1); // 8021A644
  if (crb(c,2)) { goto L_8021A7BC; } // 8021A648
  if (!crb(c,0)) { goto L_8021A6BC; } // 8021A64C
  cmps(c,0,(int32_t)c->r[0],0); // 8021A650
  if (!crb(c,0)) { goto L_8021A66C; } // 8021A654
  goto L_8021A7BC; // 8021A658
L_8021A65C:;
  cmps(c,0,(int32_t)c->r[0],5); // 8021A65C
  if (crb(c,2)) { goto L_8021A7BC; } // 8021A660
  if (!crb(c,0)) { goto L_8021A7BC; } // 8021A664
  goto L_8021A790; // 8021A668
L_8021A66C:;
  c->r[31]=0u+0x803E0000u; // 8021A66C
  c->r[3]=c->r[3]+0x000008ECu; // 8021A670
  c->r[31]=c->r[31]+0x00002BA4u; // 8021A674
  c->r[4]=c->r[31]+0x0000004Eu; // 8021A678
  c->lr=0x8021A680u; f_80075440(c); // 8021A67C
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A680
  c->r[5]=c->r[3]|c->r[3]; // 8021A684
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A688
  c->r[3]=c->r[30]+0x00000C88u; // 8021A68C
  c->r[4]=c->r[30]+0x000008ECu; // 8021A690
  c->r[6]=0u+0x00000000u; // 8021A694
  c->r[7]=0u+0x00000000u; // 8021A698
  c->lr=0x8021A6A0u; f_800BB0C8(c); // 8021A69C
  c->r[3]=0u+0x805D0000u; // 8021A6A0
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A6A4
  c->r[3]=c->r[3]+0x00006AE4u; // 8021A6A8
  c->r[4]=c->r[31]+0x00000058u; // 8021A6AC
  c->r[5]=0u+0x00000000u; // 8021A6B0
  c->lr=0x8021A6B8u; f_801AE4A4(c); // 8021A6B4
  goto L_8021A7BC; // 8021A6B8
L_8021A6BC:;
  c->r[0]=R32(c->r[3]+0x000026C4u); // 8021A6BC
  cmps(c,0,(int32_t)c->r[0],0); // 8021A6C0
  if (!crb(c,2)) { goto L_8021A6FC; } // 8021A6C4
  c->r[4]=0u+0x803E0000u; // 8021A6C8
  c->r[3]=c->r[3]+0x000008ECu; // 8021A6CC
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A6D0
  c->r[4]=c->r[4]+0x0000004Eu; // 8021A6D4
  c->lr=0x8021A6DCu; f_80075440(c); // 8021A6D8
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A6DC
  c->r[5]=c->r[3]|c->r[3]; // 8021A6E0
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A6E4
  c->r[3]=c->r[30]+0x00000C88u; // 8021A6E8
  c->r[4]=c->r[30]+0x000008ECu; // 8021A6EC
  c->r[6]=0u+0x00000000u; // 8021A6F0
  c->r[7]=0u+0x00000000u; // 8021A6F4
  c->lr=0x8021A6FCu; f_800BB0C8(c); // 8021A6F8
L_8021A6FC:;
  c->r[0]=R32(c->r[30]+0x000026C4u); // 8021A6FC
  cmps(c,0,(int32_t)c->r[0],1); // 8021A700
  if (!crb(c,2)) { goto L_8021A7BC; } // 8021A704
  c->r[4]=0u+0x803E0000u; // 8021A708
  c->r[3]=c->r[30]+0x000008ECu; // 8021A70C
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A710
  c->r[4]=c->r[4]+0x00000064u; // 8021A714
  c->lr=0x8021A71Cu; f_80075440(c); // 8021A718
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A71C
  c->r[5]=c->r[3]|c->r[3]; // 8021A720
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A724
  c->r[3]=c->r[30]+0x00000C88u; // 8021A728
  c->r[4]=c->r[30]+0x000008ECu; // 8021A72C
  c->r[6]=0u+0x00000000u; // 8021A730
  c->r[7]=0u+0x00000000u; // 8021A734
  c->lr=0x8021A73Cu; f_800BB0C8(c); // 8021A738
  goto L_8021A7BC; // 8021A73C
L_8021A740:;
  c->r[31]=0u+0x803E0000u; // 8021A740
  c->r[3]=c->r[3]+0x000008ECu; // 8021A744
  c->r[31]=c->r[31]+0x00002BA4u; // 8021A748
  c->r[4]=c->r[31]+0x0000006Eu; // 8021A74C
  c->lr=0x8021A754u; f_80075440(c); // 8021A750
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A754
  c->r[5]=c->r[3]|c->r[3]; // 8021A758
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A75C
  c->r[3]=c->r[30]+0x00000C88u; // 8021A760
  c->r[4]=c->r[30]+0x000008ECu; // 8021A764
  c->r[6]=0u+0x00000000u; // 8021A768
  c->r[7]=0u+0x00000000u; // 8021A76C
  c->lr=0x8021A774u; f_800BB0C8(c); // 8021A770
  c->r[3]=0u+0x805D0000u; // 8021A774
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A778
  c->r[3]=c->r[3]+0x00006AE4u; // 8021A77C
  c->r[4]=c->r[31]+0x00000075u; // 8021A780
  c->r[5]=0u+0x00000000u; // 8021A784
  c->lr=0x8021A78Cu; f_801AE4A4(c); // 8021A788
  goto L_8021A7BC; // 8021A78C
L_8021A790:;
  c->r[31]=0u+0x803E0000u; // 8021A790
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A794
  c->r[31]=c->r[31]+0x00002BA4u; // 8021A798
  c->r[3]=c->r[31]+0x00000081u; // 8021A79C
  c->lr=0x8021A7A4u; f_80113D4C(c); // 8021A7A0
  c->r[3]=0u+0x805D0000u; // 8021A7A4
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A7A8
  c->r[3]=c->r[3]+0x00006AE4u; // 8021A7AC
  c->r[4]=c->r[31]+0x0000008Fu; // 8021A7B0
  c->r[5]=0u+0x00000000u; // 8021A7B4
  c->lr=0x8021A7BCu; f_801AE4A4(c); // 8021A7B8
L_8021A7BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021A7BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021A7C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021A7C4
  c->lr=c->r[0]; // 8021A7C8
  c->r[1]=c->r[1]+0x00000010u; // 8021A7CC
  return; // 8021A7D0
}

// fn_8021A7D4
void f_8021A7D4(Ctx* __restrict c) {
  trace_call(0x8021A7D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021A7D4
  c->r[0]=c->lr; // 8021A7D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021A7DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021A7E0
  c->r[31]=c->r[3]|c->r[3]; // 8021A7E4
  c->r[0]=R32(c->r[3]+0x000026C0u); // 8021A7E8
  cmps(c,0,(int32_t)c->r[0],3); // 8021A7EC
  if (crb(c,2)) { goto L_8021A94C; } // 8021A7F0
  if (!crb(c,0)) { goto L_8021A810; } // 8021A7F4
  cmps(c,0,(int32_t)c->r[0],1); // 8021A7F8
  if (crb(c,2)) { goto L_8021A844; } // 8021A7FC
  if (!crb(c,0)) { goto L_8021A918; } // 8021A800
  cmps(c,0,(int32_t)c->r[0],0); // 8021A804
  if (!crb(c,0)) { goto L_8021A820; } // 8021A808
  goto L_8021AAB4; // 8021A80C
L_8021A810:;
  cmps(c,0,(int32_t)c->r[0],5); // 8021A810
  if (crb(c,2)) { goto L_8021AA40; } // 8021A814
  if (!crb(c,0)) { goto L_8021AAB4; } // 8021A818
  goto L_8021A970; // 8021A81C
L_8021A820:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021A820
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A824
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021A828
  c->lr=0x8021A830u; f_8016498C(c); // 8021A82C
  cmps(c,0,(int32_t)c->r[3],0); // 8021A830
  if (crb(c,2)) { goto L_8021AAB4; } // 8021A834
  c->r[0]=0u+0x00000001u; // 8021A838
  W32(c->r[31]+0x000026C0u,c->r[0]); // 8021A83C
  goto L_8021AAB4; // 8021A840
L_8021A844:;
  c->lr=0x8021A848u; f_8021A360(c); // 8021A844
  cmps(c,0,(int32_t)c->r[3],0); // 8021A848
  if (crb(c,2)) { goto L_8021A90C; } // 8021A84C
  c->r[0]=R32(c->r[31]+0x000026D0u); // 8021A850
  cmps(c,0,(int32_t)c->r[0],3); // 8021A854
  if (!crb(c,0)) { goto L_8021A90C; } // 8021A858
  c->r[0]=R32(c->r[31]+0x000026C4u); // 8021A85C
  cmps(c,0,(int32_t)c->r[0],1); // 8021A860
  if (crb(c,2)) { goto L_8021A8B8; } // 8021A864
  if (!crb(c,0)) { goto L_8021A8F4; } // 8021A868
  cmps(c,0,(int32_t)c->r[0],0); // 8021A86C
  if (!crb(c,0)) { goto L_8021A878; } // 8021A870
  goto L_8021A8F4; // 8021A874
L_8021A878:;
  c->r[4]=0u+0x803E0000u; // 8021A878
  c->r[3]=c->r[31]+0x000008ECu; // 8021A87C
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A880
  c->r[4]=c->r[4]+0x0000009Bu; // 8021A884
  c->lr=0x8021A88Cu; f_80075440(c); // 8021A888
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A88C
  c->r[5]=c->r[3]|c->r[3]; // 8021A890
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A894
  c->r[3]=c->r[31]+0x00000C88u; // 8021A898
  c->r[4]=c->r[31]+0x000008ECu; // 8021A89C
  c->r[6]=0u+0x00000000u; // 8021A8A0
  c->r[7]=0u+0x00000000u; // 8021A8A4
  c->lr=0x8021A8ACu; f_800BB0C8(c); // 8021A8A8
  c->r[0]=0u+0x00000001u; // 8021A8AC
  W32(c->r[31]+0x000026C4u,c->r[0]); // 8021A8B0
  goto L_8021A8F4; // 8021A8B4
L_8021A8B8:;
  c->r[4]=0u+0x803E0000u; // 8021A8B8
  c->r[3]=c->r[31]+0x000008ECu; // 8021A8BC
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A8C0
  c->r[4]=c->r[4]+0x000000A8u; // 8021A8C4
  c->lr=0x8021A8CCu; f_80075440(c); // 8021A8C8
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A8CC
  c->r[5]=c->r[3]|c->r[3]; // 8021A8D0
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A8D4
  c->r[3]=c->r[31]+0x00000C88u; // 8021A8D8
  c->r[4]=c->r[31]+0x000008ECu; // 8021A8DC
  c->r[6]=0u+0x00000000u; // 8021A8E0
  c->r[7]=0u+0x00000000u; // 8021A8E4
  c->lr=0x8021A8ECu; f_800BB0C8(c); // 8021A8E8
  c->r[0]=0u+0x00000000u; // 8021A8EC
  W32(c->r[31]+0x000026C4u,c->r[0]); // 8021A8F0
L_8021A8F4:;
  c->r[3]=R32(c->r[31]+0x000026D0u); // 8021A8F4
  c->r[0]=0u+0x00000000u; // 8021A8F8
  W32(c->r[31]+0x000026C0u,c->r[0]); // 8021A8FC
  c->r[0]=c->r[3]+0x00000001u; // 8021A900
  W32(c->r[31]+0x000026D0u,c->r[0]); // 8021A904
  goto L_8021AAB4; // 8021A908
L_8021A90C:;
  c->r[3]=c->r[31]|c->r[31]; // 8021A90C
  c->lr=0x8021A914u; f_800AC3A4(c); // 8021A910
  goto L_8021AAB4; // 8021A914
L_8021A918:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021A918
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A91C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021A920
  c->lr=0x8021A928u; f_8016498C(c); // 8021A924
  cmps(c,0,(int32_t)c->r[3],0); // 8021A928
  if (!crb(c,2)) { goto L_8021A940; } // 8021A92C
  c->r[3]=c->r[31]|c->r[31]; // 8021A930
  c->lr=0x8021A938u; f_8021A360(c); // 8021A934
  cmps(c,0,(int32_t)c->r[3],0); // 8021A938
  if (crb(c,2)) { goto L_8021AAB4; } // 8021A93C
L_8021A940:;
  c->r[0]=0u+0x00000001u; // 8021A940
  W32(c->r[31]+0x000026C0u,c->r[0]); // 8021A944
  goto L_8021AAB4; // 8021A948
L_8021A94C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021A94C
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A950
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021A954
  c->lr=0x8021A95Cu; f_8016498C(c); // 8021A958
  cmps(c,0,(int32_t)c->r[3],0); // 8021A95C
  if (crb(c,2)) { goto L_8021AAB4; } // 8021A960
  c->r[3]=c->r[31]|c->r[31]; // 8021A964
  c->lr=0x8021A96Cu; f_800AC3A4(c); // 8021A968
  goto L_8021AAB4; // 8021A96C
L_8021A970:;
  c->r[3]=0u+0x805D0000u; // 8021A970
  {uint32_t ea=c->r[2]+0xFFFFCF10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A974
  c->r[3]=c->r[3]+0x00006AE4u; // 8021A978
  c->lr=0x8021A980u; f_801AE760(c); // 8021A97C
  cmps(c,0,(int32_t)c->r[3],0); // 8021A980
  if (crb(c,2)) { goto L_8021A99C; } // 8021A984
  c->r[3]=0u+0x803E0000u; // 8021A988
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A98C
  c->r[3]=c->r[3]+0x00002BA4u; // 8021A990
  c->r[3]=c->r[3]+0x000000B5u; // 8021A994
  c->lr=0x8021A99Cu; f_80113DC0(c); // 8021A998
L_8021A99C:;
  c->r[3]=0u+0x805D0000u; // 8021A99C
  {uint32_t ea=c->r[2]+0xFFFFCF14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A9A0
  c->r[3]=c->r[3]+0x00006AE4u; // 8021A9A4
  c->lr=0x8021A9ACu; f_801AE760(c); // 8021A9A8
  cmps(c,0,(int32_t)c->r[3],0); // 8021A9AC
  if (crb(c,2)) { goto L_8021A9E8; } // 8021A9B0
  c->r[4]=0u+0x803E0000u; // 8021A9B4
  c->r[3]=c->r[31]+0x000008ECu; // 8021A9B8
  c->r[4]=c->r[4]+0x00002BA4u; // 8021A9BC
  c->r[4]=c->r[4]+0x000000C0u; // 8021A9C0
  c->lr=0x8021A9C8u; f_80075440(c); // 8021A9C4
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A9C8
  c->r[5]=c->r[3]|c->r[3]; // 8021A9CC
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021A9D0
  c->r[3]=c->r[31]+0x00000C88u; // 8021A9D4
  c->r[4]=c->r[31]+0x000008ECu; // 8021A9D8
  c->r[6]=0u+0x00000000u; // 8021A9DC
  c->r[7]=0u+0x00000000u; // 8021A9E0
  c->lr=0x8021A9E8u; f_800BB0C8(c); // 8021A9E4
L_8021A9E8:;
  c->r[3]=0u+0x805D0000u; // 8021A9E8
  {uint32_t ea=c->r[2]+0xFFFFCF18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021A9EC
  c->r[3]=c->r[3]+0x00006AE4u; // 8021A9F0
  c->lr=0x8021A9F8u; f_801AE760(c); // 8021A9F4
  cmps(c,0,(int32_t)c->r[3],0); // 8021A9F8
  if (crb(c,2)) { goto L_8021AA20; } // 8021A9FC
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8021AA00
  c->r[4]=0u+0x0000000Cu; // 8021AA04
  c->r[5]=0u+0x00000000u; // 8021AA08
  c->r[6]=0u+0x00000000u; // 8021AA0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021AA10
  c->r[12]=R32(c->r[12]+0x00000028u); // 8021AA14
  c->ctr=c->r[12]; // 8021AA18
  if (true) { c->lr=0x8021AA20u; dispatch(c,c->ctr); } // 8021AA1C
L_8021AA20:;
  c->r[3]=0u+0x805D0000u; // 8021AA20
  c->r[3]=c->r[3]+0x00006AE4u; // 8021AA24
  c->lr=0x8021AA2Cu; f_801AE730(c); // 8021AA28
  cmps(c,0,(int32_t)c->r[3],0); // 8021AA2C
  if (crb(c,2)) { goto L_8021AAB4; } // 8021AA30
  c->r[3]=c->r[31]|c->r[31]; // 8021AA34
  c->lr=0x8021AA3Cu; f_800AC3A4(c); // 8021AA38
  goto L_8021AAB4; // 8021AA3C
L_8021AA40:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021AA40
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AA44
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021AA48
  c->lr=0x8021AA50u; f_8016498C(c); // 8021AA4C
  cmps(c,0,(int32_t)c->r[3],0); // 8021AA50
  if (crb(c,2)) { goto L_8021AA74; } // 8021AA54
  c->r[3]=c->r[31]+0x000008D0u; // 8021AA58
  c->r[4]=0u+0x00000000u; // 8021AA5C
  c->lr=0x8021AA64u; f_8002B91C(c); // 8021AA60
  c->r[3]=c->r[31]+0x00000394u; // 8021AA64
  c->r[4]=0u+0x00000000u; // 8021AA68
  c->r[5]=0u+0x00000000u; // 8021AA6C
  c->lr=0x8021AA74u; f_800B16D0(c); // 8021AA70
L_8021AA74:;
  c->r[3]=0u+0x805D0000u; // 8021AA74
  c->r[3]=c->r[3]+0x00006AE4u; // 8021AA78
  c->lr=0x8021AA80u; f_801AE730(c); // 8021AA7C
  cmps(c,0,(int32_t)c->r[3],0); // 8021AA80
  if (crb(c,2)) { goto L_8021AAB4; } // 8021AA84
  c->r[3]=R32(c->r[13]+0xFFFF9610u); // 8021AA88
  c->r[4]=0u+0x00000000u; // 8021AA8C
  c->r[5]=0u+0x00000000u; // 8021AA90
  c->r[6]=0u+0x00000000u; // 8021AA94
  c->r[12]=R32(c->r[3]+0x00000000u); // 8021AA98
  c->r[12]=R32(c->r[12]+0x00000028u); // 8021AA9C
  c->ctr=c->r[12]; // 8021AAA0
  if (true) { c->lr=0x8021AAA8u; dispatch(c,c->ctr); } // 8021AAA4
  c->lr=0x8021AAACu; f_8003DA30(c); // 8021AAA8
  c->r[4]=c->r[31]|c->r[31]; // 8021AAAC
  c->lr=0x8021AAB4u; f_8003DECC(c); // 8021AAB0
L_8021AAB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AAB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021AAB8
  c->lr=c->r[0]; // 8021AABC
  c->r[1]=c->r[1]+0x00000010u; // 8021AAC0
  return; // 8021AAC4
}

// fn_8021AAC8
void f_8021AAC8(Ctx* __restrict c) {
  trace_call(0x8021AAC8u);
  return; // 8021AAC8
}

// fn_8021AACC
void f_8021AACC(Ctx* __restrict c) {
  trace_call(0x8021AACCu);
  return; // 8021AACC
}

// fn_8021AAD0
void f_8021AAD0(Ctx* __restrict c) {
  trace_call(0x8021AAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AAD0
  c->r[0]=c->lr; // 8021AAD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AAD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AADC
  c->r[31]=c->r[5]|c->r[5]; // 8021AAE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021AAE4
  c->r[30]=c->r[3]|c->r[3]; // 8021AAE8
  c->r[0]=R32(c->r[3]+0x000026C0u); // 8021AAEC
  cmps(c,0,(int32_t)c->r[0],3); // 8021AAF0
  if (crb(c,2)) { goto L_8021AB94; } // 8021AAF4
  if (!crb(c,0)) { goto L_8021AB08; } // 8021AAF8
  cmps(c,0,(int32_t)c->r[0],1); // 8021AAFC
  if (crb(c,2)) { goto L_8021AB14; } // 8021AB00
  goto L_8021AC64; // 8021AB04
L_8021AB08:;
  cmps(c,0,(int32_t)c->r[0],5); // 8021AB08
  if (!crb(c,0)) { goto L_8021AC64; } // 8021AB0C
  goto L_8021ABF8; // 8021AB10
L_8021AB14:;
  c->r[0]=R32(c->r[3]+0x000026C4u); // 8021AB14
  cmps(c,0,(int32_t)c->r[0],0); // 8021AB18
  if (!crb(c,2)) { goto L_8021AB38; } // 8021AB1C
  c->r[4]=0u+0x803E0000u; // 8021AB20
  c->r[3]=c->r[3]+0x000008ECu; // 8021AB24
  c->r[4]=c->r[4]+0x00002BA4u; // 8021AB28
  c->r[4]=c->r[4]+0x0000000Au; // 8021AB2C
  c->lr=0x8021AB34u; f_80075440(c); // 8021AB30
  W32(c->r[31]+0x00000034u,c->r[3]); // 8021AB34
L_8021AB38:;
  c->r[0]=R32(c->r[30]+0x000026C4u); // 8021AB38
  cmps(c,0,(int32_t)c->r[0],1); // 8021AB3C
  if (!crb(c,2)) { goto L_8021AB5C; } // 8021AB40
  c->r[4]=0u+0x803E0000u; // 8021AB44
  c->r[3]=c->r[30]+0x000008ECu; // 8021AB48
  c->r[4]=c->r[4]+0x00002BA4u; // 8021AB4C
  c->r[4]=c->r[4]+0x00000014u; // 8021AB50
  c->lr=0x8021AB58u; f_80075440(c); // 8021AB54
  W32(c->r[31]+0x00000034u,c->r[3]); // 8021AB58
L_8021AB5C:;
  c->r[5]=R32(c->r[31]+0x00000034u); // 8021AB5C
  c->r[3]=c->r[30]+0x00000C88u; // 8021AB60
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AB64
  c->r[4]=c->r[30]+0x000008ECu; // 8021AB68
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021AB6C
  c->r[6]=0u+0x00000000u; // 8021AB70
  c->r[7]=0u+0x00000000u; // 8021AB74
  c->lr=0x8021AB7Cu; f_800BB0C8(c); // 8021AB78
  c->r[3]=c->r[30]|c->r[30]; // 8021AB7C
  c->r[4]=0u+0x00000000u; // 8021AB80
  c->lr=0x8021AB88u; f_80219A24(c); // 8021AB84
  {uint32_t ea=c->r[2]+0xFFFFCEB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AB88
  {uint32_t ea=c->r[30]+0x00001F6Cu; WF32(ea,c->f[0]);} // 8021AB8C
  goto L_8021AC64; // 8021AB90
L_8021AB94:;
  c->r[31]=0u+0x803E0000u; // 8021AB94
  c->r[3]=c->r[3]+0x000008ECu; // 8021AB98
  c->r[31]=c->r[31]+0x00002BA4u; // 8021AB9C
  c->r[4]=c->r[31]+0x00000019u; // 8021ABA0
  c->lr=0x8021ABA8u; f_80075440(c); // 8021ABA4
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ABA8
  c->r[5]=c->r[3]|c->r[3]; // 8021ABAC
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021ABB0
  c->r[3]=c->r[30]+0x00000C88u; // 8021ABB4
  c->r[4]=c->r[30]+0x000008ECu; // 8021ABB8
  c->r[6]=0u+0x00000000u; // 8021ABBC
  c->r[7]=0u+0x00000000u; // 8021ABC0
  c->lr=0x8021ABC8u; f_800BB0C8(c); // 8021ABC4
  c->r[3]=0u+0x805D0000u; // 8021ABC8
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ABCC
  c->r[3]=c->r[3]+0x00006AE4u; // 8021ABD0
  c->r[4]=c->r[31]+0x000000C7u; // 8021ABD4
  c->r[5]=0u+0x00000000u; // 8021ABD8
  c->lr=0x8021ABE0u; f_801AE4A4(c); // 8021ABDC
  c->r[3]=c->r[30]|c->r[30]; // 8021ABE0
  c->r[4]=0u+0x00000000u; // 8021ABE4
  c->lr=0x8021ABECu; f_80219A24(c); // 8021ABE8
  {uint32_t ea=c->r[2]+0xFFFFCF1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8021ABEC
  {uint32_t ea=c->r[30]+0x00001F6Cu; WF32(ea,c->f[0]);} // 8021ABF0
  goto L_8021AC64; // 8021ABF4
L_8021ABF8:;
  c->r[31]=0u+0x803E0000u; // 8021ABF8
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ABFC
  c->r[31]=c->r[31]+0x00002BA4u; // 8021AC00
  c->r[3]=c->r[31]+0x000000D3u; // 8021AC04
  c->lr=0x8021AC0Cu; f_80113D4C(c); // 8021AC08
  c->r[3]=c->r[30]+0x000008ECu; // 8021AC0C
  c->r[4]=c->r[31]+0x0000002Fu; // 8021AC10
  c->lr=0x8021AC18u; f_80075440(c); // 8021AC14
  {uint32_t ea=c->r[2]+0xFFFFCEDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AC18
  c->r[5]=c->r[3]|c->r[3]; // 8021AC1C
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021AC20
  c->r[3]=c->r[30]+0x00000C88u; // 8021AC24
  c->r[4]=c->r[30]+0x000008ECu; // 8021AC28
  c->r[6]=0u+0x00000000u; // 8021AC2C
  c->r[7]=0u+0x00000000u; // 8021AC30
  c->lr=0x8021AC38u; f_800BB0C8(c); // 8021AC34
  c->r[3]=0u+0x805D0000u; // 8021AC38
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AC3C
  c->r[3]=c->r[3]+0x00006AE4u; // 8021AC40
  c->r[4]=c->r[31]+0x000000DFu; // 8021AC44
  c->r[5]=0u+0x00000000u; // 8021AC48
  c->lr=0x8021AC50u; f_801AE4A4(c); // 8021AC4C
  c->r[3]=c->r[30]|c->r[30]; // 8021AC50
  c->r[4]=0u+0x00000000u; // 8021AC54
  c->lr=0x8021AC5Cu; f_80219A24(c); // 8021AC58
  {uint32_t ea=c->r[2]+0xFFFFCEC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8021AC5C
  {uint32_t ea=c->r[30]+0x00001F6Cu; WF32(ea,c->f[0]);} // 8021AC60
L_8021AC64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AC64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021AC68
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021AC6C
  c->lr=c->r[0]; // 8021AC70
  c->r[1]=c->r[1]+0x00000010u; // 8021AC74
  return; // 8021AC78
}

// fn_8021AC7C
void f_8021AC7C(Ctx* __restrict c) {
  trace_call(0x8021AC7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AC7C
  c->r[0]=c->lr; // 8021AC80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AC84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AC88
  W32(c->r[1]+0x00000008u,c->r[30]); // 8021AC8C
  c->r[30]=c->r[3]|c->r[3]; // 8021AC90
  c->r[0]=R32(c->r[3]+0x000026C0u); // 8021AC94
  cmps(c,0,(int32_t)c->r[0],3); // 8021AC98
  if (crb(c,2)) { goto L_8021ACE8; } // 8021AC9C
  if (!crb(c,0)) { goto L_8021ACB0; } // 8021ACA0
  cmps(c,0,(int32_t)c->r[0],1); // 8021ACA4
  if (crb(c,2)) { goto L_8021ACBC; } // 8021ACA8
  goto L_8021ADF8; // 8021ACAC
L_8021ACB0:;
  cmps(c,0,(int32_t)c->r[0],5); // 8021ACB0
  if (!crb(c,0)) { goto L_8021ADF8; } // 8021ACB4
  goto L_8021AD14; // 8021ACB8
L_8021ACBC:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021ACBC
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ACC0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021ACC4
  c->lr=0x8021ACCCu; f_8016498C(c); // 8021ACC8
  cmps(c,0,(int32_t)c->r[3],0); // 8021ACCC
  if (crb(c,2)) { goto L_8021ADF8; } // 8021ACD0
  c->r[3]=c->r[30]|c->r[30]; // 8021ACD4
  c->lr=0x8021ACDCu; f_800AC7C4(c); // 8021ACD8
  c->r[0]=0u+0x00000002u; // 8021ACDC
  W32(c->r[30]+0x000026C0u,c->r[0]); // 8021ACE0
  goto L_8021ADF8; // 8021ACE4
L_8021ACE8:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021ACE8
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ACEC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021ACF0
  c->lr=0x8021ACF8u; f_8016498C(c); // 8021ACF4
  cmps(c,0,(int32_t)c->r[3],0); // 8021ACF8
  if (crb(c,2)) { goto L_8021ADF8; } // 8021ACFC
  c->r[3]=c->r[30]|c->r[30]; // 8021AD00
  c->lr=0x8021AD08u; f_800AC7C4(c); // 8021AD04
  c->r[0]=0u+0x00000004u; // 8021AD08
  W32(c->r[30]+0x000026C0u,c->r[0]); // 8021AD0C
  goto L_8021ADF8; // 8021AD10
L_8021AD14:;
  c->r[3]=0u+0x805D0000u; // 8021AD14
  {uint32_t ea=c->r[2]+0xFFFFCEB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AD18
  c->r[3]=c->r[3]+0x00006AE4u; // 8021AD1C
  c->lr=0x8021AD24u; f_801AE760(c); // 8021AD20
  cmps(c,0,(int32_t)c->r[3],0); // 8021AD24
  if (crb(c,2)) { goto L_8021AD40; } // 8021AD28
  c->r[3]=0u+0x803E0000u; // 8021AD2C
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AD30
  c->r[3]=c->r[3]+0x00002BA4u; // 8021AD34
  c->r[3]=c->r[3]+0x000000EBu; // 8021AD38
  c->lr=0x8021AD40u; f_80113DC0(c); // 8021AD3C
L_8021AD40:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 8021AD40
  {uint32_t ea=c->r[2]+0xFFFFCF20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AD44
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021AD48
  c->lr=0x8021AD50u; f_800C57C4(c); // 8021AD4C
  cmps(c,0,(int32_t)c->r[3],0); // 8021AD50
  if (crb(c,2)) { goto L_8021AD78; } // 8021AD54
  c->r[31]=0u+0x803E0000u; // 8021AD58
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AD5C
  c->r[31]=c->r[31]+0x00002BA4u; // 8021AD60
  c->r[3]=c->r[31]+0x00000081u; // 8021AD64
  c->lr=0x8021AD6Cu; f_80113D4C(c); // 8021AD68
  {uint32_t ea=c->r[2]+0xFFFFCF24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AD6C
  c->r[3]=c->r[31]+0x00000081u; // 8021AD70
  c->lr=0x8021AD78u; f_80113CD8(c); // 8021AD74
L_8021AD78:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 8021AD78
  {uint32_t ea=c->r[2]+0xFFFFCF28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AD7C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021AD80
  c->lr=0x8021AD88u; f_800C57C4(c); // 8021AD84
  cmps(c,0,(int32_t)c->r[3],0); // 8021AD88
  if (crb(c,2)) { goto L_8021ADB0; } // 8021AD8C
  c->r[31]=0u+0x803E0000u; // 8021AD90
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AD94
  c->r[31]=c->r[31]+0x00002BA4u; // 8021AD98
  c->r[3]=c->r[31]+0x000000D3u; // 8021AD9C
  c->lr=0x8021ADA4u; f_80113D4C(c); // 8021ADA0
  {uint32_t ea=c->r[2]+0xFFFFCF24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ADA4
  c->r[3]=c->r[31]+0x000000D3u; // 8021ADA8
  c->lr=0x8021ADB0u; f_80113CD8(c); // 8021ADAC
L_8021ADB0:;
  c->r[3]=R32(c->r[30]+0x00000974u); // 8021ADB0
  {uint32_t ea=c->r[2]+0xFFFFCEFCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ADB4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021ADB8
  c->lr=0x8021ADC0u; f_800C57C4(c); // 8021ADBC
  cmps(c,0,(int32_t)c->r[3],0); // 8021ADC0
  if (crb(c,2)) { goto L_8021ADF8; } // 8021ADC4
  c->r[4]=0u+0x803E0000u; // 8021ADC8
  c->r[3]=0u+0x805D0000u; // 8021ADCC
  c->r[4]=c->r[4]+0x00002BA4u; // 8021ADD0
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021ADD4
  c->r[3]=c->r[3]+0x00006AE4u; // 8021ADD8
  c->r[5]=0u+0x00000000u; // 8021ADDC
  c->r[4]=c->r[4]+0x000000F6u; // 8021ADE0
  c->lr=0x8021ADE8u; f_801AE4A4(c); // 8021ADE4
  c->r[3]=c->r[30]|c->r[30]; // 8021ADE8
  c->lr=0x8021ADF0u; f_800AC7C4(c); // 8021ADEC
  c->r[0]=0u+0x00000005u; // 8021ADF0
  W32(c->r[30]+0x000026C0u,c->r[0]); // 8021ADF4
L_8021ADF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021ADF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021ADFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8021AE00
  c->lr=c->r[0]; // 8021AE04
  c->r[1]=c->r[1]+0x00000010u; // 8021AE08
  return; // 8021AE0C
}

// fn_8021AE10
void f_8021AE10(Ctx* __restrict c) {
  trace_call(0x8021AE10u);
  return; // 8021AE10
}

// fn_8021AE14
void f_8021AE14(Ctx* __restrict c) {
  trace_call(0x8021AE14u);
  return; // 8021AE14
}

// fn_8021AE18
void f_8021AE18(Ctx* __restrict c) {
  trace_call(0x8021AE18u);
  return; // 8021AE18
}

// fn_8021AE1C
void f_8021AE1C(Ctx* __restrict c) {
  trace_call(0x8021AE1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AE1C
  c->r[0]=c->lr; // 8021AE20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AE24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AE28
  c->r[31]=c->r[3]|c->r[3]; // 8021AE2C
  c->r[0]=R32(c->r[3]+0x000026C0u); // 8021AE30
  cmps(c,0,(int32_t)c->r[0],4); // 8021AE34
  if (crb(c,2)) { goto L_8021AE78; } // 8021AE38
  if (!crb(c,0)) { goto L_8021AEA0; } // 8021AE3C
  cmps(c,0,(int32_t)c->r[0],1); // 8021AE40
  if (crb(c,2)) { goto L_8021AE4C; } // 8021AE44
  goto L_8021AEA0; // 8021AE48
L_8021AE4C:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021AE4C
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AE50
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021AE54
  c->lr=0x8021AE5Cu; f_8016498C(c); // 8021AE58
  cmps(c,0,(int32_t)c->r[3],0); // 8021AE5C
  if (crb(c,2)) { goto L_8021AEA0; } // 8021AE60
  c->r[3]=c->r[31]|c->r[31]; // 8021AE64
  c->lr=0x8021AE6Cu; f_800AC7C4(c); // 8021AE68
  c->r[0]=0u+0x00000003u; // 8021AE6C
  W32(c->r[31]+0x000026C0u,c->r[0]); // 8021AE70
  goto L_8021AEA0; // 8021AE74
L_8021AE78:;
  c->r[3]=R32(c->r[3]+0x00000974u); // 8021AE78
  {uint32_t ea=c->r[2]+0xFFFFCF2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AE7C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8021AE80
  c->lr=0x8021AE88u; f_800C57C4(c); // 8021AE84
  cmps(c,0,(int32_t)c->r[3],0); // 8021AE88
  if (crb(c,2)) { goto L_8021AEA0; } // 8021AE8C
  c->r[3]=c->r[31]|c->r[31]; // 8021AE90
  c->lr=0x8021AE98u; f_800AC7C4(c); // 8021AE94
  c->r[0]=0u+0x00000005u; // 8021AE98
  W32(c->r[31]+0x000026C0u,c->r[0]); // 8021AE9C
L_8021AEA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AEA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021AEA4
  c->lr=c->r[0]; // 8021AEA8
  c->r[1]=c->r[1]+0x00000010u; // 8021AEAC
  return; // 8021AEB0
}

// fn_8021AEB4
void f_8021AEB4(Ctx* __restrict c) {
  trace_call(0x8021AEB4u);
  return; // 8021AEB4
}

// fn_8021AEB8
void f_8021AEB8(Ctx* __restrict c) {
  trace_call(0x8021AEB8u);
  return; // 8021AEB8
}

// fn_8021AEBC
void f_8021AEBC(Ctx* __restrict c) {
  trace_call(0x8021AEBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AEBC
  c->r[0]=c->lr; // 8021AEC0
  {uint32_t ea=c->r[2]+0xFFFFCEC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021AEC4
  c->r[3]=0u+0x805D0000u; // 8021AEC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AECC
  c->r[3]=c->r[3]+0x00006AD8u; // 8021AED0
  c->f[3]=c->f[1]; // 8021AED4
  {uint32_t ea=c->r[2]+0xFFFFCEBCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8021AED8
  c->lr=0x8021AEE0u; f_8003F588(c); // 8021AEDC
  c->r[3]=0u+0x805D0000u; // 8021AEE0
  c->r[3]=c->r[3]+0x00006AE4u; // 8021AEE4
  c->lr=0x8021AEECu; f_801AE334(c); // 8021AEE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AEEC
  c->lr=c->r[0]; // 8021AEF0
  c->r[1]=c->r[1]+0x00000010u; // 8021AEF4
  return; // 8021AEF8
}

// fn_8021AEFC
void f_8021AEFC(Ctx* __restrict c) {
  trace_call(0x8021AEFCu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AEFC
  f_8021AACC(c); return; // 8021AF00
}

// fn_8021AF04
void f_8021AF04(Ctx* __restrict c) {
  trace_call(0x8021AF04u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF04
  f_8021AEB8(c); return; // 8021AF08
}

// fn_8021AF0C
void f_8021AF0C(Ctx* __restrict c) {
  trace_call(0x8021AF0Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF0C
  f_8021AE14(c); return; // 8021AF10
}

// fn_8021AF14
void f_8021AF14(Ctx* __restrict c) {
  trace_call(0x8021AF14u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF14
  f_8021A61C(c); return; // 8021AF18
}

// fn_8021AF1C
void f_8021AF1C(Ctx* __restrict c) {
  trace_call(0x8021AF1Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF1C
  f_8021AE18(c); return; // 8021AF20
}

// fn_8021AF24
void f_8021AF24(Ctx* __restrict c) {
  trace_call(0x8021AF24u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF24
  f_8021AAD0(c); return; // 8021AF28
}

// fn_8021AF2C
void f_8021AF2C(Ctx* __restrict c) {
  trace_call(0x8021AF2Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF2C
  f_80219A8C(c); return; // 8021AF30
}

// fn_8021AF34
void f_8021AF34(Ctx* __restrict c) {
  trace_call(0x8021AF34u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF34
  f_8021AAC8(c); return; // 8021AF38
}

// fn_8021AF3C
void f_8021AF3C(Ctx* __restrict c) {
  trace_call(0x8021AF3Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF3C
  f_8021AEB4(c); return; // 8021AF40
}

// fn_8021AF44
void f_8021AF44(Ctx* __restrict c) {
  trace_call(0x8021AF44u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF44
  f_8021AE10(c); return; // 8021AF48
}

// fn_8021AF4C
void f_8021AF4C(Ctx* __restrict c) {
  trace_call(0x8021AF4Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF4C
  f_8021A7D4(c); return; // 8021AF50
}

// fn_8021AF54
void f_8021AF54(Ctx* __restrict c) {
  trace_call(0x8021AF54u);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF54
  f_8021AE1C(c); return; // 8021AF58
}

// fn_8021AF5C
void f_8021AF5C(Ctx* __restrict c) {
  trace_call(0x8021AF5Cu);
  c->r[3]=c->r[3]+0xFFFFFFB8u; // 8021AF5C
  f_8021AC7C(c); return; // 8021AF60
}

// fn_8021AF64
void f_8021AF64(Ctx* __restrict c) {
  trace_call(0x8021AF64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AF64
  c->r[0]=c->lr; // 8021AF68
  c->r[4]=0u+0x00000005u; // 8021AF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AF70
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021AF74
  c->r[31]=0u+0x804B0000u; // 8021AF78
  c->r[30]=c->r[3]|c->r[3]; // 8021AF7C
  c->r[3]=c->r[31]+0x00005CC8u; // 8021AF80
  c->lr=0x8021AF88u; f_801489B0(c); // 8021AF84
  c->r[3]=c->r[31]+0x00005CC8u; // 8021AF88
  c->r[4]=0u+0x0000000Du; // 8021AF8C
  c->r[3]=c->r[3]+0x00003780u; // 8021AF90
  c->lr=0x8021AF98u; f_801F5C40(c); // 8021AF94
  c->r[3]=0u+0x00000000u; // 8021AF98
  c->r[0]=0u+0x00000001u; // 8021AF9C
  W8(c->r[30]+0x00000128u,c->r[3]); // 8021AFA0
  W8(c->r[30]+0x00000129u,c->r[0]); // 8021AFA4
  W8(c->r[30]+0x0000012Au,c->r[3]); // 8021AFA8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021AFAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021AFB0
  c->lr=c->r[0]; // 8021AFB4
  c->r[1]=c->r[1]+0x00000010u; // 8021AFB8
  return; // 8021AFBC
}

// fn_8021AFC0
void f_8021AFC0(Ctx* __restrict c) {
  trace_call(0x8021AFC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021AFC0
  c->r[0]=c->lr; // 8021AFC4
  c->r[5]=0u+0x804B0000u; // 8021AFC8
  c->r[4]=0u+0x0000000Du; // 8021AFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021AFD0
  c->r[5]=c->r[5]+0x00005CC8u; // 8021AFD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021AFD8
  c->r[31]=c->r[3]|c->r[3]; // 8021AFDC
  c->r[3]=c->r[5]+0x00003780u; // 8021AFE0
  c->lr=0x8021AFE8u; f_801F5CE8(c); // 8021AFE4
  cmps(c,0,(int32_t)c->r[3],0); // 8021AFE8
  if (!crb(c,2)) { goto L_8021B000; } // 8021AFEC
  c->r[3]=0u+0x80440000u; // 8021AFF0
  c->r[4]=c->r[31]|c->r[31]; // 8021AFF4
  c->r[3]=c->r[3]+0x000010F8u; // 8021AFF8
  c->lr=0x8021B000u; f_8003D798(c); // 8021AFFC
L_8021B000:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B000
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021B004
  c->lr=c->r[0]; // 8021B008
  c->r[1]=c->r[1]+0x00000010u; // 8021B00C
  return; // 8021B010
}

// fn_8021B014
void f_8021B014(Ctx* __restrict c) {
  trace_call(0x8021B014u);
  c->r[3]=0u+0x804B0000u; // 8021B014
  c->r[4]=0u+0x00000005u; // 8021B018
  c->r[3]=c->r[3]+0x00005CC8u; // 8021B01C
  f_80148F4C(c); return; // 8021B020
}

// fn_8021B024
void f_8021B024(Ctx* __restrict c) {
  trace_call(0x8021B024u);
  c->r[3]=0u+0x804B0000u; // 8021B024
  c->r[3]=c->r[3]+0x00005CC8u; // 8021B028
  c->r[3]=c->r[3]+0x00010000u; // 8021B02C
  c->r[3]=R32(c->r[3]+0xFFFFFB0Cu); // 8021B030
  return; // 8021B034
}

// fn_8021B038
void f_8021B038(Ctx* __restrict c) {
  trace_call(0x8021B038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B038
  c->r[0]=c->lr; // 8021B03C
  cmps(c,0,(int32_t)c->r[3],0); // 8021B040
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B044
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021B048
  c->r[30]=c->r[3]|c->r[3]; // 8021B04C
  c->r[31]=c->r[4]|c->r[4]; // 8021B050
  if (crb(c,2)) { goto L_8021B070; } // 8021B054
  c->r[4]=0u+0x00000000u; // 8021B058
  c->lr=0x8021B060u; f_801F519C(c); // 8021B05C
  cmps(c,0,(int32_t)c->r[31],0); // 8021B060
  if (!crb(c,1)) { goto L_8021B070; } // 8021B064
  c->r[3]=c->r[30]|c->r[30]; // 8021B068
  c->lr=0x8021B070u; f_802896EC(c); // 8021B06C
L_8021B070:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B070
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021B074
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B078
  c->lr=c->r[0]; // 8021B07C
  c->r[1]=c->r[1]+0x00000010u; // 8021B080
  return; // 8021B084
}

// fn_8021B088
void f_8021B088(Ctx* __restrict c) {
  trace_call(0x8021B088u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B088
  c->r[0]=c->lr; // 8021B08C
  {uint32_t ea=c->r[2]+0xFFFFCF30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8021B090
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B094
  c->f[3]=c->f[1]; // 8021B098
  {uint32_t ea=c->r[2]+0xFFFFCF34u; c->f[2]=c->ps1[2]=RF32(ea);} // 8021B09C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021B0A0
  c->r[31]=0u+0x805D0000u; // 8021B0A4
  c->r[31]=c->r[31]+0x00006CC8u; // 8021B0A8
  c->r[3]=c->r[31]+0x00000000u; // 8021B0AC
  c->lr=0x8021B0B4u; f_8003F588(c); // 8021B0B0
  c->r[3]=c->r[31]+0x00000018u; // 8021B0B4
  c->lr=0x8021B0BCu; f_8021B0E4(c); // 8021B0B8
  c->r[4]=0u+0x80220000u; // 8021B0BC
  c->r[3]=c->r[31]+0x00000018u; // 8021B0C0
  c->r[4]=c->r[4]+0xFFFFB038u; // 8021B0C4
  c->r[5]=c->r[31]+0x0000000Cu; // 8021B0C8
  c->lr=0x8021B0D0u; f_802895A4(c); // 8021B0CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B0D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021B0D4
  c->lr=c->r[0]; // 8021B0D8
  c->r[1]=c->r[1]+0x00000010u; // 8021B0DC
  return; // 8021B0E0
}

// fn_8021B0E4
void f_8021B0E4(Ctx* __restrict c) {
  trace_call(0x8021B0E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B0E4
  c->r[0]=c->lr; // 8021B0E8
  c->r[4]=0u+0x00000009u; // 8021B0EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B0F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021B0F4
  c->r[31]=c->r[3]|c->r[3]; // 8021B0F8
  c->lr=0x8021B100u; f_801F5138(c); // 8021B0FC
  c->r[4]=0u+0x80410000u; // 8021B100
  c->r[3]=c->r[31]|c->r[31]; // 8021B104
  c->r[4]=c->r[4]+0xFFFFCDE0u; // 8021B108
  W32(c->r[31]+0x00000124u,c->r[4]); // 8021B10C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021B110
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B114
  c->lr=c->r[0]; // 8021B118
  c->r[1]=c->r[1]+0x00000010u; // 8021B11C
  return; // 8021B120
}

// fn_8021B124
void f_8021B124(Ctx* __restrict c) {
  trace_call(0x8021B124u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B124
  c->r[0]=c->lr; // 8021B128
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021B12C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021B130
  c->r[29]=c->r[4]|c->r[4]; // 8021B134
  c->r[30]=c->r[5]|c->r[5]; // 8021B138
  c->r[28]=c->r[3]|c->r[3]; // 8021B13C
  c->r[31]=c->r[6]|c->r[6]; // 8021B140
  c->r[4]=0u+0x00000000u; // 8021B144
  c->r[5]=0u+0x0000001Cu; // 8021B148
  c->lr=0x8021B150u; f_800043EC(c); // 8021B14C
  c->r[0]=0u+0x00000001u; // 8021B150
  W32(c->r[28]+0x00000000u,c->r[29]); // 8021B154
  W8(c->r[28]+0x00000018u,c->r[0]); // 8021B158
  W8(c->r[28]+0x00000019u,c->r[30]); // 8021B15C
  W8(c->r[28]+0x0000001Au,c->r[31]); // 8021B160
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=28;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021B164
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021B168
  c->lr=c->r[0]; // 8021B16C
  c->r[1]=c->r[1]+0x00000020u; // 8021B170
  return; // 8021B174
}

// fn_8021B178
void f_8021B178(Ctx* __restrict c) {
  trace_call(0x8021B178u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B178
  c->r[0]=c->lr; // 8021B17C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021B184
  c->r[31]=c->r[3]|c->r[3]; // 8021B188
  c->lr=0x8021B190u; f_801D7ABC(c); // 8021B18C
  c->r[4]=0u+0x80410000u; // 8021B190
  c->r[3]=c->r[31]|c->r[31]; // 8021B194
  c->r[4]=c->r[4]+0xFFFFCF20u; // 8021B198
  W32(c->r[31]+0x00000008u,c->r[4]); // 8021B19C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021B1A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B1A4
  c->lr=c->r[0]; // 8021B1A8
  c->r[1]=c->r[1]+0x00000010u; // 8021B1AC
  return; // 8021B1B0
}

// dtor_8021B1B4
void f_8021B1B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B1B4
  c->r[0]=c->lr; // 8021B1B8
  cmps(c,0,(int32_t)c->r[3],0); // 8021B1BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B1C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021B1C4
  c->r[30]=c->r[3]|c->r[3]; // 8021B1C8
  c->r[31]=c->r[4]|c->r[4]; // 8021B1CC
  if (crb(c,2)) { goto L_8021B1EC; } // 8021B1D0
  c->r[4]=0u+0x00000000u; // 8021B1D4
  c->lr=0x8021B1DCu; f_801D7AE0(c); // 8021B1D8
  cmps(c,0,(int32_t)c->r[31],0); // 8021B1DC
  if (!crb(c,1)) { goto L_8021B1EC; } // 8021B1E0
  c->r[3]=c->r[30]|c->r[30]; // 8021B1E4
  c->lr=0x8021B1ECu; f_802896EC(c); // 8021B1E8
L_8021B1EC:;
  c->r[3]=c->r[30]|c->r[30]; // 8021B1EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=30;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021B1F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B1F4
  c->lr=c->r[0]; // 8021B1F8
  c->r[1]=c->r[1]+0x00000010u; // 8021B1FC
  return; // 8021B200
}

// fn_8021B204
void f_8021B204(Ctx* __restrict c) {
  trace_call(0x8021B204u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B204
  c->r[0]=c->lr; // 8021B208
  c->r[4]=0u+0x803E0000u; // 8021B20C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8021B210
  c->r[4]=c->r[4]+0x00002CA8u; // 8021B214
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8021B218
  c->r[31]=c->r[3]|c->r[3]; // 8021B21C
  c->r[3]=c->r[3]+0x00000018u; // 8021B220
  c->lr=0x8021B228u; f_802933D8(c); // 8021B224
  c->r[0]=0u+0x00000000u; // 8021B228
  W32(c->r[31]+0x0000107Cu,c->r[0]); // 8021B22C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8021B230
  c->r[0]=R32(c->r[1]+0x00000014u); // 8021B234
  c->lr=c->r[0]; // 8021B238
  c->r[1]=c->r[1]+0x00000010u; // 8021B23C
  return; // 8021B240
}

// fn_8021B244
void f_8021B244(Ctx* __restrict c) {
  trace_call(0x8021B244u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8021B244
  c->r[0]=c->lr; // 8021B248
  W32(c->r[1]+0x00000024u,c->r[0]); // 8021B24C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8021B250
  c->r[30]=0u+0x80460000u; // 8021B254
  c->r[30]=c->r[30]+0xFFFFD468u; // 8021B258
  c->r[29]=c->r[3]|c->r[3]; // 8021B25C
  c->r[4]=R32(c->r[3]+0x00001010u); // 8021B260
  c->r[3]=c->r[30]+0x00000014u; // 8021B264
  c->lr=0x8021B26Cu; f_80048610(c); // 8021B268
  c->r[31]=0u+0xFFFFFFFFu; // 8021B26C
  c->r[4]=R32(c->r[29]+0x00001018u); // 8021B270
  W32(c->r[29]+0x00001010u,c->r[31]); // 8021B274
  c->r[3]=c->r[30]+0x00000014u; // 8021B278
  c->lr=0x8021B280u; f_80048610(c); // 8021B27C
  W32(c->r[29]+0x00001018u,c->r[31]); // 8021B280
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=29;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8021B284
  c->r[0]=R32(c->r[1]+0x00000024u); // 8021B288
  c->lr=c->r[0]; // 8021B28C
  c->r[1]=c->r[1]+0x00000020u; // 8021B290
  return; // 8021B294
}

// fn_8021B298
void f_8021B298(Ctx* __restrict c) {
  trace_call(0x8021B298u);
  c->r[0]=R32(c->r[3]+0x0000108Cu); // 8021B298
  c->r[4]=0u+0x00000000u; // 8021B29C
  W32(c->r[3]+0x00000FF8u,c->r[4]); // 8021B2A0
  c->r[5]=rotl(c->r[0],3)&0x00000001u; // 8021B2A4
  c->r[0]=rotl(c->r[0],0)&0xDFFFFFFFu; // 8021B2A8
  W32(c->r[3]+0x00000FF4u,c->r[5]); // 8021B2AC
  W32(c->r[3]+0x00000FFCu,c->r[4]); // 8021B2B0
  W32(c->r[3]+0x0000108Cu,c->r[0]); // 8021B2B4
  return; // 8021B2B8
}

